#include <stdlib.h>
#include "mmintrin.h"
#include "immintrin.h"
#include "tmmintrin.h"
#include "emmintrin.h"





void sbox__0 (unsigned long a1,unsigned long a2,unsigned long a3,unsigned long a4,unsigned long a5,unsigned long a6,unsigned long* out1,unsigned long* out2,unsigned long* out3,unsigned long* out4) {
  unsigned long x1;
  unsigned long x2;
  unsigned long x3;
  unsigned long x4;
  unsigned long x5;
  unsigned long x6;
  unsigned long x7;
  unsigned long x8;
  unsigned long x9;
  unsigned long x10;
  unsigned long x11;
  unsigned long x12;
  unsigned long x13;
  unsigned long x14;
  unsigned long x15;
  unsigned long x16;
  unsigned long x17;
  unsigned long x18;
  unsigned long x19;
  unsigned long x20;
  unsigned long x21;
  unsigned long x22;
  unsigned long x23;
  unsigned long x24;
  unsigned long x25;
  unsigned long x26;
  unsigned long x27;
  unsigned long x28;
  unsigned long x29;
  unsigned long x30;
  unsigned long x31;
  unsigned long x32;
  unsigned long x33;
  unsigned long x34;
  unsigned long x35;
  unsigned long x36;
  unsigned long x37;
  unsigned long x38;
  unsigned long x39;
  unsigned long x40;
  unsigned long x41;
  unsigned long x42;
  unsigned long x43;
  unsigned long x44;
  unsigned long x45;
  unsigned long x46;
  unsigned long x47;
  unsigned long x48;
  unsigned long x49;
  unsigned long x50;
  unsigned long x51;
  unsigned long x52;
  unsigned long x53;
  unsigned long x54;
  unsigned long x55;
  unsigned long x56;
  unsigned long x57;
  unsigned long x58;
  unsigned long x59;
  unsigned long x60;
  unsigned long x61;
  unsigned long x62;
  unsigned long x63;

  x1 = ~(a4);
  x2 = ~(a1);
  x3 = (a3) ^ (a4);
  x4 = (x2) ^ (x3);
  x5 = (x2) | (a3);
  x6 = (x1) & (x5);
  x7 = (x6) | (a6);
  x8 = (x7) ^ (x4);
  x9 = (x2) | (x1);
  x10 = (x9) & (a6);
  x11 = (x10) ^ (x7);
  x12 = (x11) | (a2);
  x13 = (x12) ^ (x8);
  x14 = (x13) ^ (x9);
  x15 = (x14) | (a6);
  x16 = (x15) ^ (x1);
  x17 = ~(x14);
  x18 = (x3) & (x17);
  x19 = (x18) | (a2);
  x20 = (x19) ^ (x16);
  x21 = (x20) | (a5);
  x22 = (x21) ^ (x13);
  *out4 = x22;
  x23 = (x4) | (a3);
  x24 = ~(x23);
  x25 = (x24) | (a6);
  x26 = (x25) ^ (x6);
  x27 = (x8) & (x1);
  x28 = (x27) | (a2);
  x29 = (x28) ^ (x26);
  x30 = (x8) | (x1);
  x31 = (x6) ^ (x30);
  x32 = (x14) & (x5);
  x33 = (x8) ^ (x32);
  x34 = (x33) & (a2);
  x35 = (x34) ^ (x31);
  x36 = (x35) | (a5);
  x37 = (x36) ^ (x29);
  *out1 = x37;
  x38 = (x10) & (a3);
  x39 = (x4) | (x38);
  x40 = (x33) & (a3);
  x41 = (x25) ^ (x40);
  x42 = (x41) | (a2);
  x43 = (x42) ^ (x39);
  x44 = (x26) | (a3);
  x45 = (x14) ^ (x44);
  x46 = (x8) | (a1);
  x47 = (x20) ^ (x46);
  x48 = (x47) | (a2);
  x49 = (x48) ^ (x45);
  x50 = (x49) & (a5);
  x51 = (x50) ^ (x43);
  *out2 = x51;
  x52 = (x40) ^ (x8);
  x53 = (x11) ^ (a3);
  x54 = (x5) & (x53);
  x55 = (x54) | (a2);
  x56 = (x55) ^ (x52);
  x57 = (x4) | (a6);
  x58 = (x38) ^ (x57);
  x59 = (x56) & (x13);
  x60 = (x59) & (a2);
  x61 = (x60) ^ (x58);
  x62 = (x61) & (a5);
  x63 = (x62) ^ (x56);
  *out3 = x63;
}


