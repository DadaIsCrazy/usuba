/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "nist/xoodoo/usuba/ua/xoodoo.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 32
#endif
/* including the architecture specific .h */
#include "STD.h"

/* auxiliary functions */
void theta__V32 (/*inputs*/ DATATYPE A__[3][4], /*outputs*/ DATATYPE R__[3][4]) {

  // Variables declaration
  DATATYPE E__[4];
  DATATYPE P__[4];
  DATATYPE _tmp1_[4];
  DATATYPE _tmp2_;
  DATATYPE _tmp3_;

  // Instructions (body)
  _tmp1_[0] = XOR(A__[0][0],A__[1][0]);
  _tmp1_[1] = XOR(A__[0][1],A__[1][1]);
  _tmp1_[2] = XOR(A__[0][2],A__[1][2]);
  _tmp1_[3] = XOR(A__[0][3],A__[1][3]);
  P__[0] = XOR(_tmp1_[0],A__[2][0]);
  P__[1] = XOR(_tmp1_[1],A__[2][1]);
  P__[2] = XOR(_tmp1_[2],A__[2][2]);
  P__[3] = XOR(_tmp1_[3],A__[2][3]);
  for (int i__ = 0; i__ <= 3; i__++) {
    _tmp2_ = L_ROTATE(P__[((i__ + 3) % 4)],5,32);
    _tmp3_ = L_ROTATE(P__[((i__ + 3) % 4)],14,32);
    E__[i__] = XOR(_tmp2_,_tmp3_);
  }
  for (int i__ = 0; i__ <= 2; i__++) {
    R__[i__][0] = XOR(A__[i__][0],E__[0]);
    R__[i__][1] = XOR(A__[i__][1],E__[1]);
    R__[i__][2] = XOR(A__[i__][2],E__[2]);
    R__[i__][3] = XOR(A__[i__][3],E__[3]);
  }

}

void rho_west__V32 (/*inputs*/ DATATYPE A__[3][4], /*outputs*/ DATATYPE R__[3][4]) {

  // Variables declaration
  ;

  // Instructions (body)
  R__[0][0] = A__[0][0];
  R__[0][1] = A__[0][1];
  R__[0][2] = A__[0][2];
  R__[0][3] = A__[0][3];
  R__[1][0] = A__[1][3];
  R__[1][1] = A__[1][0];
  R__[1][2] = A__[1][1];
  R__[1][3] = A__[1][2];
  for (int i__ = 0; i__ <= 3; i__++) {
    R__[2][i__] = L_ROTATE(A__[2][i__],11,32);
  }

}

void iota__V32 (/*inputs*/ DATATYPE A__[3][4],DATATYPE rc__, /*outputs*/ DATATYPE R__[3][4]) {

  // Variables declaration
  ;

  // Instructions (body)
  R__[0][0] = XOR(A__[0][0],rc__);
  R__[0][1] = A__[0][1];
  R__[0][2] = A__[0][2];
  R__[0][3] = A__[0][3];
  R__[1][0] = A__[1][0];
  R__[1][1] = A__[1][1];
  R__[1][2] = A__[1][2];
  R__[1][3] = A__[1][3];
  R__[2][0] = A__[2][0];
  R__[2][1] = A__[2][1];
  R__[2][2] = A__[2][2];
  R__[2][3] = A__[2][3];

}

void chi__V32 (/*inputs*/ DATATYPE A__[3][4], /*outputs*/ DATATYPE R__[3][4]) {

  // Variables declaration
  DATATYPE B__[3][4];
  DATATYPE _tmp4_[4];
  DATATYPE _tmp5_[4];
  DATATYPE _tmp6_[4];

  // Instructions (body)
  _tmp4_[0] = NOT(A__[1][0]);
  _tmp4_[1] = NOT(A__[1][1]);
  _tmp4_[2] = NOT(A__[1][2]);
  _tmp4_[3] = NOT(A__[1][3]);
  B__[0][0] = AND(_tmp4_[0],A__[2][0]);
  B__[0][1] = AND(_tmp4_[1],A__[2][1]);
  B__[0][2] = AND(_tmp4_[2],A__[2][2]);
  B__[0][3] = AND(_tmp4_[3],A__[2][3]);
  _tmp5_[0] = NOT(A__[2][0]);
  _tmp5_[1] = NOT(A__[2][1]);
  _tmp5_[2] = NOT(A__[2][2]);
  _tmp5_[3] = NOT(A__[2][3]);
  B__[1][0] = AND(_tmp5_[0],A__[0][0]);
  B__[1][1] = AND(_tmp5_[1],A__[0][1]);
  B__[1][2] = AND(_tmp5_[2],A__[0][2]);
  B__[1][3] = AND(_tmp5_[3],A__[0][3]);
  _tmp6_[0] = NOT(A__[0][0]);
  _tmp6_[1] = NOT(A__[0][1]);
  _tmp6_[2] = NOT(A__[0][2]);
  _tmp6_[3] = NOT(A__[0][3]);
  B__[2][0] = AND(_tmp6_[0],A__[1][0]);
  B__[2][1] = AND(_tmp6_[1],A__[1][1]);
  B__[2][2] = AND(_tmp6_[2],A__[1][2]);
  B__[2][3] = AND(_tmp6_[3],A__[1][3]);
  R__[0][0] = XOR(A__[0][0],B__[0][0]);
  R__[0][1] = XOR(A__[0][1],B__[0][1]);
  R__[0][2] = XOR(A__[0][2],B__[0][2]);
  R__[0][3] = XOR(A__[0][3],B__[0][3]);
  R__[1][0] = XOR(A__[1][0],B__[1][0]);
  R__[1][1] = XOR(A__[1][1],B__[1][1]);
  R__[1][2] = XOR(A__[1][2],B__[1][2]);
  R__[1][3] = XOR(A__[1][3],B__[1][3]);
  R__[2][0] = XOR(A__[2][0],B__[2][0]);
  R__[2][1] = XOR(A__[2][1],B__[2][1]);
  R__[2][2] = XOR(A__[2][2],B__[2][2]);
  R__[2][3] = XOR(A__[2][3],B__[2][3]);

}

