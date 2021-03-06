/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "samples/usuba/present.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 8
#endif
/* including the architecture specific .h */
#include "STD.h"

/* auxiliary functions */
void sbox__B1 (/*inputs*/ DATATYPE X3__,DATATYPE X2__,DATATYPE X1__,DATATYPE X0__, /*outputs*/ DATATYPE* Y3__,DATATYPE* Y2__,DATATYPE* Y1__,DATATYPE* Y0__) {

  // Variables declaration
  DATATYPE T1__;
  DATATYPE T2__;
  DATATYPE T3__;
  DATATYPE T4__;
  DATATYPE T5__;
  DATATYPE T6__;
  DATATYPE T7__;
  DATATYPE T8__;
  DATATYPE T9__;
  DATATYPE _tmp1_;

  // Instructions (body)
  T1__ = XOR(X1__,X2__);
  _tmp1_ = NOT(X0__);
  T2__ = AND(X2__,T1__);
  T3__ = XOR(X3__,T2__);
  *Y0__ = XOR(X0__,T3__);
  T4__ = AND(T1__,T3__);
  T5__ = XOR(T1__,*Y0__);
  T6__ = XOR(T4__,X2__);
  T7__ = OR(X0__,T6__);
  T8__ = XOR(T6__,_tmp1_);
  *Y1__ = XOR(T5__,T7__);
  T9__ = OR(T8__,T5__);
  *Y3__ = XOR(*Y1__,T8__);
  *Y2__ = XOR(T3__,T9__);

}

