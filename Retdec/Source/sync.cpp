
// Address range: 0xbdb00 - 0xbdbe8
int32_t sync_one_monster(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x762c); // 0xbdb08
	g27 = 0;
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0xbdb14
	g32 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xbdb18
	g33 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7754); // 0xbdb1c
	g35 = v4;
	g36 = *(int32_t *)(g23 - 0x56a4);
	int32_t v5 = *(int32_t *)(g23 - 0x7628); // 0xbdb24
	g29 = v5;
	if (*(int32_t *)v1 > 0) {
		while (true) {
			int32_t v6 = *(int32_t *)v5; // 0xbdb34
			g26 = v6;
			int32_t v7 = 232 * v6 + v4; // 0xbdb44
			g28 = v7;
			int32_t v8 = *(int32_t *)(v7 + 36); // 0xbdb48
			g34 = *(int32_t *)(0x55ec * *(int32_t *)v2 + 60 + v3) - v8;
			g25 = abs();
			int32_t v9 = *(int32_t *)(g28 + 32); // 0xbdb64
			g34 = *(int32_t *)(g33 + 0x55ec * *(int32_t *)g32 + 56) - v9;
			int32_t v10 = abs();     // 0xbdb78
			int32_t v11 = 2 * g26;   // 0xbdb80
			int32_t v12 = v11;       // r3
			int32_t v13 = g36 + v11; // 0xbdb84
			int32_t v14 = v13;       // r4
			*(int16_t *)v13 = (int16_t)(g25 + v10);
			if (*(char *)(g28 + 164) == 0) {
				int16_t *v15 = (int16_t *)v14; // 0xbdb98
				uint16_t v16 = *v15;           // 0xbdb98
				g34 = v16;
				*v15 = v16 + 0x1000;
				// branch -> 0xbdbc0
			} else {
				int16_t *v17 = (int16_t *)(v12 + *(int32_t *)(g23 - 0x56a8)); // 0xbdbac
				uint16_t v18 = *v17;                                          // 0xbdbac
				g34 = v18;
				if (v18 != 0) {
					// 0xbdbb8
					*v17 = v18 - 1;
					// branch -> 0xbdbc0
				}
			}
			int32_t v19 = g29 + 4; // 0xbdbc0
			g29 = v19;
			int32_t v20 = g27 + 1; // 0xbdbc4
			g27 = v20;
			if (v20 < *(int32_t *)v1) {
				// 0xbdbc0
				v3 = g33;
				v4 = g35;
				v2 = g32;
				v5 = v19;
				// branch -> 0xbdb34
				continue;
			}
		}
	}
	// 0xbdbd4
	return g34;
}

// Address range: 0xbdbe8 - 0xbdca0
int32_t sync_monster_pos(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0xbdbf0
	int32_t v2 = g37;                        // 0xbdbfc
	int32_t v3 = 232 * v2;                   // 0xbdc00
	int32_t v4 = g34;                        // 0xbdc08
	int32_t v5 = v3 + v1;                    // 0xbdc10
	*(char *)v4 = (char)v2;
	*(char *)(v4 + 1) = (char)*(int32_t *)(v5 + 32);
	*(char *)(v4 + 2) = (char)*(int32_t *)(v5 + 36);
	int32_t v6 = function_8769c(v2, v5); // 0xbdc30
	int32_t v7 = 2 * v2;                 // r7
	*(char *)(v4 + 3) = (char)v6;
	int32_t v8 = v7 + *(int32_t *)(g23 - 0x56a4); // 0xbdc40
	uint16_t v9 = *(int16_t *)v8;                 // 0xbdc44
	char v10 = v9;
	if (v9 >= 256) {
		// 0xbdc50
		v10 = -1;
		// branch -> 0xbdc54
	}
	// 0xbdc54
	*(char *)(v4 + 4) = v10;
	int32_t v11 = (int32_t) "MoveWindow" - 1; // 0xbdc5c
	*(int16_t *)v8 = (int16_t)v11;
	int16_t v12;
	if (*(char *)(v3 + v1 + 164) == 0) {
		// 0xbdc54
		v12 = v11;
		// branch -> 0xbdc78
	} else {
		// 0xbdc74
		v12 = &g9;
		// branch -> 0xbdc78
	}
	int32_t result = *(int32_t *)(g23 - 0x56a8); // 0xbdc78
	*(int16_t *)(v7 + result) = v12;
	return result;
}

// Address range: 0xbdca0 - 0xbdd2c
int32_t sync_monster_active(int32_t a1)
{
	int32_t v1 = g10; // 0xbdca0
	g37 = -1;
	uint32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x762c); // 0xbdcc0
	int32_t v3 = -1;                                      // 0xbdd04
	if (v2 >= 1) {
		int32_t v4 = -1;                         // 0xbdd0412
		int32_t v5 = -1;                         // 0xbdce0
		int32_t v6 = *(int32_t *)(g23 - 0x7628); // 0xbdcfc
		int32_t v7;                              // 0xbdd0411
		while (true) {
			int32_t v8 = *(int32_t *)v6;                                            // 0xbdcd4
			int32_t v9 = 2 * v8;                                                    // 0xbdcd8
			int32_t v10 = (int32_t) * (int16_t *)(v9 + *(int32_t *)(g23 - 0x56a4)); // 0xbdcdc
			v7 = v4;
			int32_t v11 = v5; // 0xbdce06
			if (v10 < v5) {
				// 0xbdce8
				if (*(int16_t *)(v9 + *(int32_t *)(g23 - 0x56a8)) <= 0xfffd) {
					// 0xbdcf4
					g37 = v8;
					v7 = v8;
					v11 = v10;
					// branch -> 0xbdcfc
				} else {
					v7 = v4;
					v11 = v5;
				}
			}
			int32_t v12 = v2 - 1; // 0xbdd00
			if (v12 == 0) {
				// break -> 0xbdd04
				break;
			}
			v4 = v7;
			v2 = v12;
			v5 = v11;
			v6 += 4;
			// continue -> 0xbdcd4
		}
		// 0xbdd04
		v3 = v7;
		// branch -> 0xbdd04
	}
	// 0xbdd04
	int32_t result;
	if (v3 != -1) {
		// 0xbdd14
		sync_monster_pos();
		result = 1;
		// branch -> 0xbdd1c
	} else {
		result = 0;
	}
	// 0xbdd1c
	g11 = v1;
	g10 = v1;
	return result;
}

