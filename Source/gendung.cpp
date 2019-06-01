
// Address range: 0x519d8 - 0x51bc0
int32_t FillSolidBlockTbls(int32_t a1)
{
	int32_t v1 = g10;                        // 0x519dc
	int32_t v2 = *(int32_t *)(g23 - 0x7228); // 0x519e0
	g36 = v2;
	g31 = *(int32_t *)(g23 - 0x7238);
	g32 = *(int32_t *)(g23 - 0x7234);
	g34 = v2;
	g33 = *(int32_t *)(g23 - 0x7230);
	g35 = *(int32_t *)(g23 - 0x722c);
	function_e9dd8();
	g34 = g35;
	function_e9dd8();
	g34 = g33;
	function_e9dd8();
	g34 = g32;
	function_e9dd8();
	g34 = g31;
	g37 = 2049;
	function_e9dd8();
	int32_t v3;
	unsigned char v4 = *(char *)*(int32_t *)(v3 - 0x7794); // 0x51a50
	int32_t v5;                                            // ctr
	int32_t v6;                                            // r4
	int32_t v7;                                            // r5
	int32_t v8;                                            // r6
	int32_t v9;                                            // r7
	int32_t v10;                                           // r8
	int32_t v11;                                           // r9
	int32_t v12;                                           // bp-36
	int32_t v13;                                           // 0x51af0
	int32_t v14;                                           // 0x51b20
	int32_t v15;                                           // 0x51af8
	unsigned char v16;                                     // 0x51b20
	int32_t v17;                                           // 0x51b34
	int32_t result;                                        // 0x51ba8
	int32_t v18;                                           // 0x51ab0
	int32_t v19;                                           // 0x51af4
	int32_t v20;                                           // 0x51b20
	if (v4 == 2) {
		// 0x51aa8
		v18 = LoadFileInMem(*(int32_t *)(v3 - 0x6240), &v12);
		// branch -> 0x51aec
	} else {
		// 0x51a5c
		if (v4 > 2) {
			// 0x51a70
			if (v4 == 4) {
				int32_t v21 = LoadFileInMem(*(int32_t *)(v3 - 0x6248), &v12); // 0x51ad8
				v18 = v21;
				v18 = v21;
				// branch -> 0x51aec
			} else {
				// 0x51a78
				if (v4 > 4) {
					// 0x51ae4
					app_fatal(*(int32_t *)(v3 - 0x624c));
					// branch -> 0x51aec
				} else {
					int32_t v22 = LoadFileInMem(*(int32_t *)(v3 - 0x6244), &v12); // 0x51ac4
					v18 = v22;
					v18 = v22;
					// branch -> 0x51aec
				}
				// 0x51aec
				g34 = v18;
				v13 = function_c9948();
				v19 = v12;
				v15 = g35 + 1;
				v7 = v15;
				v8 = g36 + 1;
				v5 = v19;
				v9 = g32 + 1;
				v10 = g33 + 1;
				v11 = g31 + 1;
				v6 = *(int32_t *)(g23 - 0x723c) + 1;
				if (v19 == 0) {
					// 0x51b9c
					function_c9acc(v18);
					result = MemFreeDbg(&v18);
					g10 = v1;
					return result;
				}
				v17 = v15;
				v14 = v13;
				while (true) {
					// 0x51b20
					v16 = *(char *)v14;
					v20 = v16;
					if (v16 % 2 != 0) {
					lab_0x51b30_4:
						// 0x51b30
						*(char *)v17 = 1;
						// branch -> 0x51b38
					}
				lab_0x51b38_4:
					// 0x51b38
					if (__asm_rlwinm_(v20, 0, 30, 30) != 0) {
						// 0x51b40
						*(char *)v8 = 1;
						// branch -> 0x51b48
					}
					// 0x51b48
					if (__asm_rlwinm_(v20, 0, 29, 29) != 0) {
						// 0x51b50
						*(char *)v9 = 1;
						// branch -> 0x51b58
					}
					// 0x51b58
					if (__asm_rlwinm_(v20, 0, 28, 28) != 0) {
						// 0x51b60
						*(char *)v10 = 1;
						// branch -> 0x51b68
					}
					// 0x51b68
					if (__asm_rlwinm_(v20, 0, 24, 24) != 0) {
						// 0x51b70
						*(char *)v11 = 1;
						// branch -> 0x51b78
					}
					int32_t v23 = __asm_rlwinm(v20, 28, 29, 31); // 0x51b78
					v10++;
					*(char *)v6 = (char)v23;
					v11++;
					v6++;
					int32_t v24 = v7 + 1; // 0x51b8c
					v7 = v24;
					v8++;
					v9++;
					int32_t v25 = v5 - 1; // 0x51b98
					v5 = v25;
					if (v25 == 0) {
						// 0x51b9c
						// branch -> 0x51b9c
						// 0x51b9c
						function_c9acc(v18);
						result = MemFreeDbg(&v18);
						g10 = v1;
						return result;
					}
					// 0x51b78
					v17 = v24;
					v14++;
					// branch -> 0x51b20
				}
			}
			// 0x51aec
			g34 = v18;
			v13 = function_c9948();
			v19 = v12;
			v15 = g35 + 1;
			v7 = v15;
			v8 = g36 + 1;
			v5 = v19;
			v9 = g32 + 1;
			v10 = g33 + 1;
			v11 = g31 + 1;
			v6 = *(int32_t *)(g23 - 0x723c) + 1;
			if (v19 == 0) {
				// 0x51b9c
				function_c9acc(v18);
				result = MemFreeDbg(&v18);
				g10 = v1;
				return result;
			}
			v17 = v15;
			v14 = v13;
			while (true) {
				// 0x51b20
				v16 = *(char *)v14;
				v20 = v16;
				if (v16 % 2 == 0) {
					goto lab_0x51b38_4;
				}
				goto lab_0x51b30_4;
			}
		} else {
			// 0x51a60
			if (v4 == 0) {
				int32_t v26 = LoadFileInMem(*(int32_t *)(v3 - 0x6238), &v12); // 0x51a88
				v18 = v26;
				v18 = v26;
				// branch -> 0x51aec
			} else {
				int32_t v27 = LoadFileInMem(*(int32_t *)(v3 - 0x623c), &v12); // 0x51a9c
				v18 = v27;
				v18 = v27;
				// branch -> 0x51aec
			}
			// 0x51aec
			g34 = v18;
			v13 = function_c9948();
			v19 = v12;
			v15 = g35 + 1;
			v7 = v15;
			v8 = g36 + 1;
			v5 = v19;
			v9 = g32 + 1;
			v10 = g33 + 1;
			v11 = g31 + 1;
			v6 = *(int32_t *)(g23 - 0x723c) + 1;
			if (v19 == 0) {
				// 0x51b9c
				function_c9acc(v18);
				result = MemFreeDbg(&v18);
				g10 = v1;
				return result;
			}
			v17 = v15;
			v14 = v13;
			while (true) {
				// 0x51b20
				v16 = *(char *)v14;
				v20 = v16;
				if (v16 % 2 == 0) {
					goto lab_0x51b38_4;
				}
				goto lab_0x51b30_4;
			}
		}
	}
	// 0x51aec
	g34 = v18;
	v13 = function_c9948();
	v19 = v12;
	v15 = g35 + 1;
	v7 = v15;
	v8 = g36 + 1;
	v5 = v19;
	v9 = g32 + 1;
	v10 = g33 + 1;
	v11 = g31 + 1;
	v6 = *(int32_t *)(g23 - 0x723c) + 1;
	if (v19 == 0) {
		// 0x51b9c
		function_c9acc(v18);
		result = MemFreeDbg(&v18);
		g10 = v1;
		return result;
	}
	v17 = v15;
	v14 = v13;
	while (true) {
		// 0x51b20
		v16 = *(char *)v14;
		v20 = v16;
		if (v16 % 2 == 0) {
			goto lab_0x51b38_4;
		}
		goto lab_0x51b30_4;
	}
}

// Address range: 0x51bc0 - 0x51c4c
int32_t function_51bc0(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7240); // 0x51bc0
	int32_t v2 = 4 * a1;                     // 0x51bc4
	int32_t v3 = 4 * a2;                     // 0x51bc8
	int32_t v4 = v3 + v1;                    // 0x51bd4
	int32_t *v5 = (int32_t *)(v2 + v1);      // 0x51bd8
	int32_t v6 = *(int32_t *)(g23 - 0x6250); // r5
	*v5 = *(int32_t *)v4;
	int32_t v7 = v2 + v6; // r11
	int32_t v8 = v3 + v6; // r12
	v6 = *(int32_t *)(g23 - 0x7244);
	*(int32_t *)v4 = *v5;
	a2 = 2 * a2 + v6;
	int32_t *v9 = (int32_t *)v7; // 0x51c08
	*v9 = *(int32_t *)v8;
	int32_t v10 = *(int32_t *)(g23 - 0x6254); // 0x51c18
	int32_t v11 = v3 + v10;                   // r6
	*(int32_t *)v8 = *v9;
	int16_t *v12 = (int16_t *)(2 * a1 + v6); // 0x51c24
	*v12 = *(int16_t *)a2;
	*(int16_t *)a2 = (int16_t)(int32_t)*v12;
	int32_t *v13 = (int32_t *)(v2 + v10); // 0x51c34
	int32_t result = *v13;                // r3
	*v13 = *(int32_t *)v11;
	*(int32_t *)v11 = result;
	return result;
}

// Address range: 0x51c4c - 0x51cec
int32_t function_51c4c(int32_t result)
{
	// 0x51c4c
	g36 = *(int32_t *)(g23 - 0x7240);
	int32_t v1 = result; // r28
	if (result < 1) {
		// 0x51ccc
		return result;
	}
	int32_t v2 = 0;  // 0x51cc4
	int32_t result3; // 0x51ce823
	while (true) {
		int32_t result2 = result; // 0x51ce8
		if (v2 == 0) {
			int32_t v3 = g36;    // 0x51c78
			int32_t v4 = 0;      // r29
			int32_t v5 = result; // 0x51cb017
			int32_t v6 = 0;      // 0x51c98
			int32_t v7 = 1;      // 0x51cc411
			// branch -> 0x51c88
			int32_t v8; // 0x51cc410
			int32_t v9; // 0x51cb0
			while (true) {
				int32_t v10 = *(int32_t *)v3; // 0x51c88
				result3 = v10;
				v9 = v5;
				int32_t v11 = v6; // 0x51cac
				v8 = v7;
				if (v10 < *(int32_t *)(v3 + 4)) {
					// 0x51c98
					result3 = function_51bc0(v6, v6 + 1);
					v9 = v1;
					v11 = v4;
					v8 = 0;
					// branch -> 0x51ca8
				}
				int32_t v12 = v3 + 4;  // 0x51ca8
				int32_t v13 = v11 + 1; // 0x51cac
				v4 = v13;
				if (v13 >= v9) {
					// break -> 0x51cb8
					break;
				}
				v5 = v9;
				v6 = v13;
				v3 = v12;
				v7 = v8;
				// continue -> 0x51c88
			}
			int32_t v14 = v9 - 1; // 0x51cb8
			v1 = v14;
			if (v14 < 1) {
				// break -> 0x51ccc
				break;
			}
			result = v14;
			v2 = v8;
			// continue -> 0x51cc4
			continue;
		}
		// 0x51ccc
		return result2;
	}
	// 0x51ccc
	return result3;
}

