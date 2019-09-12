
// Address range: 0x6c5c0 - 0x6c5ec
int32_t FreeQuestText(int32_t a1)
{
	// 0x6c5c0
	MemFreeDbg((int32_t *)(g23 - 0x4dc8));
	int32_t result = MemFreeDbg((int32_t *)(g23 - 0x4dcc)); // 0x6c5d8
	return result;
}

// Address range: 0x6c5ec - 0x6c63c
int32_t InitQuestText(int32_t a1)
{
	// 0x6c5ec
	*(int32_t *)(g23 - 0x4dc8) = LoadFileInMem(*(int32_t *)(g23 - 0x5f48), NULL);
	*(int32_t *)(g23 - 0x4dcc) = LoadFileInMem(*(int32_t *)(g23 - 0x5f4c), NULL);
	int32_t result = *(int32_t *)(g23 - 0x7108); // r3
	*(char *)*(int32_t *)(g23 - 0x7730) = 0;
	*(char *)result = (char)0;
	return result;
}

// Address range: 0x6c63c - 0x6c704
int32_t function_6c63c(void)
{
	int32_t v1 = g36;                        // 0x6c63c
	int32_t v2 = g35;                        // 0x6c644
	int32_t v3 = *(int32_t *)(g23 - 0x710c); // 0x6c648
	g35 = v3;
	int32_t v4 = g33; // 0x6c64c
	g33 = *(int32_t *)(g23 - 0x7110);
	int32_t v5 = g32;      // 0x6c654
	int32_t v6 = 16 * g34; // 0x6c658
	g32 = v6;
	int32_t v7 = v6 + v3; // 0x6c65c
	g36 = v7;
	int32_t v8; // 0x6c6d8
	int32_t v9; // 0x6c6d8
	if (*(int32_t *)(v7 + 4) != 0) {
		// 0x6c674
		*(int32_t *)*(int32_t *)(g23 - 0x77c8) = 0;
		function_b591c(1);
		*(char *)*(int32_t *)(g23 - 0x7108) = 1;
		*(char *)*(int32_t *)(g23 - 0x7730) = (char)1;
		*(int32_t *)(g23 - 0x4dd0) = *(int32_t *)(g32 + g35);
		*(int32_t *)(g23 - 0x4dd4) = 500;
		int32_t v10 = *(int32_t *)(g23 - 0x7114) + 4 * *(int32_t *)(g36 + 8); // 0x6c6b8
		g34 = v10;
		*(int32_t *)g33 = *(int32_t *)(v10 - 4);
		*(int32_t *)(g23 - 0x4dd8) = *(int32_t *)g33;
		int32_t v11;
		*(int32_t *)(v11 - 0x4ddc) = GetTickCount();
		v9 = g32;
		v8 = g35;
		// branch -> 0x6c6d8
	} else {
		v9 = v6;
		v8 = v3;
	}
	int32_t v12 = *(int32_t *)(v8 + v9 + 12); // 0x6c6dc
	g34 = v12;
	int32_t result = PlaySFX(v12); // 0x6c6e0
	g36 = v1;
	g35 = v2;
	g33 = v4;
	g32 = v5;
	return result;
}

// Address range: 0x6c704 - 0x6c748
int32_t function_6c704(void)
{
	int32_t v1 = g36;                        // 0x6c704
	int32_t v2 = *(int32_t *)(g23 - 0x7108); // 0x6c70c
	g36 = v2;
	if (*(char *)v2 != 0) {
		// 0x6c724
		g34 = function_b591c(0);
		*(char *)g36 = 0;
		// branch -> 0x6c734
	}
	// 0x6c734
	g36 = v1;
	return g34;
}

// Address range: 0x6c748 - 0x6c7f0
int32_t DrawQTextBack(void)
{
	// 0x6c748
	CelDecodeOnly(88, 487, *(int32_t *)(g23 - 0x4dcc), 1, 591);
	int32_t v1 = 148;                                                              // r5
	int32_t v2 = 0;                                                                // r0
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x7804) + (int32_t) "; " - 0x53a5; // 0x6c780
	                                                                               // branch -> 0x6c784
