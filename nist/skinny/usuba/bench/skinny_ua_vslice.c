/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "nist/skinny/usuba/ua/skinny_vslice.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 8
#endif
/* including the architecture specific .h */
#include "STD.h"

/* auxiliary functions */
void sbox__V8 (/*inputs*/ DATATYPE a__, /*outputs*/ DATATYPE* b__) {
   static const DATATYPE t[256] = { 101,76,106,66,75,99,67,107,85,117,90,122,83,115,91,123,53,140,58,129,137,51,128,59,149,37,152,42,144,35,153,43,229,204,232,193,201,224,192,233,213,245,216,248,208,240,217,249,165,28,168,18,27,160,19,169,5,181,10,184,3,176,11,185,50,136,60,133,141,52,132,61,145,34,156,44,148,36,157,45,98,74,108,69,77,100,68,109,82,114,92,124,84,116,93,125,161,26,172,21,29,164,20,173,2,177,12,188,4,180,13,189,225,200,236,197,205,228,196,237,209,241,220,252,212,244,221,253,54,142,56,130,139,48,131,57,150,38,154,40,147,32,155,41,102,78,104,65,73,96,64,105,86,118,88,120,80,112,89,121,166,30,170,17,25,163,16,171,6,182,8,186,0,179,9,187,230,206,234,194,203,227,195,235,214,246,218,250,211,243,219,251,49,138,62,134,143,55,135,63,146,33,158,46,151,39,159,47,97,72,110,70,79,103,71,111,81,113,94,126,87,119,95,127,162,24,174,22,31,167,23,175,1,178,14,190,7,183,15,191,226,202,238,198,207,231,199,239,210,242,222,254,215,247,223,255 };
   *b__ = t[a__];
}

void SubCell__V8 (/*inputs*/ DATATYPE state__[4][4], /*outputs*/ DATATYPE stateR__[4][4]) {

  // Variables declaration
  ;

  // Instructions (body)
  for (int i__ = 0; i__ <= 3; i__++) {
    for (int j__ = 0; j__ <= 3; j__++) {
      sbox__V8(state__[i__][j__],&stateR__[i__][j__]);
    }
  }

}

void AddConstants__V8 (/*inputs*/ DATATYPE state__[4][4],DATATYPE c__, /*outputs*/ DATATYPE stateR__[4][4]) {

  // Variables declaration
  DATATYPE _tmp2_;
  DATATYPE _tmp3_;
  DATATYPE _tmp5_;
  DATATYPE _tmp71_;
  DATATYPE _tmp70_;
  DATATYPE _tmp69_;

  // Instructions (body)
  _tmp69_ = LIFT_8(15);
  _tmp2_ = AND(c__,_tmp69_);
  stateR__[0][0] = XOR(state__[0][0],_tmp2_);
  _tmp3_ = R_SHIFT(c__,4,8);
  _tmp70_ = LIFT_8(3);
  _tmp5_ = AND(_tmp3_,_tmp70_);
  stateR__[1][0] = XOR(state__[1][0],_tmp5_);
  _tmp71_ = LIFT_8(2);
  stateR__[2][0] = XOR(state__[2][0],_tmp71_);
  stateR__[0][1] = state__[0][1];
  stateR__[1][1] = state__[1][1];
  stateR__[2][1] = state__[2][1];
  stateR__[0][2] = state__[0][2];
  stateR__[1][2] = state__[1][2];
  stateR__[2][2] = state__[2][2];
  stateR__[0][3] = state__[0][3];
  stateR__[1][3] = state__[1][3];
  stateR__[2][3] = state__[2][3];
  stateR__[3][0] = state__[3][0];
  stateR__[3][1] = state__[3][1];
  stateR__[3][2] = state__[3][2];
  stateR__[3][3] = state__[3][3];

}

