
// Address range: 0x2bea0 - 0x2c27c
int32_t codec_init_key(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x2bea0
	int32_t v2 = g35; // 0x2bea8
	int32_t v3 = g33; // 0x2beac
	g33 = a2;
	g34 = 0x7058;
	g34 = srand(0x7058);
	int32_t v4;       // bp-164
	int32_t v5 = &v4; // 0x2becc
	g36 = v5;
	g35 = 135;
	int32_t v6 = rand(); // 0x2bed4
	g34 = v6;
	*(char *)g36 = (char)v6;
	g36++;
	g35--;
	// branch -> 0x2bed4
	while (g35 != 0) {
		// 0x2bed4
		v6 = rand();
		g34 = v6;
		*(char *)g36 = (char)v6;
		g36++;
		g35--;
		// continue -> 0x2bed4
	}
	// 0x2bef0
	int16_t v7;
	int16_t v8;
	int32_t v9 = v8 | 256 * v7; // 0x2bef8
	v4 = v9;
	int32_t v10;        // bp-228
	int32_t v11 = &v10; // 0x2bf04
	int32_t v12 = v11;  // r3
	int32_t v13 = 8;    // ctr
	int32_t v14 = 0;    // r5
	int32_t v15 = v11;  // 0x2bf30
	int32_t v16 = 0;    // 0x2bf14
	// branch -> 0x2bf14
	while (true) {
		int32_t v17 = g33; // 0x2bf14
		int32_t v18 = v16; // 0x2bf24
		if (*(char *)(v17 + v16) == 0) {
			// 0x2bf20
			v18 = 0;
			// branch -> 0x2bf24
		}
		// 0x2bf24
		*(char *)v15 = *(char *)(v18 + v17);
		int32_t v19 = v12 + 1; // 0x2bf34
		int32_t v20 = g33;     // 0x2bf38
		int32_t v21 = v18 + 1; // 0x2bf38
		int32_t v22 = v21;     // 0x2bf48
		if (*(char *)(v21 + v20) == 0) {
			// 0x2bf44
			v22 = 0;
			// branch -> 0x2bf48
		}
		// 0x2bf48
		*(char *)v19 = *(char *)(v22 + v20);
		int32_t v23 = v19 + 1; // 0x2bf5c
		int32_t v24 = g33;     // 0x2bf60
		int32_t v25 = v22 + 1; // 0x2bf60
		int32_t v26 = v25;     // 0x2bf70
		if (*(char *)(v25 + v24) == 0) {
			// 0x2bf6c
			v26 = 0;
			// branch -> 0x2bf70
		}
		// 0x2bf70
		*(char *)v23 = *(char *)(v26 + v24);
		int32_t v27 = v23 + 1; // 0x2bf84
		int32_t v28 = g33;     // 0x2bf88
		int32_t v29 = v26 + 1; // 0x2bf88
		int32_t v30 = v29;     // 0x2bf98
		if (*(char *)(v29 + v28) == 0) {
			// 0x2bf94
			v30 = 0;
			// branch -> 0x2bf98
		}
		// 0x2bf98
		*(char *)v27 = *(char *)(v30 + v28);
		int32_t v31 = v27 + 1; // 0x2bfac
		int32_t v32 = g33;     // 0x2bfb0
		int32_t v33 = v30 + 1; // 0x2bfb0
		int32_t v34 = v33;     // 0x2bfc0
		if (*(char *)(v33 + v32) == 0) {
			// 0x2bfbc
			v34 = 0;
			// branch -> 0x2bfc0
		}
		// 0x2bfc0
		*(char *)v31 = *(char *)(v34 + v32);
		int32_t v35 = v31 + 1; // 0x2bfd4
		int32_t v36 = g33;     // 0x2bfd8
		int32_t v37 = v34 + 1; // 0x2bfd8
		int32_t v38 = v37;     // 0x2bfe8
		if (*(char *)(v37 + v36) == 0) {
			// 0x2bfe4
			v38 = 0;
			// branch -> 0x2bfe8
		}
		// 0x2bfe8
		*(char *)v35 = *(char *)(v38 + v36);
		int32_t v39 = v35 + 1; // 0x2bffc
		int32_t v40 = g33;     // 0x2c000
		int32_t v41 = v38 + 1; // 0x2c000
		int32_t v42 = v41;     // 0x2c010
		if (*(char *)(v41 + v40) == 0) {
			// 0x2c00c
			v42 = 0;
			// branch -> 0x2c010
		}
		// 0x2c010
		*(char *)v39 = *(char *)(v42 + v40);
		int32_t v43 = v39 + 1; // 0x2c024
		int32_t v44 = g33;     // 0x2c028
		int32_t v45 = v42 + 1; // 0x2c028
		int32_t v46 = v45;     // 0x2c038
		if (*(char *)(v45 + v44) == 0) {
			// 0x2c034
			v46 = 0;
			// branch -> 0x2c038
		}
		// 0x2c038
		v14 += 7;
		*(char *)v43 = *(char *)(v46 + v44);
		int32_t v47 = v43 + 1; // 0x2c04c
		v12 = v47;
		int32_t v48 = v13 - 1; // 0x2c050
		v13 = v48;
		if (v48 == 0) {
			// 0x2c054
			SHA1Reset(0);
			int32_t v49;        // bp-248
			int32_t v50 = &v49; // 0x2c060
			SHA1Calculate(0, v11, v50);
			SHA1Clear();
			v13 = 17;
			int32_t v51 = 0x66666667; // r8
			v12 = v5;
			int32_t v52 = v5;         // 0x2c0e0
			int32_t v53 = 0;          // 0x2c0a4
			int32_t v54 = 0x66666667; // 0x2c0cc
			// branch -> 0x2c08c
			while (true) {
				int64_t v55 = v54;                                                                                   // 0x2c08c
				uint64_t v56 = v55 * (int64_t)v53;                                                                   // 0x2c08c
				char *v57 = (char *)v52;                                                                             // 0x2c090
				int32_t v58 = (int32_t)(v56 / 0x100000000) >> 31;                                                    // 0x2c094
				int32_t v59 = -20 * ((v58 & -0x20000000 | (int32_t)(v56 / 0x800000000)) + (int32_t)(v58 < 0)) + v53; // 0x2c0a4
				int32_t v60 = v53 + 1;                                                                               // 0x2c0a8
				uint64_t v61 = v55 * (int64_t)v60;                                                                   // 0x2c0ac
				int32_t v62 = (int32_t)(v61 / 0x100000000) >> 31;                                                    // 0x2c0b4
				int32_t v63 = -20 * ((v62 & -0x20000000 | (int32_t)(v61 / 0x800000000)) + (int32_t)(v62 < 0)) + v60; // r6
				int32_t v64 = v53 + 2;                                                                               // 0x2c0c8
				uint64_t v65 = v55 * (int64_t)v64;                                                                   // 0x2c0cc
				int32_t v66 = (int32_t)(v65 / 0x100000000) >> 31;                                                    // 0x2c0d0
				v14 = (v66 & -0x20000000 | (int32_t)(v65 / 0x800000000)) + (int32_t)(v66 < 0);
				*v57 = *(char *)(v59 + v50) ^ *v57;
				int32_t v67 = 20 * v14;                           // 0x2c0e4
				int32_t v68 = v64 + 1;                            // 0x2c0f0
				uint64_t v69 = (int64_t)v51 * (int64_t)v68;       // 0x2c0f4
				char *v70 = (char *)(v12 + 1);                    // 0x2c0f8
				int32_t v71 = (int32_t)(v69 / 0x100000000) >> 31; // 0x2c0fc
				v14 = (v71 & -0x20000000 | (int32_t)(v69 / 0x800000000)) + (int32_t)(v71 < 0);
				*v70 = *v70 ^ *(char *)(v63 + v50);
				int32_t v72 = 20 * v14;                           // 0x2c110
				int32_t v73 = v68 + 1;                            // 0x2c11c
				uint64_t v74 = (int64_t)v51 * (int64_t)v73;       // 0x2c120
				char *v75 = (char *)(v12 + 2);                    // 0x2c124
				int32_t v76 = (int32_t)(v74 / 0x100000000) >> 31; // 0x2c128
				v14 = (v76 & -0x20000000 | (int32_t)(v74 / 0x800000000)) + (int32_t)(v76 < 0);
				*v75 = *v75 ^ *(char *)(v64 - v67 + v50);
				int32_t v77 = 20 * v14;                           // 0x2c13c
				int32_t v78 = v73 + 1;                            // 0x2c148
				uint64_t v79 = (int64_t)v51 * (int64_t)v78;       // 0x2c14c
				char *v80 = (char *)(v12 + 3);                    // 0x2c150
				int32_t v81 = (int32_t)(v79 / 0x100000000) >> 31; // 0x2c154
				v14 = (v81 & -0x20000000 | (int32_t)(v79 / 0x800000000)) + (int32_t)(v81 < 0);
				*v80 = *v80 ^ *(char *)(v68 - v72 + v50);
				int32_t v82 = 20 * v14;                           // 0x2c168
				int32_t v83 = v78 + 1;                            // 0x2c174
				uint64_t v84 = (int64_t)v51 * (int64_t)v83;       // 0x2c178
				char *v85 = (char *)(v12 + 4);                    // 0x2c17c
				int32_t v86 = (int32_t)(v84 / 0x100000000) >> 31; // 0x2c180
				v14 = (v86 & -0x20000000 | (int32_t)(v84 / 0x800000000)) + (int32_t)(v86 < 0);
				*v85 = *v85 ^ *(char *)(v73 - v77 + v50);
				int32_t v87 = 20 * v14; // 0x2c194
				int32_t v88 = v83 + 1;  // 0x2c1a0
				v14 = (int64_t)v51 * (int64_t)v88 / 0x100000000;
				char *v89 = (char *)(v12 + 5); // 0x2c1a8
				*v89 = *v89 ^ *(char *)(v78 - v82 + v50);
				char *v90 = (char *)(v12 + 6); // 0x2c1c0
				*v90 = *(char *)(v83 - v87 + v50) ^ *v90;
				char *v91 = (char *)(v12 + 7); // 0x2c1dc
				*v91 = *(char *)(v50 + v88 - 20 * v14 / 8) ^ *v91;
				int32_t v92 = v12 + 8; // 0x2c1ec
				v12 = v92;
				int32_t v93 = v13 - 1; // 0x2c1f0
				v13 = v93;
				if (v93 == 0) {
					// 0x2c1f4
					v4 = v9;
					g34 = v11;
					memset();
					g34 = v50;
					memset();
					g35 = 0;
					int32_t v94;        // bp-92
					int32_t v95 = &v94; // 0x2c228
					g36 = v95;
					SHA1Reset(0);
					SHA1Calculate(g35, v95, 0);
					int32_t v96 = g35 + 1; // 0x2c244
					g35 = v96;
					// branch -> 0x2c22c
					while (v96 < 3) {
						// 0x2c22c
						SHA1Reset(v96);
						SHA1Calculate(g35, v95, 0);
						v96 = g35 + 1;
						g35 = v96;
						// continue -> 0x2c22c
					}
					// 0x2c250
					g34 = v5;
					g37 = 136;
					g36 = v1;
					g35 = v2;
					g33 = v3;
					return memset();
				}
				// 0x2c08c
				v52 = v92;
				v53 = v88 + 1;
				v54 = v51;
				// branch -> 0x2c08c
			}
		} else {
			// 0x2c038
			v15 = v47;
			v16 = v46 + 1;
			// branch -> 0x2bf14
			continue;
		}
	}
}

