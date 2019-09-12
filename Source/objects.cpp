
// Address range: 0x92610 - 0x927b4
int32_t InitObjectGFX(int32_t a1)
{
	// 0x92610
	g29 = *(int32_t *)(g23 - 0x5b04);
	g30 = *(int32_t *)(g23 - 0x5b00);
	g31 = *(int32_t *)(g23 - 0x6fd8);
	int32_t v1 = *(int32_t *)(g23 - 0x6fcc); // r29
	g35 = *(int32_t *)(g23 - 0x77e4);
	int32_t v2;       // bp-88
	int32_t v3 = &v2; // 0x9263c
	g34 = v3;
	memset();
	int32_t v4;
	int32_t v5 = *(int32_t *)(v4 - 0x6fc8); // 0x92648
	int32_t v6 = v5;                        // r24
	g36 = v3;
	unsigned char v7 = *(char *)v5; // 0x9271c3
	int32_t v8;                     // r28
	int32_t result;                 // r3
	int32_t v9;                     // 0x92740
	int32_t v10;                    // 0x92750
	int32_t v11;                    // 0x9278c
	int32_t v12;                    // 0x92790
	int32_t v13;                    // 0x92798
	int32_t v14;                    // 0x92730
	if (v7 != -1) {
		int32_t v15 = v7; // 0x92654
	lab_0x92654:
		while (true) {
			int32_t v16 = v5; // 0x926ac
			if (0x1000000 * v15 == 0x1000000) {
				uint32_t v17 = (int32_t) * (char *)g35; // 0x92664
				if (v17 >= (int32_t) * (char *)(v5 + 2)) {
					// 0x92674
					if (v17 <= (int32_t) * (char *)(v5 + 3)) {
						// 0x92684
						*(char *)(g36 + (int32_t) * (char *)(v5 + 1)) = 1;
						v16 = v6;
						// branch -> 0x92694
					} else {
						v16 = v5;
					}
				} else {
					v16 = v5;
				}
			}
			unsigned char v18 = *(char *)(v16 + 5); // 0x92694
			int32_t v19 = v18;                      // 0x92698
			char v20;                               // 0x926e8
			if (v18 != -1) {
				int32_t v21 = *(int32_t *)*(int32_t *)(g23 - 0x6fd0); // 0x926a4
				int32_t v22 = v21;                                    // ctr
				int32_t v23 = (int32_t) * (char *)(v16 + 1) + v3;     // r6
				if (v21 >= 1) {
					while (true) {
						int32_t v24 = v21; // 0x926e4
						if ((int32_t) * (char *)v1 == v19) {
							// 0x926dc
							*(char *)v23 = (char)1;
							v24 = v22;
							// branch -> 0x926e0
						}
						int32_t v25 = v1 + 8; // 0x926e0
						v1 = v25;
						int32_t v26 = v24 - 1; // 0x926e4
						v22 = v26;
						if (v26 == 0) {
							// 0x926e8
							// branch -> 0x926e8
							// 0x926e8
							v20 = *(char *)(v6 + 6);
							if (v20 != -1) {
							lab_0x926f8:
								// 0x926f8
								if (QuestStatus((int32_t)v20) != 0) {
									// 0x92708
									*(char *)(g36 + (int32_t) * (char *)(v6 + 1)) = 1;
									// branch -> 0x92718
								}
							}
						lab_0x92718:;
							int32_t v27 = v6 + 44; // 0x92718
							v6 = v27;
							unsigned char v28 = *(char *)v27; // 0x9271c
							if (v28 == -1) {
								// break (via goto) -> 0x9271c
								goto lab_0x9271c;
							}
							v5 = v27;
							v15 = v28;
							// continue (via goto) -> 0x92654
							goto lab_0x92654;
						} else {
							// 0x926e0
							v21 = v26;
							v1 = v25;
							// branch -> 0x926cc
							continue;
						}
					}
				lab_0x9271c:
					// 0x9271c
					// branch -> 0x9272c
					// 0x9272c
					g33 = 0;
					v14 = *(int32_t *)(g23 - 0x6fd4);
					result = v14;
					g28 = v3;
					v8 = v14;
					int32_t v29 = v14; // 0x9279022
					v10 = 0;
					v9 = v3;
					// branch -> 0x92740
					while (true) {
						// 0x92740
						v13 = v9;
						v12 = v29;
						v11 = v10;
						if (*(char *)v9 != 0) {
						lab_0x9274c:;
							int32_t v30 = *(int32_t *)(g23 - 0x4cc8); // 0x9274c
							g37 = g30;
							*(char *)(g31 + v30) = (char)(0x1000000 * v10 / 0x1000000);
							g38 = *(int32_t *)v8;
							sprintf();
							int32_t v31;                                      // bp-120
							int32_t v32 = LoadFileInMem((int32_t)&v31, NULL); // 0x92770
							*(int32_t *)(g29 + 4 * *(int32_t *)(g23 - 0x4cc8)) = v32;
							int32_t *v33 = (int32_t *)(g23 - 0x4cc8); // 0x92780
							int32_t v34 = *v33;                       // 0x92780
							result = v34;
							*v33 = v34 + 1;
							v13 = g28;
							v12 = g32;
							v11 = g33;
							// branch -> 0x9278c
						}
					lab_0x9278c:;
						int32_t v35 = v11 + 1; // 0x9278c
						g33 = v35;
						int32_t v36 = v12 + 4; // 0x92790
						v8 = v36;
						int32_t v37 = v13 + 1; // 0x92798
						g28 = v37;
						if (v35 >= 56) {
							// break -> 0x927a0
							break;
						}
						v29 = v36;
						v10 = v35;
						v9 = v37;
						// continue -> 0x92740
					}
					// 0x927a0
					return result;
				}
			}
			// 0x926e8
			v20 = *(char *)(v16 + 6);
			if (v20 == -1) {
				goto lab_0x92718;
			}
			goto lab_0x926f8;
		}
	}
	// 0x9272c
	g33 = 0;
	v14 = *(int32_t *)(v4 - 0x6fd4);
	result = v14;
	g28 = v3;
	v8 = v14;
	v10 = 0;
	v9 = v3;
	// branch -> 0x92740
	while (true) {
		// 0x92740
		if (*(char *)v9 == 0) {
			v13 = v9;
			v12 = v14;
			v11 = v10;
			goto lab_0x9278c;
		}
		goto lab_0x9274c;
	}
}

// Address range: 0x927b4 - 0x92818
int32_t FreeObjectGFX(int32_t a1)
{
	int32_t v1 = g36;                            // 0x927b4
	int32_t v2 = g10;                            // 0x927b8
	int32_t result = *(int32_t *)(g23 - 0x5b04); // 0x927bc
	g36 = result;
	if (*(int32_t *)(g23 - 0x4cc8) <= 0) {
		// 0x927f8
		*(int32_t *)(g23 - 0x4cc8) = 0;
		g36 = v1;
		g10 = v2;
		return result;
	}
	int32_t result2 = MemFreeDbg((int32_t *)result); // r3
	int32_t v3 = g36 + 4;                            // 0x927e4
	g36 = v3;
	int32_t v4 = 1; // 0x927e8
	while (v4 < *(int32_t *)(g23 - 0x4cc8)) {
		// 0x927dc
		result2 = MemFreeDbg((int32_t *)v3);
		v3 = g36 + 4;
		g36 = v3;
		v4++;
		// continue -> 0x927dc
	}
	// 0x927f8
	*(int32_t *)(g23 - 0x4cc8) = 0;
	g36 = v1;
	g10 = v2;
	return result2;
}

// Address range: 0x92818 - 0x928f0
int32_t function_92818(int32_t a1, int32_t a2)
{
	// 0x92818
	g37 = a2;
	int32_t v1 = 2 * a2 + 224 * a1; // 0x92828
	g38 = v1;
	if (*(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x767c) + v1) != 0) {
		// 0x92838
		return 0;
	}
	int32_t v2 = 112 * a1 + a2; // 0x9284c
	g37 = v2;
	if (*(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7680) + v2) != 0 || *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7684) + v2) != 0) {
		// 0x9285c
		return 0;
	}
	unsigned char v3 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x779c) + v2); // 0x92888
	if (__asm_rlwinm_((int32_t)v3, 0, 28, 28) != 0) {
		// 0x92894
		return 0;
	}
	int32_t v4 = *(int32_t *)(g23 - 0x722c); // 0x928a0
	g37 = v4;
	uint16_t v5 = *(int16_t *)(g38 + *(int32_t *)*(int32_t *)(g23 - 0x757c)); // 0x928a8
	int32_t v6 = v5;                                                          // 0x928a8
	g38 = v6;
	if (*(char *)(v6 + v4) != 0) {
		// 0x928b8
		return 0;
	}
	// 0x928c0
	if (*(char *)*(int32_t *)(g23 - 0x7794) != 1 || v5 < 127) {
		// 0x928e8
		return 1;
	}
	// 0x928d8
	if (v5 <= 143) {
		// 0x928e0
		return 0;
	}
	// 0x928e8
	return 1;
}

// Address range: 0x928f0 - 0x92a24
int32_t function_928f0(int32_t a1, int32_t a2, int32_t a3)
{
	g31 = a3;
	g37 = a2 - a1;
	int32_t result = random(-117); // 0x92910
	int32_t v1 = a1 + result;      // 0x92914
	g33 = v1;
	g32 = 0;
	int32_t v2; // r30
	if (v1 > 0) {
	lab_0x92920_9:
		while (true) {
			// 0x92920
			// branch -> 0x92920
		lab_0x92920_8:
			while (true) {
				// 0x92920
				g37 = 80;
				g36 = random(-117) + 16;
				g37 = 80;
				int32_t v3 = random(-117); // 0x92938
				v2 = v3 + 16;
				if (function_92818(g36 - 1, v3 + 15) != 0) {
					// break -> 0x92954
					break;
				}
				// continue -> 0x92920
			}
			// 0x92954
			if (function_92818(g36, v2 - 1) != 0) {
				// break (via goto) -> 0x92968
				goto lab_0x92968;
			}
			// continue (via goto) -> 0x92920
			goto lab_0x92920_8;
		}
	lab_0x92968:
		// 0x92968
		if (function_92818(g36 + 1, v2 - 1) != 0) {
			// break (via goto) -> 0x9297c
			goto lab_0x9297c;
		}
		// continue (via goto) -> 0x92920
		goto lab_0x92920_8;
	}
lab_0x92a10:
	// 0x92a10
	return result;
lab_0x9297c:
	// 0x9297c
	if (function_92818(g36 - 1, v2) != 0) {
		// break (via goto) -> 0x92990
		goto lab_0x92990;
	}
	// continue (via goto) -> 0x92920
	goto lab_0x92920_8;
lab_0x92990:
	// 0x92990
	if (function_92818(g36, v2) != 0) {
		// break (via goto) -> 0x929a4
		goto lab_0x929a4;
	}
	// continue (via goto) -> 0x92920
	goto lab_0x92920_8;
lab_0x929a4:
	// 0x929a4
	if (function_92818(g36 + 1, v2) != 0) {
		// break (via goto) -> 0x929b8
		goto lab_0x929b8;
	}
	// continue (via goto) -> 0x92920
	goto lab_0x92920_8;
lab_0x929b8:
	// 0x929b8
	if (function_92818(g36 - 1, v2 + 1) != 0) {
		// break (via goto) -> 0x929cc
		goto lab_0x929cc;
	}
	// continue (via goto) -> 0x92920
	goto lab_0x92920_8;
lab_0x929cc:
	// 0x929cc
	if (function_92818(g36, v2 + 1) != 0) {
		// break (via goto) -> 0x929e0
		goto lab_0x929e0;
	}
	// continue (via goto) -> 0x92920
	goto lab_0x92920_8;
lab_0x929e0:
	// 0x929e0
	if (function_92818(g36 + 1, v2 + 1) != 0) {
		// break (via goto) -> 0x929f4
		goto lab_0x929f4;
	}
	// continue (via goto) -> 0x92920
	goto lab_0x92920_8;
lab_0x929f4:;
	int32_t v4 = AddObject(g31, g36, v2); // 0x92a00
	int32_t v5 = g32 + 1;                      // 0x92a04
	g32 = v5;
	if (v5 >= g33) {
		result = v4;
		// break (via goto) -> 0x92a10
		goto lab_0x92a10;
	}
	// continue (via goto) -> 0x92920
	goto lab_0x92920_9;
}

// Address range: 0x92a24 - 0x92b94
int32_t function_92a24(int32_t a1, int32_t a2, int32_t a3)
{
	g31 = a3;
	g37 = a2 - a1;
	int32_t result = random(-116); // 0x92a44
	int32_t v1 = a1 + result;      // 0x92a48
	g33 = v1;
	g32 = 0;
	int32_t v2; // r30
	if (v1 > 0) {
	lab_0x92a54_12:
		while (true) {
			// 0x92a54
			// branch -> 0x92a54
		lab_0x92a54_11:
			while (true) {
				// 0x92a54
				g37 = 80;
				g36 = random(-116) + 16;
				g37 = 80;
				int32_t v3 = random(-116); // 0x92a6c
				v2 = v3 + 16;
				if (function_92818(g36 - 1, v3 + 14) != 0) {
					// break -> 0x92a88
					break;
				}
				// continue -> 0x92a54
			}
			// 0x92a88
			if (function_92818(g36, v2 - 2) != 0) {
				// break (via goto) -> 0x92a9c
				goto lab_0x92a9c;
			}
			// continue (via goto) -> 0x92a54
			goto lab_0x92a54_11;
		}
	lab_0x92a9c:
		// 0x92a9c
		if (function_92818(g36 + 1, v2 - 2) != 0) {
			// break (via goto) -> 0x92ab0
			goto lab_0x92ab0;
		}
		// continue (via goto) -> 0x92a54
		goto lab_0x92a54_11;
	}
lab_0x92b80:
	// 0x92b80
	return result;
lab_0x92ab0:
	// 0x92ab0
	if (function_92818(g36 - 1, v2 - 1) != 0) {
		// break (via goto) -> 0x92ac4
		goto lab_0x92ac4;
	}
	// continue (via goto) -> 0x92a54
	goto lab_0x92a54_11;
lab_0x92ac4:
	// 0x92ac4
	if (function_92818(g36, v2 - 1) != 0) {
		// break (via goto) -> 0x92ad8
		goto lab_0x92ad8;
	}
	// continue (via goto) -> 0x92a54
	goto lab_0x92a54_11;
lab_0x92ad8:
	// 0x92ad8
	if (function_92818(g36 + 1, v2 - 1) != 0) {
		// break (via goto) -> 0x92aec
		goto lab_0x92aec;
	}
	// continue (via goto) -> 0x92a54
	goto lab_0x92a54_11;
lab_0x92aec:
	// 0x92aec
	if (function_92818(g36 - 1, v2) != 0) {
		// break (via goto) -> 0x92b00
		goto lab_0x92b00;
	}
	// continue (via goto) -> 0x92a54
	goto lab_0x92a54_11;
lab_0x92b00:
	// 0x92b00
	if (function_92818(g36, v2) != 0) {
		// break (via goto) -> 0x92b14
		goto lab_0x92b14;
	}
	// continue (via goto) -> 0x92a54
	goto lab_0x92a54_11;
lab_0x92b14:
	// 0x92b14
	if (function_92818(g36 + 1, v2) != 0) {
		// break (via goto) -> 0x92b28
		goto lab_0x92b28;
	}
	// continue (via goto) -> 0x92a54
	goto lab_0x92a54_11;
lab_0x92b28:
	// 0x92b28
	if (function_92818(g36 - 1, v2 + 1) != 0) {
		// break (via goto) -> 0x92b3c
		goto lab_0x92b3c;
	}
	// continue (via goto) -> 0x92a54
	goto lab_0x92a54_11;
lab_0x92b3c:
	// 0x92b3c
	if (function_92818(g36, v2 + 1) != 0) {
		// break (via goto) -> 0x92b50
		goto lab_0x92b50;
	}
	// continue (via goto) -> 0x92a54
	goto lab_0x92a54_11;
lab_0x92b50:
	// 0x92b50
	if (function_92818(g36 + 1, v2 + 1) != 0) {
		// break (via goto) -> 0x92b64
		goto lab_0x92b64;
	}
	// continue (via goto) -> 0x92a54
	goto lab_0x92a54_11;
lab_0x92b64:;
	int32_t v4 = AddObject(g31, g36, v2); // 0x92b70
	int32_t v5 = g32 + 1;                      // 0x92b74
	g32 = v5;
	if (v5 >= g33) {
		result = v4;
		// break (via goto) -> 0x92b80
		goto lab_0x92b80;
	}
	// continue (via goto) -> 0x92a54
	goto lab_0x92a54_12;
}

// Address range: 0x92b94 - 0x92c7c
int32_t function_92b94(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x92b94
	g26 = a3;
	g37 = a2 - a1;
	int32_t result = random(-117); // 0x92bb4
	int32_t v1 = a1 + result;      // 0x92bb8
	int32_t v2 = 0;                // r23
	if (v1 > 0) {
	lab_0x92bc4:
		while (true) {
			int32_t v3 = 0; // r26
			                // branch -> 0x92bd0
		lab_0x92bd0:
			while (true) {
				int32_t v4 = 1; // r25
				g37 = 80;
				int32_t v5 = random(-117) + 16; // r30
				g37 = 80;
				int32_t v6 = random(-117) + 16; // 0x92bf0
				int32_t v7 = -2;                // r27
				int32_t v8 = -2;                // 0x92bfc
				// branch -> 0x92bf8
				while (true) {
					int32_t v9 = -2;       // r28
					int32_t v10 = v6 + v8; // 0x92bfc
					g36 = v10;
					int32_t v11 = -2; // 0x92c00
					// branch -> 0x92c00
					while (true) {
						int32_t v12 = function_92818(v5 + v11, v10); // 0x92c08
						if (v12 == 0) {
							// 0x92c14
							v4 = 0;
							// branch -> 0x92c18
						}
						int32_t v13 = v9 + 1; // 0x92c18
						v9 = v13;
						if (v13 >= 3) {
							int32_t v14 = v7 + 1; // 0x92c24
							v7 = v14;
							if (v14 < 3) {
								// 0x92c24
								v8 = v14;
								// branch -> 0x92bf8
								break;
							}
							// 0x92c30
							if (v4 == 0) {
								int32_t v15 = v3 + 1; // 0x92c38
								v3 = v15;
								if (v15 > 20000) {
									result = v12;
									// break (via goto) -> 0x92c68
									goto lab_0x92c68_2;
								}
								// continue (via goto) -> 0x92bd0
								goto lab_0x92bd0;
							} else {
								int32_t v16 = AddObject(g26, v5, v6); // 0x92c58
								int32_t v17 = v2 + 1;                      // 0x92c5c
								v2 = v17;
								if (v17 >= v1) {
									result = v16;
									// break (via goto) -> 0x92c68
									goto lab_0x92c68_2;
								}
								// continue (via goto) -> 0x92bc4
								goto lab_0x92bc4;
							}
							// 0x92c68
							int32_t v18; // 0x92b9c
							g10 = v18;
							return result;
						}
						// 0x92c18
						v10 = g36;
						v11 = v13;
						// branch -> 0x92c00
					}
				}
			}
		}
	}
lab_0x92c68_2:
	// 0x92c68
	return result;
}

// Address range: 0x92c7c - 0x92dc0
int32_t function_92c7c(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7190);     // r10
	int32_t v2 = 127;                            // ctr
	int32_t v3 = *(int32_t *)(g23 - 0x7154);     // r9
	int32_t v4 = 0;                              // r31
	int32_t result = *(int32_t *)(g23 - 0x7688); // 0x92c94
	int32_t v5 = 0;                              // 0x92c98
	// branch -> 0x92c98
	while (true) {
		// 0x92c98
		*(int32_t *)(result + 4) = v5;
		*(int32_t *)(result + 8) = v4;
		*(int32_t *)(result + 20) = v4;
		*(int32_t *)(result + 24) = v4;
		*(int32_t *)(result + 28) = v4;
		*(int32_t *)(result + 32) = v4;
		*(int32_t *)(result + 36) = v4;
		*(int32_t *)(result + 48) = v4;
		*(int32_t *)(result + 88) = v4;
		*(int32_t *)(result + 92) = v4;
		*(int32_t *)(result + 96) = v4;
		*(int32_t *)(result + 100) = v4;
		int32_t v6 = result + 120; // 0x92cc8
		int32_t v7 = v2 - 1;       // 0x92ccc
		v2 = v7;
		if (v7 == 0) {
			int32_t v8 = v3; // r11
			*(int32_t *)*(int32_t *)(g23 - 0x7194) = v4;
			int32_t v9 = v1; // r12
			*(int32_t *)v8 = v4;
			int32_t v10 = 0;  // r8
			int32_t v11 = v4; // 0x92cf0
			*(int32_t *)v9 = 0;
			int32_t v12 = v4; // 0x92cfc
			*(int32_t *)(v8 + 4) = v11 + 1;
			int32_t v13 = v4; // 0x92d08
			*(int32_t *)(v9 + 4) = v10;
			v4 += 8;
			*(int32_t *)(v8 + 8) = v11 + 2;
			*(int32_t *)(v9 + 8) = v10;
			*(int32_t *)(v8 + 12) = v12 + 3;
			*(int32_t *)(v9 + 12) = v10;
			*(int32_t *)(v8 + 16) = v12 + 4;
			*(int32_t *)(v9 + 16) = v10;
			*(int32_t *)(v8 + 20) = v13 + 5;
			*(int32_t *)(v9 + 20) = v10;
			*(int32_t *)(v8 + 24) = v13 + 6;
			*(int32_t *)(v9 + 24) = v10;
			*(int32_t *)(v8 + 28) = v13 + 7;
			v8 += 32;
			*(int32_t *)(v9 + 28) = v10;
			v9 += 32;
			int32_t v14 = 14; // 0x92d54
			// branch -> 0x92ce8
			while (v14 != 0) {
				// 0x92ce8
				*(int32_t *)v8 = v4;
				v10 = 0;
				v11 = v4;
				*(int32_t *)v9 = 0;
				v12 = v4;
				*(int32_t *)(v8 + 4) = v11 + 1;
				v13 = v4;
				*(int32_t *)(v9 + 4) = v10;
				v4 += 8;
				*(int32_t *)(v8 + 8) = v11 + 2;
				*(int32_t *)(v9 + 8) = v10;
				*(int32_t *)(v8 + 12) = v12 + 3;
				*(int32_t *)(v9 + 12) = v10;
				*(int32_t *)(v8 + 16) = v12 + 4;
				*(int32_t *)(v9 + 16) = v10;
				*(int32_t *)(v8 + 20) = v13 + 5;
				*(int32_t *)(v9 + 20) = v10;
				*(int32_t *)(v8 + 24) = v13 + 6;
				*(int32_t *)(v9 + 24) = v10;
				*(int32_t *)(v8 + 28) = v13 + 7;
				v8 += 32;
				*(int32_t *)(v9 + 28) = v10;
				v9 += 32;
				v14--;
				// continue -> 0x92ce8
			}
			int32_t v15 = v4;       // 0x92da8
			int32_t v16 = 4 * v15;  // 0x92da8
			int32_t v17 = v3 + v16; // 0x92dac
			result = v17;
			int32_t v18 = v1 + v16; // r4
			v2 = 127 - v15;
			int32_t v19; // 0x92d84
			if (v15 > 126) {
				// 0x92d84
				v19 = g23;
				*(int32_t *)*(int32_t *)(v19 - 0x6fdc) = 1;
				result = *(int32_t *)(g23 - 0x6fe4);
				*(int32_t *)*(int32_t *)(v19 - 0x6fe0) = 0;
				*(int32_t *)result = 1;
				return result;
			}
			while (true) {
				// 0x92d6c
				*(int32_t *)v17 = v4;
				result += 4;
				v4++;
				*(int32_t *)v18 = v10;
				v18 += 4;
				int32_t v20 = v2 - 1; // 0x92d80
				v2 = v20;
				if (v20 == 0) {
					// 0x92d84
					v19 = g23;
					*(int32_t *)*(int32_t *)(v19 - 0x6fdc) = 1;
					result = *(int32_t *)(g23 - 0x6fe4);
					*(int32_t *)*(int32_t *)(v19 - 0x6fe0) = 0;
					*(int32_t *)result = 1;
					return result;
				}
				// 0x92d6c
				v17 = result;
				// branch -> 0x92d6c
			}
		} else {
			// 0x92c98
			result = v6;
			v5 = v4;
			// branch -> 0x92c98
			continue;
		}
	}
}

// Address range: 0x92dc0 - 0x92eec
int32_t function_92dc0(int32_t a1)
{
	// 0x92dc0
	g36 = *(int32_t *)(g23 - 0x757c);
	g32 = 0;
	g33 = 0;
	int32_t v1 = 0; // 0x92dec2
	                // branch -> 0x92ddc
lab_0x92ddc:
	while (true) {
		int32_t v2 = 0;  // 0x92df8
		int32_t v3 = v1; // 0x92dec
		int32_t v4 = 0;  // 0x92de8
		// branch -> 0x92de4
		while (true) {
			int32_t v5 = v4; // 0x92ebc
			int32_t v6 = v2; // 0x92eb8
			if (*(int16_t *)(*(int32_t *)g36 + v4 + v3) == 367) {
				// 0x92df8
				AddObject(36, v2, g32 + 1);
				AddObject(38, g31 + 2, g32 - 1);
				AddObject(37, g31, g32 + 3);
				AddObject(39, g31 + 4, g32 - 1);
				AddObject(40, g31, g32 + 5);
				AddObject(29, g31 + 1, g32 + 3);
				AddObject(30, g31 + 4, g32 + 5);
				AddObject(31, g31 + 2, g32);
				AddObject(32, g31 + 3, g32 + 2);
				AddObject(33, g31 + 2, g32 + 4);
				AddObject(34, g31 + 2, g32 + 1);
				g34 = AddObject(35, g31 + 4, g32 + 2);
				v5 = g35;
				v6 = g31;
				// branch -> 0x92eb8
			}
			int32_t v7 = v6 + 1; // 0x92eb8
			g31 = v7;
			int32_t v8 = v5 + 224; // 0x92ebc
			g35 = v8;
			if (v7 < 112) {
				// 0x92eb8
				v2 = v7;
				v3 = g33;
				v4 = v8;
				// branch -> 0x92de4
				continue;
			} else {
				int32_t v9 = g32 + 1; // 0x92ec8
				g32 = v9;
				int32_t v10 = g33 + 2; // 0x92ecc
				g33 = v10;
				if (v9 >= 112) {
					// break (via goto) -> 0x92ed8
					goto lab_0x92ed8;
				}
				v1 = v10;
				// continue (via goto) -> 0x92ddc
				goto lab_0x92ddc;
			}
		}
	lab_0x92ed8:
		// 0x92ed8
		return g34;
	}
}

// Address range: 0x92eec - 0x92f64
int32_t function_92eec(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7604); // 0x92ef4
	AddObject(87, *(int32_t *)(v1 + 316) - 2, *(int32_t *)(v1 + 320) + 1);
	AddObject(87, g36 + 3, g35 + 1);
	AddObject(87, g36 - 1, g35 + 2);
	int32_t result = AddObject(87, g36 + 2, g35 + 2); // 0x92f48
	return result;
}

// Address range: 0x92f64 - 0x93120
int32_t function_92f64(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8)
{
	int32_t v1 = g10; // 0x92f68
	g35 = *(int32_t *)(g23 - 0x6fe4);
	g36 = *(int32_t *)(g23 - 0x7688);
	g30 = a6;
	g31 = a7;
	g32 = g13;
	g22 = 0;
	g33 = a8;
	// branch -> 0x92fac
lab_0x92fac:
	while (true) {
		// 0x92fac
		g21 = 1;
		g37 = 80;
		g27 = random(-117) + 16;
		g37 = 80;
		int32_t v2 = random(-117) + 16; // 0x92fcc
		g26 = v2;
		g24 = -2;
		int32_t v3 = -2; // 0x92fd8
		// branch -> 0x92fd4
		while (true) {
			// 0x92fd4
			g25 = -2;
			int32_t v4 = v2 + v3; // 0x92fd8
			int32_t v5 = -2;      // 0x92fdc
			// branch -> 0x92fdc
			while (true) {
				// 0x92fdc
				if (function_92818(g27 + v5, v4) == 0) {
					// 0x92ff0
					g21 = 0;
					// branch -> 0x92ff4
				}
				int32_t v6 = g25 + 1; // 0x92ff4
				g25 = v6;
				if (v6 >= 3) {
					int32_t v7 = g24 + 1; // 0x93000
					g24 = v7;
					if (v7 < 3) {
						// 0x93000
						v3 = v7;
						v2 = g26;
						// branch -> 0x92fd4
						break;
					}
					// 0x9300c
					if (g21 == 0) {
						int32_t v8 = g22 + 1; // 0x93014
						g22 = v8;
						if (v8 > 20000) {
							// break (via goto) -> 0x9310c
							goto lab_0x9310c;
						}
						// continue (via goto) -> 0x92fac
						goto lab_0x92fac;
						// 0x9310c
						g10 = v1;
						int32_t result; // 0x9311c
						return result;
					}
					// 0x93028
					if (QuestStatus(8) != 0) {
						// 0x93038
						AddObject(71, g27, g26);
						// branch -> 0x93048
					}
					// 0x93048
					if (QuestStatus(11) != 0) {
						// 0x93058
						AddObject(88, g27, g26);
						// branch -> 0x93068
					}
					// 0x93068
					if (QuestStatus(9) != 0) {
						int32_t v9 = 2 * *(int32_t *)*(int32_t *)(g23 - 0x754c) + 25; // 0x93094
						g27 = v9;
						int32_t v10 = 2 * *(int32_t *)*(int32_t *)(g23 - 0x7550) + 40; // 0x93098
						g26 = v10;
						AddObject(72, v9, v10);
						// branch -> 0x930a8
					}
					int32_t v11 = *(int32_t *)(g23 - 0x7684);                // 0x930ac
					char v12 = *(char *)(g26 + 112 * g27 + *(int32_t *)v11); // 0x930bc
					int32_t v13 = (int32_t)v12 - 1;                          // 0x930cc
					g21 = v13;
					SetObjMapRange(v13, a5, g30, g31, g32, *(int32_t *)g35);
					function_94b50(g21, g33);
					int32_t *v14 = (int32_t *)g35; // 0x930ec
					*v14 = *v14 + 1;
					int32_t v15 = 120 * g21 + g36;            // 0x930fc
					int32_t result2 = *(int32_t *)(v15 + 36); // 0x93100
					*(int32_t *)(v15 + 108) = result2 + 1;
					// branch -> 0x9310c
					// 0x9310c
					g10 = v1;
					return result2;
				}
				// 0x92ff4
				v5 = v6;
				// branch -> 0x92fdc
			}
		}
	}
}

// Address range: 0x93120 - 0x93280
int32_t function_93120(int32_t a1)
{
	// 0x93120
	g35 = *(int32_t *)(g23 - 0x5b0c);
	g36 = *(int32_t *)(g23 - 0x5b08);
	g37 = 5;
	int32_t result = random(-113); // 0x93140
	int32_t v1 = result + 3;       // 0x93144
	g29 = v1;
	g28 = 0;
	if (v1 > 0) {
	lab_0x93150_2:
		while (true) {
			// 0x93150
			g37 = 80;
			g33 = random(-113) + 16;
			g37 = 80;
			int32_t v2 = random(-113) + 16; // 0x9316c
			int32_t v3 = v2;                // r28
			// branch -> 0x93150
			while (function_92818(g33, v2) == 0) {
				// 0x93150
				g37 = 80;
				g33 = random(-113) + 16;
				g37 = 80;
				v2 = random(-113) + 16;
				v3 = v2;
				// continue -> 0x93150
			}
			// 0x93184
			g37 = 4;
			random(-113);
			AddObject(g33, v3, v3);
			g31 = 1;
			g27 = 1;
			int32_t v4 = 1; // 0x93248
			// branch -> 0x93244
			int32_t v5; // 0x93124
			while (true) {
				// 0x93244
				g37 = v4 / 2 | v4 & -0x80000000;
				int32_t v6 = random(-113); // 0x9324c
				int32_t v7 = v6;
				int32_t v8; // 0x93260
				if (v6 == 0) {
				lab_0x93258:
					// 0x93258
					if (g27 != 0) {
						// 0x931bc
						g30 = 0;
						g27 = 0;
						int32_t v9 = 0; // 0x93204
						// branch -> 0x93204
						while (true) {
							// 0x93204
							if (v9 < 3) {
								// 0x931c8
								g37 = 8;
								int32_t v10 = 4 * random(-113);              // 0x931d4
								int32_t v11 = g33 + *(int32_t *)(g36 + v10); // 0x931e0
								g33 = v11;
								int32_t v12 = g32 + *(int32_t *)(g35 + v10); // 0x931e4
								g32 = v12;
								int32_t v13 = function_92818(v11, v12); // 0x931f0
								g27 = v13;
								int32_t v14 = g30 + 1; // 0x931f8
								g30 = v14;
								if (v13 != 0) {
									// break -> 0x9320c
									break;
								}
								v9 = v14;
								// continue -> 0x93204
								continue;
							}
							// 0x9320c
							// branch -> 0x93244
							break;
							while (true) {
								// 0x93244
								g37 = v4 / 2 | v4 & -0x80000000;
								v6 = random(-113);
								if (v6 == 0) {
									goto lab_0x93258;
								}
								v7 = v6;
								int32_t v15 = g28; // 0x93260
								v8 = v15 + 1;
								g28 = v8;
								uint32_t v16 = g29; // 0x93264
								if (v8 >= v16) {
									result = v7;
									// break (via goto) -> 0x9326c
									goto lab_0x9326c_2;
								}
								// continue (via goto) -> 0x93150
								goto lab_0x93150_2;
							}
							// 0x9326c
							g10 = v5;
							return result;
						}
					} else {
						v7 = 0;
					}
				}
				// 0x93260
				v8 = g28 + 1;
				g28 = v8;
				if (v8 >= g29) {
					result = v7;
					// break (via goto) -> 0x9326c
					goto lab_0x9326c_2;
				}
				// continue (via goto) -> 0x93150
				goto lab_0x93150_2;
			}
			// 0x9326c
			g10 = v5;
			return result;
		}
	}
lab_0x9326c_2:
	// 0x9326c
	return result;
}

// Address range: 0x93280 - 0x93358
int32_t AddL1Objs(int32_t result2, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0x93284
	g36 = *(int32_t *)(g23 - 0x757c);
	g27 = result2;
	g28 = a3;
	g29 = a4;
	g30 = a2;
	int32_t v2 = 2 * a2; // 0x9329c
	g33 = v2;
	if (a2 < a4) {
		int32_t v3 = result2; // 0x9335426
		int32_t v4 = result2; // 0x932ac
		while (true) {
			int32_t v5 = 224 * v4; // 0x932ac
			g35 = v5;
			g31 = v4;
			int32_t result = v3; // 0x9335421
			int32_t v6 = v2;     // 0x93334
			int32_t v7 = a3;     // 0x9332c111
			int32_t v8;          // 0x93334
			int32_t v9;          // 0x93338
			if (v4 < a3) {
				int32_t v10 = v3; // 0x9335425
				int32_t v11 = v4; // 0x932cc
				int32_t v12 = v2; // 0x932c0
				int32_t v13;
				while (true) {
					int16_t v14 = *(int16_t *)(*(int32_t *)g36 + v5 + v12); // 0x932c0
					int32_t v15 = v14;                                      // 0x932c0
					g32 = v15;
					int32_t v16 = v10; // 0x9335424
					if (v14 == 270) {
						// 0x932cc
						v16 = AddObject(0, v11, g30);
						v15 = g32;
						// branch -> 0x932dc
					}
					// 0x932dc
					if (v15 != 44) {
						// 0x932e4
						if (v15 != 51) {
							// 0x932ec
							if (v15 != 214) {
							lab_0x93304:;
								// 0x93304
								int32_t v17; // 0x9335422
								if (v15 != 46) {
									// 0x9330c
									if (v15 != 56) {
										v17 = v16;
									lab_0x93324:;
										int32_t v18 = g35 + 224; // 0x93324
										g35 = v18;
										int32_t v19 = g31 + 1; // 0x93328
										g31 = v19;
										int32_t v20 = g28; // 0x9332c
										v13 = g33;
										if (v19 >= v20) {
											result = v17;
											v7 = v20;
											// break -> 0x93334
											break;
										}
										v10 = v17;
										v11 = v19;
										v12 = v13;
										v5 = v18;
										// continue -> 0x932b8
										continue;
									}
								}
								// 0x93314
								v17 = AddObject(2, g31, g30);
								// branch -> 0x93324
								goto lab_0x93324;
							}
						}
					}
					// 0x932f4
					v16 = AddObject(1, g31, g30);
					v15 = g32;
					// branch -> 0x93304
					goto lab_0x93304;
				}
				// 0x93334
				v8 = v13 + 2;
				g33 = v8;
				v9 = g30 + 1;
				g30 = v9;
				if (v9 >= g29) {
					// 0x93344
					g10 = v1;
					return result;
				}
			lab_0x93334:
				// 0x93334
				v3 = result;
				v4 = g27;
				v2 = v8;
				a3 = v7;
				// branch -> 0x932ac
				continue;
			}
			// 0x93334
			v8 = v6 + 2;
			g33 = v8;
			v9 = g30 + 1;
			g30 = v9;
			if (v9 < g29) {
				goto lab_0x93334;
			}
			// 0x93344
			g10 = v1;
			return result;
		}
	}
	// 0x93344
	g10 = v1;
	return result2;
}

// Address range: 0x93358 - 0x93410
int32_t AddL2Objs(int32_t result2, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0x9335c
	g36 = *(int32_t *)(g23 - 0x757c);
	g27 = result2;
	g28 = a3;
	g29 = a4;
	g30 = a2;
	int32_t v2 = 2 * a2; // 0x93374
	g33 = v2;
	if (a2 < a4) {
		int32_t v3 = result2; // 0x9340c24
		int32_t v4 = result2; // 0x93384
		while (true) {
			int32_t v5 = 224 * v4; // 0x93384
			g35 = v5;
			g31 = v4;
			int32_t result = v3; // 0x9340c20
			int32_t v6 = v2;     // 0x933ec
			int32_t v7 = a3;     // 0x933e4111
			int32_t v8;          // 0x933ec
			int32_t v9;          // 0x933f0
			if (v4 < a3) {
				int32_t v10 = v3; // 0x9340c23
				int32_t v11 = v4; // 0x933ac
				int32_t v12 = v2; // 0x93398
				int32_t v13;
				while (true) {
					int16_t v14 = *(int16_t *)(*(int32_t *)g36 + v5 + v12); // 0x93398
					int32_t v15 = v14;                                      // 0x93398
					g32 = v15;
					int32_t v16; // 0x9340c22
					if (v14 != 13) {
						// 0x933a4
						if (v14 != 541) {
							v16 = v10;
						lab_0x933bc:;
							// 0x933bc
							int32_t v17; // 0x9340c21
							if (v15 != 17) {
								// 0x933c4
								if (v15 != 542) {
									v17 = v16;
								lab_0x933dc:;
									int32_t v18 = g35 + 224; // 0x933dc
									g35 = v18;
									int32_t v19 = g31 + 1; // 0x933e0
									g31 = v19;
									int32_t v20 = g28; // 0x933e4
									v13 = g33;
									if (v19 >= v20) {
										result = v17;
										v7 = v20;
										// break -> 0x933ec
										break;
									}
									v10 = v17;
									v11 = v19;
									v12 = v13;
									v5 = v18;
									// continue -> 0x93390
									continue;
								}
							}
							// 0x933cc
							v17 = AddObject(43, g31, g30);
							// branch -> 0x933dc
							goto lab_0x933dc;
						}
					}
					// 0x933ac
					v16 = AddObject(42, v11, g30);
					v15 = g32;
					// branch -> 0x933bc
					goto lab_0x933bc;
				}
				// 0x933ec
				v8 = v13 + 2;
				g33 = v8;
				v9 = g30 + 1;
				g30 = v9;
				if (v9 >= g29) {
					// 0x933fc
					g10 = v1;
					return result;
				}
			lab_0x933ec:
				// 0x933ec
				v3 = result;
				v4 = g27;
				v2 = v8;
				a3 = v7;
				// branch -> 0x93384
				continue;
			}
			// 0x933ec
			v8 = v6 + 2;
			g33 = v8;
			v9 = g30 + 1;
			g30 = v9;
			if (v9 < g29) {
				goto lab_0x933ec;
			}
			// 0x933fc
			g10 = v1;
			return result;
		}
	}
	// 0x933fc
	g10 = v1;
	return result2;
}

// Address range: 0x93410 - 0x934b8
int32_t function_93410(int32_t result2, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0x93414
	g36 = *(int32_t *)(g23 - 0x757c);
	g27 = result2;
	g30 = a2;
	int32_t v2 = 2 * a2; // 0x9342c
	g33 = v2;
	if (a2 < a4) {
		int32_t v3 = result2; // 0x934b424
		int32_t v4 = result2; // 0x9343c
		while (true) {
			int32_t v5 = 224 * v4; // 0x9343c
			g35 = v5;
			g31 = v4;
			int32_t result = v3; // 0x934b420
			int32_t v6 = v2;     // 0x93494
			int32_t v7;          // 0x93494
			int32_t v8;          // 0x93498
			if (v4 < a3) {
				int32_t v9 = v3;  // 0x934b423
				int32_t v10 = v4; // 0x9345c
				int32_t v11 = v2; // 0x93450
				int32_t v12;
				while (true) {
					int16_t v13 = *(int16_t *)(*(int32_t *)g36 + v5 + v11); // 0x93450
					int32_t v14 = v13;                                      // 0x93450
					g32 = v14;
					int32_t v15 = v9; // 0x934b422
					if (v13 == 531) {
						// 0x9345c
						v15 = AddObject(74, v10, g30);
						v14 = g32;
						// branch -> 0x9346c
					}
					if (v14 == 534) {
						// 0x93474
						v15 = AddObject(75, g31, g30);
						// branch -> 0x93484
					}
					int32_t v16 = g35 + 224; // 0x93484
					g35 = v16;
					int32_t v17 = g31 + 1; // 0x93488
					g31 = v17;
					v12 = g33;
					if (v17 >= a3) {
						result = v15;
						// break -> 0x93494
						break;
					}
					v9 = v15;
					v10 = v17;
					v11 = v12;
					v5 = v16;
					// continue -> 0x93448
				}
				// 0x93494
				v7 = v12 + 2;
				g33 = v7;
				v8 = g30 + 1;
				g30 = v8;
				if (v8 >= a4) {
					// 0x934a4
					g10 = v1;
					return result;
				}
			lab_0x93494:
				// 0x93494
				v3 = result;
				v4 = g27;
				v2 = v7;
				// branch -> 0x9343c
				continue;
			}
			// 0x93494
			v7 = v6 + 2;
			g33 = v7;
			v8 = g30 + 1;
			g30 = v8;
			if (v8 < a4) {
				goto lab_0x93494;
			}
			// 0x934a4
			g10 = v1;
			return result;
		}
	}
	// 0x934a4
	g10 = v1;
	return result2;
}

// Address range: 0x934b8 - 0x934e4
int32_t function_934b8(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x779c);                      // 0x934bc
	unsigned char v2 = *(char *)(*(int32_t *)v1 + 112 * a1 + a2); // 0x934c8
	if (__asm_rlwinm_((int32_t)v2, 0, 28, 28) == 0) {
		// 0x934dc
		return 1;
	}
	// 0x934d4
	return 0;
}

// Address range: 0x934e4 - 0x93648
int32_t function_934e4(int32_t a1)
{
	// 0x934e4
	g32 = *(int32_t *)(g23 - 0x757c);
	g35 = 0;
	g33 = *(int32_t *)(g23 - 0x7684);
	int32_t v1 = 0; // r25
	int32_t v2 = 0; // 0x935143
	// branch -> 0x93504
	int32_t result; // 0x93644
	while (true) {
		// 0x93504
		g31 = 0;
		g30 = 0;
		g36 = 0;
		int32_t v3 = v2; // 0x93514
		int32_t v4 = 0;  // 0x93510
		// branch -> 0x93510
		int32_t v5;
		while (true) {
			int32_t v6 = function_934b8(v4, v3); // 0x93518
			result = 0;
			if (v6 != 0) {
				int16_t v7 = *(int16_t *)(v1 + g31 + *(int32_t *)g32); // 0x9352c
				g28 = v7;
				if (v7 == 1) {
					// 0x93538
					g37 = 3;
					int32_t v8 = random(-111); // 0x93540
					if (v8 == 0) {
						// 0x9354c
						v6 = AddObject(46, g36, g35);
						// branch -> 0x9355c
					} else {
						v6 = v8;
					}
				}
				int32_t v9 = v6; // 0x936446
				if (g28 == 5) {
					// 0x93564
					g37 = 3;
					int32_t v10 = random(-111); // 0x9356c
					if (v10 == 0) {
						// 0x93578
						v9 = AddObject(47, g36, g35);
						// branch -> 0x93588
					} else {
						v9 = v10;
					}
				}
				int32_t v11 = v9; // 0x936445
				if (g28 == 37) {
					// 0x93590
					g37 = 10;
					int32_t v12 = random(-111); // 0x93598
					if (v12 == 0) {
						int32_t v13 = g30 + *(int32_t *)g33; // 0x935a8
						int32_t v14 = g35;                   // 0x935b0
						if (*(char *)(v14 + v13 - 112) == 0) {
							// 0x935bc
							v11 = AddObject(44, g36 - 1, v14);
							// branch -> 0x935cc
						} else {
							v11 = v13;
						}
					} else {
						v11 = v12;
					}
				}
				// 0x935cc
				if (g28 == 41) {
					// 0x935d4
					g37 = 10;
					int32_t v15 = random(-111); // 0x935dc
					if (v15 == 0) {
						int32_t v16 = g30 + *(int32_t *)g33; // 0x935ec
						int32_t v17 = g35;                   // 0x935f4
						if (*(char *)(v17 + v16 - 1) == 0) {
							// 0x93600
							result = AddObject(45, g36, v17 - 1);
							// branch -> 0x93610
						} else {
							result = v16;
						}
					} else {
						result = v15;
					}
				} else {
					result = v11;
				}
			}
			int32_t v18 = g36 + 1; // 0x93610
			g36 = v18;
			g30 += 112;
			g31 += 224;
			v5 = g35;
			if (v18 >= 112) {
				// break -> 0x93624
				break;
			}
			v3 = v5;
			v4 = v18;
			// continue -> 0x93510
		}
		int32_t v19 = v5 + 1; // 0x93624
		g35 = v19;
		v1 += 2;
		if (v19 >= 112) {
			// break -> 0x93634
			break;
		}
		v2 = v19;
		// continue -> 0x93504
	}
	// 0x93634
	return result;
}

// Address range: 0x93648 - 0x936a4
int32_t function_93648(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x779c);                      // 0x9364c
	unsigned char v2 = *(char *)(*(int32_t *)v1 + 112 * a1 + a2); // 0x93658
	if (__asm_rlwinm_((int32_t)v2, 0, 28, 28) != 0) {
		// 0x93664
		return 0;
	}
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x757c); // 0x93678
	int16_t v4 = *(int16_t *)(2 * a2 + 224 * a1 + v3);   // 0x93684
	if (*(char *)((int32_t)v4 + *(int32_t *)(g23 - 0x7238)) == 0) {
		// 0x93694
		return 0;
	}
	// 0x9369c
	return 1;
}

// Address range: 0x936a4 - 0x938f4
int32_t function_936a4(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77e4); // 0x936ac
	int32_t result = v1;                     // r3
	g31 = *(int32_t *)(g23 - 0x7688);
	g32 = *(int32_t *)(g23 - 0x757c);
	g33 = *(int32_t *)(g23 - 0x722c);
	g35 = *(int32_t *)(g23 - 0x7684);
	g36 = *(int32_t *)(g23 - 0x6fc8);
	unsigned char v2 = *(char *)v1; // 0x936cc
	if (v2 == 1) {
		// 0x936d8
		g22 = 10;
		// branch -> 0x936dc
	}
	// 0x936dc
	if (v2 >= 2) {
		// 0x936e4
		g22 = 15;
		// branch -> 0x936e8
	}
	// 0x936e8
	if (v2 >= 5) {
		// 0x936f0
		g22 = 20;
		// branch -> 0x936f4
	}
	// 0x936f4
	if (v2 >= 7) {
		// 0x936fc
		g22 = 25;
		// branch -> 0x93700
	}
	int32_t v3 = 0; // r22
	g28 = 0;
	int32_t v4 = 0; // 0x9371c2
	// branch -> 0x93708
	while (true) {
		// 0x93708
		g30 = 0;
		int32_t v5 = 0;  // r25
		int32_t v6 = 0;  // r23
		int32_t v7 = v4; // 0x9371c
		int32_t v8 = 0;  // 0x93718
		// branch -> 0x93714
		int32_t v9;
		while (true) {
			// 0x93714
			int32_t v10; // 0x938bc
			int32_t v11; // 0x938c8
			if (*(char *)(*(int32_t *)g35 + v8 + v7) >= 1) {
				// 0x93728
				g37 = 100;
				int32_t v12 = random(-112); // 0x93730
				result = v12;
				if (v12 < g22) {
					int32_t v13 = g30 + *(int32_t *)g35;                                                 // 0x93740
					int32_t v14 = v3;                                                                    // 0x93744
					int32_t v15 = (0x1000000 * (int32_t) * (char *)(v14 + v13) - 0x1000000) / 0x1000000; // 0x93750
					g21 = v15;
					int32_t v16 = 44 * *(int32_t *)(120 * v15 + g31); // 0x9375c
					result = v16;
					if (*(int32_t *)(g36 + v16 + 40) != 0) {
						int32_t v17 = v6; // r21
						g37 = 2;
						if (random(-112) == 0) {
							int32_t v18 = v17 - 1; // 0x9378c
							v17 = v18;
							int32_t v19 = *(int32_t *)g32 + 224 * v18 + g28; // 0x9379c
							int32_t v20 = g33;
							int32_t v21; // 0x937c4
							if (*(char *)((int32_t) * (int16_t *)v19 + v20) == 0) {
								int32_t v22 = v19 - 224; // 0x937a4
								int32_t v23 = v18 - 1;   // 0x937a8
								v17 = v23;
								while (*(char *)((int32_t) * (int16_t *)v22 + v20) == 0) {
									// 0x937a4
									v22 -= 224;
									v23--;
									v17 = v23;
									// continue -> 0x937a4
								}
								// 0x937bc
								v21 = function_93648(v23, v14);
								result = v21;
								if (v21 != 0) {
								lab_0x937d0:;
									int32_t v24 = v17; // 0x937d0
									if (v6 - v24 >= 2) {
										// 0x937dc
										AddObject(53, v24, v14);
										int32_t v25 = *(int32_t *)g35 + 112 * v17;                                    // 0x937f4
										unsigned char v26 = *(char *)(v3 + v25);                                      // 0x937f8
										int32_t v27 = 120 * (0x1000000 * (int32_t)v26 - 0x1000000) / 0x1000000 + g31; // 0x93810
										*(int32_t *)(v27 + 88) = v6;
										result = 1;
										*(int32_t *)(v27 + 92) = v3;
										*(int32_t *)(120 * g21 + 72 + g31) = result;
										// branch -> 0x938bc
									}
								}
							lab_0x938bc_5:
								// 0x938bc
								v10 = v6 + 1;
								v6 = v10;
								v5 += 224;
								v11 = g30 + 112;
								g30 = v11;
								v9 = v3;
								if (v10 >= 112) {
									// break -> 0x938d0
									break;
								}
								v7 = v9;
								v8 = v11;
								// continue -> 0x93714
								continue;
							}
							// 0x937bc
							v21 = function_93648(v18, v14);
							result = v21;
							if (v21 == 0) {
								goto lab_0x938bc_5;
							}
							goto lab_0x937d0;
						} else {
							int32_t v28 = v14 - 1; // 0x93828
							v14 = v28;
							int32_t v29 = *(int32_t *)g32 + 2 * v28 + v5; // 0x93838
							int32_t v30 = g33;
							int32_t v31; // 0x93860
							if (*(char *)((int32_t) * (int16_t *)v29 + v30) == 0) {
								int32_t v32 = v29 - 2; // 0x93840
								int32_t v33 = v28 - 1; // 0x93844
								v14 = v33;
								while (*(char *)((int32_t) * (int16_t *)v32 + v30) == 0) {
									// 0x93840
									v32 -= 2;
									v33--;
									v14 = v33;
									// continue -> 0x93840
								}
								// 0x93858
								v31 = function_93648(v17, v33);
								result = v31;
								if (v31 == 0) {
									goto lab_0x938bc_5;
								}
							lab_0x9386c:;
								int32_t v34 = v14; // 0x9386c
								if (v3 - v34 < 2) {
									goto lab_0x938bc_5;
								}
								// 0x93878
								AddObject(54, v17, v34);
								unsigned char v35 = *(char *)(v14 + g30 + *(int32_t *)g35);                   // 0x93894
								int32_t v36 = 120 * (0x1000000 * (int32_t)v35 - 0x1000000) / 0x1000000 + g31; // 0x938a8
								*(int32_t *)(v36 + 88) = v6;
								result = 1;
								*(int32_t *)(v36 + 92) = v3;
								*(int32_t *)(120 * g21 + 72 + g31) = result;
								// branch -> 0x938bc
								goto lab_0x938bc_5;
							}
							// 0x93858
							v31 = function_93648(v17, v28);
							result = v31;
							if (v31 == 0) {
								goto lab_0x938bc_5;
							}
							goto lab_0x9386c;
						}
					}
					// 0x938bc
					v10 = v6 + 1;
					v6 = v10;
					v5 += 224;
					v11 = g30 + 112;
					g30 = v11;
					v9 = v3;
					if (v10 >= 112) {
						// break -> 0x938d0
						break;
					}
					v7 = v9;
					v8 = v11;
					// continue -> 0x93714
					continue;
				}
			}
			// 0x938bc
			v10 = v6 + 1;
			v6 = v10;
			v5 += 224;
			v11 = g30 + 112;
			g30 = v11;
			v9 = v3;
			if (v10 >= 112) {
				// break -> 0x938d0
				break;
			}
			v7 = v9;
			v8 = v11;
			// continue -> 0x93714
		}
		int32_t v37 = v9 + 1; // 0x938d0
		v3 = v37;
		g28 += 2;
		if (v37 >= 112) {
			// break -> 0x938e0
			break;
		}
		v4 = v37;
		// continue -> 0x93708
	}
	// 0x938e0
	return result;
}

// Address range: 0x938f4 - 0x939f4
int32_t function_938f4(void)
{
	// 0x938f4
	g35 = 0;
	g32 = *(int32_t *)(g23 - 0x7794);
	g33 = *(int32_t *)(g23 - 0x7684);
	int32_t v1 = 0; // 0x939242
	// branch -> 0x93914
	int32_t result; // r3
	while (true) {
		// 0x93914
		g36 = 0;
		g30 = 0;
		int32_t v2 = v1; // 0x93924
		int32_t v3 = 0;  // 0x93920
		// branch -> 0x9391c
		int32_t v4;
		while (true) {
			unsigned char v5 = *(char *)(*(int32_t *)g33 + v3 + v2); // 0x93924
			int32_t v6 = v5;                                         // 0x93924
			result = v6;
			int32_t v7; // 0x939c4
			int32_t v8; // 0x939c8
			if (v5 >= 1) {
				int32_t v9 = 120 * (0x1000000 * v6 - 0x1000000) / 0x1000000; // 0x9393c
				result = v9;
				int32_t v10 = *(int32_t *)(g23 - 0x7688) + v9; // 0x93940
				int32_t *v11 = (int32_t *)v10;                 // 0x93940
				if (*v11 >= 5) {
					int32_t v12 = v10; // r25
					if (*v11 <= 7) {
						int32_t v13 = v10 + 72; // 0x9395c
						g28 = v13;
						if (*(int32_t *)v13 == 0) {
							// 0x9396c
							g37 = 100;
							int32_t v14 = random(0); // 0x93974
							result = v14;
							if (v14 <= 9) {
								int32_t *v15 = (int32_t *)v12; // 0x93980
								*v15 = *v15 + 63;
								*(int32_t *)g28 = 1;
								if (*(char *)g32 == 2) {
									// 0x939a0
									g37 = 2;
									int32_t v16 = random(0); // 0x939a8
									result = v16;
									*(int32_t *)(v12 + 100) = v16;
									// branch -> 0x939c4
								} else {
									// 0x939b4
									g37 = 3;
									int32_t v17 = random(0); // 0x939bc
									result = v17;
									*(int32_t *)(v12 + 100) = v17;
									// branch -> 0x939c4
								}
								// 0x939c4
								v7 = g36 + 1;
								g36 = v7;
								v8 = g30 + 112;
								g30 = v8;
								v4 = g35;
								if (v7 >= 112) {
									// break -> 0x939d4
									break;
								}
								v2 = v4;
								v3 = v8;
								// continue -> 0x9391c
								continue;
							}
							// 0x939c4
							v7 = g36 + 1;
							g36 = v7;
							v8 = g30 + 112;
							g30 = v8;
							v4 = g35;
							if (v7 >= 112) {
								// break -> 0x939d4
								break;
							}
							v2 = v4;
							v3 = v8;
							// continue -> 0x9391c
							continue;
						}
					}
					// 0x939c4
					v7 = g36 + 1;
					g36 = v7;
					v8 = g30 + 112;
					g30 = v8;
					v4 = g35;
					if (v7 >= 112) {
						// break -> 0x939d4
						break;
					}
					v2 = v4;
					v3 = v8;
					// continue -> 0x9391c
					continue;
				}
				// 0x939c4
				v7 = g36 + 1;
				g36 = v7;
				v8 = g30 + 112;
				g30 = v8;
				v4 = g35;
				if (v7 >= 112) {
					// break -> 0x939d4
					break;
				}
				v2 = v4;
				v3 = v8;
				// continue -> 0x9391c
				continue;
			}
			// 0x939c4
			v7 = g36 + 1;
			g36 = v7;
			v8 = g30 + 112;
			g30 = v8;
			v4 = g35;
			if (v7 >= 112) {
				// break -> 0x939d4
				break;
			}
			v2 = v4;
			v3 = v8;
			// continue -> 0x9391c
		}
		int32_t v18 = v4 + 1; // 0x939d4
		g35 = v18;
		if (v18 >= 112) {
			// break -> 0x939e0
			break;
		}
		v1 = v18;
		// continue -> 0x93914
	}
	// 0x939e0
	return result;
}

// Address range: 0x939f4 - 0x93b18
int32_t function_939f4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8)
{
	// 0x939f4
	g34 = a1;
	int32_t v1 = g10;                        // 0x939f8
	int32_t v2 = *(int32_t *)(g23 - 0x6fe8); // 0x939fc
	g22 = v2;
	g24 = g34;
	g21 = *(int32_t *)(g23 - 0x6fec);
	g25 = a2;
	g26 = a3;
	g27 = a4;
	g28 = a5;
	g19 = a6;
	g18 = a7;
	g29 = g13;
	*(int32_t *)v2 = 1;
	int32_t v3 = function_c9948();       // 0x93a34
	int32_t v4 = (int32_t) * (char *)v3; // 0x93a38
	int32_t v5 = v3 + 2;                 // 0x93a3c
	unsigned char v6 = *(char *)v5;      // 0x93a40
	int32_t v7 = v6;                     // 0x93a40
	g20 = g18 + g28;
	g19 += g27;
	int32_t v8 = 2 * v4; // 0x93a54
	g33 = v8;
	int32_t v9 = 2 * v7; // 0x93a5c
	g32 = v9;
	g35 = 0;
	int32_t result; // 0x93af8
	if (v6 == 0) {
		// 0x93af4
		result = function_c9acc(g24);
		*(int32_t *)g22 = 0;
		g10 = v1;
		return result;
	}
	int32_t v10 = v9;                                 // 0x93aec22
	int32_t v11 = 2 * v4 * v7 + 2 + 8 * v4 * v9 + v5; // 0x93a8c13
	int32_t v12 = 0;                                  // 0x93a78
	while (true) {
		// 0x93a78
		g31 = v12 + 16 + g26;
		g36 = 0;
		int32_t v13 = v10; // 0x93aec
		int32_t v14 = v12; // 0x93ae8
		int32_t v15 = v11; // 0x93a8c14
		int32_t v16 = v8;  // 0x93ae0211
		if (v8 > 0) {
			int32_t v17 = v8;  // 0x93ae019
			int32_t v18 = 0;   // 0x93a98
			int32_t v19 = v11; // 0x93a8c
			int32_t v20;       // 0x93ad8
			int32_t v21;       // 0x93ae0
			while (true) {
				unsigned char v22 = *(char *)v19; // 0x93a8c
				v21 = v17;
				int32_t v23 = v18; // 0x93adc
				int32_t v24 = v19; // 0x93ad8
				if (v22 != 0) {
					int32_t v25 = v18 + 16 + g25; // 0x93aa4
					g18 = v25;
					AddObject(*(int32_t *)(g21 + 4 * (int32_t)v22), v25, g31);
					int32_t v26 = ObjIndex(g18, g31); // 0x93abc
					SetObjMapRange(v26, g27, g28, g19, g20, g29);
					v21 = g33;
					v23 = g36;
					v24 = g30;
					// branch -> 0x93ad8
				}
				// 0x93ad8
				v20 = v24 + 2;
				int32_t v27 = v23 + 1; // 0x93adc
				g36 = v27;
				if (v27 >= v21) {
					// break -> 0x93ae0
					break;
				}
				v17 = v21;
				v18 = v27;
				v19 = v20;
				// continue -> 0x93a8c
			}
			// 0x93ae0
			v13 = g32;
			v14 = g35;
			v15 = v20;
			v16 = v21;
			// branch -> 0x93ae8
		}
		int32_t v28 = v14 + 1; // 0x93ae8
		g35 = v28;
		if (v28 >= v13) {
			// break -> 0x93af4
			break;
		}
		v10 = v13;
		v11 = v15;
		v8 = v16;
		v12 = v28;
		// continue -> 0x93a78
	}
	// 0x93af4
	result = function_c9acc(g24);
	*(int32_t *)g22 = 0;
	g10 = v1;
	return result;
}

// Address range: 0x93b18 - 0x93bf8
int32_t function_93b18(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x93b18
	g34 = a1;
	int32_t v1 = g10;                        // 0x93b1c
	int32_t v2 = *(int32_t *)(g23 - 0x6fe8); // 0x93b20
	g32 = v2;
	g33 = g34;
	g31 = *(int32_t *)(g23 - 0x6fec);
	g35 = a2;
	g36 = a3;
	*(int32_t *)v2 = 1;
	int32_t v3 = function_c9948();       // 0x93b44
	int32_t v4 = v3 + 2;                 // 0x93b48
	int32_t v5 = (int32_t) * (char *)v3; // 0x93b4c
	unsigned char v6 = *(char *)v4;      // 0x93b50
	int32_t v7 = v6;                     // 0x93b50
	g29 = 0;
	int32_t v8 = 2 * v5; // 0x93b60
	g28 = v8;
	int32_t v9 = 2 * v7; // 0x93b68
	g27 = v9;
	int32_t v10 = 2 * v5 * v7 + 2 + 8 * v5 * v9 + v4; // 0x93b78
	g25 = v10;
	int32_t result; // 0x93bd8
	if (v6 == 0) {
		// 0x93bd4
		result = function_c9acc(g33);
		*(int32_t *)g32 = 0;
		g10 = v1;
		return result;
	}
	int32_t v11 = 0; // 0x93b80
	while (true) {
		// 0x93b80
		g26 = v11 + 16 + g36;
		g30 = 0;
		int32_t v12 = v9;  // 0x93bcc
		int32_t v13 = v11; // 0x93bc8
		int32_t v14 = v10; // 0x93b9414
		int32_t v15 = v8;  // 0x93bc0111
		if (v8 > 0) {
			int32_t v16 = v8;  // 0x93bc019
			int32_t v17 = 0;   // 0x93ba4
			int32_t v18 = v10; // 0x93b94
			int32_t v19;       // 0x93bb8
			int32_t v20;       // 0x93bc0
			while (true) {
				unsigned char v21 = *(char *)v18; // 0x93b94
				v20 = v16;
				int32_t v22 = v17; // 0x93bbc
				int32_t v23 = v18; // 0x93bb8
				if (v21 != 0) {
					// 0x93ba0
					AddObject(*(int32_t *)(g31 + 4 * (int32_t)v21), g35 + v17 + 16, g26);
					v20 = g28;
					v22 = g30;
					v23 = g25;
					// branch -> 0x93bb8
				}
				// 0x93bb8
				v19 = v23 + 2;
				g25 = v19;
				int32_t v24 = v22 + 1; // 0x93bbc
				g30 = v24;
				if (v24 >= v20) {
					// break -> 0x93bc0
					break;
				}
				v16 = v20;
				v17 = v24;
				v18 = v19;
				// continue -> 0x93b94
			}
			// 0x93bc0
			v12 = g27;
			v13 = g29;
			v14 = v19;
			v15 = v20;
			// branch -> 0x93bc8
		}
		int32_t v25 = v13 + 1; // 0x93bc8
		g29 = v25;
		if (v25 >= v12) {
			// break -> 0x93bd4
			break;
		}
		v9 = v12;
		v10 = v14;
		v8 = v15;
		v11 = v25;
		// continue -> 0x93b80
	}
	// 0x93bd4
	result = function_c9acc(g33);
	*(int32_t *)g32 = 0;
	g10 = v1;
	return result;
}

// Address range: 0x93bf8 - 0x93d20
int32_t function_93bf8(int32_t a1)
{
	int32_t v1 = g36; // 0x93bf8
	g36 = *(int32_t *)(g23 - 0x72f4);
	int32_t v2 = g35; // 0x93c08
	g35 = *(int32_t *)(g23 - 0x72f8);
	int32_t v3 = g33; // 0x93c10
	g33 = *(int32_t *)(g23 - 0x72fc);
	int32_t v4 = g32; // 0x93c18
	g32 = *(int32_t *)(g23 - 0x7300);
	int32_t v5 = LoadFileInMem(*(int32_t *)(g23 - 0x5b10), NULL); // 0x93c2c
	int32_t v6 = v5;                                              // bp-24
	int32_t v7 = *(int32_t *)(g23 - 0x72ec);                      // 0x93c38
	g13 = 1;
	int32_t v8 = *(int32_t *)*(int32_t *)(g23 - 0x72f0); // 0x93c4c
	int32_t v9 = *(int32_t *)g36;                        // 0x93c58
	int32_t v10 = *(int32_t *)g35;                       // 0x93c60
	function_939f4(v5, 2 * *(int32_t *)v7, 2 * v8, v9, v10, 11, 12, v5);
	MemFreeDbg(&v6);
	int32_t v11 = LoadFileInMem(*(int32_t *)(g23 - 0x5b14), NULL); // 0x93c78
	v6 = v11;
	g13 = 2;
	int32_t v12 = *(int32_t *)g35; // 0x93c90
	int32_t v13 = *(int32_t *)g33; // 0x93c9c
	int32_t v14 = *(int32_t *)g32; // 0x93ca4
	function_939f4(v11, 2 * *(int32_t *)g36, 2 * v12, v13, v14, 11, 11, v11);
	MemFreeDbg(&v6);
	int32_t v15 = LoadFileInMem(*(int32_t *)(g23 - 0x5b18), NULL); // 0x93cbc
	v6 = v15;
	int32_t v16 = *(int32_t *)(g23 - 0x7304); // 0x93cc8
	int32_t v17 = *(int32_t *)g33;            // 0x93cd0
	g13 = 3;
	int32_t v18 = *(int32_t *)g32;                        // 0x93cdc
	int32_t v19 = *(int32_t *)*(int32_t *)(g23 - 0x7308); // 0x93cf0
	function_939f4(v15, 2 * v17, 2 * v18, *(int32_t *)v16, v19, 9, 9, v15);
	int32_t result = MemFreeDbg(&v6); // 0x93cfc
	g36 = v1;
	g35 = v2;
	g33 = v3;
	g32 = v4;
	return result;
}

// Address range: 0x93d20 - 0x93e3c
int32_t function_93d20(void)
{
	int32_t v1 = g10; // 0x93d24
	g30 = 0;
	// branch -> 0x93d3c
lab_0x93d3c:
	while (true) {
		// 0x93d3c
		g29 = 1;
		g37 = 80;
		g35 = random(-117) + 16;
		g37 = 80;
		int32_t v2 = random(-117) + 16; // 0x93d5c
		g33 = v2;
		g31 = -2;
		int32_t v3 = -2; // 0x93d68
		// branch -> 0x93d64
		while (true) {
			// 0x93d64
			g32 = -3;
			int32_t v4 = v2 + v3; // 0x93d68
			g36 = v4;
			int32_t v5 = -3; // 0x93d6c
			// branch -> 0x93d6c
			while (true) {
				// 0x93d6c
				if (function_92818(g35 + v5, v4) == 0) {
					// 0x93d80
					g29 = 0;
					// branch -> 0x93d84
				}
				int32_t v6 = g32 + 1; // 0x93d84
				g32 = v6;
				if (v6 >= 4) {
					int32_t v7 = g31 + 1; // 0x93d90
					g31 = v7;
					if (v7 < 3) {
						// 0x93d90
						v3 = v7;
						v2 = g33;
						// branch -> 0x93d64
						break;
					}
					// 0x93d9c
					int32_t result; // 0x93e38
					if (g29 == 0) {
						int32_t v8 = g30 + 1; // 0x93da4
						g30 = v8;
						if (v8 > 20000) {
							// break (via goto) -> 0x93e28
							goto lab_0x93e28;
						}
						// continue (via goto) -> 0x93d3c
						goto lab_0x93d3c;
						// 0x93e28
						g10 = v1;
						return result;
					}
					// 0x93db8
					AddObject(86, g35, g33);
					AddObject(87, g35 - 2, g33 + 1);
					AddObject(87, g35 - 2, g33);
					AddObject(87, g35 - 1, g33 - 1);
					AddObject(87, g35 + 1, g33 - 1);
					AddObject(87, g35 + 2, g33);
					result = AddObject(87, g35 + 2, g33 + 1);
					// branch -> 0x93e28
					// 0x93e28
					g10 = v1;
					return result;
				}
				// 0x93d84
				v4 = g36;
				v5 = v6;
				// branch -> 0x93d6c
			}
		}
	}
}

// Address range: 0x93e3c - 0x93fc4
int32_t function_93e3c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x93e44
	g33 = v1;
	g28 = a1;
	g30 = 0;
	g32 = 16;
	int32_t v2 = 16; // 0x93e60
	// branch -> 0x93e5c
	int32_t result; // 0x93fc0
	while (true) {
		// 0x93e5c
		g36 = v1;
		int32_t v3 = v2; // r25
		g31 = 0;
		g35 = 16;
		int32_t v4 = a1; // 0x93fc05
		int32_t v5 = v1; // 0x93e6c
		// branch -> 0x93e6c
		while (true) {
			char v6 = *(char *)v5; // 0x93e6c
			int32_t v7;            // 0x93e88
			if (v6 != 1) {
				// 0x93e78
				int32_t v8; // 0x93f88
				int32_t v9; // 0x93f94
				if (v6 != 2) {
					result = v4;
				lab_0x93f88_7:
					// 0x93f88
					v8 = g31 + 1;
					g31 = v8;
					g35 += 2;
					v9 = g36 + 40;
					g36 = v9;
					if (v8 >= 40) {
						// break -> 0x93f9c
						break;
					}
					v4 = result;
					v5 = v9;
					// continue -> 0x93e6c
					continue;
				}
				// 0x93e80
				g37 = g28;
				v7 = random(0);
				if (v7 != 0) {
					result = v7;
					goto lab_0x93f88_7;
				}
			lab_0x93e94:
				// 0x93e94
				if (function_53ae0(g31, g30) == 0) {
					result = 0;
					goto lab_0x93f88_7;
				}
				int32_t v10 = g36;                // 0x93ea8
				unsigned char v11 = *(char *)v10; // 0x93ea8
				int32_t v12 = v11;                // 0x93ea8
				if (v11 == 1) {
					// 0x93eb4
					if (*(char *)(v10 + 40) == 6) {
						// 0x93ec0
						g37 = 3;
						int32_t v13 = random(0); // 0x93ec8
						if (v13 == 1) {
							// 0x93f04
							result = AddObject(37, g35 + 1, v3);
							// branch -> 0x93f88
							goto lab_0x93f88_7;
						} else {
							// 0x93ed4
							if (v13 > 1) {
								// 0x93ee4
								if (v13 != 2) {
									result = v13;
									goto lab_0x93f88_7;
								}
								// 0x93f18
								result = AddObject(40, g35 + 1, v3);
								// branch -> 0x93f88
								goto lab_0x93f88_7;
							} else {
								// 0x93ed8
								if (v13 <= 0xffffffff) {
									result = v13;
									goto lab_0x93f88_7;
								}
								// 0x93ef0
								result = AddObject(36, g35 + 1, v3);
								// branch -> 0x93f88
								goto lab_0x93f88_7;
							}
							int32_t v14 = g31; // 0x93f88
							v8 = v14 + 1;
							g31 = v8;
							int32_t v15 = g35; // 0x93f8c
							g35 = v15 + 2;
							int32_t v16 = g36; // 0x93f94
							v9 = v16 + 40;
							g36 = v9;
							if (v8 >= 40) {
								// break -> 0x93f9c
								break;
							}
							v4 = result;
							v5 = v9;
							// continue -> 0x93e6c
							continue;
						}
					lab_0x93f88_13:
						// 0x93f88
						v8 = g31 + 1;
						g31 = v8;
						g35 += 2;
						v9 = g36 + 40;
						g36 = v9;
						if (v8 >= 40) {
							// break -> 0x93f9c
							break;
						}
						v4 = result;
						v5 = v9;
						// continue -> 0x93e6c
						continue;
					}
				}
				// 0x93f2c
				if (v11 != 2) {
					result = v12;
					goto lab_0x93f88_13;
				}
				// 0x93f34
				if (*(char *)(v10 + 1) != 6) {
					result = 2;
					goto lab_0x93f88_13;
				}
				// 0x93f40
				g37 = 2;
				int32_t v17 = random(0); // 0x93f48
				if (v17 == 1) {
					// 0x93f78
					result = AddObject(39, g35, v3);
					// branch -> 0x93f88
					goto lab_0x93f88_13;
				} else {
					// 0x93f54
					if (v17 > 1) {
						result = v17;
						goto lab_0x93f88_13;
					}
					// 0x93f58
					if (v17 <= 0xffffffff) {
						result = v17;
						goto lab_0x93f88_13;
					}
					// 0x93f64
					result = AddObject(38, g35, v3);
					// branch -> 0x93f88
					goto lab_0x93f88_13;
				}
			lab_0x93f88_14:
				// 0x93f88
				v8 = g31 + 1;
				g31 = v8;
				g35 += 2;
				v9 = g36 + 40;
				g36 = v9;
				if (v8 >= 40) {
					// break -> 0x93f9c
					break;
				}
				v4 = result;
				v5 = v9;
				// continue -> 0x93e6c
				continue;
			}
			// 0x93e80
			g37 = g28;
			v7 = random(0);
			if (v7 == 0) {
				goto lab_0x93e94;
			}
			result = v7;
			goto lab_0x93f88_14;
		}
		int32_t v18 = g30 + 1; // 0x93f9c
		g30 = v18;
		int32_t v19 = g32 + 2; // 0x93fa0
		g32 = v19;
		int32_t v20 = g33 + 1; // 0x93fa8
		g33 = v20;
		if (v18 >= 40) {
			// break -> 0x93fb0
			break;
		}
		a1 = result;
		v2 = v19;
		v1 = v20;
		// continue -> 0x93e5c
	}
	// 0x93fb0
	return result;
}

// Address range: 0x93fc4 - 0x94078
int32_t function_93fc4(int32_t a1)
{
	// 0x93fc4
	function_93e3c(6);
	function_928f0(2, 6, 29);
	function_928f0(2, 6, 30);
	function_928f0(2, 6, 31);
	function_928f0(2, 6, 32);
	function_928f0(2, 6, 33);
	function_928f0(2, 6, 34);
	function_928f0(2, 6, 35);
	function_928f0(2, 6, 67);
	int32_t result = function_928f0(1, 3, 80); // 0x94064
	return result;
}

// Address range: 0x94078 - 0x941d8
int32_t function_94078(int32_t a1)
{
	int32_t v1 = g10; // 0x9407c
	int32_t v2 = 0;   // r26
	                  // branch -> 0x94094
lab_0x94094:
	while (true) {
		int32_t v3 = 1; // r25
		g37 = 80;
		int32_t v4 = random(-117) + 16; // r30
		g37 = 80;
		int32_t v5 = random(-117) + 16; // 0x940b4
		g33 = v5;
		int32_t v6 = -3; // r27
		int32_t v7 = -3; // 0x940c0
		// branch -> 0x940bc
		while (true) {
			int32_t v8 = -2;      // r28
			int32_t v9 = v5 + v7; // 0x940c0
			g36 = v9;
			int32_t v10 = -2; // 0x940c4
			// branch -> 0x940c4
			while (true) {
				// 0x940c4
				if (function_92818(v4 + v10, v9) == 0) {
					// 0x940d8
					v3 = 0;
					// branch -> 0x940dc
				}
				int32_t v11 = v8 + 1; // 0x940dc
				v8 = v11;
				if (v11 >= 4) {
					int32_t v12 = v6 + 1; // 0x940e8
					v6 = v12;
					if (v12 < 4) {
						// 0x940e8
						v7 = v12;
						v5 = g33;
						// branch -> 0x940bc
						break;
					}
					// 0x940f4
					int32_t result;
					if (v3 == 0) {
						int32_t v13 = v2 + 1; // 0x940fc
						v2 = v13;
						if (v13 >= 0x2711) {
							// break (via goto) -> 0x94108
							goto lab_0x94108;
						}
						// continue (via goto) -> 0x94094
						goto lab_0x94094;
						// 0x941c4
						g10 = v1;
						return result;
					}
					// 0x94124
					AddObject(95, v4, g33);
					AddObject(30, g35, g33 + 2);
					AddObject(87, g35 + 1, g33 + 2);
					AddObject(31, g35 + 2, g33 + 2);
					AddObject(33, g35, g33 - 2);
					AddObject(87, g35 + 1, g33 - 2);
					AddObject(34, g35 + 2, g33 - 2);
					AddObject(87, g35 - 1, g33 - 1);
					AddObject(35, g35 - 1, g33);
					result = AddObject(87, g35 - 1, g33 + 1);
					// branch -> 0x941c4
					// 0x941c4
					g10 = v1;
					return result;
				}
				// 0x940dc
				v9 = g36;
				v10 = v11;
				// branch -> 0x940c4
			}
		}
	}
}

// Address range: 0x941d8 - 0x9466c
int32_t InitObjects(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0x941dc
	g25 = *(int32_t *)(g23 - 0x7558);
	g26 = *(int32_t *)(g23 - 0x7554);
	g27 = *(int32_t *)(g23 - 0x77ac);
	g28 = *(int32_t *)(g23 - 0x77a8);
	g29 = *(int32_t *)(g23 - 0x77f0);
	g30 = *(int32_t *)(g23 - 0x6fe8);
	g31 = *(int32_t *)(g23 - 0x7550);
	g32 = *(int32_t *)(g23 - 0x754c);
	g33 = *(int32_t *)(g23 - 0x7604);
	g35 = *(int32_t *)(g23 - 0x7794);
	g36 = *(int32_t *)(g23 - 0x77e4);
	int32_t v2 = function_92c7c(); // 0x94214
	if (*(char *)g36 == 16) {
		// 0x94224
		function_93bf8(v2);
		// branch -> 0x94658
	} else {
		// 0x9422c
		*(int32_t *)g30 = 1;
		int32_t v3 = GetRndSeed(); // 0x94234
		int32_t v4 = g36;          // 0x94238
		int32_t v5 = v4;           // 0x94254
		if (*(char *)v4 == 9) {
			// 0x94244
			if (*(char *)g29 == 1) {
				// 0x94250
				function_95ac0(v3);
				v5 = g36;
				// branch -> 0x94254
			} else {
				v5 = v4;
			}
		}
		unsigned char v6 = *(char *)v5; // 0x94254
		int32_t v7 = g33;               // 0x94258
		int32_t v8 = v5;                // 0x94274
		if (v6 == *(char *)(v7 + 24)) {
			// 0x94264
			if (*(char *)(v7 + 26) == 1) {
				// 0x94270
				function_959f0((int32_t)v6);
				v8 = g36;
				// branch -> 0x94274
			} else {
				v8 = v5;
			}
		}
		int32_t v9 = v8; // 0x94284
		if (*(char *)v8 == 4) {
			// 0x94280
			function_93d20();
			v9 = g36;
			// branch -> 0x94284
		}
		int32_t v10 = v9; // 0x94294
		if (*(char *)v9 == 8) {
			// 0x94290
			function_93d20();
			v10 = g36;
			// branch -> 0x94294
		}
		// 0x94294
		if (*(char *)v10 == 12) {
			// 0x942a0
			function_93d20();
			// branch -> 0x942a4
		}
		int32_t v11 = g35; // 0x942a4
		int32_t v12 = v11; // 0x94330
		if (*(char *)v11 == 1) {
			int32_t v13 = QuestStatus(6); // 0x942b4
			g34 = v13;
			if (v13 != 0) {
				// 0x942c0
				function_92dc0(v13);
				// branch -> 0x942c4
			}
			int32_t v14 = QuestStatus(13); // 0x942c8
			if (v14 != 0) {
				// 0x942d4
				function_92eec(v14);
				// branch -> 0x942d8
			}
			// 0x942d8
			if (QuestStatus(7) != 0) {
				// 0x942e8
				AddObject(97, 2 * *(int32_t *)g32 + 26, 2 * *(int32_t *)g31 + 19);
				// branch -> 0x94308
			}
			// 0x94308
			function_92a24(10, 15, 48);
			function_93120(AddL1Objs(0, 0, 112, 112));
			v12 = g35;
			// branch -> 0x94330
		}
		int32_t v15 = v12; // 0x944f4
		int32_t result;    // r3
		int32_t v16;       // bp-60
		int32_t v17;       // 0x94518
		char v18;
		int32_t v19;       // 0x945f8
		int32_t v20;       // 0x94630
		int32_t v21;       // 0x94640
		int32_t v22;       // 0x945dc
		int32_t v23;       // 0x945f8
		int32_t v24;       // 0x94580
		int32_t v25;       // 0x94588
		unsigned char v26; // 0x94540
		int32_t v27;       // 0x945b0
		int32_t v28;       // 0x9462c
		int32_t v29;       // 0x94510
		if (*(char *)v12 == 2) {
			// 0x9433c
			if (QuestStatus(0) != 0) {
				// 0x9434c
				function_92b94(1, 1, 23);
				// branch -> 0x9435c
			}
			// 0x9435c
			if (QuestStatus(14) != 0) {
				// 0x9436c
				function_92b94(1, 1, 41);
				// branch -> 0x9437c
			}
			// 0x9437c
			function_934e4(AddL2Objs(0, 0, 112, 112));
			char v30;
			int32_t v31;       // 0x944f0
			int32_t v32;       // 0x94454
			int32_t v33;       // 0x944ac
			int32_t v34;       // 0x944b4
			unsigned char v35; // 0x9446c
			int32_t v36;       // 0x944ec
			if (QuestStatus(8) != 0) {
				unsigned char v37 = *(char *)(g28 + 0x55ec * *(int32_t *)g27 + 348); // 0x943b0
				int32_t v38;                                                         // 0x943f0
				int32_t v39;                                                         // 0x943f8
				int32_t v40;                                                         // 0x94428
				if (v37 != 0) {
					// 0x943c4
					if (v37 == 1) {
						// 0x943d0
						g24 = 245;
						// branch -> 0x943e4
						// 0x943e4
						*(char *)(g33 + 206) = -11;
						v38 = *(int32_t *)g31;
						v39 = *(int32_t *)g32;
						g13 = v38 + 1 + *(int32_t *)g25;
						function_92f64(0, 0, 112, 112, v39, v38, v39 + 1 + *(int32_t *)g26, g24);
						v40 = LoadFileInMem(*(int32_t *)(g23 - 0x5b1c), NULL);
						v16 = v40;
						function_93b18(v40, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
						MemFreeDbg(&v16);
						// branch -> 0x94450
						// 0x94450
						v32 = QuestStatus(9);
						v31 = 0;
						if (v32 != 0) {
							// 0x94460
							v35 = *(char *)(g28 + 0x55ec * *(int32_t *)g27 + 348);
							if (v35 != 0) {
								// 0x94480
								if (v35 == 1) {
									// 0x9448c
									g24 = 244;
									// branch -> 0x944a0
									// 0x944a0
									*(char *)(g33 + 230) = -12;
									v33 = *(int32_t *)g31;
									v34 = *(int32_t *)g32;
									g13 = v33 + 7;
									function_92f64(0, 0, 112, 112, v34, v33 + 3, v34 + 2, g24);
									v36 = AddObject(73, 2 * *(int32_t *)g32 + 25, 2 * *(int32_t *)g31 + 32);
									// branch -> 0x944f0
									// 0x944f0
									function_93120(v36);
									v15 = g35;
									// branch -> 0x944f4
									// 0x944f4
									v17 = v15;
									if (*(char *)v15 == 3) {
										// 0x94500
										v29 = function_93410(0, 0, 112, 112);
										function_93120(v29);
										v17 = g35;
										// branch -> 0x94518
									}
									// 0x94518
									if (*(char *)v17 == 4) {
										// 0x94524
										if (QuestStatus(11) != 0) {
											// 0x94534
											v26 = *(char *)(g28 + 0x55ec * *(int32_t *)g27 + 348);
											if (v26 != 0) {
												// 0x94554
												if (v26 == 1) {
													// 0x94560
													g24 = 246;
													// branch -> 0x94574
													// 0x94574
													*(char *)(g33 + 278) = -10;
													v24 = *(int32_t *)g31;
													v25 = *(int32_t *)g32;
													g13 = *(int32_t *)g25 + v24;
													function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
													v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
													v16 = v27;
													function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
													MemFreeDbg(&v16);
													// branch -> 0x945d8
													// 0x945d8
													v22 = QuestStatus(15);
													v19 = 0;
													if (v22 != 0) {
														// 0x945e8
														if (*(char *)g29 == 1) {
															// 0x945f4
															v19 = function_94078(v22);
															// branch -> 0x945f8
														} else {
															v19 = v22;
														}
													}
													// 0x945f8
													v23 = function_93120(v19);
													function_93fc4(v23);
													// branch -> 0x94600
													// 0x94600
													function_928f0(5, 10, 5);
													function_928f0(3, 6, 6);
													v28 = function_928f0(1, 5, 7);
													result = v28;
													v20 = g35;
													v21 = v20;
													if (*(char *)v20 != 4) {
														// 0x9463c
														result = function_936a4(v28);
														v21 = g35;
														// branch -> 0x94640
													}
													// 0x94640
													if ((*(char *)v21 || 1) != 1) {
														// 0x9464c
														result = function_938f4();
														// branch -> 0x94650
													}
													// 0x94650
													*(int32_t *)g30 = 0;
													// branch -> 0x94658
													// 0x94658
													g10 = v1;
													return result;
												}
												// 0x94568
												if (v26 == 2) {
													// 0x94570
													g24 = 242;
													v18 = -14;
													// branch -> 0x94574
												} else {
													// 0x94568
													v18 = g24;
													// branch -> 0x94574
												}
												// 0x94574
												*(char *)(g33 + 278) = v18;
												v24 = *(int32_t *)g31;
												v25 = *(int32_t *)g32;
												g13 = *(int32_t *)g25 + v24;
												function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
												v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
												v16 = v27;
												function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
												MemFreeDbg(&v16);
												// branch -> 0x945d8
												// 0x945d8
												v22 = QuestStatus(15);
												v19 = 0;
												if (v22 != 0) {
													// 0x945e8
													if (*(char *)g29 == 1) {
														// 0x945f4
														v19 = function_94078(v22);
														// branch -> 0x945f8
													} else {
														v19 = v22;
													}
												}
												// 0x945f8
												v23 = function_93120(v19);
												function_93fc4(v23);
												// branch -> 0x94600
												// 0x94600
												function_928f0(5, 10, 5);
												function_928f0(3, 6, 6);
												v28 = function_928f0(1, 5, 7);
												result = v28;
												v20 = g35;
												v21 = v20;
												if (*(char *)v20 != 4) {
													// 0x9463c
													result = function_936a4(v28);
													v21 = g35;
													// branch -> 0x94640
												}
												// 0x94640
												if ((*(char *)v21 || 1) != 1) {
													// 0x9464c
													result = function_938f4();
													// branch -> 0x94650
												}
												// 0x94650
												*(int32_t *)g30 = 0;
												// branch -> 0x94658
												// 0x94658
												g10 = v1;
												return result;
											}
											// 0x9454c
											g24 = 238;
											// branch -> 0x94574
											// 0x94574
											*(char *)(g33 + 278) = -18;
											v24 = *(int32_t *)g31;
											v25 = *(int32_t *)g32;
											g13 = *(int32_t *)g25 + v24;
											function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
											v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
											v16 = v27;
											function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
											MemFreeDbg(&v16);
											// branch -> 0x945d8
										}
										// 0x945d8
										v22 = QuestStatus(15);
										v19 = 0;
										if (v22 != 0) {
											// 0x945e8
											if (*(char *)g29 == 1) {
												// 0x945f4
												v19 = function_94078(v22);
												// branch -> 0x945f8
											} else {
												v19 = v22;
											}
										}
										// 0x945f8
										v23 = function_93120(v19);
										function_93fc4(v23);
										// branch -> 0x94600
									}
									// 0x94600
									function_928f0(5, 10, 5);
									function_928f0(3, 6, 6);
									v28 = function_928f0(1, 5, 7);
									result = v28;
									v20 = g35;
									v21 = v20;
									if (*(char *)v20 != 4) {
										// 0x9463c
										result = function_936a4(v28);
										v21 = g35;
										// branch -> 0x94640
									}
									// 0x94640
									if ((*(char *)v21 || 1) != 1) {
										// 0x9464c
										result = function_938f4();
										// branch -> 0x94650
									}
									// 0x94650
									*(int32_t *)g30 = 0;
									// branch -> 0x94658
									// 0x94658
									g10 = v1;
									return result;
								}
								// 0x94494
								if (v35 == 2) {
									// 0x9449c
									g24 = 240;
									v30 = -16;
									// branch -> 0x944a0
								} else {
									// 0x94494
									v30 = g24;
									// branch -> 0x944a0
								}
								// 0x944a0
								*(char *)(g33 + 230) = v30;
								v33 = *(int32_t *)g31;
								v34 = *(int32_t *)g32;
								g13 = v33 + 7;
								function_92f64(0, 0, 112, 112, v34, v33 + 3, v34 + 2, g24);
								v36 = AddObject(73, 2 * *(int32_t *)g32 + 25, 2 * *(int32_t *)g31 + 32);
								// branch -> 0x944f0
								// 0x944f0
								function_93120(v36);
								v15 = g35;
								// branch -> 0x944f4
								// 0x944f4
								v17 = v15;
								if (*(char *)v15 == 3) {
									// 0x94500
									v29 = function_93410(0, 0, 112, 112);
									function_93120(v29);
									v17 = g35;
									// branch -> 0x94518
								}
								// 0x94518
								if (*(char *)v17 == 4) {
									// 0x94524
									if (QuestStatus(11) != 0) {
										// 0x94534
										v26 = *(char *)(g28 + 0x55ec * *(int32_t *)g27 + 348);
										if (v26 != 0) {
											// 0x94554
											if (v26 == 1) {
												// 0x94560
												g24 = 246;
												// branch -> 0x94574
												// 0x94574
												*(char *)(g33 + 278) = -10;
												v24 = *(int32_t *)g31;
												v25 = *(int32_t *)g32;
												g13 = *(int32_t *)g25 + v24;
												function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
												v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
												v16 = v27;
												function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
												MemFreeDbg(&v16);
												// branch -> 0x945d8
												// 0x945d8
												v22 = QuestStatus(15);
												v19 = 0;
												if (v22 != 0) {
													// 0x945e8
													if (*(char *)g29 == 1) {
														// 0x945f4
														v19 = function_94078(v22);
														// branch -> 0x945f8
													} else {
														v19 = v22;
													}
												}
												// 0x945f8
												v23 = function_93120(v19);
												function_93fc4(v23);
												// branch -> 0x94600
												// 0x94600
												function_928f0(5, 10, 5);
												function_928f0(3, 6, 6);
												v28 = function_928f0(1, 5, 7);
												result = v28;
												v20 = g35;
												v21 = v20;
												if (*(char *)v20 != 4) {
													// 0x9463c
													result = function_936a4(v28);
													v21 = g35;
													// branch -> 0x94640
												}
												// 0x94640
												if ((*(char *)v21 || 1) != 1) {
													// 0x9464c
													result = function_938f4();
													// branch -> 0x94650
												}
												// 0x94650
												*(int32_t *)g30 = 0;
												// branch -> 0x94658
												// 0x94658
												g10 = v1;
												return result;
											}
											// 0x94568
											if (v26 == 2) {
												// 0x94570
												g24 = 242;
												v18 = -14;
												// branch -> 0x94574
											} else {
												// 0x94568
												v18 = g24;
												// branch -> 0x94574
											}
											// 0x94574
											*(char *)(g33 + 278) = v18;
											v24 = *(int32_t *)g31;
											v25 = *(int32_t *)g32;
											g13 = *(int32_t *)g25 + v24;
											function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
											v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
											v16 = v27;
											function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
											MemFreeDbg(&v16);
											// branch -> 0x945d8
											// 0x945d8
											v22 = QuestStatus(15);
											v19 = 0;
											if (v22 != 0) {
												// 0x945e8
												if (*(char *)g29 == 1) {
													// 0x945f4
													v19 = function_94078(v22);
													// branch -> 0x945f8
												} else {
													v19 = v22;
												}
											}
											// 0x945f8
											v23 = function_93120(v19);
											function_93fc4(v23);
											// branch -> 0x94600
											// 0x94600
											function_928f0(5, 10, 5);
											function_928f0(3, 6, 6);
											v28 = function_928f0(1, 5, 7);
											result = v28;
											v20 = g35;
											v21 = v20;
											if (*(char *)v20 != 4) {
												// 0x9463c
												result = function_936a4(v28);
												v21 = g35;
												// branch -> 0x94640
											}
											// 0x94640
											if ((*(char *)v21 || 1) != 1) {
												// 0x9464c
												result = function_938f4();
												// branch -> 0x94650
											}
											// 0x94650
											*(int32_t *)g30 = 0;
											// branch -> 0x94658
											// 0x94658
											g10 = v1;
											return result;
										}
										// 0x9454c
										g24 = 238;
										// branch -> 0x94574
										// 0x94574
										*(char *)(g33 + 278) = -18;
										v24 = *(int32_t *)g31;
										v25 = *(int32_t *)g32;
										g13 = *(int32_t *)g25 + v24;
										function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
										v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
										v16 = v27;
										function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
										MemFreeDbg(&v16);
										// branch -> 0x945d8
									}
									// 0x945d8
									v22 = QuestStatus(15);
									v19 = 0;
									if (v22 != 0) {
										// 0x945e8
										if (*(char *)g29 == 1) {
											// 0x945f4
											v19 = function_94078(v22);
											// branch -> 0x945f8
										} else {
											v19 = v22;
										}
									}
									// 0x945f8
									v23 = function_93120(v19);
									function_93fc4(v23);
									// branch -> 0x94600
								}
								// 0x94600
								function_928f0(5, 10, 5);
								function_928f0(3, 6, 6);
								v28 = function_928f0(1, 5, 7);
								result = v28;
								v20 = g35;
								v21 = v20;
								if (*(char *)v20 != 4) {
									// 0x9463c
									result = function_936a4(v28);
									v21 = g35;
									// branch -> 0x94640
								}
								// 0x94640
								if ((*(char *)v21 || 1) != 1) {
									// 0x9464c
									result = function_938f4();
									// branch -> 0x94650
								}
								// 0x94650
								*(int32_t *)g30 = 0;
								// branch -> 0x94658
								// 0x94658
								g10 = v1;
								return result;
							}
							// 0x94478
							g24 = 236;
							// branch -> 0x944a0
							// 0x944a0
							*(char *)(g33 + 230) = -20;
							v33 = *(int32_t *)g31;
							v34 = *(int32_t *)g32;
							g13 = v33 + 7;
							function_92f64(0, 0, 112, 112, v34, v33 + 3, v34 + 2, g24);
							v31 = AddObject(73, 2 * *(int32_t *)g32 + 25, 2 * *(int32_t *)g31 + 32);
							// branch -> 0x944f0
						}
						// 0x944f0
						function_93120(v31);
						v15 = g35;
						// branch -> 0x944f4
						// 0x944f4
						v17 = v15;
						if (*(char *)v15 == 3) {
							// 0x94500
							v29 = function_93410(0, 0, 112, 112);
							function_93120(v29);
							v17 = g35;
							// branch -> 0x94518
						}
						// 0x94518
						if (*(char *)v17 == 4) {
							// 0x94524
							if (QuestStatus(11) != 0) {
								// 0x94534
								v26 = *(char *)(g28 + 0x55ec * *(int32_t *)g27 + 348);
								if (v26 != 0) {
									// 0x94554
									if (v26 == 1) {
										// 0x94560
										g24 = 246;
										// branch -> 0x94574
										// 0x94574
										*(char *)(g33 + 278) = -10;
										v24 = *(int32_t *)g31;
										v25 = *(int32_t *)g32;
										g13 = *(int32_t *)g25 + v24;
										function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
										v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
										v16 = v27;
										function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
										MemFreeDbg(&v16);
										// branch -> 0x945d8
										// 0x945d8
										v22 = QuestStatus(15);
										v19 = 0;
										if (v22 != 0) {
											// 0x945e8
											if (*(char *)g29 == 1) {
												// 0x945f4
												v19 = function_94078(v22);
												// branch -> 0x945f8
											} else {
												v19 = v22;
											}
										}
										// 0x945f8
										v23 = function_93120(v19);
										function_93fc4(v23);
										// branch -> 0x94600
										// 0x94600
										function_928f0(5, 10, 5);
										function_928f0(3, 6, 6);
										v28 = function_928f0(1, 5, 7);
										result = v28;
										v20 = g35;
										v21 = v20;
										if (*(char *)v20 != 4) {
											// 0x9463c
											result = function_936a4(v28);
											v21 = g35;
											// branch -> 0x94640
										}
										// 0x94640
										if ((*(char *)v21 || 1) != 1) {
											// 0x9464c
											result = function_938f4();
											// branch -> 0x94650
										}
										// 0x94650
										*(int32_t *)g30 = 0;
										// branch -> 0x94658
										// 0x94658
										g10 = v1;
										return result;
									}
									// 0x94568
									if (v26 == 2) {
										// 0x94570
										g24 = 242;
										v18 = -14;
										// branch -> 0x94574
									} else {
										// 0x94568
										v18 = g24;
										// branch -> 0x94574
									}
									// 0x94574
									*(char *)(g33 + 278) = v18;
									v24 = *(int32_t *)g31;
									v25 = *(int32_t *)g32;
									g13 = *(int32_t *)g25 + v24;
									function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
									v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
									v16 = v27;
									function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
									MemFreeDbg(&v16);
									// branch -> 0x945d8
									// 0x945d8
									v22 = QuestStatus(15);
									v19 = 0;
									if (v22 != 0) {
										// 0x945e8
										if (*(char *)g29 == 1) {
											// 0x945f4
											v19 = function_94078(v22);
											// branch -> 0x945f8
										} else {
											v19 = v22;
										}
									}
									// 0x945f8
									v23 = function_93120(v19);
									function_93fc4(v23);
									// branch -> 0x94600
									// 0x94600
									function_928f0(5, 10, 5);
									function_928f0(3, 6, 6);
									v28 = function_928f0(1, 5, 7);
									result = v28;
									v20 = g35;
									v21 = v20;
									if (*(char *)v20 != 4) {
										// 0x9463c
										result = function_936a4(v28);
										v21 = g35;
										// branch -> 0x94640
									}
									// 0x94640
									if ((*(char *)v21 || 1) != 1) {
										// 0x9464c
										result = function_938f4();
										// branch -> 0x94650
									}
									// 0x94650
									*(int32_t *)g30 = 0;
									// branch -> 0x94658
									// 0x94658
									g10 = v1;
									return result;
								}
								// 0x9454c
								g24 = 238;
								// branch -> 0x94574
								// 0x94574
								*(char *)(g33 + 278) = -18;
								v24 = *(int32_t *)g31;
								v25 = *(int32_t *)g32;
								g13 = *(int32_t *)g25 + v24;
								function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
								v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
								v16 = v27;
								function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
								MemFreeDbg(&v16);
								// branch -> 0x945d8
							}
							// 0x945d8
							v22 = QuestStatus(15);
							v19 = 0;
							if (v22 != 0) {
								// 0x945e8
								if (*(char *)g29 == 1) {
									// 0x945f4
									v19 = function_94078(v22);
									// branch -> 0x945f8
								} else {
									v19 = v22;
								}
							}
							// 0x945f8
							v23 = function_93120(v19);
							function_93fc4(v23);
							// branch -> 0x94600
						}
						// 0x94600
						function_928f0(5, 10, 5);
						function_928f0(3, 6, 6);
						v28 = function_928f0(1, 5, 7);
						result = v28;
						v20 = g35;
						v21 = v20;
						if (*(char *)v20 != 4) {
							// 0x9463c
							result = function_936a4(v28);
							v21 = g35;
							// branch -> 0x94640
						}
						// 0x94640
						if ((*(char *)v21 || 1) != 1) {
							// 0x9464c
							result = function_938f4();
							// branch -> 0x94650
						}
						// 0x94650
						*(int32_t *)g30 = 0;
						// branch -> 0x94658
						// 0x94658
						g10 = v1;
						return result;
					}
					// 0x943d8
					char v41;
					if (v37 == 2) {
						// 0x943e0
						g24 = 241;
						v41 = -15;
						// branch -> 0x943e4
					} else {
						// 0x943d8
						v41 = g24;
						// branch -> 0x943e4
					}
					// 0x943e4
					*(char *)(g33 + 206) = v41;
					v38 = *(int32_t *)g31;
					v39 = *(int32_t *)g32;
					g13 = v38 + 1 + *(int32_t *)g25;
					function_92f64(0, 0, 112, 112, v39, v38, v39 + 1 + *(int32_t *)g26, g24);
					v40 = LoadFileInMem(*(int32_t *)(g23 - 0x5b1c), NULL);
					v16 = v40;
					function_93b18(v40, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
					MemFreeDbg(&v16);
					// branch -> 0x94450
					// 0x94450
					v32 = QuestStatus(9);
					v31 = 0;
					if (v32 != 0) {
						// 0x94460
						v35 = *(char *)(g28 + 0x55ec * *(int32_t *)g27 + 348);
						if (v35 != 0) {
							// 0x94480
							if (v35 == 1) {
								// 0x9448c
								g24 = 244;
								// branch -> 0x944a0
								// 0x944a0
								*(char *)(g33 + 230) = -12;
								v33 = *(int32_t *)g31;
								v34 = *(int32_t *)g32;
								g13 = v33 + 7;
								function_92f64(0, 0, 112, 112, v34, v33 + 3, v34 + 2, g24);
								v36 = AddObject(73, 2 * *(int32_t *)g32 + 25, 2 * *(int32_t *)g31 + 32);
								// branch -> 0x944f0
								// 0x944f0
								function_93120(v36);
								v15 = g35;
								// branch -> 0x944f4
								// 0x944f4
								v17 = v15;
								if (*(char *)v15 == 3) {
									// 0x94500
									v29 = function_93410(0, 0, 112, 112);
									function_93120(v29);
									v17 = g35;
									// branch -> 0x94518
								}
								// 0x94518
								if (*(char *)v17 == 4) {
									// 0x94524
									if (QuestStatus(11) != 0) {
										// 0x94534
										v26 = *(char *)(g28 + 0x55ec * *(int32_t *)g27 + 348);
										if (v26 != 0) {
											// 0x94554
											if (v26 == 1) {
												// 0x94560
												g24 = 246;
												// branch -> 0x94574
												// 0x94574
												*(char *)(g33 + 278) = -10;
												v24 = *(int32_t *)g31;
												v25 = *(int32_t *)g32;
												g13 = *(int32_t *)g25 + v24;
												function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
												v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
												v16 = v27;
												function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
												MemFreeDbg(&v16);
												// branch -> 0x945d8
												// 0x945d8
												v22 = QuestStatus(15);
												v19 = 0;
												if (v22 != 0) {
													// 0x945e8
													if (*(char *)g29 == 1) {
														// 0x945f4
														v19 = function_94078(v22);
														// branch -> 0x945f8
													} else {
														v19 = v22;
													}
												}
												// 0x945f8
												v23 = function_93120(v19);
												function_93fc4(v23);
												// branch -> 0x94600
												// 0x94600
												function_928f0(5, 10, 5);
												function_928f0(3, 6, 6);
												v28 = function_928f0(1, 5, 7);
												result = v28;
												v20 = g35;
												v21 = v20;
												if (*(char *)v20 != 4) {
													// 0x9463c
													result = function_936a4(v28);
													v21 = g35;
													// branch -> 0x94640
												}
												// 0x94640
												if ((*(char *)v21 || 1) != 1) {
													// 0x9464c
													result = function_938f4();
													// branch -> 0x94650
												}
												// 0x94650
												*(int32_t *)g30 = 0;
												// branch -> 0x94658
												// 0x94658
												g10 = v1;
												return result;
											}
											// 0x94568
											if (v26 == 2) {
												// 0x94570
												g24 = 242;
												v18 = -14;
												// branch -> 0x94574
											} else {
												// 0x94568
												v18 = g24;
												// branch -> 0x94574
											}
											// 0x94574
											*(char *)(g33 + 278) = v18;
											v24 = *(int32_t *)g31;
											v25 = *(int32_t *)g32;
											g13 = *(int32_t *)g25 + v24;
											function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
											v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
											v16 = v27;
											function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
											MemFreeDbg(&v16);
											// branch -> 0x945d8
											// 0x945d8
											v22 = QuestStatus(15);
											v19 = 0;
											if (v22 != 0) {
												// 0x945e8
												if (*(char *)g29 == 1) {
													// 0x945f4
													v19 = function_94078(v22);
													// branch -> 0x945f8
												} else {
													v19 = v22;
												}
											}
											// 0x945f8
											v23 = function_93120(v19);
											function_93fc4(v23);
											// branch -> 0x94600
											// 0x94600
											function_928f0(5, 10, 5);
											function_928f0(3, 6, 6);
											v28 = function_928f0(1, 5, 7);
											result = v28;
											v20 = g35;
											v21 = v20;
											if (*(char *)v20 != 4) {
												// 0x9463c
												result = function_936a4(v28);
												v21 = g35;
												// branch -> 0x94640
											}
											// 0x94640
											if ((*(char *)v21 || 1) != 1) {
												// 0x9464c
												result = function_938f4();
												// branch -> 0x94650
											}
											// 0x94650
											*(int32_t *)g30 = 0;
											// branch -> 0x94658
											// 0x94658
											g10 = v1;
											return result;
										}
										// 0x9454c
										g24 = 238;
										// branch -> 0x94574
										// 0x94574
										*(char *)(g33 + 278) = -18;
										v24 = *(int32_t *)g31;
										v25 = *(int32_t *)g32;
										g13 = *(int32_t *)g25 + v24;
										function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
										v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
										v16 = v27;
										function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
										MemFreeDbg(&v16);
										// branch -> 0x945d8
									}
									// 0x945d8
									v22 = QuestStatus(15);
									v19 = 0;
									if (v22 != 0) {
										// 0x945e8
										if (*(char *)g29 == 1) {
											// 0x945f4
											v19 = function_94078(v22);
											// branch -> 0x945f8
										} else {
											v19 = v22;
										}
									}
									// 0x945f8
									v23 = function_93120(v19);
									function_93fc4(v23);
									// branch -> 0x94600
								}
								// 0x94600
								function_928f0(5, 10, 5);
								function_928f0(3, 6, 6);
								v28 = function_928f0(1, 5, 7);
								result = v28;
								v20 = g35;
								v21 = v20;
								if (*(char *)v20 != 4) {
									// 0x9463c
									result = function_936a4(v28);
									v21 = g35;
									// branch -> 0x94640
								}
								// 0x94640
								if ((*(char *)v21 || 1) != 1) {
									// 0x9464c
									result = function_938f4();
									// branch -> 0x94650
								}
								// 0x94650
								*(int32_t *)g30 = 0;
								// branch -> 0x94658
								// 0x94658
								g10 = v1;
								return result;
							}
							// 0x94494
							if (v35 == 2) {
								// 0x9449c
								g24 = 240;
								v30 = -16;
								// branch -> 0x944a0
							} else {
								// 0x94494
								v30 = g24;
								// branch -> 0x944a0
							}
							// 0x944a0
							*(char *)(g33 + 230) = v30;
							v33 = *(int32_t *)g31;
							v34 = *(int32_t *)g32;
							g13 = v33 + 7;
							function_92f64(0, 0, 112, 112, v34, v33 + 3, v34 + 2, g24);
							v36 = AddObject(73, 2 * *(int32_t *)g32 + 25, 2 * *(int32_t *)g31 + 32);
							// branch -> 0x944f0
							// 0x944f0
							function_93120(v36);
							v15 = g35;
							// branch -> 0x944f4
							// 0x944f4
							v17 = v15;
							if (*(char *)v15 == 3) {
								// 0x94500
								v29 = function_93410(0, 0, 112, 112);
								function_93120(v29);
								v17 = g35;
								// branch -> 0x94518
							}
							// 0x94518
							if (*(char *)v17 == 4) {
								// 0x94524
								if (QuestStatus(11) != 0) {
									// 0x94534
									v26 = *(char *)(g28 + 0x55ec * *(int32_t *)g27 + 348);
									if (v26 != 0) {
										// 0x94554
										if (v26 == 1) {
											// 0x94560
											g24 = 246;
											// branch -> 0x94574
											// 0x94574
											*(char *)(g33 + 278) = -10;
											v24 = *(int32_t *)g31;
											v25 = *(int32_t *)g32;
											g13 = *(int32_t *)g25 + v24;
											function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
											v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
											v16 = v27;
											function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
											MemFreeDbg(&v16);
											// branch -> 0x945d8
											// 0x945d8
											v22 = QuestStatus(15);
											v19 = 0;
											if (v22 != 0) {
												// 0x945e8
												if (*(char *)g29 == 1) {
													// 0x945f4
													v19 = function_94078(v22);
													// branch -> 0x945f8
												} else {
													v19 = v22;
												}
											}
											// 0x945f8
											v23 = function_93120(v19);
											function_93fc4(v23);
											// branch -> 0x94600
											// 0x94600
											function_928f0(5, 10, 5);
											function_928f0(3, 6, 6);
											v28 = function_928f0(1, 5, 7);
											result = v28;
											v20 = g35;
											v21 = v20;
											if (*(char *)v20 != 4) {
												// 0x9463c
												result = function_936a4(v28);
												v21 = g35;
												// branch -> 0x94640
											}
											// 0x94640
											if ((*(char *)v21 || 1) != 1) {
												// 0x9464c
												result = function_938f4();
												// branch -> 0x94650
											}
											// 0x94650
											*(int32_t *)g30 = 0;
											// branch -> 0x94658
											// 0x94658
											g10 = v1;
											return result;
										}
										// 0x94568
										if (v26 == 2) {
											// 0x94570
											g24 = 242;
											v18 = -14;
											// branch -> 0x94574
										} else {
											// 0x94568
											v18 = g24;
											// branch -> 0x94574
										}
										// 0x94574
										*(char *)(g33 + 278) = v18;
										v24 = *(int32_t *)g31;
										v25 = *(int32_t *)g32;
										g13 = *(int32_t *)g25 + v24;
										function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
										v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
										v16 = v27;
										function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
										MemFreeDbg(&v16);
										// branch -> 0x945d8
										// 0x945d8
										v22 = QuestStatus(15);
										v19 = 0;
										if (v22 != 0) {
											// 0x945e8
											if (*(char *)g29 == 1) {
												// 0x945f4
												v19 = function_94078(v22);
												// branch -> 0x945f8
											} else {
												v19 = v22;
											}
										}
										// 0x945f8
										v23 = function_93120(v19);
										function_93fc4(v23);
										// branch -> 0x94600
										// 0x94600
										function_928f0(5, 10, 5);
										function_928f0(3, 6, 6);
										v28 = function_928f0(1, 5, 7);
										result = v28;
										v20 = g35;
										v21 = v20;
										if (*(char *)v20 != 4) {
											// 0x9463c
											result = function_936a4(v28);
											v21 = g35;
											// branch -> 0x94640
										}
										// 0x94640
										if ((*(char *)v21 || 1) != 1) {
											// 0x9464c
											result = function_938f4();
											// branch -> 0x94650
										}
										// 0x94650
										*(int32_t *)g30 = 0;
										// branch -> 0x94658
										// 0x94658
										g10 = v1;
										return result;
									}
									// 0x9454c
									g24 = 238;
									// branch -> 0x94574
									// 0x94574
									*(char *)(g33 + 278) = -18;
									v24 = *(int32_t *)g31;
									v25 = *(int32_t *)g32;
									g13 = *(int32_t *)g25 + v24;
									function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
									v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
									v16 = v27;
									function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
									MemFreeDbg(&v16);
									// branch -> 0x945d8
								}
								// 0x945d8
								v22 = QuestStatus(15);
								v19 = 0;
								if (v22 != 0) {
									// 0x945e8
									if (*(char *)g29 == 1) {
										// 0x945f4
										v19 = function_94078(v22);
										// branch -> 0x945f8
									} else {
										v19 = v22;
									}
								}
								// 0x945f8
								v23 = function_93120(v19);
								function_93fc4(v23);
								// branch -> 0x94600
							}
							// 0x94600
							function_928f0(5, 10, 5);
							function_928f0(3, 6, 6);
							v28 = function_928f0(1, 5, 7);
							result = v28;
							v20 = g35;
							v21 = v20;
							if (*(char *)v20 != 4) {
								// 0x9463c
								result = function_936a4(v28);
								v21 = g35;
								// branch -> 0x94640
							}
							// 0x94640
							if ((*(char *)v21 || 1) != 1) {
								// 0x9464c
								result = function_938f4();
								// branch -> 0x94650
							}
							// 0x94650
							*(int32_t *)g30 = 0;
							// branch -> 0x94658
							// 0x94658
							g10 = v1;
							return result;
						}
						// 0x94478
						g24 = 236;
						// branch -> 0x944a0
						// 0x944a0
						*(char *)(g33 + 230) = -20;
						v33 = *(int32_t *)g31;
						v34 = *(int32_t *)g32;
						g13 = v33 + 7;
						function_92f64(0, 0, 112, 112, v34, v33 + 3, v34 + 2, g24);
						v31 = AddObject(73, 2 * *(int32_t *)g32 + 25, 2 * *(int32_t *)g31 + 32);
						// branch -> 0x944f0
					}
					// 0x944f0
					function_93120(v31);
					v15 = g35;
					// branch -> 0x944f4
					// 0x944f4
					v17 = v15;
					if (*(char *)v15 == 3) {
						// 0x94500
						v29 = function_93410(0, 0, 112, 112);
						function_93120(v29);
						v17 = g35;
						// branch -> 0x94518
					}
					// 0x94518
					if (*(char *)v17 == 4) {
						// 0x94524
						if (QuestStatus(11) != 0) {
							// 0x94534
							v26 = *(char *)(g28 + 0x55ec * *(int32_t *)g27 + 348);
							if (v26 != 0) {
								// 0x94554
								if (v26 == 1) {
									// 0x94560
									g24 = 246;
									// branch -> 0x94574
									// 0x94574
									*(char *)(g33 + 278) = -10;
									v24 = *(int32_t *)g31;
									v25 = *(int32_t *)g32;
									g13 = *(int32_t *)g25 + v24;
									function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
									v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
									v16 = v27;
									function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
									MemFreeDbg(&v16);
									// branch -> 0x945d8
									// 0x945d8
									v22 = QuestStatus(15);
									v19 = 0;
									if (v22 != 0) {
										// 0x945e8
										if (*(char *)g29 == 1) {
											// 0x945f4
											v19 = function_94078(v22);
											// branch -> 0x945f8
										} else {
											v19 = v22;
										}
									}
									// 0x945f8
									v23 = function_93120(v19);
									function_93fc4(v23);
									// branch -> 0x94600
									// 0x94600
									function_928f0(5, 10, 5);
									function_928f0(3, 6, 6);
									v28 = function_928f0(1, 5, 7);
									result = v28;
									v20 = g35;
									v21 = v20;
									if (*(char *)v20 != 4) {
										// 0x9463c
										result = function_936a4(v28);
										v21 = g35;
										// branch -> 0x94640
									}
									// 0x94640
									if ((*(char *)v21 || 1) != 1) {
										// 0x9464c
										result = function_938f4();
										// branch -> 0x94650
									}
									// 0x94650
									*(int32_t *)g30 = 0;
									// branch -> 0x94658
									// 0x94658
									g10 = v1;
									return result;
								}
								// 0x94568
								if (v26 == 2) {
									// 0x94570
									g24 = 242;
									v18 = -14;
									// branch -> 0x94574
								} else {
									// 0x94568
									v18 = g24;
									// branch -> 0x94574
								}
								// 0x94574
								*(char *)(g33 + 278) = v18;
								v24 = *(int32_t *)g31;
								v25 = *(int32_t *)g32;
								g13 = *(int32_t *)g25 + v24;
								function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
								v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
								v16 = v27;
								function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
								MemFreeDbg(&v16);
								// branch -> 0x945d8
								// 0x945d8
								v22 = QuestStatus(15);
								v19 = 0;
								if (v22 != 0) {
									// 0x945e8
									if (*(char *)g29 == 1) {
										// 0x945f4
										v19 = function_94078(v22);
										// branch -> 0x945f8
									} else {
										v19 = v22;
									}
								}
								// 0x945f8
								v23 = function_93120(v19);
								function_93fc4(v23);
								// branch -> 0x94600
								// 0x94600
								function_928f0(5, 10, 5);
								function_928f0(3, 6, 6);
								v28 = function_928f0(1, 5, 7);
								result = v28;
								v20 = g35;
								v21 = v20;
								if (*(char *)v20 != 4) {
									// 0x9463c
									result = function_936a4(v28);
									v21 = g35;
									// branch -> 0x94640
								}
								// 0x94640
								if ((*(char *)v21 || 1) != 1) {
									// 0x9464c
									result = function_938f4();
									// branch -> 0x94650
								}
								// 0x94650
								*(int32_t *)g30 = 0;
								// branch -> 0x94658
								// 0x94658
								g10 = v1;
								return result;
							}
							// 0x9454c
							g24 = 238;
							// branch -> 0x94574
							// 0x94574
							*(char *)(g33 + 278) = -18;
							v24 = *(int32_t *)g31;
							v25 = *(int32_t *)g32;
							g13 = *(int32_t *)g25 + v24;
							function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
							v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
							v16 = v27;
							function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
							MemFreeDbg(&v16);
							// branch -> 0x945d8
						}
						// 0x945d8
						v22 = QuestStatus(15);
						v19 = 0;
						if (v22 != 0) {
							// 0x945e8
							if (*(char *)g29 == 1) {
								// 0x945f4
								v19 = function_94078(v22);
								// branch -> 0x945f8
							} else {
								v19 = v22;
							}
						}
						// 0x945f8
						v23 = function_93120(v19);
						function_93fc4(v23);
						// branch -> 0x94600
					}
					// 0x94600
					function_928f0(5, 10, 5);
					function_928f0(3, 6, 6);
					v28 = function_928f0(1, 5, 7);
					result = v28;
					v20 = g35;
					v21 = v20;
					if (*(char *)v20 != 4) {
						// 0x9463c
						result = function_936a4(v28);
						v21 = g35;
						// branch -> 0x94640
					}
					// 0x94640
					if ((*(char *)v21 || 1) != 1) {
						// 0x9464c
						result = function_938f4();
						// branch -> 0x94650
					}
					// 0x94650
					*(int32_t *)g30 = 0;
					// branch -> 0x94658
					// 0x94658
					g10 = v1;
					return result;
				}
				// 0x943bc
				g24 = 237;
				// branch -> 0x943e4
				// 0x943e4
				*(char *)(g33 + 206) = -19;
				v38 = *(int32_t *)g31;
				v39 = *(int32_t *)g32;
				g13 = v38 + 1 + *(int32_t *)g25;
				function_92f64(0, 0, 112, 112, v39, v38, v39 + 1 + *(int32_t *)g26, g24);
				v40 = LoadFileInMem(*(int32_t *)(g23 - 0x5b1c), NULL);
				v16 = v40;
				function_93b18(v40, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
				MemFreeDbg(&v16);
				// branch -> 0x94450
			}
			// 0x94450
			v32 = QuestStatus(9);
			v31 = 0;
			if (v32 != 0) {
				// 0x94460
				v35 = *(char *)(g28 + 0x55ec * *(int32_t *)g27 + 348);
				if (v35 != 0) {
					// 0x94480
					if (v35 == 1) {
						// 0x9448c
						g24 = 244;
						// branch -> 0x944a0
						// 0x944a0
						*(char *)(g33 + 230) = -12;
						v33 = *(int32_t *)g31;
						v34 = *(int32_t *)g32;
						g13 = v33 + 7;
						function_92f64(0, 0, 112, 112, v34, v33 + 3, v34 + 2, g24);
						v36 = AddObject(73, 2 * *(int32_t *)g32 + 25, 2 * *(int32_t *)g31 + 32);
						// branch -> 0x944f0
						// 0x944f0
						function_93120(v36);
						v15 = g35;
						// branch -> 0x944f4
						// 0x944f4
						v17 = v15;
						if (*(char *)v15 == 3) {
							// 0x94500
							v29 = function_93410(0, 0, 112, 112);
							function_93120(v29);
							v17 = g35;
							// branch -> 0x94518
						}
						// 0x94518
						if (*(char *)v17 == 4) {
							// 0x94524
							if (QuestStatus(11) != 0) {
								// 0x94534
								v26 = *(char *)(g28 + 0x55ec * *(int32_t *)g27 + 348);
								if (v26 != 0) {
									// 0x94554
									if (v26 == 1) {
										// 0x94560
										g24 = 246;
										// branch -> 0x94574
										// 0x94574
										*(char *)(g33 + 278) = -10;
										v24 = *(int32_t *)g31;
										v25 = *(int32_t *)g32;
										g13 = *(int32_t *)g25 + v24;
										function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
										v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
										v16 = v27;
										function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
										MemFreeDbg(&v16);
										// branch -> 0x945d8
										// 0x945d8
										v22 = QuestStatus(15);
										v19 = 0;
										if (v22 != 0) {
											// 0x945e8
											if (*(char *)g29 == 1) {
												// 0x945f4
												v19 = function_94078(v22);
												// branch -> 0x945f8
											} else {
												v19 = v22;
											}
										}
										// 0x945f8
										v23 = function_93120(v19);
										function_93fc4(v23);
										// branch -> 0x94600
										// 0x94600
										function_928f0(5, 10, 5);
										function_928f0(3, 6, 6);
										v28 = function_928f0(1, 5, 7);
										result = v28;
										v20 = g35;
										v21 = v20;
										if (*(char *)v20 != 4) {
											// 0x9463c
											result = function_936a4(v28);
											v21 = g35;
											// branch -> 0x94640
										}
										// 0x94640
										if ((*(char *)v21 || 1) != 1) {
											// 0x9464c
											result = function_938f4();
											// branch -> 0x94650
										}
										// 0x94650
										*(int32_t *)g30 = 0;
										// branch -> 0x94658
										// 0x94658
										g10 = v1;
										return result;
									}
									// 0x94568
									if (v26 == 2) {
										// 0x94570
										g24 = 242;
										v18 = -14;
										// branch -> 0x94574
									} else {
										// 0x94568
										v18 = g24;
										// branch -> 0x94574
									}
									// 0x94574
									*(char *)(g33 + 278) = v18;
									v24 = *(int32_t *)g31;
									v25 = *(int32_t *)g32;
									g13 = *(int32_t *)g25 + v24;
									function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
									v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
									v16 = v27;
									function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
									MemFreeDbg(&v16);
									// branch -> 0x945d8
									// 0x945d8
									v22 = QuestStatus(15);
									v19 = 0;
									if (v22 != 0) {
										// 0x945e8
										if (*(char *)g29 == 1) {
											// 0x945f4
											v19 = function_94078(v22);
											// branch -> 0x945f8
										} else {
											v19 = v22;
										}
									}
									// 0x945f8
									v23 = function_93120(v19);
									function_93fc4(v23);
									// branch -> 0x94600
									// 0x94600
									function_928f0(5, 10, 5);
									function_928f0(3, 6, 6);
									v28 = function_928f0(1, 5, 7);
									result = v28;
									v20 = g35;
									v21 = v20;
									if (*(char *)v20 != 4) {
										// 0x9463c
										result = function_936a4(v28);
										v21 = g35;
										// branch -> 0x94640
									}
									// 0x94640
									if ((*(char *)v21 || 1) != 1) {
										// 0x9464c
										result = function_938f4();
										// branch -> 0x94650
									}
									// 0x94650
									*(int32_t *)g30 = 0;
									// branch -> 0x94658
									// 0x94658
									g10 = v1;
									return result;
								}
								// 0x9454c
								g24 = 238;
								// branch -> 0x94574
								// 0x94574
								*(char *)(g33 + 278) = -18;
								v24 = *(int32_t *)g31;
								v25 = *(int32_t *)g32;
								g13 = *(int32_t *)g25 + v24;
								function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
								v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
								v16 = v27;
								function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
								MemFreeDbg(&v16);
								// branch -> 0x945d8
							}
							// 0x945d8
							v22 = QuestStatus(15);
							v19 = 0;
							if (v22 != 0) {
								// 0x945e8
								if (*(char *)g29 == 1) {
									// 0x945f4
									v19 = function_94078(v22);
									// branch -> 0x945f8
								} else {
									v19 = v22;
								}
							}
							// 0x945f8
							v23 = function_93120(v19);
							function_93fc4(v23);
							// branch -> 0x94600
						}
						// 0x94600
						function_928f0(5, 10, 5);
						function_928f0(3, 6, 6);
						v28 = function_928f0(1, 5, 7);
						result = v28;
						v20 = g35;
						v21 = v20;
						if (*(char *)v20 != 4) {
							// 0x9463c
							result = function_936a4(v28);
							v21 = g35;
							// branch -> 0x94640
						}
						// 0x94640
						if ((*(char *)v21 || 1) != 1) {
							// 0x9464c
							result = function_938f4();
							// branch -> 0x94650
						}
						// 0x94650
						*(int32_t *)g30 = 0;
						// branch -> 0x94658
						// 0x94658
						g10 = v1;
						return result;
					}
					// 0x94494
					if (v35 == 2) {
						// 0x9449c
						g24 = 240;
						v30 = -16;
						// branch -> 0x944a0
					} else {
						// 0x94494
						v30 = g24;
						// branch -> 0x944a0
					}
					// 0x944a0
					*(char *)(g33 + 230) = v30;
					v33 = *(int32_t *)g31;
					v34 = *(int32_t *)g32;
					g13 = v33 + 7;
					function_92f64(0, 0, 112, 112, v34, v33 + 3, v34 + 2, g24);
					v36 = AddObject(73, 2 * *(int32_t *)g32 + 25, 2 * *(int32_t *)g31 + 32);
					// branch -> 0x944f0
					// 0x944f0
					function_93120(v36);
					v15 = g35;
					// branch -> 0x944f4
					// 0x944f4
					v17 = v15;
					if (*(char *)v15 == 3) {
						// 0x94500
						v29 = function_93410(0, 0, 112, 112);
						function_93120(v29);
						v17 = g35;
						// branch -> 0x94518
					}
					// 0x94518
					if (*(char *)v17 == 4) {
						// 0x94524
						if (QuestStatus(11) != 0) {
							// 0x94534
							v26 = *(char *)(g28 + 0x55ec * *(int32_t *)g27 + 348);
							if (v26 != 0) {
								// 0x94554
								if (v26 == 1) {
									// 0x94560
									g24 = 246;
									// branch -> 0x94574
									// 0x94574
									*(char *)(g33 + 278) = -10;
									v24 = *(int32_t *)g31;
									v25 = *(int32_t *)g32;
									g13 = *(int32_t *)g25 + v24;
									function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
									v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
									v16 = v27;
									function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
									MemFreeDbg(&v16);
									// branch -> 0x945d8
									// 0x945d8
									v22 = QuestStatus(15);
									v19 = 0;
									if (v22 != 0) {
										// 0x945e8
										if (*(char *)g29 == 1) {
											// 0x945f4
											v19 = function_94078(v22);
											// branch -> 0x945f8
										} else {
											v19 = v22;
										}
									}
									// 0x945f8
									v23 = function_93120(v19);
									function_93fc4(v23);
									// branch -> 0x94600
									// 0x94600
									function_928f0(5, 10, 5);
									function_928f0(3, 6, 6);
									v28 = function_928f0(1, 5, 7);
									result = v28;
									v20 = g35;
									v21 = v20;
									if (*(char *)v20 != 4) {
										// 0x9463c
										result = function_936a4(v28);
										v21 = g35;
										// branch -> 0x94640
									}
									// 0x94640
									if ((*(char *)v21 || 1) != 1) {
										// 0x9464c
										result = function_938f4();
										// branch -> 0x94650
									}
									// 0x94650
									*(int32_t *)g30 = 0;
									// branch -> 0x94658
									// 0x94658
									g10 = v1;
									return result;
								}
								// 0x94568
								if (v26 == 2) {
									// 0x94570
									g24 = 242;
									v18 = -14;
									// branch -> 0x94574
								} else {
									// 0x94568
									v18 = g24;
									// branch -> 0x94574
								}
								// 0x94574
								*(char *)(g33 + 278) = v18;
								v24 = *(int32_t *)g31;
								v25 = *(int32_t *)g32;
								g13 = *(int32_t *)g25 + v24;
								function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
								v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
								v16 = v27;
								function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
								MemFreeDbg(&v16);
								// branch -> 0x945d8
								// 0x945d8
								v22 = QuestStatus(15);
								v19 = 0;
								if (v22 != 0) {
									// 0x945e8
									if (*(char *)g29 == 1) {
										// 0x945f4
										v19 = function_94078(v22);
										// branch -> 0x945f8
									} else {
										v19 = v22;
									}
								}
								// 0x945f8
								v23 = function_93120(v19);
								function_93fc4(v23);
								// branch -> 0x94600
								// 0x94600
								function_928f0(5, 10, 5);
								function_928f0(3, 6, 6);
								v28 = function_928f0(1, 5, 7);
								result = v28;
								v20 = g35;
								v21 = v20;
								if (*(char *)v20 != 4) {
									// 0x9463c
									result = function_936a4(v28);
									v21 = g35;
									// branch -> 0x94640
								}
								// 0x94640
								if ((*(char *)v21 || 1) != 1) {
									// 0x9464c
									result = function_938f4();
									// branch -> 0x94650
								}
								// 0x94650
								*(int32_t *)g30 = 0;
								// branch -> 0x94658
								// 0x94658
								g10 = v1;
								return result;
							}
							// 0x9454c
							g24 = 238;
							// branch -> 0x94574
							// 0x94574
							*(char *)(g33 + 278) = -18;
							v24 = *(int32_t *)g31;
							v25 = *(int32_t *)g32;
							g13 = *(int32_t *)g25 + v24;
							function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
							v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
							v16 = v27;
							function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
							MemFreeDbg(&v16);
							// branch -> 0x945d8
						}
						// 0x945d8
						v22 = QuestStatus(15);
						v19 = 0;
						if (v22 != 0) {
							// 0x945e8
							if (*(char *)g29 == 1) {
								// 0x945f4
								v19 = function_94078(v22);
								// branch -> 0x945f8
							} else {
								v19 = v22;
							}
						}
						// 0x945f8
						v23 = function_93120(v19);
						function_93fc4(v23);
						// branch -> 0x94600
					}
					// 0x94600
					function_928f0(5, 10, 5);
					function_928f0(3, 6, 6);
					v28 = function_928f0(1, 5, 7);
					result = v28;
					v20 = g35;
					v21 = v20;
					if (*(char *)v20 != 4) {
						// 0x9463c
						result = function_936a4(v28);
						v21 = g35;
						// branch -> 0x94640
					}
					// 0x94640
					if ((*(char *)v21 || 1) != 1) {
						// 0x9464c
						result = function_938f4();
						// branch -> 0x94650
					}
					// 0x94650
					*(int32_t *)g30 = 0;
					// branch -> 0x94658
					// 0x94658
					g10 = v1;
					return result;
				}
				// 0x94478
				g24 = 236;
				// branch -> 0x944a0
				// 0x944a0
				*(char *)(g33 + 230) = -20;
				v33 = *(int32_t *)g31;
				v34 = *(int32_t *)g32;
				g13 = v33 + 7;
				function_92f64(0, 0, 112, 112, v34, v33 + 3, v34 + 2, g24);
				v31 = AddObject(73, 2 * *(int32_t *)g32 + 25, 2 * *(int32_t *)g31 + 32);
				// branch -> 0x944f0
			}
			// 0x944f0
			function_93120(v31);
			v15 = g35;
			// branch -> 0x944f4
		}
		// 0x944f4
		v17 = v15;
		if (*(char *)v15 == 3) {
			// 0x94500
			v29 = function_93410(0, 0, 112, 112);
			function_93120(v29);
			v17 = g35;
			// branch -> 0x94518
		}
		// 0x94518
		if (*(char *)v17 == 4) {
			// 0x94524
			if (QuestStatus(11) != 0) {
				// 0x94534
				v26 = *(char *)(g28 + 0x55ec * *(int32_t *)g27 + 348);
				if (v26 == 0) {
					// 0x9454c
					g24 = 238;
					// branch -> 0x94574
				} else {
					// 0x94554
					if (v26 != 1) {
						// 0x94568
						if (v26 == 2) {
							// 0x94570
							g24 = 242;
							v18 = -14;
							// branch -> 0x94574
						} else {
							// 0x94568
							v18 = g24;
							// branch -> 0x94574
						}
						// 0x94574
						*(char *)(g33 + 278) = v18;
						v24 = *(int32_t *)g31;
						v25 = *(int32_t *)g32;
						g13 = *(int32_t *)g25 + v24;
						function_92f64(0, 0, 112, 112, v25, v24, *(int32_t *)g26 + v25, g24);
						v27 = LoadFileInMem(*(int32_t *)(g23 - 0x5b20), NULL);
						v16 = v27;
						function_93b18(v27, 2 * *(int32_t *)g32, 2 * *(int32_t *)g31);
						MemFreeDbg(&v16);
						// branch -> 0x945d8
						// 0x945d8
						v22 = QuestStatus(15);
						v19 = 0;
						if (v22 != 0) {
							// 0x945e8
							if (*(char *)g29 == 1) {
								// 0x945f4
								v19 = function_94078(v22);
								// branch -> 0x945f8
							} else {
								v19 = v22;
							}
						}
						// 0x945f8
						v23 = function_93120(v19);
						function_93fc4(v23);
						// branch -> 0x94600
						// 0x94600
						function_928f0(5, 10, 5);
						function_928f0(3, 6, 6);
						v28 = function_928f0(1, 5, 7);
						result = v28;
						v20 = g35;
						v21 = v20;
						if (*(char *)v20 != 4) {
							// 0x9463c
							result = function_936a4(v28);
							v21 = g35;
							// branch -> 0x94640
						}
						// 0x94640
						if ((*(char *)v21 || 1) != 1) {
							// 0x9464c
							result = function_938f4();
							// branch -> 0x94650
						}
						// 0x94650
						*(int32_t *)g30 = 0;
						// branch -> 0x94658
						// 0x94658
						g10 = v1;
						return result;
					}
					// 0x94560
					g24 = 246;
					// branch -> 0x94574
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x9466c - 0x94970
int32_t SetMapObjects(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x9466c
	g34 = a1;
	int32_t v1 = g10; // 0x94670
	g24 = *(int32_t *)(g23 - 0x6fec);
	g30 = g34;
	g25 = *(int32_t *)(g23 - 0x6fe8);
	g31 = a2;
	g27 = *(int32_t *)(g23 - 0x5b00);
	g32 = a3;
	g28 = *(int32_t *)(g23 - 0x6fd8);
	g29 = *(int32_t *)(g23 - 0x6fc8);
	int32_t v2 = function_c9948(); // 0x946a0
	function_92c7c();
	*(int32_t *)g25 = 1;
	int32_t v3;       // bp-288
	int32_t v4 = &v3; // 0x946bc
	int32_t v5 = v4;  // r19
	v3 = 0;
	int32_t v6 = g29;                                       // 0x946c4
	int32_t v7 = v6;                                        // r6
	unsigned char v8 = *(char *)*(int32_t *)(g23 - 0x7794); // 0x947a4
	unsigned char v9 = *(char *)v6;                         // 0x947dc17
	int32_t v10;                                            // ctr
	int32_t v11;                                            // r3
	int32_t v12;                                            // r4
	int32_t v13;                                            // 0x947ec
	int32_t v14;                                            // 0x94834
	int32_t v15;                                            // 0x9483c
	int32_t v16;                                            // 0x9483c28
	int32_t v17;                                            // 0x9483c29
	int32_t v18;                                            // 0x9486c31
	int32_t v19;                                            // 0x94870
	int32_t v20;                                            // 0x9487033
	int32_t v21;                                            // 0x9488c
	int32_t v22;                                            // 0x9489c
	int32_t v23;                                            // 0x948d8
	int32_t v24;                                            // 0x948dc
	int32_t v25;                                            // 0x948e4
	int32_t v26;                                            // 0x947ec
	int32_t v27;                                            // 0x94808
	int32_t v28;                                            // 0x94810
	int32_t v29;                                            // 0x94874
	int32_t v30;                                            // 0x9487435
	int32_t v31;                                            // 0x94820
	int32_t v32;                                            // 0x947f0
	unsigned char v33;                                      // 0x947f4
	int32_t v34;                                            // 0x94880
	int32_t v35;                                            // 0x947f4
	if (v9 != -1) {
		int32_t v36 = v9; // 0x947ac
		while (true) {
			int32_t v37 = v6; // 0x947d8
			if (0x1000000 * v36 == 0x1000000) {
				// 0x947b8
				if ((int32_t)v8 == (int32_t) * (char *)(v6 + 4)) {
					char v38 = *(char *)(v6 + 1); // 0x947c8
					*(int32_t *)(v5 + 4 * (int32_t)v38) = 1;
					v37 = v7;
					// branch -> 0x947d8
				} else {
					v37 = v6;
				}
			}
			int32_t v39 = v37 + 44; // 0x947d8
			v7 = v39;
			unsigned char v40 = *(char *)v39; // 0x947dc
			if (v40 == -1) {
				// break -> 0x947ec
				break;
			}
			v6 = v39;
			v36 = v40;
			// continue -> 0x947ac
		}
		// 0x947ec
		v13 = v2;
		v26 = v13 + 2;
		v32 = (int32_t) * (char *)v13;
		v33 = *(char *)v26;
		v35 = v33;
		v11 = 0;
		v27 = 2 * v32;
		g36 = v27;
		v28 = 2 * v35;
		g35 = v28;
		v31 = 2 * v32 * v35 + 2 + 8 * v32 * v28 + v26;
		v12 = v31;
		g33 = v31;
		if (v33 != 0) {
			v30 = v28;
			v20 = 0;
			v16 = v31;
			v14 = v27;
			while (true) {
				// 0x94830
				v10 = v14;
				v29 = v30;
				v19 = v20;
				v17 = v16;
				if (v14 >= 1) {
					v18 = v14;
					v15 = v16;
				lab_0x9483c:;
					int32_t v41; // 0x94868
					while (true) {
						unsigned char v42 = *(char *)v15; // 0x9483c
						int32_t v43 = v18;                // 0x9486c
						int32_t v44 = v15;                // 0x94868
						if (v42 != 0) {
							int32_t v45 = 44 * *(int32_t *)(g24 + 4 * (int32_t)v42); // 0x94850
							*(int32_t *)(v4 + 4 * (int32_t) * (char *)(g29 + (v45 | 1))) = 1;
							v43 = v10;
							v44 = v12;
							// branch -> 0x94868
						}
						// 0x94868
						v41 = v44 + 2;
						v12 = v41;
						int32_t v46 = v43 - 1; // 0x9486c
						v10 = v46;
						if (v46 == 0) {
							// break -> 0x94870
							break;
						}
						v18 = v46;
						v15 = v41;
						// continue -> 0x9483c
					}
					// 0x94870
					v29 = g35;
					v19 = v11;
					v17 = v41;
					// branch -> 0x94870
				}
			lab_0x94870:;
				int32_t v47 = v19 + 1; // 0x94870
				v11 = v47;
				if (v47 < v29) {
					// 0x94870
					v30 = v29;
					v20 = v47;
					v16 = v17;
					v14 = g36;
					// branch -> 0x94830
					continue;
				}
			}
		}
		// 0x9487c
		g21 = 0;
		v34 = *(int32_t *)(g23 - 0x6fd4);
		g29 = v34;
		int32_t v48 = v34; // 0x948dc40
		v22 = 0;
		v21 = v5;
		// branch -> 0x9488c
		while (true) {
			// 0x9488c
			v25 = v21;
			v24 = v48;
			v23 = v22;
			if (*(int32_t *)v21 != 0) {
			lab_0x94898:;
				int32_t v49 = *(int32_t *)(g23 - 0x4cc8); // 0x94898
				g37 = g27;
				*(char *)(g28 + v49) = (char)(0x1000000 * v22 / 0x1000000);
				g38 = *(int32_t *)g29;
				sprintf();
				int32_t v50;                                      // bp-320
				int32_t v51 = LoadFileInMem((int32_t)&v50, NULL); // 0x948bc
				*(int32_t *)(g26 + 4 * *(int32_t *)(g23 - 0x4cc8)) = v51;
				int32_t *v52 = (int32_t *)(g23 - 0x4cc8); // 0x948cc
				*v52 = *v52 + 1;
				v25 = g22;
				v24 = g29;
				v23 = g21;
				// branch -> 0x948d8
			}
		lab_0x948d8:;
			int32_t v53 = v23 + 1; // 0x948d8
			g21 = v53;
			int32_t v54 = v24 + 4; // 0x948dc
			g29 = v54;
			if (v53 >= 56) {
				// break -> 0x948ec
				break;
			}
			v48 = v54;
			v22 = v53;
			v21 = v25 + 4;
			// continue -> 0x9488c
		}
		int32_t v55 = g33; // 0x948ec
		v5 = v55;
		int32_t v56 = 0;   // r22
		int32_t v57 = g35; // 0x949446
		int32_t result;    // 0x94950
		if (v57 <= 0) {
			// 0x9494c
			result = function_c9acc(g30);
			*(int32_t *)g25 = 0;
			g10 = v1;
			return result;
		}
		int32_t v58 = g36; // 0x949382
		int32_t v59 = 0;   // 0x948f8
		// branch -> 0x948f8
		while (true) {
			int32_t v60 = v59 + 16 + g32; // r23
			g21 = 0;
			int32_t v61 = v57; // 0x94944
			int32_t v62 = v59; // 0x94940
			int32_t v63 = v55; // 0x9490c47
			int32_t v64 = v58; // 0x94938244
			if (v58 > 0) {
				int32_t v65 = v58; // 0x9493852
				int32_t v66 = 0;   // 0x9491c
				int32_t v67 = v55; // 0x9490c
				int32_t v68;       // 0x94930
				int32_t v69;       // 0x94938
				while (true) {
					unsigned char v70 = *(char *)v67; // 0x9490c
					v69 = v65;
					int32_t v71 = v66; // 0x94934
					int32_t v72 = v67; // 0x94930
					if (v70 != 0) {
						int32_t v73 = *(int32_t *)(g24 + 4 * (int32_t)v70); // 0x94920
						AddObject(v73, g31 + v66 + 16, v60);
						v69 = g36;
						v71 = g21;
						v72 = v5;
						// branch -> 0x94930
					}
					// 0x94930
					v68 = v72 + 2;
					v5 = v68;
					int32_t v74 = v71 + 1; // 0x94934
					g21 = v74;
					if (v74 >= v69) {
						// break -> 0x94938
						break;
					}
					v65 = v69;
					v66 = v74;
					v67 = v68;
					// continue -> 0x9490c
				}
				// 0x94938
				v61 = g35;
				v62 = v56;
				v63 = v68;
				v64 = v69;
				// branch -> 0x94940
			}
			int32_t v75 = v62 + 1; // 0x94940
			v56 = v75;
			if (v75 >= v61) {
				// break -> 0x9494c
				break;
			}
			v57 = v61;
			v55 = v63;
			v58 = v64;
			v59 = v75;
			// continue -> 0x948f8
		}
		// 0x9494c
		result = function_c9acc(g30);
		*(int32_t *)g25 = 0;
		g10 = v1;
		return result;
	}
	// 0x947ec
	v13 = v2;
	v26 = v13 + 2;
	v32 = (int32_t) * (char *)v13;
	v33 = *(char *)v26;
	v35 = v33;
	v11 = 0;
	v27 = 2 * v32;
	g36 = v27;
	v28 = 2 * v35;
	g35 = v28;
	v31 = 2 * v32 * v35 + 2 + 8 * v32 * v28 + v26;
	v12 = v31;
	g33 = v31;
	if (v33 != 0) {
		v30 = v28;
		v20 = 0;
		v16 = v31;
		v14 = v27;
		while (true) {
			// 0x94830
			v10 = v14;
			if (v14 < 1) {
				v29 = v30;
				v19 = v20;
				v17 = v16;
				goto lab_0x94870;
			}
			v18 = v14;
			v15 = v16;
			goto lab_0x9483c;
		}
	}
	// 0x9487c
	g21 = 0;
	v34 = *(int32_t *)(g23 - 0x6fd4);
	g29 = v34;
	v22 = 0;
	v21 = v5;
	// branch -> 0x9488c
	while (true) {
		// 0x9488c
		if (*(int32_t *)v21 == 0) {
			v25 = v21;
			v24 = v34;
			v23 = v22;
			goto lab_0x948d8;
		}
		goto lab_0x94898;
	}
}

// Address range: 0x94970 - 0x949ec
int32_t function_94970(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7684);            // 0x94978
	int32_t v2 = *(int32_t *)(g23 - 0x7194);            // r9
	int32_t v3 = *(int32_t *)(g23 - 0x7688) + 120 * a1; // 0x94980
	int32_t v4 = *(int32_t *)(v3 + 4);                  // 0x94984
	int32_t v5 = *(int32_t *)(v3 + 8);                  // 0x9498c
	int32_t v6 = *(int32_t *)(g23 - 0x7154);            // 0x94998
	int32_t v7 = *(int32_t *)(g23 - 0x7190);            // r10
	*(char *)(*(int32_t *)v1 + v5 + 112 * v4) = 0;
	*(int32_t *)(v6 + 4 * (127 - *(int32_t *)v2)) = a1;
	int32_t *v8 = (int32_t *)v2; // 0x949b8
	int32_t result = *v8;        // 0x949b8
	*v8 = result - 1;
	int32_t v9 = *(int32_t *)v2; // 0x949c4
	if (v9 < 1 || a2 == v9) {
		// bb
		return result;
	}
	int32_t result2 = *(int32_t *)(v7 + 4 * v9); // 0x949dc
	*(int32_t *)(v7 + 4 * a2) = result2;
	return result2;
}

// Address range: 0x949ec - 0x94b2c
int32_t function_949ec(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g10;      // 0x949f0
	int32_t v2 = 120 * a1; // 0x949f4
	g33 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7688); // 0x949f8
	g35 = v3;
	g36 = *(int32_t *)(g23 - 0x6fc8);
	int32_t v4 = v3 + v2; // 0x94a04
	int32_t result = v4;  // r3
	g32 = 44 * a4;
	*(int32_t *)v4 = a4;
	*(int32_t *)(result + 4) = a2;
	*(int32_t *)(result + 8) = a3;
	int32_t v5 = g32 + g36;                  // 0x94a24
	char v6 = *(char *)(v5 + 1);             // 0x94a28
	int32_t v7 = *(int32_t *)(g23 - 0x6fd8); // 0x94a3c1
	int32_t v8 = 0;
	int32_t v9;  // r4
	int32_t v10; // r5
	int32_t v11; // 0x94a6c
	int32_t v12; // 0x94a54
	int32_t v13; // 0x94acc
	int32_t v14; // 0x94ad0
	int32_t v15; // 0x94a78
	int32_t v16; // 0x94a90
	int32_t v17; // 0x94a5c
	if (*(char *)v7 == v6) {
		// 0x94a4c
		v12 = g33 + g35;
		g30 = v12;
		g31 = v5;
		v17 = *(int32_t *)(*(int32_t *)(g23 - 0x5b04) + 4 * v8);
		*(int32_t *)(v12 + 20) = v17;
		*(int32_t *)(g30 + 16) = *(int32_t *)(g31 + 8);
		v11 = g30;
		if (*(int32_t *)(v11 + 16) == 0) {
			// 0x94aac
			*(int32_t *)(v11 + 24) = 1000;
			*(int32_t *)(g30 + 28) = 0;
			*(int32_t *)(g30 + 32) = *(int32_t *)(g31 + 16);
			*(int32_t *)(g30 + 36) = *(int32_t *)(g31 + 12);
			// branch -> 0x94acc
		} else {
			// 0x94a78
			v15 = *(int32_t *)(g31 + 12);
			g37 = v15;
			*(int32_t *)(v11 + 24) = v15;
			*(int32_t *)(g30 + 28) = random(-110);
			v16 = *(int32_t *)(g31 + 16);
			*(int32_t *)(g30 + 32) = v16;
			g37 = v16 - 1;
			*(int32_t *)(g30 + 36) = random(-110) + 1;
			// branch -> 0x94acc
		}
		// 0x94acc
		v13 = g32 + g36;
		v10 = v13;
		v14 = g33 + g35;
		v9 = v14;
		result = 0;
		*(int32_t *)(v14 + 40) = *(int32_t *)(v13 + 20);
		*(int32_t *)(v9 + 56) = *(int32_t *)(v10 + 24);
		*(int32_t *)(v9 + 60) = *(int32_t *)(v10 + 28);
		*(int32_t *)(v9 + 12) = *(int32_t *)(v10 + 32);
		*(int32_t *)(v9 + 48) = result;
		*(char *)(v9 + 52) = *(char *)(v10 + 36);
		*(char *)(v9 + 64) = *(char *)(v10 + 37);
		*(int32_t *)(v9 + 68) = result;
		*(int32_t *)(v9 + 72) = result;
		*(int32_t *)(v9 + 76) = result;
		g10 = v1;
		return result;
	}
	int32_t v18 = v7 + 1; // 0x94a34
	int32_t v19 = v8 + 1; // 0x94a38
	while (*(char *)v18 != v6) {
		// 0x94a34
		v18++;
		v19++;
		// continue -> 0x94a34
	}
	// 0x94a4c
	v12 = g33 + g35;
	g30 = v12;
	g31 = v5;
	v17 = *(int32_t *)(*(int32_t *)(g23 - 0x5b04) + 4 * v19);
	*(int32_t *)(v12 + 20) = v17;
	*(int32_t *)(g30 + 16) = *(int32_t *)(g31 + 8);
	v11 = g30;
	if (*(int32_t *)(v11 + 16) == 0) {
		// 0x94aac
		*(int32_t *)(v11 + 24) = 1000;
		*(int32_t *)(g30 + 28) = 0;
		*(int32_t *)(g30 + 32) = *(int32_t *)(g31 + 16);
		*(int32_t *)(g30 + 36) = *(int32_t *)(g31 + 12);
		// branch -> 0x94acc
	} else {
		// 0x94a78
		v15 = *(int32_t *)(g31 + 12);
		g37 = v15;
		*(int32_t *)(v11 + 24) = v15;
		*(int32_t *)(g30 + 28) = random(-110);
		v16 = *(int32_t *)(g31 + 16);
		*(int32_t *)(g30 + 32) = v16;
		g37 = v16 - 1;
		*(int32_t *)(g30 + 36) = random(-110) + 1;
		// branch -> 0x94acc
	}
	// 0x94acc
	v13 = g32 + g36;
	v10 = v13;
	v14 = g33 + g35;
	v9 = v14;
	result = 0;
	*(int32_t *)(v14 + 40) = *(int32_t *)(v13 + 20);
	*(int32_t *)(v9 + 56) = *(int32_t *)(v10 + 24);
	*(int32_t *)(v9 + 60) = *(int32_t *)(v10 + 28);
	*(int32_t *)(v9 + 12) = *(int32_t *)(v10 + 32);
	*(int32_t *)(v9 + 48) = result;
	*(char *)(v9 + 52) = *(char *)(v10 + 36);
	*(char *)(v9 + 64) = *(char *)(v10 + 37);
	*(int32_t *)(v9 + 68) = result;
	*(int32_t *)(v9 + 72) = result;
	*(int32_t *)(v9 + 76) = result;
	g10 = v1;
	return result;
}

// Address range: 0x94b2c - 0x94b50
int32_t SetObjMapRange(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t result = *(int32_t *)(g23 - 0x7688) + 120 * a1; // 0x94b34
	*(int32_t *)(result + 88) = a2;
	*(int32_t *)(result + 92) = a3;
	*(int32_t *)(result + 96) = a4;
	*(int32_t *)(result + 100) = a5;
	*(int32_t *)(result + 116) = a6;
	return result;
}

// Address range: 0x94b50 - 0x94b64
int32_t function_94b50(int32_t a1, int32_t a2)
{
	int32_t result = *(int32_t *)(g23 - 0x7688) + 120 * a1; // 0x94b58
	*(int32_t *)(result + 112) = a2;
	return result;
}

// Address range: 0x94b64 - 0x94be8
int32_t function_94b64(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = 120 * a1;                   // 0x94b64
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x94b68
	int32_t v3 = v2 + v1;                    // 0x94b74
	*(int32_t *)(v3 + 76) = 1;
	int32_t v4 = 224 * a2;                               // 0x94b84
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x757c); // 0x94b88
	int32_t v6 = 2 * a3;                                 // 0x94b8c
	int32_t v7 = v6 + v5 + v4;                           // r3
	int16_t v8 = *(int16_t *)(v6 + v4 + v5);             // 0x94b9c
	*(int32_t *)(v3 + 88) = (int32_t)v8;
	if (a4 == 1) {
		// 0x94b84
		*(int32_t *)(v3 + 92) = (int32_t) * (int16_t *)(v7 - 2);
		// branch -> 0x94bd8
	} else {
		int16_t v9 = *(int16_t *)(v7 - 224); // 0x94bd0
		*(int32_t *)(v3 + 92) = (int32_t)v9;
		// branch -> 0x94bd8
	}
	int32_t result = v1 + v2; // 0x94bd8
	*(int32_t *)(result + 100) = 0;
	return result;
}

// Address range: 0x94be8 - 0x94c44
int32_t function_94be8(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x754c); // 0x94bf4
	int32_t v2 = *(int32_t *)(g23 - 0x7688) + 120 * a1;  // 0x94bf8
	*(int32_t *)(v2 + 88) = v1;
	int32_t v3 = *(int32_t *)(g23 - 0x7554);             // 0x94c04
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x7550); // 0x94c08
	int32_t v5 = *(int32_t *)(g23 - 0x7558);             // 0x94c0c
	*(int32_t *)(v2 + 92) = v4;
	*(int32_t *)(v2 + 96) = *(int32_t *)v3 + 1 + v1;
	*(int32_t *)(v2 + 100) = *(int32_t *)v5 + 1 + v4;
	int32_t result = *(int32_t *)(v2 + 36); // 0x94c34
	*(int32_t *)(v2 + 108) = result + 1;
	return result;
}

// Address range: 0x94c44 - 0x94db4
int32_t function_94c44(int32_t a1, int32_t a2)
{
	// 0x94c44
	g36 = *(int32_t *)(g23 - 0x7688);
	int32_t v1 = *(int32_t *)(g23 - 0x77d8); // 0x94c54
	g37 = 2;
	if (random(-109) == 0) {
		int32_t *v2 = (int32_t *)(g36 + 120 * a1 + 36); // 0x94c8c
		*v2 = *v2 + 3;
		// branch -> 0x94c98
	}
	int32_t v3 = GetRndSeed(); // 0x94c98
	int32_t v4 = 120 * a1;     // 0x94c9c
	a1 = v4;
	*(int32_t *)(g36 + v4 + 84) = v3;
	int32_t result; // 0x94d88
	if (a2 == 68) {
		// 0x94ce8
		if (*(char *)v1 == 0) {
			// 0x94d04
			g37 = 2;
			*(int32_t *)(a1 + g36 + 88) = random(-109);
			// branch -> 0x94d80
		} else {
			// 0x94cf4
			*(int32_t *)(a1 + g36 + 88) = 1;
			// branch -> 0x94d80
		}
		// 0x94d80
		g37 = 8;
		result = random(-109);
		*(int32_t *)(a1 + g36 + 92) = result;
		return result;
	}
	// 0x94cb0
	if (a2 > 68) {
		// 0x94cd8
		if (a2 == 70) {
			// 0x94d50
			if (*(char *)v1 == 0) {
				// 0x94d6c
				g37 = 4;
				*(int32_t *)(a1 + g36 + 88) = random(-109);
				// branch -> 0x94d80
			} else {
				// 0x94d5c
				*(int32_t *)(a1 + g36 + 88) = 3;
				// branch -> 0x94d80
			}
			// 0x94d80
			g37 = 8;
			result = random(-109);
			*(int32_t *)(a1 + g36 + 92) = result;
			return result;
		}
		// 0x94ce0
		if (a2 <= 70) {
			// 0x94d1c
			if (*(char *)v1 == 0) {
				// 0x94d38
				g37 = 3;
				*(int32_t *)(a1 + g36 + 88) = random(-109);
				// branch -> 0x94d80
			} else {
				// 0x94d28
				*(int32_t *)(a1 + g36 + 88) = 2;
				// branch -> 0x94d80
			}
			// 0x94d80
			g37 = 8;
			result = random(-109);
			*(int32_t *)(a1 + g36 + 92) = result;
			return result;
		}
		// 0x94d80
		g37 = 8;
		result = random(-109);
		*(int32_t *)(a1 + g36 + 92) = result;
		return result;
	}
	// 0x94cb4
	if (a2 != 6) {
		// 0x94cbc
		if (a2 > 6) {
			// 0x94ccc
			if (a2 == 7) {
				// 0x94d50
				if (*(char *)v1 == 0) {
					// 0x94d6c
					g37 = 4;
					*(int32_t *)(a1 + g36 + 88) = random(-109);
					// branch -> 0x94d80
				} else {
					// 0x94d5c
					*(int32_t *)(a1 + g36 + 88) = 3;
					// branch -> 0x94d80
				}
				// 0x94d80
				g37 = 8;
				result = random(-109);
				*(int32_t *)(a1 + g36 + 92) = result;
				return result;
			}
		} else {
			// 0x94cc0
			if (a2 > 4) {
				// 0x94ce8
				if (*(char *)v1 == 0) {
					// 0x94d04
					g37 = 2;
					*(int32_t *)(a1 + g36 + 88) = random(-109);
					// branch -> 0x94d80
				} else {
					// 0x94cf4
					*(int32_t *)(a1 + g36 + 88) = 1;
					// branch -> 0x94d80
				}
				// 0x94d80
				g37 = 8;
				result = random(-109);
				*(int32_t *)(a1 + g36 + 92) = result;
				return result;
			}
		}
		// 0x94d80
		g37 = 8;
		result = random(-109);
		*(int32_t *)(a1 + g36 + 92) = result;
		return result;
	}
	// 0x94d1c
	if (*(char *)v1 == 0) {
		// 0x94d38
		g37 = 3;
		*(int32_t *)(a1 + g36 + 88) = random(-109);
		// branch -> 0x94d80
	} else {
		// 0x94d28
		*(int32_t *)(a1 + g36 + 88) = 2;
		// branch -> 0x94d80
	}
	// 0x94d80
	g37 = 8;
	result = random(-109);
	*(int32_t *)(a1 + g36 + 92) = result;
	return result;
}

// Address range: 0x94db4 - 0x94e2c
int32_t AddL2Door(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x94dbc
	g36 = v1;
	int32_t v2 = 120 * a1; // 0x94dc8
	g35 = v2;
	*(int32_t *)(v1 + 76 + v2) = 1;
	if (a4 == 42) {
		// 0x94de4
		ObjSetMicro(a2, a3, 538);
		// branch -> 0x94e08
	} else {
		// 0x94df8
		ObjSetMicro(a2, a3, 540);
		// branch -> 0x94e08
	}
	int32_t result = g35 + g36; // 0x94e08
	*(int32_t *)(result + 100) = 0;
	return result;
}

// Address range: 0x94e2c - 0x94ea4
int32_t AddL3Door(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x94e34
	g36 = v1;
	int32_t v2 = 120 * a1; // 0x94e40
	g35 = v2;
	*(int32_t *)(v1 + 76 + v2) = 1;
	if (a4 == 74) {
		// 0x94e5c
		ObjSetMicro(a2, a3, 531);
		// branch -> 0x94e80
	} else {
		// 0x94e70
		ObjSetMicro(a2, a3, 534);
		// branch -> 0x94e80
	}
	int32_t result = g35 + g36; // 0x94e80
	*(int32_t *)(result + 100) = 0;
	return result;
}

// Address range: 0x94ea4 - 0x94f34
int32_t function_94ea4(int32_t a1)
{
	int32_t v1 = 0x1000000 * a1 / 0x1000000;            // 0x94eb8
	int32_t v2 = *(int32_t *)(g23 - 0x7688) + 120 * a1; // 0x94ecc
	g36 = v2;
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x7684); // 0x94ed0
	int32_t v4 = *(int32_t *)(v2 + 4);                   // 0x94ed4
	int32_t v5 = *(int32_t *)(v2 + 8);                   // 0x94ed8
	*(char *)(v3 - 1 + 112 * v4 + v5) = (char)(-1 - v1);
	g37 = 10;
	int32_t v6 = random(-103); // 0x94ef4
	int32_t v7 = g36 + 88;     // 0x94ef8
	*(int32_t *)v7 = v6;
	int32_t v8 = GetRndSeed(); // 0x94f00
	int32_t result = v8;       // r3
	*(int32_t *)(g36 + 84) = v8;
	if (*(int32_t *)v7 >= 8) {
		int32_t v9 = function_871a8(result); // 0x94f14
		result = v9;
		*(int32_t *)(g36 + 92) = v9;
		// branch -> 0x94f1c
	}
	// 0x94f1c
	return result;
}

// Address range: 0x94f34 - 0x94f68
int32_t function_94f34(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688) + 120 * a1; // 0x94f44
	int32_t result = *(int32_t *)(g23 - 0x6fe0);        // r3
	*(int32_t *)(v1 + 88) = *(int32_t *)*(int32_t *)(g23 - 0x6fdc);
	*(int32_t *)(v1 + 92) = 0;
	*(int32_t *)(v1 + 96) = *(int32_t *)result;
	*(int32_t *)(v1 + 100) = 0;
	return result;
}

// Address range: 0x94f68 - 0x94f8c
int32_t function_94f68(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x7688) + 120 * a1; // 0x94f78
	*(int32_t *)(result + 88) = *(int32_t *)*(int32_t *)(g23 - 0x6fdc);
	*(int32_t *)(result + 92) = 49;
	return result;
}

// Address range: 0x94f8c - 0x95044
int32_t function_94f8c(int32_t a1, int32_t a2)
{
	// 0x94f8c
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // r30
	g37 = (int32_t)(*(char *)*(int32_t *)(g23 - 0x77e4) / 3) + 1;
	int32_t v2 = random(-108); // 0x94fd0
	int32_t v3 = v2;           // 0x94fec
	if (v2 == 0) {
		// 0x94fdc
		*(int32_t *)(v1 + 120 * g36 + 96) = 0;
		v3 = v2;
		// branch -> 0x94fec
	}
	int32_t v4 = v3; // 0x95004
	if (v3 == 1) {
		// 0x94ff4
		*(int32_t *)(v1 + 120 * g36 + 96) = 1;
		v4 = v2;
		// branch -> 0x95004
	}
	// 0x95004
	if (v4 == 2) {
		// 0x9500c
		*(int32_t *)(v1 + 120 * g36 + 96) = 7;
		// branch -> 0x9501c
	}
	int32_t result = v1 + 120 * g36; // 0x95020
	*(int32_t *)(result + 100) = 0;
	return result;
}

// Address range: 0x95044 - 0x950b4
int32_t function_95044(int32_t a1, int32_t a2)
{
	int32_t v1 = 120 * a1 + *(int32_t *)(g23 - 0x7688); // 0x95094
	int32_t result;                                     // r3
	if (*(int32_t *)*(int32_t *)(g23 - 0x6fe8) == 0) {
		// 0x95090
		result = v1;
		*(int32_t *)(v1 + 88) = 0;
		// branch -> 0x950a0
	} else {
		int32_t v2 = *(int32_t *)(v1 + 8); // 0x95078
		result = function_c9ebc(*(int32_t *)(v1 + 4), v2, a2, -1);
		*(int32_t *)(g36 + 88) = -1;
		// branch -> 0x950a0
	}
	// 0x950a0
	return result;
}

// Address range: 0x950b4 - 0x95138
int32_t function_950b4(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688) + 120 * a1; // 0x950d0
	g36 = v1;
	*(int32_t *)(v1 + 88) = 0;
	*(int32_t *)(g36 + 84) = GetRndSeed();
	g37 = 10;
	int32_t v2 = random(-107); // 0x950f0
	int32_t v3 = g36 + 92;     // 0x950f4
	*(int32_t *)v3 = v2;
	g37 = 3;
	int32_t v4 = random(-107); // 0x95104
	int32_t result = v4;       // r3
	*(int32_t *)(g36 + 96) = v4;
	if (*(int32_t *)v3 >= 8) {
		int32_t v5 = function_871a8(result); // 0x95118
		result = v5;
		*(int32_t *)(g36 + 100) = v5;
		// branch -> 0x95120
	}
	// 0x95120
	return result;
}

// Address range: 0x95138 - 0x952f4
int32_t function_95138(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x95140
	g36 = v1;
	int32_t v2 = 0;                          // r9
	int32_t v3 = 120 * a1;                   // 0x9514c
	int32_t v4 = *(int32_t *)(g23 - 0x5b24); // r6
	int32_t v5 = *(int32_t *)(g23 - 0x5b28); // r7
	*(int32_t *)(v3 + v1 + 68) = 1;
	int32_t v6 = 13;                                             // ctr
	int32_t v7 = *(int32_t *)(g23 - 0x5b2c);                     // r5
	int32_t v8 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x95184
	int32_t v9 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77f0); // r3
	int32_t v10;                                                 // bp-120
	int32_t v11 = &v10;                                          // 0x9518c
	int32_t v12 = v11;                                           // r8
	int32_t v13 = v11;                                           // 0x951c0
	int32_t v14 = v4;                                            // 0x95190
	// branch -> 0x95190
	while (true) {
		// 0x95190
		if (v8 >= (int32_t) * (char *)v14) {
			// 0x951a0
			if (v8 <= (int32_t) * (char *)v5) {
				// 0x951b0
				*(int32_t *)v13 = 1;
				// branch -> 0x951c4
			lab_0x951c4_2:;
				int32_t v15 = 1; // 0x951e0
				if (v9 != 1) {
					// 0x951cc
					if (*(char *)v7 == 1) {
						// 0x951d8
						*(int32_t *)v12 = 0;
						v15 = v9;
						// branch -> 0x951e0
					} else {
						v15 = v9;
					}
				}
				// 0x951e0
				if (v15 == 1) {
					// 0x951e8
					if (*(char *)v7 == 2) {
						// 0x951f4
						*(int32_t *)v12 = 0;
						// branch -> 0x951fc
					}
				}
				int32_t v16 = v4 + 1;  // 0x951fc
				int32_t v17 = v5 + 1;  // 0x95200
				int32_t v18 = v12 + 4; // 0x95204
				v12 = v18;
				v7++;
				if (v8 >= (int32_t) * (char *)v16) {
					// 0x95218
					if (v8 <= (int32_t) * (char *)v17) {
						// 0x95228
						*(int32_t *)v18 = 1;
						// branch -> 0x9523c
					lab_0x9523c:;
						int32_t v19 = 1; // 0x95258
						if (v9 != 1) {
							// 0x95244
							if (*(char *)v7 == 1) {
								// 0x95250
								*(int32_t *)v12 = 0;
								v19 = v9;
								// branch -> 0x95258
							} else {
								v19 = v9;
							}
						}
						// 0x95258
						if (v19 == 1) {
							// 0x95260
							if (*(char *)v7 == 2) {
								// 0x9526c
								*(int32_t *)v12 = 0;
								// branch -> 0x95274
							}
						}
						int32_t v20 = v16 + 1; // 0x95274
						v4 = v20;
						v5 = v17 + 1;
						int32_t v21 = v12 + 4; // 0x9527c
						v12 = v21;
						v7++;
						v2++;
						int32_t v22 = v6 - 1; // 0x95288
						v6 = v22;
						if (v22 == 0) {
							// 0x9528c
							g37 = 26;
							int32_t v23 = random(-106); // 0x95298
							// branch -> 0x95290
							while (*(int32_t *)(v11 + 4 * v23) == 0) {
								// 0x95290
								g37 = 26;
								v23 = random(-106);
								// continue -> 0x95290
							}
							int32_t v24 = v3 + g36; // 0x952ac
							*(int32_t *)(v24 + 88) = v23;
							g37 = 2;
							int32_t result = random(-106); // 0x952bc
							if (result != 0) {
								// 0x952c8
								*(int32_t *)(v24 + 36) = 12;
								*(int32_t *)(v24 + 32) = 22;
								// branch -> 0x952d8
							} else {
								result = 0;
							}
							// 0x952d8
							return result;
						}
						// 0x95274
						v13 = v21;
						v14 = v20;
						// branch -> 0x95190
						continue;
					}
				}
				// 0x95234
				*(int32_t *)v18 = 0;
				// branch -> 0x9523c
				goto lab_0x9523c;
			}
			// 0x951bc
			*(int32_t *)v13 = 0;
			// branch -> 0x951c4
			goto lab_0x951c4_2;
		}
		// 0x951bc
		*(int32_t *)v13 = 0;
		// branch -> 0x951c4
		goto lab_0x951c4_2;
	}
}

// Address range: 0x952f4 - 0x95340
int32_t function_952f4(int32_t a1)
{
	int32_t result = GetRndSeed();                      // 0x95310
	int32_t v1 = *(int32_t *)(g23 - 0x7688) + 120 * a1; // 0x95318
	*(int32_t *)(v1 + 84) = result;
	*(int32_t *)(v1 + 68) = 1;
	return result;
}

// Address range: 0x95340 - 0x9537c
int32_t function_95340(int32_t a1)
{
	int32_t result = GetRndSeed(); // 0x95354
	*(int32_t *)(*(int32_t *)(g23 - 0x7688) + 120 * a1 + 84) = result;
	return result;
}

// Address range: 0x9537c - 0x953b8
int32_t function_9537c(int32_t a1)
{
	int32_t result = GetRndSeed(); // 0x95390
	*(int32_t *)(*(int32_t *)(g23 - 0x7688) + 120 * a1 + 84) = result;
	return result;
}

// Address range: 0x953b8 - 0x9543c
int32_t function_953b8(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7684);                                // 0x953c4
	int32_t v2 = *(int32_t *)(g23 - 0x7688) + 120 * a1;                     // 0x953d4
	int32_t v3 = 112 * *(int32_t *)(v2 + 4);                                // 0x953e8
	int32_t v4 = *(int32_t *)(v2 + 8);                                      // 0x953ec
	int32_t v5 = 0x1000000 * (-1 - 0x1000000 * a1 / 0x1000000) / 0x1000000; // 0x953f4
	int32_t v6 = v4 + *(int32_t *)v1 + v3;                                  // 0x953f8
	*(char *)(v6 - 1) = (char)v5;
	int32_t v7 = v4 + v3 + *(int32_t *)v1; // 0x95408
	*(char *)(v7 - 112) = (char)v5;
	int32_t v8 = v4 + v3 + *(int32_t *)v1; // 0x95418
	*(char *)(v8 - 113) = (char)v5;
	int32_t result = GetRndSeed(); // 0x95420
	*(int32_t *)(v2 + 84) = result;
	return result;
}

// Address range: 0x9543c - 0x954a8
int32_t function_9543c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x95450
	if (*(int32_t *)*(int32_t *)(g23 - 0x6ff0) == 0) {
		int32_t v2 = v1 + 120 * a1; // 0x9546c
		*(int32_t *)(v2 + 16) = 2;
		*(char *)(v2 + 64) = 0;
		// branch -> 0x95480
	}
	int32_t result = GetRndSeed(); // 0x95480
	*(int32_t *)(v1 + 120 * a1 + 84) = result;
	return result;
}

// Address range: 0x954a8 - 0x954e4
int32_t function_954a8(int32_t a1)
{
	int32_t result = GetRndSeed(); // 0x954bc
	*(int32_t *)(*(int32_t *)(g23 - 0x7688) + 120 * a1 + 84) = result;
	return result;
}

// Address range: 0x954e4 - 0x95520
int32_t function_954e4(int32_t a1)
{
	int32_t result = GetRndSeed(); // 0x954f8
	*(int32_t *)(*(int32_t *)(g23 - 0x7688) + 120 * a1 + 84) = result;
	return result;
}

// Address range: 0x95520 - 0x955a4
int32_t function_95520(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7684);                                // 0x9552c
	int32_t v2 = *(int32_t *)(g23 - 0x7688) + 120 * a1;                     // 0x9553c
	int32_t v3 = 112 * *(int32_t *)(v2 + 4);                                // 0x95550
	int32_t v4 = *(int32_t *)(v2 + 8);                                      // 0x95554
	int32_t v5 = 0x1000000 * (-1 - 0x1000000 * a1 / 0x1000000) / 0x1000000; // 0x9555c
	int32_t v6 = v4 + *(int32_t *)v1 + v3;                                  // 0x95560
	*(char *)(v6 - 1) = (char)v5;
	int32_t v7 = v4 + v3 + *(int32_t *)v1; // 0x95570
	*(char *)(v7 - 112) = (char)v5;
	int32_t v8 = v4 + v3 + *(int32_t *)v1; // 0x95580
	*(char *)(v8 - 113) = (char)v5;
	int32_t result = GetRndSeed(); // 0x95588
	*(int32_t *)(v2 + 84) = result;
	return result;
}

// Address range: 0x955a4 - 0x955e0
int32_t function_955a4(int32_t a1)
{
	int32_t result = GetRndSeed(); // 0x955b8
	*(int32_t *)(*(int32_t *)(g23 - 0x7688) + 120 * a1 + 84) = result;
	return result;
}

// Address range: 0x955e0 - 0x95640
int32_t function_955e0(int32_t a1)
{
	int32_t v1 = GetRndSeed();                          // 0x955fc
	int32_t v2 = *(int32_t *)(g23 - 0x7688) + 120 * a1; // 0x95604
	g36 = v2;
	*(int32_t *)(v2 + 84) = v1;
	g37 = 8;
	int32_t result = random(-105); // 0x95614
	*(int32_t *)(g36 + 36) = result + 1;
	*(int32_t *)(g36 + 68) = 1;
	return result;
}

// Address range: 0x95640 - 0x95678
int32_t function_95640(int32_t result)
{
	// 0x95640
	if (*(char *)*(int32_t *)(g23 - 0x77d8) == 0 || *(char *)*(int32_t *)(g23 - 0x77e0) != 5) {
		// bb
		return result;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x7688) + 120 * result; // 0x95668
	*(int32_t *)(result2 + 36) = 4;
	return result2;
}

// Address range: 0x95678 - 0x956d0
int32_t function_95678(int32_t a1)
{
	int32_t v1 = GetRndSeed();                          // 0x95694
	int32_t v2 = *(int32_t *)(g23 - 0x7688) + 120 * a1; // 0x9569c
	*(int32_t *)(v2 + 84) = v1;
	int32_t result = 1; // r3
	*(int32_t *)(v2 + 68) = 1;
	*(int32_t *)(v2 + 108) = 0;
	*(int32_t *)(v2 + 104) = result;
	return result;
}

// Address range: 0x956d0 - 0x9570c
int32_t function_956d0(int32_t a1)
{
	int32_t result = GetRndSeed(); // 0x956e4
	*(int32_t *)(*(int32_t *)(g23 - 0x7688) + 120 * a1 + 84) = result;
	return result;
}

// Address range: 0x9570c - 0x95754
int32_t function_9570c(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x754c); // 0x95718
	int32_t v2 = *(int32_t *)(g23 - 0x7688) + 120 * a1;  // 0x9571c
	*(int32_t *)(v2 + 88) = v1;
	int32_t v3 = *(int32_t *)(g23 - 0x7554);             // 0x95728
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x7550); // 0x9572c
	int32_t result = *(int32_t *)(g23 - 0x7558);         // r3
	*(int32_t *)(v2 + 92) = v4;
	*(int32_t *)(v2 + 96) = v1 + *(int32_t *)v3;
	*(int32_t *)(v2 + 100) = v4 + *(int32_t *)result;
	return result;
}

// Address range: 0x95754 - 0x95854
int32_t function_95754(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6ff4); // r30
	g36 = *(int32_t *)(g23 - 0x7688);
	g34 = *(int32_t *)(*(int32_t *)(g23 - 0x75ec) + 64);
	SetRndSeed();
	g37 = 3;
	int32_t v2 = random(0);      // 0x9578c
	int32_t v3 = 120 * a1;       // 0x95790
	int32_t v4 = v3 + 88 + g36;  // 0x9579c
	int32_t *v5 = (int32_t *)v4; // 0x9579c
	*v5 = v2;
	unsigned char v6 = *(char *)*(int32_t *)(g23 - 0x77e4); // 0x957a0
	int32_t v7 = v6;                                        // 0x957a0
	if (v6 == 4) {
		int32_t v8 = *(int32_t *)(v1 + 12 * *v5); // 0x957b8
		*(int32_t *)(v3 + g36 + 92) = v8;
		// branch -> 0x957c0
	}
	int32_t v9 = v7; // 0x957e0
	if (v7 == 8) {
		int32_t v10 = v1 + 12 * *(int32_t *)v4; // 0x957d4
		*(int32_t *)(v3 + g36 + 92) = *(int32_t *)(v10 + 4);
		v9 = v7;
		// branch -> 0x957e0
	}
	int32_t v11 = v9; // 0x95808
	if (v9 == 12) {
		int32_t v12 = v1 + 12 * *(int32_t *)v4; // 0x957f4
		*(int32_t *)(v3 + g36 + 92) = *(int32_t *)(v12 + 8);
		v11 = v7;
		// branch -> 0x95800
	}
	int32_t v13 = v3 + g36; // 0x95804
	*(int32_t *)(v13 + 96) = 3 * *(int32_t *)v4 - 1 + v11 / 4;
	*(int32_t *)(v13 + 36) = -2 * *(int32_t *)v4 + 5;
	int32_t result = *(int32_t *)(v13 + 36); // 0x9582c
	*(int32_t *)(v13 + 100) = result + 1;
	return result;
}

// Address range: 0x95854 - 0x958c0
int32_t function_95854(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x95868
	if (*(int32_t *)*(int32_t *)(g23 - 0x6ff8) == 0) {
		int32_t v2 = v1 + 120 * a1; // 0x95884
		*(int32_t *)(v2 + 16) = 2;
		*(char *)(v2 + 64) = 0;
		// branch -> 0x95898
	}
	int32_t result = GetRndSeed(); // 0x95898
	*(int32_t *)(v1 + 120 * a1 + 84) = result;
	return result;
}

// Address range: 0x958c0 - 0x95920
int32_t function_958c0(int32_t a1)
{
	int32_t v1 = GetRndSeed();                          // 0x958dc
	int32_t v2 = *(int32_t *)(g23 - 0x7688) + 120 * a1; // 0x958e4
	g36 = v2;
	*(int32_t *)(v2 + 84) = v1;
	g37 = 4;
	int32_t result = random(0); // 0x958f4
	*(int32_t *)(g36 + 36) = result + 1;
	*(int32_t *)(g36 + 68) = 1;
	return result;
}

// Address range: 0x95920 - 0x959f0
int32_t function_95920(int32_t a1, int32_t *a2, int32_t a3)
{
	// 0x95920
	g38 = a3;
	int32_t v1 = g10;         // 0x95924
	int32_t v2 = a1;          // r26
	int32_t v3 = (int32_t)a2; // 0x9592c
	int32_t v4 = g38;         // 0x95930
	if (a1 == 0) {
		// 0x959dc
		g10 = v1;
		return 0;
	}
	int32_t v5 = 0; // 0x95944
	// branch -> 0x95944
	while (true) {
		int32_t v6 = v5 + 1; // 0x95944
		g33 = v6;
		int32_t result; // r3
		int32_t v7;     // 0x9595012
		int32_t v8;     // 0x959b816
		int32_t v9;     // 0x959c033
		int32_t v10;    // 0x959cc
		int32_t v11;    // 0x959b02
		int32_t v12;    // 0x959c46
		int32_t v13;    // 0x95974
		if (v6 >= 1001) {
			// 0x95950
			if (a1 >= 2) {
				// 0x95958
				v2 = a1 - 1;
				// branch -> 0x9595c
			}
			// 0x9595c
			g37 = 112;
			*(int32_t *)v3 = random(0);
			g37 = 112;
			v13 = random(0);
			result = v13;
			*(int32_t *)v4 = v13;
			g36 = 0;
			v12 = v2;
			v7 = v12;
			if (v12 > 0) {
				v9 = 0;
				v8 = 0;
				v10 = 0;
				v11 = v12;
			lab_0x959cc:;
				int32_t v14; // 0x959d4
				while (true) {
					// 0x959cc
					if (v10 == 0) {
						// 0x95988
						g35 = 0;
						int32_t v15 = v9;  // 0x959c0
						int32_t v16 = v11; // 0x959c4
						int32_t v17 = v8;  // 0x959b817
						int32_t v18 = 0;   // 0x959cc14
						if (v11 > 0) {
							int32_t v19 = 0;  // 0x9599c
							int32_t v20 = v8; // 0x959b8
							int32_t v21;
							int32_t v22; // 0x959b0
							while (true) {
								// 0x959b8
								if (v20 == 0) {
									int32_t v23 = function_92818(g36 + g37, g38 + v19); // 0x959a0
									result = v23;
									g35++;
									int32_t v24 = __asm_rlwinm(llvm_ctlz_i32(v23, true), 27, 24, 31); // 0x959ac
									int32_t v25 = g35;                                                // 0x959b0
									v22 = v2;
									if (v25 >= v22) {
										v21 = v24;
										// break -> 0x959c0
										break;
									}
									v19 = v25;
									v20 = v24;
									// continue -> 0x959b8
									continue;
								}
								// 0x959c0
								// branch -> 0x959c0
							}
							// 0x959c0
							v15 = g36;
							v16 = v22;
							v17 = v21;
							v18 = v21;
							// branch -> 0x959c0
						}
						int32_t v26 = v15 + 1; // 0x959c0
						g36 = v26;
						if (v26 >= v16) {
							v14 = v17;
							v7 = v16;
							// break -> 0x959d4
							break;
						}
						v9 = v26;
						v8 = v17;
						v10 = v18;
						v11 = v16;
						// continue -> 0x959cc
						continue;
					} else {
						v14 = v8;
						v7 = v11;
					}
				}
				// 0x959d4
				if (v14 == 0) {
					// 0x959dc
					// branch -> 0x959dc
					// 0x959dc
					g10 = v1;
					return result;
				}
			lab_0x959d4:
				// 0x959d4
				a1 = v7;
				v5 = g33;
				// branch -> 0x95944
				continue;
			}
		lab_0x959d4_2:
			// 0x959dc
			// branch -> 0x959dc
			// 0x959dc
			g10 = v1;
			return result;
		}
		// 0x9595c
		g37 = 112;
		*(int32_t *)v3 = random(0);
		g37 = 112;
		v13 = random(0);
		result = v13;
		*(int32_t *)v4 = v13;
		g36 = 0;
		v12 = v2;
		if (v12 > 0) {
			v9 = 0;
			v8 = 0;
			v10 = 0;
			v11 = v12;
			goto lab_0x959cc;
		}
		v7 = v12;
		goto lab_0x959d4_2;
	}
}

// Address range: 0x959f0 - 0x95ac0
int32_t function_959f0(int32_t a1)
{
	int32_t v1 = g36;                        // 0x959f0
	int32_t v2 = *(int32_t *)(g23 - 0x7194); // 0x959f8
	int32_t v3 = g35;                        // 0x959fc
	g36 = *(int32_t *)(g23 - 0x7684);
	int32_t result; // 0x95abc
	if (*(int32_t *)v2 <= 126) {
		// 0x95a18
		g35 = *(int32_t *)*(int32_t *)(g23 - 0x7154);
		int32_t v4 = 0; // bp-20
		int32_t v5;     // bp-24
		function_95920(5, &v4, (int32_t)&v5);
		int32_t v6 = *(int32_t *)g36;                                            // 0x95a3c
		int32_t v7 = 0x1000000 * (-1 - 0x1000000 * g35 / 0x1000000) / 0x1000000; // 0x95a4c
		*(char *)(112 * v4 + 113 + v6 + v5) = (char)v7;
		int32_t v8 = *(int32_t *)g36; // 0x95a60
		*(char *)(v8 + 112 * v4 + v5 + 225) = (char)v7;
		int32_t v9 = *(int32_t *)g36; // 0x95a7c
		*(char *)(112 * v4 + 114 + v9 + v5) = (char)v7;
		result = AddObject(94, v4 + 2, v5 + 2);
		// branch -> 0x95aa8
	} else {
		result = v2;
	}
	// 0x95aa8
	g36 = v1;
	g35 = v3;
	return result;
}

// Address range: 0x95ac0 - 0x95b04
int32_t function_95ac0(int32_t a1)
{
	int32_t v1 = 0; // bp-4
	int32_t v2;     // bp-8
	function_95920(5, &v1, (int32_t)&v2);
	int32_t result = AddObject(96, v1 + 2, v2 + 2); // 0x95af0
	return result;
}

// Address range: 0x95b04 - 0x95db8
int32_t AddObject(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = g10;                        // 0x95b08
	int32_t v2 = *(int32_t *)(g23 - 0x7194); // 0x95b0c
	g35 = v2;
	g30 = result;
	int32_t v3 = *(int32_t *)(g23 - 0x7154); // 0x95b14
	g36 = *(int32_t *)(g23 - 0x7688);
	g31 = a2;
	g32 = a3;
	int32_t v4 = *(int32_t *)v2; // 0x95b2c
	if (v4 > 126) {
		// 0x95da4
		g10 = v1;
		return result;
	}
	int32_t *v5 = (int32_t *)v3; // 0x95b3c
	int32_t v6 = *v5;            // r29
	*v5 = *(int32_t *)(4 * (126 - v4) + v3);
	*(int32_t *)(*(int32_t *)(g23 - 0x7190) + 4 * v4) = v6;
	int32_t v7 = 0x1000000 * v6 / 0x1000000 + 1;         // 0x95b68
	int32_t v8 = *(int32_t *)*(int32_t *)(g23 - 0x7684); // 0x95b6c
	*(char *)(g32 + 112 * a2 + v8) = (char)v7;
	function_949ec(v6, g31, g32, g30, v3);
	uint32_t v9 = g30; // 0x95b88
	if (v9 <= 92) {
		// 0x95b90
		return *(int32_t *)(*(int32_t *)(g23 - 0x5b30) + 4 * v9);
	}
	int32_t v10 = g36 + 120 * g33;              // 0x95d84
	uint32_t v11 = *(int32_t *)(v10 + 40) - 64; // 0x95d8c
	*(int32_t *)(v10 + 44) = v11 / 2 | v11 & -0x80000000;
	int32_t *v12 = (int32_t *)g35; // 0x95d98
	int32_t result2 = *v12;        // 0x95d98
	*v12 = result2 + 1;
	// branch -> 0x95da4
	// 0x95da4
	g10 = v1;
	return result2;
}

// Address range: 0x95db8 - 0x95ee8
int32_t function_95db8(int32_t result, int32_t a2)
{
	int32_t v1 = 120 * result;               // 0x95dc0
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x95dc4
	int32_t v3 = v2 + v1;                    // 0x95dd0
	int32_t v4 = v3 + 88;                    // 0x95ddc
	int32_t v5 = v4;                         // r30
	if (*(int32_t *)v4 == -1) {
		// 0x95ed4
		return result;
	}
	int32_t v6 = *(int32_t *)(g23 - 0x752c); // 0x95de8
	int32_t result2 = v6;                    // r3
	int32_t v7 = *(int32_t *)(v3 + 4);       // r23
	int32_t v8 = a2 + 10;                    // r29
	int32_t v9 = *(int32_t *)(v3 + 8);       // r22
	int32_t v10 = 0;                         // r20
	int32_t v11 = 0;                         // 0x95e7c
	if (*(int32_t *)v6 == 0) {
		int32_t v12 = *(int32_t *)(g23 - 0x77a8); // 0x95e0c
		int32_t v13 = 0;                          // r21
		int32_t v14 = 0;                          // 0x95e74
		// branch -> 0x95e74
		while (true) {
			// 0x95e74
			if (v14 == 0) {
				// 0x95e18
				if (*(char *)(v12 + 29) != 0) {
					int32_t v15 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x95e24
					result2 = v15;
					if (v15 == *(int32_t *)(v12 + 52)) {
						// 0x95e34
						g34 = *(int32_t *)(v12 + 56) - v7;
						int32_t v16 = abs(); // 0x95e3c
						g34 = *(int32_t *)(v12 + 60) - v9;
						int32_t v17 = abs(); // 0x95e4c
						result2 = v17;
						if (v16 < v8) {
							// 0x95e58
							if (v17 < v8) {
								// 0x95e60
								v10 = 1;
								// branch -> 0x95e64
							}
						}
					}
				}
				int32_t v18 = v13 + 1; // 0x95e68
				v13 = v18;
				if (v18 > 3) {
					// break -> 0x95e7c
					break;
				}
				v12 += 0x55ec;
				v14 = v10;
				// continue -> 0x95e74
				continue;
			}
			// 0x95e7c
			// branch -> 0x95e7c
		}
		// 0x95e7c
		v4 = v5;
		v11 = v10;
		// branch -> 0x95e7c
	}
	int32_t v19 = *(int32_t *)v4; // 0x95eb4
	if (v11 == 0) {
		if (v19 == 1) {
			// 0x95ec0
			result2 = AddUnLight(*(int32_t *)(v1 + v2 + 80));
			v4 = v5;
			// branch -> 0x95ecc
		}
		// 0x95ecc
		*(int32_t *)v4 = 0;
		// branch -> 0x95ed4
	} else {
		if (v19 == 0) {
			int32_t v20 = AddLight(v7, v9, a2); // 0x95e9c
			result2 = v20;
			*(int32_t *)(v1 + v2 + 80) = v20;
			v4 = v5;
			// branch -> 0x95ea8
		}
		// 0x95ea8
		*(int32_t *)v4 = 1;
		// branch -> 0x95ed4
	}
	// 0x95ed4
	return result2;
}

// Address range: 0x95ee8 - 0x960bc
int32_t function_95ee8(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8);                      // 0x95ef0
	int32_t v2 = 120 * a1;                                        // 0x95ef4
	int32_t v3 = *(int32_t *)(g23 - 0x7688);                      // 0x95ef8
	int32_t v4 = v3 + v2;                                         // 0x95f04
	int32_t v5 = *(int32_t *)(v4 + 4);                            // 0x95f1c
	int32_t v6 = v5;                                              // r6
	int32_t v7 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x95f20
	int32_t v8 = *(int32_t *)(v4 + 8);                            // 0x95f24
	if (*(int32_t *)(v7 + v1 + 56) == v5) {
		// 0x95f38
		if (*(int32_t *)(v7 + v1 + 60) == v8) {
			// 0x95f40
			if (*(int32_t *)v4 == 84) {
				// 0x95f4c
				*(int32_t *)(v4 + 36) = 2;
				// branch -> 0x95f54
			}
			// 0x95f54
			if (*(int32_t *)v4 == 85) {
				// 0x95f60
				*(int32_t *)(v2 + v3 + 36) = 4;
				// branch -> 0x95f6c
			}
			// 0x95f6c
			int32_t result; // r3
			int32_t v9;     // 0x95fe0
			int32_t v10;    // 0x95ff4
			int32_t v11;    // 0x96014
			int32_t v12;    // 0x95fc8
			int32_t v13;    // 0x96004
			int32_t v14;    // 0x95fe8
			int32_t v15;    // 0x95fec
			int32_t v16;    // 0x96044
			int32_t v17;    // 0x96020
			int32_t v18;    // 0x96028
			if (v6 == 45) {
				// 0x95f74
				if (v8 == 47) {
					int32_t v19 = v2 + v3; // 0x95f7c
					result = v19;
					*(int32_t *)(v19 + 108) = 2;
					// branch -> 0x95fb8
					// 0x95fb8
					if (v6 == 35) {
						// 0x95fc0
						if (v8 == 36) {
							// 0x95fc8
							v12 = v2 + v3;
							if (*(int32_t *)(v12 + 104) == 3) {
								// 0x95fd8
								g30 = 4;
								*(int32_t *)(v12 + 108) = 4;
								v9 = v12;
								v14 = *(int32_t *)(v9 + 96);
								v15 = *(int32_t *)(v9 + 100);
								function_98800(*(int32_t *)(v9 + 88), *(int32_t *)(v9 + 92), v14, v15);
								v10 = g36;
								if (*(char *)(v10 + 362) == 2) {
									// 0x96000
									*(char *)(v10 + 375) = (char)g30;
									// branch -> 0x96004
								}
								// 0x96004
								v13 = *(int32_t *)g33;
								g13 = v13;
								g36 = 0;
								v11 = 0x55ec * v13;
								v17 = *(int32_t *)(g31 + v11);
								v18 = *(int32_t *)(g32 + v11);
								AddMissile(v17, v18, 35, 46, *(int32_t *)(g35 + v11 + 112), 3, 0, 0, 0);
								track_repeat_walk(0);
								v16 = *(int32_t *)(g23 - 0x7560);
								g34 = v16;
								*(char *)v16 = (char)g36;
								ReleaseCapture();
								ClrPlrPath(*(int32_t *)g33);
								result = StartStand(*(int32_t *)g33, 0);
								// branch -> 0x960a8
							}
						}
					}
					// 0x960a8
					return result;
				}
			}
			// 0x95f8c
			if (v6 == 26) {
				// 0x95f94
				if (v8 == 46) {
					int32_t v20 = v2 + v3; // 0x95f9c
					result = v20;
					*(int32_t *)(v20 + 108) = 1;
					// branch -> 0x95fb8
					// 0x95fb8
					if (v6 == 35) {
						// 0x95fc0
						if (v8 == 36) {
							// 0x95fc8
							v12 = v2 + v3;
							if (*(int32_t *)(v12 + 104) == 3) {
								// 0x95fd8
								g30 = 4;
								*(int32_t *)(v12 + 108) = 4;
								v9 = v12;
								v14 = *(int32_t *)(v9 + 96);
								v15 = *(int32_t *)(v9 + 100);
								function_98800(*(int32_t *)(v9 + 88), *(int32_t *)(v9 + 92), v14, v15);
								v10 = g36;
								if (*(char *)(v10 + 362) == 2) {
									// 0x96000
									*(char *)(v10 + 375) = (char)g30;
									// branch -> 0x96004
								}
								// 0x96004
								v13 = *(int32_t *)g33;
								g13 = v13;
								g36 = 0;
								v11 = 0x55ec * v13;
								v17 = *(int32_t *)(g31 + v11);
								v18 = *(int32_t *)(g32 + v11);
								AddMissile(v17, v18, 35, 46, *(int32_t *)(g35 + v11 + 112), 3, 0, 0, 0);
								track_repeat_walk(0);
								v16 = *(int32_t *)(g23 - 0x7560);
								g34 = v16;
								*(char *)v16 = (char)g36;
								ReleaseCapture();
								ClrPlrPath(*(int32_t *)g33);
								result = StartStand(*(int32_t *)g33, 0);
								// branch -> 0x960a8
							}
						}
					}
					// 0x960a8
					return result;
				}
			}
			int32_t v21 = v2 + v3; // 0x95fac
			result = v21;
			*(int32_t *)(v21 + 108) = 0;
			// branch -> 0x95fb8
			// 0x95fb8
			if (v6 == 35) {
				// 0x95fc0
				if (v8 == 36) {
					// 0x95fc8
					v12 = v2 + v3;
					if (*(int32_t *)(v12 + 104) == 3) {
						// 0x95fd8
						g30 = 4;
						*(int32_t *)(v12 + 108) = 4;
						v9 = v12;
						v14 = *(int32_t *)(v9 + 96);
						v15 = *(int32_t *)(v9 + 100);
						function_98800(*(int32_t *)(v9 + 88), *(int32_t *)(v9 + 92), v14, v15);
						v10 = g36;
						if (*(char *)(v10 + 362) == 2) {
							// 0x96000
							*(char *)(v10 + 375) = (char)g30;
							// branch -> 0x96004
						}
						// 0x96004
						v13 = *(int32_t *)g33;
						g13 = v13;
						g36 = 0;
						v11 = 0x55ec * v13;
						v17 = *(int32_t *)(g31 + v11);
						v18 = *(int32_t *)(g32 + v11);
						AddMissile(v17, v18, 35, 46, *(int32_t *)(g35 + v11 + 112), 3, 0, 0, 0);
						track_repeat_walk(0);
						v16 = *(int32_t *)(g23 - 0x7560);
						g34 = v16;
						*(char *)v16 = (char)g36;
						ReleaseCapture();
						ClrPlrPath(*(int32_t *)g33);
						result = StartStand(*(int32_t *)g33, 0);
						// branch -> 0x960a8
					}
				}
			}
			// 0x960a8
			return result;
		}
	}
	// 0x9606c
	if (*(int32_t *)v4 == 84) {
		// 0x9607c
		*(int32_t *)(v4 + 36) = 1;
		// branch -> 0x96084
	}
	// 0x96084
	if (*(int32_t *)v4 == 85) {
		// 0x96090
		*(int32_t *)(v2 + v3 + 36) = 3;
		// branch -> 0x9609c
	}
	int32_t result2 = v2 + v3; // 0x9609c
	*(int32_t *)(result2 + 108) = 0;
	// branch -> 0x960a8
	// 0x960a8
	return result2;
}

// Address range: 0x960bc - 0x960ec
int32_t function_960bc(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688) + 120 * a1; // 0x960c4
	int32_t result = *(int32_t *)(v1 + 36);             // 0x960c8
	if (result != *(int32_t *)(v1 + 32)) {
		// bb
		return result;
	}
	// 0x960d8
	*(int32_t *)(v1 + 28) = 0;
	*(int32_t *)(v1 + 24) = 1000;
	return result;
}

// Address range: 0x960ec - 0x961f0
int32_t function_960ec(int32_t a1)
{
	int32_t v1 = 120 * a1;                   // 0x960f0
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x960f4
	int32_t v3 = v2 + v1;                    // 0x960fc
	int32_t v4 = v3 + 100;                   // 0x96100
	int32_t result;                          // r3
	if (*(int32_t *)v4 == 0) {
		// 0x9610c
		result = v3;
		*(char *)(v3 + 64) = 3;
		*(int32_t *)(result + 60) = 0;
		// branch -> 0x961e4
	} else {
		int32_t v5 = *(int32_t *)(v3 + 4);                                          // 0x9612c
		int32_t v6 = *(int32_t *)(v3 + 8);                                          // 0x96138
		int32_t v7 = *(int32_t *)(g23 - 0x767c);                                    // 0x96140
		int32_t v8 = v6 + 112 * v5;                                                 // 0x96150
		char v9 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x768c) + v8);           // 0x96158
		unsigned char v10 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7630) + v8); // 0x9616c
		unsigned char v11 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7680) + v8); // 0x96174
		int16_t v12 = *(int16_t *)(*(int32_t *)v7 + 2 * v6 + 224 * v5);             // 0x9617c
		*(char *)(v3 + 64) = 2;
		int32_t v13 = llvm_ctlz_i32(-(int32_t)v12, true);                         // 0x9618c
		int32_t v14 = llvm_ctlz_i32(-(int32_t)v9, true);                          // 0x96190
		int32_t v15 = llvm_ctlz_i32(-(int32_t)v10, true);                         // 0x9619c
		int32_t v16 = llvm_ctlz_i32(0x1000000 * (int32_t)v11 / -0x1000000, true); // 0x961a4
		int32_t v17 = __asm_rlwinm(v13, 27, 24, 31);                              // 0x961a8
		int32_t v18 = __asm_rlwinm(v14, 27, 24, 31);                              // 0x961ac
		int32_t v19 = __asm_rlwinm(v15, 27, 24, 31);                              // 0x961b4
		if ((v17 & v18 & v19 & __asm_rlwinm(v16, 27, 24, 31)) == 0) {
			// 0x961d4
			*(int32_t *)v4 = 2;
			// branch -> 0x961d8
		} else {
			// 0x961c8
			*(int32_t *)v4 = 1;
			// branch -> 0x961d8
		}
		int32_t v20 = v1 + v2; // 0x961d8
		result = v20;
		*(int32_t *)(v20 + 60) = 1;
		// branch -> 0x961e4
	}
	// 0x961e4
	return result;
}

// Address range: 0x961f0 - 0x96218
int32_t function_961f0(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688) + 120 * a1; // 0x961f8
	int32_t result = *(int32_t *)(v1 + 36);             // 0x961fc
	if (result != *(int32_t *)(v1 + 32)) {
		// bb
		return result;
	}
	// 0x9620c
	*(int32_t *)(v1 + 16) = 0;
	return result;
}

// Address range: 0x96218 - 0x962b4
int32_t function_96218(int32_t result2, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7194); // 0x96220
	int32_t v2 = *(int32_t *)(g23 - 0x7190); // 0x9622c
	int32_t v3 = 0;                          // r26
	int32_t v4 = 1;                          // r31
	if (*(int32_t *)v1 > 0) {
		int32_t v5 = v1; // 0x9629414
		int32_t v6 = 0;  // 0x9629012
		while (true) {
			int32_t v7 = 120 * *(int32_t *)v2;            // 0x9624c
			int32_t result = v7;                          // r3
			int32_t v8 = v7 + *(int32_t *)(g23 - 0x7688); // 0x96250
			int32_t v9 = v5;                              // 0x96294
			int32_t v10 = v6;                             // 0x96290
			if (result2 == *(int32_t *)v8) {
				int32_t v11 = v8; // r27
				if (a2 == *(int32_t *)(v8 + 88)) {
					// 0x9626c
					*(int32_t *)(v8 + 100) = v4;
					*(int32_t *)(v11 + 16) = v4;
					*(int32_t *)(v11 + 24) = v4;
					int32_t v12 = v11;                                                       // 0x9627c
					int32_t v13 = AddLight(*(int32_t *)(v12 + 4), *(int32_t *)(v12 + 8), 1); // 0x96284
					result = v13;
					*(int32_t *)(v11 + 80) = v13;
					v9 = v1;
					v10 = v3;
					// branch -> 0x9628c
				} else {
					v9 = v5;
					v10 = v6;
				}
			}
			int32_t v14 = v10 + 1; // 0x96290
			v3 = v14;
			if (v14 >= *(int32_t *)v9) {
				// 0x96294
				// branch -> 0x962a0
				// 0x962a0
				return result;
			}
			// 0x9628c
			v5 = v9;
			v6 = v14;
			v2 += 4;
			// branch -> 0x96248
		}
	}
	// 0x962a0
	return result2;
}

// Address range: 0x962b4 - 0x9656c
int32_t function_962b4(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x962bc
	int32_t v2 = 120 * a1;                   // 0x962c4
	int32_t v3 = *(int32_t *)(g23 - 0x7680); // 0x962c8
	int32_t result = v2 + v1;                // 0x962d0
	int32_t v4 = result;                     // r3
	int32_t v5 = *(int32_t *)(g23 - 0x767c); // 0x962d4
	int32_t v6 = result + 100;               // 0x96334
	int32_t result2;                         // 0x96568
	if (*(int32_t *)(result + 92) != 0) {
		// 0x962e4
		if (*(int32_t *)v6 == 0) {
			// 0x96558
			return result;
		}
		int32_t *v7 = (int32_t *)(result + 36); // 0x962f4
		*v7 = *v7 - 1;
		uint32_t v8 = *(int32_t *)(v4 + 36); // 0x96300
		if (v8 == 1) {
			// 0x9630c
			*(int32_t *)v6 = 0;
			result2 = AddUnLight(*(int32_t *)(v4 + 80));
			// branch -> 0x96558
		} else {
			// 0x96320
			if (v8 <= 4) {
				// 0x96328
				result2 = function_cb930(*(int32_t *)(v4 + 80), v8);
				// branch -> 0x96558
			} else {
				result2 = v4;
			}
		}
		// 0x96558
		return result2;
	}
	int32_t *v9 = (int32_t *)v6; // 0x96338
	if (*v9 != 0) {
		int32_t v10 = result + 36;               // 0x96524
		int32_t v11 = *(int32_t *)(result + 32); // 0x96528
		v4 = v11;
		int32_t *v12 = (int32_t *)v10; // 0x9652c
		if (*v12 == v11) {
			// 0x96538
			v4 = 11;
			*v12 = 11;
			// branch -> 0x96540
		}
		int32_t v13 = *(int32_t *)v10; // 0x96540
		if (v13 > 5) {
			// 0x96540
			result2 = v4;
			// branch -> 0x96558
		} else {
			// 0x9654c
			result2 = function_cb930(*(int32_t *)(v2 + v1 + 80), v13);
			// branch -> 0x96558
		}
		// 0x96558
		return result2;
	}
	int32_t v14 = *(int32_t *)(result + 4); // 0x96350
	int32_t v15;                            // r11
	int32_t v16;                            // r6
	int32_t v17;                            // r8
	int32_t v18;                            // 0x96510
	if (*(int32_t *)(result + 96) != 2) {
		// 0x9642c
		v16 = 1;
		int32_t v19 = *(int32_t *)(result + 8) - 2;     // 0x96440
		int32_t v20 = v19 + 112 * v14 + *(int32_t *)v3; // 0x9644c
		v15 = v20;
		int32_t v21 = 2 * v19 + 224 * v14 + *(int32_t *)v5; // 0x96464
		v17 = v21;
		int32_t v22; // 0x9647c
		int32_t v23; // 0x96480
		if (*(char *)v20 == 0) {
			// 0x9646c
			if (*(int16_t *)v21 != 0) {
				// 0x96478
				*v9 = 1;
				v23 = v17;
				v22 = v15;
				// branch -> 0x9647c
			} else {
				v23 = v21;
				v22 = v20;
			}
		} else {
			// 0x96478
			*v9 = 1;
			v23 = v17;
			v22 = v15;
			// branch -> 0x9647c
		}
		int32_t v24 = v22 + 1; // 0x9647c
		v15 = v24;
		int32_t v25 = v23 + 2; // 0x96480
		v17 = v25;
		int32_t v26; // 0x9649c
		int32_t v27; // 0x964a0
		if (*(char *)v24 == 0) {
			// 0x9648c
			if (*(int16_t *)v25 != 0) {
				// 0x96498
				*(int32_t *)(v4 + 100) = v16;
				v27 = v17;
				v26 = v15;
				// branch -> 0x9649c
			} else {
				v27 = v25;
				v26 = v24;
			}
		} else {
			// 0x96498
			*(int32_t *)(v4 + 100) = v16;
			v27 = v17;
			v26 = v15;
			// branch -> 0x9649c
		}
		int32_t v28 = v26 + 1; // 0x9649c
		v15 = v28;
		int32_t v29 = v27 + 2; // 0x964a0
		v17 = v29;
		int32_t v30; // 0x964c0
		int32_t v31; // 0x964c4
		if (*(char *)v28 == 0) {
			// 0x964b0
			if (*(int16_t *)v29 != 0) {
				// 0x964bc
				*(int32_t *)(v4 + 100) = v16;
				v31 = v17;
				v30 = v15;
				// branch -> 0x964c0
			} else {
				v31 = v29;
				v30 = v28;
			}
		} else {
			// 0x964bc
			*(int32_t *)(v4 + 100) = v16;
			v31 = v17;
			v30 = v15;
			// branch -> 0x964c0
		}
		int32_t v32 = v30 + 1; // 0x964c0
		v15 = v32;
		int32_t v33 = v31 + 2; // 0x964c4
		v17 = v33;
		int32_t v34; // 0x964e4
		int32_t v35; // 0x964e8
		if (*(char *)v32 == 0) {
			// 0x964d4
			if (*(int16_t *)v33 != 0) {
				// 0x964e0
				*(int32_t *)(v4 + 100) = v16;
				v35 = v17;
				v34 = v15;
				// branch -> 0x964e4
			} else {
				v35 = v33;
				v34 = v32;
			}
		} else {
			// 0x964e0
			*(int32_t *)(v4 + 100) = v16;
			v35 = v17;
			v34 = v15;
			// branch -> 0x964e4
		}
		// 0x964e4
		if (*(char *)(v34 + 1) == 0) {
			// 0x964f4
			if (*(int16_t *)(v35 + 2) != 0) {
				// 0x96500
				*(int32_t *)(v4 + 100) = v16;
				// branch -> 0x96504
			}
		} else {
			// 0x96500
			*(int32_t *)(v4 + 100) = v16;
			// branch -> 0x96504
		}
		// 0x96504
		if (*(int32_t *)v6 != 0) {
			// 0x96510
			v18 = v2 + v1;
			result2 = function_96218(*(int32_t *)v18, *(int32_t *)(v18 + 88));
			// branch -> 0x96558
		} else {
			result2 = 0;
		}
		// 0x96558
		return result2;
	}
	// 0x96350
	v16 = 1;
	int32_t v36 = *(int32_t *)(result + 8);         // 0x96358
	int32_t v37 = v14 - 2;                          // 0x9635c
	int32_t v38 = v36 + 112 * v37 + *(int32_t *)v3; // 0x96370
	v15 = v38;
	int32_t v39 = 2 * v36 + 224 * v37 + *(int32_t *)v5; // 0x96388
	v17 = v39;
	int32_t v40; // 0x963a0
	int32_t v41; // 0x963a4
	if (*(char *)v38 == 0) {
		// 0x96390
		if (*(int16_t *)v39 != 0) {
			// 0x9639c
			*v9 = 1;
			v41 = v17;
			v40 = v15;
			// branch -> 0x963a0
		} else {
			v41 = v39;
			v40 = v38;
		}
	} else {
		// 0x9639c
		*v9 = 1;
		v41 = v17;
		v40 = v15;
		// branch -> 0x963a0
	}
	int32_t v42 = v40 + 112; // 0x963a0
	v15 = v42;
	int32_t v43 = v41 + 224; // 0x963a4
	v17 = v43;
	int32_t v44; // 0x963c0
	int32_t v45; // 0x963c4
	if (*(char *)v42 == 0) {
		// 0x963b0
		if (*(int16_t *)v43 != 0) {
			// 0x963bc
			*(int32_t *)(v4 + 100) = v16;
			v45 = v17;
			v44 = v15;
			// branch -> 0x963c0
		} else {
			v45 = v43;
			v44 = v42;
		}
	} else {
		// 0x963bc
		*(int32_t *)(v4 + 100) = v16;
		v45 = v17;
		v44 = v15;
		// branch -> 0x963c0
	}
	int32_t v46 = v44 + 112; // 0x963c0
	v15 = v46;
	int32_t v47 = v45 + 224; // 0x963c4
	v17 = v47;
	int32_t v48; // 0x963e4
	int32_t v49; // 0x963e8
	if (*(char *)v46 == 0) {
		// 0x963d4
		if (*(int16_t *)v47 != 0) {
			// 0x963e0
			*(int32_t *)(v4 + 100) = v16;
			v49 = v17;
			v48 = v15;
			// branch -> 0x963e4
		} else {
			v49 = v47;
			v48 = v46;
		}
	} else {
		// 0x963e0
		*(int32_t *)(v4 + 100) = v16;
		v49 = v17;
		v48 = v15;
		// branch -> 0x963e4
	}
	int32_t v50 = v48 + 112; // 0x963e4
	v15 = v50;
	int32_t v51 = v49 + 224; // 0x963e8
	v17 = v51;
	int32_t v52; // 0x96408
	int32_t v53; // 0x9640c
	if (*(char *)v50 == 0) {
		// 0x963f8
		if (*(int16_t *)v51 != 0) {
			// 0x96404
			*(int32_t *)(v4 + 100) = v16;
			v53 = v17;
			v52 = v15;
			// branch -> 0x96408
		} else {
			v53 = v51;
			v52 = v50;
		}
	} else {
		// 0x96404
		*(int32_t *)(v4 + 100) = v16;
		v53 = v17;
		v52 = v15;
		// branch -> 0x96408
	}
	// 0x96408
	if (*(char *)(v52 + 112) == 0) {
		// 0x96418
		if (*(int16_t *)(v53 + 224) != 0) {
			// 0x96424
			*(int32_t *)(v4 + 100) = v16;
			// branch -> 0x96504
		}
	} else {
		// 0x96424
		*(int32_t *)(v4 + 100) = v16;
		// branch -> 0x96504
	}
	// 0x96504
	if (*(int32_t *)v6 != 0) {
		// 0x96510
		v18 = v2 + v1;
		result2 = function_96218(*(int32_t *)v18, *(int32_t *)(v18 + 88));
		// branch -> 0x96558
	} else {
		result2 = 0;
	}
	// 0x96558
	return result2;
}

// Address range: 0x9656c - 0x9678c
int32_t function_9656c(void)
{
	int32_t v1 = g10;                        // 0x96570
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x96574
	g36 = v2;
	int32_t result = g34;      // 0x96578
	int32_t v3 = 120 * result; // 0x96578
	g35 = v3;
	int32_t v4 = v2 + 100;              // 0x9657c
	int32_t *v5 = (int32_t *)(v3 + v4); // 0x96590
	if (*v5 != 0) {
		// 0x96778
		g10 = v1;
		return result;
	}
	int32_t v6 = v3 + v2;                                       // 0x9659c
	int32_t v7 = *(int32_t *)(v6 + 88);                         // 0x965a4
	int32_t v8 = *(int32_t *)*(int32_t *)(g23 - 0x7684);        // 0x965b0
	char v9 = *(char *)(v8 + *(int32_t *)(v6 + 92) + 112 * v7); // 0x965b8
	int32_t result4 = v9;                                       // 0x965bc
	int32_t v10 = 120 * (result4 - 1);                          // 0x965c4
	int32_t v11 = v10 + v2;                                     // 0x965c8
	int32_t v12 = *(int32_t *)v11;                              // 0x965c8
	int32_t v13;                                                // r25
	int32_t v14;                                                // r26
	int32_t v15;                                                // 0x9667c
	int32_t v16;                                                // 0x96680
	int32_t v17;                                                // 0x966e8
	int32_t v18;                                                // 0x966ec
	int32_t v19;                                                // 0x966f0
	int32_t v20;                                                // 0x966f4
	int32_t v21;                                                // 0x966f8
	int32_t v22;                                                // 0x9671c17
	int32_t v23;                                                // 0x9671c18
	int32_t v24;                                                // 0x9671c19
	int32_t v25;                                                // 0x9672022
	int32_t v26;                                                // 0x9672023
	int32_t v27;                                                // 0x9672024
	int32_t v28;                                                // 0x9667c
	int32_t v29;                                                // 0x96690
	int32_t v30;                                                // 0x96694
	int32_t v31;                                                // 0x966ac
	int32_t v32;                                                // 0x966b4
	int32_t v33;                                                // 0x9676c
	int32_t v34;                                                // 0x96684
	int32_t v35;                                                // 0x96688
	int32_t v36;                                                // 0x966c8
	int32_t result2;                                            // 0x9676c
	int32_t v37;                                                // 0x96748
	int32_t v38;                                                // 0x96694
	int32_t v39;                                                // 0x966a0
	int32_t v40;                                                // 0x96724
	if (v12 <= 41) {
		// 0x965d4
		int32_t result3;
		if (v12 > 7) {
			// 0x965f4
			if (v12 == 28) {
				// 0x9662c
				if (*(char *)(v11 + 64) == 0) {
					// 0x96664
					g33 = v10;
					*v5 = 1;
					v15 = v2 + 8;
					v28 = g33;
					v16 = v2 + 4;
					v34 = *(int32_t *)(v28 + v15);
					g27 = v34;
					v35 = *(int32_t *)(v16 + v28);
					v29 = v34 - 1;
					v30 = g35;
					v38 = *(int32_t *)(v30 + v16);
					v14 = v38;
					g28 = v35;
					v39 = *(int32_t *)(v30 + v15);
					v13 = v39;
					v31 = v34 + 1;
					if (v29 <= v31) {
						// 0x966b4
						v32 = v35 - 1;
						v27 = v34;
						v24 = v35;
						v21 = v29;
						v20 = *(int32_t *)*(int32_t *)(g23 - 0x7680) + v34 - 1;
						// branch -> 0x966b4
						while (true) {
							// 0x966b4
							v36 = v20 + 112 * v32;
							if (v32 > v35 + 1) {
								v26 = v27;
								v23 = v24;
								goto lab_0x966f4_5;
							}
							v25 = v27;
							v22 = v24;
							v19 = 3;
							v18 = v32;
							v17 = v36;
							goto lab_0x966d4_5;
						}
					}
					// 0x96704
					v33 = v28;
					if (*(int32_t *)*(int32_t *)(g23 - 0x7070) == 0) {
						// 0x96714
						v40 = GetDirection(v38, v39, v35, v34);
						v37 = *(int32_t *)(g35 + g36 + 96);
						g13 = -1;
						AddMissile(v14, v13, g28, g27, v40, v37, 1, 0, 0);
						g34 = 72;
						g38 = *(int32_t *)g32;
						PlaySfxLoc(72);
						v33 = g33;
						// branch -> 0x9676c
					}
					// 0x9676c
					result2 = g36 + v33;
					*(int32_t *)(result2 + 72) = 0;
					// branch -> 0x96778
					// 0x96778
					g10 = v1;
					return result2;
				}
				result3 = v11;
			} else {
				result3 = result4;
			}
		} else {
			// 0x965dc
			if (v12 != 3) {
				// 0x965e4
				if (v12 > 3) {
					// 0x9662c
					if (*(char *)(v11 + 64) == 0) {
						// 0x96664
						g33 = v10;
						*v5 = 1;
						v15 = v2 + 8;
						v28 = g33;
						v16 = v2 + 4;
						v34 = *(int32_t *)(v28 + v15);
						g27 = v34;
						v35 = *(int32_t *)(v16 + v28);
						v29 = v34 - 1;
						v30 = g35;
						v38 = *(int32_t *)(v30 + v16);
						v14 = v38;
						g28 = v35;
						v39 = *(int32_t *)(v30 + v15);
						v13 = v39;
						v31 = v34 + 1;
						if (v29 <= v31) {
							// 0x966b4
							v32 = v35 - 1;
							v27 = v34;
							v24 = v35;
							v21 = v29;
							v20 = *(int32_t *)*(int32_t *)(g23 - 0x7680) + v34 - 1;
							// branch -> 0x966b4
							while (true) {
								// 0x966b4
								v36 = v20 + 112 * v32;
								if (v32 > v35 + 1) {
									v26 = v27;
									v23 = v24;
									goto lab_0x966f4_5;
								}
								v25 = v27;
								v22 = v24;
								v19 = 3;
								v18 = v32;
								v17 = v36;
								goto lab_0x966d4_5;
							}
						}
						// 0x96704
						v33 = v28;
						if (*(int32_t *)*(int32_t *)(g23 - 0x7070) == 0) {
							// 0x96714
							v40 = GetDirection(v38, v39, v35, v34);
							v37 = *(int32_t *)(g35 + g36 + 96);
							g13 = -1;
							AddMissile(v14, v13, g28, g27, v40, v37, 1, 0, 0);
							g34 = 72;
							g38 = *(int32_t *)g32;
							PlaySfxLoc(72);
							v33 = g33;
							// branch -> 0x9676c
						}
						// 0x9676c
						result2 = g36 + v33;
						*(int32_t *)(result2 + 72) = 0;
						// branch -> 0x96778
						// 0x96778
						g10 = v1;
						return result2;
					}
					result3 = v11;
				} else {
					// 0x965e8
					if (v12 > 0) {
						// 0x96648
						if (*(int32_t *)(v10 + v4) != 0) {
							// 0x96664
							g33 = v10;
							*v5 = 1;
							v15 = v2 + 8;
							v28 = g33;
							v16 = v2 + 4;
							v34 = *(int32_t *)(v28 + v15);
							g27 = v34;
							v35 = *(int32_t *)(v16 + v28);
							v29 = v34 - 1;
							v30 = g35;
							v38 = *(int32_t *)(v30 + v16);
							v14 = v38;
							g28 = v35;
							v39 = *(int32_t *)(v30 + v15);
							v13 = v39;
							v31 = v34 + 1;
							if (v29 <= v31) {
								// 0x966b4
								v32 = v35 - 1;
								v27 = v34;
								v24 = v35;
								v21 = v29;
								v20 = *(int32_t *)*(int32_t *)(g23 - 0x7680) + v34 - 1;
								// branch -> 0x966b4
								while (true) {
									// 0x966b4
									v36 = v20 + 112 * v32;
									if (v32 > v35 + 1) {
										v26 = v27;
										v23 = v24;
										goto lab_0x966f4_5;
									}
									v25 = v27;
									v22 = v24;
									v19 = 3;
									v18 = v32;
									v17 = v36;
									goto lab_0x966d4_5;
								}
							}
							// 0x96704
							v33 = v28;
							if (*(int32_t *)*(int32_t *)(g23 - 0x7070) == 0) {
								// 0x96714
								v40 = GetDirection(v38, v39, v35, v34);
								v37 = *(int32_t *)(g35 + g36 + 96);
								g13 = -1;
								AddMissile(v14, v13, g28, g27, v40, v37, 1, 0, 0);
								g34 = 72;
								g38 = *(int32_t *)g32;
								PlaySfxLoc(72);
								v33 = g33;
								// branch -> 0x9676c
							}
							// 0x9676c
							result2 = g36 + v33;
							*(int32_t *)(result2 + 72) = 0;
							// branch -> 0x96778
							// 0x96778
							g10 = v1;
							return result2;
						}
						result3 = result4;
					} else {
						result3 = result4;
					}
				}
				// 0x9665c
				// branch -> 0x96778
				// 0x96778
				g10 = v1;
				return result3;
			}
			result3 = result4;
		}
		// 0x9665c
		// branch -> 0x96778
		// 0x96778
		g10 = v1;
		return result3;
	}
	// 0x96600
	if (v12 != 48) {
		// 0x96608
		if (v12 > 48) {
			// 0x96618
			if (v12 <= 75) {
				// 0x96620
				if (v12 > 73) {
					// 0x96648
					if (*(int32_t *)(v10 + v4) != 0) {
						// 0x96664
						g33 = v10;
						*v5 = 1;
						v15 = v2 + 8;
						v28 = g33;
						v16 = v2 + 4;
						v34 = *(int32_t *)(v28 + v15);
						g27 = v34;
						v35 = *(int32_t *)(v16 + v28);
						v29 = v34 - 1;
						v30 = g35;
						v38 = *(int32_t *)(v30 + v16);
						v14 = v38;
						g28 = v35;
						v39 = *(int32_t *)(v30 + v15);
						v13 = v39;
						v31 = v34 + 1;
						if (v29 > v31) {
							// 0x96704
							v33 = v28;
							if (*(int32_t *)*(int32_t *)(g23 - 0x7070) == 0) {
								// 0x96714
								v40 = GetDirection(v38, v39, v35, v34);
								v37 = *(int32_t *)(g35 + g36 + 96);
								g13 = -1;
								AddMissile(v14, v13, g28, g27, v40, v37, 1, 0, 0);
								g34 = 72;
								g38 = *(int32_t *)g32;
								PlaySfxLoc(72);
								v33 = g33;
								// branch -> 0x9676c
							}
							// 0x9676c
							result2 = g36 + v33;
							*(int32_t *)(result2 + 72) = 0;
							// branch -> 0x96778
							// 0x96778
							g10 = v1;
							return result2;
						}
						// 0x966b4
						v32 = v35 - 1;
						v27 = v34;
						v24 = v35;
						v21 = v29;
						v20 = *(int32_t *)*(int32_t *)(g23 - 0x7680) + v34 - 1;
						// branch -> 0x966b4
						while (true) {
							// 0x966b4
							v36 = v20 + 112 * v32;
							v26 = v27;
							v23 = v24;
							int32_t v41; // 0x966f8
							if (v32 <= v35 + 1) {
								v25 = v27;
								v22 = v24;
								v19 = 3;
								v18 = v32;
								v17 = v36;
							lab_0x966d4_5:
								while (true) {
									int32_t v42 = v25; // 0x9672021
									int32_t v43 = v22; // 0x9671c16
									if (*(char *)v17 != 0) {
										// 0x966e0
										g28 = v18;
										g27 = v21;
										v42 = v21;
										v43 = v18;
										// branch -> 0x966e8
									}
									int32_t v44 = v17 + 112; // 0x966e8
									int32_t v45 = v18 + 1;   // 0x966ec
									int32_t v46 = v19 - 1;   // 0x966f0
									if (v46 == 0) {
										v26 = v42;
										v23 = v43;
										// break -> 0x966f4
										break;
									}
									v25 = v42;
									v22 = v43;
									v19 = v46;
									v18 = v45;
									v17 = v44;
									// continue -> 0x966d4
								}
								// 0x966f4
								v41 = v21 + 1;
								if (v41 > v31) {
									// break -> 0x96704
									break;
								}
								v27 = v26;
								v24 = v23;
								v21 = v41;
								v20++;
								// continue -> 0x966b4
								continue;
							}
						lab_0x966f4_5:
							// 0x966f4
							v41 = v21 + 1;
							if (v41 > v31) {
								// break -> 0x96704
								break;
							}
							v27 = v26;
							v24 = v23;
							v21 = v41;
							v20++;
							// continue -> 0x966b4
						}
						// 0x96704
						v33 = v28;
						if (*(int32_t *)*(int32_t *)(g23 - 0x7070) == 0) {
							// 0x96714
							v40 = GetDirection(v38, v39, v23, v26);
							v37 = *(int32_t *)(g35 + g36 + 96);
							g13 = -1;
							AddMissile(v14, v13, g28, g27, v40, v37, 1, 0, 0);
							g34 = 72;
							g38 = *(int32_t *)g32;
							PlaySfxLoc(72);
							v33 = g33;
							// branch -> 0x9676c
						}
						// 0x9676c
						result2 = g36 + v33;
						*(int32_t *)(result2 + 72) = 0;
						// branch -> 0x96778
						// 0x96778
						g10 = v1;
						return result2;
					}
				}
			}
		} else {
			// 0x9660c
			if (v12 <= 43) {
				// 0x96648
				if (*(int32_t *)(v10 + v4) != 0) {
					// 0x96664
					g33 = v10;
					*v5 = 1;
					v15 = v2 + 8;
					v28 = g33;
					v16 = v2 + 4;
					v34 = *(int32_t *)(v28 + v15);
					g27 = v34;
					v35 = *(int32_t *)(v16 + v28);
					v29 = v34 - 1;
					v30 = g35;
					v38 = *(int32_t *)(v30 + v16);
					v14 = v38;
					g28 = v35;
					v39 = *(int32_t *)(v30 + v15);
					v13 = v39;
					v31 = v34 + 1;
					if (v29 <= v31) {
						// 0x966b4
						v32 = v35 - 1;
						v27 = v34;
						v24 = v35;
						v21 = v29;
						v20 = *(int32_t *)*(int32_t *)(g23 - 0x7680) + v34 - 1;
						// branch -> 0x966b4
						while (true) {
							// 0x966b4
							v36 = v20 + 112 * v32;
							if (v32 > v35 + 1) {
								v26 = v27;
								v23 = v24;
								goto lab_0x966f4_5;
							}
							v25 = v27;
							v22 = v24;
							v19 = 3;
							v18 = v32;
							v17 = v36;
							goto lab_0x966d4_5;
						}
					}
					// 0x96704
					v33 = v28;
					if (*(int32_t *)*(int32_t *)(g23 - 0x7070) == 0) {
						// 0x96714
						v40 = GetDirection(v38, v39, v35, v34);
						v37 = *(int32_t *)(g35 + g36 + 96);
						g13 = -1;
						AddMissile(v14, v13, g28, g27, v40, v37, 1, 0, 0);
						g34 = 72;
						g38 = *(int32_t *)g32;
						PlaySfxLoc(72);
						v33 = g33;
						// branch -> 0x9676c
					}
					// 0x9676c
					result2 = g36 + v33;
					*(int32_t *)(result2 + 72) = 0;
					// branch -> 0x96778
					// 0x96778
					g10 = v1;
					return result2;
				}
			}
		}
		// 0x9665c
		// branch -> 0x96778
		// 0x96778
		g10 = v1;
		return result4;
	}
	// 0x9662c
	int32_t result5; // 0x96788
	if (*(char *)(v11 + 64) == 0) {
		// 0x96664
		g33 = v10;
		*v5 = 1;
		v15 = v2 + 8;
		v28 = g33;
		v16 = v2 + 4;
		v34 = *(int32_t *)(v28 + v15);
		g27 = v34;
		v35 = *(int32_t *)(v16 + v28);
		v29 = v34 - 1;
		v30 = g35;
		v38 = *(int32_t *)(v30 + v16);
		v14 = v38;
		g28 = v35;
		v39 = *(int32_t *)(v30 + v15);
		v13 = v39;
		v31 = v34 + 1;
		if (v29 <= v31) {
			// 0x966b4
			v32 = v35 - 1;
			v27 = v34;
			v24 = v35;
			v21 = v29;
			v20 = *(int32_t *)*(int32_t *)(g23 - 0x7680) + v34 - 1;
			// branch -> 0x966b4
			while (true) {
				// 0x966b4
				v36 = v20 + 112 * v32;
				if (v32 > v35 + 1) {
					v26 = v27;
					v23 = v24;
					goto lab_0x966f4_5;
				}
				v25 = v27;
				v22 = v24;
				v19 = 3;
				v18 = v32;
				v17 = v36;
				goto lab_0x966d4_5;
			}
		}
		// 0x96704
		v33 = v28;
		if (*(int32_t *)*(int32_t *)(g23 - 0x7070) == 0) {
			// 0x96714
			v40 = GetDirection(v38, v39, v35, v34);
			v37 = *(int32_t *)(g35 + g36 + 96);
			g13 = -1;
			AddMissile(v14, v13, g28, g27, v40, v37, 1, 0, 0);
			g34 = 72;
			g38 = *(int32_t *)g32;
			PlaySfxLoc(72);
			v33 = g33;
			// branch -> 0x9676c
		}
		// 0x9676c
		result2 = g36 + v33;
		*(int32_t *)(result2 + 72) = 0;
		result5 = result2;
		// branch -> 0x96778
	} else {
		// 0x9665c
		result5 = v11;
		// branch -> 0x96778
	}
	// 0x96778
	g10 = v1;
	return result5;
}

// Address range: 0x9678c - 0x9691c
int32_t function_9678c(int32_t result)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8);             // 0x967a0
	int32_t v2 = *(int32_t *)(g23 - 0x7794);             // 0x967b4
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x967cc
	int32_t v4 = 0x55ec * v3;                            // 0x967d0
	int32_t v5 = v4 + v1;                                // 0x967d4
	if (*(int32_t *)v5 == 8) {
		// 0x9690c
		return result;
	}
	unsigned char v6 = *(char *)(v5 + 454); // 0x967e4
	int32_t v7;                             // bp-28
	if (v6 >= 1) {
		int32_t v8 = (int32_t) * (char *)v2;                      // 0x967f0
		int32_t *v9 = (int32_t *)(4 * v8 + (int32_t)&v7);         // 0x96808
		int32_t v10 = *v9;                                        // 0x96808
		uint64_t v11 = 0x51eb851f * (int64_t)(v10 * (int32_t)v6); // 0x96810
		int32_t v12 = (int32_t)(v11 / 0x100000000) >> 31;         // 0x96814
		*v9 = v12 + v10 - (v12 & -0x8000000 | (int32_t)(v11 / 0x2000000000));
		// branch -> 0x96828
	}
	int32_t v13 = 120 * result; // 0x96828
	int32_t v14 = v1 + v4;      // 0x9682c
	int32_t v15 = v14 + 56;     // 0x96830
	result = v15;
	int32_t v16 = v13 + *(int32_t *)(g23 - 0x7688); // 0x96834
	if (*(int32_t *)v15 == *(int32_t *)(v16 + 4)) {
		int32_t v17 = v14 + 60; // 0x9684c
		if (*(int32_t *)v17 == *(int32_t *)(v16 + 8) - 1) {
			int32_t v18 = 4 * (int32_t) * (char *)v2;       // 0x96868
			int32_t v19 = *(int32_t *)(v18 + (int32_t)&v7); // 0x9686c
			int32_t *v20 = (int32_t *)(v14 + 404);          // 0x96874
			*v20 = *v20 - v19;
			int32_t *v21 = (int32_t *)(v14 + 396); // 0x96880
			*v21 = *v21 - v19;
			int32_t result2; // 0x96900
			if (*(int32_t *)(v14 + 404) > 63) {
				unsigned char v22 = *(char *)(v14 + 348); // 0x968a8
				if (v22 == 0) {
					// 0x968b4
					g34 = 787;
					g38 = *(int32_t *)v17;
					PlaySfxLoc(787);
					// branch -> 0x96900
					// 0x96900
					result2 = *(int32_t *)(g23 - 0x76f0);
					*(int32_t *)result2 = 1;
					// branch -> 0x9690c
					// 0x9690c
					return result2;
				}
				// 0x968c8
				if (v22 == 1) {
					// 0x968d4
					g34 = 678;
					g38 = *(int32_t *)v17;
					PlaySfxLoc(678);
					// branch -> 0x96900
				} else {
					// 0x968e8
					if (v22 == 2) {
						// 0x968f0
						g34 = 575;
						g38 = *(int32_t *)v17;
						PlaySfxLoc(575);
						// branch -> 0x96900
					}
				}
				// 0x96900
				result2 = *(int32_t *)(g23 - 0x76f0);
				*(int32_t *)result2 = 1;
				// branch -> 0x9690c
				// 0x9690c
				return result2;
			}
			// 0x96898
			function_a640c(v3, 0);
			// branch -> 0x96900
			// 0x96900
			result2 = *(int32_t *)(g23 - 0x76f0);
			result = result2;
			*(int32_t *)result2 = 1;
			// branch -> 0x9690c
		}
	}
	// 0x9690c
	return result;
}

// Address range: 0x9691c - 0x96ad8
int32_t function_9691c(int32_t a1)
{
	int32_t v1 = g10;                        // 0x96920
	int32_t v2 = *(int32_t *)(g23 - 0x7190); // 0x96924
	int32_t v3 = 0;                          // r27
	int32_t v4 = *(int32_t *)(g23 - 0x7194); // 0x9692c
	int32_t v5 = *(int32_t *)(g23 - 0x7688); // 0x96930
	int32_t v6 = v2;                         // r28
	int32_t v7 = v4;                         // 0x96ab81
	int32_t v8;                              // 0x96ab4
	int32_t v9;                              // 0x96ab821
	int32_t v10;                             // 0x96a94
	int32_t v11;                             // 0x96a90
	if (*(int32_t *)v4 <= 0) {
		// 0x96a84
		if (*(int32_t *)v7 > 0) {
			v9 = v7;
			v8 = 0;
			while (true) {
				// 0x96a8c
				v11 = *(int32_t *)(v2 + 4 * v8);
				v10 = 120 * v11;
				if (*(int32_t *)(v5 + v10 + 48) == 0) {
					goto lab_0x96ab4;
				}
				goto lab_0x96aa8;
			}
		}
		// 0x96ac4
		g10 = v1;
		return g34;
	}
	int32_t v12 = *(int32_t *)v2; // 0x9694446
	g34 = v12;
	int32_t v13 = 120 * v12 + v5;   // 0x9694c48
	uint32_t v14 = *(int32_t *)v13; // 0x9694c50
	if (v14 > 91) {
		while (true) {
			int32_t v15 = v13; // r4
			if (*(int32_t *)(v13 + 16) != 0) {
				int32_t v16 = v13 + 28;        // 0x96a20
				int32_t v17 = v16;             // r5
				int32_t *v18 = (int32_t *)v16; // 0x96a24
				*v18 = *v18 + 1;
				int32_t v19 = v15;                     // 0x96a30
				uint32_t v20 = *(int32_t *)(v19 + 28); // 0x96a30
				g34 = v20;
				if (v20 >= *(int32_t *)(v19 + 24)) {
					int32_t v21 = v19 + 36; // r6
					*(int32_t *)v17 = 0;
					int32_t *v22 = (int32_t *)(v15 + 36); // 0x96a4c
					*v22 = *v22 + 1;
					int32_t v23 = *(int32_t *)(v15 + 36); // 0x96a58
					g34 = v23;
					if (v23 > *(int32_t *)(v15 + 32)) {
						// 0x96a68
						*(int32_t *)v21 = 1;
						// branch -> 0x96a70
					}
				}
			}
			int32_t v24 = v6 + 4; // 0x96a70
			v6 = v24;
			int32_t v25 = v3 + 1; // 0x96a74
			v3 = v25;
			if (v25 >= *(int32_t *)v4) {
				// 0x96a78
				v7 = v4;
				// branch -> 0x96a84
				// 0x96a84
				if (*(int32_t *)v7 <= 0) {
					// 0x96a84
					// branch -> 0x96ac4
					// 0x96ac4
					g10 = v1;
					return g34;
				}
				v9 = v7;
				v8 = 0;
				int32_t result; // 0x96ad424
				while (true) {
					// 0x96a8c
					v11 = *(int32_t *)(v2 + 4 * v8);
					v10 = 120 * v11;
					int32_t v26;
					int32_t v27; // 0x96ab8
					if (*(int32_t *)(v5 + v10 + 48) == 0) {
					lab_0x96ab4:
						// 0x96ab4
						result = v11;
						v27 = v9;
						v26 = v8 + 1;
						// branch -> 0x96ab8
					} else {
					lab_0x96aa8:
						// 0x96aa8
						result = function_94970(v11, v10);
						v27 = v4;
						v26 = 0;
						// branch -> 0x96ab8
					}
					// 0x96ab8
					if (v26 >= *(int32_t *)v27) {
						// break -> 0x96ac4
						break;
					}
					v9 = v27;
					v8 = v26;
					// continue -> 0x96a8c
				}
				// 0x96ac4
				g10 = v1;
				return result;
			}
			int32_t v28 = *(int32_t *)v24; // 0x96944
			g34 = v28;
			int32_t v29 = 120 * v28 + v5; // 0x9694c
			if (*(int32_t *)v29 <= 91) {
				// break -> 0x96944
				break;
			}
			v13 = v29;
			// continue -> 0x96a0c
		}
	}
	// 0x9695c
	return *(int32_t *)(*(int32_t *)(g23 - 0x5b38) + 4 * v14);
}

// Address range: 0x96ad8 - 0x96e20
int32_t ObjSetMicro(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x96ad8
	g37 = a2;
	g34 = a1;
	int32_t v1 = g36;                        // 0x96ad8
	int32_t v2 = g10;                        // 0x96adc
	int32_t v3 = *(int32_t *)(g23 - 0x757c); // 0x96ae0
	int32_t v4 = g35;                        // 0x96ae8
	g36 = *(int32_t *)(g23 - 0x7570);
	int32_t v5 = g33; // 0x96af0
	g33 = a3;
	int32_t v6 = 0x10000 * a3 / 0x10000; // 0x96af8
	int32_t v7 = 2 * g37 + 224 * g34;    // 0x96b04
	*(int16_t *)(*(int32_t *)v3 + v7) = (int16_t)v6;
	int32_t v8 = function_52378(); // 0x96b14
	g34 = *(int32_t *)g36;
	g35 = *(int32_t *)*(int32_t *)(g23 - 0x7584) + 32 * v8;
	int32_t v9 = function_c9948(); // 0x96b2c
	int32_t v10;                   // r6
	int32_t result;                // 0x96e00
	if (*(char *)*(int32_t *)(g23 - 0x7794) == 4) {
		int32_t v11 = 2;                  // ctr
		int32_t v12 = g35;                // r5
		int32_t v13 = v9 - 32 + 32 * g33; // r4
		v10 = 0;
		int32_t v14 = 0; // 0x96cd4
		// branch -> 0x96cd4
		while (true) {
			int32_t v15 = 14 - __asm_rlwinm(v14, 0, 28, 30); // 0x96cd8
			uint32_t v16 = v10;                              // 0x96cdc
			int32_t v17 = 2 * (v16 % 2 + v15) + v13;         // 0x96ce8
			unsigned char v18 = *(char *)v17;                // 0x96ce8
			unsigned char v19 = *(char *)(v17 + 1);          // 0x96ce8
			int32_t v20 = v16 + 1;                           // 0x96cec
			int32_t v21 = __asm_rlwinm(v20, 0, 28, 30);      // r0
			int32_t v22 = 256 * (int16_t)v19 | (int16_t)v18; // 0x96cf4
			*(int16_t *)v12 = (int16_t)v22;
			int32_t v23 = v13 + 2 * (14 - v21 + v20 % 2); // 0x96d0c
			unsigned char v24 = *(char *)v23;             // 0x96d0c
			unsigned char v25 = *(char *)(v23 + 1);       // 0x96d0c
			int32_t v26 = v16 + 2;                        // 0x96d10
			v21 = __asm_rlwinm(v26, 0, 28, 30);
			int32_t v27 = 256 * (int16_t)v25 | (int16_t)v24; // 0x96d18
			*(int16_t *)(v12 + 2) = (int16_t)v27;
			int32_t v28 = v13 + 2 * (14 - v21 + v26 % 2); // 0x96d30
			unsigned char v29 = *(char *)v28;             // 0x96d30
			unsigned char v30 = *(char *)(v28 + 1);       // 0x96d30
			int32_t v31 = v16 + 3;                        // 0x96d34
			v21 = __asm_rlwinm(v31, 0, 28, 30);
			int32_t v32 = 256 * (int16_t)v30 | (int16_t)v29; // 0x96d3c
			*(int16_t *)(v12 + 4) = (int16_t)v32;
			int32_t v33 = v13 + 2 * (14 - v21 + v31 % 2); // 0x96d54
			unsigned char v34 = *(char *)v33;             // 0x96d54
			unsigned char v35 = *(char *)(v33 + 1);       // 0x96d54
			int32_t v36 = v16 + 4;                        // 0x96d58
			v21 = __asm_rlwinm(v36, 0, 28, 30);
			int32_t v37 = 256 * (int16_t)v35 | (int16_t)v34; // 0x96d60
			*(int16_t *)(v12 + 6) = (int16_t)v37;
			int32_t v38 = v13 + 2 * (14 - v21 + v36 % 2); // 0x96d78
			unsigned char v39 = *(char *)v38;             // 0x96d78
			unsigned char v40 = *(char *)(v38 + 1);       // 0x96d78
			int32_t v41 = v16 + 5;                        // 0x96d7c
			v21 = __asm_rlwinm(v41, 0, 28, 30);
			int32_t v42 = 256 * (int16_t)v40 | (int16_t)v39; // 0x96d84
			*(int16_t *)(v12 + 8) = (int16_t)v42;
			int32_t v43 = v13 + 2 * (14 - v21 + v41 % 2); // 0x96d9c
			unsigned char v44 = *(char *)v43;             // 0x96d9c
			unsigned char v45 = *(char *)(v43 + 1);       // 0x96d9c
			int32_t v46 = v16 + 6;                        // 0x96da0
			v21 = __asm_rlwinm(v46, 0, 28, 30);
			int32_t v47 = 256 * (int16_t)v45 | (int16_t)v44; // 0x96da8
			*(int16_t *)(v12 + 10) = (int16_t)v47;
			int32_t v48 = v13 + 2 * (14 - v21 + v46 % 2); // 0x96dc0
			unsigned char v49 = *(char *)v48;             // 0x96dc0
			unsigned char v50 = *(char *)(v48 + 1);       // 0x96dc0
			int32_t v51 = v16 + 7;                        // 0x96dc4
			v21 = __asm_rlwinm(v51, 0, 28, 30);
			int32_t v52 = 256 * (int16_t)v50 | (int16_t)v49; // 0x96dcc
			*(int16_t *)(v12 + 12) = (int16_t)v52;
			int32_t v53 = v13 + 2 * (14 - v21 + v51 % 2);               // 0x96de4
			unsigned char v54 = *(char *)(v53 + 1);                     // 0x96de4
			int16_t v55 = 256 * (int16_t)v54 | (int16_t) * (char *)v53; // 0x96de4
			v10 = v16 + 8;
			*(int16_t *)(v12 + 14) = v55;
			v12 += 16;
			int32_t v56 = v11 - 1; // 0x96df8
			v11 = v56;
			if (v56 != 0) {
				// 0x96cd4
				v14 = v10;
				// branch -> 0x96cd4
				continue;
			}
			// 0x96dfc
			result = function_c9acc(*(int32_t *)g36);
			g36 = v1;
			g10 = v2;
			g35 = v4;
			g33 = v5;
			return result;
		}
	} else {
		// 0x96b40
		v10 = 20 * g33 - 20 + v9;
		int32_t v57 = v10 + 2 * (8 - __asm_rlwinm(0, 0, 28, 30));                       // 0x96b64
		unsigned char v58 = *(char *)v57;                                               // 0x96b64
		unsigned char v59 = *(char *)(v57 + 1);                                         // 0x96b64
		int32_t v60 = 0x10000 * (int32_t)(256 * (int16_t)v59 | (int16_t)v58) / 0x10000; // 0x96b70
		int32_t v61 = 8 - __asm_rlwinm(1, 0, 28, 30);                                   // r3
		*(int16_t *)g35 = (int16_t)v60;
		int32_t v62 = v10 + 2 * v61 + 2;                                                // 0x96b88
		unsigned char v63 = *(char *)v62;                                               // 0x96b88
		unsigned char v64 = *(char *)(v62 + 1);                                         // 0x96b88
		int32_t v65 = 0x10000 * (int32_t)(256 * (int16_t)v64 | (int16_t)v63) / 0x10000; // 0x96b94
		v61 = 8 - __asm_rlwinm(2, 0, 28, 30);
		*(int16_t *)(g35 + 2) = (int16_t)v65;
		int32_t v66 = v10 + 2 * v61;                                                    // 0x96bac
		unsigned char v67 = *(char *)v66;                                               // 0x96bac
		unsigned char v68 = *(char *)(v66 + 1);                                         // 0x96bac
		int32_t v69 = 0x10000 * (int32_t)(256 * (int16_t)v68 | (int16_t)v67) / 0x10000; // 0x96bb8
		v61 = 8 - __asm_rlwinm(3, 0, 28, 30);
		*(int16_t *)(g35 + 4) = (int16_t)v69;
		int32_t v70 = v10 + 2 * v61 + 2;                                                // 0x96bd0
		unsigned char v71 = *(char *)v70;                                               // 0x96bd0
		unsigned char v72 = *(char *)(v70 + 1);                                         // 0x96bd0
		int32_t v73 = 0x10000 * (int32_t)(256 * (int16_t)v72 | (int16_t)v71) / 0x10000; // 0x96bdc
		v61 = 8 - __asm_rlwinm(4, 0, 28, 30);
		*(int16_t *)(g35 + 6) = (int16_t)v73;
		int32_t v74 = v10 + 2 * v61;                                                    // 0x96bf4
		unsigned char v75 = *(char *)v74;                                               // 0x96bf4
		unsigned char v76 = *(char *)(v74 + 1);                                         // 0x96bf4
		int32_t v77 = 0x10000 * (int32_t)(256 * (int16_t)v76 | (int16_t)v75) / 0x10000; // 0x96c00
		v61 = 8 - __asm_rlwinm(5, 0, 28, 30);
		*(int16_t *)(g35 + 8) = (int16_t)v77;
		int32_t v78 = v10 + 2 * v61 + 2;                                                // 0x96c18
		unsigned char v79 = *(char *)v78;                                               // 0x96c18
		unsigned char v80 = *(char *)(v78 + 1);                                         // 0x96c18
		int32_t v81 = 0x10000 * (int32_t)(256 * (int16_t)v80 | (int16_t)v79) / 0x10000; // 0x96c24
		v61 = 8 - __asm_rlwinm(6, 0, 28, 30);
		*(int16_t *)(g35 + 10) = (int16_t)v81;
		int32_t v82 = v10 + 2 * v61;                                                    // 0x96c3c
		unsigned char v83 = *(char *)v82;                                               // 0x96c3c
		unsigned char v84 = *(char *)(v82 + 1);                                         // 0x96c3c
		int32_t v85 = 0x10000 * (int32_t)(256 * (int16_t)v84 | (int16_t)v83) / 0x10000; // 0x96c48
		v61 = 8 - __asm_rlwinm(7, 0, 28, 30);
		*(int16_t *)(g35 + 12) = (int16_t)v85;
		int32_t v86 = v10 + 2 * v61 + 2;                                                // 0x96c60
		unsigned char v87 = *(char *)v86;                                               // 0x96c60
		unsigned char v88 = *(char *)(v86 + 1);                                         // 0x96c60
		int32_t v89 = 0x10000 * (int32_t)(256 * (int16_t)v88 | (int16_t)v87) / 0x10000; // 0x96c6c
		v61 = 8 - __asm_rlwinm(8, 0, 28, 30);
		*(int16_t *)(g35 + 14) = (int16_t)v89;
		int32_t v90 = v10 + 2 * v61;                                                    // 0x96c84
		unsigned char v91 = *(char *)v90;                                               // 0x96c84
		unsigned char v92 = *(char *)(v90 + 1);                                         // 0x96c84
		int32_t v93 = 0x10000 * (int32_t)(256 * (int16_t)v92 | (int16_t)v91) / 0x10000; // 0x96c90
		v61 = 8 - __asm_rlwinm(9, 0, 28, 30);
		*(int16_t *)(g35 + 16) = (int16_t)v93;
		int32_t v94 = v10 + 2 * v61 + 2;                            // 0x96ca8
		unsigned char v95 = *(char *)(v94 + 1);                     // 0x96ca8
		int16_t v96 = 256 * (int16_t)v95 | (int16_t) * (char *)v94; // 0x96ca8
		*(int16_t *)(g35 + 18) = v96;
		// branch -> 0x96dfc
	}
	// 0x96dfc
	result = function_c9acc(*(int32_t *)g36);
	g36 = v1;
	g10 = v2;
	g35 = v4;
	g33 = v5;
	return result;
}

// Address range: 0x96e20 - 0x96ed4
int32_t function_96e20(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7570); // 0x96e28
	g36 = v1;
	g33 = a1;
	g32 = *(int32_t *)(g23 - 0x7584);
	g35 = a2;
	g34 = *(int32_t *)v1;
	int32_t v2 = function_c9948();                                          // 0x96e44
	int32_t v3 = 2 * g35 + 224 * g33;                                       // 0x96e58
	int16_t v4 = *(int16_t *)(v3 + *(int32_t *)*(int32_t *)(g23 - 0x757c)); // 0x96e5c
	int32_t v5 = v4;                                                        // 0x96e5c
	int32_t v6 = v5 - 1;                                                    // 0x96e60
	int32_t v7 = v2 + 16 + 20 * v6;                                         // 0x96e6c
	g30 = v7;
	unsigned char v8 = *(char *)(v7 + v5);                          // 0x96e70
	int16_t v9 = 256 * (int16_t)v8 | (int16_t) * (char *)(v7 + v6); // 0x96e70
	g34 = g33;
	g37 = g35;
	int32_t v10 = function_52378(); // 0x96e80
	int32_t v11 = *(int32_t *)g32;  // 0x96e84
	*(int16_t *)(v11 + 32 * v10) = (int16_t)(int32_t)v9;
	int32_t v12 = 2 + g30;                                      // 0x96e94
	unsigned char v13 = *(char *)(v12 + 1);                     // 0x96e94
	int16_t v14 = 256 * (int16_t)v13 | (int16_t) * (char *)v12; // 0x96e94
	g34 = g33;
	g37 = g35;
	int32_t v15 = *(int32_t *)g32 + 32 * function_52378(); // 0x96eb0
	*(int16_t *)(v15 + 2) = (int16_t)(int32_t)v14;
	int32_t result = function_c9acc(*(int32_t *)g36); // 0x96ebc
	return result;
}

// Address range: 0x96ed4 - 0x96fac
int32_t ObjSetMini(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x756c); // 0x96edc
	g33 = v1;
	g35 = a1;
	g36 = a2;
	g30 = a3;
	g34 = *(int32_t *)v1;
	int32_t v2 = function_c9948();                // 0x96ef8
	int32_t v3 = 8 * g30 - 8;                     // 0x96f00
	int32_t v4 = v3 + v2;                         // 0x96f04
	int32_t v5 = v4 + v3;                         // 0x96f08
	unsigned char v6 = *(char *)v5;               // 0x96f08
	unsigned char v7 = *(char *)(v5 + 1);         // 0x96f08
	int32_t v8 = 256 * (int16_t)v7 | (int16_t)v6; // 0x96f10
	unsigned char v9 = *(char *)(v4 + 2);         // 0x96f18
	unsigned char v10 = *(char *)(v4 + 3);        // 0x96f18
	g32 = (int32_t)(256 * (int16_t)v10 | (int16_t)v9) + 1;
	unsigned char v11 = *(char *)(v4 + 4); // 0x96f28
	unsigned char v12 = *(char *)(v4 + 5); // 0x96f28
	g31 = (int32_t)(256 * (int16_t)v12 | (int16_t)v11) + 1;
	unsigned char v13 = *(char *)(v4 + 6); // 0x96f38
	unsigned char v14 = *(char *)(v4 + 7); // 0x96f38
	int32_t v15 = 2 * g36 + 16;            // 0x96f44
	g30 = v15;
	int32_t v16 = 2 * g35 + 16; // 0x96f48
	g36 = v16;
	g35 = (int32_t)(256 * (int16_t)v14 | (int16_t)v13) + 1;
	ObjSetMicro(v16, v15, v8 + 1);
	ObjSetMicro(g36 + 1, g30, g32);
	ObjSetMicro(g36, g30 + 1, g31);
	ObjSetMicro(g36 + 1, g30 + 1, g35);
	int32_t result = function_c9acc(*(int32_t *)g33); // 0x96f94
	return result;
}

// Address range: 0x96fac - 0x97200
int32_t function_96fac(int32_t result, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = a2;                         // r4
	int32_t v2 = *(int32_t *)(g23 - 0x7598); // r8
	int32_t v3 = 2 * a2;                     // r11
	int32_t v4 = *(int32_t *)(g23 - 0x757c); // r7
	if (a2 > a4) {
		// 0x971fc
		return result;
	}
	while (true) {
		int32_t v5 = 112 * result;    // 0x96fc8
		int32_t v6 = 1 - result + a3; // ctr
		int32_t v7 = 224 * result;    // r10
		if (result <= a3) {
			while (true) {
				// 0x96fd8
				*(char *)(*(int32_t *)v2 + v5 + a2) = 0;
				int32_t v8 = v7;  // 0x96fec
				int32_t v9 = v3;  // 0x97014
				int32_t v10 = v8; // 0x97010
				int32_t v11 = v4; // 0x9700c
				if (*(int16_t *)(v3 + v8 + *(int32_t *)v4) == 12) {
					int32_t v12 = *(int32_t *)v2; // 0x96ffc
					*(char *)(v1 + v5 + v12) = 1;
					v9 = v3;
					v10 = v7;
					v11 = v4;
					// branch -> 0x9700c
				}
				int32_t v13 = v9;  // 0x97038
				int32_t v14 = v10; // 0x97034
				int32_t v15 = v11; // 0x97030
				if (*(int16_t *)(*(int32_t *)v11 + v10 + v9) == 11) {
					int32_t v16 = *(int32_t *)v2; // 0x97020
					*(char *)(v1 + v5 + v16) = 2;
					v13 = v3;
					v14 = v7;
					v15 = v4;
					// branch -> 0x97030
				}
				int32_t v17 = v13; // 0x9705c
				int32_t v18 = v14; // 0x97058
				int32_t v19 = v15; // 0x97054
				if (*(int16_t *)(*(int32_t *)v15 + v14 + v13) == 71) {
					int32_t v20 = *(int32_t *)v2; // 0x97044
					*(char *)(v1 + v5 + v20) = 1;
					v17 = v3;
					v18 = v7;
					v19 = v4;
					// branch -> 0x97054
				}
				int32_t v21 = v17; // 0x97080
				int32_t v22 = v18; // 0x9707c
				int32_t v23 = v19; // 0x97078
				if (*(int16_t *)(*(int32_t *)v19 + v18 + v17) == 259) {
					int32_t v24 = *(int32_t *)v2; // 0x97068
					*(char *)(v1 + v5 + v24) = 5;
					v21 = v3;
					v22 = v7;
					v23 = v4;
					// branch -> 0x97078
				}
				int32_t v25 = v21; // 0x970a4
				int32_t v26 = v22; // 0x970a0
				int32_t v27 = v23; // 0x9709c
				if (*(int16_t *)(*(int32_t *)v23 + v22 + v21) == 249) {
					int32_t v28 = *(int32_t *)v2; // 0x9708c
					*(char *)(v1 + v5 + v28) = 2;
					v25 = v3;
					v26 = v7;
					v27 = v4;
					// branch -> 0x9709c
				}
				int32_t v29 = v25; // 0x970c8
				int32_t v30 = v26; // 0x970c4
				int32_t v31 = v27; // 0x970c0
				if (*(int16_t *)(*(int32_t *)v27 + v26 + v25) == 325) {
					int32_t v32 = *(int32_t *)v2; // 0x970b0
					*(char *)(v1 + v5 + v32) = 2;
					v29 = v3;
					v30 = v7;
					v31 = v4;
					// branch -> 0x970c0
				}
				int32_t v33 = v29; // 0x970ec
				int32_t v34 = v30; // 0x970e8
				int32_t v35 = v31; // 0x970e4
				if (*(int16_t *)(*(int32_t *)v31 + v30 + v29) == 321) {
					int32_t v36 = *(int32_t *)v2; // 0x970d4
					*(char *)(v1 + v5 + v36) = 1;
					v33 = v3;
					v34 = v7;
					v35 = v4;
					// branch -> 0x970e4
				}
				int32_t v37 = v33; // 0x97110
				int32_t v38 = v34; // 0x9710c
				int32_t v39 = v35; // 0x97108
				if (*(int16_t *)(*(int32_t *)v35 + v34 + v33) == 255) {
					int32_t v40 = *(int32_t *)v2; // 0x970f8
					*(char *)(v1 + v5 + v40) = 4;
					v37 = v3;
					v38 = v7;
					v39 = v4;
					// branch -> 0x97108
				}
				int32_t v41 = v37; // 0x97134
				int32_t v42 = v38; // 0x97130
				int32_t v43 = v39; // 0x9712c
				if (*(int16_t *)(*(int32_t *)v39 + v38 + v37) == 211) {
					int32_t v44 = *(int32_t *)v2; // 0x9711c
					*(char *)(v1 + v5 + v44) = 1;
					v41 = v3;
					v42 = v7;
					v43 = v4;
					// branch -> 0x9712c
				}
				int32_t v45 = v41; // 0x97158
				int32_t v46 = v42; // 0x97154
				int32_t v47 = v43; // 0x97150
				if (*(int16_t *)(*(int32_t *)v43 + v42 + v41) == 344) {
					int32_t v48 = *(int32_t *)v2; // 0x97140
					*(char *)(v1 + v5 + v48) = 2;
					v45 = v3;
					v46 = v7;
					v47 = v4;
					// branch -> 0x97150
				}
				int32_t v49 = v45; // 0x9717c
				int32_t v50 = v46; // 0x97178
				int32_t v51 = v47; // 0x97174
				if (*(int16_t *)(*(int32_t *)v47 + v46 + v45) == 341) {
					int32_t v52 = *(int32_t *)v2; // 0x97164
					*(char *)(v1 + v5 + v52) = 1;
					v49 = v3;
					v50 = v7;
					v51 = v4;
					// branch -> 0x97174
				}
				int32_t v53 = v49; // 0x971a0
				int32_t v54 = v50; // 0x9719c
				int32_t v55 = v51; // 0x97198
				if (*(int16_t *)(*(int32_t *)v51 + v50 + v49) == 331) {
					int32_t v56 = *(int32_t *)v2; // 0x97188
					*(char *)(v1 + v5 + v56) = 2;
					v53 = v3;
					v54 = v7;
					v55 = v4;
					// branch -> 0x97198
				}
				int32_t v57 = v53; // 0x971c4
				int32_t v58 = v54; // 0x971c0
				int32_t v59 = v55; // 0x971bc
				if (*(int16_t *)(*(int32_t *)v55 + v54 + v53) == 418) {
					int32_t v60 = *(int32_t *)v2; // 0x971ac
					*(char *)(v1 + v5 + v60) = 1;
					v57 = v3;
					v58 = v7;
					v59 = v4;
					// branch -> 0x971bc
				}
				int32_t v61 = v58; // 0x971e4
				if (*(int16_t *)(*(int32_t *)v59 + v58 + v57) == 421) {
					int32_t v62 = *(int32_t *)v2; // 0x971d0
					*(char *)(v1 + v5 + v62) = 2;
					v61 = v7;
					// branch -> 0x971e0
				}
				// 0x971e0
				v7 = v61 + 224;
				int32_t v63 = v6 - 1; // 0x971e8
				v6 = v63;
				if (v63 == 0) {
					// 0x971ec
					a2 = v1;
					// branch -> 0x971ec
					// 0x971ec
					if (a2 + 1 <= a4) {
					lab_0x971ec:
						// 0x971ec
						// branch -> 0x96fbc
						break;
					}
					// 0x971f4
					// branch -> 0x971fc
					// 0x971fc
					return result;
				}
				// 0x971e0
				a2 = v1;
				v5 += 112;
				// branch -> 0x96fd8
			}
		}
		// 0x971ec
		if (a2 + 1 <= a4) {
			goto lab_0x971ec;
		}
		// 0x971f4
		// branch -> 0x971fc
		// 0x971fc
		return result;
	}
}

// Address range: 0x97200 - 0x9742c
int32_t function_97200(int32_t result2, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = a2;                         // r4
	int32_t v2 = 2 * a2;                     // 0x97204
	int32_t v3 = *(int32_t *)(g23 - 0x7598); // r8
	int32_t v4 = a2;                         // r31
	int32_t v5 = *(int32_t *)(g23 - 0x757c); // r7
	int32_t v6 = a4;                         // 0x974182
	int32_t v7 = a2;                         // 0x974181
	int32_t v8;                              // ctr
	int32_t v9;                              // r10
	int32_t v10;                             // 0x97368
	int32_t v11;                             // 0x9736c
	int32_t v12;                             // 0x9722c
	int32_t v13;                             // 0x97374
	int32_t v14;                             // 0x9737c
	int32_t v15;                             // 0x97388
	int32_t v16;                             // 0x973a4
	if (a4 >= a2) {
		int32_t v17 = a4; // 0x9735c36
	lab_0x97220:;
		int32_t v18; // 0x9735c
		while (true) {
			// 0x97220
			v12 = 112 * result2;
			v8 = a3 + 1 - result2;
			v9 = 224 * result2;
			v18 = v17;
			int32_t v19 = a2; // 0x97358
			int32_t v20 = v2; // 0x97354
			int32_t v21;      // 0x97354
			int32_t v22;      // 0x97358
			if (result2 <= a3) {
				int32_t v23 = a2; // 0x97248
				while (true) {
					// 0x9723c
					*(char *)(*(int32_t *)v3 + v12 + v23) = 0;
					int32_t v24 = v9;  // 0x97250
					int32_t v25 = v2;  // 0x97254
					int32_t v26 = v25; // 0x97278
					int32_t v27 = v24; // 0x97274
					int32_t v28 = v5;  // 0x97270
					if (*(int16_t *)(v25 + v24 + *(int32_t *)v5) == 541) {
						int32_t v29 = *(int32_t *)v3; // 0x97260
						*(char *)(v4 + v12 + v29) = 5;
						v26 = v2;
						v27 = v9;
						v28 = v5;
						// branch -> 0x97270
					}
					int32_t v30 = v26; // 0x9729c
					int32_t v31 = v27; // 0x97298
					int32_t v32 = v28; // 0x97294
					if (*(int16_t *)(*(int32_t *)v28 + v27 + v26) == 178) {
						int32_t v33 = *(int32_t *)v3; // 0x97284
						*(char *)(v4 + v12 + v33) = 5;
						v30 = v2;
						v31 = v9;
						v32 = v5;
						// branch -> 0x97294
					}
					int32_t v34 = v30; // 0x972c0
					int32_t v35 = v31; // 0x972bc
					int32_t v36 = v32; // 0x972b8
					if (*(int16_t *)(*(int32_t *)v32 + v31 + v30) == 551) {
						int32_t v37 = *(int32_t *)v3; // 0x972a8
						*(char *)(v4 + v12 + v37) = 5;
						v34 = v2;
						v35 = v9;
						v36 = v5;
						// branch -> 0x972b8
					}
					int32_t v38 = v34; // 0x972e4
					int32_t v39 = v35; // 0x972e0
					int32_t v40 = v36; // 0x972dc
					if (*(int16_t *)(*(int32_t *)v36 + v35 + v34) == 542) {
						int32_t v41 = *(int32_t *)v3; // 0x972cc
						*(char *)(v4 + v12 + v41) = 6;
						v38 = v2;
						v39 = v9;
						v40 = v5;
						// branch -> 0x972dc
					}
					int32_t v42 = v38; // 0x97308
					int32_t v43 = v39; // 0x97304
					int32_t v44 = v40; // 0x97300
					if (*(int16_t *)(*(int32_t *)v40 + v39 + v38) == 553) {
						int32_t v45 = *(int32_t *)v3; // 0x972f0
						*(char *)(v4 + v12 + v45) = 6;
						v42 = v2;
						v43 = v9;
						v44 = v5;
						// branch -> 0x97300
					}
					int32_t v46 = v42; // 0x9732c
					int32_t v47 = v43; // 0x97328
					int32_t v48 = v44; // 0x97324
					if (*(int16_t *)(*(int32_t *)v44 + v43 + v42) == 13) {
						int32_t v49 = *(int32_t *)v3; // 0x97314
						*(char *)(v4 + v12 + v49) = 5;
						v46 = v2;
						v47 = v9;
						v48 = v5;
						// branch -> 0x97324
					}
					int32_t v50 = v47; // 0x9734c
					if (*(int16_t *)(*(int32_t *)v48 + v47 + v46) == 17) {
						int32_t v51 = *(int32_t *)v3; // 0x97338
						*(char *)(v4 + v12 + v51) = 6;
						v50 = v9;
						// branch -> 0x97348
					}
					int32_t v52 = v12 + 112; // 0x97348
					v9 = v50 + 224;
					int32_t v53 = v8 - 1; // 0x97350
					v8 = v53;
					if (v53 == 0) {
						// 0x97354
						v18 = a4;
						// branch -> 0x97354
						// 0x97354
						v21 = v2 + 2;
						v2 = v21;
						v22 = v4 + 1;
						v4 = v22;
						if (v22 > v18) {
							// break (via goto) -> 0x9735c
							goto lab_0x9735c;
						}
						v17 = v18;
						v2 = v21;
						a2 = v22;
						// continue (via goto) -> 0x97220
						goto lab_0x97220;
					} else {
						// 0x97348
						v23 = v4;
						v12 = v52;
						// branch -> 0x9723c
						continue;
					}
				}
				int32_t v54 = v1;
				v6 = v18;
				v7 = v54;
				// branch -> 0x97418
				// 0x97418
				if (v7 > v6) {
					int32_t result = result2; // 0x97428
					return result;
				}
				while (true) {
					// 0x97368
					v10 = a3;
					v11 = result2;
					v13 = 224 * v11;
					v12 = v13;
					v8 = v10 + 1 - v11;
					v14 = 112 * v11;
					v9 = v14;
					int32_t v55; // 0x97414
					if (v11 <= v10) {
						v16 = v14;
						v15 = v13;
					lab_0x97384:
						while (true) {
							int32_t v56 = v2;  // 0x9738c
							int32_t v57 = v56; // 0x973c8
							int32_t v58 = v15; // 0x973c4
							if (*(int16_t *)(v56 + *(int32_t *)v5 + v15) == 132) {
								int32_t v59 = *(int32_t *)v3 + v16; // 0x973a4
								*(char *)(v1 + v59 + 1) = 2;
								int32_t v60 = v9 + *(int32_t *)v3; // 0x973b4
								*(char *)(v1 + v60 + 2) = (char)1;
								v57 = v2;
								v58 = v12;
								// branch -> 0x973c0
							}
							int16_t v61 = *(int16_t *)(*(int32_t *)v5 + v58 + v57); // 0x973c8
							if (v61 != 135) {
								// 0x973d4
								if (v61 != 139) {
								lab_0x97404:;
									int32_t v62 = v58 + 224; // 0x97404
									v12 = v62;
									int32_t v63 = v9 + 112; // 0x97408
									v9 = v63;
									int32_t v64 = v8 - 1; // 0x9740c
									v8 = v64;
									if (v64 == 0) {
										// break -> 0x97410
										break;
									}
									v16 = v63;
									v15 = v62;
									// continue -> 0x97384
									continue;
								}
							}
							int32_t v65 = v9 + *(int32_t *)v3; // 0x973e8
							*(char *)(v1 + v65 + 112) = 3;
							int32_t v66 = v9 + *(int32_t *)v3; // 0x973f8
							*(char *)(v1 + v66 + 224) = (char)4;
							v58 = v12;
							// branch -> 0x97404
							goto lab_0x97404;
						}
						// 0x97410
						v2 += 2;
						v55 = v1 + 1;
						v1 = v55;
						if (v55 > a4) {
							// break -> 0x97420
							break;
						}
						// continue -> 0x97368
						continue;
					}
				lab_0x97410:
					// 0x97410
					v2 += 2;
					v55 = v1 + 1;
					v1 = v55;
					if (v55 > a4) {
						// break -> 0x97420
						break;
					}
					// continue -> 0x97368
				}
				// 0x97420
				return result2;
			}
			// 0x97354
			v21 = v20 + 2;
			v2 = v21;
			v22 = v19 + 1;
			v4 = v22;
			if (v22 > v18) {
				// break -> 0x9735c
				break;
			}
			v17 = v18;
			v2 = v21;
			a2 = v22;
			// continue -> 0x97220
		}
	lab_0x9735c:
		// 0x9735c
		v6 = v18;
		v7 = v1;
		// branch -> 0x97418
	}
	// 0x97418
	if (v7 > v6) {
		// 0x97420
		return result2;
	}
	while (true) {
		// 0x97368
		v10 = a3;
		v11 = result2;
		v13 = 224 * v11;
		v12 = v13;
		v8 = v10 + 1 - v11;
		v14 = 112 * v11;
		v9 = v14;
		if (v11 > v10) {
			goto lab_0x97410;
		}
		v16 = v14;
		v15 = v13;
		goto lab_0x97384;
	}
}

// Address range: 0x9742c - 0x97630
int32_t DoorSet(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x9742c
	g32 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x757c); // 0x97438
	g36 = *(int32_t *)(g23 - 0x7688);
	g33 = a3;
	g31 = a1;
	int16_t v2 = *(int16_t *)(*(int32_t *)v1 + 2 * a3 + 224 * a2); // 0x97460
	int32_t v3 = v2;                                               // 0x97460
	g35 = v3;
	if (v2 == 43) {
		// 0x9746c
		a1 = ObjSetMicro(a2, a3, 392);
		v3 = g35;
		// branch -> 0x9747c
	}
	int32_t v4 = v3; // 0x97494
	if (v3 == 45) {
		// 0x97484
		a1 = ObjSetMicro(g32, g33, 394);
		v4 = g35;
		// branch -> 0x97494
	}
	int32_t v5 = a1; // 0x9762c31
	int32_t v6 = v4; // 0x974bc
	if (v4 == 50) {
		// 0x9749c
		if (*(int32_t *)(g36 + 120 * g31) == 1) {
			// 0x974ac
			v5 = ObjSetMicro(g32, g33, 411);
			v6 = g35;
			// branch -> 0x974bc
		} else {
			v5 = a1;
			v6 = 50;
		}
	}
	int32_t v7 = v5; // 0x9762c30
	int32_t v8 = v6; // 0x974e4
	if (v6 == 50) {
		// 0x974c4
		if (*(int32_t *)(g36 + 120 * g31) == 2) {
			// 0x974d4
			v7 = ObjSetMicro(g32, g33, 412);
			v8 = g35;
			// branch -> 0x974e4
		} else {
			v7 = v5;
			v8 = 50;
		}
	}
	int32_t result = v7; // 0x9762c29
	int32_t v9 = v8;     // 0x974fc
	if (v8 == 54) {
		// 0x974ec
		result = ObjSetMicro(g32, g33, 397);
		v9 = g35;
		// branch -> 0x974fc
	}
	int32_t v10 = v9; // 0x97514
	if (v9 == 55) {
		// 0x97504
		result = ObjSetMicro(g32, g33, 398);
		v10 = g35;
		// branch -> 0x97514
	}
	int32_t v11 = v10; // 0x9752c
	if (v10 == 61) {
		// 0x9751c
		result = ObjSetMicro(g32, g33, 399);
		v11 = g35;
		// branch -> 0x9752c
	}
	int32_t v12 = v11; // 0x97544
	if (v11 == 67) {
		// 0x97534
		result = ObjSetMicro(g32, g33, 400);
		v12 = g35;
		// branch -> 0x97544
	}
	int32_t v13 = v12; // 0x9755c
	if (v12 == 68) {
		// 0x9754c
		result = ObjSetMicro(g32, g33, 401);
		v13 = g35;
		// branch -> 0x9755c
	}
	int32_t v14 = v13; // 0x97574
	if (v13 == 69) {
		// 0x97564
		result = ObjSetMicro(g32, g33, 403);
		v14 = g35;
		// branch -> 0x97574
	}
	int32_t v15 = v14; // 0x9758c
	if (v14 == 70) {
		// 0x9757c
		result = ObjSetMicro(g32, g33, 404);
		v15 = g35;
		// branch -> 0x9758c
	}
	int32_t v16 = v15; // 0x975a4
	if (v15 == 72) {
		// 0x97594
		result = ObjSetMicro(g32, g33, 406);
		v16 = g35;
		// branch -> 0x975a4
	}
	int32_t v17 = v16; // 0x975bc
	if (v16 == 212) {
		// 0x975ac
		result = ObjSetMicro(g32, g33, 407);
		v17 = g35;
		// branch -> 0x975bc
	}
	int32_t v18 = v17; // 0x975d4
	if (v17 == 354) {
		// 0x975c4
		result = ObjSetMicro(g32, g33, 409);
		v18 = g35;
		// branch -> 0x975d4
	}
	int32_t v19 = v18; // 0x975ec
	if (v18 == 355) {
		// 0x975dc
		result = ObjSetMicro(g32, g33, 410);
		v19 = g35;
		// branch -> 0x975ec
	}
	int32_t v20 = v19; // 0x97604
	if (v19 == 411) {
		// 0x975f4
		result = ObjSetMicro(g32, g33, 396);
		v20 = g35;
		// branch -> 0x97604
	}
	if (v20 == 412) {
		// 0x9760c
		result = ObjSetMicro(g32, g33, 396);
		// branch -> 0x9761c
	}
	// 0x9761c
	return result;
}

// Address range: 0x97630 - 0x976ac
int32_t function_97630(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x97640
	int32_t v2 = 0;                          // r29
	int32_t v3 = 0;                          // 0x976802
	// branch -> 0x97654
	while (true) {
		int32_t v4 = v3; // 0x97680
		if (*(char *)(v1 + 29) != 0) {
			int32_t v5 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x97660
			g34 = v5;
			if (v5 == *(int32_t *)(v1 + 52)) {
				int32_t v6 = *(int32_t *)(v1 + 60); // 0x97678
				g34 = function_cbddc(*(int32_t *)(v1 + 160), *(int32_t *)(v1 + 56), v6);
				v4 = v2;
				// branch -> 0x97680
			} else {
				v4 = v3;
			}
		}
		int32_t v7 = v4 + 1; // 0x97680
		v2 = v7;
		if (v7 >= 4) {
			// break -> 0x97690
			break;
		}
		v3 = v7;
		v1 += 0x55ec;
		// continue -> 0x97654
	}
	// 0x97690
	return g34;
}

// Address range: 0x976ac - 0x97940
int32_t OperateL1RDoor(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x976b0
	g26 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x976b8
	g36 = v2;
	int32_t v3 = 120 * a2; // 0x976bc
	g33 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7070); // 0x976c0
	g30 = v4;
	g25 = a1;
	int32_t v5 = *(int32_t *)(g23 - 0x77ac); // 0x976c8
	g35 = v5;
	g27 = a3;
	int32_t v6 = v2 + v3;        // 0x976d0
	int32_t v7 = v6 + 100;       // 0x976dc
	int32_t v8 = *(int32_t *)v7; // 0x976dc
	g32 = v7;
	int32_t result; // 0x9793c
	if (v8 == 2) {
		// 0x976e8
		if (*(int32_t *)v4 == 0) {
			// 0x976f4
			g34 = 19;
			g38 = *(int32_t *)(v6 + 8);
			result = PlaySfxLoc(19);
			// branch -> 0x9792c
		} else {
			result = a1;
		}
		// 0x9792c
		g10 = v1;
		return result;
	}
	int32_t v9 = v6 + 8;          // 0x97714
	int32_t v10 = *(int32_t *)v9; // 0x97714
	g38 = v10;
	int32_t v11 = v6 + 4;          // 0x9771c
	int32_t v12 = *(int32_t *)v11; // 0x9771c
	g24 = v11;
	g31 = v9;
	g28 = v10;
	g29 = v12;
	if (v8 == 0) {
		int32_t v13 = v4; // 0x97754
		if (a1 == *(int32_t *)v5) {
			// 0x9773c
			if (a3 != 0) {
				// 0x97744
				NetSendCmdParam1(1, 43, a2 % 0x10000);
				v13 = g30;
				// branch -> 0x97754
			} else {
				v13 = v4;
			}
		}
		// 0x97754
		if (*(int32_t *)v13 == 0) {
			// 0x97760
			g34 = 20;
			g38 = *(int32_t *)g31;
			PlaySfxLoc(20);
			// branch -> 0x97770
		}
		// 0x97770
		ObjSetMicro(g29, g28, 395);
		int32_t v14 = g28;             // 0x97788
		int32_t v15 = v14 + 112 * g29; // 0x97790
		*(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7598) + v15) = 8;
		function_96e20(g29, v14 - 1, 8);
		int32_t v16 = g33 + g36; // 0x977a4
		g27 = v16;
		int32_t *v17 = (int32_t *)(v16 + 36); // 0x977ac
		g25 = 1;
		*v17 = *v17 + 2;
		*(int32_t *)(g27 + 68) = g25;
		g34 = DoorSet(g26, g29 - 1, g28);
		*(int32_t *)g32 = g25;
		*(char *)(g27 + 64) = 2;
		int32_t result2 = function_97630(); // 0x977d8
		// branch -> 0x9792c
		// 0x9792c
		g10 = v1;
		return result2;
	}
	int32_t v18 = g23; // 0x97800
	if (*(int32_t *)v4 == 0) {
		// 0x977ec
		g34 = 19;
		PlaySfxLoc(19);
		v10 = g28;
		v18 = g23;
		v12 = g29;
		// branch -> 0x977f4
	}
	int32_t v19 = *(int32_t *)(v18 - 0x767c); // 0x977fc
	int32_t v20 = 224 * v12;                  // 0x97804
	g30 = v20;
	int32_t v21 = 112 * v12 + v10; // 0x9780c
	int32_t v22 = 2 * v10;         // 0x97814
	g31 = v22;
	unsigned char v23 = *(char *)(*(int32_t *)*(int32_t *)(v18 - 0x768c) + v21); // 0x97818
	unsigned char v24 = *(char *)(*(int32_t *)*(int32_t *)(v18 - 0x7630) + v21); // 0x97820
	int16_t v25 = *(int16_t *)(*(int32_t *)v19 + v20 + v22);                     // 0x97830
	int32_t v26 = llvm_ctlz_i32(-(int32_t)v23, true);                            // 0x97838
	int32_t v27 = llvm_ctlz_i32(-(int32_t)v25, true);                            // 0x97840
	int32_t v28 = llvm_ctlz_i32(-(int32_t)v24, true);                            // 0x97848
	int32_t v29 = __asm_rlwinm(v27, 27, 24, 31);                                 // r4
	int32_t v30 = __asm_rlwinm(v26, 27, 24, 31);                                 // 0x97850
	if ((v29 & v30 & __asm_rlwinm(v28, 27, 24, 31)) == 0) {
		// 0x97924
		*(int32_t *)g32 = 2;
		result = v30;
		// branch -> 0x9792c
	} else {
		// 0x97864
		if (g25 == *(int32_t *)g35) {
			// 0x97870
			if (g27 != 0) {
				// 0x97878
				NetSendCmdParam1(1, 44, g26 % 0x10000);
				// branch -> 0x97888
			}
		}
		// 0x97888
		g25 = g33 + g36;
		*(int32_t *)g32 = 0;
		*(char *)(g25 + 64) = 3;
		ObjSetMicro(g29, g28, *(int32_t *)(g25 + 88));
		int32_t v31 = *(int32_t *)(g25 + 92); // 0x978ac
		int32_t v32;                          // 0x97910
		int32_t v33;                          // 0x97904
		int32_t *v34;                         // 0x97908
		if (v31 == 50) {
			int32_t v35 = *(int32_t *)(g23 - 0x757c); // 0x978c8
			int32_t v36 = g28;                        // 0x978e4
			int32_t v37 = g29 - 1;                    // 0x978e8
			if (*(int16_t *)(g31 + g30 + *(int32_t *)v35 - 224) == 396) {
				// 0x978e4
				ObjSetMicro(v37, v36, 411);
				// branch -> 0x97904
			} else {
				// 0x978f8
				ObjSetMicro(v37, v36, 50);
				// branch -> 0x97904
			}
			// 0x97904
			v33 = g33 + g36;
			v34 = (int32_t *)(v33 + 36);
			v32 = *v34 - 2;
			g34 = v32;
			*v34 = v32;
			*(int32_t *)(v33 + 68) = 0;
			int32_t result3 = function_97630(); // 0x9791c
			// branch -> 0x9792c
			// 0x9792c
			g10 = v1;
			return result3;
		}
		// 0x978b8
		ObjSetMicro(g29 - 1, g28, v31);
		// branch -> 0x97904
		// 0x97904
		v33 = g33 + g36;
		v34 = (int32_t *)(v33 + 36);
		v32 = *v34 - 2;
		g34 = v32;
		*v34 = v32;
		*(int32_t *)(v33 + 68) = 0;
		result = function_97630();
		// branch -> 0x9792c
	}
	// 0x9792c
	g10 = v1;
	return result;
}

// Address range: 0x97940 - 0x97bf8
int32_t function_97940(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x97944
	g26 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x9794c
	g36 = v2;
	int32_t v3 = 120 * a2; // 0x97950
	g33 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7070); // 0x97954
	g30 = v4;
	g25 = a1;
	int32_t v5 = *(int32_t *)(g23 - 0x77ac); // 0x9795c
	g35 = v5;
	g27 = a3;
	int32_t v6 = v2 + v3;        // 0x97964
	int32_t v7 = v6 + 100;       // 0x97970
	int32_t v8 = *(int32_t *)v7; // 0x97970
	g32 = v7;
	int32_t result; // 0x97bf4
	if (v8 == 2) {
		// 0x9797c
		if (*(int32_t *)v4 == 0) {
			// 0x97988
			g34 = 19;
			g38 = *(int32_t *)(v6 + 8);
			result = PlaySfxLoc(19);
			// branch -> 0x97be4
		} else {
			result = a1;
		}
		// 0x97be4
		g10 = v1;
		return result;
	}
	int32_t v9 = v6 + 8;          // 0x979a8
	int32_t v10 = *(int32_t *)v9; // 0x979a8
	g38 = v10;
	int32_t v11 = v6 + 4;          // 0x979b0
	int32_t v12 = *(int32_t *)v11; // 0x979b0
	g24 = v11;
	g31 = v9;
	g28 = v10;
	g29 = v12;
	if (v8 == 0) {
		int32_t v13 = v4; // 0x979e8
		if (a1 == *(int32_t *)v5) {
			// 0x979d0
			if (a3 != 0) {
				// 0x979d8
				NetSendCmdParam1(1, 43, a2 % 0x10000);
				v13 = g30;
				// branch -> 0x979e8
			} else {
				v13 = v4;
			}
		}
		// 0x979e8
		if (*(int32_t *)v13 == 0) {
			// 0x979f4
			g34 = 20;
			g38 = *(int32_t *)g31;
			PlaySfxLoc(20);
			// branch -> 0x97a04
		}
		int32_t v14 = g29; // 0x97a14
		int32_t v15 = g28; // 0x97a18
		if (*(int32_t *)(g33 + g36 + 88) == 214) {
			// 0x97a14
			ObjSetMicro(v14, v15, 408);
			// branch -> 0x97a38
		} else {
			// 0x97a28
			ObjSetMicro(v14, v15, 393);
			// branch -> 0x97a38
		}
		int32_t v16 = g29;             // 0x97a38
		int32_t v17 = g28 + 112 * v16; // 0x97a48
		*(char *)(v17 + *(int32_t *)*(int32_t *)(g23 - 0x7598)) = 7;
		function_96e20(v16 - 1, g28, 7);
		int32_t v18 = g33 + g36; // 0x97a5c
		g27 = v18;
		int32_t *v19 = (int32_t *)(v18 + 36); // 0x97a64
		g25 = 1;
		*v19 = *v19 + 2;
		*(int32_t *)(g27 + 68) = g25;
		g34 = DoorSet(g26, g29, g28 - 1);
		*(int32_t *)g32 = g25;
		*(char *)(g27 + 64) = 2;
		int32_t result2 = function_97630(); // 0x97a90
		// branch -> 0x97be4
		// 0x97be4
		g10 = v1;
		return result2;
	}
	int32_t v20 = g23; // 0x97ab8
	if (*(int32_t *)v4 == 0) {
		// 0x97aa4
		g34 = 19;
		PlaySfxLoc(19);
		v10 = g28;
		v20 = g23;
		v12 = g29;
		// branch -> 0x97aac
	}
	int32_t v21 = *(int32_t *)(v20 - 0x767c); // 0x97ab4
	int32_t v22 = 224 * v12;                  // 0x97abc
	g30 = v22;
	int32_t v23 = 112 * v12 + v10; // 0x97ac4
	int32_t v24 = 2 * v10;         // 0x97acc
	g31 = v24;
	unsigned char v25 = *(char *)(*(int32_t *)*(int32_t *)(v20 - 0x768c) + v23); // 0x97ad0
	unsigned char v26 = *(char *)(*(int32_t *)*(int32_t *)(v20 - 0x7630) + v23); // 0x97ad8
	int16_t v27 = *(int16_t *)(*(int32_t *)v21 + v22 + v24);                     // 0x97ae8
	int32_t v28 = llvm_ctlz_i32(-(int32_t)v25, true);                            // 0x97af0
	int32_t v29 = llvm_ctlz_i32(-(int32_t)v27, true);                            // 0x97af8
	int32_t v30 = llvm_ctlz_i32(-(int32_t)v26, true);                            // 0x97b00
	int32_t v31 = __asm_rlwinm(v29, 27, 24, 31);                                 // r4
	int32_t v32 = __asm_rlwinm(v28, 27, 24, 31);                                 // 0x97b08
	if ((v31 & v32 & __asm_rlwinm(v30, 27, 24, 31)) == 0) {
		// 0x97bdc
		*(int32_t *)g32 = 2;
		result = v32;
		// branch -> 0x97be4
	} else {
		// 0x97b1c
		if (g25 == *(int32_t *)g35) {
			// 0x97b28
			if (g27 != 0) {
				// 0x97b30
				NetSendCmdParam1(1, 44, g26 % 0x10000);
				// branch -> 0x97b40
			}
		}
		// 0x97b40
		g25 = g33 + g36;
		*(int32_t *)g32 = 0;
		*(char *)(g25 + 64) = 3;
		ObjSetMicro(g29, g28, *(int32_t *)(g25 + 88));
		int32_t v33 = *(int32_t *)(g25 + 92); // 0x97b64
		int32_t v34;                          // 0x97bc8
		int32_t v35;                          // 0x97bbc
		int32_t *v36;                         // 0x97bc0
		if (v33 == 50) {
			int32_t v37 = *(int32_t *)(g23 - 0x757c); // 0x97b80
			int32_t v38 = g29;                        // 0x97b9c
			int32_t v39 = g28 - 1;                    // 0x97ba0
			if (*(int16_t *)(g31 + g30 + *(int32_t *)v37 - 2) == 396) {
				// 0x97b9c
				ObjSetMicro(v38, v39, 412);
				// branch -> 0x97bbc
			} else {
				// 0x97bb0
				ObjSetMicro(v38, v39, 50);
				// branch -> 0x97bbc
			}
			// 0x97bbc
			v35 = g33 + g36;
			v36 = (int32_t *)(v35 + 36);
			v34 = *v36 - 2;
			g34 = v34;
			*v36 = v34;
			*(int32_t *)(v35 + 68) = 0;
			int32_t result3 = function_97630(); // 0x97bd4
			// branch -> 0x97be4
			// 0x97be4
			g10 = v1;
			return result3;
		}
		// 0x97b70
		ObjSetMicro(g29, g28 - 1, v33);
		// branch -> 0x97bbc
		// 0x97bbc
		v35 = g33 + g36;
		v36 = (int32_t *)(v35 + 36);
		v34 = *v36 - 2;
		g34 = v34;
		*v36 = v34;
		*(int32_t *)(v35 + 68) = 0;
		result = function_97630();
		// branch -> 0x97be4
	}
	// 0x97be4
	g10 = v1;
	return result;
}

// Address range: 0x97bf8 - 0x97df8
int32_t function_97bf8(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x97bfc
	g28 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x97c04
	g36 = v2;
	int32_t v3 = 120 * a2; // 0x97c08
	g33 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7070); // 0x97c0c
	g26 = v4;
	g27 = a1;
	int32_t v5 = *(int32_t *)(g23 - 0x77ac); // 0x97c14
	g35 = v5;
	g29 = a3;
	int32_t v6 = v2 + v3;        // 0x97c1c
	int32_t v7 = v6 + 100;       // 0x97c28
	int32_t v8 = *(int32_t *)v7; // 0x97c28
	g32 = v7;
	int32_t result; // 0x97df4
	if (v8 == 2) {
		// 0x97c34
		if (*(int32_t *)v4 == 0) {
			// 0x97c40
			g34 = 19;
			g38 = *(int32_t *)(v6 + 8);
			result = PlaySfxLoc(19);
			// branch -> 0x97de4
		} else {
			result = a1;
		}
		// 0x97de4
		g10 = v1;
		return result;
	}
	int32_t v9 = v6 + 8;          // 0x97c60
	int32_t v10 = *(int32_t *)v9; // 0x97c60
	g38 = v10;
	int32_t v11 = v6 + 4;          // 0x97c68
	int32_t v12 = *(int32_t *)v11; // 0x97c68
	g24 = v11;
	g25 = v9;
	g30 = v10;
	g31 = v12;
	if (v8 == 0) {
		int32_t v13 = v4; // 0x97ca0
		if (a1 == *(int32_t *)v5) {
			// 0x97c88
			if (a3 != 0) {
				// 0x97c90
				NetSendCmdParam1(1, 43, a2 % 0x10000);
				v13 = g26;
				// branch -> 0x97ca0
			} else {
				v13 = v4;
			}
		}
		// 0x97ca0
		if (*(int32_t *)v13 == 0) {
			// 0x97cac
			g34 = 20;
			g38 = *(int32_t *)g25;
			PlaySfxLoc(20);
			// branch -> 0x97cbc
		}
		// 0x97cbc
		ObjSetMicro(g31, g30, 17);
		int32_t v14 = g33 + g36;              // 0x97ccc
		int32_t *v15 = (int32_t *)(v14 + 36); // 0x97cd0
		g34 = 1;
		*v15 = *v15 + 2;
		*(int32_t *)(v14 + 68) = g34;
		*(int32_t *)g32 = g34;
		*(char *)(v14 + 64) = (char)2;
		int32_t result2 = function_97630(); // 0x97cf0
		// branch -> 0x97de4
		// 0x97de4
		g10 = v1;
		return result2;
	}
	int32_t v16 = g23; // 0x97d18
	if (*(int32_t *)v4 == 0) {
		// 0x97d04
		g34 = 19;
		PlaySfxLoc(19);
		v10 = g30;
		v16 = g23;
		v12 = g31;
		// branch -> 0x97d0c
	}
	int32_t v17 = *(int32_t *)(v16 - 0x767c);                                    // 0x97d18
	int32_t v18 = 112 * v12 + v10;                                               // 0x97d24
	unsigned char v19 = *(char *)(*(int32_t *)*(int32_t *)(v16 - 0x768c) + v18); // 0x97d30
	unsigned char v20 = *(char *)(*(int32_t *)*(int32_t *)(v16 - 0x7630) + v18); // 0x97d38
	int16_t v21 = *(int16_t *)(*(int32_t *)v17 + 224 * v12 + 2 * v10);           // 0x97d48
	int32_t v22 = llvm_ctlz_i32(-(int32_t)v19, true);                            // 0x97d50
	int32_t v23 = llvm_ctlz_i32(-(int32_t)v21, true);                            // 0x97d58
	int32_t v24 = llvm_ctlz_i32(-(int32_t)v20, true);                            // 0x97d60
	int32_t v25 = __asm_rlwinm(v23, 27, 24, 31);                                 // 0x97d64
	int32_t v26 = __asm_rlwinm(v22, 27, 24, 31);                                 // 0x97d68
	if ((v25 & v26 & __asm_rlwinm(v24, 27, 24, 31)) == 0) {
		// 0x97ddc
		*(int32_t *)g32 = 2;
		result = v26;
		// branch -> 0x97de4
	} else {
		// 0x97d7c
		if (g27 == *(int32_t *)g35) {
			// 0x97d88
			if (g29 != 0) {
				// 0x97d90
				NetSendCmdParam1(1, 44, g28 % 0x10000);
				// branch -> 0x97da0
			}
		}
		// 0x97da0
		g28 = 0;
		g27 = g33 + g36;
		*(int32_t *)g32 = 0;
		*(char *)(g27 + 64) = 3;
		ObjSetMicro(g31, g30, 540);
		int32_t *v27 = (int32_t *)(g27 + 36); // 0x97dc4
		int32_t v28 = *v27;                   // 0x97dc4
		g34 = v28;
		*v27 = v28 - 2;
		*(int32_t *)(g27 + 68) = g28;
		result = function_97630();
		// branch -> 0x97de4
	}
	// 0x97de4
	g10 = v1;
	return result;
}

// Address range: 0x97df8 - 0x97ff8
int32_t function_97df8(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x97dfc
	g28 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x97e04
	g36 = v2;
	int32_t v3 = 120 * a2; // 0x97e08
	g33 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7070); // 0x97e0c
	g26 = v4;
	g27 = a1;
	int32_t v5 = *(int32_t *)(g23 - 0x77ac); // 0x97e14
	g35 = v5;
	g29 = a3;
	int32_t v6 = v2 + v3;        // 0x97e1c
	int32_t v7 = v6 + 100;       // 0x97e28
	int32_t v8 = *(int32_t *)v7; // 0x97e28
	g32 = v7;
	int32_t result; // 0x97ff4
	if (v8 == 2) {
		// 0x97e34
		if (*(int32_t *)v4 == 0) {
			// 0x97e40
			g34 = 19;
			g38 = *(int32_t *)(v6 + 8);
			result = PlaySfxLoc(19);
			// branch -> 0x97fe4
		} else {
			result = a1;
		}
		// 0x97fe4
		g10 = v1;
		return result;
	}
	int32_t v9 = v6 + 8;          // 0x97e60
	int32_t v10 = *(int32_t *)v9; // 0x97e60
	g38 = v10;
	int32_t v11 = v6 + 4;          // 0x97e68
	int32_t v12 = *(int32_t *)v11; // 0x97e68
	g24 = v11;
	g25 = v9;
	g30 = v10;
	g31 = v12;
	if (v8 == 0) {
		int32_t v13 = v4; // 0x97ea0
		if (a1 == *(int32_t *)v5) {
			// 0x97e88
			if (a3 != 0) {
				// 0x97e90
				NetSendCmdParam1(1, 43, a2 % 0x10000);
				v13 = g26;
				// branch -> 0x97ea0
			} else {
				v13 = v4;
			}
		}
		// 0x97ea0
		if (*(int32_t *)v13 == 0) {
			// 0x97eac
			g34 = 20;
			g38 = *(int32_t *)g25;
			PlaySfxLoc(20);
			// branch -> 0x97ebc
		}
		// 0x97ebc
		ObjSetMicro(g31, g30, 13);
		int32_t v14 = g33 + g36;              // 0x97ecc
		int32_t *v15 = (int32_t *)(v14 + 36); // 0x97ed0
		g34 = 1;
		*v15 = *v15 + 2;
		*(int32_t *)(v14 + 68) = g34;
		*(int32_t *)g32 = g34;
		*(char *)(v14 + 64) = (char)2;
		int32_t result2 = function_97630(); // 0x97ef0
		// branch -> 0x97fe4
		// 0x97fe4
		g10 = v1;
		return result2;
	}
	int32_t v16 = g23; // 0x97f18
	if (*(int32_t *)v4 == 0) {
		// 0x97f04
		g34 = 19;
		PlaySfxLoc(19);
		v10 = g30;
		v16 = g23;
		v12 = g31;
		// branch -> 0x97f0c
	}
	int32_t v17 = *(int32_t *)(v16 - 0x767c);                                    // 0x97f18
	int32_t v18 = 112 * v12 + v10;                                               // 0x97f24
	unsigned char v19 = *(char *)(*(int32_t *)*(int32_t *)(v16 - 0x768c) + v18); // 0x97f30
	unsigned char v20 = *(char *)(*(int32_t *)*(int32_t *)(v16 - 0x7630) + v18); // 0x97f38
	int16_t v21 = *(int16_t *)(*(int32_t *)v17 + 224 * v12 + 2 * v10);           // 0x97f48
	int32_t v22 = llvm_ctlz_i32(-(int32_t)v19, true);                            // 0x97f50
	int32_t v23 = llvm_ctlz_i32(-(int32_t)v21, true);                            // 0x97f58
	int32_t v24 = llvm_ctlz_i32(-(int32_t)v20, true);                            // 0x97f60
	int32_t v25 = __asm_rlwinm(v23, 27, 24, 31);                                 // 0x97f64
	int32_t v26 = __asm_rlwinm(v22, 27, 24, 31);                                 // 0x97f68
	if ((v25 & v26 & __asm_rlwinm(v24, 27, 24, 31)) == 0) {
		// 0x97fdc
		*(int32_t *)g32 = 2;
		result = v26;
		// branch -> 0x97fe4
	} else {
		// 0x97f7c
		if (g27 == *(int32_t *)g35) {
			// 0x97f88
			if (g29 != 0) {
				// 0x97f90
				NetSendCmdParam1(1, 44, g28 % 0x10000);
				// branch -> 0x97fa0
			}
		}
		// 0x97fa0
		g28 = 0;
		g27 = g33 + g36;
		*(int32_t *)g32 = 0;
		*(char *)(g27 + 64) = 3;
		ObjSetMicro(g31, g30, 538);
		int32_t *v27 = (int32_t *)(g27 + 36); // 0x97fc4
		int32_t v28 = *v27;                   // 0x97fc4
		g34 = v28;
		*v27 = v28 - 2;
		*(int32_t *)(g27 + 68) = g28;
		result = function_97630();
		// branch -> 0x97fe4
	}
	// 0x97fe4
	g10 = v1;
	return result;
}

// Address range: 0x97ff8 - 0x981f8
int32_t OperateL3RDoor(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x97ffc
	g28 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x98004
	g36 = v2;
	int32_t v3 = 120 * a2; // 0x98008
	g33 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7070); // 0x9800c
	g26 = v4;
	g27 = a1;
	int32_t v5 = *(int32_t *)(g23 - 0x77ac); // 0x98014
	g35 = v5;
	g29 = a3;
	int32_t v6 = v2 + v3;        // 0x9801c
	int32_t v7 = v6 + 100;       // 0x98028
	int32_t v8 = *(int32_t *)v7; // 0x98028
	g32 = v7;
	int32_t result; // 0x981f4
	if (v8 == 2) {
		// 0x98034
		if (*(int32_t *)v4 == 0) {
			// 0x98040
			g34 = 19;
			g38 = *(int32_t *)(v6 + 8);
			result = PlaySfxLoc(19);
			// branch -> 0x981e4
		} else {
			result = a1;
		}
		// 0x981e4
		g10 = v1;
		return result;
	}
	int32_t v9 = v6 + 8;          // 0x98060
	int32_t v10 = *(int32_t *)v9; // 0x98060
	g38 = v10;
	int32_t v11 = v6 + 4;          // 0x98068
	int32_t v12 = *(int32_t *)v11; // 0x98068
	g24 = v11;
	g25 = v9;
	g30 = v10;
	g31 = v12;
	if (v8 == 0) {
		int32_t v13 = v4; // 0x980a0
		if (a1 == *(int32_t *)v5) {
			// 0x98088
			if (a3 != 0) {
				// 0x98090
				NetSendCmdParam1(1, 43, a2 % 0x10000);
				v13 = g26;
				// branch -> 0x980a0
			} else {
				v13 = v4;
			}
		}
		// 0x980a0
		if (*(int32_t *)v13 == 0) {
			// 0x980ac
			g34 = 20;
			g38 = *(int32_t *)g25;
			PlaySfxLoc(20);
			// branch -> 0x980bc
		}
		// 0x980bc
		ObjSetMicro(g31, g30, 541);
		int32_t v14 = g33 + g36;              // 0x980cc
		int32_t *v15 = (int32_t *)(v14 + 36); // 0x980d0
		g34 = 1;
		*v15 = *v15 + 2;
		*(int32_t *)(v14 + 68) = g34;
		*(int32_t *)g32 = g34;
		*(char *)(v14 + 64) = (char)2;
		int32_t result2 = function_97630(); // 0x980f0
		// branch -> 0x981e4
		// 0x981e4
		g10 = v1;
		return result2;
	}
	int32_t v16 = g23; // 0x98118
	if (*(int32_t *)v4 == 0) {
		// 0x98104
		g34 = 19;
		PlaySfxLoc(19);
		v10 = g30;
		v16 = g23;
		v12 = g31;
		// branch -> 0x9810c
	}
	int32_t v17 = *(int32_t *)(v16 - 0x767c);                                    // 0x98118
	int32_t v18 = 112 * v12 + v10;                                               // 0x98124
	unsigned char v19 = *(char *)(*(int32_t *)*(int32_t *)(v16 - 0x768c) + v18); // 0x98130
	unsigned char v20 = *(char *)(*(int32_t *)*(int32_t *)(v16 - 0x7630) + v18); // 0x98138
	int16_t v21 = *(int16_t *)(*(int32_t *)v17 + 224 * v12 + 2 * v10);           // 0x98148
	int32_t v22 = llvm_ctlz_i32(-(int32_t)v19, true);                            // 0x98150
	int32_t v23 = llvm_ctlz_i32(-(int32_t)v21, true);                            // 0x98158
	int32_t v24 = llvm_ctlz_i32(-(int32_t)v20, true);                            // 0x98160
	int32_t v25 = __asm_rlwinm(v23, 27, 24, 31);                                 // 0x98164
	int32_t v26 = __asm_rlwinm(v22, 27, 24, 31);                                 // 0x98168
	if ((v25 & v26 & __asm_rlwinm(v24, 27, 24, 31)) == 0) {
		// 0x981dc
		*(int32_t *)g32 = 2;
		result = v26;
		// branch -> 0x981e4
	} else {
		// 0x9817c
		if (g27 == *(int32_t *)g35) {
			// 0x98188
			if (g29 != 0) {
				// 0x98190
				NetSendCmdParam1(1, 44, g28 % 0x10000);
				// branch -> 0x981a0
			}
		}
		// 0x981a0
		g28 = 0;
		g27 = g33 + g36;
		*(int32_t *)g32 = 0;
		*(char *)(g27 + 64) = 3;
		ObjSetMicro(g31, g30, 534);
		int32_t *v27 = (int32_t *)(g27 + 36); // 0x981c4
		int32_t v28 = *v27;                   // 0x981c4
		g34 = v28;
		*v27 = v28 - 2;
		*(int32_t *)(g27 + 68) = g28;
		result = function_97630();
		// branch -> 0x981e4
	}
	// 0x981e4
	g10 = v1;
	return result;
}

// Address range: 0x981f8 - 0x983f8
int32_t function_981f8(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x981fc
	g28 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x98204
	g36 = v2;
	int32_t v3 = 120 * a2; // 0x98208
	g33 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7070); // 0x9820c
	g26 = v4;
	g27 = a1;
	int32_t v5 = *(int32_t *)(g23 - 0x77ac); // 0x98214
	g35 = v5;
	g29 = a3;
	int32_t v6 = v2 + v3;        // 0x9821c
	int32_t v7 = v6 + 100;       // 0x98228
	int32_t v8 = *(int32_t *)v7; // 0x98228
	g32 = v7;
	int32_t result; // 0x983f4
	if (v8 == 2) {
		// 0x98234
		if (*(int32_t *)v4 == 0) {
			// 0x98240
			g34 = 19;
			g38 = *(int32_t *)(v6 + 8);
			result = PlaySfxLoc(19);
			// branch -> 0x983e4
		} else {
			result = a1;
		}
		// 0x983e4
		g10 = v1;
		return result;
	}
	int32_t v9 = v6 + 8;          // 0x98260
	int32_t v10 = *(int32_t *)v9; // 0x98260
	g38 = v10;
	int32_t v11 = v6 + 4;          // 0x98268
	int32_t v12 = *(int32_t *)v11; // 0x98268
	g24 = v11;
	g25 = v9;
	g30 = v10;
	g31 = v12;
	if (v8 == 0) {
		int32_t v13 = v4; // 0x982a0
		if (a1 == *(int32_t *)v5) {
			// 0x98288
			if (a3 != 0) {
				// 0x98290
				NetSendCmdParam1(1, 43, a2 % 0x10000);
				v13 = g26;
				// branch -> 0x982a0
			} else {
				v13 = v4;
			}
		}
		// 0x982a0
		if (*(int32_t *)v13 == 0) {
			// 0x982ac
			g34 = 20;
			g38 = *(int32_t *)g25;
			PlaySfxLoc(20);
			// branch -> 0x982bc
		}
		// 0x982bc
		ObjSetMicro(g31, g30, 538);
		int32_t v14 = g33 + g36;              // 0x982cc
		int32_t *v15 = (int32_t *)(v14 + 36); // 0x982d0
		g34 = 1;
		*v15 = *v15 + 2;
		*(int32_t *)(v14 + 68) = g34;
		*(int32_t *)g32 = g34;
		*(char *)(v14 + 64) = (char)2;
		int32_t result2 = function_97630(); // 0x982f0
		// branch -> 0x983e4
		// 0x983e4
		g10 = v1;
		return result2;
	}
	int32_t v16 = g23; // 0x98318
	if (*(int32_t *)v4 == 0) {
		// 0x98304
		g34 = 19;
		PlaySfxLoc(19);
		v10 = g30;
		v16 = g23;
		v12 = g31;
		// branch -> 0x9830c
	}
	int32_t v17 = *(int32_t *)(v16 - 0x767c);                                    // 0x98318
	int32_t v18 = 112 * v12 + v10;                                               // 0x98324
	unsigned char v19 = *(char *)(*(int32_t *)*(int32_t *)(v16 - 0x768c) + v18); // 0x98330
	unsigned char v20 = *(char *)(*(int32_t *)*(int32_t *)(v16 - 0x7630) + v18); // 0x98338
	int16_t v21 = *(int16_t *)(*(int32_t *)v17 + 224 * v12 + 2 * v10);           // 0x98348
	int32_t v22 = llvm_ctlz_i32(-(int32_t)v19, true);                            // 0x98350
	int32_t v23 = llvm_ctlz_i32(-(int32_t)v21, true);                            // 0x98358
	int32_t v24 = llvm_ctlz_i32(-(int32_t)v20, true);                            // 0x98360
	int32_t v25 = __asm_rlwinm(v23, 27, 24, 31);                                 // 0x98364
	int32_t v26 = __asm_rlwinm(v22, 27, 24, 31);                                 // 0x98368
	if ((v25 & v26 & __asm_rlwinm(v24, 27, 24, 31)) == 0) {
		// 0x983dc
		*(int32_t *)g32 = 2;
		result = v26;
		// branch -> 0x983e4
	} else {
		// 0x9837c
		if (g27 == *(int32_t *)g35) {
			// 0x98388
			if (g29 != 0) {
				// 0x98390
				NetSendCmdParam1(1, 44, g28 % 0x10000);
				// branch -> 0x983a0
			}
		}
		// 0x983a0
		g28 = 0;
		g27 = g33 + g36;
		*(int32_t *)g32 = 0;
		*(char *)(g27 + 64) = 3;
		ObjSetMicro(g31, g30, 531);
		int32_t *v27 = (int32_t *)(g27 + 36); // 0x983c4
		int32_t v28 = *v27;                   // 0x983c4
		g34 = v28;
		*v27 = v28 - 2;
		*(int32_t *)(g27 + 68) = g28;
		result = function_97630();
		// branch -> 0x983e4
	}
	// 0x983e4
	g10 = v1;
	return result;
}

// Address range: 0x983f8 - 0x986b4
int32_t MonstCheckDoors(int32_t a1)
{
	int32_t v1 = g10; // 0x983fc
	g33 = *(int32_t *)(g23 - 0x77ac);
	int32_t v2 = *(int32_t *)(g23 - 0x7194); // 0x9840c
	g35 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7688); // 0x98410
	g36 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7754) + 232 * a1; // 0x98420
	int32_t v5 = *(int32_t *)(v4 + 32);                 // 0x98424
	g31 = v5;
	int32_t v6 = *(int32_t *)(v4 + 36); // 0x98430
	g30 = v6;
	int32_t result = v6 + *(int32_t *)*(int32_t *)(g23 - 0x7684) + 112 * v5; // 0x98438
	if (*(char *)(result - 113) == 0) {
		// 0x98448
		if (*(char *)(result - 1) == 0) {
			// 0x98454
			if (*(char *)(result + 111) == 0) {
				// 0x98460
				if (*(char *)(result - 112) == 0) {
					// 0x9846c
					if (*(char *)(result + 112) == 0) {
						// 0x98478
						if (*(char *)(result - 111) == 0) {
							// 0x98484
							if (*(char *)(result + 1) == 0) {
								// 0x98490
								if (*(char *)(result + 113) == 0) {
									// 0x986a0
									g10 = v1;
									return result;
								}
							}
						}
					}
				}
			}
		}
	}
	int32_t v7 = *(int32_t *)(g23 - 0x7190); // 0x9849c
	g32 = v7;
	g28 = 0;
	if (*(int32_t *)v2 > 0) {
		while (true) {
			int32_t v8 = *(int32_t *)v7;  // 0x984a8
			int32_t v9 = 120 * v8 + v3;   // 0x984b0
			int32_t v10 = *(int32_t *)v9; // 0x984b0
			g27 = v8;
			int32_t v11; // 0x986b018
			if (v10 != 1) {
				// 0x984c0
				if (v10 != 2) {
					v11 = v8;
				lab_0x98554_5:;
					int32_t v12 = g36 + 120 * g27; // 0x98558
					g29 = v12;
					int32_t v13 = *(int32_t *)v12; // 0x9855c
					int32_t v14;                   // 0x986b016
					if (v13 != 42) {
						// 0x98568
						if (v13 != 43) {
							v14 = v11;
						lab_0x985f4_5:;
							int32_t v15 = g29;             // 0x985f4
							int32_t v16 = *(int32_t *)v15; // 0x985f4
							int32_t result2;               // 0x986b014
							if (v16 != 74) {
								// 0x98600
								if (v16 != 75) {
									result2 = v14;
								lab_0x9868c_5:;
									int32_t v17 = g32 + 4; // 0x9868c
									g32 = v17;
									int32_t v18 = g28 + 1; // 0x98690
									g28 = v18;
									if (v18 >= *(int32_t *)g35) {
										// 0x986a0
										g10 = v1;
										return result2;
									}
									// 0x9868c
									v3 = g36;
									v7 = v17;
									// branch -> 0x984a8
									continue;
								}
							}
							// 0x98608
							if (*(int32_t *)(v15 + 100) != 0) {
								result2 = v14;
								goto lab_0x9868c_5;
							}
							// 0x98614
							g34 = *(int32_t *)(v15 + 4) - g31;
							g25 = abs();
							g34 = *(int32_t *)(g29 + 8) - g30;
							int32_t v19 = abs(); // 0x9862c
							int32_t v20 = g25;   // 0x98630
							g26 = v19;
							int32_t v21 = v19; // 0x986b015
							int32_t v22 = v20; // 0x98660
							if (v20 == 1) {
								// 0x9863c
								if (v19 <= 1) {
									// 0x98644
									if (*(int32_t *)g29 == 75) {
										// 0x98650
										v21 = OperateL3RDoor(*(int32_t *)g33, g27, 1);
										v22 = g25;
										// branch -> 0x98660
									} else {
										v21 = v19;
										v22 = 1;
									}
								} else {
									v21 = v19;
									v22 = 1;
								}
							}
							// 0x98660
							if (v22 > 1) {
								result2 = v21;
								goto lab_0x9868c_5;
							}
							// 0x98668
							if (g26 != 1) {
								result2 = v21;
								goto lab_0x9868c_5;
							}
							// 0x98670
							if (*(int32_t *)g29 != 74) {
								result2 = v21;
								goto lab_0x9868c_5;
							}
							// 0x9867c
							result2 = function_981f8(*(int32_t *)g33, g27, 1);
							// branch -> 0x9868c
							goto lab_0x9868c_5;
						}
					}
					// 0x98570
					if (*(int32_t *)(v12 + 100) != 0) {
						v14 = v11;
						goto lab_0x985f4_5;
					}
					// 0x9857c
					g34 = *(int32_t *)(v12 + 4) - g31;
					g26 = abs();
					g34 = *(int32_t *)(g29 + 8) - g30;
					int32_t v23 = abs(); // 0x98594
					int32_t v24 = g26;   // 0x98598
					g25 = v23;
					int32_t v25 = v23; // 0x986b017
					int32_t v26 = v24; // 0x985c8
					if (v24 == 1) {
						// 0x985a4
						if (v23 <= 1) {
							// 0x985ac
							if (*(int32_t *)g29 == 42) {
								// 0x985b8
								v25 = function_97df8(*(int32_t *)g33, g27, 1);
								v26 = g26;
								// branch -> 0x985c8
							} else {
								v25 = v23;
								v26 = 1;
							}
						} else {
							v25 = v23;
							v26 = 1;
						}
					}
					// 0x985c8
					if (v26 > 1) {
						v14 = v25;
						goto lab_0x985f4_5;
					}
					// 0x985d0
					if (g25 != 1) {
						v14 = v25;
						goto lab_0x985f4_5;
					}
					// 0x985d8
					if (*(int32_t *)g29 != 43) {
						v14 = v25;
						goto lab_0x985f4_5;
					}
					// 0x985e4
					v14 = function_97bf8(*(int32_t *)g33, g27, 1);
					// branch -> 0x985f4
					goto lab_0x985f4_5;
				}
			}
			// 0x984c8
			g29 = v9;
			if (*(int32_t *)(v9 + 100) != 0) {
				v11 = v8;
				goto lab_0x98554_5;
			}
			// 0x984dc
			g34 = *(int32_t *)(v9 + 4) - g31;
			g26 = abs();
			g34 = *(int32_t *)(g29 + 8) - g30;
			int32_t v27 = abs(); // 0x984f4
			int32_t v28 = g26;   // 0x984f8
			g25 = v27;
			int32_t v29 = v27; // 0x986b019
			int32_t v30 = v28; // 0x98528
			if (v28 == 1) {
				// 0x98504
				if (v27 <= 1) {
					// 0x9850c
					if (*(int32_t *)g29 == 1) {
						// 0x98518
						v29 = function_97940(*(int32_t *)g33, g27, 1);
						v30 = g26;
						// branch -> 0x98528
					} else {
						v29 = v27;
						v30 = 1;
					}
				} else {
					v29 = v27;
					v30 = 1;
				}
			}
			// 0x98528
			if (v30 > 1) {
				v11 = v29;
				goto lab_0x98554_5;
			}
			// 0x98530
			if (g25 != 1) {
				v11 = v29;
				goto lab_0x98554_5;
			}
			// 0x98538
			if (*(int32_t *)g29 != 2) {
				v11 = v29;
				goto lab_0x98554_5;
			}
			// 0x98544
			v11 = OperateL1RDoor(*(int32_t *)g33, g27, 1);
			// branch -> 0x98554
			goto lab_0x98554_5;
		}
	}
	// 0x986a0
	g10 = v1;
	return result;
}

// Address range: 0x986b4 - 0x98800
int32_t function_986b4(int32_t result, int32_t a2, int32_t a3, int32_t a4)
{
	g33 = a2;
	int32_t v1 = g10; // 0x986bc
	g25 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7794); // 0x986c8
	g31 = v2;
	int32_t v3 = result; // 0x986cc
	g32 = v3;
	g35 = a3;
	g36 = a4;
	int32_t v4 = *(int32_t *)(g23 - 0x7540) + a2; // 0x986d8
	g28 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x77cc) + a2; // 0x986e8
	g27 = v5;
	int32_t v6;  // 0x98798
	int32_t v7;  // 0x98758
	int32_t v8;  // 0x98760
	int32_t v9;  // 0x98768
	int32_t v10; // 0x9876c
	int32_t v11; // 0x987ac
	int32_t v12; // 0x987b4
	int32_t v13; // 0x987bc
	int32_t v14; // 0x987c0
	if (a4 >= a2) {
		int32_t v15 = a4; // 0x9873c23
		int32_t v16 = a3; // 0x987282
		while (true) {
			// 0x986f0
			g26 = v3;
			int32_t v17 = 40 * v3;  // 0x986f4
			int32_t v18 = v17 + v4; // 0x986f8
			g30 = v18;
			g29 = v17 + v5;
			int32_t v19 = v15; // 0x9873c
			int32_t v20 = a2;  // 0x98738
			int32_t v21 = v5;  // 0x98734
			int32_t v22 = v4;  // 0x98730
			int32_t v23 = v16; // 0x98728214
			int32_t v24;       // 0x98730
			int32_t v25;       // 0x98734
			int32_t v26;       // 0x98738
			if (v3 <= v16) {
				int32_t v27 = a2; // 0x9870c
				int32_t v28 = v3; // 0x98708
				while (true) {
					// 0x98704
					result = ObjSetMini(v28, v27, (int32_t) * (char *)v18);
					int32_t v29 = g30; // 0x98714
					g30 = v29 + 40;
					g26++;
					*(char *)g29 = *(char *)v29;
					g29 += 40;
					int32_t v30 = g26; // 0x98728
					int32_t v31 = g35; // 0x98728
					if (v30 > v31) {
						// 0x98728
						v19 = g36;
						v20 = g25;
						v21 = g27;
						v22 = g28;
						v23 = v31;
						// branch -> 0x98730
						// 0x98730
						v24 = v22 + 1;
						g28 = v24;
						v25 = v21 + 1;
						g27 = v25;
						v26 = v20 + 1;
						g25 = v26;
						if (v26 <= v19) {
						lab_0x98730:
							// 0x98730
							v15 = v19;
							a2 = v26;
							v16 = v23;
							v5 = v25;
							v4 = v24;
							v3 = g32;
							// branch -> 0x986f0
							break;
						}
						// 0x9873c
						v2 = g31;
						// branch -> 0x98744
						// 0x98744
						v6 = v2;
						if (*(char *)v2 == 1) {
							// 0x98750
							v7 = 2 * g32 + 16;
							v8 = 2 * g33 + 16;
							v9 = 2 * v23 + 17;
							v10 = 2 * v19 + 17;
							function_96fac(v7, v8, v9, v10);
							result = AddL1Objs(v7, v8, v9, v10);
							v6 = g31;
							// branch -> 0x98798
						}
						// 0x98798
						if (*(char *)v6 != 2) {
							// 0x98798
							// branch -> 0x987ec
							// 0x987ec
							g10 = v1;
							return result;
						}
						// 0x987a4
						v11 = 2 * g32 + 16;
						v12 = 2 * g33 + 16;
						v13 = 2 * g35 + 17;
						v14 = 2 * g36 + 17;
						function_97200(v11, v12, v13, v14);
						int32_t result2 = AddL2Objs(v11, v12, v13, v14); // 0x987e8
						// branch -> 0x987ec
						// 0x987ec
						g10 = v1;
						return result2;
					}
					// 0x98704
					v27 = g25;
					v28 = v30;
					v18 = g30;
					// branch -> 0x98704
				}
			}
			// 0x98730
			v24 = v22 + 1;
			g28 = v24;
			v25 = v21 + 1;
			g27 = v25;
			v26 = v20 + 1;
			g25 = v26;
			if (v26 <= v19) {
				goto lab_0x98730;
			}
			// 0x9873c
			// branch -> 0x98744
		}
	}
	// 0x98744
	v6 = v2;
	if (*(char *)v2 == 1) {
		// 0x98750
		v7 = 2 * g32 + 16;
		v8 = 2 * g33 + 16;
		v9 = 2 * a3 + 17;
		v10 = 2 * a4 + 17;
		function_96fac(v7, v8, v9, v10);
		result = AddL1Objs(v7, v8, v9, v10);
		v6 = g31;
		// branch -> 0x98798
	}
	// 0x98798
	int32_t result3; // 0x987fc
	if (*(char *)v6 == 2) {
		// 0x987a4
		v11 = 2 * g32 + 16;
		v12 = 2 * g33 + 16;
		v13 = 2 * g35 + 17;
		v14 = 2 * g36 + 17;
		function_97200(v11, v12, v13, v14);
		result3 = AddL2Objs(v11, v12, v13, v14);
		// branch -> 0x987ec
	} else {
		// 0x98798
		result3 = result;
		// branch -> 0x987ec
	}
	// 0x987ec
	g10 = v1;
	return result3;
}

// Address range: 0x98800 - 0x98904
int32_t function_98800(int32_t result, int32_t a2, int32_t a3, int32_t a4)
{
	g33 = a2;
	int32_t v1 = g10; // 0x98808
	g25 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7794); // 0x98814
	g31 = v2;
	int32_t v3 = result; // 0x98818
	g32 = v3;
	g35 = a3;
	g36 = a4;
	int32_t v4 = *(int32_t *)(g23 - 0x7540) + a2; // 0x98824
	g28 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x77cc) + a2; // 0x98834
	g27 = v5;
	int32_t v6; // 0x988c0
	if (a4 >= a2) {
		int32_t v7 = a4; // 0x9888823
		int32_t v8 = a3; // 0x988742
		while (true) {
			// 0x9883c
			g26 = v3;
			int32_t v9 = 40 * v3;  // 0x98840
			int32_t v10 = v9 + v4; // 0x98844
			g30 = v10;
			g29 = v9 + v5;
			int32_t v11 = v7; // 0x98888
			int32_t v12 = a2; // 0x98884
			int32_t v13 = v5; // 0x98880
			int32_t v14 = v4; // 0x9887c
			int32_t v15 = v8; // 0x98874214
			int32_t v16;      // 0x9887c
			int32_t v17;      // 0x98880
			int32_t v18;      // 0x98884
			if (v3 <= v8) {
				int32_t v19 = a2; // 0x98858
				int32_t v20 = v3; // 0x98854
				while (true) {
					// 0x98850
					result = ObjSetMini(v20, v19, (int32_t) * (char *)v10);
					int32_t v21 = g30; // 0x98860
					g30 = v21 + 40;
					g26++;
					*(char *)g29 = *(char *)v21;
					g29 += 40;
					int32_t v22 = g26; // 0x98874
					int32_t v23 = g35; // 0x98874
					if (v22 > v23) {
						// 0x98874
						v11 = g36;
						v12 = g25;
						v13 = g27;
						v14 = g28;
						v15 = v23;
						// branch -> 0x9887c
						// 0x9887c
						v16 = v14 + 1;
						g28 = v16;
						v17 = v13 + 1;
						g27 = v17;
						v18 = v12 + 1;
						g25 = v18;
						if (v18 <= v11) {
						lab_0x9887c:
							// 0x9887c
							v7 = v11;
							a2 = v18;
							v8 = v15;
							v5 = v17;
							v4 = v16;
							v3 = g32;
							// branch -> 0x9883c
							break;
						}
						// 0x98888
						v2 = g31;
						// branch -> 0x98890
						// 0x98890
						v6 = v2;
						if (*(char *)v2 == 1) {
							// 0x9889c
							result = function_96fac(2 * g32 + 16, 2 * g33 + 16, 2 * v15 + 17, 2 * v11 + 17);
							v6 = g31;
							// branch -> 0x988c0
						}
						// 0x988c0
						if (*(char *)v6 != 2) {
							// 0x988c0
							// branch -> 0x988f0
							// 0x988f0
							g10 = v1;
							return result;
						}
						// 0x988cc
						// branch -> 0x988f0
						// 0x988f0
						g10 = v1;
						return function_97200(2 * g32 + 16, 2 * g33 + 16, 2 * g35 + 17, 2 * g36 + 17);
					}
					// 0x98850
					v19 = g25;
					v20 = v22;
					v10 = g30;
					// branch -> 0x98850
				}
			}
			// 0x9887c
			v16 = v14 + 1;
			g28 = v16;
			v17 = v13 + 1;
			g27 = v17;
			v18 = v12 + 1;
			g25 = v18;
			if (v18 <= v11) {
				goto lab_0x9887c;
			}
			// 0x98888
			// branch -> 0x98890
		}
	}
	// 0x98890
	v6 = v2;
	if (*(char *)v2 == 1) {
		// 0x9889c
		result = function_96fac(2 * g32 + 16, 2 * g33 + 16, 2 * a3 + 17, 2 * a4 + 17);
		v6 = g31;
		// branch -> 0x988c0
	}
	// 0x988c0
	int32_t result2; // 0x98900
	if (*(char *)v6 == 2) {
		// 0x988cc
		result2 = function_97200(2 * g32 + 16, 2 * g33 + 16, 2 * g35 + 17, 2 * g36 + 17);
		// branch -> 0x988f0
	} else {
		// 0x988c0
		result2 = result;
		// branch -> 0x988f0
	}
	// 0x988f0
	g10 = v1;
	return result2;
}

// Address range: 0x98904 - 0x989cc
int32_t OperateObject(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x98904
	g29 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x98910
	g33 = v1;
	g30 = a2;
	int32_t v2 = 120 * a2; // 0x98918
	g32 = v2;
	g31 = a3;
	int32_t v3 = v2 + v1;                                  // 0x98924
	int32_t v4 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0x98934
	g34 = *(int32_t *)(v3 + 4) - *(int32_t *)(v4 + 56);
	int32_t v5 = abs(); // r30
	g34 = *(int32_t *)(v3 + 8) - *(int32_t *)(v4 + 60);
	int32_t v6 = abs(); // 0x98958
	g36 = v6;
	int32_t result = v6; // 0x989c83
	int32_t result2;     // 0x989c8
	if (v5 != 1) {
		// 0x9898c
		if (v5 > 1) {
			// 0x989b8
			return result;
		}
		// 0x98994
		result2 = result;
		if (g36 == 1) {
			// 0x9899c
			if (*(int32_t *)(g32 + g33) == 2) {
				// 0x989a8
				result2 = OperateL1RDoor(g29, g30, g31);
				// branch -> 0x989b8
			} else {
				result2 = result;
			}
		}
		// 0x989b8
		return result2;
	}
	// 0x98968
	int32_t v7; // 0x9898c
	if (v6 <= 1) {
		// 0x98970
		if (*(int32_t *)(g32 + g33) == 1) {
			// 0x9897c
			result = function_97940(g29, g30, g31);
			v7 = g35;
			// branch -> 0x9898c
		} else {
			result = v6;
			v7 = 1;
		}
	} else {
		result = v6;
		v7 = 1;
	}
	// 0x9898c
	if (v7 > 1) {
		// 0x989b8
		return result;
	}
	// 0x98994
	result2 = result;
	if (g36 == 1) {
		// 0x9899c
		if (*(int32_t *)(g32 + g33) == 2) {
			// 0x989a8
			result2 = OperateL1RDoor(g29, g30, g31);
			// branch -> 0x989b8
		} else {
			result2 = result;
		}
	}
	// 0x989b8
	return result2;
}

// Address range: 0x989cc - 0x98afc
int32_t function_989cc(int32_t result, int32_t a2)
{
	// 0x989cc
	g33 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x989d8
	g36 = v1;
	int32_t v2 = 120 * a2; // 0x989dc
	g35 = v2;
	g32 = result;
	int32_t v3 = v1 + v2; // 0x989e4
	int32_t v4 = v3 + 64; // 0x989f0
	g31 = v4;
	if (*(char *)v4 == 0) {
		// 0x98ae8
		return result;
	}
	if (*(int32_t *)*(int32_t *)(g23 - 0x7070) == 0) {
		// 0x98a0c
		g34 = 62;
		g38 = *(int32_t *)(v3 + 8);
		PlaySfxLoc(62);
		v4 = g31;
		v2 = g35;
		v1 = g36;
		// branch -> 0x98a20
	}
	// 0x98a20
	*(char *)v4 = 0;
	int32_t v5 = 1;                          // r6
	int32_t *v6 = (int32_t *)(v1 + v2 + 36); // 0x98a34
	*v6 = *v6 + 1;
	int32_t result2; // 0x98af8
	int32_t v7;      // 0x98ab0
	int32_t v8;      // 0x98abc
	int32_t v9;      // 0x98ac0
	int32_t v10;     // 0x98ac8
	if (*(char *)*(int32_t *)(g23 - 0x77e4) != 16) {
		// 0x98aa8
		if (v5 != 0) {
			// 0x98ab0
			v7 = g35 + g36;
			v8 = *(int32_t *)(v7 + 96);
			v9 = *(int32_t *)(v7 + 100);
			function_986b4(*(int32_t *)(v7 + 88), *(int32_t *)(v7 + 92), v8, v9);
			// branch -> 0x98ac8
		}
		// 0x98ac8
		v10 = *(int32_t *)(g23 - 0x77ac);
		result2 = v10;
		if (g32 == *(int32_t *)v10) {
			// 0x98ad8
			result2 = NetSendCmdParam1(0, 45, g33 % 0x10000);
			// branch -> 0x98ae8
		}
		// 0x98ae8
		return result2;
	}
	int32_t v11 = *(int32_t *)*(int32_t *)(g23 - 0x7194); // 0x98a58
	int32_t v12 = g36;                                    // 0x98a5c
	if (v11 < 1) {
		// 0x98aa8
		if (v5 != 0) {
			// 0x98ab0
			v7 = g35 + g36;
			v8 = *(int32_t *)(v7 + 96);
			v9 = *(int32_t *)(v7 + 100);
			function_986b4(*(int32_t *)(v7 + 88), *(int32_t *)(v7 + 92), v8, v9);
			// branch -> 0x98ac8
		}
		// 0x98ac8
		v10 = *(int32_t *)(g23 - 0x77ac);
		result2 = v10;
		if (g32 == *(int32_t *)v10) {
			// 0x98ad8
			result2 = NetSendCmdParam1(0, 45, g33 % 0x10000);
			// branch -> 0x98ae8
		}
		// 0x98ae8
		return result2;
	}
	int32_t v13 = *(int32_t *)(g23 - 0x7190); // 0x98aa0
	while (true) {
		int32_t v14 = 120 * *(int32_t *)v13 + v12; // 0x98a74
		if (*(int32_t *)v14 == 28) {
			// 0x98a80
			if (*(int32_t *)(v12 + g35 + 116) == *(int32_t *)(v14 + 116)) {
				// 0x98a90
				if (*(char *)(v14 + 64) != 0) {
					// 0x98a9c
					v5 = 0;
					// branch -> 0x98aa0
				}
			}
		}
		int32_t v15 = v11 - 1; // 0x98aa4
		if (v15 == 0) {
			// break -> 0x98aa8
			break;
		}
		v11 = v15;
		v13 += 4;
		// continue -> 0x98a6c
	}
	// 0x98aa8
	if (v5 != 0) {
		// 0x98ab0
		v7 = g35 + g36;
		v8 = *(int32_t *)(v7 + 96);
		v9 = *(int32_t *)(v7 + 100);
		function_986b4(*(int32_t *)(v7 + 88), *(int32_t *)(v7 + 92), v8, v9);
		// branch -> 0x98ac8
	}
	// 0x98ac8
	v10 = *(int32_t *)(g23 - 0x77ac);
	result2 = v10;
	if (g32 == *(int32_t *)v10) {
		// 0x98ad8
		result2 = NetSendCmdParam1(0, 45, g33 % 0x10000);
		// branch -> 0x98ae8
	}
	// 0x98ae8
	return result2;
}

// Address range: 0x98afc - 0x98dbc
int32_t function_98afc(int32_t result, int32_t a2)
{
	int32_t v1 = 120 * a2; // 0x98b04
	g24 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x98b08
	g35 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77e0); // 0x98b0c
	g28 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x77d8); // 0x98b10
	g29 = v4;
	g30 = *(int32_t *)(g23 - 0x77ac);
	int32_t v5 = result; // 0x98b1c
	g19 = v5;
	int32_t v6 = *(int32_t *)(g23 - 0x77a8); // 0x98b20
	g31 = v6;
	int32_t v7 = *(int32_t *)(g23 - 0x7190); // 0x98b24
	g32 = v7;
	int32_t v8 = *(int32_t *)(g23 - 0x7194); // 0x98b28
	g33 = v8;
	g36 = *(int32_t *)(g23 - 0x7684);
	int32_t v9 = v2 + v1 + 64; // 0x98b38
	g25 = v9;
	if (*(char *)v9 == 0) {
		// 0x98da8
		return result;
	}
	int32_t v10 = v9; // 0x98c6c
	int32_t v11 = v1; // 0x98c68
	int32_t v12 = v2; // 0x98c68
	int32_t v13;      // 0x98c7c
	int32_t v14;      // 0x98c9c
	int32_t v15;      // 0x98cb4
	int32_t v16;      // 0x98cd0
	int32_t v17;      // 0x98d4c
	int32_t v18;      // 0x98d84
	int32_t v19;      // 0x98ca0
	int32_t v20;      // 0x98d44
	int32_t v21;      // 0x98d94
	int32_t v22;      // 0x98d98
	int32_t *v23;     // 0x98c70
	int32_t *v24;     // 0x98ca8
	int32_t v25;      // 0x98d08
	int32_t v26;      // 0x98d10
	int32_t v27;      // 0x98d20
	int32_t v28;      // 0x98d64
	int32_t v29;      // 0x98c70
	char *v30;        // 0x98cc4
	int32_t v31;      // 0x98d24
	int32_t v32;      // 0x98d34
	int32_t v33;      // 0x98d38
	int32_t v34;      // 0x98d40
	int32_t v35;      // 0x98d6c
	int32_t v36;      // 0x98d70
	int32_t v37;      // 0x98d74
	if (*(char *)v4 != 0) {
		// 0x98b50
		if (*(char *)v3 == 5) {
			// 0x98b5c
			g27 = v7;
			g26 = v6 + 0x55ec * v5;
			int32_t v38 = 0; // r6
			g20 = 0;
			if (*(int32_t *)v8 > 0) {
				int32_t v39 = v2; // 0x98b90
				while (true) {
					int32_t v40 = *(int32_t *)v7; // 0x98b78
					int32_t v41 = v40;            // r4
					int32_t v42 = 120 * v40;      // 0x98b7c
					result = v42;
					int32_t v43 = *(int32_t *)(v42 + v39); // 0x98b80
					int32_t v44 = v43;                     // r5
					int32_t v45 = v43;                     // 0x98bb4
					int32_t v46 = 0;
					if (v43 == 85) {
						int32_t v47 = v39 + 108 + v42; // 0x98b90
						result = v47;
						int32_t *v48 = (int32_t *)v47; // 0x98b94
						if (*v48 == 1) {
							// 0x98ba0
							*v48 = 4;
							g22 = 27;
							g21 = 29;
							v45 = v44;
							v46 = 1;
							// branch -> 0x98bb4
						} else {
							v45 = 85;
							v46 = 0;
						}
					}
					// 0x98bb4
					int32_t v49; // 0x98bf8
					int32_t v50; // 0x98c00
					if (v45 == 85) {
						int32_t v51 = 120 * v41 + 108 + g35; // 0x98bc4
						result = v51;
						int32_t *v52 = (int32_t *)v51; // 0x98bc8
						if (*v52 == 2) {
							// 0x98be8
							*v52 = 4;
							g22 = 43;
							g21 = 29;
							v50 = 29;
							v49 = 43;
							// branch -> 0x98bf0
						lab_0x98bf0:
							// 0x98bf0
							g13 = g19;
							int32_t v53 = 120 * (int32_t) * (char *)(*(int32_t *)g36 + 3956) - 16; // 0x98c10
							int32_t *v54 = (int32_t *)(g35 + v53);                                 // 0x98c14
							*v54 = *v54 + 1;
							int32_t v55 = 0;                       // 0x98c28
							int32_t v56 = g26;                     // 0x98c30
							int32_t v57 = *(int32_t *)(v56 + 56);  // 0x98c30
							int32_t v58 = *(int32_t *)(v56 + 60);  // 0x98c34
							int32_t v59 = *(int32_t *)(v56 + 112); // 0x98c38
							result = AddMissile(v57, v58, v49, v50, v59, 3, 0, v55, v55);
							v38 = 1;
							// branch -> 0x98c48
						lab_0x98c48:;
							int32_t v60 = g27 + 4; // 0x98c48
							g27 = v60;
							int32_t v61 = g20 + 1; // 0x98c4c
							g20 = v61;
							if (v61 >= *(int32_t *)g33) {
								// 0x98c50
								// branch -> 0x98c5c
								// 0x98c5c
								if (v38 == 0) {
									// 0x98da8
									return result;
								}
								// 0x98c5c
								// branch -> 0x98c64
								// 0x98c64
								*(char *)g25 = 0;
								v23 = (int32_t *)(g35 + g24 + 36);
								v29 = *v23;
								result = v29;
								*v23 = v29 + 1;
								v13 = g29;
								v17 = v13;
								if (*(char *)v13 != 0) {
									// 0x98c88
									if (*(char *)g28 == 2) {
										// 0x98c94
										v14 = g31;
										v19 = 0x55ec * *(int32_t *)g30;
										v24 = (int32_t *)(v14 + v19 + 264);
										*v24 = *v24 | 0x1000;
										v15 = v14 + 206;
										if (*(char *)(0x55ec * g19 + v15) <= 14) {
											// 0x98cc4
											v30 = (char *)(v19 + v15);
											*v30 = (char)((int32_t)*v30 + 1);
											// branch -> 0x98cd0
										}
										// 0x98cd0
										v16 = g23;
										*(char *)(*(int32_t *)(v16 - 0x7604) + 338) = 3;
										if (*(int32_t *)*(int32_t *)(v16 - 0x7070) == 0) {
											// 0x98cec
											g34 = 12;
											g38 = *(int32_t *)(g24 + g35 + 8);
											PlaySfxLoc(12);
											// branch -> 0x98d00
										}
										// 0x98d00
										InitDiabloMsg(43);
										v25 = *(int32_t *)g30;
										g13 = v25;
										v26 = g24 + g35;
										v27 = g31 + 0x55ec * v25;
										v31 = *(int32_t *)(v26 + 4);
										v32 = *(int32_t *)(v27 + 56);
										v33 = *(int32_t *)(v27 + 60);
										v34 = *(int32_t *)(v27 + 112);
										v20 = *(int32_t *)(v26 + 8) - 4;
										result = AddMissile(v32, v33, v31 - 2, v20, v34, 2, 0, 0, 0);
										v17 = g29;
										// branch -> 0x98d4c
									} else {
										v17 = v13;
									}
								}
								// 0x98d4c
								if (*(char *)v17 == 0) {
									// 0x98da8
									return result;
								}
								// 0x98d58
								if (*(char *)g28 == 5) {
									// 0x98d64
									v28 = g24 + g35;
									v35 = *(int32_t *)(v28 + 92);
									v36 = *(int32_t *)(v28 + 96);
									v37 = *(int32_t *)(v28 + 100);
									result = function_98800(*(int32_t *)(v28 + 88), v35, v36, v37);
									g20 = 0;
									v18 = g32;
									g19 = v18;
									if (*(int32_t *)g33 > 0) {
										result = function_9d6e4(*(int32_t *)v18);
										v21 = g19 + 4;
										g19 = v21;
										v22 = g20 + 1;
										g20 = v22;
										while (v22 < *(int32_t *)g33) {
											// 0x98d8c
											result = function_9d6e4(*(int32_t *)v21);
											v21 = g19 + 4;
											g19 = v21;
											v22 = g20 + 1;
											g20 = v22;
											// continue -> 0x98d8c
										}
										// 0x98da8
										return result;
									}
								}
								// 0x98da8
								return result;
							}
							// 0x98c48
							v39 = g35;
							v7 = v60;
							// branch -> 0x98b78
							continue;
						}
					}
					// 0x98be8
					if (v46 == 0) {
						goto lab_0x98c48;
					}
					// 0x98be8
					v50 = g21;
					v49 = g22;
					// branch -> 0x98bf0
					goto lab_0x98bf0;
				}
			}
			// 0x98da8
			return result;
			// 0x98c5c
			v10 = g25;
			v11 = g24;
			v12 = g35;
			// branch -> 0x98c64
		} else {
			v10 = v9;
			v11 = v1;
			v12 = v2;
		}
	}
	// 0x98c64
	*(char *)v10 = 0;
	v23 = (int32_t *)(v12 + v11 + 36);
	v29 = *v23;
	result = v29;
	*v23 = v29 + 1;
	v13 = g29;
	v17 = v13;
	if (*(char *)v13 != 0) {
		// 0x98c88
		if (*(char *)g28 == 2) {
			// 0x98c94
			v14 = g31;
			v19 = 0x55ec * *(int32_t *)g30;
			v24 = (int32_t *)(v14 + v19 + 264);
			*v24 = *v24 | 0x1000;
			v15 = v14 + 206;
			if (*(char *)(0x55ec * g19 + v15) <= 14) {
				// 0x98cc4
				v30 = (char *)(v19 + v15);
				*v30 = (char)((int32_t)*v30 + 1);
				// branch -> 0x98cd0
			}
			// 0x98cd0
			v16 = g23;
			*(char *)(*(int32_t *)(v16 - 0x7604) + 338) = 3;
			if (*(int32_t *)*(int32_t *)(v16 - 0x7070) == 0) {
				// 0x98cec
				g34 = 12;
				g38 = *(int32_t *)(g24 + g35 + 8);
				PlaySfxLoc(12);
				// branch -> 0x98d00
			}
			// 0x98d00
			InitDiabloMsg(43);
			v25 = *(int32_t *)g30;
			g13 = v25;
			v26 = g24 + g35;
			v27 = g31 + 0x55ec * v25;
			v31 = *(int32_t *)(v26 + 4);
			v32 = *(int32_t *)(v27 + 56);
			v33 = *(int32_t *)(v27 + 60);
			v34 = *(int32_t *)(v27 + 112);
			v20 = *(int32_t *)(v26 + 8) - 4;
			result = AddMissile(v32, v33, v31 - 2, v20, v34, 2, 0, 0, 0);
			v17 = g29;
			// branch -> 0x98d4c
		} else {
			v17 = v13;
		}
	}
	// 0x98d4c
	if (*(char *)v17 == 0) {
		// 0x98da8
		return result;
	}
	// 0x98d58
	if (*(char *)g28 == 5) {
		// 0x98d64
		v28 = g24 + g35;
		v35 = *(int32_t *)(v28 + 92);
		v36 = *(int32_t *)(v28 + 96);
		v37 = *(int32_t *)(v28 + 100);
		result = function_98800(*(int32_t *)(v28 + 88), v35, v36, v37);
		g20 = 0;
		v18 = g32;
		g19 = v18;
		if (*(int32_t *)g33 > 0) {
			result = function_9d6e4(*(int32_t *)v18);
			v21 = g19 + 4;
			g19 = v21;
			v22 = g20 + 1;
			g20 = v22;
			while (v22 < *(int32_t *)g33) {
				// 0x98d8c
				result = function_9d6e4(*(int32_t *)v21);
				v21 = g19 + 4;
				g19 = v21;
				v22 = g20 + 1;
				g20 = v22;
				// continue -> 0x98d8c
			}
			// 0x98da8
			return result;
		}
	}
	// 0x98da8
	return result;
}

// Address range: 0x98dbc - 0x98fe0
int32_t function_98dbc(int32_t result, int32_t a2)
{
	g26 = a2;
	int32_t v1 = 120 * a2; // 0x98dcc
	g29 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x98dd0
	g35 = v2;
	g25 = result;
	int32_t v3 = v2 + v1; // 0x98ddc
	g36 = v3;
	g30 = *(int32_t *)(g23 - 0x7518);
	int32_t v4 = *(int32_t *)(g23 - 0x7604); // 0x98de4
	g33 = v4;
	int32_t v5 = 2 * *(int32_t *)*(int32_t *)(g23 - 0x7550); // 0x98df8
	g27 = v5 + 16;
	int32_t v6 = 2 * *(int32_t *)*(int32_t *)(g23 - 0x754c); // 0x98e08
	g28 = v6 + 16;
	if (*(char *)(v3 + 64) == 0) {
		// 0x98fcc
		return result;
	}
	int32_t v7 = *(int32_t *)(g23 - 0x7730); // 0x98e14
	int32_t result2 = v7;                    // 0x98fdc
	if (*(char *)v7 == 0) {
		int32_t v8 = *(int32_t *)v3; // 0x98e24
		int32_t v9 = v8;             // 0x98e54
		if (v8 == 71) {
			int32_t v10 = v4 + 207; // 0x98e30
			if (*(char *)v10 == 0) {
				// 0x98e40
				*(char *)(v4 + 194) = 2;
				*(int32_t *)(g33 + 212) = 1;
				*(char *)v10 = (char)1;
				v9 = v8;
				// branch -> 0x98e54
			} else {
				v9 = 71;
			}
		}
		// 0x98e54
		if (v9 == 72) {
			int32_t v11 = g33;       // 0x98e5c
			int32_t v12 = v11 + 231; // 0x98e5c
			if (*(char *)v12 == 0) {
				// 0x98e6c
				*(char *)(v11 + 218) = 2;
				*(int32_t *)(g33 + 236) = 1;
				*(char *)v12 = (char)1;
				function_60808(21, v6 + 19, v5 + 26, 0, 1);
				function_60808(21, 2 * *(int32_t *)g32 + 31, 2 * *(int32_t *)g31 + 26, 0, 1);
				function_60808(21, 2 * *(int32_t *)g32 + 25, 2 * *(int32_t *)g31 + 33, 0, 1);
				// branch -> 0x98ee8
			}
		}
		int32_t v13 = *(int32_t *)g36; // 0x98ee8
		if (v13 == 88) {
			int32_t v14 = g33;       // 0x98ef4
			int32_t v15 = v14 + 279; // 0x98ef4
			if (*(char *)v15 == 0) {
				// 0x98f04
				*(char *)(v14 + 266) = 2;
				*(int32_t *)(g33 + 284) = 1;
				*(char *)v15 = (char)1;
				// branch -> 0x98f18
			}
		}
		int32_t v16 = g29 + g35; // 0x98f18
		int32_t v17 = v16 + 36;  // 0x98f20
		g31 = v17;
		int32_t v18 = v16 + 108; // 0x98f24
		g32 = v18;
		if (*(int32_t *)v17 != *(int32_t *)v18) {
			// 0x98f30
			if (v13 != 72) {
				int32_t v19 = *(int32_t *)(v16 + 96);  // 0x98f44
				int32_t v20 = *(int32_t *)(v16 + 100); // 0x98f48
				function_986b4(*(int32_t *)(v16 + 88), *(int32_t *)(v16 + 92), v19, v20);
				// branch -> 0x98f50
			}
			// 0x98f50
			if (*(int32_t *)g36 == 71) {
				// 0x98f5c
				function_60128(3, g28 + 5, g27 + 5);
				char *v21 = (char *)g30; // 0x98f6c
				*v21 = 9;
				int32_t v22 = g29 + g35;               // 0x98f80
				int32_t v23 = *(int32_t *)(v22 + 96);  // 0x98f88
				int32_t v24 = *(int32_t *)(v22 + 100); // 0x98f8c
				function_528e8(*(int32_t *)(v22 + 88), *(int32_t *)(v22 + 92), v23, v24);
				*(char *)g30 = (char)(0x1000000 * (int32_t)*v21 / 0x1000000);
				// branch -> 0x98f98
			}
		}
		// 0x98f98
		*(int32_t *)g31 = *(int32_t *)g32;
		g34 = *(int32_t *)(g29 + g35 + 112);
		function_6c63c();
		int32_t v25 = *(int32_t *)(g23 - 0x77ac); // 0x98fac
		if (g25 == *(int32_t *)v25) {
			// 0x98fbc
			result2 = NetSendCmdParam1(0, 45, g26 % 0x10000);
			// branch -> 0x98fcc
		} else {
			result2 = v25;
		}
	}
	// 0x98fcc
	return result2;
}

// Address range: 0x98fe0 - 0x99110
int32_t function_98fe0(int32_t result2, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7604); // 0x98fec
	g36 = v1;
	g33 = *(int32_t *)(g23 - 0x7194);
	int32_t v2 = *(int32_t *)(g23 - 0x7688) + 120 * a2; // 0x99000
	if (*(char *)(v2 + 64) == 0) {
		// branch -> 0x990fc
	} else {
		int32_t v3 = *(int32_t *)(g23 - 0x7730); // 0x99014
		if (*(char *)v3 == 0) {
			int32_t v4 = v2 + 36; // 0x99024
			g30 = v4;
			int32_t v5 = v2 + 108; // 0x99028
			int32_t v6 = v4;       // 0x99088
			int32_t v7 = v5;       // 0x99080
			int32_t v8;            // 0x990a8
			char v9;
			int32_t result;    // 0x990f8
			int32_t v10;       // 0x990a8
			int32_t v11;       // 0x990ac
			unsigned char v12; // 0x990bc
			if (*(int32_t *)v4 != *(int32_t *)v5) {
				int32_t v13 = *(int32_t *)(v2 + 96);  // 0x99044
				int32_t v14 = *(int32_t *)(v2 + 100); // 0x99048
				function_98800(*(int32_t *)(v2 + 88), *(int32_t *)(v2 + 92), v13, v14);
				g29 = 0;
				int32_t v15 = *(int32_t *)(g23 - 0x7190); // 0x99054
				g32 = v15;
				if (*(int32_t *)g33 > 0) {
					function_9d6e4(*(int32_t *)v15);
					int32_t v16 = g32 + 4; // 0x9906c
					g32 = v16;
					int32_t v17 = g29 + 1; // 0x99070
					g29 = v17;
					while (v17 < *(int32_t *)g33) {
						// 0x99064
						function_9d6e4(*(int32_t *)v16);
						v16 = g32 + 4;
						g32 = v16;
						v17 = g29 + 1;
						g29 = v17;
						// continue -> 0x99064
					}
					// 0x99080
					// branch -> 0x99080
					// 0x99080
					*(int32_t *)g30 = *(int32_t *)g31;
					if (*(char *)(g36 + 338) == 1) {
						// 0x99098
						*(char *)(g36 + 338) = 2;
						*(int32_t *)(g36 + 356) = 1;
						// branch -> 0x990a8
					}
					// 0x990a8
					v8 = g23;
					v10 = *(int32_t *)(v8 - 0x77ac);
					v11 = *(int32_t *)(v8 - 0x77a8);
					v12 = *(char *)(0x55ec * *(int32_t *)v10 + v11 + 348);
					if (v12 == 0) {
						// 0x990c8
						g35 = 235;
						// branch -> 0x990f0
						// 0x990f0
						*(char *)(g36 + 350) = -21;
						g34 = g35;
						result = function_6c63c();
						// branch -> 0x990fc
						// 0x990fc
						return result;
					}
					// 0x990d0
					if (v12 == 1) {
						// 0x990dc
						g35 = 243;
						// branch -> 0x990f0
						// 0x990f0
						*(char *)(g36 + 350) = -13;
						g34 = g35;
						result = function_6c63c();
						// branch -> 0x990fc
						// 0x990fc
						return result;
					}
					// 0x990e4
					if (v12 == 2) {
						// 0x990ec
						g35 = 239;
						v9 = -17;
						// branch -> 0x990f0
					} else {
						// 0x990e4
						v9 = g35;
						// branch -> 0x990f0
					}
					// 0x990f0
					*(char *)(g36 + 350) = v9;
					g34 = g35;
					result = function_6c63c();
					// branch -> 0x990fc
					// 0x990fc
					return result;
				}
				// 0x99080
				v6 = g30;
				v1 = g36;
				v7 = g31;
				// branch -> 0x99080
			}
			// 0x99080
			*(int32_t *)v6 = *(int32_t *)v7;
			if (*(char *)(g36 + 338) == 1) {
				// 0x99098
				*(char *)(v1 + 338) = 2;
				*(int32_t *)(g36 + 356) = 1;
				// branch -> 0x990a8
			}
			// 0x990a8
			v8 = g23;
			v10 = *(int32_t *)(v8 - 0x77ac);
			v11 = *(int32_t *)(v8 - 0x77a8);
			v12 = *(char *)(0x55ec * *(int32_t *)v10 + v11 + 348);
			if (v12 != 0) {
				// 0x990d0
				if (v12 == 1) {
					// 0x990dc
					g35 = 243;
					// branch -> 0x990f0
					// 0x990f0
					*(char *)(g36 + 350) = -13;
					g34 = g35;
					result = function_6c63c();
					// branch -> 0x990fc
					// 0x990fc
					return result;
				}
				// 0x990e4
				if (v12 == 2) {
					// 0x990ec
					g35 = 239;
					v9 = -17;
					// branch -> 0x990f0
				} else {
					// 0x990e4
					v9 = g35;
					// branch -> 0x990f0
				}
				// 0x990f0
				*(char *)(g36 + 350) = v9;
				g34 = g35;
				result = function_6c63c();
				// branch -> 0x990fc
				// 0x990fc
				return result;
			}
			// 0x990c8
			g35 = 235;
			// branch -> 0x990f0
			// 0x990f0
			*(char *)(g36 + 350) = -21;
			g34 = g35;
			result2 = function_6c63c();
			// branch -> 0x990fc
		} else {
			result2 = v3;
		}
	}
	// 0x990fc
	return result2;
}

// Address range: 0x99110 - 0x99324
int32_t function_99110(int32_t result, int32_t a2, int32_t a3)
{
	g28 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x9911c
	g35 = v1;
	int32_t v2 = 120 * a2; // 0x99120
	g32 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7070); // 0x99124
	g26 = v3;
	g27 = result;
	g33 = *(int32_t *)(g23 - 0x77a8);
	g29 = a3;
	int32_t v4 = v1 + v2; // 0x99134
	int32_t v5 = v4 + 64; // 0x99140
	g25 = v5;
	if (*(char *)v5 == 0) {
		// 0x99310
		return result;
	}
	if (*(int32_t *)v3 == 0) {
		// 0x99158
		g34 = 18;
		g38 = *(int32_t *)(v4 + 8);
		PlaySfxLoc(18);
		v5 = g25;
		v2 = g32;
		v1 = g35;
		// branch -> 0x9916c
	}
	// 0x9916c
	g31 = 0;
	g36 = v1 + v2;
	*(char *)v5 = 0;
	int32_t *v6 = (int32_t *)(g36 + 36); // 0x99178
	int32_t v7 = *v6;                    // 0x99178
	*v6 = v7 + 2;
	int32_t result2; // 0x99320
	if (*(int32_t *)g26 == 0) {
		// 0x99190
		g34 = *(int32_t *)(g36 + 84);
		SetRndSeed();
		int32_t v8;   // r21
		int32_t v9;   // r22
		int32_t v10;  // r27
		int32_t v11;  // 0x99230
		int32_t v12;  // 0x9925c
		int32_t v13;  // 0x99260
		int32_t v14;  // 0x9926c
		int32_t v15;  // 0x99270
		int32_t v16;  // 0x9922c
		int32_t v17;  // 0x99264
		int32_t v18;  // 0x992d8
		int32_t v19;  // 0x992dc
		int32_t v20;  // 0x992e0
		uint32_t v21; // 0x992f0
		int32_t v22;  // 0x99260
		int32_t v23;  // 0x9926c
		int32_t v24;  // 0x9927c
		int32_t v25;  // 0x992ec
		uint32_t v26; // 0x9923c
		int32_t v27;  // 0x99274
		if (*(char *)*(int32_t *)(g23 - 0x77d8) == 0) {
			int32_t v28 = g36; // 0x992203
			if (g31 < *(int32_t *)(v28 + 88)) {
				while (true) {
					int32_t v29 = *(int32_t *)(v28 + 4); // 0x99208
					if (*(int32_t *)(v28 + 92) == 0) {
						// 0x99208
						function_603cc(g27, v29, *(int32_t *)(v28 + 8), g29);
						// branch -> 0x9921c
					} else {
						// 0x991ec
						function_6022c(v29, *(int32_t *)(v28 + 8), 0, g29, 0);
						// branch -> 0x9921c
					}
					int32_t v30 = g31 + 1; // 0x9921c
					g31 = v30;
					int32_t v31 = g36; // 0x99220
					if (v30 >= *(int32_t *)(v31 + 88)) {
						// break -> 0x9922c
						break;
					}
					v28 = v31;
					// continue -> 0x991e0
				}
				// 0x9922c
				v16 = g32 + g35;
				v11 = v16 + 72;
				g36 = v11;
				if (*(int32_t *)v11 != 0) {
					// 0x9923c
					v26 = *(int32_t *)v16;
					if (v26 >= 68) {
						// 0x99248
						if (v26 <= 70) {
							// 0x99250
							v12 = v16 + 4;
							g24 = v12;
							v13 = v16 + 8;
							v22 = *(int32_t *)v13;
							v10 = v13;
							v17 = g33 + 0x55ec * g27;
							v14 = v17 + 56;
							v23 = *(int32_t *)v14;
							v9 = v14;
							v15 = v17 + 60;
							v8 = v15;
							v27 = GetDirection(*(int32_t *)v12, v22, v23, *(int32_t *)v15);
							v24 = *(int32_t *)(g32 + g35 + 100);
							if (v24 != 1) {
								// 0x99288
								if (v24 > 1) {
									// 0x99298
									if (v24 == 2) {
										// 0x992b4
										g30 = 42;
										// branch -> 0x992b8
									}
								} else {
									// 0x9928c
									if (v24 > -1) {
										// 0x992a4
										g30 = 0;
										// branch -> 0x992b8
									}
								}
								// 0x992b8
								g13 = -1;
								v18 = *(int32_t *)v10;
								v19 = *(int32_t *)v9;
								v20 = *(int32_t *)v8;
								AddMissile(*(int32_t *)g24, v18, v19, v20, v27, g30, 1, 0, 0);
								*(int32_t *)g36 = g29;
								// branch -> 0x992ec
								// 0x992ec
								v25 = *(int32_t *)(g23 - 0x77ac);
								v21 = *(int32_t *)v25;
								result2 = v25;
								if (g27 == v21) {
									// 0x992fc
									result2 = function_8b434(0, 46, v21 % 0x10000, g28 % 0x10000);
									// branch -> 0x99310
								}
								// 0x99310
								return result2;
							}
							// 0x992ac
							g30 = 27;
							// branch -> 0x992b8
							// 0x992b8
							g13 = -1;
							v18 = *(int32_t *)v10;
							v19 = *(int32_t *)v9;
							v20 = *(int32_t *)v8;
							AddMissile(*(int32_t *)g24, v18, v19, v20, v27, g30, 1, 0, 0);
							*(int32_t *)g36 = g29;
							// branch -> 0x992ec
						}
					}
				}
				// 0x992ec
				v25 = *(int32_t *)(g23 - 0x77ac);
				v21 = *(int32_t *)v25;
				result2 = v25;
				if (g27 == v21) {
					// 0x992fc
					result2 = function_8b434(0, 46, v21 % 0x10000, g28 % 0x10000);
					// branch -> 0x99310
				}
				// 0x99310
				return result2;
			}
		} else {
			// 0x991cc
			g24 = 0;
			int32_t v32 = g36; // 0x991cc11
			if (*(int32_t *)(v32 + 88) > 0) {
				function_6022c(*(int32_t *)(v32 + 4), *(int32_t *)(v32 + 8), 1, g29, 0);
				int32_t v33 = g24 + 1; // 0x991c8
				g24 = v33;
				while (v33 < *(int32_t *)(g36 + 88)) {
					// 0x991b0
					v32 = g36;
					function_6022c(*(int32_t *)(v32 + 4), *(int32_t *)(v32 + 8), 1, g29, 0);
					v33 = g24 + 1;
					g24 = v33;
					// continue -> 0x991b0
				}
				// 0x9922c
				v16 = g32 + g35;
				v11 = v16 + 72;
				g36 = v11;
				if (*(int32_t *)v11 != 0) {
					// 0x9923c
					v26 = *(int32_t *)v16;
					if (v26 >= 68) {
						// 0x99248
						if (v26 <= 70) {
							// 0x99250
							v12 = v16 + 4;
							g24 = v12;
							v13 = v16 + 8;
							v22 = *(int32_t *)v13;
							v10 = v13;
							v17 = g33 + 0x55ec * g27;
							v14 = v17 + 56;
							v23 = *(int32_t *)v14;
							v9 = v14;
							v15 = v17 + 60;
							v8 = v15;
							v27 = GetDirection(*(int32_t *)v12, v22, v23, *(int32_t *)v15);
							v24 = *(int32_t *)(g32 + g35 + 100);
							if (v24 != 1) {
								// 0x99288
								if (v24 > 1) {
									// 0x99298
									if (v24 == 2) {
										// 0x992b4
										g30 = 42;
										// branch -> 0x992b8
									}
								} else {
									// 0x9928c
									if (v24 > -1) {
										// 0x992a4
										g30 = 0;
										// branch -> 0x992b8
									}
								}
								// 0x992b8
								g13 = -1;
								v18 = *(int32_t *)v10;
								v19 = *(int32_t *)v9;
								v20 = *(int32_t *)v8;
								AddMissile(*(int32_t *)g24, v18, v19, v20, v27, g30, 1, 0, 0);
								*(int32_t *)g36 = g29;
								// branch -> 0x992ec
								// 0x992ec
								v25 = *(int32_t *)(g23 - 0x77ac);
								v21 = *(int32_t *)v25;
								result2 = v25;
								if (g27 == v21) {
									// 0x992fc
									result2 = function_8b434(0, 46, v21 % 0x10000, g28 % 0x10000);
									// branch -> 0x99310
								}
								// 0x99310
								return result2;
							}
							// 0x992ac
							g30 = 27;
							// branch -> 0x992b8
							// 0x992b8
							g13 = -1;
							v18 = *(int32_t *)v10;
							v19 = *(int32_t *)v9;
							v20 = *(int32_t *)v8;
							AddMissile(*(int32_t *)g24, v18, v19, v20, v27, g30, 1, 0, 0);
							*(int32_t *)g36 = g29;
							// branch -> 0x992ec
						}
					}
				}
				// 0x992ec
				v25 = *(int32_t *)(g23 - 0x77ac);
				v21 = *(int32_t *)v25;
				result2 = v25;
				if (g27 == v21) {
					// 0x992fc
					result2 = function_8b434(0, 46, v21 % 0x10000, g28 % 0x10000);
					// branch -> 0x99310
				}
				// 0x99310
				return result2;
			}
		}
		// 0x9922c
		v16 = g32 + g35;
		v11 = v16 + 72;
		g36 = v11;
		if (*(int32_t *)v11 != 0) {
			// 0x9923c
			v26 = *(int32_t *)v16;
			if (v26 >= 68) {
				// 0x99248
				if (v26 <= 70) {
					// 0x99250
					v12 = v16 + 4;
					g24 = v12;
					v13 = v16 + 8;
					v22 = *(int32_t *)v13;
					v10 = v13;
					v17 = g33 + 0x55ec * g27;
					v14 = v17 + 56;
					v23 = *(int32_t *)v14;
					v9 = v14;
					v15 = v17 + 60;
					v8 = v15;
					v27 = GetDirection(*(int32_t *)v12, v22, v23, *(int32_t *)v15);
					v24 = *(int32_t *)(g32 + g35 + 100);
					if (v24 != 1) {
						// 0x99288
						if (v24 > 1) {
							// 0x99298
							if (v24 == 2) {
								// 0x992b4
								g30 = 42;
								// branch -> 0x992b8
							}
						} else {
							// 0x9928c
							if (v24 > -1) {
								// 0x992a4
								g30 = 0;
								// branch -> 0x992b8
							}
						}
						// 0x992b8
						g13 = -1;
						v18 = *(int32_t *)v10;
						v19 = *(int32_t *)v9;
						v20 = *(int32_t *)v8;
						AddMissile(*(int32_t *)g24, v18, v19, v20, v27, g30, 1, 0, 0);
						*(int32_t *)g36 = g29;
						// branch -> 0x992ec
						// 0x992ec
						v25 = *(int32_t *)(g23 - 0x77ac);
						v21 = *(int32_t *)v25;
						result2 = v25;
						if (g27 == v21) {
							// 0x992fc
							result2 = function_8b434(0, 46, v21 % 0x10000, g28 % 0x10000);
							// branch -> 0x99310
						}
						// 0x99310
						return result2;
					}
					// 0x992ac
					g30 = 27;
					// branch -> 0x992b8
					// 0x992b8
					g13 = -1;
					v18 = *(int32_t *)v10;
					v19 = *(int32_t *)v9;
					v20 = *(int32_t *)v8;
					AddMissile(*(int32_t *)g24, v18, v19, v20, v27, g30, 1, 0, 0);
					*(int32_t *)g36 = g29;
					// branch -> 0x992ec
				}
			}
		}
		// 0x992ec
		v25 = *(int32_t *)(g23 - 0x77ac);
		v21 = *(int32_t *)v25;
		if (g27 == v21) {
			// 0x992fc
			result2 = function_8b434(0, 46, v21 % 0x10000, g28 % 0x10000);
			// branch -> 0x99310
		} else {
			result2 = v25;
		}
	} else {
		// 0x9916c
		result2 = v7;
		// branch -> 0x99310
	}
	// 0x99310
	return result2;
}

// Address range: 0x99324 - 0x99468
int32_t OperateMushPatch(int32_t result, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7604); // 0x9932c
	int32_t v2 = *(int32_t *)(g23 - 0x7070); // 0x99330
	g35 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7688); // 0x99334
	g36 = v3;
	if (*(char *)(v1 + 26) == 2) {
		// 0x9934c
		if (*(char *)(v1 + 39) > 1) {
			int32_t v4 = 120 * a2; // 0x993c8
			g33 = v4;
			int32_t v5 = v4 + v3; // 0x993cc
			int32_t v6 = v5 + 64; // 0x993d0
			g32 = v6;
			if (*(char *)v6 == 0) {
				// 0x99454
				return result;
			}
			if (*(int32_t *)v2 == 0) {
				// 0x993e8
				g34 = 18;
				g38 = *(int32_t *)(v5 + 8);
				PlaySfxLoc(18);
				v6 = g32;
				v4 = g33;
				v3 = g36;
				// branch -> 0x993fc
			}
			int32_t v7 = v3 + v4; // r4
			*(char *)v6 = 0;
			int32_t *v8 = (int32_t *)(v7 + 36); // 0x99408
			int32_t v9 = *v8;                   // 0x99408
			result = v9;
			*v8 = v9 + 1;
			if (*(int32_t *)g35 == 0) {
				int32_t v10 = *(int32_t *)(v7 + 4); // 0x99420
				int32_t v11 = *(int32_t *)(v7 + 8); // 0x99428
				int32_t v12 = 0;                    // bp-36
				int32_t v13;                        // bp-40
				function_5d9b0(v10, v11, &v12, (int32_t)&v13);
				result = function_60808(17, v12, v13, 0, 0);
				*(char *)g31 = 3;
				// branch -> 0x99454
			}
			// 0x99454
			return result;
		}
	}
	// 0x9935c
	if (*(int32_t *)v2 == 0) {
		int32_t v14 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x9936c
		if (result == v14) {
			unsigned char v15 = *(char *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v14 + 348); // 0x99384
			result = v15;
			if (v15 == 0) {
				// 0x99390
				g34 = 726;
				result = PlaySFX(726);
				// branch -> 0x99454
				// 0x99454
				return result;
			}
			// 0x9939c
			if (v15 == 1) {
				// 0x993a8
				g34 = 623;
				result = PlaySFX(623);
				// branch -> 0x99454
			} else {
				// 0x993b4
				if (v15 == 2) {
					// 0x993bc
					g34 = 520;
					result = PlaySFX(520);
					// branch -> 0x99454
				}
			}
			// 0x99454
			return result;
		}
	}
	// 0x99454
	return result;
}

// Address range: 0x99468 - 0x995ac
int32_t OperateInnSignChest(int32_t result, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7070); // 0x99478
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x99480
	g36 = v2;
	if (*(char *)(*(int32_t *)(g23 - 0x7604) + 183) != 2) {
		// 0x9949c
		if (*(int32_t *)v1 == 0) {
			int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x994ac
			if (result == v3) {
				unsigned char v4 = *(char *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v3 + 348); // 0x994c4
				result = v4;
				if (v4 == 0) {
					// 0x994d0
					g34 = 743;
					result = PlaySFX(743);
					// branch -> 0x9958c
					// 0x9958c
					return result;
				}
				// 0x994dc
				if (v4 == 1) {
					// 0x994e8
					g34 = 634;
					result = PlaySFX(634);
					// branch -> 0x9958c
				} else {
					// 0x994f4
					if (v4 == 2) {
						// 0x994fc
						g34 = 531;
						result = PlaySFX(531);
						// branch -> 0x9958c
					}
				}
				// 0x9958c
				return result;
			}
		}
		// 0x9958c
		return result;
	}
	int32_t v5 = 120 * a2; // 0x99508
	g33 = v5;
	int32_t v6 = v5 + v2; // 0x9950c
	int32_t v7 = v6 + 64; // 0x99510
	g32 = v7;
	if (*(char *)v7 != 0) {
		if (*(int32_t *)v1 == 0) {
			// 0x99528
			g34 = 18;
			g38 = *(int32_t *)(v6 + 8);
			PlaySfxLoc(18);
			v7 = g32;
			v5 = g33;
			v2 = g36;
			// branch -> 0x9953c
		}
		int32_t v8 = v2 + v5; // r4
		*(char *)v7 = 0;
		int32_t *v9 = (int32_t *)(v8 + 36); // 0x99548
		int32_t v10 = *v9;                  // 0x99548
		result = v10;
		*v9 = v10 + 2;
		if (*(int32_t *)g35 == 0) {
			int32_t v11 = *(int32_t *)(v8 + 4); // 0x99560
			int32_t v12 = *(int32_t *)(v8 + 8); // 0x99568
			int32_t v13 = 0;                    // bp-20
			int32_t v14;                        // bp-24
			function_5d9b0(v11, v12, &v13, (int32_t)&v14);
			result = function_60808(12, v13, v14, 0, 0);
			// branch -> 0x9958c
		}
	}
	// 0x9958c
	return result;
}

// Address range: 0x995ac - 0x99728
int32_t function_995ac(int32_t result, int32_t a2, int32_t a3)
{
	// 0x995ac
	g36 = *(int32_t *)(g23 - 0x77a8);
	g35 = *(int32_t *)(g23 - 0x77ac);
	g33 = a2;
	int32_t v1 = 120 * a2;                   // 0x995c8
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x995cc
	g32 = result;
	char *v3 = (char *)(v2 + v1 + 64); // 0x995e8
	if (*v3 == 0) {
		// 0x99708
		return result;
	}
	// 0x995f4
	*v3 = 0;
	int32_t v4 = *(int32_t *)(g23 - 0x7070); // 0x99600
	int32_t result2 = v4;                    // 0x99724
	if (*(int32_t *)v4 == 0) {
		unsigned char v5 = *(char *)(g36 + 0x55ec * g32 + 348); // 0x99614
		if (v5 != 0) {
			// 0x99660
			int32_t v6; // 0x997242
			if (v5 == 1) {
				int32_t v7 = v1 + v2;              // 0x9966c
				int32_t v8 = *(int32_t *)(v7 + 4); // 0x99670
				g34 = v8;
				int32_t v9 = *(int32_t *)(v7 + 8); // 0x99678
				g37 = v9;
				function_64924(v8, v9, 3, 119, 0, 1);
				g34 = 619;
				g38 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 60);
				v6 = PlaySfxLoc(619);
				// branch -> 0x996ec
			} else {
				// 0x996ac
				if (v5 == 2) {
					int32_t v10 = v1 + v2; // 0x996b4
					function_646e0(*(int32_t *)(v10 + 4), *(int32_t *)(v10 + 8), 3, 0, 1);
					g34 = 516;
					g38 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 60);
					v6 = PlaySfxLoc(516);
					// branch -> 0x996ec
				} else {
					v6 = v5;
				}
			}
			// 0x996ec
			result2 = v6;
			if (g32 == *(int32_t *)g35) {
				// 0x996f8
				result2 = NetSendCmdParam1(0, 45, g33 % 0x10000);
				// branch -> 0x99708
			}
			// 0x99708
			return result2;
		}
		int32_t v11 = v1 + v2;               // 0x99620
		int32_t v12 = *(int32_t *)(v11 + 4); // 0x99624
		g34 = v12;
		int32_t v13 = *(int32_t *)(v11 + 8); // 0x9962c
		g37 = v13;
		function_64804(v12, v13, 9, 153, 0, 1);
		g34 = 722;
		g38 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g35 + 60);
		int32_t v14 = PlaySfxLoc(722); // 0x99658
		// branch -> 0x996ec
		// 0x996ec
		if (g32 == *(int32_t *)g35) {
			// 0x996f8
			result2 = NetSendCmdParam1(0, 45, g33 % 0x10000);
			// branch -> 0x99708
		} else {
			result2 = v14;
		}
	}
	// 0x99708
	return result2;
}

// Address range: 0x99728 - 0x9981c
int32_t function_99728(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x9972c
	int32_t v2 = *(int32_t *)(g23 - 0x7190); // r9
	int32_t v3 = *(int32_t *)(g23 - 0x7194); // r4
	int32_t v4 = v1 + 120 * a1;              // 0x99738
	int32_t *v5 = (int32_t *)(v4 + 36);      // 0x9973c
	int32_t v6 = *v5;                        // 0x9973c
	int32_t v7;                              // ctr
	int32_t result2;                         // r3
	int32_t v8;                              // r6
	if (v6 != 1) {
		// 0x997ac
		v8 = v4;
		*v5 = v6 - 1;
		int32_t result = *(int32_t *)v3; // 0x997c0
		v7 = result;
		if (result < 1) {
			// bb
			return result;
		}
		int32_t v9 = v2; // 0x997d0
		// branch -> 0x997d0
		while (true) {
			int32_t v10 = *(int32_t *)(v8 + 92); // 0x997d4
			result2 = v10;
			int32_t v11 = v1 + 120 * *(int32_t *)v9; // 0x997dc
			if (*(int32_t *)v11 == v10) {
				int32_t v12 = v11;                   // r5
				int32_t v13 = *(int32_t *)(v8 + 88); // 0x997ec
				result2 = v13;
				if (*(int32_t *)(v11 + 88) == v13) {
					// 0x997fc
					*(int32_t *)(v11 + 92) = 0;
					int32_t v14 = *(int32_t *)(v12 + 100); // 0x99800
					result2 = v14;
					if (v14 != 0) {
						// 0x9980c
						*(int32_t *)(v12 + 16) = 1;
						// branch -> 0x99810
					}
				}
			}
			int32_t v15 = v2 + 4; // 0x99810
			v2 = v15;
			int32_t v16 = v7 - 1; // 0x99814
			v7 = v16;
			if (v16 == 0) {
				// break -> 0x99818
				break;
			}
			v9 = v15;
			// continue -> 0x997d0
		}
		// 0x99818
		return result2;
	}
	// 0x99748
	*v5 = 2;
	result2 = 1;
	int32_t v17 = *(int32_t *)v3; // 0x9975c
	v7 = v17;
	if (v17 < 1) {
		// bb
		return 1;
	}
	int32_t v18 = v2; // 0x9976c
	// branch -> 0x9976c
	while (true) {
		int32_t v19 = v1 + 120 * *(int32_t *)v18; // 0x99778
		int32_t v20 = v17;                        // 0x997a4
		int32_t v21 = v18;                        // 0x997a0
		if (*(int32_t *)v19 == *(int32_t *)(v4 + 92)) {
			// 0x99784
			v8 = v19;
			if (*(int32_t *)(v19 + 88) == *(int32_t *)(v4 + 88)) {
				// 0x99798
				*(int32_t *)(v19 + 92) = result2;
				*(int32_t *)(v8 + 16) = 0;
				v20 = v7;
				v21 = v2;
				// branch -> 0x997a0
			} else {
				v20 = v17;
				v21 = v18;
			}
		}
		int32_t v22 = v21 + 4; // 0x997a0
		v2 = v22;
		int32_t v23 = v20 - 1; // 0x997a4
		v7 = v23;
		if (v23 == 0) {
			// break -> 0x997a8
			break;
		}
		v17 = v23;
		v18 = v22;
		// continue -> 0x9976c
	}
	// 0x997a8
	return result2;
}

// Address range: 0x9981c - 0x99930
int32_t function_9981c(int32_t result, int32_t a2, int32_t a3)
{
	// 0x9981c
	g36 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x99828
	g32 = v1;
	int32_t v2 = 120 * a2; // 0x9982c
	g31 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7070); // 0x99830
	g33 = v3;
	g35 = result;
	g29 = a3;
	int32_t v4 = v1 + v2; // 0x9983c
	int32_t v5 = v4 + 64; // 0x99848
	g30 = v5;
	if (*(char *)v5 == 0) {
		// 0x9991c
		return result;
	}
	if (*(int32_t *)v3 == 0) {
		// 0x99860
		g34 = 66;
		g38 = *(int32_t *)(v4 + 8);
		PlaySfxLoc(66);
		v5 = g30;
		// branch -> 0x99874
	}
	// 0x99874
	*(char *)v5 = 0;
	int32_t v6 = g31 + g32; // 0x99898
	int32_t result2;        // 0x9992c
	if (*(int32_t *)g33 == 0) {
		// 0x99898
		g33 = v6;
		*(int32_t *)(v6 + 16) = 1;
		*(int32_t *)(g33 + 24) = 3;
		g34 = *(int32_t *)(g33 + 84);
		SetRndSeed();
		int32_t v7 = g33;     // 0x998b4
		int32_t v8 = v7 + 88; // 0x998b4
		g30 = v8;
		int32_t v9 = v8; // 0x998dc
		if (*(int32_t *)v8 <= 2) {
			// 0x998c4
			function_6022c(*(int32_t *)(v7 + 4), *(int32_t *)(v7 + 8), 0, g29, 0);
			v9 = g30;
			// branch -> 0x998dc
		}
		// 0x998dc
		if (*(int32_t *)v9 >= 8) {
			int32_t v10 = g31 + g32;             // 0x998e8
			int32_t v11 = *(int32_t *)(v10 + 8); // 0x998f4
			function_8700c(*(int32_t *)(v10 + 92), *(int32_t *)(v10 + 4), v11);
			// branch -> 0x998fc
		}
		int32_t v12 = *(int32_t *)(g23 - 0x77ac); // 0x998fc
		if (g35 == *(int32_t *)v12) {
			// 0x9990c
			result2 = NetSendCmdParam1(0, 45, g36 % 0x10000);
			// branch -> 0x9991c
		} else {
			result2 = v12;
		}
	} else {
		// 0x99888
		*(int32_t *)(v6 + 36) = *(int32_t *)(v6 + 32);
		result2 = v6;
		// branch -> 0x9991c
	}
	// 0x9991c
	return result2;
}

// Address range: 0x99930 - 0x999f8
int32_t function_99930(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x99930
	g29 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x9993c
	g33 = v1;
	g30 = a2;
	int32_t v2 = 120 * a2; // 0x99944
	g32 = v2;
	g31 = a3;
	int32_t v3 = v2 + v1;                                  // 0x99950
	int32_t v4 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0x99960
	g34 = *(int32_t *)(v3 + 4) - *(int32_t *)(v4 + 56);
	int32_t v5 = abs(); // r30
	g34 = *(int32_t *)(v3 + 8) - *(int32_t *)(v4 + 60);
	int32_t v6 = abs(); // 0x99984
	g36 = v6;
	int32_t result = v6; // 0x999f43
	int32_t result2;     // 0x999f4
	if (v5 != 1) {
		// 0x999b8
		if (v5 > 1) {
			// 0x999e4
			return result;
		}
		// 0x999c0
		result2 = result;
		if (g36 == 1) {
			// 0x999c8
			if (*(int32_t *)(g32 + g33) == 43) {
				// 0x999d4
				result2 = function_97bf8(g29, g30, g31);
				// branch -> 0x999e4
			} else {
				result2 = result;
			}
		}
		// 0x999e4
		return result2;
	}
	// 0x99994
	int32_t v7; // 0x999b8
	if (v6 <= 1) {
		// 0x9999c
		if (*(int32_t *)(g32 + g33) == 42) {
			// 0x999a8
			result = function_97df8(g29, g30, g31);
			v7 = g35;
			// branch -> 0x999b8
		} else {
			result = v6;
			v7 = 1;
		}
	} else {
		result = v6;
		v7 = 1;
	}
	// 0x999b8
	if (v7 > 1) {
		// 0x999e4
		return result;
	}
	// 0x999c0
	result2 = result;
	if (g36 == 1) {
		// 0x999c8
		if (*(int32_t *)(g32 + g33) == 43) {
			// 0x999d4
			result2 = function_97bf8(g29, g30, g31);
			// branch -> 0x999e4
		} else {
			result2 = result;
		}
	}
	// 0x999e4
	return result2;
}

// Address range: 0x999f8 - 0x99ac0
int32_t function_999f8(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x999f8
	g29 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x99a04
	g33 = v1;
	g30 = a2;
	int32_t v2 = 120 * a2; // 0x99a0c
	g32 = v2;
	g31 = a3;
	int32_t v3 = v2 + v1;                                  // 0x99a18
	int32_t v4 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0x99a28
	g34 = *(int32_t *)(v3 + 4) - *(int32_t *)(v4 + 56);
	int32_t v5 = abs(); // r30
	g34 = *(int32_t *)(v3 + 8) - *(int32_t *)(v4 + 60);
	int32_t v6 = abs(); // 0x99a4c
	g36 = v6;
	int32_t result = v6; // 0x99abc3
	int32_t result2;     // 0x99abc
	if (v5 != 1) {
		// 0x99a80
		if (v5 > 1) {
			// 0x99aac
			return result;
		}
		// 0x99a88
		result2 = result;
		if (g36 == 1) {
			// 0x99a90
			if (*(int32_t *)(g32 + g33) == 74) {
				// 0x99a9c
				result2 = function_981f8(g29, g30, g31);
				// branch -> 0x99aac
			} else {
				result2 = result;
			}
		}
		// 0x99aac
		return result2;
	}
	// 0x99a5c
	int32_t v7; // 0x99a80
	if (v6 <= 1) {
		// 0x99a64
		if (*(int32_t *)(g32 + g33) == 75) {
			// 0x99a70
			result = OperateL3RDoor(g29, g30, g31);
			v7 = g35;
			// branch -> 0x99a80
		} else {
			result = v6;
			v7 = 1;
		}
	} else {
		result = v6;
		v7 = 1;
	}
	// 0x99a80
	if (v7 > 1) {
		// 0x99aac
		return result;
	}
	// 0x99a88
	result2 = result;
	if (g36 == 1) {
		// 0x99a90
		if (*(int32_t *)(g32 + g33) == 74) {
			// 0x99a9c
			result2 = function_981f8(g29, g30, g31);
			// branch -> 0x99aac
		} else {
			result2 = result;
		}
	}
	// 0x99aac
	return result2;
}

// Address range: 0x99ac0 - 0x99c7c
int32_t function_99ac0(int32_t result, int32_t a2)
{
	int32_t v1 = 120 * a2; // 0x99ac8
	g31 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x99acc
	g36 = v2;
	g32 = *(int32_t *)(g23 - 0x7070);
	g33 = *(int32_t *)(g23 - 0x7550);
	int32_t v3 = result; // 0x99ad8
	g35 = *(int32_t *)(g23 - 0x754c);
	int32_t v4 = v2 + v1 + 108; // 0x99aec
	g30 = v4;
	if (*(int32_t *)v4 == 3) {
		// 0x99c68
		return result;
	}
	int32_t v5 = 0;                           // bp-36
	int32_t v6 = function_c5638(v3, 21, &v5); // 0x99b04
	result = v6;
	if (v6 != 0) {
		// 0x99b10
		g37 = v5;
		function_591d8(v3);
		int32_t *v7 = (int32_t *)(g31 + g36 + 36); // 0x99b20
		*v7 = *v7 + 1;
		int32_t *v8 = (int32_t *)g30; // 0x99b2c
		int32_t v9 = *v8;             // 0x99b2c
		result = v9;
		*v8 = v9 + 1;
		// branch -> 0x99b38
	}
	int32_t v10 = g30; // 0x99b38
	int32_t v11 = v10; // 0x99b7c
	if (*(int32_t *)v10 == 1) {
		// 0x99b44
		if (*(int32_t *)g32 == 0) {
			// 0x99b50
			g34 = 125;
			g38 = *(int32_t *)(g31 + g36 + 8);
			PlaySfxLoc(125);
			// branch -> 0x99b64
		}
		int32_t v12 = *(int32_t *)g33; // 0x99b64
		int32_t v13 = *(int32_t *)g35; // 0x99b68
		result = function_986b4(v13, v12 + 3, v13 + 2, v12 + 7);
		v11 = g30;
		// branch -> 0x99b7c
	}
	int32_t v14 = v11; // 0x99bcc
	if (*(int32_t *)v11 == 2) {
		// 0x99b88
		if (*(int32_t *)g32 == 0) {
			// 0x99b94
			g34 = 125;
			g38 = *(int32_t *)(g31 + g36 + 8);
			PlaySfxLoc(125);
			// branch -> 0x99ba8
		}
		int32_t v15 = *(int32_t *)g33;                        // 0x99bac
		int32_t v16 = *(int32_t *)g35;                        // 0x99bb0
		int32_t v17 = *(int32_t *)*(int32_t *)(g23 - 0x7554); // 0x99bb4
		result = function_986b4(v16 + 6, v15 + 3, v17 + v16, v15 + 7);
		v14 = g30;
		// branch -> 0x99bcc
	}
	// 0x99bcc
	if (*(int32_t *)v14 == 3) {
		// 0x99bd8
		if (*(int32_t *)g32 == 0) {
			// 0x99be4
			g34 = 91;
			g38 = *(int32_t *)(g31 + g36 + 8);
			PlaySfxLoc(91);
			// branch -> 0x99bf8
		}
		int32_t v18 = g31 + g36; // 0x99bf8
		g30 = v18;
		int32_t v19 = *(int32_t *)(v18 + 96);  // 0x99c04
		int32_t v20 = *(int32_t *)(v18 + 100); // 0x99c08
		function_986b4(*(int32_t *)(v18 + 88), *(int32_t *)(v18 + 92), v19, v20);
		int32_t v21 = LoadFileInMem(*(int32_t *)(g23 - 0x5b3c), NULL); // 0x99c18
		int32_t v22 = v21;                                             // bp-40
		function_93b18(v21, 2 * *(int32_t *)g35, 2 * *(int32_t *)g33);
		MemFreeDbg(&v22);
		result = function_60128(7, 2 * *(int32_t *)g35 + 25, 2 * *(int32_t *)g33 + 19);
		*(char *)(g30 + 64) = 0;
		// branch -> 0x99c68
	}
	// 0x99c68
	return result;
}

// Address range: 0x99c7c - 0x99dcc
int32_t function_99c7c(int32_t result, int32_t a2)
{
	int32_t v1 = result;                     // 0x99c88
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x99c8c
	g36 = v2;
	if (v1 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		// 0x99ca8
		g34 = 1;
		result = function_324ec(1);
		v2 = g36;
		// branch -> 0x99cb0
	}
	int32_t v3 = 120 * a2;     // 0x99cb0
	int32_t v4 = v3 + v2 + 72; // 0x99cb8
	if (*(int32_t *)v4 == 0) {
		// 0x99db8
		return result;
	}
	int32_t v5 = *(int32_t *)(g23 - 0x77a8);                     // 0x99cd0
	int32_t v6 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x99cd4
	g37 = 100;
	int32_t result2 = random(-102); // 0x99cf4
	if (result2 > 2 * *(int32_t *)(v5 + 0x55ec * v1 + 368) + -5 * v6) {
		// 0x99db8
		return result2;
	}
	int32_t v7 = *(int32_t *)(g23 - 0x7194); // 0x99d00
	result = v7;
	int32_t v8 = v3 + g36;                                // 0x99d04
	int32_t v9 = *(int32_t *)v7;                          // 0x99d0c
	int32_t v10 = *(int32_t *)(g23 - 0x7190);             // 0x99d10
	int32_t v11 = v9;                                     // ctr
	int32_t v12 = *(int32_t *)*(int32_t *)(g23 - 0x7684); // 0x99d1c
	uint32_t v13;                                         // 0x99d9c
	if (v9 >= 1) {
		while (true) {
			int32_t v14 = *(int32_t *)v10; // 0x99d24
			result = v14;
			int32_t v15 = 120 * v14 + g36; // 0x99d30
			int32_t *v16 = (int32_t *)v15; // 0x99d30
			int32_t v17 = 0;
			if (*v16 == 53) {
				// 0x99d3c
				v17 = 1;
				// branch -> 0x99d40
			}
			// 0x99d40
			int32_t v18; // 0x99d98
			if (*v16 == 54) {
				// 0x99d58
				// branch -> 0x99d60
			} else {
				// 0x99d58
				if (v17 == 0) {
					v18 = v9;
				lab_0x99d94_2:;
					int32_t v19 = v18 - 1; // 0x99d98
					v11 = v19;
					if (v19 == 0) {
						// 0x99d9c
						// branch -> 0x99d9c
						// 0x99d9c
						v13 = *(int32_t *)v8;
						if (v13 < 68) {
							// 0x99db8
							return result;
						}
						// 0x99da8
						if (v13 <= 70) {
							// 0x99db0
							*(int32_t *)v4 = 0;
							// branch -> 0x99db8
						}
						// 0x99db8
						return result;
					}
					// 0x99d94
					v9 = v19;
					v10 += 4;
					// branch -> 0x99d24
					continue;
				}
			}
			int32_t v20 = *(int32_t *)(v15 + 92);                           // 0x99d64
			char v21 = *(char *)(v12 + v20 + 112 * *(int32_t *)(v15 + 88)); // 0x99d70
			int32_t v22 = v21;                                              // 0x99d74
			result = v22;
			if (v22 - 1 != a2) {
				v18 = v9;
				goto lab_0x99d94_2;
			}
			// 0x99d84
			*(int32_t *)(v15 + 100) = 1;
			*(int32_t *)(v8 + 72) = 0;
			v18 = v11;
			// branch -> 0x99d94
			goto lab_0x99d94_2;
		}
	}
	// 0x99d9c
	v13 = *(int32_t *)v8;
	if (v13 < 68) {
		// 0x99db8
		return result;
	}
	// 0x99da8
	if (v13 <= 70) {
		// 0x99db0
		*(int32_t *)v4 = 0;
		// branch -> 0x99db8
	}
	// 0x99db8
	return result;
}

// Address range: 0x99dcc - 0x99e00
int32_t function_99dcc(int32_t a1)
{
	int32_t v1 = g23 + 0x3858; // 0x99dd8
	int32_t result = 0;        // 0x99ddc
	// branch -> 0x99de0
	while (true) {
		// 0x99de0
		if (*(int32_t *)v1 != 0) {
			// 0x99dec
			if (*(int32_t *)(v1 + 56) == a1) {
				// 0x99df8
				return result;
			}
		}
		// 0x99dd8
		v1 += 76;
		result++;
		// branch -> 0x99de0
	}
}

// Address range: 0x99e00 - 0x9b800
int32_t function_99e00(int32_t result, int32_t a2, int32_t a3)
{
	g36 = result;
	g33 = a2;
	g35 = *(int32_t *)(g23 - 0x77ac);
	g32 = *(int32_t *)(g23 - 0x77a8);
	g24 = *(int32_t *)(g23 - 0x7194);
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x99e2c
	g25 = v1;
	int32_t *v2 = (int32_t *)*(int32_t *)(g23 - 0x7704); // 0x99e4c
	if (*v2 != 0) {
		// 0x99e58
		result = *(int32_t *)(g23 - 0x7708);
		*v2 = 0;
		*(int32_t *)result = 0;
		v1 = g25;
		a2 = g33;
		// branch -> 0x99e68
	}
	int32_t v3 = 120 * a2; // 0x99e68
	g20 = v3;
	int32_t v4 = v3 + v1; // 0x99e6c
	int32_t v5 = v4 + 64; // 0x99e70
	if (*(char *)v5 == 0) {
		// 0x9b7ec
		return result;
	}
	// 0x99e7c
	g31 = v4;
	g34 = *(int32_t *)(v4 + 84);
	SetRndSeed();
	*(char *)v5 = 0;
	int32_t v6 = g31; // 0x99e9c
	if (*(int32_t *)*(int32_t *)(g23 - 0x7070) == 0) {
		g34 = a3;
		g38 = *(int32_t *)(v6 + 8);
		PlaySfxLoc(a3);
		*(int32_t *)(g31 + 16) = 1;
		*(int32_t *)(g31 + 24) = 1;
		// branch -> 0x99ec8
	} else {
		// 0x99ebc
		*(int32_t *)(v6 + 36) = *(int32_t *)(v6 + 32);
		*(int32_t *)(g31 + 16) = 0;
		// branch -> 0x99ec8
	}
	uint32_t v7 = *(int32_t *)(g20 + g25 + 88); // 0x99ecc
	if (v7 <= 25) {
		// 0x99ed8
		return *(int32_t *)(*(int32_t *)(g23 - 0x5b40) + 4 * v7);
	}
	// 0x9b7b4
	CalcPlrInv(g36, 1);
	int32_t v8 = *(int32_t *)(g23 - 0x76bc); // 0x9b7c0
	result = v8;
	*(int32_t *)v8 = 255;
	uint32_t v9 = *(int32_t *)g35; // 0x9b7cc
	if (g36 == v9) {
		// 0x9b7d8
		result = function_8b434(0, 46, v9 % 0x10000, g33 % 0x10000);
		// branch -> 0x9b7ec
	}
	// 0x9b7ec
	return result;
}

// Address range: 0x9b800 - 0x9b910
int32_t function_9b800(int32_t result, int32_t a2, int32_t a3)
{
	// 0x9b800
	g30 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x9b80c
	g36 = v1;
	int32_t v2 = 120 * a2; // 0x9b810
	g33 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7070); // 0x9b814
	g35 = v3;
	g31 = a3;
	int32_t v4 = v1 + v2; // 0x9b820
	int32_t v5 = v4 + 64; // 0x9b82c
	g32 = v5;
	if (*(char *)v5 == 0) {
		// 0x9b8fc
		return result;
	}
	if (*(int32_t *)v3 == 0) {
		// 0x9b844
		g34 = 57;
		g38 = *(int32_t *)(v4 + 8);
		PlaySfxLoc(57);
		v5 = g32;
		v2 = g33;
		v1 = g36;
		// branch -> 0x9b858
	}
	// 0x9b858
	g36 = v1 + v2;
	*(char *)v5 = 0;
	int32_t *v6 = (int32_t *)(g36 + 36); // 0x9b864
	int32_t v7 = *v6;                    // 0x9b864
	*v6 = v7 + 2;
	int32_t result2; // 0x9b90c
	if (*(int32_t *)g35 == 0) {
		// 0x9b87c
		g34 = *(int32_t *)(g36 + 84);
		SetRndSeed();
		g37 = 5;
		int32_t v8 = random(-95);           // 0x9b88c
		int32_t v9 = g36;                   // 0x9b8bc
		int32_t v10 = *(int32_t *)(v9 + 4); // 0x9b8bc
		int32_t v11 = g31;                  // 0x9b8c0
		int32_t v12 = *(int32_t *)(v9 + 8); // 0x9b8c4
		if (v8 == 0) {
			// 0x9b8bc
			function_60490(v10, v12, 0, 0, 24, v11, 0);
			// branch -> 0x9b8dc
		} else {
			// 0x9b898
			function_60490(v10, v12, 0, 0, 21, v11, 0);
			// branch -> 0x9b8dc
		}
		int32_t v13 = *(int32_t *)(g23 - 0x77ac); // 0x9b8dc
		if (g29 == *(int32_t *)v13) {
			// 0x9b8ec
			result2 = NetSendCmdParam1(0, 45, g30 % 0x10000);
			// branch -> 0x9b8fc
		} else {
			result2 = v13;
		}
	} else {
		// 0x9b858
		result2 = v7;
		// branch -> 0x9b8fc
	}
	// 0x9b8fc
	return result2;
}

// Address range: 0x9b910 - 0x9ba4c
int32_t function_9b910(int32_t result, int32_t a2, int32_t a3)
{
	// 0x9b910
	g35 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x9b91c
	g32 = v1;
	int32_t v2 = 120 * a2; // 0x9b920
	g30 = v2;
	g36 = *(int32_t *)(g23 - 0x7754);
	g33 = result;
	int32_t v3 = *(int32_t *)(g23 - 0x7070); // 0x9b92c
	g31 = v3;
	g28 = a3;
	int32_t v4 = v1 + v2; // 0x9b934
	int32_t v5 = v4 + 64; // 0x9b940
	g29 = v5;
	if (*(char *)v5 == 0) {
		// 0x9ba38
		return result;
	}
	if (*(int32_t *)v3 == 0) {
		// 0x9b958
		g34 = 57;
		g38 = *(int32_t *)(v4 + 8);
		PlaySfxLoc(57);
		v5 = g29;
		v2 = g30;
		v1 = g32;
		// branch -> 0x9b96c
	}
	int32_t v6 = v1 + v2; // r28
	*(char *)v5 = 0;
	int32_t *v7 = (int32_t *)(v6 + 36); // 0x9b978
	int32_t v8 = *v7;                   // 0x9b978
	*v7 = v8 - 2;
	int32_t result2; // 0x9ba48
	if (*(int32_t *)g31 == 0) {
		// 0x9b990
		g34 = *(int32_t *)(v6 + 84);
		SetRndSeed();
		int32_t v9 = *(int32_t *)(v6 + 8); // 0x9b9a0
		function_60490(*(int32_t *)(v6 + 4), v9, 0, 0, 24, g28, 0);
		if (QuestStatus(3) != 0) {
			int32_t v10 = g36;                                           // 0x9b9cc
			int32_t v11 = *(int32_t *)(*(int32_t *)(g23 - 0x708c) + 68); // 0x9b9d0
			if (*(int32_t *)(v10 + 1148) == v11) {
				// 0x9b9dc
				if (*(char *)(v10 + 1092) == -1) {
					// 0x9b9e8
					if (*(int32_t *)(v10 + 1080) != 0) {
						// 0x9b9f4
						*(int32_t *)(v10 + 1140) = 149;
						function_7c124(0, *(int32_t *)(g36 + 1000));
						*(char *)(g36 + 936) = 5;
						*(int32_t *)(g36 + 932) = 17;
						// branch -> 0x9ba18
					}
				}
			}
		}
		int32_t v12 = *(int32_t *)(g23 - 0x77ac); // 0x9ba18
		if (g33 == *(int32_t *)v12) {
			// 0x9ba28
			result2 = NetSendCmdParam1(0, 45, g35 % 0x10000);
			// branch -> 0x9ba38
		} else {
			result2 = v12;
		}
	} else {
		// 0x9b96c
		result2 = v8;
		// branch -> 0x9ba38
	}
	// 0x9ba38
	return result2;
}

// Address range: 0x9ba4c - 0x9bb08
int32_t function_9ba4c(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = 120 * a2;                   // 0x9ba64
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x9ba68
	char *v3 = (char *)(v2 + v1 + 64);       // 0x9ba80
	if (*v3 == 0) {
		// 0x9bae8
		return result;
	}
	// 0x9ba8c
	*v3 = 0;
	int32_t v4 = *(int32_t *)(g23 - 0x7070); // 0x9ba98
	int32_t result2 = v4;                    // 0x9bb04
	if (*(int32_t *)v4 == 0) {
		int32_t v5 = v1 + v2; // 0x9baa4
		g34 = *(int32_t *)(v5 + 84);
		SetRndSeed();
		function_6022c(*(int32_t *)(v5 + 4), *(int32_t *)(v5 + 8), 0, a3, 0);
		int32_t v6 = *(int32_t *)(g23 - 0x77ac); // 0x9bac8
		if (g32 == *(int32_t *)v6) {
			// 0x9bad8
			result2 = NetSendCmdParam1(0, 45, g33 % 0x10000);
			// branch -> 0x9bae8
		} else {
			result2 = v6;
		}
	}
	// 0x9bae8
	return result2;
}

// Address range: 0x9bb08 - 0x9bc80
int32_t function_9bb08(int32_t result, int32_t a2, int32_t a3)
{
	// 0x9bb08
	g35 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x9bb14
	int32_t v2 = 120 * a2;                   // 0x9bb18
	g33 = result;
	g36 = a3;
	int32_t v3 = v1 + v2;         // 0x9bb24
	char *v4 = (char *)(v3 + 64); // 0x9bb30
	if (*v4 == 0) {
		// 0x9bc6c
		return result;
	}
	// 0x9bb3c
	g32 = v3;
	*v4 = 0;
	int32_t *v5 = (int32_t *)(g32 + 36); // 0x9bb4c
	*v5 = *v5 + 1;
	int32_t v6 = *(int32_t *)(g23 - 0x7070); // 0x9bb58
	int32_t result2 = v6;                    // 0x9bc7c
	if (*(int32_t *)v6 == 0) {
		// 0x9bb64
		g34 = *(int32_t *)(g32 + 84);
		SetRndSeed();
		g37 = 2;
		int32_t v7 = random(0);                                 // 0x9bb74
		unsigned char v8 = *(char *)*(int32_t *)(g23 - 0x77e4); // 0x9bb80
		int32_t v9;                                             // 0x9bc4c
		if (v8 > 5) {
			// 0x9bbb8
			if (v8 <= 9) {
				int32_t v10 = g32;                   // 0x9bbc0
				int32_t v11 = *(int32_t *)(v10 + 8); // 0x9bbc8
				function_60490(*(int32_t *)(v10 + 4), v11, v7, 8, 0, g36, 0);
				// branch -> 0x9bc4c
				// 0x9bc4c
				v9 = *(int32_t *)(g23 - 0x77ac);
				result2 = v9;
				if (g33 == *(int32_t *)v9) {
					// 0x9bc5c
					result2 = NetSendCmdParam1(0, 45, g35 % 0x10000);
					// branch -> 0x9bc6c
				}
				// 0x9bc6c
				return result2;
			}
			// 0x9bbe8
			if (v8 > 12) {
				// 0x9bc20
				if (v8 <= 16) {
					int32_t v12 = v2 + v1; // 0x9bc28
					function_60490(*(int32_t *)(v12 + 4), *(int32_t *)(v12 + 8), 1, 9, 0, g36, 0);
					// branch -> 0x9bc4c
				}
			} else {
				int32_t v13 = v2 + v1; // 0x9bbf0
				function_60490(*(int32_t *)(v13 + 4), *(int32_t *)(v13 + 8), 0, 9, 0, g36, 0);
				// branch -> 0x9bc4c
			}
			// 0x9bc4c
			v9 = *(int32_t *)(g23 - 0x77ac);
			result2 = v9;
			if (g33 == *(int32_t *)v9) {
				// 0x9bc5c
				result2 = NetSendCmdParam1(0, 45, g35 % 0x10000);
				// branch -> 0x9bc6c
			}
			// 0x9bc6c
			return result2;
		}
		int32_t v14 = g32; // 0x9bb8c
		function_60490(*(int32_t *)(v14 + 4), *(int32_t *)(v14 + 8), 1, 6, 0, g36, 0);
		// branch -> 0x9bc4c
		// 0x9bc4c
		v9 = *(int32_t *)(g23 - 0x77ac);
		if (g33 == *(int32_t *)v9) {
			// 0x9bc5c
			result2 = NetSendCmdParam1(0, 45, g35 % 0x10000);
			// branch -> 0x9bc6c
		} else {
			result2 = v9;
		}
	}
	// 0x9bc6c
	return result2;
}

// Address range: 0x9bc80 - 0x9bd54
int32_t function_9bc80(int32_t a1)
{
	int32_t v1 = g10;                        // 0x9bc84
	int32_t v2 = *(int32_t *)(g23 - 0x5b2c); // r27
	int32_t v3 = 0;                          // r26
	g32 = *(int32_t *)(g23 - 0x5b28);
	g33 = *(int32_t *)(g23 - 0x5b24);
	g35 = *(int32_t *)(g23 - 0x77f0);
	g36 = *(int32_t *)(g23 - 0x77e4);
	// branch -> 0x9bcac
	while (true) {
		// 0x9bcac
		g37 = 26;
		int32_t result = random(0);            // 0x9bcb4
		uint32_t v4 = (int32_t) * (char *)g36; // 0x9bcbc
		int32_t v5;
		if (v4 >= (int32_t) * (char *)(g33 + result)) {
			// 0x9bccc
			if (v4 <= (int32_t) * (char *)(g32 + result)) {
				// 0x9bcdc
				if (result != 8) {
					// 0x9bce4
					v3 = 1;
					v5 = 1;
					// branch -> 0x9bce8
				lab_0x9bce8_3:
					// 0x9bce8
					if (v5 != 0) {
						// 0x9bcf0
						if (*(char *)g35 == 1) {
							// 0x9bd1c
							if (*(char *)(v2 + result) != 2) {
								// 0x9bd40
								g10 = v1;
								return result;
							}
							// 0x9bd2c
							v3 = 0;
							// branch -> 0x9bd38
						} else {
							// 0x9bcfc
							if (*(char *)(v2 + result) != 1) {
								// 0x9bd14
								// branch -> 0x9bd40
								// 0x9bd40
								g10 = v1;
								return result;
							}
							// 0x9bd0c
							v3 = 0;
							// branch -> 0x9bd38
							// 0x9bd38
							// branch -> 0x9bcac
							continue;
						}
						// 0x9bd38
						// branch -> 0x9bcac
						continue;
					}
					// 0x9bd38
					// branch -> 0x9bcac
					continue;
				}
				// 0x9bce8
				v5 = v3;
				// branch -> 0x9bce8
				goto lab_0x9bce8_3;
			}
			// 0x9bce8
			v5 = v3;
			// branch -> 0x9bce8
			goto lab_0x9bce8_3;
		}
		// 0x9bce8
		v5 = v3;
		// branch -> 0x9bce8
		goto lab_0x9bce8_3;
	}
}

// Address range: 0x9bd54 - 0x9bde0
int32_t function_9bd54(int32_t a1, int32_t a2, int32_t a3)
{
	g34 = *(int32_t *)(*(int32_t *)(g23 - 0x7688) + 120 * a2 + 84);
	SetRndSeed();
	int32_t v1 = function_9bc80(a2); // 0x9bd94
	*(int32_t *)(g36 + 88) = v1;
	function_99e00(g32, g33, g35);
	int32_t result = *(int32_t *)(g23 - 0x76bc); // r3
	*(int32_t *)(g36 + 24) = 2;
	*(int32_t *)result = 255;
	return result;
}

// Address range: 0x9bde0 - 0x9be74
int32_t function_9bde0(int32_t a1, int32_t a2, int32_t a3)
{
	g34 = *(int32_t *)(*(int32_t *)(g23 - 0x7688) + 120 * a2 + 84);
	SetRndSeed();
	int32_t v1 = function_9bc80(a2); // 0x9be20
	*(int32_t *)(g36 + 88) = v1;
	function_99e00(g32, g33, g35);
	int32_t result = *(int32_t *)(g23 - 0x76bc); // r3
	*(int32_t *)(g36 + 36) = 3;
	*(int32_t *)(g36 + 16) = 0;
	*(int32_t *)result = 255;
	return result;
}

// Address range: 0x9be74 - 0x9c24c
int32_t function_9be74(int32_t a1, int32_t a2)
{
	g31 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x9be80
	int32_t v2 = 120 * a2;                   // 0x9be84
	g28 = *(int32_t *)(g23 - 0x7070);
	g30 = a1;
	g33 = *(int32_t *)(g23 - 0x77ac);
	int32_t v3 = v1 + v2; // 0x9be94
	g36 = v3;
	g35 = *(int32_t *)(g23 - 0x77a8);
	g32 = 0;
	g34 = *(int32_t *)(v3 + 84);
	SetRndSeed();
	int32_t v4 = *(int32_t *)(v2 + v1); // 0x9beb0
	int32_t result;                     // 0x9c248
	if (v4 == 76) {
		// 0x9bee4
		if (*(int32_t *)g28 != 0) {
			// 0x9bef0
			// branch -> 0x9c238
			// 0x9c238
			return 0;
		}
		int32_t v5 = *(int32_t *)g33; // 0x9bef8
		if (g30 == v5) {
			int32_t v6 = 0x55ec * v5; // 0x9bf0c
			g27 = v6;
			int32_t v7 = g35 + v6; // 0x9bf10
			int32_t v8 = v7 + 424; // 0x9bf18
			g28 = v8;
			int32_t v9 = v7 + 428; // 0x9bf1c
			g29 = v9;
			if (*(int32_t *)v8 < *(int32_t *)v9) {
				// 0x9bf28
				g34 = 109;
				g38 = *(int32_t *)(g36 + 8);
				PlaySfxLoc(109);
				int32_t *v10 = (int32_t *)g28; // 0x9bf38
				*v10 = *v10 + 64;
				int32_t v11 = g27 + g35 + 416; // 0x9bf48
				int32_t *v12 = (int32_t *)v11; // 0x9bf48
				*v12 = *v12 + 64;
				int32_t *v13 = (int32_t *)g28; // 0x9bf54
				int32_t v14 = *(int32_t *)g29; // 0x9bf58
				if (*v13 > v14) {
					// 0x9bf64
					*v13 = v14;
					*(int32_t *)v11 = *(int32_t *)(g27 + g35 + 420);
					// branch -> 0x9bf74
				}
				// 0x9bf74
				g32 = 1;
				// branch -> 0x9c228
			} else {
				// 0x9bf84
				g34 = 109;
				g38 = *(int32_t *)(g36 + 8);
				PlaySfxLoc(109);
				// branch -> 0x9c228
			}
			// 0x9c228
			*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
			result = g32;
			// branch -> 0x9c238
		} else {
			// 0x9bf04
			result = 0;
			// branch -> 0x9c238
		}
		// 0x9c238
		return result;
	}
	// 0x9bebc
	if (v4 <= 76) {
		// 0x9bec0
		if (v4 == 66) {
			// 0x9bf98
			if (*(int32_t *)g28 != 0) {
				// 0x9bfa4
				// branch -> 0x9c238
				// 0x9c238
				return 0;
			}
			int32_t v15 = *(int32_t *)g33; // 0x9bfac
			if (g30 == v15) {
				int32_t v16 = 0x55ec * v15; // 0x9bfc0
				g27 = v16;
				int32_t v17 = g35 + v16; // 0x9bfc4
				int32_t v18 = v17 + 404; // 0x9bfcc
				g28 = v18;
				int32_t v19 = v17 + 408; // 0x9bfd0
				g29 = v19;
				if (*(int32_t *)v18 < *(int32_t *)v19) {
					// 0x9bfdc
					g34 = 109;
					g38 = *(int32_t *)(g36 + 8);
					PlaySfxLoc(109);
					int32_t *v20 = (int32_t *)g28; // 0x9bfec
					*v20 = *v20 + 64;
					int32_t v21 = g27 + g35 + 396; // 0x9bffc
					int32_t *v22 = (int32_t *)v21; // 0x9bffc
					*v22 = *v22 + 64;
					int32_t *v23 = (int32_t *)g28; // 0x9c008
					int32_t v24 = *(int32_t *)g29; // 0x9c00c
					if (*v23 > v24) {
						// 0x9c018
						*v23 = v24;
						*(int32_t *)v21 = *(int32_t *)(g27 + g35 + 400);
						// branch -> 0x9c028
					}
					// 0x9c028
					g32 = 1;
					// branch -> 0x9c228
				} else {
					// 0x9c038
					g34 = 109;
					g38 = *(int32_t *)(g36 + 8);
					PlaySfxLoc(109);
					// branch -> 0x9c228
				}
				// 0x9c228
				*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
				result = g32;
				// branch -> 0x9c238
			} else {
				// 0x9bfb8
				result = 0;
				// branch -> 0x9c238
			}
			// 0x9c238
			return result;
		}
		// 0x9c228
		*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
		// branch -> 0x9c238
		// 0x9c238
		return g32;
	}
	// 0x9becc
	if (v4 == 82) {
		int32_t v25 = g36;      // 0x9c0f8
		int32_t v26 = v25 + 64; // 0x9c0f8
		g27 = v26;
		if (*(char *)v26 != 0) {
			// 0x9c108
			g32 = -1;
			g35 = -1;
			g26 = 0;
			g29 = 0;
			if (*(int32_t *)g28 == 0) {
				// 0x9c124
				g34 = 109;
				g38 = *(int32_t *)(v25 + 8);
				PlaySfxLoc(109);
				v26 = g27;
				// branch -> 0x9c134
			}
			// 0x9c134
			*(char *)v26 = 0;
			if (*(int32_t *)g28 != 0) {
				// 0x9c148
				// branch -> 0x9c238
				// 0x9c238
				return 0;
			}
			// 0x9c150
			if (g30 == *(int32_t *)g33) {
				while (true) {
					// 0x9c164
					g37 = 4;
					int32_t v27 = random(0); // 0x9c16c
					g27 = v27;
					if (g35 == v27) {
						// 0x9c1ec
						// branch -> 0x9c1ec
					} else {
						// 0x9c17c
						int32_t v28; // 0x9c1e4
						if (v27 == 2) {
							// 0x9c1c4
							ModifyPlrDex(g30, g32);
							// branch -> 0x9c1e0
						} else {
							// 0x9c184
							if (v27 > 2) {
								// 0x9c198
								if (v27 == 3) {
									// 0x9c1d4
									ModifyPlrVit(g30, g32);
									// branch -> 0x9c1e0
								}
							} else {
								// 0x9c188
								if (v27 == 0) {
									// 0x9c1a4
									g37 = g32;
									ModifyPlrStr(g30);
									// branch -> 0x9c1e0
								} else {
									// 0x9c190
									if (v27 > 0) {
										// 0x9c1b4
										ModifyPlrMag(g30, g32);
										// branch -> 0x9c1e0
									}
								}
								// 0x9c1e0
								g35 = g27;
								v28 = g29 + 1;
								g29 = v28;
								g32 = 1;
								// branch -> 0x9c1ec
							lab_0x9c1ec_2:;
								// 0x9c1ec
								int32_t v29; // 0x9c1f8
								if (v28 < 2) {
								lab_0x9c1f8:
									// 0x9c1f8
									v29 = g26;
									// branch -> 0x9c1f8
								} else {
								lab_0x9c1f4:
									// 0x9c1f4
									g26 = 1;
									v29 = 1;
									// branch -> 0x9c1f8
								}
								// 0x9c1f8
								if (v29 != 0) {
									// break -> 0x9c200
									break;
								}
								// continue -> 0x9c164
								continue;
							}
							// 0x9c1e0
							g35 = g27;
							v28 = g29 + 1;
							g29 = v28;
							g32 = 1;
							// branch -> 0x9c1ec
							goto lab_0x9c1ec_2;
						}
						// 0x9c1e0
						g35 = g27;
						v28 = g29 + 1;
						g29 = v28;
						g32 = 1;
						// branch -> 0x9c1ec
						goto lab_0x9c1ec_2;
					}
					// 0x9c1ec
					if (g29 < 2) {
						goto lab_0x9c1f8;
					}
					goto lab_0x9c1f4;
				}
				// 0x9c200
				function_aa8a0(g30);
				g32 = 1;
				if (g30 == *(int32_t *)g33) {
					// 0x9c218
					NetSendCmdParam1(0, 45, g31 % 0x10000);
					// branch -> 0x9c228
				}
				// 0x9c228
				*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
				result = g32;
				// branch -> 0x9c238
			} else {
				// 0x9c15c
				result = 0;
				// branch -> 0x9c238
			}
			// 0x9c238
			return result;
		}
	} else {
		// 0x9bed4
		if (v4 <= 82) {
			// 0x9bed8
			if (v4 > 80) {
				int32_t v30 = g36;      // 0x9c04c
				int32_t v31 = v30 + 64; // 0x9c04c
				g27 = v31;
				if (*(char *)v31 != 0) {
					if (*(int32_t *)g28 == 0) {
						// 0x9c068
						g34 = 109;
						g38 = *(int32_t *)(v30 + 8);
						PlaySfxLoc(109);
						v31 = g27;
						// branch -> 0x9c078
					}
					// 0x9c078
					*(char *)v31 = 0;
					if (*(int32_t *)g28 == 0) {
						int32_t v32 = g30;                    // 0x9c094
						int32_t v33 = g35 + 0x55ec * v32;     // 0x9c09c
						int32_t v34 = *(int32_t *)(v33 + 60); // 0x9c0a0
						g13 = v32;
						int32_t v35 = *(int32_t *)(v33 + 56);  // 0x9c0a8
						int32_t v36 = *(int32_t *)(v33 + 112); // 0x9c0cc
						int32_t *v37;
						AddMissile(v35, v34, v36, 39, -1, 39, -1, (int32_t)&v37, (int32_t)&v37);
						g32 = 1;
						if (g30 == *(int32_t *)g33) {
							// 0x9c0e4
							NetSendCmdParam1(0, 45, g31 % 0x10000);
							// branch -> 0x9c228
						}
						// 0x9c228
						*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
						result = g32;
						// branch -> 0x9c238
					} else {
						// 0x9c08c
						result = 0;
						// branch -> 0x9c238
					}
					// 0x9c238
					return result;
				}
			}
		}
	}
	// 0x9c228
	*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
	// branch -> 0x9c238
	// 0x9c238
	return g32;
}

// Address range: 0x9c24c - 0x9c390
int32_t function_9c24c(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x9c258
	int32_t v2 = 120 * a2;                   // 0x9c25c
	int32_t v3 = v1 + v2;                    // 0x9c268
	int32_t v4 = v3 + 64;                    // 0x9c274
	if (*(char *)v4 == 0) {
		// 0x9c37c
		return result;
	}
	// 0x9c280
	g34 = *(int32_t *)(v3 + 84);
	SetRndSeed();
	g37 = 4;
	int32_t v5 = random(0); // 0x9c294
	int32_t v6 = v5 + 1;    // 0x9c298
	int32_t v7;             // r5
	int32_t v8;             // 0x9c2fc
	int32_t v9;             // 0x9c33c
	int32_t v10;            // 0x9c340
	int32_t v11;            // 0x9c348
	int32_t result2;        // 0x9c38c
	int32_t *v12;           // 0x9c2f0
	int32_t v13;            // 0x9c33c
	int32_t v14;            // 0x9c344
	int32_t v15;            // 0x9c35c
	if (v6 == 3) {
		// 0x9c2d4
		g36 = 3;
		// branch -> 0x9c2e0
		// 0x9c2e0
		v7 = v2 + v1;
		*(char *)v4 = 0;
		v12 = (int32_t *)(v7 + 36);
		*v12 = *v12 + 1;
		v8 = *(int32_t *)(g23 - 0x7070);
		result2 = v8;
		if (*(int32_t *)v8 == 0) {
			// 0x9c308
			v9 = v7;
			v13 = *(int32_t *)(v9 + 4);
			v10 = g36;
			v14 = *(int32_t *)(v9 + 8);
			v11 = a3;
			if ((*(char *)*(int32_t *)(g23 - 0x7794) || 1) == 1) {
				// 0x9c33c
				function_60490(v13, v14, 0, v10, 0, v11, 0);
				// branch -> 0x9c35c
			} else {
				// 0x9c318
				function_60490(v13, v14, 1, v10, 0, v11, 0);
				// branch -> 0x9c35c
			}
			// 0x9c35c
			v15 = *(int32_t *)(g23 - 0x77ac);
			if (g32 == *(int32_t *)v15) {
				// 0x9c36c
				result2 = NetSendCmdParam1(0, 45, g33 % 0x10000);
				// branch -> 0x9c37c
			} else {
				result2 = v15;
			}
		}
		// 0x9c37c
		return result2;
	}
	// 0x9c2a4
	if (v6 > 3) {
		// 0x9c2b8
		if (v6 == 4) {
			// 0x9c2dc
			g36 = 4;
			// branch -> 0x9c2e0
		}
		// 0x9c2e0
		v7 = v2 + v1;
		*(char *)v4 = 0;
		v12 = (int32_t *)(v7 + 36);
		*v12 = *v12 + 1;
		v8 = *(int32_t *)(g23 - 0x7070);
		result2 = v8;
		if (*(int32_t *)v8 == 0) {
			// 0x9c308
			v9 = v7;
			v13 = *(int32_t *)(v9 + 4);
			v10 = g36;
			v14 = *(int32_t *)(v9 + 8);
			v11 = a3;
			if ((*(char *)*(int32_t *)(g23 - 0x7794) || 1) == 1) {
				// 0x9c33c
				function_60490(v13, v14, 0, v10, 0, v11, 0);
				// branch -> 0x9c35c
			} else {
				// 0x9c318
				function_60490(v13, v14, 1, v10, 0, v11, 0);
				// branch -> 0x9c35c
			}
			// 0x9c35c
			v15 = *(int32_t *)(g23 - 0x77ac);
			if (g32 == *(int32_t *)v15) {
				// 0x9c36c
				result2 = NetSendCmdParam1(0, 45, g33 % 0x10000);
				// branch -> 0x9c37c
			} else {
				result2 = v15;
			}
		}
		// 0x9c37c
		return result2;
	}
	// 0x9c2a8
	if (v5 == 0) {
		// 0x9c2c4
		g36 = 1;
		// branch -> 0x9c2e0
	} else {
		// 0x9c2b0
		if (v6 > 1) {
			// 0x9c2cc
			g36 = 2;
			// branch -> 0x9c2e0
		}
	}
	// 0x9c2e0
	v7 = v2 + v1;
	*(char *)v4 = 0;
	v12 = (int32_t *)(v7 + 36);
	*v12 = *v12 + 1;
	v8 = *(int32_t *)(g23 - 0x7070);
	result2 = v8;
	if (*(int32_t *)v8 == 0) {
		// 0x9c308
		v9 = v7;
		v13 = *(int32_t *)(v9 + 4);
		v10 = g36;
		v14 = *(int32_t *)(v9 + 8);
		v11 = a3;
		if ((*(char *)*(int32_t *)(g23 - 0x7794) || 1) == 1) {
			// 0x9c33c
			function_60490(v13, v14, 0, v10, 0, v11, 0);
			// branch -> 0x9c35c
		} else {
			// 0x9c318
			function_60490(v13, v14, 1, v10, 0, v11, 0);
			// branch -> 0x9c35c
		}
		// 0x9c35c
		v15 = *(int32_t *)(g23 - 0x77ac);
		if (g32 == *(int32_t *)v15) {
			// 0x9c36c
			result2 = NetSendCmdParam1(0, 45, g33 % 0x10000);
			// branch -> 0x9c37c
		} else {
			result2 = v15;
		}
	}
	// 0x9c37c
	return result2;
}

// Address range: 0x9c390 - 0x9c438
int32_t function_9c390(int32_t result, int32_t a2)
{
	g35 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x7688) + 120 * a2; // 0x9c3b0
	g36 = v1;
	if (*(char *)(v1 + 64) == 0) {
		// 0x9c420
		return result;
	}
	// 0x9c3c0
	if (*(int32_t *)*(int32_t *)(g23 - 0x7070) == 0) {
		// 0x9c3d0
		if (*(char *)*(int32_t *)(g23 - 0x7730) == 0) {
			// 0x9c3e0
			if (result == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x9c3f0
				g34 = 57;
				*(int32_t *)(v1 + 36) = *(int32_t *)(v1 + 100);
				g38 = *(int32_t *)(g36 + 8);
				PlaySfxLoc(57);
				g34 = *(int32_t *)(g36 + 92);
				function_6c63c();
				result = NetSendCmdParam1(0, 45, g35 % 0x10000);
				// branch -> 0x9c420
			}
		}
	}
	// 0x9c420
	return result;
}

// Address range: 0x9c438 - 0x9c4e0
int32_t function_9c438(int32_t result, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688) + 120 * a2; // 0x9c44c
	int32_t v2 = v1 + 64;                               // 0x9c450
	if (*(char *)v2 == 0) {
		// 0x9c4d0
		return result;
	}
	// 0x9c45c
	if (*(int32_t *)*(int32_t *)(g23 - 0x7070) == 0) {
		// 0x9c46c
		if (*(char *)*(int32_t *)(g23 - 0x7730) == 0) {
			// 0x9c47c
			if (result == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				int32_t *v3 = (int32_t *)(v1 + 36); // 0x9c494
				*v3 = *v3 + 1;
				*(char *)v2 = (char)0;
				int32_t v4 = *(int32_t *)(v1 + 4); // 0x9c4ac
				int32_t v5 = *(int32_t *)(v1 + 8); // 0x9c4b0
				int32_t v6 = 0;                    // bp-4
				int32_t v7;                        // bp-8
				function_5d9b0(v4, v5, &v6, (int32_t)&v7);
				result = function_60808(33, v6, v7, 0, 0);
				// branch -> 0x9c4d0
			}
		}
	}
	// 0x9c4d0
	return result;
}

// Address range: 0x9c4e0 - 0x9c7fc
int32_t function_9c4e0(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36; // 0x9c4e0
	int32_t v2 = g35; // 0x9c4ec
	g35 = a2;
	int32_t v3 = g33; // 0x9c4f4
	g33 = a1;
	int32_t result = *(int32_t *)(g23 - 0x7688); // 0x9c520
	int32_t v4 = result + 120 * a2;              // 0x9c524
	g36 = v4;
	uint32_t v5 = *(int32_t *)v4; // 0x9c528
	if (v5 <= 97) {
		// 0x9c534
		return *(int32_t *)(*(int32_t *)(g23 - 0x5b44) + 4 * v5);
	}
	// 0x9c7e0
	g36 = v1;
	g35 = v2;
	g33 = v3;
	return result;
}

// Address range: 0x9c7fc - 0x9c8cc
int32_t SyncOpL1Door(void)
{
	int32_t v1 = g38; // 0x9c80c
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7688);                 // 0x9c810
	int32_t result = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x9c81c
	int32_t v3 = g34;                                        // 0x9c820
	if (v3 == result) {
		// 0x9c8b4
		return result;
	}
	int32_t v4 = g37; // 0x9c828
	int32_t v5 = 0;
	if (v4 == 43) {
		int32_t v6 = v2 + 120 * v1; // 0x9c838
		if (*(int32_t *)(v6 + 100) == 0) {
			// 0x9c848
			v3 = v6;
			v5 = 1;
			// branch -> 0x9c84c
		} else {
			v3 = v6;
			v5 = 0;
		}
	}
	int32_t result3 = v3; // 0x9c8c85
	int32_t v7;           // 0x9c898
	int32_t result2;      // 0x9c8c8
	int32_t v8;           // 0x9c8c84
	int32_t v9;
	if (v4 == 44) {
		int32_t v10 = v2 + 120 * v1; // 0x9c858
		if (*(int32_t *)(v10 + 100) == 1) {
			// 0x9c86c
			v9 = v10;
			// branch -> 0x9c874
			// 0x9c874
			v8 = v10;
			v7 = v9;
			if (*(int32_t *)v9 == 1) {
				// 0x9c888
				v8 = function_97940(-1, v1, 0);
				v7 = g36;
				// branch -> 0x9c898
			}
			// 0x9c898
			result2 = v8;
			if (*(int32_t *)v7 == 2) {
				// 0x9c8a4
				result2 = OperateL1RDoor(-1, g35, 0);
				// branch -> 0x9c8b4
			}
			// 0x9c8b4
			return result2;
		}
		result3 = v10;
	}
	// 0x9c86c
	if (v5 == 0) {
		// 0x9c8b4
		return result3;
	}
	// 0x9c86c
	v9 = v2 + 120 * v1;
	// branch -> 0x9c874
	// 0x9c874
	v8 = result3;
	v7 = v9;
	if (*(int32_t *)v9 == 1) {
		// 0x9c888
		v8 = function_97940(-1, v1, 0);
		v7 = g36;
		// branch -> 0x9c898
	}
	// 0x9c898
	result2 = v8;
	if (*(int32_t *)v7 == 2) {
		// 0x9c8a4
		result2 = OperateL1RDoor(-1, g35, 0);
		// branch -> 0x9c8b4
	}
	// 0x9c8b4
	return result2;
}

// Address range: 0x9c8cc - 0x9c99c
int32_t function_9c8cc(void)
{
	int32_t v1 = g38; // 0x9c8dc
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7688);                 // 0x9c8e0
	int32_t result = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x9c8ec
	int32_t v3 = g34;                                        // 0x9c8f0
	if (v3 == result) {
		// 0x9c984
		return result;
	}
	int32_t v4 = g37; // 0x9c8f8
	int32_t v5 = 0;
	if (v4 == 43) {
		int32_t v6 = v2 + 120 * v1; // 0x9c908
		if (*(int32_t *)(v6 + 100) == 0) {
			// 0x9c918
			v3 = v6;
			v5 = 1;
			// branch -> 0x9c91c
		} else {
			v3 = v6;
			v5 = 0;
		}
	}
	int32_t result3 = v3; // 0x9c9985
	int32_t v7;           // 0x9c968
	int32_t result2;      // 0x9c998
	int32_t v8;           // 0x9c9984
	int32_t v9;
	if (v4 == 44) {
		int32_t v10 = v2 + 120 * v1; // 0x9c928
		if (*(int32_t *)(v10 + 100) == 1) {
			// 0x9c93c
			v9 = v10;
			// branch -> 0x9c944
			// 0x9c944
			v8 = v10;
			v7 = v9;
			if (*(int32_t *)v9 == 42) {
				// 0x9c958
				v8 = function_97df8(-1, v1, 0);
				v7 = g36;
				// branch -> 0x9c968
			}
			// 0x9c968
			result2 = v8;
			if (*(int32_t *)v7 == 43) {
				// 0x9c974
				result2 = function_97bf8(-1, g35, 0);
				// branch -> 0x9c984
			}
			// 0x9c984
			return result2;
		}
		result3 = v10;
	}
	// 0x9c93c
	if (v5 == 0) {
		// 0x9c984
		return result3;
	}
	// 0x9c93c
	v9 = v2 + 120 * v1;
	// branch -> 0x9c944
	// 0x9c944
	v8 = result3;
	v7 = v9;
	if (*(int32_t *)v9 == 42) {
		// 0x9c958
		v8 = function_97df8(-1, v1, 0);
		v7 = g36;
		// branch -> 0x9c968
	}
	// 0x9c968
	result2 = v8;
	if (*(int32_t *)v7 == 43) {
		// 0x9c974
		result2 = function_97bf8(-1, g35, 0);
		// branch -> 0x9c984
	}
	// 0x9c984
	return result2;
}

// Address range: 0x9c99c - 0x9ca6c
int32_t function_9c99c(void)
{
	int32_t v1 = g38; // 0x9c9ac
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7688);                 // 0x9c9b0
	int32_t result = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x9c9bc
	int32_t v3 = g34;                                        // 0x9c9c0
	if (v3 == result) {
		// 0x9ca54
		return result;
	}
	int32_t v4 = g37; // 0x9c9c8
	int32_t v5 = 0;
	if (v4 == 43) {
		int32_t v6 = v2 + 120 * v1; // 0x9c9d8
		if (*(int32_t *)(v6 + 100) == 0) {
			// 0x9c9e8
			v3 = v6;
			v5 = 1;
			// branch -> 0x9c9ec
		} else {
			v3 = v6;
			v5 = 0;
		}
	}
	int32_t result3 = v3; // 0x9ca685
	int32_t v7;           // 0x9ca38
	int32_t result2;      // 0x9ca68
	int32_t v8;           // 0x9ca684
	int32_t v9;
	if (v4 == 44) {
		int32_t v10 = v2 + 120 * v1; // 0x9c9f8
		if (*(int32_t *)(v10 + 100) == 1) {
			// 0x9ca0c
			v9 = v10;
			// branch -> 0x9ca14
			// 0x9ca14
			v8 = v10;
			v7 = v9;
			if (*(int32_t *)v9 == 74) {
				// 0x9ca28
				v8 = function_981f8(-1, v1, 0);
				v7 = g36;
				// branch -> 0x9ca38
			}
			// 0x9ca38
			result2 = v8;
			if (*(int32_t *)v7 == 75) {
				// 0x9ca44
				result2 = OperateL3RDoor(-1, g35, 0);
				// branch -> 0x9ca54
			}
			// 0x9ca54
			return result2;
		}
		result3 = v10;
	}
	// 0x9ca0c
	if (v5 == 0) {
		// 0x9ca54
		return result3;
	}
	// 0x9ca0c
	v9 = v2 + 120 * v1;
	// branch -> 0x9ca14
	// 0x9ca14
	v8 = result3;
	v7 = v9;
	if (*(int32_t *)v9 == 74) {
		// 0x9ca28
		v8 = function_981f8(-1, v1, 0);
		v7 = g36;
		// branch -> 0x9ca38
	}
	// 0x9ca38
	result2 = v8;
	if (*(int32_t *)v7 == 75) {
		// 0x9ca44
		result2 = OperateL3RDoor(-1, g35, 0);
		// branch -> 0x9ca54
	}
	// 0x9ca54
	return result2;
}

// Address range: 0x9ca6c - 0x9cbc8
int32_t function_9ca6c(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x9ca6c
	if (*(int32_t *)(120 * a1 + *(int32_t *)(g23 - 0x7688)) > 97) {
		// 0x9cbb8
		return g34;
	}
	// 0x9ca8c
	return g34;
}

// Address range: 0x9cbc8 - 0x9cce0
int32_t function_9cbc8(int32_t a1)
{
	int32_t v1 = 120 * a1; // 0x9cbcc
	g36 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x9cbdc
	g35 = v2;
	int32_t v3 = 1;       // r7
	int32_t v4 = v2 + v1; // 0x9cbe8
	*(int32_t *)(v4 + 16) = 1;
	int32_t v5 = 1; // r9
	*(int32_t *)(v4 + 36) = v3;
	*(int32_t *)(v4 + 24) = v3;
	*(int32_t *)(v4 + 56) = v3;
	*(int32_t *)(v4 + 60) = v3;
	*(char *)(v4 + 52) = (char)-1;
	*(char *)(v4 + 64) = (char)0;
	int32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x7194); // 0x9cc20
	int32_t v7 = g35;                                    // 0x9cc24
	int32_t result = *(int32_t *)(v1 + 116 + v7);        // 0x9cc24
	int32_t v8;                                          // 0x9ccb0
	int32_t v9;                                          // 0x9ccb0
	int32_t v10;                                         // 0x9ccb8
	int32_t v11;                                         // 0x9ccbc
	int32_t v12;                                         // 0x9ccc0
	int32_t result2;                                     // 0x9ccc4
	if (v6 < 1) {
		// 0x9cc84
		if (v5 == 0) {
			// 0x9ccc8
			return result;
		}
		// 0x9cc8c
		v8 = v7;
		if (*(int32_t *)*(int32_t *)(g23 - 0x7070) == 0) {
			// 0x9cc9c
			g34 = 62;
			g38 = *(int32_t *)(g36 + v7 + 8);
			PlaySfxLoc(62);
			v8 = g35;
			// branch -> 0x9ccb0
		}
		// 0x9ccb0
		v9 = g36 + v8;
		v10 = *(int32_t *)(v9 + 92);
		v11 = *(int32_t *)(v9 + 96);
		v12 = *(int32_t *)(v9 + 100);
		result2 = function_986b4(*(int32_t *)(v9 + 88), v10, v11, v12);
		// branch -> 0x9ccc8
		// 0x9ccc8
		return result2;
	}
	int32_t v13 = *(int32_t *)(g23 - 0x7190); // 0x9cc7c
	// branch -> 0x9cc34
	while (true) {
		int32_t v14 = 120 * *(int32_t *)v13 + v7; // 0x9cc3c
		int32_t v15 = *(int32_t *)v14;            // 0x9cc3c
		int32_t v16;                              // 0x9cc80
		if (v15 == 20) {
		lab_0x9cc54:
			// 0x9cc54
			if (result == *(int32_t *)(v14 + 116)) {
				// 0x9cc68
				if (*(char *)(v14 + 52) != -1) {
					// 0x9cc78
					v5 = 0;
					// branch -> 0x9cc7c
				}
			}
		} else {
			// 0x9cc48
			if (v15 <= 22) {
				goto lab_0x9cc54;
			}
			// 0x9cc7c
			v16 = v6 - 1;
			if (v16 == 0) {
				// break -> 0x9cc84
				break;
			}
			v6 = v16;
			v13 += 4;
			// continue -> 0x9cc34
			continue;
		}
		// 0x9cc7c
		v16 = v6 - 1;
		if (v16 == 0) {
			// break -> 0x9cc84
			break;
		}
		v6 = v16;
		v13 += 4;
		// continue -> 0x9cc34
	}
	// 0x9cc84
	if (v5 == 0) {
		// 0x9ccc8
		return result;
	}
	// 0x9cc8c
	v8 = v7;
	if (*(int32_t *)*(int32_t *)(g23 - 0x7070) == 0) {
		// 0x9cc9c
		g34 = 62;
		g38 = *(int32_t *)(g36 + v7 + 8);
		PlaySfxLoc(62);
		v8 = g35;
		// branch -> 0x9ccb0
	}
	// 0x9ccb0
	v9 = g36 + v8;
	v10 = *(int32_t *)(v9 + 92);
	v11 = *(int32_t *)(v9 + 96);
	v12 = *(int32_t *)(v9 + 100);
	result2 = function_986b4(*(int32_t *)(v9 + 88), v10, v11, v12);
	// branch -> 0x9ccc8
	// 0x9ccc8
	return result2;
}

// Address range: 0x9cce0 - 0x9d008
int32_t function_9cce0(int32_t result, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	// 0x9cce0
	g36 = a2;
	int32_t v1 = g10;      // 0x9cce8
	int32_t v2 = 120 * a2; // 0x9ccec
	g25 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7688); // 0x9ccf0
	g29 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7070); // r4
	g20 = a3;
	int32_t v5 = v3 + v2; // 0x9ccfc
	g28 = *(int32_t *)(g23 - 0x77ac);
	g35 = result;
	g30 = *(int32_t *)(g23 - 0x7684);
	g21 = a5;
	g31 = *(int32_t *)(g23 - 0x7680);
	g32 = *(int32_t *)(g23 - 0x767c);
	int32_t v6 = v5 + 64; // 0x9cd20
	if (*(char *)v6 == 0) {
		// 0x9cff4
		g10 = v1;
		return result;
	}
	// 0x9cd2c
	int32_t v7;      // r3
	int32_t v8;      // r5
	int32_t v9;      // 0x9cdb8
	int32_t v10;     // 0x9ce08
	int32_t v11;     // 0x9ce58
	int32_t v12;     // 0x9ce5821
	int32_t v13;     // 0x9cf1c1
	int32_t v14;     // 0x9cf2c
	int32_t v15;     // 0x9cf30
	int32_t v16;     // 0x9cf34
	int32_t v17;     // 0x9cf3410
	int32_t v18;     // 0x9cf64
	int32_t v19;     // 0x9cf68
	int32_t v20;     // 0x9d00433
	int32_t v21;     // 0x9d00434
	int32_t v22;     // 0x9cd78
	int32_t v23;     // 0x9ce14
	int32_t v24;     // 0x9ce2c
	int32_t v25;     // 0x9ce34
	int32_t v26;     // 0x9ce40
	int32_t v27;     // 0x9ce44
	int32_t v28;     // 0x9ce48
	int32_t v29;     // 0x9ce54
	int32_t v30;     // 0x9ce8424
	int32_t v31;     // 0x9cf4c
	int32_t v32;     // 0x9cf68
	int32_t v33;     // 0x9cd74
	int32_t *v34;    // 0x9cd78
	int32_t *v35;    // 0x9ce3c
	int32_t v36;     // 0x9cf84
	uint32_t v37;    // 0x9cfd4
	int32_t v38;     // 0x9cdf0
	int32_t result2; // 0x9cf34
	int32_t v39;     // 0x9cf3413
	int32_t v40;     // 0x9cfc8
	if (a4 != 0) {
		// 0x9cd34
		*(int32_t *)(v5 + 88) = 0;
		// branch -> 0x9cd74
		// 0x9cd74
		v33 = g25 + g29;
		v22 = v33 + 88;
		v34 = (int32_t *)v22;
		if (*v34 >= 1) {
			// 0x9cd84
			if (*(int32_t *)v4 == 0) {
				// 0x9cd90
				g34 = 48;
				g38 = *(int32_t *)(v33 + 8);
				result2 = PlaySfxLoc(48);
				// branch -> 0x9cff4
			} else {
				result2 = v22;
			}
			// 0x9cff4
			g10 = v1;
			return result2;
		}
		// 0x9cda8
		v8 = 0;
		g33 = v33;
		*v34 = 0;
		v7 = 1;
		v9 = g33;
		*(int32_t *)(v9 + 16) = 1;
		*(int32_t *)(g33 + 36) = v7;
		*(int32_t *)(g33 + 24) = v7;
		*(int32_t *)(g33 + 56) = v8;
		*(int32_t *)(g33 + 60) = v7;
		*(char *)(g33 + 52) = (char)-1;
		*(char *)v6 = (char)v8;
		*(int32_t *)(g33 + 68) = v7;
		v10 = g33;
		if (*(int32_t *)v4 == 0) {
			// 0x9ce08
			if (*(int32_t *)v10 == 58) {
				// 0x9ce14
				v23 = v10 + 8;
				g22 = v23;
				g38 = *(int32_t *)v23;
				g34 = 14;
				PlaySfxLoc(14);
				v24 = *(int32_t *)g22 - 1;
				g22 = v24;
				v25 = 2 * v24;
				g25 = v25;
				v17 = g33;
				v39 = *(int32_t *)(v17 + 8);
				if (v24 <= v39 + 1) {
					v12 = v25;
					v13 = v17;
					while (true) {
						// 0x9ce3c
						v35 = (int32_t *)(v13 + 4);
						v26 = *v35 - 1;
						g24 = v26;
						v27 = 224 * v26;
						g27 = v27;
						v28 = 112 * v26;
						g26 = v28;
						if (v26 > *v35 + 1) {
							v16 = v13;
							v15 = v24;
							v14 = v12;
							goto lab_0x9cf2c_2;
						}
						v30 = v28;
						v11 = v12;
						v29 = v27;
						goto lab_0x9ce50_2;
					}
				} else {
					v20 = v39;
				}
			} else {
				// 0x9cf48
				g22 = v10 + 4;
				v31 = v10 + 8;
				g20 = v31;
				g34 = 15;
				g38 = *(int32_t *)v31;
				PlaySfxLoc(15);
				g34 = *(int32_t *)(g33 + 84);
				v18 = SetRndSeed();
				v19 = g33;
				v32 = v19 + 92;
				g24 = v32;
				if (*(int32_t *)v32 <= 1) {
					// 0x9cf78
					v36 = *(int32_t *)g22;
					if (*(int32_t *)(v19 + 96) == 0) {
						// 0x9cf84
						v21 = function_603cc(g35, v36, *(int32_t *)g20, g21);
						// branch -> 0x9cfb4
					} else {
						// 0x9cf9c
						v21 = function_6022c(v36, *(int32_t *)g20, 0, g21, 0);
						// branch -> 0x9cfb4
					}
					// 0x9cfb4
					v20 = v21;
					if (*(int32_t *)g24 >= 8) {
						// 0x9cfc0
						v40 = *(int32_t *)(g25 + g29 + 100);
						v20 = function_8700c(v40, *(int32_t *)g22, *(int32_t *)g20);
						// branch -> 0x9cfd4
					}
					// 0x9cfd4
					v37 = *(int32_t *)g28;
					result2 = v20;
					if (g35 == v37) {
						// 0x9cfe0
						result2 = function_8b434(0, 47, v37 % 0x10000, g36 % 0x10000);
						// branch -> 0x9cff4
					}
					// 0x9cff4
					g10 = v1;
					return result2;
				}
				// 0x9cfb4
				if (*(int32_t *)g24 >= 8) {
					// 0x9cfc0
					v40 = *(int32_t *)(g25 + g29 + 100);
					v20 = function_8700c(v40, *(int32_t *)g22, *(int32_t *)g20);
					// branch -> 0x9cfd4
				} else {
					v20 = v18;
				}
			}
			// 0x9cfd4
			v37 = *(int32_t *)g28;
			if (g35 == v37) {
				// 0x9cfe0
				result2 = function_8b434(0, 47, v37 % 0x10000, g36 % 0x10000);
				// branch -> 0x9cff4
			} else {
				result2 = v20;
			}
		} else {
			// 0x9cdf0
			v38 = *(int32_t *)(v10 + 32);
			*(int32_t *)(v9 + 36) = v38;
			*(int32_t *)(g33 + 28) = v8;
			*(int32_t *)(v9 + 24) = 1000;
			result2 = v38;
			// branch -> 0x9cff4
		}
		// 0x9cff4
		g10 = v1;
		return result2;
	}
	int32_t *v41 = (int32_t *)(v5 + 88); // 0x9cd48
	*v41 = *v41 - a3;
	if (g35 == *(int32_t *)g28) {
		// 0x9cd74
		v33 = g25 + g29;
		v22 = v33 + 88;
		v34 = (int32_t *)v22;
		if (*v34 >= 1) {
			// 0x9cd84
			if (*(int32_t *)v4 == 0) {
				// 0x9cd90
				g34 = 48;
				g38 = *(int32_t *)(v33 + 8);
				result2 = PlaySfxLoc(48);
				// branch -> 0x9cff4
			} else {
				result2 = v22;
			}
			// 0x9cff4
			g10 = v1;
			return result2;
		}
		// 0x9cda8
		v8 = 0;
		g33 = v33;
		*v34 = 0;
		v7 = 1;
		v9 = g33;
		*(int32_t *)(v9 + 16) = 1;
		*(int32_t *)(g33 + 36) = v7;
		*(int32_t *)(g33 + 24) = v7;
		*(int32_t *)(g33 + 56) = v8;
		*(int32_t *)(g33 + 60) = v7;
		*(char *)(g33 + 52) = (char)-1;
		*(char *)v6 = (char)v8;
		*(int32_t *)(g33 + 68) = v7;
		v10 = g33;
		if (*(int32_t *)v4 == 0) {
			// 0x9ce08
			if (*(int32_t *)v10 == 58) {
				// 0x9ce14
				v23 = v10 + 8;
				g22 = v23;
				g38 = *(int32_t *)v23;
				g34 = 14;
				PlaySfxLoc(14);
				v24 = *(int32_t *)g22 - 1;
				g22 = v24;
				v25 = 2 * v24;
				g25 = v25;
				v17 = g33;
				v39 = *(int32_t *)(v17 + 8);
				if (v24 <= v39 + 1) {
					v12 = v25;
					v13 = v17;
					while (true) {
						// 0x9ce3c
						v35 = (int32_t *)(v13 + 4);
						v26 = *v35 - 1;
						g24 = v26;
						v27 = 224 * v26;
						g27 = v27;
						v28 = 112 * v26;
						g26 = v28;
						if (v26 > *v35 + 1) {
							v16 = v13;
							v15 = v24;
							v14 = v12;
							goto lab_0x9cf2c_2;
						}
						v30 = v28;
						v11 = v12;
						v29 = v27;
						goto lab_0x9ce50_2;
					}
				} else {
					v20 = v39;
				}
			} else {
				// 0x9cf48
				g22 = v10 + 4;
				v31 = v10 + 8;
				g20 = v31;
				g34 = 15;
				g38 = *(int32_t *)v31;
				PlaySfxLoc(15);
				g34 = *(int32_t *)(g33 + 84);
				v18 = SetRndSeed();
				v19 = g33;
				v32 = v19 + 92;
				g24 = v32;
				if (*(int32_t *)v32 <= 1) {
					// 0x9cf78
					v36 = *(int32_t *)g22;
					if (*(int32_t *)(v19 + 96) == 0) {
						// 0x9cf84
						v21 = function_603cc(g35, v36, *(int32_t *)g20, g21);
						// branch -> 0x9cfb4
					} else {
						// 0x9cf9c
						v21 = function_6022c(v36, *(int32_t *)g20, 0, g21, 0);
						// branch -> 0x9cfb4
					}
					// 0x9cfb4
					v20 = v21;
					if (*(int32_t *)g24 >= 8) {
						// 0x9cfc0
						v40 = *(int32_t *)(g25 + g29 + 100);
						v20 = function_8700c(v40, *(int32_t *)g22, *(int32_t *)g20);
						// branch -> 0x9cfd4
					}
					// 0x9cfd4
					v37 = *(int32_t *)g28;
					result2 = v20;
					if (g35 == v37) {
						// 0x9cfe0
						result2 = function_8b434(0, 47, v37 % 0x10000, g36 % 0x10000);
						// branch -> 0x9cff4
					}
					// 0x9cff4
					g10 = v1;
					return result2;
				}
				// 0x9cfb4
				if (*(int32_t *)g24 >= 8) {
					// 0x9cfc0
					v40 = *(int32_t *)(g25 + g29 + 100);
					v20 = function_8700c(v40, *(int32_t *)g22, *(int32_t *)g20);
					// branch -> 0x9cfd4
				} else {
					v20 = v18;
				}
			}
			// 0x9cfd4
			v37 = *(int32_t *)g28;
			if (g35 == v37) {
				// 0x9cfe0
				result2 = function_8b434(0, 47, v37 % 0x10000, g36 % 0x10000);
				// branch -> 0x9cff4
			} else {
				result2 = v20;
			}
		} else {
			// 0x9cdf0
			v38 = *(int32_t *)(v10 + 32);
			*(int32_t *)(v9 + 36) = v38;
			*(int32_t *)(g33 + 28) = v8;
			*(int32_t *)(v9 + 24) = 1000;
			result2 = v38;
			// branch -> 0x9cff4
		}
		// 0x9cff4
		g10 = v1;
		return result2;
	}
	// 0x9cd60
	if (*v41 <= 0) {
		// 0x9cd6c
		*v41 = 1;
		// branch -> 0x9cd74
	}
	// 0x9cd74
	v33 = g25 + g29;
	v22 = v33 + 88;
	v34 = (int32_t *)v22;
	if (*v34 >= 1) {
		// 0x9cd84
		if (*(int32_t *)v4 == 0) {
			// 0x9cd90
			g34 = 48;
			g38 = *(int32_t *)(v33 + 8);
			result2 = PlaySfxLoc(48);
			// branch -> 0x9cff4
		} else {
			result2 = v22;
		}
		// 0x9cff4
		g10 = v1;
		return result2;
	}
	// 0x9cda8
	v8 = 0;
	g33 = v33;
	*v34 = 0;
	v7 = 1;
	v9 = g33;
	*(int32_t *)(v9 + 16) = 1;
	*(int32_t *)(g33 + 36) = v7;
	*(int32_t *)(g33 + 24) = v7;
	*(int32_t *)(g33 + 56) = v8;
	*(int32_t *)(g33 + 60) = v7;
	*(char *)(g33 + 52) = (char)-1;
	*(char *)v6 = (char)v8;
	*(int32_t *)(g33 + 68) = v7;
	v10 = g33;
	if (*(int32_t *)v4 == 0) {
		// 0x9ce08
		if (*(int32_t *)v10 == 58) {
			// 0x9ce14
			v23 = v10 + 8;
			g22 = v23;
			g38 = *(int32_t *)v23;
			g34 = 14;
			PlaySfxLoc(14);
			v24 = *(int32_t *)g22 - 1;
			g22 = v24;
			v25 = 2 * v24;
			g25 = v25;
			v17 = g33;
			v39 = *(int32_t *)(v17 + 8);
			if (v24 <= v39 + 1) {
				int32_t v42 = v24; // 0x9cf3029
				v12 = v25;
				v13 = v17;
				while (true) {
					// 0x9ce3c
					v35 = (int32_t *)(v13 + 4);
					v26 = *v35 - 1;
					g24 = v26;
					v27 = 224 * v26;
					g27 = v27;
					v28 = 112 * v26;
					g26 = v28;
					v16 = v13;
					v15 = v42;
					v14 = v12;
					if (v26 <= *v35 + 1) {
						v30 = v28;
						v11 = v12;
						v29 = v27;
					lab_0x9ce50_2:;
						int32_t v43; // 0x9cf1c
						int32_t v44;
						while (true) {
							uint16_t v45 = *(int16_t *)(*(int32_t *)g32 + v29 + v11); // 0x9ce58
							int32_t v46 = v45;                                        // 0x9ce58
							int32_t v47 = v30;                                        // 0x9ce84
							if (v45 >= 1) {
								// 0x9ce64
								function_6e2b8(v46 - 1, 1, 4, 0, 1, 0);
								v47 = g26;
								// branch -> 0x9ce80
							}
							unsigned char v48 = *(char *)(g22 + *(int32_t *)g31 + v47); // 0x9ce88
							int32_t v49 = v48;                                          // 0x9ce8c
							if (v48 >= 1) {
								// 0x9ce94
								g13 = 0;
								PlayerMHit(v49 - 1, -1, 0, 8, 16, 1, 0);
								v47 = g26;
								// branch -> 0x9cebc
							}
							unsigned char v50 = *(char *)(*(int32_t *)g30 + v47 + g22); // 0x9cec4
							int32_t v51 = v50;                                          // 0x9cec8
							int32_t v52 = v47;                                          // 0x9cf14
							if (v50 >= 1) {
								int32_t v53 = v51 - 1;   // 0x9ced4
								int32_t v54 = 120 * v53; // 0x9ced8
								int32_t v55 = g29;       // 0x9cedc
								if (*(int32_t *)(v55 + v54) == 58) {
									// 0x9cee8
									if (*(char *)(v55 + v54 + 52) != -1) {
										// 0x9cefc
										function_9cce0(g35, v53, g20, 1, g21);
										v52 = g26;
										// branch -> 0x9cf10
									} else {
										v52 = v47;
									}
								} else {
									v52 = v47;
								}
							}
							int32_t v56 = g27 + 224; // 0x9cf10
							g27 = v56;
							int32_t v57 = v52 + 112; // 0x9cf14
							g26 = v57;
							int32_t v58 = g24 + 1; // 0x9cf18
							g24 = v58;
							v43 = g33;
							v44 = g25;
							if (v58 > *(int32_t *)(v43 + 4) + 1) {
								// break -> 0x9cf1c
								break;
							}
							v30 = v57;
							v11 = v44;
							v29 = v56;
							// continue -> 0x9ce50
						}
						// 0x9cf1c
						v16 = v43;
						v15 = g22;
						v14 = v44;
						// branch -> 0x9cf2c
					}
				lab_0x9cf2c_2:;
					int32_t v59 = v14 + 2; // 0x9cf2c
					g25 = v59;
					int32_t v60 = v15 + 1; // 0x9cf30
					g22 = v60;
					result2 = *(int32_t *)(v16 + 8);
					if (v60 > result2 + 1) {
						// break -> 0x9cfd4
						break;
					}
					v42 = v60;
					v12 = v59;
					v13 = v16;
					// continue -> 0x9ce3c
				}
				// 0x9cfd4
				v37 = *(int32_t *)g28;
				if (g35 == v37) {
					// 0x9cfe0
					result2 = function_8b434(0, 47, v37 % 0x10000, g36 % 0x10000);
					// branch -> 0x9cff4
				}
				// 0x9cff4
				g10 = v1;
				return result2;
			}
			v20 = v39;
		} else {
			// 0x9cf48
			g22 = v10 + 4;
			v31 = v10 + 8;
			g20 = v31;
			g34 = 15;
			g38 = *(int32_t *)v31;
			PlaySfxLoc(15);
			g34 = *(int32_t *)(g33 + 84);
			v18 = SetRndSeed();
			v19 = g33;
			v32 = v19 + 92;
			g24 = v32;
			if (*(int32_t *)v32 <= 1) {
				// 0x9cf78
				v36 = *(int32_t *)g22;
				if (*(int32_t *)(v19 + 96) == 0) {
					// 0x9cf84
					v21 = function_603cc(g35, v36, *(int32_t *)g20, g21);
					// branch -> 0x9cfb4
				} else {
					// 0x9cf9c
					v21 = function_6022c(v36, *(int32_t *)g20, 0, g21, 0);
					// branch -> 0x9cfb4
				}
				// 0x9cfb4
				v20 = v21;
				if (*(int32_t *)g24 >= 8) {
					// 0x9cfc0
					v40 = *(int32_t *)(g25 + g29 + 100);
					v20 = function_8700c(v40, *(int32_t *)g22, *(int32_t *)g20);
					// branch -> 0x9cfd4
				}
				// 0x9cfd4
				v37 = *(int32_t *)g28;
				result2 = v20;
				if (g35 == v37) {
					// 0x9cfe0
					result2 = function_8b434(0, 47, v37 % 0x10000, g36 % 0x10000);
					// branch -> 0x9cff4
				}
				// 0x9cff4
				g10 = v1;
				return result2;
			}
			// 0x9cfb4
			if (*(int32_t *)g24 >= 8) {
				// 0x9cfc0
				v40 = *(int32_t *)(g25 + g29 + 100);
				v20 = function_8700c(v40, *(int32_t *)g22, *(int32_t *)g20);
				// branch -> 0x9cfd4
			} else {
				v20 = v18;
			}
		}
		// 0x9cfd4
		v37 = *(int32_t *)g28;
		if (g35 == v37) {
			// 0x9cfe0
			result2 = function_8b434(0, 47, v37 % 0x10000, g36 % 0x10000);
			// branch -> 0x9cff4
		} else {
			result2 = v20;
		}
	} else {
		// 0x9cdf0
		v38 = *(int32_t *)(v10 + 32);
		*(int32_t *)(v9 + 36) = v38;
		*(int32_t *)(g33 + 28) = v8;
		*(int32_t *)(v9 + 24) = 1000;
		result2 = v38;
		// branch -> 0x9cff4
	}
	// 0x9cff4
	g10 = v1;
	return result2;
}

// Address range: 0x9d008 - 0x9d10c
int32_t function_9d008(void)
{
	int32_t v1 = g36; // 0x9d008
	int32_t v2 = g10; // 0x9d00c
	int32_t v3 = g37; // 0x9d010
	g36 = v3;
	int32_t v4 = g35; // 0x9d014
	int32_t v5 = g34; // 0x9d018
	g35 = v5;
	int32_t v6 = g33; // 0x9d020
	int32_t v7 = g32; // 0x9d024
	if (v5 != -1) {
		int32_t v8 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * v5; // 0x9d03c
		g33 = v8;
		int32_t v9 = *(int32_t *)(v8 + 0x5544); // 0x9d040
		g32 = v9;
		g37 = 1 - v9 + *(int32_t *)(v8 + 0x5548);
		random(-93);
		v3 = g36;
		// branch -> 0x9d098
	}
	int32_t v10 = *(int32_t *)(g23 - 0x7688);    // 0x9d09c
	uint32_t v11 = *(int32_t *)(v10 + 120 * v3); // 0x9d0a0
	int32_t result;                              // 0x9d108
	if (v11 > 56) {
		// 0x9d0c0
		if (v11 <= 58) {
			// 0x9d0d8
			result = function_9cce0(g35, v3, 0, 1, 1);
			// branch -> 0x9d0ec
		} else {
			result = v10;
		}
		// 0x9d0ec
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v6;
		g32 = v7;
		return result;
	}
	// 0x9d0ac
	if (v11 <= 22) {
		// 0x9d0b4
		if (v11 > 19) {
			// 0x9d0cc
			result = function_9cbc8(v3);
			// branch -> 0x9d0ec
		} else {
			result = v10;
		}
	} else {
		result = v10;
	}
	// 0x9d0ec
	g36 = v1;
	g10 = v2;
	g35 = v4;
	g33 = v6;
	g32 = v7;
	return result;
}

// Address range: 0x9d10c - 0x9d158
int32_t function_9d10c(int32_t a1, int32_t a2)
{
	int32_t v1 = g10;                                                 // 0x9d10c
	int32_t v2 = *(int32_t *)(120 * a1 + *(int32_t *)(g23 - 0x7688)); // 0x9d120
	if (v2 > 58) {
		// 0x9d148
		g10 = v1;
		return g34;
	}
	// 0x9d12c
	if (v2 > 56) {
		// 0x9d138
		g34 = function_9cce0(0, 1, 0, 1, 0);
		// branch -> 0x9d148
	}
	// 0x9d148
	g10 = v1;
	return g34;
}

// Address range: 0x9d158 - 0x9d280
int32_t function_9d158(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x9d158
	g36 = a1;
	int32_t v2 = 120 * a1;                   // 0x9d164
	int32_t v3 = g35;                        // 0x9d168
	int32_t v4 = *(int32_t *)(g23 - 0x7688); // 0x9d16c
	int32_t v5 = g33;                        // 0x9d170
	int32_t v6 = v4 + v2;                    // 0x9d174
	int32_t v7 = v6;                         // r3
	g35 = *(int32_t *)(g23 - 0x7598);
	int32_t v8 = g32; // 0x9d17c
	int32_t result;   // 0x9d27c
	if (*(int32_t *)(v6 + 100) == 0) {
		// 0x9d194
		*(int32_t *)(v6 + 60) = 0;
		result = v7;
		// branch -> 0x9d260
	} else {
		// 0x9d1a0
		*(int32_t *)(v6 + 60) = 1;
		g33 = *(int32_t *)(v7 + 4);
		g32 = *(int32_t *)(v7 + 8);
		*(char *)(v7 + 64) = 2;
		int32_t v9;  // 0x9d254
		int32_t v10; // 0x9d258
		if (*(int32_t *)(v2 + v4) == 1) {
			int32_t v11 = g33; // 0x9d1d0
			int32_t v12 = g32; // 0x9d1d4
			if (*(int32_t *)(v7 + 88) == 214) {
				// 0x9d1d0
				ObjSetMicro(v11, v12, 408);
				// branch -> 0x9d1f4
			} else {
				// 0x9d1e4
				ObjSetMicro(v11, v12, 393);
				// branch -> 0x9d1f4
			}
			int32_t v13 = g33; // 0x9d1f4
			*(char *)(g32 + 112 * v13 + *(int32_t *)g35) = 7;
			function_96e20(v13 - 1, g32, 7);
			v10 = g32 - 1;
			v9 = g33;
			// branch -> 0x9d250
		} else {
			// 0x9d21c
			ObjSetMicro(g33, g32, 395);
			int32_t v14 = g32; // 0x9d234
			*(char *)(v14 + 112 * g33 + *(int32_t *)g35) = 8;
			function_96e20(g33, v14 - 1, 8);
			v10 = g32;
			v9 = g33 - 1;
			// branch -> 0x9d250
		}
		// 0x9d250
		result = DoorSet(g36, v9, v10);
		// branch -> 0x9d260
	}
	// 0x9d260
	g36 = v1;
	g35 = v3;
	g33 = v5;
	g32 = v8;
	return result;
}

// Address range: 0x9d280 - 0x9d338
int32_t function_9d280(int32_t a1, int32_t a2)
{
	int32_t v1 = 120 * a1;                                // 0x9d284
	int32_t v2 = *(int32_t *)(g23 - 0x7688);              // 0x9d298
	uint32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x7194); // 0x9d2a0
	int32_t result;                                       // 0x9d334
	int32_t v4;                                           // 0x9d310
	int32_t v5;                                           // 0x9d318
	int32_t v6;                                           // 0x9d31c
	int32_t v7;                                           // 0x9d320
	if (v3 < 1) {
		// 0x9d310
		v4 = v2 + v1;
		v5 = *(int32_t *)(v4 + 92);
		v6 = *(int32_t *)(v4 + 96);
		v7 = *(int32_t *)(v4 + 100);
		result = function_986b4(*(int32_t *)(v4 + 88), v5, v6, v7);
		// branch -> 0x9d328
		// 0x9d328
		return result;
	}
	int32_t v8 = 1;                          // 0x9d3088
	int32_t v9 = *(int32_t *)(g23 - 0x7190); // 0x9d300
	int32_t v10;                             // 0x9d3087
	while (true) {
		int32_t v11 = 120 * *(int32_t *)v9 + v2; // 0x9d2c0
		int32_t v12 = *(int32_t *)v11;           // 0x9d2c0
		int32_t v13;                             // 0x9d304
		if (v12 == 20) {
		lab_0x9d2d8:
			// 0x9d2d8
			if (*(int32_t *)(v2 + v1 + 116) == *(int32_t *)(v11 + 116)) {
				// 0x9d2ec
				if (*(char *)(v11 + 52) != -1) {
					// 0x9d2fc
					v10 = 0;
					// branch -> 0x9d300
				} else {
					v10 = v8;
				}
			} else {
				v10 = v8;
			}
		} else {
			// 0x9d2cc
			if (v12 <= 22) {
				goto lab_0x9d2d8;
			}
			v10 = v8;
			// 0x9d300
			v13 = v3 - 1;
			if (v13 == 0) {
				// break -> 0x9d308
				break;
			}
			v8 = v10;
			v3 = v13;
			v9 += 4;
			// continue -> 0x9d2b8
			continue;
		}
		// 0x9d300
		v13 = v3 - 1;
		if (v13 == 0) {
			// break -> 0x9d308
			break;
		}
		v8 = v10;
		v3 = v13;
		v9 += 4;
		// continue -> 0x9d2b8
	}
	// 0x9d308
	if (v10 != 0) {
		// 0x9d310
		v4 = v2 + v1;
		v5 = *(int32_t *)(v4 + 92);
		v6 = *(int32_t *)(v4 + 96);
		v7 = *(int32_t *)(v4 + 100);
		result = function_986b4(*(int32_t *)(v4 + 88), v5, v6, v7);
		// branch -> 0x9d328
	} else {
		result = v2;
	}
	// 0x9d328
	return result;
}

// Address range: 0x9d338 - 0x9d380
int32_t function_9d338(void)
{
	int32_t result = 120 * g34;                       // 0x9d33c
	int32_t v1 = *(int32_t *)(g23 - 0x7688) + result; // 0x9d34c
	if (*(char *)(v1 + 64) == 0) {
		int32_t v2 = *(int32_t *)(v1 + 92);  // 0x9d360
		int32_t v3 = *(int32_t *)(v1 + 96);  // 0x9d364
		int32_t v4 = *(int32_t *)(v1 + 100); // 0x9d368
		result = function_986b4(*(int32_t *)(v1 + 88), v2, v3, v4);
		// branch -> 0x9d370
	}
	// 0x9d370
	return result;
}

// Address range: 0x9d380 - 0x9d41c
int32_t function_9d380(void)
{
	int32_t v1 = 120 * g34; // 0x9d388
	g33 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x9d38c
	g36 = v2;
	g35 = *(int32_t *)(g23 - 0x7518);
	int32_t v3 = v2 + v1;               // 0x9d394
	int32_t v4 = *(int32_t *)(v3 + 36); // 0x9d3a0
	int32_t result = v4;                // 0x9d418
	if (v4 == *(int32_t *)(v3 + 108)) {
		int32_t v5 = v3 + 88; // 0x9d3b0
		g29 = v5;
		int32_t v6 = v3 + 92; // 0x9d3b4
		g30 = v6;
		int32_t v7 = *(int32_t *)v5;                                     // 0x9d3c0
		int32_t v8 = *(int32_t *)v6;                                     // 0x9d3c4
		int32_t v9 = *(int32_t *)(v3 + 100);                             // 0x9d3cc
		int32_t v10 = function_98800(v7, v8, *(int32_t *)(v3 + 96), v9); // 0x9d3d0
		if (*(int32_t *)(g33 + g36) == 71) {
			char *v11 = (char *)g35; // 0x9d3e0
			*v11 = 9;
			g33 = 0x1000000 * (int32_t)*v11 / 0x1000000;
			int32_t v12 = *(int32_t *)g29;                                // 0x9d3f0
			int32_t v13 = *(int32_t *)g30;                                // 0x9d3f4
			int32_t v14 = *(int32_t *)g32;                                // 0x9d3fc
			int32_t v15 = function_528e8(v12, v13, *(int32_t *)g31, v14); // r3
			*(char *)g35 = (char)g33;
			result = v15;
			// branch -> 0x9d408
		} else {
			result = v10;
		}
	}
	// 0x9d408
	return result;
}

// Address range: 0x9d41c - 0x9d514
int32_t function_9d41c(int32_t result, int32_t a2)
{
	int32_t v1 = 120 * result; // 0x9d424
	g31 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x9d428
	g36 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7550); // 0x9d42c
	g33 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x754c); // 0x9d430
	g35 = v4;
	int32_t v5 = v2 + v1 + 108; // 0x9d440
	g32 = v5;
	int32_t v6 = v5; // 0x9d464
	if (*(int32_t *)v5 == 1) {
		int32_t v7 = *(int32_t *)v3; // 0x9d44c
		int32_t v8 = *(int32_t *)v4; // 0x9d450
		result = function_98800(v8, v7 + 3, v8 + 2, v7 + 7);
		v6 = g32;
		// branch -> 0x9d464
	}
	int32_t v9 = v6; // 0x9d4ac
	if (*(int32_t *)v6 == 2) {
		int32_t v10 = *(int32_t *)g33; // 0x9d470
		int32_t v11 = *(int32_t *)g35; // 0x9d474
		function_98800(v11, v10 + 3, v11 + 2, v10 + 7);
		int32_t v12 = *(int32_t *)(g23 - 0x7554); // 0x9d488
		int32_t v13 = *(int32_t *)g33;            // 0x9d48c
		int32_t v14 = *(int32_t *)g35;            // 0x9d490
		result = function_98800(v14 + 6, v13 + 3, *(int32_t *)v12 + v14, v13 + 7);
		v9 = g32;
		// branch -> 0x9d4ac
	}
	if (*(int32_t *)v9 == 3) {
		int32_t v15 = g31 + g36;               // 0x9d4b8
		int32_t v16 = *(int32_t *)(v15 + 96);  // 0x9d4c4
		int32_t v17 = *(int32_t *)(v15 + 100); // 0x9d4c8
		function_98800(*(int32_t *)(v15 + 88), *(int32_t *)(v15 + 92), v16, v17);
		int32_t v18 = LoadFileInMem(*(int32_t *)(g23 - 0x5b3c), NULL); // 0x9d4d8
		int32_t v19 = v18;                                             // bp-40
		function_93b18(v18, 2 * *(int32_t *)g35, 2 * *(int32_t *)g33);
		result = MemFreeDbg(&v19);
		// branch -> 0x9d500
	}
	// 0x9d500
	return result;
}

// Address range: 0x9d514 - 0x9d608
int32_t function_9d514(int32_t a1, int32_t a2)
{
	int32_t v1 = 120 * a1;                   // 0x9d518
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x9d520
	int32_t v3 = v2 + v1;                    // 0x9d528
	int32_t v4 = v3 + 100;                   // 0x9d52c
	if (*(int32_t *)v4 == 0) {
		// 0x9d538
		*(int32_t *)(v3 + 60) = 0;
		// branch -> 0x9d554
	} else {
		// 0x9d548
		*(int32_t *)(v3 + 60) = 1;
		// branch -> 0x9d554
	}
	int32_t v5 = v1 + v2;                  // 0x9d554
	int32_t result = *(int32_t *)(v5 + 4); // r3
	int32_t v6 = *(int32_t *)(v5 + 8);     // 0x9d560
	*(char *)(v5 + 64) = 2;
	int32_t v7 = *(int32_t *)(v1 + v2); // 0x9d568
	int32_t *v8;                        // 0x9d5bc
	int32_t v9;                         // 0x9d5dc
	if (v7 != 42) {
		// 0x9d58c
		// branch -> 0x9d5b4
		// 0x9d5b4
		if (v7 != 43) {
			// 0x9d5d4
			// branch -> 0x9d5f8
			// 0x9d5f8
			return result;
		}
		// 0x9d5bc
		v8 = (int32_t *)v4;
		if (*v8 == 0) {
			// 0x9d5c8
			result = ObjSetMicro(540, v6, 540);
			// branch -> 0x9d5f8
		} else {
			// 0x9d5dc
			v9 = *v8;
			if (v9 != 1) {
				// 0x9d5e8
				if (v9 != 2) {
					// 0x9d5f8
					return result;
				}
			}
			// 0x9d5f0
			result = ObjSetMicro(17, v6, 17);
			// branch -> 0x9d5f8
		}
		// 0x9d5f8
		return result;
	}
	int32_t *v10 = (int32_t *)v4; // 0x9d574
	if (*v10 == 0) {
		// 0x9d580
		result = ObjSetMicro(result, v6, 538);
		// branch -> 0x9d5f8
	} else {
		int32_t v11 = *v10; // 0x9d594
		if (v11 != 1) {
			// 0x9d5a0
			if (v11 != 2) {
				// 0x9d5b4
				if (v7 != 43) {
					// 0x9d5d4
					// branch -> 0x9d5f8
					// 0x9d5f8
					return result;
				}
				// 0x9d5bc
				v8 = (int32_t *)v4;
				if (*v8 == 0) {
					// 0x9d5c8
					result = ObjSetMicro(540, v6, 540);
					// branch -> 0x9d5f8
				} else {
					// 0x9d5dc
					v9 = *v8;
					if (v9 != 1) {
						// 0x9d5e8
						if (v9 != 2) {
							// 0x9d5f8
							return result;
						}
					}
					// 0x9d5f0
					result = ObjSetMicro(17, v6, 17);
					// branch -> 0x9d5f8
				}
				// 0x9d5f8
				return result;
			}
		}
		// 0x9d5a8
		result = ObjSetMicro(13, v6, 13);
		// branch -> 0x9d5f8
	}
	// 0x9d5f8
	return result;
}

// Address range: 0x9d608 - 0x9d6e4
int32_t function_9d608(int32_t a1, int32_t a2)
{
	int32_t v1 = 120 * a1;                   // 0x9d60c
	int32_t v2 = *(int32_t *)(g23 - 0x7688); // 0x9d614
	int32_t v3 = v2 + v1;                    // 0x9d620
	int32_t v4 = v3;                         // r5
	*(int32_t *)(v3 + 60) = 1;
	int32_t result = *(int32_t *)(v4 + 4); // r3
	int32_t v5 = *(int32_t *)(v4 + 8);     // 0x9d630
	*(char *)(v4 + 64) = 2;
	int32_t v6 = v1 + v2;        // 0x9d638
	int32_t v7 = *(int32_t *)v6; // 0x9d638
	int32_t *v8;                 // 0x9d694
	int32_t v9;                  // 0x9d6b8
	if (v7 != 74) {
		// 0x9d65c
		// branch -> 0x9d688
		// 0x9d688
		if (v7 != 75) {
			// 0x9d6ac
			// branch -> 0x9d6d4
			// 0x9d6d4
			return result;
		}
		// 0x9d690
		v8 = (int32_t *)(v6 + 100);
		if (*v8 == 0) {
			// 0x9d6a0
			result = ObjSetMicro(534, v5, 534);
			// branch -> 0x9d6d4
		} else {
			// 0x9d6b4
			v9 = *v8;
			if (v9 != 1) {
				// 0x9d6c4
				if (v9 != 2) {
					// 0x9d6d4
					return result;
				}
			}
			// 0x9d6cc
			result = ObjSetMicro(541, v5, 541);
			// branch -> 0x9d6d4
		}
		// 0x9d6d4
		return result;
	}
	// 0x9d644
	if (*(int32_t *)(v4 + 100) == 0) {
		// 0x9d650
		result = ObjSetMicro(result, v5, 531);
		// branch -> 0x9d6d4
	} else {
		int32_t v10 = *(int32_t *)(v6 + 100); // 0x9d668
		if (v10 != 1) {
			// 0x9d674
			if (v10 != 2) {
				// 0x9d688
				if (v7 != 75) {
					// 0x9d6ac
					// branch -> 0x9d6d4
					// 0x9d6d4
					return result;
				}
				// 0x9d690
				v8 = (int32_t *)(v6 + 100);
				if (*v8 == 0) {
					// 0x9d6a0
					result = ObjSetMicro(534, v5, 534);
					// branch -> 0x9d6d4
				} else {
					// 0x9d6b4
					v9 = *v8;
					if (v9 != 1) {
						// 0x9d6c4
						if (v9 != 2) {
							// 0x9d6d4
							return result;
						}
					}
					// 0x9d6cc
					result = ObjSetMicro(541, v5, 541);
					// branch -> 0x9d6d4
				}
				// 0x9d6d4
				return result;
			}
		}
		// 0x9d67c
		result = ObjSetMicro(538, v5, 538);
		// branch -> 0x9d6d4
	}
	// 0x9d6d4
	return result;
}

// Address range: 0x9d6e4 - 0x9d828
int32_t function_9d6e4(int32_t a1)
{
	// 0x9d6e4
	g34 = a1;
	int32_t v1 = g10;                                    // 0x9d6e4
	int32_t v2 = *(int32_t *)(g23 - 0x7688) + 120 * g34; // 0x9d6fc
	int32_t v3 = *(int32_t *)(g23 - 0x6fc8);             // 0x9d700
	int32_t v4 = *(int32_t *)(g23 - 0x6fd8);             // 0x9d708
	char v5 = *(char *)(44 * *(int32_t *)v2 + v3 + 1);   // 0x9d714
	int32_t v6 = 0;                                      // 0x9d73c
	if (*(char *)v4 != v5) {
		int32_t v7 = v4 + 1; // 0x9d720
		int32_t v8 = 1;      // 0x9d724
		while (*(char *)v7 != v5) {
			// 0x9d720
			v7++;
			v8++;
			// continue -> 0x9d720
		}
		// 0x9d728
		v6 = 4 * v8;
		// branch -> 0x9d738
	}
	int32_t v9 = *(int32_t *)(g23 - 0x5b04); // 0x9d738
	*(int32_t *)(v2 + 20) = *(int32_t *)(v9 + v6);
	int32_t v10 = *(int32_t *)v2; // 0x9d74c
	if (v10 == 41) {
		// 0x9d80c
		g34 = function_9d380();
		// branch -> 0x9d818
		// 0x9d818
		g10 = v1;
		return g34;
	}
	// 0x9d758
	if (v10 <= 41) {
		// 0x9d75c
		if (v10 > 22) {
			// 0x9d790
			if (v10 != 28) {
				// 0x9d798
				if (v10 > 28 || v10 != 25) {
					// 0x9d818
					g10 = v1;
					return g34;
				}
			}
		} else {
			// 0x9d764
			if (v10 != 4) {
				// 0x9d76c
				if (v10 > 4) {
					// 0x9d784
					if (v10 > 19) {
						// 0x9d7fc
						g34 = function_9d280(v2, v9);
						// branch -> 0x9d818
					}
				} else {
					// 0x9d770
					if (v10 <= 2) {
						// 0x9d778
						if (v10 > 0) {
							// 0x9d7e4
							g34 = function_9d158(v2, v9);
							// branch -> 0x9d818
						}
					}
				}
				// 0x9d818
				g10 = v1;
				return g34;
			}
		}
		// 0x9d804
		g34 = function_9d338();
		// branch -> 0x9d818
		// 0x9d818
		g10 = v1;
		return g34;
	}
	// 0x9d7a8
	if (v10 == 73) {
		// 0x9d814
		g34 = function_9d41c(v2, v9);
		// branch -> 0x9d818
	} else {
		// 0x9d7b0
		if (v10 > 73) {
			// 0x9d7cc
			if (v10 != 88) {
				// 0x9d7d4
				if (v10 > 88) {
					// 0x9d818
					g10 = v1;
					return g34;
				}
				// 0x9d7d8
				if (v10 <= 75) {
					// 0x9d7f4
					g34 = function_9d608(v2, v9);
					// branch -> 0x9d818
				}
				// 0x9d818
				g10 = v1;
				return g34;
			}
		} else {
			// 0x9d7b4
			if (v10 != 71) {
				// 0x9d7bc
				if (v10 > 71) {
					// 0x9d818
					g10 = v1;
					return g34;
				}
				// 0x9d7c0
				if (v10 <= 43) {
					// 0x9d7ec
					g34 = function_9d514(v2, v9);
					// branch -> 0x9d818
				}
				// 0x9d818
				g10 = v1;
				return g34;
			}
		}
		// 0x9d80c
		g34 = function_9d380();
		// branch -> 0x9d818
	}
	// 0x9d818
	g10 = v1;
	return g34;
}

// Address range: 0x9d828 - 0x9db94
int32_t GetObjectStr(int32_t a1)
{
	int32_t v1 = g10;      // 0x9d82c
	int32_t v2 = 120 * a1; // 0x9d830
	g32 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7688); // 0x9d834
	g36 = v3;
	g33 = *(int32_t *)(g23 - 0x76b4);
	int32_t v4 = *(int32_t *)(g23 - 0x76a4); // 0x9d840
	g35 = v4;
	int32_t v5 = v3 + v2;         // 0x9d84c
	uint32_t v6 = *(int32_t *)v5; // 0x9d84c
	if (v6 <= 97) {
		// 0x9d858
		return *(int32_t *)(*(int32_t *)(g23 - 0x5bdc) + 4 * v6);
	}
	int32_t v7 = *(int32_t *)(g23 - 0x77a8);                               // 0x9db2c
	int32_t result = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v7; // 0x9db38
	if (*(char *)(result + 348) != 1) {
		// 0x9db80
		g10 = v1;
		return result;
	}
	// 0x9db48
	int32_t result2; // 0x9db74
	if (*(int32_t *)(v5 + 72) != 0) {
		// 0x9db58
		g37 = *(int32_t *)(g23 - 0x5bd8);
		g38 = v4;
		sprintf();
		g34 = g35;
		g37 = g33;
		strcpy();
		result2 = *(int32_t *)(g23 - 0x7728);
		*(char *)result2 = 2;
		// branch -> 0x9db80
	} else {
		result2 = v5;
	}
	// 0x9db80
	g10 = v1;
	return result2;
}
