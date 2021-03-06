/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "nist/drygascon/usuba/ua/drygascon.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 64
#endif
/* including the architecture specific .h */
#include "STD.h"

/* auxiliary functions */
void Sbox__V64 (/*inputs*/ DATATYPE x[5], /*outputs*/ DATATYPE xr[5]) {

  // Variables declaration
  DATATYPE _shadow_t04_;
  DATATYPE _shadow_t15_;
  DATATYPE _shadow_t26_;
  DATATYPE _shadow_t37_;
  DATATYPE _shadow_t48_;
  DATATYPE _shadow_x015_;
  DATATYPE _shadow_x01_;
  DATATYPE _shadow_x09_;
  DATATYPE _shadow_x110_;
  DATATYPE _shadow_x114_;
  DATATYPE _shadow_x211_;
  DATATYPE _shadow_x217_;
  DATATYPE _shadow_x23_;
  DATATYPE _shadow_x312_;
  DATATYPE _shadow_x316_;
  DATATYPE _shadow_x413_;
  DATATYPE _shadow_x42_;
  DATATYPE t0;
  DATATYPE t1;
  DATATYPE t2;
  DATATYPE t3;
  DATATYPE t4;

  // Instructions (body)
  _shadow_x01_ = XOR(x[0],x[4]);
  _shadow_x42_ = XOR(x[4],x[3]);
  _shadow_x23_ = XOR(x[2],x[1]);
  t0 = NOT(_shadow_x01_);
  t1 = NOT(x[1]);
  t2 = NOT(_shadow_x23_);
  t3 = NOT(x[3]);
  t4 = NOT(_shadow_x42_);
  _shadow_t04_ = AND(t0,x[1]);
  _shadow_t15_ = AND(t1,_shadow_x23_);
  _shadow_t26_ = AND(t2,x[3]);
  _shadow_t37_ = AND(t3,_shadow_x42_);
  _shadow_t48_ = AND(t4,_shadow_x01_);
  _shadow_x09_ = XOR(_shadow_x01_,_shadow_t15_);
  _shadow_x110_ = XOR(x[1],_shadow_t26_);
  _shadow_x211_ = XOR(_shadow_x23_,_shadow_t37_);
  _shadow_x312_ = XOR(x[3],_shadow_t48_);
  _shadow_x413_ = XOR(_shadow_x42_,_shadow_t04_);
  _shadow_x114_ = XOR(_shadow_x110_,_shadow_x09_);
  _shadow_x015_ = XOR(_shadow_x09_,_shadow_x413_);
  _shadow_x316_ = XOR(_shadow_x312_,_shadow_x211_);
  _shadow_x217_ = NOT(_shadow_x211_);
  xr[0] = _shadow_x015_;
  xr[1] = _shadow_x114_;
  xr[2] = _shadow_x217_;
  xr[3] = _shadow_x316_;
  xr[4] = _shadow_x413_;

}

void AddConstant__V64 (/*inputs*/ DATATYPE state__[5],DATATYPE c__, /*outputs*/ DATATYPE stateR__[5]) {

  // Variables declaration
  DATATYPE _tmp1_;

  // Instructions (body)
  _tmp1_ = XOR(state__[2],c__);
  stateR__[0] = state__[0];
  stateR__[1] = state__[1];
  stateR__[2] = _tmp1_;
  stateR__[3] = state__[3];
  stateR__[4] = state__[4];

}

void Rotr32__V_Natnat_64 (/*inputs*/ DATATYPE x__,int n__, /*outputs*/ DATATYPE* y__) {

  // Variables declaration
  DATATYPE _tmp2_;
  DATATYPE _tmp3_;
  DATATYPE _tmp4_;
  DATATYPE _tmp75_;

  // Instructions (body)
  _tmp2_ = R_SHIFT(x__,n__,64);
  _tmp3_ = L_SHIFT(x__,(32 - n__),64);
  _tmp4_ = XOR(_tmp2_,_tmp3_);
  _tmp75_ = LIFT_64(4294967295);
  *y__ = AND(_tmp4_,_tmp75_);

}