// Address range: 0x51cec - 0x52378
int32_t function_51cec(int32_t a1)
{
	int32_t v1 = 0;                          // r6
	int32_t v2 = *(int32_t *)(g23 - 0x757c); // 0x51cf8
	int32_t v3 = *(int32_t *)(g23 - 0x7770); // r19
	int32_t v4 = *(int32_t *)(g23 - 0x7578); // r18
	int32_t v5 = *(int32_t *)(g23 - 0x7248); // r13
	g27 = *(int32_t *)(g23 - 0x75e8);
	int32_t v6 = *(int32_t *)(g23 - 0x7580); // r15
	int32_t v7 = *(int32_t *)(g23 - 0x6254); // r17
	int32_t v8 = *(int32_t *)(g23 - 0x7244); // 0x51d18
	g35 = v8;
	int32_t v9 = *(int32_t *)(g23 - 0x6250); // 0x51d1c
	g33 = v9;
	int32_t v10 = *(int32_t *)(g23 - 0x7240); // 0x51d20
	g32 = v10;
	int32_t v11 = *(int32_t *)(g23 - 0x7794); // r16
	int32_t v12 = 256;                        // ctr
	int32_t v13 = 0;                          // 0x51d48
	// branch -> 0x51d48
	while (true) {
		// 0x51d48
		*(int32_t *)v9 = v13;
		int32_t v14 = 0;  // r0
		int32_t v15 = v1; // 0x51d50
		*(int32_t *)v10 = 0;
		int32_t v16 = v1; // 0x51d5c
		*(int16_t *)v8 = (int16_t)v14;
		int32_t v17 = v1; // 0x51d68
		*(int32_t *)(v9 + 4) = v15 + 1;
		v1 += 8;
		*(int32_t *)(v10 + 4) = v14;
		*(int16_t *)(v8 + 2) = (int16_t)v14;
		*(int32_t *)(v9 + 8) = v15 + 2;
		*(int32_t *)(v10 + 8) = v14;
		*(int16_t *)(v8 + 4) = (int16_t)v14;
		*(int32_t *)(v9 + 12) = v16 + 3;
		*(int32_t *)(v10 + 12) = v14;
		*(int16_t *)(v8 + 6) = (int16_t)v14;
		*(int32_t *)(v9 + 16) = v16 + 4;
		*(int32_t *)(v10 + 16) = v14;
		*(int16_t *)(v8 + 8) = (int16_t)v14;
		*(int32_t *)(v9 + 20) = v17 + 5;
		*(int32_t *)(v10 + 20) = v14;
		*(int16_t *)(v8 + 10) = (int16_t)v14;
		*(int32_t *)(v9 + 24) = v17 + 6;
		*(int32_t *)(v10 + 24) = v14;
		*(int16_t *)(v8 + 12) = (int16_t)v14;
		*(int32_t *)(v9 + 28) = v17 + 7;
		v9 += 32;
		*(int32_t *)(v10 + 28) = v14;
		v10 += 32;
		*(int16_t *)(v8 + 14) = (int16_t)v14;
		v8 += 16;
		int32_t v18 = v12 - 1; // 0x51dd8
		v12 = v18;
		if (v18 == 0) {
			unsigned char v19 = *(char *)v11;
			g11 = v19;
			int32_t v20 = v19 == 4 ? 12 : 10; // r22
			int32_t v21 = *(int32_t *)v6;     // 0x51df4
			int32_t v22 = 0;                  // r10
			int32_t v23 = 0;                  // r9
			int32_t v24 = 0;                  // 0x51e1061
			int32_t v25 = v21;                // 0x51e04
			// branch -> 0x51e00
			while (true) {
				// 0x51e00
				v8 = 0;
				int32_t v26 = v25; // r8
				int32_t v27 = 0;   // 0x51e4867
				int32_t v28 = v24; // 0x51e10
				int32_t v29 = v25; // 0x51e10
				// branch -> 0x51e08
				while (true) {
					// 0x51e08
					v12 = v20;
					int32_t v30 = v29 + v28; // 0x51e10
					v10 = v30;
					int32_t v31 = v29; // 0x51e4c
					int32_t v32 = v27; // 0x51e48
					int32_t v33;       // r7
					if (v20 >= 1) {
						int32_t v34 = v20; // 0x51e4465
						while (true) {
							uint16_t v35 = *(int16_t *)v30; // 0x51e18
							int32_t v36 = v35;              // 0x51e18
							int32_t v37 = v34;              // 0x51e44
							int32_t v38 = v30;              // 0x51e40
							if (v35 != 0) {
								int32_t v39 = __asm_rlwinm(v36, 2, 18, 29); // 0x51e24
								g11 = v39;
								v33 = __asm_rlwinm(v36, 0, 17, 19);
								v1 = __asm_rlwinm(v36, 1, 19, 30);
								*(int32_t *)(g11 + g32) = *(int32_t *)(g32 + v39) + 1;
								*(int16_t *)(v1 + g35) = (int16_t)v33;
								v37 = v12;
								v38 = v10;
								// branch -> 0x51e40
							}
							int32_t v40 = v38 + 2; // 0x51e40
							v10 = v40;
							int32_t v41 = v37 - 1; // 0x51e44
							v12 = v41;
							if (v41 == 0) {
								// break -> 0x51e48
								break;
							}
							v34 = v41;
							v30 = v40;
							// continue -> 0x51e18
						}
						// 0x51e48
						v31 = v26;
						v32 = v8;
						// branch -> 0x51e48
					}
					int32_t v42 = v32 + 1; // 0x51e48
					v8 = v42;
					int32_t v43 = v31 + 3584; // 0x51e4c
					v26 = v43;
					if (v42 < 112) {
						// 0x51e48
						v27 = v42;
						v28 = v23;
						v29 = v43;
						// branch -> 0x51e08
						continue;
					} else {
						int32_t v44 = v22 + 1; // 0x51e58
						v22 = v44;
						int32_t v45 = v23 + 32; // 0x51e5c
						v23 = v45;
						if (v44 < 112) {
							// 0x51e58
							v24 = v45;
							v25 = v21;
							// branch -> 0x51e00
							break;
						} else {
							int32_t v46 = function_4d794(*(int32_t *)g27) % 0x10000; // 0x51e70
							int32_t v47 = v7 + 4;                                    // r21
							*(int32_t *)v5 = v46;
							int32_t v48 = 1; // r20
							int32_t v49;     // r11
							int32_t v50;     // r12
							int32_t v51;     // r25
							int32_t v52;
							int32_t v53;
							int32_t v54; // 0x51ec0
							int32_t v55; // 0x51ee0
							int32_t v56; // 0x51fd843
							int32_t v57; // 0x51fe8
							int32_t v58; // 0x5200c
							int32_t v59; // 0x5202c
							int32_t v60; // 0x52038
							int32_t v61; // 0x5205c
							int32_t v62; // 0x522b4
							int32_t v63; // 0x522c8
							int32_t v64; // 0x5233c125
							int32_t v65; // 0x52374129
							int32_t v66; // 0x52374130
							int32_t v67; // 0x52374133
							int32_t v68; // 0x52010
							int32_t v69; // 0x52014
							int32_t v70; // 0x5203c
							int32_t v71; // 0x52040
							int32_t v72; // 0x5205c
							int32_t v73; // 0x5228c24
							int32_t v74; // 0x522b0
							int32_t v75; // 0x5232c9114
							int32_t v76; // 0x5232c9115
							int32_t v77; // 0x5235c
							int32_t v78; // 0x51ff4
							int32_t v79; // 0x5201c
							int32_t v80; // 0x52050
							int32_t v81; // 0x5209c
							int32_t v82; // 0x52084
							if (*(int32_t *)v5 > 1) {
								int32_t v83 = function_4d7a8(*(int32_t *)g27, 1); // 0x51e8c
								v48++;
								*(int32_t *)v47 = v83 % 0x10000;
								v47 += 4;
								while (v48 < *(int32_t *)v5) {
									// 0x51e84
									v83 = function_4d7a8(*(int32_t *)g27, v48);
									v48++;
									*(int32_t *)v47 = v83 % 0x10000;
									v47 += 4;
									// continue -> 0x51e84
								}
								// 0x51eac
								v48 = 0;
								*(int32_t *)v7 = 0;
								if (*(char *)v11 == 4) {
									// 0x51ec0
									v54 = g32;
									g28 = v54;
									v51 = g35;
									v11 = v7;
									v56 = v48;
									if (v56 < *(int32_t *)v5) {
										int32_t v84 = v54; // 0x51ee073
										int32_t v85 = v56; // 0x51ed0
										while (true) {
											// 0x51ed0
											v55 = v84;
											if (v85 == 0) {
											lab_0x51ed8:
												// 0x51ed8
												*(int32_t *)g32 = 0;
												v55 = g28;
												// branch -> 0x51ee0
											}
										lab_0x51ee0:
											// 0x51ee0
											g36 = 1;
											int32_t v86; // 0x51fc4
											int32_t v87; // 0x51fd0
											if (*(int32_t *)v55 != 0) {
												// 0x51ef0
												if (*(int16_t *)v51 == 0x1000) {
													int32_t v88 = function_4d79c(*(int32_t *)g27, v48); // 0x51f50
													int32_t v89 = 32;                                   // 0x51fac
													int32_t v90 = *(int32_t *)g27 + v88;                // 0x51f6477
													// branch -> 0x51f60
													while (true) {
														int32_t v91 = 32;  // 0x51fa0
														int32_t v92 = v90; // 0x51f64
														// branch -> 0x51f64
														int32_t v93; // 0x51f6476
														while (true) {
															char v94 = *(char *)v92; // 0x51f64
															int32_t v95 = v92 + 1;   // 0x51f68
															int32_t v96 = v94;       // 0x51f6c
															int32_t v97;             // 0x51fa4
															if (v94 < 0) {
																// 0x51fa0
																v93 = v95;
																v97 = v96 + v91;
																// branch -> 0x51fa4
															} else {
																int32_t v98 = v96; // 0x51f94
																int32_t v99 = v95; // 0x51f78
																// branch -> 0x51f78
																while (true) {
																	unsigned char v100 = *(char *)v99; // 0x51f78
																	int32_t v101 = v99 + 1;            // 0x51f7c
																	if (v100 != 0) {
																		// 0x51f88
																		if (v100 <= 31) {
																			// 0x51f90
																			g36 = 0;
																			// branch -> 0x51f94
																		}
																	}
																	int32_t v102 = v98 - 1; // 0x51f94
																	if (v102 == 0) {
																		// break -> 0x51fa4
																		break;
																	}
																	v98 = v102;
																	v99 = v101;
																	// continue -> 0x51f78
																}
																// 0x51fa4
																v93 = v95 + v96;
																v97 = v91 - v96;
																// branch -> 0x51fa4
															}
															// 0x51fa4
															if (v97 == 0) {
																// break -> 0x51fac
																break;
															}
															v91 = v97;
															v92 = v93;
															// continue -> 0x51f64
														}
														int32_t v103 = v89 - 1; // 0x51fac
														if (v103 == 0) {
															// break -> 0x51fb4
															break;
														}
														v89 = v103;
														v90 = v93;
														// continue -> 0x51f60
													}
												lab_0x51fb4:
													// 0x51fb4
													if (g36 == 0) {
													lab_0x51fbc_2:
														// 0x51fbc
														*(int32_t *)g28 = 0;
														// branch -> 0x51fc4
													}
												lab_0x51fc4_2:
													// 0x51fc4
													v86 = g28 + 4;
													g28 = v86;
													v51 += 2;
													v11 += 4;
													v87 = v48 + 1;
													v48 = v87;
													if (v87 >= *(int32_t *)v5) {
														// break -> 0x51fe0
														break;
													}
													v84 = v86;
													v85 = v87;
													// continue -> 0x51ed0
													continue;
												} else {
													int32_t v104 = function_4d79c(*(int32_t *)g27, v48); // 0x51f08
													int32_t v105 = *(int32_t *)v11;                      // 0x51f10
													int32_t v106 = *(int32_t *)g27 + v104;               // 0x51f18
													if (v105 == 0) {
														goto lab_0x51fb4;
													}
													while (true) {
														unsigned char v107 = *(char *)v106; // 0x51f20
														int32_t v108 = v107;                // 0x51f20
														int32_t v109 = v106 + 1;            // 0x51f24
														if (v107 >= 1) {
															// 0x51f30
															if (v107 != 32 && 0x1000000 * v108 <= 0x20000000) {
																// 0x51f3c
																g36 = 0;
																// branch -> 0x51f40
															}
														}
														int32_t v110 = v105 - 1; // 0x51f40
														if (v110 == 0) {
															// break -> 0x51fb4
															break;
														}
														v105 = v110;
														v106 = v109;
														// continue -> 0x51f20
													}
													// 0x51fb4
													if (g36 == 0) {
														goto lab_0x51fbc_2;
													}
													goto lab_0x51fc4_2;
												}
												int32_t v111 = g36; // 0x51fb4
												if (v111 == 0) {
													goto lab_0x51fbc_2;
												}
												goto lab_0x51fc4_2;
											}
											// 0x51fc4
											v86 = g28 + 4;
											g28 = v86;
											v51 += 2;
											v11 += 4;
											v87 = v48 + 1;
											v48 = v87;
											if (v87 >= *(int32_t *)v5) {
												// break -> 0x51fe0
												break;
											}
											v84 = v86;
											v85 = v87;
											// continue -> 0x51ed0
										}
										// 0x51fe0
										function_51c4c(2047);
										v57 = g23;
										v78 = *(int32_t *)*(int32_t *)(v57 - 0x776c);
										v59 = v7;
										if (v78 == 0) {
											// 0x5202c
											if (&g5 == NULL) {
												v60 = v59;
												v70 = v60 + 4;
												v71 = 1;
												v80 = 14 * *(int32_t *)v60;
												while (v80 < (int32_t)&g5) {
													// 0x52038
													v60 = v70;
													v70 = v60 + 4;
													v71++;
													v80 += 14 * *(int32_t *)v60;
													// continue -> 0x52038
												}
												// 0x52054
												v67 = v70;
												v61 = v71;
												// branch -> 0x5205c
											} else {
												v67 = v59;
												v61 = 0;
											}
										} else {
											// 0x52000
											if (&g5 == NULL) {
												v58 = v59;
												v68 = v58 + 4;
												v69 = 1;
												v79 = 2 * *(int32_t *)v58;
												while (v79 < (int32_t)&g5) {
													// 0x5200c
													v58 = v68;
													v68 = v58 + 4;
													v69++;
													v79 += 2 * *(int32_t *)v58;
													// continue -> 0x5200c
												}
												// 0x52020
												v67 = v68;
												v61 = v69;
												// branch -> 0x5205c
											} else {
												v67 = v59;
												v61 = 0;
											}
										}
										// 0x5205c
										v72 = v61 - 1;
										g36 = v72;
										v73 = v72;
										if (v72 >= 129) {
											// 0x52068
											g36 = 128;
											v73 = 128;
											// branch -> 0x5206c
										}
										// 0x5206c
										v51 = 0;
										v48 = v78 == 0 ? 15 : 3;
										v82 = *(int32_t *)(v57 - 0x724c);
										v11 = v82;
										v5 = 0;
										if (v73 > 0) {
											int32_t v112 = v82; // 0x520a4
											v53 = g35;
											v52 = g33;
											int32_t v113; // 0x52284
											int32_t v114; // 0x5228c
											while (true) {
												// 0x52098
												v81 = *(int32_t *)v52;
												v47 = v81;
												*(int32_t *)v112 = v81;
												int32_t v115; // r26
												int32_t v116; // 0x521b0
												int32_t v117; // 0x5226c
												int32_t v118; // 0x52274
												if (*(int16_t *)v53 == 0x1000) {
												lab_0x521b0_2:
													// 0x521b0
													v116 = v11 + 4;
													g28 = 1;
													v115 = 256;
													if (v48 > 1) {
														int32_t v119 = v51; // 0x521c0
														// branch -> 0x521c0
														while (true) {
															// 0x521c0
															*(int32_t *)v116 = v119;
															int32_t v120 = function_4d79c(*(int32_t *)g27, v47); // 0x521cc
															v23 = 32;
															v9 = *(int32_t *)g27 + v120;
															int32_t v121 = v51 + *(int32_t *)v4; // 0x521e4
															v10 = v121;
															v8 = v115 + *(int32_t *)v3;
															// branch -> 0x521ec
														lab_0x521ec:
															while (true) {
																// 0x521ec
																v1 = 32;
																int32_t v122 = v121; // 0x521fc
																                     // branch -> 0x521f0
															lab_0x521f0:;
																int32_t v123; // 0x52244
																int32_t v124; // 0x521fc103
																while (true) {
																	int32_t v125 = v9;                  // 0x521f0
																	unsigned char v126 = *(char *)v125; // 0x521f0
																	v9 = v125 + 1;
																	*(char *)v122 = v126;
																	int32_t v127 = v10 + 1; // 0x52200
																	v10 = v127;
																	int32_t v128 = v126;                         // 0x52214
																	int32_t v129 = 0x1000000 * v128 / 0x1000000; // 0x52214
																	int32_t v130 = v1;                           // 0x52218
																	int32_t v131;                                // 0x5223c
																	if (v126 == 0 || v126 > 0) {
																		// 0x52214
																		v1 = v130 - v129;
																		int32_t v132 = v127; // 0x52230
																		// branch -> 0x5221c
																		while (true) {
																			int32_t v133 = v9;       // 0x5221c
																			int32_t v134 = v128 - 1; // 0x52220
																			v33 = v134;
																			v9 = v133 + 1;
																			unsigned char v135 = *(char *)(v8 + (int32_t) * (char *)v133); // 0x5222c
																			*(char *)v132 = v135;
																			int32_t v136 = v10 + 1; // 0x52234
																			v10 = v136;
																			if ((0x1000000 * v134 || 0xffffff) < 0x1ffffff) {
																				// 0x5223c
																				v124 = v136;
																				v131 = v1;
																				// branch -> 0x5223c
																			lab_0x5223c:
																				// 0x5223c
																				if (v131 == 0) {
																					// break (via goto) -> 0x52244
																					goto lab_0x52244;
																				}
																				v122 = v124;
																				// continue (via goto) -> 0x521f0
																				goto lab_0x521f0;
																			} else {
																				// 0x5221c
																				v132 = v136;
																				v128 = v33;
																				// branch -> 0x5221c
																				continue;
																			}
																		}
																		int32_t v137 = v23; // 0x52244
																		v123 = v137 - 1;
																		v23 = v123;
																		if (v123 == 0) {
																			// break (via goto) -> 0x5224c
																			goto lab_0x5224c;
																		}
																		v121 = v124;
																		// continue (via goto) -> 0x521ec
																		goto lab_0x521ec;
																	} else {
																		int32_t v138 = v130 + v129; // 0x5220c
																		v1 = v138;
																		v124 = v127;
																		v131 = v138;
																		// branch -> 0x5223c
																		goto lab_0x5223c;
																	}
																	// 0x5223c
																	if (v131 == 0) {
																		// break -> 0x52244
																		break;
																	}
																	v122 = v124;
																	// continue -> 0x521f0
																}
															lab_0x52244:
																// 0x52244
																v123 = v23 - 1;
																v23 = v123;
																if (v123 == 0) {
																	// break -> 0x5224c
																	break;
																}
																v121 = v124;
																// continue -> 0x521ec
															}
														lab_0x5224c:;
															int32_t v139 = v116 + 4; // 0x52250
															v115 += 256;
															int32_t v140 = g28 + 1; // 0x52258
															g28 = v140;
															int32_t v141 = v51 + *(int32_t *)v7; // 0x5225c
															v51 = v141;
															if (v140 >= v48) {
																// break -> 0x52268
																break;
															}
															v116 = v139;
															v119 = v141;
															// continue -> 0x521c0
														}
													lab_0x52268:
														// 0x52268
														v117 = v11 + 64;
														v11 = v117;
														v7 += 4;
														v118 = v5 + 1;
														v5 = v118;
														v113 = v53 + 2;
														v114 = g36;
														if (v118 >= v114) {
															// break -> 0x52294
															break;
														}
														v112 = v117;
														v53 = v113;
														v52 += 4;
														// continue -> 0x52098
														continue;
													}
												} else {
												lab_0x520b4_2:
													// 0x520b4
													g28 = *(int32_t *)v7;
													int32_t v142 = v11 + 4; // 0x520b8
													v115 = v142;
													int32_t v143 = 1; // r28
													v116 = 256;
													if (v48 <= 1) {
														goto lab_0x52268;
													}
													int32_t v144 = v51; // 0x520c8
													// branch -> 0x520c8
													while (true) {
														// 0x520c8
														*(int32_t *)v142 = v144;
														int32_t v145 = function_4d79c(*(int32_t *)g27, v47); // 0x520d4
														int32_t v146 = g28;                                  // 0x520dc
														v14 = v146;
														v9 = *(int32_t *)g27 + v145;
														v10 = v51 + *(int32_t *)v4;
														v8 = v116 + *(int32_t *)v3;
														int32_t v147; // 0x52198
														int32_t v148; // 0x521a0
														int32_t v149; // 0x52194
														if (v146 != 0) {
															int32_t v150 = __asm_rlwinm_(v146, 29, 3, 31); // 0x520f8
															v12 = v150;
															int32_t v151; // 0x52178
															int32_t v152;
															if (v150 == 0) {
																// 0x520f8
																v152 = v10;
																v151 = v14;
																// branch -> 0x52178
															lab_0x52178:;
																int32_t v153 = v9;                                             // 0x5217c
																unsigned char v154 = *(char *)(v8 + (int32_t) * (char *)v153); // 0x52184
																*(char *)v152 = v154;
																int32_t v155 = v10 + 1;  // 0x5218c
																int32_t v156 = v151 - 1; // 0x52190
																// branch -> 0x5217c
																while (v156 != 0) {
																	// 0x5217c
																	v153++;
																	v154 = *(char *)(v8 + (int32_t) * (char *)v153);
																	*(char *)v155 = v154;
																	v155++;
																	v156--;
																	// continue -> 0x5217c
																}
															lab_0x52194:
																// 0x52194
																v149 = g28 + v51;
																v51 = v149;
																v147 = v115 + 4;
																v115 = v147;
																v116 += 256;
																v148 = v143 + 1;
																v143 = v148;
																if (v148 >= v48) {
																	// break -> 0x52268
																	break;
																}
																v142 = v147;
																v144 = v149;
																// continue -> 0x520c8
																continue;
															} else {
																int32_t v157 = (int32_t) * (char *)v9; // 0x52104
																*(char *)v10 = *(char *)(v8 + v157);
																unsigned char v158 = *(char *)(v8 + (int32_t) * (char *)(v9 + 1)); // 0x52114
																*(char *)(v10 + 1) = v158;
																unsigned char v159 = *(char *)(v8 + (int32_t) * (char *)(v9 + 2)); // 0x52120
																*(char *)(v10 + 2) = v159;
																unsigned char v160 = *(char *)(v8 + (int32_t) * (char *)(v9 + 3)); // 0x5212c
																*(char *)(v10 + 3) = v160;
																unsigned char v161 = *(char *)(v8 + (int32_t) * (char *)(v9 + 4)); // 0x52138
																*(char *)(v10 + 4) = v161;
																unsigned char v162 = *(char *)(v8 + (int32_t) * (char *)(v9 + 5)); // 0x52144
																*(char *)(v10 + 5) = v162;
																unsigned char v163 = *(char *)(v8 + (int32_t) * (char *)(v9 + 6)); // 0x52150
																*(char *)(v10 + 6) = v163;
																int32_t v164 = v9; // 0x52158
																v9 = v164 + 8;
																unsigned char v165 = *(char *)(v8 + (int32_t) * (char *)(v164 + 7)); // 0x52160
																*(char *)(v10 + 7) = v165;
																int32_t v166 = v10 + 8; // 0x52168
																v10 = v166;
																int32_t v167 = v12 - 1; // 0x5216c
																// branch -> 0x52104
																while (v167 != 0) {
																	// 0x52104
																	v157 = (int32_t) * (char *)v9;
																	*(char *)v166 = *(char *)(v8 + v157);
																	v158 = *(char *)(v8 + (int32_t) * (char *)(v9 + 1));
																	*(char *)(v10 + 1) = v158;
																	v159 = *(char *)(v8 + (int32_t) * (char *)(v9 + 2));
																	*(char *)(v10 + 2) = v159;
																	v160 = *(char *)(v8 + (int32_t) * (char *)(v9 + 3));
																	*(char *)(v10 + 3) = v160;
																	v161 = *(char *)(v8 + (int32_t) * (char *)(v9 + 4));
																	*(char *)(v10 + 4) = v161;
																	v162 = *(char *)(v8 + (int32_t) * (char *)(v9 + 5));
																	*(char *)(v10 + 5) = v162;
																	v163 = *(char *)(v8 + (int32_t) * (char *)(v9 + 6));
																	*(char *)(v10 + 6) = v163;
																	v164 = v9;
																	v9 = v164 + 8;
																	v165 = *(char *)(v8 + (int32_t) * (char *)(v164 + 7));
																	*(char *)(v10 + 7) = v165;
																	v166 = v10 + 8;
																	v10 = v166;
																	v167--;
																	// continue -> 0x52104
																}
																int32_t v168 = v14 % 8; // 0x52170
																if (v168 == 0) {
																	goto lab_0x52194;
																}
																v152 = v166;
																v151 = v168;
																goto lab_0x52178;
															}
															int32_t v169 = v51; // 0x52194
															int32_t v170 = g28; // 0x52194
															v149 = v170 + v169;
															v51 = v149;
															int32_t v171 = v115; // 0x52198
															v147 = v171 + 4;
															v115 = v147;
															int32_t v172 = v116; // 0x5219c
															v116 = v172 + 256;
															int32_t v173 = v143; // 0x521a0
															v148 = v173 + 1;
															v143 = v148;
															int32_t v174 = v48; // 0x521a4
															if (v148 >= v174) {
																// break -> 0x52268
																break;
															}
															v142 = v147;
															v144 = v149;
															// continue -> 0x520c8
															continue;
														}
														// 0x52194
														v149 = g28 + v51;
														v51 = v149;
														v147 = v115 + 4;
														v115 = v147;
														v116 += 256;
														v148 = v143 + 1;
														v143 = v148;
														if (v148 >= v48) {
															// break -> 0x52268
															break;
														}
														v142 = v147;
														v144 = v149;
														// continue -> 0x520c8
													}
													// 0x52268
													v117 = v11 + 64;
													v11 = v117;
													v7 += 4;
													v118 = v5 + 1;
													v5 = v118;
													v113 = v53 + 2;
													v114 = g36;
													if (v118 >= v114) {
														// break -> 0x52294
														break;
													}
													v112 = v117;
													v53 = v113;
													v52 += 4;
													// continue -> 0x52098
													continue;
												}
												// 0x52268
												v117 = v11 + 64;
												v11 = v117;
												v7 += 4;
												v118 = v5 + 1;
												v5 = v118;
												v113 = v53 + 2;
												v114 = g36;
												if (v118 >= v114) {
													// break -> 0x52294
													break;
												}
												v112 = v117;
												v53 = v113;
												v52 += 4;
												// continue -> 0x52098
											}
											// 0x52294
											v4 = 0;
											v50 = 0;
											v49 = 0;
											// branch -> 0x522a0
											while (true) {
												// 0x522a0
												v33 = 0;
												v22 = 0;
												v10 = 0;
												v65 = v113;
												v64 = 0;
												v75 = v114;
												v63 = 0;
												v62 = 0;
												v74 = 0;
												// branch -> 0x522ac
											lab_0x522ac_3:;
												int32_t result; // 0x52374
												while (true) {
													// 0x522ac
													result = v65;
													int32_t v175 = v74; // 0x52348
													int32_t v176 = v63; // 0x52340
													int32_t v177 = v64; // 0x5233c
													int32_t v178 = v75; // 0x5232c9116
													if (*(int16_t *)(*(int32_t *)v2 + v74 + v62) != 0) {
														// 0x522c0
														v12 = v20;
														int32_t v179 = *(int32_t *)v6 + v63 + v49; // 0x522d0
														v9 = v179;
														if (v20 >= 1) {
															int32_t v180 = v75;  // 0x5232c9
															int32_t v181 = v179; // 0x522d8
															int32_t v182;        // 0x5232c9117
															int32_t v183;        // 0x52334
															while (true) {
																int32_t v184 = v20;  // 0x52338
																int32_t v185 = v181; // 0x52334
																v182 = v180;
																if (*(int16_t *)v181 != 0) {
																	// 0x52328
																	v26 = 0;
																	v1 = 0;
																	if (v180 > 0) {
																		int32_t v186 = v181; // 0x522f0
																		int32_t v187 = 0;    // 0x522f4
																		int32_t v188;
																		int32_t v189; // 0x5232c
																		while (true) {
																			// 0x522ec
																			v8 = v187 % 0x10000;
																			int32_t v190 = *(int32_t *)(g33 + __asm_rlwinm(v187, 2, 14, 29)); // 0x522f8
																			if ((int32_t) * (int16_t *)v186 % 0x1000 == v190) {
																				uint16_t v191 = *(int16_t *)(g35 + 2 * v8); // 0x5230c
																				v26 = g36 % 0x10000;
																				int32_t v192 = (int32_t)v191 + (int32_t) "MoveWindow" + v1; // 0x52318
																				*(int16_t *)v9 = (int16_t)(v192 - 0x8000);
																				// branch -> 0x52324
																			}
																			int32_t v193 = v26 + 1; // 0x52324
																			v26 = v193;
																			int32_t v194 = v193 % 0x10000; // 0x52328
																			v1 = v194;
																			v189 = g36;
																			v188 = v9;
																			if (v194 >= v189) {
																				// break -> 0x52328
																				break;
																			}
																			v186 = v188;
																			v187 = v193;
																			// continue -> 0x522ec
																		}
																		// 0x52328
																		v184 = v12;
																		v185 = v188;
																		v182 = v189;
																		// branch -> 0x52334
																	} else {
																		v184 = v20;
																		v185 = v181;
																		v182 = v180;
																	}
																}
																// 0x52334
																v183 = v185 + 2;
																v9 = v183;
																int32_t v195 = v184 - 1; // 0x52338
																v12 = v195;
																if (v195 == 0) {
																	// break -> 0x5233c
																	break;
																}
																v20 = v195;
																v180 = v182;
																v181 = v183;
																// continue -> 0x522d8
															}
															// 0x5233c
															result = v183;
															v175 = v22;
															v176 = v10;
															v177 = v33;
															v178 = v182;
															// branch -> 0x5233c
														} else {
															result = v179;
															v175 = v74;
															v176 = v63;
															v177 = v64;
															v178 = v75;
														}
													}
													int32_t v196 = v177 + 1; // 0x5233c
													v33 = v196;
													int32_t v197 = v176 + 3584; // 0x52340
													v10 = v197;
													int32_t v198 = v175 + 224; // 0x52348
													v22 = v198;
													if (v196 < 112) {
														// 0x5233c
														v65 = result;
														v64 = v196;
														v75 = v178;
														v63 = v197;
														v62 = v50;
														v74 = v198;
														// branch -> 0x522ac
														continue;
													} else {
														int32_t v199 = v4 + 1; // 0x52350
														v4 = v199;
														v49 += 32;
														v77 = v50 + 2;
														v50 = v77;
														if (v199 >= 112) {
															// break (via goto) -> 0x52364
															goto lab_0x52364;
														}
														v66 = result;
														v76 = v178;
														// continue (via goto) -> 0x522a0
														goto lab_0x522a0;
													}
												}
											lab_0x52364:
												// 0x52364
												return result;
											}
										}
										// 0x52294
										v4 = 0;
										v50 = 0;
										v49 = 0;
										// branch -> 0x522a0
										while (true) {
											// 0x522a0
											v33 = 0;
											v22 = 0;
											v10 = 0;
											v65 = v67;
											v64 = 0;
											v75 = v73;
											v63 = 0;
											v62 = 0;
											v74 = 0;
											// branch -> 0x522ac
											goto lab_0x522ac_3;
										}
									}
								}
								// 0x51fe0
								function_51c4c(2047);
								v57 = g23;
								v78 = *(int32_t *)*(int32_t *)(v57 - 0x776c);
								v59 = v7;
								if (v78 == 0) {
									// 0x5202c
									if (&g5 == NULL) {
										v60 = v59;
										v70 = v60 + 4;
										v71 = 1;
										v80 = 14 * *(int32_t *)v60;
										while (v80 < (int32_t)&g5) {
											// 0x52038
											v60 = v70;
											v70 = v60 + 4;
											v71++;
											v80 += 14 * *(int32_t *)v60;
											// continue -> 0x52038
										}
										// 0x52054
										v67 = v70;
										v61 = v71;
										// branch -> 0x5205c
									} else {
										v67 = v59;
										v61 = 0;
									}
								} else {
									// 0x52000
									if (&g5 == NULL) {
										v58 = v59;
										v68 = v58 + 4;
										v69 = 1;
										v79 = 2 * *(int32_t *)v58;
										while (v79 < (int32_t)&g5) {
											// 0x5200c
											v58 = v68;
											v68 = v58 + 4;
											v69++;
											v79 += 2 * *(int32_t *)v58;
											// continue -> 0x5200c
										}
										// 0x52020
										v67 = v68;
										v61 = v69;
										// branch -> 0x5205c
									} else {
										v67 = v59;
										v61 = 0;
									}
								}
								// 0x5205c
								v72 = v61 - 1;
								g36 = v72;
								v73 = v72;
								if (v72 >= 129) {
									// 0x52068
									g36 = 128;
									v73 = 128;
									// branch -> 0x5206c
								}
								// 0x5206c
								v51 = 0;
								v48 = v78 == 0 ? 15 : 3;
								v82 = *(int32_t *)(v57 - 0x724c);
								v11 = v82;
								v5 = 0;
								if (v73 > 0) {
									v53 = g35;
									v52 = g33;
									while (true) {
										// 0x52098
										v81 = *(int32_t *)v52;
										v47 = v81;
										*(int32_t *)v82 = v81;
										if (*(int16_t *)v53 == 0x1000) {
											goto lab_0x521b0_2;
										}
										goto lab_0x520b4_2;
									}
								}
								// 0x52294
								v4 = 0;
								v50 = 0;
								v49 = 0;
								// branch -> 0x522a0
								while (true) {
									// 0x522a0
									v33 = 0;
									v22 = 0;
									v10 = 0;
									v65 = v67;
									v64 = 0;
									v75 = v73;
									v63 = 0;
									v62 = 0;
									v74 = 0;
									// branch -> 0x522ac
									goto lab_0x522ac_3;
								}
							}
							// 0x51eac
							v48 = 0;
							*(int32_t *)v7 = 0;
							if (*(char *)v11 == 4) {
								// 0x51ec0
								v54 = g32;
								g28 = v54;
								v51 = g35;
								v11 = v7;
								v56 = v48;
								if (v56 < *(int32_t *)v5) {
									while (true) {
										// 0x51ed0
										if (v56 == 0) {
											goto lab_0x51ed8;
										}
										v55 = v54;
										goto lab_0x51ee0;
									}
								}
							}
							// 0x51fe0
							function_51c4c(2047);
							v57 = g23;
							v78 = *(int32_t *)*(int32_t *)(v57 - 0x776c);
							v59 = v7;
							if (v78 == 0) {
								// 0x5202c
								if (&g5 == NULL) {
									v60 = v59;
									v70 = v60 + 4;
									v71 = 1;
									v80 = 14 * *(int32_t *)v60;
									while (v80 < (int32_t)&g5) {
										// 0x52038
										v60 = v70;
										v70 = v60 + 4;
										v71++;
										v80 += 14 * *(int32_t *)v60;
										// continue -> 0x52038
									}
									// 0x52054
									v67 = v70;
									v61 = v71;
									// branch -> 0x5205c
								} else {
									v67 = v59;
									v61 = 0;
								}
							} else {
								// 0x52000
								if (&g5 == NULL) {
									v58 = v59;
									v68 = v58 + 4;
									v69 = 1;
									v79 = 2 * *(int32_t *)v58;
									while (v79 < (int32_t)&g5) {
										// 0x5200c
										v58 = v68;
										v68 = v58 + 4;
										v69++;
										v79 += 2 * *(int32_t *)v58;
										// continue -> 0x5200c
									}
									// 0x52020
									v67 = v68;
									v61 = v69;
									// branch -> 0x5205c
								} else {
									v67 = v59;
									v61 = 0;
								}
							}
							// 0x5205c
							v72 = v61 - 1;
							g36 = v72;
							v73 = v72;
							if (v72 >= 129) {
								// 0x52068
								g36 = 128;
								v73 = 128;
								// branch -> 0x5206c
							}
							// 0x5206c
							v51 = 0;
							v48 = v78 == 0 ? 15 : 3;
							v82 = *(int32_t *)(v57 - 0x724c);
							v11 = v82;
							v5 = 0;
							if (v73 > 0) {
								v53 = g35;
								v52 = g33;
								while (true) {
									// 0x52098
									v81 = *(int32_t *)v52;
									v47 = v81;
									*(int32_t *)v82 = v81;
									if (*(int16_t *)v53 == 0x1000) {
										goto lab_0x521b0_2;
									}
									goto lab_0x520b4_2;
								}
							}
							// 0x52294
							v4 = 0;
							v50 = 0;
							v49 = 0;
							v66 = v67;
							v76 = v73;
							v77 = 0;
							// branch -> 0x522a0
						lab_0x522a0:
							while (true) {
								// 0x522a0
								v33 = 0;
								v22 = 0;
								v10 = 0;
								v65 = v66;
								v64 = 0;
								v75 = v76;
								v63 = 0;
								v62 = v77;
								v74 = 0;
								// branch -> 0x522ac
								goto lab_0x522ac_3;
							}
						}
					}
				}
			}
		} else {
			// 0x51d48
			v13 = v1;
			// branch -> 0x51d48
			continue;
		}
	}
}

