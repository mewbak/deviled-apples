
// Address range: 0xb63b8 - 0xb648c
int32_t InitStores(void)
{
	int32_t v1 = g36; // 0xb63b8
	g36 = *(int32_t *)(g23 - 0x71a8);
	int32_t v2 = LoadFileInMem(*(int32_t *)(g23 - 0x56b0), NULL); // 0xb63d4
	*(int32_t *)*(int32_t *)(g23 - 0x719c) = v2;
	int32_t v3 = LoadFileInMem(*(int32_t *)(g23 - 0x56b4), NULL); // 0xb63e8
	*(int32_t *)*(int32_t *)(g23 - 0x7774) = v3;
	int32_t v4 = LoadFileInMem(*(int32_t *)(g23 - 0x56b8), NULL); // 0xb63fc
	*(int32_t *)*(int32_t *)(g23 - 0x7288) = v4;
	function_b6c90(0, 24);
	int32_t v5 = 0; // r6
	int32_t v6 = 1; // r5
	*(char *)*(int32_t *)(g23 - 0x7764) = 0;
	int32_t v7 = -1; // r0
	*(int32_t *)*(int32_t *)(g23 - 0x6ef0) = v6;
	*(char *)*(int32_t *)(g23 - 0x6ef4) = (char)v5;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = v5;
	*(int32_t *)*(int32_t *)(g23 - 0x71ac) = v5;
	*(int32_t *)*(int32_t *)(g23 - 0x71b4) = v6;
	int32_t result = *(int32_t *)(g23 - 0x71b8); // r3
	*(int32_t *)(g36 + 8) = v7;
	*(int32_t *)(g36 + 376) = v7;
	*(int32_t *)(g36 + 744) = v7;
	*(int32_t *)(g36 + 1112) = v7;
	*(int32_t *)(g36 + 1480) = v7;
	*(int32_t *)(g36 + 1848) = v7;
	*(int32_t *)(*(int32_t *)(g23 - 0x71bc) + 8) = v7;
	*(int32_t *)result = v5;
	g36 = v1;
	return result;
}

// Address range: 0xb648c - 0xb65b4
int32_t SetupTownStores(int32_t a1)
{
	int32_t v1 = g36; // 0xb648c
	int32_t v2 = g10; // 0xb6490
	g36 = *(int32_t *)(g23 - 0x77a8);
	int32_t v3 = g35;            // 0xb6498
	int32_t v4 = g33;            // 0xb64a0
	int32_t v5 = GetTickCount(); // 0xb64ac
	int32_t v6;
	int32_t v7 = *(int32_t *)(v6 - 0x77e4); // 0xb64b4
	int32_t v8 = *(int32_t *)(v6 - 0x75ec); // 0xb64b8
	g34 = *(int32_t *)(4 * (int32_t) * (char *)v7 + v8) * v5;
	SetRndSeed();
	int32_t v9 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0xb64e0
	int32_t v10;                                         // 0xb6544
	int32_t v11;                                         // 0xb6534
	int32_t v12;                                         // 0xb6570
	int32_t result;                                      // 0xb6594
	if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
		uint32_t v13 = (int32_t) * (char *)(g36 + 0x55ec * v9 + 436); // 0xb652c
		// branch -> 0xb6534
		// 0xb6534
		v11 = (v13 / 2 | v13 & -0x80000000) + 2;
		v10 = v11;
		if (v11 <= 5) {
			// 0xb6540
			v10 = 6;
			// branch -> 0xb6544
		}
		// 0xb6544
		if (v10 >= 17) {
			// 0xb654c
			// branch -> 0xb6550
		}
		// 0xb6550
		function_64158();
		function_630c8(g33);
		function_638c4((int16_t)g33);
		function_63f4c((int16_t)g33);
		v12 = g36 + 436;
		g36 = v12;
		function_63bd8((int32_t) * (char *)(v12 + 0x55ec * *(int32_t *)g35));
		result = function_63488((int32_t) * (char *)(g36 + 0x55ec * *(int32_t *)g35));
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return result;
	}
	int32_t v14 = 0;                 // 0xb65345
	int32_t v15 = 17;                // 0xb6514
	int32_t v16 = 0;                 // 0xb6510
	int32_t v17 = g36 + 0x55ec * v9; // 0xb650c
	// branch -> 0xb64fc
	int32_t v18; // 0xb65346
	while (true) {
		// 0xb64fc
		v18 = v14;
		if (*(char *)(v17 + 496) != 0) {
			// 0xb6508
			v18 = v16;
			// branch -> 0xb650c
		}
		int32_t v19 = v15 - 1; // 0xb6514
		if (v19 == 0) {
			// break -> 0xb6534
			break;
		}
		v14 = v18;
		v15 = v19;
		v16++;
		v17++;
		// continue -> 0xb64fc
	}
	// 0xb6534
	v11 = v18 + 2;
	v10 = v11;
	if (v11 <= 5) {
		// 0xb6540
		v10 = 6;
		// branch -> 0xb6544
	}
	// 0xb6544
	if (v10 >= 17) {
		// 0xb654c
		// branch -> 0xb6550
	}
	// 0xb6550
	function_64158();
	function_630c8(g33);
	function_638c4((int16_t)g33);
	function_63f4c((int16_t)g33);
	v12 = g36 + 436;
	g36 = v12;
	function_63bd8((int32_t) * (char *)(v12 + 0x55ec * *(int32_t *)g35));
	result = function_63488((int32_t) * (char *)(g36 + 0x55ec * *(int32_t *)g35));
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	return result;
}

// Address range: 0xb65b4 - 0xb65e8
int32_t FreeStoreMem(int32_t a1)
{
	// 0xb65b4
	MemFreeDbg((int32_t *)*(int32_t *)(g23 - 0x719c));
	MemFreeDbg((int32_t *)*(int32_t *)(g23 - 0x7774));
	int32_t result = MemFreeDbg((int32_t *)*(int32_t *)(g23 - 0x7288)); // 0xb65d4
	return result;
}

// Address range: 0xb65e8 - 0xb668c
int32_t function_b65e8(int32_t a1)
{
	// 0xb65e8
	CelDecodeOnly(408, 487, *(int32_t *)*(int32_t *)(g23 - 0x719c), 1, 271);
	int32_t v1 = 148;                                                              // r5
	int32_t v2 = 0;                                                                // r0
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x7804) + (int32_t) "; " - 0x5265; // 0xb6624
	                                                                               // branch -> 0xb6628
lab_0xb6628:
	while (true) {
		int32_t v4 = v3;  // 0xb6630
		int32_t v5 = 132; // 0xb662c
		// branch -> 0xb662c
		while (true) {
			int32_t v6 = v5 - 1; // 0xb662c
			int32_t result = v6; // r3
			*(char *)v4 = (char)v2;
			int32_t v7 = v3 + 2; // 0xb6634
			v3 = v7;
			if (v6 == 0) {
				// 0xb663c
				*(char *)v7 = (char)v2;
				int32_t v8 = v3 - 1032; // 0xb6644
				v3 = v8;
				int32_t v9 = 132; // 0xb6648
				// branch -> 0xb6648
				int32_t v10; // 0xb665c
				while (true) {
					int32_t v11 = v9 - 1; // 0xb6648
					result = v11;
					*(char *)(v8 + 1) = (char)v2;
					int32_t v12 = v3;      // 0xb6650
					int32_t v13 = v12 + 2; // 0xb6650
					v3 = v13;
					if (v11 == 0) {
						int32_t v14 = v1 - 1; // 0xb6658
						v1 = v14;
						v10 = v12 - 1030;
						v3 = v10;
						if (v14 == 0) {
							// break (via goto) -> 0xb6664
							goto lab_0xb6664;
						}
						v3 = v10;
						// continue (via goto) -> 0xb6628
						goto lab_0xb6628;
					} else {
						// 0xb6648
						v8 = v13;
						v9 = result;
						// branch -> 0xb6648
						continue;
					}
				}
			lab_0xb6664:;
				int32_t v15 = 131; // 0xb666c
				result = v15;
				*(char *)v10 = 0;
				int32_t v16 = v3 + 2; // 0xb6674
				// 0xb667c
				// branch -> 0xb666c
				while (v15 != 0) {
					// 0xb666c
					// 0xb666c
					v15 = result - 1;
					result = v15;
					*(char *)v16 = (char)0;
					v16 += 2;
					// 0xb667c
					// branch -> 0xb666c
				}
				return result;
			} else {
				// 0xb662c
				v4 = v7;
				v5 = result;
				// branch -> 0xb662c
				continue;
			}
		}
	}
}

// Address range: 0xb668c - 0xb6a0c
int32_t PrintSString(int32_t a1, int32_t a2, int32_t a3, char *a4, int32_t a5, int32_t a6)
{
	g19 = a2;
	int32_t v1 = g10;                        // 0xb6694
	int32_t v2 = *(int32_t *)(g23 - 0x6ef4); // 0xb6698
	int32_t v3 = (int32_t)a4;                // 0xb66a4
	g29 = v3;
	g27 = a5;
	g16 = *(int32_t *)(g23 - 0x6f00);
	g36 = g23 - 0x2da0;
	g24 = a1;
	g35 = g23 - 0x2e20;
	g20 = a3;
	g33 = g23 - 0x2ae8;
	g17 = a6;
	int32_t v4 = *(int32_t *)(*(int32_t *)(g23 - 0x721c) + 4 * a2);            // 0xb66e0
	int32_t v5 = *(int32_t *)(*(int32_t *)(g23 - 0x6efc) + 156 * a2 + 4) + v4; // 0xb66ec
	g18 = v5;
	int32_t v6 = *(char *)v2 == 0 ? 416 : 96;
	g22 = v6;
	g34 = v3;
	int32_t v7 = *(int32_t *)(g23 - 0x7698) + 4 * v5 + 816; // 0xb6710
	g21 = v7;
	g32 = v6 + a1 + *(int32_t *)v7;
	int32_t v8 = CPrintString(); // 0xb671c
	g26 = v8;
	g25 = *(char *)v2 == 0 ? 257 : 577;
	g28 = 0;
	int32_t v9 = v8;  // 0xb6a0849
	int32_t v10 = v8; // 0xb692c730
	if (g20 != 0) {
		int32_t v11 = v8; // 0xb6a0848
		int32_t v12 = v8; // 0xb692c729
		int32_t v13 = 0;  // 0xb6880
		if (v8 >= 1) {
			int32_t v14 = 0;  // 0xb686c22
			int32_t v15 = v8; // 0xb6844
			int32_t v16 = 0;  // 0xb6850
			if (v8 >= 9) {
				// 0xb6764
				if (v8 >= 9) {
					int32_t v17 = g36;                                                  // 0xb67c8
					int32_t v18 = g35;                                                  // 0xb67cc
					int32_t v19 = g33;                                                  // 0xb67d4
					int32_t v20 = 0;                                                    // 0xb6778
					int32_t v21 = g29 + v20;                                            // 0xb6778
					int32_t v22 = (int32_t) * (char *)(v21 + 1);                        // 0xb6784
					unsigned char v23 = *(char *)((int32_t) * (char *)v21 + v19);       // 0xb6788
					int32_t v24 = (int32_t) * (char *)(v22 + v19);                      // 0xb678c
					unsigned char v25 = *(char *)((int32_t)v23 + v18);                  // 0xb6790
					int32_t v26 = (int32_t) * (char *)(v21 + 2);                        // 0xb6794
					int32_t v27 = (int32_t) * (char *)(v24 + v18);                      // 0xb679c
					int32_t v28 = (int32_t) * (char *)((int32_t)v25 + v17);             // 0xb67a0
					int32_t v29 = (int32_t) * (char *)(v26 + v19);                      // 0xb67a4
					int32_t v30 = (int32_t) * (char *)(v29 + v18);                      // 0xb67b4
					unsigned char v31 = *(char *)((int32_t) * (char *)(v21 + 3) + v19); // 0xb67bc
					int32_t v32 = (int32_t) * (char *)(v21 + 4);                        // 0xb67c0
					int32_t v33 = (int32_t) * (char *)(v30 + v17);                      // 0xb67c8
					unsigned char v34 = *(char *)((int32_t)v31 + v18);                  // 0xb67cc
					int32_t v35 = v33 + (int32_t) * (char *)(v27 + v17) + v28 + 1 + 1;  // 0xb67d0
					int32_t v36 = (int32_t) * (char *)(v32 + v19);                      // 0xb67d4
					int32_t v37 = (int32_t) * (char *)(v21 + 5);                        // 0xb67d8
					int32_t v38 = g36;                                                  // 0xb67e0
					int32_t v39 = g35;                                                  // 0xb67e4
					int32_t v40 = (int32_t) * (char *)(v39 + v36);                      // 0xb67e4
					int32_t v41 = (int32_t) * (char *)(v38 + (int32_t)v34) + v35 + 1;   // 0xb67e8
					int32_t v42 = g33;                                                  // 0xb67f0
					int32_t v43 = (int32_t) * (char *)(v42 + v37);                      // 0xb67f0
					unsigned char v44 = *(char *)(v42 + (int32_t) * (char *)(v21 + 6)); // 0xb67fc
					int32_t v45 = (int32_t) * (char *)(v21 + 7);                        // 0xb6800
					int32_t v46 = (int32_t) * (char *)(v43 + v39);                      // 0xb6808
					unsigned char v47 = *(char *)((int32_t)v44 + v39);                  // 0xb6810
					int32_t v48 = (int32_t) * (char *)(v46 + v38);                      // 0xb6814
					int32_t v49 = (int32_t) * (char *)(v45 + v42);                      // 0xb6818
					int32_t v50 = v48 + (int32_t) * (char *)(v40 + v38) + v41 + 1 + 1;  // 0xb681c
					int32_t v51 = (int32_t) * (char *)(v49 + v39);                      // 0xb6828
					int32_t v52 = (int32_t) * (char *)((int32_t)v47 + v38) + v50 + 1;   // 0xb682c
					int32_t v53 = v52 + 2 + (int32_t) * (char *)(v51 + v38);            // 0xb683c
					int32_t v54 = (v8 - 1) / 8 - 1;                                     // 0xb6840
					int32_t v55 = v20 + 8;
					// branch -> 0xb6778
					while (v54 != 0) {
						// 0xb6778
						v17 = v38;
						v18 = v39;
						v19 = v42;
						v20 = v55;
						v21 = g29 + v20;
						v22 = (int32_t) * (char *)(v21 + 1);
						v23 = *(char *)((int32_t) * (char *)v21 + v19);
						v24 = (int32_t) * (char *)(v22 + v19);
						v25 = *(char *)((int32_t)v23 + v18);
						v26 = (int32_t) * (char *)(v21 + 2);
						v27 = (int32_t) * (char *)(v24 + v18);
						v28 = (int32_t) * (char *)((int32_t)v25 + v17) + v53;
						v29 = (int32_t) * (char *)(v26 + v19);
						v30 = (int32_t) * (char *)(v29 + v18);
						v31 = *(char *)((int32_t) * (char *)(v21 + 3) + v19);
						v32 = (int32_t) * (char *)(v21 + 4);
						v33 = (int32_t) * (char *)(v30 + v17);
						v34 = *(char *)((int32_t)v31 + v18);
						v35 = v33 + (int32_t) * (char *)(v27 + v17) + v28 + 1 + 1;
						v36 = (int32_t) * (char *)(v32 + v19);
						v37 = (int32_t) * (char *)(v21 + 5);
						v38 = g36;
						v39 = g35;
						v40 = (int32_t) * (char *)(v39 + v36);
						v41 = (int32_t) * (char *)(v38 + (int32_t)v34) + v35 + 1;
						v42 = g33;
						v43 = (int32_t) * (char *)(v42 + v37);
						v44 = *(char *)(v42 + (int32_t) * (char *)(v21 + 6));
						v45 = (int32_t) * (char *)(v21 + 7);
						v46 = (int32_t) * (char *)(v43 + v39);
						v47 = *(char *)((int32_t)v44 + v39);
						v48 = (int32_t) * (char *)(v46 + v38);
						v49 = (int32_t) * (char *)(v45 + v42);
						v50 = v48 + (int32_t) * (char *)(v40 + v38) + v41 + 1 + 1;
						v51 = (int32_t) * (char *)(v49 + v39);
						v52 = (int32_t) * (char *)((int32_t)v47 + v38) + v50 + 1;
						v53 = v52 + 2 + (int32_t) * (char *)(v51 + v38);
						v54--;
						v55 = v20 + 8;
						// continue -> 0xb6778
					}
					// 0xb6844
					v14 = v53;
					v15 = g26;
					v16 = v55;
					// branch -> 0xb6844
				} else {
					v14 = 0;
					v15 = v8;
					v16 = 0;
				}
			}
			int32_t v56 = g29;       // 0xb6850
			int32_t v57 = v56 + v16; // 0xb6850
			if (v15 > v16) {
				int32_t v58 = v15 - v16;                                          // 0xb6874
				int32_t v59 = v57;                                                // 0xb6858
				unsigned char v60 = *(char *)((int32_t) * (char *)v59 + g33);     // 0xb6860
				unsigned char v61 = *(char *)((int32_t)v60 + g35);                // 0xb6864
				int32_t v62 = v14 + 1 + (int32_t) * (char *)((int32_t)v61 + g36); // 0xb6870
				// branch -> 0xb6858
				while (v58 != 1) {
					// 0xb6858
					v58--;
					v59++;
					v60 = *(char *)((int32_t) * (char *)v59 + g33);
					v61 = *(char *)((int32_t)v60 + g35);
					v62 = v62 + 1 + (int32_t) * (char *)((int32_t)v61 + g36);
					// continue -> 0xb6858
				}
				// 0xb6878
				v11 = v15 + v56;
				v12 = v15;
				v13 = v62;
				// branch -> 0xb6878
			} else {
				v11 = v57;
				v12 = v15;
				v13 = v14;
			}
		}
		int32_t v63 = g25; // 0xb6878
		int32_t v64;       // 0xb6884
		if (v63 > v13) {
			uint32_t v65 = v63 - v13; // 0xb6880
			v64 = v65 / 2 | v65 & -0x80000000;
			g28 = v64;
			// branch -> 0xb6888
		} else {
			// 0xb6878
			v64 = g28;
			// branch -> 0xb6888
		}
		// 0xb6888
		g32 += v64;
		v9 = v11;
		v10 = v12;
		// branch -> 0xb688c
	}
	if (*(int32_t *)g16 == g19) {
		// 0xb6898
		if (g20 == 0) {
			// 0xb68b0
			// branch -> 0xb68b8
		}
		int32_t v66 = *(int32_t *)*(int32_t *)(g23 - 0x7774); // 0xb68c0
		int32_t v67 = *(int32_t *)*(int32_t *)(g23 - 0x6ef0); // 0xb68c8
		v9 = CelDecodeOnly(g18 + 205, v66, v67, 12, 12);
		v10 = g26;
		// branch -> 0xb68d4
	}
	int32_t v68 = g29; // 0xb68d4
	g30 = v68;
	g31 = 0;
	int32_t v69;       // bp-116
	int32_t v70;       // bp-117
	int32_t v71;       // 0xb693c
	int32_t v72;       // 0xb6964
	int32_t v73;       // 0xb6978
	int32_t v74;       // 0xb69a4
	int32_t v75;       // 0xb69a8
	int32_t v76;       // 0xb69dc
	int32_t result;    // 0xb6a08
	int32_t v77;       // 0xb6a0843
	int32_t v78;       // 0xb6a0851
	int32_t v79;       // 0xb696c
	int32_t v80;       // 0xb6970
	int32_t v81;       // 0xb6990
	int32_t v82;       // 0xb69e4
	int32_t v83;       // 0xb69ec
	unsigned char v84; // 0xb697c
	unsigned char v85; // 0xb6980
	int32_t v86;       // 0xb6980
	int32_t v87;       // 0xb6984
	if (v10 <= 0) {
		// 0xb6934
		if (g20 != 0) {
			// 0xb69b4
			result = v9;
			if (*(int32_t *)g16 == g19) {
				// 0xb69c0
				if (g20 == 0) {
					// 0xb69d8
					// branch -> 0xb69dc
				}
				// 0xb69dc
				v76 = g23;
				v82 = *(int32_t *)*(int32_t *)(v76 - 0x7774);
				v83 = *(int32_t *)*(int32_t *)(v76 - 0x6ef0);
				result = CelDecodeOnly(g18 + 205, v82, v83, 12, 12);
				// branch -> 0xb69f8
			}
			// 0xb69f8
			g10 = v1;
			return result;
		}
		// 0xb693c
		v71 = g17;
		if (v71 >= 0) {
			// 0xb6944
			g37 = *(int32_t *)(g23 - 0x56bc);
			g38 = v71;
			sprintf();
			g34 = &v69;
			g30 = *(int32_t *)g21 + 656 - g24;
			v72 = CPrintString();
			v79 = v72 - 1;
			g31 = v79;
			v80 = v72 + (int32_t)&v70;
			g32 = v80;
			if (v79 > -1) {
				v73 = v80;
				while (true) {
					// 0xb6978
					v84 = *(char *)(g33 + (int32_t) * (char *)v73);
					v85 = *(char *)(g35 + (int32_t)v84);
					v86 = v85;
					v87 = (int32_t) * (char *)(g36 + v86);
					v81 = g30 - (v87 + 1);
					g30 = v81;
					if (v85 == 0) {
						v78 = v87;
						v75 = v79;
						v74 = v73;
						goto lab_0xb69a4;
					}
					goto lab_0xb6998;
				}
			} else {
				v77 = v72;
			}
		} else {
			v77 = v9;
		}
		// 0xb69b4
		result = v77;
		if (*(int32_t *)g16 == g19) {
			// 0xb69c0
			if (g20 == 0) {
				// 0xb69d8
				// branch -> 0xb69dc
			}
			// 0xb69dc
			v76 = g23;
			v82 = *(int32_t *)*(int32_t *)(v76 - 0x7774);
			v83 = *(int32_t *)*(int32_t *)(v76 - 0x6ef0);
			result = CelDecodeOnly(g18 + 205, v82, v83, 12, 12);
			// branch -> 0xb69f8
		}
		// 0xb69f8
		g10 = v1;
		return result;
	}
	int32_t v88 = 0; // 0xb691c33
	while (true) {
		unsigned char v89 = *(char *)(g33 + (int32_t) * (char *)v68); // 0xb68e4
		unsigned char v90 = *(char *)(g35 + (int32_t)v89);            // 0xb68e8
		int32_t v91 = v90;                                            // 0xb68e8
		int32_t v92 = g36 + v91;                                      // 0xb68ec
		g29 = v92;
		int32_t v93 = (int32_t) * (char *)v92 + 1 + g28; // 0xb68fc
		g28 = v93;
		int32_t v94 = v9;  // 0xb6a0845
		int32_t v95 = v10; // 0xb692c
		int32_t v96 = v68; // 0xb6920
		int32_t v97 = v88; // 0xb691c
		int32_t v98 = v92; // 0xb6918
		if (v90 != 0) {
			// 0xb6904
			if (v93 <= g25) {
				// 0xb690c
				v94 = function_2d918(g32, v91, g27);
				v95 = g26;
				v96 = g30;
				v97 = g31;
				v98 = g29;
				// branch -> 0xb6918
			} else {
				v94 = v9;
				v95 = v10;
				v96 = v68;
				v97 = v88;
				v98 = v92;
			}
		}
		int32_t v99 = v97 + 1; // 0xb691c
		g31 = v99;
		int32_t v100 = v96 + 1; // 0xb6920
		g30 = v100;
		g32 += (int32_t) * (char *)v98 + 1;
		if (v99 >= v95) {
			v9 = v94;
			// break -> 0xb6934
			break;
		}
		v9 = v94;
		v10 = v95;
		v88 = v99;
		v68 = v100;
		// continue -> 0xb68e0
	}
	// 0xb6934
	v77 = v9;
	if (g20 == 0) {
		// 0xb693c
		v71 = g17;
		if (v71 >= 0) {
			// 0xb6944
			g37 = *(int32_t *)(g23 - 0x56bc);
			g38 = v71;
			sprintf();
			g34 = &v69;
			g30 = *(int32_t *)g21 + 656 - g24;
			v72 = CPrintString();
			v79 = v72 - 1;
			g31 = v79;
			v80 = v72 + (int32_t)&v70;
			g32 = v80;
			if (v79 > -1) {
				int32_t v101 = v79; // 0xb69a840
				v73 = v80;
				while (true) {
					// 0xb6978
					v84 = *(char *)(g33 + (int32_t) * (char *)v73);
					v85 = *(char *)(g35 + (int32_t)v84);
					v86 = v85;
					v87 = (int32_t) * (char *)(g36 + v86);
					v81 = g30 - (v87 + 1);
					g30 = v81;
					v78 = v87;
					v75 = v101;
					v74 = v73;
					if (v85 != 0) {
					lab_0xb6998:
						// 0xb6998
						v78 = function_2d918(v81, v86, g27);
						v75 = g31;
						v74 = g32;
						// branch -> 0xb69a4
					}
				lab_0xb69a4:;
					int32_t v102 = v74 - 1; // 0xb69a4
					g32 = v102;
					int32_t v103 = v75 - 1; // 0xb69a8
					g31 = v103;
					if (v103 <= 0xffffffff) {
						// break -> 0xb69b4
						break;
					}
					v101 = v103;
					v73 = v102;
					// continue -> 0xb6978
				}
				// 0xb69b4
				result = v78;
				if (*(int32_t *)g16 == g19) {
					// 0xb69c0
					if (g20 == 0) {
						// 0xb69d8
						// branch -> 0xb69dc
					}
					// 0xb69dc
					v76 = g23;
					v82 = *(int32_t *)*(int32_t *)(v76 - 0x7774);
					v83 = *(int32_t *)*(int32_t *)(v76 - 0x6ef0);
					result = CelDecodeOnly(g18 + 205, v82, v83, 12, 12);
					// branch -> 0xb69f8
				}
				// 0xb69f8
				g10 = v1;
				return result;
			}
			v77 = v72;
		} else {
			v77 = v9;
		}
	}
	// 0xb69b4
	result = v77;
	if (*(int32_t *)g16 == g19) {
		// 0xb69c0
		if (g20 == 0) {
			// 0xb69d8
			// branch -> 0xb69dc
		}
		// 0xb69dc
		v76 = g23;
		v82 = *(int32_t *)*(int32_t *)(v76 - 0x7774);
		v83 = *(int32_t *)*(int32_t *)(v76 - 0x6ef0);
		result = CelDecodeOnly(g18 + 205, v82, v83, 12, 12);
		// branch -> 0xb69f8
	}
	// 0xb69f8
	g10 = v1;
	return result;
}

// Address range: 0xb6a0c - 0xb6abc
int32_t DrawSLine(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x721c);                             // 0xb6a14
	int32_t v2 = *(int32_t *)(g23 - 0x7698);                             // 0xb6a1c
	int32_t v3 = *(int32_t *)(4 * *(int32_t *)(v1 + 4 * a1) + v2 + 792); // 0xb6a34
	int32_t v4;
	int32_t result;
	int32_t v5;
	int32_t v6; // 0xb6a84
	if (*(char *)*(int32_t *)(g23 - 0x6ef4) == 1) {
		// 0xb6a2c
		v5 = v3 + 90;
		v6 = 0x22b5a;
		result = 586;
		v4 = 182;
		// branch -> 0xb6a70
	} else {
		// 0xb6a50
		v5 = v3 + 410;
		v6 = 0x22c9a;
		result = 266;
		v4 = 502;
		// branch -> 0xb6a70
	}
	int32_t v7 = *(int32_t *)*(int32_t *)(g23 - 0x7804); // 0xb6a7c
	int32_t v8 = 3;                                      // r8
	int32_t v9 = v7 + v5;                                // 0xb6a88
	int32_t v10 = v7 + v6;                               // 0xb6a906
	                                                     // branch -> 0xb6a8c
lab_0xb6a8c:
	while (true) {
		int32_t v11 = v9;     // 0xb6a9c
		int32_t v12 = result; // 0xb6a94
		int32_t v13 = v10;    // 0xb6a98
		// branch -> 0xb6a90
		while (true) {
			int32_t v14 = v12 - 1; // 0xb6a94
			int32_t v15 = v14;     // r6
			int32_t v16 = v13 + 1; // r5
			*(char *)v11 = *(char *)v13;
			int32_t v17 = v9 + 1; // 0xb6aa0
			v9 = v17;
			if (v14 == 0) {
				int32_t v18 = v8 - 1; // 0xb6aa8
				v8 = v18;
				if (v18 == 0) {
					// break (via goto) -> 0xb6ab8
					goto lab_0xb6ab8;
				}
				v9 = v4 + v17;
				v10 = v4 + v16;
				// continue (via goto) -> 0xb6a8c
				goto lab_0xb6a8c;
			} else {
				// 0xb6a90
				v11 = v17;
				v12 = v15;
				v13 = v16;
				// branch -> 0xb6a90
				continue;
			}
		}
	lab_0xb6ab8:
		// 0xb6ab8
		return result;
	}
}

// Address range: 0xb6abc - 0xb6c74
int32_t function_b6abc(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x721c);      // 0xb6ac8
	int32_t v2 = *(int32_t *)(v1 + 4 * a1) + 204; // 0xb6afc
	g29 = *(int32_t *)(4 * a2 + v1) + 204;
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x7288); // 0xb6b24
	if (*(char *)*(int32_t *)(g23 - 0x6f04) == -1) {
		// 0xb6b24
		CelDecodeOnly(665, v2, v3, 10, 12);
		// branch -> 0xb6b3c
	} else {
		// 0xb6b08
		CelDecodeOnly(665, v2, v3, 12, 12);
		// branch -> 0xb6b3c
	}
	int32_t v4 = *(int32_t *)g36; // 0xb6b6c
	int32_t v5 = g29;             // 0xb6b70
	if (*(char *)*(int32_t *)(g23 - 0x6f08) == -1) {
		// 0xb6b6c
		CelDecodeOnly(665, v5, v4, 9, 12);
		// branch -> 0xb6ba8
	} else {
		// 0xb6b50
		CelDecodeOnly(665, v5, v4, 11, 12);
		// branch -> 0xb6ba8
	}
	int32_t v6 = g30 + 12;
	int32_t v7;
	int32_t v8;   // 0xb6bb0
	int32_t v9;   // 0xb6bfc
	int32_t v10;  // 0xb6c2c
	int32_t v11;  // 0xb6bb4
	uint32_t v12; // 0xb6bd4
	int32_t v13;  // 0xb6c08
	int32_t v14;  // 0xb6c0c
	int32_t v15;  // 0xb6c20
	int32_t v16;  // 0xb6c40
	uint64_t v17; // 0xb6c24
	int32_t v18;  // 0xb6c28
	int32_t v19;  // 0xb6c04
	if (v6 >= g29) {
		// 0xb6bb0
		v8 = g23;
		v11 = *(int32_t *)*(int32_t *)(v8 - 0x6f00);
		v9 = v11;
		if (v11 == 22) {
			// 0xb6bc8
			v9 = *(int32_t *)*(int32_t *)(v8 - 0x6f0c);
			// branch -> 0xb6bd0
		}
		// 0xb6bd0
		v12 = *(int32_t *)*(int32_t *)(v8 - 0x6f10);
		if (v12 >= 2) {
			// 0xb6be0
			v19 = (v9 - *(int32_t *)*(int32_t *)(v8 - 0x6f18)) / 4;
			v13 = v19 + *(int32_t *)*(int32_t *)(v8 - 0x6f14);
			v14 = *(int32_t *)g32;
			v15 = (-24 - *(int32_t *)g33 + v14) * 1000 * v13 / (v12 - 1);
			v17 = 0x10624dd3 * (int64_t)v15;
			v18 = (int32_t)(v17 / 0x100000000) >> 31;
			v10 = v18 < 0;
			v7 = (v18 & -0x4000000 | (int32_t)(v17 / 0x4000000000)) + v10;
			// branch -> 0xb6c3c
		} else {
			v7 = 0;
		}
		// 0xb6c3c
		v16 = *(int32_t *)g36;
		return CelDecodeOnly(665, v7 + 204 + *(int32_t *)(g31 + g35 + 4), v16, 13, 12);
	}
	CelDecodeOnly(665, v6, *(int32_t *)g36, 14, 12);
	while (g30 + 12 < g29) {
		// 0xb6b8c
		CelDecodeOnly(665, g30 + 12, *(int32_t *)g36, 14, 12);
		// continue -> 0xb6b8c
	}
	// 0xb6bb0
	v8 = g23;
	v11 = *(int32_t *)*(int32_t *)(v8 - 0x6f00);
	v9 = v11;
	if (v11 == 22) {
		// 0xb6bc8
		v9 = *(int32_t *)*(int32_t *)(v8 - 0x6f0c);
		// branch -> 0xb6bd0
	}
	// 0xb6bd0
	v12 = *(int32_t *)*(int32_t *)(v8 - 0x6f10);
	if (v12 >= 2) {
		// 0xb6be0
		v19 = (v9 - *(int32_t *)*(int32_t *)(v8 - 0x6f18)) / 4;
		v13 = v19 + *(int32_t *)*(int32_t *)(v8 - 0x6f14);
		v14 = *(int32_t *)g32;
		v15 = (-24 - *(int32_t *)g33 + v14) * 1000 * v13 / (v12 - 1);
		v17 = 0x10624dd3 * (int64_t)v15;
		v18 = (int32_t)(v17 / 0x100000000) >> 31;
		v10 = v18 < 0;
		v7 = (v18 & -0x4000000 | (int32_t)(v17 / 0x4000000000)) + v10;
		// branch -> 0xb6c3c
	} else {
		v7 = 0;
	}
	// 0xb6c3c
	v16 = *(int32_t *)g36;
	return CelDecodeOnly(665, v7 + 204 + *(int32_t *)(g31 + g35 + 4), v16, 13, 12);
}

// Address range: 0xb6c74 - 0xb6c90
int32_t DrawSTextHelp(void)
{
	int32_t result = *(int32_t *)(g23 - 0x6f00); // r3
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 1;
	*(int32_t *)result = -1;
	return result;
}

// Address range: 0xb6c90 - 0xb6dfc
int32_t function_b6c90(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6efc) + 156 * a1; // r6
	int32_t result = a2 - a1;                           // 0xb6ca0
	int32_t result2 = result;                           // r3
	int32_t v2 = 0;                                     // r5
	int32_t v3 = -1;                                    // r4
	if (a2 <= a1) {
		// bb
		return result;
	}
	int32_t v4 = __asm_rlwinm_(result, 29, 3, 31); // 0xb6cb0
	int32_t v5;                                    // 0xb6dcc
	int32_t v6;
	if (v4 == 0) {
		// 0xb6cb0
		v6 = v1;
		v5 = result2;
		// branch -> 0xb6dcc
	} else {
		// 0xb6cbc
		*(int32_t *)v1 = v2;
		*(int32_t *)(v1 + 4) = v2;
		*(char *)(v1 + 8) = (char)v2;
		*(int32_t *)(v1 + 136) = v2;
		*(char *)(v1 + 140) = (char)v2;
		*(int32_t *)(v1 + 144) = v2;
		*(int32_t *)(v1 + 148) = v2;
		*(int32_t *)(v1 + 152) = v3;
		*(int32_t *)(v1 + 156) = v2;
		*(int32_t *)(v1 + 160) = v2;
		*(char *)(v1 + 164) = (char)v2;
		*(int32_t *)(v1 + 292) = v2;
		*(char *)(v1 + 296) = (char)v2;
		*(int32_t *)(v1 + 300) = v2;
		*(int32_t *)(v1 + 304) = v2;
		*(int32_t *)(v1 + 308) = v3;
		*(int32_t *)(v1 + 312) = v2;
		*(int32_t *)(v1 + 316) = v2;
		*(char *)(v1 + 320) = (char)v2;
		*(int32_t *)(v1 + 448) = v2;
		*(char *)(v1 + 452) = (char)v2;
		*(int32_t *)(v1 + 456) = v2;
		*(int32_t *)(v1 + 460) = v2;
		*(int32_t *)(v1 + 464) = v3;
		*(int32_t *)(v1 + 468) = v2;
		*(int32_t *)(v1 + 472) = v2;
		*(char *)(v1 + 476) = (char)v2;
		*(int32_t *)(v1 + 604) = v2;
		*(char *)(v1 + 608) = (char)v2;
		*(int32_t *)(v1 + 612) = v2;
		*(int32_t *)(v1 + 616) = v2;
		*(int32_t *)(v1 + 620) = v3;
		*(int32_t *)(v1 + 624) = v2;
		*(int32_t *)(v1 + 628) = v2;
		*(char *)(v1 + 632) = (char)v2;
		*(int32_t *)(v1 + 760) = v2;
		*(char *)(v1 + 764) = (char)v2;
		*(int32_t *)(v1 + 768) = v2;
		*(int32_t *)(v1 + 772) = v2;
		*(int32_t *)(v1 + 776) = v3;
		*(int32_t *)(v1 + 780) = v2;
		*(int32_t *)(v1 + 784) = v2;
		*(char *)(v1 + 788) = (char)v2;
		*(int32_t *)(v1 + 916) = v2;
		*(char *)(v1 + 920) = (char)v2;
		*(int32_t *)(v1 + 924) = v2;
		*(int32_t *)(v1 + 928) = v2;
		*(int32_t *)(v1 + 932) = v3;
		*(int32_t *)(v1 + 936) = v2;
		*(int32_t *)(v1 + 940) = v2;
		*(char *)(v1 + 944) = (char)v2;
		*(int32_t *)(v1 + 1072) = v2;
		*(char *)(v1 + 1076) = (char)v2;
		*(int32_t *)(v1 + 1080) = v2;
		*(int32_t *)(v1 + 1084) = v2;
		*(int32_t *)(v1 + 1088) = v3;
		*(int32_t *)(v1 + 1092) = v2;
		*(int32_t *)(v1 + 1096) = v2;
		*(char *)(v1 + 1100) = (char)v2;
		*(int32_t *)(v1 + 1228) = v2;
		*(char *)(v1 + 1232) = (char)v2;
		*(int32_t *)(v1 + 1236) = v2;
		*(int32_t *)(v1 + 1240) = v2;
		*(int32_t *)(v1 + 1244) = v3;
		int32_t v7 = v1 + 1248; // 0xb6dbc
		v1 = v7;
		int32_t v8 = v4 - 1; // 0xb6dc0
		// branch -> 0xb6cbc
		while (v8 != 0) {
			// 0xb6cbc
			*(int32_t *)v7 = v2;
			*(int32_t *)(v1 + 4) = v2;
			*(char *)(v1 + 8) = (char)v2;
			*(int32_t *)(v1 + 136) = v2;
			*(char *)(v1 + 140) = (char)v2;
			*(int32_t *)(v1 + 144) = v2;
			*(int32_t *)(v1 + 148) = v2;
			*(int32_t *)(v1 + 152) = v3;
			*(int32_t *)(v1 + 156) = v2;
			*(int32_t *)(v1 + 160) = v2;
			*(char *)(v1 + 164) = (char)v2;
			*(int32_t *)(v1 + 292) = v2;
			*(char *)(v1 + 296) = (char)v2;
			*(int32_t *)(v1 + 300) = v2;
			*(int32_t *)(v1 + 304) = v2;
			*(int32_t *)(v1 + 308) = v3;
			*(int32_t *)(v1 + 312) = v2;
			*(int32_t *)(v1 + 316) = v2;
			*(char *)(v1 + 320) = (char)v2;
			*(int32_t *)(v1 + 448) = v2;
			*(char *)(v1 + 452) = (char)v2;
			*(int32_t *)(v1 + 456) = v2;
			*(int32_t *)(v1 + 460) = v2;
			*(int32_t *)(v1 + 464) = v3;
			*(int32_t *)(v1 + 468) = v2;
			*(int32_t *)(v1 + 472) = v2;
			*(char *)(v1 + 476) = (char)v2;
			*(int32_t *)(v1 + 604) = v2;
			*(char *)(v1 + 608) = (char)v2;
			*(int32_t *)(v1 + 612) = v2;
			*(int32_t *)(v1 + 616) = v2;
			*(int32_t *)(v1 + 620) = v3;
			*(int32_t *)(v1 + 624) = v2;
			*(int32_t *)(v1 + 628) = v2;
			*(char *)(v1 + 632) = (char)v2;
			*(int32_t *)(v1 + 760) = v2;
			*(char *)(v1 + 764) = (char)v2;
			*(int32_t *)(v1 + 768) = v2;
			*(int32_t *)(v1 + 772) = v2;
			*(int32_t *)(v1 + 776) = v3;
			*(int32_t *)(v1 + 780) = v2;
			*(int32_t *)(v1 + 784) = v2;
			*(char *)(v1 + 788) = (char)v2;
			*(int32_t *)(v1 + 916) = v2;
			*(char *)(v1 + 920) = (char)v2;
			*(int32_t *)(v1 + 924) = v2;
			*(int32_t *)(v1 + 928) = v2;
			*(int32_t *)(v1 + 932) = v3;
			*(int32_t *)(v1 + 936) = v2;
			*(int32_t *)(v1 + 940) = v2;
			*(char *)(v1 + 944) = (char)v2;
			*(int32_t *)(v1 + 1072) = v2;
			*(char *)(v1 + 1076) = (char)v2;
			*(int32_t *)(v1 + 1080) = v2;
			*(int32_t *)(v1 + 1084) = v2;
			*(int32_t *)(v1 + 1088) = v3;
			*(int32_t *)(v1 + 1092) = v2;
			*(int32_t *)(v1 + 1096) = v2;
			*(char *)(v1 + 1100) = (char)v2;
			*(int32_t *)(v1 + 1228) = v2;
			*(char *)(v1 + 1232) = (char)v2;
			*(int32_t *)(v1 + 1236) = v2;
			*(int32_t *)(v1 + 1240) = v2;
			*(int32_t *)(v1 + 1244) = v3;
			v7 = v1 + 1248;
			v1 = v7;
			v8--;
			// continue -> 0xb6cbc
		}
		int32_t v9 = result2 % 8; // 0xb6dc4
		result2 = v9;
		if (v9 == 0) {
			// bb
			return 0;
		}
		v6 = v7;
		v5 = v9;
	}
	// 0xb6dcc
	*(int32_t *)v6 = v2;
	*(int32_t *)(v1 + 4) = v2;
	*(char *)(v1 + 8) = (char)v2;
	*(int32_t *)(v1 + 136) = v2;
	*(char *)(v1 + 140) = (char)v2;
	*(int32_t *)(v1 + 144) = v2;
	*(int32_t *)(v1 + 148) = v2;
	*(int32_t *)(v1 + 152) = v3;
	int32_t v10 = v1 + 156; // 0xb6df0
	v1 = v10;
	int32_t v11 = v5 - 1; // 0xb6df4
	// branch -> 0xb6dd0
	while (v11 != 0) {
		// 0xb6dd0
		*(int32_t *)v10 = v2;
		*(int32_t *)(v1 + 4) = v2;
		*(char *)(v1 + 8) = (char)v2;
		*(int32_t *)(v1 + 136) = v2;
		*(char *)(v1 + 140) = (char)v2;
		*(int32_t *)(v1 + 144) = v2;
		*(int32_t *)(v1 + 148) = v2;
		*(int32_t *)(v1 + 152) = v3;
		v10 = v1 + 156;
		v1 = v10;
		v11--;
		// continue -> 0xb6dd0
	}
	// 0xb6df8
	return result2;
}

// Address range: 0xb6dfc - 0xb6e24
int32_t function_b6dfc(int32_t a1)
{
	int32_t v1 = 0;                                         // r4
	int32_t result = *(int32_t *)(g23 - 0x6efc) + 156 * a1; // 0xb6e08
	*(int32_t *)result = 0;
	*(int32_t *)(result + 4) = v1;
	*(char *)(result + 8) = (char)v1;
	*(int32_t *)(result + 144) = 1;
	return result;
}

// Address range: 0xb6e24 - 0xb6e38
int32_t function_b6e24(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x6efc) + 156 * a1; // 0xb6e2c
	*(int32_t *)(result + 152) = g37;
	return result;
}

// Address range: 0xb6e38 - 0xb6e4c
int32_t function_b6e38(int32_t a1, int32_t a2)
{
	int32_t result = *(int32_t *)(g23 - 0x6efc) + 156 * a1; // 0xb6e40
	*(int32_t *)(result + 4) = a2;
	return result;
}

// Address range: 0xb6e4c - 0xb6eb0
int32_t function_b6e4c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, char a5, int32_t a6)
{
	// 0xb6e4c
	g31 = a3;
	g32 = a5;
	g33 = a6;
	g36 = 0;
	int32_t v1 = *(int32_t *)(g23 - 0x6efc) + 156 * a2; // 0xb6e74
	g35 = v1;
	g37 = a4;
	*(int32_t *)v1 = a1;
	g34 = g35 + 8;
	*(int32_t *)(g35 + 4) = g36;
	int32_t result = strcpy(); // r3
	*(int32_t *)(g35 + 136) = g31;
	*(char *)(g35 + 140) = (char)g32;
	*(int32_t *)(g35 + 144) = g36;
	*(int32_t *)(g35 + 148) = g33;
	return result;
}

// Address range: 0xb6eb0 - 0xb7170
int32_t function_b6eb0(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0xb6eb4
	g35 = *(int32_t *)(g23 - 0x56c0);
	g31 = a1;
	g36 = *(int32_t *)(g23 - 0x76b4);
	g32 = a2;
	g33 = a3;
	char v2 = 0;     // bp-152
	int32_t v3 = a1; // 0xb6f74
	int32_t v4;
	int32_t v5;     // 0xb6fd4
	int32_t v6;     // 0xb7008
	int32_t v7;     // 0xb703c
	int32_t v8;     // 0xb7050
	int32_t v9;     // 0xb70a0
	int32_t v10;    // 0xb70c0
	int32_t v11;    // 0xb70dc
	int32_t v12;    // 0xb7128
	int32_t result; // 0xb716c
	int32_t v13;    // 0xb7074
	int32_t v14;    // 0xb7084
	int32_t v15;    // 0xb70fc
	int32_t v16;
	int32_t v17;       // 0xb7010
	unsigned char v18; // 0xb7064
	int32_t result2;   // 0xb7124
	if (*(int32_t *)(a1 + 56) != 0) {
		int32_t v19 = a1; // 0xb6f28
		if (*(char *)(a1 + 60) != 2) {
			unsigned char v20 = *(char *)(a1 + 332); // 0xb6ef4
			if (v20 != -1) {
				// 0xb6f04
				PrintItemPower((int32_t)v20, a1);
				function_e86d0((int32_t)&v2, g36);
				v19 = g31;
				// branch -> 0xb6f18
			} else {
				v19 = a1;
			}
		}
		unsigned char v21 = *(char *)(v19 + 333); // 0xb6f18
		if (v21 != -1) {
			// 0xb6f28
			PrintItemPower((int32_t)v21, v19);
			int32_t v22 = &v2;
			if (v2 != 0) {
				// 0xb6f3c
				function_e86d0(v22, g35);
				// branch -> 0xb6f48
			}
			// 0xb6f48
			function_e86d0(v22, g36);
			v3 = g31;
			// branch -> 0xb6f54
		} else {
			v3 = v19;
		}
		// 0xb6f54
		if (*(int32_t *)(v3 + 220) == 23) {
			// 0xb6f60
			if (*(int32_t *)(v3 + 232) != 0) {
				// 0xb6f6c
				g37 = *(int32_t *)(g23 - 0x56c4);
				g38 = *(int32_t *)(v3 + 228);
				sprintf();
				v4 = &v2;
				if (v2 != 0) {
					// 0xb6f88
					function_e86d0(v4, g35);
					// branch -> 0xb6f94
				}
				// 0xb6f94
				function_e86d0(v4, g36);
				// branch -> 0xb6fa0
			}
		}
		// 0xb6fa0
		if (v2 != 0) {
			// 0xb6fac
			function_b6e4c(40, g32, 0, (int32_t)&v2, (char)g33, 0);
			g32++;
			// branch -> 0xb6fcc
		}
		// 0xb6fcc
		v2 = 0;
		v5 = g31;
		v6 = v5;
		if (*(char *)(v5 + 190) == 1) {
			// 0xb6fe0
			g37 = *(int32_t *)(g23 - 0x56c8);
			g38 = *(int32_t *)(v5 + 204);
			sprintf();
			v6 = g31;
			// branch -> 0xb6ff4
		}
		// 0xb6ff4
		v7 = v6;
		if (*(char *)(v6 + 190) == 2) {
			// 0xb7000
			g37 = *(int32_t *)(g23 - 0x56cc);
			g38 = *(int32_t *)(v6 + 212);
			sprintf();
			v7 = g31;
			// branch -> 0xb7010
		}
		// 0xb7010
		v17 = *(int32_t *)(v7 + 240);
		if (v17 != 255) {
			// 0xb701c
			if (v17 != 0) {
				// 0xb7034
				g37 = *(int32_t *)(g23 - 0x56d4);
				g38 = *(int32_t *)(v7 + 236);
				sprintf();
				function_e86d0((int32_t)&v2, g36);
				// branch -> 0xb7050
				// 0xb7050
				v8 = g31;
				if (*(int32_t *)(v8 + 8) == 0) {
					// 0xb705c
					v2 = 0;
					// branch -> 0xb7064
				}
				// 0xb7064
				v18 = *(char *)(v8 + 354);
				v13 = (int32_t) * (char *)(v8 + 352);
				if (v13 + (int32_t)v18 == -(int32_t) * (char *)(v8 + 353)) {
					// 0xb7084
					v14 = &v2;
					function_e86d0(v14, *(int32_t *)(g23 - 0x56d8));
					v16 = v14;
					// branch -> 0xb7108
				} else {
					// 0xb7094
					g34 = g36;
					g37 = *(int32_t *)(g23 - 0x56dc);
					strcpy();
					v9 = g31;
					v10 = v9;
					if (*(char *)(v9 + 352) != 0) {
						// 0xb70ac
						g37 = *(int32_t *)(g23 - 0x56e0);
						g38 = g36;
						sprintf();
						v10 = g31;
						// branch -> 0xb70c0
					}
					// 0xb70c0
					v11 = v10;
					if (*(char *)(v10 + 353) != 0) {
						// 0xb70cc
						g37 = *(int32_t *)(g23 - 0x56e4);
						g38 = g36;
						sprintf();
						v11 = g31;
						// branch -> 0xb70dc
					}
					// 0xb70dc
					if (*(char *)(v11 + 354) != 0) {
						// 0xb70e8
						g37 = *(int32_t *)(g23 - 0x56e8);
						g38 = g36;
						sprintf();
						// branch -> 0xb70fc
					}
					// 0xb70fc
					v15 = &v2;
					function_e86d0(v15, g36);
					v16 = v15;
					// branch -> 0xb7108
				}
				// 0xb7108
				result2 = function_b6e4c(40, g32, 0, v16, (char)g33, 0);
				v12 = g31;
				result = result2;
				if (*(char *)(v12 + 60) == 2) {
					// 0xb7134
					if (*(int32_t *)(v12 + 56) != 0) {
						// 0xb7140
						result = function_b6e4c(40, g32, 0, *(int32_t *)(g23 - 0x56ec), (char)g33, 0);
						// branch -> 0xb715c
					} else {
						result = result2;
					}
				}
				// 0xb715c
				g10 = v1;
				return result;
			}
		}
		// 0xb7024
		function_e86d0((int32_t)&v2, *(int32_t *)(g23 - 0x56d0));
		// branch -> 0xb7050
		// 0xb7050
		v8 = g31;
		if (*(int32_t *)(v8 + 8) == 0) {
			// 0xb705c
			v2 = 0;
			// branch -> 0xb7064
		}
		// 0xb7064
		v18 = *(char *)(v8 + 354);
		v13 = (int32_t) * (char *)(v8 + 352);
		if (v13 + (int32_t)v18 == -(int32_t) * (char *)(v8 + 353)) {
			// 0xb7084
			v14 = &v2;
			function_e86d0(v14, *(int32_t *)(g23 - 0x56d8));
			v16 = v14;
			// branch -> 0xb7108
		} else {
			// 0xb7094
			g34 = g36;
			g37 = *(int32_t *)(g23 - 0x56dc);
			strcpy();
			v9 = g31;
			v10 = v9;
			if (*(char *)(v9 + 352) != 0) {
				// 0xb70ac
				g37 = *(int32_t *)(g23 - 0x56e0);
				g38 = g36;
				sprintf();
				v10 = g31;
				// branch -> 0xb70c0
			}
			// 0xb70c0
			v11 = v10;
			if (*(char *)(v10 + 353) != 0) {
				// 0xb70cc
				g37 = *(int32_t *)(g23 - 0x56e4);
				g38 = g36;
				sprintf();
				v11 = g31;
				// branch -> 0xb70dc
			}
			// 0xb70dc
			if (*(char *)(v11 + 354) != 0) {
				// 0xb70e8
				g37 = *(int32_t *)(g23 - 0x56e8);
				g38 = g36;
				sprintf();
				// branch -> 0xb70fc
			}
			// 0xb70fc
			v15 = &v2;
			function_e86d0(v15, g36);
			v16 = v15;
			// branch -> 0xb7108
		}
		// 0xb7108
		result2 = function_b6e4c(40, g32, 0, v16, (char)g33, 0);
		v12 = g31;
		result = result2;
		if (*(char *)(v12 + 60) == 2) {
			// 0xb7134
			if (*(int32_t *)(v12 + 56) != 0) {
				// 0xb7140
				result = function_b6e4c(40, g32, 0, *(int32_t *)(g23 - 0x56ec), (char)g33, 0);
				// branch -> 0xb715c
			} else {
				result = result2;
			}
		}
		// 0xb715c
		g10 = v1;
		return result;
	}
	// 0xb6f54
	if (*(int32_t *)(v3 + 220) == 23) {
		// 0xb6f60
		if (*(int32_t *)(v3 + 232) != 0) {
			// 0xb6f6c
			g37 = *(int32_t *)(g23 - 0x56c4);
			g38 = *(int32_t *)(v3 + 228);
			sprintf();
			v4 = &v2;
			if (v2 != 0) {
				// 0xb6f88
				function_e86d0(v4, g35);
				// branch -> 0xb6f94
			}
			// 0xb6f94
			function_e86d0(v4, g36);
			// branch -> 0xb6fa0
		}
		// 0xb6fa0
		if (v2 != 0) {
			// 0xb6fac
			function_b6e4c(40, g32, 0, (int32_t)&v2, (char)g33, 0);
			g32++;
			// branch -> 0xb6fcc
		}
		// 0xb6fcc
		v2 = 0;
		v5 = g31;
		v6 = v5;
		if (*(char *)(v5 + 190) == 1) {
			// 0xb6fe0
			g37 = *(int32_t *)(g23 - 0x56c8);
			g38 = *(int32_t *)(v5 + 204);
			sprintf();
			v6 = g31;
			// branch -> 0xb6ff4
		}
		// 0xb6ff4
		v7 = v6;
		if (*(char *)(v6 + 190) == 2) {
			// 0xb7000
			g37 = *(int32_t *)(g23 - 0x56cc);
			g38 = *(int32_t *)(v6 + 212);
			sprintf();
			v7 = g31;
			// branch -> 0xb7010
		}
		// 0xb7010
		v17 = *(int32_t *)(v7 + 240);
		if (v17 != 255) {
			// 0xb701c
			if (v17 != 0) {
				// 0xb7034
				g37 = *(int32_t *)(g23 - 0x56d4);
				g38 = *(int32_t *)(v7 + 236);
				sprintf();
				function_e86d0((int32_t)&v2, g36);
				// branch -> 0xb7050
				// 0xb7050
				v8 = g31;
				if (*(int32_t *)(v8 + 8) == 0) {
					// 0xb705c
					v2 = 0;
					// branch -> 0xb7064
				}
				// 0xb7064
				v18 = *(char *)(v8 + 354);
				v13 = (int32_t) * (char *)(v8 + 352);
				if (v13 + (int32_t)v18 == -(int32_t) * (char *)(v8 + 353)) {
					// 0xb7084
					v14 = &v2;
					function_e86d0(v14, *(int32_t *)(g23 - 0x56d8));
					v16 = v14;
					// branch -> 0xb7108
				} else {
					// 0xb7094
					g34 = g36;
					g37 = *(int32_t *)(g23 - 0x56dc);
					strcpy();
					v9 = g31;
					v10 = v9;
					if (*(char *)(v9 + 352) != 0) {
						// 0xb70ac
						g37 = *(int32_t *)(g23 - 0x56e0);
						g38 = g36;
						sprintf();
						v10 = g31;
						// branch -> 0xb70c0
					}
					// 0xb70c0
					v11 = v10;
					if (*(char *)(v10 + 353) != 0) {
						// 0xb70cc
						g37 = *(int32_t *)(g23 - 0x56e4);
						g38 = g36;
						sprintf();
						v11 = g31;
						// branch -> 0xb70dc
					}
					// 0xb70dc
					if (*(char *)(v11 + 354) != 0) {
						// 0xb70e8
						g37 = *(int32_t *)(g23 - 0x56e8);
						g38 = g36;
						sprintf();
						// branch -> 0xb70fc
					}
					// 0xb70fc
					v15 = &v2;
					function_e86d0(v15, g36);
					v16 = v15;
					// branch -> 0xb7108
				}
				// 0xb7108
				result2 = function_b6e4c(40, g32, 0, v16, (char)g33, 0);
				v12 = g31;
				result = result2;
				if (*(char *)(v12 + 60) == 2) {
					// 0xb7134
					if (*(int32_t *)(v12 + 56) != 0) {
						// 0xb7140
						result = function_b6e4c(40, g32, 0, *(int32_t *)(g23 - 0x56ec), (char)g33, 0);
						// branch -> 0xb715c
					} else {
						result = result2;
					}
				}
				// 0xb715c
				g10 = v1;
				return result;
			}
		}
		// 0xb7024
		function_e86d0((int32_t)&v2, *(int32_t *)(g23 - 0x56d0));
		// branch -> 0xb7050
		// 0xb7050
		v8 = g31;
		if (*(int32_t *)(v8 + 8) == 0) {
			// 0xb705c
			v2 = 0;
			// branch -> 0xb7064
		}
		// 0xb7064
		v18 = *(char *)(v8 + 354);
		v13 = (int32_t) * (char *)(v8 + 352);
		if (v13 + (int32_t)v18 == -(int32_t) * (char *)(v8 + 353)) {
			// 0xb7084
			v14 = &v2;
			function_e86d0(v14, *(int32_t *)(g23 - 0x56d8));
			v16 = v14;
			// branch -> 0xb7108
		} else {
			// 0xb7094
			g34 = g36;
			g37 = *(int32_t *)(g23 - 0x56dc);
			strcpy();
			v9 = g31;
			v10 = v9;
			if (*(char *)(v9 + 352) != 0) {
				// 0xb70ac
				g37 = *(int32_t *)(g23 - 0x56e0);
				g38 = g36;
				sprintf();
				v10 = g31;
				// branch -> 0xb70c0
			}
			// 0xb70c0
			v11 = v10;
			if (*(char *)(v10 + 353) != 0) {
				// 0xb70cc
				g37 = *(int32_t *)(g23 - 0x56e4);
				g38 = g36;
				sprintf();
				v11 = g31;
				// branch -> 0xb70dc
			}
			// 0xb70dc
			if (*(char *)(v11 + 354) != 0) {
				// 0xb70e8
				g37 = *(int32_t *)(g23 - 0x56e8);
				g38 = g36;
				sprintf();
				// branch -> 0xb70fc
			}
			// 0xb70fc
			v15 = &v2;
			function_e86d0(v15, g36);
			v16 = v15;
			// branch -> 0xb7108
		}
		// 0xb7108
		result2 = function_b6e4c(40, g32, 0, v16, (char)g33, 0);
		v12 = g31;
		result = result2;
		if (*(char *)(v12 + 60) == 2) {
			// 0xb7134
			if (*(int32_t *)(v12 + 56) != 0) {
				// 0xb7140
				result = function_b6e4c(40, g32, 0, *(int32_t *)(g23 - 0x56ec), (char)g33, 0);
				// branch -> 0xb715c
			} else {
				result = result2;
			}
		}
		// 0xb715c
		g10 = v1;
		return result;
	}
	// 0xb6fa0
	if (v2 != 0) {
		// 0xb6fac
		function_b6e4c(40, g32, 0, (int32_t)&v2, (char)g33, 0);
		g32++;
		// branch -> 0xb6fcc
	}
	// 0xb6fcc
	v2 = 0;
	v5 = g31;
	v6 = v5;
	if (*(char *)(v5 + 190) == 1) {
		// 0xb6fe0
		g37 = *(int32_t *)(g23 - 0x56c8);
		g38 = *(int32_t *)(v5 + 204);
		sprintf();
		v6 = g31;
		// branch -> 0xb6ff4
	}
	// 0xb6ff4
	v7 = v6;
	if (*(char *)(v6 + 190) == 2) {
		// 0xb7000
		g37 = *(int32_t *)(g23 - 0x56cc);
		g38 = *(int32_t *)(v6 + 212);
		sprintf();
		v7 = g31;
		// branch -> 0xb7010
	}
	// 0xb7010
	v17 = *(int32_t *)(v7 + 240);
	if (v17 == 255) {
		// 0xb7024
		function_e86d0((int32_t)&v2, *(int32_t *)(g23 - 0x56d0));
		// branch -> 0xb7050
		// 0xb7050
		v8 = g31;
		if (*(int32_t *)(v8 + 8) == 0) {
			// 0xb705c
			v2 = 0;
			// branch -> 0xb7064
		}
		// 0xb7064
		v18 = *(char *)(v8 + 354);
		v13 = (int32_t) * (char *)(v8 + 352);
		if (v13 + (int32_t)v18 == -(int32_t) * (char *)(v8 + 353)) {
			// 0xb7084
			v14 = &v2;
			function_e86d0(v14, *(int32_t *)(g23 - 0x56d8));
			v16 = v14;
			// branch -> 0xb7108
		} else {
			// 0xb7094
			g34 = g36;
			g37 = *(int32_t *)(g23 - 0x56dc);
			strcpy();
			v9 = g31;
			v10 = v9;
			if (*(char *)(v9 + 352) != 0) {
				// 0xb70ac
				g37 = *(int32_t *)(g23 - 0x56e0);
				g38 = g36;
				sprintf();
				v10 = g31;
				// branch -> 0xb70c0
			}
			// 0xb70c0
			v11 = v10;
			if (*(char *)(v10 + 353) != 0) {
				// 0xb70cc
				g37 = *(int32_t *)(g23 - 0x56e4);
				g38 = g36;
				sprintf();
				v11 = g31;
				// branch -> 0xb70dc
			}
			// 0xb70dc
			if (*(char *)(v11 + 354) != 0) {
				// 0xb70e8
				g37 = *(int32_t *)(g23 - 0x56e8);
				g38 = g36;
				sprintf();
				// branch -> 0xb70fc
			}
			// 0xb70fc
			v15 = &v2;
			function_e86d0(v15, g36);
			v16 = v15;
			// branch -> 0xb7108
		}
		// 0xb7108
		result2 = function_b6e4c(40, g32, 0, v16, (char)g33, 0);
		v12 = g31;
		if (*(char *)(v12 + 60) != 2) {
			// 0xb715c
			g10 = v1;
			return result2;
		}
		// 0xb7134
		if (*(int32_t *)(v12 + 56) != 0) {
			// 0xb7140
			result = function_b6e4c(40, g32, 0, *(int32_t *)(g23 - 0x56ec), (char)g33, 0);
			// branch -> 0xb715c
		} else {
			result = result2;
		}
		// 0xb715c
		g10 = v1;
		return result;
	}
	// 0xb701c
	if (v17 == 0) {
		// 0xb7024
		function_e86d0((int32_t)&v2, *(int32_t *)(g23 - 0x56d0));
		// branch -> 0xb7050
		// 0xb7050
		v8 = g31;
		if (*(int32_t *)(v8 + 8) == 0) {
			// 0xb705c
			v2 = 0;
			// branch -> 0xb7064
		}
		// 0xb7064
		v18 = *(char *)(v8 + 354);
		v13 = (int32_t) * (char *)(v8 + 352);
		if (v13 + (int32_t)v18 == -(int32_t) * (char *)(v8 + 353)) {
			// 0xb7084
			v14 = &v2;
			function_e86d0(v14, *(int32_t *)(g23 - 0x56d8));
			v16 = v14;
			// branch -> 0xb7108
		} else {
			// 0xb7094
			g34 = g36;
			g37 = *(int32_t *)(g23 - 0x56dc);
			strcpy();
			v9 = g31;
			v10 = v9;
			if (*(char *)(v9 + 352) != 0) {
				// 0xb70ac
				g37 = *(int32_t *)(g23 - 0x56e0);
				g38 = g36;
				sprintf();
				v10 = g31;
				// branch -> 0xb70c0
			}
			// 0xb70c0
			v11 = v10;
			if (*(char *)(v10 + 353) != 0) {
				// 0xb70cc
				g37 = *(int32_t *)(g23 - 0x56e4);
				g38 = g36;
				sprintf();
				v11 = g31;
				// branch -> 0xb70dc
			}
			// 0xb70dc
			if (*(char *)(v11 + 354) != 0) {
				// 0xb70e8
				g37 = *(int32_t *)(g23 - 0x56e8);
				g38 = g36;
				sprintf();
				// branch -> 0xb70fc
			}
			// 0xb70fc
			v15 = &v2;
			function_e86d0(v15, g36);
			v16 = v15;
			// branch -> 0xb7108
		}
		// 0xb7108
		result2 = function_b6e4c(40, g32, 0, v16, (char)g33, 0);
		v12 = g31;
		result = result2;
		if (*(char *)(v12 + 60) == 2) {
			// 0xb7134
			if (*(int32_t *)(v12 + 56) != 0) {
				// 0xb7140
				result = function_b6e4c(40, g32, 0, *(int32_t *)(g23 - 0x56ec), (char)g33, 0);
				// branch -> 0xb715c
			} else {
				result = result2;
			}
		}
		// 0xb715c
		g10 = v1;
		return result;
	}
	// 0xb7034
	g37 = *(int32_t *)(g23 - 0x56d4);
	g38 = *(int32_t *)(v7 + 236);
	sprintf();
	function_e86d0((int32_t)&v2, g36);
	// branch -> 0xb7050
	// 0xb7050
	v8 = g31;
	if (*(int32_t *)(v8 + 8) == 0) {
		// 0xb705c
		v2 = 0;
		// branch -> 0xb7064
	}
	// 0xb7064
	v18 = *(char *)(v8 + 354);
	v13 = (int32_t) * (char *)(v8 + 352);
	if (v13 + (int32_t)v18 == -(int32_t) * (char *)(v8 + 353)) {
		// 0xb7084
		v14 = &v2;
		function_e86d0(v14, *(int32_t *)(g23 - 0x56d8));
		v16 = v14;
		// branch -> 0xb7108
	} else {
		// 0xb7094
		g34 = g36;
		g37 = *(int32_t *)(g23 - 0x56dc);
		strcpy();
		v9 = g31;
		v10 = v9;
		if (*(char *)(v9 + 352) != 0) {
			// 0xb70ac
			g37 = *(int32_t *)(g23 - 0x56e0);
			g38 = g36;
			sprintf();
			v10 = g31;
			// branch -> 0xb70c0
		}
		// 0xb70c0
		v11 = v10;
		if (*(char *)(v10 + 353) != 0) {
			// 0xb70cc
			g37 = *(int32_t *)(g23 - 0x56e4);
			g38 = g36;
			sprintf();
			v11 = g31;
			// branch -> 0xb70dc
		}
		// 0xb70dc
		if (*(char *)(v11 + 354) != 0) {
			// 0xb70e8
			g37 = *(int32_t *)(g23 - 0x56e8);
			g38 = g36;
			sprintf();
			// branch -> 0xb70fc
		}
		// 0xb70fc
		v15 = &v2;
		function_e86d0(v15, g36);
		v16 = v15;
		// branch -> 0xb7108
	}
	// 0xb7108
	result2 = function_b6e4c(40, g32, 0, v16, (char)g33, 0);
	v12 = g31;
	result = result2;
	if (*(char *)(v12 + 60) == 2) {
		// 0xb7134
		if (*(int32_t *)(v12 + 56) != 0) {
			// 0xb7140
			result = function_b6e4c(40, g32, 0, *(int32_t *)(g23 - 0x56ec), (char)g33, 0);
			// branch -> 0xb715c
		} else {
			result = result2;
		}
	}
	// 0xb715c
	g10 = v1;
	return result;
}

// Address range: 0xb7170 - 0xb7590
int32_t function_b7170(void)
{
	int32_t v1 = g10;                        // 0xb7174
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0xb7178
	g33 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xb717c
	g32 = v3;
	g34 = *(int32_t *)(0x55ec * *(int32_t *)v2 + v3 + 0x5494) + 12;
	function_32430();
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x7648); // 0xb71ac
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x764c); // 0xb71b0
	g35 = v5;
	g36 = v4;
	int32_t v6 = 0;  // 0xb736042
	int32_t v7 = v4; // 0xb7324
	int32_t v8;      // 0xb7340
	int32_t v9;      // 0xb7360
	int32_t v10;     // 0xb7374
	int32_t v11;     // 0xb739447
	int32_t v12;     // 0xb73a8
	int32_t v13;     // 0xb73d0
	int32_t v14;     // 0xb73ec
	int32_t v15;     // 0xb740c54
	int32_t v16;     // 0xb7414
	int32_t v17;     // 0xb7440
	int32_t v18;     // 0xb7460
	int32_t v19;     // 0xb746059
	int32_t v20;     // 0xb7474
	int32_t v21;     // 0xb749463
	int32_t v22;     // 0xb74a8
	int32_t v23;     // 0xb74c866
	int32_t v24;     // 0xb74dc
	int32_t v25;     // 0xb7504
	int32_t v26;     // 0xb7520
	int32_t v27;     // 0xb7540
	int32_t result2; // 0xb754073
	int32_t v28;     // 0xb7554
	int32_t result3; // 0xb757477
	int32_t v29;     // 0xb7428
	if (v4 == 1) {
		// 0xb71c0
		if (v5 == 1) {
			int32_t v30 = g32 + 0x55ec * *(int32_t *)g33; // 0xb71d0
			int32_t v31 = 0;                              // 0xb728029
			int32_t v32;                                  // 0xb7260
			int32_t v33;                                  // 0xb7280
			int32_t v34;                                  // 0xb7294
			int32_t v35;                                  // 0xb72b432
			int32_t v36;                                  // 0xb72c8
			int32_t v37;                                  // 0xb72e835
			int32_t v38;                                  // 0xb72fc
			if (*(int32_t *)(v30 + 0x5538) != 0) {
				// 0xb71e4
				if (*(int32_t *)(g23 + 0x3858 + 76 * *(int32_t *)(v30 + 0x553c) + 64) != 0) {
					int32_t v39 = v30; // r7
					int32_t v40 = 0;   // r9
					int32_t v41 = 46;  // r4
					int32_t v42 = 0;   // 0xb728028
					int32_t v43 = 0;   // 0xb724023
					int32_t v44 = v30; // 0xb721c
					int32_t v45 = 0;   // 0xb724c
					                   // branch -> 0xb724c
				lab_0xb724c:;
					int32_t v46; // 0xb728027
					while (true) {
						// 0xb724c
						if (v45 == 0) {
							// 0xb720c
							v46 = v42;
							int32_t v47 = v43; // 0xb7240
							int32_t v48 = v44; // 0xb723c
							int32_t v49 = 0;   // 0xb724c17
							int32_t v50;       // 0xb723c
							int32_t v51;       // 0xb7240
							if (*(int32_t *)(v44 + 0x485c) == -1) {
								int32_t v52 = v41;          // ctr
								int32_t v53 = v44 + 0x484c; // 0xb722c
								int32_t v54 = v30 + 0x53cc; // 0xb7224
								// branch -> 0xb7224
								while (true) {
									int32_t v55 = v54 + 8; // 0xb7224
									int32_t v56 = v55;     // r5
									int32_t v57 = v53 + 8; // 0xb722c
									*(int32_t *)v57 = *(int32_t *)v55;
									*(int32_t *)(v53 + 12) = *(int32_t *)(v54 + 12);
									int32_t v58 = v52 - 1; // 0xb7234
									v52 = v58;
									if (v58 == 0) {
										// 0xb7238
										v46 = 1;
										v47 = v40;
										v48 = v39;
										v49 = 1;
										// branch -> 0xb723c
										// 0xb723c
										v50 = v48 + 368;
										v39 = v50;
										v51 = v47 + 1;
										v40 = v51;
										if (v51 > 7) {
											// break (via goto) -> 0xb7278
											goto lab_0xb7278;
										}
										v42 = v46;
										v43 = v51;
										v44 = v50;
										v45 = v49;
										// continue (via goto) -> 0xb724c
										goto lab_0xb724c;
									} else {
										// 0xb7224
										v53 = v57;
										v54 = v56;
										// branch -> 0xb7224
										continue;
									}
								}
								// 0xb7278
								int32_t v59; // 0xb728026
								v31 = v59;
								// branch -> 0xb7278
								// 0xb7278
								v32 = 30;
								v33 = v31;
								// branch -> 0xb7280
								while (true) {
									// 0xb7280
									v35 = v33;
									if (v33 == 0) {
									lab_0xb725c:
										// 0xb725c
										v41 = v32;
										int32_t v60 = function_56c68(*(int32_t *)g33, (int64_t)v32, g36, g35, 1); // 0xb7270
										int32_t v61 = g31 + 1;                                                    // 0xb7274
										if (v61 > 39) {
											// break -> 0xb72ac
											break;
										}
										v32 = v61;
										v33 = v60;
										// continue -> 0xb7280
										continue;
									}
									// 0xb72ac
									v34 = 20;
									// branch -> 0xb72b4
									while (true) {
										// 0xb72b4
										v37 = v35;
										if (v35 == 0) {
										lab_0xb7290:;
											int32_t v62 = function_56c68(*(int32_t *)g33, (int64_t)v34, g36, g35, 1); // 0xb72a4
											int32_t v63 = g31 + 1;                                                    // 0xb72a8
											if (v63 > 29) {
												// break -> 0xb72e0
												break;
											}
											v34 = v63;
											v35 = v62;
											// continue -> 0xb72b4
											continue;
										}
										// 0xb72e0
										v36 = 10;
										// branch -> 0xb72e8
										while (true) {
											int32_t v64 = v37; // 0xb731c38
											if (v37 == 0) {
											lab_0xb72c4:;
												int32_t v65 = function_56c68(*(int32_t *)g33, (int64_t)v36, g36, g35, 1); // 0xb72d8
												int32_t v66 = g31 + 1;                                                    // 0xb72dc
												if (v66 > 19) {
													// break -> 0xb7314
													break;
												}
												v36 = v66;
												v37 = v65;
												// continue -> 0xb72e8
												continue;
											}
											// 0xb7314
											g31 = 0;
											v38 = 0;
											// branch -> 0xb731c
											while (true) {
												int32_t v67 = v64; // 0xb736044
												if (v64 == 0) {
												lab_0xb72f8:;
													int32_t v68 = function_56c68(*(int32_t *)g33, (int64_t)v38, g36, g35, 1); // 0xb730c
													int32_t v69 = g31 + 1;                                                    // 0xb7310
													g31 = v69;
													if (v69 > 9) {
														// break -> 0xb7324
														break;
													}
													v38 = v69;
													v64 = v68;
													// continue -> 0xb731c
													continue;
												}
												// 0xb7324
												v6 = v67;
												v7 = g36;
												// branch -> 0xb7324
												// 0xb7324
												v15 = v6;
												v13 = v7;
												if (v7 == 1) {
													// 0xb732c
													if (g35 == 2) {
														// 0xb7358
														v8 = 29;
														v9 = v6;
														// branch -> 0xb7360
														while (true) {
															// 0xb7360
															v11 = v9;
															if (v9 == 0) {
															lab_0xb733c:;
																int32_t v70 = function_56c68(*(int32_t *)g33, (int64_t)v8, g36, g35, 1); // 0xb7350
																int32_t v71 = g31 - 1;                                                   // 0xb7354
																if (v71 < 20) {
																	// break -> 0xb738c
																	break;
																}
																v8 = v71;
																v9 = v70;
																// continue -> 0xb7360
																continue;
															}
															// 0xb738c
															v10 = 9;
															// branch -> 0xb7394
															while (true) {
																int32_t v72 = v11; // 0xb73c850
																if (v11 == 0) {
																lab_0xb7370:;
																	int32_t v73 = function_56c68(*(int32_t *)g33, (int64_t)v10, g36, g35, 1); // 0xb7384
																	int32_t v74 = g31 - 1;                                                    // 0xb7388
																	if (v74 < 0) {
																		// break -> 0xb73c0
																		break;
																	}
																	v10 = v74;
																	v11 = v73;
																	// continue -> 0xb7394
																	continue;
																}
																// 0xb73c0
																g31 = 19;
																v12 = 19;
																// branch -> 0xb73c8
																int32_t v75; // 0xb73b8
																while (true) {
																	// 0xb73c8
																	if (v72 == 0) {
																	lab_0xb73a4:
																		// 0xb73a4
																		v75 = function_56c68(*(int32_t *)g33, (int64_t)v12, g36, g35, 1);
																		int32_t v76 = g31 - 1; // 0xb73bc
																		g31 = v76;
																		if (v76 < 10) {
																			// break -> 0xb73d0
																			break;
																		}
																		v12 = v76;
																		v72 = v75;
																		// continue -> 0xb73c8
																		continue;
																	}
																	// 0xb73d0
																	// branch -> 0xb73d0
																}
																// 0xb73d0
																v15 = v75;
																v13 = g36;
																// branch -> 0xb73d0
															}
														}
													} else {
														v15 = v6;
														v13 = 1;
													}
												}
												// 0xb73d0
												v19 = v15;
												v16 = v13;
												if (v13 == 1) {
													// 0xb73d8
													if (g35 == 3) {
														// 0xb7404
														g31 = 0;
														v14 = 0;
														int32_t v77 = v15; // 0xb740c
														// branch -> 0xb740c
														int32_t v78; // 0xb73fc
														while (true) {
															// 0xb740c
															if (v77 == 0) {
															lab_0xb73e8:
																// 0xb73e8
																v78 = function_56c68(*(int32_t *)g33, (int64_t)v14, g36, g35, 1);
																int32_t v79 = g31 + 1; // 0xb7400
																g31 = v79;
																if (v79 > 19) {
																	// break -> 0xb7414
																	break;
																}
																v14 = v79;
																v77 = v78;
																// continue -> 0xb740c
																continue;
															}
															// 0xb7414
															// branch -> 0xb7414
														}
														// 0xb7414
														v19 = v78;
														v16 = g36;
														// branch -> 0xb7414
													} else {
														v19 = v15;
														v16 = 1;
													}
												}
												// 0xb7414
												result2 = v19;
												v25 = v16;
												if (v16 == 2) {
													// 0xb741c
													if (g35 == 2) {
														// 0xb7424
														g31 = 0;
														v29 = g23 + 0x35c4;
														g32 = v29;
														v17 = v29;
														v18 = v19;
														// branch -> 0xb7460
														while (true) {
															// 0xb7460
															v21 = v18;
															if (v18 == 0) {
															lab_0xb7438:;
																int32_t v80 = *(int32_t *)v17;                                            // 0xb7440
																int32_t v81 = function_56c68(*(int32_t *)g33, (int64_t)v80, g36, g35, 1); // 0xb744c
																int32_t v82 = g31 + 1;                                                    // 0xb7450
																g31 = v82;
																int32_t v83 = g32 + 4; // 0xb7454
																g32 = v83;
																if (v82 > 9) {
																	// break -> 0xb748c
																	break;
																}
																v17 = v83;
																v18 = v81;
																// continue -> 0xb7460
																continue;
															}
															// 0xb748c
															g32 = 21;
															v20 = 21;
															// branch -> 0xb7494
															while (true) {
																// 0xb7494
																v23 = v21;
																if (v21 == 0) {
																lab_0xb7470:;
																	int32_t v84 = function_56c68(*(int32_t *)g33, (int64_t)v20, g36, g35, 1); // 0xb7484
																	int32_t v85 = g32 + 2;                                                    // 0xb7488
																	g32 = v85;
																	if (v85 > 28) {
																		// break -> 0xb74c0
																		break;
																	}
																	v20 = v85;
																	v21 = v84;
																	// continue -> 0xb7494
																	continue;
																}
																// 0xb74c0
																g32 = 1;
																v22 = 1;
																// branch -> 0xb74c8
																while (true) {
																	int32_t v86 = v23; // 0xb74fc69
																	if (v23 == 0) {
																	lab_0xb74a4:;
																		int32_t v87 = function_56c68(*(int32_t *)g33, (int64_t)v22, g36, g35, 1); // 0xb74b8
																		int32_t v88 = g32 + 2;                                                    // 0xb74bc
																		g32 = v88;
																		if (v88 > 8) {
																			// break -> 0xb74f4
																			break;
																		}
																		v22 = v88;
																		v23 = v87;
																		// continue -> 0xb74c8
																		continue;
																	}
																	// 0xb74f4
																	g32 = 10;
																	v24 = 10;
																	// branch -> 0xb74fc
																	int32_t v89; // 0xb74ec
																	while (true) {
																		// 0xb74fc
																		if (v86 == 0) {
																		lab_0xb74d8:
																			// 0xb74d8
																			v89 = function_56c68(*(int32_t *)g33, (int64_t)v24, g36, g35, 1);
																			int32_t v90 = g32 + 1; // 0xb74f0
																			g32 = v90;
																			if (v90 > 18) {
																				// break -> 0xb7504
																				break;
																			}
																			v24 = v90;
																			v86 = v89;
																			// continue -> 0xb74fc
																			continue;
																		}
																		// 0xb7504
																		// branch -> 0xb7504
																	}
																	// 0xb7504
																	result2 = v89;
																	v25 = g36;
																	// branch -> 0xb7504
																}
															}
														}
													} else {
														result2 = v19;
														v25 = 2;
													}
												}
												// 0xb7504
												if (v25 == 2) {
													// 0xb750c
													if (g35 == 3) {
														// 0xb7538
														g32 = 0;
														v26 = 0;
														v27 = result2;
														// branch -> 0xb7540
														while (true) {
															// 0xb7540
															result3 = v27;
															if (v27 == 0) {
															lab_0xb751c:;
																int32_t v91 = function_56c68(*(int32_t *)g33, (int64_t)v26, g36, g35, 1); // 0xb7530
																int32_t v92 = g32 + 1;                                                    // 0xb7534
																g32 = v92;
																if (v92 > 8) {
																	// break -> 0xb756c
																	break;
																}
																v26 = v92;
																v27 = v91;
																// continue -> 0xb7540
																continue;
															}
															// 0xb756c
															g32 = 10;
															v28 = 10;
															// branch -> 0xb7574
															int32_t result; // 0xb758c
															while (true) {
																// 0xb7574
																if (result3 == 0) {
																lab_0xb7550:;
																	int32_t v93 = function_56c68(*(int32_t *)g33, (int64_t)v28, g36, g35, 1); // 0xb7564
																	int32_t v94 = g32 + 1;                                                    // 0xb7568
																	g32 = v94;
																	if (v94 > 18) {
																		result = v93;
																		// break -> 0xb757c
																		break;
																	}
																	v28 = v94;
																	result3 = v93;
																	// continue -> 0xb7574
																	continue;
																} else {
																	result = result3;
																}
															}
															// 0xb757c
															g10 = v1;
															return result;
														}
													}
												}
												// 0xb757c
												g10 = v1;
												return result2;
											}
										}
									}
								}
							}
							// 0xb723c
							v50 = v48 + 368;
							v39 = v50;
							v51 = v47 + 1;
							v40 = v51;
							if (v51 > 7) {
								// break -> 0xb7278
								break;
							}
							v42 = v46;
							v43 = v51;
							v44 = v50;
							v45 = v49;
							// continue -> 0xb724c
							continue;
						}
						// 0xb7278
						// branch -> 0xb7278
					}
				lab_0xb7278:
					// 0xb7278
					v31 = v46;
					// branch -> 0xb7278
				} else {
					v31 = 0;
				}
			}
			// 0xb7278
			v32 = 30;
			v33 = v31;
			// branch -> 0xb7280
			while (true) {
				// 0xb7280
				if (v33 == 0) {
					goto lab_0xb725c;
				}
				// 0xb72ac
				v34 = 20;
				v35 = v33;
				// branch -> 0xb72b4
				while (true) {
					// 0xb72b4
					if (v35 == 0) {
						goto lab_0xb7290;
					}
					// 0xb72e0
					v36 = 10;
					v37 = v35;
					// branch -> 0xb72e8
					while (true) {
						// 0xb72e8
						if (v37 == 0) {
							goto lab_0xb72c4;
						}
						// 0xb7314
						g31 = 0;
						v38 = 0;
						// branch -> 0xb731c
						while (true) {
							// 0xb731c
							if (v37 == 0) {
								goto lab_0xb72f8;
							}
							// 0xb7324
							// branch -> 0xb7324
						}
					}
				}
			}
		} else {
			v6 = 0;
			v7 = 1;
		}
	}
	// 0xb7324
	v15 = v6;
	v13 = v7;
	if (v7 == 1) {
		// 0xb732c
		if (g35 == 2) {
			// 0xb7358
			v8 = 29;
			v9 = v6;
			// branch -> 0xb7360
			while (true) {
				// 0xb7360
				if (v9 == 0) {
					goto lab_0xb733c;
				}
				// 0xb738c
				v10 = 9;
				v11 = v9;
				// branch -> 0xb7394
				while (true) {
					// 0xb7394
					if (v11 == 0) {
						goto lab_0xb7370;
					}
					// 0xb73c0
					g31 = 19;
					v12 = 19;
					// branch -> 0xb73c8
					while (true) {
						// 0xb73c8
						if (v11 == 0) {
							goto lab_0xb73a4;
						}
						// 0xb73d0
						// branch -> 0xb73d0
					}
				}
			}
		} else {
			v15 = v6;
			v13 = 1;
		}
	}
	// 0xb73d0
	v19 = v15;
	v16 = v13;
	if (v13 == 1) {
		// 0xb73d8
		if (g35 == 3) {
			// 0xb7404
			g31 = 0;
			v14 = 0;
			// branch -> 0xb740c
			while (true) {
				// 0xb740c
				if (v15 == 0) {
					goto lab_0xb73e8;
				}
				// 0xb7414
				// branch -> 0xb7414
			}
		} else {
			v19 = v15;
			v16 = 1;
		}
	}
	// 0xb7414
	result2 = v19;
	v25 = v16;
	if (v16 == 2) {
		// 0xb741c
		if (g35 == 2) {
			// 0xb7424
			g31 = 0;
			v29 = g23 + 0x35c4;
			g32 = v29;
			v17 = v29;
			v18 = v19;
			// branch -> 0xb7460
			while (true) {
				// 0xb7460
				if (v18 == 0) {
					goto lab_0xb7438;
				}
				// 0xb748c
				g32 = 21;
				v20 = 21;
				v21 = v18;
				// branch -> 0xb7494
				while (true) {
					// 0xb7494
					if (v21 == 0) {
						goto lab_0xb7470;
					}
					// 0xb74c0
					g32 = 1;
					v22 = 1;
					v23 = v21;
					// branch -> 0xb74c8
					while (true) {
						// 0xb74c8
						if (v23 == 0) {
							goto lab_0xb74a4;
						}
						// 0xb74f4
						g32 = 10;
						v24 = 10;
						// branch -> 0xb74fc
						while (true) {
							// 0xb74fc
							if (v23 == 0) {
								goto lab_0xb74d8;
							}
							// 0xb7504
							// branch -> 0xb7504
						}
					}
				}
			}
		} else {
			result2 = v19;
			v25 = 2;
		}
	}
	// 0xb7504
	if (v25 == 2) {
		// 0xb750c
		if (g35 == 3) {
			// 0xb7538
			g32 = 0;
			v26 = 0;
			v27 = result2;
			// branch -> 0xb7540
			while (true) {
				// 0xb7540
				if (v27 == 0) {
					goto lab_0xb751c;
				}
				// 0xb756c
				g32 = 10;
				v28 = 10;
				result3 = v27;
				// branch -> 0xb7574
				while (true) {
					// 0xb7574
					if (result3 == 0) {
						goto lab_0xb7550;
					}
					// 0xb757c
					g10 = v1;
					return result3;
				}
			}
		}
	}
	// 0xb757c
	g10 = v1;
	return result2;
}

// Address range: 0xb7590 - 0xb76d0
int32_t function_b7590(void)
{
	// 0xb7590
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	function_b6e4c(0, 1, 1, *(int32_t *)(g23 - 0x56f0), 3, 0);
	function_b6e4c(0, 3, 1, *(int32_t *)(g23 - 0x56f4), 3, 0);
	function_b6e4c(0, 7, 1, *(int32_t *)(g23 - 0x56f8), 3, 0);
	function_b6e4c(0, 10, 1, *(int32_t *)(g23 - 0x56fc), 1, 1);
	function_b6e4c(0, 12, 1, *(int32_t *)(g23 - 0x5700), 0, 1);
	function_b6e4c(0, 14, 1, *(int32_t *)(g23 - 0x5704), 0, 1);
	function_b6e4c(0, 16, 1, *(int32_t *)(g23 - 0x5708), 0, 1);
	function_b6e4c(0, 18, 1, *(int32_t *)(g23 - 0x570c), 0, 1);
	function_b6e4c(0, 20, 1, *(int32_t *)(g23 - 0x5710), 0, 1);
	function_b6dfc(5);
	int32_t result = *(int32_t *)(g23 - 0x6f10); // 0xb76b4
	*(int32_t *)result = 20;
	return result;
}

// Address range: 0xb76d0 - 0xb77f8
int32_t function_b76d0(int32_t a1)
{
	int32_t v1 = g10; // 0xb76d4
	g35 = *(int32_t *)(g23 - 0x6f1c);
	g36 = *(int32_t *)(g23 - 0x6f00);
	function_b6c90(5, 21);
	*(int32_t *)*(int32_t *)(g23 - 0x6f18) = 5;
	int32_t v2 = 5;                                     // 0xb776c
	int32_t v3 = *(int32_t *)(g23 - 0x71a4) + 368 * a1; // 0xb7770
	// branch -> 0xb7714
	while (true) {
		int32_t v4 = v2; // 0xb77ac
		int32_t v5 = v3; // 0xb77141
		if (*(int32_t *)(v3 + 8) != -1) {
			unsigned char v6 = *(char *)(v3 + 60); // 0xb7720
			char v7 = 0;
			if (v6 != 0) {
				// 0xb7730
				v7 = 1;
				// branch -> 0xb7734
			}
			if (*(int32_t *)(v3 + 356) == 0) {
				// 0xb7740
				v7 = 2;
				// branch -> 0xb7744
			}
			// 0xb7744
			if (v6 == 0) {
				// 0xb776c
				function_b6e4c(20, v2, 0, v3 + 61, v7, 1);
				// branch -> 0xb7788
			} else {
				// 0xb774c
				function_b6e4c(20, v2, 0, v3 + 125, v7, 1);
				// branch -> 0xb7788
			}
			// 0xb7788
			g37 = *(int32_t *)(g33 + 200);
			function_b6e24(g32);
			function_b6eb0(g33, g32 + 1, g31);
			*(int32_t *)g35 = g32;
			v4 = g32;
			v5 = g33 + 368;
			// branch -> 0xb77ac
		}
		int32_t v8 = v4 + 4; // 0xb77ac
		if (v8 >= 20) {
			// break -> 0xb77b8
			break;
		}
		v2 = v8;
		v3 = v5;
		// continue -> 0xb7714
	}
	int32_t *v9 = (int32_t *)g36;                            // 0xb77b8
	int32_t v10 = *v9;                                       // 0xb77b8
	int32_t result = *(int32_t *)(g23 - 0x6efc) + 156 * v10; // 0xb77c4
	if (*(int32_t *)(result + 148) != 0) {
		// 0xb77e4
		g10 = v1;
		return result;
	}
	// 0xb77d4
	if (v10 != 22) {
		// 0xb77dc
		*v9 = *(int32_t *)g35;
		// branch -> 0xb77e4
	}
	// 0xb77e4
	g10 = v1;
	return result;
}

// Address range: 0xb77f8 - 0xb7910
int32_t function_b77f8(void)
{
	// 0xb77f8
	g36 = 0;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xb7810
	g35 = *(int32_t *)(g23 - 0x6f10);
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 1;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 1;
	*(int32_t *)*(int32_t *)(g23 - 0x6f14) = g36;
	g37 = *(int32_t *)(g23 - 0x5714);
	int32_t v2 = v1 + 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0xb784c
	g38 = *(int32_t *)(v2 + 456);
	sprintf();
	function_b6e4c(0, 1, 1, g32, 3, 0);
	function_b6dfc(3);
	function_b6dfc(21);
	function_b76d0(*(int32_t *)g33);
	function_b6e4c(0, 22, 1, *(int32_t *)(g23 - 0x5718), 0, 0);
	function_b6e38(22, 6);
	*(int32_t *)g35 = g36;
	int32_t v3 = *(int32_t *)(g23 - 0x71a4); // 0xb78b8
	int32_t *v4 = (int32_t *)g35;            // 0xb78dc27
	int32_t result = *v4;                    // 0xb78dc28
	int32_t *v5;                             // 0xb78e8
	if (*(int32_t *)(v3 + 8) == -1) {
		// 0xb78dc
		*(int32_t *)g31 = result - 4;
		v5 = (int32_t *)g31;
		if (*v5 <= 0xffffffff) {
			// 0xb78f4
			*v5 = 0;
			// branch -> 0xb78fc
		}
		// 0xb78fc
		return result;
	}
	*v4 = result + 1;
	int32_t v6 = v3 + 368;
	int32_t *v7 = (int32_t *)g35; // 0xb78dc
	int32_t result2 = *v7;        // 0xb78dc
	while (*(int32_t *)(v6 + 8) != -1) {
		// 0xb78c0
		*v7 = result2 + 1;
		v6 += 368;
		v7 = (int32_t *)g35;
		result2 = *v7;
		// continue -> 0xb78c0
	}
	// 0xb78dc
	*(int32_t *)g31 = result2 - 4;
	v5 = (int32_t *)g31;
	if (*v5 <= 0xffffffff) {
		// 0xb78f4
		*v5 = 0;
		// branch -> 0xb78fc
	}
	// 0xb78fc
	return result2;
}

// Address range: 0xb7910 - 0xb7a60
int32_t function_b7910(int32_t a1)
{
	// 0xb7910
	g33 = *(int32_t *)(g23 - 0x6f1c);
	g35 = *(int32_t *)(g23 - 0x6f00);
	function_b6c90(5, 21);
	*(int32_t *)*(int32_t *)(g23 - 0x6f18) = 5;
	int32_t v1 = *(int32_t *)(g23 - 0x71a8); // 0xb794c
	g30 = 0;
	int32_t v2 = 0; // 0xb7978
	if (a1 != 0) {
		int32_t v3 = 0;
		int32_t v4 = v1;
		int32_t v5; // 0xb796c
		while (true) {
			int32_t v6 = v3;
			int32_t v7 = v4;
			int32_t v8; // 0xb7964
			if (*(int32_t *)(v4 + 8) == -1) {
				int32_t v9 = v4;        // 0xb796843
				int32_t v10 = v9 + 368; // 0xb796820
				int32_t v11 = v3 + 1;   // 0xb796c21
				while (*(int32_t *)(v9 + 376) == -1) {
					// 0xb7968
					v9 = v10;
					v10 = v9 + 368;
					v11++;
					// continue -> 0xb7968
				}
				// 0xb7968
				v8 = a1 - 1;
				v5 = v11 + 1;
				g30 = v5;
				if (v8 == 0) {
					// break -> 0xb7970
					break;
				}
				v3 = v5;
				a1 = v8;
				v4 = v10 + 368;
				// continue -> 0xb7958
				continue;
			}
			// 0xb7968
			v8 = a1 - 1;
			v5 = v6 + 1;
			g30 = v5;
			if (v8 == 0) {
				// break -> 0xb7970
				break;
			}
			v3 = v5;
			a1 = v8;
			v4 = v7 + 368;
			// continue -> 0xb7958
		}
		// 0xb7970
		v2 = v5;
		// branch -> 0xb7978
	}
	int32_t v12 = 5;             // 0xb7a00
	int32_t v13 = 368 * v2 + v1; // 0xb79bc
	// branch -> 0xb7a18
	int32_t *v14;   // 0xb7a20
	int32_t v15;    // 0xb7a20
	int32_t result; // 0xb7a2c
	while (true) {
		// 0xb7a18
		if (v2 < 6) {
			// 0xb7988
			int32_t v16; // 0xb7a04
			int32_t v17; // 0xb7a08
			int32_t v18; // 0xb7a0c
			if (*(int32_t *)(v13 + 8) == -1) {
				// 0xb7a00
				v18 = v12 - 4;
				v17 = v2;
				v16 = v13;
				// branch -> 0xb7a04
			} else {
				char v19 = 0;
				if (*(char *)(v13 + 60) != 0) {
					// 0xb79a4
					v19 = 1;
					// branch -> 0xb79a8
				}
				if (*(int32_t *)(v13 + 356) == 0) {
					// 0xb79b4
					v19 = 2;
					// branch -> 0xb79b8
				}
				// 0xb79b8
				function_b6e4c(20, v12, 0, v13 + 125, v19, 1);
				g37 = *(int32_t *)(g36 + 200);
				function_b6e24(g32);
				function_b6eb0(g36, g32 + 1, g31);
				*(int32_t *)g33 = g32;
				v18 = g32;
				v17 = g30;
				v16 = g36;
				// branch -> 0xb7a04
			}
			int32_t v20 = v17 + 1; // 0xb7a08
			g30 = v20;
			int32_t v21 = v18 + 4; // 0xb7a0c
			if (v21 > 19) {
				// break -> 0xb7a20
				break;
			}
			v12 = v21;
			v13 = v16 + 368;
			v2 = v20;
			// continue -> 0xb7a18
			continue;
		}
		// 0xb7a20
		v14 = (int32_t *)g35;
		v15 = *v14;
		result = *(int32_t *)(g23 - 0x6efc) + 156 * v15;
		if (*(int32_t *)(result + 148) != 0 || v15 == 22) {
			// 0xb7a4c
			return result;
		}
		// 0xb7a44
		*v14 = *(int32_t *)g33;
		// branch -> 0xb7a4c
		// 0xb7a4c
		return result;
	}
	// 0xb7a20
	v14 = (int32_t *)g35;
	v15 = *v14;
	result = *(int32_t *)(g23 - 0x6efc) + 156 * v15;
	if (*(int32_t *)(result + 148) != 0) {
		// 0xb7a4c
		return result;
	}
	// 0xb7a3c
	if (v15 != 22) {
		// 0xb7a44
		*v14 = *(int32_t *)g33;
		// branch -> 0xb7a4c
	}
	// 0xb7a4c
	return result;
}

// Address range: 0xb7a60 - 0xb7c24
int32_t function_b7a60(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f10); // 0xb7a68
	int32_t v2 = *(int32_t *)(g23 - 0x71a8); // r4
	g35 = *(int32_t *)(g23 - 0x6f20);
	g31 = *(int32_t *)(g23 - 0x76b4);
	g36 = *(int32_t *)(g23 - 0x6f14);
	*(int32_t *)v1 = 0;
	int32_t v3 = v2; // 0xb7aa4
	if (*(int32_t *)(v2 + 8) != -1) {
		int32_t *v4 = (int32_t *)v1; // 0xb7a98
		*v4 = *v4 + 1;
		v3 = v2;
		// branch -> 0xb7aa4
	}
	int32_t v5 = v3 + 368; // 0xb7aa8
	int32_t v6 = v5;       // 0xb7ac0
	if (*(int32_t *)(v3 + 376) != -1) {
		int32_t *v7 = (int32_t *)v1; // 0xb7ab4
		*v7 = *v7 + 1;
		v6 = v5;
		// branch -> 0xb7ac0
	}
	int32_t v8 = v6 + 368; // 0xb7ac4
	int32_t v9 = v8;       // 0xb7adc
	if (*(int32_t *)(v6 + 376) != -1) {
		int32_t *v10 = (int32_t *)v1; // 0xb7ad0
		*v10 = *v10 + 1;
		v9 = v8;
		// branch -> 0xb7adc
	}
	int32_t v11 = v9 + 368; // 0xb7ae0
	int32_t v12 = v11;      // 0xb7af8
	if (*(int32_t *)(v9 + 376) != -1) {
		int32_t *v13 = (int32_t *)v1; // 0xb7aec
		*v13 = *v13 + 1;
		v12 = v11;
		// branch -> 0xb7af8
	}
	// 0xb7af8
	if (*(int32_t *)(v12 + 376) != -1) {
		int32_t *v14 = (int32_t *)v1; // 0xb7b08
		*v14 = *v14 + 1;
		// branch -> 0xb7b14
	}
	// 0xb7b14
	if (*(int32_t *)(744 + v12) != -1) {
		int32_t *v15 = (int32_t *)v1; // 0xb7b20
		*v15 = *v15 + 1;
		// branch -> 0xb7b2c
	}
	// 0xb7b2c
	int32_t result; // 0xb7c20
	if (*(int32_t *)v1 == 0) {
		// 0xb7b38
		function_ba888(1);
		*(int32_t *)*(int32_t *)(g23 - 0x6f00) = 14;
		result = 0;
		// branch -> 0xb7c10
	} else {
		// 0xb7b54
		*(char *)*(int32_t *)(g23 - 0x6ef4) = 1;
		int32_t v16 = *(int32_t *)(g23 - 0x77ac); // 0xb7b68
		*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 1;
		int32_t v17 = *(int32_t *)(g23 - 0x77a8); // 0xb7b74
		*(int32_t *)g36 = 0;
		g37 = *(int32_t *)(g23 - 0x571c);
		g38 = *(int32_t *)(v17 + 0x55ec * *(int32_t *)v16 + 456);
		sprintf();
		function_b6e4c(0, 1, 1, g31, 3, 0);
		function_b6dfc(3);
		function_b6dfc(21);
		function_b6e4c(0, 22, 1, *(int32_t *)(g23 - 0x5718), 0, 0);
		function_b6e38(22, 6);
		*(int32_t *)g35 = *(int32_t *)g32 - 4;
		int32_t *v18 = (int32_t *)g35; // 0xb7bf4
		if (*v18 <= 0xffffffff) {
			// 0xb7c00
			*v18 = g33;
			// branch -> 0xb7c04
		}
		// 0xb7c04
		function_b7910(*(int32_t *)g36);
		result = 1;
		// branch -> 0xb7c10
	}
	// 0xb7c10
	return result;
}

// Address range: 0xb7c24 - 0xb7cb0
int32_t function_b7c24(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8);                                      // 0xb7c2c
	int32_t v2 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v1 + 368 * a1; // 0xb7c3c
	int32_t v3 = *(int32_t *)(v2 + 3760);                                         // 0xb7c40
	if (v3 == -1 || v3 == 0 || v3 == 11 || v3 == 14 || v3 == 10 || *(int32_t *)(v2 + 0x1010) == 33) {
		// 0xb7c4c
		return 0;
	}
	// 0xb7ca8
	return 1;
}

// Address range: 0xb7cb0 - 0xb7df4
int32_t function_b7cb0(int32_t a1)
{
	int32_t v1 = g10; // 0xb7cb4
	g36 = *(int32_t *)(g23 - 0x6f20);
	g33 = *(int32_t *)(g23 - 0x6f10);
	function_b6c90(5, 21);
	int32_t v2 = *(int32_t *)(g23 - 0x6f24) + 368 * a1; // r27
	*(int32_t *)*(int32_t *)(g23 - 0x6f18) = 5;
	g30 = 5;
	int32_t v3 = 5; // 0xb7d64
	// branch -> 0xb7db4
	int32_t *v4;    // 0xb7dcc
	int32_t result; // 0xb7dc0
	while (true) {
		int32_t v5 = g33; // 0xb7db4
		int32_t v6 = v5;  // 0xb7dc0
		if (a1 < *(int32_t *)v5) {
			int32_t v7 = v2;  // 0xb7cfc
			int32_t v8 = v3;  // 0xb7da8
			int32_t v9 = a1;  // 0xb7da4
			int32_t v10 = v7; // 0xb7da0
			int32_t v11;      // 0xb7da8
			if (*(int32_t *)(v7 + 8) != -1) {
				unsigned char v12 = *(char *)(v7 + 60); // 0xb7d08
				int32_t v13 = 0;
				char v14 = 0;
				if (v12 != 0) {
					// 0xb7d18
					v13 = 1;
					v14 = 1;
					// branch -> 0xb7d1c
				}
				// 0xb7d1c
				g29 = v13;
				if (*(int32_t *)(v7 + 356) == 0) {
					// 0xb7d28
					g29 = 2;
					v14 = 2;
					// branch -> 0xb7d2c
				}
				// 0xb7d2c
				int32_t v15;
				if (v12 != 0) {
					// 0xb7d34
					if (*(int32_t *)(v7 + 56) != 0) {
						// 0xb7d40
						function_b6e4c(20, v3, 0, v7 + 125, v14, 1);
						v15 = g31 + 200;
						// branch -> 0xb7d84
					lab_0xb7d84:
						// 0xb7d84
						g37 = *(int32_t *)v15;
						function_b6e24(g30);
						function_b6eb0(g31, g30 + 1, g29);
						*(int32_t *)g32 = g30;
						// branch -> 0xb7da0
						// 0xb7da0
						v2 = g31 + 368;
						v11 = g30 + 4;
						g30 = v11;
						if (v11 > 19) {
							// break -> 0xb7da0
							break;
						}
						v3 = v11;
						a1 = g35 + 1;
						// continue -> 0xb7db4
						continue;
					}
				}
				// 0xb7d64
				function_b6e4c(20, v3, 0, v7 + 61, v14, 1);
				v15 = g31 + 196;
				// branch -> 0xb7d84
				goto lab_0xb7d84;
			}
			// 0xb7da0
			v2 = v10 + 368;
			v11 = v8 + 4;
			g30 = v11;
			if (v11 > 19) {
				// break -> 0xb7da0
				break;
			}
			v3 = v11;
			a1 = v9 + 1;
			// continue -> 0xb7db4
			continue;
		}
		// 0xb7dc0
		result = *(int32_t *)v6;
		*(int32_t *)g36 = result - 4;
		v4 = (int32_t *)g36;
		if (*v4 <= 0xffffffff) {
			// 0xb7dd8
			*v4 = 0;
			// branch -> 0xb7de0
		}
		// 0xb7de0
		g10 = v1;
		return result;
	}
	// 0xb7da0
	// branch -> 0xb7dc0
	// 0xb7dc0
	result = *(int32_t *)g33;
	*(int32_t *)g36 = result - 4;
	v4 = (int32_t *)g36;
	if (*v4 <= 0xffffffff) {
		// 0xb7dd8
		*v4 = 0;
		// branch -> 0xb7de0
	}
	// 0xb7de0
	g10 = v1;
	return result;
}

// Address range: 0xb7df4 - 0xb8100
int32_t function_b7df4(void)
{
	// 0xb7df4
	g25 = 0;
	int32_t v1 = *(int32_t *)(g23 - 0x6f10); // r28
	int32_t v2 = *(int32_t *)(g23 - 0x6f24); // r24
	int32_t v3 = 0;                          // r22
	int32_t v4 = *(int32_t *)(g23 - 0x6f28); // 0xb7e10
	g24 = 0;
	g29 = *(int32_t *)(g23 - 0x5718);
	g30 = *(int32_t *)(g23 - 0x76b4);
	int32_t v5 = *(int32_t *)(g23 - 0x77ac); // r29
	g35 = *(int32_t *)(g23 - 0x77a8);
	g36 = *(int32_t *)(g23 - 0x6ef8);
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 1;
	int32_t v6 = -1; // r0
	*(int32_t *)v1 = g25;
	*(int32_t *)(v2 + 8) = v6;
	*(int32_t *)(v2 + 376) = v6;
	*(int32_t *)(v2 + 744) = v6;
	*(int32_t *)(v2 + 1112) = v6;
	*(int32_t *)(v2 + 1480) = v6;
	*(int32_t *)(v2 + 1848) = v6;
	*(int32_t *)(v2 + 2216) = v6;
	*(int32_t *)(v2 + 2584) = v6;
	*(int32_t *)(v2 + 2952) = v6;
	*(int32_t *)(v2 + 3320) = v6;
	*(int32_t *)(v2 + 3688) = v6;
	*(int32_t *)(v2 + 4056) = v6;
	*(int32_t *)(v2 + 0x1148) = v6;
	*(int32_t *)(v2 + 0x12b8) = v6;
	*(int32_t *)(v2 + 0x1428) = v6;
	*(int32_t *)(v2 + 0x1598) = v6;
	*(int32_t *)(v2 + 0x1708) = v6;
	*(int32_t *)(v2 + 0x1878) = v6;
	*(int32_t *)(v2 + 0x19e8) = v6;
	*(int32_t *)(v2 + 0x1b58) = v6;
	*(int32_t *)(v2 + 0x1cc8) = v6;
	*(int32_t *)(v2 + 0x1e38) = v6;
	*(int32_t *)(v2 + 0x1fa8) = v6;
	*(int32_t *)(v2 + 0x2118) = v6;
	*(int32_t *)(v2 + 0x2288) = v6;
	*(int32_t *)(v2 + 0x23f8) = v6;
	*(int32_t *)(v2 + 0x2568) = v6;
	*(int32_t *)(v2 + 0x26d8) = v6;
	*(int32_t *)(v2 + 0x2848) = v6;
	*(int32_t *)(v2 + 0x29b8) = v6;
	*(int32_t *)(v2 + 0x2b28) = v6;
	*(int32_t *)(v2 + 0x2c98) = v6;
	*(int32_t *)(v2 + 0x2e08) = v6;
	*(int32_t *)(v2 + 0x2f78) = v6;
	*(int32_t *)(v2 + 0x30e8) = v6;
	*(int32_t *)(v2 + 0x3258) = v6;
	*(int32_t *)(v2 + 0x33c8) = v6;
	*(int32_t *)(v2 + 0x3538) = v6;
	*(int32_t *)(v2 + 0x36a8) = v6;
	*(int32_t *)(v2 + 0x3818) = v6;
	*(int32_t *)(v2 + 0x3988) = v6;
	*(int32_t *)(v2 + 0x3af8) = v6;
	*(int32_t *)(v2 + 0x3c68) = v6;
	*(int32_t *)(v2 + 0x3dd8) = v6;
	*(int32_t *)(v2 + 0x3f48) = v6;
	*(int32_t *)(v2 + 0x40b8) = v6;
	*(int32_t *)(v2 + 0x4228) = v6;
	*(int32_t *)(v2 + 0x4398) = v6;
	int32_t v7 = g25; // 0xb7f0c
	// branch -> 0xb7fcc
	while (true) {
		int32_t v8 = 0x55ec * *(int32_t *)v5; // 0xb7fd0
		int32_t v9 = g35;                     // 0xb7fd8
		int32_t v10;                          // 0xb7f58
		if (v7 >= *(int32_t *)(v9 + v8 + 0x4828)) {
			// 0xb7fe4
			int32_t result;
			if (g24 == 0) {
				// 0xb7fec
				*(int32_t *)g36 = 0;
				g37 = *(int32_t *)(g23 - 0x5720);
				g38 = *(int32_t *)(v9 + v8 + 456);
				sprintf();
				function_b6e4c(0, 1, 1, g30, 3, 0);
				function_b6dfc(3);
				function_b6dfc(21);
				function_b6e4c(0, 22, 1, g29, 0, 1);
				result = function_b6e38(22, 6);
				// branch -> 0xb80ec
				// 0xb80ec
				return result;
			}
			// 0xb8060
			v10 = v9 + v8;
			*(int32_t *)g36 = 1;
			*(int32_t *)*(int32_t *)(g23 - 0x6f14) = 0;
			g37 = *(int32_t *)(g23 - 0x5724);
			*(int32_t *)*(int32_t *)(g23 - 0x6f20) = *(int32_t *)(v10 + 0x4828);
			g38 = *(int32_t *)(v10 + 456);
			sprintf();
			function_b6e4c(0, 1, 1, g30, 3, 0);
			function_b6dfc(3);
			function_b6dfc(21);
			function_b7cb0(*(int32_t *)g31);
			function_b6e4c(0, 22, 1, g29, 0, 1);
			result = function_b6e38(22, 6);
			// branch -> 0xb80ec
			// 0xb80ec
			return result;
		}
		// 0xb7f0c
		if (function_b7c24(v7) != 0) {
			int32_t v11 = *(int32_t *)v5; // 0xb7f1c
			int32_t v12 = *(int32_t *)v1; // 0xb7f24
			int32_t v13 = 46;             // ctr
			int32_t v14 = v2 + 368 * v12; // 0xb7f40
			int32_t v15 = v14;            // r7
			g24 = 1;
			int32_t v16 = v14 - 8;                            // 0xb7f58
			int32_t v17 = 0x55ec * v11 + 3752 + v3 - 8 + g35; // 0xb7f50
			// branch -> 0xb7f50
			while (true) {
				int32_t v18 = v17 + 8; // 0xb7f50
				int32_t v19 = v18;     // r5
				v10 = v16 + 8;
				*(int32_t *)v10 = *(int32_t *)v18;
				*(int32_t *)(v16 + 12) = *(int32_t *)(v17 + 12);
				int32_t v20 = v13 - 1; // 0xb7f60
				v13 = v20;
				if (v20 == 0) {
					int32_t v21 = v15; // 0xb7f64
					int32_t v22 = v21; // 0xb7f90
					if (*(char *)(v21 + 60) != 0) {
						// 0xb7f70
						if (*(int32_t *)(v21 + 56) != 0) {
							// 0xb7f7c
							*(int32_t *)(v21 + 196) = *(int32_t *)(v21 + 200);
							v22 = v15;
							// branch -> 0xb7f84
						} else {
							v22 = v21;
						}
					}
					int32_t v23 = v22 + 196;       // 0xb7f84
					int32_t v24 = v23;             // r4
					int32_t *v25 = (int32_t *)v23; // 0xb7f88
					*v25 = *v25 / 4;
					int32_t v26 = v15; // 0xb7f94
					int32_t v27 = v26; // 0xb7fb0
					if (*(int32_t *)(v26 + 196) == 0) {
						// 0xb7fa0
						*(int32_t *)v24 = 1;
						v27 = v15;
						// branch -> 0xb7fa8
					}
					// 0xb7fa8
					*(int32_t *)(v27 + 200) = *(int32_t *)v24;
					*(char *)(v12 + v4) = (char)(0x1000000 * g25 / 0x1000000);
					int32_t *v28 = (int32_t *)v1; // 0xb7fb8
					*v28 = *v28 + 1;
					// branch -> 0xb7fc4
					// 0xb7fc4
					v3 += 368;
					g25++;
					// branch -> 0xb7fcc
					break;
				} else {
					// 0xb7f50
					v16 = v10;
					v17 = v19;
					// branch -> 0xb7f50
					continue;
				}
			}
		}
		// 0xb7fc4
		v3 += 368;
		int32_t v29 = g25 + 1; // 0xb7fc8
		g25 = v29;
		v7 = v29;
		// branch -> 0xb7fcc
	}
}

// Address range: 0xb8100 - 0xb8180
int32_t function_b8100(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8);                                      // 0xb8108
	int32_t v2 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v1 + 368 * a1; // 0xb8118
	int32_t v3 = *(int32_t *)(v2 + 3760);                                         // 0xb811c
	if (v3 == -1 || v3 == 0 || v3 == 11 || v3 == 14 || *(int32_t *)(v2 + 3988) == *(int32_t *)(v2 + 3992)) {
		// 0xb8128
		return 0;
	}
	// 0xb8178
	return 1;
}

// Address range: 0xb8180 - 0xb8278
int32_t function_b8180(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f10);                        // 0xb8180
	int32_t v2 = 46;                                                // ctr
	int32_t v3 = 368 * *(int32_t *)v1 + *(int32_t *)(g23 - 0x6f24); // 0xb819c
	int32_t result2 = v3;                                           // r3
	int32_t v4 = v3 - 8;                                            // 0xb81ac
	int32_t v5 = a1 - 8;                                            // 0xb81a4
	// branch -> 0xb81a4
	while (true) {
		int32_t v6 = v5 + 8; // 0xb81a4
		int32_t v7 = v4 + 8; // 0xb81ac
		*(int32_t *)v7 = *(int32_t *)v6;
		*(int32_t *)(v4 + 12) = *(int32_t *)(v5 + 12);
		int32_t v8 = v2 - 1; // 0xb81b4
		v2 = v8;
		if (v8 == 0) {
			int32_t result = result2; // 0xb8254
			if (*(char *)(result2 + 60) != 0) {
				// 0xb81c4
				if (*(int32_t *)(result2 + 56) != 0) {
					uint64_t v9 = 0x51eb851f * (int64_t)(30 * *(int32_t *)(result2 + 200)); // 0xb81e0
					int32_t v10 = (int32_t)(v9 / 0x100000000) >> 31;                        // 0xb81e4
					int32_t v11 = v10 < 0;                                                  // 0xb81e8
					int32_t v12 = (v10 & -0x8000000 | (int32_t)(v9 / 0x2000000000)) + v11;  // 0xb81ec
					*(int32_t *)(result2 + 196) = v12;
					result = result2;
					// branch -> 0xb81f4
				} else {
					result = result2;
				}
			}
			int32_t v13 = *(int32_t *)(result + 240);                                // 0xb81f4
			int32_t v14 = 100 * (v13 - *(int32_t *)(result + 236)) / v13;            // 0xb8210
			uint64_t v15 = 0x51eb851f * (int64_t)(v14 * *(int32_t *)(result + 196)); // 0xb8218
			int32_t v16 = (int32_t)(v15 / 0x100000000) >> 31;                        // 0xb821c
			int32_t v17 = v16 < 0;                                                   // 0xb8220
			int32_t v18 = (v16 & -0x8000000 | (int32_t)(v15 / 0x2000000000)) + v17;  // 0xb8224
			int32_t v19 = v18;                                                       // r0
			int32_t v20 = v18;                                                       // 0xb8250
			if (v18 == 0) {
				// 0xb822c
				if (*(char *)(result + 60) != 0) {
					// 0xb8238
					if (*(int32_t *)(result + 56) != 0) {
						// bb
						return result;
					}
				}
				// 0xb8244
				v19 = 1;
				v20 = 1;
				// branch -> 0xb8248
			}
			// 0xb8248
			int32_t v21; // 0xb8250
			if (v20 >= 2) {
				// 0xb8250
				v21 = v20 / 2 | v20 & -0x80000000;
				v19 = v21;
				// branch -> 0xb8254
			} else {
				v21 = v20;
			}
			// 0xb8254
			*(int32_t *)(result + 200) = v21;
			int32_t v22 = *(int32_t *)(g23 - 0x6f28); // 0xb825c
			*(int32_t *)(result2 + 196) = v19;
			int32_t *v23 = (int32_t *)v1; // 0xb8264
			int32_t v24 = *v23;           // 0xb8264
			result2 = v24;
			*v23 = v24 + 1;
			*(char *)(result2 + v22) = (char)(0x1000000 * a2 / 0x1000000);
			return result2;
		}
		// 0xb81a4
		v4 = v7;
		v5 = v6;
		// branch -> 0xb81a4
	}
}

// Address range: 0xb8278 - 0xb85ec
int32_t function_b8278(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // r29
	int32_t v2 = 0;                          // r25
	g35 = *(int32_t *)(g23 - 0x77a8);
	g30 = *(int32_t *)(g23 - 0x5718);
	g31 = *(int32_t *)(g23 - 0x76b4);
	int32_t v3 = *(int32_t *)(g23 - 0x6f14); // 0xb82a0
	g36 = *(int32_t *)(g23 - 0x6ef8);
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 1;
	int32_t v4 = -1;                         // r0
	int32_t v5 = *(int32_t *)(g23 - 0x6f24); // r5
	*(int32_t *)*(int32_t *)(g23 - 0x6f10) = 0;
	*(int32_t *)(v5 + 8) = v4;
	*(int32_t *)(v5 + 376) = v4;
	*(int32_t *)(v5 + 744) = v4;
	*(int32_t *)(v5 + 1112) = v4;
	*(int32_t *)(v5 + 1480) = v4;
	*(int32_t *)(v5 + 1848) = v4;
	*(int32_t *)(v5 + 2216) = v4;
	*(int32_t *)(v5 + 2584) = v4;
	*(int32_t *)(v5 + 2952) = v4;
	*(int32_t *)(v5 + 3320) = v4;
	*(int32_t *)(v5 + 3688) = v4;
	*(int32_t *)(v5 + 4056) = v4;
	*(int32_t *)(v5 + 0x1148) = v4;
	*(int32_t *)(v5 + 0x12b8) = v4;
	*(int32_t *)(v5 + 0x1428) = v4;
	*(int32_t *)(v5 + 0x1598) = v4;
	*(int32_t *)(v5 + 0x1708) = v4;
	*(int32_t *)(v5 + 0x1878) = v4;
	*(int32_t *)(v5 + 0x19e8) = v4;
	*(int32_t *)(v5 + 0x1b58) = v4;
	*(int32_t *)(v5 + 0x1cc8) = v4;
	*(int32_t *)(v5 + 0x1e38) = v4;
	*(int32_t *)(v5 + 0x1fa8) = v4;
	*(int32_t *)(v5 + 0x2118) = v4;
	*(int32_t *)(v5 + 0x2288) = v4;
	*(int32_t *)(v5 + 0x23f8) = v4;
	*(int32_t *)(v5 + 0x2568) = v4;
	*(int32_t *)(v5 + 0x26d8) = v4;
	*(int32_t *)(v5 + 0x2848) = v4;
	*(int32_t *)(v5 + 0x29b8) = v4;
	*(int32_t *)(v5 + 0x2b28) = v4;
	*(int32_t *)(v5 + 0x2c98) = v4;
	*(int32_t *)(v5 + 0x2e08) = v4;
	*(int32_t *)(v5 + 0x2f78) = v4;
	*(int32_t *)(v5 + 0x30e8) = v4;
	*(int32_t *)(v5 + 0x3258) = v4;
	*(int32_t *)(v5 + 0x33c8) = v4;
	*(int32_t *)(v5 + 0x3538) = v4;
	*(int32_t *)(v5 + 0x36a8) = v4;
	*(int32_t *)(v5 + 0x3818) = v4;
	*(int32_t *)(v5 + 0x3988) = v4;
	*(int32_t *)(v5 + 0x3af8) = v4;
	*(int32_t *)(v5 + 0x3c68) = v4;
	*(int32_t *)(v5 + 0x3dd8) = v4;
	*(int32_t *)(v5 + 0x3f48) = v4;
	*(int32_t *)(v5 + 0x40b8) = v4;
	*(int32_t *)(v5 + 0x4228) = v4;
	*(int32_t *)(v5 + 0x4398) = v4;
	int32_t v6 = 0x55ec * *(int32_t *)v1; // 0xb8388
	int32_t v7 = g35;                     // 0xb838c
	int32_t v8 = v7 + v6;                 // 0xb838c
	int32_t v9 = v7;                      // 0xb83ec
	int32_t v10 = v1;                     // 0xb83c0
	int32_t v11;                          // r23
	int32_t v12;                          // r24
	int32_t v13;                          // r6
	int32_t result;
	int32_t v14; // 0xb83fc
	int32_t v15; // 0xb8428
	int32_t v16; // 0xb8438
	int32_t v17; // 0xb8464
	int32_t v18; // 0xb8480
	int32_t v19; // 0xb84c4
	int32_t v20; // 0xb83c4
	int32_t v21; // 0xb8400
	int32_t v22; // 0xb843c
	int32_t v23; // 0xb84bc
	int32_t v24; // 0xb83c8
	int32_t v25; // 0xb8404
	int32_t v26; // 0xb8440
	int32_t v27; // 0xb856c
	if (*(int32_t *)(v8 + 1184) != -1) {
		// 0xb839c
		if (*(int32_t *)(v8 + 1412) != *(int32_t *)(v8 + 1416)) {
			// 0xb83ac
			v2 = 1;
			function_b8180(v6 + 1176 + v7, -1);
			v9 = g35;
			v10 = v1;
			// branch -> 0xb83c0
		} else {
			v9 = v7;
			v10 = v1;
		}
		// 0xb83c0
		v20 = 0x55ec * *(int32_t *)v10;
		v24 = v20 + v9;
		v15 = v9;
		v14 = v10;
		if (*(int32_t *)(v24 + 3392) != -1) {
			// 0xb83d8
			if (*(int32_t *)(v24 + 3620) != *(int32_t *)(v24 + 3624)) {
				// 0xb83e8
				v2 = 1;
				function_b8180(v9 + 3384 + v20, -2);
				v15 = g35;
				v14 = v1;
				// branch -> 0xb83fc
			} else {
				v15 = v9;
				v14 = v10;
			}
		}
		// 0xb83fc
		v21 = 0x55ec * *(int32_t *)v14;
		v25 = v21 + v15;
		v17 = v15;
		v16 = v14;
		if (*(int32_t *)(v25 + 2656) != -1) {
			// 0xb8414
			if (*(int32_t *)(v25 + 2884) != *(int32_t *)(v25 + 2888)) {
				// 0xb8424
				v2 = 1;
				function_b8180(v15 + 2648 + v21, -3);
				v17 = g35;
				v16 = v1;
				// branch -> 0xb8438
			} else {
				v17 = v15;
				v16 = v14;
			}
		}
		// 0xb8438
		v22 = 0x55ec * *(int32_t *)v16;
		v26 = v22 + v17;
		if (*(int32_t *)(v26 + 3024) != -1) {
			// 0xb8450
			if (*(int32_t *)(v26 + 3252) != *(int32_t *)(v26 + 3256)) {
				// 0xb8460
				v2 = 1;
				function_b8180(v17 + 3016 + v22, -4);
				// branch -> 0xb8474
			}
		}
		// 0xb8474
		v11 = 0;
		v12 = 0;
		v18 = 0;
		// branch -> 0xb84b8
		while (true) {
			// 0xb84b8
			v23 = 0x55ec * *(int32_t *)v1;
			v19 = g35;
			if (v18 >= *(int32_t *)(v19 + v23 + 0x4828)) {
				// 0xb84d0
				if (v2 == 0) {
					// 0xb84d8
					*(int32_t *)g36 = 0;
					g37 = *(int32_t *)(g23 - 0x5728);
					g38 = *(int32_t *)(v19 + v23 + 456);
					sprintf();
					function_b6e4c(0, 1, 1, g31, 3, 0);
					function_b6dfc(3);
					function_b6dfc(21);
					function_b6e4c(0, 22, 1, g30, 0, 1);
					result = function_b6e38(22, 6);
					// branch -> 0xb85d8
					// 0xb85d8
					return result;
				}
				// 0xb854c
				v13 = v19 + v23;
				*(int32_t *)g36 = 1;
				*(int32_t *)v3 = 0;
				g37 = *(int32_t *)(g23 - 0x572c);
				v27 = *(int32_t *)(v13 + 0x4828);
				*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v27;
				g38 = *(int32_t *)(v13 + 456);
				sprintf();
				function_b6e4c(0, 1, 1, g31, 3, 0);
				function_b6dfc(3);
				function_b6dfc(21);
				function_b7cb0(*(int32_t *)g32);
				function_b6e4c(0, 22, 1, g30, 0, 1);
				result = function_b6e38(22, 6);
				// branch -> 0xb85d8
				// 0xb85d8
				return result;
			}
		lab_0xb8480_4:
			// 0xb8480
			if (function_b8100(v18) != 0) {
				// 0xb8490
				v2 = 1;
				int32_t v28 = 0x55ec * *(int32_t *)v1 + 3752 + v12 + g35; // 0xb84a8
				function_b8180(v28, v11);
				// branch -> 0xb84b0
			}
			// 0xb84b0
			v12 += 368;
			int32_t v29 = v11 + 1; // 0xb84b4
			v11 = v29;
			v18 = v29;
			// branch -> 0xb84b8
		}
	}
	// 0xb83c0
	v20 = 0x55ec * *(int32_t *)v10;
	v24 = v20 + v9;
	v15 = v9;
	v14 = v10;
	if (*(int32_t *)(v24 + 3392) != -1) {
		// 0xb83d8
		if (*(int32_t *)(v24 + 3620) != *(int32_t *)(v24 + 3624)) {
			// 0xb83e8
			v2 = 1;
			function_b8180(v9 + 3384 + v20, -2);
			v15 = g35;
			v14 = v1;
			// branch -> 0xb83fc
		} else {
			v15 = v9;
			v14 = v10;
		}
		// 0xb83fc
		v21 = 0x55ec * *(int32_t *)v14;
		v25 = v21 + v15;
		v17 = v15;
		v16 = v14;
		if (*(int32_t *)(v25 + 2656) != -1) {
			// 0xb8414
			if (*(int32_t *)(v25 + 2884) != *(int32_t *)(v25 + 2888)) {
				// 0xb8424
				v2 = 1;
				function_b8180(v15 + 2648 + v21, -3);
				v17 = g35;
				v16 = v1;
				// branch -> 0xb8438
			} else {
				v17 = v15;
				v16 = v14;
			}
		}
		// 0xb8438
		v22 = 0x55ec * *(int32_t *)v16;
		v26 = v22 + v17;
		if (*(int32_t *)(v26 + 3024) != -1) {
			// 0xb8450
			if (*(int32_t *)(v26 + 3252) != *(int32_t *)(v26 + 3256)) {
				// 0xb8460
				v2 = 1;
				function_b8180(v17 + 3016 + v22, -4);
				// branch -> 0xb8474
			}
		}
		// 0xb8474
		v11 = 0;
		v12 = 0;
		v18 = 0;
		// branch -> 0xb84b8
		while (true) {
			// 0xb84b8
			v23 = 0x55ec * *(int32_t *)v1;
			v19 = g35;
			if (v18 < *(int32_t *)(v19 + v23 + 0x4828)) {
				goto lab_0xb8480_4;
			}
			// 0xb84d0
			if (v2 == 0) {
				// 0xb84d8
				*(int32_t *)g36 = 0;
				g37 = *(int32_t *)(g23 - 0x5728);
				g38 = *(int32_t *)(v19 + v23 + 456);
				sprintf();
				function_b6e4c(0, 1, 1, g31, 3, 0);
				function_b6dfc(3);
				function_b6dfc(21);
				function_b6e4c(0, 22, 1, g30, 0, 1);
				result = function_b6e38(22, 6);
				// branch -> 0xb85d8
				// 0xb85d8
				return result;
			}
			// 0xb854c
			v13 = v19 + v23;
			*(int32_t *)g36 = 1;
			*(int32_t *)v3 = 0;
			g37 = *(int32_t *)(g23 - 0x572c);
			v27 = *(int32_t *)(v13 + 0x4828);
			*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v27;
			g38 = *(int32_t *)(v13 + 456);
			sprintf();
			function_b6e4c(0, 1, 1, g31, 3, 0);
			function_b6dfc(3);
			function_b6dfc(21);
			function_b7cb0(*(int32_t *)g32);
			function_b6e4c(0, 22, 1, g30, 0, 1);
			result = function_b6e38(22, 6);
			// branch -> 0xb85d8
			// 0xb85d8
			return result;
		}
	}
	// 0xb83fc
	v21 = 0x55ec * *(int32_t *)v14;
	v25 = v21 + v15;
	v17 = v15;
	if (*(int32_t *)(v25 + 2656) != -1) {
		// 0xb8414
		if (*(int32_t *)(v25 + 2884) != *(int32_t *)(v25 + 2888)) {
			// 0xb8424
			v2 = 1;
			function_b8180(v15 + 2648 + v21, -3);
			v17 = g35;
			v16 = v1;
			// branch -> 0xb8438
		} else {
			v17 = v15;
			v16 = v14;
		}
		// 0xb8438
		v22 = 0x55ec * *(int32_t *)v16;
		v26 = v22 + v17;
		if (*(int32_t *)(v26 + 3024) != -1) {
			// 0xb8450
			if (*(int32_t *)(v26 + 3252) != *(int32_t *)(v26 + 3256)) {
				// 0xb8460
				v2 = 1;
				function_b8180(v17 + 3016 + v22, -4);
				// branch -> 0xb8474
			}
		}
		// 0xb8474
		v11 = 0;
		v12 = 0;
		v18 = 0;
		// branch -> 0xb84b8
		while (true) {
			// 0xb84b8
			v23 = 0x55ec * *(int32_t *)v1;
			v19 = g35;
			if (v18 < *(int32_t *)(v19 + v23 + 0x4828)) {
				goto lab_0xb8480_4;
			}
			// 0xb84d0
			if (v2 == 0) {
				// 0xb84d8
				*(int32_t *)g36 = 0;
				g37 = *(int32_t *)(g23 - 0x5728);
				g38 = *(int32_t *)(v19 + v23 + 456);
				sprintf();
				function_b6e4c(0, 1, 1, g31, 3, 0);
				function_b6dfc(3);
				function_b6dfc(21);
				function_b6e4c(0, 22, 1, g30, 0, 1);
				result = function_b6e38(22, 6);
				// branch -> 0xb85d8
				// 0xb85d8
				return result;
			}
			// 0xb854c
			v13 = v19 + v23;
			*(int32_t *)g36 = 1;
			*(int32_t *)v3 = 0;
			g37 = *(int32_t *)(g23 - 0x572c);
			v27 = *(int32_t *)(v13 + 0x4828);
			*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v27;
			g38 = *(int32_t *)(v13 + 456);
			sprintf();
			function_b6e4c(0, 1, 1, g31, 3, 0);
			function_b6dfc(3);
			function_b6dfc(21);
			function_b7cb0(*(int32_t *)g32);
			function_b6e4c(0, 22, 1, g30, 0, 1);
			result = function_b6e38(22, 6);
			// branch -> 0xb85d8
			// 0xb85d8
			return result;
		}
	}
	// 0xb8438
	v22 = 0x55ec * *(int32_t *)v14;
	v26 = v22 + v17;
	if (*(int32_t *)(v26 + 3024) != -1) {
		// 0xb8450
		if (*(int32_t *)(v26 + 3252) != *(int32_t *)(v26 + 3256)) {
			// 0xb8460
			v2 = 1;
			function_b8180(v17 + 3016 + v22, -4);
			// branch -> 0xb8474
		}
		// 0xb8474
		v11 = 0;
		v12 = 0;
		v18 = 0;
		// branch -> 0xb84b8
		while (true) {
			// 0xb84b8
			v23 = 0x55ec * *(int32_t *)v1;
			v19 = g35;
			if (v18 < *(int32_t *)(v19 + v23 + 0x4828)) {
				goto lab_0xb8480_4;
			}
			// 0xb84d0
			if (v2 == 0) {
				// 0xb84d8
				*(int32_t *)g36 = 0;
				g37 = *(int32_t *)(g23 - 0x5728);
				g38 = *(int32_t *)(v19 + v23 + 456);
				sprintf();
				function_b6e4c(0, 1, 1, g31, 3, 0);
				function_b6dfc(3);
				function_b6dfc(21);
				function_b6e4c(0, 22, 1, g30, 0, 1);
				result = function_b6e38(22, 6);
				// branch -> 0xb85d8
				// 0xb85d8
				return result;
			}
			// 0xb854c
			v13 = v19 + v23;
			*(int32_t *)g36 = 1;
			*(int32_t *)v3 = 0;
			g37 = *(int32_t *)(g23 - 0x572c);
			v27 = *(int32_t *)(v13 + 0x4828);
			*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v27;
			g38 = *(int32_t *)(v13 + 456);
			sprintf();
			function_b6e4c(0, 1, 1, g31, 3, 0);
			function_b6dfc(3);
			function_b6dfc(21);
			function_b7cb0(*(int32_t *)g32);
			function_b6e4c(0, 22, 1, g30, 0, 1);
			result = function_b6e38(22, 6);
			// branch -> 0xb85d8
			// 0xb85d8
			return result;
		}
	}
	// 0xb8474
	v11 = 0;
	v12 = 0;
	v18 = 0;
	// branch -> 0xb84b8
	while (true) {
		// 0xb84b8
		v23 = 0x55ec * *(int32_t *)v1;
		v19 = g35;
		if (v18 < *(int32_t *)(v19 + v23 + 0x4828)) {
			goto lab_0xb8480_4;
		}
		// 0xb84d0
		if (v2 == 0) {
			// 0xb84d8
			*(int32_t *)g36 = 0;
			g37 = *(int32_t *)(g23 - 0x5728);
			g38 = *(int32_t *)(v19 + v23 + 456);
			sprintf();
			function_b6e4c(0, 1, 1, g31, 3, 0);
			function_b6dfc(3);
			function_b6dfc(21);
			function_b6e4c(0, 22, 1, g30, 0, 1);
			result = function_b6e38(22, 6);
			// branch -> 0xb85d8
			// 0xb85d8
			return result;
		}
		// 0xb854c
		v13 = v19 + v23;
		*(int32_t *)g36 = 1;
		*(int32_t *)v3 = 0;
		g37 = *(int32_t *)(g23 - 0x572c);
		v27 = *(int32_t *)(v13 + 0x4828);
		*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v27;
		g38 = *(int32_t *)(v13 + 456);
		sprintf();
		function_b6e4c(0, 1, 1, g31, 3, 0);
		function_b6dfc(3);
		function_b6dfc(21);
		function_b7cb0(*(int32_t *)g32);
		function_b6e4c(0, 22, 1, g30, 0, 1);
		result = function_b6e38(22, 6);
		// branch -> 0xb85d8
		// 0xb85d8
		return result;
	}
}

// Address range: 0xb85ec - 0xb86f4
int32_t function_b85ec(void)
{
	// 0xb85ec
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	function_b6e4c(0, 2, 1, *(int32_t *)(g23 - 0x5730), 3, 0);
	function_b6e4c(0, 9, 1, *(int32_t *)(g23 - 0x56f8), 3, 0);
	function_b6e4c(0, 12, 1, *(int32_t *)(g23 - 0x5734), 1, 1);
	function_b6e4c(0, 14, 1, *(int32_t *)(g23 - 0x5738), 0, 1);
	function_b6e4c(0, 16, 1, *(int32_t *)(g23 - 0x5708), 0, 1);
	function_b6e4c(0, 18, 1, *(int32_t *)(g23 - 0x573c), 0, 1);
	function_b6e4c(0, 20, 1, *(int32_t *)(g23 - 0x5740), 0, 1);
	function_b6dfc(5);
	int32_t result = *(int32_t *)(g23 - 0x6f10); // 0xb86d8
	*(int32_t *)result = 20;
	return result;
}

// Address range: 0xb86f4 - 0xb881c
int32_t function_b86f4(int32_t a1)
{
	int32_t v1 = g10; // 0xb86f8
	g35 = *(int32_t *)(g23 - 0x6f1c);
	g36 = *(int32_t *)(g23 - 0x6f00);
	function_b6c90(5, 21);
	*(int32_t *)*(int32_t *)(g23 - 0x6f18) = 5;
	int32_t v2 = 5;                                     // 0xb8790
	int32_t v3 = *(int32_t *)(g23 - 0x7178) + 368 * a1; // 0xb8794
	// branch -> 0xb8738
	while (true) {
		int32_t v4 = v2; // 0xb87d0
		int32_t v5 = v3; // 0xb87381
		if (*(int32_t *)(v3 + 8) != -1) {
			unsigned char v6 = *(char *)(v3 + 60); // 0xb8744
			char v7 = 0;
			if (v6 != 0) {
				// 0xb8754
				v7 = 1;
				// branch -> 0xb8758
			}
			if (*(int32_t *)(v3 + 356) == 0) {
				// 0xb8764
				v7 = 2;
				// branch -> 0xb8768
			}
			// 0xb8768
			if (v6 == 0) {
				// 0xb8790
				function_b6e4c(20, v2, 0, v3 + 61, v7, 1);
				// branch -> 0xb87ac
			} else {
				// 0xb8770
				function_b6e4c(20, v2, 0, v3 + 125, v7, 1);
				// branch -> 0xb87ac
			}
			// 0xb87ac
			g37 = *(int32_t *)(g33 + 200);
			function_b6e24(g32);
			function_b6eb0(g33, g32 + 1, g31);
			*(int32_t *)g35 = g32;
			v4 = g32;
			v5 = g33 + 368;
			// branch -> 0xb87d0
		}
		int32_t v8 = v4 + 4; // 0xb87d0
		if (v8 >= 20) {
			// break -> 0xb87dc
			break;
		}
		v2 = v8;
		v3 = v5;
		// continue -> 0xb8738
	}
	int32_t *v9 = (int32_t *)g36;                            // 0xb87dc
	int32_t v10 = *v9;                                       // 0xb87dc
	int32_t result = *(int32_t *)(g23 - 0x6efc) + 156 * v10; // 0xb87e8
	if (*(int32_t *)(result + 148) != 0) {
		// 0xb8808
		g10 = v1;
		return result;
	}
	// 0xb87f8
	if (v10 != 22) {
		// 0xb8800
		*v9 = *(int32_t *)g35;
		// branch -> 0xb8808
	}
	// 0xb8808
	g10 = v1;
	return result;
}

// Address range: 0xb881c - 0xb893c
int32_t function_b881c(void)
{
	// 0xb881c
	g36 = 0;
	g35 = *(int32_t *)(g23 - 0x6f10);
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 1;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 1;
	*(int32_t *)*(int32_t *)(g23 - 0x6f14) = g36;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xb8864
	*(int32_t *)*(int32_t *)(g23 - 0x6f20) = 20;
	g37 = *(int32_t *)(g23 - 0x5714);
	int32_t v2 = v1 + 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0xb8878
	g38 = *(int32_t *)(v2 + 456);
	sprintf();
	function_b6e4c(0, 1, 1, g32, 3, 0);
	function_b6dfc(3);
	function_b6dfc(21);
	function_b86f4(*(int32_t *)g33);
	function_b6e4c(0, 22, 1, *(int32_t *)(g23 - 0x5718), 0, 0);
	function_b6e38(22, 6);
	*(int32_t *)g35 = g36;
	int32_t v3 = *(int32_t *)(g23 - 0x7178); // 0xb88e4
	int32_t *v4 = (int32_t *)g35;            // 0xb890827
	int32_t result = *v4;                    // 0xb890828
	int32_t *v5;                             // 0xb8914
	if (*(int32_t *)(v3 + 8) == -1) {
		// 0xb8908
		*(int32_t *)g31 = result - 4;
		v5 = (int32_t *)g31;
		if (*v5 <= 0xffffffff) {
			// 0xb8920
			*v5 = 0;
			// branch -> 0xb8928
		}
		// 0xb8928
		return result;
	}
	*v4 = result + 1;
	int32_t v6 = v3 + 368;
	int32_t *v7 = (int32_t *)g35; // 0xb8908
	int32_t result2 = *v7;        // 0xb8908
	while (*(int32_t *)(v6 + 8) != -1) {
		// 0xb88ec
		*v7 = result2 + 1;
		v6 += 368;
		v7 = (int32_t *)g35;
		result2 = *v7;
		// continue -> 0xb88ec
	}
	// 0xb8908
	*(int32_t *)g31 = result2 - 4;
	v5 = (int32_t *)g31;
	if (*v5 <= 0xffffffff) {
		// 0xb8920
		*v5 = 0;
		// branch -> 0xb8928
	}
	// 0xb8928
	return result2;
}

// Address range: 0xb893c - 0xb89d4
int32_t function_b893c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0xb8940
	int32_t v2;
	if (a1 < 0) {
		// 0xb896c
		v2 = 368 * (-1 - a1) + 0x4854 + 0x55ec * *(int32_t *)v1;
		// branch -> 0xb898c
	} else {
		// 0xb8950
		v2 = 368 * a1 + 3752 + 0x55ec * *(int32_t *)v1;
		// branch -> 0xb898c
	}
	int32_t v3 = v2 + *(int32_t *)(g23 - 0x77a8); // 0xb89a8
	int32_t v4 = *(int32_t *)(v3 + 8);            // 0xb898c
	int32_t v5 = 0;                               // 0xb89cc4
	if (v4 == 0) {
		// 0xb8998
		v5 = 1;
		// branch -> 0xb899c
	}
	if (v4 == 10) {
		// 0xb89a4
		v5 = 1;
		// branch -> 0xb89a8
	}
	uint32_t v6 = *(int32_t *)(v3 + 360); // 0xb89a8
	int32_t result;                       // 0xb89cc
	if (v6 < 6) {
		// 0xb89c0
		result = v5;
		if (v6 == 33) {
			// 0xb89c8
			result = 0;
			// branch -> 0xb89cc
		}
		// 0xb89cc
		return result;
	}
	// 0xb89b4
	int32_t v7; // 0xb89cc2
	if (v6 <= 22) {
		// 0xb89bc
		v7 = 0;
		// branch -> 0xb89c0
	} else {
		v7 = v5;
	}
	// 0xb89c0
	result = v7;
	if (v6 == 33) {
		// 0xb89c8
		result = 0;
		// branch -> 0xb89cc
	}
	// 0xb89cc
	return result;
}

// Address range: 0xb89d4 - 0xb8de4
int32_t function_b89d4(void)
{
	int32_t v1 = 0;                          // r20
	int32_t v2 = *(int32_t *)(g23 - 0x6f10); // r28
	int32_t v3 = *(int32_t *)(g23 - 0x6f24); // r24
	int32_t v4 = 0;                          // r22
	int32_t v5 = *(int32_t *)(g23 - 0x6f28); // r23
	int32_t v6 = 0;                          // r19
	g29 = *(int32_t *)(g23 - 0x5718);
	g30 = *(int32_t *)(g23 - 0x76b4);
	int32_t v7 = *(int32_t *)(g23 - 0x6f14); // 0xb8a00
	int32_t v8 = *(int32_t *)(g23 - 0x77ac); // r29
	g35 = *(int32_t *)(g23 - 0x77a8);
	g36 = *(int32_t *)(g23 - 0x6ef8);
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 1;
	int32_t v9 = -1; // r0
	*(int32_t *)v2 = v1;
	*(int32_t *)(v3 + 8) = v9;
	*(int32_t *)(v3 + 376) = v9;
	*(int32_t *)(v3 + 744) = v9;
	*(int32_t *)(v3 + 1112) = v9;
	*(int32_t *)(v3 + 1480) = v9;
	*(int32_t *)(v3 + 1848) = v9;
	*(int32_t *)(v3 + 2216) = v9;
	*(int32_t *)(v3 + 2584) = v9;
	*(int32_t *)(v3 + 2952) = v9;
	*(int32_t *)(v3 + 3320) = v9;
	*(int32_t *)(v3 + 3688) = v9;
	*(int32_t *)(v3 + 4056) = v9;
	*(int32_t *)(v3 + 0x1148) = v9;
	*(int32_t *)(v3 + 0x12b8) = v9;
	*(int32_t *)(v3 + 0x1428) = v9;
	*(int32_t *)(v3 + 0x1598) = v9;
	*(int32_t *)(v3 + 0x1708) = v9;
	*(int32_t *)(v3 + 0x1878) = v9;
	*(int32_t *)(v3 + 0x19e8) = v9;
	*(int32_t *)(v3 + 0x1b58) = v9;
	*(int32_t *)(v3 + 0x1cc8) = v9;
	*(int32_t *)(v3 + 0x1e38) = v9;
	*(int32_t *)(v3 + 0x1fa8) = v9;
	*(int32_t *)(v3 + 0x2118) = v9;
	*(int32_t *)(v3 + 0x2288) = v9;
	*(int32_t *)(v3 + 0x23f8) = v9;
	*(int32_t *)(v3 + 0x2568) = v9;
	*(int32_t *)(v3 + 0x26d8) = v9;
	*(int32_t *)(v3 + 0x2848) = v9;
	*(int32_t *)(v3 + 0x29b8) = v9;
	*(int32_t *)(v3 + 0x2b28) = v9;
	*(int32_t *)(v3 + 0x2c98) = v9;
	*(int32_t *)(v3 + 0x2e08) = v9;
	*(int32_t *)(v3 + 0x2f78) = v9;
	*(int32_t *)(v3 + 0x30e8) = v9;
	*(int32_t *)(v3 + 0x3258) = v9;
	*(int32_t *)(v3 + 0x33c8) = v9;
	*(int32_t *)(v3 + 0x3538) = v9;
	*(int32_t *)(v3 + 0x36a8) = v9;
	*(int32_t *)(v3 + 0x3818) = v9;
	*(int32_t *)(v3 + 0x3988) = v9;
	*(int32_t *)(v3 + 0x3af8) = v9;
	*(int32_t *)(v3 + 0x3c68) = v9;
	*(int32_t *)(v3 + 0x3dd8) = v9;
	*(int32_t *)(v3 + 0x3f48) = v9;
	*(int32_t *)(v3 + 0x40b8) = v9;
	*(int32_t *)(v3 + 0x4228) = v9;
	*(int32_t *)(v3 + 0x4398) = v9;
	int32_t v10 = v1; // 0xb8aec
	// branch -> 0xb8bac
	while (true) {
		int32_t v11 = 0x55ec * *(int32_t *)v8 + 0x4828; // 0xb8bb4
		int32_t v12 = g35;                              // 0xb8bb8
		int32_t v13;                                    // ctr
		int32_t v14;                                    // r5
		if (v10 < *(int32_t *)(v12 + v11)) {
			// 0xb8aec
			if (function_b893c(v10) != 0) {
				int32_t v15 = *(int32_t *)v8; // 0xb8afc
				int32_t v16 = *(int32_t *)v2; // 0xb8b04
				v13 = 46;
				int32_t v17 = v3 + 368 * v16; // 0xb8b20
				int32_t v18 = v17;            // r7
				v6 = 1;
				int32_t v19 = v17 - 8;                            // 0xb8b38
				int32_t v20 = 0x55ec * v15 + 3752 + v4 - 8 + g35; // 0xb8b30
				// branch -> 0xb8b30
				while (true) {
					int32_t v21 = v20 + 8; // 0xb8b30
					v14 = v21;
					int32_t v22 = v19 + 8; // 0xb8b38
					*(int32_t *)v22 = *(int32_t *)v21;
					*(int32_t *)(v19 + 12) = *(int32_t *)(v20 + 12);
					int32_t v23 = v13 - 1; // 0xb8b40
					v13 = v23;
					if (v23 == 0) {
						int32_t v24 = v18; // 0xb8b44
						int32_t v25 = v24; // 0xb8b70
						if (*(char *)(v24 + 60) != 0) {
							// 0xb8b50
							if (*(int32_t *)(v24 + 56) != 0) {
								// 0xb8b5c
								*(int32_t *)(v24 + 196) = *(int32_t *)(v24 + 200);
								v25 = v18;
								// branch -> 0xb8b64
							} else {
								v25 = v24;
							}
						}
						int32_t v26 = v25 + 196;       // 0xb8b64
						int32_t v27 = v26;             // r4
						int32_t *v28 = (int32_t *)v26; // 0xb8b68
						*v28 = *v28 / 4;
						int32_t v29 = v18; // 0xb8b74
						int32_t v30 = v29; // 0xb8b90
						if (*(int32_t *)(v29 + 196) == 0) {
							// 0xb8b80
							*(int32_t *)v27 = 1;
							v30 = v18;
							// branch -> 0xb8b88
						}
						// 0xb8b88
						*(int32_t *)(v30 + 200) = *(int32_t *)v27;
						int32_t v31 = 0x1000000 * v1 / 0x1000000; // 0xb8b94
						*(char *)(v16 + v5) = (char)v31;
						int32_t *v32 = (int32_t *)v2; // 0xb8b98
						*v32 = *v32 + 1;
						// branch -> 0xb8ba4
						// 0xb8ba4
						v4 += 368;
						v1++;
						// branch -> 0xb8bac
						break;
					} else {
						// 0xb8b30
						v19 = v22;
						v20 = v14;
						// branch -> 0xb8b30
						continue;
					}
				}
			}
			// 0xb8ba4
			v4 += 368;
			int32_t v33 = v1 + 1; // 0xb8ba8
			v1 = v33;
			v10 = v33;
			// branch -> 0xb8bac
			continue;
		} else {
			// 0xb8bc4
			g24 = 0;
			v4 = 0;
			// branch -> 0xb8bcc
			while (true) {
				int32_t v34 = 0x55ec * *(int32_t *)v8; // 0xb8bd4
				int32_t result;
				int32_t v35; // 0xb8ca8
				int32_t v36; // 0xb8d60
				if (*(int32_t *)(v34 + 0x485c + v12) != -1) {
					int32_t v37 = -1; // 0xb8bec
					g25 = v37;
					if (function_b893c(v37) != 0) {
						int32_t v38 = *(int32_t *)v8; // 0xb8c00
						int32_t v39 = *(int32_t *)v2; // 0xb8c08
						v13 = 46;
						int32_t v40 = v3 + 368 * v39; // 0xb8c24
						int32_t v41 = v40;            // r3
						v6 = 1;
						int32_t v42 = v40 - 8;                              // 0xb8c3c
						int32_t v43 = 0x55ec * v38 + 0x4854 + v4 - 8 + g35; // 0xb8c34
						// branch -> 0xb8c34
						while (true) {
							int32_t v44 = v43 + 8; // 0xb8c34
							int32_t v45 = v42 + 8; // 0xb8c3c
							*(int32_t *)v45 = *(int32_t *)v44;
							*(int32_t *)(v42 + 12) = *(int32_t *)(v43 + 12);
							int32_t v46 = v13 - 1; // 0xb8c44
							v13 = v46;
							if (v46 == 0) {
								// 0xb8c48
								if (*(char *)(v41 + 60) != 0) {
									// 0xb8c54
									if (*(int32_t *)(v41 + 56) != 0) {
										// 0xb8c60
										*(int32_t *)(v41 + 196) = *(int32_t *)(v41 + 200);
										// branch -> 0xb8c68
									}
								}
								int32_t v47 = v41 + 196; // 0xb8c68
								v14 = v47;
								int32_t *v48 = (int32_t *)v47; // 0xb8c6c
								*v48 = *v48 / 4;
								if (*(int32_t *)(v41 + 196) == 0) {
									// 0xb8c84
									*(int32_t *)v14 = 1;
									// branch -> 0xb8c8c
								}
								// 0xb8c8c
								*(int32_t *)(v41 + 200) = *(int32_t *)v14;
								*(char *)(v39 + v5) = (char)(0x1000000 * g25 / 0x1000000);
								int32_t *v49 = (int32_t *)v2; // 0xb8c9c
								*v49 = *v49 + 1;
								// branch -> 0xb8ca8
								// 0xb8ca8
								v35 = g24 + 1;
								g24 = v35;
								v4 += 368;
								if (v35 < 8) {
								lab_0xb8ca8:
									// 0xb8ca8
									// branch -> 0xb8bcc
									break;
								}
								// 0xb8cb8
								if (v6 == 0) {
									// 0xb8cc0
									g37 = *(int32_t *)(g23 - 0x5720);
									*(int32_t *)g36 = 0;
									g38 = *(int32_t *)(g35 + 0x55ec * *(int32_t *)v8 + 456);
									sprintf();
									function_b6e4c(0, 1, 1, g30, 3, 0);
									function_b6dfc(3);
									function_b6dfc(21);
									function_b6e4c(0, 22, 1, g29, 0, 1);
									result = function_b6e38(22, 6);
									// branch -> 0xb8dd0
									// 0xb8dd0
									return result;
								}
								// 0xb8d3c
								*(int32_t *)g36 = 1;
								g37 = *(int32_t *)(g23 - 0x5724);
								*(int32_t *)v7 = 0;
								v36 = g35 + 0x55ec * *(int32_t *)v8;
								*(int32_t *)*(int32_t *)(g23 - 0x6f20) = *(int32_t *)(v36 + 0x4828);
								g38 = *(int32_t *)(v36 + 456);
								sprintf();
								function_b6e4c(0, 1, 1, g30, 3, 0);
								function_b6dfc(3);
								function_b6dfc(21);
								function_b7cb0(*(int32_t *)g31);
								function_b6e4c(0, 22, 1, g29, 0, 1);
								result = function_b6e38(22, 6);
								// branch -> 0xb8dd0
								// 0xb8dd0
								return result;
							}
							// 0xb8c34
							v42 = v45;
							v43 = v44;
							// branch -> 0xb8c34
						}
					}
				}
				// 0xb8ca8
				v35 = g24 + 1;
				g24 = v35;
				v4 += 368;
				if (v35 < 8) {
					goto lab_0xb8ca8;
				}
				// 0xb8cb8
				if (v6 == 0) {
					// 0xb8cc0
					g37 = *(int32_t *)(g23 - 0x5720);
					*(int32_t *)g36 = 0;
					g38 = *(int32_t *)(g35 + 0x55ec * *(int32_t *)v8 + 456);
					sprintf();
					function_b6e4c(0, 1, 1, g30, 3, 0);
					function_b6dfc(3);
					function_b6dfc(21);
					function_b6e4c(0, 22, 1, g29, 0, 1);
					result = function_b6e38(22, 6);
					// branch -> 0xb8dd0
					// 0xb8dd0
					return result;
				}
				// 0xb8d3c
				*(int32_t *)g36 = 1;
				g37 = *(int32_t *)(g23 - 0x5724);
				*(int32_t *)v7 = 0;
				v36 = g35 + 0x55ec * *(int32_t *)v8;
				*(int32_t *)*(int32_t *)(g23 - 0x6f20) = *(int32_t *)(v36 + 0x4828);
				g38 = *(int32_t *)(v36 + 456);
				sprintf();
				function_b6e4c(0, 1, 1, g30, 3, 0);
				function_b6dfc(3);
				function_b6dfc(21);
				function_b7cb0(*(int32_t *)g31);
				function_b6e4c(0, 22, 1, g29, 0, 1);
				result = function_b6e38(22, 6);
				// branch -> 0xb8dd0
				// 0xb8dd0
				return result;
			}
		}
	}
}

// Address range: 0xb8de4 - 0xb8e28
int32_t function_b8de4(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8);                                      // 0xb8dec
	int32_t v2 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v1 + 368 * a1; // 0xb8e00
	if (*(int32_t *)(v2 + 3760) != 10) {
		// bb
		return 0;
	}
	// 0xb8e10
	if (*(int32_t *)(v2 + 3980) != *(int32_t *)(v2 + 3984)) {
		// 0xb8e20
		return 1;
	}
	// bb
	return 0;
}

// Address range: 0xb8e28 - 0xb8f14
int32_t function_b8e28(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8)
{
	int32_t v1 = 46;                             // ctr
	int32_t v2 = *(int32_t *)(g23 - 0x6f24);     // 0xb8e34
	int32_t result = *(int32_t *)(g23 - 0x6f10); // 0xb8e3c
	int32_t v3 = *(int32_t *)result;             // 0xb8e64
	int32_t v4 = 368 * v3;                       // 0xb8e68
	int32_t v5 = v2 - 8 + v4;                    // 0xb8e7c
	int32_t v6;                                  // bp+16
	int32_t v7 = &v6;                            // 0xb8e74
	// branch -> 0xb8e74
	while (true) {
		int32_t v8 = v7 + 8; // 0xb8e74
		int32_t v9 = v5 + 8; // 0xb8e7c
		*(int32_t *)v9 = *(int32_t *)v8;
		*(int32_t *)(v5 + 12) = *(int32_t *)(v7 + 12);
		int32_t v10 = v1 - 1; // 0xb8e84
		v1 = v10;
		if (v10 == 0) {
			int32_t v11 = v4 + v2;                 // 0xb8e8c
			int32_t *v12 = (int32_t *)(v11 + 196); // 0xb8e9c
			*v12 = *(int32_t *)(*(int32_t *)(g23 - 0x769c) + 56 * a8 + 52) + *v12;
			int32_t v13 = *(int32_t *)(v11 + 232);                                                  // 0xb8ec0
			int32_t v14 = *(int32_t *)(v11 + 228);                                                  // 0xb8ec4
			int32_t *v15 = (int32_t *)(v11 + 196);                                                  // 0xb8ec8
			int32_t v16 = *v15;                                                                     // 0xb8ec8
			uint64_t v17 = (int64_t)0x51eb851f * (int64_t)(100 * (v13 - v14) / v13 * v16);          // 0xb8edc
			int32_t v18 = (int32_t)(v17 / 0x100000000) >> 31;                                       // 0xb8ee0
			uint32_t v19 = (v18 & -0x8000000 | (int32_t)(v17 / 0x2000000000)) + (int32_t)(v18 < 0); // 0xb8ee8
			*v15 = v19 / 2 | v19 & -0x80000000;
			*(int32_t *)(v11 + 200) = *(int32_t *)(v11 + 196);
			*(char *)(v3 + *(int32_t *)(g23 - 0x6f28)) = (char)0;
			int32_t *v20 = (int32_t *)result; // 0xb8f00
			*v20 = *v20 + 1;
			return result;
		}
		// 0xb8e74
		v5 = v9;
		v7 = v8;
		// branch -> 0xb8e74
	}
}

// Address range: 0xb8f14 - 0xb9258
int32_t function_b8f14(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // r29
	int32_t v2 = 0;                          // r23
	g35 = *(int32_t *)(g23 - 0x77a8);
	g30 = *(int32_t *)(g23 - 0x5718);
	g31 = *(int32_t *)(g23 - 0x76b4);
	int32_t v3 = *(int32_t *)(g23 - 0x6f14); // 0xb8f3c
	g36 = *(int32_t *)(g23 - 0x6ef8);
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 1;
	int32_t v4 = -1;                         // r0
	int32_t v5 = *(int32_t *)(g23 - 0x6f24); // r5
	*(int32_t *)*(int32_t *)(g23 - 0x6f10) = 0;
	*(int32_t *)(v5 + 8) = v4;
	*(int32_t *)(v5 + 376) = v4;
	*(int32_t *)(v5 + 744) = v4;
	*(int32_t *)(v5 + 1112) = v4;
	*(int32_t *)(v5 + 1480) = v4;
	*(int32_t *)(v5 + 1848) = v4;
	*(int32_t *)(v5 + 2216) = v4;
	*(int32_t *)(v5 + 2584) = v4;
	*(int32_t *)(v5 + 2952) = v4;
	*(int32_t *)(v5 + 3320) = v4;
	*(int32_t *)(v5 + 3688) = v4;
	*(int32_t *)(v5 + 4056) = v4;
	*(int32_t *)(v5 + 0x1148) = v4;
	*(int32_t *)(v5 + 0x12b8) = v4;
	*(int32_t *)(v5 + 0x1428) = v4;
	*(int32_t *)(v5 + 0x1598) = v4;
	*(int32_t *)(v5 + 0x1708) = v4;
	*(int32_t *)(v5 + 0x1878) = v4;
	*(int32_t *)(v5 + 0x19e8) = v4;
	*(int32_t *)(v5 + 0x1b58) = v4;
	*(int32_t *)(v5 + 0x1cc8) = v4;
	*(int32_t *)(v5 + 0x1e38) = v4;
	*(int32_t *)(v5 + 0x1fa8) = v4;
	*(int32_t *)(v5 + 0x2118) = v4;
	*(int32_t *)(v5 + 0x2288) = v4;
	*(int32_t *)(v5 + 0x23f8) = v4;
	*(int32_t *)(v5 + 0x2568) = v4;
	*(int32_t *)(v5 + 0x26d8) = v4;
	*(int32_t *)(v5 + 0x2848) = v4;
	*(int32_t *)(v5 + 0x29b8) = v4;
	*(int32_t *)(v5 + 0x2b28) = v4;
	*(int32_t *)(v5 + 0x2c98) = v4;
	*(int32_t *)(v5 + 0x2e08) = v4;
	*(int32_t *)(v5 + 0x2f78) = v4;
	*(int32_t *)(v5 + 0x30e8) = v4;
	*(int32_t *)(v5 + 0x3258) = v4;
	*(int32_t *)(v5 + 0x33c8) = v4;
	*(int32_t *)(v5 + 0x3538) = v4;
	*(int32_t *)(v5 + 0x36a8) = v4;
	*(int32_t *)(v5 + 0x3818) = v4;
	*(int32_t *)(v5 + 0x3988) = v4;
	*(int32_t *)(v5 + 0x3af8) = v4;
	*(int32_t *)(v5 + 0x3c68) = v4;
	*(int32_t *)(v5 + 0x3dd8) = v4;
	*(int32_t *)(v5 + 0x3f48) = v4;
	*(int32_t *)(v5 + 0x40b8) = v4;
	*(int32_t *)(v5 + 0x4228) = v4;
	*(int32_t *)(v5 + 0x4398) = v4;
	int32_t v6 = g35 + 0x55ec * *(int32_t *)v1; // 0xb9028
	int32_t v7;                                 // r24
	int32_t v8;                                 // r25
	int32_t v9;                                 // r6
	int32_t result;
	int32_t v10; // 0xb90a8
	int32_t v11; // 0xb9130
	int32_t v12; // 0xb9128
	int32_t v13; // 0xb91d8
	if (*(int32_t *)(v6 + 2656) == 10) {
		// 0xb9038
		if (*(int32_t *)(v6 + 2876) != *(int32_t *)(v6 + 2880)) {
			int32_t v14 = 46; // ctr
			v2 = 1;
			int32_t v15;             // bp-432
			int32_t v16 = &v15;      // 0xb9064
			int32_t v17 = v6 + 2640; // 0xb905c
			// branch -> 0xb905c
			while (true) {
				int32_t v18 = v17 + 8; // 0xb905c
				int32_t v19 = v16 + 8; // 0xb9064
				*(int32_t *)v19 = *(int32_t *)v18;
				*(int32_t *)(v16 + 12) = *(int32_t *)(v17 + 12);
				int32_t v20 = v14 - 1; // 0xb906c
				v14 = v20;
				if (v20 == 0) {
					// 0xb9070
					int32_t v21;
					int32_t v22;
					int32_t v23;
					int32_t v24;
					int32_t v25;
					int32_t v26;
					int32_t v27;
					function_b8e28(v27, v26, v25, v24, v23, v22, v21, -1);
					// branch -> 0xb909c
					// 0xb909c
					v7 = 0;
					v8 = 0;
					v10 = 0;
					// branch -> 0xb9124
					while (true) {
						// 0xb9124
						v12 = 0x55ec * *(int32_t *)v1;
						v11 = g35;
						if (v10 >= *(int32_t *)(v11 + v12 + 0x4828)) {
							// 0xb913c
							if (v2 == 0) {
								// 0xb9144
								*(int32_t *)g36 = 0;
								g37 = *(int32_t *)(g23 - 0x5744);
								g38 = *(int32_t *)(v11 + v12 + 456);
								sprintf();
								function_b6e4c(0, 1, 1, g31, 3, 0);
								function_b6dfc(3);
								function_b6dfc(21);
								function_b6e4c(0, 22, 1, g30, 0, 1);
								result = function_b6e38(22, 6);
								// branch -> 0xb9244
								// 0xb9244
								return result;
							}
							// 0xb91b8
							v9 = v11 + v12;
							*(int32_t *)g36 = 1;
							*(int32_t *)v3 = 0;
							g37 = *(int32_t *)(g23 - 0x5748);
							v13 = *(int32_t *)(v9 + 0x4828);
							*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v13;
							g38 = *(int32_t *)(v9 + 456);
							sprintf();
							function_b6e4c(0, 1, 1, g31, 3, 0);
							function_b6dfc(3);
							function_b6dfc(21);
							function_b7cb0(*(int32_t *)g32);
							function_b6e4c(0, 22, 1, g30, 0, 1);
							result = function_b6e38(22, 6);
							// branch -> 0xb9244
							// 0xb9244
							return result;
						}
					lab_0xb90a8_2:
						// 0xb90a8
						if (function_b8de4(v10) != 0) {
							// 0xb90b8
							v14 = 46;
							v2 = 1;
							int32_t v28 = &v15;                                      // 0xb90e8
							int32_t v29 = v8 + 0x55ec * *(int32_t *)v1 + 3744 + g35; // 0xb90e0
							// branch -> 0xb90e0
							while (true) {
								int32_t v30 = v29 + 8; // 0xb90e0
								int32_t v31 = v30;     // r4
								int32_t v32 = v28 + 8; // 0xb90e8
								*(int32_t *)v32 = *(int32_t *)v30;
								v5 = v32;
								*(int32_t *)(v28 + 12) = *(int32_t *)(v29 + 12);
								int32_t v33 = v14 - 1; // 0xb90f0
								v14 = v33;
								if (v33 == 0) {
									// 0xb90f4
									function_b8e28(v27, v26, v25, v24, v23, v22, v21, v7);
									// branch -> 0xb911c
									// 0xb911c
									v8 += 368;
									v7++;
									// branch -> 0xb9124
									break;
								} else {
									// 0xb90e0
									v28 = v5;
									v29 = v31;
									// branch -> 0xb90e0
									continue;
								}
							}
						}
						// 0xb911c
						v8 += 368;
						int32_t v34 = v7 + 1; // 0xb9120
						v7 = v34;
						v10 = v34;
						// branch -> 0xb9124
					}
				} else {
					// 0xb905c
					v16 = v19;
					v17 = v18;
					// branch -> 0xb905c
					continue;
				}
			}
		}
		// 0xb909c
		v7 = 0;
		v8 = 0;
		v10 = 0;
		// branch -> 0xb9124
		while (true) {
			// 0xb9124
			v12 = 0x55ec * *(int32_t *)v1;
			v11 = g35;
			if (v10 < *(int32_t *)(v11 + v12 + 0x4828)) {
				goto lab_0xb90a8_2;
			}
			// 0xb913c
			if (v2 == 0) {
				// 0xb9144
				*(int32_t *)g36 = 0;
				g37 = *(int32_t *)(g23 - 0x5744);
				g38 = *(int32_t *)(v11 + v12 + 456);
				sprintf();
				function_b6e4c(0, 1, 1, g31, 3, 0);
				function_b6dfc(3);
				function_b6dfc(21);
				function_b6e4c(0, 22, 1, g30, 0, 1);
				result = function_b6e38(22, 6);
				// branch -> 0xb9244
				// 0xb9244
				return result;
			}
			// 0xb91b8
			v9 = v11 + v12;
			*(int32_t *)g36 = 1;
			*(int32_t *)v3 = 0;
			g37 = *(int32_t *)(g23 - 0x5748);
			v13 = *(int32_t *)(v9 + 0x4828);
			*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v13;
			g38 = *(int32_t *)(v9 + 456);
			sprintf();
			function_b6e4c(0, 1, 1, g31, 3, 0);
			function_b6dfc(3);
			function_b6dfc(21);
			function_b7cb0(*(int32_t *)g32);
			function_b6e4c(0, 22, 1, g30, 0, 1);
			result = function_b6e38(22, 6);
			// branch -> 0xb9244
			// 0xb9244
			return result;
		}
	}
	// 0xb909c
	v7 = 0;
	v8 = 0;
	v10 = 0;
	// branch -> 0xb9124
	while (true) {
		// 0xb9124
		v12 = 0x55ec * *(int32_t *)v1;
		v11 = g35;
		if (v10 < *(int32_t *)(v11 + v12 + 0x4828)) {
			goto lab_0xb90a8_2;
		}
		// 0xb913c
		if (v2 == 0) {
			// 0xb9144
			*(int32_t *)g36 = 0;
			g37 = *(int32_t *)(g23 - 0x5744);
			g38 = *(int32_t *)(v11 + v12 + 456);
			sprintf();
			function_b6e4c(0, 1, 1, g31, 3, 0);
			function_b6dfc(3);
			function_b6dfc(21);
			function_b6e4c(0, 22, 1, g30, 0, 1);
			result = function_b6e38(22, 6);
			// branch -> 0xb9244
			// 0xb9244
			return result;
		}
		// 0xb91b8
		v9 = v11 + v12;
		*(int32_t *)g36 = 1;
		*(int32_t *)v3 = 0;
		g37 = *(int32_t *)(g23 - 0x5748);
		v13 = *(int32_t *)(v9 + 0x4828);
		*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v13;
		g38 = *(int32_t *)(v9 + 456);
		sprintf();
		function_b6e4c(0, 1, 1, g31, 3, 0);
		function_b6dfc(3);
		function_b6dfc(21);
		function_b7cb0(*(int32_t *)g32);
		function_b6e4c(0, 22, 1, g30, 0, 1);
		result = function_b6e38(22, 6);
		// branch -> 0xb9244
		// 0xb9244
		return result;
	}
}

// Address range: 0xb9258 - 0xb92c4
int32_t function_b9258(void)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6f2c); // 0xb9268
	function_ba888((char)(0x1000000 * v1 / 0x1000000));
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 1;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	function_b6c90(5, 23);
	return function_b6e4c(0, 14, 1, *(int32_t *)(g23 - 0x574c), 0, 1);
}

// Address range: 0xb92c4 - 0xb9324
int32_t function_b92c4(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f2c); // 0xb92c8
	function_ba888((char)(0x1000000 * *(int32_t *)v1 / 0x1000000));
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	function_b6c90(5, 23);
	return function_b6e4c(0, 14, 1, *(int32_t *)(g23 - 0x5750), 0, 1);
}

// Address range: 0xb9324 - 0xb956c
int32_t function_b9324(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f2c); // 0xb932c
	g33 = *(int32_t *)(g23 - 0x76b4);
	g35 = *(int32_t *)(g23 - 0x77ac);
	g36 = *(int32_t *)(g23 - 0x77a8);
	function_ba888((char)(0x1000000 * *(int32_t *)v1 / 0x1000000));
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	function_b6c90(5, 23);
	int32_t v2 = 0x55ec * *(int32_t *)g35; // 0xb9370
	int32_t v3 = g36;                      // 0xb9374
	int32_t v4 = v3 + v2;                  // 0xb9374
	char v5 = *(char *)(v4 + 0x5410);      // 0xb9378
	char v6 = 0;
	if (v5 != 0) {
		// 0xb9384
		v6 = 1;
		// branch -> 0xb9388
	}
	if (*(int32_t *)(v4 + 0x5538) == 0) {
		// 0xb9398
		v6 = 2;
		// branch -> 0xb939c
	}
	int32_t v7 = *(int32_t *)v1; // 0xb93b0
	int32_t v8 = v5 != 0;
	if (v7 == 17) {
		// 0xb93bc
		v8 = 0;
		// branch -> 0xb93c0
	}
	int32_t v9 = v8; // 0xb9408
	if (v5 != 0) {
		// 0xb93c8
		if (*(int32_t *)(v4 + 0x540c) == 0) {
			int32_t v10 = v8;
			if (v7 == 3) {
				// 0xb93e0
				v10 = 0;
				// branch -> 0xb93e4
			}
			if (v7 == 7) {
				// 0xb93ec
				v10 = 0;
				// branch -> 0xb93f0
			}
			if (v7 == 4) {
				// 0xb93f8
				v10 = 0;
				// branch -> 0xb93fc
			}
			// 0xb93fc
			if (v7 == 8) {
				// 0xb9404
				v9 = 0;
				// branch -> 0xb9408
			} else {
				v9 = v10;
			}
		} else {
			v9 = v8;
		}
	}
	// 0xb9408
	if (v9 == 0) {
		// 0xb9434
		function_b6e4c(20, 8, 0, v2 + 0x5411 + v3, v6, 0);
		// branch -> 0xb9454
	} else {
		// 0xb9410
		function_b6e4c(20, 8, 0, v2 + 0x5451 + v3, v6, 0);
		// branch -> 0xb9454
	}
	// 0xb9454
	g37 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 0x549c);
	function_b6e24(8);
	function_b6eb0(0x55ec * *(int32_t *)g35 + 0x53d4 + g36, 9, g31);
	uint32_t v11 = *(int32_t *)g32; // 0xb9488
	if (v11 <= 18) {
		// 0xb9494
		return *(int32_t *)(*(int32_t *)(g23 - 0x5774) + 4 * v11);
	}
	// 0xb9504
	function_b6e4c(0, 15, 1, g33, 0, 0);
	function_b6e4c(0, 18, 1, *(int32_t *)(g23 - 0x576c), 0, 1);
	return function_b6e4c(0, 20, 1, *(int32_t *)(g23 - 0x5770), 0, 1);
}

// Address range: 0xb956c - 0xb96cc
int32_t function_b956c(void)
{
	// 0xb956c
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	function_b6e4c(0, 2, 1, *(int32_t *)(g23 - 0x5778), 3, 0);
	function_b6dfc(5);
	int32_t v1 = g36; // 0xb967c
	int32_t result;
	if (*(int32_t *)(*(int32_t *)(g23 - 0x71bc) + 8) == -1) {
		// 0xb967c
		function_b6e4c(0, 12, 1, v1, 1, 1);
		result = function_b6e4c(0, 18, 1, g35, 0, 1);
		// branch -> 0xb96b4
	} else {
		// 0xb95d0
		function_b6e4c(0, 8, 1, v1, 1, 1);
		function_b6e4c(0, 12, 1, *(int32_t *)(g23 - 0x5780), 3, 0);
		function_b6e4c(0, 14, 1, *(int32_t *)(g23 - 0x5784), 3, 0);
		function_b6e4c(0, 16, 1, *(int32_t *)(g23 - 0x5788), 3, 0);
		function_b6e4c(0, 18, 1, *(int32_t *)(g23 - 0x578c), 0, 1);
		result = function_b6e4c(0, 20, 1, g35, 0, 1);
		// branch -> 0xb96b4
	}
	// 0xb96b4
	return result;
}

// Address range: 0xb96cc - 0xb981c
int32_t function_b96cc(void)
{
	// 0xb96cc
	g35 = *(int32_t *)(g23 - 0x76b4);
	g36 = *(int32_t *)(g23 - 0x71bc);
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 1;
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0xb9700
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xb9708
	g37 = *(int32_t *)(g23 - 0x5794);
	g38 = *(int32_t *)(0x55ec * *(int32_t *)v1 + v2 + 456);
	sprintf();
	function_b6e4c(0, 1, 1, g35, 3, 0);
	function_b6dfc(3);
	function_b6dfc(21);
	int32_t v3 = g36;             // 0xb9750
	char v4 = *(char *)(v3 + 60); // 0xb9750
	char v5 = 0;
	if (v4 != 0) {
		// 0xb9760
		v5 = 1;
		// branch -> 0xb9764
	}
	if (*(int32_t *)(v3 + 356) == 0) {
		// 0xb9770
		v5 = 2;
		// branch -> 0xb9774
	}
	// 0xb9774
	if (v4 == 0) {
		// 0xb979c
		function_b6e4c(20, 10, 0, v3 + 61, v5, 1);
		// branch -> 0xb97b8
	} else {
		// 0xb977c
		function_b6e4c(20, 10, 0, v3 + 125, v5, 1);
		// branch -> 0xb97b8
	}
	uint32_t v6 = *(int32_t *)(g36 + 200); // 0xb97b8
	g37 = (v6 / 2 | v6 & -0x80000000) + v6;
	function_b6e24(10);
	function_b6eb0(g36, 11, 0x1000000 * g35 / 0x1000000);
	function_b6e4c(0, 22, 1, *(int32_t *)(g23 - 0x5798), 0, 1);
	return function_b6e38(22, 6);
}

// Address range: 0xb981c - 0xb9924
int32_t function_b981c(void)
{
	// 0xb981c
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	function_b6e4c(0, 1, 1, *(int32_t *)(g23 - 0x56f0), 3, 0);
	function_b6e4c(0, 3, 1, *(int32_t *)(g23 - 0x579c), 3, 0);
	function_b6e4c(0, 9, 1, *(int32_t *)(g23 - 0x56f8), 3, 0);
	function_b6e4c(0, 12, 1, *(int32_t *)(g23 - 0x57a0), 1, 1);
	function_b6e4c(0, 14, 1, *(int32_t *)(g23 - 0x57a4), 0, 1);
	function_b6e4c(0, 16, 1, *(int32_t *)(g23 - 0x5738), 0, 1);
	function_b6e4c(0, 18, 1, *(int32_t *)(g23 - 0x57a8), 0, 1);
	function_b6dfc(5);
	int32_t result = *(int32_t *)(g23 - 0x6f10); // 0xb9908
	*(int32_t *)result = 20;
	return result;
}

// Address range: 0xb9924 - 0xb9a14
int32_t function_b9924(int32_t a1)
{
	int32_t v1 = g10; // 0xb9928
	g35 = *(int32_t *)(g23 - 0x6f1c);
	g36 = *(int32_t *)(g23 - 0x6f00);
	function_b6c90(5, 21);
	*(int32_t *)*(int32_t *)(g23 - 0x6f18) = 5;
	int32_t v2 = 5;                                     // 0xb9988
	int32_t v3 = *(int32_t *)(g23 - 0x71c0) + 368 * a1; // 0xb998c
	// branch -> 0xb9968
	while (true) {
		int32_t v4 = v2; // 0xb99c8
		int32_t v5 = v3; // 0xb99681
		if (*(int32_t *)(v3 + 8) != -1) {
			char v6 = 0;
			if (*(int32_t *)(v3 + 356) == 0) {
				// 0xb9984
				v6 = 2;
				// branch -> 0xb9988
			}
			// 0xb9988
			function_b6e4c(20, v2, 0, v3 + 61, v6, 1);
			g37 = *(int32_t *)(g33 + 200);
			function_b6e24(g32);
			function_b6eb0(g33, g32 + 1, g31);
			*(int32_t *)g35 = g32;
			v4 = g32;
			v5 = g33 + 368;
			// branch -> 0xb99c8
		}
		int32_t v7 = v4 + 4; // 0xb99c8
		if (v7 >= 20) {
			// break -> 0xb99d4
			break;
		}
		v2 = v7;
		v3 = v5;
		// continue -> 0xb9968
	}
	int32_t *v8 = (int32_t *)g36;                           // 0xb99d4
	int32_t v9 = *v8;                                       // 0xb99d4
	int32_t result = *(int32_t *)(g23 - 0x6efc) + 156 * v9; // 0xb99e0
	if (*(int32_t *)(result + 148) != 0) {
		// 0xb9a00
		g10 = v1;
		return result;
	}
	// 0xb99f0
	if (v9 != 22) {
		// 0xb99f8
		*v8 = *(int32_t *)g35;
		// branch -> 0xb9a00
	}
	// 0xb9a00
	g10 = v1;
	return result;
}

// Address range: 0xb9a14 - 0xb9b2c
int32_t function_b9a14(void)
{
	// 0xb9a14
	g36 = 0;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xb9a2c
	g35 = *(int32_t *)(g23 - 0x6f10);
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 1;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 1;
	*(int32_t *)*(int32_t *)(g23 - 0x6f14) = g36;
	g37 = *(int32_t *)(g23 - 0x5714);
	int32_t v2 = v1 + 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0xb9a68
	g38 = *(int32_t *)(v2 + 456);
	sprintf();
	function_b6e4c(0, 1, 1, g32, 3, 0);
	function_b6dfc(3);
	function_b6dfc(21);
	function_b9924(*(int32_t *)g33);
	function_b6e4c(0, 22, 1, *(int32_t *)(g23 - 0x5718), 0, 0);
	function_b6e38(22, 6);
	*(int32_t *)g35 = g36;
	int32_t v3 = *(int32_t *)(g23 - 0x71c0); // 0xb9ad4
	int32_t *v4 = (int32_t *)g35;            // 0xb9af827
	int32_t result = *v4;                    // 0xb9af828
	int32_t *v5;                             // 0xb9b04
	if (*(int32_t *)(v3 + 8) == -1) {
		// 0xb9af8
		*(int32_t *)g31 = result - 4;
		v5 = (int32_t *)g31;
		if (*v5 <= 0xffffffff) {
			// 0xb9b10
			*v5 = 0;
			// branch -> 0xb9b18
		}
		// 0xb9b18
		return result;
	}
	*v4 = result + 1;
	int32_t v6 = v3 + 368;
	int32_t *v7 = (int32_t *)g35; // 0xb9af8
	int32_t result2 = *v7;        // 0xb9af8
	while (*(int32_t *)(v6 + 8) != -1) {
		// 0xb9adc
		*v7 = result2 + 1;
		v6 += 368;
		v7 = (int32_t *)g35;
		result2 = *v7;
		// continue -> 0xb9adc
	}
	// 0xb9af8
	*(int32_t *)g31 = result2 - 4;
	v5 = (int32_t *)g31;
	if (*v5 <= 0xffffffff) {
		// 0xb9b10
		*v5 = 0;
		// branch -> 0xb9b18
	}
	// 0xb9b18
	return result2;
}

// Address range: 0xb9b2c - 0xb9bf0
int32_t function_b9b2c(void)
{
	// 0xb9b2c
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	function_b6e4c(0, 2, 1, *(int32_t *)(g23 - 0x57ac), 3, 0);
	function_b6e4c(0, 9, 1, *(int32_t *)(g23 - 0x56f8), 3, 0);
	function_b6e4c(0, 12, 1, *(int32_t *)(g23 - 0x57b0), 1, 1);
	function_b6e4c(0, 14, 1, *(int32_t *)(g23 - 0x57b4), 0, 1);
	function_b6e4c(0, 18, 1, *(int32_t *)(g23 - 0x5790), 0, 1);
	return function_b6dfc(5);
}

// Address range: 0xb9bf0 - 0xb9c34
int32_t function_b9bf0(int32_t a1)
{
	// 0xb9bf0
	if (*(int32_t *)(a1 + 8) == -1 || *(char *)(a1 + 60) == 0) {
		// 0xb9bfc
		return 0;
	}
	// 0xb9c18
	if (*(int32_t *)(a1 + 56) == 0) {
		// 0xb9c2c
		return 1;
	}
	// 0xb9c24
	return 0;
}

// Address range: 0xb9c34 - 0xb9cc4
int32_t function_b9c34(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f10); // 0xb9c3c
	int32_t v2 = 46;                         // ctr
	int32_t v3 = *(int32_t *)(g23 - 0x6f24); // 0xb9c48
	int32_t v4 = *(int32_t *)v1;             // 0xb9c70
	int32_t v5 = 368 * v4;                   // 0xb9c74
	int32_t v6 = v3 - 8 + v5;                // 0xb9c88
	int32_t v7;                              // bp+16
	int32_t v8 = &v7;                        // 0xb9c80
	// branch -> 0xb9c80
	while (true) {
		int32_t v9 = v8 + 8;  // 0xb9c80
		int32_t v10 = v6 + 8; // 0xb9c88
		*(int32_t *)v10 = *(int32_t *)v9;
		*(int32_t *)(v6 + 12) = *(int32_t *)(v8 + 12);
		int32_t v11 = v2 - 1; // 0xb9c90
		v2 = v11;
		if (v11 == 0) {
			int32_t v12 = v5 + v3;                    // 0xb9c94
			int32_t v13 = *(int32_t *)(g23 - 0x6f28); // 0xb9c98
			*(int32_t *)(v12 + 196) = 100;
			*(int32_t *)(v12 + 200) = 100;
			*(char *)(v4 + v13) = (char)(0x1000000 * a8 / 0x1000000);
			int32_t *v14 = (int32_t *)v1; // 0xb9cb0
			int32_t result = *v14;        // 0xb9cb0
			*v14 = result + 1;
			return result;
		}
		// 0xb9c80
		v6 = v10;
		v8 = v9;
		// branch -> 0xb9c80
	}
}

// Address range: 0xb9cc4 - 0xba2ec
int32_t function_b9cc4(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // r29
	int32_t v2 = 0;                          // r23
	g35 = *(int32_t *)(g23 - 0x77a8);
	g30 = *(int32_t *)(g23 - 0x5718);
	g31 = *(int32_t *)(g23 - 0x76b4);
	int32_t v3 = *(int32_t *)(g23 - 0x6f14); // 0xb9cec
	g36 = *(int32_t *)(g23 - 0x6ef8);
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 1;
	int32_t v4 = -1;                         // r0
	int32_t v5 = *(int32_t *)(g23 - 0x6f24); // r5
	*(int32_t *)*(int32_t *)(g23 - 0x6f10) = 0;
	*(int32_t *)(v5 + 8) = v4;
	*(int32_t *)(v5 + 376) = v4;
	*(int32_t *)(v5 + 744) = v4;
	*(int32_t *)(v5 + 1112) = v4;
	*(int32_t *)(v5 + 1480) = v4;
	*(int32_t *)(v5 + 1848) = v4;
	*(int32_t *)(v5 + 2216) = v4;
	*(int32_t *)(v5 + 2584) = v4;
	*(int32_t *)(v5 + 2952) = v4;
	*(int32_t *)(v5 + 3320) = v4;
	*(int32_t *)(v5 + 3688) = v4;
	*(int32_t *)(v5 + 4056) = v4;
	*(int32_t *)(v5 + 0x1148) = v4;
	*(int32_t *)(v5 + 0x12b8) = v4;
	*(int32_t *)(v5 + 0x1428) = v4;
	*(int32_t *)(v5 + 0x1598) = v4;
	*(int32_t *)(v5 + 0x1708) = v4;
	*(int32_t *)(v5 + 0x1878) = v4;
	*(int32_t *)(v5 + 0x19e8) = v4;
	*(int32_t *)(v5 + 0x1b58) = v4;
	*(int32_t *)(v5 + 0x1cc8) = v4;
	*(int32_t *)(v5 + 0x1e38) = v4;
	*(int32_t *)(v5 + 0x1fa8) = v4;
	*(int32_t *)(v5 + 0x2118) = v4;
	*(int32_t *)(v5 + 0x2288) = v4;
	*(int32_t *)(v5 + 0x23f8) = v4;
	*(int32_t *)(v5 + 0x2568) = v4;
	*(int32_t *)(v5 + 0x26d8) = v4;
	*(int32_t *)(v5 + 0x2848) = v4;
	*(int32_t *)(v5 + 0x29b8) = v4;
	*(int32_t *)(v5 + 0x2b28) = v4;
	*(int32_t *)(v5 + 0x2c98) = v4;
	*(int32_t *)(v5 + 0x2e08) = v4;
	*(int32_t *)(v5 + 0x2f78) = v4;
	*(int32_t *)(v5 + 0x30e8) = v4;
	*(int32_t *)(v5 + 0x3258) = v4;
	*(int32_t *)(v5 + 0x33c8) = v4;
	*(int32_t *)(v5 + 0x3538) = v4;
	*(int32_t *)(v5 + 0x36a8) = v4;
	*(int32_t *)(v5 + 0x3818) = v4;
	*(int32_t *)(v5 + 0x3988) = v4;
	*(int32_t *)(v5 + 0x3af8) = v4;
	*(int32_t *)(v5 + 0x3c68) = v4;
	*(int32_t *)(v5 + 0x3dd8) = v4;
	*(int32_t *)(v5 + 0x3f48) = v4;
	*(int32_t *)(v5 + 0x40b8) = v4;
	*(int32_t *)(v5 + 0x4228) = v4;
	*(int32_t *)(v5 + 0x4398) = v4;
	int32_t v6;  // ctr
	int32_t v7;  // r24
	int32_t v8;  // r25
	int32_t v9;  // r6
	int32_t v10; // bp-432
	int32_t result;
	int32_t v11;
	int32_t v12;
	int32_t v13;
	int32_t v14;
	int32_t v15;
	int32_t v16;
	int32_t v17;
	int32_t v18; // 0xb9e88
	int32_t v19; // 0xb9f04
	int32_t v20; // 0xb9f80
	int32_t v21; // 0xb9ffc
	int32_t v22; // 0xba078
	int32_t v23; // 0xba0f4
	int32_t v24; // 0xba140
	int32_t v25; // 0xb9e88
	int32_t v26; // 0xb9e90
	int32_t v27; // 0xb9e98
	int32_t v28; // 0xb9f04
	int32_t v29; // 0xb9f0c
	int32_t v30; // 0xb9f14
	int32_t v31; // 0xb9f80
	int32_t v32; // 0xb9f88
	int32_t v33; // 0xb9f90
	int32_t v34; // 0xb9ffc
	int32_t v35; // 0xba004
	int32_t v36; // 0xba00c
	int32_t v37; // 0xba078
	int32_t v38; // 0xba080
	int32_t v39; // 0xba088
	int32_t v40; // 0xba0f4
	int32_t v41; // 0xba0fc
	int32_t v42; // 0xba104
	int32_t v43; // 0xb9e90
	int32_t v44; // 0xb9f0c
	int32_t v45; // 0xb9f88
	int32_t v46; // 0xba004
	int32_t v47; // 0xba080
	int32_t v48; // 0xba0e0
	int32_t v49; // 0xba0fc
	int32_t v50;
	int32_t v51; // 0xba1c8
	int32_t v52; // 0xba26c
	if (function_b9bf0(0x55ec * *(int32_t *)v1 + 1176 + g35) != 0) {
		// 0xb9dec
		v6 = 46;
		v2 = 1;
		int32_t v53 = &v10;                                 // 0xb9e14
		int32_t v54 = g35 + 0x55ec * *(int32_t *)v1 + 1168; // 0xb9e0c
		// branch -> 0xb9e0c
		while (true) {
			int32_t v55 = v54 + 8; // 0xb9e0c
			int32_t v56 = v53 + 8; // 0xb9e14
			*(int32_t *)v56 = *(int32_t *)v55;
			*(int32_t *)(v53 + 12) = *(int32_t *)(v54 + 12);
			int32_t v57 = v6 - 1; // 0xb9e1c
			v6 = v57;
			if (v57 == 0) {
				// 0xb9e20
				function_b9c34(v17, v16, v15, v14, v13, v12, v11, -1);
				// branch -> 0xb9e4c
				// 0xb9e4c
				if (function_b9bf0(0x55ec * *(int32_t *)v1 + 3384 + g35) != 0) {
					// 0xb9e68
					v6 = 46;
					v2 = 1;
					v26 = &v10;
					v18 = g35 + 0x55ec * *(int32_t *)v1 + 3376;
					// branch -> 0xb9e88
					while (true) {
						// 0xb9e88
						v25 = v18 + 8;
						v43 = v26 + 8;
						*(int32_t *)v43 = *(int32_t *)v25;
						*(int32_t *)(v26 + 12) = *(int32_t *)(v18 + 12);
						v27 = v6 - 1;
						v6 = v27;
						if (v27 == 0) {
							// 0xb9e9c
							function_b9c34(v17, v16, v15, v14, v13, v12, v11, -2);
							// branch -> 0xb9ec8
							// 0xb9ec8
							if (function_b9bf0(0x55ec * *(int32_t *)v1 + 2648 + g35) != 0) {
								// 0xb9ee4
								v6 = 46;
								v2 = 1;
								v29 = &v10;
								v19 = g35 + 0x55ec * *(int32_t *)v1 + 2640;
								// branch -> 0xb9f04
								while (true) {
									// 0xb9f04
									v28 = v19 + 8;
									v44 = v29 + 8;
									*(int32_t *)v44 = *(int32_t *)v28;
									*(int32_t *)(v29 + 12) = *(int32_t *)(v19 + 12);
									v30 = v6 - 1;
									v6 = v30;
									if (v30 == 0) {
										// 0xb9f18
										function_b9c34(v17, v16, v15, v14, v13, v12, v11, -3);
										// branch -> 0xb9f44
										// 0xb9f44
										if (function_b9bf0(0x55ec * *(int32_t *)v1 + 3016 + g35) != 0) {
											// 0xb9f60
											v6 = 46;
											v2 = 1;
											v32 = &v10;
											v20 = g35 + 0x55ec * *(int32_t *)v1 + 3008;
											// branch -> 0xb9f80
											while (true) {
												// 0xb9f80
												v31 = v20 + 8;
												v45 = v32 + 8;
												*(int32_t *)v45 = *(int32_t *)v31;
												*(int32_t *)(v32 + 12) = *(int32_t *)(v20 + 12);
												v33 = v6 - 1;
												v6 = v33;
												if (v33 == 0) {
													// 0xb9f94
													function_b9c34(v17, v16, v15, v14, v13, v12, v11, -4);
													// branch -> 0xb9fc0
													// 0xb9fc0
													if (function_b9bf0(0x55ec * *(int32_t *)v1 + 1544 + g35) != 0) {
														// 0xb9fdc
														v6 = 46;
														v2 = 1;
														v35 = &v10;
														v21 = g35 + 0x55ec * *(int32_t *)v1 + 1536;
														// branch -> 0xb9ffc
														while (true) {
															// 0xb9ffc
															v34 = v21 + 8;
															v46 = v35 + 8;
															*(int32_t *)v46 = *(int32_t *)v34;
															*(int32_t *)(v35 + 12) = *(int32_t *)(v21 + 12);
															v36 = v6 - 1;
															v6 = v36;
															if (v36 == 0) {
																// 0xba010
																function_b9c34(v17, v16, v15, v14, v13, v12, v11, -5);
																// branch -> 0xba03c
																// 0xba03c
																if (function_b9bf0(0x55ec * *(int32_t *)v1 + 1912 + g35) != 0) {
																	// 0xba058
																	v6 = 46;
																	v2 = 1;
																	v38 = &v10;
																	v22 = g35 + 0x55ec * *(int32_t *)v1 + 1904;
																	// branch -> 0xba078
																	while (true) {
																		// 0xba078
																		v37 = v22 + 8;
																		v47 = v38 + 8;
																		*(int32_t *)v47 = *(int32_t *)v37;
																		*(int32_t *)(v38 + 12) = *(int32_t *)(v22 + 12);
																		v39 = v6 - 1;
																		v6 = v39;
																		if (v39 == 0) {
																			// 0xba08c
																			function_b9c34(v17, v16, v15, v14, v13, v12, v11, -6);
																			// branch -> 0xba0b8
																			// 0xba0b8
																			if (function_b9bf0(0x55ec * *(int32_t *)v1 + 2280 + g35) == 0) {
																				// 0xba0b8
																				v50 = &v10;
																				// branch -> 0xba134
																			} else {
																				// 0xba0d4
																				v6 = 46;
																				v48 = &v10;
																				v2 = 1;
																				v41 = v48;
																				v23 = g35 + 0x55ec * *(int32_t *)v1 + 2272;
																				// branch -> 0xba0f4
																				while (true) {
																					// 0xba0f4
																					v40 = v23 + 8;
																					v49 = v41 + 8;
																					*(int32_t *)v49 = *(int32_t *)v40;
																					*(int32_t *)(v41 + 12) = *(int32_t *)(v23 + 12);
																					v42 = v6 - 1;
																					v6 = v42;
																					if (v42 == 0) {
																						// 0xba108
																						function_b9c34(v17, v16, v15, v14, v13, v12, v11, -7);
																						v50 = v48;
																						// branch -> 0xba134
																						// 0xba134
																						v7 = 0;
																						v8 = 0;
																						v24 = 0;
																						int32_t v58 = 0; // 0xba1bc
																						// branch -> 0xba1c0
																						while (true) {
																							// 0xba1c0
																							v51 = g35 + 0x55ec * *(int32_t *)v1;
																							v9 = v51;
																							if (v58 >= *(int32_t *)(v51 + 0x4828)) {
																								// 0xba1d8
																								if (v2 == 0) {
																									// 0xba1e0
																									g37 = *(int32_t *)(g23 - 0x57b8);
																									*(int32_t *)g36 = 0;
																									g38 = *(int32_t *)(v9 + 456);
																									sprintf();
																									function_b6e4c(0, 1, 1, g31, 3, 0);
																									function_b6dfc(3);
																									function_b6dfc(21);
																									function_b6e4c(0, 22, 1, g30, 0, 1);
																									result = function_b6e38(22, 6);
																									// branch -> 0xba2d8
																									// 0xba2d8
																									return result;
																								}
																								// 0xba250
																								*(int32_t *)g36 = 1;
																								g37 = *(int32_t *)(g23 - 0x57bc);
																								*(int32_t *)v3 = 0;
																								v52 = *(int32_t *)(v9 + 0x4828);
																								*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v52;
																								g38 = *(int32_t *)(v9 + 456);
																								sprintf();
																								function_b6e4c(0, 1, 1, g31, 3, 0);
																								function_b6dfc(3);
																								function_b6dfc(21);
																								function_b7cb0(*(int32_t *)g32);
																								function_b6e4c(0, 22, 1, g30, 0, 1);
																								result = function_b6e38(22, 6);
																								// branch -> 0xba2d8
																								// 0xba2d8
																								return result;
																							}
																						lab_0xba140_7:
																							// 0xba140
																							if (function_b9bf0(v24 + 3752 + v51) != 0) {
																								// 0xba154
																								v6 = 46;
																								v2 = 1;
																								int32_t v59 = v50;                                       // 0xba184
																								int32_t v60 = v8 + 0x55ec * *(int32_t *)v1 + 3744 + g35; // 0xba17c
																								// branch -> 0xba17c
																								while (true) {
																									int32_t v61 = v60 + 8; // 0xba17c
																									int32_t v62 = v61;     // r4
																									int32_t v63 = v59 + 8; // 0xba184
																									*(int32_t *)v63 = *(int32_t *)v61;
																									v5 = v63;
																									*(int32_t *)(v59 + 12) = *(int32_t *)(v60 + 12);
																									int32_t v64 = v6 - 1; // 0xba18c
																									v6 = v64;
																									if (v64 == 0) {
																										// 0xba190
																										function_b9c34(v17, v16, v15, v14, v13, v12, v11, v7);
																										// branch -> 0xba1b8
																										// 0xba1b8
																										v8 += 368;
																										v7++;
																										// branch -> 0xba1c0
																										break;
																									} else {
																										// 0xba17c
																										v59 = v5;
																										v60 = v62;
																										// branch -> 0xba17c
																										continue;
																									}
																								}
																							}
																							int32_t v65 = v8 + 368; // 0xba1b8
																							v8 = v65;
																							v58 = v7 + 1;
																							v7 = v58;
																							v24 = v65;
																							// branch -> 0xba1c0
																						}
																					} else {
																					lab_0xba0f4_6:
																						// 0xba0f4
																						v41 = v49;
																						v23 = v40;
																						// branch -> 0xba0f4
																						continue;
																					}
																				}
																			}
																			// 0xba134
																			v7 = 0;
																			v8 = 0;
																			v24 = 0;
																			// branch -> 0xba1c0
																			while (true) {
																				// 0xba1c0
																				v51 = g35 + 0x55ec * *(int32_t *)v1;
																				v9 = v51;
																				if (0 < *(int32_t *)(v51 + 0x4828)) {
																					goto lab_0xba140_7;
																				}
																				// 0xba1d8
																				if (v2 == 0) {
																					// 0xba1e0
																					g37 = *(int32_t *)(g23 - 0x57b8);
																					*(int32_t *)g36 = 0;
																					g38 = *(int32_t *)(v9 + 456);
																					sprintf();
																					function_b6e4c(0, 1, 1, g31, 3, 0);
																					function_b6dfc(3);
																					function_b6dfc(21);
																					function_b6e4c(0, 22, 1, g30, 0, 1);
																					result = function_b6e38(22, 6);
																					// branch -> 0xba2d8
																					// 0xba2d8
																					return result;
																				}
																				// 0xba250
																				*(int32_t *)g36 = 1;
																				g37 = *(int32_t *)(g23 - 0x57bc);
																				*(int32_t *)v3 = 0;
																				v52 = *(int32_t *)(v9 + 0x4828);
																				*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v52;
																				g38 = *(int32_t *)(v9 + 456);
																				sprintf();
																				function_b6e4c(0, 1, 1, g31, 3, 0);
																				function_b6dfc(3);
																				function_b6dfc(21);
																				function_b7cb0(*(int32_t *)g32);
																				function_b6e4c(0, 22, 1, g30, 0, 1);
																				result = function_b6e38(22, 6);
																				// branch -> 0xba2d8
																				// 0xba2d8
																				return result;
																			}
																		} else {
																		lab_0xba078_5:
																			// 0xba078
																			v38 = v47;
																			v22 = v37;
																			// branch -> 0xba078
																			continue;
																		}
																	}
																}
																// 0xba0b8
																if (function_b9bf0(0x55ec * *(int32_t *)v1 + 2280 + g35) == 0) {
																	// 0xba0b8
																	v50 = &v10;
																	// branch -> 0xba134
																} else {
																	// 0xba0d4
																	v6 = 46;
																	v48 = &v10;
																	v2 = 1;
																	v41 = v48;
																	v23 = g35 + 0x55ec * *(int32_t *)v1 + 2272;
																	// branch -> 0xba0f4
																	while (true) {
																		// 0xba0f4
																		v40 = v23 + 8;
																		v49 = v41 + 8;
																		*(int32_t *)v49 = *(int32_t *)v40;
																		*(int32_t *)(v41 + 12) = *(int32_t *)(v23 + 12);
																		v42 = v6 - 1;
																		v6 = v42;
																		if (v42 != 0) {
																			goto lab_0xba0f4_6;
																		}
																		// 0xba108
																		function_b9c34(v17, v16, v15, v14, v13, v12, v11, -7);
																		// branch -> 0xba134
																	}
																}
																// 0xba134
																v7 = 0;
																v8 = 0;
																v24 = 0;
																// branch -> 0xba1c0
																while (true) {
																	// 0xba1c0
																	v51 = g35 + 0x55ec * *(int32_t *)v1;
																	v9 = v51;
																	if (0 < *(int32_t *)(v51 + 0x4828)) {
																		goto lab_0xba140_7;
																	}
																	// 0xba1d8
																	if (v2 == 0) {
																		// 0xba1e0
																		g37 = *(int32_t *)(g23 - 0x57b8);
																		*(int32_t *)g36 = 0;
																		g38 = *(int32_t *)(v9 + 456);
																		sprintf();
																		function_b6e4c(0, 1, 1, g31, 3, 0);
																		function_b6dfc(3);
																		function_b6dfc(21);
																		function_b6e4c(0, 22, 1, g30, 0, 1);
																		result = function_b6e38(22, 6);
																		// branch -> 0xba2d8
																		// 0xba2d8
																		return result;
																	}
																	// 0xba250
																	*(int32_t *)g36 = 1;
																	g37 = *(int32_t *)(g23 - 0x57bc);
																	*(int32_t *)v3 = 0;
																	v52 = *(int32_t *)(v9 + 0x4828);
																	*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v52;
																	g38 = *(int32_t *)(v9 + 456);
																	sprintf();
																	function_b6e4c(0, 1, 1, g31, 3, 0);
																	function_b6dfc(3);
																	function_b6dfc(21);
																	function_b7cb0(*(int32_t *)g32);
																	function_b6e4c(0, 22, 1, g30, 0, 1);
																	result = function_b6e38(22, 6);
																	// branch -> 0xba2d8
																	// 0xba2d8
																	return result;
																}
															} else {
															lab_0xb9ffc_4:
																// 0xb9ffc
																v35 = v46;
																v21 = v34;
																// branch -> 0xb9ffc
																continue;
															}
														}
													}
													// 0xba03c
													if (function_b9bf0(0x55ec * *(int32_t *)v1 + 1912 + g35) != 0) {
														// 0xba058
														v6 = 46;
														v2 = 1;
														v38 = &v10;
														v22 = g35 + 0x55ec * *(int32_t *)v1 + 1904;
														// branch -> 0xba078
														while (true) {
															// 0xba078
															v37 = v22 + 8;
															v47 = v38 + 8;
															*(int32_t *)v47 = *(int32_t *)v37;
															*(int32_t *)(v38 + 12) = *(int32_t *)(v22 + 12);
															v39 = v6 - 1;
															v6 = v39;
															if (v39 != 0) {
																goto lab_0xba078_5;
															}
															// 0xba08c
															function_b9c34(v17, v16, v15, v14, v13, v12, v11, -6);
															// branch -> 0xba0b8
														}
													}
													// 0xba0b8
													if (function_b9bf0(0x55ec * *(int32_t *)v1 + 2280 + g35) == 0) {
														// 0xba0b8
														v50 = &v10;
														// branch -> 0xba134
													} else {
														// 0xba0d4
														v6 = 46;
														v48 = &v10;
														v2 = 1;
														v41 = v48;
														v23 = g35 + 0x55ec * *(int32_t *)v1 + 2272;
														// branch -> 0xba0f4
														while (true) {
															// 0xba0f4
															v40 = v23 + 8;
															v49 = v41 + 8;
															*(int32_t *)v49 = *(int32_t *)v40;
															*(int32_t *)(v41 + 12) = *(int32_t *)(v23 + 12);
															v42 = v6 - 1;
															v6 = v42;
															if (v42 != 0) {
																goto lab_0xba0f4_6;
															}
															// 0xba108
															function_b9c34(v17, v16, v15, v14, v13, v12, v11, -7);
															// branch -> 0xba134
														}
													}
													// 0xba134
													v7 = 0;
													v8 = 0;
													v24 = 0;
													// branch -> 0xba1c0
													while (true) {
														// 0xba1c0
														v51 = g35 + 0x55ec * *(int32_t *)v1;
														v9 = v51;
														if (0 < *(int32_t *)(v51 + 0x4828)) {
															goto lab_0xba140_7;
														}
														// 0xba1d8
														if (v2 == 0) {
															// 0xba1e0
															g37 = *(int32_t *)(g23 - 0x57b8);
															*(int32_t *)g36 = 0;
															g38 = *(int32_t *)(v9 + 456);
															sprintf();
															function_b6e4c(0, 1, 1, g31, 3, 0);
															function_b6dfc(3);
															function_b6dfc(21);
															function_b6e4c(0, 22, 1, g30, 0, 1);
															result = function_b6e38(22, 6);
															// branch -> 0xba2d8
															// 0xba2d8
															return result;
														}
														// 0xba250
														*(int32_t *)g36 = 1;
														g37 = *(int32_t *)(g23 - 0x57bc);
														*(int32_t *)v3 = 0;
														v52 = *(int32_t *)(v9 + 0x4828);
														*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v52;
														g38 = *(int32_t *)(v9 + 456);
														sprintf();
														function_b6e4c(0, 1, 1, g31, 3, 0);
														function_b6dfc(3);
														function_b6dfc(21);
														function_b7cb0(*(int32_t *)g32);
														function_b6e4c(0, 22, 1, g30, 0, 1);
														result = function_b6e38(22, 6);
														// branch -> 0xba2d8
														// 0xba2d8
														return result;
													}
												} else {
												lab_0xb9f80_3:
													// 0xb9f80
													v32 = v45;
													v20 = v31;
													// branch -> 0xb9f80
													continue;
												}
											}
										}
										// 0xb9fc0
										if (function_b9bf0(0x55ec * *(int32_t *)v1 + 1544 + g35) != 0) {
											// 0xb9fdc
											v6 = 46;
											v2 = 1;
											v35 = &v10;
											v21 = g35 + 0x55ec * *(int32_t *)v1 + 1536;
											// branch -> 0xb9ffc
											while (true) {
												// 0xb9ffc
												v34 = v21 + 8;
												v46 = v35 + 8;
												*(int32_t *)v46 = *(int32_t *)v34;
												*(int32_t *)(v35 + 12) = *(int32_t *)(v21 + 12);
												v36 = v6 - 1;
												v6 = v36;
												if (v36 != 0) {
													goto lab_0xb9ffc_4;
												}
												// 0xba010
												function_b9c34(v17, v16, v15, v14, v13, v12, v11, -5);
												// branch -> 0xba03c
											}
										}
										// 0xba03c
										if (function_b9bf0(0x55ec * *(int32_t *)v1 + 1912 + g35) != 0) {
											// 0xba058
											v6 = 46;
											v2 = 1;
											v38 = &v10;
											v22 = g35 + 0x55ec * *(int32_t *)v1 + 1904;
											// branch -> 0xba078
											while (true) {
												// 0xba078
												v37 = v22 + 8;
												v47 = v38 + 8;
												*(int32_t *)v47 = *(int32_t *)v37;
												*(int32_t *)(v38 + 12) = *(int32_t *)(v22 + 12);
												v39 = v6 - 1;
												v6 = v39;
												if (v39 != 0) {
													goto lab_0xba078_5;
												}
												// 0xba08c
												function_b9c34(v17, v16, v15, v14, v13, v12, v11, -6);
												// branch -> 0xba0b8
											}
										}
										// 0xba0b8
										if (function_b9bf0(0x55ec * *(int32_t *)v1 + 2280 + g35) == 0) {
											// 0xba0b8
											v50 = &v10;
											// branch -> 0xba134
										} else {
											// 0xba0d4
											v6 = 46;
											v48 = &v10;
											v2 = 1;
											v41 = v48;
											v23 = g35 + 0x55ec * *(int32_t *)v1 + 2272;
											// branch -> 0xba0f4
											while (true) {
												// 0xba0f4
												v40 = v23 + 8;
												v49 = v41 + 8;
												*(int32_t *)v49 = *(int32_t *)v40;
												*(int32_t *)(v41 + 12) = *(int32_t *)(v23 + 12);
												v42 = v6 - 1;
												v6 = v42;
												if (v42 != 0) {
													goto lab_0xba0f4_6;
												}
												// 0xba108
												function_b9c34(v17, v16, v15, v14, v13, v12, v11, -7);
												// branch -> 0xba134
											}
										}
										// 0xba134
										v7 = 0;
										v8 = 0;
										v24 = 0;
										// branch -> 0xba1c0
										while (true) {
											// 0xba1c0
											v51 = g35 + 0x55ec * *(int32_t *)v1;
											v9 = v51;
											if (0 < *(int32_t *)(v51 + 0x4828)) {
												goto lab_0xba140_7;
											}
											// 0xba1d8
											if (v2 == 0) {
												// 0xba1e0
												g37 = *(int32_t *)(g23 - 0x57b8);
												*(int32_t *)g36 = 0;
												g38 = *(int32_t *)(v9 + 456);
												sprintf();
												function_b6e4c(0, 1, 1, g31, 3, 0);
												function_b6dfc(3);
												function_b6dfc(21);
												function_b6e4c(0, 22, 1, g30, 0, 1);
												result = function_b6e38(22, 6);
												// branch -> 0xba2d8
												// 0xba2d8
												return result;
											}
											// 0xba250
											*(int32_t *)g36 = 1;
											g37 = *(int32_t *)(g23 - 0x57bc);
											*(int32_t *)v3 = 0;
											v52 = *(int32_t *)(v9 + 0x4828);
											*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v52;
											g38 = *(int32_t *)(v9 + 456);
											sprintf();
											function_b6e4c(0, 1, 1, g31, 3, 0);
											function_b6dfc(3);
											function_b6dfc(21);
											function_b7cb0(*(int32_t *)g32);
											function_b6e4c(0, 22, 1, g30, 0, 1);
											result = function_b6e38(22, 6);
											// branch -> 0xba2d8
											// 0xba2d8
											return result;
										}
									} else {
									lab_0xb9f04_2:
										// 0xb9f04
										v29 = v44;
										v19 = v28;
										// branch -> 0xb9f04
										continue;
									}
								}
							}
							// 0xb9f44
							if (function_b9bf0(0x55ec * *(int32_t *)v1 + 3016 + g35) != 0) {
								// 0xb9f60
								v6 = 46;
								v2 = 1;
								v32 = &v10;
								v20 = g35 + 0x55ec * *(int32_t *)v1 + 3008;
								// branch -> 0xb9f80
								while (true) {
									// 0xb9f80
									v31 = v20 + 8;
									v45 = v32 + 8;
									*(int32_t *)v45 = *(int32_t *)v31;
									*(int32_t *)(v32 + 12) = *(int32_t *)(v20 + 12);
									v33 = v6 - 1;
									v6 = v33;
									if (v33 != 0) {
										goto lab_0xb9f80_3;
									}
									// 0xb9f94
									function_b9c34(v17, v16, v15, v14, v13, v12, v11, -4);
									// branch -> 0xb9fc0
								}
							}
							// 0xb9fc0
							if (function_b9bf0(0x55ec * *(int32_t *)v1 + 1544 + g35) != 0) {
								// 0xb9fdc
								v6 = 46;
								v2 = 1;
								v35 = &v10;
								v21 = g35 + 0x55ec * *(int32_t *)v1 + 1536;
								// branch -> 0xb9ffc
								while (true) {
									// 0xb9ffc
									v34 = v21 + 8;
									v46 = v35 + 8;
									*(int32_t *)v46 = *(int32_t *)v34;
									*(int32_t *)(v35 + 12) = *(int32_t *)(v21 + 12);
									v36 = v6 - 1;
									v6 = v36;
									if (v36 != 0) {
										goto lab_0xb9ffc_4;
									}
									// 0xba010
									function_b9c34(v17, v16, v15, v14, v13, v12, v11, -5);
									// branch -> 0xba03c
								}
							}
							// 0xba03c
							if (function_b9bf0(0x55ec * *(int32_t *)v1 + 1912 + g35) != 0) {
								// 0xba058
								v6 = 46;
								v2 = 1;
								v38 = &v10;
								v22 = g35 + 0x55ec * *(int32_t *)v1 + 1904;
								// branch -> 0xba078
								while (true) {
									// 0xba078
									v37 = v22 + 8;
									v47 = v38 + 8;
									*(int32_t *)v47 = *(int32_t *)v37;
									*(int32_t *)(v38 + 12) = *(int32_t *)(v22 + 12);
									v39 = v6 - 1;
									v6 = v39;
									if (v39 != 0) {
										goto lab_0xba078_5;
									}
									// 0xba08c
									function_b9c34(v17, v16, v15, v14, v13, v12, v11, -6);
									// branch -> 0xba0b8
								}
							}
							// 0xba0b8
							if (function_b9bf0(0x55ec * *(int32_t *)v1 + 2280 + g35) == 0) {
								// 0xba0b8
								v50 = &v10;
								// branch -> 0xba134
							} else {
								// 0xba0d4
								v6 = 46;
								v48 = &v10;
								v2 = 1;
								v41 = v48;
								v23 = g35 + 0x55ec * *(int32_t *)v1 + 2272;
								// branch -> 0xba0f4
								while (true) {
									// 0xba0f4
									v40 = v23 + 8;
									v49 = v41 + 8;
									*(int32_t *)v49 = *(int32_t *)v40;
									*(int32_t *)(v41 + 12) = *(int32_t *)(v23 + 12);
									v42 = v6 - 1;
									v6 = v42;
									if (v42 != 0) {
										goto lab_0xba0f4_6;
									}
									// 0xba108
									function_b9c34(v17, v16, v15, v14, v13, v12, v11, -7);
									// branch -> 0xba134
								}
							}
							// 0xba134
							v7 = 0;
							v8 = 0;
							v24 = 0;
							// branch -> 0xba1c0
							while (true) {
								// 0xba1c0
								v51 = g35 + 0x55ec * *(int32_t *)v1;
								v9 = v51;
								if (0 < *(int32_t *)(v51 + 0x4828)) {
									goto lab_0xba140_7;
								}
								// 0xba1d8
								if (v2 == 0) {
									// 0xba1e0
									g37 = *(int32_t *)(g23 - 0x57b8);
									*(int32_t *)g36 = 0;
									g38 = *(int32_t *)(v9 + 456);
									sprintf();
									function_b6e4c(0, 1, 1, g31, 3, 0);
									function_b6dfc(3);
									function_b6dfc(21);
									function_b6e4c(0, 22, 1, g30, 0, 1);
									result = function_b6e38(22, 6);
									// branch -> 0xba2d8
									// 0xba2d8
									return result;
								}
								// 0xba250
								*(int32_t *)g36 = 1;
								g37 = *(int32_t *)(g23 - 0x57bc);
								*(int32_t *)v3 = 0;
								v52 = *(int32_t *)(v9 + 0x4828);
								*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v52;
								g38 = *(int32_t *)(v9 + 456);
								sprintf();
								function_b6e4c(0, 1, 1, g31, 3, 0);
								function_b6dfc(3);
								function_b6dfc(21);
								function_b7cb0(*(int32_t *)g32);
								function_b6e4c(0, 22, 1, g30, 0, 1);
								result = function_b6e38(22, 6);
								// branch -> 0xba2d8
								// 0xba2d8
								return result;
							}
						} else {
						lab_0xb9e88:
							// 0xb9e88
							v26 = v43;
							v18 = v25;
							// branch -> 0xb9e88
							continue;
						}
					}
				}
				// 0xb9ec8
				if (function_b9bf0(0x55ec * *(int32_t *)v1 + 2648 + g35) != 0) {
					// 0xb9ee4
					v6 = 46;
					v2 = 1;
					v29 = &v10;
					v19 = g35 + 0x55ec * *(int32_t *)v1 + 2640;
					// branch -> 0xb9f04
					while (true) {
						// 0xb9f04
						v28 = v19 + 8;
						v44 = v29 + 8;
						*(int32_t *)v44 = *(int32_t *)v28;
						*(int32_t *)(v29 + 12) = *(int32_t *)(v19 + 12);
						v30 = v6 - 1;
						v6 = v30;
						if (v30 != 0) {
							goto lab_0xb9f04_2;
						}
						// 0xb9f18
						function_b9c34(v17, v16, v15, v14, v13, v12, v11, -3);
						// branch -> 0xb9f44
					}
				}
				// 0xb9f44
				if (function_b9bf0(0x55ec * *(int32_t *)v1 + 3016 + g35) != 0) {
					// 0xb9f60
					v6 = 46;
					v2 = 1;
					v32 = &v10;
					v20 = g35 + 0x55ec * *(int32_t *)v1 + 3008;
					// branch -> 0xb9f80
					while (true) {
						// 0xb9f80
						v31 = v20 + 8;
						v45 = v32 + 8;
						*(int32_t *)v45 = *(int32_t *)v31;
						*(int32_t *)(v32 + 12) = *(int32_t *)(v20 + 12);
						v33 = v6 - 1;
						v6 = v33;
						if (v33 != 0) {
							goto lab_0xb9f80_3;
						}
						// 0xb9f94
						function_b9c34(v17, v16, v15, v14, v13, v12, v11, -4);
						// branch -> 0xb9fc0
					}
				}
				// 0xb9fc0
				if (function_b9bf0(0x55ec * *(int32_t *)v1 + 1544 + g35) != 0) {
					// 0xb9fdc
					v6 = 46;
					v2 = 1;
					v35 = &v10;
					v21 = g35 + 0x55ec * *(int32_t *)v1 + 1536;
					// branch -> 0xb9ffc
					while (true) {
						// 0xb9ffc
						v34 = v21 + 8;
						v46 = v35 + 8;
						*(int32_t *)v46 = *(int32_t *)v34;
						*(int32_t *)(v35 + 12) = *(int32_t *)(v21 + 12);
						v36 = v6 - 1;
						v6 = v36;
						if (v36 != 0) {
							goto lab_0xb9ffc_4;
						}
						// 0xba010
						function_b9c34(v17, v16, v15, v14, v13, v12, v11, -5);
						// branch -> 0xba03c
					}
				}
				// 0xba03c
				if (function_b9bf0(0x55ec * *(int32_t *)v1 + 1912 + g35) != 0) {
					// 0xba058
					v6 = 46;
					v2 = 1;
					v38 = &v10;
					v22 = g35 + 0x55ec * *(int32_t *)v1 + 1904;
					// branch -> 0xba078
					while (true) {
						// 0xba078
						v37 = v22 + 8;
						v47 = v38 + 8;
						*(int32_t *)v47 = *(int32_t *)v37;
						*(int32_t *)(v38 + 12) = *(int32_t *)(v22 + 12);
						v39 = v6 - 1;
						v6 = v39;
						if (v39 != 0) {
							goto lab_0xba078_5;
						}
						// 0xba08c
						function_b9c34(v17, v16, v15, v14, v13, v12, v11, -6);
						// branch -> 0xba0b8
					}
				}
				// 0xba0b8
				if (function_b9bf0(0x55ec * *(int32_t *)v1 + 2280 + g35) == 0) {
					// 0xba0b8
					v50 = &v10;
					// branch -> 0xba134
				} else {
					// 0xba0d4
					v6 = 46;
					v48 = &v10;
					v2 = 1;
					v41 = v48;
					v23 = g35 + 0x55ec * *(int32_t *)v1 + 2272;
					// branch -> 0xba0f4
					while (true) {
						// 0xba0f4
						v40 = v23 + 8;
						v49 = v41 + 8;
						*(int32_t *)v49 = *(int32_t *)v40;
						*(int32_t *)(v41 + 12) = *(int32_t *)(v23 + 12);
						v42 = v6 - 1;
						v6 = v42;
						if (v42 != 0) {
							goto lab_0xba0f4_6;
						}
						// 0xba108
						function_b9c34(v17, v16, v15, v14, v13, v12, v11, -7);
						// branch -> 0xba134
					}
				}
				// 0xba134
				v7 = 0;
				v8 = 0;
				v24 = 0;
				// branch -> 0xba1c0
				while (true) {
					// 0xba1c0
					v51 = g35 + 0x55ec * *(int32_t *)v1;
					v9 = v51;
					if (0 < *(int32_t *)(v51 + 0x4828)) {
						goto lab_0xba140_7;
					}
					// 0xba1d8
					if (v2 == 0) {
						// 0xba1e0
						g37 = *(int32_t *)(g23 - 0x57b8);
						*(int32_t *)g36 = 0;
						g38 = *(int32_t *)(v9 + 456);
						sprintf();
						function_b6e4c(0, 1, 1, g31, 3, 0);
						function_b6dfc(3);
						function_b6dfc(21);
						function_b6e4c(0, 22, 1, g30, 0, 1);
						result = function_b6e38(22, 6);
						// branch -> 0xba2d8
						// 0xba2d8
						return result;
					}
					// 0xba250
					*(int32_t *)g36 = 1;
					g37 = *(int32_t *)(g23 - 0x57bc);
					*(int32_t *)v3 = 0;
					v52 = *(int32_t *)(v9 + 0x4828);
					*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v52;
					g38 = *(int32_t *)(v9 + 456);
					sprintf();
					function_b6e4c(0, 1, 1, g31, 3, 0);
					function_b6dfc(3);
					function_b6dfc(21);
					function_b7cb0(*(int32_t *)g32);
					function_b6e4c(0, 22, 1, g30, 0, 1);
					result = function_b6e38(22, 6);
					// branch -> 0xba2d8
					// 0xba2d8
					return result;
				}
			} else {
				// 0xb9e0c
				v53 = v56;
				v54 = v55;
				// branch -> 0xb9e0c
				continue;
			}
		}
	}
	// 0xb9e4c
	if (function_b9bf0(0x55ec * *(int32_t *)v1 + 3384 + g35) != 0) {
		// 0xb9e68
		v6 = 46;
		v2 = 1;
		v26 = &v10;
		v18 = g35 + 0x55ec * *(int32_t *)v1 + 3376;
		// branch -> 0xb9e88
		while (true) {
			// 0xb9e88
			v25 = v18 + 8;
			v43 = v26 + 8;
			*(int32_t *)v43 = *(int32_t *)v25;
			*(int32_t *)(v26 + 12) = *(int32_t *)(v18 + 12);
			v27 = v6 - 1;
			v6 = v27;
			if (v27 != 0) {
				goto lab_0xb9e88;
			}
			// 0xb9e9c
			function_b9c34(v17, v16, v15, v14, v13, v12, v11, -2);
			// branch -> 0xb9ec8
		}
	}
	// 0xb9ec8
	if (function_b9bf0(0x55ec * *(int32_t *)v1 + 2648 + g35) != 0) {
		// 0xb9ee4
		v6 = 46;
		v2 = 1;
		v29 = &v10;
		v19 = g35 + 0x55ec * *(int32_t *)v1 + 2640;
		// branch -> 0xb9f04
		while (true) {
			// 0xb9f04
			v28 = v19 + 8;
			v44 = v29 + 8;
			*(int32_t *)v44 = *(int32_t *)v28;
			*(int32_t *)(v29 + 12) = *(int32_t *)(v19 + 12);
			v30 = v6 - 1;
			v6 = v30;
			if (v30 != 0) {
				goto lab_0xb9f04_2;
			}
			// 0xb9f18
			function_b9c34(v17, v16, v15, v14, v13, v12, v11, -3);
			// branch -> 0xb9f44
		}
	}
	// 0xb9f44
	if (function_b9bf0(0x55ec * *(int32_t *)v1 + 3016 + g35) != 0) {
		// 0xb9f60
		v6 = 46;
		v2 = 1;
		v32 = &v10;
		v20 = g35 + 0x55ec * *(int32_t *)v1 + 3008;
		// branch -> 0xb9f80
		while (true) {
			// 0xb9f80
			v31 = v20 + 8;
			v45 = v32 + 8;
			*(int32_t *)v45 = *(int32_t *)v31;
			*(int32_t *)(v32 + 12) = *(int32_t *)(v20 + 12);
			v33 = v6 - 1;
			v6 = v33;
			if (v33 != 0) {
				goto lab_0xb9f80_3;
			}
			// 0xb9f94
			function_b9c34(v17, v16, v15, v14, v13, v12, v11, -4);
			// branch -> 0xb9fc0
		}
	}
	// 0xb9fc0
	if (function_b9bf0(0x55ec * *(int32_t *)v1 + 1544 + g35) != 0) {
		// 0xb9fdc
		v6 = 46;
		v2 = 1;
		v35 = &v10;
		v21 = g35 + 0x55ec * *(int32_t *)v1 + 1536;
		// branch -> 0xb9ffc
		while (true) {
			// 0xb9ffc
			v34 = v21 + 8;
			v46 = v35 + 8;
			*(int32_t *)v46 = *(int32_t *)v34;
			*(int32_t *)(v35 + 12) = *(int32_t *)(v21 + 12);
			v36 = v6 - 1;
			v6 = v36;
			if (v36 != 0) {
				goto lab_0xb9ffc_4;
			}
			// 0xba010
			function_b9c34(v17, v16, v15, v14, v13, v12, v11, -5);
			// branch -> 0xba03c
		}
	}
	// 0xba03c
	if (function_b9bf0(0x55ec * *(int32_t *)v1 + 1912 + g35) != 0) {
		// 0xba058
		v6 = 46;
		v2 = 1;
		v38 = &v10;
		v22 = g35 + 0x55ec * *(int32_t *)v1 + 1904;
		// branch -> 0xba078
		while (true) {
			// 0xba078
			v37 = v22 + 8;
			v47 = v38 + 8;
			*(int32_t *)v47 = *(int32_t *)v37;
			*(int32_t *)(v38 + 12) = *(int32_t *)(v22 + 12);
			v39 = v6 - 1;
			v6 = v39;
			if (v39 != 0) {
				goto lab_0xba078_5;
			}
			// 0xba08c
			function_b9c34(v17, v16, v15, v14, v13, v12, v11, -6);
			// branch -> 0xba0b8
		}
	}
	// 0xba0b8
	if (function_b9bf0(0x55ec * *(int32_t *)v1 + 2280 + g35) == 0) {
		// 0xba0b8
		v50 = &v10;
		// branch -> 0xba134
	} else {
		// 0xba0d4
		v6 = 46;
		v48 = &v10;
		v2 = 1;
		v41 = v48;
		v23 = g35 + 0x55ec * *(int32_t *)v1 + 2272;
		// branch -> 0xba0f4
		while (true) {
			// 0xba0f4
			v40 = v23 + 8;
			v49 = v41 + 8;
			*(int32_t *)v49 = *(int32_t *)v40;
			*(int32_t *)(v41 + 12) = *(int32_t *)(v23 + 12);
			v42 = v6 - 1;
			v6 = v42;
			if (v42 != 0) {
				goto lab_0xba0f4_6;
			}
			// 0xba108
			function_b9c34(v17, v16, v15, v14, v13, v12, v11, -7);
			// branch -> 0xba134
		}
	}
	// 0xba134
	v7 = 0;
	v8 = 0;
	v24 = 0;
	// branch -> 0xba1c0
	while (true) {
		// 0xba1c0
		v51 = g35 + 0x55ec * *(int32_t *)v1;
		v9 = v51;
		if (0 < *(int32_t *)(v51 + 0x4828)) {
			goto lab_0xba140_7;
		}
		// 0xba1d8
		if (v2 == 0) {
			// 0xba1e0
			g37 = *(int32_t *)(g23 - 0x57b8);
			*(int32_t *)g36 = 0;
			g38 = *(int32_t *)(v9 + 456);
			sprintf();
			function_b6e4c(0, 1, 1, g31, 3, 0);
			function_b6dfc(3);
			function_b6dfc(21);
			function_b6e4c(0, 22, 1, g30, 0, 1);
			result = function_b6e38(22, 6);
			// branch -> 0xba2d8
			// 0xba2d8
			return result;
		}
		// 0xba250
		*(int32_t *)g36 = 1;
		g37 = *(int32_t *)(g23 - 0x57bc);
		*(int32_t *)v3 = 0;
		v52 = *(int32_t *)(v9 + 0x4828);
		*(int32_t *)*(int32_t *)(g23 - 0x6f20) = v52;
		g38 = *(int32_t *)(v9 + 456);
		sprintf();
		function_b6e4c(0, 1, 1, g31, 3, 0);
		function_b6dfc(3);
		function_b6dfc(21);
		function_b7cb0(*(int32_t *)g32);
		function_b6e4c(0, 22, 1, g30, 0, 1);
		result = function_b6e38(22, 6);
		// branch -> 0xba2d8
		// 0xba2d8
		return result;
	}
}

// Address range: 0xba2ec - 0xba400
int32_t function_ba2ec(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f2c); // 0xba2f4
	g35 = *(int32_t *)(g23 - 0x77ac);
	g36 = *(int32_t *)(g23 - 0x77a8);
	function_ba888((char)(0x1000000 * *(int32_t *)v1 / 0x1000000));
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	function_b6c90(5, 23);
	int32_t v2 = g36 + 0x55ec * *(int32_t *)g35; // 0xba340
	if (*(char *)(v2 + 0x5410) != 0) {
		// 0xba350
		// branch -> 0xba354
	}
	// 0xba354
	if (*(int32_t *)(v2 + 0x5538) == 0) {
		// 0xba364
		// branch -> 0xba368
	}
	// 0xba368
	function_b6e4c(0, 7, 1, *(int32_t *)(g23 - 0x57c0), 0, 0);
	function_b6e4c(20, 11, 0, 0x55ec * *(int32_t *)g35 + 0x5451 + g36, (char)g33, 0);
	function_b6eb0(0x55ec * *(int32_t *)g35 + 0x53d4 + g36, 12, g33);
	return function_b6e4c(0, 18, 1, *(int32_t *)(g23 - 0x57c4), 0, 1);
}

// Address range: 0xba400 - 0xba650
int32_t function_ba400(void)
{
	// 0xba400
	g36 = *(int32_t *)(g23 - 0x6f34);
	g33 = *(int32_t *)(g23 - 0x76b4);
	g35 = *(int32_t *)(g23 - 0x6f64);
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	g37 = *(int32_t *)(g23 - 0x57c8);
	g38 = *(int32_t *)(*(int32_t *)(g23 - 0x6f30) + 4 * *(int32_t *)g36);
	sprintf();
	function_b6e4c(0, 2, 1, g33, 3, 0);
	function_b6dfc(5);
	int32_t v1 = *(int32_t *)(g23 - 0x7604); // 0xba478
	int32_t v2 = 4;                          // 0xba560
	int32_t v3 = 0;                          // 0xba4f8
	int32_t v4 = 0;                          // 0xba4b8
	int32_t v5 = g35 + 64 * *(int32_t *)g36; // 0xba4c0
	// branch -> 0xba494
	int32_t v6; // 0xba57c
	while (true) {
		int32_t v7 = v4; // 0xba4e8
		int32_t v8;      // 0xba51c
		if (*(char *)(v1 + 2) == 2) {
			// 0xba4a0
			if (*(int32_t *)v5 != -1) {
				// 0xba4ac
				if (*(int32_t *)(v1 + 20) != 0) {
					// 0xba4b8
					v7 = v4 + 1;
					// branch -> 0xba4bc
				} else {
					v7 = v4;
				}
				// 0xba4bc
				v8 = v7;
				if (*(char *)(v1 + 26) == 2) {
				lab_0xba4d0_2:
					// 0xba4d0
					if (*(int32_t *)(v5 + 4) != -1) {
						// 0xba4dc
						if (*(int32_t *)(v1 + 44) != 0) {
							// 0xba4e8
							v8 = v7 + 1;
							// branch -> 0xba4ec
						} else {
							v8 = v7;
						}
					} else {
						v8 = v7;
					}
				}
			lab_0xba4ec_2:;
				int32_t v9 = v5 + 8; // 0xba4f0
				int32_t v10 = v8;    // 0xba550
				if (*(char *)(v1 + 50) == 2) {
					// 0xba504
					if (*(int32_t *)v9 != -1) {
						// 0xba510
						if (*(int32_t *)(v1 + 68) != 0) {
							// 0xba51c
							v10 = v8 + 1;
							// branch -> 0xba520
						} else {
							v10 = v8;
						}
					} else {
						v10 = v8;
					}
				}
				int32_t v11 = v5 + 12; // 0xba524
				v6 = v10;
				if (*(char *)(v1 + 74) == 2) {
					// 0xba538
					if (*(int32_t *)v11 != -1) {
						// 0xba544
						if (*(int32_t *)(v1 + 92) != 0) {
							// 0xba550
							v6 = v10 + 1;
							// branch -> 0xba554
						} else {
							v6 = v10;
						}
					} else {
						v6 = v10;
					}
				}
				int32_t v12 = v2 - 1; // 0xba560
				if (v12 == 0) {
					// break -> 0xba564
					break;
				}
				v2 = v12;
				v3 += 3;
				v4 = v6;
				v5 += 16;
				v1 += 96;
				// continue -> 0xba494
				continue;
			} else {
				v7 = v4;
			}
			// 0xba4bc
			if (*(char *)(v1 + 26) == 2) {
				goto lab_0xba4d0_2;
			}
			v8 = v7;
			goto lab_0xba4ec_2;
		}
		// 0xba4bc
		if (*(char *)(v1 + 26) == 2) {
			goto lab_0xba4d0_2;
		}
		v8 = v7;
		goto lab_0xba4ec_2;
	}
	// 0xba564
	int32_t v13;
	int32_t v14; // 0xba57c
	if (v6 < 7) {
		// 0xba57c
		v14 = 15 - v6;
		v13 = 2;
		// branch -> 0xba584
	} else {
		// 0xba56c
		v14 = 14 - (v6 / 2 | v6 & -0x80000000);
		v13 = 1;
		// branch -> 0xba584
	}
	int32_t v15 = v14;                        // r25
	int32_t v16 = 0;                          // r26
	int32_t v17 = 0;                          // 0xba5ec17
	int32_t v18 = v14;                        // 0xba5d0
	int32_t v19 = *(int32_t *)(g23 - 0x706c); // 0xba5cc
	int32_t v20 = 0;                          // 0xba5b0
	// branch -> 0xba59c
	while (true) {
		int32_t v21 = v1;  // 0xba5fc
		int32_t v22 = v19; // 0xba5f8
		int32_t v23 = v20; // 0xba5f0
		int32_t v24 = v17; // 0xba5ec
		int32_t v25 = v18; // 0xba5d015
		int32_t v26;       // 0xba5ec
		if (*(char *)(v1 + 2) == 2) {
			// 0xba5a8
			if (*(int32_t *)(g35 + 64 * *(int32_t *)g36 + v20) != -1) {
				// 0xba5c0
				if (*(int32_t *)(v1 + 20) != 0) {
					// 0xba5cc
					function_b6e4c(0, v18, 1, *(int32_t *)(v19 + 16), 0, 1);
					int32_t v27 = v13 + v15; // 0xba5e8
					v15 = v27;
					v21 = g33;
					v22 = g31;
					v23 = g32;
					v24 = v16;
					v25 = v27;
					// branch -> 0xba5ec
				} else {
					v21 = v1;
					v22 = v19;
					v23 = v20;
					v24 = v17;
					v25 = v18;
				}
				// 0xba5ec
				v26 = v24 + 1;
				v16 = v26;
				if (v26 >= 16) {
					// break -> 0xba604
					break;
				}
				v17 = v26;
				v18 = v25;
				v19 = v22 + 20;
				v20 = v23 + 4;
				v1 = v21 + 24;
				// continue -> 0xba59c
				continue;
			}
			// 0xba5ec
			v26 = v17 + 1;
			v16 = v26;
			if (v26 >= 16) {
				// break -> 0xba604
				break;
			}
			v17 = v26;
			v19 += 20;
			v20 += 4;
			v1 += 24;
			// continue -> 0xba59c
			continue;
		}
		// 0xba5ec
		v26 = v24 + 1;
		v16 = v26;
		if (v26 >= 16) {
			// break -> 0xba604
			break;
		}
		v17 = v26;
		v18 = v25;
		v19 = v22 + 20;
		v20 = v23 + 4;
		v1 = v21 + 24;
		// continue -> 0xba59c
	}
	// 0xba604
	function_b6e4c(0, v14 - 2, 1, *(int32_t *)(g23 - 0x57cc), 1, 1);
	return function_b6e4c(0, 22, 1, *(int32_t *)(g23 - 0x5718), 0, 1);
}

// Address range: 0xba650 - 0xba720
int32_t function_ba650(void)
{
	// 0xba650
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	function_b6e4c(0, 1, 1, *(int32_t *)(g23 - 0x56f0), 3, 0);
	function_b6e4c(0, 3, 1, *(int32_t *)(g23 - 0x57d0), 3, 0);
	function_b6e4c(0, 9, 1, *(int32_t *)(g23 - 0x56f8), 3, 0);
	function_b6e4c(0, 12, 1, *(int32_t *)(g23 - 0x57d4), 1, 1);
	function_b6e4c(0, 18, 1, *(int32_t *)(g23 - 0x57d8), 0, 1);
	function_b6dfc(5);
	int32_t result = *(int32_t *)(g23 - 0x6f10); // 0xba704
	*(int32_t *)result = 20;
	return result;
}

// Address range: 0xba720 - 0xba7d4
int32_t function_ba720(void)
{
	// 0xba720
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	function_b6e4c(0, 2, 1, *(int32_t *)(g23 - 0x57dc), 3, 0);
	function_b6e4c(0, 9, 1, *(int32_t *)(g23 - 0x56f8), 3, 0);
	function_b6e4c(0, 12, 1, *(int32_t *)(g23 - 0x57e0), 1, 1);
	function_b6e4c(0, 18, 1, *(int32_t *)(g23 - 0x5790), 0, 1);
	function_b6dfc(5);
	int32_t result = *(int32_t *)(g23 - 0x6f10); // 0xba7b8
	*(int32_t *)result = 20;
	return result;
}

// Address range: 0xba7d4 - 0xba888
int32_t function_ba7d4(void)
{
	// 0xba7d4
	*(char *)*(int32_t *)(g23 - 0x6ef4) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x6ef8) = 0;
	function_b6e4c(0, 2, 1, *(int32_t *)(g23 - 0x57e4), 3, 0);
	function_b6e4c(0, 9, 1, *(int32_t *)(g23 - 0x56f8), 3, 0);
	function_b6e4c(0, 12, 1, *(int32_t *)(g23 - 0x57e8), 1, 1);
	function_b6e4c(0, 18, 1, *(int32_t *)(g23 - 0x57ec), 0, 1);
	function_b6dfc(5);
	int32_t result = *(int32_t *)(g23 - 0x6f10); // 0xba86c
	*(int32_t *)result = 20;
	return result;
}

// Address range: 0xba888 - 0xbaa6c
int32_t function_ba888(char a1)
{
	int32_t v1 = g36; // 0xba888
	g36 = a1;
	int32_t v2 = g10; // 0xba890
	int32_t v3 = g35; // 0xba898
	int32_t v4 = 0;   // r0
	g33 = *(int32_t *)(g23 - 0x6f10);
	g35 = *(int32_t *)(g23 - 0x6f00);
	*(int32_t *)*(int32_t *)(g23 - 0x77c0) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x77bc) = v4;
	*(int32_t *)*(int32_t *)(g23 - 0x77c4) = v4;
	*(int32_t *)*(int32_t *)(g23 - 0x77c8) = v4;
	*(int32_t *)*(int32_t *)(g23 - 0x7704) = v4;
	ReleaseStoreBtn(function_b6c90(0, 24));
	int32_t v5 = 0x1000000 * g36; // 0xba8e8
	if (v5 / 0x1000000 <= 23) {
		// 0xba8f4
		return *(int32_t *)(*(int32_t *)(g23 - 0x57f0) + v5 / 0x400000);
	}
	int32_t v6 = 0;                          // 0xba9f8
	int32_t v7 = *(int32_t *)(g23 - 0x6efc); // 0xba9f4
	// branch -> 0xbaa04
	int32_t v8;      // 0xbaa24
	int32_t v9;      // 0xbaa28
	int32_t result2; // 0xbaa2c
	while (true) {
		// 0xbaa04
		v8 = v6;
		if (*(int32_t *)(v7 + 148) == 0) {
			// 0xba9f4
			if (v6 > 22) {
				v8 = 24;
				// break -> 0xbaa10
				break;
			}
			v6++;
			v7 += 156;
			// continue -> 0xbaa04
			continue;
		}
		// 0xbaa10
		if (v8 == 24) {
			// 0xbaa18
			*(int32_t *)g35 = -1;
			// branch -> 0xbaa28
		} else {
			// 0xbaa24
			*(int32_t *)g35 = v8;
			// branch -> 0xbaa28
		}
		// 0xbaa28
		v9 = g36;
		result2 = *(int32_t *)(g23 - 0x7764);
		*(char *)result2 = (char)v9;
		if (0x1000000 * v9 == 0x2000000) {
			// 0xbaa3c
			if (*(int32_t *)g33 == 0) {
				int32_t result = function_ba888(1); // 0xbaa4c
				// branch -> 0xbaa50
				// 0xbaa50
				g36 = v1;
				g10 = v2;
				g35 = v3;
				return result;
			}
		}
		// 0xbaa50
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result2;
	}
	// 0xbaa10
	if (v8 == 24) {
		// 0xbaa18
		*(int32_t *)g35 = -1;
		// branch -> 0xbaa28
	} else {
		// 0xbaa24
		*(int32_t *)g35 = v8;
		// branch -> 0xbaa28
	}
	// 0xbaa28
	v9 = g36;
	result2 = *(int32_t *)(g23 - 0x7764);
	int32_t result3 = result2; // r3
	*(char *)result2 = (char)v9;
	if (0x1000000 * v9 == 0x2000000) {
		// 0xbaa3c
		if (*(int32_t *)g33 == 0) {
			// 0xbaa48
			result3 = function_ba888(1);
			// branch -> 0xbaa50
		}
	}
	// 0xbaa50
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result3;
}

// Address range: 0xbaa6c - 0xbabb8
int32_t DrawSText(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6ef4); // 0xbaa74
	if (*(char *)v1 == 0) {
		// 0xbaaa4
		function_b65e8(v1);
		// branch -> 0xbaab0
	} else {
		// 0xbaaac
		DrawQTextBack();
		// branch -> 0xbaab0
	}
	// 0xbaab0
	int32_t v2; // r29
	int32_t v3; // 0xbab24
	int32_t v4; // 0xbab30
	int32_t v5; // 0xbab54
	int32_t v6; // 0xbab20
	if (*(int32_t *)g35 != 0) {
		unsigned char v7 = *(char *)*(int32_t *)(g23 - 0x7764); // 0xbaac0
		if (v7 <= 18) {
			// 0xbaad0
			return *(int32_t *)(*(int32_t *)(g23 - 0x57f4) + 4 * (int32_t)v7);
		}
		// 0xbab1c
		g32 = 0;
		v6 = *(int32_t *)(g23 - 0x6efc);
		v2 = v6;
		v4 = 0;
		v3 = v6;
		// branch -> 0xbab24
		while (true) {
			// 0xbab24
			v5 = v3;
			if (*(int32_t *)(v3 + 144) != 0) {
			lab_0xbab30:
				// 0xbab30
				DrawSLine(v4);
				v5 = v2;
				// branch -> 0xbab38
			}
		lab_0xbab38:;
			char *v8 = (char *)(v5 + 8); // 0xbab38
			int32_t v9 = v5;             // 0xbab64
			if (*v8 != 0) {
				int32_t v10 = *(int32_t *)(v5 + 136);    // 0xbab4c
				unsigned char v11 = *(char *)(v5 + 140); // 0xbab54
				int32_t v12 = *(int32_t *)(v5 + 152);    // 0xbab58
				PrintSString(*(int32_t *)v5, g32, v10, v8, (int32_t)v11, v12);
				v9 = g33;
				// branch -> 0xbab60
			}
			int32_t v13 = g32 + 1; // 0xbab60
			g32 = v13;
			int32_t v14 = v9 + 156; // 0xbab64
			v2 = v14;
			if (v13 >= 24) {
				// break -> 0xbab70
				break;
			}
			v4 = v13;
			v3 = v14;
			// continue -> 0xbab24
		}
		// 0xbab70
		if (*(int32_t *)g35 != 0) {
			// 0xbab7c
			function_b6abc(4, 20);
			// branch -> 0xbab88
		}
		int32_t *v15 = (int32_t *)g36; // 0xbab88
		int32_t result = *v15 % 8;     // 0xbab8c
		*v15 = result + 1;
		return result;
	}
	// 0xbab1c
	g32 = 0;
	v6 = *(int32_t *)(g23 - 0x6efc);
	v2 = v6;
	v4 = 0;
	v3 = v6;
	// branch -> 0xbab24
	while (true) {
		// 0xbab24
		if (*(int32_t *)(v3 + 144) == 0) {
			v5 = v3;
			goto lab_0xbab38;
		}
		goto lab_0xbab30;
	}
}

// Address range: 0xbabb8 - 0xbad54
int32_t function_babb8(int32_t a1)
{
	int32_t v1 = g36; // 0xbabb8
	g35 = *(int32_t *)(g23 - 0x6f0c);
	g36 = *(int32_t *)(g23 - 0x6f00);
	char *v2 = (char *)*(int32_t *)(g23 - 0x7730); // 0xbabdc
	int32_t result;                                // 0xbad50
	if (*v2 == 0) {
		unsigned char v3 = *(char *)*(int32_t *)(g23 - 0x7764); // 0xbac10
		if (v3 <= 23) {
			// 0xbac20
			return *(int32_t *)(*(int32_t *)(g23 - 0x57f8) + 4 * (int32_t)v3);
		}
		// 0xbac10
		result = g34;
		// branch -> 0xbad3c
	} else {
		// 0xbabec
		g34 = *(int32_t *)(g23 - 0x7794);
		*v2 = 0;
		if (*(char *)g34 == 0) {
			// 0xbac04
			g34 = sfx_stop();
			// branch -> 0xbac08
		}
		// 0xbac08
		result = function_6c704();
		// branch -> 0xbad3c
	}
	// 0xbad3c
	g36 = v1;
	return result;
}

// Address range: 0xbad54 - 0xbae80
int32_t STextUp(void)
{
	int32_t v1 = g36; // 0xbad54
	int32_t v2 = g10; // 0xbad58
	g36 = *(int32_t *)(g23 - 0x6efc);
	g34 = 69;
	int32_t v3 = g35; // 0xbad64
	g35 = *(int32_t *)(g23 - 0x6f00);
	int32_t v4 = g33; // 0xbad6c
	g33 = *(int32_t *)(g23 - 0x6f14);
	int32_t result = PlaySFX(69); // 0xbad7c
	int32_t *v5 = (int32_t *)g35; // 0xbad80
	int32_t v6 = *v5;             // 0xbad80
	if (v6 == -1) {
		// 0xbae64
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return result;
	}
	// 0xbad8c
	if (*(int32_t *)*(int32_t *)(g23 - 0x6ef8) == 0) {
		// 0xbae0c
		*v5 = v6 == 0 ? 23 : v6 - 1;
		int32_t *v7 = (int32_t *)g35; // 0xbae4c14
		int32_t v8 = *v7;             // 0xbae4c15
		int32_t result3 = 156 * v8;   // 0xbae5016
		if (*(int32_t *)(g36 + result3 + 148) == 0) {
			int32_t result2; // 0xbae50
			while (true) {
				// 0xbae30
				int32_t v9;
				if (v8 == 0) {
					// 0xbae38
					v9 = 23;
					// branch -> 0xbae4c
				} else {
					// 0xbae40
					v9 = *v7 - 1;
					// branch -> 0xbae4c
				}
				// 0xbae4c
				*v7 = v9;
				int32_t *v10 = (int32_t *)g35; // 0xbae4c
				int32_t v11 = *v10;            // 0xbae4c
				result2 = 156 * v11;
				if (*(int32_t *)(g36 + result2 + 148) != 0) {
					// break -> 0xbae64
					break;
				}
				v8 = v11;
				v7 = v10;
				// continue -> 0xbae30
			}
			// 0xbae64
			// branch -> 0xbae64
			// 0xbae64
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result2;
		}
		// 0xbae64
		// branch -> 0xbae64
		// 0xbae64
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return result3;
	}
	// 0xbad9c
	int32_t result5; // 0xbadac
	if (v6 == *(int32_t *)*(int32_t *)(g23 - 0x6f18)) {
		int32_t *v12 = (int32_t *)g33; // 0xbadac
		result5 = *v12;
		if (result5 != 0) {
			// 0xbadb8
			*v12 = result5 - 1;
			// branch -> 0xbae64
		} else {
			result5 = 0;
		}
	} else {
		// 0xbadc4
		*v5 = v6 - 1;
		int32_t *v13 = (int32_t *)g35; // 0xbadf027
		int32_t v14 = *v13;            // 0xbadf028
		int32_t v15 = 156 * v14;       // 0xbadf429
		if (*(int32_t *)(g36 + v15 + 148) == 0) {
			int32_t result4; // 0xbadf4
			while (true) {
				// 0xbadd4
				int32_t v16;
				if (v14 == 0) {
					// 0xbaddc
					v16 = 23;
					// branch -> 0xbadf0
				} else {
					// 0xbade4
					v16 = *v13 - 1;
					// branch -> 0xbadf0
				}
				// 0xbadf0
				*v13 = v16;
				int32_t *v17 = (int32_t *)g35; // 0xbadf0
				int32_t v18 = *v17;            // 0xbadf0
				result4 = 156 * v18;
				if (*(int32_t *)(g36 + result4 + 148) != 0) {
					// break -> 0xbae64
					break;
				}
				v14 = v18;
				v13 = v17;
				// continue -> 0xbadd4
			}
			// 0xbae64
			// branch -> 0xbae64
			// 0xbae64
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result4;
		}
		// 0xbae64
		result5 = v15;
		// branch -> 0xbae64
	}
	// 0xbae64
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	return result5;
}

// Address range: 0xbae80 - 0xbafb4
int32_t STextDown(void)
{
	// 0xbae80
	g36 = *(int32_t *)(g23 - 0x6efc);
	g34 = 69;
	int32_t v1 = g35; // 0xbae90
	g35 = *(int32_t *)(g23 - 0x6f00);
	g33 = *(int32_t *)(g23 - 0x6f14);
	int32_t result = PlaySFX(69); // 0xbaea8
	int32_t *v2 = (int32_t *)g35; // 0xbaeac
	int32_t v3 = *v2;             // 0xbaeac
	if (v3 == -1) {
		// 0xbaf98
		g35 = v1;
		return result;
	}
	// 0xbaeb8
	if (*(int32_t *)*(int32_t *)(g23 - 0x6ef8) == 0) {
		// 0xbaf40
		*v2 = v3 == 23 ? 0 : v3 + 1;
		int32_t *v4 = (int32_t *)g35; // 0xbaf8014
		int32_t v5 = *v4;             // 0xbaf8015
		int32_t result3 = 156 * v5;   // 0xbaf8416
		if (*(int32_t *)(g36 + result3 + 148) == 0) {
			int32_t result2; // 0xbaf84
			while (true) {
				// 0xbaf64
				int32_t v6;
				if (v5 == 23) {
					// 0xbaf6c
					v6 = 0;
					// branch -> 0xbaf80
				} else {
					// 0xbaf74
					v6 = *v4 + 1;
					// branch -> 0xbaf80
				}
				// 0xbaf80
				*v4 = v6;
				int32_t *v7 = (int32_t *)g35; // 0xbaf80
				int32_t v8 = *v7;             // 0xbaf80
				result2 = 156 * v8;
				if (*(int32_t *)(g36 + result2 + 148) != 0) {
					// break -> 0xbaf98
					break;
				}
				v5 = v8;
				v4 = v7;
				// continue -> 0xbaf64
			}
			// 0xbaf98
			// branch -> 0xbaf98
			// 0xbaf98
			g35 = v1;
			return result2;
		}
		// 0xbaf98
		// branch -> 0xbaf98
		// 0xbaf98
		g35 = v1;
		return result3;
	}
	// 0xbaec8
	int32_t result5; // 0xbafb0
	if (v3 == *(int32_t *)*(int32_t *)(g23 - 0x6f1c)) {
		int32_t v9 = *(int32_t *)(g23 - 0x6f20); // 0xbaed8
		int32_t *v10 = (int32_t *)g33;           // 0xbaedc
		int32_t v11 = *v10;                      // 0xbaedc
		if (v11 < *(int32_t *)v9) {
			// 0xbaeec
			*v10 = v11 + 1;
			result5 = v9;
			// branch -> 0xbaf98
		} else {
			result5 = v9;
		}
	} else {
		// 0xbaef8
		*v2 = v3 + 1;
		int32_t *v12 = (int32_t *)g35; // 0xbaf2427
		int32_t v13 = *v12;            // 0xbaf2428
		int32_t v14 = 156 * v13;       // 0xbaf2829
		if (*(int32_t *)(g36 + v14 + 148) == 0) {
			int32_t result4; // 0xbaf28
			while (true) {
				// 0xbaf08
				int32_t v15;
				if (v13 == 23) {
					// 0xbaf10
					v15 = 0;
					// branch -> 0xbaf24
				} else {
					// 0xbaf18
					v15 = *v12 + 1;
					// branch -> 0xbaf24
				}
				// 0xbaf24
				*v12 = v15;
				int32_t *v16 = (int32_t *)g35; // 0xbaf24
				int32_t v17 = *v16;            // 0xbaf24
				result4 = 156 * v17;
				if (*(int32_t *)(g36 + result4 + 148) != 0) {
					// break -> 0xbaf98
					break;
				}
				v13 = v17;
				v12 = v16;
				// continue -> 0xbaf08
			}
			// 0xbaf98
			// branch -> 0xbaf98
			// 0xbaf98
			g35 = v1;
			return result4;
		}
		// 0xbaf98
		result5 = v14;
		// branch -> 0xbaf98
	}
	// 0xbaf98
	g35 = v1;
	return result5;
}

// Address range: 0xbafb4 - 0xbb04c
int32_t STextPrior(void)
{
	// 0xbafb4
	g36 = *(int32_t *)(g23 - 0x6f00);
	g34 = 69;
	g35 = *(int32_t *)(g23 - 0x6f14);
	int32_t result = PlaySFX(69); // r3
	int32_t *v1 = (int32_t *)g36; // 0xbafd8
	int32_t v2 = *v1;             // 0xbafd8
	if (v2 == -1) {
		// 0xbb034
		return result;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x6ef8); // 0xbafe4
	if (*(int32_t *)result2 == 0) {
		// 0xbb034
		return result2;
	}
	int32_t result3 = *(int32_t *)(g23 - 0x6f18); // 0xbaff4
	int32_t v3 = *(int32_t *)result3;             // 0xbaff8
	if (v2 != v3) {
		// 0xbb030
		*v1 = v3;
		// branch -> 0xbb034
		// 0xbb034
		return result3;
	}
	int32_t *v4 = (int32_t *)g35; // 0xbb004
	int32_t result4 = *v4;        // 0xbb004
	if (result4 != 0) {
		// 0xbb010
		*v4 = result4 - 4;
		// branch -> 0xbb018
	}
	int32_t *v5 = (int32_t *)g35; // 0xbb018
	if (*v5 <= 0xffffffff) {
		// 0xbb024
		*v5 = 0;
		// branch -> 0xbb034
	}
	// 0xbb034
	return result4;
}

// Address range: 0xbb04c - 0xbb0e8
int32_t STextNext(void)
{
	// 0xbb04c
	g36 = *(int32_t *)(g23 - 0x6f00);
	g34 = 69;
	g35 = *(int32_t *)(g23 - 0x6f14);
	int32_t result = PlaySFX(69); // r3
	int32_t *v1 = (int32_t *)g36; // 0xbb070
	int32_t v2 = *v1;             // 0xbb070
	if (v2 == -1) {
		// 0xbb0d0
		return result;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x6ef8); // 0xbb07c
	if (*(int32_t *)result2 == 0) {
		// 0xbb0d0
		return result2;
	}
	int32_t v3 = *(int32_t *)(g23 - 0x6f1c); // 0xbb08c
	result = v3;
	int32_t v4 = *(int32_t *)v3; // 0xbb090
	if (v2 == v4) {
		int32_t *v5 = (int32_t *)g35;                        // 0xbb0a0
		int32_t v6 = *v5;                                    // 0xbb0a0
		int32_t v7 = *(int32_t *)*(int32_t *)(g23 - 0x6f20); // 0xbb0a4
		result = v7;
		int32_t v8 = v7; // 0xbb0c4
		if (v6 < v7) {
			// 0xbb0b0
			*v5 = v6 + 4;
			v8 = result;
			// branch -> 0xbb0b8
		}
		int32_t *v9 = (int32_t *)g35; // 0xbb0b8
		if (*v9 > v8) {
			// 0xbb0c4
			*v9 = v8;
			// branch -> 0xbb0d0
		}
	} else {
		// 0xbb0cc
		*v1 = v4;
		// branch -> 0xbb0d0
	}
	// 0xbb0d0
	return result;
}

// Address range: 0xbb0e8 - 0xbb1b0
int32_t function_bb0e8(void)
{
	int32_t result = *(int32_t *)*(int32_t *)(g23 - 0x6f00); // 0xbb0f8
	uint32_t v1 = result - 10;                               // 0xbb0fc
	if (v1 > 10) {
		// 0xbb1a0
		return result;
	}
	// 0xbb108
	return *(int32_t *)(*(int32_t *)(g23 - 0x57fc) + 4 * v1);
}

// Address range: 0xbb1b0 - 0xbb1fc
int32_t function_bb1b0(int32_t a1, int32_t a2)
{
	int32_t result = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1 + 368 * a2; // 0xbb1c0
	uint32_t v1 = *(int32_t *)(result + 3948);                            // 0xbb1c4
	if (v1 >= 2500) {
		// 0xbb1d0
		*(int32_t *)(result + 3944) = 6;
		return result;
	}
	// 0xbb1dc
	if (v1 > 1000) {
		// 0xbb1f0
		*(int32_t *)(result + 3944) = 5;
		return result;
	}
	// 0xbb1e4
	*(int32_t *)(result + 3944) = 4;
	return result;
}

// Address range: 0xbb1fc - 0xbb248
int32_t function_bb1fc(int32_t a1, int32_t a2)
{
	int32_t result = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1 + 368 * a2; // 0xbb20c
	uint32_t v1 = *(int32_t *)(result + 0x4918);                          // 0xbb210
	if (v1 >= 2500) {
		// 0xbb21c
		*(int32_t *)(result + 0x4914) = 6;
		return result;
	}
	// 0xbb228
	if (v1 > 1000) {
		// 0xbb23c
		*(int32_t *)(result + 0x4914) = 5;
		return result;
	}
	// 0xbb230
	*(int32_t *)(result + 0x4914) = 4;
	return result;
}

// Address range: 0xbb248 - 0xbb4b0
int32_t function_bb248(int32_t a1)
{
	int32_t v1 = g36; // 0xbb248
	int32_t v2 = g10; // 0xbb24c
	g36 = *(int32_t *)(g23 - 0x77a8);
	int32_t v3 = g35;                        // 0xbb254
	int32_t v4 = *(int32_t *)(g23 - 0x77ac); // 0xbb258
	g35 = v4;
	int32_t v5 = g33; // 0xbb25c
	g33 = a1;
	int32_t v6 = function_5b990(*(int32_t *)v4); // 0xbb274
	int32_t v7 = 0;                              // r28
	*(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 456) = v6 - g33;
	int32_t v8 = v7;
	int32_t v9;      // 0xbb304
	int32_t v10;     // 0xbb340
	int32_t v11;     // 0xbb358
	int32_t v12;     // 0xbb3dc
	int32_t v13;     // 0xbb3f0
	int32_t v14;     // 0xbb3f8
	int32_t v15;     // 0xbb408
	int32_t v16;     // 0xbb45c
	int32_t result3; // 0xbb3f0
	int32_t v17;     // 0xbb3f8
	int32_t result2; // 0xbb470
	int32_t v18;     // 0xbb478
	int32_t result;  // 0xbb37c
	if (v8 > 7) {
		// 0xbb304
		v9 = g33;
		if (v9 >= 1) {
			// 0xbb36c
			v7 = 0;
			v11 = 0;
			v10 = v9;
			// branch -> 0xbb374
			while (true) {
				// 0xbb374
				if (v10 > 0) {
					goto lab_0xbb314;
				}
				// 0xbb37c
				result = *(int32_t *)(g23 - 0x76bc);
				*(int32_t *)result = 255;
				if (v10 < 1) {
					// 0xbb37c
					// branch -> 0xbb490
					// 0xbb490
					g36 = v1;
					g10 = v2;
					g35 = v3;
					g33 = v5;
					return result;
				}
				v12 = 0;
				while (true) {
					// 0xbb3f0
					v13 = g35;
					result3 = *(int32_t *)v13;
					v14 = g36;
					v17 = v14 + 0x55ec * result3;
					v15 = g33;
					if (v12 < *(int32_t *)(v17 + 0x4828)) {
						goto lab_0xbb408_3;
					}
					// 0xbb410
					if (v15 >= 1) {
						v16 = 0;
						while (true) {
							// 0xbb470
							result2 = *(int32_t *)v13;
							v18 = 0x55ec * result2 + v14;
							if (v16 < *(int32_t *)(v18 + 0x4828)) {
								goto lab_0xbb488_3;
							}
							// 0xbb490
							g36 = v1;
							g10 = v2;
							g35 = v3;
							g33 = v5;
							return result2;
						}
					}
				}
				// 0xbb490
				g36 = v1;
				g10 = v2;
				g35 = v3;
				g33 = v5;
				return result3;
			}
		}
		// 0xbb37c
		result = *(int32_t *)(g23 - 0x76bc);
		*(int32_t *)result = 255;
		if (v9 < 1) {
			// 0xbb37c
			// branch -> 0xbb490
		} else {
			v12 = 0;
			while (true) {
				// 0xbb3f0
				v13 = g35;
				result3 = *(int32_t *)v13;
				v14 = g36;
				v17 = v14 + 0x55ec * result3;
				v15 = g33;
				if (v12 < *(int32_t *)(v17 + 0x4828)) {
					goto lab_0xbb408_3;
				}
				// 0xbb410
				if (v15 >= 1) {
					v16 = 0;
					while (true) {
						// 0xbb470
						result2 = *(int32_t *)v13;
						v18 = 0x55ec * result2 + v14;
						if (v16 < *(int32_t *)(v18 + 0x4828)) {
							goto lab_0xbb488_3;
						}
						// 0xbb490
						g36 = v1;
						g10 = v2;
						g35 = v3;
						g33 = v5;
						return result2;
					}
				}
				// 0xbb490
				g36 = v1;
				g10 = v2;
				g35 = v3;
				g33 = v5;
				return result3;
			}
		}
		// 0xbb490
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v5;
		return result;
	}
	while (true) {
		int32_t v19 = g33; // 0xbb2fc
		if (v19 > 0) {
			int32_t v20 = *(int32_t *)g35;               // 0xbb294
			int32_t v21 = 0x55ec * v20 + 368 * v8 + g36; // 0xbb2a4
			int32_t v22;                                 // 0xbb2f0
			if (*(int32_t *)(v21 + 0x485c) == 11) {
				int32_t *v23 = (int32_t *)(v21 + 0x4918); // 0xbb2b4
				int32_t v24 = *v23;                       // 0xbb2b4
				if (v24 != 0x1388) {
					// 0xbb2c0
					int32_t v25; // 0xbb2d0
					if (v24 > v19) {
						// 0xbb2c8
						*v23 = v24 - v19;
						v25 = v7;
						function_bb1fc(v20, v25);
						g33 = 0;
						// branch -> 0xbb2f0
					} else {
						// 0xbb2e0
						g37 = v8;
						function_595cc(v20);
						v25 = -1;
						// branch -> 0xbb2f0
					}
					// 0xbb2f0
					v22 = v25 + 1;
					v7 = v22;
					if (v22 > 7) {
						// break -> 0xbb304
						break;
					}
					v8 = v22;
					// continue -> 0xbb2fc
					continue;
				}
			}
			// 0xbb2f0
			v22 = v8 + 1;
			v7 = v22;
			if (v22 > 7) {
				// break -> 0xbb304
				break;
			}
			v8 = v22;
			// continue -> 0xbb2fc
			continue;
		}
	}
	// 0xbb304
	v9 = g33;
	int32_t result4; // 0xbb4ac
	if (v9 < 1) {
		// 0xbb37c
		result = *(int32_t *)(g23 - 0x76bc);
		*(int32_t *)result = 255;
		if (v9 < 1) {
			// 0xbb37c
			result4 = result;
			// branch -> 0xbb490
		} else {
			v12 = 0;
			while (true) {
				// 0xbb3f0
				v13 = g35;
				result3 = *(int32_t *)v13;
				v14 = g36;
				v17 = v14 + 0x55ec * result3;
				v15 = g33;
				if (v12 < *(int32_t *)(v17 + 0x4828)) {
					goto lab_0xbb408_3;
				}
				// 0xbb410
				if (v15 >= 1) {
					v16 = 0;
					while (true) {
						// 0xbb470
						result2 = *(int32_t *)v13;
						v18 = 0x55ec * result2 + v14;
						if (v16 < *(int32_t *)(v18 + 0x4828)) {
							goto lab_0xbb488_3;
						}
						// 0xbb490
						g36 = v1;
						g10 = v2;
						g35 = v3;
						g33 = v5;
						return result2;
					}
				} else {
					result4 = result3;
				}
			}
		}
		// 0xbb490
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v5;
		return result4;
	}
	// 0xbb36c
	v7 = 0;
	v11 = 0;
	v10 = v9;
	// branch -> 0xbb374
	int32_t v26; // 0xbb384
	while (true) {
		// 0xbb374
		if (v10 > 0) {
		lab_0xbb314:;
			int32_t v27 = *(int32_t *)g35;                // 0xbb314
			int32_t v28 = 0x55ec * v27 + 368 * v11 + g36; // 0xbb324
			int32_t v29 = v10;
			int32_t v30 = v11; // 0xbb368
			int32_t v31;       // 0xbb368
			if (*(int32_t *)(v28 + 0x485c) == 11) {
				int32_t *v32 = (int32_t *)(v28 + 0x4918); // 0xbb334
				int32_t v33 = *v32;                       // 0xbb334
				if (v33 > v10) {
					// 0xbb340
					*v32 = v33 - v10;
					int32_t v34 = v7; // 0xbb348
					function_bb1fc(v27, v34);
					g33 = 0;
					v29 = 0;
					v30 = v34;
					// branch -> 0xbb368
				} else {
					// 0xbb358
					g37 = v11;
					function_595cc(v27);
					v29 = g33;
					v30 = -1;
					// branch -> 0xbb368
				}
				// 0xbb368
				v31 = v30 + 1;
				v7 = v31;
				if (v31 > 7) {
					v26 = v29;
					// break -> 0xbb37c
					break;
				}
				v11 = v31;
				v10 = v29;
				// continue -> 0xbb374
				continue;
			}
			// 0xbb368
			v31 = v30 + 1;
			v7 = v31;
			if (v31 > 7) {
				v26 = v29;
				// break -> 0xbb37c
				break;
			}
			v11 = v31;
			v10 = v29;
			// continue -> 0xbb374
			continue;
		} else {
			v26 = v10;
		}
	}
	// 0xbb37c
	result = *(int32_t *)(g23 - 0x76bc);
	*(int32_t *)result = 255;
	if (v26 < 1) {
		// 0xbb37c
		result4 = result;
		// branch -> 0xbb490
	} else {
		v12 = 0;
		while (true) {
			// 0xbb3f0
			v13 = g35;
			result3 = *(int32_t *)v13;
			v14 = g36;
			v17 = v14 + 0x55ec * result3;
			v15 = g33;
			if (v12 < *(int32_t *)(v17 + 0x4828)) {
			lab_0xbb408_3:
				// 0xbb408
				if (v15 > 0) {
					int32_t v35 = v17 + 368 * v12; // 0xbb39c
					if (*(int32_t *)(v35 + 3760) == 11) {
						int32_t *v36 = (int32_t *)(v35 + 3948); // 0xbb3b0
						int32_t v37 = *v36;                     // 0xbb3b0
						if (v37 != 0x1388) {
							// 0xbb3bc
							int32_t v38; // 0xbb3cc
							if (v37 > v15) {
								// 0xbb3c4
								*v36 = v37 - v15;
								v38 = v12;
								function_bb1b0(result3, v38);
								g33 = 0;
								// branch -> 0xbb3ec
							} else {
								// 0xbb3dc
								g37 = v12;
								function_591d8(result3);
								v38 = -1;
								// branch -> 0xbb3ec
							}
							// 0xbb3ec
							v12 = v38 + 1;
							// branch -> 0xbb3f0
							continue;
						}
					}
					// 0xbb3ec
					v12++;
					// branch -> 0xbb3f0
					continue;
				}
			}
			// 0xbb410
			if (v15 >= 1) {
				int32_t v39 = v14; // 0xbb478
				int32_t v40 = v13; // 0xbb470
				v16 = 0;
				while (true) {
					// 0xbb470
					result2 = *(int32_t *)v40;
					v18 = 0x55ec * result2 + v39;
					if (v16 < *(int32_t *)(v18 + 0x4828)) {
					lab_0xbb488_3:;
						int32_t v41 = g33; // 0xbb488
						if (v41 > 0) {
							int32_t v42 = v18 + 368 * v16; // 0xbb424
							int32_t v43 = v16;             // 0xbb46c
							if (*(int32_t *)(v42 + 3760) == 11) {
								int32_t *v44 = (int32_t *)(v42 + 3948); // 0xbb438
								int32_t v45 = *v44;                     // 0xbb438
								if (v45 > v41) {
									// 0xbb444
									*v44 = v45 - v41;
									int32_t v46 = v16; // 0xbb44c
									function_bb1b0(result2, v46);
									g33 = 0;
									v43 = v46;
									// branch -> 0xbb46c
								} else {
									// 0xbb45c
									g37 = v16;
									function_591d8(result2);
									v43 = -1;
									// branch -> 0xbb46c
								}
								// 0xbb46c
								v39 = g36;
								v40 = g35;
								v16 = v43 + 1;
								// branch -> 0xbb470
								continue;
							}
							// 0xbb46c
							v39 = g36;
							v40 = g35;
							v16 = v43 + 1;
							// branch -> 0xbb470
							continue;
						} else {
							result4 = result2;
						}
					} else {
						result4 = result2;
					}
				}
			} else {
				result4 = result3;
			}
		}
	}
	// 0xbb490
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v5;
	return result4;
}

// Address range: 0xbb4b0 - 0xbb5cc
int32_t function_bb4b0(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0xbb4b8
	g36 = v1;
	g35 = *(int32_t *)(g23 - 0x71a4);
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xbb4c8
	g33 = v2;
	function_bb248(*(int32_t *)(0x55ec * *(int32_t *)v1 + v2 + 0x549c));
	int32_t v3 = g33 + 0x55ec * *(int32_t *)g36; // 0xbb4f0
	if (*(char *)(v3 + 0x5410) == 0) {
		// 0xbb500
		*(int32_t *)(v3 + 0x540c) = 0;
		// branch -> 0xbb508
	}
	// 0xbb508
	function_b7170();
	int32_t v4 = *(int32_t *)(g23 - 0x6f18);                 // 0xbb50c
	int32_t v5 = *(int32_t *)(g23 - 0x6f38);                 // 0xbb514
	int32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x6f0c);     // 0xbb51c
	int32_t v7 = (v6 - *(int32_t *)v4) / 4 + *(int32_t *)v5; // 0xbb52c
	int32_t v8 = v7;                                         // r8
	int32_t v9 = g35;                                        // 0xbb540
	int32_t v10 = v9 + 368 * v7;                             // 0xbb540
	if (v7 == 19) {
		// 0xbb53c
		*(int32_t *)(v10 + 8) = -1;
		// branch -> 0xbb5a4
	} else {
		int32_t v11 = v10; // r7
		if (*(int32_t *)(v10 + 376) != -1) {
			while (true) {
				int32_t v12 = 46;        // ctr
				int32_t v13 = v10 - 8;   // 0xbb574
				int32_t v14 = v10 + 360; // 0xbb56c
				// branch -> 0xbb56c
				while (true) {
					int32_t v15 = v14 + 8; // 0xbb56c
					int32_t v16 = v15;     // r5
					int32_t v17 = v13 + 8; // 0xbb574
					*(int32_t *)v17 = *(int32_t *)v15;
					*(int32_t *)(v13 + 12) = *(int32_t *)(v14 + 12);
					int32_t v18 = v12 - 1; // 0xbb57c
					v12 = v18;
					if (v18 == 0) {
						int32_t v19 = v11;       // 0xbb580
						int32_t v20 = v19 + 368; // 0xbb580
						v11 = v20;
						int32_t v21 = v8 + 1; // 0xbb584
						v8 = v21;
						if (*(int32_t *)(v19 + 744) == -1) {
							// 0xbb588
							// branch -> 0xbb594
							// 0xbb594
							*(int32_t *)(368 * v21 + g35 + 8) = -1;
							// branch -> 0xbb5a4
							// 0xbb5a4
							return CalcPlrInv(*(int32_t *)g36, 1);
						}
						// 0xbb580
						v10 = v20;
						// branch -> 0xbb560
						break;
					} else {
						// 0xbb56c
						v13 = v17;
						v14 = v16;
						// branch -> 0xbb56c
						continue;
					}
				}
			}
		}
		// 0xbb594
		*(int32_t *)(368 * v7 + v9 + 8) = -1;
		// branch -> 0xbb5a4
	}
	// 0xbb5a4
	return CalcPlrInv(*(int32_t *)g36, 1);
}

// Address range: 0xbb5cc - 0xbb750
int32_t function_bb5cc(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbb5d4
	g33 = *(int32_t *)(g23 - 0x7654);
	g35 = *(int32_t *)(g23 - 0x7650);
	int32_t v2 = *(int32_t *)(g23 - 0x71a4); // 0xbb5e0
	g36 = *(int32_t *)(g23 - 0x77ac);
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // r6
	int32_t v4 = *(int32_t *)v1;             // 0xbb5f4
	if (v4 == 22) {
		int32_t result = function_ba888(1); // r3
		*(int32_t *)v1 = 12;
		// branch -> 0xbb73c
		// 0xbb73c
		return result;
	}
	// 0xbb614
	*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 2;
	*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = v4;
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x6f14); // 0xbb630
	int32_t v6 = *(int32_t *)(g23 - 0x6f18);             // 0xbb634
	*(int32_t *)*(int32_t *)(g23 - 0x6f38) = v5;
	int32_t v7 = 0x55ec * *(int32_t *)g36;                    // 0xbb650
	int32_t v8 = v3 + v7;                                     // 0xbb658
	int32_t v9 = v2 + 368 * ((v4 - *(int32_t *)v6) / 4 + v5); // 0xbb660
	int32_t result3;                                          // 0xbb674
	if (*(int32_t *)(v8 + 456) < *(int32_t *)(v9 + 200)) {
		// 0xbb670
		result3 = function_ba888(9);
		// branch -> 0xbb73c
	} else {
		int32_t v10 = 46;          // ctr
		int32_t v11 = v8 + 0x53cc; // 0xbb694
		int32_t v12 = v9 - 8;      // 0xbb68c
		// branch -> 0xbb68c
		while (true) {
			int32_t v13 = v12 + 8; // 0xbb68c
			int32_t v14 = v11 + 8; // 0xbb694
			*(int32_t *)v14 = *(int32_t *)v13;
			*(int32_t *)(v11 + 12) = *(int32_t *)(v12 + 12);
			int32_t v15 = v10 - 1; // 0xbb69c
			v10 = v15;
			if (v15 == 0) {
				// 0xbb6a0
				g34 = *(int32_t *)(v7 + v3 + 0x5494) + 12;
				SetCursor_();
				g32 = -0x6db6db6d;
				int32_t v16 = 0; // 0xbb6c8
				int32_t v17 = 0; // 0xbb710
				// branch -> 0xbb710
				int32_t result2; // 0xbb738
				int32_t v18;     // 0xbb700
				while (true) {
					int32_t v19 = v17; // 0xbb718
					if (v17 == 0) {
						int32_t v20 = *(int32_t *)g35;                                          // 0xbb6c4
						int32_t v21 = *(int32_t *)g33;                                          // 0xbb6cc
						int64_t v22 = g32;                                                      // 0xbb6d4
						int32_t v23 = ((int32_t)(v22 * (int64_t)v20 / 0x100000000) + v20) / 16; // 0xbb6e4
						int32_t v24 = ((int32_t)(v22 * (int64_t)v21 / 0x100000000) + v21) / 16; // 0xbb6ec
						v18 = function_56c68(*(int32_t *)g36, (int64_t)v16, v23, v24, 0);
						int32_t v25 = g31 + 1; // 0xbb704
						if (v25 > 39) {
							// break -> 0xbb718
							break;
						}
						v16 = v25;
						v17 = v18;
						// continue -> 0xbb710
						continue;
					}
					// 0xbb718
					if (v19 == 0) {
						// 0xbb72c
						function_ba888(10);
						// branch -> 0xbb734
						// 0xbb734
						g34 = 1;
						result2 = SetCursor_();
						// branch -> 0xbb73c
						// 0xbb73c
						return result2;
					}
					// 0xbb720
					function_ba888(11);
					// branch -> 0xbb734
					// 0xbb734
					g34 = 1;
					result2 = SetCursor_();
					// branch -> 0xbb73c
					// 0xbb73c
					return result2;
				}
				// 0xbb718
				if (v18 == 0) {
					// 0xbb72c
					function_ba888(10);
					// branch -> 0xbb734
					// 0xbb734
					g34 = 1;
					result2 = SetCursor_();
					// branch -> 0xbb73c
					// 0xbb73c
					return result2;
				}
				// 0xbb720
				function_ba888(11);
				// branch -> 0xbb734
				// 0xbb734
				g34 = 1;
				result2 = SetCursor_();
				// branch -> 0xbb73c
				// 0xbb73c
				return result2;
			}
			// 0xbb68c
			v11 = v14;
			v12 = v13;
			// branch -> 0xbb68c
		}
	}
	// 0xbb73c
	return result3;
}

// Address range: 0xbb750 - 0xbb858
int32_t function_bb750(void)
{
	// 0xbb750
	g36 = *(int32_t *)(g23 - 0x71a8);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xbb760
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0xbb768
	g33 = v2;
	function_bb248(*(int32_t *)(0x55ec * *(int32_t *)v2 + v1 + 0x549c));
	int32_t v3 = g35 + 0x55ec * *(int32_t *)g33; // 0xbb790
	if (*(char *)(v3 + 0x5410) == 0) {
		// 0xbb7a0
		*(int32_t *)(v3 + 0x540c) = 0;
		// branch -> 0xbb7a8
	}
	// 0xbb7a8
	function_b7170();
	int32_t v4 = *(int32_t *)(g23 - 0x6f18);                 // 0xbb7ac
	int32_t v5 = g36;                                        // 0xbb7b0
	int32_t v6 = *(int32_t *)(g23 - 0x6f0c);                 // 0xbb7b4
	int32_t v7 = *(int32_t *)*(int32_t *)(g23 - 0x6f38);     // 0xbb7cc
	int32_t v8 = (*(int32_t *)v6 - *(int32_t *)v4) / 4 + v7; // 0xbb7d8
	int32_t v9 = 0;                                          // 0xbb804
	if (v8 > -1) {
		int32_t v10 = 0;
		int32_t v11 = v5;
		int32_t v12;
		while (true) {
			// 0xbb7e0
			v12 = v10;
			int32_t v13 = v11;
			if (*(int32_t *)(v11 + 8) == -1) {
				int32_t v14 = v11;       // 0xbb7f427
				int32_t v15 = v14 + 368; // 0xbb7f411
				int32_t v16 = v10 + 1;   // 0xbb7f812
				v12 = v16;
				while (*(int32_t *)(v14 + 376) == -1) {
					// 0xbb7f4
					v14 = v15;
					v15 = v14 + 368;
					v16++;
					v12 = v16;
					// continue -> 0xbb7f4
				}
				// 0xbb7f4
				if (v8 <= 0) {
					// break -> 0xbb7fc
					break;
				}
				v8--;
				v10 = v12 + 1;
				v11 = v15 + 368;
				// continue -> 0xbb7e0
				continue;
			}
			// 0xbb7f4
			if (v8 <= 0) {
				// break -> 0xbb7fc
				break;
			}
			v8--;
			v10 = v12 + 1;
			v11 = v13 + 368;
			// continue -> 0xbb7e0
		}
		// 0xbb7fc
		v9 = v12;
		// branch -> 0xbb804
	}
	// 0xbb804
	*(int32_t *)(368 * v9 + v5 + 8) = -1;
	int32_t *v17 = (int32_t *)*(int32_t *)(g23 - 0x71ac); // 0xbb818
	*v17 = *v17 - 1;
	char v18 = *(char *)(g35 + 0x55ec * *(int32_t *)g33 + 436); // 0xbb830
	return function_63488((int32_t)v18);
}

// Address range: 0xbb858 - 0xbba10
int32_t function_bb858(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbb860
	g33 = *(int32_t *)(g23 - 0x7654);
	g35 = *(int32_t *)(g23 - 0x7650);
	g36 = *(int32_t *)(g23 - 0x77ac);
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // r6
	int32_t v3 = *(int32_t *)(g23 - 0x71a8); // 0xbb874
	int32_t v4 = *(int32_t *)v1;             // 0xbb880
	if (v4 == 22) {
		int32_t result = function_ba888(1); // r3
		*(int32_t *)v1 = 14;
		// branch -> 0xbb9fc
		// 0xbb9fc
		return result;
	}
	// 0xbb8a0
	*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 18;
	*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = v4;
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x6f14); // 0xbb8c8
	*(int32_t *)*(int32_t *)(g23 - 0x6f38) = v5;
	int32_t v6 = (v4 - *(int32_t *)*(int32_t *)(g23 - 0x6f18)) / 4 + v5; // 0xbb8e0
	int32_t v7;                                                          // 0xbb910
	if (v6 > -1) {
		int32_t v8 = 0;
		int32_t v9 = v3;
		// branch -> 0xbb8e8
		int32_t v10;
		while (true) {
			int32_t v11 = v9;
			v10 = v8;
			if (*(int32_t *)(v9 + 8) == -1) {
				int32_t v12 = v9;        // 0xbb8fc36
				int32_t v13 = v12 + 368; // 0xbb8fc15
				int32_t v14 = v8 + 1;    // 0xbb90016
				v10 = v14;
				while (*(int32_t *)(v12 + 376) == -1) {
					// 0xbb8fc
					v12 = v13;
					v13 = v12 + 368;
					v14++;
					v10 = v14;
					// continue -> 0xbb8fc
				}
				// 0xbb8fc
				if (v6 <= 0) {
					// break -> 0xbb904
					break;
				}
				v8 = v10 + 1;
				v6--;
				v9 = v13 + 368;
				// continue -> 0xbb8e8
				continue;
			}
			// 0xbb8fc
			if (v6 <= 0) {
				// break -> 0xbb904
				break;
			}
			v8 = v10 + 1;
			v6--;
			v9 = v11 + 368;
			// continue -> 0xbb8e8
		}
		// 0xbb904
		v7 = v10;
		// branch -> 0xbb90c
	} else {
		// 0xbb8a0
		v7 = 0;
		// branch -> 0xbb90c
	}
	int32_t v15 = 0x55ec * *(int32_t *)g36; // 0xbb914
	int32_t v16 = v3 + 368 * v7;            // 0xbb918
	int32_t v17 = v2 + v15;                 // 0xbb920
	int32_t result3;                        // 0xbb934
	if (*(int32_t *)(v17 + 456) < *(int32_t *)(v16 + 200)) {
		// 0xbb930
		result3 = function_ba888(9);
		// branch -> 0xbb9fc
	} else {
		int32_t v18 = 46;           // ctr
		int32_t v19 = v17 + 0x53cc; // 0xbb954
		int32_t v20 = v16 - 8;      // 0xbb94c
		// branch -> 0xbb94c
		while (true) {
			int32_t v21 = v20 + 8; // 0xbb94c
			int32_t v22 = v19 + 8; // 0xbb954
			*(int32_t *)v22 = *(int32_t *)v21;
			*(int32_t *)(v19 + 12) = *(int32_t *)(v20 + 12);
			int32_t v23 = v18 - 1; // 0xbb95c
			v18 = v23;
			if (v23 == 0) {
				// 0xbb960
				g34 = *(int32_t *)(v15 + v2 + 0x5494) + 12;
				SetCursor_();
				g32 = -0x6db6db6d;
				int32_t v24 = 0; // 0xbb988
				int32_t v25 = 0; // 0xbb9d0
				// branch -> 0xbb9d0
				int32_t result2; // 0xbb9f8
				int32_t v26;     // 0xbb9c0
				while (true) {
					int32_t v27 = v25; // 0xbb9d8
					if (v25 == 0) {
						int32_t v28 = *(int32_t *)g35;                                          // 0xbb984
						int32_t v29 = *(int32_t *)g33;                                          // 0xbb98c
						int64_t v30 = g32;                                                      // 0xbb994
						int32_t v31 = ((int32_t)(v30 * (int64_t)v28 / 0x100000000) + v28) / 16; // 0xbb9a4
						int32_t v32 = ((int32_t)(v30 * (int64_t)v29 / 0x100000000) + v29) / 16; // 0xbb9ac
						v26 = function_56c68(*(int32_t *)g36, (int64_t)v24, v31, v32, 0);
						int32_t v33 = g31 + 1; // 0xbb9c4
						if (v33 > 39) {
							// break -> 0xbb9d8
							break;
						}
						v24 = v33;
						v25 = v26;
						// continue -> 0xbb9d0
						continue;
					}
					// 0xbb9d8
					if (v27 == 0) {
						// 0xbb9ec
						function_ba888(10);
						// branch -> 0xbb9f4
						// 0xbb9f4
						g34 = 1;
						result2 = SetCursor_();
						// branch -> 0xbb9fc
						// 0xbb9fc
						return result2;
					}
					// 0xbb9e0
					function_ba888(11);
					// branch -> 0xbb9f4
					// 0xbb9f4
					g34 = 1;
					result2 = SetCursor_();
					// branch -> 0xbb9fc
					// 0xbb9fc
					return result2;
				}
				// 0xbb9d8
				if (v26 == 0) {
					// 0xbb9ec
					function_ba888(10);
					// branch -> 0xbb9f4
					// 0xbb9f4
					g34 = 1;
					result2 = SetCursor_();
					// branch -> 0xbb9fc
					// 0xbb9fc
					return result2;
				}
				// 0xbb9e0
				function_ba888(11);
				// branch -> 0xbb9f4
				// 0xbb9f4
				g34 = 1;
				result2 = SetCursor_();
				// branch -> 0xbb9fc
				// 0xbb9fc
				return result2;
			}
			// 0xbb94c
			v19 = v22;
			v20 = v21;
			// branch -> 0xbb94c
		}
	}
	// 0xbb9fc
	return result3;
}

// Address range: 0xbba10 - 0xbbc9c
int32_t function_bba10(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10;                                                                  // 0xbba1c
	int32_t v2 = *(int32_t *)(g23 - 0x6f24) + 368 * a1;                                // 0xbba24
	int32_t v3 = *(int32_t *)(v2 + 200);                                               // 0xbba3c
	int32_t v4 = v3;                                                                   // r29
	uint64_t v5 = 0x68db8bad * (int64_t)v3;                                            // 0xbba40
	int32_t v6 = (int32_t)(v5 / 0x100000000) >> 31;                                    // 0xbba44
	int32_t v7 = (v6 & -0x200000 | (int32_t)(v5 / 0x80000000000)) + (int32_t)(v6 < 0); // 0xbba50
	g34 = *(int32_t *)(v2 + 192) + 12;
	SetCursor_();
	int32_t v8 = *(int32_t *)*(int32_t *)(g23 - 0x7650); // 0xbba8c
	int32_t v9 = *(int32_t *)*(int32_t *)(g23 - 0x7654); // 0xbba90
	g34 = 1;
	int32_t v10 = ((int32_t)(-0x6db6db6d * (int64_t)v9 / 0x100000000) + v9) / 16 * ((int32_t)(-0x6db6db6d * (int64_t)v8 / 0x100000000) + v8) / 16; // 0xbbac0
	SetCursor_();
	if (v10 >= (int32_t)(-0x1388 * v7 != -v3) + v7) {
		// 0xbbad0
		// branch -> 0xbbc80
		// 0xbbc80
		g10 = v1;
		return 1;
	}
	int32_t v11 = *(int32_t *)(g23 - 0x77a8);                            // 0xbbae4
	int32_t v12 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v11; // 0xbbaf4
	int32_t v13 = 4;                                                     // 0xbbbe8
	int32_t v14 = v12;                                                   // 0xbbb0c
	// branch -> 0xbbafc
	int32_t v15; // 0xbbc6c
	while (true) {
		int32_t v16 = v10; // 0xbbb1c
		if (*(char *)(v14 + 0x482c) == 0) {
			// 0xbbb08
			v16 = v10 + 1;
			// branch -> 0xbbb0c
		}
		int32_t v17 = v16; // 0xbbb34
		if (*(char *)(v14 + 0x482d) == 0) {
			// 0xbbb1c
			v17 = v16 + 1;
			// branch -> 0xbbb20
		}
		int32_t v18 = v17; // 0xbbb4c
		if (*(char *)(v14 + 0x482e) == 0) {
			// 0xbbb34
			v18 = v17 + 1;
			// branch -> 0xbbb38
		}
		int32_t v19 = v18; // 0xbbb64
		if (*(char *)(v14 + 0x482f) == 0) {
			// 0xbbb4c
			v19 = v18 + 1;
			// branch -> 0xbbb50
		}
		int32_t v20 = v19; // 0xbbb7c
		if (*(char *)(v14 + 0x4830) == 0) {
			// 0xbbb64
			v20 = v19 + 1;
			// branch -> 0xbbb68
		}
		int32_t v21 = v20; // 0xbbb94
		if (*(char *)(v14 + 0x4831) == 0) {
			// 0xbbb7c
			v21 = v20 + 1;
			// branch -> 0xbbb80
		}
		int32_t v22 = v21; // 0xbbbac
		if (*(char *)(v14 + 0x4832) == 0) {
			// 0xbbb94
			v22 = v21 + 1;
			// branch -> 0xbbb98
		}
		int32_t v23 = v22; // 0xbbbc4
		if (*(char *)(v14 + 0x4833) == 0) {
			// 0xbbbac
			v23 = v22 + 1;
			// branch -> 0xbbbb0
		}
		int32_t v24 = v23; // 0xbbbdc
		if (*(char *)(v14 + 0x4834) == 0) {
			// 0xbbbc4
			v24 = v23 + 1;
			// branch -> 0xbbbc8
		}
		// 0xbbbc8
		v15 = v24;
		if (*(char *)(v14 + 0x4835) == 0) {
			// 0xbbbdc
			v15 = v24 + 1;
			// branch -> 0xbbbe0
		}
		int32_t v25 = v13 - 1; // 0xbbbe8
		if (v25 == 0) {
			// break -> 0xbbbec
			break;
		}
		v13 = v25;
		v10 = v15;
		v14 += 10;
		// continue -> 0xbbafc
	}
	uint32_t v26 = *(int32_t *)(v12 + 0x4828); // 0xbbbec
	if (v26 >= 1) {
		while (true) {
			// 0xbbbfc
			int32_t v27; // 0xbbc34
			if (*(int32_t *)(v12 + 3760) == 11) {
				int32_t v28 = *(int32_t *)(v12 + 3948); // 0xbbc08
				if (v28 != 0x1388) {
					int32_t v29 = v4; // 0xbbc14
					if (v29 + v28 > 0x1388) {
						// 0xbbc28
						v4 = v29 + v28 - 0x1388;
						// branch -> 0xbbc30
					} else {
						// 0xbbc20
						v4 = 0;
						// branch -> 0xbbc30
					}
					// 0xbbc30
					v27 = v26 - 1;
					if (v27 == 0) {
						// break -> 0xbbc38
						break;
					}
					v26 = v27;
					v12 += 368;
					// continue -> 0xbbbfc
					continue;
				}
			}
			// 0xbbc30
			v27 = v26 - 1;
			if (v27 == 0) {
				// break -> 0xbbc38
				break;
			}
			v26 = v27;
			v12 += 368;
			// continue -> 0xbbbfc
		}
		// 0xbbc38
		// branch -> 0xbbc38
	}
	uint64_t v30 = 0x68db8bad * (int64_t)v4;                                               // 0xbbc40
	int32_t v31 = (int32_t)(v30 / 0x100000000) >> 31;                                      // 0xbbc44
	int32_t v32 = (v31 & -0x200000 | (int32_t)(v30 / 0x80000000000)) + (int32_t)(v31 < 0); // 0xbbc50
	int32_t result;                                                                        // 0xbbc98
	if (v15 < (int32_t)(-0x1388 * v32 != -v4) + v32) {
		// 0xbbc7c
		result = 0;
		// branch -> 0xbbc80
	} else {
		// 0xbbc74
		result = 1;
		// branch -> 0xbbc80
	}
	// 0xbbc80
	g10 = v1;
	return result;
}

// Address range: 0xbbc9c - 0xbbdb4
int32_t function_bbc9c(int32_t a1)
{
	int32_t v1 = g10; // 0xbbca0
	g32 = *(int32_t *)(g23 - 0x7174);
	g33 = *(int32_t *)(g23 - 0x77ac);
	g35 = *(int32_t *)(g23 - 0x77a8);
	g36 = 0x66666667;
	int32_t v2 = a1; // 0xbbdb016
	int32_t v3 = 0;  // 0xbbd00
	int32_t v4 = 0;  // 0xbbd98
	                 // branch -> 0xbbd98
lab_0xbbd98:;
	int32_t result2; // 0xbbdb018
	while (true) {
		int32_t result = v2; // 0xbbdb0
		if (v4 == 0) {
			uint64_t v5 = (int64_t)g36 * (int64_t)v3;                           // 0xbbcd0
			int32_t v6 = *(int32_t *)g33;                                       // 0xbbcd4
			int32_t v7 = (int32_t)(v5 / 0x100000000) >> 31;                     // 0xbbcd8
			int32_t v8 = v7 < 0;                                                // 0xbbce0
			int32_t v9 = (v7 & -0x40000000 | (int32_t)(v5 / 0x400000000)) + v8; // 0xbbce8
			int32_t v10 = g35 + 0x55ec * v6;                                    // 0xbbcfc
			result2 = v6;
			int32_t v11 = v3; // 0xbbd8c
			int32_t v12;      // 0xbbd8c
			if (*(char *)(-10 * v9 + v3 + 10 * v9 + 0x482c + v10) == 0) {
				// 0xbbd18
				function_5d1cc(v6, (int32_t *)g32);
				int32_t v13 = 46;                             // ctr
				int32_t v14 = g35 + 0x55ec * *(int32_t *)g33; // 0xbbd3c
				int32_t v15 = v14;                            // r7
				int32_t v16 = v14 + 368 * g29;                // 0xbbd40
				int32_t v17 = v16 + 3744;                     // 0xbbd50
				int32_t v18 = g32 - 8;                        // 0xbbd48
				// branch -> 0xbbd48
				while (true) {
					int32_t v19 = v18 + 8; // 0xbbd48
					int32_t v20 = v19;     // r5
					int32_t v21 = v17 + 8; // 0xbbd50
					*(int32_t *)v21 = *(int32_t *)v19;
					*(int32_t *)(v17 + 12) = *(int32_t *)(v18 + 12);
					int32_t v22 = v13 - 1; // 0xbbd58
					v13 = v22;
					if (v22 == 0) {
						int32_t *v23 = (int32_t *)(v15 + 0x4828); // 0xbbd5c
						*v23 = *v23 + 1;
						int32_t v24 = g29;                                                // 0xbbd70
						int32_t v25 = 0x1000000 * *(int32_t *)(v15 + 0x4828) / 0x1000000; // 0xbbd78
						*(char *)(g31 + 0x482c + g30 + v15) = (char)v25;
						*(int32_t *)(v16 + 3948) = a1;
						result2 = function_bb1b0(v24, v24);
						// branch -> 0xbbd8c
						// 0xbbd8c
						v12 = g28 + 1;
						if (v12 > 39) {
							// break (via goto) -> 0xbbda0
							goto lab_0xbbda0;
						}
						v2 = result2;
						v3 = v12;
						v4 = 1;
						// continue (via goto) -> 0xbbd98
						goto lab_0xbbd98;
					} else {
						// 0xbbd48
						v17 = v21;
						v18 = v20;
						// branch -> 0xbbd48
						continue;
					}
				}
				// 0xbbda0
				g10 = v1;
				return result;
			}
			// 0xbbd8c
			v12 = v11 + 1;
			if (v12 > 39) {
				// break -> 0xbbda0
				break;
			}
			v2 = result2;
			v3 = v12;
			v4 = 0;
			// continue -> 0xbbd98
			continue;
		}
		// 0xbbda0
		g10 = v1;
		return result;
	}
lab_0xbbda0:
	// 0xbbda0
	g10 = v1;
	return result2;
}

// Address range: 0xbbdb4 - 0xbbf7c
int32_t function_bbdb4(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0xbbdd4
	g35 = v1;
	g36 = *(int32_t *)(g23 - 0x77a8);
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x6f18);                 // 0xbbde8
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x6f38);                 // 0xbbdec
	int32_t v4 = (*(int32_t *)*(int32_t *)(g23 - 0x6f0c) - v2) / 4 + v3; // 0xbbdf8
	char v5 = *(char *)(v4 + *(int32_t *)(g23 - 0x6f28));                // 0xbbdfc
	int32_t v6 = v5;                                                     // 0xbbe04
	if (v5 < 0) {
		// 0xbbe1c
		g37 = -1 - v6;
		function_595cc(*(int32_t *)v1);
		// branch -> 0xbbe30
	} else {
		// 0xbbe0c
		g37 = v6;
		function_591d8(*(int32_t *)v1);
		// branch -> 0xbbe30
	}
	int32_t *v7 = (int32_t *)g31;         // 0xbbe34
	int32_t v8 = g32 + 368 * g33;         // 0xbbe3c
	int32_t v9 = v8;                      // r7
	int32_t v10 = *(int32_t *)(v8 + 200); // r28
	*v7 = *v7 - 1;
	int32_t v11 = *(int32_t *)g31; // 0xbbe48
	int32_t v12 = g33;             // 0xbbe4c
	int32_t v13;                   // r26
	int32_t v14;                   // r29
	int32_t v15;                   // r3
	int32_t v16;                   // 0xbbf38
	int32_t v17;                   // 0xbbf54
	int32_t result2;               // 0xbbf64
	int32_t *v18;                  // 0xbbeb0
	int32_t result;                // 0xbbf20
	int32_t v19;                   // 0xbbf28
	if (v12 != v11) {
		int32_t v20 = g30 + v12; // r8
		if (v12 < v11) {
			while (true) {
				int32_t v21 = 46;        // ctr
				int32_t v22 = v9;        // 0xbbe64
				int32_t v23 = v22 - 8;   // 0xbbe74
				int32_t v24 = v22 + 360; // 0xbbe6c
				// branch -> 0xbbe6c
				while (true) {
					int32_t v25 = v24 + 8; // 0xbbe6c
					int32_t v26 = v25;     // r5
					int32_t v27 = v23 + 8; // 0xbbe74
					*(int32_t *)v27 = *(int32_t *)v25;
					*(int32_t *)(v23 + 12) = *(int32_t *)(v24 + 12);
					int32_t v28 = v21 - 1; // 0xbbe7c
					v21 = v28;
					if (v28 == 0) {
						int32_t v29 = v20; // 0xbbe80
						v9 += 368;
						g33++;
						*(char *)v29 = *(char *)(v29 + 1);
						v20++;
						if (g33 < v11) {
							// 0xbbe80
							// branch -> 0xbbe60
							break;
						} else {
							// 0xbbe9c
							v14 = 0;
							v13 = 0;
							v18 = (int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 456);
							*v18 = v10 + *v18;
							int32_t v30 = v14; // 0xbbf30
							// branch -> 0xbbf20
							while (true) {
								// 0xbbf20
								result = *(int32_t *)g35;
								v15 = result;
								v19 = g36 + 0x55ec * result;
								v16 = v10;
								if (v30 < *(int32_t *)(v19 + 0x4828)) {
								lab_0xbbf38:
									// 0xbbf38
									if (v16 > 0) {
										int32_t v31 = v13 + v19; // 0xbbec0
										int32_t v32;             // 0xbbf1c
										if (*(int32_t *)(v31 + 3760) == 11) {
											int32_t *v33 = (int32_t *)(v31 + 3948); // 0xbbed4
											int32_t v34 = *v33;                     // 0xbbed4
											if (v34 != 0x1388) {
												int32_t v35 = v34 + v16; // 0xbbee0
												if (v35 > 0x1388) {
													// 0xbbf00
													*v33 = 0x1388;
													v10 -= (0x1388 - v34);
													function_bb1b0(v15, v14);
													// branch -> 0xbbf18
												} else {
													// 0xbbeec
													*v33 = v35;
													function_bb1b0(v15, v14);
													v10 = 0;
													// branch -> 0xbbf18
												}
												// 0xbbf18
												v13 += 368;
												v32 = v14 + 1;
												v14 = v32;
												v30 = v32;
												// branch -> 0xbbf20
												continue;
											}
										}
										// 0xbbf18
										v13 += 368;
										v32 = v14 + 1;
										v14 = v32;
										v30 = v32;
										// branch -> 0xbbf20
										continue;
									}
								}
								// 0xbbf40
								if (v16 < 1) {
									// 0xbbf68
									return result;
								}
								// 0xbbf58
								if (v16 <= 0x1388) {
									// 0xbbf60
									result2 = function_bbc9c(v16);
									// branch -> 0xbbf68
									// 0xbbf68
									return result2;
								}
								function_bbc9c(0x1388);
								v17 = g32 - 0x1388;
								while (v17 > 0x1388) {
									// 0xbbf4c
									function_bbc9c(0x1388);
									v17 = g32 - 0x1388;
									// continue -> 0xbbf4c
								}
								// 0xbbf60
								result2 = function_bbc9c(v17);
								// branch -> 0xbbf68
								// 0xbbf68
								return result2;
							}
						}
					} else {
						// 0xbbe6c
						v23 = v27;
						v24 = v26;
						// branch -> 0xbbe6c
						continue;
					}
				}
			}
		}
	}
	// 0xbbe9c
	v14 = 0;
	v13 = 0;
	v18 = (int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 456);
	*v18 = v10 + *v18;
	// branch -> 0xbbf20
	while (true) {
		// 0xbbf20
		result = *(int32_t *)g35;
		v15 = result;
		v19 = g36 + 0x55ec * result;
		v16 = v10;
		if (v14 < *(int32_t *)(v19 + 0x4828)) {
			goto lab_0xbbf38;
		}
		// 0xbbf40
		if (v16 < 1) {
			// 0xbbf68
			return result;
		}
		// 0xbbf58
		if (v16 <= 0x1388) {
			// 0xbbf60
			result2 = function_bbc9c(v16);
			// branch -> 0xbbf68
			// 0xbbf68
			return result2;
		}
		function_bbc9c(0x1388);
		v17 = g32 - 0x1388;
		while (v17 > 0x1388) {
			// 0xbbf4c
			function_bbc9c(0x1388);
			v17 = g32 - 0x1388;
			// continue -> 0xbbf4c
		}
		// 0xbbf60
		result2 = function_bbc9c(v17);
		// branch -> 0xbbf68
		// 0xbbf68
		return result2;
	}
}

// Address range: 0xbbf7c - 0xbc060
int32_t function_bbf7c(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbbf84
	g36 = v1;
	int32_t v2 = *(int32_t *)v1; // 0xbbf90
	if (v2 == 22) {
		int32_t result = function_ba888(1); // r3
		*(int32_t *)g36 = 16;
		// branch -> 0xbc04c
		// 0xbc04c
		return result;
	}
	// 0xbbfb0
	*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 3;
	*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = v2;
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x6f14); // 0xbbfd4
	*(int32_t *)*(int32_t *)(g23 - 0x6f38) = v3;
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x77ac);            // 0xbbfe8
	int32_t v5 = (v2 - *(int32_t *)*(int32_t *)(g23 - 0x6f18)) / 4; // 0xbbff4
	int32_t v6 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * v4 + 0x53cc; // 0xbc020
	int32_t v7 = *(int32_t *)(g23 - 0x6f24) - 8 + 368 * (v3 + v5);  // 0xbc018
	int32_t v8 = v7 + 8;                                            // 0xbc018
	int32_t v9 = *(int32_t *)v8;                                    // 0xbc018
	int32_t v10 = v6 + 8;                                           // 0xbc020
	*(int32_t *)v10 = v9;
	*(int32_t *)(v6 + 12) = *(int32_t *)(v7 + 12);
	int32_t v11 = 45; // 0xbc028
	// branch -> 0xbc018
	while (v11 != 0) {
		// 0xbc018
		v6 = v10;
		v7 = v8;
		v8 = v7 + 8;
		v9 = *(int32_t *)v8;
		v10 = v6 + 8;
		*(int32_t *)v10 = v9;
		*(int32_t *)(v6 + 12) = *(int32_t *)(v7 + 12);
		v11--;
		// continue -> 0xbc018
	}
	// 0xbc02c
	int32_t result2; // 0xbc05c
	if (function_bba10(v9, v8, v10) == 0) {
		// 0xbc044
		result2 = function_ba888(10);
		// branch -> 0xbc04c
	} else {
		// 0xbc038
		result2 = function_ba888(11);
		// branch -> 0xbc04c
	}
	// 0xbc04c
	return result2;
}

// Address range: 0xbc060 - 0xbc188
int32_t function_bc060(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xbc068
	g36 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0xbc070
	g35 = v2;
	g33 = *(int32_t *)(g23 - 0x6f24);
	function_bb248(*(int32_t *)(0x55ec * *(int32_t *)v2 + v1 + 0x549c));
	int32_t v3 = *(int32_t *)(g23 - 0x6f18);                 // 0xbc098
	int32_t v4 = *(int32_t *)(g23 - 0x6f0c);                 // 0xbc09c
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x6f38);     // 0xbc0ac
	int32_t result = *(int32_t *)(g23 - 0x6f28);             // r3
	int32_t v6 = (*(int32_t *)v4 - *(int32_t *)v3) / 4 + v5; // 0xbc0bc
	int32_t v7 = g33 + 368 * v6;                             // 0xbc0c4
	*(int32_t *)(v7 + 236) = *(int32_t *)(v7 + 240);
	char v8 = *(char *)(v6 + result); // 0xbc0d0
	int32_t v9 = v8;                  // 0xbc0d4
	int32_t v10 = v9;                 // r4
	if (v8 > -1) {
		int32_t v11 = g36 + 0x55ec * *(int32_t *)g35 + 368 * v9; // 0xbc160
		result = v11;
		*(int32_t *)(v11 + 3988) = *(int32_t *)(v11 + 3992);
		// branch -> 0xbc16c
	} else {
		if (v8 == -1) {
			int32_t v12 = g36 + 0x55ec * *(int32_t *)g35; // 0xbc0ec
			result = v12;
			*(int32_t *)(v12 + 1412) = *(int32_t *)(v12 + 1416);
			v9 = v10;
			// branch -> 0xbc0f8
		}
		int32_t v13 = v9; // 0xbc114
		if (v9 == -2) {
			int32_t v14 = g36 + 0x55ec * *(int32_t *)g35; // 0xbc108
			result = v14;
			*(int32_t *)(v14 + 3620) = *(int32_t *)(v14 + 3624);
			v13 = v10;
			// branch -> 0xbc114
		}
		int32_t v15 = v13; // 0xbc130
		if (v13 == -3) {
			int32_t v16 = g36 + 0x55ec * *(int32_t *)g35; // 0xbc124
			result = v16;
			*(int32_t *)(v16 + 2884) = *(int32_t *)(v16 + 2888);
			v15 = v10;
			// branch -> 0xbc130
		}
		// 0xbc130
		if (v15 == -4) {
			int32_t v17 = g36 + 0x55ec * *(int32_t *)g35; // 0xbc140
			result = v17;
			*(int32_t *)(v17 + 3252) = *(int32_t *)(v17 + 3256);
			// branch -> 0xbc16c
		}
	}
	// 0xbc16c
	return result;
}

// Address range: 0xbc188 - 0xbc278
int32_t function_bc188(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbc190
	g36 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x6f24); // r7
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // r6
	int32_t v4 = *(int32_t *)v1;             // 0xbc1a4
	int32_t result;                          // r3
	if (v4 == 22) {
		// 0xbc1b0
		result = function_ba888(1);
		*(int32_t *)g36 = 18;
		// branch -> 0xbc264
	} else {
		// 0xbc1c4
		*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 4;
		int32_t v5 = 46; // ctr
		*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = v4;
		int32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x6f14); // 0xbc1e8
		*(int32_t *)*(int32_t *)(g23 - 0x6f38) = v6;
		int32_t v7 = 368 * ((v4 - *(int32_t *)*(int32_t *)(g23 - 0x6f18)) / 4 + v6); // 0xbc20c
		int32_t v8 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac);                // 0xbc210
		int32_t v9 = v3 + v8 + 0x53cc;                                               // 0xbc22c
		int32_t v10 = v2 - 8 + v7;                                                   // 0xbc224
		// branch -> 0xbc224
		while (true) {
			int32_t v11 = v10 + 8; // 0xbc224
			int32_t v12 = v9 + 8;  // 0xbc22c
			*(int32_t *)v12 = *(int32_t *)v11;
			*(int32_t *)(v9 + 12) = *(int32_t *)(v10 + 12);
			int32_t v13 = v5 - 1; // 0xbc234
			v5 = v13;
			if (v13 == 0) {
				int32_t v14 = *(int32_t *)(v7 + v2 + 200); // 0xbc244
				if (*(int32_t *)(v8 + v3 + 456) < v14) {
					// 0xbc250
					// branch -> 0xbc264
					// 0xbc264
					return function_ba888(9);
				}
				// 0xbc25c
				// branch -> 0xbc264
				// 0xbc264
				return function_ba888(11);
			}
			// 0xbc224
			v9 = v12;
			v10 = v11;
			// branch -> 0xbc224
		}
	}
	// 0xbc264
	return result;
}

// Address range: 0xbc278 - 0xbc334
int32_t function_bc278(void)
{
	int32_t result = *(int32_t *)*(int32_t *)(g23 - 0x6f00); // 0xbc288
	uint32_t v1 = result - 12;                               // 0xbc28c
	if (v1 > 8) {
		// 0xbc324
		return result;
	}
	// 0xbc298
	return *(int32_t *)(*(int32_t *)(g23 - 0x5800) + 4 * v1);
}

// Address range: 0xbc334 - 0xbc46c
int32_t function_bc334(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f18); // 0xbc33c
	int32_t v2 = *(int32_t *)(g23 - 0x6f38); // 0xbc34c
	g35 = *(int32_t *)(g23 - 0x7178);
	int32_t v3 = *(int32_t *)(g23 - 0x77ac); // 0xbc35c
	g36 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x77a8); // 0xbc364
	g33 = v4;
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x6f0c); // 0xbc368
	if ((v5 - *(int32_t *)v1) / 4 + *(int32_t *)v2 <= 2) {
		// 0xbc38c
		*(int32_t *)(g33 + 0x55ec * *(int32_t *)g36 + 0x53d4) = GetRndSeed();
		v4 = g33;
		v3 = g36;
		// branch -> 0xbc3a0
	}
	// 0xbc3a0
	function_bb248(*(int32_t *)(0x55ec * *(int32_t *)v3 + v4 + 0x549c));
	function_b7170();
	int32_t v6 = g32; // 0xbc3b8
	int32_t result2;
	if (v6 > 2) {
		int32_t v7 = g35;           // 0xbc3dc
		int32_t v8 = v7 + 368 * v6; // 0xbc3dc
		if (v6 == 19) {
			// 0xbc3d8
			*(int32_t *)(v8 + 8) = -1;
			// branch -> 0xbc440
		} else {
			int32_t v9 = v8; // r7
			if (*(int32_t *)(v8 + 376) != -1) {
				while (true) {
					int32_t v10 = 46;       // ctr
					int32_t v11 = v8 - 8;   // 0xbc410
					int32_t v12 = v8 + 360; // 0xbc408
					// branch -> 0xbc408
					while (true) {
						int32_t v13 = v12 + 8; // 0xbc408
						int32_t v14 = v13;     // r5
						int32_t v15 = v11 + 8; // 0xbc410
						*(int32_t *)v15 = *(int32_t *)v13;
						*(int32_t *)(v11 + 12) = *(int32_t *)(v12 + 12);
						int32_t v16 = v10 - 1; // 0xbc418
						v10 = v16;
						if (v16 == 0) {
							int32_t v17 = v9;        // 0xbc41c
							int32_t v18 = v17 + 368; // 0xbc41c
							v9 = v18;
							int32_t v19 = g32 + 1; // 0xbc420
							g32 = v19;
							if (*(int32_t *)(v17 + 744) == -1) {
								// 0xbc424
								// branch -> 0xbc430
								// 0xbc430
								*(int32_t *)(368 * v19 + g35 + 8) = -1;
								// branch -> 0xbc440
								int32_t result = CalcPlrInv(*(int32_t *)g36, 1); // 0xbc448
								// branch -> 0xbc44c
								// 0xbc44c
								return result;
							}
							// 0xbc41c
							v8 = v18;
							// branch -> 0xbc3fc
							break;
						} else {
							// 0xbc408
							v11 = v15;
							v12 = v14;
							// branch -> 0xbc408
							continue;
						}
					}
				}
			}
			// 0xbc430
			*(int32_t *)(368 * v6 + v7 + 8) = -1;
			// branch -> 0xbc440
		}
		// 0xbc440
		result2 = CalcPlrInv(*(int32_t *)g36, 1);
		// branch -> 0xbc44c
	} else {
		// 0xbc3c0
		result2 = CalcPlrInv(*(int32_t *)g36, 1);
		// branch -> 0xbc44c
	}
	// 0xbc44c
	return result2;
}

// Address range: 0xbc46c - 0xbc5f0
int32_t function_bc46c(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbc474
	g33 = *(int32_t *)(g23 - 0x7654);
	g35 = *(int32_t *)(g23 - 0x7650);
	int32_t v2 = *(int32_t *)(g23 - 0x7178); // 0xbc480
	g36 = *(int32_t *)(g23 - 0x77ac);
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // r6
	int32_t v4 = *(int32_t *)v1;             // 0xbc494
	if (v4 == 22) {
		int32_t result = function_ba888(5); // r3
		*(int32_t *)v1 = 14;
		// branch -> 0xbc5dc
		// 0xbc5dc
		return result;
	}
	// 0xbc4b4
	*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 6;
	*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = v4;
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x6f14); // 0xbc4d0
	int32_t v6 = *(int32_t *)(g23 - 0x6f18);             // 0xbc4d4
	*(int32_t *)*(int32_t *)(g23 - 0x6f38) = v5;
	int32_t v7 = 0x55ec * *(int32_t *)g36;                    // 0xbc4f0
	int32_t v8 = v3 + v7;                                     // 0xbc4f8
	int32_t v9 = v2 + 368 * ((v4 - *(int32_t *)v6) / 4 + v5); // 0xbc500
	int32_t result3;                                          // 0xbc514
	if (*(int32_t *)(v8 + 456) < *(int32_t *)(v9 + 200)) {
		// 0xbc510
		result3 = function_ba888(9);
		// branch -> 0xbc5dc
	} else {
		int32_t v10 = 46;          // ctr
		int32_t v11 = v8 + 0x53cc; // 0xbc534
		int32_t v12 = v9 - 8;      // 0xbc52c
		// branch -> 0xbc52c
		while (true) {
			int32_t v13 = v12 + 8; // 0xbc52c
			int32_t v14 = v11 + 8; // 0xbc534
			*(int32_t *)v14 = *(int32_t *)v13;
			*(int32_t *)(v11 + 12) = *(int32_t *)(v12 + 12);
			int32_t v15 = v10 - 1; // 0xbc53c
			v10 = v15;
			if (v15 == 0) {
				// 0xbc540
				g34 = *(int32_t *)(v7 + v3 + 0x5494) + 12;
				SetCursor_();
				g32 = -0x6db6db6d;
				int32_t v16 = 0; // 0xbc568
				int32_t v17 = 0; // 0xbc5b0
				// branch -> 0xbc5b0
				int32_t result2; // 0xbc5d8
				int32_t v18;     // 0xbc5a0
				while (true) {
					int32_t v19 = v17; // 0xbc5b8
					if (v17 == 0) {
						int32_t v20 = *(int32_t *)g35;                                          // 0xbc564
						int32_t v21 = *(int32_t *)g33;                                          // 0xbc56c
						int64_t v22 = g32;                                                      // 0xbc574
						int32_t v23 = ((int32_t)(v22 * (int64_t)v20 / 0x100000000) + v20) / 16; // 0xbc584
						int32_t v24 = ((int32_t)(v22 * (int64_t)v21 / 0x100000000) + v21) / 16; // 0xbc58c
						v18 = function_56e60(*(int32_t *)g36, (int64_t)v16, v23, v24, 0, v23);
						int32_t v25 = g31 + 1; // 0xbc5a4
						if (v25 > 39) {
							// break -> 0xbc5b8
							break;
						}
						v16 = v25;
						v17 = v18;
						// continue -> 0xbc5b0
						continue;
					}
					// 0xbc5b8
					if (v19 == 0) {
						// 0xbc5cc
						function_ba888(10);
						// branch -> 0xbc5d4
						// 0xbc5d4
						g34 = 1;
						result2 = SetCursor_();
						// branch -> 0xbc5dc
						// 0xbc5dc
						return result2;
					}
					// 0xbc5c0
					function_ba888(11);
					// branch -> 0xbc5d4
					// 0xbc5d4
					g34 = 1;
					result2 = SetCursor_();
					// branch -> 0xbc5dc
					// 0xbc5dc
					return result2;
				}
				// 0xbc5b8
				if (v18 == 0) {
					// 0xbc5cc
					function_ba888(10);
					// branch -> 0xbc5d4
					// 0xbc5d4
					g34 = 1;
					result2 = SetCursor_();
					// branch -> 0xbc5dc
					// 0xbc5dc
					return result2;
				}
				// 0xbc5c0
				function_ba888(11);
				// branch -> 0xbc5d4
				// 0xbc5d4
				g34 = 1;
				result2 = SetCursor_();
				// branch -> 0xbc5dc
				// 0xbc5dc
				return result2;
			}
			// 0xbc52c
			v11 = v14;
			v12 = v13;
			// branch -> 0xbc52c
		}
	}
	// 0xbc5dc
	return result3;
}

// Address range: 0xbc5f0 - 0xbc6d4
int32_t function_bc5f0(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbc5f8
	g36 = v1;
	int32_t v2 = *(int32_t *)v1; // 0xbc604
	if (v2 == 22) {
		int32_t result = function_ba888(5); // r3
		*(int32_t *)g36 = 16;
		// branch -> 0xbc6c0
		// 0xbc6c0
		return result;
	}
	// 0xbc624
	*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 7;
	*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = v2;
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x6f14); // 0xbc648
	*(int32_t *)*(int32_t *)(g23 - 0x6f38) = v3;
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x77ac);            // 0xbc65c
	int32_t v5 = (v2 - *(int32_t *)*(int32_t *)(g23 - 0x6f18)) / 4; // 0xbc668
	int32_t v6 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * v4 + 0x53cc; // 0xbc694
	int32_t v7 = *(int32_t *)(g23 - 0x6f24) - 8 + 368 * (v3 + v5);  // 0xbc68c
	int32_t v8 = v7 + 8;                                            // 0xbc68c
	int32_t v9 = *(int32_t *)v8;                                    // 0xbc68c
	int32_t v10 = v6 + 8;                                           // 0xbc694
	*(int32_t *)v10 = v9;
	*(int32_t *)(v6 + 12) = *(int32_t *)(v7 + 12);
	int32_t v11 = 45; // 0xbc69c
	// branch -> 0xbc68c
	while (v11 != 0) {
		// 0xbc68c
		v6 = v10;
		v7 = v8;
		v8 = v7 + 8;
		v9 = *(int32_t *)v8;
		v10 = v6 + 8;
		*(int32_t *)v10 = v9;
		*(int32_t *)(v6 + 12) = *(int32_t *)(v7 + 12);
		v11--;
		// continue -> 0xbc68c
	}
	// 0xbc6a0
	int32_t result2; // 0xbc6d0
	if (function_bba10(v9, v8, v10) == 0) {
		// 0xbc6b8
		result2 = function_ba888(10);
		// branch -> 0xbc6c0
	} else {
		// 0xbc6ac
		result2 = function_ba888(11);
		// branch -> 0xbc6c0
	}
	// 0xbc6c0
	return result2;
}

// Address range: 0xbc6d4 - 0xbc7ac
int32_t function_bc6d4(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0xbc6dc
	g36 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xbc6e4
	g35 = v2;
	g33 = *(int32_t *)(g23 - 0x6f24);
	function_bb248(*(int32_t *)(0x55ec * *(int32_t *)v1 + v2 + 0x549c));
	int32_t v3 = *(int32_t *)(g23 - 0x6f0c);                 // 0xbc710
	int32_t v4 = *(int32_t *)(g23 - 0x6f38);                 // 0xbc714
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x6f18);     // 0xbc71c
	int32_t v6 = (*(int32_t *)v3 - v5) / 4 + *(int32_t *)v4; // 0xbc730
	int32_t v7 = g33 + 368 * v6;                             // 0xbc738
	*(int32_t *)(v7 + 228) = *(int32_t *)(v7 + 232);
	char v8 = *(char *)(v6 + *(int32_t *)(g23 - 0x6f28)); // 0xbc744
	int32_t v9 = *(int32_t *)g36;                         // 0xbc768
	if (v8 > -1) {
		int32_t v10 = g35 + 0x55ec * v9 + 368 * (int32_t)v8; // 0xbc778
		*(int32_t *)(v10 + 3980) = *(int32_t *)(v10 + 3984);
		// branch -> 0xbc784
	} else {
		int32_t v11 = g35 + 0x55ec * v9; // 0xbc758
		*(int32_t *)(v11 + 2876) = *(int32_t *)(v11 + 2880);
		// branch -> 0xbc784
	}
	// 0xbc784
	return CalcPlrInv(*(int32_t *)g36, 1);
}

// Address range: 0xbc7ac - 0xbc89c
int32_t function_bc7ac(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbc7b4
	g36 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x6f24); // r7
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // r6
	int32_t v4 = *(int32_t *)v1;             // 0xbc7c8
	int32_t result;                          // r3
	if (v4 == 22) {
		// 0xbc7d4
		result = function_ba888(5);
		*(int32_t *)g36 = 18;
		// branch -> 0xbc888
	} else {
		// 0xbc7e8
		*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 8;
		int32_t v5 = 46; // ctr
		*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = v4;
		int32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x6f14); // 0xbc80c
		*(int32_t *)*(int32_t *)(g23 - 0x6f38) = v6;
		int32_t v7 = 368 * ((v4 - *(int32_t *)*(int32_t *)(g23 - 0x6f18)) / 4 + v6); // 0xbc830
		int32_t v8 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac);                // 0xbc834
		int32_t v9 = v3 + v8 + 0x53cc;                                               // 0xbc850
		int32_t v10 = v2 - 8 + v7;                                                   // 0xbc848
		// branch -> 0xbc848
		while (true) {
			int32_t v11 = v10 + 8; // 0xbc848
			int32_t v12 = v9 + 8;  // 0xbc850
			*(int32_t *)v12 = *(int32_t *)v11;
			*(int32_t *)(v9 + 12) = *(int32_t *)(v10 + 12);
			int32_t v13 = v5 - 1; // 0xbc858
			v5 = v13;
			if (v13 == 0) {
				int32_t v14 = *(int32_t *)(v7 + v2 + 200); // 0xbc868
				if (*(int32_t *)(v8 + v3 + 456) < v14) {
					// 0xbc874
					// branch -> 0xbc888
					// 0xbc888
					return function_ba888(9);
				}
				// 0xbc880
				// branch -> 0xbc888
				// 0xbc888
				return function_ba888(11);
			}
			// 0xbc848
			v9 = v12;
			v10 = v11;
			// branch -> 0xbc848
		}
	}
	// 0xbc888
	return result;
}

// Address range: 0xbc89c - 0xbc9a8
int32_t function_bc89c(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f2c);                   // 0xbc8a8
	int32_t v2 = *(int32_t *)(g23 - 0x6f0c);                   // r7
	int32_t v3 = *(int32_t *)(*(int32_t *)(g23 - 0x71bc) + 8); // 0xbc8b4
	int32_t *v4 = (int32_t *)*(int32_t *)(g23 - 0x6f00);
	if (v3 != -1) {
		int32_t v5 = *v4; // 0xbc8c4
		if (v5 == 18) {
			int32_t v6 = *(int32_t *)(g23 - 0x77ac); // 0xbc8d0
			int32_t v7 = *(int32_t *)(g23 - 0x77a8); // 0xbc8d4
			int32_t result;                          // 0xbc9a4
			if (*(int32_t *)(0x55ec * *(int32_t *)v6 + v7 + 456) > 49) {
				// 0xbc918
				function_bb248(50);
				result = function_ba888(13);
				// branch -> 0xbc998
			} else {
				// 0xbc8f0
				*(int32_t *)v1 = 12;
				int32_t v8 = *(int32_t *)(g23 - 0x6f38); // 0xbc900
				*(int32_t *)v2 = v5;
				*(int32_t *)v8 = *(int32_t *)*(int32_t *)(g23 - 0x6f14);
				result = function_ba888(9);
				// branch -> 0xbc998
			}
			// 0xbc998
			return result;
		}
	}
	int32_t v9 = *v4; // 0xbc92c
	int32_t result2;  // 0xbc984
	int32_t result3;  // 0xbc98c
	if (v9 != 8) {
		// 0xbc940
		if (v9 == 12) {
			// 0xbc948
			if (v3 == -1) {
				// 0xbc950
				*(int32_t *)*(int32_t *)(g23 - 0x6f34) = 8;
				*(int32_t *)v1 = 12;
				*(int32_t *)v2 = v9;
				*(int32_t *)*(int32_t *)(g23 - 0x6f3c) = 225;
				*(int32_t *)*(int32_t *)(g23 - 0x6f40) = 234;
				result2 = function_ba888(19);
				// branch -> 0xbc998
				// 0xbc998
				return result2;
			}
		}
		// 0xbc98c
		result3 = *(int32_t *)(g23 - 0x7764);
		*(char *)result3 = 0;
		// branch -> 0xbc998
		// 0xbc998
		return result3;
	}
	// 0xbc938
	if (v3 != -1) {
		// 0xbc950
		*(int32_t *)*(int32_t *)(g23 - 0x6f34) = 8;
		*(int32_t *)v1 = 12;
		*(int32_t *)v2 = v9;
		*(int32_t *)*(int32_t *)(g23 - 0x6f3c) = 225;
		*(int32_t *)*(int32_t *)(g23 - 0x6f40) = 234;
		result2 = function_ba888(19);
		// branch -> 0xbc998
		// 0xbc998
		return result2;
	}
	// 0xbc940
	if (v9 == 12) {
		// 0xbc948
		if (v3 == -1) {
			// 0xbc950
			*(int32_t *)*(int32_t *)(g23 - 0x6f34) = 8;
			*(int32_t *)v1 = 12;
			*(int32_t *)v2 = v9;
			*(int32_t *)*(int32_t *)(g23 - 0x6f3c) = 225;
			*(int32_t *)*(int32_t *)(g23 - 0x6f40) = 234;
			result2 = function_ba888(19);
			// branch -> 0xbc998
			// 0xbc998
			return result2;
		}
	}
	// 0xbc98c
	result3 = *(int32_t *)(g23 - 0x7764);
	*(char *)result3 = 0;
	// branch -> 0xbc998
	// 0xbc998
	return result3;
}

// Address range: 0xbc9a8 - 0xbca10
int32_t function_bc9a8(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0xbc9b0
	g36 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xbc9b8
	function_bb248(*(int32_t *)(0x55ec * *(int32_t *)v1 + v2 + 0x549c));
	function_b7170();
	*(int32_t *)(*(int32_t *)(g23 - 0x71bc) + 8) = -1;
	*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 12;
	return CalcPlrInv(*(int32_t *)g36, 1);
}

// Address range: 0xbca10 - 0xbcb9c
int32_t function_bca10(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f18); // 0xbca18
	g31 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x77f0); // 0xbca20
	g36 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x6f38); // 0xbca24
	g30 = *(int32_t *)(g23 - 0x71c0);
	g33 = *(int32_t *)(g23 - 0x77ac);
	g35 = *(int32_t *)(g23 - 0x77a8);
	int32_t v4 = (*(int32_t *)*(int32_t *)(g23 - 0x6f0c) - *(int32_t *)v1) / 4; // 0xbca54
	uint32_t v5 = *(int32_t *)v3 + v4;                                          // 0xbca58
	int32_t v6;                                                                 // ctr
	int32_t v7;                                                                 // r7
	int32_t v8;                                                                 // r8
	int32_t v9;                                                                 // 0xbcad0
	int32_t v10;                                                                // 0xbcae0
	int32_t v11;                                                                // 0xbcb18
	int32_t v12;                                                                // 0xbcb3c
	int32_t v13;                                                                // 0xbcb44
	int32_t result;                                                             // 0xbcb98
	int32_t v14;                                                                // 0xbcb4c
	int32_t v15;                                                                // 0xbcab8
	int32_t v16;                                                                // 0xbcb08
	int32_t v17;                                                                // 0xbcb18
	if (*(char *)v2 != 1) {
		// 0xbca80
		if (v5 <= 2) {
			// 0xbca88
			*(int32_t *)(g35 + 0x55ec * *(int32_t *)g33 + 0x53d4) = GetRndSeed();
			// branch -> 0xbca9c
		}
		// 0xbca9c
		function_bb248(*(int32_t *)(g35 + 0x55ec * *(int32_t *)g33 + 0x549c));
		v15 = g35 + 0x55ec * *(int32_t *)g33;
		if (*(char *)(v15 + 0x5410) == 0) {
			// 0xbcac8
			*(int32_t *)(v15 + 0x540c) = 0;
			// branch -> 0xbcad0
		}
		// 0xbcad0
		v9 = function_b7170();
		v10 = v5;
		if (*(char *)g36 == 1) {
			// 0xbcae0
			if (v10 > 1) {
				// 0xbcaf4
				v16 = (*(int32_t *)g32 - *(int32_t *)g31) / 4 + *(int32_t *)v3;
				v8 = v16;
				v11 = g30;
				v17 = v11 + 368 * v16;
				if (v16 == 19) {
					// 0xbcb14
					*(int32_t *)(v17 + 8) = -1;
					// branch -> 0xbcb7c
				} else {
					// 0xbcb28
					v7 = v17;
					if (*(int32_t *)(v17 + 376) != -1) {
						v12 = v17;
						while (true) {
							// 0xbcb38
							v6 = 46;
							v14 = v12 - 8;
							v13 = v12 + 360;
							// branch -> 0xbcb44
							goto lab_0xbcb44_5;
						}
					}
					// 0xbcb6c
					*(int32_t *)(368 * v16 + v11 + 8) = -1;
					// branch -> 0xbcb7c
				}
				// 0xbcb7c
				result = CalcPlrInv(*(int32_t *)g33, 1);
				// branch -> 0xbcb88
			} else {
				result = v9;
			}
		} else {
			// 0xbcaec
			if (v10 >= 3) {
				// 0xbcaf4
				v16 = (*(int32_t *)g32 - *(int32_t *)g31) / 4 + *(int32_t *)v3;
				v8 = v16;
				v11 = g30;
				v17 = v11 + 368 * v16;
				if (v16 == 19) {
					// 0xbcb14
					*(int32_t *)(v17 + 8) = -1;
					// branch -> 0xbcb7c
				} else {
					// 0xbcb28
					v7 = v17;
					if (*(int32_t *)(v17 + 376) != -1) {
						v12 = v17;
						while (true) {
							// 0xbcb38
							v6 = 46;
							v14 = v12 - 8;
							v13 = v12 + 360;
							// branch -> 0xbcb44
							goto lab_0xbcb44_5;
						}
					}
					// 0xbcb6c
					*(int32_t *)(368 * v16 + v11 + 8) = -1;
					// branch -> 0xbcb7c
				}
				// 0xbcb7c
				result = CalcPlrInv(*(int32_t *)g33, 1);
				// branch -> 0xbcb88
			} else {
				result = v9;
			}
		}
		// 0xbcb88
		return result;
	}
	// 0xbca60
	if (v5 <= 1) {
		// 0xbca68
		*(int32_t *)(g35 + 0x55ec * *(int32_t *)g33 + 0x53d4) = GetRndSeed();
		// branch -> 0xbca9c
	}
	// 0xbca9c
	function_bb248(*(int32_t *)(g35 + 0x55ec * *(int32_t *)g33 + 0x549c));
	v15 = g35 + 0x55ec * *(int32_t *)g33;
	if (*(char *)(v15 + 0x5410) == 0) {
		// 0xbcac8
		*(int32_t *)(v15 + 0x540c) = 0;
		// branch -> 0xbcad0
	}
	// 0xbcad0
	v9 = function_b7170();
	v10 = v5;
	if (*(char *)g36 == 1) {
		// 0xbcae0
		if (v10 > 1) {
			// 0xbcaf4
			v16 = (*(int32_t *)g32 - *(int32_t *)g31) / 4 + *(int32_t *)v3;
			v8 = v16;
			v11 = g30;
			v17 = v11 + 368 * v16;
			if (v16 == 19) {
				// 0xbcb14
				*(int32_t *)(v17 + 8) = -1;
				// branch -> 0xbcb7c
			} else {
				// 0xbcb28
				v7 = v17;
				if (*(int32_t *)(v17 + 376) != -1) {
					v12 = v17;
					while (true) {
						// 0xbcb38
						v6 = 46;
						v14 = v12 - 8;
						v13 = v12 + 360;
						// branch -> 0xbcb44
					lab_0xbcb44_5:
						while (true) {
							int32_t v18 = v13 + 8; // 0xbcb44
							int32_t v19 = v18;     // r5
							int32_t v20 = v14 + 8; // 0xbcb4c
							*(int32_t *)v20 = *(int32_t *)v18;
							*(int32_t *)(v14 + 12) = *(int32_t *)(v13 + 12);
							int32_t v21 = v6 - 1; // 0xbcb54
							v6 = v21;
							if (v21 == 0) {
								int32_t v22 = v7;        // 0xbcb58
								int32_t v23 = v22 + 368; // 0xbcb58
								v7 = v23;
								int32_t v24 = v8 + 1; // 0xbcb5c
								v8 = v24;
								if (*(int32_t *)(v22 + 744) == -1) {
									// 0xbcb60
									// branch -> 0xbcb6c
									// 0xbcb6c
									*(int32_t *)(368 * v24 + g30 + 8) = -1;
									// branch -> 0xbcb7c
									int32_t result2 = CalcPlrInv(*(int32_t *)g33, 1); // 0xbcb84
									// branch -> 0xbcb88
									// 0xbcb88
									return result2;
								}
								// 0xbcb58
								v12 = v23;
								// branch -> 0xbcb38
								break;
							} else {
								// 0xbcb44
								v14 = v20;
								v13 = v19;
								// branch -> 0xbcb44
								continue;
							}
						}
					}
				}
				// 0xbcb6c
				*(int32_t *)(368 * v16 + v11 + 8) = -1;
				// branch -> 0xbcb7c
			}
			// 0xbcb7c
			result = CalcPlrInv(*(int32_t *)g33, 1);
			// branch -> 0xbcb88
		} else {
			result = v9;
		}
	} else {
		// 0xbcaec
		if (v10 >= 3) {
			// 0xbcaf4
			v16 = (*(int32_t *)g32 - *(int32_t *)g31) / 4 + *(int32_t *)v3;
			v8 = v16;
			v11 = g30;
			v17 = v11 + 368 * v16;
			if (v16 == 19) {
				// 0xbcb14
				*(int32_t *)(v17 + 8) = -1;
				// branch -> 0xbcb7c
			} else {
				// 0xbcb28
				v7 = v17;
				if (*(int32_t *)(v17 + 376) != -1) {
					v12 = v17;
					while (true) {
						// 0xbcb38
						v6 = 46;
						v14 = v12 - 8;
						v13 = v12 + 360;
						// branch -> 0xbcb44
						goto lab_0xbcb44_5;
					}
				}
				// 0xbcb6c
				*(int32_t *)(368 * v16 + v11 + 8) = -1;
				// branch -> 0xbcb7c
			}
			// 0xbcb7c
			result = CalcPlrInv(*(int32_t *)g33, 1);
			// branch -> 0xbcb88
		} else {
			result = v9;
		}
	}
	// 0xbcb88
	return result;
}

// Address range: 0xbcb9c - 0xbcd1c
int32_t function_bcb9c(void)
{
	// 0xbcb9c
	g33 = *(int32_t *)(g23 - 0x7654);
	g35 = *(int32_t *)(g23 - 0x7650);
	g36 = *(int32_t *)(g23 - 0x77ac);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8);             // r7
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x6f00); // 0xbcbc4
	if (v2 != 10) {
		int32_t result = *(int32_t *)(g23 - 0x7764); // 0xbccfc
		*(char *)result = 0;
		// branch -> 0xbcd08
		// 0xbcd08
		return result;
	}
	// 0xbcbd0
	*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 13;
	int32_t v3 = *(int32_t *)(g23 - 0x6f14); // 0xbcbe0
	*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = v2;
	*(int32_t *)*(int32_t *)(g23 - 0x6f38) = *(int32_t *)v3;
	int32_t v4 = *(int32_t *)(g23 - 0x71bc); // 0xbcbf8
	uint32_t v5 = *(int32_t *)(v4 + 200);    // 0xbcbf8
	int32_t v6 = 0x55ec * *(int32_t *)g36;   // 0xbcbfc
	int32_t v7 = v1 + v6;                    // 0xbcc00
	int32_t result3;                         // 0xbcc1c
	if (*(int32_t *)(v7 + 456) < (v5 / 2 || v5 & -0x80000000) + v5) {
		// 0xbcc18
		result3 = function_ba888(9);
		// branch -> 0xbcd08
	} else {
		int32_t v8 = 46;          // ctr
		int32_t v9 = v7 + 0x53cc; // 0xbcc3c
		int32_t v10 = v4 - 8;     // 0xbcc34
		// branch -> 0xbcc34
		while (true) {
			int32_t v11 = v10 + 8; // 0xbcc34
			int32_t v12 = v9 + 8;  // 0xbcc3c
			*(int32_t *)v12 = *(int32_t *)v11;
			*(int32_t *)(v9 + 12) = *(int32_t *)(v10 + 12);
			int32_t v13 = v8 - 1; // 0xbcc44
			v8 = v13;
			if (v13 == 0) {
				int32_t v14 = v6 + v1;                    // 0xbcc48
				int32_t *v15 = (int32_t *)(v14 + 0x549c); // 0xbcc50
				uint32_t v16 = *v15;                      // 0xbcc50
				*v15 = (v16 / 2 | v16 & -0x80000000) + v16;
				g34 = *(int32_t *)(v14 + 0x5494) + 12;
				SetCursor_();
				g32 = -0x6db6db6d;
				int32_t v17 = 0; // 0xbcc84
				int32_t v18 = 0; // 0xbcccc
				// branch -> 0xbcccc
				int32_t result2; // 0xbccf4
				int32_t v19;     // 0xbccbc
				while (true) {
					int32_t v20 = v18; // 0xbccd4
					if (v18 == 0) {
						int32_t v21 = *(int32_t *)g35;                                          // 0xbcc80
						int32_t v22 = *(int32_t *)g33;                                          // 0xbcc88
						int64_t v23 = g32;                                                      // 0xbcc90
						int32_t v24 = ((int32_t)(v23 * (int64_t)v21 / 0x100000000) + v21) / 16; // 0xbcca0
						int32_t v25 = ((int32_t)(v23 * (int64_t)v22 / 0x100000000) + v22) / 16; // 0xbcca8
						v19 = function_56c68(*(int32_t *)g36, (int64_t)v17, v24, v25, 0);
						int32_t v26 = g31 + 1; // 0xbccc0
						if (v26 > 39) {
							// break -> 0xbccd4
							break;
						}
						v17 = v26;
						v18 = v19;
						// continue -> 0xbcccc
						continue;
					}
					// 0xbccd4
					if (v20 == 0) {
						// 0xbcce8
						function_ba888(10);
						// branch -> 0xbccf0
						// 0xbccf0
						g34 = 1;
						result2 = SetCursor_();
						// branch -> 0xbcd08
						// 0xbcd08
						return result2;
					}
					// 0xbccdc
					function_ba888(11);
					// branch -> 0xbccf0
					// 0xbccf0
					g34 = 1;
					result2 = SetCursor_();
					// branch -> 0xbcd08
					// 0xbcd08
					return result2;
				}
				// 0xbccd4
				if (v19 == 0) {
					// 0xbcce8
					function_ba888(10);
					// branch -> 0xbccf0
					// 0xbccf0
					g34 = 1;
					result2 = SetCursor_();
					// branch -> 0xbcd08
					// 0xbcd08
					return result2;
				}
				// 0xbccdc
				function_ba888(11);
				// branch -> 0xbccf0
				// 0xbccf0
				g34 = 1;
				result2 = SetCursor_();
				// branch -> 0xbcd08
				// 0xbcd08
				return result2;
			}
			// 0xbcc34
			v9 = v12;
			v10 = v11;
			// branch -> 0xbcc34
		}
	}
	// 0xbcd08
	return result3;
}

// Address range: 0xbcd1c - 0xbce88
int32_t function_bcd1c(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f0c); // 0xbcd2c
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0xbcd34
	g36 = v2;
	int32_t v3 = *(int32_t *)v1 - *(int32_t *)*(int32_t *)(g23 - 0x6f18); // 0xbcd44
	int32_t v4 = *(int32_t *)(g23 - 0x6f28) + v3 / 4;                     // 0xbcd54
	char v5 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x6f38) + v4);     // 0xbcd58
	int32_t v6 = *(int32_t *)(g23 - 0x77a8);                              // 0xbcd5c
	int32_t v7 = v5;                                                      // 0xbcd60
	int32_t v8 = v7;                                                      // r5
	if (v5 > -1) {
		// 0xbce30
		*(int32_t *)(368 * v7 + v6 + 0x55ec * *(int32_t *)v2 + 3808) = 1;
		// branch -> 0xbce4c
	} else {
		if (v5 == -1) {
			// 0xbcd70
			*(int32_t *)(0x55ec * *(int32_t *)v2 + v6 + 1232) = 1;
			v7 = v8;
			// branch -> 0xbcd84
		}
		int32_t v9 = v7; // 0xbcda0
		if (v7 == -2) {
			// 0xbcd8c
			*(int32_t *)(v6 + 0x55ec * *(int32_t *)g36 + 3440) = 1;
			v9 = v8;
			// branch -> 0xbcda0
		}
		int32_t v10 = v9; // 0xbcdbc
		if (v9 == -3) {
			// 0xbcda8
			*(int32_t *)(v6 + 0x55ec * *(int32_t *)g36 + 2704) = 1;
			v10 = v8;
			// branch -> 0xbcdbc
		}
		int32_t v11 = v10; // 0xbcdd8
		if (v10 == -4) {
			// 0xbcdc4
			*(int32_t *)(v6 + 0x55ec * *(int32_t *)g36 + 3072) = 1;
			v11 = v8;
			// branch -> 0xbcdd8
		}
		int32_t v12 = v11; // 0xbcdf4
		if (v11 == -5) {
			// 0xbcde0
			*(int32_t *)(v6 + 0x55ec * *(int32_t *)g36 + 1600) = 1;
			v12 = v8;
			// branch -> 0xbcdf4
		}
		int32_t v13 = v12; // 0xbce10
		if (v12 == -6) {
			// 0xbcdfc
			*(int32_t *)(v6 + 0x55ec * *(int32_t *)g36 + 1968) = 1;
			v13 = v8;
			// branch -> 0xbce10
		}
		// 0xbce10
		if (v13 == -7) {
			// 0xbce18
			*(int32_t *)(v6 + 0x55ec * *(int32_t *)g36 + 2336) = 1;
			// branch -> 0xbce4c
		}
	}
	int32_t v14 = v6 + 0x55ec * *(int32_t *)g36; // 0xbce58
	*(int32_t *)(v14 + 0x540c) = 1;
	function_bb248(*(int32_t *)(v14 + 0x549c));
	return CalcPlrInv(*(int32_t *)g36, 1);
}

// Address range: 0xbce88 - 0xbcf70
int32_t function_bce88(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbce90
	g36 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x6f2c); // 0xbce98
	g35 = v2;
	int32_t *v3 = (int32_t *)v2; // 0xbceb0
	uint32_t v4 = *v3;           // 0xbceb0
	int32_t result;              // 0xbcf6c
	if (*(int32_t *)v1 == 18) {
		// 0xbceb0
		if (v4 <= 18) {
			// 0xbcebc
			return *(int32_t *)(*(int32_t *)(g23 - 0x5804) + 4 * v4);
		}
		// 0xbcf20
		result = function_ba888((char)(0x1000000 * *v3 / 0x1000000));
		// branch -> 0xbcf58
	} else {
		// 0xbcf30
		function_ba888((char)(0x1000000 * v4 / 0x1000000));
		int32_t v5 = *(int32_t *)(g23 - 0x6f14); // r3
		*(int32_t *)g36 = *(int32_t *)*(int32_t *)(g23 - 0x6f0c);
		*(int32_t *)v5 = *(int32_t *)*(int32_t *)(g23 - 0x6f38);
		result = v5;
		// branch -> 0xbcf58
	}
	// 0xbcf58
	return result;
}

// Address range: 0xbcf70 - 0xbd090
int32_t function_bcf70(void)
{
	int32_t result = *(int32_t *)*(int32_t *)(g23 - 0x6f00); // 0xbcf98
	uint32_t v1 = result - 12;                               // 0xbcf9c
	if (v1 > 6) {
		// 0xbd070
		return result;
	}
	// 0xbcfa8
	return *(int32_t *)(*(int32_t *)(g23 - 0x5808) + 4 * v1);
}

// Address range: 0xbd090 - 0xbd214
int32_t function_bd090(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbd098
	g33 = *(int32_t *)(g23 - 0x7654);
	g35 = *(int32_t *)(g23 - 0x7650);
	int32_t v2 = *(int32_t *)(g23 - 0x71c0); // 0xbd0a4
	g36 = *(int32_t *)(g23 - 0x77ac);
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // r6
	int32_t v4 = *(int32_t *)v1;             // 0xbd0b8
	if (v4 == 22) {
		int32_t result = function_ba888(14); // r3
		*(int32_t *)v1 = 16;
		// branch -> 0xbd200
		// 0xbd200
		return result;
	}
	// 0xbd0d8
	*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 16;
	*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = v4;
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x6f14); // 0xbd0f4
	int32_t v6 = *(int32_t *)(g23 - 0x6f18);             // 0xbd0f8
	*(int32_t *)*(int32_t *)(g23 - 0x6f38) = v5;
	int32_t v7 = 0x55ec * *(int32_t *)g36;                    // 0xbd114
	int32_t v8 = v3 + v7;                                     // 0xbd11c
	int32_t v9 = v2 + 368 * ((v4 - *(int32_t *)v6) / 4 + v5); // 0xbd124
	int32_t result3;                                          // 0xbd138
	if (*(int32_t *)(v8 + 456) < *(int32_t *)(v9 + 200)) {
		// 0xbd134
		result3 = function_ba888(9);
		// branch -> 0xbd200
	} else {
		int32_t v10 = 46;          // ctr
		int32_t v11 = v8 + 0x53cc; // 0xbd158
		int32_t v12 = v9 - 8;      // 0xbd150
		// branch -> 0xbd150
		while (true) {
			int32_t v13 = v12 + 8; // 0xbd150
			int32_t v14 = v11 + 8; // 0xbd158
			*(int32_t *)v14 = *(int32_t *)v13;
			*(int32_t *)(v11 + 12) = *(int32_t *)(v12 + 12);
			int32_t v15 = v10 - 1; // 0xbd160
			v10 = v15;
			if (v15 == 0) {
				// 0xbd164
				g34 = *(int32_t *)(v7 + v3 + 0x5494) + 12;
				SetCursor_();
				g32 = -0x6db6db6d;
				int32_t v16 = 0; // 0xbd18c
				int32_t v17 = 0; // 0xbd1d4
				// branch -> 0xbd1d4
				int32_t result2; // 0xbd1fc
				int32_t v18;     // 0xbd1c4
				while (true) {
					int32_t v19 = v17; // 0xbd1dc
					if (v17 == 0) {
						int32_t v20 = *(int32_t *)g35;                                          // 0xbd188
						int32_t v21 = *(int32_t *)g33;                                          // 0xbd190
						int64_t v22 = g32;                                                      // 0xbd198
						int32_t v23 = ((int32_t)(v22 * (int64_t)v20 / 0x100000000) + v20) / 16; // 0xbd1a8
						int32_t v24 = ((int32_t)(v22 * (int64_t)v21 / 0x100000000) + v21) / 16; // 0xbd1b0
						v18 = function_56e60(*(int32_t *)g36, (int64_t)v16, v23, v24, 0, v23);
						int32_t v25 = g31 + 1; // 0xbd1c8
						if (v25 > 39) {
							// break -> 0xbd1dc
							break;
						}
						v16 = v25;
						v17 = v18;
						// continue -> 0xbd1d4
						continue;
					}
					// 0xbd1dc
					if (v19 == 0) {
						// 0xbd1f0
						function_ba888(10);
						// branch -> 0xbd1f8
						// 0xbd1f8
						g34 = 1;
						result2 = SetCursor_();
						// branch -> 0xbd200
						// 0xbd200
						return result2;
					}
					// 0xbd1e4
					function_ba888(11);
					// branch -> 0xbd1f8
					// 0xbd1f8
					g34 = 1;
					result2 = SetCursor_();
					// branch -> 0xbd200
					// 0xbd200
					return result2;
				}
				// 0xbd1dc
				if (v18 == 0) {
					// 0xbd1f0
					function_ba888(10);
					// branch -> 0xbd1f8
					// 0xbd1f8
					g34 = 1;
					result2 = SetCursor_();
					// branch -> 0xbd200
					// 0xbd200
					return result2;
				}
				// 0xbd1e4
				function_ba888(11);
				// branch -> 0xbd1f8
				// 0xbd1f8
				g34 = 1;
				result2 = SetCursor_();
				// branch -> 0xbd200
				// 0xbd200
				return result2;
			}
			// 0xbd150
			v11 = v14;
			v12 = v13;
			// branch -> 0xbd150
		}
	}
	// 0xbd200
	return result3;
}

// Address range: 0xbd214 - 0xbd2bc
int32_t function_bd214(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbd218
	int32_t v2 = *(int32_t *)v1;             // 0xbd224
	if (v2 == 14) {
		// 0xbd294
		// branch -> 0xbd2ac
		// 0xbd2ac
		return function_ba888(17);
	}
	// 0xbd230
	int32_t result; // 0xbd2a0
	if (v2 > 14) {
		// 0xbd240
		if (v2 == 18) {
			// 0xbd2a0
			result = *(int32_t *)(g23 - 0x7764);
			*(char *)result = 0;
			// branch -> 0xbd2ac
		} else {
			result = v1;
		}
	} else {
		// 0xbd234
		if (v2 == 12) {
			// 0xbd24c
			*(int32_t *)*(int32_t *)(g23 - 0x6f34) = 4;
			*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 15;
			*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = 12;
			*(int32_t *)*(int32_t *)(g23 - 0x6f3c) = 151;
			*(int32_t *)*(int32_t *)(g23 - 0x6f40) = 159;
			result = function_ba888(19);
			// branch -> 0xbd2ac
		} else {
			result = v1;
		}
	}
	// 0xbd2ac
	return result;
}

// Address range: 0xbd2bc - 0xbd3ac
int32_t function_bd2bc(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbd2c4
	g36 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x6f24); // r7
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // r6
	int32_t v4 = *(int32_t *)v1;             // 0xbd2d8
	int32_t result;                          // r3
	if (v4 == 22) {
		// 0xbd2e4
		result = function_ba888(15);
		*(int32_t *)g36 = 14;
		// branch -> 0xbd398
	} else {
		// 0xbd2f8
		*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 17;
		int32_t v5 = 46; // ctr
		*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = v4;
		int32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x6f14); // 0xbd31c
		*(int32_t *)*(int32_t *)(g23 - 0x6f38) = v6;
		int32_t v7 = 368 * ((v4 - *(int32_t *)*(int32_t *)(g23 - 0x6f18)) / 4 + v6); // 0xbd340
		int32_t v8 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac);                // 0xbd344
		int32_t v9 = v3 + v8 + 0x53cc;                                               // 0xbd360
		int32_t v10 = v2 - 8 + v7;                                                   // 0xbd358
		// branch -> 0xbd358
		while (true) {
			int32_t v11 = v10 + 8; // 0xbd358
			int32_t v12 = v9 + 8;  // 0xbd360
			*(int32_t *)v12 = *(int32_t *)v11;
			*(int32_t *)(v9 + 12) = *(int32_t *)(v10 + 12);
			int32_t v13 = v5 - 1; // 0xbd368
			v5 = v13;
			if (v13 == 0) {
				int32_t v14 = *(int32_t *)(v7 + v2 + 200); // 0xbd378
				if (*(int32_t *)(v8 + v3 + 456) < v14) {
					// 0xbd384
					// branch -> 0xbd398
					// 0xbd398
					return function_ba888(9);
				}
				// 0xbd390
				// branch -> 0xbd398
				// 0xbd398
				return function_ba888(11);
			}
			// 0xbd358
			v9 = v12;
			v10 = v11;
			// branch -> 0xbd358
		}
	}
	// 0xbd398
	return result;
}

// Address range: 0xbd3ac - 0xbd5d0
int32_t function_bd3ac(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbd3b4
	g36 = v1;
	g32 = *(int32_t *)(g23 - 0x6f3c);
	int32_t v2 = *(int32_t *)(g23 - 0x6f64); // 0xbd3bc
	g33 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x6f34); // 0xbd3c0
	g35 = v3;
	int32_t v4 = *(int32_t *)v1; // 0xbd3cc
	if (v4 == 22) {
		int32_t v5 = *(int32_t *)(g23 - 0x6f2c); // 0xbd3d8
		function_ba888((char)(0x1000000 * *(int32_t *)v5 / 0x1000000));
		int32_t result = *(int32_t *)(g23 - 0x6f0c); // 0xbd3e8
		*(int32_t *)g36 = *(int32_t *)result;
		// branch -> 0xbd5bc
		// 0xbd5bc
		return result;
	}
	int32_t v6 = *(int32_t *)v3;             // 0xbd3f8
	int32_t v7 = *(int32_t *)(g23 - 0x7604); // 0xbd400
	g31 = v7;
	int32_t v8 = 4;             // 0xbd4ec
	int32_t v9 = 0;             // 0xbd444
	int32_t v10 = 64 * v6 + v2; // 0xbd44c
	int32_t v11 = v7;           // 0xbd450
	// branch -> 0xbd420
	int32_t v12; // 0xbd508
	while (true) {
		int32_t v13 = v9; // 0xbd474
		if (*(char *)(v11 + 2) == 2) {
			// 0xbd42c
			if (*(int32_t *)v10 != -1) {
				// 0xbd438
				if (*(int32_t *)(v11 + 20) != 0) {
					// 0xbd444
					v13 = v9 + 1;
					// branch -> 0xbd448
				} else {
					v13 = v9;
				}
			} else {
				v13 = v9;
			}
		}
		int32_t v14 = v13; // 0xbd4a8
		if (*(char *)(v11 + 26) == 2) {
			// 0xbd45c
			if (*(int32_t *)(v10 + 4) != -1) {
				// 0xbd468
				if (*(int32_t *)(v11 + 44) != 0) {
					// 0xbd474
					v14 = v13 + 1;
					// branch -> 0xbd478
				} else {
					v14 = v13;
				}
			} else {
				v14 = v13;
			}
		}
		int32_t v15 = v14; // 0xbd4dc
		if (*(char *)(v11 + 50) == 2) {
			// 0xbd490
			if (*(int32_t *)(v10 + 8) != -1) {
				// 0xbd49c
				if (*(int32_t *)(v11 + 68) != 0) {
					// 0xbd4a8
					v15 = v14 + 1;
					// branch -> 0xbd4ac
				} else {
					v15 = v14;
				}
			} else {
				v15 = v14;
			}
		}
		// 0xbd4ac
		v12 = v15;
		if (*(char *)(v11 + 74) == 2) {
			// 0xbd4c4
			if (*(int32_t *)(v10 + 12) != -1) {
				// 0xbd4d0
				if (*(int32_t *)(v11 + 92) != 0) {
					// 0xbd4dc
					v12 = v15 + 1;
					// branch -> 0xbd4e0
				} else {
					v12 = v15;
				}
			} else {
				v12 = v15;
			}
		}
		int32_t v16 = v8 - 1; // 0xbd4ec
		if (v16 == 0) {
			// break -> 0xbd4f0
			break;
		}
		v8 = v16;
		v9 = v12;
		v10 += 16;
		v11 += 96;
		// continue -> 0xbd420
	}
	// 0xbd4f0
	int32_t v17;
	int32_t v18; // 0xbd508
	if (v12 < 7) {
		// 0xbd508
		v18 = 15 - v12;
		v17 = 2;
		// branch -> 0xbd510
	} else {
		// 0xbd4f8
		v18 = 14 - (v12 / 2 | v12 & -0x80000000);
		v17 = 1;
		// branch -> 0xbd510
	}
	// 0xbd510
	g30 = v18;
	g29 = v17;
	if (v4 == v18 - 2) {
		// 0xbd51c
		g34 = *(int32_t *)(*(int32_t *)(g23 - 0x7758) + 268 * v6 + 140);
		SetRndSeed();
		g37 = 1 - *(int32_t *)g32 + *(int32_t *)*(int32_t *)(g23 - 0x6f40);
		g34 = *(int32_t *)g32 + random(0);
		// branch -> 0xbd5bc
		// 0xbd5bc
		return function_6c63c();
	}
	// 0xbd55c
	g28 = 0;
	g32 = 0;
	int32_t v19 = v7 + 384; // 0xbd5cc26
	int32_t v20 = 0;        // 0xbd5a820
	int32_t v21 = v17;      // 0xbd5a418
	int32_t v22 = v18;      // 0xbd598
	int32_t v23 = 0;        // 0xbd578
	// branch -> 0xbd564
	int32_t result2; // 0xbd5cc27
	while (true) {
		// 0xbd564
		result2 = v19;
		int32_t v24 = v7;  // 0xbd5b4
		int32_t v25 = v23; // 0xbd5ac
		int32_t v26 = v20; // 0xbd5a8
		int32_t v27 = v21; // 0xbd5a417
		int32_t v28 = v22; // 0xbd59814
		if (*(char *)(v7 + 2) == 2) {
			int32_t v29 = *(int32_t *)(g33 + 64 * *(int32_t *)g35 + v23); // 0xbd57c
			g34 = v29;
			if (v29 != -1) {
				// 0xbd588
				if (*(int32_t *)(v7 + 20) != 0) {
					int32_t v30 = v7;
					int32_t v31 = v23;
					int32_t v32 = v20;
					int32_t v33 = v29; // 0xbd5cc25
					int32_t v34 = v21; // 0xbd5a4
					int32_t v35 = v22; // 0xbd5a4
					if (v22 == *(int32_t *)g36) {
						int32_t v36 = function_6c63c(); // 0xbd5a0
						v30 = g31;
						v31 = g32;
						v32 = g28;
						v33 = v36;
						v34 = g29;
						v35 = g30;
						// branch -> 0xbd5a4
					}
					int32_t v37 = v35 + v34; // 0xbd5a4
					g30 = v37;
					result2 = v33;
					v24 = v30;
					v25 = v31;
					v26 = v32;
					v27 = v34;
					v28 = v37;
					// branch -> 0xbd5a8
				} else {
					result2 = v29;
					v24 = v7;
					v25 = v23;
					v26 = v20;
					v27 = v21;
					v28 = v22;
				}
			} else {
				result2 = -1;
				v24 = v7;
				v25 = v23;
				v26 = v20;
				v27 = v21;
				v28 = v22;
			}
		}
		int32_t v38 = v26 + 1; // 0xbd5a8
		g28 = v38;
		int32_t v39 = v25 + 4; // 0xbd5ac
		g32 = v39;
		int32_t v40 = v24 + 24; // 0xbd5b4
		g31 = v40;
		if (v38 >= 16) {
			// break -> 0xbd5bc
			break;
		}
		v19 = result2;
		v20 = v38;
		v21 = v27;
		v22 = v28;
		v23 = v39;
		v7 = v40;
		// continue -> 0xbd564
	}
	// 0xbd5bc
	return result2;
}

// Address range: 0xbd5d0 - 0xbd660
int32_t function_bd5d0(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbd5d4
	uint32_t v2 = *(int32_t *)v1;            // 0xbd5e0
	if (v2 == 18) {
		int32_t result = *(int32_t *)(g23 - 0x7764); // 0xbd644
		*(char *)result = 0;
		// branch -> 0xbd650
		// 0xbd650
		return result;
	}
	// 0xbd5ec
	int32_t result2; // 0xbd65c
	if (v2 <= 18) {
		// 0xbd5f0
		if (v2 == 12) {
			// 0xbd5fc
			*(int32_t *)*(int32_t *)(g23 - 0x6f34) = 3;
			*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 21;
			*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = 12;
			*(int32_t *)*(int32_t *)(g23 - 0x6f3c) = 161;
			*(int32_t *)*(int32_t *)(g23 - 0x6f40) = 168;
			result2 = function_ba888(19);
			// branch -> 0xbd650
		} else {
			result2 = v1;
		}
	} else {
		result2 = v1;
	}
	// 0xbd650
	return result2;
}

// Address range: 0xbd660 - 0xbd6f0
int32_t function_bd660(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbd664
	uint32_t v2 = *(int32_t *)v1;            // 0xbd670
	if (v2 == 18) {
		int32_t result = *(int32_t *)(g23 - 0x7764); // 0xbd6d4
		*(char *)result = 0;
		// branch -> 0xbd6e0
		// 0xbd6e0
		return result;
	}
	// 0xbd67c
	int32_t result2; // 0xbd6ec
	if (v2 <= 18) {
		// 0xbd680
		if (v2 == 12) {
			// 0xbd68c
			*(int32_t *)*(int32_t *)(g23 - 0x6f34) = 7;
			*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 23;
			*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = 12;
			*(int32_t *)*(int32_t *)(g23 - 0x6f3c) = 180;
			*(int32_t *)*(int32_t *)(g23 - 0x6f40) = 187;
			result2 = function_ba888(19);
			// branch -> 0xbd6e0
		} else {
			result2 = v1;
		}
	} else {
		result2 = v1;
	}
	// 0xbd6e0
	return result2;
}

// Address range: 0xbd6f0 - 0xbd780
int32_t function_bd6f0(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f00); // 0xbd6f4
	uint32_t v2 = *(int32_t *)v1;            // 0xbd700
	if (v2 == 18) {
		int32_t result = *(int32_t *)(g23 - 0x7764); // 0xbd764
		*(char *)result = 0;
		// branch -> 0xbd770
		// 0xbd770
		return result;
	}
	// 0xbd70c
	int32_t result2; // 0xbd77c
	if (v2 <= 18) {
		// 0xbd710
		if (v2 == 12) {
			// 0xbd71c
			*(int32_t *)*(int32_t *)(g23 - 0x6f34) = 5;
			*(int32_t *)*(int32_t *)(g23 - 0x6f2c) = 22;
			*(int32_t *)*(int32_t *)(g23 - 0x6f0c) = 12;
			*(int32_t *)*(int32_t *)(g23 - 0x6f3c) = 201;
			*(int32_t *)*(int32_t *)(g23 - 0x6f40) = 211;
			result2 = function_ba888(19);
			// branch -> 0xbd770
		} else {
			result2 = v1;
		}
	} else {
		result2 = v1;
	}
	// 0xbd770
	return result2;
}

// Address range: 0xbd780 - 0xbd8dc
int32_t function_bd780(int32_t a1)
{
	char *v1 = (char *)*(int32_t *)(g23 - 0x7730); // 0xbd790
	if (*v1 != 0) {
		// 0xbd79c
		g34 = *(int32_t *)(g23 - 0x7794);
		*v1 = 0;
		if (*(char *)g34 == 0) {
			// 0xbd7b4
			g34 = sfx_stop();
			// branch -> 0xbd7b8
		}
		// 0xbd7b8
		// branch -> 0xbd8cc
		// 0xbd8cc
		return function_6c704();
	}
	// 0xbd7c0
	g34 = 70;
	PlaySFX(70);
	int32_t result = *(int32_t *)(g23 - 0x7764); // 0xbd7c8
	unsigned char v2 = *(char *)result;          // 0xbd7cc
	if (v2 <= 23) {
		// 0xbd7dc
		return *(int32_t *)(*(int32_t *)(g23 - 0x580c) + 4 * (int32_t)v2);
	}
	// 0xbd8cc
	return result;
}

// Address range: 0xbd8dc - 0xbdadc
int32_t function_bd8dc(int32_t a1)
{
	int32_t v1 = g36; // 0xbd8dc
	int32_t v2 = g35; // 0xbd8e8
	int32_t v3 = g33; // 0xbd8f0
	g35 = *(int32_t *)(g23 - 0x6f08);
	int32_t v4 = *(int32_t *)(g23 - 0x6f04); // 0xbd8fc
	g36 = v4;
	char *v5 = (char *)*(int32_t *)(g23 - 0x7730); // 0xbd908
	int32_t v6 = *(int32_t *)(g23 - 0x6efc);       // 0xbd90c
	if (*v5 != 0) {
		// 0xbd918
		g34 = *(int32_t *)(g23 - 0x7794);
		*v5 = 0;
		if (*(char *)g34 == 0) {
			// 0xbd930
			g34 = sfx_stop();
			// branch -> 0xbd934
		}
		// 0xbd934
		g34 = function_6c704();
		// branch -> 0xbdac0
		// 0xbdac0
		g36 = v1;
		g35 = v2;
		g33 = v3;
		return g34;
	}
	int32_t *v7 = (int32_t *)*(int32_t *)(g23 - 0x6f00); // 0xbd93c
	if (*v7 == -1) {
		// 0xbdac0
		g36 = v1;
		g35 = v2;
		g33 = v3;
		return g34;
	}
	int32_t v8 = *(int32_t *)(g23 - 0x76ac); // 0xbd948
	g34 = v8;
	uint32_t v9 = *(int32_t *)v8; // 0xbd94c
	if (v9 >= 32) {
		// 0xbd958
		if (v9 < 321) {
			int32_t v10 = *(int32_t *)(g23 - 0x6ef4); // 0xbd964
			g34 = v10;
			int32_t *v11 = (int32_t *)*(int32_t *)(g23 - 0x76a8); // 0xbd974
			uint32_t v12 = *v11;                                  // 0xbd974
			int32_t v13;                                          // 0xbda90
			int32_t v14;                                          // 0xbdab8
			int32_t v15;                                          // 0xbd9c4
			char *v16;                                            // 0xbd9e4
			char *v17;                                            // 0xbda10
			int32_t v18;                                          // 0xbda7c
			int32_t v19;                                          // 0xbda90
			int32_t v20;                                          // 0xbd9b8
			int32_t v21;                                          // 0xbd9c8
			unsigned char v22;                                    // 0xbd9e4
			unsigned char v23;                                    // 0xbda10
			int32_t v24;                                          // 0xbda60
			int32_t v25;                                          // 0xbda98
			uint64_t v26;                                         // 0xbd9b4
			if (*(char *)v10 == 0) {
				// 0xbd974
				if (v12 >= 344) {
					// 0xbd980
					if (v12 < 617) {
						// 0xbd9a4
						v26 = 0x2aaaaaab * (int64_t)(v9 - 32);
						v20 = *(int32_t *)*(int32_t *)(g23 - 0x6ef8);
						v15 = v26 / 0x8000000000000000;
						g34 = v15;
						v21 = ((int32_t)(v26 / 0x100000000) & -0x80000000 | (int32_t)(v26 / 0x200000000)) + v15;
						g33 = v21;
						if (v20 != 0) {
							// 0xbd9d0
							if (*v11 >= 601) {
								// 0xbd9dc
								if (v21 != 4) {
									// 0xbda08
									if (g33 != 20) {
										// 0xbdac0
										g36 = v1;
										g35 = v2;
										g33 = v3;
										return g34;
									}
									// 0xbda10
									v17 = (char *)g35;
									v23 = *v17;
									g34 = v23;
									if (v23 > 0) {
										// 0xbda2c
										*v17 = v23 - 1;
										// branch -> 0xbdac0
									} else {
										// 0xbda1c
										g34 = STextDown();
										*(char *)g35 = 10;
										// branch -> 0xbdac0
									}
									// 0xbdac0
									g36 = v1;
									g35 = v2;
									g33 = v3;
									return g34;
								}
								// 0xbd9e4
								v16 = (char *)v4;
								v22 = *v16;
								g34 = v22;
								if (v22 > 0) {
									// 0xbda00
									*v16 = v22 - 1;
									// branch -> 0xbda08
								} else {
									// 0xbd9f0
									g34 = STextUp();
									*(char *)g36 = 10;
									// branch -> 0xbda08
								}
								// 0xbda08
								if (g33 != 20) {
									// 0xbdac0
									g36 = v1;
									g35 = v2;
									g33 = v3;
									return g34;
								}
								// 0xbda10
								v17 = (char *)g35;
								v23 = *v17;
								g34 = v23;
								if (v23 > 0) {
									// 0xbda2c
									*v17 = v23 - 1;
									// branch -> 0xbdac0
								} else {
									// 0xbda1c
									g34 = STextDown();
									*(char *)g35 = 10;
									// branch -> 0xbdac0
								}
								// 0xbdac0
								g36 = v1;
								g35 = v2;
								g33 = v3;
								return g34;
							}
						}
						// 0xbda38
						if (v21 >= 5) {
							// 0xbda40
							v13 = v21;
							if (v21 >= 23) {
								// 0xbda48
								g33 = 22;
								v13 = 22;
								// branch -> 0xbda4c
							}
							// 0xbda4c
							v14 = v13;
							if (v20 != 0) {
								// 0xbda54
								if (v13 <= 20) {
									// 0xbda5c
									v24 = 156 * v13 + v6;
									if (*(int32_t *)(v24 + 148) == 0) {
										// 0xbda70
										if (*(int32_t *)(v24 - 164) == 0) {
											// 0xbda84
											if (*(int32_t *)(v24 - 8) != 0) {
												// 0xbda90
												v19 = v13 - 1;
												g33 = v19;
												v14 = v19;
												// branch -> 0xbda94
											} else {
												v14 = v13;
											}
										} else {
											// 0xbda7c
											v18 = v13 - 2;
											g33 = v18;
											v14 = v18;
											// branch -> 0xbda94
										}
										// 0xbda94
										v25 = 156 * v14 + v6;
										g34 = v25;
										if (*(int32_t *)(v25 + 148) == 0) {
											// 0xbdaa8
											if (v20 != 0) {
												// 0xbdab0
												if (v14 == 22) {
													// 0xbdab8
													*v7 = v14;
													g34 = function_bd780(g34);
													// branch -> 0xbdac0
												}
											}
										} else {
											// 0xbdab8
											*v7 = v14;
											g34 = function_bd780(g34);
											// branch -> 0xbdac0
										}
										// 0xbdac0
										g36 = v1;
										g35 = v2;
										g33 = v3;
										return g34;
									}
									v14 = v13;
								} else {
									v14 = v13;
								}
							}
							// 0xbda94
							v25 = 156 * v14 + v6;
							g34 = v25;
							if (*(int32_t *)(v25 + 148) == 0) {
								// 0xbdaa8
								if (v20 != 0) {
									// 0xbdab0
									if (v14 == 22) {
										// 0xbdab8
										*v7 = v14;
										g34 = function_bd780(g34);
										// branch -> 0xbdac0
									}
								}
							} else {
								// 0xbdab8
								*v7 = v14;
								g34 = function_bd780(g34);
								// branch -> 0xbdac0
							}
							// 0xbdac0
							g36 = v1;
							g35 = v2;
							g33 = v3;
							return g34;
						}
					}
				}
			} else {
				// 0xbd98c
				if (v12 >= 24) {
					// 0xbd998
					if (v12 < 617) {
						// 0xbd9a4
						v26 = 0x2aaaaaab * (int64_t)(v9 - 32);
						v20 = *(int32_t *)*(int32_t *)(g23 - 0x6ef8);
						v15 = v26 / 0x8000000000000000;
						g34 = v15;
						v21 = ((int32_t)(v26 / 0x100000000) & -0x80000000 | (int32_t)(v26 / 0x200000000)) + v15;
						g33 = v21;
						if (v20 != 0) {
							// 0xbd9d0
							if (*v11 >= 601) {
								// 0xbd9dc
								if (v21 != 4) {
									// 0xbda08
									if (g33 != 20) {
										// 0xbdac0
										g36 = v1;
										g35 = v2;
										g33 = v3;
										return g34;
									}
									// 0xbda10
									v17 = (char *)g35;
									v23 = *v17;
									g34 = v23;
									if (v23 > 0) {
										// 0xbda2c
										*v17 = v23 - 1;
										// branch -> 0xbdac0
									} else {
										// 0xbda1c
										g34 = STextDown();
										*(char *)g35 = 10;
										// branch -> 0xbdac0
									}
									// 0xbdac0
									g36 = v1;
									g35 = v2;
									g33 = v3;
									return g34;
								}
								// 0xbd9e4
								v16 = (char *)v4;
								v22 = *v16;
								g34 = v22;
								if (v22 > 0) {
									// 0xbda00
									*v16 = v22 - 1;
									// branch -> 0xbda08
								} else {
									// 0xbd9f0
									g34 = STextUp();
									*(char *)g36 = 10;
									// branch -> 0xbda08
								}
								// 0xbda08
								if (g33 != 20) {
									// 0xbdac0
									g36 = v1;
									g35 = v2;
									g33 = v3;
									return g34;
								}
								// 0xbda10
								v17 = (char *)g35;
								v23 = *v17;
								g34 = v23;
								if (v23 > 0) {
									// 0xbda2c
									*v17 = v23 - 1;
									// branch -> 0xbdac0
								} else {
									// 0xbda1c
									g34 = STextDown();
									*(char *)g35 = 10;
									// branch -> 0xbdac0
								}
								// 0xbdac0
								g36 = v1;
								g35 = v2;
								g33 = v3;
								return g34;
							}
						}
						// 0xbda38
						if (v21 >= 5) {
							// 0xbda40
							v13 = v21;
							if (v21 >= 23) {
								// 0xbda48
								g33 = 22;
								v13 = 22;
								// branch -> 0xbda4c
							}
							// 0xbda4c
							v14 = v13;
							if (v20 != 0) {
								// 0xbda54
								if (v13 <= 20) {
									// 0xbda5c
									v24 = 156 * v13 + v6;
									if (*(int32_t *)(v24 + 148) == 0) {
										// 0xbda70
										if (*(int32_t *)(v24 - 164) == 0) {
											// 0xbda84
											if (*(int32_t *)(v24 - 8) != 0) {
												// 0xbda90
												v19 = v13 - 1;
												g33 = v19;
												v14 = v19;
												// branch -> 0xbda94
											} else {
												v14 = v13;
											}
										} else {
											// 0xbda7c
											v18 = v13 - 2;
											g33 = v18;
											v14 = v18;
											// branch -> 0xbda94
										}
										// 0xbda94
										v25 = 156 * v14 + v6;
										g34 = v25;
										if (*(int32_t *)(v25 + 148) == 0) {
											// 0xbdaa8
											if (v20 != 0) {
												// 0xbdab0
												if (v14 == 22) {
													// 0xbdab8
													*v7 = v14;
													g34 = function_bd780(g34);
													// branch -> 0xbdac0
												}
											}
										} else {
											// 0xbdab8
											*v7 = v14;
											g34 = function_bd780(g34);
											// branch -> 0xbdac0
										}
										// 0xbdac0
										g36 = v1;
										g35 = v2;
										g33 = v3;
										return g34;
									}
									v14 = v13;
								} else {
									v14 = v13;
								}
							}
							// 0xbda94
							v25 = 156 * v14 + v6;
							g34 = v25;
							if (*(int32_t *)(v25 + 148) == 0) {
								// 0xbdaa8
								if (v20 != 0) {
									// 0xbdab0
									if (v14 == 22) {
										// 0xbdab8
										*v7 = v14;
										g34 = function_bd780(g34);
										// branch -> 0xbdac0
									}
								}
							} else {
								// 0xbdab8
								*v7 = v14;
								g34 = function_bd780(g34);
								// branch -> 0xbdac0
							}
							// 0xbdac0
							g36 = v1;
							g35 = v2;
							g33 = v3;
							return g34;
						}
					}
				}
			}
			// 0xbdac0
			g36 = v1;
			g35 = v2;
			g33 = v3;
			return g34;
		}
	}
	// 0xbdac0
	g36 = v1;
	g35 = v2;
	g33 = v3;
	return g34;
}

// Address range: 0xbdadc - 0xbdaf4
int32_t ReleaseStoreBtn(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x6f08); // r3
	*(char *)*(int32_t *)(g23 - 0x6f04) = -1;
	*(char *)result = (char)-1;
	return result;
}
