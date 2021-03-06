/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "nist/clyde/usuba/ua/clyde.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 32
#endif
/* including the architecture specific .h */
#include "MASKED_UA.h"

/* auxiliary functions */
void lbox_layer__V32 (/*inputs*/ DATATYPE state__[4][MASKING_ORDER], /*outputs*/ DATATYPE stateR__[4][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE lbox__V32_1__shadow_a__1_;
  DATATYPE lbox__V32_1__shadow_a__3_;
  DATATYPE lbox__V32_1__shadow_a__5_;
  DATATYPE lbox__V32_1__shadow_a__7_;
  DATATYPE lbox__V32_1__shadow_b__2_;
  DATATYPE lbox__V32_1__shadow_b__4_;
  DATATYPE lbox__V32_1__shadow_b__6_;
  DATATYPE lbox__V32_1__shadow_b__8_;
  DATATYPE lbox__V32_1__tmp10_;
  DATATYPE lbox__V32_1__tmp11_;
  DATATYPE lbox__V32_1__tmp12_;
  DATATYPE lbox__V32_1__tmp13_;
  DATATYPE lbox__V32_1__tmp14_;
  DATATYPE lbox__V32_1__tmp15_;
  DATATYPE lbox__V32_1__tmp16_;
  DATATYPE lbox__V32_1__tmp17_;
  DATATYPE lbox__V32_1__tmp18_;
  DATATYPE lbox__V32_1__tmp19_;
  DATATYPE lbox__V32_1__tmp20_;
  DATATYPE lbox__V32_1__tmp9_;
  DATATYPE lbox__V32_1_a__;
  DATATYPE lbox__V32_1_b__;
  DATATYPE lbox__V32_1_c__;
  DATATYPE lbox__V32_1_d__;
  DATATYPE lbox__V32_2__shadow_a__1_;
  DATATYPE lbox__V32_2__shadow_a__3_;
  DATATYPE lbox__V32_2__shadow_a__5_;
  DATATYPE lbox__V32_2__shadow_a__7_;
  DATATYPE lbox__V32_2__shadow_b__2_;
  DATATYPE lbox__V32_2__shadow_b__4_;
  DATATYPE lbox__V32_2__shadow_b__6_;
  DATATYPE lbox__V32_2__shadow_b__8_;
  DATATYPE lbox__V32_2__tmp10_;
  DATATYPE lbox__V32_2__tmp11_;
  DATATYPE lbox__V32_2__tmp12_;
  DATATYPE lbox__V32_2__tmp13_;
  DATATYPE lbox__V32_2__tmp14_;
  DATATYPE lbox__V32_2__tmp15_;
  DATATYPE lbox__V32_2__tmp16_;
  DATATYPE lbox__V32_2__tmp17_;
  DATATYPE lbox__V32_2__tmp18_;
  DATATYPE lbox__V32_2__tmp19_;
  DATATYPE lbox__V32_2__tmp20_;
  DATATYPE lbox__V32_2__tmp9_;
  DATATYPE lbox__V32_2_a__;
  DATATYPE lbox__V32_2_b__;
  DATATYPE lbox__V32_2_c__;
  DATATYPE lbox__V32_2_d__;

  // Instructions (body)
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    lbox__V32_1__tmp9_ = R_ROTATE(state__[0][_mask_idx],12,32);
    lbox__V32_1_a__ = XOR(state__[0][_mask_idx],lbox__V32_1__tmp9_);
    lbox__V32_1__tmp10_ = R_ROTATE(state__[1][_mask_idx],12,32);
    lbox__V32_1_b__ = XOR(state__[1][_mask_idx],lbox__V32_1__tmp10_);
    lbox__V32_1__tmp11_ = R_ROTATE(lbox__V32_1_a__,3,32);
    lbox__V32_1__shadow_a__1_ = XOR(lbox__V32_1_a__,lbox__V32_1__tmp11_);
    lbox__V32_1__tmp12_ = R_ROTATE(lbox__V32_1_b__,3,32);
    lbox__V32_1__shadow_b__2_ = XOR(lbox__V32_1_b__,lbox__V32_1__tmp12_);
    lbox__V32_1__tmp13_ = R_ROTATE(state__[0][_mask_idx],17,32);
    lbox__V32_1__shadow_a__3_ = XOR(lbox__V32_1__shadow_a__1_,lbox__V32_1__tmp13_);
    lbox__V32_1__tmp14_ = R_ROTATE(state__[1][_mask_idx],17,32);
    lbox__V32_1__shadow_b__4_ = XOR(lbox__V32_1__shadow_b__2_,lbox__V32_1__tmp14_);
    lbox__V32_1__tmp15_ = R_ROTATE(lbox__V32_1__shadow_a__3_,31,32);
    lbox__V32_1_c__ = XOR(lbox__V32_1__shadow_a__3_,lbox__V32_1__tmp15_);
    lbox__V32_1__tmp16_ = R_ROTATE(lbox__V32_1__shadow_b__4_,31,32);
    lbox__V32_1_d__ = XOR(lbox__V32_1__shadow_b__4_,lbox__V32_1__tmp16_);
    lbox__V32_1__tmp17_ = R_ROTATE(lbox__V32_1_d__,26,32);
    lbox__V32_1__shadow_a__5_ = XOR(lbox__V32_1__shadow_a__3_,lbox__V32_1__tmp17_);
    lbox__V32_1__tmp18_ = R_ROTATE(lbox__V32_1_c__,25,32);
    lbox__V32_1__shadow_b__6_ = XOR(lbox__V32_1__shadow_b__4_,lbox__V32_1__tmp18_);
    lbox__V32_1__tmp19_ = R_ROTATE(lbox__V32_1_c__,15,32);
    lbox__V32_1__shadow_a__7_ = XOR(lbox__V32_1__shadow_a__5_,lbox__V32_1__tmp19_);
    lbox__V32_1__tmp20_ = R_ROTATE(lbox__V32_1_d__,15,32);
    lbox__V32_1__shadow_b__8_ = XOR(lbox__V32_1__shadow_b__6_,lbox__V32_1__tmp20_);
    stateR__[0][_mask_idx] = lbox__V32_1__shadow_a__7_;
    stateR__[1][_mask_idx] = lbox__V32_1__shadow_b__8_;
    lbox__V32_2__tmp9_ = R_ROTATE(state__[2][_mask_idx],12,32);
    lbox__V32_2_a__ = XOR(state__[2][_mask_idx],lbox__V32_2__tmp9_);
    lbox__V32_2__tmp10_ = R_ROTATE(state__[3][_mask_idx],12,32);
    lbox__V32_2_b__ = XOR(state__[3][_mask_idx],lbox__V32_2__tmp10_);
    lbox__V32_2__tmp11_ = R_ROTATE(lbox__V32_2_a__,3,32);
    lbox__V32_2__shadow_a__1_ = XOR(lbox__V32_2_a__,lbox__V32_2__tmp11_);
    lbox__V32_2__tmp12_ = R_ROTATE(lbox__V32_2_b__,3,32);
    lbox__V32_2__shadow_b__2_ = XOR(lbox__V32_2_b__,lbox__V32_2__tmp12_);
    lbox__V32_2__tmp13_ = R_ROTATE(state__[2][_mask_idx],17,32);
    lbox__V32_2__shadow_a__3_ = XOR(lbox__V32_2__shadow_a__1_,lbox__V32_2__tmp13_);
    lbox__V32_2__tmp14_ = R_ROTATE(state__[3][_mask_idx],17,32);
    lbox__V32_2__shadow_b__4_ = XOR(lbox__V32_2__shadow_b__2_,lbox__V32_2__tmp14_);
    lbox__V32_2__tmp15_ = R_ROTATE(lbox__V32_2__shadow_a__3_,31,32);
    lbox__V32_2_c__ = XOR(lbox__V32_2__shadow_a__3_,lbox__V32_2__tmp15_);
    lbox__V32_2__tmp16_ = R_ROTATE(lbox__V32_2__shadow_b__4_,31,32);
    lbox__V32_2_d__ = XOR(lbox__V32_2__shadow_b__4_,lbox__V32_2__tmp16_);
    lbox__V32_2__tmp17_ = R_ROTATE(lbox__V32_2_d__,26,32);
    lbox__V32_2__shadow_a__5_ = XOR(lbox__V32_2__shadow_a__3_,lbox__V32_2__tmp17_);
    lbox__V32_2__tmp18_ = R_ROTATE(lbox__V32_2_c__,25,32);
    lbox__V32_2__shadow_b__6_ = XOR(lbox__V32_2__shadow_b__4_,lbox__V32_2__tmp18_);
    lbox__V32_2__tmp19_ = R_ROTATE(lbox__V32_2_c__,15,32);
    lbox__V32_2__shadow_a__7_ = XOR(lbox__V32_2__shadow_a__5_,lbox__V32_2__tmp19_);
    lbox__V32_2__tmp20_ = R_ROTATE(lbox__V32_2_d__,15,32);
    lbox__V32_2__shadow_b__8_ = XOR(lbox__V32_2__shadow_b__6_,lbox__V32_2__tmp20_);
    stateR__[2][_mask_idx] = lbox__V32_2__shadow_a__7_;
    stateR__[3][_mask_idx] = lbox__V32_2__shadow_b__8_;
  }

}