void sbox__1 (unsigned long a1,unsigned long a2,unsigned long a3,unsigned long a4,unsigned long a5,unsigned long a6,unsigned long* out1,unsigned long* out2,unsigned long* out3,unsigned long* out4) {
  unsigned long x1;
  unsigned long x2;
  unsigned long x3;
  unsigned long x4;
  unsigned long x5;
  unsigned long x6;
  unsigned long x7;
  unsigned long x8;
  unsigned long x9;
  unsigned long x10;
  unsigned long x11;
  unsigned long x12;
  unsigned long x13;
  unsigned long x14;
  unsigned long x15;
  unsigned long x16;
  unsigned long x17;
  unsigned long x18;
  unsigned long x19;
  unsigned long x20;
  unsigned long x21;
  unsigned long x22;
  unsigned long x23;
  unsigned long x24;
  unsigned long x25;
  unsigned long x26;
  unsigned long x27;
  unsigned long x28;
  unsigned long x29;
  unsigned long x30;
  unsigned long x31;
  unsigned long x32;
  unsigned long x33;
  unsigned long x34;
  unsigned long x35;
  unsigned long x36;
  unsigned long x37;
  unsigned long x38;
  unsigned long x39;
  unsigned long x40;
  unsigned long x41;
  unsigned long x42;
  unsigned long x43;
  unsigned long x44;
  unsigned long x45;
  unsigned long x46;
  unsigned long x47;
  unsigned long x48;
  unsigned long x49;
  unsigned long x50;
  unsigned long x51;
  unsigned long x52;
  unsigned long x53;
  unsigned long x54;
  unsigned long x55;
  unsigned long x56;

  x1 = ~(a5);
  x2 = ~(a1);
  x3 = (a6) ^ (a5);
  x4 = (x2) ^ (x3);
  x5 = (a2) ^ (x4);
  x6 = (x1) | (a6);
  x7 = (x2) | (x6);
  x8 = (x7) & (a2);
  x9 = (x8) ^ (a6);
  x10 = (x9) & (a3);
  x11 = (x10) ^ (x5);
  x12 = (x9) & (a2);
  x13 = (x6) ^ (a5);
  x14 = (x13) | (a3);
  x15 = (x14) ^ (x12);
  x16 = (x15) & (a4);
  x17 = (x16) ^ (x11);
  *out2 = x17;
  x18 = (a1) | (a5);
  x19 = (x18) | (a6);
  x20 = (x19) ^ (x13);
  x21 = (a2) ^ (x20);
  x22 = (x4) | (a6);
  x23 = (x17) & (x22);
  x24 = (x23) | (a3);
  x25 = (x24) ^ (x21);
  x26 = (x2) | (a6);
  x27 = (x2) & (a5);
  x28 = (x27) | (a2);
  x29 = (x28) ^ (x26);
  x30 = (x27) ^ (x3);
  x31 = (x19) ^ (x2);
  x32 = (x31) & (a2);
  x33 = (x32) ^ (x30);
  x34 = (x33) & (a3);
  x35 = (x34) ^ (x29);
  x36 = (x35) | (a4);
  x37 = (x36) ^ (x25);
  *out3 = x37;
  x38 = (x32) & (x21);
  x39 = (x5) ^ (x38);
  x40 = (x15) | (a1);
  x41 = (x13) ^ (x40);
  x42 = (x41) | (a3);
  x43 = (x42) ^ (x39);
  x44 = (x41) | (x28);
  x45 = (x44) & (a4);
  x46 = (x45) ^ (x43);
  *out1 = x46;
  x47 = (x21) & (x19);
  x48 = (x26) ^ (x47);
  x49 = (x33) & (a2);
  x50 = (x21) ^ (x49);
  x51 = (x50) & (a3);
  x52 = (x51) ^ (x48);
  x53 = (x28) & (x18);
  x54 = (x50) & (x53);
  x55 = (x54) | (a4);
  x56 = (x55) ^ (x52);
  *out4 = x56;
}


