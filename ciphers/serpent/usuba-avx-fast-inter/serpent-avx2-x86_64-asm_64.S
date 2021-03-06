/*
 * Serpent Cipher 16-way parallel algorithm (x86_64/AVX2)
 *
 * Copyright (C) 2012 Johannes Goetzfried
 *     <Johannes.Goetzfried@informatik.stud.uni-erlangen.de>
 *
 * Based on arch/x86/crypto/serpent-sse2-x86_64-asm_64.S by
 *  Copyright (C) 2011 Jussi Kivilinna <jussi.kivilinna@mbnet.fi>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
 * USA
 *
 */

.file "serpent-avx2-x86_64-asm_64.S"
.text

#define CTX %rdi

/**********************************************************************
  16-way AVX2 serpent
 **********************************************************************/
#define RA1 %ymm0
#define RB1 %ymm1
#define RC1 %ymm2
#define RD1 %ymm3
#define RE1 %ymm4

#define tp  %ymm5

#define RA2 %ymm6
#define RB2 %ymm7
#define RC2 %ymm8
#define RD2 %ymm9
#define RE2 %ymm10

#define RNOT %ymm11

#define RK0 %ymm12
#define RK1 %ymm13
#define RK2 %ymm14
#define RK3 %ymm15


#define S0_1(x0, x1, x2, x3, x4)      \
	vpor		x0,   x3, tp; \
	vpxor		x3,   x0, x0; \
	vpxor		x2,   x3, x4; \
	vpxor		RNOT, x4, x4; \
	vpxor		x1,   tp, x3; \
	vpand		x0,   x1, x1; \
	vpxor		x4,   x1, x1; \
	vpxor		x0,   x2, x2;
#define S0_2(x0, x1, x2, x3, x4)      \
	vpxor		x3,   x0, x0; \
	vpor		x0,   x4, x4; \
	vpxor		x2,   x0, x0; \
	vpand		x1,   x2, x2; \
	vpxor		x2,   x3, x3; \
	vpxor		RNOT, x1, x1; \
	vpxor		x4,   x2, x2; \
	vpxor		x2,   x1, x1;

#define S1_1(x0, x1, x2, x3, x4)      \
	vpxor		x0,   x1, tp; \
	vpxor		x3,   x0, x0; \
	vpxor		RNOT, x3, x3; \
	vpand		tp,   x1, x4; \
	vpor		tp,   x0, x0; \
	vpxor		x2,   x3, x3; \
	vpxor		x3,   x0, x0; \
	vpxor		x3,   tp, x1;
#define S1_2(x0, x1, x2, x3, x4)      \
	vpxor		x4,   x3, x3; \
	vpor		x4,   x1, x1; \
	vpxor		x2,   x4, x4; \
	vpand		x0,   x2, x2; \
	vpxor		x1,   x2, x2; \
	vpor		x0,   x1, x1; \
	vpxor		RNOT, x0, x0; \
	vpxor		x2,   x0, x0; \
	vpxor		x1,   x4, x4;

#define S2_1(x0, x1, x2, x3, x4)      \
	vpxor		RNOT, x3, x3; \
	vpxor		x0,   x1, x1; \
	vpand		x2,   x0, tp; \
	vpxor		x3,   tp, tp; \
	vpor		x0,   x3, x3; \
	vpxor		x1,   x2, x2; \
	vpxor		x1,   x3, x3; \
	vpand		tp,   x1, x1;
#define S2_2(x0, x1, x2, x3, x4)      \
	vpxor		x2,   tp, tp; \
	vpand		x3,   x2, x2; \
	vpor		x1,   x3, x3; \
	vpxor		RNOT, tp, tp; \
	vpxor		tp,   x3, x3; \
	vpxor		tp,   x0, x4; \
	vpxor		x2,   tp, x0; \
	vpor		x2,   x1, x1;

#define S3_1(x0, x1, x2, x3, x4)      \
	vpxor		x3,   x1, tp; \
	vpor		x0,   x3, x3; \
	vpand		x0,   x1, x4; \
	vpxor		x2,   x0, x0; \
	vpxor		tp,   x2, x2; \
	vpand		x3,   tp, x1; \
	vpxor		x3,   x2, x2; \
	vpor		x4,   x0, x0; \
	vpxor		x3,   x4, x4;
