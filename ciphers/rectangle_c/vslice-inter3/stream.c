#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <x86intrin.h>

#include "rectangle.h"

#ifdef std
#define GP
#endif

#ifdef sse
#define SSE
#endif

#ifdef avx
#define AVX
#endif

#ifdef avx512
#define AVX512
#endif

#define BLOCK_SIZE 8

/* **************************** GP **********************************/
#ifdef GP
#define PARALLEL_FACTOR 3
#define NO_RUNTIME
#define DATATYPE uint16_t
#define BITS_PER_REG 16
#include "STD.h"
#define rectangle(in,key,out) \
  Rectangle__((DATATYPE*)in,((DATATYPE*)in)+4,((DATATYPE*)in)+8,key,\
              (DATATYPE*)out,((DATATYPE*)out)+4,((DATATYPE*)out)+8)

void ortho_speed ( unsigned char *out,
                   unsigned char *in,
                   unsigned long long inlen,
                   unsigned char *k
                   ) {
  return;
}


/* **************************** SSE *********************************/
#elif defined SSE
#define PARALLEL_FACTOR 24

#define NO_RUNTIME
#include "SSE.h"

#define TRANSPOSE4_IN(x0, x1, x2, x3) {                    \
    __m128i xmm01 = x0;                                 \
    __m128i xmm23 = x1;                                 \
    __m128i xmm45 = x2;                                 \
    __m128i xmm67 = x3;                                 \
	__m128i xmm02 = _mm_unpacklo_epi64(xmm01, xmm23);   \
    __m128i xmm13 = _mm_unpackhi_epi64(xmm01, xmm23);   \
	xmm01 = _mm_unpacklo_epi16(xmm02, xmm13);           \
	xmm23 = _mm_unpackhi_epi16(xmm02, xmm13);           \
	xmm02 = _mm_unpacklo_epi32(xmm01, xmm23);           \
	xmm13 = _mm_unpackhi_epi32(xmm01, xmm23);           \
	__m128i xmm46 = _mm_unpacklo_epi64(xmm45, xmm67);   \
	__m128i xmm57 = _mm_unpackhi_epi64(xmm45, xmm67);   \
	xmm45 = _mm_unpacklo_epi16(xmm46, xmm57);           \
	xmm67 = _mm_unpackhi_epi16(xmm46, xmm57);           \
	xmm46 = _mm_unpacklo_epi32(xmm45, xmm67);           \
	xmm57 = _mm_unpackhi_epi32(xmm45, xmm67);           \
	x0    = _mm_unpacklo_epi64(xmm02, xmm46);           \
	x1    = _mm_unpackhi_epi64(xmm02, xmm46);           \
	x2    = _mm_unpacklo_epi64(xmm13, xmm57);           \
	x3    = _mm_unpackhi_epi64(xmm13, xmm57);           \
  }
#define TRANSPOSE4_OUT(x0, x1, x2, x3) {                \
	__m128i xmm01 = _mm_unpacklo_epi16(x0, x1);         \
	__m128i xmm45 = _mm_unpackhi_epi16(x0, x1);         \
	__m128i xmm23 = _mm_unpacklo_epi16(x2, x3);         \
	__m128i xmm67 = _mm_unpackhi_epi16(x2, x3);         \
	x0    = _mm_unpacklo_epi32(xmm01, xmm23);           \
	x1    = _mm_unpackhi_epi32(xmm01, xmm23);           \
	x2    = _mm_unpacklo_epi32(xmm45, xmm67);           \
	x3    = _mm_unpackhi_epi32(xmm45, xmm67);           \
  }

#define rectangle(in,key,out) {                                         \
    __m128i* plain  = (__m128i*)in;                                     \
    __m128i* cipher = (__m128i*)out;                                    \
    TRANSPOSE4_IN(plain[0],plain[1],plain[2],plain[3]);                 \
    TRANSPOSE4_IN(plain[4],plain[5],plain[6],plain[7]);                 \
    TRANSPOSE4_IN(plain[8],plain[9],plain[10],plain[11]);               \
    Rectangle__(plain, &plain[4], &plain[8], key, cipher, &cipher[4], &cipher[8]); \
    TRANSPOSE4_OUT(cipher[0],cipher[1],cipher[2],cipher[3]);            \
    TRANSPOSE4_OUT(cipher[4],cipher[5],cipher[6],cipher[7]);            \
    TRANSPOSE4_OUT(cipher[8],cipher[9],cipher[10],cipher[11]);          \
  }

void ortho_speed ( unsigned char *out,
                   unsigned char *in,
                   unsigned long long inlen,
                   unsigned char *k
                   ) {
  __m128i* buff = (__m128i*)out;
  for (int i = 0; i < inlen; i += PARALLEL_FACTOR * BLOCK_SIZE) {
    TRANSPOSE4_IN(buff[0],buff[1],buff[2],buff[3]);
    TRANSPOSE4_IN(buff[4],buff[5],buff[6],buff[7]);
    TRANSPOSE4_IN(buff[8],buff[9],buff[10],buff[11]);
    TRANSPOSE4_OUT(buff[0],buff[1],buff[2],buff[3]);
    TRANSPOSE4_OUT(buff[4],buff[5],buff[6],buff[7]);
    TRANSPOSE4_OUT(buff[8],buff[9],buff[10],buff[11]);
  }
}

/* **************************** AVX *********************************/
#elif defined AVX
#define PARALLEL_FACTOR 48

#define NO_RUNTIME
#include "AVX.h"

