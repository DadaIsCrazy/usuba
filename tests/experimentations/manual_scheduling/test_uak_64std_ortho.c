#include <stdlib.h>
#include <stdio.h>
#include "tmmintrin.h"
#include "emmintrin.h"
#include "smmintrin.h"
#include "immintrin.h"

#include "des_ua_kwan_Std64.c"

static unsigned long mask_l[6] = {
  0xaaaaaaaaaaaaaaaaUL,
  0xccccccccccccccccUL,
  0xf0f0f0f0f0f0f0f0UL,
  0xff00ff00ff00ff00UL,
  0xffff0000ffff0000UL,
  0xffffffff00000000UL
};

static unsigned long mask_r[6] = {
  0x5555555555555555UL,
  0x3333333333333333UL,
  0x0f0f0f0f0f0f0f0fUL,
  0x00ff00ff00ff00ffUL,
  0x0000ffff0000ffffUL,
  0x00000000ffffffffUL
};


void orthogonalize(unsigned long data[]) {
  for (int i = 0; i < 6; i ++) {
    int n = (1UL << i);
    for (int j = 0; j < 64; j += (2 * n))
      for (int k = 0; k < n; k ++) {
        unsigned long u = data[j + k] & mask_l[i];
        unsigned long v = data[j + k] & mask_r[i];
        unsigned long x = data[j + n + k] & mask_l[i];
        unsigned long y = data[j + n + k] & mask_r[i];
        data[j + k] = u | (x >> n);
        data[j + n + k] = (v << n) | y;
      }
  }
}

int main() {
  FILE* fh_in = fopen("input.txt","rb");
  FILE* fh_out = fopen("output.txt","wb");
  
  unsigned long *plain = malloc(64 * sizeof *plain);

  unsigned long *cipher = malloc(64 * sizeof *cipher);
  
  /* Hardcoding the key for now. */
  unsigned char key_std_char[8] = {0x13,0x34,0x57,0x79,0x9B,0xBC,0xDF,0xF1};
  unsigned long key_std =
    ((unsigned long) key_std_char[0]) << 56 |
    ((unsigned long) key_std_char[1]) << 48  |
    ((unsigned long) key_std_char[2]) << 40 |
    ((unsigned long) key_std_char[3]) << 32 |
    ((unsigned long) key_std_char[4]) << 24 |
    ((unsigned long) key_std_char[5]) << 16 |
    ((unsigned long) key_std_char[6]) << 8 |
    ((unsigned long) key_std_char[7]) << 0;
  unsigned long *key_ortho = aligned_alloc(32,64 * sizeof *key_ortho);
  
  for (int i = 0; i < 64; i++)
    if (key_std >> i & 1)
      key_ortho[63-i] = -1;
    else
      key_ortho[63-i] = 0;
  
  
  while(fread(plain, 8, 64, fh_in)) {

    for (int i = 0; i < 64; i++) {
      unsigned long l = plain[i];
      plain[i] = (l >> 56) | (l >> 40 & 0x00FF00) | (l >> 24 & 0x00FF0000)
        | (l >> 8 & 0x00FF000000) | (l << 8 & 0x00FF00000000) | (l << 24 & 0x00FF0000000000)
        | (l << 40 & 0x00FF000000000000) | (l << 56);
    }

    orthogonalize(plain);
    
    des__(plain, key_ortho, cipher);
             
    orthogonalize(cipher);
    
    for (int i = 0; i < 64; i++) {
      unsigned long l = cipher[i];
      cipher[i] = (l >> 56) | (l >> 40 & 0x00FF00) | (l >> 24 & 0x00FF0000)
        | (l >> 8 & 0x00FF000000) | (l << 8 & 0x00FF00000000) | (l << 24 & 0x00FF0000000000)
        | (l << 40 & 0x00FF000000000000) | (l << 56);
    }

    fwrite(cipher, 8, 64, fh_out);
  }

  fclose(fh_in);
  fclose(fh_out);
}