#define S3_2(x0, x1, x2, x3, x4)      \
	vpxor		x0,   x1, x1; \
	vpand		x3,   x0, x0; \
	vpand		x4,   x3, x3; \
	vpxor		x2,   x3, x3; \
	vpor		x1,   x4, x4; \
	vpand		x1,   x2, x2; \
	vpxor		x3,   x4, x4; \
	vpxor		x3,   x0, x0; \
	vpxor		x2,   x3, x3;

#define S4_1(x0, x1, x2, x3, x4)      \
	vpand		x0,   x3, tp; \
	vpxor		x3,   x0, x0; \
	vpxor		x2,   tp, tp; \
	vpor		x3,   x2, x2; \
	vpxor		x1,   x0, x0; \
	vpxor		tp,   x3, x4; \
	vpor		x0,   x2, x2; \
	vpxor		x1,   x2, x2;
#define S4_2(x0, x1, x2, x3, x4)      \
	vpand		x0,   x1, x1; \
	vpxor		x4,   x1, x1; \
	vpand		x2,   x4, x4; \
	vpxor		tp,   x2, x2; \
	vpxor		x0,   x4, x4; \
	vpor		x1,   tp, x3; \
	vpxor		RNOT, x1, x1; \
	vpxor		x0,   x3, x3;

#define S5_1(x0, x1, x2, x3, x4)      \
	vpor		x0,   x1, tp; \
	vpxor		tp,   x2, x2; \
	vpxor		RNOT, x3, x3; \
	vpxor		x0,   x1, x4; \
	vpxor		x2,   x0, x0; \
	vpand		x4,   tp, x1; \
	vpor		x3,   x4, x4; \
	vpxor		x0,   x4, x4;
#define S5_2(x0, x1, x2, x3, x4)      \
	vpand		x3,   x0, x0; \
	vpxor		x3,   x1, x1; \
	vpxor		x2,   x3, x3; \
	vpxor		x1,   x0, x0; \
	vpand		x4,   x2, x2; \
	vpxor		x2,   x1, x1; \
	vpand		x0,   x2, x2; \
	vpxor		x2,   x3, x3;

#define S6_1(x0, x1, x2, x3, x4)      \
	vpxor		x0,   x3, x3; \
	vpxor		x2,   x1, tp; \
	vpxor		x0,   x2, x2; \
	vpand		x3,   x0, x0; \
	vpor		x3,   tp, tp; \
	vpxor		RNOT, x1, x4; \
	vpxor		tp,   x0, x0; \
	vpxor		x2,   tp, x1;
#define S6_2(x0, x1, x2, x3, x4)      \
	vpxor		x4,   x3, x3; \
	vpxor		x0,   x4, x4; \
	vpand		x0,   x2, x2; \
	vpxor		x1,   x4, x4; \
	vpxor		x3,   x2, x2; \
	vpand		x1,   x3, x3; \
	vpxor		x0,   x3, x3; \
	vpxor		x2,   x1, x1;

#define S7_1(x0, x1, x2, x3, x4)      \
	vpxor		RNOT, x1, tp; \
	vpxor		RNOT, x0, x0; \
	vpand		x2,   tp, x1; \
	vpxor		x3,   x1, x1; \
	vpor		tp,   x3, x3; \
	vpxor		x2,   tp, x4; \
	vpxor		x3,   x2, x2; \
	vpxor		x0,   x3, x3; \
	vpor		x1,   x0, x0;
#define S7_2(x0, x1, x2, x3, x4)      \
	vpand		x0,   x2, x2; \
	vpxor		x4,   x0, x0; \
	vpxor		x3,   x4, x4; \
	vpand		x0,   x3, x3; \
	vpxor		x1,   x4, x4; \
	vpxor		x4,   x2, x2; \
	vpxor		x1,   x3, x3; \
	vpor		x0,   x4, x4; \
	vpxor		x1,   x4, x4;

#define SI0_1(x0, x1, x2, x3, x4)     \
	vpxor		x0,   x1, x1; \
	vpor		x1,   x3, tp; \
	vpxor		x1,   x3, x4; \
	vpxor		RNOT, x0, x0; \
	vpxor		tp,   x2, x2; \
	vpxor		x0,   tp, x3; \
	vpand		x1,   x0, x0; \
	vpxor		x2,   x0, x0;
