node sbox_des_1 (a:v6) returns (out:v4)
vars
	x1:v1, x2:v1, x3:v1, x4:v1, x5:v1, x6:v1, x7:v1, x8:v1,
	x9:v1, x10:v1, x11:v1, x12:v1, x13:v1, x14:v1, x15:v1, x16:v1,
	x17:v1, x18:v1, x19:v1, x20:v1, x21:v1, x22:v1, x23:v1, x24:v1,
	x25:v1, x26:v1, x27:v1, x28:v1, x29:v1, x30:v1, x31:v1, x32:v1,
	x33:v1, x34:v1, x35:v1, x36:v1, x37:v1, x38:v1, x39:v1, x40:v1,
	x41:v1, x42:v1, x43:v1, x44:v1, x45:v1, x46:v1, x47:v1, x48:v1,
	x49:v1, x50:v1, x51:v1, x52:v1, x53:v1, x54:v1, x55:v1, x56:v1,
	x57:v1, x58:v1, x59:v1, x60:v1, x61:v1, x62:v1, x63:v1
let
	x1 = ~a[3];
	x2 = ~a[0];
	x3 = a[3] ^ a[2];
	x4 = x3 ^ x2;
	x5 = a[2] | x2;
	x6 = x5 & x1;
	x7 = a[5] | x6;
	x8 = x4 ^ x7;
	x9 = x1 | x2;
	x10 = a[5] & x9;
	x11 = x7 ^ x10;
	x12 = a[1] | x11;
	x13 = x8 ^ x12;
	x14 = x9 ^ x13;
	x15 = a[5] | x14;
	x16 = x1 ^ x15;
	x17 = ~x14;
	x18 = x17 & x3;
	x19 = a[1] | x18;
	x20 = x16 ^ x19;
	x21 = a[4] | x20;
	x22 = x13 ^ x21;
	out[3] = x22;
	x23 = a[2] | x4;
	x24 = ~x23;
	x25 = a[5] | x24;
	x26 = x6 ^ x25;
	x27 = x1 & x8;
	x28 = a[1] | x27;
	x29 = x26 ^ x28;
	x30 = x1 | x8;
	x31 = x30 ^ x6;
	x32 = x5 & x14;
	x33 = x32 ^ x8;
	x34 = a[1] & x33;
	x35 = x31 ^ x34;
	x36 = a[4] | x35;
	x37 = x29 ^ x36;
	out[0] = x37;
	x38 = a[2] & x10;
	x39 = x38 | x4;
	x40 = a[2] & x33;
	x41 = x40 ^ x25;
	x42 = a[1] | x41;
	x43 = x39 ^ x42;
	x44 = a[2] | x26;
	x45 = x44 ^ x14;
	x46 = a[0] | x8;
	x47 = x46 ^ x20;
	x48 = a[1] | x47;
	x49 = x45 ^ x48;
	x50 = a[4] & x49;
	x51 = x43 ^ x50;
	out[1] = x51;
	x52 = x8 ^ x40;
	x53 = a[2] ^ x11;
	x54 = x53 & x5;
	x55 = a[1] | x54;
	x56 = x52 ^ x55;
	x57 = a[5] | x4;
	x58 = x57 ^ x38;
	x59 = x13 & x56;
	x60 = a[1] & x59;
	x61 = x58 ^ x60;
	x62 = a[4] & x61;
	x63 = x56 ^ x62;
	out[2] = x63
tel