void sbox__2 (unsigned long a1,unsigned long a2,unsigned long a3,unsigned long a4,unsigned long a5,unsigned long a6,unsigned long* out1,unsigned long* out2,unsigned long* out3,unsigned long* out4) {
  unsigned long x1;
  unsigned long x2;
  unsigned long x3;
  unsigned long x4;
  unsigned long x5;
  unsigned long x6;
  unsigned long x7;
  unsigned long x8;
  unsigned long x9;
  unsigned long x10;
  unsigned long x11;
  unsigned long x12;
  unsigned long x13;
  unsigned long x14;
  unsigned long x15;
  unsigned long x16;
  unsigned long x17;
  unsigned long x18;
  unsigned long x19;
  unsigned long x20;
  unsigned long x21;
  unsigned long x22;
  unsigned long x23;
  unsigned long x24;
  unsigned long x25;
  unsigned long x26;
  unsigned long x27;
  unsigned long x28;
  unsigned long x29;
  unsigned long x30;
  unsigned long x31;
  unsigned long x32;
  unsigned long x33;
  unsigned long x34;
  unsigned long x35;
  unsigned long x36;
  unsigned long x37;
  unsigned long x38;
  unsigned long x39;
  unsigned long x40;
  unsigned long x41;
  unsigned long x42;
  unsigned long x43;
  unsigned long x44;
  unsigned long x45;
  unsigned long x46;
  unsigned long x47;
  unsigned long x48;
  unsigned long x49;
  unsigned long x50;
  unsigned long x51;
  unsigned long x52;
  unsigned long x53;
  unsigned long x54;
  unsigned long x55;
  unsigned long x56;
  unsigned long x57;

  x1 = ~(a5);
  x2 = ~(a6);
  x3 = (a3) & (a5);
  x4 = (a6) ^ (x3);
  x5 = (x1) & (a4);
  x6 = (x5) ^ (x4);
  x7 = (a2) ^ (x6);
  x8 = (x1) & (a3);
  x9 = (x2) ^ (a5);
  x10 = (x9) | (a4);
  x11 = (x10) ^ (x8);
  x12 = (x11) & (x7);
  x13 = (x11) ^ (a5);
  x14 = (x7) | (x13);
  x15 = (x14) & (a4);
  x16 = (x15) ^ (x12);
  x17 = (x16) & (a2);
  x18 = (x17) ^ (x11);
  x19 = (x18) & (a1);
  x20 = (x19) ^ (x7);
  *out4 = x20;
  x21 = (a4) ^ (a3);
  x22 = (x9) ^ (x21);
  x23 = (x4) | (x2);
  x24 = (x8) ^ (x23);
  x25 = (x24) | (a2);
  x26 = (x25) ^ (x22);
  x27 = (x23) ^ (a6);
  x28 = (a4) | (x27);
  x29 = (x15) ^ (a3);
  x30 = (x5) | (x29);
  x31 = (x30) | (a2);
  x32 = (x31) ^ (x28);
  x33 = (x32) | (a1);
  x34 = (x33) ^ (x26);
  *out1 = x34;
  x35 = (x9) ^ (a3);
  x36 = (x5) | (x35);
  x37 = (x29) | (x4);
  x38 = (a4) ^ (x37);
  x39 = (x38) | (a2);
  x40 = (x39) ^ (x36);
  x41 = (x11) & (a6);
  x42 = (x6) | (x41);
  x43 = (x38) ^ (x34);
  x44 = (x41) ^ (x43);
  x45 = (x44) & (a2);
  x46 = (x45) ^ (x42);
  x47 = (x46) | (a1);
  x48 = (x47) ^ (x40);
  *out3 = x48;
  x49 = (x38) | (x2);
  x50 = (x13) ^ (x49);
  x51 = (x28) ^ (x27);
  x52 = (x51) | (a2);
  x53 = (x52) ^ (x50);
  x54 = (x23) & (x12);
  x55 = (x52) & (x54);
  x56 = (x55) | (a1);
  x57 = (x56) ^ (x53);
  *out2 = x57;
}