void present_round__B1 (/*inputs*/ DATATYPE inp__[64],DATATYPE key__[64], /*outputs*/ DATATYPE out__[64]) {

  // Variables declaration
  DATATYPE sbox_in__[16][4];
  DATATYPE sbox_out__[16][4];

  // Instructions (body)
  sbox_in__[0][0] = XOR(inp__[0],key__[0]);
  sbox_in__[1][0] = XOR(inp__[4],key__[4]);
  sbox_in__[2][0] = XOR(inp__[8],key__[8]);
  sbox_in__[3][0] = XOR(inp__[12],key__[12]);
  sbox_in__[4][0] = XOR(inp__[16],key__[16]);
  sbox_in__[5][0] = XOR(inp__[20],key__[20]);
  sbox_in__[6][0] = XOR(inp__[24],key__[24]);
  sbox_in__[7][0] = XOR(inp__[28],key__[28]);
  sbox_in__[8][0] = XOR(inp__[32],key__[32]);
  sbox_in__[9][0] = XOR(inp__[36],key__[36]);
  sbox_in__[10][0] = XOR(inp__[40],key__[40]);
  sbox_in__[11][0] = XOR(inp__[44],key__[44]);
  sbox_in__[12][0] = XOR(inp__[48],key__[48]);
  sbox_in__[13][0] = XOR(inp__[52],key__[52]);
  sbox_in__[14][0] = XOR(inp__[56],key__[56]);
  sbox_in__[15][0] = XOR(inp__[60],key__[60]);
  sbox_in__[0][1] = XOR(inp__[1],key__[1]);
  sbox_in__[1][1] = XOR(inp__[5],key__[5]);
  sbox_in__[2][1] = XOR(inp__[9],key__[9]);
  sbox_in__[3][1] = XOR(inp__[13],key__[13]);
  sbox_in__[4][1] = XOR(inp__[17],key__[17]);
  sbox_in__[5][1] = XOR(inp__[21],key__[21]);
  sbox_in__[6][1] = XOR(inp__[25],key__[25]);
  sbox_in__[7][1] = XOR(inp__[29],key__[29]);
  sbox_in__[8][1] = XOR(inp__[33],key__[33]);
  sbox_in__[9][1] = XOR(inp__[37],key__[37]);
  sbox_in__[10][1] = XOR(inp__[41],key__[41]);
  sbox_in__[11][1] = XOR(inp__[45],key__[45]);
  sbox_in__[12][1] = XOR(inp__[49],key__[49]);
  sbox_in__[13][1] = XOR(inp__[53],key__[53]);
  sbox_in__[14][1] = XOR(inp__[57],key__[57]);
  sbox_in__[15][1] = XOR(inp__[61],key__[61]);
  sbox_in__[0][2] = XOR(inp__[2],key__[2]);
  sbox_in__[1][2] = XOR(inp__[6],key__[6]);
  sbox_in__[2][2] = XOR(inp__[10],key__[10]);
  sbox_in__[3][2] = XOR(inp__[14],key__[14]);
  sbox_in__[4][2] = XOR(inp__[18],key__[18]);
  sbox_in__[5][2] = XOR(inp__[22],key__[22]);
  sbox_in__[6][2] = XOR(inp__[26],key__[26]);
  sbox_in__[7][2] = XOR(inp__[30],key__[30]);
  sbox_in__[8][2] = XOR(inp__[34],key__[34]);
  sbox_in__[9][2] = XOR(inp__[38],key__[38]);
  sbox_in__[10][2] = XOR(inp__[42],key__[42]);
  sbox_in__[11][2] = XOR(inp__[46],key__[46]);
  sbox_in__[12][2] = XOR(inp__[50],key__[50]);
  sbox_in__[13][2] = XOR(inp__[54],key__[54]);
  sbox_in__[14][2] = XOR(inp__[58],key__[58]);
  sbox_in__[15][2] = XOR(inp__[62],key__[62]);
  sbox_in__[0][3] = XOR(inp__[3],key__[3]);
  sbox_in__[1][3] = XOR(inp__[7],key__[7]);
  sbox_in__[2][3] = XOR(inp__[11],key__[11]);
  sbox_in__[3][3] = XOR(inp__[15],key__[15]);
  sbox_in__[4][3] = XOR(inp__[19],key__[19]);
  sbox_in__[5][3] = XOR(inp__[23],key__[23]);
  sbox_in__[6][3] = XOR(inp__[27],key__[27]);
  sbox_in__[7][3] = XOR(inp__[31],key__[31]);
  sbox_in__[8][3] = XOR(inp__[35],key__[35]);
  sbox_in__[9][3] = XOR(inp__[39],key__[39]);
  sbox_in__[10][3] = XOR(inp__[43],key__[43]);
  sbox_in__[11][3] = XOR(inp__[47],key__[47]);
  sbox_in__[12][3] = XOR(inp__[51],key__[51]);
  sbox_in__[13][3] = XOR(inp__[55],key__[55]);
  sbox_in__[14][3] = XOR(inp__[59],key__[59]);
  sbox_in__[15][3] = XOR(inp__[63],key__[63]);
  for (int i__ = 0; i__ <= 15; i__++) {
    sbox__B1(sbox_in__[i__][0],sbox_in__[i__][1],sbox_in__[i__][2],sbox_in__[i__][3],&sbox_out__[i__][0],&sbox_out__[i__][1],&sbox_out__[i__][2],&sbox_out__[i__][3]);
  }
  out__[0] = sbox_out__[0][0];
  out__[1] = sbox_out__[1][0];
  out__[2] = sbox_out__[2][0];
  out__[3] = sbox_out__[3][0];
  out__[4] = sbox_out__[4][0];
  out__[5] = sbox_out__[5][0];
  out__[6] = sbox_out__[6][0];
  out__[7] = sbox_out__[7][0];
  out__[8] = sbox_out__[8][0];
  out__[9] = sbox_out__[9][0];
  out__[10] = sbox_out__[10][0];
  out__[11] = sbox_out__[11][0];
  out__[12] = sbox_out__[12][0];
  out__[13] = sbox_out__[13][0];
  out__[14] = sbox_out__[14][0];
  out__[15] = sbox_out__[15][0];
  out__[16] = sbox_out__[0][1];
  out__[17] = sbox_out__[1][1];
  out__[18] = sbox_out__[2][1];
  out__[19] = sbox_out__[3][1];
  out__[20] = sbox_out__[4][1];
  out__[21] = sbox_out__[5][1];
  out__[22] = sbox_out__[6][1];
  out__[23] = sbox_out__[7][1];
  out__[24] = sbox_out__[8][1];
  out__[25] = sbox_out__[9][1];
  out__[26] = sbox_out__[10][1];
  out__[27] = sbox_out__[11][1];
  out__[28] = sbox_out__[12][1];
  out__[29] = sbox_out__[13][1];
  out__[30] = sbox_out__[14][1];
  out__[31] = sbox_out__[15][1];
  out__[32] = sbox_out__[0][2];
  out__[33] = sbox_out__[1][2];
  out__[34] = sbox_out__[2][2];
  out__[35] = sbox_out__[3][2];
  out__[36] = sbox_out__[4][2];
  out__[37] = sbox_out__[5][2];
  out__[38] = sbox_out__[6][2];
  out__[39] = sbox_out__[7][2];
  out__[40] = sbox_out__[8][2];
  out__[41] = sbox_out__[9][2];
  out__[42] = sbox_out__[10][2];
  out__[43] = sbox_out__[11][2];
  out__[44] = sbox_out__[12][2];
  out__[45] = sbox_out__[13][2];
  out__[46] = sbox_out__[14][2];
  out__[47] = sbox_out__[15][2];
  out__[48] = sbox_out__[0][3];
  out__[49] = sbox_out__[1][3];
  out__[50] = sbox_out__[2][3];
  out__[51] = sbox_out__[3][3];
  out__[52] = sbox_out__[4][3];
  out__[53] = sbox_out__[5][3];
  out__[54] = sbox_out__[6][3];
  out__[55] = sbox_out__[7][3];
  out__[56] = sbox_out__[8][3];
  out__[57] = sbox_out__[9][3];
  out__[58] = sbox_out__[10][3];
  out__[59] = sbox_out__[11][3];
  out__[60] = sbox_out__[12][3];
  out__[61] = sbox_out__[13][3];
  out__[62] = sbox_out__[14][3];
  out__[63] = sbox_out__[15][3];

}