#define TRANSPOSE4_IN(x0, x1, x2, x3) {                     \
    __m256i ymm01 = x0;                                     \
    __m256i ymm23 = x1;                                     \
    __m256i ymm45 = x2;                                     \
    __m256i ymm67 = x3;                                     \
	__m256i ymm02 = _mm256_unpacklo_epi64(ymm01, ymm23);    \
	__m256i ymm13 = _mm256_unpackhi_epi64(ymm01, ymm23);    \
	ymm01 = _mm256_unpacklo_epi16(ymm02, ymm13);            \
	ymm23 = _mm256_unpackhi_epi16(ymm02, ymm13);            \
	ymm02 = _mm256_unpacklo_epi32(ymm01, ymm23);            \
	ymm13 = _mm256_unpackhi_epi32(ymm01, ymm23);            \
	__m256i ymm46 = _mm256_unpacklo_epi64(ymm45, ymm67);    \
	__m256i ymm57 = _mm256_unpackhi_epi64(ymm45, ymm67);    \
	ymm45 = _mm256_unpacklo_epi16(ymm46, ymm57);            \
	ymm67 = _mm256_unpackhi_epi16(ymm46, ymm57);            \
	ymm46 = _mm256_unpacklo_epi32(ymm45, ymm67);            \
	ymm57 = _mm256_unpackhi_epi32(ymm45, ymm67);            \
	x0    = _mm256_unpacklo_epi64(ymm02, ymm46);            \
	x1    = _mm256_unpackhi_epi64(ymm02, ymm46);            \
	x2    = _mm256_unpacklo_epi64(ymm13, ymm57);            \
	x3    = _mm256_unpackhi_epi64(ymm13, ymm57);            \
  }

#define TRANSPOSE4_OUT(x0, x1, x2, x3) {            \
	__m256i ymm01 = _mm256_unpacklo_epi16(x0, x1);  \
	__m256i ymm45 = _mm256_unpackhi_epi16(x0, x1);  \
	__m256i ymm23 = _mm256_unpacklo_epi16(x2, x3);  \
	__m256i ymm67 = _mm256_unpackhi_epi16(x2, x3);  \
	x0    = _mm256_unpacklo_epi32(ymm01, ymm23);    \
	x1    = _mm256_unpackhi_epi32(ymm01, ymm23);    \
	x2    = _mm256_unpacklo_epi32(ymm45, ymm67);    \
	x3    = _mm256_unpackhi_epi32(ymm45, ymm67);    \
  }

#define rectangle(in,key,out) {                                 \
    __m256i* plain  = (__m256i*)in;                             \
    __m256i* cipher = (__m256i*)out;                            \
    TRANSPOSE4_IN(plain[0],plain[1],plain[2],plain[3]);                 \
    TRANSPOSE4_IN(plain[4],plain[5],plain[6],plain[7]);                 \
    TRANSPOSE4_IN(plain[8],plain[9],plain[10],plain[11]);               \
    Rectangle__(plain, &plain[4], &plain[8], key, cipher, &cipher[4], &cipher[8]); \
    TRANSPOSE4_OUT(cipher[0],cipher[1],cipher[2],cipher[3]);            \
    TRANSPOSE4_OUT(cipher[4],cipher[5],cipher[6],cipher[7]);            \
    TRANSPOSE4_OUT(cipher[8],cipher[9],cipher[10],cipher[11]);          \
  }

void ortho_speed ( unsigned char *out,
                   unsigned char *in,
                   unsigned long long inlen,
                   unsigned char *k
                   ) {
  __m256i* buff = (__m256i*)out;
  for (int i = 0; i < inlen; i += PARALLEL_FACTOR * BLOCK_SIZE) {
    TRANSPOSE4_IN(buff[0],buff[1],buff[2],buff[3]);
    TRANSPOSE4_IN(buff[4],buff[5],buff[6],buff[7]);
    TRANSPOSE4_IN(buff[8],buff[9],buff[10],buff[11]);
    TRANSPOSE4_OUT(buff[0],buff[1],buff[2],buff[3]);
    TRANSPOSE4_OUT(buff[4],buff[5],buff[6],buff[7]);
    TRANSPOSE4_OUT(buff[8],buff[9],buff[10],buff[11]);
  }
}

/* **************************** AVX *********************************/
#elif defined AVX512

#error Did nott plan for this


#error No arch specified.
#endif

void Rectangle__ (DATATYPE plain__[4],DATATYPE plain____2[4],DATATYPE plain____3[4],
                  DATATYPE key__[26][4],
                  DATATYPE cipher__[4],DATATYPE cipher____2[4],DATATYPE cipher____3[4]);
  
int crypto_stream_ecb( unsigned char *out,
                       unsigned char *in,
                       unsigned long long inlen,
                       unsigned char *k
                       )
{

  uint16_t key[208];
  Key_Schedule(k,key);
  DATATYPE keys[26][4];
  for (int i = 0; i < 26; i++)
    for (int j = 0; j < 4; j++)
      keys[i][j] = LIFT_16(key[i*4+j]);
  
  while (inlen >= PARALLEL_FACTOR * BLOCK_SIZE) {
    rectangle(in,keys,out);
    inlen -= PARALLEL_FACTOR * BLOCK_SIZE;
    out += PARALLEL_FACTOR * BLOCK_SIZE;
    in  += PARALLEL_FACTOR * BLOCK_SIZE;
  }

  if (inlen > 0) {
    unsigned char input[PARALLEL_FACTOR*BLOCK_SIZE];
    unsigned char output[PARALLEL_FACTOR*BLOCK_SIZE];
    memcpy(input,in,inlen);
    rectangle(input,keys,output);
    memcpy(out,output,inlen);
  }

  return 0;
}
