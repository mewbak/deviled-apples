
// Address range: 0x4c068 - 0x4c0c8
int32_t effect_is_playing(int32_t a1)
{
	int32_t v1 = g10;                  // 0x4c068
	int32_t v2 = g23 - 384 + 12 * a1;  // 0x4c07c
	int32_t v3 = *(int32_t *)(v2 + 8); // 0x4c080
	int32_t result;                    // 0x4c0c4
	if (v3 != 0) {
		// 0x4c08c
		result = function_b5114(v3);
		// branch -> 0x4c0b8
		// 0x4c0b8
		g10 = v1;
		return result;
	}
	// 0x4c094
	if (*(char *)v2 % 2 == 0) {
		// 0x4c0b4
		result = 0;
		// branch -> 0x4c0b8
	} else {
		int32_t v4 = llvm_ctlz_i32(*(int32_t *)(g23 - 0x4ec4) - v2, true); // 0x4c0a8
		result = __asm_rlwinm(v4, 27, 24, 31);
		// branch -> 0x4c0b8
	}
	// 0x4c0b8
	g10 = v1;
	return result;
}

// Address range: 0x4c0c8 - 0x4c110
int32_t sfx_stop(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x4ec0); // 0x4c0d4
	g34 = v1;
	int32_t result; // r3
	if (v1 != 0) {
		// 0x4c0e0
		SFileDdaEnd(v1);
		int32_t v2;
		int32_t *v3 = (int32_t *)(v2 - 0x4ec0); // 0x4c0e8
		g34 = *v3;
		result = SFileCloseFile();
		*v3 = 0;
		*(int32_t *)(g23 - 0x4ec4) = 0;
		// branch -> 0x4c100
	} else {
		result = 0;
	}
	// 0x4c100
	return result;
}

// Address range: 0x4c110 - 0x4c1d0
int32_t function_4c110(int32_t a1, int32_t a2, int32_t a3)
{
	sfx_stop();
	g34 = 1;
	int32_t result = sound_get_or_set_sound_volume(); // 0x4c13c
	int32_t v1 = a2 + result;                         // 0x4c140
	int32_t v2 = v1;                                  // r30
	if (v1 < -1600) {
		// 0x4c1b4
		return result;
	}
	// 0x4c14c
	if (v1 >= 1) {
		// 0x4c154
		v2 = 0;
		// branch -> 0x4c158
	}
	int32_t v3 = *(int32_t *)(a1 + 4); // 0x4c158
	g34 = v3;
	int32_t result2 = function_eb8f0(v3, g23 - 0x4ec0); // 0x4c160
	int32_t v4;
	if (result2 == 0) {
		// 0x4c170
		*(int32_t *)(v4 - 0x4ec0) = 0;
		// branch -> 0x4c1b4
		// 0x4c1b4
		return result2;
	}
	int32_t v5 = *(int32_t *)(v4 - 0x4ec0); // 0x4c17c
	g34 = v5;
	int32_t v6 = function_eb998(v5, 0x40000, 0, 0, v2, a3, 0); // 0x4c198
	int32_t result3 = v6;                                      // r3
	if (v6 == 0) {
		// 0x4c1a8
		result3 = sfx_stop();
		// branch -> 0x4c1b4
	} else {
		// 0x4c1b0
		*(int32_t *)(v4 - 0x4ec4) = a1;
		// branch -> 0x4c1b4
	}
	// 0x4c1b4
	return result3;
}

// Address range: 0x4c1d0 - 0x4c224
int32_t effects_update(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x4ec0); // 0x4c1dc
	g34 = v1;
	if (v1 == 0) {
		// 0x4c214
		return 0;
	}
	// 0x4c1e8
	int32_t v2;                                                  // bp-4
	int32_t v3;                                                  // bp-8
	int32_t v4 = function_ec5e0(v1, (int32_t)&v2, (int32_t)&v3); // 0x4c1f0
	if (v4 == 0) {
		// 0x4c214
		return 0;
	}
	int32_t result; // 0x4c220
	if (v2 >= v3) {
		// 0x4c210
		result = sfx_stop();
		// branch -> 0x4c214
	} else {
		result = v2;
	}
	// 0x4c214
	return result;
}