void BitRotR_odd__V_Natnat_64 (/*inputs*/ DATATYPE x__,int shift__, /*outputs*/ DATATYPE* y__) {

  // Variables declaration
  DATATYPE _shadow_i1__18_;
  int _tmp12_;
  int _tmp14_;
  DATATYPE _tmp15_;
  DATATYPE _tmp17_;
  int _tmp8_;
  DATATYPE i0__;
  DATATYPE i1__;
  DATATYPE t__;
  DATATYPE _tmp77_;
  DATATYPE _tmp76_;

  // Instructions (body)
  _tmp76_ = LIFT_64(4294967295);
  i0__ = AND(x__,_tmp76_);
  i1__ = R_SHIFT(x__,32,64);
  _tmp8_ = ((shift__) / (2));
  Rotr32__V_Natnat_64(i1__,_tmp8_,&t__);
  _tmp12_ = ((_tmp8_) + (1));
  _tmp14_ = ((_tmp12_) % (32));
  Rotr32__V_Natnat_64(i0__,_tmp14_,&_shadow_i1__18_);
  _tmp15_ = L_SHIFT(_shadow_i1__18_,32,64);
  _tmp77_ = LIFT_64(4294967295);
  _tmp17_ = AND(t__,_tmp77_);
  *y__ = XOR(_tmp15_,_tmp17_);

}

void BitRotR_eve__V_Natnat_64 (/*inputs*/ DATATYPE x__,int shift__, /*outputs*/ DATATYPE* y__) {

  // Variables declaration
  DATATYPE _shadow_i0__20_;
  DATATYPE _shadow_i1__21_;
  int _tmp20_;
  DATATYPE _tmp23_;
  DATATYPE _tmp25_;
  DATATYPE i0__;
  DATATYPE i1__;
  DATATYPE _tmp79_;
  DATATYPE _tmp78_;

  // Instructions (body)
  _tmp78_ = LIFT_64(4294967295);
  i0__ = AND(x__,_tmp78_);
  i1__ = R_SHIFT(x__,32,64);
  _tmp20_ = ((shift__) / (2));
  Rotr32__V_Natnat_64(i0__,_tmp20_,&_shadow_i0__20_);
  Rotr32__V_Natnat_64(i1__,_tmp20_,&_shadow_i1__21_);
  _tmp23_ = L_SHIFT(_shadow_i1__21_,32,64);
  _tmp79_ = LIFT_64(4294967295);
  _tmp25_ = AND(_shadow_i0__20_,_tmp79_);
  *y__ = XOR(_tmp23_,_tmp25_);

}

void LinearLayer__V64 (/*inputs*/ DATATYPE state__[5], /*outputs*/ DATATYPE stateR__[5]) {

  // Variables declaration
  DATATYPE _tmp27_;
  DATATYPE _tmp29_;
  DATATYPE _tmp30_;
  DATATYPE _tmp32_;
  DATATYPE _tmp34_;
  DATATYPE _tmp35_;
  DATATYPE _tmp37_;
  DATATYPE _tmp39_;
  DATATYPE _tmp40_;
  DATATYPE _tmp42_;
  DATATYPE _tmp44_;
  DATATYPE _tmp45_;
  DATATYPE _tmp47_;
  DATATYPE _tmp49_;
  DATATYPE _tmp50_;
  int _tmp89_;
  int _tmp88_;
  int _tmp87_;
  int _tmp86_;
  int _tmp85_;
  int _tmp84_;
  int _tmp83_;
  int _tmp82_;
  int _tmp81_;
  int _tmp80_;

  // Instructions (body)
  _tmp80_ = 19;
  BitRotR_odd__V_Natnat_64(state__[0],_tmp80_,&_tmp27_);
  _tmp81_ = 28;
  BitRotR_eve__V_Natnat_64(state__[0],_tmp81_,&_tmp29_);
  _tmp30_ = XOR(_tmp27_,_tmp29_);
  stateR__[0] = XOR(state__[0],_tmp30_);
  _tmp82_ = 61;
  BitRotR_odd__V_Natnat_64(state__[1],_tmp82_,&_tmp32_);
  _tmp83_ = 38;
  BitRotR_eve__V_Natnat_64(state__[1],_tmp83_,&_tmp34_);
  _tmp35_ = XOR(_tmp32_,_tmp34_);
  stateR__[1] = XOR(state__[1],_tmp35_);
  _tmp84_ = 1;
  BitRotR_odd__V_Natnat_64(state__[2],_tmp84_,&_tmp37_);
  _tmp85_ = 6;
  BitRotR_eve__V_Natnat_64(state__[2],_tmp85_,&_tmp39_);
  _tmp40_ = XOR(_tmp37_,_tmp39_);
  stateR__[2] = XOR(state__[2],_tmp40_);
  _tmp86_ = 10;
  BitRotR_eve__V_Natnat_64(state__[3],_tmp86_,&_tmp42_);
  _tmp87_ = 17;
  BitRotR_odd__V_Natnat_64(state__[3],_tmp87_,&_tmp44_);
  _tmp45_ = XOR(_tmp42_,_tmp44_);
  stateR__[3] = XOR(state__[3],_tmp45_);
  _tmp88_ = 7;
  BitRotR_odd__V_Natnat_64(state__[4],_tmp88_,&_tmp47_);
  _tmp89_ = 40;
  BitRotR_eve__V_Natnat_64(state__[4],_tmp89_,&_tmp49_);
  _tmp50_ = XOR(_tmp47_,_tmp49_);
  stateR__[4] = XOR(state__[4],_tmp50_);

}

