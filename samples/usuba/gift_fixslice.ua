# Fixsliced version
# Specification: https://csrc.nist.gov/CSRC/media/Projects/lightweight-cryptography/documents/round-2/spec-doc-rnd2/gift-cofb-spec-round2.pdf
# About this implementation:
#     Fixslicing: A New GIFT Representation
#     https://eprint.iacr.org/2020/412

node Sbox(S0,S1,S2,S3:v1) returns (S':v4)
let
    S1 ^:= S0 & S2;
    S0 ^:= S1 & S3;
    S2 ^:= S0 | S1;
    S3 ^:= S2;
    S1 ^:= S3;
    S3 := ~S3;
    S2 ^:= S0 & S1;
    S' = (S3, S1, S2, S0)
tel

# Not the traditional swapmove, but since it's always called with
# twice the same parameters, it's a bit simpler like that.
_inline node swapmove_1(a,mask:u32,n:nat) returns (aR:u32)
vars tmp:u32
let
    tmp = (a ^ (a >> n)) & mask;
    aR = a ^ tmp ^ (tmp << n);
tel

node nibble_ror_1(x:u32) returns (r:u32)
let r = ((x >> 1) & 0x77777777) | ((x & 0x11111111) << 3) tel

node nibble_ror_2(x:u32) returns (r:u32)
let r = ((x >> 2) & 0x33333333) | ((x & 0x33333333) << 2) tel

node nibble_ror_3(x:u32) returns (r:u32)
let r = ((x >> 3) & 0x11111111) | ((x & 0x77777777) << 1) tel

node half_ror_4(x:u32) returns (r:u32)
let r = ((x >> 4) & 0x0fff0fff) | ((x & 0x000f000f) << 12) tel

node half_ror_8(x:u32) returns (r:u32)
let r = ((x >> 8) & 0x00ff00ff) | ((x & 0x00ff00ff) << 8) tel

node half_ror_12(x:u32) returns (r:u32)
let r = ((x >> 12) & 0x000f000f) | ((x & 0x0fff0fff) << 4) tel

node byte_ror_2(x:u32) returns (r:u32)
let r = ((x >> 2) & 0x3f3f3f3f) | ((x & 0x03030303) << 6) tel

node byte_ror_4(x:u32) returns (r:u32)
let r = ((x >> 4) & 0x0f0f0f0f) | ((x & 0x0f0f0f0f) << 4) tel

node byte_ror_6(x:u32) returns (r:u32)
let r = ((x >> 6) & 0x03030303) | ((x & 0x3f3f3f3f) << 2) tel


node[] Linear_layer(state:u32x4) returns (stateR:u32x4) [
  let
      stateR[0] = nibble_ror_1(state[0]);
      stateR[1] = nibble_ror_2(state[1]);
      stateR[2] = nibble_ror_3(state[2]);
      stateR[3] = state[3];
  tel
;
  let
      stateR[0] = half_ror_4(state[0]);
      stateR[1] = half_ror_8(state[1]);
      stateR[2] = half_ror_12(state[2]);
      stateR[3] = state[3];
  tel
;
  let
      stateR[0] = swapmove_1(state[0] >>> 16, 0x55550000, 1);
      stateR[1] = swapmove_1(state[1],        0x55555555, 1);
      stateR[2] = swapmove_1(state[2] >>> 16, 0x00005555, 1);
      stateR[3] = state[3];
  tel
;
  let
      stateR[0] = byte_ror_6(state[0]);
      stateR[1] = byte_ror_4(state[1]);
      stateR[2] = byte_ror_2(state[2]);
      stateR[3] = state[3];
  tel
;
  let
      stateR[0] = state[0] >>> 24;
      stateR[1] = state[1] >>> 16;
      stateR[2] = state[2] >>> 8;
      stateR[3] = state[3];
  tel
]

node AddRoundKeyAndConst(state:u32x4, key:u32x2, rc:u32) returns (stateR:u32x4)
let
    stateR[0] = state[0];
    stateR[1] = state[1] ^ key[0];
    stateR[2] = state[2] ^ key[1];
    stateR[3] = state[3] ^ rc;
tel

node Quintuple_round(state:u32x4,key:u32x2[5],rconst:u32[5]) returns (stateR:u32x4)
vars tmp : u32x4[6]
let
    tmp[0] = state;

    forall i in [0, 4] {
        tmp[i+1] = AddRoundKeyAndConst(
                     Linear_layer<i>(Sbox(tmp[i])),
                     key[i], rconst[i]);
    }

    stateR = tmp[5]
tel


node gift128(plain:u32x4, subkeys:u32x2[40]) returns (cipher:u32x4)
vars state:u32x4[9], rconst:u32[40]
let
    state[0] = plain;

    rconst = (
        0x10000008, 0x80018000, 0x54000002, 0x01010181,
	    0x8000001f, 0x10888880, 0x6001e000, 0x51500002,
	    0x03030180, 0x8000002f, 0x10088880, 0x60016000,
	    0x41500002, 0x03030080, 0x80000027, 0x10008880,
	    0x4001e000, 0x11500002, 0x03020180, 0x8000002b,
	    0x10080880, 0x60014000, 0x01400002, 0x02020080,
	    0x80000021, 0x10000080, 0x0001c000, 0x51000002,
	    0x03010180, 0x8000002e, 0x10088800, 0x60012000,
	    0x40500002, 0x01030080, 0x80000006, 0x10008808,
	    0xc001a000, 0x14500002, 0x01020181, 0x8000001a );

    forall i in [0, 7] {
        state[i+1] = Quintuple_round(state[i], subkeys[i*5 .. i*5+4], rconst[i*5 .. i*5+4])
    }

    cipher = state[8];
tel