// Address range: 0xbdd2c - 0xbddd4
int32_t sync_monster_active2(int32_t a1)
{
	int32_t v1 = g10;                        // 0xbdd2c
	int32_t v2 = &g9;                        // r10
	int32_t v3 = *(int32_t *)(g23 - 0x762c); // 0xbdd3c
	g37 = -1;
	int32_t v4 = 0;              // r11
	int32_t v5 = *(int32_t *)v3; // 0xbdda03
	int32_t result;
	if (v5 > 0) {
		int32_t v6 = g23; // 0xbdd68
		while (true) {
			int32_t *v7 = (int32_t *)(v6 - 0x4b40); // 0xbdd5c
			int32_t v8 = v6;                        // 0xbdd9c
			if (*v7 >= v5) {
				// 0xbdd68
				*v7 = 0;
				v8 = g23;
				// branch -> 0xbdd6c
			}
			int32_t *v9 = (int32_t *)(v8 - 0x4b40);                                      // 0xbdd6c
			int32_t v10 = *(int32_t *)(*(int32_t *)(g23 - 0x7628) + 4 * *v9);            // 0xbdd74
			int32_t v11 = (int32_t) * (int16_t *)(*(int32_t *)(g23 - 0x56a8) + 2 * v10); // 0xbdd7c
			if (v11 < v2) {
				// 0xbdd88
				v2 = v11;
				g37 = v10;
				// branch -> 0xbdd90
			}
			// 0xbdd90
			v4++;
			*v9 = *v9 + 1;
			int32_t v12 = *(int32_t *)v3; // 0xbdda0
			if (v4 >= v12) {
				// 0xbdda0
				// branch -> 0xbddac
				// 0xbddac
				if (g37 != -1) {
					// 0xbddbc
					sync_monster_pos();
					result = 1;
					// branch -> 0xbddc4
				} else {
					result = 0;
				}
				// 0xbddc4
				g11 = v1;
				g10 = v1;
				return result;
			}
			// 0xbdd90
			v5 = v12;
			v6 = g23;
			// branch -> 0xbdd5c
		}
	}
	result = 0;
	// 0xbddc4
	g11 = v1;
	g10 = v1;
	return result;
}