// Address range: 0x52378 - 0x523d4
int32_t function_52378(void)
{
	int32_t v1 = g37; // 0x52378
	int32_t v2 = g34; // 0x5237c
	if (v2 < 112 - v1) {
		int32_t v3 = v2 + v1;                // 0x52384
		uint32_t v4 = 3 * v2 + v1 + v3 * v3; // 0x52394
		return v4 / 2 | v4 & -0x80000000;
	}
	int32_t v5 = 111 - v2;               // 0x523a4
	int32_t v6 = 111 - v1;               // 0x523a8
	int32_t v7 = v5 + v6;                // 0x523ac
	uint32_t v8 = 3 * v5 + v6 + v7 * v7; // 0x523bc
	return 0x30ff - (v8 / 2 | v8 & -0x80000000);
}

// Address range: 0x523d4 - 0x52494
int32_t function_523d4(int32_t a1)
{
	// 0x523d4
	g31 = 0;
	g32 = 0;
	int32_t v1 = 0; // 0x524002
	                // branch -> 0x523f4
lab_0x523f4:
	while (true) {
		// 0x523f4
		g30 = 0;
		g33 = 0;
		int32_t v2 = 0;  // 0x52408
		int32_t v3 = 0;  // 0x52404
		int32_t v4 = v1; // 0x52400
		// branch -> 0x523fc
		int32_t result; // r3
		while (true) {
			// 0x523fc
			g34 = v4;
			g37 = v3;
			g29 = *(int32_t *)*(int32_t *)(g23 - 0x7580) + v2;
			int32_t v5 = function_52378();                                 // 0x5240c
			int32_t v6 = g29 + g32;                                        // 0x52410
			int32_t v7 = v6;                                               // r4
			int32_t v8 = *(int32_t *)*(int32_t *)(g23 - 0x7584) + 32 * v5; // 0x52424
			int32_t v9 = v8;                                               // r5
			g30++;
			g33 += 32;
			*(int32_t *)v8 = *(int32_t *)v6;
			*(int32_t *)(v9 + 4) = *(int32_t *)(v6 + 4);
			*(int32_t *)(v9 + 8) = *(int32_t *)(v7 + 8);
			*(int32_t *)(v9 + 12) = *(int32_t *)(v7 + 12);
			*(int32_t *)(v9 + 16) = *(int32_t *)(v7 + 16);
			*(int32_t *)(v9 + 20) = *(int32_t *)(v7 + 20);
			int32_t v10 = *(int32_t *)(v7 + 24); // 0x5245c
			result = v10;
			*(int32_t *)(v9 + 24) = v10;
			*(int32_t *)(v9 + 28) = *(int32_t *)(v7 + 28);
			int32_t v11 = g31;
			if (g30 < 112) {
				// 0x523fc
				v2 = g33;
				v3 = g30;
				v4 = v11;
				// branch -> 0x523fc
				continue;
			} else {
				int32_t v12 = v11 + 1; // 0x52470
				g31 = v12;
				g32 += 3584;
				if (v12 >= 112) {
					// break (via goto) -> 0x52480
					goto lab_0x52480;
				}
				v1 = v12;
				// continue (via goto) -> 0x523f4
				goto lab_0x523f4;
			}
		}
	lab_0x52480:
		// 0x52480
		return result;
	}
}

// Address range: 0x52494 - 0x5289c
int32_t function_52494(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7794); // 0x5249c
	g35 = v1;
	g28 = *(int32_t *)(g23 - 0x7260);
	g31 = *(int32_t *)(g23 - 0x7570);
	int32_t v2 = *(int32_t *)(g23 - 0x7250); // 0x524b4
	g32 = *(int32_t *)(g23 - 0x757c);
	g33 = *(int32_t *)(g23 - 0x7580);
	int32_t v3;
	if (*(char *)v1 == 4) {
		// 0x524e4
		*(int32_t *)v2 = 12;
		v3 = 16;
		// branch -> 0x524f0
	} else {
		// 0x524d4
		*(int32_t *)v2 = 10;
		v3 = 10;
		// branch -> 0x524f0
	}
	// 0x524f0
	g36 = v3;
	if (*(int32_t *)g33 == 0) {
		// 0x524fc
		g34 = (int32_t) "; " + 0x2000;
		int32_t v4 = DiabloAllocPtr(); // 0x52504
		*(int32_t *)g33 = v4;
		int32_t v5 = g33; // 0x5250c
		int32_t v6 = v5;  // 0x52528
		if (*(int32_t *)v5 == 0) {
			// 0x52518
			g34 = 0;
			function_ebc08(0);
			v6 = g33;
			// branch -> 0x52524
		}
		// 0x52524
		g34 = *(int32_t *)v6;
		function_e9dd8();
		// branch -> 0x52538
	}
	// 0x52538
	g34 = *(int32_t *)g31;
	int32_t result = function_c9948(); // r3
	int32_t v7 = 0;                    // r8
	int32_t v8 = g36;                  // 0x52544
	int32_t v9 = v8 - 2;               // r0
	int32_t v10 = 0;                   // r9
	int32_t v11 = v8 - 8;              // r4
	int32_t v12 = 0;                   // r12
	int32_t v13 = 0;                   // 0x525708
	int32_t v14 = 0;                   // 0x525645
	                                   // branch -> 0x52554