void add_rc__V32 (/*inputs*/ DATATYPE state__[4][MASKING_ORDER],DATATYPE rc__[4][MASKING_ORDER], /*outputs*/ DATATYPE stateR__[4][MASKING_ORDER]) {

  // Variables declaration
  ;

  // Instructions (body)
  for (int i__ = 0; i__ <= 3; i__++) {
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      stateR__[i__][_mask_idx] = XOR(state__[i__][_mask_idx],rc__[i__][_mask_idx]);
    }
  }

}

void tweakey__V32 (/*inputs*/ DATATYPE key__[4][MASKING_ORDER],DATATYPE tweak__[4][MASKING_ORDER], /*outputs*/ DATATYPE tk__[3][4][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE _tmp21_[2][MASKING_ORDER];
  DATATYPE _tmp22_[2][MASKING_ORDER];
  DATATYPE _tmp23_[2][MASKING_ORDER];
  DATATYPE _tmp24_[2][MASKING_ORDER];
  DATATYPE tx__[2][MASKING_ORDER];

  // Instructions (body)
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    tx__[0][_mask_idx] = XOR(tweak__[0][_mask_idx],tweak__[2][_mask_idx]);
    tx__[1][_mask_idx] = XOR(tweak__[1][_mask_idx],tweak__[3][_mask_idx]);
    tk__[0][0][_mask_idx] = XOR(key__[0][_mask_idx],tweak__[0][_mask_idx]);
    tk__[0][1][_mask_idx] = XOR(key__[1][_mask_idx],tweak__[1][_mask_idx]);
    tk__[0][2][_mask_idx] = XOR(key__[2][_mask_idx],tweak__[2][_mask_idx]);
    tk__[0][3][_mask_idx] = XOR(key__[3][_mask_idx],tweak__[3][_mask_idx]);
    _tmp21_[0][_mask_idx] = XOR(key__[0][_mask_idx],tx__[0][_mask_idx]);
    _tmp21_[1][_mask_idx] = XOR(key__[1][_mask_idx],tx__[1][_mask_idx]);
    _tmp22_[0][_mask_idx] = XOR(key__[2][_mask_idx],tweak__[0][_mask_idx]);
    _tmp22_[1][_mask_idx] = XOR(key__[3][_mask_idx],tweak__[1][_mask_idx]);
    tk__[1][0][_mask_idx] = _tmp21_[0][_mask_idx];
    tk__[1][1][_mask_idx] = _tmp21_[1][_mask_idx];
    tk__[1][2][_mask_idx] = _tmp22_[0][_mask_idx];
    tk__[1][3][_mask_idx] = _tmp22_[1][_mask_idx];
    _tmp23_[0][_mask_idx] = XOR(key__[0][_mask_idx],tweak__[2][_mask_idx]);
    _tmp23_[1][_mask_idx] = XOR(key__[1][_mask_idx],tweak__[3][_mask_idx]);
    _tmp24_[0][_mask_idx] = XOR(key__[2][_mask_idx],tx__[0][_mask_idx]);
    _tmp24_[1][_mask_idx] = XOR(key__[3][_mask_idx],tx__[1][_mask_idx]);
    tk__[2][0][_mask_idx] = _tmp23_[0][_mask_idx];
    tk__[2][1][_mask_idx] = _tmp23_[1][_mask_idx];
    tk__[2][2][_mask_idx] = _tmp24_[0][_mask_idx];
    tk__[2][3][_mask_idx] = _tmp24_[1][_mask_idx];
  }

}