void AddKey__V8 (/*inputs*/ DATATYPE state__[4][4],DATATYPE keyCells__[2][4][4], /*outputs*/ DATATYPE stateR__[16],DATATYPE keyCellsR__[2][4][4]) {

  // Variables declaration
  DATATYPE _tmp10_[4];
  DATATYPE _tmp11_[4];
  DATATYPE _tmp12_[4];
  DATATYPE _tmp13_[4];
  DATATYPE _tmp14_[4];
  DATATYPE _tmp15_[4];
  DATATYPE _tmp16_[4];
  DATATYPE _tmp17_[4];
  DATATYPE _tmp7_[4];
  DATATYPE _tmp8_[4];
  DATATYPE _tmp9_[4];
  DATATYPE keyCells_tmp__[2][4][4];

  // Instructions (body)
  for (int i__ = 0; i__ <= 1; i__++) {
    for (int j__ = 0; j__ <= 3; j__++) {
      _tmp7_[i__] = XOR(state__[i__][j__],keyCells__[0][i__][j__]);
      stateR__[((i__ * 4) + j__)] = XOR(_tmp7_[i__],keyCells__[1][i__][j__]);
    }
  }
  stateR__[8] = state__[2][0];
  stateR__[9] = state__[2][1];
  stateR__[10] = state__[2][2];
  stateR__[11] = state__[2][3];
  stateR__[12] = state__[3][0];
  stateR__[13] = state__[3][1];
  stateR__[14] = state__[3][2];
  stateR__[15] = state__[3][3];
  keyCells_tmp__[0][0][0] = keyCells__[0][2][1];
  keyCells_tmp__[0][0][1] = keyCells__[0][3][3];
  keyCells_tmp__[0][0][2] = keyCells__[0][2][0];
  keyCells_tmp__[0][0][3] = keyCells__[0][3][1];
  keyCells_tmp__[0][1][0] = keyCells__[0][2][2];
  keyCells_tmp__[0][1][1] = keyCells__[0][3][2];
  keyCells_tmp__[0][1][2] = keyCells__[0][3][0];
  keyCells_tmp__[0][1][3] = keyCells__[0][2][3];
  keyCells_tmp__[0][2][0] = keyCells__[0][0][0];
  keyCells_tmp__[0][2][1] = keyCells__[0][0][1];
  keyCells_tmp__[0][2][2] = keyCells__[0][0][2];
  keyCells_tmp__[0][2][3] = keyCells__[0][0][3];
  keyCells_tmp__[0][3][0] = keyCells__[0][1][0];
  keyCells_tmp__[0][3][1] = keyCells__[0][1][1];
  keyCells_tmp__[0][3][2] = keyCells__[0][1][2];
  keyCells_tmp__[0][3][3] = keyCells__[0][1][3];
  keyCells_tmp__[1][0][0] = keyCells__[1][2][1];
  keyCells_tmp__[1][0][1] = keyCells__[1][3][3];
  keyCells_tmp__[1][0][2] = keyCells__[1][2][0];
  keyCells_tmp__[1][0][3] = keyCells__[1][3][1];
  keyCells_tmp__[1][1][0] = keyCells__[1][2][2];
  keyCells_tmp__[1][1][1] = keyCells__[1][3][2];
  keyCells_tmp__[1][1][2] = keyCells__[1][3][0];
  keyCells_tmp__[1][1][3] = keyCells__[1][2][3];
  keyCells_tmp__[1][2][0] = keyCells__[1][0][0];
  keyCells_tmp__[1][2][1] = keyCells__[1][0][1];
  keyCells_tmp__[1][2][2] = keyCells__[1][0][2];
  keyCells_tmp__[1][2][3] = keyCells__[1][0][3];
  keyCells_tmp__[1][3][0] = keyCells__[1][1][0];
  keyCells_tmp__[1][3][1] = keyCells__[1][1][1];
  keyCells_tmp__[1][3][2] = keyCells__[1][1][2];
  keyCells_tmp__[1][3][3] = keyCells__[1][1][3];
  for (int i__ = 0; i__ <= 1; i__++) {
    for (int j__ = 0; j__ <= 3; j__++) {
      _tmp8_[i__] = L_SHIFT(keyCells_tmp__[1][i__][j__],1,8);
      _tmp9_[i__] = LIFT_8(254);
      _tmp10_[i__] = AND(_tmp8_[i__],_tmp9_[i__]);
      _tmp11_[i__] = R_SHIFT(keyCells_tmp__[1][i__][j__],7,8);
      _tmp12_[i__] = LIFT_8(1);
      _tmp13_[i__] = AND(_tmp11_[i__],_tmp12_[i__]);
      _tmp14_[i__] = XOR(_tmp10_[i__],_tmp13_[i__]);
      _tmp15_[i__] = R_SHIFT(keyCells_tmp__[1][i__][j__],5,8);
      _tmp16_[i__] = LIFT_8(1);
      _tmp17_[i__] = AND(_tmp15_[i__],_tmp16_[i__]);
      keyCellsR__[1][i__][j__] = XOR(_tmp14_[i__],_tmp17_[i__]);
    }
  }
  keyCellsR__[0][0][0] = keyCells_tmp__[0][0][0];
  keyCellsR__[0][0][1] = keyCells_tmp__[0][0][1];
  keyCellsR__[0][0][2] = keyCells_tmp__[0][0][2];
  keyCellsR__[0][0][3] = keyCells_tmp__[0][0][3];
  keyCellsR__[0][1][0] = keyCells_tmp__[0][1][0];
  keyCellsR__[0][1][1] = keyCells_tmp__[0][1][1];
  keyCellsR__[0][1][2] = keyCells_tmp__[0][1][2];
  keyCellsR__[0][1][3] = keyCells_tmp__[0][1][3];
  keyCellsR__[0][2][0] = keyCells_tmp__[0][2][0];
  keyCellsR__[0][2][1] = keyCells_tmp__[0][2][1];
  keyCellsR__[0][2][2] = keyCells_tmp__[0][2][2];
  keyCellsR__[0][2][3] = keyCells_tmp__[0][2][3];
  keyCellsR__[0][3][0] = keyCells_tmp__[0][3][0];
  keyCellsR__[0][3][1] = keyCells_tmp__[0][3][1];
  keyCellsR__[0][3][2] = keyCells_tmp__[0][3][2];
  keyCellsR__[0][3][3] = keyCells_tmp__[0][3][3];
  keyCellsR__[1][2][0] = keyCells_tmp__[1][2][0];
  keyCellsR__[1][2][1] = keyCells_tmp__[1][2][1];
  keyCellsR__[1][2][2] = keyCells_tmp__[1][2][2];
  keyCellsR__[1][2][3] = keyCells_tmp__[1][2][3];
  keyCellsR__[1][3][0] = keyCells_tmp__[1][3][0];
  keyCellsR__[1][3][1] = keyCells_tmp__[1][3][1];
  keyCellsR__[1][3][2] = keyCells_tmp__[1][3][2];
  keyCellsR__[1][3][3] = keyCells_tmp__[1][3][3];

}