void sbox__3 (unsigned long a1,unsigned long a2,unsigned long a3,unsigned long a4,unsigned long a5,unsigned long a6,unsigned long* out1,unsigned long* out2,unsigned long* out3,unsigned long* out4) {
  unsigned long x1;
  unsigned long x2;
  unsigned long x3;
  unsigned long x4;
  unsigned long x5;
  unsigned long x6;
  unsigned long x7;
  unsigned long x8;
  unsigned long x9;
  unsigned long x10;
  unsigned long x11;
  unsigned long x12;
  unsigned long x13;
  unsigned long x14;
  unsigned long x15;
  unsigned long x16;
  unsigned long x17;
  unsigned long x18;
  unsigned long x19;
  unsigned long x20;
  unsigned long x21;
  unsigned long x22;
  unsigned long x23;
  unsigned long x24;
  unsigned long x25;
  unsigned long x26;
  unsigned long x27;
  unsigned long x28;
  unsigned long x29;
  unsigned long x30;
  unsigned long x31;
  unsigned long x32;
  unsigned long x33;
  unsigned long x34;
  unsigned long x35;
  unsigned long x36;
  unsigned long x37;
  unsigned long x38;
  unsigned long x39;
  unsigned long x40;
  unsigned long x41;
  unsigned long x42;

  x1 = ~(a1);
  x2 = ~(a3);
  x3 = (a3) | (a1);
  x4 = (x3) & (a5);
  x5 = (x4) ^ (x1);
  x6 = (a3) | (a2);
  x7 = (x6) ^ (x5);
  x8 = (a5) & (a1);
  x9 = (x3) ^ (x8);
  x10 = (x9) & (a2);
  x11 = (x10) ^ (a5);
  x12 = (x11) & (a4);
  x13 = (x12) ^ (x7);
  x14 = (x4) ^ (x2);
  x15 = (x14) & (a2);
  x16 = (x15) ^ (x9);
  x17 = (x14) & (x5);
  x18 = (x2) ^ (a5);
  x19 = (x18) | (a2);
  x20 = (x19) ^ (x17);
  x21 = (x20) | (a4);
  x22 = (x21) ^ (x16);
  x23 = (x22) & (a6);
  x24 = (x23) ^ (x13);
  *out2 = x24;
  x25 = ~(x13);
  x26 = (x22) | (a6);
  x27 = (x26) ^ (x25);
  *out1 = x27;
  x28 = (x11) & (a2);
  x29 = (x17) ^ (x28);
  x30 = (x10) ^ (a3);
  x31 = (x19) ^ (x30);
  x32 = (x31) & (a4);
  x33 = (x32) ^ (x29);
  x34 = (x33) ^ (x25);
  x35 = (x34) & (a2);
  x36 = (x35) ^ (x24);
  x37 = (x34) | (a4);
  x38 = (x37) ^ (x36);
  x39 = (x38) & (a6);
  x40 = (x39) ^ (x33);
  *out4 = x40;
  x41 = (x38) ^ (x26);
  x42 = (x40) ^ (x41);
  *out3 = x42;
}