/* main function */
void present__ (/*inputs*/ DATATYPE plain__[64],DATATYPE key__[32][64], /*outputs*/ DATATYPE cipher__[64]) {

  // Variables declaration
  DATATYPE tmp__[64];

  // Instructions (body)
  tmp__[0] = plain__[0];
  tmp__[1] = plain__[1];
  tmp__[2] = plain__[2];
  tmp__[3] = plain__[3];
  tmp__[4] = plain__[4];
  tmp__[5] = plain__[5];
  tmp__[6] = plain__[6];
  tmp__[7] = plain__[7];
  tmp__[8] = plain__[8];
  tmp__[9] = plain__[9];
  tmp__[10] = plain__[10];
  tmp__[11] = plain__[11];
  tmp__[12] = plain__[12];
  tmp__[13] = plain__[13];
  tmp__[14] = plain__[14];
  tmp__[15] = plain__[15];
  tmp__[16] = plain__[16];
  tmp__[17] = plain__[17];
  tmp__[18] = plain__[18];
  tmp__[19] = plain__[19];
  tmp__[20] = plain__[20];
  tmp__[21] = plain__[21];
  tmp__[22] = plain__[22];
  tmp__[23] = plain__[23];
  tmp__[24] = plain__[24];
  tmp__[25] = plain__[25];
  tmp__[26] = plain__[26];
  tmp__[27] = plain__[27];
  tmp__[28] = plain__[28];
  tmp__[29] = plain__[29];
  tmp__[30] = plain__[30];
  tmp__[31] = plain__[31];
  tmp__[32] = plain__[32];
  tmp__[33] = plain__[33];
  tmp__[34] = plain__[34];
  tmp__[35] = plain__[35];
  tmp__[36] = plain__[36];
  tmp__[37] = plain__[37];
  tmp__[38] = plain__[38];
  tmp__[39] = plain__[39];
  tmp__[40] = plain__[40];
  tmp__[41] = plain__[41];
  tmp__[42] = plain__[42];
  tmp__[43] = plain__[43];
  tmp__[44] = plain__[44];
  tmp__[45] = plain__[45];
  tmp__[46] = plain__[46];
  tmp__[47] = plain__[47];
  tmp__[48] = plain__[48];
  tmp__[49] = plain__[49];
  tmp__[50] = plain__[50];
  tmp__[51] = plain__[51];
  tmp__[52] = plain__[52];
  tmp__[53] = plain__[53];
  tmp__[54] = plain__[54];
  tmp__[55] = plain__[55];
  tmp__[56] = plain__[56];
  tmp__[57] = plain__[57];
  tmp__[58] = plain__[58];
  tmp__[59] = plain__[59];
  tmp__[60] = plain__[60];
  tmp__[61] = plain__[61];
  tmp__[62] = plain__[62];
  tmp__[63] = plain__[63];
  for (int i__ = 1; i__ <= 31; i__++) {
    present_round__B1(tmp__,key__[(i__ - 1)],tmp__);
  }
  cipher__[0] = XOR(tmp__[0],key__[31][0]);
  cipher__[1] = XOR(tmp__[1],key__[31][1]);
  cipher__[2] = XOR(tmp__[2],key__[31][2]);
  cipher__[3] = XOR(tmp__[3],key__[31][3]);
  cipher__[4] = XOR(tmp__[4],key__[31][4]);
  cipher__[5] = XOR(tmp__[5],key__[31][5]);
  cipher__[6] = XOR(tmp__[6],key__[31][6]);
  cipher__[7] = XOR(tmp__[7],key__[31][7]);
  cipher__[8] = XOR(tmp__[8],key__[31][8]);
  cipher__[9] = XOR(tmp__[9],key__[31][9]);
  cipher__[10] = XOR(tmp__[10],key__[31][10]);
  cipher__[11] = XOR(tmp__[11],key__[31][11]);
  cipher__[12] = XOR(tmp__[12],key__[31][12]);
  cipher__[13] = XOR(tmp__[13],key__[31][13]);
  cipher__[14] = XOR(tmp__[14],key__[31][14]);
  cipher__[15] = XOR(tmp__[15],key__[31][15]);
  cipher__[16] = XOR(tmp__[16],key__[31][16]);
  cipher__[17] = XOR(tmp__[17],key__[31][17]);
  cipher__[18] = XOR(tmp__[18],key__[31][18]);
  cipher__[19] = XOR(tmp__[19],key__[31][19]);
  cipher__[20] = XOR(tmp__[20],key__[31][20]);
  cipher__[21] = XOR(tmp__[21],key__[31][21]);
  cipher__[22] = XOR(tmp__[22],key__[31][22]);
  cipher__[23] = XOR(tmp__[23],key__[31][23]);
  cipher__[24] = XOR(tmp__[24],key__[31][24]);
  cipher__[25] = XOR(tmp__[25],key__[31][25]);
  cipher__[26] = XOR(tmp__[26],key__[31][26]);
  cipher__[27] = XOR(tmp__[27],key__[31][27]);
  cipher__[28] = XOR(tmp__[28],key__[31][28]);
  cipher__[29] = XOR(tmp__[29],key__[31][29]);
  cipher__[30] = XOR(tmp__[30],key__[31][30]);
  cipher__[31] = XOR(tmp__[31],key__[31][31]);
  cipher__[32] = XOR(tmp__[32],key__[31][32]);
  cipher__[33] = XOR(tmp__[33],key__[31][33]);
  cipher__[34] = XOR(tmp__[34],key__[31][34]);
  cipher__[35] = XOR(tmp__[35],key__[31][35]);
  cipher__[36] = XOR(tmp__[36],key__[31][36]);
  cipher__[37] = XOR(tmp__[37],key__[31][37]);
  cipher__[38] = XOR(tmp__[38],key__[31][38]);
  cipher__[39] = XOR(tmp__[39],key__[31][39]);
  cipher__[40] = XOR(tmp__[40],key__[31][40]);
  cipher__[41] = XOR(tmp__[41],key__[31][41]);
  cipher__[42] = XOR(tmp__[42],key__[31][42]);
  cipher__[43] = XOR(tmp__[43],key__[31][43]);
  cipher__[44] = XOR(tmp__[44],key__[31][44]);
  cipher__[45] = XOR(tmp__[45],key__[31][45]);
  cipher__[46] = XOR(tmp__[46],key__[31][46]);
  cipher__[47] = XOR(tmp__[47],key__[31][47]);
  cipher__[48] = XOR(tmp__[48],key__[31][48]);
  cipher__[49] = XOR(tmp__[49],key__[31][49]);
  cipher__[50] = XOR(tmp__[50],key__[31][50]);
  cipher__[51] = XOR(tmp__[51],key__[31][51]);
  cipher__[52] = XOR(tmp__[52],key__[31][52]);
  cipher__[53] = XOR(tmp__[53],key__[31][53]);
  cipher__[54] = XOR(tmp__[54],key__[31][54]);
  cipher__[55] = XOR(tmp__[55],key__[31][55]);
  cipher__[56] = XOR(tmp__[56],key__[31][56]);
  cipher__[57] = XOR(tmp__[57],key__[31][57]);
  cipher__[58] = XOR(tmp__[58],key__[31][58]);
  cipher__[59] = XOR(tmp__[59],key__[31][59]);
  cipher__[60] = XOR(tmp__[60],key__[31][60]);
  cipher__[61] = XOR(tmp__[61],key__[31][61]);
  cipher__[62] = XOR(tmp__[62],key__[31][62]);
  cipher__[63] = XOR(tmp__[63],key__[31][63]);

}