lab_0x52554:
	while (true) {
		int32_t v15 = 0; // r6
		int32_t v16 = 0; // r7
		int32_t v17 = 0; // r11
		// branch -> 0x52560
		while (true) {
			int16_t v18 = *(int16_t *)(*(int32_t *)g32 + v13); // 0x52570
			int32_t v19 = v18;                                 // 0x52570
			int32_t v20 = *(int32_t *)g33 + v14;               // 0x52574
			int32_t v21 = v20;                                 // r22
			int32_t v22;                                       // 0x527c8
			int32_t v23;                                       // 0x527cc
			int32_t v24;                                       // 0x527d4
			int32_t v25;                                       // 0x527c8
			int32_t v26;                                       // 0x527cc
			int32_t v27;                                       // 0x527d4
			if (v18 == 0) {
			lab_0x5272c:;
				int32_t v28 = g36; // 0x5272c
				int32_t v29 = 0;   // r10
				if (v28 >= 1) {
					int32_t v30 = v28; // 0x527a8
					int32_t v31 = v20; // 0x52880
					int32_t v32 = 0;   // 0x5287c
					int32_t v33;       // 0x52880
					if (v28 >= 9) {
						int32_t v34 = (v11 + 7) / 8; // ctr
						int32_t v35 = v20;           // r5
						if (v11 >= 1) {
							int32_t v36 = v20; // 0x52778
							int16_t v37 = 0;
							while (true) {
								// 0x52778
								*(int16_t *)v36 = v37;
								v29 += 8;
								*(int16_t *)(v35 + 2) = (int16_t)0;
								*(int16_t *)(v35 + 4) = (int16_t)0;
								*(int16_t *)(v35 + 6) = (int16_t)0;
								*(int16_t *)(v35 + 8) = (int16_t)0;
								*(int16_t *)(v35 + 10) = (int16_t)0;
								*(int16_t *)(v35 + 12) = (int16_t)0;
								*(int16_t *)(v35 + 14) = (int16_t)0;
								int32_t v38 = v35 + 16; // 0x5279c
								v35 = v38;
								int32_t v39 = v34 - 1; // 0x527a0
								v34 = v39;
								if (v39 == 0) {
									// 0x5287c
									v30 = g36;
									v31 = v21;
									v32 = v29;
									// branch -> 0x5287c
									// 0x5287c
									v33 = 2 * v32 + v31;
									if (v30 > v32) {
									lab_0x527bc:
										// 0x527bc
										*(int16_t *)v33 = 0;
										int32_t v40 = v33 + 2;       // 0x527c049
										int32_t v41 = v30 - v32 - 1; // 0x527c451
										v34 = v41;
										if (v41 != 0) {
											*(int16_t *)v40 = (int16_t)0;
											int32_t v42 = v34 - 1; // 0x527c4
											while (v42 != 0) {
												// 0x527bc
												v40 += 2;
												*(int16_t *)v40 = (int16_t)0;
												v42--;
												// continue -> 0x527bc
											}
										lab_0x527c8:
											// 0x527c8
											v25 = v17 + 1;
											v17 = v25;
											v16 += 3584;
											v15 += 224;
											if (v25 < 112) {
											lab_0x527c8_8:
												// 0x527c8
												// branch -> 0x52560
												break;
											} else {
											lab_0x527dc_5:;
												int32_t v43 = v12 + 1; // 0x527dc
												v12 = v43;
												int32_t v44 = v10 + 32; // 0x527e0
												v10 = v44;
												int32_t v45 = v7 + 2; // 0x527e8
												v7 = v45;
												if (v43 >= 112) {
													// break (via goto) -> 0x527f0
													goto lab_0x527f0;
												}
												v13 = v45;
												v14 = v44;
												// continue (via goto) -> 0x52554
												goto lab_0x52554;
											}
											while (true) {
												int32_t v46 = g32;             // 0x52560
												int32_t v47 = *(int32_t *)v46; // 0x52560
												v29 = v47;
												int32_t v48;             // 0x52564
												int32_t v49;             // 0x52564
												int32_t v50 = v48 + v49; // 0x52564
												v21 = v50;
												int32_t v51 = g33;             // 0x52568
												int32_t v52 = *(int32_t *)v51; // 0x52568
												v35 = v52;
												int32_t v53;             // 0x5256c
												int32_t v54 = v47 + v53; // 0x5256c
												v29 = v54;
												int32_t v55; // 0x52570
												v18 = *(int16_t *)(v54 + v55);
												v19 = v18;
												v29 = v19;
												v20 = v52 + v50;
												v21 = v20;
												if (v18 == 0) {
													goto lab_0x5272c;
												}
												int32_t v56 = g35;                // 0x52580
												unsigned char v57 = *(char *)v56; // 0x52580
												v35 = v57;
												int32_t v58;
												if (v57 == 4) {
												lab_0x5259c:
													// 0x5259c
													v58 = result + 32 * v19 - 32;
													// branch -> 0x525a8
												} else {
												lab_0x5258c:
													// 0x5258c
													v58 = result + 20 * v19 - 20;
													// branch -> 0x525a8
												}
												// 0x525a8
												v29 = v58;
												int32_t v59 = g36; // 0x525a8
												v35 = v20;
												int32_t v60 = v59; // r20
												v21 = 0;
												if (v59 < 1) {
													goto lab_0x527c8;
												}
												int32_t v61 = __asm_rlwinm_(v59, 29, 3, 31); // 0x525bc
												v34 = v61;
												int32_t v62; // 0x526f8
												if (v61 == 0) {
													// 0x525bc
													v62 = v60;
													// branch -> 0x526f8
												lab_0x526f8:;
													uint32_t v63 = v21;                                              // 0x526fc
													int32_t v64 = 2 * (v63 % 2 - __asm_rlwinm(v63, 0, 28, 30) + v9); // 0x5270c
													int32_t v65 = v64 + v29;                                         // 0x52710
													unsigned char v66 = *(char *)(v65 + 1);                          // 0x52710
													int16_t v67 = 256 * (int16_t)v66 | (int16_t) * (char *)v65;      // 0x52710
													*(int16_t *)v35 = v67;
													v35 += 2;
													int32_t v68 = v62 - 1; // 0x52724
													// branch -> 0x526fc
													while (v68 != 0) {
														// 0x526fc
														v63++;
														v64 = 2 * (v63 % 2 - __asm_rlwinm(v63, 0, 28, 30) + v9);
														v65 = v64 + v29;
														v66 = *(char *)(v65 + 1);
														v67 = 256 * (int16_t)v66 | (int16_t) * (char *)v65;
														*(int16_t *)v35 = v67;
														v35 += 2;
														v68--;
														// continue -> 0x526fc
													}
												lab_0x527c8_3:
													// 0x527c8
													v25 = v17 + 1;
													v17 = v25;
													v16 += 3584;
													v15 += 224;
													if (v25 < 112) {
														goto lab_0x527c8_8;
													}
													goto lab_0x527dc_5;
												} else {
													uint32_t v69 = v21;                                              // 0x525c8
													int32_t v70 = 2 * (v69 % 2 - __asm_rlwinm(v69, 0, 28, 30) + v9); // 0x525d8
													int32_t v71 = v70 + v29;                                         // 0x525dc
													unsigned char v72 = *(char *)v71;                                // 0x525dc
													unsigned char v73 = *(char *)(v71 + 1);                          // 0x525dc
													int32_t v74 = v69 + 1;                                           // 0x525e0
													v40 = __asm_rlwinm(v74, 0, 28, 30);
													int32_t v75 = 256 * (int16_t)v73 | (int16_t)v72; // 0x525e8
													*(int16_t *)v35 = (int16_t)v75;
													int32_t v76 = 2 * (v74 % 2 - v40 + v9) + v29; // 0x52600
													unsigned char v77 = *(char *)v76;             // 0x52600
													unsigned char v78 = *(char *)(v76 + 1);       // 0x52600
													int32_t v79 = v69 + 2;                        // 0x52604
													v40 = __asm_rlwinm(v79, 0, 28, 30);
													int32_t v80 = 256 * (int16_t)v78 | (int16_t)v77; // 0x5260c
													*(int16_t *)(v35 + 2) = (int16_t)v80;
													int32_t v81 = 2 * (v79 % 2 - v40 + v9) + v29; // 0x52624
													unsigned char v82 = *(char *)v81;             // 0x52624
													unsigned char v83 = *(char *)(v81 + 1);       // 0x52624
													int32_t v84 = v69 + 3;                        // 0x52628
													v40 = __asm_rlwinm(v84, 0, 28, 30);
													int32_t v85 = 256 * (int16_t)v83 | (int16_t)v82; // 0x52630
													*(int16_t *)(v35 + 4) = (int16_t)v85;
													int32_t v86 = 2 * (v84 % 2 - v40 + v9) + v29; // 0x52648
													unsigned char v87 = *(char *)v86;             // 0x52648
													unsigned char v88 = *(char *)(v86 + 1);       // 0x52648
													int32_t v89 = v69 + 4;                        // 0x5264c
													v40 = __asm_rlwinm(v89, 0, 28, 30);
													int32_t v90 = 256 * (int16_t)v88 | (int16_t)v87; // 0x52654
													*(int16_t *)(v35 + 6) = (int16_t)v90;
													int32_t v91 = 2 * (v89 % 2 - v40 + v9) + v29; // 0x5266c
													unsigned char v92 = *(char *)v91;             // 0x5266c
													unsigned char v93 = *(char *)(v91 + 1);       // 0x5266c
													int32_t v94 = v69 + 5;                        // 0x52670
													v40 = __asm_rlwinm(v94, 0, 28, 30);
													int32_t v95 = 256 * (int16_t)v93 | (int16_t)v92; // 0x52678
													*(int16_t *)(v35 + 8) = (int16_t)v95;
													int32_t v96 = 2 * (v94 % 2 - v40 + v9) + v29; // 0x52690
													unsigned char v97 = *(char *)v96;             // 0x52690
													unsigned char v98 = *(char *)(v96 + 1);       // 0x52690
													int32_t v99 = v69 + 6;                        // 0x52694
													v40 = __asm_rlwinm(v99, 0, 28, 30);
													int32_t v100 = 256 * (int16_t)v98 | (int16_t)v97; // 0x5269c
													*(int16_t *)(v35 + 10) = (int16_t)v100;
													int32_t v101 = 2 * (v99 % 2 - v40 + v9) + v29; // 0x526b4
													unsigned char v102 = *(char *)v101;            // 0x526b4
													unsigned char v103 = *(char *)(v101 + 1);      // 0x526b4
													int32_t v104 = v69 + 7;                        // 0x526b8
													v40 = __asm_rlwinm(v104, 0, 28, 30);
													int32_t v105 = 256 * (int16_t)v103 | (int16_t)v102; // 0x526c0
													*(int16_t *)(v35 + 12) = (int16_t)v105;
													int32_t v106 = 2 * (v104 % 2 - v40 + v9) + v29;                // 0x526d8
													unsigned char v107 = *(char *)(v106 + 1);                      // 0x526d8
													int16_t v108 = 256 * (int16_t)v107 | (int16_t) * (char *)v106; // 0x526d8
													v21 = v69 + 8;
													*(int16_t *)(v35 + 14) = v108;
													v35 += 16;
													int32_t v109 = v34 - 1; // 0x526ec
													while (v109 != 0) {
														// 0x525c8
														v69 = v21;
														v70 = 2 * (v69 % 2 - __asm_rlwinm(v69, 0, 28, 30) + v9);
														v71 = v70 + v29;
														v72 = *(char *)v71;
														v73 = *(char *)(v71 + 1);
														v74 = v69 + 1;
														v40 = __asm_rlwinm(v74, 0, 28, 30);
														v75 = 256 * (int16_t)v73 | (int16_t)v72;
														*(int16_t *)v35 = (int16_t)v75;
														v76 = 2 * (v74 % 2 - v40 + v9) + v29;
														v77 = *(char *)v76;
														v78 = *(char *)(v76 + 1);
														v79 = v69 + 2;
														v40 = __asm_rlwinm(v79, 0, 28, 30);
														v80 = 256 * (int16_t)v78 | (int16_t)v77;
														*(int16_t *)(v35 + 2) = (int16_t)v80;
														v81 = 2 * (v79 % 2 - v40 + v9) + v29;
														v82 = *(char *)v81;
														v83 = *(char *)(v81 + 1);
														v84 = v69 + 3;
														v40 = __asm_rlwinm(v84, 0, 28, 30);
														v85 = 256 * (int16_t)v83 | (int16_t)v82;
														*(int16_t *)(v35 + 4) = (int16_t)v85;
														v86 = 2 * (v84 % 2 - v40 + v9) + v29;
														v87 = *(char *)v86;
														v88 = *(char *)(v86 + 1);
														v89 = v69 + 4;
														v40 = __asm_rlwinm(v89, 0, 28, 30);
														v90 = 256 * (int16_t)v88 | (int16_t)v87;
														*(int16_t *)(v35 + 6) = (int16_t)v90;
														v91 = 2 * (v89 % 2 - v40 + v9) + v29;
														v92 = *(char *)v91;
														v93 = *(char *)(v91 + 1);
														v94 = v69 + 5;
														v40 = __asm_rlwinm(v94, 0, 28, 30);
														v95 = 256 * (int16_t)v93 | (int16_t)v92;
														*(int16_t *)(v35 + 8) = (int16_t)v95;
														v96 = 2 * (v94 % 2 - v40 + v9) + v29;
														v97 = *(char *)v96;
														v98 = *(char *)(v96 + 1);
														v99 = v69 + 6;
														v40 = __asm_rlwinm(v99, 0, 28, 30);
														v100 = 256 * (int16_t)v98 | (int16_t)v97;
														*(int16_t *)(v35 + 10) = (int16_t)v100;
														v101 = 2 * (v99 % 2 - v40 + v9) + v29;
														v102 = *(char *)v101;
														v103 = *(char *)(v101 + 1);
														v104 = v69 + 7;
														v40 = __asm_rlwinm(v104, 0, 28, 30);
														v105 = 256 * (int16_t)v103 | (int16_t)v102;
														*(int16_t *)(v35 + 12) = (int16_t)v105;
														v106 = 2 * (v104 % 2 - v40 + v9) + v29;
														v107 = *(char *)(v106 + 1);
														v108 = 256 * (int16_t)v107 | (int16_t) * (char *)v106;
														v21 = v69 + 8;
														*(int16_t *)(v35 + 14) = v108;
														v35 += 16;
														v109--;
														// continue -> 0x525c8
													}
													int32_t v110 = v60 % 8; // 0x526f0
													if (v110 == 0) {
														goto lab_0x527c8_3;
													}
													v62 = v110;
													goto lab_0x526f8;
												}
												// 0x527c8
												v22 = v17;
												v25 = v22 + 1;
												v17 = v25;
												v23 = v16;
												v26 = v23 + 3584;
												v16 = v26;
												v24 = v15;
												v27 = v24 + 224;
												v15 = v27;
												if (v25 < 112) {
													goto lab_0x527c8_8;
												}
												goto lab_0x527dc_5;
											}
										}
									}
								lab_0x527c8_6:
									// 0x527c8
									v25 = v17 + 1;
									v17 = v25;
									v16 += 3584;
									v15 += 224;
									if (v25 < 112) {
										goto lab_0x527c8_8;
									}
									goto lab_0x527dc_5;
								} else {
									// 0x52778
									v36 = v38;
									v37 = 0;
									// branch -> 0x52778
									continue;
								}
							}
						} else {
							v30 = v28;
							v31 = v20;
							v32 = 0;
						}
					}
					// 0x5287c
					v33 = 2 * v32 + v31;
					if (v30 > v32) {
						goto lab_0x527bc;
					}
					goto lab_0x527c8_6;
				}
				// 0x527c8
				v25 = v17 + 1;
				v17 = v25;
				v16 += 3584;
				v15 += 224;
				if (v25 < 112) {
					goto lab_0x527c8_8;
				}
				goto lab_0x527dc_5;
			} else {
				// 0x52580
				if (*(char *)g35 == 4) {
					goto lab_0x5259c;
				}
				goto lab_0x5258c;
			}
			// 0x527c8
			v22 = v17;
			v25 = v22 + 1;
			v17 = v25;
			v23 = v16;
			v26 = v23 + 3584;
			v16 = v26;
			v24 = v15;
			v27 = v24 + 224;
			v15 = v27;
			if (v25 < 112) {
				goto lab_0x527c8_8;
			}
			goto lab_0x527dc_5;
		}
	}
lab_0x527f0:;
	int32_t v111 = function_c9acc(*(int32_t *)g31); // 0x527f4
	function_523d4(function_51cec(v111));
	if (*(int32_t *)(g23 + 0x2854) != 0) {
		int32_t *v112 = (int32_t *)g33; // 0x52810
		g34 = *v112;
		g24 = 0;
		*v112 = 0;
		mem_free_dbg();
		*(int32_t *)g33 = g24;
		// branch -> 0x52824
	}
	int32_t *v113 = (int32_t *)g30; // 0x5285c
	if (*(int32_t *)*(int32_t *)(g23 - 0x766c) == 0) {
		// 0x52858
		*v113 = 384;
		result = 6;
		*(int32_t *)g29 = 224;
		*(int32_t *)g28 = result;
		*(int32_t *)g27 = 7;
		// branch -> 0x52888
	} else {
		// 0x52834
		*v113 = 640;
		result = 10;
		*(int32_t *)g29 = 352;
		*(int32_t *)g28 = result;
		*(int32_t *)g27 = 11;
		// branch -> 0x52888
	}
	// 0x52888
	return result;
}

// Address range: 0x5289c - 0x528e8
int32_t DRLG_InitTrans(int32_t a1)
{
	// 0x5289c
	g34 = *(int32_t *)*(int32_t *)(g23 - 0x7588);
	function_e9dd8();
	int32_t v1;
	g34 = *(int32_t *)(v1 - 0x7268);
	function_e9dd8();
	int32_t result = *(int32_t *)(v1 - 0x7518); // 0x528cc
	*(char *)result = 1;
	return result;
}