#define SI0_2(x0, x1, x2, x3, x4)     \
	vpand		x3,   x2, x2; \
	vpxor		x4,   x3, x3; \
	vpxor		x3,   x2, x2; \
	vpxor		x3,   x1, x1; \
	vpand		x0,   x3, x3; \
	vpxor		x0,   x1, x1; \
	vpxor		x2,   x0, x0; \
	vpxor		x3,   x4, x4;

#define SI1_1(x0, x1, x2, x3, x4)     \
	vpxor		x3,   x1, x1; \
	vpxor		x2,   x0, tp; \
	vpxor		RNOT, x2, x2; \
	vpor		x1,   x0, x4; \
	vpxor		x3,   x4, x4; \
	vpand		x1,   x3, x3; \
	vpxor		x2,   x1, x1; \
	vpand		x4,   x2, x2;
#define SI1_2(x0, x1, x2, x3, x4)     \
	vpxor		x1,   x4, x4; \
	vpor		x3,   x1, x1; \
	vpxor		tp,   x3, x3; \
	vpxor		tp,   x2, x2; \
	vpor		x4,   tp, x0; \
	vpxor		x4,   x2, x2; \
	vpxor		x0,   x1, x1; \
	vpxor		x1,   x4, x4;

#define SI2_1(x0, x1, x2, x3, x4)     \
	vpxor		x1,   x2, x2; \
	vpxor		RNOT, x3, tp; \
	vpor		x2,   tp, tp; \
	vpxor		x3,   x2, x2; \
	vpxor		x0,   x3, x4; \
	vpxor		x1,   tp, x3; \
	vpor		x2,   x1, x1; \
	vpxor		x0,   x2, x2;
#define SI2_2(x0, x1, x2, x3, x4)     \
	vpxor		x4,   x1, x1; \
	vpor		x3,   x4, x4; \
	vpxor		x3,   x2, x2; \
	vpxor		x2,   x4, x4; \
	vpand		x1,   x2, x2; \
	vpxor		x3,   x2, x2; \
	vpxor		x4,   x3, x3; \
	vpxor		x0,   x4, x4;

#define SI3_1(x0, x1, x2, x3, x4)     \
	vpxor		x1,   x2, x2; \
	vpand		x2,   x1, tp; \
	vpxor		x0,   tp, tp; \
	vpor		x1,   x0, x0; \
	vpxor		x3,   x1, x4; \
	vpxor		x3,   x0, x0; \
	vpor		tp,   x3, x3; \
	vpxor		x2,   tp, x1;
#define SI3_2(x0, x1, x2, x3, x4)     \
	vpxor		x3,   x1, x1; \
	vpxor		x2,   x0, x0; \
	vpxor		x3,   x2, x2; \
	vpand		x1,   x3, x3; \
	vpxor		x0,   x1, x1; \
	vpand		x2,   x0, x0; \
	vpxor		x3,   x4, x4; \
	vpxor		x0,   x3, x3; \
	vpxor		x1,   x0, x0;

#define SI4_1(x0, x1, x2, x3, x4)     \
	vpxor		x3,   x2, x2; \
	vpand		x1,   x0, tp; \
	vpxor		x2,   tp, tp; \
	vpor		x3,   x2, x2; \
	vpxor		RNOT, x0, x4; \
	vpxor		tp,   x1, x1; \
	vpxor		x2,   tp, x0; \
	vpand		x4,   x2, x2;
#define SI4_2(x0, x1, x2, x3, x4)     \
	vpxor		x0,   x2, x2; \
	vpor		x4,   x0, x0; \
	vpxor		x3,   x0, x0; \
	vpand		x2,   x3, x3; \
	vpxor		x3,   x4, x4; \
	vpxor		x1,   x3, x3; \
	vpand		x0,   x1, x1; \
	vpxor		x1,   x4, x4; \
	vpxor		x3,   x0, x0;

#define SI5_1(x0, x1, x2, x3, x4)     \
	vpor		x2,   x1, tp; \
	vpxor		x1,   x2, x2; \
	vpxor		x3,   tp, tp; \
	vpand		x1,   x3, x3; \
	vpxor		x3,   x2, x2; \
	vpor		x0,   x3, x3; \
	vpxor		RNOT, x0, x0; \
	vpxor		x2,   x3, x3; \
	vpor		x0,   x2, x2;