// Address range: 0x4c224 - 0x4c278
int32_t function_4c224(int32_t a1)
{
	int32_t v1 = g23 - 384; // 0x4c22c
	int32_t v2 = 857;       // r30
	int32_t v3 = 857;       // 0x4c2502
	// branch -> 0x4c240
	int32_t result; // 0x4c274
	while (true) {
		int32_t v4 = *(int32_t *)(v1 + 8); // 0x4c240
		result = 0;
		int32_t v5 = v3; // 0x4c258
		if (v4 != 0) {
			// 0x4c24c
			result = function_b50dc(v4);
			v5 = v2;
			// branch -> 0x4c250
		}
		int32_t v6 = v5 - 1; // 0x4c258
		v2 = v6;
		if (v5 == 0) {
			// break -> 0x4c260
			break;
		}
		v3 = v6;
		v1 += 12;
		// continue -> 0x4c240
	}
	// 0x4c260
	return result;
}

// Address range: 0x4c278 - 0x4c364
int32_t function_4c278(int32_t result)
{
	if (*(char *)*(int32_t *)(g23 - 0x72b0) == 0) {
		// 0x4c350
		return result;
	}
	int32_t v1 = g23 + 0x26b8; // 0x4c2a4
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7610) + 520 * result; // 0x4c2a8
	g31 = 0;
	g33 = 128 * (int32_t) * (char *)v2 + *(int32_t *)(g23 - 0x72b4);
	int32_t v3;       // bp-296
	int32_t v4 = &v3; // 0x4c2e0
	int32_t v5 = 0;   // 0x4c33c5
	// branch -> 0x4c2bc
	while (true) {
		// 0x4c2bc
		int32_t v6; // 0x4c33c
		int32_t v7; // 0x4c340
		int32_t v8; // 0x4c348
		if (*(char *)v1 == 115) {
			// 0x4c2c8
			if (*(int32_t *)(g33 + 20) == 0) {
				v8 = v1;
				v7 = v2;
				v6 = v5;
			lab_0x4c33c:;
				int32_t v9 = v6 + 1; // 0x4c33c
				g31 = v9;
				int32_t v10 = v7 + 8; // 0x4c340
				g32 = v10;
				int32_t v11 = v8 + 1; // 0x4c348
				g35 = v11;
				if (v9 >= 4) {
					// break -> 0x4c350
					break;
				}
				v5 = v9;
				v2 = v10;
				v1 = v11;
				// continue -> 0x4c2bc
				continue;
			}
		}
		// 0x4c2d4
		g30 = 0;
		g36 = v2;
		// branch -> 0x4c2dc
		while (true) {
			// 0x4c2dc
			g37 = *(int32_t *)(g33 + 16);
			g38 = (int32_t) * (char *)v1;
			sprintf();
			g34 = v4;
			g34 = CPrintString() + 1;
			int32_t v12 = DiabloAllocPtr(); // 0x4c300
			g34 = v12;
			g37 = v4;
			g29 = v12;
			strcpy();
			int32_t v13 = function_b5348(g29); // 0x4c314
			*(int32_t *)(g36 + 460) = v13;
			if (v13 == 0) {
				// 0x4c324
				g34 = g29;
				mem_free_dbg();
				// branch -> 0x4c32c
			}
			int32_t v14 = g30 + 1; // 0x4c32c
			g30 = v14;
			g36 += 4;
			if (v14 < 2) {
				// 0x4c32c
				v1 = g35;
				// branch -> 0x4c2dc
				continue;
			} else {
				// 0x4c33c
				v8 = g35;
				v7 = g32;
				v6 = g31;
				// branch -> 0x4c33c
				goto lab_0x4c33c;
			}
		}
	}
}

