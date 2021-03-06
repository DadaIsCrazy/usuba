/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "samples/usuba/tmp.ua" (included below). */


/* Do NOT change the order of those define/include */
#define NO_RUNTIME
#ifndef BITS_PER_REG
#define BITS_PER_REG 128
#endif
/* including the architecture specific .h */
#include "SSE.h"

/* auxiliary functions */
void SubBytes__ (/*inputs*/ DATATYPE b7__,DATATYPE b6__,DATATYPE b5__,DATATYPE b4__,DATATYPE b3__,DATATYPE b2__,DATATYPE b1__,DATATYPE b0__, /*outputs*/ DATATYPE* o7__,DATATYPE* o6__,DATATYPE* o5__,DATATYPE* o4__,DATATYPE* o3__,DATATYPE* o2__,DATATYPE* o1__,DATATYPE* o0__) {
  
  // Variables declaration
  DATATYPE InBasisChange___1_t0__;
  DATATYPE InBasisChange___1_t1__;
  DATATYPE InBasisChange___1_t10__;
  DATATYPE InBasisChange___1_t11__;
  DATATYPE InBasisChange___1_t12__;
  DATATYPE InBasisChange___1_t2__;
  DATATYPE InBasisChange___1_t3__;
  DATATYPE InBasisChange___1_t4__;
  DATATYPE InBasisChange___1_t5__;
  DATATYPE InBasisChange___1_t6__;
  DATATYPE InBasisChange___1_t7__;
  DATATYPE InBasisChange___1_t8__;
  DATATYPE InBasisChange___1_t9__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t0__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t1__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t3__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t4__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t5__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t6__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t0__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t1__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t3__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t4__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t5__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t6__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t1__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t3__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t4__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t5__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t6__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t0__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t1__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t3__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t4__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t5__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t6__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t0__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t1__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t3__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t4__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t5__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t6__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t1__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t3__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t4__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t5__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t6__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_t10__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_t11__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_t12__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_t13__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_t20__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_t21__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_t24__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_t25__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_t26__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_t27__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_t4__;
  DATATYPE Inv_GF256___1_Mul_GF16_2___1_t5__;
  DATATYPE Inv_GF256___1_t0__;
  DATATYPE Inv_GF256___1_t1__;
  DATATYPE Inv_GF256___1_t10__;
  DATATYPE Inv_GF256___1_t11__;
  DATATYPE Inv_GF256___1_t12__;
  DATATYPE Inv_GF256___1_t13__;
  DATATYPE Inv_GF256___1_t14__;
  DATATYPE Inv_GF256___1_t15__;
  DATATYPE Inv_GF256___1_t16__;
  DATATYPE Inv_GF256___1_t17__;
  DATATYPE Inv_GF256___1_t18__;
  DATATYPE Inv_GF256___1_t19__;
  DATATYPE Inv_GF256___1_t2__;
  DATATYPE Inv_GF256___1_t20__;
  DATATYPE Inv_GF256___1_t21__;
  DATATYPE Inv_GF256___1_t22__;
  DATATYPE Inv_GF256___1_t23__;
  DATATYPE Inv_GF256___1_t24__;
  DATATYPE Inv_GF256___1_t25__;
  DATATYPE Inv_GF256___1_t26__;
  DATATYPE Inv_GF256___1_t27__;
  DATATYPE Inv_GF256___1_t28__;
  DATATYPE Inv_GF256___1_t29__;
  DATATYPE Inv_GF256___1_t3__;
  DATATYPE Inv_GF256___1_t30__;
  DATATYPE Inv_GF256___1_t31__;
  DATATYPE Inv_GF256___1_t32__;
  DATATYPE Inv_GF256___1_t33__;
  DATATYPE Inv_GF256___1_t34__;
  DATATYPE Inv_GF256___1_t35__;
  DATATYPE Inv_GF256___1_t36__;
  DATATYPE Inv_GF256___1_t37__;
  DATATYPE Inv_GF256___1_t38__;
  DATATYPE Inv_GF256___1_t39__;
  DATATYPE Inv_GF256___1_t4__;
  DATATYPE Inv_GF256___1_t40__;
  DATATYPE Inv_GF256___1_t41__;
  DATATYPE Inv_GF256___1_t42__;
  DATATYPE Inv_GF256___1_t43__;
  DATATYPE Inv_GF256___1_t44__;
  DATATYPE Inv_GF256___1_t45__;
  DATATYPE Inv_GF256___1_t46__;
  DATATYPE Inv_GF256___1_t47__;
  DATATYPE Inv_GF256___1_t48__;
  DATATYPE Inv_GF256___1_t49__;
  DATATYPE Inv_GF256___1_t5__;
  DATATYPE Inv_GF256___1_t6__;
  DATATYPE Inv_GF256___1_t7__;
  DATATYPE Inv_GF256___1_t8__;
  DATATYPE Inv_GF256___1_t9__;
  DATATYPE OutBasisChange___1_t0__;
  DATATYPE OutBasisChange___1_t1__;
  DATATYPE OutBasisChange___1_t10__;
  DATATYPE OutBasisChange___1_t2__;
  DATATYPE OutBasisChange___1_t3__;
  DATATYPE OutBasisChange___1_t4__;
  DATATYPE OutBasisChange___1_t5__;
  DATATYPE OutBasisChange___1_t6__;
  DATATYPE OutBasisChange___1_t7__;
  DATATYPE OutBasisChange___1_t8__;
  DATATYPE OutBasisChange___1_t9__;


  // Instructions (body)
  InBasisChange___1_t0__ = XOR(b6__,b5__);
  InBasisChange___1_t1__ = XOR(b1__,b2__);
  InBasisChange___1_t2__ = XOR(b0__,InBasisChange___1_t0__);
  InBasisChange___1_t3__ = XOR(InBasisChange___1_t1__,b6__);
  InBasisChange___1_t4__ = XOR(b0__,b3__);
  InBasisChange___1_t5__ = XOR(InBasisChange___1_t4__,InBasisChange___1_t3__);
  InBasisChange___1_t6__ = XOR(b7__,InBasisChange___1_t4__);
  InBasisChange___1_t7__ = XOR(InBasisChange___1_t2__,b7__);
  InBasisChange___1_t8__ = XOR(b4__,InBasisChange___1_t6__);
  InBasisChange___1_t9__ = XOR(InBasisChange___1_t2__,b4__);
  InBasisChange___1_t10__ = XOR(b1__,InBasisChange___1_t8__);
  InBasisChange___1_t11__ = XOR(InBasisChange___1_t7__,InBasisChange___1_t1__);
  InBasisChange___1_t12__ = XOR(InBasisChange___1_t2__,b1__);
  Inv_GF256___1_t0__ = XOR(InBasisChange___1_t7__,InBasisChange___1_t9__);
  Inv_GF256___1_t1__ = XOR(InBasisChange___1_t12__,InBasisChange___1_t11__);
  Inv_GF256___1_t2__ = XOR(InBasisChange___1_t2__,InBasisChange___1_t10__);
  Inv_GF256___1_t3__ = XOR(InBasisChange___1_t11__,InBasisChange___1_t9__);
  Inv_GF256___1_t4__ = XOR(InBasisChange___1_t5__,b0__);
  Inv_GF256___1_t5__ = XOR(Inv_GF256___1_t0__,Inv_GF256___1_t1__);
  Inv_GF256___1_t6__ = AND(Inv_GF256___1_t1__,Inv_GF256___1_t2__);
  Inv_GF256___1_t7__ = OR(Inv_GF256___1_t2__,Inv_GF256___1_t1__);
  Inv_GF256___1_t8__ = AND(Inv_GF256___1_t0__,Inv_GF256___1_t4__);
  Inv_GF256___1_t9__ = OR(Inv_GF256___1_t4__,Inv_GF256___1_t0__);
  Inv_GF256___1_t10__ = XOR(Inv_GF256___1_t2__,Inv_GF256___1_t4__);
  Inv_GF256___1_t11__ = AND(Inv_GF256___1_t10__,Inv_GF256___1_t5__);
  Inv_GF256___1_t12__ = XOR(InBasisChange___1_t10__,b0__);
  Inv_GF256___1_t13__ = AND(Inv_GF256___1_t12__,Inv_GF256___1_t3__);
  Inv_GF256___1_t14__ = XOR(Inv_GF256___1_t13__,Inv_GF256___1_t9__);
  Inv_GF256___1_t15__ = XOR(Inv_GF256___1_t13__,Inv_GF256___1_t7__);
  Inv_GF256___1_t16__ = XOR(InBasisChange___1_t7__,InBasisChange___1_t12__);
  Inv_GF256___1_t17__ = XOR(InBasisChange___1_t2__,InBasisChange___1_t5__);
  Inv_GF256___1_t18__ = OR(Inv_GF256___1_t16__,Inv_GF256___1_t17__);
  Inv_GF256___1_t19__ = AND(Inv_GF256___1_t17__,Inv_GF256___1_t16__);
  Inv_GF256___1_t20__ = XOR(Inv_GF256___1_t19__,Inv_GF256___1_t6__);
  Inv_GF256___1_t21__ = XOR(Inv_GF256___1_t11__,Inv_GF256___1_t14__);
  Inv_GF256___1_t22__ = XOR(Inv_GF256___1_t8__,Inv_GF256___1_t15__);
  Inv_GF256___1_t23__ = XOR(Inv_GF256___1_t11__,Inv_GF256___1_t18__);
  Inv_GF256___1_t24__ = XOR(Inv_GF256___1_t8__,Inv_GF256___1_t20__);
  Inv_GF256___1_t25__ = XOR(Inv_GF256___1_t8__,Inv_GF256___1_t23__);
  Inv_GF256___1_t26__ = AND(InBasisChange___1_t11__,InBasisChange___1_t10__);
  Inv_GF256___1_t27__ = AND(InBasisChange___1_t9__,b0__);
  Inv_GF256___1_t28__ = AND(InBasisChange___1_t12__,InBasisChange___1_t2__);
  Inv_GF256___1_t29__ = OR(InBasisChange___1_t7__,InBasisChange___1_t5__);
  Inv_GF256___1_t30__ = XOR(Inv_GF256___1_t26__,Inv_GF256___1_t21__);
  Inv_GF256___1_t31__ = XOR(Inv_GF256___1_t27__,Inv_GF256___1_t22__);
  Inv_GF256___1_t32__ = XOR(Inv_GF256___1_t28__,Inv_GF256___1_t25__);
  Inv_GF256___1_t33__ = XOR(Inv_GF256___1_t29__,Inv_GF256___1_t24__);
  Inv_GF256___1_t34__ = XOR(Inv_GF256___1_t30__,Inv_GF256___1_t31__);
  Inv_GF256___1_t35__ = AND(Inv_GF256___1_t32__,Inv_GF256___1_t30__);
  Inv_GF256___1_t36__ = XOR(Inv_GF256___1_t33__,Inv_GF256___1_t35__);
  Inv_GF256___1_t37__ = AND(Inv_GF256___1_t34__,Inv_GF256___1_t36__);
  Inv_GF256___1_t38__ = XOR(Inv_GF256___1_t31__,Inv_GF256___1_t37__);
  Inv_GF256___1_t39__ = XOR(Inv_GF256___1_t32__,Inv_GF256___1_t33__);
  Inv_GF256___1_t40__ = XOR(Inv_GF256___1_t31__,Inv_GF256___1_t35__);
  Inv_GF256___1_t41__ = AND(Inv_GF256___1_t40__,Inv_GF256___1_t39__);
  Inv_GF256___1_t42__ = XOR(Inv_GF256___1_t33__,Inv_GF256___1_t41__);
  Inv_GF256___1_t43__ = XOR(Inv_GF256___1_t42__,Inv_GF256___1_t32__);
  Inv_GF256___1_t44__ = XOR(Inv_GF256___1_t36__,Inv_GF256___1_t42__);
  Inv_GF256___1_t45__ = AND(Inv_GF256___1_t33__,Inv_GF256___1_t44__);
  Inv_GF256___1_t46__ = XOR(Inv_GF256___1_t45__,Inv_GF256___1_t43__);
  Inv_GF256___1_t47__ = XOR(Inv_GF256___1_t45__,Inv_GF256___1_t36__);
  Inv_GF256___1_t48__ = AND(Inv_GF256___1_t38__,Inv_GF256___1_t47__);
  Inv_GF256___1_t49__ = XOR(Inv_GF256___1_t34__,Inv_GF256___1_t48__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t0__ = XOR(Inv_GF256___1_t38__,Inv_GF256___1_t49__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t1__ = AND(InBasisChange___1_t5__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t0__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t3__ = AND(Inv_GF256___1_t49__,Inv_GF256___1_t17__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t4__ = AND(InBasisChange___1_t2__,Inv_GF256___1_t38__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t5__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t4__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t3__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t6__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t1__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t4__);
  Inv_GF256___1_Mul_GF16_2___1_t4__ = XOR(Inv_GF256___1_t42__,Inv_GF256___1_t38__);
  Inv_GF256___1_Mul_GF16_2___1_t5__ = XOR(Inv_GF256___1_t46__,Inv_GF256___1_t49__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t0__ = XOR(Inv_GF256___1_Mul_GF16_2___1_t4__,Inv_GF256___1_Mul_GF16_2___1_t5__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t1__ = AND(Inv_GF256___1_t4__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t0__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t3__ = AND(Inv_GF256___1_Mul_GF16_2___1_t5__,Inv_GF256___1_t10__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t4__ = AND(Inv_GF256___1_Mul_GF16_2___1_t4__,Inv_GF256___1_t2__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t5__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t3__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t4__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t6__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t1__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t3__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t0__ = XOR(Inv_GF256___1_t42__,Inv_GF256___1_t46__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t1__ = AND(b0__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t0__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t3__ = AND(Inv_GF256___1_t46__,Inv_GF256___1_t12__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t4__ = AND(InBasisChange___1_t10__,Inv_GF256___1_t42__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t5__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t4__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t3__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t6__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t1__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t4__);
  Inv_GF256___1_Mul_GF16_2___1_t10__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t6__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t5__);
  Inv_GF256___1_Mul_GF16_2___1_t11__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t5__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t6__);
  Inv_GF256___1_Mul_GF16_2___1_t12__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t5__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t6__);
  Inv_GF256___1_Mul_GF16_2___1_t13__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___1_t6__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t5__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t1__ = AND(Inv_GF256___1_t0__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___1_t0__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t3__ = AND(Inv_GF256___1_Mul_GF16_2___1_t5__,Inv_GF256___1_t5__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t4__ = AND(Inv_GF256___1_Mul_GF16_2___1_t4__,Inv_GF256___1_t1__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t5__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t3__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t4__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t6__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t1__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t3__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t1__ = AND(InBasisChange___1_t9__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___2_t0__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t3__ = AND(Inv_GF256___1_t46__,Inv_GF256___1_t3__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t4__ = AND(InBasisChange___1_t11__,Inv_GF256___1_t42__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t5__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t4__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t3__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t6__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t1__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t4__);
  Inv_GF256___1_Mul_GF16_2___1_t20__ = XOR(Inv_GF256___1_t42__,Inv_GF256___1_Mul_GF16_2___1_t4__);
  Inv_GF256___1_Mul_GF16_2___1_t21__ = XOR(Inv_GF256___1_t46__,Inv_GF256___1_Mul_GF16_2___1_t5__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t0__ = XOR(Inv_GF256___1_Mul_GF16_2___1_t20__,Inv_GF256___1_Mul_GF16_2___1_t21__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t1__ = AND(InBasisChange___1_t7__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t0__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t3__ = AND(Inv_GF256___1_Mul_GF16_2___1_t21__,Inv_GF256___1_t16__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t4__ = AND(InBasisChange___1_t12__,Inv_GF256___1_Mul_GF16_2___1_t20__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t5__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t4__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t3__);
  Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t6__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t1__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t4__);
  Inv_GF256___1_Mul_GF16_2___1_t24__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t6__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t5__);
  Inv_GF256___1_Mul_GF16_2___1_t25__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t6__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t5__);
  Inv_GF256___1_Mul_GF16_2___1_t26__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t5__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___4_t6__);
  Inv_GF256___1_Mul_GF16_2___1_t27__ = XOR(Inv_GF256___1_Mul_GF16_2___1_Mul_GF4_N___2_t5__,Inv_GF256___1_Mul_GF16_2___1_Mul_GF4___3_t6__);
  OutBasisChange___1_t0__ = XOR(Inv_GF256___1_Mul_GF16_2___1_t24__,Inv_GF256___1_Mul_GF16_2___1_t10__);
  OutBasisChange___1_t1__ = XOR(Inv_GF256___1_Mul_GF16_2___1_t26__,Inv_GF256___1_Mul_GF16_2___1_t11__);
  OutBasisChange___1_t2__ = XOR(Inv_GF256___1_Mul_GF16_2___1_t25__,OutBasisChange___1_t0__);
  OutBasisChange___1_t3__ = XOR(Inv_GF256___1_Mul_GF16_2___1_t11__,Inv_GF256___1_Mul_GF16_2___1_t10__);
  OutBasisChange___1_t4__ = XOR(Inv_GF256___1_Mul_GF16_2___1_t10__,OutBasisChange___1_t1__);
  OutBasisChange___1_t5__ = XOR(Inv_GF256___1_Mul_GF16_2___1_t13__,OutBasisChange___1_t1__);
  OutBasisChange___1_t6__ = XOR(Inv_GF256___1_Mul_GF16_2___1_t13__,Inv_GF256___1_Mul_GF16_2___1_t27__);
  OutBasisChange___1_t7__ = XOR(Inv_GF256___1_Mul_GF16_2___1_t27__,Inv_GF256___1_Mul_GF16_2___1_t12__);
  OutBasisChange___1_t8__ = XOR(OutBasisChange___1_t2__,OutBasisChange___1_t6__);
  OutBasisChange___1_t9__ = XOR(Inv_GF256___1_Mul_GF16_2___1_t12__,OutBasisChange___1_t6__);
  OutBasisChange___1_t10__ = XOR(OutBasisChange___1_t3__,OutBasisChange___1_t9__);
  *o0__ = OutBasisChange___1_t4__;
  *o1__ = OutBasisChange___1_t5__;
  *o2__ = OutBasisChange___1_t8__;
  *o3__ = OutBasisChange___1_t10__;
  *o4__ = OutBasisChange___1_t9__;
  *o5__ = OutBasisChange___1_t0__;
  *o6__ = OutBasisChange___1_t7__;
  *o7__ = OutBasisChange___1_t6__;

}

void ShiftRows__ (/*inputs*/ DATATYPE inputSR__0__,DATATYPE inputSR__1__,DATATYPE inputSR__2__,DATATYPE inputSR__3__,DATATYPE inputSR__4__,DATATYPE inputSR__5__,DATATYPE inputSR__6__,DATATYPE inputSR__7__, /*outputs*/ DATATYPE* out__0__,DATATYPE* out__1__,DATATYPE* out__2__,DATATYPE* out__3__,DATATYPE* out__4__,DATATYPE* out__5__,DATATYPE* out__6__,DATATYPE* out__7__) {
  
  // Variables declaration


  // Instructions (body)
  *out__0__ = PERMUT_16(inputSR__0__,0,5,10,15,4,9,14,3,8,13,2,7,12,1,6,11);
  *out__1__ = PERMUT_16(inputSR__1__,0,5,10,15,4,9,14,3,8,13,2,7,12,1,6,11);
  *out__2__ = PERMUT_16(inputSR__2__,0,5,10,15,4,9,14,3,8,13,2,7,12,1,6,11);
  *out__3__ = PERMUT_16(inputSR__3__,0,5,10,15,4,9,14,3,8,13,2,7,12,1,6,11);
  *out__4__ = PERMUT_16(inputSR__4__,0,5,10,15,4,9,14,3,8,13,2,7,12,1,6,11);
  *out__5__ = PERMUT_16(inputSR__5__,0,5,10,15,4,9,14,3,8,13,2,7,12,1,6,11);
  *out__6__ = PERMUT_16(inputSR__6__,0,5,10,15,4,9,14,3,8,13,2,7,12,1,6,11);
  *out__7__ = PERMUT_16(inputSR__7__,0,5,10,15,4,9,14,3,8,13,2,7,12,1,6,11);

}

void MixColumn__ (/*inputs*/ DATATYPE a__0__,DATATYPE a__1__,DATATYPE a__2__,DATATYPE a__3__,DATATYPE a__4__,DATATYPE a__5__,DATATYPE a__6__,DATATYPE a__7__, /*outputs*/ DATATYPE* b__0__,DATATYPE* b__1__,DATATYPE* b__2__,DATATYPE* b__3__,DATATYPE* b__4__,DATATYPE* b__5__,DATATYPE* b__6__,DATATYPE* b__7__) {
  
  // Variables declaration
  DATATYPE _tmp14_;
  DATATYPE _tmp15_;
  DATATYPE _tmp16_;
  DATATYPE _tmp18_;
  DATATYPE _tmp19_;
  DATATYPE _tmp22_;
  DATATYPE _tmp23_;
  DATATYPE _tmp25_;
  DATATYPE _tmp26_;
  DATATYPE _tmp31_;
  DATATYPE _tmp32_;
  DATATYPE _tmp33_;
  DATATYPE _tmp35_;
  DATATYPE _tmp36_;
  DATATYPE _tmp3_;
  DATATYPE _tmp41_;
  DATATYPE _tmp42_;
  DATATYPE _tmp43_;
  DATATYPE _tmp45_;
  DATATYPE _tmp46_;
  DATATYPE _tmp49_;
  DATATYPE _tmp4_;
  DATATYPE _tmp50_;
  DATATYPE _tmp52_;
  DATATYPE _tmp53_;
  DATATYPE _tmp56_;
  DATATYPE _tmp57_;
  DATATYPE _tmp59_;
  DATATYPE _tmp5_;
  DATATYPE _tmp60_;
  DATATYPE _tmp64_;
  DATATYPE _tmp67_;
  DATATYPE _tmp6_;
  DATATYPE _tmp8_;
  DATATYPE _tmp9_;


  // Instructions (body)
  _tmp3_ = PERMUT_16(a__0__,1,2,3,0,5,6,7,4,9,10,11,8,13,14,15,12);
  _tmp4_ = XOR(a__0__,_tmp3_);
  _tmp5_ = PERMUT_16(a__7__,1,2,3,0,5,6,7,4,9,10,11,8,13,14,15,12);
  _tmp6_ = XOR(_tmp4_,_tmp5_);
  _tmp8_ = XOR(a__7__,_tmp5_);
  _tmp9_ = PERMUT_16(_tmp8_,2,3,0,1,6,7,4,5,10,11,8,9,14,15,12,13);
  *b__7__ = XOR(_tmp6_,_tmp9_);
  _tmp14_ = XOR(_tmp8_,_tmp4_);
  _tmp15_ = PERMUT_16(a__6__,1,2,3,0,5,6,7,4,9,10,11,8,13,14,15,12);
  _tmp16_ = XOR(_tmp14_,_tmp15_);
  _tmp18_ = XOR(a__6__,_tmp15_);
  _tmp19_ = PERMUT_16(_tmp18_,2,3,0,1,6,7,4,5,10,11,8,9,14,15,12,13);
  *b__6__ = XOR(_tmp16_,_tmp19_);
  _tmp22_ = PERMUT_16(a__5__,1,2,3,0,5,6,7,4,9,10,11,8,13,14,15,12);
  _tmp23_ = XOR(_tmp18_,_tmp22_);
  _tmp25_ = XOR(a__5__,_tmp22_);
  _tmp26_ = PERMUT_16(_tmp25_,2,3,0,1,6,7,4,5,10,11,8,9,14,15,12,13);
  *b__5__ = XOR(_tmp23_,_tmp26_);
  _tmp31_ = XOR(_tmp25_,_tmp4_);
  _tmp32_ = PERMUT_16(a__4__,1,2,3,0,5,6,7,4,9,10,11,8,13,14,15,12);
  _tmp33_ = XOR(_tmp31_,_tmp32_);
  _tmp35_ = XOR(a__4__,_tmp32_);
  _tmp36_ = PERMUT_16(_tmp35_,2,3,0,1,6,7,4,5,10,11,8,9,14,15,12,13);
  *b__4__ = XOR(_tmp33_,_tmp36_);
  _tmp41_ = XOR(_tmp35_,_tmp4_);
  _tmp42_ = PERMUT_16(a__3__,1,2,3,0,5,6,7,4,9,10,11,8,13,14,15,12);
  _tmp43_ = XOR(_tmp41_,_tmp42_);
  _tmp45_ = XOR(a__3__,_tmp42_);
  _tmp46_ = PERMUT_16(_tmp45_,2,3,0,1,6,7,4,5,10,11,8,9,14,15,12,13);
  *b__3__ = XOR(_tmp43_,_tmp46_);
  _tmp49_ = PERMUT_16(a__2__,1,2,3,0,5,6,7,4,9,10,11,8,13,14,15,12);
  _tmp50_ = XOR(_tmp45_,_tmp49_);
  _tmp52_ = XOR(a__2__,_tmp49_);
  _tmp53_ = PERMUT_16(_tmp52_,2,3,0,1,6,7,4,5,10,11,8,9,14,15,12,13);
  *b__2__ = XOR(_tmp50_,_tmp53_);
  _tmp56_ = PERMUT_16(a__1__,1,2,3,0,5,6,7,4,9,10,11,8,13,14,15,12);
  _tmp57_ = XOR(_tmp52_,_tmp56_);
  _tmp59_ = XOR(a__1__,_tmp56_);
  _tmp60_ = PERMUT_16(_tmp59_,2,3,0,1,6,7,4,5,10,11,8,9,14,15,12,13);
  *b__1__ = XOR(_tmp57_,_tmp60_);
  _tmp64_ = XOR(_tmp59_,_tmp3_);
  _tmp67_ = PERMUT_16(_tmp4_,2,3,0,1,6,7,4,5,10,11,8,9,14,15,12,13);
  *b__0__ = XOR(_tmp64_,_tmp67_);

}

/* main function */
void AES__ (/*inputs*/ DATATYPE plain__0__,DATATYPE plain__1__,DATATYPE plain__2__,DATATYPE plain__3__,DATATYPE plain__4__,DATATYPE plain__5__,DATATYPE plain__6__,DATATYPE plain__7__, /*outputs*/ DATATYPE* cipher__0__,DATATYPE* cipher__1__,DATATYPE* cipher__2__,DATATYPE* cipher__3__,DATATYPE* cipher__4__,DATATYPE* cipher__5__,DATATYPE* cipher__6__,DATATYPE* cipher__7__) {
  
  // Variables declaration
  DATATYPE _tmp68_0__;
  DATATYPE _tmp68_1__;
  DATATYPE _tmp68_2__;
  DATATYPE _tmp68_3__;
  DATATYPE _tmp68_4__;
  DATATYPE _tmp68_5__;
  DATATYPE _tmp68_6__;
  DATATYPE _tmp68_7__;
  DATATYPE _tmp69_0__;
  DATATYPE _tmp69_1__;
  DATATYPE _tmp69_2__;
  DATATYPE _tmp69_3__;
  DATATYPE _tmp69_4__;
  DATATYPE _tmp69_5__;
  DATATYPE _tmp69_6__;
  DATATYPE _tmp69_7__;


  // Instructions (body)
  SubBytes__(plain__0__,plain__1__,plain__2__,plain__3__,plain__4__,plain__5__,plain__6__,plain__7__,&_tmp68_0__,&_tmp68_1__,&_tmp68_2__,&_tmp68_3__,&_tmp68_4__,&_tmp68_5__,&_tmp68_6__,&_tmp68_7__);
  ShiftRows__(_tmp68_0__,_tmp68_1__,_tmp68_2__,_tmp68_3__,_tmp68_4__,_tmp68_5__,_tmp68_6__,_tmp68_7__,&_tmp69_0__,&_tmp69_1__,&_tmp69_2__,&_tmp69_3__,&_tmp69_4__,&_tmp69_5__,&_tmp69_6__,&_tmp69_7__);
  MixColumn__(_tmp69_0__,_tmp69_1__,_tmp69_2__,_tmp69_3__,_tmp69_4__,_tmp69_5__,_tmp69_6__,_tmp69_7__,&*cipher__0__,&*cipher__1__,&*cipher__2__,&*cipher__3__,&*cipher__4__,&*cipher__5__,&*cipher__6__,&*cipher__7__);

}

#define usuba(v0,v1,v2,v3,v4,v5,v6,v7)                              \
  AES__(v0,v1,v2,v3,v4,v5,v6,v7,&v0,&v1,&v2,&v3,&v4,&v5,&v6,&v7)



/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 node InBasisChange(b0 :  u1x1 :: base,b1 :  u1x1 :: base,b2 :  u1x1 :: base,b3 :  u1x1 :: base,b4 :  u1x1 :: base,b5 :  u1x1 :: base,b6 :  u1x1 :: base,b7 :  u1x1 :: base)
  returns o0 :  u1x1 :: base,o1 :  u1x1 :: base,o2 :  u1x1 :: base,o3 :  u1x1 :: base,o4 :  u1x1 :: base,o5 :  u1x1 :: base,o6 :  u1x1 :: base,o7 :  u1x1 :: base
vars
  t0 :  u1x1 :: base,
  t1 :  u1x1 :: base,
  t2 :  u1x1 :: base,
  t3 :  u1x1 :: base,
  t4 :  u1x1 :: base,
  t5 :  u1x1 :: base,
  t6 :  u1x1 :: base,
  t7 :  u1x1 :: base,
  t8 :  u1x1 :: base,
  t9 :  u1x1 :: base,
  t10 :  u1x1 :: base,
  t11 :  u1x1 :: base,
  t12 :  u1x1 :: base
let
  (t0) = (b6 ^ b5);
  (t1) = (b1 ^ b2);
  (t2) = (b0 ^ t0);
  (t3) = (t1 ^ b6);
  (t4) = (b0 ^ b3);
  (t5) = (t4 ^ t3);
  (t6) = (b7 ^ t4);
  (t7) = (t2 ^ b7);
  (t8) = (b4 ^ t6);
  (t9) = (t2 ^ b4);
  (t10) = (b1 ^ t8);
  (t11) = (t7 ^ t1);
  (t12) = (t2 ^ b1);
  (o0,o1,o2,o3,o4,o5,o6,o7) = (t5,t2,b0,t10,t7,t12,t9,t11)
tel

 node OutBasisChange(b7 :  u1x1 :: base,b1 :  u1x1 :: base,b4 :  u1x1 :: base,b2 :  u1x1 :: base,b6 :  u1x1 :: base,b5 :  u1x1 :: base,b0 :  u1x1 :: base,b3 :  u1x1 :: base)
  returns o0 :  u1x1 :: base,o1 :  u1x1 :: base,o2 :  u1x1 :: base,o3 :  u1x1 :: base,o4 :  u1x1 :: base,o5 :  u1x1 :: base,o6 :  u1x1 :: base,o7 :  u1x1 :: base
vars
  t0 :  u1x1 :: base,
  t1 :  u1x1 :: base,
  t2 :  u1x1 :: base,
  t3 :  u1x1 :: base,
  t4 :  u1x1 :: base,
  t5 :  u1x1 :: base,
  t6 :  u1x1 :: base,
  t7 :  u1x1 :: base,
  t8 :  u1x1 :: base,
  t9 :  u1x1 :: base,
  t10 :  u1x1 :: base
let
  (t0) = (b7 ^ b0);
  (t1) = (b1 ^ b6);
  (t2) = (b4 ^ t0);
  (t3) = (b6 ^ b0);
  (t4) = (b0 ^ t1);
  (t5) = (b5 ^ t1);
  (t6) = (b5 ^ b2);
  (t7) = (b2 ^ b3);
  (t8) = (t2 ^ t6);
  (t9) = (b3 ^ t6);
  (t10) = (t3 ^ t9);
  (o0,o1,o2,o3,o4,o5,o6,o7) = (t4,t5,t8,t10,t9,t0,t7,t6)
tel

 node Mul_GF4_N(x0 :  u1x1 :: base,x1 :  u1x1 :: base,y0 :  u1x1 :: base,y1 :  u1x1 :: base)
  returns o0 :  u1x1 :: base,o1 :  u1x1 :: base
vars
  t0 :  u1x1 :: base,
  t1 :  u1x1 :: base,
  t2 :  u1x1 :: base,
  t3 :  u1x1 :: base,
  t4 :  u1x1 :: base,
  t5 :  u1x1 :: base,
  t6 :  u1x1 :: base
let
  (t0) = (y0 ^ y1);
  (t1) = (x0 & t0);
  (t2) = (x1 ^ x0);
  (t3) = (y1 & t2);
  (t4) = (y0 & x1);
  (t5) = (t3 ^ t4);
  (t6) = (t1 ^ t3);
  (o0,o1) = (t6,t5)
tel

 node Mul_GF4(i0 :  u1x1 :: base,i1 :  u1x1 :: base,y0 :  u1x1 :: base,y1 :  u1x1 :: base)
  returns o0 :  u1x1 :: base,o1 :  u1x1 :: base
vars
  t0 :  u1x1 :: base,
  t1 :  u1x1 :: base,
  t2 :  u1x1 :: base,
  t3 :  u1x1 :: base,
  t4 :  u1x1 :: base,
  t5 :  u1x1 :: base,
  t6 :  u1x1 :: base
let
  (t0) = (y0 ^ y1);
  (t1) = (i0 & t0);
  (t2) = (i0 ^ i1);
  (t3) = (y1 & t2);
  (t4) = (i1 & y0);
  (t5) = (t4 ^ t3);
  (t6) = (t1 ^ t4);
  (o0,o1) = (t5,t6)
tel

 node Mul_GF16_2(x0 :  u1x1 :: base,x1 :  u1x1 :: base,x2 :  u1x1 :: base,x3 :  u1x1 :: base,x4 :  u1x1 :: base,x5 :  u1x1 :: base,x6 :  u1x1 :: base,x7 :  u1x1 :: base,y0 :  u1x1 :: base,y1 :  u1x1 :: base,y2 :  u1x1 :: base,y3 :  u1x1 :: base)
  returns o0 :  u1x1 :: base,o1 :  u1x1 :: base,o2 :  u1x1 :: base,o3 :  u1x1 :: base,o4 :  u1x1 :: base,o5 :  u1x1 :: base,o6 :  u1x1 :: base,o7 :  u1x1 :: base
vars
  t0 :  u1x1 :: base,
  t1 :  u1x1 :: base,
  t2 :  u1x1 :: base,
  t3 :  u1x1 :: base,
  t4 :  u1x1 :: base,
  t5 :  u1x1 :: base,
  t6 :  u1x1 :: base,
  t7 :  u1x1 :: base,
  t8 :  u1x1 :: base,
  t9 :  u1x1 :: base,
  t10 :  u1x1 :: base,
  t11 :  u1x1 :: base,
  t12 :  u1x1 :: base,
  t13 :  u1x1 :: base,
  t14 :  u1x1 :: base,
  t15 :  u1x1 :: base,
  t16 :  u1x1 :: base,
  t17 :  u1x1 :: base,
  t18 :  u1x1 :: base,
  t19 :  u1x1 :: base,
  t20 :  u1x1 :: base,
  t21 :  u1x1 :: base,
  t22 :  u1x1 :: base,
  t23 :  u1x1 :: base,
  t24 :  u1x1 :: base,
  t25 :  u1x1 :: base,
  t26 :  u1x1 :: base,
  t27 :  u1x1 :: base
let
  (t0,t1) = Mul_GF4(x0,x1,y0,y1);
  (t2) = (x2 ^ x0);
  (t3) = (x3 ^ x1);
  (t4) = (y2 ^ y0);
  (t5) = (y3 ^ y1);
  (t6,t7) = Mul_GF4_N(t2,t3,t4,t5);
  (t8,t9) = Mul_GF4(x2,x3,y2,y3);
  (t10) = (t6 ^ t8);
  (t11) = (t0 ^ t6);
  (t12) = (t7 ^ t9);
  (t13) = (t1 ^ t7);
  (t14) = (x4 ^ x6);
  (t15) = (x5 ^ x7);
  (t16,t17) = Mul_GF4_N(t14,t15,t4,t5);
  (t18,t19) = Mul_GF4(x6,x7,y2,y3);
  (t20) = (y2 ^ t4);
  (t21) = (y3 ^ t5);
  (t22,t23) = Mul_GF4(x4,x5,t20,t21);
  (t24) = (t16 ^ t22);
  (t25) = (t16 ^ t18);
  (t26) = (t17 ^ t23);
  (t27) = (t17 ^ t19);
  (o0,o1,o2,o3,o4,o5,o6,o7) = (t24,t26,t25,t27,t11,t13,t10,t12)
tel

 node Inv_GF256(x0 :  u1x1 :: base,x1 :  u1x1 :: base,x2 :  u1x1 :: base,x3 :  u1x1 :: base,x4 :  u1x1 :: base,x5 :  u1x1 :: base,x6 :  u1x1 :: base,x7 :  u1x1 :: base)
  returns o0 :  u1x1 :: base,o1 :  u1x1 :: base,o2 :  u1x1 :: base,o3 :  u1x1 :: base,o4 :  u1x1 :: base,o5 :  u1x1 :: base,o6 :  u1x1 :: base,o7 :  u1x1 :: base
vars
  t0 :  u1x1 :: base,
  t1 :  u1x1 :: base,
  t2 :  u1x1 :: base,
  t3 :  u1x1 :: base,
  t4 :  u1x1 :: base,
  t5 :  u1x1 :: base,
  t6 :  u1x1 :: base,
  t7 :  u1x1 :: base,
  t8 :  u1x1 :: base,
  t9 :  u1x1 :: base,
  t10 :  u1x1 :: base,
  t11 :  u1x1 :: base,
  t12 :  u1x1 :: base,
  t13 :  u1x1 :: base,
  t14 :  u1x1 :: base,
  t15 :  u1x1 :: base,
  t16 :  u1x1 :: base,
  t17 :  u1x1 :: base,
  t18 :  u1x1 :: base,
  t19 :  u1x1 :: base,
  t20 :  u1x1 :: base,
  t21 :  u1x1 :: base,
  t22 :  u1x1 :: base,
  t23 :  u1x1 :: base,
  t24 :  u1x1 :: base,
  t25 :  u1x1 :: base,
  t26 :  u1x1 :: base,
  t27 :  u1x1 :: base,
  t28 :  u1x1 :: base,
  t29 :  u1x1 :: base,
  t30 :  u1x1 :: base,
  t31 :  u1x1 :: base,
  t32 :  u1x1 :: base,
  t33 :  u1x1 :: base,
  t34 :  u1x1 :: base,
  t35 :  u1x1 :: base,
  t36 :  u1x1 :: base,
  t37 :  u1x1 :: base,
  t38 :  u1x1 :: base,
  t39 :  u1x1 :: base,
  t40 :  u1x1 :: base,
  t41 :  u1x1 :: base,
  t42 :  u1x1 :: base,
  t43 :  u1x1 :: base,
  t44 :  u1x1 :: base,
  t45 :  u1x1 :: base,
  t46 :  u1x1 :: base,
  t47 :  u1x1 :: base,
  t48 :  u1x1 :: base,
  t49 :  u1x1 :: base
let
  (t0) = (x4 ^ x6);
  (t1) = (x5 ^ x7);
  (t2) = (x1 ^ x3);
  (t3) = (x7 ^ x6);
  (t4) = (x0 ^ x2);
  (t5) = (t0 ^ t1);
  (t6) = (t1 & t2);
  (t7) = (t2 | t1);
  (t8) = (t0 & t4);
  (t9) = (t4 | t0);
  (t10) = (t2 ^ t4);
  (t11) = (t10 & t5);
  (t12) = (x3 ^ x2);
  (t13) = (t12 & t3);
  (t14) = (t13 ^ t9);
  (t15) = (t13 ^ t7);
  (t16) = (x4 ^ x5);
  (t17) = (x1 ^ x0);
  (t18) = (t16 | t17);
  (t19) = (t17 & t16);
  (t20) = (t19 ^ t6);
  (t21) = (t11 ^ t14);
  (t22) = (t8 ^ t15);
  (t23) = (t11 ^ t18);
  (t24) = (t8 ^ t20);
  (t25) = (t8 ^ t23);
  (t26) = (x7 & x3);
  (t27) = (x6 & x2);
  (t28) = (x5 & x1);
  (t29) = (x4 | x0);
  (t30) = (t26 ^ t21);
  (t31) = (t27 ^ t22);
  (t32) = (t28 ^ t25);
  (t33) = (t29 ^ t24);
  (t34) = (t30 ^ t31);
  (t35) = (t32 & t30);
  (t36) = (t33 ^ t35);
  (t37) = (t34 & t36);
  (t38) = (t31 ^ t37);
  (t39) = (t32 ^ t33);
  (t40) = (t31 ^ t35);
  (t41) = (t40 & t39);
  (t42) = (t33 ^ t41);
  (t43) = (t42 ^ t32);
  (t44) = (t36 ^ t42);
  (t45) = (t33 & t44);
  (t46) = (t45 ^ t43);
  (t47) = (t45 ^ t36);
  (t48) = (t38 & t47);
  (t49) = (t34 ^ t48);
  (o0,o1,o2,o3,o4,o5,o6,o7) = Mul_GF16_2(x0,x1,x2,x3,x4,x5,x6,x7,t38,t49,t42,t46)
tel

_no_inline node SubBytes(b7 :  u1x1 :: base,b6 :  u1x1 :: base,b5 :  u1x1 :: base,b4 :  u1x1 :: base,b3 :  u1x1 :: base,b2 :  u1x1 :: base,b1 :  u1x1 :: base,b0 :  u1x1 :: base)
  returns o7 :  u1x1 :: base,o6 :  u1x1 :: base,o5 :  u1x1 :: base,o4 :  u1x1 :: base,o3 :  u1x1 :: base,o2 :  u1x1 :: base,o1 :  u1x1 :: base,o0 :  u1x1 :: base
vars

let
  (o0,o1,o2,o3,o4,o5,o6,o7) = OutBasisChange(Inv_GF256(InBasisChange(b0,b1,b2,b3,b4,b5,b6,b7)))
tel

_no_inline node ShiftRows(inputSR :  u16x8 :: base)
  returns out :  u16x8 :: base
vars

let
   forall i in [0,7] {
    (out[i]) = Shuffle(inputSR[i],[0,5,10,15,4,9,14,3,8,13,2,7,12,1,6,11])
  }
tel

 node RL32(input :  u16x1 :: base)
  returns out :  u16x1 :: base
vars

let
  (out) = Shuffle(input,[1,2,3,0,5,6,7,4,9,10,11,8,13,14,15,12])
tel

 node RL64(input :  u16x1 :: base)
  returns out :  u16x1 :: base
vars

let
  (out) = Shuffle(input,[2,3,0,1,6,7,4,5,10,11,8,9,14,15,12,13])
tel

_no_inline node MixColumn(a :  u16x8 :: base)
  returns b :  u16x8 :: base
vars

let
  (b[(7 - 0)]) = (((a[(7 - 7)] ^ RL32(a[(7 - 7)])) ^ RL32(a[(7 - 0)])) ^ RL64((a[(7 - 0)] ^ RL32(a[(7 - 0)]))));
  (b[(7 - 1)]) = ((((a[(7 - 0)] ^ RL32(a[(7 - 0)])) ^ (a[(7 - 7)] ^ RL32(a[(7 - 7)]))) ^ RL32(a[(7 - 1)])) ^ RL64((a[(7 - 1)] ^ RL32(a[(7 - 1)]))));
  (b[(7 - 2)]) = (((a[(7 - 1)] ^ RL32(a[(7 - 1)])) ^ RL32(a[(7 - 2)])) ^ RL64((a[(7 - 2)] ^ RL32(a[(7 - 2)]))));
  (b[(7 - 3)]) = ((((a[(7 - 2)] ^ RL32(a[(7 - 2)])) ^ (a[(7 - 7)] ^ RL32(a[(7 - 7)]))) ^ RL32(a[(7 - 3)])) ^ RL64((a[(7 - 3)] ^ RL32(a[(7 - 3)]))));
  (b[(7 - 4)]) = ((((a[(7 - 3)] ^ RL32(a[(7 - 3)])) ^ (a[(7 - 7)] ^ RL32(a[(7 - 7)]))) ^ RL32(a[(7 - 4)])) ^ RL64((a[(7 - 4)] ^ RL32(a[(7 - 4)]))));
  (b[(7 - 5)]) = (((a[(7 - 4)] ^ RL32(a[(7 - 4)])) ^ RL32(a[(7 - 5)])) ^ RL64((a[(7 - 5)] ^ RL32(a[(7 - 5)]))));
  (b[(7 - 6)]) = (((a[(7 - 5)] ^ RL32(a[(7 - 5)])) ^ RL32(a[(7 - 6)])) ^ RL64((a[(7 - 6)] ^ RL32(a[(7 - 6)]))));
  (b[(7 - 7)]) = (((a[(7 - 6)] ^ RL32(a[(7 - 6)])) ^ RL32(a[(7 - 7)])) ^ RL64((a[(7 - 7)] ^ RL32(a[(7 - 7)]))))
tel

 node AES(plain :  u16x8 :: base)
  returns cipher :  u16x8 :: base
vars

let
  (cipher) = MixColumn(ShiftRows(SubBytes(plain)))
tel

*/
 
