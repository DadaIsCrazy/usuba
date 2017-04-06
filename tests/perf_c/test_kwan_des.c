#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "kwan_des.c"

void print_int64 (unsigned long c) {
  for (int i = 0; i < 64; i++)
    printf("%lu", c >> i & 1);
  printf("\n");
}


void orthogonalize(unsigned long *in, unsigned long *out) {
  for (int j = 0; j < 64; j++) {
    out[j] = 0;
    for (int i = 0; i < 64; i++)
      out[j] |= (in[i]>>j & 1) << i;
  }
}

void unorthogonalize(unsigned long *in, unsigned long *out) {

  for (int i = 0; i < 64; i++) out[i] = 0;
  
  for (int j = 0; j < 64; j++) {
    for (int i = 0; i < 64; i++)
      out[i] |= (in[j]>>i & 1) << j;
  }
}

int main() {

  FILE* fh_in = fopen("input.txt","rb");
  FILE* fh_out = fopen("output.txt","wb");
  
  unsigned long *plain_std = malloc(128 * sizeof *plain_std);
  unsigned long *plain_ortho = malloc(64 * sizeof *plain_ortho);

  unsigned long *cipher_ortho = malloc(64 * sizeof *cipher_ortho);
  unsigned long *cipher_std = malloc(128 * sizeof *cipher_std);
  
  /* Hardcoding the key for now. */
  unsigned char key_std_char[8] = {0x13,0x34,0x57,0x79,0x9B,0xBC,0xDF,0xF1};
  unsigned long key_std = *(unsigned long*) key_std_char;
  unsigned long *key_ortho = malloc(64 * sizeof *key_ortho);
  for (int i = 0; i < 64; i++)
    if (key_std >> i & 1)
      key_ortho[i] = -1;
    else
      key_ortho[i] = 0;
  
  
  while(fread(plain_std, 8, 64, fh_in)) {

    orthogonalize(plain_std, plain_ortho);
    
    /* print_int64(plain_std[0]); */
    /* print_nth_bit(plain_ortho,0); */
    
    deseval(plain_ortho, cipher_ortho, key_ortho);
             
    unorthogonalize(cipher_ortho,cipher_std);
    
    fwrite(cipher_std, 8, 64, fh_out);
  }

  fclose(fh_in);
  fclose(fh_out);
}
