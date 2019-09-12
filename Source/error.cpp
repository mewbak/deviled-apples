// Address range: 0x50b84 - 0x50bf4
int32_t InitDiabloMsg(char result2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7284); // 0x50b84
	int32_t v2 = *(int32_t *)(g23 - 0x7280); // 0x50b8c
	unsigned char v3 = *(char *)v1;          // 0x50b90
	int32_t v4 = v3;                         // 0x50b90
	int32_t v5 = v3;                         // 0x50b98
	int32_t result;                          // r3
	int32_t v6;                              // 0x50be0
	char *v7;                                // 0x50bcc
	if (v3 < 1) {
		// 0x50bbc
		*(char *)(v5 + v2) = result2;
		if (v3 != 80 && 0x1000000 * v4 <= 0x50000000) {
			// 0x50bcc
			v7 = (char *)v1;
			*v7 = (char)((int32_t)*v7 + 1);
			// branch -> 0x50bd8
		}
		// 0x50bd8
		v6 = g23;
		result = *(int32_t *)(v6 - 0x75dc);
		*(char *)*(int32_t *)(v6 - 0x75d8) = *(char *)v2;
		*(char *)result = (char)70;
		return result;
	}
	int32_t v8 = v5; // 0x50bb8
	int32_t v9 = v2; // 0x50bb4
	while (true) {
		// 0x50ba4
		if (*(char *)v9 == result2) {
			// bb
			return result2;
		}
		int32_t v10 = v8 - 1; // 0x50bb8
		if (v10 == 0) {
			// break -> 0x50bbc
			break;
		}
		v8 = v10;
		v9++;
		// continue -> 0x50ba4
	}
	// 0x50bbc
	*(char *)(v5 + v2) = result2;
	if (v3 != 80 && 0x1000000 * v4 <= 0x50000000) {
		// 0x50bcc
		v7 = (char *)v1;
		*v7 = (char)((int32_t)*v7 + 1);
		// branch -> 0x50bd8
	}
	// 0x50bd8
	v6 = g23;
	result = *(int32_t *)(v6 - 0x75dc);
	*(char *)*(int32_t *)(v6 - 0x75d8) = *(char *)v2;
	*(char *)result = (char)70;
	return result;
}

