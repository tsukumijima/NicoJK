﻿struct NETWORK_SERVICE_ID_ELEM {
	// 優先度の高い対応であることを表すjkIDのマスク
	static const int JKID_PRIOR = 0x40000000;
	// ネットワークID(下位16bit、ただし地上波は0x000F)とサービスID(上位16bit)とをパックした値、0は無効値を表す
	DWORD ntsID;
	// ntsIDに対応する実況ID、負値は対応無しを表す
	int jkID;
};

static const NETWORK_SERVICE_ID_ELEM DEFAULT_NTSID_TABLE[] = {
	// 以下は"jkch.sh.txt"による自動生成(ntsIDでソート必須)
	{0x00650004, 101},
	{0x00660004, 101},
	{0x00670004, 103},
	{0x00680004, 103},
	{0x008D0004, 141},
	{0x008E0004, 141},
	{0x008F0004, 141},
	{0x00970004, 151},
	{0x00980004, 151},
	{0x00990004, 151},
	{0x00A10004, 161},
	{0x00A20004, 161},
	{0x00A30004, 161},
	{0x00AB0004, 171},
	{0x00AC0004, 171},
	{0x00AD0004, 171},
	{0x00B50004, 181},
	{0x00B60004, 181},
	{0x00B70004, 181},
	{0x00BF0004, 191},
	{0x00C00004, 192},
	{0x00C10004, 193},
	{0x00C80004, 200},
	{0x00C90004, 201},
	{0x00CA0004, 202},
	{0x00D30004, 211},
	{0x00DE0004, 222},
	{0x00E70004, 231},
	{0x00E80004, 231},
	{0x00EA0004, 234},
	{0x00EC0004, 236},
	{0x00EE0004, 238},
	{0x00F10004, 241},
	{0x00F20004, 242},
	{0x00F30004, 243},
	{0x00F40004, 244},
	{0x00F50004, 245},
	{0x00FB0004, 251},
	{0x00FC0004, 252},
	{0x00FF0004, 255},
	{0x01000004, 256},
	{0x01020004, 258},
	{0x01040004, 260},
	{0x01070004, 263},
	{0x01090004, 265},
	{0x014D0007, 333},
	{0x038E0004, 910},
	{0x0400000F,   1},
	{0x0408000F,   2},
	{0x0410000F,   4},
	{0x0418000F,   6},
	{0x0420000F,   8},
	{0x0428000F,   5},
	{0x0430000F,   7},
	{0x0440000F, 231},
	{0x0808000F,   2},
	{0x0810000F,   6},
	{0x0818000F,   5},
	{0x0820000F,   8},
	{0x0828000F,   4},
	{0x0C08000F,   2},
	{0x0C10000F,   8},
	{0x0C18000F,   6},
	{0x0C20000F,   5},
	{0x0C28000F,   4},
	{0x1010000F,   6},
	{0x1018000F,   4},
	{0x1020000F,   5},
	{0x1028000F,   8},
	{0x1030000F,   7},
	{0x1410000F,   4},
	{0x1418000F,   5},
	{0x1420000F,   6},
	{0x1428000F,   7},
	{0x1430000F,   8},
	{0x1810000F,   8},
	{0x1818000F,   6},
	{0x1820000F,   4},
	{0x2800000F,   1},
	{0x2808000F,   2},
	{0x2810000F,   6},
	{0x2818000F,   4},
	{0x2820000F,   5},
	{0x2828000F,   8},
	{0x2830000F,   7},
	{0x2C00000F,   1},
	{0x2C08000F,   2},
	{0x2C10000F,   6},
	{0x2C18000F,   4},
	{0x2C20000F,   5},
	{0x2C28000F,   8},
	{0x2C30000F,   7},
	{0x3000000F,   1},
	{0x3008000F,   2},
	{0x3010000F,   6},
	{0x3018000F,   4},
	{0x3020000F,   5},
	{0x3028000F,   8},
	{0x3030000F,   7},
	{0x3400000F,   1},
	{0x3408000F,   2},
	{0x3410000F,   6},
	{0x3418000F,   4},
	{0x3420000F,   5},
	{0x3428000F,   8},
	{0x3430000F,   7},
	{0x3800000F,   1},
	{0x3808000F,   2},
	{0x3810000F,   6},
	{0x3818000F,   4},
	{0x3820000F,   5},
	{0x3828000F,   8},
	{0x3830000F,   7},
	{0x3C00000F,   1},
	{0x3C08000F,   2},
	{0x3C10000F,   6},
	{0x3C18000F,   4},
	{0x3C20000F,   5},
	{0x3C28000F,   8},
	{0x3C30000F,   7},
	{0x4000000F,   1},
	{0x4008000F,   2},
	{0x4010000F,   6},
	{0x4018000F,   4},
	{0x4020000F,   5},
	{0x4028000F,   8},
	{0x4030000F,   7},
	{0x4400000F,   1},
	{0x4408000F,   2},
	{0x4410000F,   6},
	{0x4418000F,   8},
	{0x4420000F,   4},
	{0x4428000F,   5},
	{0x4800000F,   1},
	{0x4808000F,   2},
	{0x4810000F,   4},
	{0x4818000F,   8},
	{0x4820000F,   5},
	{0x4C00000F,   1},
	{0x4C08000F,   2},
	{0x4C10000F,   4},
	{0x4C18000F,   5},
	{0x4C20000F,   6},
	{0x4C28000F,   8},
	{0x5000000F,   1},
	{0x5008000F,   2},
	{0x5010000F,   6},
	{0x5018000F,   4},
	{0x5020000F,   8},
	{0x5028000F,   5},
	{0x5400000F,   1},
	{0x5408000F,   2},
	{0x5410000F,   8},
	{0x5418000F,   4},
	{0x5420000F,   5},
	{0x5428000F,   6},
	{0x5800000F,   1},
	{0x5808000F,   2},
	{0x5810000F,   4},
	{0x5818000F,   6},
	{0x5820000F,   5},
	{0x5C38000F,   9},
	{0x6038000F,  11},
	{0x6400000F,   1},
	{0x6800000F,   1},
	{0x6C38000F,  12},
	{0x7000000F,   1},
	{0x7438000F,  10},
	{0x7800000F,   1},
	{0x7808000F,   2},
	{0x7810000F,   4},
	{0x7818000F,   5},
	{0x7820000F,   6},
	{0x7828000F,   8},
	{0x7C00000F,   1},
	{0x7C08000F,   2},
	{0x7C10000F,   6},
	{0x7C18000F,   8},
	{0x7C20000F,   4},
	{0x7C28000F,   5},
	{0x8000000F,   1},
	{0x8008000F,   2},
	{0x8010000F,   4},
	{0x8018000F,   6},
	{0x8400000F,   1},
	{0x8430000F,   7},
	{0x8800000F,   1},
	{0x8808000F,   2},
	{0x8810000F,   4},
	{0x8818000F,   5},
	{0x8820000F,   6},
	{0x8828000F,   8},
	{0x8C00000F,   1},
	{0x8C08000F,   2},
	{0x8C10000F,   6},
	{0x8C18000F,   8},
	{0x8C20000F,   4},
	{0x8C28000F,   5},
	{0x9000000F,   1},
	{0x9008000F,   2},
	{0x9010000F,   4},
	{0x9018000F,   8},
	{0x9400000F,   1},
	{0x9408000F,   2},
	{0x9410000F,   4},
	{0x9418000F,   8},
	{0x9420000F,   6},
	{0x9800000F,   1},
	{0x9C00000F,   1},
	{0xA000000F,   1},
	{0xA030000F,   7},
	{0xA400000F,   1},
	{0xA800000F,   1},
	{0xAC00000F,   1},
	{0xB000000F,   1},
	{0xB400000F,   1},
	{0xB800000F,   1},
	{0xB808000F,   2},
	{0xB810000F,   6},
	{0xB818000F,   4},
	{0xB820000F,   5},
	{0xB828000F,   8},
	{0xBC00000F,   1},
	{0xBC08000F,   2},
	{0xC000000F,   1},
	{0xC008000F,   2},
	{0xC400000F,   1},
	{0xC408000F,   2},
	{0xC800000F,   1},
	{0xC808000F,   2},
	{0xC810000F,   4},
	{0xC818000F,   6},
	{0xC820000F,   5},
	{0xCC00000F,   1},
	{0xCC08000F,   2},
	{0xCC10000F,   4},
	{0xCC18000F,   5},
	{0xCC20000F,   6},
	{0xCC28000F,   8},
	{0xD000000F,   1},
	{0xD008000F,   2},
	{0xD400000F,   1},
	{0xD408000F,   2},
	{0xD410000F,   4},
	{0xD800000F,   1},
	{0xD808000F,   2},
	{0xD810000F,   4},
	{0xD818000F,   6},
	{0xD820000F,   8},
	{0xDC00000F,   1},
	{0xDC08000F,   2},
	{0xDC10000F,   5},
	{0xDC18000F,   6},
	{0xDC20000F,   4},
	{0xDC28000F,   7},
	{0xDC30000F,   8},
	{0xDE00000F,   1},
	{0xDE08000F,   2},
	{0xE000000F,   1},
	{0xE008000F,   2},
	{0xE010000F,   6},
	{0xE018000F,   8},
	{0xE020000F,   4},
	{0xE028000F,   5},
	{0xE400000F,   1},
	{0xE408000F,   2},
	{0xE410000F,   6},
	{0xE418000F,   8},
	{0xE420000F,   5},
	{0xE428000F,   4},
	{0xE800000F,   1},
	{0xE808000F,   2},
	{0xE810000F,   6},
	{0xE818000F,   8},
	{0xE820000F,   5},
	{0xE828000F,   4},
	{0xEC00000F,   1},
	{0xEC08000F,   2},
	{0xEC10000F,   6},
	{0xEC18000F,   8},
	{0xF000000F,   1},
	{0xF008000F,   2},
	{0xF010000F,   6},
	{0xF018000F,   4},
	{0xF020000F,   5},
	{0xF400000F,   1},
	{0xF408000F,   2},
	{0xF410000F,   8},
	{0xF800000F,   1},
	{0xF808000F,   2},
	{0xF810000F,   6},
	{0xF820000F,   5},
	{0xF838000F,   8},
};
