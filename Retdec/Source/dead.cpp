
// Address range: 0x33dc4 - 0x34250
int32_t InitDead(int32_t a1)
{
	int32_t v1 = 5;                          // ctr
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x33dd0
	int32_t v3 = *(int32_t *)(g23 - 0x761c); // r6
	int32_t v4 = *(int32_t *)(g23 - 0x7614); // r5
	int32_t v5 = 0;                          // r0
	int32_t v6;                              // bp-856
	int32_t v7 = &v6;                        // 0x33de4
	int32_t v8 = v7;                         // r3
	int32_t v9 = v7;                         // 0x33de8
	int32_t v10 = 0;                         // 0x33de8
	// branch -> 0x33de8
	while (true) {
		// 0x33de8
		*(int32_t *)v9 = v10;
		*(int32_t *)(v8 + 4) = v5;
		*(int32_t *)(v8 + 8) = v5;
		*(int32_t *)(v8 + 12) = v5;
		*(int32_t *)(v8 + 16) = v5;
		*(int32_t *)(v8 + 20) = v5;
		*(int32_t *)(v8 + 24) = v5;
		*(int32_t *)(v8 + 28) = v5;
		*(int32_t *)(v8 + 32) = v5;
		*(int32_t *)(v8 + 36) = v5;
		*(int32_t *)(v8 + 40) = v5;
		*(int32_t *)(v8 + 44) = v5;
		*(int32_t *)(v8 + 48) = v5;
		*(int32_t *)(v8 + 52) = v5;
		*(int32_t *)(v8 + 56) = v5;
		*(int32_t *)(v8 + 60) = v5;
		*(int32_t *)(v8 + 64) = v5;
		*(int32_t *)(v8 + 68) = v5;
		*(int32_t *)(v8 + 72) = v5;
		*(int32_t *)(v8 + 76) = v5;
		*(int32_t *)(v8 + 80) = v5;
		*(int32_t *)(v8 + 84) = v5;
		*(int32_t *)(v8 + 88) = v5;
		*(int32_t *)(v8 + 92) = v5;
		*(int32_t *)(v8 + 96) = v5;
		*(int32_t *)(v8 + 100) = v5;
		*(int32_t *)(v8 + 104) = v5;
		*(int32_t *)(v8 + 108) = v5;
		*(int32_t *)(v8 + 112) = v5;
		*(int32_t *)(v8 + 116) = v5;
		*(int32_t *)(v8 + 120) = v5;
		*(int32_t *)(v8 + 124) = v5;
		*(int32_t *)(v8 + 128) = v5;
		*(int32_t *)(v8 + 132) = v5;
		*(int32_t *)(v8 + 136) = v5;
		*(int32_t *)(v8 + 140) = v5;
		*(int32_t *)(v8 + 144) = v5;
		*(int32_t *)(v8 + 148) = v5;
		*(int32_t *)(v8 + 152) = v5;
		*(int32_t *)(v8 + 156) = v5;
		int32_t v11 = v8 + 160; // 0x33e88
		v8 = v11;
		int32_t v12 = v1 - 1; // 0x33e8c
		v1 = v12;
		if (v12 == 0) {
			int32_t v13 = v4;                         // 0x33e94
			int32_t v14 = *(int32_t *)(g23 - 0x7610); // 0x33e98
			v8 = v7;
			int32_t v15 = *(int32_t *)*(int32_t *)(g23 - 0x7618); // 0x33ea0
			int32_t v16 = 0;                                      // r28
			v1 = v15;
			int32_t v17 = 0; // 0x33f98
			int32_t v18;     // r10
			int32_t v19;     // r11
			int32_t v20;     // r12
			int32_t v21;     // r9
			int32_t v22;     // bp-912
			int32_t v23;     // 0x33f8c
			int32_t v24;     // 0x34074
			int32_t v25;     // 0x34118
			int32_t v26;     // 0x3413c
			int32_t v27;     // 0x34148
			int32_t v28;     // 0x3423c
			int32_t v29;     // 0x34240
			int32_t v30;     // 0x33f90
			int32_t v31;     // 0x33f98
			int32_t v32;     // 0x3411c
			int32_t v33;     // 0x34140
			int32_t v34;     // 0x33fa8
			int32_t v35;     // 0x34128
			int32_t v36;     // 0x33f8c
			int32_t v37;     // 0x33f94
			int32_t v38;     // 0x34074
			int32_t v39;     // 0x34078
			int32_t result;  // 0x34124
			if (v15 >= 1) {
				while (true) {
					int32_t v40 = v15; // 0x33f88
					if (*(int32_t *)(4 * (int32_t) * (char *)v14 + v7) == 0) {
						int32_t v41 = v16 + 1; // 0x33ecc
						v21 = v41;
						v16 = v41;
						*(int32_t *)v13 = *(int32_t *)(v14 + 312);
						*(int32_t *)(v13 + 4) = *(int32_t *)(v14 + 316);
						int32_t v42 = v14; // 0x33ee4
						*(int32_t *)(v13 + 8) = *(int32_t *)(v42 + 320);
						*(int32_t *)(v13 + 12) = *(int32_t *)(v42 + 324);
						int32_t v43 = v14; // 0x33ef4
						*(int32_t *)(v13 + 16) = *(int32_t *)(v43 + 328);
						*(int32_t *)(v13 + 20) = *(int32_t *)(v43 + 332);
						int32_t v44 = v14; // 0x33f04
						*(int32_t *)(v13 + 24) = *(int32_t *)(v44 + 336);
						*(int32_t *)(v13 + 28) = *(int32_t *)(v44 + 340);
						int32_t v45 = v14; // 0x33f14
						*(int32_t *)(v13 + 32) = *(int32_t *)(v45 + 344);
						*(int32_t *)(v13 + 36) = *(int32_t *)(v45 + 348);
						int32_t v46 = v14; // 0x33f24
						*(int32_t *)(v13 + 40) = *(int32_t *)(v46 + 352);
						*(int32_t *)(v13 + 44) = *(int32_t *)(v46 + 356);
						int32_t v47 = v14; // 0x33f34
						*(int32_t *)(v13 + 48) = *(int32_t *)(v47 + 360);
						*(int32_t *)(v13 + 52) = *(int32_t *)(v47 + 364);
						int32_t v48 = v14; // 0x33f44
						*(int32_t *)(v13 + 56) = *(int32_t *)(v48 + 368);
						*(int32_t *)(v13 + 60) = *(int32_t *)(v48 + 372);
						*(int32_t *)(v13 + 64) = *(int32_t *)(v14 + 376);
						*(int32_t *)(v13 + 68) = *(int32_t *)(v14 + 492);
						*(int32_t *)(v13 + 72) = *(int32_t *)(v14 + 496);
						*(char *)(v13 + 76) = (char)0;
						v13 += 80;
						*(char *)(v14 + 509) = (char)v21;
						unsigned char v49 = *(char *)v14; // 0x33f78
						*(int32_t *)(v8 + 4 * (int32_t)v49) = v21;
						v40 = v1;
						// branch -> 0x33f84
					}
					int32_t v50 = v14 + 520; // 0x33f84
					int32_t v51 = v40 - 1;   // 0x33f88
					v1 = v51;
					if (v51 == 0) {
						// 0x33f8c
						v13 = v4;
						v17 = v16;
						// branch -> 0x33f8c
						// 0x33f8c
						v23 = v3;
						v36 = *(int32_t *)(v23 + 0x12cc);
						v30 = 80 * v17;
						v21 = v30;
						v37 = *(int32_t *)(v23 + 0x12d0);
						v31 = v17 + 1;
						g27 = v31;
						v20 = v13 + 64;
						v19 = 80 * v31;
						v34 = v30 + v13;
						v13 = v34;
						g36 = v13 + 68;
						g35 = v13 + 72;
						g26 = 8;
						v14 = 128;
						v8 = 32;
						*(int32_t *)v34 = v36;
						g33 = v4 + 76;
						v5 = 0;
						g28 = *(int32_t *)(g23 - 0x7620);
						*(int32_t *)(v13 + 4) = v37;
						v18 = v19 + v4;
						g31 = *(int32_t *)(g23 - 0x7624);
						g29 = 12;
						*(int32_t *)(v13 + 8) = v36;
						*(int32_t *)(v13 + 12) = v37;
						*(int32_t *)(v13 + 16) = v36;
						*(int32_t *)(v13 + 20) = v37;
						*(int32_t *)(v13 + 24) = v36;
						*(int32_t *)(v13 + 28) = v37;
						*(int32_t *)(v13 + 32) = v36;
						*(int32_t *)(v13 + 36) = v37;
						*(int32_t *)(v13 + 40) = v36;
						*(int32_t *)(v13 + 44) = v37;
						*(int32_t *)(v13 + 48) = v36;
						*(int32_t *)(v13 + 52) = v37;
						g24 = v36;
						g25 = v37;
						*(int32_t *)(v13 + 56) = v36;
						*(int32_t *)(v13 + 60) = g25;
						*(int32_t *)(v21 + v20) = g26;
						*(int32_t *)(v21 + g36) = v14;
						*(int32_t *)(v21 + g35) = v8;
						*(char *)(v21 + g33) = (char)v5;
						*(int32_t *)g28 = g27;
						v24 = v3;
						v38 = *(int32_t *)(v24 + 0x1524);
						v39 = *(int32_t *)(v24 + 0x1528);
						v22 = v38;
						*(int32_t *)v18 = v38;
						*(int32_t *)(v18 + 4) = v39;
						*(int32_t *)(v18 + 8) = v22;
						*(int32_t *)(v18 + 12) = v39;
						*(int32_t *)(v18 + 16) = v22;
						*(int32_t *)(v18 + 20) = v39;
						*(int32_t *)(v18 + 24) = v22;
						*(int32_t *)(v18 + 28) = v39;
						*(int32_t *)(v18 + 32) = v22;
						*(int32_t *)(v18 + 36) = v39;
						*(int32_t *)(v18 + 40) = v22;
						*(int32_t *)(v18 + 44) = v39;
						*(int32_t *)(v18 + 48) = v22;
						*(int32_t *)(v18 + 52) = v39;
						*(int32_t *)(v18 + 56) = v22;
						*(int32_t *)(v18 + 60) = v39;
						*(int32_t *)(v19 + v20) = g29;
						*(int32_t *)(v19 + g36) = v14;
						*(int32_t *)(v19 + g35) = v8;
						*(char *)(v19 + g33) = (char)v5;
						*(int32_t *)g31 = v16 + 2;
						v25 = g23;
						v32 = v16 + 2;
						g32 = v32;
						result = *(int32_t *)(v25 - 0x7628);
						v8 = result;
						v35 = *(int32_t *)*(int32_t *)(v25 - 0x762c);
						v1 = v35;
						v14 = v4 + 80 * v32;
						if (v35 < 1) {
							// 0x34244
							return result;
						}
						int32_t v52 = v35; // 0x3424012
						v26 = result;
						int32_t result2; // 0x3423c
						while (true) {
							// 0x3413c
							v33 = 232 * *(int32_t *)v26;
							v27 = v2;
							v29 = v52;
							v28 = v26;
							if (*(char *)(v27 + v33 + 192) != 0) {
							lab_0x34154:;
								int32_t v53 = v27 + v33; // 0x34154
								v3 = v53;
								int32_t v54 = g32 + 1;         // 0x34158
								int32_t v55 = v53 + 224;       // 0x3415c
								int32_t v56 = *(int32_t *)v55; // 0x3415c
								g32 = v54;
								*(int32_t *)v14 = *(int32_t *)(v56 + 312);
								*(int32_t *)(v14 + 4) = *(int32_t *)(v56 + 316);
								int32_t v57 = *(int32_t *)(v3 + 224); // 0x34178
								*(int32_t *)(v14 + 8) = *(int32_t *)(v57 + 320);
								*(int32_t *)(v14 + 12) = *(int32_t *)(v57 + 324);
								int32_t v58 = *(int32_t *)(v3 + 224); // 0x3418c
								*(int32_t *)(v14 + 16) = *(int32_t *)(v58 + 328);
								*(int32_t *)(v14 + 20) = *(int32_t *)(v58 + 332);
								int32_t v59 = *(int32_t *)(v3 + 224); // 0x341a0
								*(int32_t *)(v14 + 24) = *(int32_t *)(v59 + 336);
								*(int32_t *)(v14 + 28) = *(int32_t *)(v59 + 340);
								int32_t v60 = *(int32_t *)(v3 + 224); // 0x341b4
								*(int32_t *)(v14 + 32) = *(int32_t *)(v60 + 344);
								*(int32_t *)(v14 + 36) = *(int32_t *)(v60 + 348);
								int32_t v61 = *(int32_t *)(v3 + 224); // 0x341c8
								*(int32_t *)(v14 + 40) = *(int32_t *)(v61 + 352);
								*(int32_t *)(v14 + 44) = *(int32_t *)(v61 + 356);
								int32_t v62 = *(int32_t *)(v3 + 224); // 0x341dc
								*(int32_t *)(v14 + 48) = *(int32_t *)(v62 + 360);
								*(int32_t *)(v14 + 52) = *(int32_t *)(v62 + 364);
								int32_t v63 = *(int32_t *)(v3 + 224); // 0x341f0
								*(int32_t *)(v14 + 56) = *(int32_t *)(v63 + 368);
								*(int32_t *)(v14 + 60) = *(int32_t *)(v63 + 372);
								int32_t v64 = *(int32_t *)(*(int32_t *)(v3 + 224) + 376); // 0x34208
								*(int32_t *)(v14 + 64) = v64;
								int32_t v65 = *(int32_t *)(*(int32_t *)(v3 + 224) + 492); // 0x34214
								*(int32_t *)(v14 + 68) = v65;
								*(int32_t *)(v14 + 72) = *(int32_t *)(*(int32_t *)v55 + 496);
								unsigned char v66 = *(char *)(v3 + 193); // 0x34228
								*(char *)(v14 + 76) = (char)((int32_t)v66 + 4);
								v14 += 80;
								*(char *)(v3 + 194) = (char)v54;
								v29 = v1;
								v28 = v8;
								// branch -> 0x3423c
							}
						lab_0x3423c:
							// 0x3423c
							result2 = v28 + 4;
							v8 = result2;
							int32_t v67 = v29 - 1; // 0x34240
							v1 = v67;
							if (v67 == 0) {
								// break -> 0x34244
								break;
							}
							v52 = v67;
							v26 = result2;
							// continue -> 0x3413c
						}
						// 0x34244
						return result2;
					}
					// 0x33f84
					v15 = v51;
					v7 = v8;
					v14 = v50;
					// branch -> 0x33eb4
				}
			}
			// 0x33f8c
			v23 = v3;
			v36 = *(int32_t *)(v23 + 0x12cc);
			v30 = 80 * v17;
			v21 = v30;
			v37 = *(int32_t *)(v23 + 0x12d0);
			v31 = v17 + 1;
			g27 = v31;
			v20 = v13 + 64;
			v19 = 80 * v31;
			v34 = v30 + v13;
			v13 = v34;
			g36 = v13 + 68;
			g35 = v13 + 72;
			g26 = 8;
			v14 = 128;
			v8 = 32;
			*(int32_t *)v34 = v36;
			g33 = v4 + 76;
			v5 = 0;
			g28 = *(int32_t *)(g23 - 0x7620);
			*(int32_t *)(v13 + 4) = v37;
			v18 = v19 + v4;
			g31 = *(int32_t *)(g23 - 0x7624);
			g29 = 12;
			*(int32_t *)(v13 + 8) = v36;
			*(int32_t *)(v13 + 12) = v37;
			*(int32_t *)(v13 + 16) = v36;
			*(int32_t *)(v13 + 20) = v37;
			*(int32_t *)(v13 + 24) = v36;
			*(int32_t *)(v13 + 28) = v37;
			*(int32_t *)(v13 + 32) = v36;
			*(int32_t *)(v13 + 36) = v37;
			*(int32_t *)(v13 + 40) = v36;
			*(int32_t *)(v13 + 44) = v37;
			*(int32_t *)(v13 + 48) = v36;
			*(int32_t *)(v13 + 52) = v37;
			g24 = v36;
			g25 = v37;
			*(int32_t *)(v13 + 56) = v36;
			*(int32_t *)(v13 + 60) = g25;
			*(int32_t *)(v21 + v20) = g26;
			*(int32_t *)(v21 + g36) = v14;
			*(int32_t *)(v21 + g35) = v8;
			*(char *)(v21 + g33) = (char)v5;
			*(int32_t *)g28 = g27;
			v24 = v3;
			v38 = *(int32_t *)(v24 + 0x1524);
			v39 = *(int32_t *)(v24 + 0x1528);
			v22 = v38;
			*(int32_t *)v18 = v38;
			*(int32_t *)(v18 + 4) = v39;
			*(int32_t *)(v18 + 8) = v22;
			*(int32_t *)(v18 + 12) = v39;
			*(int32_t *)(v18 + 16) = v22;
			*(int32_t *)(v18 + 20) = v39;
			*(int32_t *)(v18 + 24) = v22;
			*(int32_t *)(v18 + 28) = v39;
			*(int32_t *)(v18 + 32) = v22;
			*(int32_t *)(v18 + 36) = v39;
			*(int32_t *)(v18 + 40) = v22;
			*(int32_t *)(v18 + 44) = v39;
			*(int32_t *)(v18 + 48) = v22;
			*(int32_t *)(v18 + 52) = v39;
			*(int32_t *)(v18 + 56) = v22;
			*(int32_t *)(v18 + 60) = v39;
			*(int32_t *)(v19 + v20) = g29;
			*(int32_t *)(v19 + g36) = v14;
			*(int32_t *)(v19 + g35) = v8;
			*(char *)(v19 + g33) = (char)v5;
			*(int32_t *)g31 = v16 + 2;
			v25 = g23;
			v32 = v16 + 2;
			g32 = v32;
			result = *(int32_t *)(v25 - 0x7628);
			v8 = result;
			v35 = *(int32_t *)*(int32_t *)(v25 - 0x762c);
			v1 = v35;
			v14 = v4 + 80 * v32;
			if (v35 < 1) {
				// 0x34244
				return result;
			}
			v26 = result;
			while (true) {
				// 0x3413c
				v33 = 232 * *(int32_t *)v26;
				v27 = v2;
				if (*(char *)(v27 + v33 + 192) == 0) {
					v29 = v35;
					v28 = v26;
					goto lab_0x3423c;
				}
				goto lab_0x34154;
			}
		} else {
			// 0x33de8
			v9 = v11;
			v10 = v5;
			// branch -> 0x33de8
			continue;
		}
	}
}