lab_0x6c784:
	while (true) {
		int32_t v4 = v3;  // 0x6c78c
		int32_t v5 = 292; // 0x6c788
		// branch -> 0x6c788
		while (true) {
			int32_t v6 = v5 - 1; // 0x6c788
			int32_t result = v6; // r3
			*(char *)v4 = (char)v2;
			int32_t v7 = v3 + 2; // 0x6c790
			v3 = v7;
			if (v6 == 0) {
				// 0x6c798
				*(char *)v7 = (char)v2;
				int32_t v8 = v3 - 1352; // 0x6c7a0
				v3 = v8;
				int32_t v9 = 292; // 0x6c7a4
				// branch -> 0x6c7a4
				int32_t v10; // 0x6c7b8
				while (true) {
					int32_t v11 = v9 - 1; // 0x6c7a4
					result = v11;
					*(char *)(v8 + 1) = (char)v2;
					int32_t v12 = v3;      // 0x6c7ac
					int32_t v13 = v12 + 2; // 0x6c7ac
					v3 = v13;
					if (v11 == 0) {
						int32_t v14 = v1 - 1; // 0x6c7b4
						v1 = v14;
						v10 = v12 - 1350;
						v3 = v10;
						if (v14 == 0) {
							// break (via goto) -> 0x6c7c0
							goto lab_0x6c7c0;
						}
						v3 = v10;
						// continue (via goto) -> 0x6c784
						goto lab_0x6c784;
					} else {
						// 0x6c7a4
						v8 = v13;
						v9 = result;
						// branch -> 0x6c7a4
						continue;
					}
				}
			lab_0x6c7c0:;
				int32_t v15 = v10; // 0x6c7cc
				char v16 = 0;
				int32_t v17 = 292; // 0x6c7c8
				// branch -> 0x6c7c8
				while (true) {
					int32_t v18 = v17 - 1; // 0x6c7c8
					result = v18;
					*(char *)v15 = v16;
					int32_t v19 = v3 + 2; // 0x6c7d0
					v3 = v19;
					if (v18 == 0) {
						// 0x6c7d8
						*(char *)v19 = 0;
						return result;
					}
					// 0x6c7c8
					v15 = v19;
					v16 = 0;
					v17 = result;
					// branch -> 0x6c7c8
				}
			} else {
				// 0x6c788
				v4 = v7;
				v5 = result;
				// branch -> 0x6c788
				continue;
			}
		}
	}
}

// Address range: 0x6c7f0 - 0x6c950
int32_t function_6c7f0(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	g36 = a3;
	g31 = a1;
	g35 = *(int32_t *)(g23 - 0x7698);
	g33 = a2;
	g32 = a4;
	g34 = a3;
	int32_t v1 = function_c9948();                       // 0x6c818
	int32_t v2 = g35;                                    // 0x6c824
	int32_t v3 = *(int32_t *)(v2 + 4 * g33);             // 0x6c824
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x7804); // 0x6c828
	int32_t v5 = g32;                                    // 0x6c838
	g33 = *(int32_t *)(v2 + 836) + v4;
	g35 = v4 + v3 + g31;
	g32 = *(int32_t *)(v2 + 1876) + v4;
	int32_t v6;                               // bp-40
	int32_t v7 = function_4d7c4(v1, v5, &v6); // 0x6c84c
	int32_t v8 = g35;                         // r5
	int32_t v9 = g35;                         // 0x6c8704
	int32_t v10 = v7;                         // 0x6c8601
	                                          // branch -> 0x6c85c