// Address range: 0x528e8 - 0x52a1c
int32_t function_528e8(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7518); // 0x528ec
	int32_t v2 = 2 * a2 + 17;                // 0x528f4
	int32_t v3 = *(int32_t *)(g23 - 0x7588); // r5
	int32_t v4 = 2 * a1 + 17;                // 0x52904
	int32_t v5 = v2;                         // r7
	int32_t v6 = 2 * a3 + 16;                // 0x5290c
	int32_t v7 = 2 * a4 + 16;                // 0x52910
	char *v8;                                // 0x52a0c
	unsigned char result;                    // 0x52a0c
	if (v2 > v7) {
		// 0x52a0c
		v8 = (char *)v1;
		result = *v8;
		*v8 = result + 1;
		return result;
	}
	int32_t v9 = v6;  // 0x5291c
	int32_t v10 = v4; // 0x52920
	while (true) {
		int32_t v11 = 112 * v10;    // r6
		int32_t v12 = v9 + 1 - v10; // 0x52924
		int32_t v13 = v12;          // r3
		int32_t v14;                // 0x52a00
		if (v10 <= v9) {
			int32_t v15 = __asm_rlwinm_(v12, 29, 3, 31); // 0x5292c
			int32_t v16 = v15;                           // ctr
			int32_t v17;                                 // 0x529e4
			if (v15 == 0) {
				// 0x5292c
				v17 = v13;
				// branch -> 0x529e4
			lab_0x529e4:;
				int32_t v18 = *(int32_t *)v3; // 0x529e8
				int32_t v19 = v11;            // 0x529f0
				*(char *)(v5 + v19 + v18) = *(char *)v1;
				int32_t v20 = v17 - 1; // 0x529fc
				// branch -> 0x529e8
				while (v20 != 0) {
					// 0x529e8
					v18 = *(int32_t *)v3;
					v19 += 112;
					*(char *)(v5 + v19 + v18) = *(char *)v1;
					v20--;
					// continue -> 0x529e8
				}
			lab_0x52a00:
				// 0x52a00
				v14 = v5 + 1;
				v5 = v14;
				if (v14 > v7) {
					// 0x52a04
					// branch -> 0x52a0c
					// 0x52a0c
					v8 = (char *)v1;
					result = *v8;
					*v8 = result + 1;
					return result;
				}
			lab_0x52a00_3:
				// 0x52a00
				v9 = v6;
				v10 = v4;
				// branch -> 0x52918
				continue;
			} else {
				int32_t v21 = *(int32_t *)v3; // 0x52938
				int32_t v22 = v11;            // 0x52940
				*(char *)(v5 + v22 + v21) = *(char *)v1;
				int32_t v23 = *(int32_t *)v3; // 0x5294c
				int32_t v24 = v22 + 112;      // 0x52954
				*(char *)(v5 + v24 + v23) = *(char *)v1;
				int32_t v25 = *(int32_t *)v3; // 0x52960
				int32_t v26 = v24 + 112;      // 0x52968
				*(char *)(v5 + v26 + v25) = *(char *)v1;
				int32_t v27 = *(int32_t *)v3; // 0x52974
				int32_t v28 = v26 + 112;      // 0x5297c
				*(char *)(v5 + v28 + v27) = *(char *)v1;
				int32_t v29 = *(int32_t *)v3; // 0x52988
				int32_t v30 = v28 + 112;      // 0x52990
				*(char *)(v5 + v30 + v29) = *(char *)v1;
				int32_t v31 = *(int32_t *)v3; // 0x5299c
				int32_t v32 = v30 + 112;      // 0x529a4
				*(char *)(v5 + v32 + v31) = *(char *)v1;
				int32_t v33 = *(int32_t *)v3; // 0x529b0
				int32_t v34 = v32 + 112;      // 0x529b8
				*(char *)(v5 + v34 + v33) = *(char *)v1;
				int32_t v35 = *(int32_t *)v3; // 0x529c4
				int32_t v36 = v34 + 112;      // 0x529cc
				v11 = v36 + 112;
				*(char *)(v5 + v36 + v35) = *(char *)v1;
				int32_t v37 = v16 - 1; // 0x529d8
				while (v37 != 0) {
					// 0x52938
					v21 = *(int32_t *)v3;
					v22 = v11;
					*(char *)(v5 + v22 + v21) = *(char *)v1;
					v23 = *(int32_t *)v3;
					v24 = v22 + 112;
					*(char *)(v5 + v24 + v23) = *(char *)v1;
					v25 = *(int32_t *)v3;
					v26 = v24 + 112;
					*(char *)(v5 + v26 + v25) = *(char *)v1;
					v27 = *(int32_t *)v3;
					v28 = v26 + 112;
					*(char *)(v5 + v28 + v27) = *(char *)v1;
					v29 = *(int32_t *)v3;
					v30 = v28 + 112;
					*(char *)(v5 + v30 + v29) = *(char *)v1;
					v31 = *(int32_t *)v3;
					v32 = v30 + 112;
					*(char *)(v5 + v32 + v31) = *(char *)v1;
					v33 = *(int32_t *)v3;
					v34 = v32 + 112;
					*(char *)(v5 + v34 + v33) = *(char *)v1;
					v35 = *(int32_t *)v3;
					v36 = v34 + 112;
					v11 = v36 + 112;
					*(char *)(v5 + v36 + v35) = *(char *)v1;
					v37--;
					// continue -> 0x52938
				}
				int32_t v38 = v13 % 8; // 0x529dc
				if (v38 == 0) {
					goto lab_0x52a00;
				}
				v17 = v38;
				goto lab_0x529e4;
			}
		}
		// 0x52a00
		v14 = v5 + 1;
		v5 = v14;
		if (v14 <= v7) {
			goto lab_0x52a00_3;
		}
		// 0x52a04
		// branch -> 0x52a0c
		// 0x52a0c
		v8 = (char *)v1;
		result = *v8;
		*v8 = result + 1;
		return result;
	}
}

// Address range: 0x52a1c - 0x52b2c
int32_t function_52a1c(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7518); // 0x52a1c
	int32_t v2 = *(int32_t *)(g23 - 0x7588); // r9
	char *v3;                                // 0x52b1c
	unsigned char result;                    // 0x52b1c
	if (g37 > a3) {
		// 0x52b1c
		v3 = (char *)v1;
		result = *v3;
		*v3 = result + 1;
		return result;
	}
	int32_t v4 = a2; // 0x52a2c
	int32_t v5 = a1; // 0x52a30
	while (true) {
		int32_t v6 = 112 * v5;    // r11
		int32_t v7 = v4 + 1 - v5; // 0x52a34
		int32_t v8 = v7;          // r7
		int32_t v9;               // 0x52b10
		if (v5 <= v4) {
			int32_t v10 = __asm_rlwinm_(v7, 29, 3, 31); // 0x52a3c
			int32_t v11 = v10;                          // ctr
			int32_t v12;                                // 0x52af4
			if (v10 == 0) {
				// 0x52a3c
				v12 = v8;
				// branch -> 0x52af4
			lab_0x52af4:;
				char v13 = *(char *)v1; // 0x52afc
				int32_t v14 = v6;       // 0x52b00
				*(char *)(g37 + v14 + *(int32_t *)v2) = v13;
				int32_t v15 = v12 - 1; // 0x52b0c
				// branch -> 0x52af8
				while (v15 != 0) {
					// 0x52af8
					v13 = *(char *)v1;
					v14 += 112;
					*(char *)(g37 + v14 + *(int32_t *)v2) = v13;
					v15--;
					// continue -> 0x52af8
				}
			lab_0x52b10:
				// 0x52b10
				v9 = g37 + 1;
				g37 = v9;
				if (v9 > a3) {
					// 0x52b14
					// branch -> 0x52b1c
					// 0x52b1c
					v3 = (char *)v1;
					result = *v3;
					*v3 = result + 1;
					return result;
				}
			lab_0x52b10_3:
				// 0x52b10
				v4 = a2;
				v5 = a1;
				// branch -> 0x52a28
				continue;
			} else {
				char v16 = *(char *)v1; // 0x52a4c
				int32_t v17 = v6;       // 0x52a50
				*(char *)(g37 + v17 + *(int32_t *)v2) = v16;
				char v18 = *(char *)v1;  // 0x52a60
				int32_t v19 = v17 + 112; // 0x52a64
				*(char *)(g37 + v19 + *(int32_t *)v2) = v18;
				char v20 = *(char *)v1;  // 0x52a74
				int32_t v21 = v19 + 112; // 0x52a78
				*(char *)(g37 + v21 + *(int32_t *)v2) = v20;
				char v22 = *(char *)v1;  // 0x52a88
				int32_t v23 = v21 + 112; // 0x52a8c
				*(char *)(g37 + v23 + *(int32_t *)v2) = v22;
				char v24 = *(char *)v1;  // 0x52a9c
				int32_t v25 = v23 + 112; // 0x52aa0
				*(char *)(g37 + v25 + *(int32_t *)v2) = v24;
				char v26 = *(char *)v1;  // 0x52ab0
				int32_t v27 = v25 + 112; // 0x52ab4
				*(char *)(g37 + v27 + *(int32_t *)v2) = v26;
				char v28 = *(char *)v1;  // 0x52ac4
				int32_t v29 = v27 + 112; // 0x52ac8
				*(char *)(g37 + v29 + *(int32_t *)v2) = v28;
				char v30 = *(char *)v1;  // 0x52ad8
				int32_t v31 = v29 + 112; // 0x52adc
				v6 = v31 + 112;
				*(char *)(g37 + v31 + *(int32_t *)v2) = v30;
				int32_t v32 = v11 - 1; // 0x52ae8
				while (v32 != 0) {
					// 0x52a48
					v16 = *(char *)v1;
					v17 = v6;
					*(char *)(g37 + v17 + *(int32_t *)v2) = v16;
					v18 = *(char *)v1;
					v19 = v17 + 112;
					*(char *)(g37 + v19 + *(int32_t *)v2) = v18;
					v20 = *(char *)v1;
					v21 = v19 + 112;
					*(char *)(g37 + v21 + *(int32_t *)v2) = v20;
					v22 = *(char *)v1;
					v23 = v21 + 112;
					*(char *)(g37 + v23 + *(int32_t *)v2) = v22;
					v24 = *(char *)v1;
					v25 = v23 + 112;
					*(char *)(g37 + v25 + *(int32_t *)v2) = v24;
					v26 = *(char *)v1;
					v27 = v25 + 112;
					*(char *)(g37 + v27 + *(int32_t *)v2) = v26;
					v28 = *(char *)v1;
					v29 = v27 + 112;
					*(char *)(g37 + v29 + *(int32_t *)v2) = v28;
					v30 = *(char *)v1;
					v31 = v29 + 112;
					v6 = v31 + 112;
					*(char *)(g37 + v31 + *(int32_t *)v2) = v30;
					v32--;
					// continue -> 0x52a48
				}
				int32_t v33 = v8 % 8; // 0x52aec
				if (v33 == 0) {
					goto lab_0x52b10;
				}
				v12 = v33;
				goto lab_0x52af4;
			}
		}
		// 0x52b10
		v9 = g37 + 1;
		g37 = v9;
		if (v9 <= a3) {
			goto lab_0x52b10_3;
		}
		// 0x52b14
		// branch -> 0x52b1c
		// 0x52b1c
		v3 = (char *)v1;
		result = *v3;
		*v3 = result + 1;
		return result;
	}
}

// Address range: 0x52b2c - 0x52b50
int32_t function_52b2c(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x7588);  // 0x52b34
	unsigned char result = *(char *)(v1 + 112 * a1 + a2); // 0x52b40
	*(char *)(v1 + 112 * a3 + a4) = result;
	return result;
}

// Address range: 0x52b50 - 0x52bb8
int32_t function_52b50(int32_t a1, char *a2)
{
	int32_t v1 = 0;      // r31
	int32_t result = a1; // 0x52bb4
	if (a1 > 0) {
		int32_t v2 = (int32_t)a2; // 0x52b88
		while (true) {
			int32_t v3 = (int32_t) * (char *)v2;       // 0x52b78
			int32_t v4 = (int32_t) * (char *)(v2 + 1); // 0x52b7c
			g37 = v4;
			unsigned char v5 = *(char *)(v2 + 2);                          // 0x52b80
			unsigned char v6 = *(char *)(v2 + 3);                          // 0x52b84
			int32_t v7 = function_52a1c(v3, v4, (int32_t)v5, (int32_t)v6); // 0x52b8c
			int32_t v8 = v1 + 1;                                           // 0x52b90
			v1 = v8;
			if (v8 < a1) {
				// 0x52b78
				v2 += 4;
				// branch -> 0x52b78
				continue;
			} else {
				result = v7;
			}
		}
	}
	// 0x52b9c
	return result;
}

// Address range: 0x52bb8 - 0x52c44
int32_t function_52bb8(int32_t a1, char *a2)
{
	int32_t v1 = g10;                        // 0x52bbc
	int32_t v2 = *(int32_t *)(g23 - 0x7518); // 0x52bc0
	int32_t v3 = 0;                          // r30
	char *v4;                                // 0x52c18
	unsigned char result;                    // 0x52c18
	if (a1 > 0) {
		int32_t v5 = (int32_t)a2; // 0x52bf8
		while (true) {
			int32_t v6 = (int32_t) * (char *)v5;       // 0x52be8
			int32_t v7 = (int32_t) * (char *)(v5 + 1); // 0x52bec
			g37 = v7;
			unsigned char v8 = *(char *)(v5 + 2); // 0x52bf0
			unsigned char v9 = *(char *)(v5 + 3); // 0x52bf4
			function_52a1c(v6, v7, (int32_t)v8, (int32_t)v9);
			char *v10 = (char *)v2; // 0x52c00
			v3++;
			*v10 = *v10 - 1;
			if (v3 >= a1) {
				// 0x52c10
				// branch -> 0x52c18
				// 0x52c18
				v4 = (char *)v2;
				result = *v4;
				*v4 = result + 1;
				g10 = v1;
				return result;
			}
			// 0x52be8
			v5 += 4;
			// branch -> 0x52be8
		}
	}
	// 0x52c18
	v4 = (char *)v2;
	result = *v4;
	*v4 = result + 1;
	g10 = v1;
	return result;
}

// Address range: 0x52c44 - 0x52c6c
int32_t DRLG_InitSetPC(int32_t a1)
{
	int32_t v1 = 0; // r0
	*(int32_t *)*(int32_t *)(g23 - 0x754c) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x7550) = v1;
	int32_t result = *(int32_t *)(g23 - 0x7558); // r3
	*(int32_t *)*(int32_t *)(g23 - 0x7554) = v1;
	*(int32_t *)result = v1;
	return result;
}

// Address range: 0x52c6c - 0x52e24
int32_t DRLG_SetPC(void)
{
	int32_t v1 = 0;                                               // r8
	int32_t v2 = 2 * *(int32_t *)*(int32_t *)(g23 - 0x7554);      // 0x52c90
	int32_t v3 = v2;                                              // r6
	int32_t result = *(int32_t *)(g23 - 0x779c);                  // 0x52c98
	int32_t v4 = 2 * *(int32_t *)*(int32_t *)(g23 - 0x7558);      // 0x52c9c
	int32_t v5 = 2 * *(int32_t *)*(int32_t *)(g23 - 0x754c) + 16; // r0
	int32_t v6 = 2 * *(int32_t *)*(int32_t *)(g23 - 0x7550) + 16; // r9
	int32_t v7 = v2 - 8;                                          // r4
	if (v4 > 0) {
		int32_t v8 = 0; // 0x52cd8
		while (true) {
		lab_0x52cb8:;
			int32_t v9 = 0;   // r7
			int32_t v10 = v8; // 0x52e04
			int32_t v11;      // 0x52e04
			if (v2 >= 1) {
				int32_t v12 = v2; // 0x52dd0
				int32_t v13 = 0;  // 0x52dd0
				int32_t v14 = v8; // 0x52e14
				int32_t v15;      // ctr
				int32_t v16;      // 0x52dec
				if (v2 >= 9) {
					int32_t v17 = v6 + v8; // 0x52cd8
					v15 = (v7 + 7) / 8;
					if (v7 >= 1) {
						int32_t v18 = 0; // 0x52ce4
						while (true) {
							int32_t v19 = v5 + v18; // 0x52ce4
							g29 = v19;
							char *v20 = (char *)(*(int32_t *)result + 112 * v19 + v17); // 0x52d00
							*v20 = *v20 | 8;
							v9 += 8;
							int32_t v21 = *(int32_t *)result + 112 * (v19 + 1); // 0x52d28
							g30 = v21;
							char *v22 = (char *)(v17 + v21); // 0x52d2c
							*v22 = *v22 | 8;
							int32_t v23 = 112 * (v19 + 2) + *(int32_t *)result; // 0x52d48
							g31 = v23;
							char *v24 = (char *)(v17 + v23); // 0x52d4c
							*v24 = *v24 | 8;
							int32_t v25 = 112 * (v19 + 3) + *(int32_t *)result; // 0x52d68
							g32 = v25;
							char *v26 = (char *)(v17 + v25); // 0x52d6c
							*v26 = *v26 | 8;
							int32_t v27 = 112 * (v19 + 4) + *(int32_t *)result; // 0x52d7c
							g33 = v27;
							char *v28 = (char *)(v17 + v27); // 0x52d80
							*v28 = *v28 | 8;
							int32_t v29 = 112 * (v19 + 5) + *(int32_t *)result; // 0x52d90
							g35 = v29;
							char *v30 = (char *)(v17 + v29); // 0x52d94
							*v30 = *v30 | 8;
							int32_t v31 = 112 * (v19 + 6) + *(int32_t *)result; // 0x52da4
							g36 = v31;
							char *v32 = (char *)(v17 + v31); // 0x52da8
							*v32 = (char)((int32_t)*v32 | 8);
							char *v33 = (char *)(v17 + 112 * (g29 + 7) + *(int32_t *)result); // 0x52dbc
							*v33 = (char)((int32_t)*v33 | 8);
							int32_t v34 = v15 - 1; // 0x52dc8
							v15 = v34;
							if (v34 == 0) {
								// 0x52e14
								v12 = v3;
								v13 = v9;
								v14 = v1;
								// branch -> 0x52e14
								// 0x52e14
								v15 = v12 - v13;
								if (v12 > v13) {
									v16 = v13;
								lab_0x52de0:
									while (true) {
										// 0x52de0
										v9 = v16 + 1;
										int32_t v35 = *(int32_t *)result + 112 * (v5 + v16); // 0x52df0
										char *v36 = (char *)(v35 + v6 + v14);                // 0x52df4
										*v36 = (char)((int32_t)*v36 | 8);
										int32_t v37 = v15 - 1; // 0x52e00
										v15 = v37;
										if (v37 == 0) {
											// 0x52e04
											// branch -> 0x52e04
											// 0x52e04
											v11 = v1 + 1;
											v1 = v11;
											if (v11 < v4) {
											lab_0x52e04_3:
												// 0x52e04
												v8 = v11;
												v2 = v3;
												// branch -> 0x52cb8
												goto lab_0x52cb8;
											}
											// 0x52e08
											// branch -> 0x52e1c
											// 0x52e1c
											return result;
										}
										// 0x52de0
										v16 = v9;
										// branch -> 0x52de0
									}
								}
							lab_0x52e04_2:
								// 0x52e04
								v11 = v14 + 1;
								v1 = v11;
								if (v11 < v4) {
									goto lab_0x52e04_3;
								}
								// 0x52e08
								// branch -> 0x52e1c
								// 0x52e1c
								return result;
							}
							// 0x52ce4
							v18 = v9;
							// branch -> 0x52ce4
						}
					} else {
						v12 = v2;
						v13 = 0;
						v14 = v8;
					}
				}
				// 0x52e14
				v15 = v12 - v13;
				if (v12 > v13) {
					v16 = v13;
					goto lab_0x52de0;
				}
				goto lab_0x52e04_2;
			}
			// 0x52e04
			v11 = v10 + 1;
			v1 = v11;
			if (v11 < v4) {
				goto lab_0x52e04_3;
			}
			// 0x52e08
			// branch -> 0x52e1c
			// 0x52e1c
			return result;
		}
	}
	// 0x52e1c
	return result;
}

