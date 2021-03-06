/*
 * Generated S-box files.
 *
 * Produced by Matthew Kwan - March 1998
 */


/*
  To generate this from the original code:

 perl -p0i~ -E ' s/\s*s(\d+) \(((\s*\S+\s*\^\s*\S+\s*,)+)/my@v;$n=$1;@pre=map{push@v,"t".++$c;"   unsigned long t$c = $_;\n"} ($2=~m%\S+\s*\^\s*\w+%g);"@pre"."    s$n(".(join",",@v).","/ge' des_kwan.c

 perl -pe 's%\s*(s\d)(.*?)(&.*)%my(@p,@n,@c);$f=$1;$s=$2;for($3=~/&(\w+)/g){$v=out.++$i;push@p,"    unsigned long $v;";push@n,"    $_ = $_ ^ $v;";push@c,"\&$v";}; join("\n",@p) . ("\n    $f$s") . join(",",@c) . ");\n" . join("\n",@n)%e' des_kwan.c > des_kwan_output_sep.c


*/


static void
s1 (
	unsigned long	a1,
	unsigned long	a2,
	unsigned long	a3,
	unsigned long	a4,
	unsigned long	a5,
	unsigned long	a6,
	unsigned long	*out1,
	unsigned long	*out2,
	unsigned long	*out3,
	unsigned long	*out4
) {
	unsigned long	x1, x2, x3, x4, x5, x6, x7, x8;
	unsigned long	x9, x10, x11, x12, x13, x14, x15, x16;
	unsigned long	x17, x18, x19, x20, x21, x22, x23, x24;
	unsigned long	x25, x26, x27, x28, x29, x30, x31, x32;
	unsigned long	x33, x34, x35, x36, x37, x38, x39, x40;
	unsigned long	x41, x42, x43, x44, x45, x46, x47, x48;
	unsigned long	x49, x50, x51, x52, x53, x54, x55, x56;
	unsigned long	x57, x58, x59, x60, x61, x62, x63;

	x1 = ~a4;
	x2 = ~a1;
	x3 = a4 ^ a3;
	x4 = x3 ^ x2;
	x5 = a3 | x2;
	x6 = x5 & x1;
	x7 = a6 | x6;
	x8 = x4 ^ x7;
	x9 = x1 | x2;
	x10 = a6 & x9;
	x11 = x7 ^ x10;
	x12 = a2 | x11;
	x13 = x8 ^ x12;
	x14 = x9 ^ x13;
	x15 = a6 | x14;
	x16 = x1 ^ x15;
	x17 = ~x14;
	x18 = x17 & x3;
	x19 = a2 | x18;
	x20 = x16 ^ x19;
	x21 = a5 | x20;
	x22 = x13 ^ x21;
	*out4 = x22;
	x23 = a3 | x4;
	x24 = ~x23;
	x25 = a6 | x24;
	x26 = x6 ^ x25;
	x27 = x1 & x8;
	x28 = a2 | x27;
	x29 = x26 ^ x28;
	x30 = x1 | x8;
	x31 = x30 ^ x6;
	x32 = x5 & x14;
	x33 = x32 ^ x8;
	x34 = a2 & x33;
	x35 = x31 ^ x34;
	x36 = a5 | x35;
	x37 = x29 ^ x36;
	*out1 = x37;
	x38 = a3 & x10;
	x39 = x38 | x4;
	x40 = a3 & x33;
	x41 = x40 ^ x25;
	x42 = a2 | x41;
	x43 = x39 ^ x42;
	x44 = a3 | x26;
	x45 = x44 ^ x14;
	x46 = a1 | x8;
	x47 = x46 ^ x20;
	x48 = a2 | x47;
	x49 = x45 ^ x48;
	x50 = a5 & x49;
	x51 = x43 ^ x50;
	*out2 = x51;
	x52 = x8 ^ x40;
	x53 = a3 ^ x11;
	x54 = x53 & x5;
	x55 = a2 | x54;
	x56 = x52 ^ x55;
	x57 = a6 | x4;
	x58 = x57 ^ x38;
	x59 = x13 & x56;
	x60 = a2 & x59;
	x61 = x58 ^ x60;
	x62 = a5 & x61;
	x63 = x56 ^ x62;
	*out3 = x63;
}


static void
s2 (
	unsigned long	a1,
	unsigned long	a2,
	unsigned long	a3,
	unsigned long	a4,
	unsigned long	a5,
	unsigned long	a6,
	unsigned long	*out1,
	unsigned long	*out2,
	unsigned long	*out3,
	unsigned long	*out4
) {
	unsigned long	x1, x2, x3, x4, x5, x6, x7, x8;
	unsigned long	x9, x10, x11, x12, x13, x14, x15, x16;
	unsigned long	x17, x18, x19, x20, x21, x22, x23, x24;
	unsigned long	x25, x26, x27, x28, x29, x30, x31, x32;
	unsigned long	x33, x34, x35, x36, x37, x38, x39, x40;
	unsigned long	x41, x42, x43, x44, x45, x46, x47, x48;
	unsigned long	x49, x50, x51, x52, x53, x54, x55, x56;

	x1 = ~a5;
	x2 = ~a1;
	x3 = a5 ^ a6;
	x4 = x3 ^ x2;
	x5 = x4 ^ a2;
	x6 = a6 | x1;
	x7 = x6 | x2;
	x8 = a2 & x7;
	x9 = a6 ^ x8;
	x10 = a3 & x9;
	x11 = x5 ^ x10;
	x12 = a2 & x9;
	x13 = a5 ^ x6;
	x14 = a3 | x13;
	x15 = x12 ^ x14;
	x16 = a4 & x15;
	x17 = x11 ^ x16;
	*out2 = x17;
	x18 = a5 | a1;
	x19 = a6 | x18;
	x20 = x13 ^ x19;
	x21 = x20 ^ a2;
	x22 = a6 | x4;
	x23 = x22 & x17;
	x24 = a3 | x23;
	x25 = x21 ^ x24;
	x26 = a6 | x2;
	x27 = a5 & x2;
	x28 = a2 | x27;
	x29 = x26 ^ x28;
	x30 = x3 ^ x27;
	x31 = x2 ^ x19;
	x32 = a2 & x31;
	x33 = x30 ^ x32;
	x34 = a3 & x33;
	x35 = x29 ^ x34;
	x36 = a4 | x35;
	x37 = x25 ^ x36;
	*out3 = x37;
	x38 = x21 & x32;
	x39 = x38 ^ x5;
	x40 = a1 | x15;
	x41 = x40 ^ x13;
	x42 = a3 | x41;
	x43 = x39 ^ x42;
	x44 = x28 | x41;
	x45 = a4 & x44;
	x46 = x43 ^ x45;
	*out1 = x46;
	x47 = x19 & x21;
	x48 = x47 ^ x26;
	x49 = a2 & x33;
	x50 = x49 ^ x21;
	x51 = a3 & x50;
	x52 = x48 ^ x51;
	x53 = x18 & x28;
	x54 = x53 & x50;
	x55 = a4 | x54;
	x56 = x52 ^ x55;
	*out4 = x56;
}


static void
s3 (
	unsigned long	a1,
	unsigned long	a2,
	unsigned long	a3,
	unsigned long	a4,
	unsigned long	a5,
	unsigned long	a6,
	unsigned long	*out1,
	unsigned long	*out2,
	unsigned long	*out3,
	unsigned long	*out4
) {
	unsigned long	x1, x2, x3, x4, x5, x6, x7, x8;
	unsigned long	x9, x10, x11, x12, x13, x14, x15, x16;
	unsigned long	x17, x18, x19, x20, x21, x22, x23, x24;
	unsigned long	x25, x26, x27, x28, x29, x30, x31, x32;
	unsigned long	x33, x34, x35, x36, x37, x38, x39, x40;
	unsigned long	x41, x42, x43, x44, x45, x46, x47, x48;
	unsigned long	x49, x50, x51, x52, x53, x54, x55, x56;
	unsigned long	x57;

	x1 = ~a5;
	x2 = ~a6;
	x3 = a5 & a3;
	x4 = x3 ^ a6;
	x5 = a4 & x1;
	x6 = x4 ^ x5;
	x7 = x6 ^ a2;
	x8 = a3 & x1;
	x9 = a5 ^ x2;
	x10 = a4 | x9;
	x11 = x8 ^ x10;
	x12 = x7 & x11;
	x13 = a5 ^ x11;
	x14 = x13 | x7;
	x15 = a4 & x14;
	x16 = x12 ^ x15;
	x17 = a2 & x16;
	x18 = x11 ^ x17;
	x19 = a1 & x18;
	x20 = x7 ^ x19;
	*out4 = x20;
	x21 = a3 ^ a4;
	x22 = x21 ^ x9;
	x23 = x2 | x4;
	x24 = x23 ^ x8;
	x25 = a2 | x24;
	x26 = x22 ^ x25;
	x27 = a6 ^ x23;
	x28 = x27 | a4;
	x29 = a3 ^ x15;
	x30 = x29 | x5;
	x31 = a2 | x30;
	x32 = x28 ^ x31;
	x33 = a1 | x32;
	x34 = x26 ^ x33;
	*out1 = x34;
	x35 = a3 ^ x9;
	x36 = x35 | x5;
	x37 = x4 | x29;
	x38 = x37 ^ a4;
	x39 = a2 | x38;
	x40 = x36 ^ x39;
	x41 = a6 & x11;
	x42 = x41 | x6;
	x43 = x34 ^ x38;
	x44 = x43 ^ x41;
	x45 = a2 & x44;
	x46 = x42 ^ x45;
	x47 = a1 | x46;
	x48 = x40 ^ x47;
	*out3 = x48;
	x49 = x2 | x38;
	x50 = x49 ^ x13;
	x51 = x27 ^ x28;
	x52 = a2 | x51;
	x53 = x50 ^ x52;
	x54 = x12 & x23;
	x55 = x54 & x52;
	x56 = a1 | x55;
	x57 = x53 ^ x56;
	*out2 = x57;
}


static void
s4 (
	unsigned long	a1,
	unsigned long	a2,
	unsigned long	a3,
	unsigned long	a4,
	unsigned long	a5,
	unsigned long	a6,
	unsigned long	*out1,
	unsigned long	*out2,
	unsigned long	*out3,
	unsigned long	*out4
) {
	unsigned long	x1, x2, x3, x4, x5, x6, x7, x8;
	unsigned long	x9, x10, x11, x12, x13, x14, x15, x16;
	unsigned long	x17, x18, x19, x20, x21, x22, x23, x24;
	unsigned long	x25, x26, x27, x28, x29, x30, x31, x32;
	unsigned long	x33, x34, x35, x36, x37, x38, x39, x40;
	unsigned long	x41, x42;

	x1 = ~a1;
	x2 = ~a3;
	x3 = a1 | a3;
	x4 = a5 & x3;
	x5 = x1 ^ x4;
	x6 = a2 | a3;
	x7 = x5 ^ x6;
	x8 = a1 & a5;
	x9 = x8 ^ x3;
	x10 = a2 & x9;
	x11 = a5 ^ x10;
	x12 = a4 & x11;
	x13 = x7 ^ x12;
	x14 = x2 ^ x4;
	x15 = a2 & x14;
	x16 = x9 ^ x15;
	x17 = x5 & x14;
	x18 = a5 ^ x2;
	x19 = a2 | x18;
	x20 = x17 ^ x19;
	x21 = a4 | x20;
	x22 = x16 ^ x21;
	x23 = a6 & x22;
	x24 = x13 ^ x23;
	*out2 = x24;
	x25 = ~x13;
	x26 = a6 | x22;
	x27 = x25 ^ x26;
	*out1 = x27;
	x28 = a2 & x11;
	x29 = x28 ^ x17;
	x30 = a3 ^ x10;
	x31 = x30 ^ x19;
	x32 = a4 & x31;
	x33 = x29 ^ x32;
	x34 = x25 ^ x33;
	x35 = a2 & x34;
	x36 = x24 ^ x35;
	x37 = a4 | x34;
	x38 = x36 ^ x37;
	x39 = a6 & x38;
	x40 = x33 ^ x39;
	*out4 = x40;
	x41 = x26 ^ x38;
	x42 = x41 ^ x40;
	*out3 = x42;
}


static void
s5 (
	unsigned long	a1,
	unsigned long	a2,
	unsigned long	a3,
	unsigned long	a4,
	unsigned long	a5,
	unsigned long	a6,
	unsigned long	*out1,
	unsigned long	*out2,
	unsigned long	*out3,
	unsigned long	*out4
) {
	unsigned long	x1, x2, x3, x4, x5, x6, x7, x8;
	unsigned long	x9, x10, x11, x12, x13, x14, x15, x16;
	unsigned long	x17, x18, x19, x20, x21, x22, x23, x24;
	unsigned long	x25, x26, x27, x28, x29, x30, x31, x32;
	unsigned long	x33, x34, x35, x36, x37, x38, x39, x40;
	unsigned long	x41, x42, x43, x44, x45, x46, x47, x48;
	unsigned long	x49, x50, x51, x52, x53, x54, x55, x56;
	unsigned long	x57, x58, x59, x60, x61, x62;

	x1 = ~a6;
	x2 = ~a3;
	x3 = x1 | x2;
	x4 = x3 ^ a4;
	x5 = a1 & x3;
	x6 = x4 ^ x5;
	x7 = a6 | a4;
	x8 = x7 ^ a3;
	x9 = a3 | x7;
	x10 = a1 | x9;
	x11 = x8 ^ x10;
	x12 = a5 & x11;
	x13 = x6 ^ x12;
	x14 = ~x4;
	x15 = x14 & a6;
	x16 = a1 | x15;
	x17 = x8 ^ x16;
	x18 = a5 | x17;
	x19 = x10 ^ x18;
	x20 = a2 | x19;
	x21 = x13 ^ x20;
	*out3 = x21;
	x22 = x2 | x15;
	x23 = x22 ^ a6;
	x24 = a4 ^ x22;
	x25 = a1 & x24;
	x26 = x23 ^ x25;
	x27 = a1 ^ x11;
	x28 = x27 & x22;
	x29 = a5 | x28;
	x30 = x26 ^ x29;
	x31 = a4 | x27;
	x32 = ~x31;
	x33 = a2 | x32;
	x34 = x30 ^ x33;
	*out2 = x34;
	x35 = x2 ^ x15;
	x36 = a1 & x35;
	x37 = x14 ^ x36;
	x38 = x5 ^ x7;
	x39 = x38 & x34;
	x40 = a5 | x39;
	x41 = x37 ^ x40;
	x42 = x2 ^ x5;
	x43 = x42 & x16;
	x44 = x4 & x27;
	x45 = a5 & x44;
	x46 = x43 ^ x45;
	x47 = a2 | x46;
	x48 = x41 ^ x47;
	*out1 = x48;
	x49 = x24 & x48;
	x50 = x49 ^ x5;
	x51 = x11 ^ x30;
	x52 = x51 | x50;
	x53 = a5 & x52;
	x54 = x50 ^ x53;
	x55 = x14 ^ x19;
	x56 = x55 ^ x34;
	x57 = x4 ^ x16;
	x58 = x57 & x30;
	x59 = a5 & x58;
	x60 = x56 ^ x59;
	x61 = a2 | x60;
	x62 = x54 ^ x61;
	*out4 = x62;
}


