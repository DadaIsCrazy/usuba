# V-sliced version
# Specification: https://csrc.nist.gov/CSRC/media/Projects/lightweight-cryptography/documents/round-2/spec-doc-rnd2/gimli-spec-round2.pdf
# Supported mode: bitslicing, v-slicing, (h-slicing?)

# XXX: only difference with gimli_bitslicing.ua: refresh(.)
# XXX: two versions (!) + another in gimli_bitslicing of `SPbox` because of the refresh(.)

node SPbox_Rx (col:u32[3]) returns (colR:u32[3])
vars
    x, y, z, x_R : u32
let
    x = col[0] <<< 24;
    y = col[1] <<< 9;
    z = col[2];

    x_R = refresh(x);

    colR[2] = x ^ (z << 1) ^ ((y&z) << 2);
    colR[1] = y ^ x        ^ ((x_R|z) << 1);
    colR[0] = z ^ y        ^ ((x_R&y) << 3);
tel

node SPbox_Rxy (col:u32[3]) returns (colR:u32[3])
vars
    x, y, z, x_R, y_R : u32
let
    x = col[0] <<< 24;
    y = col[1] <<< 9;
    z = col[2];

    x_R = refresh(x);
    y_R = refresh(y);

    colR[2] = x ^ (z << 1) ^ ((y_R&z) << 2);
    colR[1] = y ^ x        ^ ((x_R|z) << 1);
    colR[0] = z ^ y        ^ ((x_R&y_R) << 3);
tel

node NonlinearLayer_Rx (state:u32x4[3]) returns (stateR:u32x4[3])
let
    forall i in [0, 3] {
      stateR[0..2][i] = SPbox_Rx(state[0..2][i]);
    }
tel

node NonlinearLayer_Rxy (state:u32x4[3]) returns (stateR:u32x4[3])
let
    forall i in [0, 3] {
      stateR[0..2][i] = SPbox_Rxy(state[0..2][i]);
    }
tel

node SmallSwap (state:u32x4[3]) returns (stateR:u32x4[3])
let
    stateR = (state[0][1,0,3,2], state[1,2][0..3]);
tel

node BigSwap (state:u32x4[3]) returns (stateR:u32x4[3])
let
    stateR = (state[0][2,3,0,1], state[1,2][0..3]);
tel

node AddRC (state:u32x4[3],rc:u32) returns (stateR:u32x4[3])
let
    stateR = (state[0][0] ^ rc, state[0][1..3], state[1,2])
tel

node gimli (state:u32x4[3]) returns (stateR:u32x4[3])
vars
    rc:u32[6],
    round:u32x4[7][3]
let
    rc = (0x9e377918, 0x9e377914, 0x9e377910,
          0x9e37790c, 0x9e377908, 0x9e377904);

    round[0] = state;

    forall r in [0,5] {
      round[r+1] = NonlinearLayer_Rx(
                     BigSwap(
                       NonlinearLayer_Rx(
                         NonlinearLayer_Rxy(
                           AddRC(
                             SmallSwap(
                               NonlinearLayer_Rx(round[r])),
                              rc[r])))))
    }

    stateR = round[6];
tel