// Address range: 0x34250 - 0x34274
int32_t AddDead(int32_t a1, int32_t a2, uint32_t a3, int32_t a4)
{
	int32_t result = *(int32_t *)*(int32_t *)(g23 - 0x7630); // 0x34258
	int32_t v1 = __asm_rlwinm(a4, 5, 24, 26);                // 0x34264
	*(char *)(112 * a1 + a2 + result) = (char)(a3 % 32 + v1);
	return result;
}

// Address range: 0x34274 - 0x34338
int32_t SetDead(int32_t a1)
{
	int32_t v1 = g10; // 0x34278
	g36 = 0;
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x34284
	g33 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x762c); // 0x34288
	g35 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7628); // 0x3428c
	g29 = v4;
	if (*(int32_t *)v3 > 0) {
		while (true) {
			int32_t v5 = 232 * *(int32_t *)v4; // 0x342a0
			int32_t result2 = v5;              // 0x3433415
			int32_t v6;                        // 0x34314
			if (*(char *)(v5 + 192 + v2) != 0) {
				// 0x342b4
				g30 = v5 + v2;
				g28 = 0;
				int32_t v7 = 0; // r27
				int32_t v8 = 0; // 0x342d011
				                // branch -> 0x342c0
			lab_0x342c0:
				while (true) {
					// 0x342c0
					g27 = 0;
					int32_t v9 = v8; // 0x342d0
					int32_t v10 = 0; // 0x342ec
					// branch -> 0x342c4
					while (true) {
						int32_t v11 = *(int32_t *)*(int32_t *)(g23 - 0x7630);    // 0x342c4
						int32_t v12 = g30;                                       // 0x342c8
						int32_t v13 = (int32_t)(*(char *)(v11 + v10 + v9) % 32); // 0x342d8
						int32_t v14 = v13;                                       // 0x3433416
						int32_t v15 = v10;                                       // 0x342f4
						if (v13 == (int32_t) * (char *)(v12 + 194)) {
							// 0x342e4
							v14 = function_cb984((int32_t) * (char *)(v12 + 219), g28, v10);
							v15 = g27;
							// branch -> 0x342f4
						}
						int32_t v16 = v15 + 1; // 0x342f4
						g27 = v16;
						if (v16 < 112) {
							// 0x342f4
							v9 = v7;
							v10 = v16;
							// branch -> 0x342c4
							continue;
						} else {
							int32_t v17 = g28 + 1; // 0x34300
							g28 = v17;
							int32_t v18 = v7 + 112; // 0x34304
							v7 = v18;
							if (v17 >= 112) {
								result2 = v14;
								// break (via goto) -> 0x34310
								goto lab_0x34310_2;
							}
							v8 = v18;
							// continue (via goto) -> 0x342c0
							goto lab_0x342c0;
						}
					}
					int32_t v19 = g29;     // 0x34310
					int32_t v20 = v19 + 4; // 0x34310
					g29 = v20;
					int32_t v21 = g36; // 0x34314
					v6 = v21 + 1;
					g36 = v6;
					int32_t v22 = g35;             // 0x34318
					int32_t v23 = *(int32_t *)v22; // 0x34318
					int32_t result = result2;      // 0x34334
					if (v6 < v23) {
					lab_0x34310:
						// 0x34310
						// branch -> 0x3429c
						break;
					}
					// 0x34324
					g10 = v1;
					return result;
				}
			}
		lab_0x34310_2:
			// 0x34310
			g29 += 4;
			v6 = g36 + 1;
			g36 = v6;
			if (v6 < *(int32_t *)g35) {
				goto lab_0x34310;
			}
			// 0x34324
			g10 = v1;
			return result2;
		}
	}
	// 0x34324
	g10 = v1;
	return g34;
}