void sbox__4 (unsigned long a1,unsigned long a2,unsigned long a3,unsigned long a4,unsigned long a5,unsigned long a6,unsigned long* out1,unsigned long* out2,unsigned long* out3,unsigned long* out4) {
  unsigned long x1;
  unsigned long x2;
  unsigned long x3;
  unsigned long x4;
  unsigned long x5;
  unsigned long x6;
  unsigned long x7;
  unsigned long x8;
  unsigned long x9;
  unsigned long x10;
  unsigned long x11;
  unsigned long x12;
  unsigned long x13;
  unsigned long x14;
  unsigned long x15;
  unsigned long x16;
  unsigned long x17;
  unsigned long x18;
  unsigned long x19;
  unsigned long x20;
  unsigned long x21;
  unsigned long x22;
  unsigned long x23;
  unsigned long x24;
  unsigned long x25;
  unsigned long x26;
  unsigned long x27;
  unsigned long x28;
  unsigned long x29;
  unsigned long x30;
  unsigned long x31;
  unsigned long x32;
  unsigned long x33;
  unsigned long x34;
  unsigned long x35;
  unsigned long x36;
  unsigned long x37;
  unsigned long x38;
  unsigned long x39;
  unsigned long x40;
  unsigned long x41;
  unsigned long x42;
  unsigned long x43;
  unsigned long x44;
  unsigned long x45;
  unsigned long x46;
  unsigned long x47;
  unsigned long x48;
  unsigned long x49;
  unsigned long x50;
  unsigned long x51;
  unsigned long x52;
  unsigned long x53;
  unsigned long x54;
  unsigned long x55;
  unsigned long x56;
  unsigned long x57;
  unsigned long x58;
  unsigned long x59;
  unsigned long x60;
  unsigned long x61;
  unsigned long x62;

  x1 = ~(a6);
  x2 = ~(a3);
  x3 = (x2) | (x1);
  x4 = (a4) ^ (x3);
  x5 = (x3) & (a1);
  x6 = (x5) ^ (x4);
  x7 = (a4) | (a6);
  x8 = (a3) ^ (x7);
  x9 = (x7) | (a3);
  x10 = (x9) | (a1);
  x11 = (x10) ^ (x8);
  x12 = (x11) & (a5);
  x13 = (x12) ^ (x6);
  x14 = ~(x4);
  x15 = (a6) & (x14);
  x16 = (x15) | (a1);
  x17 = (x16) ^ (x8);
  x18 = (x17) | (a5);
  x19 = (x18) ^ (x10);
  x20 = (x19) | (a2);
  x21 = (x20) ^ (x13);
  *out3 = x21;
  x22 = (x15) | (x2);
  x23 = (a6) ^ (x22);
  x24 = (x22) ^ (a4);
  x25 = (x24) & (a1);
  x26 = (x25) ^ (x23);
  x27 = (x11) ^ (a1);
  x28 = (x22) & (x27);
  x29 = (x28) | (a5);
  x30 = (x29) ^ (x26);
  x31 = (x27) | (a4);
  x32 = ~(x31);
  x33 = (x32) | (a2);
  x34 = (x33) ^ (x30);
  *out2 = x34;
  x35 = (x15) ^ (x2);
  x36 = (x35) & (a1);
  x37 = (x36) ^ (x14);
  x38 = (x7) ^ (x5);
  x39 = (x34) & (x38);
  x40 = (x39) | (a5);
  x41 = (x40) ^ (x37);
  x42 = (x5) ^ (x2);
  x43 = (x16) & (x42);
  x44 = (x27) & (x4);
  x45 = (x44) & (a5);
  x46 = (x45) ^ (x43);
  x47 = (x46) | (a2);
  x48 = (x47) ^ (x41);
  *out1 = x48;
  x49 = (x48) & (x24);
  x50 = (x5) ^ (x49);
  x51 = (x30) ^ (x11);
  x52 = (x50) | (x51);
  x53 = (x52) & (a5);
  x54 = (x53) ^ (x50);
  x55 = (x19) ^ (x14);
  x56 = (x34) ^ (x55);
  x57 = (x16) ^ (x4);
  x58 = (x30) & (x57);
  x59 = (x58) & (a5);
  x60 = (x59) ^ (x56);
  x61 = (x60) | (a2);
  x62 = (x61) ^ (x54);
  *out4 = x62;
}