// Address range: 0x4c364 - 0x4c408
int32_t FreeEffects(int32_t a1)
{
	int32_t v1 = g10;                        // 0x4c368
	int32_t v2 = *(int32_t *)(g23 - 0x7618); // 0x4c36c
	g35 = v2;
	int32_t v3 = 0;                          // r26
	int32_t v4 = *(int32_t *)(g23 - 0x7610); // 0x4c374
	if (*(int32_t *)v2 <= 0) {
		// 0x4c364
		// branch -> 0x4c3f4
		// 0x4c3f4
		g10 = v1;
		return g34;
	}
	int32_t result; // 0x4c40415
	while (true) {
		int32_t v5 = 0; // r25
		g32 = v4;
		int32_t v6 = v4; // 0x4c38c
		// branch -> 0x4c38c
		while (true) {
			// 0x4c38c
			g33 = v6;
			int32_t v7 = 0; // r24
			g36 = 0;
			int32_t v8 = 0;  // 0x4c3c011
			int32_t v9 = v6; // 0x4c3a8
			// branch -> 0x4c398
			while (true) {
				int32_t *v10 = (int32_t *)(v9 + 460); // 0x4c398
				int32_t v11 = *v10;                   // 0x4c398
				int32_t v12 = v11;                    // r3
				result = 0;
				int32_t v13 = v9; // 0x4c3c4
				int32_t v14 = v8; // 0x4c3c0
				if (v11 != 0) {
					// 0x4c3a8
					*v10 = g36;
					int32_t *v15 = (int32_t *)(v12 + 28); // 0x4c3ac
					*v15 = g36;
					function_b5498(v12);
					g34 = *v15;
					result = mem_free_dbg();
					v13 = g33;
					v14 = v7;
					// branch -> 0x4c3c0
				}
				int32_t v16 = v14 + 1; // 0x4c3c0
				v7 = v16;
				int32_t v17 = v13 + 4; // 0x4c3c4
				g33 = v17;
				if (v16 >= 2) {
					// break -> 0x4c3d0
					break;
				}
				v8 = v16;
				v9 = v17;
				// continue -> 0x4c398
			}
			int32_t v18 = v5 + 1; // 0x4c3d0
			v5 = v18;
			int32_t v19 = g32 + 8; // 0x4c3d4
			g32 = v19;
			if (v18 >= 4) {
				// break -> 0x4c3e0
				break;
			}
			v6 = v19;
			// continue -> 0x4c38c
		}
		int32_t v20 = v3 + 1; // 0x4c3e4
		v3 = v20;
		if (v20 >= *(int32_t *)g35) {
			// break -> 0x4c3f4
			break;
		}
		v4 += 520;
		// continue -> 0x4c384
	}
	// 0x4c3f4
	g10 = v1;
	return result;
}

// Address range: 0x4c408 - 0x4c4e8
int32_t calc_snd_position(int32_t a1, int32_t a2, int32_t *a3, int32_t a4)
{
	int32_t v1 = g10;                                                  // 0x4c40c
	int32_t v2 = (int32_t)a3;                                          // r30
	int32_t v3 = *(int32_t *)(g23 - 0x77a8);                           // 0x4c41c
	int32_t v4 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v3; // 0x4c438
	int32_t v5 = *(int32_t *)(v4 + 56);                                // 0x4c43c
	int32_t v6 = a1 - v5;                                              // 0x4c444
	int32_t v7 = a2 - *(int32_t *)(v4 + 60);                           // 0x4c448
	*(int32_t *)a4 = 256 * (v6 - v7);
	if (abs(a4) >= 0x1901) {
		// 0x4c468
		// branch -> 0x4c4c8
		// 0x4c4c8
		g10 = v1;
		return 0;
	}
	// 0x4c470
	g34 = v7;
	int32_t v8 = abs(); // 0x4c474
	g34 = v6;
	int32_t v9;
	if (abs() > v8) {
		// 0x4c48c
		g34 = v6;
		v9 = abs();
		// branch -> 0x4c4a0
	} else {
		// 0x4c498
		g34 = v7;
		v9 = abs();
		// branch -> 0x4c4a0
	}
	// 0x4c4a0
	*(int32_t *)v2 = 64 * v9;
	int32_t result; // 0x4c4e4
	if (v5 < 0x1900) {
		// 0x4c4bc
		*(int32_t *)v2 = -v5;
		result = 1;
		// branch -> 0x4c4c8
	} else {
		// 0x4c4b4
		result = 0;
		// branch -> 0x4c4c8
	}
	// 0x4c4c8
	g10 = v1;
	return result;
}