// Address range: 0xbddd4 - 0xbe090
int32_t function_bddd4(int32_t a1, int32_t a2)
{
	int32_t result = a1;                                 // r3
	int32_t v1 = *(int32_t *)(g23 - 0x7690);             // r6
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x71e4); // 0xbdddc
	int32_t v3;                                          // r4
	int32_t v4;                                          // 0xbdf88
	int32_t v5;                                          // 0xbdfe8
	int32_t v6;                                          // 0xbe000
	int32_t v7;                                          // 0xbe010
	int32_t v8;                                          // 0xbe020
	int32_t v9;                                          // 0xbe02c
	int32_t v10;                                         // 0xbe03c
	int32_t v11;                                         // 0xbe048
	int32_t v12;                                         // 0xbe058
	int16_t v13;                                         // 0xbdfec
	int16_t v14;                                         // 0xbdffc
	int16_t v15;                                         // 0xbe00c
	int16_t v16;                                         // 0xbe028
	int16_t v17;                                         // 0xbe044
	int16_t v18;                                         // 0xbe054
	int32_t v19;                                         // 0xbdfe8
	int32_t v20;                                         // 0xbe010
	int32_t v21;                                         // 0xbe02c
	int32_t v22;                                         // 0xbe058
	int32_t v23;                                         // 0xbdf90
	int32_t v24;                                         // 0xbdfa8
	int32_t v25;                                         // 0xbdfec
	int32_t v26;                                         // 0xbdffc
	int32_t v27;                                         // 0xbe00c
	int32_t v28;                                         // 0xbe01c
	int32_t v29;                                         // 0xbe028
	int32_t v30;                                         // 0xbe038
	int32_t v31;                                         // 0xbe044
	int32_t v32;                                         // 0xbe054
	int32_t *v33;                                        // 0xbe06c
	int32_t *v34;                                        // 0xbe078
	int32_t v35;                                         // 0xbdf8c
	int32_t v36;                                         // 0xbdfbc
	int32_t v37;                                         // 0xbdfd4
	int32_t v38;                                         // 0xbe06c
	unsigned char v39;                                   // 0xbdfec
	unsigned char v40;                                   // 0xbdffc
	unsigned char v41;                                   // 0xbe00c
	unsigned char v42;                                   // 0xbe028
	unsigned char v43;                                   // 0xbe044
	unsigned char v44;                                   // 0xbe054
	if (v2 < 1) {
		// 0xbdf80
		*(char *)(a1 + 6) = -1;
		// branch -> 0xbdf88
		// 0xbdf88
		v4 = g23;
		v35 = *(int32_t *)(v4 - 0x4b48);
		v23 = *(int32_t *)*(int32_t *)(v4 - 0x77ac);
		v24 = 368 * v35 + 1176 + 0x55ec * v23 + *(int32_t *)(v4 - 0x77a8);
		v3 = v24;
		if (*(int32_t *)(v24 + 8) == -1) {
			// 0xbdfe0
			*(char *)(result + 28) = -1;
			// branch -> 0xbdfe8
		} else {
			// 0xbdfb8
			*(char *)(result + 28) = (char)v35;
			v36 = *(int32_t *)(v3 + 360);
			*(int16_t *)(result + 29) = (int16_t)v36;
			*(int16_t *)(result + 31) = *(int16_t *)(v3 + 4);
			*(int32_t *)(result + 33) = *(int32_t *)v3;
			v37 = *(int32_t *)(v3 + 56);
			*(char *)(result + 37) = (char)v37;
			// branch -> 0xbdfe8
		}
		// 0xbdfe8
		v5 = result;
		v19 = v5 + 2;
		v25 = 2 * v19;
		v39 = *(char *)(v25 | 1);
		v13 = 256 * (int16_t)v39 | (int16_t) * (char *)v25;
		*(int16_t *)v19 = v13;
		v26 = 2 * (v5 + 9);
		v40 = *(char *)(v26 | 1);
		v14 = 256 * (int16_t)v40 | (int16_t) * (char *)v26;
		v6 = result;
		*(int16_t *)(v6 + 9) = v14;
		v27 = 2 * (v6 + 11);
		v41 = *(char *)(v27 | 1);
		v15 = 256 * (int16_t)v41 | (int16_t) * (char *)v27;
		v7 = result;
		v20 = v7 + 13;
		*(int16_t *)(v7 + 11) = v15;
		v28 = __asm_lwbrx(v20, v20);
		v8 = result;
		*(int32_t *)(v8 + 13) = v28;
		v29 = 2 * (v8 + 22);
		v42 = *(char *)(v29 | 1);
		v16 = 256 * (int16_t)v42 | (int16_t) * (char *)v29;
		v9 = result;
		v21 = v9 + 24;
		*(int16_t *)(v9 + 22) = v16;
		v30 = __asm_lwbrx(v21, v21);
		v10 = result;
		*(int32_t *)(v10 + 24) = v30;
		v31 = 2 * (v10 + 29);
		v43 = *(char *)(v31 | 1);
		v17 = 256 * (int16_t)v43 | (int16_t) * (char *)v31;
		v11 = result;
		*(int16_t *)(v11 + 29) = v17;
		v32 = 2 * (v11 + 31);
		v44 = *(char *)(v32 | 1);
		v18 = 256 * (int16_t)v44 | (int16_t) * (char *)v32;
		v12 = result;
		v22 = v12 + 33;
		*(int16_t *)(v12 + 31) = v18;
		*(int32_t *)(result + 33) = __asm_lwbrx(v22, v22);
		v33 = (int32_t *)(g23 - 0x4b48);
		v38 = *v33;
		result = v38;
		*v33 = v38 + 1;
		v34 = (int32_t *)(g23 - 0x4b48);
		if (*v34 < 7) {
			// bb
			return result;
		}
		// 0xbe084
		*v34 = 0;
		return result;
	}
	int32_t *v45 = (int32_t *)(g23 - 0x4b44); // 0xbdde8
	int32_t v46 = g23;                        // 0xbde08
	if (*v45 >= v2) {
		// 0xbddf4
		*v45 = 0;
		v46 = g23;
		// branch -> 0xbddfc
	}
	int32_t *v47 = (int32_t *)(v46 - 0x4b44); // 0xbddfc
	int32_t v48 = *v47;                       // 0xbddfc
	*v47 = v48 + 1;
	int32_t v49 = *(int32_t *)(*(int32_t *)(v46 - 0x71e0) + 4 * v48); // 0xbde10
	int32_t v50 = 368 * v49;                                          // r5
	*(char *)(result + 6) = (char)v49;
	int32_t v51 = v50 + v1; // 0xbde1c
	v3 = v51;
	int32_t v52 = *(int32_t *)(v51 + 12); // 0xbde20
	*(char *)(result + 7) = (char)v52;
	int32_t v53 = *(int32_t *)(v3 + 16); // 0xbde2c
	*(char *)(result + 8) = (char)v53;
	int32_t v54 = *(int32_t *)(v3 + 360); // 0xbde34
	*(int16_t *)(result + 9) = (int16_t)v54;
	int32_t v55 = v3; // 0xbde3c
	if (*(int32_t *)(v55 + 360) == 23) {
		unsigned char v56 = *(char *)(v55 + 68);                           // 0xbde48
		int32_t v57 = (int32_t) * (char *)(v55 + 69) | 256 * (int32_t)v56; // 0xbde5c
		*(int16_t *)(result + 11) = (int16_t)v57;
		int32_t v58 = v3;                                                         // 0xbde64
		int32_t v59 = (int32_t) * (char *)(v58 + 70);                             // 0xbde64
		unsigned char v60 = *(char *)(v58 + 72);                                  // 0xbde6c
		int32_t v61 = (int32_t) * (char *)(v58 + 71);                             // 0xbde74
		int32_t v62 = (int32_t) * (char *)(v58 + 73);                             // 0xbde90
		int32_t v63 = 0x10000 * v61 | 0x1000000 * v59 | 256 * (int32_t)v60 | v62; // 0xbde98
		*(int32_t *)(result + 13) = v63;
		*(char *)(result + 17) = *(char *)(v3 + 74);
		*(char *)(result + 18) = *(char *)(v3 + 75);
		*(char *)(result + 19) = *(char *)(v3 + 76);
		*(char *)(result + 20) = *(char *)(v3 + 77);
		*(char *)(result + 21) = *(char *)(v3 + 78);
		int32_t v64 = v3;                                                    // 0xbdec8
		int32_t v65 = (int32_t) * (char *)(v64 + 79);                        // 0xbded0
		int32_t v66 = *(int32_t *)(v64 + 196);                               // 0xbded4
		int32_t v67 = 64 * *(int32_t *)(v64 + 192) - 1216 | 256 * v65 | v66; // 0xbdee8
		*(int16_t *)(result + 22) = (int16_t)v67;
		int32_t v68 = v3;                                                // 0xbdef0
		int32_t v69 = (int32_t) * (char *)(v68 + 80);                    // 0xbdef0
		int32_t v70 = (int32_t) * (char *)(v68 + 81);                    // 0xbdf00
		int32_t v71 = (int32_t) * (char *)(v68 + 82);                    // 0xbdf08
		int32_t v72 = (int32_t) * (char *)(v68 + 83);                    // 0xbdf1c
		int32_t v73 = 0x10000 * v70 | 0x1000000 * v69 | 256 * v71 | v72; // 0xbdf24
		*(int32_t *)(result + 24) = v73;
		// branch -> 0xbdf88
	} else {
		// 0xbdf30
		*(int16_t *)(result + 11) = *(int16_t *)(v55 + 4);
		int32_t v74 = *(int32_t *)(v50 + v1); // 0xbdf38
		*(int32_t *)(result + 13) = v74;
		int32_t v75 = *(int32_t *)(v3 + 56); // 0xbdf40
		*(char *)(result + 17) = (char)v75;
		int32_t v76 = *(int32_t *)(v3 + 236); // 0xbdf48
		*(char *)(result + 18) = (char)v76;
		int32_t v77 = *(int32_t *)(v3 + 240); // 0xbdf50
		*(char *)(result + 19) = (char)v77;
		int32_t v78 = *(int32_t *)(v3 + 228); // 0xbdf58
		*(char *)(result + 20) = (char)v78;
		int32_t v79 = *(int32_t *)(v3 + 232); // 0xbdf60
		*(char *)(result + 21) = (char)v79;
		if (*(int32_t *)(v51 + 360) == 0) {
			int32_t v80 = *(int32_t *)(v3 + 196); // 0xbdf74
			*(int16_t *)(result + 22) = (int16_t)v80;
			// branch -> 0xbdf88
		}
	}
	// 0xbdf88
	v4 = g23;
	v35 = *(int32_t *)(v4 - 0x4b48);
	v23 = *(int32_t *)*(int32_t *)(v4 - 0x77ac);
	v24 = 368 * v35 + 1176 + 0x55ec * v23 + *(int32_t *)(v4 - 0x77a8);
	v3 = v24;
	if (*(int32_t *)(v24 + 8) == -1) {
		// 0xbdfe0
		*(char *)(result + 28) = -1;
		// branch -> 0xbdfe8
	} else {
		// 0xbdfb8
		*(char *)(result + 28) = (char)v35;
		v36 = *(int32_t *)(v3 + 360);
		*(int16_t *)(result + 29) = (int16_t)v36;
		*(int16_t *)(result + 31) = *(int16_t *)(v3 + 4);
		*(int32_t *)(result + 33) = *(int32_t *)v3;
		v37 = *(int32_t *)(v3 + 56);
		*(char *)(result + 37) = (char)v37;
		// branch -> 0xbdfe8
	}
	// 0xbdfe8
	v5 = result;
	v19 = v5 + 2;
	v25 = 2 * v19;
	v39 = *(char *)(v25 | 1);
	v13 = 256 * (int16_t)v39 | (int16_t) * (char *)v25;
	*(int16_t *)v19 = v13;
	v26 = 2 * (v5 + 9);
	v40 = *(char *)(v26 | 1);
	v14 = 256 * (int16_t)v40 | (int16_t) * (char *)v26;
	v6 = result;
	*(int16_t *)(v6 + 9) = v14;
	v27 = 2 * (v6 + 11);
	v41 = *(char *)(v27 | 1);
	v15 = 256 * (int16_t)v41 | (int16_t) * (char *)v27;
	v7 = result;
	v20 = v7 + 13;
	*(int16_t *)(v7 + 11) = v15;
	v28 = __asm_lwbrx(v20, v20);
	v8 = result;
	*(int32_t *)(v8 + 13) = v28;
	v29 = 2 * (v8 + 22);
	v42 = *(char *)(v29 | 1);
	v16 = 256 * (int16_t)v42 | (int16_t) * (char *)v29;
	v9 = result;
	v21 = v9 + 24;
	*(int16_t *)(v9 + 22) = v16;
	v30 = __asm_lwbrx(v21, v21);
	v10 = result;
	*(int32_t *)(v10 + 24) = v30;
	v31 = 2 * (v10 + 29);
	v43 = *(char *)(v31 | 1);
	v17 = 256 * (int16_t)v43 | (int16_t) * (char *)v31;
	v11 = result;
	*(int16_t *)(v11 + 29) = v17;
	v32 = 2 * (v11 + 31);
	v44 = *(char *)(v32 | 1);
	v18 = 256 * (int16_t)v44 | (int16_t) * (char *)v32;
	v12 = result;
	v22 = v12 + 33;
	*(int16_t *)(v12 + 31) = v18;
	*(int32_t *)(result + 33) = __asm_lwbrx(v22, v22);
	v33 = (int32_t *)(g23 - 0x4b48);
	v38 = *v33;
	result = v38;
	*v33 = v38 + 1;
	v34 = (int32_t *)(g23 - 0x4b48);
	if (*v34 < 7) {
		// bb
		return result;
	}
	// 0xbe084
	*v34 = 0;
	return result;
}