#define SI5_2(x0, x1, x2, x3, x4)     \
	vpxor		tp,   x1, x4; \
	vpxor		x4,   x2, x2; \
	vpand		x0,   x4, x4; \
	vpxor		tp,   x0, x0; \
	vpxor		x3,   tp, x1; \
	vpand		x2,   x0, x0; \
	vpxor		x3,   x2, x2; \
	vpxor		x2,   x0, x0; \
	vpxor		x4,   x2, x2; \
	vpxor		x3,   x4, x4;

#define SI6_1(x0, x1, x2, x3, x4)     \
	vpxor		x2,   x0, x0; \
	vpand		x3,   x0, tp; \
	vpxor		x3,   x2, x2; \
	vpxor		x2,   tp, tp; \
	vpxor		x1,   x3, x3; \
	vpor		x0,   x2, x2; \
	vpxor		x3,   x2, x2; \
	vpand		tp,   x3, x3;
#define SI6_2(x0, x1, x2, x3, x4)     \
	vpxor		RNOT, tp, tp; \
	vpxor		x1,   x3, x3; \
	vpand		x2,   x1, x1; \
	vpxor		tp,   x0, x4; \
	vpxor		x4,   x3, x3; \
	vpxor		x2,   x4, x4; \
	vpxor		x1,   tp, x0; \
	vpxor		x0,   x2, x2;

#define SI7_1(x0, x1, x2, x3, x4)     \
	vpand		x0,   x3, tp; \
	vpxor		x2,   x0, x0; \
	vpor		x3,   x2, x2; \
	vpxor		x1,   x3, x4; \
	vpxor		RNOT, x0, x0; \
	vpor		tp,   x1, x1; \
	vpxor		x0,   x4, x4; \
	vpand		x2,   x0, x0; \
	vpxor		x1,   x0, x0;
#define SI7_2(x0, x1, x2, x3, x4)     \
	vpand		x2,   x1, x1; \
	vpxor		x2,   tp, x3; \
	vpxor		x3,   x4, x4; \
	vpand		x3,   x2, x2; \
	vpor		x0,   x3, x3; \
	vpxor		x4,   x1, x1; \
	vpxor		x4,   x3, x3; \
	vpand		x0,   x4, x4; \
	vpxor		x2,   x4, x4;

#define get_key(i, j, t) \
	vpbroadcastd (4*(i)+(j))*4(CTX), t;

#define K2(x0, x1, x2, x3, x4, i) \
	get_key(i, 0, RK0); \
	get_key(i, 1, RK1); \
	get_key(i, 2, RK2); \
	get_key(i, 3, RK3); \
	vpxor RK0,	x0 ## 1, x0 ## 1; \
	vpxor RK1,	x1 ## 1, x1 ## 1; \
	vpxor RK2,	x2 ## 1, x2 ## 1; \
	vpxor RK3,	x3 ## 1, x3 ## 1; \