// Address range: 0x4c4e8 - 0x4c640
int32_t PlaySFX_priv(char *a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g36;                        // 0x4c4e8
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0x4c4f0
	g36 = a4;
	int32_t v3 = g35; // 0x4c4f8
	g35 = a3;
	int32_t v4 = g33; // 0x4c500
	g33 = a2;
	int32_t v5 = g32; // 0x4c508
	g32 = (int32_t)a1;
	int32_t v6 = *(int32_t *)(g23 - 0x77a8); // 0x4c510
	int32_t v7;                              // bp-20
	int32_t v8;                              // bp-24
	uint32_t v9;
	int32_t v10;     // 0x4c5f0
	int32_t v11;     // 0x4c608
	int32_t result5; // 0x4c63c
	int32_t result4; // 0x4c594
	int32_t v12;     // 0x4c600
	char v13;        // 0x4c5d0
	int32_t result;  // 0x4c544
	int32_t result2; // 0x4c554
	int32_t result3; // 0x4c564
	int32_t v14;     // 0x4c588
	int32_t v15;     // 0x4c608
	int32_t v16;     // 0x4c5c4
	if (*(char *)(0x55ec * *(int32_t *)v2 + v6 + 0x5592) == 0) {
		// 0x4c544
		result = *(int32_t *)(g23 - 0x72b0);
		if (*(char *)result == 0) {
			// 0x4c620
			g36 = v1;
			g35 = v3;
			g33 = v4;
			g32 = v5;
			return result;
		}
		// 0x4c554
		result2 = *(int32_t *)(g23 - 0x72b8);
		if (*(char *)result2 == 0) {
			// 0x4c620
			g36 = v1;
			g35 = v3;
			g33 = v4;
			g32 = v5;
			return result2;
		}
		// 0x4c564
		result3 = *(int32_t *)(g23 - 0x72bc);
		if (*(char *)result3 != 0) {
			// 0x4c620
			g36 = v1;
			g35 = v3;
			g33 = v4;
			g32 = v5;
			return result3;
		}
		// 0x4c574
		v9 = result3 / 0x1000000;
		if (v9 % 2 == 0) {
			// 0x4c580
			if (__asm_rlwinm_(v9, 0, 30, 30) == 0) {
				// 0x4c588
				v14 = *(int32_t *)(g32 + 8);
				if (v14 != 0) {
					// 0x4c594
					result4 = function_b5114(v14);
					if (result4 != 0) {
						// 0x4c620
						g36 = v1;
						g35 = v3;
						g33 = v4;
						g32 = v5;
						return result4;
					}
				}
			}
		}
		// 0x4c5a0
		v7 = 0;
		v8 = 0;
		if (g33 == 0) {
			// 0x4c5a0
			v13 = *(char *)&g34;
			// branch -> 0x4c5d0
		} else {
			// 0x4c5b4
			v16 = calc_snd_position(g35, g36, &v8, (int32_t)&v7);
			if (v16 == 0) {
				// 0x4c620
				g36 = v1;
				g35 = v3;
				g33 = v4;
				g32 = v5;
				return 0;
			}
			v13 = v16 / 0x1000000;
		}
		// 0x4c5d0
		if (v13 % 2 == 0) {
			// 0x4c5f0
			v10 = g32;
			v11 = v10;
			if (*(int32_t *)(v10 + 8) == 0) {
				// 0x4c5fc
				v12 = function_b5348(*(int32_t *)(v10 + 4));
				*(int32_t *)(g32 + 8) = v12;
				v11 = g32;
				// branch -> 0x4c608
			}
			// 0x4c608
			v15 = *(int32_t *)(v11 + 8);
			if (v15 != 0) {
				// 0x4c614
				result5 = function_b5180(v15, v8, v7);
				// branch -> 0x4c620
			} else {
				result5 = 0;
			}
		} else {
			// 0x4c5dc
			result5 = function_4c110(g32, v8, v7);
			// branch -> 0x4c620
		}
		// 0x4c620
		g36 = v1;
		g35 = v3;
		g33 = v4;
		g32 = v5;
		return result5;
	}
	int32_t result6 = *(int32_t *)(g23 - 0x77f0); // 0x4c534
	if (*(char *)result6 != 1) {
		// 0x4c620
		g36 = v1;
		g35 = v3;
		g33 = v4;
		g32 = v5;
		return result6;
	}
	// 0x4c544
	result = *(int32_t *)(g23 - 0x72b0);
	if (*(char *)result == 0) {
		// 0x4c620
		g36 = v1;
		g35 = v3;
		g33 = v4;
		g32 = v5;
		return result;
	}
	// 0x4c554
	result2 = *(int32_t *)(g23 - 0x72b8);
	if (*(char *)result2 == 0) {
		// 0x4c620
		g36 = v1;
		g35 = v3;
		g33 = v4;
		g32 = v5;
		return result2;
	}
	// 0x4c564
	result3 = *(int32_t *)(g23 - 0x72bc);
	if (*(char *)result3 != 0) {
		// 0x4c620
		g36 = v1;
		g35 = v3;
		g33 = v4;
		g32 = v5;
		return result3;
	}
	// 0x4c574
	v9 = result3 / 0x1000000;
	if (v9 % 2 == 0) {
		// 0x4c580
		if (__asm_rlwinm_(v9, 0, 30, 30) == 0) {
			// 0x4c588
			v14 = *(int32_t *)(g32 + 8);
			if (v14 != 0) {
				// 0x4c594
				result4 = function_b5114(v14);
				if (result4 != 0) {
					// 0x4c620
					g36 = v1;
					g35 = v3;
					g33 = v4;
					g32 = v5;
					return result4;
				}
			}
		}
	}
	// 0x4c5a0
	v7 = 0;
	v8 = 0;
	if (g33 == 0) {
		// 0x4c5a0
		v13 = *(char *)&g34;
		// branch -> 0x4c5d0
	} else {
		// 0x4c5b4
		v16 = calc_snd_position(g35, g36, &v8, (int32_t)&v7);
		if (v16 == 0) {
			// 0x4c620
			g36 = v1;
			g35 = v3;
			g33 = v4;
			g32 = v5;
			return 0;
		}
		v13 = v16 / 0x1000000;
	}
	// 0x4c5d0
	if (v13 % 2 == 0) {
		// 0x4c5f0
		v10 = g32;
		v11 = v10;
		if (*(int32_t *)(v10 + 8) == 0) {
			// 0x4c5fc
			v12 = function_b5348(*(int32_t *)(v10 + 4));
			*(int32_t *)(g32 + 8) = v12;
			v11 = g32;
			// branch -> 0x4c608
		}
		// 0x4c608
		v15 = *(int32_t *)(v11 + 8);
		if (v15 != 0) {
			// 0x4c614
			result5 = function_b5180(v15, v8, v7);
			// branch -> 0x4c620
		} else {
			result5 = 0;
		}
	} else {
		// 0x4c5dc
		result5 = function_4c110(g32, v8, v7);
		// branch -> 0x4c620
	}
	// 0x4c620
	g36 = v1;
	g35 = v3;
	g33 = v4;
	g32 = v5;
	return result5;
}