void CoreRound__V64 (/*inputs*/ DATATYPE c__[5],DATATYPE cst__, /*outputs*/ DATATYPE cR__[5]) {

  // Variables declaration
  DATATYPE _tmp51_[5];
  DATATYPE _tmp52_[5];

  // Instructions (body)
  AddConstant__V64(c__,cst__,_tmp51_);
  Sbox__V64(_tmp51_,_tmp52_);
  LinearLayer__V64(_tmp52_,cR__);

}

void Accumulate__V64 (/*inputs*/ DATATYPE r__[2],DATATYPE c__[5], /*outputs*/ DATATYPE rR__[2]) {

  // Variables declaration
  DATATYPE _tmp53_;
  DATATYPE _tmp54_;
  DATATYPE _tmp55_;
  DATATYPE _tmp56_;
  DATATYPE _tmp57_;
  DATATYPE _tmp58_;
  DATATYPE _tmp59_;
  DATATYPE _tmp60_;

  // Instructions (body)
  _tmp53_ = XOR(r__[0],c__[0]);
  _tmp54_ = R_SHIFT(c__[2],32,64);
  _tmp55_ = XOR(_tmp53_,_tmp54_);
  _tmp56_ = L_SHIFT(c__[3],32,64);
  rR__[0] = XOR(_tmp55_,_tmp56_);
  _tmp57_ = XOR(r__[1],c__[1]);
  _tmp58_ = R_SHIFT(c__[3],32,64);
  _tmp59_ = XOR(_tmp57_,_tmp58_);
  _tmp60_ = L_SHIFT(c__[2],32,64);
  rR__[1] = XOR(_tmp59_,_tmp60_);

}

/* main function */
void drysponge_g__ (/*inputs*/ DATATYPE c__[5], /*outputs*/ DATATYPE cR__[5],DATATYPE r__[2]) {

  // Variables declaration
  DATATYPE csts__[12];
  DATATYPE round_c__[5];
  DATATYPE round_r__[2];

  // Instructions (body)
  csts__[0] = LIFT_64(240);
  csts__[1] = LIFT_64(225);
  csts__[2] = LIFT_64(210);
  csts__[3] = LIFT_64(195);
  csts__[4] = LIFT_64(180);
  csts__[5] = LIFT_64(165);
  csts__[6] = LIFT_64(150);
  csts__[7] = LIFT_64(135);
  csts__[8] = LIFT_64(120);
  csts__[9] = LIFT_64(105);
  csts__[10] = LIFT_64(90);
  csts__[11] = LIFT_64(75);
  round_c__[0] = c__[0];
  round_c__[1] = c__[1];
  round_c__[2] = c__[2];
  round_c__[3] = c__[3];
  round_c__[4] = c__[4];
  round_r__[0] = LIFT_64(0);
  round_r__[1] = LIFT_64(0);
  for (int i__ = 0; i__ <= 10; i__++) {
    CoreRound__V64(round_c__,csts__[i__],round_c__);
    Accumulate__V64(round_r__,round_c__,round_r__);
  }
  cR__[0] = round_c__[0];
  cR__[1] = round_c__[1];
  cR__[2] = round_c__[2];
  cR__[3] = round_c__[3];
  cR__[4] = round_c__[4];
  r__[0] = round_r__[0];
  r__[1] = round_r__[1];

}