/* main function */
void clyde128__ (/*inputs*/ DATATYPE state__[4][MASKING_ORDER],DATATYPE key__[4][MASKING_ORDER],DATATYPE tweak__[4][MASKING_ORDER], /*outputs*/ DATATYPE cipher__[4][MASKING_ORDER]) {

  // Variables declaration
  DATATYPE _tmp73_[4][MASKING_ORDER];
  DATATYPE _tmp74_[4][MASKING_ORDER];
  DATATYPE _tmp75_[4][MASKING_ORDER];
  DATATYPE _tmp76_[4][MASKING_ORDER];
  DATATYPE rc__[12][4][MASKING_ORDER];
  DATATYPE round__[4][MASKING_ORDER];
  DATATYPE sbox__V32_1__tmp1_[MASKING_ORDER];
  DATATYPE sbox__V32_1__tmp2_[MASKING_ORDER];
  DATATYPE sbox__V32_1__tmp3_[MASKING_ORDER];
  DATATYPE sbox__V32_1__tmp4_[MASKING_ORDER];
  DATATYPE sbox_R__V32_1__tmp5_[MASKING_ORDER];
  DATATYPE sbox_R__V32_1__tmp6_[MASKING_ORDER];
  DATATYPE sbox_R__V32_1__tmp7_[MASKING_ORDER];
  DATATYPE sbox_R__V32_1__tmp8_[MASKING_ORDER];
  DATATYPE sbox_R__V32_1_y1_R__[MASKING_ORDER];
  DATATYPE tk__[3][4][MASKING_ORDER];

  // Instructions (body)
  rc__[0][0][0] = LIFT_32(1);
  for (int _mask_idx = 1; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    rc__[0][0][_mask_idx] = LIFT_32(0);
    rc__[0][1][_mask_idx] = LIFT_32(0);
    rc__[0][2][_mask_idx] = LIFT_32(0);
    rc__[0][3][_mask_idx] = LIFT_32(0);
    rc__[1][0][_mask_idx] = LIFT_32(0);
    rc__[1][1][_mask_idx] = LIFT_32(0);
    rc__[1][2][_mask_idx] = LIFT_32(0);
    rc__[1][3][_mask_idx] = LIFT_32(0);
    rc__[2][0][_mask_idx] = LIFT_32(0);
    rc__[2][1][_mask_idx] = LIFT_32(0);
    rc__[2][2][_mask_idx] = LIFT_32(0);
    rc__[2][3][_mask_idx] = LIFT_32(0);
    rc__[3][0][_mask_idx] = LIFT_32(0);
    rc__[3][1][_mask_idx] = LIFT_32(0);
    rc__[3][2][_mask_idx] = LIFT_32(0);
    rc__[3][3][_mask_idx] = LIFT_32(0);
    rc__[4][0][_mask_idx] = LIFT_32(0);
    rc__[4][1][_mask_idx] = LIFT_32(0);
    rc__[4][2][_mask_idx] = LIFT_32(0);
    rc__[4][3][_mask_idx] = LIFT_32(0);
    rc__[5][0][_mask_idx] = LIFT_32(0);
    rc__[5][1][_mask_idx] = LIFT_32(0);
    rc__[5][2][_mask_idx] = LIFT_32(0);
    rc__[5][3][_mask_idx] = LIFT_32(0);
    rc__[6][0][_mask_idx] = LIFT_32(0);
    rc__[6][1][_mask_idx] = LIFT_32(0);
    rc__[6][2][_mask_idx] = LIFT_32(0);
    rc__[6][3][_mask_idx] = LIFT_32(0);
    rc__[7][0][_mask_idx] = LIFT_32(0);
    rc__[7][1][_mask_idx] = LIFT_32(0);
    rc__[7][2][_mask_idx] = LIFT_32(0);
    rc__[7][3][_mask_idx] = LIFT_32(0);
    rc__[8][0][_mask_idx] = LIFT_32(0);
    rc__[8][1][_mask_idx] = LIFT_32(0);
    rc__[8][2][_mask_idx] = LIFT_32(0);
    rc__[8][3][_mask_idx] = LIFT_32(0);
    rc__[9][0][_mask_idx] = LIFT_32(0);
    rc__[9][1][_mask_idx] = LIFT_32(0);
    rc__[9][2][_mask_idx] = LIFT_32(0);
    rc__[9][3][_mask_idx] = LIFT_32(0);
    rc__[10][0][_mask_idx] = LIFT_32(0);
    rc__[10][1][_mask_idx] = LIFT_32(0);
    rc__[10][2][_mask_idx] = LIFT_32(0);
    rc__[10][3][_mask_idx] = LIFT_32(0);
    rc__[11][0][_mask_idx] = LIFT_32(0);
    rc__[11][1][_mask_idx] = LIFT_32(0);
    rc__[11][2][_mask_idx] = LIFT_32(0);
    rc__[11][3][_mask_idx] = LIFT_32(0);
  }
  rc__[0][1][0] = LIFT_32(0);
  rc__[0][2][0] = LIFT_32(0);
  rc__[0][3][0] = LIFT_32(0);
  rc__[1][0][0] = LIFT_32(0);
  rc__[1][1][0] = LIFT_32(1);
  rc__[1][2][0] = LIFT_32(0);
  rc__[1][3][0] = LIFT_32(0);
  rc__[2][0][0] = LIFT_32(0);
  rc__[2][1][0] = LIFT_32(0);
  rc__[2][2][0] = LIFT_32(1);
  rc__[2][3][0] = LIFT_32(0);
  rc__[3][0][0] = LIFT_32(0);
  rc__[3][1][0] = LIFT_32(0);
  rc__[3][2][0] = LIFT_32(0);
  rc__[3][3][0] = LIFT_32(1);
  rc__[4][0][0] = LIFT_32(1);
  rc__[4][1][0] = LIFT_32(1);
  rc__[4][2][0] = LIFT_32(0);
  rc__[4][3][0] = LIFT_32(0);
  rc__[5][0][0] = LIFT_32(0);
  rc__[5][1][0] = LIFT_32(1);
  rc__[5][2][0] = LIFT_32(1);
  rc__[5][3][0] = LIFT_32(0);
  rc__[6][0][0] = LIFT_32(0);
  rc__[6][1][0] = LIFT_32(0);
  rc__[6][2][0] = LIFT_32(1);
  rc__[6][3][0] = LIFT_32(1);
  rc__[7][0][0] = LIFT_32(1);
  rc__[7][1][0] = LIFT_32(1);
  rc__[7][2][0] = LIFT_32(0);
  rc__[7][3][0] = LIFT_32(1);
  rc__[8][0][0] = LIFT_32(1);
  rc__[8][1][0] = LIFT_32(0);
  rc__[8][2][0] = LIFT_32(1);
  rc__[8][3][0] = LIFT_32(0);
  rc__[9][0][0] = LIFT_32(0);
  rc__[9][1][0] = LIFT_32(1);
  rc__[9][2][0] = LIFT_32(0);
  rc__[9][3][0] = LIFT_32(1);
  rc__[10][0][0] = LIFT_32(1);
  rc__[10][1][0] = LIFT_32(1);
  rc__[10][2][0] = LIFT_32(1);
  rc__[10][3][0] = LIFT_32(0);
  rc__[11][0][0] = LIFT_32(0);
  rc__[11][1][0] = LIFT_32(1);
  rc__[11][2][0] = LIFT_32(1);
  rc__[11][3][0] = LIFT_32(1);
  tweakey__V32(key__,tweak__,tk__);
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    round__[0][_mask_idx] = XOR(state__[0][_mask_idx],tk__[0][0][_mask_idx]);
    round__[1][_mask_idx] = XOR(state__[1][_mask_idx],tk__[0][1][_mask_idx]);
    round__[2][_mask_idx] = XOR(state__[2][_mask_idx],tk__[0][2][_mask_idx]);
    round__[3][_mask_idx] = XOR(state__[3][_mask_idx],tk__[0][3][_mask_idx]);
  }
  for (int s__ = 0; s__ <= 5; s__++) {
    MASKED_AND(sbox_R__V32_1__tmp5_,round__[0],round__[1]);
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      _tmp73_[1][_mask_idx] = XOR(sbox_R__V32_1__tmp5_[_mask_idx],round__[2][_mask_idx]);
    }
    REFRESH(sbox_R__V32_1_y1_R__,_tmp73_[1]);
    MASKED_AND(sbox_R__V32_1__tmp6_,round__[3],round__[0]);
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      _tmp73_[0][_mask_idx] = XOR(sbox_R__V32_1__tmp6_[_mask_idx],round__[1][_mask_idx]);
    }
    MASKED_AND(sbox_R__V32_1__tmp7_,sbox_R__V32_1_y1_R__,round__[3]);
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      _tmp73_[3][_mask_idx] = XOR(sbox_R__V32_1__tmp7_[_mask_idx],round__[0][_mask_idx]);
    }
    MASKED_AND(sbox_R__V32_1__tmp8_,_tmp73_[0],sbox_R__V32_1_y1_R__);
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      _tmp73_[2][_mask_idx] = XOR(sbox_R__V32_1__tmp8_[_mask_idx],round__[3][_mask_idx]);
    }
    lbox_layer__V32(_tmp73_,_tmp74_);
    add_rc__V32(_tmp74_,rc__[(s__ * 2)],round__);
    MASKED_AND(sbox__V32_1__tmp1_,round__[0],round__[1]);
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      _tmp75_[1][_mask_idx] = XOR(sbox__V32_1__tmp1_[_mask_idx],round__[2][_mask_idx]);
    }
    MASKED_AND(sbox__V32_1__tmp2_,round__[3],round__[0]);
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      _tmp75_[0][_mask_idx] = XOR(sbox__V32_1__tmp2_[_mask_idx],round__[1][_mask_idx]);
    }
    MASKED_AND(sbox__V32_1__tmp3_,_tmp75_[1],round__[3]);
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      _tmp75_[3][_mask_idx] = XOR(sbox__V32_1__tmp3_[_mask_idx],round__[0][_mask_idx]);
    }
    MASKED_AND(sbox__V32_1__tmp4_,_tmp75_[0],_tmp75_[1]);
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      _tmp75_[2][_mask_idx] = XOR(sbox__V32_1__tmp4_[_mask_idx],round__[3][_mask_idx]);
    }
    lbox_layer__V32(_tmp75_,_tmp76_);
    add_rc__V32(_tmp76_,rc__[((s__ * 2) + 1)],round__);
    for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
      round__[0][_mask_idx] = XOR(round__[0][_mask_idx],tk__[((s__ + 1) % 3)][0][_mask_idx]);
      round__[1][_mask_idx] = XOR(round__[1][_mask_idx],tk__[((s__ + 1) % 3)][1][_mask_idx]);
      round__[2][_mask_idx] = XOR(round__[2][_mask_idx],tk__[((s__ + 1) % 3)][2][_mask_idx]);
      round__[3][_mask_idx] = XOR(round__[3][_mask_idx],tk__[((s__ + 1) % 3)][3][_mask_idx]);
    }
  }
  for (int _mask_idx = 0; _mask_idx <= (MASKING_ORDER - 1); _mask_idx++) {
    cipher__[0][_mask_idx] = round__[0][_mask_idx];
    cipher__[1][_mask_idx] = round__[1][_mask_idx];
    cipher__[2][_mask_idx] = round__[2][_mask_idx];
    cipher__[3][_mask_idx] = round__[3][_mask_idx];
  }

}