// Address range: 0xbe090 - 0xbe198
int32_t sync_all_monsters(char *a1, int32_t result)
{
	int32_t v1 = g10;                        // 0xbe094
	int32_t v2 = *(int32_t *)(g23 - 0x762c); // 0xbe098
	g36 = v2;
	int32_t v3 = (int32_t)a1; // 0xbe09c
	int32_t v4 = v3;          // r28
	g33 = result;
	if (*(int32_t *)v2 <= 0) {
		// 0xbe0b8
		// branch -> 0xbe184
		// 0xbe184
		g10 = v1;
		return result;
	}
	// 0xbe0c0
	int32_t result2; // 0xbe194
	if (result > 42) {
		// 0xbe0d0
		*(char *)v3 = 35;
		unsigned char v5 = *(char *)*(int32_t *)(g23 - 0x77e4); // 0xbe0e8
		*(char *)(v4 + 1) = v5;
		*(int16_t *)(v4 + 2) = (int16_t)0;
		int32_t v6 = function_bddd4(v4, (int32_t)v5); // 0xbe0fc
		g34 = v6;
		sync_one_monster(v6);
		g31 = g35 + 2;
		g30 = 0;
		int32_t v7 = *(int32_t *)g36; // 0xbe1743
		g11 = v7;
		if (v7 > 0) {
			int32_t v8 = 0; // 0xbe118
			while (true) {
				// 0xbe110
				if (g33 >= 5) {
					int32_t v9 = 0;
					if (v8 <= 1) {
						int32_t v10 = g32; // 0xbe124
						g34 = v10;
						v9 = sync_monster_active2(v10);
						// branch -> 0xbe12c
					}
					int32_t v11 = v9; // 0xbe13c
					if (v9 == 0) {
						int32_t v12 = g32; // 0xbe134
						g34 = v12;
						v11 = sync_monster_active(v12);
						// branch -> 0xbe13c
					}
					// 0xbe13c
					if (v11 != 0) {
						int32_t v13 = g31 + g11;                                    // 0xbe144
						unsigned char v14 = *(char *)(v13 + 1);                     // 0xbe144
						int16_t v15 = 256 * (int16_t)v14 | (int16_t) * (char *)v13; // 0xbe144
						*(int16_t *)(g35 + 2) = v15;
						int16_t *v16 = (int16_t *)(g35 + 2); // 0xbe150
						int32_t v17 = (int32_t)*v16 + 5;     // 0xbe154
						*v16 = (int16_t)v17;
						int32_t v18 = g31 + v17;                                    // 0xbe15c
						unsigned char v19 = *(char *)(v18 + 1);                     // 0xbe15c
						int16_t v20 = 256 * (int16_t)v19 | (int16_t) * (char *)v18; // 0xbe15c
						g32 += 5;
						g33 -= 5;
						g30++;
						*(int16_t *)(g35 + 2) = v20;
						uint32_t v21 = *(int32_t *)g36; // 0xbe174
						g11 = v21;
						int32_t v22 = g30; // 0xbe178
						if (v22 >= v21) {
							// break -> 0xbe180
							break;
						}
						v8 = v22;
						// continue -> 0xbe110
						continue;
					}
				}
			}
			// 0xbe180
			// branch -> 0xbe184
			// 0xbe184
			g10 = v1;
			return g33;
		}
		// 0xbe180
		result2 = g33;
		// branch -> 0xbe184
	} else {
		// 0xbe0c8
		result2 = result;
		// branch -> 0xbe184
	}
	// 0xbe184
	g10 = v1;
	return result2;
}