lab_0x6c85c:
	while (true) {
		int32_t v11 = 22;  // 0x6c880
		int32_t v12 = v9;  // 0x6c91c
		int32_t v13 = v10; // 0x6c860
		// branch -> 0x6c860
		while (true) {
			char v14 = *(char *)v13; // 0x6c860
			int32_t v15 = v13 + 1;   // 0x6c864
			int32_t v16 = v15;       // r3
			int32_t v17 = v14;       // 0x6c868
			int32_t v18;             // 0x6c920
			int32_t v19;             // 0x6c92c
			if (v14 > -1) {
				int32_t v20 = v11 - v17; // r8
				int32_t v21;             // 0x6c8706
				if (v12 >= g33) {
					// 0x6c888
					if (v12 <= g32) {
						int32_t v22 = v17; // r4
						v21 = v12;
						if (v14 != 0) {
							int32_t v23 = __asm_rlwinm_(v17, 29, 3, 31); // 0x6c89c
							int32_t v24 = v23;                           // ctr
							int32_t v25;                                 // 0x6c8fc
							int32_t v26;
							if (v23 == 0) {
								// 0x6c89c
								v26 = v8;
								v25 = v22;
								// branch -> 0x6c8fc
							lab_0x6c8fc:;
								int32_t v27 = v16; // 0x6c900
								v16 = v27 + 1;
								*(char *)v26 = *(char *)v27;
								int32_t v28 = v8 + 1; // 0x6c90c
								v8 = v28;
								int32_t v29 = v25 - 1; // 0x6c910
								v21 = v28;
								// branch -> 0x6c900
								while (v29 != 0) {
									// 0x6c900
									v27 = v16;
									v16 = v27 + 1;
									*(char *)v28 = *(char *)v27;
									v28 = v8 + 1;
									v8 = v28;
									v29--;
									v21 = v28;
									// continue -> 0x6c900
								}
							lab_0x6c920:
								// 0x6c920
								v19 = v21;
								v18 = v20;
								// branch -> 0x6c920
							lab_0x6c920_5:
								// 0x6c920
								if (v18 == 0) {
								lab_0x6c928:;
									int32_t v30 = v16;       // 0x6c928
									int32_t v31 = v19 - 790; // 0x6c92c
									v8 = v31;
									if (v6 + v7 == v30) {
										// break (via goto) -> 0x6c934
										goto lab_0x6c934;
									}
									v9 = v31;
									v10 = v30;
									// continue (via goto) -> 0x6c85c
									goto lab_0x6c85c;
								} else {
								lab_0x6c920_6:
									// 0x6c920
									v11 = v18;
									v12 = v19;
									v13 = v16;
									// branch -> 0x6c860
									continue;
								}
							} else {
								// 0x6c8a8
								*(char *)v8 = *(char *)v16;
								*(char *)(v8 + 1) = *(char *)(v16 + 1);
								*(char *)(v8 + 2) = *(char *)(v16 + 2);
								*(char *)(v8 + 3) = *(char *)(v16 + 3);
								*(char *)(v8 + 4) = *(char *)(v16 + 4);
								*(char *)(v8 + 5) = *(char *)(v16 + 5);
								*(char *)(v8 + 6) = *(char *)(v16 + 6);
								int32_t v32 = v16; // 0x6c8e0
								v16 = v32 + 8;
								*(char *)(v8 + 7) = *(char *)(v32 + 7);
								int32_t v33 = v8 + 8; // 0x6c8ec
								v8 = v33;
								int32_t v34 = v24 - 1; // 0x6c8f0
								// branch -> 0x6c8a8
								while (v34 != 0) {
									// 0x6c8a8
									*(char *)v33 = *(char *)v16;
									*(char *)(v8 + 1) = *(char *)(v16 + 1);
									*(char *)(v8 + 2) = *(char *)(v16 + 2);
									*(char *)(v8 + 3) = *(char *)(v16 + 3);
									*(char *)(v8 + 4) = *(char *)(v16 + 4);
									*(char *)(v8 + 5) = *(char *)(v16 + 5);
									*(char *)(v8 + 6) = *(char *)(v16 + 6);
									v32 = v16;
									v16 = v32 + 8;
									*(char *)(v8 + 7) = *(char *)(v32 + 7);
									v33 = v8 + 8;
									v8 = v33;
									v34--;
									// continue -> 0x6c8a8
								}
								int32_t v35 = v22 % 8; // 0x6c8f4
								if (v35 == 0) {
									v21 = v33;
									goto lab_0x6c920;
								}
								v26 = v33;
								v25 = v35;
								goto lab_0x6c8fc;
							}
							int32_t v36 = v20;
							v19 = v21;
							v18 = v36;
							// branch -> 0x6c920
							goto lab_0x6c920_5;
						}
					lab_0x6c920_4:
						// 0x6c920
						v19 = v21;
						v18 = v20;
						// branch -> 0x6c920
						goto lab_0x6c920_5;
					}
				}
				// 0x6c918
				v16 = v17 + v15;
				int32_t v37 = v17 + v12; // 0x6c91c
				v8 = v37;
				v21 = v37;
				// branch -> 0x6c920
				goto lab_0x6c920_4;
			} else {
				int32_t v38 = v12 - v17; // 0x6c870
				v8 = v38;
				v19 = v38;
				v18 = v17 + v11;
				// branch -> 0x6c920
				goto lab_0x6c920_5;
			}
			// 0x6c920
			if (v18 == 0) {
				goto lab_0x6c928;
			}
			goto lab_0x6c920_6;
		}
	}
lab_0x6c934:;
	int32_t result = function_c9acc(g36); // 0x6c938
	return result;
}