void sbox__5 (unsigned long a1,unsigned long a2,unsigned long a3,unsigned long a4,unsigned long a5,unsigned long a6,unsigned long* out1,unsigned long* out2,unsigned long* out3,unsigned long* out4) {
  unsigned long x1;
  unsigned long x2;
  unsigned long x3;
  unsigned long x4;
  unsigned long x5;
  unsigned long x6;
  unsigned long x7;
  unsigned long x8;
  unsigned long x9;
  unsigned long x10;
  unsigned long x11;
  unsigned long x12;
  unsigned long x13;
  unsigned long x14;
  unsigned long x15;
  unsigned long x16;
  unsigned long x17;
  unsigned long x18;
  unsigned long x19;
  unsigned long x20;
  unsigned long x21;
  unsigned long x22;
  unsigned long x23;
  unsigned long x24;
  unsigned long x25;
  unsigned long x26;
  unsigned long x27;
  unsigned long x28;
  unsigned long x29;
  unsigned long x30;
  unsigned long x31;
  unsigned long x32;
  unsigned long x33;
  unsigned long x34;
  unsigned long x35;
  unsigned long x36;
  unsigned long x37;
  unsigned long x38;
  unsigned long x39;
  unsigned long x40;
  unsigned long x41;
  unsigned long x42;
  unsigned long x43;
  unsigned long x44;
  unsigned long x45;
  unsigned long x46;
  unsigned long x47;
  unsigned long x48;
  unsigned long x49;
  unsigned long x50;
  unsigned long x51;
  unsigned long x52;
  unsigned long x53;
  unsigned long x54;
  unsigned long x55;
  unsigned long x56;
  unsigned long x57;

  x1 = ~(a2);
  x2 = ~(a5);
  x3 = (a6) ^ (a2);
  x4 = (x2) ^ (x3);
  x5 = (a1) ^ (x4);
  x6 = (a6) & (a5);
  x7 = (x1) | (x6);
  x8 = (x5) & (a5);
  x9 = (x8) & (a1);
  x10 = (x9) ^ (x7);
  x11 = (x10) & (a4);
  x12 = (x11) ^ (x5);
  x13 = (x10) ^ (a6);
  x14 = (a1) & (x13);
  x15 = (a6) & (a2);
  x16 = (a5) ^ (x15);
  x17 = (x16) & (a1);
  x18 = (x17) ^ (x2);
  x19 = (x18) | (a4);
  x20 = (x19) ^ (x14);
  x21 = (x20) & (a3);
  x22 = (x21) ^ (x12);
  *out2 = x22;
  x23 = (x18) ^ (a6);
  x24 = (x23) & (a1);
  x25 = (x24) ^ (a5);
  x26 = (x17) ^ (a2);
  x27 = (x6) | (x26);
  x28 = (x27) & (a4);
  x29 = (x28) ^ (x25);
  x30 = ~(x26);
  x31 = (x29) | (a6);
  x32 = ~(x31);
  x33 = (x32) & (a4);
  x34 = (x33) ^ (x30);
  x35 = (x34) & (a3);
  x36 = (x35) ^ (x29);
  *out4 = x36;
  x37 = (x34) ^ (x6);
  x38 = (x23) & (a5);
  x39 = (x5) ^ (x38);
  x40 = (x39) | (a4);
  x41 = (x40) ^ (x37);
  x42 = (x24) | (x16);
  x43 = (x1) ^ (x42);
  x44 = (x24) ^ (x15);
  x45 = (x31) ^ (x44);
  x46 = (x45) | (a4);
  x47 = (x46) ^ (x43);
  x48 = (x47) | (a3);
  x49 = (x48) ^ (x41);
  *out1 = x49;
  x50 = (x38) | (x5);
  x51 = (x6) ^ (x50);
  x52 = (x31) & (x8);
  x53 = (x52) | (a4);
  x54 = (x53) ^ (x51);
  x55 = (x43) & (x30);
  x56 = (x55) | (a3);
  x57 = (x56) ^ (x54);
  *out3 = x57;
}


