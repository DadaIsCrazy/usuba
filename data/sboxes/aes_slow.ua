node sbox (U0:v1, U1:v1, U2:v1, U3:v1, U4:v1, U5:v1, U6:v1, U7:v1)
     returns  (S0:v1, S1:v1, S2:v1, S3:v1, S4:v1, S5:v1, S6:v1, S7:v1)
vars
    T1:v1, T2:v1, T3:v1, T4:v1, T5:v1, T6:v1, T7:v1, T8:v1, T9:v1, T10:v1, T11:v1, T12:v1, T13:v1, T14:v1, T15:v1, T16:v1, T17:v1, T18:v1, T19:v1, T20:v1, T21:v1, T22:v1, T23:v1, T24:v1, T25:v1, T26:v1, T27:v1, T28:v1, T29:v1, T30:v1, T31:v1, T32:v1, T33:v1, T34:v1, T35:v1, T36:v1, T37:v1, T38:v1, T39:v1, T40:v1, T41:v1, T42:v1, T43:v1, T44:v1, T45:v1, T46:v1, T47:v1, T48:v1, T49:v1, T50:v1, T51:v1, T52:v1, T53:v1, T54:v1, T55:v1, T56:v1, T57:v1, T58:v1, T59:v1, T60:v1, T61:v1, T62:v1, T63:v1, T64:v1, T65:v1, T66:v1, T67:v1, T68:v1, T69:v1, T70:v1, T71:v1, T72:v1, T73:v1, T74:v1, T75:v1, T76:v1, T77:v1, T78:v1, T79:v1, T80:v1, T81:v1, T82:v1, T83:v1, T84:v1, T85:v1, T86:v1, T87:v1, T88:v1, T89:v1, T90:v1, T91:v1, T92:v1, T93:v1, T94:v1, T95:v1, T96:v1, T97:v1, T98:v1, T99:v1, T100:v1, T101:v1, T102:v1, T103:v1, T104:v1, T105:v1, T106:v1, T107:v1, T108:v1, T109:v1, T110:v1, T111:v1, T112:v1, T113:v1, T114:v1, T115:v1, T116:v1, T117:v1, T118:v1, T119:v1, T120:v1, T121:v1, T122:v1, T123:v1, T124:v1, T125:v1, T126:v1, T127:v1, T128:v1, T129:v1, T130:v1, T131:v1, T132:v1, T133:v1, T134:v1, T135:v1, T136:v1, T137:v1, T138:v1, T139:v1, T140:v1
let
   T1 = U6 ^ U4;
   T2 = U3 ^ U0;
   T3 = U1 ^ U2;
   T4 = U7 ^ T3;
   T5 = T1 ^ T2;
   T6 = U1 ^ U5;
   T7 = U0 ^ U6;
   T8 = T1 ^ T6;
   T9 = U6 ^ T4;
   T10 = U3 ^ T4;
   T11 = U7 ^ T5;
   T12 = T5 ^ T6;
   T13 = U2 ^ U5;
   T14 = T3 ^ T5;
   T15 = U5 ^ T7;
   T16 = U0 ^ U5;
   T17 = U7 ^ T8;
   T18 = U6 ^ U5;
   T19 = T2 ^ T18;
   T20 = T4 ^ T15;
   T21 = T1 ^ T13;
   T22 = U0 ^ T4;
   T39 = T21 ^ T5;
   T40 = T21 ^ T7;
   T41 = T7 ^ T19;
   T42 = T16 ^ T14;
   T43 = T22 ^ T17;
   T44 = T19 & T5;
   T45 = T20 & T11;
   T46 = T12 ^ T44;
   T47 = T10 & U7;
   T48 = T47 ^ T44;
   T49 = T7 & T21;
   T50 = T9 & T4;
   T51 = T40 ^ T49;
   T52 = T22 & T17;
   T53 = T52 ^ T49;
   T54 = T2 & T8;
   T55 = T41 & T39;
   T56 = T55 ^ T54;
   T57 = T16 & T14;
   T58 = T57 ^ T54;
   T59 = T46 ^ T45;
   T60 = T48 ^ T42;
   T61 = T51 ^ T50;
   T62 = T53 ^ T58;
   T63 = T59 ^ T56;
   T64 = T60 ^ T58;
   T65 = T61 ^ T56;
   T66 = T62 ^ T43;
   T67 = T65 ^ T66;
   T68 = T65 & T63;
   T69 = T64 ^ T68;
   T70 = T63 ^ T64;
   T71 = T66 ^ T68;
   T72 = T71 & T70;
   T73 = T69 & T67;
   T74 = T63 & T66;
   T75 = T70 & T74;
   T76 = T70 ^ T68;
   T77 = T64 & T65;
   T78 = T67 & T77;
   T79 = T67 ^ T68;
   T80 = T64 ^ T72;
   T81 = T75 ^ T76;
   T82 = T66 ^ T73;
   T83 = T78 ^ T79;
   T84 = T81 ^ T83;
   T85 = T80 ^ T82;
   T86 = T80 ^ T81;
   T87 = T82 ^ T83;
   T88 = T85 ^ T84;
   T89 = T87 & T5;
   T90 = T83 & T11;
   T91 = T82 & U7;
   T92 = T86 & T21;
   T93 = T81 & T4;
   T94 = T80 & T17;
   T95 = T85 & T8;
   T96 = T88 & T39;
   T97 = T84 & T14;
   T98 = T87 & T19;
   T99 = T83 & T20;
   T100 = T82 & T10;
   T101 = T86 & T7;
   T102 = T81 & T9;
   T103 = T80 & T22;
   T104 = T85 & T2;
   T105 = T88 & T41;
   T106 = T84 & T16;
   T107 = T104 ^ T105;
   T108 = T93 ^ T99;
   T109 = T96 ^ T107;
   T110 = T98 ^ T108;
   T111 = T91 ^ T101;
   T112 = T89 ^ T92;
   T113 = T107 ^ T112;
   T114 = T90 ^ T110;
   T115 = T89 ^ T95;
   T116 = T94 ^ T102;
   T117 = T97 ^ T103;
   T118 = T91 ^ T114;
   T119 = T111 ^ T117;
   T120 = T100 ^ T108;
   T121 = T92 ^ T95;
   T122 = T110 ^ T121;
   T123 = T106 ^ T119;
   T124 = T104 ^ T115;
   T125 = T111 ^ T116;
  S0 = T109 ^ T122;
  S2 = ~(T123 ^ T124);
   T128 = T94 ^ T107;
  S3 = T113 ^ T114;
  S4 = T118 ^ T128;
   T131 = T93 ^ T101;
   T132 = T112 ^ T120;
  S7 = ~(T113 ^ T125);
   T134 = T97 ^ T116;
   T135 = T131 ^ T134;
   T136 = T93 ^ T115;
  S6 = ~(T109 ^ T135);
   T138 = T119 ^ T132;
  S5 = T109 ^ T138;
   T140 = T114 ^ T136;
  S1 = ~(T109 ^ T140)
tel