// Address range: 0x2c27c - 0x2c534
int32_t codec_decode(int32_t *a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x2c280
	g31 = (int32_t)a1;
	g32 = a2;
	codec_init_key(0, a3);
	uint32_t v2 = g32; // 0x2c2a0
	if (v2 <= 8) {
		// 0x2c2a8
		// branch -> 0x2c520
		// 0x2c520
		g10 = v1;
		return 0;
	}
	int32_t v3 = v2 - 8; // 0x2c2b0
	g32 = v3;
	if (v3 % 64 == 0) {
		// 0x2c2d8
		int32_t v4;       // bp-180
		int32_t v5 = &v4; // 0x2c2c8
		g36 = v5;
		g33 = v3;
		g35 = 0x66666667;
		int32_t v6;       // bp-160
		int32_t v7 = &v6; // 0x2c2dc
		                  // branch -> 0x2c2d8
	lab_0x2c2d8:
		while (true) {
			// 0x2c2d8
			g34 = v7;
			memcpy();
			SHA1Result(0, v5);
			int32_t v8 = v7;  // r3
			int32_t v9 = 8;   // ctr
			int32_t v10 = v7; // 0x2c360
			int32_t v11 = 0;  // 0x2c33c
			// branch -> 0x2c308
			while (true) {
				int64_t v12 = g35;                                                                            // 0x2c308
				uint64_t v13 = v12 * (int64_t)v11;                                                            // 0x2c308
				int32_t v14 = v11 + 1;                                                                        // 0x2c30c
				int32_t v15 = v11 + 2;                                                                        // r26
				char *v16 = (char *)v10;                                                                      // 0x2c314
				int32_t v17 = v11 + 3;                                                                        // r12
				int32_t v18 = (int32_t)(v13 / 0x100000000) >> 31;                                             // 0x2c31c
				int32_t v19 = v11 + 4;                                                                        // r11
				int32_t v20 = v11 + 5;                                                                        // r10
				int32_t v21 = v11 + 6;                                                                        // r8
				int32_t v22 = 20 * ((v18 & -0x20000000 | (int32_t)(v13 / 0x800000000)) + (int32_t)(v18 < 0)); // 0x2c334
				int32_t v23 = v11 + 7;                                                                        // r6
				int32_t v24 = v11 + 8;                                                                        // r4
				uint64_t v25 = (int64_t)v14 * v12;                                                            // 0x2c344
				unsigned char v26 = *(char *)(g36 + v11 - v22);                                               // 0x2c348
				g28 = v26;
				int32_t v27 = (int32_t)(v25 / 0x100000000) >> 31;                                             // 0x2c34c
				int32_t v28 = 20 * ((v27 & -0x20000000 | (int32_t)(v25 / 0x800000000)) + (int32_t)(v27 < 0)); // r7
				*v16 = v26 ^ *v16;
				uint64_t v29 = (int64_t)v15 * (int64_t)g35;                     // 0x2c364
				char *v30 = (char *)(v8 + 1);                                   // 0x2c368
				int32_t v31 = (int32_t)(v29 / 0x100000000) >> 31;               // 0x2c36c
				int32_t v32 = v31 & -0x20000000 | (int32_t)(v29 / 0x800000000); // 0x2c36c
				unsigned char v33 = *(char *)(g36 + v14 - v28);                 // 0x2c378
				g29 = v33;
				*v30 = v33 ^ *v30;
				uint64_t v34 = (int64_t)v17 * (int64_t)g35;                     // 0x2c38c
				char *v35 = (char *)(v8 + 2);                                   // 0x2c390
				int32_t v36 = (int32_t)(v34 / 0x100000000) >> 31;               // 0x2c394
				int32_t v37 = v36 & -0x20000000 | (int32_t)(v34 / 0x800000000); // 0x2c394
				int32_t v38 = v15 - 20 * (v32 + (int32_t)(v31 < 0));            // 0x2c398
				unsigned char v39 = *(char *)(g36 + v38);                       // 0x2c3a0
				g30 = v39;
				*v35 = v39 ^ *v35;
				uint64_t v40 = (int64_t)v19 * (int64_t)g35;                     // 0x2c3b4
				char *v41 = (char *)(v8 + 3);                                   // 0x2c3b8
				int32_t v42 = (int32_t)(v40 / 0x100000000) >> 31;               // 0x2c3bc
				int32_t v43 = v42 & -0x20000000 | (int32_t)(v40 / 0x800000000); // 0x2c3bc
				int32_t v44 = v17 - 20 * (v37 + (int32_t)(v36 < 0));            // 0x2c3c0
				*v41 = *(char *)(g36 + v44) ^ *v41;
				uint64_t v45 = (int64_t)v20 * (int64_t)g35;                     // 0x2c3dc
				char *v46 = (char *)(v8 + 4);                                   // 0x2c3e0
				int32_t v47 = (int32_t)(v45 / 0x100000000) >> 31;               // 0x2c3e4
				int32_t v48 = v47 & -0x20000000 | (int32_t)(v45 / 0x800000000); // 0x2c3e4
				int32_t v49 = v19 - 20 * (v43 + (int32_t)(v42 < 0));            // 0x2c3e8
				*v46 = *(char *)(g36 + v49) ^ *v46;
				int64_t v50 = g35;                                              // 0x2c404
				uint64_t v51 = (int64_t)v21 * v50;                              // 0x2c404
				char *v52 = (char *)(v8 + 5);                                   // 0x2c408
				int32_t v53 = (int32_t)(v51 / 0x100000000) >> 31;               // 0x2c40c
				int32_t v54 = v53 & -0x20000000 | (int32_t)(v51 / 0x800000000); // 0x2c40c
				int32_t v55 = v20 - 20 * (v48 + (int32_t)(v47 < 0));            // 0x2c410
				*v52 = *(char *)(g36 + v55) ^ *v52;
				int32_t v56 = v21 - 20 * (v54 + (int32_t)(v53 < 0));           // 0x2c430
				int32_t v57 = (int32_t)((int64_t)v23 * v50 / 0x100000000) / 8; // 0x2c434
				char *v58 = (char *)(v8 + 6);                                  // 0x2c444
				*v58 = *v58 ^ *(char *)(g36 + v56);
				char *v59 = (char *)(v8 + 7); // 0x2c45c
				*v59 = *v59 ^ *(char *)(g36 + v23 - 20 * v57);
				int32_t v60 = v8 + 8; // 0x2c468
				v8 = v60;
				int32_t v61 = v9 - 1; // 0x2c46c
				v9 = v61;
				if (v61 == 0) {
					// 0x2c470
					SHA1Calculate(0, v7, 0);
					g34 = v5;
					memset();
					g34 = g31;
					memcpy();
					g31 += 64;
					int32_t v62 = g33 - 64; // 0x2c4a8
					g33 = v62;
					if (v62 == 0) {
						// break (via goto) -> 0x2c4b4
						goto lab_0x2c4b4;
					}
					// continue (via goto) -> 0x2c2d8
					goto lab_0x2c2d8;
				} else {
					// 0x2c308
					v10 = v60;
					v11 = v24;
					// branch -> 0x2c308
					continue;
				}
			}
		lab_0x2c4b4:
			// 0x2c4b4
			g34 = v7;
			int32_t v63 = memset(); // 0x2c4bc
			if (*(char *)(g31 + 4) != 0) {
				// 0x2c518
				SHA1Clear(v63);
				// branch -> 0x2c520
				// 0x2c520
				g10 = v1;
				return 0;
			}
			// 0x2c4d0
			int32_t v64;        // bp-200
			int32_t v65 = &v64; // 0x2c4d4
			SHA1Result(0, v65);
			int32_t v66 = *(int32_t *)g31; // 0x2c4dc
			if (v66 == v64) {
				// 0x2c500
				g32 -= (64 - (int32_t) * (char *)(g31 + 5));
				SHA1Clear(v66);
				// branch -> 0x2c520
				// 0x2c520
				g10 = v1;
				return g32;
			}
			// 0x2c4ec
			g34 = v65;
			// branch -> 0x2c518
			// 0x2c518
			SHA1Clear(memset());
			// branch -> 0x2c520
			// 0x2c520
			g10 = v1;
			return 0;
		}
	}
	// 0x2c520
	g10 = v1;
	return 0;
}

