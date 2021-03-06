/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba.
   From the file "data/sboxes/aes.ua" (included below). */

#include <stdint.h>

/* Do NOT change the order of those define/include */

#ifndef BITS_PER_REG
#define BITS_PER_REG 64
#endif
/* including the architecture specific .h */
#include "FAME.h"

/* auxiliary functions */


/* main function */
void sbox__ (/*inputs*/ DATATYPE U0__,DATATYPE U1__,DATATYPE U2__,DATATYPE U3__,DATATYPE U4__,DATATYPE U5__,DATATYPE U6__,DATATYPE U7__, /*outputs*/ DATATYPE* S0__,DATATYPE* S1__,DATATYPE* S2__,DATATYPE* S3__,DATATYPE* S4__,DATATYPE* S5__,DATATYPE* S6__,DATATYPE* S7__) {

  // Variables declaration
  DATATYPE _tmp1_;
  DATATYPE _tmp2_;
  DATATYPE _tmp3_;
  DATATYPE _tmp4_;
  DATATYPE t0__;
  DATATYPE t1__;
  DATATYPE t10__;
  DATATYPE t11__;
  DATATYPE t12__;
  DATATYPE t13__;
  DATATYPE t14__;
  DATATYPE t15__;
  DATATYPE t16__;
  DATATYPE t17__;
  DATATYPE t18__;
  DATATYPE t19__;
  DATATYPE t2__;
  DATATYPE t20__;
  DATATYPE t21__;
  DATATYPE t22__;
  DATATYPE t23__;
  DATATYPE t24__;
  DATATYPE t25__;
  DATATYPE t26__;
  DATATYPE t27__;
  DATATYPE t28__;
  DATATYPE t29__;
  DATATYPE t3__;
  DATATYPE t30__;
  DATATYPE t31__;
  DATATYPE t32__;
  DATATYPE t33__;
  DATATYPE t34__;
  DATATYPE t35__;
  DATATYPE t36__;
  DATATYPE t37__;
  DATATYPE t38__;
  DATATYPE t39__;
  DATATYPE t4__;
  DATATYPE t40__;
  DATATYPE t41__;
  DATATYPE t42__;
  DATATYPE t43__;
  DATATYPE t44__;
  DATATYPE t45__;
  DATATYPE t5__;
  DATATYPE t6__;
  DATATYPE t7__;
  DATATYPE t8__;
  DATATYPE t9__;
  DATATYPE tc1__;
  DATATYPE tc10__;
  DATATYPE tc11__;
  DATATYPE tc12__;
  DATATYPE tc13__;
  DATATYPE tc14__;
  DATATYPE tc16__;
  DATATYPE tc17__;
  DATATYPE tc18__;
  DATATYPE tc2__;
  DATATYPE tc20__;
  DATATYPE tc21__;
  DATATYPE tc26__;
  DATATYPE tc3__;
  DATATYPE tc4__;
  DATATYPE tc5__;
  DATATYPE tc6__;
  DATATYPE tc7__;
  DATATYPE tc8__;
  DATATYPE tc9__;
  DATATYPE y1__;
  DATATYPE y10__;
  DATATYPE y11__;
  DATATYPE y12__;
  DATATYPE y13__;
  DATATYPE y14__;
  DATATYPE y15__;
  DATATYPE y16__;
  DATATYPE y17__;
  DATATYPE y18__;
  DATATYPE y19__;
  DATATYPE y2__;
  DATATYPE y20__;
  DATATYPE y21__;
  DATATYPE y3__;
  DATATYPE y4__;
  DATATYPE y5__;
  DATATYPE y6__;
  DATATYPE y7__;
  DATATYPE y8__;
  DATATYPE y9__;
  DATATYPE z0__;
  DATATYPE z1__;
  DATATYPE z10__;
  DATATYPE z11__;
  DATATYPE z12__;
  DATATYPE z13__;
  DATATYPE z14__;
  DATATYPE z15__;
  DATATYPE z16__;
  DATATYPE z17__;
  DATATYPE z2__;
  DATATYPE z3__;
  DATATYPE z4__;
  DATATYPE z5__;
  DATATYPE z6__;
  DATATYPE z7__;
  DATATYPE z8__;
  DATATYPE z9__;

  // Instructions (body)
  XOR(y14__,U3__,U5__);
  XOR(y13__,U0__,U6__);
  XOR(y9__,U0__,U3__);
  XOR(y8__,U0__,U5__);
  XOR(t0__,U1__,U2__);
  XOR(y12__,y13__,y14__);
  XOR(y1__,t0__,U7__);
  XOR(t1__,U4__,y12__);
  XOR(y4__,y1__,U3__);
  XOR(y2__,y1__,U0__);
  XOR(y5__,y1__,U6__);
  XOR(y15__,t1__,U5__);
  XOR(y20__,t1__,U1__);
  AND(t5__,y4__,U7__);
  XOR(y3__,y5__,y8__);
  AND(t8__,y5__,y1__);
  XOR(y6__,y15__,U7__);
  XOR(y10__,y15__,t0__);
  AND(t2__,y12__,y15__);
  XOR(y11__,y20__,y9__);
  AND(t3__,y3__,y6__);
  XOR(y19__,y10__,y8__);
  AND(t15__,y8__,y10__);
  XOR(t6__,t5__,t2__);
  XOR(y7__,U7__,y11__);
  XOR(y17__,y10__,y11__);
  XOR(y16__,t0__,y11__);
  AND(t12__,y9__,y11__);
  XOR(t4__,t3__,t2__);
  AND(t10__,y2__,y7__);
  AND(t13__,y14__,y17__);
  XOR(y21__,y13__,y16__);
  XOR(y18__,U0__,y16__);
  AND(t7__,y13__,y16__);
  XOR(t16__,t15__,t12__);
  XOR(t17__,t4__,y20__);
  XOR(t14__,t13__,t12__);
  XOR(t9__,t8__,t7__);
  XOR(t11__,t10__,t7__);
  XOR(t18__,t6__,t16__);
  XOR(t21__,t17__,t14__);
  XOR(t19__,t9__,t14__);
  XOR(t20__,t11__,t16__);
  XOR(t22__,t18__,y19__);
  XOR(t23__,t19__,y21__);
  XOR(t24__,t20__,y18__);
  XOR(t25__,t21__,t22__);
  AND(t26__,t21__,t23__);
  XOR(t30__,t23__,t24__);
  XOR(t27__,t24__,t26__);
  XOR(t31__,t22__,t26__);
  AND(t28__,t25__,t27__);
  AND(t32__,t31__,t30__);
  XOR(t29__,t28__,t22__);
  XOR(t33__,t32__,t24__);
  AND(z5__,t29__,y7__);
  AND(z14__,t29__,y2__);
  XOR(t34__,t23__,t33__);
  XOR(t35__,t27__,t33__);
  XOR(t42__,t29__,t33__);
  AND(z2__,t33__,U7__);
  AND(z11__,t33__,y4__);
  AND(t36__,t24__,t35__);
  AND(z6__,t42__,y11__);
  AND(z15__,t42__,y9__);
  XOR(t37__,t36__,t34__);
  XOR(t38__,t27__,t36__);
  XOR(t44__,t33__,t37__);
  AND(z1__,t37__,y6__);
  AND(z10__,t37__,y3__);
  AND(t39__,t29__,t38__);
  AND(z0__,t44__,y15__);
  AND(z9__,t44__,y12__);
  XOR(t40__,t25__,t39__);
  XOR(tc4__,z0__,z2__);
  XOR(tc5__,z1__,z0__);
  XOR(t41__,t40__,t37__);
  XOR(t43__,t29__,t40__);
  AND(z4__,t40__,y1__);
  AND(z13__,t40__,y5__);
  XOR(t45__,t42__,t41__);
  AND(z8__,t41__,y10__);
  AND(z17__,t41__,y8__);
  AND(z3__,t43__,y16__);
  AND(z12__,t43__,y13__);
  AND(z7__,t45__,y17__);
  AND(z16__,t45__,y14__);
  XOR(tc6__,z3__,z4__);
  XOR(tc12__,z3__,z5__);
  XOR(tc7__,z12__,tc4__);
  XOR(tc1__,z15__,z16__);
  XOR(tc8__,z7__,tc6__);
  XOR(tc11__,tc6__,tc5__);
  XOR(tc14__,tc4__,tc12__);
  XOR(tc9__,z8__,tc7__);
  XOR(tc2__,z10__,tc1__);
  XOR(tc13__,z13__,tc1__);
  XOR(tc16__,z6__,tc8__);
  XOR(tc10__,tc8__,tc9__);
  XOR(tc3__,z9__,tc2__);
  XOR(tc21__,tc2__,z11__);
  XOR(tc18__,tc13__,tc14__);
  XOR(tc20__,z15__,tc16__);
  XOR(tc17__,z14__,tc10__);
  XOR(*S3__,tc3__,tc11__);
  XOR(*S0__,tc3__,tc16__);
  XOR(_tmp1_,z12__,tc18__);
  XOR(_tmp2_,tc10__,tc18__);
  XOR(tc26__,tc17__,tc20__);
  XOR(*S5__,tc21__,tc17__);
  XOR(*S4__,tc14__,*S3__);
  XOR(_tmp3_,*S3__,tc16__);
  NOT(*S7__,_tmp1_);
  NOT(*S6__,_tmp2_);
  XOR(_tmp4_,tc26__,z17__);
  NOT(*S1__,_tmp3_);
  NOT(*S2__,_tmp4_);

}