// Address range: 0xbe198 - 0xbe424
int32_t sync_monster(int32_t a1, char *a2)
{
	int32_t v1 = (int32_t)a2;
	int32_t v2 = g10; // 0xbe19c
	g27 = v1;
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0xbe1a4
	g36 = v3;
	g32 = *(int32_t *)(g23 - 0x767c);
	int32_t v4 = *(int32_t *)(g23 - 0x77ac); // 0xbe1b0
	g33 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x77a8); // 0xbe1b4
	g35 = v5;
	int32_t v6 = v1 / 0x1000000;
	int32_t v7 = 232 * v6; // 0xbe1c4
	g28 = v6;
	int32_t result = v3 + v7; // 0xbe1cc
	if (*(int32_t *)(result + 152) == 0) {
		// 0xbe410
		g10 = v2;
		return result;
	}
	int32_t v8 = *(int32_t *)*(int32_t *)(g23 - 0x762c); // 0xbe1e8
	int32_t v9;                                          // r25
	int32_t v10;                                         // r26
	int32_t v11;                                         // 0xbe22c
	int32_t v12;                                         // 0xbe240
	int32_t v13;                                         // 0xbe264
	int32_t result2;                                     // 0xbe268
	int32_t v14;                                         // 0xbe2c4
	int32_t v15;                                         // 0xbe2d8
	int32_t v16;                                         // 0xbe2ec
	int32_t v17;                                         // 0xbe318
	int32_t v18;                                         // 0xbe31c
	int32_t v19;                                         // 0xbe358
	int32_t v20;                                         // 0xbe3a0
	int32_t v21;                                         // 0xbe3d0
	int32_t result4;                                     // 0xbe420
	int32_t result5;                                     // 0xbe42015
	int32_t v22;                                         // 0xbe21c
	int32_t v23;                                         // 0xbe238
	int32_t v24;                                         // 0xbe2a8
	int32_t v25;                                         // 0xbe254
	int32_t v26;                                         // 0xbe280
	int32_t v27;                                         // 0xbe2f8
	int32_t v28;                                         // 0xbe32c
	int32_t v29;                                         // 0xbe354
	uint32_t v30;                                        // 0xbe384
	int32_t v31;                                         // 0xbe398
	int32_t v32;                                         // 0xbe39c
	int32_t v33;                                         // 0xbe3cc
	int32_t v34;                                         // 0xbe3d4
	int32_t v35;                                         // 0xbe3e0
	int32_t result3;                                     // 0xbe40c
	int32_t v36;                                         // 0xbe224
	int32_t v37;                                         // 0xbe248
	int32_t v38;                                         // 0xbe2a8
	unsigned char v39;                                   // 0xbe2f0
	unsigned char v40;                                   // 0xbe318
	unsigned char v41;                                   // 0xbe320
	unsigned char v42;                                   // 0xbe35c
	unsigned char v43;                                   // 0xbe360
	unsigned char v44;                                   // 0xbe364
	unsigned char v45;                                   // 0xbe3a0
	unsigned char v46;                                   // 0xbe3a4
	uint32_t v47;                                        // 0xbe264
	int32_t v48;                                         // 0xbe284
	int32_t result6;                                     // 0xbe294
	int32_t v49;                                         // 0xbe2ec
	int32_t v50;                                         // 0xbe358
	int32_t v51;                                         // 0xbe368
	int32_t v52;                                         // 0xbe3a8
	if (v8 > 0) {
		int32_t v53 = 0;                          // 0xbe1f4
		int32_t v54 = *(int32_t *)(g23 - 0x7628); // 0xbe1f0
		while (true) {
			// 0xbe200
			if (v6 == *(int32_t *)v54) {
				// 0xbe200
				// branch -> 0xbe20c
			} else {
				int32_t v55 = v53 + 1; // 0xbe1f4
				if (v55 >= v8) {
					// break -> 0xbe1f8
					break;
				}
				v53 = v55;
				v54 += 4;
				// continue -> 0xbe200
				continue;
			}
			// 0xbe20c
			g31 = v7;
			v22 = result + 36;
			v9 = v22;
			v36 = *(int32_t *)(0x55ec * *(int32_t *)v4 + v5 + 60);
			g34 = v36 - *(int32_t *)v22;
			v11 = abs();
			v23 = g31 + g36 + 32;
			v10 = v23;
			v12 = g35;
			g35 = v11;
			v37 = *(int32_t *)(v12 + 0x55ec * *(int32_t *)g33 + 56);
			g34 = v37 - *(int32_t *)v23;
			v25 = g35 + abs();
			result2 = v25;
			if (v25 >= 256) {
				// 0xbe260
				result2 = 255;
				// branch -> 0xbe264
			}
			// 0xbe264
			v13 = g27;
			v47 = (int32_t) * (char *)(v13 + 4);
			if (result2 < v47) {
				// 0xbe410
				g10 = v2;
				return result2;
			}
			// 0xbe270
			if (result2 == v47) {
				// 0xbe274
				if (a1 > *(int32_t *)g33) {
					// 0xbe410
					g10 = v2;
					return result2;
				}
			}
			// 0xbe280
			v26 = g31 + g36;
			v48 = (int32_t) * (char *)(v13 + 1);
			if (v48 == *(int32_t *)(v26 + 40)) {
				// 0xbe294
				result6 = (int32_t) * (char *)(v13 + 2);
				if (result6 != *(int32_t *)(v26 + 44)) {
					result5 = result6;
					// 0xbe2a4
					v24 = v26 + 4;
					v38 = *(int32_t *)v24;
					g33 = v24;
					if (v38 != 14) {
						// 0xbe2b4
						if (v38 != 15) {
							// 0xbe2bc
							g34 = *(int32_t *)v10 - v48;
							v14 = abs();
							g34 = *(int32_t *)v9 - (int32_t) * (char *)(g27 + 2);
							v15 = abs();
							if (v14 <= 2) {
								// 0xbe2e4
								if (v15 < 3) {
									// 0xbe384
									v30 = *(int32_t *)g33;
									if (v30 < 1) {
										// 0xbe398
										v31 = *(int32_t *)v10;
										v32 = *(int32_t *)v9;
										v20 = g27;
										v45 = *(char *)(v20 + 1);
										v46 = *(char *)(v20 + 2);
										v52 = GetDirection(v31, v32, (int32_t)v45, (int32_t)v46);
										g26 = v52;
										g34 = g28;
										g37 = v52;
										if (function_8539c() != 0) {
											// 0xbe3c4
											function_7c95c(g28);
											v33 = *(int32_t *)g30;
											v21 = g28;
											v34 = *(int32_t *)g29;
											v35 = *(int32_t *)g32;
											*(int16_t *)(v35 + 2 * v34 + 224 * v33) = (int16_t)(v21 + 1);
											function_7fe38(v21, g26);
											*(char *)(g31 + g36 + 164) = -1;
											// branch -> 0xbe404
											// 0xbe404
											result3 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
											// branch -> 0xbe410
											// 0xbe410
											g10 = v2;
											return result3;
										}
									} else {
										// 0xbe390
										if (v30 >= 4) {
											// 0xbe398
											v31 = *(int32_t *)v10;
											v32 = *(int32_t *)v9;
											v20 = g27;
											v45 = *(char *)(v20 + 1);
											v46 = *(char *)(v20 + 2);
											v52 = GetDirection(v31, v32, (int32_t)v45, (int32_t)v46);
											g26 = v52;
											g34 = g28;
											g37 = v52;
											if (function_8539c() != 0) {
												// 0xbe3c4
												function_7c95c(g28);
												v33 = *(int32_t *)g30;
												v21 = g28;
												v34 = *(int32_t *)g29;
												v35 = *(int32_t *)g32;
												*(int16_t *)(v35 + 2 * v34 + 224 * v33) = (int16_t)(v21 + 1);
												function_7fe38(v21, g26);
												*(char *)(g31 + g36 + 164) = -1;
												// branch -> 0xbe404
												// 0xbe404
												result3 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
												// branch -> 0xbe410
												// 0xbe410
												g10 = v2;
												return result3;
											}
										}
									}
									// 0xbe404
									result3 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
									// branch -> 0xbe410
									// 0xbe410
									g10 = v2;
									return result3;
								}
							}
							// 0xbe2ec
							v16 = g27;
							v49 = (int32_t) * (char *)(v16 + 1);
							v39 = *(char *)(v16 + 2);
							v27 = *(int32_t *)g32;
							if (*(int16_t *)(v27 + 2 * (int32_t)v39 + 224 * v49) != 0) {
								// 0xbe404
								result3 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
								// branch -> 0xbe410
								// 0xbe410
								g10 = v2;
								return result3;
							}
							// 0xbe310
							function_7c95c(g28);
							v17 = g27;
							v40 = *(char *)(v17 + 1);
							v18 = g28;
							v41 = *(char *)(v17 + 2);
							v28 = *(int32_t *)g32;
							*(int16_t *)(v28 + 2 * (int32_t)v41 + 224 * (int32_t)v40) = (int16_t)(v18 + 1);
							*(int32_t *)v10 = (int32_t) * (char *)(g27 + 1);
							*(int32_t *)v9 = (int32_t) * (char *)(g27 + 2);
							decode_enemy(v18, (int32_t) * (char *)(g27 + 3));
							v29 = g31 + g36;
							v19 = g27;
							v50 = (int32_t) * (char *)(v19 + 1);
							v42 = *(char *)(v19 + 2);
							v43 = *(char *)(v29 + 80);
							v44 = *(char *)(v29 + 81);
							v51 = GetDirection(v50, (int32_t)v42, (int32_t)v43, (int32_t)v44);
							function_7c124(g28, v51);
							*(char *)(g26 + 164) = -1;
							// branch -> 0xbe404
							// 0xbe404
							result3 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
							// branch -> 0xbe410
							// 0xbe410
							g10 = v2;
							return result3;
						}
						result4 = result5;
					} else {
						result4 = result5;
					}
				} else {
					result4 = result6;
				}
			} else {
				result5 = result2;
				// 0xbe2a4
				v24 = v26 + 4;
				v38 = *(int32_t *)v24;
				g33 = v24;
				if (v38 != 14) {
					// 0xbe2b4
					if (v38 != 15) {
						// 0xbe2bc
						g34 = *(int32_t *)v10 - v48;
						v14 = abs();
						g34 = *(int32_t *)v9 - (int32_t) * (char *)(g27 + 2);
						v15 = abs();
						if (v14 <= 2) {
							// 0xbe2e4
							if (v15 < 3) {
								// 0xbe384
								v30 = *(int32_t *)g33;
								if (v30 < 1) {
									// 0xbe398
									v31 = *(int32_t *)v10;
									v32 = *(int32_t *)v9;
									v20 = g27;
									v45 = *(char *)(v20 + 1);
									v46 = *(char *)(v20 + 2);
									v52 = GetDirection(v31, v32, (int32_t)v45, (int32_t)v46);
									g26 = v52;
									g34 = g28;
									g37 = v52;
									if (function_8539c() != 0) {
										// 0xbe3c4
										function_7c95c(g28);
										v33 = *(int32_t *)g30;
										v21 = g28;
										v34 = *(int32_t *)g29;
										v35 = *(int32_t *)g32;
										*(int16_t *)(v35 + 2 * v34 + 224 * v33) = (int16_t)(v21 + 1);
										function_7fe38(v21, g26);
										*(char *)(g31 + g36 + 164) = -1;
										// branch -> 0xbe404
										// 0xbe404
										result3 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
										// branch -> 0xbe410
										// 0xbe410
										g10 = v2;
										return result3;
									}
								} else {
									// 0xbe390
									if (v30 >= 4) {
										// 0xbe398
										v31 = *(int32_t *)v10;
										v32 = *(int32_t *)v9;
										v20 = g27;
										v45 = *(char *)(v20 + 1);
										v46 = *(char *)(v20 + 2);
										v52 = GetDirection(v31, v32, (int32_t)v45, (int32_t)v46);
										g26 = v52;
										g34 = g28;
										g37 = v52;
										if (function_8539c() != 0) {
											// 0xbe3c4
											function_7c95c(g28);
											v33 = *(int32_t *)g30;
											v21 = g28;
											v34 = *(int32_t *)g29;
											v35 = *(int32_t *)g32;
											*(int16_t *)(v35 + 2 * v34 + 224 * v33) = (int16_t)(v21 + 1);
											function_7fe38(v21, g26);
											*(char *)(g31 + g36 + 164) = -1;
											// branch -> 0xbe404
											// 0xbe404
											result3 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
											// branch -> 0xbe410
											// 0xbe410
											g10 = v2;
											return result3;
										}
									}
								}
								// 0xbe404
								result3 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
								// branch -> 0xbe410
								// 0xbe410
								g10 = v2;
								return result3;
							}
						}
						// 0xbe2ec
						v16 = g27;
						v49 = (int32_t) * (char *)(v16 + 1);
						v39 = *(char *)(v16 + 2);
						v27 = *(int32_t *)g32;
						if (*(int16_t *)(v27 + 2 * (int32_t)v39 + 224 * v49) != 0) {
							// 0xbe404
							result3 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
							// branch -> 0xbe410
							// 0xbe410
							g10 = v2;
							return result3;
						}
						// 0xbe310
						function_7c95c(g28);
						v17 = g27;
						v40 = *(char *)(v17 + 1);
						v18 = g28;
						v41 = *(char *)(v17 + 2);
						v28 = *(int32_t *)g32;
						*(int16_t *)(v28 + 2 * (int32_t)v41 + 224 * (int32_t)v40) = (int16_t)(v18 + 1);
						*(int32_t *)v10 = (int32_t) * (char *)(g27 + 1);
						*(int32_t *)v9 = (int32_t) * (char *)(g27 + 2);
						decode_enemy(v18, (int32_t) * (char *)(g27 + 3));
						v29 = g31 + g36;
						v19 = g27;
						v50 = (int32_t) * (char *)(v19 + 1);
						v42 = *(char *)(v19 + 2);
						v43 = *(char *)(v29 + 80);
						v44 = *(char *)(v29 + 81);
						v51 = GetDirection(v50, (int32_t)v42, (int32_t)v43, (int32_t)v44);
						function_7c124(g28, v51);
						*(char *)(g26 + 164) = -1;
						// branch -> 0xbe404
						// 0xbe404
						result3 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
						// branch -> 0xbe410
						// 0xbe410
						g10 = v2;
						return result3;
					}
					result4 = result5;
				} else {
					result4 = result5;
				}
			}
			// 0xbe410
			g10 = v2;
			return result4;
		}
		// 0xbe1f8
		// branch -> 0xbe20c
	}
	// 0xbe20c
	g31 = v7;
	v22 = result + 36;
	v9 = v22;
	v36 = *(int32_t *)(0x55ec * *(int32_t *)v4 + v5 + 60);
	g34 = v36 - *(int32_t *)v22;
	v11 = abs();
	v23 = g31 + g36 + 32;
	v10 = v23;
	v12 = g35;
	g35 = v11;
	v37 = *(int32_t *)(v12 + 0x55ec * *(int32_t *)g33 + 56);
	g34 = v37 - *(int32_t *)v23;
	v25 = g35 + abs();
	result2 = v25;
	if (v25 >= 256) {
		// 0xbe260
		result2 = 255;
		// branch -> 0xbe264
	}
	// 0xbe264
	v13 = g27;
	v47 = (int32_t) * (char *)(v13 + 4);
	if (result2 < v47) {
		// 0xbe410
		g10 = v2;
		return result2;
	}
	// 0xbe270
	if (result2 == v47) {
		// 0xbe274
		if (a1 > *(int32_t *)g33) {
			// 0xbe410
			g10 = v2;
			return result2;
		}
	}
	// 0xbe280
	v26 = g31 + g36;
	v48 = (int32_t) * (char *)(v13 + 1);
	if (v48 != *(int32_t *)(v26 + 40)) {
		result5 = result2;
		// 0xbe2a4
		v24 = v26 + 4;
		v38 = *(int32_t *)v24;
		g33 = v24;
		if (v38 == 14) {
			// 0xbe410
			g10 = v2;
			return result5;
		}
		// 0xbe2b4
		if (v38 != 15) {
			// 0xbe2bc
			g34 = *(int32_t *)v10 - v48;
			v14 = abs();
			g34 = *(int32_t *)v9 - (int32_t) * (char *)(g27 + 2);
			v15 = abs();
			if (v14 <= 2) {
				// 0xbe2e4
				if (v15 < 3) {
					// 0xbe384
					v30 = *(int32_t *)g33;
					if (v30 < 1) {
						// 0xbe398
						v31 = *(int32_t *)v10;
						v32 = *(int32_t *)v9;
						v20 = g27;
						v45 = *(char *)(v20 + 1);
						v46 = *(char *)(v20 + 2);
						v52 = GetDirection(v31, v32, (int32_t)v45, (int32_t)v46);
						g26 = v52;
						g34 = g28;
						g37 = v52;
						if (function_8539c() != 0) {
							// 0xbe3c4
							function_7c95c(g28);
							v33 = *(int32_t *)g30;
							v21 = g28;
							v34 = *(int32_t *)g29;
							v35 = *(int32_t *)g32;
							*(int16_t *)(v35 + 2 * v34 + 224 * v33) = (int16_t)(v21 + 1);
							function_7fe38(v21, g26);
							*(char *)(g31 + g36 + 164) = -1;
							// branch -> 0xbe404
						}
					} else {
						// 0xbe390
						if (v30 >= 4) {
							// 0xbe398
							v31 = *(int32_t *)v10;
							v32 = *(int32_t *)v9;
							v20 = g27;
							v45 = *(char *)(v20 + 1);
							v46 = *(char *)(v20 + 2);
							v52 = GetDirection(v31, v32, (int32_t)v45, (int32_t)v46);
							g26 = v52;
							g34 = g28;
							g37 = v52;
							if (function_8539c() != 0) {
								// 0xbe3c4
								function_7c95c(g28);
								v33 = *(int32_t *)g30;
								v21 = g28;
								v34 = *(int32_t *)g29;
								v35 = *(int32_t *)g32;
								*(int16_t *)(v35 + 2 * v34 + 224 * v33) = (int16_t)(v21 + 1);
								function_7fe38(v21, g26);
								*(char *)(g31 + g36 + 164) = -1;
								// branch -> 0xbe404
							}
						}
					}
					// 0xbe404
					result3 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
					// branch -> 0xbe410
					// 0xbe410
					g10 = v2;
					return result3;
				}
			}
			// 0xbe2ec
			v16 = g27;
			v49 = (int32_t) * (char *)(v16 + 1);
			v39 = *(char *)(v16 + 2);
			v27 = *(int32_t *)g32;
			if (*(int16_t *)(v27 + 2 * (int32_t)v39 + 224 * v49) == 0) {
				// 0xbe310
				function_7c95c(g28);
				v17 = g27;
				v40 = *(char *)(v17 + 1);
				v18 = g28;
				v41 = *(char *)(v17 + 2);
				v28 = *(int32_t *)g32;
				*(int16_t *)(v28 + 2 * (int32_t)v41 + 224 * (int32_t)v40) = (int16_t)(v18 + 1);
				*(int32_t *)v10 = (int32_t) * (char *)(g27 + 1);
				*(int32_t *)v9 = (int32_t) * (char *)(g27 + 2);
				decode_enemy(v18, (int32_t) * (char *)(g27 + 3));
				v29 = g31 + g36;
				v19 = g27;
				v50 = (int32_t) * (char *)(v19 + 1);
				v42 = *(char *)(v19 + 2);
				v43 = *(char *)(v29 + 80);
				v44 = *(char *)(v29 + 81);
				v51 = GetDirection(v50, (int32_t)v42, (int32_t)v43, (int32_t)v44);
				function_7c124(g28, v51);
				*(char *)(g26 + 164) = -1;
				// branch -> 0xbe404
			}
			// 0xbe404
			result4 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
			// branch -> 0xbe410
		} else {
			result4 = result5;
		}
		// 0xbe410
		g10 = v2;
		return result4;
	}
	// 0xbe294
	result6 = (int32_t) * (char *)(v13 + 2);
	if (result6 == *(int32_t *)(v26 + 44)) {
		// 0xbe410
		g10 = v2;
		return result6;
	}
	result5 = result6;
	// 0xbe2a4
	v24 = v26 + 4;
	v38 = *(int32_t *)v24;
	g33 = v24;
	if (v38 == 14) {
		// 0xbe410
		g10 = v2;
		return result5;
	}
	// 0xbe2b4
	if (v38 != 15) {
		// 0xbe2bc
		g34 = *(int32_t *)v10 - v48;
		v14 = abs();
		g34 = *(int32_t *)v9 - (int32_t) * (char *)(g27 + 2);
		v15 = abs();
		if (v14 <= 2) {
			// 0xbe2e4
			if (v15 < 3) {
				// 0xbe384
				v30 = *(int32_t *)g33;
				if (v30 < 1) {
					// 0xbe398
					v31 = *(int32_t *)v10;
					v32 = *(int32_t *)v9;
					v20 = g27;
					v45 = *(char *)(v20 + 1);
					v46 = *(char *)(v20 + 2);
					v52 = GetDirection(v31, v32, (int32_t)v45, (int32_t)v46);
					g26 = v52;
					g34 = g28;
					g37 = v52;
					if (function_8539c() != 0) {
						// 0xbe3c4
						function_7c95c(g28);
						v33 = *(int32_t *)g30;
						v21 = g28;
						v34 = *(int32_t *)g29;
						v35 = *(int32_t *)g32;
						*(int16_t *)(v35 + 2 * v34 + 224 * v33) = (int16_t)(v21 + 1);
						function_7fe38(v21, g26);
						*(char *)(g31 + g36 + 164) = -1;
						// branch -> 0xbe404
					}
				} else {
					// 0xbe390
					if (v30 >= 4) {
						// 0xbe398
						v31 = *(int32_t *)v10;
						v32 = *(int32_t *)v9;
						v20 = g27;
						v45 = *(char *)(v20 + 1);
						v46 = *(char *)(v20 + 2);
						v52 = GetDirection(v31, v32, (int32_t)v45, (int32_t)v46);
						g26 = v52;
						g34 = g28;
						g37 = v52;
						if (function_8539c() != 0) {
							// 0xbe3c4
							function_7c95c(g28);
							v33 = *(int32_t *)g30;
							v21 = g28;
							v34 = *(int32_t *)g29;
							v35 = *(int32_t *)g32;
							*(int16_t *)(v35 + 2 * v34 + 224 * v33) = (int16_t)(v21 + 1);
							function_7fe38(v21, g26);
							*(char *)(g31 + g36 + 164) = -1;
							// branch -> 0xbe404
						}
					}
				}
				// 0xbe404
				result3 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
				// branch -> 0xbe410
				// 0xbe410
				g10 = v2;
				return result3;
			}
		}
		// 0xbe2ec
		v16 = g27;
		v49 = (int32_t) * (char *)(v16 + 1);
		v39 = *(char *)(v16 + 2);
		v27 = *(int32_t *)g32;
		if (*(int16_t *)(v27 + 2 * (int32_t)v39 + 224 * v49) == 0) {
			// 0xbe310
			function_7c95c(g28);
			v17 = g27;
			v40 = *(char *)(v17 + 1);
			v18 = g28;
			v41 = *(char *)(v17 + 2);
			v28 = *(int32_t *)g32;
			*(int16_t *)(v28 + 2 * (int32_t)v41 + 224 * (int32_t)v40) = (int16_t)(v18 + 1);
			*(int32_t *)v10 = (int32_t) * (char *)(g27 + 1);
			*(int32_t *)v9 = (int32_t) * (char *)(g27 + 2);
			decode_enemy(v18, (int32_t) * (char *)(g27 + 3));
			v29 = g31 + g36;
			v19 = g27;
			v50 = (int32_t) * (char *)(v19 + 1);
			v42 = *(char *)(v19 + 2);
			v43 = *(char *)(v29 + 80);
			v44 = *(char *)(v29 + 81);
			v51 = GetDirection(v50, (int32_t)v42, (int32_t)v43, (int32_t)v44);
			function_7c124(g28, v51);
			*(char *)(g26 + 164) = -1;
			// branch -> 0xbe404
		}
		// 0xbe404
		result4 = decode_enemy(g28, (int32_t) * (char *)(g27 + 3));
		// branch -> 0xbe410
	} else {
		result4 = result5;
	}
	// 0xbe410
	g10 = v2;
	return result4;
}

