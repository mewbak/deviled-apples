// Address range: 0x2c810 - 0x2c908
int32_t DrawSpellCel(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	g35 = a3;
	g33 = a1;
	g32 = a2;
	g31 = a4;
	g36 = a5;
	g34 = a3;
	int32_t v1 = function_c9948();                                   // 0x2c838
	int32_t v2 = *(int32_t *)(4 * g32 + *(int32_t *)(g23 - 0x7698)); // 0x2c848
	g32 = *(int32_t *)(g23 - 0x7694);
	int32_t v3;                                                     // bp-32
	int32_t v4 = function_4d7c4(v1, g31, &v3);                      // 0x2c864
	char *v5 = (char *)v4;                                          // 0x2c868
	int32_t v6 = g33 + v2 + *(int32_t *)*(int32_t *)(g23 - 0x7804); // bp-40
	g33 = v3 + v4;
	int32_t v7 = (int32_t)&v5; // 0x2c8b4
	int32_t v8 = g36;          // 0x2c87c
	                           // branch -> 0x2c87c
lab_0x2c87c:
	while (true) {
		int32_t v9 = v8; // 0x2c8b8
		char *v10 = v5;  // 0x2c880
		// branch -> 0x2c880
		while (true) {
			// 0x2c880
			v5 = (char *)((int32_t)v10 + 1);
			char v11 = *v10;   // 0x2c88c
			int32_t v12 = v11; // 0x2c890
			g39 = v12;
			int32_t v13; // 0x2c8c0
			if (v11 > -1) {
				// 0x2c8ac
				g31 = v9 - v12;
				function_da338((char *)&v6, v7, g32);
				v13 = g31;
				// branch -> 0x2c8c0
			} else {
				int32_t v14 = v12 + v9; // 0x2c89c
				g31 = v14;
				v6 -= v12;
				v13 = v14;
				// branch -> 0x2c8c0
			}
			// 0x2c8c0
			if (v13 == 0) {
				char *v15 = v5;    // 0x2c8cc
				int32_t v16 = g36; // 0x2c8e0
				v6 = v6 - 768 - v16;
				if ((int32_t)v15 == g33) {
					// break (via goto) -> 0x2c8ec
					goto lab_0x2c8ec;
				}
				v5 = v15;
				v8 = v16;
				// continue (via goto) -> 0x2c87c
				goto lab_0x2c87c;
			} else {
				// 0x2c8c0
				v9 = v13;
				v10 = v5;
				// branch -> 0x2c880
				continue;
			}
		}
	lab_0x2c8ec:;
		int32_t result = function_c9acc(g35); // 0x2c8f0
		return result;
	}
}

// Address range: 0x2c908 - 0x2cf34
int32_t SetSpellTrans(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7694); // 0x2c910
	int32_t v2 = v1;                         // r4
	int32_t v3;                              // ctr
	int32_t v4;                              // r0
	int32_t v5;                              // r10
	int32_t v6;                              // r11
	int32_t v7;                              // r12
	int32_t v8;                              // r31
	int32_t result;                          // r3
	int32_t v9;                              // r5
	int32_t v10;                             // r6
	int32_t v11;                             // r7
	int32_t v12;                             // r8
	int32_t v13;                             // r9
	int32_t v14;                             // 0x2ca50
	int32_t v15;                             // 0x2ca60
	int32_t v16;                             // 0x2ca6c
	uint32_t v17;                            // 0x2ca7c
	int32_t v18;                             // 0x2ca88
	int32_t v19;                             // 0x2ca98
	int32_t v20;                             // 0x2caa0
	int32_t v21;                             // 0x2caa8
	uint32_t v22;                            // 0x2cab4
	int32_t v23;                             // 0x2cabc
	int32_t v24;                             // 0x2cac4
	int32_t v25;                             // 0x2cacc
	int32_t v26;                             // 0x2cad4
	int32_t v27;                             // 0x2cadc
	int32_t v28;                             // 0x2cae4
	int32_t v29;                             // 0x2caec
	uint32_t v30;                            // 0x2caf8
	int32_t v31;                             // 0x2cb00
	int32_t v32;                             // 0x2cb08
	int32_t v33;                             // 0x2cb10
	int32_t v34;                             // 0x2cb18
	int32_t v35;                             // 0x2cb20
	int32_t v36;                             // 0x2cb28
	int32_t v37;                             // 0x2cb30
	int32_t v38;                             // 0x2cb88
	int32_t v39;                             // 0x2cb98
	int32_t v40;                             // 0x2ccac
	int32_t v41;                             // 0x2cd80
	int32_t v42;                             // 0x2cee4
	int32_t v43;                             // 0x2cef4
	int32_t v44;                             // 0x2cf24
	int32_t v45;                             // 0x2ca40
	int32_t v46;                             // 0x2cb58
	int32_t v47;                             // 0x2cb5c
	int32_t v48;                             // 0x2cb60
	int32_t v49;                             // 0x2cf08
	int32_t v50;                             // 0x2cf0c
	int32_t v51;                             // 0x2cf24
	if ((0x1000000 * g34 || 0xffffff) < 0x1ffffff) {
		// 0x2c918
		v3 = 4;
		v7 = v1;
		v8 = 0;
		int32_t v52 = v1; // 0x2c928
		char v53 = 0;
		// branch -> 0x2c928
		while (true) {
			// 0x2c928
			*(char *)v52 = v53;
			int32_t v54 = v8; // 0x2c92c
			*(char *)(v7 + 1) = (char)(v54 + 1);
			int32_t v55 = v8; // 0x2c93c
			*(char *)(v7 + 2) = (char)(v54 + 2);
			int32_t v56 = v8; // 0x2c948
			v8 = v56 + 8;
			*(char *)(v7 + 3) = (char)(v54 + 3);
			uint32_t v57 = v8; // 0x2c958
			*(char *)(v7 + 4) = (char)(v55 + 4);
			int32_t v58 = v8; // 0x2c964
			*(char *)(v7 + 5) = (char)(v55 + 5);
			int32_t v59 = v8; // 0x2c974
			*(char *)(v7 + 6) = (char)(v56 + 6);
			int32_t v60 = v8; // 0x2c97c
			*(char *)(v7 + 7) = (char)(v56 + 7);
			int32_t v61 = v8; // 0x2c984
			v8 = v61 + 8;
			*(char *)(v7 + 8) = (char)(v57 % 256);
			uint32_t v62 = v8; // 0x2c990
			*(char *)(v7 + 9) = (char)(v57 + 1);
			int32_t v63 = v8; // 0x2c998
			*(char *)(v7 + 10) = (char)(v58 + 2);
			int32_t v64 = v8; // 0x2c9a0
			*(char *)(v7 + 11) = (char)(v58 + 3);
			int32_t v65 = v8; // 0x2c9a8
			*(char *)(v7 + 12) = (char)(v58 + 4);
			int32_t v66 = v8; // 0x2c9b0
			*(char *)(v7 + 13) = (char)(v59 + 5);
			int32_t v67 = v8; // 0x2c9b8
			*(char *)(v7 + 14) = (char)(v60 + 6);
			int32_t v68 = v8; // 0x2c9c0
			*(char *)(v7 + 15) = (char)(v61 + 7);
			int32_t v69 = v8; // 0x2c9c8
			v8 = v69 + 8;
			*(char *)(v7 + 16) = (char)(v62 % 256);
			uint32_t v70 = v8; // 0x2c9d4
			*(char *)(v7 + 17) = (char)(v63 + 1);
			int32_t v71 = v8; // 0x2c9dc
			*(char *)(v7 + 18) = (char)(v64 + 2);
			int32_t v72 = v8; // 0x2c9e4
			*(char *)(v7 + 19) = (char)(v65 + 3);
			int32_t v73 = v8; // 0x2c9ec
			*(char *)(v7 + 20) = (char)(v66 + 4);
			int32_t v74 = v8; // 0x2c9f4
			*(char *)(v7 + 21) = (char)(v67 + 5);
			int32_t v75 = v8; // 0x2c9fc
			*(char *)(v7 + 22) = (char)(v68 + 6);
			int32_t v76 = v8; // 0x2ca04
			*(char *)(v7 + 23) = (char)(v69 + 7);
			int32_t v77 = v8; // 0x2ca0c
			v8 = v77 + 8;
			*(char *)(v7 + 24) = (char)(v70 % 256);
			*(char *)(v7 + 25) = (char)(v71 + 1);
			*(char *)(v7 + 26) = (char)(v72 + 2);
			*(char *)(v7 + 27) = (char)(v73 + 3);
			*(char *)(v7 + 28) = (char)(v74 + 4);
			*(char *)(v7 + 29) = (char)(v75 + 5);
			*(char *)(v7 + 30) = (char)(v76 + 6);
			*(char *)(v7 + 31) = (char)(v77 + 7);
			int32_t v78 = v7 + 32; // 0x2ca34
			v7 = v78;
			int32_t v79 = v3 - 1; // 0x2ca38
			v3 = v79;
			if (v79 == 0) {
				// 0x2ca3c
				// branch -> 0x2ca3c
				// 0x2ca3c
				v45 = v2 + 128;
				v7 = v45;
				v3 = 4;
				v8 = 128;
				int32_t v80 = v45; // 0x2ca4c
				char v81 = -128;
				// branch -> 0x2ca4c
				while (true) {
					// 0x2ca4c
					*(char *)v80 = v81;
					v14 = v8;
					*(char *)(v7 + 1) = (char)(v14 + 1);
					v15 = v8;
					*(char *)(v7 + 2) = (char)(v14 + 2);
					v16 = v8;
					v8 = v16 + 8;
					*(char *)(v7 + 3) = (char)(v14 + 3);
					v17 = v8;
					*(char *)(v7 + 4) = (char)(v15 + 4);
					v18 = v8;
					*(char *)(v7 + 5) = (char)(v15 + 5);
					v19 = v8;
					*(char *)(v7 + 6) = (char)(v16 + 6);
					v20 = v8;
					*(char *)(v7 + 7) = (char)(v16 + 7);
					v21 = v8;
					v8 = v21 + 8;
					*(char *)(v7 + 8) = (char)(v17 % 256);
					v22 = v8;
					*(char *)(v7 + 9) = (char)(v17 + 1);
					v23 = v8;
					*(char *)(v7 + 10) = (char)(v18 + 2);
					v24 = v8;
					*(char *)(v7 + 11) = (char)(v18 + 3);
					v25 = v8;
					*(char *)(v7 + 12) = (char)(v18 + 4);
					v26 = v8;
					*(char *)(v7 + 13) = (char)(v19 + 5);
					v27 = v8;
					*(char *)(v7 + 14) = (char)(v20 + 6);
					v28 = v8;
					*(char *)(v7 + 15) = (char)(v21 + 7);
					v29 = v8;
					v8 = v29 + 8;
					*(char *)(v7 + 16) = (char)(v22 % 256);
					v30 = v8;
					*(char *)(v7 + 17) = (char)(v23 + 1);
					v31 = v8;
					*(char *)(v7 + 18) = (char)(v24 + 2);
					v32 = v8;
					*(char *)(v7 + 19) = (char)(v25 + 3);
					v33 = v8;
					*(char *)(v7 + 20) = (char)(v26 + 4);
					v34 = v8;
					*(char *)(v7 + 21) = (char)(v27 + 5);
					v35 = v8;
					*(char *)(v7 + 22) = (char)(v28 + 6);
					v36 = v8;
					*(char *)(v7 + 23) = (char)(v29 + 7);
					v37 = v8;
					v8 = v37 + 8;
					*(char *)(v7 + 24) = (char)(v30 % 256);
					*(char *)(v7 + 25) = (char)(v31 + 1);
					*(char *)(v7 + 26) = (char)(v32 + 2);
					*(char *)(v7 + 27) = (char)(v33 + 3);
					*(char *)(v7 + 28) = (char)(v34 + 4);
					*(char *)(v7 + 29) = (char)(v35 + 5);
					*(char *)(v7 + 30) = (char)(v36 + 6);
					*(char *)(v7 + 31) = (char)(v37 + 7);
					v46 = v7 + 32;
					v7 = v46;
					v47 = v3 - 1;
					v3 = v47;
					if (v47 == 0) {
						// 0x2cb60
						v48 = 0x1000000 * g34;
						result = 0;
						*(char *)(v2 + 255) = 0;
						if (v48 == 0x3000000) {
							// 0x2cca8
							v7 = 209;
							v40 = v2;
							v8 = v40 + 208;
							*(char *)(v40 + 144) = -47;
							v6 = 211;
							v5 = 213;
							*(char *)(v2 + 145) = -45;
							v13 = 208;
							v11 = 210;
							*(char *)(v2 + 146) = (char)v5;
							v9 = 212;
							result = 214;
							*(char *)(v2 + 160) = (char)v13;
							v4 = 215;
							v12 = 217;
							*(char *)(v2 + 192) = (char)v13;
							v13 = 216;
							v10 = 219;
							*(char *)(v2 + 161) = (char)v7;
							v2 = 221;
							*(char *)(v8 - 15) = (char)v7;
							*(char *)(v8 - 46) = (char)v11;
							*(char *)(v8 - 14) = (char)v11;
							v11 = 218;
							*(char *)(v8 - 45) = (char)v6;
							*(char *)(v8 - 13) = (char)v6;
							*(char *)(v8 - 44) = (char)v9;
							*(char *)(v8 - 12) = (char)v9;
							v9 = 220;
							*(char *)(v8 - 43) = (char)v5;
							*(char *)(v8 - 11) = (char)v5;
							*(char *)(v8 - 42) = (char)result;
							*(char *)(v8 - 10) = (char)result;
							result = 222;
							*(char *)(v8 - 41) = (char)v4;
							*(char *)(v8 - 9) = (char)v4;
							v4 = 223;
							*(char *)(v8 - 40) = (char)v13;
							*(char *)(v8 - 8) = (char)v13;
							*(char *)(v8 - 39) = (char)v12;
							*(char *)(v8 - 7) = (char)v12;
							*(char *)(v8 - 38) = (char)v11;
							*(char *)(v8 - 6) = (char)v11;
							*(char *)(v8 - 37) = (char)v10;
							*(char *)(v8 - 5) = (char)v10;
							*(char *)(v8 - 36) = (char)v9;
							*(char *)(v8 - 4) = (char)v9;
							*(char *)(v8 - 35) = (char)v2;
							*(char *)(v8 - 3) = (char)v2;
							*(char *)(v8 - 34) = (char)result;
							*(char *)(v8 - 2) = (char)result;
							*(char *)(v8 - 33) = (char)v4;
							*(char *)(v8 - 1) = (char)v4;
							// branch -> 0x2cf2c
							// 0x2cf2c
							return result;
						}
						// 0x2cb74
						v38 = v48 / 0x1000000;
						if (v48 > 0x3000000) {
							// 0x2cb88
							if (v38 <= 4) {
								// 0x2ce50
								v5 = 241;
								*(char *)(v2 + 144) = -15;
								v13 = 243;
								v12 = 245;
								*(char *)(v2 + 145) = -13;
								v11 = 240;
								v10 = 242;
								*(char *)(v2 + 146) = (char)v12;
								v9 = 244;
								result = 246;
								*(char *)(v2 + 160) = (char)v11;
								v4 = 247;
								*(char *)(v2 + 192) = (char)v11;
								*(char *)(v2 + 208) = (char)v11;
								*(char *)(v2 + 161) = (char)v5;
								*(char *)(v2 + 193) = (char)v5;
								*(char *)(v2 + 209) = (char)v5;
								*(char *)(v2 + 162) = (char)v10;
								*(char *)(v2 + 194) = (char)v10;
								*(char *)(v2 + 210) = (char)v10;
								*(char *)(v2 + 163) = (char)v13;
								*(char *)(v2 + 195) = (char)v13;
								*(char *)(v2 + 211) = (char)v13;
								*(char *)(v2 + 164) = (char)v9;
								*(char *)(v2 + 196) = (char)v9;
								*(char *)(v2 + 212) = (char)v9;
								*(char *)(v2 + 165) = (char)v12;
								*(char *)(v2 + 197) = (char)v12;
								*(char *)(v2 + 213) = (char)v12;
								*(char *)(v2 + 166) = (char)result;
								*(char *)(v2 + 198) = (char)result;
								*(char *)(v2 + 214) = (char)result;
								*(char *)(v2 + 167) = (char)v4;
								*(char *)(v2 + 199) = (char)v4;
								*(char *)(v2 + 215) = (char)v4;
								v44 = v2;
								v51 = v44 + 248;
								result = v51;
								v42 = 248;
								v3 = 255 - v42;
								if (v42 <= 254) {
									int32_t v82 = v51; // 0x2cefc
									v43 = v42;
									while (true) {
										// 0x2cef4
										v4 = v43 % 256;
										*(char *)(v82 - 80) = (char)v43;
										*(char *)(result - 48) = (char)v4;
										*(char *)(result - 32) = (char)v4;
										v49 = result + 1;
										result = v49;
										v50 = v3 - 1;
										v3 = v50;
										if (v50 == 0) {
											// 0x2cf10
											// branch -> 0x2cf10
											// 0x2cf10
											v4 = 0;
											*(char *)(v2 + 175) = 0;
											*(char *)(v2 + 207) = (char)v4;
											*(char *)(v2 + 223) = (char)v4;
											// branch -> 0x2cf2c
											// 0x2cf2c
											return result;
										}
									lab_0x2cef4:
										// 0x2cef4
										v82 = v49;
										v43++;
										// branch -> 0x2cef4
									}
								}
								// 0x2cf10
								v4 = 0;
								*(char *)(v44 + 175) = 0;
								*(char *)(v2 + 207) = (char)v4;
								*(char *)(v2 + 223) = (char)v4;
								// branch -> 0x2cf2c
								// 0x2cf2c
								return result;
							}
							// 0x2cf2c
							return result;
						}
						// 0x2cb78
						if (v38 != 1) {
							// 0x2cb80
							if (v38 > 1) {
								// 0x2cd7c
								v7 = 161;
								v41 = v2;
								v8 = v41 + 160;
								*(char *)(v41 + 144) = -95;
								v6 = 163;
								v5 = 165;
								*(char *)(v2 + 145) = -93;
								v13 = 160;
								v11 = 162;
								*(char *)(v2 + 146) = (char)v5;
								v9 = 164;
								result = 166;
								*(char *)(v2 + 192) = (char)v13;
								v4 = 167;
								v12 = 169;
								*(char *)(v2 + 208) = (char)v13;
								v13 = 168;
								v10 = 171;
								*(char *)(v2 + 193) = (char)v7;
								v2 = 173;
								*(char *)(v8 + 49) = (char)v7;
								*(char *)(v8 + 34) = (char)v11;
								*(char *)(v8 + 50) = (char)v11;
								v11 = 170;
								*(char *)(v8 + 35) = (char)v6;
								*(char *)(v8 + 51) = (char)v6;
								*(char *)(v8 + 36) = (char)v9;
								*(char *)(v8 + 52) = (char)v9;
								v9 = 172;
								*(char *)(v8 + 37) = (char)v5;
								*(char *)(v8 + 53) = (char)v5;
								*(char *)(v8 + 38) = (char)result;
								*(char *)(v8 + 54) = (char)result;
								result = 174;
								*(char *)(v8 + 39) = (char)v4;
								*(char *)(v8 + 55) = (char)v4;
								v4 = 175;
								*(char *)(v8 + 40) = (char)v13;
								*(char *)(v8 + 56) = (char)v13;
								*(char *)(v8 + 41) = (char)v12;
								*(char *)(v8 + 57) = (char)v12;
								*(char *)(v8 + 42) = (char)v11;
								*(char *)(v8 + 58) = (char)v11;
								*(char *)(v8 + 43) = (char)v10;
								*(char *)(v8 + 59) = (char)v10;
								*(char *)(v8 + 44) = (char)v9;
								*(char *)(v8 + 60) = (char)v9;
								*(char *)(v8 + 45) = (char)v2;
								*(char *)(v8 + 61) = (char)v2;
								*(char *)(v8 + 46) = (char)result;
								*(char *)(v8 + 62) = (char)result;
								*(char *)(v8 + 47) = (char)v4;
								*(char *)(v8 + 63) = (char)v4;
								// branch -> 0x2cf2c
								// 0x2cf2c
								return result;
							}
							// 0x2cf2c
							return result;
						}
						// 0x2cb94
						v7 = 177;
						v39 = v2;
						v8 = v39 + 176;
						*(char *)(v39 + 144) = -79;
						v6 = 179;
						v5 = 181;
						*(char *)(v2 + 145) = -77;
						v13 = 176;
						v11 = 178;
						*(char *)(v2 + 146) = (char)v5;
						v9 = 180;
						result = 182;
						*(char *)(v2 + 160) = (char)v13;
						v4 = 183;
						v12 = 185;
						*(char *)(v2 + 192) = (char)v13;
						v10 = 187;
						v2 = 189;
						*(char *)(v8 + 32) = (char)v13;
						v13 = 184;
						*(char *)(v8 - 15) = (char)v7;
						*(char *)(v8 + 17) = (char)v7;
						*(char *)(v8 + 33) = (char)v7;
						*(char *)(v8 - 14) = (char)v11;
						*(char *)(v8 + 18) = (char)v11;
						*(char *)(v8 + 34) = (char)v11;
						v11 = 186;
						*(char *)(v8 - 13) = (char)v6;
						*(char *)(v8 + 19) = (char)v6;
						*(char *)(v8 + 35) = (char)v6;
						*(char *)(v8 - 12) = (char)v9;
						*(char *)(v8 + 20) = (char)v9;
						*(char *)(v8 + 36) = (char)v9;
						v9 = 188;
						*(char *)(v8 - 11) = (char)v5;
						*(char *)(v8 + 21) = (char)v5;
						*(char *)(v8 + 37) = (char)v5;
						*(char *)(v8 - 10) = (char)result;
						*(char *)(v8 + 22) = (char)result;
						*(char *)(v8 + 38) = (char)result;
						result = 190;
						*(char *)(v8 - 9) = (char)v4;
						*(char *)(v8 + 23) = (char)v4;
						*(char *)(v8 + 39) = (char)v4;
						v4 = 191;
						*(char *)(v8 - 8) = (char)v13;
						*(char *)(v8 + 24) = (char)v13;
						*(char *)(v8 + 40) = (char)v13;
						*(char *)(v8 - 7) = (char)v12;
						*(char *)(v8 + 25) = (char)v12;
						*(char *)(v8 + 41) = (char)v12;
						*(char *)(v8 - 6) = (char)v11;
						*(char *)(v8 + 26) = (char)v11;
						*(char *)(v8 + 42) = (char)v11;
						*(char *)(v8 - 5) = (char)v10;
						*(char *)(v8 + 27) = (char)v10;
						*(char *)(v8 + 43) = (char)v10;
						*(char *)(v8 - 4) = (char)v9;
						*(char *)(v8 + 28) = (char)v9;
						*(char *)(v8 + 44) = (char)v9;
						*(char *)(v8 - 3) = (char)v2;
						*(char *)(v8 + 29) = (char)v2;
						*(char *)(v8 + 45) = (char)v2;
						*(char *)(v8 - 2) = (char)result;
						*(char *)(v8 + 30) = (char)result;
						*(char *)(v8 + 46) = (char)result;
						*(char *)(v8 - 1) = (char)v4;
						*(char *)(v8 + 31) = (char)v4;
						*(char *)(v8 + 47) = (char)v4;
						// branch -> 0x2cf2c
						// 0x2cf2c
						return result;
					}
				lab_0x2ca4c:
					// 0x2ca4c
					v80 = v46;
					v81 = v8;
					// branch -> 0x2ca4c
				}
			} else {
				// 0x2c928
				v52 = v78;
				v53 = v8;
				// branch -> 0x2c928
				continue;
			}
		}
	}
	// 0x2ca3c
	v45 = v1 + 128;
	v7 = v45;
	v8 = 128;
	// branch -> 0x2ca4c
	while (true) {
		// 0x2ca4c
		*(char *)v45 = -128;
		v14 = v8;
		*(char *)(v7 + 1) = (char)(v14 + 1);
		v15 = v8;
		*(char *)(v7 + 2) = (char)(v14 + 2);
		v16 = v8;
		v8 = v16 + 8;
		*(char *)(v7 + 3) = (char)(v14 + 3);
		v17 = v8;
		*(char *)(v7 + 4) = (char)(v15 + 4);
		v18 = v8;
		*(char *)(v7 + 5) = (char)(v15 + 5);
		v19 = v8;
		*(char *)(v7 + 6) = (char)(v16 + 6);
		v20 = v8;
		*(char *)(v7 + 7) = (char)(v16 + 7);
		v21 = v8;
		v8 = v21 + 8;
		*(char *)(v7 + 8) = (char)(v17 % 256);
		v22 = v8;
		*(char *)(v7 + 9) = (char)(v17 + 1);
		v23 = v8;
		*(char *)(v7 + 10) = (char)(v18 + 2);
		v24 = v8;
		*(char *)(v7 + 11) = (char)(v18 + 3);
		v25 = v8;
		*(char *)(v7 + 12) = (char)(v18 + 4);
		v26 = v8;
		*(char *)(v7 + 13) = (char)(v19 + 5);
		v27 = v8;
		*(char *)(v7 + 14) = (char)(v20 + 6);
		v28 = v8;
		*(char *)(v7 + 15) = (char)(v21 + 7);
		v29 = v8;
		v8 = v29 + 8;
		*(char *)(v7 + 16) = (char)(v22 % 256);
		v30 = v8;
		*(char *)(v7 + 17) = (char)(v23 + 1);
		v31 = v8;
		*(char *)(v7 + 18) = (char)(v24 + 2);
		v32 = v8;
		*(char *)(v7 + 19) = (char)(v25 + 3);
		v33 = v8;
		*(char *)(v7 + 20) = (char)(v26 + 4);
		v34 = v8;
		*(char *)(v7 + 21) = (char)(v27 + 5);
		v35 = v8;
		*(char *)(v7 + 22) = (char)(v28 + 6);
		v36 = v8;
		*(char *)(v7 + 23) = (char)(v29 + 7);
		v37 = v8;
		v8 = v37 + 8;
		*(char *)(v7 + 24) = (char)(v30 % 256);
		*(char *)(v7 + 25) = (char)(v31 + 1);
		*(char *)(v7 + 26) = (char)(v32 + 2);
		*(char *)(v7 + 27) = (char)(v33 + 3);
		*(char *)(v7 + 28) = (char)(v34 + 4);
		*(char *)(v7 + 29) = (char)(v35 + 5);
		*(char *)(v7 + 30) = (char)(v36 + 6);
		*(char *)(v7 + 31) = (char)(v37 + 7);
		v46 = v7 + 32;
		v7 = v46;
		v47 = 3;
		v3 = v47;
		if (v47 != 0) {
			goto lab_0x2ca4c;
		}
		// 0x2cb60
		v48 = 0x1000000 * g34;
		result = 0;
		*(char *)(v2 + 255) = 0;
		if (v48 == 0x3000000) {
			// 0x2cca8
			v7 = 209;
			v40 = v2;
			v8 = v40 + 208;
			*(char *)(v40 + 144) = -47;
			v6 = 211;
			v5 = 213;
			*(char *)(v2 + 145) = -45;
			v13 = 208;
			v11 = 210;
			*(char *)(v2 + 146) = (char)v5;
			v9 = 212;
			result = 214;
			*(char *)(v2 + 160) = (char)v13;
			v4 = 215;
			v12 = 217;
			*(char *)(v2 + 192) = (char)v13;
			v13 = 216;
			v10 = 219;
			*(char *)(v2 + 161) = (char)v7;
			v2 = 221;
			*(char *)(v8 - 15) = (char)v7;
			*(char *)(v8 - 46) = (char)v11;
			*(char *)(v8 - 14) = (char)v11;
			v11 = 218;
			*(char *)(v8 - 45) = (char)v6;
			*(char *)(v8 - 13) = (char)v6;
			*(char *)(v8 - 44) = (char)v9;
			*(char *)(v8 - 12) = (char)v9;
			v9 = 220;
			*(char *)(v8 - 43) = (char)v5;
			*(char *)(v8 - 11) = (char)v5;
			*(char *)(v8 - 42) = (char)result;
			*(char *)(v8 - 10) = (char)result;
			result = 222;
			*(char *)(v8 - 41) = (char)v4;
			*(char *)(v8 - 9) = (char)v4;
			v4 = 223;
			*(char *)(v8 - 40) = (char)v13;
			*(char *)(v8 - 8) = (char)v13;
			*(char *)(v8 - 39) = (char)v12;
			*(char *)(v8 - 7) = (char)v12;
			*(char *)(v8 - 38) = (char)v11;
			*(char *)(v8 - 6) = (char)v11;
			*(char *)(v8 - 37) = (char)v10;
			*(char *)(v8 - 5) = (char)v10;
			*(char *)(v8 - 36) = (char)v9;
			*(char *)(v8 - 4) = (char)v9;
			*(char *)(v8 - 35) = (char)v2;
			*(char *)(v8 - 3) = (char)v2;
			*(char *)(v8 - 34) = (char)result;
			*(char *)(v8 - 2) = (char)result;
			*(char *)(v8 - 33) = (char)v4;
			*(char *)(v8 - 1) = (char)v4;
			// branch -> 0x2cf2c
			// 0x2cf2c
			return result;
		}
		// 0x2cb74
		v38 = v48 / 0x1000000;
		if (v48 > 0x3000000) {
			// 0x2cb88
			if (v38 <= 4) {
				// 0x2ce50
				v5 = 241;
				*(char *)(v2 + 144) = -15;
				v13 = 243;
				v12 = 245;
				*(char *)(v2 + 145) = -13;
				v11 = 240;
				v10 = 242;
				*(char *)(v2 + 146) = (char)v12;
				v9 = 244;
				result = 246;
				*(char *)(v2 + 160) = (char)v11;
				v4 = 247;
				*(char *)(v2 + 192) = (char)v11;
				*(char *)(v2 + 208) = (char)v11;
				*(char *)(v2 + 161) = (char)v5;
				*(char *)(v2 + 193) = (char)v5;
				*(char *)(v2 + 209) = (char)v5;
				*(char *)(v2 + 162) = (char)v10;
				*(char *)(v2 + 194) = (char)v10;
				*(char *)(v2 + 210) = (char)v10;
				*(char *)(v2 + 163) = (char)v13;
				*(char *)(v2 + 195) = (char)v13;
				*(char *)(v2 + 211) = (char)v13;
				*(char *)(v2 + 164) = (char)v9;
				*(char *)(v2 + 196) = (char)v9;
				*(char *)(v2 + 212) = (char)v9;
				*(char *)(v2 + 165) = (char)v12;
				*(char *)(v2 + 197) = (char)v12;
				*(char *)(v2 + 213) = (char)v12;
				*(char *)(v2 + 166) = (char)result;
				*(char *)(v2 + 198) = (char)result;
				*(char *)(v2 + 214) = (char)result;
				*(char *)(v2 + 167) = (char)v4;
				*(char *)(v2 + 199) = (char)v4;
				*(char *)(v2 + 215) = (char)v4;
				v44 = v2;
				v51 = v44 + 248;
				result = v51;
				v42 = 248;
				if (v42 <= 254) {
					v43 = v42;
					while (true) {
						// 0x2cef4
						v4 = v43 % 256;
						*(char *)(v51 - 80) = (char)v43;
						*(char *)(result - 48) = (char)v4;
						*(char *)(result - 32) = (char)v4;
						v49 = result + 1;
						result = v49;
						v50 = 254 - v42;
						v3 = v50;
						if (v50 != 0) {
							goto lab_0x2cef4;
						}
						// 0x2cf10
						// branch -> 0x2cf10
						// 0x2cf10
						v4 = 0;
						*(char *)(v2 + 175) = 0;
						*(char *)(v2 + 207) = (char)v4;
						*(char *)(v2 + 223) = (char)v4;
						// branch -> 0x2cf2c
						// 0x2cf2c
						return result;
					}
				}
				// 0x2cf10
				v4 = 0;
				*(char *)(v44 + 175) = 0;
				*(char *)(v2 + 207) = (char)v4;
				*(char *)(v2 + 223) = (char)v4;
				// branch -> 0x2cf2c
				// 0x2cf2c
				return result;
			}
			// 0x2cf2c
			return result;
		}
		// 0x2cb78
		if (v38 != 1) {
			// 0x2cb80
			if (v38 > 1) {
				// 0x2cd7c
				v7 = 161;
				v41 = v2;
				v8 = v41 + 160;
				*(char *)(v41 + 144) = -95;
				v6 = 163;
				v5 = 165;
				*(char *)(v2 + 145) = -93;
				v13 = 160;
				v11 = 162;
				*(char *)(v2 + 146) = (char)v5;
				v9 = 164;
				result = 166;
				*(char *)(v2 + 192) = (char)v13;
				v4 = 167;
				v12 = 169;
				*(char *)(v2 + 208) = (char)v13;
				v13 = 168;
				v10 = 171;
				*(char *)(v2 + 193) = (char)v7;
				v2 = 173;
				*(char *)(v8 + 49) = (char)v7;
				*(char *)(v8 + 34) = (char)v11;
				*(char *)(v8 + 50) = (char)v11;
				v11 = 170;
				*(char *)(v8 + 35) = (char)v6;
				*(char *)(v8 + 51) = (char)v6;
				*(char *)(v8 + 36) = (char)v9;
				*(char *)(v8 + 52) = (char)v9;
				v9 = 172;
				*(char *)(v8 + 37) = (char)v5;
				*(char *)(v8 + 53) = (char)v5;
				*(char *)(v8 + 38) = (char)result;
				*(char *)(v8 + 54) = (char)result;
				result = 174;
				*(char *)(v8 + 39) = (char)v4;
				*(char *)(v8 + 55) = (char)v4;
				v4 = 175;
				*(char *)(v8 + 40) = (char)v13;
				*(char *)(v8 + 56) = (char)v13;
				*(char *)(v8 + 41) = (char)v12;
				*(char *)(v8 + 57) = (char)v12;
				*(char *)(v8 + 42) = (char)v11;
				*(char *)(v8 + 58) = (char)v11;
				*(char *)(v8 + 43) = (char)v10;
				*(char *)(v8 + 59) = (char)v10;
				*(char *)(v8 + 44) = (char)v9;
				*(char *)(v8 + 60) = (char)v9;
				*(char *)(v8 + 45) = (char)v2;
				*(char *)(v8 + 61) = (char)v2;
				*(char *)(v8 + 46) = (char)result;
				*(char *)(v8 + 62) = (char)result;
				*(char *)(v8 + 47) = (char)v4;
				*(char *)(v8 + 63) = (char)v4;
				// branch -> 0x2cf2c
				// 0x2cf2c
				return result;
			}
			// 0x2cf2c
			return result;
		}
		// 0x2cb94
		v7 = 177;
		v39 = v2;
		v8 = v39 + 176;
		*(char *)(v39 + 144) = -79;
		v6 = 179;
		v5 = 181;
		*(char *)(v2 + 145) = -77;
		v13 = 176;
		v11 = 178;
		*(char *)(v2 + 146) = (char)v5;
		v9 = 180;
		result = 182;
		*(char *)(v2 + 160) = (char)v13;
		v4 = 183;
		v12 = 185;
		*(char *)(v2 + 192) = (char)v13;
		v10 = 187;
		v2 = 189;
		*(char *)(v8 + 32) = (char)v13;
		v13 = 184;
		*(char *)(v8 - 15) = (char)v7;
		*(char *)(v8 + 17) = (char)v7;
		*(char *)(v8 + 33) = (char)v7;
		*(char *)(v8 - 14) = (char)v11;
		*(char *)(v8 + 18) = (char)v11;
		*(char *)(v8 + 34) = (char)v11;
		v11 = 186;
		*(char *)(v8 - 13) = (char)v6;
		*(char *)(v8 + 19) = (char)v6;
		*(char *)(v8 + 35) = (char)v6;
		*(char *)(v8 - 12) = (char)v9;
		*(char *)(v8 + 20) = (char)v9;
		*(char *)(v8 + 36) = (char)v9;
		v9 = 188;
		*(char *)(v8 - 11) = (char)v5;
		*(char *)(v8 + 21) = (char)v5;
		*(char *)(v8 + 37) = (char)v5;
		*(char *)(v8 - 10) = (char)result;
		*(char *)(v8 + 22) = (char)result;
		*(char *)(v8 + 38) = (char)result;
		result = 190;
		*(char *)(v8 - 9) = (char)v4;
		*(char *)(v8 + 23) = (char)v4;
		*(char *)(v8 + 39) = (char)v4;
		v4 = 191;
		*(char *)(v8 - 8) = (char)v13;
		*(char *)(v8 + 24) = (char)v13;
		*(char *)(v8 + 40) = (char)v13;
		*(char *)(v8 - 7) = (char)v12;
		*(char *)(v8 + 25) = (char)v12;
		*(char *)(v8 + 41) = (char)v12;
		*(char *)(v8 - 6) = (char)v11;
		*(char *)(v8 + 26) = (char)v11;
		*(char *)(v8 + 42) = (char)v11;
		*(char *)(v8 - 5) = (char)v10;
		*(char *)(v8 + 27) = (char)v10;
		*(char *)(v8 + 43) = (char)v10;
		*(char *)(v8 - 4) = (char)v9;
		*(char *)(v8 + 28) = (char)v9;
		*(char *)(v8 + 44) = (char)v9;
		*(char *)(v8 - 3) = (char)v2;
		*(char *)(v8 + 29) = (char)v2;
		*(char *)(v8 + 45) = (char)v2;
		*(char *)(v8 - 2) = (char)result;
		*(char *)(v8 + 30) = (char)result;
		*(char *)(v8 + 46) = (char)result;
		*(char *)(v8 - 1) = (char)v4;
		*(char *)(v8 + 31) = (char)v4;
		*(char *)(v8 + 47) = (char)v4;
		// branch -> 0x2cf2c
		// 0x2cf2c
		return result;
	}
}

// Address range: 0x2cf34 - 0x2d070
int32_t function_2cf34(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x2cf3c
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0x2cf40
	g36 = v2;
	int32_t v3 = v1 + 180; // 0x2cf44
	g35 = v3;
	int32_t v4 = *(int32_t *)v2;                    // 0x2cf50
	int32_t v5 = 0x55ec * v4;                       // 0x2cf54
	int32_t v6 = v5 + v1;                           // 0x2cf5c
	unsigned char v7 = *(char *)(v6 + 184);         // 0x2cf60
	int32_t v8 = v7;                                // 0x2cf60
	int32_t v9 = 0x1000000 * *(int32_t *)(v5 + v3); // 0x2cf64
	int32_t v10 = v9 / 0x1000000;                   // 0x2cf64
	int32_t v11 = v8;                               // r28
	char v12 = *(char *)(v10 + v6 + 193);           // 0x2cf7c
	int32_t result;
	int32_t v13; // 0x2cfc0
	int32_t v14; // 0x2d010
	int32_t v15; // 0x2d018
	int32_t v16; // 0x2d044
	char v17;    // 0x2d030
	if (v7 != 1) {
		// 0x2cfc0
		v13 = g23;
		if (*(char *)*(int32_t *)(v13 - 0x77e4) != 0) {
			// 0x2cff8
			if (*(int32_t *)(g35 + 0x55ec * *(int32_t *)g36) > -1) {
				// 0x2cff8
				v14 = v11;
				// branch -> 0x2d010
			} else {
				// 0x2d00c
				v14 = 4;
				// branch -> 0x2d010
			}
			// 0x2d010
			g34 = v14;
			SetSpellTrans();
			v15 = v10;
			v16 = g23;
			if (v15 == -1) {
				// 0x2d044
				result = DrawSpellCel(629, 631, *(int32_t *)(v16 - 0x4fb0), 27, 56);
				// branch -> 0x2d05c
			} else {
				// 0x2d020
				v17 = *(char *)(v16 - 0x2cf8 + v15);
				result = DrawSpellCel(629, 631, *(int32_t *)(v16 - 0x4fb0), (int32_t)v17, 56);
				// branch -> 0x2d05c
			}
			// 0x2d05c
			return result;
		}
		// 0x2cfd0
		if (0x1000000 * v11 != 0x4000000) {
			// 0x2cfdc
			if (*(int32_t *)(*(int32_t *)(v13 - 0x769c) + 56 * v10 + 24) == 0) {
				// 0x2cff4
				v11 = 4;
				// branch -> 0x2cff8
			}
		}
		// 0x2cff8
		if (*(int32_t *)(g35 + 0x55ec * *(int32_t *)g36) > -1) {
			// 0x2cff8
			v14 = v11;
			// branch -> 0x2d010
		} else {
			// 0x2d00c
			v14 = 4;
			// branch -> 0x2d010
		}
		// 0x2d010
		g34 = v14;
		SetSpellTrans();
		v15 = v10;
		v16 = g23;
		if (v15 == -1) {
			// 0x2d044
			result = DrawSpellCel(629, 631, *(int32_t *)(v16 - 0x4fb0), 27, 56);
			// branch -> 0x2d05c
		} else {
			// 0x2d020
			v17 = *(char *)(v16 - 0x2cf8 + v15);
			result = DrawSpellCel(629, 631, *(int32_t *)(v16 - 0x4fb0), (int32_t)v17, 56);
			// branch -> 0x2d05c
		}
		// 0x2d05c
		return result;
	}
	// 0x2cf94
	if (v9 == -0x1000000) {
		// 0x2cfc0
		v13 = g23;
		if (*(char *)*(int32_t *)(v13 - 0x77e4) == 0) {
			// 0x2cfd0
			if (0x1000000 * v11 != 0x4000000) {
				// 0x2cfdc
				if (*(int32_t *)(*(int32_t *)(v13 - 0x769c) + 56 * v10 + 24) == 0) {
					// 0x2cff4
					v11 = 4;
					// branch -> 0x2cff8
				}
			}
		}
		// 0x2cff8
		if (*(int32_t *)(g35 + 0x55ec * *(int32_t *)g36) > -1) {
			// 0x2cff8
			v14 = v11;
			// branch -> 0x2d010
		} else {
			// 0x2d00c
			v14 = 4;
			// branch -> 0x2d010
		}
		// 0x2d010
		g34 = v14;
		SetSpellTrans();
		v15 = v10;
		v16 = g23;
		if (v15 == -1) {
			// 0x2d044
			result = DrawSpellCel(629, 631, *(int32_t *)(v16 - 0x4fb0), 27, 56);
			// branch -> 0x2d05c
		} else {
			// 0x2d020
			v17 = *(char *)(v16 - 0x2cf8 + v15);
			result = DrawSpellCel(629, 631, *(int32_t *)(v16 - 0x4fb0), (int32_t)v17, 56);
			// branch -> 0x2d05c
		}
		// 0x2d05c
		return result;
	}
	// 0x2cf9c
	if (function_b5d18(v4, v10, v8, 1) == 0) {
		// 0x2cfb0
		v11 = 4;
		// branch -> 0x2cfb4
	}
	// 0x2cfb4
	if ((int32_t)v12 + (int32_t) * (char *)(v6 + 0x5570) <= 0) {
		// 0x2cfbc
		v11 = 4;
		// branch -> 0x2cfc0
	}
	// 0x2cfc0
	v13 = g23;
	if (*(char *)*(int32_t *)(v13 - 0x77e4) == 0) {
		// 0x2cfd0
		if (0x1000000 * v11 != 0x4000000) {
			// 0x2cfdc
			if (*(int32_t *)(*(int32_t *)(v13 - 0x769c) + 56 * v10 + 24) == 0) {
				// 0x2cff4
				v11 = 4;
				// branch -> 0x2cff8
			}
		}
	}
	// 0x2cff8
	if (*(int32_t *)(g35 + 0x55ec * *(int32_t *)g36) > -1) {
		// 0x2cff8
		v14 = v11;
		// branch -> 0x2d010
	} else {
		// 0x2d00c
		v14 = 4;
		// branch -> 0x2d010
	}
	// 0x2d010
	g34 = v14;
	SetSpellTrans();
	v15 = v10;
	v16 = g23;
	if (v15 == -1) {
		// 0x2d044
		result = DrawSpellCel(629, 631, *(int32_t *)(v16 - 0x4fb0), 27, 56);
		// branch -> 0x2d05c
	} else {
		// 0x2d020
		v17 = *(char *)(v16 - 0x2cf8 + v15);
		result = DrawSpellCel(629, 631, *(int32_t *)(v16 - 0x4fb0), (int32_t)v17, 56);
		// branch -> 0x2d05c
	}
	// 0x2d05c
	return result;
}

// Address range: 0x2d070 - 0x2d6a8
int32_t DrawSpellList(void)
{
	// 0x2d070
	g20 = *(int32_t *)(g23 - 0x76a4);
	g26 = *(int32_t *)(g23 - 0x64a0);
	int32_t v1 = 636; // r27
	g30 = 495;
	g27 = *(int32_t *)(g23 - 0x76b0);
	g21 = *(int32_t *)(g23 - 0x769c);
	g29 = *(int32_t *)(g23 - 0x77ac);
	g28 = *(int32_t *)(g23 - 0x77a8);
	*(int32_t *)*(int32_t *)(g23 - 0x76a0) = -1;
	*(char *)g20 = (char)0;
	function_2dc1c();
	g25 = 0;
	int32_t v2 = 0; // 0x2d0dc
	// branch -> 0x2d0c0
	while (true) {
		// 0x2d0c0
		int32_t v3;
		int32_t v4;
		int32_t v5;
		int32_t v6; // 0x2d1e4
		int32_t v7; // 0x2d1bc
		int32_t v8; // 0x2d1c4
		if (v2 == 2) {
			// 0x2d140
			g34 = 2;
			SetSpellTrans();
			int32_t v9 = g28 + 0x55ec * *(int32_t *)g29 + 276; // 0x2d15c
			g16 = *(int32_t *)(v9 + 4);
			v3 = 44;
			v5 = *(int32_t *)v9;
			// branch -> 0x2d19c
		} else {
			// 0x2d0c8
			if (v2 > 2) {
				// 0x2d170
				g34 = 3;
				SetSpellTrans();
				int32_t v10 = g28 + 0x55ec * *(int32_t *)g29 + 0x5560; // 0x2d18c
				g16 = *(int32_t *)(v10 + 4);
				v3 = 45;
				v5 = *(int32_t *)v10;
				// branch -> 0x2d19c
			} else {
				// 0x2d0cc
				int32_t v11;
				int32_t v12;
				if (v2 == 0) {
					// 0x2d0e8
					g34 = 0;
					SetSpellTrans();
					int32_t v13 = g28 + 0x55ec * *(int32_t *)g29 + 268; // 0x2d104
					g16 = *(int32_t *)(v13 + 4);
					v3 = 46;
					v5 = *(int32_t *)v13;
					// branch -> 0x2d19c
				} else {
					// 0x2d0d4
					if (v2 > 0) {
						int32_t v14 = g28 + 0x55ec * *(int32_t *)g29 + 260; // 0x2d12c
						g16 = *(int32_t *)(v14 + 4);
						v3 = 47;
						v5 = *(int32_t *)v14;
						// branch -> 0x2d19c
					} else {
						v3 = v12;
						v5 = v11;
					}
				}
				// 0x2d19c
				g19 = 1;
				g17 = g23 - 0x2cf7;
				g18 = 0;
				g24 = 1;
				v6 = 1;
				v8 = 0;
				v7 = 1;
				v4 = g21 + 56;
				// branch -> 0x2d1b8
			lab_0x2d1b8_2:
				while (true) {
					// 0x2d1b8
					int32_t v15; // 0x2d620
					int32_t v16; // 0x2d624
					int32_t v17; // 0x2d638
					int32_t v18; // 0x2d640
					if ((g16 & v7 || v8 & v5) != 0) {
						// 0x2d1d8
						if (g25 == 1) {
							int32_t v19 = g28 + 0x55ec * *(int32_t *)g29;                    // 0x2d1ec
							unsigned char v20 = *(char *)(v19 + v6 + 193);                   // 0x2d1f0
							int32_t v21 = (int32_t) * (char *)(v19 + 0x5570) + (int32_t)v20; // 0x2d200
							int32_t v22 = v21 < 0 ? 0 : v21;
							g22 = v22;
							g34 = v22 < 1 ? 4 : 1;
							SetSpellTrans();
							// branch -> 0x2d22c
						}
						// 0x2d22c
						if (*(char *)*(int32_t *)(g23 - 0x77e4) == 0) {
							// 0x2d23c
							if (*(int32_t *)(v4 + 24) == 0) {
								// 0x2d24c
								g34 = 4;
								SetSpellTrans();
								// branch -> 0x2d254
							}
						}
						int32_t v23 = *(int32_t *)(g23 - 0x4fb0); // 0x2d25c
						DrawSpellCel(v1, g30, v23, (int32_t) * (char *)g17, 56);
						int32_t v24 = g30;                                    // 0x2d274
						uint32_t v25 = v24 - 216;                             // 0x2d274
						int32_t v26 = *(int32_t *)*(int32_t *)(g23 - 0x76a8); // 0x2d278
						int32_t v27 = g31;                                    // 0x2d27c
						int32_t v28;                                          // 0x2d60c
						if (v26 >= v27 - 64) {
							// 0x2d288
							if (v26 < v27 - 8) {
								int32_t v29 = *(int32_t *)*(int32_t *)(g23 - 0x76ac); // 0x2d298
								if (v29 >= v25) {
									// 0x2d2a4
									if (v29 < v24 - 160) {
										// 0x2d2b0
										*(int32_t *)g32 = g24;
										*(int32_t *)g27 = g25;
										DrawSpellCel(g31, g30, *(int32_t *)(g23 - 0x4fb0), v3, 56);
										int32_t v30 = g25; // 0x2d2d0
										int32_t v31;       // 0x2d594
										int32_t v32;       // 0x2d5d4
										if (v30 == 2) {
											// 0x2d390
											g37 = *(int32_t *)(g23 - 0x6488);
											g38 = *(int32_t *)(g21 + (56 * *(int32_t *)g32 | 4));
											sprintf();
											g38 = 0;
											int32_t v33 = *(int32_t *)g32;                // 0x2d3b4
											int32_t v34 = g28 + 0x55ec * *(int32_t *)g29; // 0x2d3bc
											uint32_t v35 = *(int32_t *)(v34 + 0x4828);    // 0x2d3c0
											int32_t v36 = 0;                              // 0x2d44433
											if (v35 >= 1) {
												int32_t v37 = 0; // 0x2d400
												int32_t v38;     // 0x2d40020
												while (true) {
													// 0x2d3d4
													v38 = v37;
													int32_t v39; // 0x2d404
													int32_t v40; // 0x2d408
													if (*(int32_t *)(v34 + 3760) != -1) {
														int32_t v41 = *(int32_t *)(v34 + 3972); // 0x2d3e0
														if (v41 != 21) {
															// 0x2d3ec
															if (v41 != 22) {
																v38 = v37;
															lab_0x2d404_2:
																// 0x2d404
																v39 = v34 + 368;
																v40 = v35 - 1;
																if (v40 == 0) {
																	// break -> 0x2d40c
																	break;
																}
																v35 = v40;
																v37 = v38;
																v34 = v39;
																// continue -> 0x2d3d4
																continue;
															}
														}
														// 0x2d3f4
														if (v33 != *(int32_t *)(v34 + 3976)) {
															v38 = v37;
															goto lab_0x2d404_2;
														}
														int32_t v42 = v37 + 1; // 0x2d400
														g38 = v42;
														v38 = v42;
														// branch -> 0x2d404
														goto lab_0x2d404_2;
													}
													// 0x2d404
													v39 = v34 + 368;
													v40 = v35 - 1;
													if (v40 == 0) {
														// break -> 0x2d40c
														break;
													}
													v35 = v40;
													v37 = v38;
													v34 = v39;
													// continue -> 0x2d3d4
												}
												// 0x2d40c
												v36 = v38;
												// branch -> 0x2d40c
											}
											int32_t v43 = 2; // 0x2d4f4
											// branch -> 0x2d418
											int32_t v44; // 0x2d4f8
											while (true) {
												int32_t v45 = v36; // 0x2d478
												if (*(int32_t *)(v34 + 0x485c) != -1) {
													// 0x2d424
													if (*(int32_t *)(v34 + 0x4930) < 23) {
														// 0x2d438
														if (v33 == *(int32_t *)(v34 + 0x4934)) {
															int32_t v46 = v36 + 1; // 0x2d444
															g38 = v46;
															v45 = v46;
															// branch -> 0x2d448
														} else {
															v45 = v36;
														}
													} else {
														v45 = v36;
													}
												}
												int32_t v47 = v45; // 0x2d4b0
												if (*(int32_t *)(v34 + 0x49cc) != -1) {
													// 0x2d458
													if (*(int32_t *)(v34 + 0x4aa0) < 23) {
														// 0x2d46c
														if (v33 == *(int32_t *)(v34 + 0x4aa4)) {
															int32_t v48 = v45 + 1; // 0x2d478
															g38 = v48;
															v47 = v48;
															// branch -> 0x2d47c
														} else {
															v47 = v45;
														}
													} else {
														v47 = v45;
													}
												}
												int32_t v49 = v47; // 0x2d4e8
												if (*(int32_t *)(v34 + 0x4b3c) != -1) {
													// 0x2d490
													if (*(int32_t *)(v34 + 0x4c10) < 23) {
														// 0x2d4a4
														if (v33 == *(int32_t *)(v34 + 0x4c14)) {
															int32_t v50 = v47 + 1; // 0x2d4b0
															g38 = v50;
															v49 = v50;
															// branch -> 0x2d4b4
														} else {
															v49 = v47;
														}
													} else {
														v49 = v47;
													}
												}
												// 0x2d4b4
												v44 = v49;
												if (*(int32_t *)(v34 + 0x4cac) != -1) {
													// 0x2d4c8
													if (*(int32_t *)(v34 + 0x4d80) < 23) {
														// 0x2d4dc
														if (v33 == *(int32_t *)(v34 + 0x4d84)) {
															int32_t v51 = v49 + 1; // 0x2d4e8
															g38 = v51;
															v44 = v51;
															// branch -> 0x2d4ec
														} else {
															v44 = v49;
														}
													} else {
														v44 = v49;
													}
												}
												int32_t v52 = v34 + 1472; // 0x2d4ec
												int32_t v53 = v43 - 1;    // 0x2d4f4
												if (v53 == 0) {
													// break -> 0x2d4f8
													break;
												}
												v43 = v53;
												v36 = v44;
												v34 = v52;
												// continue -> 0x2d418
											}
											// 0x2d4f8
											g34 = g35;
											if (v44 == 1) {
												// 0x2d500
												g37 = *(int32_t *)(g23 - 0x648c);
												strcpy();
												// branch -> 0x2d51c
											} else {
												// 0x2d510
												g37 = *(int32_t *)(g23 - 0x6490);
												sprintf();
												// branch -> 0x2d51c
											}
											// 0x2d51c
											function_2dbac(g35, 1);
											// branch -> 0x2d588
										} else {
											// 0x2d2d8
											if (v30 > 2) {
												// 0x2d2ec
												if (v30 == 3) {
													// 0x2d52c
													g37 = *(int32_t *)(g23 - 0x6494);
													g38 = *(int32_t *)(g21 + (56 * *(int32_t *)g32 | 4));
													sprintf();
													int32_t v54 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)g29 + 2876); // 0x2d554
													g38 = v54;
													g34 = g35;
													if (v54 == 1) {
														// 0x2d560
														g37 = *(int32_t *)(g23 - 0x6498);
														strcpy();
														// branch -> 0x2d57c
													} else {
														// 0x2d570
														g37 = *(int32_t *)(g23 - 0x649c);
														sprintf();
														// branch -> 0x2d57c
													}
													// 0x2d57c
													function_2dbac(g35, 1);
													// branch -> 0x2d588
												}
											} else {
												// 0x2d2dc
												if (v30 == 0) {
													// 0x2d2f8
													g37 = *(int32_t *)(g23 - 0x6474);
													g38 = *(int32_t *)(g21 + 56 * *(int32_t *)g32 + 8);
													sprintf();
													// branch -> 0x2d588
												} else {
													// 0x2d2e4
													if (v30 > 0) {
														// 0x2d318
														g37 = *(int32_t *)(g23 - 0x6478);
														g38 = *(int32_t *)(g21 + (56 * *(int32_t *)g32 | 4));
														sprintf();
														if (*(int32_t *)g32 == 31) {
															// 0x2d340
															g37 = *(int32_t *)(g23 - 0x647c);
															sprintf();
															function_2dbac(g35, 1);
															// branch -> 0x2d358
														}
														int32_t v55 = g22; // 0x2d358
														if (v55 == 0) {
															// 0x2d360
															g37 = *(int32_t *)(g23 - 0x6480);
															sprintf();
															// branch -> 0x2d380
														} else {
															// 0x2d370
															g37 = *(int32_t *)(g23 - 0x6484);
															g38 = v55;
															sprintf();
															// branch -> 0x2d380
														}
														// 0x2d380
														function_2dbac(g35, 1);
														// branch -> 0x2d588
													}
												}
												// 0x2d588
												v32 = 0;
												v31 = 0;
												// branch -> 0x2d590
											lab_0x2d590_2:
												while (true) {
													int32_t v56 = g28 + 0x55ec * *(int32_t *)g29; // 0x2d5a0
													int32_t v57 = v31;                            // 0x2d600
													int32_t v58 = v32;                            // 0x2d5fc
													if (*(int32_t *)g32 == *(int32_t *)(v56 + v31 + 288)) {
														// 0x2d5b0
														if (*(int32_t *)g27 == (int32_t) * (char *)(v56 + v32 + 304)) {
															// 0x2d5c8
															DrawSpellCel(g31, g30, *(int32_t *)(g23 - 0x4fb0), v32 + 48, 56);
															g38 = g36 + 5;
															g37 = g26;
															sprintf();
															function_2dbac(g35, 1);
															v57 = g33;
															v58 = g36;
															// branch -> 0x2d5fc
														} else {
															v57 = v31;
															v58 = v32;
														}
													}
													int32_t v59 = v58 + 1; // 0x2d5fc
													int32_t v60 = v57 + 4; // 0x2d600
													if (v59 >= 4) {
														// break -> 0x2d60c
														break;
													}
													v32 = v59;
													v31 = v60;
													// continue -> 0x2d590
												}
												// 0x2d60c
												// branch -> 0x2d60c
												// 0x2d60c
												v28 = g31 - 56;
												v1 = v28;
												if (v28 == 20) {
												lab_0x2d618:
													// 0x2d618
													v1 = 636;
													g30 -= 56;
													// branch -> 0x2d620
												}
											lab_0x2d620:
												// 0x2d620
												v15 = g18;
												v16 = g19;
												v17 = g24 + 1;
												g24 = v17;
												v18 = v4 + 56;
												g17++;
												if (v17 >= 37) {
													// break -> 0x2d654
													break;
												}
												v6 = v17;
												v8 = v15;
												v7 = v16;
												v4 = v18;
												// continue -> 0x2d1b8
												continue;
											}
											// 0x2d588
											v32 = 0;
											v31 = 0;
											// branch -> 0x2d590
											goto lab_0x2d590_2;
										}
										// 0x2d588
										v32 = 0;
										v31 = 0;
										// branch -> 0x2d590
										goto lab_0x2d590_2;
									}
								}
							}
						}
						// 0x2d60c
						v28 = v27 - 56;
						v1 = v28;
						if (v28 == 20) {
							goto lab_0x2d618;
						}
						goto lab_0x2d620;
					}
					// 0x2d620
					v15 = g18;
					v16 = g19;
					v17 = g24 + 1;
					g24 = v17;
					v18 = v4 + 56;
					g17++;
					if (v17 >= 37) {
						// break -> 0x2d654
						break;
					}
					v6 = v17;
					v8 = v15;
					v7 = v16;
					v4 = v18;
					// continue -> 0x2d1b8
				}
				// 0x2d654
				int32_t v61; // 0x2d674
				if ((g16 || v5) != 0) {
					int32_t v62 = v1; // 0x2d66c
					if (v62 != 636) {
						// 0x2d674
						v61 = v62 - 56;
						v1 = v61;
						// branch -> 0x2d678
					lab_0x2d678:
						// 0x2d678
						if (v61 == 20) {
							// 0x2d680
							v1 = 636;
							g30 -= 56;
							// branch -> 0x2d688
						}
						int32_t v63 = g25 + 1; // 0x2d688
						g25 = v63;
						if (v63 >= 4) {
							// break -> 0x2d694
							break;
						}
						v2 = v63;
						v12 = v3;
						v11 = v5;
						// continue -> 0x2d0c0
						continue;
					}
				}
				// 0x2d678
				v61 = v1;
				// branch -> 0x2d678
				goto lab_0x2d678;
			}
			// 0x2d19c
			g19 = 1;
			g17 = g23 - 0x2cf7;
			g18 = 0;
			g24 = 1;
			v6 = 1;
			v8 = 0;
			v7 = 1;
			v4 = g21 + 56;
			// branch -> 0x2d1b8
			goto lab_0x2d1b8_2;
		}
		// 0x2d19c
		g19 = 1;
		g17 = g23 - 0x2cf7;
		g18 = 0;
		g24 = 1;
		v6 = 1;
		v8 = 0;
		v7 = 1;
		v4 = g21 + 56;
		// branch -> 0x2d1b8
		goto lab_0x2d1b8_2;
	}
	// 0x2d694
	return 0;
}

// Address range: 0x2d6a8 - 0x2d72c
int32_t function_2d6a8(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x76b8); // 0x2d6b0
	int32_t result = v1;                     // r3
	int32_t v2 = *(int32_t *)(g23 - 0x76a0); // r30
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0x2d6c4
	*(int32_t *)v1 = 0;
	if (*(int32_t *)v2 != -1) {
		// 0x2d6dc
		function_2dc1c();
		result = *(int32_t *)(g23 - 0x76bc);
		int32_t v4 = v3 + 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x2d6fc
		*(int32_t *)(v4 + 180) = *(int32_t *)v2;
		int32_t v5 = 0x1000000 * *(int32_t *)*(int32_t *)(g23 - 0x76b0) / 0x1000000; // 0x2d708
		*(char *)(v4 + 184) = (char)v5;
		*(int32_t *)result = 255;
		// branch -> 0x2d714
	}
	// 0x2d714
	return result;
}

// Address range: 0x2d72c - 0x2d824
int32_t function_2d72c(int32_t result)
{
	int32_t v1 = *(int32_t *)(g23 - 0x76a0); // 0x2d72c
	int32_t v2 = *(int32_t *)(g23 - 0x76b0); // 0x2d730
	int32_t v3 = *(int32_t *)v1;             // 0x2d734
	int32_t v4 = *(int32_t *)(g23 - 0x77ac); // 0x2d738
	int32_t v5 = *(int32_t *)(g23 - 0x77a8); // 0x2d740
	if (v3 == -1) {
		// bb
		return result;
	}
	int32_t v6 = -1;                           // r0
	int32_t v7 = *(int32_t *)v2;               // 0x2d750
	int32_t v8 = 0x55ec * *(int32_t *)v4 + v5; // 0x2d758
	int32_t *v9 = (int32_t *)(v8 + 288);       // 0x2d75c
	int32_t v10 = v3;                          // 0x2d788
	int32_t v11 = v8;                          // 0x2d77c
	if (v3 == *v9) {
		// 0x2d768
		if (v7 == (int32_t) * (char *)(v8 + 304)) {
			// 0x2d778
			*v9 = -1;
			v10 = v3;
			v11 = v8;
			// branch -> 0x2d77c
		} else {
			v10 = v3;
			v11 = v8;
		}
	}
	int32_t v12 = v11 + 4;                 // 0x2d77c
	int32_t v13 = v11 + 1;                 // 0x2d780
	int32_t *v14 = (int32_t *)(v11 + 292); // 0x2d784
	int32_t v15 = v10;                     // 0x2d7b0
	int32_t v16 = v13;                     // 0x2d7a8
	int32_t v17 = v12;                     // 0x2d7ac
	if (v10 == *v14) {
		// 0x2d790
		if (v7 == (int32_t) * (char *)(v11 + 305)) {
			// 0x2d7a0
			*v14 = v6;
			v15 = v3;
			v16 = v13;
			v17 = v12;
			// branch -> 0x2d7a4
		} else {
			v15 = v10;
			v16 = v13;
			v17 = v12;
		}
	}
	int32_t *v18 = (int32_t *)(v17 + 292); // 0x2d7a4
	int32_t v19 = v15;                     // 0x2d7d8
	if (v15 == *v18) {
		// 0x2d7b8
		if (v7 == (int32_t) * (char *)(v16 + 305)) {
			// 0x2d7c8
			*v18 = v6;
			v19 = v3;
			// branch -> 0x2d7cc
		} else {
			v19 = v15;
		}
	}
	int32_t *v20 = (int32_t *)(296 + v17); // 0x2d7cc
	if (v19 == *v20) {
		// 0x2d7e0
		if (v7 == (int32_t) * (char *)(306 + v16)) {
			// 0x2d7f0
			*v20 = v6;
			// branch -> 0x2d7f4
		}
	}
	int32_t v21 = v5 + 0x55ec * *(int32_t *)v4; // 0x2d804
	int32_t result2 = v21 + result;             // r3
	*(int32_t *)(v21 + 4 * result + 288) = *(int32_t *)v1;
	int32_t v22 = 0x1000000 * *(int32_t *)v2 / 0x1000000; // 0x2d818
	*(char *)(result2 + 304) = (char)v22;
	return result2;
}

// Address range: 0x2d824 - 0x2d918
int32_t function_2d824(int32_t result)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8);                           // 0x2d830
	int32_t v2 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v1; // 0x2d848
	int32_t v3 = *(int32_t *)(v2 + 4 * result + 288);                  // 0x2d850
	if (v3 == -1) {
		// 0x2d904
		return result;
	}
	int32_t v4 = v2 + result + 304; // 0x2d860
	char v5 = *(char *)v4;          // 0x2d860
	int32_t v6;                     // r3
	int32_t result2;                // 0x2d914
	if (v5 == 2) {
		// 0x2d8a8
		g30 = *(int32_t *)(v2 + 280);
		// branch -> 0x2d8bc
		// 0x2d8bc
		if (g30 % 2 != 0) {
			// 0x2d8e8
			v6 = *(int32_t *)(g23 - 0x76bc);
			*(int32_t *)(v2 + 180) = v3;
			*(char *)(v2 + 184) = *(char *)v4;
			*(int32_t *)v6 = 255;
			result2 = v6;
			// branch -> 0x2d904
		} else {
			result2 = 0;
		}
		// 0x2d904
		return result2;
	}
	// 0x2d870
	if (v5 > 2) {
		// 0x2d884
		if (v5 == 3) {
			// 0x2d8b4
			g30 = *(int32_t *)(v2 + 0x5564);
			// branch -> 0x2d8bc
		}
		// 0x2d8bc
		if (g30 % 2 != 0) {
			// 0x2d8e8
			v6 = *(int32_t *)(g23 - 0x76bc);
			*(int32_t *)(v2 + 180) = v3;
			*(char *)(v2 + 184) = *(char *)v4;
			*(int32_t *)v6 = 255;
			result2 = v6;
			// branch -> 0x2d904
		} else {
			result2 = 0;
		}
		// 0x2d904
		return result2;
	}
	// 0x2d874
	if (v5 == 0) {
		// 0x2d890
		g30 = *(int32_t *)(v2 + 272);
		// branch -> 0x2d8bc
	} else {
		// 0x2d87c
		if (v5 > 0) {
			// 0x2d89c
			g30 = *(int32_t *)(v2 + 264);
			// branch -> 0x2d8bc
		}
	}
	// 0x2d8bc
	if (g30 % 2 != 0) {
		// 0x2d8e8
		v6 = *(int32_t *)(g23 - 0x76bc);
		*(int32_t *)(v2 + 180) = v3;
		*(char *)(v2 + 184) = *(char *)v4;
		*(int32_t *)v6 = 255;
		result2 = v6;
		// branch -> 0x2d904
	} else {
		result2 = 0;
	}
	// 0x2d904
	return result2;
}

// Address range: 0x2d918 - 0x2dbac
int32_t function_2d918(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36; // 0x2d918
	int32_t v2 = g10; // 0x2d91c
	g36 = a3;
	int32_t v3 = g35; // 0x2d924
	g35 = a2;
	int32_t v4 = g33; // 0x2d92c
	g33 = a1;
	g34 = *(int32_t *)(g23 - 0x4fa4);
	int32_t v5 = function_c9948();             // 0x2d940
	int32_t v6;                                // bp-24
	int32_t v7 = function_4d7c4(v5, g35, &v6); // 0x2d94c
	int32_t v8 = 0x1000000 * g36;              // 0x2d954
	g37 = v6;
	int32_t v9 = g33 + *(int32_t *)*(int32_t *)(g23 - 0x7804); // 0x2d964
	int32_t v10 = v9;                                          // r7
	g39 = v6 + v7;
	int32_t v11;    // r0
	int32_t v12;    // r3
	int32_t result; // 0x2db8c
	if (v8 == 0x1000000) {
		int32_t v13 = v9; // 0x2da6035
		int32_t v14 = v7; // 0x2da5032
	lab_0x2da4c:
		while (true) {
			int32_t v15 = 13;  // 0x2da6c
			int32_t v16 = v13; // 0x2da60
			int32_t v17 = v14; // 0x2da50
			                   // branch -> 0x2da50
		lab_0x2da50:;
			int32_t v18; // 0x2daac
			int32_t v19; // 0x2dab0
			int32_t v20; // 0x2dab0
			while (true) {
				char v21 = *(char *)v17; // 0x2da50
				int32_t v22 = v17 + 1;   // 0x2da54
				int32_t v23 = v21;       // 0x2da58
				v11 = v23;
				int32_t v24; // 0x2daa4
				if (v21 > -1) {
					// 0x2da6c
					g37 = v15 - v23;
					int32_t v25 = v16; // 0x2da98
					int32_t v26 = v22; // 0x2da70
					// branch -> 0x2da70
					while (true) {
						unsigned char v27 = *(char *)v26; // 0x2da70
						int32_t v28 = v27;                // 0x2da70
						v12 = v26 + 1;
						char v29;
						if (v27 < 254) {
							// 0x2da88
							if (v27 >= 240) {
								// 0x2da90
								v29 = v28 - 62;
								// branch -> 0x2da94
							} else {
								v29 = v27;
							}
						} else {
							// 0x2da80
							v29 = -65;
							// branch -> 0x2da94
						}
						int32_t v30 = v11 - 1; // 0x2da94
						v11 = v30;
						*(char *)v25 = v29;
						int32_t v31 = v10 + 1; // 0x2da9c
						v10 = v31;
						if (v30 == 0) {
							// 0x2daa4
							v18 = v12;
							v19 = v31;
							v24 = g37;
							// branch -> 0x2daa4
						lab_0x2daa4:
							// 0x2daa4
							if (v24 == 0) {
								// break (via goto) -> 0x2daac
								goto lab_0x2daac;
							}
							v15 = v24;
							v16 = v19;
							v17 = v18;
							// continue (via goto) -> 0x2da50
							goto lab_0x2da50;
						} else {
							// 0x2da94
							v25 = v31;
							v26 = v12;
							// branch -> 0x2da70
							continue;
						}
					}
					int32_t v32 = g39; // 0x2daac
					v20 = v19 - 781;
					v10 = v20;
					if (v18 == v32) {
						// break (via goto) -> 0x2db88
						goto lab_0x2db88_3;
					}
					v13 = v20;
					v14 = v18;
					// continue (via goto) -> 0x2da4c
					goto lab_0x2da4c;
				} else {
					int32_t v33 = v16 - v23; // 0x2da60
					v10 = v33;
					int32_t v34 = v23 + v15; // 0x2da64
					g37 = v34;
					v18 = v22;
					v19 = v33;
					v24 = v34;
					// branch -> 0x2daa4
					goto lab_0x2daa4;
				}
				// 0x2daa4
				if (v24 == 0) {
					// break -> 0x2daac
					break;
				}
				v15 = v24;
				v16 = v19;
				v17 = v18;
				// continue -> 0x2da50
			}
		lab_0x2daac:
			// 0x2daac
			v20 = v19 - 781;
			v10 = v20;
			if (v18 == g39) {
				// break -> 0x2db88
				break;
			}
			v13 = v20;
			v14 = v18;
			// continue -> 0x2da4c
		}
		// 0x2db88
		result = function_c9acc(*(int32_t *)(g23 - 0x4fa4));
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return result;
	}
	// 0x2d970
	int32_t v35; // 0x2db2023
	int32_t v36; // 0x2db3026
	if (v8 > 0x1000000) {
		// 0x2d980
		if (v8 <= 0x2000000) {
			int32_t v37 = v9; // 0x2dad017
			int32_t v38 = v7; // 0x2dac014
		lab_0x2dabc:
			while (true) {
				int32_t v39 = 13;  // 0x2dadc
				int32_t v40 = v37; // 0x2dad0
				int32_t v41 = v38; // 0x2dac0
				                   // branch -> 0x2dac0
			lab_0x2dac0:;
				int32_t v42; // 0x2db0c
				int32_t v43; // 0x2db10
				int32_t v44; // 0x2db10
				while (true) {
					char v45 = *(char *)v41; // 0x2dac0
					int32_t v46 = v41 + 1;   // 0x2dac4
					int32_t v47 = v45;       // 0x2dac8
					v11 = v47;
					int32_t v48; // 0x2db04
					if (v45 > -1) {
						// 0x2dadc
						g37 = v39 - v47;
						int32_t v49 = v40; // 0x2daf8
						int32_t v50 = v46; // 0x2dae0
						// branch -> 0x2dae0
						while (true) {
							unsigned char v51 = *(char *)v50; // 0x2dae0
							int32_t v52 = v51;                // 0x2dae0
							v12 = v50 + 1;
							char v53 = v51;
							if (v51 >= 240) {
								// 0x2daf0
								v53 = v52 - 16;
								// branch -> 0x2daf4
							}
							int32_t v54 = v11 - 1; // 0x2daf4
							v11 = v54;
							*(char *)v49 = v53;
							int32_t v55 = v10 + 1; // 0x2dafc
							v10 = v55;
							if (v54 == 0) {
								// 0x2db04
								v42 = v12;
								v43 = v55;
								v48 = g37;
								// branch -> 0x2db04
							lab_0x2db04:
								// 0x2db04
								if (v48 == 0) {
									// break (via goto) -> 0x2db0c
									goto lab_0x2db0c;
								}
								v39 = v48;
								v40 = v43;
								v41 = v42;
								// continue (via goto) -> 0x2dac0
								goto lab_0x2dac0;
							} else {
								// 0x2daf4
								v49 = v55;
								v50 = v12;
								// branch -> 0x2dae0
								continue;
							}
						}
						int32_t v56 = g39; // 0x2db0c
						v44 = v43 - 781;
						v10 = v44;
						if (v42 == v56) {
							// break (via goto) -> 0x2db88
							goto lab_0x2db88_3;
						}
						v37 = v44;
						v38 = v42;
						// continue (via goto) -> 0x2dabc
						goto lab_0x2dabc;
					} else {
						int32_t v57 = v40 - v47; // 0x2dad0
						v10 = v57;
						int32_t v58 = v47 + v39; // 0x2dad4
						g37 = v58;
						v42 = v46;
						v43 = v57;
						v48 = v58;
						// branch -> 0x2db04
						goto lab_0x2db04;
					}
					// 0x2db04
					if (v48 == 0) {
						// break -> 0x2db0c
						break;
					}
					v39 = v48;
					v40 = v43;
					v41 = v42;
					// continue -> 0x2dac0
				}
			lab_0x2db0c:
				// 0x2db0c
				v44 = v43 - 781;
				v10 = v44;
				if (v42 == g39) {
					// break -> 0x2db88
					break;
				}
				v37 = v44;
				v38 = v42;
				// continue -> 0x2dabc
			}
			// 0x2db88
			result = function_c9acc(*(int32_t *)(g23 - 0x4fa4));
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result;
		}
		v36 = v9;
		v35 = v7;
	} else {
		// 0x2d974
		if (v8 > -0x1000000) {
			int32_t v59 = v9; // 0x2d9a08
			int32_t v60 = v7; // 0x2d9904
			while (true) {
				int32_t v61 = 13;  // 0x2d9b4
				int32_t v62 = v59; // 0x2d9a0
				int32_t v63 = v60; // 0x2d990
				// branch -> 0x2d990
				int32_t v64; // 0x2da3c
				int32_t v65; // 0x2da40
				while (true) {
					char v66 = *(char *)v63; // 0x2d990
					int32_t v67 = v63 + 1;   // 0x2d994
					v12 = v67;
					int32_t v68 = v66; // 0x2d998
					int32_t v69;       // r5
					if (v66 > -1) {
						// 0x2d9ac
						g37 = v68;
						int32_t v70 = v61 - v68; // 0x2d9b4
						v69 = v70;
						if (v66 != 0) {
							int32_t v71 = __asm_rlwinm_(v68, 29, 3, 31); // 0x2d9bc
							int32_t v72 = v71;                           // ctr
							int32_t v73;                                 // 0x2da1c
							int32_t v74;                                 // 0x2d9a09
							int32_t v75;
							if (v71 == 0) {
								// 0x2d9bc
								v75 = v10;
								v73 = g37;
								// branch -> 0x2da1c
							lab_0x2da1c:;
								int32_t v76 = v12; // 0x2da20
								v12 = v76 + 1;
								*(char *)v75 = *(char *)v76;
								int32_t v77 = v10 + 1; // 0x2da2c
								v10 = v77;
								int32_t v78 = v73 - 1; // 0x2da30
								v74 = v77;
								// branch -> 0x2da20
								while (v78 != 0) {
									// 0x2da20
									v76 = v12;
									v12 = v76 + 1;
									*(char *)v77 = *(char *)v76;
									v77 = v10 + 1;
									v10 = v77;
									v78--;
									v74 = v77;
									// continue -> 0x2da20
								}
							lab_0x2da34:
								// 0x2da34
								v64 = v12;
								v65 = v74;
								// branch -> 0x2da34
							lab_0x2da34_3:
								// 0x2da34
								if (v69 == 0) {
									// break -> 0x2da3c
									break;
								}
								v61 = v69;
								v62 = v65;
								v63 = v64;
								// continue -> 0x2d990
								continue;
							} else {
								// 0x2d9c8
								*(char *)v10 = *(char *)v12;
								*(char *)(v10 + 1) = *(char *)(v12 + 1);
								*(char *)(v10 + 2) = *(char *)(v12 + 2);
								*(char *)(v10 + 3) = *(char *)(v12 + 3);
								*(char *)(v10 + 4) = *(char *)(v12 + 4);
								*(char *)(v10 + 5) = *(char *)(v12 + 5);
								*(char *)(v10 + 6) = *(char *)(v12 + 6);
								int32_t v79 = v12; // 0x2da00
								v12 = v79 + 8;
								*(char *)(v10 + 7) = *(char *)(v79 + 7);
								int32_t v80 = v10 + 8; // 0x2da0c
								v10 = v80;
								int32_t v81 = v72 - 1; // 0x2da10
								// branch -> 0x2d9c8
								while (v81 != 0) {
									// 0x2d9c8
									*(char *)v80 = *(char *)v12;
									*(char *)(v10 + 1) = *(char *)(v12 + 1);
									*(char *)(v10 + 2) = *(char *)(v12 + 2);
									*(char *)(v10 + 3) = *(char *)(v12 + 3);
									*(char *)(v10 + 4) = *(char *)(v12 + 4);
									*(char *)(v10 + 5) = *(char *)(v12 + 5);
									*(char *)(v10 + 6) = *(char *)(v12 + 6);
									v79 = v12;
									v12 = v79 + 8;
									*(char *)(v10 + 7) = *(char *)(v79 + 7);
									v80 = v10 + 8;
									v10 = v80;
									v81--;
									// continue -> 0x2d9c8
								}
								int32_t v82 = g37 % 8; // 0x2da14
								g37 = v82;
								if (v82 == 0) {
									v74 = v80;
									goto lab_0x2da34;
								}
								v75 = v80;
								v73 = v82;
								goto lab_0x2da1c;
							}
						} else {
							v64 = v67;
							v65 = v62;
							v69 = v70;
						}
					} else {
						int32_t v83 = v62 - v68; // 0x2d9a0
						v10 = v83;
						v64 = v67;
						v65 = v83;
						v69 = v68 + v61;
						// branch -> 0x2da34
						goto lab_0x2da34_3;
					}
					// 0x2da34
					if (v69 == 0) {
						// break -> 0x2da3c
						break;
					}
					v61 = v69;
					v62 = v65;
					v63 = v64;
					// continue -> 0x2d990
				}
				int32_t v84 = v65 - 781; // 0x2da40
				v10 = v84;
				if (v64 == g39) {
					// break -> 0x2db88
					break;
				}
				v59 = v84;
				v60 = v64;
				// continue -> 0x2d98c
			}
			// 0x2db88
			result = function_c9acc(*(int32_t *)(g23 - 0x4fa4));
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result;
		}
		v36 = v9;
		v35 = v7;
	}
lab_0x2db1c:
	while (true) {
		int32_t v85 = 13;  // 0x2db3c
		int32_t v86 = v36; // 0x2db30
		int32_t v87 = v35; // 0x2db20
		                   // branch -> 0x2db20
	lab_0x2db20:;
		int32_t v88; // 0x2db7c
		int32_t v89; // 0x2db80
		int32_t v90; // 0x2db80
		while (true) {
			char v91 = *(char *)v87; // 0x2db20
			int32_t v92 = v87 + 1;   // 0x2db24
			int32_t v93 = v91;       // 0x2db28
			v11 = v93;
			int32_t v94; // 0x2db74
			if (v91 > -1) {
				// 0x2db3c
				g37 = v85 - v93;
				int32_t v95 = v86; // 0x2db68
				int32_t v96 = v92; // 0x2db40
				// branch -> 0x2db40
				while (true) {
					unsigned char v97 = *(char *)v96; // 0x2db40
					int32_t v98 = v97;                // 0x2db40
					v12 = v96 + 1;
					char v99 = v97;
					int32_t v100; // 0x2db64
					int32_t v101; // 0x2db6c
					if (v97 >= 240) {
						// 0x2db50
						if (v97 < 254) {
							// 0x2db60
							v99 = v98 - 46;
							// branch -> 0x2db64
						} else {
							// 0x2db58
							v99 = -49;
							// branch -> 0x2db64
						}
						// 0x2db64
						v100 = v11 - 1;
						v11 = v100;
						*(char *)v95 = v99;
						v101 = v10 + 1;
						v10 = v101;
						if (v100 == 0) {
						lab_0x2db74:
							// 0x2db74
							v88 = v12;
							v89 = v101;
							v94 = g37;
							// branch -> 0x2db74
						lab_0x2db74_2:
							// 0x2db74
							if (v94 == 0) {
								// break (via goto) -> 0x2db7c
								goto lab_0x2db7c;
							}
							v85 = v94;
							v86 = v89;
							v87 = v88;
							// continue (via goto) -> 0x2db20
							goto lab_0x2db20;
						} else {
						lab_0x2db64:
							// 0x2db64
							v95 = v101;
							v96 = v12;
							// branch -> 0x2db40
							continue;
						}
					}
					// 0x2db64
					v100 = v11 - 1;
					v11 = v100;
					*(char *)v95 = v99;
					v101 = v10 + 1;
					v10 = v101;
					if (v100 == 0) {
						goto lab_0x2db74;
					}
					goto lab_0x2db64;
				}
				int32_t v102 = g39; // 0x2db7c
				v90 = v89 - 781;
				v10 = v90;
				if (v88 == v102) {
					// break (via goto) -> 0x2db88
					goto lab_0x2db88_3;
				}
				v36 = v90;
				v35 = v88;
				// continue (via goto) -> 0x2db1c
				goto lab_0x2db1c;
			} else {
				int32_t v103 = v86 - v93; // 0x2db30
				v10 = v103;
				int32_t v104 = v93 + v85; // 0x2db34
				g37 = v104;
				v88 = v92;
				v89 = v103;
				v94 = v104;
				// branch -> 0x2db74
				goto lab_0x2db74_2;
			}
			// 0x2db74
			if (v94 == 0) {
				// break -> 0x2db7c
				break;
			}
			v85 = v94;
			v86 = v89;
			v87 = v88;
			// continue -> 0x2db20
		}
	lab_0x2db7c:
		// 0x2db7c
		v90 = v89 - 781;
		v10 = v90;
		if (v88 == g39) {
			// break -> 0x2db88
			break;
		}
		v36 = v90;
		v35 = v88;
		// continue -> 0x2db1c
	}
	// 0x2db88
	result = function_c9acc(*(int32_t *)(g23 - 0x4fa4));
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	return result;
lab_0x2db88_3:;
	int32_t v105 = g23;                         // 0x2db88
	int32_t v106 = *(int32_t *)(v105 - 0x4fa4); // 0x2db88
	v12 = v106;
	result = function_c9acc(v106);
	v12 = result;
	v11 = v2;
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	return result;
}

// Address range: 0x2dbac - 0x2dc1c
int32_t function_2dbac(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x76c4); // 0x2dbb4
	g37 = a1;
	g34 = 64 * *(int32_t *)v1 + *(int32_t *)(g23 - 0x76c0);
	strcpy();
	uint32_t v2 = *(int32_t *)v1; // 0x2dbe0
	g37 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x76c8); // 0x2dbe4
	int32_t result = v3;                     // r3
	*(int32_t *)(v3 + 4 * v2) = a2;
	if (v2 <= 3) {
		int32_t *v4 = (int32_t *)v1; // 0x2dbf8
		int32_t v5 = *v4;            // 0x2dbf8
		result = v5;
		*v4 = v5 + 1;
		// branch -> 0x2dc04
	}
	// 0x2dc04
	return result;
}

// Address range: 0x2dc1c - 0x2dc34
int32_t function_2dc1c(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x76c4); // 0x2dc1c
	g37 = v1;
	int32_t result = *(int32_t *)(g23 - 0x76cc); // r3
	*(int32_t *)v1 = 0;
	*(int32_t *)result = 0;
	return result;
}

// Address range: 0x2dc34 - 0x2dd68
int32_t function_2dc34(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = 640 - a3;                                               // r10
	int32_t v2 = a3;                                                     // 0x2dc98
	int32_t v3 = *(int32_t *)(g23 - 0x4fb8) + 640 * a2 + a1;             // 0x2dc90
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x7804) + 768 * a5 + a4; // 0x2dc9c
	// branch -> 0x2dc6c
	while (true) {
		int32_t v5 = v4; // r7
		g37 = v3;
		int32_t v6 = v2;      // r8
		int32_t v7 = v3 + v2; // 0x2dc80
		int32_t v8 = v2;      // 0x2dca4
		if (a3 % 2 != 0) {
			// 0x2dc90
			g37 = v3 + 1;
			v6 = v2 - 1;
			*(char *)v4 = *(char *)v3;
			v5++;
			v8 = v6;
			// branch -> 0x2dca4
		}
		// 0x2dca4
		if (__asm_rlwinm_(v8, 0, 30, 30) != 0) {
			int32_t v9 = g37; // 0x2dcac
			g37 = v9 + 2;
			v6 -= 2;
			*(int16_t *)v5 = *(int16_t *)v9;
			v5 += 2;
			// branch -> 0x2dcc0
		}
		int32_t v10 = v6 / 4; // 0x2dcc4
		int32_t v11 = v10;    // r3
		int32_t v12;          // 0x2dd48
		int32_t result;       // 0x2dd50
		if (v6 >= 4) {
			int32_t v13 = __asm_rlwinm_(v10, 29, 3, 31); // 0x2dccc
			int32_t v14 = v13;                           // ctr
			int32_t v15;                                 // 0x2dd2c
			int32_t v16;
			if (v13 == 0) {
				// 0x2dccc
				v16 = v5;
				v15 = v11;
				// branch -> 0x2dd2c
			lab_0x2dd2c:;
				int32_t v17 = g37; // 0x2dd30
				g37 = v17 + 4;
				*(int32_t *)v16 = *(int32_t *)v17;
				int32_t v18 = v5 + 4;  // 0x2dd3c
				int32_t v19 = v15 - 1; // 0x2dd40
				// branch -> 0x2dd30
				while (v19 != 0) {
					// 0x2dd30
					v17 = g37;
					g37 = v17 + 4;
					*(int32_t *)v18 = *(int32_t *)v17;
					v18 += 4;
					v19--;
					// continue -> 0x2dd30
				}
			lab_0x2dd44:
				// 0x2dd44
				v12 = g39 - 1;
				g39 = v12;
				result = v1 + v7;
				if (v12 == 0) {
					// 0x2dd64
					return result;
				}
			lab_0x2dd44_3:;
				int32_t v20 = 768 - a3 + v4 + v2; // 0x2dd54
				v2 = a3;
				v3 = result;
				v4 = v20;
				// branch -> 0x2dc6c
				continue;
			} else {
				// 0x2dcd8
				*(int32_t *)v5 = *(int32_t *)g37;
				*(int32_t *)(v5 + 4) = *(int32_t *)(g37 + 4);
				*(int32_t *)(v5 + 8) = *(int32_t *)(g37 + 8);
				*(int32_t *)(v5 + 12) = *(int32_t *)(g37 + 12);
				*(int32_t *)(v5 + 16) = *(int32_t *)(g37 + 16);
				*(int32_t *)(v5 + 20) = *(int32_t *)(g37 + 20);
				*(int32_t *)(v5 + 24) = *(int32_t *)(g37 + 24);
				int32_t v21 = g37; // 0x2dd10
				g37 = v21 + 32;
				*(int32_t *)(v5 + 28) = *(int32_t *)(v21 + 28);
				int32_t v22 = v5 + 32; // 0x2dd1c
				v5 = v22;
				int32_t v23 = v14 - 1; // 0x2dd20
				// branch -> 0x2dcd8
				while (v23 != 0) {
					// 0x2dcd8
					*(int32_t *)v22 = *(int32_t *)g37;
					*(int32_t *)(v5 + 4) = *(int32_t *)(g37 + 4);
					*(int32_t *)(v5 + 8) = *(int32_t *)(g37 + 8);
					*(int32_t *)(v5 + 12) = *(int32_t *)(g37 + 12);
					*(int32_t *)(v5 + 16) = *(int32_t *)(g37 + 16);
					*(int32_t *)(v5 + 20) = *(int32_t *)(g37 + 20);
					*(int32_t *)(v5 + 24) = *(int32_t *)(g37 + 24);
					v21 = g37;
					g37 = v21 + 32;
					*(int32_t *)(v5 + 28) = *(int32_t *)(v21 + 28);
					v22 = v5 + 32;
					v5 = v22;
					v23--;
					// continue -> 0x2dcd8
				}
				int32_t v24 = v11 % 8; // 0x2dd24
				if (v24 == 0) {
					goto lab_0x2dd44;
				}
				v16 = v22;
				v15 = v24;
				goto lab_0x2dd2c;
			}
		}
		// 0x2dd44
		v12 = g39 - 1;
		g39 = v12;
		result = v1 + v7;
		if (v12 != 0) {
			goto lab_0x2dd44_3;
		}
		// 0x2dd64
		return result;
	}
}

// Address range: 0x2dd68 - 0x2dd88
int32_t function_2dd68(int32_t a1)
{
	// 0x2dd68
	return function_2dc1c();
}

// Address range: 0x2dd88 - 0x2de04
int32_t function_2dd88(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = a3 - a2; // r6
	int32_t v2 = a1 + 88 * a2;
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x7804) + 768 * a5 + a4;
	// branch -> 0x2ddb0
lab_0x2ddb0:
	while (true) {
		int32_t v4 = v3; // r5
		g37 = v2;
		int32_t v5 = 11;          // ctr
		int32_t result = v3 + 88; // 0x2ddc0
		int32_t v6 = v3;          // 0x2ddd4
		int32_t v7 = v2;          // 0x2ddd0
		// branch -> 0x2ddd0
		while (true) {
			// 0x2ddd0
			*(int32_t *)v6 = *(int32_t *)v7;
			int32_t v8 = g37; // 0x2ddd8
			g37 = v8 + 8;
			*(int32_t *)(v4 + 4) = *(int32_t *)(v8 + 4);
			int32_t v9 = v4 + 8; // 0x2dde4
			v4 = v9;
			int32_t v10 = v5 - 1; // 0x2dde8
			v5 = v10;
			if (v10 == 0) {
				int32_t v11 = v1 - 1; // 0x2ddf0
				v1 = v11;
				if (v11 == 0) {
					// break (via goto) -> 0x2de00
					goto lab_0x2de00;
				}
				v2 += 88;
				v3 += 768;
				// continue (via goto) -> 0x2ddb0
				goto lab_0x2ddb0;
			} else {
				// 0x2ddd0
				v6 = v9;
				v7 = g37;
				// branch -> 0x2ddd0
				continue;
			}
		}
	lab_0x2de00:
		// 0x2de00
		return result;
	}
}

// Address range: 0x2de04 - 0x2de7c
int32_t function_2de04(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = a3 + a1; // bp-20
	int32_t v2 = a5 + a4; // bp-24
	function_da868((char *)&v2, (int32_t)&v1, 59);
	int32_t v3 = a6 - 1;       // 0x2de44
	int32_t result = v2;       // 0x2de48
	int32_t v4 = v1 - 59 + a2; // 0x2de50
	g37 = v4;
	v1 = v4;
	v2 = result + 709;
	// branch -> 0x2de30
	while (v3 != 0) {
		// 0x2de30
		function_da868((char *)&v2, (int32_t)&v1, 59);
		v3--;
		result = v2;
		v4 = v1 - 59 + a2;
		g37 = v4;
		v1 = v4;
		v2 = result + 709;
		// continue -> 0x2de30
	}
	// 0x2de64
	return result;
}

// Address range: 0x2de7c - 0x2df88
int32_t DrawLifeFlask(int32_t a1)
{
	int32_t v1 = g36;                        // 0x2de7c
	int32_t v2 = g35;                        // 0x2de8c
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0x2de90
	g36 = *(int32_t *)(g23 - 0x7804);
	int32_t v4 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v3; // 0x2deb0
	uint32_t v5 = *(int32_t *)(v4 + 412);                              // 0x2defc
	int32_t v6 = v5;                                                   // 0x2df0c
	if (v5 >= 81) {
		// 0x2df08
		v6 = 80;
		// branch -> 0x2df0c
	}
	int32_t v7 = 80 - v6; // 0x2df0c
	int32_t v8 = v7;      // 0x2df20
	if (v7 >= 12) {
		// 0x2df18
		v8 = 11;
		// branch -> 0x2df1c
	}
	int32_t v9 = v8 + 2; // 0x2df20
	g35 = v9;
	int32_t v10 = *(int32_t *)(g23 - 0x4fc0);                                     // 0x2df28
	int32_t v11 = *(int32_t *)g36;                                                // 0x2df2c
	int32_t v12 = function_2de04(v10, 88, 277, v11, (int32_t) "; " - 0x2653, v9); // 0x2df3c
	int32_t result;                                                               // 0x2df84
	if (g35 != 13) {
		int32_t v13 = *(int32_t *)(g23 - 0x4fb8); // 0x2df4c
		int32_t v14 = *(int32_t *)g36;            // 0x2df50
		int32_t v15 = 640 * g35 + 2029;           // 0x2df60
		result = function_2de04(v13, 640, v15, v14, 768 * g35 + (int32_t) "; " - 0x2653, 13 - g35);
		// branch -> 0x2df70
	} else {
		result = v12;
	}
	// 0x2df70
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0x2df88 - 0x2e064
int32_t UpdateLifeFlask(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0x2df90
	int32_t result = 0x43300000;             // r3
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0x2df9c
	g37 = *(int32_t *)(0x55ec * *(int32_t *)v1 + v2 + 404) ^ -0x80000000;
	int32_t v3; // r31
	int32_t v4;
	int32_t v5; // 0x2e018
	if (v4 < 70) {
		// 0x2e00c
		v3 = 0;
		v5 = v3;
		// branch -> 0x2e00c
	} else {
		// 0x2e008
		v3 = 69;
		v5 = 69;
		// branch -> 0x2e00c
	}
	int32_t v6 = 69; // 0x2e034
	if (v5 != 69) {
		// 0x2e014
		result = function_2dd88(*(int32_t *)(g23 - 0x4fc0), 16, 85 - v5, 160, 512);
		v6 = v3;
		// branch -> 0x2e02c
	}
	// 0x2e02c
	if (v6 == 0) {
		// branch -> 0x2e050
	} else {
		// 0x2e034
		g39 = v6;
		result = function_2dc34(96, 85 - v6, 88, v6, 160, 581 - v6);
		// branch -> 0x2e050
	}
	// 0x2e050
	return result;
}

// Address range: 0x2e064 - 0x2e11c
int32_t DrawManaFlask(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0x2e06c
	int32_t v2 = g35;                        // 0x2e070
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0x2e074
	int32_t v4 = *(int32_t *)(g23 - 0x7804); // 0x2e07c
	g36 = v4;
	uint32_t v5 = *(int32_t *)(0x55ec * *(int32_t *)v1 + v3 + 432); // 0x2e090
	int32_t v6 = v5;                                                // 0x2e0a0
	if (v5 >= 81) {
		// 0x2e09c
		v6 = 80;
		// branch -> 0x2e0a0
	}
	int32_t v7 = 80 - v6; // 0x2e0a0
	int32_t v8 = v7;      // 0x2e0b4
	if (v7 >= 12) {
		// 0x2e0ac
		v8 = 11;
		// branch -> 0x2e0b0
	}
	int32_t v9 = v8 + 2; // 0x2e0b4
	g35 = v9;
	int32_t v10 = *(int32_t *)(g23 - 0x4fbc);                                     // 0x2e0bc
	int32_t v11 = *(int32_t *)v4;                                                 // 0x2e0c0
	int32_t v12 = function_2de04(v10, 88, 277, v11, (int32_t) "; " - 0x24e5, v9); // 0x2e0d0
	int32_t result;                                                               // 0x2e118
	if (g35 != 13) {
		int32_t v13 = *(int32_t *)(g23 - 0x4fb8); // 0x2e0e0
		int32_t v14 = *(int32_t *)g36;            // 0x2e0e4
		result = function_2de04(v13, 640, 640 * g35 + 2395, v14, 768 * g35 + (int32_t) "; " - 0x24e5, 13 - g35);
		// branch -> 0x2e104
	} else {
		result = v12;
	}
	// 0x2e104
	g35 = v2;
	return result;
}

// Address range: 0x2e11c - 0x2e208
int32_t control_update_life_mana(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac);                           // 0x2e11c
	int32_t v2 = 0x55ec * *(int32_t *)v1 + *(int32_t *)(g23 - 0x77a8); // 0x2e12c
	uint32_t v3 = *(int32_t *)(v2 + 428);                              // 0x2e130
	uint32_t v4 = *(int32_t *)(v2 + 424);                              // 0x2e134
	int32_t v5 = v3;                                                   // 0x2e168
	if (v3 <= 0xffffffff) {
		// 0x2e140
		v5 = 0;
		// branch -> 0x2e144
	}
	int32_t v6 = v4; // 0x2e160
	if (v4 <= 0xffffffff) {
		// 0x2e14c
		v6 = 0;
		// branch -> 0x2e150
	}
	// 0x2e150
	int32_t v7;
	int32_t v8;
	if (v5 != 0) {
		// 0x2e160
		v7 = v6 ^ -0x80000000;
		// branch -> 0x2e1a8
	} else {
		int32_t v9;
		v7 = v9;
		v8 = 0;
	}
	// 0x2e1a8
	*(int32_t *)(v2 + 432) = v8;
	*(int32_t *)(v2 + 412) = v7;
	return 0x43300000;
}

// Address range: 0x2e208 - 0x2e314
int32_t UpdateManaFlask(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8);                           // 0x2e218
	int32_t v2 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v1; // 0x2e228
	uint32_t v3 = *(int32_t *)(v2 + 428);                              // 0x2e22c
	int32_t v4 = v3;                                                   // 0x2e264
	if (v3 <= 0xffffffff) {
		// 0x2e23c
		v4 = 0;
		// branch -> 0x2e240
	}
	// 0x2e240
	if (*(int32_t *)(v2 + 424) <= 0xffffffff) {
		// 0x2e248
		// branch -> 0x2e24c
	}
	int32_t v5 = 0;
	if (v4 != 0) {
		// 0x2e25c
		int32_t v6;
		v5 = v6;
		// branch -> 0x2e2a4
	}
	int32_t v7 = v5; // r31
	*(int32_t *)(v2 + 432) = v5;
	int32_t v8; // 0x2e2c4
	if (v5 < 70) {
		// 0x2e2b8
		v8 = v7;
		// branch -> 0x2e2b8
	} else {
		// 0x2e2b4
		v7 = 69;
		v8 = 69;
		// branch -> 0x2e2b8
	}
	int32_t v9 = 69; // 0x2e2e0
	if (v8 != 69) {
		// 0x2e2c0
		function_2dd88(*(int32_t *)(g23 - 0x4fbc), 16, 85 - v8, 528, 512);
		v9 = v7;
		// branch -> 0x2e2d8
	}
	// 0x2e2d8
	if (v9 != 0) {
		// 0x2e2e0
		g39 = v9;
		function_2dc34(464, 85 - v9, 88, v9, 528, 581 - v9);
		// branch -> 0x2e2fc
	}
	int32_t result = function_2cf34(); // 0x2e2fc
	return result;
}

// Address range: 0x2e314 - 0x2e704
int32_t InitControlPan(int32_t a1)
{
	int32_t v1 = g10;                        // 0x2e318
	int32_t v2 = *(int32_t *)(g23 - 0x77f0); // 0x2e31c
	g36 = v2;
	g32 = *(int32_t *)(g23 - 0x76e8);
	g33 = *(int32_t *)(g23 - 0x76e4);
	g35 = *(int32_t *)(g23 - 0x76dc);
	if (*(char *)v2 == 1) {
		// 0x2e348
		g30 = (int32_t) "MoveWindow";
		g34 = (int32_t) "MoveWindow" + 0x6800;
		*(int32_t *)(g23 - 0x4fb8) = DiabloAllocPtr();
		g34 = *(int32_t *)(g23 - 0x4fb8);
		memset();
		// branch -> 0x2e38c
	} else {
		// 0x2e36c
		g30 = 0x30000;
		g34 = 0x2d000;
		*(int32_t *)(g23 - 0x4fb8) = DiabloAllocPtr();
		g34 = *(int32_t *)(g23 - 0x4fb8);
		memset();
		// branch -> 0x2e38c
	}
	// 0x2e38c
	g34 = 0x1e40;
	*(int32_t *)(g23 - 0x4fbc) = DiabloAllocPtr();
	g34 = *(int32_t *)(g23 - 0x4fbc);
	memset();
	g34 = 0x1e40;
	*(int32_t *)(g23 - 0x4fc0) = DiabloAllocPtr();
	g34 = *(int32_t *)(g23 - 0x4fc0);
	memset();
	int32_t v3;
	*(int32_t *)(g23 - 0x4fa4) = LoadFileInMem(*(int32_t *)(v3 - 0x64a4), NULL);
	*(int32_t *)(g23 - 0x4fa8) = LoadFileInMem(*(int32_t *)(g23 - 0x64a8), NULL);
	*(int32_t *)(g23 - 0x4fb0) = LoadFileInMem(*(int32_t *)(g23 - 0x64ac), NULL);
	g34 = 0;
	SetSpellTrans();
	int32_t v4 = LoadFileInMem(*(int32_t *)(g23 - 0x64b0), NULL); // 0x2e404
	int32_t v5 = v4;                                              // bp-48
	function_4ecc4(*(int32_t *)(g23 - 0x4fb8), 0, 143, 640, v4, 1, 640, v4);
	MemFreeDbg(&v5);
	int32_t v6 = LoadFileInMem(*(int32_t *)(g23 - 0x64b4), NULL); // 0x2e43c
	v5 = v6;
	function_4ecc4(*(int32_t *)(g23 - 0x4fc0), 0, 87, 88, v6, 1, 88, v6);
	int32_t v7 = *(int32_t *)(g23 - 0x4fbc); // 0x2e464
	int32_t *v8;
	function_4ecc4(v7, 0, 87, 88, v5, 2, 88, (int32_t)&v8);
	MemFreeDbg(&v5);
	*(int32_t *)*(int32_t *)(g23 - 0x76d0) = 0;
	int32_t result; // r3
	if (*(char *)g36 != 1) {
		int32_t v9 = LoadFileInMem(*(int32_t *)(g23 - 0x64b8), NULL); // 0x2e4ac
		int32_t v10 = v9;                                             // bp-56
		function_4ecc4(*(int32_t *)(g23 - 0x4fb8), 0, 287, 640, v9, 1, 640, v9);
		MemFreeDbg(&v10);
		*(int32_t *)(g23 - 0x4fe4) = LoadFileInMem(*(int32_t *)(g23 - 0x64bc), NULL);
		*(int32_t *)(g23 - 0x4fe8) = LoadFileInMem(*(int32_t *)(g23 - 0x64c0), NULL);
		int32_t v11 = 1; // r0
		result = g23 - 0x4fe0;
		*(int32_t *)(g23 - 0x4fd8) = g30;
		*(char *)*(int32_t *)(g23 - 0x64c4) = (char)g30;
		*(char *)(g23 - 0x4fe0) = (char)v11;
		*(char *)(result + 1) = (char)v11;
		*(char *)(result + 2) = (char)v11;
		*(char *)(result + 3) = (char)v11;
		*(int32_t *)g29 = g30;
		*(int32_t *)(g29 + 4) = g30;
		*(int32_t *)(g29 + 8) = g30;
		// branch -> 0x2e52c
	}
	// 0x2e52c
	g30 = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x76d4) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x76d8) = g30;
	*(int32_t *)(g23 - 0x4fa0) = LoadFileInMem(*(int32_t *)(g23 - 0x64cc), NULL);
	*(int32_t *)g35 = g30;
	*(int32_t *)(g35 + 4) = g30;
	*(int32_t *)(g35 + 8) = g30;
	*(int32_t *)(g35 + 12) = g30;
	*(int32_t *)(g35 + 16) = g30;
	*(int32_t *)(g35 + 20) = g30;
	*(int32_t *)(g35 + 24) = g30;
	*(int32_t *)(g35 + 28) = g30;
	*(int32_t *)*(int32_t *)(g23 - 0x76e0) = g30;
	if (*(char *)g36 == 1) {
		// 0x2e584
		*(int32_t *)g33 = 6;
		// branch -> 0x2e598
	} else {
		// 0x2e590
		*(int32_t *)g33 = 8;
		// branch -> 0x2e598
	}
	// 0x2e598
	*(int32_t *)(g23 - 0x4fac) = LoadFileInMem(*(int32_t *)(g23 - 0x64d0), NULL);
	g33 = 0;
	*(int32_t *)g32 = 0;
	*(int32_t *)(g32 + 4) = g33;
	*(int32_t *)(g32 + 8) = g33;
	*(int32_t *)(g32 + 12) = g33;
	*(int32_t *)*(int32_t *)(g23 - 0x76ec) = g33;
	*(int32_t *)(g23 - 0x4fc4) = LoadFileInMem(*(int32_t *)(g23 - 0x64d4), NULL);
	g34 = *(int32_t *)(g23 - 0x76a4);
	g37 = *(int32_t *)(g23 - 0x64d8);
	function_2dd68(strcpy());
	*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
	*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
	*(int32_t *)*(int32_t *)(g23 - 0x77c4) = g33;
	*(int32_t *)*(int32_t *)(g23 - 0x76b8) = g33;
	*(int32_t *)(g23 - 0x4fc8) = LoadFileInMem(*(int32_t *)(g23 - 0x64dc), NULL);
	*(int32_t *)(g23 - 0x4fcc) = LoadFileInMem(*(int32_t *)(g23 - 0x64e0), NULL);
	*(int32_t *)(g23 - 0x4fd0) = LoadFileInMem(*(int32_t *)(g23 - 0x64e4), NULL);
	*(int32_t *)*(int32_t *)(g23 - 0x76f8) = g33;
	int32_t v12 = *(int32_t *)(g23 - 0x77ac); // 0x2e644
	*(int32_t *)*(int32_t *)(g23 - 0x77c0) = g33;
	int32_t v13 = *(int32_t *)(g23 - 0x77a8);                            // 0x2e64c
	unsigned char v14 = *(char *)(0x55ec * *(int32_t *)v12 + v13 + 348); // 0x2e65c
	int32_t v15;                                                         // r5
	int32_t v16;                                                         // 0x2e6c4
	int32_t v17;                                                         // 0x2e6a4
	if (v14 == 0) {
		// 0x2e668
		*(int32_t *)g31 = 26;
		// branch -> 0x2e69c
		// 0x2e69c
		v17 = LoadFileInMem(*(int32_t *)(g23 - 0x64e8), NULL);
		*(int32_t *)*(int32_t *)(g23 - 0x7700) = v17;
		*(int32_t *)(g23 - 0x4fb4) = LoadFileInMem(*(int32_t *)(g23 - 0x64ec), NULL);
		v15 = 0;
		v16 = g23;
		*(int32_t *)*(int32_t *)(v16 - 0x7704) = 0;
		*(int32_t *)*(int32_t *)(v16 - 0x7708) = v15;
		*(int32_t *)*(int32_t *)(g23 - 0x770c) = v15;
		result = *(int32_t *)(g23 - 0x7714);
		*(int32_t *)*(int32_t *)(g23 - 0x7710) = v15;
		*(int32_t *)result = 1;
		g10 = v1;
		return result;
	}
	// 0x2e674
	if (v14 == 1) {
		// 0x2e680
		*(int32_t *)g31 = 28;
		// branch -> 0x2e69c
	} else {
		// 0x2e68c
		if (v14 == 2) {
			// 0x2e694
			*(int32_t *)g31 = 27;
			// branch -> 0x2e69c
		}
	}
	// 0x2e69c
	v17 = LoadFileInMem(*(int32_t *)(g23 - 0x64e8), NULL);
	*(int32_t *)*(int32_t *)(g23 - 0x7700) = v17;
	*(int32_t *)(g23 - 0x4fb4) = LoadFileInMem(*(int32_t *)(g23 - 0x64ec), NULL);
	v15 = 0;
	v16 = g23;
	*(int32_t *)*(int32_t *)(v16 - 0x7704) = 0;
	*(int32_t *)*(int32_t *)(v16 - 0x7708) = v15;
	*(int32_t *)*(int32_t *)(g23 - 0x770c) = v15;
	result = *(int32_t *)(g23 - 0x7714);
	*(int32_t *)*(int32_t *)(g23 - 0x7710) = v15;
	*(int32_t *)result = 1;
	g10 = v1;
	return result;
}

// Address range: 0x2e704 - 0x2e744
int32_t ClearCtrlPan(void)
{
	// 0x2e704
	g39 = 128;
	int32_t result = DrawInfoBox(function_2dc34(0, *(int32_t *)(g23 - 0x4fd8) + 16, 640, 128, 64, 512)); // 0x2e730
	return result;
}

// Address range: 0x2e744 - 0x2e874
int32_t function_2e744(void)
{
	int32_t v1 = g10;                        // 0x2e748
	int32_t v2 = *(int32_t *)(g23 - 0x76dc); // 0x2e74c
	g36 = v2;
	int32_t v3 = g23 - 0x2cd0; // 0x2e754
	g35 = v2;
	int32_t v4 = g32; // 0x2e760
	g32 = 0;
	g33 = v3;
	int32_t v5 = 0; // 0x2e7ac
	// branch -> 0x2e778
	while (true) {
		// 0x2e778
		if (*(int32_t *)v2 == 0) {
			int32_t v6 = *(int32_t *)(v3 + 4); // 0x2e784
			int32_t v7 = *(int32_t *)v3;       // 0x2e78c
			g39 = 20;
			function_2dc34(v7, v6 - 336, 71, 20, v7 + 64, v6 + 160);
			// branch -> 0x2e7c8
		} else {
			int32_t v8 = *(int32_t *)(v3 + 4);       // 0x2e7b0
			int32_t v9 = *(int32_t *)(g23 - 0x4fa0); // 0x2e7b8
			CelDecodeOnly(*(int32_t *)v3 + 64, v8 + 178, v9, v5 + 1, 71);
			// branch -> 0x2e7c8
		}
		int32_t v10 = g32 + 1; // 0x2e7c8
		g32 = v10;
		int32_t v11 = g33 + 20; // 0x2e7cc
		g33 = v11;
		int32_t v12 = g35 + 4; // 0x2e7d4
		g35 = v12;
		if (v10 >= 6) {
			// break -> 0x2e7dc
			break;
		}
		v5 = v10;
		v3 = v11;
		v2 = v12;
		// continue -> 0x2e778
	}
	int32_t result = *(int32_t *)(g23 - 0x76e4); // 0x2e7dc
	if (*(int32_t *)result != 8) {
		// 0x2e854
		g10 = v1;
		g32 = v4;
		return result;
	}
	// 0x2e7ec
	CelDecodeOnly(151, 634, *(int32_t *)(g23 - 0x4fe4), *(int32_t *)(g36 + 24) + 1, 33);
	int32_t v13 = *(int32_t *)(g36 + 28);     // 0x2e838
	int32_t v14 = *(int32_t *)(g23 - 0x4fe4); // 0x2e840
	int32_t result2;                          // 0x2e870
	if (*(int32_t *)(g23 - 0x2444) == 0) {
		// 0x2e838
		result2 = CelDecodeOnly(591, 634, v14, v13 + 5, 33);
		// branch -> 0x2e854
	} else {
		// 0x2e818
		result2 = CelDecodeOnly(591, 634, v14, v13 + 3, 33);
		// branch -> 0x2e854
	}
	// 0x2e854
	g10 = v1;
	g32 = v4;
	return result2;
}

// Address range: 0x2e874 - 0x2e9c4
int32_t function_2e874(int32_t a1)
{
	int32_t v1 = g10; // 0x2e878
	int32_t v2 = 636; // r22
	*(int32_t *)*(int32_t *)(g23 - 0x76b8) = 1;
	int32_t v3 = *(int32_t *)(g23 - 0x77a8);                               // 0x2e898
	int32_t result = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v3; // 0x2e8a4
	if (*(int32_t *)(result + 180) == -1) {
		// 0x2e9b0
		g10 = v1;
		return result;
	}
	int32_t v4 = *(int32_t *)(result + 268); // 0x2e8b4
	g35 = v4;
	int32_t v5 = *(int32_t *)(result + 272); // 0x2e8bc
	g33 = v5;
	int32_t v6 = *(int32_t *)(result + 260); // 0x2e8c0
	g32 = v6;
	int32_t v7 = 0; // 0x2e9a43
	// branch -> 0x2e8d8
	int32_t result2; // 0x2e93c
	while (true) {
		// 0x2e8d8
		int32_t v8; // r19
		int32_t v9; // 0x2e96c1
		if (v7 == 2) {
			// 0x2e918
			v8 = *(int32_t *)(result + 276);
			result2 = *(int32_t *)(result + 280);
			// branch -> 0x2e92c
		} else {
			// 0x2e8e0
			if (v7 > 1) {
				// 0x2e924
				v8 = *(int32_t *)(result + 0x5560);
				result2 = *(int32_t *)(result + 0x5564);
				// branch -> 0x2e92c
			} else {
				// 0x2e8e4
				if (v7 == 0) {
					// 0x2e900
					v8 = v4;
					result2 = v5;
					// branch -> 0x2e92c
				} else {
					// 0x2e90c
					v8 = v6;
					result2 = *(int32_t *)(result + 264);
					// branch -> 0x2e92c
				}
				// 0x2e92c
				v9 = 1;
				// branch -> 0x2e93c
			lab_0x2e93c_2:
				while (true) {
					// 0x2e93c
					if (result2 % 2 != 0) {
						int32_t v10 = v2 - 56; // 0x2e954
						v2 = v10 == 20 ? 636 : v10;
						// branch -> 0x2e964
					}
					int32_t v11 = v9 + 1; // 0x2e96c
					if (v11 >= 37) {
						// break -> 0x2e978
						break;
					}
					v9 = v11;
					// continue -> 0x2e93c
				}
				// 0x2e978
				int32_t v12; // 0x2e994
				if ((v8 || result2) != 0) {
					int32_t v13 = v2; // 0x2e98c
					if (v13 != 636) {
						// 0x2e994
						v12 = v13 - 56;
						v2 = v12;
						// branch -> 0x2e998
					lab_0x2e998:
						// 0x2e998
						if (v12 == 20) {
							// 0x2e9a0
							v2 = 636;
							// branch -> 0x2e9a4
						}
						int32_t v14 = v7 + 1; // 0x2e9a4
						if (v14 >= 4) {
							// break -> 0x2e9b0
							break;
						}
						v7 = v14;
						// continue -> 0x2e8d8
						continue;
					}
				}
				// 0x2e998
				v12 = v2;
				// branch -> 0x2e998
				goto lab_0x2e998;
			}
			// 0x2e92c
			v9 = 1;
			// branch -> 0x2e93c
			goto lab_0x2e93c_2;
		}
		// 0x2e92c
		v9 = 1;
		// branch -> 0x2e93c
		goto lab_0x2e93c_2;
	}
	// 0x2e9b0
	g36 = 0;
	g25 = 37;
	g24 = 4;
	// branch -> 0x2e9b0
	// 0x2e9b0
	g10 = v1;
	return result2;
}

// Address range: 0x2e9c4 - 0x2eab8
int32_t function_2e9c4(void)
{
	int32_t v1 = g36;                                    // 0x2e9c4
	int32_t v2 = g10;                                    // 0x2e9c8
	int32_t v3 = g35;                                    // 0x2e9d0
	int32_t v4 = *(int32_t *)(g23 - 0x76ac);             // 0x2e9d4
	int32_t v5 = 1;                                      // r0
	int32_t v6 = *(int32_t *)(g23 - 0x76a8);             // 0x2e9e0
	int32_t v7 = *(int32_t *)*(int32_t *)(g23 - 0x76e4); // 0x2e9ec
	int32_t v8 = v7;                                     // ctr
	int32_t v9 = g23 - 0x2cd0;                           // 0x2e9fc
	int32_t v10 = *(int32_t *)(g23 - 0x76dc);            // 0x2ea00
	int32_t v11 = *(int32_t *)v6;                        // 0x2ea04
	int32_t v12 = *(int32_t *)v4;                        // r12
	int32_t result;                                      // 0x2eab4
	uint32_t v13;                                        // 0x2ea70
	uint32_t v14;                                        // 0x2ea84
	int32_t result2;                                     // 0x2ea60
	if (v7 >= 1) {
		uint32_t v15 = v11; // 0x2ea30
		while (true) {
			uint32_t v16 = *(int32_t *)v9; // 0x2ea10
			g36 = v16;
			int32_t v17 = *(int32_t *)(v9 + 8);  // 0x2ea14
			uint32_t v18 = *(int32_t *)(v9 + 4); // 0x2ea1c
			g35 = v18;
			uint32_t v19 = *(int32_t *)(v9 + 12) + v18; // 0x2ea28
			int32_t v20 = v7;                           // 0x2ea5c
			if (v15 >= v16) {
				// 0x2ea30
				if (v15 <= v17 + v16) {
					// 0x2ea38
					if (v12 >= v18) {
						// 0x2ea40
						if (v12 <= v19) {
							// 0x2ea48
							*(int32_t *)v10 = v5;
							*(int32_t *)*(int32_t *)(g23 - 0x771c) = v5;
							*(int32_t *)*(int32_t *)(g23 - 0x76e0) = v5;
							v20 = v8;
							// branch -> 0x2ea54
						} else {
							v20 = v7;
						}
					} else {
						v20 = v7;
					}
				} else {
					v20 = v7;
				}
			}
			int32_t v21 = v20 - 1; // 0x2ea5c
			v8 = v21;
			if (v21 == 0) {
				// 0x2ea60
				// branch -> 0x2ea60
				// 0x2ea60
				result2 = *(int32_t *)(g23 - 0x76b8);
				if (*(int32_t *)result2 == 0) {
					// 0x2ea70
					v13 = *(int32_t *)v6;
					if (v13 >= 565) {
						// 0x2ea7c
						if (v13 <= 620) {
							// 0x2ea84
							v14 = *(int32_t *)v4;
							if (v14 >= 416) {
								// 0x2ea90
								if (v14 <= 471) {
									// 0x2ea98
									function_2e874(result2);
									result = gamemenu_off();
									// branch -> 0x2eaa0
									// 0x2eaa0
									g36 = v1;
									g10 = v2;
									g35 = v3;
									return result;
								}
							}
						}
					}
				}
				// 0x2eaa0
				g36 = v1;
				g10 = v2;
				g35 = v3;
				return result2;
			}
			// 0x2ea54
			v7 = v21;
			v10 += 4;
			v15 = v11;
			v9 += 20;
			// branch -> 0x2ea10
		}
	}
	// 0x2ea60
	result2 = *(int32_t *)(g23 - 0x76b8);
	if (*(int32_t *)result2 != 0) {
		// 0x2eaa0
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result2;
	}
	// 0x2ea70
	v13 = *(int32_t *)v6;
	if (v13 < 565 || v13 > 620) {
		// 0x2eaa0
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result2;
	}
	// 0x2ea84
	v14 = *(int32_t *)v4;
	if (v14 < 416) {
		// 0x2eaa0
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result2;
	}
	// 0x2ea90
	if (v14 <= 471) {
		// 0x2ea98
		function_2e874(result2);
		result = gamemenu_off();
		// branch -> 0x2eaa0
	} else {
		result = result2;
	}
	// 0x2eaa0
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result;
}

// Address range: 0x2eab8 - 0x2eadc
int32_t control_set_button_down(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = 1; // r6
	*(int32_t *)(*(int32_t *)(g23 - 0x76dc) + 4 * a1) = 1;
	int32_t result = *(int32_t *)(g23 - 0x76e0); // r3
	*(int32_t *)*(int32_t *)(g23 - 0x771c) = v1;
	*(int32_t *)result = v1;
	return result;
}

// Address range: 0x2eadc - 0x2ebac
int32_t control_check_btn_press(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x76a8);       // 0x2eae4
	int32_t v2 = *(int32_t *)(g23 - 0x76ac);       // 0x2eaec
	int32_t v3 = g23 - 0x2cd0;                     // 0x2eaf4
	uint32_t v4 = *(int32_t *)(g23 - 0x2c94);      // 0x2eb00
	uint32_t v5 = *(int32_t *)v1;                  // 0x2eb04
	uint32_t v6 = *(int32_t *)(g23 - 0x2c90);      // 0x2eb10
	uint32_t v7 = *(int32_t *)(g23 - 0x2c88) + v6; // 0x2eb1c
	int32_t v8 = v3;                               // 0x2eb58
	int32_t result2;                               // 0x2eba8
	int32_t v9;                                    // 0x2eb4c
	int32_t result;                                // 0x2eb60
	uint32_t v10;                                  // 0x2eb64
	uint32_t v11;                                  // 0x2eb74
	int32_t v12;                                   // 0x2eb48
	int32_t v13;                                   // 0x2eb58
	if (v5 < v4) {
		// 0x2eb48
		v12 = *(int32_t *)(v8 + 120);
		v9 = *(int32_t *)v1;
		v13 = *(int32_t *)(v8 + 124);
		result = *(int32_t *)(v8 + 128) + v12;
		v10 = *(int32_t *)(v8 + 132) + v13;
		if (v9 < v12 || v9 > result) {
			// 0x2eb90
			return result;
		}
		// 0x2eb74
		v11 = *(int32_t *)v2;
		if (v11 < v13) {
			// 0x2eb90
			return result;
		}
		// 0x2eb80
		if (v11 <= v10) {
			// 0x2eb88
			result2 = control_set_button_down(6, v10, v9, v13);
			// branch -> 0x2eb90
		} else {
			result2 = result;
		}
		// 0x2eb90
		return result2;
	}
	// 0x2eb24
	if (v5 > *(int32_t *)(g23 - 0x2c8c) + v4) {
		v8 = v3;
		// 0x2eb48
		v12 = *(int32_t *)(v8 + 120);
		v9 = *(int32_t *)v1;
		v13 = *(int32_t *)(v8 + 124);
		result = *(int32_t *)(v8 + 128) + v12;
		v10 = *(int32_t *)(v8 + 132) + v13;
		if (v9 < v12 || v9 > result) {
			// 0x2eb90
			return result;
		}
		// 0x2eb74
		v11 = *(int32_t *)v2;
		if (v11 < v13) {
			// 0x2eb90
			return result;
		}
		// 0x2eb80
		if (v11 <= v10) {
			// 0x2eb88
			result2 = control_set_button_down(6, v10, v9, v13);
			// branch -> 0x2eb90
		} else {
			result2 = result;
		}
		// 0x2eb90
		return result2;
	}
	uint32_t v14 = *(int32_t *)v2; // 0x2eb2c
	if (v14 < v6) {
		v8 = v3;
		// 0x2eb48
		v12 = *(int32_t *)(v8 + 120);
		v9 = *(int32_t *)v1;
		v13 = *(int32_t *)(v8 + 124);
		result = *(int32_t *)(v8 + 128) + v12;
		v10 = *(int32_t *)(v8 + 132) + v13;
		if (v9 < v12 || v9 > result) {
			// 0x2eb90
			return result;
		}
		// 0x2eb74
		v11 = *(int32_t *)v2;
		if (v11 < v13) {
			// 0x2eb90
			return result;
		}
		// 0x2eb80
		if (v11 <= v10) {
			// 0x2eb88
			result2 = control_set_button_down(6, v10, v9, v13);
			// branch -> 0x2eb90
		} else {
			result2 = result;
		}
		// 0x2eb90
		return result2;
	}
	// 0x2eb38
	if (v14 <= v7) {
		// 0x2eb40
		control_set_button_down(3, v7, v5, v6);
		v8 = v3;
		// branch -> 0x2eb48
	} else {
		v8 = v3;
	}
	// 0x2eb48
	v12 = *(int32_t *)(v8 + 120);
	v9 = *(int32_t *)v1;
	v13 = *(int32_t *)(v8 + 124);
	result = *(int32_t *)(v8 + 128) + v12;
	v10 = *(int32_t *)(v8 + 132) + v13;
	if (v9 < v12 || v9 > result) {
		// 0x2eb90
		return result;
	}
	// 0x2eb74
	v11 = *(int32_t *)v2;
	if (v11 < v13) {
		// 0x2eb90
		return result;
	}
	// 0x2eb80
	if (v11 <= v10) {
		// 0x2eb88
		result2 = control_set_button_down(6, v10, v9, v13);
		// branch -> 0x2eb90
	} else {
		result2 = result;
	}
	// 0x2eb90
	return result2;
}

// Address range: 0x2ebac - 0x2ec14
int32_t DoAutoMap(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77e4); // 0x2ebb0
	int32_t v2 = v1;                         // r3
	if (*(char *)v1 == 0) {
		int32_t v3 = *(int32_t *)(g23 - 0x77f0); // 0x2ebcc
		v2 = v3;
		if (*(char *)v3 == 1) {
			// 0x2ebdc
			// branch -> 0x2ec04
			// 0x2ec04
			return InitDiabloMsg(1);
		}
	}
	int32_t *v4 = (int32_t *)*(int32_t *)(g23 - 0x7778); // 0x2ebe8
	int32_t result;                                      // 0x2ec10
	if (*v4 == 0) {
		// 0x2ebf4
		result = StartAutomap();
		// branch -> 0x2ec04
	} else {
		// 0x2ebfc
		*v4 = 0;
		result = v2;
		// branch -> 0x2ec04
	}
	// 0x2ec04
	return result;
}

// Address range: 0x2ec14 - 0x2f110
int32_t function_2ec14(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x76d4); // 0x2ec1c
	g29 = v1;
	g22 = *(int32_t *)(g23 - 0x7728);
	g24 = *(int32_t *)(g23 - 0x64fc);
	g25 = *(int32_t *)(g23 - 0x64f8);
	g26 = *(int32_t *)(g23 - 0x64f4);
	g27 = g23 - 0x2444;
	g28 = *(int32_t *)(g23 - 0x76e4);
	g30 = *(int32_t *)(g23 - 0x76cc);
	g31 = *(int32_t *)(g23 - 0x76b4);
	g32 = *(int32_t *)(g23 - 0x76ac);
	g33 = *(int32_t *)(g23 - 0x76a8);
	g35 = *(int32_t *)(g23 - 0x76a4);
	g36 = *(int32_t *)(g23 - 0x769c);
	g17 = *(int32_t *)(g23 - 0x77ac);
	g16 = *(int32_t *)(g23 - 0x77a8);
	*(int32_t *)v1 = 0;
	function_2dc1c();
	g18 = 0;
	int32_t v2 = g23 - 0x2c10; // 0x2ec70
	int32_t v3 = g23 - 0x2cd0; // 0x2ec78
	g21 = v3;
	int32_t v4 = g23 - 0x2c30; // 0x2ec7c
	g19 = v4;
	g20 = v2;
	int32_t v5 = g28; // 0x2ed504
	int32_t v6 = g23; // 0x2ed98
	if (*(int32_t *)v5 > 0) {
		int32_t v7 = 0; // 0x2ecc8
		while (true) {
			uint32_t v8 = *(int32_t *)v3;               // 0x2ec88
			uint32_t v9 = *(int32_t *)g33;              // 0x2ec8c
			uint32_t v10 = *(int32_t *)(v3 + 4);        // 0x2ec98
			int32_t v11 = *(int32_t *)(v3 + 8) + v8;    // 0x2eca0
			uint32_t v12 = *(int32_t *)(v3 + 12) + v10; // 0x2eca4
			int32_t v13 = v5;                           // 0x2ed50
			int32_t v14;                                // 0x2ed40
			int32_t v15;                                // 0x2ed44
			int32_t v16;                                // 0x2ed48
			int32_t v17;                                // 0x2ed4c
			if (v9 >= v8) {
				// 0x2ecac
				if (v9 <= v11) {
					uint32_t v18 = *(int32_t *)g32; // 0x2ecb4
					if (v18 >= v10) {
						// 0x2ecc0
						if (v18 <= v12) {
							// 0x2ecc8
							if (v7 == 7) {
								// 0x2ece0
								g34 = g35;
								if (*(int32_t *)g27 == 0) {
									// 0x2ecfc
									g37 = g25;
									strcpy();
									// branch -> 0x2ed08
								} else {
									// 0x2ecec
									g37 = g26;
									strcpy();
									// branch -> 0x2ed08
								}
							lab_0x2ed08:;
								int32_t v19 = *(int32_t *)g19; // 0x2ed08
								g38 = v19;
								if (v19 != 0) {
								lab_0x2ed14:
									// 0x2ed14
									g37 = g24;
									sprintf();
									function_2dbac(g31, 1);
									// branch -> 0x2ed2c
								}
							lab_0x2ed2c:
								// 0x2ed2c
								*(char *)g22 = 0;
								*(int32_t *)g29 = 1;
								*(int32_t *)g30 = 1;
								v13 = g28;
								// branch -> 0x2ed40
								// 0x2ed40
								v14 = g21 + 20;
								g21 = v14;
								v15 = g20 + 4;
								g20 = v15;
								v16 = g19 + 4;
								g19 = v16;
								v17 = g18 + 1;
								g18 = v17;
								if (v17 >= *(int32_t *)v13) {
									// break -> 0x2ed50
									break;
								}
								v5 = v13;
								v4 = v16;
								v2 = v15;
								v7 = v17;
								v3 = v14;
								// continue -> 0x2ec88
								continue;
							} else {
								// 0x2ecd0
								g34 = g35;
								g37 = *(int32_t *)v2;
								strcpy();
								// branch -> 0x2ed08
								goto lab_0x2ed08;
							}
						} else {
							v13 = v5;
						}
					} else {
						v13 = v5;
					}
				} else {
					v13 = v5;
				}
			}
			// 0x2ed40
			v14 = v3 + 20;
			g21 = v14;
			v15 = v2 + 4;
			g20 = v15;
			v16 = v4 + 4;
			g19 = v16;
			v17 = v7 + 1;
			g18 = v17;
			if (v17 >= *(int32_t *)v13) {
				// break -> 0x2ed50
				break;
			}
			v5 = v13;
			v4 = v16;
			v2 = v15;
			v7 = v17;
			v3 = v14;
			// continue -> 0x2ec88
		}
		// 0x2ed50
		v6 = g23;
		// branch -> 0x2ed5c
	}
	int32_t result3 = *(int32_t *)(v6 - 0x76b8); // 0x2ed5c
	int32_t v20;                                 // 0x2f0c8
	int32_t v21;                                 // 0x2f0dc
	if (*(int32_t *)result3 == 0) {
		uint32_t v22 = *(int32_t *)g33; // 0x2ed6c
		if (v22 >= 565) {
			// 0x2ed78
			if (v22 <= 620) {
				uint32_t v23 = *(int32_t *)g32; // 0x2ed80
				int32_t v24;                    // 0x2f0f0
				int32_t result2;                // 0x2f10c
				int32_t result;                 // 0x2f10c43
				if (v23 < 416 || v23 > 471) {
					result = result3;
					// 0x2f0c8
					v20 = *(int32_t *)g33;
					if (v20 < 191 || v20 > 436) {
						// 0x2f0fc
						return result;
					}
					// 0x2f0dc
					v21 = *(int32_t *)g32;
					if (v21 < 357) {
						// 0x2f0fc
						return result;
					}
					// 0x2f0e8
					if (v21 <= 384) {
						// 0x2f0f0
						v24 = function_5ae34();
						*(char *)*(int32_t *)(g23 - 0x772c) = (char)v24;
						result2 = v24;
						// branch -> 0x2f0fc
					} else {
						result2 = result;
					}
					// 0x2f0fc
					return result2;
				}
				// 0x2ed94
				g34 = g35;
				g37 = *(int32_t *)(v6 - 0x6500);
				strcpy();
				g37 = *(int32_t *)(g23 - 0x6504);
				*(char *)g22 = 0;
				g34 = g31;
				*(int32_t *)g29 = 1;
				*(int32_t *)g30 = 1;
				strcpy();
				function_2dbac(g31, 1);
				int32_t v25 = g16 + 0x55ec * *(int32_t *)g17; // 0x2edd4
				int32_t v26 = *(int32_t *)(v25 + 180);        // 0x2edd8
				if (v26 == -1) {
					result = v25;
					// 0x2f0c8
					v20 = *(int32_t *)g33;
					if (v20 < 191 || v20 > 436) {
						// 0x2f0fc
						return result;
					}
					// 0x2f0dc
					v21 = *(int32_t *)g32;
					if (v21 < 357) {
						// 0x2f0fc
						return result;
					}
					// 0x2f0e8
					if (v21 <= 384) {
						// 0x2f0f0
						v24 = function_5ae34();
						*(char *)*(int32_t *)(g23 - 0x772c) = (char)v24;
						result2 = v24;
						// branch -> 0x2f0fc
					} else {
						result2 = result;
					}
					// 0x2f0fc
					return result2;
				}
				char v27 = *(char *)(v25 + 184); // 0x2ede4
				if (v27 != 2) {
					// 0x2edf4
					if (v27 > 2) {
						// 0x2ee08
						if (v27 == 3) {
							// 0x2f064
							g37 = *(int32_t *)(g23 - 0x6494);
							g38 = *(int32_t *)(g36 + 56 * v26 + 4);
							sprintf();
							function_2dbac(g31, 1);
							int32_t v28 = *(int32_t *)(g16 + 0x55ec * *(int32_t *)g17 + 2876); // 0x2f094
							g38 = v28;
							if (v28 == 1) {
								// 0x2f0a0
								g34 = g31;
								g37 = *(int32_t *)(g23 - 0x6498);
								strcpy();
								// branch -> 0x2f0bc
							} else {
								// 0x2f0b0
								g37 = *(int32_t *)(g23 - 0x649c);
								sprintf();
								// branch -> 0x2f0bc
							}
							// 0x2f0bc
							result = function_2dbac(g31, 1);
							// branch -> 0x2f0c8
						} else {
							result = v25;
						}
						// 0x2f0c8
						v20 = *(int32_t *)g33;
						if (v20 < 191 || v20 > 436) {
							// 0x2f0fc
							return result;
						}
						// 0x2f0dc
						v21 = *(int32_t *)g32;
						if (v21 < 357) {
							// 0x2f0fc
							return result;
						}
						// 0x2f0e8
						if (v21 <= 384) {
							// 0x2f0f0
							v24 = function_5ae34();
							*(char *)*(int32_t *)(g23 - 0x772c) = (char)v24;
							result2 = v24;
							// branch -> 0x2f0fc
						} else {
							result2 = result;
						}
						// 0x2f0fc
						return result2;
					}
					// 0x2edf8
					if (v27 == 0) {
						// 0x2ee14
						g37 = *(int32_t *)(g23 - 0x6474);
						g38 = *(int32_t *)(g36 + 56 * v26 + 8);
						sprintf();
						result = function_2dbac(g31, 1);
						// branch -> 0x2f0c8
					} else {
						// 0x2ee00
						if (v27 > 0) {
							// 0x2ee3c
							g37 = *(int32_t *)(g23 - 0x6478);
							g38 = *(int32_t *)(g36 + 56 * v26 + 4);
							sprintf();
							function_2dbac(g31, 1);
							int32_t v29 = g16 + 0x55ec * *(int32_t *)g17;           // 0x2ee68
							int32_t v30 = (int32_t) * (char *)(g18 + v29 + 193);    // 0x2ee7c
							int32_t v31 = v30 + (int32_t) * (char *)(v29 + 0x5570); // 0x2ee80
							int32_t v32 = v31 < 0 ? 0 : v31;
							g38 = v32;
							if (v32 == 0) {
								// 0x2ee98
								g37 = *(int32_t *)(g23 - 0x6480);
								sprintf();
								// branch -> 0x2eeb4
							} else {
								// 0x2eea8
								g37 = *(int32_t *)(g23 - 0x6484);
								sprintf();
								// branch -> 0x2eeb4
							}
							// 0x2eeb4
							result = function_2dbac(g31, 1);
							// branch -> 0x2f0c8
						} else {
							result = v25;
						}
					}
					// 0x2f0c8
					v20 = *(int32_t *)g33;
					if (v20 < 191 || v20 > 436) {
						// 0x2f0fc
						return result;
					}
					// 0x2f0dc
					v21 = *(int32_t *)g32;
					if (v21 < 357) {
						// 0x2f0fc
						return result;
					}
					// 0x2f0e8
					if (v21 <= 384) {
						// 0x2f0f0
						v24 = function_5ae34();
						*(char *)*(int32_t *)(g23 - 0x772c) = (char)v24;
						result2 = v24;
						// branch -> 0x2f0fc
					} else {
						result2 = result;
					}
					// 0x2f0fc
					return result2;
				}
				// 0x2eec4
				g37 = *(int32_t *)(g23 - 0x6488);
				g38 = *(int32_t *)(g36 + 56 * v26 + 4);
				sprintf();
				function_2dbac(g31, 1);
				g38 = 0;
				int32_t v33 = g16 + 0x55ec * *(int32_t *)g17; // 0x2eef4
				int32_t v34 = *(int32_t *)(v33 + 0x4828);     // 0x2eef8
				int32_t v35 = 0;                              // 0x2ef7c39
				if (v34 >= 1) {
					int32_t v36 = 0; // 0x2ef38
					int32_t v37;     // 0x2ef3831
					while (true) {
						// 0x2ef0c
						v37 = v36;
						int32_t v38; // 0x2ef40
						if (*(int32_t *)(v33 + 3760) != -1) {
							int32_t v39 = *(int32_t *)(v33 + 3972); // 0x2ef18
							if (v39 != 21) {
								// 0x2ef24
								if (v39 != 22) {
									v37 = v36;
								lab_0x2ef3c_2:
									// 0x2ef3c
									v38 = v34 - 1;
									if (v38 == 0) {
										// break -> 0x2ef44
										break;
									}
									v34 = v38;
									v36 = v37;
									v33 += 368;
									// continue -> 0x2ef0c
									continue;
								}
							}
							// 0x2ef2c
							if (g18 != *(int32_t *)(v33 + 3976)) {
								v37 = v36;
								goto lab_0x2ef3c_2;
							}
							int32_t v40 = v36 + 1; // 0x2ef38
							g38 = v40;
							v37 = v40;
							// branch -> 0x2ef3c
							goto lab_0x2ef3c_2;
						}
						// 0x2ef3c
						v38 = v34 - 1;
						if (v38 == 0) {
							// break -> 0x2ef44
							break;
						}
						v34 = v38;
						v36 = v37;
						v33 += 368;
						// continue -> 0x2ef0c
					}
					// 0x2ef44
					v35 = v37;
					// branch -> 0x2ef44
				}
				int32_t v41 = 2; // 0x2f02c
				int32_t v42 = 0; // 0x2efb8
				// branch -> 0x2ef50
				int32_t v43; // 0x2f030
				while (true) {
					int32_t v44 = v35; // 0x2efb0
					if (*(int32_t *)(v33 + 0x485c) != -1) {
						// 0x2ef5c
						if (*(int32_t *)(v33 + 0x4930) < 23) {
							// 0x2ef70
							if (g18 == *(int32_t *)(v33 + 0x4934)) {
								int32_t v45 = v35 + 1; // 0x2ef7c
								g38 = v45;
								v44 = v45;
								// branch -> 0x2ef80
							} else {
								v44 = v35;
							}
						} else {
							v44 = v35;
						}
					}
					int32_t v46 = v44; // 0x2efe8
					if (*(int32_t *)(v33 + 0x49cc) != -1) {
						// 0x2ef90
						if (*(int32_t *)(v33 + 0x4aa0) < 23) {
							// 0x2efa4
							if (g18 == *(int32_t *)(v33 + 0x4aa4)) {
								int32_t v47 = v44 + 1; // 0x2efb0
								g38 = v47;
								v46 = v47;
								// branch -> 0x2efb4
							} else {
								v46 = v44;
							}
						} else {
							v46 = v44;
						}
					}
					int32_t v48 = v46; // 0x2f020
					if (*(int32_t *)(v33 + 0x4b3c) != -1) {
						// 0x2efc8
						if (*(int32_t *)(v33 + 0x4c10) < 23) {
							// 0x2efdc
							if (g18 == *(int32_t *)(v33 + 0x4c14)) {
								int32_t v49 = v46 + 1; // 0x2efe8
								g38 = v49;
								v48 = v49;
								// branch -> 0x2efec
							} else {
								v48 = v46;
							}
						} else {
							v48 = v46;
						}
					}
					// 0x2efec
					v43 = v48;
					if (*(int32_t *)(v33 + 0x4cac) != -1) {
						// 0x2f000
						if (*(int32_t *)(v33 + 0x4d80) < 23) {
							// 0x2f014
							if (g18 == *(int32_t *)(v33 + 0x4d84)) {
								int32_t v50 = v48 + 1; // 0x2f020
								g38 = v50;
								v43 = v50;
								// branch -> 0x2f024
							} else {
								v43 = v48;
							}
						} else {
							v43 = v48;
						}
					}
					int32_t v51 = v41 - 1; // 0x2f02c
					if (v51 == 0) {
						// break -> 0x2f030
						break;
					}
					v41 = v51;
					v42 += 3;
					v35 = v43;
					v33 += 1472;
					// continue -> 0x2ef50
				}
				// 0x2f030
				if (v43 == 1) {
					// 0x2f038
					g34 = g31;
					g37 = *(int32_t *)(g23 - 0x648c);
					strcpy();
					// branch -> 0x2f054
				} else {
					// 0x2f048
					g37 = *(int32_t *)(g23 - 0x6490);
					sprintf();
					// branch -> 0x2f054
				}
				// 0x2f054
				result = function_2dbac(g31, 1);
				// branch -> 0x2f0c8
				// 0x2f0c8
				v20 = *(int32_t *)g33;
				if (v20 < 191 || v20 > 436) {
					// 0x2f0fc
					return result;
				}
				// 0x2f0dc
				v21 = *(int32_t *)g32;
				if (v21 < 357) {
					// 0x2f0fc
					return result;
				}
				// 0x2f0e8
				if (v21 <= 384) {
					// 0x2f0f0
					v24 = function_5ae34();
					*(char *)*(int32_t *)(g23 - 0x772c) = (char)v24;
					result2 = v24;
					// branch -> 0x2f0fc
				} else {
					result2 = result;
				}
				// 0x2f0fc
				return result2;
			}
			// 0x2f0c8
			v20 = *(int32_t *)g33;
			if (v20 < 191) {
				// 0x2f0fc
				return result3;
			}
			// 0x2f0d4
			if (v20 > 436) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x2f0dc
			v21 = *(int32_t *)g32;
			if (v21 < 357) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x2f0e8
			if (v21 <= 384) {
				// 0x2f0f0
				*(char *)*(int32_t *)(g23 - 0x772c) = (char)function_5ae34();
				// branch -> 0x2f0fc
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x2f0c8
		v20 = *(int32_t *)g33;
		if (v20 < 191) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x2f0d4
		if (v20 > 436) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x2f0dc
		v21 = *(int32_t *)g32;
		if (v21 < 357) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x2f0e8
		if (v21 <= 384) {
			// 0x2f0f0
			*(char *)*(int32_t *)(g23 - 0x772c) = (char)function_5ae34();
			// branch -> 0x2f0fc
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x2f0c8
	v20 = *(int32_t *)g33;
	if (v20 < 191) {
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x2f0d4
	if (v20 > 436) {
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x2f0dc
	v21 = *(int32_t *)g32;
	if (v21 < 357) {
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x2f0e8
	if (v21 <= 384) {
		// 0x2f0f0
		*(char *)*(int32_t *)(g23 - 0x772c) = (char)function_5ae34();
		// branch -> 0x2f0fc
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x2f110 - 0x2f2f4
int32_t CheckBtnUp(int32_t a1)
{
	// 0x2f110
	g36 = 0;
	int32_t result = *(int32_t *)(g23 - 0x76e0); // r3
	g24 = *(int32_t *)(g23 - 0x77bc);
	g25 = *(int32_t *)(g23 - 0x7730);
	int32_t v1 = 0; // r16
	g32 = *(int32_t *)(g23 - 0x76d0);
	g33 = *(int32_t *)(g23 - 0x76ac);
	g35 = *(int32_t *)(g23 - 0x76a8);
	int32_t v2 = *(int32_t *)(g23 - 0x76dc); // r19
	int32_t v3 = g23 - 0x2cd0;               // r18
	*(int32_t *)*(int32_t *)(g23 - 0x771c) = 1;
	*(int32_t *)result = g36;
	int32_t v4 = v2; // 0x2f184
	// branch -> 0x2f174
	while (true) {
		int32_t *v5 = (int32_t *)v4; // 0x2f174
		int32_t v6;                  // 0x2f2bc
		int32_t v7;                  // 0x2f2cc
		if (*v5 == 0) {
			// 0x2f174
			// branch -> 0x2f2bc
		} else {
			// 0x2f180
			*v5 = 0;
			uint32_t v8 = *(int32_t *)g35; // 0x2f188
			int32_t v9 = v3;               // 0x2f18c
			uint32_t v10 = *(int32_t *)v9; // 0x2f18c
			result = v10;
			if (v8 >= v10) {
				// 0x2f198
				if (v8 <= *(int32_t *)(v9 + 8) + v10) {
					uint32_t v11 = *(int32_t *)g33;      // 0x2f1a8
					uint32_t v12 = *(int32_t *)(v9 + 4); // 0x2f1ac
					result = v12;
					if (v11 >= v12) {
						// 0x2f1b8
						if (v11 <= *(int32_t *)(v9 + 12) + v12) {
							// 0x2f1c8
							if (v1 <= 7) {
								// 0x2f1d0
								return *(int32_t *)(g36 + g23 - 0x2b08);
							}
							// 0x2f2bc
							v6 = v1 + 1;
							v1 = v6;
							v3 = v9 + 20;
							g36 += 4;
							v7 = v2 + 4;
							v2 = v7;
							if (v6 >= 8) {
								// break -> 0x2f2d4
								break;
							}
							v4 = v7;
							// continue -> 0x2f174
							continue;
						}
						// 0x2f2bc
						v6 = v1 + 1;
						v1 = v6;
						v3 = v9 + 20;
						g36 += 4;
						v7 = v2 + 4;
						v2 = v7;
						if (v6 >= 8) {
							// break -> 0x2f2d4
							break;
						}
						v4 = v7;
						// continue -> 0x2f174
						continue;
					}
					// 0x2f2bc
					v6 = v1 + 1;
					v1 = v6;
					v3 = v9 + 20;
					g36 += 4;
					v7 = v2 + 4;
					v2 = v7;
					if (v6 >= 8) {
						// break -> 0x2f2d4
						break;
					}
					v4 = v7;
					// continue -> 0x2f174
					continue;
				}
				// 0x2f2bc
				v6 = v1 + 1;
				v1 = v6;
				v3 = v9 + 20;
				g36 += 4;
				v7 = v2 + 4;
				v2 = v7;
				if (v6 >= 8) {
					// break -> 0x2f2d4
					break;
				}
				v4 = v7;
				// continue -> 0x2f174
				continue;
			}
			// 0x2f2bc
			v6 = v1 + 1;
			v1 = v6;
			v3 = v9 + 20;
			g36 += 4;
			v7 = v2 + 4;
			v2 = v7;
			if (v6 >= 8) {
				// break -> 0x2f2d4
				break;
			}
			v4 = v7;
			// continue -> 0x2f174
			continue;
		}
		// 0x2f2bc
		v6 = v1 + 1;
		v1 = v6;
		v3 += 20;
		g36 += 4;
		v7 = v2 + 4;
		v2 = v7;
		if (v6 >= 8) {
			// break -> 0x2f2d4
			break;
		}
		v4 = v7;
		// continue -> 0x2f174
	}
	// 0x2f2dc
	result = gamemenu_off();
	// branch -> 0x2f2e0
	// 0x2f2e0
	return result;
}

// Address range: 0x2f2f4 - 0x2f3a8
int32_t FreeControlPan(int32_t a1)
{
	int32_t v1 = g36; // 0x2f2f4
	g36 = 0;
	int32_t *v2 = (int32_t *)(g23 - 0x4fb8); // 0x2f308
	g34 = *v2;
	*v2 = 0;
	mem_free_dbg();
	int32_t *v3 = (int32_t *)(g23 - 0x4fbc); // 0x2f314
	g34 = *v3;
	*v3 = g36;
	mem_free_dbg();
	int32_t *v4 = (int32_t *)(g23 - 0x4fc0); // 0x2f320
	g34 = *v4;
	*v4 = g36;
	mem_free_dbg();
	MemFreeDbg((int32_t *)(g23 - 0x4fa4));
	MemFreeDbg((int32_t *)(g23 - 0x4fa8));
	MemFreeDbg((int32_t *)(g23 - 0x4fb0));
	MemFreeDbg((int32_t *)(g23 - 0x4fa0));
	MemFreeDbg((int32_t *)(g23 - 0x4fe4));
	MemFreeDbg((int32_t *)(g23 - 0x4fe8));
	MemFreeDbg((int32_t *)(g23 - 0x4fac));
	MemFreeDbg((int32_t *)(g23 - 0x4fc4));
	MemFreeDbg((int32_t *)*(int32_t *)(g23 - 0x7700));
	MemFreeDbg((int32_t *)(g23 - 0x4fc8));
	MemFreeDbg((int32_t *)(g23 - 0x4fcc));
	MemFreeDbg((int32_t *)(g23 - 0x4fd0));
	int32_t result = MemFreeDbg((int32_t *)(g23 - 0x4fb4)); // 0x2f390
	g36 = v1;
	return result;
}

// Address range: 0x2f3a8 - 0x2f3f8
int32_t control_WriteStringToBuffer(int32_t a1)
{
	int32_t v1 = 0;   // 0x2f3d0
	int32_t v2 = g34; // 0x2f3bc
	// branch -> 0x2f3e4
	while (true) {
		char *v3 = (char *)v2; // 0x2f3e4
		if (*v3 == 0) {
			// 0x2f3f0
			return 1;
		}
		unsigned char v4 = *(char *)((int32_t)*v3 + g23 - 0x2ae8);          // 0x2f3c4
		unsigned char v5 = *(char *)((int32_t)v4 + g23 - 0x2e20);           // 0x2f3c8
		int32_t v6 = (int32_t) * (char *)((int32_t)v5 + g23 - 0x2da0) + v1; // 0x2f3d0
		if (v6 >= 125) {
			// break -> 0x2f3dc
			break;
		}
		v1 = v6;
		v2++;
		// continue -> 0x2f3e4
	}
	// 0x2f3dc
	return 0;
}

// Address range: 0x2f3f8 - 0x2f4f0
int32_t function_2f3f8(int32_t a1, char *a2, int32_t a3, int32_t a4)
{
	// 0x2f3f8
	g37 = (int32_t)a2;
	int32_t v1 = g10;          // 0x2f3fc
	int32_t v2 = g23 - 0x2da0; // 0x2f40c
	g32 = v2;
	int32_t v3 = g37; // 0x2f410
	g29 = v3;
	int32_t v4 = g23 - 0x2e20; // 0x2f414
	g33 = v4;
	g30 = 0;
	int32_t v5 = g23 - 0x2ae8; // 0x2f41c
	g35 = v5;
	g36 = *(int32_t *)(g23 - 0x7728);
	int32_t v6 = *(int32_t *)(4 * a1 + 20 * a4 + g23 - 0x2d5c); // 0x2f434
	g31 = v6;
	int32_t v7;        // 0x2f488
	int32_t v8;        // 0x2f4bc
	int32_t v9;        // 0x2f4c4
	int32_t v10;       // 0x2f4d0
	int32_t result2;   // 0x2f4ec33
	int32_t v11;       // 0x2f4ec34
	int32_t result;    // 0x2f4ec36
	int32_t v12;       // 0x2f480
	int32_t v13;       // 0x2f48c
	int32_t v14;       // 0x2f4a8
	int32_t v15;       // 0x2f4c8
	int32_t v16;       // 0x2f480
	int32_t v17;       // 0x2f498
	unsigned char v18; // 0x2f490
	unsigned char v19; // 0x2f494
	int32_t v20;       // 0x2f494
	if (a3 == 1) {
		char *v21 = (char *)v3; // 0x2f4649
		int32_t v22 = 0;        // 0x2f478
		uint32_t v23;           // 0x2f478
		int32_t v24;            // 0x2f47c
		if (*v21 != 0) {
			int32_t v25 = v3;      // 0x2f448
			int32_t v26 = v25 + 1; // 0x2f44c
			g37 = v26;
			unsigned char v27 = *(char *)((int32_t) * (char *)v25 + v5); // 0x2f450
			unsigned char v28 = *(char *)((int32_t)v27 + v4);            // 0x2f454
			int32_t v29 = 2 + (int32_t) * (char *)((int32_t)v28 + v2);   // 0x2f460
			v22 = v29;
			while (*(char *)v26 != 0) {
				// 0x2f448
				v25 = v26;
				v26 = v25 + 1;
				g37 = v26;
				v27 = *(char *)((int32_t) * (char *)v25 + v5);
				v28 = *(char *)((int32_t)v27 + v4);
				v29 = v29 + 2 + (int32_t) * (char *)((int32_t)v28 + v2);
				v22 = v29;
				// continue -> 0x2f448
			}
			// 0x2f470
			v12 = 0;
			if (v22 <= 287) {
				// 0x2f478
				v23 = 288 - v22;
				v24 = v23 / 2 | v23 & -0x80000000;
				g30 = v24;
				v12 = v24;
				// branch -> 0x2f480
			}
			// 0x2f480
			v16 = v12 + v6;
			g31 = v16;
			result = v22;
			// branch -> 0x2f4d0
			// 0x2f4d0
			if (*v21 == 0) {
				// 0x2f4dc
				g10 = v1;
				return result;
			}
			v11 = result;
			v8 = v16;
			int32_t v30 = v12; // 0x2f4a4
			int32_t v31 = v2;  // 0x2f498
			int32_t v32 = v4;  // 0x2f494
			int32_t v33 = v5;  // 0x2f490
			v7 = v3;
			while (true) {
				// 0x2f488
				v13 = v7 + 1;
				g29 = v13;
				v18 = *(char *)((int32_t) * (char *)v7 + v33);
				v19 = *(char *)((int32_t)v18 + v32);
				v20 = v19;
				g37 = v20;
				v17 = v20 + v31;
				g28 = v17;
				v14 = v30 + 2 + (int32_t) * (char *)v17;
				g30 = v14;
				result2 = v11;
				v10 = v13;
				v15 = v8;
				v9 = v17;
				if (v19 != 0) {
				lab_0x2f4b0:
					// 0x2f4b0
					if (v14 <= 287) {
						// 0x2f4b8
						result2 = function_2d918(v8, v20, (int32_t) * (char *)g36);
						v10 = g29;
						v15 = g31;
						v9 = g28;
						// branch -> 0x2f4c4
					} else {
						result2 = v11;
						v10 = v13;
						v15 = v8;
						v9 = v17;
					}
				}
			lab_0x2f4c4:;
				int32_t v34 = v15 + 2 + (int32_t) * (char *)v9; // 0x2f4cc
				g31 = v34;
				if (*(char *)v10 == 0) {
					// 0x2f4dc
					g10 = v1;
					return result2;
				}
				// 0x2f4c4
				v11 = result2;
				v8 = v34;
				v30 = g30;
				v31 = g32;
				v32 = g33;
				v33 = g35;
				v7 = v10;
				// branch -> 0x2f488
			}
		}
		// 0x2f470
		v12 = 0;
		if (v22 <= 287) {
			// 0x2f478
			v23 = 288 - v22;
			v24 = v23 / 2 | v23 & -0x80000000;
			g30 = v24;
			v12 = v24;
			// branch -> 0x2f480
		}
		// 0x2f480
		v16 = v12 + v6;
		g31 = v16;
		result = v22;
		// branch -> 0x2f4d0
	} else {
		// 0x2f3f8
		result = a1;
		v16 = v6;
		v12 = 0;
		// branch -> 0x2f4d0
	}
	// 0x2f4d0
	if (*(char *)v3 == 0) {
		// 0x2f4dc
		g10 = v1;
		return result;
	}
	v11 = result;
	v8 = v16;
	v7 = v3;
	while (true) {
		// 0x2f488
		v13 = v7 + 1;
		g29 = v13;
		v18 = *(char *)((int32_t) * (char *)v7 + v5);
		v19 = *(char *)((int32_t)v18 + v4);
		v20 = v19;
		g37 = v20;
		v17 = v20 + v2;
		g28 = v17;
		v14 = v12 + 2 + (int32_t) * (char *)v17;
		g30 = v14;
		if (v19 == 0) {
			result2 = v11;
			v10 = v13;
			v15 = v8;
			v9 = v17;
			goto lab_0x2f4c4;
		}
		goto lab_0x2f4b0;
	}
}

// Address range: 0x2f4f0 - 0x2f5a4
int32_t function_2f4f0(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x76d0); // 0x2f4f8
	int32_t v2 = *(int32_t *)(g23 - 0x76c4); // 0x2f4fc
	g36 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x76a4); // 0x2f500
	char *v4 = (char *)v3;                   // 0x2f500
	g37 = v3;
	int32_t result = v1; // 0x2f5a0
	if (*(int32_t *)v1 == 0) {
		// 0x2f518
		g32 = 0;
		int32_t v5 = v2;  // 0x2f5841
		int32_t v6 = g23; // 0x2f548
		int32_t v7 = 1;   // 0x2f57016
		int32_t v8 = 0;   // 0x2f56c14
		if (*v4 != 0) {
			// 0x2f52c
			function_2f3f8(0, v4, 1, *(int32_t *)v2);
			g32 = 1;
			v5 = g36;
			v6 = g23;
			v7 = 0;
			v8 = 1;
			// branch -> 0x2f544
		}
		int32_t v9 = *(int32_t *)(v6 - 0x76c8); // 0x2f548
		g37 = 0;
		int32_t v10 = *(int32_t *)(v6 - 0x76c0); // 0x2f550
		g35 = v9;
		g33 = v10;
		int32_t v11 = *(int32_t *)v5; // 0x2f5843
		if (v11 > 0) {
			int32_t v12 = 0;   // 0x2f56c
			int32_t v13 = v10; // 0x2f568
			while (true) {
				int32_t v14 = *(int32_t *)v9;                                       // 0x2f564
				int32_t v15 = function_2f3f8(v12 + v8, (char *)v13, v14, v11 - v7); // 0x2f574
				int32_t v16 = g35 + 4;                                              // 0x2f578
				g35 = v16;
				int32_t v17 = g33 + 64; // 0x2f57c
				g33 = v17;
				int32_t v18 = g30 + 1;         // 0x2f580
				int32_t v19 = *(int32_t *)g36; // 0x2f584
				if (v18 < v19) {
					// 0x2f564
					v11 = v19;
					v7 = g31;
					v8 = g32;
					v12 = v18;
					v13 = v17;
					v9 = v16;
					// branch -> 0x2f564
					continue;
				} else {
					result = v15;
				}
			}
		} else {
			result = v10;
		}
	}
	// 0x2f590
	return result;
}

// Address range: 0x2f5a4 - 0x2f8d0
int32_t DrawInfoBox(int32_t a1)
{
	int32_t v1 = g10; // 0x2f5a8
	g27 = *(int32_t *)(g23 - 0x775c);
	g28 = *(int32_t *)(g23 - 0x7754);
	g29 = *(int32_t *)(g23 - 0x7750);
	int32_t v2 = *(int32_t *)(g23 - 0x7740); // r26
	g31 = *(int32_t *)(g23 - 0x7728);
	int32_t v3 = *(int32_t *)(g23 - 0x76b8); // r22
	g39 = 60;
	g32 = *(int32_t *)(g23 - 0x76b4);
	g33 = *(int32_t *)(g23 - 0x76a4);
	g35 = *(int32_t *)(g23 - 0x77ac);
	g36 = *(int32_t *)(g23 - 0x77a8);
	function_2dc34(177, 62, 288, 60, 241, 558);
	if (*(int32_t *)*(int32_t *)(g23 - 0x76d4) == 0) {
		// 0x2f608
		if (*(int32_t *)v2 == 0) {
			// 0x2f614
			if (*(char *)*(int32_t *)(g23 - 0x772c) == -1) {
				// 0x2f628
				if (*(int32_t *)v3 == 0) {
					// 0x2f634
					*(char *)g33 = 0;
					*(char *)g31 = (char)0;
					function_2dc1c();
					// branch -> 0x2f644
				}
			}
		}
	}
	// 0x2f644
	int32_t result; // 0x2f8cc
	int32_t v4;     // 0x2f8a8
	if (*(int32_t *)v3 == 0) {
		// 0x2f650
		if (*(int32_t *)v2 == 0) {
			// 0x2f668
			if (*(int32_t *)*(int32_t *)(g23 - 0x7744) >= 12) {
				int32_t v5 = 0x55ec * *(int32_t *)g35; // 0x2f67c
				int32_t v6 = g36;                      // 0x2f680
				int32_t v7 = v6 + v5;                  // 0x2f680
				if (*(int32_t *)(v7 + 0x53dc) == 11) {
					int32_t v8 = *(int32_t *)(v7 + 0x5498); // 0x2f690
					function_314d0(v8);
					g37 = *(int32_t *)(g23 - 0x6510);
					g38 = v8;
					sprintf();
					// branch -> 0x2f89c
					// 0x2f89c
					if (*(char *)g33 == 0) {
						// 0x2f8a8
						v4 = *(int32_t *)(g23 - 0x76c4);
						if (*(int32_t *)v4 != 0) {
							// 0x2f8b8
							result = function_2f4f0();
							// branch -> 0x2f8bc
						} else {
							result = v4;
						}
					} else {
						// 0x2f8b8
						result = function_2f4f0();
						// branch -> 0x2f8bc
					}
					// 0x2f8bc
					g10 = v1;
					return result;
				}
				// 0x2f6b4
				if (*(int32_t *)(v7 + 0x5538) == 0) {
					// 0x2f6c0
					function_2dc1c();
					function_2dbac(*(int32_t *)(g23 - 0x6514), 1);
					*(int32_t *)*(int32_t *)(g23 - 0x76cc) = 1;
					// branch -> 0x2f89c
				} else {
					// 0x2f6e0
					if (*(int32_t *)(v7 + 0x540c) == 0) {
						// 0x2f700
						g34 = g33;
						g37 = v5 + 0x5411 + v6;
						strcpy();
						// branch -> 0x2f710
					} else {
						// 0x2f6ec
						g34 = g33;
						g37 = v5 + 0x5451 + v6;
						strcpy();
						// branch -> 0x2f710
					}
					unsigned char v9 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 0x5410); // 0x2f71c
					if (v9 == 1) {
						// 0x2f728
						*(char *)g31 = 1;
						// branch -> 0x2f730
					}
					// 0x2f730
					if (0x1000000 * (int32_t)v9 == 0x2000000) {
						// 0x2f73c
						*(char *)g31 = 3;
						// branch -> 0x2f89c
					}
				}
				// 0x2f89c
				if (*(char *)g33 == 0) {
					// 0x2f8a8
					v4 = *(int32_t *)(g23 - 0x76c4);
					if (*(int32_t *)v4 != 0) {
						// 0x2f8b8
						result = function_2f4f0();
						// branch -> 0x2f8bc
					} else {
						result = v4;
					}
				} else {
					// 0x2f8b8
					result = function_2f4f0();
					// branch -> 0x2f8bc
				}
				// 0x2f8bc
				g10 = v1;
				return result;
			}
			unsigned char v10 = *(char *)*(int32_t *)(g23 - 0x7748); // 0x2f74c
			if (v10 != -1) {
				// 0x2f75c
				function_60fb8((int32_t)v10);
				// branch -> 0x2f760
			}
			unsigned char v11 = *(char *)*(int32_t *)(g23 - 0x774c); // 0x2f764
			if (v11 != -1) {
				// 0x2f774
				function_9d828((int32_t)v11);
				// branch -> 0x2f778
			}
			int32_t v12 = *(int32_t *)g29; // 0x2f778
			g37 = v12;
			char v13; // 0x2f804
			char v14; // 0x2f84c
			if (v12 != -1) {
				// 0x2f784
				if (*(char *)*(int32_t *)(g23 - 0x7794) == 0) {
					// 0x2f7ec
					g34 = g33;
					g37 = 268 * v12 + 160 + *(int32_t *)(g23 - 0x7758);
					strcpy();
					// branch -> 0x2f804
					// 0x2f804
					v13 = *(char *)g27;
					if (v13 != -1) {
						// 0x2f814
						*(char *)g31 = 3;
						g34 = g33;
						g37 = 0x55ec * (int32_t)v13 + 316 + g36;
						strcpy();
						function_2dc1c();
						g37 = *(int32_t *)(g23 - 0x6518);
						v14 = *(char *)(g36 + 0x55ec * (int32_t) * (char *)g27 + 436);
						g38 = v14;
						sprintf();
						function_2dbac(g32, 1);
						g37 = *(int32_t *)(g23 - 0x651c);
						g38 = *(int32_t *)(g36 + 0x55ec * (int32_t) * (char *)g27 + 404) / 64;
						sprintf();
						function_2dbac(g32, 1);
						// branch -> 0x2f89c
					}
					// 0x2f89c
					if (*(char *)g33 == 0) {
						// 0x2f8a8
						v4 = *(int32_t *)(g23 - 0x76c4);
						if (*(int32_t *)v4 != 0) {
							// 0x2f8b8
							result = function_2f4f0();
							// branch -> 0x2f8bc
						} else {
							result = v4;
						}
					} else {
						// 0x2f8b8
						result = function_2f4f0();
						// branch -> 0x2f8bc
					}
					// 0x2f8bc
					g10 = v1;
					return result;
				}
				// 0x2f794
				*(char *)g31 = 0;
				g34 = g33;
				g37 = *(int32_t *)(g28 + 232 * v12 + 220);
				strcpy();
				function_2dc1c();
				int32_t v15 = g28 + 232 * *(int32_t *)g29; // 0x2f7bc
				if (*(char *)(v15 + 192) == 0) {
					// 0x2f7dc
					function_861ac((int32_t) * (char *)*(int32_t *)(v15 + 224));
					// branch -> 0x2f804
				} else {
					// 0x2f7cc
					*(char *)g31 = 3;
					function_863f0(v15);
					// branch -> 0x2f804
				}
				// 0x2f804
				v13 = *(char *)g27;
				if (v13 != -1) {
					// 0x2f814
					*(char *)g31 = 3;
					g34 = g33;
					g37 = 0x55ec * (int32_t)v13 + 316 + g36;
					strcpy();
					function_2dc1c();
					g37 = *(int32_t *)(g23 - 0x6518);
					v14 = *(char *)(g36 + 0x55ec * (int32_t) * (char *)g27 + 436);
					g38 = v14;
					sprintf();
					function_2dbac(g32, 1);
					g37 = *(int32_t *)(g23 - 0x651c);
					g38 = *(int32_t *)(g36 + 0x55ec * (int32_t) * (char *)g27 + 404) / 64;
					sprintf();
					function_2dbac(g32, 1);
					// branch -> 0x2f89c
				}
				// 0x2f89c
				if (*(char *)g33 == 0) {
					// 0x2f8a8
					v4 = *(int32_t *)(g23 - 0x76c4);
					if (*(int32_t *)v4 != 0) {
						// 0x2f8b8
						result = function_2f4f0();
						// branch -> 0x2f8bc
					} else {
						result = v4;
					}
				} else {
					// 0x2f8b8
					result = function_2f4f0();
					// branch -> 0x2f8bc
				}
				// 0x2f8bc
				g10 = v1;
				return result;
			}
			// 0x2f804
			v13 = *(char *)g27;
			if (v13 != -1) {
				// 0x2f814
				*(char *)g31 = 3;
				g34 = g33;
				g37 = 0x55ec * (int32_t)v13 + 316 + g36;
				strcpy();
				function_2dc1c();
				g37 = *(int32_t *)(g23 - 0x6518);
				v14 = *(char *)(g36 + 0x55ec * (int32_t) * (char *)g27 + 436);
				g38 = v14;
				sprintf();
				function_2dbac(g32, 1);
				g37 = *(int32_t *)(g23 - 0x651c);
				g38 = *(int32_t *)(g36 + 0x55ec * (int32_t) * (char *)g27 + 404) / 64;
				sprintf();
				function_2dbac(g32, 1);
				// branch -> 0x2f89c
			}
			// 0x2f89c
			if (*(char *)g33 == 0) {
				// 0x2f8a8
				v4 = *(int32_t *)(g23 - 0x76c4);
				if (*(int32_t *)v4 != 0) {
					// 0x2f8b8
					result = function_2f4f0();
					// branch -> 0x2f8bc
				} else {
					result = v4;
				}
			} else {
				// 0x2f8b8
				result = function_2f4f0();
				// branch -> 0x2f8bc
			}
			// 0x2f8bc
			g10 = v1;
			return result;
		}
	}
	// 0x2f65c
	*(char *)g31 = 0;
	// branch -> 0x2f89c
	// 0x2f89c
	if (*(char *)g33 != 0) {
		int32_t result2 = function_2f4f0(); // 0x2f8b8
		// branch -> 0x2f8bc
		// 0x2f8bc
		g10 = v1;
		return result2;
	}
	// 0x2f8a8
	v4 = *(int32_t *)(g23 - 0x76c4);
	if (*(int32_t *)v4 != 0) {
		// 0x2f8b8
		result = function_2f4f0();
		// branch -> 0x2f8bc
	} else {
		result = v4;
	}
	// 0x2f8bc
	g10 = v1;
	return result;
}

// Address range: 0x2f8d0 - 0x2f9cc
int32_t ADD_PlrStringXY(int32_t a1, int32_t a2, int32_t a3, char *a4)
{
	int32_t v1 = g10;         // 0x2f8d4
	int32_t v2 = (int32_t)a4; // 0x2f8dc
	g28 = v2;
	int32_t v3 = g23 - 0x2da0; // 0x2f8e0
	g33 = v3;
	int32_t v4 = g23 - 0x2e20; // 0x2f8e4
	g35 = v4;
	g29 = g40;
	int32_t v5 = g23 - 0x2ae8; // 0x2f8ec
	g36 = v5;
	g30 = 0;
	int32_t v6 = a3 - a1 + 1; // 0x2f910
	g31 = v6;
	int32_t v7 = *(int32_t *)(4 * a2 + *(int32_t *)(g23 - 0x7698) + 640) + 64 + a1; // 0x2f918
	char *v8 = (char *)v2;                                                          // 0x2f94010
	int32_t result = 0;                                                             // 0x2f954
	int32_t v9;                                                                     // 0x2f964
	int32_t v10;                                                                    // 0x2f994
	int32_t v11;                                                                    // 0x2f9a0
	int32_t v12;                                                                    // 0x2f9ac
	int32_t result2;                                                                // 0x2f9c832
	int32_t v13;                                                                    // 0x2f9c833
	int32_t v14;                                                                    // 0x2f95c
	int32_t v15;                                                                    // 0x2f968
	int32_t v16;                                                                    // 0x2f984
	int32_t v17;                                                                    // 0x2f9a4
	uint32_t v18;                                                                   // 0x2f954
	int32_t v19;                                                                    // 0x2f95c
	int32_t v20;                                                                    // 0x2f974
	unsigned char v21;                                                              // 0x2f96c
	unsigned char v22;                                                              // 0x2f970
	int32_t v23;                                                                    // 0x2f970
	int32_t v24;                                                                    // 0x2f958
	if (*v8 != 0) {
		int32_t v25 = v2;                                            // 0x2f924
		int32_t v26 = v25 + 1;                                       // 0x2f928
		unsigned char v27 = *(char *)((int32_t) * (char *)v25 + v5); // 0x2f92c
		unsigned char v28 = *(char *)((int32_t)v27 + v4);            // 0x2f930
		int32_t v29 = 1 + (int32_t) * (char *)((int32_t)v28 + v3);   // 0x2f93c
		result = v29;
		while (*(char *)v26 != 0) {
			// 0x2f924
			v25 = v26;
			v26 = v25 + 1;
			v27 = *(char *)((int32_t) * (char *)v25 + v5);
			v28 = *(char *)((int32_t)v27 + v4);
			v29 = v29 + 1 + (int32_t) * (char *)((int32_t)v28 + v3);
			result = v29;
			// continue -> 0x2f924
		}
		// 0x2f94c
		v14 = 0;
		if (v6 > result) {
			// 0x2f954
			v18 = v6 - result;
			v24 = v18 / 2 | v18 & -0x80000000;
			g30 = v24;
			v14 = v24;
			// branch -> 0x2f95c
		}
		// 0x2f95c
		v19 = v14 + v7;
		g32 = v19;
		if (*v8 == 0) {
			// 0x2f9b8
			g10 = v1;
			return result;
		}
		v13 = result;
		v10 = v19;
		int32_t v30 = v14; // 0x2f980
		int32_t v31 = v3;  // 0x2f974
		int32_t v32 = v4;  // 0x2f970
		int32_t v33 = v5;  // 0x2f96c
		v9 = v2;
		while (true) {
			// 0x2f964
			v15 = v9 + 1;
			g28 = v15;
			v21 = *(char *)((int32_t) * (char *)v9 + v33);
			v22 = *(char *)((int32_t)v21 + v32);
			v23 = v22;
			v20 = v23 + v31;
			g27 = v20;
			v16 = v30 + 1 + (int32_t) * (char *)v20;
			g30 = v16;
			result2 = v13;
			v12 = v15;
			v17 = v10;
			v11 = v20;
			if (v22 != 0) {
			lab_0x2f98c:
				// 0x2f98c
				if (v16 < g31) {
					// 0x2f994
					result2 = function_2d918(v10, v23, g29);
					v12 = g28;
					v17 = g32;
					v11 = g27;
					// branch -> 0x2f9a0
				} else {
					result2 = v13;
					v12 = v15;
					v17 = v10;
					v11 = v20;
				}
			}
		lab_0x2f9a0:;
			int32_t v34 = v17 + 1 + (int32_t) * (char *)v11; // 0x2f9a8
			g32 = v34;
			if (*(char *)v12 == 0) {
				// 0x2f9b8
				g10 = v1;
				return result2;
			}
			// 0x2f9a0
			v13 = result2;
			v10 = v34;
			v30 = g30;
			v31 = g33;
			v32 = g35;
			v33 = g36;
			v9 = v12;
			// branch -> 0x2f964
		}
	}
	// 0x2f94c
	v14 = 0;
	if (v6 > result) {
		// 0x2f954
		v18 = v6 - result;
		v24 = v18 / 2 | v18 & -0x80000000;
		g30 = v24;
		v14 = v24;
		// branch -> 0x2f95c
	}
	// 0x2f95c
	v19 = v14 + v7;
	g32 = v19;
	if (*v8 == 0) {
		// 0x2f9b8
		g10 = v1;
		return result;
	}
	v13 = result;
	v10 = v19;
	v9 = v2;
	while (true) {
		// 0x2f964
		v15 = v9 + 1;
		g28 = v15;
		v21 = *(char *)((int32_t) * (char *)v9 + v5);
		v22 = *(char *)((int32_t)v21 + v4);
		v23 = v22;
		v20 = v23 + v3;
		g27 = v20;
		v16 = v14 + 1 + (int32_t) * (char *)v20;
		g30 = v16;
		if (v22 == 0) {
			result2 = v13;
			v12 = v15;
			v17 = v10;
			v11 = v20;
			goto lab_0x2f9a0;
		}
		goto lab_0x2f98c;
	}
}

// Address range: 0x2f9cc - 0x2fa60
int32_t PrintGameStr(int32_t result, int32_t a2, char *a3, int32_t a4)
{
	int32_t v1 = g10;         // 0x2f9d0
	int32_t v2 = (int32_t)a3; // 0x2f9d8
	g29 = v2;
	int32_t v3 = g23 - 0x2da0; // 0x2f9dc
	g33 = v3;
	int32_t v4 = g23 - 0x2e20; // 0x2f9e0
	g35 = v4;
	g30 = a4;
	int32_t v5 = g23 - 0x2ae8; // 0x2f9e8
	g36 = v5;
	int32_t v6 = *(int32_t *)(4 * a2 + *(int32_t *)(g23 - 0x7698) + 640) + 64 + result; // 0x2fa04
	g31 = v6;
	if (*(char *)v2 == 0) {
		// 0x2fa4c
		g10 = v1;
		return result;
	}
	while (true) {
		int32_t v7 = v2 + 1; // 0x2fa10
		g29 = v7;
		unsigned char v8 = *(char *)((int32_t) * (char *)v2 + v5); // 0x2fa14
		unsigned char v9 = *(char *)((int32_t)v8 + v4);            // 0x2fa18
		int32_t v10 = v9;                                          // 0x2fa18
		g32 = v10;
		int32_t result2 = result; // 0x2fa5c17
		int32_t v11 = v6;         // 0x2fa38
		int32_t v12 = v10;        // 0x2fa34
		int32_t v13 = v3;         // 0x2fa34
		if (v9 != 0) {
			// 0x2fa24
			result2 = function_2d918(v6, v10, g30);
			v7 = g29;
			v11 = g31;
			v12 = g32;
			v13 = g33;
			// branch -> 0x2fa34
		}
		int32_t v14 = v11 + 1 + (int32_t) * (char *)(v13 + v12); // 0x2fa3c
		g31 = v14;
		if (*(char *)v7 == 0) {
			// 0x2fa4c
			g10 = v1;
			return result2;
		}
		// 0x2fa34
		result = result2;
		v3 = v13;
		v6 = v14;
		v4 = g35;
		v5 = g36;
		v2 = v7;
		// branch -> 0x2fa0c
	}
}

// Address range: 0x2fa60 - 0x2fb60
int32_t function_2fa60(int32_t a1, int32_t a2, int32_t a3, char *a4, int32_t a5, int32_t a6)
{
	int32_t v1 = g10;         // 0x2fa64
	int32_t v2 = (int32_t)a4; // 0x2fa6c
	g27 = v2;
	int32_t v3 = g23 - 0x2da0; // 0x2fa70
	g33 = v3;
	int32_t v4 = g23 - 0x2e20; // 0x2fa74
	g35 = v4;
	g28 = a5;
	int32_t v5 = g23 - 0x2ae8; // 0x2fa7c
	g36 = v5;
	g29 = a6;
	int32_t v6 = a3 - a1 + 1; // 0x2faa4
	g31 = v6;
	int32_t v7 = *(int32_t *)(4 * a2 + *(int32_t *)(g23 - 0x7698) + 640) + 64 + a1; // 0x2faac
	char *v8 = (char *)v2;                                                          // 0x2fad410
	int32_t result = 0;                                                             // 0x2fae8
	int32_t v9;                                                                     // 0x2fafc
	int32_t v10;                                                                    // 0x2fb00
	int32_t v11;                                                                    // 0x2fb28
	int32_t v12;                                                                    // 0x2fb34
	int32_t v13;                                                                    // 0x2fb38
	int32_t v14;                                                                    // 0x2fb40
	int32_t result2;                                                                // 0x2fb5c35
	int32_t v15;                                                                    // 0x2fb5c36
	int32_t v16;                                                                    // 0x2faf0
	int32_t v17;                                                                    // 0x2fb00
	int32_t v18;                                                                    // 0x2fb38
	uint32_t v19;                                                                   // 0x2fae8
	int32_t v20;                                                                    // 0x2faf0
	int32_t v21;                                                                    // 0x2fb0c
	int32_t v22;                                                                    // 0x2fb18
	unsigned char v23;                                                              // 0x2fb04
	unsigned char v24;                                                              // 0x2fb08
	int32_t v25;                                                                    // 0x2fb08
	if (*v8 != 0) {
		int32_t v26 = v2;                                            // 0x2fac0
		int32_t v27 = v26 + 1;                                       // 0x2fac0
		unsigned char v28 = *(char *)((int32_t) * (char *)v26 + v5); // 0x2fac4
		unsigned char v29 = *(char *)((int32_t)v28 + v4);            // 0x2fac8
		int32_t v30 = (int32_t) * (char *)((int32_t)v29 + v3) + a6;  // 0x2fad0
		result = v30;
		while (*(char *)v27 != 0) {
			// 0x2fab8
			v26 = v27;
			v27 = v26 + 1;
			v28 = *(char *)((int32_t) * (char *)v26 + v5);
			v29 = *(char *)((int32_t)v28 + v4);
			v30 = (int32_t) * (char *)((int32_t)v29 + v3) + v30 + a6;
			result = v30;
			// continue -> 0x2fab8
		}
		// 0x2fae0
		v16 = 0;
		if (v6 > result) {
			// 0x2fae8
			v19 = v6 - result;
			v16 = v19 / 2 | v19 & -0x80000000;
			// branch -> 0x2faf0
		}
		// 0x2faf0
		v20 = v16 + v7;
		g32 = v20;
		if (*v8 == 0) {
			// 0x2fb4c
			g10 = v1;
			return result;
		}
		v15 = result;
		v11 = v20;
		int32_t v31 = v3;  // 0x2fb0c
		int32_t v32 = v4;  // 0x2fb08
		int32_t v33 = v5;  // 0x2fb04
		int32_t v34 = v16; // 0x2fafc
		v9 = a6;
		v10 = v2;
		while (true) {
			// 0x2faf8
			v17 = v10 + 1;
			g27 = v17;
			v23 = *(char *)((int32_t) * (char *)v10 + v33);
			v24 = *(char *)((int32_t)v23 + v32);
			v25 = v24;
			v21 = v25 + v31;
			g26 = v21;
			v22 = (int32_t) * (char *)v21 + v9 + v34;
			g30 = v22;
			result2 = v15;
			v14 = v17;
			v18 = v11;
			v13 = v9;
			v12 = v21;
			if (v24 != 0) {
			lab_0x2fb20:
				// 0x2fb20
				if (v22 < g31) {
					// 0x2fb28
					result2 = function_2d918(v11, v25, g28);
					v14 = g27;
					v18 = g32;
					v13 = g29;
					v12 = g26;
					// branch -> 0x2fb34
				} else {
					result2 = v15;
					v14 = v17;
					v18 = v11;
					v13 = v9;
					v12 = v21;
				}
			}
		lab_0x2fb34:;
			int32_t v35 = v13 + v18 + (int32_t) * (char *)v12; // 0x2fb3c
			g32 = v35;
			if (*(char *)v14 == 0) {
				// 0x2fb4c
				g10 = v1;
				return result2;
			}
			// 0x2fb34
			v15 = result2;
			v11 = v35;
			v31 = g33;
			v32 = g35;
			v33 = g36;
			v34 = g30;
			v9 = v13;
			v10 = v14;
			// branch -> 0x2faf8
		}
	}
	// 0x2fae0
	v16 = 0;
	if (v6 > result) {
		// 0x2fae8
		v19 = v6 - result;
		v16 = v19 / 2 | v19 & -0x80000000;
		// branch -> 0x2faf0
	}
	// 0x2faf0
	v20 = v16 + v7;
	g32 = v20;
	if (*v8 == 0) {
		// 0x2fb4c
		g10 = v1;
		return result;
	}
	v15 = result;
	v11 = v20;
	v9 = a6;
	v10 = v2;
	while (true) {
		// 0x2faf8
		v17 = v10 + 1;
		g27 = v17;
		v23 = *(char *)((int32_t) * (char *)v10 + v5);
		v24 = *(char *)((int32_t)v23 + v4);
		v25 = v24;
		v21 = v25 + v3;
		g26 = v21;
		v22 = (int32_t) * (char *)v21 + v9 + v16;
		g30 = v22;
		if (v24 == 0) {
			result2 = v15;
			v14 = v17;
			v18 = v11;
			v13 = v9;
			v12 = v21;
			goto lab_0x2fb34;
		}
		goto lab_0x2fb20;
	}
}

// Address range: 0x2fb60 - 0x30648
int32_t DrawChr(int32_t a1)
{
	int32_t v1 = g10; // 0x2fb64
	CelDecodeOnly(64, 511, *(int32_t *)(g23 - 0x4fa8), 1, 320);
	g40 = 0;
	ADD_PlrStringXY(20, 32, 151, (char *)(0x55ec * *(int32_t *)g35 + 316 + g36));
	char v2 = *(char *)(g36 + 348 + 0x55ec * *(int32_t *)g35); // 0x2fbd8
	int32_t v3;                                                // r25
	int32_t v4;                                                // bp-120
	int32_t v5;
	int32_t v6;        // 0x2fd4c
	int32_t v7;        // 0x2ff28
	int32_t v8;        // 0x30104
	int32_t v9;        // 0x30168
	int32_t v10;       // 0x301cc
	int32_t v11;       // 0x30230
	int32_t v12;       // 0x30394
	int32_t v13;       // 0x303b0
	int32_t v14;       // 0x303b8
	int32_t v15;       // 0x303d8
	int32_t v16;       // 0x303e0
	int32_t v17;       // 0x30410
	int32_t v18;       // 0x30428
	int32_t v19;       // 0x30450
	int32_t v20;       // 0x30454
	int32_t v21;       // 0x30458
	int32_t v22;       // 0x3048c
	int32_t v23;       // 0x30490
	int32_t v24;       // 0x304c4
	int32_t v25;       // 0x304c8
	int32_t v26;       // 0x304fc
	int32_t v27;       // 0x30500
	int32_t v28;       // 0x3059c
	int32_t v29;       // 0x2fc4c
	int32_t v30;       // 0x2fcb8
	int32_t v31;       // 0x2fd48
	int32_t v32;       // 0x2fdc8
	int32_t v33;       // 0x2fe28
	int32_t v34;       // 0x300e0
	int32_t v35;       // 0x30120
	int32_t v36;       // 0x30140
	int32_t v37;       // 0x301a4
	int32_t v38;       // 0x301e8
	int32_t v39;       // 0x30208
	int32_t v40;       // 0x30250
	int32_t v41;       // 0x302a4
	int32_t v42;       // 0x302f8
	int32_t v43;       // 0x30348
	int32_t v44;       // 0x30398
	int32_t v45;       // 0x303ac
	int32_t v46;       // 0x303c8
	int32_t v47;       // 0x30414
	int32_t v48;       // 0x30454
	int32_t v49;       // 0x30490
	int32_t v50;       // 0x304c8
	int32_t v51;       // 0x30500
	int32_t v52;       // 0x30504
	int32_t v53;       // 0x30554
	int32_t v54;       // 0x3059c
	int32_t v55;       // 0x305a0
	int32_t v56;       // 0x305f0
	int32_t v57;       // 0x2fd4c
	int32_t v58;       // 0x2fe2c
	int32_t v59;       // 0x2fe80
	int32_t v60;       // 0x2fe9c
	int32_t v61;       // 0x2feac
	int32_t v62;       // 0x2feb8
	int32_t v63;       // 0x30394
	int32_t v64;       // 0x303b0
	int32_t v65;       // 0x30420
	uint32_t v66;      // 0x2fd50
	int32_t v67;       // 0x2fd80
	uint32_t v68;      // 0x2fdd0
	uint32_t v69;      // 0x2fe30
	int32_t v70;       // 0x2fe50
	int32_t v71;       // 0x2fe58
	int32_t v72;       // 0x2fe68
	uint32_t v73;      // 0x2fe98
	unsigned char v74; // 0x2ff90
	unsigned char v75; // 0x2fff8
	unsigned char v76; // 0x30060
	int32_t v77;       // 0x3025c
	int32_t v78;       // 0x302b0
	int32_t v79;       // 0x30354
	int32_t v80;       // 0x30560
	int32_t v81;       // 0x305fc
	uint64_t v82;      // 0x2fd84
	uint32_t v83;      // 0x2fdec
	uint64_t v84;      // 0x2fe6c
	unsigned char v85; // 0x300e4
	int32_t v86;       // 0x300f4
	unsigned char v87; // 0x30144
	int32_t v88;       // 0x30148
	unsigned char v89; // 0x301a8
	int32_t v90;       // 0x301ac
	unsigned char v91; // 0x3020c
	int32_t v92;       // 0x30210
	int32_t v93;       // 0x30258
	int32_t v94;       // 0x302ac
	int32_t v95;       // 0x302fc
	int32_t v96;       // 0x30300
	int32_t v97;       // 0x30350
	uint32_t v98;      // 0x303e0
	unsigned char v99; // 0x30418
	int32_t v100;      // 0x3041c
	int32_t v101;      // 0x30464
	int32_t v102;      // 0x3049c
	int32_t v103;      // 0x304d4
	int32_t v104;      // 0x3050c
	int32_t v105;      // 0x305a8
	int32_t result;    // 0x30630
	int32_t v106;      // 0x2fe70
	if (v2 != 0) {
		// 0x2fc00
		if (v2 == 1) {
			// 0x2fc0c
			g40 = 0;
			ADD_PlrStringXY(168, 32, 299, (char *)*(int32_t *)(g23 - 0x6524));
			// branch -> 0x2fc48
		} else {
			// 0x2fc28
			if (v2 == 2) {
				// 0x2fc30
				g40 = 0;
				ADD_PlrStringXY(168, 32, 299, (char *)*(int32_t *)(g23 - 0x6528));
				// branch -> 0x2fc48
			}
		}
		// 0x2fc48
		v29 = g36 + 436;
		g24 = v29;
		g37 = g33;
		g38 = (int32_t) * (char *)(v29 + 0x55ec * *(int32_t *)g35);
		sprintf();
		g40 = 0;
		v4 = 0;
		ADD_PlrStringXY(66, 69, 109, (char *)&v4);
		g37 = g29;
		g38 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 440);
		sprintf();
		g40 = 0;
		ADD_PlrStringXY(216, 69, 300, (char *)&v4);
		v30 = 0x55ec * *(int32_t *)g35;
		if (*(char *)(g24 + v30) == 50) {
			// 0x2fccc
			g34 = &v4;
			g37 = *(int32_t *)(g23 - 0x6534);
			strcpy();
			v5 = 3;
			// branch -> 0x2fcf8
		} else {
			// 0x2fce0
			g38 = *(int32_t *)(g36 + v30 + 448);
			g37 = g29;
			sprintf();
			v5 = 0;
			// branch -> 0x2fcf8
		}
		// 0x2fcf8
		g40 = v5;
		ADD_PlrStringXY(216, 97, 300, (char *)&v4);
		g37 = g33;
		g38 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 456);
		sprintf();
		g40 = 0;
		ADD_PlrStringXY(216, 146, 300, (char *)&v4);
		g24 = 0;
		v31 = 0x55ec * *(int32_t *)g35;
		v6 = g36;
		v57 = v6 + v31;
		v66 = *(int32_t *)(v57 + 0x5558);
		if (v66 < 1) {
			// 0x2fd60
			if (v66 <= 0xffffffff) {
				// 0x2fd68
				g24 = 2;
				// branch -> 0x2fd6c
			}
		} else {
			// 0x2fd60
			g24 = 1;
			// branch -> 0x2fd6c
		}
		// 0x2fd6c
		v67 = *(int32_t *)(v57 + 0x554c);
		v82 = 0x66666667 * (int64_t) * (int32_t *)(v6 + 368 + v31);
		g37 = g33;
		g38 = v67 + v66 + ((int32_t)(v82 / 0x100000000) & -0x80000000 | (int32_t)(v82 / 0x200000000)) + (int32_t)(v82 / 0x8000000000000000);
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(258, 183, 301, (char *)&v4);
		g24 = 0;
		v32 = 0x55ec * *(int32_t *)g35;
		v68 = *(int32_t *)(g36 + v32 + 0x5554);
		if (v68 < 1) {
			// 0x2fde0
			if (v68 <= 0xffffffff) {
				// 0x2fde8
				g24 = 2;
				// branch -> 0x2fdec
			}
		} else {
			// 0x2fde0
			g24 = 1;
			// branch -> 0x2fdec
		}
		// 0x2fdec
		v83 = *(int32_t *)(g29 + v32);
		g37 = g28;
		g38 = v68 + 50 + (v83 / 2 | v83 & -0x80000000);
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(258, 211, 301, (char *)&v4);
		g24 = 0;
		v33 = 0x55ec * *(int32_t *)g35;
		v58 = g36 + v33;
		v69 = *(int32_t *)(v58 + 0x5550);
		if (v69 < 1) {
			// 0x2fe40
			if (v69 <= 0xffffffff) {
				// 0x2fe48
				g24 = 2;
				// branch -> 0x2fe4c
			}
		} else {
			// 0x2fe40
			g24 = 1;
			// branch -> 0x2fe4c
		}
		// 0x2fe4c
		v70 = *(int32_t *)(v58 + 0x5544);
		v71 = *(int32_t *)(v58 + 2656);
		v72 = *(int32_t *)(v58 + 0x555c);
		v84 = 0x51eb851f * (int64_t)(v70 * v69);
		v106 = (int32_t)(v84 / 0x100000000) >> 31;
		v59 = (v106 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v106 < 0) + v70 + v72;
		if (v71 != 3) {
			// 0x2feb4
			v62 = *(int32_t *)(v58 + 388) + v59;
			g25 = v62;
			v7 = v62;
			// branch -> 0x2febc
			// 0x2febc
			if (v71 != 3) {
				// 0x2ff1c
				// branch -> 0x2ff24
				// 0x2ff24
				g37 = *(int32_t *)(g23 - 0x653c);
				g38 = v7;
				sprintf();
				if (g25 <= 99) {
					// 0x2ff40
					if (g26 < 100) {
						// 0x2ff68
						function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
						// branch -> 0x2ff84
						// 0x2ff84
						v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
						g24 = v74 != 0;
						g38 = v74;
						if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
							// 0x2ffc4
							g37 = g27;
							g24 = 3;
							sprintf();
							// branch -> 0x2ffd4
						} else {
							// 0x2ffb4
							g37 = g28;
							sprintf();
							// branch -> 0x2ffd4
						}
						// 0x2ffd4
						g40 = g24;
						ADD_PlrStringXY(257, 276, 300, (char *)&v4);
						v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
						g24 = v75 != 0;
						g38 = v75;
						if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
							// 0x3002c
							g37 = g27;
							g24 = 3;
							sprintf();
							// branch -> 0x3003c
						} else {
							// 0x3001c
							g37 = g28;
							sprintf();
							// branch -> 0x3003c
						}
						// 0x3003c
						g40 = g24;
						ADD_PlrStringXY(257, 304, 300, (char *)&v4);
						v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
						g24 = v76 != 0;
						g38 = v76;
						if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
							// 0x30094
							g37 = g27;
							g24 = 3;
							sprintf();
							// branch -> 0x300a4
						} else {
							// 0x30084
							g37 = g28;
							sprintf();
							// branch -> 0x300a4
						}
						// 0x300a4
						g40 = g24;
						ADD_PlrStringXY(257, 332, 300, (char *)&v4);
						g37 = g33;
						g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v34 = 0x55ec * *(int32_t *)g35;
						v85 = *(char *)(g31 + v34);
						v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
						if (*(int32_t *)(g27 + v34) == v86) {
							// 0x30100
							g24 = 3;
							v8 = 3;
							// branch -> 0x30104
						} else {
							// 0x300a4
							v8 = g24;
							// branch -> 0x30104
						}
						// 0x30104
						g40 = v8;
						ADD_PlrStringXY(95, 155, 126, (char *)&v4);
						v35 = g36 + 364;
						g28 = v35;
						g37 = g33;
						g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v36 = 0x55ec * *(int32_t *)g35;
						v87 = *(char *)(g31 + v36);
						v88 = *(int32_t *)(g28 + v36);
						if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
							// 0x30164
							g24 = 3;
							v9 = 3;
							// branch -> 0x30168
						} else {
							// 0x30104
							v9 = g24;
							// branch -> 0x30168
						}
						// 0x30168
						g40 = v9;
						ADD_PlrStringXY(95, 183, 126, (char *)&v4);
						g37 = g33;
						g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v37 = 0x55ec * *(int32_t *)g35;
						v89 = *(char *)(g31 + v37);
						v90 = *(int32_t *)(g26 + v37);
						if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
							// 0x301c8
							g24 = 3;
							v10 = 3;
							// branch -> 0x301cc
						} else {
							// 0x30168
							v10 = g24;
							// branch -> 0x301cc
						}
						// 0x301cc
						g40 = v10;
						ADD_PlrStringXY(95, 211, 126, (char *)&v4);
						v38 = g36 + 380;
						g25 = v38;
						g37 = g33;
						g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v39 = 0x55ec * *(int32_t *)g35;
						v91 = *(char *)(g31 + v39);
						v92 = *(int32_t *)(g25 + v39);
						if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
							// 0x3022c
							g24 = 3;
							v11 = 3;
							// branch -> 0x30230
						} else {
							// 0x301cc
							v11 = g24;
							// branch -> 0x30230
						}
						// 0x30230
						g40 = v11;
						ADD_PlrStringXY(95, 239, 126, (char *)&v4);
						g24 = 0;
						v40 = 0x55ec * *(int32_t *)g35;
						v93 = *(int32_t *)(g27 + v40);
						v77 = *(int32_t *)(g36 + v40 + 352);
						g38 = v77;
						if (v77 > v93) {
							// 0x30268
							g24 = 1;
							// branch -> 0x3026c
						}
						// 0x3026c
						if (v77 < v93) {
							// 0x30274
							g24 = 2;
							// branch -> 0x30278
						}
						// 0x30278
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 155, 173, (char *)&v4);
						g24 = 0;
						v41 = 0x55ec * *(int32_t *)g35;
						v94 = *(int32_t *)(g28 + v41);
						v78 = *(int32_t *)(g36 + v41 + 360);
						g38 = v78;
						if (v78 > v94) {
							// 0x302bc
							g24 = 1;
							// branch -> 0x302c0
						}
						// 0x302c0
						if (v78 < v94) {
							// 0x302c8
							g24 = 2;
							// branch -> 0x302cc
						}
						// 0x302cc
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 183, 173, (char *)&v4);
						g24 = 0;
						v42 = 0x55ec * *(int32_t *)g35;
						v95 = *(int32_t *)(g29 + v42);
						g38 = v95;
						v96 = *(int32_t *)(g26 + v42);
						if (v95 > v96) {
							// 0x3030c
							g24 = 1;
							// branch -> 0x30310
						}
						// 0x30310
						if (v95 < v96) {
							// 0x30318
							g24 = 2;
							// branch -> 0x3031c
						}
						// 0x3031c
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 211, 173, (char *)&v4);
						g24 = 0;
						v43 = 0x55ec * *(int32_t *)g35;
						v97 = *(int32_t *)(g25 + v43);
						v79 = *(int32_t *)(g36 + v43 + 376);
						g38 = v79;
						if (v79 > v97) {
							// 0x30360
							g24 = 1;
							// branch -> 0x30364
						}
						// 0x30364
						if (v79 < v97) {
							// 0x3036c
							g24 = 2;
							// branch -> 0x30370
						}
						// 0x30370
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 239, 173, (char *)&v4);
						v12 = g35;
						v63 = *(int32_t *)v12;
						v44 = g36 + 384;
						v3 = v44;
						v16 = v44;
						v15 = v12;
						if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
							// 0x303ac
							v45 = function_a33a4(v63);
							v13 = g35;
							v64 = *(int32_t *)v13;
							v14 = v3;
							if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
								// 0x303c4
								v46 = function_a33a4(v64);
								*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
								v16 = v3;
								v15 = g35;
								// branch -> 0x303d8
							} else {
								v16 = v14;
								v15 = v13;
							}
						}
						// 0x303d8
						v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
						g38 = v98;
						v26 = v15;
						if (v98 >= 1) {
							// 0x303ec
							g37 = g33;
							sprintf();
							g40 = 2;
							ADD_PlrStringXY(95, 266, 126, (char *)&v4);
							v17 = g35;
							v47 = 0x55ec * *(int32_t *)v17;
							v99 = *(char *)(g31 + v47);
							v100 = *(int32_t *)(g27 + v47);
							v65 = v99;
							g24 = v65;
							v18 = g32;
							v21 = v18;
							v20 = v65;
							v19 = v17;
							if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
								// 0x30434
								CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
								v21 = g32;
								v20 = g24;
								v19 = g35;
								// branch -> 0x30450
							}
							// 0x30450
							v48 = 16 * v20;
							g27 = v48;
							v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
							v49 = v48;
							v23 = v21;
							v22 = v19;
							if (v101 < *(int32_t *)(v48 + v21 + 4)) {
								// 0x30470
								CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
								v49 = g27;
								v23 = g32;
								v22 = g35;
								// branch -> 0x3048c
							}
							// 0x3048c
							v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
							v50 = v49;
							v25 = v23;
							v24 = v22;
							if (v102 < *(int32_t *)(v23 + v49 + 8)) {
								// 0x304a8
								CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
								v50 = g27;
								v25 = g32;
								v24 = g35;
								// branch -> 0x304c4
							}
							// 0x304c4
							v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
							if (v103 < *(int32_t *)(v25 + v50 + 12)) {
								// 0x304e0
								CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
								v26 = g35;
								// branch -> 0x304fc
							} else {
								v26 = v24;
							}
						}
						// 0x304fc
						v27 = g36;
						v51 = v27 + 408;
						g24 = v51;
						v52 = 0x55ec * *(int32_t *)v26;
						v104 = *(int32_t *)(v51 + v52);
						g25 = v104 > *(int32_t *)(v27 + v52 + 400);
						g37 = g33;
						g38 = v104 / 64;
						sprintf();
						g40 = g25;
						ADD_PlrStringXY(95, 304, 126, (char *)&v4);
						v53 = 0x55ec * *(int32_t *)g35;
						v80 = *(int32_t *)(g36 + v53 + 404);
						if (v80 != *(int32_t *)(g24 + v53)) {
							// 0x3056c
							g25 = 2;
							// branch -> 0x30570
						}
						// 0x30570
						g37 = g33;
						g38 = v80 / 64;
						sprintf();
						g40 = g25;
						ADD_PlrStringXY(143, 304, 174, (char *)&v4);
						v28 = g36;
						v54 = v28 + 428;
						g24 = v54;
						v55 = 0x55ec * *(int32_t *)g35;
						v105 = *(int32_t *)(v54 + v55);
						g25 = v105 > *(int32_t *)(v28 + v55 + 420);
						g37 = g33;
						g38 = v105 / 64;
						sprintf();
						g40 = g25;
						ADD_PlrStringXY(95, 332, 126, (char *)&v4);
						v56 = 0x55ec * *(int32_t *)g35;
						v81 = *(int32_t *)(g36 + v56 + 424);
						if (v81 != *(int32_t *)(g24 + v56)) {
							// 0x30608
							g25 = 2;
							// branch -> 0x3060c
						}
						// 0x3060c
						g37 = g33;
						g38 = v81 / 64;
						sprintf();
						g40 = g25;
						result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
						g10 = v1;
						return result;
					}
				}
				// 0x2ff48
				function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
				// branch -> 0x2ff84
				// 0x2ff84
				v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
				g24 = v74 != 0;
				g38 = v74;
				if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
					// 0x2ffc4
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x2ffd4
				} else {
					// 0x2ffb4
					g37 = g28;
					sprintf();
					// branch -> 0x2ffd4
				}
				// 0x2ffd4
				g40 = g24;
				ADD_PlrStringXY(257, 276, 300, (char *)&v4);
				v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
				g24 = v75 != 0;
				g38 = v75;
				if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
					// 0x3002c
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x3003c
				} else {
					// 0x3001c
					g37 = g28;
					sprintf();
					// branch -> 0x3003c
				}
				// 0x3003c
				g40 = g24;
				ADD_PlrStringXY(257, 304, 300, (char *)&v4);
				v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
				g24 = v76 != 0;
				g38 = v76;
				if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
					// 0x30094
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x300a4
				} else {
					// 0x30084
					g37 = g28;
					sprintf();
					// branch -> 0x300a4
				}
				// 0x300a4
				g40 = g24;
				ADD_PlrStringXY(257, 332, 300, (char *)&v4);
				g37 = g33;
				g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v34 = 0x55ec * *(int32_t *)g35;
				v85 = *(char *)(g31 + v34);
				v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
				if (*(int32_t *)(g27 + v34) == v86) {
					// 0x30100
					g24 = 3;
					v8 = 3;
					// branch -> 0x30104
				} else {
					// 0x300a4
					v8 = g24;
					// branch -> 0x30104
				}
				// 0x30104
				g40 = v8;
				ADD_PlrStringXY(95, 155, 126, (char *)&v4);
				v35 = g36 + 364;
				g28 = v35;
				g37 = g33;
				g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v36 = 0x55ec * *(int32_t *)g35;
				v87 = *(char *)(g31 + v36);
				v88 = *(int32_t *)(g28 + v36);
				if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
					// 0x30164
					g24 = 3;
					v9 = 3;
					// branch -> 0x30168
				} else {
					// 0x30104
					v9 = g24;
					// branch -> 0x30168
				}
				// 0x30168
				g40 = v9;
				ADD_PlrStringXY(95, 183, 126, (char *)&v4);
				g37 = g33;
				g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v37 = 0x55ec * *(int32_t *)g35;
				v89 = *(char *)(g31 + v37);
				v90 = *(int32_t *)(g26 + v37);
				if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
					// 0x301c8
					g24 = 3;
					v10 = 3;
					// branch -> 0x301cc
				} else {
					// 0x30168
					v10 = g24;
					// branch -> 0x301cc
				}
				// 0x301cc
				g40 = v10;
				ADD_PlrStringXY(95, 211, 126, (char *)&v4);
				v38 = g36 + 380;
				g25 = v38;
				g37 = g33;
				g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v39 = 0x55ec * *(int32_t *)g35;
				v91 = *(char *)(g31 + v39);
				v92 = *(int32_t *)(g25 + v39);
				if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
					// 0x3022c
					g24 = 3;
					v11 = 3;
					// branch -> 0x30230
				} else {
					// 0x301cc
					v11 = g24;
					// branch -> 0x30230
				}
				// 0x30230
				g40 = v11;
				ADD_PlrStringXY(95, 239, 126, (char *)&v4);
				g24 = 0;
				v40 = 0x55ec * *(int32_t *)g35;
				v93 = *(int32_t *)(g27 + v40);
				v77 = *(int32_t *)(g36 + v40 + 352);
				g38 = v77;
				if (v77 > v93) {
					// 0x30268
					g24 = 1;
					// branch -> 0x3026c
				}
				// 0x3026c
				if (v77 < v93) {
					// 0x30274
					g24 = 2;
					// branch -> 0x30278
				}
				// 0x30278
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 155, 173, (char *)&v4);
				g24 = 0;
				v41 = 0x55ec * *(int32_t *)g35;
				v94 = *(int32_t *)(g28 + v41);
				v78 = *(int32_t *)(g36 + v41 + 360);
				g38 = v78;
				if (v78 > v94) {
					// 0x302bc
					g24 = 1;
					// branch -> 0x302c0
				}
				// 0x302c0
				if (v78 < v94) {
					// 0x302c8
					g24 = 2;
					// branch -> 0x302cc
				}
				// 0x302cc
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 183, 173, (char *)&v4);
				g24 = 0;
				v42 = 0x55ec * *(int32_t *)g35;
				v95 = *(int32_t *)(g29 + v42);
				g38 = v95;
				v96 = *(int32_t *)(g26 + v42);
				if (v95 > v96) {
					// 0x3030c
					g24 = 1;
					// branch -> 0x30310
				}
				// 0x30310
				if (v95 < v96) {
					// 0x30318
					g24 = 2;
					// branch -> 0x3031c
				}
				// 0x3031c
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 211, 173, (char *)&v4);
				g24 = 0;
				v43 = 0x55ec * *(int32_t *)g35;
				v97 = *(int32_t *)(g25 + v43);
				v79 = *(int32_t *)(g36 + v43 + 376);
				g38 = v79;
				if (v79 > v97) {
					// 0x30360
					g24 = 1;
					// branch -> 0x30364
				}
				// 0x30364
				if (v79 < v97) {
					// 0x3036c
					g24 = 2;
					// branch -> 0x30370
				}
				// 0x30370
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 239, 173, (char *)&v4);
				v12 = g35;
				v63 = *(int32_t *)v12;
				v44 = g36 + 384;
				v3 = v44;
				v16 = v44;
				v15 = v12;
				if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
					// 0x303ac
					v45 = function_a33a4(v63);
					v13 = g35;
					v64 = *(int32_t *)v13;
					v14 = v3;
					if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
						// 0x303c4
						v46 = function_a33a4(v64);
						*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
						v16 = v3;
						v15 = g35;
						// branch -> 0x303d8
					} else {
						v16 = v14;
						v15 = v13;
					}
				}
				// 0x303d8
				v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
				g38 = v98;
				v26 = v15;
				if (v98 >= 1) {
					// 0x303ec
					g37 = g33;
					sprintf();
					g40 = 2;
					ADD_PlrStringXY(95, 266, 126, (char *)&v4);
					v17 = g35;
					v47 = 0x55ec * *(int32_t *)v17;
					v99 = *(char *)(g31 + v47);
					v100 = *(int32_t *)(g27 + v47);
					v65 = v99;
					g24 = v65;
					v18 = g32;
					v21 = v18;
					v20 = v65;
					v19 = v17;
					if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
						// 0x30434
						CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
						v21 = g32;
						v20 = g24;
						v19 = g35;
						// branch -> 0x30450
					}
					// 0x30450
					v48 = 16 * v20;
					g27 = v48;
					v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
					v49 = v48;
					v23 = v21;
					v22 = v19;
					if (v101 < *(int32_t *)(v48 + v21 + 4)) {
						// 0x30470
						CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
						v49 = g27;
						v23 = g32;
						v22 = g35;
						// branch -> 0x3048c
					}
					// 0x3048c
					v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
					v50 = v49;
					v25 = v23;
					v24 = v22;
					if (v102 < *(int32_t *)(v23 + v49 + 8)) {
						// 0x304a8
						CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
						v50 = g27;
						v25 = g32;
						v24 = g35;
						// branch -> 0x304c4
					}
					// 0x304c4
					v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
					if (v103 < *(int32_t *)(v25 + v50 + 12)) {
						// 0x304e0
						CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
						v26 = g35;
						// branch -> 0x304fc
					} else {
						v26 = v24;
					}
				}
				// 0x304fc
				v27 = g36;
				v51 = v27 + 408;
				g24 = v51;
				v52 = 0x55ec * *(int32_t *)v26;
				v104 = *(int32_t *)(v51 + v52);
				g25 = v104 > *(int32_t *)(v27 + v52 + 400);
				g37 = g33;
				g38 = v104 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(95, 304, 126, (char *)&v4);
				v53 = 0x55ec * *(int32_t *)g35;
				v80 = *(int32_t *)(g36 + v53 + 404);
				if (v80 != *(int32_t *)(g24 + v53)) {
					// 0x3056c
					g25 = 2;
					// branch -> 0x30570
				}
				// 0x30570
				g37 = g33;
				g38 = v80 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(143, 304, 174, (char *)&v4);
				v28 = g36;
				v54 = v28 + 428;
				g24 = v54;
				v55 = 0x55ec * *(int32_t *)g35;
				v105 = *(int32_t *)(v54 + v55);
				g25 = v105 > *(int32_t *)(v28 + v55 + 420);
				g37 = g33;
				g38 = v105 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(95, 332, 126, (char *)&v4);
				v56 = 0x55ec * *(int32_t *)g35;
				v81 = *(int32_t *)(g36 + v56 + 424);
				if (v81 != *(int32_t *)(g24 + v56)) {
					// 0x30608
					g25 = 2;
					// branch -> 0x3060c
				}
				// 0x3060c
				g37 = g33;
				g38 = v81 / 64;
				sprintf();
				g40 = g25;
				result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
				g10 = v1;
				return result;
			}
			// 0x2fef0
			if (*(char *)(g31 + v33) == 1) {
				// 0x2ff00
				// branch -> 0x2ff24
			}
			// 0x2ff24
			g37 = *(int32_t *)(g23 - 0x653c);
			g38 = v7;
			sprintf();
			if (g25 <= 99) {
				// 0x2ff40
				if (g26 < 100) {
					// 0x2ff68
					function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
					// branch -> 0x2ff84
					// 0x2ff84
					v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
					g24 = v74 != 0;
					g38 = v74;
					if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
						// 0x2ffc4
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x2ffd4
					} else {
						// 0x2ffb4
						g37 = g28;
						sprintf();
						// branch -> 0x2ffd4
					}
					// 0x2ffd4
					g40 = g24;
					ADD_PlrStringXY(257, 276, 300, (char *)&v4);
					v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
					g24 = v75 != 0;
					g38 = v75;
					if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
						// 0x3002c
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x3003c
					} else {
						// 0x3001c
						g37 = g28;
						sprintf();
						// branch -> 0x3003c
					}
					// 0x3003c
					g40 = g24;
					ADD_PlrStringXY(257, 304, 300, (char *)&v4);
					v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
					g24 = v76 != 0;
					g38 = v76;
					if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
						// 0x30094
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x300a4
					} else {
						// 0x30084
						g37 = g28;
						sprintf();
						// branch -> 0x300a4
					}
					// 0x300a4
					g40 = g24;
					ADD_PlrStringXY(257, 332, 300, (char *)&v4);
					g37 = g33;
					g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v34 = 0x55ec * *(int32_t *)g35;
					v85 = *(char *)(g31 + v34);
					v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
					if (*(int32_t *)(g27 + v34) == v86) {
						// 0x30100
						g24 = 3;
						v8 = 3;
						// branch -> 0x30104
					} else {
						// 0x300a4
						v8 = g24;
						// branch -> 0x30104
					}
					// 0x30104
					g40 = v8;
					ADD_PlrStringXY(95, 155, 126, (char *)&v4);
					v35 = g36 + 364;
					g28 = v35;
					g37 = g33;
					g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v36 = 0x55ec * *(int32_t *)g35;
					v87 = *(char *)(g31 + v36);
					v88 = *(int32_t *)(g28 + v36);
					if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
						// 0x30164
						g24 = 3;
						v9 = 3;
						// branch -> 0x30168
					} else {
						// 0x30104
						v9 = g24;
						// branch -> 0x30168
					}
					// 0x30168
					g40 = v9;
					ADD_PlrStringXY(95, 183, 126, (char *)&v4);
					g37 = g33;
					g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v37 = 0x55ec * *(int32_t *)g35;
					v89 = *(char *)(g31 + v37);
					v90 = *(int32_t *)(g26 + v37);
					if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
						// 0x301c8
						g24 = 3;
						v10 = 3;
						// branch -> 0x301cc
					} else {
						// 0x30168
						v10 = g24;
						// branch -> 0x301cc
					}
					// 0x301cc
					g40 = v10;
					ADD_PlrStringXY(95, 211, 126, (char *)&v4);
					v38 = g36 + 380;
					g25 = v38;
					g37 = g33;
					g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v39 = 0x55ec * *(int32_t *)g35;
					v91 = *(char *)(g31 + v39);
					v92 = *(int32_t *)(g25 + v39);
					if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
						// 0x3022c
						g24 = 3;
						v11 = 3;
						// branch -> 0x30230
					} else {
						// 0x301cc
						v11 = g24;
						// branch -> 0x30230
					}
					// 0x30230
					g40 = v11;
					ADD_PlrStringXY(95, 239, 126, (char *)&v4);
					g24 = 0;
					v40 = 0x55ec * *(int32_t *)g35;
					v93 = *(int32_t *)(g27 + v40);
					v77 = *(int32_t *)(g36 + v40 + 352);
					g38 = v77;
					if (v77 > v93) {
						// 0x30268
						g24 = 1;
						// branch -> 0x3026c
					}
					// 0x3026c
					if (v77 < v93) {
						// 0x30274
						g24 = 2;
						// branch -> 0x30278
					}
					// 0x30278
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 155, 173, (char *)&v4);
					g24 = 0;
					v41 = 0x55ec * *(int32_t *)g35;
					v94 = *(int32_t *)(g28 + v41);
					v78 = *(int32_t *)(g36 + v41 + 360);
					g38 = v78;
					if (v78 > v94) {
						// 0x302bc
						g24 = 1;
						// branch -> 0x302c0
					}
					// 0x302c0
					if (v78 < v94) {
						// 0x302c8
						g24 = 2;
						// branch -> 0x302cc
					}
					// 0x302cc
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 183, 173, (char *)&v4);
					g24 = 0;
					v42 = 0x55ec * *(int32_t *)g35;
					v95 = *(int32_t *)(g29 + v42);
					g38 = v95;
					v96 = *(int32_t *)(g26 + v42);
					if (v95 > v96) {
						// 0x3030c
						g24 = 1;
						// branch -> 0x30310
					}
					// 0x30310
					if (v95 < v96) {
						// 0x30318
						g24 = 2;
						// branch -> 0x3031c
					}
					// 0x3031c
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 211, 173, (char *)&v4);
					g24 = 0;
					v43 = 0x55ec * *(int32_t *)g35;
					v97 = *(int32_t *)(g25 + v43);
					v79 = *(int32_t *)(g36 + v43 + 376);
					g38 = v79;
					if (v79 > v97) {
						// 0x30360
						g24 = 1;
						// branch -> 0x30364
					}
					// 0x30364
					if (v79 < v97) {
						// 0x3036c
						g24 = 2;
						// branch -> 0x30370
					}
					// 0x30370
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 239, 173, (char *)&v4);
					v12 = g35;
					v63 = *(int32_t *)v12;
					v44 = g36 + 384;
					v3 = v44;
					v16 = v44;
					v15 = v12;
					if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
						// 0x303ac
						v45 = function_a33a4(v63);
						v13 = g35;
						v64 = *(int32_t *)v13;
						v14 = v3;
						if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
							// 0x303c4
							v46 = function_a33a4(v64);
							*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
							v16 = v3;
							v15 = g35;
							// branch -> 0x303d8
						} else {
							v16 = v14;
							v15 = v13;
						}
					}
					// 0x303d8
					v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
					g38 = v98;
					v26 = v15;
					if (v98 >= 1) {
						// 0x303ec
						g37 = g33;
						sprintf();
						g40 = 2;
						ADD_PlrStringXY(95, 266, 126, (char *)&v4);
						v17 = g35;
						v47 = 0x55ec * *(int32_t *)v17;
						v99 = *(char *)(g31 + v47);
						v100 = *(int32_t *)(g27 + v47);
						v65 = v99;
						g24 = v65;
						v18 = g32;
						v21 = v18;
						v20 = v65;
						v19 = v17;
						if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
							// 0x30434
							CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
							v21 = g32;
							v20 = g24;
							v19 = g35;
							// branch -> 0x30450
						}
						// 0x30450
						v48 = 16 * v20;
						g27 = v48;
						v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
						v49 = v48;
						v23 = v21;
						v22 = v19;
						if (v101 < *(int32_t *)(v48 + v21 + 4)) {
							// 0x30470
							CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
							v49 = g27;
							v23 = g32;
							v22 = g35;
							// branch -> 0x3048c
						}
						// 0x3048c
						v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
						v50 = v49;
						v25 = v23;
						v24 = v22;
						if (v102 < *(int32_t *)(v23 + v49 + 8)) {
							// 0x304a8
							CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
							v50 = g27;
							v25 = g32;
							v24 = g35;
							// branch -> 0x304c4
						}
						// 0x304c4
						v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
						if (v103 < *(int32_t *)(v25 + v50 + 12)) {
							// 0x304e0
							CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
							v26 = g35;
							// branch -> 0x304fc
						} else {
							v26 = v24;
						}
					}
					// 0x304fc
					v27 = g36;
					v51 = v27 + 408;
					g24 = v51;
					v52 = 0x55ec * *(int32_t *)v26;
					v104 = *(int32_t *)(v51 + v52);
					g25 = v104 > *(int32_t *)(v27 + v52 + 400);
					g37 = g33;
					g38 = v104 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(95, 304, 126, (char *)&v4);
					v53 = 0x55ec * *(int32_t *)g35;
					v80 = *(int32_t *)(g36 + v53 + 404);
					if (v80 != *(int32_t *)(g24 + v53)) {
						// 0x3056c
						g25 = 2;
						// branch -> 0x30570
					}
					// 0x30570
					g37 = g33;
					g38 = v80 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(143, 304, 174, (char *)&v4);
					v28 = g36;
					v54 = v28 + 428;
					g24 = v54;
					v55 = 0x55ec * *(int32_t *)g35;
					v105 = *(int32_t *)(v54 + v55);
					g25 = v105 > *(int32_t *)(v28 + v55 + 420);
					g37 = g33;
					g38 = v105 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(95, 332, 126, (char *)&v4);
					v56 = 0x55ec * *(int32_t *)g35;
					v81 = *(int32_t *)(g36 + v56 + 424);
					if (v81 != *(int32_t *)(g24 + v56)) {
						// 0x30608
						g25 = 2;
						// branch -> 0x3060c
					}
					// 0x3060c
					g37 = g33;
					g38 = v81 / 64;
					sprintf();
					g40 = g25;
					result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
					g10 = v1;
					return result;
				}
			}
			// 0x2ff48
			function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
			// branch -> 0x2ff84
			// 0x2ff84
			v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
			g24 = v74 != 0;
			g38 = v74;
			if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
				// 0x2ffc4
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x2ffd4
			} else {
				// 0x2ffb4
				g37 = g28;
				sprintf();
				// branch -> 0x2ffd4
			}
			// 0x2ffd4
			g40 = g24;
			ADD_PlrStringXY(257, 276, 300, (char *)&v4);
			v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
			g24 = v75 != 0;
			g38 = v75;
			if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
				// 0x3002c
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x3003c
			} else {
				// 0x3001c
				g37 = g28;
				sprintf();
				// branch -> 0x3003c
			}
			// 0x3003c
			g40 = g24;
			ADD_PlrStringXY(257, 304, 300, (char *)&v4);
			v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
			g24 = v76 != 0;
			g38 = v76;
			if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
				// 0x30094
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x300a4
			} else {
				// 0x30084
				g37 = g28;
				sprintf();
				// branch -> 0x300a4
			}
			// 0x300a4
			g40 = g24;
			ADD_PlrStringXY(257, 332, 300, (char *)&v4);
			g37 = g33;
			g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v34 = 0x55ec * *(int32_t *)g35;
			v85 = *(char *)(g31 + v34);
			v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
			if (*(int32_t *)(g27 + v34) == v86) {
				// 0x30100
				g24 = 3;
				v8 = 3;
				// branch -> 0x30104
			} else {
				// 0x300a4
				v8 = g24;
				// branch -> 0x30104
			}
			// 0x30104
			g40 = v8;
			ADD_PlrStringXY(95, 155, 126, (char *)&v4);
			v35 = g36 + 364;
			g28 = v35;
			g37 = g33;
			g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v36 = 0x55ec * *(int32_t *)g35;
			v87 = *(char *)(g31 + v36);
			v88 = *(int32_t *)(g28 + v36);
			if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
				// 0x30164
				g24 = 3;
				v9 = 3;
				// branch -> 0x30168
			} else {
				// 0x30104
				v9 = g24;
				// branch -> 0x30168
			}
			// 0x30168
			g40 = v9;
			ADD_PlrStringXY(95, 183, 126, (char *)&v4);
			g37 = g33;
			g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v37 = 0x55ec * *(int32_t *)g35;
			v89 = *(char *)(g31 + v37);
			v90 = *(int32_t *)(g26 + v37);
			if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
				// 0x301c8
				g24 = 3;
				v10 = 3;
				// branch -> 0x301cc
			} else {
				// 0x30168
				v10 = g24;
				// branch -> 0x301cc
			}
			// 0x301cc
			g40 = v10;
			ADD_PlrStringXY(95, 211, 126, (char *)&v4);
			v38 = g36 + 380;
			g25 = v38;
			g37 = g33;
			g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v39 = 0x55ec * *(int32_t *)g35;
			v91 = *(char *)(g31 + v39);
			v92 = *(int32_t *)(g25 + v39);
			if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
				// 0x3022c
				g24 = 3;
				v11 = 3;
				// branch -> 0x30230
			} else {
				// 0x301cc
				v11 = g24;
				// branch -> 0x30230
			}
			// 0x30230
			g40 = v11;
			ADD_PlrStringXY(95, 239, 126, (char *)&v4);
			g24 = 0;
			v40 = 0x55ec * *(int32_t *)g35;
			v93 = *(int32_t *)(g27 + v40);
			v77 = *(int32_t *)(g36 + v40 + 352);
			g38 = v77;
			if (v77 > v93) {
				// 0x30268
				g24 = 1;
				// branch -> 0x3026c
			}
			// 0x3026c
			if (v77 < v93) {
				// 0x30274
				g24 = 2;
				// branch -> 0x30278
			}
			// 0x30278
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 155, 173, (char *)&v4);
			g24 = 0;
			v41 = 0x55ec * *(int32_t *)g35;
			v94 = *(int32_t *)(g28 + v41);
			v78 = *(int32_t *)(g36 + v41 + 360);
			g38 = v78;
			if (v78 > v94) {
				// 0x302bc
				g24 = 1;
				// branch -> 0x302c0
			}
			// 0x302c0
			if (v78 < v94) {
				// 0x302c8
				g24 = 2;
				// branch -> 0x302cc
			}
			// 0x302cc
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 183, 173, (char *)&v4);
			g24 = 0;
			v42 = 0x55ec * *(int32_t *)g35;
			v95 = *(int32_t *)(g29 + v42);
			g38 = v95;
			v96 = *(int32_t *)(g26 + v42);
			if (v95 > v96) {
				// 0x3030c
				g24 = 1;
				// branch -> 0x30310
			}
			// 0x30310
			if (v95 < v96) {
				// 0x30318
				g24 = 2;
				// branch -> 0x3031c
			}
			// 0x3031c
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 211, 173, (char *)&v4);
			g24 = 0;
			v43 = 0x55ec * *(int32_t *)g35;
			v97 = *(int32_t *)(g25 + v43);
			v79 = *(int32_t *)(g36 + v43 + 376);
			g38 = v79;
			if (v79 > v97) {
				// 0x30360
				g24 = 1;
				// branch -> 0x30364
			}
			// 0x30364
			if (v79 < v97) {
				// 0x3036c
				g24 = 2;
				// branch -> 0x30370
			}
			// 0x30370
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 239, 173, (char *)&v4);
			v12 = g35;
			v63 = *(int32_t *)v12;
			v44 = g36 + 384;
			v3 = v44;
			v16 = v44;
			v15 = v12;
			if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
				// 0x303ac
				v45 = function_a33a4(v63);
				v13 = g35;
				v64 = *(int32_t *)v13;
				v14 = v3;
				if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
					// 0x303c4
					v46 = function_a33a4(v64);
					*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
					v16 = v3;
					v15 = g35;
					// branch -> 0x303d8
				} else {
					v16 = v14;
					v15 = v13;
				}
			}
			// 0x303d8
			v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
			g38 = v98;
			v26 = v15;
			if (v98 >= 1) {
				// 0x303ec
				g37 = g33;
				sprintf();
				g40 = 2;
				ADD_PlrStringXY(95, 266, 126, (char *)&v4);
				v17 = g35;
				v47 = 0x55ec * *(int32_t *)v17;
				v99 = *(char *)(g31 + v47);
				v100 = *(int32_t *)(g27 + v47);
				v65 = v99;
				g24 = v65;
				v18 = g32;
				v21 = v18;
				v20 = v65;
				v19 = v17;
				if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
					// 0x30434
					CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
					v21 = g32;
					v20 = g24;
					v19 = g35;
					// branch -> 0x30450
				}
				// 0x30450
				v48 = 16 * v20;
				g27 = v48;
				v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
				v49 = v48;
				v23 = v21;
				v22 = v19;
				if (v101 < *(int32_t *)(v48 + v21 + 4)) {
					// 0x30470
					CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
					v49 = g27;
					v23 = g32;
					v22 = g35;
					// branch -> 0x3048c
				}
				// 0x3048c
				v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
				v50 = v49;
				v25 = v23;
				v24 = v22;
				if (v102 < *(int32_t *)(v23 + v49 + 8)) {
					// 0x304a8
					CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
					v50 = g27;
					v25 = g32;
					v24 = g35;
					// branch -> 0x304c4
				}
				// 0x304c4
				v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
				if (v103 < *(int32_t *)(v25 + v50 + 12)) {
					// 0x304e0
					CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
					v26 = g35;
					// branch -> 0x304fc
				} else {
					v26 = v24;
				}
			}
			// 0x304fc
			v27 = g36;
			v51 = v27 + 408;
			g24 = v51;
			v52 = 0x55ec * *(int32_t *)v26;
			v104 = *(int32_t *)(v51 + v52);
			g25 = v104 > *(int32_t *)(v27 + v52 + 400);
			g37 = g33;
			g38 = v104 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(95, 304, 126, (char *)&v4);
			v53 = 0x55ec * *(int32_t *)g35;
			v80 = *(int32_t *)(g36 + v53 + 404);
			if (v80 != *(int32_t *)(g24 + v53)) {
				// 0x3056c
				g25 = 2;
				// branch -> 0x30570
			}
			// 0x30570
			g37 = g33;
			g38 = v80 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(143, 304, 174, (char *)&v4);
			v28 = g36;
			v54 = v28 + 428;
			g24 = v54;
			v55 = 0x55ec * *(int32_t *)g35;
			v105 = *(int32_t *)(v54 + v55);
			g25 = v105 > *(int32_t *)(v28 + v55 + 420);
			g37 = g33;
			g38 = v105 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(95, 332, 126, (char *)&v4);
			v56 = 0x55ec * *(int32_t *)g35;
			v81 = *(int32_t *)(g36 + v56 + 424);
			if (v81 != *(int32_t *)(g24 + v56)) {
				// 0x30608
				g25 = 2;
				// branch -> 0x3060c
			}
			// 0x3060c
			g37 = g33;
			g38 = v81 / 64;
			sprintf();
			g40 = g25;
			result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
			g10 = v1;
			return result;
		}
		// 0x2fe88
		v73 = *(int32_t *)(v58 + 388);
		if (*(char *)(g31 + v33) == 1) {
			// 0x2fe98
			v60 = v73 + v59;
			g25 = v60;
			v7 = v60;
			// branch -> 0x2febc
		} else {
			// 0x2fea4
			v61 = (v73 / 2 | v73 & -0x80000000) + v59;
			g25 = v61;
			v7 = v61;
			// branch -> 0x2febc
		}
		// 0x2febc
		if (v71 != 3) {
			// 0x2ff1c
			// branch -> 0x2ff24
			// 0x2ff24
			g37 = *(int32_t *)(g23 - 0x653c);
			g38 = v7;
			sprintf();
			if (g25 <= 99) {
				// 0x2ff40
				if (g26 < 100) {
					// 0x2ff68
					function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
					// branch -> 0x2ff84
					// 0x2ff84
					v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
					g24 = v74 != 0;
					g38 = v74;
					if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
						// 0x2ffc4
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x2ffd4
					} else {
						// 0x2ffb4
						g37 = g28;
						sprintf();
						// branch -> 0x2ffd4
					}
					// 0x2ffd4
					g40 = g24;
					ADD_PlrStringXY(257, 276, 300, (char *)&v4);
					v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
					g24 = v75 != 0;
					g38 = v75;
					if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
						// 0x3002c
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x3003c
					} else {
						// 0x3001c
						g37 = g28;
						sprintf();
						// branch -> 0x3003c
					}
					// 0x3003c
					g40 = g24;
					ADD_PlrStringXY(257, 304, 300, (char *)&v4);
					v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
					g24 = v76 != 0;
					g38 = v76;
					if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
						// 0x30094
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x300a4
					} else {
						// 0x30084
						g37 = g28;
						sprintf();
						// branch -> 0x300a4
					}
					// 0x300a4
					g40 = g24;
					ADD_PlrStringXY(257, 332, 300, (char *)&v4);
					g37 = g33;
					g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v34 = 0x55ec * *(int32_t *)g35;
					v85 = *(char *)(g31 + v34);
					v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
					if (*(int32_t *)(g27 + v34) == v86) {
						// 0x30100
						g24 = 3;
						v8 = 3;
						// branch -> 0x30104
					} else {
						// 0x300a4
						v8 = g24;
						// branch -> 0x30104
					}
					// 0x30104
					g40 = v8;
					ADD_PlrStringXY(95, 155, 126, (char *)&v4);
					v35 = g36 + 364;
					g28 = v35;
					g37 = g33;
					g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v36 = 0x55ec * *(int32_t *)g35;
					v87 = *(char *)(g31 + v36);
					v88 = *(int32_t *)(g28 + v36);
					if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
						// 0x30164
						g24 = 3;
						v9 = 3;
						// branch -> 0x30168
					} else {
						// 0x30104
						v9 = g24;
						// branch -> 0x30168
					}
					// 0x30168
					g40 = v9;
					ADD_PlrStringXY(95, 183, 126, (char *)&v4);
					g37 = g33;
					g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v37 = 0x55ec * *(int32_t *)g35;
					v89 = *(char *)(g31 + v37);
					v90 = *(int32_t *)(g26 + v37);
					if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
						// 0x301c8
						g24 = 3;
						v10 = 3;
						// branch -> 0x301cc
					} else {
						// 0x30168
						v10 = g24;
						// branch -> 0x301cc
					}
					// 0x301cc
					g40 = v10;
					ADD_PlrStringXY(95, 211, 126, (char *)&v4);
					v38 = g36 + 380;
					g25 = v38;
					g37 = g33;
					g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v39 = 0x55ec * *(int32_t *)g35;
					v91 = *(char *)(g31 + v39);
					v92 = *(int32_t *)(g25 + v39);
					if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
						// 0x3022c
						g24 = 3;
						v11 = 3;
						// branch -> 0x30230
					} else {
						// 0x301cc
						v11 = g24;
						// branch -> 0x30230
					}
					// 0x30230
					g40 = v11;
					ADD_PlrStringXY(95, 239, 126, (char *)&v4);
					g24 = 0;
					v40 = 0x55ec * *(int32_t *)g35;
					v93 = *(int32_t *)(g27 + v40);
					v77 = *(int32_t *)(g36 + v40 + 352);
					g38 = v77;
					if (v77 > v93) {
						// 0x30268
						g24 = 1;
						// branch -> 0x3026c
					}
					// 0x3026c
					if (v77 < v93) {
						// 0x30274
						g24 = 2;
						// branch -> 0x30278
					}
					// 0x30278
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 155, 173, (char *)&v4);
					g24 = 0;
					v41 = 0x55ec * *(int32_t *)g35;
					v94 = *(int32_t *)(g28 + v41);
					v78 = *(int32_t *)(g36 + v41 + 360);
					g38 = v78;
					if (v78 > v94) {
						// 0x302bc
						g24 = 1;
						// branch -> 0x302c0
					}
					// 0x302c0
					if (v78 < v94) {
						// 0x302c8
						g24 = 2;
						// branch -> 0x302cc
					}
					// 0x302cc
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 183, 173, (char *)&v4);
					g24 = 0;
					v42 = 0x55ec * *(int32_t *)g35;
					v95 = *(int32_t *)(g29 + v42);
					g38 = v95;
					v96 = *(int32_t *)(g26 + v42);
					if (v95 > v96) {
						// 0x3030c
						g24 = 1;
						// branch -> 0x30310
					}
					// 0x30310
					if (v95 < v96) {
						// 0x30318
						g24 = 2;
						// branch -> 0x3031c
					}
					// 0x3031c
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 211, 173, (char *)&v4);
					g24 = 0;
					v43 = 0x55ec * *(int32_t *)g35;
					v97 = *(int32_t *)(g25 + v43);
					v79 = *(int32_t *)(g36 + v43 + 376);
					g38 = v79;
					if (v79 > v97) {
						// 0x30360
						g24 = 1;
						// branch -> 0x30364
					}
					// 0x30364
					if (v79 < v97) {
						// 0x3036c
						g24 = 2;
						// branch -> 0x30370
					}
					// 0x30370
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 239, 173, (char *)&v4);
					v12 = g35;
					v63 = *(int32_t *)v12;
					v44 = g36 + 384;
					v3 = v44;
					v16 = v44;
					v15 = v12;
					if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
						// 0x303ac
						v45 = function_a33a4(v63);
						v13 = g35;
						v64 = *(int32_t *)v13;
						v14 = v3;
						if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
							// 0x303c4
							v46 = function_a33a4(v64);
							*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
							v16 = v3;
							v15 = g35;
							// branch -> 0x303d8
						} else {
							v16 = v14;
							v15 = v13;
						}
					}
					// 0x303d8
					v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
					g38 = v98;
					v26 = v15;
					if (v98 >= 1) {
						// 0x303ec
						g37 = g33;
						sprintf();
						g40 = 2;
						ADD_PlrStringXY(95, 266, 126, (char *)&v4);
						v17 = g35;
						v47 = 0x55ec * *(int32_t *)v17;
						v99 = *(char *)(g31 + v47);
						v100 = *(int32_t *)(g27 + v47);
						v65 = v99;
						g24 = v65;
						v18 = g32;
						v21 = v18;
						v20 = v65;
						v19 = v17;
						if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
							// 0x30434
							CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
							v21 = g32;
							v20 = g24;
							v19 = g35;
							// branch -> 0x30450
						}
						// 0x30450
						v48 = 16 * v20;
						g27 = v48;
						v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
						v49 = v48;
						v23 = v21;
						v22 = v19;
						if (v101 < *(int32_t *)(v48 + v21 + 4)) {
							// 0x30470
							CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
							v49 = g27;
							v23 = g32;
							v22 = g35;
							// branch -> 0x3048c
						}
						// 0x3048c
						v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
						v50 = v49;
						v25 = v23;
						v24 = v22;
						if (v102 < *(int32_t *)(v23 + v49 + 8)) {
							// 0x304a8
							CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
							v50 = g27;
							v25 = g32;
							v24 = g35;
							// branch -> 0x304c4
						}
						// 0x304c4
						v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
						if (v103 < *(int32_t *)(v25 + v50 + 12)) {
							// 0x304e0
							CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
							v26 = g35;
							// branch -> 0x304fc
						} else {
							v26 = v24;
						}
					}
					// 0x304fc
					v27 = g36;
					v51 = v27 + 408;
					g24 = v51;
					v52 = 0x55ec * *(int32_t *)v26;
					v104 = *(int32_t *)(v51 + v52);
					g25 = v104 > *(int32_t *)(v27 + v52 + 400);
					g37 = g33;
					g38 = v104 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(95, 304, 126, (char *)&v4);
					v53 = 0x55ec * *(int32_t *)g35;
					v80 = *(int32_t *)(g36 + v53 + 404);
					if (v80 != *(int32_t *)(g24 + v53)) {
						// 0x3056c
						g25 = 2;
						// branch -> 0x30570
					}
					// 0x30570
					g37 = g33;
					g38 = v80 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(143, 304, 174, (char *)&v4);
					v28 = g36;
					v54 = v28 + 428;
					g24 = v54;
					v55 = 0x55ec * *(int32_t *)g35;
					v105 = *(int32_t *)(v54 + v55);
					g25 = v105 > *(int32_t *)(v28 + v55 + 420);
					g37 = g33;
					g38 = v105 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(95, 332, 126, (char *)&v4);
					v56 = 0x55ec * *(int32_t *)g35;
					v81 = *(int32_t *)(g36 + v56 + 424);
					if (v81 != *(int32_t *)(g24 + v56)) {
						// 0x30608
						g25 = 2;
						// branch -> 0x3060c
					}
					// 0x3060c
					g37 = g33;
					g38 = v81 / 64;
					sprintf();
					g40 = g25;
					result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
					g10 = v1;
					return result;
				}
			}
			// 0x2ff48
			function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
			// branch -> 0x2ff84
			// 0x2ff84
			v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
			g24 = v74 != 0;
			g38 = v74;
			if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
				// 0x2ffc4
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x2ffd4
			} else {
				// 0x2ffb4
				g37 = g28;
				sprintf();
				// branch -> 0x2ffd4
			}
			// 0x2ffd4
			g40 = g24;
			ADD_PlrStringXY(257, 276, 300, (char *)&v4);
			v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
			g24 = v75 != 0;
			g38 = v75;
			if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
				// 0x3002c
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x3003c
			} else {
				// 0x3001c
				g37 = g28;
				sprintf();
				// branch -> 0x3003c
			}
			// 0x3003c
			g40 = g24;
			ADD_PlrStringXY(257, 304, 300, (char *)&v4);
			v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
			g24 = v76 != 0;
			g38 = v76;
			if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
				// 0x30094
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x300a4
			} else {
				// 0x30084
				g37 = g28;
				sprintf();
				// branch -> 0x300a4
			}
			// 0x300a4
			g40 = g24;
			ADD_PlrStringXY(257, 332, 300, (char *)&v4);
			g37 = g33;
			g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v34 = 0x55ec * *(int32_t *)g35;
			v85 = *(char *)(g31 + v34);
			v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
			if (*(int32_t *)(g27 + v34) == v86) {
				// 0x30100
				g24 = 3;
				v8 = 3;
				// branch -> 0x30104
			} else {
				// 0x300a4
				v8 = g24;
				// branch -> 0x30104
			}
			// 0x30104
			g40 = v8;
			ADD_PlrStringXY(95, 155, 126, (char *)&v4);
			v35 = g36 + 364;
			g28 = v35;
			g37 = g33;
			g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v36 = 0x55ec * *(int32_t *)g35;
			v87 = *(char *)(g31 + v36);
			v88 = *(int32_t *)(g28 + v36);
			if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
				// 0x30164
				g24 = 3;
				v9 = 3;
				// branch -> 0x30168
			} else {
				// 0x30104
				v9 = g24;
				// branch -> 0x30168
			}
			// 0x30168
			g40 = v9;
			ADD_PlrStringXY(95, 183, 126, (char *)&v4);
			g37 = g33;
			g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v37 = 0x55ec * *(int32_t *)g35;
			v89 = *(char *)(g31 + v37);
			v90 = *(int32_t *)(g26 + v37);
			if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
				// 0x301c8
				g24 = 3;
				v10 = 3;
				// branch -> 0x301cc
			} else {
				// 0x30168
				v10 = g24;
				// branch -> 0x301cc
			}
			// 0x301cc
			g40 = v10;
			ADD_PlrStringXY(95, 211, 126, (char *)&v4);
			v38 = g36 + 380;
			g25 = v38;
			g37 = g33;
			g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v39 = 0x55ec * *(int32_t *)g35;
			v91 = *(char *)(g31 + v39);
			v92 = *(int32_t *)(g25 + v39);
			if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
				// 0x3022c
				g24 = 3;
				v11 = 3;
				// branch -> 0x30230
			} else {
				// 0x301cc
				v11 = g24;
				// branch -> 0x30230
			}
			// 0x30230
			g40 = v11;
			ADD_PlrStringXY(95, 239, 126, (char *)&v4);
			g24 = 0;
			v40 = 0x55ec * *(int32_t *)g35;
			v93 = *(int32_t *)(g27 + v40);
			v77 = *(int32_t *)(g36 + v40 + 352);
			g38 = v77;
			if (v77 > v93) {
				// 0x30268
				g24 = 1;
				// branch -> 0x3026c
			}
			// 0x3026c
			if (v77 < v93) {
				// 0x30274
				g24 = 2;
				// branch -> 0x30278
			}
			// 0x30278
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 155, 173, (char *)&v4);
			g24 = 0;
			v41 = 0x55ec * *(int32_t *)g35;
			v94 = *(int32_t *)(g28 + v41);
			v78 = *(int32_t *)(g36 + v41 + 360);
			g38 = v78;
			if (v78 > v94) {
				// 0x302bc
				g24 = 1;
				// branch -> 0x302c0
			}
			// 0x302c0
			if (v78 < v94) {
				// 0x302c8
				g24 = 2;
				// branch -> 0x302cc
			}
			// 0x302cc
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 183, 173, (char *)&v4);
			g24 = 0;
			v42 = 0x55ec * *(int32_t *)g35;
			v95 = *(int32_t *)(g29 + v42);
			g38 = v95;
			v96 = *(int32_t *)(g26 + v42);
			if (v95 > v96) {
				// 0x3030c
				g24 = 1;
				// branch -> 0x30310
			}
			// 0x30310
			if (v95 < v96) {
				// 0x30318
				g24 = 2;
				// branch -> 0x3031c
			}
			// 0x3031c
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 211, 173, (char *)&v4);
			g24 = 0;
			v43 = 0x55ec * *(int32_t *)g35;
			v97 = *(int32_t *)(g25 + v43);
			v79 = *(int32_t *)(g36 + v43 + 376);
			g38 = v79;
			if (v79 > v97) {
				// 0x30360
				g24 = 1;
				// branch -> 0x30364
			}
			// 0x30364
			if (v79 < v97) {
				// 0x3036c
				g24 = 2;
				// branch -> 0x30370
			}
			// 0x30370
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 239, 173, (char *)&v4);
			v12 = g35;
			v63 = *(int32_t *)v12;
			v44 = g36 + 384;
			v3 = v44;
			v16 = v44;
			v15 = v12;
			if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
				// 0x303ac
				v45 = function_a33a4(v63);
				v13 = g35;
				v64 = *(int32_t *)v13;
				v14 = v3;
				if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
					// 0x303c4
					v46 = function_a33a4(v64);
					*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
					v16 = v3;
					v15 = g35;
					// branch -> 0x303d8
				} else {
					v16 = v14;
					v15 = v13;
				}
			}
			// 0x303d8
			v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
			g38 = v98;
			v26 = v15;
			if (v98 >= 1) {
				// 0x303ec
				g37 = g33;
				sprintf();
				g40 = 2;
				ADD_PlrStringXY(95, 266, 126, (char *)&v4);
				v17 = g35;
				v47 = 0x55ec * *(int32_t *)v17;
				v99 = *(char *)(g31 + v47);
				v100 = *(int32_t *)(g27 + v47);
				v65 = v99;
				g24 = v65;
				v18 = g32;
				v21 = v18;
				v20 = v65;
				v19 = v17;
				if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
					// 0x30434
					CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
					v21 = g32;
					v20 = g24;
					v19 = g35;
					// branch -> 0x30450
				}
				// 0x30450
				v48 = 16 * v20;
				g27 = v48;
				v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
				v49 = v48;
				v23 = v21;
				v22 = v19;
				if (v101 < *(int32_t *)(v48 + v21 + 4)) {
					// 0x30470
					CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
					v49 = g27;
					v23 = g32;
					v22 = g35;
					// branch -> 0x3048c
				}
				// 0x3048c
				v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
				v50 = v49;
				v25 = v23;
				v24 = v22;
				if (v102 < *(int32_t *)(v23 + v49 + 8)) {
					// 0x304a8
					CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
					v50 = g27;
					v25 = g32;
					v24 = g35;
					// branch -> 0x304c4
				}
				// 0x304c4
				v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
				if (v103 < *(int32_t *)(v25 + v50 + 12)) {
					// 0x304e0
					CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
					v26 = g35;
					// branch -> 0x304fc
				} else {
					v26 = v24;
				}
			}
			// 0x304fc
			v27 = g36;
			v51 = v27 + 408;
			g24 = v51;
			v52 = 0x55ec * *(int32_t *)v26;
			v104 = *(int32_t *)(v51 + v52);
			g25 = v104 > *(int32_t *)(v27 + v52 + 400);
			g37 = g33;
			g38 = v104 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(95, 304, 126, (char *)&v4);
			v53 = 0x55ec * *(int32_t *)g35;
			v80 = *(int32_t *)(g36 + v53 + 404);
			if (v80 != *(int32_t *)(g24 + v53)) {
				// 0x3056c
				g25 = 2;
				// branch -> 0x30570
			}
			// 0x30570
			g37 = g33;
			g38 = v80 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(143, 304, 174, (char *)&v4);
			v28 = g36;
			v54 = v28 + 428;
			g24 = v54;
			v55 = 0x55ec * *(int32_t *)g35;
			v105 = *(int32_t *)(v54 + v55);
			g25 = v105 > *(int32_t *)(v28 + v55 + 420);
			g37 = g33;
			g38 = v105 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(95, 332, 126, (char *)&v4);
			v56 = 0x55ec * *(int32_t *)g35;
			v81 = *(int32_t *)(g36 + v56 + 424);
			if (v81 != *(int32_t *)(g24 + v56)) {
				// 0x30608
				g25 = 2;
				// branch -> 0x3060c
			}
			// 0x3060c
			g37 = g33;
			g38 = v81 / 64;
			sprintf();
			g40 = g25;
			result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
			g10 = v1;
			return result;
		}
		// 0x2fef0
		if (*(char *)(g31 + v33) == 1) {
			// 0x2ff00
			// branch -> 0x2ff24
		}
		// 0x2ff24
		g37 = *(int32_t *)(g23 - 0x653c);
		g38 = v7;
		sprintf();
		if (g25 <= 99) {
			// 0x2ff40
			if (g26 < 100) {
				// 0x2ff68
				function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
				// branch -> 0x2ff84
				// 0x2ff84
				v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
				g24 = v74 != 0;
				g38 = v74;
				if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
					// 0x2ffc4
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x2ffd4
				} else {
					// 0x2ffb4
					g37 = g28;
					sprintf();
					// branch -> 0x2ffd4
				}
				// 0x2ffd4
				g40 = g24;
				ADD_PlrStringXY(257, 276, 300, (char *)&v4);
				v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
				g24 = v75 != 0;
				g38 = v75;
				if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
					// 0x3002c
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x3003c
				} else {
					// 0x3001c
					g37 = g28;
					sprintf();
					// branch -> 0x3003c
				}
				// 0x3003c
				g40 = g24;
				ADD_PlrStringXY(257, 304, 300, (char *)&v4);
				v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
				g24 = v76 != 0;
				g38 = v76;
				if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
					// 0x30094
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x300a4
				} else {
					// 0x30084
					g37 = g28;
					sprintf();
					// branch -> 0x300a4
				}
				// 0x300a4
				g40 = g24;
				ADD_PlrStringXY(257, 332, 300, (char *)&v4);
				g37 = g33;
				g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v34 = 0x55ec * *(int32_t *)g35;
				v85 = *(char *)(g31 + v34);
				v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
				if (*(int32_t *)(g27 + v34) == v86) {
					// 0x30100
					g24 = 3;
					v8 = 3;
					// branch -> 0x30104
				} else {
					// 0x300a4
					v8 = g24;
					// branch -> 0x30104
				}
				// 0x30104
				g40 = v8;
				ADD_PlrStringXY(95, 155, 126, (char *)&v4);
				v35 = g36 + 364;
				g28 = v35;
				g37 = g33;
				g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v36 = 0x55ec * *(int32_t *)g35;
				v87 = *(char *)(g31 + v36);
				v88 = *(int32_t *)(g28 + v36);
				if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
					// 0x30164
					g24 = 3;
					v9 = 3;
					// branch -> 0x30168
				} else {
					// 0x30104
					v9 = g24;
					// branch -> 0x30168
				}
				// 0x30168
				g40 = v9;
				ADD_PlrStringXY(95, 183, 126, (char *)&v4);
				g37 = g33;
				g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v37 = 0x55ec * *(int32_t *)g35;
				v89 = *(char *)(g31 + v37);
				v90 = *(int32_t *)(g26 + v37);
				if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
					// 0x301c8
					g24 = 3;
					v10 = 3;
					// branch -> 0x301cc
				} else {
					// 0x30168
					v10 = g24;
					// branch -> 0x301cc
				}
				// 0x301cc
				g40 = v10;
				ADD_PlrStringXY(95, 211, 126, (char *)&v4);
				v38 = g36 + 380;
				g25 = v38;
				g37 = g33;
				g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v39 = 0x55ec * *(int32_t *)g35;
				v91 = *(char *)(g31 + v39);
				v92 = *(int32_t *)(g25 + v39);
				if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
					// 0x3022c
					g24 = 3;
					v11 = 3;
					// branch -> 0x30230
				} else {
					// 0x301cc
					v11 = g24;
					// branch -> 0x30230
				}
				// 0x30230
				g40 = v11;
				ADD_PlrStringXY(95, 239, 126, (char *)&v4);
				g24 = 0;
				v40 = 0x55ec * *(int32_t *)g35;
				v93 = *(int32_t *)(g27 + v40);
				v77 = *(int32_t *)(g36 + v40 + 352);
				g38 = v77;
				if (v77 > v93) {
					// 0x30268
					g24 = 1;
					// branch -> 0x3026c
				}
				// 0x3026c
				if (v77 < v93) {
					// 0x30274
					g24 = 2;
					// branch -> 0x30278
				}
				// 0x30278
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 155, 173, (char *)&v4);
				g24 = 0;
				v41 = 0x55ec * *(int32_t *)g35;
				v94 = *(int32_t *)(g28 + v41);
				v78 = *(int32_t *)(g36 + v41 + 360);
				g38 = v78;
				if (v78 > v94) {
					// 0x302bc
					g24 = 1;
					// branch -> 0x302c0
				}
				// 0x302c0
				if (v78 < v94) {
					// 0x302c8
					g24 = 2;
					// branch -> 0x302cc
				}
				// 0x302cc
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 183, 173, (char *)&v4);
				g24 = 0;
				v42 = 0x55ec * *(int32_t *)g35;
				v95 = *(int32_t *)(g29 + v42);
				g38 = v95;
				v96 = *(int32_t *)(g26 + v42);
				if (v95 > v96) {
					// 0x3030c
					g24 = 1;
					// branch -> 0x30310
				}
				// 0x30310
				if (v95 < v96) {
					// 0x30318
					g24 = 2;
					// branch -> 0x3031c
				}
				// 0x3031c
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 211, 173, (char *)&v4);
				g24 = 0;
				v43 = 0x55ec * *(int32_t *)g35;
				v97 = *(int32_t *)(g25 + v43);
				v79 = *(int32_t *)(g36 + v43 + 376);
				g38 = v79;
				if (v79 > v97) {
					// 0x30360
					g24 = 1;
					// branch -> 0x30364
				}
				// 0x30364
				if (v79 < v97) {
					// 0x3036c
					g24 = 2;
					// branch -> 0x30370
				}
				// 0x30370
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 239, 173, (char *)&v4);
				v12 = g35;
				v63 = *(int32_t *)v12;
				v44 = g36 + 384;
				v3 = v44;
				v16 = v44;
				v15 = v12;
				if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
					// 0x303ac
					v45 = function_a33a4(v63);
					v13 = g35;
					v64 = *(int32_t *)v13;
					v14 = v3;
					if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
						// 0x303c4
						v46 = function_a33a4(v64);
						*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
						v16 = v3;
						v15 = g35;
						// branch -> 0x303d8
					} else {
						v16 = v14;
						v15 = v13;
					}
				}
				// 0x303d8
				v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
				g38 = v98;
				v26 = v15;
				if (v98 >= 1) {
					// 0x303ec
					g37 = g33;
					sprintf();
					g40 = 2;
					ADD_PlrStringXY(95, 266, 126, (char *)&v4);
					v17 = g35;
					v47 = 0x55ec * *(int32_t *)v17;
					v99 = *(char *)(g31 + v47);
					v100 = *(int32_t *)(g27 + v47);
					v65 = v99;
					g24 = v65;
					v18 = g32;
					v21 = v18;
					v20 = v65;
					v19 = v17;
					if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
						// 0x30434
						CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
						v21 = g32;
						v20 = g24;
						v19 = g35;
						// branch -> 0x30450
					}
					// 0x30450
					v48 = 16 * v20;
					g27 = v48;
					v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
					v49 = v48;
					v23 = v21;
					v22 = v19;
					if (v101 < *(int32_t *)(v48 + v21 + 4)) {
						// 0x30470
						CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
						v49 = g27;
						v23 = g32;
						v22 = g35;
						// branch -> 0x3048c
					}
					// 0x3048c
					v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
					v50 = v49;
					v25 = v23;
					v24 = v22;
					if (v102 < *(int32_t *)(v23 + v49 + 8)) {
						// 0x304a8
						CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
						v50 = g27;
						v25 = g32;
						v24 = g35;
						// branch -> 0x304c4
					}
					// 0x304c4
					v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
					if (v103 < *(int32_t *)(v25 + v50 + 12)) {
						// 0x304e0
						CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
						v26 = g35;
						// branch -> 0x304fc
					} else {
						v26 = v24;
					}
				}
				// 0x304fc
				v27 = g36;
				v51 = v27 + 408;
				g24 = v51;
				v52 = 0x55ec * *(int32_t *)v26;
				v104 = *(int32_t *)(v51 + v52);
				g25 = v104 > *(int32_t *)(v27 + v52 + 400);
				g37 = g33;
				g38 = v104 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(95, 304, 126, (char *)&v4);
				v53 = 0x55ec * *(int32_t *)g35;
				v80 = *(int32_t *)(g36 + v53 + 404);
				if (v80 != *(int32_t *)(g24 + v53)) {
					// 0x3056c
					g25 = 2;
					// branch -> 0x30570
				}
				// 0x30570
				g37 = g33;
				g38 = v80 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(143, 304, 174, (char *)&v4);
				v28 = g36;
				v54 = v28 + 428;
				g24 = v54;
				v55 = 0x55ec * *(int32_t *)g35;
				v105 = *(int32_t *)(v54 + v55);
				g25 = v105 > *(int32_t *)(v28 + v55 + 420);
				g37 = g33;
				g38 = v105 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(95, 332, 126, (char *)&v4);
				v56 = 0x55ec * *(int32_t *)g35;
				v81 = *(int32_t *)(g36 + v56 + 424);
				if (v81 != *(int32_t *)(g24 + v56)) {
					// 0x30608
					g25 = 2;
					// branch -> 0x3060c
				}
				// 0x3060c
				g37 = g33;
				g38 = v81 / 64;
				sprintf();
				g40 = g25;
				result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
				g10 = v1;
				return result;
			}
		}
		// 0x2ff48
		function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
		// branch -> 0x2ff84
		// 0x2ff84
		v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
		g24 = v74 != 0;
		g38 = v74;
		if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
			// 0x2ffc4
			g37 = g27;
			g24 = 3;
			sprintf();
			// branch -> 0x2ffd4
		} else {
			// 0x2ffb4
			g37 = g28;
			sprintf();
			// branch -> 0x2ffd4
		}
		// 0x2ffd4
		g40 = g24;
		ADD_PlrStringXY(257, 276, 300, (char *)&v4);
		v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
		g24 = v75 != 0;
		g38 = v75;
		if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
			// 0x3002c
			g37 = g27;
			g24 = 3;
			sprintf();
			// branch -> 0x3003c
		} else {
			// 0x3001c
			g37 = g28;
			sprintf();
			// branch -> 0x3003c
		}
		// 0x3003c
		g40 = g24;
		ADD_PlrStringXY(257, 304, 300, (char *)&v4);
		v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
		g24 = v76 != 0;
		g38 = v76;
		if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
			// 0x30094
			g37 = g27;
			g24 = 3;
			sprintf();
			// branch -> 0x300a4
		} else {
			// 0x30084
			g37 = g28;
			sprintf();
			// branch -> 0x300a4
		}
		// 0x300a4
		g40 = g24;
		ADD_PlrStringXY(257, 332, 300, (char *)&v4);
		g37 = g33;
		g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
		g24 = 0;
		sprintf();
		v34 = 0x55ec * *(int32_t *)g35;
		v85 = *(char *)(g31 + v34);
		v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
		if (*(int32_t *)(g27 + v34) == v86) {
			// 0x30100
			g24 = 3;
			v8 = 3;
			// branch -> 0x30104
		} else {
			// 0x300a4
			v8 = g24;
			// branch -> 0x30104
		}
		// 0x30104
		g40 = v8;
		ADD_PlrStringXY(95, 155, 126, (char *)&v4);
		v35 = g36 + 364;
		g28 = v35;
		g37 = g33;
		g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
		g24 = 0;
		sprintf();
		v36 = 0x55ec * *(int32_t *)g35;
		v87 = *(char *)(g31 + v36);
		v88 = *(int32_t *)(g28 + v36);
		if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
			// 0x30164
			g24 = 3;
			v9 = 3;
			// branch -> 0x30168
		} else {
			// 0x30104
			v9 = g24;
			// branch -> 0x30168
		}
		// 0x30168
		g40 = v9;
		ADD_PlrStringXY(95, 183, 126, (char *)&v4);
		g37 = g33;
		g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
		g24 = 0;
		sprintf();
		v37 = 0x55ec * *(int32_t *)g35;
		v89 = *(char *)(g31 + v37);
		v90 = *(int32_t *)(g26 + v37);
		if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
			// 0x301c8
			g24 = 3;
			v10 = 3;
			// branch -> 0x301cc
		} else {
			// 0x30168
			v10 = g24;
			// branch -> 0x301cc
		}
		// 0x301cc
		g40 = v10;
		ADD_PlrStringXY(95, 211, 126, (char *)&v4);
		v38 = g36 + 380;
		g25 = v38;
		g37 = g33;
		g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
		g24 = 0;
		sprintf();
		v39 = 0x55ec * *(int32_t *)g35;
		v91 = *(char *)(g31 + v39);
		v92 = *(int32_t *)(g25 + v39);
		if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
			// 0x3022c
			g24 = 3;
			v11 = 3;
			// branch -> 0x30230
		} else {
			// 0x301cc
			v11 = g24;
			// branch -> 0x30230
		}
		// 0x30230
		g40 = v11;
		ADD_PlrStringXY(95, 239, 126, (char *)&v4);
		g24 = 0;
		v40 = 0x55ec * *(int32_t *)g35;
		v93 = *(int32_t *)(g27 + v40);
		v77 = *(int32_t *)(g36 + v40 + 352);
		g38 = v77;
		if (v77 > v93) {
			// 0x30268
			g24 = 1;
			// branch -> 0x3026c
		}
		// 0x3026c
		if (v77 < v93) {
			// 0x30274
			g24 = 2;
			// branch -> 0x30278
		}
		// 0x30278
		g37 = g33;
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(143, 155, 173, (char *)&v4);
		g24 = 0;
		v41 = 0x55ec * *(int32_t *)g35;
		v94 = *(int32_t *)(g28 + v41);
		v78 = *(int32_t *)(g36 + v41 + 360);
		g38 = v78;
		if (v78 > v94) {
			// 0x302bc
			g24 = 1;
			// branch -> 0x302c0
		}
		// 0x302c0
		if (v78 < v94) {
			// 0x302c8
			g24 = 2;
			// branch -> 0x302cc
		}
		// 0x302cc
		g37 = g33;
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(143, 183, 173, (char *)&v4);
		g24 = 0;
		v42 = 0x55ec * *(int32_t *)g35;
		v95 = *(int32_t *)(g29 + v42);
		g38 = v95;
		v96 = *(int32_t *)(g26 + v42);
		if (v95 > v96) {
			// 0x3030c
			g24 = 1;
			// branch -> 0x30310
		}
		// 0x30310
		if (v95 < v96) {
			// 0x30318
			g24 = 2;
			// branch -> 0x3031c
		}
		// 0x3031c
		g37 = g33;
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(143, 211, 173, (char *)&v4);
		g24 = 0;
		v43 = 0x55ec * *(int32_t *)g35;
		v97 = *(int32_t *)(g25 + v43);
		v79 = *(int32_t *)(g36 + v43 + 376);
		g38 = v79;
		if (v79 > v97) {
			// 0x30360
			g24 = 1;
			// branch -> 0x30364
		}
		// 0x30364
		if (v79 < v97) {
			// 0x3036c
			g24 = 2;
			// branch -> 0x30370
		}
		// 0x30370
		g37 = g33;
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(143, 239, 173, (char *)&v4);
		v12 = g35;
		v63 = *(int32_t *)v12;
		v44 = g36 + 384;
		v3 = v44;
		v16 = v44;
		v15 = v12;
		if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
			// 0x303ac
			v45 = function_a33a4(v63);
			v13 = g35;
			v64 = *(int32_t *)v13;
			v14 = v3;
			if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
				// 0x303c4
				v46 = function_a33a4(v64);
				*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
				v16 = v3;
				v15 = g35;
				// branch -> 0x303d8
			} else {
				v16 = v14;
				v15 = v13;
			}
		}
		// 0x303d8
		v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
		g38 = v98;
		v26 = v15;
		if (v98 >= 1) {
			// 0x303ec
			g37 = g33;
			sprintf();
			g40 = 2;
			ADD_PlrStringXY(95, 266, 126, (char *)&v4);
			v17 = g35;
			v47 = 0x55ec * *(int32_t *)v17;
			v99 = *(char *)(g31 + v47);
			v100 = *(int32_t *)(g27 + v47);
			v65 = v99;
			g24 = v65;
			v18 = g32;
			v21 = v18;
			v20 = v65;
			v19 = v17;
			if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
				// 0x30434
				CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
				v21 = g32;
				v20 = g24;
				v19 = g35;
				// branch -> 0x30450
			}
			// 0x30450
			v48 = 16 * v20;
			g27 = v48;
			v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
			v49 = v48;
			v23 = v21;
			v22 = v19;
			if (v101 < *(int32_t *)(v48 + v21 + 4)) {
				// 0x30470
				CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
				v49 = g27;
				v23 = g32;
				v22 = g35;
				// branch -> 0x3048c
			}
			// 0x3048c
			v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
			v50 = v49;
			v25 = v23;
			v24 = v22;
			if (v102 < *(int32_t *)(v23 + v49 + 8)) {
				// 0x304a8
				CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
				v50 = g27;
				v25 = g32;
				v24 = g35;
				// branch -> 0x304c4
			}
			// 0x304c4
			v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
			if (v103 < *(int32_t *)(v25 + v50 + 12)) {
				// 0x304e0
				CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
				v26 = g35;
				// branch -> 0x304fc
			} else {
				v26 = v24;
			}
		}
		// 0x304fc
		v27 = g36;
		v51 = v27 + 408;
		g24 = v51;
		v52 = 0x55ec * *(int32_t *)v26;
		v104 = *(int32_t *)(v51 + v52);
		g25 = v104 > *(int32_t *)(v27 + v52 + 400);
		g37 = g33;
		g38 = v104 / 64;
		sprintf();
		g40 = g25;
		ADD_PlrStringXY(95, 304, 126, (char *)&v4);
		v53 = 0x55ec * *(int32_t *)g35;
		v80 = *(int32_t *)(g36 + v53 + 404);
		if (v80 != *(int32_t *)(g24 + v53)) {
			// 0x3056c
			g25 = 2;
			// branch -> 0x30570
		}
		// 0x30570
		g37 = g33;
		g38 = v80 / 64;
		sprintf();
		g40 = g25;
		ADD_PlrStringXY(143, 304, 174, (char *)&v4);
		v28 = g36;
		v54 = v28 + 428;
		g24 = v54;
		v55 = 0x55ec * *(int32_t *)g35;
		v105 = *(int32_t *)(v54 + v55);
		g25 = v105 > *(int32_t *)(v28 + v55 + 420);
		g37 = g33;
		g38 = v105 / 64;
		sprintf();
		g40 = g25;
		ADD_PlrStringXY(95, 332, 126, (char *)&v4);
		v56 = 0x55ec * *(int32_t *)g35;
		v81 = *(int32_t *)(g36 + v56 + 424);
		if (v81 != *(int32_t *)(g24 + v56)) {
			// 0x30608
			g25 = 2;
			// branch -> 0x3060c
		}
		// 0x3060c
		g37 = g33;
		g38 = v81 / 64;
		sprintf();
		g40 = g25;
		result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
		g10 = v1;
		return result;
	}
	// 0x2fbe4
	g40 = 0;
	ADD_PlrStringXY(168, 32, 299, (char *)*(int32_t *)(g23 - 0x6520));
	// branch -> 0x2fc48
	// 0x2fc48
	v29 = g36 + 436;
	g24 = v29;
	g37 = g33;
	g38 = (int32_t) * (char *)(v29 + 0x55ec * *(int32_t *)g35);
	sprintf();
	g40 = 0;
	ADD_PlrStringXY(66, 69, 109, (char *)&v4);
	g37 = g29;
	g38 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 440);
	sprintf();
	g40 = 0;
	ADD_PlrStringXY(216, 69, 300, (char *)&v4);
	v30 = 0x55ec * *(int32_t *)g35;
	if (*(char *)(g24 + v30) == 50) {
		// 0x2fccc
		g34 = &v4;
		g37 = *(int32_t *)(g23 - 0x6534);
		strcpy();
		v5 = 3;
		// branch -> 0x2fcf8
	} else {
		// 0x2fce0
		g38 = *(int32_t *)(g36 + v30 + 448);
		g37 = g29;
		sprintf();
		v5 = 0;
		// branch -> 0x2fcf8
	}
	// 0x2fcf8
	g40 = v5;
	ADD_PlrStringXY(216, 97, 300, (char *)&v4);
	g37 = g33;
	g38 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 456);
	sprintf();
	g40 = 0;
	ADD_PlrStringXY(216, 146, 300, (char *)&v4);
	g24 = 0;
	v31 = 0x55ec * *(int32_t *)g35;
	v6 = g36;
	v57 = v6 + v31;
	v66 = *(int32_t *)(v57 + 0x5558);
	if (v66 < 1) {
		// 0x2fd60
		if (v66 <= 0xffffffff) {
			// 0x2fd68
			g24 = 2;
			// branch -> 0x2fd6c
		}
		// 0x2fd6c
		v67 = *(int32_t *)(v57 + 0x554c);
		v82 = 0x66666667 * (int64_t) * (int32_t *)(v6 + 368 + v31);
		g37 = g33;
		g38 = v67 + v66 + ((int32_t)(v82 / 0x100000000) & -0x80000000 | (int32_t)(v82 / 0x200000000)) + (int32_t)(v82 / 0x8000000000000000);
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(258, 183, 301, (char *)&v4);
		g24 = 0;
		v32 = 0x55ec * *(int32_t *)g35;
		v68 = *(int32_t *)(g36 + v32 + 0x5554);
		if (v68 < 1) {
			// 0x2fde0
			if (v68 <= 0xffffffff) {
				// 0x2fde8
				g24 = 2;
				// branch -> 0x2fdec
			}
		} else {
			// 0x2fde0
			g24 = 1;
			// branch -> 0x2fdec
		}
		// 0x2fdec
		v83 = *(int32_t *)(g29 + v32);
		g37 = g28;
		g38 = v68 + 50 + (v83 / 2 | v83 & -0x80000000);
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(258, 211, 301, (char *)&v4);
		g24 = 0;
		v33 = 0x55ec * *(int32_t *)g35;
		v58 = g36 + v33;
		v69 = *(int32_t *)(v58 + 0x5550);
		if (v69 < 1) {
			// 0x2fe40
			if (v69 <= 0xffffffff) {
				// 0x2fe48
				g24 = 2;
				// branch -> 0x2fe4c
			}
		} else {
			// 0x2fe40
			g24 = 1;
			// branch -> 0x2fe4c
		}
		// 0x2fe4c
		v70 = *(int32_t *)(v58 + 0x5544);
		v71 = *(int32_t *)(v58 + 2656);
		v72 = *(int32_t *)(v58 + 0x555c);
		v84 = 0x51eb851f * (int64_t)(v70 * v69);
		v106 = (int32_t)(v84 / 0x100000000) >> 31;
		v59 = (v106 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v106 < 0) + v70 + v72;
		if (v71 != 3) {
			// 0x2feb4
			v62 = *(int32_t *)(v58 + 388) + v59;
			g25 = v62;
			v7 = v62;
			// branch -> 0x2febc
			// 0x2febc
			if (v71 != 3) {
				// 0x2ff1c
				// branch -> 0x2ff24
				// 0x2ff24
				g37 = *(int32_t *)(g23 - 0x653c);
				g38 = v7;
				sprintf();
				if (g25 <= 99) {
					// 0x2ff40
					if (g26 < 100) {
						// 0x2ff68
						function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
						// branch -> 0x2ff84
						// 0x2ff84
						v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
						g24 = v74 != 0;
						g38 = v74;
						if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
							// 0x2ffc4
							g37 = g27;
							g24 = 3;
							sprintf();
							// branch -> 0x2ffd4
						} else {
							// 0x2ffb4
							g37 = g28;
							sprintf();
							// branch -> 0x2ffd4
						}
						// 0x2ffd4
						g40 = g24;
						ADD_PlrStringXY(257, 276, 300, (char *)&v4);
						v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
						g24 = v75 != 0;
						g38 = v75;
						if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
							// 0x3002c
							g37 = g27;
							g24 = 3;
							sprintf();
							// branch -> 0x3003c
						} else {
							// 0x3001c
							g37 = g28;
							sprintf();
							// branch -> 0x3003c
						}
						// 0x3003c
						g40 = g24;
						ADD_PlrStringXY(257, 304, 300, (char *)&v4);
						v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
						g24 = v76 != 0;
						g38 = v76;
						if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
							// 0x30094
							g37 = g27;
							g24 = 3;
							sprintf();
							// branch -> 0x300a4
						} else {
							// 0x30084
							g37 = g28;
							sprintf();
							// branch -> 0x300a4
						}
						// 0x300a4
						g40 = g24;
						ADD_PlrStringXY(257, 332, 300, (char *)&v4);
						g37 = g33;
						g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v34 = 0x55ec * *(int32_t *)g35;
						v85 = *(char *)(g31 + v34);
						v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
						if (*(int32_t *)(g27 + v34) == v86) {
							// 0x30100
							g24 = 3;
							v8 = 3;
							// branch -> 0x30104
						} else {
							// 0x300a4
							v8 = g24;
							// branch -> 0x30104
						}
						// 0x30104
						g40 = v8;
						ADD_PlrStringXY(95, 155, 126, (char *)&v4);
						v35 = g36 + 364;
						g28 = v35;
						g37 = g33;
						g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v36 = 0x55ec * *(int32_t *)g35;
						v87 = *(char *)(g31 + v36);
						v88 = *(int32_t *)(g28 + v36);
						if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
							// 0x30164
							g24 = 3;
							v9 = 3;
							// branch -> 0x30168
						} else {
							// 0x30104
							v9 = g24;
							// branch -> 0x30168
						}
						// 0x30168
						g40 = v9;
						ADD_PlrStringXY(95, 183, 126, (char *)&v4);
						g37 = g33;
						g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v37 = 0x55ec * *(int32_t *)g35;
						v89 = *(char *)(g31 + v37);
						v90 = *(int32_t *)(g26 + v37);
						if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
							// 0x301c8
							g24 = 3;
							v10 = 3;
							// branch -> 0x301cc
						} else {
							// 0x30168
							v10 = g24;
							// branch -> 0x301cc
						}
						// 0x301cc
						g40 = v10;
						ADD_PlrStringXY(95, 211, 126, (char *)&v4);
						v38 = g36 + 380;
						g25 = v38;
						g37 = g33;
						g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v39 = 0x55ec * *(int32_t *)g35;
						v91 = *(char *)(g31 + v39);
						v92 = *(int32_t *)(g25 + v39);
						if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
							// 0x3022c
							g24 = 3;
							v11 = 3;
							// branch -> 0x30230
						} else {
							// 0x301cc
							v11 = g24;
							// branch -> 0x30230
						}
						// 0x30230
						g40 = v11;
						ADD_PlrStringXY(95, 239, 126, (char *)&v4);
						g24 = 0;
						v40 = 0x55ec * *(int32_t *)g35;
						v93 = *(int32_t *)(g27 + v40);
						v77 = *(int32_t *)(g36 + v40 + 352);
						g38 = v77;
						if (v77 > v93) {
							// 0x30268
							g24 = 1;
							// branch -> 0x3026c
						}
						// 0x3026c
						if (v77 < v93) {
							// 0x30274
							g24 = 2;
							// branch -> 0x30278
						}
						// 0x30278
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 155, 173, (char *)&v4);
						g24 = 0;
						v41 = 0x55ec * *(int32_t *)g35;
						v94 = *(int32_t *)(g28 + v41);
						v78 = *(int32_t *)(g36 + v41 + 360);
						g38 = v78;
						if (v78 > v94) {
							// 0x302bc
							g24 = 1;
							// branch -> 0x302c0
						}
						// 0x302c0
						if (v78 < v94) {
							// 0x302c8
							g24 = 2;
							// branch -> 0x302cc
						}
						// 0x302cc
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 183, 173, (char *)&v4);
						g24 = 0;
						v42 = 0x55ec * *(int32_t *)g35;
						v95 = *(int32_t *)(g29 + v42);
						g38 = v95;
						v96 = *(int32_t *)(g26 + v42);
						if (v95 > v96) {
							// 0x3030c
							g24 = 1;
							// branch -> 0x30310
						}
						// 0x30310
						if (v95 < v96) {
							// 0x30318
							g24 = 2;
							// branch -> 0x3031c
						}
						// 0x3031c
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 211, 173, (char *)&v4);
						g24 = 0;
						v43 = 0x55ec * *(int32_t *)g35;
						v97 = *(int32_t *)(g25 + v43);
						v79 = *(int32_t *)(g36 + v43 + 376);
						g38 = v79;
						if (v79 > v97) {
							// 0x30360
							g24 = 1;
							// branch -> 0x30364
						}
						// 0x30364
						if (v79 < v97) {
							// 0x3036c
							g24 = 2;
							// branch -> 0x30370
						}
						// 0x30370
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 239, 173, (char *)&v4);
						v12 = g35;
						v63 = *(int32_t *)v12;
						v44 = g36 + 384;
						v3 = v44;
						v16 = v44;
						v15 = v12;
						if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
							// 0x303ac
							v45 = function_a33a4(v63);
							v13 = g35;
							v64 = *(int32_t *)v13;
							v14 = v3;
							if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
								// 0x303c4
								v46 = function_a33a4(v64);
								*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
								v16 = v3;
								v15 = g35;
								// branch -> 0x303d8
							} else {
								v16 = v14;
								v15 = v13;
							}
						}
						// 0x303d8
						v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
						g38 = v98;
						v26 = v15;
						if (v98 >= 1) {
							// 0x303ec
							g37 = g33;
							sprintf();
							g40 = 2;
							ADD_PlrStringXY(95, 266, 126, (char *)&v4);
							v17 = g35;
							v47 = 0x55ec * *(int32_t *)v17;
							v99 = *(char *)(g31 + v47);
							v100 = *(int32_t *)(g27 + v47);
							v65 = v99;
							g24 = v65;
							v18 = g32;
							v21 = v18;
							v20 = v65;
							v19 = v17;
							if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
								// 0x30434
								CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
								v21 = g32;
								v20 = g24;
								v19 = g35;
								// branch -> 0x30450
							}
							// 0x30450
							v48 = 16 * v20;
							g27 = v48;
							v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
							v49 = v48;
							v23 = v21;
							v22 = v19;
							if (v101 < *(int32_t *)(v48 + v21 + 4)) {
								// 0x30470
								CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
								v49 = g27;
								v23 = g32;
								v22 = g35;
								// branch -> 0x3048c
							}
							// 0x3048c
							v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
							v50 = v49;
							v25 = v23;
							v24 = v22;
							if (v102 < *(int32_t *)(v23 + v49 + 8)) {
								// 0x304a8
								CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
								v50 = g27;
								v25 = g32;
								v24 = g35;
								// branch -> 0x304c4
							}
							// 0x304c4
							v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
							if (v103 < *(int32_t *)(v25 + v50 + 12)) {
								// 0x304e0
								CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
								v26 = g35;
								// branch -> 0x304fc
							} else {
								v26 = v24;
							}
						}
						// 0x304fc
						v27 = g36;
						v51 = v27 + 408;
						g24 = v51;
						v52 = 0x55ec * *(int32_t *)v26;
						v104 = *(int32_t *)(v51 + v52);
						g25 = v104 > *(int32_t *)(v27 + v52 + 400);
						g37 = g33;
						g38 = v104 / 64;
						sprintf();
						g40 = g25;
						ADD_PlrStringXY(95, 304, 126, (char *)&v4);
						v53 = 0x55ec * *(int32_t *)g35;
						v80 = *(int32_t *)(g36 + v53 + 404);
						if (v80 != *(int32_t *)(g24 + v53)) {
							// 0x3056c
							g25 = 2;
							// branch -> 0x30570
						}
						// 0x30570
						g37 = g33;
						g38 = v80 / 64;
						sprintf();
						g40 = g25;
						ADD_PlrStringXY(143, 304, 174, (char *)&v4);
						v28 = g36;
						v54 = v28 + 428;
						g24 = v54;
						v55 = 0x55ec * *(int32_t *)g35;
						v105 = *(int32_t *)(v54 + v55);
						g25 = v105 > *(int32_t *)(v28 + v55 + 420);
						g37 = g33;
						g38 = v105 / 64;
						sprintf();
						g40 = g25;
						ADD_PlrStringXY(95, 332, 126, (char *)&v4);
						v56 = 0x55ec * *(int32_t *)g35;
						v81 = *(int32_t *)(g36 + v56 + 424);
						if (v81 != *(int32_t *)(g24 + v56)) {
							// 0x30608
							g25 = 2;
							// branch -> 0x3060c
						}
						// 0x3060c
						g37 = g33;
						g38 = v81 / 64;
						sprintf();
						g40 = g25;
						result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
						g10 = v1;
						return result;
					}
				}
				// 0x2ff48
				function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
				// branch -> 0x2ff84
				// 0x2ff84
				v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
				g24 = v74 != 0;
				g38 = v74;
				if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
					// 0x2ffc4
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x2ffd4
				} else {
					// 0x2ffb4
					g37 = g28;
					sprintf();
					// branch -> 0x2ffd4
				}
				// 0x2ffd4
				g40 = g24;
				ADD_PlrStringXY(257, 276, 300, (char *)&v4);
				v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
				g24 = v75 != 0;
				g38 = v75;
				if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
					// 0x3002c
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x3003c
				} else {
					// 0x3001c
					g37 = g28;
					sprintf();
					// branch -> 0x3003c
				}
				// 0x3003c
				g40 = g24;
				ADD_PlrStringXY(257, 304, 300, (char *)&v4);
				v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
				g24 = v76 != 0;
				g38 = v76;
				if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
					// 0x30094
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x300a4
				} else {
					// 0x30084
					g37 = g28;
					sprintf();
					// branch -> 0x300a4
				}
				// 0x300a4
				g40 = g24;
				ADD_PlrStringXY(257, 332, 300, (char *)&v4);
				g37 = g33;
				g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v34 = 0x55ec * *(int32_t *)g35;
				v85 = *(char *)(g31 + v34);
				v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
				if (*(int32_t *)(g27 + v34) == v86) {
					// 0x30100
					g24 = 3;
					v8 = 3;
					// branch -> 0x30104
				} else {
					// 0x300a4
					v8 = g24;
					// branch -> 0x30104
				}
				// 0x30104
				g40 = v8;
				ADD_PlrStringXY(95, 155, 126, (char *)&v4);
				v35 = g36 + 364;
				g28 = v35;
				g37 = g33;
				g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v36 = 0x55ec * *(int32_t *)g35;
				v87 = *(char *)(g31 + v36);
				v88 = *(int32_t *)(g28 + v36);
				if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
					// 0x30164
					g24 = 3;
					v9 = 3;
					// branch -> 0x30168
				} else {
					// 0x30104
					v9 = g24;
					// branch -> 0x30168
				}
				// 0x30168
				g40 = v9;
				ADD_PlrStringXY(95, 183, 126, (char *)&v4);
				g37 = g33;
				g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v37 = 0x55ec * *(int32_t *)g35;
				v89 = *(char *)(g31 + v37);
				v90 = *(int32_t *)(g26 + v37);
				if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
					// 0x301c8
					g24 = 3;
					v10 = 3;
					// branch -> 0x301cc
				} else {
					// 0x30168
					v10 = g24;
					// branch -> 0x301cc
				}
				// 0x301cc
				g40 = v10;
				ADD_PlrStringXY(95, 211, 126, (char *)&v4);
				v38 = g36 + 380;
				g25 = v38;
				g37 = g33;
				g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v39 = 0x55ec * *(int32_t *)g35;
				v91 = *(char *)(g31 + v39);
				v92 = *(int32_t *)(g25 + v39);
				if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
					// 0x3022c
					g24 = 3;
					v11 = 3;
					// branch -> 0x30230
				} else {
					// 0x301cc
					v11 = g24;
					// branch -> 0x30230
				}
				// 0x30230
				g40 = v11;
				ADD_PlrStringXY(95, 239, 126, (char *)&v4);
				g24 = 0;
				v40 = 0x55ec * *(int32_t *)g35;
				v93 = *(int32_t *)(g27 + v40);
				v77 = *(int32_t *)(g36 + v40 + 352);
				g38 = v77;
				if (v77 > v93) {
					// 0x30268
					g24 = 1;
					// branch -> 0x3026c
				}
				// 0x3026c
				if (v77 < v93) {
					// 0x30274
					g24 = 2;
					// branch -> 0x30278
				}
				// 0x30278
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 155, 173, (char *)&v4);
				g24 = 0;
				v41 = 0x55ec * *(int32_t *)g35;
				v94 = *(int32_t *)(g28 + v41);
				v78 = *(int32_t *)(g36 + v41 + 360);
				g38 = v78;
				if (v78 > v94) {
					// 0x302bc
					g24 = 1;
					// branch -> 0x302c0
				}
				// 0x302c0
				if (v78 < v94) {
					// 0x302c8
					g24 = 2;
					// branch -> 0x302cc
				}
				// 0x302cc
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 183, 173, (char *)&v4);
				g24 = 0;
				v42 = 0x55ec * *(int32_t *)g35;
				v95 = *(int32_t *)(g29 + v42);
				g38 = v95;
				v96 = *(int32_t *)(g26 + v42);
				if (v95 > v96) {
					// 0x3030c
					g24 = 1;
					// branch -> 0x30310
				}
				// 0x30310
				if (v95 < v96) {
					// 0x30318
					g24 = 2;
					// branch -> 0x3031c
				}
				// 0x3031c
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 211, 173, (char *)&v4);
				g24 = 0;
				v43 = 0x55ec * *(int32_t *)g35;
				v97 = *(int32_t *)(g25 + v43);
				v79 = *(int32_t *)(g36 + v43 + 376);
				g38 = v79;
				if (v79 > v97) {
					// 0x30360
					g24 = 1;
					// branch -> 0x30364
				}
				// 0x30364
				if (v79 < v97) {
					// 0x3036c
					g24 = 2;
					// branch -> 0x30370
				}
				// 0x30370
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 239, 173, (char *)&v4);
				v12 = g35;
				v63 = *(int32_t *)v12;
				v44 = g36 + 384;
				v3 = v44;
				v16 = v44;
				v15 = v12;
				if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
					// 0x303ac
					v45 = function_a33a4(v63);
					v13 = g35;
					v64 = *(int32_t *)v13;
					v14 = v3;
					if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
						// 0x303c4
						v46 = function_a33a4(v64);
						*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
						v16 = v3;
						v15 = g35;
						// branch -> 0x303d8
					} else {
						v16 = v14;
						v15 = v13;
					}
				}
				// 0x303d8
				v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
				g38 = v98;
				v26 = v15;
				if (v98 >= 1) {
					// 0x303ec
					g37 = g33;
					sprintf();
					g40 = 2;
					ADD_PlrStringXY(95, 266, 126, (char *)&v4);
					v17 = g35;
					v47 = 0x55ec * *(int32_t *)v17;
					v99 = *(char *)(g31 + v47);
					v100 = *(int32_t *)(g27 + v47);
					v65 = v99;
					g24 = v65;
					v18 = g32;
					v21 = v18;
					v20 = v65;
					v19 = v17;
					if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
						// 0x30434
						CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
						v21 = g32;
						v20 = g24;
						v19 = g35;
						// branch -> 0x30450
					}
					// 0x30450
					v48 = 16 * v20;
					g27 = v48;
					v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
					v49 = v48;
					v23 = v21;
					v22 = v19;
					if (v101 < *(int32_t *)(v48 + v21 + 4)) {
						// 0x30470
						CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
						v49 = g27;
						v23 = g32;
						v22 = g35;
						// branch -> 0x3048c
					}
					// 0x3048c
					v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
					v50 = v49;
					v25 = v23;
					v24 = v22;
					if (v102 < *(int32_t *)(v23 + v49 + 8)) {
						// 0x304a8
						CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
						v50 = g27;
						v25 = g32;
						v24 = g35;
						// branch -> 0x304c4
					}
					// 0x304c4
					v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
					if (v103 < *(int32_t *)(v25 + v50 + 12)) {
						// 0x304e0
						CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
						v26 = g35;
						// branch -> 0x304fc
					} else {
						v26 = v24;
					}
				}
				// 0x304fc
				v27 = g36;
				v51 = v27 + 408;
				g24 = v51;
				v52 = 0x55ec * *(int32_t *)v26;
				v104 = *(int32_t *)(v51 + v52);
				g25 = v104 > *(int32_t *)(v27 + v52 + 400);
				g37 = g33;
				g38 = v104 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(95, 304, 126, (char *)&v4);
				v53 = 0x55ec * *(int32_t *)g35;
				v80 = *(int32_t *)(g36 + v53 + 404);
				if (v80 != *(int32_t *)(g24 + v53)) {
					// 0x3056c
					g25 = 2;
					// branch -> 0x30570
				}
				// 0x30570
				g37 = g33;
				g38 = v80 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(143, 304, 174, (char *)&v4);
				v28 = g36;
				v54 = v28 + 428;
				g24 = v54;
				v55 = 0x55ec * *(int32_t *)g35;
				v105 = *(int32_t *)(v54 + v55);
				g25 = v105 > *(int32_t *)(v28 + v55 + 420);
				g37 = g33;
				g38 = v105 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(95, 332, 126, (char *)&v4);
				v56 = 0x55ec * *(int32_t *)g35;
				v81 = *(int32_t *)(g36 + v56 + 424);
				if (v81 != *(int32_t *)(g24 + v56)) {
					// 0x30608
					g25 = 2;
					// branch -> 0x3060c
				}
				// 0x3060c
				g37 = g33;
				g38 = v81 / 64;
				sprintf();
				g40 = g25;
				result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
				g10 = v1;
				return result;
			}
			// 0x2fef0
			if (*(char *)(g31 + v33) == 1) {
				// 0x2ff00
				// branch -> 0x2ff24
			}
			// 0x2ff24
			g37 = *(int32_t *)(g23 - 0x653c);
			g38 = v7;
			sprintf();
			if (g25 <= 99) {
				// 0x2ff40
				if (g26 < 100) {
					// 0x2ff68
					function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
					// branch -> 0x2ff84
					// 0x2ff84
					v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
					g24 = v74 != 0;
					g38 = v74;
					if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
						// 0x2ffc4
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x2ffd4
					} else {
						// 0x2ffb4
						g37 = g28;
						sprintf();
						// branch -> 0x2ffd4
					}
					// 0x2ffd4
					g40 = g24;
					ADD_PlrStringXY(257, 276, 300, (char *)&v4);
					v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
					g24 = v75 != 0;
					g38 = v75;
					if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
						// 0x3002c
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x3003c
					} else {
						// 0x3001c
						g37 = g28;
						sprintf();
						// branch -> 0x3003c
					}
					// 0x3003c
					g40 = g24;
					ADD_PlrStringXY(257, 304, 300, (char *)&v4);
					v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
					g24 = v76 != 0;
					g38 = v76;
					if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
						// 0x30094
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x300a4
					} else {
						// 0x30084
						g37 = g28;
						sprintf();
						// branch -> 0x300a4
					}
					// 0x300a4
					g40 = g24;
					ADD_PlrStringXY(257, 332, 300, (char *)&v4);
					g37 = g33;
					g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v34 = 0x55ec * *(int32_t *)g35;
					v85 = *(char *)(g31 + v34);
					v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
					if (*(int32_t *)(g27 + v34) == v86) {
						// 0x30100
						g24 = 3;
						v8 = 3;
						// branch -> 0x30104
					} else {
						// 0x300a4
						v8 = g24;
						// branch -> 0x30104
					}
					// 0x30104
					g40 = v8;
					ADD_PlrStringXY(95, 155, 126, (char *)&v4);
					v35 = g36 + 364;
					g28 = v35;
					g37 = g33;
					g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v36 = 0x55ec * *(int32_t *)g35;
					v87 = *(char *)(g31 + v36);
					v88 = *(int32_t *)(g28 + v36);
					if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
						// 0x30164
						g24 = 3;
						v9 = 3;
						// branch -> 0x30168
					} else {
						// 0x30104
						v9 = g24;
						// branch -> 0x30168
					}
					// 0x30168
					g40 = v9;
					ADD_PlrStringXY(95, 183, 126, (char *)&v4);
					g37 = g33;
					g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v37 = 0x55ec * *(int32_t *)g35;
					v89 = *(char *)(g31 + v37);
					v90 = *(int32_t *)(g26 + v37);
					if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
						// 0x301c8
						g24 = 3;
						v10 = 3;
						// branch -> 0x301cc
					} else {
						// 0x30168
						v10 = g24;
						// branch -> 0x301cc
					}
					// 0x301cc
					g40 = v10;
					ADD_PlrStringXY(95, 211, 126, (char *)&v4);
					v38 = g36 + 380;
					g25 = v38;
					g37 = g33;
					g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v39 = 0x55ec * *(int32_t *)g35;
					v91 = *(char *)(g31 + v39);
					v92 = *(int32_t *)(g25 + v39);
					if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
						// 0x3022c
						g24 = 3;
						v11 = 3;
						// branch -> 0x30230
					} else {
						// 0x301cc
						v11 = g24;
						// branch -> 0x30230
					}
					// 0x30230
					g40 = v11;
					ADD_PlrStringXY(95, 239, 126, (char *)&v4);
					g24 = 0;
					v40 = 0x55ec * *(int32_t *)g35;
					v93 = *(int32_t *)(g27 + v40);
					v77 = *(int32_t *)(g36 + v40 + 352);
					g38 = v77;
					if (v77 > v93) {
						// 0x30268
						g24 = 1;
						// branch -> 0x3026c
					}
					// 0x3026c
					if (v77 < v93) {
						// 0x30274
						g24 = 2;
						// branch -> 0x30278
					}
					// 0x30278
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 155, 173, (char *)&v4);
					g24 = 0;
					v41 = 0x55ec * *(int32_t *)g35;
					v94 = *(int32_t *)(g28 + v41);
					v78 = *(int32_t *)(g36 + v41 + 360);
					g38 = v78;
					if (v78 > v94) {
						// 0x302bc
						g24 = 1;
						// branch -> 0x302c0
					}
					// 0x302c0
					if (v78 < v94) {
						// 0x302c8
						g24 = 2;
						// branch -> 0x302cc
					}
					// 0x302cc
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 183, 173, (char *)&v4);
					g24 = 0;
					v42 = 0x55ec * *(int32_t *)g35;
					v95 = *(int32_t *)(g29 + v42);
					g38 = v95;
					v96 = *(int32_t *)(g26 + v42);
					if (v95 > v96) {
						// 0x3030c
						g24 = 1;
						// branch -> 0x30310
					}
					// 0x30310
					if (v95 < v96) {
						// 0x30318
						g24 = 2;
						// branch -> 0x3031c
					}
					// 0x3031c
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 211, 173, (char *)&v4);
					g24 = 0;
					v43 = 0x55ec * *(int32_t *)g35;
					v97 = *(int32_t *)(g25 + v43);
					v79 = *(int32_t *)(g36 + v43 + 376);
					g38 = v79;
					if (v79 > v97) {
						// 0x30360
						g24 = 1;
						// branch -> 0x30364
					}
					// 0x30364
					if (v79 < v97) {
						// 0x3036c
						g24 = 2;
						// branch -> 0x30370
					}
					// 0x30370
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 239, 173, (char *)&v4);
					v12 = g35;
					v63 = *(int32_t *)v12;
					v44 = g36 + 384;
					v3 = v44;
					v16 = v44;
					v15 = v12;
					if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
						// 0x303ac
						v45 = function_a33a4(v63);
						v13 = g35;
						v64 = *(int32_t *)v13;
						v14 = v3;
						if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
							// 0x303c4
							v46 = function_a33a4(v64);
							*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
							v16 = v3;
							v15 = g35;
							// branch -> 0x303d8
						} else {
							v16 = v14;
							v15 = v13;
						}
					}
					// 0x303d8
					v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
					g38 = v98;
					v26 = v15;
					if (v98 >= 1) {
						// 0x303ec
						g37 = g33;
						sprintf();
						g40 = 2;
						ADD_PlrStringXY(95, 266, 126, (char *)&v4);
						v17 = g35;
						v47 = 0x55ec * *(int32_t *)v17;
						v99 = *(char *)(g31 + v47);
						v100 = *(int32_t *)(g27 + v47);
						v65 = v99;
						g24 = v65;
						v18 = g32;
						v21 = v18;
						v20 = v65;
						v19 = v17;
						if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
							// 0x30434
							CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
							v21 = g32;
							v20 = g24;
							v19 = g35;
							// branch -> 0x30450
						}
						// 0x30450
						v48 = 16 * v20;
						g27 = v48;
						v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
						v49 = v48;
						v23 = v21;
						v22 = v19;
						if (v101 < *(int32_t *)(v48 + v21 + 4)) {
							// 0x30470
							CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
							v49 = g27;
							v23 = g32;
							v22 = g35;
							// branch -> 0x3048c
						}
						// 0x3048c
						v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
						v50 = v49;
						v25 = v23;
						v24 = v22;
						if (v102 < *(int32_t *)(v23 + v49 + 8)) {
							// 0x304a8
							CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
							v50 = g27;
							v25 = g32;
							v24 = g35;
							// branch -> 0x304c4
						}
						// 0x304c4
						v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
						if (v103 < *(int32_t *)(v25 + v50 + 12)) {
							// 0x304e0
							CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
							v26 = g35;
							// branch -> 0x304fc
						} else {
							v26 = v24;
						}
					}
					// 0x304fc
					v27 = g36;
					v51 = v27 + 408;
					g24 = v51;
					v52 = 0x55ec * *(int32_t *)v26;
					v104 = *(int32_t *)(v51 + v52);
					g25 = v104 > *(int32_t *)(v27 + v52 + 400);
					g37 = g33;
					g38 = v104 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(95, 304, 126, (char *)&v4);
					v53 = 0x55ec * *(int32_t *)g35;
					v80 = *(int32_t *)(g36 + v53 + 404);
					if (v80 != *(int32_t *)(g24 + v53)) {
						// 0x3056c
						g25 = 2;
						// branch -> 0x30570
					}
					// 0x30570
					g37 = g33;
					g38 = v80 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(143, 304, 174, (char *)&v4);
					v28 = g36;
					v54 = v28 + 428;
					g24 = v54;
					v55 = 0x55ec * *(int32_t *)g35;
					v105 = *(int32_t *)(v54 + v55);
					g25 = v105 > *(int32_t *)(v28 + v55 + 420);
					g37 = g33;
					g38 = v105 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(95, 332, 126, (char *)&v4);
					v56 = 0x55ec * *(int32_t *)g35;
					v81 = *(int32_t *)(g36 + v56 + 424);
					if (v81 != *(int32_t *)(g24 + v56)) {
						// 0x30608
						g25 = 2;
						// branch -> 0x3060c
					}
					// 0x3060c
					g37 = g33;
					g38 = v81 / 64;
					sprintf();
					g40 = g25;
					result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
					g10 = v1;
					return result;
				}
			}
			// 0x2ff48
			function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
			// branch -> 0x2ff84
			// 0x2ff84
			v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
			g24 = v74 != 0;
			g38 = v74;
			if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
				// 0x2ffc4
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x2ffd4
			} else {
				// 0x2ffb4
				g37 = g28;
				sprintf();
				// branch -> 0x2ffd4
			}
			// 0x2ffd4
			g40 = g24;
			ADD_PlrStringXY(257, 276, 300, (char *)&v4);
			v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
			g24 = v75 != 0;
			g38 = v75;
			if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
				// 0x3002c
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x3003c
			} else {
				// 0x3001c
				g37 = g28;
				sprintf();
				// branch -> 0x3003c
			}
			// 0x3003c
			g40 = g24;
			ADD_PlrStringXY(257, 304, 300, (char *)&v4);
			v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
			g24 = v76 != 0;
			g38 = v76;
			if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
				// 0x30094
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x300a4
			} else {
				// 0x30084
				g37 = g28;
				sprintf();
				// branch -> 0x300a4
			}
			// 0x300a4
			g40 = g24;
			ADD_PlrStringXY(257, 332, 300, (char *)&v4);
			g37 = g33;
			g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v34 = 0x55ec * *(int32_t *)g35;
			v85 = *(char *)(g31 + v34);
			v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
			if (*(int32_t *)(g27 + v34) == v86) {
				// 0x30100
				g24 = 3;
				v8 = 3;
				// branch -> 0x30104
			} else {
				// 0x300a4
				v8 = g24;
				// branch -> 0x30104
			}
			// 0x30104
			g40 = v8;
			ADD_PlrStringXY(95, 155, 126, (char *)&v4);
			v35 = g36 + 364;
			g28 = v35;
			g37 = g33;
			g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v36 = 0x55ec * *(int32_t *)g35;
			v87 = *(char *)(g31 + v36);
			v88 = *(int32_t *)(g28 + v36);
			if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
				// 0x30164
				g24 = 3;
				v9 = 3;
				// branch -> 0x30168
			} else {
				// 0x30104
				v9 = g24;
				// branch -> 0x30168
			}
			// 0x30168
			g40 = v9;
			ADD_PlrStringXY(95, 183, 126, (char *)&v4);
			g37 = g33;
			g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v37 = 0x55ec * *(int32_t *)g35;
			v89 = *(char *)(g31 + v37);
			v90 = *(int32_t *)(g26 + v37);
			if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
				// 0x301c8
				g24 = 3;
				v10 = 3;
				// branch -> 0x301cc
			} else {
				// 0x30168
				v10 = g24;
				// branch -> 0x301cc
			}
			// 0x301cc
			g40 = v10;
			ADD_PlrStringXY(95, 211, 126, (char *)&v4);
			v38 = g36 + 380;
			g25 = v38;
			g37 = g33;
			g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v39 = 0x55ec * *(int32_t *)g35;
			v91 = *(char *)(g31 + v39);
			v92 = *(int32_t *)(g25 + v39);
			if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
				// 0x3022c
				g24 = 3;
				v11 = 3;
				// branch -> 0x30230
			} else {
				// 0x301cc
				v11 = g24;
				// branch -> 0x30230
			}
			// 0x30230
			g40 = v11;
			ADD_PlrStringXY(95, 239, 126, (char *)&v4);
			g24 = 0;
			v40 = 0x55ec * *(int32_t *)g35;
			v93 = *(int32_t *)(g27 + v40);
			v77 = *(int32_t *)(g36 + v40 + 352);
			g38 = v77;
			if (v77 > v93) {
				// 0x30268
				g24 = 1;
				// branch -> 0x3026c
			}
			// 0x3026c
			if (v77 < v93) {
				// 0x30274
				g24 = 2;
				// branch -> 0x30278
			}
			// 0x30278
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 155, 173, (char *)&v4);
			g24 = 0;
			v41 = 0x55ec * *(int32_t *)g35;
			v94 = *(int32_t *)(g28 + v41);
			v78 = *(int32_t *)(g36 + v41 + 360);
			g38 = v78;
			if (v78 > v94) {
				// 0x302bc
				g24 = 1;
				// branch -> 0x302c0
			}
			// 0x302c0
			if (v78 < v94) {
				// 0x302c8
				g24 = 2;
				// branch -> 0x302cc
			}
			// 0x302cc
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 183, 173, (char *)&v4);
			g24 = 0;
			v42 = 0x55ec * *(int32_t *)g35;
			v95 = *(int32_t *)(g29 + v42);
			g38 = v95;
			v96 = *(int32_t *)(g26 + v42);
			if (v95 > v96) {
				// 0x3030c
				g24 = 1;
				// branch -> 0x30310
			}
			// 0x30310
			if (v95 < v96) {
				// 0x30318
				g24 = 2;
				// branch -> 0x3031c
			}
			// 0x3031c
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 211, 173, (char *)&v4);
			g24 = 0;
			v43 = 0x55ec * *(int32_t *)g35;
			v97 = *(int32_t *)(g25 + v43);
			v79 = *(int32_t *)(g36 + v43 + 376);
			g38 = v79;
			if (v79 > v97) {
				// 0x30360
				g24 = 1;
				// branch -> 0x30364
			}
			// 0x30364
			if (v79 < v97) {
				// 0x3036c
				g24 = 2;
				// branch -> 0x30370
			}
			// 0x30370
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 239, 173, (char *)&v4);
			v12 = g35;
			v63 = *(int32_t *)v12;
			v44 = g36 + 384;
			v3 = v44;
			v16 = v44;
			v15 = v12;
			if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
				// 0x303ac
				v45 = function_a33a4(v63);
				v13 = g35;
				v64 = *(int32_t *)v13;
				v14 = v3;
				if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
					// 0x303c4
					v46 = function_a33a4(v64);
					*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
					v16 = v3;
					v15 = g35;
					// branch -> 0x303d8
				} else {
					v16 = v14;
					v15 = v13;
				}
			}
			// 0x303d8
			v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
			g38 = v98;
			v26 = v15;
			if (v98 >= 1) {
				// 0x303ec
				g37 = g33;
				sprintf();
				g40 = 2;
				ADD_PlrStringXY(95, 266, 126, (char *)&v4);
				v17 = g35;
				v47 = 0x55ec * *(int32_t *)v17;
				v99 = *(char *)(g31 + v47);
				v100 = *(int32_t *)(g27 + v47);
				v65 = v99;
				g24 = v65;
				v18 = g32;
				v21 = v18;
				v20 = v65;
				v19 = v17;
				if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
					// 0x30434
					CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
					v21 = g32;
					v20 = g24;
					v19 = g35;
					// branch -> 0x30450
				}
				// 0x30450
				v48 = 16 * v20;
				g27 = v48;
				v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
				v49 = v48;
				v23 = v21;
				v22 = v19;
				if (v101 < *(int32_t *)(v48 + v21 + 4)) {
					// 0x30470
					CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
					v49 = g27;
					v23 = g32;
					v22 = g35;
					// branch -> 0x3048c
				}
				// 0x3048c
				v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
				v50 = v49;
				v25 = v23;
				v24 = v22;
				if (v102 < *(int32_t *)(v23 + v49 + 8)) {
					// 0x304a8
					CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
					v50 = g27;
					v25 = g32;
					v24 = g35;
					// branch -> 0x304c4
				}
				// 0x304c4
				v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
				if (v103 < *(int32_t *)(v25 + v50 + 12)) {
					// 0x304e0
					CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
					v26 = g35;
					// branch -> 0x304fc
				} else {
					v26 = v24;
				}
			}
			// 0x304fc
			v27 = g36;
			v51 = v27 + 408;
			g24 = v51;
			v52 = 0x55ec * *(int32_t *)v26;
			v104 = *(int32_t *)(v51 + v52);
			g25 = v104 > *(int32_t *)(v27 + v52 + 400);
			g37 = g33;
			g38 = v104 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(95, 304, 126, (char *)&v4);
			v53 = 0x55ec * *(int32_t *)g35;
			v80 = *(int32_t *)(g36 + v53 + 404);
			if (v80 != *(int32_t *)(g24 + v53)) {
				// 0x3056c
				g25 = 2;
				// branch -> 0x30570
			}
			// 0x30570
			g37 = g33;
			g38 = v80 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(143, 304, 174, (char *)&v4);
			v28 = g36;
			v54 = v28 + 428;
			g24 = v54;
			v55 = 0x55ec * *(int32_t *)g35;
			v105 = *(int32_t *)(v54 + v55);
			g25 = v105 > *(int32_t *)(v28 + v55 + 420);
			g37 = g33;
			g38 = v105 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(95, 332, 126, (char *)&v4);
			v56 = 0x55ec * *(int32_t *)g35;
			v81 = *(int32_t *)(g36 + v56 + 424);
			if (v81 != *(int32_t *)(g24 + v56)) {
				// 0x30608
				g25 = 2;
				// branch -> 0x3060c
			}
			// 0x3060c
			g37 = g33;
			g38 = v81 / 64;
			sprintf();
			g40 = g25;
			result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
			g10 = v1;
			return result;
		}
		// 0x2fe88
		v73 = *(int32_t *)(v58 + 388);
		if (*(char *)(g31 + v33) == 1) {
			// 0x2fe98
			v60 = v73 + v59;
			g25 = v60;
			v7 = v60;
			// branch -> 0x2febc
		} else {
			// 0x2fea4
			v61 = (v73 / 2 | v73 & -0x80000000) + v59;
			g25 = v61;
			v7 = v61;
			// branch -> 0x2febc
		}
		// 0x2febc
		if (v71 != 3) {
			// 0x2ff1c
			// branch -> 0x2ff24
			// 0x2ff24
			g37 = *(int32_t *)(g23 - 0x653c);
			g38 = v7;
			sprintf();
			if (g25 <= 99) {
				// 0x2ff40
				if (g26 < 100) {
					// 0x2ff68
					function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
					// branch -> 0x2ff84
					// 0x2ff84
					v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
					g24 = v74 != 0;
					g38 = v74;
					if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
						// 0x2ffc4
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x2ffd4
					} else {
						// 0x2ffb4
						g37 = g28;
						sprintf();
						// branch -> 0x2ffd4
					}
					// 0x2ffd4
					g40 = g24;
					ADD_PlrStringXY(257, 276, 300, (char *)&v4);
					v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
					g24 = v75 != 0;
					g38 = v75;
					if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
						// 0x3002c
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x3003c
					} else {
						// 0x3001c
						g37 = g28;
						sprintf();
						// branch -> 0x3003c
					}
					// 0x3003c
					g40 = g24;
					ADD_PlrStringXY(257, 304, 300, (char *)&v4);
					v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
					g24 = v76 != 0;
					g38 = v76;
					if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
						// 0x30094
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x300a4
					} else {
						// 0x30084
						g37 = g28;
						sprintf();
						// branch -> 0x300a4
					}
					// 0x300a4
					g40 = g24;
					ADD_PlrStringXY(257, 332, 300, (char *)&v4);
					g37 = g33;
					g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v34 = 0x55ec * *(int32_t *)g35;
					v85 = *(char *)(g31 + v34);
					v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
					if (*(int32_t *)(g27 + v34) == v86) {
						// 0x30100
						g24 = 3;
						v8 = 3;
						// branch -> 0x30104
					} else {
						// 0x300a4
						v8 = g24;
						// branch -> 0x30104
					}
					// 0x30104
					g40 = v8;
					ADD_PlrStringXY(95, 155, 126, (char *)&v4);
					v35 = g36 + 364;
					g28 = v35;
					g37 = g33;
					g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v36 = 0x55ec * *(int32_t *)g35;
					v87 = *(char *)(g31 + v36);
					v88 = *(int32_t *)(g28 + v36);
					if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
						// 0x30164
						g24 = 3;
						v9 = 3;
						// branch -> 0x30168
					} else {
						// 0x30104
						v9 = g24;
						// branch -> 0x30168
					}
					// 0x30168
					g40 = v9;
					ADD_PlrStringXY(95, 183, 126, (char *)&v4);
					g37 = g33;
					g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v37 = 0x55ec * *(int32_t *)g35;
					v89 = *(char *)(g31 + v37);
					v90 = *(int32_t *)(g26 + v37);
					if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
						// 0x301c8
						g24 = 3;
						v10 = 3;
						// branch -> 0x301cc
					} else {
						// 0x30168
						v10 = g24;
						// branch -> 0x301cc
					}
					// 0x301cc
					g40 = v10;
					ADD_PlrStringXY(95, 211, 126, (char *)&v4);
					v38 = g36 + 380;
					g25 = v38;
					g37 = g33;
					g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v39 = 0x55ec * *(int32_t *)g35;
					v91 = *(char *)(g31 + v39);
					v92 = *(int32_t *)(g25 + v39);
					if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
						// 0x3022c
						g24 = 3;
						v11 = 3;
						// branch -> 0x30230
					} else {
						// 0x301cc
						v11 = g24;
						// branch -> 0x30230
					}
					// 0x30230
					g40 = v11;
					ADD_PlrStringXY(95, 239, 126, (char *)&v4);
					g24 = 0;
					v40 = 0x55ec * *(int32_t *)g35;
					v93 = *(int32_t *)(g27 + v40);
					v77 = *(int32_t *)(g36 + v40 + 352);
					g38 = v77;
					if (v77 > v93) {
						// 0x30268
						g24 = 1;
						// branch -> 0x3026c
					}
					// 0x3026c
					if (v77 < v93) {
						// 0x30274
						g24 = 2;
						// branch -> 0x30278
					}
					// 0x30278
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 155, 173, (char *)&v4);
					g24 = 0;
					v41 = 0x55ec * *(int32_t *)g35;
					v94 = *(int32_t *)(g28 + v41);
					v78 = *(int32_t *)(g36 + v41 + 360);
					g38 = v78;
					if (v78 > v94) {
						// 0x302bc
						g24 = 1;
						// branch -> 0x302c0
					}
					// 0x302c0
					if (v78 < v94) {
						// 0x302c8
						g24 = 2;
						// branch -> 0x302cc
					}
					// 0x302cc
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 183, 173, (char *)&v4);
					g24 = 0;
					v42 = 0x55ec * *(int32_t *)g35;
					v95 = *(int32_t *)(g29 + v42);
					g38 = v95;
					v96 = *(int32_t *)(g26 + v42);
					if (v95 > v96) {
						// 0x3030c
						g24 = 1;
						// branch -> 0x30310
					}
					// 0x30310
					if (v95 < v96) {
						// 0x30318
						g24 = 2;
						// branch -> 0x3031c
					}
					// 0x3031c
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 211, 173, (char *)&v4);
					g24 = 0;
					v43 = 0x55ec * *(int32_t *)g35;
					v97 = *(int32_t *)(g25 + v43);
					v79 = *(int32_t *)(g36 + v43 + 376);
					g38 = v79;
					if (v79 > v97) {
						// 0x30360
						g24 = 1;
						// branch -> 0x30364
					}
					// 0x30364
					if (v79 < v97) {
						// 0x3036c
						g24 = 2;
						// branch -> 0x30370
					}
					// 0x30370
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 239, 173, (char *)&v4);
					v12 = g35;
					v63 = *(int32_t *)v12;
					v44 = g36 + 384;
					v3 = v44;
					v16 = v44;
					v15 = v12;
					if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
						// 0x303ac
						v45 = function_a33a4(v63);
						v13 = g35;
						v64 = *(int32_t *)v13;
						v14 = v3;
						if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
							// 0x303c4
							v46 = function_a33a4(v64);
							*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
							v16 = v3;
							v15 = g35;
							// branch -> 0x303d8
						} else {
							v16 = v14;
							v15 = v13;
						}
					}
					// 0x303d8
					v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
					g38 = v98;
					v26 = v15;
					if (v98 >= 1) {
						// 0x303ec
						g37 = g33;
						sprintf();
						g40 = 2;
						ADD_PlrStringXY(95, 266, 126, (char *)&v4);
						v17 = g35;
						v47 = 0x55ec * *(int32_t *)v17;
						v99 = *(char *)(g31 + v47);
						v100 = *(int32_t *)(g27 + v47);
						v65 = v99;
						g24 = v65;
						v18 = g32;
						v21 = v18;
						v20 = v65;
						v19 = v17;
						if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
							// 0x30434
							CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
							v21 = g32;
							v20 = g24;
							v19 = g35;
							// branch -> 0x30450
						}
						// 0x30450
						v48 = 16 * v20;
						g27 = v48;
						v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
						v49 = v48;
						v23 = v21;
						v22 = v19;
						if (v101 < *(int32_t *)(v48 + v21 + 4)) {
							// 0x30470
							CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
							v49 = g27;
							v23 = g32;
							v22 = g35;
							// branch -> 0x3048c
						}
						// 0x3048c
						v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
						v50 = v49;
						v25 = v23;
						v24 = v22;
						if (v102 < *(int32_t *)(v23 + v49 + 8)) {
							// 0x304a8
							CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
							v50 = g27;
							v25 = g32;
							v24 = g35;
							// branch -> 0x304c4
						}
						// 0x304c4
						v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
						if (v103 < *(int32_t *)(v25 + v50 + 12)) {
							// 0x304e0
							CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
							v26 = g35;
							// branch -> 0x304fc
						} else {
							v26 = v24;
						}
					}
					// 0x304fc
					v27 = g36;
					v51 = v27 + 408;
					g24 = v51;
					v52 = 0x55ec * *(int32_t *)v26;
					v104 = *(int32_t *)(v51 + v52);
					g25 = v104 > *(int32_t *)(v27 + v52 + 400);
					g37 = g33;
					g38 = v104 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(95, 304, 126, (char *)&v4);
					v53 = 0x55ec * *(int32_t *)g35;
					v80 = *(int32_t *)(g36 + v53 + 404);
					if (v80 != *(int32_t *)(g24 + v53)) {
						// 0x3056c
						g25 = 2;
						// branch -> 0x30570
					}
					// 0x30570
					g37 = g33;
					g38 = v80 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(143, 304, 174, (char *)&v4);
					v28 = g36;
					v54 = v28 + 428;
					g24 = v54;
					v55 = 0x55ec * *(int32_t *)g35;
					v105 = *(int32_t *)(v54 + v55);
					g25 = v105 > *(int32_t *)(v28 + v55 + 420);
					g37 = g33;
					g38 = v105 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(95, 332, 126, (char *)&v4);
					v56 = 0x55ec * *(int32_t *)g35;
					v81 = *(int32_t *)(g36 + v56 + 424);
					if (v81 != *(int32_t *)(g24 + v56)) {
						// 0x30608
						g25 = 2;
						// branch -> 0x3060c
					}
					// 0x3060c
					g37 = g33;
					g38 = v81 / 64;
					sprintf();
					g40 = g25;
					result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
					g10 = v1;
					return result;
				}
			}
			// 0x2ff48
			function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
			// branch -> 0x2ff84
			// 0x2ff84
			v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
			g24 = v74 != 0;
			g38 = v74;
			if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
				// 0x2ffc4
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x2ffd4
			} else {
				// 0x2ffb4
				g37 = g28;
				sprintf();
				// branch -> 0x2ffd4
			}
			// 0x2ffd4
			g40 = g24;
			ADD_PlrStringXY(257, 276, 300, (char *)&v4);
			v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
			g24 = v75 != 0;
			g38 = v75;
			if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
				// 0x3002c
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x3003c
			} else {
				// 0x3001c
				g37 = g28;
				sprintf();
				// branch -> 0x3003c
			}
			// 0x3003c
			g40 = g24;
			ADD_PlrStringXY(257, 304, 300, (char *)&v4);
			v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
			g24 = v76 != 0;
			g38 = v76;
			if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
				// 0x30094
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x300a4
			} else {
				// 0x30084
				g37 = g28;
				sprintf();
				// branch -> 0x300a4
			}
			// 0x300a4
			g40 = g24;
			ADD_PlrStringXY(257, 332, 300, (char *)&v4);
			g37 = g33;
			g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v34 = 0x55ec * *(int32_t *)g35;
			v85 = *(char *)(g31 + v34);
			v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
			if (*(int32_t *)(g27 + v34) == v86) {
				// 0x30100
				g24 = 3;
				v8 = 3;
				// branch -> 0x30104
			} else {
				// 0x300a4
				v8 = g24;
				// branch -> 0x30104
			}
			// 0x30104
			g40 = v8;
			ADD_PlrStringXY(95, 155, 126, (char *)&v4);
			v35 = g36 + 364;
			g28 = v35;
			g37 = g33;
			g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v36 = 0x55ec * *(int32_t *)g35;
			v87 = *(char *)(g31 + v36);
			v88 = *(int32_t *)(g28 + v36);
			if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
				// 0x30164
				g24 = 3;
				v9 = 3;
				// branch -> 0x30168
			} else {
				// 0x30104
				v9 = g24;
				// branch -> 0x30168
			}
			// 0x30168
			g40 = v9;
			ADD_PlrStringXY(95, 183, 126, (char *)&v4);
			g37 = g33;
			g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v37 = 0x55ec * *(int32_t *)g35;
			v89 = *(char *)(g31 + v37);
			v90 = *(int32_t *)(g26 + v37);
			if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
				// 0x301c8
				g24 = 3;
				v10 = 3;
				// branch -> 0x301cc
			} else {
				// 0x30168
				v10 = g24;
				// branch -> 0x301cc
			}
			// 0x301cc
			g40 = v10;
			ADD_PlrStringXY(95, 211, 126, (char *)&v4);
			v38 = g36 + 380;
			g25 = v38;
			g37 = g33;
			g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v39 = 0x55ec * *(int32_t *)g35;
			v91 = *(char *)(g31 + v39);
			v92 = *(int32_t *)(g25 + v39);
			if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
				// 0x3022c
				g24 = 3;
				v11 = 3;
				// branch -> 0x30230
			} else {
				// 0x301cc
				v11 = g24;
				// branch -> 0x30230
			}
			// 0x30230
			g40 = v11;
			ADD_PlrStringXY(95, 239, 126, (char *)&v4);
			g24 = 0;
			v40 = 0x55ec * *(int32_t *)g35;
			v93 = *(int32_t *)(g27 + v40);
			v77 = *(int32_t *)(g36 + v40 + 352);
			g38 = v77;
			if (v77 > v93) {
				// 0x30268
				g24 = 1;
				// branch -> 0x3026c
			}
			// 0x3026c
			if (v77 < v93) {
				// 0x30274
				g24 = 2;
				// branch -> 0x30278
			}
			// 0x30278
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 155, 173, (char *)&v4);
			g24 = 0;
			v41 = 0x55ec * *(int32_t *)g35;
			v94 = *(int32_t *)(g28 + v41);
			v78 = *(int32_t *)(g36 + v41 + 360);
			g38 = v78;
			if (v78 > v94) {
				// 0x302bc
				g24 = 1;
				// branch -> 0x302c0
			}
			// 0x302c0
			if (v78 < v94) {
				// 0x302c8
				g24 = 2;
				// branch -> 0x302cc
			}
			// 0x302cc
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 183, 173, (char *)&v4);
			g24 = 0;
			v42 = 0x55ec * *(int32_t *)g35;
			v95 = *(int32_t *)(g29 + v42);
			g38 = v95;
			v96 = *(int32_t *)(g26 + v42);
			if (v95 > v96) {
				// 0x3030c
				g24 = 1;
				// branch -> 0x30310
			}
			// 0x30310
			if (v95 < v96) {
				// 0x30318
				g24 = 2;
				// branch -> 0x3031c
			}
			// 0x3031c
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 211, 173, (char *)&v4);
			g24 = 0;
			v43 = 0x55ec * *(int32_t *)g35;
			v97 = *(int32_t *)(g25 + v43);
			v79 = *(int32_t *)(g36 + v43 + 376);
			g38 = v79;
			if (v79 > v97) {
				// 0x30360
				g24 = 1;
				// branch -> 0x30364
			}
			// 0x30364
			if (v79 < v97) {
				// 0x3036c
				g24 = 2;
				// branch -> 0x30370
			}
			// 0x30370
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 239, 173, (char *)&v4);
			v12 = g35;
			v63 = *(int32_t *)v12;
			v44 = g36 + 384;
			v3 = v44;
			v16 = v44;
			v15 = v12;
			if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
				// 0x303ac
				v45 = function_a33a4(v63);
				v13 = g35;
				v64 = *(int32_t *)v13;
				v14 = v3;
				if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
					// 0x303c4
					v46 = function_a33a4(v64);
					*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
					v16 = v3;
					v15 = g35;
					// branch -> 0x303d8
				} else {
					v16 = v14;
					v15 = v13;
				}
			}
			// 0x303d8
			v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
			g38 = v98;
			v26 = v15;
			if (v98 >= 1) {
				// 0x303ec
				g37 = g33;
				sprintf();
				g40 = 2;
				ADD_PlrStringXY(95, 266, 126, (char *)&v4);
				v17 = g35;
				v47 = 0x55ec * *(int32_t *)v17;
				v99 = *(char *)(g31 + v47);
				v100 = *(int32_t *)(g27 + v47);
				v65 = v99;
				g24 = v65;
				v18 = g32;
				v21 = v18;
				v20 = v65;
				v19 = v17;
				if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
					// 0x30434
					CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
					v21 = g32;
					v20 = g24;
					v19 = g35;
					// branch -> 0x30450
				}
				// 0x30450
				v48 = 16 * v20;
				g27 = v48;
				v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
				v49 = v48;
				v23 = v21;
				v22 = v19;
				if (v101 < *(int32_t *)(v48 + v21 + 4)) {
					// 0x30470
					CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
					v49 = g27;
					v23 = g32;
					v22 = g35;
					// branch -> 0x3048c
				}
				// 0x3048c
				v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
				v50 = v49;
				v25 = v23;
				v24 = v22;
				if (v102 < *(int32_t *)(v23 + v49 + 8)) {
					// 0x304a8
					CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
					v50 = g27;
					v25 = g32;
					v24 = g35;
					// branch -> 0x304c4
				}
				// 0x304c4
				v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
				if (v103 < *(int32_t *)(v25 + v50 + 12)) {
					// 0x304e0
					CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
					v26 = g35;
					// branch -> 0x304fc
				} else {
					v26 = v24;
				}
			}
			// 0x304fc
			v27 = g36;
			v51 = v27 + 408;
			g24 = v51;
			v52 = 0x55ec * *(int32_t *)v26;
			v104 = *(int32_t *)(v51 + v52);
			g25 = v104 > *(int32_t *)(v27 + v52 + 400);
			g37 = g33;
			g38 = v104 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(95, 304, 126, (char *)&v4);
			v53 = 0x55ec * *(int32_t *)g35;
			v80 = *(int32_t *)(g36 + v53 + 404);
			if (v80 != *(int32_t *)(g24 + v53)) {
				// 0x3056c
				g25 = 2;
				// branch -> 0x30570
			}
			// 0x30570
			g37 = g33;
			g38 = v80 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(143, 304, 174, (char *)&v4);
			v28 = g36;
			v54 = v28 + 428;
			g24 = v54;
			v55 = 0x55ec * *(int32_t *)g35;
			v105 = *(int32_t *)(v54 + v55);
			g25 = v105 > *(int32_t *)(v28 + v55 + 420);
			g37 = g33;
			g38 = v105 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(95, 332, 126, (char *)&v4);
			v56 = 0x55ec * *(int32_t *)g35;
			v81 = *(int32_t *)(g36 + v56 + 424);
			if (v81 != *(int32_t *)(g24 + v56)) {
				// 0x30608
				g25 = 2;
				// branch -> 0x3060c
			}
			// 0x3060c
			g37 = g33;
			g38 = v81 / 64;
			sprintf();
			g40 = g25;
			result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
			g10 = v1;
			return result;
		}
		// 0x2fef0
		if (*(char *)(g31 + v33) == 1) {
			// 0x2ff00
			// branch -> 0x2ff24
		}
		// 0x2ff24
		g37 = *(int32_t *)(g23 - 0x653c);
		g38 = v7;
		sprintf();
		if (g25 <= 99) {
			// 0x2ff40
			if (g26 < 100) {
				// 0x2ff68
				function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
				// branch -> 0x2ff84
				// 0x2ff84
				v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
				g24 = v74 != 0;
				g38 = v74;
				if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
					// 0x2ffc4
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x2ffd4
				} else {
					// 0x2ffb4
					g37 = g28;
					sprintf();
					// branch -> 0x2ffd4
				}
				// 0x2ffd4
				g40 = g24;
				ADD_PlrStringXY(257, 276, 300, (char *)&v4);
				v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
				g24 = v75 != 0;
				g38 = v75;
				if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
					// 0x3002c
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x3003c
				} else {
					// 0x3001c
					g37 = g28;
					sprintf();
					// branch -> 0x3003c
				}
				// 0x3003c
				g40 = g24;
				ADD_PlrStringXY(257, 304, 300, (char *)&v4);
				v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
				g24 = v76 != 0;
				g38 = v76;
				if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
					// 0x30094
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x300a4
				} else {
					// 0x30084
					g37 = g28;
					sprintf();
					// branch -> 0x300a4
				}
				// 0x300a4
				g40 = g24;
				ADD_PlrStringXY(257, 332, 300, (char *)&v4);
				g37 = g33;
				g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v34 = 0x55ec * *(int32_t *)g35;
				v85 = *(char *)(g31 + v34);
				v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
				if (*(int32_t *)(g27 + v34) == v86) {
					// 0x30100
					g24 = 3;
					v8 = 3;
					// branch -> 0x30104
				} else {
					// 0x300a4
					v8 = g24;
					// branch -> 0x30104
				}
				// 0x30104
				g40 = v8;
				ADD_PlrStringXY(95, 155, 126, (char *)&v4);
				v35 = g36 + 364;
				g28 = v35;
				g37 = g33;
				g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v36 = 0x55ec * *(int32_t *)g35;
				v87 = *(char *)(g31 + v36);
				v88 = *(int32_t *)(g28 + v36);
				if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
					// 0x30164
					g24 = 3;
					v9 = 3;
					// branch -> 0x30168
				} else {
					// 0x30104
					v9 = g24;
					// branch -> 0x30168
				}
				// 0x30168
				g40 = v9;
				ADD_PlrStringXY(95, 183, 126, (char *)&v4);
				g37 = g33;
				g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v37 = 0x55ec * *(int32_t *)g35;
				v89 = *(char *)(g31 + v37);
				v90 = *(int32_t *)(g26 + v37);
				if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
					// 0x301c8
					g24 = 3;
					v10 = 3;
					// branch -> 0x301cc
				} else {
					// 0x30168
					v10 = g24;
					// branch -> 0x301cc
				}
				// 0x301cc
				g40 = v10;
				ADD_PlrStringXY(95, 211, 126, (char *)&v4);
				v38 = g36 + 380;
				g25 = v38;
				g37 = g33;
				g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v39 = 0x55ec * *(int32_t *)g35;
				v91 = *(char *)(g31 + v39);
				v92 = *(int32_t *)(g25 + v39);
				if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
					// 0x3022c
					g24 = 3;
					v11 = 3;
					// branch -> 0x30230
				} else {
					// 0x301cc
					v11 = g24;
					// branch -> 0x30230
				}
				// 0x30230
				g40 = v11;
				ADD_PlrStringXY(95, 239, 126, (char *)&v4);
				g24 = 0;
				v40 = 0x55ec * *(int32_t *)g35;
				v93 = *(int32_t *)(g27 + v40);
				v77 = *(int32_t *)(g36 + v40 + 352);
				g38 = v77;
				if (v77 > v93) {
					// 0x30268
					g24 = 1;
					// branch -> 0x3026c
				}
				// 0x3026c
				if (v77 < v93) {
					// 0x30274
					g24 = 2;
					// branch -> 0x30278
				}
				// 0x30278
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 155, 173, (char *)&v4);
				g24 = 0;
				v41 = 0x55ec * *(int32_t *)g35;
				v94 = *(int32_t *)(g28 + v41);
				v78 = *(int32_t *)(g36 + v41 + 360);
				g38 = v78;
				if (v78 > v94) {
					// 0x302bc
					g24 = 1;
					// branch -> 0x302c0
				}
				// 0x302c0
				if (v78 < v94) {
					// 0x302c8
					g24 = 2;
					// branch -> 0x302cc
				}
				// 0x302cc
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 183, 173, (char *)&v4);
				g24 = 0;
				v42 = 0x55ec * *(int32_t *)g35;
				v95 = *(int32_t *)(g29 + v42);
				g38 = v95;
				v96 = *(int32_t *)(g26 + v42);
				if (v95 > v96) {
					// 0x3030c
					g24 = 1;
					// branch -> 0x30310
				}
				// 0x30310
				if (v95 < v96) {
					// 0x30318
					g24 = 2;
					// branch -> 0x3031c
				}
				// 0x3031c
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 211, 173, (char *)&v4);
				g24 = 0;
				v43 = 0x55ec * *(int32_t *)g35;
				v97 = *(int32_t *)(g25 + v43);
				v79 = *(int32_t *)(g36 + v43 + 376);
				g38 = v79;
				if (v79 > v97) {
					// 0x30360
					g24 = 1;
					// branch -> 0x30364
				}
				// 0x30364
				if (v79 < v97) {
					// 0x3036c
					g24 = 2;
					// branch -> 0x30370
				}
				// 0x30370
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 239, 173, (char *)&v4);
				v12 = g35;
				v63 = *(int32_t *)v12;
				v44 = g36 + 384;
				v3 = v44;
				v16 = v44;
				v15 = v12;
				if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
					// 0x303ac
					v45 = function_a33a4(v63);
					v13 = g35;
					v64 = *(int32_t *)v13;
					v14 = v3;
					if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
						// 0x303c4
						v46 = function_a33a4(v64);
						*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
						v16 = v3;
						v15 = g35;
						// branch -> 0x303d8
					} else {
						v16 = v14;
						v15 = v13;
					}
				}
				// 0x303d8
				v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
				g38 = v98;
				v26 = v15;
				if (v98 >= 1) {
					// 0x303ec
					g37 = g33;
					sprintf();
					g40 = 2;
					ADD_PlrStringXY(95, 266, 126, (char *)&v4);
					v17 = g35;
					v47 = 0x55ec * *(int32_t *)v17;
					v99 = *(char *)(g31 + v47);
					v100 = *(int32_t *)(g27 + v47);
					v65 = v99;
					g24 = v65;
					v18 = g32;
					v21 = v18;
					v20 = v65;
					v19 = v17;
					if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
						// 0x30434
						CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
						v21 = g32;
						v20 = g24;
						v19 = g35;
						// branch -> 0x30450
					}
					// 0x30450
					v48 = 16 * v20;
					g27 = v48;
					v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
					v49 = v48;
					v23 = v21;
					v22 = v19;
					if (v101 < *(int32_t *)(v48 + v21 + 4)) {
						// 0x30470
						CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
						v49 = g27;
						v23 = g32;
						v22 = g35;
						// branch -> 0x3048c
					}
					// 0x3048c
					v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
					v50 = v49;
					v25 = v23;
					v24 = v22;
					if (v102 < *(int32_t *)(v23 + v49 + 8)) {
						// 0x304a8
						CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
						v50 = g27;
						v25 = g32;
						v24 = g35;
						// branch -> 0x304c4
					}
					// 0x304c4
					v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
					if (v103 < *(int32_t *)(v25 + v50 + 12)) {
						// 0x304e0
						CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
						v26 = g35;
						// branch -> 0x304fc
					} else {
						v26 = v24;
					}
				}
				// 0x304fc
				v27 = g36;
				v51 = v27 + 408;
				g24 = v51;
				v52 = 0x55ec * *(int32_t *)v26;
				v104 = *(int32_t *)(v51 + v52);
				g25 = v104 > *(int32_t *)(v27 + v52 + 400);
				g37 = g33;
				g38 = v104 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(95, 304, 126, (char *)&v4);
				v53 = 0x55ec * *(int32_t *)g35;
				v80 = *(int32_t *)(g36 + v53 + 404);
				if (v80 != *(int32_t *)(g24 + v53)) {
					// 0x3056c
					g25 = 2;
					// branch -> 0x30570
				}
				// 0x30570
				g37 = g33;
				g38 = v80 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(143, 304, 174, (char *)&v4);
				v28 = g36;
				v54 = v28 + 428;
				g24 = v54;
				v55 = 0x55ec * *(int32_t *)g35;
				v105 = *(int32_t *)(v54 + v55);
				g25 = v105 > *(int32_t *)(v28 + v55 + 420);
				g37 = g33;
				g38 = v105 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(95, 332, 126, (char *)&v4);
				v56 = 0x55ec * *(int32_t *)g35;
				v81 = *(int32_t *)(g36 + v56 + 424);
				if (v81 != *(int32_t *)(g24 + v56)) {
					// 0x30608
					g25 = 2;
					// branch -> 0x3060c
				}
				// 0x3060c
				g37 = g33;
				g38 = v81 / 64;
				sprintf();
				g40 = g25;
				result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
				g10 = v1;
				return result;
			}
		}
		// 0x2ff48
		function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
		// branch -> 0x2ff84
		// 0x2ff84
		v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
		g24 = v74 != 0;
		g38 = v74;
		if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
			// 0x2ffc4
			g37 = g27;
			g24 = 3;
			sprintf();
			// branch -> 0x2ffd4
		} else {
			// 0x2ffb4
			g37 = g28;
			sprintf();
			// branch -> 0x2ffd4
		}
		// 0x2ffd4
		g40 = g24;
		ADD_PlrStringXY(257, 276, 300, (char *)&v4);
		v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
		g24 = v75 != 0;
		g38 = v75;
		if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
			// 0x3002c
			g37 = g27;
			g24 = 3;
			sprintf();
			// branch -> 0x3003c
		} else {
			// 0x3001c
			g37 = g28;
			sprintf();
			// branch -> 0x3003c
		}
		// 0x3003c
		g40 = g24;
		ADD_PlrStringXY(257, 304, 300, (char *)&v4);
		v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
		g24 = v76 != 0;
		g38 = v76;
		if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
			// 0x30094
			g37 = g27;
			g24 = 3;
			sprintf();
			// branch -> 0x300a4
		} else {
			// 0x30084
			g37 = g28;
			sprintf();
			// branch -> 0x300a4
		}
		// 0x300a4
		g40 = g24;
		ADD_PlrStringXY(257, 332, 300, (char *)&v4);
		g37 = g33;
		g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
		g24 = 0;
		sprintf();
		v34 = 0x55ec * *(int32_t *)g35;
		v85 = *(char *)(g31 + v34);
		v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
		if (*(int32_t *)(g27 + v34) == v86) {
			// 0x30100
			g24 = 3;
			v8 = 3;
			// branch -> 0x30104
		} else {
			// 0x300a4
			v8 = g24;
			// branch -> 0x30104
		}
		// 0x30104
		g40 = v8;
		ADD_PlrStringXY(95, 155, 126, (char *)&v4);
		v35 = g36 + 364;
		g28 = v35;
		g37 = g33;
		g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
		g24 = 0;
		sprintf();
		v36 = 0x55ec * *(int32_t *)g35;
		v87 = *(char *)(g31 + v36);
		v88 = *(int32_t *)(g28 + v36);
		if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
			// 0x30164
			g24 = 3;
			v9 = 3;
			// branch -> 0x30168
		} else {
			// 0x30104
			v9 = g24;
			// branch -> 0x30168
		}
		// 0x30168
		g40 = v9;
		ADD_PlrStringXY(95, 183, 126, (char *)&v4);
		g37 = g33;
		g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
		g24 = 0;
		sprintf();
		v37 = 0x55ec * *(int32_t *)g35;
		v89 = *(char *)(g31 + v37);
		v90 = *(int32_t *)(g26 + v37);
		if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
			// 0x301c8
			g24 = 3;
			v10 = 3;
			// branch -> 0x301cc
		} else {
			// 0x30168
			v10 = g24;
			// branch -> 0x301cc
		}
		// 0x301cc
		g40 = v10;
		ADD_PlrStringXY(95, 211, 126, (char *)&v4);
		v38 = g36 + 380;
		g25 = v38;
		g37 = g33;
		g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
		g24 = 0;
		sprintf();
		v39 = 0x55ec * *(int32_t *)g35;
		v91 = *(char *)(g31 + v39);
		v92 = *(int32_t *)(g25 + v39);
		if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
			// 0x3022c
			g24 = 3;
			v11 = 3;
			// branch -> 0x30230
		} else {
			// 0x301cc
			v11 = g24;
			// branch -> 0x30230
		}
		// 0x30230
		g40 = v11;
		ADD_PlrStringXY(95, 239, 126, (char *)&v4);
		g24 = 0;
		v40 = 0x55ec * *(int32_t *)g35;
		v93 = *(int32_t *)(g27 + v40);
		v77 = *(int32_t *)(g36 + v40 + 352);
		g38 = v77;
		if (v77 > v93) {
			// 0x30268
			g24 = 1;
			// branch -> 0x3026c
		}
		// 0x3026c
		if (v77 < v93) {
			// 0x30274
			g24 = 2;
			// branch -> 0x30278
		}
		// 0x30278
		g37 = g33;
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(143, 155, 173, (char *)&v4);
		g24 = 0;
		v41 = 0x55ec * *(int32_t *)g35;
		v94 = *(int32_t *)(g28 + v41);
		v78 = *(int32_t *)(g36 + v41 + 360);
		g38 = v78;
		if (v78 > v94) {
			// 0x302bc
			g24 = 1;
			// branch -> 0x302c0
		}
		// 0x302c0
		if (v78 < v94) {
			// 0x302c8
			g24 = 2;
			// branch -> 0x302cc
		}
		// 0x302cc
		g37 = g33;
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(143, 183, 173, (char *)&v4);
		g24 = 0;
		v42 = 0x55ec * *(int32_t *)g35;
		v95 = *(int32_t *)(g29 + v42);
		g38 = v95;
		v96 = *(int32_t *)(g26 + v42);
		if (v95 > v96) {
			// 0x3030c
			g24 = 1;
			// branch -> 0x30310
		}
		// 0x30310
		if (v95 < v96) {
			// 0x30318
			g24 = 2;
			// branch -> 0x3031c
		}
		// 0x3031c
		g37 = g33;
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(143, 211, 173, (char *)&v4);
		g24 = 0;
		v43 = 0x55ec * *(int32_t *)g35;
		v97 = *(int32_t *)(g25 + v43);
		v79 = *(int32_t *)(g36 + v43 + 376);
		g38 = v79;
		if (v79 > v97) {
			// 0x30360
			g24 = 1;
			// branch -> 0x30364
		}
		// 0x30364
		if (v79 < v97) {
			// 0x3036c
			g24 = 2;
			// branch -> 0x30370
		}
		// 0x30370
		g37 = g33;
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(143, 239, 173, (char *)&v4);
		v12 = g35;
		v63 = *(int32_t *)v12;
		v44 = g36 + 384;
		v3 = v44;
		v16 = v44;
		v15 = v12;
		if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
			// 0x303ac
			v45 = function_a33a4(v63);
			v13 = g35;
			v64 = *(int32_t *)v13;
			v14 = v3;
			if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
				// 0x303c4
				v46 = function_a33a4(v64);
				*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
				v16 = v3;
				v15 = g35;
				// branch -> 0x303d8
			} else {
				v16 = v14;
				v15 = v13;
			}
		}
		// 0x303d8
		v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
		g38 = v98;
		v26 = v15;
		if (v98 >= 1) {
			// 0x303ec
			g37 = g33;
			sprintf();
			g40 = 2;
			ADD_PlrStringXY(95, 266, 126, (char *)&v4);
			v17 = g35;
			v47 = 0x55ec * *(int32_t *)v17;
			v99 = *(char *)(g31 + v47);
			v100 = *(int32_t *)(g27 + v47);
			v65 = v99;
			g24 = v65;
			v18 = g32;
			v21 = v18;
			v20 = v65;
			v19 = v17;
			if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
				// 0x30434
				CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
				v21 = g32;
				v20 = g24;
				v19 = g35;
				// branch -> 0x30450
			}
			// 0x30450
			v48 = 16 * v20;
			g27 = v48;
			v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
			v49 = v48;
			v23 = v21;
			v22 = v19;
			if (v101 < *(int32_t *)(v48 + v21 + 4)) {
				// 0x30470
				CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
				v49 = g27;
				v23 = g32;
				v22 = g35;
				// branch -> 0x3048c
			}
			// 0x3048c
			v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
			v50 = v49;
			v25 = v23;
			v24 = v22;
			if (v102 < *(int32_t *)(v23 + v49 + 8)) {
				// 0x304a8
				CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
				v50 = g27;
				v25 = g32;
				v24 = g35;
				// branch -> 0x304c4
			}
			// 0x304c4
			v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
			if (v103 < *(int32_t *)(v25 + v50 + 12)) {
				// 0x304e0
				CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
				v26 = g35;
				// branch -> 0x304fc
			} else {
				v26 = v24;
			}
		}
		// 0x304fc
		v27 = g36;
		v51 = v27 + 408;
		g24 = v51;
		v52 = 0x55ec * *(int32_t *)v26;
		v104 = *(int32_t *)(v51 + v52);
		g25 = v104 > *(int32_t *)(v27 + v52 + 400);
		g37 = g33;
		g38 = v104 / 64;
		sprintf();
		g40 = g25;
		ADD_PlrStringXY(95, 304, 126, (char *)&v4);
		v53 = 0x55ec * *(int32_t *)g35;
		v80 = *(int32_t *)(g36 + v53 + 404);
		if (v80 != *(int32_t *)(g24 + v53)) {
			// 0x3056c
			g25 = 2;
			// branch -> 0x30570
		}
		// 0x30570
		g37 = g33;
		g38 = v80 / 64;
		sprintf();
		g40 = g25;
		ADD_PlrStringXY(143, 304, 174, (char *)&v4);
		v28 = g36;
		v54 = v28 + 428;
		g24 = v54;
		v55 = 0x55ec * *(int32_t *)g35;
		v105 = *(int32_t *)(v54 + v55);
		g25 = v105 > *(int32_t *)(v28 + v55 + 420);
		g37 = g33;
		g38 = v105 / 64;
		sprintf();
		g40 = g25;
		ADD_PlrStringXY(95, 332, 126, (char *)&v4);
		v56 = 0x55ec * *(int32_t *)g35;
		v81 = *(int32_t *)(g36 + v56 + 424);
		if (v81 != *(int32_t *)(g24 + v56)) {
			// 0x30608
			g25 = 2;
			// branch -> 0x3060c
		}
		// 0x3060c
		g37 = g33;
		g38 = v81 / 64;
		sprintf();
		g40 = g25;
		result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
		g10 = v1;
		return result;
	}
	// 0x2fd60
	g24 = 1;
	// branch -> 0x2fd6c
	// 0x2fd6c
	v67 = *(int32_t *)(v57 + 0x554c);
	v82 = 0x66666667 * (int64_t) * (int32_t *)(v6 + 368 + v31);
	g37 = g33;
	g38 = v67 + v66 + ((int32_t)(v82 / 0x100000000) & -0x80000000 | (int32_t)(v82 / 0x200000000)) + (int32_t)(v82 / 0x8000000000000000);
	sprintf();
	g40 = g24;
	ADD_PlrStringXY(258, 183, 301, (char *)&v4);
	g24 = 0;
	v32 = 0x55ec * *(int32_t *)g35;
	v68 = *(int32_t *)(g36 + v32 + 0x5554);
	if (v68 < 1) {
		// 0x2fde0
		if (v68 <= 0xffffffff) {
			// 0x2fde8
			g24 = 2;
			// branch -> 0x2fdec
		}
		// 0x2fdec
		v83 = *(int32_t *)(g29 + v32);
		g37 = g28;
		g38 = v68 + 50 + (v83 / 2 | v83 & -0x80000000);
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(258, 211, 301, (char *)&v4);
		g24 = 0;
		v33 = 0x55ec * *(int32_t *)g35;
		v58 = g36 + v33;
		v69 = *(int32_t *)(v58 + 0x5550);
		if (v69 < 1) {
			// 0x2fe40
			if (v69 <= 0xffffffff) {
				// 0x2fe48
				g24 = 2;
				// branch -> 0x2fe4c
			}
		} else {
			// 0x2fe40
			g24 = 1;
			// branch -> 0x2fe4c
		}
		// 0x2fe4c
		v70 = *(int32_t *)(v58 + 0x5544);
		v71 = *(int32_t *)(v58 + 2656);
		v72 = *(int32_t *)(v58 + 0x555c);
		v84 = 0x51eb851f * (int64_t)(v70 * v69);
		v106 = (int32_t)(v84 / 0x100000000) >> 31;
		v59 = (v106 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v106 < 0) + v70 + v72;
		if (v71 != 3) {
			// 0x2feb4
			v62 = *(int32_t *)(v58 + 388) + v59;
			g25 = v62;
			v7 = v62;
			// branch -> 0x2febc
			// 0x2febc
			if (v71 != 3) {
				// 0x2ff1c
				// branch -> 0x2ff24
				// 0x2ff24
				g37 = *(int32_t *)(g23 - 0x653c);
				g38 = v7;
				sprintf();
				if (g25 <= 99) {
					// 0x2ff40
					if (g26 < 100) {
						// 0x2ff68
						function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
						// branch -> 0x2ff84
						// 0x2ff84
						v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
						g24 = v74 != 0;
						g38 = v74;
						if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
							// 0x2ffc4
							g37 = g27;
							g24 = 3;
							sprintf();
							// branch -> 0x2ffd4
						} else {
							// 0x2ffb4
							g37 = g28;
							sprintf();
							// branch -> 0x2ffd4
						}
						// 0x2ffd4
						g40 = g24;
						ADD_PlrStringXY(257, 276, 300, (char *)&v4);
						v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
						g24 = v75 != 0;
						g38 = v75;
						if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
							// 0x3002c
							g37 = g27;
							g24 = 3;
							sprintf();
							// branch -> 0x3003c
						} else {
							// 0x3001c
							g37 = g28;
							sprintf();
							// branch -> 0x3003c
						}
						// 0x3003c
						g40 = g24;
						ADD_PlrStringXY(257, 304, 300, (char *)&v4);
						v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
						g24 = v76 != 0;
						g38 = v76;
						if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
							// 0x30094
							g37 = g27;
							g24 = 3;
							sprintf();
							// branch -> 0x300a4
						} else {
							// 0x30084
							g37 = g28;
							sprintf();
							// branch -> 0x300a4
						}
						// 0x300a4
						g40 = g24;
						ADD_PlrStringXY(257, 332, 300, (char *)&v4);
						g37 = g33;
						g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v34 = 0x55ec * *(int32_t *)g35;
						v85 = *(char *)(g31 + v34);
						v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
						if (*(int32_t *)(g27 + v34) == v86) {
							// 0x30100
							g24 = 3;
							v8 = 3;
							// branch -> 0x30104
						} else {
							// 0x300a4
							v8 = g24;
							// branch -> 0x30104
						}
						// 0x30104
						g40 = v8;
						ADD_PlrStringXY(95, 155, 126, (char *)&v4);
						v35 = g36 + 364;
						g28 = v35;
						g37 = g33;
						g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v36 = 0x55ec * *(int32_t *)g35;
						v87 = *(char *)(g31 + v36);
						v88 = *(int32_t *)(g28 + v36);
						if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
							// 0x30164
							g24 = 3;
							v9 = 3;
							// branch -> 0x30168
						} else {
							// 0x30104
							v9 = g24;
							// branch -> 0x30168
						}
						// 0x30168
						g40 = v9;
						ADD_PlrStringXY(95, 183, 126, (char *)&v4);
						g37 = g33;
						g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v37 = 0x55ec * *(int32_t *)g35;
						v89 = *(char *)(g31 + v37);
						v90 = *(int32_t *)(g26 + v37);
						if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
							// 0x301c8
							g24 = 3;
							v10 = 3;
							// branch -> 0x301cc
						} else {
							// 0x30168
							v10 = g24;
							// branch -> 0x301cc
						}
						// 0x301cc
						g40 = v10;
						ADD_PlrStringXY(95, 211, 126, (char *)&v4);
						v38 = g36 + 380;
						g25 = v38;
						g37 = g33;
						g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v39 = 0x55ec * *(int32_t *)g35;
						v91 = *(char *)(g31 + v39);
						v92 = *(int32_t *)(g25 + v39);
						if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
							// 0x3022c
							g24 = 3;
							v11 = 3;
							// branch -> 0x30230
						} else {
							// 0x301cc
							v11 = g24;
							// branch -> 0x30230
						}
						// 0x30230
						g40 = v11;
						ADD_PlrStringXY(95, 239, 126, (char *)&v4);
						g24 = 0;
						v40 = 0x55ec * *(int32_t *)g35;
						v93 = *(int32_t *)(g27 + v40);
						v77 = *(int32_t *)(g36 + v40 + 352);
						g38 = v77;
						if (v77 > v93) {
							// 0x30268
							g24 = 1;
							// branch -> 0x3026c
						}
						// 0x3026c
						if (v77 < v93) {
							// 0x30274
							g24 = 2;
							// branch -> 0x30278
						}
						// 0x30278
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 155, 173, (char *)&v4);
						g24 = 0;
						v41 = 0x55ec * *(int32_t *)g35;
						v94 = *(int32_t *)(g28 + v41);
						v78 = *(int32_t *)(g36 + v41 + 360);
						g38 = v78;
						if (v78 > v94) {
							// 0x302bc
							g24 = 1;
							// branch -> 0x302c0
						}
						// 0x302c0
						if (v78 < v94) {
							// 0x302c8
							g24 = 2;
							// branch -> 0x302cc
						}
						// 0x302cc
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 183, 173, (char *)&v4);
						g24 = 0;
						v42 = 0x55ec * *(int32_t *)g35;
						v95 = *(int32_t *)(g29 + v42);
						g38 = v95;
						v96 = *(int32_t *)(g26 + v42);
						if (v95 > v96) {
							// 0x3030c
							g24 = 1;
							// branch -> 0x30310
						}
						// 0x30310
						if (v95 < v96) {
							// 0x30318
							g24 = 2;
							// branch -> 0x3031c
						}
						// 0x3031c
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 211, 173, (char *)&v4);
						g24 = 0;
						v43 = 0x55ec * *(int32_t *)g35;
						v97 = *(int32_t *)(g25 + v43);
						v79 = *(int32_t *)(g36 + v43 + 376);
						g38 = v79;
						if (v79 > v97) {
							// 0x30360
							g24 = 1;
							// branch -> 0x30364
						}
						// 0x30364
						if (v79 < v97) {
							// 0x3036c
							g24 = 2;
							// branch -> 0x30370
						}
						// 0x30370
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 239, 173, (char *)&v4);
						v12 = g35;
						v63 = *(int32_t *)v12;
						v44 = g36 + 384;
						v3 = v44;
						v16 = v44;
						v15 = v12;
						if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
							// 0x303ac
							v45 = function_a33a4(v63);
							v13 = g35;
							v64 = *(int32_t *)v13;
							v14 = v3;
							if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
								// 0x303c4
								v46 = function_a33a4(v64);
								*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
								v16 = v3;
								v15 = g35;
								// branch -> 0x303d8
							} else {
								v16 = v14;
								v15 = v13;
							}
						}
						// 0x303d8
						v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
						g38 = v98;
						v26 = v15;
						if (v98 >= 1) {
							// 0x303ec
							g37 = g33;
							sprintf();
							g40 = 2;
							ADD_PlrStringXY(95, 266, 126, (char *)&v4);
							v17 = g35;
							v47 = 0x55ec * *(int32_t *)v17;
							v99 = *(char *)(g31 + v47);
							v100 = *(int32_t *)(g27 + v47);
							v65 = v99;
							g24 = v65;
							v18 = g32;
							v21 = v18;
							v20 = v65;
							v19 = v17;
							if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
								// 0x30434
								CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
								v21 = g32;
								v20 = g24;
								v19 = g35;
								// branch -> 0x30450
							}
							// 0x30450
							v48 = 16 * v20;
							g27 = v48;
							v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
							v49 = v48;
							v23 = v21;
							v22 = v19;
							if (v101 < *(int32_t *)(v48 + v21 + 4)) {
								// 0x30470
								CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
								v49 = g27;
								v23 = g32;
								v22 = g35;
								// branch -> 0x3048c
							}
							// 0x3048c
							v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
							v50 = v49;
							v25 = v23;
							v24 = v22;
							if (v102 < *(int32_t *)(v23 + v49 + 8)) {
								// 0x304a8
								CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
								v50 = g27;
								v25 = g32;
								v24 = g35;
								// branch -> 0x304c4
							}
							// 0x304c4
							v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
							if (v103 < *(int32_t *)(v25 + v50 + 12)) {
								// 0x304e0
								CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
								v26 = g35;
								// branch -> 0x304fc
							} else {
								v26 = v24;
							}
						}
						// 0x304fc
						v27 = g36;
						v51 = v27 + 408;
						g24 = v51;
						v52 = 0x55ec * *(int32_t *)v26;
						v104 = *(int32_t *)(v51 + v52);
						g25 = v104 > *(int32_t *)(v27 + v52 + 400);
						g37 = g33;
						g38 = v104 / 64;
						sprintf();
						g40 = g25;
						ADD_PlrStringXY(95, 304, 126, (char *)&v4);
						v53 = 0x55ec * *(int32_t *)g35;
						v80 = *(int32_t *)(g36 + v53 + 404);
						if (v80 != *(int32_t *)(g24 + v53)) {
							// 0x3056c
							g25 = 2;
							// branch -> 0x30570
						}
						// 0x30570
						g37 = g33;
						g38 = v80 / 64;
						sprintf();
						g40 = g25;
						ADD_PlrStringXY(143, 304, 174, (char *)&v4);
						v28 = g36;
						v54 = v28 + 428;
						g24 = v54;
						v55 = 0x55ec * *(int32_t *)g35;
						v105 = *(int32_t *)(v54 + v55);
						g25 = v105 > *(int32_t *)(v28 + v55 + 420);
						g37 = g33;
						g38 = v105 / 64;
						sprintf();
						g40 = g25;
						ADD_PlrStringXY(95, 332, 126, (char *)&v4);
						v56 = 0x55ec * *(int32_t *)g35;
						v81 = *(int32_t *)(g36 + v56 + 424);
						if (v81 != *(int32_t *)(g24 + v56)) {
							// 0x30608
							g25 = 2;
							// branch -> 0x3060c
						}
						// 0x3060c
						g37 = g33;
						g38 = v81 / 64;
						sprintf();
						g40 = g25;
						result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
						g10 = v1;
						return result;
					}
				}
				// 0x2ff48
				function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
				// branch -> 0x2ff84
				// 0x2ff84
				v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
				g24 = v74 != 0;
				g38 = v74;
				if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
					// 0x2ffc4
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x2ffd4
				} else {
					// 0x2ffb4
					g37 = g28;
					sprintf();
					// branch -> 0x2ffd4
				}
				// 0x2ffd4
				g40 = g24;
				ADD_PlrStringXY(257, 276, 300, (char *)&v4);
				v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
				g24 = v75 != 0;
				g38 = v75;
				if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
					// 0x3002c
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x3003c
				} else {
					// 0x3001c
					g37 = g28;
					sprintf();
					// branch -> 0x3003c
				}
				// 0x3003c
				g40 = g24;
				ADD_PlrStringXY(257, 304, 300, (char *)&v4);
				v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
				g24 = v76 != 0;
				g38 = v76;
				if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
					// 0x30094
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x300a4
				} else {
					// 0x30084
					g37 = g28;
					sprintf();
					// branch -> 0x300a4
				}
				// 0x300a4
				g40 = g24;
				ADD_PlrStringXY(257, 332, 300, (char *)&v4);
				g37 = g33;
				g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v34 = 0x55ec * *(int32_t *)g35;
				v85 = *(char *)(g31 + v34);
				v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
				if (*(int32_t *)(g27 + v34) == v86) {
					// 0x30100
					g24 = 3;
					v8 = 3;
					// branch -> 0x30104
				} else {
					// 0x300a4
					v8 = g24;
					// branch -> 0x30104
				}
				// 0x30104
				g40 = v8;
				ADD_PlrStringXY(95, 155, 126, (char *)&v4);
				v35 = g36 + 364;
				g28 = v35;
				g37 = g33;
				g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v36 = 0x55ec * *(int32_t *)g35;
				v87 = *(char *)(g31 + v36);
				v88 = *(int32_t *)(g28 + v36);
				if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
					// 0x30164
					g24 = 3;
					v9 = 3;
					// branch -> 0x30168
				} else {
					// 0x30104
					v9 = g24;
					// branch -> 0x30168
				}
				// 0x30168
				g40 = v9;
				ADD_PlrStringXY(95, 183, 126, (char *)&v4);
				g37 = g33;
				g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v37 = 0x55ec * *(int32_t *)g35;
				v89 = *(char *)(g31 + v37);
				v90 = *(int32_t *)(g26 + v37);
				if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
					// 0x301c8
					g24 = 3;
					v10 = 3;
					// branch -> 0x301cc
				} else {
					// 0x30168
					v10 = g24;
					// branch -> 0x301cc
				}
				// 0x301cc
				g40 = v10;
				ADD_PlrStringXY(95, 211, 126, (char *)&v4);
				v38 = g36 + 380;
				g25 = v38;
				g37 = g33;
				g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v39 = 0x55ec * *(int32_t *)g35;
				v91 = *(char *)(g31 + v39);
				v92 = *(int32_t *)(g25 + v39);
				if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
					// 0x3022c
					g24 = 3;
					v11 = 3;
					// branch -> 0x30230
				} else {
					// 0x301cc
					v11 = g24;
					// branch -> 0x30230
				}
				// 0x30230
				g40 = v11;
				ADD_PlrStringXY(95, 239, 126, (char *)&v4);
				g24 = 0;
				v40 = 0x55ec * *(int32_t *)g35;
				v93 = *(int32_t *)(g27 + v40);
				v77 = *(int32_t *)(g36 + v40 + 352);
				g38 = v77;
				if (v77 > v93) {
					// 0x30268
					g24 = 1;
					// branch -> 0x3026c
				}
				// 0x3026c
				if (v77 < v93) {
					// 0x30274
					g24 = 2;
					// branch -> 0x30278
				}
				// 0x30278
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 155, 173, (char *)&v4);
				g24 = 0;
				v41 = 0x55ec * *(int32_t *)g35;
				v94 = *(int32_t *)(g28 + v41);
				v78 = *(int32_t *)(g36 + v41 + 360);
				g38 = v78;
				if (v78 > v94) {
					// 0x302bc
					g24 = 1;
					// branch -> 0x302c0
				}
				// 0x302c0
				if (v78 < v94) {
					// 0x302c8
					g24 = 2;
					// branch -> 0x302cc
				}
				// 0x302cc
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 183, 173, (char *)&v4);
				g24 = 0;
				v42 = 0x55ec * *(int32_t *)g35;
				v95 = *(int32_t *)(g29 + v42);
				g38 = v95;
				v96 = *(int32_t *)(g26 + v42);
				if (v95 > v96) {
					// 0x3030c
					g24 = 1;
					// branch -> 0x30310
				}
				// 0x30310
				if (v95 < v96) {
					// 0x30318
					g24 = 2;
					// branch -> 0x3031c
				}
				// 0x3031c
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 211, 173, (char *)&v4);
				g24 = 0;
				v43 = 0x55ec * *(int32_t *)g35;
				v97 = *(int32_t *)(g25 + v43);
				v79 = *(int32_t *)(g36 + v43 + 376);
				g38 = v79;
				if (v79 > v97) {
					// 0x30360
					g24 = 1;
					// branch -> 0x30364
				}
				// 0x30364
				if (v79 < v97) {
					// 0x3036c
					g24 = 2;
					// branch -> 0x30370
				}
				// 0x30370
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 239, 173, (char *)&v4);
				v12 = g35;
				v63 = *(int32_t *)v12;
				v44 = g36 + 384;
				v3 = v44;
				v16 = v44;
				v15 = v12;
				if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
					// 0x303ac
					v45 = function_a33a4(v63);
					v13 = g35;
					v64 = *(int32_t *)v13;
					v14 = v3;
					if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
						// 0x303c4
						v46 = function_a33a4(v64);
						*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
						v16 = v3;
						v15 = g35;
						// branch -> 0x303d8
					} else {
						v16 = v14;
						v15 = v13;
					}
				}
				// 0x303d8
				v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
				g38 = v98;
				v26 = v15;
				if (v98 >= 1) {
					// 0x303ec
					g37 = g33;
					sprintf();
					g40 = 2;
					ADD_PlrStringXY(95, 266, 126, (char *)&v4);
					v17 = g35;
					v47 = 0x55ec * *(int32_t *)v17;
					v99 = *(char *)(g31 + v47);
					v100 = *(int32_t *)(g27 + v47);
					v65 = v99;
					g24 = v65;
					v18 = g32;
					v21 = v18;
					v20 = v65;
					v19 = v17;
					if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
						// 0x30434
						CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
						v21 = g32;
						v20 = g24;
						v19 = g35;
						// branch -> 0x30450
					}
					// 0x30450
					v48 = 16 * v20;
					g27 = v48;
					v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
					v49 = v48;
					v23 = v21;
					v22 = v19;
					if (v101 < *(int32_t *)(v48 + v21 + 4)) {
						// 0x30470
						CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
						v49 = g27;
						v23 = g32;
						v22 = g35;
						// branch -> 0x3048c
					}
					// 0x3048c
					v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
					v50 = v49;
					v25 = v23;
					v24 = v22;
					if (v102 < *(int32_t *)(v23 + v49 + 8)) {
						// 0x304a8
						CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
						v50 = g27;
						v25 = g32;
						v24 = g35;
						// branch -> 0x304c4
					}
					// 0x304c4
					v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
					if (v103 < *(int32_t *)(v25 + v50 + 12)) {
						// 0x304e0
						CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
						v26 = g35;
						// branch -> 0x304fc
					} else {
						v26 = v24;
					}
				}
				// 0x304fc
				v27 = g36;
				v51 = v27 + 408;
				g24 = v51;
				v52 = 0x55ec * *(int32_t *)v26;
				v104 = *(int32_t *)(v51 + v52);
				g25 = v104 > *(int32_t *)(v27 + v52 + 400);
				g37 = g33;
				g38 = v104 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(95, 304, 126, (char *)&v4);
				v53 = 0x55ec * *(int32_t *)g35;
				v80 = *(int32_t *)(g36 + v53 + 404);
				if (v80 != *(int32_t *)(g24 + v53)) {
					// 0x3056c
					g25 = 2;
					// branch -> 0x30570
				}
				// 0x30570
				g37 = g33;
				g38 = v80 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(143, 304, 174, (char *)&v4);
				v28 = g36;
				v54 = v28 + 428;
				g24 = v54;
				v55 = 0x55ec * *(int32_t *)g35;
				v105 = *(int32_t *)(v54 + v55);
				g25 = v105 > *(int32_t *)(v28 + v55 + 420);
				g37 = g33;
				g38 = v105 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(95, 332, 126, (char *)&v4);
				v56 = 0x55ec * *(int32_t *)g35;
				v81 = *(int32_t *)(g36 + v56 + 424);
				if (v81 != *(int32_t *)(g24 + v56)) {
					// 0x30608
					g25 = 2;
					// branch -> 0x3060c
				}
				// 0x3060c
				g37 = g33;
				g38 = v81 / 64;
				sprintf();
				g40 = g25;
				result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
				g10 = v1;
				return result;
			}
			// 0x2fef0
			if (*(char *)(g31 + v33) == 1) {
				// 0x2ff00
				// branch -> 0x2ff24
			}
			// 0x2ff24
			g37 = *(int32_t *)(g23 - 0x653c);
			g38 = v7;
			sprintf();
			if (g25 <= 99) {
				// 0x2ff40
				if (g26 < 100) {
					// 0x2ff68
					function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
					// branch -> 0x2ff84
					// 0x2ff84
					v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
					g24 = v74 != 0;
					g38 = v74;
					if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
						// 0x2ffc4
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x2ffd4
					} else {
						// 0x2ffb4
						g37 = g28;
						sprintf();
						// branch -> 0x2ffd4
					}
					// 0x2ffd4
					g40 = g24;
					ADD_PlrStringXY(257, 276, 300, (char *)&v4);
					v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
					g24 = v75 != 0;
					g38 = v75;
					if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
						// 0x3002c
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x3003c
					} else {
						// 0x3001c
						g37 = g28;
						sprintf();
						// branch -> 0x3003c
					}
					// 0x3003c
					g40 = g24;
					ADD_PlrStringXY(257, 304, 300, (char *)&v4);
					v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
					g24 = v76 != 0;
					g38 = v76;
					if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
						// 0x30094
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x300a4
					} else {
						// 0x30084
						g37 = g28;
						sprintf();
						// branch -> 0x300a4
					}
					// 0x300a4
					g40 = g24;
					ADD_PlrStringXY(257, 332, 300, (char *)&v4);
					g37 = g33;
					g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v34 = 0x55ec * *(int32_t *)g35;
					v85 = *(char *)(g31 + v34);
					v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
					if (*(int32_t *)(g27 + v34) == v86) {
						// 0x30100
						g24 = 3;
						v8 = 3;
						// branch -> 0x30104
					} else {
						// 0x300a4
						v8 = g24;
						// branch -> 0x30104
					}
					// 0x30104
					g40 = v8;
					ADD_PlrStringXY(95, 155, 126, (char *)&v4);
					v35 = g36 + 364;
					g28 = v35;
					g37 = g33;
					g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v36 = 0x55ec * *(int32_t *)g35;
					v87 = *(char *)(g31 + v36);
					v88 = *(int32_t *)(g28 + v36);
					if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
						// 0x30164
						g24 = 3;
						v9 = 3;
						// branch -> 0x30168
					} else {
						// 0x30104
						v9 = g24;
						// branch -> 0x30168
					}
					// 0x30168
					g40 = v9;
					ADD_PlrStringXY(95, 183, 126, (char *)&v4);
					g37 = g33;
					g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v37 = 0x55ec * *(int32_t *)g35;
					v89 = *(char *)(g31 + v37);
					v90 = *(int32_t *)(g26 + v37);
					if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
						// 0x301c8
						g24 = 3;
						v10 = 3;
						// branch -> 0x301cc
					} else {
						// 0x30168
						v10 = g24;
						// branch -> 0x301cc
					}
					// 0x301cc
					g40 = v10;
					ADD_PlrStringXY(95, 211, 126, (char *)&v4);
					v38 = g36 + 380;
					g25 = v38;
					g37 = g33;
					g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v39 = 0x55ec * *(int32_t *)g35;
					v91 = *(char *)(g31 + v39);
					v92 = *(int32_t *)(g25 + v39);
					if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
						// 0x3022c
						g24 = 3;
						v11 = 3;
						// branch -> 0x30230
					} else {
						// 0x301cc
						v11 = g24;
						// branch -> 0x30230
					}
					// 0x30230
					g40 = v11;
					ADD_PlrStringXY(95, 239, 126, (char *)&v4);
					g24 = 0;
					v40 = 0x55ec * *(int32_t *)g35;
					v93 = *(int32_t *)(g27 + v40);
					v77 = *(int32_t *)(g36 + v40 + 352);
					g38 = v77;
					if (v77 > v93) {
						// 0x30268
						g24 = 1;
						// branch -> 0x3026c
					}
					// 0x3026c
					if (v77 < v93) {
						// 0x30274
						g24 = 2;
						// branch -> 0x30278
					}
					// 0x30278
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 155, 173, (char *)&v4);
					g24 = 0;
					v41 = 0x55ec * *(int32_t *)g35;
					v94 = *(int32_t *)(g28 + v41);
					v78 = *(int32_t *)(g36 + v41 + 360);
					g38 = v78;
					if (v78 > v94) {
						// 0x302bc
						g24 = 1;
						// branch -> 0x302c0
					}
					// 0x302c0
					if (v78 < v94) {
						// 0x302c8
						g24 = 2;
						// branch -> 0x302cc
					}
					// 0x302cc
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 183, 173, (char *)&v4);
					g24 = 0;
					v42 = 0x55ec * *(int32_t *)g35;
					v95 = *(int32_t *)(g29 + v42);
					g38 = v95;
					v96 = *(int32_t *)(g26 + v42);
					if (v95 > v96) {
						// 0x3030c
						g24 = 1;
						// branch -> 0x30310
					}
					// 0x30310
					if (v95 < v96) {
						// 0x30318
						g24 = 2;
						// branch -> 0x3031c
					}
					// 0x3031c
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 211, 173, (char *)&v4);
					g24 = 0;
					v43 = 0x55ec * *(int32_t *)g35;
					v97 = *(int32_t *)(g25 + v43);
					v79 = *(int32_t *)(g36 + v43 + 376);
					g38 = v79;
					if (v79 > v97) {
						// 0x30360
						g24 = 1;
						// branch -> 0x30364
					}
					// 0x30364
					if (v79 < v97) {
						// 0x3036c
						g24 = 2;
						// branch -> 0x30370
					}
					// 0x30370
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 239, 173, (char *)&v4);
					v12 = g35;
					v63 = *(int32_t *)v12;
					v44 = g36 + 384;
					v3 = v44;
					v16 = v44;
					v15 = v12;
					if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
						// 0x303ac
						v45 = function_a33a4(v63);
						v13 = g35;
						v64 = *(int32_t *)v13;
						v14 = v3;
						if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
							// 0x303c4
							v46 = function_a33a4(v64);
							*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
							v16 = v3;
							v15 = g35;
							// branch -> 0x303d8
						} else {
							v16 = v14;
							v15 = v13;
						}
					}
					// 0x303d8
					v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
					g38 = v98;
					v26 = v15;
					if (v98 >= 1) {
						// 0x303ec
						g37 = g33;
						sprintf();
						g40 = 2;
						ADD_PlrStringXY(95, 266, 126, (char *)&v4);
						v17 = g35;
						v47 = 0x55ec * *(int32_t *)v17;
						v99 = *(char *)(g31 + v47);
						v100 = *(int32_t *)(g27 + v47);
						v65 = v99;
						g24 = v65;
						v18 = g32;
						v21 = v18;
						v20 = v65;
						v19 = v17;
						if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
							// 0x30434
							CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
							v21 = g32;
							v20 = g24;
							v19 = g35;
							// branch -> 0x30450
						}
						// 0x30450
						v48 = 16 * v20;
						g27 = v48;
						v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
						v49 = v48;
						v23 = v21;
						v22 = v19;
						if (v101 < *(int32_t *)(v48 + v21 + 4)) {
							// 0x30470
							CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
							v49 = g27;
							v23 = g32;
							v22 = g35;
							// branch -> 0x3048c
						}
						// 0x3048c
						v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
						v50 = v49;
						v25 = v23;
						v24 = v22;
						if (v102 < *(int32_t *)(v23 + v49 + 8)) {
							// 0x304a8
							CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
							v50 = g27;
							v25 = g32;
							v24 = g35;
							// branch -> 0x304c4
						}
						// 0x304c4
						v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
						if (v103 < *(int32_t *)(v25 + v50 + 12)) {
							// 0x304e0
							CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
							v26 = g35;
							// branch -> 0x304fc
						} else {
							v26 = v24;
						}
					}
					// 0x304fc
					v27 = g36;
					v51 = v27 + 408;
					g24 = v51;
					v52 = 0x55ec * *(int32_t *)v26;
					v104 = *(int32_t *)(v51 + v52);
					g25 = v104 > *(int32_t *)(v27 + v52 + 400);
					g37 = g33;
					g38 = v104 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(95, 304, 126, (char *)&v4);
					v53 = 0x55ec * *(int32_t *)g35;
					v80 = *(int32_t *)(g36 + v53 + 404);
					if (v80 != *(int32_t *)(g24 + v53)) {
						// 0x3056c
						g25 = 2;
						// branch -> 0x30570
					}
					// 0x30570
					g37 = g33;
					g38 = v80 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(143, 304, 174, (char *)&v4);
					v28 = g36;
					v54 = v28 + 428;
					g24 = v54;
					v55 = 0x55ec * *(int32_t *)g35;
					v105 = *(int32_t *)(v54 + v55);
					g25 = v105 > *(int32_t *)(v28 + v55 + 420);
					g37 = g33;
					g38 = v105 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(95, 332, 126, (char *)&v4);
					v56 = 0x55ec * *(int32_t *)g35;
					v81 = *(int32_t *)(g36 + v56 + 424);
					if (v81 != *(int32_t *)(g24 + v56)) {
						// 0x30608
						g25 = 2;
						// branch -> 0x3060c
					}
					// 0x3060c
					g37 = g33;
					g38 = v81 / 64;
					sprintf();
					g40 = g25;
					result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
					g10 = v1;
					return result;
				}
			}
			// 0x2ff48
			function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
			// branch -> 0x2ff84
			// 0x2ff84
			v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
			g24 = v74 != 0;
			g38 = v74;
			if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
				// 0x2ffc4
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x2ffd4
			} else {
				// 0x2ffb4
				g37 = g28;
				sprintf();
				// branch -> 0x2ffd4
			}
			// 0x2ffd4
			g40 = g24;
			ADD_PlrStringXY(257, 276, 300, (char *)&v4);
			v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
			g24 = v75 != 0;
			g38 = v75;
			if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
				// 0x3002c
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x3003c
			} else {
				// 0x3001c
				g37 = g28;
				sprintf();
				// branch -> 0x3003c
			}
			// 0x3003c
			g40 = g24;
			ADD_PlrStringXY(257, 304, 300, (char *)&v4);
			v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
			g24 = v76 != 0;
			g38 = v76;
			if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
				// 0x30094
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x300a4
			} else {
				// 0x30084
				g37 = g28;
				sprintf();
				// branch -> 0x300a4
			}
			// 0x300a4
			g40 = g24;
			ADD_PlrStringXY(257, 332, 300, (char *)&v4);
			g37 = g33;
			g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v34 = 0x55ec * *(int32_t *)g35;
			v85 = *(char *)(g31 + v34);
			v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
			if (*(int32_t *)(g27 + v34) == v86) {
				// 0x30100
				g24 = 3;
				v8 = 3;
				// branch -> 0x30104
			} else {
				// 0x300a4
				v8 = g24;
				// branch -> 0x30104
			}
			// 0x30104
			g40 = v8;
			ADD_PlrStringXY(95, 155, 126, (char *)&v4);
			v35 = g36 + 364;
			g28 = v35;
			g37 = g33;
			g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v36 = 0x55ec * *(int32_t *)g35;
			v87 = *(char *)(g31 + v36);
			v88 = *(int32_t *)(g28 + v36);
			if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
				// 0x30164
				g24 = 3;
				v9 = 3;
				// branch -> 0x30168
			} else {
				// 0x30104
				v9 = g24;
				// branch -> 0x30168
			}
			// 0x30168
			g40 = v9;
			ADD_PlrStringXY(95, 183, 126, (char *)&v4);
			g37 = g33;
			g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v37 = 0x55ec * *(int32_t *)g35;
			v89 = *(char *)(g31 + v37);
			v90 = *(int32_t *)(g26 + v37);
			if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
				// 0x301c8
				g24 = 3;
				v10 = 3;
				// branch -> 0x301cc
			} else {
				// 0x30168
				v10 = g24;
				// branch -> 0x301cc
			}
			// 0x301cc
			g40 = v10;
			ADD_PlrStringXY(95, 211, 126, (char *)&v4);
			v38 = g36 + 380;
			g25 = v38;
			g37 = g33;
			g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v39 = 0x55ec * *(int32_t *)g35;
			v91 = *(char *)(g31 + v39);
			v92 = *(int32_t *)(g25 + v39);
			if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
				// 0x3022c
				g24 = 3;
				v11 = 3;
				// branch -> 0x30230
			} else {
				// 0x301cc
				v11 = g24;
				// branch -> 0x30230
			}
			// 0x30230
			g40 = v11;
			ADD_PlrStringXY(95, 239, 126, (char *)&v4);
			g24 = 0;
			v40 = 0x55ec * *(int32_t *)g35;
			v93 = *(int32_t *)(g27 + v40);
			v77 = *(int32_t *)(g36 + v40 + 352);
			g38 = v77;
			if (v77 > v93) {
				// 0x30268
				g24 = 1;
				// branch -> 0x3026c
			}
			// 0x3026c
			if (v77 < v93) {
				// 0x30274
				g24 = 2;
				// branch -> 0x30278
			}
			// 0x30278
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 155, 173, (char *)&v4);
			g24 = 0;
			v41 = 0x55ec * *(int32_t *)g35;
			v94 = *(int32_t *)(g28 + v41);
			v78 = *(int32_t *)(g36 + v41 + 360);
			g38 = v78;
			if (v78 > v94) {
				// 0x302bc
				g24 = 1;
				// branch -> 0x302c0
			}
			// 0x302c0
			if (v78 < v94) {
				// 0x302c8
				g24 = 2;
				// branch -> 0x302cc
			}
			// 0x302cc
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 183, 173, (char *)&v4);
			g24 = 0;
			v42 = 0x55ec * *(int32_t *)g35;
			v95 = *(int32_t *)(g29 + v42);
			g38 = v95;
			v96 = *(int32_t *)(g26 + v42);
			if (v95 > v96) {
				// 0x3030c
				g24 = 1;
				// branch -> 0x30310
			}
			// 0x30310
			if (v95 < v96) {
				// 0x30318
				g24 = 2;
				// branch -> 0x3031c
			}
			// 0x3031c
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 211, 173, (char *)&v4);
			g24 = 0;
			v43 = 0x55ec * *(int32_t *)g35;
			v97 = *(int32_t *)(g25 + v43);
			v79 = *(int32_t *)(g36 + v43 + 376);
			g38 = v79;
			if (v79 > v97) {
				// 0x30360
				g24 = 1;
				// branch -> 0x30364
			}
			// 0x30364
			if (v79 < v97) {
				// 0x3036c
				g24 = 2;
				// branch -> 0x30370
			}
			// 0x30370
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 239, 173, (char *)&v4);
			v12 = g35;
			v63 = *(int32_t *)v12;
			v44 = g36 + 384;
			v3 = v44;
			v16 = v44;
			v15 = v12;
			if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
				// 0x303ac
				v45 = function_a33a4(v63);
				v13 = g35;
				v64 = *(int32_t *)v13;
				v14 = v3;
				if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
					// 0x303c4
					v46 = function_a33a4(v64);
					*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
					v16 = v3;
					v15 = g35;
					// branch -> 0x303d8
				} else {
					v16 = v14;
					v15 = v13;
				}
			}
			// 0x303d8
			v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
			g38 = v98;
			v26 = v15;
			if (v98 >= 1) {
				// 0x303ec
				g37 = g33;
				sprintf();
				g40 = 2;
				ADD_PlrStringXY(95, 266, 126, (char *)&v4);
				v17 = g35;
				v47 = 0x55ec * *(int32_t *)v17;
				v99 = *(char *)(g31 + v47);
				v100 = *(int32_t *)(g27 + v47);
				v65 = v99;
				g24 = v65;
				v18 = g32;
				v21 = v18;
				v20 = v65;
				v19 = v17;
				if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
					// 0x30434
					CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
					v21 = g32;
					v20 = g24;
					v19 = g35;
					// branch -> 0x30450
				}
				// 0x30450
				v48 = 16 * v20;
				g27 = v48;
				v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
				v49 = v48;
				v23 = v21;
				v22 = v19;
				if (v101 < *(int32_t *)(v48 + v21 + 4)) {
					// 0x30470
					CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
					v49 = g27;
					v23 = g32;
					v22 = g35;
					// branch -> 0x3048c
				}
				// 0x3048c
				v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
				v50 = v49;
				v25 = v23;
				v24 = v22;
				if (v102 < *(int32_t *)(v23 + v49 + 8)) {
					// 0x304a8
					CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
					v50 = g27;
					v25 = g32;
					v24 = g35;
					// branch -> 0x304c4
				}
				// 0x304c4
				v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
				if (v103 < *(int32_t *)(v25 + v50 + 12)) {
					// 0x304e0
					CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
					v26 = g35;
					// branch -> 0x304fc
				} else {
					v26 = v24;
				}
			}
			// 0x304fc
			v27 = g36;
			v51 = v27 + 408;
			g24 = v51;
			v52 = 0x55ec * *(int32_t *)v26;
			v104 = *(int32_t *)(v51 + v52);
			g25 = v104 > *(int32_t *)(v27 + v52 + 400);
			g37 = g33;
			g38 = v104 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(95, 304, 126, (char *)&v4);
			v53 = 0x55ec * *(int32_t *)g35;
			v80 = *(int32_t *)(g36 + v53 + 404);
			if (v80 != *(int32_t *)(g24 + v53)) {
				// 0x3056c
				g25 = 2;
				// branch -> 0x30570
			}
			// 0x30570
			g37 = g33;
			g38 = v80 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(143, 304, 174, (char *)&v4);
			v28 = g36;
			v54 = v28 + 428;
			g24 = v54;
			v55 = 0x55ec * *(int32_t *)g35;
			v105 = *(int32_t *)(v54 + v55);
			g25 = v105 > *(int32_t *)(v28 + v55 + 420);
			g37 = g33;
			g38 = v105 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(95, 332, 126, (char *)&v4);
			v56 = 0x55ec * *(int32_t *)g35;
			v81 = *(int32_t *)(g36 + v56 + 424);
			if (v81 != *(int32_t *)(g24 + v56)) {
				// 0x30608
				g25 = 2;
				// branch -> 0x3060c
			}
			// 0x3060c
			g37 = g33;
			g38 = v81 / 64;
			sprintf();
			g40 = g25;
			result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
			g10 = v1;
			return result;
		}
		// 0x2fe88
		v73 = *(int32_t *)(v58 + 388);
		if (*(char *)(g31 + v33) == 1) {
			// 0x2fe98
			v60 = v73 + v59;
			g25 = v60;
			v7 = v60;
			// branch -> 0x2febc
		} else {
			// 0x2fea4
			v61 = (v73 / 2 | v73 & -0x80000000) + v59;
			g25 = v61;
			v7 = v61;
			// branch -> 0x2febc
		}
		// 0x2febc
		if (v71 != 3) {
			// 0x2ff1c
			// branch -> 0x2ff24
			// 0x2ff24
			g37 = *(int32_t *)(g23 - 0x653c);
			g38 = v7;
			sprintf();
			if (g25 <= 99) {
				// 0x2ff40
				if (g26 < 100) {
					// 0x2ff68
					function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
					// branch -> 0x2ff84
					// 0x2ff84
					v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
					g24 = v74 != 0;
					g38 = v74;
					if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
						// 0x2ffc4
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x2ffd4
					} else {
						// 0x2ffb4
						g37 = g28;
						sprintf();
						// branch -> 0x2ffd4
					}
					// 0x2ffd4
					g40 = g24;
					ADD_PlrStringXY(257, 276, 300, (char *)&v4);
					v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
					g24 = v75 != 0;
					g38 = v75;
					if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
						// 0x3002c
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x3003c
					} else {
						// 0x3001c
						g37 = g28;
						sprintf();
						// branch -> 0x3003c
					}
					// 0x3003c
					g40 = g24;
					ADD_PlrStringXY(257, 304, 300, (char *)&v4);
					v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
					g24 = v76 != 0;
					g38 = v76;
					if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
						// 0x30094
						g37 = g27;
						g24 = 3;
						sprintf();
						// branch -> 0x300a4
					} else {
						// 0x30084
						g37 = g28;
						sprintf();
						// branch -> 0x300a4
					}
					// 0x300a4
					g40 = g24;
					ADD_PlrStringXY(257, 332, 300, (char *)&v4);
					g37 = g33;
					g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v34 = 0x55ec * *(int32_t *)g35;
					v85 = *(char *)(g31 + v34);
					v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
					if (*(int32_t *)(g27 + v34) == v86) {
						// 0x30100
						g24 = 3;
						v8 = 3;
						// branch -> 0x30104
					} else {
						// 0x300a4
						v8 = g24;
						// branch -> 0x30104
					}
					// 0x30104
					g40 = v8;
					ADD_PlrStringXY(95, 155, 126, (char *)&v4);
					v35 = g36 + 364;
					g28 = v35;
					g37 = g33;
					g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v36 = 0x55ec * *(int32_t *)g35;
					v87 = *(char *)(g31 + v36);
					v88 = *(int32_t *)(g28 + v36);
					if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
						// 0x30164
						g24 = 3;
						v9 = 3;
						// branch -> 0x30168
					} else {
						// 0x30104
						v9 = g24;
						// branch -> 0x30168
					}
					// 0x30168
					g40 = v9;
					ADD_PlrStringXY(95, 183, 126, (char *)&v4);
					g37 = g33;
					g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v37 = 0x55ec * *(int32_t *)g35;
					v89 = *(char *)(g31 + v37);
					v90 = *(int32_t *)(g26 + v37);
					if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
						// 0x301c8
						g24 = 3;
						v10 = 3;
						// branch -> 0x301cc
					} else {
						// 0x30168
						v10 = g24;
						// branch -> 0x301cc
					}
					// 0x301cc
					g40 = v10;
					ADD_PlrStringXY(95, 211, 126, (char *)&v4);
					v38 = g36 + 380;
					g25 = v38;
					g37 = g33;
					g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
					g24 = 0;
					sprintf();
					v39 = 0x55ec * *(int32_t *)g35;
					v91 = *(char *)(g31 + v39);
					v92 = *(int32_t *)(g25 + v39);
					if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
						// 0x3022c
						g24 = 3;
						v11 = 3;
						// branch -> 0x30230
					} else {
						// 0x301cc
						v11 = g24;
						// branch -> 0x30230
					}
					// 0x30230
					g40 = v11;
					ADD_PlrStringXY(95, 239, 126, (char *)&v4);
					g24 = 0;
					v40 = 0x55ec * *(int32_t *)g35;
					v93 = *(int32_t *)(g27 + v40);
					v77 = *(int32_t *)(g36 + v40 + 352);
					g38 = v77;
					if (v77 > v93) {
						// 0x30268
						g24 = 1;
						// branch -> 0x3026c
					}
					// 0x3026c
					if (v77 < v93) {
						// 0x30274
						g24 = 2;
						// branch -> 0x30278
					}
					// 0x30278
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 155, 173, (char *)&v4);
					g24 = 0;
					v41 = 0x55ec * *(int32_t *)g35;
					v94 = *(int32_t *)(g28 + v41);
					v78 = *(int32_t *)(g36 + v41 + 360);
					g38 = v78;
					if (v78 > v94) {
						// 0x302bc
						g24 = 1;
						// branch -> 0x302c0
					}
					// 0x302c0
					if (v78 < v94) {
						// 0x302c8
						g24 = 2;
						// branch -> 0x302cc
					}
					// 0x302cc
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 183, 173, (char *)&v4);
					g24 = 0;
					v42 = 0x55ec * *(int32_t *)g35;
					v95 = *(int32_t *)(g29 + v42);
					g38 = v95;
					v96 = *(int32_t *)(g26 + v42);
					if (v95 > v96) {
						// 0x3030c
						g24 = 1;
						// branch -> 0x30310
					}
					// 0x30310
					if (v95 < v96) {
						// 0x30318
						g24 = 2;
						// branch -> 0x3031c
					}
					// 0x3031c
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 211, 173, (char *)&v4);
					g24 = 0;
					v43 = 0x55ec * *(int32_t *)g35;
					v97 = *(int32_t *)(g25 + v43);
					v79 = *(int32_t *)(g36 + v43 + 376);
					g38 = v79;
					if (v79 > v97) {
						// 0x30360
						g24 = 1;
						// branch -> 0x30364
					}
					// 0x30364
					if (v79 < v97) {
						// 0x3036c
						g24 = 2;
						// branch -> 0x30370
					}
					// 0x30370
					g37 = g33;
					sprintf();
					g40 = g24;
					ADD_PlrStringXY(143, 239, 173, (char *)&v4);
					v12 = g35;
					v63 = *(int32_t *)v12;
					v44 = g36 + 384;
					v3 = v44;
					v16 = v44;
					v15 = v12;
					if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
						// 0x303ac
						v45 = function_a33a4(v63);
						v13 = g35;
						v64 = *(int32_t *)v13;
						v14 = v3;
						if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
							// 0x303c4
							v46 = function_a33a4(v64);
							*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
							v16 = v3;
							v15 = g35;
							// branch -> 0x303d8
						} else {
							v16 = v14;
							v15 = v13;
						}
					}
					// 0x303d8
					v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
					g38 = v98;
					v26 = v15;
					if (v98 >= 1) {
						// 0x303ec
						g37 = g33;
						sprintf();
						g40 = 2;
						ADD_PlrStringXY(95, 266, 126, (char *)&v4);
						v17 = g35;
						v47 = 0x55ec * *(int32_t *)v17;
						v99 = *(char *)(g31 + v47);
						v100 = *(int32_t *)(g27 + v47);
						v65 = v99;
						g24 = v65;
						v18 = g32;
						v21 = v18;
						v20 = v65;
						v19 = v17;
						if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
							// 0x30434
							CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
							v21 = g32;
							v20 = g24;
							v19 = g35;
							// branch -> 0x30450
						}
						// 0x30450
						v48 = 16 * v20;
						g27 = v48;
						v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
						v49 = v48;
						v23 = v21;
						v22 = v19;
						if (v101 < *(int32_t *)(v48 + v21 + 4)) {
							// 0x30470
							CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
							v49 = g27;
							v23 = g32;
							v22 = g35;
							// branch -> 0x3048c
						}
						// 0x3048c
						v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
						v50 = v49;
						v25 = v23;
						v24 = v22;
						if (v102 < *(int32_t *)(v23 + v49 + 8)) {
							// 0x304a8
							CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
							v50 = g27;
							v25 = g32;
							v24 = g35;
							// branch -> 0x304c4
						}
						// 0x304c4
						v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
						if (v103 < *(int32_t *)(v25 + v50 + 12)) {
							// 0x304e0
							CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
							v26 = g35;
							// branch -> 0x304fc
						} else {
							v26 = v24;
						}
					}
					// 0x304fc
					v27 = g36;
					v51 = v27 + 408;
					g24 = v51;
					v52 = 0x55ec * *(int32_t *)v26;
					v104 = *(int32_t *)(v51 + v52);
					g25 = v104 > *(int32_t *)(v27 + v52 + 400);
					g37 = g33;
					g38 = v104 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(95, 304, 126, (char *)&v4);
					v53 = 0x55ec * *(int32_t *)g35;
					v80 = *(int32_t *)(g36 + v53 + 404);
					if (v80 != *(int32_t *)(g24 + v53)) {
						// 0x3056c
						g25 = 2;
						// branch -> 0x30570
					}
					// 0x30570
					g37 = g33;
					g38 = v80 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(143, 304, 174, (char *)&v4);
					v28 = g36;
					v54 = v28 + 428;
					g24 = v54;
					v55 = 0x55ec * *(int32_t *)g35;
					v105 = *(int32_t *)(v54 + v55);
					g25 = v105 > *(int32_t *)(v28 + v55 + 420);
					g37 = g33;
					g38 = v105 / 64;
					sprintf();
					g40 = g25;
					ADD_PlrStringXY(95, 332, 126, (char *)&v4);
					v56 = 0x55ec * *(int32_t *)g35;
					v81 = *(int32_t *)(g36 + v56 + 424);
					if (v81 != *(int32_t *)(g24 + v56)) {
						// 0x30608
						g25 = 2;
						// branch -> 0x3060c
					}
					// 0x3060c
					g37 = g33;
					g38 = v81 / 64;
					sprintf();
					g40 = g25;
					result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
					g10 = v1;
					return result;
				}
			}
			// 0x2ff48
			function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
			// branch -> 0x2ff84
			// 0x2ff84
			v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
			g24 = v74 != 0;
			g38 = v74;
			if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
				// 0x2ffc4
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x2ffd4
			} else {
				// 0x2ffb4
				g37 = g28;
				sprintf();
				// branch -> 0x2ffd4
			}
			// 0x2ffd4
			g40 = g24;
			ADD_PlrStringXY(257, 276, 300, (char *)&v4);
			v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
			g24 = v75 != 0;
			g38 = v75;
			if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
				// 0x3002c
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x3003c
			} else {
				// 0x3001c
				g37 = g28;
				sprintf();
				// branch -> 0x3003c
			}
			// 0x3003c
			g40 = g24;
			ADD_PlrStringXY(257, 304, 300, (char *)&v4);
			v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
			g24 = v76 != 0;
			g38 = v76;
			if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
				// 0x30094
				g37 = g27;
				g24 = 3;
				sprintf();
				// branch -> 0x300a4
			} else {
				// 0x30084
				g37 = g28;
				sprintf();
				// branch -> 0x300a4
			}
			// 0x300a4
			g40 = g24;
			ADD_PlrStringXY(257, 332, 300, (char *)&v4);
			g37 = g33;
			g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v34 = 0x55ec * *(int32_t *)g35;
			v85 = *(char *)(g31 + v34);
			v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
			if (*(int32_t *)(g27 + v34) == v86) {
				// 0x30100
				g24 = 3;
				v8 = 3;
				// branch -> 0x30104
			} else {
				// 0x300a4
				v8 = g24;
				// branch -> 0x30104
			}
			// 0x30104
			g40 = v8;
			ADD_PlrStringXY(95, 155, 126, (char *)&v4);
			v35 = g36 + 364;
			g28 = v35;
			g37 = g33;
			g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v36 = 0x55ec * *(int32_t *)g35;
			v87 = *(char *)(g31 + v36);
			v88 = *(int32_t *)(g28 + v36);
			if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
				// 0x30164
				g24 = 3;
				v9 = 3;
				// branch -> 0x30168
			} else {
				// 0x30104
				v9 = g24;
				// branch -> 0x30168
			}
			// 0x30168
			g40 = v9;
			ADD_PlrStringXY(95, 183, 126, (char *)&v4);
			g37 = g33;
			g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v37 = 0x55ec * *(int32_t *)g35;
			v89 = *(char *)(g31 + v37);
			v90 = *(int32_t *)(g26 + v37);
			if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
				// 0x301c8
				g24 = 3;
				v10 = 3;
				// branch -> 0x301cc
			} else {
				// 0x30168
				v10 = g24;
				// branch -> 0x301cc
			}
			// 0x301cc
			g40 = v10;
			ADD_PlrStringXY(95, 211, 126, (char *)&v4);
			v38 = g36 + 380;
			g25 = v38;
			g37 = g33;
			g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
			g24 = 0;
			sprintf();
			v39 = 0x55ec * *(int32_t *)g35;
			v91 = *(char *)(g31 + v39);
			v92 = *(int32_t *)(g25 + v39);
			if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
				// 0x3022c
				g24 = 3;
				v11 = 3;
				// branch -> 0x30230
			} else {
				// 0x301cc
				v11 = g24;
				// branch -> 0x30230
			}
			// 0x30230
			g40 = v11;
			ADD_PlrStringXY(95, 239, 126, (char *)&v4);
			g24 = 0;
			v40 = 0x55ec * *(int32_t *)g35;
			v93 = *(int32_t *)(g27 + v40);
			v77 = *(int32_t *)(g36 + v40 + 352);
			g38 = v77;
			if (v77 > v93) {
				// 0x30268
				g24 = 1;
				// branch -> 0x3026c
			}
			// 0x3026c
			if (v77 < v93) {
				// 0x30274
				g24 = 2;
				// branch -> 0x30278
			}
			// 0x30278
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 155, 173, (char *)&v4);
			g24 = 0;
			v41 = 0x55ec * *(int32_t *)g35;
			v94 = *(int32_t *)(g28 + v41);
			v78 = *(int32_t *)(g36 + v41 + 360);
			g38 = v78;
			if (v78 > v94) {
				// 0x302bc
				g24 = 1;
				// branch -> 0x302c0
			}
			// 0x302c0
			if (v78 < v94) {
				// 0x302c8
				g24 = 2;
				// branch -> 0x302cc
			}
			// 0x302cc
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 183, 173, (char *)&v4);
			g24 = 0;
			v42 = 0x55ec * *(int32_t *)g35;
			v95 = *(int32_t *)(g29 + v42);
			g38 = v95;
			v96 = *(int32_t *)(g26 + v42);
			if (v95 > v96) {
				// 0x3030c
				g24 = 1;
				// branch -> 0x30310
			}
			// 0x30310
			if (v95 < v96) {
				// 0x30318
				g24 = 2;
				// branch -> 0x3031c
			}
			// 0x3031c
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 211, 173, (char *)&v4);
			g24 = 0;
			v43 = 0x55ec * *(int32_t *)g35;
			v97 = *(int32_t *)(g25 + v43);
			v79 = *(int32_t *)(g36 + v43 + 376);
			g38 = v79;
			if (v79 > v97) {
				// 0x30360
				g24 = 1;
				// branch -> 0x30364
			}
			// 0x30364
			if (v79 < v97) {
				// 0x3036c
				g24 = 2;
				// branch -> 0x30370
			}
			// 0x30370
			g37 = g33;
			sprintf();
			g40 = g24;
			ADD_PlrStringXY(143, 239, 173, (char *)&v4);
			v12 = g35;
			v63 = *(int32_t *)v12;
			v44 = g36 + 384;
			v3 = v44;
			v16 = v44;
			v15 = v12;
			if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
				// 0x303ac
				v45 = function_a33a4(v63);
				v13 = g35;
				v64 = *(int32_t *)v13;
				v14 = v3;
				if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
					// 0x303c4
					v46 = function_a33a4(v64);
					*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
					v16 = v3;
					v15 = g35;
					// branch -> 0x303d8
				} else {
					v16 = v14;
					v15 = v13;
				}
			}
			// 0x303d8
			v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
			g38 = v98;
			v26 = v15;
			if (v98 >= 1) {
				// 0x303ec
				g37 = g33;
				sprintf();
				g40 = 2;
				ADD_PlrStringXY(95, 266, 126, (char *)&v4);
				v17 = g35;
				v47 = 0x55ec * *(int32_t *)v17;
				v99 = *(char *)(g31 + v47);
				v100 = *(int32_t *)(g27 + v47);
				v65 = v99;
				g24 = v65;
				v18 = g32;
				v21 = v18;
				v20 = v65;
				v19 = v17;
				if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
					// 0x30434
					CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
					v21 = g32;
					v20 = g24;
					v19 = g35;
					// branch -> 0x30450
				}
				// 0x30450
				v48 = 16 * v20;
				g27 = v48;
				v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
				v49 = v48;
				v23 = v21;
				v22 = v19;
				if (v101 < *(int32_t *)(v48 + v21 + 4)) {
					// 0x30470
					CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
					v49 = g27;
					v23 = g32;
					v22 = g35;
					// branch -> 0x3048c
				}
				// 0x3048c
				v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
				v50 = v49;
				v25 = v23;
				v24 = v22;
				if (v102 < *(int32_t *)(v23 + v49 + 8)) {
					// 0x304a8
					CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
					v50 = g27;
					v25 = g32;
					v24 = g35;
					// branch -> 0x304c4
				}
				// 0x304c4
				v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
				if (v103 < *(int32_t *)(v25 + v50 + 12)) {
					// 0x304e0
					CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
					v26 = g35;
					// branch -> 0x304fc
				} else {
					v26 = v24;
				}
			}
			// 0x304fc
			v27 = g36;
			v51 = v27 + 408;
			g24 = v51;
			v52 = 0x55ec * *(int32_t *)v26;
			v104 = *(int32_t *)(v51 + v52);
			g25 = v104 > *(int32_t *)(v27 + v52 + 400);
			g37 = g33;
			g38 = v104 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(95, 304, 126, (char *)&v4);
			v53 = 0x55ec * *(int32_t *)g35;
			v80 = *(int32_t *)(g36 + v53 + 404);
			if (v80 != *(int32_t *)(g24 + v53)) {
				// 0x3056c
				g25 = 2;
				// branch -> 0x30570
			}
			// 0x30570
			g37 = g33;
			g38 = v80 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(143, 304, 174, (char *)&v4);
			v28 = g36;
			v54 = v28 + 428;
			g24 = v54;
			v55 = 0x55ec * *(int32_t *)g35;
			v105 = *(int32_t *)(v54 + v55);
			g25 = v105 > *(int32_t *)(v28 + v55 + 420);
			g37 = g33;
			g38 = v105 / 64;
			sprintf();
			g40 = g25;
			ADD_PlrStringXY(95, 332, 126, (char *)&v4);
			v56 = 0x55ec * *(int32_t *)g35;
			v81 = *(int32_t *)(g36 + v56 + 424);
			if (v81 != *(int32_t *)(g24 + v56)) {
				// 0x30608
				g25 = 2;
				// branch -> 0x3060c
			}
			// 0x3060c
			g37 = g33;
			g38 = v81 / 64;
			sprintf();
			g40 = g25;
			result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
			g10 = v1;
			return result;
		}
		// 0x2fef0
		if (*(char *)(g31 + v33) == 1) {
			// 0x2ff00
			// branch -> 0x2ff24
		}
		// 0x2ff24
		g37 = *(int32_t *)(g23 - 0x653c);
		g38 = v7;
		sprintf();
		if (g25 <= 99) {
			// 0x2ff40
			if (g26 < 100) {
				// 0x2ff68
				function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
				// branch -> 0x2ff84
				// 0x2ff84
				v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
				g24 = v74 != 0;
				g38 = v74;
				if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
					// 0x2ffc4
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x2ffd4
				} else {
					// 0x2ffb4
					g37 = g28;
					sprintf();
					// branch -> 0x2ffd4
				}
				// 0x2ffd4
				g40 = g24;
				ADD_PlrStringXY(257, 276, 300, (char *)&v4);
				v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
				g24 = v75 != 0;
				g38 = v75;
				if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
					// 0x3002c
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x3003c
				} else {
					// 0x3001c
					g37 = g28;
					sprintf();
					// branch -> 0x3003c
				}
				// 0x3003c
				g40 = g24;
				ADD_PlrStringXY(257, 304, 300, (char *)&v4);
				v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
				g24 = v76 != 0;
				g38 = v76;
				if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
					// 0x30094
					g37 = g27;
					g24 = 3;
					sprintf();
					// branch -> 0x300a4
				} else {
					// 0x30084
					g37 = g28;
					sprintf();
					// branch -> 0x300a4
				}
				// 0x300a4
				g40 = g24;
				ADD_PlrStringXY(257, 332, 300, (char *)&v4);
				g37 = g33;
				g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v34 = 0x55ec * *(int32_t *)g35;
				v85 = *(char *)(g31 + v34);
				v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
				if (*(int32_t *)(g27 + v34) == v86) {
					// 0x30100
					g24 = 3;
					v8 = 3;
					// branch -> 0x30104
				} else {
					// 0x300a4
					v8 = g24;
					// branch -> 0x30104
				}
				// 0x30104
				g40 = v8;
				ADD_PlrStringXY(95, 155, 126, (char *)&v4);
				v35 = g36 + 364;
				g28 = v35;
				g37 = g33;
				g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v36 = 0x55ec * *(int32_t *)g35;
				v87 = *(char *)(g31 + v36);
				v88 = *(int32_t *)(g28 + v36);
				if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
					// 0x30164
					g24 = 3;
					v9 = 3;
					// branch -> 0x30168
				} else {
					// 0x30104
					v9 = g24;
					// branch -> 0x30168
				}
				// 0x30168
				g40 = v9;
				ADD_PlrStringXY(95, 183, 126, (char *)&v4);
				g37 = g33;
				g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v37 = 0x55ec * *(int32_t *)g35;
				v89 = *(char *)(g31 + v37);
				v90 = *(int32_t *)(g26 + v37);
				if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
					// 0x301c8
					g24 = 3;
					v10 = 3;
					// branch -> 0x301cc
				} else {
					// 0x30168
					v10 = g24;
					// branch -> 0x301cc
				}
				// 0x301cc
				g40 = v10;
				ADD_PlrStringXY(95, 211, 126, (char *)&v4);
				v38 = g36 + 380;
				g25 = v38;
				g37 = g33;
				g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
				g24 = 0;
				sprintf();
				v39 = 0x55ec * *(int32_t *)g35;
				v91 = *(char *)(g31 + v39);
				v92 = *(int32_t *)(g25 + v39);
				if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
					// 0x3022c
					g24 = 3;
					v11 = 3;
					// branch -> 0x30230
				} else {
					// 0x301cc
					v11 = g24;
					// branch -> 0x30230
				}
				// 0x30230
				g40 = v11;
				ADD_PlrStringXY(95, 239, 126, (char *)&v4);
				g24 = 0;
				v40 = 0x55ec * *(int32_t *)g35;
				v93 = *(int32_t *)(g27 + v40);
				v77 = *(int32_t *)(g36 + v40 + 352);
				g38 = v77;
				if (v77 > v93) {
					// 0x30268
					g24 = 1;
					// branch -> 0x3026c
				}
				// 0x3026c
				if (v77 < v93) {
					// 0x30274
					g24 = 2;
					// branch -> 0x30278
				}
				// 0x30278
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 155, 173, (char *)&v4);
				g24 = 0;
				v41 = 0x55ec * *(int32_t *)g35;
				v94 = *(int32_t *)(g28 + v41);
				v78 = *(int32_t *)(g36 + v41 + 360);
				g38 = v78;
				if (v78 > v94) {
					// 0x302bc
					g24 = 1;
					// branch -> 0x302c0
				}
				// 0x302c0
				if (v78 < v94) {
					// 0x302c8
					g24 = 2;
					// branch -> 0x302cc
				}
				// 0x302cc
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 183, 173, (char *)&v4);
				g24 = 0;
				v42 = 0x55ec * *(int32_t *)g35;
				v95 = *(int32_t *)(g29 + v42);
				g38 = v95;
				v96 = *(int32_t *)(g26 + v42);
				if (v95 > v96) {
					// 0x3030c
					g24 = 1;
					// branch -> 0x30310
				}
				// 0x30310
				if (v95 < v96) {
					// 0x30318
					g24 = 2;
					// branch -> 0x3031c
				}
				// 0x3031c
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 211, 173, (char *)&v4);
				g24 = 0;
				v43 = 0x55ec * *(int32_t *)g35;
				v97 = *(int32_t *)(g25 + v43);
				v79 = *(int32_t *)(g36 + v43 + 376);
				g38 = v79;
				if (v79 > v97) {
					// 0x30360
					g24 = 1;
					// branch -> 0x30364
				}
				// 0x30364
				if (v79 < v97) {
					// 0x3036c
					g24 = 2;
					// branch -> 0x30370
				}
				// 0x30370
				g37 = g33;
				sprintf();
				g40 = g24;
				ADD_PlrStringXY(143, 239, 173, (char *)&v4);
				v12 = g35;
				v63 = *(int32_t *)v12;
				v44 = g36 + 384;
				v3 = v44;
				v16 = v44;
				v15 = v12;
				if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
					// 0x303ac
					v45 = function_a33a4(v63);
					v13 = g35;
					v64 = *(int32_t *)v13;
					v14 = v3;
					if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
						// 0x303c4
						v46 = function_a33a4(v64);
						*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
						v16 = v3;
						v15 = g35;
						// branch -> 0x303d8
					} else {
						v16 = v14;
						v15 = v13;
					}
				}
				// 0x303d8
				v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
				g38 = v98;
				v26 = v15;
				if (v98 >= 1) {
					// 0x303ec
					g37 = g33;
					sprintf();
					g40 = 2;
					ADD_PlrStringXY(95, 266, 126, (char *)&v4);
					v17 = g35;
					v47 = 0x55ec * *(int32_t *)v17;
					v99 = *(char *)(g31 + v47);
					v100 = *(int32_t *)(g27 + v47);
					v65 = v99;
					g24 = v65;
					v18 = g32;
					v21 = v18;
					v20 = v65;
					v19 = v17;
					if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
						// 0x30434
						CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
						v21 = g32;
						v20 = g24;
						v19 = g35;
						// branch -> 0x30450
					}
					// 0x30450
					v48 = 16 * v20;
					g27 = v48;
					v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
					v49 = v48;
					v23 = v21;
					v22 = v19;
					if (v101 < *(int32_t *)(v48 + v21 + 4)) {
						// 0x30470
						CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
						v49 = g27;
						v23 = g32;
						v22 = g35;
						// branch -> 0x3048c
					}
					// 0x3048c
					v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
					v50 = v49;
					v25 = v23;
					v24 = v22;
					if (v102 < *(int32_t *)(v23 + v49 + 8)) {
						// 0x304a8
						CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
						v50 = g27;
						v25 = g32;
						v24 = g35;
						// branch -> 0x304c4
					}
					// 0x304c4
					v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
					if (v103 < *(int32_t *)(v25 + v50 + 12)) {
						// 0x304e0
						CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
						v26 = g35;
						// branch -> 0x304fc
					} else {
						v26 = v24;
					}
				}
				// 0x304fc
				v27 = g36;
				v51 = v27 + 408;
				g24 = v51;
				v52 = 0x55ec * *(int32_t *)v26;
				v104 = *(int32_t *)(v51 + v52);
				g25 = v104 > *(int32_t *)(v27 + v52 + 400);
				g37 = g33;
				g38 = v104 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(95, 304, 126, (char *)&v4);
				v53 = 0x55ec * *(int32_t *)g35;
				v80 = *(int32_t *)(g36 + v53 + 404);
				if (v80 != *(int32_t *)(g24 + v53)) {
					// 0x3056c
					g25 = 2;
					// branch -> 0x30570
				}
				// 0x30570
				g37 = g33;
				g38 = v80 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(143, 304, 174, (char *)&v4);
				v28 = g36;
				v54 = v28 + 428;
				g24 = v54;
				v55 = 0x55ec * *(int32_t *)g35;
				v105 = *(int32_t *)(v54 + v55);
				g25 = v105 > *(int32_t *)(v28 + v55 + 420);
				g37 = g33;
				g38 = v105 / 64;
				sprintf();
				g40 = g25;
				ADD_PlrStringXY(95, 332, 126, (char *)&v4);
				v56 = 0x55ec * *(int32_t *)g35;
				v81 = *(int32_t *)(g36 + v56 + 424);
				if (v81 != *(int32_t *)(g24 + v56)) {
					// 0x30608
					g25 = 2;
					// branch -> 0x3060c
				}
				// 0x3060c
				g37 = g33;
				g38 = v81 / 64;
				sprintf();
				g40 = g25;
				result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
				g10 = v1;
				return result;
			}
		}
		// 0x2ff48
		function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
		// branch -> 0x2ff84
		// 0x2ff84
		v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
		g24 = v74 != 0;
		g38 = v74;
		if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
			// 0x2ffc4
			g37 = g27;
			g24 = 3;
			sprintf();
			// branch -> 0x2ffd4
		} else {
			// 0x2ffb4
			g37 = g28;
			sprintf();
			// branch -> 0x2ffd4
		}
		// 0x2ffd4
		g40 = g24;
		ADD_PlrStringXY(257, 276, 300, (char *)&v4);
		v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
		g24 = v75 != 0;
		g38 = v75;
		if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
			// 0x3002c
			g37 = g27;
			g24 = 3;
			sprintf();
			// branch -> 0x3003c
		} else {
			// 0x3001c
			g37 = g28;
			sprintf();
			// branch -> 0x3003c
		}
		// 0x3003c
		g40 = g24;
		ADD_PlrStringXY(257, 304, 300, (char *)&v4);
		v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
		g24 = v76 != 0;
		g38 = v76;
		if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
			// 0x30094
			g37 = g27;
			g24 = 3;
			sprintf();
			// branch -> 0x300a4
		} else {
			// 0x30084
			g37 = g28;
			sprintf();
			// branch -> 0x300a4
		}
		// 0x300a4
		g40 = g24;
		ADD_PlrStringXY(257, 332, 300, (char *)&v4);
		g37 = g33;
		g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
		g24 = 0;
		sprintf();
		v34 = 0x55ec * *(int32_t *)g35;
		v85 = *(char *)(g31 + v34);
		v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
		if (*(int32_t *)(g27 + v34) == v86) {
			// 0x30100
			g24 = 3;
			v8 = 3;
			// branch -> 0x30104
		} else {
			// 0x300a4
			v8 = g24;
			// branch -> 0x30104
		}
		// 0x30104
		g40 = v8;
		ADD_PlrStringXY(95, 155, 126, (char *)&v4);
		v35 = g36 + 364;
		g28 = v35;
		g37 = g33;
		g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
		g24 = 0;
		sprintf();
		v36 = 0x55ec * *(int32_t *)g35;
		v87 = *(char *)(g31 + v36);
		v88 = *(int32_t *)(g28 + v36);
		if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
			// 0x30164
			g24 = 3;
			v9 = 3;
			// branch -> 0x30168
		} else {
			// 0x30104
			v9 = g24;
			// branch -> 0x30168
		}
		// 0x30168
		g40 = v9;
		ADD_PlrStringXY(95, 183, 126, (char *)&v4);
		g37 = g33;
		g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
		g24 = 0;
		sprintf();
		v37 = 0x55ec * *(int32_t *)g35;
		v89 = *(char *)(g31 + v37);
		v90 = *(int32_t *)(g26 + v37);
		if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
			// 0x301c8
			g24 = 3;
			v10 = 3;
			// branch -> 0x301cc
		} else {
			// 0x30168
			v10 = g24;
			// branch -> 0x301cc
		}
		// 0x301cc
		g40 = v10;
		ADD_PlrStringXY(95, 211, 126, (char *)&v4);
		v38 = g36 + 380;
		g25 = v38;
		g37 = g33;
		g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
		g24 = 0;
		sprintf();
		v39 = 0x55ec * *(int32_t *)g35;
		v91 = *(char *)(g31 + v39);
		v92 = *(int32_t *)(g25 + v39);
		if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
			// 0x3022c
			g24 = 3;
			v11 = 3;
			// branch -> 0x30230
		} else {
			// 0x301cc
			v11 = g24;
			// branch -> 0x30230
		}
		// 0x30230
		g40 = v11;
		ADD_PlrStringXY(95, 239, 126, (char *)&v4);
		g24 = 0;
		v40 = 0x55ec * *(int32_t *)g35;
		v93 = *(int32_t *)(g27 + v40);
		v77 = *(int32_t *)(g36 + v40 + 352);
		g38 = v77;
		if (v77 > v93) {
			// 0x30268
			g24 = 1;
			// branch -> 0x3026c
		}
		// 0x3026c
		if (v77 < v93) {
			// 0x30274
			g24 = 2;
			// branch -> 0x30278
		}
		// 0x30278
		g37 = g33;
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(143, 155, 173, (char *)&v4);
		g24 = 0;
		v41 = 0x55ec * *(int32_t *)g35;
		v94 = *(int32_t *)(g28 + v41);
		v78 = *(int32_t *)(g36 + v41 + 360);
		g38 = v78;
		if (v78 > v94) {
			// 0x302bc
			g24 = 1;
			// branch -> 0x302c0
		}
		// 0x302c0
		if (v78 < v94) {
			// 0x302c8
			g24 = 2;
			// branch -> 0x302cc
		}
		// 0x302cc
		g37 = g33;
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(143, 183, 173, (char *)&v4);
		g24 = 0;
		v42 = 0x55ec * *(int32_t *)g35;
		v95 = *(int32_t *)(g29 + v42);
		g38 = v95;
		v96 = *(int32_t *)(g26 + v42);
		if (v95 > v96) {
			// 0x3030c
			g24 = 1;
			// branch -> 0x30310
		}
		// 0x30310
		if (v95 < v96) {
			// 0x30318
			g24 = 2;
			// branch -> 0x3031c
		}
		// 0x3031c
		g37 = g33;
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(143, 211, 173, (char *)&v4);
		g24 = 0;
		v43 = 0x55ec * *(int32_t *)g35;
		v97 = *(int32_t *)(g25 + v43);
		v79 = *(int32_t *)(g36 + v43 + 376);
		g38 = v79;
		if (v79 > v97) {
			// 0x30360
			g24 = 1;
			// branch -> 0x30364
		}
		// 0x30364
		if (v79 < v97) {
			// 0x3036c
			g24 = 2;
			// branch -> 0x30370
		}
		// 0x30370
		g37 = g33;
		sprintf();
		g40 = g24;
		ADD_PlrStringXY(143, 239, 173, (char *)&v4);
		v12 = g35;
		v63 = *(int32_t *)v12;
		v44 = g36 + 384;
		v3 = v44;
		v16 = v44;
		v15 = v12;
		if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
			// 0x303ac
			v45 = function_a33a4(v63);
			v13 = g35;
			v64 = *(int32_t *)v13;
			v14 = v3;
			if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
				// 0x303c4
				v46 = function_a33a4(v64);
				*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
				v16 = v3;
				v15 = g35;
				// branch -> 0x303d8
			} else {
				v16 = v14;
				v15 = v13;
			}
		}
		// 0x303d8
		v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
		g38 = v98;
		v26 = v15;
		if (v98 >= 1) {
			// 0x303ec
			g37 = g33;
			sprintf();
			g40 = 2;
			ADD_PlrStringXY(95, 266, 126, (char *)&v4);
			v17 = g35;
			v47 = 0x55ec * *(int32_t *)v17;
			v99 = *(char *)(g31 + v47);
			v100 = *(int32_t *)(g27 + v47);
			v65 = v99;
			g24 = v65;
			v18 = g32;
			v21 = v18;
			v20 = v65;
			v19 = v17;
			if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
				// 0x30434
				CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
				v21 = g32;
				v20 = g24;
				v19 = g35;
				// branch -> 0x30450
			}
			// 0x30450
			v48 = 16 * v20;
			g27 = v48;
			v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
			v49 = v48;
			v23 = v21;
			v22 = v19;
			if (v101 < *(int32_t *)(v48 + v21 + 4)) {
				// 0x30470
				CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
				v49 = g27;
				v23 = g32;
				v22 = g35;
				// branch -> 0x3048c
			}
			// 0x3048c
			v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
			v50 = v49;
			v25 = v23;
			v24 = v22;
			if (v102 < *(int32_t *)(v23 + v49 + 8)) {
				// 0x304a8
				CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
				v50 = g27;
				v25 = g32;
				v24 = g35;
				// branch -> 0x304c4
			}
			// 0x304c4
			v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
			if (v103 < *(int32_t *)(v25 + v50 + 12)) {
				// 0x304e0
				CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
				v26 = g35;
				// branch -> 0x304fc
			} else {
				v26 = v24;
			}
		}
		// 0x304fc
		v27 = g36;
		v51 = v27 + 408;
		g24 = v51;
		v52 = 0x55ec * *(int32_t *)v26;
		v104 = *(int32_t *)(v51 + v52);
		g25 = v104 > *(int32_t *)(v27 + v52 + 400);
		g37 = g33;
		g38 = v104 / 64;
		sprintf();
		g40 = g25;
		ADD_PlrStringXY(95, 304, 126, (char *)&v4);
		v53 = 0x55ec * *(int32_t *)g35;
		v80 = *(int32_t *)(g36 + v53 + 404);
		if (v80 != *(int32_t *)(g24 + v53)) {
			// 0x3056c
			g25 = 2;
			// branch -> 0x30570
		}
		// 0x30570
		g37 = g33;
		g38 = v80 / 64;
		sprintf();
		g40 = g25;
		ADD_PlrStringXY(143, 304, 174, (char *)&v4);
		v28 = g36;
		v54 = v28 + 428;
		g24 = v54;
		v55 = 0x55ec * *(int32_t *)g35;
		v105 = *(int32_t *)(v54 + v55);
		g25 = v105 > *(int32_t *)(v28 + v55 + 420);
		g37 = g33;
		g38 = v105 / 64;
		sprintf();
		g40 = g25;
		ADD_PlrStringXY(95, 332, 126, (char *)&v4);
		v56 = 0x55ec * *(int32_t *)g35;
		v81 = *(int32_t *)(g36 + v56 + 424);
		if (v81 != *(int32_t *)(g24 + v56)) {
			// 0x30608
			g25 = 2;
			// branch -> 0x3060c
		}
		// 0x3060c
		g37 = g33;
		g38 = v81 / 64;
		sprintf();
		g40 = g25;
		result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
		g10 = v1;
		return result;
	}
	// 0x2fde0
	g24 = 1;
	// branch -> 0x2fdec
	// 0x2fdec
	v83 = *(int32_t *)(g29 + v32);
	g37 = g28;
	g38 = v68 + 50 + (v83 / 2 | v83 & -0x80000000);
	sprintf();
	g40 = g24;
	ADD_PlrStringXY(258, 211, 301, (char *)&v4);
	g24 = 0;
	v33 = 0x55ec * *(int32_t *)g35;
	v58 = g36 + v33;
	v69 = *(int32_t *)(v58 + 0x5550);
	if (v69 < 1) {
		// 0x2fe40
		if (v69 <= 0xffffffff) {
			// 0x2fe48
			g24 = 2;
			// branch -> 0x2fe4c
		}
		// 0x2fe4c
		v70 = *(int32_t *)(v58 + 0x5544);
		v71 = *(int32_t *)(v58 + 2656);
		v72 = *(int32_t *)(v58 + 0x555c);
		v84 = 0x51eb851f * (int64_t)(v70 * v69);
		v106 = (int32_t)(v84 / 0x100000000) >> 31;
		v59 = (v106 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v106 < 0) + v70 + v72;
		if (v71 == 3) {
			// 0x2fe88
			v73 = *(int32_t *)(v58 + 388);
			if (*(char *)(g31 + v33) == 1) {
				// 0x2fe98
				v60 = v73 + v59;
				g25 = v60;
				v7 = v60;
				// branch -> 0x2febc
			} else {
				// 0x2fea4
				v61 = (v73 / 2 | v73 & -0x80000000) + v59;
				g25 = v61;
				v7 = v61;
				// branch -> 0x2febc
			}
			// 0x2febc
			if (v71 == 3) {
				// 0x2fef0
				if (*(char *)(g31 + v33) == 1) {
					// 0x2ff00
					// branch -> 0x2ff24
				}
				// 0x2ff24
				g37 = *(int32_t *)(g23 - 0x653c);
				g38 = v7;
				sprintf();
				if (g25 <= 99) {
					// 0x2ff40
					if (g26 < 100) {
						// 0x2ff68
						function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
						// branch -> 0x2ff84
						// 0x2ff84
						v74 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 453);
						g24 = v74 != 0;
						g38 = v74;
						if (v74 == 75 || 0x1000000 * (int32_t)v74 > 0x4b000000) {
							// 0x2ffc4
							g37 = g27;
							g24 = 3;
							sprintf();
							// branch -> 0x2ffd4
						} else {
							// 0x2ffb4
							g37 = g28;
							sprintf();
							// branch -> 0x2ffd4
						}
						// 0x2ffd4
						g40 = g24;
						ADD_PlrStringXY(257, 276, 300, (char *)&v4);
						v75 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 454);
						g24 = v75 != 0;
						g38 = v75;
						if (v75 == 75 || 0x1000000 * (int32_t)v75 > 0x4b000000) {
							// 0x3002c
							g37 = g27;
							g24 = 3;
							sprintf();
							// branch -> 0x3003c
						} else {
							// 0x3001c
							g37 = g28;
							sprintf();
							// branch -> 0x3003c
						}
						// 0x3003c
						g40 = g24;
						ADD_PlrStringXY(257, 304, 300, (char *)&v4);
						v76 = *(char *)(g36 + 0x55ec * *(int32_t *)g35 + 455);
						g24 = v76 != 0;
						g38 = v76;
						if (v76 == 75 || 0x1000000 * (int32_t)v76 > 0x4b000000) {
							// 0x30094
							g37 = g27;
							g24 = 3;
							sprintf();
							// branch -> 0x300a4
						} else {
							// 0x30084
							g37 = g28;
							sprintf();
							// branch -> 0x300a4
						}
						// 0x300a4
						g40 = g24;
						ADD_PlrStringXY(257, 332, 300, (char *)&v4);
						g37 = g33;
						g38 = *(int32_t *)(g36 + 356 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v34 = 0x55ec * *(int32_t *)g35;
						v85 = *(char *)(g31 + v34);
						v86 = *(int32_t *)(g32 + 0x1000000 * (int32_t)v85 / 0x100000);
						if (*(int32_t *)(g27 + v34) == v86) {
							// 0x30100
							g24 = 3;
							v8 = 3;
							// branch -> 0x30104
						} else {
							// 0x300a4
							v8 = g24;
							// branch -> 0x30104
						}
						// 0x30104
						g40 = v8;
						ADD_PlrStringXY(95, 155, 126, (char *)&v4);
						v35 = g36 + 364;
						g28 = v35;
						g37 = g33;
						g38 = *(int32_t *)(v35 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v36 = 0x55ec * *(int32_t *)g35;
						v87 = *(char *)(g31 + v36);
						v88 = *(int32_t *)(g28 + v36);
						if (v88 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v87 / 0x100000 + 4)) {
							// 0x30164
							g24 = 3;
							v9 = 3;
							// branch -> 0x30168
						} else {
							// 0x30104
							v9 = g24;
							// branch -> 0x30168
						}
						// 0x30168
						g40 = v9;
						ADD_PlrStringXY(95, 183, 126, (char *)&v4);
						g37 = g33;
						g38 = *(int32_t *)(g36 + 372 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v37 = 0x55ec * *(int32_t *)g35;
						v89 = *(char *)(g31 + v37);
						v90 = *(int32_t *)(g26 + v37);
						if (v90 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v89 / 0x100000 + 8)) {
							// 0x301c8
							g24 = 3;
							v10 = 3;
							// branch -> 0x301cc
						} else {
							// 0x30168
							v10 = g24;
							// branch -> 0x301cc
						}
						// 0x301cc
						g40 = v10;
						ADD_PlrStringXY(95, 211, 126, (char *)&v4);
						v38 = g36 + 380;
						g25 = v38;
						g37 = g33;
						g38 = *(int32_t *)(v38 + 0x55ec * *(int32_t *)g35);
						g24 = 0;
						sprintf();
						v39 = 0x55ec * *(int32_t *)g35;
						v91 = *(char *)(g31 + v39);
						v92 = *(int32_t *)(g25 + v39);
						if (v92 == *(int32_t *)(g32 + 0x1000000 * (int32_t)v91 / 0x100000 + 12)) {
							// 0x3022c
							g24 = 3;
							v11 = 3;
							// branch -> 0x30230
						} else {
							// 0x301cc
							v11 = g24;
							// branch -> 0x30230
						}
						// 0x30230
						g40 = v11;
						ADD_PlrStringXY(95, 239, 126, (char *)&v4);
						g24 = 0;
						v40 = 0x55ec * *(int32_t *)g35;
						v93 = *(int32_t *)(g27 + v40);
						v77 = *(int32_t *)(g36 + v40 + 352);
						g38 = v77;
						if (v77 > v93) {
							// 0x30268
							g24 = 1;
							// branch -> 0x3026c
						}
						// 0x3026c
						if (v77 < v93) {
							// 0x30274
							g24 = 2;
							// branch -> 0x30278
						}
						// 0x30278
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 155, 173, (char *)&v4);
						g24 = 0;
						v41 = 0x55ec * *(int32_t *)g35;
						v94 = *(int32_t *)(g28 + v41);
						v78 = *(int32_t *)(g36 + v41 + 360);
						g38 = v78;
						if (v78 > v94) {
							// 0x302bc
							g24 = 1;
							// branch -> 0x302c0
						}
						// 0x302c0
						if (v78 < v94) {
							// 0x302c8
							g24 = 2;
							// branch -> 0x302cc
						}
						// 0x302cc
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 183, 173, (char *)&v4);
						g24 = 0;
						v42 = 0x55ec * *(int32_t *)g35;
						v95 = *(int32_t *)(g29 + v42);
						g38 = v95;
						v96 = *(int32_t *)(g26 + v42);
						if (v95 > v96) {
							// 0x3030c
							g24 = 1;
							// branch -> 0x30310
						}
						// 0x30310
						if (v95 < v96) {
							// 0x30318
							g24 = 2;
							// branch -> 0x3031c
						}
						// 0x3031c
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 211, 173, (char *)&v4);
						g24 = 0;
						v43 = 0x55ec * *(int32_t *)g35;
						v97 = *(int32_t *)(g25 + v43);
						v79 = *(int32_t *)(g36 + v43 + 376);
						g38 = v79;
						if (v79 > v97) {
							// 0x30360
							g24 = 1;
							// branch -> 0x30364
						}
						// 0x30364
						if (v79 < v97) {
							// 0x3036c
							g24 = 2;
							// branch -> 0x30370
						}
						// 0x30370
						g37 = g33;
						sprintf();
						g40 = g24;
						ADD_PlrStringXY(143, 239, 173, (char *)&v4);
						v12 = g35;
						v63 = *(int32_t *)v12;
						v44 = g36 + 384;
						v3 = v44;
						v16 = v44;
						v15 = v12;
						if (*(int32_t *)(v44 + 0x55ec * v63) >= 1) {
							// 0x303ac
							v45 = function_a33a4(v63);
							v13 = g35;
							v64 = *(int32_t *)v13;
							v14 = v3;
							if (v45 < *(int32_t *)(v14 + 0x55ec * v64)) {
								// 0x303c4
								v46 = function_a33a4(v64);
								*(int32_t *)(v3 + 0x55ec * *(int32_t *)g35) = v46;
								v16 = v3;
								v15 = g35;
								// branch -> 0x303d8
							} else {
								v16 = v14;
								v15 = v13;
							}
						}
						// 0x303d8
						v98 = *(int32_t *)(0x55ec * *(int32_t *)v15 + v16);
						g38 = v98;
						v26 = v15;
						if (v98 >= 1) {
							// 0x303ec
							g37 = g33;
							sprintf();
							g40 = 2;
							ADD_PlrStringXY(95, 266, 126, (char *)&v4);
							v17 = g35;
							v47 = 0x55ec * *(int32_t *)v17;
							v99 = *(char *)(g31 + v47);
							v100 = *(int32_t *)(g27 + v47);
							v65 = v99;
							g24 = v65;
							v18 = g32;
							v21 = v18;
							v20 = v65;
							v19 = v17;
							if (v100 < *(int32_t *)(v18 + 0x1000000 * (int32_t)v99 / 0x100000)) {
								// 0x30434
								CelDecodeOnly(201, 319, *(int32_t *)(g23 - 0x4fac), *(int32_t *)g30 + 2, 41);
								v21 = g32;
								v20 = g24;
								v19 = g35;
								// branch -> 0x30450
							}
							// 0x30450
							v48 = 16 * v20;
							g27 = v48;
							v101 = *(int32_t *)(g28 + 0x55ec * *(int32_t *)v19);
							v49 = v48;
							v23 = v21;
							v22 = v19;
							if (v101 < *(int32_t *)(v48 + v21 + 4)) {
								// 0x30470
								CelDecodeOnly(201, 347, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 4) + 4, 41);
								v49 = g27;
								v23 = g32;
								v22 = g35;
								// branch -> 0x3048c
							}
							// 0x3048c
							v102 = *(int32_t *)(g26 + 0x55ec * *(int32_t *)v22);
							v50 = v49;
							v25 = v23;
							v24 = v22;
							if (v102 < *(int32_t *)(v23 + v49 + 8)) {
								// 0x304a8
								CelDecodeOnly(201, 376, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 8) + 6, 41);
								v50 = g27;
								v25 = g32;
								v24 = g35;
								// branch -> 0x304c4
							}
							// 0x304c4
							v103 = *(int32_t *)(g25 + 0x55ec * *(int32_t *)v24);
							if (v103 < *(int32_t *)(v25 + v50 + 12)) {
								// 0x304e0
								CelDecodeOnly(201, 404, *(int32_t *)(g23 - 0x4fac), *(int32_t *)(g30 + 12) + 8, 41);
								v26 = g35;
								// branch -> 0x304fc
							} else {
								v26 = v24;
							}
						}
						// 0x304fc
						v27 = g36;
						v51 = v27 + 408;
						g24 = v51;
						v52 = 0x55ec * *(int32_t *)v26;
						v104 = *(int32_t *)(v51 + v52);
						g25 = v104 > *(int32_t *)(v27 + v52 + 400);
						g37 = g33;
						g38 = v104 / 64;
						sprintf();
						g40 = g25;
						ADD_PlrStringXY(95, 304, 126, (char *)&v4);
						v53 = 0x55ec * *(int32_t *)g35;
						v80 = *(int32_t *)(g36 + v53 + 404);
						if (v80 != *(int32_t *)(g24 + v53)) {
							// 0x3056c
							g25 = 2;
							// branch -> 0x30570
						}
						// 0x30570
						g37 = g33;
						g38 = v80 / 64;
						sprintf();
						g40 = g25;
						ADD_PlrStringXY(143, 304, 174, (char *)&v4);
						v28 = g36;
						v54 = v28 + 428;
						g24 = v54;
						v55 = 0x55ec * *(int32_t *)g35;
						v105 = *(int32_t *)(v54 + v55);
						g25 = v105 > *(int32_t *)(v28 + v55 + 420);
						g37 = g33;
						g38 = v105 / 64;
						sprintf();
						g40 = g25;
						ADD_PlrStringXY(95, 332, 126, (char *)&v4);
						v56 = 0x55ec * *(int32_t *)g35;
						v81 = *(int32_t *)(g36 + v56 + 424);
						if (v81 != *(int32_t *)(g24 + v56)) {
							// 0x30608
							g25 = 2;
							// branch -> 0x3060c
						}
						// 0x3060c
						g37 = g33;
						g38 = v81 / 64;
						sprintf();
						g40 = g25;
						result = ADD_PlrStringXY(143, 332, 174, (char *)&v4);
						g10 = v1;
						return result;
					}
				}
				// 0x2ff48
				function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
				// branch -> 0x2ff84
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x2ff24
			g37 = *(int32_t *)(g23 - 0x653c);
			g38 = v7;
			sprintf();
			if (g25 <= 99) {
				// 0x2ff40
				if (g26 < 100) {
					// 0x2ff68
					function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
					// branch -> 0x2ff84
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x2ff48
			function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
			// branch -> 0x2ff84
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			// 0x2feb4
			v62 = *(int32_t *)(v58 + 388) + v59;
			g25 = v62;
			v7 = v62;
			// branch -> 0x2febc
		}
		// 0x2febc
		if (v71 == 3) {
			// 0x2fef0
			if (*(char *)(g31 + v33) == 1) {
				// 0x2ff00
				// branch -> 0x2ff24
			}
			// 0x2ff24
			g37 = *(int32_t *)(g23 - 0x653c);
			g38 = v7;
			sprintf();
			if (g25 <= 99) {
				// 0x2ff40
				if (g26 < 100) {
					// 0x2ff68
					function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
					// branch -> 0x2ff84
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x2ff48
			function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
			// branch -> 0x2ff84
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x2ff24
		g37 = *(int32_t *)(g23 - 0x653c);
		g38 = v7;
		sprintf();
		if (g25 <= 99) {
			// 0x2ff40
			if (g26 < 100) {
				// 0x2ff68
				function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
				// branch -> 0x2ff84
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// 0x2ff48
		function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
		// branch -> 0x2ff84
		// Detected a possible infinite recursion (goto support failed); quitting...
	} else {
		// 0x2fe40
		g24 = 1;
		// branch -> 0x2fe4c
	}
	// 0x2fe4c
	v70 = *(int32_t *)(v58 + 0x5544);
	v71 = *(int32_t *)(v58 + 2656);
	v72 = *(int32_t *)(v58 + 0x555c);
	v84 = 0x51eb851f * (int64_t)(v70 * v69);
	v106 = (int32_t)(v84 / 0x100000000) >> 31;
	v59 = (v106 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v106 < 0) + v70 + v72;
	if (v71 == 3) {
		// 0x2fe88
		v73 = *(int32_t *)(v58 + 388);
		if (*(char *)(g31 + v33) == 1) {
			// 0x2fe98
			v60 = v73 + v59;
			g25 = v60;
			v7 = v60;
			// branch -> 0x2febc
		} else {
			// 0x2fea4
			v61 = (v73 / 2 | v73 & -0x80000000) + v59;
			g25 = v61;
			v7 = v61;
			// branch -> 0x2febc
		}
		// 0x2febc
		if (v71 == 3) {
			// 0x2fef0
			if (*(char *)(g31 + v33) == 1) {
				// 0x2ff00
				// branch -> 0x2ff24
			}
			// 0x2ff24
			g37 = *(int32_t *)(g23 - 0x653c);
			g38 = v7;
			sprintf();
			if (g25 <= 99) {
				// 0x2ff40
				if (g26 < 100) {
					// 0x2ff68
					function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
					// branch -> 0x2ff84
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x2ff48
			function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
			// branch -> 0x2ff84
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x2ff24
		g37 = *(int32_t *)(g23 - 0x653c);
		g38 = v7;
		sprintf();
		if (g25 <= 99) {
			// 0x2ff40
			if (g26 < 100) {
				// 0x2ff68
				function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
				// branch -> 0x2ff84
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// 0x2ff48
		function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
		// branch -> 0x2ff84
		// Detected a possible infinite recursion (goto support failed); quitting...
	} else {
		// 0x2feb4
		v62 = *(int32_t *)(v58 + 388) + v59;
		g25 = v62;
		v7 = v62;
		// branch -> 0x2febc
	}
	// 0x2febc
	if (v71 == 3) {
		// 0x2fef0
		if (*(char *)(g31 + v33) == 1) {
			// 0x2ff00
			// branch -> 0x2ff24
		}
		// 0x2ff24
		g37 = *(int32_t *)(g23 - 0x653c);
		g38 = v7;
		sprintf();
		if (g25 <= 99) {
			// 0x2ff40
			if (g26 < 100) {
				// 0x2ff68
				function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
				// branch -> 0x2ff84
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// 0x2ff48
		function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
		// branch -> 0x2ff84
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x2ff24
	g37 = *(int32_t *)(g23 - 0x653c);
	g38 = v7;
	sprintf();
	if (g25 <= 99) {
		// 0x2ff40
		if (g26 < 100) {
			// 0x2ff68
			function_2fa60(258, 239, 301, (char *)&v4, g24, 0);
			// branch -> 0x2ff84
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
	// 0x2ff48
	function_2fa60(254, 239, 305, (char *)&v4, g24, -1);
	// branch -> 0x2ff84
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x30648 - 0x30694
int32_t function_30648(int32_t a1, int32_t a2)
{
	int32_t *v1 = (int32_t *)*(int32_t *)(g23 - 0x76d8); // 0x3064c
	if (*v1 != 0) {
		// bb
		return g34;
	}
	int32_t result = *(int32_t *)(g23 - 0x76a8); // 0x30658
	int32_t v2 = *(int32_t *)result;             // 0x3065c
	if (v2 < 40 || v2 > 81) {
		// bb1
		return result;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x76ac); // 0x30670
	int32_t v3 = *(int32_t *)result2;             // 0x30674
	if (v3 < 313 || v3 > 335) {
		// bb1
		return result2;
	}
	// 0x30688
	*v1 = 1;
	return result2;
}

// Address range: 0x30694 - 0x306e0
int32_t ReleaseLvlBtn(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x76a8); // 0x30698
	int32_t result;                                      // 0x306d0
	if (v1 < 40 || v1 > 81) {
		// 0x306d0
		result = *(int32_t *)(g23 - 0x76d8);
		*(int32_t *)result = 0;
		return result;
	}
	uint32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x76ac); // 0x306b0
	if (v2 < 313) {
		// 0x306d0
		result = *(int32_t *)(g23 - 0x76d8);
		*(int32_t *)result = 0;
		return result;
	}
	// 0x306bc
	if (v2 <= 335) {
		// 0x306c4
		*(int32_t *)*(int32_t *)(g23 - 0x77c4) = 1;
		// branch -> 0x306d0
	}
	// 0x306d0
	result = *(int32_t *)(g23 - 0x76d8);
	*(int32_t *)result = 0;
	return result;
}

// Address range: 0x306e0 - 0x30760
int32_t DrawLevelUpIcon(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7764); // 0x306e8
	int32_t result = v1;                     // 0x3075c
	if (*(char *)v1 == 0) {
		// 0x30700
		g40 = 0;
		ADD_PlrStringXY(0, 303, 120, (char *)*(int32_t *)(g23 - 0x6544));
		result = CelDecodeOnly(104, 495, *(int32_t *)(g23 - 0x4fac), g36, 41);
		// branch -> 0x3074c
	}
	// 0x3074c
	return result;
}

// Address range: 0x30760 - 0x30970
int32_t function_30760(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x76ec); // 0x30764
	if (*(int32_t *)v1 != 0) {
		// 0x3095c
		return g34;
	}
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0x30784
	g34 = v2;
	int32_t v3 = 0x55ec * *(int32_t *)v2 + *(int32_t *)(g23 - 0x77a8); // 0x30790
	if (*(int32_t *)(v3 + 384) != 0) {
		int32_t v4 = (int32_t) * (char *)(v3 + 348); // 0x307a0
		int32_t v5 = 2;                              // ctr
		int32_t v6 = *(int32_t *)(g23 - 0x76ac);     // 0x307b0
		g34 = v6;
		int32_t v7 = g23 - 0x2bf0;                                           // 0x307c0
		int32_t v8 = *(int32_t *)(g23 - 0x76e8);                             // 0x307c4
		int32_t v9 = *(int32_t *)(g23 - 0x7760) + 0x1000000 * v4 / 0x100000; // 0x307c8
		int32_t v10 = *(int32_t *)(v3 + 356);                                // r10
		int32_t v11 = 0;                                                     // r28
		int32_t v12 = *(int32_t *)(v3 + 364);                                // r11
		int32_t v13 = *(int32_t *)(v3 + 372);                                // r12
		int32_t v14 = *(int32_t *)(v3 + 380);                                // r6
		int32_t v15 = *(int32_t *)*(int32_t *)(g23 - 0x76a8);                // r4
		int32_t v16 = *(int32_t *)v6;                                        // r31
		int32_t v17 = 0;                                                     // 0x30804
		// branch -> 0x307e8
		while (true) {
			// 0x307e8
			int32_t v18; // 0x30890
			int32_t v19; // 0x30894
			int32_t v20; // 0x30890
			int32_t v21; // 0x30894
			int32_t v22; // 0x3089c
			int32_t v23; // 0x308a0
			if (v17 == 2) {
				// 0x30830
				if (v13 < *(int32_t *)v9) {
				lab_0x3084c_3:;
					int32_t v24 = *(int32_t *)v7;             // 0x3084c
					int32_t v25 = *(int32_t *)(v7 + 4);       // 0x30858
					int32_t v26 = *(int32_t *)(v7 + 8) + v24; // 0x30860
					g34 = v26;
					int32_t v27 = *(int32_t *)(v7 + 12) + v25; // 0x30864
					if (v15 >= v24 && v15 <= v26) {
						// 0x30874
						if (v16 >= v25 && v16 <= v27) {
							// 0x30884
							*(int32_t *)v8 = 1;
							*(int32_t *)v1 = 1;
							v19 = v7;
							v18 = v11;
							// branch -> 0x30890
						} else {
							v19 = v7;
							v18 = v17;
						}
					} else {
						v19 = v7;
						v18 = v17;
					}
				} else {
					v19 = v7;
					v18 = 2;
				}
			} else {
				// 0x307f0
				if (v17 > 1) {
					// 0x30804
					if (v17 <= 3) {
						// 0x30840
						if (v14 < *(int32_t *)v9) {
							goto lab_0x3084c_3;
						}
						v19 = v7;
						v18 = 3;
					lab_0x30890_3:
						// 0x30890
						v20 = v18 + 1;
						v21 = v19 + 16;
						v22 = v8 + 4;
						v23 = v9 + 4;
						int32_t v28;  // 0x30954
						int32_t v29;  // 0x30954
						int32_t v30;  // 0x30958
						uint32_t v31; // 0x30904
						int32_t v32;  // 0x30918
						int32_t v33;  // 0x3091c
						uint32_t v34; // 0x30910
						if (v20 == 2) {
						lab_0x308e8_3:
							// 0x308e8
							if (v13 < *(int32_t *)v23) {
							lab_0x30904_3:
								// 0x30904
								v31 = *(int32_t *)v21;
								v34 = *(int32_t *)(v19 + 20);
								v32 = *(int32_t *)(v19 + 24) + v31;
								g34 = v32;
								v33 = *(int32_t *)(v19 + 28) + v34;
								if (v15 >= v31) {
								lab_0x30924:
									// 0x30924
									if (v15 <= v32) {
										// 0x3092c
										if (v16 >= v34) {
											// 0x30934
											if (v16 <= v33) {
												// 0x3093c
												*(int32_t *)v22 = 1;
												*(int32_t *)v1 = 1;
												v28 = v20;
												// branch -> 0x30948
											} else {
												v28 = v20;
											}
										} else {
											v28 = v20;
										}
									} else {
										v28 = v20;
									}
								} else {
									v28 = v20;
								}
							} else {
								v28 = 2;
							}
						} else {
						lab_0x308a8_3:;
							// 0x308a8
							int32_t v35; // 0x30948
							int32_t v36; // 0x3094c
							int32_t v37; // 0x30950
							if (v20 > 1) {
								// 0x308bc
								v28 = v20;
								if (v20 <= 3) {
									// 0x308f8
									if (v14 < *(int32_t *)v23) {
										goto lab_0x30904_3;
									}
									// 0x30948
									v29 = 4;
									v11 = v29;
									v30 = v5 - 1;
									v5 = v30;
									if (v30 == 0) {
										// break -> 0x3095c
										break;
									}
									v8 = v22 + 4;
									v7 = v21 + 16;
									v9 = v23 + 4;
									v17 = v29;
									// continue -> 0x307e8
									continue;
								}
							lab_0x30948_3:
								// 0x30948
								v29 = v28 + 1;
								v11 = v29;
								v30 = v5 - 1;
								v5 = v30;
								if (v30 == 0) {
									// break -> 0x3095c
									break;
								}
								v8 = v22 + 4;
								v7 = v21 + 16;
								v9 = v23 + 4;
								v17 = v29;
								// continue -> 0x307e8
								continue;
							} else {
								// 0x308ac
								if (v20 == 0) {
									// 0x308c8
									if (v10 < *(int32_t *)v23) {
										goto lab_0x30904_3;
									}
									v28 = 0;
									goto lab_0x30948_3;
								} else {
									// 0x308b4
									if (v20 <= 0xffffffff) {
										v28 = v20;
										goto lab_0x30948_3;
									}
									// 0x308d8
									if (v12 < *(int32_t *)v23) {
										goto lab_0x30904_3;
									}
									v28 = v20;
									goto lab_0x30948_3;
								}
							lab_0x30948_4:;
								int32_t v38 = v35 + 4; // 0x30948
								v9 = v38;
								int32_t v39 = v36 + 16; // 0x3094c
								v7 = v39;
								int32_t v40 = v37 + 4; // 0x30950
								v8 = v40;
								v29 = v28 + 1;
								v11 = v29;
								int32_t v41 = v5; // 0x30958
								v30 = v41 - 1;
								v5 = v30;
								if (v30 == 0) {
									// break -> 0x3095c
									break;
								}
								v8 = v40;
								v7 = v39;
								v9 = v38;
								v17 = v29;
								// continue -> 0x307e8
								continue;
							}
							// 0x30904
							v31 = *(int32_t *)v21;
							int32_t v42 = *(int32_t *)(v19 + 24); // 0x30908
							v34 = *(int32_t *)(v19 + 20);
							int32_t v43 = *(int32_t *)(v19 + 28); // 0x30914
							v32 = v42 + v31;
							g34 = v32;
							v33 = v43 + v34;
							if (v15 < v31) {
								v28 = v20;
								v37 = v22;
								v36 = v21;
								v35 = v23;
								goto lab_0x30948_4;
							}
							goto lab_0x30924;
						}
						// 0x30948
						v29 = v28 + 1;
						v11 = v29;
						v30 = v5 - 1;
						v5 = v30;
						if (v30 == 0) {
							// break -> 0x3095c
							break;
						}
						v8 = v22 + 4;
						v7 = v21 + 16;
						v9 = v23 + 4;
						v17 = v29;
						// continue -> 0x307e8
						continue;
					} else {
						v19 = v7;
					}
				} else {
					// 0x307f4
					if (v17 == 0) {
						// 0x30810
						if (v10 < *(int32_t *)v9) {
							goto lab_0x3084c_3;
						}
						v19 = v7;
						v18 = 0;
						goto lab_0x30890_3;
					} else {
						// 0x307fc
						if (v17 <= 0xffffffff) {
							v19 = v7;
							v18 = v17;
							goto lab_0x30890_3;
						}
						// 0x30820
						if (v12 < *(int32_t *)v9) {
							goto lab_0x3084c_3;
						}
						v19 = v7;
						v18 = v17;
						goto lab_0x30890_3;
					}
				}
				// 0x30890
				v20 = v17 + 1;
				v21 = v19 + 16;
				v22 = v8 + 4;
				v23 = v9 + 4;
				if (v20 == 2) {
					goto lab_0x308e8_3;
				}
				goto lab_0x308a8_3;
			}
			// 0x30890
			v20 = v18 + 1;
			v21 = v19 + 16;
			v22 = v8 + 4;
			v23 = v9 + 4;
			if (v20 == 2) {
				goto lab_0x308e8_3;
			}
			goto lab_0x308a8_3;
		}
		// 0x3095c
		// branch -> 0x3095c
	}
	// 0x3095c
	return g34;
}

// Address range: 0x30970 - 0x30af8
int32_t ReleaseChrBtns(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x76ec); // 0x30978
	int32_t result = v1;                     // r3
	g29 = 0;
	g32 = *(int32_t *)(g23 - 0x76ac);
	g33 = *(int32_t *)(g23 - 0x76a8);
	g35 = *(int32_t *)(g23 - 0x77ac);
	g36 = *(int32_t *)(g23 - 0x77a8);
	g31 = *(int32_t *)(g23 - 0x76e8);
	g30 = g23 - 0x2bf0;
	*(int32_t *)v1 = 0;
	int32_t v2 = g31; // 0x309b8
	// branch -> 0x309a8
	while (true) {
		int32_t *v3 = (int32_t *)v2; // 0x309a8
		int32_t v4;                  // 0x30ad0
		int32_t v5;                  // 0x30adc
		if (*v3 != 0) {
			// 0x309b4
			*v3 = 0;
			uint32_t v6 = *(int32_t *)g33; // 0x309bc
			int32_t v7 = g30;              // 0x309c0
			uint32_t v8 = *(int32_t *)v7;  // 0x309c0
			result = v8;
			if (v6 >= v8) {
				// 0x309cc
				if (v6 <= *(int32_t *)(v7 + 8) + v8) {
					uint32_t v9 = *(int32_t *)g32;       // 0x309dc
					uint32_t v10 = *(int32_t *)(v7 + 4); // 0x309e0
					result = v10;
					if (v9 >= v10) {
						// 0x309ec
						if (v9 <= *(int32_t *)(v7 + 12) + v10) {
							int32_t v11 = g29; // 0x309fc
							if (v11 == 2) {
								// 0x30a7c
								NetSendCmdParam1(1, 5, 1);
								int32_t *v12 = (int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 384); // 0x30a98
								int32_t v13 = *v12;                                               // 0x30a98
								result = v13;
								*v12 = v13 - 1;
								// branch -> 0x30ad0
							} else {
								// 0x30a04
								if (v11 > 2) {
									// 0x30a18
									if (v11 == 3) {
										// 0x30aa8
										NetSendCmdParam1(1, 6, 1);
										int32_t *v14 = (int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 384); // 0x30ac4
										int32_t v15 = *v14;                                               // 0x30ac4
										result = v15;
										*v14 = v15 - 1;
										// branch -> 0x30ad0
									}
								} else {
									// 0x30a08
									if (v11 == 0) {
										// 0x30a24
										NetSendCmdParam1(1, 3, 1);
										int32_t *v16 = (int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 384); // 0x30a40
										int32_t v17 = *v16;                                               // 0x30a40
										result = v17;
										*v16 = v17 - 1;
										// branch -> 0x30ad0
									} else {
										// 0x30a10
										if (v11 > 0) {
											// 0x30a50
											NetSendCmdParam1(1, 4, 1);
											int32_t *v18 = (int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 384); // 0x30a6c
											int32_t v19 = *v18;                                               // 0x30a6c
											result = v19;
											*v18 = v19 - 1;
											// branch -> 0x30ad0
										}
									}
									// 0x30ad0
									v4 = g29 + 1;
									g29 = v4;
									g30 += 16;
									v5 = g31 + 4;
									g31 = v5;
									if (v4 >= 4) {
										// break -> 0x30ae4
										break;
									}
									v2 = v5;
									// continue -> 0x309a8
									continue;
								}
								// 0x30ad0
								v4 = g29 + 1;
								g29 = v4;
								g30 += 16;
								v5 = g31 + 4;
								g31 = v5;
								if (v4 >= 4) {
									// break -> 0x30ae4
									break;
								}
								v2 = v5;
								// continue -> 0x309a8
								continue;
							}
							// 0x30ad0
							v4 = g29 + 1;
							g29 = v4;
							g30 += 16;
							v5 = g31 + 4;
							g31 = v5;
							if (v4 >= 4) {
								// break -> 0x30ae4
								break;
							}
							v2 = v5;
							// continue -> 0x309a8
							continue;
						}
						// 0x30ad0
						v4 = g29 + 1;
						g29 = v4;
						g30 += 16;
						v5 = g31 + 4;
						g31 = v5;
						if (v4 >= 4) {
							// break -> 0x30ae4
							break;
						}
						v2 = v5;
						// continue -> 0x309a8
						continue;
					}
					// 0x30ad0
					v4 = g29 + 1;
					g29 = v4;
					g30 += 16;
					v5 = g31 + 4;
					g31 = v5;
					if (v4 >= 4) {
						// break -> 0x30ae4
						break;
					}
					v2 = v5;
					// continue -> 0x309a8
					continue;
				}
				// 0x30ad0
				v4 = g29 + 1;
				g29 = v4;
				g30 += 16;
				v5 = g31 + 4;
				g31 = v5;
				if (v4 >= 4) {
					// break -> 0x30ae4
					break;
				}
				v2 = v5;
				// continue -> 0x309a8
				continue;
			}
			// 0x30ad0
			v4 = g29 + 1;
			g29 = v4;
			g30 += 16;
			v5 = g31 + 4;
			g31 = v5;
			if (v4 >= 4) {
				// break -> 0x30ae4
				break;
			}
			v2 = v5;
			// continue -> 0x309a8
			continue;
		}
		// 0x30ad0
		v4 = g29 + 1;
		g29 = v4;
		g30 += 16;
		v5 = g31 + 4;
		g31 = v5;
		if (v4 >= 4) {
			// break -> 0x30ae4
			break;
		}
		v2 = v5;
		// continue -> 0x309a8
	}
	// 0x30ae4
	return result;
}

// Address range: 0x30af8 - 0x30be0
int32_t DrawDurIcon4Item(int32_t a1, int32_t result)
{
	int32_t v1 = g36;                  // 0x30af8
	int32_t v2 = g10;                  // 0x30afc
	int32_t v3 = *(int32_t *)(a1 + 8); // 0x30b10
	if (v3 == -1) {
		// 0x30b1c
		// branch -> 0x30bcc
		// 0x30bcc
		g36 = v1;
		g10 = v2;
		return result;
	}
	uint32_t v4 = *(int32_t *)(a1 + 236); // 0x30b24
	int32_t result3;                      // 0x30bdc
	if (v4 < 6) {
		// 0x30b38
		if (g38 == 0) {
			// 0x30b40
			int32_t result2; // 0x30bc8
			if (*(char *)(a1 + 190) != 1 || v3 == 4) {
				// 0x30ba4
				// branch -> 0x30ba8
				// 0x30ba8
				if (v4 >= 3) {
					// 0x30bb0
					// branch -> 0x30bb4
				}
				// 0x30bb4
				CelDecodeOnly(result, 495, *(int32_t *)(g23 - 0x4fc4), 32, 32);
				result2 = g36 - 40;
				// branch -> 0x30bcc
				// 0x30bcc
				g36 = v1;
				g10 = v2;
				return result2;
			}
			// 0x30b54
			if (v3 > 4) {
				// 0x30b70
				if (v3 == 10) {
					// 0x30b9c
					// branch -> 0x30ba8
				}
				// 0x30ba8
				if (v4 >= 3) {
					// 0x30bb0
					// branch -> 0x30bb4
				}
				// 0x30bb4
				CelDecodeOnly(result, 495, *(int32_t *)(g23 - 0x4fc4), 32, 32);
				result2 = g36 - 40;
				// branch -> 0x30bcc
				// 0x30bcc
				g36 = v1;
				g10 = v2;
				return result2;
			}
			// 0x30b58
			if (v3 == 2) {
				// 0x30b84
				// branch -> 0x30ba8
				// 0x30ba8
				if (v4 >= 3) {
					// 0x30bb0
					// branch -> 0x30bb4
				}
				// 0x30bb4
				CelDecodeOnly(result, 495, *(int32_t *)(g23 - 0x4fc4), 32, 32);
				result2 = g36 - 40;
				// branch -> 0x30bcc
				// 0x30bcc
				g36 = v1;
				g10 = v2;
				return result2;
			}
			// 0x30b60
			if (v3 > 2) {
				// 0x30b8c
				// branch -> 0x30ba8
			} else {
				// 0x30b64
				if (v3 > 0) {
					// 0x30b7c
					// branch -> 0x30ba8
				}
			}
			// 0x30ba8
			if (v4 >= 3) {
				// 0x30bb0
				// branch -> 0x30bb4
			}
			// 0x30bb4
			CelDecodeOnly(result, 495, *(int32_t *)(g23 - 0x4fc4), 32, 32);
			result2 = g36 - 40;
			// branch -> 0x30bcc
			// 0x30bcc
			g36 = v1;
			g10 = v2;
			return result2;
		}
		// 0x30ba8
		if (v4 >= 3) {
			// 0x30bb0
			// branch -> 0x30bb4
		}
		// 0x30bb4
		CelDecodeOnly(result, 495, *(int32_t *)(g23 - 0x4fc4), 32, 32);
		result3 = g36 - 40;
		// branch -> 0x30bcc
	} else {
		// 0x30b30
		result3 = result;
		// branch -> 0x30bcc
	}
	// 0x30bcc
	g36 = v1;
	g10 = v2;
	return result3;
}

// Address range: 0x30be0 - 0x30cb8
int32_t DrawDurIcon(void)
{
	int32_t v1 = g36;                        // 0x30be0
	int32_t v2 = g10;                        // 0x30be4
	int32_t v3 = *(int32_t *)(g23 - 0x77c4); // 0x30be8
	int32_t v4 = *(int32_t *)(g23 - 0x77bc); // 0x30bf0
	int32_t v5 = *(int32_t *)(g23 - 0x77c0); // 0x30bf8
	int32_t v6 = v3;                         // 0x30cb42
	int32_t v7;                              // 0x30c68
	int32_t v8;                              // 0x30c70
	int32_t v9;                              // 0x30c5c
	int32_t v10;                             // 0x30c80
	int32_t v11;                             // 0x30c90
	if (*(int32_t *)v3 == 0) {
		int32_t v12 = *(int32_t *)(g23 - 0x77c8); // 0x30c08
		if (*(int32_t *)v12 == 0) {
			// 0x30c08
			// branch -> 0x30c34
			// 0x30c34
			if (*(int32_t *)v4 == 0) {
				// 0x30c44
				if (*(int32_t *)v5 != 0) {
					// 0x30c50
					// branch -> 0x30c54
				}
			}
			// 0x30c54
			g38 = 4;
			v9 = *(int32_t *)(g23 - 0x77a8);
			v7 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v9;
			g36 = v7;
			v8 = DrawDurIcon4Item(v7 + 1176, 4);
			g38 = 3;
			v10 = DrawDurIcon4Item(g36 + 3384, v8);
			g38 = 0;
			v11 = DrawDurIcon4Item(g36 + 2648, v10);
			g38 = 0;
			int32_t result = DrawDurIcon4Item(g36 + 3016, v11); // 0x30ca0
			// branch -> 0x30ca4
			// 0x30ca4
			g36 = v1;
			g10 = v2;
			return result;
		}
		v6 = v12;
	}
	int32_t *v13 = (int32_t *)v4; // 0x30c18
	int32_t result2 = v6;         // 0x30cb4
	if (*v13 == 0) {
		// 0x30c24
		if (*(int32_t *)v5 == 0) {
			// 0x30c34
			if (*v13 == 0) {
				// 0x30c44
				if (*(int32_t *)v5 != 0) {
					// 0x30c50
					// branch -> 0x30c54
				}
			}
			// 0x30c54
			g38 = 4;
			v9 = *(int32_t *)(g23 - 0x77a8);
			v7 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v9;
			g36 = v7;
			v8 = DrawDurIcon4Item(v7 + 1176, 4);
			g38 = 3;
			v10 = DrawDurIcon4Item(g36 + 3384, v8);
			g38 = 0;
			v11 = DrawDurIcon4Item(g36 + 2648, v10);
			g38 = 0;
			result2 = DrawDurIcon4Item(g36 + 3016, v11);
			// branch -> 0x30ca4
		} else {
			result2 = v6;
		}
	}
	// 0x30ca4
	g36 = v1;
	g10 = v2;
	return result2;
}

// Address range: 0x30cb8 - 0x30dd0
int32_t RedBack(int32_t a1)
{
	int32_t v1 = g10;                        // 0x30cbc
	int32_t v2 = *(int32_t *)(g23 - 0x7770); // 0x30cc8
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x776c) == 0 ? 0x1200 : 1536;
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x7804); // 0x30d50
	char *v5;                                            // 0x30d60
	if (*(char *)*(int32_t *)(g23 - 0x7794) != 4) {
		char *v6 = (char *)(v4 + 0x1e040); // 0x30d0c
		v5 = v6;
		int32_t v7;       // bp-24
		int32_t v8 = &v7; // 0x30d28
		v7 = (int32_t)v6;
		g39 = 640;
		function_da338((char *)&v5, v8, *(int32_t *)v2 + v3);
		int32_t result = (int32_t)v5;       // 0x30d38
		int32_t v9 = 351;                   // 0x30d3c
		char *v10 = (char *)(result + 128); // 0x30d44
		v5 = v10;
		// branch -> 0x30d1c
		while (v9 != 0) {
			// 0x30d1c
			v7 = (int32_t)v10;
			g39 = 640;
			function_da338((char *)&v5, v8, *(int32_t *)v2 + v3);
			result = (int32_t)v5;
			v9--;
			v10 = (char *)(result + 128);
			v5 = v10;
			// continue -> 0x30d1c
		}
		// 0x30dbc
		g10 = v1;
		return result;
	}
	int32_t v11 = 352; // r4
	v5 = (char *)(v4 + 0x1e040);
	// branch -> 0x30d70
	int32_t result2; // 0x30da8
	while (true) {
		int32_t v12 = 640; // r5
		char *v13 = v5;    // 0x30d90
		// branch -> 0x30d74
		char *v14; // 0x30da8
		while (true) {
			unsigned char v15 = *v13; // 0x30d78
			char v16 = v15;
			if (v15 >= 32) {
				// 0x30d88
				v16 = *(char *)((int32_t)v15 + *(int32_t *)v2 + v3);
				// branch -> 0x30d90
			}
			int32_t v17 = v12 - 1; // 0x30d94
			v12 = v17;
			v5 = (char *)((int32_t)v13 + 1);
			*v13 = v16;
			v14 = v5;
			if (v17 == 0) {
				// break -> 0x30da8
				break;
			}
			v13 = v14;
			// continue -> 0x30d74
		}
		// 0x30da8
		result2 = (int32_t)v14;
		int32_t v18 = v11 - 1; // 0x30dac
		v11 = v18;
		char *v19 = (char *)(result2 + 128); // 0x30db4
		v5 = v19;
		if (v18 == 0) {
			// break -> 0x30dbc
			break;
		}
		v5 = v19;
		// continue -> 0x30d70
	}
	// 0x30dbc
	g10 = v1;
	return result2;
}

// Address range: 0x30dd0 - 0x30ec8
int32_t PrintSBookStr(int32_t result, int32_t a2, int32_t a3, char *a4, int32_t a5)
{
	int32_t v1 = (int32_t)a4;  // r6
	int32_t v2 = g10;          // 0x30dd4
	int32_t v3 = g23 - 0x2da0; // 0x30de0
	g35 = v3;
	int32_t v4 = g23 - 0x2e20; // 0x30de4
	g36 = v4;
	g30 = v1;
	int32_t v5 = g23 - 0x2ae8; // 0x30dec
	g29 = v5;
	g31 = a5;
	g32 = 0;
	int32_t v6 = *(int32_t *)(4 * a2 + *(int32_t *)(g23 - 0x7698)) + 440 + result; // 0x30e0c
	g33 = v6;
	int32_t v7;      // 0x30e60
	int32_t v8;      // 0x30e90
	int32_t v9;      // 0x30e9029
	int32_t v10;     // 0x30e9c
	int32_t v11;     // 0x30ea8
	int32_t result2; // 0x30ec433
	int32_t v12;     // 0x30ec434
	int32_t v13;     // 0x30e64
	int32_t v14;     // 0x30e7c26
	int32_t v15;     // 0x30e80
	int32_t v16;     // 0x30ea0
	char *v17;
	int32_t v18;       // 0x30e70
	unsigned char v19; // 0x30e68
	unsigned char v20; // 0x30e6c
	int32_t v21;       // 0x30e6c
	if (a3 == 0) {
		// 0x30dd0
		v17 = (char *)v1;
		v9 = v6;
		v14 = 0;
		// branch -> 0x30ea8
	} else {
		char *v22 = (char *)v1; // 0x30e3c9
		int32_t v23 = 0;        // 0x30e50
		uint32_t v24;           // 0x30e50
		int32_t v25;            // 0x30e58
		int32_t v26;            // 0x30e58
		int32_t v27;            // 0x30e54
		if (*v22 != 0) {
			int32_t v28 = v1;                                            // 0x30e20
			int32_t v29 = v28 + 1;                                       // 0x30e24
			unsigned char v30 = *(char *)((int32_t) * (char *)v28 + v5); // 0x30e28
			unsigned char v31 = *(char *)((int32_t)v30 + v4);            // 0x30e2c
			int32_t v32 = 1 + (int32_t) * (char *)((int32_t)v31 + v3);   // 0x30e38
			v23 = v32;
			while (*(char *)v29 != 0) {
				// 0x30e20
				v28 = v29;
				v29 = v28 + 1;
				v30 = *(char *)((int32_t) * (char *)v28 + v5);
				v31 = *(char *)((int32_t)v30 + v4);
				v32 = v32 + 1 + (int32_t) * (char *)((int32_t)v31 + v3);
				v23 = v32;
				// continue -> 0x30e20
			}
			// 0x30e48
			v25 = 0;
			if (v23 <= 221) {
				// 0x30e50
				v24 = 222 - v23;
				v27 = v24 / 2 | v24 & -0x80000000;
				g32 = v27;
				v25 = v27;
				// branch -> 0x30e58
			}
			// 0x30e58
			v26 = v25 + v6;
			g33 = v26;
			result = v23;
			// branch -> 0x30ea8
			// 0x30ea8
			if (*v22 == 0) {
				// 0x30eb4
				g10 = v2;
				return result;
			}
			v12 = result;
			v8 = v26;
			int32_t v33 = v25; // 0x30e7c
			int32_t v34 = v3;  // 0x30e70
			int32_t v35 = v4;  // 0x30e6c
			int32_t v36 = v5;  // 0x30e68
			v7 = v1;
			while (true) {
				// 0x30e60
				v13 = v7 + 1;
				g30 = v13;
				v19 = *(char *)((int32_t) * (char *)v7 + v36);
				v20 = *(char *)((int32_t)v19 + v35);
				v21 = v20;
				v18 = v21 + v34;
				g28 = v18;
				v15 = v33 + 1 + (int32_t) * (char *)v18;
				g32 = v15;
				result2 = v12;
				v11 = v13;
				v16 = v8;
				v10 = v18;
				if (v20 != 0) {
				lab_0x30e88:
					// 0x30e88
					if (v15 <= 222) {
						// 0x30e90
						result2 = function_2d918(v8, v21, g31);
						v11 = g30;
						v16 = g33;
						v10 = g28;
						// branch -> 0x30e9c
					} else {
						result2 = v12;
						v11 = v13;
						v16 = v8;
						v10 = v18;
					}
				}
			lab_0x30e9c:;
				int32_t v37 = v16 + 1 + (int32_t) * (char *)v10; // 0x30ea4
				g33 = v37;
				if (*(char *)v11 == 0) {
					// 0x30eb4
					g10 = v2;
					return result2;
				}
				// 0x30e9c
				v12 = result2;
				v8 = v37;
				v33 = g32;
				v34 = g35;
				v35 = g36;
				v36 = g29;
				v7 = v11;
				// branch -> 0x30e60
			}
		}
		// 0x30e48
		v25 = 0;
		if (v23 <= 221) {
			// 0x30e50
			v24 = 222 - v23;
			v27 = v24 / 2 | v24 & -0x80000000;
			g32 = v27;
			v25 = v27;
			// branch -> 0x30e58
		}
		// 0x30e58
		v26 = v25 + v6;
		g33 = v26;
		v17 = v22;
		result = v23;
		v9 = v26;
		v14 = v25;
		// branch -> 0x30ea8
	}
	// 0x30ea8
	if (*v17 == 0) {
		// 0x30eb4
		g10 = v2;
		return result;
	}
	v12 = result;
	v8 = v9;
	v7 = v1;
	while (true) {
		// 0x30e60
		v13 = v7 + 1;
		g30 = v13;
		v19 = *(char *)((int32_t) * (char *)v7 + v5);
		v20 = *(char *)((int32_t)v19 + v4);
		v21 = v20;
		v18 = v21 + v3;
		g28 = v18;
		v15 = v14 + 1 + (int32_t) * (char *)v18;
		g32 = v15;
		if (v20 == 0) {
			result2 = v12;
			v11 = v13;
			v16 = v8;
			v10 = v18;
			goto lab_0x30e9c;
		}
		goto lab_0x30e88;
	}
}

// Address range: 0x30ec8 - 0x31024
int32_t GetSBookTrans(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0x30ed0
	g32 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0x30ed8
	g35 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0x30edc
	g36 = v3;
	g33 = 1;
	int32_t v4 = *(int32_t *)v2;   // 0x30efc
	int32_t v5 = 0x55ec * v4 + v3; // 0x30f08
	int32_t v6 = 0x1000000;        // 0x30f6c2
	if (*(int32_t *)(v5 + 0x5564) % 2 != 0) {
		// 0x30f2c
		g33 = 3;
		v6 = 0x3000000;
		// branch -> 0x30f30
	}
	int32_t v7 = *(int32_t *)(v5 + 268);  // 0x30f3c
	uint32_t v8 = (a1 - 1) % 64;          // 0x30f40
	int32_t v9 = 1 << v8;                 // 0x30f40
	int32_t v10 = *(int32_t *)(v5 + 272); // 0x30f44
	if ((v10 & v9 || v7 & (v9 >> 31 & -2 | (int32_t)(v8 == 31))) != 0) {
		// 0x30f68
		g33 = 0;
		v6 = 0;
		// branch -> 0x30f6c
	}
	// 0x30f6c
	int32_t v11; // 0x30fd4
	if ((v6 & -0x1000000) != 0x1000000) {
		// 0x30fcc
		if (g32 == 0) {
			// 0x3100c
			g10 = v1;
			return g33;
		}
		// 0x30fd4
		v11 = g23;
		if (*(char *)*(int32_t *)(v11 - 0x77e4) != 0) {
			// 0x3100c
			g10 = v1;
			return g33;
		}
		// 0x30fe4
		if (0x1000000 * g33 != 0x4000000) {
			// 0x30ff0
			if (*(int32_t *)(*(int32_t *)(v11 - 0x769c) + 56 * a1 + 24) == 0) {
				// 0x31008
				g33 = 4;
				// branch -> 0x3100c
			}
		}
		// 0x3100c
		g10 = v1;
		return g33;
	}
	// 0x30f78
	if (function_b5d18(v4, a1, 1, 1) == 0) {
		// 0x30f94
		g33 = 4;
		// branch -> 0x30f98
	}
	int32_t v12 = g36 + 0x55ec * *(int32_t *)g35; // 0x30fa0
	unsigned char v13 = *(char *)(v12 + 0x5570);  // 0x30fa8
	char v14 = *(char *)(a1 + v12 + 193);         // 0x30fac
	if (0x1000000 * ((int32_t)v14 + (int32_t)v13) <= 0) {
		// 0x30fc8
		g33 = 4;
		// branch -> 0x30fcc
	}
	// 0x30fcc
	if (g32 == 0) {
		// 0x3100c
		g10 = v1;
		return g33;
	}
	// 0x30fd4
	v11 = g23;
	if (*(char *)*(int32_t *)(v11 - 0x77e4) == 0) {
		// 0x30fe4
		if (0x1000000 * g33 != 0x4000000) {
			// 0x30ff0
			if (*(int32_t *)(*(int32_t *)(v11 - 0x769c) + 56 * a1 + 24) == 0) {
				// 0x31008
				g33 = 4;
				// branch -> 0x3100c
			}
		}
	}
	// 0x3100c
	g10 = v1;
	return g33;
}

// Address range: 0x31024 - 0x31338
int32_t DrawSpellBook(int32_t a1)
{
	// 0x31024
	g24 = *(int32_t *)(g23 - 0x6558);
	g22 = *(int32_t *)(g23 - 0x6554);
	g21 = *(int32_t *)(g23 - 0x6550);
	g20 = *(int32_t *)(g23 - 0x654c);
	g19 = *(int32_t *)(g23 - 0x6548);
	g18 = g23 - 0x2bb0;
	g26 = *(int32_t *)(g23 - 0x76f8);
	g17 = *(int32_t *)(g23 - 0x6484);
	g16 = *(int32_t *)(g23 - 0x6480);
	CelDecodeOnly(384, 511, *(int32_t *)(g23 - 0x4fc8), 1, 320);
	int32_t v1 = *(int32_t *)g26; // 0x3107c
	CelDecodeOnly(76 * v1 + 391, 508, *(int32_t *)(g23 - 0x4fcc), v1 + 1, 76);
	int32_t v2 = g30 + 0x55ec * *(int32_t *)g32; // 0x310ac
	g28 = 4;
	int32_t v3 = *(int32_t *)(v2 + 268); // 0x310c8
	int32_t v4 = *(int32_t *)(v2 + 272); // 0x310cc
	g25 = v3 | *(int32_t *)(v2 + 260) | *(int32_t *)(v2 + 0x5560);
	g27 = v4 | *(int32_t *)(v2 + 264) | *(int32_t *)(v2 + 0x5564);
	int32_t v5 = 215; // 0x3131c6
	int32_t v6 = 1;   // 0x313103
	int32_t v7 = 4;   // 0x310e4
	// branch -> 0x310dc
	int32_t result; // 0x310e4
	while (true) {
		// 0x310dc
		result = 28 * *(int32_t *)g26 + v7;
		int32_t v8 = *(int32_t *)(g18 + result - 4); // 0x310ec
		g36 = v8;
		int32_t v9 = v5;  // 0x3131c
		int32_t v10 = v7; // 0x31314
		int32_t v11 = v6; // 0x31310
		int32_t v12;      // 0x31310
		int32_t v13;      // 0x31314
		if (v8 != -1) {
			// 0x310fc
			if (g27 % 2 != 0) {
				// 0x31128
				g34 = GetSBookTrans(v8, 1);
				SetSpellTrans();
				char v14 = *(char *)(g36 + g23 - 0x2cf8); // 0x3114c
				DrawSpellCel(395, g33, *(int32_t *)(g23 - 0x4fd0), (int32_t)v14, 37);
				int32_t v15 = g30 + 0x55ec * *(int32_t *)g32; // 0x31164
				int32_t v16 = *(int32_t *)(v15 + 180);        // 0x31168
				int32_t v17 = g36;                            // 0x3116c
				int32_t v18 = v17;                            // 0x311a8
				if (v17 == v16) {
					// 0x31174
					if (0x1000000 * g31 / 0x1000000 == (int32_t) * (char *)(v15 + 184)) {
						// 0x31188
						g34 = 0;
						SetSpellTrans();
						DrawSpellCel(395, g33, *(int32_t *)(g23 - 0x4fd0), 43, 37);
						v18 = g36;
						// branch -> 0x311a8
					} else {
						v18 = v16;
					}
				}
				int32_t v19 = *(int32_t *)(*(int32_t *)(g23 - 0x769c) + (56 * v18 | 4)); // 0x311bc
				PrintSBookStr(10, g33 - 23, 0, (char *)v19, 0);
				uint32_t v20 = 0x1000000 * GetSBookTrans(g36, 0); // 0x311d8
				int32_t v21;
				int32_t v22;
				int32_t v23;
				if (v20 == 0x3000000) {
					// 0x31204
					g37 = g20;
					g38 = *(int32_t *)(g30 + 0x55ec * *(int32_t *)g32 + 2876);
					sprintf();
					// branch -> 0x312f8
				} else {
					// 0x311e4
					if (v20 <= 0x3000000) {
						// 0x311e8
						if ((v20 || 0xffffff) < 0x1ffffff) {
							// 0x311f4
							g34 = g35;
							g37 = g19;
							strcpy();
							// branch -> 0x312f8
						lab_0x312f8_2:
							// 0x312f8
							result = PrintSBookStr(10, g33 - 12, 0, (char *)g35, 0);
							// branch -> 0x31310
						lab_0x31310_2:
							// 0x31310
							v12 = v21 + 1;
							v13 = v22 + 4;
							g28 = v13;
							if (v12 >= 8) {
								// break -> 0x31324
								break;
							}
							v5 = v23 + 43;
							v6 = v12;
							v7 = v13;
							// continue -> 0x310dc
							continue;
						}
					}
					// 0x31224
					g34 = *(int32_t *)g32;
					g37 = g36;
					g31 = GetManaAmount() / 64;
					int32_t v24; // bp-84
					int32_t v25; // bp-88
					GetDamageAmt(g36, (int32_t)&v24, (int32_t)&v25);
					if (v24 == -1) {
						// 0x31268
						g37 = g22;
						g38 = g31;
						sprintf();
						// branch -> 0x31278
					} else {
						// 0x31250
						g37 = g21;
						g38 = g31;
						sprintf();
						// branch -> 0x31278
					}
					// 0x31278
					if (g36 == 36) {
						// 0x31280
						g37 = g24;
						g38 = g31;
						sprintf();
						// branch -> 0x31290
					}
					// 0x31290
					PrintSBookStr(10, g33 - 1, 0, (char *)g35, 0);
					int32_t v26 = g30 + 0x55ec * *(int32_t *)g32;                    // 0x312b4
					char v27 = *(char *)(v26 + g36 + 193);                           // 0x312b8
					int32_t v28 = (int32_t) * (char *)(v26 + 0x5570) + (int32_t)v27; // 0x312c8
					int32_t v29 = v28;
					int32_t v30 = v28; // 0x312d4
					if (v28 <= 0xffffffff) {
						// 0x312d0
						v29 = 0;
						v30 = 0;
						// branch -> 0x312d4
					}
					// 0x312d4
					g38 = v29;
					if (v30 == 0) {
						// 0x312dc
						g37 = g16;
						sprintf();
						// branch -> 0x312f8
						goto lab_0x312f8_2;
					} else {
						// 0x312ec
						g37 = g17;
						sprintf();
						// branch -> 0x312f8
						goto lab_0x312f8_2;
					}
				}
				int32_t v31 = PrintSBookStr(10, g33 - 12, 0, (char *)g35, 0); // 0x3130c
				v21 = g29;
				v22 = g28;
				v23 = g33;
				result = v31;
				// branch -> 0x31310
				goto lab_0x31310_2;
			} else {
				result = 0;
			}
			// 0x31310
			v12 = v6 + 1;
			v13 = v7 + 4;
			g28 = v13;
			if (v12 >= 8) {
				// break -> 0x31324
				break;
			}
			v5 += 43;
			v6 = v12;
			v7 = v13;
			// continue -> 0x310dc
			continue;
		}
		// 0x31310
		v12 = v11 + 1;
		v13 = v10 + 4;
		g28 = v13;
		if (v12 >= 8) {
			// break -> 0x31324
			break;
		}
		v5 = v9 + 43;
		v6 = v12;
		v7 = v13;
		// continue -> 0x310dc
	}
	// 0x31324
	return result;
}

// Address range: 0x31338 - 0x314d0
int32_t function_31338(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x76a8); // 0x31340
	int32_t result = v1;                     // r3
	int32_t v2 = *(int32_t *)(g23 - 0x76f8); // 0x31344
	g33 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x76ac); // 0x31348
	g35 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x77a8); // 0x3134c
	g36 = v4;
	int32_t v5 = *(int32_t *)v1; // 0x31358
	g32 = v5;
	int32_t v6 = v5; // 0x314a0
	int32_t v7;      // 0x314b0
	int32_t v8;      // 0x31488
	uint64_t v9;     // 0x314a8
	int32_t v10;     // 0x314ac
	if (v5 < 331) {
		// 0x31478
		if (v6 < 327 || v6 > 632) {
			// 0x314bc
			return result;
		}
		// 0x31488
		v8 = *(int32_t *)g35;
		if (v8 < 320) {
			// 0x314bc
			return result;
		}
		// 0x31494
		if (v8 <= 348) {
			// 0x3149c
			v9 = 0x6bca1af3 * (int64_t)(v6 - 327);
			v10 = (int32_t)(v9 / 0x100000000) >> 31;
			v7 = v10 < 0;
			result = v7;
			*(int32_t *)g33 = (v10 & -0x8000000 | (int32_t)(v9 / 0x2000000000)) + v7;
			// branch -> 0x314bc
		}
		// 0x314bc
		return result;
	}
	// 0x31364
	if (v5 > 367) {
		v6 = v5;
		// 0x31478
		if (v6 < 327 || v6 > 632) {
			// 0x314bc
			return result;
		}
		// 0x31488
		v8 = *(int32_t *)g35;
		if (v8 < 320) {
			// 0x314bc
			return result;
		}
		// 0x31494
		if (v8 <= 348) {
			// 0x3149c
			v9 = 0x6bca1af3 * (int64_t)(v6 - 327);
			v10 = (int32_t)(v9 / 0x100000000) >> 31;
			v7 = v10 < 0;
			result = v7;
			*(int32_t *)g33 = (v10 & -0x8000000 | (int32_t)(v9 / 0x2000000000)) + v7;
			// branch -> 0x314bc
		}
		// 0x314bc
		return result;
	}
	uint32_t v11 = *(int32_t *)v3; // 0x3136c
	if (v11 < 18 || v11 > 313) {
		v6 = v5;
		// 0x31478
		if (v6 < 327 || v6 > 632) {
			// 0x314bc
			return result;
		}
		// 0x31488
		v8 = *(int32_t *)g35;
		if (v8 < 320) {
			// 0x314bc
			return result;
		}
		// 0x31494
		if (v8 <= 348) {
			// 0x3149c
			v9 = 0x6bca1af3 * (int64_t)(v6 - 327);
			v10 = (int32_t)(v9 / 0x100000000) >> 31;
			v7 = v10 < 0;
			result = v7;
			*(int32_t *)g33 = (v10 & -0x8000000 | (int32_t)(v9 / 0x2000000000)) + v7;
			// branch -> 0x314bc
		}
		// 0x314bc
		return result;
	}
	uint64_t v12 = 0x2fa0be83 * (int64_t)(v11 - 18);                                       // 0x31390
	int32_t v13 = (int32_t)(v12 / 0x100000000) >> 31;                                      // 0x313a0
	int32_t v14 = (v13 & -0x20000000 | (int32_t)(v12 / 0x800000000)) + (int32_t)(v13 < 0); // 0x313a8
	int32_t v15 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v4;                    // 0x313b0
	int32_t v16 = *(int32_t *)(v15 + 260);                                                 // 0x313bc
	int32_t v17 = *(int32_t *)(v15 + 0x5564);                                              // 0x313c0
	int32_t v18 = *(int32_t *)(28 * *(int32_t *)v2 + 4 * v14 + g23 - 0x2bb0);              // 0x313d0
	int32_t v19 = *(int32_t *)(v15 + 264) | v17;                                           // 0x313dc
	result = v19;
	uint32_t v20 = *(int32_t *)(v15 + 272); // 0x313e0
	int32_t v21 = v20 | v19;                // 0x313e8
	g24 = v21;
	g25 = *(int32_t *)(v15 + 268) | v16 | *(int32_t *)(v15 + 0x5560);
	if (v18 == -1) {
		v6 = v5;
		// 0x31478
		if (v6 < 327 || v6 > 632) {
			// 0x314bc
			return result;
		}
		// 0x31488
		v8 = *(int32_t *)g35;
		if (v8 < 320) {
			// 0x314bc
			return result;
		}
		// 0x31494
		if (v8 <= 348) {
			// 0x3149c
			v9 = 0x6bca1af3 * (int64_t)(v6 - 327);
			v10 = (int32_t)(v9 / 0x100000000) >> 31;
			v7 = v10 < 0;
			result = v7;
			*(int32_t *)g33 = (v10 & -0x8000000 | (int32_t)(v9 / 0x2000000000)) + v7;
			// branch -> 0x314bc
		}
		// 0x314bc
		return result;
	}
	// 0x313f4
	result = 0;
	if (v21 % 2 != 0) {
		int32_t v22 = 2 * v17 & 2 | 1; // r6
		if (v20 % 2 != 0) {
			// 0x3145c
			v22 = 0;
			// branch -> 0x31460
		}
		// 0x31460
		result = *(int32_t *)(g23 - 0x76bc);
		*(int32_t *)(v15 + 180) = v18;
		*(char *)(v15 + 184) = (char)v22;
		*(int32_t *)result = 255;
		v6 = g32;
		// branch -> 0x31478
	} else {
		v6 = v5;
	}
	// 0x31478
	if (v6 < 327 || v6 > 632) {
		// 0x314bc
		return result;
	}
	// 0x31488
	v8 = *(int32_t *)g35;
	if (v8 < 320) {
		// 0x314bc
		return result;
	}
	// 0x31494
	if (v8 <= 348) {
		// 0x3149c
		v9 = 0x6bca1af3 * (int64_t)(v6 - 327);
		v10 = (int32_t)(v9 / 0x100000000) >> 31;
		v7 = v10 < 0;
		result = v7;
		*(int32_t *)g33 = (v10 & -0x8000000 | (int32_t)(v9 / 0x2000000000)) + v7;
		// branch -> 0x314bc
	}
	// 0x314bc
	return result;
}

// Address range: 0x314d0 - 0x314e8
int32_t function_314d0(int32_t a1)
{
	// 0x314d0
	if (a1 == 1) {
		// 0x314d8
		return *(int32_t *)(g23 - 0x655c);
	}
	// 0x314e0
	return *(int32_t *)(g23 - 0x6560);
}

// Address range: 0x314e8 - 0x31654
int32_t DrawGoldSplit(int32_t a1)
{
	int32_t v1 = g10; // 0x314ec
	CelDecodeOnly(415, 338, *(int32_t *)(g23 - 0x4fb4), 1, 261);
	g37 = *(int32_t *)(g23 - 0x6564);
	g38 = *(int32_t *)g36;
	sprintf();
	g40 = 3;
	ADD_PlrStringXY(366, 87, 600, (char *)g30);
	int32_t v2 = function_314d0(*(int32_t *)g36); // 0x3155c
	g37 = *(int32_t *)(g23 - 0x6568);
	g38 = v2;
	sprintf();
	g40 = 3;
	ADD_PlrStringXY(366, 103, 600, (char *)g30);
	g40 = 3;
	ADD_PlrStringXY(366, 121, 600, (char *)*(int32_t *)(g23 - 0x656c));
	int32_t v3 = g28; // 0x315a0
	int32_t v4 = v3;  // 0x315cc
	if (v3 >= 1) {
		// 0x315a8
		g37 = *(int32_t *)(g23 - 0x6570);
		g38 = v3;
		sprintf();
		PrintGameStr(388, 140, (char *)g30, 0);
		v4 = g28;
		// branch -> 0x315cc
	}
	// 0x315cc
	int32_t *v5;    // 0x31630
	int32_t result; // 0x31634
	int32_t v6;     // 0x31614
	if (v4 < 1) {
		// 0x31614
		v6 = *(int32_t *)(g23 - 0x7774);
		CelDecodeOnly(450, 300, *(int32_t *)v6, *(int32_t *)g35, 12);
		v5 = (int32_t *)g35;
		result = *v5 % 8;
		*v5 = result + 1;
		g10 = v1;
		return result;
	}
	int32_t v7 = g30;               // 0x315f81
	unsigned char v8 = *(char *)v7; // 0x315f83
	if (v8 <= 0) {
		// 0x315d4
		// branch -> 0x31608
		// 0x31608
		// branch -> 0x31614
		// 0x31614
		v6 = *(int32_t *)(g23 - 0x7774);
		CelDecodeOnly(g29 + 452, 300, *(int32_t *)v6, *(int32_t *)g35, 12);
		v5 = (int32_t *)g35;
		result = *v5 % 8;
		*v5 = result + 1;
		g10 = v1;
		return result;
	}
	int32_t v9 = v7 + 1;                                                          // 0x315e0
	int32_t v10 = 1;                                                              // 0x315e4
	unsigned char v11 = *(char *)((int32_t) * (char *)((int32_t)v8 + g33) + g32); // 0x315e8
	int32_t v12 = g29 + 1 + (int32_t) * (char *)((int32_t)v11 + g31);             // 0x315f4
	unsigned char v13 = *(char *)v9;                                              // 0x315f8
	// branch -> 0x315dc
	while (v10 < (int32_t)v13) {
		// 0x315dc
		v9++;
		v10++;
		v11 = *(char *)((int32_t) * (char *)((int32_t)v13 + g33) + g32);
		v12 = v12 + 1 + (int32_t) * (char *)((int32_t)v11 + g31);
		v13 = *(char *)v9;
		// continue -> 0x315dc
	}
	// 0x31608
	// branch -> 0x31614
	// 0x31614
	v6 = *(int32_t *)(g23 - 0x7774);
	CelDecodeOnly(v12 + 452, 300, *(int32_t *)v6, *(int32_t *)g35, 12);
	v5 = (int32_t *)g35;
	result = *v5 % 8;
	*v5 = result + 1;
	g10 = v1;
	return result;
}

// Address range: 0x31654 - 0x317dc
int32_t function_31654(char a1, int32_t a2)
{
	// 0x31654
	g31 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0x31660
	g32 = *(int32_t *)(g23 - 0x770c);
	g36 = *(int32_t *)(g23 - 0x7708);
	int32_t v2 = *(int32_t *)(g23 - 0x7704); // 0x31670
	g35 = v2;
	int32_t result = 0x55ec * *(int32_t *)v1 + *(int32_t *)(g23 - 0x77a8); // 0x31684
	if (*(int32_t *)(result + 404) <= 63) {
		// 0x31694
		*(int32_t *)v2 = 0;
		*(int32_t *)g36 = 0;
		// branch -> 0x317c8
		// 0x317c8
		return result;
	}
	// 0x316a4
	char v3;          // bp-40
	int32_t v4 = &v3; // 0x316a4
	g37 = 0;
	g38 = 6;
	function_e3f00(v4, 0, 6);
	int32_t v5 = *(int32_t *)g36; // 0x316b4
	g34 = v5;
	int32_t result2 = function_ebc20(v5, v4, 10); // r3
	int32_t v6 = 0x1000000 * g31;                 // 0x316c8
	if (v6 == 0xd000000) {
		// 0x316d4
		if (*(int32_t *)g36 >= 1) {
			// 0x316e0
			int32_t v7;
			int32_t v8 = *(int32_t *)(v7 - 0x7710); // 0x316e0
			result2 = function_317dc(*(int32_t *)v1, *(int32_t *)v8);
			// branch -> 0x316f0
		}
		// 0x316f0
		*(int32_t *)g35 = 0;
		// branch -> 0x317c8
		// 0x317c8
		return result2;
	}
	// 0x316fc
	if (v6 == 0x1b000000) {
		// 0x31704
		*(int32_t *)g35 = 0;
		*(int32_t *)g36 = 0;
		// branch -> 0x317c8
		// 0x317c8
		return result2;
	}
	// 0x31714
	if (v6 == 0x8000000) {
		// 0x3171c
		g34 = v4;
		int32_t v9; // bp-41
		*(char *)(CPrintString() + (int32_t)&v9) = 0;
		int32_t v10 = function_e97e0(v4); // 0x31734
		result2 = v10;
		*(int32_t *)g36 = v10;
		// branch -> 0x317c8
	} else {
		// 0x31740
		if (v6 >= 0x30000000) {
			// 0x31748
			if (v6 / 0x1000000 <= 57) {
				// 0x31750
				int32_t result3; // 0x317c0
				if (*(int32_t *)g36 == 0) {
					int32_t v11 = function_e97e0(v4); // 0x31760
					if (v11 > *(int32_t *)g32) {
						// 0x31770
						v3 = g31;
						// branch -> 0x317bc
						// 0x317bc
						result3 = function_e97e0(v4);
						*(int32_t *)g36 = result3;
						// branch -> 0x317c8
						// 0x317c8
						return result3;
					}
				}
				// 0x31778
				g34 = v4;
				*(char *)(CPrintString() + v4) = (char)g31;
				int32_t v12 = function_e97e0(v4); // 0x3178c
				result2 = v12;
				if (v12 <= *(int32_t *)g32) {
					// 0x3179c
					g34 = v4;
					g35 = CPrintString();
					g34 = v4;
					int32_t v13 = CPrintString(); // 0x317ac
					result2 = v13;
					if (v13 <= g35) {
						// 0x317bc
						result3 = function_e97e0(v4);
						result2 = result3;
						*(int32_t *)g36 = result3;
						// branch -> 0x317c8
					}
				}
			}
		}
	}
	// 0x317c8
	return result2;
}

// Address range: 0x317dc - 0x318f4
int32_t function_317dc(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7708); // 0x317e8
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0x317ec
	g36 = v2;
	g33 = a1;
	int32_t result; // 0x318d0
	int32_t v3;     // 0x31894
	int32_t v4;     // 0x318b4
	if (a2 > 46) {
		int32_t v5 = a2 - 47; // 0x31848
		g37 = v5;
		int32_t v6 = v2 + 368 * v5 + 0x55ec * a1; // 0x3185c
		int32_t *v7 = (int32_t *)(v6 + 0x4918);   // 0x31860
		*v7 = *v7 - *(int32_t *)v1;
		int32_t v8 = g33; // 0x31884
		if (*(int32_t *)(v6 + 0x4918) < 1) {
			// 0x31884
			function_595cc(v8);
			// branch -> 0x3188c
		} else {
			// 0x31878
			function_bb1fc(v8, v5);
			// branch -> 0x3188c
		}
		// 0x3188c
		v3 = 0x55ec * g33 + 0x53d4 + g36;
		g37 = 0;
		function_5d078(v3);
		function_5d1cc(g33, (int32_t *)v3);
		v4 = g31 + g36;
		g36 = v4;
		*(int32_t *)(v4 + 0x5498) = *(int32_t *)g35;
		*(int32_t *)(g36 + 0x5538) = 1;
		function_318f4(g33);
		result = function_5b990(g33);
		*(int32_t *)(g36 + 456) = result;
		*(int32_t *)g35 = 0;
		return result;
	}
	int32_t v9 = a2 - 7; // 0x31800
	g37 = v9;
	int32_t v10 = v2 + 368 * v9 + 0x55ec * a1; // 0x31814
	int32_t *v11 = (int32_t *)(v10 + 3948);    // 0x31818
	*v11 = *v11 - *(int32_t *)v1;
	int32_t v12 = g33; // 0x3183c
	if (*(int32_t *)(v10 + 3948) < 1) {
		// 0x3183c
		function_591d8(v12);
		// branch -> 0x3188c
	} else {
		// 0x31830
		function_bb1b0(v12, v9);
		// branch -> 0x3188c
	}
	// 0x3188c
	v3 = 0x55ec * g33 + 0x53d4 + g36;
	g37 = 0;
	function_5d078(v3);
	function_5d1cc(g33, (int32_t *)v3);
	v4 = g31 + g36;
	g36 = v4;
	*(int32_t *)(v4 + 0x5498) = *(int32_t *)g35;
	*(int32_t *)(g36 + 0x5538) = 1;
	function_318f4(g33);
	result = function_5b990(g33);
	*(int32_t *)(g36 + 456) = result;
	*(int32_t *)g35 = 0;
	return result;
}

// Address range: 0x318f4 - 0x31960
int32_t function_318f4(int32_t a1)
{
	int32_t v1 = 0x55ec * a1;                // 0x318f8
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0x31900
	int32_t v3 = v2 + v1;                    // 0x31908
	int32_t v4 = *(int32_t *)(v3 + 0x5498);  // 0x3190c
	int32_t v5;                              // 0x31948
	if (v4 >= 2500) {
		// 0x31918
		*(int32_t *)(v3 + 0x5494) = 6;
		// branch -> 0x31940
		// 0x31940
		v5 = *(int32_t *)(v1 + v2 + 0x5494) + 12;
		g34 = v5;
		return function_324ec(v5);
	}
	// 0x31924
	if (v4 > 1000) {
		// 0x31938
		*(int32_t *)(v3 + 0x5494) = 5;
		// branch -> 0x31940
	} else {
		// 0x3192c
		*(int32_t *)(v3 + 0x5494) = 4;
		// branch -> 0x31940
	}
	// 0x31940
	v5 = *(int32_t *)(v1 + v2 + 0x5494) + 12;
	g34 = v5;
	return function_324ec(v5);
}

// Address range: 0x31960 - 0x31a24
int32_t function_31960(char *a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x31960
	g39 = a4;
	g37 = a2;
	int32_t v1 = g10; // 0x31964
	g35 = (int32_t)a1;
	g31 = g23 - 0x2da0;
	g32 = g23 - 0x2e20;
	g33 = g23 - 0x2ae8;
	int32_t v2 = g39; // 0x31978
	g36 = v2;
	g28 = g40;
	int32_t v3 = g37; // 0x31980
	g29 = v3 + 264;
	int32_t v4 = *(int32_t *)(g23 - 0x7698); // 0x3198c
	*(int32_t *)v2 = *(int32_t *)(v4 + 4 * a3 + 2136) + v3 + 264;
	int32_t v5 = g35;      // 0x31a001
	char v6 = *(char *)v5; // 0x31a003
	if (v6 == 0) {
		// 0x31a10
		g10 = v1;
		return 0;
	}
	while (true) {
		unsigned char v7 = *(char *)(g33 + (int32_t)v6); // 0x319ac
		unsigned char v8 = *(char *)(g32 + (int32_t)v7); // 0x319b0
		int32_t v9 = v8;                                 // 0x319b0
		g37 = v9;
		int32_t v10 = g31 + v9; // 0x319b4
		g30 = v10;
		int32_t v11 = (int32_t) * (char *)v10 + 1 + g29; // 0x319c0
		g29 = v11;
		int32_t result = v5;
		if (v11 < 515) {
			// 0x319d4
			g35 = v5 + 1;
			if (v8 != 0) {
				// 0x319e0
				function_2d918(g39, v9, 0x1000000 * g28 / 0x1000000);
				v10 = g30;
				// branch -> 0x319ec
			}
			// 0x319ec
			*(int32_t *)g36 = (int32_t) * (char *)v10 + g39 + 1;
			int32_t v12 = g35;       // 0x31a00
			char v13 = *(char *)v12; // 0x31a00
			if (v13 == 0) {
				// break -> 0x31a10
				break;
			}
			v5 = v12;
			v6 = v13;
			// continue -> 0x319ac
			continue;
		}
		// 0x31a10
		g10 = v1;
		return result;
	}
	// 0x31a10
	g10 = v1;
	return 0;
}

// Address range: 0x31a24 - 0x31cbc
int32_t DrawTalkPan(int32_t a1)
{
	int32_t v1 = g10;                            // 0x31a28
	int32_t result = *(int32_t *)(g23 - 0x76d0); // 0x31a2c
	if (*(int32_t *)result == 0) {
		// 0x31ca8
		g10 = v1;
		return result;
	}
	// 0x31a48
	g39 = 5;
	function_2dc34(175, *(int32_t *)(g23 - 0x4fd8) + 20, 294, 5, 239, 516);
	int32_t v2 = 0;                          // 0x31a88
	int32_t v3 = *(int32_t *)(g23 - 0x4fd8); // 0x31a6c
	int32_t v4 = v2 / 2 | v2 & -0x80000000;  // 0x31a70
	g39 = 1;
	function_2dc34(v4 + 175, v2 + 25 + v3, 293 - v2, 1, v4 + 239, v2 + 521);
	int32_t v5 = 1; // 0x31a94
	// branch -> 0x31a6c
	while (v5 < 10) {
		// 0x31a6c
		v2 = v5;
		v3 = *(int32_t *)(g23 - 0x4fd8);
		v4 = v2 / 2 | v2 & -0x80000000;
		g39 = 1;
		function_2dc34(v4 + 175, v2 + 25 + v3, 293 - v2, 1, v4 + 239, v2 + 521);
		v5++;
		// continue -> 0x31a6c
	}
	// 0x31aa0
	g39 = 30;
	function_2dc34(185, *(int32_t *)(g23 - 0x4fd8) + 35, 274, 30, 249, 531);
	g39 = 5;
	function_2dc34(180, *(int32_t *)(g23 - 0x4fd8) + 65, 284, 5, 244, 561);
	int32_t v6 = 0;                          // 0x31ae8
	int32_t v7 = *(int32_t *)(g23 - 0x4fd8); // 0x31ae4
	g39 = 1;
	function_2dc34(180, v6 + 70 + v7, v6 + 284, 1, 244, v6 + 566);
	int32_t v8 = 1; // 0x31b08
	// branch -> 0x31ae4
	while (v8 < 10) {
		// 0x31ae4
		v6 = v8;
		v7 = *(int32_t *)(g23 - 0x4fd8);
		g39 = 1;
		function_2dc34(180, v6 + 70 + v7, v6 + 284, 1, 244, v6 + 566);
		v8++;
		// continue -> 0x31ae4
	}
	// 0x31b14
	g39 = 55;
	function_2dc34(170, *(int32_t *)(g23 - 0x4fd8) + 80, 310, 55, 234, 576);
	int32_t v9;        // bp-56
	int32_t v10 = &v9; // 0x31b40
	int32_t v11 = 0;   // 0x31b44
	// branch -> 0x31b40
	while (true) {
		// 0x31b40
		g40 = 0;
		if (function_31960(NULL, v11, v10, 0) == 0) {
			// 0x31b6c
			// branch -> 0x31b7c
		} else {
			int32_t v12 = g35 + 13; // 0x31b60
			g35 = v12;
			if (g28 >= 2) {
				// break -> 0x31b74
				break;
			}
			v11 = v12;
			// continue -> 0x31b40
			continue;
		}
		int32_t v13 = *(int32_t *)(g23 - 0x7774);             // 0x31b84
		int32_t v14 = *(int32_t *)*(int32_t *)(g23 - 0x7804); // 0x31b88
		int32_t v15 = *(int32_t *)(g23 - 0x4fd4);             // 0x31b94
		CelDecDatOnly(v9 + v14, *(int32_t *)v13, v15, 12, v14);
		int32_t *v16 = (int32_t *)(g23 - 0x4fd4); // 0x31ba0
		g35 = 0;
		g37 = 0;
		g32 = *(int32_t *)(g23 - 0x64c8);
		g30 = *(int32_t *)(g23 - 0x77a8);
		g33 = g23 - 0x4fe0;
		int32_t v17 = *v16 % 8; // 0x31bb8
		int32_t result2 = v17;  // r3
		g31 = 596;
		*v16 = v17 + 1;
		int32_t v18 = g35; // 0x31bc8
		g28 = v18;
		g29 = g37 + 60;
		// branch -> 0x31bd0
		while (true) {
			int32_t v19 = v18; // 0x31c94
			if (v18 != *(int32_t *)g36) {
				// 0x31bdc
				if (*(char *)g33 == 0) {
					// 0x31c24
					g27 = 2;
					if (*(int32_t *)g32 != 0) {
						// 0x31c48
						// branch -> 0x31c4c
					}
					// 0x31c4c
					result2 = CelDecodeOnly(236, g31, *(int32_t *)(g23 - 0x4fe8), 61, 61);
					// branch -> 0x31c60
				} else {
					// 0x31be8
					g27 = 3;
					if (*(int32_t *)g32 != 0) {
						// 0x31bf8
						result2 = CelDecodeOnly(236, g31, *(int32_t *)(g23 - 0x4fe8), 61, 61);
						// branch -> 0x31c60
					}
				}
				int32_t v20 = g30; // 0x31c60
				if (*(char *)(v20 + 29) != 0) {
					// 0x31c6c
					g40 = g27;
					result2 = function_31960((char *)(v20 + 316), 46, g29, v10);
					// branch -> 0x31c84
				}
				// 0x31c84
				g32 += 4;
				g31 += 18;
				g29 += 18;
				g35++;
				v19 = g28;
				// branch -> 0x31c94
			}
			int32_t v21 = v19 + 1; // 0x31c94
			g28 = v21;
			g30 += 0x55ec;
			g33++;
			if (v21 >= 4) {
				// break -> 0x31ca8
				break;
			}
			v18 = v21;
			// continue -> 0x31bd0
		}
		// 0x31ca8
		// branch -> 0x31ca8
		// 0x31ca8
		g10 = v1;
		return result2;
	}
}

// Address range: 0x31cbc - 0x31d68
int32_t control_check_talk_btn(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x64c8); // 0x31cc0
	if (*(int32_t *)*(int32_t *)(g23 - 0x76d0) == 0) {
		// 0x31cd0
		return 0;
	}
	uint32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x76a8); // 0x31cdc
	if (v2 <= 171) {
		// 0x31ce8
		return 0;
	}
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x76ac); // 0x31cf4
	if (v3 <= 420 || v2 >= 234 || v3 >= 476) {
		// 0x31d00
		return 0;
	}
	int32_t v4 = 0; // r4
	*(int32_t *)v1 = 0;
	*(int32_t *)(v1 + 4) = v4;
	int32_t v5 = (int32_t)(0x38e38e39 * (int64_t)(v3 - 421) / 0x100000000) / 4; // 0x31d4c
	*(int32_t *)(v1 + 8) = v4;
	*(int32_t *)(4 * v5 + v1) = 1;
	return 1;
}

// Address range: 0x31d68 - 0x31e2c
int32_t control_release_talk_btn(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x76d0); // 0x31d68
	int32_t v1 = *(int32_t *)(g23 - 0x64c8);     // 0x31d6c
	if (*(int32_t *)result == 0) {
		// bb
		return result;
	}
	int32_t v2 = 0; // r0
	*(int32_t *)v1 = 0;
	*(int32_t *)(v1 + 4) = v2;
	*(int32_t *)(v1 + 8) = v2;
	int32_t result2 = *(int32_t *)(g23 - 0x76a8); // 0x31d90
	int32_t v3 = *(int32_t *)result2;             // 0x31d90
	if (v3 < 172) {
		// bb
		return result2;
	}
	int32_t result3 = *(int32_t *)(g23 - 0x76ac); // 0x31d9c
	int32_t v4 = *(int32_t *)result3;             // 0x31da0
	if (v4 < 421 || v3 > 233 || v4 > 475) {
		// bb
		return result3;
	}
	uint64_t v5 = 0x38e38e39 * (int64_t)(v4 - 421);              // 0x31dcc
	int32_t v6 = (int32_t)(v5 / 0x100000000) >> 31;              // 0x31dd4
	int32_t v7 = v6 & -0x40000000 | (int32_t)(v5 / 0x400000000); // 0x31dd4
	int32_t v8 = 0;                                              // 0x31df4
	int32_t v9 = v7 + (int32_t)(v6 < 0);                         // 0x31df0
	// branch -> 0x31e00
	int32_t result4; // 0x31e14
	while (true) {
		// 0x31e00
		if (v9 == -1) {
			// 0x31e10
			result4 = g23 - 0x4fe0 + v8;
			*(char *)(result4 - 1) = 0;
			return result4;
		}
		int32_t v10 = v9; // 0x31e0013
		if (v8 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
			// 0x31df0
			v10 = v9 - 1;
			// branch -> 0x31df4
		}
		// 0x31df4
		if (v8 > 2) {
			// break -> 0x31e10
			break;
		}
		v8++;
		v9 = v10;
		// continue -> 0x31e00
	}
	// 0x31e10
	result4 = g23 - 0x4fdc;
	*(char *)(result4 - 1) = 0;
	return result4;
}

// Address range: 0x31e2c - 0x31ee8
int32_t function_31e2c(int32_t a1)
{
	int32_t v1 = g36;                        // 0x31e2c
	int32_t v2 = *(int32_t *)(g23 - 0x64c4); // 0x31e38
	g36 = v2;
	if (*(char *)(g23 - 0x4fe0) != 0) {
		// 0x31e64
		// branch -> 0x31e6c
	}
	// 0x31e6c
	if (*(char *)(g23 - 0x4fdf) != 0) {
		// 0x31e7c
		// branch -> 0x31e84
	}
	// 0x31e84
	if (*(char *)(g23 - 0x4fde) != 0) {
		// 0x31e94
		// branch -> 0x31e9c
	}
	// 0x31e9c
	if (*(char *)(g23 - 0x4fdd) != 0) {
		// 0x31eac
		// branch -> 0x31eb4
	}
	int32_t v3 = function_d00a8((char *)v2); // 0x31eb8
	int32_t result = v3;                     // 0x31ee4
	if (v3 == 0) {
		// 0x31ec4
		result = function_8c084(g35, g36);
		// branch -> 0x31ed0
	}
	// 0x31ed0
	g36 = v1;
	return result;
}

// Address range: 0x31ee8 - 0x31f44
int32_t function_31ee8(void)
{
	int32_t result = *(int32_t *)(g23 - 0x77f0); // 0x31ee8
	int32_t v1 = *(int32_t *)(g23 - 0x64c8);     // r7
	if (*(char *)result == 1) {
		// bb
		return result;
	}
	// 0x31efc
	*(int32_t *)*(int32_t *)(g23 - 0x76d0) = 1;
	int32_t v2 = 0;                               // r5
	int32_t result2 = *(int32_t *)(g23 - 0x76bc); // r3
	*(int32_t *)(g23 - 0x4fd8) = 144;
	*(char *)*(int32_t *)(g23 - 0x64c4) = (char)v2;
	*(int32_t *)(g23 - 0x4fd4) = 1;
	*(int32_t *)v1 = v2;
	*(int32_t *)(v1 + 4) = v2;
	*(int32_t *)(v1 + 8) = v2;
	*(int32_t *)result2 = 255;
	*(char *)(g23 - 0x4fdb) = *(char *)(g23 - 0x4fdc);
	return result2;
}

// Address range: 0x31f44 - 0x31f64
int32_t control_reset_talk(void)
{
	int32_t result = *(int32_t *)(g23 - 0x76bc); // r3
	*(int32_t *)*(int32_t *)(g23 - 0x76d0) = 0;
	*(int32_t *)(g23 - 0x4fd8) = 0;
	*(int32_t *)result = 255;
	return result;
}

// Address range: 0x31f64 - 0x32070
int32_t control_press_enter(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x64c4); // 0x31f6c
	g36 = v1;
	int32_t v2 = g35; // 0x31f70
	g35 = *(int32_t *)(g23 - 0x6574);
	int32_t result; // 0x3204c
	if (*(char *)v1 == 0) {
		// 0x3204c
		result = control_reset_talk();
		g35 = v2;
		return result;
	}
	// 0x31f94
	function_31e2c(v1);
	int32_t v3 = 0;   // r28
	int32_t v4 = g35; // r29
	int32_t v5 = g35; // 0x31fa8
	// branch -> 0x31fa8
	int32_t v6;  // 0x3201c
	int32_t v7;  // 0x32020
	int32_t v8;  // 0x3203c
	int32_t v9;  // 0x3200c
	char *v10;   // 0x31fe8
	char *v11;   // 0x31ff4
	int32_t v12; // 0x32020
	int32_t v13; // 0x32004
	while (true) {
		int32_t v14 = v3;
		v6 = v14;
		if (function_e1db4((char *)v5, g36) != 0) {
			int32_t v15 = v14 + 1; // 0x31fbc
			v3 = v15;
			int32_t v16 = v4 + 80; // 0x31fc0
			v4 = v16;
			if (v15 >= 8) {
				v6 = v15;
				// break -> 0x31fcc
				break;
			}
			v5 = v16;
			// continue -> 0x31fa8
			continue;
		}
		// 0x31fcc
		v13 = (int32_t) * (char *)(g23 - 0x4fdc);
		if (v6 >= 8) {
			// 0x31fd4
			g37 = g36;
			g34 = g35 + 80 * v13;
			strcpy();
			v10 = (char *)(g23 - 0x4fdc);
			*v10 = (char)((int32_t)*v10 + 1);
			v11 = (char *)(g23 - 0x4fdc);
			*v11 = *v11 % 8;
			// branch -> 0x3203c
			// 0x3203c
			v8 = g23;
			*(char *)(v8 - 0x4fdb) = *(char *)(v8 - 0x4fdc);
			*(char *)g36 = (char)0;
			// branch -> 0x3204c
			// 0x3204c
			result = control_reset_talk();
			g35 = v2;
			return result;
		}
		// 0x32004
		v9 = (v13 + 7) % 8;
		if (v6 == v9) {
			// 0x3203c
			v8 = g23;
			*(char *)(v8 - 0x4fdb) = *(char *)(v8 - 0x4fdc);
			*(char *)g36 = (char)0;
			// branch -> 0x3204c
			// 0x3204c
			result = control_reset_talk();
			g35 = v2;
			return result;
		}
		// 0x32018
		v7 = g35;
		v12 = v7 + 80 * v9;
		g37 = v12;
		g34 = v7 + 80 * v6;
		strcpy();
		g34 = v12;
		g37 = g36;
		strcpy();
		// branch -> 0x3203c
		// 0x3203c
		v8 = g23;
		*(char *)(v8 - 0x4fdb) = *(char *)(v8 - 0x4fdc);
		*(char *)g36 = (char)0;
		// branch -> 0x3204c
		// 0x3204c
		result = control_reset_talk();
		g35 = v2;
		return result;
	}
	// 0x31fcc
	v13 = (int32_t) * (char *)(g23 - 0x4fdc);
	if (v6 >= 8) {
		// 0x31fd4
		g37 = g36;
		g34 = g35 + 80 * v13;
		strcpy();
		v10 = (char *)(g23 - 0x4fdc);
		*v10 = (char)((int32_t)*v10 + 1);
		v11 = (char *)(g23 - 0x4fdc);
		*v11 = *v11 % 8;
		// branch -> 0x3203c
		// 0x3203c
		v8 = g23;
		*(char *)(v8 - 0x4fdb) = *(char *)(v8 - 0x4fdc);
		*(char *)g36 = (char)0;
		// branch -> 0x3204c
		// 0x3204c
		result = control_reset_talk();
		g35 = v2;
		return result;
	}
	// 0x32004
	v9 = (v13 + 7) % 8;
	if (v6 != v9) {
		// 0x32018
		v7 = g35;
		v12 = v7 + 80 * v9;
		g37 = v12;
		g34 = v7 + 80 * v6;
		strcpy();
		g34 = v12;
		g37 = g36;
		strcpy();
		// branch -> 0x3203c
	}
	// 0x3203c
	v8 = g23;
	*(char *)(v8 - 0x4fdb) = *(char *)(v8 - 0x4fdc);
	*(char *)g36 = (char)0;
	// branch -> 0x3204c
	// 0x3204c
	result = control_reset_talk();
	g35 = v2;
	return result;
}

// Address range: 0x32070 - 0x3210c
int32_t function_32070(int32_t a1)
{
	int32_t v1 = g10;                        // 0x32074
	int32_t v2 = *(int32_t *)(g23 - 0x64c4); // 0x32084
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1 || *(int32_t *)*(int32_t *)(g23 - 0x76d0) == 0) {
		// 0x3209c
		// branch -> 0x320f4
		// 0x320f4
		g10 = v1;
		return 0;
	}
	// 0x320bc
	int32_t result; // 0x32108
	if (a1 > 31) {
		// 0x320cc
		g34 = v2;
		int32_t v3 = CPrintString(); // 0x320d0
		if (v3 <= 77) {
			int32_t v4 = v2 + v3; // 0x320e0
			*(char *)v4 = (char)a1;
			*(char *)(v4 + 1) = 0;
			// branch -> 0x320f0
		}
		// 0x320f0
		result = 1;
		// branch -> 0x320f4
	} else {
		// 0x320c4
		result = 0;
		// branch -> 0x320f4
	}
	// 0x320f4
	g10 = v1;
	return result;
}

// Address range: 0x3210c - 0x322ec
int32_t control_up_down(int32_t result, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6574); // r6
	char *v2 = (char *)(g23 - 0x4fdb);       // 0x3211c
	*v2 = (char)(result + (int32_t)*v2);
	char *v3 = (char *)(g23 - 0x4fdb); // 0x32128
	*v3 = *v3 % 8;
	char *v4 = (char *)(g23 - 0x4fdb); // 0x32134
	int32_t v5 = (int32_t)*v4;         // 0x32134
	int32_t v6 = v1 + 80 * v5;         // 0x3213c
	if (*(char *)v6 != 0) {
		// 0x32148
		g34 = *(int32_t *)(g23 - 0x64c4);
		g37 = v6;
		// branch -> 0x322dc
		// 0x322dc
		return strcpy();
	}
	// 0x32158
	*v4 = (char)(result + v5);
	char *v7 = (char *)(g23 - 0x4fdb); // 0x32160
	*v7 = *v7 % 8;
	char *v8 = (char *)(g23 - 0x4fdb); // 0x3216c
	int32_t v9 = (int32_t)*v8;         // 0x3216c
	int32_t v10 = v1 + 80 * v9;        // 0x32174
	if (*(char *)v10 != 0) {
		// 0x32180
		g34 = *(int32_t *)(g23 - 0x64c4);
		g37 = v10;
		// branch -> 0x322dc
		// 0x322dc
		return strcpy();
	}
	// 0x32190
	*v8 = (char)(result + v9);
	char *v11 = (char *)(g23 - 0x4fdb); // 0x32198
	*v11 = *v11 % 8;
	char *v12 = (char *)(g23 - 0x4fdb); // 0x321a4
	int32_t v13 = (int32_t)*v12;        // 0x321a4
	int32_t v14 = v1 + 80 * v13;        // 0x321ac
	if (*(char *)v14 != 0) {
		// 0x321b8
		g34 = *(int32_t *)(g23 - 0x64c4);
		g37 = v14;
		// branch -> 0x322dc
		// 0x322dc
		return strcpy();
	}
	// 0x321c8
	*v12 = (char)(result + v13);
	char *v15 = (char *)(g23 - 0x4fdb); // 0x321d0
	*v15 = *v15 % 8;
	char *v16 = (char *)(g23 - 0x4fdb); // 0x321dc
	int32_t v17 = (int32_t)*v16;        // 0x321dc
	int32_t v18 = v1 + 80 * v17;        // 0x321e4
	if (*(char *)v18 != 0) {
		// 0x321f0
		g34 = *(int32_t *)(g23 - 0x64c4);
		g37 = v18;
		// branch -> 0x322dc
		// 0x322dc
		return strcpy();
	}
	// 0x32200
	*v16 = (char)(result + v17);
	char *v19 = (char *)(g23 - 0x4fdb); // 0x32208
	*v19 = *v19 % 8;
	char *v20 = (char *)(g23 - 0x4fdb); // 0x32214
	int32_t v21 = (int32_t)*v20;        // 0x32214
	int32_t v22 = v1 + 80 * v21;        // 0x3221c
	if (*(char *)v22 != 0) {
		// 0x32228
		g34 = *(int32_t *)(g23 - 0x64c4);
		g37 = v22;
		// branch -> 0x322dc
		// 0x322dc
		return strcpy();
	}
	// 0x32238
	*v20 = (char)(result + v21);
	char *v23 = (char *)(g23 - 0x4fdb); // 0x32240
	*v23 = *v23 % 8;
	char *v24 = (char *)(g23 - 0x4fdb); // 0x3224c
	int32_t v25 = (int32_t)*v24;        // 0x3224c
	int32_t v26 = v1 + 80 * v25;        // 0x32254
	if (*(char *)v26 != 0) {
		// 0x32260
		g34 = *(int32_t *)(g23 - 0x64c4);
		g37 = v26;
		// branch -> 0x322dc
		// 0x322dc
		return strcpy();
	}
	// 0x32270
	*v24 = (char)(result + v25);
	char *v27 = (char *)(g23 - 0x4fdb); // 0x32278
	*v27 = *v27 % 8;
	char *v28 = (char *)(g23 - 0x4fdb); // 0x32284
	int32_t v29 = (int32_t)*v28;        // 0x32284
	int32_t v30 = v1 + 80 * v29;        // 0x3228c
	if (*(char *)v30 != 0) {
		// 0x32298
		g34 = *(int32_t *)(g23 - 0x64c4);
		g37 = v30;
		// branch -> 0x322dc
		// 0x322dc
		return strcpy();
	}
	// 0x322a8
	*v28 = (char)(result + v29);
	char *v31 = (char *)(g23 - 0x4fdb); // 0x322b0
	*v31 = *v31 % 8;
	int32_t v32 = v1 + 80 * (int32_t) * (char *)(g23 - 0x4fdb); // 0x322c4
	if (*(char *)v32 == 0) {
		// branch -> 0x322dc
	} else {
		// 0x322d0
		g34 = *(int32_t *)(g23 - 0x64c4);
		g37 = v32;
		result = strcpy();
		// branch -> 0x322dc
	}
	// 0x322dc
	return result;
}

// Address range: 0x322ec - 0x323c8
int32_t control_presskeys(int32_t a1)
{
	int32_t v1 = g36;                        // 0x322ec
	int32_t v2 = g10;                        // 0x322f0
	int32_t v3 = *(int32_t *)(g23 - 0x64c4); // 0x322fc
	g36 = v3;
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// 0x32310
		// branch -> 0x323b4
		// 0x323b4
		g36 = v1;
		g10 = v2;
		return 0;
	}
	int32_t v4 = *(int32_t *)(g23 - 0x76d0); // 0x32318
	int32_t result;                          // 0x323c4
	if (*(int32_t *)v4 == 0) {
		// 0x32328
		result = 0;
		// branch -> 0x323b4
	} else {
		if (a1 != 32) {
			// 0x32338
			if (a1 == 27) {
				// 0x32340
				control_reset_talk();
				// branch -> 0x323b0
				// 0x323b0
				// branch -> 0x323b4
				// 0x323b4
				g36 = v1;
				g10 = v2;
				return 1;
			}
			// 0x32348
			if (a1 == 13) {
				// 0x32350
				control_press_enter(v4);
				// branch -> 0x323b0
				// 0x323b0
				// branch -> 0x323b4
				// 0x323b4
				g36 = v1;
				g10 = v2;
				return 1;
			}
			// 0x32358
			if (a1 == 8) {
				// 0x32360
				g34 = v3;
				int32_t v5 = CPrintString(); // 0x32364
				if (v5 >= 1) {
					// 0x32370
					*(char *)(g36 + v5 - 1) = 0;
					// branch -> 0x323b0
				}
				// 0x323b0
				// branch -> 0x323b4
				// 0x323b4
				g36 = v1;
				g10 = v2;
				return 1;
			}
			// 0x32380
			if (a1 == 40) {
				// 0x32388
				control_up_down(1, v4);
				// branch -> 0x323b0
				// 0x323b0
				// branch -> 0x323b4
				// 0x323b4
				g36 = v1;
				g10 = v2;
				return 1;
			}
			// 0x32394
			if (a1 == 38) {
				// 0x3239c
				control_up_down(-1, v4);
				// branch -> 0x323b0
				// 0x323b0
				result = 1;
				// branch -> 0x323b4
			} else {
				// 0x323a8
				result = 0;
				// branch -> 0x323b4
			}
			// 0x323b4
			g36 = v1;
			g10 = v2;
			return result;
		}
		// 0x323b0
		result = 1;
		// branch -> 0x323b4
	}
	// 0x323b4
	g36 = v1;
	g10 = v2;
	return result;
}