void sbox__6 (unsigned long a1,unsigned long a2,unsigned long a3,unsigned long a4,unsigned long a5,unsigned long a6,unsigned long* out1,unsigned long* out2,unsigned long* out3,unsigned long* out4) {
  unsigned long x1;
  unsigned long x2;
  unsigned long x3;
  unsigned long x4;
  unsigned long x5;
  unsigned long x6;
  unsigned long x7;
  unsigned long x8;
  unsigned long x9;
  unsigned long x10;
  unsigned long x11;
  unsigned long x12;
  unsigned long x13;
  unsigned long x14;
  unsigned long x15;
  unsigned long x16;
  unsigned long x17;
  unsigned long x18;
  unsigned long x19;
  unsigned long x20;
  unsigned long x21;
  unsigned long x22;
  unsigned long x23;
  unsigned long x24;
  unsigned long x25;
  unsigned long x26;
  unsigned long x27;
  unsigned long x28;
  unsigned long x29;
  unsigned long x30;
  unsigned long x31;
  unsigned long x32;
  unsigned long x33;
  unsigned long x34;
  unsigned long x35;
  unsigned long x36;
  unsigned long x37;
  unsigned long x38;
  unsigned long x39;
  unsigned long x40;
  unsigned long x41;
  unsigned long x42;
  unsigned long x43;
  unsigned long x44;
  unsigned long x45;
  unsigned long x46;
  unsigned long x47;
  unsigned long x48;
  unsigned long x49;
  unsigned long x50;
  unsigned long x51;
  unsigned long x52;
  unsigned long x53;
  unsigned long x54;
  unsigned long x55;
  unsigned long x56;
  unsigned long x57;

  x1 = ~(a2);
  x2 = ~(a5);
  x3 = (a4) & (a2);
  x4 = (a5) ^ (x3);
  x5 = (a3) ^ (x4);
  x6 = (x4) & (a4);
  x7 = (a2) ^ (x6);
  x8 = (x7) & (a3);
  x9 = (x8) ^ (a1);
  x10 = (x9) | (a6);
  x11 = (x10) ^ (x5);
  x12 = (x2) & (a4);
  x13 = (a2) | (x12);
  x14 = (x2) | (a2);
  x15 = (x14) & (a3);
  x16 = (x15) ^ (x13);
  x17 = (x11) ^ (x6);
  x18 = (x17) | (a6);
  x19 = (x18) ^ (x16);
  x20 = (x19) & (a1);
  x21 = (x20) ^ (x11);
  *out1 = x21;
  x22 = (x21) | (a2);
  x23 = (x6) ^ (x22);
  x24 = (x15) ^ (x23);
  x25 = (x6) ^ (x5);
  x26 = (x12) | (x25);
  x27 = (x26) | (a6);
  x28 = (x27) ^ (x24);
  x29 = (x19) & (x1);
  x30 = (x26) & (x23);
  x31 = (x30) & (a6);
  x32 = (x31) ^ (x29);
  x33 = (x32) | (a1);
  x34 = (x33) ^ (x28);
  *out4 = x34;
  x35 = (x16) & (a4);
  x36 = (x1) | (x35);
  x37 = (x36) & (a6);
  x38 = (x37) ^ (x11);
  x39 = (x13) & (a4);
  x40 = (x7) | (a3);
  x41 = (x40) ^ (x39);
  x42 = (x24) | (x1);
  x43 = (x42) | (a6);
  x44 = (x43) ^ (x41);
  x45 = (x44) | (a1);
  x46 = (x45) ^ (x38);
  *out2 = x46;
  x47 = (x44) ^ (x8);
  x48 = (x15) ^ (x6);
  x49 = (x48) | (a6);
  x50 = (x49) ^ (x47);
  x51 = (x44) ^ (x19);
  x52 = (x25) ^ (a4);
  x53 = (x46) & (x52);
  x54 = (x53) & (a6);
  x55 = (x54) ^ (x51);
  x56 = (x55) | (a1);
  x57 = (x56) ^ (x50);
  *out3 = x57;
}