/* Additional functions */
uint32_t bench_speed() {
  /* inputs */
  DATATYPE state__[4][MASKING_ORDER] = { 0 };
  DATATYPE key__[4][MASKING_ORDER] = { 0 };
  DATATYPE tweak__[4][MASKING_ORDER] = { 0 };
  /* outputs */
  DATATYPE cipher__[4][MASKING_ORDER] = { 0 };
  /* fun call */
  clyde128__(state__, key__, tweak__,cipher__);

  /* Returning the number of encrypted bytes */
  return 16;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

_inline node sbox(x0 :  v1 :: base,x1 :  v1 :: base,x2 :  v1 :: base,x3 :  v1 :: base)
  returns y0 :  v1 :: base,y1 :  v1 :: base,y2 :  v1 :: base,y3 :  v1 :: base
vars

let
  (y1) = ((x0 & x1) ^ x2);
  (y0) = ((x3 & x0) ^ x1);
  (y3) = ((y1 & x3) ^ x0);
  (y2) = ((y0 & y1) ^ x3)
tel

_inline node sbox_R(x0 :  v1 :: base,x1 :  v1 :: base,x2 :  v1 :: base,x3 :  v1 :: base)
  returns y0 :  v1 :: base,y1 :  v1 :: base,y2 :  v1 :: base,y3 :  v1 :: base
vars
  y1_R :  v1 :: base
let
  (y1) = ((x0 & x1) ^ x2);
  (y1_R) = refresh(y1);
  (y0) = ((x3 & x0) ^ x1);
  (y3) = ((y1_R & x3) ^ x0);
  (y2) = ((y0 & y1_R) ^ x3)
tel

_inline node lbox(x :  u32 :: base,y :  u32 :: base)
  returns xr :  u32 :: base,yr :  u32 :: base
vars
  a :  u32 :: base,
  b :  u32 :: base,
  c :  u32 :: base,
  d :  u32 :: base
let
  (a) = (x ^ (x >>> 12));
  (b) = (y ^ (y >>> 12));
  (a) := (a ^ (a >>> 3));
  (b) := (b ^ (b >>> 3));
  (a) := (a ^ (x >>> 17));
  (b) := (b ^ (y >>> 17));
  (c) = (a ^ (a >>> 31));
  (d) = (b ^ (b >>> 31));
  (a) := (a ^ (d >>> 26));
  (b) := (b ^ (c >>> 25));
  (a) := (a ^ (c >>> 15));
  (b) := (b ^ (d >>> 15));
  (xr,yr) = (a,b)
tel

_no_inline node lbox_layer(state :  u32x4 :: base)
  returns stateR :  u32x4 :: base
vars

let
  (stateR[0,1]) = lbox(state[0],state[1]);
  (stateR[2,3]) = lbox(state[2],state[3])
tel

_no_inline node add_rc(state :  u32x4 :: base,rc :  u32x4 :: base)
  returns stateR :  u32x4 :: base
vars

let
  forall i in [0,3] {
    (stateR[i]) = (state[i] ^ rc[i])
  }
tel

_no_inline node tweakey(key :  u32x4 :: base,tweak :  u32x4 :: base)
  returns tk :  u32x4[3] :: base
vars
  tx :  u32[2] :: base
let
  (tx) = (tweak[0,1] ^ tweak[2,3]);
  (tk[0]) = (key ^ tweak);
  (tk[1]) = ((key[0,1] ^ tx),(key[2,3] ^ tweak[0,1]));
  (tk[2]) = ((key[0,1] ^ tweak[2,3]),(key[2,3] ^ tx))
tel

 node clyde128(state :  u32x4 :: base,key :  u32x4 :: base,tweak :  u32x4 :: base)
  returns cipher :  u32x4 :: base
vars
  rc :  u32x4[12] :: base,
  round :  u32x4[19] :: base,
  tk :  u32x4[3] :: base
let
  (rc[0]) = (1,0,0,0);
  (rc[1]) = (0,1,0,0);
  (rc[2]) = (0,0,1,0);
  (rc[3]) = (0,0,0,1);
  (rc[4]) = (1,1,0,0);
  (rc[5]) = (0,1,1,0);
  (rc[6]) = (0,0,1,1);
  (rc[7]) = (1,1,0,1);
  (rc[8]) = (1,0,1,0);
  (rc[9]) = (0,1,0,1);
  (rc[10]) = (1,1,1,0);
  (rc[11]) = (0,1,1,1);
  (tk) = tweakey(key,tweak);
  (round[0]) = (state ^ tk[0]);
  forall s in [0,5] {
    (round[((s * 3) + 1)]) = add_rc(lbox_layer(sbox_R(round[(s * 3)])),rc[(s * 2)]);
    (round[((s * 3) + 2)]) = add_rc(lbox_layer(sbox(round[((s * 3) + 1)])),rc[((s * 2) + 1)]);
    (round[((s * 3) + 3)]) = (round[((s * 3) + 2)] ^ tk[((s + 1) % 3)])
  };
  (cipher) = round[18]
tel

*/
 