// Address range: 0x6c950 - 0x6cba8
int32_t DrawQText(void)
{
	int32_t v1 = g10; // 0x6c954
	DrawQTextBack();
	int32_t v2 = *(int32_t *)(g23 - 0x4dd0); // 0x6c974
	g30 = v2;
	int32_t v3;       // bp-184
	int32_t v4 = &v3; // 0x6c978
	g36 = v4;
	g27 = *(int32_t *)(g23 - 0x4dd4);
	g29 = 0;
	g28 = 112;
	g26 = 0;
	// branch -> 0x6c990
	while (true) {
		int32_t v5 = v2;       // r5
		int32_t result3 = 0;   // r3
		int32_t v6 = 0;        // r6
		char v7 = *(char *)v2; // 0x6c9d43
		int32_t v8 = 0;        // 0x6c9f8
		int32_t v9;            // r4
		int32_t v10;           // 0x6c9f8
		char v11;              // 0x6ca04
		if (v7 != 10) {
			int32_t v12 = 0;  // 0x6c9cc
			int32_t v13 = 0;  // 0x6c9ec
			int32_t v14 = v7; // 0x6c9e4
			while (true) {
				// 0x6c9e4
				if (v14 != 124) {
					// 0x6c9ec
					if (v13 < 543) {
						int32_t v15 = v2 + 1; // 0x6c9a4
						v5 = v15;
						unsigned char v16 = *(char *)(g33 + (int32_t) * (char *)v2); // 0x6c9a8
						int32_t v17 = v16;                                           // r0
						int32_t v18;                                                 // 0x6c9d0
						int32_t v19;                                                 // 0x6c9ec28
						if (v16 == 0) {
							v18 = v12 - 1;
							v19 = v13;
							// branch -> 0x6c9d0
						} else {
							// 0x6c9b4
							*(char *)(g36 + v12) = v16;
							int32_t v20 = (int32_t) * (char *)(v17 + g32);               // 0x6c9b8
							int32_t v21 = (int32_t) * (char *)(g31 + v20) + 2 + result3; // 0x6c9c4
							result3 = v21;
							v15 = v5;
							v18 = v6;
							v19 = v21;
							// branch -> 0x6c9d0
						}
						int32_t v22 = v18 + 1; // 0x6c9d0
						v6 = v22;
						char v23 = *(char *)v15; // 0x6c9d4
						if (v23 == 10) {
							v8 = v22;
							// break -> 0x6c9f4
							break;
						}
						v12 = v22;
						v2 = v15;
						v13 = v19;
						v14 = v23;
						// continue -> 0x6c9e4
						continue;
					} else {
						v8 = v12;
					}
				} else {
					v8 = v12;
				}
				// 0x6c9f4
				v10 = v8 + v4;
				v9 = v10;
				result3 = 0;
				*(char *)v10 = 0;
				v11 = *(char *)v5;
				int32_t v24;       // 0x6ca8838
				int32_t v25;       // 0x6ca58
				unsigned char v26; // 0x6ca9417
				int32_t v27;       // 0x6ca9418
				if (v11 == 124) {
				lab_0x6ca14:
					// 0x6ca14
					*(char *)v9 = (char)result3;
					g26 = 1;
					// branch -> 0x6ca4c
				} else {
				lab_0x6ca20:
					// 0x6ca20
					if (v11 != 10) {
						int32_t v28 = v9; // 0x6ca388
						if (*(char *)v28 != 32) {
							int32_t v29 = v6; // 0x6ca44
							// branch -> 0x6ca44
							while (true) {
								// 0x6ca44
								if (v29 > 0) {
									// 0x6ca2c
									*(char *)v28 = (char)result3;
									int32_t v30 = v9 - 1; // 0x6ca30
									v9 = v30;
									int32_t v31 = v6 - 1; // 0x6ca34
									v6 = v31;
									if (*(char *)v30 == 32) {
										// break -> 0x6ca4c
										break;
									}
									v28 = v30;
									v29 = v31;
									// continue -> 0x6ca44
									continue;
								}
							}
							// 0x6ca4c
							g25 = v4;
							v26 = *(char *)&v3;
							v27 = v26;
							g34 = v27;
							if (v26 != 0) {
								v24 = v4;
								v25 = v27;
							lab_0x6ca54:
								while (true) {
									int32_t v32 = g30;     // 0x6ca54
									int32_t v33 = v32 + 1; // 0x6ca54
									g30 = v33;
									unsigned char v34 = *(char *)(g32 + (int32_t) * (char *)(g33 + v25)); // 0x6ca60
									int32_t v35 = v34;                                                    // 0x6ca60
									g24 = v35;
									if (*(char *)v33 == 10) {
										// 0x6ca68
										g30 = v32 + 2;
										// branch -> 0x6ca6c
									}
									// 0x6ca6c
									v6 = v35;
									int32_t v36 = v24; // 0x6ca88
									int32_t v37 = 0;   // 0x6ca84
									if (v34 != 0) {
										int32_t v38 = *(int32_t *)(g23 - 0x4dc8); // 0x6ca74
										v5 = v38;
										function_6c7f0(g28, g27, v38, v35);
										v36 = g25;
										v37 = g24;
										// branch -> 0x6ca84
									}
									int32_t v39 = v36 + 1; // 0x6ca88
									g25 = v39;
									g28 += (int32_t) * (char *)(g31 + v37) + 2;
									unsigned char v40 = *(char *)v39; // 0x6ca94
									int32_t v41 = v40;                // 0x6ca94
									g34 = v41;
									if (v40 == 0) {
										// break -> 0x6caa0
										break;
									}
									v24 = v39;
									v25 = v41;
									// continue -> 0x6ca54
								}
								// 0x6caa0
								if (g29 == 0) {
								lab_0x6caa8:
									// 0x6caa8
									g29 = g30;
									// branch -> 0x6caac
								}
							lab_0x6caac:;
								int32_t v42 = g27 + 38; // 0x6caac
								g27 = v42;
								g28 = 112;
								int32_t v43;
								if (v42 < 502) {
									// 0x6cac0
									v43 = g26;
									// branch -> 0x6cac0
								} else {
									// 0x6cabc
									g26 = 1;
									v43 = 1;
									// branch -> 0x6cac0
								}
								// 0x6cac0
								if (v43 == 0) {
									// 0x6cac0
									// branch -> 0x6c990
									break;
								}
								// 0x6cac8
								result3 = GetTickCount();
								// branch -> 0x6cad8
								while (true) {
									// 0x6cad8
									if (*(int32_t *)g35 > 0) {
										int32_t *v44 = (int32_t *)(g23 - 0x4dd8); // 0x6cb04
										*v44 = *v44 - 1;
										if (*(int32_t *)(g23 - 0x4dd8) != 0) {
											int32_t *v45 = (int32_t *)(g23 - 0x4dd4); // 0x6cb1c
											*v45 = *v45 - 1;
											// branch -> 0x6cb28
										}
									} else {
										int32_t *v46 = (int32_t *)(g23 - 0x4dd4); // 0x6cae4
										*v46 = *v46 - 1;
										int32_t *v47 = (int32_t *)(g23 - 0x4dd4); // 0x6caf0
										*v47 = *(int32_t *)g35 + *v47;
										// branch -> 0x6cb28
									}
									int32_t *v48 = (int32_t *)(g23 - 0x4dd8); // 0x6cb28
									int32_t v49 = g23;                        // 0x6cb78
									if (*v48 == 0) {
										// 0x6cb34
										*v48 = *(int32_t *)g35;
										v49 = g23;
										// branch -> 0x6cb3c
									}
									int32_t v50 = *(int32_t *)(v49 - 0x4dd4); // 0x6cb3c
									v9 = v50;
									int32_t result2; // 0x6cb54
									if (v50 > 209) {
										int32_t *v51 = (int32_t *)(v49 - 0x4ddc); // 0x6cb78
										*v51 = *v51 + 50;
										if (result3 - *(int32_t *)(g23 - 0x4ddc) >= 0x7fffffff) {
											// break -> 0x6cb94
											break;
										}
										// continue -> 0x6cad8
										continue;
									} else {
										// 0x6cb48
										*(int32_t *)(v49 - 0x4dd0) = g29;
										*(int32_t *)(g23 - 0x4dd4) = v9 + 38;
										result2 = *(int32_t *)(g23 - 0x4dd0);
										if (*(char *)result2 == 124) {
											int32_t v52 = *(int32_t *)(g23 - 0x7730); // 0x6cb64
											g34 = v52;
											*(char *)v52 = 0;
											int32_t result = function_6c704(); // 0x6cb70
											// branch -> 0x6cb94
											// 0x6cb94
											g10 = v1;
											return result;
										}
									}
									// 0x6cb94
									g10 = v1;
									return result2;
								}
								// 0x6cb94
								// branch -> 0x6cb94
								// 0x6cb94
								g10 = v1;
								return result3;
							}
						lab_0x6caa0:
							// 0x6caa0
							if (g29 == 0) {
								goto lab_0x6caa8;
							}
							goto lab_0x6caac;
						}
					}
				}
				// 0x6ca4c
				g25 = v4;
				v26 = *(char *)&v3;
				v27 = v26;
				g34 = v27;
				if (v26 == 0) {
					goto lab_0x6caa0;
				}
				v24 = v4;
				v25 = v27;
				goto lab_0x6ca54;
			}
		}
		// 0x6c9f4
		v10 = v8 + v4;
		v9 = v10;
		result3 = 0;
		*(char *)v10 = 0;
		v11 = *(char *)v5;
		if (v11 == 124) {
			goto lab_0x6ca14;
		}
		goto lab_0x6ca20;
	}
}