void sbox__7 (unsigned long a1,unsigned long a2,unsigned long a3,unsigned long a4,unsigned long a5,unsigned long a6,unsigned long* out1,unsigned long* out2,unsigned long* out3,unsigned long* out4) {
  unsigned long x1;
  unsigned long x2;
  unsigned long x3;
  unsigned long x4;
  unsigned long x5;
  unsigned long x6;
  unsigned long x7;
  unsigned long x8;
  unsigned long x9;
  unsigned long x10;
  unsigned long x11;
  unsigned long x12;
  unsigned long x13;
  unsigned long x14;
  unsigned long x15;
  unsigned long x16;
  unsigned long x17;
  unsigned long x18;
  unsigned long x19;
  unsigned long x20;
  unsigned long x21;
  unsigned long x22;
  unsigned long x23;
  unsigned long x24;
  unsigned long x25;
  unsigned long x26;
  unsigned long x27;
  unsigned long x28;
  unsigned long x29;
  unsigned long x30;
  unsigned long x31;
  unsigned long x32;
  unsigned long x33;
  unsigned long x34;
  unsigned long x35;
  unsigned long x36;
  unsigned long x37;
  unsigned long x38;
  unsigned long x39;
  unsigned long x40;
  unsigned long x41;
  unsigned long x42;
  unsigned long x43;
  unsigned long x44;
  unsigned long x45;
  unsigned long x46;
  unsigned long x47;
  unsigned long x48;
  unsigned long x49;
  unsigned long x50;
  unsigned long x51;
  unsigned long x52;
  unsigned long x53;
  unsigned long x54;

  x1 = ~(a1);
  x2 = ~(a4);
  x3 = (x1) ^ (a3);
  x4 = (x1) | (a3);
  x5 = (x2) ^ (x4);
  x6 = (x5) | (a5);
  x7 = (x6) ^ (x3);
  x8 = (x5) | (x1);
  x9 = (x8) ^ (x2);
  x10 = (x9) & (a5);
  x11 = (x10) ^ (x8);
  x12 = (x11) & (a2);
  x13 = (x12) ^ (x7);
  x14 = (x9) ^ (x6);
  x15 = (x9) & (x3);
  x16 = (x8) & (a5);
  x17 = (x16) ^ (x15);
  x18 = (x17) | (a2);
  x19 = (x18) ^ (x14);
  x20 = (x19) | (a6);
  x21 = (x20) ^ (x13);
  *out1 = x21;
  x22 = (x3) | (a5);
  x23 = (x2) & (x22);
  x24 = ~(a3);
  x25 = (x8) & (x24);
  x26 = (x4) & (a5);
  x27 = (x26) ^ (x25);
  x28 = (x27) | (a2);
  x29 = (x28) ^ (x23);
  x30 = (x29) & (a6);
  x31 = (x30) ^ (x13);
  *out4 = x31;
  x32 = (x6) ^ (x5);
  x33 = (x22) ^ (x32);
  x34 = (x13) | (a4);
  x35 = (x34) & (a2);
  x36 = (x35) ^ (x33);
  x37 = (x33) & (a1);
  x38 = (x8) ^ (x37);
  x39 = (x23) ^ (a1);
  x40 = (x7) & (x39);
  x41 = (x40) & (a2);
  x42 = (x41) ^ (x38);
  x43 = (x42) | (a6);
  x44 = (x43) ^ (x36);
  *out3 = x44;
  x45 = (x10) ^ (a1);
  x46 = (x22) ^ (x45);
  x47 = ~(x7);
  x48 = (x8) & (x47);
  x49 = (x48) | (a2);
  x50 = (x49) ^ (x46);
  x51 = (x29) ^ (x19);
  x52 = (x38) | (x51);
  x53 = (x52) & (a6);
  x54 = (x53) ^ (x50);
  *out2 = x54;
}