// Address range: 0x52e24 - 0x52fbc
int32_t function_52e24(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = 2 * a3;                     // 0x52e28
	int32_t v2 = v1;                         // r7
	int32_t v3 = *(int32_t *)(g23 - 0x779c); // r5
	int32_t v4 = 2 * a1 + 16;                // r0
	int32_t result = v1 - 8;                 // 0x52e3c
	int32_t v5 = 2 * a4;                     // 0x52e40
	int32_t v6 = 2 * a2 + 16;                // r9
	int32_t v7 = 0;                          // r8
	if (v5 > 0) {
		int32_t v8 = 0; // 0x52e70
		while (true) {
		lab_0x52e50:;
			int32_t v9 = 0;   // r6
			int32_t v10 = v8; // 0x52f9c
			int32_t v11;      // 0x52f9c
			if (v1 >= 1) {
				int32_t v12 = v1; // 0x52f68
				int32_t v13 = 0;  // 0x52f68
				int32_t v14 = v8; // 0x52fac
				int32_t v15;      // ctr
				int32_t v16;      // 0x52f84
				if (v1 >= 9) {
					int32_t v17 = v6 + v8; // 0x52e70
					v15 = (result + 7) / 8;
					if (result >= 1) {
						int32_t v18 = 0; // 0x52e7c
						while (true) {
							int32_t v19 = v4 + v18; // 0x52e7c
							g29 = v19;
							char *v20 = (char *)(*(int32_t *)v3 + 112 * v19 + v17); // 0x52e98
							*v20 = *v20 | 8;
							v9 += 8;
							int32_t v21 = *(int32_t *)v3 + 112 * (v19 + 1); // 0x52ec0
							g30 = v21;
							char *v22 = (char *)(v17 + v21); // 0x52ec4
							*v22 = *v22 | 8;
							int32_t v23 = 112 * (v19 + 2) + *(int32_t *)v3; // 0x52ee0
							g31 = v23;
							char *v24 = (char *)(v17 + v23); // 0x52ee4
							*v24 = *v24 | 8;
							int32_t v25 = 112 * (v19 + 3) + *(int32_t *)v3; // 0x52f00
							g32 = v25;
							char *v26 = (char *)(v17 + v25); // 0x52f04
							*v26 = *v26 | 8;
							int32_t v27 = 112 * (v19 + 4) + *(int32_t *)v3; // 0x52f14
							g33 = v27;
							char *v28 = (char *)(v17 + v27); // 0x52f18
							*v28 = *v28 | 8;
							int32_t v29 = 112 * (v19 + 5) + *(int32_t *)v3; // 0x52f28
							g35 = v29;
							char *v30 = (char *)(v17 + v29); // 0x52f2c
							*v30 = *v30 | 8;
							int32_t v31 = 112 * (v19 + 6) + *(int32_t *)v3; // 0x52f3c
							g36 = v31;
							char *v32 = (char *)(v17 + v31); // 0x52f40
							*v32 = (char)((int32_t)*v32 | 8);
							char *v33 = (char *)(v17 + 112 * (g29 + 7) + *(int32_t *)v3); // 0x52f54
							*v33 = (char)((int32_t)*v33 | 8);
							int32_t v34 = v15 - 1; // 0x52f60
							v15 = v34;
							if (v34 == 0) {
								// 0x52fac
								v12 = v2;
								v13 = v9;
								v14 = v7;
								// branch -> 0x52fac
								// 0x52fac
								v15 = v12 - v13;
								if (v12 > v13) {
									v16 = v13;
								lab_0x52f78:
									while (true) {
										// 0x52f78
										v9 = v16 + 1;
										int32_t v35 = *(int32_t *)v3 + 112 * (v4 + v16); // 0x52f88
										char *v36 = (char *)(v35 + v6 + v14);            // 0x52f8c
										*v36 = (char)((int32_t)*v36 | 8);
										int32_t v37 = v15 - 1; // 0x52f98
										v15 = v37;
										if (v37 == 0) {
											// 0x52f9c
											// branch -> 0x52f9c
											// 0x52f9c
											v11 = v7 + 1;
											v7 = v11;
											if (v11 < v5) {
											lab_0x52f9c_3:
												// 0x52f9c
												v8 = v11;
												v1 = v2;
												// branch -> 0x52e50
												goto lab_0x52e50;
											}
											// 0x52fa0
											// branch -> 0x52fb4
											// 0x52fb4
											return result;
										}
										// 0x52f78
										v16 = v9;
										// branch -> 0x52f78
									}
								}
							lab_0x52f9c_2:
								// 0x52f9c
								v11 = v14 + 1;
								v7 = v11;
								if (v11 < v5) {
									goto lab_0x52f9c_3;
								}
								// 0x52fa0
								// branch -> 0x52fb4
								// 0x52fb4
								return result;
							}
							// 0x52e7c
							v18 = v9;
							// branch -> 0x52e7c
						}
					} else {
						v12 = v1;
						v13 = 0;
						v14 = v8;
					}
				}
				// 0x52fac
				v15 = v12 - v13;
				if (v12 > v13) {
					v16 = v13;
					goto lab_0x52f78;
				}
				goto lab_0x52f9c_2;
			}
			// 0x52f9c
			v11 = v10 + 1;
			v7 = v11;
			if (v11 < v5) {
				goto lab_0x52f9c_3;
			}
			// 0x52fa0
			// branch -> 0x52fb4
			// 0x52fb4
			return result;
		}
	}
	// 0x52fb4
	return result;
}

// Address range: 0x52fbc - 0x53210
int32_t function_52fbc(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t *a6, int32_t a7)
{
	int32_t v1 = g10; // 0x52fc0
	g28 = a5;
	g25 = a2;
	g36 = *(int32_t *)(g23 - 0x77cc);
	g24 = a1;
	g26 = a3;
	g27 = a4;
	g29 = (int32_t)a6;
	g30 = a7;
	g35 = 0;
	g33 = 0;
	g32 = 1;
	g31 = 1;
	int32_t v2 = 40 - a5; // 0x52ff8
	if (a2 > v2) {
		// 0x53008
		if (a3 > v2) {
			// 0x53010
			// branch -> 0x531fc
			// 0x531fc
			g10 = v1;
			return 0;
		}
	}
	// 0x53018
	if (function_53ae0(a2, a3) == 0) {
		// 0x5302c
		// branch -> 0x531fc
		// 0x531fc
		g10 = v1;
		return 0;
	}
	// 0x53034
	int32_t v3;       // bp-136
	int32_t v4 = &v3; // 0x53034
	g37 = 0;
	g38 = 80;
	function_e3f00(v4, 0, 80);
	int32_t v5;       // bp-216
	int32_t v6 = &v5; // 0x53044
	g37 = 0;
	g38 = 80;
	function_e3f00(v6, 0, 80);
	int32_t v7 = v6;         // r4
	int32_t v8 = g26;        // 0x53060
	int32_t v9 = v8 + g36;   // 0x53060
	int32_t v10 = v4;        // r9
	int32_t v11 = v6;        // r10
	int32_t v12 = g28;       // 0x5306c
	int32_t v13 = v12 + g25; // r11
	int32_t v14 = v12 + v8;  // r12
	int32_t v15 = 0;         // r5
	int32_t v16 = v12;       // 0x5319c
	uint32_t v17;            // 0x53158
	int32_t v18;             // 0x5318c
	int32_t v19;             // 0x53190
	int32_t v20;             // 0x53194
	int32_t v21;             // 0x531dc
	int32_t v22;             // 0x531e4
	int32_t v23;             // 0x531c4
	int32_t v24;             // 0x531d0
	int32_t v25;             // 0x531ac
	int32_t v26;             // 0x531a0
	int32_t v27;             // 0x531a4
	if (v12 > 0) {
		int32_t v28 = v4; // 0x530d0
	lab_0x5307c_2:
		while (true) {
			int32_t v29 = g31; // 0x5307c
			int32_t v30;       // 0x530d8
			if (v29 != 0) {
				// 0x53084
				g22 = g25;
				int32_t v31 = 40 * g25 + v9; // 0x53088
				if (v13 > g25) {
					int32_t v32 = v13 - g25; // 0x530c4
					int32_t v33 = g25;       // 0x530c0
					// branch -> 0x5309c
					while (true) {
						// 0x5309c
						int32_t v34; // 0x530c818
						if (g24 == (int32_t) * (char *)v31) {
							// 0x530b8
							g35++;
							v34 = v29;
							// branch -> 0x530bc
						lab_0x530bc:;
							int32_t v35 = v33 + 1; // 0x530c0
							g22 = v35;
							int32_t v36 = v32 - 1; // 0x530c4
							if (v36 == 0) {
								// break -> 0x530c8
								break;
							}
							v29 = v34;
							v32 = v36;
							v33 = v35;
							v31 += 40;
							// continue -> 0x5309c
							continue;
						} else {
							// 0x530a8
							if (v33 < g27) {
								// 0x530b0
								g31 = 0;
								v34 = 0;
								// branch -> 0x530bc
								goto lab_0x530bc;
							}
						}
						// 0x530c8
						if (v29 != 0) {
						lab_0x530d0:
							// 0x530d0
							*(int32_t *)v28 = g35;
							g35 = 0;
							// branch -> 0x530d8
						}
					lab_0x530d8:
						// 0x530d8
						v30 = g32;
						int32_t v37; // 0x53144
						int32_t v38; // 0x5314c
						int32_t v39; // 0x53150
						if (v30 != 0) {
						lab_0x530e0:;
							int32_t v40 = g26; // 0x530e8
							g22 = v40;
							int32_t v41 = v14 - v40;                    // 0x530f0
							int32_t v42 = 40 * (v15 + g25) + v40 + g36; // 0x530fc
							int32_t v43 = v30;                          // 0x53130
							if (v14 > v40) {
								int32_t v44 = v30; // 0x5313027
								// branch -> 0x53104
								while (true) {
									// 0x53104
									int32_t v45; // 0x5313026
									if (g24 == (int32_t) * (char *)v42) {
										// 0x53120
										g33++;
										v45 = v44;
										// branch -> 0x53124
									lab_0x53124:;
										int32_t v46 = v40 + 1; // 0x53128
										g22 = v46;
										int32_t v47 = v41 - 1; // 0x5312c
										if (v47 == 0) {
											// break -> 0x53130
											break;
										}
										v44 = v45;
										v41 = v47;
										v40 = v46;
										v42++;
										// continue -> 0x53104
										continue;
									} else {
										// 0x53110
										if (v40 < g27) {
											// 0x53118
											g32 = 0;
											v45 = 0;
											// branch -> 0x53124
											goto lab_0x53124;
										}
									}
									// 0x53130
									if (v44 != 0) {
									lab_0x53138:
										// 0x53138
										*(int32_t *)v11 = g33;
										g33 = 0;
										// branch -> 0x53140
									}
								lab_0x53140:
									// 0x53140
									v37 = v10 + 4;
									v10 = v37;
									v11 += 4;
									v38 = v15 + 1;
									v15 = v38;
									v39 = g28;
									if (v38 >= v39) {
										v16 = v39;
										// break (via goto) -> 0x53158
										goto lab_0x53158_2;
									}
									v28 = v37;
									v9++;
									// continue (via goto) -> 0x5307c
									goto lab_0x5307c_2;
								}
								// 0x53158
								v17 = g27;
								if (v17 >= 1) {
									v20 = v17;
									v19 = v6;
									v18 = v4;
									while (true) {
										// 0x5316c
										if (*(int32_t *)v18 >= v17) {
										lab_0x53178_2:
											// 0x53178
											if (*(int32_t *)v19 >= v17) {
												int32_t v48 = v20 - 1; // 0x53194
												if (v48 == 0) {
													// break -> 0x53198
													break;
												}
												v20 = v48;
												v19 += 4;
												v18 += 4;
												// continue -> 0x5316c
												continue;
											}
										}
										// 0x53184
										// branch -> 0x531fc
										// 0x531fc
										g10 = v1;
										return 0;
									}
									// 0x53198
									// branch -> 0x53198
									// 0x53198
									v26 = v3;
									v27 = v5;
									if (v16 >= 1) {
										// 0x531ac
										v22 = v16;
										v24 = v27;
										v23 = v26;
										v21 = v4;
										// branch -> 0x531ac
										while (true) {
											// 0x531ac
											v25 = *(int32_t *)v21;
											if (v25 >= v17) {
												goto lab_0x531b8_3;
											}
											// 0x531e8
											// branch -> 0x531e8
											// 0x531e8
											*(int32_t *)g29 = v23 - 2;
											*(int32_t *)g30 = v24 - 2;
											// branch -> 0x531fc
											// 0x531fc
											g10 = v1;
											return 1;
										}
									}
									// 0x531e8
									*(int32_t *)g29 = v26 - 2;
									*(int32_t *)g30 = v27 - 2;
									// branch -> 0x531fc
									// 0x531fc
									g10 = v1;
									return 1;
								}
								// 0x53198
								v26 = v3;
								v27 = v5;
								if (v16 < 1) {
									// 0x531e8
									*(int32_t *)g29 = v26 - 2;
									*(int32_t *)g30 = v27 - 2;
									// branch -> 0x531fc
									// 0x531fc
									g10 = v1;
									return 1;
								}
								// 0x531ac
								v22 = v16;
								v24 = v27;
								v23 = v26;
								v21 = v4;
								// branch -> 0x531ac
								int32_t v49; // 0x531c437
								int32_t v50; // 0x531d039
								while (true) {
									// 0x531ac
									v25 = *(int32_t *)v21;
									if (v25 >= v17) {
									lab_0x531b8_3:;
										int32_t v51 = v7;              // 0x531b8
										int32_t v52 = *(int32_t *)v51; // 0x531b8
										if (v52 >= v17) {
											// 0x531c4
											v49 = v23;
											if (v25 < v23) {
												// 0x531cc
												v49 = v25;
												// branch -> 0x531d0
											}
											// 0x531d0
											v50 = v24;
											if (v52 < v24) {
												// 0x531d8
												v50 = v52;
												// branch -> 0x531dc
											}
											// 0x531dc
											v7 = v51 + 4;
											int32_t v53 = v22 - 1; // 0x531e4
											if (v53 == 0) {
												// break -> 0x531e8
												break;
											}
											v22 = v53;
											v24 = v50;
											v23 = v49;
											v21 += 4;
											// continue -> 0x531ac
											continue;
										}
									}
									// 0x531e8
									// branch -> 0x531e8
									// 0x531e8
									*(int32_t *)g29 = v23 - 2;
									*(int32_t *)g30 = v24 - 2;
									// branch -> 0x531fc
									// 0x531fc
									g10 = v1;
									return 1;
								}
								// 0x531e8
								// branch -> 0x531e8
								// 0x531e8
								*(int32_t *)g29 = v49 - 2;
								*(int32_t *)g30 = v50 - 2;
								// branch -> 0x531fc
								// 0x531fc
								g10 = v1;
								return 1;
							}
							// 0x53130
							if (v43 == 0) {
								goto lab_0x53140;
							}
							goto lab_0x53138;
						}
					lab_0x53140_2:
						// 0x53140
						v37 = v10 + 4;
						v10 = v37;
						v11 += 4;
						v38 = v15 + 1;
						v15 = v38;
						v39 = g28;
						if (v38 >= v39) {
							v16 = v39;
							// break (via goto) -> 0x53158
							goto lab_0x53158_2;
						}
						v28 = v37;
						v9++;
						// continue (via goto) -> 0x5307c
						goto lab_0x5307c_2;
					}
					// 0x53158
					v17 = g27;
					if (v17 >= 1) {
						v20 = v17;
						v19 = v6;
						v18 = v4;
						while (true) {
							// 0x5316c
							if (*(int32_t *)v18 >= v17) {
								goto lab_0x53178_2;
							}
							// 0x53184
							// branch -> 0x531fc
							// 0x531fc
							g10 = v1;
							return 0;
						}
						// 0x531fc
						g10 = v1;
						int32_t result; // 0x5320c
						return result;
					}
					// 0x53198
					v26 = v3;
					v27 = v5;
					if (v16 >= 1) {
						// 0x531ac
						v22 = v16;
						v24 = v27;
						v23 = v26;
						v21 = v4;
						// branch -> 0x531ac
						while (true) {
							// 0x531ac
							v25 = *(int32_t *)v21;
							if (v25 >= v17) {
								goto lab_0x531b8_3;
							}
							// 0x531e8
							// branch -> 0x531e8
							// 0x531e8
							*(int32_t *)g29 = v23 - 2;
							*(int32_t *)g30 = v24 - 2;
							// branch -> 0x531fc
							// 0x531fc
							g10 = v1;
							return 1;
						}
					}
					// 0x531e8
					*(int32_t *)g29 = v26 - 2;
					*(int32_t *)g30 = v27 - 2;
					// branch -> 0x531fc
					// 0x531fc
					g10 = v1;
					return 1;
				}
				// 0x530c8
				if (v29 == 0) {
					goto lab_0x530d8;
				}
				goto lab_0x530d0;
			}
			// 0x530d8
			v30 = g32;
			if (v30 == 0) {
				goto lab_0x53140_2;
			}
			goto lab_0x530e0;
		}
	}
lab_0x53158_2:
	// 0x53158
	v17 = g27;
	if (v17 < 1) {
		// 0x53198
		v26 = v3;
		v27 = v5;
		if (v16 >= 1) {
			// 0x531ac
			v22 = v16;
			v24 = v27;
			v23 = v26;
			v21 = v4;
			// branch -> 0x531ac
			while (true) {
				// 0x531ac
				v25 = *(int32_t *)v21;
				if (v25 >= v17) {
					goto lab_0x531b8_3;
				}
				// 0x531e8
				// branch -> 0x531e8
				// 0x531e8
				*(int32_t *)g29 = v23 - 2;
				*(int32_t *)g30 = v24 - 2;
				// branch -> 0x531fc
				// 0x531fc
				g10 = v1;
				return 1;
			}
		}
		// 0x531e8
		*(int32_t *)g29 = v26 - 2;
		*(int32_t *)g30 = v27 - 2;
		// branch -> 0x531fc
	} else {
		v20 = v17;
		v19 = v6;
		v18 = v4;
		while (true) {
			// 0x5316c
			if (*(int32_t *)v18 >= v17) {
				goto lab_0x53178_2;
			}
			// 0x53184
			// branch -> 0x531fc
			// 0x531fc
			g10 = v1;
			return 0;
		}
	}
	// 0x531fc
	g10 = v1;
	return 1;
}