// Address range: 0x50bf4 - 0x50d50
int32_t ClrDiabloMsg(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7280); // 0x50bf4
	int32_t v2 = 0;                          // r0
	*(char *)v1 = 0;
	int32_t result = *(int32_t *)(g23 - 0x7284); // r3
	*(char *)(v1 + 1) = (char)v2;
	*(char *)(v1 + 2) = (char)v2;
	*(char *)(v1 + 3) = (char)v2;
	*(char *)(v1 + 4) = (char)v2;
	*(char *)(v1 + 5) = (char)v2;
	*(char *)(v1 + 6) = (char)v2;
	*(char *)(v1 + 7) = (char)v2;
	*(char *)(v1 + 8) = (char)v2;
	*(char *)(v1 + 9) = (char)v2;
	*(char *)(v1 + 10) = (char)v2;
	*(char *)(v1 + 11) = (char)v2;
	*(char *)(v1 + 12) = (char)v2;
	*(char *)(v1 + 13) = (char)v2;
	*(char *)(v1 + 14) = (char)v2;
	*(char *)(v1 + 15) = (char)v2;
	*(char *)(v1 + 16) = (char)v2;
	*(char *)(v1 + 17) = (char)v2;
	*(char *)(v1 + 18) = (char)v2;
	*(char *)(v1 + 19) = (char)v2;
	*(char *)(v1 + 20) = (char)v2;
	*(char *)(v1 + 21) = (char)v2;
	*(char *)(v1 + 22) = (char)v2;
	*(char *)(v1 + 23) = (char)v2;
	*(char *)(v1 + 24) = (char)v2;
	*(char *)(v1 + 25) = (char)v2;
	*(char *)(v1 + 26) = (char)v2;
	*(char *)(v1 + 27) = (char)v2;
	*(char *)(v1 + 28) = (char)v2;
	*(char *)(v1 + 29) = (char)v2;
	*(char *)(v1 + 30) = (char)v2;
	*(char *)(v1 + 31) = (char)v2;
	*(char *)(v1 + 32) = (char)v2;
	*(char *)(v1 + 33) = (char)v2;
	*(char *)(v1 + 34) = (char)v2;
	*(char *)(v1 + 35) = (char)v2;
	*(char *)(v1 + 36) = (char)v2;
	*(char *)(v1 + 37) = (char)v2;
	*(char *)(v1 + 38) = (char)v2;
	*(char *)(v1 + 39) = (char)v2;
	*(char *)(v1 + 40) = (char)v2;
	*(char *)(v1 + 41) = (char)v2;
	*(char *)(v1 + 42) = (char)v2;
	*(char *)(v1 + 43) = (char)v2;
	*(char *)(v1 + 44) = (char)v2;
	*(char *)(v1 + 45) = (char)v2;
	*(char *)(v1 + 46) = (char)v2;
	*(char *)(v1 + 47) = (char)v2;
	*(char *)(v1 + 48) = (char)v2;
	*(char *)(v1 + 49) = (char)v2;
	*(char *)(v1 + 50) = (char)v2;
	*(char *)(v1 + 51) = (char)v2;
	*(char *)(v1 + 52) = (char)v2;
	*(char *)(v1 + 53) = (char)v2;
	*(char *)(v1 + 54) = (char)v2;
	*(char *)(v1 + 55) = (char)v2;
	*(char *)(v1 + 56) = (char)v2;
	*(char *)(v1 + 57) = (char)v2;
	*(char *)(v1 + 58) = (char)v2;
	*(char *)(v1 + 59) = (char)v2;
	*(char *)(v1 + 60) = (char)v2;
	*(char *)(v1 + 61) = (char)v2;
	*(char *)(v1 + 62) = (char)v2;
	*(char *)(v1 + 63) = (char)v2;
	*(char *)(v1 + 64) = (char)v2;
	*(char *)(v1 + 65) = (char)v2;
	*(char *)(v1 + 66) = (char)v2;
	*(char *)(v1 + 67) = (char)v2;
	*(char *)(v1 + 68) = (char)v2;
	*(char *)(v1 + 69) = (char)v2;
	*(char *)(v1 + 70) = (char)v2;
	*(char *)(v1 + 71) = (char)v2;
	*(char *)(v1 + 72) = (char)v2;
	*(char *)(v1 + 73) = (char)v2;
	*(char *)(v1 + 74) = (char)v2;
	*(char *)(v1 + 75) = (char)v2;
	*(char *)(v1 + 76) = (char)v2;
	*(char *)(v1 + 77) = (char)v2;
	*(char *)(v1 + 78) = (char)v2;
	*(char *)(v1 + 79) = (char)v2;
	*(char *)*(int32_t *)(g23 - 0x75d8) = (char)v2;
	*(char *)result = (char)v2;
	return result;
}