void ShiftRows__V8 (/*inputs*/ DATATYPE state__[16], /*outputs*/ DATATYPE stateR__[16]) {

  // Variables declaration
  ;

  // Instructions (body)
  stateR__[0] = state__[0];
  stateR__[1] = state__[1];
  stateR__[2] = state__[2];
  stateR__[3] = state__[3];
  stateR__[4] = state__[7];
  stateR__[5] = state__[4];
  stateR__[6] = state__[5];
  stateR__[7] = state__[6];
  stateR__[8] = state__[10];
  stateR__[9] = state__[11];
  stateR__[10] = state__[8];
  stateR__[11] = state__[9];
  stateR__[12] = state__[13];
  stateR__[13] = state__[14];
  stateR__[14] = state__[15];
  stateR__[15] = state__[12];

}

void MixColumn__V8 (/*inputs*/ DATATYPE state__[16], /*outputs*/ DATATYPE stateR__[4][4]) {

  // Variables declaration
  DATATYPE _shadow_state__3_;
  DATATYPE _shadow_state__4_;
  DATATYPE _shadow_state__5_;

  // Instructions (body)
  for (int j__ = 0; j__ <= 3; j__++) {
    _shadow_state__3_ = XOR(state__[(4 + j__)],state__[(8 + j__)]);
    _shadow_state__4_ = XOR(state__[(8 + j__)],state__[(0 + j__)]);
    _shadow_state__5_ = XOR(state__[(12 + j__)],_shadow_state__4_);
    stateR__[3][j__] = _shadow_state__4_;
    stateR__[2][j__] = _shadow_state__3_;
    stateR__[1][j__] = state__[(0 + j__)];
    stateR__[0][j__] = _shadow_state__5_;
  }

}