#define LK2(x0, x1, x2, x3, x4, i) \
	vpslld $13,		x0 ## 1, x4 ## 1;          \
	vpsrld $(32 - 13),	x0 ## 1, x0 ## 1;          \
	vpor			x4 ## 1, x0 ## 1, x0 ## 1; \
	vpxor			x0 ## 1, x1 ## 1, x1 ## 1; \
	vpslld $3,		x2 ## 1, x4 ## 1;          \
	vpsrld $(32 - 3),	x2 ## 1, x2 ## 1;          \
	vpor			x4 ## 1, x2 ## 1, x2 ## 1; \
	vpxor			x2 ## 1, x1 ## 1, x1 ## 1; \
	vpslld $1,		x1 ## 1, x4 ## 1;          \
	vpsrld $(32 - 1),	x1 ## 1, x1 ## 1;          \
	vpor			x4 ## 1, x1 ## 1, x1 ## 1; \
	vpslld $3,		x0 ## 1, x4 ## 1;          \
	vpxor			x2 ## 1, x3 ## 1, x3 ## 1; \
	vpxor			x4 ## 1, x3 ## 1, x3 ## 1; \
	get_key(i, 1, RK1); \
	get_key(i, 3, RK3); \
	vpslld $7,		x3 ## 1, x4 ## 1;          \
	vpsrld $(32 - 7),	x3 ## 1, x3 ## 1;          \
	vpor			x4 ## 1, x3 ## 1, x3 ## 1; \
	vpslld $7,		x1 ## 1, x4 ## 1;          \
	vpxor			x1 ## 1, x0 ## 1, x0 ## 1; \
	vpxor			x3 ## 1, x0 ## 1, x0 ## 1; \
	vpxor			x3 ## 1, x2 ## 1, x2 ## 1; \
	vpxor			x4 ## 1, x2 ## 1, x2 ## 1; \
	get_key(i, 0, RK0); \
	get_key(i, 2, RK2); \
	vpxor			RK1, x1 ## 1, x1 ## 1;     \
	vpxor			RK3, x3 ## 1, x3 ## 1;     \
	vpslld $5,		x0 ## 1, x4 ## 1;          \
	vpsrld $(32 - 5),	x0 ## 1, x0 ## 1;          \
	vpor			x4 ## 1, x0 ## 1, x0 ## 1; \
	vpslld $22,		x2 ## 1, x4 ## 1;          \
	vpsrld $(32 - 22),	x2 ## 1, x2 ## 1;          \
	vpor			x4 ## 1, x2 ## 1, x2 ## 1; \
	vpxor			RK0, x0 ## 1, x0 ## 1;     \
	vpxor			RK2, x2 ## 1, x2 ## 1;

#define S(SBOX, x0, x1, x2, x3, x4) \
	SBOX ## _1(x0 ## 1, x1 ## 1, x2 ## 1, x3 ## 1, x4 ## 1); \
	SBOX ## _2(x0 ## 1, x1 ## 1, x2 ## 1, x3 ## 1, x4 ## 1);

#define transpose_4x8(x0, x1, x2, x3, t0, t1, t2) \
	vpunpckldq		x1, x0, t0; \
	vpunpckhdq		x1, x0, t2; \
	vpunpckldq		x3, x2, t1; \
	vpunpckhdq		x3, x2, x3; \
	\
	vpunpcklqdq		t1, t0, x0; \
	vpunpckhqdq		t1, t0, x1; \
	vpunpcklqdq		x3, t2, x2; \
	vpunpckhqdq		x3, t2, x3;

#define read_blocks(in, x0, x1, x2, x3, t0, t1, t2) \
	vmovdqu (0*8*4)(in),	x0; \
	vmovdqu (1*8*4)(in),	x1; \
	vmovdqu (2*8*4)(in),	x2; \
	vmovdqu (3*8*4)(in),	x3; \
	\
	transpose_4x8(x0, x1, x2, x3, t0, t1, t2)

#define write_blocks(out, x0, x1, x2, x3, t0, t1, t2) \
	transpose_4x8(x0, x1, x2, x3, t0, t1, t2) \
	\
	vmovdqu x0,		(0*8*4)(out); \
	vmovdqu x1,		(1*8*4)(out); \
	vmovdqu x2,		(2*8*4)(out); \
	vmovdqu x3,		(3*8*4)(out);

#define xor_blocks(out, x0, x1, x2, x3, t0, t1, t2) \
	transpose_4x8(x0, x1, x2, x3, t0, t1, t2) \
	\
	vpxor (0*8*4)(out),	x0, x0;       \
	vmovdqu x0,		(0*8*4)(out); \
	vpxor (1*8*4)(out),	x1, x1;       \
	vmovdqu x1,		(1*8*4)(out); \
	vpxor (2*8*4)(out),	x2, x2;       \
	vmovdqu x2,		(2*8*4)(out); \
	vpxor (3*8*4)(out),	x3, x3;       \
	vmovdqu x3,		(3*8*4)(out);

.align 16
.global __serpent_enc_blk_16way
.type   __serpent_enc_blk_16way,@function;