// Address range: 0x50d50 - 0x510fc
int32_t DrawDiabloMsg(int32_t a1)
{
	int32_t v1 = g10;                        // 0x50d54
	int32_t v2 = *(int32_t *)(g23 - 0x7288); // 0x50d58
	g27 = v2;
	g29 = g23 - 0x2da0;
	g28 = *(int32_t *)(g23 - 0x76b4);
	CelDecodeOnly(165, 318, *(int32_t *)v2, 1, 12);
	CelDecodeOnly(591, 318, *(int32_t *)g27, 4, 12);
	CelDecodeOnly(165, 366, *(int32_t *)g27, 2, 12);
	CelDecodeOnly(591, 366, *(int32_t *)g27, 3, 12);
	g26 = 173;
	g25 = 0;
	CelDecodeOnly(173, 318, *(int32_t *)g27, 5, 12);
	CelDecodeOnly(g26, 366, *(int32_t *)g27, 7, 12);
	int32_t v3 = g25 + 1; // 0x50e18
	g25 = v3;
	int32_t v4 = g26 + 12; // 0x50e1c
	g26 = v4;
	// branch -> 0x50de8
	while (v3 < 35) {
		// 0x50de8
		CelDecodeOnly(v4, 318, *(int32_t *)g27, 5, 12);
		CelDecodeOnly(g26, 366, *(int32_t *)g27, 7, 12);
		v3 = g25 + 1;
		g25 = v3;
		v4 = g26 + 12;
		g26 = v4;
		// continue -> 0x50de8
	}
	// 0x50e28
	g25 = 330;
	g26 = 0;
	CelDecodeOnly(165, 330, *(int32_t *)g27, 6, 12);
	CelDecodeOnly(591, g25, *(int32_t *)g27, 8, 12);
	int32_t v5 = g26 + 1; // 0x50e60
	g26 = v5;
	int32_t v6 = g25 + 12; // 0x50e64
	g25 = v6;
	// branch -> 0x50e30
	while (v5 < 3) {
		// 0x50e30
		CelDecodeOnly(165, v6, *(int32_t *)g27, 6, 12);
		CelDecodeOnly(591, g25, *(int32_t *)g27, 8, 12);
		v5 = g26 + 1;
		g26 = v5;
		v6 = g25 + 12;
		g25 = v6;
		// continue -> 0x50e30
	}
	int32_t v7 = 27;                                               // r5
	int32_t v8 = 0;                                                // r0
	int32_t v9 = *(int32_t *)*(int32_t *)(g23 - 0x7804) + 0x441a8; // 0x50e84
	                                                               // branch -> 0x50e88
lab_0x50e88:
	while (true) {
		int32_t v10 = v9;  // 0x50e90
		int32_t v11 = 216; // 0x50e8c
		// branch -> 0x50e8c
		while (true) {
			int32_t v12 = v11 - 1; // 0x50e8c
			int32_t v13 = v12;     // r3
			*(char *)v10 = (char)v8;
			int32_t v14 = v9;      // 0x50e94
			int32_t v15 = v14 + 2; // 0x50e94
			v9 = v15;
			if (v12 == 0) {
				int32_t v16 = v14 - 1198; // 0x50ea0
				v9 = v16;
				int32_t v17 = 216; // 0x50ea4
				// branch -> 0x50ea4
				while (true) {
					int32_t v18 = v17 - 1; // 0x50ea4
					v13 = v18;
					*(char *)(v16 + 1) = (char)v8;
					int32_t v19 = v9;      // 0x50eac
					int32_t v20 = v19 + 2; // 0x50eac
					v9 = v20;
					if (v18 == 0) {
						int32_t v21 = v7 - 1; // 0x50eb4
						v7 = v21;
						if (v21 == 0) {
							// break (via goto) -> 0x50ec0
							goto lab_0x50ec0;
						}
						v9 = v19 - 1198;
						// continue (via goto) -> 0x50e88
						goto lab_0x50e88;
					} else {
						// 0x50ea4
						v16 = v20;
						v17 = v13;
						// branch -> 0x50ea4
						continue;
					}
				}
			lab_0x50ec0:
				// 0x50ec0
				g34 = g28;
				g37 = *(int32_t *)(g23 + 0x26c0 + 4 * (int32_t) * (char *)g33);
				strcpy();
				g34 = g28;
				g27 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 1368) + 165;
				int32_t v22 = CPrintString(); // 0x50eec
				g36 = v22;
				int32_t v23 = v22; // 0x510782
				int32_t v24 = 0;   // 0x5102c
				int32_t v25;       // 0x51040
				int32_t v26;       // 0x51068
				int32_t v27;       // 0x5106c
				int32_t v28;       // 0x51080
				int32_t v29;       // 0x51094
				uint32_t v30;      // 0x5102c
				int32_t v31;       // 0x51064
				int32_t v32;       // 0x51078
				char *v33;         // 0x51080
				char *v34;         // 0x510a0
				int32_t result2;   // 0x510a8
				unsigned char v35; // 0x51080
				unsigned char v36; // 0x510b4
				int32_t result;    // 0x51080
				int32_t result3;   // 0x510cc
				unsigned char v37; // 0x51044
				unsigned char v38; // 0x51048
				int32_t v39;       // 0x51048
				if (v22 >= 1) {
					int32_t v40 = 0;
					int32_t v41 = v22; // 0x50ff4
					int32_t v42 = 0;   // 0x510e0
					if (v22 >= 9) {
						int32_t v43 = g28; // 0x50f1c
						if (v22 >= 9) {
							int32_t v44 = g29;                                                    // 0x50f6c
							int32_t v45 = g30;                                                    // 0x50f74
							int32_t v46 = g31;                                                    // 0x50f7c
							int32_t v47 = (int32_t) * (char *)(v43 + 1);                          // 0x50f2c
							unsigned char v48 = *(char *)((int32_t) * (char *)v43 + v46);         // 0x50f30
							unsigned char v49 = *(char *)((int32_t)v48 + v45);                    // 0x50f38
							int32_t v50 = (int32_t) * (char *)(v43 + 2);                          // 0x50f3c
							unsigned char v51 = *(char *)((int32_t) * (char *)(v47 + v46) + v45); // 0x50f44
							int32_t v52 = (int32_t) * (char *)((int32_t)v49 + v44);               // 0x50f48
							int32_t v53 = (int32_t) * (char *)(v43 + 3);                          // 0x50f58
							unsigned char v54 = *(char *)((int32_t) * (char *)(v50 + v46) + v45); // 0x50f5c
							int32_t v55 = (int32_t) * (char *)((int32_t)v51 + v44) + v52 + 1;     // 0x50f60
							int32_t v56 = (int32_t) * (char *)(v43 + 4);                          // 0x50f70
							unsigned char v57 = *(char *)((int32_t) * (char *)(v53 + v46) + v45); // 0x50f74
							int32_t v58 = (int32_t) * (char *)((int32_t)v54 + v44) + v55 + 1;     // 0x50f78
							int32_t v59 = g29;                                                    // 0x50f84
							int32_t v60 = v43;                                                    // 0x50f88
							int32_t v61 = (int32_t) * (char *)(v60 + 5);                          // 0x50f88
							int32_t v62 = (int32_t) * (char *)(v59 + (int32_t)v57) + v58 + 1;     // 0x50f8c
							int32_t v63 = g30;                                                    // 0x50f90
							unsigned char v64 = *(char *)(v63 + (int32_t) * (char *)(v56 + v46)); // 0x50f90
							int32_t v65 = g31;                                                    // 0x50f94
							int32_t v66 = (int32_t) * (char *)(v60 + 7);                          // 0x50fa4
							int32_t v67 = (int32_t) * (char *)((int32_t)v64 + v59) + v62 + 1;     // 0x50fa8
							unsigned char v68 = *(char *)((int32_t) * (char *)(v65 + v61) + v63); // 0x50fac
							unsigned char v69 = *(char *)((int32_t) * (char *)(v60 + 6) + v65);   // 0x50fb4
							int32_t v70 = v60 + 8;                                                // 0x50fbc
							int32_t v71 = (int32_t) * (char *)((int32_t)v68 + v59);               // 0x50fc0
							unsigned char v72 = *(char *)((int32_t)v69 + v63);                    // 0x50fc4
							unsigned char v73 = *(char *)((int32_t) * (char *)(v66 + v65) + v63); // 0x50fcc
							unsigned char v74 = *(char *)((int32_t)v72 + v59);                    // 0x50fd0
							int32_t v75 = (int32_t) * (char *)((int32_t)v73 + v59);               // 0x50fd8
							int32_t v76 = v71 + v67 + 1 + 3 + (int32_t)v74 + v75;                 // 0x50fe8
							int32_t v77 = (v22 - 1) / 8 - 1;                                      // 0x50fec
							int32_t v78 = 8;
							// branch -> 0x50f24
							while (v77 != 0) {
								// 0x50f24
								v44 = v59;
								v45 = v63;
								v46 = v65;
								v43 = v70;
								v47 = (int32_t) * (char *)(v43 + 1);
								v48 = *(char *)((int32_t) * (char *)v43 + v46);
								v49 = *(char *)((int32_t)v48 + v45);
								v50 = (int32_t) * (char *)(v43 + 2);
								v51 = *(char *)((int32_t) * (char *)(v47 + v46) + v45);
								v52 = (int32_t) * (char *)((int32_t)v49 + v44) + v76;
								v53 = (int32_t) * (char *)(v43 + 3);
								v54 = *(char *)((int32_t) * (char *)(v50 + v46) + v45);
								v55 = (int32_t) * (char *)((int32_t)v51 + v44) + v52 + 1;
								v56 = (int32_t) * (char *)(v43 + 4);
								v57 = *(char *)((int32_t) * (char *)(v53 + v46) + v45);
								v58 = (int32_t) * (char *)((int32_t)v54 + v44) + v55 + 1;
								v59 = g29;
								v60 = v70;
								v61 = (int32_t) * (char *)(v60 + 5);
								v62 = (int32_t) * (char *)(v59 + (int32_t)v57) + v58 + 1;
								v63 = g30;
								v64 = *(char *)(v63 + (int32_t) * (char *)(v56 + v46));
								v65 = g31;
								v66 = (int32_t) * (char *)(v60 + 7);
								v67 = (int32_t) * (char *)((int32_t)v64 + v59) + v62 + 1;
								v68 = *(char *)((int32_t) * (char *)(v65 + v61) + v63);
								v69 = *(char *)((int32_t) * (char *)(v60 + 6) + v65);
								v70 = v60 + 8;
								v71 = (int32_t) * (char *)((int32_t)v68 + v59);
								v72 = *(char *)((int32_t)v69 + v63);
								v73 = *(char *)((int32_t) * (char *)(v66 + v65) + v63);
								v74 = *(char *)((int32_t)v72 + v59);
								v75 = (int32_t) * (char *)((int32_t)v73 + v59);
								v76 = v71 + v67 + 1 + 3 + (int32_t)v74 + v75;
								v77--;
								v78 += 8;
								// continue -> 0x50f24
							}
							// 0x510e0
							v40 = v76;
							v41 = g36;
							v42 = v78;
							// branch -> 0x510e0
						} else {
							v40 = 0;
							v41 = v22;
							v42 = 0;
						}
					}
					int32_t v79 = g28 + v42; // 0x510e0
					if (v41 > v42) {
						int32_t v80 = v41 - v42; // 0x51020
						int32_t v81 = v40;       // 0x51018
						// branch -> 0x51004
						while (true) {
							int32_t v82 = (int32_t) * (char *)((int32_t) * (char *)v79 + g31); // 0x5100c
							int32_t v83 = (int32_t) * (char *)(v82 + g30);                     // 0x51010
							int32_t v84 = v81 + 1 + (int32_t) * (char *)(v83 + g29);           // 0x5101c
							int32_t v85 = v80 - 1;                                             // 0x51020
							if (v85 == 0) {
								v23 = v41;
								v24 = v84;
								// break -> 0x51024
								break;
							}
							v80 = v85;
							v81 = v84;
							v79++;
							// continue -> 0x51004
						}
						// 0x51024
						if (v24 <= 441) {
							// 0x5102c
							v30 = 442 - v24;
							g27 += (v30 / 2 | v30 & -0x80000000);
							// branch -> 0x51038
						}
						// 0x51038
						g26 = 0;
						if (v23 <= 0) {
							// 0x51080
							v28 = g32;
							v33 = (char *)v28;
							v35 = *v33;
							result = v35;
							v29 = v28;
							if (v35 >= 1) {
								// 0x5108c
								*v33 = (char)(result - 1);
								v29 = g32;
								// branch -> 0x51094
							}
							// 0x51094
							if (*(char *)v29 != 0) {
								// 0x510e8
								g10 = v1;
								return result;
							}
							// 0x510a0
							v34 = (char *)g35;
							result2 = (int32_t)*v34 - 1;
							*v34 = (char)result2;
							*(char *)g32 = (char)70;
							v36 = *(char *)g35;
							if (v36 == 0) {
								// 0x510c0
								*(char *)g33 = 0;
								// branch -> 0x510e8
								// 0x510e8
								g10 = v1;
								return result2;
							}
							// 0x510cc
							result3 = *(int32_t *)(g23 - 0x7280);
							*(char *)g33 = *(char *)(result3 + (int32_t)v36);
							// branch -> 0x510e8
							// 0x510e8
							g10 = v1;
							return result3;
						}
						int32_t v86 = v23; // 0x5107834
						int32_t v87 = 0;   // 0x5106c32
						v25 = g28;
						// branch -> 0x51040
						while (true) {
							// 0x51040
							v37 = *(char *)(g31 + (int32_t) * (char *)v25);
							v38 = *(char *)(g30 + (int32_t)v37);
							v39 = v38;
							g25 = v39;
							v32 = v86;
							v27 = v87;
							v26 = v25;
							v31 = v39;
							if (v38 != 0) {
							lab_0x51054:
								// 0x51054
								function_2d918(g27, v39, 3);
								v32 = g36;
								v27 = g26;
								v26 = g28;
								v31 = g25;
								// branch -> 0x51064
							}
						lab_0x51064:;
							int32_t v88 = v26 + 1; // 0x51068
							g28 = v88;
							int32_t v89 = v27 + 1; // 0x5106c
							g26 = v89;
							g27 += (int32_t) * (char *)(g29 + v31) + 1;
							if (v89 >= v32) {
								// break -> 0x51080
								break;
							}
							v86 = v32;
							v87 = v89;
							v25 = v88;
							// continue -> 0x51040
						}
						// 0x51080
						v28 = g32;
						v33 = (char *)v28;
						v35 = *v33;
						result = v35;
						v29 = v28;
						if (v35 >= 1) {
							// 0x5108c
							*v33 = (char)(result - 1);
							v29 = g32;
							// branch -> 0x51094
						}
						// 0x51094
						if (*(char *)v29 != 0) {
							// 0x510e8
							g10 = v1;
							return result;
						}
						// 0x510a0
						v34 = (char *)g35;
						result2 = (int32_t)*v34 - 1;
						*v34 = (char)result2;
						*(char *)g32 = (char)70;
						v36 = *(char *)g35;
						if (v36 == 0) {
							// 0x510c0
							*(char *)g33 = 0;
							// branch -> 0x510e8
							// 0x510e8
							g10 = v1;
							return result2;
						}
						// 0x510cc
						result3 = *(int32_t *)(g23 - 0x7280);
						*(char *)g33 = *(char *)(result3 + (int32_t)v36);
						// branch -> 0x510e8
						// 0x510e8
						g10 = v1;
						return result3;
					}
					v23 = v41;
					v24 = v40;
				}
				// 0x51024
				if (v24 <= 441) {
					// 0x5102c
					v30 = 442 - v24;
					g27 += (v30 / 2 | v30 & -0x80000000);
					// branch -> 0x51038
				}
				// 0x51038
				g26 = 0;
				if (v23 > 0) {
					// 0x51040
					v25 = g28;
					// branch -> 0x51040
					while (true) {
						// 0x51040
						v37 = *(char *)(g31 + (int32_t) * (char *)v25);
						v38 = *(char *)(g30 + (int32_t)v37);
						v39 = v38;
						g25 = v39;
						if (v38 == 0) {
							v32 = v23;
							v27 = 0;
							v26 = v25;
							v31 = v39;
							goto lab_0x51064;
						}
						goto lab_0x51054;
					}
				}
				// 0x51080
				v28 = g32;
				v33 = (char *)v28;
				v35 = *v33;
				result = v35;
				v29 = v28;
				if (v35 >= 1) {
					// 0x5108c
					*v33 = (char)(result - 1);
					v29 = g32;
					// branch -> 0x51094
				}
				// 0x51094
				if (*(char *)v29 != 0) {
					// 0x510e8
					g10 = v1;
					return result;
				}
				// 0x510a0
				v34 = (char *)g35;
				result2 = (int32_t)*v34 - 1;
				*v34 = (char)result2;
				*(char *)g32 = (char)70;
				v36 = *(char *)g35;
				if (v36 == 0) {
					// 0x510c0
					*(char *)g33 = 0;
					// branch -> 0x510e8
					// 0x510e8
					g10 = v1;
					return result2;
				}
				// 0x510cc
				result3 = *(int32_t *)(g23 - 0x7280);
				*(char *)g33 = *(char *)(result3 + (int32_t)v36);
				// branch -> 0x510e8
				// 0x510e8
				g10 = v1;
				return result3;
			}
			// 0x50e8c
			v10 = v15;
			v11 = v13;
			// branch -> 0x50e8c
		}
	}
}