/* main function */
void Skinny__ (/*inputs*/ DATATYPE input__[4][4],DATATYPE tweaky__[32], /*outputs*/ DATATYPE output__[4][4]) {

  // Variables declaration
  DATATYPE RC__[48];
  DATATYPE _tmp66_[4][4];
  DATATYPE _tmp67_[4][4];
  DATATYPE _tmp68_[16];
  DATATYPE keyCells__[2][4][4];
  DATATYPE state__[4][4];
  DATATYPE tmp__[16];

  // Instructions (body)
  RC__[0] = LIFT_8(1);
  RC__[1] = LIFT_8(3);
  RC__[2] = LIFT_8(7);
  RC__[3] = LIFT_8(15);
  RC__[4] = LIFT_8(31);
  RC__[5] = LIFT_8(62);
  RC__[6] = LIFT_8(61);
  RC__[7] = LIFT_8(59);
  RC__[8] = LIFT_8(55);
  RC__[9] = LIFT_8(47);
  RC__[10] = LIFT_8(30);
  RC__[11] = LIFT_8(60);
  RC__[12] = LIFT_8(57);
  RC__[13] = LIFT_8(51);
  RC__[14] = LIFT_8(39);
  RC__[15] = LIFT_8(14);
  RC__[16] = LIFT_8(29);
  RC__[17] = LIFT_8(58);
  RC__[18] = LIFT_8(53);
  RC__[19] = LIFT_8(43);
  RC__[20] = LIFT_8(22);
  RC__[21] = LIFT_8(44);
  RC__[22] = LIFT_8(24);
  RC__[23] = LIFT_8(48);
  RC__[24] = LIFT_8(33);
  RC__[25] = LIFT_8(2);
  RC__[26] = LIFT_8(5);
  RC__[27] = LIFT_8(11);
  RC__[28] = LIFT_8(23);
  RC__[29] = LIFT_8(46);
  RC__[30] = LIFT_8(28);
  RC__[31] = LIFT_8(56);
  RC__[32] = LIFT_8(49);
  RC__[33] = LIFT_8(35);
  RC__[34] = LIFT_8(6);
  RC__[35] = LIFT_8(13);
  RC__[36] = LIFT_8(27);
  RC__[37] = LIFT_8(54);
  RC__[38] = LIFT_8(45);
  RC__[39] = LIFT_8(26);
  RC__[40] = LIFT_8(52);
  RC__[41] = LIFT_8(41);
  RC__[42] = LIFT_8(18);
  RC__[43] = LIFT_8(36);
  RC__[44] = LIFT_8(8);
  RC__[45] = LIFT_8(17);
  RC__[46] = LIFT_8(34);
  RC__[47] = LIFT_8(4);
  state__[0][0] = input__[0][0];
  state__[0][1] = input__[0][1];
  state__[0][2] = input__[0][2];
  state__[0][3] = input__[0][3];
  state__[1][0] = input__[1][0];
  state__[1][1] = input__[1][1];
  state__[1][2] = input__[1][2];
  state__[1][3] = input__[1][3];
  state__[2][0] = input__[2][0];
  state__[2][1] = input__[2][1];
  state__[2][2] = input__[2][2];
  state__[2][3] = input__[2][3];
  state__[3][0] = input__[3][0];
  state__[3][1] = input__[3][1];
  state__[3][2] = input__[3][2];
  state__[3][3] = input__[3][3];
  keyCells__[0][0][0] = tweaky__[0];
  keyCells__[0][0][1] = tweaky__[1];
  keyCells__[0][0][2] = tweaky__[2];
  keyCells__[0][0][3] = tweaky__[3];
  keyCells__[0][1][0] = tweaky__[4];
  keyCells__[0][1][1] = tweaky__[5];
  keyCells__[0][1][2] = tweaky__[6];
  keyCells__[0][1][3] = tweaky__[7];
  keyCells__[0][2][0] = tweaky__[8];
  keyCells__[0][2][1] = tweaky__[9];
  keyCells__[0][2][2] = tweaky__[10];
  keyCells__[0][2][3] = tweaky__[11];
  keyCells__[0][3][0] = tweaky__[12];
  keyCells__[0][3][1] = tweaky__[13];
  keyCells__[0][3][2] = tweaky__[14];
  keyCells__[0][3][3] = tweaky__[15];
  keyCells__[1][0][0] = tweaky__[16];
  keyCells__[1][0][1] = tweaky__[17];
  keyCells__[1][0][2] = tweaky__[18];
  keyCells__[1][0][3] = tweaky__[19];
  keyCells__[1][1][0] = tweaky__[20];
  keyCells__[1][1][1] = tweaky__[21];
  keyCells__[1][1][2] = tweaky__[22];
  keyCells__[1][1][3] = tweaky__[23];
  keyCells__[1][2][0] = tweaky__[24];
  keyCells__[1][2][1] = tweaky__[25];
  keyCells__[1][2][2] = tweaky__[26];
  keyCells__[1][2][3] = tweaky__[27];
  keyCells__[1][3][0] = tweaky__[28];
  keyCells__[1][3][1] = tweaky__[29];
  keyCells__[1][3][2] = tweaky__[30];
  keyCells__[1][3][3] = tweaky__[31];
  for (int i__ = 0; i__ <= 47; i__++) {
    SubCell__V8(state__,_tmp66_);
    AddConstants__V8(_tmp66_,RC__[i__],_tmp67_);
    AddKey__V8(_tmp67_,keyCells__,tmp__,keyCells__);
    ShiftRows__V8(tmp__,_tmp68_);
    MixColumn__V8(_tmp68_,state__);
  }
  output__[0][0] = state__[0][0];
  output__[0][1] = state__[0][1];
  output__[0][2] = state__[0][2];
  output__[0][3] = state__[0][3];
  output__[1][0] = state__[1][0];
  output__[1][1] = state__[1][1];
  output__[1][2] = state__[1][2];
  output__[1][3] = state__[1][3];
  output__[2][0] = state__[2][0];
  output__[2][1] = state__[2][1];
  output__[2][2] = state__[2][2];
  output__[2][3] = state__[2][3];
  output__[3][0] = state__[3][0];
  output__[3][1] = state__[3][1];
  output__[3][2] = state__[3][2];
  output__[3][3] = state__[3][3];

}