// Address range: 0x53210 - 0x537b4
int32_t function_53210(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10;                        // 0x53214
	int32_t v2 = 20 * a1;                    // 0x53218
	int32_t v3 = *(int32_t *)(g23 - 0x726c); // 0x5321c
	g33 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x77cc); // 0x53220
	g35 = v4;
	g36 = *(int32_t *)(g23 - 0x7794);
	int32_t v5 = v3 + v2; // 0x53228
	g30 = v5;
	int32_t v6 = v5 + 4;         // 0x53238
	int32_t v7 = *(int32_t *)v6; // 0x53238
	int32_t result = v7;         // r3
	int32_t v8 = v7 + v4;        // 0x5323c
	// branch -> 0x53428
	while (true) {
		int32_t v9 = *(int32_t *)(v5 + 4);        // 0x53428
		int32_t v10 = v9;                         // r10
		int32_t v11 = *(int32_t *)(v5 + 16) + v9; // 0x53430
		int32_t v12 = v11;                        // r12
		int32_t v13;                              // r11
		int32_t v14;                              // r7
		int32_t v15;                              // 0x5325c
		if (v7 >= v11) {
			unsigned char v16 = *(char *)g36; // 0x5343c
			int32_t v17 = v16;                // 0x5343c
			if (v16 == 2) {
				int32_t v18 = *(int32_t *)v5; // 0x53448
				int32_t v19 = *(int32_t *)v6; // 0x53450
				v15 = v2 + g33;
				v13 = g35 - 1;
				int32_t v20 = v19 + 40 * v18; // 0x53460
				*(char *)(g35 + v20) = 8;
				int32_t v21 = v19 - 40 + 40 * (v18 + *(int32_t *)(v15 + 12)); // 0x53484
				*(char *)(v21 + g35) = 7;
				int32_t v22 = *(int32_t *)(v15 + 16); // 0x5348c
				result = v21 + v22;
				*(char *)(v13 + v20 + v22) = (char)9;
				*(char *)(result + v13) = (char)6;
				// branch -> 0x534a0
			}
			int32_t v23 = v17; // 0x53500
			if (v17 == 3) {
				int32_t v24 = *(int32_t *)g30; // 0x534a8
				int32_t v25 = *(int32_t *)v6;  // 0x534b0
				v15 = v2 + g33;
				v13 = g35 - 1;
				int32_t v26 = v25 + 40 * v24; // 0x534c0
				*(char *)(g35 + v26) = -106;
				int32_t v27 = v25 - 40 + 40 * (v24 + *(int32_t *)(v15 + 12)); // 0x534e4
				*(char *)(v27 + g35) = -105;
				int32_t v28 = *(int32_t *)(v15 + 16); // 0x534ec
				result = v27 + v28;
				*(char *)(v13 + v26 + v28) = (char)152;
				*(char *)(result + v13) = (char)138;
				v23 = v17;
				// branch -> 0x53500
			}
			int32_t v29 = v23; // 0x53560
			if (v23 == 4) {
				int32_t v30 = *(int32_t *)g30; // 0x53508
				int32_t v31 = *(int32_t *)v6;  // 0x53510
				v15 = v2 + g33;
				v13 = g35 - 1;
				int32_t v32 = v31 + 40 * v30; // 0x53520
				*(char *)(g35 + v32) = 9;
				int32_t v33 = v31 - 40 + 40 * (v30 + *(int32_t *)(v15 + 12)); // 0x53544
				*(char *)(v33 + g35) = 16;
				int32_t v34 = *(int32_t *)(v15 + 16); // 0x5354c
				result = v33 + v34;
				*(char *)(v13 + v32 + v34) = (char)15;
				*(char *)(result + v13) = (char)12;
				v29 = v17;
				// branch -> 0x53560
			}
			// 0x53560
			int32_t v35;     // 0x536e0
			int32_t v36;     // 0x536e0
			int32_t v37;     // 0x536f8
			int32_t v38;     // 0x53614
			int32_t v39;     // 0x53630
			int32_t v40;     // 0x53648
			int32_t v41;     // 0x53658
			int32_t v42;     // 0x5366c
			int32_t v43;     // 0x53694
			int32_t v44;     // 0x5369c
			int32_t result2; // 0x536b8
			int32_t v45;     // 0x536d4
			int32_t v46;     // 0x536ec
			int32_t v47;     // 0x536fc
			int32_t v48;     // 0x53710
			int32_t v49;     // 0x53748
			int32_t v50;     // 0x5377c
			uint32_t v51;    // 0x53640
			uint32_t v52;    // 0x53674
			uint32_t v53;    // 0x536e4
			uint32_t v54;    // 0x53750
			int32_t v55;     // 0x53768
			int32_t v56;     // 0x53700
			int32_t v57;     // 0x53760
			if (v29 != 2) {
				// 0x53600
				if (*(char *)g36 != 3) {
					// 0x536a4
					if (*(char *)g36 != 4) {
						// 0x537a0
						g10 = v1;
						return result;
					}
					// 0x536b0
					g37 = 2;
					result2 = random(0);
					if (result2 == 1) {
						// 0x53748
						v49 = v2 + g33;
						v54 = *(int32_t *)(v49 + 12);
						v57 = v54 / 2 | v54 & -0x80000000;
						v55 = *(int32_t *)(v49 + 16);
						v50 = *(int32_t *)v6 + 40 * (v57 + *(int32_t *)g30) + v55 + g35;
						v15 = v50;
						*(char *)(v50 - 41) = 57;
						result = 59;
						*(char *)(v15 - 1) = (char)6;
						*(char *)(v15 + 39) = (char)56;
						*(char *)(v15 - 2) = (char)result;
						*(char *)(v15 - 42) = (char)58;
						// branch -> 0x537a0
						// 0x537a0
						g10 = v1;
						return result;
					}
					// 0x536c4
					if (result2 <= 1) {
						// 0x536c8
						if (result2 > -1) {
							// 0x536d4
							v45 = v2 + g33;
							v35 = g35;
							v36 = v35 - 1;
							v53 = *(int32_t *)(v45 + 16);
							v46 = *(int32_t *)(v45 + 12) + *(int32_t *)g30;
							v37 = 40 * (v46 - 1);
							v47 = *(int32_t *)v6;
							v56 = v53 / 2 | v53 & -0x80000000;
							v14 = v56;
							v48 = v56 + v37 + v47;
							*(char *)(v48 + v36) = 53;
							*(char *)(v48 + g35) = 6;
							*(char *)(v14 + v37 + v35 + v47 + 1) = 52;
							*(char *)(v14 + v47 + 40 * (v46 - 2) + v36) = 54;
							// branch -> 0x537a0
							// 0x537a0
							g10 = v1;
							return 54;
						}
					}
					// 0x537a0
					g10 = v1;
					return result2;
				}
				// 0x5360c
				g37 = 2;
				v38 = random(0);
				result = v38;
				if (v38 == 1) {
					// 0x5366c
					v42 = v2 + g33;
					v52 = *(int32_t *)(v42 + 12);
					v43 = g35 + 40 * ((v52 / 2 | v52 & -0x80000000) + *(int32_t *)g30);
					v44 = *(int32_t *)(v42 + 16) + *(int32_t *)v6 + v43;
					result = v44;
					*(char *)(v44 - 1) = -110;
					// branch -> 0x536a4
				} else {
					// 0x53620
					if (v38 <= 1) {
						// 0x53624
						if (v38 > -1) {
							// 0x53630
							v39 = v2 + g33;
							v51 = *(int32_t *)(v39 + 16);
							v40 = *(int32_t *)v6;
							v41 = v40 + 40 * (*(int32_t *)(v39 + 12) + *(int32_t *)g30) - 40;
							result = v41;
							*(char *)(g35 + v41 + (v51 / 2 | v51 & -0x80000000)) = -109;
							// branch -> 0x536a4
						}
					}
				}
				// 0x536a4
				if (*(char *)g36 != 4) {
					// 0x537a0
					g10 = v1;
					return result;
				}
				// 0x536b0
				g37 = 2;
				result2 = random(0);
				if (result2 == 1) {
					// 0x53748
					v49 = v2 + g33;
					v54 = *(int32_t *)(v49 + 12);
					v57 = v54 / 2 | v54 & -0x80000000;
					v55 = *(int32_t *)(v49 + 16);
					v50 = *(int32_t *)v6 + 40 * (v57 + *(int32_t *)g30) + v55 + g35;
					v15 = v50;
					*(char *)(v50 - 41) = 57;
					result = 59;
					*(char *)(v15 - 1) = (char)6;
					*(char *)(v15 + 39) = (char)56;
					*(char *)(v15 - 2) = (char)result;
					*(char *)(v15 - 42) = (char)58;
					// branch -> 0x537a0
					// 0x537a0
					g10 = v1;
					return result;
				}
				// 0x536c4
				if (result2 <= 1) {
					// 0x536c8
					if (result2 > -1) {
						// 0x536d4
						v45 = v2 + g33;
						v35 = g35;
						v36 = v35 - 1;
						v53 = *(int32_t *)(v45 + 16);
						v46 = *(int32_t *)(v45 + 12) + *(int32_t *)g30;
						v37 = 40 * (v46 - 1);
						v47 = *(int32_t *)v6;
						v56 = v53 / 2 | v53 & -0x80000000;
						v14 = v56;
						v48 = v56 + v37 + v47;
						*(char *)(v48 + v36) = 53;
						*(char *)(v48 + g35) = 6;
						*(char *)(v14 + v37 + v35 + v47 + 1) = 52;
						*(char *)(v14 + v47 + 40 * (v46 - 2) + v36) = 54;
						// branch -> 0x537a0
						// 0x537a0
						g10 = v1;
						return 54;
					}
				}
				// 0x537a0
				g10 = v1;
				return result2;
			}
			// 0x53568
			g37 = 2;
			int32_t v58 = random(0); // 0x53570
			result = v58;
			if (v58 == 1) {
				int32_t v59 = v2 + g33;                                                     // 0x535c8
				uint32_t v60 = *(int32_t *)(v59 + 12);                                      // 0x535d0
				int32_t v61 = g35 + 40 * ((v60 / 2 | v60 & -0x80000000) + *(int32_t *)g30); // 0x535f0
				int32_t v62 = *(int32_t *)(v59 + 16) + *(int32_t *)v6 + v61;                // 0x535f8
				result = v62;
				*(char *)(v62 - 1) = 5;
				// branch -> 0x53600
			} else {
				// 0x5357c
				if (v58 <= 1) {
					// 0x53580
					if (v58 > -1) {
						int32_t v63 = v2 + g33;                                 // 0x5358c
						uint32_t v64 = *(int32_t *)(v63 + 16);                  // 0x5359c
						int32_t v65 = *(int32_t *)(v63 + 12) + *(int32_t *)g30; // 0x535a0
						int32_t v66 = *(int32_t *)v6 + 40 * v65 - 40;           // 0x535b4
						result = v66;
						*(char *)(g35 + v66 + (v64 / 2 | v64 & -0x80000000)) = 4;
						// branch -> 0x53600
					}
				}
			}
			// 0x53600
			if (*(char *)g36 != 3) {
				// 0x536a4
				if (*(char *)g36 != 4) {
					// 0x537a0
					g10 = v1;
					return result;
				}
				// 0x536b0
				g37 = 2;
				result2 = random(0);
				if (result2 == 1) {
					// 0x53748
					v49 = v2 + g33;
					v54 = *(int32_t *)(v49 + 12);
					v57 = v54 / 2 | v54 & -0x80000000;
					v55 = *(int32_t *)(v49 + 16);
					v50 = *(int32_t *)v6 + 40 * (v57 + *(int32_t *)g30) + v55 + g35;
					v15 = v50;
					*(char *)(v50 - 41) = 57;
					result = 59;
					*(char *)(v15 - 1) = (char)6;
					*(char *)(v15 + 39) = (char)56;
					*(char *)(v15 - 2) = (char)result;
					*(char *)(v15 - 42) = (char)58;
					// branch -> 0x537a0
					// 0x537a0
					g10 = v1;
					return result;
				}
				// 0x536c4
				if (result2 <= 1) {
					// 0x536c8
					if (result2 > -1) {
						// 0x536d4
						v45 = v2 + g33;
						v35 = g35;
						v36 = v35 - 1;
						v53 = *(int32_t *)(v45 + 16);
						v46 = *(int32_t *)(v45 + 12) + *(int32_t *)g30;
						v37 = 40 * (v46 - 1);
						v47 = *(int32_t *)v6;
						v56 = v53 / 2 | v53 & -0x80000000;
						v14 = v56;
						v48 = v56 + v37 + v47;
						*(char *)(v48 + v36) = 53;
						*(char *)(v48 + g35) = 6;
						*(char *)(v14 + v37 + v35 + v47 + 1) = 52;
						*(char *)(v14 + v47 + 40 * (v46 - 2) + v36) = 54;
						// branch -> 0x537a0
						// 0x537a0
						g10 = v1;
						return 54;
					}
				}
				// 0x537a0
				g10 = v1;
				return result2;
			}
			// 0x5360c
			g37 = 2;
			v38 = random(0);
			result = v38;
			if (v38 == 1) {
				// 0x5366c
				v42 = v2 + g33;
				v52 = *(int32_t *)(v42 + 12);
				v43 = g35 + 40 * ((v52 / 2 | v52 & -0x80000000) + *(int32_t *)g30);
				v44 = *(int32_t *)(v42 + 16) + *(int32_t *)v6 + v43;
				result = v44;
				*(char *)(v44 - 1) = -110;
				// branch -> 0x536a4
			} else {
				// 0x53620
				if (v38 <= 1) {
					// 0x53624
					if (v38 > -1) {
						// 0x53630
						v39 = v2 + g33;
						v51 = *(int32_t *)(v39 + 16);
						v40 = *(int32_t *)v6;
						v41 = v40 + 40 * (*(int32_t *)(v39 + 12) + *(int32_t *)g30) - 40;
						result = v41;
						*(char *)(g35 + v41 + (v51 / 2 | v51 & -0x80000000)) = -109;
						// branch -> 0x536a4
					}
				}
			}
			// 0x536a4
			if (*(char *)g36 != 4) {
				// 0x537a0
				g10 = v1;
				return result;
			}
			// 0x536b0
			g37 = 2;
			result2 = random(0);
			if (result2 == 1) {
				// 0x53748
				v49 = v2 + g33;
				v54 = *(int32_t *)(v49 + 12);
				v57 = v54 / 2 | v54 & -0x80000000;
				v55 = *(int32_t *)(v49 + 16);
				v50 = *(int32_t *)v6 + 40 * (v57 + *(int32_t *)g30) + v55 + g35;
				v15 = v50;
				*(char *)(v50 - 41) = 57;
				result = 59;
				*(char *)(v15 - 1) = (char)6;
				*(char *)(v15 + 39) = (char)56;
				*(char *)(v15 - 2) = (char)result;
				*(char *)(v15 - 42) = (char)58;
				// branch -> 0x537a0
				// 0x537a0
				g10 = v1;
				return result;
			}
			// 0x536c4
			if (result2 <= 1) {
				// 0x536c8
				if (result2 > -1) {
					// 0x536d4
					v45 = v2 + g33;
					v35 = g35;
					v36 = v35 - 1;
					v53 = *(int32_t *)(v45 + 16);
					v46 = *(int32_t *)(v45 + 12) + *(int32_t *)g30;
					v37 = 40 * (v46 - 1);
					v47 = *(int32_t *)v6;
					v56 = v53 / 2 | v53 & -0x80000000;
					v14 = v56;
					v48 = v56 + v37 + v47;
					*(char *)(v48 + v36) = 53;
					*(char *)(v48 + g35) = 6;
					*(char *)(v14 + v37 + v35 + v47 + 1) = 52;
					*(char *)(v14 + v47 + 40 * (v46 - 2) + v36) = 54;
					// branch -> 0x537a0
					// 0x537a0
					g10 = v1;
					return 54;
				}
			}
			// 0x537a0
			g10 = v1;
			return result2;
		}
		int32_t v67 = *(int32_t *)v5; // 0x53244
		v13 = v67;
		int32_t v68 = *(int32_t *)(v5 + 12); // 0x5324c
		v14 = v11 - 1;
		g29 = v67;
		int32_t v69 = v68 + v67; // 0x53258
		int32_t v70 = v69;       // r6
		v15 = (int32_t) * (char *)g36;
		int32_t v71 = v69 - 1;       // r8
		int32_t v72 = 40 * v67 + v8; // 0x53270
		int32_t v73 = v68;           // ctr
		if (v68 != 0 && v67 <= v69) {
			while (true) {
				// 0x5327c
				if (v15 == 2) {
					uint32_t v74 = result; // 0x53284
					if (v74 == v10) {
						// 0x5328c
						if (v67 >= v13) {
							// 0x53294
							if (v67 <= v70) {
							lab_0x532b4:
								// 0x532b4
								*(char *)v72 = 2;
								// branch -> 0x53304
							lab_0x53304_3:
								// 0x53304
								if (v15 == 3) {
								lab_0x5330c:;
									uint32_t v75 = result; // 0x5330c
									uint32_t v76 = g29;    // 0x53314
									if (v75 == v10) {
										// 0x53314
										if (v76 >= v13) {
											// 0x5331c
											if (v76 <= v70) {
											lab_0x5333c:
												// 0x5333c
												*(char *)v72 = -122;
												// branch -> 0x5338c
											lab_0x5338c_3:;
												// 0x5338c
												int32_t v77; // 0x53418
												int32_t v78; // 0x5341c
												if (v15 == 4) {
												lab_0x53394:;
													uint32_t v79 = result; // 0x53394
													uint32_t v80 = g29;    // 0x5339c
													if (v79 == v10) {
														// 0x5339c
														if (v80 >= v13) {
															// 0x533a4
															if (v80 <= v70) {
															lab_0x533c4:
																// 0x533c4
																*(char *)v72 = 2;
																// branch -> 0x53414
															lab_0x53414_3:
																// 0x53414
																v77 = g29 + 1;
																g29 = v77;
																v78 = v73 - 1;
																v73 = v78;
																if (v78 == 0) {
																lab_0x53420:
																	// 0x53420
																	v8++;
																	result++;
																	// branch -> 0x53428
																	break;
																} else {
																lab_0x53414_4:
																	// 0x53414
																	v72 += 40;
																	v67 = v77;
																	// branch -> 0x5327c
																	continue;
																}
															}
														}
													}
													// 0x533ac
													if (v79 == v14) {
														// 0x533b4
														if (v80 >= v13) {
															// 0x533bc
															if (v80 <= v70) {
																goto lab_0x533c4;
															}
															// 0x533d0
															if (v80 == v13) {
															lab_0x533d8:
																// 0x533d8
																if (v79 >= v10) {
																	// 0x533e0
																	if (v79 <= v12) {
																	lab_0x53400:
																		// 0x53400
																		*(char *)v72 = 1;
																		// branch -> 0x53414
																		goto lab_0x53414_3;
																	}
																}
															}
														lab_0x533e8:
															// 0x533e8
															if (v80 == v71) {
																// 0x533f0
																if (v79 >= v10) {
																	// 0x533f8
																	if (v79 <= v12) {
																		goto lab_0x53400;
																	}
																	// 0x5340c
																	*(char *)v72 = 6;
																	// branch -> 0x53414
																	goto lab_0x53414_3;
																}
															}
															// 0x5340c
															*(char *)v72 = 6;
															// branch -> 0x53414
															goto lab_0x53414_3;
														}
													}
													// 0x533d0
													if (v80 == v13) {
														goto lab_0x533d8;
													}
													goto lab_0x533e8;
												}
											lab_0x53414_5:
												// 0x53414
												v77 = g29 + 1;
												g29 = v77;
												v78 = v73 - 1;
												v73 = v78;
												if (v78 == 0) {
													goto lab_0x53420;
												}
												goto lab_0x53414_4;
											}
										}
									}
									// 0x53324
									if (v75 == v14) {
										// 0x5332c
										if (v76 >= v13) {
											// 0x53334
											if (v76 <= v70) {
												goto lab_0x5333c;
											}
											// 0x53348
											if (v76 == v13) {
											lab_0x53350:
												// 0x53350
												if (v75 >= v10) {
													// 0x53358
													if (v75 <= v12) {
													lab_0x53378:
														// 0x53378
														*(char *)v72 = -119;
														// branch -> 0x5338c
														goto lab_0x5338c_3;
													}
												}
											}
										lab_0x53360:
											// 0x53360
											if (v76 == v71) {
												// 0x53368
												if (v75 >= v10) {
													// 0x53370
													if (v75 <= v12) {
														goto lab_0x53378;
													}
													// 0x53384
													*(char *)v72 = 7;
													// branch -> 0x5338c
													goto lab_0x5338c_3;
												}
											}
											// 0x53384
											*(char *)v72 = 7;
											// branch -> 0x5338c
											goto lab_0x5338c_3;
										}
									}
									// 0x53348
									if (v76 == v13) {
										goto lab_0x53350;
									}
									goto lab_0x53360;
								}
							lab_0x5338c_4:
								// 0x5338c
								if (v15 == 4) {
									goto lab_0x53394;
								}
								goto lab_0x53414_5;
							}
						}
					}
					// 0x5329c
					if (v74 == v14) {
						// 0x532a4
						if (v67 >= v13) {
							// 0x532ac
							if (v67 <= v70) {
								goto lab_0x532b4;
							}
							// 0x532c0
							if (v67 == v13) {
							lab_0x532c8:
								// 0x532c8
								if (v74 >= v10) {
									// 0x532d0
									if (v74 <= v12) {
									lab_0x532f0:
										// 0x532f0
										*(char *)v72 = 1;
										// branch -> 0x53304
										goto lab_0x53304_3;
									}
								}
							}
						lab_0x532d8:
							// 0x532d8
							if (v67 == v71) {
								// 0x532e0
								if (v74 >= v10) {
									// 0x532e8
									if (v74 <= v12) {
										goto lab_0x532f0;
									}
									// 0x532fc
									*(char *)v72 = 3;
									// branch -> 0x53304
									goto lab_0x53304_3;
								}
							}
							// 0x532fc
							*(char *)v72 = 3;
							// branch -> 0x53304
							goto lab_0x53304_3;
						}
					}
					// 0x532c0
					if (v67 == v13) {
						goto lab_0x532c8;
					}
					goto lab_0x532d8;
				}
				// 0x53304
				if (v15 == 3) {
					goto lab_0x5330c;
				}
				goto lab_0x5338c_4;
			}
		}
		int32_t v81 = result + 1; // 0x53424
		result = v81;
		v8++;
		v7 = v81;
		v5 = g30;
		// branch -> 0x53428
	}
}