/* Additional functions */
uint32_t bench_speed() {
  /* Inputs */
  DATATYPE plain__[64] = { 0 };
  DATATYPE key__[32][64] = { 0 };

  /* Preventing inputs from being optimized out */
  asm volatile("" : "+m" (plain__));
  asm volatile("" : "+m" (key__));

  /* Outputs */
  DATATYPE cipher__[64] = { 0 };
  /* Primitive call */
  present__(plain__, key__,cipher__);

  /* Preventing outputs from being optimized out */
  asm volatile("" : "+m" (cipher__));

  /* Returning the number of encrypted bytes */
  return 64;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 _no_inline table sbox(a :  v4)
  returns out :  v4
{
  12, 5, 6, 11, 9, 0, 10, 13, 3, 14, 15, 8, 4, 7, 1, 2
}


_no_inline perm pLayer(a :  b64)
  returns out :  b64
{
  1, 5, 9, 13, 17, 21, 25, 29, 33, 37, 41, 45, 49, 53, 57, 61, 2, 6, 10, 14, 18, 22, 26, 30, 34, 38, 42, 46, 50, 54, 58, 62, 3, 7, 11, 15, 19, 23, 27, 31, 35, 39, 43, 47, 51, 55, 59, 63, 4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 44, 48, 52, 56, 60, 64
}


_no_inline node present_round(inp :  b64,key :  b64)
  returns out :  b64
vars
  sbox_in :  b4[16],
  sbox_out :  b4[16]
let
  (sbox_in) = (inp ^ key);
  forall i in [0,15] {
    (sbox_out[i]) = sbox(sbox_in[i])
  };
  (out) = pLayer(sbox_out)
tel

 node present(plain :  b64,key :  b64[32])
  returns cipher :  b64
vars
  tmp :  b64[32]
let
  (tmp[0]) = plain;
  forall i in [1,31] {
    (tmp[i]) = present_round(tmp[(i - 1)],key[(i - 1)])
  };
  (cipher) = (tmp[31] ^ key[31])
tel

*/
 