/* Additional functions */
uint32_t bench_speed() {
  /* inputs */
  DATATYPE input__[4][4] = { 0 };
  DATATYPE tweaky__[32] = { 0 };
  /* outputs */
  DATATYPE output__[4][4] = { 0 };
  /* fun call */
  Skinny__(input__, tweaky__,output__);

  /* Returning the number of encrypted bytes */
  return 16;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 table sbox(a :  u8 :: base)
  returns b :  u8 :: base
{
  101, 76, 106, 66, 75, 99, 67, 107, 85, 117, 90, 122, 83, 115, 91, 123, 53, 140, 58, 129, 137, 51, 128, 59, 149, 37, 152, 42, 144, 35, 153, 43, 229, 204, 232, 193, 201, 224, 192, 233, 213, 245, 216, 248, 208, 240, 217, 249, 165, 28, 168, 18, 27, 160, 19, 169, 5, 181, 10, 184, 3, 176, 11, 185, 50, 136, 60, 133, 141, 52, 132, 61, 145, 34, 156, 44, 148, 36, 157, 45, 98, 74, 108, 69, 77, 100, 68, 109, 82, 114, 92, 124, 84, 116, 93, 125, 161, 26, 172, 21, 29, 164, 20, 173, 2, 177, 12, 188, 4, 180, 13, 189, 225, 200, 236, 197, 205, 228, 196, 237, 209, 241, 220, 252, 212, 244, 221, 253, 54, 142, 56, 130, 139, 48, 131, 57, 150, 38, 154, 40, 147, 32, 155, 41, 102, 78, 104, 65, 73, 96, 64, 105, 86, 118, 88, 120, 80, 112, 89, 121, 166, 30, 170, 17, 25, 163, 16, 171, 6, 182, 8, 186, 0, 179, 9, 187, 230, 206, 234, 194, 203, 227, 195, 235, 214, 246, 218, 250, 211, 243, 219, 251, 49, 138, 62, 134, 143, 55, 135, 63, 146, 33, 158, 46, 151, 39, 159, 47, 97, 72, 110, 70, 79, 103, 71, 111, 81, 113, 94, 126, 87, 119, 95, 127, 162, 24, 174, 22, 31, 167, 23, 175, 1, 178, 14, 190, 7, 183, 15, 191, 226, 202, 238, 198, 207, 231, 199, 239, 210, 242, 222, 254, 215, 247, 223, 255
}


_no_inline node SubCell(state :  u8[4][4] :: base)
  returns stateR :  u8[4][4] :: base
vars

let
  forall i in [0,3] {
    forall j in [0,3] {
      (stateR[i][j]) = sbox(state[i][j])
    }
  }
tel

 node AddConstants(state :  u8[4][4] :: base,c :  u8 :: base)
  returns stateR :  u8[4][4] :: base
vars

let
  (stateR[0][0]) = (state[0][0] ^ (c & 15));
  (stateR[1][0]) = (state[1][0] ^ ((c >> 4) & 3));
  (stateR[2][0]) = (state[2][0] ^ 2);
  (stateR[0,1,2][1,2,3]) = state[0,1,2][1,2,3];
  (stateR[3]) = state[3]
tel

 node AddKey(state :  u8[4][4] :: base,keyCells :  u8[2][4][4] :: base)
  returns stateR :  u8[4][4] :: base,keyCellsR :  u8[2][4][4] :: base
vars
  keyCells16 :  u8[2][16] :: base,
  keyCells_tmp :  u8[2][4][4] :: base
let
  forall i in [0,1] {
    forall j in [0,3] {
      (stateR[i][j]) = ((state[i][j] ^ keyCells[0][i][j]) ^ keyCells[1][i][j])
    }
  };
  (stateR[2,3]) = state[2,3];
  (keyCells16) = keyCells;
  (keyCells16[0]) := keyCells16[0][9,15,8,13,10,14,12,11,0,1,2,3,4,5,6,7];
  (keyCells16[1]) := keyCells16[1][9,15,8,13,10,14,12,11,0,1,2,3,4,5,6,7];
  (keyCells_tmp) = keyCells16;
  forall i in [0,1] {
    forall j in [0,3] {
      (keyCellsR[1][i][j]) = ((((keyCells_tmp[1][i][j] << 1) & 254) ^ ((keyCells_tmp[1][i][j] >> 7) & 1)) ^ ((keyCells_tmp[1][i][j] >> 5) & 1))
    }
  };
  (keyCellsR[0]) = keyCells_tmp[0];
  (keyCellsR[1][2,3]) = keyCells_tmp[1][2,3]
tel

 node ShiftRows(state :  u8[16] :: base)
  returns stateR :  u8[16] :: base
vars

let
  (stateR) = state[0,1,2,3,7,4,5,6,10,11,8,9,13,14,15,12]
tel

 node MixColumn(state :  u8[4][4] :: base)
  returns stateR :  u8[4][4] :: base
vars

let
  forall j in [0,3] {
    (state[1][j]) := (state[1][j] ^ state[2][j]);
    (state[2][j]) := (state[2][j] ^ state[0][j]);
    (state[3][j]) := (state[3][j] ^ state[2][j]);
    (stateR[3,2,1,0][j]) = state[2,1,0,3][j]
  }
tel

 node Skinny(input :  u8[4][4] :: base,tweaky :  u8[32] :: base)
  returns output :  u8[4][4] :: base
vars
  state :  u8[49][4][4] :: base,
  keyCells :  u8[49][2][4][4] :: base,
  RC :  u8[48] :: base,
  tmp :  u8[4][4] :: base
let
  (RC) = (1,3,7,15,31,62,61,59,55,47,30,60,57,51,39,14,29,58,53,43,22,44,24,48,33,2,5,11,23,46,28,56,49,35,6,13,27,54,45,26,52,41,18,36,8,17,34,4);
  (state[0]) = input;
  (keyCells[0]) = tweaky;
  forall i in [0,47] {
    (tmp,keyCells[(i + 1)]) = AddKey(AddConstants(SubCell(state[i]),RC[i]),keyCells[i]);
    (state[(i + 1)]) = MixColumn(ShiftRows(tmp))
  };
  (output) = state[48]
tel

*/
 