void rho_east__V32 (/*inputs*/ DATATYPE A__[3][4], /*outputs*/ DATATYPE R__[3][4]) {

  // Variables declaration
  ;

  // Instructions (body)
  R__[0][0] = A__[0][0];
  R__[0][1] = A__[0][1];
  R__[0][2] = A__[0][2];
  R__[0][3] = A__[0][3];
  for (int i__ = 0; i__ <= 3; i__++) {
    R__[1][i__] = L_ROTATE(A__[1][i__],1,32);
  }
  for (int i__ = 0; i__ <= 3; i__++) {
    R__[2][i__] = L_ROTATE(A__[2][((i__ + 2) % 4)],8,32);
  }

}

void round__V32 (/*inputs*/ DATATYPE state__[3][4],DATATYPE rc__, /*outputs*/ DATATYPE stateR__[3][4]) {

  // Variables declaration
  DATATYPE _tmp10_[3][4];
  DATATYPE _tmp7_[3][4];
  DATATYPE _tmp8_[3][4];
  DATATYPE _tmp9_[3][4];

  // Instructions (body)
  theta__V32(state__,_tmp7_);
  rho_west__V32(_tmp7_,_tmp8_);
  iota__V32(_tmp8_,rc__,_tmp9_);
  chi__V32(_tmp9_,_tmp10_);
  rho_east__V32(_tmp10_,stateR__);

}

/* main function */
void xoodoo__ (/*inputs*/ DATATYPE input__[3][4], /*outputs*/ DATATYPE output__[3][4]) {

  // Variables declaration
  DATATYPE RC__[12];
  DATATYPE state__[3][4];

  // Instructions (body)
  RC__[0] = LIFT_32(88);
  RC__[1] = LIFT_32(56);
  RC__[2] = LIFT_32(960);
  RC__[3] = LIFT_32(208);
  RC__[4] = LIFT_32(288);
  RC__[5] = LIFT_32(20);
  RC__[6] = LIFT_32(96);
  RC__[7] = LIFT_32(44);
  RC__[8] = LIFT_32(896);
  RC__[9] = LIFT_32(240);
  RC__[10] = LIFT_32(416);
  RC__[11] = LIFT_32(18);
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
  for (int i__ = 0; i__ <= 11; i__++) {
    round__V32(state__,RC__[i__],state__);
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

}

/* Additional functions */


/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 node theta(A :  u32[3][4] :: base)
  returns R :  u32[3][4] :: base
vars
  P :  u32[4] :: base,
  E :  u32[4] :: base
let
  (P) = ((A[0] ^ A[1]) ^ A[2]);
  forall i in [0,3] {
    (E[i]) = ((P[((i + 3) % 4)] <<< 5) ^ (P[((i + 3) % 4)] <<< 14))
  };
  forall i in [0,2] {
    (R[i]) = (A[i] ^ E)
  }
tel

 node rho_west(A :  u32[3][4] :: base)
  returns R :  u32[3][4] :: base
vars

let
  (R[0]) = A[0];
  (R[1]) = (A[1] >>> 1);
  forall i in [0,3] {
    (R[2][i]) = (A[2][i] <<< 11)
  }
tel

 node iota(A :  u32[3][4] :: base,rc :  u32 :: base)
  returns R :  u32[3][4] :: base
vars

let
  (R[0][0]) = (A[0][0] ^ rc);
  (R[0][1 .. 3]) = A[0][1 .. 3];
  (R[1,2]) = A[1,2]
tel

 node chi(A :  u32[3][4] :: base)
  returns R :  u32[3][4] :: base
vars
  B :  u32[3][4] :: base
let
  (B[0]) = ((~ A[1]) & A[2]);
  (B[1]) = ((~ A[2]) & A[0]);
  (B[2]) = ((~ A[0]) & A[1]);
  (R) = (A ^ B)
tel

 node rho_east(A :  u32[3][4] :: base)
  returns R :  u32[3][4] :: base
vars

let
  (R[0]) = A[0];
  forall i in [0,3] {
    (R[1][i]) = (A[1][i] <<< 1)
  };
  forall i in [0,3] {
    (R[2][i]) = (A[2][((i + 2) % 4)] <<< 8)
  }
tel

 node round(state :  u32[3][4] :: base,rc :  u32 :: base)
  returns stateR :  u32[3][4] :: base
vars

let
  (stateR) = rho_east(chi(iota(rho_west(theta(state)),rc)))
tel

 node xoodoo(input :  u32[3][4] :: base)
  returns output :  u32[3][4] :: base
vars
  state :  u32[13][3][4] :: base,
  RC :  u32[12] :: base
let
  (RC) = (88,56,960,208,288,20,96,44,896,240,416,18);
  (state[0]) = input;
  forall i in [0,11] {
    (state[(i + 1)]) = round(state[i],RC[i])
  };
  (output) = state[12]
tel

*/
 