static void
s6 (
	unsigned long	a1,
	unsigned long	a2,
	unsigned long	a3,
	unsigned long	a4,
	unsigned long	a5,
	unsigned long	a6,
	unsigned long	*out1,
	unsigned long	*out2,
	unsigned long	*out3,
	unsigned long	*out4
) {
	unsigned long	x1, x2, x3, x4, x5, x6, x7, x8;
	unsigned long	x9, x10, x11, x12, x13, x14, x15, x16;
	unsigned long	x17, x18, x19, x20, x21, x22, x23, x24;
	unsigned long	x25, x26, x27, x28, x29, x30, x31, x32;
	unsigned long	x33, x34, x35, x36, x37, x38, x39, x40;
	unsigned long	x41, x42, x43, x44, x45, x46, x47, x48;
	unsigned long	x49, x50, x51, x52, x53, x54, x55, x56;
	unsigned long	x57;

	x1 = ~a2;
	x2 = ~a5;
	x3 = a2 ^ a6;
	x4 = x3 ^ x2;
	x5 = x4 ^ a1;
	x6 = a5 & a6;
	x7 = x6 | x1;
	x8 = a5 & x5;
	x9 = a1 & x8;
	x10 = x7 ^ x9;
	x11 = a4 & x10;
	x12 = x5 ^ x11;
	x13 = a6 ^ x10;
	x14 = x13 & a1;
	x15 = a2 & a6;
	x16 = x15 ^ a5;
	x17 = a1 & x16;
	x18 = x2 ^ x17;
	x19 = a4 | x18;
	x20 = x14 ^ x19;
	x21 = a3 & x20;
	x22 = x12 ^ x21;
	*out2 = x22;
	x23 = a6 ^ x18;
	x24 = a1 & x23;
	x25 = a5 ^ x24;
	x26 = a2 ^ x17;
	x27 = x26 | x6;
	x28 = a4 & x27;
	x29 = x25 ^ x28;
	x30 = ~x26;
	x31 = a6 | x29;
	x32 = ~x31;
	x33 = a4 & x32;
	x34 = x30 ^ x33;
	x35 = a3 & x34;
	x36 = x29 ^ x35;
	*out4 = x36;
	x37 = x6 ^ x34;
	x38 = a5 & x23;
	x39 = x38 ^ x5;
	x40 = a4 | x39;
	x41 = x37 ^ x40;
	x42 = x16 | x24;
	x43 = x42 ^ x1;
	x44 = x15 ^ x24;
	x45 = x44 ^ x31;
	x46 = a4 | x45;
	x47 = x43 ^ x46;
	x48 = a3 | x47;
	x49 = x41 ^ x48;
	*out1 = x49;
	x50 = x5 | x38;
	x51 = x50 ^ x6;
	x52 = x8 & x31;
	x53 = a4 | x52;
	x54 = x51 ^ x53;
	x55 = x30 & x43;
	x56 = a3 | x55;
	x57 = x54 ^ x56;
	*out3 = x57;
}


static void
s7 (
	unsigned long	a1,
	unsigned long	a2,
	unsigned long	a3,
	unsigned long	a4,
	unsigned long	a5,
	unsigned long	a6,
	unsigned long	*out1,
	unsigned long	*out2,
	unsigned long	*out3,
	unsigned long	*out4
) {
	unsigned long	x1, x2, x3, x4, x5, x6, x7, x8;
	unsigned long	x9, x10, x11, x12, x13, x14, x15, x16;
	unsigned long	x17, x18, x19, x20, x21, x22, x23, x24;
	unsigned long	x25, x26, x27, x28, x29, x30, x31, x32;
	unsigned long	x33, x34, x35, x36, x37, x38, x39, x40;
	unsigned long	x41, x42, x43, x44, x45, x46, x47, x48;
	unsigned long	x49, x50, x51, x52, x53, x54, x55, x56;
	unsigned long	x57;

	x1 = ~a2;
	x2 = ~a5;
	x3 = a2 & a4;
	x4 = x3 ^ a5;
	x5 = x4 ^ a3;
	x6 = a4 & x4;
	x7 = x6 ^ a2;
	x8 = a3 & x7;
	x9 = a1 ^ x8;
	x10 = a6 | x9;
	x11 = x5 ^ x10;
	x12 = a4 & x2;
	x13 = x12 | a2;
	x14 = a2 | x2;
	x15 = a3 & x14;
	x16 = x13 ^ x15;
	x17 = x6 ^ x11;
	x18 = a6 | x17;
	x19 = x16 ^ x18;
	x20 = a1 & x19;
	x21 = x11 ^ x20;
	*out1 = x21;
	x22 = a2 | x21;
	x23 = x22 ^ x6;
	x24 = x23 ^ x15;
	x25 = x5 ^ x6;
	x26 = x25 | x12;
	x27 = a6 | x26;
	x28 = x24 ^ x27;
	x29 = x1 & x19;
	x30 = x23 & x26;
	x31 = a6 & x30;
	x32 = x29 ^ x31;
	x33 = a1 | x32;
	x34 = x28 ^ x33;
	*out4 = x34;
	x35 = a4 & x16;
	x36 = x35 | x1;
	x37 = a6 & x36;
	x38 = x11 ^ x37;
	x39 = a4 & x13;
	x40 = a3 | x7;
	x41 = x39 ^ x40;
	x42 = x1 | x24;
	x43 = a6 | x42;
	x44 = x41 ^ x43;
	x45 = a1 | x44;
	x46 = x38 ^ x45;
	*out2 = x46;
	x47 = x8 ^ x44;
	x48 = x6 ^ x15;
	x49 = a6 | x48;
	x50 = x47 ^ x49;
	x51 = x19 ^ x44;
	x52 = a4 ^ x25;
	x53 = x52 & x46;
	x54 = a6 & x53;
	x55 = x51 ^ x54;
	x56 = a1 | x55;
	x57 = x50 ^ x56;
	*out3 = x57;
}


static void
s8 (
	unsigned long	a1,
	unsigned long	a2,
	unsigned long	a3,
	unsigned long	a4,
	unsigned long	a5,
	unsigned long	a6,
	unsigned long	*out1,
	unsigned long	*out2,
	unsigned long	*out3,
	unsigned long	*out4
) {
	unsigned long	x1, x2, x3, x4, x5, x6, x7, x8;
	unsigned long	x9, x10, x11, x12, x13, x14, x15, x16;
	unsigned long	x17, x18, x19, x20, x21, x22, x23, x24;
	unsigned long	x25, x26, x27, x28, x29, x30, x31, x32;
	unsigned long	x33, x34, x35, x36, x37, x38, x39, x40;
	unsigned long	x41, x42, x43, x44, x45, x46, x47, x48;
	unsigned long	x49, x50, x51, x52, x53, x54;

	x1 = ~a1;
	x2 = ~a4;
	x3 = a3 ^ x1;
	x4 = a3 | x1;
	x5 = x4 ^ x2;
	x6 = a5 | x5;
	x7 = x3 ^ x6;
	x8 = x1 | x5;
	x9 = x2 ^ x8;
	x10 = a5 & x9;
	x11 = x8 ^ x10;
	x12 = a2 & x11;
	x13 = x7 ^ x12;
	x14 = x6 ^ x9;
	x15 = x3 & x9;
	x16 = a5 & x8;
	x17 = x15 ^ x16;
	x18 = a2 | x17;
	x19 = x14 ^ x18;
	x20 = a6 | x19;
	x21 = x13 ^ x20;
	*out1 = x21;
	x22 = a5 | x3;
	x23 = x22 & x2;
	x24 = ~a3;
	x25 = x24 & x8;
	x26 = a5 & x4;
	x27 = x25 ^ x26;
	x28 = a2 | x27;
	x29 = x23 ^ x28;
	x30 = a6 & x29;
	x31 = x13 ^ x30;
	*out4 = x31;
	x32 = x5 ^ x6;
	x33 = x32 ^ x22;
	x34 = a4 | x13;
	x35 = a2 & x34;
	x36 = x33 ^ x35;
	x37 = a1 & x33;
	x38 = x37 ^ x8;
	x39 = a1 ^ x23;
	x40 = x39 & x7;
	x41 = a2 & x40;
	x42 = x38 ^ x41;
	x43 = a6 | x42;
	x44 = x36 ^ x43;
	*out3 = x44;
	x45 = a1 ^ x10;
	x46 = x45 ^ x22;
	x47 = ~x7;
	x48 = x47 & x8;
	x49 = a2 | x48;
	x50 = x46 ^ x49;
	x51 = x19 ^ x29;
	x52 = x51 | x38;
	x53 = a6 & x52;
	x54 = x50 ^ x53;
	*out2 = x54;
}


/*
 * Bitslice implementation of DES.
 *
 * Checks that the plaintext bits p[0] .. p[63]
 * encrypt to the ciphertext bits c[0] .. c[63]
 * given the key bits k0 .. k55
 */