__serpent_enc_blk_16way:
	/* input:
	 *	%rdi: ctx, CTX
	 *	%rsi: dst
	 *	%rdx: src
	 *	%rcx: bool, if true: xor output
	 */

	vpcmpeqd RNOT, RNOT, RNOT;

	leaq (4*8)(%rdx), %rax;
	read_blocks(%rdx, RA1, RB1, RC1, RD1, RK0, RK1, RK2);

						 K2(RA, RB, RC, RD, RE, 0);
	S(S0, RA, RB, RC, RD, RE);		LK2(RC, RB, RD, RA, RE, 1);
	S(S1, RC, RB, RD, RA, RE);		LK2(RE, RD, RA, RC, RB, 2);
	S(S2, RE, RD, RA, RC, RB);		LK2(RB, RD, RE, RC, RA, 3);
	S(S3, RB, RD, RE, RC, RA);		LK2(RC, RA, RD, RB, RE, 4);
	S(S4, RC, RA, RD, RB, RE);		LK2(RA, RD, RB, RE, RC, 5);
	S(S5, RA, RD, RB, RE, RC);		LK2(RC, RA, RD, RE, RB, 6);
	S(S6, RC, RA, RD, RE, RB);		LK2(RD, RB, RA, RE, RC, 7);
	S(S7, RD, RB, RA, RE, RC);		LK2(RC, RA, RE, RD, RB, 8);
	S(S0, RC, RA, RE, RD, RB);		LK2(RE, RA, RD, RC, RB, 9);
	S(S1, RE, RA, RD, RC, RB);		LK2(RB, RD, RC, RE, RA, 10);
	S(S2, RB, RD, RC, RE, RA);		LK2(RA, RD, RB, RE, RC, 11);
	S(S3, RA, RD, RB, RE, RC);		LK2(RE, RC, RD, RA, RB, 12);
	S(S4, RE, RC, RD, RA, RB);		LK2(RC, RD, RA, RB, RE, 13);
	S(S5, RC, RD, RA, RB, RE);		LK2(RE, RC, RD, RB, RA, 14);
	S(S6, RE, RC, RD, RB, RA);		LK2(RD, RA, RC, RB, RE, 15);
	S(S7, RD, RA, RC, RB, RE);		LK2(RE, RC, RB, RD, RA, 16);
	S(S0, RE, RC, RB, RD, RA);		LK2(RB, RC, RD, RE, RA, 17);
	S(S1, RB, RC, RD, RE, RA);		LK2(RA, RD, RE, RB, RC, 18);
	S(S2, RA, RD, RE, RB, RC);		LK2(RC, RD, RA, RB, RE, 19);
	S(S3, RC, RD, RA, RB, RE);		LK2(RB, RE, RD, RC, RA, 20);
	S(S4, RB, RE, RD, RC, RA);		LK2(RE, RD, RC, RA, RB, 21);
	S(S5, RE, RD, RC, RA, RB);		LK2(RB, RE, RD, RA, RC, 22);
	S(S6, RB, RE, RD, RA, RC);		LK2(RD, RC, RE, RA, RB, 23);
	S(S7, RD, RC, RE, RA, RB);		LK2(RB, RE, RA, RD, RC, 24);
	S(S0, RB, RE, RA, RD, RC);		LK2(RA, RE, RD, RB, RC, 25);
	S(S1, RA, RE, RD, RB, RC);		LK2(RC, RD, RB, RA, RE, 26);
	S(S2, RC, RD, RB, RA, RE);		LK2(RE, RD, RC, RA, RB, 27);
	S(S3, RE, RD, RC, RA, RB);		LK2(RA, RB, RD, RE, RC, 28);
	S(S4, RA, RB, RD, RE, RC);		LK2(RB, RD, RE, RC, RA, 29);
	S(S5, RB, RD, RE, RC, RA);		LK2(RA, RB, RD, RC, RE, 30);
	S(S6, RA, RB, RD, RC, RE);		LK2(RD, RE, RB, RC, RA, 31);
	S(S7, RD, RE, RB, RC, RA);		 K2(RA, RB, RC, RD, RE, 32);

	leaq (4*8)(%rsi), %rax;

	;; testb %cl, %cl;
	;; jnz __enc_xor16;

	write_blocks(%rsi, RA1, RB1, RC1, RD1, RK0, RK1, RK2);

	ret;

__enc_xor16:
	xor_blocks(%rsi, RA1, RB1, RC1, RD1, RK0, RK1, RK2);

	ret;