// Address range: 0x4c640 - 0x4c750
int32_t PlayEffect(int32_t a1, int32_t a2)
{
	int32_t v1 = g36;                        // 0x4c640
	int32_t v2 = g10;                        // 0x4c644
	int32_t v3 = g35;                        // 0x4c64c
	int32_t v4 = *(int32_t *)(g23 - 0x77a8); // 0x4c654
	int32_t v5 = g33;                        // 0x4c658
	g36 = *(int32_t *)(g23 - 0x7754);
	int32_t result = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v4; // 0x4c674
	if (*(char *)(result + 0x5592) != 0) {
		// 0x4c734
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v5;
		return result;
	}
	// 0x4c684
	g37 = 2;
	int32_t result2 = random(-92); // 0x4c68c
	if (*(char *)*(int32_t *)(g23 - 0x72b0) == 0) {
		// 0x4c734
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v5;
		return result2;
	}
	// 0x4c6a0
	if (*(char *)*(int32_t *)(g23 - 0x72b8) != 0) {
		// 0x4c6b0
		if (*(char *)*(int32_t *)(g23 - 0x72bc) == 0) {
			int32_t v6 = 232 * a1; // 0x4c6c0
			g35 = v6;
			int32_t v7 = *(int32_t *)(g36 + v6);                                       // 0x4c6c8
			int32_t v8 = *(int32_t *)(g23 - 0x7610) + 4 * result2 + 520 * v7 + 8 * a2; // 0x4c6e0
			int32_t v9 = *(int32_t *)(v8 + 460);                                       // 0x4c6e4
			g33 = v9;
			int32_t result3; // 0x4c74c
			if (v9 != 0) {
				int32_t v10 = function_b5114(v9); // 0x4c6f8
				if (v10 == 0) {
					int32_t v11 = g35 + g36;              // 0x4c704
					int32_t v12 = *(int32_t *)(v11 + 32); // 0x4c70c
					int32_t v13 = *(int32_t *)(v11 + 36); // 0x4c714
					int32_t v14 = 0;                      // bp-40
					int32_t v15;                          // bp-36
					if (calc_snd_position(v12, v13, &v14, (int32_t)&v15) != 0) {
						// 0x4c724
						result3 = function_b5180(g33, v14, v15);
						// branch -> 0x4c734
					} else {
						result3 = 0;
					}
					// 0x4c734
					g36 = v1;
					g10 = v2;
					g35 = v3;
					g33 = v5;
					return result3;
				}
				result3 = v10;
			} else {
				result3 = v8;
			}
			// 0x4c734
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v5;
			return result3;
		}
	}
	// 0x4c734
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v5;
	return result2;
}

