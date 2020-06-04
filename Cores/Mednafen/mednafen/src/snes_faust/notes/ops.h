 /* 0x00 */ { "BRK", AM_IM_1 },
 /* 0x01 */ { "ORA", AM_IX },
 /* 0x02 */ { "COP", AM_IM_1 },
 /* 0x03 */ { "ORA", AM_SR },
 /* 0x04 */ { "TSB", AM_DP },
 /* 0x05 */ { "ORA", AM_DP },
 /* 0x06 */ { "ASL", AM_DP },
 /* 0x07 */ { "ORA", AM_INDL },
 /* 0x08 */ { "PHP", AM_IMP },
 /* 0x09 */ { "ORA", AM_IM_M },
 /* 0x0a */ { "ASL", AM_IMP },
 /* 0x0b */ { "PHD", AM_IMP },
 /* 0x0c */ { "TSB", AM_AB },
 /* 0x0d */ { "ORA", AM_AB },
 /* 0x0e */ { "ASL", AM_AB },
 /* 0x0f */ { "ORA", AM_ABL },
 /* 0x10 */ { "BPL", AM_R },
 /* 0x11 */ { "ORA", AM_IY },
 /* 0x12 */ { "ORA", AM_IND },
 /* 0x13 */ { "ORA", AM_SRIY },
 /* 0x14 */ { "TRB", AM_DP },
 /* 0x15 */ { "ORA", AM_DPX },
 /* 0x16 */ { "ASL", AM_DPX },
 /* 0x17 */ { "ORA", AM_ILY },
 /* 0x18 */ { "CLC", AM_IMP },
 /* 0x19 */ { "ORA", AM_ABY },
 /* 0x1a */ { "INC", AM_IMP },
 /* 0x1b */ { "TCS", AM_IMP },
 /* 0x1c */ { "TRB", AM_AB },
 /* 0x1d */ { "ORA", AM_ABX },
 /* 0x1e */ { "ASL", AM_ABX },
 /* 0x1f */ { "ORA", AM_ABLX },
 /* 0x20 */ { "JSR", AM_AB },
 /* 0x21 */ { "AND", AM_IX },
 /* 0x22 */ { "JSL", AM_ABL },
 /* 0x23 */ { "AND", AM_SR },
 /* 0x24 */ { "BIT", AM_DP },
 /* 0x25 */ { "AND", AM_DP },
 /* 0x26 */ { "ROL", AM_DP },
 /* 0x27 */ { "AND", AM_INDL },
 /* 0x28 */ { "PLP", AM_IMP },
 /* 0x29 */ { "AND", AM_IM_M },
 /* 0x2a */ { "ROL", AM_IMP },
 /* 0x2b */ { "PLD", AM_IMP },
 /* 0x2c */ { "BIT", AM_AB },
 /* 0x2d */ { "AND", AM_AB },
 /* 0x2e */ { "ROL", AM_AB },
 /* 0x2f */ { "AND", AM_ABL },
 /* 0x30 */ { "BMI", AM_R },
 /* 0x31 */ { "AND", AM_IY },
 /* 0x32 */ { "AND", AM_IND },
 /* 0x33 */ { "AND", AM_SRIY },
 /* 0x34 */ { "BIT", AM_DPX },
 /* 0x35 */ { "AND", AM_DPX },
 /* 0x36 */ { "ROL", AM_DPX },
 /* 0x37 */ { "AND", AM_ILY },
 /* 0x38 */ { "SEC", AM_IMP },
 /* 0x39 */ { "AND", AM_ABY },
 /* 0x3a */ { "DEC", AM_IMP },
 /* 0x3b */ { "TSC", AM_IMP },
 /* 0x3c */ { "BIT", AM_ABX },
 /* 0x3d */ { "AND", AM_ABX },
 /* 0x3e */ { "ROL", AM_ABX },
 /* 0x3f */ { "AND", AM_ABLX },
 /* 0x40 */ { "RTI", AM_IMP },
 /* 0x41 */ { "EOR", AM_IX },
 /* 0x42 */ { "WDM", AM_IM_1 },
 /* 0x43 */ { "EOR", AM_SR },
 /* 0x44 */ { "MVP", AM_BLOCK },
 /* 0x45 */ { "EOR", AM_DP },
 /* 0x46 */ { "LSR", AM_DP },
 /* 0x47 */ { "EOR", AM_INDL },
 /* 0x48 */ { "PHA", AM_IMP },
 /* 0x49 */ { "EOR", AM_IM_M },
 /* 0x4a */ { "LSR", AM_IMP },
 /* 0x4b */ { "PHK", AM_IMP },
 /* 0x4c */ { "JMP", AM_AB },
 /* 0x4d */ { "EOR", AM_AB },
 /* 0x4e */ { "LSR", AM_AB },
 /* 0x4f */ { "EOR", AM_ABL },
 /* 0x50 */ { "BVC", AM_R },
 /* 0x51 */ { "EOR", AM_IY },
 /* 0x52 */ { "EOR", AM_IND },
 /* 0x53 */ { "EOR", AM_SRIY },
 /* 0x54 */ { "MVN", AM_BLOCK },
 /* 0x55 */ { "EOR", AM_DPX },
 /* 0x56 */ { "LSR", AM_DPX },
 /* 0x57 */ { "EOR", AM_ILY },
 /* 0x58 */ { "CLI", AM_IMP },
 /* 0x59 */ { "EOR", AM_ABY },
 /* 0x5a */ { "PHY", AM_IMP },
 /* 0x5b */ { "TCD", AM_IMP },
 /* 0x5c */ { "JMP", AM_ABL },
 /* 0x5d */ { "EOR", AM_ABX },
 /* 0x5e */ { "LSR", AM_ABX },
 /* 0x5f */ { "EOR", AM_ABLX },
 /* 0x60 */ { "RTS", AM_IMP },
 /* 0x61 */ { "ADC", AM_IX },
 /* 0x62 */ { "PER", AM_RL },
 /* 0x63 */ { "ADC", AM_SR },
 /* 0x64 */ { "STZ", AM_DP },
 /* 0x65 */ { "ADC", AM_DP },
 /* 0x66 */ { "ROR", AM_DP },
 /* 0x67 */ { "ADC", AM_INDL },
 /* 0x68 */ { "PLA", AM_IMP },
 /* 0x69 */ { "ADC", AM_IM_M },
 /* 0x6a */ { "ROR", AM_IMP },
 /* 0x6b */ { "RTL", AM_IMP },
 /* 0x6c */ { "JMP", AM_ABIND },
 /* 0x6d */ { "ADC", AM_AB },
 /* 0x6e */ { "ROR", AM_AB },
 /* 0x6f */ { "ADC", AM_ABL },
 /* 0x70 */ { "BVS", AM_R },
 /* 0x71 */ { "ADC", AM_IY },
 /* 0x72 */ { "ADC", AM_IND },
 /* 0x73 */ { "ADC", AM_SRIY },
 /* 0x74 */ { "STZ", AM_DPX },
 /* 0x75 */ { "ADC", AM_DPX },
 /* 0x76 */ { "ROR", AM_DPX },
 /* 0x77 */ { "ADC", AM_ILY },
 /* 0x78 */ { "SEI", AM_IMP },
 /* 0x79 */ { "ADC", AM_ABY },
 /* 0x7a */ { "PLY", AM_IMP },
 /* 0x7b */ { "TDC", AM_IMP },
 /* 0x7c */ { "JMP", AM_ABIX },
 /* 0x7d */ { "ADC", AM_ABX },
 /* 0x7e */ { "ROR", AM_ABX },
 /* 0x7f */ { "ADC", AM_ABLX },
 /* 0x80 */ { "BRA", AM_R },
 /* 0x81 */ { "STA", AM_IX },
 /* 0x82 */ { "BRL", AM_RL },
 /* 0x83 */ { "STA", AM_SR },
 /* 0x84 */ { "STY", AM_DP },
 /* 0x85 */ { "STA", AM_DP },
 /* 0x86 */ { "STX", AM_DP },
 /* 0x87 */ { "STA", AM_INDL },
 /* 0x88 */ { "DEY", AM_IMP },
 /* 0x89 */ { "BIT", AM_IM_M },
 /* 0x8a */ { "TXA", AM_IMP },
 /* 0x8b */ { "PHB", AM_IMP },
 /* 0x8c */ { "STY", AM_AB },
 /* 0x8d */ { "STA", AM_AB },
 /* 0x8e */ { "STX", AM_AB },
 /* 0x8f */ { "STA", AM_ABL },
 /* 0x90 */ { "BCC", AM_R },
 /* 0x91 */ { "STA", AM_IY },
 /* 0x92 */ { "STA", AM_IND },
 /* 0x93 */ { "STA", AM_SRIY },
 /* 0x94 */ { "STY", AM_DPX },
 /* 0x95 */ { "STA", AM_DPX },
 /* 0x96 */ { "STX", AM_DPY },
 /* 0x97 */ { "STA", AM_ILY },
 /* 0x98 */ { "TYA", AM_IMP },
 /* 0x99 */ { "STA", AM_ABY },
 /* 0x9a */ { "TXS", AM_IMP },
 /* 0x9b */ { "TXY", AM_IMP },
 /* 0x9c */ { "STZ", AM_AB },
 /* 0x9d */ { "STA", AM_ABX },
 /* 0x9e */ { "STZ", AM_ABX },
 /* 0x9f */ { "STA", AM_ABLX },
 /* 0xa0 */ { "LDY", AM_IM_X },
 /* 0xa1 */ { "LDA", AM_IX },
 /* 0xa2 */ { "LDX", AM_IM_X },
 /* 0xa3 */ { "LDA", AM_SR },
 /* 0xa4 */ { "LDY", AM_DP },
 /* 0xa5 */ { "LDA", AM_DP },
 /* 0xa6 */ { "LDX", AM_DP },
 /* 0xa7 */ { "LDA", AM_INDL },
 /* 0xa8 */ { "TAY", AM_IMP },
 /* 0xa9 */ { "LDA", AM_IM_M },
 /* 0xaa */ { "TAX", AM_IMP },
 /* 0xab */ { "PLB", AM_IMP },
 /* 0xac */ { "LDY", AM_AB },
 /* 0xad */ { "LDA", AM_AB },
 /* 0xae */ { "LDX", AM_AB },
 /* 0xaf */ { "LDA", AM_ABL },
 /* 0xb0 */ { "BCS", AM_R },
 /* 0xb1 */ { "LDA", AM_IY },
 /* 0xb2 */ { "LDA", AM_IND },
 /* 0xb3 */ { "LDA", AM_SRIY },
 /* 0xb4 */ { "LDY", AM_DPX },
 /* 0xb5 */ { "LDA", AM_DPX },
 /* 0xb6 */ { "LDX", AM_DPY },
 /* 0xb7 */ { "LDA", AM_ILY },
 /* 0xb8 */ { "CLV", AM_IMP },
 /* 0xb9 */ { "LDA", AM_ABY },
 /* 0xba */ { "TSX", AM_IMP },
 /* 0xbb */ { "TYX", AM_IMP },
 /* 0xbc */ { "LDY", AM_ABX },
 /* 0xbd */ { "LDA", AM_ABX },
 /* 0xbe */ { "LDX", AM_ABY },
 /* 0xbf */ { "LDA", AM_ABLX },
 /* 0xc0 */ { "CPY", AM_IM_X },
 /* 0xc1 */ { "CMP", AM_IX },
 /* 0xc2 */ { "REP", AM_IM_1 },
 /* 0xc3 */ { "CMP", AM_SR },
 /* 0xc4 */ { "CPY", AM_DP },
 /* 0xc5 */ { "CMP", AM_DP },
 /* 0xc6 */ { "DEC", AM_DP },
 /* 0xc7 */ { "CMP", AM_INDL },
 /* 0xc8 */ { "INY", AM_IMP },
 /* 0xc9 */ { "CMP", AM_IM_M },
 /* 0xca */ { "DEX", AM_IMP },
 /* 0xcb */ { "WAI", AM_IMP },
 /* 0xcc */ { "CPY", AM_AB },
 /* 0xcd */ { "CMP", AM_AB },
 /* 0xce */ { "DEC", AM_AB },
 /* 0xcf */ { "CMP", AM_ABL },
 /* 0xd0 */ { "BNE", AM_R },
 /* 0xd1 */ { "CMP", AM_IY },
 /* 0xd2 */ { "CMP", AM_IND },
 /* 0xd3 */ { "CMP", AM_SRIY },
 /* 0xd4 */ { "PEI", AM_DP },
 /* 0xd5 */ { "CMP", AM_DPX },
 /* 0xd6 */ { "DEC", AM_DPX },
 /* 0xd7 */ { "CMP", AM_ILY },
 /* 0xd8 */ { "CLD", AM_IMP },
 /* 0xd9 */ { "CMP", AM_ABY },
 /* 0xda */ { "PHX", AM_IMP },
 /* 0xdb */ { "STP", AM_IMP },
 /* 0xdc */ { "JML", AM_ABIND },
 /* 0xdd */ { "CMP", AM_ABX },
 /* 0xde */ { "DEC", AM_ABX },
 /* 0xdf */ { "CMP", AM_ABLX },
 /* 0xe0 */ { "CPX", AM_IM_X },
 /* 0xe1 */ { "SBC", AM_IX },
 /* 0xe2 */ { "SEP", AM_IM_1 },
 /* 0xe3 */ { "SBC", AM_SR },
 /* 0xe4 */ { "CPX", AM_DP },
 /* 0xe5 */ { "SBC", AM_DP },
 /* 0xe6 */ { "INC", AM_DP },
 /* 0xe7 */ { "SBC", AM_INDL },
 /* 0xe8 */ { "INX", AM_IMP },
 /* 0xe9 */ { "SBC", AM_IM_M },
 /* 0xea */ { "NOP", AM_IMP },
 /* 0xeb */ { "XBA", AM_IMP },
 /* 0xec */ { "CPX", AM_AB },
 /* 0xed */ { "SBC", AM_AB },
 /* 0xee */ { "INC", AM_AB },
 /* 0xef */ { "SBC", AM_ABL },
 /* 0xf0 */ { "BEQ", AM_R },
 /* 0xf1 */ { "SBC", AM_IY },
 /* 0xf2 */ { "SBC", AM_IND },
 /* 0xf3 */ { "SBC", AM_SRIY },
 /* 0xf4 */ { "PEA", AM_AB },
 /* 0xf5 */ { "SBC", AM_DPX },
 /* 0xf6 */ { "INC", AM_DPX },
 /* 0xf7 */ { "SBC", AM_ILY },
 /* 0xf8 */ { "SED", AM_IMP },
 /* 0xf9 */ { "SBC", AM_ABY },
 /* 0xfa */ { "PLX", AM_IMP },
 /* 0xfb */ { "XCE", AM_IMP },
 /* 0xfc */ { "JSR", AM_ABIX },
 /* 0xfd */ { "SBC", AM_ABX },
 /* 0xfe */ { "INC", AM_ABX },
 /* 0xff */ { "SBC", AM_ABLX },
