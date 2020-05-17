/* This code was generated by Usuba.
   See https://github.com/DadaIsCrazy/usuba. */


/* Do NOT change the order of those define/include */
#define NO_RUNTIME
#ifndef BITS_PER_REG
#define BITS_PER_REG 32
#endif
/* including the architecture specific .h */
#include "STD.h"

#undef L_ROTATE
#define L_ROTATE(x,n,c) (x << 1) | ((x >> 2)&1)

/* auxiliary functions */
void _andTI (/*inputs*/ DATATYPE a,DATATYPE _fd_a,DATATYPE b,DATATYPE _fd_b,DATATYPE r,DATATYPE _fd_r, /*outputs*/ DATATYPE* x,DATATYPE* _fd_x) {
  
  // Variables declaration
  DATATYPE _fd__tmp1_;
  DATATYPE _fd__tmp2_;
  DATATYPE _fd__tmp3_;
  DATATYPE _fd_c1;
  DATATYPE _fd_c2;
  DATATYPE _fd_c3;
  DATATYPE _fd_d1;
  DATATYPE _fd_d2;
  DATATYPE _fd_d3;
  DATATYPE _fd_d4;
  DATATYPE _tmp10_;
  DATATYPE _tmp11_;
  DATATYPE _tmp1_;
  DATATYPE _tmp2_;
  DATATYPE _tmp3_;
  DATATYPE _tmp8_;
  DATATYPE _tmp9_;
  DATATYPE c1;
  DATATYPE c2;
  DATATYPE c3;
  DATATYPE d1;
  DATATYPE d2;
  DATATYPE d3;
  DATATYPE d4;


  // Instructions (body)
  c1 = AND(a,b);
  _fd_c1 = OR(_fd_a,_fd_b);
  _tmp1_ = L_ROTATE(b,1,32);
  _fd__tmp1_ = L_ROTATE(_fd_b,1,32);
  c2 = AND(a,_tmp1_);
  _fd_c2 = OR(_fd_a,_fd__tmp1_);
  _tmp2_ = L_ROTATE(a,1,32);
  _fd__tmp2_ = L_ROTATE(_fd_a,1,32);
  c3 = AND(_tmp2_,b);
  _fd_c3 = OR(_fd__tmp2_,_fd_b);
  d1 = XOR(c1,r);
  _tmp8_ = XOR(_fd_c1,_fd_r);
  _fd_d1 = NOT(_tmp8_);
  d2 = XOR(d1,c2);
  _tmp9_ = XOR(_fd_d1,_fd_c2);
  _fd_d2 = NOT(_tmp9_);
  d3 = XOR(d2,c3);
  _tmp10_ = XOR(_fd_d2,_fd_c3);
  _fd_d3 = NOT(_tmp10_);
  _tmp3_ = L_ROTATE(r,1,32);
  _fd__tmp3_ = L_ROTATE(_fd_r,1,32);
  d4 = XOR(d3,_tmp3_);
  _tmp11_ = XOR(_fd_d3,_fd__tmp3_);
  _fd_d4 = NOT(_tmp11_);
  *x = d4;
  *_fd_x = _fd_d4;

}

void _notTI (/*inputs*/ DATATYPE a,DATATYPE _fd_a, /*outputs*/ DATATYPE* a__,DATATYPE* _fd_a__) {
  
  // Variables declaration


  // Instructions (body)
  *a__ = NOT(a);
  *_fd_a__ = NOT(_fd_a);

}

void _orTI (/*inputs*/ DATATYPE a,DATATYPE _fd_a,DATATYPE b,DATATYPE _fd_b,DATATYPE r,DATATYPE _fd_r, /*outputs*/ DATATYPE* x,DATATYPE* _fd_x) {
  
  // Variables declaration
  DATATYPE _fd__tmp4_;
  DATATYPE _fd__tmp5_;
  DATATYPE _tmp4_;
  DATATYPE _tmp5_;


  // Instructions (body)
  _notTI(a,_fd_a,&_tmp4_,&_fd__tmp4_);
  _notTI(b,_fd_b,&_tmp5_,&_fd__tmp5_);
  _andTI(_tmp4_,_fd__tmp4_,_tmp5_,_fd__tmp5_,r,_fd_r,&_tmp4_,&_fd__tmp4_);
  _notTI(_tmp4_,_fd__tmp4_,&*x,&*_fd_x);

}

/* main function */
void adder__ (/*inputs*/ DATATYPE a__,DATATYPE _fd_a__,DATATYPE b__,DATATYPE _fd_b__, /*outputs*/ DATATYPE *s__,DATATYPE *_fd_s__,DATATYPE *c__,DATATYPE *_fd_c__) {
  
  // Variables declaration
  DATATYPE _tmp12_;
  DATATYPE _tmp7_;


  // Instructions (body)
  *s__ = XOR(a__,b__);
  _tmp12_ = XOR(_fd_a__,_fd_b__);
  *_fd_s__ = NOT(_tmp12_);
  _tmp7_ = rand();
  _andTI(a__,_fd_a__,b__,_fd_b__,_tmp7_,_tmp7_,&*c__,&*_fd_c__);

}
 