// Address range: 0x2c534 - 0x2c54c
int32_t codec_get_encoded_len(uint32_t a1)
{
	uint32_t v1 = a1 % 64; // 0x2c534
	int32_t v2;            // 0x2c544
	if (v1 != 0) {
		// 0x2c53c
		v2 = 64 - v1 + a1;
		// branch -> 0x2c544
	} else {
		v2 = a1;
	}
	// 0x2c544
	return v2 + 8;
}

// Address range: 0x2c54c - 0x2c804
int32_t codec_encode(int32_t *a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x2c54c
	g37 = a2;
	int32_t v1 = g10; // 0x2c550
	int32_t v2 = g37; // 0x2c554
	g32 = v2;
	g31 = (int32_t)a1;
	g28 = a4;
	if (a3 != codec_get_encoded_len(0x1000000 * v2 / 0x1000000)) {
		// 0x2c57c
		app_fatal(*(int32_t *)(g23 - 0x6578));
		// branch -> 0x2c584
	}
	// 0x2c584
	codec_init_key(1, g28);
	int32_t v3;       // bp-180
	int32_t v4 = &v3; // 0x2c594
	g36 = v4;
	g35 = 0x66666667;
	int32_t v5 = g32;
	int32_t v6; // bp-160
	int32_t v7 = &v6;
	int32_t v8;     // r0
	int32_t v9;     // bp-200
	int32_t result; // 0x2c7ec
	int32_t v10;    // 0x2c7d4
	if (v5 == 0) {
		// 0x2c7b8
		g34 = v7;
		memset();
		SHA1Result(0, (int32_t)&v9);
		v10 = v9;
		v8 = 0;
		*(int32_t *)g31 = v10;
		*(char *)(g31 + 4) = (char)v8;
		*(char *)(g31 + 5) = (char)0;
		*(int16_t *)(g31 + 6) = (int16_t)v8;
		result = SHA1Clear(v10);
		g10 = v1;
		return result;
	}
	// branch -> 0x2c5a4
lab_0x2c5a4:
	while (true) {
		int32_t v11 = v5 < 64 ? v5 : 64;
		g33 = v11;
		g34 = v7;
		memcpy();
		if (g33 <= 63) {
			// 0x2c5d8
			g34 = v11 + v7;
			memset();
			// branch -> 0x2c5ec
		}
		// 0x2c5ec
		SHA1Result(0, v4);
		SHA1Calculate(0, v7, 0);
		int32_t v12 = v7; // r3
		int32_t v13 = 8;  // ctr
		int32_t v14 = v7; // 0x2c670
		int32_t v15 = 0;  // 0x2c64c
		// branch -> 0x2c618
		while (true) {
			int64_t v16 = g35;                                                                            // 0x2c618
			uint64_t v17 = v16 * (int64_t)v15;                                                            // 0x2c618
			int32_t v18 = v15 + 1;                                                                        // 0x2c61c
			int32_t v19 = v15 + 2;                                                                        // r26
			char *v20 = (char *)v14;                                                                      // 0x2c624
			int32_t v21 = v15 + 3;                                                                        // r12
			int32_t v22 = (int32_t)(v17 / 0x100000000) >> 31;                                             // 0x2c62c
			int32_t v23 = v15 + 4;                                                                        // r11
			int32_t v24 = v15 + 5;                                                                        // r10
			int32_t v25 = v15 + 6;                                                                        // r8
			int32_t v26 = 20 * ((v22 & -0x20000000 | (int32_t)(v17 / 0x800000000)) + (int32_t)(v22 < 0)); // 0x2c644
			int32_t v27 = v15 + 7;                                                                        // r6
			int32_t v28 = v15 + 8;                                                                        // r4
			uint64_t v29 = (int64_t)v18 * v16;                                                            // 0x2c654
			int32_t v30 = (int32_t)(v29 / 0x100000000) >> 31;                                             // 0x2c65c
			int32_t v31 = 20 * ((v30 & -0x20000000 | (int32_t)(v29 / 0x800000000)) + (int32_t)(v30 < 0)); // r7
			*v20 = *(char *)(g36 + v15 - v26) ^ *v20;
			uint64_t v32 = (int64_t)v19 * (int64_t)g35;                     // 0x2c674
			char *v33 = (char *)(v12 + 1);                                  // 0x2c678
			int32_t v34 = (int32_t)(v32 / 0x100000000) >> 31;               // 0x2c67c
			int32_t v35 = v34 & -0x20000000 | (int32_t)(v32 / 0x800000000); // 0x2c67c
			*v33 = *(char *)(g36 + v18 - v31) ^ *v33;
			uint64_t v36 = (int64_t)v21 * (int64_t)g35;                     // 0x2c69c
			char *v37 = (char *)(v12 + 2);                                  // 0x2c6a0
			int32_t v38 = (int32_t)(v36 / 0x100000000) >> 31;               // 0x2c6a4
			int32_t v39 = v38 & -0x20000000 | (int32_t)(v36 / 0x800000000); // 0x2c6a4
			int32_t v40 = v19 - 20 * (v35 + (int32_t)(v34 < 0));            // 0x2c6a8
			*v37 = *(char *)(g36 + v40) ^ *v37;
			uint64_t v41 = (int64_t)v23 * (int64_t)g35;                     // 0x2c6c4
			char *v42 = (char *)(v12 + 3);                                  // 0x2c6c8
			int32_t v43 = (int32_t)(v41 / 0x100000000) >> 31;               // 0x2c6cc
			int32_t v44 = v43 & -0x20000000 | (int32_t)(v41 / 0x800000000); // 0x2c6cc
			int32_t v45 = v21 - 20 * (v39 + (int32_t)(v38 < 0));            // 0x2c6d0
			*v42 = *(char *)(g36 + v45) ^ *v42;
			uint64_t v46 = (int64_t)v24 * (int64_t)g35;                     // 0x2c6ec
			char *v47 = (char *)(v12 + 4);                                  // 0x2c6f0
			int32_t v48 = (int32_t)(v46 / 0x100000000) >> 31;               // 0x2c6f4
			int32_t v49 = v48 & -0x20000000 | (int32_t)(v46 / 0x800000000); // 0x2c6f4
			int32_t v50 = v23 - 20 * (v44 + (int32_t)(v43 < 0));            // 0x2c6f8
			*v47 = *(char *)(g36 + v50) ^ *v47;
			int64_t v51 = g35;                                              // 0x2c714
			uint64_t v52 = (int64_t)v25 * v51;                              // 0x2c714
			char *v53 = (char *)(v12 + 5);                                  // 0x2c718
			int32_t v54 = (int32_t)(v52 / 0x100000000) >> 31;               // 0x2c71c
			int32_t v55 = v54 & -0x20000000 | (int32_t)(v52 / 0x800000000); // 0x2c71c
			int32_t v56 = v24 - 20 * (v49 + (int32_t)(v48 < 0));            // 0x2c720
			*v53 = *(char *)(g36 + v56) ^ *v53;
			int32_t v57 = v25 - 20 * (v55 + (int32_t)(v54 < 0));           // 0x2c740
			int32_t v58 = (int32_t)((int64_t)v27 * v51 / 0x100000000) / 8; // 0x2c744
			char *v59 = (char *)(v12 + 6);                                 // 0x2c754
			*v59 = *v59 ^ *(char *)(g36 + v57);
			char *v60 = (char *)(v12 + 7); // 0x2c76c
			*v60 = *v60 ^ *(char *)(g36 + v27 - 20 * v58);
			int32_t v61 = v12 + 8; // 0x2c778
			v12 = v61;
			int32_t v62 = v13 - 1; // 0x2c77c
			v13 = v62;
			if (v62 == 0) {
				// 0x2c780
				g34 = v4;
				memset();
				g34 = g31;
				memcpy();
				int32_t v63 = g33; // 0x2c7a4
				v11 = v63;
				g31 += 64;
				int32_t v64 = g32 - v63; // 0x2c7ac
				g32 = v64;
				if (v64 == 0) {
					// break (via goto) -> 0x2c7b8
					goto lab_0x2c7b8;
				}
				v5 = v64;
				// continue (via goto) -> 0x2c5a4
				goto lab_0x2c5a4;
			} else {
				// 0x2c618
				v14 = v61;
				v15 = v28;
				// branch -> 0x2c618
				continue;
			}
		}
	lab_0x2c7b8:
		// 0x2c7b8
		g34 = v7;
		memset();
		SHA1Result(0, (int32_t)&v9);
		v10 = v9;
		v8 = 0;
		*(int32_t *)g31 = v10;
		*(char *)(g31 + 4) = (char)v8;
		*(char *)(g31 + 5) = (char)v11;
		*(int16_t *)(g31 + 6) = (int16_t)v8;
		result = SHA1Clear(v10);
		g10 = v1;
		return result;
	}
}