// Address range: 0x537b4 - 0x539d4
int32_t DRLG_PlaceThemeRooms(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	// 0x537b4
	g35 = a2;
	g36 = a3;
	g33 = a1;
	g22 = a4;
	int32_t v1 = *(int32_t *)(g23 - 0x7794); // 0x537d8
	g37 = 0;
	g38 = 20;
	*(int32_t *)*(int32_t *)(g23 - 0x7270) = 0;
	function_e3f00(*(int32_t *)(g23 - 0x726c), 0, 20);
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x53800
	g26 = 0;
	int32_t v3 = 0; // 0x53810
	// branch -> 0x53810
	int32_t result; // r3
	while (true) {
		// 0x53810
		result = 2 * v3 + 4;
		g29 = v2;
		g27 = 0;
		int32_t v4 = v2; // 0x53828
		// branch -> 0x53828
		while (true) {
			// 0x53828
			int32_t v5; // 0x539a0
			int32_t v6; // 0x539a4
			if (g36 == (int32_t) * (char *)v4) {
				// 0x53834
				g37 = g22;
				int32_t v7 = random(0); // 0x5383c
				result = v7;
				if (v7 == 0) {
					int32_t v8 = 0;                                                           // bp-84
					uint32_t v9;                                                              // 0x538d8
					int32_t v10 = function_52fbc(g36, g27, g26, g33, g35, &v8, (int32_t)&v9); // 0x53864
					result = v10;
					if (v10 != 0) {
						// 0x53870
						int32_t v11; // r4
						int32_t v12; // r5
						int32_t v13; // r6
						int32_t v14; // 0x538fc
						int32_t v15; // 0x53904
						int32_t v16; // 0x53910
						int32_t v17; // 0x53918
						if (a5 != 0) {
							// 0x53878
							g37 = v8 + 1 - g25;
							g37 = random(0);
							int32_t v18 = g25;             // 0x53898
							int32_t v19 = v18 + random(0); // 0x53898
							int32_t v20 = v18;
							if (v19 >= v18) {
								// 0x538a4
								v20 = v19 > g24 ? v18 : v19;
								// branch -> 0x538b8
							}
							// 0x538b8
							v8 = v20;
							g37 = 1 - v18 + v9;
							g37 = random(0);
							int32_t v21 = g25; // 0x538d8
							v9 = v21 + random(0);
							if (v9 >= v21) {
								// 0x538e4
								if (v9 <= g24) {
									// branch -> 0x538f8
								lab_0x538f8:
									// 0x538f8
									v14 = g27 + 1;
									v15 = g31 + 20 * *(int32_t *)g30;
									v11 = v15;
									*(int32_t *)v15 = v14;
									*(int32_t *)(v11 + 4) = g32;
									v16 = v8;
									v12 = v16;
									*(int32_t *)(v11 + 12) = v16;
									v17 = v9;
									v13 = v17;
									*(int32_t *)(v11 + 16) = v17;
									if (*(char *)v1 == 3) {
									lab_0x5392c:;
										int32_t v22 = g27;                               // 0x53934
										int32_t v23 = 2 * (v12 + 0x7fffffff + v22) + 17; // 0x53950
										int32_t v24 = g28;                               // 0x53954
										g37 = v24;
										function_52a1c(2 * v22 + 20, v24, v23, 2 * (v13 - 1 + g26) + 17);
										// branch -> 0x53974
									} else {
									lab_0x53964:
										// 0x53964
										function_528e8(v14, g32, v12 + g27, v13 + g26);
										// branch -> 0x53974
									}
									int32_t v25 = *(int32_t *)g30;                                // 0x53974
									int32_t v26 = (int32_t) * (char *)*(int32_t *)(g23 - 0x7518); // 0x53980
									int32_t v27 = v26 - 1;                                        // 0x53988
									*(int32_t *)(g31 + 20 * v25 + 8) = v27;
									function_53210(v25, v27, v26);
									int32_t *v28 = (int32_t *)g30; // 0x53994
									int32_t v29 = *v28;            // 0x53994
									result = v29;
									*v28 = v29 + 1;
									// branch -> 0x539a0
									// 0x539a0
									v5 = g27 + 1;
									g27 = v5;
									v6 = g29 + 40;
									g29 = v6;
									if (v5 >= 40) {
										// break -> 0x539b0
										break;
									}
									v4 = v6;
									// continue -> 0x53828
									continue;
								}
							}
							// 0x538ec
							v9 = v21;
							// branch -> 0x538f8
							goto lab_0x538f8;
						}
						// 0x538f8
						v14 = g27 + 1;
						v15 = g31 + 20 * *(int32_t *)g30;
						v11 = v15;
						*(int32_t *)v15 = v14;
						*(int32_t *)(v11 + 4) = g32;
						v16 = v8;
						v12 = v16;
						*(int32_t *)(v11 + 12) = v16;
						v17 = v9;
						v13 = v17;
						*(int32_t *)(v11 + 16) = v17;
						if (*(char *)v1 == 3) {
							goto lab_0x5392c;
						}
						goto lab_0x53964;
					}
					// 0x539a0
					v5 = g27 + 1;
					g27 = v5;
					v6 = g29 + 40;
					g29 = v6;
					if (v5 >= 40) {
						// break -> 0x539b0
						break;
					}
					v4 = v6;
					// continue -> 0x53828
					continue;
				}
			}
			// 0x539a0
			v5 = g27 + 1;
			g27 = v5;
			v6 = g29 + 40;
			g29 = v6;
			if (v5 >= 40) {
				// break -> 0x539b0
				break;
			}
			v4 = v6;
			// continue -> 0x53828
		}
		int32_t v30 = g26 + 1; // 0x539b0
		g26 = v30;
		if (v30 >= 40) {
			// break -> 0x539c0
			break;
		}
		v2++;
		v3 = v30;
		// continue -> 0x53810
	}
	// 0x539c0
	return result;
}

// Address range: 0x539d4 - 0x53ae0
int32_t function_539d4(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7270);     // 0x539d8
	int32_t result = *(int32_t *)(g23 - 0x779c); // 0x539e0
	int32_t *v2 = (int32_t *)v1;                 // 0x539e8
	if (*v2 < 1) {
		// 0x53ad0
		return result;
	}
	int32_t v3 = *(int32_t *)(g23 - 0x726c); // 0x539f4
	int32_t v4 = 0;                          // r7
	if (*v2 > 0) {
	lab_0x53a00:
		while (true) {
			int32_t v5 = *(int32_t *)(v3 + 4); // 0x53a00
			int32_t v6 = 2 * v5 + 16;          // r5
			int32_t v7 = v3;                   // 0x53a14
			// branch -> 0x53aa4
			while (true) {
				// 0x53aa4
				if (v5 < *(int32_t *)(v7 + 16) - 1 + *(int32_t *)(v7 + 4)) {
					int32_t v8 = *(int32_t *)v7;  // 0x53a14
					int32_t v9 = 224 * v8 + 1792; // r9
					int32_t v10 = v7;             // 0x53a84
					// branch -> 0x53a84
					while (true) {
						// 0x53a84
						if (v8 < *(int32_t *)(v10 + 12) - 1 + *(int32_t *)v10) {
							int32_t v11 = v9;                               // 0x53a30
							int32_t v12 = v6 + v11;                         // 0x53a30
							char *v13 = (char *)(v12 + *(int32_t *)result); // 0x53a3c
							v9 = v11 + 224;
							*v13 = *v13 | 8;
							char *v14 = (char *)(v12 + 112 + *(int32_t *)result); // 0x53a58
							*v14 = *v14 | 8;
							char *v15 = (char *)(v12 + 1 + *(int32_t *)result); // 0x53a68
							*v15 = *v15 | 8;
							char *v16 = (char *)(v12 + 113 + *(int32_t *)result); // 0x53a78
							*v16 = *v16 | 8;
							v8++;
							v10 = v3;
							// branch -> 0x53a84
							continue;
						} else {
							// 0x53a9c
							// branch -> 0x53aa4
							break;
						}
					}
				} else {
					int32_t v17 = v4 + 1; // 0x53ac0
					v4 = v17;
					if (v17 >= *(int32_t *)v1) {
						// break (via goto) -> 0x53ac4
						goto lab_0x53ac4;
					}
					v3 = v7 + 20;
					// continue (via goto) -> 0x53a00
					goto lab_0x53a00;
				}
			}
		lab_0x53ac4:
			// 0x53ac4
			// branch -> 0x53ad0
			// 0x53ad0
			return result;
		}
	}
	// 0x53ad0
	return result;
}

// Address range: 0x53ae0 - 0x53b58
int32_t function_53ae0(uint32_t a1, uint32_t a2)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x7270); // 0x53ae8
	if (v1 < 1) {
		// 0x53b50
		return 1;
	}
	int32_t v2 = *(int32_t *)(g23 - 0x726c); // 0x53b48
	while (true) {
		int32_t v3 = *(int32_t *)v2; // 0x53af8
		int32_t v4;                  // 0x53b4c
		if (v3 - 2 <= a1) {
			// 0x53b08
			if (v3 + 2 + *(int32_t *)(v2 + 12) >= a1) {
				int32_t v5 = *(int32_t *)(v2 + 4); // 0x53b1c
				if (v5 - 2 <= a2) {
					// 0x53b2c
					if (v5 + 2 + *(int32_t *)(v2 + 16) >= a2) {
						// 0x53b40
						return 0;
					}
					// 0x53b48
					v4 = v1 - 1;
					if (v4 == 0) {
						// break -> 0x53b50
						break;
					}
					v1 = v4;
					v2 += 20;
					// continue -> 0x53af8
					continue;
				}
				// 0x53b48
				v4 = v1 - 1;
				if (v4 == 0) {
					// break -> 0x53b50
					break;
				}
				v1 = v4;
				v2 += 20;
				// continue -> 0x53af8
				continue;
			}
			// 0x53b48
			v4 = v1 - 1;
			if (v4 == 0) {
				// break -> 0x53b50
				break;
			}
			v1 = v4;
			v2 += 20;
			// continue -> 0x53af8
			continue;
		}
		// 0x53b48
		v4 = v1 - 1;
		if (v4 == 0) {
			// break -> 0x53b50
			break;
		}
		v1 = v4;
		v2 += 20;
		// continue -> 0x53af8
	}
	// 0x53b50
	// branch -> 0x53b50
	// 0x53b50
	return 1;
}

// Address range: 0x53b58 - 0x53b88
int32_t InitLevels(void)
{
	int32_t result = *(int32_t *)(g23 - 0x7274); // 0x53b58
	if (*(int32_t *)result != 0) {
		// bb
		return result;
	}
	int32_t v1 = 0; // r0
	*(char *)*(int32_t *)(g23 - 0x77e4) = 0;
	int32_t result2 = *(int32_t *)(g23 - 0x77d8); // r3
	*(char *)*(int32_t *)(g23 - 0x7794) = (char)v1;
	*(char *)result2 = (char)v1;
	return result2;
}