// Address range: 0x4c750 - 0x4c84c
int32_t RndSFX(void)
{
	int32_t v1 = g36; // 0x4c750
	int32_t v2 = g10; // 0x4c754
	int32_t v3 = g34; // 0x4c758
	g36 = v3;
	int32_t result; // 0x4c834
	if (v3 == 788) {
		// 0x4c76c
		g37 = 2;
		// branch -> 0x4c82c
		// 0x4c82c
		result = g36 + random(-91);
		// branch -> 0x4c838
		// 0x4c838
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x4c774
	if (v3 == 727 || v3 == 730 || v3 == 733) {
		// 0x4c77c
		g37 = 3;
		// branch -> 0x4c82c
		// 0x4c82c
		result = g36 + random(-91);
		// branch -> 0x4c838
		// 0x4c838
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x4c7a4
	if (v3 == 576 || v3 == 679 || v3 == 9 || v3 == 86 || v3 == 30 || v3 == 63) {
		// 0x4c7ac
		g37 = 2;
		// branch -> 0x4c82c
		// 0x4c82c
		result = g36 + random(-91);
		// branch -> 0x4c838
		// 0x4c838
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x4c804
	int32_t result2;
	if (v3 == 16) {
		// 0x4c80c
		g37 = 2;
		// branch -> 0x4c82c
		// 0x4c82c
		result2 = g36 + random(-91);
		// branch -> 0x4c838
	} else {
		// 0x4c814
		if (v3 == 715) {
			// 0x4c81c
			g37 = 3;
			// branch -> 0x4c82c
			// 0x4c82c
			result2 = g36 + random(-91);
			// branch -> 0x4c838
		} else {
			result2 = v3;
		}
	}
	// 0x4c838
	g36 = v1;
	g10 = v2;
	return result2;
}

// Address range: 0x4c84c - 0x4c888
int32_t PlaySFX(int32_t a1)
{
	int32_t v1 = RndSFX();                                                 // 0x4c858
	int32_t result = PlaySFX_priv((char *)(12 * v1 - 384 + g23), 0, 0, 0); // 0x4c874
	return result;
}

// Address range: 0x4c888 - 0x4c910
int32_t PlaySfxLoc(int32_t a1)
{
	int32_t v1 = g36; // 0x4c888
	int32_t v2 = g10; // 0x4c88c
	g36 = g23 - 384;
	int32_t v3 = g35; // 0x4c894
	g35 = g38;
	int32_t v4 = g33; // 0x4c89c
	g33 = a1;
	int32_t v5 = RndSFX(); // 0x4c8ac
	int32_t result;        // 0x4c8f0
	if (v5 < 0 || v5 > 3) {
		// 0x4c8dc
		result = PlaySFX_priv((char *)(g36 + 12 * v5), 1, g33, g35);
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return result;
	}
	int32_t v6 = *(int32_t *)(g36 + 12 * v5 + 8); // 0x4c8c8
	if (v6 != 0) {
		// 0x4c8d4
		*(int32_t *)(v6 + 36) = 0;
		// branch -> 0x4c8dc
	}
	// 0x4c8dc
	result = PlaySFX_priv((char *)(g36 + 12 * v5), 1, g33, g35);
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	return result;
}

// Address range: 0x4c910 - 0x4c9a0
int32_t FreeMonsterSnd(void)
{
	int32_t v1 = g10; // 0x4c914
	g36 = *(int32_t *)(g23 - 0x7618);
	snd_update(1);
	int32_t result = function_4c224(sfx_stop()); // 0x4c930
	int32_t v2 = *(int32_t *)(g23 - 0x7610);           // 0x4c934
	g32 = v2;
	g31 = 0;
	if (*(int32_t *)g36 <= 0) {
		// 0x4c98c
		g10 = v1;
		return result;
	}
	int32_t result2; // 0x4c954
	while (true) {
		// 0x4c940
		g30 = 0;
		g33 = v2;
		int32_t v3 = v2; // 0x4c94c
		// branch -> 0x4c948
		while (true) {
			// 0x4c948
			g29 = 0;
			g35 = v3;
			result2 = function_b50dc(*(int32_t *)(v3 + 460));
			int32_t v4 = g29 + 1; // 0x4c958
			g29 = v4;
			int32_t v5 = g35 + 4; // 0x4c95c
			g35 = v5;
			// branch -> 0x4c950
			while (v4 < 2) {
				// 0x4c950
				result2 = function_b50dc(*(int32_t *)(v5 + 460));
				v4 = g29 + 1;
				g29 = v4;
				v5 = g35 + 4;
				g35 = v5;
				// continue -> 0x4c950
			}
			int32_t v6 = g30 + 1; // 0x4c968
			g30 = v6;
			int32_t v7 = g33 + 8; // 0x4c96c
			g33 = v7;
			if (v6 >= 4) {
				// break -> 0x4c978
				break;
			}
			v3 = v7;
			// continue -> 0x4c948
		}
		int32_t v8 = g32 + 520; // 0x4c978
		g32 = v8;
		int32_t v9 = g31 + 1; // 0x4c97c
		g31 = v9;
		if (v9 >= *(int32_t *)g36) {
			// break -> 0x4c98c
			break;
		}
		v2 = v8;
		// continue -> 0x4c940
	}
	// 0x4c98c
	g10 = v1;
	return result2;
}

// Address range: 0x4c9a0 - 0x4c9d8
int32_t sound_update(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x72b0); // 0x4c9a4
	int32_t result;                          // 0x4c9d4
	if (*(char *)v1 != 0) {
		// 0x4c9bc
		result = effects_update(snd_update(0));
		// branch -> 0x4c9c8
	} else {
		result = v1;
	}
	// 0x4c9c8
	return result;
}

// Address range: 0x4c9d8 - 0x4ca40
int32_t effects_cleanup_sfx(int32_t a1)
{
	int32_t v1 = g36; // 0x4c9d8
	int32_t v2 = g35; // 0x4c9e0
	FreeMonsterSnd();
	int32_t v3 = g23 - 384; // 0x4c9f4
	g35 = v3;
	int32_t v4 = 0; // r29
	g36 = 0;
	int32_t v5 = 0; // 0x4ca142
	// branch -> 0x4ca00
	int32_t result; // r3
	while (true) {
		int32_t v6 = *(int32_t *)(v3 + 8); // 0x4ca00
		result = v6;
		int32_t v7 = v3; // 0x4ca18
		int32_t v8 = v5; // 0x4ca14
		if (v6 != 0) {
			// 0x4ca0c
			result = function_b5498(v6);
			*(int32_t *)(g35 + 8) = g36;
			v7 = g35;
			v8 = v4;
			// branch -> 0x4ca14
		}
		int32_t v9 = v8 + 1; // 0x4ca14
		v4 = v9;
		int32_t v10 = v7 + 12; // 0x4ca18
		g35 = v10;
		if (v9 >= 858) {
			// break -> 0x4ca24
			break;
		}
		v5 = v9;
		v3 = v10;
		// continue -> 0x4ca00
	}
	// 0x4ca24
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0x4ca40 - 0x4cb10
int32_t priv_sound_init(int32_t result)
{
	int32_t v1 = g35; // 0x4ca4c
	int32_t v2 = g33; // 0x4ca50
	int32_t v3 = g32; // 0x4ca54
	if (*(char *)*(int32_t *)(g23 - 0x72b0) == 0) {
		// 0x4caf0
		g35 = v1;
		g33 = v2;
		g32 = v3;
		return result;
	}
	// 0x4ca6c
	g36 = g23 - 384;
	g35 = (result ^ __asm_rlwinm(result, 0, 25, 27)) % 256;
	g33 = __asm_rlwinm(result, 0, 25, 27);
	g32 = 0;
	int32_t v4 = g36; // 0x4ca90
	// branch -> 0x4ca84
	while (true) {
		// 0x4ca84
		int32_t v5; // 0x4cad4
		int32_t v6; // 0x4cad8
		if (*(int32_t *)(v4 + 8) == 0) {
			unsigned char v7 = *(char *)v4; // 0x4ca90
			int32_t v8 = v7;                // 0x4ca90
			if (v7 % 2 == 0) {
				int32_t v9 = g35; // 0x4ca9c
				if (v9 != 0) {
					// 0x4caa4
					if ((v9 & v8) == 0) {
					lab_0x4cad4_2:
						// 0x4cad4
						v5 = g32 + 1;
						g32 = v5;
						v6 = g36 + 12;
						g36 = v6;
						if (v5 >= 858) {
							// break -> 0x4cae4
							break;
						}
						v4 = v6;
						// continue -> 0x4ca84
						continue;
					}
				}
				// 0x4caac
				if (__asm_rlwinm_(v8, 0, 25, 27) == 0) {
				lab_0x4cabc:
					// 0x4cabc
					g34 = 1;
					Sleep(1);
					int32_t v10 = function_b5348(*(int32_t *)(g36 + 4)); // 0x4cacc
					*(int32_t *)(g36 + 8) = v10;
					// branch -> 0x4cad4
					goto lab_0x4cad4_2;
				} else {
					// 0x4cab4
					if ((g33 & v8) == 0) {
						goto lab_0x4cad4_2;
					}
					goto lab_0x4cabc;
				}
			}
		}
		// 0x4cad4
		v5 = g32 + 1;
		g32 = v5;
		v6 = g36 + 12;
		g36 = v6;
		if (v5 >= 858) {
			// break -> 0x4cae4
			break;
		}
		v4 = v6;
		// continue -> 0x4ca84
	}
	// 0x4cae4
	g34 = 1;
	// branch -> 0x4caf0
	// 0x4caf0
	g35 = v1;
	g33 = v2;
	g32 = v3;
	return Sleep(1);
}

// Address range: 0x4cb10 - 0x4cbac
int32_t stream_update(int32_t a1)
{
	int32_t v1 = g36; // 0x4cb10
	int32_t v2 = g10; // 0x4cb14
	g36 = 0;
	int32_t result; // 0x4cb94
	if ((*(char *)*(int32_t *)(g23 - 0x77f0) || 1) != 1) {
		// 0x4cb34
		g36 = 112;
		// branch -> 0x4cb90
		// 0x4cb90
		result = priv_sound_init(112);
		g36 = v1;
		g10 = v2;
		return result;
	}
	int32_t v3 = *(int32_t *)(g23 - 0x77ac); // 0x4cb3c
	int32_t v4 = *(int32_t *)(g23 - 0x77a8); // 0x4cb40
	g37 = v4;
	char v5 = *(char *)(0x55ec * *(int32_t *)v3 + v4 + 348); // 0x4cb50
	if (v5 == 0) {
		// 0x4cb5c
		g36 = 32;
		// branch -> 0x4cb90
		// 0x4cb90
		result = priv_sound_init(32);
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x4cb64
	if (v5 == 1) {
		// 0x4cb70
		g36 = 16;
		// branch -> 0x4cb90
		// 0x4cb90
		result = priv_sound_init(16);
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x4cb78
	int32_t v6; // 0x4cb90
	if (v5 == 2) {
		// 0x4cb80
		g36 = 64;
		v6 = 64;
		// branch -> 0x4cb90
	} else {
		// 0x4cb88
		app_fatal(*(int32_t *)(g23 - 0x62a8));
		v6 = g36;
		// branch -> 0x4cb90
	}
	// 0x4cb90
	result = priv_sound_init(v6);
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0x4cbac - 0x4cbd0
int32_t sound_init(int32_t a1)
{
	int32_t result = priv_sound_init(4); // 0x4cbbc
	return result;
}

// Address range: 0x4cbd0 - 0x4cca0
int32_t effects_play_sound(int32_t result)
{
	int32_t v1 = g10;       // 0x4cbd4
	int32_t v2 = g23 - 384; // 0x4cbe0
	if (*(char *)*(int32_t *)(g23 - 0x72b0) == 0) {
		// 0x4cc80
		g10 = v1;
		return result;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x72b8); // 0x4cc04
	if (*(char *)result2 == 0) {
		// 0x4cc80
		g10 = v1;
		return result2;
	}
	int32_t v3 = 0;  // r29
	int32_t v4 = v2; // r30
	int32_t v5 = v2; // 0x4cc20
	// branch -> 0x4cc20
	while (true) {
		int32_t v6 = *(int32_t *)(v5 + 4); // 0x4cc20
		g34 = v6;
		int32_t result5 = _strcmpi(v6, result); // 0x4cc28
		int32_t v7 = v4;                        // 0x4cc38
		int32_t v8;                             // 0x4cc70
		int32_t v9;                             // 0x4cc74
		if (result5 == 0) {
			// 0x4cc38
			if (*(int32_t *)(v7 + 8) != 0) {
				int32_t v10 = v2 + 12 * v3 + 8;                    // 0x4cc4c
				int32_t result3 = function_b5114(*(int32_t *)v10); // 0x4cc50
				if (result3 != 0) {
					// 0x4cc80
					g10 = v1;
					return result3;
				}
				int32_t result4 = function_b5180(*(int32_t *)v10, 0, 0); // 0x4cc68
				// branch -> 0x4cc80
				// 0x4cc80
				g10 = v1;
				return result4;
			}
			// 0x4cc70
			v8 = v3 + 1;
			v3 = v8;
			v9 = v7 + 12;
			v4 = v9;
			if (v8 >= 858) {
				// 0x4cc80
				g10 = v1;
				return result5;
			}
		lab_0x4cc70:
			// 0x4cc70
			v5 = v9;
			// branch -> 0x4cc20
			continue;
		}
		// 0x4cc70
		v8 = v3 + 1;
		v3 = v8;
		v9 = v7 + 12;
		v4 = v9;
		if (v8 < 858) {
			goto lab_0x4cc70;
		}
		// 0x4cc80
		g10 = v1;
		return result5;
	}
}