// Address range: 0xbe424 - 0xbe578
int32_t sync_update(int32_t a1, char *a2)
{
	// 0xbe424
	g37 = (int32_t)a2;
	int32_t v1 = g37; // 0xbe42c
	g36 = *(int32_t *)(g23 - 0x77e4);
	g35 = v1;
	g32 = a1;
	g33 = v1 + 38;
	int32_t v2 = v1 + 2;                                     // 0xbe444
	int32_t v3 = 2 * v2;                                     // 0xbe44c
	unsigned char v4 = *(char *)(v3 | 1);                    // 0xbe44c
	int16_t v5 = 256 * (int16_t)v4 | (int16_t) * (char *)v3; // 0xbe44c
	*(int16_t *)v2 = v5;
	int32_t v6 = 2 * (v1 + 9);                               // 0xbe45c
	unsigned char v7 = *(char *)(v6 | 1);                    // 0xbe45c
	int16_t v8 = 256 * (int16_t)v7 | (int16_t) * (char *)v6; // 0xbe45c
	int32_t v9 = g35;                                        // 0xbe460
	*(int16_t *)(v9 + 9) = v8;
	int32_t v10 = 2 * (v9 + 11);                                // 0xbe46c
	unsigned char v11 = *(char *)(v10 | 1);                     // 0xbe46c
	int16_t v12 = 256 * (int16_t)v11 | (int16_t) * (char *)v10; // 0xbe46c
	int32_t v13 = g35;                                          // 0xbe470
	int32_t v14 = v13 + 13;                                     // 0xbe470
	*(int16_t *)(v13 + 11) = v12;
	int32_t v15 = __asm_lwbrx(v14, v14); // 0xbe47c
	int32_t v16 = g35;                   // 0xbe480
	*(int32_t *)(v16 + 13) = v15;
	int32_t v17 = 2 * (v16 + 22);                               // 0xbe488
	unsigned char v18 = *(char *)(v17 | 1);                     // 0xbe488
	int16_t v19 = 256 * (int16_t)v18 | (int16_t) * (char *)v17; // 0xbe488
	int32_t v20 = g35;                                          // 0xbe48c
	int32_t v21 = v20 + 24;                                     // 0xbe48c
	*(int16_t *)(v20 + 22) = v19;
	int32_t v22 = __asm_lwbrx(v21, v21); // 0xbe498
	int32_t v23 = g35;                   // 0xbe49c
	*(int32_t *)(v23 + 24) = v22;
	int32_t v24 = 2 * (v23 + 29);                               // 0xbe4a4
	unsigned char v25 = *(char *)(v24 | 1);                     // 0xbe4a4
	int16_t v26 = 256 * (int16_t)v25 | (int16_t) * (char *)v24; // 0xbe4a4
	int32_t v27 = g35;                                          // 0xbe4a8
	*(int16_t *)(v27 + 29) = v26;
	int32_t v28 = 2 * (v27 + 31);                               // 0xbe4b4
	unsigned char v29 = *(char *)(v28 | 1);                     // 0xbe4b4
	int16_t v30 = 256 * (int16_t)v29 | (int16_t) * (char *)v28; // 0xbe4b4
	int32_t v31 = g35;                                          // 0xbe4b8
	int32_t v32 = v31 + 33;                                     // 0xbe4b8
	*(int16_t *)(v31 + 31) = v30;
	*(int32_t *)(g35 + 33) = __asm_lwbrx(v32, v32);
	if (*(char *)&g37 != 35) {
		// 0xbe4d8
		app_fatal(*(int32_t *)(g23 - 0x56ac));
		// branch -> 0xbe4e0
	}
	// 0xbe4e0
	if (*(char *)*(int32_t *)(g23 - 0x72bc) == 1) {
		// 0xbe4f0
		// branch -> 0xbe564
		// 0xbe564
		return (int32_t) * (int16_t *)(g35 + 2) + 38;
	}
	int32_t v33 = g35;                    // 0xbe50c
	uint16_t v34 = *(int16_t *)(v33 + 2); // 0xbe50c
	int32_t v35 = v34;                    // 0xbe50c
	int32_t result;                       // 0xbe574
	if (g32 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		// 0xbe50c
		result = v35 + 38;
		// branch -> 0xbe564
	} else {
		// 0xbe550
		g31 = v35;
		if (v34 > 4) {
			int32_t v36 = v33; // 0xbe524
			int32_t v37;
			while (true) {
				int32_t v38 = v36; // 0xbe540
				if (*(char *)g36 == *(char *)(v36 + 1)) {
					// 0xbe530
					sync_monster(g32, (char *)g33);
					v38 = g35;
					// branch -> 0xbe53c
				}
				// 0xbe53c
				function_8a4f0((char *)g33, (int32_t) * (char *)(v38 + 1));
				g33 += 5;
				int32_t v39 = g31 - 5; // 0xbe54c
				g31 = v39;
				v37 = g35;
				if (v39 % 0x10000 <= 4) {
					// break -> 0xbe55c
					break;
				}
				v36 = v37;
				// continue -> 0xbe520
			}
			// 0xbe55c
			// branch -> 0xbe564
			// 0xbe564
			return (int32_t) * (int16_t *)(v37 + 2) + 38;
		}
		// 0xbe55c
		result = (int32_t) * (int16_t *)(v33 + 2) + 38;
		// branch -> 0xbe564
	}
	// 0xbe564
	return result;
}

// Address range: 0xbe578 - 0xbe5b8
int32_t sync_init(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x56a8); // 0xbe588
	g34 = v1;
	*(int32_t *)(g23 - 0x4b40) = 16 * *(int32_t *)*(int32_t *)(g23 - 0x77ac);
	return memset(v1, 400, 255);
}