/* **************************************************************** */
/*                            Usuba source                          */
/*                                                                  */
/*

 node sbox(U0 :  b1 :: base,U1 :  b1 :: base,U2 :  b1 :: base,U3 :  b1 :: base,U4 :  b1 :: base,U5 :  b1 :: base,U6 :  b1 :: base,U7 :  b1 :: base)
  returns S0 :  b1 :: base,S1 :  b1 :: base,S2 :  b1 :: base,S3 :  b1 :: base,S4 :  b1 :: base,S5 :  b1 :: base,S6 :  b1 :: base,S7 :  b1 :: base
vars
  y0 :  b1 :: base,
  y1 :  b1 :: base,
  y2 :  b1 :: base,
  y3 :  b1 :: base,
  y4 :  b1 :: base,
  y5 :  b1 :: base,
  y6 :  b1 :: base,
  y7 :  b1 :: base,
  y8 :  b1 :: base,
  y9 :  b1 :: base,
  y10 :  b1 :: base,
  y11 :  b1 :: base,
  y12 :  b1 :: base,
  y13 :  b1 :: base,
  y14 :  b1 :: base,
  y15 :  b1 :: base,
  y16 :  b1 :: base,
  y17 :  b1 :: base,
  y18 :  b1 :: base,
  y19 :  b1 :: base,
  y20 :  b1 :: base,
  y21 :  b1 :: base,
  t0 :  b1 :: base,
  t1 :  b1 :: base,
  t2 :  b1 :: base,
  t3 :  b1 :: base,
  t4 :  b1 :: base,
  t5 :  b1 :: base,
  t6 :  b1 :: base,
  t7 :  b1 :: base,
  t8 :  b1 :: base,
  t9 :  b1 :: base,
  t10 :  b1 :: base,
  t11 :  b1 :: base,
  t12 :  b1 :: base,
  t13 :  b1 :: base,
  t14 :  b1 :: base,
  t15 :  b1 :: base,
  t16 :  b1 :: base,
  t17 :  b1 :: base,
  t18 :  b1 :: base,
  t19 :  b1 :: base,
  t20 :  b1 :: base,
  t21 :  b1 :: base,
  t22 :  b1 :: base,
  t23 :  b1 :: base,
  t24 :  b1 :: base,
  t25 :  b1 :: base,
  t26 :  b1 :: base,
  t27 :  b1 :: base,
  t28 :  b1 :: base,
  t29 :  b1 :: base,
  t30 :  b1 :: base,
  t31 :  b1 :: base,
  t32 :  b1 :: base,
  t33 :  b1 :: base,
  t34 :  b1 :: base,
  t35 :  b1 :: base,
  t36 :  b1 :: base,
  t37 :  b1 :: base,
  t38 :  b1 :: base,
  t39 :  b1 :: base,
  t40 :  b1 :: base,
  t41 :  b1 :: base,
  t42 :  b1 :: base,
  t43 :  b1 :: base,
  t44 :  b1 :: base,
  t45 :  b1 :: base,
  z0 :  b1 :: base,
  z1 :  b1 :: base,
  z2 :  b1 :: base,
  z3 :  b1 :: base,
  z4 :  b1 :: base,
  z5 :  b1 :: base,
  z6 :  b1 :: base,
  z7 :  b1 :: base,
  z8 :  b1 :: base,
  z9 :  b1 :: base,
  z10 :  b1 :: base,
  z11 :  b1 :: base,
  z12 :  b1 :: base,
  z13 :  b1 :: base,
  z14 :  b1 :: base,
  z15 :  b1 :: base,
  z16 :  b1 :: base,
  z17 :  b1 :: base,
  tc0 :  b1 :: base,
  tc1 :  b1 :: base,
  tc2 :  b1 :: base,
  tc3 :  b1 :: base,
  tc4 :  b1 :: base,
  tc5 :  b1 :: base,
  tc6 :  b1 :: base,
  tc7 :  b1 :: base,
  tc8 :  b1 :: base,
  tc9 :  b1 :: base,
  tc10 :  b1 :: base,
  tc11 :  b1 :: base,
  tc12 :  b1 :: base,
  tc13 :  b1 :: base,
  tc14 :  b1 :: base,
  tc15 :  b1 :: base,
  tc16 :  b1 :: base,
  tc17 :  b1 :: base,
  tc18 :  b1 :: base,
  tc19 :  b1 :: base,
  tc20 :  b1 :: base,
  tc21 :  b1 :: base,
  tc22 :  b1 :: base,
  tc23 :  b1 :: base,
  tc24 :  b1 :: base,
  tc25 :  b1 :: base,
  tc26 :  b1 :: base
let
  (y14) = (U3 ^ U5);
  (y13) = (U0 ^ U6);
  (y9) = (U0 ^ U3);
  (y8) = (U0 ^ U5);
  (t0) = (U1 ^ U2);
  (y1) = (t0 ^ U7);
  (y4) = (y1 ^ U3);
  (y12) = (y13 ^ y14);
  (y2) = (y1 ^ U0);
  (y5) = (y1 ^ U6);
  (y3) = (y5 ^ y8);
  (t1) = (U4 ^ y12);
  (y15) = (t1 ^ U5);
  (y20) = (t1 ^ U1);
  (y6) = (y15 ^ U7);
  (y10) = (y15 ^ t0);
  (y11) = (y20 ^ y9);
  (y7) = (U7 ^ y11);
  (y17) = (y10 ^ y11);
  (y19) = (y10 ^ y8);
  (y16) = (t0 ^ y11);
  (y21) = (y13 ^ y16);
  (y18) = (U0 ^ y16);
  (t2) = (y12 & y15);
  (t3) = (y3 & y6);
  (t4) = (t3 ^ t2);
  (t5) = (y4 & U7);
  (t6) = (t5 ^ t2);
  (t7) = (y13 & y16);
  (t8) = (y5 & y1);
  (t9) = (t8 ^ t7);
  (t10) = (y2 & y7);
  (t11) = (t10 ^ t7);
  (t12) = (y9 & y11);
  (t13) = (y14 & y17);
  (t14) = (t13 ^ t12);
  (t15) = (y8 & y10);
  (t16) = (t15 ^ t12);
  (t17) = (t4 ^ y20);
  (t18) = (t6 ^ t16);
  (t19) = (t9 ^ t14);
  (t20) = (t11 ^ t16);
  (t21) = (t17 ^ t14);
  (t22) = (t18 ^ y19);
  (t23) = (t19 ^ y21);
  (t24) = (t20 ^ y18);
  (t25) = (t21 ^ t22);
  (t26) = (t21 & t23);
  (t27) = (t24 ^ t26);
  (t28) = (t25 & t27);
  (t29) = (t28 ^ t22);
  (t30) = (t23 ^ t24);
  (t31) = (t22 ^ t26);
  (t32) = (t31 & t30);
  (t33) = (t32 ^ t24);
  (t34) = (t23 ^ t33);
  (t35) = (t27 ^ t33);
  (t36) = (t24 & t35);
  (t37) = (t36 ^ t34);
  (t38) = (t27 ^ t36);
  (t39) = (t29 & t38);
  (t40) = (t25 ^ t39);
  (t41) = (t40 ^ t37);
  (t42) = (t29 ^ t33);
  (t43) = (t29 ^ t40);
  (t44) = (t33 ^ t37);
  (t45) = (t42 ^ t41);
  (z0) = (t44 & y15);
  (z1) = (t37 & y6);
  (z2) = (t33 & U7);
  (z3) = (t43 & y16);
  (z4) = (t40 & y1);
  (z5) = (t29 & y7);
  (z6) = (t42 & y11);
  (z7) = (t45 & y17);
  (z8) = (t41 & y10);
  (z9) = (t44 & y12);
  (z10) = (t37 & y3);
  (z11) = (t33 & y4);
  (z12) = (t43 & y13);
  (z13) = (t40 & y5);
  (z14) = (t29 & y2);
  (z15) = (t42 & y9);
  (z16) = (t45 & y14);
  (z17) = (t41 & y8);
  (tc1) = (z15 ^ z16);
  (tc2) = (z10 ^ tc1);
  (tc3) = (z9 ^ tc2);
  (tc4) = (z0 ^ z2);
  (tc5) = (z1 ^ z0);
  (tc6) = (z3 ^ z4);
  (tc7) = (z12 ^ tc4);
  (tc8) = (z7 ^ tc6);
  (tc9) = (z8 ^ tc7);
  (tc10) = (tc8 ^ tc9);
  (tc11) = (tc6 ^ tc5);
  (tc12) = (z3 ^ z5);
  (tc13) = (z13 ^ tc1);
  (tc14) = (tc4 ^ tc12);
  (S3) = (tc3 ^ tc11);
  (tc16) = (z6 ^ tc8);
  (tc17) = (z14 ^ tc10);
  (tc18) = (tc13 ^ tc14);
  (S7) = (~ (z12 ^ tc18));
  (tc20) = (z15 ^ tc16);
  (tc21) = (tc2 ^ z11);
  (S0) = (tc3 ^ tc16);
  (S6) = (~ (tc10 ^ tc18));
  (S4) = (tc14 ^ S3);
  (S1) = (~ (S3 ^ tc16));
  (tc26) = (tc17 ^ tc20);
  (S2) = (~ (tc26 ^ z17));
  (S5) = (tc21 ^ tc17)
tel

*/
 