void
deseval (
	const unsigned long	*p,
	unsigned long	*c,
	const unsigned long	*k
) {
	unsigned long	result = ~0UL;
	unsigned long	l0 = p[6];
	unsigned long	l1 = p[14];
	unsigned long	l2 = p[22];
	unsigned long	l3 = p[30];
	unsigned long	l4 = p[38];
	unsigned long	l5 = p[46];
	unsigned long	l6 = p[54];
	unsigned long	l7 = p[62];
	unsigned long	l8 = p[4];
	unsigned long	l9 = p[12];
	unsigned long	l10 = p[20];
	unsigned long	l11 = p[28];
	unsigned long	l12 = p[36];
	unsigned long	l13 = p[44];
	unsigned long	l14 = p[52];
	unsigned long	l15 = p[60];
	unsigned long	l16 = p[2];
	unsigned long	l17 = p[10];
	unsigned long	l18 = p[18];
	unsigned long	l19 = p[26];
	unsigned long	l20 = p[34];
	unsigned long	l21 = p[42];
	unsigned long	l22 = p[50];
	unsigned long	l23 = p[58];
	unsigned long	l24 = p[0];
	unsigned long	l25 = p[8];
	unsigned long	l26 = p[16];
	unsigned long	l27 = p[24];
	unsigned long	l28 = p[32];
	unsigned long	l29 = p[40];
	unsigned long	l30 = p[48];
	unsigned long	l31 = p[56];
	unsigned long	r0 = p[7];
	unsigned long	r1 = p[15];
	unsigned long	r2 = p[23];
	unsigned long	r3 = p[31];
	unsigned long	r4 = p[39];
	unsigned long	r5 = p[47];
	unsigned long	r6 = p[55];
	unsigned long	r7 = p[63];
	unsigned long	r8 = p[5];
	unsigned long	r9 = p[13];
	unsigned long	r10 = p[21];
	unsigned long	r11 = p[29];
	unsigned long	r12 = p[37];
	unsigned long	r13 = p[45];
	unsigned long	r14 = p[53];
	unsigned long	r15 = p[61];
	unsigned long	r16 = p[3];
	unsigned long	r17 = p[11];
	unsigned long	r18 = p[19];
	unsigned long	r19 = p[27];
	unsigned long	r20 = p[35];
	unsigned long	r21 = p[43];
	unsigned long	r22 = p[51];
	unsigned long	r23 = p[59];
	unsigned long	r24 = p[1];
	unsigned long	r25 = p[9];
	unsigned long	r26 = p[17];
	unsigned long	r27 = p[25];
	unsigned long	r28 = p[33];
	unsigned long	r29 = p[41];
	unsigned long	r30 = p[49];
	unsigned long	r31 = p[57];
    unsigned long k0 = k[0];
    unsigned long k1 = k[1];
    unsigned long k2 = k[2];
    unsigned long k3 = k[3];
    unsigned long k4 = k[4];
    unsigned long k5 = k[5];
    unsigned long k6 = k[6];
    unsigned long k7 = k[7];
    unsigned long k8 = k[8];
    unsigned long k9 = k[9];
    unsigned long k10 = k[10];
    unsigned long k11 = k[11];
    unsigned long k12 = k[12];
    unsigned long k13 = k[13];
    unsigned long k14 = k[14];
    unsigned long k15 = k[15];
    unsigned long k16 = k[16];
    unsigned long k17 = k[17];
    unsigned long k18 = k[18];
    unsigned long k19 = k[19];
    unsigned long k20 = k[20];
    unsigned long k21 = k[21];
    unsigned long k22 = k[22];
    unsigned long k23 = k[23];
    unsigned long k24 = k[24];
    unsigned long k25 = k[25];
    unsigned long k26 = k[26];
    unsigned long k27 = k[27];
    unsigned long k28 = k[28];
    unsigned long k29 = k[29];
    unsigned long k30 = k[30];
    unsigned long k31 = k[31];
    unsigned long k32 = k[32];
    unsigned long k33 = k[33];
    unsigned long k34 = k[34];
    unsigned long k35 = k[35];
    unsigned long k36 = k[36];
    unsigned long k37 = k[37];
    unsigned long k38 = k[38];
    unsigned long k39 = k[39];
    unsigned long k40 = k[40];
    unsigned long k41 = k[41];
    unsigned long k42 = k[42];
    unsigned long k43 = k[43];
    unsigned long k44 = k[44];
    unsigned long k45 = k[45];
    unsigned long k46 = k[46];
    unsigned long k47 = k[47];
    unsigned long k48 = k[48];
    unsigned long k49 = k[49];
    unsigned long k50 = k[50];
    unsigned long k51 = k[51];
    unsigned long k52 = k[52];
    unsigned long k53 = k[53];
    unsigned long k54 = k[54];
    unsigned long k55 = k[55];
    unsigned long k56 = k[56];
    unsigned long k57 = k[57];
    unsigned long k58 = k[58];
    unsigned long k59 = k[59];
    unsigned long k60 = k[60];
    unsigned long k61 = k[61];
    unsigned long k62 = k[62];
    unsigned long k63 = k[63];

    unsigned long t1 = r31 ^ k47;
    unsigned long t2 = r0 ^ k11;
    unsigned long t3 = r1 ^ k26;
    unsigned long t4 = r2 ^ k3;
    unsigned long t5 = r3 ^ k13;
    unsigned long t6 = r4 ^ k41;
    unsigned long out1;
    unsigned long out2;
    unsigned long out3;
    unsigned long out4;
    s1(t1,t2,t3,t4,t5,t6, &out1,&out2,&out3,&out4);
    l8 = l8 ^ out1;
    l16 = l16 ^ out2;
    l22 = l22 ^ out3;
    l30 = l30 ^ out4;

    unsigned long t7 = r3 ^ k27;
    unsigned long t8 = r4 ^ k6;
    unsigned long t9 = r5 ^ k54;
    unsigned long t10 = r6 ^ k48;
    unsigned long t11 = r7 ^ k39;
    unsigned long t12 = r8 ^ k19;
    unsigned long out5;
    unsigned long out6;
    unsigned long out7;
    unsigned long out8;
    s2(t7,t8,t9,t10,t11,t12, &out5,&out6,&out7,&out8);
    l12 = l12 ^ out5;
    l27 = l27 ^ out6;
    l1 = l1 ^ out7;
    l17 = l17 ^ out8;

    unsigned long t13 = r7 ^ k53;
    unsigned long t14 = r8 ^ k25;
    unsigned long t15 = r9 ^ k33;
    unsigned long t16 = r10 ^ k34;
    unsigned long t17 = r11 ^ k17;
    unsigned long t18 = r12 ^ k5;
    unsigned long out9;
    unsigned long out10;
    unsigned long out11;
    unsigned long out12;
    s3(t13,t14,t15,t16,t17,t18, &out9,&out10,&out11,&out12);
    l23 = l23 ^ out9;
    l15 = l15 ^ out10;
    l29 = l29 ^ out11;
    l5 = l5 ^ out12;

    unsigned long t19 = r11 ^ k4;
    unsigned long t20 = r12 ^ k55;
    unsigned long t21 = r13 ^ k24;
    unsigned long t22 = r14 ^ k32;
    unsigned long t23 = r15 ^ k40;
    unsigned long t24 = r16 ^ k20;
    unsigned long out13;
    unsigned long out14;
    unsigned long out15;
    unsigned long out16;
    s4(t19,t20,t21,t22,t23,t24, &out13,&out14,&out15,&out16);
    l25 = l25 ^ out13;
    l19 = l19 ^ out14;
    l9 = l9 ^ out15;
    l0 = l0 ^ out16;

    unsigned long t25 = r15 ^ k36;
    unsigned long t26 = r16 ^ k31;
    unsigned long t27 = r17 ^ k21;
    unsigned long t28 = r18 ^ k8;
    unsigned long t29 = r19 ^ k23;
    unsigned long t30 = r20 ^ k52;
    unsigned long out17;
    unsigned long out18;
    unsigned long out19;
    unsigned long out20;
    s5(t25,t26,t27,t28,t29,t30, &out17,&out18,&out19,&out20);
    l7 = l7 ^ out17;
    l13 = l13 ^ out18;
    l24 = l24 ^ out19;
    l2 = l2 ^ out20;

    unsigned long t31 = r19 ^ k14;
    unsigned long t32 = r20 ^ k29;
    unsigned long t33 = r21 ^ k51;
    unsigned long t34 = r22 ^ k9;
    unsigned long t35 = r23 ^ k35;
    unsigned long t36 = r24 ^ k30;
    unsigned long out21;
    unsigned long out22;
    unsigned long out23;
    unsigned long out24;
    s6(t31,t32,t33,t34,t35,t36, &out21,&out22,&out23,&out24);
    l3 = l3 ^ out21;
    l28 = l28 ^ out22;
    l10 = l10 ^ out23;
    l18 = l18 ^ out24;

    unsigned long t37 = r23 ^ k2;
    unsigned long t38 = r24 ^ k37;
    unsigned long t39 = r25 ^ k22;
    unsigned long t40 = r26 ^ k0;
    unsigned long t41 = r27 ^ k42;
    unsigned long t42 = r28 ^ k38;
    unsigned long out25;
    unsigned long out26;
    unsigned long out27;
    unsigned long out28;
    s7(t37,t38,t39,t40,t41,t42, &out25,&out26,&out27,&out28);
    l31 = l31 ^ out25;
    l11 = l11 ^ out26;
    l21 = l21 ^ out27;
    l6 = l6 ^ out28;

    unsigned long t43 = r27 ^ k16;
    unsigned long t44 = r28 ^ k43;
    unsigned long t45 = r29 ^ k44;
    unsigned long t46 = r30 ^ k1;
    unsigned long t47 = r31 ^ k7;
    unsigned long t48 = r0 ^ k28;
    unsigned long out29;
    unsigned long out30;
    unsigned long out31;
    unsigned long out32;
    s8(t43,t44,t45,t46,t47,t48, &out29,&out30,&out31,&out32);
    l4 = l4 ^ out29;
    l26 = l26 ^ out30;
    l14 = l14 ^ out31;
    l20 = l20 ^ out32;

    unsigned long t49 = l31 ^ k54;
    unsigned long t50 = l0 ^ k18;
    unsigned long t51 = l1 ^ k33;
    unsigned long t52 = l2 ^ k10;
    unsigned long t53 = l3 ^ k20;
    unsigned long t54 = l4 ^ k48;
    unsigned long out33;
    unsigned long out34;
    unsigned long out35;
    unsigned long out36;
    s1(t49,t50,t51,t52,t53,t54, &out33,&out34,&out35,&out36);
    r8 = r8 ^ out33;
    r16 = r16 ^ out34;
    r22 = r22 ^ out35;
    r30 = r30 ^ out36;

    unsigned long t55 = l3 ^ k34;
    unsigned long t56 = l4 ^ k13;
    unsigned long t57 = l5 ^ k4;
    unsigned long t58 = l6 ^ k55;
    unsigned long t59 = l7 ^ k46;
    unsigned long t60 = l8 ^ k26;
    unsigned long out37;
    unsigned long out38;
    unsigned long out39;
    unsigned long out40;
    s2(t55,t56,t57,t58,t59,t60, &out37,&out38,&out39,&out40);
    r12 = r12 ^ out37;
    r27 = r27 ^ out38;
    r1 = r1 ^ out39;
    r17 = r17 ^ out40;

    unsigned long t61 = l7 ^ k3;
    unsigned long t62 = l8 ^ k32;
    unsigned long t63 = l9 ^ k40;
    unsigned long t64 = l10 ^ k41;
    unsigned long t65 = l11 ^ k24;
    unsigned long t66 = l12 ^ k12;
    unsigned long out41;
    unsigned long out42;
    unsigned long out43;
    unsigned long out44;
    s3(t61,t62,t63,t64,t65,t66, &out41,&out42,&out43,&out44);
    r23 = r23 ^ out41;
    r15 = r15 ^ out42;
    r29 = r29 ^ out43;
    r5 = r5 ^ out44;

    unsigned long t67 = l11 ^ k11;
    unsigned long t68 = l12 ^ k5;
    unsigned long t69 = l13 ^ k6;
    unsigned long t70 = l14 ^ k39;
    unsigned long t71 = l15 ^ k47;
    unsigned long t72 = l16 ^ k27;
    unsigned long out45;
    unsigned long out46;
    unsigned long out47;
    unsigned long out48;
    s4(t67,t68,t69,t70,t71,t72, &out45,&out46,&out47,&out48);
    r25 = r25 ^ out45;
    r19 = r19 ^ out46;
    r9 = r9 ^ out47;
    r0 = r0 ^ out48;

    unsigned long t73 = l15 ^ k43;
    unsigned long t74 = l16 ^ k38;
    unsigned long t75 = l17 ^ k28;
    unsigned long t76 = l18 ^ k15;
    unsigned long t77 = l19 ^ k30;
    unsigned long t78 = l20 ^ k0;
    unsigned long out49;
    unsigned long out50;
    unsigned long out51;
    unsigned long out52;
    s5(t73,t74,t75,t76,t77,t78, &out49,&out50,&out51,&out52);
    r7 = r7 ^ out49;
    r13 = r13 ^ out50;
    r24 = r24 ^ out51;
    r2 = r2 ^ out52;

    unsigned long t79 = l19 ^ k21;
    unsigned long t80 = l20 ^ k36;
    unsigned long t81 = l21 ^ k31;
    unsigned long t82 = l22 ^ k16;
    unsigned long t83 = l23 ^ k42;
    unsigned long t84 = l24 ^ k37;
    unsigned long out53;
    unsigned long out54;
    unsigned long out55;
    unsigned long out56;
    s6(t79,t80,t81,t82,t83,t84, &out53,&out54,&out55,&out56);
    r3 = r3 ^ out53;
    r28 = r28 ^ out54;
    r10 = r10 ^ out55;
    r18 = r18 ^ out56;

    unsigned long t85 = l23 ^ k9;
    unsigned long t86 = l24 ^ k44;
    unsigned long t87 = l25 ^ k29;
    unsigned long t88 = l26 ^ k7;
    unsigned long t89 = l27 ^ k49;
    unsigned long t90 = l28 ^ k45;
    unsigned long out57;
    unsigned long out58;
    unsigned long out59;
    unsigned long out60;
    s7(t85,t86,t87,t88,t89,t90, &out57,&out58,&out59,&out60);
    r31 = r31 ^ out57;
    r11 = r11 ^ out58;
    r21 = r21 ^ out59;
    r6 = r6 ^ out60;

    unsigned long t91 = l27 ^ k23;
    unsigned long t92 = l28 ^ k50;
    unsigned long t93 = l29 ^ k51;
    unsigned long t94 = l30 ^ k8;
    unsigned long t95 = l31 ^ k14;
    unsigned long t96 = l0 ^ k35;
    unsigned long out61;
    unsigned long out62;
    unsigned long out63;
    unsigned long out64;
    s8(t91,t92,t93,t94,t95,t96, &out61,&out62,&out63,&out64);
    r4 = r4 ^ out61;
    r26 = r26 ^ out62;
    r14 = r14 ^ out63;
    r20 = r20 ^ out64;

    unsigned long t97 = r31 ^ k11;
    unsigned long t98 = r0 ^ k32;
    unsigned long t99 = r1 ^ k47;
    unsigned long t100 = r2 ^ k24;
    unsigned long t101 = r3 ^ k34;
    unsigned long t102 = r4 ^ k5;
    unsigned long out65;
    unsigned long out66;
    unsigned long out67;
    unsigned long out68;
    s1(t97,t98,t99,t100,t101,t102, &out65,&out66,&out67,&out68);
    l8 = l8 ^ out65;
    l16 = l16 ^ out66;
    l22 = l22 ^ out67;
    l30 = l30 ^ out68;

    unsigned long t103 = r3 ^ k48;
    unsigned long t104 = r4 ^ k27;
    unsigned long t105 = r5 ^ k18;
    unsigned long t106 = r6 ^ k12;
    unsigned long t107 = r7 ^ k3;
    unsigned long t108 = r8 ^ k40;
    unsigned long out69;
    unsigned long out70;
    unsigned long out71;
    unsigned long out72;
    s2(t103,t104,t105,t106,t107,t108, &out69,&out70,&out71,&out72);
    l12 = l12 ^ out69;
    l27 = l27 ^ out70;
    l1 = l1 ^ out71;
    l17 = l17 ^ out72;

    unsigned long t109 = r7 ^ k17;
    unsigned long t110 = r8 ^ k46;
    unsigned long t111 = r9 ^ k54;
    unsigned long t112 = r10 ^ k55;
    unsigned long t113 = r11 ^ k13;
    unsigned long t114 = r12 ^ k26;
    unsigned long out73;
    unsigned long out74;
    unsigned long out75;
    unsigned long out76;
    s3(t109,t110,t111,t112,t113,t114, &out73,&out74,&out75,&out76);
    l23 = l23 ^ out73;
    l15 = l15 ^ out74;
    l29 = l29 ^ out75;
    l5 = l5 ^ out76;

    unsigned long t115 = r11 ^ k25;
    unsigned long t116 = r12 ^ k19;
    unsigned long t117 = r13 ^ k20;
    unsigned long t118 = r14 ^ k53;
    unsigned long t119 = r15 ^ k4;
    unsigned long t120 = r16 ^ k41;
    unsigned long out77;
    unsigned long out78;
    unsigned long out79;
    unsigned long out80;
    s4(t115,t116,t117,t118,t119,t120, &out77,&out78,&out79,&out80);
    l25 = l25 ^ out77;
    l19 = l19 ^ out78;
    l9 = l9 ^ out79;
    l0 = l0 ^ out80;

    unsigned long t121 = r15 ^ k2;
    unsigned long t122 = r16 ^ k52;
    unsigned long t123 = r17 ^ k42;
    unsigned long t124 = r18 ^ k29;
    unsigned long t125 = r19 ^ k44;
    unsigned long t126 = r20 ^ k14;
    unsigned long out81;
    unsigned long out82;
    unsigned long out83;
    unsigned long out84;
    s5(t121,t122,t123,t124,t125,t126, &out81,&out82,&out83,&out84);
    l7 = l7 ^ out81;
    l13 = l13 ^ out82;
    l24 = l24 ^ out83;
    l2 = l2 ^ out84;

    unsigned long t127 = r19 ^ k35;
    unsigned long t128 = r20 ^ k50;
    unsigned long t129 = r21 ^ k45;
    unsigned long t130 = r22 ^ k30;
    unsigned long t131 = r23 ^ k1;
    unsigned long t132 = r24 ^ k51;
    unsigned long out85;
    unsigned long out86;
    unsigned long out87;
    unsigned long out88;
    s6(t127,t128,t129,t130,t131,t132, &out85,&out86,&out87,&out88);
    l3 = l3 ^ out85;
    l28 = l28 ^ out86;
    l10 = l10 ^ out87;
    l18 = l18 ^ out88;

    unsigned long t133 = r23 ^ k23;
    unsigned long t134 = r24 ^ k31;
    unsigned long t135 = r25 ^ k43;
    unsigned long t136 = r26 ^ k21;
    unsigned long t137 = r27 ^ k8;
    unsigned long t138 = r28 ^ k0;
    unsigned long out89;
    unsigned long out90;
    unsigned long out91;
    unsigned long out92;
    s7(t133,t134,t135,t136,t137,t138, &out89,&out90,&out91,&out92);
    l31 = l31 ^ out89;
    l11 = l11 ^ out90;
    l21 = l21 ^ out91;
    l6 = l6 ^ out92;

    unsigned long t139 = r27 ^ k37;
    unsigned long t140 = r28 ^ k9;
    unsigned long t141 = r29 ^ k38;
    unsigned long t142 = r30 ^ k22;
    unsigned long t143 = r31 ^ k28;
    unsigned long t144 = r0 ^ k49;
    unsigned long out93;
    unsigned long out94;
    unsigned long out95;
    unsigned long out96;
    s8(t139,t140,t141,t142,t143,t144, &out93,&out94,&out95,&out96);
    l4 = l4 ^ out93;
    l26 = l26 ^ out94;
    l14 = l14 ^ out95;
    l20 = l20 ^ out96;

    unsigned long t145 = l31 ^ k25;
    unsigned long t146 = l0 ^ k46;
    unsigned long t147 = l1 ^ k4;
    unsigned long t148 = l2 ^ k13;
    unsigned long t149 = l3 ^ k48;
    unsigned long t150 = l4 ^ k19;
    unsigned long out97;
    unsigned long out98;
    unsigned long out99;
    unsigned long out100;
    s1(t145,t146,t147,t148,t149,t150, &out97,&out98,&out99,&out100);
    r8 = r8 ^ out97;
    r16 = r16 ^ out98;
    r22 = r22 ^ out99;
    r30 = r30 ^ out100;

    unsigned long t151 = l3 ^ k5;
    unsigned long t152 = l4 ^ k41;
    unsigned long t153 = l5 ^ k32;
    unsigned long t154 = l6 ^ k26;
    unsigned long t155 = l7 ^ k17;
    unsigned long t156 = l8 ^ k54;
    unsigned long out101;
    unsigned long out102;
    unsigned long out103;
    unsigned long out104;
    s2(t151,t152,t153,t154,t155,t156, &out101,&out102,&out103,&out104);
    r12 = r12 ^ out101;
    r27 = r27 ^ out102;
    r1 = r1 ^ out103;
    r17 = r17 ^ out104;

    unsigned long t157 = l7 ^ k6;
    unsigned long t158 = l8 ^ k3;
    unsigned long t159 = l9 ^ k11;
    unsigned long t160 = l10 ^ k12;
    unsigned long t161 = l11 ^ k27;
    unsigned long t162 = l12 ^ k40;
    unsigned long out105;
    unsigned long out106;
    unsigned long out107;
    unsigned long out108;
    s3(t157,t158,t159,t160,t161,t162, &out105,&out106,&out107,&out108);
    r23 = r23 ^ out105;
    r15 = r15 ^ out106;
    r29 = r29 ^ out107;
    r5 = r5 ^ out108;

    unsigned long t163 = l11 ^ k39;
    unsigned long t164 = l12 ^ k33;
    unsigned long t165 = l13 ^ k34;
    unsigned long t166 = l14 ^ k10;
    unsigned long t167 = l15 ^ k18;
    unsigned long t168 = l16 ^ k55;
    unsigned long out109;
    unsigned long out110;
    unsigned long out111;
    unsigned long out112;
    s4(t163,t164,t165,t166,t167,t168, &out109,&out110,&out111,&out112);
    r25 = r25 ^ out109;
    r19 = r19 ^ out110;
    r9 = r9 ^ out111;
    r0 = r0 ^ out112;

    unsigned long t169 = l15 ^ k16;
    unsigned long t170 = l16 ^ k7;
    unsigned long t171 = l17 ^ k1;
    unsigned long t172 = l18 ^ k43;
    unsigned long t173 = l19 ^ k31;
    unsigned long t174 = l20 ^ k28;
    unsigned long out113;
    unsigned long out114;
    unsigned long out115;
    unsigned long out116;
    s5(t169,t170,t171,t172,t173,t174, &out113,&out114,&out115,&out116);
    r7 = r7 ^ out113;
    r13 = r13 ^ out114;
    r24 = r24 ^ out115;
    r2 = r2 ^ out116;

    unsigned long t175 = l19 ^ k49;
    unsigned long t176 = l20 ^ k9;
    unsigned long t177 = l21 ^ k0;
    unsigned long t178 = l22 ^ k44;
    unsigned long t179 = l23 ^ k15;
    unsigned long t180 = l24 ^ k38;
    unsigned long out117;
    unsigned long out118;
    unsigned long out119;
    unsigned long out120;
    s6(t175,t176,t177,t178,t179,t180, &out117,&out118,&out119,&out120);
    r3 = r3 ^ out117;
    r28 = r28 ^ out118;
    r10 = r10 ^ out119;
    r18 = r18 ^ out120;

    unsigned long t181 = l23 ^ k37;
    unsigned long t182 = l24 ^ k45;
    unsigned long t183 = l25 ^ k2;
    unsigned long t184 = l26 ^ k35;
    unsigned long t185 = l27 ^ k22;
    unsigned long t186 = l28 ^ k14;
    unsigned long out121;
    unsigned long out122;
    unsigned long out123;
    unsigned long out124;
    s7(t181,t182,t183,t184,t185,t186, &out121,&out122,&out123,&out124);
    r31 = r31 ^ out121;
    r11 = r11 ^ out122;
    r21 = r21 ^ out123;
    r6 = r6 ^ out124;

    unsigned long t187 = l27 ^ k51;
    unsigned long t188 = l28 ^ k23;
    unsigned long t189 = l29 ^ k52;
    unsigned long t190 = l30 ^ k36;
    unsigned long t191 = l31 ^ k42;
    unsigned long t192 = l0 ^ k8;
    unsigned long out125;
    unsigned long out126;
    unsigned long out127;
    unsigned long out128;
    s8(t187,t188,t189,t190,t191,t192, &out125,&out126,&out127,&out128);
    r4 = r4 ^ out125;
    r26 = r26 ^ out126;
    r14 = r14 ^ out127;
    r20 = r20 ^ out128;

    unsigned long t193 = r31 ^ k39;
    unsigned long t194 = r0 ^ k3;
    unsigned long t195 = r1 ^ k18;
    unsigned long t196 = r2 ^ k27;
    unsigned long t197 = r3 ^ k5;
    unsigned long t198 = r4 ^ k33;
    unsigned long out129;
    unsigned long out130;
    unsigned long out131;
    unsigned long out132;
    s1(t193,t194,t195,t196,t197,t198, &out129,&out130,&out131,&out132);
    l8 = l8 ^ out129;
    l16 = l16 ^ out130;
    l22 = l22 ^ out131;
    l30 = l30 ^ out132;

    unsigned long t199 = r3 ^ k19;
    unsigned long t200 = r4 ^ k55;
    unsigned long t201 = r5 ^ k46;
    unsigned long t202 = r6 ^ k40;
    unsigned long t203 = r7 ^ k6;
    unsigned long t204 = r8 ^ k11;
    unsigned long out133;
    unsigned long out134;
    unsigned long out135;
    unsigned long out136;
    s2(t199,t200,t201,t202,t203,t204, &out133,&out134,&out135,&out136);
    l12 = l12 ^ out133;
    l27 = l27 ^ out134;
    l1 = l1 ^ out135;
    l17 = l17 ^ out136;

    unsigned long t205 = r7 ^ k20;
    unsigned long t206 = r8 ^ k17;
    unsigned long t207 = r9 ^ k25;
    unsigned long t208 = r10 ^ k26;
    unsigned long t209 = r11 ^ k41;
    unsigned long t210 = r12 ^ k54;
    unsigned long out137;
    unsigned long out138;
    unsigned long out139;
    unsigned long out140;
    s3(t205,t206,t207,t208,t209,t210, &out137,&out138,&out139,&out140);
    l23 = l23 ^ out137;
    l15 = l15 ^ out138;
    l29 = l29 ^ out139;
    l5 = l5 ^ out140;

    unsigned long t211 = r11 ^ k53;
    unsigned long t212 = r12 ^ k47;
    unsigned long t213 = r13 ^ k48;
    unsigned long t214 = r14 ^ k24;
    unsigned long t215 = r15 ^ k32;
    unsigned long t216 = r16 ^ k12;
    unsigned long out141;
    unsigned long out142;
    unsigned long out143;
    unsigned long out144;
    s4(t211,t212,t213,t214,t215,t216, &out141,&out142,&out143,&out144);
    l25 = l25 ^ out141;
    l19 = l19 ^ out142;
    l9 = l9 ^ out143;
    l0 = l0 ^ out144;

    unsigned long t217 = r15 ^ k30;
    unsigned long t218 = r16 ^ k21;
    unsigned long t219 = r17 ^ k15;
    unsigned long t220 = r18 ^ k2;
    unsigned long t221 = r19 ^ k45;
    unsigned long t222 = r20 ^ k42;
    unsigned long out145;
    unsigned long out146;
    unsigned long out147;
    unsigned long out148;
    s5(t217,t218,t219,t220,t221,t222, &out145,&out146,&out147,&out148);
    l7 = l7 ^ out145;
    l13 = l13 ^ out146;
    l24 = l24 ^ out147;
    l2 = l2 ^ out148;

    unsigned long t223 = r19 ^ k8;
    unsigned long t224 = r20 ^ k23;
    unsigned long t225 = r21 ^ k14;
    unsigned long t226 = r22 ^ k31;
    unsigned long t227 = r23 ^ k29;
    unsigned long t228 = r24 ^ k52;
    unsigned long out149;
    unsigned long out150;
    unsigned long out151;
    unsigned long out152;
    s6(t223,t224,t225,t226,t227,t228, &out149,&out150,&out151,&out152);
    l3 = l3 ^ out149;
    l28 = l28 ^ out150;
    l10 = l10 ^ out151;
    l18 = l18 ^ out152;

    unsigned long t229 = r23 ^ k51;
    unsigned long t230 = r24 ^ k0;
    unsigned long t231 = r25 ^ k16;
    unsigned long t232 = r26 ^ k49;
    unsigned long t233 = r27 ^ k36;
    unsigned long t234 = r28 ^ k28;
    unsigned long out153;
    unsigned long out154;
    unsigned long out155;
    unsigned long out156;
    s7(t229,t230,t231,t232,t233,t234, &out153,&out154,&out155,&out156);
    l31 = l31 ^ out153;
    l11 = l11 ^ out154;
    l21 = l21 ^ out155;
    l6 = l6 ^ out156;

    unsigned long t235 = r27 ^ k38;
    unsigned long t236 = r28 ^ k37;
    unsigned long t237 = r29 ^ k7;
    unsigned long t238 = r30 ^ k50;
    unsigned long t239 = r31 ^ k1;
    unsigned long t240 = r0 ^ k22;
    unsigned long out157;
    unsigned long out158;
    unsigned long out159;
    unsigned long out160;
    s8(t235,t236,t237,t238,t239,t240, &out157,&out158,&out159,&out160);
    l4 = l4 ^ out157;
    l26 = l26 ^ out158;
    l14 = l14 ^ out159;
    l20 = l20 ^ out160;

    unsigned long t241 = l31 ^ k53;
    unsigned long t242 = l0 ^ k17;
    unsigned long t243 = l1 ^ k32;
    unsigned long t244 = l2 ^ k41;
    unsigned long t245 = l3 ^ k19;
    unsigned long t246 = l4 ^ k47;
    unsigned long out161;
    unsigned long out162;
    unsigned long out163;
    unsigned long out164;
    s1(t241,t242,t243,t244,t245,t246, &out161,&out162,&out163,&out164);
    r8 = r8 ^ out161;
    r16 = r16 ^ out162;
    r22 = r22 ^ out163;
    r30 = r30 ^ out164;

    unsigned long t247 = l3 ^ k33;
    unsigned long t248 = l4 ^ k12;
    unsigned long t249 = l5 ^ k3;
    unsigned long t250 = l6 ^ k54;
    unsigned long t251 = l7 ^ k20;
    unsigned long t252 = l8 ^ k25;
    unsigned long out165;
    unsigned long out166;
    unsigned long out167;
    unsigned long out168;
    s2(t247,t248,t249,t250,t251,t252, &out165,&out166,&out167,&out168);
    r12 = r12 ^ out165;
    r27 = r27 ^ out166;
    r1 = r1 ^ out167;
    r17 = r17 ^ out168;

    unsigned long t253 = l7 ^ k34;
    unsigned long t254 = l8 ^ k6;
    unsigned long t255 = l9 ^ k39;
    unsigned long t256 = l10 ^ k40;
    unsigned long t257 = l11 ^ k55;
    unsigned long t258 = l12 ^ k11;
    unsigned long out169;
    unsigned long out170;
    unsigned long out171;
    unsigned long out172;
    s3(t253,t254,t255,t256,t257,t258, &out169,&out170,&out171,&out172);
    r23 = r23 ^ out169;
    r15 = r15 ^ out170;
    r29 = r29 ^ out171;
    r5 = r5 ^ out172;

    unsigned long t259 = l11 ^ k10;
    unsigned long t260 = l12 ^ k4;
    unsigned long t261 = l13 ^ k5;
    unsigned long t262 = l14 ^ k13;
    unsigned long t263 = l15 ^ k46;
    unsigned long t264 = l16 ^ k26;
    unsigned long out173;
    unsigned long out174;
    unsigned long out175;
    unsigned long out176;
    s4(t259,t260,t261,t262,t263,t264, &out173,&out174,&out175,&out176);
    r25 = r25 ^ out173;
    r19 = r19 ^ out174;
    r9 = r9 ^ out175;
    r0 = r0 ^ out176;

    unsigned long t265 = l15 ^ k44;
    unsigned long t266 = l16 ^ k35;
    unsigned long t267 = l17 ^ k29;
    unsigned long t268 = l18 ^ k16;
    unsigned long t269 = l19 ^ k0;
    unsigned long t270 = l20 ^ k1;
    unsigned long out177;
    unsigned long out178;
    unsigned long out179;
    unsigned long out180;
    s5(t265,t266,t267,t268,t269,t270, &out177,&out178,&out179,&out180);
    r7 = r7 ^ out177;
    r13 = r13 ^ out178;
    r24 = r24 ^ out179;
    r2 = r2 ^ out180;

    unsigned long t271 = l19 ^ k22;
    unsigned long t272 = l20 ^ k37;
    unsigned long t273 = l21 ^ k28;
    unsigned long t274 = l22 ^ k45;
    unsigned long t275 = l23 ^ k43;
    unsigned long t276 = l24 ^ k7;
    unsigned long out181;
    unsigned long out182;
    unsigned long out183;
    unsigned long out184;
    s6(t271,t272,t273,t274,t275,t276, &out181,&out182,&out183,&out184);
    r3 = r3 ^ out181;
    r28 = r28 ^ out182;
    r10 = r10 ^ out183;
    r18 = r18 ^ out184;

    unsigned long t277 = l23 ^ k38;
    unsigned long t278 = l24 ^ k14;
    unsigned long t279 = l25 ^ k30;
    unsigned long t280 = l26 ^ k8;
    unsigned long t281 = l27 ^ k50;
    unsigned long t282 = l28 ^ k42;
    unsigned long out185;
    unsigned long out186;
    unsigned long out187;
    unsigned long out188;
    s7(t277,t278,t279,t280,t281,t282, &out185,&out186,&out187,&out188);
    r31 = r31 ^ out185;
    r11 = r11 ^ out186;
    r21 = r21 ^ out187;
    r6 = r6 ^ out188;

    unsigned long t283 = l27 ^ k52;
    unsigned long t284 = l28 ^ k51;
    unsigned long t285 = l29 ^ k21;
    unsigned long t286 = l30 ^ k9;
    unsigned long t287 = l31 ^ k15;
    unsigned long t288 = l0 ^ k36;
    unsigned long out189;
    unsigned long out190;
    unsigned long out191;
    unsigned long out192;
    s8(t283,t284,t285,t286,t287,t288, &out189,&out190,&out191,&out192);
    r4 = r4 ^ out189;
    r26 = r26 ^ out190;
    r14 = r14 ^ out191;
    r20 = r20 ^ out192;

    unsigned long t289 = r31 ^ k10;
    unsigned long t290 = r0 ^ k6;
    unsigned long t291 = r1 ^ k46;
    unsigned long t292 = r2 ^ k55;
    unsigned long t293 = r3 ^ k33;
    unsigned long t294 = r4 ^ k4;
    unsigned long out193;
    unsigned long out194;
    unsigned long out195;
    unsigned long out196;
    s1(t289,t290,t291,t292,t293,t294, &out193,&out194,&out195,&out196);
    l8 = l8 ^ out193;
    l16 = l16 ^ out194;
    l22 = l22 ^ out195;
    l30 = l30 ^ out196;

    unsigned long t295 = r3 ^ k47;
    unsigned long t296 = r4 ^ k26;
    unsigned long t297 = r5 ^ k17;
    unsigned long t298 = r6 ^ k11;
    unsigned long t299 = r7 ^ k34;
    unsigned long t300 = r8 ^ k39;
    unsigned long out197;
    unsigned long out198;
    unsigned long out199;
    unsigned long out200;
    s2(t295,t296,t297,t298,t299,t300, &out197,&out198,&out199,&out200);
    l12 = l12 ^ out197;
    l27 = l27 ^ out198;
    l1 = l1 ^ out199;
    l17 = l17 ^ out200;

    unsigned long t301 = r7 ^ k48;
    unsigned long t302 = r8 ^ k20;
    unsigned long t303 = r9 ^ k53;
    unsigned long t304 = r10 ^ k54;
    unsigned long t305 = r11 ^ k12;
    unsigned long t306 = r12 ^ k25;
    unsigned long out201;
    unsigned long out202;
    unsigned long out203;
    unsigned long out204;
    s3(t301,t302,t303,t304,t305,t306, &out201,&out202,&out203,&out204);
    l23 = l23 ^ out201;
    l15 = l15 ^ out202;
    l29 = l29 ^ out203;
    l5 = l5 ^ out204;

    unsigned long t307 = r11 ^ k24;
    unsigned long t308 = r12 ^ k18;
    unsigned long t309 = r13 ^ k19;
    unsigned long t310 = r14 ^ k27;
    unsigned long t311 = r15 ^ k3;
    unsigned long t312 = r16 ^ k40;
    unsigned long out205;
    unsigned long out206;
    unsigned long out207;
    unsigned long out208;
    s4(t307,t308,t309,t310,t311,t312, &out205,&out206,&out207,&out208);
    l25 = l25 ^ out205;
    l19 = l19 ^ out206;
    l9 = l9 ^ out207;
    l0 = l0 ^ out208;

    unsigned long t313 = r15 ^ k31;
    unsigned long t314 = r16 ^ k49;
    unsigned long t315 = r17 ^ k43;
    unsigned long t316 = r18 ^ k30;
    unsigned long t317 = r19 ^ k14;
    unsigned long t318 = r20 ^ k15;
    unsigned long out209;
    unsigned long out210;
    unsigned long out211;
    unsigned long out212;
    s5(t313,t314,t315,t316,t317,t318, &out209,&out210,&out211,&out212);
    l7 = l7 ^ out209;
    l13 = l13 ^ out210;
    l24 = l24 ^ out211;
    l2 = l2 ^ out212;

    unsigned long t319 = r19 ^ k36;
    unsigned long t320 = r20 ^ k51;
    unsigned long t321 = r21 ^ k42;
    unsigned long t322 = r22 ^ k0;
    unsigned long t323 = r23 ^ k2;
    unsigned long t324 = r24 ^ k21;
    unsigned long out213;
    unsigned long out214;
    unsigned long out215;
    unsigned long out216;
    s6(t319,t320,t321,t322,t323,t324, &out213,&out214,&out215,&out216);
    l3 = l3 ^ out213;
    l28 = l28 ^ out214;
    l10 = l10 ^ out215;
    l18 = l18 ^ out216;

    unsigned long t325 = r23 ^ k52;
    unsigned long t326 = r24 ^ k28;
    unsigned long t327 = r25 ^ k44;
    unsigned long t328 = r26 ^ k22;
    unsigned long t329 = r27 ^ k9;
    unsigned long t330 = r28 ^ k1;
    unsigned long out217;
    unsigned long out218;
    unsigned long out219;
    unsigned long out220;
    s7(t325,t326,t327,t328,t329,t330, &out217,&out218,&out219,&out220);
    l31 = l31 ^ out217;
    l11 = l11 ^ out218;
    l21 = l21 ^ out219;
    l6 = l6 ^ out220;

    unsigned long t331 = r27 ^ k7;
    unsigned long t332 = r28 ^ k38;
    unsigned long t333 = r29 ^ k35;
    unsigned long t334 = r30 ^ k23;
    unsigned long t335 = r31 ^ k29;
    unsigned long t336 = r0 ^ k50;
    unsigned long out221;
    unsigned long out222;
    unsigned long out223;
    unsigned long out224;
    s8(t331,t332,t333,t334,t335,t336, &out221,&out222,&out223,&out224);
    l4 = l4 ^ out221;
    l26 = l26 ^ out222;
    l14 = l14 ^ out223;
    l20 = l20 ^ out224;

    unsigned long t337 = l31 ^ k24;
    unsigned long t338 = l0 ^ k20;
    unsigned long t339 = l1 ^ k3;
    unsigned long t340 = l2 ^ k12;
    unsigned long t341 = l3 ^ k47;
    unsigned long t342 = l4 ^ k18;
    unsigned long out225;
    unsigned long out226;
    unsigned long out227;
    unsigned long out228;
    s1(t337,t338,t339,t340,t341,t342, &out225,&out226,&out227,&out228);
    r8 = r8 ^ out225;
    r16 = r16 ^ out226;
    r22 = r22 ^ out227;
    r30 = r30 ^ out228;

    unsigned long t343 = l3 ^ k4;
    unsigned long t344 = l4 ^ k40;
    unsigned long t345 = l5 ^ k6;
    unsigned long t346 = l6 ^ k25;
    unsigned long t347 = l7 ^ k48;
    unsigned long t348 = l8 ^ k53;
    unsigned long out229;
    unsigned long out230;
    unsigned long out231;
    unsigned long out232;
    s2(t343,t344,t345,t346,t347,t348, &out229,&out230,&out231,&out232);
    r12 = r12 ^ out229;
    r27 = r27 ^ out230;
    r1 = r1 ^ out231;
    r17 = r17 ^ out232;

    unsigned long t349 = l7 ^ k5;
    unsigned long t350 = l8 ^ k34;
    unsigned long t351 = l9 ^ k10;
    unsigned long t352 = l10 ^ k11;
    unsigned long t353 = l11 ^ k26;
    unsigned long t354 = l12 ^ k39;
    unsigned long out233;
    unsigned long out234;
    unsigned long out235;
    unsigned long out236;
    s3(t349,t350,t351,t352,t353,t354, &out233,&out234,&out235,&out236);
    r23 = r23 ^ out233;
    r15 = r15 ^ out234;
    r29 = r29 ^ out235;
    r5 = r5 ^ out236;

    unsigned long t355 = l11 ^ k13;
    unsigned long t356 = l12 ^ k32;
    unsigned long t357 = l13 ^ k33;
    unsigned long t358 = l14 ^ k41;
    unsigned long t359 = l15 ^ k17;
    unsigned long t360 = l16 ^ k54;
    unsigned long out237;
    unsigned long out238;
    unsigned long out239;
    unsigned long out240;
    s4(t355,t356,t357,t358,t359,t360, &out237,&out238,&out239,&out240);
    r25 = r25 ^ out237;
    r19 = r19 ^ out238;
    r9 = r9 ^ out239;
    r0 = r0 ^ out240;

    unsigned long t361 = l15 ^ k45;
    unsigned long t362 = l16 ^ k8;
    unsigned long t363 = l17 ^ k2;
    unsigned long t364 = l18 ^ k44;
    unsigned long t365 = l19 ^ k28;
    unsigned long t366 = l20 ^ k29;
    unsigned long out241;
    unsigned long out242;
    unsigned long out243;
    unsigned long out244;
    s5(t361,t362,t363,t364,t365,t366, &out241,&out242,&out243,&out244);
    r7 = r7 ^ out241;
    r13 = r13 ^ out242;
    r24 = r24 ^ out243;
    r2 = r2 ^ out244;

    unsigned long t367 = l19 ^ k50;
    unsigned long t368 = l20 ^ k38;
    unsigned long t369 = l21 ^ k1;
    unsigned long t370 = l22 ^ k14;
    unsigned long t371 = l23 ^ k16;
    unsigned long t372 = l24 ^ k35;
    unsigned long out245;
    unsigned long out246;
    unsigned long out247;
    unsigned long out248;
    s6(t367,t368,t369,t370,t371,t372, &out245,&out246,&out247,&out248);
    r3 = r3 ^ out245;
    r28 = r28 ^ out246;
    r10 = r10 ^ out247;
    r18 = r18 ^ out248;

    unsigned long t373 = l23 ^ k7;
    unsigned long t374 = l24 ^ k42;
    unsigned long t375 = l25 ^ k31;
    unsigned long t376 = l26 ^ k36;
    unsigned long t377 = l27 ^ k23;
    unsigned long t378 = l28 ^ k15;
    unsigned long out249;
    unsigned long out250;
    unsigned long out251;
    unsigned long out252;
    s7(t373,t374,t375,t376,t377,t378, &out249,&out250,&out251,&out252);
    r31 = r31 ^ out249;
    r11 = r11 ^ out250;
    r21 = r21 ^ out251;
    r6 = r6 ^ out252;

    unsigned long t379 = l27 ^ k21;
    unsigned long t380 = l28 ^ k52;
    unsigned long t381 = l29 ^ k49;
    unsigned long t382 = l30 ^ k37;
    unsigned long t383 = l31 ^ k43;
    unsigned long t384 = l0 ^ k9;
    unsigned long out253;
    unsigned long out254;
    unsigned long out255;
    unsigned long out256;
    s8(t379,t380,t381,t382,t383,t384, &out253,&out254,&out255,&out256);
    r4 = r4 ^ out253;
    r26 = r26 ^ out254;
    r14 = r14 ^ out255;
    r20 = r20 ^ out256;

    unsigned long t385 = r31 ^ k6;
    unsigned long t386 = r0 ^ k27;
    unsigned long t387 = r1 ^ k10;
    unsigned long t388 = r2 ^ k19;
    unsigned long t389 = r3 ^ k54;
    unsigned long t390 = r4 ^ k25;
    unsigned long out257;
    unsigned long out258;
    unsigned long out259;
    unsigned long out260;
    s1(t385,t386,t387,t388,t389,t390, &out257,&out258,&out259,&out260);
    l8 = l8 ^ out257;
    l16 = l16 ^ out258;
    l22 = l22 ^ out259;
    l30 = l30 ^ out260;

    unsigned long t391 = r3 ^ k11;
    unsigned long t392 = r4 ^ k47;
    unsigned long t393 = r5 ^ k13;
    unsigned long t394 = r6 ^ k32;
    unsigned long t395 = r7 ^ k55;
    unsigned long t396 = r8 ^ k3;
    unsigned long out261;
    unsigned long out262;
    unsigned long out263;
    unsigned long out264;
    s2(t391,t392,t393,t394,t395,t396, &out261,&out262,&out263,&out264);
    l12 = l12 ^ out261;
    l27 = l27 ^ out262;
    l1 = l1 ^ out263;
    l17 = l17 ^ out264;

    unsigned long t397 = r7 ^ k12;
    unsigned long t398 = r8 ^ k41;
    unsigned long t399 = r9 ^ k17;
    unsigned long t400 = r10 ^ k18;
    unsigned long t401 = r11 ^ k33;
    unsigned long t402 = r12 ^ k46;
    unsigned long out265;
    unsigned long out266;
    unsigned long out267;
    unsigned long out268;
    s3(t397,t398,t399,t400,t401,t402, &out265,&out266,&out267,&out268);
    l23 = l23 ^ out265;
    l15 = l15 ^ out266;
    l29 = l29 ^ out267;
    l5 = l5 ^ out268;

    unsigned long t403 = r11 ^ k20;
    unsigned long t404 = r12 ^ k39;
    unsigned long t405 = r13 ^ k40;
    unsigned long t406 = r14 ^ k48;
    unsigned long t407 = r15 ^ k24;
    unsigned long t408 = r16 ^ k4;
    unsigned long out269;
    unsigned long out270;
    unsigned long out271;
    unsigned long out272;
    s4(t403,t404,t405,t406,t407,t408, &out269,&out270,&out271,&out272);
    l25 = l25 ^ out269;
    l19 = l19 ^ out270;
    l9 = l9 ^ out271;
    l0 = l0 ^ out272;

    unsigned long t409 = r15 ^ k52;
    unsigned long t410 = r16 ^ k15;
    unsigned long t411 = r17 ^ k9;
    unsigned long t412 = r18 ^ k51;
    unsigned long t413 = r19 ^ k35;
    unsigned long t414 = r20 ^ k36;
    unsigned long out273;
    unsigned long out274;
    unsigned long out275;
    unsigned long out276;
    s5(t409,t410,t411,t412,t413,t414, &out273,&out274,&out275,&out276);
    l7 = l7 ^ out273;
    l13 = l13 ^ out274;
    l24 = l24 ^ out275;
    l2 = l2 ^ out276;

    unsigned long t415 = r19 ^ k2;
    unsigned long t416 = r20 ^ k45;
    unsigned long t417 = r21 ^ k8;
    unsigned long t418 = r22 ^ k21;
    unsigned long t419 = r23 ^ k23;
    unsigned long t420 = r24 ^ k42;
    unsigned long out277;
    unsigned long out278;
    unsigned long out279;
    unsigned long out280;
    s6(t415,t416,t417,t418,t419,t420, &out277,&out278,&out279,&out280);
    l3 = l3 ^ out277;
    l28 = l28 ^ out278;
    l10 = l10 ^ out279;
    l18 = l18 ^ out280;

    unsigned long t421 = r23 ^ k14;
    unsigned long t422 = r24 ^ k49;
    unsigned long t423 = r25 ^ k38;
    unsigned long t424 = r26 ^ k43;
    unsigned long t425 = r27 ^ k30;
    unsigned long t426 = r28 ^ k22;
    unsigned long out281;
    unsigned long out282;
    unsigned long out283;
    unsigned long out284;
    s7(t421,t422,t423,t424,t425,t426, &out281,&out282,&out283,&out284);
    l31 = l31 ^ out281;
    l11 = l11 ^ out282;
    l21 = l21 ^ out283;
    l6 = l6 ^ out284;

    unsigned long t427 = r27 ^ k28;
    unsigned long t428 = r28 ^ k0;
    unsigned long t429 = r29 ^ k1;
    unsigned long t430 = r30 ^ k44;
    unsigned long t431 = r31 ^ k50;
    unsigned long t432 = r0 ^ k16;
    unsigned long out285;
    unsigned long out286;
    unsigned long out287;
    unsigned long out288;
    s8(t427,t428,t429,t430,t431,t432, &out285,&out286,&out287,&out288);
    l4 = l4 ^ out285;
    l26 = l26 ^ out286;
    l14 = l14 ^ out287;
    l20 = l20 ^ out288;

    unsigned long t433 = l31 ^ k20;
    unsigned long t434 = l0 ^ k41;
    unsigned long t435 = l1 ^ k24;
    unsigned long t436 = l2 ^ k33;
    unsigned long t437 = l3 ^ k11;
    unsigned long t438 = l4 ^ k39;
    unsigned long out289;
    unsigned long out290;
    unsigned long out291;
    unsigned long out292;
    s1(t433,t434,t435,t436,t437,t438, &out289,&out290,&out291,&out292);
    r8 = r8 ^ out289;
    r16 = r16 ^ out290;
    r22 = r22 ^ out291;
    r30 = r30 ^ out292;

    unsigned long t439 = l3 ^ k25;
    unsigned long t440 = l4 ^ k4;
    unsigned long t441 = l5 ^ k27;
    unsigned long t442 = l6 ^ k46;
    unsigned long t443 = l7 ^ k12;
    unsigned long t444 = l8 ^ k17;
    unsigned long out293;
    unsigned long out294;
    unsigned long out295;
    unsigned long out296;
    s2(t439,t440,t441,t442,t443,t444, &out293,&out294,&out295,&out296);
    r12 = r12 ^ out293;
    r27 = r27 ^ out294;
    r1 = r1 ^ out295;
    r17 = r17 ^ out296;

    unsigned long t445 = l7 ^ k26;
    unsigned long t446 = l8 ^ k55;
    unsigned long t447 = l9 ^ k6;
    unsigned long t448 = l10 ^ k32;
    unsigned long t449 = l11 ^ k47;
    unsigned long t450 = l12 ^ k3;
    unsigned long out297;
    unsigned long out298;
    unsigned long out299;
    unsigned long out300;
    s3(t445,t446,t447,t448,t449,t450, &out297,&out298,&out299,&out300);
    r23 = r23 ^ out297;
    r15 = r15 ^ out298;
    r29 = r29 ^ out299;
    r5 = r5 ^ out300;

    unsigned long t451 = l11 ^ k34;
    unsigned long t452 = l12 ^ k53;
    unsigned long t453 = l13 ^ k54;
    unsigned long t454 = l14 ^ k5;
    unsigned long t455 = l15 ^ k13;
    unsigned long t456 = l16 ^ k18;
    unsigned long out301;
    unsigned long out302;
    unsigned long out303;
    unsigned long out304;
    s4(t451,t452,t453,t454,t455,t456, &out301,&out302,&out303,&out304);
    r25 = r25 ^ out301;
    r19 = r19 ^ out302;
    r9 = r9 ^ out303;
    r0 = r0 ^ out304;

    unsigned long t457 = l15 ^ k7;
    unsigned long t458 = l16 ^ k29;
    unsigned long t459 = l17 ^ k23;
    unsigned long t460 = l18 ^ k38;
    unsigned long t461 = l19 ^ k49;
    unsigned long t462 = l20 ^ k50;
    unsigned long out305;
    unsigned long out306;
    unsigned long out307;
    unsigned long out308;
    s5(t457,t458,t459,t460,t461,t462, &out305,&out306,&out307,&out308);
    r7 = r7 ^ out305;
    r13 = r13 ^ out306;
    r24 = r24 ^ out307;
    r2 = r2 ^ out308;

    unsigned long t463 = l19 ^ k16;
    unsigned long t464 = l20 ^ k0;
    unsigned long t465 = l21 ^ k22;
    unsigned long t466 = l22 ^ k35;
    unsigned long t467 = l23 ^ k37;
    unsigned long t468 = l24 ^ k1;
    unsigned long out309;
    unsigned long out310;
    unsigned long out311;
    unsigned long out312;
    s6(t463,t464,t465,t466,t467,t468, &out309,&out310,&out311,&out312);
    r3 = r3 ^ out309;
    r28 = r28 ^ out310;
    r10 = r10 ^ out311;
    r18 = r18 ^ out312;

    unsigned long t469 = l23 ^ k28;
    unsigned long t470 = l24 ^ k8;
    unsigned long t471 = l25 ^ k52;
    unsigned long t472 = l26 ^ k2;
    unsigned long t473 = l27 ^ k44;
    unsigned long t474 = l28 ^ k36;
    unsigned long out313;
    unsigned long out314;
    unsigned long out315;
    unsigned long out316;
    s7(t469,t470,t471,t472,t473,t474, &out313,&out314,&out315,&out316);
    r31 = r31 ^ out313;
    r11 = r11 ^ out314;
    r21 = r21 ^ out315;
    r6 = r6 ^ out316;

    unsigned long t475 = l27 ^ k42;
    unsigned long t476 = l28 ^ k14;
    unsigned long t477 = l29 ^ k15;
    unsigned long t478 = l30 ^ k31;
    unsigned long t479 = l31 ^ k9;
    unsigned long t480 = l0 ^ k30;
    unsigned long out317;
    unsigned long out318;
    unsigned long out319;
    unsigned long out320;
    s8(t475,t476,t477,t478,t479,t480, &out317,&out318,&out319,&out320);
    r4 = r4 ^ out317;
    r26 = r26 ^ out318;
    r14 = r14 ^ out319;
    r20 = r20 ^ out320;

    unsigned long t481 = r31 ^ k34;
    unsigned long t482 = r0 ^ k55;
    unsigned long t483 = r1 ^ k13;
    unsigned long t484 = r2 ^ k47;
    unsigned long t485 = r3 ^ k25;
    unsigned long t486 = r4 ^ k53;
    unsigned long out321;
    unsigned long out322;
    unsigned long out323;
    unsigned long out324;
    s1(t481,t482,t483,t484,t485,t486, &out321,&out322,&out323,&out324);
    l8 = l8 ^ out321;
    l16 = l16 ^ out322;
    l22 = l22 ^ out323;
    l30 = l30 ^ out324;

    unsigned long t487 = r3 ^ k39;
    unsigned long t488 = r4 ^ k18;
    unsigned long t489 = r5 ^ k41;
    unsigned long t490 = r6 ^ k3;
    unsigned long t491 = r7 ^ k26;
    unsigned long t492 = r8 ^ k6;
    unsigned long out325;
    unsigned long out326;
    unsigned long out327;
    unsigned long out328;
    s2(t487,t488,t489,t490,t491,t492, &out325,&out326,&out327,&out328);
    l12 = l12 ^ out325;
    l27 = l27 ^ out326;
    l1 = l1 ^ out327;
    l17 = l17 ^ out328;

    unsigned long t493 = r7 ^ k40;
    unsigned long t494 = r8 ^ k12;
    unsigned long t495 = r9 ^ k20;
    unsigned long t496 = r10 ^ k46;
    unsigned long t497 = r11 ^ k4;
    unsigned long t498 = r12 ^ k17;
    unsigned long out329;
    unsigned long out330;
    unsigned long out331;
    unsigned long out332;
    s3(t493,t494,t495,t496,t497,t498, &out329,&out330,&out331,&out332);
    l23 = l23 ^ out329;
    l15 = l15 ^ out330;
    l29 = l29 ^ out331;
    l5 = l5 ^ out332;

    unsigned long t499 = r11 ^ k48;
    unsigned long t500 = r12 ^ k10;
    unsigned long t501 = r13 ^ k11;
    unsigned long t502 = r14 ^ k19;
    unsigned long t503 = r15 ^ k27;
    unsigned long t504 = r16 ^ k32;
    unsigned long out333;
    unsigned long out334;
    unsigned long out335;
    unsigned long out336;
    s4(t499,t500,t501,t502,t503,t504, &out333,&out334,&out335,&out336);
    l25 = l25 ^ out333;
    l19 = l19 ^ out334;
    l9 = l9 ^ out335;
    l0 = l0 ^ out336;

    unsigned long t505 = r15 ^ k21;
    unsigned long t506 = r16 ^ k43;
    unsigned long t507 = r17 ^ k37;
    unsigned long t508 = r18 ^ k52;
    unsigned long t509 = r19 ^ k8;
    unsigned long t510 = r20 ^ k9;
    unsigned long out337;
    unsigned long out338;
    unsigned long out339;
    unsigned long out340;
    s5(t505,t506,t507,t508,t509,t510, &out337,&out338,&out339,&out340);
    l7 = l7 ^ out337;
    l13 = l13 ^ out338;
    l24 = l24 ^ out339;
    l2 = l2 ^ out340;

    unsigned long t511 = r19 ^ k30;
    unsigned long t512 = r20 ^ k14;
    unsigned long t513 = r21 ^ k36;
    unsigned long t514 = r22 ^ k49;
    unsigned long t515 = r23 ^ k51;
    unsigned long t516 = r24 ^ k15;
    unsigned long out341;
    unsigned long out342;
    unsigned long out343;
    unsigned long out344;
    s6(t511,t512,t513,t514,t515,t516, &out341,&out342,&out343,&out344);
    l3 = l3 ^ out341;
    l28 = l28 ^ out342;
    l10 = l10 ^ out343;
    l18 = l18 ^ out344;

    unsigned long t517 = r23 ^ k42;
    unsigned long t518 = r24 ^ k22;
    unsigned long t519 = r25 ^ k7;
    unsigned long t520 = r26 ^ k16;
    unsigned long t521 = r27 ^ k31;
    unsigned long t522 = r28 ^ k50;
    unsigned long out345;
    unsigned long out346;
    unsigned long out347;
    unsigned long out348;
    s7(t517,t518,t519,t520,t521,t522, &out345,&out346,&out347,&out348);
    l31 = l31 ^ out345;
    l11 = l11 ^ out346;
    l21 = l21 ^ out347;
    l6 = l6 ^ out348;

    unsigned long t523 = r27 ^ k1;
    unsigned long t524 = r28 ^ k28;
    unsigned long t525 = r29 ^ k29;
    unsigned long t526 = r30 ^ k45;
    unsigned long t527 = r31 ^ k23;
    unsigned long t528 = r0 ^ k44;
    unsigned long out349;
    unsigned long out350;
    unsigned long out351;
    unsigned long out352;
    s8(t523,t524,t525,t526,t527,t528, &out349,&out350,&out351,&out352);
    l4 = l4 ^ out349;
    l26 = l26 ^ out350;
    l14 = l14 ^ out351;
    l20 = l20 ^ out352;

    unsigned long t529 = l31 ^ k48;
    unsigned long t530 = l0 ^ k12;
    unsigned long t531 = l1 ^ k27;
    unsigned long t532 = l2 ^ k4;
    unsigned long t533 = l3 ^ k39;
    unsigned long t534 = l4 ^ k10;
    unsigned long out353;
    unsigned long out354;
    unsigned long out355;
    unsigned long out356;
    s1(t529,t530,t531,t532,t533,t534, &out353,&out354,&out355,&out356);
    r8 = r8 ^ out353;
    r16 = r16 ^ out354;
    r22 = r22 ^ out355;
    r30 = r30 ^ out356;

    unsigned long t535 = l3 ^ k53;
    unsigned long t536 = l4 ^ k32;
    unsigned long t537 = l5 ^ k55;
    unsigned long t538 = l6 ^ k17;
    unsigned long t539 = l7 ^ k40;
    unsigned long t540 = l8 ^ k20;
    unsigned long out357;
    unsigned long out358;
    unsigned long out359;
    unsigned long out360;
    s2(t535,t536,t537,t538,t539,t540, &out357,&out358,&out359,&out360);
    r12 = r12 ^ out357;
    r27 = r27 ^ out358;
    r1 = r1 ^ out359;
    r17 = r17 ^ out360;

    unsigned long t541 = l7 ^ k54;
    unsigned long t542 = l8 ^ k26;
    unsigned long t543 = l9 ^ k34;
    unsigned long t544 = l10 ^ k3;
    unsigned long t545 = l11 ^ k18;
    unsigned long t546 = l12 ^ k6;
    unsigned long out361;
    unsigned long out362;
    unsigned long out363;
    unsigned long out364;
    s3(t541,t542,t543,t544,t545,t546, &out361,&out362,&out363,&out364);
    r23 = r23 ^ out361;
    r15 = r15 ^ out362;
    r29 = r29 ^ out363;
    r5 = r5 ^ out364;

    unsigned long t547 = l11 ^ k5;
    unsigned long t548 = l12 ^ k24;
    unsigned long t549 = l13 ^ k25;
    unsigned long t550 = l14 ^ k33;
    unsigned long t551 = l15 ^ k41;
    unsigned long t552 = l16 ^ k46;
    unsigned long out365;
    unsigned long out366;
    unsigned long out367;
    unsigned long out368;
    s4(t547,t548,t549,t550,t551,t552, &out365,&out366,&out367,&out368);
    r25 = r25 ^ out365;
    r19 = r19 ^ out366;
    r9 = r9 ^ out367;
    r0 = r0 ^ out368;

    unsigned long t553 = l15 ^ k35;
    unsigned long t554 = l16 ^ k2;
    unsigned long t555 = l17 ^ k51;
    unsigned long t556 = l18 ^ k7;
    unsigned long t557 = l19 ^ k22;
    unsigned long t558 = l20 ^ k23;
    unsigned long out369;
    unsigned long out370;
    unsigned long out371;
    unsigned long out372;
    s5(t553,t554,t555,t556,t557,t558, &out369,&out370,&out371,&out372);
    r7 = r7 ^ out369;
    r13 = r13 ^ out370;
    r24 = r24 ^ out371;
    r2 = r2 ^ out372;

    unsigned long t559 = l19 ^ k44;
    unsigned long t560 = l20 ^ k28;
    unsigned long t561 = l21 ^ k50;
    unsigned long t562 = l22 ^ k8;
    unsigned long t563 = l23 ^ k38;
    unsigned long t564 = l24 ^ k29;
    unsigned long out373;
    unsigned long out374;
    unsigned long out375;
    unsigned long out376;
    s6(t559,t560,t561,t562,t563,t564, &out373,&out374,&out375,&out376);
    r3 = r3 ^ out373;
    r28 = r28 ^ out374;
    r10 = r10 ^ out375;
    r18 = r18 ^ out376;

    unsigned long t565 = l23 ^ k1;
    unsigned long t566 = l24 ^ k36;
    unsigned long t567 = l25 ^ k21;
    unsigned long t568 = l26 ^ k30;
    unsigned long t569 = l27 ^ k45;
    unsigned long t570 = l28 ^ k9;
    unsigned long out377;
    unsigned long out378;
    unsigned long out379;
    unsigned long out380;
    s7(t565,t566,t567,t568,t569,t570, &out377,&out378,&out379,&out380);
    r31 = r31 ^ out377;
    r11 = r11 ^ out378;
    r21 = r21 ^ out379;
    r6 = r6 ^ out380;

    unsigned long t571 = l27 ^ k15;
    unsigned long t572 = l28 ^ k42;
    unsigned long t573 = l29 ^ k43;
    unsigned long t574 = l30 ^ k0;
    unsigned long t575 = l31 ^ k37;
    unsigned long t576 = l0 ^ k31;
    unsigned long out381;
    unsigned long out382;
    unsigned long out383;
    unsigned long out384;
    s8(t571,t572,t573,t574,t575,t576, &out381,&out382,&out383,&out384);
    r4 = r4 ^ out381;
    r26 = r26 ^ out382;
    r14 = r14 ^ out383;
    r20 = r20 ^ out384;

    unsigned long t577 = r31 ^ k5;
    unsigned long t578 = r0 ^ k26;
    unsigned long t579 = r1 ^ k41;
    unsigned long t580 = r2 ^ k18;
    unsigned long t581 = r3 ^ k53;
    unsigned long t582 = r4 ^ k24;
    unsigned long out385;
    unsigned long out386;
    unsigned long out387;
    unsigned long out388;
    s1(t577,t578,t579,t580,t581,t582, &out385,&out386,&out387,&out388);
    l8 = l8 ^ out385;
    l16 = l16 ^ out386;
    l22 = l22 ^ out387;
    l30 = l30 ^ out388;

    unsigned long t583 = r3 ^ k10;
    unsigned long t584 = r4 ^ k46;
    unsigned long t585 = r5 ^ k12;
    unsigned long t586 = r6 ^ k6;
    unsigned long t587 = r7 ^ k54;
    unsigned long t588 = r8 ^ k34;
    unsigned long out389;
    unsigned long out390;
    unsigned long out391;
    unsigned long out392;
    s2(t583,t584,t585,t586,t587,t588, &out389,&out390,&out391,&out392);
    l12 = l12 ^ out389;
    l27 = l27 ^ out390;
    l1 = l1 ^ out391;
    l17 = l17 ^ out392;

    unsigned long t589 = r7 ^ k11;
    unsigned long t590 = r8 ^ k40;
    unsigned long t591 = r9 ^ k48;
    unsigned long t592 = r10 ^ k17;
    unsigned long t593 = r11 ^ k32;
    unsigned long t594 = r12 ^ k20;
    unsigned long out393;
    unsigned long out394;
    unsigned long out395;
    unsigned long out396;
    s3(t589,t590,t591,t592,t593,t594, &out393,&out394,&out395,&out396);
    l23 = l23 ^ out393;
    l15 = l15 ^ out394;
    l29 = l29 ^ out395;
    l5 = l5 ^ out396;

    unsigned long t595 = r11 ^ k19;
    unsigned long t596 = r12 ^ k13;
    unsigned long t597 = r13 ^ k39;
    unsigned long t598 = r14 ^ k47;
    unsigned long t599 = r15 ^ k55;
    unsigned long t600 = r16 ^ k3;
    unsigned long out397;
    unsigned long out398;
    unsigned long out399;
    unsigned long out400;
    s4(t595,t596,t597,t598,t599,t600, &out397,&out398,&out399,&out400);
    l25 = l25 ^ out397;
    l19 = l19 ^ out398;
    l9 = l9 ^ out399;
    l0 = l0 ^ out400;

    unsigned long t601 = r15 ^ k49;
    unsigned long t602 = r16 ^ k16;
    unsigned long t603 = r17 ^ k38;
    unsigned long t604 = r18 ^ k21;
    unsigned long t605 = r19 ^ k36;
    unsigned long t606 = r20 ^ k37;
    unsigned long out401;
    unsigned long out402;
    unsigned long out403;
    unsigned long out404;
    s5(t601,t602,t603,t604,t605,t606, &out401,&out402,&out403,&out404);
    l7 = l7 ^ out401;
    l13 = l13 ^ out402;
    l24 = l24 ^ out403;
    l2 = l2 ^ out404;

    unsigned long t607 = r19 ^ k31;
    unsigned long t608 = r20 ^ k42;
    unsigned long t609 = r21 ^ k9;
    unsigned long t610 = r22 ^ k22;
    unsigned long t611 = r23 ^ k52;
    unsigned long t612 = r24 ^ k43;
    unsigned long out405;
    unsigned long out406;
    unsigned long out407;
    unsigned long out408;
    s6(t607,t608,t609,t610,t611,t612, &out405,&out406,&out407,&out408);
    l3 = l3 ^ out405;
    l28 = l28 ^ out406;
    l10 = l10 ^ out407;
    l18 = l18 ^ out408;

    unsigned long t613 = r23 ^ k15;
    unsigned long t614 = r24 ^ k50;
    unsigned long t615 = r25 ^ k35;
    unsigned long t616 = r26 ^ k44;
    unsigned long t617 = r27 ^ k0;
    unsigned long t618 = r28 ^ k23;
    unsigned long out409;
    unsigned long out410;
    unsigned long out411;
    unsigned long out412;
    s7(t613,t614,t615,t616,t617,t618, &out409,&out410,&out411,&out412);
    l31 = l31 ^ out409;
    l11 = l11 ^ out410;
    l21 = l21 ^ out411;
    l6 = l6 ^ out412;

    unsigned long t619 = r27 ^ k29;
    unsigned long t620 = r28 ^ k1;
    unsigned long t621 = r29 ^ k2;
    unsigned long t622 = r30 ^ k14;
    unsigned long t623 = r31 ^ k51;
    unsigned long t624 = r0 ^ k45;
    unsigned long out413;
    unsigned long out414;
    unsigned long out415;
    unsigned long out416;
    s8(t619,t620,t621,t622,t623,t624, &out413,&out414,&out415,&out416);
    l4 = l4 ^ out413;
    l26 = l26 ^ out414;
    l14 = l14 ^ out415;
    l20 = l20 ^ out416;

    unsigned long t625 = l31 ^ k19;
    unsigned long t626 = l0 ^ k40;
    unsigned long t627 = l1 ^ k55;
    unsigned long t628 = l2 ^ k32;
    unsigned long t629 = l3 ^ k10;
    unsigned long t630 = l4 ^ k13;
    unsigned long out417;
    unsigned long out418;
    unsigned long out419;
    unsigned long out420;
    s1(t625,t626,t627,t628,t629,t630, &out417,&out418,&out419,&out420);
    r8 = r8 ^ out417;
    r16 = r16 ^ out418;
    r22 = r22 ^ out419;
    r30 = r30 ^ out420;

    unsigned long t631 = l3 ^ k24;
    unsigned long t632 = l4 ^ k3;
    unsigned long t633 = l5 ^ k26;
    unsigned long t634 = l6 ^ k20;
    unsigned long t635 = l7 ^ k11;
    unsigned long t636 = l8 ^ k48;
    unsigned long out421;
    unsigned long out422;
    unsigned long out423;
    unsigned long out424;
    s2(t631,t632,t633,t634,t635,t636, &out421,&out422,&out423,&out424);
    r12 = r12 ^ out421;
    r27 = r27 ^ out422;
    r1 = r1 ^ out423;
    r17 = r17 ^ out424;

    unsigned long t637 = l7 ^ k25;
    unsigned long t638 = l8 ^ k54;
    unsigned long t639 = l9 ^ k5;
    unsigned long t640 = l10 ^ k6;
    unsigned long t641 = l11 ^ k46;
    unsigned long t642 = l12 ^ k34;
    unsigned long out425;
    unsigned long out426;
    unsigned long out427;
    unsigned long out428;
    s3(t637,t638,t639,t640,t641,t642, &out425,&out426,&out427,&out428);
    r23 = r23 ^ out425;
    r15 = r15 ^ out426;
    r29 = r29 ^ out427;
    r5 = r5 ^ out428;

    unsigned long t643 = l11 ^ k33;
    unsigned long t644 = l12 ^ k27;
    unsigned long t645 = l13 ^ k53;
    unsigned long t646 = l14 ^ k4;
    unsigned long t647 = l15 ^ k12;
    unsigned long t648 = l16 ^ k17;
    unsigned long out429;
    unsigned long out430;
    unsigned long out431;
    unsigned long out432;
    s4(t643,t644,t645,t646,t647,t648, &out429,&out430,&out431,&out432);
    r25 = r25 ^ out429;
    r19 = r19 ^ out430;
    r9 = r9 ^ out431;
    r0 = r0 ^ out432;

    unsigned long t649 = l15 ^ k8;
    unsigned long t650 = l16 ^ k30;
    unsigned long t651 = l17 ^ k52;
    unsigned long t652 = l18 ^ k35;
    unsigned long t653 = l19 ^ k50;
    unsigned long t654 = l20 ^ k51;
    unsigned long out433;
    unsigned long out434;
    unsigned long out435;
    unsigned long out436;
    s5(t649,t650,t651,t652,t653,t654, &out433,&out434,&out435,&out436);
    r7 = r7 ^ out433;
    r13 = r13 ^ out434;
    r24 = r24 ^ out435;
    r2 = r2 ^ out436;

    unsigned long t655 = l19 ^ k45;
    unsigned long t656 = l20 ^ k1;
    unsigned long t657 = l21 ^ k23;
    unsigned long t658 = l22 ^ k36;
    unsigned long t659 = l23 ^ k7;
    unsigned long t660 = l24 ^ k2;
    unsigned long out437;
    unsigned long out438;
    unsigned long out439;
    unsigned long out440;
    s6(t655,t656,t657,t658,t659,t660, &out437,&out438,&out439,&out440);
    r3 = r3 ^ out437;
    r28 = r28 ^ out438;
    r10 = r10 ^ out439;
    r18 = r18 ^ out440;

    unsigned long t661 = l23 ^ k29;
    unsigned long t662 = l24 ^ k9;
    unsigned long t663 = l25 ^ k49;
    unsigned long t664 = l26 ^ k31;
    unsigned long t665 = l27 ^ k14;
    unsigned long t666 = l28 ^ k37;
    unsigned long out441;
    unsigned long out442;
    unsigned long out443;
    unsigned long out444;
    s7(t661,t662,t663,t664,t665,t666, &out441,&out442,&out443,&out444);
    r31 = r31 ^ out441;
    r11 = r11 ^ out442;
    r21 = r21 ^ out443;
    r6 = r6 ^ out444;

    unsigned long t667 = l27 ^ k43;
    unsigned long t668 = l28 ^ k15;
    unsigned long t669 = l29 ^ k16;
    unsigned long t670 = l30 ^ k28;
    unsigned long t671 = l31 ^ k38;
    unsigned long t672 = l0 ^ k0;
    unsigned long out445;
    unsigned long out446;
    unsigned long out447;
    unsigned long out448;
    s8(t667,t668,t669,t670,t671,t672, &out445,&out446,&out447,&out448);
    r4 = r4 ^ out445;
    r26 = r26 ^ out446;
    r14 = r14 ^ out447;
    r20 = r20 ^ out448;

    unsigned long t673 = r31 ^ k33;
    unsigned long t674 = r0 ^ k54;
    unsigned long t675 = r1 ^ k12;
    unsigned long t676 = r2 ^ k46;
    unsigned long t677 = r3 ^ k24;
    unsigned long t678 = r4 ^ k27;
    unsigned long out449;
    unsigned long out450;
    unsigned long out451;
    unsigned long out452;
    s1(t673,t674,t675,t676,t677,t678, &out449,&out450,&out451,&out452);
    l8 = l8 ^ out449;
    l16 = l16 ^ out450;
    l22 = l22 ^ out451;
    l30 = l30 ^ out452;

    unsigned long t679 = r3 ^ k13;
    unsigned long t680 = r4 ^ k17;
    unsigned long t681 = r5 ^ k40;
    unsigned long t682 = r6 ^ k34;
    unsigned long t683 = r7 ^ k25;
    unsigned long t684 = r8 ^ k5;
    unsigned long out453;
    unsigned long out454;
    unsigned long out455;
    unsigned long out456;
    s2(t679,t680,t681,t682,t683,t684, &out453,&out454,&out455,&out456);
    l12 = l12 ^ out453;
    l27 = l27 ^ out454;
    l1 = l1 ^ out455;
    l17 = l17 ^ out456;

    unsigned long t685 = r7 ^ k39;
    unsigned long t686 = r8 ^ k11;
    unsigned long t687 = r9 ^ k19;
    unsigned long t688 = r10 ^ k20;
    unsigned long t689 = r11 ^ k3;
    unsigned long t690 = r12 ^ k48;
    unsigned long out457;
    unsigned long out458;
    unsigned long out459;
    unsigned long out460;
    s3(t685,t686,t687,t688,t689,t690, &out457,&out458,&out459,&out460);
    l23 = l23 ^ out457;
    l15 = l15 ^ out458;
    l29 = l29 ^ out459;
    l5 = l5 ^ out460;

    unsigned long t691 = r11 ^ k47;
    unsigned long t692 = r12 ^ k41;
    unsigned long t693 = r13 ^ k10;
    unsigned long t694 = r14 ^ k18;
    unsigned long t695 = r15 ^ k26;
    unsigned long t696 = r16 ^ k6;
    unsigned long out461;
    unsigned long out462;
    unsigned long out463;
    unsigned long out464;
    s4(t691,t692,t693,t694,t695,t696, &out461,&out462,&out463,&out464);
    l25 = l25 ^ out461;
    l19 = l19 ^ out462;
    l9 = l9 ^ out463;
    l0 = l0 ^ out464;

    unsigned long t697 = r15 ^ k22;
    unsigned long t698 = r16 ^ k44;
    unsigned long t699 = r17 ^ k7;
    unsigned long t700 = r18 ^ k49;
    unsigned long t701 = r19 ^ k9;
    unsigned long t702 = r20 ^ k38;
    unsigned long out465;
    unsigned long out466;
    unsigned long out467;
    unsigned long out468;
    s5(t697,t698,t699,t700,t701,t702, &out465,&out466,&out467,&out468);
    l7 = l7 ^ out465;
    l13 = l13 ^ out466;
    l24 = l24 ^ out467;
    l2 = l2 ^ out468;

    unsigned long t703 = r19 ^ k0;
    unsigned long t704 = r20 ^ k15;
    unsigned long t705 = r21 ^ k37;
    unsigned long t706 = r22 ^ k50;
    unsigned long t707 = r23 ^ k21;
    unsigned long t708 = r24 ^ k16;
    unsigned long out469;
    unsigned long out470;
    unsigned long out471;
    unsigned long out472;
    s6(t703,t704,t705,t706,t707,t708, &out469,&out470,&out471,&out472);
    l3 = l3 ^ out469;
    l28 = l28 ^ out470;
    l10 = l10 ^ out471;
    l18 = l18 ^ out472;

    unsigned long t709 = r23 ^ k43;
    unsigned long t710 = r24 ^ k23;
    unsigned long t711 = r25 ^ k8;
    unsigned long t712 = r26 ^ k45;
    unsigned long t713 = r27 ^ k28;
    unsigned long t714 = r28 ^ k51;
    unsigned long out473;
    unsigned long out474;
    unsigned long out475;
    unsigned long out476;
    s7(t709,t710,t711,t712,t713,t714, &out473,&out474,&out475,&out476);
    l31 = l31 ^ out473;
    l11 = l11 ^ out474;
    l21 = l21 ^ out475;
    l6 = l6 ^ out476;

    unsigned long t715 = r27 ^ k2;
    unsigned long t716 = r28 ^ k29;
    unsigned long t717 = r29 ^ k30;
    unsigned long t718 = r30 ^ k42;
    unsigned long t719 = r31 ^ k52;
    unsigned long t720 = r0 ^ k14;
    unsigned long out477;
    unsigned long out478;
    unsigned long out479;
    unsigned long out480;
    s8(t715,t716,t717,t718,t719,t720, &out477,&out478,&out479,&out480);
    l4 = l4 ^ out477;
    l26 = l26 ^ out478;
    l14 = l14 ^ out479;
    l20 = l20 ^ out480;

    unsigned long t721 = l31 ^ k40;
    unsigned long t722 = l0 ^ k4;
    unsigned long t723 = l1 ^ k19;
    unsigned long t724 = l2 ^ k53;
    unsigned long t725 = l3 ^ k6;
    unsigned long t726 = l4 ^ k34;
    unsigned long out481;
    unsigned long out482;
    unsigned long out483;
    unsigned long out484;
    s1(t721,t722,t723,t724,t725,t726, &out481,&out482,&out483,&out484);
    r8 = r8 ^ out481;
    r16 = r16 ^ out482;
    r22 = r22 ^ out483;
    r30 = r30 ^ out484;

    unsigned long t727 = l3 ^ k20;
    unsigned long t728 = l4 ^ k24;
    unsigned long t729 = l5 ^ k47;
    unsigned long t730 = l6 ^ k41;
    unsigned long t731 = l7 ^ k32;
    unsigned long t732 = l8 ^ k12;
    unsigned long out485;
    unsigned long out486;
    unsigned long out487;
    unsigned long out488;
    s2(t727,t728,t729,t730,t731,t732, &out485,&out486,&out487,&out488);
    r12 = r12 ^ out485;
    r27 = r27 ^ out486;
    r1 = r1 ^ out487;
    r17 = r17 ^ out488;

    unsigned long t733 = l7 ^ k46;
    unsigned long t734 = l8 ^ k18;
    unsigned long t735 = l9 ^ k26;
    unsigned long t736 = l10 ^ k27;
    unsigned long t737 = l11 ^ k10;
    unsigned long t738 = l12 ^ k55;
    unsigned long out489;
    unsigned long out490;
    unsigned long out491;
    unsigned long out492;
    s3(t733,t734,t735,t736,t737,t738, &out489,&out490,&out491,&out492);
    r23 = r23 ^ out489;
    r15 = r15 ^ out490;
    r29 = r29 ^ out491;
    r5 = r5 ^ out492;

    unsigned long t739 = l11 ^ k54;
    unsigned long t740 = l12 ^ k48;
    unsigned long t741 = l13 ^ k17;
    unsigned long t742 = l14 ^ k25;
    unsigned long t743 = l15 ^ k33;
    unsigned long t744 = l16 ^ k13;
    unsigned long out493;
    unsigned long out494;
    unsigned long out495;
    unsigned long out496;
    s4(t739,t740,t741,t742,t743,t744, &out493,&out494,&out495,&out496);
    r25 = r25 ^ out493;
    r19 = r19 ^ out494;
    r9 = r9 ^ out495;
    r0 = r0 ^ out496;

    unsigned long t745 = l15 ^ k29;
    unsigned long t746 = l16 ^ k51;
    unsigned long t747 = l17 ^ k14;
    unsigned long t748 = l18 ^ k1;
    unsigned long t749 = l19 ^ k16;
    unsigned long t750 = l20 ^ k45;
    unsigned long out497;
    unsigned long out498;
    unsigned long out499;
    unsigned long out500;
    s5(t745,t746,t747,t748,t749,t750, &out497,&out498,&out499,&out500);
    r7 = r7 ^ out497;
    r13 = r13 ^ out498;
    r24 = r24 ^ out499;
    r2 = r2 ^ out500;

    unsigned long t751 = l19 ^ k7;
    unsigned long t752 = l20 ^ k22;
    unsigned long t753 = l21 ^ k44;
    unsigned long t754 = l22 ^ k2;
    unsigned long t755 = l23 ^ k28;
    unsigned long t756 = l24 ^ k23;
    unsigned long out501;
    unsigned long out502;
    unsigned long out503;
    unsigned long out504;
    s6(t751,t752,t753,t754,t755,t756, &out501,&out502,&out503,&out504);
    r3 = r3 ^ out501;
    r28 = r28 ^ out502;
    r10 = r10 ^ out503;
    r18 = r18 ^ out504;

    unsigned long t757 = l23 ^ k50;
    unsigned long t758 = l24 ^ k30;
    unsigned long t759 = l25 ^ k15;
    unsigned long t760 = l26 ^ k52;
    unsigned long t761 = l27 ^ k35;
    unsigned long t762 = l28 ^ k31;
    unsigned long out505;
    unsigned long out506;
    unsigned long out507;
    unsigned long out508;
    s7(t757,t758,t759,t760,t761,t762, &out505,&out506,&out507,&out508);
    r31 = r31 ^ out505;
    r11 = r11 ^ out506;
    r21 = r21 ^ out507;
    r6 = r6 ^ out508;

    unsigned long t763 = l27 ^ k9;
    unsigned long t764 = l28 ^ k36;
    unsigned long t765 = l29 ^ k37;
    unsigned long t766 = l30 ^ k49;
    unsigned long t767 = l31 ^ k0;
    unsigned long t768 = l0 ^ k21;
    unsigned long out509;
    unsigned long out510;
    unsigned long out511;
    unsigned long out512;
    s8(t763,t764,t765,t766,t767,t768, &out509,&out510,&out511,&out512);
    r4 = r4 ^ out509;
    r26 = r26 ^ out510;
    r14 = r14 ^ out511;
    r20 = r20 ^ out512;

    c[5] = l8;
    c[3] = l16;
    c[51] = l22;
    c[49] = l30;
    c[37] = l12;
    c[25] = l27;
    c[15] = l1;
    c[11] = l17;
    c[59] = l23;
    c[61] = l15;
    c[41] = l29;
    c[47] = l5;
    c[9] = l25;
    c[27] = l19;
    c[13] = l9;
    c[7] = l0;
    c[63] = l7;
    c[45] = l13;
    c[1] = l24;
    c[23] = l2;
    c[31] = l3;
    c[33] = l28;
    c[21] = l10;
    c[19] = l18;
    c[57] = l31;
    c[29] = l11;
    c[43] = l21;
    c[55] = l6;
    c[39] = l4;
    c[17] = l26;
    c[53] = l14;
    c[35] = l20;
    c[4] = r8;
    c[2] = r16;
    c[50] = r22;
    c[48] = r30;
    c[36] = r12;
    c[24] = r27;
    c[14] = r1;
    c[10] = r17;
    c[58] = r23;
    c[60] = r15;
    c[40] = r29;
    c[46] = r5;
    c[8] = r25;
    c[26] = r19;
    c[12] = r9;
    c[6] = r0;
    c[62] = r7;
    c[44] = r13;
    c[0] = r24;
    c[22] = r2;
    c[30] = r3;
    c[32] = r28;
    c[20] = r10;
    c[18] = r18;
    c[56] = r31;
    c[28] = r11;
    c[42] = r21;
    c[54] = r6;
    c[38] = r4;
    c[16] = r26;
    c[52] = r14;
    c[34] = r20;


}