/* Additional functions */
uint32_t bench_speed() {
  /* inputs */
  DATATYPE c__[5] = { 0 };
  /* outputs */
  DATATYPE cR__[5] = { 0 };
  DATATYPE r__[2] = { 0 };
  /* fun call */
  drysponge_g__(c__,cR__, r__);

  /* Returning the number of encrypted bytes */
  return 56;
}

/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 table Sbox(x :  v5 :: base)
  returns y :  v5 :: base
{
  4, 11, 31, 20, 26, 21, 9, 2, 27, 5, 8, 18, 29, 3, 6, 28, 30, 19, 7, 14, 0, 13, 17, 24, 16, 12, 1, 25, 22, 10, 15, 23
}


 node AddConstant(state :  u64x5 :: base,c :  u64 :: base)
  returns stateR :  u64x5 :: base
vars

let
  (stateR) = (state[0,1],(state[2] ^ c),state[3,4])
tel

 node Rotr32(x :  u64 :: base,n :  nat :: base)
  returns y :  u64 :: base
vars

let
  (y) = (((x >> n) ^ (x << (32 - n))) & 4294967295)
tel

_inline node BitRotR_odd(x :  u64 :: base,shift :  nat :: base)
  returns y :  u64 :: base
vars
  i0 :  u64 :: base,
  i1 :  u64 :: base,
  t :  u64 :: base
let
  (i0) = (x & 4294967295);
  (i1) = (x >> 32);
  (t) = Rotr32(i1,(shift / 2));
  (i1) := Rotr32(i0,(((shift / 2) + 1) % 32));
  (i0) := t;
  (y) = ((i1 << 32) ^ (i0 & 4294967295))
tel

_inline node BitRotR_eve(x :  u64 :: base,shift :  nat :: base)
  returns y :  u64 :: base
vars
  i0 :  u64 :: base,
  i1 :  u64 :: base
let
  (i0) = (x & 4294967295);
  (i1) = (x >> 32);
  (i0) := Rotr32(i0,(shift / 2));
  (i1) := Rotr32(i1,(shift / 2));
  (y) = ((i1 << 32) ^ (i0 & 4294967295))
tel

 node LinearLayer(state :  u64x5 :: base)
  returns stateR :  u64x5 :: base
vars

let
  (stateR[0]) = (state[0] ^ (BitRotR_odd(state[0],19) ^ BitRotR_eve(state[0],28)));
  (stateR[1]) = (state[1] ^ (BitRotR_odd(state[1],61) ^ BitRotR_eve(state[1],38)));
  (stateR[2]) = (state[2] ^ (BitRotR_odd(state[2],1) ^ BitRotR_eve(state[2],6)));
  (stateR[3]) = (state[3] ^ (BitRotR_eve(state[3],10) ^ BitRotR_odd(state[3],17)));
  (stateR[4]) = (state[4] ^ (BitRotR_odd(state[4],7) ^ BitRotR_eve(state[4],40)))
tel

 node CoreRound(c :  u64x5 :: base,cst :  u64 :: base)
  returns cR :  u64x5 :: base
vars

let
  (cR) = LinearLayer(Sbox(AddConstant(c,cst)))
tel

 node Accumulate(r :  u64x2 :: base,c :  u64x5 :: base)
  returns rR :  u64x2 :: base
vars

let
  (rR[0]) = (((r[0] ^ c[0]) ^ (c[2] >> 32)) ^ (c[3] << 32));
  (rR[1]) = (((r[1] ^ c[1]) ^ (c[3] >> 32)) ^ (c[2] << 32))
tel

 node drysponge_g(c :  u64x5 :: base)
  returns cR :  u64x5 :: base,r :  u64x2 :: base
vars
  csts :  u64[12] :: base,
  round_c :  u64x5[12] :: base,
  round_r :  u64x2[12] :: base
let
  (csts) = (240,225,210,195,180,165,150,135,120,105,90,75);
  (round_c[0]) = c;
  (round_r[0]) = (0,0);
  forall i in [0,10] {
    (round_c[(i + 1)]) = CoreRound(round_c[i],csts[i]);
    (round_r[(i + 1)]) = Accumulate(round_r[i],round_c[(i + 1)])
  };
  (cR) = round_c[11];
  (r) = round_r[11]
tel

*/
 