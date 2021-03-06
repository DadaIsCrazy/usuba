#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>


#ifdef UA_B

#include "clyde_ua_bitslice.c"

/* Orthogonalization stuffs */
static uint64_t mask_l[6] = {
	0xaaaaaaaaaaaaaaaaUL,
	0xccccccccccccccccUL,
	0xf0f0f0f0f0f0f0f0UL,
	0xff00ff00ff00ff00UL,
	0xffff0000ffff0000UL,
	0xffffffff00000000UL
};
static uint64_t mask_r[6] = {
	0x5555555555555555UL,
	0x3333333333333333UL,
	0x0f0f0f0f0f0f0f0fUL,
	0x00ff00ff00ff00ffUL,
	0x0000ffff0000ffffUL,
	0x00000000ffffffffUL
};
void transpose(uint64_t data[]) {
  for (int i = 0; i < 6; i ++) {
    int n = (1UL << i);
    for (int j = 0; j < 64; j += (2 * n))
      for (int k = 0; k < n; k ++) {
        uint64_t u = data[j + k] & mask_l[i];
        uint64_t v = data[j + k] & mask_r[i];
        uint64_t x = data[j + n + k] & mask_l[i];
        uint64_t y = data[j + n + k] & mask_r[i];
        data[j + k] = u | (x >> n);
        data[j + n + k] = (v << n) | y;
      }
  }
}

void clyde128_encrypt(unsigned char* m, const unsigned char* c,
                      const unsigned char* t, const unsigned char* k) {
  uint64_t *plain  = (uint64_t*)c;
  uint64_t *key    = (uint64_t*)k;
  uint64_t *tweak  = (uint64_t*)t;
  uint64_t *cipher = (uint64_t*)m;

#define swap(a,b) { uint64_t _tmp_ = a; a = b; b = _tmp_; }


#define bitslice(var)                                   \
  uint64_t var##_bs[128];                               \
  for (int i = 0; i < 64; i++) {                        \
    memcpy(&var##_bs[i],var,8);                         \
    memcpy(&var##_bs[64+i],&var[1],8);                  \
  }                                                     \
  transpose(var##_bs);                                  \
  transpose(&var##_bs[64]);                             \
  for (int i = 0; i < 2; i++)                           \
    for (int j = 0; j < 32; j++)                        \
      swap(var##_bs[i*64+j],var##_bs[i*64+j+32]);       \
  
  /* inputs */
  bitslice(plain);
  bitslice(key);
  bitslice(tweak);
  
  uint64_t cipher_bs[128];
  clyde128__(plain_bs, key_bs, tweak_bs, cipher_bs);

  /* output */
  for (int i = 0; i < 2; i++)
    for (int j = 0; j < 32; j++)
      swap(cipher_bs[i*64+j],cipher_bs[i*64+j+32]);
  transpose(cipher_bs);
  transpose(&cipher_bs[64]);
  memcpy(cipher, cipher_bs, 8);
  memcpy(&cipher[1], &cipher_bs[64], 8);
  
}


#elif defined(UA_V)

#include "clyde_ua_vslice.c"

void clyde128_encrypt(unsigned char* m, const unsigned char* c,
                      const unsigned char* t, const unsigned char* k) {
  uint32_t *plain  = (uint32_t*)c;
  uint32_t *key    = (uint32_t*)k;
  uint32_t *tweak  = (uint32_t*)t;
  uint32_t *cipher = (uint32_t*)m;
  
  clyde128__(plain, key, tweak, cipher);
}

#elif defined(REF)

#include "primitives.h"
#include "primitives.c"
#else
#error Define UA_V, UA_B or REF.
#endif


void verif_clyde() {
  unsigned char plain[16] = { 0x00, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77,
                              0x88, 0x99, 0xaa, 0xbb, 0xcc, 0xdd, 0xee, 0xff };
  unsigned char key[16]   = { 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
                              0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f };
  unsigned char tweak[16] = { 0xff, 0xee, 0xdd, 0xcc, 0xbb, 0xaa, 0x99, 0x88,
                              0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00 };
  unsigned char cipher[16];

  clyde128_encrypt(cipher, plain, tweak, key);

  for (int i = 0; i < 16; i++) printf("%02x ", cipher[i]);
  printf("\n");

  unsigned char expected[16] = { 0x00, 0xc7, 0x13, 0x6e, 0xdc, 0x5e, 0x41, 0x52,
                                 0xee, 0x6f, 0x2d, 0xdb, 0x9b, 0x7f, 0xaa, 0xfa };

  if (memcmp(cipher, expected, 16) != 0) {
    fprintf(stderr, "Encryption error.\n");
  } else {
    fprintf(stderr, "Encryption seems OK.\n");
  }
}

int main() {

  verif_clyde();

} 
