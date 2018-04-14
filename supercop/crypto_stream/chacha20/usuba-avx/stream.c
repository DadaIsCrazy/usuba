#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <x86intrin.h>

#include "crypto_stream.h"
#include "api.h"

/* ******************************************************************* */
/*   Just redifine those defines for a new implementation              */
/*                                                                     */
/* ******************************************************************* */

/* Include your .h (or .c if you're a durty being) here. */
#include "AVX.h"
#include "chacha20.c"

/* The size of the block, in bytes. */
#define BLOCK_SIZE 64

/* How many blocks can be processed at once. */
#define PARALLEL_FACTOR 8


unsigned int chacha_const[4] = { 0x61707865, 0x3320646e, 0x79622d32, 0x6b206574 };


#define init()                                                  \
  DATATYPE state[16];                                           \
  for (int i = 0; i < 4; i++)                                   \
    state[i] = _mm256_set1_epi32(chacha_const[i]);              \
  for (int i = 0; i < 8; i++)                                   \
    state[i+4] = _mm256_set1_epi32(((int*)k)[i]);               \
  for (int i = 0; i < 2; i++)                                   \
    state[i+14] = _mm256_set1_epi32(((int*)n)[i]);              \
  for (int i = 0; i < 2; i++)                                   \
    state[i+12] = _mm256_setzero_si256();                       \


#define load_input()                                                   \
  state[12] = _mm256_set_epi32(c1,c1+1,c1+2,c1+3,c1+4,c1+5,c1+6,c1+7);  \
  state[13] = _mm256_set1_epi32(c2);                                    \
  c1 += 8;                                                              \
  if (!c1) c2++;                                                        \
  signed_len -= BLOCK_SIZE*PARALLEL_FACTOR;                             \
  unsigned int out_state[16*PARALLEL_FACTOR];                           \
  int nb_blocks = PARALLEL_FACTOR;                                      \
   
/* This macro should just call the encryption function, with the parameters
   input, key and out_buff */
#define encrypt2()                                                      \
  Chacha20__(state,(DATATYPE*)out);                                     \
  for (int i = 0; i < 16; i++)                                          \
    ((DATATYPE*)out)[i] = _mm256_add_epi32(((DATATYPE*)out)[i],state[i]); \

// ~ 0.3 cycles/byte
#define encrypt()                                                       \
  DATATYPE cipher[16];                                                  \
  Chacha20__(state,cipher);                                             \
  for (int i = 0; i < 16; i++)                                          \
    cipher[i] = _mm256_add_epi32(cipher[i],state[i]);                   \
  unsigned int *pre_cipher = (unsigned int*)cipher;                     \
  for (int i = 0; i < PARALLEL_FACTOR; i++)                             \
    for (int j = 0; j < 16; j++)                                        \
      out_state[i*16+j] = pre_cipher[j*4+(7-i)];                        \


void print_state(unsigned int state[16]) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++)
      printf("%08x ",state[i*4+j]);
    printf("\n");
  }
  printf("\n");
}

/* ******************************************************************* */
/* This part should be independent of the ciphers => do not modify it. */
/*                                                                     */
/* ******************************************************************* */

int crypto_stream(unsigned char *out,
                  unsigned long long outlen,
                  const unsigned char *n,
                  const unsigned char *k
                  )
{
  long long signed_len = outlen;

  /* Key schedule */
  init();

  /* Copying the counter */
  unsigned int c1 = 0;
  unsigned int c2 = 0;

  /* Encrypting... */
  while (signed_len > 0) {
    /* Loading the input (from the counter) */
    load_input();
    /* Encrypting it */
    encrypt();
    /* Storing the output */
    memcpy(out,out_state,nb_blocks*BLOCK_SIZE + (signed_len < 0 ? signed_len : 0) );
    /* Updating the output pointer */
    out += nb_blocks * BLOCK_SIZE;
  }

  return 0;

}


int crypto_stream_xor( unsigned char *out,
                       const unsigned char *in,
                       unsigned long long inlen,
                       const unsigned char *n,
                       const unsigned char *k
                       )
{
  long long signed_len = inlen;
  
  /* Key schedule */
  init();
  
  /* Copying the counter */
  unsigned int c1 = 0;
  unsigned int c2 = 0;

  /* Encrypting the input... */
  while (signed_len > 0) {
    /* Loading the input (from the counter) */
    load_input();
    /* Encrypting it */
    encrypt();
    /* Xoring the ciphertext with the input to produce the output */
    unsigned char* out_state_char = (unsigned char*) out_state;
    unsigned long encrypted = nb_blocks * BLOCK_SIZE + (signed_len < 0 ? signed_len : 0);
    for ( ; encrypted >= 8; encrypted -= 8) {
      *((unsigned long*)out) = *((unsigned long*)out_state_char) ^ *((unsigned long*)in);
      out += 8;
      out_state_char += 8;
      in += 8;
    }
    
    for ( ; encrypted >= 4; encrypted -= 4) {
      *((unsigned int*)out) = *((unsigned int*)out_state_char) ^ *((unsigned int*)in);
      out += 4;
      out_state_char += 4;
      in += 4;
    }

    for ( ; encrypted > 0; encrypted-- ) {
      *((unsigned char*)out) = *((unsigned char*)out_state_char) ^ *((unsigned char*)in);
      out++;
      out_state_char++;
      in++;
    }
  }

  return 0;
}
