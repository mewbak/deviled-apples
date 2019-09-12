
// Address range: 0xa2098 - 0xa215c
int32_t SetPlayerGPtrs(int32_t a1, int32_t *a2)
{
	// 0xa2098
	g37 = (int32_t)a2;
	g34 = a1;
	int32_t v1 = g36; // 0xa2098
	g36 = g37;
	int32_t v2 = g35; // 0xa20a4
	g35 = g34;
	int32_t v3 = function_c9948(); // 0xa20b4
	*(int32_t *)g36 = g35;
	int32_t v4 = 0; // 0xa20c0
	*(int32_t *)(g36 + 4) = __asm_lwbrx(v3, v4);
	*(int32_t *)(g36 + 8) = g35;
	*(int32_t *)(g36 + 12) = __asm_lwbrx(v3, v4 + 4);
	*(int32_t *)(g36 + 16) = g35;
	*(int32_t *)(g36 + 20) = __asm_lwbrx(v3, v4 + 8);
	*(int32_t *)(g36 + 24) = g35;
	*(int32_t *)(g36 + 28) = __asm_lwbrx(v3, v4 + 12);
	*(int32_t *)(g36 + 32) = g35;
	*(int32_t *)(g36 + 36) = __asm_lwbrx(v3, v4 + 16);
	*(int32_t *)(g36 + 40) = g35;
	*(int32_t *)(g36 + 44) = __asm_lwbrx(v3, v4 + 20);
	*(int32_t *)(g36 + 48) = g35;
	*(int32_t *)(g36 + 52) = __asm_lwbrx(v3, v4 + 24);
	*(int32_t *)(g36 + 56) = g35;
	*(int32_t *)(g36 + 60) = __asm_lwbrx(v3, v4 + 28);
	int32_t result = function_c9acc(g35); // 0xa2140
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0xa215c - 0xa2428
int32_t LoadPlrGFX(int32_t a1, int32_t a2)
{
	g28 = a1;
	g29 = a2;
	g25 = *(int32_t *)(g23 - 0x5920);
	g24 = *(int32_t *)(g23 - 0x591c);
	g21 = *(int32_t *)(g23 - 0x5914);
	g20 = *(int32_t *)(g23 - 0x5910);
	g19 = *(int32_t *)(g23 - 0x590c);
	g17 = *(int32_t *)(g23 - 0x5904);
	g33 = *(int32_t *)(g23 - 0x7794);
	int32_t v1 = g23; // 0xa21d0
	int32_t v2 = a1;  // 0xa21b8
	if (a1 >= 4) {
		// 0xa21ac
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x58e8));
		v1 = g23;
		v2 = g28;
		// branch -> 0xa2224
	}
	int32_t v3 = *(int32_t *)(v1 - 0x77a8) + 0x55ec * v2; // 0xa21cc
	g36 = v3;
	g37 = *(int32_t *)(v1 - 0x58ec);
	char v4 = *(char *)(v3 + 348); // 0xa21dc
	g38 = (int32_t) * (char *)((int32_t)v4 + v1 - 0x4c5c);
	sprintf();
	unsigned char v5 = *(char *)(g36 + 348); // 0xa2208
	g35 = 1;
	int32_t v6 = *(int32_t *)(g23 - 0x58f4); // 0xa2210
	int32_t result = v6;                     // r3
	g28 = *(int32_t *)(v6 + 0x1000000 * (int32_t)v5 / 0x400000);
	int32_t v7;       // bp-360
	int32_t v8 = &v7; // 0xa23c4
	int32_t v9 = 1;   // 0xa2280
	// branch -> 0xa2224
	while (true) {
		int32_t v10 = v9; // 0xa2408
		int32_t v11;      // 0xa2408
		if ((g29 & v9) != 0) {
			// 0xa222c
			int32_t *v12; // 0xa23fc
			if (v9 == 16) {
				// 0xa233c
				if (*(char *)g33 != 0) {
					// 0xa2348
					g31 = g21;
					g30 = g36 + 756;
					// branch -> 0xa23c0
				lab_0xa23c0_5:
					// 0xa23c0
					g37 = g27;
					g38 = g28;
					sprintf();
					function_4fba8(v8, g32);
					function_c9930(g32);
					result = SetPlayerGPtrs(g32, (int32_t *)g30);
					v12 = (int32_t *)(g36 + 532);
					*v12 = g35 | *v12;
					v10 = g35;
					// branch -> 0xa2408
				} else {
					v10 = 16;
				}
			} else {
				// 0xa2234
				if (v9 > 16) {
					// 0xa2268
					if (v9 == 128) {
						int32_t v13 = g36; // 0xa22e8
						if (*(int32_t *)(v13 + 120) % 16 == 0) {
							// 0xa22f4
							g31 = g18;
							g30 = v13 + 1032;
							// branch -> 0xa23c0
							goto lab_0xa23c0_5;
						} else {
							v10 = 128;
						}
					} else {
						// 0xa2270
						if (v9 > 128) {
							// 0xa228c
							if (v9 == 256) {
								// 0xa2390
								if (*(char *)g33 != 0) {
									int32_t v14 = g36; // 0xa239c
									if (*(char *)(v14 + 312) != 0) {
										// 0xa23a8
										g31 = g25;
										g30 = v14 + 1104;
										// branch -> 0xa23c0
										goto lab_0xa23c0_5;
									} else {
										v10 = 256;
									}
								} else {
									v10 = 256;
								}
							} else {
							lab_0xa23b8_5:
								// 0xa23b8
								app_fatal(g26);
								// branch -> 0xa23c0
								goto lab_0xa23c0_5;
							}
						lab_0xa2408_3:
							// 0xa2408
							v11 = 2 * v10;
							g35 = v11;
							if (v11 >= 384) {
								// break -> 0xa2414
								break;
							}
							v9 = v11;
							// continue -> 0xa2224
							continue;
						} else {
							// 0xa2274
							if (v9 == 64) {
								// 0xa2374
								if (*(char *)g33 == 0) {
									v10 = 64;
									goto lab_0xa2408_3;
								}
								// 0xa2380
								g31 = g24;
								g30 = g36 + 884;
								// branch -> 0xa23c0
								goto lab_0xa23c0_5;
							} else {
								// 0xa227c
								if (v9 > 64) {
									goto lab_0xa23b8_5;
								}
								// 0xa2280
								if (v9 != 32) {
									goto lab_0xa23b8_5;
								}
								// 0xa2358
								if (*(char *)g33 == 0) {
									v10 = 32;
									goto lab_0xa2408_3;
								}
								// 0xa2364
								g31 = g22;
								g30 = g36 + 820;
								// branch -> 0xa23c0
								goto lab_0xa23c0_5;
							}
						lab_0xa23c0_9:
							// 0xa23c0
							g37 = g27;
							g38 = g28;
							sprintf();
							function_4fba8(v8, g32);
							function_c9930(g32);
							result = SetPlayerGPtrs(g32, (int32_t *)g30);
							v12 = (int32_t *)(g36 + 532);
							*v12 = g35 | *v12;
							v10 = g35;
							// branch -> 0xa2408
							goto lab_0xa2408_3;
						}
					}
				lab_0xa2408_6:
					// 0xa2408
					v11 = 2 * v10;
					g35 = v11;
					if (v11 >= 384) {
						// break -> 0xa2414
						break;
					}
					v9 = v11;
					// continue -> 0xa2224
					continue;
				} else {
					// 0xa2238
					if (v9 == 4) {
						// 0xa2304
						if (*(char *)g33 == 0) {
							v10 = 4;
							goto lab_0xa2408_6;
						}
						// 0xa2310
						g31 = g19;
						g30 = g36 + 680;
						// branch -> 0xa23c0
						goto lab_0xa23c0_9;
					} else {
						// 0xa2240
						if (v9 > 4) {
							// 0xa225c
							if (v9 != 8) {
								goto lab_0xa23b8_5;
							}
							// 0xa2320
							if (*(char *)g33 == 0) {
								v10 = 8;
								goto lab_0xa2408_6;
							}
							// 0xa232c
							g31 = g20;
							g30 = g36 + 960;
							// branch -> 0xa23c0
							goto lab_0xa23c0_9;
						} else {
							// 0xa2244
							if (v9 == 2) {
								// 0xa22c0
								g31 = *(char *)g33 == 0 ? g17 : g16;
								g30 = g36 + 608;
								// branch -> 0xa23c0
								goto lab_0xa23c0_9;
							} else {
								// 0xa224c
								if (v9 > 2) {
									goto lab_0xa23b8_5;
								}
								// 0xa2250
								if (v9 <= 0) {
									goto lab_0xa23b8_5;
								}
								// 0xa2298
								g31 = *(int32_t *)(g23 + (*(char *)g33 == 0 ? -0x58fc : -0x58f8));
								g30 = g36 + 536;
								// branch -> 0xa23c0
								goto lab_0xa23c0_9;
							}
						lab_0xa23c0_10:
							// 0xa23c0
							result = v8;
							int32_t v15 = g27; // 0xa23c8
							g37 = v15;
							int32_t v16 = g28; // 0xa23cc
							g38 = v16;
							sprintf();
							result = v8;
							int32_t v17 = g32; // 0xa23e0
							function_4fba8(v8, v17);
							int32_t v18 = g32; // 0xa23e8
							result = v18;
							function_c9930(v18);
							int32_t v19 = g32; // 0xa23f0
							result = v19;
							int32_t v20 = g30; // 0xa23f4
							result = SetPlayerGPtrs(v19, (int32_t *)v20);
							int32_t v21 = g36; // 0xa23fc
							v12 = (int32_t *)(v21 + 532);
							int32_t v22 = *v12; // 0xa23fc
							int32_t v23 = g35;  // 0xa2400
							*v12 = v23 | v22;
							int32_t v24 = g35;
							v10 = v24;
							// branch -> 0xa2408
							goto lab_0xa2408_6;
						}
					}
				}
			}
			// 0xa2408
			v11 = 2 * v10;
			g35 = v11;
			if (v11 >= 384) {
				// break -> 0xa2414
				break;
			}
			v9 = v11;
			// continue -> 0xa2224
			continue;
		}
		// 0xa2408
		v11 = 2 * v10;
		g35 = v11;
		if (v11 >= 384) {
			// break -> 0xa2414
			break;
		}
		v9 = v11;
		// continue -> 0xa2224
	}
	// 0xa2414
	return result;
}

// Address range: 0xa2428 - 0xa24a8
int32_t InitPlayerGFX(int32_t a1)
{
	int32_t v1 = g36;                        // 0xa2428
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa2430
	g36 = v2;
	int32_t v3 = g35; // 0xa2434
	g35 = a1;
	int32_t v4 = a1; // 0xa2484
	if (a1 >= 4) {
		// 0xa244c
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x592c));
		v2 = g36;
		v4 = g35;
		// branch -> 0xa2458
	}
	int32_t v5 = 0x55ec * v4 + v2; // 0xa245c
	int32_t result;
	if (*(int32_t *)(v5 + 404) < 64) {
		// 0xa246c
		*(int32_t *)(v5 + 120) = 0;
		result = LoadPlrGFX(g35, 128);
		// branch -> 0xa2490
	} else {
		// 0xa2484
		result = LoadPlrGFX(v4, 383);
		// branch -> 0xa2490
	}
	// 0xa2490
	g36 = v1;
	g35 = v3;
	return result;
}

// Address range: 0xa24a8 - 0xa25c4
int32_t function_a24a8(int32_t a1)
{
	// 0xa24a8
	g28 = 0;
	int32_t v1 = *(int32_t *)(g23 - 0x58f4); // 0xa24b4
	g32 = *(int32_t *)(g23 - 0x5928);
	g33 = *(int32_t *)(g23 - 0x58f0);
	int32_t v2 = g23 - 0x4c5c; // 0xa24c0
	g31 = v2;
	g35 = *(int32_t *)(g23 - 0x58ec);
	g36 = a1;
	g29 = 0;
	g30 = v1;
	int32_t v3 = 0; // 0xa259821
	// branch -> 0xa24e0
	while (true) {
		int32_t v4 = g23 - 0x4c60; // 0xa24e0
		int32_t v5 = v2;           // 0xa25a4
		int32_t v6 = v1;           // 0xa259c
		int32_t v7 = v3;           // 0xa2598
		if (*(char *)v4 != 0) {
			while (true) {
				int32_t v8 = g33; // 0xa24e8
				g26 = v8;
				int32_t v9 = v4; // 0xa2588
				int32_t v10;     // 0xa2588
				if (*(char *)v8 != 0) {
					while (true) {
						// 0xa24f0
						g37 = g35;
						g38 = (int32_t) * (char *)g31;
						sprintf();
						g38 = *(int32_t *)g30;
						g37 = g32;
						sprintf();
						g38 = 1;
						int32_t v11; // bp-324
						int32_t v12; // bp-328
						if (WOpenFile((int32_t)&v11, (int32_t)&v12) != 0) {
							int32_t v13 = function_c86ec(v12, 0); // 0xa254c
							g34 = v12;
							g25 = v13;
							WCloseFile(v12);
							uint32_t v14 = g29; // 0xa2560
							uint32_t v15 = g25; // 0xa2560
							g29 = v14 > v15 ? v14 : v15;
							// branch -> 0xa2578
						}
						int32_t v16 = g26 + 1; // 0xa2578
						g26 = v16;
						if (*(char *)v16 == 0) {
							// break -> 0xa2588
							break;
						}
						// continue -> 0xa24f0
					}
					// 0xa2588
					v10 = g27 + 1;
					if (*(char *)v10 == 0) {
						// break -> 0xa258c
						break;
					}
					v4 = v10;
					// continue -> 0xa24e8
					continue;
				}
				// 0xa2588
				v10 = v9 + 1;
				if (*(char *)v10 == 0) {
					// break -> 0xa258c
					break;
				}
				v4 = v10;
				// continue -> 0xa24e8
			}
			// 0xa258c
			v5 = g31;
			v6 = g30;
			v7 = g28;
			// branch -> 0xa2598
		}
		int32_t v17 = v7 + 1; // 0xa2598
		g28 = v17;
		int32_t v18 = v6 + 4; // 0xa259c
		g30 = v18;
		int32_t v19 = v5 + 1; // 0xa25a4
		g31 = v19;
		if (v17 >= 3) {
			// 0xa25ac
			return g29;
		}
		// 0xa2598
		v2 = v19;
		v1 = v18;
		v3 = v17;
		// branch -> 0xa24e0
	}
}

// Address range: 0xa25c4 - 0xa288c
int32_t InitPlrGFXMem(int32_t a1)
{
	g29 = a1;
	g30 = *(int32_t *)(g23 - 0x5904);
	g31 = *(int32_t *)(g23 - 0x5900);
	g32 = *(int32_t *)(g23 - 0x58fc);
	g35 = *(int32_t *)(g23 - 0x58f8);
	g36 = *(int32_t *)(g23 - 0x77a8);
	int32_t v1 = g23; // 0xa2600
	if (a1 >= 4) {
		// 0xa25f4
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5930));
		v1 = g23;
		// branch -> 0xa2600
	}
	int32_t v2 = v1; // 0xa264c
	if (*(char *)(v1 - 0x4c14) == 0) {
		// 0xa260c
		function_a24a8(g32);
		int32_t v3;
		if (function_a24a8(g35) > g33) {
			// 0xa2628
			v3 = function_a24a8(g35);
			// branch -> 0xa263c
		} else {
			// 0xa2634
			v3 = function_a24a8(g32);
			// branch -> 0xa263c
		}
		// 0xa263c
		*(int32_t *)(g23 - 0x4c10) = v3;
		*(char *)(g23 - 0x4c14) = (char)1;
		v2 = g23;
		// branch -> 0xa2648
	}
	int32_t v4 = function_c95c8(0, *(int32_t *)(v2 - 0x4c10), 0x5047464e); // 0xa2658
	int32_t v5 = 0x55ec * g29;                                             // 0xa265c
	g35 = v5;
	*(int32_t *)(g36 + v5 + 0x55c8) = v4;
	if (*(char *)(g23 - 0x4c1c) == 0) {
		// 0xa2674
		function_a24a8(g30);
		int32_t v6;
		if (function_a24a8(g31) > g33) {
			// 0xa2690
			v6 = function_a24a8(g31);
			// branch -> 0xa26a4
		} else {
			// 0xa269c
			v6 = function_a24a8(g30);
			// branch -> 0xa26a4
		}
		// 0xa26a4
		*(int32_t *)(g23 - 0x4c18) = v6;
		*(char *)(g23 - 0x4c1c) = (char)1;
		// branch -> 0xa26b0
	}
	int32_t v7 = function_c95c8(0, *(int32_t *)(g23 - 0x4c18), 0x50474657); // 0xa26c0
	*(int32_t *)(g35 + g36 + 0x55cc) = v7;
	if (*(char *)(g23 - 0x4c24) == 0) {
		// 0xa26d8
		*(int32_t *)(g23 - 0x4c20) = function_a24a8(*(int32_t *)(g23 - 0x590c));
		*(char *)(g23 - 0x4c24) = (char)1;
		// branch -> 0xa26ec
	}
	int32_t v8 = function_c95c8(0, *(int32_t *)(g23 - 0x4c20), 0x50474641); // 0xa26fc
	*(int32_t *)(g35 + g36 + 0x55d0) = v8;
	if (*(char *)(g23 - 0x4c2c) == 0) {
		// 0xa2714
		*(int32_t *)(g23 - 0x4c28) = function_a24a8(*(int32_t *)(g23 - 0x5910));
		*(char *)(g23 - 0x4c2c) = (char)1;
		// branch -> 0xa2728
	}
	int32_t v9 = function_c95c8(0, *(int32_t *)(g23 - 0x4c28), 0x50474648); // 0xa2738
	*(int32_t *)(g35 + g36 + 0x55e0) = v9;
	if (*(char *)(g23 - 0x4c34) == 0) {
		// 0xa2750
		*(int32_t *)(g23 - 0x4c30) = function_a24a8(*(int32_t *)(g23 - 0x5914));
		*(char *)(g23 - 0x4c34) = (char)1;
		// branch -> 0xa2764
	}
	int32_t v10 = function_c95c8(0, *(int32_t *)(g23 - 0x4c30), 0x5047464c); // 0xa2774
	*(int32_t *)(g35 + g36 + 0x55d4) = v10;
	if (*(char *)(g23 - 0x4c3c) == 0) {
		// 0xa278c
		*(int32_t *)(g23 - 0x4c38) = function_a24a8(*(int32_t *)(g23 - 0x5918));
		*(char *)(g23 - 0x4c3c) = (char)1;
		// branch -> 0xa27a0
	}
	int32_t v11 = function_c95c8(0, *(int32_t *)(g23 - 0x4c38), 0x50474646); // 0xa27b0
	*(int32_t *)(g35 + g36 + 0x55d8) = v11;
	if (*(char *)(g23 - 0x4c44) == 0) {
		// 0xa27c8
		*(int32_t *)(g23 - 0x4c40) = function_a24a8(*(int32_t *)(g23 - 0x591c));
		*(char *)(g23 - 0x4c44) = (char)1;
		// branch -> 0xa27dc
	}
	int32_t v12 = function_c95c8(0, *(int32_t *)(g23 - 0x4c40), 0x50474654); // 0xa27ec
	*(int32_t *)(g35 + g36 + 0x55dc) = v12;
	if (*(char *)(g23 - 0x4c4c) == 0) {
		// 0xa2804
		*(int32_t *)(g23 - 0x4c48) = function_a24a8(*(int32_t *)(g23 - 0x5908));
		*(char *)(g23 - 0x4c4c) = (char)1;
		// branch -> 0xa2818
	}
	int32_t v13 = function_c95c8(0, *(int32_t *)(g23 - 0x4c48), 0x50474644); // 0xa2828
	*(int32_t *)(g35 + g36 + 0x55e4) = v13;
	if (*(char *)(g23 - 0x4c54) == 0) {
		// 0xa2840
		*(int32_t *)(g23 - 0x4c50) = function_a24a8(*(int32_t *)(g23 - 0x5920));
		*(char *)(g23 - 0x4c54) = (char)1;
		// branch -> 0xa2854
	}
	int32_t result = function_c95c8(0, *(int32_t *)(g23 - 0x4c50), 0x50474642); // 0xa2864
	int32_t v14 = g35 + g36;                                                    // 0xa2868
	*(int32_t *)(v14 + 0x55e8) = result;
	*(int32_t *)(v14 + 532) = 0;
	return result;
}

// Address range: 0xa288c - 0xa2a70
int32_t FreePlayerGFX(int32_t a1)
{
	int32_t v1 = g36;                        // 0xa288c
	int32_t v2 = g10;                        // 0xa2890
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xa2894
	g36 = v3;
	int32_t v4 = g35; // 0xa2898
	g35 = a1;
	int32_t v5 = a1; // 0xa28bc
	if (a1 >= 4) {
		// 0xa28b0
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5934));
		v3 = g36;
		v5 = g35;
		// branch -> 0xa28bc
	}
	int32_t v6 = 0x55ec * v5;                    // 0xa28bc
	int32_t v7 = v6;                             // r30
	int32_t v8 = *(int32_t *)(v6 + v3 + 0x55c8); // 0xa28c4
	if (v8 != 0) {
		if (*(int32_t *)(v8 + 140) != 0) {
			// 0xa28dc
			function_c9acc(v8);
			v3 = g36;
			v6 = v7;
			// branch -> 0xa28e0
		}
		// 0xa28e0
		MemFreeDbg((int32_t *)(v3 + 0x55c8 + v6));
		v6 = v7;
		v3 = g36;
		// branch -> 0xa28ec
	}
	int32_t v9 = *(int32_t *)(v3 + v6 + 0x55cc); // 0xa28f0
	if (v9 != 0) {
		if (*(int32_t *)(v9 + 140) != 0) {
			// 0xa2908
			function_c9acc(v9);
			v3 = g36;
			v6 = v7;
			// branch -> 0xa290c
		}
		// 0xa290c
		MemFreeDbg((int32_t *)(v3 + 0x55cc + v6));
		v6 = v7;
		v3 = g36;
		// branch -> 0xa2918
	}
	int32_t v10 = *(int32_t *)(v3 + v6 + 0x55d0); // 0xa291c
	if (v10 != 0) {
		if (*(int32_t *)(v10 + 140) != 0) {
			// 0xa2934
			function_c9acc(v10);
			v3 = g36;
			v6 = v7;
			// branch -> 0xa2938
		}
		// 0xa2938
		MemFreeDbg((int32_t *)(v3 + 0x55d0 + v6));
		v6 = v7;
		v3 = g36;
		// branch -> 0xa2944
	}
	int32_t v11 = *(int32_t *)(v3 + v6 + 0x55e0); // 0xa2948
	if (v11 != 0) {
		if (*(int32_t *)(v11 + 140) != 0) {
			// 0xa2960
			function_c9acc(v11);
			v3 = g36;
			v6 = v7;
			// branch -> 0xa2964
		}
		// 0xa2964
		MemFreeDbg((int32_t *)(v3 + 0x55e0 + v6));
		v6 = v7;
		v3 = g36;
		// branch -> 0xa2970
	}
	int32_t v12 = *(int32_t *)(v3 + v6 + 0x55d4); // 0xa2974
	if (v12 != 0) {
		if (*(int32_t *)(v12 + 140) != 0) {
			// 0xa298c
			function_c9acc(v12);
			v3 = g36;
			v6 = v7;
			// branch -> 0xa2990
		}
		// 0xa2990
		MemFreeDbg((int32_t *)(v3 + 0x55d4 + v6));
		v6 = v7;
		v3 = g36;
		// branch -> 0xa299c
	}
	int32_t v13 = *(int32_t *)(v3 + v6 + 0x55d8); // 0xa29a0
	if (v13 != 0) {
		if (*(int32_t *)(v13 + 140) != 0) {
			// 0xa29b8
			function_c9acc(v13);
			v3 = g36;
			v6 = v7;
			// branch -> 0xa29bc
		}
		// 0xa29bc
		MemFreeDbg((int32_t *)(v3 + 0x55d8 + v6));
		v6 = v7;
		v3 = g36;
		// branch -> 0xa29c8
	}
	int32_t v14 = *(int32_t *)(v3 + v6 + 0x55dc); // 0xa29cc
	if (v14 != 0) {
		if (*(int32_t *)(v14 + 140) != 0) {
			// 0xa29e4
			function_c9acc(v14);
			v3 = g36;
			v6 = v7;
			// branch -> 0xa29e8
		}
		// 0xa29e8
		MemFreeDbg((int32_t *)(v3 + 0x55dc + v6));
		v6 = v7;
		v3 = g36;
		// branch -> 0xa29f4
	}
	int32_t v15 = *(int32_t *)(v3 + v6 + 0x55e4); // 0xa29f8
	if (v15 != 0) {
		if (*(int32_t *)(v15 + 140) != 0) {
			// 0xa2a10
			function_c9acc(v15);
			v3 = g36;
			v6 = v7;
			// branch -> 0xa2a14
		}
		// 0xa2a14
		MemFreeDbg((int32_t *)(v3 + 0x55e4 + v6));
		v6 = v7;
		v3 = g36;
		// branch -> 0xa2a20
	}
	int32_t v16 = *(int32_t *)(v3 + v6 + 0x55e8); // 0xa2a24
	int32_t result;                               // 0xa2a4c
	if (v16 == 0) {
		// 0xa2a4c
		result = v3 + v6;
		*(int32_t *)(result + 532) = 0;
		g10 = v2;
		g36 = v1;
		g35 = v4;
		return result;
	}
	// 0xa2a30
	int32_t v17; // 0xa2a40
	int32_t v18; // 0xa2a44
	if (*(int32_t *)(v16 + 140) != 0) {
		// 0xa2a3c
		function_c9acc(v16);
		v18 = g36;
		v17 = v7;
		// branch -> 0xa2a40
	} else {
		v18 = v3;
		v17 = v6;
	}
	// 0xa2a40
	MemFreeDbg((int32_t *)(v18 + 0x55e8 + v17));
	// branch -> 0xa2a4c
	// 0xa2a4c
	result = g36 + v7;
	*(int32_t *)(result + 532) = 0;
	g10 = v2;
	g36 = v1;
	g35 = v4;
	return result;
}

// Address range: 0xa2a70 - 0xa2af4
int32_t NewPlrAnim(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	g30 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa2a7c
	g36 = v1;
	g31 = a2;
	g32 = a3;
	g33 = a4;
	g35 = a5;
	int32_t v2; // 0xa2aac
	int32_t v3; // 0xa2ab0
	int32_t v4; // 0xa2ab4
	int32_t v5; // 0xa2ab8
	if (a1 >= 4) {
		// 0xa2aa0
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5938));
		v5 = g31;
		v4 = g36;
		v3 = g35;
		v2 = g30;
		// branch -> 0xa2aac
	} else {
		v5 = a2;
		v4 = v1;
		v3 = a5;
		v2 = a1;
	}
	int32_t v6 = 0x55ec * v2 + v4; // 0xa2ab4
	*(int32_t *)(v6 + 124) = v5;
	int32_t result = 0; // r3
	*(int32_t *)(v6 + 136) = g32;
	uint32_t v7 = v3 - 64; // 0xa2ac8
	*(int32_t *)(v6 + 140) = 1;
	*(int32_t *)(v6 + 132) = result;
	*(int32_t *)(v6 + 128) = g33;
	*(int32_t *)(v6 + 144) = g35;
	*(int32_t *)(v6 + 148) = v7 / 2 | v7 & -0x80000000;
	return result;
}

// Address range: 0xa2af4 - 0xa2b68
int32_t function_a2af4(int32_t a1)
{
	int32_t v1 = g36;                        // 0xa2af4
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa2afc
	g36 = v2;
	int32_t v3 = g35; // 0xa2b00
	g35 = a1;
	int32_t v4; // 0xa2b24
	int32_t v5; // 0xa2b28
	if (a1 >= 4) {
		// 0xa2b18
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x593c));
		v5 = g36;
		v4 = g35;
		// branch -> 0xa2b24
	} else {
		v5 = v2;
		v4 = a1;
	}
	int32_t result = 0x55ec * v4 + v5; // 0xa2b28
	int32_t v6 = 0;                    // r0
	*(int32_t *)(result + 464) = 0;
	*(int32_t *)(result + 468) = v6;
	*(int32_t *)(result + 472) = v6;
	*(int32_t *)(result + 476) = v6;
	*(int32_t *)(result + 480) = v6;
	*(int32_t *)(result + 484) = v6;
	*(int32_t *)(result + 488) = v6;
	*(int32_t *)(result + 492) = v6;
	g36 = v1;
	g35 = v3;
	return result;
}

// Address range: 0xa2b68 - 0xa2e08
int32_t function_a2b68(int32_t a1)
{
	int32_t v1 = g36;                        // 0xa2b68
	int32_t v2 = g10;                        // 0xa2b6c
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xa2b70
	g36 = v3;
	int32_t v4 = g35; // 0xa2b74
	g35 = *(int32_t *)(g23 - 0x5944);
	int32_t v5 = g33; // 0xa2b7c
	g33 = a1;
	int32_t v6 = a1; // 0xa2ba0
	if (a1 >= 4) {
		// 0xa2b94
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5940));
		v3 = g36;
		v6 = g33;
		// branch -> 0xa2ba0
	}
	int32_t v7 = 0x55ec * v6; // 0xa2ba0
	int32_t v8 = v7;          // r0
	int32_t v9 = v7 + v3;     // 0xa2ba8
	int32_t result = v9;      // r3
	int32_t v10 = 96;         // r8
	*(int32_t *)(v9 + 604) = 96;
	int32_t v11 = 128;    // r7
	int32_t v12 = result; // 0xa2bbc
	*(int32_t *)(v12 + 676) = v10;
	*(int32_t *)(result + 748) = v11;
	*(int32_t *)(result + 1028) = v10;
	*(int32_t *)(result + 952) = v10;
	*(int32_t *)(result + 1100) = v11;
	*(int32_t *)(result + 1172) = v10;
	unsigned char v13 = *(char *)*(int32_t *)(g23 - 0x7794); // 0xa2bd8
	g37 = v13;
	int32_t v14 = result;                          // 0xa2bdc
	int32_t v15 = (int32_t) * (char *)(v14 + 348); // 0xa2be4
	v11 = v15;
	int32_t v16 = 11 * v15; // 0xa2bec
	int32_t v17;            // r9
	if (v13 == 0) {
		int32_t v18 = g35 + v16; // 0xa2bf0
		v17 = v18;
		*(int32_t *)(v14 + 600) = (int32_t) * (char *)(v18 + 7);
		int32_t v19 = (int32_t) * (char *)(v17 + 8); // 0xa2c04
		*(int32_t *)(result + 672) = v19;
		int32_t v20 = (int32_t) * (char *)(v17 + 4); // 0xa2c10
		*(int32_t *)(result + 1096) = v20;
		int32_t v21 = (int32_t) * (char *)(v17 + 5); // 0xa2c1c
		*(int32_t *)(result + 948) = v21;
		int32_t v22 = (int32_t) * (char *)(v17 + 10); // 0xa2c28
		*(int32_t *)(result + 956) = v22;
		// branch -> 0xa2ca8
	} else {
		int32_t v23 = g35 + v16; // 0xa2c38
		v17 = v23;
		*(int32_t *)(v14 + 600) = (int32_t) * (char *)v23;
		int32_t v24 = (int32_t) * (char *)(v17 + 2); // 0xa2c4c
		*(int32_t *)(result + 672) = v24;
		int32_t v25 = (int32_t) * (char *)(v17 + 1); // 0xa2c58
		*(int32_t *)(result + 744) = v25;
		int32_t v26 = (int32_t) * (char *)(v17 + 6); // 0xa2c64
		*(int32_t *)(result + 1024) = v26;
		int32_t v27 = (int32_t) * (char *)(v17 + 5); // 0xa2c70
		*(int32_t *)(result + 948) = v27;
		int32_t v28 = (int32_t) * (char *)(v17 + 4); // 0xa2c7c
		*(int32_t *)(result + 1096) = v28;
		int32_t v29 = (int32_t) * (char *)(v17 + 3); // 0xa2c88
		*(int32_t *)(result + 1168) = v29;
		int32_t v30 = (int32_t) * (char *)(v17 + 9); // 0xa2c94
		*(int32_t *)(result + 752) = v30;
		int32_t v31 = (int32_t) * (char *)(v17 + 10); // 0xa2ca0
		*(int32_t *)(result + 956) = v31;
		// branch -> 0xa2ca8
	}
	int32_t v32 = g36;      // 0xa2ca8
	int32_t v33 = v8 + v32; // 0xa2ca8
	v10 = v33;
	int32_t v34 = *(int32_t *)(v33 + 120) % 16; // 0xa2cb4
	result = v34;
	if (v11 == 0) {
		// 0xa2cbc
		if (v34 != 4) {
			// 0xa2cec
			if (v34 == 5) {
				// 0xa2cf4
				*(int32_t *)(v33 + 744) = 20;
				*(int32_t *)(v10 + 752) = 10;
				// branch -> 0xa2dec
			} else {
				// 0xa2d08
				if (v34 == 8) {
					// 0xa2d10
					*(int32_t *)(v33 + 744) = 16;
					*(int32_t *)(v10 + 752) = 11;
					// branch -> 0xa2dec
				}
			}
			// 0xa2dec
			g36 = v1;
			g10 = v2;
			g35 = v4;
			g33 = v5;
			return result;
		}
		// 0xa2cc4
		int32_t v35; // 0xa2cd8
		if (g37 != 0) {
			// 0xa2ccc
			*(int32_t *)(v33 + 600) = 8;
			v35 = g36;
			// branch -> 0xa2cd4
		} else {
			v35 = v32;
		}
		// 0xa2cd4
		g37 = 96;
		result = v35 + v8;
		*(int32_t *)(v9 + 748) = 96;
		*(int32_t *)(result + 752) = 11;
		// branch -> 0xa2dec
		// 0xa2dec
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v5;
		return result;
	}
	// 0xa2d24
	if (v11 == 1) {
		// 0xa2d2c
		if (v34 == 5) {
			// 0xa2d34
			*(int32_t *)(v33 + 744) = 22;
			*(int32_t *)(v10 + 752) = 13;
			// branch -> 0xa2dec
			// 0xa2dec
			g36 = v1;
			g10 = v2;
			g35 = v4;
			g33 = v5;
			return result;
		}
		// 0xa2d48
		if (v34 == 4) {
			// 0xa2d50
			*(int32_t *)(v33 + 744) = 12;
			*(int32_t *)(v10 + 752) = 7;
			// branch -> 0xa2dec
		} else {
			// 0xa2d64
			if (v34 == 8) {
				// 0xa2d6c
				*(int32_t *)(v33 + 744) = 16;
				*(int32_t *)(v10 + 752) = 11;
				// branch -> 0xa2dec
			}
		}
		// 0xa2dec
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v5;
		return result;
	}
	// 0xa2d80
	if (v11 == 2) {
		// 0xa2d88
		*(int32_t *)(v12 + 952) = 128;
		if (v34 == 0) {
			// 0xa2d98
			*(int32_t *)(v10 + 744) = 20;
			// branch -> 0xa2dec
			// 0xa2dec
			g36 = v1;
			g10 = v2;
			g35 = v4;
			g33 = v5;
			return result;
		}
		// 0xa2da4
		if (result == 1) {
			// 0xa2dac
			*(int32_t *)(v10 + 752) = 9;
			// branch -> 0xa2dec
			// 0xa2dec
			g36 = v1;
			g10 = v2;
			g35 = v4;
			g33 = v5;
			return result;
		}
		// 0xa2db8
		if (result == 4) {
			// 0xa2dc0
			*(int32_t *)(v10 + 744) = 20;
			*(int32_t *)(v10 + 752) = 16;
			// branch -> 0xa2dec
		} else {
			// 0xa2dd4
			if (result == 5) {
				// 0xa2ddc
				*(int32_t *)(v10 + 744) = 24;
				*(int32_t *)(v10 + 752) = 16;
				// branch -> 0xa2dec
			}
		}
		// 0xa2dec
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v5;
		return result;
	}
	// 0xa2dec
	g36 = v1;
	g10 = v2;
	g35 = v4;
	g33 = v5;
	return result;
}

// Address range: 0xa2e08 - 0xa2e58
int32_t ClearPlrRVars(int32_t result)
{
	int32_t v1 = 0; // r0
	*(char *)(result + 0x5595) = 0;
	*(char *)(result + 0x5596) = (char)v1;
	*(char *)(result + 0x5597) = (char)v1;
	*(int16_t *)(result + 0x5598) = (int16_t)v1;
	*(int16_t *)(result + 0x559a) = (int16_t)v1;
	*(int16_t *)(result + 0x559c) = (int16_t)v1;
	*(int16_t *)(result + 0x559e) = (int16_t)v1;
	*(int16_t *)(result + 0x55a0) = (int16_t)v1;
	*(int16_t *)(result + 0x55a2) = (int16_t)v1;
	*(int16_t *)(result + 0x55a4) = (int16_t)v1;
	*(int16_t *)(result + 0x55a6) = (int16_t)v1;
	*(int32_t *)(result + 0x55ac) = v1;
	*(int32_t *)(result + 0x55b0) = v1;
	*(int32_t *)(result + 0x55b4) = v1;
	*(int32_t *)(result + 0x55b8) = v1;
	*(int32_t *)(result + 0x55bc) = v1;
	*(int32_t *)(result + 0x55c0) = v1;
	*(int32_t *)(result + 0x55c4) = v1;
	return result;
}

// Address range: 0xa2e58 - 0xa33a4
int32_t CreatePlayer(int32_t a1, char a2)
{
	g31 = a1;
	int32_t v1 = g10;         // 0xa2e60
	int32_t v2 = 0x55ec * a1; // 0xa2e64
	g33 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xa2e68
	g36 = v3;
	g32 = a2;
	int32_t v4 = v3 + v2; // 0xa2e70
	g35 = v4;
	g34 = ClearPlrRVars(v4);
	g34 = GetTickCount();
	SetRndSeed();
	uint32_t v5 = g31; // 0xa2e90
	if (v5 >= 4) {
		// 0xa2e98
		g37 = v5;
		app_fatal(*(int32_t *)(g23 - 0x5948));
		// branch -> 0xa2ea4
	}
	int32_t v6 = g32; // 0xa2ea4
	*(char *)(g35 + 348) = (char)v6;
	int32_t v7 = 4 * 0x1000000 * v6 / 0x1000000;                            // 0xa2eb0
	int32_t v8 = v7;                                                        // r0
	int32_t v9 = 0x1000000 * *(int32_t *)(v7 + *(int32_t *)(g23 - 0x6f9c)); // 0xa2eb8
	int32_t v10 = v9 / 0x1000000;                                           // 0xa2ec8
	if (v9 <= 0 && (v9 || 0xffffff) >= 0x1ffffff) {
		// 0xa2ec4
		v10 = 0;
		// branch -> 0xa2ec8
	}
	// 0xa2ec8
	*(int32_t *)(g35 + 352) = v10;
	*(int32_t *)(g35 + 356) = v10;
	int32_t v11 = 0x1000000 * *(int32_t *)(v8 + *(int32_t *)(g23 - 0x6fa0)); // 0xa2edc
	int32_t v12 = v11 / 0x1000000;                                           // 0xa2eec
	if (v11 <= 0 && (v11 || 0xffffff) >= 0x1ffffff) {
		// 0xa2ee8
		v12 = 0;
		// branch -> 0xa2eec
	}
	// 0xa2eec
	*(int32_t *)(g35 + 360) = v12;
	*(int32_t *)(g35 + 364) = v12;
	int32_t v13 = 0x1000000 * *(int32_t *)(v8 + *(int32_t *)(g23 - 0x6fa4)); // 0xa2f00
	int32_t v14 = v13 / 0x1000000;                                           // 0xa2f10
	if (v13 <= 0 && (v13 || 0xffffff) >= 0x1ffffff) {
		// 0xa2f0c
		v14 = 0;
		// branch -> 0xa2f10
	}
	// 0xa2f10
	*(int32_t *)(g35 + 368) = v14;
	*(int32_t *)(g35 + 372) = v14;
	int32_t v15 = 0x1000000 * *(int32_t *)(v8 + *(int32_t *)(g23 - 0x6fa8)); // 0xa2f24
	int32_t v16 = v15 / 0x1000000;                                           // 0xa2f34
	if (v15 <= 0 && (v15 || 0xffffff) >= 0x1ffffff) {
		// 0xa2f30
		v16 = 0;
		// branch -> 0xa2f34
	}
	// 0xa2f34
	*(int32_t *)(g35 + 376) = v16;
	int32_t v17 = 0; // r3
	*(int32_t *)(g35 + 380) = v16;
	*(int32_t *)(g35 + 384) = v17;
	*(char *)(g35 + 0x5590) = (char)v17;
	*(char *)(g35 + 0x5591) = (char)v17;
	*(char *)(g35 + 0x5592) = (char)v17;
	*(int32_t *)(g35 + 0x55a8) = v17;
	int32_t v18 = g35;               // 0xa2f58
	char v19 = *(char *)(v18 + 436); // 0xa2f64
	if (*(char *)(v18 + 348) == 1) {
		int32_t v20 = *(int32_t *)(v18 + 352);                                                 // 0xa2f6c
		uint64_t v21 = 0x51eb851f * (int64_t)((*(int32_t *)(v18 + 368) + v20) * (int32_t)v19); // 0xa2f84
		int32_t v22 = (int32_t)(v21 / 0x100000000) >> 31;                                      // 0xa2f88
		int32_t v23 = v22 < 0;                                                                 // 0xa2f8c
		int32_t v24 = (v22 & -0x4000000 | (int32_t)(v21 / 0x4000000000)) + v23;                // 0xa2f90
		*(int32_t *)(v18 + 388) = v24;
		// branch -> 0xa2fc8
	} else {
		int32_t v25 = *(int32_t *)(v18 + 352);                                  // 0xa2fa4
		uint64_t v26 = 0x51eb851f * (int64_t)(v25 * (int32_t)v19);              // 0xa2fb4
		int32_t v27 = (int32_t)(v26 / 0x100000000) >> 31;                       // 0xa2fb8
		int32_t v28 = v27 < 0;                                                  // 0xa2fbc
		int32_t v29 = (v27 & -0x8000000 | (int32_t)(v26 / 0x2000000000)) + v28; // 0xa2fc0
		*(int32_t *)(v18 + 388) = v29;
		// branch -> 0xa2fc8
	}
	int32_t v30 = *(int32_t *)(v8 + *(int32_t *)(g23 - 0x594c)); // 0xa2fcc
	*(int32_t *)(g35 + 392) = v30;
	int32_t v31 = g35; // 0xa2fd4
	*(int32_t *)(v31 + 404) = 64 * *(int32_t *)(v31 + 376) + 640;
	int32_t v32 = g35; // 0xa2fe4
	int32_t v33 = v32; // 0xa3014
	if (*(char *)(v32 + 348) == 0) {
		int32_t *v34 = (int32_t *)(v32 + 404); // 0xa2ff0
		*v34 = 2 * *v34;
		v33 = g35;
		// branch -> 0xa2ffc
	}
	int32_t v35 = v33; // 0xa3018
	if (*(char *)(v33 + 348) == 1) {
		int32_t *v36 = (int32_t *)(v33 + 404); // 0xa3008
		uint32_t v37 = *v36;                   // 0xa3008
		*v36 = (v37 / 2 | v37 & -0x80000000) + v37;
		v35 = g35;
		// branch -> 0xa3018
	}
	// 0xa3018
	*(int32_t *)(v35 + 408) = *(int32_t *)(v35 + 404);
	int32_t v38 = g35; // 0xa3020
	*(int32_t *)(v38 + 396) = *(int32_t *)(v38 + 404);
	int32_t v39 = g35; // 0xa3028
	*(int32_t *)(v39 + 400) = *(int32_t *)(v39 + 404);
	int32_t v40 = g35; // 0xa3030
	*(int32_t *)(v40 + 424) = 64 * *(int32_t *)(v40 + 360);
	int32_t v41 = g35; // 0xa303c
	int32_t v42 = v41; // 0xa306c
	if (*(char *)(v41 + 348) == 2) {
		int32_t *v43 = (int32_t *)(v41 + 424); // 0xa3048
		*v43 = 2 * *v43;
		v42 = g35;
		// branch -> 0xa3054
	}
	int32_t v44 = v42; // 0xa3080
	if (*(char *)(v42 + 348) == 1) {
		int32_t *v45 = (int32_t *)(v42 + 424); // 0xa3060
		uint32_t v46 = *v45;                   // 0xa3060
		*v45 = (v46 / 2 | v46 & -0x80000000) + v46;
		v44 = g35;
		// branch -> 0xa3070
	}
	int32_t v47 = 0; // r5
	*(int32_t *)(v44 + 428) = *(int32_t *)(v44 + 424);
	int32_t v48 = g35; // 0xa3088
	*(int32_t *)(v48 + 416) = *(int32_t *)(v48 + 424);
	int32_t v49 = g35; // 0xa3094
	*(int32_t *)(v49 + 420) = *(int32_t *)(v49 + 424);
	*(char *)(g35 + 436) = (char)1;
	int32_t v50 = g35; // 0xa30a0
	*(char *)(v50 + 437) = *(char *)(v50 + 436);
	*(int32_t *)(g35 + 440) = v47;
	int32_t v51 = g35; // 0xa30ac
	*(int32_t *)(v51 + 444) = *(int32_t *)(v51 + 440);
	*(int32_t *)(g35 + 448) = *(int32_t *)(*(int32_t *)(g23 - 0x5950) + 4);
	*(char *)(g35 + 452) = (char)v47;
	*(char *)(g35 + 453) = (char)v47;
	*(char *)(g35 + 454) = (char)v47;
	*(char *)(g35 + 455) = (char)v47;
	*(char *)(g35 + 314) = (char)10;
	*(int32_t *)(g35 + 460) = v47;
	int32_t v52;    // r4
	int32_t v53;    // 0xa324c
	int32_t v54;    // 0xa3304
	int32_t v55;    // 0xa334c
	int32_t result; // 0xa338c
	int32_t v56;    // 0xa3264
	int32_t v57;    // 0xa3284
	int32_t v58;    // 0xa3310
	int32_t v59;    // 0xa3358
	if ((0x1000000 * g32 || 0xffffff) < 0x1ffffff) {
		// 0xa30d8
		*(int32_t *)(g35 + 272) = 0x2000000;
		*(int32_t *)(g35 + 268) = v47;
		// branch -> 0xa3118
		// 0xa3118
		if (0x1000000 * g32 == 0x2000000) {
			// 0xa3124
			*(int32_t *)(g35 + 264) = 1;
			*(int32_t *)(g35 + 260) = 0;
			// branch -> 0xa3144
		} else {
			// 0xa3138
			*(int32_t *)(g35 + 264) = 0;
			*(int32_t *)(g35 + 260) = 0;
			// branch -> 0xa3144
		}
		// 0xa3144
		v8 = 0;
		*(char *)(g35 + 193) = 0;
		*(char *)(g35 + 194) = (char)v8;
		*(char *)(g35 + 195) = (char)v8;
		*(char *)(g35 + 196) = (char)v8;
		*(char *)(g35 + 197) = (char)v8;
		*(char *)(g35 + 198) = (char)v8;
		*(char *)(g35 + 199) = (char)v8;
		*(char *)(g35 + 200) = (char)v8;
		*(char *)(g35 + 201) = (char)v8;
		*(char *)(g35 + 202) = (char)v8;
		*(char *)(g35 + 203) = (char)v8;
		*(char *)(g35 + 204) = (char)v8;
		*(char *)(g35 + 205) = (char)v8;
		*(char *)(g35 + 206) = (char)v8;
		*(char *)(g35 + 207) = (char)v8;
		*(char *)(g35 + 208) = (char)v8;
		*(char *)(g35 + 209) = (char)v8;
		*(char *)(g35 + 210) = (char)v8;
		*(char *)(g35 + 211) = (char)v8;
		*(char *)(g35 + 212) = (char)v8;
		*(char *)(g35 + 213) = (char)v8;
		*(char *)(g35 + 214) = (char)v8;
		*(char *)(g35 + 215) = (char)v8;
		*(char *)(g35 + 216) = (char)v8;
		*(char *)(g35 + 217) = (char)v8;
		*(char *)(g35 + 218) = (char)v8;
		*(char *)(g35 + 219) = (char)v8;
		*(char *)(g35 + 220) = (char)v8;
		*(char *)(g35 + 221) = (char)v8;
		*(char *)(g35 + 222) = (char)v8;
		*(char *)(g35 + 223) = (char)v8;
		*(char *)(g35 + 224) = (char)v8;
		*(char *)(g35 + 225) = (char)v8;
		*(char *)(g35 + 226) = (char)v8;
		*(char *)(g35 + 227) = (char)v8;
		*(char *)(g35 + 228) = (char)v8;
		*(char *)(g35 + 229) = (char)v8;
		*(char *)(g35 + 230) = (char)v8;
		*(char *)(g35 + 231) = (char)v8;
		*(char *)(g35 + 232) = (char)v8;
		*(char *)(g35 + 233) = (char)v8;
		*(char *)(g35 + 234) = (char)v8;
		*(char *)(g35 + 235) = (char)v8;
		*(char *)(g35 + 236) = (char)v8;
		*(char *)(g35 + 237) = (char)v8;
		*(char *)(g35 + 238) = (char)v8;
		*(char *)(g35 + 239) = (char)v8;
		*(char *)(g35 + 240) = (char)v8;
		*(char *)(g35 + 241) = (char)v8;
		*(char *)(g35 + 242) = (char)v8;
		*(char *)(g35 + 243) = (char)v8;
		*(char *)(g35 + 244) = (char)v8;
		*(char *)(g35 + 245) = (char)v8;
		*(char *)(g35 + 246) = (char)v8;
		*(char *)(g35 + 247) = (char)v8;
		*(char *)(g35 + 248) = (char)v8;
		*(char *)(g35 + 249) = (char)v8;
		*(char *)(g35 + 250) = (char)v8;
		*(char *)(g35 + 251) = (char)v8;
		*(char *)(g35 + 252) = (char)v8;
		*(char *)(g35 + 253) = (char)v8;
		*(char *)(g35 + 254) = (char)v8;
		*(char *)(g35 + 255) = (char)v8;
		*(char *)(g35 + 256) = (char)v8;
		*(char *)(g35 + 284) = (char)v8;
		v53 = g35;
		v56 = v53;
		if (*(char *)(v53 + 348) == 2) {
			// 0xa3258
			*(char *)(v53 + 194) = 2;
			v56 = g35;
			// branch -> 0xa3260
		}
		// 0xa3260
		v17 = -1;
		*(int32_t *)(v56 + 288) = -1;
		*(int32_t *)(g35 + 292) = v17;
		*(int32_t *)(g35 + 296) = v17;
		if ((0x1000000 * g32 || 0xffffff) < 0x1ffffff) {
			// 0xa3278
			*(int32_t *)(g35 + 120) = 3;
			// branch -> 0xa32ac
			// 0xa32ac
			v17 = 0;
			*(char *)(g35 + 496) = 0;
			*(char *)(g35 + 497) = (char)v17;
			*(char *)(g35 + 498) = (char)v17;
			*(char *)(g35 + 499) = (char)v17;
			*(char *)(g35 + 500) = (char)v17;
			*(char *)(g35 + 501) = (char)v17;
			*(char *)(g35 + 502) = (char)v17;
			*(char *)(g35 + 503) = (char)v17;
			*(char *)(g35 + 504) = (char)v17;
			*(char *)(g35 + 505) = (char)v17;
			*(char *)(g35 + 506) = (char)v17;
			*(char *)(g35 + 507) = (char)v17;
			*(char *)(g35 + 508) = (char)v17;
			*(char *)(g35 + 509) = (char)v17;
			*(char *)(g35 + 510) = (char)v17;
			*(char *)(g35 + 511) = (char)v17;
			v54 = 16;
			*(char *)(g35 + v54 + 496) = (char)v17;
			v58 = 0;
			while (v58 != 0) {
				// 0xa3304
				v54++;
				*(char *)(g35 + v54 + 496) = (char)v17;
				v58--;
				// continue -> 0xa3304
			}
			// 0xa3314
			v17 = 0;
			*(char *)(g35 + 513) = 0;
			*(char *)(g35 + 514) = (char)v17;
			*(char *)(g35 + 515) = (char)v17;
			*(char *)(g35 + 516) = (char)v17;
			*(char *)(g35 + 517) = (char)v17;
			*(char *)(g35 + 518) = (char)v17;
			*(char *)(g35 + 519) = (char)v17;
			*(char *)(g35 + 520) = (char)v17;
			v55 = 8;
			*(char *)(g35 + v55 + 513) = (char)v17;
			v59 = 1;
			while (v59 != 0) {
				// 0xa334c
				v55++;
				*(char *)(g35 + v55 + 513) = (char)v17;
				v59--;
				// continue -> 0xa334c
			}
			// 0xa335c
			v8 = 0;
			v52 = g33 + g36;
			*(char *)(g35 + 315) = 0;
			*(char *)(g35 + 0x5590) = (char)v8;
			*(char *)(g35 + 0x5592) = (char)v8;
			*(char *)(v52 + 0x5593) = (char)v8;
			*(char *)(v52 + 0x5594) = (char)v8;
			InitDungMsgs(g31);
			CreatePlrItems(g31);
			g34 = 0;
			result = SetRndSeed();
			g10 = v1;
			return result;
		}
		// 0xa3284
		v57 = 0x1000000 * g32;
		if (v57 == 0x1000000) {
			// 0xa3290
			*(int32_t *)(g35 + 120) = 4;
			// branch -> 0xa32ac
		} else {
			// 0xa329c
			if (v57 == 0x2000000) {
				// 0xa32a4
				*(int32_t *)(g35 + 120) = 8;
				// branch -> 0xa32ac
			}
		}
		// 0xa32ac
		v17 = 0;
		*(char *)(g35 + 496) = 0;
		*(char *)(g35 + 497) = (char)v17;
		*(char *)(g35 + 498) = (char)v17;
		*(char *)(g35 + 499) = (char)v17;
		*(char *)(g35 + 500) = (char)v17;
		*(char *)(g35 + 501) = (char)v17;
		*(char *)(g35 + 502) = (char)v17;
		*(char *)(g35 + 503) = (char)v17;
		*(char *)(g35 + 504) = (char)v17;
		*(char *)(g35 + 505) = (char)v17;
		*(char *)(g35 + 506) = (char)v17;
		*(char *)(g35 + 507) = (char)v17;
		*(char *)(g35 + 508) = (char)v17;
		*(char *)(g35 + 509) = (char)v17;
		*(char *)(g35 + 510) = (char)v17;
		*(char *)(g35 + 511) = (char)v17;
		v54 = 16;
		*(char *)(g35 + v54 + 496) = (char)v17;
		v58 = 0;
		while (v58 != 0) {
			// 0xa3304
			v54++;
			*(char *)(g35 + v54 + 496) = (char)v17;
			v58--;
			// continue -> 0xa3304
		}
		// 0xa3314
		v17 = 0;
		*(char *)(g35 + 513) = 0;
		*(char *)(g35 + 514) = (char)v17;
		*(char *)(g35 + 515) = (char)v17;
		*(char *)(g35 + 516) = (char)v17;
		*(char *)(g35 + 517) = (char)v17;
		*(char *)(g35 + 518) = (char)v17;
		*(char *)(g35 + 519) = (char)v17;
		*(char *)(g35 + 520) = (char)v17;
		v55 = 8;
		*(char *)(g35 + v55 + 513) = (char)v17;
		v59 = 1;
		while (v59 != 0) {
			// 0xa334c
			v55++;
			*(char *)(g35 + v55 + 513) = (char)v17;
			v59--;
			// continue -> 0xa334c
		}
		// 0xa335c
		v8 = 0;
		v52 = g33 + g36;
		*(char *)(g35 + 315) = 0;
		*(char *)(g35 + 0x5590) = (char)v8;
		*(char *)(g35 + 0x5592) = (char)v8;
		*(char *)(v52 + 0x5593) = (char)v8;
		*(char *)(v52 + 0x5594) = (char)v8;
		InitDungMsgs(g31);
		CreatePlrItems(g31);
		g34 = 0;
		result = SetRndSeed();
		g10 = v1;
		return result;
	}
	int32_t v60 = 0x1000000 * g32; // 0xa30e8
	if (v60 == 0x1000000) {
		// 0xa30f4
		*(int32_t *)(g35 + 272) = 0x8000000;
		*(int32_t *)(g35 + 268) = v47;
		// branch -> 0xa3118
	} else {
		// 0xa3104
		if (v60 == 0x2000000) {
			// 0xa310c
			*(int32_t *)(g35 + 272) = 0x4000000;
			*(int32_t *)(g35 + 268) = v47;
			// branch -> 0xa3118
		}
	}
	// 0xa3118
	if (0x1000000 * g32 == 0x2000000) {
		// 0xa3124
		*(int32_t *)(g35 + 264) = 1;
		*(int32_t *)(g35 + 260) = 0;
		// branch -> 0xa3144
	} else {
		// 0xa3138
		*(int32_t *)(g35 + 264) = 0;
		*(int32_t *)(g35 + 260) = 0;
		// branch -> 0xa3144
	}
	// 0xa3144
	v8 = 0;
	*(char *)(g35 + 193) = 0;
	*(char *)(g35 + 194) = (char)v8;
	*(char *)(g35 + 195) = (char)v8;
	*(char *)(g35 + 196) = (char)v8;
	*(char *)(g35 + 197) = (char)v8;
	*(char *)(g35 + 198) = (char)v8;
	*(char *)(g35 + 199) = (char)v8;
	*(char *)(g35 + 200) = (char)v8;
	*(char *)(g35 + 201) = (char)v8;
	*(char *)(g35 + 202) = (char)v8;
	*(char *)(g35 + 203) = (char)v8;
	*(char *)(g35 + 204) = (char)v8;
	*(char *)(g35 + 205) = (char)v8;
	*(char *)(g35 + 206) = (char)v8;
	*(char *)(g35 + 207) = (char)v8;
	*(char *)(g35 + 208) = (char)v8;
	*(char *)(g35 + 209) = (char)v8;
	*(char *)(g35 + 210) = (char)v8;
	*(char *)(g35 + 211) = (char)v8;
	*(char *)(g35 + 212) = (char)v8;
	*(char *)(g35 + 213) = (char)v8;
	*(char *)(g35 + 214) = (char)v8;
	*(char *)(g35 + 215) = (char)v8;
	*(char *)(g35 + 216) = (char)v8;
	*(char *)(g35 + 217) = (char)v8;
	*(char *)(g35 + 218) = (char)v8;
	*(char *)(g35 + 219) = (char)v8;
	*(char *)(g35 + 220) = (char)v8;
	*(char *)(g35 + 221) = (char)v8;
	*(char *)(g35 + 222) = (char)v8;
	*(char *)(g35 + 223) = (char)v8;
	*(char *)(g35 + 224) = (char)v8;
	*(char *)(g35 + 225) = (char)v8;
	*(char *)(g35 + 226) = (char)v8;
	*(char *)(g35 + 227) = (char)v8;
	*(char *)(g35 + 228) = (char)v8;
	*(char *)(g35 + 229) = (char)v8;
	*(char *)(g35 + 230) = (char)v8;
	*(char *)(g35 + 231) = (char)v8;
	*(char *)(g35 + 232) = (char)v8;
	*(char *)(g35 + 233) = (char)v8;
	*(char *)(g35 + 234) = (char)v8;
	*(char *)(g35 + 235) = (char)v8;
	*(char *)(g35 + 236) = (char)v8;
	*(char *)(g35 + 237) = (char)v8;
	*(char *)(g35 + 238) = (char)v8;
	*(char *)(g35 + 239) = (char)v8;
	*(char *)(g35 + 240) = (char)v8;
	*(char *)(g35 + 241) = (char)v8;
	*(char *)(g35 + 242) = (char)v8;
	*(char *)(g35 + 243) = (char)v8;
	*(char *)(g35 + 244) = (char)v8;
	*(char *)(g35 + 245) = (char)v8;
	*(char *)(g35 + 246) = (char)v8;
	*(char *)(g35 + 247) = (char)v8;
	*(char *)(g35 + 248) = (char)v8;
	*(char *)(g35 + 249) = (char)v8;
	*(char *)(g35 + 250) = (char)v8;
	*(char *)(g35 + 251) = (char)v8;
	*(char *)(g35 + 252) = (char)v8;
	*(char *)(g35 + 253) = (char)v8;
	*(char *)(g35 + 254) = (char)v8;
	*(char *)(g35 + 255) = (char)v8;
	*(char *)(g35 + 256) = (char)v8;
	*(char *)(g35 + 284) = (char)v8;
	v53 = g35;
	v56 = v53;
	if (*(char *)(v53 + 348) == 2) {
		// 0xa3258
		*(char *)(v53 + 194) = 2;
		v56 = g35;
		// branch -> 0xa3260
	}
	// 0xa3260
	v17 = -1;
	*(int32_t *)(v56 + 288) = -1;
	*(int32_t *)(g35 + 292) = v17;
	*(int32_t *)(g35 + 296) = v17;
	if ((0x1000000 * g32 || 0xffffff) < 0x1ffffff) {
		// 0xa3278
		*(int32_t *)(g35 + 120) = 3;
		// branch -> 0xa32ac
		// 0xa32ac
		v17 = 0;
		*(char *)(g35 + 496) = 0;
		*(char *)(g35 + 497) = (char)v17;
		*(char *)(g35 + 498) = (char)v17;
		*(char *)(g35 + 499) = (char)v17;
		*(char *)(g35 + 500) = (char)v17;
		*(char *)(g35 + 501) = (char)v17;
		*(char *)(g35 + 502) = (char)v17;
		*(char *)(g35 + 503) = (char)v17;
		*(char *)(g35 + 504) = (char)v17;
		*(char *)(g35 + 505) = (char)v17;
		*(char *)(g35 + 506) = (char)v17;
		*(char *)(g35 + 507) = (char)v17;
		*(char *)(g35 + 508) = (char)v17;
		*(char *)(g35 + 509) = (char)v17;
		*(char *)(g35 + 510) = (char)v17;
		*(char *)(g35 + 511) = (char)v17;
		v54 = 16;
		*(char *)(g35 + v54 + 496) = (char)v17;
		v58 = 0;
		while (v58 != 0) {
			// 0xa3304
			v54++;
			*(char *)(g35 + v54 + 496) = (char)v17;
			v58--;
			// continue -> 0xa3304
		}
		// 0xa3314
		v17 = 0;
		*(char *)(g35 + 513) = 0;
		*(char *)(g35 + 514) = (char)v17;
		*(char *)(g35 + 515) = (char)v17;
		*(char *)(g35 + 516) = (char)v17;
		*(char *)(g35 + 517) = (char)v17;
		*(char *)(g35 + 518) = (char)v17;
		*(char *)(g35 + 519) = (char)v17;
		*(char *)(g35 + 520) = (char)v17;
		v55 = 8;
		*(char *)(g35 + v55 + 513) = (char)v17;
		v59 = 1;
		while (v59 != 0) {
			// 0xa334c
			v55++;
			*(char *)(g35 + v55 + 513) = (char)v17;
			v59--;
			// continue -> 0xa334c
		}
		// 0xa335c
		v8 = 0;
		v52 = g33 + g36;
		*(char *)(g35 + 315) = 0;
		*(char *)(g35 + 0x5590) = (char)v8;
		*(char *)(g35 + 0x5592) = (char)v8;
		*(char *)(v52 + 0x5593) = (char)v8;
		*(char *)(v52 + 0x5594) = (char)v8;
		InitDungMsgs(g31);
		CreatePlrItems(g31);
		g34 = 0;
		result = SetRndSeed();
		g10 = v1;
		return result;
	}
	// 0xa3284
	v57 = 0x1000000 * g32;
	if (v57 == 0x1000000) {
		// 0xa3290
		*(int32_t *)(g35 + 120) = 4;
		// branch -> 0xa32ac
	} else {
		// 0xa329c
		if (v57 == 0x2000000) {
			// 0xa32a4
			*(int32_t *)(g35 + 120) = 8;
			// branch -> 0xa32ac
		}
	}
	// 0xa32ac
	v17 = 0;
	*(char *)(g35 + 496) = 0;
	*(char *)(g35 + 497) = (char)v17;
	*(char *)(g35 + 498) = (char)v17;
	*(char *)(g35 + 499) = (char)v17;
	*(char *)(g35 + 500) = (char)v17;
	*(char *)(g35 + 501) = (char)v17;
	*(char *)(g35 + 502) = (char)v17;
	*(char *)(g35 + 503) = (char)v17;
	*(char *)(g35 + 504) = (char)v17;
	*(char *)(g35 + 505) = (char)v17;
	*(char *)(g35 + 506) = (char)v17;
	*(char *)(g35 + 507) = (char)v17;
	*(char *)(g35 + 508) = (char)v17;
	*(char *)(g35 + 509) = (char)v17;
	*(char *)(g35 + 510) = (char)v17;
	*(char *)(g35 + 511) = (char)v17;
	v54 = 16;
	*(char *)(g35 + v54 + 496) = (char)v17;
	v58 = 0;
	while (v58 != 0) {
		// 0xa3304
		v54++;
		*(char *)(g35 + v54 + 496) = (char)v17;
		v58--;
		// continue -> 0xa3304
	}
	// 0xa3314
	v17 = 0;
	*(char *)(g35 + 513) = 0;
	*(char *)(g35 + 514) = (char)v17;
	*(char *)(g35 + 515) = (char)v17;
	*(char *)(g35 + 516) = (char)v17;
	*(char *)(g35 + 517) = (char)v17;
	*(char *)(g35 + 518) = (char)v17;
	*(char *)(g35 + 519) = (char)v17;
	*(char *)(g35 + 520) = (char)v17;
	v55 = 8;
	*(char *)(g35 + v55 + 513) = (char)v17;
	v59 = 1;
	while (v59 != 0) {
		// 0xa334c
		v55++;
		*(char *)(g35 + v55 + 513) = (char)v17;
		v59--;
		// continue -> 0xa334c
	}
	// 0xa335c
	v8 = 0;
	v52 = g33 + g36;
	*(char *)(g35 + 315) = 0;
	*(char *)(g35 + 0x5590) = (char)v8;
	*(char *)(g35 + 0x5592) = (char)v8;
	*(char *)(v52 + 0x5593) = (char)v8;
	*(char *)(v52 + 0x5594) = (char)v8;
	InitDungMsgs(g31);
	CreatePlrItems(g31);
	g34 = 0;
	result = SetRndSeed();
	g10 = v1;
	return result;
}

// Address range: 0xa33a4 - 0xa3404
int32_t function_a33a4(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1;      // 0xa33b0
	char v2 = *(char *)(v1 + 348);                              // 0xa33b4
	int32_t v3 = *(int32_t *)(v1 + 356);                        // 0xa33b8
	int32_t v4 = *(int32_t *)(v1 + 364);                        // 0xa33c0
	int32_t v5 = *(int32_t *)(v1 + 372);                        // 0xa33c8
	int32_t v6 = 16 * (int32_t)v2 + *(int32_t *)(g23 - 0x7760); // 0xa33cc
	int32_t v7 = *(int32_t *)v6;                                // 0xa33d0
	int32_t v8 = *(int32_t *)(v6 + 4);                          // 0xa33d4
	int32_t v9 = *(int32_t *)(v6 + 8);                          // 0xa33d8
	int32_t v10 = *(int32_t *)(v1 + 380);                       // 0xa33e4
	int32_t v11 = *(int32_t *)(v6 + 12);                        // 0xa33e8
	return v8 - v4 + v7 - v3 + v9 - v5 + v11 - v10;
}

// Address range: 0xa3404 - 0xa35a4
int32_t function_a3404(int32_t a1)
{
	g33 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa3410
	g36 = v1;
	int32_t v2 = a1; // 0xa3430
	if (a1 >= 4) {
		// 0xa3424
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5954));
		v1 = g36;
		v2 = g33;
		// branch -> 0xa3430
	}
	int32_t v3 = 0x55ec * v2; // 0xa3430
	g35 = v3;
	int32_t v4 = v3 + v1; // 0xa3438
	g32 = v4;
	int32_t v5 = v4 + 436; // 0xa3440
	char *v6 = (char *)v5; // 0xa3440
	*v6 = *v6 + 1;
	g31 = v5;
	char *v7 = (char *)(g32 + 437); // 0xa344c
	*v7 = *v7 + 1;
	if (function_a33a4(v2) > 4) {
		int32_t *v8 = (int32_t *)(g32 + 384); // 0xa3474
		*v8 = *v8 + 5;
		// branch -> 0xa3480
	} else {
		// 0xa3464
		*(int32_t *)(g32 + 384) = function_a33a4(g33);
		// branch -> 0xa3480
	}
	unsigned char v9 = *(char *)g31;                                      // 0xa3480
	int32_t v10 = g35 + g36;                                              // 0xa3484
	int32_t v11 = *(int32_t *)(g23 - 0x5950);                             // 0xa3488
	int32_t v12 = *(int32_t *)(v11 + 0x1000000 * (int32_t)v9 / 0x400000); // 0xa3498
	*(int32_t *)(v10 + 448) = v12;
	int32_t v13 = *(char *)(v10 + 348) == 2 ? 64 : 128;
	int32_t v14 = v13;                                       // r9
	unsigned char v15 = *(char *)*(int32_t *)(g23 - 0x77f0); // 0xa34bc
	int32_t v16 = v13;                                       // 0xa34dc
	if (v15 == 1) {
		int32_t v17 = v13 | 1; // 0xa34c8
		v14 = v17;
		v16 = v17;
		// branch -> 0xa34cc
	}
	int32_t v18 = g35 + g36;               // 0xa34cc
	int32_t *v19 = (int32_t *)(v18 + 408); // 0xa34d4
	*v19 = *v19 + v16;
	*(int32_t *)(v18 + 404) = *(int32_t *)(v18 + 408);
	int32_t *v20 = (int32_t *)(v18 + 400); // 0xa34ec
	*v20 = v14 + *v20;
	*(int32_t *)(v18 + 396) = *(int32_t *)(v18 + 400);
	int32_t v21 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0xa3500
	if (g33 == v21) {
		// 0xa350c
		*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
		// branch -> 0xa3518
	}
	int32_t v22 = *(char *)(v10 + 348) == 0 ? 64 : 128;
	int32_t v23 = v22; // r7
	int32_t v24 = v22; // 0xa354c
	if ((int32_t)v15 == 1) {
		int32_t v25 = v22 | 1; // 0xa3538
		v23 = v25;
		v24 = v25;
		// branch -> 0xa353c
	}
	int32_t v26 = g35 + g36;       // 0xa353c
	int32_t v27 = v26 + 428;       // 0xa3544
	int32_t *v28 = (int32_t *)v27; // 0xa3544
	int32_t result = v26;          // r3
	*v28 = *v28 + v24;
	int32_t v29 = v26 + 420;       // 0xa3554
	int32_t *v30 = (int32_t *)v29; // 0xa3554
	*v30 = v23 + *v30;
	if (__asm_rlwinm_(*(int32_t *)(result + 0x5568), 0, 4, 4) == 0) {
		// 0xa356c
		*(int32_t *)(result + 424) = *(int32_t *)v27;
		*(int32_t *)(result + 416) = *(int32_t *)v29;
		// branch -> 0xa357c
	}
	// 0xa357c
	if (g33 == v21) {
		int32_t v31 = *(int32_t *)(g23 - 0x76f4); // 0xa3584
		result = v31;
		*(int32_t *)v31 = 1;
		// branch -> 0xa3590
	}
	// 0xa3590
	return result;
}

// Address range: 0xa35a4 - 0xa37e0
int32_t function_a35a4(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0xa35ac
	g35 = v1;
	g29 = a2;
	g31 = result;
	int32_t v2 = *(int32_t *)(g23 - 0x5958); // 0xa35b8
	g32 = v2;
	g30 = a3;
	g33 = *(int32_t *)(g23 - 0x5950);
	g36 = *(int32_t *)(g23 - 0x77a8);
	int32_t v3 = *(int32_t *)v1; // 0xa35d0
	g37 = v3;
	if (result != v3) {
		// 0xa37cc
		return result;
	}
	int32_t v4 = result; // 0xa35f8
	if (result >= 4) {
		// 0xa35e4
		app_fatal(v2);
		v4 = g31;
		// branch -> 0xa35ec
	}
	// 0xa35ec
	if (v4 >= 4) {
		// 0xa35f4
		g37 = v4;
		app_fatal(g32);
		// branch -> 0xa3600
	}
	int32_t v5 = g36;                                // 0xa3608
	int32_t result2 = v5 + 0x55ec * *(int32_t *)g35; // 0xa3608
	if (*(int32_t *)(result2 + 404) < 1) {
		// 0xa37cc
		return result2;
	}
	int32_t v6 = 0x55ec * g31; // 0xa3618
	int32_t v7 = v5 + 436;     // 0xa361c
	g32 = v7;
	int32_t v8 = v6 + v7;                // 0xa3628
	int32_t v9 = (int32_t) * (char *)v8; // 0xa363c
	uint32_t v10;
	int32_t v11 = v10; // 0xa36fc
	if (v10 <= 0xffffffff) {
		// 0xa3698
		v11 = 0;
		// branch -> 0xa369c
	}
	int32_t v12 = v11; // 0xa3728
	if ((*(char *)*(int32_t *)(g23 - 0x77f0) || 1) != 1) {
		int32_t v13 = v9 < 0 ? 0 : v9;
		int32_t v14 = v13 < 50 ? v13 : 50;
		uint64_t v15 = 0x66666667 * (int64_t) * (int32_t *)(g33 + 4 * v14);     // 0xa36e4
		int32_t v16 = (int32_t)(v15 / 0x100000000) >> 31;                       // 0xa36e8
		int32_t v17 = v16 < 0;                                                  // 0xa36ec
		int32_t v18 = (v16 & -0x20000000 | (int32_t)(v15 / 0x800000000)) + v17; // 0xa36f0
		int32_t v19 = v18;                                                      // 0xa3704
		if (v11 < v18) {
			// 0xa36fc
			v19 = v11;
			// branch -> 0xa3700
		}
		int32_t v20 = 200 * v14; // 0xa3700
		int32_t v21 = v19;       // 0xa3714
		if (v19 >= v20) {
			// 0xa3710
			v21 = v20;
			// branch -> 0xa3714
		}
		// 0xa3714
		v12 = v21;
		// branch -> 0xa3718
	}
	int32_t v22 = v6 + v5;                 // 0xa3718
	int32_t *v23 = (int32_t *)(v22 + 440); // 0xa371c
	*v23 = *v23 + v12;
	int32_t v24 = v22 + 440;       // 0xa3730
	int32_t *v25 = (int32_t *)v24; // 0xa3730
	uint32_t v26 = 0x77359400;     // 0xa3734
	if (*v25 > v26) {
		// 0xa373c
		*v25 = v26;
		// branch -> 0xa3740
	}
	int32_t v27 = g33; // 0xa3744
	int32_t result3;   // 0xa37dc
	if (*(int32_t *)v24 < *(int32_t *)(v27 + 196)) {
		int32_t v28 = *(int32_t *)(g36 + v6 + 440); // 0xa3760
		g36 = 0;
		int32_t v29 = 0; // 0xa3790
		if (v28 >= *(int32_t *)v27) {
			int32_t v30 = v27 + 4; // 0xa376c
			g33 = v30;
			int32_t v31 = 1; // 0xa3770
			g36 = v31;
			while (v28 >= *(int32_t *)v30) {
				// 0xa376c
				v30 += 4;
				g33 = v30;
				v31++;
				g36 = v31;
				// continue -> 0xa376c
			}
			// 0xa3774
			v29 = v31;
			// branch -> 0xa3780
		}
		int32_t v32 = (int32_t) * (char *)v8; // 0xa3784
		char v33;                             // 0xa37c0
		if (v29 != v32) {
			int32_t v34 = v29 - v32; // 0xa3790
			g36 = v34;
			g33 = 0;
			if (v34 > 0) {
				function_a3404(g31);
				int32_t v35 = g33 + 1; // 0xa37a4
				g33 = v35;
				while (v35 < g36) {
					// 0xa379c
					function_a3404(g31);
					v35 = g33 + 1;
					g33 = v35;
					// continue -> 0xa379c
				}
				// 0xa37b0
				v33 = *(char *)(g32 + 0x55ec * *(int32_t *)g35);
				// branch -> 0xa37cc
				// 0xa37cc
				return NetSendCmdParam1(0, 51, (int32_t)v33);
			}
		}
		// 0xa37b0
		v33 = *(char *)(g32 + 0x55ec * *(int32_t *)g35);
		result3 = NetSendCmdParam1(0, 51, (int32_t)v33);
		// branch -> 0xa37cc
	} else {
		// 0xa3750
		*(char *)v8 = 50;
		result3 = v6;
		// branch -> 0xa37cc
	}
	// 0xa37cc
	return result3;
}

// Address range: 0xa37e0 - 0xa3888
int32_t function_a37e0(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10;                        // 0xa37e0
	int32_t v2 = 0x1000000 * a3 / 0x1000000; // 0xa37f4
	uint32_t v3 = v2 % 2;                    // 0xa3800
	int32_t v4 = v3 != 0;                    // 0xa3834
	if ((v2 & 2) != 0) {
		// 0xa3820
		v4 = v3 + 1;
		// branch -> 0xa3824
	}
	int32_t v5 = v4;
	if ((v2 & 4) != 0) {
		// 0xa3834
		v5 = v4 + 1;
		// branch -> 0xa3838
	}
	int32_t v6 = v5; // 0xa3854
	if ((v2 & 8) != 0) {
		// 0xa3848
		v6 = v5 + 1;
		// branch -> 0xa384c
	}
	// 0xa384c
	if (v6 == 0) {
		// 0xa3878
		g10 = v1;
		return 0;
	}
	uint32_t v7 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0xa385c
	int32_t result;                                       // 0xa3884
	if ((1 << v7 % 64 & v2) != 0) {
		// 0xa3870
		result = function_a35a4(v7, a1, a2 / v6);
		// branch -> 0xa3878
	} else {
		result = v7;
	}
	// 0xa3878
	g10 = v1;
	return result;
}

// Address range: 0xa3888 - 0xa3c58
int32_t InitPlayer(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0xa388c
	g22 = a1;
	g29 = *(int32_t *)(g23 - 0x77b8);
	g30 = *(int32_t *)(g23 - 0x6f88);
	g24 = a2;
	g31 = *(int32_t *)(g23 - 0x6f84);
	g32 = *(int32_t *)(g23 - 0x77e4);
	int32_t v2 = *(int32_t *)(g23 - 0x595c); // 0xa38ac
	g25 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77ac); // 0xa38b0
	g33 = v3;
	g35 = *(int32_t *)(g23 - 0x77a8);
	if (a1 >= 4) {
		// 0xa38c4
		g37 = a1;
		app_fatal(v2);
		v3 = g33;
		// branch -> 0xa38d0
	}
	// 0xa38d0
	if (*(int32_t *)v3 >= 4) {
		// 0xa38dc
		g37 = g22;
		app_fatal(g25);
		// branch -> 0xa38e8
	}
	int32_t v4 = 0x55ec * g22; // 0xa38e8
	g28 = v4;
	int32_t v5 = g35 + v4; // 0xa38ec
	g27 = v5;
	ClearPlrRVars(v5);
	if (g24 != 0) {
		// 0xa3900
		*(char *)(g27 + 184) = 4;
		*(int32_t *)(g27 + 180) = -1;
		*(int32_t *)(g27 + 188) = -1;
		int32_t v6 = g27; // 0xa3914
		*(int32_t *)(v6 + 164) = *(int32_t *)(v6 + 180);
		int32_t v7 = g27; // 0xa391c
		*(char *)(v7 + 168) = *(char *)(v7 + 184);
		int32_t v8 = g27; // 0xa3924
		if (*(int32_t *)(v8 + 120) % 16 == 4) {
			// 0xa3934
			*(int32_t *)(v8 + 308) = 1;
			// branch -> 0xa3948
		} else {
			// 0xa3940
			*(int32_t *)(v8 + 308) = 0;
			// branch -> 0xa3948
		}
		// 0xa3948
		*(char *)(g28 + g35 + 0x5594) = 0;
		// branch -> 0xa3954
	}
	int32_t v9 = g35;  // 0xa3954
	int32_t v10 = g28; // 0xa3954
	int32_t result;    // r3
	int32_t v11;       // r5
	int32_t v12;       // 0xa3c28
	int32_t v13;       // 0xa3b9c
	int32_t v14;       // 0xa3bf8
	unsigned char v15; // 0xa3ba0
	int32_t v16;       // 0xa3bfc
	int32_t v17;       // 0xa3c10
	if ((int32_t) * (char *)g32 != *(int32_t *)(v10 + v9 + 52)) {
		// 0xa3968
		if (*(int32_t *)*(int32_t *)(g23 - 0x7274) == 0) {
			// 0xa3b9c
			v13 = v9 + v10;
			result = v13;
			v15 = *(char *)(v13 + 348);
			if (v15 == 0) {
				// 0xa3bac
				*(int32_t *)(v13 + 272) = 0x2000000;
				*(int32_t *)(result + 268) = 0;
				// branch -> 0xa3bf8
				// 0xa3bf8
				v14 = g28 + g35;
				result = v14;
				v16 = *(int32_t *)(g23 - 0x5950);
				v11 = 0;
				v17 = *(int32_t *)(4 * (int32_t) * (char *)(v14 + 436) + v16);
				*(int32_t *)(v14 + 448) = v17;
				*(char *)(result + 313) = (char)v11;
				if (g22 == *(int32_t *)g33) {
					// 0xa3c28
					v12 = g23;
					result = *(int32_t *)(v12 - 0x75cc);
					*(int32_t *)*(int32_t *)(v12 - 0x6f8c) = v11;
					*(int32_t *)result = v11;
					*(int32_t *)g29 = v11;
					*(int32_t *)(g29 + 4) = v11;
					*(int32_t *)(g29 + 16) = v11;
					// branch -> 0xa3c44
				}
				// 0xa3c44
				g10 = v1;
				return result;
			}
			// 0xa3bc0
			if (v15 == 1) {
				// 0xa3bcc
				*(int32_t *)(v13 + 272) = 0x8000000;
				*(int32_t *)(result + 268) = 0;
				// branch -> 0xa3bf8
			} else {
				// 0xa3be0
				if (v15 == 2) {
					// 0xa3be8
					*(int32_t *)(v13 + 272) = 0x4000000;
					*(int32_t *)(result + 268) = 0;
					// branch -> 0xa3bf8
				}
			}
			// 0xa3bf8
			v14 = g28 + g35;
			result = v14;
			v16 = *(int32_t *)(g23 - 0x5950);
			v11 = 0;
			v17 = *(int32_t *)(4 * (int32_t) * (char *)(v14 + 436) + v16);
			*(int32_t *)(v14 + 448) = v17;
			*(char *)(result + 313) = (char)v11;
			if (g22 == *(int32_t *)g33) {
				// 0xa3c28
				v12 = g23;
				result = *(int32_t *)(v12 - 0x75cc);
				*(int32_t *)*(int32_t *)(v12 - 0x6f8c) = v11;
				*(int32_t *)result = v11;
				*(int32_t *)g29 = v11;
				*(int32_t *)(g29 + 4) = v11;
				*(int32_t *)(g29 + 16) = v11;
				// branch -> 0xa3c44
			}
			// 0xa3c44
			g10 = v1;
			return result;
		}
	}
	// 0xa3978
	function_a2b68(g22);
	int32_t v18 = g28 + g35; // 0xa3980
	g36 = v18;
	g25 = 0;
	*(int32_t *)(v18 + 96) = 0;
	*(int32_t *)(g36 + 100) = g25;
	*(int32_t *)(g36 + 104) = g25;
	*(int32_t *)(g36 + 108) = g25;
	function_a2af4(g22);
	if (*(int32_t *)(g36 + 404) < 64) {
		int32_t v19 = g27; // 0xa39fc
		*(int32_t *)v19 = 8;
		int32_t v20 = g36;                      // 0xa3a0c
		int32_t v21 = *(int32_t *)(v20 + 1100); // 0xa3a10
		NewPlrAnim(g22, v19 + 1032, *(int32_t *)(v20 + 1096), 1, v21);
		int32_t v22 = g36; // 0xa3a18
		*(int32_t *)(v22 + 140) = *(int32_t *)(v22 + 136) - 1;
		int32_t v23 = g36; // 0xa3a24
		*(int32_t *)(v23 + 492) = 2 * *(int32_t *)(v23 + 136);
		// branch -> 0xa3a30
	} else {
		// 0xa39ac
		*(int32_t *)g27 = g25;
		int32_t v24 = g36;       // 0xa39b0
		int32_t v25 = v24 + 600; // 0xa39b0
		g25 = v25;
		NewPlrAnim(g22, g27 + 536, *(int32_t *)v25, 3, *(int32_t *)(v24 + 604));
		g37 = *(int32_t *)g25 - 1;
		*(int32_t *)(g36 + 140) = random(2) + 1;
		g37 = 3;
		*(int32_t *)(g36 + 132) = random(2);
		// branch -> 0xa3a30
	}
	int32_t v26 = g28 + g35; // 0xa3a30
	result = v26;
	*(int32_t *)(v26 + 112) = 0;
	*(int32_t *)(result + 152) = 0;
	int32_t v27; // r20
	if (g22 == *(int32_t *)g33) {
		// 0xa3a4c
		int32_t v28; // 0xa3a60
		int32_t v29; // 0xa3a64
		if (g24 == 0) {
			// 0xa3a60
			v28 = g23;
			v29 = g28 + g35;
			*(int32_t *)(v29 + 56) = *(int32_t *)*(int32_t *)(v28 - 0x77b0);
			*(int32_t *)(v29 + 60) = *(int32_t *)*(int32_t *)(v28 - 0x77b4);
			// branch -> 0xa3a7c
		} else {
			// 0xa3a54
			if (*(char *)g32 != 0) {
				// 0xa3a60
				v28 = g23;
				v29 = g28 + g35;
				*(int32_t *)(v29 + 56) = *(int32_t *)*(int32_t *)(v28 - 0x77b0);
				*(int32_t *)(v29 + 60) = *(int32_t *)*(int32_t *)(v28 - 0x77b4);
				// branch -> 0xa3a7c
			}
		}
		int32_t v30 = g28 + g35; // 0xa3a7c
		*(int32_t *)(v30 + 72) = *(int32_t *)(v30 + 56);
		*(int32_t *)(v30 + 76) = *(int32_t *)(v30 + 60);
		// branch -> 0xa3b1c
	} else {
		int32_t v31 = result + 56; // 0xa3a94
		int32_t v32 = result + 60; // r21
		v27 = 0;
		*(int32_t *)(result + 72) = *(int32_t *)v31;
		int32_t v33 = 0; // 0xa3aac
		g32 = v33 + g31;
		g36 = g30 + v33;
		*(int32_t *)(result + 76) = *(int32_t *)(result + 60);
		int32_t v34 = g32; // 0xa3acc
		int32_t v35 = g36; // 0xa3ac4
		// branch -> 0xa3abc
		int32_t v36;  // 0xa3ae4
		int32_t v37;  // 0xa3af8
		int32_t *v38; // 0xa3afc
		int32_t *v39; // 0xa3b0c
		while (true) {
			int32_t v40 = *(int32_t *)v34 + *(int32_t *)(g27 + 60);                           // 0xa3ad4
			int32_t v41 = function_a9df0(g22, *(int32_t *)v35 + *(int32_t *)(g27 + 56), v40); // 0xa3ad8
			int32_t v42 = v27;                                                                // 0xa3ae4
			int32_t v43 = v42;                                                                // 0xa3af8
			if (v41 == 0) {
				// 0xa3ae4
				v36 = v42 + 1;
				v27 = v36;
				int32_t v44 = g36 + 4; // 0xa3ae8
				g36 = v44;
				int32_t v45 = g32 + 4; // 0xa3af0
				g32 = v45;
				if (v36 >= 8) {
					// break -> 0xa3af8
					break;
				}
				v34 = v45;
				v35 = v44;
				// continue -> 0xa3abc
				continue;
			}
			// 0xa3af8
			v37 = 4 * v43;
			v38 = (int32_t *)v31;
			*v38 = *(int32_t *)(g30 + v37) + *v38;
			v39 = (int32_t *)v32;
			*v39 = *(int32_t *)(v37 + g31) + *v39;
			// branch -> 0xa3b1c
		}
		// 0xa3af8
		v37 = 4 * v36;
		v38 = (int32_t *)v31;
		*v38 = *(int32_t *)(g30 + v37) + *v38;
		v39 = (int32_t *)v32;
		*v39 = *(int32_t *)(v37 + g31) + *v39;
		// branch -> 0xa3b1c
	}
	int32_t v46 = g28 + g35; // 0xa3b1c
	int32_t v47 = v46 + 56;  // 0xa3b20
	g26 = v47;
	v27 = v46;
	*(int32_t *)(v46 + 64) = *(int32_t *)v47;
	result = -1;
	int32_t v48 = v27 + 60; // 0xa3b30
	g25 = v48;
	*(int32_t *)(v27 + 68) = *(int32_t *)v48;
	*(char *)(v27 + 4) = (char)result;
	*(int32_t *)(v27 + 32) = result;
	if (g22 == *(int32_t *)g33) {
		int32_t v49 = (int32_t) * (char *)(v27 + 314);                 // 0xa3b5c
		int32_t v50 = AddLight(*(int32_t *)g26, *(int32_t *)g25, v49); // 0xa3b60
		*(int32_t *)(v27 + 156) = v50;
		// branch -> 0xa3b70
	} else {
		// 0xa3b6c
		*(int32_t *)(v27 + 156) = result;
		// branch -> 0xa3b70
	}
	int32_t v51 = g28 + g35; // 0xa3b74
	g24 = v51;
	int32_t v52 = llvm_ctlz_i32(*(int32_t *)g33 - g22, true); // 0xa3b84
	g37 = *(int32_t *)g25;
	g38 = (int32_t) * (char *)(v51 + 314);
	int32_t v53 = __asm_rlwinm(v52, 27, 24, 31); // 0xa3b90
	g39 = v53;
	*(int32_t *)(g24 + 160) = AddVision(v53);
	// branch -> 0xa3b9c
	// 0xa3b9c
	v13 = g35 + g28;
	result = v13;
	v15 = *(char *)(v13 + 348);
	if (v15 == 0) {
		// 0xa3bac
		*(int32_t *)(v13 + 272) = 0x2000000;
		*(int32_t *)(result + 268) = 0;
		// branch -> 0xa3bf8
		// 0xa3bf8
		v14 = g28 + g35;
		result = v14;
		v16 = *(int32_t *)(g23 - 0x5950);
		v11 = 0;
		v17 = *(int32_t *)(4 * (int32_t) * (char *)(v14 + 436) + v16);
		*(int32_t *)(v14 + 448) = v17;
		*(char *)(result + 313) = (char)v11;
		if (g22 == *(int32_t *)g33) {
			// 0xa3c28
			v12 = g23;
			result = *(int32_t *)(v12 - 0x75cc);
			*(int32_t *)*(int32_t *)(v12 - 0x6f8c) = v11;
			*(int32_t *)result = v11;
			*(int32_t *)g29 = v11;
			*(int32_t *)(g29 + 4) = v11;
			*(int32_t *)(g29 + 16) = v11;
			// branch -> 0xa3c44
		}
		// 0xa3c44
		g10 = v1;
		return result;
	}
	// 0xa3bc0
	if (v15 == 1) {
		// 0xa3bcc
		*(int32_t *)(v13 + 272) = 0x8000000;
		*(int32_t *)(result + 268) = 0;
		// branch -> 0xa3bf8
	} else {
		// 0xa3be0
		if (v15 == 2) {
			// 0xa3be8
			*(int32_t *)(v13 + 272) = 0x4000000;
			*(int32_t *)(result + 268) = 0;
			// branch -> 0xa3bf8
		}
	}
	// 0xa3bf8
	v14 = g28 + g35;
	result = v14;
	v16 = *(int32_t *)(g23 - 0x5950);
	v11 = 0;
	v17 = *(int32_t *)(4 * (int32_t) * (char *)(v14 + 436) + v16);
	*(int32_t *)(v14 + 448) = v17;
	*(char *)(result + 313) = (char)v11;
	if (g22 == *(int32_t *)g33) {
		// 0xa3c28
		v12 = g23;
		result = *(int32_t *)(v12 - 0x75cc);
		*(int32_t *)*(int32_t *)(v12 - 0x6f8c) = v11;
		*(int32_t *)result = v11;
		*(int32_t *)g29 = v11;
		*(int32_t *)(g29 + 4) = v11;
		*(int32_t *)(g29 + 16) = v11;
		// branch -> 0xa3c44
	}
	// 0xa3c44
	g10 = v1;
	return result;
}

// Address range: 0xa3c58 - 0xa3cc4
int32_t InitMultiView(void)
{
	int32_t v1 = g36;                        // 0xa3c58
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa3c60
	g36 = v2;
	int32_t v3 = g35;                        // 0xa3c64
	int32_t v4 = *(int32_t *)(g23 - 0x77ac); // 0xa3c68
	g35 = v4;
	uint32_t v5 = *(int32_t *)v4; // 0xa3c74
	g37 = v5;
	int32_t v6; // 0xa3c88
	int32_t v7; // 0xa3c94
	int32_t v8; // 0xa3c98
	if (v5 >= 4) {
		// 0xa3c80
		app_fatal(*(int32_t *)(g23 - 0x595c));
		v8 = g36;
		v7 = g23;
		v6 = g35;
		// branch -> 0xa3c88
	} else {
		v8 = v2;
		v7 = g23;
		v6 = v4;
	}
	int32_t result = *(int32_t *)(v7 - 0x77b4); // r3
	int32_t v9 = 0x55ec * *(int32_t *)v6 + v8;  // 0xa3c98
	*(int32_t *)*(int32_t *)(v7 - 0x77b0) = *(int32_t *)(v9 + 56);
	*(int32_t *)result = *(int32_t *)(v9 + 60);
	g36 = v1;
	g35 = v3;
	return result;
}

// Address range: 0xa3cc4 - 0xa3ef8
int32_t function_a3cc4(int32_t a1, int32_t a2)
{
	// 0xa3cc4
	g27 = a1;
	g33 = *(int32_t *)(g23 - 0x7598);
	g35 = *(int32_t *)(g23 - 0x7584);
	g28 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa3ce0
	g36 = v1;
	int32_t v2 = a1; // 0xa3cfc
	if (a1 >= 4) {
		// 0xa3cf0
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x595c));
		v1 = g36;
		v2 = g27;
		// branch -> 0xa3cfc
	}
	int32_t v3 = 0x55ec * v2; // 0xa3cfc
	g32 = v3;
	int32_t v4 = v3 + v1; // 0xa3d00
	int32_t v5 = v4 + 56; // 0xa3d08
	g31 = v5;
	int32_t v6 = v4 + 60; // 0xa3d0c
	g30 = v6;
	int32_t v7 = *(int32_t *)v5 - 1; // 0xa3d10
	g27 = v7;
	int32_t v8 = *(int32_t *)v6 + 1; // 0xa3d14
	g29 = v8;
	g34 = v7;
	g37 = v8;
	int32_t v9 = *(int32_t *)g35 + 32 * function_52378();                     // 0xa3d34
	int16_t v10 = *(int16_t *)(v9 + 4);                                       // 0xa3d38
	int16_t v11 = *(int16_t *)(v9 + 6);                                       // 0xa3d3c
	int16_t v12 = *(int16_t *)(v9 + 8);                                       // 0xa3d40
	int16_t v13 = *(int16_t *)(v9 + 10);                                      // 0xa3d48
	int32_t v14 = g29;                                                        // 0xa3d4c
	char v15 = *(char *)(*(int32_t *)g33 + v14 + 112 * g27);                  // 0xa3d5c
	int16_t v16 = *(int16_t *)(v9 + 12);                                      // 0xa3d64
	int16_t v17 = *(int16_t *)(v9 + 14);                                      // 0xa3d6c
	int32_t v18 = *(int32_t *)*(int32_t *)(g23 - 0x757c);                     // 0xa3d74
	uint16_t v19 = *(int16_t *)(v9 + 16);                                     // 0xa3d7c
	int16_t v20 = *(int16_t *)(v9 + 18);                                      // 0xa3d84
	int16_t v21 = *(int16_t *)(v18 + 2 * v14 + 224 * g27);                    // 0xa3d90
	unsigned char v22 = *(char *)((int32_t)v21 + *(int32_t *)(g23 - 0x722c)); // 0xa3d9c
	int32_t v23 = g32 + g36;                                                  // 0xa3dbc
	int32_t result2 = v23;                                                    // r3
	if (((int32_t)(v20 | v19 | v17 | v16 | v13 | v11 | v10 | v12) || (int32_t)v15 || (int32_t)v22) == 0) {
		// 0xa3dbc
		*(int32_t *)(v23 + 152) = 0;
		// branch -> 0xa3dc8
	} else {
		// 0xa3dac
		*(int32_t *)(v23 + 152) = 1;
		// branch -> 0xa3dc8
	}
	// 0xa3dc8
	if (g28 == 1) {
		int32_t v24 = g32 + g36 + 152; // 0xa3dd4
		g32 = v24;
		if (*(int32_t *)v24 == 1) {
			int32_t v25 = *(int32_t *)g31; // 0xa3de4
			g28 = v25;
			int32_t v26 = *(int32_t *)g30 + 2; // 0xa3de8
			g29 = v26;
			g34 = v25;
			g37 = v26;
			int32_t v27 = *(int32_t *)g35 + 32 * function_52378();   // 0xa3e08
			int16_t v28 = *(int16_t *)(v27 + 4);                     // 0xa3e0c
			int16_t v29 = *(int16_t *)(v27 + 6);                     // 0xa3e10
			uint16_t v30 = *(int16_t *)(v27 + 8);                    // 0xa3e14
			int16_t v31 = *(int16_t *)(v27 + 10);                    // 0xa3e20
			uint16_t v32 = *(int16_t *)(v27 + 12);                   // 0xa3e28
			char v33 = *(char *)(g29 + 112 * g28 + *(int32_t *)g33); // 0xa3e30
			uint16_t v34 = *(int16_t *)(v27 + 14);                   // 0xa3e34
			uint16_t v35 = *(int16_t *)(v27 + 16);                   // 0xa3e3c
			uint16_t v36 = *(int16_t *)(v27 + 18);                   // 0xa3e48
			result2 = v36;
			if (((int32_t)(v35 | v34 | v32 | v31 | v30 | v29 | v28 || v36) || (int32_t)v33) == 0) {
				int32_t v37 = *(int32_t *)g31 - 2; // 0xa3e64
				g28 = v37;
				int32_t v38 = *(int32_t *)g30 + 1; // 0xa3e68
				g29 = v38;
				g34 = v37;
				g37 = v38;
				int32_t v39 = *(int32_t *)g35 + 32 * function_52378();   // 0xa3e88
				int16_t v40 = *(int16_t *)(v39 + 4);                     // 0xa3e8c
				int16_t v41 = *(int16_t *)(v39 + 6);                     // 0xa3e90
				uint16_t v42 = *(int16_t *)(v39 + 8);                    // 0xa3e94
				int16_t v43 = *(int16_t *)(v39 + 10);                    // 0xa3ea0
				uint16_t v44 = *(int16_t *)(v39 + 12);                   // 0xa3ea8
				char v45 = *(char *)(g29 + 112 * g28 + *(int32_t *)g33); // 0xa3eb0
				uint16_t v46 = *(int16_t *)(v39 + 14);                   // 0xa3eb4
				uint16_t v47 = *(int16_t *)(v39 + 16);                   // 0xa3ebc
				uint16_t result = *(int16_t *)(v39 + 18);                // 0xa3ec8
				if (((int32_t)(v47 | v46 | v44 | v43 | v42 | v41 | v40 || result) || (int32_t)v45) != 0) {
					// 0xa3edc
					*(int32_t *)g32 = 2;
					// branch -> 0xa3ee4
				}
				// 0xa3ee4
				return result;
			}
		}
	}
	// 0xa3ee4
	return result2;
}

// Address range: 0xa3ef8 - 0xa3f4c
int32_t function_a3ef8(void)
{
	int32_t v1 = g34; // 0xa3ef8
	if (v1 < 0) {
		// 0xa3f08
		return 0;
	}
	int32_t v2 = g37; // 0xa3f00
	if (v2 <= 0xffffffff || v1 > 111 || v2 >= 112) {
		// 0xa3f08
		return 0;
	}
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x757c); // 0xa3f34
	g38 = v3;
	int16_t v4 = *(int16_t *)(v3 + 2 * v2 + 224 * v1);                          // 0xa3f40
	unsigned char result = *(char *)((int32_t)v4 + *(int32_t *)(g23 - 0x722c)); // 0xa3f44
	return result;
}

// Address range: 0xa3f4c - 0xa40a8
int32_t function_a3f4c(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0xa3f50
	g31 = a1;
	g36 = *(int32_t *)(g23 - 0x779c);
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa3f60
	g33 = v2;
	g32 = a2;
	int32_t v3 = g23; // 0xa3fb8
	int32_t v4 = a1;  // 0xa3fe0
	if (a1 >= 4) {
		// 0xa3f74
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5960));
		a2 = g32;
		v2 = g33;
		v3 = g23;
		v4 = g31;
		// branch -> 0xa3f80
	}
	int32_t v5 = 0x55ec * v4 + v2;                             // 0xa3f8c
	int32_t v6 = 4 * a2;                                       // 0xa3f90
	int32_t v7 = *(int32_t *)(*(int32_t *)(v3 - 0x71ec) + v6); // 0xa3f98
	int32_t v8 = v7 + *(int32_t *)(v5 + 56);                   // 0xa3fa0
	g35 = v8;
	int32_t v9 = *(int32_t *)(*(int32_t *)(v3 - 0x71f0) + v6); // 0xa3fa4
	int32_t v10 = v9 + *(int32_t *)(v5 + 60);                  // 0xa3fa8
	g33 = v10;
	if (v8 <= -1) {
		// 0xa3fb0
		// branch -> 0xa4094
		// 0xa4094
		g10 = v1;
		return 0;
	}
	int32_t v11 = *(int32_t *)(v3 - 0x757c); // 0xa3fb8
	if (*(int16_t *)(*(int32_t *)v11 + 2 * v10 + 224 * v8) == 0 || function_a9df0(v4, v8, v10) == 0) {
		// 0xa3fd8
		// branch -> 0xa4094
		// 0xa4094
		g10 = v1;
		return 0;
	}
	int32_t v12 = g32; // 0xa4000
	int32_t result;    // 0xa40a4
	unsigned char v13; // 0xa4080
	if (v12 == 6) {
		// 0xa400c
		g34 = g35;
		g37 = g33 + 1;
		g31 = 0;
		if (function_a3ef8() == 0) {
			unsigned char v14 = *(char *)(g33 + *(int32_t *)g36 + 112 * g35 + 1); // 0xa4034
			if (__asm_rlwinm_((int32_t)v14, 0, 26, 26) == 0) {
				// 0xa4040
				g31 = 1;
				// branch -> 0xa4048
			}
		}
		int32_t v15 = g31 % 256; // 0xa4044
		if (v15 != 0) {
			// 0xa4048
			// branch -> 0xa4050
			// 0xa4050
			if (g32 == 2) {
				// 0xa4058
				g37 = g33;
				g34 = g35 + 1;
				g31 = 0;
				if (function_a3ef8() == 0) {
					// 0xa4070
					v13 = *(char *)(g33 + *(int32_t *)g36 + 112 * g35 + 112);
					if (__asm_rlwinm_((int32_t)v13, 0, 26, 26) == 0) {
						// 0xa408c
						g31 = 1;
						// branch -> 0xa4090
					}
				}
				// 0xa4090
				result = g31 % 256;
				// branch -> 0xa4094
			} else {
				result = v15;
			}
		} else {
			result = 0;
		}
	} else {
		// 0xa4048
		// branch -> 0xa4050
		// 0xa4050
		if (v12 == 2) {
			// 0xa4058
			g37 = g33;
			g34 = g35 + 1;
			g31 = 0;
			if (function_a3ef8() == 0) {
				// 0xa4070
				v13 = *(char *)(g33 + *(int32_t *)g36 + 112 * g35 + 112);
				if (__asm_rlwinm_((int32_t)v13, 0, 26, 26) == 0) {
					// 0xa408c
					g31 = 1;
					// branch -> 0xa4090
				}
			}
			// 0xa4090
			result = g31 % 256;
			// branch -> 0xa4094
		} else {
			result = 1;
		}
	}
	// 0xa4094
	g10 = v1;
	return result;
}

// Address range: 0xa40a8 - 0xa4114
int32_t function_a40a8(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = a2 - 1;                     // 0xa40ac
	int32_t result = 112 * (a1 - 1);         // 0xa40c8
	int32_t result2 = result;                // r3
	int32_t v2 = *(int32_t *)(g23 - 0x7268); // 0xa40cc
	int32_t v3 = 0;                          // r4
	if (v1 > a2 + 1) {
		// bb
		return result;
	}
	int32_t v4 = v1 + *(int32_t *)*(int32_t *)(g23 - 0x7588) + result; // 0xa40e4
	int32_t v5 = v4;                                                   // r7
	*(char *)((int32_t) * (char *)v4 + v2) = 0;
	char v6 = *(char *)(v5 + 112); // 0xa40f4
	*(char *)(v2 + (int32_t)v6) = (char)v3;
	char v7 = *(char *)(v5 + 224); // 0xa4100
	*(char *)(v2 + (int32_t)v7) = (char)v3;
	int32_t v8 = 2; // 0xa410c
	while (v8 != 0) {
		// 0xa40dc
		// 0xa40dc
		v1++;
		v4 = v1 + *(int32_t *)*(int32_t *)(g23 - 0x7588) + result2;
		v5 = v4;
		*(char *)((int32_t) * (char *)v4 + v2) = (char)v3;
		v6 = *(char *)(v5 + 112);
		*(char *)(v2 + (int32_t)v6) = (char)v3;
		v7 = *(char *)(v5 + 224);
		*(char *)(v2 + (int32_t)v7) = (char)v3;
		v8--;
		// branch -> 0xa40dc
	}
	// bb
	return result2;
}

// Address range: 0xa4114 - 0xa41f0
int32_t function_a4114(int32_t result, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7268); // 0xa4120
	int32_t v2 = *(int32_t *)(g23 - 0x722c); // 0xa4128
	if (((int32_t) * (char *)*(int32_t *)(g23 - 0x7794) + 255) % 256 > 1) {
		// 0xa41dc
		*(char *)(v1 + 1) = 1;
		// branch -> 0xa41e4
		// 0xa41e4
		return result;
	}
	int32_t v3 = a2 - 1;                                          // 0xa4140
	int32_t v4 = v3;                                              // r30
	int32_t v5 = result + 1;                                      // 0xa4154
	int32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x757c) + 2 * v3; // 0xa4158
	int32_t v7 = a2 + 1;                                          // 0xa415c
	int32_t v8 = *(int32_t *)*(int32_t *)(g23 - 0x7588) + v3;     // 0xa4160
	if (v3 <= v7) {
		int32_t v9 = v5;      // 0xa416c
		int32_t v10 = result; // 0xa4168
		while (true) {
			uint32_t v11 = v10 - 1;         // 0xa4168
			int32_t v12 = 224 * v11 + v6;   // 0xa417c
			int32_t v13 = v9 + 1 + 1 - v10; // 0xa4180
			int32_t v14 = 112 * v11 + v8;   // 0xa4184
			int32_t v15;                    // 0xa41cc
			if (v11 <= v9) {
				while (true) {
					// 0xa4194
					if (*(char *)(v2 + (int32_t) * (int16_t *)v12) == 0) {
						char v16 = *(char *)v14; // 0xa41a4
						if (v16 != 0) {
							// 0xa41b0
							*(char *)(v1 + (int32_t)v16) = (char)1;
							// branch -> 0xa41b8
						}
					}
					int32_t v17 = v12 + 224; // 0xa41b8
					int32_t v18 = v14 + 112; // 0xa41bc
					int32_t v19 = v13 - 1;   // 0xa41c0
					if (v19 == 0) {
						// break -> 0xa41c4
						break;
					}
					v13 = v19;
					v14 = v18;
					v12 = v17;
					// continue -> 0xa4194
				}
				// 0xa41c4
				v15 = v4 + 1;
				v4 = v15;
				if (v15 > v7) {
					// 0xa41e4
					return result;
				}
			lab_0xa41c4:
				// 0xa41c4
				v8++;
				v6 += 2;
				v9 = v5;
				v10 = result;
				// branch -> 0xa4168
				continue;
			}
			// 0xa41c4
			v15 = v4 + 1;
			v4 = v15;
			if (v15 <= v7) {
				goto lab_0xa41c4;
			}
			// 0xa41e4
			return result;
		}
	}
	// 0xa41e4
	return result;
}

// Address range: 0xa41f0 - 0xa4250
int32_t SetPlayerOld(int32_t a1)
{
	int32_t v1 = g36;                        // 0xa41f0
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa41f8
	g36 = v2;
	int32_t v3 = g35; // 0xa41fc
	g35 = a1;
	int32_t v4; // 0xa4220
	int32_t v5; // 0xa4224
	if (a1 >= 4) {
		// 0xa4214
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5964));
		v5 = g36;
		v4 = g35;
		// branch -> 0xa4220
	} else {
		v5 = v2;
		v4 = a1;
	}
	int32_t result = 0x55ec * v4 + v5; // 0xa4224
	*(int32_t *)(result + 88) = *(int32_t *)(result + 56);
	*(int32_t *)(result + 92) = *(int32_t *)(result + 60);
	g36 = v1;
	g35 = v3;
	return result;
}

// Address range: 0xa4250 - 0xa4318
int32_t function_a4250(int32_t a1, int32_t a2)
{
	// 0xa4250
	g29 = a1;
	g33 = *(int32_t *)(g23 - 0x77b8);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa4264
	g35 = v1;
	int32_t v2 = a1; // 0xa4284
	if (a1 >= 4) {
		// 0xa4278
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5968));
		v1 = g35;
		v2 = g29;
		// branch -> 0xa4284
	}
	int32_t v3 = 0x55ec * v2 + v1; // 0xa428c
	int32_t v4 = 0;                // r31
	*(int32_t *)(v3 + 64) = *(int32_t *)(v3 + 56);
	*(int32_t *)(v3 + 68) = *(int32_t *)(v3 + 60);
	*(int32_t *)(v3 + 72) = *(int32_t *)(v3 + 56);
	*(int32_t *)(v3 + 76) = *(int32_t *)(v3 + 60);
	*(int32_t *)(v3 + 96) = v4;
	*(int32_t *)(v3 + 100) = v4;
	function_a3cc4(v2, 0);
	*(int32_t *)(g35 + 112) = g30;
	int32_t v5 = *(int32_t *)(g23 - 0x77ac); // 0xa42d0
	int32_t result = v5;                     // 0xa4314
	if (g29 == *(int32_t *)v5) {
		// 0xa42e0
		*(int32_t *)g33 = g36;
		*(int32_t *)(g33 + 4) = g36;
		int32_t v6 = *(int32_t *)(g23 - 0x77b4); // r3
		*(int32_t *)(g33 + 16) = g36;
		*(int32_t *)*(int32_t *)(g23 - 0x77b0) = *(int32_t *)g32;
		*(int32_t *)v6 = *(int32_t *)g31;
		result = v6;
		// branch -> 0xa4304
	}
	// 0xa4304
	return result;
}

// Address range: 0xa4318 - 0xa443c
int32_t StartStand(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0xa4318
	g36 = a1;
	int32_t v2 = g10;                        // 0xa4320
	int32_t v3 = g35;                        // 0xa4328
	int32_t v4 = *(int32_t *)(g23 - 0x77a8); // 0xa432c
	g35 = v4;
	int32_t v5 = g33; // 0xa4330
	int32_t v6 = g32; // 0xa4334
	g32 = a2;
	int32_t v7 = a1; // 0xa43a4
	if (a1 >= 4) {
		// 0xa4348
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x596c));
		v4 = g35;
		v7 = g36;
		// branch -> 0xa4354
	}
	int32_t v8 = 0x55ec * v7; // 0xa4354
	g33 = v8;
	int32_t v9 = v8 + v4; // 0xa4358
	int32_t result;
	if (*(char *)(v9 + 313) != 0) {
		// 0xa4368
		if (*(int32_t *)(v9 + 404) == 0) {
			// 0xa4374
			if (v7 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0xa4384
				result = SyncPlrKill(v7, -1);
				// branch -> 0xa441c
				// 0xa441c
				g36 = v1;
				g10 = v2;
				g35 = v3;
				g33 = v5;
				g32 = v6;
				return result;
			}
		}
	}
	int32_t v10 = v7; // 0xa43c4
	if (*(int32_t *)(v9 + 532) % 2 == 0) {
		// 0xa43a4
		LoadPlrGFX(v7, 1);
		v10 = g36;
		v8 = g33;
		v4 = g35;
		// branch -> 0xa43b0
	}
	int32_t v11 = v4 + v8;                 // 0xa43b0
	int32_t v12 = *(int32_t *)(v11 + 604); // 0xa43c0
	NewPlrAnim(v10, 8 * g32 + 536 + v11, *(int32_t *)(v11 + 600), 3, v12);
	*(int32_t *)g33 = 0;
	function_a4250(g36, g32);
	function_a5364(g36);
	int32_t v13 = g33;                                    // 0xa43f0
	int32_t v14 = 112 * *(int32_t *)(v13 + 56);           // 0xa4400
	int32_t v15 = *(int32_t *)(v13 + 60);                 // 0xa4404
	int32_t v16 = *(int32_t *)*(int32_t *)(g23 - 0x7680); // 0xa4408
	*(char *)(v16 + v15 + v14) = (char)(0x1000000 * g36 / 0x1000000 + 1);
	result = SetPlayerOld(g36);
	// branch -> 0xa441c
	// 0xa441c
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v5;
	g32 = v6;
	return result;
}

// Address range: 0xa443c - 0xa44f0
int32_t function_a443c(int32_t a1, int32_t a2)
{
	// 0xa443c
	g31 = a1;
	g33 = *(int32_t *)(g23 - 0x77b8);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa4450
	g35 = v1;
	int32_t v2 = a1; // 0xa446c
	if (a1 >= 4) {
		// 0xa4460
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5970));
		v1 = g35;
		v2 = g31;
		// branch -> 0xa446c
	}
	int32_t v3 = 0x55ec * v2; // 0xa446c
	int32_t v4 = 0;           // r31
	int32_t v5 = v3 + v1;     // 0xa4478
	*(int32_t *)v5 = 0;
	int32_t v6 = v3 + g35; // 0xa4480
	*(int32_t *)(v6 + 64) = *(int32_t *)(v5 + 56);
	*(int32_t *)(v6 + 68) = *(int32_t *)(v6 + 60);
	*(int32_t *)(v6 + 96) = v4;
	*(int32_t *)(v6 + 100) = v4;
	function_a3cc4(v2, 0);
	int32_t v7 = *(int32_t *)(g23 - 0x77ac); // 0xa44a8
	int32_t result = v7;                     // 0xa44ec
	if (g31 == *(int32_t *)v7) {
		// 0xa44b8
		*(int32_t *)g33 = g36;
		*(int32_t *)(g33 + 4) = g36;
		int32_t v8 = *(int32_t *)(g23 - 0x77b4); // r3
		*(int32_t *)(g33 + 16) = g36;
		*(int32_t *)*(int32_t *)(g23 - 0x77b0) = *(int32_t *)g32;
		*(int32_t *)v8 = *(int32_t *)g35;
		result = v8;
		// branch -> 0xa44dc
	}
	// 0xa44dc
	return result;
}

// Address range: 0xa44f0 - 0xa45f8
int32_t function_a44f0(int32_t a1)
{
	int32_t v1 = g10; // 0xa44f4
	g31 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa44fc
	g36 = v2;
	int32_t v3 = a1; // 0xa451c
	if (a1 >= 4) {
		// 0xa4510
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5974));
		v2 = g36;
		v3 = g31;
		// branch -> 0xa451c
	}
	int32_t v4 = 0x55ec * v3 + v2; // 0xa4524
	int32_t v5 = v4 + 156;         // 0xa4530
	g36 = v5;
	int32_t v6 = 2 * *(int32_t *)(v4 + 100);                       // 0xa4534
	int32_t v7 = *(int32_t *)(v4 + 96);                            // 0xa4538
	int32_t v8 = v7 + v6;                                          // 0xa4540
	int32_t v9 = 52 * *(int32_t *)v5 + *(int32_t *)(g23 - 0x7140); // 0xa4544
	int32_t v10 = v6 - v7;                                         // 0xa454c
	int32_t v11 = v8;                                              // 0xa457c
	int32_t v12 = 1;                                               // 0xa458c
	if (v8 <= 0xffffffff) {
		// 0xa4554
		v11 = -v8;
		v12 = -1;
		// branch -> 0xa4564
	}
	int32_t v13 = v10; // 0xa4584
	int32_t v14 = 1;
	if (v10 <= 0xffffffff) {
		// 0xa456c
		v13 = -v10;
		v14 = -1;
		// branch -> 0xa457c
	}
	int32_t v15 = v11 / 8 * v12; // 0xa458c
	g35 = v15;
	int32_t v16 = 8 * *(int32_t *)(v9 + 4); // 0xa459c
	int32_t v17 = v13 / 8 * v14;            // 0xa45a4
	g33 = v17;
	g31 = *(int32_t *)(v9 + 44) + v16;
	g32 = v16 + v17;
	g34 = v15 - *(int32_t *)(v9 + 40);
	if (abs() > 2) {
		int32_t result = function_cb9dc(*(int32_t *)g36, g35, g33); // 0xa45e0
		// branch -> 0xa45e4
		// 0xa45e4
		g10 = v1;
		return result;
	}
	// 0xa45c4
	g34 = g32 - g31;
	int32_t v18 = abs(); // 0xa45c8
	int32_t result2;     // 0xa45f4
	if (v18 >= 3) {
		// 0xa45d4
		result2 = function_cb9dc(*(int32_t *)g36, g35, g33);
		// branch -> 0xa45e4
	} else {
		result2 = v18;
	}
	// 0xa45e4
	g10 = v1;
	return result2;
}

// Address range: 0xa45f8 - 0xa46f8
int32_t function_a45f8(int32_t a1)
{
	// 0xa45f8
	g36 = *(int32_t *)(g23 - 0x77b8);
	g35 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa4614
	g33 = v1;
	int32_t v2 = a1; // 0xa4630
	if (a1 >= 4) {
		// 0xa4624
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5978));
		v1 = g33;
		v2 = g35;
		// branch -> 0xa4630
	}
	int32_t v3 = 0x55ec * v2 + v1;       // 0xa4638
	int32_t *v4 = (int32_t *)(v3 + 492); // 0xa463c
	*v4 = *v4 + 1;
	int32_t *v5 = (int32_t *)(v3 + 484); // 0xa4648
	int32_t v6 = *v5;                    // 0xa4648
	int32_t v7 = *(int32_t *)(v3 + 488); // 0xa4650
	*v5 = *(int32_t *)(v3 + 104) + v6;
	int32_t *v8 = (int32_t *)(v3 + 488); // 0xa4664
	*v8 = *(int32_t *)(v3 + 108) + *v8;
	*(int32_t *)(v3 + 96) = *(int32_t *)(v3 + 484) / 256;
	*(int32_t *)(v3 + 100) = *(int32_t *)(v3 + 488) / 256;
	int32_t v9 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0xa468c
	int32_t v10 = g35;                                   // 0xa4698
	if (v10 != v9) {
		// 0xa46d4
		return function_a44f0(v10);
	}
	int32_t v11 = g36; // 0xa46b0
	int32_t v12;       // 0xa46d4
	if (*(int32_t *)(v11 + 16) != 0) {
		int32_t *v13 = (int32_t *)v11; // 0xa46bc
		*v13 = *v13 + v6 / 256 - *(int32_t *)(v3 + 484) / 256;
		int32_t *v14 = (int32_t *)(g36 + 4); // 0xa46c8
		*v14 = v7 / 256 - *(int32_t *)(v3 + 488) / 256 + *v14;
		v12 = g35;
		// branch -> 0xa46d4
	} else {
		v12 = v9;
	}
	// 0xa46d4
	return function_a44f0(v12);
}

// Address range: 0xa46f8 - 0xa492c
int32_t function_a46f8(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	g20 = a1;
	g33 = *(int32_t *)(g23 - 0x77b8);
	g35 = *(int32_t *)(g23 - 0x77ac);
	g21 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa4714
	g36 = v1;
	g22 = a3;
	g24 = a4;
	g25 = a5;
	g26 = a6;
	int32_t v2 = a1; // 0xa4780
	if (a1 >= 4) {
		// 0xa4738
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x597c));
		v1 = g36;
		v2 = g20;
		// branch -> 0xa4744
	}
	int32_t v3 = 0x55ec * v2; // 0xa4744
	g32 = v3;
	int32_t v4 = v3 + v1; // 0xa4748
	int32_t result;       // r3
	if (*(char *)(v4 + 313) != 0) {
		// 0xa4758
		if (*(int32_t *)(v4 + 404) == 0) {
			// 0xa4764
			if (v2 == *(int32_t *)g35) {
				// 0xa4770
				result = SyncPlrKill(v2, -1);
				// branch -> 0xa4918
				// 0xa4918
				return result;
			}
		}
	}
	// 0xa4780
	SetPlayerOld(v2);
	int32_t v5 = g32 + g36;             // 0xa4788
	int32_t v6 = *(int32_t *)(v5 + 56); // 0xa4790
	int32_t v7 = v5 + 60;               // 0xa4798
	g30 = v7;
	g29 = g24 + v6;
	g28 = g25 + *(int32_t *)v7;
	int32_t result2 = function_a3f4c(g20, g26, v6); // 0xa47a8
	if (result2 == 0) {
		// 0xa4918
		return result2;
	}
	int32_t v8 = g32 + g36; // 0xa47b4
	*(int32_t *)(v8 + 64) = g29;
	*(int32_t *)(v8 + 68) = g28;
	int32_t v9 = g20; // 0xa47c4
	int32_t v10 = v9; // 0xa4804
	if (v9 == *(int32_t *)g35) {
		int32_t v11 = *(int32_t *)(g23 - 0x77b4);                               // 0xa47d8
		int32_t v12 = *(int32_t *)g31 - *(int32_t *)*(int32_t *)(g23 - 0x77b0); // 0xa47dc
		*(int32_t *)(g33 + 8) = v12;
		*(int32_t *)(g33 + 12) = *(int32_t *)g30 - *(int32_t *)v11;
		v10 = g20;
		// branch -> 0xa47f4
	}
	// 0xa47f4
	g30 = g32 + g36;
	int32_t v13 = *(int32_t *)*(int32_t *)(g23 - 0x7680); // 0xa4800
	int32_t v14 = -1 - 0x1000000 * v10 / 0x1000000;       // 0xa4808
	*(char *)(v13 + 112 * g29 + g28) = (char)v14;
	int32_t v15 = 0; // r0
	*(int32_t *)g30 = 1;
	*(int32_t *)(g30 + 104) = g21;
	*(int32_t *)(g30 + 108) = g22;
	*(int32_t *)(g30 + 96) = v15;
	*(int32_t *)(g30 + 100) = v15;
	*(int32_t *)(g30 + 464) = g24;
	*(int32_t *)(g30 + 468) = g25;
	*(int32_t *)(g30 + 472) = g26;
	if (__asm_rlwinm_(*(int32_t *)(g30 + 532), 0, 30, 30) == 0) {
		// 0xa4848
		LoadPlrGFX(g20, 2);
		// branch -> 0xa4854
	}
	int32_t v16 = g32 + g36; // 0xa4854
	g21 = v16;
	int32_t v17 = *(int32_t *)(v16 + 676); // 0xa4864
	NewPlrAnim(g20, g30 + 8 * g26 + 608, *(int32_t *)(v16 + 672), 0, v17);
	*(int32_t *)(g21 + 112) = g26;
	v15 = 0;
	*(int32_t *)(g21 + 484) = 0;
	*(int32_t *)(g21 + 488) = v15;
	*(int32_t *)(g21 + 492) = v15;
	result = function_a3cc4(g20, 0);
	if (g20 != *(int32_t *)g35) {
		// 0xa4918
		return result;
	}
	// 0xa48a4
	g34 = *(int32_t *)(g33 + 8);
	uint32_t v18 = abs(); // 0xa48ec
	result = v18;
	if (*(int32_t *)*(int32_t *)(g23 - 0x766c) == 0) {
		// 0xa48e8
		if (v18 <= 1) {
			// 0xa48f8
			g34 = *(int32_t *)(g33 + 12);
			int32_t v19 = abs(); // 0xa48fc
			result = v19;
			if (v19 <= 1) {
				// 0xa4908
				*(int32_t *)(g33 + 16) = g27;
				// branch -> 0xa4918
				// 0xa4918
				return result;
			}
		}
		// 0xa4910
		*(int32_t *)(g33 + 16) = 0;
		// branch -> 0xa4918
	} else {
		// 0xa48b4
		if (v18 <= 2) {
			// 0xa48c4
			g34 = *(int32_t *)(g33 + 12);
			int32_t v20 = abs(); // 0xa48c8
			result = v20;
			if (v20 <= 2) {
				// 0xa48d4
				*(int32_t *)(g33 + 16) = g27;
				// branch -> 0xa4918
				// 0xa4918
				return result;
			}
		}
		// 0xa48dc
		*(int32_t *)(g33 + 16) = 0;
		// branch -> 0xa4918
	}
	// 0xa4918
	return result;
}

// Address range: 0xa492c - 0xa4bd0
int32_t function_a492c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	g31 = a1;
	g26 = *(int32_t *)(g23 - 0x7680);
	g27 = *(int32_t *)(g23 - 0x77b8);
	g28 = *(int32_t *)(g23 - 0x77ac);
	g33 = a3;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa4950
	g29 = v1;
	g35 = a4;
	g36 = a5;
	g21 = g41;
	g20 = g42;
	g18 = g13;
	int32_t v2 = a1; // 0xa49c0
	if (a1 >= 4) {
		// 0xa4978
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5980));
		v1 = g29;
		v2 = g31;
		// branch -> 0xa4984
	}
	int32_t v3 = 0x55ec * v2; // 0xa4984
	g25 = v3;
	int32_t v4 = v3 + v1; // 0xa4988
	int32_t result;       // r3
	if (*(char *)(v4 + 313) != 0) {
		// 0xa4998
		if (*(int32_t *)(v4 + 404) == 0) {
			// 0xa49a4
			if (v2 == *(int32_t *)g28) {
				// 0xa49b0
				result = SyncPlrKill(v2, -1);
				// branch -> 0xa4bbc
				// 0xa4bbc
				return result;
			}
		}
	}
	// 0xa49c0
	SetPlayerOld(v2);
	int32_t v5 = g25 + g29;      // 0xa49c8
	int32_t v6 = v5 + 56;        // 0xa49d0
	int32_t v7 = *(int32_t *)v6; // 0xa49d0
	g24 = v6;
	int32_t v8 = v5 + 60; // 0xa49d8
	g22 = v8;
	g21 += v7;
	g20 += *(int32_t *)v8;
	int32_t result2 = function_a3f4c(g31, g18, v7); // 0xa49e8
	if (result2 == 0) {
		// 0xa4bbc
		return result2;
	}
	int32_t v9 = g25 + g29; // 0xa49f4
	*(int32_t *)(v9 + 64) = g21;
	*(int32_t *)(v9 + 68) = g20;
	int32_t v10 = g31; // 0xa4a04
	int32_t v11 = v10; // 0xa4a38
	if (v10 == *(int32_t *)g28) {
		int32_t v12 = *(int32_t *)(g23 - 0x77b0); // 0xa4a0c
		int32_t v13 = *(int32_t *)(g23 - 0x77b4); // 0xa4a18
		*(int32_t *)(g27 + 8) = *(int32_t *)g24 - *(int32_t *)v12;
		*(int32_t *)(g27 + 12) = *(int32_t *)g22 - *(int32_t *)v13;
		v11 = g31;
		// branch -> 0xa4a34
	}
	int32_t v14 = 0x1000000 * v11 / 0x1000000; // 0xa4a38
	g30 = g25 + g29;
	int32_t v15 = *(int32_t *)g22 + 112 * *(int32_t *)g24; // 0xa4a54
	*(char *)(*(int32_t *)g26 + v15) = (char)(-1 - v14);
	*(int32_t *)(g30 + 464) = *(int32_t *)g24;
	*(int32_t *)(g30 + 468) = *(int32_t *)g22;
	*(int32_t *)g24 = g21;
	*(int32_t *)g22 = g20;
	int32_t v16 = *(int32_t *)g22 + 112 * *(int32_t *)g24; // 0xa4a84
	*(char *)(*(int32_t *)g26 + v16) = (char)(v14 + 1);
	*(int32_t *)(g30 + 96) = g35;
	*(int32_t *)(g30 + 100) = g36;
	function_cb984(*(int32_t *)(g30 + 156), *(int32_t *)g24, *(int32_t *)g22);
	function_a44f0(g31);
	*(int32_t *)g30 = 2;
	*(int32_t *)(g30 + 104) = g32;
	*(int32_t *)(g30 + 108) = g33;
	*(int32_t *)(g30 + 484) = 256 * g35;
	*(int32_t *)(g30 + 488) = 256 * g36;
	*(int32_t *)(g30 + 472) = g18;
	if (__asm_rlwinm_(*(int32_t *)(g30 + 532), 0, 30, 30) == 0) {
		// 0xa4adc
		LoadPlrGFX(g31, 2);
		// branch -> 0xa4ae8
	}
	int32_t v17 = g25 + g29; // 0xa4ae8
	g20 = v17;
	int32_t v18 = *(int32_t *)(v17 + 676); // 0xa4af8
	NewPlrAnim(g31, g30 + 8 * g18 + 608, *(int32_t *)(v17 + 672), 0, v18);
	*(int32_t *)(g20 + 112) = g18;
	*(int32_t *)(g20 + 492) = 0;
	int32_t v19 = g31; // 0xa4b20
	int32_t result3;
	if (g18 == 7) {
		// 0xa4b20
		result3 = function_a3cc4(v19, 1);
		// branch -> 0xa4b3c
	} else {
		// 0xa4b30
		result3 = function_a3cc4(v19, 0);
		// branch -> 0xa4b3c
	}
	// 0xa4b3c
	if (g31 != *(int32_t *)g28) {
		// 0xa4bbc
		return result3;
	}
	// 0xa4b48
	g34 = *(int32_t *)(g27 + 8);
	uint32_t v20 = abs(); // 0xa4b90
	result = v20;
	if (*(int32_t *)*(int32_t *)(g23 - 0x766c) == 0) {
		// 0xa4b8c
		if (v20 <= 1) {
			// 0xa4b9c
			g34 = *(int32_t *)(g27 + 12);
			int32_t v21 = abs(); // 0xa4ba0
			result = v21;
			if (v21 <= 1) {
				// 0xa4bac
				*(int32_t *)(g27 + 16) = g19;
				// branch -> 0xa4bbc
				// 0xa4bbc
				return result;
			}
		}
		// 0xa4bb4
		*(int32_t *)(g27 + 16) = 0;
		// branch -> 0xa4bbc
	} else {
		// 0xa4b58
		if (v20 <= 2) {
			// 0xa4b68
			g34 = *(int32_t *)(g27 + 12);
			int32_t v22 = abs(); // 0xa4b6c
			result = v22;
			if (v22 <= 2) {
				// 0xa4b78
				*(int32_t *)(g27 + 16) = g19;
				// branch -> 0xa4bbc
				// 0xa4bbc
				return result;
			}
		}
		// 0xa4b80
		*(int32_t *)(g27 + 16) = 0;
		// branch -> 0xa4bbc
	}
	// 0xa4bbc
	return result;
}

// Address range: 0xa4bd0 - 0xa4e8c
int32_t function_a4bd0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10)
{
	g28 = a1;
	g24 = *(int32_t *)(g23 - 0x7680);
	g25 = *(int32_t *)(g23 - 0x77b8);
	g29 = a2;
	g26 = *(int32_t *)(g23 - 0x77ac);
	g30 = a3;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa4bf4
	g27 = v1;
	g19 = a6;
	g18 = a7;
	g17 = g13;
	g33 = a8;
	g35 = a9;
	g36 = a10;
	int32_t v2 = a1; // 0xa4c6c
	if (a1 >= 4) {
		// 0xa4c24
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5984));
		v1 = g27;
		v2 = g28;
		// branch -> 0xa4c30
	}
	int32_t v3 = 0x55ec * v2; // 0xa4c30
	g22 = v3;
	int32_t v4 = v3 + v1; // 0xa4c34
	int32_t result;       // r3
	if (*(char *)(v4 + 313) != 0) {
		// 0xa4c44
		if (*(int32_t *)(v4 + 404) == 0) {
			// 0xa4c50
			if (v2 == *(int32_t *)g26) {
				// 0xa4c5c
				result = SyncPlrKill(v2, -1);
				// branch -> 0xa4e78
				// 0xa4e78
				return result;
			}
		}
	}
	// 0xa4c6c
	SetPlayerOld(v2);
	int32_t v5 = g22 + g27;      // 0xa4c74
	int32_t v6 = v5 + 56;        // 0xa4c78
	int32_t v7 = *(int32_t *)v6; // 0xa4c78
	g21 = v6;
	int32_t v8 = v5 + 60;        // 0xa4c80
	int32_t v9 = *(int32_t *)v8; // 0xa4c80
	g20 = v8;
	g19 += v7;
	g18 += v9;
	g17 += v7;
	int32_t result2 = function_a3f4c(g28, g35, v9); // 0xa4c9c
	if (result2 == 0) {
		// 0xa4e78
		return result2;
	}
	int32_t v10 = g22 + g27; // 0xa4ca8
	*(int32_t *)(v10 + 64) = g19;
	*(int32_t *)(v10 + 68) = g18;
	int32_t v11 = g28; // 0xa4cb8
	int32_t v12 = v11; // 0xa4cec
	if (v11 == *(int32_t *)g26) {
		int32_t v13 = *(int32_t *)(g23 - 0x77b4);                               // 0xa4ccc
		int32_t v14 = *(int32_t *)g21 - *(int32_t *)*(int32_t *)(g23 - 0x77b0); // 0xa4cd0
		*(int32_t *)(g25 + 8) = v14;
		*(int32_t *)(g25 + 12) = *(int32_t *)g20 - *(int32_t *)v13;
		v12 = g28;
		// branch -> 0xa4ce8
	}
	int32_t v15 = g22 + g27;                                                  // r6
	int32_t v16 = 0x1000000 * (-1 - 0x1000000 * v12 / 0x1000000) / 0x1000000; // 0xa4d08
	int32_t v17 = *(int32_t *)g20 + 112 * *(int32_t *)g21;                    // 0xa4d0c
	*(char *)(*(int32_t *)g24 + v17) = (char)v16;
	*(char *)(*(int32_t *)g24 + 112 * g19 + g18) = (char)v16;
	int32_t v18 = g17; // 0xa4d28
	*(int32_t *)(v15 + 476) = v18;
	int32_t v19 = g33; // 0xa4d30
	*(int32_t *)(v15 + 480) = v19;
	int32_t v20 = *(int32_t *)*(int32_t *)(g23 - 0x779c); // 0xa4d38
	char *v21 = (char *)(v19 + 112 * v18 + v20);          // 0xa4d3c
	*v21 = (char)((int32_t)*v21 | 32);
	*(int32_t *)(v15 + 96) = g31;
	*(int32_t *)(v15 + 100) = g32;
	if (*(char *)*(int32_t *)(g23 - 0x7794) != 0) {
		// 0xa4d5c
		function_cb984(*(int32_t *)(v15 + 156), g17, g33);
		function_a44f0(g28);
		// branch -> 0xa4d74
	}
	int32_t v22 = g22 + g27; // 0xa4d74
	g20 = v22;
	*(int32_t *)v22 = 3;
	*(int32_t *)(g20 + 104) = g29;
	*(int32_t *)(g20 + 108) = g30;
	*(int32_t *)(g20 + 464) = g19;
	*(int32_t *)(g20 + 468) = g18;
	*(int32_t *)(g20 + 484) = 256 * g31;
	*(int32_t *)(g20 + 488) = 256 * g32;
	*(int32_t *)(g20 + 472) = g35;
	if (__asm_rlwinm_(*(int32_t *)(g20 + 532), 0, 30, 30) == 0) {
		// 0xa4db0
		LoadPlrGFX(g28, 2);
		// branch -> 0xa4dbc
	}
	int32_t v23 = g22 + g27; // 0xa4dbc
	g17 = v23;
	int32_t v24 = *(int32_t *)(v23 + 676); // 0xa4dcc
	NewPlrAnim(g28, g20 + 8 * g35 + 608, *(int32_t *)(v23 + 672), 0, v24);
	*(int32_t *)(g17 + 112) = g35;
	*(int32_t *)(g17 + 492) = 0;
	result = function_a3cc4(g28, 0);
	if (g28 != *(int32_t *)g26) {
		// 0xa4e78
		return result;
	}
	// 0xa4e04
	g34 = *(int32_t *)(g25 + 8);
	uint32_t v25 = abs(); // 0xa4e4c
	result = v25;
	if (*(int32_t *)*(int32_t *)(g23 - 0x766c) == 0) {
		// 0xa4e48
		if (v25 <= 1) {
			// 0xa4e58
			g34 = *(int32_t *)(g25 + 12);
			int32_t v26 = abs(); // 0xa4e5c
			result = v26;
			if (v26 <= 1) {
				// 0xa4e68
				*(int32_t *)(g25 + 16) = g36;
				// branch -> 0xa4e78
				// 0xa4e78
				return result;
			}
		}
		// 0xa4e70
		*(int32_t *)(g25 + 16) = 0;
		// branch -> 0xa4e78
	} else {
		// 0xa4e14
		if (v25 <= 2) {
			// 0xa4e24
			g34 = *(int32_t *)(g25 + 12);
			int32_t v27 = abs(); // 0xa4e28
			result = v27;
			if (v27 <= 2) {
				// 0xa4e34
				*(int32_t *)(g25 + 16) = g36;
				// branch -> 0xa4e78
				// 0xa4e78
				return result;
			}
		}
		// 0xa4e3c
		*(int32_t *)(g25 + 16) = 0;
		// branch -> 0xa4e78
	}
	// 0xa4e78
	return result;
}

// Address range: 0xa4e8c - 0xa4f84
int32_t function_a4e8c(int32_t a1)
{
	int32_t v1 = g36;                        // 0xa4e8c
	int32_t v2 = g10;                        // 0xa4e90
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xa4e94
	g36 = v3;
	int32_t v4 = g35; // 0xa4e98
	int32_t v5 = g33; // 0xa4e9c
	g33 = g37;
	int32_t v6 = g32; // 0xa4ea4
	g32 = a1;
	int32_t v7 = a1; // 0xa4ef8
	if (a1 >= 4) {
		// 0xa4ebc
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5988));
		v3 = g36;
		v7 = g32;
		// branch -> 0xa4ec8
	}
	int32_t v8 = 0x55ec * v7; // 0xa4ec8
	g35 = v8;
	int32_t v9 = v8 + v3; // 0xa4ecc
	int32_t result;
	if (*(char *)(v9 + 313) != 0) {
		// 0xa4edc
		if (*(int32_t *)(v9 + 404) == 0) {
			// 0xa4ee8
			if (v7 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0xa4ef8
				result = SyncPlrKill(v7, -1);
				// branch -> 0xa4f64
				// 0xa4f64
				g36 = v1;
				g10 = v2;
				g35 = v4;
				g33 = v5;
				g32 = v6;
				return result;
			}
		}
	}
	// 0xa4f08
	if (__asm_rlwinm_(*(int32_t *)(v9 + 532), 0, 29, 29) == 0) {
		// 0xa4f18
		LoadPlrGFX(g32, 4);
		// branch -> 0xa4f24
	}
	int32_t v10 = g35 + g36;               // 0xa4f24
	int32_t v11 = *(int32_t *)(v10 + 748); // 0xa4f34
	NewPlrAnim(g32, 8 * g33 + 680 + v10, *(int32_t *)(v10 + 744), 0, v11);
	*(int32_t *)g35 = 4;
	function_a4250(g32, g33);
	result = SetPlayerOld(g32);
	// branch -> 0xa4f64
	// 0xa4f64
	g36 = v1;
	g10 = v2;
	g35 = v4;
	g33 = v5;
	g32 = v6;
	return result;
}

// Address range: 0xa4f84 - 0xa5074
int32_t function_a4f84(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0xa4f88
	g30 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa4f90
	g36 = v2;
	g31 = a2;
	g32 = a3;
	g33 = a4;
	int32_t v3 = a1; // 0xa4fec
	if (a1 >= 4) {
		// 0xa4fb0
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x598c));
		v2 = g36;
		v3 = g30;
		// branch -> 0xa4fbc
	}
	int32_t v4 = 0x55ec * v3; // 0xa4fbc
	g35 = v4;
	int32_t v5 = v4 + v2; // 0xa4fc0
	if (*(char *)(v5 + 313) != 0) {
		// 0xa4fd0
		if (*(int32_t *)(v5 + 404) == 0) {
			// 0xa4fdc
			if (v3 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				int32_t result = SyncPlrKill(v3, -1); // 0xa4ff4
				// branch -> 0xa5060
				// 0xa5060
				g10 = v1;
				return result;
			}
		}
	}
	// 0xa4ffc
	if (__asm_rlwinm_(*(int32_t *)(v5 + 532), 0, 29, 29) == 0) {
		// 0xa500c
		LoadPlrGFX(g30, 4);
		// branch -> 0xa5018
	}
	int32_t v6 = g35 + g36;          // 0xa5018
	int32_t v7 = 8 * g31 + 680 + v6; // 0xa5030
	NewPlrAnim(g30, v7, *(int32_t *)(v6 + 744), 0, *(int32_t *)(v6 + 748));
	*(int32_t *)g35 = 5;
	function_a4250(g30, g31);
	int32_t result2 = SetPlayerOld(g30); // r3
	*(int32_t *)(g35 + 464) = g32;
	*(int32_t *)(g35 + 468) = g33;
	// branch -> 0xa5060
	// 0xa5060
	g10 = v1;
	return result2;
}

// Address range: 0xa5074 - 0xa5164
int32_t function_a5074(int32_t a1)
{
	// 0xa5074
	g31 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa5080
	g35 = v1;
	g32 = g37;
	int32_t v2 = a1; // 0xa50d4
	if (a1 >= 4) {
		// 0xa5098
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5990));
		v1 = g35;
		v2 = g31;
		// branch -> 0xa50a4
	}
	int32_t v3 = 0x55ec * v2; // 0xa50a4
	g33 = v3;
	int32_t v4 = v3 + v1; // 0xa50a8
	int32_t result;
	if (*(char *)(v4 + 313) != 0) {
		// 0xa50b8
		if (*(int32_t *)(v4 + 404) == 0) {
			// 0xa50c4
			if (v2 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0xa50d4
				result = SyncPlrKill(v2, -1);
				// branch -> 0xa5150
				// 0xa5150
				return result;
			}
		}
	}
	// 0xa50e4
	g36 = v4;
	g34 = 61;
	g38 = *(int32_t *)(v4 + 60);
	PlaySfxLoc(61);
	if (__asm_rlwinm_(*(int32_t *)(g36 + 532), 0, 23, 23) == 0) {
		// 0xa5104
		LoadPlrGFX(g31, 256);
		// branch -> 0xa5110
	}
	int32_t v5 = g33 + g35;               // 0xa5110
	int32_t v6 = *(int32_t *)(v5 + 1172); // 0xa5120
	NewPlrAnim(g31, 8 * g32 + 1104 + v5, *(int32_t *)(v5 + 1168), 2, v6);
	*(int32_t *)g33 = 6;
	function_a4250(g31, g32);
	result = SetPlayerOld(g31);
	// branch -> 0xa5150
	// 0xa5150
	return result;
}

// Address range: 0xa5164 - 0xa5364
int32_t function_a5164(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	g29 = a1;
	g35 = *(int32_t *)(g23 - 0x769c);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa5178
	g36 = v1;
	g30 = a2;
	g31 = a3;
	g32 = a4;
	int32_t v2 = a1; // 0xa51d0
	if (a1 >= 4) {
		// 0xa5194
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5994));
		v1 = g36;
		v2 = g29;
		// branch -> 0xa51a0
	}
	int32_t v3 = 0x55ec * v2; // 0xa51a0
	g33 = v3;
	int32_t v4 = v3 + v1; // 0xa51a4
	if (*(char *)(v4 + 313) != 0) {
		// 0xa51b4
		if (*(int32_t *)(v4 + 404) == 0) {
			// 0xa51c0
			if (v2 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0xa51d0
				// branch -> 0xa5350
				// 0xa5350
				return SyncPlrKill(v2, -1);
			}
		}
	}
	// 0xa51e0
	int32_t v5;     // 0xa52f0
	int32_t result; // 0xa5340
	int32_t v6;     // 0xa52f4
	int32_t v7;     // 0xa530c
	if (*(char *)*(int32_t *)(g23 - 0x7794) == 0) {
		// 0xa52f0
		v5 = g33 + g36;
		v6 = *(int32_t *)(v5 + 164);
		g38 = *(int32_t *)(v5 + 60);
		v7 = (int32_t) * (char *)(g35 + 56 * v6 + 32);
		g34 = v7;
		PlaySfxLoc(v7);
		*(int32_t *)(g33 + g36) = 9;
		function_a4250(g29, g30);
		SetPlayerOld(g29);
		*(int32_t *)(g28 + 464) = g31;
		*(int32_t *)(g28 + 468) = g32;
		result = function_6db5c(g29, *(int32_t *)g27);
		*(int32_t *)(g28 + 476) = result;
		*(int32_t *)(g28 + 492) = 1;
		// branch -> 0xa5350
		// 0xa5350
		return result;
	}
	char v8 = *(char *)(g35 + 56 * *(int32_t *)(v4 + 164) + 2); // 0xa5200
	if (v8 == 1) {
		// 0xa526c
		if (__asm_rlwinm_(*(int32_t *)(v4 + 532), 0, 27, 27) == 0) {
			// 0xa5278
			LoadPlrGFX(g29, 16);
			// branch -> 0xa5284
		}
		int32_t v9 = g36;                       // 0xa5288
		int32_t v10 = g33;                      // 0xa5288
		int32_t v11 = v10 + v9;                 // 0xa5288
		int32_t v12 = v10 + 8 * g30 + 756 + v9; // 0xa52a0
		NewPlrAnim(g29, v12, *(int32_t *)(v11 + 948), 0, *(int32_t *)(v11 + 952));
		// branch -> 0xa52f0
		// 0xa52f0
		v5 = g33 + g36;
		v6 = *(int32_t *)(v5 + 164);
		g38 = *(int32_t *)(v5 + 60);
		v7 = (int32_t) * (char *)(g35 + 56 * v6 + 32);
		g34 = v7;
		PlaySfxLoc(v7);
		*(int32_t *)(g33 + g36) = 9;
		function_a4250(g29, g30);
		SetPlayerOld(g29);
		*(int32_t *)(g28 + 464) = g31;
		*(int32_t *)(g28 + 468) = g32;
		result = function_6db5c(g29, *(int32_t *)g27);
		*(int32_t *)(g28 + 476) = result;
		*(int32_t *)(g28 + 492) = 1;
		// branch -> 0xa5350
		// 0xa5350
		return result;
	}
	// 0xa520c
	if (v8 == 0) {
		// 0xa5228
		if (__asm_rlwinm_(*(int32_t *)(v4 + 532), 0, 26, 26) == 0) {
			// 0xa5234
			LoadPlrGFX(g29, 32);
			// branch -> 0xa5240
		}
		int32_t v13 = g36;                       // 0xa5244
		int32_t v14 = g33;                       // 0xa5244
		int32_t v15 = v14 + v13;                 // 0xa5244
		int32_t v16 = v14 + 8 * g30 + 820 + v13; // 0xa525c
		NewPlrAnim(g29, v16, *(int32_t *)(v15 + 948), 0, *(int32_t *)(v15 + 952));
		// branch -> 0xa52f0
	} else {
		// 0xa521c
		if (v8 == 2) {
			// 0xa52b0
			if (__asm_rlwinm_(*(int32_t *)(v4 + 532), 0, 25, 25) == 0) {
				// 0xa52bc
				LoadPlrGFX(g29, 64);
				// branch -> 0xa52c8
			}
			int32_t v17 = g36;                       // 0xa52cc
			int32_t v18 = g33;                       // 0xa52cc
			int32_t v19 = v18 + v17;                 // 0xa52cc
			int32_t v20 = v18 + 8 * g30 + 884 + v17; // 0xa52e4
			NewPlrAnim(g29, v20, *(int32_t *)(v19 + 948), 0, *(int32_t *)(v19 + 952));
			// branch -> 0xa52f0
		}
	}
	// 0xa52f0
	v5 = g33 + g36;
	v6 = *(int32_t *)(v5 + 164);
	g38 = *(int32_t *)(v5 + 60);
	v7 = (int32_t) * (char *)(g35 + 56 * v6 + 32);
	g34 = v7;
	PlaySfxLoc(v7);
	*(int32_t *)(g33 + g36) = 9;
	function_a4250(g29, g30);
	SetPlayerOld(g29);
	*(int32_t *)(g28 + 464) = g31;
	*(int32_t *)(g28 + 468) = g32;
	result = function_6db5c(g29, *(int32_t *)g27);
	*(int32_t *)(g28 + 476) = result;
	*(int32_t *)(g28 + 492) = 1;
	// branch -> 0xa5350
	// 0xa5350
	return result;
}

// Address range: 0xa5364 - 0xa54c8
int32_t function_a5364(int32_t a1)
{
	int32_t v1 = g36;                        // 0xa5364
	int32_t v2 = g10;                        // 0xa5368
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xa536c
	g36 = v3;
	int32_t v4 = g35; // 0xa5370
	g35 = *(int32_t *)(g23 - 0x779c);
	int32_t v5 = g33; // 0xa5378
	g33 = *(int32_t *)(g23 - 0x7680);
	int32_t v6 = g32; // 0xa5380
	g32 = a1;
	int32_t v7 = a1; // 0xa53b4
	if (a1 >= 4) {
		// 0xa5398
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5998));
		v3 = g36;
		v7 = g32;
		// branch -> 0xa53a4
	}
	int32_t v8 = 0x55ec * v7 + v3;       // 0xa53ac
	int32_t v9 = *(int32_t *)(v8 + 92);  // 0xa53b0
	int32_t v10 = *(int32_t *)(v8 + 88); // 0xa53b8
	int32_t v11 = v10;                   // r11
	int32_t v12 = v9 - 1;                // 0xa53bc
	int32_t v13 = v12;                   // r12
	int32_t v14 = v9 + 1;                // 0xa53c0
	int32_t v15 = v10 + 1;               // 0xa53c4
	int32_t result = v14;                // 0xa54c420
	int32_t v16;                         // 0xa5460
	int32_t v17;                         // 0xa5474
	char *v18;                           // 0xa5484
	int32_t result2;                     // 0xa5498
	char *v19;                           // 0xa549c
	if (v12 <= v14) {
		int32_t v20 = v15; // 0xa53d0
		while (true) {
			int32_t v21 = v10 - 1;       // 0xa53cc
			int32_t v22 = v21;           // r31
			int32_t v23 = v20 + 2 - v10; // 0xa53d4
			int32_t v24 = 112 * v21;     // 0xa53dc
			int32_t v25 = v12;           // 0xa5440
			if (v21 <= v20) {
				while (true) {
					// 0xa53ec
					int32_t v26; // 0xa5434
					int32_t v27; // 0xa5438
					int32_t v28; // 0xa543c
					if (v21 >= 0) {
						// 0xa53f4
						if (v21 <= 111) {
							uint32_t v29 = v13; // 0xa53fc
							if (v29 >= 0) {
								// 0xa5404
								if (v29 <= 111) {
									char *v30 = (char *)(v29 + v24 + *(int32_t *)g33); // 0xa5418
									int32_t v31 = (int32_t)*v30;                       // 0xa541c
									int32_t v32;                                       // 0xa5438
									if (v7 + 1 != v31) {
										// 0xa5428
										if (-1 - v7 != v31) {
											v32 = v21;
										lab_0xa5434:
											// 0xa5434
											v26 = v24 + 112;
											v27 = v32 + 1;
											v22 = v27;
											v28 = v23 - 1;
											if (v28 == 0) {
												// break -> 0xa5440
												break;
											}
											v23 = v28;
											v24 = v26;
											v21 = v27;
											// continue -> 0xa53ec
											continue;
										}
									}
									// 0xa5430
									*v30 = (char)0;
									v32 = v22;
									// branch -> 0xa5434
									goto lab_0xa5434;
								}
							}
						}
					}
					// 0xa5434
					v26 = v24 + 112;
					v27 = v21 + 1;
					v22 = v27;
					v28 = v23 - 1;
					if (v28 == 0) {
						// break -> 0xa5440
						break;
					}
					v23 = v28;
					v24 = v26;
					v21 = v27;
					// continue -> 0xa53ec
				}
				// 0xa5440
				v25 = v13;
				// branch -> 0xa5440
			}
			int32_t v33 = v25 + 1; // 0xa5440
			v13 = v33;
			if (v33 <= v14) {
				// 0xa5440
				v12 = v33;
				v20 = v15;
				v10 = v11;
				// branch -> 0xa53cc
				continue;
			} else {
				result = v14;
				v10 = v11;
			}
			// 0xa544c
			if (v10 < 0) {
				// 0xa54a8
				g36 = v1;
				g10 = v2;
				g35 = v4;
				g33 = v5;
				g32 = v6;
				return result;
			}
			// 0xa5454
			if (v10 < 111) {
				// 0xa5460
				v16 = v9;
				if (v16 >= 0) {
					// 0xa5468
					if (v16 < 111) {
						// 0xa5474
						v17 = 112 * v10;
						v18 = (char *)(*(int32_t *)g35 + v17 + v16 + 112);
						*v18 = (char)((int32_t)*v18 & 223);
						result2 = v9 + v17 + *(int32_t *)g35;
						v19 = (char *)(result2 + 1);
						*v19 = (char)((int32_t)*v19 & 223);
						// branch -> 0xa54a8
						// 0xa54a8
						g36 = v1;
						g10 = v2;
						g35 = v4;
						g33 = v5;
						g32 = v6;
						return result2;
					}
				}
			}
			// 0xa54a8
			g36 = v1;
			g10 = v2;
			g35 = v4;
			g33 = v5;
			g32 = v6;
			return result;
		}
	}
	// 0xa544c
	if (v10 < 0 || v10 >= 111) {
		// 0xa54a8
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v5;
		g32 = v6;
		return result;
	}
	// 0xa5460
	v16 = v9;
	if (v16 >= 0) {
		// 0xa5468
		if (v16 < 111) {
			// 0xa5474
			v17 = 112 * v10;
			v18 = (char *)(*(int32_t *)g35 + v17 + v16 + 112);
			*v18 = (char)((int32_t)*v18 & 223);
			result2 = v9 + v17 + *(int32_t *)g35;
			v19 = (char *)(result2 + 1);
			*v19 = (char)((int32_t)*v19 & 223);
			// branch -> 0xa54a8
		} else {
			result2 = result;
		}
	} else {
		result2 = result;
	}
	// 0xa54a8
	g36 = v1;
	g10 = v2;
	g35 = v4;
	g33 = v5;
	g32 = v6;
	return result2;
}

// Address range: 0xa54c8 - 0xa579c
int32_t RemovePlrFromMap(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7680); // r5
	int32_t v2 = a1 + 1;                     // r9
	int32_t v3 = *(int32_t *)(g23 - 0x779c); // r4
	int32_t v4 = -1 - a1;                    // r10
	int32_t v5 = 1;                          // r11
	int32_t v6 = 1;                          // 0xa54f43
	// branch -> 0xa54dc
	int32_t v7; // ctr
	int32_t v8; // r7
	int32_t v9; // r8
	while (true) {
		// 0xa54dc
		v7 = 37;
		v9 = 1;
		int32_t v10 = 112; // r6
		int32_t v11 = v6;  // 0xa5520
		int32_t v12 = 112; // 0xa551c
		// branch -> 0xa54ec
		int32_t v13; // 0xa55e8
		while (true) {
			int32_t v14 = v12 + v11;            // 0xa54f0
			int32_t v15 = v14 + *(int32_t *)v1; // 0xa54f4
			int32_t v16;                        // 0xa5520
			unsigned char v17;                  // 0xa5524
			if (v4 != (int32_t) * (char *)(v15 - 1)) {
				// 0xa5508
				if (v4 != (int32_t) * (char *)(v15 - 112)) {
				lab_0xa5538_3:;
					int32_t v18 = v10 + 112;                  // 0xa553c
					int32_t v19 = v5;                         // 0xa5544
					int32_t v20 = v18 + *(int32_t *)v1 + v19; // 0xa5544
					if (v4 != (int32_t) * (char *)(v20 - 1)) {
						// 0xa5558
						if (v4 != (int32_t) * (char *)(v20 - 112)) {
						lab_0xa5588_2:;
							int32_t v21 = v18 + 112;                  // 0xa558c
							int32_t v22 = v5;                         // 0xa5598
							int32_t v23 = v21 + *(int32_t *)v1 + v22; // 0xa5598
							if (v4 != (int32_t) * (char *)(v23 - 1)) {
								// 0xa55ac
								if (v4 != (int32_t) * (char *)(v23 - 112)) {
								lab_0xa55dc_2:;
									int32_t v24 = v21 + 112; // 0xa55dc
									v10 = v24;
									v9 += 2;
									int32_t v25 = v7 - 1; // 0xa55e4
									v7 = v25;
									v13 = v5;
									if (v25 == 0) {
										// break -> 0xa55e8
										break;
									}
									v11 = v13;
									v12 = v24;
									// continue -> 0xa54ec
									continue;
								}
							}
							int32_t v26 = v22 + v21 + *(int32_t *)v3; // 0xa55c4
							v8 = v26;
							unsigned char v27 = *(char *)v26; // 0xa55c8
							if (__asm_rlwinm_((int32_t)v27, 0, 26, 26) == 0) {
								goto lab_0xa55dc_2;
							}
							// 0xa55d4
							*(char *)v8 = v27 & -33;
							// branch -> 0xa55dc
							goto lab_0xa55dc_2;
						}
					}
					int32_t v28 = v19 + v18 + *(int32_t *)v3; // 0xa5570
					v8 = v28;
					unsigned char v29 = *(char *)v28; // 0xa5574
					if (__asm_rlwinm_((int32_t)v29, 0, 26, 26) == 0) {
						goto lab_0xa5588_2;
					}
					// 0xa5580
					*(char *)v8 = v29 & -33;
					// branch -> 0xa5588
					goto lab_0xa5588_2;
				}
				// 0xa5518
				v16 = v14 + *(int32_t *)v3;
				v17 = *(char *)v16;
				if (__asm_rlwinm_((int32_t)v17, 0, 26, 26) == 0) {
					goto lab_0xa5538_3;
				}
			lab_0xa5530:
				// 0xa5530
				*(char *)v16 = v17 & -33;
				// branch -> 0xa5538
				goto lab_0xa5538_3;
			}
			// 0xa5518
			v16 = v14 + *(int32_t *)v3;
			v17 = *(char *)v16;
			if (__asm_rlwinm_((int32_t)v17, 0, 26, 26) == 0) {
				goto lab_0xa5538_3;
			}
			goto lab_0xa5530;
		}
		int32_t v30 = v13 + 1; // 0xa55e8
		v5 = v30;
		if (v30 >= 112) {
			// break -> 0xa55f4
			break;
		}
		v6 = v30;
		// continue -> 0xa54dc
	}
	// 0xa55f4
	v8 = 0;
	int32_t result = 0; // r3
	int32_t v31 = 0;    // 0xa56146
	// branch -> 0xa55fc
	while (true) {
		// 0xa55fc
		v9 = 0;
		v7 = 14;
		v3 = 0;
		int32_t v32 = v31; // 0xa5614
		int32_t v33 = 0;   // 0xa5610
		// branch -> 0xa560c
		int32_t v34; // 0xa578c
		while (true) {
			char *v35 = (char *)(v33 + v32 + *(int32_t *)v1); // 0xa5618
			int32_t v36 = (int32_t)*v35;                      // 0xa561c
			int32_t v37;                                      // 0xa5634
			int32_t v38;                                      // 0xa5638
			int32_t v39;                                      // 0xa5640
			int32_t v40;                                      // 0xa564c
			if (v2 != v36) {
				// 0xa5628
				if (v4 != v36) {
					v40 = v2;
					v39 = v32;
					v38 = v33;
					v37 = v1;
				lab_0xa5634_2:;
					int32_t v41 = v38 + 112; // 0xa5638
					v3 = v41;
					char *v42 = (char *)(v41 + v39 + *(int32_t *)v37); // 0xa5644
					int32_t v43 = (int32_t)*v42;                       // 0xa5648
					int32_t v44;                                       // 0xa5660
					int32_t v45;                                       // 0xa5670
					int32_t v46;                                       // 0xa567c
					if (v40 != v43) {
						// 0xa5654
						if (v4 != v43) {
							v46 = v40;
							v45 = v39;
							v44 = v37;
						lab_0xa5660:;
							int32_t v47 = v41 + 112; // 0xa5664
							v3 = v47;
							int32_t v48 = v9 + 1; // 0xa5668
							v9 = v48;
							char *v49 = (char *)(v47 + v45 + *(int32_t *)v44); // 0xa5674
							int32_t v50 = (int32_t)*v49;                       // 0xa5678
							int32_t v51;                                       // 0xa5690
							int32_t v52;                                       // 0xa56a0
							int32_t v53;                                       // 0xa56ac
							if (v46 != v50) {
								// 0xa5684
								if (v4 != v50) {
									v53 = v46;
									v52 = v45;
									v51 = v44;
								lab_0xa5690:;
									int32_t v54 = v47 + 112; // 0xa5694
									v3 = v54;
									int32_t v55 = v48 + 1; // 0xa5698
									v9 = v55;
									char *v56 = (char *)(v54 + v52 + *(int32_t *)v51); // 0xa56a4
									int32_t v57 = (int32_t)*v56;                       // 0xa56a8
									int32_t v58;                                       // 0xa56c0
									int32_t v59;                                       // 0xa56d0
									int32_t v60;                                       // 0xa56dc
									if (v53 != v57) {
										// 0xa56b4
										if (v4 != v57) {
											v60 = v53;
											v59 = v52;
											v58 = v51;
										lab_0xa56c0:;
											int32_t v61 = v54 + 112; // 0xa56c4
											v3 = v61;
											int32_t v62 = v55 + 1; // 0xa56c8
											v9 = v62;
											char *v63 = (char *)(v61 + v59 + *(int32_t *)v58); // 0xa56d4
											int32_t v64 = (int32_t)*v63;                       // 0xa56d8
											int32_t v65;                                       // 0xa56f0
											int32_t v66;                                       // 0xa5700
											int32_t v67;                                       // 0xa570c
											if (v60 != v64) {
												// 0xa56e4
												if (v4 != v64) {
													v67 = v60;
													v66 = v59;
													v65 = v58;
												lab_0xa56f0:;
													int32_t v68 = v61 + 112; // 0xa56f4
													v3 = v68;
													int32_t v69 = v62 + 1; // 0xa56f8
													v9 = v69;
													char *v70 = (char *)(v68 + v66 + *(int32_t *)v65); // 0xa5704
													int32_t v71 = (int32_t)*v70;                       // 0xa5708
													int32_t v72;                                       // 0xa5720
													int32_t v73;                                       // 0xa5730
													int32_t v74;                                       // 0xa573c
													if (v67 != v71) {
														// 0xa5714
														if (v4 != v71) {
															v74 = v67;
															v73 = v66;
															v72 = v65;
														lab_0xa5720:;
															int32_t v75 = v68 + 112; // 0xa5724
															v3 = v75;
															int32_t v76 = v69 + 1; // 0xa5728
															v9 = v76;
															char *v77 = (char *)(v75 + v73 + *(int32_t *)v72); // 0xa5734
															int32_t v78 = (int32_t)*v77;                       // 0xa5738
															int32_t v79;                                       // 0xa5750
															int32_t v80;                                       // 0xa5760
															int32_t v81;                                       // 0xa576c
															if (v74 != v78) {
																// 0xa5744
																if (v4 != v78) {
																	v81 = v74;
																	v80 = v73;
																	v79 = v72;
																lab_0xa5750:;
																	int32_t v82 = v75 + 112; // 0xa5754
																	v3 = v82;
																	int32_t v83 = v76 + 1; // 0xa5758
																	v9 = v83;
																	char *v84 = (char *)(v82 + v80 + *(int32_t *)v79); // 0xa5764
																	int32_t v85 = (int32_t)*v84;                       // 0xa5768
																	if (v81 != v85) {
																		// 0xa5774
																		if (v4 != v85) {
																			v34 = v80;
																		lab_0xa5780:;
																			int32_t v86 = v82 + 112; // 0xa5780
																			v3 = v86;
																			v9 = v83 + 1;
																			int32_t v87 = v7 - 1; // 0xa5788
																			v7 = v87;
																			if (v87 == 0) {
																				// break -> 0xa578c
																				break;
																			}
																			v32 = v34;
																			v33 = v86;
																			// continue -> 0xa560c
																			continue;
																		}
																	}
																	// 0xa577c
																	*v84 = (char)result;
																	v34 = v8;
																	v83 = v9;
																	v82 = v3;
																	// branch -> 0xa5780
																	goto lab_0xa5780;
																}
															}
															// 0xa574c
															*v77 = (char)result;
															v81 = v2;
															v80 = v8;
															v76 = v9;
															v75 = v3;
															v79 = v1;
															// branch -> 0xa5750
															goto lab_0xa5750;
														}
													}
													// 0xa571c
													*v70 = (char)result;
													v74 = v2;
													v73 = v8;
													v69 = v9;
													v68 = v3;
													v72 = v1;
													// branch -> 0xa5720
													goto lab_0xa5720;
												}
											}
											// 0xa56ec
											*v63 = (char)result;
											v67 = v2;
											v66 = v8;
											v62 = v9;
											v61 = v3;
											v65 = v1;
											// branch -> 0xa56f0
											goto lab_0xa56f0;
										}
									}
									// 0xa56bc
									*v56 = (char)result;
									v60 = v2;
									v59 = v8;
									v55 = v9;
									v54 = v3;
									v58 = v1;
									// branch -> 0xa56c0
									goto lab_0xa56c0;
								}
							}
							// 0xa568c
							*v49 = (char)result;
							v53 = v2;
							v52 = v8;
							v48 = v9;
							v47 = v3;
							v51 = v1;
							// branch -> 0xa5690
							goto lab_0xa5690;
						}
					}
					// 0xa565c
					*v42 = (char)result;
					v46 = v2;
					v45 = v8;
					v41 = v3;
					v44 = v1;
					// branch -> 0xa5660
					goto lab_0xa5660;
				}
				// 0xa5630
				*v35 = (char)result;
				v40 = v2;
				v39 = v8;
				v38 = v3;
				v37 = v1;
				// branch -> 0xa5634
				goto lab_0xa5634_2;
			}
			// 0xa5630
			*v35 = (char)result;
			v40 = v2;
			v39 = v8;
			v38 = v3;
			v37 = v1;
			// branch -> 0xa5634
			goto lab_0xa5634_2;
		}
		int32_t v88 = v34 + 1; // 0xa578c
		v8 = v88;
		if (v88 >= 112) {
			// break -> 0xa5798
			break;
		}
		v31 = v88;
		// continue -> 0xa55fc
	}
	// 0xa5798
	return result;
}

// Address range: 0xa579c - 0xa5940
int32_t function_a579c(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0xa57a0
	g32 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa57a8
	g36 = v2;
	g31 = a2;
	g33 = g38;
	int32_t v3 = a1; // 0xa5800
	if (a1 >= 4) {
		// 0xa57c4
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x599c));
		v2 = g36;
		v3 = g32;
		// branch -> 0xa57d0
	}
	int32_t v4 = 0x55ec * v3; // 0xa57d0
	g35 = v4;
	int32_t v5 = v4 + v2; // 0xa57d4
	if (*(char *)(v5 + 313) != 0) {
		// 0xa57e4
		if (*(int32_t *)(v5 + 404) == 0) {
			// 0xa57f0
			if (v3 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				int32_t result = SyncPlrKill(v3, -1); // 0xa5808
				// branch -> 0xa592c
				// 0xa592c
				g10 = v1;
				return result;
			}
		}
	}
	unsigned char v6 = *(char *)(v5 + 348); // 0xa5814
	int32_t result2;                        // 0xa5880
	int32_t v7;                             // 0xa5900
	int32_t v8;                             // 0xa5910
	int32_t result3;                        // 0xa5928
	int32_t v9;                             // 0xa5898
	int32_t v10;                            // 0xa58b8
	int32_t v11;                            // 0xa5918
	int32_t v12;                            // 0xa58c8
	int32_t v13;                            // 0xa5914
	if (v6 == 0) {
		// 0xa5820
		g34 = 788;
		g38 = *(int32_t *)(v5 + 60);
		PlaySfxLoc(788);
		// branch -> 0xa586c
		// 0xa586c
		*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
		result2 = g35 + g36;
		if (g31 / 64 < (int32_t) * (char *)(result2 + 436)) {
			// 0xa5890
			if (g33 == 0) {
				// 0xa592c
				g10 = v1;
				return result2;
			}
		}
		// 0xa5898
		v9 = g35 + g36;
		g31 = *(int32_t *)(v9 + 112);
		if (__asm_rlwinm_(*(int32_t *)(v9 + 532), 0, 28, 28) == 0) {
			// 0xa58ac
			LoadPlrGFX(g32, 8);
			// branch -> 0xa58b8
		}
		// 0xa58b8
		v10 = g35 + g36;
		v12 = *(int32_t *)(v10 + 1028);
		NewPlrAnim(g32, 8 * g31 + 960 + v10, *(int32_t *)(v10 + 1024), 0, v12);
		*(int32_t *)g33 = 7;
		function_a4250(g32, g31);
		*(int32_t *)(g33 + 492) = 1;
		function_a5364(g32);
		v7 = g33;
		v8 = 112 * *(int32_t *)(v7 + 56);
		v13 = *(int32_t *)(v7 + 60);
		v11 = *(int32_t *)*(int32_t *)(g23 - 0x7680);
		*(char *)(v11 + v13 + v8) = (char)(0x1000000 * g32 / 0x1000000 + 1);
		result3 = SetPlayerOld(g32);
		// branch -> 0xa592c
		// 0xa592c
		g10 = v1;
		return result3;
	}
	// 0xa5834
	if (v6 == 1) {
		// 0xa5840
		g34 = 679;
		g38 = *(int32_t *)(v5 + 60);
		PlaySfxLoc(679);
		// branch -> 0xa586c
	} else {
		// 0xa5854
		if (v6 == 2) {
			// 0xa585c
			g34 = 576;
			g38 = *(int32_t *)(v5 + 60);
			PlaySfxLoc(576);
			// branch -> 0xa586c
		}
	}
	// 0xa586c
	*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
	result2 = g35 + g36;
	if (g31 / 64 < (int32_t) * (char *)(result2 + 436)) {
		// 0xa5890
		if (g33 == 0) {
			// 0xa592c
			g10 = v1;
			return result2;
		}
	}
	// 0xa5898
	v9 = g35 + g36;
	g31 = *(int32_t *)(v9 + 112);
	if (__asm_rlwinm_(*(int32_t *)(v9 + 532), 0, 28, 28) == 0) {
		// 0xa58ac
		LoadPlrGFX(g32, 8);
		// branch -> 0xa58b8
	}
	// 0xa58b8
	v10 = g35 + g36;
	v12 = *(int32_t *)(v10 + 1028);
	NewPlrAnim(g32, 8 * g31 + 960 + v10, *(int32_t *)(v10 + 1024), 0, v12);
	*(int32_t *)g33 = 7;
	function_a4250(g32, g31);
	*(int32_t *)(g33 + 492) = 1;
	function_a5364(g32);
	v7 = g33;
	v8 = 112 * *(int32_t *)(v7 + 56);
	v13 = *(int32_t *)(v7 + 60);
	v11 = *(int32_t *)*(int32_t *)(g23 - 0x7680);
	*(char *)(v11 + v13 + v8) = (char)(0x1000000 * g32 / 0x1000000 + 1);
	result3 = SetPlayerOld(g32);
	// branch -> 0xa592c
	// 0xa592c
	g10 = v1;
	return result3;
}

// Address range: 0xa5940 - 0xa5a58
int32_t function_a5940(int32_t *a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10;                        // 0xa5944
	int32_t v2 = *(int32_t *)(g23 - 0x71e4); // 0xa5948
	g36 = v2;
	int32_t result = (int32_t)a1; // 0xa594c
	g30 = result;
	g33 = *(int32_t *)(g23 - 0x7690);
	g35 = *(int32_t *)(g23 - 0x71f4);
	g31 = a2;
	g32 = a3;
	if (*(int32_t *)v2 > 126) {
		// 0xa5a44
		g10 = v1;
		return result;
	}
	int32_t v3 = *(int32_t *)(result + 360); // 0xa5974
	if (function_5a318((int32_t) * (int16_t *)(result + 4), v3, v3) >= 0) {
		// 0xa598c
		function_5a7d8(*(int32_t *)(g23 - 0x59a0));
		int32_t v4 = g30;                             // 0xa5994
		int32_t v5 = (int32_t) * (int16_t *)(v4 + 4); // 0xa599c
		function_5a384(g32, *(int32_t *)(v4 + 360), v5, g31, 8, 8);
		// branch -> 0xa59b0
	}
	int32_t v6 = *(int32_t *)(g23 - 0x768c); // 0xa59b4
	int32_t v7 = *(int32_t *)g35;            // 0xa59b8
	int32_t v8 = g32 + 112 * g31;            // 0xa59c8
	*(char *)(v8 + *(int32_t *)v6) = (char)(v7 + 1);
	int32_t v9 = 368 * v7;         // 0xa59d4
	int32_t v10 = *(int32_t *)g36; // 0xa59dc
	int32_t v11 = g35;             // 0xa59f0
	*(int32_t *)v11 = *(int32_t *)(v11 + 4 * (126 - v10));
	*(int32_t *)(4 * v10 + *(int32_t *)(g23 - 0x71e0)) = v7;
	int32_t v12 = g30 - 8;      // 0xa5a08
	int32_t v13 = v12 + 8;      // 0xa5a08
	int32_t v14 = v9 - 8 + g33; // 0xa5a10
	int32_t v15 = v14 + 8;      // 0xa5a10
	*(int32_t *)v15 = *(int32_t *)v13;
	*(int32_t *)(v14 + 12) = *(int32_t *)(v12 + 12);
	int32_t v16 = 45; // 0xa5a18
	// branch -> 0xa5a08
	while (v16 != 0) {
		// 0xa5a08
		v12 = v13;
		v13 = v12 + 8;
		v14 = v15;
		v15 = v14 + 8;
		*(int32_t *)v15 = *(int32_t *)v13;
		*(int32_t *)(v14 + 12) = *(int32_t *)(v12 + 12);
		v16--;
		// continue -> 0xa5a08
	}
	int32_t v17 = v9 + g33; // 0xa5a1c
	*(int32_t *)(v17 + 12) = g31;
	*(int32_t *)(v17 + 16) = g32;
	function_60abc(1, v17, v17);
	int32_t *v18 = (int32_t *)g36; // 0xa5a30
	int32_t result2 = *v18 + 1;    // 0xa5a38
	*v18 = result2;
	*(int32_t *)(g30 + 8) = -1;
	// branch -> 0xa5a44
	// 0xa5a44
	g10 = v1;
	return result2;
}

// Address range: 0xa5a58 - 0xa5bf0
int32_t function_a5a58(int32_t result, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10;                        // 0xa5a5c
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa5a60
	g35 = v2;
	g36 = a2;
	g28 = result;
	g27 = a3;
	g26 = a4;
	if (*(int32_t *)(a2 + 8) == -1) {
		// 0xa5bdc
		g10 = v1;
		return result;
	}
	int32_t v3 = result; // 0xa5a9c
	if (result >= 4) {
		// 0xa5a90
		g37 = result;
		app_fatal(*(int32_t *)(g23 - 0x59a4));
		a4 = g26;
		v2 = g35;
		a3 = g27;
		v3 = g28;
		// branch -> 0xa5a9c
	}
	int32_t v4 = 0x55ec * v3; // 0xa5a9c
	g32 = v4;
	int32_t v5 = v4 + v2;               // 0xa5aa4
	int32_t v6 = *(int32_t *)(v5 + 56); // 0xa5aa8
	int32_t v7 = v6 + a3;               // 0xa5ab0
	g29 = v7;
	int32_t v8 = *(int32_t *)(v5 + 60) + a4; // 0xa5ab4
	g30 = v8;
	int32_t v9;      // ctr
	int32_t v10;     // 0xa5b30
	int32_t v11;     // 0xa5b40
	int32_t v12;     // 0xa5b44
	int32_t result4; // 0xa5bec33
	int32_t v13;     // 0xa5b30
	int32_t v14;     // 0xa5bbc2
	if (a3 == 0) {
		// 0xa5abc
		if (a4 == 0) {
			// 0xa5b28
			g28 = 1;
			g33 = v2 + v4;
			v10 = 1;
			// branch -> 0xa5b30
			while (true) {
				// 0xa5b30
				v13 = -v10;
				g31 = v13;
				g27 = v13;
				result4 = v6;
				int32_t v15; // 0xa5bd0
				if (v10 >= v13) {
					v14 = v10;
					v12 = v13;
					v11 = v13;
				lab_0xa5b3c:
					while (true) {
						// 0xa5b3c
						g26 = v11;
						int32_t v16 = *(int32_t *)(g33 + 60) + v12; // 0xa5b44
						g29 = v16;
						int32_t v17 = v6;  // 0xa5bec31
						int32_t v18 = v14; // 0xa5bc8
						int32_t v19 = v12; // 0xa5bc4
						int32_t v20;       // 0xa5bc4
						if (v11 <= v14) {
							int32_t v21 = v11; // 0xa5b54
							while (true) {
								int32_t v22 = *(int32_t *)(g33 + 56) + v21; // 0xa5b54
								g30 = v22;
								int32_t result3; // 0xa5bec
								if (function_5d584(v22, v16) != 0) {
									// 0xa5b68
									function_a5940((int32_t *)g36, g30, g29);
									v9 = 46;
									int32_t v23 = g32 + g35 + 0x53cc; // 0xa5b94
									int32_t v24 = g36 - 8;            // 0xa5b8c
									// branch -> 0xa5b8c
									while (true) {
										int32_t v25 = v24 + 8; // 0xa5b8c
										int32_t v26 = v23 + 8; // 0xa5b94
										*(int32_t *)v26 = *(int32_t *)v25;
										*(int32_t *)(v23 + 12) = *(int32_t *)(v24 + 12);
										int32_t v27 = v9 - 1; // 0xa5b9c
										v9 = v27;
										if (v27 == 0) {
											int32_t result2 = function_8ba58(0, 11, g30 % 256, g29 % 256); // 0xa5bb0
											// branch -> 0xa5bdc
											// 0xa5bdc
											g10 = v1;
											return result2;
										}
										// 0xa5b8c
										v23 = v26;
										v24 = v25;
										// branch -> 0xa5b8c
									}
									// 0xa5bdc
									g10 = v1;
									return result3;
								}
								int32_t v28 = g26 + 1; // 0xa5bb8
								g26 = v28;
								int32_t v29 = g28; // 0xa5bbc
								if (v28 > v29) {
									// 0xa5bbc
									v17 = 0;
									v18 = v29;
									v19 = g27;
									// branch -> 0xa5bc4
									// 0xa5bc4
									v20 = v19 + 1;
									g27 = v20;
									result4 = v17;
									if (v20 <= v18) {
									lab_0xa5bc4:
										// 0xa5bc4
										// branch -> 0xa5b3c
										break;
									}
								lab_0xa5bd0:
									// 0xa5bd0
									v15 = v18 + 1;
									g28 = v15;
									if (v15 >= 50) {
										// break (via goto) -> 0xa5bdc
										goto lab_0xa5bdc;
									}
									v6 = result4;
									v10 = v15;
									// continue (via goto) -> 0xa5b30
									goto lab_0xa5b30;
								} else {
									// 0xa5bb8
									v21 = v28;
									v16 = g29;
									// branch -> 0xa5b4c
									continue;
								}
								// 0xa5bdc
								g10 = v1;
								return result3;
							}
						}
						// 0xa5bc4
						v20 = v19 + 1;
						g27 = v20;
						if (v20 > v18) {
							result4 = v17;
							goto lab_0xa5bd0;
						}
						goto lab_0xa5bc4;
					}
				}
			lab_0xa5bd0_2:
				// 0xa5bd0
				v15 = v10 + 1;
				g28 = v15;
				if (v15 >= 50) {
					// break -> 0xa5bdc
					break;
				}
				v6 = result4;
				v10 = v15;
				// continue -> 0xa5b30
			}
			// 0xa5bdc
			g10 = v1;
			return result4;
		}
	}
	// 0xa5ac4
	if (function_5d584(v7, v8) == 0) {
		// 0xa5ac4
		// branch -> 0xa5b28
		// 0xa5b28
		g28 = 1;
		g33 = g35 + g32;
		v6 = 0;
		v10 = 1;
		// branch -> 0xa5b30
	lab_0xa5b30:
		while (true) {
			// 0xa5b30
			v13 = -v10;
			g31 = v13;
			g27 = v13;
			if (v10 < v13) {
				result4 = v6;
				goto lab_0xa5bd0_2;
			}
			v14 = v10;
			v12 = v13;
			v11 = v13;
			goto lab_0xa5b3c;
		}
	} else {
		// 0xa5ad8
		function_a5940((int32_t *)g36, g29, g30);
		v9 = 46;
		int32_t v30 = g32 + g35 + 0x53cc; // 0xa5b04
		int32_t v31 = g36 - 8;            // 0xa5afc
		// branch -> 0xa5afc
		while (true) {
			int32_t v32 = v31 + 8; // 0xa5afc
			int32_t v33 = v30 + 8; // 0xa5b04
			*(int32_t *)v33 = *(int32_t *)v32;
			*(int32_t *)(v30 + 12) = *(int32_t *)(v31 + 12);
			int32_t v34 = v9 - 1; // 0xa5b0c
			v9 = v34;
			if (v34 == 0) {
				int32_t result5 = function_8ba58(0, 11, g29 % 256, g30 % 256); // 0xa5b20
				// branch -> 0xa5bdc
				// 0xa5bdc
				g10 = v1;
				return result5;
			}
			// 0xa5afc
			v30 = v33;
			v31 = v32;
			// branch -> 0xa5afc
		}
	}
lab_0xa5bdc:
	// 0xa5bdc
	g10 = v1;
	return result4;
}

// Address range: 0xa5bf0 - 0xa5fdc
int32_t function_a5bf0(void)
{
	int32_t result = g34; // 0xa5bf8
	g26 = result;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa5bfc
	g36 = v1;
	int32_t v2 = 0x55ec * result; // 0xa5c00
	g31 = v2;
	g32 = *(int32_t *)(g23 - 0x71f0);
	int32_t v3 = g37; // 0xa5c08
	g27 = v3;
	g33 = *(int32_t *)(g23 - 0x71ec);
	int32_t v4 = v1 + v2; // 0xa5c10
	g30 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x77ac); // 0xa5c14
	g35 = v5;
	if (*(int32_t *)(v4 + 404) <= 0) {
		// 0xa5c2c
		if (*(int32_t *)v4 == 8) {
			// 0xa5fc8
			return result;
		}
	}
	int32_t v6 = g23; // 0xa5c88
	if (*(int32_t *)v5 == result) {
		// 0xa5c44
		NetSendCmdParam1(1, 38, v3 % 0x10000);
		v6 = g23;
		// branch -> 0xa5c54
	}
	int32_t v7 = 0; // 0xa5c80
	if ((*(char *)*(int32_t *)(v6 - 0x77f0) || 1) != 1) {
		// 0xa5c68
		if (*(int32_t *)(g31 + g36 + 52) == 16) {
			// 0xa5c78
			v7 = 1;
			// branch -> 0xa5c7c
		} else {
			v7 = 0;
		}
	}
	int32_t v8 = g26; // 0xa5c7c
	g28 = v7;
	if (v8 >= 4) {
		// 0xa5c88
		g37 = v8;
		app_fatal(*(int32_t *)(v6 - 0x59a8));
		// branch -> 0xa5c94
	}
	int32_t v9 = g31 + g36 + 348;    // 0xa5c98
	unsigned char v10 = *(char *)v9; // 0xa5c98
	g29 = v9;
	int32_t v11;       // r0
	int32_t v12;       // bp-424
	int32_t v13;       // 0xa5cf0
	int32_t v14;       // 0xa5d10
	int32_t v15;       // 0xa5d28
	int32_t v16;       // 0xa5de8
	int32_t v17;       // 0xa5e20
	int32_t v18;       // 0xa5e74
	int32_t v19;       // 0xa5f78
	int32_t v20;       // 0xa5fa0
	int32_t v21;       // 0xa5f90
	int32_t result2;   // 0xa5fc4
	int32_t *v22;      // 0xa5cf0
	int32_t v23;       // 0xa5e00
	int32_t v24;       // 0xa5e84
	unsigned char v25; // 0xa5ea0
	int32_t v26;       // 0xa5ee0
	int32_t v27;       // 0xa5f30
	int32_t v28;       // 0xa5f38
	int32_t v29;       // 0xa5d28
	int32_t v30;       // 0xa5d40
	int32_t v31;       // 0xa5dc8
	char *v32;         // 0xa5e04
	unsigned char v33; // 0xa5f08
	char v34;          // 0xa5f0c
	int32_t v35;       // 0xa5ee4
	int32_t v36;       // 0xa5f04
	int32_t v37;       // 0xa5f4c
	int32_t v38;       // 0xa5f94
	int32_t v39;       // 0xa5f98
	if (v10 == 0) {
		// 0xa5ca4
		g34 = 11;
		g38 = *(int32_t *)(g30 + 60);
		PlaySfxLoc(11);
		// branch -> 0xa5cf0
		// 0xa5cf0
		v13 = g30;
		v22 = (int32_t *)(v13 + 120);
		v14 = v13;
		if (*v22 != 0) {
			// 0xa5cfc
			*v22 = 0;
			*(int32_t *)(g30 + 532) = 0;
			function_a2b68(g26);
			v14 = g30;
			// branch -> 0xa5d10
		}
		// 0xa5d10
		if (__asm_rlwinm_(*(int32_t *)(v14 + 532), 0, 24, 24) == 0) {
			// 0xa5d1c
			LoadPlrGFX(g26, 128);
			// branch -> 0xa5d28
		}
		// 0xa5d28
		v15 = g30;
		v29 = *(int32_t *)(v15 + 112);
		v30 = *(int32_t *)(v15 + 1100);
		NewPlrAnim(g26, 8 * v29 + 1032 + v15, *(int32_t *)(v15 + 1096), 1, v30);
		*(int32_t *)g30 = 8;
		g25 = 1;
		*(char *)(g30 + 312) = 0;
		g37 = 0;
		*(char *)(g30 + 313) = (char)g25;
		SetPlayerHitPoints(g26);
		*(int32_t *)(g30 + 492) = g25;
		if (g26 != *(int32_t *)g35) {
			// 0xa5d80
			if (g27 == 0) {
				// 0xa5d88
				if (g28 == 0) {
					// 0xa5d90
					v11 = -1;
					*(int32_t *)(g30 + 1184) = -1;
					*(int32_t *)(g30 + 1552) = v11;
					*(int32_t *)(g30 + 1920) = v11;
					*(int32_t *)(g30 + 2288) = v11;
					*(int32_t *)(g30 + 2656) = v11;
					*(int32_t *)(g30 + 3024) = v11;
					*(int32_t *)(g30 + 3392) = v11;
					CalcPlrInv(g26, 0);
					// branch -> 0xa5dbc
				}
			}
		}
		// 0xa5dbc
		v31 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
		if (v31 == *(int32_t *)(g31 + g36 + 52)) {
			// 0xa5dd4
			function_a4250(g26, *(int32_t *)(g30 + 112));
			RemovePlrFromMap(g26);
			v16 = g30;
			v23 = *(int32_t *)(v16 + 60) + 112 * *(int32_t *)(v16 + 56);
			v32 = (char *)(*(int32_t *)*(int32_t *)(g23 - 0x779c) + v23);
			*v32 = (char)((int32_t)*v32 | 4);
			SetPlayerOld(g26);
			if (g26 == *(int32_t *)g35) {
				// 0xa5e20
				v17 = g23;
				*(int32_t *)*(int32_t *)(v17 - 0x76f0) = 1;
				*(int32_t *)*(int32_t *)(v17 - 0x6f8c) = 30;
				if (*(int32_t *)*(int32_t *)(g23 - 0x7744) >= 12) {
					// 0xa5e48
					function_a5a58(g26, g30 + 0x53d4, 0, 0);
					g34 = 1;
					function_324ec(1);
					// branch -> 0xa5e64
				}
				// 0xa5e64
				if (g28 == 0) {
					// 0xa5e6c
					function_a5fdc(g26);
					v18 = g27;
					if (v18 == -1) {
						// 0xa5fbc
						g37 = 0;
						result2 = SetPlayerHitPoints(g26);
						// branch -> 0xa5fc8
						// 0xa5fc8
						return result2;
					}
					// 0xa5e7c
					if (v18 == 0) {
						// 0xa5f78
						v19 = g30;
						g25 = v19 + 1176;
						// branch -> 0xa5f80
						while (true) {
							// 0xa5f80
							v21 = __asm_rlwinm(*(int32_t *)(v19 + 112) + 6, 2, 27, 29);
							v38 = *(int32_t *)(g33 + v21);
							v39 = *(int32_t *)(g32 + v21);
							function_a5a58(v38, v39, v38, v39);
							v20 = g27;
							g25 += 368;
							if (v20 != 0) {
								goto lab_0xa5f80;
							}
							// 0xa5fb0
							CalcPlrInv(g26, 0);
							// branch -> 0xa5fbc
							// 0xa5fbc
							g37 = 0;
							result2 = SetPlayerHitPoints(g26);
							// branch -> 0xa5fc8
							// 0xa5fc8
							return result2;
						}
					} else {
						// 0xa5e84
						v24 = &v12;
						g37 = 23;
						function_5d078(v24);
						g37 = *(int32_t *)(g23 - 0x59ac);
						g38 = g30 + 316;
						sprintf();
						v25 = *(char *)g29;
						if (v25 != 2) {
							// 0xa5ebc
							if (v25 == 0) {
								// 0xa5ec4
								// branch -> 0xa5ee0
							} else {
								// 0xa5ed0
								if (v25 == 1) {
									// 0xa5ed8
									// branch -> 0xa5ee0
								}
							}
							// 0xa5ee0
							v26 = g31 + g36;
							v35 = (int32_t) * (char *)(v26 + 316);
							v36 = (int32_t) * (char *)(v26 + 318);
							v33 = *(char *)(v26 + 319);
							v34 = *(char *)(v26 + 320);
							v27 = (int32_t) * (char *)(v26 + 321);
							v28 = 0x10000 * (int32_t)v33 | 0x1000000 * v36 | 256 * (int32_t)v34 | v27;
							v12 = v28;
							v37 = ((int32_t) * (char *)(v26 + 317) | 0x1000000 * v35 / 0x10000) % 0x10000;
							if (function_5a318(23, v37, v28) == -1) {
								// 0xa5f60
								function_a5a58(g26, v24, 0, 0);
								// branch -> 0xa5fbc
							}
							// 0xa5fbc
							g37 = 0;
							result2 = SetPlayerHitPoints(g26);
							// branch -> 0xa5fc8
							// 0xa5fc8
							return result2;
						}
						// 0xa5eb0
						// branch -> 0xa5ee0
						// 0xa5ee0
						v26 = g31 + g36;
						v35 = (int32_t) * (char *)(v26 + 316);
						v36 = (int32_t) * (char *)(v26 + 318);
						v33 = *(char *)(v26 + 319);
						v34 = *(char *)(v26 + 320);
						v27 = (int32_t) * (char *)(v26 + 321);
						v28 = 0x10000 * (int32_t)v33 | 0x1000000 * v36 | 256 * (int32_t)v34 | v27;
						v12 = v28;
						v37 = ((int32_t) * (char *)(v26 + 317) | 0x1000000 * v35 / 0x10000) % 0x10000;
						if (function_5a318(23, v37, v28) == -1) {
							// 0xa5f60
							function_a5a58(g26, v24, 0, 0);
							// branch -> 0xa5fbc
						}
					}
					// 0xa5fbc
					g37 = 0;
					result2 = SetPlayerHitPoints(g26);
					// branch -> 0xa5fc8
					// 0xa5fc8
					return result2;
				}
			}
		}
		// 0xa5fbc
		g37 = 0;
		result2 = SetPlayerHitPoints(g26);
		// branch -> 0xa5fc8
		// 0xa5fc8
		return result2;
	}
	// 0xa5cb8
	if (v10 == 1) {
		// 0xa5cc4
		g34 = 682;
		g38 = *(int32_t *)(g30 + 60);
		PlaySfxLoc(682);
		// branch -> 0xa5cf0
	} else {
		// 0xa5cd8
		if (v10 == 2) {
			// 0xa5ce0
			g34 = 579;
			g38 = *(int32_t *)(g30 + 60);
			PlaySfxLoc(579);
			// branch -> 0xa5cf0
		}
	}
	// 0xa5cf0
	v13 = g30;
	v22 = (int32_t *)(v13 + 120);
	v14 = v13;
	if (*v22 != 0) {
		// 0xa5cfc
		*v22 = 0;
		*(int32_t *)(g30 + 532) = 0;
		function_a2b68(g26);
		v14 = g30;
		// branch -> 0xa5d10
	}
	// 0xa5d10
	if (__asm_rlwinm_(*(int32_t *)(v14 + 532), 0, 24, 24) == 0) {
		// 0xa5d1c
		LoadPlrGFX(g26, 128);
		// branch -> 0xa5d28
	}
	// 0xa5d28
	v15 = g30;
	v29 = *(int32_t *)(v15 + 112);
	v30 = *(int32_t *)(v15 + 1100);
	NewPlrAnim(g26, 8 * v29 + 1032 + v15, *(int32_t *)(v15 + 1096), 1, v30);
	*(int32_t *)g30 = 8;
	g25 = 1;
	*(char *)(g30 + 312) = 0;
	g37 = 0;
	*(char *)(g30 + 313) = (char)g25;
	SetPlayerHitPoints(g26);
	*(int32_t *)(g30 + 492) = g25;
	if (g26 != *(int32_t *)g35) {
		// 0xa5d80
		if (g27 == 0) {
			// 0xa5d88
			if (g28 == 0) {
				// 0xa5d90
				v11 = -1;
				*(int32_t *)(g30 + 1184) = -1;
				*(int32_t *)(g30 + 1552) = v11;
				*(int32_t *)(g30 + 1920) = v11;
				*(int32_t *)(g30 + 2288) = v11;
				*(int32_t *)(g30 + 2656) = v11;
				*(int32_t *)(g30 + 3024) = v11;
				*(int32_t *)(g30 + 3392) = v11;
				CalcPlrInv(g26, 0);
				// branch -> 0xa5dbc
			}
		}
	}
	// 0xa5dbc
	v31 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
	if (v31 == *(int32_t *)(g31 + g36 + 52)) {
		// 0xa5dd4
		function_a4250(g26, *(int32_t *)(g30 + 112));
		RemovePlrFromMap(g26);
		v16 = g30;
		v23 = *(int32_t *)(v16 + 60) + 112 * *(int32_t *)(v16 + 56);
		v32 = (char *)(*(int32_t *)*(int32_t *)(g23 - 0x779c) + v23);
		*v32 = (char)((int32_t)*v32 | 4);
		SetPlayerOld(g26);
		if (g26 == *(int32_t *)g35) {
			// 0xa5e20
			v17 = g23;
			*(int32_t *)*(int32_t *)(v17 - 0x76f0) = 1;
			*(int32_t *)*(int32_t *)(v17 - 0x6f8c) = 30;
			if (*(int32_t *)*(int32_t *)(g23 - 0x7744) >= 12) {
				// 0xa5e48
				function_a5a58(g26, g30 + 0x53d4, 0, 0);
				g34 = 1;
				function_324ec(1);
				// branch -> 0xa5e64
			}
			// 0xa5e64
			if (g28 == 0) {
				// 0xa5e6c
				function_a5fdc(g26);
				v18 = g27;
				if (v18 != -1) {
					// 0xa5e7c
					if (v18 == 0) {
						// 0xa5f78
						v19 = g30;
						g25 = v19 + 1176;
						int32_t v40 = 6;   // 0xa5f8c
						int32_t v41 = v19; // 0xa5f80
						// branch -> 0xa5f80
						while (true) {
							// 0xa5f80
							v21 = __asm_rlwinm(*(int32_t *)(v41 + 112) + v40, 2, 27, 29);
							v38 = *(int32_t *)(g33 + v21);
							v39 = *(int32_t *)(g32 + v21);
							function_a5a58(v38, v39, v38, v39);
							v20 = g27;
							g25 += 368;
							if (v20 == 0) {
								// 0xa5fb0
								CalcPlrInv(g26, 0);
								// branch -> 0xa5fbc
								// 0xa5fbc
								g37 = 0;
								result2 = SetPlayerHitPoints(g26);
								// branch -> 0xa5fc8
								// 0xa5fc8
								return result2;
							}
						lab_0xa5f80:
							// 0xa5f80
							v40 = v20 - 1;
							v41 = g30;
							// branch -> 0xa5f80
						}
					} else {
						// 0xa5e84
						v24 = &v12;
						g37 = 23;
						function_5d078(v24);
						g37 = *(int32_t *)(g23 - 0x59ac);
						g38 = g30 + 316;
						sprintf();
						v25 = *(char *)g29;
						if (v25 != 2) {
							// 0xa5ebc
							if (v25 == 0) {
								// 0xa5ec4
								// branch -> 0xa5ee0
							} else {
								// 0xa5ed0
								if (v25 == 1) {
									// 0xa5ed8
									// branch -> 0xa5ee0
								}
							}
							// 0xa5ee0
							v26 = g31 + g36;
							v35 = (int32_t) * (char *)(v26 + 316);
							v36 = (int32_t) * (char *)(v26 + 318);
							v33 = *(char *)(v26 + 319);
							v34 = *(char *)(v26 + 320);
							v27 = (int32_t) * (char *)(v26 + 321);
							v28 = 0x10000 * (int32_t)v33 | 0x1000000 * v36 | 256 * (int32_t)v34 | v27;
							v12 = v28;
							v37 = ((int32_t) * (char *)(v26 + 317) | 0x1000000 * v35 / 0x10000) % 0x10000;
							if (function_5a318(23, v37, v28) == -1) {
								// 0xa5f60
								function_a5a58(g26, v24, 0, 0);
								// branch -> 0xa5fbc
							}
							// 0xa5fbc
							g37 = 0;
							result2 = SetPlayerHitPoints(g26);
							// branch -> 0xa5fc8
							// 0xa5fc8
							return result2;
						}
						// 0xa5eb0
						// branch -> 0xa5ee0
						// 0xa5ee0
						v26 = g31 + g36;
						v35 = (int32_t) * (char *)(v26 + 316);
						v36 = (int32_t) * (char *)(v26 + 318);
						v33 = *(char *)(v26 + 319);
						v34 = *(char *)(v26 + 320);
						v27 = (int32_t) * (char *)(v26 + 321);
						v28 = 0x10000 * (int32_t)v33 | 0x1000000 * v36 | 256 * (int32_t)v34 | v27;
						v12 = v28;
						v37 = ((int32_t) * (char *)(v26 + 317) | 0x1000000 * v35 / 0x10000) % 0x10000;
						if (function_5a318(23, v37, v28) == -1) {
							// 0xa5f60
							function_a5a58(g26, v24, 0, 0);
							// branch -> 0xa5fbc
						}
					}
					// 0xa5fbc
					g37 = 0;
					result2 = SetPlayerHitPoints(g26);
					// branch -> 0xa5fc8
					// 0xa5fc8
					return result2;
				}
			}
		}
	}
	// 0xa5fbc
	g37 = 0;
	result2 = SetPlayerHitPoints(g26);
	// branch -> 0xa5fc8
	// 0xa5fc8
	return result2;
}

// Address range: 0xa5fdc - 0xa640c
int32_t function_a5fdc(int32_t a1)
{
	int32_t v1 = g10; // 0xa5fe0
	g31 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa5fe8
	g32 = v2;
	int32_t v3 = a1; // 0xa6008
	if (a1 >= 4) {
		// 0xa5ffc
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x59b0));
		v2 = g32;
		v3 = g31;
		// branch -> 0xa6008
	}
	int32_t v4 = 0x55ec * v3 + v2; // 0xa600c
	g36 = v4;
	int32_t v5 = v4 + 456;        // 0xa6014
	uint32_t v6 = *(int32_t *)v5; // 0xa6014
	g33 = v5;
	g35 = v4 + 0x53d4;
	g29 = 0;
	int32_t v7 = v6 / 2 | v6 & -0x80000000; // 0xa6020
	g32 = v7;
	int32_t v8 = 0; // 0xa60ac
	// branch -> 0xa6104
	while (true) {
		int32_t v9 = v7; // 0xa610c
		if (v7 > 0) {
			int32_t v10 = g36 + 368 * v8; // 0xa602c
			int32_t v11;                  // 0xa60f8
			if (*(int32_t *)(v10 + 0x485c) == 11) {
				int32_t v12 = v10 + 0x4918; // 0xa603c
				g30 = v12;
				int32_t *v13 = (int32_t *)v12; // 0xa6040
				int32_t v14 = *v13;            // 0xa6040
				if (v14 != 0x1388) {
					// 0xa604c
					int32_t v15; // 0xa60f8
					int32_t v16;
					if (v14 > v7) {
						// 0xa6054
						*v13 = v14 - v7;
						function_bb1fc(g31, g29);
						g37 = 0;
						function_5d078(g35);
						function_5d1cc(g31, (int32_t *)g35);
						function_5d29c(g35);
						*(int32_t *)(g36 + 0x5498) = g32;
						function_a5a58(g31, g35, 0, 0);
						g32 = 0;
						v16 = 0;
						v15 = g29;
						// branch -> 0xa60f8
					} else {
						// 0xa60a8
						g37 = v8;
						function_595cc(g31);
						g37 = 0;
						function_5d078(g35);
						function_5d1cc(g31, (int32_t *)g35);
						function_5d29c(g35);
						*(int32_t *)(g36 + 0x5498) = *(int32_t *)g30;
						function_a5a58(g31, g35, 0, 0);
						v16 = g32;
						v15 = -1;
						// branch -> 0xa60f8
					}
					// 0xa60f8
					v11 = v15 + 1;
					g29 = v11;
					if (v11 > 7) {
						// break -> 0xa610c
						break;
					}
					v8 = v11;
					v7 = v16;
					// continue -> 0xa6104
					continue;
				}
			}
			// 0xa60f8
			v11 = v8 + 1;
			g29 = v11;
			if (v11 > 7) {
				// break -> 0xa610c
				break;
			}
			v8 = v11;
			// continue -> 0xa6104
			continue;
		}
		// 0xa610c
		int32_t v17;    // 0xa6218
		int32_t v18;    // 0xa6298
		int32_t v19;    // 0xa62e810
		int32_t v20;    // 0xa62f4
		int32_t v21;    // 0xa62fc
		int32_t v22;    // 0xa6330126
		int32_t v23;    // 0xa6388125
		int32_t v24;    // 0xa63d83
		int32_t result; // 0xa63f0
		int32_t v25;    // 0xa6310
		if (v9 < 1) {
			// 0xa61f8
			*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
			if (v9 < 1) {
				// 0xa63ec
				result = function_5b990(g31);
				*(int32_t *)g33 = result;
				g10 = v1;
				return result;
			}
			// 0xa62e8
			g29 = 0;
			v19 = g36;
			v24 = v19;
			if (*(int32_t *)(v19 + 0x4828) > 0) {
				v17 = v19;
				v18 = 0;
				while (true) {
					// 0xa62f4
					v20 = g32;
					if (v20 > 0) {
						goto lab_0xa6214;
					}
					v24 = v17;
					// 0xa62fc
					v21 = g32;
					if (v21 < 1) {
						// 0xa63ec
						result = function_5b990(g31);
						*(int32_t *)g33 = result;
						g10 = v1;
						return result;
					}
					// 0xa63d8
					g29 = 0;
					if (*(int32_t *)(v24 + 0x4828) > 0) {
						// 0xa630c
						v22 = v21;
						v23 = 0;
						// branch -> 0xa630c
						while (true) {
							// 0xa630c
							v25 = 368 * v23 + v24;
							if (*(int32_t *)(v25 + 3760) == 11) {
								goto lab_0xa6320_3;
							}
							goto lab_0xa63d4_4;
						}
					}
					// 0xa63ec
					result = function_5b990(g31);
					*(int32_t *)g33 = result;
					g10 = v1;
					return result;
				}
			}
			// 0xa62fc
			v21 = g32;
			if (v21 < 1) {
				// 0xa63ec
				result = function_5b990(g31);
				*(int32_t *)g33 = result;
				g10 = v1;
				return result;
			}
			// 0xa63d8
			g29 = 0;
			if (*(int32_t *)(v24 + 0x4828) > 0) {
				// 0xa630c
				v22 = v21;
				v23 = 0;
				// branch -> 0xa630c
				while (true) {
					// 0xa630c
					v25 = 368 * v23 + v24;
					if (*(int32_t *)(v25 + 3760) == 11) {
						goto lab_0xa6320_3;
					}
					goto lab_0xa63d4_4;
				}
			}
			// 0xa63ec
			result = function_5b990(g31);
			*(int32_t *)g33 = result;
			g10 = v1;
			return result;
		}
		// 0xa61e8
		g29 = 0;
		int32_t v26 = 0;  // 0xa6198
		int32_t v27 = v9; // 0xa6140
		// branch -> 0xa61f0
		int32_t v28; // 0xa6200
		while (true) {
			// 0xa61f0
			if (v27 > 0) {
				int32_t v29 = g36 + 368 * v26; // 0xa6120
				int32_t v30 = v27;
				int32_t v31 = v26; // 0xa61e4
				int32_t v32;       // 0xa61e4
				if (*(int32_t *)(v29 + 0x485c) == 11) {
					int32_t *v33 = (int32_t *)(v29 + 0x4918); // 0xa6134
					int32_t v34 = *v33;                       // 0xa6134
					if (v34 > v27) {
						// 0xa6140
						*v33 = v34 - v27;
						function_bb1fc(g31, g29);
						g37 = 0;
						function_5d078(g35);
						function_5d1cc(g31, (int32_t *)g35);
						function_5d29c(g35);
						*(int32_t *)(g36 + 0x5498) = g32;
						function_a5a58(g31, g35, 0, 0);
						g32 = 0;
						v30 = 0;
						v31 = g29;
						// branch -> 0xa61e4
					} else {
						// 0xa6194
						g37 = v26;
						function_595cc(g31);
						g37 = 0;
						function_5d078(g35);
						function_5d1cc(g31, (int32_t *)g35);
						function_5d29c(g35);
						*(int32_t *)(g36 + 0x5498) = *(int32_t *)g30;
						function_a5a58(g31, g35, 0, 0);
						v30 = g32;
						v31 = -1;
						// branch -> 0xa61e4
					}
					// 0xa61e4
					v32 = v31 + 1;
					g29 = v32;
					if (v32 > 7) {
						v28 = v30;
						// break -> 0xa61f8
						break;
					}
					v26 = v32;
					v27 = v30;
					// continue -> 0xa61f0
					continue;
				}
				// 0xa61e4
				v32 = v31 + 1;
				g29 = v32;
				if (v32 > 7) {
					v28 = v30;
					// break -> 0xa61f8
					break;
				}
				v26 = v32;
				v27 = v30;
				// continue -> 0xa61f0
				continue;
			} else {
				v28 = v27;
			}
		}
		// 0xa61f8
		*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
		if (v28 < 1) {
			// 0xa63ec
			result = function_5b990(g31);
			*(int32_t *)g33 = result;
			g10 = v1;
			return result;
		}
		// 0xa62e8
		g29 = 0;
		v19 = g36;
		v24 = v19;
		if (*(int32_t *)(v19 + 0x4828) <= 0) {
			// 0xa62fc
			v21 = g32;
			if (v21 < 1) {
				// 0xa63ec
				result = function_5b990(g31);
				*(int32_t *)g33 = result;
				g10 = v1;
				return result;
			}
			// 0xa63d8
			g29 = 0;
			if (*(int32_t *)(v24 + 0x4828) > 0) {
				// 0xa630c
				v22 = v21;
				v23 = 0;
				// branch -> 0xa630c
				while (true) {
					// 0xa630c
					v25 = 368 * v23 + v24;
					if (*(int32_t *)(v25 + 3760) == 11) {
						goto lab_0xa6320_3;
					}
					goto lab_0xa63d4_4;
				}
			}
			// 0xa63ec
			result = function_5b990(g31);
			*(int32_t *)g33 = result;
			g10 = v1;
			return result;
		}
		v17 = v19;
		v18 = 0;
		while (true) {
			// 0xa62f4
			v20 = g32;
			if (v20 > 0) {
			lab_0xa6214:;
				int32_t v35 = 368 * v18 + v17; // 0xa6218
				int32_t v36;                   // 0xa62e8
				int32_t v37;                   // 0xa62e4
				if (*(int32_t *)(v35 + 3760) == 11) {
					int32_t v38 = v35 + 3948; // 0xa6228
					g30 = v38;
					int32_t *v39 = (int32_t *)v38; // 0xa622c
					int32_t v40 = *v39;            // 0xa622c
					if (v40 != 0x1388) {
						// 0xa6238
						int32_t v41; // 0xa62e4
						if (v40 > v20) {
							// 0xa6240
							*v39 = v40 - v20;
							function_bb1b0(g31, g29);
							g37 = 0;
							function_5d078(g35);
							function_5d1cc(g31, (int32_t *)g35);
							function_5d29c(g35);
							*(int32_t *)(g36 + 0x5498) = g32;
							function_a5a58(g31, g35, 0, 0);
							g32 = 0;
							v41 = g29;
							// branch -> 0xa62e4
						} else {
							// 0xa6294
							g37 = v18;
							function_591d8(g31);
							g37 = 0;
							function_5d078(g35);
							function_5d1cc(g31, (int32_t *)g35);
							function_5d29c(g35);
							*(int32_t *)(g36 + 0x5498) = *(int32_t *)g30;
							function_a5a58(g31, g35, 0, 0);
							v41 = -1;
							// branch -> 0xa62e4
						}
						// 0xa62e4
						v37 = v41 + 1;
						g29 = v37;
						v36 = g36;
						if (v37 >= *(int32_t *)(v36 + 0x4828)) {
							v24 = v36;
							// break -> 0xa62fc
							break;
						}
						v17 = v36;
						v18 = v37;
						// continue -> 0xa62f4
						continue;
					}
				}
				// 0xa62e4
				v37 = v18 + 1;
				g29 = v37;
				v36 = g36;
				if (v37 >= *(int32_t *)(v36 + 0x4828)) {
					v24 = v36;
					// break -> 0xa62fc
					break;
				}
				v17 = v36;
				v18 = v37;
				// continue -> 0xa62f4
				continue;
			} else {
				v24 = v17;
			}
		}
		// 0xa62fc
		v21 = g32;
		if (v21 < 1) {
			// 0xa63ec
			result = function_5b990(g31);
			*(int32_t *)g33 = result;
			g10 = v1;
			return result;
		}
		// 0xa63d8
		g29 = 0;
		if (*(int32_t *)(v24 + 0x4828) <= 0) {
			// 0xa63ec
			result = function_5b990(g31);
			*(int32_t *)g33 = result;
			g10 = v1;
			return result;
		}
		// 0xa630c
		v22 = v21;
		v23 = 0;
		int32_t v42 = v24; // 0xa6310124
		// branch -> 0xa630c
		while (true) {
			// 0xa630c
			v25 = 368 * v23 + v42;
			int32_t v43; // 0xa63d8
			int32_t v44; // 0xa63d4
			if (*(int32_t *)(v25 + 3760) != 11) {
			lab_0xa63d4_4:
				// 0xa63d4
				v44 = v23 + 1;
				g29 = v44;
				v43 = g36;
				if (v44 < *(int32_t *)(v43 + 0x4828)) {
					goto lab_0xa63d4;
				}
				// 0xa63ec
				result = function_5b990(g31);
				*(int32_t *)g33 = result;
				g10 = v1;
				return result;
			}
		lab_0xa6320_3:;
			int32_t *v45 = (int32_t *)(v25 + 3948); // 0xa6324
			int32_t v46 = *v45;                     // 0xa6324
			int32_t v47;                            // 0xa63d4
			if (v46 > v22) {
				// 0xa6330
				*v45 = v46 - v22;
				function_bb1b0(g31, g29);
				g37 = 0;
				function_5d078(g35);
				function_5d1cc(g31, (int32_t *)g35);
				function_5d29c(g35);
				*(int32_t *)(g36 + 0x5498) = g32;
				function_a5a58(g31, g35, 0, 0);
				g32 = 0;
				v47 = g29;
				// branch -> 0xa63d4
			} else {
				// 0xa6384
				g37 = v23;
				function_591d8(g31);
				g37 = 0;
				function_5d078(g35);
				function_5d1cc(g31, (int32_t *)g35);
				function_5d29c(g35);
				*(int32_t *)(g36 + 0x5498) = *(int32_t *)g30;
				function_a5a58(g31, g35, 0, 0);
				v47 = -1;
				// branch -> 0xa63d4
			}
			// 0xa63d4
			v44 = v47 + 1;
			g29 = v44;
			v43 = g36;
			if (v44 < *(int32_t *)(v43 + 0x4828)) {
			lab_0xa63d4:;
				int32_t v48 = g32;
				if (v48 <= 0) {
					// break -> 0xa63ec
					break;
				}
				v22 = v48;
				v23 = v44;
				v42 = v43;
				// continue -> 0xa630c
				continue;
			}
			// 0xa63ec
			result = function_5b990(g31);
			*(int32_t *)g33 = result;
			g10 = v1;
			return result;
		}
		// 0xa63ec
		result = function_5b990(g31);
		*(int32_t *)g33 = result;
		g10 = v1;
		return result;
	}
}

// Address range: 0xa640c - 0xa64f4
int32_t SyncPlrKill(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0xa640c
	int32_t v2 = g10; // 0xa6410
	g36 = a2;
	int32_t v3 = g35; // 0xa641c
	g35 = a1;
	if (*(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * a1 + 404) == 0) {
		// 0xa6444
		if (*(char *)*(int32_t *)(g23 - 0x77e4) == 0) {
			// 0xa6454
			g37 = 64;
			int32_t result = SetPlayerHitPoints(a1); // 0xa645c
			// branch -> 0xa64dc
			// 0xa64dc
			g36 = v1;
			g10 = v2;
			g35 = v3;
			return result;
		}
	}
	uint32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x7668); // 0xa646c
	if (v4 >= 1) {
		int32_t v5 = *(int32_t *)(g23 - 0x7660); // 0xa64bc
		while (true) {
			int32_t result2 = 180 * *(int32_t *)v5 + *(int32_t *)(g23 - 0x7664); // 0xa6484
			if (*(int32_t *)result2 == 13) {
				// 0xa6490
				if (a1 == *(int32_t *)(result2 + 120)) {
					// 0xa64a0
					if (*(int32_t *)(result2 + 52) == 0) {
						// 0xa64ac
						if (a2 != -1) {
							// 0xa64b4
							*(int32_t *)(result2 + 176) = a2;
							// branch -> 0xa64dc
						}
						// 0xa64dc
						g36 = v1;
						g10 = v2;
						g35 = v3;
						return result2;
					}
				}
			}
			int32_t v6 = v4 - 1; // 0xa64c0
			if (v6 == 0) {
				// break -> 0xa64c4
				break;
			}
			v4 = v6;
			v5 += 4;
			// continue -> 0xa647c
		}
		// 0xa64c4
		// branch -> 0xa64c4
	}
	// 0xa64c4
	g37 = 0;
	SetPlayerHitPoints(a1);
	g34 = g35;
	g37 = g36;
	int32_t result3 = function_a5bf0(); // 0xa64d8
	// branch -> 0xa64dc
	// 0xa64dc
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result3;
}

// Address range: 0xa64f4 - 0xa6514
int32_t function_a64f4(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0xa64f4
	return function_a5bf0();
}

// Address range: 0xa6514 - 0xa66bc
int32_t RemovePlrMissiles(void)
{
	int32_t v1 = g10; // 0xa6518
	int32_t v2 = g34; // 0xa6520
	g29 = v2;
	g32 = *(int32_t *)(g23 - 0x7664);
	int32_t v3 = *(int32_t *)(g23 - 0x7668); // 0xa6528
	g33 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7754); // 0xa652c
	g35 = v4;
	int32_t result2 = v2; // 0xa66b814
	int32_t v5;           // r3
	int32_t v6;           // 0xa6600
	int32_t v7;           // 0xa6638
	int32_t v8;           // 0xa6654
	int32_t v9;           // 0xa65fc
	int32_t v10;          // 0xa65f8
	int32_t v11;          // 0xa6600
	int32_t v12;          // 0xa65ec
	if (*(char *)*(int32_t *)(g23 - 0x77e4) != 0) {
		int32_t v13 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0xa6548
		if (v2 == v13) {
			int32_t v14 = 232 * v2; // 0xa6554
			int32_t v15;            // 0xa6584
			int32_t v16;            // 0xa669c1
			int32_t v17;            // 0xa6584
			int32_t v18;            // 0xa6588
			int32_t v19;            // 0xa65b8
			int32_t v20;            // 0xa658c
			unsigned char v21;      // 0xa659c
			int32_t v22;            // 0xa65b0
			int32_t v23;            // 0xa6590
			int32_t v24;            // 0xa6598
			int32_t v25;            // 0xa65c0
			int32_t v26;            // 0xa65c4
			if (*(int32_t *)(v4 + 32 + v14) == 1) {
				// 0xa6568
				if (*(int32_t *)(v4 + v14 + 36) != 0) {
					// 0xa6578
					M_StartKill(v2, v2);
					v15 = g35;
					v17 = v15 + 36;
					g30 = v17;
					v18 = 232 * *(int32_t *)g36;
					v20 = v15 + v18;
					v23 = *(int32_t *)(g31 + v18);
					v24 = *(int32_t *)(v17 + v18);
					v21 = *(char *)(*(int32_t *)(v20 + 224) + 509);
					AddDead(v23, v24, (int32_t)v21, *(int32_t *)(v20 + 72));
					v22 = *(int32_t *)(g23 - 0x767c);
					v19 = 232 * *(int32_t *)g36;
					v25 = *(int32_t *)(g31 + v19);
					v26 = *(int32_t *)(g30 + v19);
					*(int16_t *)(2 * v26 + 224 * v25 + *(int32_t *)v22) = 0;
					*(int32_t *)(g35 + 232 * *(int32_t *)g36 + 112) = 1;
					result2 = function_84d60();
					v16 = g33;
					// branch -> 0xa65ec
				} else {
					result2 = v2;
					v16 = v3;
				}
			} else {
				// 0xa6578
				M_StartKill(v2, v2);
				v15 = g35;
				v17 = v15 + 36;
				g30 = v17;
				v18 = 232 * *(int32_t *)g36;
				v20 = v15 + v18;
				v23 = *(int32_t *)(g31 + v18);
				v24 = *(int32_t *)(v17 + v18);
				v21 = *(char *)(*(int32_t *)(v20 + 224) + 509);
				AddDead(v23, v24, (int32_t)v21, *(int32_t *)(v20 + 72));
				v22 = *(int32_t *)(g23 - 0x767c);
				v19 = 232 * *(int32_t *)g36;
				v25 = *(int32_t *)(g31 + v19);
				v26 = *(int32_t *)(g30 + v19);
				*(int16_t *)(2 * v26 + 224 * v25 + *(int32_t *)v22) = 0;
				*(int32_t *)(g35 + 232 * *(int32_t *)g36 + 112) = 1;
				result2 = function_84d60();
				v16 = g33;
				// branch -> 0xa65ec
			}
			// 0xa65ec
			v12 = *(int32_t *)(g23 - 0x7660);
			g36 = v12;
			g31 = 0;
			int32_t result = result2; // 0xa66b8
			if (*(int32_t *)v16 > 0) {
				int32_t v27 = v12; // 0xa65f8
				while (true) {
					// 0xa65f8
					v10 = *(int32_t *)v27;
					v9 = 180 * v10;
					v5 = v9;
					v6 = g32;
					v11 = v6 + v9;
					g30 = v10;
					v7 = v6;
					v8 = v10;
					if (*(int32_t *)v11 == 30) {
					lab_0xa6610:
						// 0xa6610
						v5 = v11;
						if (g29 == *(int32_t *)(v11 + 120)) {
							int32_t v28 = 232 * *(int32_t *)(v11 + 152); // 0xa6628
							v5 = v28;
							*(int32_t *)(g35 + (v28 | 4)) = *(int32_t *)(v11 + 148);
							v7 = g32;
							v8 = g30;
							// branch -> 0xa6634
						} else {
							v7 = v6;
							v8 = v10;
						}
					}
				lab_0xa6634:;
					int32_t v29 = 180 * v8 + v7; // 0xa6638
					g28 = v29;
					int32_t v30 = v29; // 0xa6674
					if (*(int32_t *)v29 == 13) {
						// 0xa6648
						if (g29 == *(int32_t *)(v29 + 120)) {
							// 0xa6654
							ClearMissileSpot(v8);
							g37 = g31;
							v5 = DeleteMissile(g30);
							v30 = g28;
							// branch -> 0xa6668
						} else {
							v30 = v29;
						}
					}
					// 0xa6668
					if (*(int32_t *)v30 == 34) {
						// 0xa6674
						if (g29 == *(int32_t *)(v30 + 120)) {
							// 0xa6680
							ClearMissileSpot(g30);
							g37 = g31;
							v5 = DeleteMissile(g30);
							// branch -> 0xa6694
						}
					}
					int32_t v31 = g36 + 4; // 0xa6694
					g36 = v31;
					int32_t v32 = g31 + 1; // 0xa6698
					g31 = v32;
					if (v32 >= *(int32_t *)g33) {
						// break -> 0xa669c
						break;
					}
					v27 = v31;
					// continue -> 0xa65f8
				}
				// 0xa669c
				result = v5;
				// branch -> 0xa66a8
			}
			// 0xa66a8
			g10 = v1;
			return result;
		}
		result2 = v13;
	}
	// 0xa65ec
	v12 = *(int32_t *)(g23 - 0x7660);
	g36 = v12;
	g31 = 0;
	if (*(int32_t *)v3 > 0) {
		while (true) {
			// 0xa65f8
			v10 = *(int32_t *)v12;
			v9 = 180 * v10;
			v5 = v9;
			v6 = g32;
			v11 = v6 + v9;
			g30 = v10;
			if (*(int32_t *)v11 == 30) {
				goto lab_0xa6610;
			}
			v7 = v6;
			v8 = v10;
			goto lab_0xa6634;
		}
	}
	// 0xa66a8
	g10 = v1;
	return result2;
}

// Address range: 0xa66bc - 0xa67c8
int32_t InitLevelChange(void)
{
	int32_t v1 = g36; // 0xa66bc
	int32_t v2 = g10; // 0xa66c0
	int32_t v3 = g35; // 0xa66c8
	int32_t v4 = g33; // 0xa66d0
	int32_t v5 = g32; // 0xa66d8
	RemovePlrMissiles();
	int32_t v6 = *(int32_t *)g36; // 0xa66ec
	int32_t v7 = g35;             // 0xa66f0
	int32_t result;               // r3
	int32_t v8;                   // 0xa6728
	int32_t v9;                   // 0xa6724
	int32_t v10;                  // 0xa673c
	int32_t v11;                  // 0xa6740
	int32_t v12;                  // 0xa6760
	int32_t v13;                  // 0xa6780
	int32_t v14;                  // 0xa6744
	int32_t v15;                  // 0xa6748
	if (v7 != v6) {
		// 0xa6714
		RemovePlrFromMap(v7);
		SetPlayerOld(g35);
		v9 = *(int32_t *)g36;
		v8 = g35;
		if (v8 == v9) {
			// 0xa6730
			v10 = *(int32_t *)*(int32_t *)(g23 - 0x7680);
			v11 = g33 + 0x55ec * v9;
			v14 = *(int32_t *)(v11 + 56);
			v15 = *(int32_t *)(v11 + 60);
			*(char *)(v15 + 112 * v14 + v10) = (char)(v9 + 1);
			// branch -> 0xa6774
		} else {
			// 0xa675c
			v12 = g33 + 0x55ec * v8;
			*(char *)(*(int32_t *)(v12 + 52) + v12 + 496) = 1;
			// branch -> 0xa6774
		}
		// 0xa6774
		ClrPlrPath(g35);
		v13 = g33 + 0x55ec * g35;
		result = v13;
		*(int32_t *)(v13 + 32) = -1;
		*(char *)(result + 315) = 1;
		if (g35 == *(int32_t *)g36) {
			// 0xa67a0
			*(char *)(result + 0x5592) = 10;
			// branch -> 0xa67a8
		}
		// 0xa67a8
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		g32 = v5;
		return result;
	}
	char *v16 = (char *)g32; // 0xa66f8
	int32_t v17;             // 0xa6714
	if (*v16 != 0) {
		// 0xa6704
		*v16 = 0;
		g34 = sfx_stop();
		function_6c704();
		v17 = g35;
		// branch -> 0xa6714
	} else {
		v17 = v6;
	}
	// 0xa6714
	RemovePlrFromMap(v17);
	SetPlayerOld(g35);
	v9 = *(int32_t *)g36;
	v8 = g35;
	if (v8 == v9) {
		// 0xa6730
		v10 = *(int32_t *)*(int32_t *)(g23 - 0x7680);
		v11 = g33 + 0x55ec * v9;
		v14 = *(int32_t *)(v11 + 56);
		v15 = *(int32_t *)(v11 + 60);
		*(char *)(v15 + 112 * v14 + v10) = (char)(v9 + 1);
		// branch -> 0xa6774
	} else {
		// 0xa675c
		v12 = g33 + 0x55ec * v8;
		*(char *)(*(int32_t *)(v12 + 52) + v12 + 496) = 1;
		// branch -> 0xa6774
	}
	// 0xa6774
	ClrPlrPath(g35);
	v13 = g33 + 0x55ec * g35;
	result = v13;
	*(int32_t *)(v13 + 32) = -1;
	*(char *)(result + 315) = 1;
	if (g35 == *(int32_t *)g36) {
		// 0xa67a0
		*(char *)(result + 0x5592) = 10;
		// branch -> 0xa67a8
	}
	// 0xa67a8
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	g32 = v5;
	return result;
}

// Address range: 0xa67c8 - 0xa6924
int32_t StartNewLvl(int32_t a1, int32_t a2, int32_t a3)
{
	// 0xa67c8
	g34 = a1;
	int32_t v1 = g10; // 0xa67cc
	g30 = *(int32_t *)(g23 - 0x59b4);
	g35 = *(int32_t *)(g23 - 0x77ac);
	g36 = *(int32_t *)(g23 - 0x77a8);
	g32 = a2;
	g33 = a3;
	InitLevelChange();
	int32_t v2 = g31; // 0xa67f4
	if (v2 >= 4) {
		// 0xa67fc
		g37 = v2;
		app_fatal(g30);
		// branch -> 0xa6808
	}
	uint32_t v3 = *(int32_t *)g35; // 0xa6808
	g37 = v3;
	if (v3 >= 4) {
		// 0xa6814
		app_fatal(g30);
		// branch -> 0xa681c
	}
	uint32_t v4 = g32 - 1026; // 0xa681c
	if (v4 <= 7) {
		// 0xa6828
		return *(int32_t *)(*(int32_t *)(g23 - 0x59bc) + 4 * v4);
	}
	int32_t result = app_fatal(*(int32_t *)(g23 - 0x59b8)); // 0xa68a8
	int32_t v5 = *(int32_t *)g35;                           // 0xa68ac
	if (g31 != v5) {
		// 0xa6910
		g10 = v1;
		return result;
	}
	int32_t v6 = g36 + 0x55ec * v5; // 0xa68c4
	*(int32_t *)v6 = 10;
	*(char *)(v6 + 313) = 1;
	int32_t v7 = *(int32_t *)*(int32_t *)(g23 - 0x780c); // 0xa68e0
	g34 = v7;
	PostMessage(v7);
	int32_t v8;
	int32_t v9 = *(int32_t *)(v8 - 0x77f0); // 0xa68ec
	int32_t result2;                        // 0xa6920
	if ((*(char *)v9 || 1) != 1) {
		// 0xa68fc
		result2 = function_8b434(1, 30, g32 % 0x10000, g33 % 0x10000);
		// branch -> 0xa6910
	} else {
		result2 = v9;
	}
	// 0xa6910
	g10 = v1;
	return result2;
}

// Address range: 0xa6924 - 0xa69f0
int32_t RestartTownLvl(int32_t a1)
{
	// 0xa6924
	g34 = a1;
	g33 = *(int32_t *)(g23 - 0x77a8);
	g30 = g34;
	InitLevelChange();
	int32_t v1 = g30; // 0xa6940
	int32_t v2 = v1;  // 0xa6954
	if (v1 >= 4) {
		// 0xa6948
		g37 = v1;
		app_fatal(*(int32_t *)(g23 - 0x59c0));
		v2 = g30;
		// branch -> 0xa6954
	}
	int32_t v3 = 0x55ec * v2; // 0xa6954
	g32 = v3;
	int32_t v4 = g33 + v3; // 0xa6958
	g36 = v4;
	g35 = 0;
	*(int32_t *)(v4 + 52) = 0;
	g37 = 64;
	*(char *)(g36 + 313) = (char)g35;
	SetPlayerHitPoints(g30);
	*(int32_t *)(g36 + 424) = g35;
	int32_t v5 = g36;                    // 0xa6984
	int32_t v6 = *(int32_t *)(v5 + 428); // 0xa6988
	int32_t v7 = *(int32_t *)(v5 + 424); // 0xa698c
	*(int32_t *)(v5 + 416) = v7 + *(int32_t *)(v5 + 420) - v6;
	CalcPlrInv(g30, 0);
	int32_t v8 = *(int32_t *)(g23 - 0x77ac); // 0xa69a0
	int32_t result = v8;                     // 0xa69ec
	if (g30 == *(int32_t *)v8) {
		// 0xa69b0
		*(int32_t *)(g32 + g33) = 10;
		*(char *)g31 = 1;
		int32_t v9 = *(int32_t *)*(int32_t *)(g23 - 0x780c); // 0xa69d0
		g34 = v9;
		result = PostMessage(v9);
		// branch -> 0xa69dc
	}
	// 0xa69dc
	return result;
}

// Address range: 0xa69f0 - 0xa6ac8
int32_t StartWarpLvl(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0xa69f0
	g34 = a1;
	int32_t v1 = g36; // 0xa69f0
	int32_t v2 = g10; // 0xa69f4
	g36 = *(int32_t *)(g23 - 0x77a8);
	g35 = a2;
	int32_t v3 = g33; // 0xa6a04
	g33 = g34;
	InitLevelChange();
	int32_t result; // 0xa6ac4
	int32_t v4;     // 0xa6a84
	int32_t v5;     // 0xa6aa0
	int32_t v6;     // 0xa6a60
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// 0xa6a60
		v6 = *(int32_t *)(g23 - 0x77ac);
		result = v6;
		if (g33 == *(int32_t *)v6) {
			// 0xa6a70
			function_ac010(g35);
			v4 = g36 + 0x55ec * g33;
			*(int32_t *)v4 = 10;
			*(char *)(v4 + 313) = 1;
			v5 = *(int32_t *)*(int32_t *)(g23 - 0x780c);
			g34 = v5;
			result = PostMessage(v5);
			// branch -> 0xa6aac
		}
		// 0xa6aac
		g36 = v1;
		g10 = v2;
		g33 = v3;
		return result;
	}
	int32_t *v7 = (int32_t *)(g36 + 0x55ec * g33 + 52); // 0xa6a30
	if (*v7 == 0) {
		// 0xa6a4c
		*v7 = *(int32_t *)(*(int32_t *)(g23 - 0x7148) + 24 * g35 + 12);
		// branch -> 0xa6a60
	} else {
		// 0xa6a40
		*v7 = 0;
		// branch -> 0xa6a60
	}
	// 0xa6a60
	v6 = *(int32_t *)(g23 - 0x77ac);
	result = v6;
	if (g33 == *(int32_t *)v6) {
		// 0xa6a70
		function_ac010(g35);
		v4 = g36 + 0x55ec * g33;
		*(int32_t *)v4 = 10;
		*(char *)(v4 + 313) = 1;
		v5 = *(int32_t *)*(int32_t *)(g23 - 0x780c);
		g34 = v5;
		result = PostMessage(v5);
		// branch -> 0xa6aac
	}
	// 0xa6aac
	g36 = v1;
	g10 = v2;
	g33 = v3;
	return result;
}

// Address range: 0xa6ac8 - 0xa6ad4
int32_t function_a6ac8(int32_t a1)
{
	// 0xa6ac8
	return 0;
}

// Address range: 0xa6ad4 - 0xa6ce4
int32_t function_a6ad4(int32_t a1)
{
	g27 = a1;
	g31 = *(int32_t *)(g23 - 0x7680);
	g32 = *(int32_t *)(g23 - 0x77b8);
	g33 = *(int32_t *)(g23 - 0x7794);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa6af0
	g35 = v1;
	int32_t v2 = a1; // 0xa6b0c
	if (a1 >= 4) {
		// 0xa6b00
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x59c4));
		v1 = g35;
		v2 = g27;
		// branch -> 0xa6b0c
	}
	int32_t v3 = 0x55ec * v2; // 0xa6b0c
	g30 = v3;
	int32_t v4 = v3 + v1;                // 0xa6b10
	int32_t v5 = *(int32_t *)(v4 + 140); // 0xa6b14
	int32_t v6;
	int32_t v7;   // r24
	int32_t v8;   // r25
	int32_t v9;   // 0xa6b58
	int32_t v10;  // 0xa6b8c
	int32_t v11;  // 0xa6bc0
	int32_t v12;  // 0xa6bd0
	int32_t v13;  // 0xa6be0
	int32_t v14;  // 0xa6c24
	int32_t v15;  // 0xa6c2c
	int32_t v16;  // 0xa6c34
	int32_t v17;  // 0xa6c88
	int32_t v18;  // 0xa6b94
	int32_t v19;  // 0xa6b98
	int32_t v20;  // 0xa6be8
	int32_t *v21; // 0xa6bc0
	int32_t *v22; // 0xa6bd0
	int32_t v23;  // 0xa6bec
	int32_t v24;  // 0xa6c0c
	int32_t v25;  // 0xa6c1c
	int32_t v26;  // 0xa6c28
	int32_t v27;  // 0xa6c44
	int32_t v28;  // 0xa6c68
	int32_t v29;  // 0xa6b70
	int32_t v30;  // 0xa6ba4
	int32_t v31;  // 0xa6be4
	int32_t v32;  // 0xa6c40
	int32_t v33;  // 0xa6c50
	int32_t v34;  // 0xa6c58
	if (v5 == 3) {
		// 0xa6b44
		g34 = 0;
		g38 = *(int32_t *)(v4 + 60);
		PlaySfxLoc(0);
		// branch -> 0xa6b58
		// 0xa6b58
		v9 = g23;
		v6 = g30 + g35;
		v10 = 8;
		if (*(char *)*(int32_t *)(v9 - 0x77e4) != 0) {
			// 0xa6b6c
			v29 = *(int32_t *)(v9 - 0x6f90);
			v10 = *(int32_t *)(4 * (int32_t) * (char *)(v6 + 348) + v29);
			// branch -> 0xa6b84
		}
		// 0xa6b84
		g36 = v6;
		if (v10 != *(int32_t *)(v6 + 492)) {
			// 0xa6cc4
			function_a45f8(g27);
			// branch -> 0xa6cd0
			// 0xa6cd0
			return 0;
		}
		// 0xa6b94
		v18 = v6 + 56;
		v8 = v18;
		v19 = v6 + 60;
		v7 = v19;
		v30 = *(int32_t *)v19;
		*(char *)(*(int32_t *)g31 + v30 + 112 * *(int32_t *)v18) = 0;
		v11 = g36;
		v21 = (int32_t *)(v11 + 56);
		*v21 = *(int32_t *)(v11 + 464) + *v21;
		v12 = g36;
		v22 = (int32_t *)(v12 + 60);
		*v22 = *(int32_t *)(v12 + 468) + *v22;
		v13 = g36;
		v31 = *(int32_t *)(v13 + 60);
		v20 = 112 * *(int32_t *)(v13 + 56);
		v23 = *(int32_t *)g31;
		*(char *)(v23 + v31 + v20) = (char)(0x1000000 * g27 / 0x1000000 + 1);
		if (*(char *)g33 != 0) {
			// 0xa6c04
			v24 = *(int32_t *)v7;
			function_cb984(*(int32_t *)(g36 + 156), *(int32_t *)v8, v24);
			v25 = *(int32_t *)v7;
			function_cbddc(*(int32_t *)(g36 + 160), *(int32_t *)v8, v25);
			// branch -> 0xa6c24
		}
		// 0xa6c24
		v14 = g23;
		v26 = *(int32_t *)*(int32_t *)(v14 - 0x77ac);
		v15 = g27;
		v17 = v15;
		if (v15 == v26) {
			// 0xa6c34
			v16 = g32;
			if (*(int32_t *)(v16 + 16) != 0) {
				// 0xa6c40
				v32 = *(int32_t *)(v16 + 8);
				v27 = *(int32_t *)v8;
				v33 = *(int32_t *)(v14 - 0x77b4);
				*(int32_t *)*(int32_t *)(v14 - 0x77b0) = v27 - v32;
				v34 = *(int32_t *)(g32 + 12);
				*(int32_t *)v33 = *(int32_t *)v7 - v34;
				v17 = g27;
				// branch -> 0xa6c68
			} else {
				v17 = v26;
			}
		}
		// 0xa6c68
		v28 = g30 + g35;
		if (*(char *)(v28 + 4) == -1) {
			// 0xa6c88
			StartStand(v17, *(int32_t *)(v28 + 472));
			// branch -> 0xa6c94
		} else {
			// 0xa6c7c
			function_a443c(v17, v28);
			// branch -> 0xa6c94
		}
		// 0xa6c94
		function_a2af4(g27);
		if (*(char *)g33 != 0) {
			// 0xa6ca8
			function_cb9dc(*(int32_t *)(g30 + g35 + 156), 0, 0);
			// branch -> 0xa6cd0
		}
		// 0xa6cd0
		return 1;
	}
	// 0xa6b20
	int32_t result;
	if (*(int32_t *)(v4 + 672) == 8) {
		// 0xa6b2c
		if (v5 != 7) {
			// 0xa6b34
			// branch -> 0xa6b58
			// 0xa6b58
			v9 = g23;
			v6 = v3 + v1;
			v10 = 8;
			if (*(char *)*(int32_t *)(v9 - 0x77e4) != 0) {
				// 0xa6b6c
				v29 = *(int32_t *)(v9 - 0x6f90);
				v10 = *(int32_t *)(4 * (int32_t) * (char *)(v6 + 348) + v29);
				// branch -> 0xa6b84
			}
			// 0xa6b84
			g36 = v6;
			if (v10 == *(int32_t *)(v6 + 492)) {
				// 0xa6b94
				v18 = v6 + 56;
				v8 = v18;
				v19 = v6 + 60;
				v7 = v19;
				v30 = *(int32_t *)v19;
				*(char *)(*(int32_t *)g31 + v30 + 112 * *(int32_t *)v18) = 0;
				v11 = g36;
				v21 = (int32_t *)(v11 + 56);
				*v21 = *(int32_t *)(v11 + 464) + *v21;
				v12 = g36;
				v22 = (int32_t *)(v12 + 60);
				*v22 = *(int32_t *)(v12 + 468) + *v22;
				v13 = g36;
				v31 = *(int32_t *)(v13 + 60);
				v20 = 112 * *(int32_t *)(v13 + 56);
				v23 = *(int32_t *)g31;
				*(char *)(v23 + v31 + v20) = (char)(0x1000000 * g27 / 0x1000000 + 1);
				if (*(char *)g33 != 0) {
					// 0xa6c04
					v24 = *(int32_t *)v7;
					function_cb984(*(int32_t *)(g36 + 156), *(int32_t *)v8, v24);
					v25 = *(int32_t *)v7;
					function_cbddc(*(int32_t *)(g36 + 160), *(int32_t *)v8, v25);
					// branch -> 0xa6c24
				}
				// 0xa6c24
				v14 = g23;
				v26 = *(int32_t *)*(int32_t *)(v14 - 0x77ac);
				v15 = g27;
				v17 = v15;
				if (v15 == v26) {
					// 0xa6c34
					v16 = g32;
					if (*(int32_t *)(v16 + 16) != 0) {
						// 0xa6c40
						v32 = *(int32_t *)(v16 + 8);
						v27 = *(int32_t *)v8;
						v33 = *(int32_t *)(v14 - 0x77b4);
						*(int32_t *)*(int32_t *)(v14 - 0x77b0) = v27 - v32;
						v34 = *(int32_t *)(g32 + 12);
						*(int32_t *)v33 = *(int32_t *)v7 - v34;
						v17 = g27;
						// branch -> 0xa6c68
					} else {
						v17 = v26;
					}
				}
				// 0xa6c68
				v28 = g30 + g35;
				if (*(char *)(v28 + 4) == -1) {
					// 0xa6c88
					StartStand(v17, *(int32_t *)(v28 + 472));
					// branch -> 0xa6c94
				} else {
					// 0xa6c7c
					function_a443c(v17, v28);
					// branch -> 0xa6c94
				}
				// 0xa6c94
				function_a2af4(g27);
				if (*(char *)g33 != 0) {
					// 0xa6ca8
					function_cb9dc(*(int32_t *)(g30 + g35 + 156), 0, 0);
					result = 1;
					// branch -> 0xa6cd0
				} else {
					result = 1;
				}
			} else {
				// 0xa6cc4
				function_a45f8(g27);
				result = 0;
				// branch -> 0xa6cd0
			}
			// 0xa6cd0
			return result;
		}
	} else {
		// 0xa6b3c
		if (v5 != 4) {
			// 0xa6b58
			v9 = g23;
			v6 = v3 + v1;
			v10 = 8;
			if (*(char *)*(int32_t *)(v9 - 0x77e4) != 0) {
				// 0xa6b6c
				v29 = *(int32_t *)(v9 - 0x6f90);
				v10 = *(int32_t *)(4 * (int32_t) * (char *)(v6 + 348) + v29);
				// branch -> 0xa6b84
			}
			// 0xa6b84
			g36 = v6;
			if (v10 == *(int32_t *)(v6 + 492)) {
				// 0xa6b94
				v18 = v6 + 56;
				v8 = v18;
				v19 = v6 + 60;
				v7 = v19;
				v30 = *(int32_t *)v19;
				*(char *)(*(int32_t *)g31 + v30 + 112 * *(int32_t *)v18) = 0;
				v11 = g36;
				v21 = (int32_t *)(v11 + 56);
				*v21 = *(int32_t *)(v11 + 464) + *v21;
				v12 = g36;
				v22 = (int32_t *)(v12 + 60);
				*v22 = *(int32_t *)(v12 + 468) + *v22;
				v13 = g36;
				v31 = *(int32_t *)(v13 + 60);
				v20 = 112 * *(int32_t *)(v13 + 56);
				v23 = *(int32_t *)g31;
				*(char *)(v23 + v31 + v20) = (char)(0x1000000 * g27 / 0x1000000 + 1);
				if (*(char *)g33 != 0) {
					// 0xa6c04
					v24 = *(int32_t *)v7;
					function_cb984(*(int32_t *)(g36 + 156), *(int32_t *)v8, v24);
					v25 = *(int32_t *)v7;
					function_cbddc(*(int32_t *)(g36 + 160), *(int32_t *)v8, v25);
					// branch -> 0xa6c24
				}
				// 0xa6c24
				v14 = g23;
				v26 = *(int32_t *)*(int32_t *)(v14 - 0x77ac);
				v15 = g27;
				v17 = v15;
				if (v15 == v26) {
					// 0xa6c34
					v16 = g32;
					if (*(int32_t *)(v16 + 16) != 0) {
						// 0xa6c40
						v32 = *(int32_t *)(v16 + 8);
						v27 = *(int32_t *)v8;
						v33 = *(int32_t *)(v14 - 0x77b4);
						*(int32_t *)*(int32_t *)(v14 - 0x77b0) = v27 - v32;
						v34 = *(int32_t *)(g32 + 12);
						*(int32_t *)v33 = *(int32_t *)v7 - v34;
						v17 = g27;
						// branch -> 0xa6c68
					} else {
						v17 = v26;
					}
				}
				// 0xa6c68
				v28 = g30 + g35;
				if (*(char *)(v28 + 4) == -1) {
					// 0xa6c88
					StartStand(v17, *(int32_t *)(v28 + 472));
					// branch -> 0xa6c94
				} else {
					// 0xa6c7c
					function_a443c(v17, v28);
					// branch -> 0xa6c94
				}
				// 0xa6c94
				function_a2af4(g27);
				if (*(char *)g33 != 0) {
					// 0xa6ca8
					function_cb9dc(*(int32_t *)(g30 + g35 + 156), 0, 0);
					result = 1;
					// branch -> 0xa6cd0
				} else {
					result = 1;
				}
			} else {
				// 0xa6cc4
				function_a45f8(g27);
				result = 0;
				// branch -> 0xa6cd0
			}
			// 0xa6cd0
			return result;
		}
	}
	// 0xa6b44
	g34 = 0;
	g38 = *(int32_t *)(v4 + 60);
	PlaySfxLoc(0);
	// branch -> 0xa6b58
	// 0xa6b58
	v9 = g23;
	v6 = g30 + g35;
	v10 = 8;
	if (*(char *)*(int32_t *)(v9 - 0x77e4) != 0) {
		// 0xa6b6c
		v29 = *(int32_t *)(v9 - 0x6f90);
		v10 = *(int32_t *)(4 * (int32_t) * (char *)(v6 + 348) + v29);
		// branch -> 0xa6b84
	}
	// 0xa6b84
	g36 = v6;
	if (v10 == *(int32_t *)(v6 + 492)) {
		// 0xa6b94
		v18 = v6 + 56;
		v8 = v18;
		v19 = v6 + 60;
		v7 = v19;
		v30 = *(int32_t *)v19;
		*(char *)(*(int32_t *)g31 + v30 + 112 * *(int32_t *)v18) = 0;
		v11 = g36;
		v21 = (int32_t *)(v11 + 56);
		*v21 = *(int32_t *)(v11 + 464) + *v21;
		v12 = g36;
		v22 = (int32_t *)(v12 + 60);
		*v22 = *(int32_t *)(v12 + 468) + *v22;
		v13 = g36;
		v31 = *(int32_t *)(v13 + 60);
		v20 = 112 * *(int32_t *)(v13 + 56);
		v23 = *(int32_t *)g31;
		*(char *)(v23 + v31 + v20) = (char)(0x1000000 * g27 / 0x1000000 + 1);
		if (*(char *)g33 != 0) {
			// 0xa6c04
			v24 = *(int32_t *)v7;
			function_cb984(*(int32_t *)(g36 + 156), *(int32_t *)v8, v24);
			v25 = *(int32_t *)v7;
			function_cbddc(*(int32_t *)(g36 + 160), *(int32_t *)v8, v25);
			// branch -> 0xa6c24
		}
		// 0xa6c24
		v14 = g23;
		v26 = *(int32_t *)*(int32_t *)(v14 - 0x77ac);
		v15 = g27;
		v17 = v15;
		if (v15 == v26) {
			// 0xa6c34
			v16 = g32;
			if (*(int32_t *)(v16 + 16) != 0) {
				// 0xa6c40
				v32 = *(int32_t *)(v16 + 8);
				v27 = *(int32_t *)v8;
				v33 = *(int32_t *)(v14 - 0x77b4);
				*(int32_t *)*(int32_t *)(v14 - 0x77b0) = v27 - v32;
				v34 = *(int32_t *)(g32 + 12);
				*(int32_t *)v33 = *(int32_t *)v7 - v34;
				v17 = g27;
				// branch -> 0xa6c68
			} else {
				v17 = v26;
			}
		}
		// 0xa6c68
		v28 = g30 + g35;
		if (*(char *)(v28 + 4) == -1) {
			// 0xa6c88
			StartStand(v17, *(int32_t *)(v28 + 472));
			// branch -> 0xa6c94
		} else {
			// 0xa6c7c
			function_a443c(v17, v28);
			// branch -> 0xa6c94
		}
		// 0xa6c94
		function_a2af4(g27);
		if (*(char *)g33 != 0) {
			// 0xa6ca8
			function_cb9dc(*(int32_t *)(g30 + g35 + 156), 0, 0);
			result = 1;
			// branch -> 0xa6cd0
		} else {
			result = 1;
		}
	} else {
		// 0xa6cc4
		function_a45f8(g27);
		result = 0;
		// branch -> 0xa6cd0
	}
	// 0xa6cd0
	return result;
}

// Address range: 0xa6ce4 - 0xa6eb8
int32_t function_a6ce4(int32_t a1)
{
	g31 = a1;
	g33 = *(int32_t *)(g23 - 0x77b8);
	g35 = *(int32_t *)(g23 - 0x7794);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa6cfc
	g36 = v1;
	int32_t v2 = a1; // 0xa6d18
	if (a1 >= 4) {
		// 0xa6d0c
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x59c8));
		v1 = g36;
		v2 = g31;
		// branch -> 0xa6d18
	}
	int32_t v3 = 0x55ec * v2; // 0xa6d18
	g32 = v3;
	int32_t v4 = v3 + v1;                // 0xa6d1c
	int32_t v5 = *(int32_t *)(v4 + 140); // 0xa6d20
	int32_t v6;
	int32_t v7;  // 0xa6d64
	int32_t v8;  // 0xa6d98
	int32_t v9;  // 0xa6dcc
	int32_t v10; // 0xa6df4
	int32_t v11; // 0xa6dfc
	int32_t v12; // 0xa6e04
	int32_t v13; // 0xa6e5c
	int32_t v14; // 0xa6dac
	int32_t v15; // 0xa6dcc
	int32_t v16; // 0xa6dd0
	int32_t v17; // 0xa6e38
	int32_t v18; // 0xa6df8
	int32_t v19; // 0xa6e10
	int32_t v20; // 0xa6e3c
	int32_t v21; // 0xa6d7c
	int32_t v22; // 0xa6da8
	int32_t v23; // 0xa6ddc
	int32_t v24; // 0xa6de4
	int32_t v25; // 0xa6e14
	int32_t v26; // 0xa6e1c
	if (v5 == 3) {
		// 0xa6d50
		g34 = 0;
		g38 = *(int32_t *)(v4 + 60);
		PlaySfxLoc(0);
		// branch -> 0xa6d64
		// 0xa6d64
		v7 = g23;
		v6 = g32 + g36;
		v8 = 8;
		if (*(char *)*(int32_t *)(v7 - 0x77e4) != 0) {
			// 0xa6d78
			v21 = *(int32_t *)(v7 - 0x6f90);
			v8 = *(int32_t *)(4 * (int32_t) * (char *)(v6 + 348) + v21);
			// branch -> 0xa6d90
		}
		// 0xa6d90
		g30 = v6;
		if (v8 != *(int32_t *)(v6 + 492)) {
			// 0xa6e98
			function_a45f8(g31);
			// branch -> 0xa6ea4
			// 0xa6ea4
			return 0;
		}
		// 0xa6da0
		v22 = *(int32_t *)(v7 - 0x7680);
		v14 = 112 * *(int32_t *)(v6 + 464);
		*(char *)(*(int32_t *)v22 + *(int32_t *)(v6 + 468) + v14) = 0;
		if (*(char *)g35 != 0) {
			// 0xa6dcc
			v9 = g30;
			v15 = v9 + 56;
			v16 = v9 + 60;
			v23 = *(int32_t *)v16;
			function_cb984(*(int32_t *)(v9 + 156), *(int32_t *)v15, v23);
			v24 = *(int32_t *)(g30 + 160);
			function_cbddc(v24, *(int32_t *)v15, *(int32_t *)v16);
			// branch -> 0xa6df4
		}
		// 0xa6df4
		v10 = g23;
		v18 = *(int32_t *)*(int32_t *)(v10 - 0x77ac);
		v11 = g31;
		v13 = v11;
		if (v11 == v18) {
			// 0xa6e04
			v12 = g33;
			if (*(int32_t *)(v12 + 16) != 0) {
				// 0xa6e10
				v19 = g32 + g36;
				v25 = *(int32_t *)(v12 + 8);
				v26 = *(int32_t *)(v10 - 0x77b0);
				*(int32_t *)v26 = *(int32_t *)(v19 + 56) - v25;
				v17 = *(int32_t *)(v10 - 0x77b4);
				*(int32_t *)v17 = *(int32_t *)(v19 + 60) - *(int32_t *)(g33 + 12);
				v13 = g31;
				// branch -> 0xa6e3c
			} else {
				v13 = v18;
			}
		}
		// 0xa6e3c
		v20 = g32 + g36;
		if (*(char *)(v20 + 4) == -1) {
			// 0xa6e5c
			StartStand(v13, *(int32_t *)(v20 + 472));
			// branch -> 0xa6e68
		} else {
			// 0xa6e50
			function_a443c(v13, v20);
			// branch -> 0xa6e68
		}
		// 0xa6e68
		function_a2af4(g31);
		if (*(char *)g35 != 0) {
			// 0xa6e7c
			function_cb9dc(*(int32_t *)(g32 + g36 + 156), 0, 0);
			// branch -> 0xa6ea4
		}
		// 0xa6ea4
		return 1;
	}
	// 0xa6d2c
	int32_t result;
	if (*(int32_t *)(v4 + 672) == 8) {
		// 0xa6d38
		if (v5 != 7) {
			// 0xa6d40
			// branch -> 0xa6d64
			// 0xa6d64
			v7 = g23;
			v6 = v3 + v1;
			v8 = 8;
			if (*(char *)*(int32_t *)(v7 - 0x77e4) != 0) {
				// 0xa6d78
				v21 = *(int32_t *)(v7 - 0x6f90);
				v8 = *(int32_t *)(4 * (int32_t) * (char *)(v6 + 348) + v21);
				// branch -> 0xa6d90
			}
			// 0xa6d90
			g30 = v6;
			if (v8 == *(int32_t *)(v6 + 492)) {
				// 0xa6da0
				v22 = *(int32_t *)(v7 - 0x7680);
				v14 = 112 * *(int32_t *)(v6 + 464);
				*(char *)(*(int32_t *)v22 + *(int32_t *)(v6 + 468) + v14) = 0;
				if (*(char *)g35 != 0) {
					// 0xa6dcc
					v9 = g30;
					v15 = v9 + 56;
					v16 = v9 + 60;
					v23 = *(int32_t *)v16;
					function_cb984(*(int32_t *)(v9 + 156), *(int32_t *)v15, v23);
					v24 = *(int32_t *)(g30 + 160);
					function_cbddc(v24, *(int32_t *)v15, *(int32_t *)v16);
					// branch -> 0xa6df4
				}
				// 0xa6df4
				v10 = g23;
				v18 = *(int32_t *)*(int32_t *)(v10 - 0x77ac);
				v11 = g31;
				v13 = v11;
				if (v11 == v18) {
					// 0xa6e04
					v12 = g33;
					if (*(int32_t *)(v12 + 16) != 0) {
						// 0xa6e10
						v19 = g32 + g36;
						v25 = *(int32_t *)(v12 + 8);
						v26 = *(int32_t *)(v10 - 0x77b0);
						*(int32_t *)v26 = *(int32_t *)(v19 + 56) - v25;
						v17 = *(int32_t *)(v10 - 0x77b4);
						*(int32_t *)v17 = *(int32_t *)(v19 + 60) - *(int32_t *)(g33 + 12);
						v13 = g31;
						// branch -> 0xa6e3c
					} else {
						v13 = v18;
					}
				}
				// 0xa6e3c
				v20 = g32 + g36;
				if (*(char *)(v20 + 4) == -1) {
					// 0xa6e5c
					StartStand(v13, *(int32_t *)(v20 + 472));
					// branch -> 0xa6e68
				} else {
					// 0xa6e50
					function_a443c(v13, v20);
					// branch -> 0xa6e68
				}
				// 0xa6e68
				function_a2af4(g31);
				if (*(char *)g35 != 0) {
					// 0xa6e7c
					function_cb9dc(*(int32_t *)(g32 + g36 + 156), 0, 0);
					result = 1;
					// branch -> 0xa6ea4
				} else {
					result = 1;
				}
			} else {
				// 0xa6e98
				function_a45f8(g31);
				result = 0;
				// branch -> 0xa6ea4
			}
			// 0xa6ea4
			return result;
		}
	} else {
		// 0xa6d48
		if (v5 != 4) {
			// 0xa6d64
			v7 = g23;
			v6 = v3 + v1;
			v8 = 8;
			if (*(char *)*(int32_t *)(v7 - 0x77e4) != 0) {
				// 0xa6d78
				v21 = *(int32_t *)(v7 - 0x6f90);
				v8 = *(int32_t *)(4 * (int32_t) * (char *)(v6 + 348) + v21);
				// branch -> 0xa6d90
			}
			// 0xa6d90
			g30 = v6;
			if (v8 == *(int32_t *)(v6 + 492)) {
				// 0xa6da0
				v22 = *(int32_t *)(v7 - 0x7680);
				v14 = 112 * *(int32_t *)(v6 + 464);
				*(char *)(*(int32_t *)v22 + *(int32_t *)(v6 + 468) + v14) = 0;
				if (*(char *)g35 != 0) {
					// 0xa6dcc
					v9 = g30;
					v15 = v9 + 56;
					v16 = v9 + 60;
					v23 = *(int32_t *)v16;
					function_cb984(*(int32_t *)(v9 + 156), *(int32_t *)v15, v23);
					v24 = *(int32_t *)(g30 + 160);
					function_cbddc(v24, *(int32_t *)v15, *(int32_t *)v16);
					// branch -> 0xa6df4
				}
				// 0xa6df4
				v10 = g23;
				v18 = *(int32_t *)*(int32_t *)(v10 - 0x77ac);
				v11 = g31;
				v13 = v11;
				if (v11 == v18) {
					// 0xa6e04
					v12 = g33;
					if (*(int32_t *)(v12 + 16) != 0) {
						// 0xa6e10
						v19 = g32 + g36;
						v25 = *(int32_t *)(v12 + 8);
						v26 = *(int32_t *)(v10 - 0x77b0);
						*(int32_t *)v26 = *(int32_t *)(v19 + 56) - v25;
						v17 = *(int32_t *)(v10 - 0x77b4);
						*(int32_t *)v17 = *(int32_t *)(v19 + 60) - *(int32_t *)(g33 + 12);
						v13 = g31;
						// branch -> 0xa6e3c
					} else {
						v13 = v18;
					}
				}
				// 0xa6e3c
				v20 = g32 + g36;
				if (*(char *)(v20 + 4) == -1) {
					// 0xa6e5c
					StartStand(v13, *(int32_t *)(v20 + 472));
					// branch -> 0xa6e68
				} else {
					// 0xa6e50
					function_a443c(v13, v20);
					// branch -> 0xa6e68
				}
				// 0xa6e68
				function_a2af4(g31);
				if (*(char *)g35 != 0) {
					// 0xa6e7c
					function_cb9dc(*(int32_t *)(g32 + g36 + 156), 0, 0);
					result = 1;
					// branch -> 0xa6ea4
				} else {
					result = 1;
				}
			} else {
				// 0xa6e98
				function_a45f8(g31);
				result = 0;
				// branch -> 0xa6ea4
			}
			// 0xa6ea4
			return result;
		}
	}
	// 0xa6d50
	g34 = 0;
	g38 = *(int32_t *)(v4 + 60);
	PlaySfxLoc(0);
	// branch -> 0xa6d64
	// 0xa6d64
	v7 = g23;
	v6 = g32 + g36;
	v8 = 8;
	if (*(char *)*(int32_t *)(v7 - 0x77e4) != 0) {
		// 0xa6d78
		v21 = *(int32_t *)(v7 - 0x6f90);
		v8 = *(int32_t *)(4 * (int32_t) * (char *)(v6 + 348) + v21);
		// branch -> 0xa6d90
	}
	// 0xa6d90
	g30 = v6;
	if (v8 == *(int32_t *)(v6 + 492)) {
		// 0xa6da0
		v22 = *(int32_t *)(v7 - 0x7680);
		v14 = 112 * *(int32_t *)(v6 + 464);
		*(char *)(*(int32_t *)v22 + *(int32_t *)(v6 + 468) + v14) = 0;
		if (*(char *)g35 != 0) {
			// 0xa6dcc
			v9 = g30;
			v15 = v9 + 56;
			v16 = v9 + 60;
			v23 = *(int32_t *)v16;
			function_cb984(*(int32_t *)(v9 + 156), *(int32_t *)v15, v23);
			v24 = *(int32_t *)(g30 + 160);
			function_cbddc(v24, *(int32_t *)v15, *(int32_t *)v16);
			// branch -> 0xa6df4
		}
		// 0xa6df4
		v10 = g23;
		v18 = *(int32_t *)*(int32_t *)(v10 - 0x77ac);
		v11 = g31;
		v13 = v11;
		if (v11 == v18) {
			// 0xa6e04
			v12 = g33;
			if (*(int32_t *)(v12 + 16) != 0) {
				// 0xa6e10
				v19 = g32 + g36;
				v25 = *(int32_t *)(v12 + 8);
				v26 = *(int32_t *)(v10 - 0x77b0);
				*(int32_t *)v26 = *(int32_t *)(v19 + 56) - v25;
				v17 = *(int32_t *)(v10 - 0x77b4);
				*(int32_t *)v17 = *(int32_t *)(v19 + 60) - *(int32_t *)(g33 + 12);
				v13 = g31;
				// branch -> 0xa6e3c
			} else {
				v13 = v18;
			}
		}
		// 0xa6e3c
		v20 = g32 + g36;
		if (*(char *)(v20 + 4) == -1) {
			// 0xa6e5c
			StartStand(v13, *(int32_t *)(v20 + 472));
			// branch -> 0xa6e68
		} else {
			// 0xa6e50
			function_a443c(v13, v20);
			// branch -> 0xa6e68
		}
		// 0xa6e68
		function_a2af4(g31);
		if (*(char *)g35 != 0) {
			// 0xa6e7c
			function_cb9dc(*(int32_t *)(g32 + g36 + 156), 0, 0);
			result = 1;
			// branch -> 0xa6ea4
		} else {
			result = 1;
		}
	} else {
		// 0xa6e98
		function_a45f8(g31);
		result = 0;
		// branch -> 0xa6ea4
	}
	// 0xa6ea4
	return result;
}

// Address range: 0xa6eb8 - 0xa70dc
int32_t function_a6eb8(int32_t a1)
{
	g27 = a1;
	g31 = *(int32_t *)(g23 - 0x7680);
	g32 = *(int32_t *)(g23 - 0x77b8);
	g33 = *(int32_t *)(g23 - 0x7794);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa6ed4
	g35 = v1;
	int32_t v2 = a1; // 0xa6ef0
	if (a1 >= 4) {
		// 0xa6ee4
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x59cc));
		v1 = g35;
		v2 = g27;
		// branch -> 0xa6ef0
	}
	int32_t v3 = 0x55ec * v2; // 0xa6ef0
	g30 = v3;
	int32_t v4 = v3 + v1;                // 0xa6ef4
	int32_t v5 = *(int32_t *)(v4 + 140); // 0xa6ef8
	int32_t v6;
	int32_t v7;  // r24
	int32_t v8;  // r25
	int32_t v9;  // 0xa6f3c
	int32_t v10; // 0xa6f70
	int32_t v11; // 0xa6fa8
	int32_t v12; // 0xa6fc8
	int32_t v13; // 0xa6fd0
	int32_t v14; // 0xa6fd8
	int32_t v15; // 0xa701c
	int32_t v16; // 0xa7024
	int32_t v17; // 0xa702c
	int32_t v18; // 0xa7080
	int32_t v19; // 0xa6f78
	int32_t v20; // 0xa6f7c
	int32_t v21; // 0xa6fe0
	int32_t v22; // 0xa6fb8
	int32_t v23; // 0xa6fe4
	int32_t v24; // 0xa7004
	int32_t v25; // 0xa7014
	int32_t v26; // 0xa7020
	int32_t v27; // 0xa7060
	int32_t v28; // 0xa6f54
	int32_t v29; // 0xa6f80
	char *v30;   // 0xa6fbc
	int32_t v31; // 0xa6fdc
	int32_t v32; // 0xa7038
	int32_t v33; // 0xa7040
	int32_t v34; // 0xa7048
	int32_t v35; // 0xa7050
	if (v5 == 3) {
		// 0xa6f28
		g34 = 0;
		g38 = *(int32_t *)(v4 + 60);
		PlaySfxLoc(0);
		// branch -> 0xa6f3c
		// 0xa6f3c
		v9 = g23;
		v6 = g30 + g35;
		v10 = 8;
		if (*(char *)*(int32_t *)(v9 - 0x77e4) != 0) {
			// 0xa6f50
			v28 = *(int32_t *)(v9 - 0x6f90);
			v10 = *(int32_t *)(4 * (int32_t) * (char *)(v6 + 348) + v28);
			// branch -> 0xa6f68
		}
		// 0xa6f68
		g36 = v6;
		if (v10 != *(int32_t *)(v6 + 492)) {
			// 0xa70bc
			function_a45f8(g27);
			// branch -> 0xa70c8
			// 0xa70c8
			return 0;
		}
		// 0xa6f78
		v19 = v6 + 56;
		v8 = v19;
		v20 = v6 + 60;
		v7 = v20;
		v29 = *(int32_t *)v19;
		*(char *)(*(int32_t *)g31 + *(int32_t *)v20 + 112 * v29) = 0;
		v11 = g36;
		v22 = *(int32_t *)(v11 + 480) + 112 * *(int32_t *)(v11 + 476);
		v30 = (char *)(*(int32_t *)*(int32_t *)(v9 - 0x779c) + v22);
		*v30 = *v30 & -33;
		v12 = g36;
		*(int32_t *)(v12 + 56) = *(int32_t *)(v12 + 464);
		v13 = g36;
		*(int32_t *)(v13 + 60) = *(int32_t *)(v13 + 468);
		v14 = g36;
		v31 = *(int32_t *)(v14 + 60);
		v21 = 112 * *(int32_t *)(v14 + 56);
		v23 = *(int32_t *)g31;
		*(char *)(v23 + v31 + v21) = (char)(0x1000000 * g27 / 0x1000000 + 1);
		if (*(char *)g33 != 0) {
			// 0xa6ffc
			v24 = *(int32_t *)v7;
			function_cb984(*(int32_t *)(g36 + 156), *(int32_t *)v8, v24);
			v25 = *(int32_t *)v7;
			function_cbddc(*(int32_t *)(g36 + 160), *(int32_t *)v8, v25);
			// branch -> 0xa701c
		}
		// 0xa701c
		v15 = g23;
		v26 = *(int32_t *)*(int32_t *)(v15 - 0x77ac);
		v16 = g27;
		v18 = v16;
		if (v16 == v26) {
			// 0xa702c
			v17 = g32;
			if (*(int32_t *)(v17 + 16) != 0) {
				// 0xa7038
				v32 = *(int32_t *)(v17 + 8);
				v33 = *(int32_t *)(v15 - 0x77b0);
				v34 = *(int32_t *)(v15 - 0x77b4);
				*(int32_t *)v33 = *(int32_t *)v8 - v32;
				v35 = *(int32_t *)(g32 + 12);
				*(int32_t *)v34 = *(int32_t *)v7 - v35;
				v18 = g27;
				// branch -> 0xa7060
			} else {
				v18 = v26;
			}
		}
		// 0xa7060
		v27 = g30 + g35;
		if (*(char *)(v27 + 4) == -1) {
			// 0xa7080
			StartStand(v18, *(int32_t *)(v27 + 472));
			// branch -> 0xa708c
		} else {
			// 0xa7074
			function_a443c(v18, v27);
			// branch -> 0xa708c
		}
		// 0xa708c
		function_a2af4(g27);
		if (*(char *)g33 != 0) {
			// 0xa70a0
			function_cb9dc(*(int32_t *)(g30 + g35 + 156), 0, 0);
			// branch -> 0xa70c8
		}
		// 0xa70c8
		return 1;
	}
	// 0xa6f04
	int32_t result;
	if (*(int32_t *)(v4 + 672) == 8) {
		// 0xa6f10
		if (v5 != 7) {
			// 0xa6f18
			// branch -> 0xa6f3c
			// 0xa6f3c
			v9 = g23;
			v6 = v3 + v1;
			v10 = 8;
			if (*(char *)*(int32_t *)(v9 - 0x77e4) != 0) {
				// 0xa6f50
				v28 = *(int32_t *)(v9 - 0x6f90);
				v10 = *(int32_t *)(4 * (int32_t) * (char *)(v6 + 348) + v28);
				// branch -> 0xa6f68
			}
			// 0xa6f68
			g36 = v6;
			if (v10 == *(int32_t *)(v6 + 492)) {
				// 0xa6f78
				v19 = v6 + 56;
				v8 = v19;
				v20 = v6 + 60;
				v7 = v20;
				v29 = *(int32_t *)v19;
				*(char *)(*(int32_t *)g31 + *(int32_t *)v20 + 112 * v29) = 0;
				v11 = g36;
				v22 = *(int32_t *)(v11 + 480) + 112 * *(int32_t *)(v11 + 476);
				v30 = (char *)(*(int32_t *)*(int32_t *)(v9 - 0x779c) + v22);
				*v30 = *v30 & -33;
				v12 = g36;
				*(int32_t *)(v12 + 56) = *(int32_t *)(v12 + 464);
				v13 = g36;
				*(int32_t *)(v13 + 60) = *(int32_t *)(v13 + 468);
				v14 = g36;
				v31 = *(int32_t *)(v14 + 60);
				v21 = 112 * *(int32_t *)(v14 + 56);
				v23 = *(int32_t *)g31;
				*(char *)(v23 + v31 + v21) = (char)(0x1000000 * g27 / 0x1000000 + 1);
				if (*(char *)g33 != 0) {
					// 0xa6ffc
					v24 = *(int32_t *)v7;
					function_cb984(*(int32_t *)(g36 + 156), *(int32_t *)v8, v24);
					v25 = *(int32_t *)v7;
					function_cbddc(*(int32_t *)(g36 + 160), *(int32_t *)v8, v25);
					// branch -> 0xa701c
				}
				// 0xa701c
				v15 = g23;
				v26 = *(int32_t *)*(int32_t *)(v15 - 0x77ac);
				v16 = g27;
				v18 = v16;
				if (v16 == v26) {
					// 0xa702c
					v17 = g32;
					if (*(int32_t *)(v17 + 16) != 0) {
						// 0xa7038
						v32 = *(int32_t *)(v17 + 8);
						v33 = *(int32_t *)(v15 - 0x77b0);
						v34 = *(int32_t *)(v15 - 0x77b4);
						*(int32_t *)v33 = *(int32_t *)v8 - v32;
						v35 = *(int32_t *)(g32 + 12);
						*(int32_t *)v34 = *(int32_t *)v7 - v35;
						v18 = g27;
						// branch -> 0xa7060
					} else {
						v18 = v26;
					}
				}
				// 0xa7060
				v27 = g30 + g35;
				if (*(char *)(v27 + 4) == -1) {
					// 0xa7080
					StartStand(v18, *(int32_t *)(v27 + 472));
					// branch -> 0xa708c
				} else {
					// 0xa7074
					function_a443c(v18, v27);
					// branch -> 0xa708c
				}
				// 0xa708c
				function_a2af4(g27);
				if (*(char *)g33 != 0) {
					// 0xa70a0
					function_cb9dc(*(int32_t *)(g30 + g35 + 156), 0, 0);
					result = 1;
					// branch -> 0xa70c8
				} else {
					result = 1;
				}
			} else {
				// 0xa70bc
				function_a45f8(g27);
				result = 0;
				// branch -> 0xa70c8
			}
			// 0xa70c8
			return result;
		}
	} else {
		// 0xa6f20
		if (v5 != 4) {
			// 0xa6f3c
			v9 = g23;
			v6 = v3 + v1;
			v10 = 8;
			if (*(char *)*(int32_t *)(v9 - 0x77e4) != 0) {
				// 0xa6f50
				v28 = *(int32_t *)(v9 - 0x6f90);
				v10 = *(int32_t *)(4 * (int32_t) * (char *)(v6 + 348) + v28);
				// branch -> 0xa6f68
			}
			// 0xa6f68
			g36 = v6;
			if (v10 == *(int32_t *)(v6 + 492)) {
				// 0xa6f78
				v19 = v6 + 56;
				v8 = v19;
				v20 = v6 + 60;
				v7 = v20;
				v29 = *(int32_t *)v19;
				*(char *)(*(int32_t *)g31 + *(int32_t *)v20 + 112 * v29) = 0;
				v11 = g36;
				v22 = *(int32_t *)(v11 + 480) + 112 * *(int32_t *)(v11 + 476);
				v30 = (char *)(*(int32_t *)*(int32_t *)(v9 - 0x779c) + v22);
				*v30 = *v30 & -33;
				v12 = g36;
				*(int32_t *)(v12 + 56) = *(int32_t *)(v12 + 464);
				v13 = g36;
				*(int32_t *)(v13 + 60) = *(int32_t *)(v13 + 468);
				v14 = g36;
				v31 = *(int32_t *)(v14 + 60);
				v21 = 112 * *(int32_t *)(v14 + 56);
				v23 = *(int32_t *)g31;
				*(char *)(v23 + v31 + v21) = (char)(0x1000000 * g27 / 0x1000000 + 1);
				if (*(char *)g33 != 0) {
					// 0xa6ffc
					v24 = *(int32_t *)v7;
					function_cb984(*(int32_t *)(g36 + 156), *(int32_t *)v8, v24);
					v25 = *(int32_t *)v7;
					function_cbddc(*(int32_t *)(g36 + 160), *(int32_t *)v8, v25);
					// branch -> 0xa701c
				}
				// 0xa701c
				v15 = g23;
				v26 = *(int32_t *)*(int32_t *)(v15 - 0x77ac);
				v16 = g27;
				v18 = v16;
				if (v16 == v26) {
					// 0xa702c
					v17 = g32;
					if (*(int32_t *)(v17 + 16) != 0) {
						// 0xa7038
						v32 = *(int32_t *)(v17 + 8);
						v33 = *(int32_t *)(v15 - 0x77b0);
						v34 = *(int32_t *)(v15 - 0x77b4);
						*(int32_t *)v33 = *(int32_t *)v8 - v32;
						v35 = *(int32_t *)(g32 + 12);
						*(int32_t *)v34 = *(int32_t *)v7 - v35;
						v18 = g27;
						// branch -> 0xa7060
					} else {
						v18 = v26;
					}
				}
				// 0xa7060
				v27 = g30 + g35;
				if (*(char *)(v27 + 4) == -1) {
					// 0xa7080
					StartStand(v18, *(int32_t *)(v27 + 472));
					// branch -> 0xa708c
				} else {
					// 0xa7074
					function_a443c(v18, v27);
					// branch -> 0xa708c
				}
				// 0xa708c
				function_a2af4(g27);
				if (*(char *)g33 != 0) {
					// 0xa70a0
					function_cb9dc(*(int32_t *)(g30 + g35 + 156), 0, 0);
					result = 1;
					// branch -> 0xa70c8
				} else {
					result = 1;
				}
			} else {
				// 0xa70bc
				function_a45f8(g27);
				result = 0;
				// branch -> 0xa70c8
			}
			// 0xa70c8
			return result;
		}
	}
	// 0xa6f28
	g34 = 0;
	g38 = *(int32_t *)(v4 + 60);
	PlaySfxLoc(0);
	// branch -> 0xa6f3c
	// 0xa6f3c
	v9 = g23;
	v6 = g30 + g35;
	v10 = 8;
	if (*(char *)*(int32_t *)(v9 - 0x77e4) != 0) {
		// 0xa6f50
		v28 = *(int32_t *)(v9 - 0x6f90);
		v10 = *(int32_t *)(4 * (int32_t) * (char *)(v6 + 348) + v28);
		// branch -> 0xa6f68
	}
	// 0xa6f68
	g36 = v6;
	if (v10 == *(int32_t *)(v6 + 492)) {
		// 0xa6f78
		v19 = v6 + 56;
		v8 = v19;
		v20 = v6 + 60;
		v7 = v20;
		v29 = *(int32_t *)v19;
		*(char *)(*(int32_t *)g31 + *(int32_t *)v20 + 112 * v29) = 0;
		v11 = g36;
		v22 = *(int32_t *)(v11 + 480) + 112 * *(int32_t *)(v11 + 476);
		v30 = (char *)(*(int32_t *)*(int32_t *)(v9 - 0x779c) + v22);
		*v30 = *v30 & -33;
		v12 = g36;
		*(int32_t *)(v12 + 56) = *(int32_t *)(v12 + 464);
		v13 = g36;
		*(int32_t *)(v13 + 60) = *(int32_t *)(v13 + 468);
		v14 = g36;
		v31 = *(int32_t *)(v14 + 60);
		v21 = 112 * *(int32_t *)(v14 + 56);
		v23 = *(int32_t *)g31;
		*(char *)(v23 + v31 + v21) = (char)(0x1000000 * g27 / 0x1000000 + 1);
		if (*(char *)g33 != 0) {
			// 0xa6ffc
			v24 = *(int32_t *)v7;
			function_cb984(*(int32_t *)(g36 + 156), *(int32_t *)v8, v24);
			v25 = *(int32_t *)v7;
			function_cbddc(*(int32_t *)(g36 + 160), *(int32_t *)v8, v25);
			// branch -> 0xa701c
		}
		// 0xa701c
		v15 = g23;
		v26 = *(int32_t *)*(int32_t *)(v15 - 0x77ac);
		v16 = g27;
		v18 = v16;
		if (v16 == v26) {
			// 0xa702c
			v17 = g32;
			if (*(int32_t *)(v17 + 16) != 0) {
				// 0xa7038
				v32 = *(int32_t *)(v17 + 8);
				v33 = *(int32_t *)(v15 - 0x77b0);
				v34 = *(int32_t *)(v15 - 0x77b4);
				*(int32_t *)v33 = *(int32_t *)v8 - v32;
				v35 = *(int32_t *)(g32 + 12);
				*(int32_t *)v34 = *(int32_t *)v7 - v35;
				v18 = g27;
				// branch -> 0xa7060
			} else {
				v18 = v26;
			}
		}
		// 0xa7060
		v27 = g30 + g35;
		if (*(char *)(v27 + 4) == -1) {
			// 0xa7080
			StartStand(v18, *(int32_t *)(v27 + 472));
			// branch -> 0xa708c
		} else {
			// 0xa7074
			function_a443c(v18, v27);
			// branch -> 0xa708c
		}
		// 0xa708c
		function_a2af4(g27);
		if (*(char *)g33 != 0) {
			// 0xa70a0
			function_cb9dc(*(int32_t *)(g30 + g35 + 156), 0, 0);
			result = 1;
			// branch -> 0xa70c8
		} else {
			result = 1;
		}
	} else {
		// 0xa70bc
		function_a45f8(g27);
		result = 0;
		// branch -> 0xa70c8
	}
	// 0xa70c8
	return result;
}

// Address range: 0xa70dc - 0xa7324
int32_t function_a70dc(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0xa70dc
	int32_t v2 = g10; // 0xa70e0
	int32_t v3 = g35; // 0xa70e8
	g36 = *(int32_t *)(g23 - 0x77a8);
	int32_t v4 = g33; // 0xa70f0
	int32_t v5 = g32; // 0xa70f4
	g32 = a1;
	if (a1 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		// 0xa7110
		if (random(3) == 0) {
			int32_t v6 = g32; // 0xa7128
			int32_t v7 = v6;  // 0xa713c
			if (v6 >= 4) {
				// 0xa7130
				g37 = v6;
				app_fatal(*(int32_t *)(g23 - 0x59d0));
				v7 = g32;
				// branch -> 0xa713c
			}
			int32_t v8 = 0x55ec * v7; // 0xa713c
			int32_t v9 = v8;          // r4
			int32_t v10 = g36;        // 0xa7140
			int32_t v11 = v10 + v8;   // 0xa7140
			int32_t v12 = v11 + 2656; // 0xa7144
			g35 = v12;
			int32_t result; // 0xa7320
			int32_t v13;    // 0xa71b8
			int32_t v14;    // 0xa71d4
			int32_t v15;    // 0xa7244
			int32_t v16;    // 0xa72b0
			int32_t v17;    // 0xa71b4
			int32_t *v18;   // 0xa71d8
			int32_t *v19;   // 0xa7244
			int32_t *v20;   // 0xa72b0
			int32_t v21;    // 0xa71d8
			int32_t v22;    // 0xa7244
			int32_t v23;    // 0xa72b0
			if (*(int32_t *)v12 != -1) {
				// 0xa7150
				if (*(char *)(v11 + 2838) == 1) {
					int32_t v24 = v11 + 2884;      // 0xa7160
					int32_t *v25 = (int32_t *)v24; // 0xa7164
					int32_t v26 = *v25;            // 0xa7164
					if (v26 == 255) {
						// 0xa7170
						// branch -> 0xa7304
						// 0xa7304
						g36 = v1;
						g10 = v2;
						g35 = v3;
						g33 = v4;
						g32 = v5;
						return 0;
					}
					// 0xa7178
					*v25 = v26 - 1;
					if (*(int32_t *)v24 == 0) {
						// 0xa718c
						function_8bce4(1, 4);
						*(int32_t *)g35 = -1;
						CalcPlrInv(g32, 1);
						result = 1;
						// branch -> 0xa7304
					} else {
						// 0xa7178
						// branch -> 0xa71b4
						// 0xa71b4
						v17 = g36 + v9;
						v13 = v17 + 3024;
						g33 = v13;
						if (*(int32_t *)v13 != -1) {
							// 0xa71c4
							if (*(char *)(v17 + 3206) == 1) {
								// 0xa71d4
								v14 = v17 + 3252;
								v18 = (int32_t *)v14;
								v21 = *v18;
								if (v21 == 255) {
									// 0xa71e4
									// branch -> 0xa7304
									// 0xa7304
									g36 = v1;
									g10 = v2;
									g35 = v3;
									g33 = v4;
									g32 = v5;
									return 0;
								}
								// 0xa71ec
								*v18 = v21 - 1;
								if (*(int32_t *)v14 == 0) {
									// 0xa7200
									function_8bce4(1, 5);
									*(int32_t *)g33 = -1;
									CalcPlrInv(g32, 1);
									result = 1;
									// branch -> 0xa7304
								} else {
									// 0xa7228
									if (*(int32_t *)g35 == -1) {
										// 0xa7234
										if (*(int32_t *)g33 == 5) {
											// 0xa7240
											v15 = v9 + g36 + 3252;
											v19 = (int32_t *)v15;
											v22 = *v19;
											if (v22 == 255) {
												// 0xa7250
												// branch -> 0xa7304
												// 0xa7304
												g36 = v1;
												g10 = v2;
												g35 = v3;
												g33 = v4;
												g32 = v5;
												return 0;
											}
											// 0xa7258
											*v19 = v22 - 1;
											if (*(int32_t *)v15 == 0) {
												// 0xa726c
												function_8bce4(1, 5);
												*(int32_t *)g33 = -1;
												CalcPlrInv(g32, 1);
												result = 1;
												// branch -> 0xa7304
											} else {
												// 0xa7294
												if (*(int32_t *)g33 == -1) {
													// 0xa72a0
													if (*(int32_t *)g35 == 5) {
														// 0xa72ac
														v16 = v9 + g36 + 2884;
														v20 = (int32_t *)v16;
														v23 = *v20;
														if (v23 == 255) {
															// 0xa72bc
															// branch -> 0xa7304
															// 0xa7304
															g36 = v1;
															g10 = v2;
															g35 = v3;
															g33 = v4;
															g32 = v5;
															return 0;
														}
														// 0xa72c4
														*v20 = v23 - 1;
														if (*(int32_t *)v16 == 0) {
															// 0xa72d8
															function_8bce4(1, 4);
															*(int32_t *)g35 = -1;
															CalcPlrInv(g32, 1);
															result = 1;
															// branch -> 0xa7304
														} else {
															// 0xa7300
															result = 0;
															// branch -> 0xa7304
														}
														// 0xa7304
														g36 = v1;
														g10 = v2;
														g35 = v3;
														g33 = v4;
														g32 = v5;
														return result;
													}
												}
												// 0xa7300
												result = 0;
												// branch -> 0xa7304
											}
											// 0xa7304
											g36 = v1;
											g10 = v2;
											g35 = v3;
											g33 = v4;
											g32 = v5;
											return result;
										}
									}
									// 0xa7294
									if (*(int32_t *)g33 == -1) {
										// 0xa72a0
										if (*(int32_t *)g35 == 5) {
											// 0xa72ac
											v16 = v9 + g36 + 2884;
											v20 = (int32_t *)v16;
											v23 = *v20;
											if (v23 == 255) {
												// 0xa72bc
												// branch -> 0xa7304
												// 0xa7304
												g36 = v1;
												g10 = v2;
												g35 = v3;
												g33 = v4;
												g32 = v5;
												return 0;
											}
											// 0xa72c4
											*v20 = v23 - 1;
											if (*(int32_t *)v16 == 0) {
												// 0xa72d8
												function_8bce4(1, 4);
												*(int32_t *)g35 = -1;
												CalcPlrInv(g32, 1);
												result = 1;
												// branch -> 0xa7304
											} else {
												// 0xa7300
												result = 0;
												// branch -> 0xa7304
											}
											// 0xa7304
											g36 = v1;
											g10 = v2;
											g35 = v3;
											g33 = v4;
											g32 = v5;
											return result;
										}
									}
									// 0xa7300
									result = 0;
									// branch -> 0xa7304
								}
								// 0xa7304
								g36 = v1;
								g10 = v2;
								g35 = v3;
								g33 = v4;
								g32 = v5;
								return result;
							}
						}
						// 0xa7228
						if (*(int32_t *)g35 == -1) {
							// 0xa7234
							if (*(int32_t *)g33 == 5) {
								// 0xa7240
								v15 = v9 + g36 + 3252;
								v19 = (int32_t *)v15;
								v22 = *v19;
								if (v22 == 255) {
									// 0xa7250
									// branch -> 0xa7304
									// 0xa7304
									g36 = v1;
									g10 = v2;
									g35 = v3;
									g33 = v4;
									g32 = v5;
									return 0;
								}
								// 0xa7258
								*v19 = v22 - 1;
								if (*(int32_t *)v15 == 0) {
									// 0xa726c
									function_8bce4(1, 5);
									*(int32_t *)g33 = -1;
									CalcPlrInv(g32, 1);
									result = 1;
									// branch -> 0xa7304
								} else {
									// 0xa7294
									if (*(int32_t *)g33 == -1) {
										// 0xa72a0
										if (*(int32_t *)g35 == 5) {
											// 0xa72ac
											v16 = v9 + g36 + 2884;
											v20 = (int32_t *)v16;
											v23 = *v20;
											if (v23 == 255) {
												// 0xa72bc
												// branch -> 0xa7304
												// 0xa7304
												g36 = v1;
												g10 = v2;
												g35 = v3;
												g33 = v4;
												g32 = v5;
												return 0;
											}
											// 0xa72c4
											*v20 = v23 - 1;
											if (*(int32_t *)v16 == 0) {
												// 0xa72d8
												function_8bce4(1, 4);
												*(int32_t *)g35 = -1;
												CalcPlrInv(g32, 1);
												result = 1;
												// branch -> 0xa7304
											} else {
												// 0xa7300
												result = 0;
												// branch -> 0xa7304
											}
											// 0xa7304
											g36 = v1;
											g10 = v2;
											g35 = v3;
											g33 = v4;
											g32 = v5;
											return result;
										}
									}
									// 0xa7300
									result = 0;
									// branch -> 0xa7304
								}
								// 0xa7304
								g36 = v1;
								g10 = v2;
								g35 = v3;
								g33 = v4;
								g32 = v5;
								return result;
							}
						}
						// 0xa7294
						if (*(int32_t *)g33 == -1) {
							// 0xa72a0
							if (*(int32_t *)g35 == 5) {
								// 0xa72ac
								v16 = v9 + g36 + 2884;
								v20 = (int32_t *)v16;
								v23 = *v20;
								if (v23 == 255) {
									// 0xa72bc
									// branch -> 0xa7304
									// 0xa7304
									g36 = v1;
									g10 = v2;
									g35 = v3;
									g33 = v4;
									g32 = v5;
									return 0;
								}
								// 0xa72c4
								*v20 = v23 - 1;
								if (*(int32_t *)v16 == 0) {
									// 0xa72d8
									function_8bce4(1, 4);
									*(int32_t *)g35 = -1;
									CalcPlrInv(g32, 1);
									result = 1;
									// branch -> 0xa7304
								} else {
									// 0xa7300
									result = 0;
									// branch -> 0xa7304
								}
								// 0xa7304
								g36 = v1;
								g10 = v2;
								g35 = v3;
								g33 = v4;
								g32 = v5;
								return result;
							}
						}
						// 0xa7300
						result = 0;
						// branch -> 0xa7304
					}
					// 0xa7304
					g36 = v1;
					g10 = v2;
					g35 = v3;
					g33 = v4;
					g32 = v5;
					return result;
				}
			}
			// 0xa71b4
			v17 = v10 + v8;
			v13 = v17 + 3024;
			g33 = v13;
			if (*(int32_t *)v13 != -1) {
				// 0xa71c4
				if (*(char *)(v17 + 3206) == 1) {
					// 0xa71d4
					v14 = v17 + 3252;
					v18 = (int32_t *)v14;
					v21 = *v18;
					if (v21 == 255) {
						// 0xa71e4
						// branch -> 0xa7304
						// 0xa7304
						g36 = v1;
						g10 = v2;
						g35 = v3;
						g33 = v4;
						g32 = v5;
						return 0;
					}
					// 0xa71ec
					*v18 = v21 - 1;
					if (*(int32_t *)v14 == 0) {
						// 0xa7200
						function_8bce4(1, 5);
						*(int32_t *)g33 = -1;
						CalcPlrInv(g32, 1);
						result = 1;
						// branch -> 0xa7304
					} else {
						// 0xa7228
						if (*(int32_t *)g35 == -1) {
							// 0xa7234
							if (*(int32_t *)g33 == 5) {
								// 0xa7240
								v15 = v9 + g36 + 3252;
								v19 = (int32_t *)v15;
								v22 = *v19;
								if (v22 == 255) {
									// 0xa7250
									// branch -> 0xa7304
									// 0xa7304
									g36 = v1;
									g10 = v2;
									g35 = v3;
									g33 = v4;
									g32 = v5;
									return 0;
								}
								// 0xa7258
								*v19 = v22 - 1;
								if (*(int32_t *)v15 == 0) {
									// 0xa726c
									function_8bce4(1, 5);
									*(int32_t *)g33 = -1;
									CalcPlrInv(g32, 1);
									result = 1;
									// branch -> 0xa7304
								} else {
									// 0xa7294
									if (*(int32_t *)g33 == -1) {
										// 0xa72a0
										if (*(int32_t *)g35 == 5) {
											// 0xa72ac
											v16 = v9 + g36 + 2884;
											v20 = (int32_t *)v16;
											v23 = *v20;
											if (v23 == 255) {
												// 0xa72bc
												// branch -> 0xa7304
												// 0xa7304
												g36 = v1;
												g10 = v2;
												g35 = v3;
												g33 = v4;
												g32 = v5;
												return 0;
											}
											// 0xa72c4
											*v20 = v23 - 1;
											if (*(int32_t *)v16 == 0) {
												// 0xa72d8
												function_8bce4(1, 4);
												*(int32_t *)g35 = -1;
												CalcPlrInv(g32, 1);
												result = 1;
												// branch -> 0xa7304
											} else {
												// 0xa7300
												result = 0;
												// branch -> 0xa7304
											}
											// 0xa7304
											g36 = v1;
											g10 = v2;
											g35 = v3;
											g33 = v4;
											g32 = v5;
											return result;
										}
									}
									// 0xa7300
									result = 0;
									// branch -> 0xa7304
								}
								// 0xa7304
								g36 = v1;
								g10 = v2;
								g35 = v3;
								g33 = v4;
								g32 = v5;
								return result;
							}
						}
						// 0xa7294
						if (*(int32_t *)g33 == -1) {
							// 0xa72a0
							if (*(int32_t *)g35 == 5) {
								// 0xa72ac
								v16 = v9 + g36 + 2884;
								v20 = (int32_t *)v16;
								v23 = *v20;
								if (v23 == 255) {
									// 0xa72bc
									// branch -> 0xa7304
									// 0xa7304
									g36 = v1;
									g10 = v2;
									g35 = v3;
									g33 = v4;
									g32 = v5;
									return 0;
								}
								// 0xa72c4
								*v20 = v23 - 1;
								if (*(int32_t *)v16 == 0) {
									// 0xa72d8
									function_8bce4(1, 4);
									*(int32_t *)g35 = -1;
									CalcPlrInv(g32, 1);
									result = 1;
									// branch -> 0xa7304
								} else {
									// 0xa7300
									result = 0;
									// branch -> 0xa7304
								}
								// 0xa7304
								g36 = v1;
								g10 = v2;
								g35 = v3;
								g33 = v4;
								g32 = v5;
								return result;
							}
						}
						// 0xa7300
						result = 0;
						// branch -> 0xa7304
					}
					// 0xa7304
					g36 = v1;
					g10 = v2;
					g35 = v3;
					g33 = v4;
					g32 = v5;
					return result;
				}
			}
			// 0xa7228
			if (*(int32_t *)g35 == -1) {
				// 0xa7234
				if (*(int32_t *)g33 == 5) {
					// 0xa7240
					v15 = v9 + g36 + 3252;
					v19 = (int32_t *)v15;
					v22 = *v19;
					if (v22 == 255) {
						// 0xa7250
						// branch -> 0xa7304
					} else {
						// 0xa7258
						*v19 = v22 - 1;
						if (*(int32_t *)v15 == 0) {
							// 0xa726c
							function_8bce4(1, 5);
							*(int32_t *)g33 = -1;
							v9 = 1;
							CalcPlrInv(g32, 1);
							// branch -> 0xa7304
						} else {
							// 0xa7294
							if (*(int32_t *)g33 == -1) {
								// 0xa72a0
								if (*(int32_t *)g35 == 5) {
									// 0xa72ac
									v16 = v9 + g36 + 2884;
									v20 = (int32_t *)v16;
									v23 = *v20;
									v9 = v16;
									if (v23 != 255) {
										// 0xa72c4
										*v20 = v23 - 1;
										if (*(int32_t *)v9 == 0) {
											// 0xa72d8
											function_8bce4(1, 4);
											*(int32_t *)g35 = -1;
											CalcPlrInv(g32, 1);
											result = 1;
											// branch -> 0xa7304
										} else {
											// 0xa7300
											result = 0;
											// branch -> 0xa7304
										}
										// 0xa7304
										g36 = v1;
										g10 = v2;
										g35 = v3;
										g33 = v4;
										g32 = v5;
										return result;
									}
									// 0xa72bc
									// branch -> 0xa7304
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0xa7300
							// branch -> 0xa7304
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0xa7294
			if (*(int32_t *)g33 == -1) {
				// 0xa72a0
				if (*(int32_t *)g35 == 5) {
					// 0xa72ac
					v16 = v9 + g36 + 2884;
					v20 = (int32_t *)v16;
					v23 = *v20;
					if (v23 == 255) {
						// 0xa72bc
						// branch -> 0xa7304
					} else {
						// 0xa72c4
						*v20 = v23 - 1;
						if (*(int32_t *)v16 == 0) {
							// 0xa72d8
							function_8bce4(1, 4);
							*(int32_t *)g35 = -1;
							CalcPlrInv(g32, 1);
							// branch -> 0xa7304
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0xa7300
			// branch -> 0xa7304
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
	// 0xa7120
	// branch -> 0xa7304
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0xa7324 - 0xa7894
int32_t function_a7324(int32_t a1)
{
	int32_t v1 = g10; // 0xa7328
	int32_t v2 = g37; // 0xa732c
	g36 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0xa7330
	g30 = v3;
	g31 = *(int32_t *)(g23 - 0x76f0);
	g35 = a1;
	g32 = *(int32_t *)(g23 - 0x77a8);
	int32_t v4 = v2; // 0xa735c
	if (v2 >= 200) {
		// 0xa7350
		app_fatal(*(int32_t *)(g23 - 0x59d4));
		v3 = g30;
		v4 = g36;
		// branch -> 0xa735c
	}
	int32_t v5 = 232 * v4; // 0xa735c
	g29 = v5;
	int32_t v6 = v5 + v3;  // 0xa7360
	int32_t v7 = v6 + 152; // 0xa7364
	g24 = v7;
	if (*(int32_t *)v7 > 63) {
		// 0xa7378
		if (*(char *)*(int32_t *)(v6 + 224) == 32) {
			// 0xa738c
			if (*(char *)(v6 + 8) == 2) {
				// 0xa7398
				// branch -> 0xa7880
				// 0xa7880
				g10 = v1;
				return 0;
			}
		}
		int32_t v8 = v6 + 4; // 0xa73a4
		g28 = v8;
		if (*(int32_t *)v8 != 14) {
			int32_t v9 = g35; // 0xa73b8
			if (v9 >= 4) {
				// 0xa73c0
				g37 = v9;
				app_fatal(*(int32_t *)(g23 - 0x59d8));
				// branch -> 0xa73cc
			}
			// 0xa73cc
			g22 = 0;
			g37 = 100;
			int32_t v10 = random(4);
			if (*(int32_t *)g28 == 15) {
				// 0xa73ec
				v10 = 0;
				// branch -> 0xa73f0
			}
			// 0xa73f0
			g33 = v10;
			int32_t v11 = 0x55ec * g35; // 0xa73f0
			g27 = v11;
			int32_t v12 = (int32_t) * (char *)(g29 + g30 + 206); // 0xa73f8
			int32_t v13 = g32 + v11;                             // 0xa73fc
			int32_t v14 = v13 + 436;                             // 0xa7400
			g25 = v14;
			int32_t v15 = v13 + 348; // 0xa7404
			g26 = v15;
			unsigned char v16 = *(char *)v14;                                     // 0xa7408
			uint32_t v17 = *(int32_t *)(v13 + 368);                               // 0xa7418
			int32_t v18 = (int32_t)v16 + 50 - (v12 - *(int32_t *)(v13 + 0x5578)); // 0xa7428
			int32_t v19 = (v17 / 2 | v17 & -0x80000000) + v18;                    // 0xa7430
			int32_t v20 = *(char *)v15 == 0 ? v19 + 20 : v19;                     // 0xa7430
			int32_t v21 = *(int32_t *)(v13 + 0x5554) + v20;                       // 0xa7444
			int32_t v22 = v21;
			int32_t v23 = v21; // 0xa7454
			if (v21 <= 4) {
				// 0xa7450
				v22 = 5;
				v23 = 5;
				// branch -> 0xa7454
			}
			if (v23 >= 96) {
				// 0xa745c
				v22 = 95;
				// branch -> 0xa7460
			}
			// 0xa7460
			g20 = v22;
			int32_t v24;    // bp-72
			int32_t result; // 0xa7890
			if (function_875c8(g36, &v24) == 0) {
				// 0xa747c
				int32_t v25; // 0xa787c
				if (g33 < g20) {
					int32_t v26 = g27 + g32; // 0xa7484
					g33 = v26;
					int32_t v27 = *(int32_t *)(v26 + 0x5544); // 0xa7488
					g37 = 1 - v27 + *(int32_t *)(v26 + 0x5548);
					int32_t v28 = g33;                                                                     // 0xa74a0
					int32_t v29 = v27 + random(5);                                                         // 0xa74a4
					int32_t v30 = *(int32_t *)(v28 + 0x555c);                                              // 0xa74bc
					uint64_t v31 = 0x51eb851f * (int64_t)(v29 * *(int32_t *)(v28 + 0x5550));               // 0xa74c0
					int32_t v32 = (int32_t)(v31 / 0x100000000) >> 31;                                      // 0xa74c4
					int32_t v33 = (v32 & -0x8000000 | (int32_t)(v31 / 0x2000000000)) + (int32_t)(v32 < 0); // 0xa74cc
					int32_t v34 = *(int32_t *)(v28 + 388) + v29 + v33 + v30;                               // r19
					if (*(char *)g26 == 0) {
						// 0xa74e4
						g37 = 100;
						if (random(6) < (int32_t) * (char *)g25) {
							// 0xa7500
							v34 *= 2;
							// branch -> 0xa7504
						}
					}
					int32_t v35 = g27 + g32;                // 0xa7504
					int32_t v36 = *(int32_t *)(v35 + 2656); // 0xa7508
					int32_t v37;                            // r3
					uint32_t v38;                           // 0xa7580
					uint32_t v39;                           // 0xa7590
					uint32_t v40;                           // 0xa75a4
					int32_t v41;                            // 0xa75ac
					uint32_t v42;                           // 0xa75b4
					int32_t v43;                            // 0xa75c0
					int32_t v44;                            // 0xa75e4
					int32_t *v45;                           // 0xa75f4
					int32_t v46;                            // 0xa76c4
					int32_t v47;                            // 0xa76d8
					int32_t v48;                            // 0xa7774
					int32_t v49;                            // 0xa7788
					int32_t v50;                            // 0xa7610
					int32_t v51;                            // 0xa7614
					int32_t *v52;                           // 0xa761c
					int32_t *v53;                           // 0xa762c
					int32_t v54;                            // 0xa7640
					int32_t *v55;                           // 0xa7648
					int32_t *v56;                           // 0xa7654
					int32_t v57;                            // 0xa7670
					int32_t v58;                            // 0xa76c8
					int32_t v59;                            // 0xa76cc
					int32_t *v60;                           // 0xa76d4
					int32_t *v61;                           // 0xa76e0
					int32_t v62;                            // 0xa76f4
					int32_t *v63;                           // 0xa76fc
					int32_t *v64;                           // 0xa7708
					int32_t v65;                            // 0xa7728
					int32_t v66;                            // 0xa7778
					int32_t v67;                            // 0xa777c
					int32_t *v68;                           // 0xa7784
					int32_t *v69;                           // 0xa7790
					int32_t v70;                            // 0xa77a4
					int32_t *v71;                           // 0xa77ac
					int32_t *v72;                           // 0xa77b8
					int32_t v73;                            // 0xa77d4
					int32_t *v74;                           // 0xa77e4
					int32_t v75;                            // 0xa7830
					char v76;                               // 0xa754c
					int32_t v77;                            // 0xa75c0
					int32_t v78;                            // 0xa7630
					int32_t v79;                            // 0xa7658
					int32_t v80;                            // 0xa76e4
					int32_t v81;                            // 0xa770c
					int32_t v82;                            // 0xa7794
					int32_t v83;                            // 0xa77bc
					uint64_t v84;                           // 0xa7698
					uint64_t v85;                           // 0xa76bc
					uint64_t v86;                           // 0xa7748
					uint64_t v87;                           // 0xa776c
					int32_t v88;                            // 0xa769c
					int32_t v89;                            // 0xa76c0
					int32_t v90;                            // 0xa774c
					int32_t v91;                            // 0xa7770
					if (v36 != 1) {
						// 0xa7518
						if (*(int32_t *)(v35 + 3024) != 1) {
							// 0xa7528
							if (v36 != 4) {
								// 0xa7530
								if (*(int32_t *)(v35 + 3024) != 4) {
									v41 = -1;
									// 0xa7544
									v76 = *(char *)(*(int32_t *)(g29 + g30 + 228) + 114);
									v37 = v76;
									if (v76 == 1) {
										// 0xa75bc
										v43 = v35 + 0x5568;
										v77 = *(int32_t *)v43;
										g25 = v43;
										if (__asm_rlwinm_(v77, 0, 1, 1) != 0) {
											// 0xa75cc
											if (0x1000000 * v37 == 0x1000000) {
												// 0xa75d8
												v34 *= 3;
												// branch -> 0xa75e0
											}
										}
										// 0xa75e0
										v44 = 64 * v34;
										g22 = v44;
										if (g35 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
											// 0xa75f4
											v45 = (int32_t *)g24;
											*v45 = *v45 - v44;
											// branch -> 0xa7600
										}
										// 0xa7600
										if (__asm_rlwinm_(v77, 0, 30, 30) != 0) {
											// 0xa7608
											g37 = g22 / 8;
											v50 = random(7);
											v51 = g27 + g32;
											g21 = v50;
											v52 = (int32_t *)(v51 + 404);
											*v52 = *v52 + v50;
											v53 = (int32_t *)(v51 + 404);
											v78 = *(int32_t *)(v51 + 408);
											if (*v53 > v78) {
												// 0xa763c
												*v53 = v78;
												// branch -> 0xa7640
											}
											// 0xa7640
											v54 = g27 + g32;
											v55 = (int32_t *)(v54 + 396);
											*v55 = g21 + *v55;
											v56 = (int32_t *)(v54 + 396);
											v79 = *(int32_t *)(v54 + 400);
											if (*v56 > v79) {
												// 0xa7664
												*v56 = v79;
												// branch -> 0xa7668
											}
											// 0xa7668
											*(int32_t *)g31 = 1;
											// branch -> 0xa7670
										}
										// 0xa7670
										v57 = *(int32_t *)g25;
										if (__asm_rlwinm_(v57, 0, 17, 18) != 0) {
											// 0xa767c
											if (__asm_rlwinm_(v57, 0, 4, 4) == 0) {
												// 0xa7684
												if (__asm_rlwinm_(v57, 0, 18, 18) != 0) {
													// 0xa768c
													v84 = 0x51eb851f * (int64_t)(3 * g22);
													v88 = (int32_t)(v84 / 0x100000000) >> 31;
													g21 = (v88 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v88 < 0);
													// branch -> 0xa76a8
												}
												// 0xa76a8
												if (__asm_rlwinm_(v57, 0, 17, 17) == 0) {
													// 0xa76a8
													v47 = g21;
													// branch -> 0xa76cc
												} else {
													// 0xa76b0
													v85 = 0x51eb851f * (int64_t)(5 * g22);
													v89 = (int32_t)(v85 / 0x100000000) >> 31;
													v46 = v89 < 0;
													v58 = (v89 & -0x8000000 | (int32_t)(v85 / 0x2000000000)) + v46;
													g21 = v58;
													v47 = v58;
													// branch -> 0xa76cc
												}
												// 0xa76cc
												v59 = g27 + g32;
												v60 = (int32_t *)(v59 + 424);
												*v60 = *v60 + v47;
												v61 = (int32_t *)(v59 + 424);
												v80 = *(int32_t *)(v59 + 428);
												if (*v61 > v80) {
													// 0xa76f0
													*v61 = v80;
													// branch -> 0xa76f4
												}
												// 0xa76f4
												v62 = g27 + g32;
												v63 = (int32_t *)(v62 + 416);
												*v63 = g21 + *v63;
												v64 = (int32_t *)(v62 + 416);
												v81 = *(int32_t *)(v62 + 420);
												if (*v64 > v81) {
													// 0xa7718
													*v64 = v81;
													// branch -> 0xa771c
												}
												// 0xa771c
												*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
												// branch -> 0xa7728
											}
										}
										// 0xa7728
										v65 = *(int32_t *)g25;
										if (__asm_rlwinm_(v65, 0, 15, 16) != 0) {
											// 0xa7734
											if (__asm_rlwinm_(v65, 0, 16, 16) != 0) {
												// 0xa773c
												v86 = 0x51eb851f * (int64_t)(3 * g22);
												v90 = (int32_t)(v86 / 0x100000000) >> 31;
												g21 = (v90 & -0x8000000 | (int32_t)(v86 / 0x2000000000)) + (int32_t)(v90 < 0);
												// branch -> 0xa7758
											}
											// 0xa7758
											if (__asm_rlwinm_(v65, 0, 15, 15) == 0) {
												// 0xa7758
												v49 = g21;
												// branch -> 0xa777c
											} else {
												// 0xa7760
												v87 = 0x51eb851f * (int64_t)(5 * g22);
												v91 = (int32_t)(v87 / 0x100000000) >> 31;
												v48 = v91 < 0;
												v66 = (v91 & -0x8000000 | (int32_t)(v87 / 0x2000000000)) + v48;
												g21 = v66;
												v49 = v66;
												// branch -> 0xa777c
											}
											// 0xa777c
											v67 = g27 + g32;
											v68 = (int32_t *)(v67 + 404);
											*v68 = *v68 + v49;
											v69 = (int32_t *)(v67 + 404);
											v82 = *(int32_t *)(v67 + 408);
											if (*v69 > v82) {
												// 0xa77a0
												*v69 = v82;
												// branch -> 0xa77a4
											}
											// 0xa77a4
											v70 = g27 + g32;
											v71 = (int32_t *)(v70 + 396);
											*v71 = g21 + *v71;
											v72 = (int32_t *)(v70 + 396);
											v83 = *(int32_t *)(v70 + 400);
											if (*v72 > v83) {
												// 0xa77c8
												*v72 = v83;
												// branch -> 0xa77cc
											}
											// 0xa77cc
											*(int32_t *)g31 = 1;
											// branch -> 0xa77d4
										}
										// 0xa77d4
										v73 = *(int32_t *)g25;
										if (__asm_rlwinm_(v73, 0, 23, 23) != 0) {
											// 0xa77e0
											v74 = (int32_t *)(g29 + g30 + 160);
											*v74 = *v74 | 8;
											// branch -> 0xa77f0
										}
										// 0xa77f0
										v75 = *(int32_t *)g28;
										if (*(int32_t *)g24 <= 63) {
											// 0xa77fc
											M_StartKill(g36, g35);
											if (v75 == 15) {
												// 0xa7808
												*(int32_t *)g28 = 15;
												// branch -> 0xa7878
											}
											// 0xa7878
											// branch -> 0xa787c
											// 0xa787c
											// branch -> 0xa7880
											// 0xa7880
											g10 = v1;
											return 1;
										}
										// 0xa7830
										if (v75 == 15) {
											// 0xa783c
											g38 = g22;
											function_7cbac(g36, g35);
											*(int32_t *)g28 = 15;
											// branch -> 0xa7878
										} else {
											// 0xa7858
											if (__asm_rlwinm_(v73, 0, 20, 20) != 0) {
												// 0xa7860
												function_7ca88(g36);
												// branch -> 0xa7868
											}
											// 0xa7868
											g38 = g22;
											function_7cbac(g36, g35);
											// branch -> 0xa7878
										}
										// 0xa7878
										// branch -> 0xa787c
										// 0xa787c
										// branch -> 0xa7880
										// 0xa7880
										g10 = v1;
										return 1;
									}
									// 0xa755c
									if (v76 > 1) {
										// 0xa756c
										if (v76 == 2) {
											// 0xa759c
											if (v41 == 4) {
												// 0xa75a4
												v40 = v34;
												v34 = v40 - (v40 / 2 | v40 & -0x80000000);
												// branch -> 0xa75ac
											}
											// 0xa75ac
											if (v41 == 1) {
												// 0xa75b4
												v42 = v34;
												v34 = (v42 / 2 | v42 & -0x80000000) + v42;
												// branch -> 0xa75bc
											}
										}
									} else {
										// 0xa7560
										if (v76 > -1) {
											// 0xa7578
											if (v41 == 1) {
												// 0xa7588
												v38 = v34;
												v34 = v38 - (v38 / 2 | v38 & -0x80000000);
												// branch -> 0xa75bc
											} else {
												// 0xa7588
												if (v41 == 4) {
													// 0xa7590
													v39 = v34;
													v34 = (v39 / 2 | v39 & -0x80000000) + v39;
													// branch -> 0xa75bc
												}
											}
											// 0xa75bc
											v43 = v35 + 0x5568;
											v77 = *(int32_t *)v43;
											g25 = v43;
											if (__asm_rlwinm_(v77, 0, 1, 1) != 0) {
												// 0xa75cc
												if (0x1000000 * v37 == 0x1000000) {
													// 0xa75d8
													v34 *= 3;
													// branch -> 0xa75e0
												}
											}
											// 0xa75e0
											v44 = 64 * v34;
											g22 = v44;
											if (g35 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
												// 0xa75f4
												v45 = (int32_t *)g24;
												*v45 = *v45 - v44;
												// branch -> 0xa7600
											}
											// 0xa7600
											if (__asm_rlwinm_(v77, 0, 30, 30) != 0) {
												// 0xa7608
												g37 = g22 / 8;
												v50 = random(7);
												v51 = g27 + g32;
												g21 = v50;
												v52 = (int32_t *)(v51 + 404);
												*v52 = *v52 + v50;
												v53 = (int32_t *)(v51 + 404);
												v78 = *(int32_t *)(v51 + 408);
												if (*v53 > v78) {
													// 0xa763c
													*v53 = v78;
													// branch -> 0xa7640
												}
												// 0xa7640
												v54 = g27 + g32;
												v55 = (int32_t *)(v54 + 396);
												*v55 = g21 + *v55;
												v56 = (int32_t *)(v54 + 396);
												v79 = *(int32_t *)(v54 + 400);
												if (*v56 > v79) {
													// 0xa7664
													*v56 = v79;
													// branch -> 0xa7668
												}
												// 0xa7668
												*(int32_t *)g31 = 1;
												// branch -> 0xa7670
											}
											// 0xa7670
											v57 = *(int32_t *)g25;
											if (__asm_rlwinm_(v57, 0, 17, 18) != 0) {
												// 0xa767c
												if (__asm_rlwinm_(v57, 0, 4, 4) == 0) {
													// 0xa7684
													if (__asm_rlwinm_(v57, 0, 18, 18) != 0) {
														// 0xa768c
														v84 = 0x51eb851f * (int64_t)(3 * g22);
														v88 = (int32_t)(v84 / 0x100000000) >> 31;
														g21 = (v88 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v88 < 0);
														// branch -> 0xa76a8
													}
													// 0xa76a8
													if (__asm_rlwinm_(v57, 0, 17, 17) == 0) {
														// 0xa76a8
														v47 = g21;
														// branch -> 0xa76cc
													} else {
														// 0xa76b0
														v85 = 0x51eb851f * (int64_t)(5 * g22);
														v89 = (int32_t)(v85 / 0x100000000) >> 31;
														v46 = v89 < 0;
														v58 = (v89 & -0x8000000 | (int32_t)(v85 / 0x2000000000)) + v46;
														g21 = v58;
														v47 = v58;
														// branch -> 0xa76cc
													}
													// 0xa76cc
													v59 = g27 + g32;
													v60 = (int32_t *)(v59 + 424);
													*v60 = *v60 + v47;
													v61 = (int32_t *)(v59 + 424);
													v80 = *(int32_t *)(v59 + 428);
													if (*v61 > v80) {
														// 0xa76f0
														*v61 = v80;
														// branch -> 0xa76f4
													}
													// 0xa76f4
													v62 = g27 + g32;
													v63 = (int32_t *)(v62 + 416);
													*v63 = g21 + *v63;
													v64 = (int32_t *)(v62 + 416);
													v81 = *(int32_t *)(v62 + 420);
													if (*v64 > v81) {
														// 0xa7718
														*v64 = v81;
														// branch -> 0xa771c
													}
													// 0xa771c
													*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
													// branch -> 0xa7728
												}
											}
											// 0xa7728
											v65 = *(int32_t *)g25;
											if (__asm_rlwinm_(v65, 0, 15, 16) != 0) {
												// 0xa7734
												if (__asm_rlwinm_(v65, 0, 16, 16) != 0) {
													// 0xa773c
													v86 = 0x51eb851f * (int64_t)(3 * g22);
													v90 = (int32_t)(v86 / 0x100000000) >> 31;
													g21 = (v90 & -0x8000000 | (int32_t)(v86 / 0x2000000000)) + (int32_t)(v90 < 0);
													// branch -> 0xa7758
												}
												// 0xa7758
												if (__asm_rlwinm_(v65, 0, 15, 15) == 0) {
													// 0xa7758
													v49 = g21;
													// branch -> 0xa777c
												} else {
													// 0xa7760
													v87 = 0x51eb851f * (int64_t)(5 * g22);
													v91 = (int32_t)(v87 / 0x100000000) >> 31;
													v48 = v91 < 0;
													v66 = (v91 & -0x8000000 | (int32_t)(v87 / 0x2000000000)) + v48;
													g21 = v66;
													v49 = v66;
													// branch -> 0xa777c
												}
												// 0xa777c
												v67 = g27 + g32;
												v68 = (int32_t *)(v67 + 404);
												*v68 = *v68 + v49;
												v69 = (int32_t *)(v67 + 404);
												v82 = *(int32_t *)(v67 + 408);
												if (*v69 > v82) {
													// 0xa77a0
													*v69 = v82;
													// branch -> 0xa77a4
												}
												// 0xa77a4
												v70 = g27 + g32;
												v71 = (int32_t *)(v70 + 396);
												*v71 = g21 + *v71;
												v72 = (int32_t *)(v70 + 396);
												v83 = *(int32_t *)(v70 + 400);
												if (*v72 > v83) {
													// 0xa77c8
													*v72 = v83;
													// branch -> 0xa77cc
												}
												// 0xa77cc
												*(int32_t *)g31 = 1;
												// branch -> 0xa77d4
											}
											// 0xa77d4
											v73 = *(int32_t *)g25;
											if (__asm_rlwinm_(v73, 0, 23, 23) != 0) {
												// 0xa77e0
												v74 = (int32_t *)(g29 + g30 + 160);
												*v74 = *v74 | 8;
												// branch -> 0xa77f0
											}
											// 0xa77f0
											v75 = *(int32_t *)g28;
											if (*(int32_t *)g24 <= 63) {
												// 0xa77fc
												M_StartKill(g36, g35);
												if (v75 == 15) {
													// 0xa7808
													*(int32_t *)g28 = 15;
													// branch -> 0xa7878
												}
												// 0xa7878
												// branch -> 0xa787c
												// 0xa787c
												// branch -> 0xa7880
												// 0xa7880
												g10 = v1;
												return 1;
											}
											// 0xa7830
											if (v75 == 15) {
												// 0xa783c
												g38 = g22;
												function_7cbac(g36, g35);
												*(int32_t *)g28 = 15;
												// branch -> 0xa7878
											} else {
												// 0xa7858
												if (__asm_rlwinm_(v73, 0, 20, 20) != 0) {
													// 0xa7860
													function_7ca88(g36);
													// branch -> 0xa7868
												}
												// 0xa7868
												g38 = g22;
												function_7cbac(g36, g35);
												// branch -> 0xa7878
											}
											// 0xa7878
											// branch -> 0xa787c
											// 0xa787c
											// branch -> 0xa7880
											// 0xa7880
											g10 = v1;
											return 1;
										}
									}
									// 0xa75bc
									v43 = v35 + 0x5568;
									v77 = *(int32_t *)v43;
									g25 = v43;
									if (__asm_rlwinm_(v77, 0, 1, 1) != 0) {
										// 0xa75cc
										if (0x1000000 * v37 == 0x1000000) {
											// 0xa75d8
											v34 *= 3;
											// branch -> 0xa75e0
										}
									}
									// 0xa75e0
									v44 = 64 * v34;
									g22 = v44;
									if (g35 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
										// 0xa75f4
										v45 = (int32_t *)g24;
										*v45 = *v45 - v44;
										// branch -> 0xa7600
									}
									// 0xa7600
									if (__asm_rlwinm_(v77, 0, 30, 30) != 0) {
										// 0xa7608
										g37 = g22 / 8;
										v50 = random(7);
										v51 = g27 + g32;
										g21 = v50;
										v52 = (int32_t *)(v51 + 404);
										*v52 = *v52 + v50;
										v53 = (int32_t *)(v51 + 404);
										v78 = *(int32_t *)(v51 + 408);
										if (*v53 > v78) {
											// 0xa763c
											*v53 = v78;
											// branch -> 0xa7640
										}
										// 0xa7640
										v54 = g27 + g32;
										v55 = (int32_t *)(v54 + 396);
										*v55 = g21 + *v55;
										v56 = (int32_t *)(v54 + 396);
										v79 = *(int32_t *)(v54 + 400);
										if (*v56 > v79) {
											// 0xa7664
											*v56 = v79;
											// branch -> 0xa7668
										}
										// 0xa7668
										*(int32_t *)g31 = 1;
										// branch -> 0xa7670
									}
									// 0xa7670
									v57 = *(int32_t *)g25;
									if (__asm_rlwinm_(v57, 0, 17, 18) != 0) {
										// 0xa767c
										if (__asm_rlwinm_(v57, 0, 4, 4) == 0) {
											// 0xa7684
											if (__asm_rlwinm_(v57, 0, 18, 18) != 0) {
												// 0xa768c
												v84 = 0x51eb851f * (int64_t)(3 * g22);
												v88 = (int32_t)(v84 / 0x100000000) >> 31;
												g21 = (v88 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v88 < 0);
												// branch -> 0xa76a8
											}
											// 0xa76a8
											if (__asm_rlwinm_(v57, 0, 17, 17) == 0) {
												// 0xa76a8
												v47 = g21;
												// branch -> 0xa76cc
											} else {
												// 0xa76b0
												v85 = 0x51eb851f * (int64_t)(5 * g22);
												v89 = (int32_t)(v85 / 0x100000000) >> 31;
												v46 = v89 < 0;
												v58 = (v89 & -0x8000000 | (int32_t)(v85 / 0x2000000000)) + v46;
												g21 = v58;
												v47 = v58;
												// branch -> 0xa76cc
											}
											// 0xa76cc
											v59 = g27 + g32;
											v60 = (int32_t *)(v59 + 424);
											*v60 = *v60 + v47;
											v61 = (int32_t *)(v59 + 424);
											v80 = *(int32_t *)(v59 + 428);
											if (*v61 > v80) {
												// 0xa76f0
												*v61 = v80;
												// branch -> 0xa76f4
											}
											// 0xa76f4
											v62 = g27 + g32;
											v63 = (int32_t *)(v62 + 416);
											*v63 = g21 + *v63;
											v64 = (int32_t *)(v62 + 416);
											v81 = *(int32_t *)(v62 + 420);
											if (*v64 > v81) {
												// 0xa7718
												*v64 = v81;
												// branch -> 0xa771c
											}
											// 0xa771c
											*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
											// branch -> 0xa7728
										}
									}
									// 0xa7728
									v65 = *(int32_t *)g25;
									if (__asm_rlwinm_(v65, 0, 15, 16) != 0) {
										// 0xa7734
										if (__asm_rlwinm_(v65, 0, 16, 16) != 0) {
											// 0xa773c
											v86 = 0x51eb851f * (int64_t)(3 * g22);
											v90 = (int32_t)(v86 / 0x100000000) >> 31;
											g21 = (v90 & -0x8000000 | (int32_t)(v86 / 0x2000000000)) + (int32_t)(v90 < 0);
											// branch -> 0xa7758
										}
										// 0xa7758
										if (__asm_rlwinm_(v65, 0, 15, 15) == 0) {
											// 0xa7758
											v49 = g21;
											// branch -> 0xa777c
										} else {
											// 0xa7760
											v87 = 0x51eb851f * (int64_t)(5 * g22);
											v91 = (int32_t)(v87 / 0x100000000) >> 31;
											v48 = v91 < 0;
											v66 = (v91 & -0x8000000 | (int32_t)(v87 / 0x2000000000)) + v48;
											g21 = v66;
											v49 = v66;
											// branch -> 0xa777c
										}
										// 0xa777c
										v67 = g27 + g32;
										v68 = (int32_t *)(v67 + 404);
										*v68 = *v68 + v49;
										v69 = (int32_t *)(v67 + 404);
										v82 = *(int32_t *)(v67 + 408);
										if (*v69 > v82) {
											// 0xa77a0
											*v69 = v82;
											// branch -> 0xa77a4
										}
										// 0xa77a4
										v70 = g27 + g32;
										v71 = (int32_t *)(v70 + 396);
										*v71 = g21 + *v71;
										v72 = (int32_t *)(v70 + 396);
										v83 = *(int32_t *)(v70 + 400);
										if (*v72 > v83) {
											// 0xa77c8
											*v72 = v83;
											// branch -> 0xa77cc
										}
										// 0xa77cc
										*(int32_t *)g31 = 1;
										// branch -> 0xa77d4
									}
									// 0xa77d4
									v73 = *(int32_t *)g25;
									if (__asm_rlwinm_(v73, 0, 23, 23) != 0) {
										// 0xa77e0
										v74 = (int32_t *)(g29 + g30 + 160);
										*v74 = *v74 | 8;
										// branch -> 0xa77f0
									}
									// 0xa77f0
									v75 = *(int32_t *)g28;
									if (*(int32_t *)g24 <= 63) {
										// 0xa77fc
										M_StartKill(g36, g35);
										if (v75 == 15) {
											// 0xa7808
											*(int32_t *)g28 = 15;
											// branch -> 0xa7878
										}
										// 0xa7878
										// branch -> 0xa787c
										// 0xa787c
										// branch -> 0xa7880
										// 0xa7880
										g10 = v1;
										return 1;
									}
									// 0xa7830
									if (v75 == 15) {
										// 0xa783c
										g38 = g22;
										function_7cbac(g36, g35);
										*(int32_t *)g28 = 15;
										// branch -> 0xa7878
									} else {
										// 0xa7858
										if (__asm_rlwinm_(v73, 0, 20, 20) != 0) {
											// 0xa7860
											function_7ca88(g36);
											// branch -> 0xa7868
										}
										// 0xa7868
										g38 = g22;
										function_7cbac(g36, g35);
										// branch -> 0xa7878
									}
									// 0xa7878
									// branch -> 0xa787c
									// 0xa787c
									// branch -> 0xa7880
									// 0xa7880
									g10 = v1;
									return 1;
								}
							}
							// 0xa7540
							v41 = 4;
							// branch -> 0xa7544
							// 0xa7544
							v76 = *(char *)(*(int32_t *)(g29 + g30 + 228) + 114);
							v37 = v76;
							if (v76 == 1) {
								// 0xa75bc
								v43 = v35 + 0x5568;
								v77 = *(int32_t *)v43;
								g25 = v43;
								if (__asm_rlwinm_(v77, 0, 1, 1) != 0) {
									// 0xa75cc
									if (0x1000000 * v37 == 0x1000000) {
										// 0xa75d8
										v34 *= 3;
										// branch -> 0xa75e0
									}
								}
								// 0xa75e0
								v44 = 64 * v34;
								g22 = v44;
								if (g35 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
									// 0xa75f4
									v45 = (int32_t *)g24;
									*v45 = *v45 - v44;
									// branch -> 0xa7600
								}
								// 0xa7600
								if (__asm_rlwinm_(v77, 0, 30, 30) != 0) {
									// 0xa7608
									g37 = g22 / 8;
									v50 = random(7);
									v51 = g27 + g32;
									g21 = v50;
									v52 = (int32_t *)(v51 + 404);
									*v52 = *v52 + v50;
									v53 = (int32_t *)(v51 + 404);
									v78 = *(int32_t *)(v51 + 408);
									if (*v53 > v78) {
										// 0xa763c
										*v53 = v78;
										// branch -> 0xa7640
									}
									// 0xa7640
									v54 = g27 + g32;
									v55 = (int32_t *)(v54 + 396);
									*v55 = g21 + *v55;
									v56 = (int32_t *)(v54 + 396);
									v79 = *(int32_t *)(v54 + 400);
									if (*v56 > v79) {
										// 0xa7664
										*v56 = v79;
										// branch -> 0xa7668
									}
									// 0xa7668
									*(int32_t *)g31 = 1;
									// branch -> 0xa7670
								}
								// 0xa7670
								v57 = *(int32_t *)g25;
								if (__asm_rlwinm_(v57, 0, 17, 18) != 0) {
									// 0xa767c
									if (__asm_rlwinm_(v57, 0, 4, 4) == 0) {
										// 0xa7684
										if (__asm_rlwinm_(v57, 0, 18, 18) != 0) {
											// 0xa768c
											v84 = 0x51eb851f * (int64_t)(3 * g22);
											v88 = (int32_t)(v84 / 0x100000000) >> 31;
											g21 = (v88 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v88 < 0);
											// branch -> 0xa76a8
										}
										// 0xa76a8
										if (__asm_rlwinm_(v57, 0, 17, 17) == 0) {
											// 0xa76a8
											v47 = g21;
											// branch -> 0xa76cc
										} else {
											// 0xa76b0
											v85 = 0x51eb851f * (int64_t)(5 * g22);
											v89 = (int32_t)(v85 / 0x100000000) >> 31;
											v46 = v89 < 0;
											v58 = (v89 & -0x8000000 | (int32_t)(v85 / 0x2000000000)) + v46;
											g21 = v58;
											v47 = v58;
											// branch -> 0xa76cc
										}
										// 0xa76cc
										v59 = g27 + g32;
										v60 = (int32_t *)(v59 + 424);
										*v60 = *v60 + v47;
										v61 = (int32_t *)(v59 + 424);
										v80 = *(int32_t *)(v59 + 428);
										if (*v61 > v80) {
											// 0xa76f0
											*v61 = v80;
											// branch -> 0xa76f4
										}
										// 0xa76f4
										v62 = g27 + g32;
										v63 = (int32_t *)(v62 + 416);
										*v63 = g21 + *v63;
										v64 = (int32_t *)(v62 + 416);
										v81 = *(int32_t *)(v62 + 420);
										if (*v64 > v81) {
											// 0xa7718
											*v64 = v81;
											// branch -> 0xa771c
										}
										// 0xa771c
										*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
										// branch -> 0xa7728
									}
								}
								// 0xa7728
								v65 = *(int32_t *)g25;
								if (__asm_rlwinm_(v65, 0, 15, 16) != 0) {
									// 0xa7734
									if (__asm_rlwinm_(v65, 0, 16, 16) != 0) {
										// 0xa773c
										v86 = 0x51eb851f * (int64_t)(3 * g22);
										v90 = (int32_t)(v86 / 0x100000000) >> 31;
										g21 = (v90 & -0x8000000 | (int32_t)(v86 / 0x2000000000)) + (int32_t)(v90 < 0);
										// branch -> 0xa7758
									}
									// 0xa7758
									if (__asm_rlwinm_(v65, 0, 15, 15) == 0) {
										// 0xa7758
										v49 = g21;
										// branch -> 0xa777c
									} else {
										// 0xa7760
										v87 = 0x51eb851f * (int64_t)(5 * g22);
										v91 = (int32_t)(v87 / 0x100000000) >> 31;
										v48 = v91 < 0;
										v66 = (v91 & -0x8000000 | (int32_t)(v87 / 0x2000000000)) + v48;
										g21 = v66;
										v49 = v66;
										// branch -> 0xa777c
									}
									// 0xa777c
									v67 = g27 + g32;
									v68 = (int32_t *)(v67 + 404);
									*v68 = *v68 + v49;
									v69 = (int32_t *)(v67 + 404);
									v82 = *(int32_t *)(v67 + 408);
									if (*v69 > v82) {
										// 0xa77a0
										*v69 = v82;
										// branch -> 0xa77a4
									}
									// 0xa77a4
									v70 = g27 + g32;
									v71 = (int32_t *)(v70 + 396);
									*v71 = g21 + *v71;
									v72 = (int32_t *)(v70 + 396);
									v83 = *(int32_t *)(v70 + 400);
									if (*v72 > v83) {
										// 0xa77c8
										*v72 = v83;
										// branch -> 0xa77cc
									}
									// 0xa77cc
									*(int32_t *)g31 = 1;
									// branch -> 0xa77d4
								}
								// 0xa77d4
								v73 = *(int32_t *)g25;
								if (__asm_rlwinm_(v73, 0, 23, 23) != 0) {
									// 0xa77e0
									v74 = (int32_t *)(g29 + g30 + 160);
									*v74 = *v74 | 8;
									// branch -> 0xa77f0
								}
								// 0xa77f0
								v75 = *(int32_t *)g28;
								if (*(int32_t *)g24 <= 63) {
									// 0xa77fc
									M_StartKill(g36, g35);
									if (v75 == 15) {
										// 0xa7808
										*(int32_t *)g28 = 15;
										// branch -> 0xa7878
									}
									// 0xa7878
									// branch -> 0xa787c
									// 0xa787c
									// branch -> 0xa7880
									// 0xa7880
									g10 = v1;
									return 1;
								}
								// 0xa7830
								if (v75 == 15) {
									// 0xa783c
									g38 = g22;
									function_7cbac(g36, g35);
									*(int32_t *)g28 = 15;
									// branch -> 0xa7878
								} else {
									// 0xa7858
									if (__asm_rlwinm_(v73, 0, 20, 20) != 0) {
										// 0xa7860
										function_7ca88(g36);
										// branch -> 0xa7868
									}
									// 0xa7868
									g38 = g22;
									function_7cbac(g36, g35);
									// branch -> 0xa7878
								}
								// 0xa7878
								// branch -> 0xa787c
								// 0xa787c
								// branch -> 0xa7880
								// 0xa7880
								g10 = v1;
								return 1;
							}
							// 0xa755c
							if (v76 > 1) {
								// 0xa756c
								if (v76 == 2) {
									// 0xa759c
									if (v41 == 4) {
										// 0xa75a4
										v40 = v34;
										v34 = v40 - (v40 / 2 | v40 & -0x80000000);
										// branch -> 0xa75ac
									}
									// 0xa75ac
									if (v41 == 1) {
										// 0xa75b4
										v42 = v34;
										v34 = (v42 / 2 | v42 & -0x80000000) + v42;
										// branch -> 0xa75bc
									}
								}
							} else {
								// 0xa7560
								if (v76 > -1) {
									// 0xa7578
									if (v41 == 1) {
										// 0xa7588
										v38 = v34;
										v34 = v38 - (v38 / 2 | v38 & -0x80000000);
										// branch -> 0xa75bc
									} else {
										// 0xa7588
										if (v41 == 4) {
											// 0xa7590
											v39 = v34;
											v34 = (v39 / 2 | v39 & -0x80000000) + v39;
											// branch -> 0xa75bc
										}
									}
									// 0xa75bc
									v43 = v35 + 0x5568;
									v77 = *(int32_t *)v43;
									g25 = v43;
									if (__asm_rlwinm_(v77, 0, 1, 1) != 0) {
										// 0xa75cc
										if (0x1000000 * v37 == 0x1000000) {
											// 0xa75d8
											v34 *= 3;
											// branch -> 0xa75e0
										}
									}
									// 0xa75e0
									v44 = 64 * v34;
									g22 = v44;
									if (g35 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
										// 0xa75f4
										v45 = (int32_t *)g24;
										*v45 = *v45 - v44;
										// branch -> 0xa7600
									}
									// 0xa7600
									if (__asm_rlwinm_(v77, 0, 30, 30) != 0) {
										// 0xa7608
										g37 = g22 / 8;
										v50 = random(7);
										v51 = g27 + g32;
										g21 = v50;
										v52 = (int32_t *)(v51 + 404);
										*v52 = *v52 + v50;
										v53 = (int32_t *)(v51 + 404);
										v78 = *(int32_t *)(v51 + 408);
										if (*v53 > v78) {
											// 0xa763c
											*v53 = v78;
											// branch -> 0xa7640
										}
										// 0xa7640
										v54 = g27 + g32;
										v55 = (int32_t *)(v54 + 396);
										*v55 = g21 + *v55;
										v56 = (int32_t *)(v54 + 396);
										v79 = *(int32_t *)(v54 + 400);
										if (*v56 > v79) {
											// 0xa7664
											*v56 = v79;
											// branch -> 0xa7668
										}
										// 0xa7668
										*(int32_t *)g31 = 1;
										// branch -> 0xa7670
									}
									// 0xa7670
									v57 = *(int32_t *)g25;
									if (__asm_rlwinm_(v57, 0, 17, 18) != 0) {
										// 0xa767c
										if (__asm_rlwinm_(v57, 0, 4, 4) == 0) {
											// 0xa7684
											if (__asm_rlwinm_(v57, 0, 18, 18) != 0) {
												// 0xa768c
												v84 = 0x51eb851f * (int64_t)(3 * g22);
												v88 = (int32_t)(v84 / 0x100000000) >> 31;
												g21 = (v88 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v88 < 0);
												// branch -> 0xa76a8
											}
											// 0xa76a8
											if (__asm_rlwinm_(v57, 0, 17, 17) == 0) {
												// 0xa76a8
												v47 = g21;
												// branch -> 0xa76cc
											} else {
												// 0xa76b0
												v85 = 0x51eb851f * (int64_t)(5 * g22);
												v89 = (int32_t)(v85 / 0x100000000) >> 31;
												v46 = v89 < 0;
												v58 = (v89 & -0x8000000 | (int32_t)(v85 / 0x2000000000)) + v46;
												g21 = v58;
												v47 = v58;
												// branch -> 0xa76cc
											}
											// 0xa76cc
											v59 = g27 + g32;
											v60 = (int32_t *)(v59 + 424);
											*v60 = *v60 + v47;
											v61 = (int32_t *)(v59 + 424);
											v80 = *(int32_t *)(v59 + 428);
											if (*v61 > v80) {
												// 0xa76f0
												*v61 = v80;
												// branch -> 0xa76f4
											}
											// 0xa76f4
											v62 = g27 + g32;
											v63 = (int32_t *)(v62 + 416);
											*v63 = g21 + *v63;
											v64 = (int32_t *)(v62 + 416);
											v81 = *(int32_t *)(v62 + 420);
											if (*v64 > v81) {
												// 0xa7718
												*v64 = v81;
												// branch -> 0xa771c
											}
											// 0xa771c
											*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
											// branch -> 0xa7728
										}
									}
									// 0xa7728
									v65 = *(int32_t *)g25;
									if (__asm_rlwinm_(v65, 0, 15, 16) != 0) {
										// 0xa7734
										if (__asm_rlwinm_(v65, 0, 16, 16) != 0) {
											// 0xa773c
											v86 = 0x51eb851f * (int64_t)(3 * g22);
											v90 = (int32_t)(v86 / 0x100000000) >> 31;
											g21 = (v90 & -0x8000000 | (int32_t)(v86 / 0x2000000000)) + (int32_t)(v90 < 0);
											// branch -> 0xa7758
										}
										// 0xa7758
										if (__asm_rlwinm_(v65, 0, 15, 15) == 0) {
											// 0xa7758
											v49 = g21;
											// branch -> 0xa777c
										} else {
											// 0xa7760
											v87 = 0x51eb851f * (int64_t)(5 * g22);
											v91 = (int32_t)(v87 / 0x100000000) >> 31;
											v48 = v91 < 0;
											v66 = (v91 & -0x8000000 | (int32_t)(v87 / 0x2000000000)) + v48;
											g21 = v66;
											v49 = v66;
											// branch -> 0xa777c
										}
										// 0xa777c
										v67 = g27 + g32;
										v68 = (int32_t *)(v67 + 404);
										*v68 = *v68 + v49;
										v69 = (int32_t *)(v67 + 404);
										v82 = *(int32_t *)(v67 + 408);
										if (*v69 > v82) {
											// 0xa77a0
											*v69 = v82;
											// branch -> 0xa77a4
										}
										// 0xa77a4
										v70 = g27 + g32;
										v71 = (int32_t *)(v70 + 396);
										*v71 = g21 + *v71;
										v72 = (int32_t *)(v70 + 396);
										v83 = *(int32_t *)(v70 + 400);
										if (*v72 > v83) {
											// 0xa77c8
											*v72 = v83;
											// branch -> 0xa77cc
										}
										// 0xa77cc
										*(int32_t *)g31 = 1;
										// branch -> 0xa77d4
									}
									// 0xa77d4
									v73 = *(int32_t *)g25;
									if (__asm_rlwinm_(v73, 0, 23, 23) != 0) {
										// 0xa77e0
										v74 = (int32_t *)(g29 + g30 + 160);
										*v74 = *v74 | 8;
										// branch -> 0xa77f0
									}
									// 0xa77f0
									v75 = *(int32_t *)g28;
									if (*(int32_t *)g24 <= 63) {
										// 0xa77fc
										M_StartKill(g36, g35);
										if (v75 == 15) {
											// 0xa7808
											*(int32_t *)g28 = 15;
											// branch -> 0xa7878
										}
										// 0xa7878
										// branch -> 0xa787c
										// 0xa787c
										// branch -> 0xa7880
										// 0xa7880
										g10 = v1;
										return 1;
									}
									// 0xa7830
									if (v75 == 15) {
										// 0xa783c
										g38 = g22;
										function_7cbac(g36, g35);
										*(int32_t *)g28 = 15;
										// branch -> 0xa7878
									} else {
										// 0xa7858
										if (__asm_rlwinm_(v73, 0, 20, 20) != 0) {
											// 0xa7860
											function_7ca88(g36);
											// branch -> 0xa7868
										}
										// 0xa7868
										g38 = g22;
										function_7cbac(g36, g35);
										// branch -> 0xa7878
									}
									// 0xa7878
									// branch -> 0xa787c
									// 0xa787c
									// branch -> 0xa7880
									// 0xa7880
									g10 = v1;
									return 1;
								}
							}
							// 0xa75bc
							v43 = v35 + 0x5568;
							v77 = *(int32_t *)v43;
							g25 = v43;
							if (__asm_rlwinm_(v77, 0, 1, 1) != 0) {
								// 0xa75cc
								if (0x1000000 * v37 == 0x1000000) {
									// 0xa75d8
									v34 *= 3;
									// branch -> 0xa75e0
								}
							}
							// 0xa75e0
							v44 = 64 * v34;
							g22 = v44;
							if (g35 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
								// 0xa75f4
								v45 = (int32_t *)g24;
								*v45 = *v45 - v44;
								// branch -> 0xa7600
							}
							// 0xa7600
							if (__asm_rlwinm_(v77, 0, 30, 30) != 0) {
								// 0xa7608
								g37 = g22 / 8;
								v50 = random(7);
								v51 = g27 + g32;
								g21 = v50;
								v52 = (int32_t *)(v51 + 404);
								*v52 = *v52 + v50;
								v53 = (int32_t *)(v51 + 404);
								v78 = *(int32_t *)(v51 + 408);
								if (*v53 > v78) {
									// 0xa763c
									*v53 = v78;
									// branch -> 0xa7640
								}
								// 0xa7640
								v54 = g27 + g32;
								v55 = (int32_t *)(v54 + 396);
								*v55 = g21 + *v55;
								v56 = (int32_t *)(v54 + 396);
								v79 = *(int32_t *)(v54 + 400);
								if (*v56 > v79) {
									// 0xa7664
									*v56 = v79;
									// branch -> 0xa7668
								}
								// 0xa7668
								*(int32_t *)g31 = 1;
								// branch -> 0xa7670
							}
							// 0xa7670
							v57 = *(int32_t *)g25;
							if (__asm_rlwinm_(v57, 0, 17, 18) != 0) {
								// 0xa767c
								if (__asm_rlwinm_(v57, 0, 4, 4) == 0) {
									// 0xa7684
									if (__asm_rlwinm_(v57, 0, 18, 18) != 0) {
										// 0xa768c
										v84 = 0x51eb851f * (int64_t)(3 * g22);
										v88 = (int32_t)(v84 / 0x100000000) >> 31;
										g21 = (v88 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v88 < 0);
										// branch -> 0xa76a8
									}
									// 0xa76a8
									if (__asm_rlwinm_(v57, 0, 17, 17) == 0) {
										// 0xa76a8
										v47 = g21;
										// branch -> 0xa76cc
									} else {
										// 0xa76b0
										v85 = 0x51eb851f * (int64_t)(5 * g22);
										v89 = (int32_t)(v85 / 0x100000000) >> 31;
										v46 = v89 < 0;
										v58 = (v89 & -0x8000000 | (int32_t)(v85 / 0x2000000000)) + v46;
										g21 = v58;
										v47 = v58;
										// branch -> 0xa76cc
									}
									// 0xa76cc
									v59 = g27 + g32;
									v60 = (int32_t *)(v59 + 424);
									*v60 = *v60 + v47;
									v61 = (int32_t *)(v59 + 424);
									v80 = *(int32_t *)(v59 + 428);
									if (*v61 > v80) {
										// 0xa76f0
										*v61 = v80;
										// branch -> 0xa76f4
									}
									// 0xa76f4
									v62 = g27 + g32;
									v63 = (int32_t *)(v62 + 416);
									*v63 = g21 + *v63;
									v64 = (int32_t *)(v62 + 416);
									v81 = *(int32_t *)(v62 + 420);
									if (*v64 > v81) {
										// 0xa7718
										*v64 = v81;
										// branch -> 0xa771c
									}
									// 0xa771c
									*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
									// branch -> 0xa7728
								}
							}
							// 0xa7728
							v65 = *(int32_t *)g25;
							if (__asm_rlwinm_(v65, 0, 15, 16) != 0) {
								// 0xa7734
								if (__asm_rlwinm_(v65, 0, 16, 16) != 0) {
									// 0xa773c
									v86 = 0x51eb851f * (int64_t)(3 * g22);
									v90 = (int32_t)(v86 / 0x100000000) >> 31;
									g21 = (v90 & -0x8000000 | (int32_t)(v86 / 0x2000000000)) + (int32_t)(v90 < 0);
									// branch -> 0xa7758
								}
								// 0xa7758
								if (__asm_rlwinm_(v65, 0, 15, 15) == 0) {
									// 0xa7758
									v49 = g21;
									// branch -> 0xa777c
								} else {
									// 0xa7760
									v87 = 0x51eb851f * (int64_t)(5 * g22);
									v91 = (int32_t)(v87 / 0x100000000) >> 31;
									v48 = v91 < 0;
									v66 = (v91 & -0x8000000 | (int32_t)(v87 / 0x2000000000)) + v48;
									g21 = v66;
									v49 = v66;
									// branch -> 0xa777c
								}
								// 0xa777c
								v67 = g27 + g32;
								v68 = (int32_t *)(v67 + 404);
								*v68 = *v68 + v49;
								v69 = (int32_t *)(v67 + 404);
								v82 = *(int32_t *)(v67 + 408);
								if (*v69 > v82) {
									// 0xa77a0
									*v69 = v82;
									// branch -> 0xa77a4
								}
								// 0xa77a4
								v70 = g27 + g32;
								v71 = (int32_t *)(v70 + 396);
								*v71 = g21 + *v71;
								v72 = (int32_t *)(v70 + 396);
								v83 = *(int32_t *)(v70 + 400);
								if (*v72 > v83) {
									// 0xa77c8
									*v72 = v83;
									// branch -> 0xa77cc
								}
								// 0xa77cc
								*(int32_t *)g31 = 1;
								// branch -> 0xa77d4
							}
							// 0xa77d4
							v73 = *(int32_t *)g25;
							if (__asm_rlwinm_(v73, 0, 23, 23) != 0) {
								// 0xa77e0
								v74 = (int32_t *)(g29 + g30 + 160);
								*v74 = *v74 | 8;
								// branch -> 0xa77f0
							}
							// 0xa77f0
							v75 = *(int32_t *)g28;
							if (*(int32_t *)g24 <= 63) {
								// 0xa77fc
								M_StartKill(g36, g35);
								if (v75 == 15) {
									// 0xa7808
									*(int32_t *)g28 = 15;
									// branch -> 0xa7878
								}
								// 0xa7878
								// branch -> 0xa787c
								// 0xa787c
								// branch -> 0xa7880
								// 0xa7880
								g10 = v1;
								return 1;
							}
							// 0xa7830
							if (v75 == 15) {
								// 0xa783c
								g38 = g22;
								function_7cbac(g36, g35);
								*(int32_t *)g28 = 15;
								// branch -> 0xa7878
							} else {
								// 0xa7858
								if (__asm_rlwinm_(v73, 0, 20, 20) != 0) {
									// 0xa7860
									function_7ca88(g36);
									// branch -> 0xa7868
								}
								// 0xa7868
								g38 = g22;
								function_7cbac(g36, g35);
								// branch -> 0xa7878
							}
							// 0xa7878
							// branch -> 0xa787c
							// 0xa787c
							// branch -> 0xa7880
							// 0xa7880
							g10 = v1;
							return 1;
						}
					}
					// 0xa7524
					// branch -> 0xa7528
					// 0xa7528
					if (v36 != 4) {
						// 0xa7530
						if (*(int32_t *)(v35 + 3024) != 4) {
							v41 = 1;
							// 0xa7544
							v76 = *(char *)(*(int32_t *)(g29 + g30 + 228) + 114);
							v37 = v76;
							if (v76 == 1) {
								// 0xa75bc
								v43 = v35 + 0x5568;
								v77 = *(int32_t *)v43;
								g25 = v43;
								if (__asm_rlwinm_(v77, 0, 1, 1) != 0) {
									// 0xa75cc
									if (0x1000000 * v37 == 0x1000000) {
										// 0xa75d8
										v34 *= 3;
										// branch -> 0xa75e0
									}
								}
								// 0xa75e0
								v44 = 64 * v34;
								g22 = v44;
								if (g35 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
									// 0xa75f4
									v45 = (int32_t *)g24;
									*v45 = *v45 - v44;
									// branch -> 0xa7600
								}
								// 0xa7600
								if (__asm_rlwinm_(v77, 0, 30, 30) != 0) {
									// 0xa7608
									g37 = g22 / 8;
									v50 = random(7);
									v51 = g27 + g32;
									g21 = v50;
									v52 = (int32_t *)(v51 + 404);
									*v52 = *v52 + v50;
									v53 = (int32_t *)(v51 + 404);
									v78 = *(int32_t *)(v51 + 408);
									if (*v53 > v78) {
										// 0xa763c
										*v53 = v78;
										// branch -> 0xa7640
									}
									// 0xa7640
									v54 = g27 + g32;
									v55 = (int32_t *)(v54 + 396);
									*v55 = g21 + *v55;
									v56 = (int32_t *)(v54 + 396);
									v79 = *(int32_t *)(v54 + 400);
									if (*v56 > v79) {
										// 0xa7664
										*v56 = v79;
										// branch -> 0xa7668
									}
									// 0xa7668
									*(int32_t *)g31 = 1;
									// branch -> 0xa7670
								}
								// 0xa7670
								v57 = *(int32_t *)g25;
								if (__asm_rlwinm_(v57, 0, 17, 18) != 0) {
									// 0xa767c
									if (__asm_rlwinm_(v57, 0, 4, 4) == 0) {
										// 0xa7684
										if (__asm_rlwinm_(v57, 0, 18, 18) != 0) {
											// 0xa768c
											v84 = 0x51eb851f * (int64_t)(3 * g22);
											v88 = (int32_t)(v84 / 0x100000000) >> 31;
											g21 = (v88 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v88 < 0);
											// branch -> 0xa76a8
										}
										// 0xa76a8
										if (__asm_rlwinm_(v57, 0, 17, 17) == 0) {
											// 0xa76a8
											v47 = g21;
											// branch -> 0xa76cc
										} else {
											// 0xa76b0
											v85 = 0x51eb851f * (int64_t)(5 * g22);
											v89 = (int32_t)(v85 / 0x100000000) >> 31;
											v46 = v89 < 0;
											v58 = (v89 & -0x8000000 | (int32_t)(v85 / 0x2000000000)) + v46;
											g21 = v58;
											v47 = v58;
											// branch -> 0xa76cc
										}
										// 0xa76cc
										v59 = g27 + g32;
										v60 = (int32_t *)(v59 + 424);
										*v60 = *v60 + v47;
										v61 = (int32_t *)(v59 + 424);
										v80 = *(int32_t *)(v59 + 428);
										if (*v61 > v80) {
											// 0xa76f0
											*v61 = v80;
											// branch -> 0xa76f4
										}
										// 0xa76f4
										v62 = g27 + g32;
										v63 = (int32_t *)(v62 + 416);
										*v63 = g21 + *v63;
										v64 = (int32_t *)(v62 + 416);
										v81 = *(int32_t *)(v62 + 420);
										if (*v64 > v81) {
											// 0xa7718
											*v64 = v81;
											// branch -> 0xa771c
										}
										// 0xa771c
										*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
										// branch -> 0xa7728
									}
								}
								// 0xa7728
								v65 = *(int32_t *)g25;
								if (__asm_rlwinm_(v65, 0, 15, 16) != 0) {
									// 0xa7734
									if (__asm_rlwinm_(v65, 0, 16, 16) != 0) {
										// 0xa773c
										v86 = 0x51eb851f * (int64_t)(3 * g22);
										v90 = (int32_t)(v86 / 0x100000000) >> 31;
										g21 = (v90 & -0x8000000 | (int32_t)(v86 / 0x2000000000)) + (int32_t)(v90 < 0);
										// branch -> 0xa7758
									}
									// 0xa7758
									if (__asm_rlwinm_(v65, 0, 15, 15) == 0) {
										// 0xa7758
										v49 = g21;
										// branch -> 0xa777c
									} else {
										// 0xa7760
										v87 = 0x51eb851f * (int64_t)(5 * g22);
										v91 = (int32_t)(v87 / 0x100000000) >> 31;
										v48 = v91 < 0;
										v66 = (v91 & -0x8000000 | (int32_t)(v87 / 0x2000000000)) + v48;
										g21 = v66;
										v49 = v66;
										// branch -> 0xa777c
									}
									// 0xa777c
									v67 = g27 + g32;
									v68 = (int32_t *)(v67 + 404);
									*v68 = *v68 + v49;
									v69 = (int32_t *)(v67 + 404);
									v82 = *(int32_t *)(v67 + 408);
									if (*v69 > v82) {
										// 0xa77a0
										*v69 = v82;
										// branch -> 0xa77a4
									}
									// 0xa77a4
									v70 = g27 + g32;
									v71 = (int32_t *)(v70 + 396);
									*v71 = g21 + *v71;
									v72 = (int32_t *)(v70 + 396);
									v83 = *(int32_t *)(v70 + 400);
									if (*v72 > v83) {
										// 0xa77c8
										*v72 = v83;
										// branch -> 0xa77cc
									}
									// 0xa77cc
									*(int32_t *)g31 = 1;
									// branch -> 0xa77d4
								}
								// 0xa77d4
								v73 = *(int32_t *)g25;
								if (__asm_rlwinm_(v73, 0, 23, 23) != 0) {
									// 0xa77e0
									v74 = (int32_t *)(g29 + g30 + 160);
									*v74 = *v74 | 8;
									// branch -> 0xa77f0
								}
								// 0xa77f0
								v75 = *(int32_t *)g28;
								if (*(int32_t *)g24 <= 63) {
									// 0xa77fc
									M_StartKill(g36, g35);
									if (v75 == 15) {
										// 0xa7808
										*(int32_t *)g28 = 15;
										// branch -> 0xa7878
									}
									// 0xa7878
									// branch -> 0xa787c
									// 0xa787c
									// branch -> 0xa7880
									// 0xa7880
									g10 = v1;
									return 1;
								}
								// 0xa7830
								if (v75 == 15) {
									// 0xa783c
									g38 = g22;
									function_7cbac(g36, g35);
									*(int32_t *)g28 = 15;
									// branch -> 0xa7878
								} else {
									// 0xa7858
									if (__asm_rlwinm_(v73, 0, 20, 20) != 0) {
										// 0xa7860
										function_7ca88(g36);
										// branch -> 0xa7868
									}
									// 0xa7868
									g38 = g22;
									function_7cbac(g36, g35);
									// branch -> 0xa7878
								}
								// 0xa7878
								// branch -> 0xa787c
								// 0xa787c
								// branch -> 0xa7880
								// 0xa7880
								g10 = v1;
								return 1;
							}
							// 0xa755c
							if (v76 > 1) {
								// 0xa756c
								if (v76 == 2) {
									// 0xa759c
									if (v41 == 4) {
										// 0xa75a4
										v40 = v34;
										v34 = v40 - (v40 / 2 | v40 & -0x80000000);
										// branch -> 0xa75ac
									}
									// 0xa75ac
									if (v41 == 1) {
										// 0xa75b4
										v42 = v34;
										v34 = (v42 / 2 | v42 & -0x80000000) + v42;
										// branch -> 0xa75bc
									}
								}
							} else {
								// 0xa7560
								if (v76 > -1) {
									// 0xa7578
									if (v41 == 1) {
										// 0xa7588
										v38 = v34;
										v34 = v38 - (v38 / 2 | v38 & -0x80000000);
										// branch -> 0xa75bc
									} else {
										// 0xa7588
										if (v41 == 4) {
											// 0xa7590
											v39 = v34;
											v34 = (v39 / 2 | v39 & -0x80000000) + v39;
											// branch -> 0xa75bc
										}
									}
									// 0xa75bc
									v43 = v35 + 0x5568;
									v77 = *(int32_t *)v43;
									g25 = v43;
									if (__asm_rlwinm_(v77, 0, 1, 1) != 0) {
										// 0xa75cc
										if (0x1000000 * v37 == 0x1000000) {
											// 0xa75d8
											v34 *= 3;
											// branch -> 0xa75e0
										}
									}
									// 0xa75e0
									v44 = 64 * v34;
									g22 = v44;
									if (g35 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
										// 0xa75f4
										v45 = (int32_t *)g24;
										*v45 = *v45 - v44;
										// branch -> 0xa7600
									}
									// 0xa7600
									if (__asm_rlwinm_(v77, 0, 30, 30) != 0) {
										// 0xa7608
										g37 = g22 / 8;
										v50 = random(7);
										v51 = g27 + g32;
										g21 = v50;
										v52 = (int32_t *)(v51 + 404);
										*v52 = *v52 + v50;
										v53 = (int32_t *)(v51 + 404);
										v78 = *(int32_t *)(v51 + 408);
										if (*v53 > v78) {
											// 0xa763c
											*v53 = v78;
											// branch -> 0xa7640
										}
										// 0xa7640
										v54 = g27 + g32;
										v55 = (int32_t *)(v54 + 396);
										*v55 = g21 + *v55;
										v56 = (int32_t *)(v54 + 396);
										v79 = *(int32_t *)(v54 + 400);
										if (*v56 > v79) {
											// 0xa7664
											*v56 = v79;
											// branch -> 0xa7668
										}
										// 0xa7668
										*(int32_t *)g31 = 1;
										// branch -> 0xa7670
									}
									// 0xa7670
									v57 = *(int32_t *)g25;
									if (__asm_rlwinm_(v57, 0, 17, 18) != 0) {
										// 0xa767c
										if (__asm_rlwinm_(v57, 0, 4, 4) == 0) {
											// 0xa7684
											if (__asm_rlwinm_(v57, 0, 18, 18) != 0) {
												// 0xa768c
												v84 = 0x51eb851f * (int64_t)(3 * g22);
												v88 = (int32_t)(v84 / 0x100000000) >> 31;
												g21 = (v88 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v88 < 0);
												// branch -> 0xa76a8
											}
											// 0xa76a8
											if (__asm_rlwinm_(v57, 0, 17, 17) == 0) {
												// 0xa76a8
												v47 = g21;
												// branch -> 0xa76cc
											} else {
												// 0xa76b0
												v85 = 0x51eb851f * (int64_t)(5 * g22);
												v89 = (int32_t)(v85 / 0x100000000) >> 31;
												v46 = v89 < 0;
												v58 = (v89 & -0x8000000 | (int32_t)(v85 / 0x2000000000)) + v46;
												g21 = v58;
												v47 = v58;
												// branch -> 0xa76cc
											}
											// 0xa76cc
											v59 = g27 + g32;
											v60 = (int32_t *)(v59 + 424);
											*v60 = *v60 + v47;
											v61 = (int32_t *)(v59 + 424);
											v80 = *(int32_t *)(v59 + 428);
											if (*v61 > v80) {
												// 0xa76f0
												*v61 = v80;
												// branch -> 0xa76f4
											}
											// 0xa76f4
											v62 = g27 + g32;
											v63 = (int32_t *)(v62 + 416);
											*v63 = g21 + *v63;
											v64 = (int32_t *)(v62 + 416);
											v81 = *(int32_t *)(v62 + 420);
											if (*v64 > v81) {
												// 0xa7718
												*v64 = v81;
												// branch -> 0xa771c
											}
											// 0xa771c
											*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
											// branch -> 0xa7728
										}
									}
									// 0xa7728
									v65 = *(int32_t *)g25;
									if (__asm_rlwinm_(v65, 0, 15, 16) != 0) {
										// 0xa7734
										if (__asm_rlwinm_(v65, 0, 16, 16) != 0) {
											// 0xa773c
											v86 = 0x51eb851f * (int64_t)(3 * g22);
											v90 = (int32_t)(v86 / 0x100000000) >> 31;
											g21 = (v90 & -0x8000000 | (int32_t)(v86 / 0x2000000000)) + (int32_t)(v90 < 0);
											// branch -> 0xa7758
										}
										// 0xa7758
										if (__asm_rlwinm_(v65, 0, 15, 15) == 0) {
											// 0xa7758
											v49 = g21;
											// branch -> 0xa777c
										} else {
											// 0xa7760
											v87 = 0x51eb851f * (int64_t)(5 * g22);
											v91 = (int32_t)(v87 / 0x100000000) >> 31;
											v48 = v91 < 0;
											v66 = (v91 & -0x8000000 | (int32_t)(v87 / 0x2000000000)) + v48;
											g21 = v66;
											v49 = v66;
											// branch -> 0xa777c
										}
										// 0xa777c
										v67 = g27 + g32;
										v68 = (int32_t *)(v67 + 404);
										*v68 = *v68 + v49;
										v69 = (int32_t *)(v67 + 404);
										v82 = *(int32_t *)(v67 + 408);
										if (*v69 > v82) {
											// 0xa77a0
											*v69 = v82;
											// branch -> 0xa77a4
										}
										// 0xa77a4
										v70 = g27 + g32;
										v71 = (int32_t *)(v70 + 396);
										*v71 = g21 + *v71;
										v72 = (int32_t *)(v70 + 396);
										v83 = *(int32_t *)(v70 + 400);
										if (*v72 > v83) {
											// 0xa77c8
											*v72 = v83;
											// branch -> 0xa77cc
										}
										// 0xa77cc
										*(int32_t *)g31 = 1;
										// branch -> 0xa77d4
									}
									// 0xa77d4
									v73 = *(int32_t *)g25;
									if (__asm_rlwinm_(v73, 0, 23, 23) != 0) {
										// 0xa77e0
										v74 = (int32_t *)(g29 + g30 + 160);
										*v74 = *v74 | 8;
										// branch -> 0xa77f0
									}
									// 0xa77f0
									v75 = *(int32_t *)g28;
									if (*(int32_t *)g24 <= 63) {
										// 0xa77fc
										M_StartKill(g36, g35);
										if (v75 == 15) {
											// 0xa7808
											*(int32_t *)g28 = 15;
											// branch -> 0xa7878
										}
										// 0xa7878
										// branch -> 0xa787c
										// 0xa787c
										// branch -> 0xa7880
										// 0xa7880
										g10 = v1;
										return 1;
									}
									// 0xa7830
									if (v75 == 15) {
										// 0xa783c
										g38 = g22;
										function_7cbac(g36, g35);
										*(int32_t *)g28 = 15;
										// branch -> 0xa7878
									} else {
										// 0xa7858
										if (__asm_rlwinm_(v73, 0, 20, 20) != 0) {
											// 0xa7860
											function_7ca88(g36);
											// branch -> 0xa7868
										}
										// 0xa7868
										g38 = g22;
										function_7cbac(g36, g35);
										// branch -> 0xa7878
									}
									// 0xa7878
									// branch -> 0xa787c
									// 0xa787c
									// branch -> 0xa7880
									// 0xa7880
									g10 = v1;
									return 1;
								}
							}
							// 0xa75bc
							v43 = v35 + 0x5568;
							v77 = *(int32_t *)v43;
							g25 = v43;
							if (__asm_rlwinm_(v77, 0, 1, 1) != 0) {
								// 0xa75cc
								if (0x1000000 * v37 == 0x1000000) {
									// 0xa75d8
									v34 *= 3;
									// branch -> 0xa75e0
								}
							}
							// 0xa75e0
							v44 = 64 * v34;
							g22 = v44;
							if (g35 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
								// 0xa75f4
								v45 = (int32_t *)g24;
								*v45 = *v45 - v44;
								// branch -> 0xa7600
							}
							// 0xa7600
							if (__asm_rlwinm_(v77, 0, 30, 30) != 0) {
								// 0xa7608
								g37 = g22 / 8;
								v50 = random(7);
								v51 = g27 + g32;
								g21 = v50;
								v52 = (int32_t *)(v51 + 404);
								*v52 = *v52 + v50;
								v53 = (int32_t *)(v51 + 404);
								v78 = *(int32_t *)(v51 + 408);
								if (*v53 > v78) {
									// 0xa763c
									*v53 = v78;
									// branch -> 0xa7640
								}
								// 0xa7640
								v54 = g27 + g32;
								v55 = (int32_t *)(v54 + 396);
								*v55 = g21 + *v55;
								v56 = (int32_t *)(v54 + 396);
								v79 = *(int32_t *)(v54 + 400);
								if (*v56 > v79) {
									// 0xa7664
									*v56 = v79;
									// branch -> 0xa7668
								}
								// 0xa7668
								*(int32_t *)g31 = 1;
								// branch -> 0xa7670
							}
							// 0xa7670
							v57 = *(int32_t *)g25;
							if (__asm_rlwinm_(v57, 0, 17, 18) != 0) {
								// 0xa767c
								if (__asm_rlwinm_(v57, 0, 4, 4) == 0) {
									// 0xa7684
									if (__asm_rlwinm_(v57, 0, 18, 18) != 0) {
										// 0xa768c
										v84 = 0x51eb851f * (int64_t)(3 * g22);
										v88 = (int32_t)(v84 / 0x100000000) >> 31;
										g21 = (v88 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v88 < 0);
										// branch -> 0xa76a8
									}
									// 0xa76a8
									if (__asm_rlwinm_(v57, 0, 17, 17) == 0) {
										// 0xa76a8
										v47 = g21;
										// branch -> 0xa76cc
									} else {
										// 0xa76b0
										v85 = 0x51eb851f * (int64_t)(5 * g22);
										v89 = (int32_t)(v85 / 0x100000000) >> 31;
										v46 = v89 < 0;
										v58 = (v89 & -0x8000000 | (int32_t)(v85 / 0x2000000000)) + v46;
										g21 = v58;
										v47 = v58;
										// branch -> 0xa76cc
									}
									// 0xa76cc
									v59 = g27 + g32;
									v60 = (int32_t *)(v59 + 424);
									*v60 = *v60 + v47;
									v61 = (int32_t *)(v59 + 424);
									v80 = *(int32_t *)(v59 + 428);
									if (*v61 > v80) {
										// 0xa76f0
										*v61 = v80;
										// branch -> 0xa76f4
									}
									// 0xa76f4
									v62 = g27 + g32;
									v63 = (int32_t *)(v62 + 416);
									*v63 = g21 + *v63;
									v64 = (int32_t *)(v62 + 416);
									v81 = *(int32_t *)(v62 + 420);
									if (*v64 > v81) {
										// 0xa7718
										*v64 = v81;
										// branch -> 0xa771c
									}
									// 0xa771c
									*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
									// branch -> 0xa7728
								}
							}
							// 0xa7728
							v65 = *(int32_t *)g25;
							if (__asm_rlwinm_(v65, 0, 15, 16) != 0) {
								// 0xa7734
								if (__asm_rlwinm_(v65, 0, 16, 16) != 0) {
									// 0xa773c
									v86 = 0x51eb851f * (int64_t)(3 * g22);
									v90 = (int32_t)(v86 / 0x100000000) >> 31;
									g21 = (v90 & -0x8000000 | (int32_t)(v86 / 0x2000000000)) + (int32_t)(v90 < 0);
									// branch -> 0xa7758
								}
								// 0xa7758
								if (__asm_rlwinm_(v65, 0, 15, 15) == 0) {
									// 0xa7758
									v49 = g21;
									// branch -> 0xa777c
								} else {
									// 0xa7760
									v87 = 0x51eb851f * (int64_t)(5 * g22);
									v91 = (int32_t)(v87 / 0x100000000) >> 31;
									v48 = v91 < 0;
									v66 = (v91 & -0x8000000 | (int32_t)(v87 / 0x2000000000)) + v48;
									g21 = v66;
									v49 = v66;
									// branch -> 0xa777c
								}
								// 0xa777c
								v67 = g27 + g32;
								v68 = (int32_t *)(v67 + 404);
								*v68 = *v68 + v49;
								v69 = (int32_t *)(v67 + 404);
								v82 = *(int32_t *)(v67 + 408);
								if (*v69 > v82) {
									// 0xa77a0
									*v69 = v82;
									// branch -> 0xa77a4
								}
								// 0xa77a4
								v70 = g27 + g32;
								v71 = (int32_t *)(v70 + 396);
								*v71 = g21 + *v71;
								v72 = (int32_t *)(v70 + 396);
								v83 = *(int32_t *)(v70 + 400);
								if (*v72 > v83) {
									// 0xa77c8
									*v72 = v83;
									// branch -> 0xa77cc
								}
								// 0xa77cc
								*(int32_t *)g31 = 1;
								// branch -> 0xa77d4
							}
							// 0xa77d4
							v73 = *(int32_t *)g25;
							if (__asm_rlwinm_(v73, 0, 23, 23) != 0) {
								// 0xa77e0
								v74 = (int32_t *)(g29 + g30 + 160);
								*v74 = *v74 | 8;
								// branch -> 0xa77f0
							}
							// 0xa77f0
							v75 = *(int32_t *)g28;
							if (*(int32_t *)g24 <= 63) {
								// 0xa77fc
								M_StartKill(g36, g35);
								if (v75 == 15) {
									// 0xa7808
									*(int32_t *)g28 = 15;
									// branch -> 0xa7878
								}
								// 0xa7878
								// branch -> 0xa787c
								// 0xa787c
								// branch -> 0xa7880
								// 0xa7880
								g10 = v1;
								return 1;
							}
							// 0xa7830
							if (v75 == 15) {
								// 0xa783c
								g38 = g22;
								function_7cbac(g36, g35);
								*(int32_t *)g28 = 15;
								// branch -> 0xa7878
							} else {
								// 0xa7858
								if (__asm_rlwinm_(v73, 0, 20, 20) != 0) {
									// 0xa7860
									function_7ca88(g36);
									// branch -> 0xa7868
								}
								// 0xa7868
								g38 = g22;
								function_7cbac(g36, g35);
								// branch -> 0xa7878
							}
							// 0xa7878
							// branch -> 0xa787c
							// 0xa787c
							// branch -> 0xa7880
							// 0xa7880
							g10 = v1;
							return 1;
						}
					}
					// 0xa7540
					v41 = 4;
					// branch -> 0xa7544
					// 0xa7544
					v76 = *(char *)(*(int32_t *)(g29 + g30 + 228) + 114);
					v37 = v76;
					if (v76 != 1) {
						// 0xa755c
						if (v76 > 1) {
							// 0xa756c
							if (v76 == 2) {
								// 0xa759c
								if (v41 == 4) {
									// 0xa75a4
									v40 = v34;
									v34 = v40 - (v40 / 2 | v40 & -0x80000000);
									// branch -> 0xa75ac
								}
								// 0xa75ac
								if (v41 == 1) {
									// 0xa75b4
									v42 = v34;
									v34 = (v42 / 2 | v42 & -0x80000000) + v42;
									// branch -> 0xa75bc
								}
							}
						} else {
							// 0xa7560
							if (v76 > -1) {
								// 0xa7578
								if (v41 == 1) {
									// 0xa7588
									v38 = v34;
									v34 = v38 - (v38 / 2 | v38 & -0x80000000);
									// branch -> 0xa75bc
								} else {
									// 0xa7588
									if (v41 == 4) {
										// 0xa7590
										v39 = v34;
										v34 = (v39 / 2 | v39 & -0x80000000) + v39;
										// branch -> 0xa75bc
									}
								}
								// 0xa75bc
								v43 = v35 + 0x5568;
								v77 = *(int32_t *)v43;
								g25 = v43;
								if (__asm_rlwinm_(v77, 0, 1, 1) != 0) {
									// 0xa75cc
									if (0x1000000 * v37 == 0x1000000) {
										// 0xa75d8
										v34 *= 3;
										// branch -> 0xa75e0
									}
								}
								// 0xa75e0
								v44 = 64 * v34;
								g22 = v44;
								if (g35 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
									// 0xa75f4
									v45 = (int32_t *)g24;
									*v45 = *v45 - v44;
									// branch -> 0xa7600
								}
								// 0xa7600
								if (__asm_rlwinm_(v77, 0, 30, 30) != 0) {
									// 0xa7608
									g37 = g22 / 8;
									v50 = random(7);
									v51 = g27 + g32;
									g21 = v50;
									v52 = (int32_t *)(v51 + 404);
									*v52 = *v52 + v50;
									v53 = (int32_t *)(v51 + 404);
									v78 = *(int32_t *)(v51 + 408);
									if (*v53 > v78) {
										// 0xa763c
										*v53 = v78;
										// branch -> 0xa7640
									}
									// 0xa7640
									v54 = g27 + g32;
									v55 = (int32_t *)(v54 + 396);
									*v55 = g21 + *v55;
									v56 = (int32_t *)(v54 + 396);
									v79 = *(int32_t *)(v54 + 400);
									if (*v56 > v79) {
										// 0xa7664
										*v56 = v79;
										// branch -> 0xa7668
									}
									// 0xa7668
									*(int32_t *)g31 = 1;
									// branch -> 0xa7670
								}
								// 0xa7670
								v57 = *(int32_t *)g25;
								if (__asm_rlwinm_(v57, 0, 17, 18) != 0) {
									// 0xa767c
									if (__asm_rlwinm_(v57, 0, 4, 4) == 0) {
										// 0xa7684
										if (__asm_rlwinm_(v57, 0, 18, 18) != 0) {
											// 0xa768c
											v84 = 0x51eb851f * (int64_t)(3 * g22);
											v88 = (int32_t)(v84 / 0x100000000) >> 31;
											g21 = (v88 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v88 < 0);
											// branch -> 0xa76a8
										}
										// 0xa76a8
										if (__asm_rlwinm_(v57, 0, 17, 17) == 0) {
											// 0xa76a8
											v47 = g21;
											// branch -> 0xa76cc
										} else {
											// 0xa76b0
											v85 = 0x51eb851f * (int64_t)(5 * g22);
											v89 = (int32_t)(v85 / 0x100000000) >> 31;
											v46 = v89 < 0;
											v58 = (v89 & -0x8000000 | (int32_t)(v85 / 0x2000000000)) + v46;
											g21 = v58;
											v47 = v58;
											// branch -> 0xa76cc
										}
										// 0xa76cc
										v59 = g27 + g32;
										v60 = (int32_t *)(v59 + 424);
										*v60 = *v60 + v47;
										v61 = (int32_t *)(v59 + 424);
										v80 = *(int32_t *)(v59 + 428);
										if (*v61 > v80) {
											// 0xa76f0
											*v61 = v80;
											// branch -> 0xa76f4
										}
										// 0xa76f4
										v62 = g27 + g32;
										v63 = (int32_t *)(v62 + 416);
										*v63 = g21 + *v63;
										v64 = (int32_t *)(v62 + 416);
										v81 = *(int32_t *)(v62 + 420);
										if (*v64 > v81) {
											// 0xa7718
											*v64 = v81;
											// branch -> 0xa771c
										}
										// 0xa771c
										*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
										// branch -> 0xa7728
									}
								}
								// 0xa7728
								v65 = *(int32_t *)g25;
								if (__asm_rlwinm_(v65, 0, 15, 16) != 0) {
									// 0xa7734
									if (__asm_rlwinm_(v65, 0, 16, 16) != 0) {
										// 0xa773c
										v86 = 0x51eb851f * (int64_t)(3 * g22);
										v90 = (int32_t)(v86 / 0x100000000) >> 31;
										g21 = (v90 & -0x8000000 | (int32_t)(v86 / 0x2000000000)) + (int32_t)(v90 < 0);
										// branch -> 0xa7758
									}
									// 0xa7758
									if (__asm_rlwinm_(v65, 0, 15, 15) == 0) {
										// 0xa7758
										v49 = g21;
										// branch -> 0xa777c
									} else {
										// 0xa7760
										v87 = 0x51eb851f * (int64_t)(5 * g22);
										v91 = (int32_t)(v87 / 0x100000000) >> 31;
										v48 = v91 < 0;
										v66 = (v91 & -0x8000000 | (int32_t)(v87 / 0x2000000000)) + v48;
										g21 = v66;
										v49 = v66;
										// branch -> 0xa777c
									}
									// 0xa777c
									v67 = g27 + g32;
									v68 = (int32_t *)(v67 + 404);
									*v68 = *v68 + v49;
									v69 = (int32_t *)(v67 + 404);
									v82 = *(int32_t *)(v67 + 408);
									if (*v69 > v82) {
										// 0xa77a0
										*v69 = v82;
										// branch -> 0xa77a4
									}
									// 0xa77a4
									v70 = g27 + g32;
									v71 = (int32_t *)(v70 + 396);
									*v71 = g21 + *v71;
									v72 = (int32_t *)(v70 + 396);
									v83 = *(int32_t *)(v70 + 400);
									if (*v72 > v83) {
										// 0xa77c8
										*v72 = v83;
										// branch -> 0xa77cc
									}
									// 0xa77cc
									*(int32_t *)g31 = 1;
									// branch -> 0xa77d4
								}
								// 0xa77d4
								v73 = *(int32_t *)g25;
								if (__asm_rlwinm_(v73, 0, 23, 23) != 0) {
									// 0xa77e0
									v74 = (int32_t *)(g29 + g30 + 160);
									*v74 = *v74 | 8;
									// branch -> 0xa77f0
								}
								// 0xa77f0
								v75 = *(int32_t *)g28;
								if (*(int32_t *)g24 <= 63) {
									// 0xa77fc
									M_StartKill(g36, g35);
									if (v75 == 15) {
										// 0xa7808
										*(int32_t *)g28 = 15;
										// branch -> 0xa7878
									}
									// 0xa7878
									// branch -> 0xa787c
									// 0xa787c
									// branch -> 0xa7880
									// 0xa7880
									g10 = v1;
									return 1;
								}
								// 0xa7830
								if (v75 == 15) {
									// 0xa783c
									g38 = g22;
									function_7cbac(g36, g35);
									*(int32_t *)g28 = 15;
									// branch -> 0xa7878
								} else {
									// 0xa7858
									if (__asm_rlwinm_(v73, 0, 20, 20) != 0) {
										// 0xa7860
										function_7ca88(g36);
										// branch -> 0xa7868
									}
									// 0xa7868
									g38 = g22;
									function_7cbac(g36, g35);
									// branch -> 0xa7878
								}
								// 0xa7878
								// branch -> 0xa787c
								// 0xa787c
								// branch -> 0xa7880
								// 0xa7880
								g10 = v1;
								return 1;
							}
						}
						// 0xa75bc
						v43 = v35 + 0x5568;
						v77 = *(int32_t *)v43;
						g25 = v43;
						if (__asm_rlwinm_(v77, 0, 1, 1) != 0) {
							// 0xa75cc
							if (0x1000000 * v37 == 0x1000000) {
								// 0xa75d8
								v34 *= 3;
								// branch -> 0xa75e0
							}
						}
						// 0xa75e0
						v44 = 64 * v34;
						g22 = v44;
						if (g35 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
							// 0xa75f4
							v45 = (int32_t *)g24;
							*v45 = *v45 - v44;
							// branch -> 0xa7600
						}
						// 0xa7600
						if (__asm_rlwinm_(v77, 0, 30, 30) != 0) {
							// 0xa7608
							g37 = g22 / 8;
							v50 = random(7);
							v51 = g27 + g32;
							g21 = v50;
							v52 = (int32_t *)(v51 + 404);
							*v52 = *v52 + v50;
							v53 = (int32_t *)(v51 + 404);
							v78 = *(int32_t *)(v51 + 408);
							if (*v53 > v78) {
								// 0xa763c
								*v53 = v78;
								// branch -> 0xa7640
							}
							// 0xa7640
							v54 = g27 + g32;
							v55 = (int32_t *)(v54 + 396);
							*v55 = g21 + *v55;
							v56 = (int32_t *)(v54 + 396);
							v79 = *(int32_t *)(v54 + 400);
							if (*v56 > v79) {
								// 0xa7664
								*v56 = v79;
								// branch -> 0xa7668
							}
							// 0xa7668
							*(int32_t *)g31 = 1;
							// branch -> 0xa7670
						}
						// 0xa7670
						v57 = *(int32_t *)g25;
						if (__asm_rlwinm_(v57, 0, 17, 18) != 0) {
							// 0xa767c
							if (__asm_rlwinm_(v57, 0, 4, 4) == 0) {
								// 0xa7684
								if (__asm_rlwinm_(v57, 0, 18, 18) != 0) {
									// 0xa768c
									v84 = 0x51eb851f * (int64_t)(3 * g22);
									v88 = (int32_t)(v84 / 0x100000000) >> 31;
									g21 = (v88 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v88 < 0);
									// branch -> 0xa76a8
								}
								// 0xa76a8
								if (__asm_rlwinm_(v57, 0, 17, 17) == 0) {
									// 0xa76a8
									v47 = g21;
									// branch -> 0xa76cc
								} else {
									// 0xa76b0
									v85 = 0x51eb851f * (int64_t)(5 * g22);
									v89 = (int32_t)(v85 / 0x100000000) >> 31;
									v46 = v89 < 0;
									v58 = (v89 & -0x8000000 | (int32_t)(v85 / 0x2000000000)) + v46;
									g21 = v58;
									v47 = v58;
									// branch -> 0xa76cc
								}
								// 0xa76cc
								v59 = g27 + g32;
								v60 = (int32_t *)(v59 + 424);
								*v60 = *v60 + v47;
								v61 = (int32_t *)(v59 + 424);
								v80 = *(int32_t *)(v59 + 428);
								if (*v61 > v80) {
									// 0xa76f0
									*v61 = v80;
									// branch -> 0xa76f4
								}
								// 0xa76f4
								v62 = g27 + g32;
								v63 = (int32_t *)(v62 + 416);
								*v63 = g21 + *v63;
								v64 = (int32_t *)(v62 + 416);
								v81 = *(int32_t *)(v62 + 420);
								if (*v64 > v81) {
									// 0xa7718
									*v64 = v81;
									// branch -> 0xa771c
								}
								// 0xa771c
								*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
								// branch -> 0xa7728
							}
						}
						// 0xa7728
						v65 = *(int32_t *)g25;
						if (__asm_rlwinm_(v65, 0, 15, 16) != 0) {
							// 0xa7734
							if (__asm_rlwinm_(v65, 0, 16, 16) != 0) {
								// 0xa773c
								v86 = 0x51eb851f * (int64_t)(3 * g22);
								v90 = (int32_t)(v86 / 0x100000000) >> 31;
								g21 = (v90 & -0x8000000 | (int32_t)(v86 / 0x2000000000)) + (int32_t)(v90 < 0);
								// branch -> 0xa7758
							}
							// 0xa7758
							if (__asm_rlwinm_(v65, 0, 15, 15) == 0) {
								// 0xa7758
								v49 = g21;
								// branch -> 0xa777c
							} else {
								// 0xa7760
								v87 = 0x51eb851f * (int64_t)(5 * g22);
								v91 = (int32_t)(v87 / 0x100000000) >> 31;
								v48 = v91 < 0;
								v66 = (v91 & -0x8000000 | (int32_t)(v87 / 0x2000000000)) + v48;
								g21 = v66;
								v49 = v66;
								// branch -> 0xa777c
							}
							// 0xa777c
							v67 = g27 + g32;
							v68 = (int32_t *)(v67 + 404);
							*v68 = *v68 + v49;
							v69 = (int32_t *)(v67 + 404);
							v82 = *(int32_t *)(v67 + 408);
							if (*v69 > v82) {
								// 0xa77a0
								*v69 = v82;
								// branch -> 0xa77a4
							}
							// 0xa77a4
							v70 = g27 + g32;
							v71 = (int32_t *)(v70 + 396);
							*v71 = g21 + *v71;
							v72 = (int32_t *)(v70 + 396);
							v83 = *(int32_t *)(v70 + 400);
							if (*v72 > v83) {
								// 0xa77c8
								*v72 = v83;
								// branch -> 0xa77cc
							}
							// 0xa77cc
							*(int32_t *)g31 = 1;
							// branch -> 0xa77d4
						}
						// 0xa77d4
						v73 = *(int32_t *)g25;
						if (__asm_rlwinm_(v73, 0, 23, 23) != 0) {
							// 0xa77e0
							v74 = (int32_t *)(g29 + g30 + 160);
							*v74 = *v74 | 8;
							// branch -> 0xa77f0
						}
						// 0xa77f0
						v75 = *(int32_t *)g28;
						if (*(int32_t *)g24 <= 63) {
							// 0xa77fc
							M_StartKill(g36, g35);
							if (v75 == 15) {
								// 0xa7808
								*(int32_t *)g28 = 15;
								// branch -> 0xa7878
							}
							// 0xa7878
							// branch -> 0xa787c
							// 0xa787c
							// branch -> 0xa7880
							// 0xa7880
							g10 = v1;
							return 1;
						}
						// 0xa7830
						if (v75 == 15) {
							// 0xa783c
							g38 = g22;
							function_7cbac(g36, g35);
							*(int32_t *)g28 = 15;
							// branch -> 0xa7878
						} else {
							// 0xa7858
							if (__asm_rlwinm_(v73, 0, 20, 20) != 0) {
								// 0xa7860
								function_7ca88(g36);
								// branch -> 0xa7868
							}
							// 0xa7868
							g38 = g22;
							function_7cbac(g36, g35);
							// branch -> 0xa7878
						}
						// 0xa7878
						// branch -> 0xa787c
						// 0xa787c
						// branch -> 0xa7880
						// 0xa7880
						g10 = v1;
						return 1;
					}
					// 0xa75bc
					v43 = v35 + 0x5568;
					v77 = *(int32_t *)v43;
					g25 = v43;
					if (__asm_rlwinm_(v77, 0, 1, 1) != 0) {
						// 0xa75cc
						if (0x1000000 * v37 == 0x1000000) {
							// 0xa75d8
							v34 *= 3;
							// branch -> 0xa75e0
						}
					}
					// 0xa75e0
					v44 = 64 * v34;
					g22 = v44;
					if (g35 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
						// 0xa75f4
						v45 = (int32_t *)g24;
						*v45 = *v45 - v44;
						// branch -> 0xa7600
					}
					// 0xa7600
					if (__asm_rlwinm_(v77, 0, 30, 30) != 0) {
						// 0xa7608
						g37 = g22 / 8;
						v50 = random(7);
						v51 = g27 + g32;
						g21 = v50;
						v52 = (int32_t *)(v51 + 404);
						*v52 = *v52 + v50;
						v53 = (int32_t *)(v51 + 404);
						v78 = *(int32_t *)(v51 + 408);
						if (*v53 > v78) {
							// 0xa763c
							*v53 = v78;
							// branch -> 0xa7640
						}
						// 0xa7640
						v54 = g27 + g32;
						v55 = (int32_t *)(v54 + 396);
						*v55 = g21 + *v55;
						v56 = (int32_t *)(v54 + 396);
						v79 = *(int32_t *)(v54 + 400);
						if (*v56 > v79) {
							// 0xa7664
							*v56 = v79;
							// branch -> 0xa7668
						}
						// 0xa7668
						*(int32_t *)g31 = 1;
						// branch -> 0xa7670
					}
					// 0xa7670
					v57 = *(int32_t *)g25;
					if (__asm_rlwinm_(v57, 0, 17, 18) != 0) {
						// 0xa767c
						if (__asm_rlwinm_(v57, 0, 4, 4) == 0) {
							// 0xa7684
							if (__asm_rlwinm_(v57, 0, 18, 18) != 0) {
								// 0xa768c
								v84 = 0x51eb851f * (int64_t)(3 * g22);
								v88 = (int32_t)(v84 / 0x100000000) >> 31;
								g21 = (v88 & -0x8000000 | (int32_t)(v84 / 0x2000000000)) + (int32_t)(v88 < 0);
								// branch -> 0xa76a8
							}
							// 0xa76a8
							if (__asm_rlwinm_(v57, 0, 17, 17) == 0) {
								// 0xa76a8
								v47 = g21;
								// branch -> 0xa76cc
							} else {
								// 0xa76b0
								v85 = 0x51eb851f * (int64_t)(5 * g22);
								v89 = (int32_t)(v85 / 0x100000000) >> 31;
								v46 = v89 < 0;
								v58 = (v89 & -0x8000000 | (int32_t)(v85 / 0x2000000000)) + v46;
								g21 = v58;
								v47 = v58;
								// branch -> 0xa76cc
							}
							// 0xa76cc
							v59 = g27 + g32;
							v60 = (int32_t *)(v59 + 424);
							*v60 = *v60 + v47;
							v61 = (int32_t *)(v59 + 424);
							v80 = *(int32_t *)(v59 + 428);
							if (*v61 > v80) {
								// 0xa76f0
								*v61 = v80;
								// branch -> 0xa76f4
							}
							// 0xa76f4
							v62 = g27 + g32;
							v63 = (int32_t *)(v62 + 416);
							*v63 = g21 + *v63;
							v64 = (int32_t *)(v62 + 416);
							v81 = *(int32_t *)(v62 + 420);
							if (*v64 > v81) {
								// 0xa7718
								*v64 = v81;
								// branch -> 0xa771c
							}
							// 0xa771c
							*(int32_t *)*(int32_t *)(g23 - 0x76f4) = 1;
							// branch -> 0xa7728
						}
					}
					// 0xa7728
					v65 = *(int32_t *)g25;
					if (__asm_rlwinm_(v65, 0, 15, 16) != 0) {
						// 0xa7734
						if (__asm_rlwinm_(v65, 0, 16, 16) != 0) {
							// 0xa773c
							v86 = 0x51eb851f * (int64_t)(3 * g22);
							v90 = (int32_t)(v86 / 0x100000000) >> 31;
							g21 = (v90 & -0x8000000 | (int32_t)(v86 / 0x2000000000)) + (int32_t)(v90 < 0);
							// branch -> 0xa7758
						}
						// 0xa7758
						if (__asm_rlwinm_(v65, 0, 15, 15) == 0) {
							// 0xa7758
							v49 = g21;
							// branch -> 0xa777c
						} else {
							// 0xa7760
							v87 = 0x51eb851f * (int64_t)(5 * g22);
							v91 = (int32_t)(v87 / 0x100000000) >> 31;
							v48 = v91 < 0;
							v66 = (v91 & -0x8000000 | (int32_t)(v87 / 0x2000000000)) + v48;
							g21 = v66;
							v49 = v66;
							// branch -> 0xa777c
						}
						// 0xa777c
						v67 = g27 + g32;
						v68 = (int32_t *)(v67 + 404);
						*v68 = *v68 + v49;
						v69 = (int32_t *)(v67 + 404);
						v82 = *(int32_t *)(v67 + 408);
						if (*v69 > v82) {
							// 0xa77a0
							*v69 = v82;
							// branch -> 0xa77a4
						}
						// 0xa77a4
						v70 = g27 + g32;
						v71 = (int32_t *)(v70 + 396);
						*v71 = g21 + *v71;
						v72 = (int32_t *)(v70 + 396);
						v83 = *(int32_t *)(v70 + 400);
						if (*v72 > v83) {
							// 0xa77c8
							*v72 = v83;
							// branch -> 0xa77cc
						}
						// 0xa77cc
						*(int32_t *)g31 = 1;
						// branch -> 0xa77d4
					}
					// 0xa77d4
					v73 = *(int32_t *)g25;
					if (__asm_rlwinm_(v73, 0, 23, 23) != 0) {
						// 0xa77e0
						v74 = (int32_t *)(g29 + g30 + 160);
						*v74 = *v74 | 8;
						// branch -> 0xa77f0
					}
					// 0xa77f0
					v75 = *(int32_t *)g28;
					if (*(int32_t *)g24 > 63) {
						// 0xa7830
						if (v75 == 15) {
							// 0xa783c
							g38 = g22;
							function_7cbac(g36, g35);
							*(int32_t *)g28 = 15;
							// branch -> 0xa7878
						} else {
							// 0xa7858
							if (__asm_rlwinm_(v73, 0, 20, 20) != 0) {
								// 0xa7860
								function_7ca88(g36);
								// branch -> 0xa7868
							}
							// 0xa7868
							g38 = g22;
							function_7cbac(g36, g35);
							// branch -> 0xa7878
						}
						// 0xa7878
						// branch -> 0xa787c
						// 0xa787c
						// branch -> 0xa7880
						// 0xa7880
						g10 = v1;
						return 1;
					}
					// 0xa77fc
					M_StartKill(g36, g35);
					if (v75 == 15) {
						// 0xa7808
						*(int32_t *)g28 = 15;
						// branch -> 0xa7878
					}
					// 0xa7878
					v25 = 1;
					// branch -> 0xa787c
				} else {
					// 0xa747c
					v25 = g22;
					// branch -> 0xa787c
				}
				// 0xa787c
				result = v25;
				// branch -> 0xa7880
			} else {
				// 0xa7474
				result = v24;
				// branch -> 0xa7880
			}
			// 0xa7880
			g10 = v1;
			return result;
		}
		// 0xa73b0
		// branch -> 0xa7880
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0xa7894 - 0xa7bc4
int32_t function_a7894(int32_t a1)
{
	int32_t v1 = g10; // 0xa7898
	int32_t v2 = g37; // 0xa789c
	g26 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x59dc); // 0xa78a0
	g27 = v3;
	int32_t v4 = 0x1000000 * v2 / 0x1000000; // 0xa78a4
	g37 = v4;
	g35 = *(int32_t *)(g23 - 0x77a8);
	g25 = a1;
	if (v4 >= 4) {
		// 0xa78c0
		app_fatal(v3);
		a1 = g25;
		// branch -> 0xa78c8
	}
	// 0xa78c8
	if (a1 >= 4) {
		// 0xa78d0
		g37 = a1;
		app_fatal(g27);
		// branch -> 0xa78dc
	}
	int32_t v5 = 0x55ec * 0x1000000 * g26 / 0x1000000; // 0xa78e0
	g33 = v5;
	int32_t v6 = g35 + v5; // 0xa78e4
	g27 = 0;
	if (*(char *)(v6 + 313) != 0) {
		// 0xa78f8
		// branch -> 0xa7bb0
		// 0xa7bb0
		g10 = v1;
		return 0;
	}
	// 0xa7900
	int32_t result2; // 0xa7bc0
	if (*(char *)(v6 + 284) % 2 == 0) {
		int32_t v7 = g25; // 0xa7914
		if (v7 >= 4) {
			// 0xa791c
			g37 = v7;
			app_fatal(*(int32_t *)(g23 - 0x59e0));
			// branch -> 0xa7928
		}
		// 0xa7928
		g37 = 100;
		int32_t v8 = g35;      // 0xa7934
		int32_t v9 = g33;      // 0xa7934
		int32_t v10 = v9 + v8; // 0xa7934
		g36 = random(4);
		int32_t v11 = v10 + 368; // 0xa7940
		g30 = v11;
		int32_t v12 = 0x55ec * g25; // 0xa794c
		g32 = v12;
		int32_t v13 = *(int32_t *)(v10 + 0x554c);               // 0xa7950
		int32_t v14 = *(int32_t *)(v10 + 0x5558);               // 0xa7954
		int32_t v15 = v12 + v8;                                 // 0xa795c
		uint64_t v16 = 0x66666667 * (int64_t) * (int32_t *)v11; // 0xa7960
		int32_t v17 = v15 + 348;                                // 0xa7964
		uint32_t v18 = *(int32_t *)(v15 + 368);                 // 0xa796c
		int32_t v19 = v15 + 436;                                // 0xa7970
		unsigned char v20 = *(char *)v19;                       // 0xa7970
		g31 = v19;
		int32_t v21 = 50 - (v14 + v13 + ((int32_t)(v16 / 0x100000000) & -0x80000000 | (int32_t)(v16 / 0x200000000)) + (int32_t)(v16 / 0x8000000000000000)) + (int32_t)v20; // 0xa7994
		int32_t v22 = v21 + (v18 / 2 | v18 & -0x80000000);                                                                                                                 // 0xa799c
		int32_t v23 = *(char *)v17 == 0 ? v22 + 20 : v22;                                                                                                                  // 0xa799c
		int32_t v24 = *(int32_t *)(v15 + 0x5554) + v23;                                                                                                                    // 0xa79b0
		int32_t v25 = v24;
		int32_t v26 = v24; // 0xa79c0
		if (v24 <= 4) {
			// 0xa79bc
			v25 = 5;
			v26 = 5;
			// branch -> 0xa79c0
		}
		if (v26 >= 96) {
			// 0xa79c8
			v25 = 95;
			// branch -> 0xa79cc
		}
		int32_t v27 = *(int32_t *)v10; // 0xa79cc
		int32_t v28;                   // r23
		int32_t v29;                   // 0xa7a38
		int32_t v30;                   // 0xa7a54
		int32_t v31;                   // 0xa7a9c
		int32_t v32;                   // 0xa7afc
		int32_t v33;                   // 0xa7b08
		int32_t v34;                   // 0xa7b30
		int32_t result;                // 0xa7bac
		int32_t v35;                   // 0xa7a4c
		int32_t v36;                   // 0xa7b20
		int32_t v37;                   // 0xa7a04
		int32_t v38;                   // 0xa7a10
		int32_t v39;                   // 0xa7a2c
		int32_t v40;                   // 0xa7a58
		int32_t v41;                   // 0xa7a80
		int32_t v42;                   // 0xa7a98
		int32_t v43;                   // 0xa7aa0
		int32_t v44;                   // 0xa7ac8
		int32_t v45;                   // 0xa7ad8
		int32_t v46;                   // 0xa7af0
		int32_t v47;                   // 0xa7b00
		int32_t v48;                   // 0xa7b1c
		int32_t *v49;                  // 0xa7b24
		int32_t v50;                   // 0xa7b44
		int32_t *v51;                  // 0xa7b4c
		int32_t *v52;                  // 0xa7b58
		int32_t v53;                   // 0xa7a5c
		int32_t v54;                   // 0xa7a60
		int32_t v55;                   // 0xa7a64
		int32_t v56;                   // 0xa7a84
		int32_t v57;                   // 0xa7ab8
		int32_t v58;                   // 0xa7b34
		int32_t v59;                   // 0xa7b5c
		uint64_t v60;                  // 0xa7abc
		int32_t v61;                   // 0xa7ac0
		if (v27 != 0) {
			// 0xa79d8
			if (v27 != 4) {
				v30 = v8;
				// 0xa7a04
				v37 = v30 + v9;
				v38 = (int32_t) * (char *)v19;
				int32_t v62 = *(int32_t *)(v37 + 392); // 0xa7a14
				int32_t v63 = *(int32_t *)v11;         // 0xa7a1c
				v39 = v62 - 2 * (v38 - (int32_t) * (char *)(v37 + 436)) + v63;
				v29 = v39;
				if (v39 <= 0xffffffff) {
					// 0xa7a34
					v29 = 0;
					// branch -> 0xa7a38
				}
				// 0xa7a38
				v35 = v29;
				if (v29 >= 101) {
					// 0xa7a40
					v35 = 100;
					// branch -> 0xa7a44
				}
				// 0xa7a44
				if (g36 < v25) {
					// 0xa7a4c
					if (100 < v35) {
						// 0xa7a54
						v40 = g32 + v30;
						v53 = *(int32_t *)(v37 + 56);
						v54 = *(int32_t *)(v37 + 60);
						v55 = *(int32_t *)(v40 + 56);
						g37 = GetDirection(v53, v54, v55, *(int32_t *)(v40 + 60));
						function_a5074(0x1000000 * g26 / 0x1000000);
						// branch -> 0xa7ba8
					} else {
						// 0xa7a80
						v41 = g32 + v30;
						v56 = *(int32_t *)(v41 + 0x5544);
						g37 = 1 - v56 + *(int32_t *)(v41 + 0x5548);
						v42 = random(5);
						v31 = v41;
						v43 = v56 + v42;
						v57 = *(int32_t *)(v31 + 0x555c);
						v60 = 0x51eb851f * (int64_t)(v43 * *(int32_t *)(v31 + 0x5550));
						v61 = (int32_t)(v60 / 0x100000000) >> 31;
						v44 = (v61 & -0x8000000 | (int32_t)(v60 / 0x2000000000)) + (int32_t)(v61 < 0);
						v45 = *(int32_t *)(v31 + 388) + v43 + v44 + v57;
						v33 = v45;
						if (*(char *)v17 == 0) {
							// 0xa7ae0
							g37 = 100;
							v46 = random(6);
							v32 = v45;
							if (v46 < (int32_t) * (char *)g31) {
								// 0xa7afc
								v33 = 2 * v32;
								// branch -> 0xa7b00
							} else {
								v33 = v32;
							}
						}
						// 0xa7b00
						v47 = g32 + g35;
						v28 = v47;
						g28 = 64 * v33;
						if (__asm_rlwinm_(*(int32_t *)(v47 + 0x5568), 0, 30, 30) != 0) {
							// 0xa7b14
							g37 = g28 / 8;
							v48 = random(7);
							v36 = v28 + 404;
							v49 = (int32_t *)v36;
							*v49 = *v49 + v48;
							v34 = v28;
							v58 = *(int32_t *)(v34 + 408);
							if (*(int32_t *)(v34 + 404) > v58) {
								// 0xa7b40
								*(int32_t *)v36 = v58;
								// branch -> 0xa7b44
							}
							// 0xa7b44
							v50 = g32 + g35;
							v51 = (int32_t *)(v50 + 396);
							*v51 = v48 + *v51;
							v52 = (int32_t *)(v50 + 396);
							v59 = *(int32_t *)(v50 + 400);
							if (*v52 > v59) {
								// 0xa7b68
								*v52 = v59;
								// branch -> 0xa7b6c
							}
							// 0xa7b6c
							*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
							// branch -> 0xa7b78
						}
						// 0xa7b78
						if (g25 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
							// 0xa7b88
							function_8c028(1, (char)g26, g28);
							// branch -> 0xa7b98
						}
						// 0xa7b98
						g38 = 0;
						function_a579c(0x1000000 * g26 / 0x1000000, g28);
						// branch -> 0xa7ba8
					}
					// 0xa7ba8
					result = 1;
					// branch -> 0xa7bac
				} else {
					// 0xa7a44
					result = g27;
					// branch -> 0xa7bac
				}
				// 0xa7bac
				// branch -> 0xa7bb0
				// 0xa7bb0
				g10 = v1;
				return result;
			}
		}
		v30 = v8;
		int32_t v64 = 100; // 0xa7a4c
		if (*(char *)(v10 + 312) != 0) {
			// 0xa79f0
			g37 = 100;
			v11 = g30;
			v19 = g31;
			v30 = g35;
			v64 = random(5);
			// branch -> 0xa7a04
		}
		// 0xa7a04
		v37 = v30 + g33;
		v38 = (int32_t) * (char *)v19;
		int32_t v65 = 2 * (v38 - (int32_t) * (char *)(v37 + 436)); // 0xa7a24
		v39 = *(int32_t *)(v37 + 392) - v65 + *(int32_t *)v11;
		v29 = v39;
		if (v39 <= 0xffffffff) {
			// 0xa7a34
			v29 = 0;
			// branch -> 0xa7a38
		}
		// 0xa7a38
		v35 = v29;
		if (v29 >= 101) {
			// 0xa7a40
			v35 = 100;
			// branch -> 0xa7a44
		}
		// 0xa7a44
		if (g36 < v25) {
			// 0xa7a4c
			if (v64 < v35) {
				// 0xa7a54
				v40 = g32 + v30;
				v53 = *(int32_t *)(v37 + 56);
				v54 = *(int32_t *)(v37 + 60);
				v55 = *(int32_t *)(v40 + 56);
				g37 = GetDirection(v53, v54, v55, *(int32_t *)(v40 + 60));
				function_a5074(0x1000000 * g26 / 0x1000000);
				// branch -> 0xa7ba8
			} else {
				// 0xa7a80
				v41 = g32 + v30;
				v56 = *(int32_t *)(v41 + 0x5544);
				g37 = 1 - v56 + *(int32_t *)(v41 + 0x5548);
				v42 = random(5);
				v31 = v41;
				v43 = v56 + v42;
				v57 = *(int32_t *)(v31 + 0x555c);
				v60 = 0x51eb851f * (int64_t)(v43 * *(int32_t *)(v31 + 0x5550));
				v61 = (int32_t)(v60 / 0x100000000) >> 31;
				v44 = (v61 & -0x8000000 | (int32_t)(v60 / 0x2000000000)) + (int32_t)(v61 < 0);
				v45 = *(int32_t *)(v31 + 388) + v43 + v44 + v57;
				v33 = v45;
				if (*(char *)v17 == 0) {
					// 0xa7ae0
					g37 = 100;
					v46 = random(6);
					v32 = v45;
					if (v46 < (int32_t) * (char *)g31) {
						// 0xa7afc
						v33 = 2 * v32;
						// branch -> 0xa7b00
					} else {
						v33 = v32;
					}
				}
				// 0xa7b00
				v47 = g32 + g35;
				v28 = v47;
				g28 = 64 * v33;
				if (__asm_rlwinm_(*(int32_t *)(v47 + 0x5568), 0, 30, 30) != 0) {
					// 0xa7b14
					g37 = g28 / 8;
					v48 = random(7);
					v36 = v28 + 404;
					v49 = (int32_t *)v36;
					*v49 = *v49 + v48;
					v34 = v28;
					v58 = *(int32_t *)(v34 + 408);
					if (*(int32_t *)(v34 + 404) > v58) {
						// 0xa7b40
						*(int32_t *)v36 = v58;
						// branch -> 0xa7b44
					}
					// 0xa7b44
					v50 = g32 + g35;
					v51 = (int32_t *)(v50 + 396);
					*v51 = v48 + *v51;
					v52 = (int32_t *)(v50 + 396);
					v59 = *(int32_t *)(v50 + 400);
					if (*v52 > v59) {
						// 0xa7b68
						*v52 = v59;
						// branch -> 0xa7b6c
					}
					// 0xa7b6c
					*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
					// branch -> 0xa7b78
				}
				// 0xa7b78
				if (g25 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
					// 0xa7b88
					function_8c028(1, (char)g26, g28);
					// branch -> 0xa7b98
				}
				// 0xa7b98
				g38 = 0;
				function_a579c(0x1000000 * g26 / 0x1000000, g28);
				// branch -> 0xa7ba8
			}
			// 0xa7ba8
			result = 1;
			// branch -> 0xa7bac
		} else {
			// 0xa7a44
			result = g27;
			// branch -> 0xa7bac
		}
		// 0xa7bac
		result2 = result;
		// branch -> 0xa7bb0
	} else {
		// 0xa790c
		result2 = 0;
		// branch -> 0xa7bb0
	}
	// 0xa7bb0
	g10 = v1;
	return result2;
}

// Address range: 0xa7bc4 - 0xa7c3c
int32_t function_a7bc4(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7684);             // 0xa7bd0
	char v2 = *(char *)(*(int32_t *)v1 + a2 + 112 * a1); // 0xa7be0
	int32_t v3 = v2;                                     // 0xa7be4
	int32_t v4;
	if (v2 < 1) {
		// 0xa7bf8
		v4 = -1 - v3;
		// branch -> 0xa7c04
	} else {
		// 0xa7bec
		v4 = v3 - 1;
		// branch -> 0xa7c04
	}
	// 0xa7c04
	g37 = v4;
	int32_t result = 0;
	if (*(char *)(*(int32_t *)(g23 - 0x7688) + 120 * v4 + 52) == 1) {
		// 0xa7c1c
		function_9d008();
		result = 1;
		// branch -> 0xa7c2c
	}
	// 0xa7c2c
	return result;
}

// Address range: 0xa7c3c - 0xa7fa4
int32_t function_a7c3c(int32_t a1)
{
	g26 = a1;
	g35 = *(int32_t *)(g23 - 0x767c);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa7c50
	g36 = v1;
	g27 = 0;
	int32_t v2 = a1; // 0xa7c70
	if (a1 >= 4) {
		// 0xa7c64
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x59e4));
		v1 = g36;
		v2 = g26;
		// branch -> 0xa7c70
	}
	int32_t v3 = 0x55ec * v2; // 0xa7c70
	g33 = v3;
	int32_t v4 = v3 + v1;     // 0xa7c74
	int32_t v5 = v4 + 0x5568; // 0xa7c78
	g31 = v5;
	int32_t v6 = v4 + 140;       // 0xa7c80
	int32_t v7 = *(int32_t *)v6; // r4
	g32 = v6;
	if (__asm_rlwinm_(*(int32_t *)v5, 0, 14, 14) != 0) {
		// 0xa7c8c
		if (v7 == 1) {
			// 0xa7c94
			*(int32_t *)g32 = 2;
			// branch -> 0xa7c9c
		}
	}
	// 0xa7c9c
	int32_t v8;
	int32_t v9;
	int32_t v10;
	int32_t v11;       // 0xa7cd0
	int32_t v12;       // 0xa7d00
	int32_t v13;       // 0xa7d24
	int32_t v14;       // 0xa7d48
	int32_t v15;       // 0xa7d4c
	int32_t v16;       // 0xa7d5c
	int32_t v17;       // 0xa7e5c
	int32_t v18;       // 0xa7e64
	int32_t v19;       // 0xa7ea4
	int32_t v20;       // 0xa7f10
	int32_t v21;       // 0xa7f24
	int32_t *v22;      // 0xa7ce8
	int32_t *v23;      // 0xa7d10
	int32_t v24;       // 0xa7d20
	int32_t v25;       // 0xa7d60
	int32_t v26;       // 0xa7d70
	int32_t v27;       // 0xa7eec
	int32_t v28;       // 0xa7d1c
	int32_t v29;       // 0xa7d58
	int32_t v30;       // 0xa7d80
	int32_t v31;       // 0xa7d8c
	int32_t v32;       // 0xa7eac
	int32_t v33;       // 0xa7f5c
	int32_t v34;       // 0xa7d74
	int32_t v35;       // 0xa7ef8
	int32_t v36;       // 0xa7f74
	int32_t v37;       // 0xa7d78
	int16_t v38;       // 0xa7d98
	int16_t v39;       // 0xa7e6c
	unsigned char v40; // 0xa7eb0
	int32_t v41;       // 0xa7d98
	int32_t v42;       // 0xa7e6c
	int32_t v43;       // 0xa7eb0
	if (__asm_rlwinm_(*(int32_t *)g31, 0, 13, 13) != 0) {
		int32_t v44 = v7; // 0xa7ca8
		if (v44 != 1) {
			// 0xa7cb0
			if (v44 != 3) {
				// 0xa7cc4
				int32_t result; // 0xa7fa0
				int32_t v45;    // 0xa7e94
				if (__asm_rlwinm_(*(int32_t *)g31, 0, 12, 12) != 0) {
					// 0xa7cd0
					v11 = v7;
					if (v11 != 1) {
						// 0xa7cd8
						if (v11 != 3) {
							// 0xa7ce0
							if (v11 != 5) {
								// 0xa7cf4
								if (__asm_rlwinm_(*(int32_t *)g31, 0, 11, 11) != 0) {
									// 0xa7d00
									v12 = v7;
									if (v12 != 1) {
										// 0xa7d08
										if (v12 != 4) {
											// 0xa7d1c
											v28 = g33 + g36;
											v24 = v28 + 752;
											g28 = v24;
											v13 = g32;
											v15 = v24;
											v14 = v13;
											if (*(int32_t *)v13 == *(int32_t *)v24 - 1) {
												// 0xa7d34
												g34 = 9;
												g38 = *(int32_t *)(v28 + 60);
												PlaySfxLoc(9);
												v15 = g28;
												v14 = g32;
												// branch -> 0xa7d48
											}
											// 0xa7d48
											if (*(int32_t *)v14 != *(int32_t *)v15) {
												// 0xa7f5c
												v33 = g33 + g36;
												if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
													// 0xa7f70
													StartStand(g26, *(int32_t *)(v33 + 112));
													function_a2af4(g26);
													result = 1;
													// branch -> 0xa7f90
												} else {
													// 0xa7f8c
													result = 0;
													// branch -> 0xa7f90
												}
												// 0xa7f90
												return result;
											}
											// 0xa7d58
											v29 = g33 + g36;
											v16 = g23;
											v25 = v29 + 112;
											g30 = v25;
											v26 = 4 * *(int32_t *)v25;
											v34 = *(int32_t *)(v29 + 60);
											v37 = *(int32_t *)(v26 + *(int32_t *)(v16 - 0x71ec));
											v30 = v37 + *(int32_t *)(v29 + 56);
											v31 = *(int32_t *)(*(int32_t *)(v16 - 0x71f0) + v26) + v34;
											v38 = *(int16_t *)(*(int32_t *)g35 + 2 * v31 + 224 * v30);
											v41 = v38;
											g29 = v30;
											g28 = v31;
											if (v38 != 0) {
												// 0xa7dac
												if (v38 < 0) {
													// 0xa7dbc
													v10 = -1 - v41;
													// branch -> 0xa7dc4
												} else {
													// 0xa7db4
													v10 = v41 - 1;
													// branch -> 0xa7dc4
												}
												// 0xa7dc4
												if (function_87558(v10) != 0) {
													// 0xa7dd0
													*(int32_t *)(g36 + 464 + g33) = 0;
													// branch -> 0xa7f90
													// 0xa7f90
													return 0;
												}
											}
											// 0xa7de4
											if (__asm_rlwinm_(*(int32_t *)g31, 0, 27, 27) != 0) {
												// 0xa7df0
												g13 = g26;
												AddMissile(g29, g28, 1, 0, 0, 64, 0, 0, 0);
												// branch -> 0xa7e20
											}
											// 0xa7e20
											if (__asm_rlwinm_(*(int32_t *)g31, 0, 26, 26) != 0) {
												// 0xa7e2c
												g13 = g26;
												AddMissile(g29, g28, 2, 0, 0, 64, 0, 0, 0);
												// branch -> 0xa7e5c
											}
											// 0xa7e5c
											v17 = g29;
											v18 = g28;
											v39 = *(int16_t *)(2 * v18 + 224 * v17 + *(int32_t *)g35);
											v42 = v39;
											if (v39 != 0) {
												// 0xa7e78
												if (v39 < 0) {
													// 0xa7e88
													v8 = -1 - v42;
													// branch -> 0xa7e90
												} else {
													// 0xa7e80
													v8 = v42 - 1;
													// branch -> 0xa7e90
												}
												// 0xa7e90
												g37 = v8;
												v45 = function_a7324(g26);
												// branch -> 0xa7f24
												// 0xa7f24
												if (v45 != 0) {
													// 0xa7f2c
													g37 = 30;
													if (function_a70dc(g26, 30) != 0) {
														// 0xa7f40
														StartStand(g26, *(int32_t *)g30);
														function_a2af4(g26);
														// branch -> 0xa7f90
														// 0xa7f90
														return 1;
													}
												}
												// 0xa7f5c
												v33 = g33 + g36;
												if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
													// 0xa7f70
													StartStand(g26, *(int32_t *)(v33 + 112));
													function_a2af4(g26);
													result = 1;
													// branch -> 0xa7f90
												} else {
													// 0xa7f8c
													result = 0;
													// branch -> 0xa7f90
												}
												// 0xa7f90
												return result;
											}
											// 0xa7ea0
											v19 = g23;
											v32 = v18 + 112 * v17;
											v40 = *(char *)(*(int32_t *)*(int32_t *)(v19 - 0x7680) + v32);
											v43 = v40;
											if (v40 != 0) {
												// 0xa7ebc
												if (*(int32_t *)(v19 - 0x2444) == 0) {
													// 0xa7ecc
													if (0x1000000 * v43 < 0) {
														// 0xa7edc
														v9 = 0x1000000 * (-1 - v43) / 0x1000000;
														// branch -> 0xa7ee8
													} else {
														// 0xa7ed4
														v9 = v43 - 1;
														// branch -> 0xa7ee8
													}
													// 0xa7ee8
													g37 = v9;
													v27 = function_a7894(g26);
													// branch -> 0xa7f24
													// 0xa7f24
													if (v27 != 0) {
														// 0xa7f2c
														g37 = 30;
														if (function_a70dc(g26, 30) != 0) {
															// 0xa7f40
															StartStand(g26, *(int32_t *)g30);
															function_a2af4(g26);
															// branch -> 0xa7f90
															// 0xa7f90
															return 1;
														}
													}
													// 0xa7f5c
													v33 = g33 + g36;
													if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
														// 0xa7f70
														StartStand(g26, *(int32_t *)(v33 + 112));
														function_a2af4(g26);
														result = 1;
														// branch -> 0xa7f90
													} else {
														// 0xa7f8c
														result = 0;
														// branch -> 0xa7f90
													}
													// 0xa7f90
													return result;
												}
											}
											// 0xa7ef8
											v35 = *(int32_t *)(v19 - 0x7684);
											if (*(char *)(*(int32_t *)v35 + v32) < 1) {
												// 0xa7f24
												v21 = g27;
												// branch -> 0xa7f24
											} else {
												// 0xa7f10
												v20 = g26;
												g34 = v20;
												v21 = function_a7bc4(v20, v17, v18);
												// branch -> 0xa7f24
											}
											// 0xa7f24
											if (v21 != 0) {
												// 0xa7f2c
												g37 = 30;
												if (function_a70dc(g26, 30) != 0) {
													// 0xa7f40
													StartStand(g26, *(int32_t *)g30);
													function_a2af4(g26);
													// branch -> 0xa7f90
													// 0xa7f90
													return 1;
												}
											}
											// 0xa7f5c
											v33 = g33 + g36;
											if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
												// 0xa7f70
												StartStand(g26, *(int32_t *)(v33 + 112));
												function_a2af4(g26);
												result = 1;
												// branch -> 0xa7f90
											} else {
												// 0xa7f8c
												result = 0;
												// branch -> 0xa7f90
											}
											// 0xa7f90
											return result;
										}
									}
									// 0xa7d10
									v23 = (int32_t *)g32;
									*v23 = *v23 + 2;
									// branch -> 0xa7d1c
								}
								// 0xa7d1c
								v28 = g33 + g36;
								v24 = v28 + 752;
								g28 = v24;
								v13 = g32;
								v15 = v24;
								v14 = v13;
								if (*(int32_t *)v13 == *(int32_t *)v24 - 1) {
									// 0xa7d34
									g34 = 9;
									g38 = *(int32_t *)(v28 + 60);
									PlaySfxLoc(9);
									v15 = g28;
									v14 = g32;
									// branch -> 0xa7d48
								}
								// 0xa7d48
								if (*(int32_t *)v14 != *(int32_t *)v15) {
									// 0xa7f5c
									v33 = g33 + g36;
									if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
										// 0xa7f70
										StartStand(g26, *(int32_t *)(v33 + 112));
										function_a2af4(g26);
										result = 1;
										// branch -> 0xa7f90
									} else {
										// 0xa7f8c
										result = 0;
										// branch -> 0xa7f90
									}
									// 0xa7f90
									return result;
								}
								// 0xa7d58
								v29 = g33 + g36;
								v16 = g23;
								v25 = v29 + 112;
								g30 = v25;
								v26 = 4 * *(int32_t *)v25;
								v34 = *(int32_t *)(v29 + 60);
								v37 = *(int32_t *)(v26 + *(int32_t *)(v16 - 0x71ec));
								v30 = v37 + *(int32_t *)(v29 + 56);
								v31 = *(int32_t *)(*(int32_t *)(v16 - 0x71f0) + v26) + v34;
								v38 = *(int16_t *)(*(int32_t *)g35 + 2 * v31 + 224 * v30);
								v41 = v38;
								g29 = v30;
								g28 = v31;
								if (v38 != 0) {
									// 0xa7dac
									if (v38 < 0) {
										// 0xa7dbc
										v10 = -1 - v41;
										// branch -> 0xa7dc4
									} else {
										// 0xa7db4
										v10 = v41 - 1;
										// branch -> 0xa7dc4
									}
									// 0xa7dc4
									if (function_87558(v10) != 0) {
										// 0xa7dd0
										*(int32_t *)(g36 + 464 + g33) = 0;
										// branch -> 0xa7f90
										// 0xa7f90
										return 0;
									}
								}
								// 0xa7de4
								if (__asm_rlwinm_(*(int32_t *)g31, 0, 27, 27) != 0) {
									// 0xa7df0
									g13 = g26;
									AddMissile(g29, g28, 1, 0, 0, 64, 0, 0, 0);
									// branch -> 0xa7e20
								}
								// 0xa7e20
								if (__asm_rlwinm_(*(int32_t *)g31, 0, 26, 26) != 0) {
									// 0xa7e2c
									g13 = g26;
									AddMissile(g29, g28, 2, 0, 0, 64, 0, 0, 0);
									// branch -> 0xa7e5c
								}
								// 0xa7e5c
								v17 = g29;
								v18 = g28;
								v39 = *(int16_t *)(2 * v18 + 224 * v17 + *(int32_t *)g35);
								v42 = v39;
								if (v39 != 0) {
									// 0xa7e78
									if (v39 < 0) {
										// 0xa7e88
										v8 = -1 - v42;
										// branch -> 0xa7e90
									} else {
										// 0xa7e80
										v8 = v42 - 1;
										// branch -> 0xa7e90
									}
									// 0xa7e90
									g37 = v8;
									v45 = function_a7324(g26);
									// branch -> 0xa7f24
									// 0xa7f24
									if (v45 != 0) {
										// 0xa7f2c
										g37 = 30;
										if (function_a70dc(g26, 30) != 0) {
											// 0xa7f40
											StartStand(g26, *(int32_t *)g30);
											function_a2af4(g26);
											// branch -> 0xa7f90
											// 0xa7f90
											return 1;
										}
									}
									// 0xa7f5c
									v33 = g33 + g36;
									if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
										// 0xa7f70
										StartStand(g26, *(int32_t *)(v33 + 112));
										function_a2af4(g26);
										result = 1;
										// branch -> 0xa7f90
									} else {
										// 0xa7f8c
										result = 0;
										// branch -> 0xa7f90
									}
									// 0xa7f90
									return result;
								}
								// 0xa7ea0
								v19 = g23;
								v32 = v18 + 112 * v17;
								v40 = *(char *)(*(int32_t *)*(int32_t *)(v19 - 0x7680) + v32);
								v43 = v40;
								if (v40 != 0) {
									// 0xa7ebc
									if (*(int32_t *)(v19 - 0x2444) == 0) {
										// 0xa7ecc
										if (0x1000000 * v43 < 0) {
											// 0xa7edc
											v9 = 0x1000000 * (-1 - v43) / 0x1000000;
											// branch -> 0xa7ee8
										} else {
											// 0xa7ed4
											v9 = v43 - 1;
											// branch -> 0xa7ee8
										}
										// 0xa7ee8
										g37 = v9;
										v27 = function_a7894(g26);
										// branch -> 0xa7f24
										// 0xa7f24
										if (v27 != 0) {
											// 0xa7f2c
											g37 = 30;
											if (function_a70dc(g26, 30) != 0) {
												// 0xa7f40
												StartStand(g26, *(int32_t *)g30);
												function_a2af4(g26);
												// branch -> 0xa7f90
												// 0xa7f90
												return 1;
											}
										}
										// 0xa7f5c
										v33 = g33 + g36;
										if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
											// 0xa7f70
											StartStand(g26, *(int32_t *)(v33 + 112));
											function_a2af4(g26);
											result = 1;
											// branch -> 0xa7f90
										} else {
											// 0xa7f8c
											result = 0;
											// branch -> 0xa7f90
										}
										// 0xa7f90
										return result;
									}
								}
								// 0xa7ef8
								v35 = *(int32_t *)(v19 - 0x7684);
								if (*(char *)(*(int32_t *)v35 + v32) < 1) {
									// 0xa7f24
									v21 = g27;
									// branch -> 0xa7f24
								} else {
									// 0xa7f10
									v20 = g26;
									g34 = v20;
									v21 = function_a7bc4(v20, v17, v18);
									// branch -> 0xa7f24
								}
								// 0xa7f24
								if (v21 != 0) {
									// 0xa7f2c
									g37 = 30;
									if (function_a70dc(g26, 30) != 0) {
										// 0xa7f40
										StartStand(g26, *(int32_t *)g30);
										function_a2af4(g26);
										// branch -> 0xa7f90
										// 0xa7f90
										return 1;
									}
								}
								// 0xa7f5c
								v33 = g33 + g36;
								if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
									// 0xa7f70
									StartStand(g26, *(int32_t *)(v33 + 112));
									function_a2af4(g26);
									result = 1;
									// branch -> 0xa7f90
								} else {
									// 0xa7f8c
									result = 0;
									// branch -> 0xa7f90
								}
								// 0xa7f90
								return result;
							}
						}
					}
					// 0xa7ce8
					v22 = (int32_t *)g32;
					*v22 = *v22 + 1;
					// branch -> 0xa7cf4
				}
				// 0xa7cf4
				if (__asm_rlwinm_(*(int32_t *)g31, 0, 11, 11) != 0) {
					// 0xa7d00
					v12 = v7;
					if (v12 != 1) {
						// 0xa7d08
						if (v12 != 4) {
							// 0xa7d1c
							v28 = g33 + g36;
							v24 = v28 + 752;
							g28 = v24;
							v13 = g32;
							v15 = v24;
							v14 = v13;
							if (*(int32_t *)v13 == *(int32_t *)v24 - 1) {
								// 0xa7d34
								g34 = 9;
								g38 = *(int32_t *)(v28 + 60);
								PlaySfxLoc(9);
								v15 = g28;
								v14 = g32;
								// branch -> 0xa7d48
							}
							// 0xa7d48
							if (*(int32_t *)v14 == *(int32_t *)v15) {
								// 0xa7d58
								v29 = g33 + g36;
								v16 = g23;
								v25 = v29 + 112;
								g30 = v25;
								v26 = 4 * *(int32_t *)v25;
								v34 = *(int32_t *)(v29 + 60);
								v37 = *(int32_t *)(v26 + *(int32_t *)(v16 - 0x71ec));
								v30 = v37 + *(int32_t *)(v29 + 56);
								v31 = *(int32_t *)(*(int32_t *)(v16 - 0x71f0) + v26) + v34;
								v38 = *(int16_t *)(*(int32_t *)g35 + 2 * v31 + 224 * v30);
								v41 = v38;
								g29 = v30;
								g28 = v31;
								if (v38 != 0) {
									// 0xa7dac
									if (v38 < 0) {
										// 0xa7dbc
										v10 = -1 - v41;
										// branch -> 0xa7dc4
									} else {
										// 0xa7db4
										v10 = v41 - 1;
										// branch -> 0xa7dc4
									}
									// 0xa7dc4
									if (function_87558(v10) != 0) {
										// 0xa7dd0
										*(int32_t *)(g36 + 464 + g33) = 0;
										// branch -> 0xa7f90
										// 0xa7f90
										return 0;
									}
								}
								// 0xa7de4
								if (__asm_rlwinm_(*(int32_t *)g31, 0, 27, 27) != 0) {
									// 0xa7df0
									g13 = g26;
									AddMissile(g29, g28, 1, 0, 0, 64, 0, 0, 0);
									// branch -> 0xa7e20
								}
								// 0xa7e20
								if (__asm_rlwinm_(*(int32_t *)g31, 0, 26, 26) != 0) {
									// 0xa7e2c
									g13 = g26;
									AddMissile(g29, g28, 2, 0, 0, 64, 0, 0, 0);
									// branch -> 0xa7e5c
								}
								// 0xa7e5c
								v17 = g29;
								v18 = g28;
								v39 = *(int16_t *)(2 * v18 + 224 * v17 + *(int32_t *)g35);
								v42 = v39;
								if (v39 != 0) {
									// 0xa7e78
									if (v39 < 0) {
										// 0xa7e88
										v8 = -1 - v42;
										// branch -> 0xa7e90
									} else {
										// 0xa7e80
										v8 = v42 - 1;
										// branch -> 0xa7e90
									}
									// 0xa7e90
									g37 = v8;
									v45 = function_a7324(g26);
									// branch -> 0xa7f24
									// 0xa7f24
									if (v45 != 0) {
										// 0xa7f2c
										g37 = 30;
										if (function_a70dc(g26, 30) != 0) {
											// 0xa7f40
											StartStand(g26, *(int32_t *)g30);
											function_a2af4(g26);
											// branch -> 0xa7f90
											// 0xa7f90
											return 1;
										}
									}
									// 0xa7f5c
									v33 = g33 + g36;
									if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
										// 0xa7f70
										StartStand(g26, *(int32_t *)(v33 + 112));
										function_a2af4(g26);
										result = 1;
										// branch -> 0xa7f90
									} else {
										// 0xa7f8c
										result = 0;
										// branch -> 0xa7f90
									}
									// 0xa7f90
									return result;
								}
								// 0xa7ea0
								v19 = g23;
								v32 = v18 + 112 * v17;
								v40 = *(char *)(*(int32_t *)*(int32_t *)(v19 - 0x7680) + v32);
								v43 = v40;
								if (v40 != 0) {
									// 0xa7ebc
									if (*(int32_t *)(v19 - 0x2444) == 0) {
										// 0xa7ecc
										if (0x1000000 * v43 < 0) {
											// 0xa7edc
											v9 = 0x1000000 * (-1 - v43) / 0x1000000;
											// branch -> 0xa7ee8
										} else {
											// 0xa7ed4
											v9 = v43 - 1;
											// branch -> 0xa7ee8
										}
										// 0xa7ee8
										g37 = v9;
										v27 = function_a7894(g26);
										// branch -> 0xa7f24
										// 0xa7f24
										if (v27 != 0) {
											// 0xa7f2c
											g37 = 30;
											if (function_a70dc(g26, 30) != 0) {
												// 0xa7f40
												StartStand(g26, *(int32_t *)g30);
												function_a2af4(g26);
												// branch -> 0xa7f90
												// 0xa7f90
												return 1;
											}
										}
										// 0xa7f5c
										v33 = g33 + g36;
										if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
											// 0xa7f70
											StartStand(g26, *(int32_t *)(v33 + 112));
											function_a2af4(g26);
											result = 1;
											// branch -> 0xa7f90
										} else {
											// 0xa7f8c
											result = 0;
											// branch -> 0xa7f90
										}
										// 0xa7f90
										return result;
									}
								}
								// 0xa7ef8
								v35 = *(int32_t *)(v19 - 0x7684);
								if (*(char *)(*(int32_t *)v35 + v32) < 1) {
									// 0xa7f24
									v21 = g27;
									// branch -> 0xa7f24
								} else {
									// 0xa7f10
									v20 = g26;
									g34 = v20;
									v21 = function_a7bc4(v20, v17, v18);
									// branch -> 0xa7f24
								}
								// 0xa7f24
								if (v21 != 0) {
									// 0xa7f2c
									g37 = 30;
									if (function_a70dc(g26, 30) != 0) {
										// 0xa7f40
										StartStand(g26, *(int32_t *)g30);
										function_a2af4(g26);
										// branch -> 0xa7f90
										// 0xa7f90
										return 1;
									}
								}
								// 0xa7f5c
								v33 = g33 + g36;
								if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
									// 0xa7f70
									StartStand(g26, *(int32_t *)(v33 + 112));
									function_a2af4(g26);
									result = 1;
									// branch -> 0xa7f90
								} else {
									// 0xa7f8c
									result = 0;
									// branch -> 0xa7f90
								}
								// 0xa7f90
								return result;
							}
							// 0xa7f5c
							v33 = g33 + g36;
							if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
								// 0xa7f70
								StartStand(g26, *(int32_t *)(v33 + 112));
								function_a2af4(g26);
								// branch -> 0xa7f90
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0xa7d10
					v23 = (int32_t *)g32;
					*v23 = *v23 + 2;
					// branch -> 0xa7d1c
				}
				// 0xa7d1c
				v28 = g33 + g36;
				v24 = v28 + 752;
				g28 = v24;
				v13 = g32;
				v15 = v24;
				v14 = v13;
				if (*(int32_t *)v13 == *(int32_t *)v24 - 1) {
					// 0xa7d34
					g34 = 9;
					g38 = *(int32_t *)(v28 + 60);
					PlaySfxLoc(9);
					v15 = g28;
					v14 = g32;
					// branch -> 0xa7d48
				}
				// 0xa7d48
				if (*(int32_t *)v14 == *(int32_t *)v15) {
					// 0xa7d58
					v29 = g33 + g36;
					v16 = g23;
					v25 = v29 + 112;
					g30 = v25;
					v26 = 4 * *(int32_t *)v25;
					v34 = *(int32_t *)(v29 + 60);
					v37 = *(int32_t *)(v26 + *(int32_t *)(v16 - 0x71ec));
					v30 = v37 + *(int32_t *)(v29 + 56);
					v31 = *(int32_t *)(*(int32_t *)(v16 - 0x71f0) + v26) + v34;
					v38 = *(int16_t *)(*(int32_t *)g35 + 2 * v31 + 224 * v30);
					v41 = v38;
					g29 = v30;
					g28 = v31;
					if (v38 != 0) {
						// 0xa7dac
						if (v38 < 0) {
							// 0xa7dbc
							v10 = -1 - v41;
							// branch -> 0xa7dc4
						} else {
							// 0xa7db4
							v10 = v41 - 1;
							// branch -> 0xa7dc4
						}
						// 0xa7dc4
						if (function_87558(v10) != 0) {
							// 0xa7dd0
							*(int32_t *)(g36 + 464 + g33) = 0;
							// branch -> 0xa7f90
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0xa7de4
					if (__asm_rlwinm_(*(int32_t *)g31, 0, 27, 27) != 0) {
						// 0xa7df0
						g13 = g26;
						AddMissile(g29, g28, 1, 0, 0, 64, 0, 0, 0);
						// branch -> 0xa7e20
					}
					// 0xa7e20
					if (__asm_rlwinm_(*(int32_t *)g31, 0, 26, 26) != 0) {
						// 0xa7e2c
						g13 = g26;
						AddMissile(g29, g28, 2, 0, 0, 64, 0, 0, 0);
						// branch -> 0xa7e5c
					}
					// 0xa7e5c
					v17 = g29;
					v18 = g28;
					v39 = *(int16_t *)(2 * v18 + 224 * v17 + *(int32_t *)g35);
					v42 = v39;
					if (v39 == 0) {
						// 0xa7ea0
						v19 = g23;
						v32 = v18 + 112 * v17;
						v40 = *(char *)(*(int32_t *)*(int32_t *)(v19 - 0x7680) + v32);
						v43 = v40;
						if (v40 != 0) {
							// 0xa7ebc
							if (*(int32_t *)(v19 - 0x2444) == 0) {
								// 0xa7ecc
								if (0x1000000 * v43 < 0) {
									// 0xa7edc
									v9 = 0x1000000 * (-1 - v43) / 0x1000000;
									// branch -> 0xa7ee8
								} else {
									// 0xa7ed4
									v9 = v43 - 1;
									// branch -> 0xa7ee8
								}
								// 0xa7ee8
								g37 = v9;
								v27 = function_a7894(g26);
								// branch -> 0xa7f24
								// 0xa7f24
								if (v27 != 0) {
									// 0xa7f2c
									g37 = 30;
									if (function_a70dc(g26, 30) != 0) {
										// 0xa7f40
										StartStand(g26, *(int32_t *)g30);
										function_a2af4(g26);
										// branch -> 0xa7f90
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0xa7f5c
								v33 = g33 + g36;
								if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
									// 0xa7f70
									StartStand(g26, *(int32_t *)(v33 + 112));
									function_a2af4(g26);
									// branch -> 0xa7f90
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0xa7ef8
						v35 = *(int32_t *)(v19 - 0x7684);
						if (*(char *)(*(int32_t *)v35 + v32) < 1) {
							// 0xa7f24
							v21 = g27;
							// branch -> 0xa7f24
						} else {
							// 0xa7f10
							v20 = g26;
							g34 = v20;
							v21 = function_a7bc4(v20, v17, v18);
							// branch -> 0xa7f24
						}
						// 0xa7f24
						if (v21 != 0) {
							// 0xa7f2c
							g37 = 30;
							if (function_a70dc(g26, 30) != 0) {
								// 0xa7f40
								StartStand(g26, *(int32_t *)g30);
								function_a2af4(g26);
								// branch -> 0xa7f90
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0xa7f5c
						v33 = g33 + g36;
						if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
							// 0xa7f70
							StartStand(g26, *(int32_t *)(v33 + 112));
							function_a2af4(g26);
							// branch -> 0xa7f90
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0xa7e78
						if (v39 < 0) {
							// 0xa7e88
							v8 = -1 - v42;
							// branch -> 0xa7e90
						} else {
							// 0xa7e80
							v8 = v42 - 1;
							// branch -> 0xa7e90
						}
						// 0xa7e90
						g37 = v8;
						v21 = function_a7324(g26);
						// branch -> 0xa7f24
					}
					// 0xa7f24
					if (v21 != 0) {
						// 0xa7f2c
						g37 = 30;
						if (function_a70dc(g26, 30) != 0) {
							// 0xa7f40
							StartStand(g26, *(int32_t *)g30);
							function_a2af4(g26);
							// branch -> 0xa7f90
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0xa7f5c
					v33 = g33 + g36;
					v7 = v33;
					if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
						// 0xa7f70
						v36 = *(int32_t *)(v33 + 112);
						v7 = v36;
						StartStand(g26, v36);
						function_a2af4(g26);
						// branch -> 0xa7f90
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					// 0xa7f5c
					v33 = g33 + g36;
					v7 = v33;
					if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
						// 0xa7f70
						v36 = *(int32_t *)(v33 + 112);
						v7 = v36;
						StartStand(g26, v36);
						function_a2af4(g26);
						// branch -> 0xa7f90
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		int32_t *v46 = (int32_t *)g32; // 0xa7cb8
		*v46 = *v46 + 1;
		// branch -> 0xa7cc4
	}
	// 0xa7cc4
	if (__asm_rlwinm_(*(int32_t *)g31, 0, 12, 12) != 0) {
		// 0xa7cd0
		v11 = v7;
		if (v11 != 1) {
			// 0xa7cd8
			if (v11 != 3) {
				// 0xa7ce0
				if (v11 != 5) {
					// 0xa7cf4
					if (__asm_rlwinm_(*(int32_t *)g31, 0, 11, 11) != 0) {
						// 0xa7d00
						v12 = v7;
						if (v12 != 1) {
							// 0xa7d08
							if (v12 != 4) {
								// 0xa7d1c
								v28 = g33 + g36;
								v24 = v28 + 752;
								g28 = v24;
								v13 = g32;
								v15 = v24;
								v14 = v13;
								if (*(int32_t *)v13 == *(int32_t *)v24 - 1) {
									// 0xa7d34
									g34 = 9;
									g38 = *(int32_t *)(v28 + 60);
									PlaySfxLoc(9);
									v15 = g28;
									v14 = g32;
									// branch -> 0xa7d48
								}
								// 0xa7d48
								if (*(int32_t *)v14 == *(int32_t *)v15) {
									// 0xa7d58
									v29 = g33 + g36;
									v16 = g23;
									v25 = v29 + 112;
									g30 = v25;
									v26 = 4 * *(int32_t *)v25;
									v34 = *(int32_t *)(v29 + 60);
									v37 = *(int32_t *)(v26 + *(int32_t *)(v16 - 0x71ec));
									v30 = v37 + *(int32_t *)(v29 + 56);
									v31 = *(int32_t *)(*(int32_t *)(v16 - 0x71f0) + v26) + v34;
									v38 = *(int16_t *)(*(int32_t *)g35 + 2 * v31 + 224 * v30);
									v41 = v38;
									g29 = v30;
									g28 = v31;
									if (v38 != 0) {
										// 0xa7dac
										if (v38 < 0) {
											// 0xa7dbc
											v10 = -1 - v41;
											// branch -> 0xa7dc4
										} else {
											// 0xa7db4
											v10 = v41 - 1;
											// branch -> 0xa7dc4
										}
										// 0xa7dc4
										if (function_87558(v10) != 0) {
											// 0xa7dd0
											*(int32_t *)(g36 + 464 + g33) = 0;
											// branch -> 0xa7f90
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0xa7de4
									if (__asm_rlwinm_(*(int32_t *)g31, 0, 27, 27) != 0) {
										// 0xa7df0
										g13 = g26;
										AddMissile(g29, g28, 1, 0, 0, 64, 0, 0, 0);
										// branch -> 0xa7e20
									}
									// 0xa7e20
									if (__asm_rlwinm_(*(int32_t *)g31, 0, 26, 26) != 0) {
										// 0xa7e2c
										g13 = g26;
										AddMissile(g29, g28, 2, 0, 0, 64, 0, 0, 0);
										// branch -> 0xa7e5c
									}
									// 0xa7e5c
									v17 = g29;
									v18 = g28;
									v39 = *(int16_t *)(2 * v18 + 224 * v17 + *(int32_t *)g35);
									v42 = v39;
									if (v39 == 0) {
										// 0xa7ea0
										v19 = g23;
										v32 = v18 + 112 * v17;
										v40 = *(char *)(*(int32_t *)*(int32_t *)(v19 - 0x7680) + v32);
										v43 = v40;
										if (v40 != 0) {
											// 0xa7ebc
											if (*(int32_t *)(v19 - 0x2444) == 0) {
												// 0xa7ecc
												if (0x1000000 * v43 < 0) {
													// 0xa7edc
													v9 = 0x1000000 * (-1 - v43) / 0x1000000;
													// branch -> 0xa7ee8
												} else {
													// 0xa7ed4
													v9 = v43 - 1;
													// branch -> 0xa7ee8
												}
												// 0xa7ee8
												g37 = v9;
												v27 = function_a7894(g26);
												// branch -> 0xa7f24
												// 0xa7f24
												if (v27 != 0) {
													// 0xa7f2c
													g37 = 30;
													if (function_a70dc(g26, 30) != 0) {
														// 0xa7f40
														StartStand(g26, *(int32_t *)g30);
														function_a2af4(g26);
														// branch -> 0xa7f90
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0xa7f5c
												v33 = g33 + g36;
												if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
													// 0xa7f70
													StartStand(g26, *(int32_t *)(v33 + 112));
													function_a2af4(g26);
													// branch -> 0xa7f90
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0xa7ef8
										v35 = *(int32_t *)(v19 - 0x7684);
										if (*(char *)(*(int32_t *)v35 + v32) < 1) {
											// 0xa7f24
											v21 = g27;
											// branch -> 0xa7f24
										} else {
											// 0xa7f10
											v20 = g26;
											g34 = v20;
											v21 = function_a7bc4(v20, v17, v18);
											// branch -> 0xa7f24
										}
										// 0xa7f24
										if (v21 != 0) {
											// 0xa7f2c
											g37 = 30;
											if (function_a70dc(g26, 30) != 0) {
												// 0xa7f40
												StartStand(g26, *(int32_t *)g30);
												function_a2af4(g26);
												// branch -> 0xa7f90
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0xa7f5c
										v33 = g33 + g36;
										if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
											// 0xa7f70
											StartStand(g26, *(int32_t *)(v33 + 112));
											function_a2af4(g26);
											// branch -> 0xa7f90
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0xa7e78
										if (v39 < 0) {
											// 0xa7e88
											v8 = -1 - v42;
											// branch -> 0xa7e90
										} else {
											// 0xa7e80
											v8 = v42 - 1;
											// branch -> 0xa7e90
										}
										// 0xa7e90
										g37 = v8;
										v21 = function_a7324(g26);
										// branch -> 0xa7f24
									}
									// 0xa7f24
									if (v21 != 0) {
										// 0xa7f2c
										g37 = 30;
										if (function_a70dc(g26, 30) != 0) {
											// 0xa7f40
											StartStand(g26, *(int32_t *)g30);
											function_a2af4(g26);
											// branch -> 0xa7f90
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0xa7f5c
									v33 = g33 + g36;
									if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
										// 0xa7f70
										StartStand(g26, *(int32_t *)(v33 + 112));
										function_a2af4(g26);
										// branch -> 0xa7f90
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0xa7f5c
									v33 = g33 + g36;
									if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
										// 0xa7f70
										StartStand(g26, *(int32_t *)(v33 + 112));
										function_a2af4(g26);
										// branch -> 0xa7f90
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0xa7d10
						v23 = (int32_t *)g32;
						*v23 = *v23 + 2;
						// branch -> 0xa7d1c
					}
					// 0xa7d1c
					v28 = g33 + g36;
					v24 = v28 + 752;
					g28 = v24;
					v13 = g32;
					v15 = v24;
					v14 = v13;
					if (*(int32_t *)v13 == *(int32_t *)v24 - 1) {
						// 0xa7d34
						g34 = 9;
						g38 = *(int32_t *)(v28 + 60);
						PlaySfxLoc(9);
						v15 = g28;
						v14 = g32;
						// branch -> 0xa7d48
					}
					// 0xa7d48
					if (*(int32_t *)v14 == *(int32_t *)v15) {
						// 0xa7d58
						v29 = g33 + g36;
						v16 = g23;
						v25 = v29 + 112;
						g30 = v25;
						v26 = 4 * *(int32_t *)v25;
						v34 = *(int32_t *)(v29 + 60);
						v37 = *(int32_t *)(v26 + *(int32_t *)(v16 - 0x71ec));
						v30 = v37 + *(int32_t *)(v29 + 56);
						v31 = *(int32_t *)(*(int32_t *)(v16 - 0x71f0) + v26) + v34;
						v38 = *(int16_t *)(*(int32_t *)g35 + 2 * v31 + 224 * v30);
						v41 = v38;
						g29 = v30;
						g28 = v31;
						if (v38 != 0) {
							// 0xa7dac
							if (v38 < 0) {
								// 0xa7dbc
								v10 = -1 - v41;
								// branch -> 0xa7dc4
							} else {
								// 0xa7db4
								v10 = v41 - 1;
								// branch -> 0xa7dc4
							}
							// 0xa7dc4
							if (function_87558(v10) != 0) {
								// 0xa7dd0
								*(int32_t *)(g36 + 464 + g33) = 0;
								// branch -> 0xa7f90
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0xa7de4
						if (__asm_rlwinm_(*(int32_t *)g31, 0, 27, 27) != 0) {
							// 0xa7df0
							g13 = g26;
							AddMissile(g29, g28, 1, 0, 0, 64, 0, 0, 0);
							// branch -> 0xa7e20
						}
						// 0xa7e20
						if (__asm_rlwinm_(*(int32_t *)g31, 0, 26, 26) != 0) {
							// 0xa7e2c
							g13 = g26;
							AddMissile(g29, g28, 2, 0, 0, 64, 0, 0, 0);
							// branch -> 0xa7e5c
						}
						// 0xa7e5c
						v17 = g29;
						v18 = g28;
						v39 = *(int16_t *)(2 * v18 + 224 * v17 + *(int32_t *)g35);
						v42 = v39;
						if (v39 == 0) {
							// 0xa7ea0
							v19 = g23;
							v32 = v18 + 112 * v17;
							v40 = *(char *)(*(int32_t *)*(int32_t *)(v19 - 0x7680) + v32);
							v43 = v40;
							if (v40 != 0) {
								// 0xa7ebc
								if (*(int32_t *)(v19 - 0x2444) == 0) {
									// 0xa7ecc
									if (0x1000000 * v43 < 0) {
										// 0xa7edc
										v9 = 0x1000000 * (-1 - v43) / 0x1000000;
										// branch -> 0xa7ee8
									} else {
										// 0xa7ed4
										v9 = v43 - 1;
										// branch -> 0xa7ee8
									}
									// 0xa7ee8
									g37 = v9;
									v27 = function_a7894(g26);
									// branch -> 0xa7f24
									// 0xa7f24
									if (v27 != 0) {
										// 0xa7f2c
										g37 = 30;
										if (function_a70dc(g26, 30) != 0) {
											// 0xa7f40
											StartStand(g26, *(int32_t *)g30);
											function_a2af4(g26);
											// branch -> 0xa7f90
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0xa7f5c
									v33 = g33 + g36;
									if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
										// 0xa7f70
										StartStand(g26, *(int32_t *)(v33 + 112));
										function_a2af4(g26);
										// branch -> 0xa7f90
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0xa7ef8
							v35 = *(int32_t *)(v19 - 0x7684);
							if (*(char *)(*(int32_t *)v35 + v32) < 1) {
								// 0xa7f24
								v21 = g27;
								// branch -> 0xa7f24
							} else {
								// 0xa7f10
								v20 = g26;
								g34 = v20;
								v21 = function_a7bc4(v20, v17, v18);
								// branch -> 0xa7f24
							}
							// 0xa7f24
							if (v21 != 0) {
								// 0xa7f2c
								g37 = 30;
								if (function_a70dc(g26, 30) != 0) {
									// 0xa7f40
									StartStand(g26, *(int32_t *)g30);
									function_a2af4(g26);
									// branch -> 0xa7f90
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0xa7f5c
							v33 = g33 + g36;
							if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
								// 0xa7f70
								StartStand(g26, *(int32_t *)(v33 + 112));
								function_a2af4(g26);
								// branch -> 0xa7f90
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0xa7e78
							if (v39 < 0) {
								// 0xa7e88
								v8 = -1 - v42;
								// branch -> 0xa7e90
							} else {
								// 0xa7e80
								v8 = v42 - 1;
								// branch -> 0xa7e90
							}
							// 0xa7e90
							g37 = v8;
							v21 = function_a7324(g26);
							// branch -> 0xa7f24
						}
						// 0xa7f24
						if (v21 != 0) {
							// 0xa7f2c
							g37 = 30;
							if (function_a70dc(g26, 30) != 0) {
								// 0xa7f40
								StartStand(g26, *(int32_t *)g30);
								function_a2af4(g26);
								// branch -> 0xa7f90
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0xa7f5c
						v33 = g33 + g36;
						v7 = v33;
						if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
							// 0xa7f70
							v36 = *(int32_t *)(v33 + 112);
							v7 = v36;
							StartStand(g26, v36);
							function_a2af4(g26);
							// branch -> 0xa7f90
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0xa7f5c
						v33 = g33 + g36;
						v7 = v33;
						if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
							// 0xa7f70
							v36 = *(int32_t *)(v33 + 112);
							v7 = v36;
							StartStand(g26, v36);
							function_a2af4(g26);
							// branch -> 0xa7f90
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0xa7ce8
		v22 = (int32_t *)g32;
		*v22 = *v22 + 1;
		// branch -> 0xa7cf4
	}
	// 0xa7cf4
	if (__asm_rlwinm_(*(int32_t *)g31, 0, 11, 11) != 0) {
		// 0xa7d00
		v12 = v7;
		if (v12 != 1) {
			// 0xa7d08
			if (v12 != 4) {
				// 0xa7d1c
				v28 = g33 + g36;
				v24 = v28 + 752;
				g28 = v24;
				v13 = g32;
				v15 = v24;
				v14 = v13;
				if (*(int32_t *)v13 == *(int32_t *)v24 - 1) {
					// 0xa7d34
					g34 = 9;
					g38 = *(int32_t *)(v28 + 60);
					PlaySfxLoc(9);
					v15 = g28;
					v14 = g32;
					// branch -> 0xa7d48
				}
				// 0xa7d48
				if (*(int32_t *)v14 == *(int32_t *)v15) {
					// 0xa7d58
					v29 = g33 + g36;
					v16 = g23;
					v25 = v29 + 112;
					g30 = v25;
					v26 = 4 * *(int32_t *)v25;
					v34 = *(int32_t *)(v29 + 60);
					v37 = *(int32_t *)(v26 + *(int32_t *)(v16 - 0x71ec));
					v30 = v37 + *(int32_t *)(v29 + 56);
					v31 = *(int32_t *)(*(int32_t *)(v16 - 0x71f0) + v26) + v34;
					v38 = *(int16_t *)(*(int32_t *)g35 + 2 * v31 + 224 * v30);
					v41 = v38;
					g29 = v30;
					g28 = v31;
					if (v38 != 0) {
						// 0xa7dac
						if (v38 < 0) {
							// 0xa7dbc
							v10 = -1 - v41;
							// branch -> 0xa7dc4
						} else {
							// 0xa7db4
							v10 = v41 - 1;
							// branch -> 0xa7dc4
						}
						// 0xa7dc4
						if (function_87558(v10) != 0) {
							// 0xa7dd0
							*(int32_t *)(g36 + 464 + g33) = 0;
							// branch -> 0xa7f90
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0xa7de4
					if (__asm_rlwinm_(*(int32_t *)g31, 0, 27, 27) != 0) {
						// 0xa7df0
						g13 = g26;
						AddMissile(g29, g28, 1, 0, 0, 64, 0, 0, 0);
						// branch -> 0xa7e20
					}
					// 0xa7e20
					if (__asm_rlwinm_(*(int32_t *)g31, 0, 26, 26) != 0) {
						// 0xa7e2c
						g13 = g26;
						AddMissile(g29, g28, 2, 0, 0, 64, 0, 0, 0);
						// branch -> 0xa7e5c
					}
					// 0xa7e5c
					v17 = g29;
					v18 = g28;
					v39 = *(int16_t *)(2 * v18 + 224 * v17 + *(int32_t *)g35);
					v42 = v39;
					if (v39 == 0) {
						// 0xa7ea0
						v19 = g23;
						v32 = v18 + 112 * v17;
						v40 = *(char *)(*(int32_t *)*(int32_t *)(v19 - 0x7680) + v32);
						v43 = v40;
						if (v40 != 0) {
							// 0xa7ebc
							if (*(int32_t *)(v19 - 0x2444) == 0) {
								// 0xa7ecc
								if (0x1000000 * v43 < 0) {
									// 0xa7edc
									v9 = 0x1000000 * (-1 - v43) / 0x1000000;
									// branch -> 0xa7ee8
								} else {
									// 0xa7ed4
									v9 = v43 - 1;
									// branch -> 0xa7ee8
								}
								// 0xa7ee8
								g37 = v9;
								v27 = function_a7894(g26);
								// branch -> 0xa7f24
								// 0xa7f24
								if (v27 != 0) {
									// 0xa7f2c
									g37 = 30;
									if (function_a70dc(g26, 30) != 0) {
										// 0xa7f40
										StartStand(g26, *(int32_t *)g30);
										function_a2af4(g26);
										// branch -> 0xa7f90
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0xa7f5c
								v33 = g33 + g36;
								if (*(int32_t *)g32 == *(int32_t *)(v33 + 744)) {
									// 0xa7f70
									StartStand(g26, *(int32_t *)(v33 + 112));
									function_a2af4(g26);
									// branch -> 0xa7f90
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0xa7ef8
						v35 = *(int32_t *)(v19 - 0x7684);
						if (*(char *)(*(int32_t *)v35 + v32) < 1) {
							// 0xa7f24
							v21 = g27;
							// branch -> 0xa7f24
						} else {
							// 0xa7f10
							v20 = g26;
							g34 = v20;
							v21 = function_a7bc4(v20, v17, v18);
							// branch -> 0xa7f24
						}
						// 0xa7f24
						if (v21 != 0) {
							// 0xa7f2c
							g37 = 30;
							if (function_a70dc(g26, 30) != 0) {
								// 0xa7f40
								StartStand(g26, *(int32_t *)g30);
								function_a2af4(g26);
								// branch -> 0xa7f90
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0xa7e78
						if (v39 < 0) {
							// 0xa7e88
							v8 = -1 - v42;
							// branch -> 0xa7e90
						} else {
							// 0xa7e80
							v8 = v42 - 1;
							// branch -> 0xa7e90
						}
						// 0xa7e90
						g37 = v8;
						v21 = function_a7324(g26);
						// branch -> 0xa7f24
					}
					// 0xa7f24
					if (v21 != 0) {
						// 0xa7f2c
						g37 = 30;
						if (function_a70dc(g26, 30) != 0) {
							// 0xa7f40
							StartStand(g26, *(int32_t *)g30);
							function_a2af4(g26);
							// branch -> 0xa7f90
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// 0xa7d10
		v23 = (int32_t *)g32;
		*v23 = *v23 + 2;
		// branch -> 0xa7d1c
	}
	// 0xa7d1c
	v28 = g33 + g36;
	v24 = v28 + 752;
	g28 = v24;
	v13 = g32;
	v15 = v24;
	v14 = v13;
	if (*(int32_t *)v13 == *(int32_t *)v24 - 1) {
		// 0xa7d34
		g34 = 9;
		g38 = *(int32_t *)(v28 + 60);
		PlaySfxLoc(9);
		v15 = g28;
		v14 = g32;
		// branch -> 0xa7d48
	}
	// 0xa7d48
	if (*(int32_t *)v14 == *(int32_t *)v15) {
		// 0xa7d58
		v29 = g33 + g36;
		v16 = g23;
		v25 = v29 + 112;
		g30 = v25;
		v26 = 4 * *(int32_t *)v25;
		v34 = *(int32_t *)(v29 + 60);
		v37 = *(int32_t *)(v26 + *(int32_t *)(v16 - 0x71ec));
		v30 = v37 + *(int32_t *)(v29 + 56);
		v31 = *(int32_t *)(*(int32_t *)(v16 - 0x71f0) + v26) + v34;
		v38 = *(int16_t *)(*(int32_t *)g35 + 2 * v31 + 224 * v30);
		v41 = v38;
		g29 = v30;
		g28 = v31;
		if (v38 != 0) {
			// 0xa7dac
			if (v38 < 0) {
				// 0xa7dbc
				v10 = -1 - v41;
				// branch -> 0xa7dc4
			} else {
				// 0xa7db4
				v10 = v41 - 1;
				// branch -> 0xa7dc4
			}
			// 0xa7dc4
			if (function_87558(v10) != 0) {
				// 0xa7dd0
				*(int32_t *)(g36 + 464 + g33) = 0;
				// branch -> 0xa7f90
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// 0xa7de4
		if (__asm_rlwinm_(*(int32_t *)g31, 0, 27, 27) != 0) {
			// 0xa7df0
			g13 = g26;
			AddMissile(g29, g28, 1, 0, 0, 64, 0, 0, 0);
			// branch -> 0xa7e20
		}
		// 0xa7e20
		if (__asm_rlwinm_(*(int32_t *)g31, 0, 26, 26) != 0) {
			// 0xa7e2c
			g13 = g26;
			AddMissile(g29, g28, 2, 0, 0, 64, 0, 0, 0);
			// branch -> 0xa7e5c
		}
		// 0xa7e5c
		v17 = g29;
		v18 = g28;
		v39 = *(int16_t *)(2 * v18 + 224 * v17 + *(int32_t *)g35);
		v42 = v39;
		if (v39 == 0) {
			// 0xa7ea0
			v19 = g23;
			v32 = v18 + 112 * v17;
			v40 = *(char *)(*(int32_t *)*(int32_t *)(v19 - 0x7680) + v32);
			v43 = v40;
			if (v40 != 0) {
				// 0xa7ebc
				if (*(int32_t *)(v19 - 0x2444) == 0) {
					// 0xa7ecc
					if (0x1000000 * v43 < 0) {
						// 0xa7edc
						v9 = 0x1000000 * (-1 - v43) / 0x1000000;
						// branch -> 0xa7ee8
					} else {
						// 0xa7ed4
						v9 = v43 - 1;
						// branch -> 0xa7ee8
					}
					// 0xa7ee8
					g37 = v9;
					v27 = function_a7894(g26);
					// branch -> 0xa7f24
					// 0xa7f24
					if (v27 != 0) {
						// 0xa7f2c
						g37 = 30;
						if (function_a70dc(g26, 30) != 0) {
							// 0xa7f40
							StartStand(g26, *(int32_t *)g30);
							function_a2af4(g26);
							// branch -> 0xa7f90
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0xa7ef8
			v35 = *(int32_t *)(v19 - 0x7684);
			if (*(char *)(*(int32_t *)v35 + v32) < 1) {
				// 0xa7f24
				v21 = g27;
				// branch -> 0xa7f24
			} else {
				// 0xa7f10
				v20 = g26;
				g34 = v20;
				v21 = function_a7bc4(v20, v17, v18);
				// branch -> 0xa7f24
			}
			// 0xa7f24
			if (v21 != 0) {
				// 0xa7f2c
				g37 = 30;
				if (function_a70dc(g26, 30) != 0) {
					// 0xa7f40
					StartStand(g26, *(int32_t *)g30);
					function_a2af4(g26);
					// branch -> 0xa7f90
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			// 0xa7e78
			if (v39 < 0) {
				// 0xa7e88
				v8 = -1 - v42;
				// branch -> 0xa7e90
			} else {
				// 0xa7e80
				v8 = v42 - 1;
				// branch -> 0xa7e90
			}
			// 0xa7e90
			g37 = v8;
			v21 = function_a7324(g26);
			// branch -> 0xa7f24
		}
		// 0xa7f24
		if (v21 != 0) {
			// 0xa7f2c
			g37 = 30;
			if (function_a70dc(g26, 30) != 0) {
				// 0xa7f40
				StartStand(g26, *(int32_t *)g30);
				function_a2af4(g26);
				// branch -> 0xa7f90
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0xa7fa4 - 0xa8120
int32_t function_a7fa4(int32_t a1)
{
	g32 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa7fb0
	g36 = v1;
	int32_t v2 = a1; // 0xa7fd0
	if (a1 >= 4) {
		// 0xa7fc4
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x59e8));
		v1 = g36;
		v2 = g32;
		// branch -> 0xa7fd0
	}
	int32_t v3 = 0x55ec * v2; // 0xa7fd0
	g35 = v3;
	int32_t v4 = v3 + v1;        // 0xa7fd4
	int32_t v5 = v4 + 0x5568;    // 0xa7fd8
	int32_t v6 = v4 + 140;       // 0xa7fe0
	int32_t v7 = *(int32_t *)v6; // r3
	g33 = v6;
	if (__asm_rlwinm_(*(int32_t *)v5, 0, 14, 14) != 0) {
		// 0xa7fec
		if (v7 == 1) {
			// 0xa7ff4
			*(int32_t *)g33 = 2;
			// branch -> 0xa7ffc
		}
	}
	// 0xa7ffc
	int32_t v8;     // 0xa8024
	int32_t v9;     // 0xa8028
	int32_t result; // 0xa811c
	int32_t v10;    // 0xa8024
	int32_t v11;    // 0xa8038
	int32_t v12;    // 0xa805c
	int32_t v13;    // 0xa8090
	int32_t v14;    // 0xa80d8
	int32_t v15;    // 0xa8078
	int32_t v16;    // 0xa8080
	int32_t v17;    // 0xa8088
	int32_t v18;    // 0xa808c
	int32_t *v19;
	if (__asm_rlwinm_(*(int32_t *)v5, 0, 13, 13) != 0) {
		if (v7 != 1) {
			// 0xa8010
			if (v7 != 3) {
				// 0xa8024
				v8 = g36;
				v10 = g35;
				v9 = g33;
				if (*(int32_t *)v9 != *(int32_t *)(v10 + v8 + 752)) {
					// 0xa80d8
					v14 = v8 + v10;
					if (*(int32_t *)v9 < *(int32_t *)(v14 + 744)) {
						// 0xa8108
						result = 0;
						// branch -> 0xa810c
					} else {
						// 0xa80ec
						StartStand(g32, *(int32_t *)(v14 + 112));
						function_a2af4(g32);
						result = 1;
						// branch -> 0xa810c
					}
					// 0xa810c
					return result;
				}
				// 0xa8038
				v11 = *(int32_t *)v5;
				if (__asm_rlwinm_(v11, 0, 28, 28) != 0) {
					// 0xa8048
					// branch -> 0xa804c
				}
				// 0xa804c
				if (__asm_rlwinm_(v11, 0, 6, 6) != 0) {
					// 0xa8054
					// branch -> 0xa8058
				}
				// 0xa8058
				v12 = g35 + g36;
				v15 = *(int32_t *)(v12 + 464);
				g13 = g32;
				v16 = *(int32_t *)(v12 + 56);
				v17 = *(int32_t *)(v12 + 60);
				v18 = *(int32_t *)(v12 + 468);
				v13 = *(int32_t *)(v12 + 112);
				AddMissile(v16, v17, v15, v18, v13, 0, 0, (int32_t)&v19, (int32_t)&v19);
				g34 = 4;
				g38 = *(int32_t *)g31;
				PlaySfxLoc(4);
				g37 = 40;
				if (function_a70dc(g32, 40) != 0) {
					// 0xa80bc
					StartStand(g32, *(int32_t *)g29);
					function_a2af4(g32);
					// branch -> 0xa810c
					// 0xa810c
					return 1;
				}
				// 0xa8058
				// branch -> 0xa80d8
				// 0xa80d8
				v14 = g36 + g35;
				if (*(int32_t *)g33 < *(int32_t *)(v14 + 744)) {
					// 0xa8108
					result = 0;
					// branch -> 0xa810c
				} else {
					// 0xa80ec
					StartStand(g32, *(int32_t *)(v14 + 112));
					function_a2af4(g32);
					result = 1;
					// branch -> 0xa810c
				}
				// 0xa810c
				return result;
			}
		}
		int32_t *v20 = (int32_t *)g33; // 0xa8018
		*v20 = *v20 + 1;
		// branch -> 0xa8024
	}
	// 0xa8024
	v8 = g36;
	v10 = g35;
	v9 = g33;
	if (*(int32_t *)v9 != *(int32_t *)(v10 + v8 + 752)) {
		// 0xa80d8
		v14 = v8 + v10;
		if (*(int32_t *)v9 < *(int32_t *)(v14 + 744)) {
			// 0xa8108
			result = 0;
			// branch -> 0xa810c
		} else {
			// 0xa80ec
			StartStand(g32, *(int32_t *)(v14 + 112));
			function_a2af4(g32);
			result = 1;
			// branch -> 0xa810c
		}
		// 0xa810c
		return result;
	}
	// 0xa8038
	v11 = *(int32_t *)v5;
	if (__asm_rlwinm_(v11, 0, 28, 28) != 0) {
		// 0xa8048
		// branch -> 0xa804c
	}
	// 0xa804c
	if (__asm_rlwinm_(v11, 0, 6, 6) != 0) {
		// 0xa8054
		// branch -> 0xa8058
	}
	// 0xa8058
	v12 = g35 + g36;
	v15 = *(int32_t *)(v12 + 464);
	g13 = g32;
	v16 = *(int32_t *)(v12 + 56);
	v17 = *(int32_t *)(v12 + 60);
	v18 = *(int32_t *)(v12 + 468);
	v13 = *(int32_t *)(v12 + 112);
	AddMissile(v16, v17, v15, v18, v13, 0, 0, (int32_t)&v19, (int32_t)&v19);
	g34 = 4;
	g38 = *(int32_t *)g31;
	PlaySfxLoc(4);
	g37 = 40;
	if (function_a70dc(g32, 40) != 0) {
		// 0xa80bc
		StartStand(g32, *(int32_t *)g29);
		function_a2af4(g32);
		// branch -> 0xa810c
		// 0xa810c
		return 1;
	}
	// 0xa8058
	// branch -> 0xa80d8
	// 0xa80d8
	v14 = g36 + g35;
	if (*(int32_t *)g33 < *(int32_t *)(v14 + 744)) {
		// 0xa8108
		result = 0;
		// branch -> 0xa810c
	} else {
		// 0xa80ec
		StartStand(g32, *(int32_t *)(v14 + 112));
		function_a2af4(g32);
		result = 1;
		// branch -> 0xa810c
	}
	// 0xa810c
	return result;
}

// Address range: 0xa8120 - 0xa8234
int32_t function_a8120(int32_t result)
{
	int32_t v1 = result; // 0xa812c
	g36 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa8134
	g35 = v2;
	if (v1 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		// 0xa8214
		return result;
	}
	int32_t v3 = v1; // 0xa8168
	if (v1 >= 4) {
		// 0xa815c
		g37 = v1;
		result = app_fatal(*(int32_t *)(g23 - 0x59ec));
		v2 = g35;
		v3 = g36;
		// branch -> 0xa8168
	}
	int32_t v4 = 0x55ec * v3; // 0xa8168
	g33 = v4;
	int32_t v5 = v4 + v2;   // 0xa816c
	int32_t v6 = v5 + 2656; // 0xa8170
	g32 = v6;
	int32_t v7;   // 0xa81c4
	int32_t v8;   // 0xa81d4
	int32_t v9;   // 0xa81c0
	int32_t *v10; // 0xa81d4
	int32_t v11;  // 0xa81d4
	if (*(int32_t *)v6 == 5) {
		int32_t v12 = v5 + 2884;       // 0xa8180
		int32_t *v13 = (int32_t *)v12; // 0xa8180
		int32_t v14 = *v13;            // 0xa8180
		result = v14;
		if (v14 != 255) {
			// 0xa818c
			*v13 = v14 - 1;
			if (*(int32_t *)v12 == 0) {
				// 0xa81a0
				function_8bce4(1, 4);
				*(int32_t *)g32 = -1;
				result = CalcPlrInv(g36, 1);
				// branch -> 0xa81c0
			}
			// 0xa81c0
			v9 = g33 + g35;
			v7 = v9 + 3024;
			g32 = v7;
			if (*(int32_t *)v7 == 5) {
				// 0xa81d0
				v8 = v9 + 3252;
				v10 = (int32_t *)v8;
				v11 = *v10;
				result = v11;
				if (v11 != 255) {
					// 0xa81e0
					*v10 = v11 - 1;
					if (*(int32_t *)v8 == 0) {
						// 0xa81f4
						function_8bce4(1, 5);
						*(int32_t *)g32 = -1;
						result = CalcPlrInv(g36, 1);
						// branch -> 0xa8214
					}
				}
			}
		}
	} else {
		// 0xa81c0
		v9 = g33 + g35;
		v7 = v9 + 3024;
		g32 = v7;
		if (*(int32_t *)v7 == 5) {
			// 0xa81d0
			v8 = v9 + 3252;
			v10 = (int32_t *)v8;
			v11 = *v10;
			result = v11;
			if (v11 != 255) {
				// 0xa81e0
				*v10 = v11 - 1;
				if (*(int32_t *)v8 == 0) {
					// 0xa81f4
					function_8bce4(1, 5);
					*(int32_t *)g32 = -1;
					result = CalcPlrInv(g36, 1);
					// branch -> 0xa8214
				}
			}
		}
	}
	// 0xa8214
	return result;
}

// Address range: 0xa8234 - 0xa82f8
int32_t function_a8234(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa823c
	g36 = v1;
	g35 = a1;
	int32_t v2 = a1; // 0xa8264
	if (a1 >= 4) {
		// 0xa8258
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x59f0));
		v1 = g36;
		v2 = g35;
		// branch -> 0xa8264
	}
	int32_t v3 = 0x55ec * v2; // 0xa8264
	int32_t v4 = v3 + v1;     // 0xa8268
	int32_t v5;               // 0xa8290
	if (__asm_rlwinm_(*(int32_t *)(v4 + 0x5568), 0, 7, 7) == 0) {
		// 0xa8290
		v5 = v3 + g36;
		if (*(int32_t *)(v5 + 140) < *(int32_t *)(v5 + 1168)) {
			// 0xa82e0
			return 0;
		}
		// 0xa82a4
		StartStand(g35, *(int32_t *)(v5 + 112));
		function_a2af4(g35);
		g37 = 10;
		if (random(3) == 0) {
			// 0xa82cc
			function_a8120(g35);
			// branch -> 0xa82e0
		}
		// 0xa82e0
		return 1;
	}
	int32_t *v6 = (int32_t *)(v4 + 140); // 0xa827c
	if (*v6 != 1) {
		// 0xa8288
		*v6 = *(int32_t *)(v4 + 1168);
		// branch -> 0xa8290
	}
	// 0xa8290
	v5 = v3 + g36;
	if (*(int32_t *)(v5 + 140) < *(int32_t *)(v5 + 1168)) {
		// 0xa82e0
		return 0;
	}
	// 0xa82a4
	StartStand(g35, *(int32_t *)(v5 + 112));
	function_a2af4(g35);
	g37 = 10;
	if (random(3) == 0) {
		// 0xa82cc
		function_a8120(g35);
		// branch -> 0xa82e0
	}
	// 0xa82e0
	return 1;
}

// Address range: 0xa82f8 - 0xa84d4
int32_t function_a82f8(int32_t a1)
{
	g30 = a1;
	g35 = *(int32_t *)(g23 - 0x76bc);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa830c
	g36 = v1;
	int32_t v2 = a1; // 0xa8348
	if (a1 >= 4) {
		// 0xa831c
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x59f4));
		v1 = g36;
		v2 = g30;
		// branch -> 0xa8328
	}
	int32_t v3 = 0x55ec * v2; // 0xa8328
	g33 = v3;
	int32_t v4 = v3 + v1;  // 0xa832c
	int32_t v5 = v4 + 492; // 0xa8338
	g31 = v5;
	if (*(int32_t *)v5 == *(int32_t *)(v4 + 956)) {
		int32_t v6 = *(int32_t *)(v4 + 56);  // 0xa834c
		int32_t v7 = *(int32_t *)(v4 + 60);  // 0xa8354
		int32_t v8 = *(int32_t *)(v4 + 464); // 0xa8358
		int32_t v9 = *(int32_t *)(v4 + 468); // 0xa835c
		g13 = *(int32_t *)(v4 + 476);
		CastSpell(v2, *(int32_t *)(v4 + 164), v6, v7, v8, v9, 0);
		int32_t v10 = g29; // 0xa8368
		if (*(char *)(v10 + 169) == 0) {
			int32_t v11 = v10 + 184; // 0xa8374
			g32 = v11;
			int32_t v12 = v11; // 0xa83d8
			if (*(char *)v11 == 2) {
				// 0xa8384
				if (*(int32_t *)(v10 + 280) % 2 == 0) {
					// 0xa83c0
					*(int32_t *)(v10 + 180) = -1;
					*(char *)g32 = 4;
					*(int32_t *)g35 = 255;
					v12 = g32;
					// branch -> 0xa83d8
				} else {
					v12 = v11;
				}
			}
			// 0xa83d8
			if (*(char *)v12 == 3) {
				int32_t v13 = g33 + g36; // 0xa83e4
				if (*(int32_t *)(v13 + 0x5564) % 2 == 0) {
					// 0xa8424
					*(int32_t *)(v13 + 180) = -1;
					*(char *)g32 = 4;
					*(int32_t *)g35 = 255;
					// branch -> 0xa843c
				}
			}
		}
	}
	int32_t *v14 = (int32_t *)g31; // 0xa843c
	*v14 = *v14 + 1;
	int32_t v15 = g33 + g36; // 0xa8458
	int32_t result;          // 0xa84d0
	if (*(char *)*(int32_t *)(g23 - 0x7794) != 0) {
		// 0xa848c
		if (*(int32_t *)(v15 + 140) == *(int32_t *)(v15 + 948)) {
			// 0xa84a0
			StartStand(g30, *(int32_t *)(v15 + 112));
			function_a2af4(g30);
			result = 1;
			// branch -> 0xa84c0
		} else {
			// 0xa84bc
			result = 0;
			// branch -> 0xa84c0
		}
		// 0xa84c0
		return result;
	}
	int32_t v16 = *(int32_t *)g31; // 0xa845c
	if (v16 > *(int32_t *)(v15 + 948)) {
		// 0xa846c
		function_a443c(g30, v16);
		function_a2af4(g30);
		result = 1;
		// branch -> 0xa84c0
	} else {
		// 0xa8484
		result = 0;
		// branch -> 0xa84c0
	}
	// 0xa84c0
	return result;
}

// Address range: 0xa84d4 - 0xa85f8
int32_t function_a84d4(int32_t result)
{
	g35 = result;
	if (result != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		// 0xa85e0
		return result;
	}
	int32_t v1 = result; // 0xa8510
	if (result >= 4) {
		// 0xa8504
		g37 = result;
		app_fatal(*(int32_t *)(g23 - 0x59f8));
		v1 = g35;
		// branch -> 0xa8510
	}
	int32_t result2 = *(int32_t *)(g23 - 0x77a8); // 0xa8514
	int32_t v2 = result2 + 0x55ec * v1;           // 0xa8518
	g36 = v2;
	if (*(int32_t *)(v2 + 3392) == -1) {
		// 0xa8528
		if (*(int32_t *)(v2 + 1184) == -1) {
			// 0xa85e0
			return result2;
		}
	}
	// 0xa8534
	g37 = 3;
	int32_t v3 = random(8);               // 0xa853c
	int32_t v4 = v3;                      // r3
	int32_t v5 = g36;                     // 0xa8540
	int32_t v6 = *(int32_t *)(v5 + 1184); // 0xa8564
	int32_t v7;                           // 0xa8574
	if (*(int32_t *)(v5 + 3392) == -1) {
		// 0xa8564
		if (v6 != -1) {
			// 0xa8570
			v4 = 0;
			v7 = 0;
			// branch -> 0xa8574
		} else {
			v7 = v3;
		}
	} else {
		if (v6 == -1) {
			// 0xa8558
			v4 = 1;
			v3 = 1;
			// branch -> 0xa855c
		}
		// 0xa855c
		v7 = v3;
		// branch -> 0xa8574
	}
	int32_t v8 = (v7 == 0 ? 1176 : 3384) + v5;
	g36 = v8;
	int32_t *v9 = (int32_t *)(v8 + 236); // 0xa8588
	int32_t v10 = *v9;                   // 0xa8588
	int32_t result3;                     // 0xa85f4
	if (v10 != 255) {
		// 0xa8594
		*v9 = v10 - 1;
		if (*(int32_t *)(g36 + 236) == 0) {
			// 0xa85a8
			if (v4 == 0) {
				// 0xa85c0
				function_8bce4(1, 0);
				// branch -> 0xa85cc
			} else {
				// 0xa85b0
				function_8bce4(1, 6);
				// branch -> 0xa85cc
			}
			// 0xa85cc
			*(int32_t *)(g36 + 8) = -1;
			result3 = CalcPlrInv(g35, 1);
			// branch -> 0xa85e0
		} else {
			result3 = v4;
		}
	} else {
		result3 = v7;
	}
	// 0xa85e0
	return result3;
}

// Address range: 0xa85f8 - 0xa8714
int32_t function_a85f8(int32_t a1)
{
	// 0xa85f8
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa860c
	g35 = v1;
	int32_t v2 = a1; // 0xa8628
	if (a1 >= 4) {
		// 0xa861c
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x59fc));
		v1 = g35;
		v2 = g36;
		// branch -> 0xa8628
	}
	int32_t v3 = 0x55ec * v2;    // 0xa8628
	int32_t v4 = v3 + v1;        // 0xa862c
	int32_t v5 = v4 + 0x5568;    // 0xa8630
	int32_t v6 = v4 + 140;       // 0xa8638
	int32_t v7 = *(int32_t *)v6; // r7
	if (__asm_rlwinm_(*(int32_t *)v5, 0, 10, 10) != 0) {
		// 0xa8644
		if (v7 == 3) {
			// 0xa864c
			*(int32_t *)v6 = 4;
			// branch -> 0xa8654
		}
	}
	// 0xa8654
	int32_t v8;  // 0xa8688
	int32_t *v9; // 0xa86a0
	int32_t v10; // 0xa86ac
	if (__asm_rlwinm_(*(int32_t *)v5, 0, 9, 9) != 0) {
		// 0xa8660
		if (v7 != 3) {
			// 0xa8668
			if (v7 != 5) {
				// 0xa867c
				if (__asm_rlwinm_(*(int32_t *)v5, 0, 8, 8) != 0) {
					// 0xa8688
					v8 = v7;
					if (v8 != 1) {
						// 0xa8690
						if (v8 != 3) {
							// 0xa8698
							if (v8 != 5) {
								// 0xa86ac
								v10 = v3 + g35;
								if (*(int32_t *)v6 < *(int32_t *)(v10 + 1024)) {
									// 0xa86fc
									return 0;
								}
								// 0xa86c0
								StartStand(g36, *(int32_t *)(v10 + 112));
								function_a2af4(g36);
								g37 = 4;
								if (random(3) != 0) {
									// 0xa86e8
									function_a84d4(g36);
									// branch -> 0xa86fc
								}
								// 0xa86fc
								return 1;
							}
						}
					}
					// 0xa86a0
					v9 = (int32_t *)v6;
					*v9 = *v9 + 1;
					// branch -> 0xa86ac
				}
				// 0xa86ac
				v10 = v3 + g35;
				if (*(int32_t *)v6 < *(int32_t *)(v10 + 1024)) {
					// 0xa86fc
					return 0;
				}
				// 0xa86c0
				StartStand(g36, *(int32_t *)(v10 + 112));
				function_a2af4(g36);
				g37 = 4;
				if (random(3) != 0) {
					// 0xa86e8
					function_a84d4(g36);
					// branch -> 0xa86fc
				}
				// 0xa86fc
				return 1;
			}
		}
		int32_t *v11 = (int32_t *)v6; // 0xa8670
		*v11 = *v11 + 1;
		// branch -> 0xa867c
	}
	// 0xa867c
	if (__asm_rlwinm_(*(int32_t *)v5, 0, 8, 8) != 0) {
		// 0xa8688
		v8 = v7;
		if (v8 != 1) {
			// 0xa8690
			if (v8 != 3) {
				// 0xa8698
				if (v8 != 5) {
					// 0xa86ac
					v10 = v3 + g35;
					if (*(int32_t *)v6 < *(int32_t *)(v10 + 1024)) {
						// 0xa86fc
						return 0;
					}
					// 0xa86c0
					StartStand(g36, *(int32_t *)(v10 + 112));
					function_a2af4(g36);
					g37 = 4;
					if (random(3) != 0) {
						// 0xa86e8
						function_a84d4(g36);
						// branch -> 0xa86fc
					}
					// 0xa86fc
					return 1;
				}
			}
		}
		// 0xa86a0
		v9 = (int32_t *)v6;
		*v9 = *v9 + 1;
		// branch -> 0xa86ac
	}
	// 0xa86ac
	v10 = v3 + g35;
	if (*(int32_t *)v6 < *(int32_t *)(v10 + 1024)) {
		// 0xa86fc
		return 0;
	}
	// 0xa86c0
	StartStand(g36, *(int32_t *)(v10 + 112));
	function_a2af4(g36);
	g37 = 4;
	if (random(3) != 0) {
		// 0xa86e8
		function_a84d4(g36);
		// branch -> 0xa86fc
	}
	// 0xa86fc
	return 1;
}

// Address range: 0xa8714 - 0xa881c
int32_t PM_DoDeath(int32_t a1)
{
	// 0xa8714
	g31 = a1;
	g33 = *(int32_t *)(g23 - 0x6f8c);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa8728
	g35 = v1;
	int32_t v2 = a1; // 0xa8778
	if (a1 >= 4) {
		// 0xa8738
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a00));
		v1 = g35;
		v2 = g31;
		// branch -> 0xa8744
	}
	int32_t v3 = 0x55ec * v2; // 0xa8744
	g32 = v3;
	int32_t v4 = v3 + v1;  // 0xa8748
	int32_t v5 = v4 + 492; // 0xa8754
	g36 = v5;
	int32_t v6 = v5; // 0xa8800
	if (*(int32_t *)v5 >= 2 * *(int32_t *)(v4 + 1096)) {
		int32_t *v7 = (int32_t *)g33; // 0xa8764
		uint32_t v8 = *v7;            // 0xa8764
		if (v8 >= 2) {
			// 0xa8770
			if (v2 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0xa8780
				*v7 = v8 - 1;
				if (*(int32_t *)g33 == 1) {
					// 0xa8794
					*(int32_t *)*(int32_t *)(g23 - 0x75cc) = 1;
					if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
						// 0xa87b0
						gamemenu_previous(0);
						// branch -> 0xa87b8
					}
				}
			}
		}
		int32_t v9 = g32 + g35; // 0xa87b8
		*(int32_t *)(v9 + 128) = 0x2710;
		*(int32_t *)(v9 + 140) = *(int32_t *)(v9 + 136);
		int32_t v10 = *(int32_t *)(v9 + 60) + 112 * *(int32_t *)(v9 + 56);  // 0xa87e0
		char *v11 = (char *)(*(int32_t *)*(int32_t *)(g23 - 0x779c) + v10); // 0xa87e4
		*v11 = *v11 | 4;
		v6 = g36;
		// branch -> 0xa87f0
	}
	int32_t *v12 = (int32_t *)v6; // 0xa87f0
	uint32_t v13 = *v12;          // 0xa87f0
	if (v13 <= 99) {
		// 0xa87fc
		*v12 = v13 + 1;
		// branch -> 0xa8804
	}
	// 0xa8804
	return 0;
}

// Address range: 0xa881c - 0xa8828
int32_t function_a881c(int32_t a1)
{
	// 0xa881c
	return 0;
}

// Address range: 0xa8828 - 0xa9780
int32_t function_a8828(int32_t a1)
{
	int32_t v1 = g10; // 0xa882c
	g35 = a1;
	g36 = *(int32_t *)(g23 - 0x6f94);
	g30 = *(int32_t *)(g23 - 0x7688);
	g27 = *(int32_t *)(g23 - 0x7684);
	g24 = *(int32_t *)(g23 - 0x7744);
	g25 = *(int32_t *)(g23 - 0x7690);
	g33 = *(int32_t *)(g23 - 0x7754);
	g28 = *(int32_t *)(g23 - 0x77ac);
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa8854
	g32 = v2;
	int32_t v3 = a1; // 0xa8890
	if (a1 >= 4) {
		// 0xa8864
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a04));
		v2 = g32;
		v3 = g35;
		// branch -> 0xa8870
	}
	int32_t v4 = 0x55ec * v3; // 0xa8870
	g31 = v4;
	int32_t v5 = v4 + v2; // 0xa8874
	int32_t v6 = v5 + 32; // 0xa8878
	g29 = v6;
	int32_t v7 = v6; // 0xa88ac
	if (*(int32_t *)v6 == 20) {
		int32_t v8 = g33 + 232 * *(int32_t *)(v5 + 36); // 0xa889c
		MakePlrPath(v3, *(int32_t *)(v8 + 40), *(int32_t *)(v8 + 44), 0);
		v7 = g29;
		// branch -> 0xa88ac
	}
	// 0xa88ac
	if (*(int32_t *)v7 == 21) {
		int32_t v9 = g32;                                        // 0xa88b8
		int32_t v10 = 0x55ec * *(int32_t *)(g31 + v9 + 36) + v9; // 0xa88cc
		MakePlrPath(g35, *(int32_t *)(v10 + 64), *(int32_t *)(v10 + 68), 0);
		// branch -> 0xa88dc
	}
	int32_t v11 = g32;       // 0xa88dc
	int32_t v12 = g31;       // 0xa88dc
	int32_t v13 = v12 + v11; // 0xa88dc
	int32_t v14 = v13 + 4;   // 0xa88e0
	g26 = v14;
	int32_t v15; // r16
	if (*(char *)v14 == -1) {
		int32_t v16 = *(int32_t *)g29; // 0xa8cf8
		if (v16 != -1) {
			// 0xa8d04
			g36 = v13;
			int32_t v17 = *(int32_t *)v13; // 0xa8d08
			if (v17 == 0) {
				uint32_t v18 = v16 - 9; // 0xa8d14
				if (v18 <= 17) {
					// 0xa8d20
					return *(int32_t *)(*(int32_t *)(g23 - 0x5a0c) + 4 * v18);
				}
				// 0xa9320
				function_a4250(g35, *(int32_t *)(v13 + 112));
				*(int32_t *)g29 = -1;
				// branch -> 0xa976c
			} else {
				// 0xa933c
				int32_t v19; // 0xa9578
				int32_t v20; // 0xa967c
				int32_t v21; // 0xa95a0
				int32_t v22; // 0xa95a4
				int32_t v23; // 0xa95fc
				int32_t v24; // 0xa9600
				int32_t v25; // 0xa9648
				int32_t v26; // 0xa964c
				int32_t v27; // 0xa969c
				int32_t v28; // 0xa96a0
				int32_t v29; // 0xa96f8
				int32_t v30; // 0xa96fc
				int32_t v31; // 0xa9744
				int32_t v32; // 0xa9748
				int32_t v33; // 0xa9578
				int32_t v34; // 0xa9584
				int32_t v35; // 0xa9594
				int32_t v36; // 0xa95f4
				int32_t v37; // 0xa9640
				int32_t v38; // 0xa967c
				int32_t v39; // 0xa9690
				int32_t v40; // 0xa96f0
				int32_t v41; // 0xa973c
				int32_t v42; // 0xa95a8
				int32_t v43; // 0xa95ac
				int32_t v44; // 0xa95e8
				int32_t v45; // 0xa95f0
				int32_t v46; // 0xa9634
				int32_t v47; // 0xa963c
				int32_t v48; // 0xa96a4
				int32_t v49; // 0xa96a8
				int32_t v50; // 0xa96e4
				int32_t v51; // 0xa96ec
				int32_t v52; // 0xa9730
				int32_t v53; // 0xa9738
				int32_t v54; // 0xa95b8
				int32_t v55; // 0xa9604
				int32_t v56; // 0xa9650
				int32_t v57; // 0xa96b4
				int32_t v58; // 0xa9700
				int32_t v59; // 0xa974c
				if (v17 == 4) {
					int32_t v60 = 0x55ec * *(int32_t *)g28 + v11; // 0xa9350
					int32_t result2 = v60;                        // r3
					if (*(int32_t *)(v13 + 140) > *(int32_t *)(v60 + 752)) {
						// 0xa9360
						if (v16 == 9) {
							int32_t v61 = *(int32_t *)(v13 + 64); // 0xa9368
							int32_t v62 = *(int32_t *)(v13 + 68); // 0xa936c
							int32_t v63 = *(int32_t *)(v13 + 40); // 0xa9374
							g37 = GetDirection(v61, v62, *(int32_t *)(v13 + 36), v63);
							function_a4e8c(g35);
							*(int32_t *)g29 = -1;
							// branch -> 0xa9568
						} else {
							// 0xa9394
							int32_t v64;    // 0xa9680
							int32_t v65;    // 0xa95cc
							int32_t v66;    // 0xa9618
							int32_t v67;    // 0xa9664
							int32_t result; // 0xa96c8
							int32_t v68;    // 0xa9714
							int32_t v69;    // 0xa9760
							if (v16 != 20) {
								// 0xa940c
								if (v16 == 21) {
									int32_t v70 = v11 + 64; // 0xa9418
									g24 = v70;
									int32_t v71 = 0x55ec * *(int32_t *)(v13 + 36); // 0xa9420
									int32_t v72 = v71 + v70;                       // 0xa9424
									g21 = v72;
									g34 = *(int32_t *)(v13 + 56) - *(int32_t *)v72;
									int32_t v73 = abs();    // 0xa9430
									int32_t v74 = g32 + 68; // 0xa9434
									g22 = v74;
									int32_t v75 = v71 + v74; // 0xa943c
									g34 = *(int32_t *)(g36 + 60) - *(int32_t *)v75;
									int32_t v76 = abs(); // 0xa944c
									result2 = v76;
									if (v73 <= 1) {
										// 0xa9458
										if (v76 <= 1) {
											int32_t v77 = g31;                     // 0xa9460
											int32_t v78 = *(int32_t *)(v77 + g24); // 0xa9460
											int32_t v79 = *(int32_t *)(g22 + v77); // 0xa9464
											g37 = GetDirection(v78, v79, *(int32_t *)g21, *(int32_t *)v75);
											result2 = function_a4e8c(g35);
											// branch -> 0xa9480
										}
									}
									// 0xa9480
									*(int32_t *)g29 = -1;
									// branch -> 0xa9568
								} else {
									// 0xa948c
									if (v16 == 13) {
										int32_t v80 = *(int32_t *)(v13 + 36); // 0xa9494
										v15 = v80;
										int32_t v81 = v13 + 56;  // 0xa9498
										int32_t v82 = 120 * v80; // 0xa94a0
										g21 = v82;
										int32_t v83 = g30 + v82 + 4; // 0xa94a8
										g24 = v83;
										g34 = *(int32_t *)v81 - *(int32_t *)v83;
										int32_t v84 = abs();         // 0xa94b0
										int32_t v85 = g36 + 60;      // 0xa94b8
										int32_t v86 = g21 + g30 + 8; // 0xa94bc
										g22 = v86;
										g25 = v85;
										g34 = *(int32_t *)v85 - *(int32_t *)v86;
										int32_t v87 = abs(); // 0xa94cc
										result2 = v87;
										int32_t v88 = v87; // 0xa951c
										if (v87 >= 2) {
											int32_t v89 = *(int32_t *)g22;                               // 0xa94e8
											int32_t v90 = v89 + *(int32_t *)g27 + 112 * *(int32_t *)g24; // 0xa94f0
											if (-1 - v15 == (int32_t) * (char *)(v90 - 1)) {
												// 0xa9504
												g34 = 1 - v89 + *(int32_t *)g25;
												int32_t v91 = abs(); // 0xa9510
												result2 = v91;
												v88 = v91;
												// branch -> 0xa9514
											} else {
												v88 = v87;
											}
										}
										// 0xa9514
										if (v84 <= 1) {
											// 0xa951c
											if (v88 <= 1) {
												// 0xa9524
												if (*(char *)(g21 + g30 + 52) == 1) {
													int32_t v92 = *(int32_t *)g24; // 0xa953c
													int32_t v93 = *(int32_t *)g22; // 0xa9540
													g37 = GetDirection(*(int32_t *)v81, *(int32_t *)g25, v92, v93);
													result2 = function_a4e8c(g35);
													// branch -> 0xa9568
												} else {
													// 0xa9558
													result2 = function_9c4e0(g35, v15, 0);
													// branch -> 0xa9568
												}
												// 0xa9568
												if (*(int32_t *)g36 == 5) {
													// 0xa9574
													v19 = g32;
													v33 = g31 + v19;
													v34 = v19 + 0x55ec * *(int32_t *)g28;
													result2 = v34;
													if (*(int32_t *)(v33 + 140) > *(int32_t *)(v34 + 752)) {
														// 0xa9594
														v35 = *(int32_t *)g29;
														if (v35 == 10) {
															// 0xa95a0
															v21 = v33 + 36;
															v22 = v33 + 40;
															v42 = *(int32_t *)(v33 + 56);
															v43 = *(int32_t *)(v33 + 60);
															v54 = GetDirection(v42, v43, *(int32_t *)v21, *(int32_t *)v22);
															v65 = function_a4f84(g35, v54, *(int32_t *)v21, *(int32_t *)v22);
															result2 = v65;
															*(int32_t *)g29 = -1;
															// branch -> 0xa9670
															// 0xa9670
															if (*(int32_t *)g36 == 9) {
																// 0xa967c
																v20 = g32;
																v38 = g31 + v20;
																v64 = *(int32_t *)(v38 + 140);
																result2 = v64;
																if (v64 > *(int32_t *)(v38 + 956)) {
																	// 0xa9690
																	v39 = *(int32_t *)g29;
																	if (v39 == 12) {
																		// 0xa969c
																		v27 = v38 + 36;
																		v28 = v38 + 40;
																		v48 = *(int32_t *)(v38 + 56);
																		v49 = *(int32_t *)(v38 + 60);
																		v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
																		result = function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
																		*(int32_t *)g29 = -1;
																		// branch -> 0xa976c
																		// 0xa976c
																		g10 = v1;
																		return result;
																	}
																	// 0xa96d8
																	if (v39 == 24) {
																		// 0xa96e0
																		v50 = *(int32_t *)(v38 + 56);
																		v51 = *(int32_t *)(v38 + 60);
																		v40 = g33 + 232 * *(int32_t *)(v38 + 36);
																		v29 = v40 + 40;
																		v30 = v40 + 44;
																		v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
																		v68 = function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
																		result2 = v68;
																		*(int32_t *)g29 = -1;
																		// branch -> 0xa976c
																	} else {
																		// 0xa9724
																		if (v39 == 25) {
																			// 0xa972c
																			v52 = *(int32_t *)(v38 + 56);
																			v53 = *(int32_t *)(v38 + 60);
																			v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
																			v31 = v41 + 64;
																			v32 = v41 + 68;
																			v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
																			v69 = function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
																			result2 = v69;
																			*(int32_t *)g29 = -1;
																			// branch -> 0xa976c
																		}
																	}
																	// 0xa976c
																	g10 = v1;
																	return result2;
																}
															}
															// 0xa976c
															g10 = v1;
															return result2;
														}
														// 0xa95dc
														if (v35 == 22) {
															// 0xa95e4
															v44 = *(int32_t *)(v33 + 56);
															v45 = *(int32_t *)(v33 + 60);
															v36 = g33 + 232 * *(int32_t *)(v33 + 36);
															v23 = v36 + 40;
															v24 = v36 + 44;
															v55 = GetDirection(v44, v45, *(int32_t *)v23, *(int32_t *)v24);
															v66 = function_a4f84(g35, v55, *(int32_t *)v23, *(int32_t *)v24);
															result2 = v66;
															*(int32_t *)g29 = -1;
															// branch -> 0xa9670
														} else {
															// 0xa9628
															if (v35 == 23) {
																// 0xa9630
																v46 = *(int32_t *)(v33 + 56);
																v47 = *(int32_t *)(v33 + 60);
																v37 = 0x55ec * *(int32_t *)(v33 + 36) + v19;
																v25 = v37 + 64;
																v26 = v37 + 68;
																v56 = GetDirection(v46, v47, *(int32_t *)v25, *(int32_t *)v26);
																v67 = function_a4f84(g35, v56, *(int32_t *)v25, *(int32_t *)v26);
																result2 = v67;
																*(int32_t *)g29 = -1;
																// branch -> 0xa9670
															}
														}
														// 0xa9670
														if (*(int32_t *)g36 == 9) {
															// 0xa967c
															v20 = g32;
															v38 = g31 + v20;
															v64 = *(int32_t *)(v38 + 140);
															result2 = v64;
															if (v64 > *(int32_t *)(v38 + 956)) {
																// 0xa9690
																v39 = *(int32_t *)g29;
																if (v39 == 12) {
																	// 0xa969c
																	v27 = v38 + 36;
																	v28 = v38 + 40;
																	v48 = *(int32_t *)(v38 + 56);
																	v49 = *(int32_t *)(v38 + 60);
																	v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
																	result = function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
																	*(int32_t *)g29 = -1;
																	// branch -> 0xa976c
																	// 0xa976c
																	g10 = v1;
																	return result;
																}
																// 0xa96d8
																if (v39 == 24) {
																	// 0xa96e0
																	v50 = *(int32_t *)(v38 + 56);
																	v51 = *(int32_t *)(v38 + 60);
																	v40 = g33 + 232 * *(int32_t *)(v38 + 36);
																	v29 = v40 + 40;
																	v30 = v40 + 44;
																	v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
																	v68 = function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
																	result2 = v68;
																	*(int32_t *)g29 = -1;
																	// branch -> 0xa976c
																} else {
																	// 0xa9724
																	if (v39 == 25) {
																		// 0xa972c
																		v52 = *(int32_t *)(v38 + 56);
																		v53 = *(int32_t *)(v38 + 60);
																		v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
																		v31 = v41 + 64;
																		v32 = v41 + 68;
																		v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
																		v69 = function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
																		result2 = v69;
																		*(int32_t *)g29 = -1;
																		// branch -> 0xa976c
																	}
																}
																// 0xa976c
																g10 = v1;
																return result2;
															}
														}
														// 0xa976c
														g10 = v1;
														return result2;
													}
												}
												// 0xa9670
												if (*(int32_t *)g36 == 9) {
													// 0xa967c
													v20 = g32;
													v38 = g31 + v20;
													v64 = *(int32_t *)(v38 + 140);
													result2 = v64;
													if (v64 > *(int32_t *)(v38 + 956)) {
														// 0xa9690
														v39 = *(int32_t *)g29;
														if (v39 == 12) {
															// 0xa969c
															v27 = v38 + 36;
															v28 = v38 + 40;
															v48 = *(int32_t *)(v38 + 56);
															v49 = *(int32_t *)(v38 + 60);
															v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
															result = function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
															*(int32_t *)g29 = -1;
															// branch -> 0xa976c
															// 0xa976c
															g10 = v1;
															return result;
														}
														// 0xa96d8
														if (v39 == 24) {
															// 0xa96e0
															v50 = *(int32_t *)(v38 + 56);
															v51 = *(int32_t *)(v38 + 60);
															v40 = g33 + 232 * *(int32_t *)(v38 + 36);
															v29 = v40 + 40;
															v30 = v40 + 44;
															v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
															v68 = function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
															result2 = v68;
															*(int32_t *)g29 = -1;
															// branch -> 0xa976c
														} else {
															// 0xa9724
															if (v39 == 25) {
																// 0xa972c
																v52 = *(int32_t *)(v38 + 56);
																v53 = *(int32_t *)(v38 + 60);
																v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
																v31 = v41 + 64;
																v32 = v41 + 68;
																v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
																v69 = function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
																result2 = v69;
																*(int32_t *)g29 = -1;
																// branch -> 0xa976c
															}
														}
														// 0xa976c
														g10 = v1;
														return result2;
													}
												}
												// 0xa976c
												g10 = v1;
												return result2;
											}
										}
									}
								}
								// 0xa9568
								if (*(int32_t *)g36 == 5) {
									// 0xa9574
									v19 = g32;
									v33 = g31 + v19;
									v34 = v19 + 0x55ec * *(int32_t *)g28;
									result2 = v34;
									if (*(int32_t *)(v33 + 140) > *(int32_t *)(v34 + 752)) {
										// 0xa9594
										v35 = *(int32_t *)g29;
										if (v35 == 10) {
											// 0xa95a0
											v21 = v33 + 36;
											v22 = v33 + 40;
											v42 = *(int32_t *)(v33 + 56);
											v43 = *(int32_t *)(v33 + 60);
											v54 = GetDirection(v42, v43, *(int32_t *)v21, *(int32_t *)v22);
											v65 = function_a4f84(g35, v54, *(int32_t *)v21, *(int32_t *)v22);
											result2 = v65;
											*(int32_t *)g29 = -1;
											// branch -> 0xa9670
											// 0xa9670
											if (*(int32_t *)g36 == 9) {
												// 0xa967c
												v20 = g32;
												v38 = g31 + v20;
												v64 = *(int32_t *)(v38 + 140);
												result2 = v64;
												if (v64 > *(int32_t *)(v38 + 956)) {
													// 0xa9690
													v39 = *(int32_t *)g29;
													if (v39 == 12) {
														// 0xa969c
														v27 = v38 + 36;
														v28 = v38 + 40;
														v48 = *(int32_t *)(v38 + 56);
														v49 = *(int32_t *)(v38 + 60);
														v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
														result = function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
														*(int32_t *)g29 = -1;
														// branch -> 0xa976c
														// 0xa976c
														g10 = v1;
														return result;
													}
													// 0xa96d8
													if (v39 == 24) {
														// 0xa96e0
														v50 = *(int32_t *)(v38 + 56);
														v51 = *(int32_t *)(v38 + 60);
														v40 = g33 + 232 * *(int32_t *)(v38 + 36);
														v29 = v40 + 40;
														v30 = v40 + 44;
														v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
														v68 = function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
														result2 = v68;
														*(int32_t *)g29 = -1;
														// branch -> 0xa976c
													} else {
														// 0xa9724
														if (v39 == 25) {
															// 0xa972c
															v52 = *(int32_t *)(v38 + 56);
															v53 = *(int32_t *)(v38 + 60);
															v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
															v31 = v41 + 64;
															v32 = v41 + 68;
															v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
															v69 = function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
															result2 = v69;
															*(int32_t *)g29 = -1;
															// branch -> 0xa976c
														}
													}
													// 0xa976c
													g10 = v1;
													return result2;
												}
											}
											// 0xa976c
											g10 = v1;
											return result2;
										}
										// 0xa95dc
										if (v35 == 22) {
											// 0xa95e4
											v44 = *(int32_t *)(v33 + 56);
											v45 = *(int32_t *)(v33 + 60);
											v36 = g33 + 232 * *(int32_t *)(v33 + 36);
											v23 = v36 + 40;
											v24 = v36 + 44;
											v55 = GetDirection(v44, v45, *(int32_t *)v23, *(int32_t *)v24);
											v66 = function_a4f84(g35, v55, *(int32_t *)v23, *(int32_t *)v24);
											result2 = v66;
											*(int32_t *)g29 = -1;
											// branch -> 0xa9670
										} else {
											// 0xa9628
											if (v35 == 23) {
												// 0xa9630
												v46 = *(int32_t *)(v33 + 56);
												v47 = *(int32_t *)(v33 + 60);
												v37 = 0x55ec * *(int32_t *)(v33 + 36) + v19;
												v25 = v37 + 64;
												v26 = v37 + 68;
												v56 = GetDirection(v46, v47, *(int32_t *)v25, *(int32_t *)v26);
												v67 = function_a4f84(g35, v56, *(int32_t *)v25, *(int32_t *)v26);
												result2 = v67;
												*(int32_t *)g29 = -1;
												// branch -> 0xa9670
											}
										}
										// 0xa9670
										if (*(int32_t *)g36 == 9) {
											// 0xa967c
											v20 = g32;
											v38 = g31 + v20;
											v64 = *(int32_t *)(v38 + 140);
											result2 = v64;
											if (v64 > *(int32_t *)(v38 + 956)) {
												// 0xa9690
												v39 = *(int32_t *)g29;
												if (v39 == 12) {
													// 0xa969c
													v27 = v38 + 36;
													v28 = v38 + 40;
													v48 = *(int32_t *)(v38 + 56);
													v49 = *(int32_t *)(v38 + 60);
													v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
													result = function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
													*(int32_t *)g29 = -1;
													// branch -> 0xa976c
													// 0xa976c
													g10 = v1;
													return result;
												}
												// 0xa96d8
												if (v39 == 24) {
													// 0xa96e0
													v50 = *(int32_t *)(v38 + 56);
													v51 = *(int32_t *)(v38 + 60);
													v40 = g33 + 232 * *(int32_t *)(v38 + 36);
													v29 = v40 + 40;
													v30 = v40 + 44;
													v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
													v68 = function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
													result2 = v68;
													*(int32_t *)g29 = -1;
													// branch -> 0xa976c
												} else {
													// 0xa9724
													if (v39 == 25) {
														// 0xa972c
														v52 = *(int32_t *)(v38 + 56);
														v53 = *(int32_t *)(v38 + 60);
														v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
														v31 = v41 + 64;
														v32 = v41 + 68;
														v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
														v69 = function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
														result2 = v69;
														*(int32_t *)g29 = -1;
														// branch -> 0xa976c
													}
												}
												// 0xa976c
												g10 = v1;
												return result2;
											}
										}
										// 0xa976c
										g10 = v1;
										return result2;
									}
								}
								// 0xa9670
								if (*(int32_t *)g36 == 9) {
									// 0xa967c
									v20 = g32;
									v38 = g31 + v20;
									v64 = *(int32_t *)(v38 + 140);
									result2 = v64;
									if (v64 > *(int32_t *)(v38 + 956)) {
										// 0xa9690
										v39 = *(int32_t *)g29;
										if (v39 == 12) {
											// 0xa969c
											v27 = v38 + 36;
											v28 = v38 + 40;
											v48 = *(int32_t *)(v38 + 56);
											v49 = *(int32_t *)(v38 + 60);
											v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
											result = function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
											*(int32_t *)g29 = -1;
											// branch -> 0xa976c
											// 0xa976c
											g10 = v1;
											return result;
										}
										// 0xa96d8
										if (v39 == 24) {
											// 0xa96e0
											v50 = *(int32_t *)(v38 + 56);
											v51 = *(int32_t *)(v38 + 60);
											v40 = g33 + 232 * *(int32_t *)(v38 + 36);
											v29 = v40 + 40;
											v30 = v40 + 44;
											v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
											v68 = function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
											result2 = v68;
											*(int32_t *)g29 = -1;
											// branch -> 0xa976c
										} else {
											// 0xa9724
											if (v39 == 25) {
												// 0xa972c
												v52 = *(int32_t *)(v38 + 56);
												v53 = *(int32_t *)(v38 + 60);
												v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
												v31 = v41 + 64;
												v32 = v41 + 68;
												v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
												v69 = function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
												result2 = v69;
												*(int32_t *)g29 = -1;
												// branch -> 0xa976c
											}
										}
										// 0xa976c
										g10 = v1;
										return result2;
									}
								}
								// 0xa976c
								g10 = v1;
								return result2;
							}
							int32_t v94 = 232 * *(int32_t *)(v13 + 36); // 0xa93a4
							int32_t v95 = g33 + v94 + 40;               // 0xa93ac
							g21 = v95;
							g34 = *(int32_t *)(v13 + 56) - *(int32_t *)v95;
							int32_t v96 = abs();          // 0xa93b4
							int32_t v97 = v94 + g33 + 44; // 0xa93c0
							g34 = *(int32_t *)(g36 + 60) - *(int32_t *)v97;
							int32_t v98 = abs(); // 0xa93cc
							if (v96 <= 1) {
								// 0xa93d8
								if (v98 <= 1) {
									int32_t v99 = g36;                     // 0xa93e0
									int32_t v100 = *(int32_t *)(v99 + 64); // 0xa93e0
									int32_t v101 = *(int32_t *)(v99 + 68); // 0xa93e4
									g37 = GetDirection(v100, v101, *(int32_t *)g21, *(int32_t *)v97);
									function_a4e8c(g35);
									// branch -> 0xa9400
								}
							}
							// 0xa9400
							*(int32_t *)g29 = -1;
							// branch -> 0xa9568
							// 0xa9568
							if (*(int32_t *)g36 == 5) {
								// 0xa9574
								v19 = g32;
								v33 = g31 + v19;
								v34 = v19 + 0x55ec * *(int32_t *)g28;
								result2 = v34;
								if (*(int32_t *)(v33 + 140) > *(int32_t *)(v34 + 752)) {
									// 0xa9594
									v35 = *(int32_t *)g29;
									if (v35 == 10) {
										// 0xa95a0
										v21 = v33 + 36;
										v22 = v33 + 40;
										v42 = *(int32_t *)(v33 + 56);
										v43 = *(int32_t *)(v33 + 60);
										v54 = GetDirection(v42, v43, *(int32_t *)v21, *(int32_t *)v22);
										v65 = function_a4f84(g35, v54, *(int32_t *)v21, *(int32_t *)v22);
										result2 = v65;
										*(int32_t *)g29 = -1;
										// branch -> 0xa9670
										// 0xa9670
										if (*(int32_t *)g36 == 9) {
											// 0xa967c
											v20 = g32;
											v38 = g31 + v20;
											v64 = *(int32_t *)(v38 + 140);
											result2 = v64;
											if (v64 > *(int32_t *)(v38 + 956)) {
												// 0xa9690
												v39 = *(int32_t *)g29;
												if (v39 == 12) {
													// 0xa969c
													v27 = v38 + 36;
													v28 = v38 + 40;
													v48 = *(int32_t *)(v38 + 56);
													v49 = *(int32_t *)(v38 + 60);
													v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
													result = function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
													*(int32_t *)g29 = -1;
													// branch -> 0xa976c
													// 0xa976c
													g10 = v1;
													return result;
												}
												// 0xa96d8
												if (v39 == 24) {
													// 0xa96e0
													v50 = *(int32_t *)(v38 + 56);
													v51 = *(int32_t *)(v38 + 60);
													v40 = g33 + 232 * *(int32_t *)(v38 + 36);
													v29 = v40 + 40;
													v30 = v40 + 44;
													v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
													v68 = function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
													result2 = v68;
													*(int32_t *)g29 = -1;
													// branch -> 0xa976c
												} else {
													// 0xa9724
													if (v39 == 25) {
														// 0xa972c
														v52 = *(int32_t *)(v38 + 56);
														v53 = *(int32_t *)(v38 + 60);
														v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
														v31 = v41 + 64;
														v32 = v41 + 68;
														v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
														v69 = function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
														result2 = v69;
														*(int32_t *)g29 = -1;
														// branch -> 0xa976c
													}
												}
												// 0xa976c
												g10 = v1;
												return result2;
											}
										}
										// 0xa976c
										g10 = v1;
										return result2;
									}
									// 0xa95dc
									if (v35 == 22) {
										// 0xa95e4
										v44 = *(int32_t *)(v33 + 56);
										v45 = *(int32_t *)(v33 + 60);
										v36 = g33 + 232 * *(int32_t *)(v33 + 36);
										v23 = v36 + 40;
										v24 = v36 + 44;
										v55 = GetDirection(v44, v45, *(int32_t *)v23, *(int32_t *)v24);
										v66 = function_a4f84(g35, v55, *(int32_t *)v23, *(int32_t *)v24);
										result2 = v66;
										*(int32_t *)g29 = -1;
										// branch -> 0xa9670
									} else {
										// 0xa9628
										if (v35 == 23) {
											// 0xa9630
											v46 = *(int32_t *)(v33 + 56);
											v47 = *(int32_t *)(v33 + 60);
											v37 = 0x55ec * *(int32_t *)(v33 + 36) + v19;
											v25 = v37 + 64;
											v26 = v37 + 68;
											v56 = GetDirection(v46, v47, *(int32_t *)v25, *(int32_t *)v26);
											v67 = function_a4f84(g35, v56, *(int32_t *)v25, *(int32_t *)v26);
											result2 = v67;
											*(int32_t *)g29 = -1;
											// branch -> 0xa9670
										}
									}
									// 0xa9670
									if (*(int32_t *)g36 == 9) {
										// 0xa967c
										v20 = g32;
										v38 = g31 + v20;
										v64 = *(int32_t *)(v38 + 140);
										result2 = v64;
										if (v64 > *(int32_t *)(v38 + 956)) {
											// 0xa9690
											v39 = *(int32_t *)g29;
											if (v39 == 12) {
												// 0xa969c
												v27 = v38 + 36;
												v28 = v38 + 40;
												v48 = *(int32_t *)(v38 + 56);
												v49 = *(int32_t *)(v38 + 60);
												v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
												result = function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
												*(int32_t *)g29 = -1;
												// branch -> 0xa976c
												// 0xa976c
												g10 = v1;
												return result;
											}
											// 0xa96d8
											if (v39 == 24) {
												// 0xa96e0
												v50 = *(int32_t *)(v38 + 56);
												v51 = *(int32_t *)(v38 + 60);
												v40 = g33 + 232 * *(int32_t *)(v38 + 36);
												v29 = v40 + 40;
												v30 = v40 + 44;
												v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
												v68 = function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
												result2 = v68;
												*(int32_t *)g29 = -1;
												// branch -> 0xa976c
											} else {
												// 0xa9724
												if (v39 == 25) {
													// 0xa972c
													v52 = *(int32_t *)(v38 + 56);
													v53 = *(int32_t *)(v38 + 60);
													v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
													v31 = v41 + 64;
													v32 = v41 + 68;
													v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
													v69 = function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
													result2 = v69;
													*(int32_t *)g29 = -1;
													// branch -> 0xa976c
												}
											}
											// 0xa976c
											g10 = v1;
											return result2;
										}
									}
									// 0xa976c
									g10 = v1;
									return result2;
								}
							}
							// 0xa9670
							if (*(int32_t *)g36 == 9) {
								// 0xa967c
								v20 = g32;
								v38 = g31 + v20;
								v64 = *(int32_t *)(v38 + 140);
								result2 = v64;
								if (v64 > *(int32_t *)(v38 + 956)) {
									// 0xa9690
									v39 = *(int32_t *)g29;
									if (v39 != 12) {
										// 0xa96d8
										if (v39 == 24) {
											// 0xa96e0
											v50 = *(int32_t *)(v38 + 56);
											v51 = *(int32_t *)(v38 + 60);
											v40 = g33 + 232 * *(int32_t *)(v38 + 36);
											v29 = v40 + 40;
											v30 = v40 + 44;
											v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
											v68 = function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
											result2 = v68;
											*(int32_t *)g29 = -1;
											// branch -> 0xa976c
										} else {
											// 0xa9724
											if (v39 == 25) {
												// 0xa972c
												v52 = *(int32_t *)(v38 + 56);
												v53 = *(int32_t *)(v38 + 60);
												v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
												v31 = v41 + 64;
												v32 = v41 + 68;
												v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
												v69 = function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
												result2 = v69;
												*(int32_t *)g29 = -1;
												// branch -> 0xa976c
											}
										}
										// 0xa976c
										g10 = v1;
										return result2;
									}
									// 0xa969c
									v27 = v38 + 36;
									v28 = v38 + 40;
									v48 = *(int32_t *)(v38 + 56);
									v49 = *(int32_t *)(v38 + 60);
									v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
									function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
									*(int32_t *)g29 = -1;
									// branch -> 0xa976c
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// 0xa9568
						if (*(int32_t *)g36 == 5) {
							// 0xa9574
							v19 = g32;
							v33 = g31 + v19;
							v34 = v19 + 0x55ec * *(int32_t *)g28;
							if (*(int32_t *)(v33 + 140) > *(int32_t *)(v34 + 752)) {
								// 0xa9594
								v35 = *(int32_t *)g29;
								if (v35 == 10) {
									// 0xa95a0
									v21 = v33 + 36;
									v22 = v33 + 40;
									v42 = *(int32_t *)(v33 + 56);
									v43 = *(int32_t *)(v33 + 60);
									v54 = GetDirection(v42, v43, *(int32_t *)v21, *(int32_t *)v22);
									function_a4f84(g35, v54, *(int32_t *)v21, *(int32_t *)v22);
									*(int32_t *)g29 = -1;
									// branch -> 0xa9670
								} else {
									// 0xa95dc
									if (v35 == 22) {
										// 0xa95e4
										v44 = *(int32_t *)(v33 + 56);
										v45 = *(int32_t *)(v33 + 60);
										v36 = g33 + 232 * *(int32_t *)(v33 + 36);
										v23 = v36 + 40;
										v24 = v36 + 44;
										v55 = GetDirection(v44, v45, *(int32_t *)v23, *(int32_t *)v24);
										function_a4f84(g35, v55, *(int32_t *)v23, *(int32_t *)v24);
										*(int32_t *)g29 = -1;
										// branch -> 0xa9670
									} else {
										// 0xa9628
										if (v35 == 23) {
											// 0xa9630
											v46 = *(int32_t *)(v33 + 56);
											v47 = *(int32_t *)(v33 + 60);
											v37 = 0x55ec * *(int32_t *)(v33 + 36) + v19;
											v25 = v37 + 64;
											v26 = v37 + 68;
											v56 = GetDirection(v46, v47, *(int32_t *)v25, *(int32_t *)v26);
											function_a4f84(g35, v56, *(int32_t *)v25, *(int32_t *)v26);
											*(int32_t *)g29 = -1;
											// branch -> 0xa9670
										}
									}
									// 0xa9670
									if (*(int32_t *)g36 == 9) {
										// 0xa967c
										v20 = g32;
										v38 = g31 + v20;
										if (*(int32_t *)(v38 + 140) > *(int32_t *)(v38 + 956)) {
											// 0xa9690
											v39 = *(int32_t *)g29;
											if (v39 == 12) {
												// 0xa969c
												v27 = v38 + 36;
												v28 = v38 + 40;
												v48 = *(int32_t *)(v38 + 56);
												v49 = *(int32_t *)(v38 + 60);
												v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
												function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
												*(int32_t *)g29 = -1;
												// branch -> 0xa976c
											} else {
												// 0xa96d8
												if (v39 == 24) {
													// 0xa96e0
													v50 = *(int32_t *)(v38 + 56);
													v51 = *(int32_t *)(v38 + 60);
													v40 = g33 + 232 * *(int32_t *)(v38 + 36);
													v29 = v40 + 40;
													v30 = v40 + 44;
													v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
													function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
													*(int32_t *)g29 = -1;
													// branch -> 0xa976c
												} else {
													// 0xa9724
													if (v39 == 25) {
														// 0xa972c
														v52 = *(int32_t *)(v38 + 56);
														v53 = *(int32_t *)(v38 + 60);
														v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
														v31 = v41 + 64;
														v32 = v41 + 68;
														v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
														function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
														*(int32_t *)g29 = -1;
														// branch -> 0xa976c
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0xa9670
								if (*(int32_t *)g36 == 9) {
									// 0xa967c
									v20 = g32;
									v38 = g31 + v20;
									if (*(int32_t *)(v38 + 140) > *(int32_t *)(v38 + 956)) {
										// 0xa9690
										v39 = *(int32_t *)g29;
										if (v39 == 12) {
											// 0xa969c
											v27 = v38 + 36;
											v28 = v38 + 40;
											v48 = *(int32_t *)(v38 + 56);
											v49 = *(int32_t *)(v38 + 60);
											v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
											function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
											*(int32_t *)g29 = -1;
											// branch -> 0xa976c
										} else {
											// 0xa96d8
											if (v39 == 24) {
												// 0xa96e0
												v50 = *(int32_t *)(v38 + 56);
												v51 = *(int32_t *)(v38 + 60);
												v40 = g33 + 232 * *(int32_t *)(v38 + 36);
												v29 = v40 + 40;
												v30 = v40 + 44;
												v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
												function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
												*(int32_t *)g29 = -1;
												// branch -> 0xa976c
											} else {
												// 0xa9724
												if (v39 == 25) {
													// 0xa972c
													v52 = *(int32_t *)(v38 + 56);
													v53 = *(int32_t *)(v38 + 60);
													v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
													v31 = v41 + 64;
													v32 = v41 + 68;
													v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
													function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
													*(int32_t *)g29 = -1;
													// branch -> 0xa976c
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0xa9670
						if (*(int32_t *)g36 == 9) {
							// 0xa967c
							v20 = g32;
							v38 = g31 + v20;
							if (*(int32_t *)(v38 + 140) > *(int32_t *)(v38 + 956)) {
								// 0xa9690
								v39 = *(int32_t *)g29;
								if (v39 == 12) {
									// 0xa969c
									v27 = v38 + 36;
									v28 = v38 + 40;
									v48 = *(int32_t *)(v38 + 56);
									v49 = *(int32_t *)(v38 + 60);
									v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
									function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
									*(int32_t *)g29 = -1;
									// branch -> 0xa976c
								} else {
									// 0xa96d8
									if (v39 == 24) {
										// 0xa96e0
										v50 = *(int32_t *)(v38 + 56);
										v51 = *(int32_t *)(v38 + 60);
										v40 = g33 + 232 * *(int32_t *)(v38 + 36);
										v29 = v40 + 40;
										v30 = v40 + 44;
										v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
										function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
										*(int32_t *)g29 = -1;
										// branch -> 0xa976c
									} else {
										// 0xa9724
										if (v39 == 25) {
											// 0xa972c
											v52 = *(int32_t *)(v38 + 56);
											v53 = *(int32_t *)(v38 + 60);
											v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
											v31 = v41 + 64;
											v32 = v41 + 68;
											v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
											function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
											*(int32_t *)g29 = -1;
											// branch -> 0xa976c
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0xa9568
				if (*(int32_t *)g36 == 5) {
					// 0xa9574
					v19 = g32;
					v33 = g31 + v19;
					v34 = v19 + 0x55ec * *(int32_t *)g28;
					if (*(int32_t *)(v33 + 140) > *(int32_t *)(v34 + 752)) {
						// 0xa9594
						v35 = *(int32_t *)g29;
						if (v35 == 10) {
							// 0xa95a0
							v21 = v33 + 36;
							v22 = v33 + 40;
							v42 = *(int32_t *)(v33 + 56);
							v43 = *(int32_t *)(v33 + 60);
							v54 = GetDirection(v42, v43, *(int32_t *)v21, *(int32_t *)v22);
							function_a4f84(g35, v54, *(int32_t *)v21, *(int32_t *)v22);
							*(int32_t *)g29 = -1;
							// branch -> 0xa9670
						} else {
							// 0xa95dc
							if (v35 == 22) {
								// 0xa95e4
								v44 = *(int32_t *)(v33 + 56);
								v45 = *(int32_t *)(v33 + 60);
								v36 = g33 + 232 * *(int32_t *)(v33 + 36);
								v23 = v36 + 40;
								v24 = v36 + 44;
								v55 = GetDirection(v44, v45, *(int32_t *)v23, *(int32_t *)v24);
								function_a4f84(g35, v55, *(int32_t *)v23, *(int32_t *)v24);
								*(int32_t *)g29 = -1;
								// branch -> 0xa9670
							} else {
								// 0xa9628
								if (v35 == 23) {
									// 0xa9630
									v46 = *(int32_t *)(v33 + 56);
									v47 = *(int32_t *)(v33 + 60);
									v37 = 0x55ec * *(int32_t *)(v33 + 36) + v19;
									v25 = v37 + 64;
									v26 = v37 + 68;
									v56 = GetDirection(v46, v47, *(int32_t *)v25, *(int32_t *)v26);
									function_a4f84(g35, v56, *(int32_t *)v25, *(int32_t *)v26);
									*(int32_t *)g29 = -1;
									// branch -> 0xa9670
								}
							}
							// 0xa9670
							if (*(int32_t *)g36 == 9) {
								// 0xa967c
								v20 = g32;
								v38 = g31 + v20;
								if (*(int32_t *)(v38 + 140) > *(int32_t *)(v38 + 956)) {
									// 0xa9690
									v39 = *(int32_t *)g29;
									if (v39 == 12) {
										// 0xa969c
										v27 = v38 + 36;
										v28 = v38 + 40;
										v48 = *(int32_t *)(v38 + 56);
										v49 = *(int32_t *)(v38 + 60);
										v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
										function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
										*(int32_t *)g29 = -1;
										// branch -> 0xa976c
									} else {
										// 0xa96d8
										if (v39 == 24) {
											// 0xa96e0
											v50 = *(int32_t *)(v38 + 56);
											v51 = *(int32_t *)(v38 + 60);
											v40 = g33 + 232 * *(int32_t *)(v38 + 36);
											v29 = v40 + 40;
											v30 = v40 + 44;
											v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
											function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
											*(int32_t *)g29 = -1;
											// branch -> 0xa976c
										} else {
											// 0xa9724
											if (v39 == 25) {
												// 0xa972c
												v52 = *(int32_t *)(v38 + 56);
												v53 = *(int32_t *)(v38 + 60);
												v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
												v31 = v41 + 64;
												v32 = v41 + 68;
												v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
												function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
												*(int32_t *)g29 = -1;
												// branch -> 0xa976c
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// 0xa9670
						if (*(int32_t *)g36 == 9) {
							// 0xa967c
							v20 = g32;
							v38 = g31 + v20;
							if (*(int32_t *)(v38 + 140) > *(int32_t *)(v38 + 956)) {
								// 0xa9690
								v39 = *(int32_t *)g29;
								if (v39 == 12) {
									// 0xa969c
									v27 = v38 + 36;
									v28 = v38 + 40;
									v48 = *(int32_t *)(v38 + 56);
									v49 = *(int32_t *)(v38 + 60);
									v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
									function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
									*(int32_t *)g29 = -1;
									// branch -> 0xa976c
								} else {
									// 0xa96d8
									if (v39 == 24) {
										// 0xa96e0
										v50 = *(int32_t *)(v38 + 56);
										v51 = *(int32_t *)(v38 + 60);
										v40 = g33 + 232 * *(int32_t *)(v38 + 36);
										v29 = v40 + 40;
										v30 = v40 + 44;
										v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
										function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
										*(int32_t *)g29 = -1;
										// branch -> 0xa976c
									} else {
										// 0xa9724
										if (v39 == 25) {
											// 0xa972c
											v52 = *(int32_t *)(v38 + 56);
											v53 = *(int32_t *)(v38 + 60);
											v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
											v31 = v41 + 64;
											v32 = v41 + 68;
											v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
											function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
											*(int32_t *)g29 = -1;
											// branch -> 0xa976c
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0xa9670
				if (*(int32_t *)g36 == 9) {
					// 0xa967c
					v20 = g32;
					v38 = g31 + v20;
					if (*(int32_t *)(v38 + 140) > *(int32_t *)(v38 + 956)) {
						// 0xa9690
						v39 = *(int32_t *)g29;
						if (v39 == 12) {
							// 0xa969c
							v27 = v38 + 36;
							v28 = v38 + 40;
							v48 = *(int32_t *)(v38 + 56);
							v49 = *(int32_t *)(v38 + 60);
							v57 = GetDirection(v48, v49, *(int32_t *)v27, *(int32_t *)v28);
							function_a5164(g35, v57, *(int32_t *)v27, *(int32_t *)v28);
							*(int32_t *)g29 = -1;
							// branch -> 0xa976c
						} else {
							// 0xa96d8
							if (v39 == 24) {
								// 0xa96e0
								v50 = *(int32_t *)(v38 + 56);
								v51 = *(int32_t *)(v38 + 60);
								v40 = g33 + 232 * *(int32_t *)(v38 + 36);
								v29 = v40 + 40;
								v30 = v40 + 44;
								v58 = GetDirection(v50, v51, *(int32_t *)v29, *(int32_t *)v30);
								function_a5164(g35, v58, *(int32_t *)v29, *(int32_t *)v30);
								*(int32_t *)g29 = -1;
								// branch -> 0xa976c
							} else {
								// 0xa9724
								if (v39 == 25) {
									// 0xa972c
									v52 = *(int32_t *)(v38 + 56);
									v53 = *(int32_t *)(v38 + 60);
									v41 = 0x55ec * *(int32_t *)(v38 + 36) + v20;
									v31 = v41 + 64;
									v32 = v41 + 68;
									v59 = GetDirection(v52, v53, *(int32_t *)v31, *(int32_t *)v32);
									function_a5164(g35, v59, *(int32_t *)v31, *(int32_t *)v32);
									*(int32_t *)g29 = -1;
									// branch -> 0xa976c
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	} else {
		// 0xa88f0
		g27 = v13;
		if (*(int32_t *)v13 == 0) {
			// 0xa8900
			int32_t v102;       // r4
			int32_t v103;       // 0xa8a40
			int32_t v104;       // 0xa8c0c
			int32_t v105;       // 0xa8c1c
			int32_t v106;       // 0xa8c24
			int32_t v107;       // 0xa8c2c
			int32_t v108;       // 0xa8c34
			int32_t v109;       // 0xa8c3c
			int32_t v110;       // 0xa8c44
			int32_t v111;       // 0xa8c4c
			int32_t v112;       // 0xa8c54
			int32_t v113;       // 0xa8c5c
			int32_t v114;       // 0xa8c64
			int32_t v115;       // 0xa8c6c
			int32_t v116;       // 0xa8c74
			int32_t v117;       // 0xa8c7c
			int32_t v118;       // 0xa8c84
			int32_t v119;       // 0xa8c8c
			int32_t v120;       // 0xa8c94
			int32_t v121;       // 0xa8c9c
			int32_t v122;       // 0xa8ca4
			int32_t v123;       // 0xa8cac
			int32_t v124;       // 0xa8cb4
			int32_t v125;       // 0xa8cbc
			int32_t v126;       // 0xa8cc4
			int32_t v127;       // 0xa8ccc
			unsigned char v128; // 0xa8a80
			if (g35 == *(int32_t *)g28) {
				int32_t v129 = *(int32_t *)g29; // 0xa890c
				if (v129 != 20) {
					// 0xa8918
					if (v129 != 21) {
						// 0xa8a40
						v103 = g23;
						if (*(char *)*(int32_t *)(v103 - 0x77e4) == 0) {
							// 0xa8a74
							// branch -> 0xa8a80
						}
						// 0xa8a80
						v128 = *(char *)g26;
						if (v128 <= 8) {
							// 0xa8a90
							return *(int32_t *)(*(int32_t *)(v103 - 0x5a08) + 4 * (int32_t)v128);
						}
						// 0xa8c0c
						v104 = g27;
						v102 = g31 + g32;
						g19 = -1;
						*(char *)(v104 + 4) = *(char *)(v104 + 5);
						v105 = g27;
						*(char *)(v105 + 5) = *(char *)(v105 + 6);
						v106 = g27;
						*(char *)(v106 + 6) = *(char *)(v106 + 7);
						v107 = g27;
						*(char *)(v107 + 7) = *(char *)(v107 + 8);
						v108 = g27;
						*(char *)(v108 + 8) = *(char *)(v108 + 9);
						v109 = g27;
						*(char *)(v109 + 9) = *(char *)(v109 + 10);
						v110 = g27;
						*(char *)(v110 + 10) = *(char *)(v110 + 11);
						v111 = g27;
						*(char *)(v111 + 11) = *(char *)(v111 + 12);
						v112 = g27;
						*(char *)(v112 + 12) = *(char *)(v112 + 13);
						v113 = g27;
						*(char *)(v113 + 13) = *(char *)(v113 + 14);
						v114 = g27;
						*(char *)(v114 + 14) = *(char *)(v114 + 15);
						v115 = g27;
						*(char *)(v115 + 15) = *(char *)(v115 + 16);
						v116 = g27;
						*(char *)(v116 + 16) = *(char *)(v116 + 17);
						v117 = g27;
						*(char *)(v117 + 17) = *(char *)(v117 + 18);
						v118 = g27;
						*(char *)(v118 + 18) = *(char *)(v118 + 19);
						v119 = g27;
						*(char *)(v119 + 19) = *(char *)(v119 + 20);
						v120 = g27;
						*(char *)(v120 + 20) = *(char *)(v120 + 21);
						v121 = g27;
						*(char *)(v121 + 21) = *(char *)(v121 + 22);
						v122 = g27;
						*(char *)(v122 + 22) = *(char *)(v122 + 23);
						v123 = g27;
						*(char *)(v123 + 23) = *(char *)(v123 + 24);
						v124 = g27;
						*(char *)(v124 + 24) = *(char *)(v124 + 25);
						v125 = g27;
						*(char *)(v125 + 25) = *(char *)(v125 + 26);
						v126 = g27;
						*(char *)(v126 + 26) = *(char *)(v126 + 27);
						v127 = g27;
						*(char *)(v127 + 27) = *(char *)(v127 + 28);
						*(char *)(v102 + 28) = (char)g19;
						if (*(int32_t *)g27 == 0) {
							// 0xa8ce4
							StartStand(g35, *(int32_t *)(v102 + 112));
							*(int32_t *)g29 = g19;
							// branch -> 0xa976c
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				int32_t v130 = *(int32_t *)(v13 + 36); // 0xa8928
				g28 = v130;
				int32_t v131;
				if (v129 == 20) {
					int32_t v132 = 232 * v130; // 0xa8930
					int32_t v133 = v13 + 64;   // 0xa8934
					g21 = v133;
					int32_t v134 = g33 + v132 + 40; // 0xa8940
					g25 = v134;
					g34 = *(int32_t *)v133 - *(int32_t *)v134;
					int32_t v135 = v13 + 68;        // 0xa8950
					int32_t v136 = v132 + g33 + 44; // 0xa8954
					g24 = v136;
					g30 = abs();
					g22 = v135;
					g34 = *(int32_t *)v135 - *(int32_t *)v136;
					v15 = abs();
					int32_t v137 = *(int32_t *)g25; // 0xa8978
					int32_t v138 = *(int32_t *)g24; // 0xa897c
					v131 = GetDirection(*(int32_t *)g21, *(int32_t *)g22, v137, v138);
					// branch -> 0xa89ec
				} else {
					int32_t v139 = 0x55ec * v130; // 0xa898c
					int32_t v140 = v11 + 64;      // 0xa8990
					int32_t v141 = v12 + v140;    // 0xa8994
					g25 = v141;
					int32_t v142 = v139 + v140; // 0xa899c
					g22 = v142;
					g34 = *(int32_t *)v141 - *(int32_t *)v142;
					int32_t v143 = g32 + 68; // 0xa89ac
					g30 = abs();
					int32_t v144 = v139 + v143; // 0xa89b4
					g21 = v144;
					int32_t v145 = g31 + v143; // 0xa89b8
					g24 = v145;
					g34 = *(int32_t *)v145 - *(int32_t *)v144;
					v15 = abs();
					int32_t v146 = *(int32_t *)g22; // 0xa89dc
					int32_t v147 = *(int32_t *)g21; // 0xa89e0
					v131 = GetDirection(*(int32_t *)g25, *(int32_t *)g24, v146, v147);
					// branch -> 0xa89ec
				}
				// 0xa89ec
				g20 = v131;
				if (g30 <= 1) {
					// 0xa89f4
					if (v15 <= 1) {
						// 0xa89fc
						ClrPlrPath(g35);
						int32_t v148 = g28;                                  // 0xa8a04
						int32_t v149 = *(int32_t *)(g33 + 232 * v148 + 212); // 0xa8a0c
						if (v149 != 0) {
							// 0xa8a18
							if (v149 != 36) {
								// 0xa8a20
								function_872a8(v148);
								// branch -> 0xa8a38
								// 0xa8a38
								*(int32_t *)g29 = -1;
								// branch -> 0xa8a40
								// 0xa8a40
								v103 = g23;
								if (*(char *)*(int32_t *)(v103 - 0x77e4) == 0) {
									// 0xa8a74
									// branch -> 0xa8a80
								}
								// 0xa8a80
								v128 = *(char *)g26;
								if (v128 <= 8) {
									// 0xa8a90
									return *(int32_t *)(*(int32_t *)(v103 - 0x5a08) + 4 * (int32_t)v128);
								}
								// 0xa8c0c
								v104 = g27;
								v102 = g31 + g32;
								g19 = -1;
								*(char *)(v104 + 4) = *(char *)(v104 + 5);
								v105 = g27;
								*(char *)(v105 + 5) = *(char *)(v105 + 6);
								v106 = g27;
								*(char *)(v106 + 6) = *(char *)(v106 + 7);
								v107 = g27;
								*(char *)(v107 + 7) = *(char *)(v107 + 8);
								v108 = g27;
								*(char *)(v108 + 8) = *(char *)(v108 + 9);
								v109 = g27;
								*(char *)(v109 + 9) = *(char *)(v109 + 10);
								v110 = g27;
								*(char *)(v110 + 10) = *(char *)(v110 + 11);
								v111 = g27;
								*(char *)(v111 + 11) = *(char *)(v111 + 12);
								v112 = g27;
								*(char *)(v112 + 12) = *(char *)(v112 + 13);
								v113 = g27;
								*(char *)(v113 + 13) = *(char *)(v113 + 14);
								v114 = g27;
								*(char *)(v114 + 14) = *(char *)(v114 + 15);
								v115 = g27;
								*(char *)(v115 + 15) = *(char *)(v115 + 16);
								v116 = g27;
								*(char *)(v116 + 16) = *(char *)(v116 + 17);
								v117 = g27;
								*(char *)(v117 + 17) = *(char *)(v117 + 18);
								v118 = g27;
								*(char *)(v118 + 18) = *(char *)(v118 + 19);
								v119 = g27;
								*(char *)(v119 + 19) = *(char *)(v119 + 20);
								v120 = g27;
								*(char *)(v120 + 20) = *(char *)(v120 + 21);
								v121 = g27;
								*(char *)(v121 + 21) = *(char *)(v121 + 22);
								v122 = g27;
								*(char *)(v122 + 22) = *(char *)(v122 + 23);
								v123 = g27;
								*(char *)(v123 + 23) = *(char *)(v123 + 24);
								v124 = g27;
								*(char *)(v124 + 24) = *(char *)(v124 + 25);
								v125 = g27;
								*(char *)(v125 + 25) = *(char *)(v125 + 26);
								v126 = g27;
								*(char *)(v126 + 26) = *(char *)(v126 + 27);
								v127 = g27;
								*(char *)(v127 + 27) = *(char *)(v127 + 28);
								*(char *)(v102 + 28) = (char)g19;
								if (*(int32_t *)g27 == 0) {
									// 0xa8ce4
									StartStand(g35, *(int32_t *)(v102 + 112));
									*(int32_t *)g29 = g19;
									// branch -> 0xa976c
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0xa8a2c
						g37 = g20;
						function_a4e8c(g35);
						// branch -> 0xa8a38
						// 0xa8a38
						*(int32_t *)g29 = -1;
						// branch -> 0xa8a40
					}
				}
			}
			// 0xa8a40
			v103 = g23;
			if (*(char *)*(int32_t *)(v103 - 0x77e4) == 0) {
				// 0xa8a74
				// branch -> 0xa8a80
			}
			// 0xa8a80
			v128 = *(char *)g26;
			if (v128 <= 8) {
				// 0xa8a90
				return *(int32_t *)(*(int32_t *)(v103 - 0x5a08) + 4 * (int32_t)v128);
			}
			// 0xa8c0c
			v104 = g27;
			v102 = g31 + g32;
			g19 = -1;
			*(char *)(v104 + 4) = *(char *)(v104 + 5);
			v105 = g27;
			*(char *)(v105 + 5) = *(char *)(v105 + 6);
			v106 = g27;
			*(char *)(v106 + 6) = *(char *)(v106 + 7);
			v107 = g27;
			*(char *)(v107 + 7) = *(char *)(v107 + 8);
			v108 = g27;
			*(char *)(v108 + 8) = *(char *)(v108 + 9);
			v109 = g27;
			*(char *)(v109 + 9) = *(char *)(v109 + 10);
			v110 = g27;
			*(char *)(v110 + 10) = *(char *)(v110 + 11);
			v111 = g27;
			*(char *)(v111 + 11) = *(char *)(v111 + 12);
			v112 = g27;
			*(char *)(v112 + 12) = *(char *)(v112 + 13);
			v113 = g27;
			*(char *)(v113 + 13) = *(char *)(v113 + 14);
			v114 = g27;
			*(char *)(v114 + 14) = *(char *)(v114 + 15);
			v115 = g27;
			*(char *)(v115 + 15) = *(char *)(v115 + 16);
			v116 = g27;
			*(char *)(v116 + 16) = *(char *)(v116 + 17);
			v117 = g27;
			*(char *)(v117 + 17) = *(char *)(v117 + 18);
			v118 = g27;
			*(char *)(v118 + 18) = *(char *)(v118 + 19);
			v119 = g27;
			*(char *)(v119 + 19) = *(char *)(v119 + 20);
			v120 = g27;
			*(char *)(v120 + 20) = *(char *)(v120 + 21);
			v121 = g27;
			*(char *)(v121 + 21) = *(char *)(v121 + 22);
			v122 = g27;
			*(char *)(v122 + 22) = *(char *)(v122 + 23);
			v123 = g27;
			*(char *)(v123 + 23) = *(char *)(v123 + 24);
			v124 = g27;
			*(char *)(v124 + 24) = *(char *)(v124 + 25);
			v125 = g27;
			*(char *)(v125 + 25) = *(char *)(v125 + 26);
			v126 = g27;
			*(char *)(v126 + 26) = *(char *)(v126 + 27);
			v127 = g27;
			*(char *)(v127 + 27) = *(char *)(v127 + 28);
			*(char *)(v102 + 28) = (char)g19;
			if (*(int32_t *)g27 == 0) {
				// 0xa8ce4
				StartStand(g35, *(int32_t *)(v102 + 112));
				*(int32_t *)g29 = g19;
				// branch -> 0xa976c
			}
		}
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0xa9780 - 0xa9814
int32_t PlrDeathModeOK(int32_t a1)
{
	int32_t v1 = g36; // 0xa9780
	int32_t v2 = g10; // 0xa9784
	g36 = a1;
	if (a1 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		// 0xa97a4
		// branch -> 0xa9800
		// 0xa9800
		g36 = v1;
		g10 = v2;
		return 1;
	}
	int32_t v3 = a1; // 0xa97c0
	if (a1 >= 4) {
		// 0xa97b4
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a10));
		v3 = g36;
		// branch -> 0xa97c0
	}
	int32_t v4 = *(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v3); // 0xa97c8
	if (v4 == 8 || v4 == 11) {
		// 0xa97d4
		// branch -> 0xa9800
		// 0xa9800
		g36 = v1;
		g10 = v2;
		return 1;
	}
	// 0xa97ec
	int32_t result; // 0xa9810
	if (v4 == 10) {
		// 0xa97f4
		result = 1;
		// branch -> 0xa9800
	} else {
		// 0xa97fc
		result = 0;
		// branch -> 0xa9800
	}
	// 0xa9800
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0xa9814 - 0xa9a14
int32_t function_a9814(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0xa981c
	g33 = v1;
	g31 = 0;
	g35 = *(int32_t *)(g23 - 0x7760);
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa9828
	g36 = v2;
	g32 = 0;
	uint32_t v3 = *(int32_t *)v1; // 0xa9838
	g37 = v3;
	if (v3 >= 4) {
		// 0xa9844
		app_fatal(*(int32_t *)(g23 - 0x5a14));
		v2 = g36;
		v1 = g33;
		// branch -> 0xa984c
	}
	int32_t v4 = 0x55ec * *(int32_t *)v1; // 0xa9850
	int32_t v5 = v4;                      // r4
	char *v6 = (char *)(v4 + v2 + 436);   // 0xa9858
	if (*v6 >= 51) {
		// 0xa9868
		*v6 = 50;
		v4 = v5;
		v2 = g36;
		// branch -> 0xa9870
	}
	int32_t v7 = v2 + v4;                // 0xa9870
	int32_t v8 = *(int32_t *)(v7 + 448); // 0xa9878
	int32_t *v9 = (int32_t *)(v7 + 440); // 0xa987c
	if (*v9 > v8) {
		// 0xa9888
		*v9 = v8;
		v4 = v5;
		v2 = g36;
		// branch -> 0xa988c
	}
	int32_t v10 = v2 + v4; // 0xa988c
	v5 = v10;
	int32_t v11 = 0; // r7
	int32_t v12 = 0; // r6
	int32_t v13 = 0; // 0xa98f4
	if (*(int32_t *)(v10 + 0x4828) > 0) {
		int32_t v14 = v10; // 0xa98d023
		int32_t v15 = v10; // 0xa98bc
		int32_t v16 = 0;   // 0xa98cc21
		int32_t v17 = 0;   // 0xa98c417
		int32_t v18;       // 0xa98c418
		while (true) {
			int32_t v19 = v14; // 0xa98d0
			int32_t v20 = v16; // 0xa98cc
			int32_t v21 = v15; // 0xa98c8
			v18 = v17;
			if (*(int32_t *)(v15 + 3760) == 11) {
				int32_t *v22 = (int32_t *)(v15 + 3948); // 0xa98b0
				int32_t v23 = v14;
				int32_t v24 = v16;
				int32_t v25 = v17; // 0xa98c4
				int32_t v26 = v15; // 0xa98c0
				if (*v22 >= 0x1389) {
					// 0xa98bc
					*v22 = 0x1388;
					v23 = v10;
					v24 = v12;
					v25 = v11;
					v26 = v5;
					// branch -> 0xa98c0
				}
				int32_t v27 = *(int32_t *)(v26 + 3948) + v25; // 0xa98c4
				v11 = v27;
				v19 = v23;
				v20 = v24;
				v21 = v26;
				v18 = v27;
				// branch -> 0xa98c8
			}
			int32_t v28 = v21 + 368; // 0xa98c8
			v5 = v28;
			int32_t v29 = v20 + 1; // 0xa98cc
			v12 = v29;
			if (v29 >= *(int32_t *)(v19 + 0x4828)) {
				// break -> 0xa98d0
				break;
			}
			v14 = v19;
			v15 = v28;
			v16 = v29;
			v17 = v18;
			// continue -> 0xa98a4
		}
		// 0xa98d0
		v13 = v18;
		v2 = g36;
		// branch -> 0xa98dc
	}
	int32_t v30 = 0x55ec * *(int32_t *)g33; // 0xa98e0
	v5 = v30;
	int32_t *v31 = (int32_t *)(v30 + v2 + 456); // 0xa98e8
	if (v13 != *v31) {
		// 0xa98f4
		*v31 = v13;
		v30 = v5;
		v2 = g36;
		// branch -> 0xa98f8
	}
	int32_t v32 = v2 + v30;                                                // 0xa98f8
	unsigned char v33 = *(char *)(v32 + 348);                              // 0xa98fc
	int32_t *v34 = (int32_t *)(v32 + 356);                                 // 0xa9904
	int32_t v35 = *(int32_t *)(g35 + 0x1000000 * (int32_t)v33 / 0x100000); // 0xa9910
	if (*v34 > v35) {
		// 0xa991c
		*v34 = v35;
		v30 = v5;
		v2 = g36;
		// branch -> 0xa9920
	}
	int32_t v36 = 16 * (int32_t)v33;            // 0xa9920
	int32_t v37 = v36;                          // r5
	int32_t *v38 = (int32_t *)(v2 + v30 + 364); // 0xa992c
	int32_t v39 = *(int32_t *)(v36 + g35 + 4);  // 0xa9930
	if (*v38 > v39) {
		// 0xa993c
		*v38 = v39;
		v30 = v5;
		v2 = g36;
		v36 = v37;
		// branch -> 0xa9940
	}
	int32_t v40 = *(int32_t *)(g35 + v36 + 8);  // 0xa9948
	int32_t *v41 = (int32_t *)(v2 + v30 + 372); // 0xa994c
	if (*v41 > v40) {
		// 0xa9958
		*v41 = v40;
		v30 = v5;
		v2 = g36;
		v36 = v37;
		// branch -> 0xa995c
	}
	int32_t v42 = *(int32_t *)(g35 + v36 + 12); // 0xa9964
	int32_t *v43 = (int32_t *)(v2 + v30 + 380); // 0xa9968
	if (*v43 > v42) {
		// 0xa9974
		*v43 = v42;
		v2 = g36;
		v30 = v5;
		// branch -> 0xa9978
	}
	int32_t v44 = v2 + 1 + v30;                    // 0xa9980
	int32_t v45 = *(int32_t *)(g23 - 0x769c) + 56; // 0xa9984
	int32_t v46 = 1;                               // r24
	g35 = 15;
	int32_t v47 = 1; // 0xa999c
	// branch -> 0xa9990
	while (true) {
		int32_t v48 = v45; // 0xa99d4
		int32_t v49 = v44; // 0xa99cc
		int32_t v50 = v47; // 0xa99c8
		int32_t v51;       // 0xa99c8
		if (*(int32_t *)(v45 + 12) != -1) {
			char *v52 = (char *)(v44 + 193); // 0xa99ac
			unsigned char v53 = *v52;        // 0xa99ac
			g31 |= 1;
			if (v53 != 15 && 0x1000000 * (int32_t)v53 >= 0xf000000) {
				// 0xa99c4
				*v52 = (char)g35;
				v50 = v46;
				// branch -> 0xa99c8
			} else {
				v50 = v47;
			}
			// 0xa99c8
			v51 = v50 + 1;
			v46 = v51;
			if (v51 >= 37) {
				// break -> 0xa99dc
				break;
			}
			v44++;
			v47 = v51;
			v45 += 56;
			// continue -> 0xa9990
			continue;
		}
		// 0xa99c8
		v51 = v50 + 1;
		v46 = v51;
		if (v51 >= 37) {
			// break -> 0xa99dc
			break;
		}
		v44 = v49 + 1;
		v47 = v51;
		v45 = v48 + 56;
		// continue -> 0xa9990
	}
	int32_t v54 = g36 + 0x55ec * *(int32_t *)g33; // 0xa99e4
	int32_t *v55 = (int32_t *)(v54 + 264);        // 0xa99e8
	int32_t result = *(int32_t *)(v54 + 260);     // r3
	*v55 = g31 & *v55;
	*(int32_t *)(v54 + 260) = g32 & result;
	return result;
}

// Address range: 0xa9a14 - 0xa9ab8
int32_t CheckCheatStats(int32_t a1)
{
	int32_t v1 = 0x55ec * a1;                 // 0xa9a14
	int32_t v2 = v1;                          // r6
	int32_t v3 = *(int32_t *)(g23 - 0x77a8);  // 0xa9a18
	int32_t v4 = v3;                          // r5
	int32_t *v5 = (int32_t *)(v3 + v1 + 352); // 0xa9a20
	if (*v5 >= 751) {
		// 0xa9a2c
		*v5 = 750;
		v1 = v2;
		v3 = v4;
		// branch -> 0xa9a34
	}
	int32_t *v6 = (int32_t *)(v3 + v1 + 368); // 0xa9a38
	if (*v6 >= 751) {
		// 0xa9a44
		*v6 = 750;
		v1 = v2;
		v3 = v4;
		// branch -> 0xa9a4c
	}
	int32_t *v7 = (int32_t *)(v3 + v1 + 360); // 0xa9a50
	if (*v7 >= 751) {
		// 0xa9a5c
		*v7 = 750;
		v1 = v2;
		v3 = v4;
		// branch -> 0xa9a64
	}
	int32_t *v8 = (int32_t *)(v3 + v1 + 376); // 0xa9a68
	if (*v8 >= 751) {
		// 0xa9a74
		*v8 = 750;
		v1 = v2;
		v3 = v4;
		// branch -> 0xa9a7c
	}
	int32_t *v9 = (int32_t *)(v3 + v1 + 404); // 0xa9a80
	if (*v9 >= 0x1f401) {
		// 0xa9a94
		*v9 = 0x1f400;
		v1 = v2;
		v3 = v4;
		// branch -> 0xa9a98
	}
	int32_t *v10 = (int32_t *)(v3 + v1 + 424); // 0xa9a9c
	if (*v10 < 0x1f401) {
		// bb
		return 0x20000;
	}
	// 0xa9ab0
	*v10 = 0x1f400;
	return 0x20000;
}

// Address range: 0xa9ab8 - 0xa9d94
int32_t ProcessPlayers(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0xa9ac0
	g36 = v1;
	g30 = *(int32_t *)(g23 - 0x71d8);
	g32 = *(int32_t *)(g23 - 0x77e4);
	g33 = *(int32_t *)(g23 - 0x76f4);
	g35 = *(int32_t *)(g23 - 0x76f0);
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa9ad4
	g31 = v2;
	uint32_t v3 = *(int32_t *)v1; // 0xa9ae0
	g37 = v3;
	if (v3 >= 4) {
		// 0xa9aec
		app_fatal(*(int32_t *)(g23 - 0x5a18));
		v2 = g31;
		v1 = g36;
		// branch -> 0xa9af4
	}
	char *v4 = (char *)(0x55ec * *(int32_t *)v1 + v2 + 0x5592); // 0xa9b0c
	unsigned char v5 = *v4;                                     // 0xa9b0c
	if (v5 != 0) {
		// 0xa9b18
		*v4 = (char)((int32_t)v5 - 1);
		// branch -> 0xa9b20
	}
	int32_t *v6 = (int32_t *)g30; // 0xa9b20
	uint32_t v7 = *v6;            // 0xa9b20
	if (v7 >= 1) {
		// 0xa9b2c
		*v6 = v7 - 1;
		if (*(int32_t *)g30 == 0) {
			int32_t v8 = *(int32_t *)*(int32_t *)(g23 - 0x71dc); // 0xa9b44
			g34 = v8;
			PlaySFX(v8);
			// branch -> 0xa9b4c
		}
	}
	int32_t result = function_a9814(); // r3
	g30 = 0;
	int32_t v9 = 0;    // 0xa9b88
	int32_t v10 = g31; // 0xa9b7c
	// branch -> 0xa9b54
	while (true) {
		// 0xa9b54
		int32_t v11; // 0xa9d70
		int32_t v12; // 0xa9d74
		if (*(char *)(v10 + 29) != 0) {
			int32_t v13 = (int32_t) * (char *)g32; // 0xa9b60
			result = v13;
			if (v13 == *(int32_t *)(v10 + 52)) {
				// 0xa9b70
				int32_t v14; // 0xa9d74
				if (v9 != *(int32_t *)g36) {
					// 0xa9b7c
					if (*(char *)(v10 + 315) != 0) {
						v14 = v10;
					lab_0xa9d70_3:
						// 0xa9d70
						v11 = g30 + 1;
						g30 = v11;
						v12 = v14 + 0x55ec;
						g31 = v12;
						if (v11 >= 4) {
							// break -> 0xa9d80
							break;
						}
						v9 = v11;
						v10 = v12;
						// continue -> 0xa9b54
						continue;
					}
				}
				// 0xa9b88
				CheckCheatStats(v9);
				if (PlrDeathModeOK(g30) == 0) {
					// 0xa9ba0
					if (*(int32_t *)(g31 + 404) <= 63) {
						// 0xa9bac
						SyncPlrKill(g30, -1);
						// branch -> 0xa9bb8
					}
				}
				// 0xa9bb8
				if (g30 == *(int32_t *)g36) {
					// 0xa9bc4
					if (__asm_rlwinm_(*(int32_t *)(g31 + 0x5568), 0, 25, 25) != 0) {
						// 0xa9bd0
						if (*(char *)g32 != 0) {
							int32_t *v15 = (int32_t *)(g31 + 404); // 0xa9bdc
							*v15 = *v15 - 4;
							int32_t *v16 = (int32_t *)(g31 + 396); // 0xa9be8
							*v16 = *v16 - 4;
							if (*(int32_t *)(g31 + 404) <= 63) {
								// 0xa9c00
								SyncPlrKill(g30, 0);
								// branch -> 0xa9c0c
							}
							// 0xa9c0c
							*(int32_t *)g35 = 1;
							// branch -> 0xa9c14
						}
					}
					// 0xa9c14
					if (__asm_rlwinm_(*(int32_t *)(g31 + 0x5568), 0, 4, 4) != 0) {
						int32_t v17 = g31;                     // 0xa9c20
						int32_t *v18 = (int32_t *)(v17 + 416); // 0xa9c20
						uint32_t v19 = *v18;                   // 0xa9c20
						if (v19 >= 1) {
							// 0xa9c2c
							*v18 = v19 - *(int32_t *)(v17 + 424);
							*(int32_t *)(g31 + 424) = 0;
							*(int32_t *)g33 = 1;
							// branch -> 0xa9c48
						}
					}
				}
				// 0xa9c48
				// branch -> 0xa9c4c
				while (true) {
					uint32_t v20 = *(int32_t *)g31; // 0xa9c4c
					if (v20 <= 10) {
						// 0xa9c58
						return *(int32_t *)(*(int32_t *)(g23 - 0x5a1c) + 4 * v20);
					}
					// 0xa9d18
					function_a8828(g30);
					if (g29 == 0) {
						// break -> 0xa9d28
						break;
					}
					// continue -> 0xa9c4c
				}
				int32_t *v21 = (int32_t *)(g31 + 132); // 0xa9d28
				*v21 = *v21 + 1;
				int32_t v22 = g31;                     // 0xa9d34
				int32_t *v23 = (int32_t *)(v22 + 132); // 0xa9d34
				uint32_t v24 = *v23;                   // 0xa9d34
				result = v24;
				if (v24 <= *(int32_t *)(v22 + 128)) {
					v14 = v22;
					goto lab_0xa9d70_3;
				}
				// 0xa9d44
				*v23 = 0;
				int32_t *v25 = (int32_t *)(g31 + 140); // 0xa9d4c
				*v25 = *v25 + 1;
				int32_t v26 = g31;                     // 0xa9d58
				int32_t *v27 = (int32_t *)(v26 + 140); // 0xa9d58
				uint32_t v28 = *v27;                   // 0xa9d58
				result = v28;
				if (v28 <= *(int32_t *)(v26 + 136)) {
					v14 = v26;
					goto lab_0xa9d70_3;
				}
				// 0xa9d68
				*v27 = 1;
				v14 = g31;
				// branch -> 0xa9d70
				goto lab_0xa9d70_3;
			}
		}
		// 0xa9d70
		v11 = g30 + 1;
		g30 = v11;
		v12 = v10 + 0x55ec;
		g31 = v12;
		if (v11 >= 4) {
			// break -> 0xa9d80
			break;
		}
		v9 = v11;
		v10 = v12;
		// continue -> 0xa9b54
	}
	// 0xa9d80
	return result;
}

// Address range: 0xa9d94 - 0xa9df0
int32_t ClrPlrPath(int32_t a1)
{
	int32_t v1 = g36; // 0xa9d94
	g36 = a1;
	int32_t v2; // 0xa9dbc
	if (a1 >= 4) {
		// 0xa9db0
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a20));
		v2 = g36;
		// branch -> 0xa9dbc
	} else {
		v2 = a1;
	}
	int32_t v3 = 0x55ec * v2 + 4 + *(int32_t *)(g23 - 0x77a8); // 0xa9dc8
	g34 = v3;
	g36 = v1;
	return memset(v3, 25, -1);
}

// Address range: 0xa9df0 - 0xa9fdc
int32_t function_a9df0(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0xa9df4
	if (a2 <= -1 || a2 >= 112 || a3 <= -1 || a3 >= 112) {
		// 0xa9e18
		// branch -> 0xa9fc0
		// 0xa9fc0
		g10 = v1;
		return 0;
	}
	// 0xa9e50
	g34 = a2;
	g37 = a3;
	if (function_a3ef8() != 0) {
		// 0xa9e64
		// branch -> 0xa9fc0
		// 0xa9fc0
		g10 = v1;
		return 0;
	}
	int32_t v2 = 2 * a3 + 224 * a2; // 0xa9e7c
	if (*(int16_t *)(v2 + *(int32_t *)*(int32_t *)(g23 - 0x757c)) == 0) {
		// 0xa9e8c
		// branch -> 0xa9fc0
		// 0xa9fc0
		g10 = v1;
		return 0;
	}
	int32_t v3 = a3 + 112 * a2;                                                // 0xa9ea0
	unsigned char v4 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7680) + v3); // 0xa9ea4
	int32_t v5 = v4;                                                           // 0xa9ea8
	if (v4 != 0) {
		int32_t v6 = (((int32_t)v4 & 128) != 0 ? -v5 : v5) - 1;
		if (v6 != a1) {
			// 0xa9ed8
			if (v6 <= 3) {
				// 0xa9ee0
				if (*(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v6 + 404) != 0) {
					// 0xa9ef8
					// branch -> 0xa9fc0
					// 0xa9fc0
					g10 = v1;
					return 0;
				}
			}
		}
	}
	int16_t v7 = *(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x767c) + v2); // 0xa9f0c
	int32_t v8;
	int32_t v9;        // 0xa9fa4
	unsigned char v10; // 0xa9f70
	int32_t v11;       // 0xa9f70
	if (v7 == 0) {
		// 0xa9f64
		v10 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7684) + v3);
		v11 = v10;
		if (v10 != 0) {
			// 0xa9f7c
			if (0x1000000 * v11 < 0) {
				// 0xa9f8c
				v8 = 0x1000000 * (-1 - v11) / 0x1000000;
				// branch -> 0xa9f98
			} else {
				// 0xa9f84
				v8 = v11 - 1;
				// branch -> 0xa9f98
			}
			// 0xa9f98
			v9 = 120 * 0x1000000 * v8 / 0x1000000 + *(int32_t *)(g23 - 0x7688);
			if (*(int32_t *)(v9 + 56) != 0) {
				// 0xa9fb4
				// branch -> 0xa9fc0
				// 0xa9fc0
				g10 = v1;
				return 0;
			}
		}
		// 0xa9fbc
		// branch -> 0xa9fc0
		// 0xa9fc0
		g10 = v1;
		return 1;
	}
	// 0xa9f18
	if (*(char *)*(int32_t *)(g23 - 0x77e4) == 0 || v7 < 1) {
		// 0xa9f28
		// branch -> 0xa9fc0
		// 0xa9fc0
		g10 = v1;
		return 0;
	}
	// 0xa9f38
	int32_t result; // 0xa9fd8
	if (*(int32_t *)(*(int32_t *)(g23 - 0x7754) + 232 * ((int32_t)v7 - 1) + 152) < 64) {
		// 0xa9f64
		v10 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7684) + v3);
		v11 = v10;
		if (v10 != 0) {
			// 0xa9f7c
			if (0x1000000 * v11 < 0) {
				// 0xa9f8c
				v8 = 0x1000000 * (-1 - v11) / 0x1000000;
				// branch -> 0xa9f98
			} else {
				// 0xa9f84
				v8 = v11 - 1;
				// branch -> 0xa9f98
			}
			// 0xa9f98
			v9 = 120 * 0x1000000 * v8 / 0x1000000 + *(int32_t *)(g23 - 0x7688);
			if (*(int32_t *)(v9 + 56) != 0) {
				// 0xa9fb4
				// branch -> 0xa9fc0
				// 0xa9fc0
				g10 = v1;
				return 0;
			}
		}
		// 0xa9fbc
		result = 1;
		// branch -> 0xa9fc0
	} else {
		// 0xa9f54
		result = 0;
		// branch -> 0xa9fc0
	}
	// 0xa9fc0
	g10 = v1;
	return result;
}

// Address range: 0xa9fdc - 0xaa11c
int32_t MakePlrPath(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0xa9fe0
	g27 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa9fe8
	g35 = v2;
	g28 = a2;
	g29 = a3;
	g30 = a4;
	int32_t v3 = a1; // 0xaa014
	if (a1 >= 4) {
		// 0xaa008
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a24));
		a2 = g28;
		v2 = g35;
		v3 = g27;
		// branch -> 0xaa014
	}
	int32_t v4 = 0x55ec * v3; // 0xaa014
	g33 = v4;
	int32_t v5 = v2 + 72 + v4; // 0xaa01c
	*(int32_t *)v5 = a2;
	g32 = v5;
	int32_t result = g33 + g35; // 0xaa020
	int32_t v6 = result + 76;   // 0xaa028
	*(int32_t *)v6 = g29;
	g31 = v6;
	int32_t v7 = g28; // 0xaa030
	if (v7 == *(int32_t *)(result + 64)) {
		// 0xaa038
		if (g29 == *(int32_t *)(result + 68)) {
			// 0xaa108
			g10 = v1;
			return result;
		}
	} else {
		// 0xaa014
		// branch -> 0xaa044
	}
	int32_t v8 = g35;                                                                      // 0xaa044
	int32_t v9 = g33;                                                                      // 0xaa044
	int32_t v10 = *(int32_t *)(v9 + v8 + 68);                                              // 0xaa054
	int32_t v11 = v9 + 4 + v8;                                                             // 0xaa060
	int32_t v12 = FindPath(*(int32_t *)(g23 - 0x6f98), g27, v10, v7, g29, v11, v11); // 0xaa064
	if (v12 == 0) {
		// 0xaa108
		g10 = v1;
		return 0;
	}
	int32_t v13 = v12; // 0xaa0fc
	if (g30 == 0) {
		int32_t result2 = v12 - 1; // 0xaa078
		if (*(char *)(g36 + result2 + 4) <= 8) {
			// 0xaa090
			return result2;
		}
		// 0xaa0f0
		*(int32_t *)g32 = g28;
		*(int32_t *)g31 = g29;
		v13 = result2;
		// branch -> 0xaa0f8
	}
	int32_t result3 = g35 + v13 + g33; // 0xaa0fc
	*(char *)(result3 + 4) = -1;
	// branch -> 0xaa108
	// 0xaa108
	g10 = v1;
	return result3;
}

// Address range: 0xaa11c - 0xaa4b4
int32_t CheckPlrSpell(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0xaa124
	g33 = v1;
	g27 = 0;
	g28 = *(int32_t *)(g23 - 0x775c);
	g29 = *(int32_t *)(g23 - 0x7750);
	g30 = *(int32_t *)(g23 - 0x765c);
	g31 = *(int32_t *)(g23 - 0x7658);
	g32 = *(int32_t *)(g23 - 0x76a8);
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xaa140
	g35 = v2;
	uint32_t v3 = *(int32_t *)v1; // 0xaa14c
	g37 = v3;
	if (v3 >= 4) {
		// 0xaa158
		app_fatal(*(int32_t *)(g23 - 0x5a2c));
		v2 = g35;
		v1 = g33;
		// branch -> 0xaa160
	}
	int32_t result2 = *(int32_t *)v1; // 0xaa160
	int32_t v4 = v2 + 180;            // 0xaa164
	g36 = v4;
	int32_t v5 = 0x55ec * result2;      // 0xaa168
	int32_t v6 = *(int32_t *)(v5 + v4); // 0xaa16c
	int32_t result;                     // 0xaa4b0
	if (v6 == -1) {
		unsigned char v7 = *(char *)(v5 + v2 + 348); // 0xaa17c
		if (v7 == 0) {
			// 0xaa188
			g34 = 753;
			result = PlaySFX(753);
			// branch -> 0xaa4a0
			// 0xaa4a0
			return result;
		}
		// 0xaa194
		if (v7 == 1) {
			// 0xaa1a0
			g34 = 644;
			result = PlaySFX(644);
			// branch -> 0xaa4a0
		} else {
			// 0xaa1ac
			if (v7 == 2) {
				// 0xaa1b4
				g34 = 541;
				result = PlaySFX(541);
				// branch -> 0xaa4a0
			} else {
				result = v7;
			}
		}
		// 0xaa4a0
		return result;
	}
	// 0xaa1c0
	if (*(char *)*(int32_t *)(g23 - 0x7794) == 0) {
		// 0xaa1d0
		if (*(int32_t *)(*(int32_t *)(g23 - 0x769c) + 56 * v6 + 24) == 0) {
			unsigned char v8 = *(char *)(v5 + v2 + 348); // 0xaa1ec
			if (v8 == 0) {
				// 0xaa1f8
				g34 = 746;
				result = PlaySFX(746);
				// branch -> 0xaa4a0
				// 0xaa4a0
				return result;
			}
			// 0xaa204
			if (v8 == 1) {
				// 0xaa210
				g34 = 637;
				result = PlaySFX(637);
				// branch -> 0xaa4a0
			} else {
				// 0xaa21c
				if (v8 == 2) {
					// 0xaa224
					g34 = 534;
					result = PlaySFX(534);
					// branch -> 0xaa4a0
				} else {
					result = v8;
				}
			}
			// 0xaa4a0
			return result;
		}
	}
	// 0xaa230
	if (*(int32_t *)*(int32_t *)(g23 - 0x7744) == 1) {
		// 0xaa240
		if (*(int32_t *)*(int32_t *)(g23 - 0x76ac) > 351) {
			// 0xaa288
			// branch -> 0xaa4a0
		} else {
			// 0xaa250
			int32_t v9;        // 0xaa30c
			int32_t v10;       // 0xaa2b8
			int32_t v11;       // 0xaa304
			int32_t v12;       // 0xaa318
			uint32_t v13;      // 0xaa414
			int32_t result4;   // 0xaa448
			int32_t v14;       // 0xaa328
			int32_t v15;       // 0xaa338
			int32_t v16;       // 0xaa340
			uint32_t v17;      // 0xaa354
			uint32_t v18;      // 0xaa360
			uint32_t v19;      // 0xaa36c
			uint32_t v20;      // 0xaa39c
			uint32_t v21;      // 0xaa40c
			int32_t v22;       // 0xaa410
			uint32_t v23;      // 0xaa420
			int32_t v24;       // 0xaa444
			int32_t v25;       // 0xaa334
			unsigned char v26; // 0xaa460
			char v27;          // 0xaa2bc
			int32_t v28;       // 0xaa2ec
			int32_t v29;       // 0xaa31c
			int32_t v30;       // 0xaa33c
			uint32_t v31;      // 0xaa370
			uint32_t v32;      // 0xaa3b4
			uint32_t v33;      // 0xaa3f4
			uint32_t v34;      // 0xaa424
			int32_t v35;       // 0xaa2bc
			if (*(int32_t *)*(int32_t *)(g23 - 0x77c4) != 0) {
				// 0xaa260
				if (*(int32_t *)g32 < 320) {
					// 0xaa290
					if (v6 != 2) {
						// 0xaa298
						if (v6 != 5) {
							// 0xaa2a0
							if (v6 != 9) {
								// 0xaa2a8
								if ((v6 - 26 || 1) != 1) {
									// 0xaa4a0
									return result2;
								}
							}
						}
					}
					// 0xaa2b8
					v10 = v2 + 184;
					g32 = v10;
					v27 = *(char *)(v5 + v10);
					v35 = v27;
					int32_t result3; // 0xaa470
					int32_t result6; // 0xaa3c4
					int32_t result5; // 0xaa388
					if (v27 == 2) {
						// 0xaa2f8
						v9 = function_5b1e8(v35);
						// branch -> 0xaa30c
					} else {
						// 0xaa2cc
						if (v27 > 2) {
							// 0xaa2dc
							if (v27 == 3) {
								// 0xaa304
								v11 = function_5b414(v35);
								// branch -> 0xaa30c
								// 0xaa30c
								v24 = *(int32_t *)g33;
								if (v11 == 0) {
									// 0xaa444
									result4 = 0x55ec * v24;
									if (*(char *)(g32 + result4) == 1) {
										// 0xaa45c
										v26 = *(char *)(g35 + result4 + 348);
										if (v26 == 0) {
											// 0xaa46c
											g34 = 754;
											result3 = PlaySFX(754);
											// branch -> 0xaa4a0
											// 0xaa4a0
											return result3;
										}
										// 0xaa478
										if (v26 == 1) {
											// 0xaa484
											g34 = 645;
											result = PlaySFX(645);
											// branch -> 0xaa4a0
										} else {
											// 0xaa490
											if (v26 == 2) {
												// 0xaa498
												g34 = 542;
												result = PlaySFX(542);
												// branch -> 0xaa4a0
											} else {
												result = v26;
											}
										}
										// 0xaa4a0
										return result;
									}
									// 0xaa4a0
									return result4;
								}
								// 0xaa314
								v12 = 0x55ec * v24;
								v29 = *(int32_t *)(g36 + v12);
								if (v29 == 6) {
									// 0xaa328
									v14 = g35 + v12;
									v25 = *(int32_t *)(v14 + 60);
									v15 = *(int32_t *)g30;
									v30 = GetDirection(*(int32_t *)(v14 + 56), v25, *(int32_t *)g31, v15);
									v16 = *(int32_t *)g33;
									v17 = function_6db5c(v16, *(int32_t *)(g36 + 0x55ec * v16));
									v18 = *(int32_t *)g31;
									v19 = *(int32_t *)g30;
									v31 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g33);
									result5 = function_8b354(1, 84, v18 % 256, v19 % 256, v31 % 0x10000, v30 % 0x10000, v17 % 0x10000);
									// branch -> 0xaa4a0
									// 0xaa4a0
									return result5;
								}
								// 0xaa390
								if (*(int32_t *)g29 != -1) {
									// 0xaa39c
									v20 = function_6db5c(v24, v29);
									v32 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g33);
									result6 = function_8b4a0(1, 22, *(int32_t *)g29 % 0x10000, v32 % 0x10000, v20 % 0x10000);
									// branch -> 0xaa4a0
									// 0xaa4a0
									return result6;
								}
								// 0xaa3cc
								v21 = function_6db5c(v24, v29);
								v22 = *(int32_t *)g33;
								v13 = v21 % 0x10000;
								if (*(char *)g28 == -1) {
									// 0xaa40c
									v23 = *(int32_t *)g30;
									v34 = *(int32_t *)(g36 + 0x55ec * v22);
									result = function_8b2e0(1, 14, *(int32_t *)g31 % 256, v23 % 256, v34 % 0x10000, v13);
									// branch -> 0xaa4a0
								} else {
									// 0xaa3dc
									v33 = *(int32_t *)(g36 + 0x55ec * v22);
									result = function_8b4a0(1, 23, (int32_t) * (char *)g28, v33 % 0x10000, v13);
									// branch -> 0xaa4a0
								}
								// 0xaa4a0
								return result;
							}
						} else {
							// 0xaa2d0
							if (v27 > -1) {
								// 0xaa2e8
								v28 = function_b5d18(v35, 0, v35, 0);
								// branch -> 0xaa30c
								// 0xaa30c
								v24 = *(int32_t *)g33;
								if (v28 == 0) {
									// 0xaa444
									result4 = 0x55ec * v24;
									if (*(char *)(g32 + result4) == 1) {
										// 0xaa45c
										v26 = *(char *)(g35 + result4 + 348);
										if (v26 == 0) {
											// 0xaa46c
											g34 = 754;
											result3 = PlaySFX(754);
											// branch -> 0xaa4a0
											// 0xaa4a0
											return result3;
										}
										// 0xaa478
										if (v26 == 1) {
											// 0xaa484
											g34 = 645;
											result = PlaySFX(645);
											// branch -> 0xaa4a0
										} else {
											// 0xaa490
											if (v26 == 2) {
												// 0xaa498
												g34 = 542;
												result = PlaySFX(542);
												// branch -> 0xaa4a0
											} else {
												result = v26;
											}
										}
										// 0xaa4a0
										return result;
									}
									// 0xaa4a0
									return result4;
								}
								// 0xaa314
								v12 = 0x55ec * v24;
								v29 = *(int32_t *)(g36 + v12);
								if (v29 == 6) {
									// 0xaa328
									v14 = g35 + v12;
									v25 = *(int32_t *)(v14 + 60);
									v15 = *(int32_t *)g30;
									v30 = GetDirection(*(int32_t *)(v14 + 56), v25, *(int32_t *)g31, v15);
									v16 = *(int32_t *)g33;
									v17 = function_6db5c(v16, *(int32_t *)(g36 + 0x55ec * v16));
									v18 = *(int32_t *)g31;
									v19 = *(int32_t *)g30;
									v31 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g33);
									result5 = function_8b354(1, 84, v18 % 256, v19 % 256, v31 % 0x10000, v30 % 0x10000, v17 % 0x10000);
									// branch -> 0xaa4a0
									// 0xaa4a0
									return result5;
								}
								// 0xaa390
								if (*(int32_t *)g29 != -1) {
									// 0xaa39c
									v20 = function_6db5c(v24, v29);
									v32 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g33);
									result6 = function_8b4a0(1, 22, *(int32_t *)g29 % 0x10000, v32 % 0x10000, v20 % 0x10000);
									// branch -> 0xaa4a0
									// 0xaa4a0
									return result6;
								}
								// 0xaa3cc
								v21 = function_6db5c(v24, v29);
								v22 = *(int32_t *)g33;
								v13 = v21 % 0x10000;
								if (*(char *)g28 == -1) {
									// 0xaa40c
									v23 = *(int32_t *)g30;
									v34 = *(int32_t *)(g36 + 0x55ec * v22);
									result = function_8b2e0(1, 14, *(int32_t *)g31 % 256, v23 % 256, v34 % 0x10000, v13);
									// branch -> 0xaa4a0
								} else {
									// 0xaa3dc
									v33 = *(int32_t *)(g36 + 0x55ec * v22);
									result = function_8b4a0(1, 23, (int32_t) * (char *)g28, v33 % 0x10000, v13);
									// branch -> 0xaa4a0
								}
								// 0xaa4a0
								return result;
							}
						}
						// 0xaa30c
						v9 = g27;
						// branch -> 0xaa30c
					}
					// 0xaa30c
					v24 = *(int32_t *)g33;
					if (v9 == 0) {
						// 0xaa444
						result4 = 0x55ec * v24;
						if (*(char *)(g32 + result4) == 1) {
							// 0xaa45c
							v26 = *(char *)(g35 + result4 + 348);
							if (v26 == 0) {
								// 0xaa46c
								g34 = 754;
								result3 = PlaySFX(754);
								// branch -> 0xaa4a0
								// 0xaa4a0
								return result3;
							}
							// 0xaa478
							if (v26 == 1) {
								// 0xaa484
								g34 = 645;
								result = PlaySFX(645);
								// branch -> 0xaa4a0
							} else {
								// 0xaa490
								if (v26 == 2) {
									// 0xaa498
									g34 = 542;
									result = PlaySFX(542);
									// branch -> 0xaa4a0
								} else {
									result = v26;
								}
							}
							// 0xaa4a0
							return result;
						}
						// 0xaa4a0
						return result4;
					}
					// 0xaa314
					v12 = 0x55ec * v24;
					v29 = *(int32_t *)(g36 + v12);
					if (v29 == 6) {
						// 0xaa328
						v14 = g35 + v12;
						v25 = *(int32_t *)(v14 + 60);
						v15 = *(int32_t *)g30;
						v30 = GetDirection(*(int32_t *)(v14 + 56), v25, *(int32_t *)g31, v15);
						v16 = *(int32_t *)g33;
						v17 = function_6db5c(v16, *(int32_t *)(g36 + 0x55ec * v16));
						v18 = *(int32_t *)g31;
						v19 = *(int32_t *)g30;
						v31 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g33);
						result5 = function_8b354(1, 84, v18 % 256, v19 % 256, v31 % 0x10000, v30 % 0x10000, v17 % 0x10000);
						// branch -> 0xaa4a0
						// 0xaa4a0
						return result5;
					}
					// 0xaa390
					if (*(int32_t *)g29 != -1) {
						// 0xaa39c
						v20 = function_6db5c(v24, v29);
						v32 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g33);
						result6 = function_8b4a0(1, 22, *(int32_t *)g29 % 0x10000, v32 % 0x10000, v20 % 0x10000);
						// branch -> 0xaa4a0
						// 0xaa4a0
						return result6;
					}
					// 0xaa3cc
					v21 = function_6db5c(v24, v29);
					v22 = *(int32_t *)g33;
					v13 = v21 % 0x10000;
					if (*(char *)g28 == -1) {
						// 0xaa40c
						v23 = *(int32_t *)g30;
						v34 = *(int32_t *)(g36 + 0x55ec * v22);
						result = function_8b2e0(1, 14, *(int32_t *)g31 % 256, v23 % 256, v34 % 0x10000, v13);
						// branch -> 0xaa4a0
					} else {
						// 0xaa3dc
						v33 = *(int32_t *)(g36 + 0x55ec * v22);
						result = function_8b4a0(1, 23, (int32_t) * (char *)g28, v33 % 0x10000, v13);
						// branch -> 0xaa4a0
					}
					// 0xaa4a0
					return result;
				}
			}
			// 0xaa26c
			if (*(int32_t *)*(int32_t *)(g23 - 0x77bc) != 0) {
				// 0xaa27c
				if (*(int32_t *)g32 >= 321) {
					// 0xaa290
					if (v6 != 2) {
						// 0xaa298
						if (v6 != 5) {
							// 0xaa2a0
							if (v6 != 9) {
								// 0xaa2a8
								if ((v6 - 26 || 1) != 1) {
									// 0xaa4a0
									return result2;
								}
							}
						}
					}
				}
			}
			// 0xaa2b8
			v10 = v2 + 184;
			g32 = v10;
			v27 = *(char *)(v5 + v10);
			v35 = v27;
			if (v27 == 2) {
				// 0xaa2f8
				v9 = function_5b1e8(v35);
				// branch -> 0xaa30c
			} else {
				// 0xaa2cc
				if (v27 > 2) {
					// 0xaa2dc
					if (v27 == 3) {
						// 0xaa304
						v11 = function_5b414(v35);
						// branch -> 0xaa30c
						// 0xaa30c
						v24 = *(int32_t *)g33;
						if (v11 == 0) {
							// 0xaa444
							result4 = 0x55ec * v24;
							if (*(char *)(g32 + result4) == 1) {
								// 0xaa45c
								v26 = *(char *)(g35 + result4 + 348);
								int32_t v36 = v26; // 0xaa460
								if (v26 != 0) {
									// 0xaa478
									if (v26 == 1) {
										// 0xaa484
										g34 = 645;
										result = PlaySFX(645);
										// branch -> 0xaa4a0
									} else {
										// 0xaa490
										if (v26 == 2) {
											// 0xaa498
											g34 = 542;
											result = PlaySFX(542);
											// branch -> 0xaa4a0
										} else {
											result = v36;
										}
									}
									// 0xaa4a0
									return result;
								}
								// 0xaa46c
								g34 = 754;
								PlaySFX(754);
								// branch -> 0xaa4a0
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						} else {
							// 0xaa314
							v12 = 0x55ec * v24;
							v29 = *(int32_t *)(g36 + v12);
							if (v29 == 6) {
								// 0xaa328
								v14 = g35 + v12;
								v25 = *(int32_t *)(v14 + 60);
								v15 = *(int32_t *)g30;
								v30 = GetDirection(*(int32_t *)(v14 + 56), v25, *(int32_t *)g31, v15);
								v16 = *(int32_t *)g33;
								v17 = function_6db5c(v16, *(int32_t *)(g36 + 0x55ec * v16));
								v18 = *(int32_t *)g31;
								v19 = *(int32_t *)g30;
								v31 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g33);
								function_8b354(1, 84, v18 % 256, v19 % 256, v31 % 0x10000, v30 % 0x10000, v17 % 0x10000);
								// branch -> 0xaa4a0
							} else {
								// 0xaa390
								if (*(int32_t *)g29 == -1) {
									// 0xaa3cc
									v21 = function_6db5c(v24, v29);
									v22 = *(int32_t *)g33;
									v13 = v21 % 0x10000;
									if (*(char *)g28 == -1) {
										// 0xaa40c
										v23 = *(int32_t *)g30;
										v34 = *(int32_t *)(g36 + 0x55ec * v22);
										function_8b2e0(1, 14, *(int32_t *)g31 % 256, v23 % 256, v34 % 0x10000, v13);
										// branch -> 0xaa4a0
									} else {
										// 0xaa3dc
										v33 = *(int32_t *)(g36 + 0x55ec * v22);
										function_8b4a0(1, 23, (int32_t) * (char *)g28, v33 % 0x10000, v13);
										// branch -> 0xaa4a0
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0xaa39c
									v20 = function_6db5c(v24, v29);
									v32 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g33);
									function_8b4a0(1, 22, *(int32_t *)g29 % 0x10000, v32 % 0x10000, v20 % 0x10000);
									// branch -> 0xaa4a0
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				} else {
					// 0xaa2d0
					if (v27 > -1) {
						// 0xaa2e8
						v28 = function_b5d18(v35, 0, v35, 0);
						// branch -> 0xaa30c
						// 0xaa30c
						v24 = *(int32_t *)g33;
						if (v28 == 0) {
							// 0xaa444
							result4 = 0x55ec * v24;
							if (*(char *)(g32 + result4) == 1) {
								// 0xaa45c
								v26 = *(char *)(g35 + result4 + 348);
								if (v26 == 0) {
									// 0xaa46c
									g34 = 754;
									PlaySFX(754);
									// branch -> 0xaa4a0
								} else {
									// 0xaa478
									if (v26 == 1) {
										// 0xaa484
										g34 = 645;
										PlaySFX(645);
										// branch -> 0xaa4a0
									} else {
										// 0xaa490
										if (v26 == 2) {
											// 0xaa498
											g34 = 542;
											PlaySFX(542);
											// branch -> 0xaa4a0
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						} else {
							// 0xaa314
							v12 = 0x55ec * v24;
							v29 = *(int32_t *)(g36 + v12);
							if (v29 == 6) {
								// 0xaa328
								v14 = g35 + v12;
								v25 = *(int32_t *)(v14 + 60);
								v15 = *(int32_t *)g30;
								v30 = GetDirection(*(int32_t *)(v14 + 56), v25, *(int32_t *)g31, v15);
								v16 = *(int32_t *)g33;
								v17 = function_6db5c(v16, *(int32_t *)(g36 + 0x55ec * v16));
								v18 = *(int32_t *)g31;
								v19 = *(int32_t *)g30;
								v31 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g33);
								function_8b354(1, 84, v18 % 256, v19 % 256, v31 % 0x10000, v30 % 0x10000, v17 % 0x10000);
								// branch -> 0xaa4a0
							} else {
								// 0xaa390
								if (*(int32_t *)g29 == -1) {
									// 0xaa3cc
									v21 = function_6db5c(v24, v29);
									v22 = *(int32_t *)g33;
									v13 = v21 % 0x10000;
									if (*(char *)g28 == -1) {
										// 0xaa40c
										v23 = *(int32_t *)g30;
										v34 = *(int32_t *)(g36 + 0x55ec * v22);
										function_8b2e0(1, 14, *(int32_t *)g31 % 256, v23 % 256, v34 % 0x10000, v13);
										// branch -> 0xaa4a0
									} else {
										// 0xaa3dc
										v33 = *(int32_t *)(g36 + 0x55ec * v22);
										function_8b4a0(1, 23, (int32_t) * (char *)g28, v33 % 0x10000, v13);
										// branch -> 0xaa4a0
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0xaa39c
									v20 = function_6db5c(v24, v29);
									v32 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g33);
									function_8b4a0(1, 22, *(int32_t *)g29 % 0x10000, v32 % 0x10000, v20 % 0x10000);
									// branch -> 0xaa4a0
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0xaa30c
				v9 = g27;
				// branch -> 0xaa30c
			}
			// 0xaa30c
			v24 = *(int32_t *)g33;
			if (v9 == 0) {
				// 0xaa444
				result4 = 0x55ec * v24;
				if (*(char *)(g32 + result4) == 1) {
					// 0xaa45c
					v26 = *(char *)(g35 + result4 + 348);
					if (v26 == 0) {
						// 0xaa46c
						g34 = 754;
						PlaySFX(754);
						// branch -> 0xaa4a0
					} else {
						// 0xaa478
						if (v26 == 1) {
							// 0xaa484
							g34 = 645;
							PlaySFX(645);
							// branch -> 0xaa4a0
						} else {
							// 0xaa490
							if (v26 == 2) {
								// 0xaa498
								g34 = 542;
								PlaySFX(542);
								// branch -> 0xaa4a0
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			} else {
				// 0xaa314
				v12 = 0x55ec * v24;
				v29 = *(int32_t *)(g36 + v12);
				if (v29 == 6) {
					// 0xaa328
					v14 = g35 + v12;
					v25 = *(int32_t *)(v14 + 60);
					v15 = *(int32_t *)g30;
					v30 = GetDirection(*(int32_t *)(v14 + 56), v25, *(int32_t *)g31, v15);
					v16 = *(int32_t *)g33;
					v17 = function_6db5c(v16, *(int32_t *)(g36 + 0x55ec * v16));
					v18 = *(int32_t *)g31;
					v19 = *(int32_t *)g30;
					v31 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g33);
					function_8b354(1, 84, v18 % 256, v19 % 256, v31 % 0x10000, v30 % 0x10000, v17 % 0x10000);
					// branch -> 0xaa4a0
				} else {
					// 0xaa390
					if (*(int32_t *)g29 == -1) {
						// 0xaa3cc
						v21 = function_6db5c(v24, v29);
						v22 = *(int32_t *)g33;
						v13 = v21 % 0x10000;
						if (*(char *)g28 == -1) {
							// 0xaa40c
							v23 = *(int32_t *)g30;
							v34 = *(int32_t *)(g36 + 0x55ec * v22);
							function_8b2e0(1, 14, *(int32_t *)g31 % 256, v23 % 256, v34 % 0x10000, v13);
							// branch -> 0xaa4a0
						} else {
							// 0xaa3dc
							v33 = *(int32_t *)(g36 + 0x55ec * v22);
							function_8b4a0(1, 23, (int32_t) * (char *)g28, v33 % 0x10000, v13);
							// branch -> 0xaa4a0
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0xaa39c
						v20 = function_6db5c(v24, v29);
						v32 = *(int32_t *)(g36 + 0x55ec * *(int32_t *)g33);
						function_8b4a0(1, 22, *(int32_t *)g29 % 0x10000, v32 % 0x10000, v20 % 0x10000);
						// branch -> 0xaa4a0
					}
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

// Address range: 0xaa4b4 - 0xaa680
int32_t function_aa4b4(int32_t a1)
{
	int32_t v1 = g36;                        // 0xaa4b4
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xaa4bc
	g36 = v2;
	g35 = a1;
	int32_t v3 = a1; // 0xaa4e4
	if (a1 >= 4) {
		// 0xaa4d8
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a30));
		v2 = g36;
		v3 = g35;
		// branch -> 0xaa4e4
	}
	int32_t result = 0x55ec * v3 + v2; // 0xaa4e8
	if (*(int32_t *)result <= 11) {
		// 0xaa4fc
		return result;
	}
	int32_t result2 = app_fatal(*(int32_t *)(g23 - 0x5a34)); // 0xaa664
	g36 = v1;
	return result2;
}

// Address range: 0xaa680 - 0xaa854
int32_t function_aa680(int32_t a1)
{
	// 0xaa680
	g36 = a1;
	int32_t v1 = g10;         // 0xaa688
	int32_t v2 = 0x55ec * a1; // 0xaa68c
	g32 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xaa690
	g35 = v3;
	int32_t v4 = v3 + v2; // 0xaa698
	g33 = *(int32_t *)(g23 - 0x77e4);
	int32_t v5 = v4 + 56; // 0xaa6b4
	g29 = v5;
	int32_t v6 = v4 + 72; // 0xaa6b8
	*(int32_t *)v6 = *(int32_t *)v5;
	g27 = v6;
	int32_t v7 = v4 + 60; // 0xaa6bc
	g28 = v7;
	int32_t v8 = v4 + 76; // 0xaa6c0
	*(int32_t *)v8 = *(int32_t *)v7;
	g26 = v8;
	int32_t result = *(int32_t *)(g23 - 0x77f0); // 0xaa6c4
	if (*(char *)result == 1) {
		// 0xaa840
		g10 = v1;
		return result;
	}
	int32_t v9 = g32 + g35; // 0xaa6d0
	g31 = v9;
	int32_t result4 = (int32_t) * (char *)g33; // 0xaa6d4
	if (result4 == *(int32_t *)(v9 + 52)) {
		int32_t v10 = *(int32_t *)(g23 - 0x6f88); // 0xaa6e4
		g19 = v10;
		g21 = 0;
		int32_t v11 = *(int32_t *)(g23 - 0x6f84); // 0xaa6ec
		g20 = v11;
		// branch -> 0xaa6f0
		while (true) {
			int32_t v12 = *(int32_t *)v10 + *(int32_t *)(v9 + 56); // 0xaa704
			g25 = v12;
			int32_t v13 = *(int32_t *)v11 + *(int32_t *)(v9 + 60); // 0xaa70c
			g24 = v13;
			if (function_a9df0(g36, v12, v13) == 0) {
				int32_t v14 = g21 + 1; // 0xaa720
				g21 = v14;
				int32_t v15 = g20 + 4; // 0xaa724
				g20 = v15;
				int32_t v16 = g19 + 4; // 0xaa72c
				g19 = v16;
				if (v14 < 8) {
					// 0xaa720
					v11 = v15;
					v10 = v16;
					v9 = g31;
					// branch -> 0xaa6f0
					continue;
				}
			}
			// 0xaa734
			int32_t result3; // r3
			int32_t v17;     // 0xaa804
			int32_t v18;     // 0xaa81c
			if (function_a9df0(g36, g25, g24) == 0) {
				// 0xaa74c
				g22 = 0;
				g21 = 1;
				int32_t v19 = 1; // 0xaa75843
				// branch -> 0xaa758
				while (true) {
					int32_t v20 = -v19; // 0xaa758
					g30 = v20;
					g20 = v20;
					int32_t v21 = v19; // 0xaa7d8
					if (v19 >= v20) {
						int32_t v22 = v19; // 0xaa7b4341
						// branch -> 0xaa764
						while (true) {
							// 0xaa764
							g19 = v20;
							int32_t v23 = *(int32_t *)(g31 + 60) + v20; // 0xaa76c
							g24 = v23;
							int32_t v24 = v22; // 0xaa7c8
							if (v20 <= v22) {
								int32_t v25 = v20; // 0xaa78040
								// branch -> 0xaa774
								while (true) {
									int32_t v26 = *(int32_t *)(g31 + 56) + v25; // 0xaa780
									g25 = v26;
									if (function_a9df0(g36, v26, v23) != 0) {
										// 0xaa794
										if (PosOkPortal((int32_t) * (char *)g33, g25, g24) == 0) {
											// 0xaa7ac
											g22 = 1;
											// branch -> 0xaa7b0
										}
									}
									int32_t v27 = g19 + 1; // 0xaa7b0
									g19 = v27;
									if (v27 <= g21) {
										// 0xaa7b0
										if (g22 == 0) {
											// 0xaa7b0
											v23 = g24;
											v25 = v27;
											// branch -> 0xaa774
											continue;
										}
									}
									// 0xaa7c4
									// branch -> 0xaa7c4
								}
							}
							int32_t v28 = v20 + 1; // 0xaa7c4
							g20 = v28;
							if (v28 <= v24) {
								// 0xaa7c4
								if (g22 == 0) {
									// 0xaa7c4
									v20 = v28;
									v22 = v24;
									// branch -> 0xaa764
									continue;
								} else {
									v21 = v24;
								}
							} else {
								v21 = v24;
							}
						}
					}
					int32_t v29 = v21 + 1; // 0xaa7d8
					g21 = v29;
					if (v29 <= 49) {
						// 0xaa7d8
						if (g22 != 0) {
							// break -> 0xaa7ec
							break;
						}
						v19 = v29;
						// continue -> 0xaa758
						continue;
					}
				}
				// 0xaa7ec
				*(int32_t *)g29 = g25;
				*(int32_t *)g28 = g24;
				v17 = *(int32_t *)*(int32_t *)(g23 - 0x7680);
				g37 = v17;
				*(char *)(v17 + g24 + 112 * g25) = (char)(g36 + 1);
				int32_t result2 = *(int32_t *)(g23 - 0x77ac); // 0xaa810
				if (g36 != *(int32_t *)result2) {
					// 0xaa840
					g10 = v1;
					return result2;
				}
				// 0xaa81c
				v18 = g32 + g35;
				g37 = *(int32_t *)(g23 - 0x77b0);
				*(int32_t *)(v18 + 64) = g25;
				result3 = *(int32_t *)(g23 - 0x77b4);
				*(int32_t *)(v18 + 68) = g24;
				*(int32_t *)g27 = g25;
				*(int32_t *)g26 = g24;
				*(int32_t *)g37 = g25;
				*(int32_t *)result3 = g24;
				// branch -> 0xaa840
				// 0xaa840
				g10 = v1;
				return result3;
			}
			// 0xaa7ec
			*(int32_t *)g29 = g25;
			*(int32_t *)g28 = g24;
			v17 = *(int32_t *)*(int32_t *)(g23 - 0x7680);
			g37 = v17;
			*(char *)(v17 + g24 + 112 * g25) = (char)(g36 + 1);
			if (g36 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0xaa81c
				v18 = g32 + g35;
				g37 = *(int32_t *)(g23 - 0x77b0);
				*(int32_t *)(v18 + 64) = g25;
				result3 = *(int32_t *)(g23 - 0x77b4);
				*(int32_t *)(v18 + 68) = g24;
				*(int32_t *)g27 = g25;
				*(int32_t *)g26 = g24;
				*(int32_t *)g37 = g25;
				*(int32_t *)result3 = g24;
				// branch -> 0xaa840
				// 0xaa840
				g10 = v1;
				return result3;
			}
		}
	}
	// 0xaa840
	g10 = v1;
	return result4;
}

// Address range: 0xaa854 - 0xaa8a0
int32_t SyncInitPlr(int32_t a1)
{
	int32_t v1 = g36; // 0xaa854
	g36 = a1;
	int32_t v2; // 0xaa87c
	if (a1 >= 4) {
		// 0xaa870
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a3c));
		v2 = g36;
		// branch -> 0xaa87c
	} else {
		v2 = a1;
	}
	// 0xaa87c
	function_a2b68(v2);
	int32_t result = function_aa680(g36); // 0xaa888
	g36 = v1;
	return result;
}

// Address range: 0xaa8a0 - 0xaaaec
int32_t function_aa8a0(int32_t a1)
{
	int32_t v1 = g36;                        // 0xaa8a0
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xaa8a8
	g36 = v2;
	int32_t v3 = g33; // 0xaa8b0
	g33 = a1;
	int32_t v4 = a1; // 0xaa8d4
	if (a1 >= 4) {
		// 0xaa8c8
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a40));
		v2 = g36;
		v4 = g33;
		// branch -> 0xaa8d4
	}
	int32_t v5 = 0x55ec * v4 + v2;          // 0xaa8d8
	unsigned char v6 = *(char *)(v5 + 348); // 0xaa8dc
	int32_t v7;                             // ctr
	int32_t result;                         // r3
	int32_t v8;                             // r4
	int32_t v9;                             // r5
	int32_t v10;                            // r6
	int32_t v11;                            // r7
	int32_t v12;                            // r8
	int32_t v13;                            // 0xaa958
	int32_t v14;                            // 0xaa920
	if (v6 == 0) {
		// 0xaa8e8
		// branch -> 0xaa910
	} else {
		// 0xaa8f0
		if (v6 != 1) {
			// 0xaa904
			int32_t v15; // 0xaa914
			if (v6 == 2) {
				// 0xaa90c
				v15 = 2;
				// branch -> 0xaa910
			} else {
				// 0xaa904
				v15 = g35;
				// branch -> 0xaa910
			}
			// 0xaa910
			v9 = v5;
			v14 = *(int32_t *)(g23 - 0x7760) + 16 * v15;
			v7 = 2;
			result = *(int32_t *)v14;
			v8 = *(int32_t *)(v14 + 4);
			v12 = 0;
			v10 = *(int32_t *)(v14 + 8);
			v11 = *(int32_t *)(v14 + 12);
			v13 = 0;
			// branch -> 0xaa93c
			while (true) {
				// 0xaa93c
				int32_t v16; // 0xaaa00
				if (v13 == 2) {
				lab_0xaa9b4_2:;
					int32_t *v17 = (int32_t *)(v9 + 372); // 0xaa9b4
					uint32_t v18 = *v17;                  // 0xaa9b4
					if (v18 > v10) {
						// 0xaa9c0
						*v17 = v10;
						// branch -> 0xaaa00
					} else {
						// 0xaa9c8
						if (v18 <= 0xffffffff) {
							// 0xaa9d0
							*v17 = 0;
							// branch -> 0xaaa00
						}
					}
				lab_0xaaa00_4:
					// 0xaaa00
					v16 = v12 + 1;
					v12 = v16;
					int32_t v19; // 0xaaac8
					int32_t v20; // 0xaaacc
					int32_t v21; // 0xaaac8
					int32_t v22; // 0xaaacc
					if (v16 == 2) {
					lab_0xaaa7c_6:;
						int32_t *v23 = (int32_t *)(v9 + 372); // 0xaaa7c
						uint32_t v24 = *v23;                  // 0xaaa7c
						if (v24 > v10) {
							// 0xaaa88
							*v23 = v10;
							// branch -> 0xaaac8
						} else {
							// 0xaaa90
							if (v24 <= 0xffffffff) {
								// 0xaaa98
								*v23 = 0;
								// branch -> 0xaaac8
							}
						}
					lab_0xaaac8_4:
						// 0xaaac8
						v21 = v12 + 1;
						v12 = v21;
						v22 = v7 - 1;
						v7 = v22;
						if (v22 == 0) {
							// break -> 0xaaad0
							break;
						}
						v13 = v21;
						// continue -> 0xaa93c
						continue;
					} else {
					lab_0xaaa0c_6:
						// 0xaaa0c
						if (v16 > 1) {
							// 0xaaa20
							if (v16 > 3) {
								goto lab_0xaaac8_4;
							}
							int32_t *v25 = (int32_t *)(v9 + 380); // 0xaaaa4
							int32_t v26 = *v25;                   // 0xaaaa4
							if (v26 > v11) {
								// 0xaaab0
								*v25 = v11;
								// branch -> 0xaaac8
								goto lab_0xaaac8_4;
							} else {
								// 0xaaab8
								if (v26 > -1) {
									goto lab_0xaaac8_4;
								}
								// 0xaaac0
								*v25 = 0;
								// branch -> 0xaaac8
								goto lab_0xaaac8_4;
							}
						lab_0xaaac8_7:
							// 0xaaac8
							v21 = v12 + 1;
							v12 = v21;
							v22 = v7 - 1;
							v7 = v22;
							if (v22 == 0) {
								// break -> 0xaaad0
								break;
							}
							v13 = v21;
							// continue -> 0xaa93c
							continue;
						} else {
							// 0xaaa10
							if (v16 == 0) {
								int32_t *v27 = (int32_t *)(v9 + 356); // 0xaaa2c
								int32_t v28 = *v27;                   // 0xaaa2c
								if (v28 > result) {
									// 0xaaa38
									*v27 = result;
									// branch -> 0xaaac8
									goto lab_0xaaac8_7;
								} else {
									// 0xaaa40
									if (v28 > -1) {
										goto lab_0xaaac8_7;
									}
									// 0xaaa48
									*v27 = 0;
									// branch -> 0xaaac8
									goto lab_0xaaac8_7;
								}
							lab_0xaaac8_11:
								// 0xaaac8
								v21 = v12 + 1;
								v12 = v21;
								v22 = v7 - 1;
								v7 = v22;
								if (v22 == 0) {
									// break -> 0xaaad0
									break;
								}
								v13 = v21;
								// continue -> 0xaa93c
								continue;
							} else {
								// 0xaaa18
								if (v16 <= 0xffffffff) {
									goto lab_0xaaac8_11;
								}
								int32_t *v29 = (int32_t *)(v9 + 364); // 0xaaa54
								int32_t v30 = *v29;                   // 0xaaa54
								if (v30 > v8) {
									// 0xaaa60
									*v29 = v8;
									// branch -> 0xaaac8
									goto lab_0xaaac8_11;
								} else {
									// 0xaaa68
									if (v30 > -1) {
										goto lab_0xaaac8_11;
									}
									// 0xaaa70
									*v29 = 0;
									// branch -> 0xaaac8
									goto lab_0xaaac8_11;
								}
								// 0xaaac8
								v19 = v12;
								v21 = v19 + 1;
								v12 = v21;
								v20 = v7;
								v22 = v20 - 1;
								v7 = v22;
								if (v22 == 0) {
									// break -> 0xaaad0
									break;
								}
								v13 = v21;
								// continue -> 0xaa93c
								continue;
							}
							// 0xaaac8
							v19 = v12;
							v21 = v19 + 1;
							v12 = v21;
							v20 = v7;
							v22 = v20 - 1;
							v7 = v22;
							if (v22 == 0) {
								// break -> 0xaaad0
								break;
							}
							v13 = v21;
							// continue -> 0xaa93c
							continue;
						}
						// 0xaaac8
						v19 = v12;
						v21 = v19 + 1;
						v12 = v21;
						v20 = v7;
						v22 = v20 - 1;
						v7 = v22;
						if (v22 == 0) {
							// break -> 0xaaad0
							break;
						}
						v13 = v21;
						// continue -> 0xaa93c
						continue;
					}
					// 0xaaac8
					v19 = v12;
					v21 = v19 + 1;
					v12 = v21;
					v20 = v7;
					v22 = v20 - 1;
					v7 = v22;
					if (v22 == 0) {
						// break -> 0xaaad0
						break;
					}
					v13 = v21;
					// continue -> 0xaa93c
					continue;
				} else {
				lab_0xaa944_2:;
					// 0xaa944
					int32_t v31; // 0xaaa00
					if (v13 > 1) {
						// 0xaa958
						if (v13 > 3) {
							goto lab_0xaaa00_4;
						}
						int32_t *v32 = (int32_t *)(v9 + 380); // 0xaa9dc
						int32_t v33 = *v32;                   // 0xaa9dc
						if (v33 > v11) {
							// 0xaa9e8
							*v32 = v11;
							// branch -> 0xaaa00
							goto lab_0xaaa00_4;
						} else {
							// 0xaa9f0
							if (v33 > -1) {
								goto lab_0xaaa00_4;
							}
							// 0xaa9f8
							*v32 = 0;
							// branch -> 0xaaa00
							goto lab_0xaaa00_4;
						}
					lab_0xaaa00_7:
						// 0xaaa00
						v16 = v12 + 1;
						v12 = v16;
						if (v16 == 2) {
							goto lab_0xaaa7c_6;
						}
						goto lab_0xaaa0c_6;
					} else {
						// 0xaa948
						if (v13 == 0) {
							int32_t *v34 = (int32_t *)(v9 + 356); // 0xaa964
							int32_t v35 = *v34;                   // 0xaa964
							if (v35 > result) {
								// 0xaa970
								*v34 = result;
								// branch -> 0xaaa00
								goto lab_0xaaa00_7;
							} else {
								// 0xaa978
								if (v35 > -1) {
									goto lab_0xaaa00_7;
								}
								// 0xaa980
								*v34 = 0;
								// branch -> 0xaaa00
								goto lab_0xaaa00_7;
							}
						lab_0xaaa00_11:
							// 0xaaa00
							v16 = v12 + 1;
							v12 = v16;
							if (v16 == 2) {
								goto lab_0xaaa7c_6;
							}
							goto lab_0xaaa0c_6;
						} else {
							// 0xaa950
							if (v13 <= 0xffffffff) {
								goto lab_0xaaa00_11;
							}
							int32_t *v36 = (int32_t *)(v9 + 364); // 0xaa98c
							int32_t v37 = *v36;                   // 0xaa98c
							if (v37 > v8) {
								// 0xaa998
								*v36 = v8;
								// branch -> 0xaaa00
								goto lab_0xaaa00_11;
							} else {
								// 0xaa9a0
								if (v37 > -1) {
									goto lab_0xaaa00_11;
								}
								// 0xaa9a8
								*v36 = 0;
								// branch -> 0xaaa00
								goto lab_0xaaa00_11;
							}
							// 0xaaa00
							v31 = v12;
							v16 = v31 + 1;
							v12 = v16;
							if (v16 == 2) {
								goto lab_0xaaa7c_6;
							}
							goto lab_0xaaa0c_6;
						}
						// 0xaaa00
						v31 = v12;
						v16 = v31 + 1;
						v12 = v16;
						if (v16 == 2) {
							goto lab_0xaaa7c_6;
						}
						goto lab_0xaaa0c_6;
					}
					// 0xaaa00
					v31 = v12;
					v16 = v31 + 1;
					v12 = v16;
					if (v16 == 2) {
						goto lab_0xaaa7c_6;
					}
					goto lab_0xaaa0c_6;
				}
			}
			// 0xaaad0
			g36 = v1;
			g33 = v3;
			return result;
		}
		// 0xaa8fc
		// branch -> 0xaa910
		// 0xaa910
		v9 = v5;
		v14 = *(int32_t *)(g23 - 0x7760) + 16;
		v7 = 2;
		result = *(int32_t *)v14;
		v8 = *(int32_t *)(v14 + 4);
		v12 = 0;
		v10 = *(int32_t *)(v14 + 8);
		v11 = *(int32_t *)(v14 + 12);
		v13 = 0;
		// branch -> 0xaa93c
		while (true) {
			// 0xaa93c
			if (v13 == 2) {
				goto lab_0xaa9b4_2;
			}
			goto lab_0xaa944_2;
		}
	}
	// 0xaa910
	v9 = v5;
	v14 = *(int32_t *)(g23 - 0x7760);
	v7 = 2;
	result = *(int32_t *)v14;
	v8 = *(int32_t *)(v14 + 4);
	v12 = 0;
	v10 = *(int32_t *)(v14 + 8);
	v11 = *(int32_t *)(v14 + 12);
	v13 = 0;
	// branch -> 0xaa93c
	while (true) {
		// 0xaa93c
		if (v13 == 2) {
			goto lab_0xaa9b4_2;
		}
		goto lab_0xaa944_2;
	}
}

// Address range: 0xaaaec - 0xaac40
int32_t ModifyPlrStr(int32_t a1)
{
	int32_t v1 = g36; // 0xaaaec
	g35 = a1;
	int32_t v2 = g33;                        // 0xaab00
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xaab04
	g33 = v3;
	int32_t v4 = g37; // 0xaab0c
	g32 = v4;
	int32_t v5 = a1; // 0xaab28
	if (a1 >= 4) {
		// 0xaab1c
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a44));
		v4 = g32;
		v3 = g33;
		v5 = g35;
		// branch -> 0xaab28
	}
	int32_t v6 = 0x55ec * v5;     // 0xaab28
	int32_t v7 = v6 + v3;         // 0xaab30
	int32_t v8 = v7 + 348;        // 0xaab34
	int32_t v9 = v7 + 356;        // 0xaab3c
	int32_t v10 = *(int32_t *)v9; // 0xaab3c
	g36 = v9;
	int32_t v11 = 0x1000000 * (int32_t) * (char *)v8 / 0x100000;  // 0xaab44
	int32_t v12 = *(int32_t *)(v11 + *(int32_t *)(g23 - 0x7760)); // 0xaab4c
	int32_t v13 = v4;                                             // 0xaab64
	if (v10 + v4 > v12) {
		int32_t v14 = v12 - v10; // 0xaab58
		g32 = v14;
		v13 = v14;
		// branch -> 0xaab5c
	}
	int32_t v15 = v7 + 352;        // 0xaab60
	int32_t *v16 = (int32_t *)v15; // 0xaab60
	*v16 = *v16 + v13;
	int32_t *v17 = (int32_t *)g36; // 0xaab6c
	*v17 = g32 + *v17;
	int32_t v18 = v6 + g33; // 0xaab84
	if (*(char *)v8 == 1) {
		int32_t v19 = *(int32_t *)v15;                                     // 0xaab88
		unsigned char v20 = *(char *)(v18 + 436);                          // 0xaab8c
		int32_t v21 = *(int32_t *)(v18 + 368);                             // 0xaab94
		uint64_t v22 = 0x51eb851f * (int64_t)((v21 + v19) * (int32_t)v20); // 0xaaba8
		int32_t v23 = (int32_t)(v22 / 0x100000000) >> 31;                  // 0xaabac
		int32_t v24 = v23 < 0;                                             // 0xaabb0
		*(int32_t *)(v18 + 388) = (v23 & -0x4000000 | (int32_t)(v22 / 0x4000000000)) + v24;
		// branch -> 0xaabf0
	} else {
		char v25 = *(char *)(v18 + 436);                                       // 0xaabc8
		uint64_t v26 = 0x51eb851f * (int64_t)((int32_t)v25 * *(int32_t *)v15); // 0xaabdc
		int32_t v27 = (int32_t)(v26 / 0x100000000) >> 31;                      // 0xaabe0
		int32_t v28 = v27 < 0;                                                 // 0xaabe4
		*(int32_t *)(v18 + 388) = (v27 & -0x8000000 | (int32_t)(v26 / 0x2000000000)) + v28;
		// branch -> 0xaabf0
	}
	// 0xaabf0
	CalcPlrInv(g35, 1);
	int32_t v29 = *(int32_t *)(g23 - 0x77ac); // 0xaabfc
	int32_t result = v29;                     // 0xaac3c
	if (g35 == *(int32_t *)v29) {
		// 0xaac0c
		result = NetSendCmdParam1(0, 79, *(int32_t *)g36 % 0x10000);
		// branch -> 0xaac20
	}
	// 0xaac20
	g36 = v1;
	g33 = v2;
	return result;
}

// Address range: 0xaac40 - 0xaad74
int32_t ModifyPlrMag(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0xaac40
	g35 = a2;
	int32_t v2 = g33; // 0xaac50
	g33 = a1;
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xaac60
	g32 = v3;
	int32_t v4 = a1; // 0xaac7c
	if (a1 >= 4) {
		// 0xaac70
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a48));
		a2 = g35;
		v3 = g32;
		v4 = g33;
		// branch -> 0xaac7c
	}
	int32_t v5 = 0x55ec * v4;                // 0xaac7c
	int32_t v6 = *(int32_t *)(g23 - 0x7760); // 0xaac80
	int32_t v7 = v5 + v3;                    // 0xaac84
	int32_t v8 = v7 + 348;                   // 0xaac88
	int32_t v9 = v7 + 364;                   // 0xaac90
	int32_t v10 = *(int32_t *)v9;            // 0xaac90
	g36 = v9;
	int32_t v11 = 0x1000000 * (int32_t) * (char *)v8 / 0x100000 + v6; // 0xaaca0
	int32_t v12 = *(int32_t *)(v11 + 4);                              // 0xaaca4
	int32_t v13 = a2;                                                 // 0xaacbc
	if (v10 + a2 > v12) {
		int32_t v14 = v12 - v10; // 0xaacb0
		g35 = v14;
		v13 = v14;
		// branch -> 0xaacb4
	}
	int32_t *v15 = (int32_t *)(v7 + 360); // 0xaacb8
	*v15 = *v15 + v13;
	int32_t *v16 = (int32_t *)g36; // 0xaacc4
	*v16 = g35 + *v16;
	int32_t v17 = g35;      // 0xaacd0
	int32_t v18 = 64 * v17; // 0xaacd0
	g35 = v18;
	if (*(char *)v8 == 2) {
		int32_t v19 = 128 * v17; // 0xaace0
		g35 = v19;
		v18 = v19;
		// branch -> 0xaace4
	}
	int32_t v20 = v5 + g32;                // 0xaace4
	int32_t *v21 = (int32_t *)(v20 + 420); // 0xaace8
	*v21 = *v21 + v18;
	int32_t *v22 = (int32_t *)(v20 + 428); // 0xaacf4
	*v22 = g35 + *v22;
	if (__asm_rlwinm_(*(int32_t *)(v20 + 0x5568), 0, 4, 4) == 0) {
		int32_t *v23 = (int32_t *)(v20 + 416); // 0xaad0c
		*v23 = g35 + *v23;
		int32_t *v24 = (int32_t *)(v20 + 424); // 0xaad18
		*v24 = g35 + *v24;
		// branch -> 0xaad24
	}
	// 0xaad24
	CalcPlrInv(g33, 1);
	int32_t v25 = *(int32_t *)(g23 - 0x77ac); // 0xaad30
	int32_t result = v25;                     // 0xaad70
	if (g33 == *(int32_t *)v25) {
		// 0xaad40
		result = NetSendCmdParam1(0, 80, *(int32_t *)g36 % 0x10000);
		// branch -> 0xaad54
	}
	// 0xaad54
	g36 = v1;
	g33 = v2;
	return result;
}

// Address range: 0xaad74 - 0xaae80
int32_t ModifyPlrDex(int32_t a1, int32_t a2)
{
	// 0xaad74
	g35 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xaad80
	g33 = v1;
	g29 = a2;
	int32_t v2 = a1; // 0xaade0
	if (a1 >= 4) {
		// 0xaad98
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a4c));
		a2 = g29;
		v1 = g33;
		v2 = g35;
		// branch -> 0xaada4
	}
	int32_t v3 = 0x55ec * v2; // 0xaada4
	g32 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7760); // 0xaada8
	int32_t v5 = v3 + v1;                    // 0xaadac
	unsigned char v6 = *(char *)(v5 + 348);  // 0xaadb0
	int32_t v7 = v5 + 372;                   // 0xaadb8
	int32_t v8 = *(int32_t *)v7;             // 0xaadb8
	g36 = v7;
	int32_t v9 = *(int32_t *)(0x1000000 * (int32_t)v6 / 0x100000 + v4 + 8); // 0xaadcc
	int32_t v10 = a2;                                                       // 0xaadec
	if (v8 + a2 > v9) {
		int32_t v11 = v9 - v8; // 0xaadd8
		g29 = v11;
		v10 = v11;
		// branch -> 0xaaddc
	}
	int32_t *v12 = (int32_t *)(v5 + 368); // 0xaade4
	*v12 = *v12 + v10;
	int32_t *v13 = (int32_t *)g36; // 0xaadf4
	*v13 = g29 + *v13;
	CalcPlrInv(v2, 1);
	if (*(char *)g31 == 1) {
		int32_t v14 = g32 + g33;                                           // 0xaae10
		int32_t v15 = *(int32_t *)g30;                                     // 0xaae14
		char v16 = *(char *)(v14 + 436);                                   // 0xaae18
		int32_t v17 = *(int32_t *)(v14 + 352);                             // 0xaae20
		uint64_t v18 = 0x51eb851f * (int64_t)((v17 + v15) * (int32_t)v16); // 0xaae34
		int32_t v19 = (int32_t)(v18 / 0x100000000) >> 31;                  // 0xaae38
		*(int32_t *)(v14 + 388) = (v19 & -0x4000000 | (int32_t)(v18 / 0x4000000000)) + (int32_t)(v19 < 0);
		// branch -> 0xaae48
	}
	int32_t v20 = *(int32_t *)(g23 - 0x77ac); // 0xaae48
	int32_t result = v20;                     // 0xaae7c
	if (g35 == *(int32_t *)v20) {
		// 0xaae58
		result = NetSendCmdParam1(0, 81, *(int32_t *)g36 % 0x10000);
		// branch -> 0xaae6c
	}
	// 0xaae6c
	return result;
}

// Address range: 0xaae80 - 0xaafa8
int32_t ModifyPlrVit(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0xaae80
	g35 = a2;
	int32_t v2 = g33; // 0xaae90
	g33 = a1;
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xaaea0
	g32 = v3;
	int32_t v4 = a1; // 0xaaebc
	if (a1 >= 4) {
		// 0xaaeb0
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a50));
		a2 = g35;
		v3 = g32;
		v4 = g33;
		// branch -> 0xaaebc
	}
	int32_t v5 = 0x55ec * v4;                // 0xaaebc
	int32_t v6 = *(int32_t *)(g23 - 0x7760); // 0xaaec0
	int32_t v7 = v5 + v3;                    // 0xaaec4
	int32_t v8 = v7 + 348;                   // 0xaaec8
	int32_t v9 = v7 + 380;                   // 0xaaed0
	int32_t v10 = *(int32_t *)v9;            // 0xaaed0
	g36 = v9;
	int32_t v11 = 0x1000000 * (int32_t) * (char *)v8 / 0x100000 + v6; // 0xaaee0
	int32_t v12 = *(int32_t *)(v11 + 12);                             // 0xaaee4
	int32_t v13 = a2;                                                 // 0xaaefc
	if (v10 + a2 > v12) {
		int32_t v14 = v12 - v10; // 0xaaef0
		g35 = v14;
		v13 = v14;
		// branch -> 0xaaef4
	}
	int32_t *v15 = (int32_t *)(v7 + 376); // 0xaaef8
	*v15 = *v15 + v13;
	int32_t *v16 = (int32_t *)g36; // 0xaaf04
	*v16 = g35 + *v16;
	int32_t v17 = g35;      // 0xaaf10
	int32_t v18 = 64 * v17; // 0xaaf10
	g35 = v18;
	if (*(char *)v8 == 0) {
		int32_t v19 = 128 * v17; // 0xaaf20
		g35 = v19;
		v18 = v19;
		// branch -> 0xaaf24
	}
	int32_t v20 = v5 + g32;                // 0xaaf24
	int32_t *v21 = (int32_t *)(v20 + 396); // 0xaaf28
	*v21 = *v21 + v18;
	int32_t *v22 = (int32_t *)(v20 + 400); // 0xaaf3c
	*v22 = g35 + *v22;
	int32_t *v23 = (int32_t *)(v20 + 404); // 0xaaf48
	*v23 = g35 + *v23;
	int32_t *v24 = (int32_t *)(v20 + 408); // 0xaaf54
	*v24 = g35 + *v24;
	CalcPlrInv(g33, 1);
	int32_t v25 = *(int32_t *)(g23 - 0x77ac); // 0xaaf64
	int32_t result = v25;                     // 0xaafa4
	if (g33 == *(int32_t *)v25) {
		// 0xaaf74
		result = NetSendCmdParam1(0, 82, *(int32_t *)g36 % 0x10000);
		// branch -> 0xaaf88
	}
	// 0xaaf88
	g36 = v1;
	g33 = v2;
	return result;
}

// Address range: 0xaafa8 - 0xab038
int32_t SetPlayerHitPoints(int32_t a1)
{
	int32_t v1 = g36;                        // 0xaafa8
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xaafb0
	g36 = v2;
	int32_t v3 = g35; // 0xaafb4
	int32_t v4 = g37; // 0xaafb8
	g35 = v4;
	int32_t v5 = g33; // 0xaafbc
	g33 = a1;
	int32_t v6 = a1; // 0xaafe0
	if (a1 >= 4) {
		// 0xaafd4
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a54));
		v4 = g35;
		v2 = g36;
		v6 = g33;
		// branch -> 0xaafe0
	}
	int32_t v7 = 0x55ec * v6 + v2; // 0xaafe8
	*(int32_t *)(v7 + 404) = v4;
	int32_t v8 = *(int32_t *)(v7 + 408); // 0xaaff4
	*(int32_t *)(v7 + 396) = g35 + *(int32_t *)(v7 + 400) - v8;
	int32_t v9 = *(int32_t *)(g23 - 0x77ac); // 0xab004
	int32_t result = v9;                     // 0xab034
	if (g33 == *(int32_t *)v9) {
		int32_t v10 = *(int32_t *)(g23 - 0x76f0); // 0xab010
		*(int32_t *)v10 = 1;
		result = v10;
		// branch -> 0xab01c
	}
	// 0xab01c
	g36 = v1;
	g35 = v3;
	g33 = v5;
	return result;
}

// Address range: 0xab038 - 0xab114
int32_t function_ab038(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xab040
	g36 = v1;
	g35 = a2;
	g33 = a1;
	int32_t v2 = a1; // 0xab070
	if (a1 >= 4) {
		// 0xab064
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a58));
		a2 = g35;
		v1 = g36;
		v2 = g33;
		// branch -> 0xab070
	}
	int32_t v3 = 0x55ec * v2 + v1; // 0xab074
	g36 = v3;
	*(int32_t *)(v3 + 356) = a2;
	CalcPlrInv(g33, 1);
	int32_t v4 = g36;              // 0xab088
	char v5 = *(char *)(v4 + 436); // 0xab094
	int32_t result;                // r3
	if (*(char *)(v4 + 348) == 1) {
		int32_t v6 = *(int32_t *)(v4 + 352);                           // 0xab09c
		int32_t v7 = *(int32_t *)(v4 + 368);                           // 0xab0a4
		uint64_t v8 = 0x51eb851f * (int64_t)((v7 + v6) * (int32_t)v5); // 0xab0b4
		int32_t v9 = (int32_t)(v8 / 0x100000000) >> 31;                // 0xab0b8
		int32_t v10 = v9 < 0;                                          // 0xab0bc
		result = v10;
		*(int32_t *)(v4 + 388) = (v9 & -0x4000000 | (int32_t)(v8 / 0x4000000000)) + v10;
		// branch -> 0xab0f8
	} else {
		int32_t v11 = *(int32_t *)(v4 + 352);                     // 0xab0d4
		uint64_t v12 = 0x51eb851f * (int64_t)(v11 * (int32_t)v5); // 0xab0e4
		int32_t v13 = (int32_t)(v12 / 0x100000000) >> 31;         // 0xab0e8
		int32_t v14 = v13 < 0;                                    // 0xab0ec
		result = v14;
		*(int32_t *)(v4 + 388) = (v13 & -0x8000000 | (int32_t)(v12 / 0x2000000000)) + v14;
		// branch -> 0xab0f8
	}
	// 0xab0f8
	return result;
}

// Address range: 0xab114 - 0xab1a0
int32_t function_ab114(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xab11c
	g36 = v1;
	g35 = a2;
	g33 = a1;
	int32_t v2 = a1; // 0xab14c
	if (a1 >= 4) {
		// 0xab140
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a5c));
		a2 = g35;
		v1 = g36;
		v2 = g33;
		// branch -> 0xab14c
	}
	int32_t v3 = 0x55ec * v2; // 0xab14c
	int32_t v4 = v3 + v1;     // 0xab150
	*(int32_t *)(v4 + 364) = a2;
	int32_t v5 = g35;     // 0xab158
	int32_t v6 = 64 * v5; // 0xab158
	g35 = v6;
	if (*(char *)(v4 + 348) == 2) {
		int32_t v7 = 128 * v5; // 0xab168
		g35 = v7;
		v6 = v7;
		// branch -> 0xab16c
	}
	int32_t v8 = v3 + g36; // 0xab16c
	*(int32_t *)(v8 + 420) = v6;
	*(int32_t *)(v8 + 428) = g35;
	return CalcPlrInv(g33, 1);
}

// Address range: 0xab1a0 - 0xab27c
int32_t function_ab1a0(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xab1a8
	g36 = v1;
	g35 = a2;
	g33 = a1;
	int32_t v2 = a1; // 0xab1d8
	if (a1 >= 4) {
		// 0xab1cc
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a60));
		a2 = g35;
		v1 = g36;
		v2 = g33;
		// branch -> 0xab1d8
	}
	int32_t v3 = 0x55ec * v2 + v1; // 0xab1dc
	g36 = v3;
	*(int32_t *)(v3 + 372) = a2;
	CalcPlrInv(g33, 1);
	int32_t v4 = g36;              // 0xab1f0
	char v5 = *(char *)(v4 + 436); // 0xab1fc
	int32_t result;                // r3
	if (*(char *)(v4 + 348) == 1) {
		int32_t v6 = *(int32_t *)(v4 + 352);                           // 0xab204
		int32_t v7 = *(int32_t *)(v4 + 368);                           // 0xab20c
		uint64_t v8 = 0x51eb851f * (int64_t)((v7 + v6) * (int32_t)v5); // 0xab21c
		int32_t v9 = (int32_t)(v8 / 0x100000000) >> 31;                // 0xab220
		int32_t v10 = v9 < 0;                                          // 0xab224
		result = v10;
		*(int32_t *)(v4 + 388) = (v9 & -0x4000000 | (int32_t)(v8 / 0x4000000000)) + v10;
		// branch -> 0xab260
	} else {
		int32_t v11 = *(int32_t *)(v4 + 352);                     // 0xab23c
		uint64_t v12 = 0x51eb851f * (int64_t)(v11 * (int32_t)v5); // 0xab24c
		int32_t v13 = (int32_t)(v12 / 0x100000000) >> 31;         // 0xab250
		int32_t v14 = v13 < 0;                                    // 0xab254
		result = v14;
		*(int32_t *)(v4 + 388) = (v13 & -0x8000000 | (int32_t)(v12 / 0x2000000000)) + v14;
		// branch -> 0xab260
	}
	// 0xab260
	return result;
}

// Address range: 0xab27c - 0xab308
int32_t function_ab27c(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xab284
	g36 = v1;
	g35 = a2;
	g33 = a1;
	int32_t v2 = a1; // 0xab2b4
	if (a1 >= 4) {
		// 0xab2a8
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a64));
		a2 = g35;
		v1 = g36;
		v2 = g33;
		// branch -> 0xab2b4
	}
	int32_t v3 = 0x55ec * v2; // 0xab2b4
	int32_t v4 = v3 + v1;     // 0xab2b8
	*(int32_t *)(v4 + 380) = a2;
	int32_t v5 = g35;     // 0xab2c0
	int32_t v6 = 64 * v5; // 0xab2c0
	g35 = v6;
	if (*(char *)(v4 + 348) == 0) {
		int32_t v7 = 128 * v5; // 0xab2d0
		g35 = v7;
		v6 = v7;
		// branch -> 0xab2d4
	}
	int32_t v8 = v3 + g36; // 0xab2d4
	*(int32_t *)(v8 + 396) = v6;
	*(int32_t *)(v8 + 400) = g35;
	return CalcPlrInv(g33, 1);
}

// Address range: 0xab308 - 0xab358
int32_t InitDungMsgs(int32_t a1)
{
	// 0xab308
	g36 = a1;
	int32_t v1; // 0xab330
	if (a1 >= 4) {
		// 0xab324
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5a68));
		v1 = g36;
		// branch -> 0xab330
	} else {
		v1 = a1;
	}
	int32_t result = *(int32_t *)(g23 - 0x77a8) + 0x55ec * v1; // 0xab338
	*(char *)(result + 0x5591) = 0;
	return result;
}

// Address range: 0xab358 - 0xab698
int32_t PlayDungMsgs(void)
{
	int32_t v1 = g10;                        // 0xab35c
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0xab360
	g33 = v2;
	g31 = *(int32_t *)(g23 - 0x71dc);
	g32 = *(int32_t *)(g23 - 0x71d8);
	g35 = *(int32_t *)(g23 - 0x77f0);
	g36 = *(int32_t *)(g23 - 0x77a8);
	uint32_t v3 = *(int32_t *)v2; // 0xab37c
	g37 = v3;
	if (v3 >= 4) {
		// 0xab388
		app_fatal(*(int32_t *)(g23 - 0x5a6c));
		// branch -> 0xab390
	}
	unsigned char v4 = *(char *)*(int32_t *)(g23 - 0x77e4); // 0xab394
	int32_t v5 = v4;                                        // 0xab394
	int32_t result;                                         // r3
	int32_t v6;                                             // r5
	if (v4 == 1) {
		int32_t v7 = g36 + 0x55ec * *(int32_t *)g33; // 0xab3a8
		if (*(char *)(v7 + 497) == 0) {
			// 0xab3b8
			if (*(char *)g35 == 1) {
				int32_t v8 = v7 + 0x5591; // 0xab3c4
				v6 = v8;
				if (*(char *)v8 % 2 == 0) {
					// 0xab3d4
					*(int32_t *)g32 = 40;
					unsigned char v9 = *(char *)(v7 + 348); // 0xab3dc
					result = v9;
					char *v10; // 0xab41c
					if (v9 == 0) {
						// 0xab3e8
						*(int32_t *)g31 = 822;
						// branch -> 0xab41c
						// 0xab41c
						v10 = (char *)v6;
						*v10 = (char)((int32_t)*v10 | 1);
						// branch -> 0xab684
						// 0xab684
						g10 = v1;
						return result;
					}
					// 0xab3f4
					if (v9 == 1) {
						// 0xab400
						*(int32_t *)g31 = 708;
						// branch -> 0xab41c
					} else {
						// 0xab40c
						if (v9 == 2) {
							// 0xab414
							*(int32_t *)g31 = 605;
							// branch -> 0xab41c
						}
					}
					// 0xab41c
					v10 = (char *)v6;
					*v10 = (char)((int32_t)*v10 | 1);
					// branch -> 0xab684
					// 0xab684
					g10 = v1;
					return result;
				}
			}
		}
	}
	int32_t v11;           // r4
	int32_t v12;           // 0xab554
	int32_t v13;           // 0xab5e8
	int32_t v14;           // 0xab4ec
	char *v15;             // 0xab544
	int32_t v16;           // 0xab580
	int32_t v17;           // 0xab588
	char *v18;             // 0xab5d8
	int32_t v19;           // 0xab614
	char *v20;             // 0xab66c
	int32_t v21;           // 0xab4d0
	int32_t v22;           // 0xab564
	int32_t v23;           // 0xab5f8
	unsigned char result2; // 0xab504
	unsigned char v24;     // 0xab598
	unsigned char v25;     // 0xab62c
	if (v4 == 5) {
		int32_t v26 = g36 + 0x55ec * *(int32_t *)g33; // 0xab43c
		if (*(char *)(v26 + 501) == 0) {
			// 0xab44c
			if (*(char *)g35 == 1) {
				int32_t v27 = v26 + 0x5591; // 0xab458
				v6 = v27;
				int32_t v28 = __asm_rlwinm_((int32_t) * (char *)v27, 0, 30, 30); // 0xab460
				result = v28;
				if (v28 == 0) {
					// 0xab468
					*(int32_t *)g32 = 40;
					unsigned char v29 = *(char *)(v26 + 348); // 0xab470
					result = v29;
					char *v30; // 0xab4b0
					if (v29 != 0) {
						// 0xab488
						if (v29 == 1) {
							// 0xab494
							*(int32_t *)g31 = 707;
							// branch -> 0xab4b0
						} else {
							// 0xab4a0
							if (v29 == 2) {
								// 0xab4a8
								*(int32_t *)g31 = 604;
								// branch -> 0xab4b0
							}
						}
						// 0xab4b0
						v30 = (char *)v6;
						*v30 = (char)((int32_t)*v30 | 2);
						// branch -> 0xab684
						// 0xab684
						g10 = v1;
						return result;
					}
					// 0xab47c
					*(int32_t *)g31 = 821;
					// branch -> 0xab4b0
					// 0xab4b0
					v30 = (char *)v6;
					*v30 = (char)((int32_t)*v30 | 2);
					// branch -> 0xab684
				} else {
					// 0xab458
					// branch -> 0xab4c0
					// 0xab4c0
					v12 = v5;
					unsigned char v31; // 0xab574
					unsigned char v32; // 0xab568
					if (v5 == 9) {
						// 0xab4c8
						v21 = g36 + 0x55ec * *(int32_t *)g33;
						unsigned char v33 = *(char *)(v21 + 505); // 0xab4d4
						result = v33;
						if (v33 == 0) {
							unsigned char v34 = *(char *)g35; // 0xab4e0
							result = v34;
							if (v34 == 1) {
								// 0xab4ec
								v14 = v21 + 0x5591;
								v6 = v14;
								int32_t v35 = __asm_rlwinm_((int32_t) * (char *)v14, 0, 29, 29); // 0xab4f4
								result = v35;
								if (v35 == 0) {
									// 0xab4fc
									*(int32_t *)g32 = 40;
									result2 = *(char *)(v21 + 348);
									result = result2;
									if (result2 != 0) {
										// 0xab51c
										if (result2 == 1) {
											// 0xab528
											*(int32_t *)g31 = 709;
											// branch -> 0xab544
										} else {
											// 0xab534
											if (result2 == 2) {
												// 0xab53c
												*(int32_t *)g31 = 606;
												// branch -> 0xab544
											}
										}
										// 0xab544
										v15 = (char *)v6;
										*v15 = (char)((int32_t)*v15 | 4);
										// branch -> 0xab684
										// 0xab684
										g10 = v1;
										return result;
									}
									// 0xab510
									*(int32_t *)g31 = 823;
									// branch -> 0xab544
									// 0xab544
									v15 = (char *)v6;
									*v15 = (char)((int32_t)*v15 | 4);
									// branch -> 0xab684
								} else {
									// 0xab4ec
									v12 = v5;
									// branch -> 0xab554
									// 0xab554
									v13 = v12;
									if (v12 == 13) {
										// 0xab55c
										v22 = g36 + 0x55ec * *(int32_t *)g33;
										v32 = *(char *)(v22 + 509);
										result = v32;
										if (v32 == 0) {
											// 0xab574
											v31 = *(char *)g35;
											result = v31;
											if (v31 == 1) {
												// 0xab580
												v16 = v22 + 0x5591;
												v6 = v16;
												v17 = __asm_rlwinm_((int32_t) * (char *)v16, 0, 28, 28);
												result = v17;
												if (v17 == 0) {
													// 0xab590
													*(int32_t *)g32 = 40;
													v24 = *(char *)(v22 + 348);
													result = v24;
													if (v24 != 0) {
														// 0xab5b0
														if (v24 == 1) {
															// 0xab5bc
															*(int32_t *)g31 = 710;
															// branch -> 0xab5d8
														} else {
															// 0xab5c8
															if (v24 == 2) {
																// 0xab5d0
																*(int32_t *)g31 = 607;
																// branch -> 0xab5d8
															}
														}
														// 0xab5d8
														v18 = (char *)v6;
														*v18 = (char)((int32_t)*v18 | 8);
														// branch -> 0xab684
														// 0xab684
														g10 = v1;
														return result;
													}
													// 0xab5a4
													*(int32_t *)g31 = 824;
													// branch -> 0xab5d8
													// 0xab5d8
													v18 = (char *)v6;
													*v18 = (char)((int32_t)*v18 | 8);
													// branch -> 0xab684
												} else {
													// 0xab580
													// branch -> 0xab5e8
													// 0xab5e8
													if (v5 == 16) {
														// 0xab5f0
														v23 = g36 + 0x55ec * *(int32_t *)g33;
														result = v23;
														if (*(char *)(v23 + 511) == 0) {
															// 0xab608
															if (*(char *)g35 == 1) {
																// 0xab614
																v19 = v23 + 0x5591;
																v11 = v19;
																if (__asm_rlwinm_((int32_t) * (char *)v19, 0, 27, 27) == 0) {
																	// 0xab624
																	*(int32_t *)g32 = 40;
																	v25 = *(char *)(result + 348);
																	result = v25;
																	if (v25 == 0) {
																		// 0xab638
																		*(int32_t *)g31 = 837;
																		// branch -> 0xab66c
																		// 0xab66c
																		v20 = (char *)v11;
																		*v20 = (char)((int32_t)*v20 | 16);
																		// branch -> 0xab684
																		// 0xab684
																		g10 = v1;
																		return result;
																	}
																	// 0xab644
																	if (v25 == 1) {
																		// 0xab650
																		*(int32_t *)g31 = 837;
																		// branch -> 0xab66c
																	} else {
																		// 0xab65c
																		if (v25 == 2) {
																			// 0xab664
																			*(int32_t *)g31 = 837;
																			// branch -> 0xab66c
																		}
																	}
																	// 0xab66c
																	v20 = (char *)v11;
																	*v20 = (char)((int32_t)*v20 | 16);
																	// branch -> 0xab684
																	// 0xab684
																	g10 = v1;
																	return result;
																}
															}
														}
													}
													// 0xab67c
													*(int32_t *)g32 = 0;
													// branch -> 0xab684
												}
												// 0xab684
												g10 = v1;
												return result;
											}
											v13 = 13;
										} else {
											v13 = 13;
										}
									}
									// 0xab5e8
									if (v13 == 16) {
										// 0xab5f0
										v23 = g36 + 0x55ec * *(int32_t *)g33;
										result = v23;
										if (*(char *)(v23 + 511) == 0) {
											// 0xab608
											if (*(char *)g35 == 1) {
												// 0xab614
												v19 = v23 + 0x5591;
												v11 = v19;
												if (__asm_rlwinm_((int32_t) * (char *)v19, 0, 27, 27) == 0) {
													// 0xab624
													*(int32_t *)g32 = 40;
													v25 = *(char *)(result + 348);
													result = v25;
													if (v25 == 0) {
														// 0xab638
														*(int32_t *)g31 = 837;
														// branch -> 0xab66c
														// 0xab66c
														v20 = (char *)v11;
														*v20 = (char)((int32_t)*v20 | 16);
														// branch -> 0xab684
														// 0xab684
														g10 = v1;
														return result;
													}
													// 0xab644
													if (v25 == 1) {
														// 0xab650
														*(int32_t *)g31 = 837;
														// branch -> 0xab66c
													} else {
														// 0xab65c
														if (v25 == 2) {
															// 0xab664
															*(int32_t *)g31 = 837;
															// branch -> 0xab66c
														}
													}
													// 0xab66c
													v20 = (char *)v11;
													*v20 = (char)((int32_t)*v20 | 16);
													// branch -> 0xab684
													// 0xab684
													g10 = v1;
													return result;
												}
											}
										}
									}
									// 0xab67c
									*(int32_t *)g32 = 0;
									// branch -> 0xab684
								}
								// 0xab684
								g10 = v1;
								return result;
							}
							v12 = 9;
						} else {
							v12 = 9;
						}
					}
					// 0xab554
					v13 = v12;
					if (v12 == 13) {
						// 0xab55c
						v22 = g36 + 0x55ec * *(int32_t *)g33;
						v32 = *(char *)(v22 + 509);
						result = v32;
						if (v32 == 0) {
							// 0xab574
							v31 = *(char *)g35;
							result = v31;
							if (v31 == 1) {
								// 0xab580
								v16 = v22 + 0x5591;
								v6 = v16;
								v17 = __asm_rlwinm_((int32_t) * (char *)v16, 0, 28, 28);
								result = v17;
								if (v17 == 0) {
									// 0xab590
									*(int32_t *)g32 = 40;
									v24 = *(char *)(v22 + 348);
									result = v24;
									if (v24 != 0) {
										// 0xab5b0
										if (v24 == 1) {
											// 0xab5bc
											*(int32_t *)g31 = 710;
											// branch -> 0xab5d8
										} else {
											// 0xab5c8
											if (v24 == 2) {
												// 0xab5d0
												*(int32_t *)g31 = 607;
												// branch -> 0xab5d8
											}
										}
										// 0xab5d8
										v18 = (char *)v6;
										*v18 = (char)((int32_t)*v18 | 8);
										// branch -> 0xab684
										// 0xab684
										g10 = v1;
										return result;
									}
									// 0xab5a4
									*(int32_t *)g31 = 824;
									// branch -> 0xab5d8
									// 0xab5d8
									v18 = (char *)v6;
									*v18 = (char)((int32_t)*v18 | 8);
									// branch -> 0xab684
								} else {
									// 0xab580
									// branch -> 0xab5e8
									// 0xab5e8
									if (v5 == 16) {
										// 0xab5f0
										v23 = g36 + 0x55ec * *(int32_t *)g33;
										result = v23;
										if (*(char *)(v23 + 511) == 0) {
											// 0xab608
											if (*(char *)g35 == 1) {
												// 0xab614
												v19 = v23 + 0x5591;
												v11 = v19;
												if (__asm_rlwinm_((int32_t) * (char *)v19, 0, 27, 27) == 0) {
													// 0xab624
													*(int32_t *)g32 = 40;
													v25 = *(char *)(result + 348);
													result = v25;
													if (v25 == 0) {
														// 0xab638
														*(int32_t *)g31 = 837;
														// branch -> 0xab66c
														// 0xab66c
														v20 = (char *)v11;
														*v20 = (char)((int32_t)*v20 | 16);
														// branch -> 0xab684
														// 0xab684
														g10 = v1;
														return result;
													}
													// 0xab644
													if (v25 == 1) {
														// 0xab650
														*(int32_t *)g31 = 837;
														// branch -> 0xab66c
													} else {
														// 0xab65c
														if (v25 == 2) {
															// 0xab664
															*(int32_t *)g31 = 837;
															// branch -> 0xab66c
														}
													}
													// 0xab66c
													v20 = (char *)v11;
													*v20 = (char)((int32_t)*v20 | 16);
													// branch -> 0xab684
													// 0xab684
													g10 = v1;
													return result;
												}
											}
										}
									}
									// 0xab67c
									*(int32_t *)g32 = 0;
									// branch -> 0xab684
								}
								// 0xab684
								g10 = v1;
								return result;
							}
							v13 = 13;
						} else {
							v13 = 13;
						}
					}
					// 0xab5e8
					if (v13 == 16) {
						// 0xab5f0
						v23 = g36 + 0x55ec * *(int32_t *)g33;
						result = v23;
						if (*(char *)(v23 + 511) == 0) {
							// 0xab608
							if (*(char *)g35 == 1) {
								// 0xab614
								v19 = v23 + 0x5591;
								v11 = v19;
								if (__asm_rlwinm_((int32_t) * (char *)v19, 0, 27, 27) == 0) {
									// 0xab624
									*(int32_t *)g32 = 40;
									v25 = *(char *)(result + 348);
									result = v25;
									if (v25 == 0) {
										// 0xab638
										*(int32_t *)g31 = 837;
										// branch -> 0xab66c
										// 0xab66c
										v20 = (char *)v11;
										*v20 = (char)((int32_t)*v20 | 16);
										// branch -> 0xab684
										// 0xab684
										g10 = v1;
										return result;
									}
									// 0xab644
									if (v25 == 1) {
										// 0xab650
										*(int32_t *)g31 = 837;
										// branch -> 0xab66c
									} else {
										// 0xab65c
										if (v25 == 2) {
											// 0xab664
											*(int32_t *)g31 = 837;
											// branch -> 0xab66c
										}
									}
									// 0xab66c
									v20 = (char *)v11;
									*v20 = (char)((int32_t)*v20 | 16);
									// branch -> 0xab684
									// 0xab684
									g10 = v1;
									return result;
								}
							}
						}
					}
					// 0xab67c
					*(int32_t *)g32 = 0;
					// branch -> 0xab684
				}
				// 0xab684
				g10 = v1;
				return result;
			}
			v5 = 5;
		} else {
			v5 = 5;
		}
	}
	// 0xab4c0
	v12 = v5;
	if (v5 == 9) {
		// 0xab4c8
		v21 = g36 + 0x55ec * *(int32_t *)g33;
		if (*(char *)(v21 + 505) == 0) {
			// 0xab4e0
			if (*(char *)g35 == 1) {
				// 0xab4ec
				v14 = v21 + 0x5591;
				v6 = v14;
				if (__asm_rlwinm_((int32_t) * (char *)v14, 0, 29, 29) == 0) {
					// 0xab4fc
					*(int32_t *)g32 = 40;
					result2 = *(char *)(v21 + 348);
					if (result2 != 0) {
						// 0xab51c
						if (result2 == 1) {
							// 0xab528
							*(int32_t *)g31 = 709;
							// branch -> 0xab544
						} else {
							// 0xab534
							if (result2 == 2) {
								// 0xab53c
								*(int32_t *)g31 = 606;
								// branch -> 0xab544
							}
						}
						// 0xab544
						v15 = (char *)v6;
						*v15 = (char)((int32_t)*v15 | 4);
						// branch -> 0xab684
						// 0xab684
						g10 = v1;
						return result2;
					}
					// 0xab510
					*(int32_t *)g31 = 823;
					// branch -> 0xab544
					// 0xab544
					v15 = (char *)v6;
					int32_t v36 = (int32_t)*v15 | 4; // 0xab548
					v5 = v36;
					*v15 = (char)v36;
					// branch -> 0xab684
				} else {
					// 0xab4ec
					v12 = v5;
					// branch -> 0xab554
					// 0xab554
					v13 = v12;
					if (v12 == 13) {
						// 0xab55c
						v22 = g36 + 0x55ec * *(int32_t *)g33;
						v11 = v22;
						if (*(char *)(v22 + 509) == 0) {
							// 0xab574
							if (*(char *)g35 == 1) {
								// 0xab580
								v16 = v22 + 0x5591;
								v6 = v16;
								v17 = __asm_rlwinm_((int32_t) * (char *)v16, 0, 28, 28);
								result = v17;
								if (v17 == 0) {
									// 0xab590
									*(int32_t *)g32 = 40;
									v24 = *(char *)(v11 + 348);
									result = v24;
									if (v24 != 0) {
										// 0xab5b0
										if (v24 == 1) {
											// 0xab5bc
											*(int32_t *)g31 = 710;
											// branch -> 0xab5d8
										} else {
											// 0xab5c8
											if (v24 == 2) {
												// 0xab5d0
												*(int32_t *)g31 = 607;
												// branch -> 0xab5d8
											}
										}
										// 0xab5d8
										v18 = (char *)v6;
										*v18 = (char)((int32_t)*v18 | 8);
										// branch -> 0xab684
										// 0xab684
										g10 = v1;
										return result;
									}
									// 0xab5a4
									*(int32_t *)g31 = 824;
									// branch -> 0xab5d8
									// 0xab5d8
									v18 = (char *)v6;
									*v18 = (char)((int32_t)*v18 | 8);
									// branch -> 0xab684
								} else {
									// 0xab580
									// branch -> 0xab5e8
									// 0xab5e8
									if (v5 == 16) {
										// 0xab5f0
										v23 = g36 + 0x55ec * *(int32_t *)g33;
										result = v23;
										if (*(char *)(v23 + 511) == 0) {
											// 0xab608
											if (*(char *)g35 == 1) {
												// 0xab614
												v19 = v23 + 0x5591;
												v11 = v19;
												if (__asm_rlwinm_((int32_t) * (char *)v19, 0, 27, 27) == 0) {
													// 0xab624
													*(int32_t *)g32 = 40;
													v25 = *(char *)(result + 348);
													result = v25;
													if (v25 == 0) {
														// 0xab638
														*(int32_t *)g31 = 837;
														// branch -> 0xab66c
														// 0xab66c
														v20 = (char *)v11;
														*v20 = (char)((int32_t)*v20 | 16);
														// branch -> 0xab684
														// 0xab684
														g10 = v1;
														return result;
													}
													// 0xab644
													if (v25 == 1) {
														// 0xab650
														*(int32_t *)g31 = 837;
														// branch -> 0xab66c
													} else {
														// 0xab65c
														if (v25 == 2) {
															// 0xab664
															*(int32_t *)g31 = 837;
															// branch -> 0xab66c
														}
													}
													// 0xab66c
													v20 = (char *)v11;
													*v20 = (char)((int32_t)*v20 | 16);
													// branch -> 0xab684
													// 0xab684
													g10 = v1;
													return result;
												}
											}
										}
									}
									// 0xab67c
									*(int32_t *)g32 = 0;
									// branch -> 0xab684
								}
								// 0xab684
								g10 = v1;
								return result;
							}
							v13 = 13;
						} else {
							v13 = 13;
						}
					}
					// 0xab5e8
					if (v13 == 16) {
						// 0xab5f0
						v23 = g36 + 0x55ec * *(int32_t *)g33;
						result = v23;
						if (*(char *)(v23 + 511) == 0) {
							// 0xab608
							if (*(char *)g35 == 1) {
								// 0xab614
								v19 = v23 + 0x5591;
								v11 = v19;
								if (__asm_rlwinm_((int32_t) * (char *)v19, 0, 27, 27) == 0) {
									// 0xab624
									*(int32_t *)g32 = 40;
									v25 = *(char *)(result + 348);
									result = v25;
									if (v25 == 0) {
										// 0xab638
										*(int32_t *)g31 = 837;
										// branch -> 0xab66c
										// 0xab66c
										v20 = (char *)v11;
										*v20 = (char)((int32_t)*v20 | 16);
										// branch -> 0xab684
										// 0xab684
										g10 = v1;
										return result;
									}
									// 0xab644
									if (v25 == 1) {
										// 0xab650
										*(int32_t *)g31 = 837;
										// branch -> 0xab66c
									} else {
										// 0xab65c
										if (v25 == 2) {
											// 0xab664
											*(int32_t *)g31 = 837;
											// branch -> 0xab66c
										}
									}
									// 0xab66c
									v20 = (char *)v11;
									*v20 = (char)((int32_t)*v20 | 16);
									// branch -> 0xab684
									// 0xab684
									g10 = v1;
									return result;
								}
							}
						}
					}
					// 0xab67c
					v5 = 0;
					*(int32_t *)g32 = 0;
					// branch -> 0xab684
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				v12 = 9;
			}
		} else {
			v12 = 9;
		}
	}
	// 0xab554
	v13 = v12;
	if (v12 == 13) {
		// 0xab55c
		v22 = g36 + 0x55ec * *(int32_t *)g33;
		if (*(char *)(v22 + 509) == 0) {
			// 0xab574
			if (*(char *)g35 == 1) {
				// 0xab580
				v16 = v22 + 0x5591;
				v6 = v16;
				if (__asm_rlwinm_((int32_t) * (char *)v16, 0, 28, 28) == 0) {
					// 0xab590
					*(int32_t *)g32 = 40;
					v24 = *(char *)(v22 + 348);
					if (v24 == 0) {
						// 0xab5a4
						*(int32_t *)g31 = 824;
						// branch -> 0xab5d8
					} else {
						// 0xab5b0
						if (v24 == 1) {
							// 0xab5bc
							*(int32_t *)g31 = 710;
							// branch -> 0xab5d8
						} else {
							// 0xab5c8
							if (v24 == 2) {
								// 0xab5d0
								*(int32_t *)g31 = 607;
								// branch -> 0xab5d8
							}
						}
						// 0xab5d8
						v18 = (char *)v6;
						*v18 = (char)((int32_t)*v18 | 8);
						// branch -> 0xab684
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0xab5d8
					v18 = (char *)v6;
					*v18 = (char)((int32_t)*v18 | 8);
					// branch -> 0xab684
				} else {
					// 0xab580
					v13 = v5;
					// branch -> 0xab5e8
					// 0xab5e8
					if (v13 == 16) {
						// 0xab5f0
						v23 = g36 + 0x55ec * *(int32_t *)g33;
						result = v23;
						if (*(char *)(v23 + 511) == 0) {
							// 0xab608
							if (*(char *)g35 == 1) {
								// 0xab614
								v19 = v23 + 0x5591;
								v11 = v19;
								if (__asm_rlwinm_((int32_t) * (char *)v19, 0, 27, 27) == 0) {
									// 0xab624
									*(int32_t *)g32 = 40;
									v25 = *(char *)(result + 348);
									if (v25 == 0) {
										// 0xab638
										*(int32_t *)g31 = 837;
										// branch -> 0xab66c
									} else {
										// 0xab644
										if (v25 == 1) {
											// 0xab650
											*(int32_t *)g31 = 837;
											// branch -> 0xab66c
										} else {
											// 0xab65c
											if (v25 == 2) {
												// 0xab664
												*(int32_t *)g31 = 837;
												// branch -> 0xab66c
											}
										}
										// 0xab66c
										v20 = (char *)v11;
										*v20 = (char)((int32_t)*v20 | 16);
										// branch -> 0xab684
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// 0xab66c
									v20 = (char *)v11;
									*v20 = (char)((int32_t)*v20 | 16);
									// branch -> 0xab684
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
					}
					// 0xab67c
					*(int32_t *)g32 = 0;
					// branch -> 0xab684
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				v13 = 13;
			}
		} else {
			v13 = 13;
		}
	}
	// 0xab5e8
	if (v13 == 16) {
		// 0xab5f0
		v23 = g36 + 0x55ec * *(int32_t *)g33;
		if (*(char *)(v23 + 511) == 0) {
			// 0xab608
			if (*(char *)g35 == 1) {
				// 0xab614
				v19 = v23 + 0x5591;
				v11 = v19;
				if (__asm_rlwinm_((int32_t) * (char *)v19, 0, 27, 27) == 0) {
					// 0xab624
					*(int32_t *)g32 = 40;
					v25 = *(char *)(v23 + 348);
					if (v25 == 0) {
						// 0xab638
						*(int32_t *)g31 = 837;
						// branch -> 0xab66c
					} else {
						// 0xab644
						if (v25 == 1) {
							// 0xab650
							*(int32_t *)g31 = 837;
							// branch -> 0xab66c
						} else {
							// 0xab65c
							if (v25 == 2) {
								// 0xab664
								*(int32_t *)g31 = 837;
								// branch -> 0xab66c
							}
						}
						// 0xab66c
						v20 = (char *)v11;
						*v20 = (char)((int32_t)*v20 | 16);
						// branch -> 0xab684
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0xab66c
					v20 = (char *)v11;
					*v20 = (char)((int32_t)*v20 | 16);
					// branch -> 0xab684
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
	}
	// 0xab67c
	*(int32_t *)g32 = 0;
	// branch -> 0xab684
	// Detected a possible infinite recursion (goto support failed); quitting...
}
