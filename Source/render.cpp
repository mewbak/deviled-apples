
// Address range: 0xd00a8 - 0xd0130
int32_t function_d00a8(char *a1)
{
	// 0xd00a8
	g34 = (int32_t)a1;
	int32_t v1 = g10; // 0xd00ac
	g35 = g23 - 0x2ae8;
	int32_t result = 0;
	if (*(char *)&g34 == 47) {
		int32_t v2 = g34; // 0xd00d0
		int32_t v3;       // bp-152
		int32_t v4 = &v3; // 0xd00d4
		g33 = v4;
		g36 = v2;
		g31 = 0;
		int32_t v5 = g31; // 0xd01084
		if (v5 < CPrintString() + 1) {
			int32_t v6 = g36; // 0xd00e4
			g31 = v5 + 1;
			g36 = v6 + 1;
			*(char *)g33 = *(char *)(g35 + (int32_t) * (char *)v6);
			g33++;
			g34 = v2;
			while (g31 < CPrintString() + 1) {
				// 0xd00e4
				v6 = g36;
				g31++;
				g36 = v6 + 1;
				*(char *)g33 = *(char *)(g35 + (int32_t) * (char *)v6);
				g33++;
				g34 = v2;
				// continue -> 0xd00e4
			}
			// 0xd0110
			function_cfc4c(v4);
			// branch -> 0xd011c
			// 0xd011c
			g10 = v1;
			return 1;
		}
		// 0xd0110
		function_cfc4c(v4);
		result = 1;
		// branch -> 0xd011c
	}
	// 0xd011c
	g10 = v1;
	return result;
}

// Address range: 0xd0130 - 0xd0188
int32_t function_d0130(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x54d0); // 0xd0134
	int32_t v1 = 0;                              // r6
	int32_t v2 = result + 4;                     // 0xd0140
	*(int32_t *)v2 = 0;
	*(int32_t *)(result + 8) = v1;
	*(int32_t *)result = v1;
	*(int32_t *)v2 = v2;
	*(int32_t *)(result + 8) = -5 - result;
	return result;
}

// Address range: 0xd0188 - 0xd02a0
int32_t function_d0188(int32_t *a1, int32_t a2)
{
	int32_t v1 = (int32_t)a1; // 0xd0190
	int32_t result = v1;      // r31
	if (v1 == 0) {
		// 0xd0288
		return result;
	}
	while (true) {
		// 0xd0204
		// branch -> 0xd0204
		int32_t v2; // r0
		int32_t v3; // r6
		int32_t v4;
		int32_t v5;
		while (true) {
			int32_t v6 = *(int32_t *)(v1 + 8); // 0xd0204
			v4 = v6 > 0 ? v6 : 0;
			v3 = v4;
			if (v4 == 0) {
				int32_t v7 = v1 + 4; // 0xd0224
				if (v7 != 0) {
					int32_t v8 = *(int32_t *)v7; // 0xd022c
					if (v8 != 0) {
						// 0xd0238
						int32_t v9;
						if (v6 > 0) {
							// 0xd0248
							v9 = 4 - *(int32_t *)(v8 + 4) + v1 + v6;
							// branch -> 0xd0258
						} else {
							// 0xd0240
							v9 = -1 - v6;
							// branch -> 0xd0258
						}
						// 0xd0258
						*(int32_t *)v9 = v8;
						v2 = 0;
						int32_t v10 = *(int32_t *)(result + 4); // 0xd0264
						*(int32_t *)(v10 + 4) = *(int32_t *)(result + 8);
						*(int32_t *)(result + 4) = v2;
						*(int32_t *)(result + 8) = v2;
						// branch -> 0xd0274
					}
				}
				int32_t v11 = 0x10000 * a2; // 0xd0274
				if (v11 >= 0 && (v11 || 0xffff) >= 0x1ffff) {
					// 0xd027c
					g34 = result;
					function_eb470(result);
					// branch -> 0xd0288
				}
				// 0xd0288
				return result;
			}
			// 0xd01bc
			v5 = *(int32_t *)v4;
			if (v5 != 0) {
				// break -> 0xd01c8
				break;
			}
			// continue -> 0xd0204
		}
		int32_t v12 = *(int32_t *)(v4 + 4); // 0xd01c8
		int32_t v13;
		if (v12 > 0) {
			// 0xd01dc
			v13 = v4 - *(int32_t *)(v5 + 4) + v12;
			// branch -> 0xd01e8
		} else {
			// 0xd01d4
			v13 = -1 - v12;
			// branch -> 0xd01e8
		}
		// 0xd01e8
		*(int32_t *)v13 = v5;
		v2 = 0;
		int32_t v14 = v3; // 0xd01f0
		*(int32_t *)(*(int32_t *)v14 + 4) = *(int32_t *)(v14 + 4);
		*(int32_t *)v3 = v2;
		*(int32_t *)(v3 + 4) = v2;
		v1 = result;
		// branch -> 0xd0204
	}
}

// Address range: 0xd02a0 - 0xd035c
int32_t function_d02a0(int32_t a1, int32_t a2, int32_t *a3, int32_t a4)
{
	int32_t v1;       // bp-88
	int32_t v2 = &v1; // 0xd02cc
	g34 = v2;
	int32_t v3 = function_e9fb8(v2); // 0xd02d0
	int32_t result = v3;             // 0xd0358
	if ((0x10000 * v3 || 0xffff) < 0x1ffff) {
		// 0xd02e4
		g34 = v2;
		int32_t v4 = function_ea030(v2); // 0xd02fc
		int32_t v5 = 0x10000 * v4;       // 0xd0304
		if ((v5 || 0xffff) < 0x1ffff) {
			// 0xd0310
			if ((int32_t)a3 != 0) {
				// 0xd0318
				// branch -> 0xd0320
			}
			// 0xd0320
			if (a4 != 0) {
				// 0xd0328
				*(int32_t *)a4 = v1;
				*(int32_t *)(a4 + 4) = v5 / 0x10000;
				// branch -> 0xd0338
			}
			// 0xd0338
			result = 0;
			// branch -> 0xd033c
		} else {
			result = v4;
		}
	}
	// 0xd033c
	return result;
}

// Address range: 0xd035c - 0xd0424
int32_t function_d035c(int32_t *a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = (int32_t)a1;
	int32_t v2 = v1 - *(int32_t *)*(int32_t *)(g23 - 0x7808); // 0xd0368
	if (v2 < 0) {
		// 0xd041c
		return 1;
	}
	int32_t v3 = v2 + 1023; // 0xd0370
	if (v3 > 0x2aff) {
		// 0xd0400
		*a1 = v1 - 0x2d00;
		*(int32_t *)a2 = a2 + 256;
		return 0;
	}
	int32_t v4 = *(int32_t *)(*(int32_t *)(g23 - 0x6e74) + 4 * v3 / 256); // 0xd0390
	int32_t v5 = *(int32_t *)((v4 & -4) + *(int32_t *)(g23 - 0x6e78));    // 0xd03a4
	*(int32_t *)a2 = v5 + a2;
	int32_t v6 = v4 / 2 | v4 & -0x80000000; // 0xd03b8
	*(int32_t *)v1 = v1 - 192 * v4;
	*(int32_t *)a3 = a3 + v6;
	if (a4 != 0) {
		int32_t v7 = __asm_rlwinm_(v6, 0, 30, 30) != 0;
		int32_t *v8 = (int32_t *)*(int32_t *)(g23 - 0x6e7c); // 0xd03f0
		*v8 = *v8 ^ v7;
		// branch -> 0xd041c
	}
	// 0xd041c
	return 1;
}

// Address range: 0xd0424 - 0xd04ec
int32_t function_d0424(int32_t *a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = (int32_t)a1;
	int32_t v2 = v1 - *(int32_t *)*(int32_t *)(g23 - 0x7808); // 0xd0430
	if (v2 < 0) {
		// 0xd04e4
		return 1;
	}
	int32_t v3 = v2 + 1023; // 0xd0438
	if (v3 > 0x2dff) {
		// 0xd04c8
		*a1 = v1 - 0x3000;
		*(int32_t *)a2 = a2 + 288;
		return 0;
	}
	int32_t v4 = *(int32_t *)(*(int32_t *)(g23 - 0x6e74) + 4 * v3 / 256); // 0xd0458
	int32_t v5 = *(int32_t *)((v4 & -4) + *(int32_t *)(g23 - 0x6e80));    // 0xd046c
	*(int32_t *)a2 = v5 + a2;
	int32_t v6 = v4 / 2 | v4 & -0x80000000; // 0xd0480
	*(int32_t *)v1 = v1 - 192 * v4;
	*(int32_t *)a3 = a3 - v6;
	if (a4 != 0) {
		int32_t v7 = __asm_rlwinm_(v6, 0, 30, 30) != 0;
		int32_t *v8 = (int32_t *)*(int32_t *)(g23 - 0x6e7c); // 0xd04b8
		*v8 = *v8 ^ v7;
		// branch -> 0xd04e4
	}
	// 0xd04e4
	return 1;
}

// Address range: 0xd04ec - 0xd065c
int32_t world_draw_black_tile_part(uint32_t a1, int32_t a2)
{
	int32_t v1 = a1;  // r4
	int32_t v2 = 30;  // r10
	int32_t v3 = 60;  // r9
	int32_t v4 = 30;  // 0xd0500
	int32_t v5 = g34; // 0xd0500
	int32_t v6 = 60;  // 0xd04fc
	// branch -> 0xd04fc
	int32_t v7;  // ctr
	int32_t v8;  // r3
	int32_t v9;  // r5
	int32_t v10; // r8
	int32_t v11; // 0xd0598
	while (true) {
		int32_t v12 = 64 - v6; // 0xd04fc
		v9 = v12;
		int32_t v13 = v5 + v4; // 0xd0500
		v10 = v13;
		v8 = v12 + v13;
		int32_t v14 = v12; // 0xd0520
		if (v12 % 2 != 0) {
			// 0xd0514
			*(char *)v13 = (char)(a1 % 256);
			v10++;
			int32_t v15 = v9 - 1; // 0xd051c
			v9 = v15;
			v14 = v15;
			// branch -> 0xd0520
		}
		// 0xd0520
		uint32_t v16; // 0xd0538
		if (__asm_rlwinm_(v14, 0, 30, 30) == 0) {
			// 0xd0520
			v16 = v9;
			// branch -> 0xd0534
		} else {
			// 0xd0528
			*(int16_t *)v10 = (int16_t)(0x10000 * a1 / 0x10000);
			v10 += 2;
			v16 = v9 - 2;
			// branch -> 0xd0534
		}
		int32_t v17 = v16 / 4; // 0xd0538
		v9 = v17;
		int32_t v18; // 0xd058c
		int32_t v19; // 0xd0590
		int32_t v20; // 0xd0594
		if (v16 >= 4) {
			int32_t v21 = __asm_rlwinm_(v17, 29, 3, 31); // 0xd0540
			v7 = v21;
			int32_t v22; // 0xd057c
			int32_t v23;
			if (v21 == 0) {
				// 0xd0540
				v23 = v10;
				v22 = v9;
				// branch -> 0xd057c
			lab_0xd057c:
				// 0xd057c
				*(int32_t *)v23 = v1;
				int32_t v24 = v10 + 4; // 0xd0584
				int32_t v25 = v22 - 1; // 0xd0588
				// branch -> 0xd0580
				while (v25 != 0) {
					// 0xd0580
					*(int32_t *)v24 = v1;
					v24 += 4;
					v25--;
					// continue -> 0xd0580
				}
			lab_0xd058c:
				// 0xd058c
				v18 = v2;
				v19 = v3 - 4;
				v3 = v19;
				v20 = v18 - 2;
				v2 = v20;
				v11 = v8 + v18 - 832;
				if (v20 <= 0xffffffff) {
					// break -> 0xd05a0
					break;
				}
				v4 = v20;
				v5 = v11;
				v6 = v19;
				// continue -> 0xd04fc
				continue;
			} else {
				// 0xd054c
				*(int32_t *)v10 = v1;
				*(int32_t *)(v10 + 4) = v1;
				*(int32_t *)(v10 + 8) = v1;
				*(int32_t *)(v10 + 12) = v1;
				*(int32_t *)(v10 + 16) = v1;
				*(int32_t *)(v10 + 20) = v1;
				*(int32_t *)(v10 + 24) = v1;
				*(int32_t *)(v10 + 28) = v1;
				int32_t v26 = v10 + 32; // 0xd056c
				v10 = v26;
				int32_t v27 = v7 - 1; // 0xd0570
				// branch -> 0xd054c
				while (v27 != 0) {
					// 0xd054c
					*(int32_t *)v26 = v1;
					*(int32_t *)(v10 + 4) = v1;
					*(int32_t *)(v10 + 8) = v1;
					*(int32_t *)(v10 + 12) = v1;
					*(int32_t *)(v10 + 16) = v1;
					*(int32_t *)(v10 + 20) = v1;
					*(int32_t *)(v10 + 24) = v1;
					*(int32_t *)(v10 + 28) = v1;
					v26 = v10 + 32;
					v10 = v26;
					v27--;
					// continue -> 0xd054c
				}
				int32_t v28 = v9 % 8; // 0xd0574
				if (v28 == 0) {
					goto lab_0xd058c;
				}
				v23 = v26;
				v22 = v28;
				goto lab_0xd057c;
			}
		}
		// 0xd058c
		v18 = v2;
		v19 = v3 - 4;
		v3 = v19;
		v20 = v18 - 2;
		v2 = v20;
		v11 = v8 + v18 - 832;
		if (v20 <= 0xffffffff) {
			// break -> 0xd05a0
			break;
		}
		v4 = v20;
		v5 = v11;
		v6 = v19;
		// continue -> 0xd04fc
	}
	// 0xd05a0
	v2 = 2;
	v3 = 4;
	int32_t v29 = 2;   // 0xd05b4
	int32_t v30 = v11; // 0xd05b4
	int32_t v31 = 4;   // 0xd05b0
	// branch -> 0xd05b0
	int32_t result; // 0xd0650
	while (true) {
		int32_t v32 = 64 - v31; // 0xd05b0
		v9 = v32;
		int32_t v33 = v30 + v29; // 0xd05b4
		v10 = v33;
		v8 = v32 + v33;
		int32_t v34 = v32; // 0xd05d4
		if (v32 % 2 != 0) {
			// 0xd05c8
			*(char *)v33 = (char)(v1 % 256);
			v10++;
			int32_t v35 = v9 - 1; // 0xd05d0
			v9 = v35;
			v34 = v35;
			// branch -> 0xd05d4
		}
		// 0xd05d4
		uint32_t v36; // 0xd05ec
		if (__asm_rlwinm_(v34, 0, 30, 30) == 0) {
			// 0xd05d4
			v36 = v9;
			// branch -> 0xd05e8
		} else {
			// 0xd05dc
			*(int16_t *)v10 = (int16_t)(0x10000 * v1 / 0x10000);
			v10 += 2;
			v36 = v9 - 2;
			// branch -> 0xd05e8
		}
		int32_t v37 = v36 / 4; // 0xd05ec
		v9 = v37;
		int32_t v38; // 0xd0640
		int32_t v39; // 0xd0644
		int32_t v40; // 0xd064c
		if (v36 >= 4) {
			int32_t v41 = __asm_rlwinm_(v37, 29, 3, 31); // 0xd05f4
			v7 = v41;
			int32_t v42; // 0xd0630
			int32_t v43;
			if (v41 == 0) {
				// 0xd05f4
				v43 = v10;
				v42 = v9;
				// branch -> 0xd0630
			lab_0xd0630:
				// 0xd0630
				*(int32_t *)v43 = v1;
				int32_t v44 = v10 + 4; // 0xd0638
				int32_t v45 = v42 - 1; // 0xd063c
				// branch -> 0xd0634
				while (v45 != 0) {
					// 0xd0634
					*(int32_t *)v44 = v1;
					v44 += 4;
					v45--;
					// continue -> 0xd0634
				}
			lab_0xd0640:
				// 0xd0640
				v38 = v2;
				v39 = v38 + 2;
				v2 = v39;
				v40 = v3 + 4;
				v3 = v40;
				result = v8 + v38 - 832;
				if (v39 >= 31) {
					// break -> 0xd0658
					break;
				}
				v29 = v39;
				v30 = result;
				v31 = v40;
				// continue -> 0xd05b0
				continue;
			} else {
				// 0xd0600
				*(int32_t *)v10 = v1;
				*(int32_t *)(v10 + 4) = v1;
				*(int32_t *)(v10 + 8) = v1;
				*(int32_t *)(v10 + 12) = v1;
				*(int32_t *)(v10 + 16) = v1;
				*(int32_t *)(v10 + 20) = v1;
				*(int32_t *)(v10 + 24) = v1;
				*(int32_t *)(v10 + 28) = v1;
				int32_t v46 = v10 + 32; // 0xd0620
				v10 = v46;
				int32_t v47 = v7 - 1; // 0xd0624
				// branch -> 0xd0600
				while (v47 != 0) {
					// 0xd0600
					*(int32_t *)v46 = v1;
					*(int32_t *)(v10 + 4) = v1;
					*(int32_t *)(v10 + 8) = v1;
					*(int32_t *)(v10 + 12) = v1;
					*(int32_t *)(v10 + 16) = v1;
					*(int32_t *)(v10 + 20) = v1;
					*(int32_t *)(v10 + 24) = v1;
					*(int32_t *)(v10 + 28) = v1;
					v46 = v10 + 32;
					v10 = v46;
					v47--;
					// continue -> 0xd0600
				}
				int32_t v48 = v9 % 8; // 0xd0628
				if (v48 == 0) {
					goto lab_0xd0640;
				}
				v43 = v46;
				v42 = v48;
				goto lab_0xd0630;
			}
		}
		// 0xd0640
		v38 = v2;
		v39 = v38 + 2;
		v2 = v39;
		v40 = v3 + 4;
		v3 = v40;
		result = v8 + v38 - 832;
		if (v39 >= 31) {
			// break -> 0xd0658
			break;
		}
		v29 = v39;
		v30 = result;
		v31 = v40;
		// continue -> 0xd05b0
	}
	// 0xd0658
	return result;
}

// Address range: 0xd065c - 0xd06d8
int32_t function_d065c(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd0664
	int32_t v2 = 32;                  // r30
	int32_t v3 = result;              // bp+24
	if (result < *(int32_t *)v1) {
		// 0xd06bc
		return result;
	}
	while (true) {
		// 0xd0698
		function_d9754((char *)&v3, (int32_t)&a2, a3);
		int32_t result2 = v3; // 0xd06a8
		int32_t v4 = v2 - 1;  // 0xd06ac
		v2 = v4;
		int32_t result3 = result2 - 800; // 0xd06b0
		v3 = result3;
		if (v4 == 0) {
			// 0xd06bc
			return result2;
		}
		// 0xd0698
		if (result3 < *(int32_t *)v1) {
			// 0xd06bc
			return result3;
		}
		// 0xd0698
		// branch -> 0xd0698
	}
}

// Address range: 0xd06d8 - 0xd084c
int32_t function_d06d8(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd06dc
	int32_t v2 = 8;                   // ctr
	int32_t v3 = 32;                  // r6
	int32_t v4 = 0;                   // r3
	int32_t result = v4;
	if (result < *(int32_t *)v1) {
		// bb
		return result;
	}
	int32_t result5; // 0xd0840
	while (true) {
		int32_t v5 = 0; // r4
		*(int32_t *)result = *(int32_t *)v5;
		*(int32_t *)(v4 + 4) = *(int32_t *)(v5 + 4);
		*(int32_t *)(v4 + 8) = *(int32_t *)(v5 + 8);
		*(int32_t *)(v4 + 12) = *(int32_t *)(v5 + 12);
		*(int32_t *)(v4 + 16) = *(int32_t *)(v5 + 16);
		*(int32_t *)(v4 + 20) = *(int32_t *)(v5 + 20);
		*(int32_t *)(v4 + 24) = *(int32_t *)(v5 + 24);
		int32_t v6 = v5; // 0xd072c
		v5 = v6 + 32;
		*(int32_t *)(v4 + 28) = *(int32_t *)(v6 + 28);
		int32_t result2 = v4 - 768; // 0xd0738
		v4 = result2;
		if (result2 < *(int32_t *)v1) {
			// bb142
			return result2;
		}
		// 0xd0748
		*(int32_t *)result2 = *(int32_t *)v5;
		*(int32_t *)(v4 + 4) = *(int32_t *)(v5 + 4);
		*(int32_t *)(v4 + 8) = *(int32_t *)(v5 + 8);
		*(int32_t *)(v4 + 12) = *(int32_t *)(v5 + 12);
		*(int32_t *)(v4 + 16) = *(int32_t *)(v5 + 16);
		*(int32_t *)(v4 + 20) = *(int32_t *)(v5 + 20);
		*(int32_t *)(v4 + 24) = *(int32_t *)(v5 + 24);
		int32_t v7 = v5; // 0xd0784
		v5 = v7 + 32;
		*(int32_t *)(v4 + 28) = *(int32_t *)(v7 + 28);
		int32_t result3 = v4 - 768; // 0xd0790
		v4 = result3;
		if (result3 < *(int32_t *)v1) {
			// bb143
			return result3;
		}
		// 0xd07a0
		*(int32_t *)result3 = *(int32_t *)v5;
		*(int32_t *)(v4 + 4) = *(int32_t *)(v5 + 4);
		*(int32_t *)(v4 + 8) = *(int32_t *)(v5 + 8);
		*(int32_t *)(v4 + 12) = *(int32_t *)(v5 + 12);
		*(int32_t *)(v4 + 16) = *(int32_t *)(v5 + 16);
		*(int32_t *)(v4 + 20) = *(int32_t *)(v5 + 20);
		*(int32_t *)(v4 + 24) = *(int32_t *)(v5 + 24);
		int32_t v8 = v5; // 0xd07dc
		v5 = v8 + 32;
		*(int32_t *)(v4 + 28) = *(int32_t *)(v8 + 28);
		int32_t result4 = v4 - 768; // 0xd07e8
		v4 = result4;
		if (result4 < *(int32_t *)v1) {
			// bb144
			return result4;
		}
		// 0xd07f8
		v3 -= 3;
		*(int32_t *)result4 = *(int32_t *)v5;
		*(int32_t *)(v4 + 4) = *(int32_t *)(v5 + 4);
		*(int32_t *)(v4 + 8) = *(int32_t *)(v5 + 8);
		*(int32_t *)(v4 + 12) = *(int32_t *)(v5 + 12);
		*(int32_t *)(v4 + 16) = *(int32_t *)(v5 + 16);
		*(int32_t *)(v4 + 20) = *(int32_t *)(v5 + 20);
		*(int32_t *)(v4 + 24) = *(int32_t *)(v5 + 24);
		*(int32_t *)(v4 + 28) = *(int32_t *)(v5 + 28);
		result5 = v4 - 768;
		v4 = result5;
		int32_t v9 = v2 - 1; // 0xd0844
		v2 = v9;
		if (v9 == 0) {
			// 0xd0848
			return result5;
		}
		// 0xd07f8
		if (result5 < *(int32_t *)v1) {
			// break -> bb
			break;
		}
		result = result5;
		// continue -> 0xd06f4
	}
	// bb
	return result5;
}

// Address range: 0xd084c - 0xd0934
int32_t function_d084c(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd0850
	int32_t v2 = 8;                   // ctr
	int32_t v3 = 32;                  // r6
	int32_t v4 = 0;                   // r0
	int32_t v5 = 0;                   // r3
	int32_t result = v5;
	if (result < *(int32_t *)v1) {
		// bb
		return result;
	}
	int32_t v6 = 0; // 0xd086c
	while (true) {
		// 0xd086c
		*(int32_t *)(result + 28) = v6;
		*(int32_t *)(v5 + 24) = v4;
		*(int32_t *)(v5 + 20) = v4;
		*(int32_t *)(v5 + 16) = v4;
		*(int32_t *)(v5 + 12) = v4;
		*(int32_t *)(v5 + 8) = v4;
		*(int32_t *)(v5 + 4) = v4;
		*(int32_t *)v5 = v4;
		int32_t v7 = v5;            // 0xd088c
		int32_t result2 = v7 - 768; // 0xd088c
		v5 = result2;
		if (result2 < *(int32_t *)v1) {
			// bb142
			return result2;
		}
		// 0xd089c
		*(int32_t *)(v7 - 740) = v4;
		*(int32_t *)(v5 + 24) = v4;
		*(int32_t *)(v5 + 20) = v4;
		*(int32_t *)(v5 + 16) = v4;
		*(int32_t *)(v5 + 12) = v4;
		*(int32_t *)(v5 + 8) = v4;
		*(int32_t *)(v5 + 4) = v4;
		*(int32_t *)v5 = v4;
		int32_t v8 = v5;            // 0xd08c0
		int32_t result3 = v8 - 768; // 0xd08c0
		v5 = result3;
		if (result3 < *(int32_t *)v1) {
			// bb143
			return result3;
		}
		// 0xd08d0
		*(int32_t *)(v8 - 740) = v4;
		*(int32_t *)(v5 + 24) = v4;
		*(int32_t *)(v5 + 20) = v4;
		*(int32_t *)(v5 + 16) = v4;
		*(int32_t *)(v5 + 12) = v4;
		*(int32_t *)(v5 + 8) = v4;
		*(int32_t *)(v5 + 4) = v4;
		*(int32_t *)v5 = v4;
		int32_t v9 = v5;            // 0xd08f4
		int32_t result4 = v9 - 768; // 0xd08f4
		v5 = result4;
		if (result4 < *(int32_t *)v1) {
			// bb144
			return result4;
		}
		// 0xd0904
		*(int32_t *)(v9 - 740) = v4;
		v3 -= 3;
		*(int32_t *)(v5 + 24) = v4;
		*(int32_t *)(v5 + 20) = v4;
		*(int32_t *)(v5 + 16) = v4;
		*(int32_t *)(v5 + 12) = v4;
		*(int32_t *)(v5 + 8) = v4;
		*(int32_t *)(v5 + 4) = v4;
		*(int32_t *)v5 = v4;
		int32_t result5 = v5 - 768; // 0xd0928
		v5 = result5;
		int32_t v10 = v2 - 1; // 0xd092c
		v2 = v10;
		if (v10 == 0 || result5 < *(int32_t *)v1) {
			// 0xd0930
			return result5;
		}
		// 0xd0904
		v6 = v4;
		result = result5;
		// branch -> 0xd086c
	}
}

// Address range: 0xd0934 - 0xd09c8
int32_t function_d0934(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = 32;  // r30
	int32_t v2 = &a2; // 0xd0990
	int32_t v3 = 32;  // 0xd099c4
	// branch -> 0xd0960
	while (true) {
		// 0xd0960
		int32_t v4;     // 0xd099c
		int32_t result; // 0xd09c4
		if (a1 < *(int32_t *)*(int32_t *)-0x7808) {
			// 0xd0988
			function_d9754((char *)&a1, v2, a3);
			v4 = v1;
			result = a1;
			// branch -> 0xd0998
		} else {
			int32_t v5 = a1 + 32; // 0xd0974
			a1 = v5;
			a2 += 32;
			v4 = v3;
			result = v5;
			// branch -> 0xd0998
		}
		int32_t v6 = v4 - 1; // 0xd099c
		v1 = v6;
		int32_t v7 = result - 800; // 0xd09a0
		a1 = v7;
		if (v6 == 0) {
			// 0xd09ac
			return result;
		}
		// 0xd0998
		v3 = v6;
		a1 = v7;
		// branch -> 0xd0960
	}
}

// Address range: 0xd09c8 - 0xd0aac
int32_t function_d09c8(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd09cc
	int32_t v2 = 16;                  // ctr
	int32_t v3 = 32;                  // r6
	int32_t v4 = 0;                   // r3
	int32_t v5 = v4;                  // 0xd09f4
	// branch -> 0xd09d8
	while (true) {
		// 0xd09d8
		int32_t v6; // r4
		int32_t v7; // 0xd0a3c
		if (v5 < *(int32_t *)v1) {
			// 0xd09f0
			v6 = 0;
			*(int32_t *)v5 = *(int32_t *)v6;
			*(int32_t *)(v4 + 4) = *(int32_t *)(v6 + 4);
			*(int32_t *)(v4 + 8) = *(int32_t *)(v6 + 8);
			*(int32_t *)(v4 + 12) = *(int32_t *)(v6 + 12);
			*(int32_t *)(v4 + 16) = *(int32_t *)(v6 + 16);
			*(int32_t *)(v4 + 20) = *(int32_t *)(v6 + 20);
			*(int32_t *)(v4 + 24) = *(int32_t *)(v6 + 24);
			int32_t v8 = v6; // 0xd0a28
			v6 = v8 + 32;
			*(int32_t *)(v4 + 28) = *(int32_t *)(v8 + 28);
			v7 = v4 + 32;
			// branch -> 0xd0a38
		} else {
			// 0xd09e4
			v6 += 32;
			v7 = v5 + 32;
			// branch -> 0xd0a38
		}
		int32_t v9 = v7 - 800; // 0xd0a3c
		v4 = v9;
		int32_t v10; // 0xd0a9c
		if (v9 < *(int32_t *)v1) {
			// 0xd0a54
			*(int32_t *)v9 = *(int32_t *)v6;
			*(int32_t *)(v4 + 4) = *(int32_t *)(v6 + 4);
			*(int32_t *)(v4 + 8) = *(int32_t *)(v6 + 8);
			*(int32_t *)(v4 + 12) = *(int32_t *)(v6 + 12);
			*(int32_t *)(v4 + 16) = *(int32_t *)(v6 + 16);
			*(int32_t *)(v4 + 20) = *(int32_t *)(v6 + 20);
			*(int32_t *)(v4 + 24) = *(int32_t *)(v6 + 24);
			int32_t v11 = v6; // 0xd0a8c
			v6 = v11 + 32;
			*(int32_t *)(v4 + 28) = *(int32_t *)(v11 + 28);
			v10 = v4 + 32;
			// branch -> 0xd0a9c
		} else {
			// 0xd0a48
			v6 += 32;
			v10 = v7 - 768;
			// branch -> 0xd0a9c
		}
		int32_t result = v10 - 800; // 0xd0a9c
		v4 = result;
		v3--;
		int32_t v12 = v2 - 1; // 0xd0aa4
		v2 = v12;
		if (v12 == 0) {
			// 0xd0aa8
			return result;
		}
		// 0xd0a9c
		v5 = result;
		// branch -> 0xd09d8
	}
}

// Address range: 0xd0aac - 0xd0bc4
int32_t function_d0aac(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd0ab0
	int32_t v2 = 8;                   // ctr
	int32_t v3 = 32;                  // r6
	int32_t v4 = 0;                   // r0
	int32_t v5 = 0;                   // r3
	int32_t v6 = v5;                  // 0xd0ad4
	// branch -> 0xd0ac0
	while (true) {
		int32_t v7 = v1; // 0xd0af8
		int32_t v8 = v6;
		if (v6 < *(int32_t *)v1) {
			// 0xd0ad4
			*(int32_t *)(v6 + 28) = v4;
			*(int32_t *)(v5 + 24) = v4;
			*(int32_t *)(v5 + 20) = v4;
			*(int32_t *)(v5 + 16) = v4;
			*(int32_t *)(v5 + 12) = v4;
			*(int32_t *)(v5 + 8) = v4;
			*(int32_t *)(v5 + 4) = v4;
			*(int32_t *)v5 = v4;
			v7 = v1;
			v8 = v5;
			// branch -> 0xd0af8
		}
		int32_t v9 = v8 - 768; // 0xd0afc
		v5 = v9;
		int32_t v10 = v7; // 0xd0b34
		int32_t v11 = v9;
		if (v9 < *(int32_t *)v7) {
			// 0xd0b10
			*(int32_t *)(v8 - 740) = v4;
			*(int32_t *)(v5 + 24) = v4;
			*(int32_t *)(v5 + 20) = v4;
			*(int32_t *)(v5 + 16) = v4;
			*(int32_t *)(v5 + 12) = v4;
			*(int32_t *)(v5 + 8) = v4;
			*(int32_t *)(v5 + 4) = v4;
			*(int32_t *)v5 = v4;
			v10 = v1;
			v11 = v5;
			// branch -> 0xd0b34
		}
		int32_t v12 = v11 - 768; // 0xd0b38
		v5 = v12;
		int32_t v13 = v3 - 1; // 0xd0b3c
		v3 = v13;
		int32_t v14 = v10; // 0xd0b74
		int32_t v15 = v12;
		if (v12 < *(int32_t *)v10) {
			// 0xd0b50
			*(int32_t *)(v11 - 740) = v4;
			*(int32_t *)(v5 + 24) = v4;
			*(int32_t *)(v5 + 20) = v4;
			*(int32_t *)(v5 + 16) = v4;
			*(int32_t *)(v5 + 12) = v4;
			*(int32_t *)(v5 + 8) = v4;
			*(int32_t *)(v5 + 4) = v4;
			*(int32_t *)v5 = v4;
			v13 = v3;
			v14 = v1;
			v15 = v5;
			// branch -> 0xd0b74
		}
		int32_t v16 = v15 - 768; // 0xd0b78
		v5 = v16;
		int32_t v17 = v13 - 1; // 0xd0b7c
		v3 = v17;
		int32_t v18 = v16;
		if (v16 < *(int32_t *)v14) {
			// 0xd0b90
			*(int32_t *)(v15 - 740) = v4;
			*(int32_t *)(v5 + 24) = v4;
			*(int32_t *)(v5 + 20) = v4;
			*(int32_t *)(v5 + 16) = v4;
			*(int32_t *)(v5 + 12) = v4;
			*(int32_t *)(v5 + 8) = v4;
			*(int32_t *)(v5 + 4) = v4;
			*(int32_t *)v5 = v4;
			v17 = v3;
			v18 = v5;
			// branch -> 0xd0bb4
		}
		int32_t result = v18 - 768; // 0xd0bb4
		v5 = result;
		v3 = v17 - 1;
		int32_t v19 = v2 - 1; // 0xd0bbc
		v2 = v19;
		if (v19 == 0) {
			// 0xd0bc0
			return result;
		}
		// 0xd0bb4
		v6 = result;
		// branch -> 0xd0ac0
	}
}

// Address range: 0xd0bc4 - 0xd0c6c
int32_t function_d0bc4(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd0bcc
	int32_t v2 = 16;                  // r30
	int32_t v3 = result;              // bp+24
	if (result < *(int32_t *)v1) {
		// 0xd0c50
		return result;
	}
	int32_t v4 = &a2; // 0xd0c08
	while (true) {
		// 0xd0c00
		function_d99d4(&v3, v4, a3);
		int32_t result2 = v3 - 800; // 0xd0c14
		v3 = result2;
		if (result2 < *(int32_t *)v1) {
			// 0xd0c50
			return result2;
		}
		// 0xd0c2c
		function_d98f4((char *)&v3, v4, a3);
		int32_t result3 = v3; // 0xd0c3c
		int32_t v5 = v2 - 1;  // 0xd0c40
		v2 = v5;
		int32_t result4 = result3 - 800; // 0xd0c44
		v3 = result4;
		if (v5 == 0) {
			// 0xd0c50
			return result3;
		}
		// 0xd0c2c
		if (result4 < *(int32_t *)v1) {
			// 0xd0c50
			return result4;
		}
		// 0xd0c2c
		// branch -> 0xd0c00
	}
}

// Address range: 0xd0c6c - 0xd0d00
int32_t function_d0c6c(int32_t result, int32_t a2)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd0c74
	int32_t v2 = 16;                  // r30
	int32_t v3 = result;              // bp+24
	if (result < *(int32_t *)v1) {
		// 0xd0ce8
		return result;
	}
	int32_t v4 = &a2; // 0xd0ca4
	int32_t result4;  // 0xd0cdc
	while (true) {
		// 0xd0ca0
		function_d91e4(&v3, v4);
		int32_t result2 = v3 - 800; // 0xd0cb0
		v3 = result2;
		if (result2 < *(int32_t *)v1) {
			// 0xd0ce8
			return result2;
		}
		// 0xd0cc8
		function_d9144((char *)&v3, v4);
		int32_t result3 = v3; // 0xd0cd4
		int32_t v5 = v2 - 1;  // 0xd0cd8
		v2 = v5;
		result4 = result3 - 800;
		v3 = result4;
		if (v5 == 0) {
			// 0xd0ce8
			return result3;
		}
		// 0xd0cc8
		if (result4 < *(int32_t *)v1) {
			// break -> 0xd0ce8
			break;
		}
		// continue -> 0xd0ca0
	}
	// 0xd0ce8
	return result4;
}

// Address range: 0xd0d00 - 0xd0d90
int32_t function_d0d00(int32_t result)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd0d08
	int32_t v2 = 16;                  // r30
	int32_t v3 = result;              // bp+24
	if (result < *(int32_t *)v1) {
		// 0xd0d78
		return result;
	}
	int32_t result4; // 0xd0d6c
	while (true) {
		// 0xd0d30
		function_d9544(&v3, 0);
		int32_t result2 = v3 - 800; // 0xd0d40
		v3 = result2;
		if (result2 < *(int32_t *)v1) {
			// 0xd0d78
			return result2;
		}
		// 0xd0d58
		function_d94f4((char *)&v3, 0);
		int32_t result3 = v3; // 0xd0d64
		int32_t v4 = v2 - 1;  // 0xd0d68
		v2 = v4;
		result4 = result3 - 800;
		v3 = result4;
		if (v4 == 0) {
			// 0xd0d78
			return result3;
		}
		// 0xd0d58
		if (result4 < *(int32_t *)v1) {
			// break -> 0xd0d78
			break;
		}
		// continue -> 0xd0d30
	}
	// 0xd0d78
	return result4;
}

// Address range: 0xd0d90 - 0xd0e68
int32_t function_d0d90(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd0d98
	int32_t v2 = 16;                  // r30
	int32_t v3 = &a2;                 // 0xd0dec
	// branch -> 0xd0dbc
	while (true) {
		// 0xd0dbc
		int32_t v4; // 0xd0df4
		if (a1 < *(int32_t *)v1) {
			// 0xd0de4
			function_d99d4(&a1, v3, a3);
			v4 = a1;
			// branch -> 0xd0df4
		} else {
			int32_t v5 = a1 + 32; // 0xd0dd0
			a1 = v5;
			a2 += 32;
			v4 = v5;
			// branch -> 0xd0df4
		}
		int32_t v6 = v4 - 800; // 0xd0df8
		a1 = v6;
		int32_t result; // 0xd0e64
		if (v6 < *(int32_t *)v1) {
			// 0xd0e28
			function_d98f4((char *)&a1, v3, a3);
			result = a1;
			// branch -> 0xd0e38
		} else {
			int32_t v7 = v4 - 768; // 0xd0e14
			a1 = v7;
			a2 += 32;
			result = v7;
			// branch -> 0xd0e38
		}
		int32_t v8 = v2 - 1; // 0xd0e3c
		v2 = v8;
		int32_t v9 = result - 800; // 0xd0e40
		a1 = v9;
		if (v8 == 0) {
			// 0xd0e4c
			return result;
		}
		// 0xd0e38
		a1 = v9;
		// branch -> 0xd0dbc
	}
}

// Address range: 0xd0e68 - 0xd0f2c
int32_t function_d0e68(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd0e70
	int32_t v2 = 16;                  // r30
	int32_t v3 = &a2;                 // 0xd0eb8
	// branch -> 0xd0e8c
	while (true) {
		// 0xd0e8c
		int32_t v4; // 0xd0ec0
		if (a1 < *(int32_t *)v1) {
			// 0xd0eb4
			function_d91e4(&a1, v3);
			v4 = a1;
			// branch -> 0xd0ec0
		} else {
			int32_t v5 = a1 + 32; // 0xd0ea0
			a1 = v5;
			a2 += 32;
			v4 = v5;
			// branch -> 0xd0ec0
		}
		int32_t v6 = v4 - 800; // 0xd0ec4
		a1 = v6;
		int32_t result; // 0xd0f28
		if (v6 < *(int32_t *)v1) {
			// 0xd0ef4
			function_d9144((char *)&a1, v3);
			result = a1;
			// branch -> 0xd0f00
		} else {
			int32_t v7 = v4 - 768; // 0xd0ee0
			a1 = v7;
			a2 += 32;
			result = v7;
			// branch -> 0xd0f00
		}
		int32_t v8 = v2 - 1; // 0xd0f04
		v2 = v8;
		int32_t v9 = result - 800; // 0xd0f08
		a1 = v9;
		if (v8 == 0) {
			// 0xd0f14
			return result;
		}
		// 0xd0f00
		a1 = v9;
		// branch -> 0xd0e8c
	}
}

// Address range: 0xd0f2c - 0xd0fd4
int32_t function_d0f2c(int32_t a1)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd0f34
	int32_t v2 = 16;                  // r30
	// branch -> 0xd0f4c
	while (true) {
		// 0xd0f4c
		int32_t v3; // 0xd0f74
		if (a1 < *(int32_t *)v1) {
			// 0xd0f68
			function_d9544(&a1, 0);
			v3 = a1;
			// branch -> 0xd0f74
		} else {
			int32_t v4 = a1 + 32; // 0xd0f5c
			a1 = v4;
			v3 = v4;
			// branch -> 0xd0f74
		}
		int32_t v5 = v3 - 800; // 0xd0f78
		a1 = v5;
		int32_t result; // 0xd0fd0
		if (v5 < *(int32_t *)v1) {
			// 0xd0f9c
			function_d94f4((char *)&a1, 0);
			result = a1;
			// branch -> 0xd0fa8
		} else {
			int32_t v6 = v3 - 768; // 0xd0f90
			a1 = v6;
			result = v6;
			// branch -> 0xd0fa8
		}
		int32_t v7 = v2 - 1; // 0xd0fac
		v2 = v7;
		int32_t v8 = result - 800; // 0xd0fb0
		a1 = v8;
		if (v7 == 0) {
			// 0xd0fbc
			return result;
		}
		// 0xd0fa8
		a1 = v8;
		// branch -> 0xd0f4c
	}
}

// Address range: 0xd10f4 - 0xd11b8
int32_t function_d10f4(int32_t a1, char *a2, int32_t a3)
{
	int32_t v1 = 32;                // r30
	char *v2 = (char *)(int32_t)a2; // bp+28
	int32_t v3 = (int32_t)&v2;      // 0xd115c
	// branch -> 0xd1124
	int32_t result2; // 0xd1174
	while (true) {
		int32_t v4 = 32;     // 0xd1170
		int32_t result = a1; // 0xd116c
		// branch -> 0xd112c
		while (true) {
			char *v5 = v2; // 0xd112c
			v2 = (char *)((int32_t)v5 + 1);
			char v6 = *v5;   // 0xd1138
			int32_t v7 = v6; // 0xd113c
			g39 = v7;
			int32_t v8;
			if (v6 >= 0) {
				// 0xd1144
				if (result >= *(int32_t *)*(int32_t *)-0x7808) {
					// 0xd1154
					function_da338((char *)&a1, v3, a3);
					result2 = a1;
					v8 = v4 - v7;
					// branch -> 0xd117c
					goto lab_0xd117c;
				}
				// 0xd1198
				return result;
			}
			// 0xd116c
			result2 = result - v7;
			a1 = result2;
			v8 = v7 + v4;
			// branch -> 0xd117c
		lab_0xd117c:
			// 0xd117c
			if (v8 <= 0) {
				// break -> 0xd1184
				break;
			}
			v4 = v8;
			result = result2;
			// continue -> 0xd112c
		}
		int32_t v9 = v1 - 1; // 0xd1188
		v1 = v9;
		int32_t v10 = result2 - 800; // 0xd118c
		a1 = v10;
		if (v9 == 0) {
			// break -> 0xd1198
			break;
		}
		a1 = v10;
		// continue -> 0xd1124
	}
	// 0xd1198
	return result2;
}

// Address range: 0xd11b8 - 0xd12d8
int32_t function_d11b8(void)
{
	// 0xd11b8
	// branch -> 0xd11c0
	while (true) {
		int32_t v1 = 32; // 0xd12bc
		// branch -> 0xd11c8
		while (true) {
			int32_t v2 = 0;        // 0xd11c8
			char v3 = *(char *)v2; // 0xd11c8
			int32_t v4 = v2 + 1;   // 0xd11cc
			int32_t v5 = v3;       // 0xd11d0
			int32_t v6 = v5;       // r5
			int32_t v7;            // r3
			int32_t v8;
			if (v3 >= 0) {
				int32_t result = v7; // 0xd11dc
				if (result >= *(int32_t *)*(int32_t *)-0x7808) {
					int32_t v9 = result; // r8
					int32_t v10 = v4;    // r7
					v7 = result + v5;
					int32_t v11 = v1 - v5; // r10
					int32_t v12 = v5;      // 0xd1214
					if (v5 % 2 != 0) {
						// 0xd1200
						v10 = v2 + 2;
						v6 = v5 - 1;
						*(char *)result = *(char *)v4;
						v9++;
						v12 = v6;
						// branch -> 0xd1214
					}
					// 0xd1214
					if (__asm_rlwinm_(v12, 0, 30, 30) != 0) {
						int32_t v13 = v10; // 0xd121c
						v10 = v13 + 2;
						v6 -= 2;
						*(int16_t *)v9 = *(int16_t *)v13;
						v9 += 2;
						// branch -> 0xd1230
					}
					uint32_t v14 = v6;     // 0xd1230
					int32_t v15 = v14 / 4; // 0xd1234
					v6 = v15;
					if (v14 >= 4) {
						int32_t v16 = __asm_rlwinm_(v15, 29, 3, 31); // 0xd123c
						int32_t v17 = v16;                           // ctr
						int32_t v18;                                 // 0xd129c
						int32_t v19;
						if (v16 == 0) {
							// 0xd123c
							v19 = v9;
							v18 = v6;
							// branch -> 0xd129c
						lab_0xd129c:;
							int32_t v20 = v10; // 0xd12a0
							*(int32_t *)v19 = *(int32_t *)v20;
							int32_t v21 = v9 + 4;  // 0xd12ac
							int32_t v22 = v18 - 1; // 0xd12b0
							// branch -> 0xd12a0
							while (v22 != 0) {
								// 0xd12a0
								v20 += 4;
								*(int32_t *)v21 = *(int32_t *)v20;
								v21 += 4;
								v22--;
								// continue -> 0xd12a0
							}
						lab_0xd12c0_2:
							// 0xd12c0
							v8 = v11;
							// branch -> 0xd12c0
							goto lab_0xd12c0_4;
						} else {
							// 0xd1248
							*(int32_t *)v9 = *(int32_t *)v10;
							*(int32_t *)(v9 + 4) = *(int32_t *)(v10 + 4);
							*(int32_t *)(v9 + 8) = *(int32_t *)(v10 + 8);
							*(int32_t *)(v9 + 12) = *(int32_t *)(v10 + 12);
							*(int32_t *)(v9 + 16) = *(int32_t *)(v10 + 16);
							*(int32_t *)(v9 + 20) = *(int32_t *)(v10 + 20);
							*(int32_t *)(v9 + 24) = *(int32_t *)(v10 + 24);
							int32_t v23 = v10; // 0xd1280
							v10 = v23 + 32;
							*(int32_t *)(v9 + 28) = *(int32_t *)(v23 + 28);
							int32_t v24 = v9 + 32; // 0xd128c
							v9 = v24;
							int32_t v25 = v17 - 1; // 0xd1290
							// branch -> 0xd1248
							while (v25 != 0) {
								// 0xd1248
								*(int32_t *)v24 = *(int32_t *)v10;
								*(int32_t *)(v9 + 4) = *(int32_t *)(v10 + 4);
								*(int32_t *)(v9 + 8) = *(int32_t *)(v10 + 8);
								*(int32_t *)(v9 + 12) = *(int32_t *)(v10 + 12);
								*(int32_t *)(v9 + 16) = *(int32_t *)(v10 + 16);
								*(int32_t *)(v9 + 20) = *(int32_t *)(v10 + 20);
								*(int32_t *)(v9 + 24) = *(int32_t *)(v10 + 24);
								v23 = v10;
								v10 = v23 + 32;
								*(int32_t *)(v9 + 28) = *(int32_t *)(v23 + 28);
								v24 = v9 + 32;
								v9 = v24;
								v25--;
								// continue -> 0xd1248
							}
							int32_t v26 = v6 % 8; // 0xd1294
							if (v26 == 0) {
								goto lab_0xd12c0_2;
							}
							v19 = v24;
							v18 = v26;
							goto lab_0xd129c;
						}
					}
					// 0xd12c0
					v8 = v11;
					// branch -> 0xd12c0
					goto lab_0xd12c0_4;
				}
				// 0xd12d4
				return result;
			}
			// 0xd12b8
			v7 = -v5;
			v8 = v5 + v1;
			// branch -> 0xd12c0
		lab_0xd12c0_4:
			// 0xd12c0
			if (v8 <= 0) {
				// break -> 0xd12c8
				break;
			}
			v1 = v8;
			// continue -> 0xd11c8
		}
	}
}

// Address range: 0xd12d8 - 0xd13c4
int32_t function_d12d8(void)
{
	// 0xd12d8
	// branch -> 0xd12e0
	while (true) {
		int32_t v1 = 32; // 0xd13a8
		// branch -> 0xd12e8
		while (true) {
			char v2 = *(char *)0; // 0xd12e8
			int32_t v3 = v2;      // 0xd12f0
			int32_t v4 = v3;      // r5
			int32_t v5;           // r3
			int32_t v6;
			if (v2 >= 0) {
				int32_t result = v5; // 0xd12fc
				if (result >= *(int32_t *)*(int32_t *)-0x7808) {
					int32_t v7 = result; // r8
					v5 = result + v3;
					int32_t v8 = v1 - v3; // r10
					int32_t v9 = v3;      // 0xd132c
					if (v3 % 2 != 0) {
						// 0xd131c
						v4 = v3 - 1;
						*(char *)result = 0;
						v7++;
						v9 = v4;
						// branch -> 0xd132c
					}
					// 0xd132c
					if (__asm_rlwinm_(v9, 0, 30, 30) != 0) {
						// 0xd1334
						v4 -= 2;
						*(int16_t *)v7 = 0;
						v7 += 2;
						// branch -> 0xd1344
					}
					uint32_t v10 = v4;     // 0xd1344
					int32_t v11 = v10 / 4; // 0xd1348
					v4 = v11;
					int32_t v12 = 0; // r6
					if (v10 >= 4) {
						int32_t v13 = __asm_rlwinm_(v11, 29, 3, 31); // 0xd1354
						int32_t v14 = v13;                           // ctr
						int32_t v15;                                 // 0xd1390
						int32_t v16;
						if (v13 == 0) {
							// 0xd1354
							v16 = v7;
							v15 = v4;
							// branch -> 0xd1390
						lab_0xd1390:
							// 0xd1390
							*(int32_t *)v16 = v12;
							int32_t v17 = v7 + 4;  // 0xd1398
							int32_t v18 = v15 - 1; // 0xd139c
							// branch -> 0xd1394
							while (v18 != 0) {
								// 0xd1394
								*(int32_t *)v17 = v12;
								v17 += 4;
								v18--;
								// continue -> 0xd1394
							}
						lab_0xd13ac_2:
							// 0xd13ac
							v6 = v8;
							// branch -> 0xd13ac
							goto lab_0xd13ac_4;
						} else {
							// 0xd1360
							*(int32_t *)v7 = v12;
							*(int32_t *)(v7 + 4) = v12;
							*(int32_t *)(v7 + 8) = v12;
							*(int32_t *)(v7 + 12) = v12;
							*(int32_t *)(v7 + 16) = v12;
							*(int32_t *)(v7 + 20) = v12;
							*(int32_t *)(v7 + 24) = v12;
							*(int32_t *)(v7 + 28) = v12;
							int32_t v19 = v7 + 32; // 0xd1380
							v7 = v19;
							int32_t v20 = v14 - 1; // 0xd1384
							// branch -> 0xd1360
							while (v20 != 0) {
								// 0xd1360
								*(int32_t *)v19 = v12;
								*(int32_t *)(v7 + 4) = v12;
								*(int32_t *)(v7 + 8) = v12;
								*(int32_t *)(v7 + 12) = v12;
								*(int32_t *)(v7 + 16) = v12;
								*(int32_t *)(v7 + 20) = v12;
								*(int32_t *)(v7 + 24) = v12;
								*(int32_t *)(v7 + 28) = v12;
								v19 = v7 + 32;
								v7 = v19;
								v20--;
								// continue -> 0xd1360
							}
							int32_t v21 = v4 % 8; // 0xd1388
							if (v21 == 0) {
								goto lab_0xd13ac_2;
							}
							v16 = v19;
							v15 = v21;
							goto lab_0xd1390;
						}
					}
					// 0xd13ac
					v6 = v8;
					// branch -> 0xd13ac
					goto lab_0xd13ac_4;
				}
				// 0xd13c0
				return result;
			}
			// 0xd13a4
			v5 = -v3;
			v6 = v3 + v1;
			// branch -> 0xd13ac
		lab_0xd13ac_4:
			// 0xd13ac
			if (v6 <= 0) {
				// break -> 0xd13b4
				break;
			}
			v1 = v6;
			// continue -> 0xd12e8
		}
	}
}

// Address range: 0xd13c4 - 0xd14a0
int32_t function_d13c4(int32_t a1, char *a2, int32_t a3)
{
	int32_t v1 = 32;                // r30
	char *v2 = (char *)(int32_t)a2; // bp+28
	int32_t v3 = (int32_t)&v2;      // 0xd1448
	// branch -> 0xd13f4
	int32_t result; // 0xd145c
	while (true) {
		int32_t v4 = 32; // 0xd1458
		int32_t v5 = a1; // 0xd142c
		// branch -> 0xd13fc
		while (true) {
			char *v6 = v2;                // 0xd13fc
			int32_t v7 = (int32_t)v6 + 1; // 0xd1400
			v2 = (char *)v7;
			char v8 = *v6;   // 0xd1408
			int32_t v9 = v8; // 0xd140c
			g39 = v9;
			int32_t v10;
			if (v8 < 0) {
				// 0xd1454
				result = v5 - v9;
				a1 = result;
				v10 = v9 + v4;
				// branch -> 0xd1464
			} else {
				int32_t v11 = v4 - v9; // 0xd1418
				int32_t v12 = v11;     // r29
				if (v5 < *(int32_t *)*(int32_t *)-0x7808) {
					// 0xd1440
					function_da338((char *)&a1, v3, a3);
					result = a1;
					v10 = v12;
					// branch -> 0xd1464
				} else {
					int32_t v13 = v9 + v5; // 0xd142c
					a1 = v13;
					v2 = (char *)(v9 + v7);
					result = v13;
					v10 = v11;
					// branch -> 0xd1464
				}
				// 0xd1464
				if (v10 <= 0) {
					// break -> 0xd146c
					break;
				}
				v4 = v10;
				v5 = result;
				// continue -> 0xd13fc
				continue;
			}
			// 0xd1464
			if (v10 <= 0) {
				// break -> 0xd146c
				break;
			}
			v4 = v10;
			v5 = result;
			// continue -> 0xd13fc
		}
		int32_t v14 = v1 - 1; // 0xd1470
		v1 = v14;
		int32_t v15 = result - 800; // 0xd1474
		a1 = v15;
		if (v14 == 0) {
			// break -> 0xd1480
			break;
		}
		a1 = v15;
		// continue -> 0xd13f4
	}
	// 0xd1480
	return result;
}

// Address range: 0xd14a0 - 0xd15cc
int32_t function_d14a0(void)
{
	int32_t v1 = 32; // r9
	// branch -> 0xd14a8
	int32_t result; // 0xd15c0
	while (true) {
		int32_t v2 = 32; // 0xd15b0
		// branch -> 0xd14b0
		int32_t v3; // r3
		while (true) {
			int32_t v4 = 0;        // 0xd14b0
			char v5 = *(char *)v4; // 0xd14b0
			int32_t v6 = v4 + 1;   // 0xd14b4
			int32_t v7 = v5;       // 0xd14b8
			int32_t v8 = v7;       // r5
			int32_t v9;
			if (v5 < 0) {
				// 0xd15ac
				v3 = -v7;
				v9 = v7 + v2;
				// branch -> 0xd15b4
			} else {
				int32_t v10 = v2 - v7; // r10
				int32_t v11 = v3;      // 0xd14c8
				if (v11 < *(int32_t *)*(int32_t *)-0x7808) {
					int32_t v12 = v11; // r8
					int32_t v13 = v6;  // r7
					v3 = v11 + v7;
					int32_t v14 = v7; // 0xd1508
					if (v7 % 2 != 0) {
						// 0xd14f4
						v13 = v4 + 2;
						v8 = v7 - 1;
						*(char *)v11 = *(char *)v6;
						v12++;
						v14 = v8;
						// branch -> 0xd1508
					}
					// 0xd1508
					if (__asm_rlwinm_(v14, 0, 30, 30) != 0) {
						int32_t v15 = v13; // 0xd1510
						v13 = v15 + 2;
						v8 -= 2;
						*(int16_t *)v12 = *(int16_t *)v15;
						v12 += 2;
						// branch -> 0xd1524
					}
					uint32_t v16 = v8;     // 0xd1524
					int32_t v17 = v16 / 4; // 0xd1528
					v8 = v17;
					if (v16 >= 4) {
						int32_t v18 = __asm_rlwinm_(v17, 29, 3, 31); // 0xd1530
						int32_t v19 = v18;                           // ctr
						int32_t v20;                                 // 0xd1590
						int32_t v21;
						if (v18 == 0) {
							// 0xd1530
							v21 = v12;
							v20 = v8;
							// branch -> 0xd1590
						lab_0xd1590:;
							int32_t v22 = v13; // 0xd1594
							*(int32_t *)v21 = *(int32_t *)v22;
							int32_t v23 = v12 + 4; // 0xd15a0
							int32_t v24 = v20 - 1; // 0xd15a4
							// branch -> 0xd1594
							while (v24 != 0) {
								// 0xd1594
								v22 += 4;
								*(int32_t *)v23 = *(int32_t *)v22;
								v23 += 4;
								v24--;
								// continue -> 0xd1594
							}
						lab_0xd15b4:
							// 0xd15b4
							v9 = v10;
							// branch -> 0xd15b4
						lab_0xd15b4_4:
							// 0xd15b4
							if (v9 <= 0) {
								// break -> 0xd15bc
								break;
							}
							v2 = v9;
							// continue -> 0xd14b0
							continue;
						} else {
							// 0xd153c
							*(int32_t *)v12 = *(int32_t *)v13;
							*(int32_t *)(v12 + 4) = *(int32_t *)(v13 + 4);
							*(int32_t *)(v12 + 8) = *(int32_t *)(v13 + 8);
							*(int32_t *)(v12 + 12) = *(int32_t *)(v13 + 12);
							*(int32_t *)(v12 + 16) = *(int32_t *)(v13 + 16);
							*(int32_t *)(v12 + 20) = *(int32_t *)(v13 + 20);
							*(int32_t *)(v12 + 24) = *(int32_t *)(v13 + 24);
							int32_t v25 = v13; // 0xd1574
							v13 = v25 + 32;
							*(int32_t *)(v12 + 28) = *(int32_t *)(v25 + 28);
							int32_t v26 = v12 + 32; // 0xd1580
							v12 = v26;
							int32_t v27 = v19 - 1; // 0xd1584
							// branch -> 0xd153c
							while (v27 != 0) {
								// 0xd153c
								*(int32_t *)v26 = *(int32_t *)v13;
								*(int32_t *)(v12 + 4) = *(int32_t *)(v13 + 4);
								*(int32_t *)(v12 + 8) = *(int32_t *)(v13 + 8);
								*(int32_t *)(v12 + 12) = *(int32_t *)(v13 + 12);
								*(int32_t *)(v12 + 16) = *(int32_t *)(v13 + 16);
								*(int32_t *)(v12 + 20) = *(int32_t *)(v13 + 20);
								*(int32_t *)(v12 + 24) = *(int32_t *)(v13 + 24);
								v25 = v13;
								v13 = v25 + 32;
								*(int32_t *)(v12 + 28) = *(int32_t *)(v25 + 28);
								v26 = v12 + 32;
								v12 = v26;
								v27--;
								// continue -> 0xd153c
							}
							int32_t v28 = v8 % 8; // 0xd1588
							if (v28 == 0) {
								goto lab_0xd15b4;
							}
							v21 = v26;
							v20 = v28;
							goto lab_0xd1590;
						}
					lab_0xd15b4_3:
						// 0xd15b4
						v9 = v10;
						// branch -> 0xd15b4
						goto lab_0xd15b4_4;
					}
				} else {
					// 0xd14d0
					v3 = v11 + v7;
					// branch -> 0xd15b4
					goto lab_0xd15b4_3;
				}
				// 0xd15b4
				v9 = v10;
				// branch -> 0xd15b4
				goto lab_0xd15b4_4;
			}
			// 0xd15b4
			if (v9 <= 0) {
				// break -> 0xd15bc
				break;
			}
			v2 = v9;
			// continue -> 0xd14b0
		}
		int32_t v29 = v1 - 1; // 0xd15bc
		v1 = v29;
		result = v3 - 800;
		v3 = result;
		if (v29 == 0) {
			// break -> 0xd15c8
			break;
		}
		// continue -> 0xd14a8
	}
	// 0xd15c8
	return result;
}

// Address range: 0xd15cc - 0xd16c0
int32_t function_d15cc(void)
{
	int32_t v1 = 32; // r9
	// branch -> 0xd15d4
	int32_t result; // 0xd16b4
	while (true) {
		int32_t v2 = 32; // 0xd16a4
		// branch -> 0xd15dc
		int32_t v3; // r3
		while (true) {
			char v4 = *(char *)0; // 0xd15dc
			int32_t v5 = v4;      // 0xd15e4
			int32_t v6 = v5;      // r5
			int32_t v7;
			if (v4 < 0) {
				// 0xd16a0
				v3 = -v5;
				v7 = v5 + v2;
				// branch -> 0xd16a8
			} else {
				int32_t v8 = v2 - v5; // r10
				int32_t v9 = v3;      // 0xd15f8
				if (v9 < *(int32_t *)*(int32_t *)-0x7808) {
					int32_t v10 = v9; // r8
					v3 = v9 + v5;
					int32_t v11 = v5; // 0xd1628
					if (v5 % 2 != 0) {
						// 0xd1618
						v6 = v5 - 1;
						*(char *)v9 = 0;
						v10++;
						v11 = v6;
						// branch -> 0xd1628
					}
					// 0xd1628
					if (__asm_rlwinm_(v11, 0, 30, 30) != 0) {
						// 0xd1630
						v6 -= 2;
						*(int16_t *)v10 = 0;
						v10 += 2;
						// branch -> 0xd1640
					}
					uint32_t v12 = v6;     // 0xd1640
					int32_t v13 = v12 / 4; // 0xd1644
					v6 = v13;
					int32_t v14 = 0; // r6
					if (v12 >= 4) {
						int32_t v15 = __asm_rlwinm_(v13, 29, 3, 31); // 0xd1650
						int32_t v16 = v15;                           // ctr
						int32_t v17;                                 // 0xd168c
						int32_t v18;
						if (v15 == 0) {
							// 0xd1650
							v18 = v10;
							v17 = v6;
							// branch -> 0xd168c
						lab_0xd168c:
							// 0xd168c
							*(int32_t *)v18 = v14;
							int32_t v19 = v10 + 4; // 0xd1694
							int32_t v20 = v17 - 1; // 0xd1698
							// branch -> 0xd1690
							while (v20 != 0) {
								// 0xd1690
								*(int32_t *)v19 = v14;
								v19 += 4;
								v20--;
								// continue -> 0xd1690
							}
						lab_0xd16a8:
							// 0xd16a8
							v7 = v8;
							// branch -> 0xd16a8
						lab_0xd16a8_4:
							// 0xd16a8
							if (v7 <= 0) {
								// break -> 0xd16b0
								break;
							}
							v2 = v7;
							// continue -> 0xd15dc
							continue;
						} else {
							// 0xd165c
							*(int32_t *)v10 = v14;
							*(int32_t *)(v10 + 4) = v14;
							*(int32_t *)(v10 + 8) = v14;
							*(int32_t *)(v10 + 12) = v14;
							*(int32_t *)(v10 + 16) = v14;
							*(int32_t *)(v10 + 20) = v14;
							*(int32_t *)(v10 + 24) = v14;
							*(int32_t *)(v10 + 28) = v14;
							int32_t v21 = v10 + 32; // 0xd167c
							v10 = v21;
							int32_t v22 = v16 - 1; // 0xd1680
							// branch -> 0xd165c
							while (v22 != 0) {
								// 0xd165c
								*(int32_t *)v21 = v14;
								*(int32_t *)(v10 + 4) = v14;
								*(int32_t *)(v10 + 8) = v14;
								*(int32_t *)(v10 + 12) = v14;
								*(int32_t *)(v10 + 16) = v14;
								*(int32_t *)(v10 + 20) = v14;
								*(int32_t *)(v10 + 24) = v14;
								*(int32_t *)(v10 + 28) = v14;
								v21 = v10 + 32;
								v10 = v21;
								v22--;
								// continue -> 0xd165c
							}
							int32_t v23 = v6 % 8; // 0xd1684
							if (v23 == 0) {
								goto lab_0xd16a8;
							}
							v18 = v21;
							v17 = v23;
							goto lab_0xd168c;
						}
					lab_0xd16a8_3:
						// 0xd16a8
						v7 = v8;
						// branch -> 0xd16a8
						goto lab_0xd16a8_4;
					}
				} else {
					// 0xd1600
					v3 = v9 + v5;
					// branch -> 0xd16a8
					goto lab_0xd16a8_3;
				}
				// 0xd16a8
				v7 = v8;
				// branch -> 0xd16a8
				goto lab_0xd16a8_4;
			}
			// 0xd16a8
			if (v7 <= 0) {
				// break -> 0xd16b0
				break;
			}
			v2 = v7;
			// continue -> 0xd15dc
		}
		int32_t v24 = v1 - 1; // 0xd16b0
		v1 = v24;
		result = v3 - 800;
		v3 = result;
		if (v24 == 0) {
			// break -> 0xd16bc
			break;
		}
		// continue -> 0xd15d4
	}
	// 0xd16bc
	return result;
}

// Address range: 0xd16c0 - 0xd17ac
int32_t function_d16c0(int32_t a1, char *a2, int32_t a3)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x6e7c); // 0xd16c8
	int32_t v3 = 32;                        // r30
	int32_t v4 = a1;                        // bp+24
	char *v5 = (char *)(int32_t)a2;         // bp+28
	*(int32_t *)v2 = a1 % 2;
	int32_t v6 = (int32_t)&v5; // 0xd1740
	// branch -> 0xd16f4
	int32_t result2; // 0xd1788
	while (true) {
		int32_t v7 = 32; // 0xd1764
		// branch -> 0xd16fc
		while (true) {
			char *v8 = v5; // 0xd16fc
			v5 = (char *)((int32_t)v8 + 1);
			char v9 = *v8;    // 0xd1708
			int32_t v10 = v9; // 0xd170c
			g39 = v10;
			int32_t result = v4; // 0xd1760
			int32_t v11;
			if (v9 >= 0) {
				// 0xd1714
				if (result >= *(int32_t *)*(int32_t *)(v1 - 0x7808)) {
					// 0xd1724
					if (result % 2 == *(int32_t *)v2) {
						// 0xd1738
						function_da538((char *)&v4, v6, a3);
						// branch -> 0xd1770
					} else {
						// 0xd174c
						function_da6a4((char *)&v4, v6, a3);
						// branch -> 0xd1770
					}
					// 0xd1770
					v11 = v7 - v10;
					// branch -> 0xd1770
					goto lab_0xd1770;
				}
				// 0xd1798
				return result;
			}
			// 0xd1760
			v4 = result - v10;
			v11 = v10 + v7;
			// branch -> 0xd1770
		lab_0xd1770:
			// 0xd1770
			if (v11 <= 0) {
				// break -> 0xd1778
				break;
			}
			v7 = v11;
			// continue -> 0xd16fc
		}
		int32_t *v12 = (int32_t *)v2; // 0xd1778
		int32_t v13 = v3 - 1;         // 0xd177c
		v3 = v13;
		*v12 = *v12 ^ 1;
		result2 = v4;
		v4 = result2 - 800;
		if (v13 == 0) {
			// break -> 0xd1798
			break;
		}
		// continue -> 0xd16f4
	}
	// 0xd1798
	return result2;
}

// Address range: 0xd17ac - 0xd18a4
int32_t function_d17ac(int32_t a1, char *a2)
{
	int32_t v1 = 32;                        // r31
	int32_t v2 = 0;                         // r2
	int32_t v3 = *(int32_t *)(v2 - 0x6e7c); // 0xd17c4
	int32_t v4 = a1;                        // bp+24
	char *v5 = (char *)(int32_t)a2;         // bp+28
	*(int32_t *)v3 = a1 % 2;
	int32_t v6 = (int32_t)&v5; // 0xd1830
	// branch -> 0xd17e8
	int32_t result2; // 0xd1874
	while (true) {
		int32_t v7 = 32; // 0xd1850
		// branch -> 0xd17f0
		while (true) {
			char *v8 = v5; // 0xd17f0
			v5 = (char *)((int32_t)v8 + 1);
			char v9 = *v8;    // 0xd17fc
			int32_t v10 = v9; // 0xd1800
			g38 = v10;
			int32_t result = v4; // 0xd184c
			int32_t v11;
			if (v9 >= 0) {
				// 0xd1808
				if (result >= *(int32_t *)*(int32_t *)(v2 - 0x7808)) {
					// 0xd1818
					if (result % 2 == *(int32_t *)v3) {
						// 0xd182c
						function_da004((char *)&v4, v6);
						// branch -> 0xd185c
					} else {
						// 0xd183c
						function_d9ee4((char *)&v4, v6);
						// branch -> 0xd185c
					}
					// 0xd185c
					v11 = v7 - v10;
					// branch -> 0xd185c
					goto lab_0xd185c;
				}
				// 0xd1884
				return result;
			}
			// 0xd184c
			v4 = result - v10;
			v11 = v10 + v7;
			// branch -> 0xd185c
		lab_0xd185c:
			// 0xd185c
			if (v11 <= 0) {
				// break -> 0xd1864
				break;
			}
			v7 = v11;
			// continue -> 0xd17f0
		}
		int32_t *v12 = (int32_t *)v3; // 0xd1864
		int32_t v13 = v1 - 1;         // 0xd1868
		v1 = v13;
		*v12 = *v12 ^ 1;
		result2 = v4;
		v4 = result2 - 800;
		if (v13 == 0) {
			// break -> 0xd1884
			break;
		}
		// continue -> 0xd17e8
	}
	// 0xd1884
	return result2;
}

// Address range: 0xd18a4 - 0xd1980
int32_t function_d18a4(int32_t a1, char *a2)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x6e7c); // 0xd18ac
	int32_t v3 = (int32_t)a2;               // r30
	int32_t v4 = 32;                        // r31
	int32_t v5 = a1;                        // bp+24
	*(int32_t *)v2 = a1 % 2;
	// branch -> 0xd18d4
	int32_t result2; // 0xd195c
	while (true) {
		int32_t v6 = 32; // 0xd1938
		// branch -> 0xd18dc
		while (true) {
			int32_t v7 = v3;       // 0xd18dc
			char v8 = *(char *)v7; // 0xd18dc
			int32_t v9 = v7 + 1;   // 0xd18e0
			v3 = v9;
			int32_t v10 = v8;    // 0xd18e4
			int32_t result = v5; // 0xd1934
			int32_t v11;
			if (v8 >= 0) {
				// 0xd18ec
				if (result >= *(int32_t *)*(int32_t *)(v1 - 0x7808)) {
					// 0xd18fc
					v3 = v10 + v9;
					if (result % 2 == *(int32_t *)v2) {
						// 0xd1914
						function_da238((char *)&v5, v10, 0);
						// branch -> 0xd1944
					} else {
						// 0xd1924
						function_da178((char *)&v5, v10, 0);
						// branch -> 0xd1944
					}
					// 0xd1944
					v11 = v6 - v10;
					// branch -> 0xd1944
					goto lab_0xd1944;
				}
				// 0xd196c
				return result;
			}
			// 0xd1934
			v5 = result - v10;
			v11 = v10 + v6;
			// branch -> 0xd1944
		lab_0xd1944:
			// 0xd1944
			if (v11 <= 0) {
				// break -> 0xd194c
				break;
			}
			v6 = v11;
			// continue -> 0xd18dc
		}
		int32_t *v12 = (int32_t *)v2; // 0xd194c
		int32_t v13 = v4 - 1;         // 0xd1950
		v4 = v13;
		*v12 = *v12 ^ 1;
		result2 = v5;
		v5 = result2 - 800;
		if (v13 == 0) {
			// break -> 0xd196c
			break;
		}
		// continue -> 0xd18d4
	}
	// 0xd196c
	return result2;
}

// Address range: 0xd1980 - 0xd1a84
int32_t function_d1980(int32_t a1, char *a2, int32_t a3)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x6e7c); // 0xd1988
	int32_t v3 = 32;                        // r29
	int32_t v4 = a1;                        // bp+24
	char *v5 = (char *)(int32_t)a2;         // bp+28
	*(int32_t *)v2 = a1 % 2;
	int32_t v6 = (int32_t)&v5; // 0xd1a18
	// branch -> 0xd19b4
	int32_t result; // 0xd1a60
	while (true) {
		int32_t v7 = 32; // 0xd1a3c
		// branch -> 0xd19bc
		while (true) {
			char *v8 = v5;                // 0xd19bc
			int32_t v9 = (int32_t)v8 + 1; // 0xd19c0
			v5 = (char *)v9;
			char v10 = *v8;    // 0xd19c8
			int32_t v11 = v10; // 0xd19cc
			g39 = v11;
			int32_t v12 = v4; // 0xd1a38
			int32_t v13;
			if (v10 < 0) {
				// 0xd1a38
				v4 = v12 - v11;
				v13 = v11 + v7;
				// branch -> 0xd1a48
			} else {
				// 0xd19d4
				if (v12 < *(int32_t *)*(int32_t *)(v1 - 0x7808)) {
					// 0xd1a00
					if (v12 % 2 == *(int32_t *)v2) {
						// 0xd1a10
						function_da538((char *)&v4, v6, a3);
						// branch -> 0xd1a48
					} else {
						// 0xd1a24
						function_da6a4((char *)&v4, v6, a3);
						// branch -> 0xd1a48
					}
				lab_0xd1a48:
					// 0xd1a48
					v13 = v7 - v11;
					// branch -> 0xd1a48
				lab_0xd1a48_2:
					// 0xd1a48
					if (v13 <= 0) {
						// break -> 0xd1a50
						break;
					}
					v7 = v13;
					// continue -> 0xd19bc
					continue;
				} else {
					// 0xd19e8
					v4 = v12 + v11;
					v5 = (char *)(v11 + v9);
					// branch -> 0xd1a48
					goto lab_0xd1a48;
				}
			}
			// 0xd1a48
			if (v13 <= 0) {
				// break -> 0xd1a50
				break;
			}
			v7 = v13;
			// continue -> 0xd19bc
		}
		int32_t *v14 = (int32_t *)v2; // 0xd1a50
		int32_t v15 = v3 - 1;         // 0xd1a54
		v3 = v15;
		*v14 = *v14 ^ 1;
		result = v4;
		v4 = result - 800;
		if (v15 == 0) {
			// break -> 0xd1a70
			break;
		}
		// continue -> 0xd19b4
	}
	// 0xd1a70
	return result;
}

// Address range: 0xd1a84 - 0xd1b94
int32_t function_d1a84(int32_t a1, char *a2)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x6e7c); // 0xd1a94
	int32_t v3 = 32;                        // r29
	int32_t v4 = a1;                        // bp+24
	char *v5 = (char *)(int32_t)a2;         // bp+28
	*(int32_t *)v2 = a1 % 2;
	int32_t v6 = (int32_t)&v5; // 0xd1b20
	// branch -> 0xd1ac0
	int32_t result; // 0xd1b64
	while (true) {
		int32_t v7 = 32; // 0xd1b40
		// branch -> 0xd1ac8
		while (true) {
			char *v8 = v5;                // 0xd1ac8
			int32_t v9 = (int32_t)v8 + 1; // 0xd1acc
			v5 = (char *)v9;
			char v10 = *v8;    // 0xd1ad4
			int32_t v11 = v10; // 0xd1ad8
			g38 = v11;
			int32_t v12 = v4; // 0xd1b3c
			int32_t v13;
			if (v10 < 0) {
				// 0xd1b3c
				v4 = v12 - v11;
				v13 = v11 + v7;
				// branch -> 0xd1b4c
			} else {
				// 0xd1ae0
				if (v12 < *(int32_t *)*(int32_t *)(v1 - 0x7808)) {
					// 0xd1b0c
					if (v12 % 2 == *(int32_t *)v2) {
						// 0xd1b1c
						function_da004((char *)&v4, v6);
						// branch -> 0xd1b4c
					} else {
						// 0xd1b2c
						function_d9ee4((char *)&v4, v6);
						// branch -> 0xd1b4c
					}
				lab_0xd1b4c:
					// 0xd1b4c
					v13 = v7 - v11;
					// branch -> 0xd1b4c
				lab_0xd1b4c_2:
					// 0xd1b4c
					if (v13 <= 0) {
						// break -> 0xd1b54
						break;
					}
					v7 = v13;
					// continue -> 0xd1ac8
					continue;
				} else {
					// 0xd1af4
					v4 = v12 + v11;
					v5 = (char *)(v11 + v9);
					// branch -> 0xd1b4c
					goto lab_0xd1b4c;
				}
			}
			// 0xd1b4c
			if (v13 <= 0) {
				// break -> 0xd1b54
				break;
			}
			v7 = v13;
			// continue -> 0xd1ac8
		}
		int32_t *v14 = (int32_t *)v2; // 0xd1b54
		int32_t v15 = v3 - 1;         // 0xd1b58
		v3 = v15;
		*v14 = *v14 ^ 1;
		result = v4;
		v4 = result - 800;
		if (v15 == 0) {
			// break -> 0xd1b74
			break;
		}
		// continue -> 0xd1ac0
	}
	// 0xd1b74
	return result;
}

// Address range: 0xd1b94 - 0xd1c7c
int32_t function_d1b94(int32_t a1, char *a2)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x6e7c); // 0xd1b9c
	int32_t v3 = (int32_t)a2;               // r29
	int32_t v4 = 32;                        // r30
	int32_t v5 = a1;                        // bp+24
	*(int32_t *)v2 = a1 % 2;
	// branch -> 0xd1bc4
	int32_t result; // 0xd1c58
	while (true) {
		int32_t v6 = 32; // 0xd1c34
		// branch -> 0xd1bcc
		while (true) {
			int32_t v7 = v3;       // 0xd1bcc
			char v8 = *(char *)v7; // 0xd1bcc
			int32_t v9 = v7 + 1;   // 0xd1bd0
			v3 = v9;
			int32_t v10 = v8; // 0xd1bd4
			int32_t v11 = v5; // 0xd1c30
			int32_t v12;
			if (v8 < 0) {
				// 0xd1c30
				v5 = v11 - v10;
				v12 = v10 + v6;
				// branch -> 0xd1c40
			} else {
				// 0xd1bdc
				v3 = v10 + v9;
				if (v11 < *(int32_t *)*(int32_t *)(v1 - 0x7808)) {
					// 0xd1c00
					if (v11 % 2 == *(int32_t *)v2) {
						// 0xd1c10
						function_da238((char *)&v5, v10, 0);
						// branch -> 0xd1c40
					} else {
						// 0xd1c20
						function_da178((char *)&v5, v10, 0);
						// branch -> 0xd1c40
					}
				lab_0xd1c40:
					// 0xd1c40
					v12 = v6 - v10;
					// branch -> 0xd1c40
				lab_0xd1c40_2:
					// 0xd1c40
					if (v12 <= 0) {
						// break -> 0xd1c48
						break;
					}
					v6 = v12;
					// continue -> 0xd1bcc
					continue;
				} else {
					// 0xd1bf4
					v5 = v11 + v10;
					// branch -> 0xd1c40
					goto lab_0xd1c40;
				}
			}
			// 0xd1c40
			if (v12 <= 0) {
				// break -> 0xd1c48
				break;
			}
			v6 = v12;
			// continue -> 0xd1bcc
		}
		int32_t *v13 = (int32_t *)v2; // 0xd1c48
		int32_t v14 = v4 - 1;         // 0xd1c4c
		v4 = v14;
		*v13 = *v13 ^ 1;
		result = v5;
		v5 = result - 800;
		if (v14 == 0) {
			// break -> 0xd1c68
			break;
		}
		// continue -> 0xd1bc4
	}
	// 0xd1c68
	return result;
}

// Address range: 0xd1c7c - 0xd1d50
int32_t function_d1c7c(int32_t a1, char *a2, int32_t a3, int32_t a4)
{
	int32_t v1 = 32;                // r29
	char *v2 = (char *)(int32_t)a2; // bp+28
	int32_t v3 = (int32_t)&v2;      // 0xd1cec
	int32_t v4;                     // bp-40
	int32_t v5 = &v4;               // 0xd1cf0
	// branch -> 0xd1ca4
	while (true) {
		int32_t v6 = 32; // r28
		v4 = *(int32_t *)a4;
		int32_t v7 = 32; // 0xd1d1c4
		// branch -> 0xd1cb8
		while (true) {
			char *v8 = v2; // 0xd1cb8
			v2 = (char *)((int32_t)v8 + 1);
			char v9 = *v8;     // 0xd1cc4
			int32_t v10 = v9;  // 0xd1cc8
			int32_t v11 = v10; // r27
			int32_t v12;       // 0xd1cfc
			int32_t v13;       // 0xd1d1c
			if (v9 >= 0) {
				int32_t result = a1; // 0xd1cd0
				if (result >= *(int32_t *)*(int32_t *)-0x7808) {
					// 0xd1ce0
					function_da810((char *)&a1, v3, a3, v10, v5);
					v13 = v6;
					v12 = v11;
					// branch -> 0xd1d1c
					goto lab_0xd1d1c;
				}
				// 0xd1d3c
				return result;
			}
			// 0xd1cfc
			v12 = -v10;
			a1 -= v10;
			v4 <<= v12 % 32;
			v13 = v7;
			// branch -> 0xd1d1c
		lab_0xd1d1c:;
			int32_t v14 = v13 - v12; // 0xd1d1c
			v6 = v14;
			if (v14 <= 0) {
				// break -> 0xd1d28
				break;
			}
			v7 = v14;
			// continue -> 0xd1cb8
		}
		int32_t result2 = a1; // 0xd1d28
		int32_t v15 = v1 - 1; // 0xd1d2c
		v1 = v15;
		a1 = result2 - 800;
		if (v15 == 0) {
			// 0xd1d3c
			return result2;
		}
		// 0xd1d28
		a4 -= 4;
		// branch -> 0xd1ca4
	}
}

// Address range: 0xd1d50 - 0xd1e1c
int32_t function_d1d50(int32_t a1, char *a2, int32_t a3)
{
	int32_t v1 = 32;                // r30
	char *v2 = (char *)(int32_t)a2; // bp+28
	int32_t v3 = (int32_t)&v2;      // 0xd1db8
	int32_t v4;                     // bp-40
	int32_t v5 = &v4;               // 0xd1dbc
	// branch -> 0xd1d74
	while (true) {
		int32_t v6 = 32; // r29
		v4 = *(int32_t *)a3;
		int32_t v7 = 32; // 0xd1de85
		// branch -> 0xd1d88
		while (true) {
			char *v8 = v2; // 0xd1d88
			v2 = (char *)((int32_t)v8 + 1);
			char v9 = *v8;     // 0xd1d94
			int32_t v10 = v9;  // 0xd1d98
			int32_t v11 = v10; // r28
			int32_t v12;       // 0xd1dc8
			int32_t v13;       // 0xd1de8
			if (v9 >= 0) {
				int32_t result = a1; // 0xd1da0
				if (result >= *(int32_t *)*(int32_t *)-0x7808) {
					// 0xd1db0
					function_da124((char *)&a1, v3, v10, v5);
					v13 = v6;
					v12 = v11;
					// branch -> 0xd1de8
					goto lab_0xd1de8;
				}
				// 0xd1e08
				return result;
			}
			// 0xd1dc8
			v12 = -v10;
			a1 -= v10;
			v4 <<= v12 % 32;
			v13 = v7;
			// branch -> 0xd1de8
		lab_0xd1de8:;
			int32_t v14 = v13 - v12; // 0xd1de8
			v6 = v14;
			if (v14 <= 0) {
				// break -> 0xd1df4
				break;
			}
			v7 = v14;
			// continue -> 0xd1d88
		}
		int32_t result2 = a1; // 0xd1df4
		int32_t v15 = v1 - 1; // 0xd1df8
		v1 = v15;
		a1 = result2 - 800;
		if (v15 == 0) {
			// 0xd1e08
			return result2;
		}
		// 0xd1df4
		a3 -= 4;
		// branch -> 0xd1d74
	}
}

// Address range: 0xd1e1c - 0xd1ee4
int32_t function_d1e1c(int32_t a1, char *a2, int32_t a3)
{
	int32_t v1 = 32;          // r30
	int32_t v2;               // bp-40
	int32_t v3 = &v2;         // 0xd1e7c
	int32_t v4 = (int32_t)a2; // 0xd1e543
	// branch -> 0xd1e40
	while (true) {
		int32_t v5 = 32; // r29
		v2 = *(int32_t *)a3;
		int32_t v6 = 32; // 0xd1eb07
		int32_t v7 = v4; // 0xd1e54
		// branch -> 0xd1e54
		int32_t v8; // 0xd1e58
		while (true) {
			char v9 = *(char *)v7; // 0xd1e54
			v8 = v7 + 1;
			int32_t v10 = v9;  // 0xd1e5c
			int32_t v11 = v10; // r28
			int32_t v12;       // 0xd1e90
			int32_t v13;       // 0xd1eb0
			if (v9 >= 0) {
				int32_t result = a1; // 0xd1e64
				if (result >= *(int32_t *)*(int32_t *)-0x7808) {
					// 0xd1e74
					function_da2f8((char *)&a1, v10, v3, 0);
					v13 = v5;
					v12 = v11;
					v8 += v11;
					// branch -> 0xd1eb0
					goto lab_0xd1eb0;
				}
				// 0xd1ed0
				return result;
			}
			// 0xd1e90
			v12 = -v10;
			a1 -= v10;
			v2 <<= v12 % 32;
			v13 = v6;
			// branch -> 0xd1eb0
		lab_0xd1eb0:;
			int32_t v14 = v13 - v12; // 0xd1eb0
			v5 = v14;
			if (v14 <= 0) {
				// break -> 0xd1ebc
				break;
			}
			v6 = v14;
			v7 = v8;
			// continue -> 0xd1e54
		}
		int32_t result2 = a1; // 0xd1ebc
		int32_t v15 = v1 - 1; // 0xd1ec0
		v1 = v15;
		a1 = result2 - 800;
		if (v15 == 0) {
			// 0xd1ed0
			return result2;
		}
		// 0xd1ebc
		v4 = v8;
		a3 -= 4;
		// branch -> 0xd1e40
	}
}

// Address range: 0xd1ee4 - 0xd1fd0
int32_t function_d1ee4(int32_t a1, char *a2, int32_t a3, int32_t a4)
{
	int32_t v1 = 32;                // r30
	char *v2 = (char *)(int32_t)a2; // bp+28
	int32_t v3 = (int32_t)&v2;      // 0xd1f6c
	int32_t v4;                     // bp-40
	int32_t v5 = &v4;               // 0xd1f70
	// branch -> 0xd1f0c
	while (true) {
		int32_t v6 = 32; // r27
		v4 = *(int32_t *)a4;
		int32_t v7 = 32; // 0xd1f9c3
		// branch -> 0xd1f20
		while (true) {
			char *v8 = v2;                // 0xd1f20
			int32_t v9 = (int32_t)v8 + 1; // 0xd1f24
			v2 = (char *)v9;
			char v10 = *v8;    // 0xd1f2c
			int32_t v11 = v10; // 0xd1f30
			int32_t v12;       // 0xd1f7c
			int32_t v13;       // 0xd1f9c
			if (v10 < 0) {
				// 0xd1f7c
				v12 = -v11;
				a1 -= v11;
				v4 <<= v12 % 32;
				// branch -> 0xd1f9c
			} else {
				int32_t v14 = a1; // 0xd1f38
				int32_t v15;      // 0xd1f9c
				if (v14 < *(int32_t *)*(int32_t *)-0x7808) {
					// 0xd1f60
					function_da810((char *)&a1, v3, a3, v11, v5);
					v15 = v6;
					// branch -> 0xd1f9c
				} else {
					// 0xd1f48
					a1 = v14 + v11;
					v2 = (char *)(v11 + v9);
					v15 = v7;
					// branch -> 0xd1f9c
				}
				// 0xd1f9c
				v13 = v15 - v11;
				v6 = v13;
				if (v13 <= 0) {
					// break -> 0xd1fa8
					break;
				}
				v7 = v13;
				// continue -> 0xd1f20
				continue;
			}
			// 0xd1f9c
			v13 = v7 - v12;
			v6 = v13;
			if (v13 <= 0) {
				// break -> 0xd1fa8
				break;
			}
			v7 = v13;
			// continue -> 0xd1f20
		}
		int32_t result = a1;  // 0xd1fa8
		int32_t v16 = v1 - 1; // 0xd1fac
		v1 = v16;
		a1 = result - 800;
		if (v16 == 0) {
			// 0xd1fbc
			return result;
		}
		// 0xd1fa8
		a4 -= 4;
		// branch -> 0xd1f0c
	}
}

// Address range: 0xd1fd0 - 0xd20b4
int32_t function_d1fd0(int32_t a1, char *a2, int32_t a3)
{
	int32_t v1 = 32;                // r29
	char *v2 = (char *)(int32_t)a2; // bp+28
	int32_t v3 = (int32_t)&v2;      // 0xd2050
	int32_t v4;                     // bp-40
	int32_t v5 = &v4;               // 0xd2054
	// branch -> 0xd1ff4
	while (true) {
		int32_t v6 = 32; // r28
		v4 = *(int32_t *)a3;
		int32_t v7 = 32; // 0xd20804
		// branch -> 0xd2008
		while (true) {
			char *v8 = v2;                // 0xd2008
			int32_t v9 = (int32_t)v8 + 1; // 0xd200c
			v2 = (char *)v9;
			char v10 = *v8;    // 0xd2014
			int32_t v11 = v10; // 0xd2018
			int32_t v12;       // 0xd2060
			int32_t v13;       // 0xd2080
			if (v10 < 0) {
				// 0xd2060
				v12 = -v11;
				a1 -= v11;
				v4 <<= v12 % 32;
				// branch -> 0xd2080
			} else {
				int32_t v14 = a1; // 0xd2020
				int32_t v15;      // 0xd2080
				if (v14 < *(int32_t *)*(int32_t *)-0x7808) {
					// 0xd2048
					function_da124((char *)&a1, v3, v11, v5);
					v15 = v6;
					// branch -> 0xd2080
				} else {
					// 0xd2030
					a1 = v14 + v11;
					v2 = (char *)(v11 + v9);
					v15 = v7;
					// branch -> 0xd2080
				}
				// 0xd2080
				v13 = v15 - v11;
				v6 = v13;
				if (v13 <= 0) {
					// break -> 0xd208c
					break;
				}
				v7 = v13;
				// continue -> 0xd2008
				continue;
			}
			// 0xd2080
			v13 = v7 - v12;
			v6 = v13;
			if (v13 <= 0) {
				// break -> 0xd208c
				break;
			}
			v7 = v13;
			// continue -> 0xd2008
		}
		int32_t result = a1;  // 0xd208c
		int32_t v16 = v1 - 1; // 0xd2090
		v1 = v16;
		a1 = result - 800;
		if (v16 == 0) {
			// 0xd20a0
			return result;
		}
		// 0xd208c
		a3 -= 4;
		// branch -> 0xd1ff4
	}
}

// Address range: 0xd20b4 - 0xd2188
int32_t function_d20b4(int32_t a1, char *a2, int32_t a3)
{
	int32_t v1 = (int32_t)a2; // r31
	int32_t v2 = 32;          // r29
	int32_t v3;               // bp-40
	int32_t v4 = &v3;         // 0xd2124
	// branch -> 0xd20d8
	while (true) {
		int32_t v5 = 32; // r28
		v3 = *(int32_t *)a3;
		int32_t v6 = 32; // 0xd21543
		// branch -> 0xd20ec
		while (true) {
			int32_t v7 = v1;       // 0xd20ec
			char v8 = *(char *)v7; // 0xd20ec
			int32_t v9 = v7 + 1;   // 0xd20f0
			v1 = v9;
			int32_t v10 = v8; // 0xd20f4
			int32_t v11;      // 0xd2134
			int32_t v12;      // 0xd2154
			if (v8 < 0) {
				// 0xd2134
				v11 = -v10;
				a1 -= v10;
				v3 <<= v11 % 32;
				// branch -> 0xd2154
			} else {
				int32_t v13 = a1; // 0xd20fc
				v1 = v10 + v9;
				int32_t v14; // 0xd2154
				if (v13 < *(int32_t *)*(int32_t *)-0x7808) {
					// 0xd211c
					function_da2f8((char *)&a1, v10, v4, 0);
					v14 = v5;
					// branch -> 0xd2154
				} else {
					// 0xd2110
					a1 = v13 + v10;
					v14 = v6;
					// branch -> 0xd2154
				}
				// 0xd2154
				v12 = v14 - v10;
				v5 = v12;
				if (v12 <= 0) {
					// break -> 0xd2160
					break;
				}
				v6 = v12;
				// continue -> 0xd20ec
				continue;
			}
			// 0xd2154
			v12 = v6 - v11;
			v5 = v12;
			if (v12 <= 0) {
				// break -> 0xd2160
				break;
			}
			v6 = v12;
			// continue -> 0xd20ec
		}
		int32_t result = a1;  // 0xd2160
		int32_t v15 = v2 - 1; // 0xd2164
		v2 = v15;
		a1 = result - 800;
		if (v15 == 0) {
			// 0xd2174
			return result;
		}
		// 0xd2160
		a3 -= 4;
		// branch -> 0xd20d8
	}
}

// Address range: 0xd2188 - 0xd2278
int32_t function_d2188(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd2190
	int32_t v2 = 30;                  // r29
	int32_t v3 = result;              // bp+24
	int32_t v4 = &a2;                 // 0xd21e8
	int32_t v5 = result;              // r4
	if (result < *(int32_t *)v1) {
		// 0xd225c
		return result;
	}
	int32_t v6 = 30; // 0xd21c4142
	while (true) {
		int32_t v7 = 32 - v6; // 0xd21c4
		g39 = v7;
		v3 = v2 + v5;
		a2 += __asm_rlwinm(v7, 0, 30, 30);
		function_da338((char *)&v3, v4, a3);
		int32_t result2 = v3; // 0xd21f0
		int32_t v8 = v2 - 2;  // 0xd21f4
		v2 = v8;
		int32_t v9 = result2 - 800; // 0xd21f8
		v3 = v9;
		if (v8 > -1) {
			// 0xd21c4
			v5 = v9;
			if (v9 >= *(int32_t *)v1) {
				// 0xd21c4
				v6 = v8;
				// branch -> 0xd21c4
				continue;
			}
			// 0xd225c
			return result2;
		}
		// 0xd2204
		v2 = 2;
		int32_t v10 = 2; // 0xd2218
		// branch -> 0xd2208
		int32_t result3; // 0xd2244
		while (true) {
			// 0xd2208
			if (v9 >= *(int32_t *)v1) {
				int32_t v11 = 32 - v10; // 0xd2218
				g39 = v11;
				v3 = v2 + v9;
				a2 += __asm_rlwinm(v11, 0, 30, 30);
				function_da338((char *)&v3, v4, a3);
				result3 = v3;
				int32_t v12 = v2 + 2; // 0xd2248
				v2 = v12;
				int32_t v13 = result3 - 800; // 0xd2250
				v3 = v13;
				if (v12 >= 31) {
					// break -> 0xd225c
					break;
				}
				result2 = result3;
				v10 = v12;
				v9 = v13;
				// continue -> 0xd2208
				continue;
			}
			// 0xd225c
			return result2;
		}
		// 0xd225c
		return result3;
	}
}

// Address range: 0xd2278 - 0xd2434
int32_t function_d2278(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd2278
	int32_t v2 = 30;                  // r9
	int32_t result = 0;
	if (result < *(int32_t *)v1) {
		// 0xd2430
		return result;
	}
	int32_t v3 = 30; // 0xd2290131
	while (true) {
		int32_t v4 = 32 - v3;                      // 0xd228c
		int32_t v5 = result + v3;                  // 0xd2290
		int32_t v6 = __asm_rlwinm_(v4, 0, 30, 30); // 0xd2294
		int32_t v7 = 0;                            // 0xd2298
		int32_t v8 = v7;                           // r7
		int32_t v9 = v5;                           // r8
		int32_t v10 = v4 + v5;                     // r3
		int32_t v11 = v7 + v6 + v4;                // r4
		uint32_t v12 = v4;                         // 0xd22c8
		if (v6 != 0) {
			// 0xd22b0
			v8 = v7 + 4;
			*(int16_t *)v5 = *(int16_t *)(v7 + 2);
			v9 += 2;
			v12 = v4 - 2;
			// branch -> 0xd22c4
		}
		int32_t v13 = v12 / 4; // 0xd22c8
		int32_t v14 = v13;     // r5
		int32_t v15;           // 0xd2348
		int32_t v16;           // 0xd234c
		int32_t v17;           // 0xd2368
		int32_t result3;       // 0xd2360
		if (v12 >= 4) {
			int32_t v18 = __asm_rlwinm_(v13, 29, 3, 31); // 0xd22d0
			int32_t v19 = v18;                           // ctr
			int32_t v20;                                 // 0xd2330
			int32_t v21;
			if (v18 == 0) {
				// 0xd22d0
				v21 = v9;
				v20 = v14;
				// branch -> 0xd2330
			lab_0xd2330:;
				int32_t v22 = v8; // 0xd2334
				*(int32_t *)v21 = *(int32_t *)v22;
				int32_t v23 = v9 + 4;  // 0xd2340
				int32_t v24 = v20 - 1; // 0xd2344
				// branch -> 0xd2334
				while (v24 != 0) {
					// 0xd2334
					v22 += 4;
					*(int32_t *)v23 = *(int32_t *)v22;
					v23 += 4;
					v24--;
					// continue -> 0xd2334
				}
			lab_0xd2348:
				// 0xd2348
				v15 = v2 - 2;
				v2 = v15;
				v16 = v10 - 800;
				if (v15 > -1) {
				lab_0xd2348_3:
					// 0xd2348
					if (v16 < *(int32_t *)v1) {
						// break -> 0xd2430
						break;
					}
					result = v16;
					v3 = v15;
					// continue -> 0xd228c
					continue;
				}
				// 0xd2354
				v2 = 2;
				v17 = 2;
				result3 = v16;
				// branch -> 0xd2358
				int32_t result2;
				while (true) {
					// 0xd2358
					if (result3 >= *(int32_t *)v1) {
					lab_0xd2364_2:;
						int32_t v25 = 32 - v17;                      // 0xd2364
						int32_t v26 = result3 + v17;                 // 0xd2368
						int32_t v27 = __asm_rlwinm_(v25, 0, 30, 30); // 0xd236c
						int32_t v28 = v11;                           // 0xd2370
						v8 = v28;
						v9 = v26;
						v10 = v25 + v26;
						v11 = v28 + v27 + v25;
						uint32_t v29 = v25; // 0xd23a0
						if (v27 != 0) {
							// 0xd2388
							v8 = v28 + 4;
							*(int16_t *)v26 = *(int16_t *)(v28 + 2);
							v9 += 2;
							v29 = v25 - 2;
							// branch -> 0xd239c
						}
						int32_t v30 = v29 / 4; // 0xd23a0
						v14 = v30;
						int32_t v31; // 0xd2420
						int32_t v32; // 0xd2424
						if (v29 >= 4) {
							int32_t v33 = __asm_rlwinm_(v30, 29, 3, 31); // 0xd23a8
							v19 = v33;
							int32_t v34; // 0xd2408
							int32_t v35;
							if (v33 == 0) {
								// 0xd23a8
								v35 = v9;
								v34 = v14;
								// branch -> 0xd2408
							lab_0xd2408:;
								int32_t v36 = v8; // 0xd240c
								*(int32_t *)v35 = *(int32_t *)v36;
								int32_t v37 = v9 + 4;  // 0xd2418
								int32_t v38 = v34 - 1; // 0xd241c
								// branch -> 0xd240c
								while (v38 != 0) {
									// 0xd240c
									v36 += 4;
									*(int32_t *)v37 = *(int32_t *)v36;
									v37 += 4;
									v38--;
									// continue -> 0xd240c
								}
							lab_0xd2420:
								// 0xd2420
								v31 = v2 + 2;
								v2 = v31;
								v32 = v10 - 800;
								if (v31 >= 31) {
									result2 = v32;
									// break -> 0xd2430
									break;
								}
								v17 = v31;
								result3 = v32;
								// continue -> 0xd2358
								continue;
							} else {
								// 0xd23b4
								*(int32_t *)v9 = *(int32_t *)v8;
								*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
								*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
								*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
								*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
								*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
								*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
								int32_t v39 = v8; // 0xd23ec
								v8 = v39 + 32;
								*(int32_t *)(v9 + 28) = *(int32_t *)(v39 + 28);
								int32_t v40 = v9 + 32; // 0xd23f8
								v9 = v40;
								int32_t v41 = v19 - 1; // 0xd23fc
								// branch -> 0xd23b4
								while (v41 != 0) {
									// 0xd23b4
									*(int32_t *)v40 = *(int32_t *)v8;
									*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
									*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
									*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
									*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
									*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
									*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
									v39 = v8;
									v8 = v39 + 32;
									*(int32_t *)(v9 + 28) = *(int32_t *)(v39 + 28);
									v40 = v9 + 32;
									v9 = v40;
									v41--;
									// continue -> 0xd23b4
								}
								int32_t v42 = v14 % 8; // 0xd2400
								if (v42 == 0) {
									goto lab_0xd2420;
								}
								v35 = v40;
								v34 = v42;
								goto lab_0xd2408;
							}
							int32_t v43 = v2; // 0xd2420
							v31 = v43 + 2;
							v2 = v31;
							int32_t v44 = v10; // 0xd2424
							v32 = v44 - 800;
							v10 = v32;
							if (v31 >= 31) {
								result2 = v32;
								// break -> 0xd2430
								break;
							}
							v17 = v31;
							result3 = v32;
							// continue -> 0xd2358
							continue;
						}
						// 0xd2420
						v31 = v2 + 2;
						v2 = v31;
						v32 = v10 - 800;
						if (v31 >= 31) {
							result2 = v32;
							// break -> 0xd2430
							break;
						}
						v17 = v31;
						result3 = v32;
						// continue -> 0xd2358
						continue;
					} else {
						result2 = result3;
					}
				}
				// 0xd2430
				return result2;
			}
			// 0xd22dc
			*(int32_t *)v9 = *(int32_t *)v8;
			*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
			*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
			*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
			*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
			*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
			*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
			int32_t v45 = v8; // 0xd2314
			v8 = v45 + 32;
			*(int32_t *)(v9 + 28) = *(int32_t *)(v45 + 28);
			int32_t v46 = v9 + 32; // 0xd2320
			v9 = v46;
			int32_t v47 = v19 - 1; // 0xd2324
			// branch -> 0xd22dc
			while (v47 != 0) {
				// 0xd22dc
				*(int32_t *)v46 = *(int32_t *)v8;
				*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
				*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
				*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
				*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
				*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
				*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
				v45 = v8;
				v8 = v45 + 32;
				*(int32_t *)(v9 + 28) = *(int32_t *)(v45 + 28);
				v46 = v9 + 32;
				v9 = v46;
				v47--;
				// continue -> 0xd22dc
			}
			int32_t v48 = v14 % 8; // 0xd2328
			if (v48 == 0) {
				goto lab_0xd2348;
			}
			v21 = v46;
			v20 = v48;
			goto lab_0xd2330;
		}
		// 0xd2348
		v15 = v2 - 2;
		v2 = v15;
		v16 = v10 - 800;
		if (v15 > -1) {
			goto lab_0xd2348_3;
		}
		// 0xd2354
		v2 = 2;
		v17 = 2;
		result3 = v16;
		// branch -> 0xd2358
		while (true) {
			// 0xd2358
			if (result3 >= *(int32_t *)v1) {
				goto lab_0xd2364_2;
			}
			// 0xd2430
			return result3;
		}
	}
}

// Address range: 0xd2434 - 0xd25b0
int32_t function_d2434(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd2434
	int32_t v2 = 30;                  // r8
	int32_t result = 0;
	if (result < *(int32_t *)v1) {
		// 0xd25ac
		return result;
	}
	int32_t v3 = 30; // 0xd244c131
	while (true) {
		int32_t v4 = 32 - v3;     // 0xd2448
		int32_t v5 = v4;          // r4
		int32_t v6 = result + v3; // 0xd244c
		int32_t v7 = v6;          // r7
		int32_t v8 = result + 32; // r3
		int32_t v9 = v4;          // 0xd2470
		if (v4 % 2 != 0) {
			// 0xd2460
			v5 = v4 - 1;
			*(char *)v6 = 0;
			v7++;
			v9 = v5;
			// branch -> 0xd2470
		}
		// 0xd2470
		if (__asm_rlwinm_(v9, 0, 30, 30) != 0) {
			// 0xd2478
			v5 -= 2;
			*(int16_t *)v7 = 0;
			v7 += 2;
			// branch -> 0xd2488
		}
		uint32_t v10 = v5;     // 0xd2488
		int32_t v11 = v10 / 4; // 0xd248c
		v5 = v11;
		int32_t v12 = 0; // r5
		int32_t v13;     // 0xd24e4
		int32_t v14;     // 0xd24e8
		int32_t v15;     // 0xd2504
		int32_t result3; // 0xd24fc
		if (v10 >= 4) {
			int32_t v16 = __asm_rlwinm_(v11, 29, 3, 31); // 0xd2498
			int32_t v17 = v16;                           // ctr
			int32_t v18;                                 // 0xd24d4
			int32_t v19;
			if (v16 == 0) {
				// 0xd2498
				v19 = v7;
				v18 = v5;
				// branch -> 0xd24d4
			lab_0xd24d4:
				// 0xd24d4
				*(int32_t *)v19 = v12;
				int32_t v20 = v7 + 4;  // 0xd24dc
				int32_t v21 = v18 - 1; // 0xd24e0
				// branch -> 0xd24d8
				while (v21 != 0) {
					// 0xd24d8
					*(int32_t *)v20 = v12;
					v20 += 4;
					v21--;
					// continue -> 0xd24d8
				}
			lab_0xd24e4:
				// 0xd24e4
				v13 = v2 - 2;
				v2 = v13;
				v14 = v8 - 800;
				if (v13 > -1) {
				lab_0xd24e4_3:
					// 0xd24e4
					if (v14 < *(int32_t *)v1) {
						// break -> 0xd25ac
						break;
					}
					result = v14;
					v3 = v13;
					// continue -> 0xd2448
					continue;
				}
				// 0xd24f0
				v2 = 2;
				v15 = 2;
				result3 = v14;
				// branch -> 0xd24f4
				int32_t result2;
				while (true) {
					// 0xd24f4
					if (result3 >= *(int32_t *)v1) {
					lab_0xd2500_2:;
						int32_t v22 = 32 - v15; // 0xd2500
						v5 = v22;
						int32_t v23 = result3 + v15; // 0xd2504
						v7 = v23;
						v8 = result3 + 32;
						int32_t v24 = v22; // 0xd2528
						if (v22 % 2 != 0) {
							// 0xd2518
							v5 = v22 - 1;
							*(char *)v23 = 0;
							v7++;
							v24 = v5;
							// branch -> 0xd2528
						}
						// 0xd2528
						if (__asm_rlwinm_(v24, 0, 30, 30) != 0) {
							// 0xd2530
							v5 -= 2;
							*(int16_t *)v7 = 0;
							v7 += 2;
							// branch -> 0xd2540
						}
						uint32_t v25 = v5;     // 0xd2540
						int32_t v26 = v25 / 4; // 0xd2544
						v5 = v26;
						v12 = 0;
						int32_t v27; // 0xd259c
						int32_t v28; // 0xd25a0
						if (v25 >= 4) {
							int32_t v29 = __asm_rlwinm_(v26, 29, 3, 31); // 0xd2550
							v17 = v29;
							int32_t v30; // 0xd258c
							int32_t v31;
							if (v29 == 0) {
								// 0xd2550
								v31 = v7;
								v30 = v5;
								// branch -> 0xd258c
							lab_0xd258c:
								// 0xd258c
								*(int32_t *)v31 = v12;
								int32_t v32 = v7 + 4;  // 0xd2594
								int32_t v33 = v30 - 1; // 0xd2598
								// branch -> 0xd2590
								while (v33 != 0) {
									// 0xd2590
									*(int32_t *)v32 = v12;
									v32 += 4;
									v33--;
									// continue -> 0xd2590
								}
							lab_0xd259c:
								// 0xd259c
								v27 = v2 + 2;
								v2 = v27;
								v28 = v8 - 800;
								if (v27 >= 31) {
									result2 = v28;
									// break -> 0xd25ac
									break;
								}
								v15 = v27;
								result3 = v28;
								// continue -> 0xd24f4
								continue;
							} else {
								// 0xd255c
								*(int32_t *)v7 = v12;
								*(int32_t *)(v7 + 4) = v12;
								*(int32_t *)(v7 + 8) = v12;
								*(int32_t *)(v7 + 12) = v12;
								*(int32_t *)(v7 + 16) = v12;
								*(int32_t *)(v7 + 20) = v12;
								*(int32_t *)(v7 + 24) = v12;
								*(int32_t *)(v7 + 28) = v12;
								int32_t v34 = v7 + 32; // 0xd257c
								v7 = v34;
								int32_t v35 = v17 - 1; // 0xd2580
								// branch -> 0xd255c
								while (v35 != 0) {
									// 0xd255c
									*(int32_t *)v34 = v12;
									*(int32_t *)(v7 + 4) = v12;
									*(int32_t *)(v7 + 8) = v12;
									*(int32_t *)(v7 + 12) = v12;
									*(int32_t *)(v7 + 16) = v12;
									*(int32_t *)(v7 + 20) = v12;
									*(int32_t *)(v7 + 24) = v12;
									*(int32_t *)(v7 + 28) = v12;
									v34 = v7 + 32;
									v7 = v34;
									v35--;
									// continue -> 0xd255c
								}
								int32_t v36 = v5 % 8; // 0xd2584
								if (v36 == 0) {
									goto lab_0xd259c;
								}
								v31 = v34;
								v30 = v36;
								goto lab_0xd258c;
							}
							int32_t v37 = v2; // 0xd259c
							v27 = v37 + 2;
							v2 = v27;
							int32_t v38 = v8; // 0xd25a0
							v28 = v38 - 800;
							v8 = v28;
							if (v27 >= 31) {
								result2 = v28;
								// break -> 0xd25ac
								break;
							}
							v15 = v27;
							result3 = v28;
							// continue -> 0xd24f4
							continue;
						}
						// 0xd259c
						v27 = v2 + 2;
						v2 = v27;
						v28 = v8 - 800;
						if (v27 >= 31) {
							result2 = v28;
							// break -> 0xd25ac
							break;
						}
						v15 = v27;
						result3 = v28;
						// continue -> 0xd24f4
						continue;
					} else {
						result2 = result3;
					}
				}
				// 0xd25ac
				return result2;
			}
			// 0xd24a4
			*(int32_t *)v7 = v12;
			*(int32_t *)(v7 + 4) = v12;
			*(int32_t *)(v7 + 8) = v12;
			*(int32_t *)(v7 + 12) = v12;
			*(int32_t *)(v7 + 16) = v12;
			*(int32_t *)(v7 + 20) = v12;
			*(int32_t *)(v7 + 24) = v12;
			*(int32_t *)(v7 + 28) = v12;
			int32_t v39 = v7 + 32; // 0xd24c4
			v7 = v39;
			int32_t v40 = v17 - 1; // 0xd24c8
			// branch -> 0xd24a4
			while (v40 != 0) {
				// 0xd24a4
				*(int32_t *)v39 = v12;
				*(int32_t *)(v7 + 4) = v12;
				*(int32_t *)(v7 + 8) = v12;
				*(int32_t *)(v7 + 12) = v12;
				*(int32_t *)(v7 + 16) = v12;
				*(int32_t *)(v7 + 20) = v12;
				*(int32_t *)(v7 + 24) = v12;
				*(int32_t *)(v7 + 28) = v12;
				v39 = v7 + 32;
				v7 = v39;
				v40--;
				// continue -> 0xd24a4
			}
			int32_t v41 = v5 % 8; // 0xd24cc
			if (v41 == 0) {
				goto lab_0xd24e4;
			}
			v19 = v39;
			v18 = v41;
			goto lab_0xd24d4;
		}
		// 0xd24e4
		v13 = v2 - 2;
		v2 = v13;
		v14 = v8 - 800;
		if (v13 > -1) {
			goto lab_0xd24e4_3;
		}
		// 0xd24f0
		v2 = 2;
		v15 = 2;
		result3 = v14;
		// branch -> 0xd24f4
		while (true) {
			// 0xd24f4
			if (result3 >= *(int32_t *)v1) {
				goto lab_0xd2500_2;
			}
			// 0xd25ac
			return result3;
		}
	}
}

// Address range: 0xd25b0 - 0xd26d8
int32_t function_d25b0(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1;       // bp-24
	int32_t v2 = &v1; // 0xd25d4
	int32_t v3 = &a2; // 0xd25dc
	v1 = 30;
	int32_t v4;      // 0xd2670
	int32_t v5;      // 0xd267c
	int32_t v6;      // 0xd26a8
	int32_t v7;      // 0xd26ac
	int32_t result2; // 0xd26a4
	int32_t v8;
	int32_t result; // 0xd2660
	if (function_d0424(&a1, v3, v2, 0) != 0) {
		int32_t v9 = v1;
		if (v9 > -1) {
			int32_t v10 = 32 - v9; // 0xd25f4
			g39 = v10;
			a1 += v9;
			a2 += __asm_rlwinm(v10, 0, 30, 30);
			function_da338((char *)&a1, v3, a3);
			int32_t v11 = a1 - 800; // 0xd262c
			int32_t v12 = v1 - 2;   // 0xd2630
			a1 = v11;
			v1 = v12;
			// branch -> 0xd25f4
			while (v12 > 0xffffffff) {
				// 0xd25f4
				v10 = 32 - v12;
				g39 = v10;
				a1 = v12 + v11;
				a2 += __asm_rlwinm(v10, 0, 30, 30);
				function_da338((char *)&a1, v3, a3);
				v11 = a1 - 800;
				v12 = v1 - 2;
				a1 = v11;
				v1 = v12;
				// continue -> 0xd25f4
			}
			// 0xd2648
			v1 = 2;
			result = function_d035c(&a1, v3, v2, 0);
			if (result == 0) {
				// 0xd26c4
				return 0;
			}
			// 0xd26b8
			v8 = v1;
			if (v8 >= 31) {
				// 0xd26c4
				return result;
			}
			// 0xd2670
			v4 = 32 - v8;
			g39 = v4;
			v5 = __asm_rlwinm(v4, 0, 30, 30);
			a1 += v8;
			a2 += v5;
			function_da338((char *)&a1, v3, a3);
			result2 = v1;
			v6 = a1 - 800;
			v7 = result2 + 2;
			a1 = v6;
			v1 = v7;
			// branch -> 0xd2670
			while (v7 < 31) {
				// 0xd2670
				v4 = 32 - v7;
				g39 = v4;
				v5 = __asm_rlwinm(v4, 0, 30, 30);
				a1 = v7 + v6;
				a2 += v5;
				function_da338((char *)&a1, v3, a3);
				result2 = v1;
				v6 = a1 - 800;
				v7 = result2 + 2;
				a1 = v6;
				v1 = v7;
				// continue -> 0xd2670
			}
			// 0xd26c4
			return result2;
		}
	}
	// 0xd2648
	v1 = 2;
	result = function_d035c(&a1, v3, v2, 0);
	if (result == 0) {
		// 0xd26c4
		return 0;
	}
	// 0xd26b8
	v8 = v1;
	if (v8 >= 31) {
		// 0xd26c4
		return result;
	}
	// 0xd2670
	v4 = 32 - v8;
	g39 = v4;
	v5 = __asm_rlwinm(v4, 0, 30, 30);
	a1 += v8;
	a2 += v5;
	function_da338((char *)&a1, v3, a3);
	result2 = v1;
	v6 = a1 - 800;
	v7 = result2 + 2;
	a1 = v6;
	v1 = v7;
	// branch -> 0xd2670
	while (v7 < 31) {
		// 0xd2670
		v4 = 32 - v7;
		g39 = v4;
		v5 = __asm_rlwinm(v4, 0, 30, 30);
		a1 = v7 + v6;
		a2 += v5;
		function_da338((char *)&a1, v3, a3);
		result2 = v1;
		v6 = a1 - 800;
		v7 = result2 + 2;
		a1 = v6;
		v1 = v7;
		// continue -> 0xd2670
	}
	// 0xd26c4
	return result2;
}

// Address range: 0xd26d8 - 0xd292c
int32_t function_d26d8(int16_t *a1, int32_t a2)
{
	int16_t *v1 = (int16_t *)(int32_t)a1; // bp+24
	int32_t v2;                           // bp-8
	int32_t v3 = &v2;                     // 0xd26f4
	int32_t v4 = &a2;                     // 0xd26fc
	v2 = 30;
	int32_t v5;  // r4
	int32_t v6;  // r5
	int32_t v7;  // 0xd284c
	int32_t v8;  // 0xd2878
	int32_t v9;  // 0xd2830
	int32_t v10; // 0xd2834
	int32_t v11; // 0xd283c
	int32_t v12; // 0xd2838
	int32_t v13;
	int32_t result; // 0xd281c
	if (function_d0424((int32_t *)&v1, v4, v3, 0) != 0) {
		int32_t v14 = v2;
		v6 = v14;
		if (v14 > -1) {
			int16_t *v15 = v1; // 0xd2714
			// branch -> 0xd2714
			int32_t v16; // ctr
			int32_t v17; // r3
			while (true) {
				int32_t v18 = 32 - v14;                      // 0xd2718
				int32_t v19 = __asm_rlwinm_(v18, 0, 30, 30); // 0xd271c
				int32_t v20 = a2;                            // 0xd2720
				v5 = v20;
				int32_t v21 = v6 + (int32_t)v15; // 0xd2724
				v6 = v21;
				a2 = v20 + v19 + v18;
				v1 = (int16_t *)(v18 + v21);
				uint32_t v22 = v18; // 0xd2760
				if (v19 != 0) {
					// 0xd2748
					v5 = v20 + 4;
					*(int16_t *)v21 = *(int16_t *)(v20 + 2);
					v6 += 2;
					v22 = v18 - 2;
					// branch -> 0xd275c
				}
				int32_t v23 = v22 / 4; // 0xd2760
				v17 = v23;
				int32_t v24;  // 0xd27ec
				int16_t *v25; // 0xd27f0
				if (v22 >= 4) {
					int32_t v26 = __asm_rlwinm_(v23, 29, 3, 31); // 0xd2768
					v16 = v26;
					int32_t v27; // 0xd27c8
					int32_t v28;
					if (v26 == 0) {
						// 0xd2768
						v28 = v6;
						v27 = v17;
						// branch -> 0xd27c8
					lab_0xd27c8:;
						int32_t v29 = v5; // 0xd27cc
						*(int32_t *)v28 = *(int32_t *)v29;
						int32_t v30 = v6 + 4;  // 0xd27d8
						int32_t v31 = v27 - 1; // 0xd27dc
						// branch -> 0xd27cc
						while (v31 != 0) {
							// 0xd27cc
							v29 += 4;
							*(int32_t *)v30 = *(int32_t *)v29;
							v30 += 4;
							v31--;
							// continue -> 0xd27cc
						}
					lab_0xd27e0:
						// 0xd27e0
						v24 = v2 - 2;
						v25 = (int16_t *)((int32_t)v1 - 800);
						v1 = v25;
						v2 = v24;
						v6 = v24;
						if (v24 <= 0xffffffff) {
							// break -> 0xd2804
							break;
						}
						v14 = v24;
						v15 = v25;
						// continue -> 0xd2714
						continue;
					} else {
						// 0xd2774
						*(int32_t *)v6 = *(int32_t *)v5;
						*(int32_t *)(v6 + 4) = *(int32_t *)(v5 + 4);
						*(int32_t *)(v6 + 8) = *(int32_t *)(v5 + 8);
						*(int32_t *)(v6 + 12) = *(int32_t *)(v5 + 12);
						*(int32_t *)(v6 + 16) = *(int32_t *)(v5 + 16);
						*(int32_t *)(v6 + 20) = *(int32_t *)(v5 + 20);
						*(int32_t *)(v6 + 24) = *(int32_t *)(v5 + 24);
						int32_t v32 = v5; // 0xd27ac
						v5 = v32 + 32;
						*(int32_t *)(v6 + 28) = *(int32_t *)(v32 + 28);
						int32_t v33 = v6 + 32; // 0xd27b8
						v6 = v33;
						int32_t v34 = v16 - 1; // 0xd27bc
						// branch -> 0xd2774
						while (v34 != 0) {
							// 0xd2774
							*(int32_t *)v33 = *(int32_t *)v5;
							*(int32_t *)(v6 + 4) = *(int32_t *)(v5 + 4);
							*(int32_t *)(v6 + 8) = *(int32_t *)(v5 + 8);
							*(int32_t *)(v6 + 12) = *(int32_t *)(v5 + 12);
							*(int32_t *)(v6 + 16) = *(int32_t *)(v5 + 16);
							*(int32_t *)(v6 + 20) = *(int32_t *)(v5 + 20);
							*(int32_t *)(v6 + 24) = *(int32_t *)(v5 + 24);
							v32 = v5;
							v5 = v32 + 32;
							*(int32_t *)(v6 + 28) = *(int32_t *)(v32 + 28);
							v33 = v6 + 32;
							v6 = v33;
							v34--;
							// continue -> 0xd2774
						}
						int32_t v35 = v17 % 8; // 0xd27c0
						if (v35 == 0) {
							goto lab_0xd27e0;
						}
						v28 = v33;
						v27 = v35;
						goto lab_0xd27c8;
					}
				}
				// 0xd27e0
				v24 = v2 - 2;
				v25 = (int16_t *)((int32_t)v1 - 800);
				v1 = v25;
				v2 = v24;
				v6 = v24;
				if (v24 <= 0xffffffff) {
					// break -> 0xd2804
					break;
				}
				v14 = v24;
				v15 = v25;
				// continue -> 0xd2714
			}
			// 0xd2804
			v2 = 2;
			result = function_d035c((int32_t *)&v1, v4, v3, 0);
			if (result == 0) {
				// 0xd291c
				return 0;
			}
			// 0xd2910
			v13 = v2;
			v6 = v13;
			if (v13 >= 31) {
				// 0xd291c
				return result;
			}
			int32_t v36 = v13; // 0xd2830
			int16_t *v37 = v1; // 0xd282c
			// branch -> 0xd282c
			int32_t result2; // 0xd28fc
			while (true) {
				// 0xd282c
				v9 = 32 - v36;
				v10 = __asm_rlwinm_(v9, 0, 30, 30);
				v12 = a2;
				v5 = v12;
				v11 = v6 + (int32_t)v37;
				v6 = v11;
				v7 = v9;
				a2 = v12 + v10 + v7;
				v1 = (int16_t *)(v7 + v11);
				v8 = v7;
				if (v10 != 0) {
				lab_0xd2860:
					// 0xd2860
					v5 = v12 + 4;
					*(int16_t *)v11 = *(int16_t *)(v12 + 2);
					v6 += 2;
					v8 = v7 - 2;
					// branch -> 0xd2874
				}
			lab_0xd2874:;
				int32_t v38 = v8 / 4; // 0xd2878
				v17 = v38;
				int32_t v39;  // 0xd2904
				int16_t *v40; // 0xd2908
				if (v8 >= 4) {
					int32_t v41 = __asm_rlwinm_(v38, 29, 3, 31); // 0xd2880
					v16 = v41;
					int32_t v42; // 0xd28e0
					int32_t v43;
					if (v41 == 0) {
						// 0xd2880
						v43 = v6;
						v42 = v17;
						// branch -> 0xd28e0
					lab_0xd28e0:;
						int32_t v44 = v5; // 0xd28e4
						*(int32_t *)v43 = *(int32_t *)v44;
						int32_t v45 = v6 + 4;  // 0xd28f0
						int32_t v46 = v42 - 1; // 0xd28f4
						// branch -> 0xd28e4
						while (v46 != 0) {
							// 0xd28e4
							v44 += 4;
							*(int32_t *)v45 = *(int32_t *)v44;
							v45 += 4;
							v46--;
							// continue -> 0xd28e4
						}
					lab_0xd28f8:
						// 0xd28f8
						result2 = v2;
						v39 = result2 + 2;
						v40 = (int16_t *)((int32_t)v1 - 800);
						v1 = v40;
						v2 = v39;
						v6 = v39;
						if (v39 >= 31) {
							// break -> 0xd291c
							break;
						}
						v36 = v39;
						v37 = v40;
						// continue -> 0xd282c
						continue;
					} else {
						// 0xd288c
						*(int32_t *)v6 = *(int32_t *)v5;
						*(int32_t *)(v6 + 4) = *(int32_t *)(v5 + 4);
						*(int32_t *)(v6 + 8) = *(int32_t *)(v5 + 8);
						*(int32_t *)(v6 + 12) = *(int32_t *)(v5 + 12);
						*(int32_t *)(v6 + 16) = *(int32_t *)(v5 + 16);
						*(int32_t *)(v6 + 20) = *(int32_t *)(v5 + 20);
						*(int32_t *)(v6 + 24) = *(int32_t *)(v5 + 24);
						int32_t v47 = v5; // 0xd28c4
						v5 = v47 + 32;
						*(int32_t *)(v6 + 28) = *(int32_t *)(v47 + 28);
						int32_t v48 = v6 + 32; // 0xd28d0
						v6 = v48;
						int32_t v49 = v16 - 1; // 0xd28d4
						// branch -> 0xd288c
						while (v49 != 0) {
							// 0xd288c
							*(int32_t *)v48 = *(int32_t *)v5;
							*(int32_t *)(v6 + 4) = *(int32_t *)(v5 + 4);
							*(int32_t *)(v6 + 8) = *(int32_t *)(v5 + 8);
							*(int32_t *)(v6 + 12) = *(int32_t *)(v5 + 12);
							*(int32_t *)(v6 + 16) = *(int32_t *)(v5 + 16);
							*(int32_t *)(v6 + 20) = *(int32_t *)(v5 + 20);
							*(int32_t *)(v6 + 24) = *(int32_t *)(v5 + 24);
							v47 = v5;
							v5 = v47 + 32;
							*(int32_t *)(v6 + 28) = *(int32_t *)(v47 + 28);
							v48 = v6 + 32;
							v6 = v48;
							v49--;
							// continue -> 0xd288c
						}
						int32_t v50 = v17 % 8; // 0xd28d8
						if (v50 == 0) {
							goto lab_0xd28f8;
						}
						v43 = v48;
						v42 = v50;
						goto lab_0xd28e0;
					}
					int16_t *v51 = v1; // 0xd28f8
					result2 = v2;
					v17 = result2;
					int32_t v52 = (int32_t)v51 - 800; // 0xd2900
					v5 = v52;
					v39 = result2 + 2;
					v40 = (int16_t *)v52;
					v1 = v40;
					v2 = v39;
					v6 = v39;
					if (v39 >= 31) {
						// break -> 0xd291c
						break;
					}
					v36 = v39;
					v37 = v40;
					// continue -> 0xd282c
					continue;
				}
				// 0xd28f8
				result2 = v2;
				v39 = result2 + 2;
				v40 = (int16_t *)((int32_t)v1 - 800);
				v1 = v40;
				v2 = v39;
				v6 = v39;
				if (v39 >= 31) {
					// break -> 0xd291c
					break;
				}
				v36 = v39;
				v37 = v40;
				// continue -> 0xd282c
			}
			// 0xd291c
			return result2;
		}
	}
	// 0xd2804
	v2 = 2;
	result = function_d035c((int32_t *)&v1, v4, v3, 0);
	if (result == 0) {
		// 0xd291c
		return 0;
	}
	// 0xd2910
	v13 = v2;
	if (v13 < 31) {
		// 0xd282c
		// branch -> 0xd282c
		while (true) {
			// 0xd282c
			v9 = 32 - v13;
			v10 = __asm_rlwinm_(v9, 0, 30, 30);
			v12 = a2;
			v5 = v12;
			v11 = v13 + (int32_t)v1;
			v6 = v11;
			v7 = v9;
			a2 = v12 + v10 + v7;
			v1 = (int16_t *)(v7 + v11);
			if (v10 == 0) {
				v8 = v7;
				goto lab_0xd2874;
			}
			goto lab_0xd2860;
		}
	}
	// 0xd291c
	return result;
}

// Address range: 0xd292c - 0xd2ab8
int32_t function_d292c(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd292c
	int32_t v2 = 30;                  // r8
	int32_t v3 = 30;                  // 0xd294c
	int32_t v4 = 0;                   // 0xd294c
	// branch -> 0xd2934
	while (true) {
		// 0xd2934
		if (v4 < *(int32_t *)v1) {
			int32_t v5 = 32 - v3; // 0xd2948
			int32_t v6 = v5;      // r4
			int32_t v7 = v4 + v3; // 0xd294c
			int32_t v8 = v7;      // r7
			int32_t v9 = v4 + 32; // r3
			int32_t v10 = v5;     // 0xd2970
			if (v5 % 2 != 0) {
				// 0xd2960
				v6 = v5 - 1;
				*(char *)v7 = 0;
				v8++;
				v10 = v6;
				// branch -> 0xd2970
			}
			// 0xd2970
			if (__asm_rlwinm_(v10, 0, 30, 30) != 0) {
				// 0xd2978
				v6 -= 2;
				*(int16_t *)v8 = 0;
				v8 += 2;
				// branch -> 0xd2988
			}
			uint32_t v11 = v6;     // 0xd2988
			int32_t v12 = v11 / 4; // 0xd298c
			v6 = v12;
			int32_t v13 = 0; // r5
			int32_t v14;     // 0xd2a0c
			int32_t v15;     // 0xd29e4
			int32_t v16;     // 0xd29e8
			int32_t v17;     // 0xd2a0c
			if (v11 >= 4) {
				int32_t v18 = __asm_rlwinm_(v12, 29, 3, 31); // 0xd2998
				int32_t v19 = v18;                           // ctr
				int32_t v20;                                 // 0xd29d4
				int32_t v21;
				if (v18 == 0) {
					// 0xd2998
					v21 = v8;
					v20 = v6;
					// branch -> 0xd29d4
				lab_0xd29d4:
					// 0xd29d4
					*(int32_t *)v21 = v13;
					int32_t v22 = v8 + 4;  // 0xd29dc
					int32_t v23 = v20 - 1; // 0xd29e0
					// branch -> 0xd29d8
					while (v23 != 0) {
						// 0xd29d8
						*(int32_t *)v22 = v13;
						v22 += 4;
						v23--;
						// continue -> 0xd29d8
					}
				lab_0xd29e4:
					// 0xd29e4
					v15 = v2 - 2;
					v2 = v15;
					v16 = v9 - 800;
					if (v15 <= -1) {
						// 0xd29f0
						v2 = 2;
						v17 = 2;
						v14 = v16;
						// branch -> 0xd29f4
						int32_t result; // 0xd2aa8
						while (true) {
							// 0xd29f4
							int32_t v24; // 0xd2aa4
							if (v14 < *(int32_t *)v1) {
							lab_0xd2a08_3:;
								int32_t v25 = 32 - v17; // 0xd2a08
								v6 = v25;
								int32_t v26 = v14 + v17; // 0xd2a0c
								v8 = v26;
								v9 = v14 + 32;
								int32_t v27 = v25; // 0xd2a30
								if (v25 % 2 != 0) {
									// 0xd2a20
									v6 = v25 - 1;
									*(char *)v26 = 0;
									v8++;
									v27 = v6;
									// branch -> 0xd2a30
								}
								// 0xd2a30
								if (__asm_rlwinm_(v27, 0, 30, 30) != 0) {
									// 0xd2a38
									v6 -= 2;
									*(int16_t *)v8 = 0;
									v8 += 2;
									// branch -> 0xd2a48
								}
								uint32_t v28 = v6;     // 0xd2a48
								int32_t v29 = v28 / 4; // 0xd2a4c
								v6 = v29;
								v13 = 0;
								if (v28 >= 4) {
									int32_t v30 = __asm_rlwinm_(v29, 29, 3, 31); // 0xd2a58
									v19 = v30;
									int32_t v31; // 0xd2a94
									int32_t v32;
									if (v30 == 0) {
										// 0xd2a58
										v32 = v8;
										v31 = v6;
										// branch -> 0xd2a94
									lab_0xd2a94:
										// 0xd2a94
										*(int32_t *)v32 = v13;
										int32_t v33 = v8 + 4;  // 0xd2a9c
										int32_t v34 = v31 - 1; // 0xd2aa0
										// branch -> 0xd2a98
										while (v34 != 0) {
											// 0xd2a98
											*(int32_t *)v33 = v13;
											v33 += 4;
											v34--;
											// continue -> 0xd2a98
										}
									lab_0xd2aa4:
										// 0xd2aa4
										v24 = v2 + 2;
										v2 = v24;
										result = v9 - 800;
										if (v24 >= 31) {
											// break -> 0xd2ab4
											break;
										}
										v17 = v24;
										v14 = result;
										// continue -> 0xd29f4
										continue;
									} else {
										// 0xd2a64
										*(int32_t *)v8 = v13;
										*(int32_t *)(v8 + 4) = v13;
										*(int32_t *)(v8 + 8) = v13;
										*(int32_t *)(v8 + 12) = v13;
										*(int32_t *)(v8 + 16) = v13;
										*(int32_t *)(v8 + 20) = v13;
										*(int32_t *)(v8 + 24) = v13;
										*(int32_t *)(v8 + 28) = v13;
										int32_t v35 = v8 + 32; // 0xd2a84
										v8 = v35;
										int32_t v36 = v19 - 1; // 0xd2a88
										// branch -> 0xd2a64
										while (v36 != 0) {
											// 0xd2a64
											*(int32_t *)v35 = v13;
											*(int32_t *)(v8 + 4) = v13;
											*(int32_t *)(v8 + 8) = v13;
											*(int32_t *)(v8 + 12) = v13;
											*(int32_t *)(v8 + 16) = v13;
											*(int32_t *)(v8 + 20) = v13;
											*(int32_t *)(v8 + 24) = v13;
											*(int32_t *)(v8 + 28) = v13;
											v35 = v8 + 32;
											v8 = v35;
											v36--;
											// continue -> 0xd2a64
										}
										int32_t v37 = v6 % 8; // 0xd2a8c
										if (v37 == 0) {
											goto lab_0xd2aa4;
										}
										v32 = v35;
										v31 = v37;
										goto lab_0xd2a94;
									}
								lab_0xd2aa4_2:
									// 0xd2aa4
									v24 = v2 + 2;
									v2 = v24;
									result = v14 - 768;
									if (v24 >= 31) {
										// break -> 0xd2ab4
										break;
									}
									v17 = v24;
									v14 = result;
									// continue -> 0xd29f4
									continue;
								}
							} else {
							lab_0xd2a00_3:
								// 0xd2a00
								// branch -> 0xd2aa4
								goto lab_0xd2aa4_2;
							}
							// 0xd2aa4
							v24 = v2 + 2;
							v2 = v24;
							result = v9 - 800;
							if (v24 >= 31) {
								// break -> 0xd2ab4
								break;
							}
							v17 = v24;
							v14 = result;
							// continue -> 0xd29f4
						}
						// 0xd2ab4
						return result;
					}
				lab_0xd29e4_5:
					// 0xd29e4
					v3 = v15;
					v4 = v16;
					// branch -> 0xd2934
					continue;
				} else {
					// 0xd29a4
					*(int32_t *)v8 = v13;
					*(int32_t *)(v8 + 4) = v13;
					*(int32_t *)(v8 + 8) = v13;
					*(int32_t *)(v8 + 12) = v13;
					*(int32_t *)(v8 + 16) = v13;
					*(int32_t *)(v8 + 20) = v13;
					*(int32_t *)(v8 + 24) = v13;
					*(int32_t *)(v8 + 28) = v13;
					int32_t v38 = v8 + 32; // 0xd29c4
					v8 = v38;
					int32_t v39 = v19 - 1; // 0xd29c8
					// branch -> 0xd29a4
					while (v39 != 0) {
						// 0xd29a4
						*(int32_t *)v38 = v13;
						*(int32_t *)(v8 + 4) = v13;
						*(int32_t *)(v8 + 8) = v13;
						*(int32_t *)(v8 + 12) = v13;
						*(int32_t *)(v8 + 16) = v13;
						*(int32_t *)(v8 + 20) = v13;
						*(int32_t *)(v8 + 24) = v13;
						*(int32_t *)(v8 + 28) = v13;
						v38 = v8 + 32;
						v8 = v38;
						v39--;
						// continue -> 0xd29a4
					}
					int32_t v40 = v6 % 8; // 0xd29cc
					if (v40 == 0) {
						goto lab_0xd29e4;
					}
					v21 = v38;
					v20 = v40;
					goto lab_0xd29d4;
				}
			}
		lab_0xd29e4_4:
			// 0xd29e4
			v15 = v2 - 2;
			v2 = v15;
			v16 = v4 - 768;
			if (v15 > -1) {
				goto lab_0xd29e4_5;
			}
			// 0xd29f0
			v2 = 2;
			v17 = 2;
			v14 = v16;
			// branch -> 0xd29f4
			while (true) {
				// 0xd29f4
				if (v14 < *(int32_t *)v1) {
					goto lab_0xd2a08_3;
				}
				goto lab_0xd2a00_3;
			}
		} else {
			// 0xd2940
			// branch -> 0xd29e4
			goto lab_0xd29e4_4;
		}
	}
}

// Address range: 0xd2ab8 - 0xd2c3c
int32_t function_d2ab8(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd2ac8
	int32_t v4 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t v5 = &a2;    // 0xd2b60
	int32_t result = a1; // 0xd2b04
	// branch -> 0xd2af4
	int32_t v6; // 0xd2b78
	while (true) {
		// 0xd2af4
		if (result < *(int32_t *)v2) {
			// 0xd2c1c
			return result;
		}
		// 0xd2b04
		a1 = v4 + result;
		int32_t *v7 = (int32_t *)v3; // 0xd2b0c
		*v7 = *v7 ^ 1;
		int32_t v8 = 32 - v4; // 0xd2b4c
		g39 = v8;
		a2 += __asm_rlwinm(v8, 0, 30, 30);
		if (*(int32_t *)v3 == 0) {
			// 0xd2b4c
			function_da6a4((char *)&a1, v5, a3);
			// branch -> 0xd2b70
		} else {
			// 0xd2b24
			function_da538((char *)&a1, v5, a3);
			// branch -> 0xd2b70
		}
		int32_t v9 = v4 - 2; // 0xd2b74
		v4 = v9;
		v6 = a1 - 800;
		a1 = v6;
		if (v9 <= 0xffffffff) {
			// break -> 0xd2b84
			break;
		}
		result = v6;
		// continue -> 0xd2af4
	}
	// 0xd2b84
	v4 = 2;
	int32_t v10 = 2;      // 0xd2b98
	int32_t result2 = v6; // 0xd2b98
	// branch -> 0xd2b88
	int32_t result3; // 0xd2c04
	while (true) {
		// 0xd2b88
		if (result2 < *(int32_t *)v2) {
			// 0xd2c1c
			return result2;
		}
		// 0xd2b98
		a1 = result2 + v10;
		int32_t *v11 = (int32_t *)v3; // 0xd2ba0
		*v11 = *v11 ^ 1;
		int32_t v12 = 32 - v4; // 0xd2be0
		g39 = v12;
		a2 += __asm_rlwinm(v12, 0, 30, 30);
		if (*(int32_t *)v3 == 0) {
			// 0xd2be0
			function_da6a4((char *)&a1, v5, a3);
			// branch -> 0xd2c04
		} else {
			// 0xd2bb8
			function_da538((char *)&a1, v5, a3);
			// branch -> 0xd2c04
		}
		// 0xd2c04
		result3 = a1;
		int32_t v13 = v4 + 2; // 0xd2c08
		v4 = v13;
		int32_t v14 = result3 - 800; // 0xd2c10
		a1 = v14;
		if (v13 >= 31) {
			// break -> 0xd2c1c
			break;
		}
		v10 = v13;
		result2 = v14;
		// continue -> 0xd2b88
	}
	// 0xd2c1c
	return result3;
}

// Address range: 0xd2c3c - 0xd2da4
int32_t function_d2c3c(int32_t a1, int32_t a2)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd2c4c
	int32_t v4 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t v5 = &a2;    // 0xd2cd8
	int32_t result = a1; // 0xd2c80
	// branch -> 0xd2c70
	int32_t v6; // 0xd2cec
	while (true) {
		// 0xd2c70
		if (result < *(int32_t *)v2) {
			// 0xd2d88
			return result;
		}
		// 0xd2c80
		a1 = v4 + result;
		int32_t *v7 = (int32_t *)v3; // 0xd2c88
		*v7 = *v7 ^ 1;
		int32_t v8 = 32 - v4; // 0xd2cc4
		g38 = v8;
		a2 += __asm_rlwinm(v8, 0, 30, 30);
		if (*(int32_t *)v3 == 0) {
			// 0xd2cc4
			function_d9ee4((char *)&a1, v5);
			// branch -> 0xd2ce4
		} else {
			// 0xd2ca0
			function_da004((char *)&a1, v5);
			// branch -> 0xd2ce4
		}
		int32_t v9 = v4 - 2; // 0xd2ce8
		v4 = v9;
		v6 = a1 - 800;
		a1 = v6;
		if (v9 <= 0xffffffff) {
			// break -> 0xd2cf8
			break;
		}
		result = v6;
		// continue -> 0xd2c70
	}
	// 0xd2cf8
	v4 = 2;
	int32_t v10 = 2;      // 0xd2d0c
	int32_t result2 = v6; // 0xd2d0c
	// branch -> 0xd2cfc
	int32_t result3; // 0xd2d70
	while (true) {
		// 0xd2cfc
		if (result2 < *(int32_t *)v2) {
			// 0xd2d88
			return result2;
		}
		// 0xd2d0c
		a1 = result2 + v10;
		int32_t *v11 = (int32_t *)v3; // 0xd2d14
		*v11 = *v11 ^ 1;
		int32_t v12 = 32 - v4; // 0xd2d50
		g38 = v12;
		a2 += __asm_rlwinm(v12, 0, 30, 30);
		if (*(int32_t *)v3 == 0) {
			// 0xd2d50
			function_d9ee4((char *)&a1, v5);
			// branch -> 0xd2d70
		} else {
			// 0xd2d2c
			function_da004((char *)&a1, v5);
			// branch -> 0xd2d70
		}
		// 0xd2d70
		result3 = a1;
		int32_t v13 = v4 + 2; // 0xd2d74
		v4 = v13;
		int32_t v14 = result3 - 800; // 0xd2d7c
		a1 = v14;
		if (v13 >= 31) {
			// break -> 0xd2d88
			break;
		}
		v10 = v13;
		result2 = v14;
		// continue -> 0xd2cfc
	}
	// 0xd2d88
	return result3;
}

// Address range: 0xd2da4 - 0xd2ec8
int32_t function_d2da4(int32_t a1)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd2db4
	int32_t v4 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t result = a1; // 0xd2de4
	// branch -> 0xd2dd4
	int32_t v5; // 0xd2e30
	while (true) {
		// 0xd2dd4
		if (result < *(int32_t *)v2) {
			// 0xd2eac
			return result;
		}
		// 0xd2de4
		a1 = v4 + result;
		int32_t *v6 = (int32_t *)v3; // 0xd2dec
		*v6 = *v6 ^ 1;
		int32_t v7 = 32 - v4; // 0xd2e1c
		if (*(int32_t *)v3 == 0) {
			// 0xd2e18
			function_da178((char *)&a1, v7, 0);
			// branch -> 0xd2e28
		} else {
			// 0xd2e04
			function_da238((char *)&a1, v7, 0);
			// branch -> 0xd2e28
		}
		int32_t v8 = v4 - 2; // 0xd2e2c
		v4 = v8;
		v5 = a1 - 800;
		a1 = v5;
		if (v8 <= 0xffffffff) {
			// break -> 0xd2e3c
			break;
		}
		result = v5;
		// continue -> 0xd2dd4
	}
	// 0xd2e3c
	v4 = 2;
	int32_t v9 = 2;       // 0xd2e50
	int32_t result2 = v5; // 0xd2e50
	// branch -> 0xd2e40
	int32_t result3; // 0xd2e94
	while (true) {
		// 0xd2e40
		if (result2 < *(int32_t *)v2) {
			// 0xd2eac
			return result2;
		}
		// 0xd2e50
		a1 = result2 + v9;
		int32_t *v10 = (int32_t *)v3; // 0xd2e58
		*v10 = *v10 ^ 1;
		int32_t v11 = 32 - v4; // 0xd2e88
		if (*(int32_t *)v3 == 0) {
			// 0xd2e84
			function_da178((char *)&a1, v11, 0);
			// branch -> 0xd2e94
		} else {
			// 0xd2e70
			function_da238((char *)&a1, v11, 0);
			// branch -> 0xd2e94
		}
		// 0xd2e94
		result3 = a1;
		int32_t v12 = v4 + 2; // 0xd2e98
		v4 = v12;
		int32_t v13 = result3 - 800; // 0xd2ea0
		a1 = v13;
		if (v12 >= 31) {
			// break -> 0xd2eac
			break;
		}
		v9 = v12;
		result2 = v13;
		// continue -> 0xd2e40
	}
	// 0xd2eac
	return result3;
}

// Address range: 0xd2ec8 - 0xd3084
int32_t function_d2ec8(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6e7c); // 0xd2ed0
	int32_t v2 = &a2;                        // 0xd2efc
	*(int32_t *)v1 = 0;
	int32_t v3;       // bp-24
	int32_t v4 = &v3; // 0xd2f04
	v3 = 30;
	int32_t v5;  // 0xd3040
	int32_t *v6; // 0xd2fe4
	int32_t v7;  // 0xd3024
	int32_t result;
	if (function_d0424(&a1, v2, v4, 1) != 0) {
		int32_t v8 = v3;
		int32_t v9 = v8; // r3
		if (v8 > -1) {
			int32_t v10 = a1; // 0xd2f1c
			// branch -> 0xd2f1c
			while (true) {
				// 0xd2f1c
				a1 = v10 + v8;
				int32_t *v11 = (int32_t *)v1; // 0xd2f28
				*v11 = *v11 ^ 1;
				int32_t v12 = 32 - v9; // 0xd2f68
				g39 = v12;
				a2 += __asm_rlwinm(v12, 0, 30, 30);
				if (*(int32_t *)v1 == 0) {
					// 0xd2f68
					function_da6a4((char *)&a1, v2, a3);
					// branch -> 0xd2f8c
				} else {
					// 0xd2f40
					function_da538((char *)&a1, v2, a3);
					// branch -> 0xd2f8c
				}
				int32_t v13 = a1 - 800; // 0xd2f94
				int32_t v14 = v3 - 2;   // 0xd2f98
				a1 = v13;
				v3 = v14;
				v9 = v14;
				if (v14 <= 0xffffffff) {
					// break -> 0xd2fb0
					break;
				}
				v8 = v14;
				v10 = v13;
				// continue -> 0xd2f1c
			}
			// 0xd2fb0
			v3 = 2;
			if (function_d035c(&a1, v2, v4, 1) == 0) {
				// 0xd306c
				return 0;
			}
			// 0xd3060
			result = v3;
			v9 = result;
			if (result >= 31) {
				// 0xd306c
				return result;
			}
			int32_t v15 = result; // 0xd2fdc
			int32_t v16 = a1;     // 0xd2fd8
			// branch -> 0xd2fd8
			int32_t result2; // 0xd3054
			while (true) {
				// 0xd2fd8
				a1 = v16 + v15;
				v6 = (int32_t *)v1;
				*v6 = *v6 ^ 1;
				v7 = 32 - v9;
				g39 = v7;
				a2 += __asm_rlwinm(v7, 0, 30, 30);
				v5 = a3;
				if (*(int32_t *)v1 == 0) {
				lab_0xd3024:
					// 0xd3024
					function_da6a4((char *)&a1, v2, v5);
					// branch -> 0xd3048
				} else {
				lab_0xd2ffc:
					// 0xd2ffc
					function_da538((char *)&a1, v2, v5);
					// branch -> 0xd3048
				}
				int32_t v17 = a1 - 800; // 0xd3050
				result2 = v3 + 2;
				a1 = v17;
				v3 = result2;
				v9 = result2;
				if (result2 >= 31) {
					// break -> 0xd306c
					break;
				}
				v15 = result2;
				v16 = v17;
				// continue -> 0xd2fd8
			}
			// 0xd306c
			return result2;
		}
	}
	// 0xd2fb0
	v3 = 2;
	if (function_d035c(&a1, v2, v4, 1) == 0) {
		// 0xd306c
		return 0;
	}
	// 0xd3060
	result = v3;
	if (result < 31) {
		// 0xd2fd8
		// branch -> 0xd2fd8
		while (true) {
			// 0xd2fd8
			a1 += result;
			v6 = (int32_t *)v1;
			*v6 = *v6 ^ 1;
			v7 = 32 - result;
			g39 = v7;
			a2 += __asm_rlwinm(v7, 0, 30, 30);
			v5 = a3;
			if (*(int32_t *)v1 == 0) {
				goto lab_0xd3024;
			}
			goto lab_0xd2ffc;
		}
	}
	// 0xd306c
	return result;
}

// Address range: 0xd3084 - 0xd3224
int32_t function_d3084(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6e7c); // 0xd308c
	int32_t v2 = &a2;                        // 0xd30b0
	*(int32_t *)v1 = 0;
	int32_t v3;       // bp-24
	int32_t v4 = &v3; // 0xd30b8
	v3 = 30;
	int32_t *v5; // 0xd3190
	int32_t v6;  // 0xd31cc
	int32_t result;
	if (function_d0424(&a1, v2, v4, 1) != 0) {
		int32_t v7 = v3;
		int32_t v8 = v7; // r3
		if (v7 > -1) {
			int32_t v9 = a1; // 0xd30d0
			// branch -> 0xd30d0
			while (true) {
				// 0xd30d0
				a1 = v9 + v7;
				int32_t *v10 = (int32_t *)v1; // 0xd30dc
				*v10 = *v10 ^ 1;
				int32_t v11 = 32 - v8; // 0xd3118
				g38 = v11;
				a2 += __asm_rlwinm(v11, 0, 30, 30);
				if (*(int32_t *)v1 == 0) {
					// 0xd3118
					function_d9ee4((char *)&a1, v2);
					// branch -> 0xd3138
				} else {
					// 0xd30f4
					function_da004((char *)&a1, v2);
					// branch -> 0xd3138
				}
				int32_t v12 = a1 - 800; // 0xd3140
				int32_t v13 = v3 - 2;   // 0xd3144
				a1 = v12;
				v3 = v13;
				v8 = v13;
				if (v13 <= 0xffffffff) {
					// break -> 0xd315c
					break;
				}
				v7 = v13;
				v9 = v12;
				// continue -> 0xd30d0
			}
			// 0xd315c
			v3 = 2;
			if (function_d035c(&a1, v2, v4, 1) == 0) {
				// 0xd3210
				return 0;
			}
			// 0xd3204
			result = v3;
			v8 = result;
			if (result >= 31) {
				// 0xd3210
				return result;
			}
			int32_t v14 = result; // 0xd3188
			int32_t v15 = a1;     // 0xd3184
			// branch -> 0xd3184
			int32_t result2; // 0xd31f8
			while (true) {
				// 0xd3184
				a1 = v15 + v14;
				v5 = (int32_t *)v1;
				*v5 = *v5 ^ 1;
				v6 = 32 - v8;
				g38 = v6;
				a2 += __asm_rlwinm(v6, 0, 30, 30);
				if (*(int32_t *)v1 == 0) {
				lab_0xd31cc:
					// 0xd31cc
					function_d9ee4((char *)&a1, v2);
					// branch -> 0xd31ec
				} else {
				lab_0xd31a8:
					// 0xd31a8
					function_da004((char *)&a1, v2);
					// branch -> 0xd31ec
				}
				int32_t v16 = a1 - 800; // 0xd31f4
				result2 = v3 + 2;
				a1 = v16;
				v3 = result2;
				v8 = result2;
				if (result2 >= 31) {
					// break -> 0xd3210
					break;
				}
				v14 = result2;
				v15 = v16;
				// continue -> 0xd3184
			}
			// 0xd3210
			return result2;
		}
	}
	// 0xd315c
	v3 = 2;
	if (function_d035c(&a1, v2, v4, 1) == 0) {
		// 0xd3210
		return 0;
	}
	// 0xd3204
	result = v3;
	if (result < 31) {
		// 0xd3184
		// branch -> 0xd3184
		while (true) {
			// 0xd3184
			a1 += result;
			v5 = (int32_t *)v1;
			*v5 = *v5 ^ 1;
			v6 = 32 - result;
			g38 = v6;
			a2 += __asm_rlwinm(v6, 0, 30, 30);
			if (*(int32_t *)v1 == 0) {
				goto lab_0xd31cc;
			}
			goto lab_0xd31a8;
		}
	}
	// 0xd3210
	return result;
}

// Address range: 0xd3224 - 0xd3360
int32_t function_d3224(int32_t a1)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd3234
	int32_t v4 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t v5 = a1; // 0xd3254
	// branch -> 0xd3254
	int32_t v6;
	while (true) {
		// 0xd3254
		if (v5 < *(int32_t *)v2) {
			// 0xd3270
			a1 = v4 + v5;
			int32_t *v7 = (int32_t *)v3; // 0xd3278
			*v7 = *v7 ^ 1;
			int32_t v8 = 32 - v4; // 0xd32a8
			if (*(int32_t *)v3 == 0) {
				// 0xd32a4
				function_da178((char *)&a1, v8, 0);
				// branch -> 0xd32b4
			} else {
				// 0xd3290
				function_da238((char *)&a1, v8, 0);
				// branch -> 0xd32b4
			}
			// 0xd32b4
			v6 = a1 - 800;
			// branch -> 0xd32c0
		} else {
			// 0xd3264
			v6 = v5 + 32;
			// branch -> 0xd32c0
		}
		// 0xd32c0
		a1 = v6;
		int32_t v9 = v4 - 2; // 0xd32c0
		v4 = v9;
		if (v9 <= 0xffffffff) {
			// break -> 0xd32c8
			break;
		}
		v5 = v6;
		// continue -> 0xd3254
	}
	// 0xd32c8
	v4 = 2;
	int32_t v10 = 2;  // 0xd32e8
	int32_t v11 = v6; // 0xd32cc
	// branch -> 0xd32cc
	int32_t result; // 0xd335c
	while (true) {
		// 0xd32cc
		int32_t v12;
		int32_t v13; // 0xd3338
		if (v11 < *(int32_t *)v2) {
			// 0xd32e8
			a1 = v11 + v10;
			int32_t *v14 = (int32_t *)v3; // 0xd32f0
			*v14 = *v14 ^ 1;
			int32_t v15 = 32 - v4; // 0xd3320
			if (*(int32_t *)v3 == 0) {
				// 0xd331c
				function_da178((char *)&a1, v15, 0);
				// branch -> 0xd332c
			} else {
				// 0xd3308
				function_da238((char *)&a1, v15, 0);
				// branch -> 0xd332c
			}
			int32_t v16 = a1; // 0xd332c
			result = v16;
			v13 = v4;
			v12 = v16 - 800;
			// branch -> 0xd3338
		} else {
			// 0xd32dc
			result = v11;
			v13 = v10;
			v12 = v11 + 32;
			// branch -> 0xd3338
		}
		// 0xd3338
		a1 = v12;
		int32_t v17 = v13 + 2; // 0xd3338
		v4 = v17;
		if (v17 >= 31) {
			// break -> 0xd3344
			break;
		}
		v10 = v17;
		v11 = v12;
		// continue -> 0xd32cc
	}
	// 0xd3344
	return result;
}

// Address range: 0xd3360 - 0xd3450
int32_t function_d3360(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd3368
	int32_t v2 = 30;                  // r29
	int32_t v3 = result;              // bp+24
	int32_t v4 = &a2;                 // 0xd33c0
	int32_t v5 = result;              // r4
	if (result < *(int32_t *)v1) {
		// 0xd3434
		return result;
	}
	int32_t v6 = 30; // 0xd339c142
	while (true) {
		int32_t v7 = 32 - v6; // 0xd339c
		g39 = v7;
		v3 = v2 + v5;
		a2 += __asm_rlwinm(v7, 0, 30, 30);
		function_da338((char *)&v3, v4, a3);
		int32_t result2 = v3; // 0xd33c8
		int32_t v8 = v2 - 2;  // 0xd33cc
		v2 = v8;
		int32_t v9 = result2 - 800; // 0xd33d0
		v3 = v9;
		if (v8 > -1) {
			// 0xd339c
			v5 = v9;
			if (v9 >= *(int32_t *)v1) {
				// 0xd339c
				v6 = v8;
				// branch -> 0xd339c
				continue;
			}
			// 0xd3434
			return result2;
		}
		// 0xd33dc
		v2 = 2;
		int32_t v10 = 2; // 0xd33f0
		// branch -> 0xd33e0
		int32_t result3; // 0xd341c
		while (true) {
			// 0xd33e0
			if (v9 >= *(int32_t *)v1) {
				int32_t v11 = 32 - v10; // 0xd33f0
				g39 = v11;
				v3 = v2 + v9;
				a2 += __asm_rlwinm(v11, 0, 30, 30);
				function_da338((char *)&v3, v4, a3);
				result3 = v3;
				int32_t v12 = v2 + 2; // 0xd3420
				v2 = v12;
				int32_t v13 = result3 - 800; // 0xd3428
				v3 = v13;
				if (v12 >= 31) {
					// break -> 0xd3434
					break;
				}
				result2 = result3;
				v10 = v12;
				v9 = v13;
				// continue -> 0xd33e0
				continue;
			}
			// 0xd3434
			return result2;
		}
		// 0xd3434
		return result3;
	}
}

// Address range: 0xd3450 - 0xd360c
int32_t function_d3450(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd3450
	int32_t v2 = 30;                  // r9
	int32_t result = 0;
	if (result < *(int32_t *)v1) {
		// 0xd3608
		return result;
	}
	int32_t v3 = 30; // 0xd3468131
	while (true) {
		int32_t v4 = 32 - v3;                      // 0xd3464
		int32_t v5 = result + v3;                  // 0xd3468
		int32_t v6 = __asm_rlwinm_(v4, 0, 30, 30); // 0xd346c
		int32_t v7 = 0;                            // 0xd3470
		int32_t v8 = v7;                           // r7
		int32_t v9 = v5;                           // r8
		int32_t v10 = v4 + v5;                     // r3
		int32_t v11 = v7 + v6 + v4;                // r4
		uint32_t v12 = v4;                         // 0xd34a0
		if (v6 != 0) {
			// 0xd3488
			v8 = v7 + 4;
			*(int16_t *)v5 = *(int16_t *)(v7 + 2);
			v9 += 2;
			v12 = v4 - 2;
			// branch -> 0xd349c
		}
		int32_t v13 = v12 / 4; // 0xd34a0
		int32_t v14 = v13;     // r5
		int32_t v15;           // 0xd3520
		int32_t v16;           // 0xd3524
		int32_t v17;           // 0xd3540
		int32_t result3;       // 0xd3538
		if (v12 >= 4) {
			int32_t v18 = __asm_rlwinm_(v13, 29, 3, 31); // 0xd34a8
			int32_t v19 = v18;                           // ctr
			int32_t v20;                                 // 0xd3508
			int32_t v21;
			if (v18 == 0) {
				// 0xd34a8
				v21 = v9;
				v20 = v14;
				// branch -> 0xd3508
			lab_0xd3508:;
				int32_t v22 = v8; // 0xd350c
				*(int32_t *)v21 = *(int32_t *)v22;
				int32_t v23 = v9 + 4;  // 0xd3518
				int32_t v24 = v20 - 1; // 0xd351c
				// branch -> 0xd350c
				while (v24 != 0) {
					// 0xd350c
					v22 += 4;
					*(int32_t *)v23 = *(int32_t *)v22;
					v23 += 4;
					v24--;
					// continue -> 0xd350c
				}
			lab_0xd3520:
				// 0xd3520
				v15 = v2 - 2;
				v2 = v15;
				v16 = v10 - 800;
				if (v15 > -1) {
				lab_0xd3520_3:
					// 0xd3520
					if (v16 < *(int32_t *)v1) {
						// break -> 0xd3608
						break;
					}
					result = v16;
					v3 = v15;
					// continue -> 0xd3464
					continue;
				}
				// 0xd352c
				v2 = 2;
				v17 = 2;
				result3 = v16;
				// branch -> 0xd3530
				int32_t result2;
				while (true) {
					// 0xd3530
					if (result3 >= *(int32_t *)v1) {
					lab_0xd353c_2:;
						int32_t v25 = 32 - v17;                      // 0xd353c
						int32_t v26 = result3 + v17;                 // 0xd3540
						int32_t v27 = __asm_rlwinm_(v25, 0, 30, 30); // 0xd3544
						int32_t v28 = v11;                           // 0xd3548
						v8 = v28;
						v9 = v26;
						v10 = v25 + v26;
						v11 = v28 + v27 + v25;
						uint32_t v29 = v25; // 0xd3578
						if (v27 != 0) {
							// 0xd3560
							v8 = v28 + 4;
							*(int16_t *)v26 = *(int16_t *)(v28 + 2);
							v9 += 2;
							v29 = v25 - 2;
							// branch -> 0xd3574
						}
						int32_t v30 = v29 / 4; // 0xd3578
						v14 = v30;
						int32_t v31; // 0xd35f8
						int32_t v32; // 0xd35fc
						if (v29 >= 4) {
							int32_t v33 = __asm_rlwinm_(v30, 29, 3, 31); // 0xd3580
							v19 = v33;
							int32_t v34; // 0xd35e0
							int32_t v35;
							if (v33 == 0) {
								// 0xd3580
								v35 = v9;
								v34 = v14;
								// branch -> 0xd35e0
							lab_0xd35e0:;
								int32_t v36 = v8; // 0xd35e4
								*(int32_t *)v35 = *(int32_t *)v36;
								int32_t v37 = v9 + 4;  // 0xd35f0
								int32_t v38 = v34 - 1; // 0xd35f4
								// branch -> 0xd35e4
								while (v38 != 0) {
									// 0xd35e4
									v36 += 4;
									*(int32_t *)v37 = *(int32_t *)v36;
									v37 += 4;
									v38--;
									// continue -> 0xd35e4
								}
							lab_0xd35f8:
								// 0xd35f8
								v31 = v2 + 2;
								v2 = v31;
								v32 = v10 - 800;
								if (v31 >= 31) {
									result2 = v32;
									// break -> 0xd3608
									break;
								}
								v17 = v31;
								result3 = v32;
								// continue -> 0xd3530
								continue;
							} else {
								// 0xd358c
								*(int32_t *)v9 = *(int32_t *)v8;
								*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
								*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
								*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
								*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
								*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
								*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
								int32_t v39 = v8; // 0xd35c4
								v8 = v39 + 32;
								*(int32_t *)(v9 + 28) = *(int32_t *)(v39 + 28);
								int32_t v40 = v9 + 32; // 0xd35d0
								v9 = v40;
								int32_t v41 = v19 - 1; // 0xd35d4
								// branch -> 0xd358c
								while (v41 != 0) {
									// 0xd358c
									*(int32_t *)v40 = *(int32_t *)v8;
									*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
									*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
									*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
									*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
									*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
									*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
									v39 = v8;
									v8 = v39 + 32;
									*(int32_t *)(v9 + 28) = *(int32_t *)(v39 + 28);
									v40 = v9 + 32;
									v9 = v40;
									v41--;
									// continue -> 0xd358c
								}
								int32_t v42 = v14 % 8; // 0xd35d8
								if (v42 == 0) {
									goto lab_0xd35f8;
								}
								v35 = v40;
								v34 = v42;
								goto lab_0xd35e0;
							}
							int32_t v43 = v2; // 0xd35f8
							v31 = v43 + 2;
							v2 = v31;
							int32_t v44 = v10; // 0xd35fc
							v32 = v44 - 800;
							v10 = v32;
							if (v31 >= 31) {
								result2 = v32;
								// break -> 0xd3608
								break;
							}
							v17 = v31;
							result3 = v32;
							// continue -> 0xd3530
							continue;
						}
						// 0xd35f8
						v31 = v2 + 2;
						v2 = v31;
						v32 = v10 - 800;
						if (v31 >= 31) {
							result2 = v32;
							// break -> 0xd3608
							break;
						}
						v17 = v31;
						result3 = v32;
						// continue -> 0xd3530
						continue;
					} else {
						result2 = result3;
					}
				}
				// 0xd3608
				return result2;
			}
			// 0xd34b4
			*(int32_t *)v9 = *(int32_t *)v8;
			*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
			*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
			*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
			*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
			*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
			*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
			int32_t v45 = v8; // 0xd34ec
			v8 = v45 + 32;
			*(int32_t *)(v9 + 28) = *(int32_t *)(v45 + 28);
			int32_t v46 = v9 + 32; // 0xd34f8
			v9 = v46;
			int32_t v47 = v19 - 1; // 0xd34fc
			// branch -> 0xd34b4
			while (v47 != 0) {
				// 0xd34b4
				*(int32_t *)v46 = *(int32_t *)v8;
				*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
				*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
				*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
				*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
				*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
				*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
				v45 = v8;
				v8 = v45 + 32;
				*(int32_t *)(v9 + 28) = *(int32_t *)(v45 + 28);
				v46 = v9 + 32;
				v9 = v46;
				v47--;
				// continue -> 0xd34b4
			}
			int32_t v48 = v14 % 8; // 0xd3500
			if (v48 == 0) {
				goto lab_0xd3520;
			}
			v21 = v46;
			v20 = v48;
			goto lab_0xd3508;
		}
		// 0xd3520
		v15 = v2 - 2;
		v2 = v15;
		v16 = v10 - 800;
		if (v15 > -1) {
			goto lab_0xd3520_3;
		}
		// 0xd352c
		v2 = 2;
		v17 = 2;
		result3 = v16;
		// branch -> 0xd3530
		while (true) {
			// 0xd3530
			if (result3 >= *(int32_t *)v1) {
				goto lab_0xd353c_2;
			}
			// 0xd3608
			return result3;
		}
	}
}

// Address range: 0xd360c - 0xd3788
int32_t function_d360c(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd360c
	int32_t v2 = 30;                  // r8
	int32_t result = 0;
	if (result < *(int32_t *)v1) {
		// 0xd3784
		return result;
	}
	int32_t v3 = 30; // 0xd3624131
	while (true) {
		int32_t v4 = 32 - v3;     // 0xd3620
		int32_t v5 = v4;          // r4
		int32_t v6 = result + v3; // 0xd3624
		int32_t v7 = v6;          // r7
		int32_t v8 = result + 32; // r3
		int32_t v9 = v4;          // 0xd3648
		if (v4 % 2 != 0) {
			// 0xd3638
			v5 = v4 - 1;
			*(char *)v6 = 0;
			v7++;
			v9 = v5;
			// branch -> 0xd3648
		}
		// 0xd3648
		if (__asm_rlwinm_(v9, 0, 30, 30) != 0) {
			// 0xd3650
			v5 -= 2;
			*(int16_t *)v7 = 0;
			v7 += 2;
			// branch -> 0xd3660
		}
		uint32_t v10 = v5;     // 0xd3660
		int32_t v11 = v10 / 4; // 0xd3664
		v5 = v11;
		int32_t v12 = 0; // r5
		int32_t v13;     // 0xd36bc
		int32_t v14;     // 0xd36c0
		int32_t v15;     // 0xd36dc
		int32_t result3; // 0xd36d4
		if (v10 >= 4) {
			int32_t v16 = __asm_rlwinm_(v11, 29, 3, 31); // 0xd3670
			int32_t v17 = v16;                           // ctr
			int32_t v18;                                 // 0xd36ac
			int32_t v19;
			if (v16 == 0) {
				// 0xd3670
				v19 = v7;
				v18 = v5;
				// branch -> 0xd36ac
			lab_0xd36ac:
				// 0xd36ac
				*(int32_t *)v19 = v12;
				int32_t v20 = v7 + 4;  // 0xd36b4
				int32_t v21 = v18 - 1; // 0xd36b8
				// branch -> 0xd36b0
				while (v21 != 0) {
					// 0xd36b0
					*(int32_t *)v20 = v12;
					v20 += 4;
					v21--;
					// continue -> 0xd36b0
				}
			lab_0xd36bc:
				// 0xd36bc
				v13 = v2 - 2;
				v2 = v13;
				v14 = v8 - 800;
				if (v13 > -1) {
				lab_0xd36bc_3:
					// 0xd36bc
					if (v14 < *(int32_t *)v1) {
						// break -> 0xd3784
						break;
					}
					result = v14;
					v3 = v13;
					// continue -> 0xd3620
					continue;
				}
				// 0xd36c8
				v2 = 2;
				v15 = 2;
				result3 = v14;
				// branch -> 0xd36cc
				int32_t result2;
				while (true) {
					// 0xd36cc
					if (result3 >= *(int32_t *)v1) {
					lab_0xd36d8_2:;
						int32_t v22 = 32 - v15; // 0xd36d8
						v5 = v22;
						int32_t v23 = result3 + v15; // 0xd36dc
						v7 = v23;
						v8 = result3 + 32;
						int32_t v24 = v22; // 0xd3700
						if (v22 % 2 != 0) {
							// 0xd36f0
							v5 = v22 - 1;
							*(char *)v23 = 0;
							v7++;
							v24 = v5;
							// branch -> 0xd3700
						}
						// 0xd3700
						if (__asm_rlwinm_(v24, 0, 30, 30) != 0) {
							// 0xd3708
							v5 -= 2;
							*(int16_t *)v7 = 0;
							v7 += 2;
							// branch -> 0xd3718
						}
						uint32_t v25 = v5;     // 0xd3718
						int32_t v26 = v25 / 4; // 0xd371c
						v5 = v26;
						v12 = 0;
						int32_t v27; // 0xd3774
						int32_t v28; // 0xd3778
						if (v25 >= 4) {
							int32_t v29 = __asm_rlwinm_(v26, 29, 3, 31); // 0xd3728
							v17 = v29;
							int32_t v30; // 0xd3764
							int32_t v31;
							if (v29 == 0) {
								// 0xd3728
								v31 = v7;
								v30 = v5;
								// branch -> 0xd3764
							lab_0xd3764:
								// 0xd3764
								*(int32_t *)v31 = v12;
								int32_t v32 = v7 + 4;  // 0xd376c
								int32_t v33 = v30 - 1; // 0xd3770
								// branch -> 0xd3768
								while (v33 != 0) {
									// 0xd3768
									*(int32_t *)v32 = v12;
									v32 += 4;
									v33--;
									// continue -> 0xd3768
								}
							lab_0xd3774:
								// 0xd3774
								v27 = v2 + 2;
								v2 = v27;
								v28 = v8 - 800;
								if (v27 >= 31) {
									result2 = v28;
									// break -> 0xd3784
									break;
								}
								v15 = v27;
								result3 = v28;
								// continue -> 0xd36cc
								continue;
							} else {
								// 0xd3734
								*(int32_t *)v7 = v12;
								*(int32_t *)(v7 + 4) = v12;
								*(int32_t *)(v7 + 8) = v12;
								*(int32_t *)(v7 + 12) = v12;
								*(int32_t *)(v7 + 16) = v12;
								*(int32_t *)(v7 + 20) = v12;
								*(int32_t *)(v7 + 24) = v12;
								*(int32_t *)(v7 + 28) = v12;
								int32_t v34 = v7 + 32; // 0xd3754
								v7 = v34;
								int32_t v35 = v17 - 1; // 0xd3758
								// branch -> 0xd3734
								while (v35 != 0) {
									// 0xd3734
									*(int32_t *)v34 = v12;
									*(int32_t *)(v7 + 4) = v12;
									*(int32_t *)(v7 + 8) = v12;
									*(int32_t *)(v7 + 12) = v12;
									*(int32_t *)(v7 + 16) = v12;
									*(int32_t *)(v7 + 20) = v12;
									*(int32_t *)(v7 + 24) = v12;
									*(int32_t *)(v7 + 28) = v12;
									v34 = v7 + 32;
									v7 = v34;
									v35--;
									// continue -> 0xd3734
								}
								int32_t v36 = v5 % 8; // 0xd375c
								if (v36 == 0) {
									goto lab_0xd3774;
								}
								v31 = v34;
								v30 = v36;
								goto lab_0xd3764;
							}
							int32_t v37 = v2; // 0xd3774
							v27 = v37 + 2;
							v2 = v27;
							int32_t v38 = v8; // 0xd3778
							v28 = v38 - 800;
							v8 = v28;
							if (v27 >= 31) {
								result2 = v28;
								// break -> 0xd3784
								break;
							}
							v15 = v27;
							result3 = v28;
							// continue -> 0xd36cc
							continue;
						}
						// 0xd3774
						v27 = v2 + 2;
						v2 = v27;
						v28 = v8 - 800;
						if (v27 >= 31) {
							result2 = v28;
							// break -> 0xd3784
							break;
						}
						v15 = v27;
						result3 = v28;
						// continue -> 0xd36cc
						continue;
					} else {
						result2 = result3;
					}
				}
				// 0xd3784
				return result2;
			}
			// 0xd367c
			*(int32_t *)v7 = v12;
			*(int32_t *)(v7 + 4) = v12;
			*(int32_t *)(v7 + 8) = v12;
			*(int32_t *)(v7 + 12) = v12;
			*(int32_t *)(v7 + 16) = v12;
			*(int32_t *)(v7 + 20) = v12;
			*(int32_t *)(v7 + 24) = v12;
			*(int32_t *)(v7 + 28) = v12;
			int32_t v39 = v7 + 32; // 0xd369c
			v7 = v39;
			int32_t v40 = v17 - 1; // 0xd36a0
			// branch -> 0xd367c
			while (v40 != 0) {
				// 0xd367c
				*(int32_t *)v39 = v12;
				*(int32_t *)(v7 + 4) = v12;
				*(int32_t *)(v7 + 8) = v12;
				*(int32_t *)(v7 + 12) = v12;
				*(int32_t *)(v7 + 16) = v12;
				*(int32_t *)(v7 + 20) = v12;
				*(int32_t *)(v7 + 24) = v12;
				*(int32_t *)(v7 + 28) = v12;
				v39 = v7 + 32;
				v7 = v39;
				v40--;
				// continue -> 0xd367c
			}
			int32_t v41 = v5 % 8; // 0xd36a4
			if (v41 == 0) {
				goto lab_0xd36bc;
			}
			v19 = v39;
			v18 = v41;
			goto lab_0xd36ac;
		}
		// 0xd36bc
		v13 = v2 - 2;
		v2 = v13;
		v14 = v8 - 800;
		if (v13 > -1) {
			goto lab_0xd36bc_3;
		}
		// 0xd36c8
		v2 = 2;
		v15 = 2;
		result3 = v14;
		// branch -> 0xd36cc
		while (true) {
			// 0xd36cc
			if (result3 >= *(int32_t *)v1) {
				goto lab_0xd36d8_2;
			}
			// 0xd3784
			return result3;
		}
	}
}

// Address range: 0xd3788 - 0xd38b0
int32_t function_d3788(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1;       // bp-24
	int32_t v2 = &v1; // 0xd37ac
	int32_t v3 = &a2; // 0xd37b4
	v1 = 30;
	int32_t v4;      // 0xd3848
	int32_t v5;      // 0xd3854
	int32_t v6;      // 0xd3880
	int32_t v7;      // 0xd3884
	int32_t result2; // 0xd387c
	int32_t v8;
	int32_t result; // 0xd3838
	if (function_d0424(&a1, v3, v2, 0) != 0) {
		int32_t v9 = v1;
		if (v9 > -1) {
			int32_t v10 = 32 - v9; // 0xd37cc
			g39 = v10;
			a1 += v9;
			a2 += __asm_rlwinm(v10, 0, 30, 30);
			function_da338((char *)&a1, v3, a3);
			int32_t v11 = a1 - 800; // 0xd3804
			int32_t v12 = v1 - 2;   // 0xd3808
			a1 = v11;
			v1 = v12;
			// branch -> 0xd37cc
			while (v12 > 0xffffffff) {
				// 0xd37cc
				v10 = 32 - v12;
				g39 = v10;
				a1 = v12 + v11;
				a2 += __asm_rlwinm(v10, 0, 30, 30);
				function_da338((char *)&a1, v3, a3);
				v11 = a1 - 800;
				v12 = v1 - 2;
				a1 = v11;
				v1 = v12;
				// continue -> 0xd37cc
			}
			// 0xd3820
			v1 = 2;
			result = function_d035c(&a1, v3, v2, 0);
			if (result == 0) {
				// 0xd389c
				return 0;
			}
			// 0xd3890
			v8 = v1;
			if (v8 >= 31) {
				// 0xd389c
				return result;
			}
			// 0xd3848
			v4 = 32 - v8;
			g39 = v4;
			v5 = __asm_rlwinm(v4, 0, 30, 30);
			a1 += v8;
			a2 += v5;
			function_da338((char *)&a1, v3, a3);
			result2 = v1;
			v6 = a1 - 800;
			v7 = result2 + 2;
			a1 = v6;
			v1 = v7;
			// branch -> 0xd3848
			while (v7 < 31) {
				// 0xd3848
				v4 = 32 - v7;
				g39 = v4;
				v5 = __asm_rlwinm(v4, 0, 30, 30);
				a1 = v7 + v6;
				a2 += v5;
				function_da338((char *)&a1, v3, a3);
				result2 = v1;
				v6 = a1 - 800;
				v7 = result2 + 2;
				a1 = v6;
				v1 = v7;
				// continue -> 0xd3848
			}
			// 0xd389c
			return result2;
		}
	}
	// 0xd3820
	v1 = 2;
	result = function_d035c(&a1, v3, v2, 0);
	if (result == 0) {
		// 0xd389c
		return 0;
	}
	// 0xd3890
	v8 = v1;
	if (v8 >= 31) {
		// 0xd389c
		return result;
	}
	// 0xd3848
	v4 = 32 - v8;
	g39 = v4;
	v5 = __asm_rlwinm(v4, 0, 30, 30);
	a1 += v8;
	a2 += v5;
	function_da338((char *)&a1, v3, a3);
	result2 = v1;
	v6 = a1 - 800;
	v7 = result2 + 2;
	a1 = v6;
	v1 = v7;
	// branch -> 0xd3848
	while (v7 < 31) {
		// 0xd3848
		v4 = 32 - v7;
		g39 = v4;
		v5 = __asm_rlwinm(v4, 0, 30, 30);
		a1 = v7 + v6;
		a2 += v5;
		function_da338((char *)&a1, v3, a3);
		result2 = v1;
		v6 = a1 - 800;
		v7 = result2 + 2;
		a1 = v6;
		v1 = v7;
		// continue -> 0xd3848
	}
	// 0xd389c
	return result2;
}

// Address range: 0xd38b0 - 0xd3b04
int32_t function_d38b0(int16_t *a1, int32_t a2)
{
	int16_t *v1 = (int16_t *)(int32_t)a1; // bp+24
	int32_t v2;                           // bp-8
	int32_t v3 = &v2;                     // 0xd38cc
	int32_t v4 = &a2;                     // 0xd38d4
	v2 = 30;
	int32_t v5;  // r4
	int32_t v6;  // r5
	int32_t v7;  // 0xd3a24
	int32_t v8;  // 0xd3a50
	int32_t v9;  // 0xd3a08
	int32_t v10; // 0xd3a0c
	int32_t v11; // 0xd3a14
	int32_t v12; // 0xd3a10
	int32_t v13;
	int32_t result; // 0xd39f4
	if (function_d0424((int32_t *)&v1, v4, v3, 0) != 0) {
		int32_t v14 = v2;
		v6 = v14;
		if (v14 > -1) {
			int16_t *v15 = v1; // 0xd38ec
			// branch -> 0xd38ec
			int32_t v16; // ctr
			int32_t v17; // r3
			while (true) {
				int32_t v18 = 32 - v14;                      // 0xd38f0
				int32_t v19 = __asm_rlwinm_(v18, 0, 30, 30); // 0xd38f4
				int32_t v20 = a2;                            // 0xd38f8
				v5 = v20;
				int32_t v21 = v6 + (int32_t)v15; // 0xd38fc
				v6 = v21;
				a2 = v20 + v19 + v18;
				v1 = (int16_t *)(v18 + v21);
				uint32_t v22 = v18; // 0xd3938
				if (v19 != 0) {
					// 0xd3920
					v5 = v20 + 4;
					*(int16_t *)v21 = *(int16_t *)(v20 + 2);
					v6 += 2;
					v22 = v18 - 2;
					// branch -> 0xd3934
				}
				int32_t v23 = v22 / 4; // 0xd3938
				v17 = v23;
				int32_t v24;  // 0xd39c4
				int16_t *v25; // 0xd39c8
				if (v22 >= 4) {
					int32_t v26 = __asm_rlwinm_(v23, 29, 3, 31); // 0xd3940
					v16 = v26;
					int32_t v27; // 0xd39a0
					int32_t v28;
					if (v26 == 0) {
						// 0xd3940
						v28 = v6;
						v27 = v17;
						// branch -> 0xd39a0
					lab_0xd39a0:;
						int32_t v29 = v5; // 0xd39a4
						*(int32_t *)v28 = *(int32_t *)v29;
						int32_t v30 = v6 + 4;  // 0xd39b0
						int32_t v31 = v27 - 1; // 0xd39b4
						// branch -> 0xd39a4
						while (v31 != 0) {
							// 0xd39a4
							v29 += 4;
							*(int32_t *)v30 = *(int32_t *)v29;
							v30 += 4;
							v31--;
							// continue -> 0xd39a4
						}
					lab_0xd39b8:
						// 0xd39b8
						v24 = v2 - 2;
						v25 = (int16_t *)((int32_t)v1 - 800);
						v1 = v25;
						v2 = v24;
						v6 = v24;
						if (v24 <= 0xffffffff) {
							// break -> 0xd39dc
							break;
						}
						v14 = v24;
						v15 = v25;
						// continue -> 0xd38ec
						continue;
					} else {
						// 0xd394c
						*(int32_t *)v6 = *(int32_t *)v5;
						*(int32_t *)(v6 + 4) = *(int32_t *)(v5 + 4);
						*(int32_t *)(v6 + 8) = *(int32_t *)(v5 + 8);
						*(int32_t *)(v6 + 12) = *(int32_t *)(v5 + 12);
						*(int32_t *)(v6 + 16) = *(int32_t *)(v5 + 16);
						*(int32_t *)(v6 + 20) = *(int32_t *)(v5 + 20);
						*(int32_t *)(v6 + 24) = *(int32_t *)(v5 + 24);
						int32_t v32 = v5; // 0xd3984
						v5 = v32 + 32;
						*(int32_t *)(v6 + 28) = *(int32_t *)(v32 + 28);
						int32_t v33 = v6 + 32; // 0xd3990
						v6 = v33;
						int32_t v34 = v16 - 1; // 0xd3994
						// branch -> 0xd394c
						while (v34 != 0) {
							// 0xd394c
							*(int32_t *)v33 = *(int32_t *)v5;
							*(int32_t *)(v6 + 4) = *(int32_t *)(v5 + 4);
							*(int32_t *)(v6 + 8) = *(int32_t *)(v5 + 8);
							*(int32_t *)(v6 + 12) = *(int32_t *)(v5 + 12);
							*(int32_t *)(v6 + 16) = *(int32_t *)(v5 + 16);
							*(int32_t *)(v6 + 20) = *(int32_t *)(v5 + 20);
							*(int32_t *)(v6 + 24) = *(int32_t *)(v5 + 24);
							v32 = v5;
							v5 = v32 + 32;
							*(int32_t *)(v6 + 28) = *(int32_t *)(v32 + 28);
							v33 = v6 + 32;
							v6 = v33;
							v34--;
							// continue -> 0xd394c
						}
						int32_t v35 = v17 % 8; // 0xd3998
						if (v35 == 0) {
							goto lab_0xd39b8;
						}
						v28 = v33;
						v27 = v35;
						goto lab_0xd39a0;
					}
				}
				// 0xd39b8
				v24 = v2 - 2;
				v25 = (int16_t *)((int32_t)v1 - 800);
				v1 = v25;
				v2 = v24;
				v6 = v24;
				if (v24 <= 0xffffffff) {
					// break -> 0xd39dc
					break;
				}
				v14 = v24;
				v15 = v25;
				// continue -> 0xd38ec
			}
			// 0xd39dc
			v2 = 2;
			result = function_d035c((int32_t *)&v1, v4, v3, 0);
			if (result == 0) {
				// 0xd3af4
				return 0;
			}
			// 0xd3ae8
			v13 = v2;
			v6 = v13;
			if (v13 >= 31) {
				// 0xd3af4
				return result;
			}
			int32_t v36 = v13; // 0xd3a08
			int16_t *v37 = v1; // 0xd3a04
			// branch -> 0xd3a04
			int32_t result2; // 0xd3ad4
			while (true) {
				// 0xd3a04
				v9 = 32 - v36;
				v10 = __asm_rlwinm_(v9, 0, 30, 30);
				v12 = a2;
				v5 = v12;
				v11 = v6 + (int32_t)v37;
				v6 = v11;
				v7 = v9;
				a2 = v12 + v10 + v7;
				v1 = (int16_t *)(v7 + v11);
				v8 = v7;
				if (v10 != 0) {
				lab_0xd3a38:
					// 0xd3a38
					v5 = v12 + 4;
					*(int16_t *)v11 = *(int16_t *)(v12 + 2);
					v6 += 2;
					v8 = v7 - 2;
					// branch -> 0xd3a4c
				}
			lab_0xd3a4c:;
				int32_t v38 = v8 / 4; // 0xd3a50
				v17 = v38;
				int32_t v39;  // 0xd3adc
				int16_t *v40; // 0xd3ae0
				if (v8 >= 4) {
					int32_t v41 = __asm_rlwinm_(v38, 29, 3, 31); // 0xd3a58
					v16 = v41;
					int32_t v42; // 0xd3ab8
					int32_t v43;
					if (v41 == 0) {
						// 0xd3a58
						v43 = v6;
						v42 = v17;
						// branch -> 0xd3ab8
					lab_0xd3ab8:;
						int32_t v44 = v5; // 0xd3abc
						*(int32_t *)v43 = *(int32_t *)v44;
						int32_t v45 = v6 + 4;  // 0xd3ac8
						int32_t v46 = v42 - 1; // 0xd3acc
						// branch -> 0xd3abc
						while (v46 != 0) {
							// 0xd3abc
							v44 += 4;
							*(int32_t *)v45 = *(int32_t *)v44;
							v45 += 4;
							v46--;
							// continue -> 0xd3abc
						}
					lab_0xd3ad0:
						// 0xd3ad0
						result2 = v2;
						v39 = result2 + 2;
						v40 = (int16_t *)((int32_t)v1 - 800);
						v1 = v40;
						v2 = v39;
						v6 = v39;
						if (v39 >= 31) {
							// break -> 0xd3af4
							break;
						}
						v36 = v39;
						v37 = v40;
						// continue -> 0xd3a04
						continue;
					} else {
						// 0xd3a64
						*(int32_t *)v6 = *(int32_t *)v5;
						*(int32_t *)(v6 + 4) = *(int32_t *)(v5 + 4);
						*(int32_t *)(v6 + 8) = *(int32_t *)(v5 + 8);
						*(int32_t *)(v6 + 12) = *(int32_t *)(v5 + 12);
						*(int32_t *)(v6 + 16) = *(int32_t *)(v5 + 16);
						*(int32_t *)(v6 + 20) = *(int32_t *)(v5 + 20);
						*(int32_t *)(v6 + 24) = *(int32_t *)(v5 + 24);
						int32_t v47 = v5; // 0xd3a9c
						v5 = v47 + 32;
						*(int32_t *)(v6 + 28) = *(int32_t *)(v47 + 28);
						int32_t v48 = v6 + 32; // 0xd3aa8
						v6 = v48;
						int32_t v49 = v16 - 1; // 0xd3aac
						// branch -> 0xd3a64
						while (v49 != 0) {
							// 0xd3a64
							*(int32_t *)v48 = *(int32_t *)v5;
							*(int32_t *)(v6 + 4) = *(int32_t *)(v5 + 4);
							*(int32_t *)(v6 + 8) = *(int32_t *)(v5 + 8);
							*(int32_t *)(v6 + 12) = *(int32_t *)(v5 + 12);
							*(int32_t *)(v6 + 16) = *(int32_t *)(v5 + 16);
							*(int32_t *)(v6 + 20) = *(int32_t *)(v5 + 20);
							*(int32_t *)(v6 + 24) = *(int32_t *)(v5 + 24);
							v47 = v5;
							v5 = v47 + 32;
							*(int32_t *)(v6 + 28) = *(int32_t *)(v47 + 28);
							v48 = v6 + 32;
							v6 = v48;
							v49--;
							// continue -> 0xd3a64
						}
						int32_t v50 = v17 % 8; // 0xd3ab0
						if (v50 == 0) {
							goto lab_0xd3ad0;
						}
						v43 = v48;
						v42 = v50;
						goto lab_0xd3ab8;
					}
					int16_t *v51 = v1; // 0xd3ad0
					result2 = v2;
					v17 = result2;
					int32_t v52 = (int32_t)v51 - 800; // 0xd3ad8
					v5 = v52;
					v39 = result2 + 2;
					v40 = (int16_t *)v52;
					v1 = v40;
					v2 = v39;
					v6 = v39;
					if (v39 >= 31) {
						// break -> 0xd3af4
						break;
					}
					v36 = v39;
					v37 = v40;
					// continue -> 0xd3a04
					continue;
				}
				// 0xd3ad0
				result2 = v2;
				v39 = result2 + 2;
				v40 = (int16_t *)((int32_t)v1 - 800);
				v1 = v40;
				v2 = v39;
				v6 = v39;
				if (v39 >= 31) {
					// break -> 0xd3af4
					break;
				}
				v36 = v39;
				v37 = v40;
				// continue -> 0xd3a04
			}
			// 0xd3af4
			return result2;
		}
	}
	// 0xd39dc
	v2 = 2;
	result = function_d035c((int32_t *)&v1, v4, v3, 0);
	if (result == 0) {
		// 0xd3af4
		return 0;
	}
	// 0xd3ae8
	v13 = v2;
	if (v13 < 31) {
		// 0xd3a04
		// branch -> 0xd3a04
		while (true) {
			// 0xd3a04
			v9 = 32 - v13;
			v10 = __asm_rlwinm_(v9, 0, 30, 30);
			v12 = a2;
			v5 = v12;
			v11 = v13 + (int32_t)v1;
			v6 = v11;
			v7 = v9;
			a2 = v12 + v10 + v7;
			v1 = (int16_t *)(v7 + v11);
			if (v10 == 0) {
				v8 = v7;
				goto lab_0xd3a4c;
			}
			goto lab_0xd3a38;
		}
	}
	// 0xd3af4
	return result;
}

// Address range: 0xd3b04 - 0xd3c90
int32_t function_d3b04(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd3b04
	int32_t v2 = 30;                  // r8
	int32_t v3 = 30;                  // 0xd3b24
	int32_t v4 = 0;                   // 0xd3b24
	// branch -> 0xd3b0c
	while (true) {
		// 0xd3b0c
		if (v4 < *(int32_t *)v1) {
			int32_t v5 = 32 - v3; // 0xd3b20
			int32_t v6 = v5;      // r4
			int32_t v7 = v4 + v3; // 0xd3b24
			int32_t v8 = v7;      // r7
			int32_t v9 = v4 + 32; // r3
			int32_t v10 = v5;     // 0xd3b48
			if (v5 % 2 != 0) {
				// 0xd3b38
				v6 = v5 - 1;
				*(char *)v7 = 0;
				v8++;
				v10 = v6;
				// branch -> 0xd3b48
			}
			// 0xd3b48
			if (__asm_rlwinm_(v10, 0, 30, 30) != 0) {
				// 0xd3b50
				v6 -= 2;
				*(int16_t *)v8 = 0;
				v8 += 2;
				// branch -> 0xd3b60
			}
			uint32_t v11 = v6;     // 0xd3b60
			int32_t v12 = v11 / 4; // 0xd3b64
			v6 = v12;
			int32_t v13 = 0; // r5
			int32_t v14;     // 0xd3be4
			int32_t v15;     // 0xd3bbc
			int32_t v16;     // 0xd3bc0
			int32_t v17;     // 0xd3be4
			if (v11 >= 4) {
				int32_t v18 = __asm_rlwinm_(v12, 29, 3, 31); // 0xd3b70
				int32_t v19 = v18;                           // ctr
				int32_t v20;                                 // 0xd3bac
				int32_t v21;
				if (v18 == 0) {
					// 0xd3b70
					v21 = v8;
					v20 = v6;
					// branch -> 0xd3bac
				lab_0xd3bac:
					// 0xd3bac
					*(int32_t *)v21 = v13;
					int32_t v22 = v8 + 4;  // 0xd3bb4
					int32_t v23 = v20 - 1; // 0xd3bb8
					// branch -> 0xd3bb0
					while (v23 != 0) {
						// 0xd3bb0
						*(int32_t *)v22 = v13;
						v22 += 4;
						v23--;
						// continue -> 0xd3bb0
					}
				lab_0xd3bbc:
					// 0xd3bbc
					v15 = v2 - 2;
					v2 = v15;
					v16 = v9 - 800;
					if (v15 <= -1) {
						// 0xd3bc8
						v2 = 2;
						v17 = 2;
						v14 = v16;
						// branch -> 0xd3bcc
						int32_t result; // 0xd3c80
						while (true) {
							// 0xd3bcc
							int32_t v24; // 0xd3c7c
							if (v14 < *(int32_t *)v1) {
							lab_0xd3be0_3:;
								int32_t v25 = 32 - v17; // 0xd3be0
								v6 = v25;
								int32_t v26 = v14 + v17; // 0xd3be4
								v8 = v26;
								v9 = v14 + 32;
								int32_t v27 = v25; // 0xd3c08
								if (v25 % 2 != 0) {
									// 0xd3bf8
									v6 = v25 - 1;
									*(char *)v26 = 0;
									v8++;
									v27 = v6;
									// branch -> 0xd3c08
								}
								// 0xd3c08
								if (__asm_rlwinm_(v27, 0, 30, 30) != 0) {
									// 0xd3c10
									v6 -= 2;
									*(int16_t *)v8 = 0;
									v8 += 2;
									// branch -> 0xd3c20
								}
								uint32_t v28 = v6;     // 0xd3c20
								int32_t v29 = v28 / 4; // 0xd3c24
								v6 = v29;
								v13 = 0;
								if (v28 >= 4) {
									int32_t v30 = __asm_rlwinm_(v29, 29, 3, 31); // 0xd3c30
									v19 = v30;
									int32_t v31; // 0xd3c6c
									int32_t v32;
									if (v30 == 0) {
										// 0xd3c30
										v32 = v8;
										v31 = v6;
										// branch -> 0xd3c6c
									lab_0xd3c6c:
										// 0xd3c6c
										*(int32_t *)v32 = v13;
										int32_t v33 = v8 + 4;  // 0xd3c74
										int32_t v34 = v31 - 1; // 0xd3c78
										// branch -> 0xd3c70
										while (v34 != 0) {
											// 0xd3c70
											*(int32_t *)v33 = v13;
											v33 += 4;
											v34--;
											// continue -> 0xd3c70
										}
									lab_0xd3c7c:
										// 0xd3c7c
										v24 = v2 + 2;
										v2 = v24;
										result = v9 - 800;
										if (v24 >= 31) {
											// break -> 0xd3c8c
											break;
										}
										v17 = v24;
										v14 = result;
										// continue -> 0xd3bcc
										continue;
									} else {
										// 0xd3c3c
										*(int32_t *)v8 = v13;
										*(int32_t *)(v8 + 4) = v13;
										*(int32_t *)(v8 + 8) = v13;
										*(int32_t *)(v8 + 12) = v13;
										*(int32_t *)(v8 + 16) = v13;
										*(int32_t *)(v8 + 20) = v13;
										*(int32_t *)(v8 + 24) = v13;
										*(int32_t *)(v8 + 28) = v13;
										int32_t v35 = v8 + 32; // 0xd3c5c
										v8 = v35;
										int32_t v36 = v19 - 1; // 0xd3c60
										// branch -> 0xd3c3c
										while (v36 != 0) {
											// 0xd3c3c
											*(int32_t *)v35 = v13;
											*(int32_t *)(v8 + 4) = v13;
											*(int32_t *)(v8 + 8) = v13;
											*(int32_t *)(v8 + 12) = v13;
											*(int32_t *)(v8 + 16) = v13;
											*(int32_t *)(v8 + 20) = v13;
											*(int32_t *)(v8 + 24) = v13;
											*(int32_t *)(v8 + 28) = v13;
											v35 = v8 + 32;
											v8 = v35;
											v36--;
											// continue -> 0xd3c3c
										}
										int32_t v37 = v6 % 8; // 0xd3c64
										if (v37 == 0) {
											goto lab_0xd3c7c;
										}
										v32 = v35;
										v31 = v37;
										goto lab_0xd3c6c;
									}
								lab_0xd3c7c_2:
									// 0xd3c7c
									v24 = v2 + 2;
									v2 = v24;
									result = v14 - 768;
									if (v24 >= 31) {
										// break -> 0xd3c8c
										break;
									}
									v17 = v24;
									v14 = result;
									// continue -> 0xd3bcc
									continue;
								}
							} else {
							lab_0xd3bd8_3:
								// 0xd3bd8
								// branch -> 0xd3c7c
								goto lab_0xd3c7c_2;
							}
							// 0xd3c7c
							v24 = v2 + 2;
							v2 = v24;
							result = v9 - 800;
							if (v24 >= 31) {
								// break -> 0xd3c8c
								break;
							}
							v17 = v24;
							v14 = result;
							// continue -> 0xd3bcc
						}
						// 0xd3c8c
						return result;
					}
				lab_0xd3bbc_5:
					// 0xd3bbc
					v3 = v15;
					v4 = v16;
					// branch -> 0xd3b0c
					continue;
				} else {
					// 0xd3b7c
					*(int32_t *)v8 = v13;
					*(int32_t *)(v8 + 4) = v13;
					*(int32_t *)(v8 + 8) = v13;
					*(int32_t *)(v8 + 12) = v13;
					*(int32_t *)(v8 + 16) = v13;
					*(int32_t *)(v8 + 20) = v13;
					*(int32_t *)(v8 + 24) = v13;
					*(int32_t *)(v8 + 28) = v13;
					int32_t v38 = v8 + 32; // 0xd3b9c
					v8 = v38;
					int32_t v39 = v19 - 1; // 0xd3ba0
					// branch -> 0xd3b7c
					while (v39 != 0) {
						// 0xd3b7c
						*(int32_t *)v38 = v13;
						*(int32_t *)(v8 + 4) = v13;
						*(int32_t *)(v8 + 8) = v13;
						*(int32_t *)(v8 + 12) = v13;
						*(int32_t *)(v8 + 16) = v13;
						*(int32_t *)(v8 + 20) = v13;
						*(int32_t *)(v8 + 24) = v13;
						*(int32_t *)(v8 + 28) = v13;
						v38 = v8 + 32;
						v8 = v38;
						v39--;
						// continue -> 0xd3b7c
					}
					int32_t v40 = v6 % 8; // 0xd3ba4
					if (v40 == 0) {
						goto lab_0xd3bbc;
					}
					v21 = v38;
					v20 = v40;
					goto lab_0xd3bac;
				}
			}
		lab_0xd3bbc_4:
			// 0xd3bbc
			v15 = v2 - 2;
			v2 = v15;
			v16 = v4 - 768;
			if (v15 > -1) {
				goto lab_0xd3bbc_5;
			}
			// 0xd3bc8
			v2 = 2;
			v17 = 2;
			v14 = v16;
			// branch -> 0xd3bcc
			while (true) {
				// 0xd3bcc
				if (v14 < *(int32_t *)v1) {
					goto lab_0xd3be0_3;
				}
				goto lab_0xd3bd8_3;
			}
		} else {
			// 0xd3b18
			// branch -> 0xd3bbc
			goto lab_0xd3bbc_4;
		}
	}
}

// Address range: 0xd3c90 - 0xd3d78
int32_t function_d3c90(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd3ca0
	int32_t v2 = 30;                  // r29
	int32_t v3 = result;              // bp+24
	int32_t v4 = &a2;                 // 0xd3cd4
	if (result < *(int32_t *)v1) {
		// 0xd3d5c
		return result;
	}
	int32_t v5 = 30; // 0xd3cd8
	while (true) {
		// 0xd3ccc
		g39 = 32 - v5;
		function_da338((char *)&v3, v4, a3);
		int32_t v6 = a2;     // 0xd3ce0
		int32_t v7 = v2;     // 0xd3ce4
		int32_t v8 = v7 - 2; // 0xd3cec
		v2 = v8;
		int32_t v9 = __asm_rlwinm(v6, 0, 30, 30) + v6; // 0xd3cf4
		int32_t result2 = v3 - (800 - v7);             // 0xd3cf8
		a2 = v9;
		v3 = result2;
		if (v8 == 0 || v8 > 0) {
			// 0xd3ccc
			if (result2 >= *(int32_t *)v1) {
				// 0xd3ccc
				v5 = v2;
				// branch -> 0xd3ccc
				continue;
			}
			// 0xd3d5c
			return result2;
		}
		// 0xd3d08
		v2 = 2;
		int32_t v10 = 2; // 0xd3d28
		// branch -> 0xd3d0c
		int32_t result3; // 0xd3d4c
		while (true) {
			// 0xd3d0c
			if (result2 >= *(int32_t *)v1) {
				// 0xd3d1c
				g39 = 32 - v10;
				function_da338((char *)&v3, v4, a3);
				int32_t v11 = a2;      // 0xd3d30
				int32_t v12 = v2;      // 0xd3d34
				int32_t v13 = v12 + 2; // 0xd3d3c
				v2 = v13;
				int32_t v14 = __asm_rlwinm(v11, 0, 30, 30) + v11; // 0xd3d44
				result3 = 800 - v12;
				int32_t v15 = v3 - result3; // 0xd3d4c
				a2 = v14;
				v3 = v15;
				if (v13 >= 31) {
					// break -> 0xd3d5c
					break;
				}
				v10 = v13;
				result2 = v15;
				// continue -> 0xd3d0c
				continue;
			}
			// 0xd3d5c
			return result2;
		}
		// 0xd3d5c
		return result3;
	}
}

// Address range: 0xd3d78 - 0xd3f3c
int32_t function_d3d78(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd3d78
	int32_t v2 = 30;                  // r11
	int32_t v3 = 0;                   // r3
	int32_t result = v3;
	if (result < *(int32_t *)v1) {
		// 0xd3f38
		return result;
	}
	int32_t v4 = 30; // 0xd3d8c131
	while (true) {
		int32_t v5 = 32 - v4;                                 // 0xd3d8c
		int32_t v6 = v5;                                      // r10
		int32_t v7 = 0;                                       // 0xd3d98
		int32_t v8 = v7;                                      // r8
		int32_t v9 = v3;                                      // 0xd3da0
		int32_t v10 = v9;                                     // r9
		int32_t v11 = v6;                                     // 0xd3da4
		int32_t v12 = v7 + __asm_rlwinm(v5, 0, 30, 30) + v11; // r4
		int32_t v13 = v11 / 4;                                // 0xd3dac
		int32_t v14 = v13;                                    // r5
		int32_t v15 = v11;                                    // 0xd3e38
		if (v5 >= 4) {
			int32_t v16 = __asm_rlwinm_(v13, 29, 3, 31); // 0xd3db4
			int32_t v17 = v16;                           // ctr
			int32_t v18 = v14;                           // 0xd3dbc
			int32_t v19 = v10;
			int32_t v20; // 0xd3e1c
			if (v16 == 0) {
				v20 = v18;
			lab_0xd3e1c:;
				int32_t v21 = v8; // 0xd3e20
				v8 = v21 + 4;
				*(int32_t *)v19 = *(int32_t *)v21;
				int32_t v22 = v10 + 4; // 0xd3e2c
				v10 = v22;
				int32_t v23 = v20 - 1; // 0xd3e30
				// branch -> 0xd3e20
				while (v23 != 0) {
					// 0xd3e20
					v21 = v8;
					v8 = v21 + 4;
					*(int32_t *)v22 = *(int32_t *)v21;
					v22 = v10 + 4;
					v10 = v22;
					v23--;
					// continue -> 0xd3e20
				}
			lab_0xd3e34:
				// 0xd3e34
				// branch -> 0xd3e38
			lab_0xd3e38:
				// 0xd3e38
				if (__asm_rlwinm_(-4 * v18 + v6, 0, 30, 30) != 0) {
				lab_0xd3e40:
					// 0xd3e40
					*(int16_t *)v10 = *(int16_t *)v8;
					// branch -> 0xd3e48
				}
			lab_0xd3e48:;
				int32_t v24 = v2;      // 0xd3e48
				int32_t v25 = v24 - 2; // 0xd3e4c
				v2 = v25;
				int32_t v26 = v11 + v9 - (800 - v24); // 0xd3e50
				v3 = v26;
				int32_t result2;
				if (v25 > -1) {
					// 0xd3e48
					if (v26 < *(int32_t *)v1) {
						// break -> 0xd3f38
						break;
					}
					v4 = v25;
					// continue -> 0xd3d8c
					continue;
				} else {
					// 0xd3e58
					v2 = 2;
					int32_t v27 = 2; // 0xd3e68
					// branch -> 0xd3e5c
					while (true) {
						// 0xd3e5c
						if (v26 >= *(int32_t *)v1) {
							int32_t v28 = 32 - v27; // 0xd3e68
							v6 = v28;
							int32_t v29 = v12; // 0xd3e74
							v8 = v29;
							int32_t v30 = v3; // 0xd3e7c
							v10 = v30;
							int32_t v31 = v6; // 0xd3e80
							v12 = v29 + __asm_rlwinm(v28, 0, 30, 30) + v31;
							int32_t v32 = v31 / 4; // 0xd3e88
							v14 = v32;
							int32_t v33 = v31; // 0xd3f14
							if (v28 >= 4) {
								int32_t v34 = __asm_rlwinm_(v32, 29, 3, 31); // 0xd3e90
								v17 = v34;
								int32_t v35 = v14; // 0xd3e98
								int32_t v36 = v10;
								int32_t v37; // 0xd3ef8
								if (v34 == 0) {
									v37 = v35;
								lab_0xd3ef8:;
									int32_t v38 = v8; // 0xd3efc
									v8 = v38 + 4;
									*(int32_t *)v36 = *(int32_t *)v38;
									int32_t v39 = v10 + 4; // 0xd3f08
									v10 = v39;
									int32_t v40 = v37 - 1; // 0xd3f0c
									// branch -> 0xd3efc
									while (v40 != 0) {
										// 0xd3efc
										v38 = v8;
										v8 = v38 + 4;
										*(int32_t *)v39 = *(int32_t *)v38;
										v39 = v10 + 4;
										v10 = v39;
										v40--;
										// continue -> 0xd3efc
									}
								lab_0xd3f10:
									// 0xd3f10
									// branch -> 0xd3f14
								lab_0xd3f14:
									// 0xd3f14
									if (__asm_rlwinm_(-4 * v35 + v6, 0, 30, 30) != 0) {
									lab_0xd3f1c:
										// 0xd3f1c
										*(int16_t *)v10 = *(int16_t *)v8;
										// branch -> 0xd3f24
									}
								lab_0xd3f24:;
									int32_t v41 = v2;      // 0xd3f24
									int32_t v42 = v41 + 2; // 0xd3f28
									v2 = v42;
									int32_t v43 = v31 + v30 - (800 - v41); // 0xd3f30
									v3 = v43;
									if (v42 >= 31) {
										result2 = v43;
										// break -> 0xd3f38
										break;
									}
									v27 = v42;
									v26 = v43;
									// continue -> 0xd3e5c
									continue;
								} else {
									*(int32_t *)v36 = *(int32_t *)v8;
									*(int32_t *)(v10 + 4) = *(int32_t *)(v8 + 4);
									*(int32_t *)(v10 + 8) = *(int32_t *)(v8 + 8);
									*(int32_t *)(v10 + 12) = *(int32_t *)(v8 + 12);
									*(int32_t *)(v10 + 16) = *(int32_t *)(v8 + 16);
									*(int32_t *)(v10 + 20) = *(int32_t *)(v8 + 20);
									*(int32_t *)(v10 + 24) = *(int32_t *)(v8 + 24);
									int32_t v44 = v8; // 0xd3edc
									v8 = v44 + 32;
									*(int32_t *)(v10 + 28) = *(int32_t *)(v44 + 28);
									int32_t v45 = v10 + 32; // 0xd3ee8
									v10 = v45;
									int32_t v46 = v17 - 1; // 0xd3eec
									while (v46 != 0) {
										// 0xd3ea4
										*(int32_t *)v45 = *(int32_t *)v8;
										*(int32_t *)(v10 + 4) = *(int32_t *)(v8 + 4);
										*(int32_t *)(v10 + 8) = *(int32_t *)(v8 + 8);
										*(int32_t *)(v10 + 12) = *(int32_t *)(v8 + 12);
										*(int32_t *)(v10 + 16) = *(int32_t *)(v8 + 16);
										*(int32_t *)(v10 + 20) = *(int32_t *)(v8 + 20);
										*(int32_t *)(v10 + 24) = *(int32_t *)(v8 + 24);
										v44 = v8;
										v8 = v44 + 32;
										*(int32_t *)(v10 + 28) = *(int32_t *)(v44 + 28);
										v45 = v10 + 32;
										v10 = v45;
										v46--;
										// continue -> 0xd3ea4
									}
									int32_t v47 = v14 % 8; // 0xd3ef0
									if (v47 == 0) {
										goto lab_0xd3f10;
									}
									v36 = v45;
									v37 = v47;
									goto lab_0xd3ef8;
								}
								int32_t v48 = v6;        // 0xd3f10
								int32_t v49;             // r0
								int32_t v50 = v49;       // 0xd3f10
								int32_t v51 = v50 + v48; // 0xd3f10
								v6 = v51;
								v33 = v51;
								// branch -> 0xd3f14
								goto lab_0xd3f14;
							}
							// 0xd3f14
							if (__asm_rlwinm_(v33, 0, 30, 30) == 0) {
								goto lab_0xd3f24;
							}
							goto lab_0xd3f1c;
						} else {
							result2 = v26;
						}
					}
				}
				// 0xd3f38
				return result2;
			}
			*(int32_t *)v19 = *(int32_t *)v8;
			*(int32_t *)(v10 + 4) = *(int32_t *)(v8 + 4);
			*(int32_t *)(v10 + 8) = *(int32_t *)(v8 + 8);
			*(int32_t *)(v10 + 12) = *(int32_t *)(v8 + 12);
			*(int32_t *)(v10 + 16) = *(int32_t *)(v8 + 16);
			*(int32_t *)(v10 + 20) = *(int32_t *)(v8 + 20);
			*(int32_t *)(v10 + 24) = *(int32_t *)(v8 + 24);
			int32_t v52 = v8; // 0xd3e00
			v8 = v52 + 32;
			*(int32_t *)(v10 + 28) = *(int32_t *)(v52 + 28);
			int32_t v53 = v10 + 32; // 0xd3e0c
			v10 = v53;
			int32_t v54 = v17 - 1; // 0xd3e10
			while (v54 != 0) {
				// 0xd3dc8
				*(int32_t *)v53 = *(int32_t *)v8;
				*(int32_t *)(v10 + 4) = *(int32_t *)(v8 + 4);
				*(int32_t *)(v10 + 8) = *(int32_t *)(v8 + 8);
				*(int32_t *)(v10 + 12) = *(int32_t *)(v8 + 12);
				*(int32_t *)(v10 + 16) = *(int32_t *)(v8 + 16);
				*(int32_t *)(v10 + 20) = *(int32_t *)(v8 + 20);
				*(int32_t *)(v10 + 24) = *(int32_t *)(v8 + 24);
				v52 = v8;
				v8 = v52 + 32;
				*(int32_t *)(v10 + 28) = *(int32_t *)(v52 + 28);
				v53 = v10 + 32;
				v10 = v53;
				v54--;
				// continue -> 0xd3dc8
			}
			int32_t v55 = v14 % 8; // 0xd3e14
			if (v55 == 0) {
				goto lab_0xd3e34;
			}
			v19 = v53;
			v20 = v55;
			goto lab_0xd3e1c;
		}
		// 0xd3e38
		if (__asm_rlwinm_(v15, 0, 30, 30) == 0) {
			goto lab_0xd3e48;
		}
		goto lab_0xd3e40;
	}
}

// Address range: 0xd3f3c - 0xd40b8
int32_t function_d3f3c(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd3f3c
	int32_t v2 = 30;                  // r8
	int32_t result = 0;
	if (result < *(int32_t *)v1) {
		// 0xd40b4
		return result;
	}
	int32_t v3 = 30; // 0xd3f50131
	while (true) {
		int32_t v4 = 32 - v3;     // 0xd3f50
		int32_t v5 = v4;          // r4
		int32_t v6 = result;      // r7
		int32_t v7 = v4 + result; // r3
		int32_t v8 = v4;          // 0xd3f74
		if (v4 % 2 != 0) {
			// 0xd3f64
			v5 = v4 - 1;
			*(char *)result = 0;
			v6++;
			v8 = v5;
			// branch -> 0xd3f74
		}
		// 0xd3f74
		if (__asm_rlwinm_(v8, 0, 30, 30) != 0) {
			// 0xd3f7c
			v5 -= 2;
			*(int16_t *)v6 = 0;
			v6 += 2;
			// branch -> 0xd3f8c
		}
		uint32_t v9 = v5;     // 0xd3f8c
		int32_t v10 = v9 / 4; // 0xd3f90
		v5 = v10;
		int32_t v11 = 0; // r5
		int32_t v12;     // 0xd3fe8
		int32_t v13;     // 0xd4008
		int32_t v14;     // 0xd3fec
		int32_t v15;     // 0xd3ff0
		int32_t result3; // 0xd4004
		if (v9 >= 4) {
			int32_t v16 = __asm_rlwinm_(v10, 29, 3, 31); // 0xd3f9c
			int32_t v17 = v16;                           // ctr
			int32_t v18;                                 // 0xd3fd8
			int32_t v19;
			if (v16 == 0) {
				// 0xd3f9c
				v19 = v6;
				v18 = v5;
				// branch -> 0xd3fd8
			lab_0xd3fd8:
				// 0xd3fd8
				*(int32_t *)v19 = v11;
				int32_t v20 = v6 + 4;  // 0xd3fe0
				int32_t v21 = v18 - 1; // 0xd3fe4
				// branch -> 0xd3fdc
				while (v21 != 0) {
					// 0xd3fdc
					*(int32_t *)v20 = v11;
					v20 += 4;
					v21--;
					// continue -> 0xd3fdc
				}
			lab_0xd3fe8:
				// 0xd3fe8
				v12 = v2;
				v14 = v12 - 2;
				v2 = v14;
				v15 = v7 + v12 - 800;
				if (v14 > -1) {
				lab_0xd3fe8_3:
					// 0xd3fe8
					if (v15 < *(int32_t *)v1) {
						// break -> 0xd40b4
						break;
					}
					result = v15;
					v3 = v14;
					// continue -> 0xd3f50
					continue;
				}
				// 0xd3ff8
				v2 = 2;
				v13 = 2;
				result3 = v15;
				// branch -> 0xd3ffc
				int32_t result2;
				while (true) {
					// 0xd3ffc
					if (result3 >= *(int32_t *)v1) {
					lab_0xd4008_2:;
						int32_t v22 = 32 - v13; // 0xd4008
						v5 = v22;
						v6 = result3;
						v7 = v22 + result3;
						int32_t v23 = v22; // 0xd402c
						if (v22 % 2 != 0) {
							// 0xd401c
							v5 = v22 - 1;
							*(char *)result3 = 0;
							v6++;
							v23 = v5;
							// branch -> 0xd402c
						}
						// 0xd402c
						if (__asm_rlwinm_(v23, 0, 30, 30) != 0) {
							// 0xd4034
							v5 -= 2;
							*(int16_t *)v6 = 0;
							v6 += 2;
							// branch -> 0xd4044
						}
						uint32_t v24 = v5;     // 0xd4044
						int32_t v25 = v24 / 4; // 0xd4048
						v5 = v25;
						v11 = 0;
						int32_t v26; // 0xd40a0
						int32_t v27; // 0xd40a4
						int32_t v28; // 0xd40ac
						if (v24 >= 4) {
							int32_t v29 = __asm_rlwinm_(v25, 29, 3, 31); // 0xd4054
							v17 = v29;
							int32_t v30; // 0xd4090
							int32_t v31;
							if (v29 == 0) {
								// 0xd4054
								v31 = v6;
								v30 = v5;
								// branch -> 0xd4090
							lab_0xd4090:
								// 0xd4090
								*(int32_t *)v31 = v11;
								int32_t v32 = v6 + 4;  // 0xd4098
								int32_t v33 = v30 - 1; // 0xd409c
								// branch -> 0xd4094
								while (v33 != 0) {
									// 0xd4094
									*(int32_t *)v32 = v11;
									v32 += 4;
									v33--;
									// continue -> 0xd4094
								}
							lab_0xd40a0:
								// 0xd40a0
								v26 = v2;
								v27 = v26 + 2;
								v2 = v27;
								v28 = v7 + v26 - 800;
								if (v27 >= 31) {
									result2 = v28;
									// break -> 0xd40b4
									break;
								}
								v13 = v27;
								result3 = v28;
								// continue -> 0xd3ffc
								continue;
							} else {
								// 0xd4060
								*(int32_t *)v6 = v11;
								*(int32_t *)(v6 + 4) = v11;
								*(int32_t *)(v6 + 8) = v11;
								*(int32_t *)(v6 + 12) = v11;
								*(int32_t *)(v6 + 16) = v11;
								*(int32_t *)(v6 + 20) = v11;
								*(int32_t *)(v6 + 24) = v11;
								*(int32_t *)(v6 + 28) = v11;
								int32_t v34 = v6 + 32; // 0xd4080
								v6 = v34;
								int32_t v35 = v17 - 1; // 0xd4084
								// branch -> 0xd4060
								while (v35 != 0) {
									// 0xd4060
									*(int32_t *)v34 = v11;
									*(int32_t *)(v6 + 4) = v11;
									*(int32_t *)(v6 + 8) = v11;
									*(int32_t *)(v6 + 12) = v11;
									*(int32_t *)(v6 + 16) = v11;
									*(int32_t *)(v6 + 20) = v11;
									*(int32_t *)(v6 + 24) = v11;
									*(int32_t *)(v6 + 28) = v11;
									v34 = v6 + 32;
									v6 = v34;
									v35--;
									// continue -> 0xd4060
								}
								int32_t v36 = v5 % 8; // 0xd4088
								if (v36 == 0) {
									goto lab_0xd40a0;
								}
								v31 = v34;
								v30 = v36;
								goto lab_0xd4090;
							}
							// 0xd40a0
							v26 = v2;
							v27 = v26 + 2;
							v2 = v27;
							int32_t v37 = v7; // 0xd40ac
							v28 = v37 + v26 - 800;
							v7 = v28;
							if (v27 >= 31) {
								result2 = v28;
								// break -> 0xd40b4
								break;
							}
							v13 = v27;
							result3 = v28;
							// continue -> 0xd3ffc
							continue;
						}
						// 0xd40a0
						v26 = v2;
						v27 = v26 + 2;
						v2 = v27;
						v28 = v7 + v26 - 800;
						if (v27 >= 31) {
							result2 = v28;
							// break -> 0xd40b4
							break;
						}
						v13 = v27;
						result3 = v28;
						// continue -> 0xd3ffc
						continue;
					} else {
						result2 = result3;
					}
				}
				// 0xd40b4
				return result2;
			}
			// 0xd3fa8
			*(int32_t *)v6 = v11;
			*(int32_t *)(v6 + 4) = v11;
			*(int32_t *)(v6 + 8) = v11;
			*(int32_t *)(v6 + 12) = v11;
			*(int32_t *)(v6 + 16) = v11;
			*(int32_t *)(v6 + 20) = v11;
			*(int32_t *)(v6 + 24) = v11;
			*(int32_t *)(v6 + 28) = v11;
			int32_t v38 = v6 + 32; // 0xd3fc8
			v6 = v38;
			int32_t v39 = v17 - 1; // 0xd3fcc
			// branch -> 0xd3fa8
			while (v39 != 0) {
				// 0xd3fa8
				*(int32_t *)v38 = v11;
				*(int32_t *)(v6 + 4) = v11;
				*(int32_t *)(v6 + 8) = v11;
				*(int32_t *)(v6 + 12) = v11;
				*(int32_t *)(v6 + 16) = v11;
				*(int32_t *)(v6 + 20) = v11;
				*(int32_t *)(v6 + 24) = v11;
				*(int32_t *)(v6 + 28) = v11;
				v38 = v6 + 32;
				v6 = v38;
				v39--;
				// continue -> 0xd3fa8
			}
			int32_t v40 = v5 % 8; // 0xd3fd0
			if (v40 == 0) {
				goto lab_0xd3fe8;
			}
			v19 = v38;
			v18 = v40;
			goto lab_0xd3fd8;
		}
		// 0xd3fe8
		v12 = v2;
		v14 = v12 - 2;
		v2 = v14;
		v15 = v7 + v12 - 800;
		if (v14 > -1) {
			goto lab_0xd3fe8_3;
		}
		// 0xd3ff8
		v2 = 2;
		v13 = 2;
		result3 = v15;
		// branch -> 0xd3ffc
		while (true) {
			// 0xd3ffc
			if (result3 >= *(int32_t *)v1) {
				goto lab_0xd4008_2;
			}
			// 0xd40b4
			return result3;
		}
	}
}

// Address range: 0xd40b8 - 0xd41d0
int32_t function_d40b8(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1;       // bp-24
	int32_t v2 = &v1; // 0xd40dc
	int32_t v3 = &a2; // 0xd40e4
	v1 = 30;
	int32_t v4;      // 0xd4194
	int32_t v5;      // 0xd4198
	int32_t result2; // 0xd41a0
	int32_t v6;      // 0xd4184
	int32_t v7;      // 0xd4188
	int32_t v8;
	int32_t result; // 0xd4160
	if (function_d0424(&a1, v3, v2, 0) != 0) {
		int32_t v9 = v1;
		if (v9 > -1) {
			g39 = 32 - v9;
			function_da338((char *)&a1, v3, a3);
			int32_t v10 = v1;      // 0xd4110
			int32_t v11 = a2;      // 0xd4114
			int32_t v12 = v10 - 2; // 0xd4124
			a2 = __asm_rlwinm(v11, 0, 30, 30) + v11;
			a1 -= (800 - v10);
			v1 = v12;
			// branch -> 0xd40fc
			while (v12 > 0xffffffff) {
				// 0xd40fc
				g39 = 32 - v12;
				function_da338((char *)&a1, v3, a3);
				v10 = v1;
				v11 = a2;
				v12 = v10 - 2;
				a2 = __asm_rlwinm(v11, 0, 30, 30) + v11;
				a1 -= (800 - v10);
				v1 = v12;
				// continue -> 0xd40fc
			}
			// 0xd4148
			v1 = 2;
			result = function_d035c(&a1, v3, v2, 0);
			if (result == 0) {
				// 0xd41bc
				return 0;
			}
			// 0xd41b0
			v8 = v1;
			if (v8 >= 31) {
				// 0xd41bc
				return result;
			}
			// 0xd4170
			g39 = 32 - v8;
			function_da338((char *)&a1, v3, a3);
			v6 = v1;
			v7 = a2;
			v4 = __asm_rlwinm(v7, 0, 30, 30);
			v5 = v6 + 2;
			result2 = a1 - (800 - v6);
			a2 = v4 + v7;
			a1 = result2;
			v1 = v5;
			// branch -> 0xd4170
			while (v5 < 31) {
				// 0xd4170
				g39 = 32 - v5;
				function_da338((char *)&a1, v3, a3);
				v6 = v1;
				v7 = a2;
				v4 = __asm_rlwinm(v7, 0, 30, 30);
				v5 = v6 + 2;
				result2 = a1 - (800 - v6);
				a2 = v4 + v7;
				a1 = result2;
				v1 = v5;
				// continue -> 0xd4170
			}
			// 0xd41bc
			return result2;
		}
	}
	// 0xd4148
	v1 = 2;
	result = function_d035c(&a1, v3, v2, 0);
	if (result == 0) {
		// 0xd41bc
		return 0;
	}
	// 0xd41b0
	v8 = v1;
	if (v8 >= 31) {
		// 0xd41bc
		return result;
	}
	// 0xd4170
	g39 = 32 - v8;
	function_da338((char *)&a1, v3, a3);
	v6 = v1;
	v7 = a2;
	v4 = __asm_rlwinm(v7, 0, 30, 30);
	v5 = v6 + 2;
	result2 = a1 - (800 - v6);
	a2 = v4 + v7;
	a1 = result2;
	v1 = v5;
	// branch -> 0xd4170
	while (v5 < 31) {
		// 0xd4170
		g39 = 32 - v5;
		function_da338((char *)&a1, v3, a3);
		v6 = v1;
		v7 = a2;
		v4 = __asm_rlwinm(v7, 0, 30, 30);
		v5 = v6 + 2;
		result2 = a1 - (800 - v6);
		a2 = v4 + v7;
		a1 = result2;
		v1 = v5;
		// continue -> 0xd4170
	}
	// 0xd41bc
	return result2;
}

// Address range: 0xd41d0 - 0xd441c
int32_t function_d41d0(int16_t *a1, int32_t a2)
{
	int16_t *v1 = (int16_t *)(int32_t)a1; // bp+24
	int32_t v2;                           // bp-8
	int32_t v3 = &v2;                     // 0xd41ec
	int16_t *v4 = (int16_t *)a2;          // bp+28
	int32_t v5 = (int32_t)&v4;            // 0xd41f4
	v2 = 30;
	int32_t v6;  // ctr
	int32_t v7;  // r3
	int32_t v8;  // r5
	int32_t v9;  // r6
	int32_t v10; // r7
	if (function_d0424((int32_t *)&v1, v5, v3, 0) != 0) {
		int32_t v11 = v2;
		if (v11 > -1) {
			while (true) {
				int32_t v12 = 32 - v11; // 0xd420c
				v10 = v12;
				v8 = (int32_t)v4;
				int32_t v13 = (int32_t)v1; // 0xd4218
				v9 = v13;
				uint32_t v14 = v10;                                    // 0xd4220
				int32_t v15 = v8 + __asm_rlwinm(v12, 0, 30, 30) + v14; // 0xd4228
				v1 = (int16_t *)(v14 + v13);
				int32_t v16 = v14 / 4; // 0xd4230
				v7 = v16;
				v4 = (int16_t *)v15;
				int32_t v17 = v14; // 0xd42c0
				if (v14 >= 4) {
					int32_t v18 = __asm_rlwinm_(v16, 29, 3, 31); // 0xd423c
					v6 = v18;
					int32_t v19 = v7; // 0xd4244
					int32_t v20 = v9;
					int32_t v21; // 0xd42a4
					if (v18 == 0) {
						v21 = v19;
					lab_0xd42a4:;
						int32_t v22 = v8; // 0xd42a8
						v8 = v22 + 4;
						*(int32_t *)v20 = *(int32_t *)v22;
						int32_t v23 = v9 + 4; // 0xd42b4
						v9 = v23;
						int32_t v24 = v21 - 1; // 0xd42b8
						// branch -> 0xd42a8
						while (v24 != 0) {
							// 0xd42a8
							v22 = v8;
							v8 = v22 + 4;
							*(int32_t *)v23 = *(int32_t *)v22;
							v23 = v9 + 4;
							v9 = v23;
							v24--;
							// continue -> 0xd42a8
						}
					lab_0xd42bc:
						// 0xd42bc
						// branch -> 0xd42c0
					lab_0xd42c0:
						// 0xd42c0
						if (__asm_rlwinm_(-4 * v19 + v10, 0, 30, 30) != 0) {
						lab_0xd42c8:
							// 0xd42c8
							*(int16_t *)v9 = *(int16_t *)v8;
							// branch -> 0xd42d0
						}
					lab_0xd42d0:;
						int32_t v25 = v2;      // 0xd42d0
						int32_t v26 = v25 - 2; // 0xd42dc
						v2 = v26;
						v1 = (int16_t *)((int32_t)v1 - (800 - v25));
						if (v26 <= 0xffffffff) {
							// break -> 0xd42f8
							break;
						}
						v11 = v26;
						// continue -> 0xd420c
						continue;
					} else {
						*(int32_t *)v20 = *(int32_t *)v8;
						*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
						*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
						*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
						*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
						*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
						*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
						int32_t v27 = v8; // 0xd4288
						v8 = v27 + 32;
						*(int32_t *)(v9 + 28) = *(int32_t *)(v27 + 28);
						int32_t v28 = v9 + 32; // 0xd4294
						v9 = v28;
						int32_t v29 = v6 - 1; // 0xd4298
						while (v29 != 0) {
							// 0xd4250
							*(int32_t *)v28 = *(int32_t *)v8;
							*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
							*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
							*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
							*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
							*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
							*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
							v27 = v8;
							v8 = v27 + 32;
							*(int32_t *)(v9 + 28) = *(int32_t *)(v27 + 28);
							v28 = v9 + 32;
							v9 = v28;
							v29--;
							// continue -> 0xd4250
						}
						int32_t v30 = v7 % 8; // 0xd429c
						if (v30 == 0) {
							goto lab_0xd42bc;
						}
						v20 = v28;
						v21 = v30;
						goto lab_0xd42a4;
					}
				}
				// 0xd42c0
				if (__asm_rlwinm_(v17, 0, 30, 30) == 0) {
					goto lab_0xd42d0;
				}
				goto lab_0xd42c8;
			}
		}
	}
	// 0xd42f8
	v2 = 2;
	int32_t result = function_d035c((int32_t *)&v1, v5, v3, 0); // 0xd4310
	if (result == 0) {
		// 0xd440c
		return 0;
	}
	int32_t v31 = v2;
	if (v31 < 31) {
		while (true) {
			int32_t v32 = 32 - v31; // 0xd4320
			v10 = v32;
			v8 = (int32_t)v4;
			int32_t v33 = (int32_t)v1; // 0xd432c
			v9 = v33;
			uint32_t v34 = v10;                                    // 0xd4334
			int32_t v35 = v8 + __asm_rlwinm(v32, 0, 30, 30) + v34; // 0xd433c
			v1 = (int16_t *)(v34 + v33);
			int32_t v36 = v34 / 4; // 0xd4344
			v7 = v36;
			v4 = (int16_t *)v35;
			int32_t v37 = v34; // 0xd43d4
			if (v34 >= 4) {
				int32_t v38 = __asm_rlwinm_(v36, 29, 3, 31); // 0xd4350
				v6 = v38;
				int32_t v39 = v7; // 0xd4358
				int32_t v40 = v9;
				int32_t v41; // 0xd43b8
				if (v38 == 0) {
					v41 = v39;
				lab_0xd43b8:;
					int32_t v42 = v8; // 0xd43bc
					v8 = v42 + 4;
					*(int32_t *)v40 = *(int32_t *)v42;
					int32_t v43 = v9 + 4; // 0xd43c8
					v9 = v43;
					int32_t v44 = v41 - 1; // 0xd43cc
					// branch -> 0xd43bc
					while (v44 != 0) {
						// 0xd43bc
						v42 = v8;
						v8 = v42 + 4;
						*(int32_t *)v43 = *(int32_t *)v42;
						v43 = v9 + 4;
						v9 = v43;
						v44--;
						// continue -> 0xd43bc
					}
				lab_0xd43d0:
					// 0xd43d0
					// branch -> 0xd43d4
				lab_0xd43d4:
					// 0xd43d4
					if (__asm_rlwinm_(-4 * v39 + v10, 0, 30, 30) != 0) {
					lab_0xd43dc:
						// 0xd43dc
						*(int16_t *)v9 = *(int16_t *)v8;
						// branch -> 0xd43e4
					}
				lab_0xd43e4:;
					int32_t v45 = v2;                        // 0xd43e4
					int32_t v46 = v45 + 2;                   // 0xd43f0
					int32_t v47 = (int32_t)v1 - (800 - v45); // 0xd43f4
					v2 = v46;
					v1 = (int16_t *)v47;
					if (v46 >= 31) {
						result = v47;
						// break -> 0xd440c
						break;
					}
					v31 = v46;
					// continue -> 0xd4320
					continue;
				} else {
					*(int32_t *)v40 = *(int32_t *)v8;
					*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
					*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
					*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
					*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
					*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
					*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
					int32_t v48 = v8; // 0xd439c
					v8 = v48 + 32;
					*(int32_t *)(v9 + 28) = *(int32_t *)(v48 + 28);
					int32_t v49 = v9 + 32; // 0xd43a8
					v9 = v49;
					int32_t v50 = v6 - 1; // 0xd43ac
					while (v50 != 0) {
						// 0xd4364
						*(int32_t *)v49 = *(int32_t *)v8;
						*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
						*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
						*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
						*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
						*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
						*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
						v48 = v8;
						v8 = v48 + 32;
						*(int32_t *)(v9 + 28) = *(int32_t *)(v48 + 28);
						v49 = v9 + 32;
						v9 = v49;
						v50--;
						// continue -> 0xd4364
					}
					int32_t v51 = v7 % 8; // 0xd43b0
					if (v51 == 0) {
						goto lab_0xd43d0;
					}
					v40 = v49;
					v41 = v51;
					goto lab_0xd43b8;
				}
			}
			// 0xd43d4
			if (__asm_rlwinm_(v37, 0, 30, 30) == 0) {
				goto lab_0xd43e4;
			}
			goto lab_0xd43dc;
		}
	}
	// 0xd440c
	return result;
}

// Address range: 0xd441c - 0xd45b0
int32_t function_d441c(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd441c
	int32_t v2 = 30;                  // r8
	int32_t v3 = 30;                  // 0xd443c
	int32_t v4 = 0;                   // 0xd4458
	// branch -> 0xd4424
	while (true) {
		int32_t v5 = 32 - v3; // 0xd443c
		int32_t v6;           // r3
		if (v4 < *(int32_t *)v1) {
			int32_t v7 = v5; // r4
			int32_t v8 = v4; // r7
			v6 = v5 + v4;
			int32_t v9 = v5; // 0xd4460
			if (v5 % 2 != 0) {
				// 0xd4450
				v7 = v5 - 1;
				*(char *)v4 = 0;
				v8++;
				v9 = v7;
				// branch -> 0xd4460
			}
			// 0xd4460
			if (__asm_rlwinm_(v9, 0, 30, 30) != 0) {
				// 0xd4468
				v7 -= 2;
				*(int16_t *)v8 = 0;
				v8 += 2;
				// branch -> 0xd4478
			}
			uint32_t v10 = v7;     // 0xd4478
			int32_t v11 = v10 / 4; // 0xd447c
			v7 = v11;
			int32_t v12 = 0; // r5
			int32_t v13;     // 0xd44d4
			int32_t v14;     // 0xd44d8
			int32_t v15;     // 0xd4500
			int32_t v16;     // 0xd44dc
			int32_t v17;     // 0xd451c
			if (v10 >= 4) {
				int32_t v18 = __asm_rlwinm_(v11, 29, 3, 31); // 0xd4488
				int32_t v19 = v18;                           // ctr
				int32_t v20;                                 // 0xd44c4
				int32_t v21;
				if (v18 == 0) {
					// 0xd4488
					v21 = v8;
					v20 = v7;
					// branch -> 0xd44c4
				lab_0xd44c4:
					// 0xd44c4
					*(int32_t *)v21 = v12;
					int32_t v22 = v8 + 4;  // 0xd44cc
					int32_t v23 = v20 - 1; // 0xd44d0
					// branch -> 0xd44c8
					while (v23 != 0) {
						// 0xd44c8
						*(int32_t *)v22 = v12;
						v22 += 4;
						v23--;
						// continue -> 0xd44c8
					}
				lab_0xd44d4:
					// 0xd44d4
					v13 = v2;
					v14 = v13 - 2;
					v2 = v14;
					v16 = v6 + v13 - 800;
					if (v14 <= -1) {
						// 0xd44e4
						v2 = 2;
						int32_t v24 = 2; // 0xd4500
						v17 = v16;
						// branch -> 0xd44e8
						int32_t result; // 0xd45a4
						while (true) {
							// 0xd44e8
							v15 = 32 - v24;
							int32_t v25; // 0xd4598
							int32_t v26; // 0xd459c
							if (v17 < *(int32_t *)v1) {
							lab_0xd4500_3:
								// 0xd4500
								v7 = v15;
								v8 = v17;
								v6 = v15 + v17;
								int32_t v27 = v15; // 0xd4524
								if (v15 % 2 != 0) {
									// 0xd4514
									v7 = v15 - 1;
									*(char *)v17 = 0;
									v8++;
									v27 = v7;
									// branch -> 0xd4524
								}
								// 0xd4524
								if (__asm_rlwinm_(v27, 0, 30, 30) != 0) {
									// 0xd452c
									v7 -= 2;
									*(int16_t *)v8 = 0;
									v8 += 2;
									// branch -> 0xd453c
								}
								uint32_t v28 = v7;     // 0xd453c
								int32_t v29 = v28 / 4; // 0xd4540
								v7 = v29;
								v12 = 0;
								if (v28 >= 4) {
									int32_t v30 = __asm_rlwinm_(v29, 29, 3, 31); // 0xd454c
									v19 = v30;
									int32_t v31; // 0xd4588
									int32_t v32;
									if (v30 == 0) {
										// 0xd454c
										v32 = v8;
										v31 = v7;
										// branch -> 0xd4588
									lab_0xd4588:
										// 0xd4588
										*(int32_t *)v32 = v12;
										int32_t v33 = v8 + 4;  // 0xd4590
										int32_t v34 = v31 - 1; // 0xd4594
										// branch -> 0xd458c
										while (v34 != 0) {
											// 0xd458c
											*(int32_t *)v33 = v12;
											v33 += 4;
											v34--;
											// continue -> 0xd458c
										}
									lab_0xd4598:
										// 0xd4598
										v25 = v2;
										v26 = v25 + 2;
										v2 = v26;
										result = v6 + v25 - 800;
										if (v26 >= 31) {
											// break -> 0xd45ac
											break;
										}
										v24 = v26;
										v17 = result;
										// continue -> 0xd44e8
										continue;
									} else {
										// 0xd4558
										*(int32_t *)v8 = v12;
										*(int32_t *)(v8 + 4) = v12;
										*(int32_t *)(v8 + 8) = v12;
										*(int32_t *)(v8 + 12) = v12;
										*(int32_t *)(v8 + 16) = v12;
										*(int32_t *)(v8 + 20) = v12;
										*(int32_t *)(v8 + 24) = v12;
										*(int32_t *)(v8 + 28) = v12;
										int32_t v35 = v8 + 32; // 0xd4578
										v8 = v35;
										int32_t v36 = v19 - 1; // 0xd457c
										// branch -> 0xd4558
										while (v36 != 0) {
											// 0xd4558
											*(int32_t *)v35 = v12;
											*(int32_t *)(v8 + 4) = v12;
											*(int32_t *)(v8 + 8) = v12;
											*(int32_t *)(v8 + 12) = v12;
											*(int32_t *)(v8 + 16) = v12;
											*(int32_t *)(v8 + 20) = v12;
											*(int32_t *)(v8 + 24) = v12;
											*(int32_t *)(v8 + 28) = v12;
											v35 = v8 + 32;
											v8 = v35;
											v36--;
											// continue -> 0xd4558
										}
										int32_t v37 = v7 % 8; // 0xd4580
										if (v37 == 0) {
											goto lab_0xd4598;
										}
										v32 = v35;
										v31 = v37;
										goto lab_0xd4588;
									}
								lab_0xd4598_2:
									// 0xd4598
									v25 = v2;
									v26 = v25 + 2;
									v2 = v26;
									result = v17 + v15 + v25 - 800;
									if (v26 >= 31) {
										// break -> 0xd45ac
										break;
									}
									v24 = v26;
									v17 = result;
									// continue -> 0xd44e8
									continue;
								}
							} else {
							lab_0xd44f4_3:
								// 0xd44f4
								// branch -> 0xd4598
								goto lab_0xd4598_2;
							}
							// 0xd4598
							v25 = v2;
							v26 = v25 + 2;
							v2 = v26;
							result = v6 + v25 - 800;
							if (v26 >= 31) {
								// break -> 0xd45ac
								break;
							}
							v24 = v26;
							v17 = result;
							// continue -> 0xd44e8
						}
						// 0xd45ac
						return result;
					}
				lab_0xd44d4_5:
					// 0xd44d4
					v3 = v14;
					v4 = v16;
					// branch -> 0xd4424
					continue;
				} else {
					// 0xd4494
					*(int32_t *)v8 = v12;
					*(int32_t *)(v8 + 4) = v12;
					*(int32_t *)(v8 + 8) = v12;
					*(int32_t *)(v8 + 12) = v12;
					*(int32_t *)(v8 + 16) = v12;
					*(int32_t *)(v8 + 20) = v12;
					*(int32_t *)(v8 + 24) = v12;
					*(int32_t *)(v8 + 28) = v12;
					int32_t v38 = v8 + 32; // 0xd44b4
					v8 = v38;
					int32_t v39 = v19 - 1; // 0xd44b8
					// branch -> 0xd4494
					while (v39 != 0) {
						// 0xd4494
						*(int32_t *)v38 = v12;
						*(int32_t *)(v8 + 4) = v12;
						*(int32_t *)(v8 + 8) = v12;
						*(int32_t *)(v8 + 12) = v12;
						*(int32_t *)(v8 + 16) = v12;
						*(int32_t *)(v8 + 20) = v12;
						*(int32_t *)(v8 + 24) = v12;
						*(int32_t *)(v8 + 28) = v12;
						v38 = v8 + 32;
						v8 = v38;
						v39--;
						// continue -> 0xd4494
					}
					int32_t v40 = v7 % 8; // 0xd44bc
					if (v40 == 0) {
						goto lab_0xd44d4;
					}
					v21 = v38;
					v20 = v40;
					goto lab_0xd44c4;
				}
			}
		lab_0xd44d4_4:
			// 0xd44d4
			v13 = v2;
			v14 = v13 - 2;
			v2 = v14;
			v16 = v6 + v13 - 800;
			if (v14 > -1) {
				goto lab_0xd44d4_5;
			}
			// 0xd44e4
			v2 = 2;
			v17 = v16;
			// branch -> 0xd44e8
			while (true) {
				// 0xd44e8
				v15 = 30;
				if (v17 < *(int32_t *)v1) {
					goto lab_0xd4500_3;
				}
				goto lab_0xd44f4_3;
			}
		} else {
			// 0xd4430
			v6 = v4 + v5;
			// branch -> 0xd44d4
			goto lab_0xd44d4_4;
		}
	}
}

// Address range: 0xd45b0 - 0xd472c
int32_t function_d45b0(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd45c0
	int32_t v4 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t v5 = &a2;    // 0xd4644
	int32_t result = a1; // 0xd45ec
	// branch -> 0xd45ec
	int32_t v6; // 0xd466c
	while (true) {
		// 0xd45ec
		if (result < *(int32_t *)v2) {
			// 0xd470c
			return result;
		}
		int32_t *v7 = (int32_t *)v3; // 0xd45fc
		*v7 = *v7 ^ 1;
		g39 = 32 - v4;
		int32_t v8;
		if (*(int32_t *)v3 == 0) {
			// 0xd463c
			function_da6a4((char *)&a1, v5, a3);
			int32_t v9 = a2; // 0xd4650
			v8 = __asm_rlwinm(v9, 0, 30, 30) + v9;
			// branch -> 0xd4660
		} else {
			// 0xd4614
			function_da538((char *)&a1, v5, a3);
			v8 = __asm_rlwinm(a2, 0, 30, 30) + a2;
			// branch -> 0xd4660
		}
		// 0xd4660
		a2 = v8;
		int32_t v10 = v4;      // 0xd4664
		int32_t v11 = v10 - 2; // 0xd4668
		v4 = v11;
		v6 = a1 - (800 - v10);
		a1 = v6;
		if (v11 <= 0xffffffff) {
			// break -> 0xd4678
			break;
		}
		result = v6;
		// continue -> 0xd45ec
	}
	// 0xd4678
	v4 = 2;
	int32_t result2 = v6; // 0xd467c
	// branch -> 0xd467c
	int32_t result3; // 0xd46f4
	while (true) {
		// 0xd467c
		if (result2 < *(int32_t *)v2) {
			// 0xd470c
			return result2;
		}
		int32_t *v12 = (int32_t *)v3; // 0xd468c
		*v12 = *v12 ^ 1;
		g39 = 32 - v4;
		int32_t v13;
		if (*(int32_t *)v3 == 0) {
			// 0xd46cc
			function_da6a4((char *)&a1, v5, a3);
			int32_t v14 = a2; // 0xd46e0
			v13 = __asm_rlwinm(v14, 0, 30, 30) + v14;
			// branch -> 0xd46f0
		} else {
			// 0xd46a4
			function_da538((char *)&a1, v5, a3);
			v13 = __asm_rlwinm(a2, 0, 30, 30) + a2;
			// branch -> 0xd46f0
		}
		// 0xd46f0
		a2 = v13;
		int32_t v15 = v4; // 0xd46f4
		result3 = 800 - v15;
		int32_t v16 = v15 + 2; // 0xd46f8
		v4 = v16;
		int32_t v17 = a1 - result3; // 0xd46fc
		a1 = v17;
		if (v16 >= 31) {
			// break -> 0xd470c
			break;
		}
		result2 = v17;
		// continue -> 0xd467c
	}
	// 0xd470c
	return result3;
}

// Address range: 0xd472c - 0xd48a4
int32_t function_d472c(int32_t a1, int32_t a2)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd473c
	int32_t v4 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t v5 = &a2;    // 0xd47c0
	int32_t result = a1; // 0xd4764
	// branch -> 0xd4764
	int32_t v6; // 0xd47e4
	while (true) {
		// 0xd4764
		if (result < *(int32_t *)v2) {
			// 0xd4884
			return result;
		}
		int32_t *v7 = (int32_t *)v3; // 0xd4774
		*v7 = *v7 ^ 1;
		int32_t v8 = 32 - v4; // 0xd47b4
		g38 = v8;
		int32_t v9;
		if (*(int32_t *)v3 == 0) {
			// 0xd47b4
			function_d9ee4((char *)&a1, v5);
			v9 = a2 + __asm_rlwinm(v8, 0, 30, 30);
			// branch -> 0xd47d8
		} else {
			// 0xd478c
			function_da004((char *)&a1, v5);
			v9 = a2 + __asm_rlwinm(v8, 0, 30, 30);
			// branch -> 0xd47d8
		}
		// 0xd47d8
		a2 = v9;
		int32_t v10 = v4;      // 0xd47dc
		int32_t v11 = v10 - 2; // 0xd47e0
		v4 = v11;
		v6 = a1 - (800 - v10);
		a1 = v6;
		if (v11 <= 0xffffffff) {
			// break -> 0xd47f0
			break;
		}
		result = v6;
		// continue -> 0xd4764
	}
	// 0xd47f0
	v4 = 2;
	int32_t result2 = v6; // 0xd47f4
	// branch -> 0xd47f4
	int32_t result3; // 0xd486c
	while (true) {
		// 0xd47f4
		if (result2 < *(int32_t *)v2) {
			// 0xd4884
			return result2;
		}
		int32_t *v12 = (int32_t *)v3; // 0xd4804
		*v12 = *v12 ^ 1;
		int32_t v13 = 32 - v4; // 0xd4844
		g38 = v13;
		int32_t v14;
		if (*(int32_t *)v3 == 0) {
			// 0xd4844
			function_d9ee4((char *)&a1, v5);
			v14 = a2 + __asm_rlwinm(v13, 0, 30, 30);
			// branch -> 0xd4868
		} else {
			// 0xd481c
			function_da004((char *)&a1, v5);
			v14 = a2 + __asm_rlwinm(v13, 0, 30, 30);
			// branch -> 0xd4868
		}
		// 0xd4868
		a2 = v14;
		int32_t v15 = v4; // 0xd486c
		result3 = 800 - v15;
		int32_t v16 = v15 + 2; // 0xd4870
		v4 = v16;
		int32_t v17 = a1 - result3; // 0xd4874
		a1 = v17;
		if (v16 >= 31) {
			// break -> 0xd4884
			break;
		}
		result2 = v17;
		// continue -> 0xd47f4
	}
	// 0xd4884
	return result3;
}

// Address range: 0xd48a4 - 0xd49c0
int32_t function_d48a4(int32_t a1)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd48b4
	int32_t v4 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t result = a1; // 0xd48d4
	// branch -> 0xd48d4
	int32_t v5; // 0xd492c
	while (true) {
		// 0xd48d4
		if (result < *(int32_t *)v2) {
			// 0xd49a4
			return result;
		}
		int32_t *v6 = (int32_t *)v3; // 0xd48e4
		*v6 = *v6 ^ 1;
		int32_t v7 = 32 - v4; // 0xd4914
		if (*(int32_t *)v3 == 0) {
			// 0xd4910
			function_da178((char *)&a1, v7, 0);
			// branch -> 0xd4920
		} else {
			// 0xd48fc
			function_da238((char *)&a1, v7, 0);
			// branch -> 0xd4920
		}
		int32_t v8 = v4;     // 0xd4924
		int32_t v9 = v8 - 2; // 0xd4928
		v4 = v9;
		v5 = a1 - (800 - v8);
		a1 = v5;
		if (v9 <= 0xffffffff) {
			// break -> 0xd4938
			break;
		}
		result = v5;
		// continue -> 0xd48d4
	}
	// 0xd4938
	v4 = 2;
	int32_t result2 = v5; // 0xd493c
	// branch -> 0xd493c
	int32_t result3; // 0xd498c
	while (true) {
		// 0xd493c
		if (result2 < *(int32_t *)v2) {
			// 0xd49a4
			return result2;
		}
		int32_t *v10 = (int32_t *)v3; // 0xd494c
		*v10 = *v10 ^ 1;
		int32_t v11 = 32 - v4; // 0xd497c
		if (*(int32_t *)v3 == 0) {
			// 0xd4978
			function_da178((char *)&a1, v11, 0);
			// branch -> 0xd4988
		} else {
			// 0xd4964
			function_da238((char *)&a1, v11, 0);
			// branch -> 0xd4988
		}
		int32_t v12 = v4; // 0xd498c
		result3 = 800 - v12;
		int32_t v13 = v12 + 2; // 0xd4990
		v4 = v13;
		int32_t v14 = a1 - result3; // 0xd4994
		a1 = v14;
		if (v13 >= 31) {
			// break -> 0xd49a4
			break;
		}
		result2 = v14;
		// continue -> 0xd493c
	}
	// 0xd49a4
	return result3;
}

// Address range: 0xd49c0 - 0xd4b6c
int32_t function_d49c0(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6e7c); // 0xd49c8
	int32_t v2 = &a2;                        // 0xd49f4
	*(int32_t *)v1 = 0;
	int32_t v3;       // bp-24
	int32_t v4 = &v3; // 0xd49fc
	v3 = 30;
	int32_t v5;  // 0xd4b08
	int32_t *v6; // 0xd4ac8
	int32_t v7;
	int32_t result; // 0xd4ab8
	if (function_d0424(&a1, v2, v4, 1) != 0) {
		int32_t v8 = v3;
		int32_t v9 = v8; // r6
		if (v8 > -1) {
			// 0xd4a14
			// branch -> 0xd4a14
			while (true) {
				int32_t *v10 = (int32_t *)v1; // 0xd4a14
				*v10 = *v10 ^ 1;
				g39 = 32 - v9;
				int32_t v11;
				if (*(int32_t *)v1 == 0) {
					// 0xd4a54
					function_da6a4((char *)&a1, v2, a3);
					int32_t v12 = a2; // 0xd4a68
					v11 = __asm_rlwinm(v12, 0, 30, 30) + v12;
					// branch -> 0xd4a78
				} else {
					// 0xd4a2c
					function_da538((char *)&a1, v2, a3);
					v11 = __asm_rlwinm(a2, 0, 30, 30) + a2;
					// branch -> 0xd4a78
				}
				// 0xd4a78
				a2 = v11;
				int32_t v13 = v3;      // 0xd4a78
				int32_t v14 = v13 - 2; // 0xd4a84
				v3 = v14;
				a1 -= (800 - v13);
				v9 = v14;
				if (v14 <= 0xffffffff) {
					// break -> 0xd4aa0
					break;
				}
				// continue -> 0xd4a14
			}
			// 0xd4aa0
			v3 = 2;
			result = function_d035c(&a1, v2, v4, 1);
			if (result == 0) {
				// 0xd4b54
				return 0;
			}
			// 0xd4b48
			v7 = v3;
			v9 = v7;
			if (v7 >= 31) {
				// 0xd4b54
				return result;
			}
			// 0xd4ac8
			// branch -> 0xd4ac8
			int32_t result2; // 0xd4b3c
			while (true) {
				// 0xd4ac8
				v6 = (int32_t *)v1;
				*v6 = *v6 ^ 1;
				v5 = a3;
				g39 = 32 - v9;
				int32_t v15;
				if (*(int32_t *)v1 == 0) {
				lab_0xd4b08:
					// 0xd4b08
					function_da6a4((char *)&a1, v2, v5);
					int32_t v16 = a2; // 0xd4b1c
					v15 = __asm_rlwinm(v16, 0, 30, 30) + v16;
					// branch -> 0xd4b2c
				} else {
				lab_0xd4ae0:
					// 0xd4ae0
					function_da538((char *)&a1, v2, v5);
					int32_t v17 = a2; // 0xd4af4
					v15 = __asm_rlwinm(v17, 0, 30, 30) + v17;
					// branch -> 0xd4b2c
				}
				// 0xd4b2c
				a2 = v15;
				int32_t v18 = v3;      // 0xd4b2c
				int32_t v19 = v18 + 2; // 0xd4b38
				result2 = a1 - (800 - v18);
				v3 = v19;
				a1 = result2;
				v9 = v19;
				if (v19 >= 31) {
					// break -> 0xd4b54
					break;
				}
				// continue -> 0xd4ac8
			}
			// 0xd4b54
			return result2;
		}
	}
	// 0xd4aa0
	v3 = 2;
	result = function_d035c(&a1, v2, v4, 1);
	if (result == 0) {
		// 0xd4b54
		return 0;
	}
	// 0xd4b48
	v7 = v3;
	if (v7 < 31) {
		// 0xd4ac8
		// branch -> 0xd4ac8
		while (true) {
			// 0xd4ac8
			v6 = (int32_t *)v1;
			*v6 = *v6 ^ 1;
			v5 = a3;
			g39 = 32 - v7;
			if (*(int32_t *)v1 == 0) {
				goto lab_0xd4b08;
			}
			goto lab_0xd4ae0;
		}
	}
	// 0xd4b54
	return result;
}

// Address range: 0xd4b6c - 0xd4d1c
int32_t function_d4b6c(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6e7c); // 0xd4b74
	int32_t v2 = &a2;                        // 0xd4b98
	*(int32_t *)v1 = 0;
	int32_t v3;       // bp-24
	int32_t v4 = &v3; // 0xd4ba0
	v3 = 30;
	int32_t *v5; // 0xd4c74
	int32_t v6;
	int32_t result; // 0xd4c64
	if (function_d0424(&a1, v2, v4, 1) != 0) {
		int32_t v7 = v3;
		int32_t v8 = v7; // r5
		if (v7 > -1) {
			// 0xd4bb8
			// branch -> 0xd4bb8
			while (true) {
				int32_t *v9 = (int32_t *)v1; // 0xd4bb8
				*v9 = *v9 ^ 1;
				g38 = 32 - v8;
				int32_t v10;
				if (*(int32_t *)v1 == 0) {
					// 0xd4bfc
					function_d9ee4((char *)&a1, v2);
					v10 = a2 + __asm_rlwinm(32 - v3, 0, 30, 30);
					// branch -> 0xd4c24
				} else {
					// 0xd4bd0
					function_da004((char *)&a1, v2);
					v10 = a2 + __asm_rlwinm(32 - v3, 0, 30, 30);
					// branch -> 0xd4c24
				}
				// 0xd4c24
				a2 = v10;
				int32_t v11 = v3;      // 0xd4c24
				int32_t v12 = v11 - 2; // 0xd4c30
				v3 = v12;
				a1 -= (800 - v11);
				v8 = v12;
				if (v12 <= 0xffffffff) {
					// break -> 0xd4c4c
					break;
				}
				// continue -> 0xd4bb8
			}
			// 0xd4c4c
			v3 = 2;
			result = function_d035c(&a1, v2, v4, 1);
			if (result == 0) {
				// 0xd4d08
				return 0;
			}
			// 0xd4cfc
			v6 = v3;
			v8 = v6;
			if (v6 >= 31) {
				// 0xd4d08
				return result;
			}
			// 0xd4c74
			// branch -> 0xd4c74
			int32_t result2; // 0xd4cf0
			while (true) {
				// 0xd4c74
				v5 = (int32_t *)v1;
				*v5 = *v5 ^ 1;
				g38 = 32 - v8;
				int32_t v13;
				if (*(int32_t *)v1 == 0) {
				lab_0xd4cb8:
					// 0xd4cb8
					function_d9ee4((char *)&a1, v2);
					v13 = a2 + __asm_rlwinm(32 - v3, 0, 30, 30);
					// branch -> 0xd4ce0
				} else {
				lab_0xd4c8c:
					// 0xd4c8c
					function_da004((char *)&a1, v2);
					v13 = a2 + __asm_rlwinm(32 - v3, 0, 30, 30);
					// branch -> 0xd4ce0
				}
				// 0xd4ce0
				a2 = v13;
				int32_t v14 = v3;      // 0xd4ce0
				int32_t v15 = v14 + 2; // 0xd4cec
				result2 = a1 - (800 - v14);
				v3 = v15;
				a1 = result2;
				v8 = v15;
				if (v15 >= 31) {
					// break -> 0xd4d08
					break;
				}
				// continue -> 0xd4c74
			}
			// 0xd4d08
			return result2;
		}
	}
	// 0xd4c4c
	v3 = 2;
	result = function_d035c(&a1, v2, v4, 1);
	if (result == 0) {
		// 0xd4d08
		return 0;
	}
	// 0xd4cfc
	v6 = v3;
	if (v6 < 31) {
		// 0xd4c74
		// branch -> 0xd4c74
		while (true) {
			// 0xd4c74
			v5 = (int32_t *)v1;
			*v5 = *v5 ^ 1;
			g38 = 32 - v6;
			if (*(int32_t *)v1 == 0) {
				goto lab_0xd4cb8;
			}
			goto lab_0xd4c8c;
		}
	}
	// 0xd4d08
	return result;
}

// Address range: 0xd4d1c - 0xd4e58
int32_t function_d4d1c(int32_t a1)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd4d2c
	int32_t v4 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t v5 = a1; // 0xd4d60
	// branch -> 0xd4d4c
	int32_t v6; // 0xd4db4
	while (true) {
		// 0xd4d4c
		if (v5 < *(int32_t *)v2) {
			int32_t *v7 = (int32_t *)v3; // 0xd4d6c
			*v7 = *v7 ^ 1;
			int32_t v8 = 32 - v4; // 0xd4d9c
			if (*(int32_t *)v3 == 0) {
				// 0xd4d98
				function_da178((char *)&a1, v8, 0);
				// branch -> 0xd4da8
			} else {
				// 0xd4d84
				function_da238((char *)&a1, v8, 0);
				// branch -> 0xd4da8
			}
		lab_0xd4da8:;
			int32_t v9 = v4;      // 0xd4dac
			int32_t v10 = v9 - 2; // 0xd4db0
			v4 = v10;
			v6 = a1 - (800 - v9);
			a1 = v6;
			if (v10 <= 0xffffffff) {
				// break -> 0xd4dc0
				break;
			}
			v5 = v6;
			// continue -> 0xd4d4c
			continue;
		} else {
			// 0xd4d5c
			a1 = 32 - v4 + v5;
			// branch -> 0xd4da8
			goto lab_0xd4da8;
		}
	}
	// 0xd4dc0
	v4 = 2;
	int32_t v11 = 2;  // 0xd4dd4
	int32_t v12 = v6; // 0xd4dd8
	// branch -> 0xd4dc4
	int32_t result; // 0xd4e24
	while (true) {
		// 0xd4dc4
		if (v12 < *(int32_t *)v2) {
			int32_t *v13 = (int32_t *)v3; // 0xd4de4
			*v13 = *v13 ^ 1;
			int32_t v14 = 32 - v4; // 0xd4e14
			if (*(int32_t *)v3 == 0) {
				// 0xd4e10
				function_da178((char *)&a1, v14, 0);
				// branch -> 0xd4e20
			} else {
				// 0xd4dfc
				function_da238((char *)&a1, v14, 0);
				// branch -> 0xd4e20
			}
		lab_0xd4e20:;
			int32_t v15 = v4; // 0xd4e24
			result = 800 - v15;
			int32_t v16 = v15 + 2; // 0xd4e28
			v4 = v16;
			int32_t v17 = a1 - result; // 0xd4e2c
			a1 = v17;
			if (v16 >= 31) {
				// break -> 0xd4e3c
				break;
			}
			v11 = v16;
			v12 = v17;
			// continue -> 0xd4dc4
			continue;
		} else {
			// 0xd4dd4
			a1 = v12 + 32 - v11;
			// branch -> 0xd4e20
			goto lab_0xd4e20;
		}
	}
	// 0xd4e3c
	return result;
}

// Address range: 0xd4e58 - 0xd4f40
int32_t function_d4e58(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd4e68
	int32_t v2 = 30;                  // r29
	int32_t v3 = result;              // bp+24
	int32_t v4 = &a2;                 // 0xd4e9c
	if (result < *(int32_t *)v1) {
		// 0xd4f24
		return result;
	}
	int32_t v5 = 30; // 0xd4ea0
	while (true) {
		// 0xd4e94
		g39 = 32 - v5;
		function_da338((char *)&v3, v4, a3);
		int32_t v6 = a2;     // 0xd4ea8
		int32_t v7 = v2;     // 0xd4eac
		int32_t v8 = v7 - 2; // 0xd4eb4
		v2 = v8;
		int32_t v9 = __asm_rlwinm(v6, 0, 30, 30) + v6; // 0xd4ebc
		int32_t result2 = v3 - (800 - v7);             // 0xd4ec0
		a2 = v9;
		v3 = result2;
		if (v8 == 0 || v8 > 0) {
			// 0xd4e94
			if (result2 >= *(int32_t *)v1) {
				// 0xd4e94
				v5 = v2;
				// branch -> 0xd4e94
				continue;
			}
			// 0xd4f24
			return result2;
		}
		// 0xd4ed0
		v2 = 2;
		int32_t v10 = 2; // 0xd4ef0
		// branch -> 0xd4ed4
		int32_t result3; // 0xd4f14
		while (true) {
			// 0xd4ed4
			if (result2 >= *(int32_t *)v1) {
				// 0xd4ee4
				g39 = 32 - v10;
				function_da338((char *)&v3, v4, a3);
				int32_t v11 = a2;      // 0xd4ef8
				int32_t v12 = v2;      // 0xd4efc
				int32_t v13 = v12 + 2; // 0xd4f04
				v2 = v13;
				int32_t v14 = __asm_rlwinm(v11, 0, 30, 30) + v11; // 0xd4f0c
				result3 = 800 - v12;
				int32_t v15 = v3 - result3; // 0xd4f14
				a2 = v14;
				v3 = v15;
				if (v13 >= 31) {
					// break -> 0xd4f24
					break;
				}
				v10 = v13;
				result2 = v15;
				// continue -> 0xd4ed4
				continue;
			}
			// 0xd4f24
			return result2;
		}
		// 0xd4f24
		return result3;
	}
}

// Address range: 0xd4f40 - 0xd5104
int32_t function_d4f40(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd4f40
	int32_t v2 = 30;                  // r11
	int32_t v3 = 0;                   // r3
	int32_t result = v3;
	if (result < *(int32_t *)v1) {
		// 0xd5100
		return result;
	}
	int32_t v4 = 30; // 0xd4f54131
	while (true) {
		int32_t v5 = 32 - v4;                                 // 0xd4f54
		int32_t v6 = v5;                                      // r10
		int32_t v7 = 0;                                       // 0xd4f60
		int32_t v8 = v7;                                      // r8
		int32_t v9 = v3;                                      // 0xd4f68
		int32_t v10 = v9;                                     // r9
		int32_t v11 = v6;                                     // 0xd4f6c
		int32_t v12 = v7 + __asm_rlwinm(v5, 0, 30, 30) + v11; // r4
		int32_t v13 = v11 / 4;                                // 0xd4f74
		int32_t v14 = v13;                                    // r5
		int32_t v15 = v11;                                    // 0xd5000
		if (v5 >= 4) {
			int32_t v16 = __asm_rlwinm_(v13, 29, 3, 31); // 0xd4f7c
			int32_t v17 = v16;                           // ctr
			int32_t v18 = v14;                           // 0xd4f84
			int32_t v19 = v10;
			int32_t v20; // 0xd4fe4
			if (v16 == 0) {
				v20 = v18;
			lab_0xd4fe4:;
				int32_t v21 = v8; // 0xd4fe8
				v8 = v21 + 4;
				*(int32_t *)v19 = *(int32_t *)v21;
				int32_t v22 = v10 + 4; // 0xd4ff4
				v10 = v22;
				int32_t v23 = v20 - 1; // 0xd4ff8
				// branch -> 0xd4fe8
				while (v23 != 0) {
					// 0xd4fe8
					v21 = v8;
					v8 = v21 + 4;
					*(int32_t *)v22 = *(int32_t *)v21;
					v22 = v10 + 4;
					v10 = v22;
					v23--;
					// continue -> 0xd4fe8
				}
			lab_0xd4ffc:
				// 0xd4ffc
				// branch -> 0xd5000
			lab_0xd5000:
				// 0xd5000
				if (__asm_rlwinm_(-4 * v18 + v6, 0, 30, 30) != 0) {
				lab_0xd5008:
					// 0xd5008
					*(int16_t *)v10 = *(int16_t *)v8;
					// branch -> 0xd5010
				}
			lab_0xd5010:;
				int32_t v24 = v2;      // 0xd5010
				int32_t v25 = v24 - 2; // 0xd5014
				v2 = v25;
				int32_t v26 = v11 + v9 - (800 - v24); // 0xd5018
				v3 = v26;
				int32_t result2;
				if (v25 > -1) {
					// 0xd5010
					if (v26 < *(int32_t *)v1) {
						// break -> 0xd5100
						break;
					}
					v4 = v25;
					// continue -> 0xd4f54
					continue;
				} else {
					// 0xd5020
					v2 = 2;
					int32_t v27 = 2; // 0xd5030
					// branch -> 0xd5024
					while (true) {
						// 0xd5024
						if (v26 >= *(int32_t *)v1) {
							int32_t v28 = 32 - v27; // 0xd5030
							v6 = v28;
							int32_t v29 = v12; // 0xd503c
							v8 = v29;
							int32_t v30 = v3; // 0xd5044
							v10 = v30;
							int32_t v31 = v6; // 0xd5048
							v12 = v29 + __asm_rlwinm(v28, 0, 30, 30) + v31;
							int32_t v32 = v31 / 4; // 0xd5050
							v14 = v32;
							int32_t v33 = v31; // 0xd50dc
							if (v28 >= 4) {
								int32_t v34 = __asm_rlwinm_(v32, 29, 3, 31); // 0xd5058
								v17 = v34;
								int32_t v35 = v14; // 0xd5060
								int32_t v36 = v10;
								int32_t v37; // 0xd50c0
								if (v34 == 0) {
									v37 = v35;
								lab_0xd50c0:;
									int32_t v38 = v8; // 0xd50c4
									v8 = v38 + 4;
									*(int32_t *)v36 = *(int32_t *)v38;
									int32_t v39 = v10 + 4; // 0xd50d0
									v10 = v39;
									int32_t v40 = v37 - 1; // 0xd50d4
									// branch -> 0xd50c4
									while (v40 != 0) {
										// 0xd50c4
										v38 = v8;
										v8 = v38 + 4;
										*(int32_t *)v39 = *(int32_t *)v38;
										v39 = v10 + 4;
										v10 = v39;
										v40--;
										// continue -> 0xd50c4
									}
								lab_0xd50d8:
									// 0xd50d8
									// branch -> 0xd50dc
								lab_0xd50dc:
									// 0xd50dc
									if (__asm_rlwinm_(-4 * v35 + v6, 0, 30, 30) != 0) {
									lab_0xd50e4:
										// 0xd50e4
										*(int16_t *)v10 = *(int16_t *)v8;
										// branch -> 0xd50ec
									}
								lab_0xd50ec:;
									int32_t v41 = v2;      // 0xd50ec
									int32_t v42 = v41 + 2; // 0xd50f0
									v2 = v42;
									int32_t v43 = v31 + v30 - (800 - v41); // 0xd50f8
									v3 = v43;
									if (v42 >= 31) {
										result2 = v43;
										// break -> 0xd5100
										break;
									}
									v27 = v42;
									v26 = v43;
									// continue -> 0xd5024
									continue;
								} else {
									*(int32_t *)v36 = *(int32_t *)v8;
									*(int32_t *)(v10 + 4) = *(int32_t *)(v8 + 4);
									*(int32_t *)(v10 + 8) = *(int32_t *)(v8 + 8);
									*(int32_t *)(v10 + 12) = *(int32_t *)(v8 + 12);
									*(int32_t *)(v10 + 16) = *(int32_t *)(v8 + 16);
									*(int32_t *)(v10 + 20) = *(int32_t *)(v8 + 20);
									*(int32_t *)(v10 + 24) = *(int32_t *)(v8 + 24);
									int32_t v44 = v8; // 0xd50a4
									v8 = v44 + 32;
									*(int32_t *)(v10 + 28) = *(int32_t *)(v44 + 28);
									int32_t v45 = v10 + 32; // 0xd50b0
									v10 = v45;
									int32_t v46 = v17 - 1; // 0xd50b4
									while (v46 != 0) {
										// 0xd506c
										*(int32_t *)v45 = *(int32_t *)v8;
										*(int32_t *)(v10 + 4) = *(int32_t *)(v8 + 4);
										*(int32_t *)(v10 + 8) = *(int32_t *)(v8 + 8);
										*(int32_t *)(v10 + 12) = *(int32_t *)(v8 + 12);
										*(int32_t *)(v10 + 16) = *(int32_t *)(v8 + 16);
										*(int32_t *)(v10 + 20) = *(int32_t *)(v8 + 20);
										*(int32_t *)(v10 + 24) = *(int32_t *)(v8 + 24);
										v44 = v8;
										v8 = v44 + 32;
										*(int32_t *)(v10 + 28) = *(int32_t *)(v44 + 28);
										v45 = v10 + 32;
										v10 = v45;
										v46--;
										// continue -> 0xd506c
									}
									int32_t v47 = v14 % 8; // 0xd50b8
									if (v47 == 0) {
										goto lab_0xd50d8;
									}
									v36 = v45;
									v37 = v47;
									goto lab_0xd50c0;
								}
								int32_t v48 = v6;        // 0xd50d8
								int32_t v49;             // r0
								int32_t v50 = v49;       // 0xd50d8
								int32_t v51 = v50 + v48; // 0xd50d8
								v6 = v51;
								v33 = v51;
								// branch -> 0xd50dc
								goto lab_0xd50dc;
							}
							// 0xd50dc
							if (__asm_rlwinm_(v33, 0, 30, 30) == 0) {
								goto lab_0xd50ec;
							}
							goto lab_0xd50e4;
						} else {
							result2 = v26;
						}
					}
				}
				// 0xd5100
				return result2;
			}
			*(int32_t *)v19 = *(int32_t *)v8;
			*(int32_t *)(v10 + 4) = *(int32_t *)(v8 + 4);
			*(int32_t *)(v10 + 8) = *(int32_t *)(v8 + 8);
			*(int32_t *)(v10 + 12) = *(int32_t *)(v8 + 12);
			*(int32_t *)(v10 + 16) = *(int32_t *)(v8 + 16);
			*(int32_t *)(v10 + 20) = *(int32_t *)(v8 + 20);
			*(int32_t *)(v10 + 24) = *(int32_t *)(v8 + 24);
			int32_t v52 = v8; // 0xd4fc8
			v8 = v52 + 32;
			*(int32_t *)(v10 + 28) = *(int32_t *)(v52 + 28);
			int32_t v53 = v10 + 32; // 0xd4fd4
			v10 = v53;
			int32_t v54 = v17 - 1; // 0xd4fd8
			while (v54 != 0) {
				// 0xd4f90
				*(int32_t *)v53 = *(int32_t *)v8;
				*(int32_t *)(v10 + 4) = *(int32_t *)(v8 + 4);
				*(int32_t *)(v10 + 8) = *(int32_t *)(v8 + 8);
				*(int32_t *)(v10 + 12) = *(int32_t *)(v8 + 12);
				*(int32_t *)(v10 + 16) = *(int32_t *)(v8 + 16);
				*(int32_t *)(v10 + 20) = *(int32_t *)(v8 + 20);
				*(int32_t *)(v10 + 24) = *(int32_t *)(v8 + 24);
				v52 = v8;
				v8 = v52 + 32;
				*(int32_t *)(v10 + 28) = *(int32_t *)(v52 + 28);
				v53 = v10 + 32;
				v10 = v53;
				v54--;
				// continue -> 0xd4f90
			}
			int32_t v55 = v14 % 8; // 0xd4fdc
			if (v55 == 0) {
				goto lab_0xd4ffc;
			}
			v19 = v53;
			v20 = v55;
			goto lab_0xd4fe4;
		}
		// 0xd5000
		if (__asm_rlwinm_(v15, 0, 30, 30) == 0) {
			goto lab_0xd5010;
		}
		goto lab_0xd5008;
	}
}

// Address range: 0xd5104 - 0xd5280
int32_t function_d5104(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd5104
	int32_t v2 = 30;                  // r8
	int32_t result = 0;
	if (result < *(int32_t *)v1) {
		// 0xd527c
		return result;
	}
	int32_t v3 = 30; // 0xd5118131
	while (true) {
		int32_t v4 = 32 - v3;     // 0xd5118
		int32_t v5 = v4;          // r4
		int32_t v6 = result;      // r7
		int32_t v7 = v4 + result; // r3
		int32_t v8 = v4;          // 0xd513c
		if (v4 % 2 != 0) {
			// 0xd512c
			v5 = v4 - 1;
			*(char *)result = 0;
			v6++;
			v8 = v5;
			// branch -> 0xd513c
		}
		// 0xd513c
		if (__asm_rlwinm_(v8, 0, 30, 30) != 0) {
			// 0xd5144
			v5 -= 2;
			*(int16_t *)v6 = 0;
			v6 += 2;
			// branch -> 0xd5154
		}
		uint32_t v9 = v5;     // 0xd5154
		int32_t v10 = v9 / 4; // 0xd5158
		v5 = v10;
		int32_t v11 = 0; // r5
		int32_t v12;     // 0xd51b0
		int32_t v13;     // 0xd51d0
		int32_t v14;     // 0xd51b4
		int32_t v15;     // 0xd51b8
		int32_t result3; // 0xd51cc
		if (v9 >= 4) {
			int32_t v16 = __asm_rlwinm_(v10, 29, 3, 31); // 0xd5164
			int32_t v17 = v16;                           // ctr
			int32_t v18;                                 // 0xd51a0
			int32_t v19;
			if (v16 == 0) {
				// 0xd5164
				v19 = v6;
				v18 = v5;
				// branch -> 0xd51a0
			lab_0xd51a0:
				// 0xd51a0
				*(int32_t *)v19 = v11;
				int32_t v20 = v6 + 4;  // 0xd51a8
				int32_t v21 = v18 - 1; // 0xd51ac
				// branch -> 0xd51a4
				while (v21 != 0) {
					// 0xd51a4
					*(int32_t *)v20 = v11;
					v20 += 4;
					v21--;
					// continue -> 0xd51a4
				}
			lab_0xd51b0:
				// 0xd51b0
				v12 = v2;
				v14 = v12 - 2;
				v2 = v14;
				v15 = v7 + v12 - 800;
				if (v14 > -1) {
				lab_0xd51b0_3:
					// 0xd51b0
					if (v15 < *(int32_t *)v1) {
						// break -> 0xd527c
						break;
					}
					result = v15;
					v3 = v14;
					// continue -> 0xd5118
					continue;
				}
				// 0xd51c0
				v2 = 2;
				v13 = 2;
				result3 = v15;
				// branch -> 0xd51c4
				int32_t result2;
				while (true) {
					// 0xd51c4
					if (result3 >= *(int32_t *)v1) {
					lab_0xd51d0_2:;
						int32_t v22 = 32 - v13; // 0xd51d0
						v5 = v22;
						v6 = result3;
						v7 = v22 + result3;
						int32_t v23 = v22; // 0xd51f4
						if (v22 % 2 != 0) {
							// 0xd51e4
							v5 = v22 - 1;
							*(char *)result3 = 0;
							v6++;
							v23 = v5;
							// branch -> 0xd51f4
						}
						// 0xd51f4
						if (__asm_rlwinm_(v23, 0, 30, 30) != 0) {
							// 0xd51fc
							v5 -= 2;
							*(int16_t *)v6 = 0;
							v6 += 2;
							// branch -> 0xd520c
						}
						uint32_t v24 = v5;     // 0xd520c
						int32_t v25 = v24 / 4; // 0xd5210
						v5 = v25;
						v11 = 0;
						int32_t v26; // 0xd5268
						int32_t v27; // 0xd526c
						int32_t v28; // 0xd5274
						if (v24 >= 4) {
							int32_t v29 = __asm_rlwinm_(v25, 29, 3, 31); // 0xd521c
							v17 = v29;
							int32_t v30; // 0xd5258
							int32_t v31;
							if (v29 == 0) {
								// 0xd521c
								v31 = v6;
								v30 = v5;
								// branch -> 0xd5258
							lab_0xd5258:
								// 0xd5258
								*(int32_t *)v31 = v11;
								int32_t v32 = v6 + 4;  // 0xd5260
								int32_t v33 = v30 - 1; // 0xd5264
								// branch -> 0xd525c
								while (v33 != 0) {
									// 0xd525c
									*(int32_t *)v32 = v11;
									v32 += 4;
									v33--;
									// continue -> 0xd525c
								}
							lab_0xd5268:
								// 0xd5268
								v26 = v2;
								v27 = v26 + 2;
								v2 = v27;
								v28 = v7 + v26 - 800;
								if (v27 >= 31) {
									result2 = v28;
									// break -> 0xd527c
									break;
								}
								v13 = v27;
								result3 = v28;
								// continue -> 0xd51c4
								continue;
							} else {
								// 0xd5228
								*(int32_t *)v6 = v11;
								*(int32_t *)(v6 + 4) = v11;
								*(int32_t *)(v6 + 8) = v11;
								*(int32_t *)(v6 + 12) = v11;
								*(int32_t *)(v6 + 16) = v11;
								*(int32_t *)(v6 + 20) = v11;
								*(int32_t *)(v6 + 24) = v11;
								*(int32_t *)(v6 + 28) = v11;
								int32_t v34 = v6 + 32; // 0xd5248
								v6 = v34;
								int32_t v35 = v17 - 1; // 0xd524c
								// branch -> 0xd5228
								while (v35 != 0) {
									// 0xd5228
									*(int32_t *)v34 = v11;
									*(int32_t *)(v6 + 4) = v11;
									*(int32_t *)(v6 + 8) = v11;
									*(int32_t *)(v6 + 12) = v11;
									*(int32_t *)(v6 + 16) = v11;
									*(int32_t *)(v6 + 20) = v11;
									*(int32_t *)(v6 + 24) = v11;
									*(int32_t *)(v6 + 28) = v11;
									v34 = v6 + 32;
									v6 = v34;
									v35--;
									// continue -> 0xd5228
								}
								int32_t v36 = v5 % 8; // 0xd5250
								if (v36 == 0) {
									goto lab_0xd5268;
								}
								v31 = v34;
								v30 = v36;
								goto lab_0xd5258;
							}
							// 0xd5268
							v26 = v2;
							v27 = v26 + 2;
							v2 = v27;
							int32_t v37 = v7; // 0xd5274
							v28 = v37 + v26 - 800;
							v7 = v28;
							if (v27 >= 31) {
								result2 = v28;
								// break -> 0xd527c
								break;
							}
							v13 = v27;
							result3 = v28;
							// continue -> 0xd51c4
							continue;
						}
						// 0xd5268
						v26 = v2;
						v27 = v26 + 2;
						v2 = v27;
						v28 = v7 + v26 - 800;
						if (v27 >= 31) {
							result2 = v28;
							// break -> 0xd527c
							break;
						}
						v13 = v27;
						result3 = v28;
						// continue -> 0xd51c4
						continue;
					} else {
						result2 = result3;
					}
				}
				// 0xd527c
				return result2;
			}
			// 0xd5170
			*(int32_t *)v6 = v11;
			*(int32_t *)(v6 + 4) = v11;
			*(int32_t *)(v6 + 8) = v11;
			*(int32_t *)(v6 + 12) = v11;
			*(int32_t *)(v6 + 16) = v11;
			*(int32_t *)(v6 + 20) = v11;
			*(int32_t *)(v6 + 24) = v11;
			*(int32_t *)(v6 + 28) = v11;
			int32_t v38 = v6 + 32; // 0xd5190
			v6 = v38;
			int32_t v39 = v17 - 1; // 0xd5194
			// branch -> 0xd5170
			while (v39 != 0) {
				// 0xd5170
				*(int32_t *)v38 = v11;
				*(int32_t *)(v6 + 4) = v11;
				*(int32_t *)(v6 + 8) = v11;
				*(int32_t *)(v6 + 12) = v11;
				*(int32_t *)(v6 + 16) = v11;
				*(int32_t *)(v6 + 20) = v11;
				*(int32_t *)(v6 + 24) = v11;
				*(int32_t *)(v6 + 28) = v11;
				v38 = v6 + 32;
				v6 = v38;
				v39--;
				// continue -> 0xd5170
			}
			int32_t v40 = v5 % 8; // 0xd5198
			if (v40 == 0) {
				goto lab_0xd51b0;
			}
			v19 = v38;
			v18 = v40;
			goto lab_0xd51a0;
		}
		// 0xd51b0
		v12 = v2;
		v14 = v12 - 2;
		v2 = v14;
		v15 = v7 + v12 - 800;
		if (v14 > -1) {
			goto lab_0xd51b0_3;
		}
		// 0xd51c0
		v2 = 2;
		v13 = 2;
		result3 = v15;
		// branch -> 0xd51c4
		while (true) {
			// 0xd51c4
			if (result3 >= *(int32_t *)v1) {
				goto lab_0xd51d0_2;
			}
			// 0xd527c
			return result3;
		}
	}
}

// Address range: 0xd5280 - 0xd5388
int32_t function_d5280(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1;       // bp-24
	int32_t v2 = &v1; // 0xd52a4
	int32_t v3 = &a2; // 0xd52ac
	v1 = 30;
	int32_t v4;      // 0xd5358
	int32_t result2; // 0xd535c
	int32_t v5;      // 0xd534c
	int32_t v6;
	int32_t result; // 0xd5328
	if (function_d0424(&a1, v3, v2, 0) != 0) {
		int32_t v7 = v1;
		if (v7 > -1) {
			g39 = 32 - v7;
			function_da338((char *)&a1, v3, a3);
			int32_t v8 = v1;      // 0xd52d8
			int32_t v9 = a2;      // 0xd52dc
			int32_t v10 = v8 - 2; // 0xd52ec
			a2 = __asm_rlwinm(v9, 0, 30, 30) + v9;
			a1 -= (800 - v8);
			v1 = v10;
			// branch -> 0xd52c4
			while (v10 > 0xffffffff) {
				// 0xd52c4
				g39 = 32 - v10;
				function_da338((char *)&a1, v3, a3);
				v8 = v1;
				v9 = a2;
				v10 = v8 - 2;
				a2 = __asm_rlwinm(v9, 0, 30, 30) + v9;
				a1 -= (800 - v8);
				v1 = v10;
				// continue -> 0xd52c4
			}
			// 0xd5310
			v1 = 2;
			result = function_d035c(&a1, v3, v2, 0);
			if (result == 0) {
				// 0xd5374
				return 0;
			}
			// 0xd5368
			v6 = v1;
			if (v6 >= 31) {
				// 0xd5374
				return result;
			}
			// 0xd5338
			g39 = 32 - v6;
			function_da338((char *)&a1, v3, a3);
			v5 = v1;
			v4 = v5 + 2;
			result2 = a1 - (800 - v5);
			v1 = v4;
			a1 = result2;
			// branch -> 0xd5338
			while (v4 < 31) {
				// 0xd5338
				g39 = 32 - v4;
				function_da338((char *)&a1, v3, a3);
				v5 = v1;
				v4 = v5 + 2;
				result2 = a1 - (800 - v5);
				v1 = v4;
				a1 = result2;
				// continue -> 0xd5338
			}
			// 0xd5374
			return result2;
		}
	}
	// 0xd5310
	v1 = 2;
	result = function_d035c(&a1, v3, v2, 0);
	if (result == 0) {
		// 0xd5374
		return 0;
	}
	// 0xd5368
	v6 = v1;
	if (v6 >= 31) {
		// 0xd5374
		return result;
	}
	// 0xd5338
	g39 = 32 - v6;
	function_da338((char *)&a1, v3, a3);
	v5 = v1;
	v4 = v5 + 2;
	result2 = a1 - (800 - v5);
	v1 = v4;
	a1 = result2;
	// branch -> 0xd5338
	while (v4 < 31) {
		// 0xd5338
		g39 = 32 - v4;
		function_da338((char *)&a1, v3, a3);
		v5 = v1;
		v4 = v5 + 2;
		result2 = a1 - (800 - v5);
		v1 = v4;
		a1 = result2;
		// continue -> 0xd5338
	}
	// 0xd5374
	return result2;
}

// Address range: 0xd5388 - 0xd55d4
int32_t function_d5388(int16_t *a1, int32_t a2)
{
	int16_t *v1 = (int16_t *)(int32_t)a1; // bp+24
	int32_t v2;                           // bp-8
	int32_t v3 = &v2;                     // 0xd53a4
	int16_t *v4 = (int16_t *)a2;          // bp+28
	int32_t v5 = (int32_t)&v4;            // 0xd53ac
	v2 = 30;
	int32_t v6;  // ctr
	int32_t v7;  // r3
	int32_t v8;  // r5
	int32_t v9;  // r6
	int32_t v10; // r7
	if (function_d0424((int32_t *)&v1, v5, v3, 0) != 0) {
		int32_t v11 = v2;
		if (v11 > -1) {
			while (true) {
				int32_t v12 = 32 - v11; // 0xd53c4
				v10 = v12;
				v8 = (int32_t)v4;
				int32_t v13 = (int32_t)v1; // 0xd53d0
				v9 = v13;
				uint32_t v14 = v10;                                    // 0xd53d8
				int32_t v15 = v8 + __asm_rlwinm(v12, 0, 30, 30) + v14; // 0xd53e0
				v1 = (int16_t *)(v14 + v13);
				int32_t v16 = v14 / 4; // 0xd53e8
				v7 = v16;
				v4 = (int16_t *)v15;
				int32_t v17 = v14; // 0xd5478
				if (v14 >= 4) {
					int32_t v18 = __asm_rlwinm_(v16, 29, 3, 31); // 0xd53f4
					v6 = v18;
					int32_t v19 = v7; // 0xd53fc
					int32_t v20 = v9;
					int32_t v21; // 0xd545c
					if (v18 == 0) {
						v21 = v19;
					lab_0xd545c:;
						int32_t v22 = v8; // 0xd5460
						v8 = v22 + 4;
						*(int32_t *)v20 = *(int32_t *)v22;
						int32_t v23 = v9 + 4; // 0xd546c
						v9 = v23;
						int32_t v24 = v21 - 1; // 0xd5470
						// branch -> 0xd5460
						while (v24 != 0) {
							// 0xd5460
							v22 = v8;
							v8 = v22 + 4;
							*(int32_t *)v23 = *(int32_t *)v22;
							v23 = v9 + 4;
							v9 = v23;
							v24--;
							// continue -> 0xd5460
						}
					lab_0xd5474:
						// 0xd5474
						// branch -> 0xd5478
					lab_0xd5478:
						// 0xd5478
						if (__asm_rlwinm_(-4 * v19 + v10, 0, 30, 30) != 0) {
						lab_0xd5480:
							// 0xd5480
							*(int16_t *)v9 = *(int16_t *)v8;
							// branch -> 0xd5488
						}
					lab_0xd5488:;
						int32_t v25 = v2;      // 0xd5488
						int32_t v26 = v25 - 2; // 0xd5494
						v2 = v26;
						v1 = (int16_t *)((int32_t)v1 - (800 - v25));
						if (v26 <= 0xffffffff) {
							// break -> 0xd54b0
							break;
						}
						v11 = v26;
						// continue -> 0xd53c4
						continue;
					} else {
						*(int32_t *)v20 = *(int32_t *)v8;
						*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
						*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
						*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
						*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
						*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
						*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
						int32_t v27 = v8; // 0xd5440
						v8 = v27 + 32;
						*(int32_t *)(v9 + 28) = *(int32_t *)(v27 + 28);
						int32_t v28 = v9 + 32; // 0xd544c
						v9 = v28;
						int32_t v29 = v6 - 1; // 0xd5450
						while (v29 != 0) {
							// 0xd5408
							*(int32_t *)v28 = *(int32_t *)v8;
							*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
							*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
							*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
							*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
							*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
							*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
							v27 = v8;
							v8 = v27 + 32;
							*(int32_t *)(v9 + 28) = *(int32_t *)(v27 + 28);
							v28 = v9 + 32;
							v9 = v28;
							v29--;
							// continue -> 0xd5408
						}
						int32_t v30 = v7 % 8; // 0xd5454
						if (v30 == 0) {
							goto lab_0xd5474;
						}
						v20 = v28;
						v21 = v30;
						goto lab_0xd545c;
					}
				}
				// 0xd5478
				if (__asm_rlwinm_(v17, 0, 30, 30) == 0) {
					goto lab_0xd5488;
				}
				goto lab_0xd5480;
			}
		}
	}
	// 0xd54b0
	v2 = 2;
	int32_t result = function_d035c((int32_t *)&v1, v5, v3, 0); // 0xd54c8
	if (result == 0) {
		// 0xd55c4
		return 0;
	}
	int32_t v31 = v2;
	if (v31 < 31) {
		while (true) {
			int32_t v32 = 32 - v31; // 0xd54d8
			v10 = v32;
			v8 = (int32_t)v4;
			int32_t v33 = (int32_t)v1; // 0xd54e4
			v9 = v33;
			uint32_t v34 = v10;                                    // 0xd54ec
			int32_t v35 = v8 + __asm_rlwinm(v32, 0, 30, 30) + v34; // 0xd54f4
			v1 = (int16_t *)(v34 + v33);
			int32_t v36 = v34 / 4; // 0xd54fc
			v7 = v36;
			v4 = (int16_t *)v35;
			int32_t v37 = v34; // 0xd558c
			if (v34 >= 4) {
				int32_t v38 = __asm_rlwinm_(v36, 29, 3, 31); // 0xd5508
				v6 = v38;
				int32_t v39 = v7; // 0xd5510
				int32_t v40 = v9;
				int32_t v41; // 0xd5570
				if (v38 == 0) {
					v41 = v39;
				lab_0xd5570:;
					int32_t v42 = v8; // 0xd5574
					v8 = v42 + 4;
					*(int32_t *)v40 = *(int32_t *)v42;
					int32_t v43 = v9 + 4; // 0xd5580
					v9 = v43;
					int32_t v44 = v41 - 1; // 0xd5584
					// branch -> 0xd5574
					while (v44 != 0) {
						// 0xd5574
						v42 = v8;
						v8 = v42 + 4;
						*(int32_t *)v43 = *(int32_t *)v42;
						v43 = v9 + 4;
						v9 = v43;
						v44--;
						// continue -> 0xd5574
					}
				lab_0xd5588:
					// 0xd5588
					// branch -> 0xd558c
				lab_0xd558c:
					// 0xd558c
					if (__asm_rlwinm_(-4 * v39 + v10, 0, 30, 30) != 0) {
					lab_0xd5594:
						// 0xd5594
						*(int16_t *)v9 = *(int16_t *)v8;
						// branch -> 0xd559c
					}
				lab_0xd559c:;
					int32_t v45 = v2;                        // 0xd559c
					int32_t v46 = v45 + 2;                   // 0xd55a8
					int32_t v47 = (int32_t)v1 - (800 - v45); // 0xd55ac
					v2 = v46;
					v1 = (int16_t *)v47;
					if (v46 >= 31) {
						result = v47;
						// break -> 0xd55c4
						break;
					}
					v31 = v46;
					// continue -> 0xd54d8
					continue;
				} else {
					*(int32_t *)v40 = *(int32_t *)v8;
					*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
					*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
					*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
					*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
					*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
					*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
					int32_t v48 = v8; // 0xd5554
					v8 = v48 + 32;
					*(int32_t *)(v9 + 28) = *(int32_t *)(v48 + 28);
					int32_t v49 = v9 + 32; // 0xd5560
					v9 = v49;
					int32_t v50 = v6 - 1; // 0xd5564
					while (v50 != 0) {
						// 0xd551c
						*(int32_t *)v49 = *(int32_t *)v8;
						*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
						*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
						*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
						*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
						*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
						*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
						v48 = v8;
						v8 = v48 + 32;
						*(int32_t *)(v9 + 28) = *(int32_t *)(v48 + 28);
						v49 = v9 + 32;
						v9 = v49;
						v50--;
						// continue -> 0xd551c
					}
					int32_t v51 = v7 % 8; // 0xd5568
					if (v51 == 0) {
						goto lab_0xd5588;
					}
					v40 = v49;
					v41 = v51;
					goto lab_0xd5570;
				}
			}
			// 0xd558c
			if (__asm_rlwinm_(v37, 0, 30, 30) == 0) {
				goto lab_0xd559c;
			}
			goto lab_0xd5594;
		}
	}
	// 0xd55c4
	return result;
}

// Address range: 0xd55d4 - 0xd5768
int32_t function_d55d4(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd55d4
	int32_t v2 = 30;                  // r8
	int32_t v3 = 30;                  // 0xd55f4
	int32_t v4 = 0;                   // 0xd5610
	// branch -> 0xd55dc
	while (true) {
		int32_t v5 = 32 - v3; // 0xd55f4
		int32_t v6;           // r3
		if (v4 < *(int32_t *)v1) {
			int32_t v7 = v5; // r4
			int32_t v8 = v4; // r7
			v6 = v5 + v4;
			int32_t v9 = v5; // 0xd5618
			if (v5 % 2 != 0) {
				// 0xd5608
				v7 = v5 - 1;
				*(char *)v4 = 0;
				v8++;
				v9 = v7;
				// branch -> 0xd5618
			}
			// 0xd5618
			if (__asm_rlwinm_(v9, 0, 30, 30) != 0) {
				// 0xd5620
				v7 -= 2;
				*(int16_t *)v8 = 0;
				v8 += 2;
				// branch -> 0xd5630
			}
			uint32_t v10 = v7;     // 0xd5630
			int32_t v11 = v10 / 4; // 0xd5634
			v7 = v11;
			int32_t v12 = 0; // r5
			int32_t v13;     // 0xd568c
			int32_t v14;     // 0xd5690
			int32_t v15;     // 0xd56b8
			int32_t v16;     // 0xd5694
			int32_t v17;     // 0xd56d4
			if (v10 >= 4) {
				int32_t v18 = __asm_rlwinm_(v11, 29, 3, 31); // 0xd5640
				int32_t v19 = v18;                           // ctr
				int32_t v20;                                 // 0xd567c
				int32_t v21;
				if (v18 == 0) {
					// 0xd5640
					v21 = v8;
					v20 = v7;
					// branch -> 0xd567c
				lab_0xd567c:
					// 0xd567c
					*(int32_t *)v21 = v12;
					int32_t v22 = v8 + 4;  // 0xd5684
					int32_t v23 = v20 - 1; // 0xd5688
					// branch -> 0xd5680
					while (v23 != 0) {
						// 0xd5680
						*(int32_t *)v22 = v12;
						v22 += 4;
						v23--;
						// continue -> 0xd5680
					}
				lab_0xd568c:
					// 0xd568c
					v13 = v2;
					v14 = v13 - 2;
					v2 = v14;
					v16 = v6 + v13 - 800;
					if (v14 <= -1) {
						// 0xd569c
						v2 = 2;
						int32_t v24 = 2; // 0xd56b8
						v17 = v16;
						// branch -> 0xd56a0
						int32_t result; // 0xd575c
						while (true) {
							// 0xd56a0
							v15 = 32 - v24;
							int32_t v25; // 0xd5750
							int32_t v26; // 0xd5754
							if (v17 < *(int32_t *)v1) {
							lab_0xd56b8_3:
								// 0xd56b8
								v7 = v15;
								v8 = v17;
								v6 = v15 + v17;
								int32_t v27 = v15; // 0xd56dc
								if (v15 % 2 != 0) {
									// 0xd56cc
									v7 = v15 - 1;
									*(char *)v17 = 0;
									v8++;
									v27 = v7;
									// branch -> 0xd56dc
								}
								// 0xd56dc
								if (__asm_rlwinm_(v27, 0, 30, 30) != 0) {
									// 0xd56e4
									v7 -= 2;
									*(int16_t *)v8 = 0;
									v8 += 2;
									// branch -> 0xd56f4
								}
								uint32_t v28 = v7;     // 0xd56f4
								int32_t v29 = v28 / 4; // 0xd56f8
								v7 = v29;
								v12 = 0;
								if (v28 >= 4) {
									int32_t v30 = __asm_rlwinm_(v29, 29, 3, 31); // 0xd5704
									v19 = v30;
									int32_t v31; // 0xd5740
									int32_t v32;
									if (v30 == 0) {
										// 0xd5704
										v32 = v8;
										v31 = v7;
										// branch -> 0xd5740
									lab_0xd5740:
										// 0xd5740
										*(int32_t *)v32 = v12;
										int32_t v33 = v8 + 4;  // 0xd5748
										int32_t v34 = v31 - 1; // 0xd574c
										// branch -> 0xd5744
										while (v34 != 0) {
											// 0xd5744
											*(int32_t *)v33 = v12;
											v33 += 4;
											v34--;
											// continue -> 0xd5744
										}
									lab_0xd5750:
										// 0xd5750
										v25 = v2;
										v26 = v25 + 2;
										v2 = v26;
										result = v6 + v25 - 800;
										if (v26 >= 31) {
											// break -> 0xd5764
											break;
										}
										v24 = v26;
										v17 = result;
										// continue -> 0xd56a0
										continue;
									} else {
										// 0xd5710
										*(int32_t *)v8 = v12;
										*(int32_t *)(v8 + 4) = v12;
										*(int32_t *)(v8 + 8) = v12;
										*(int32_t *)(v8 + 12) = v12;
										*(int32_t *)(v8 + 16) = v12;
										*(int32_t *)(v8 + 20) = v12;
										*(int32_t *)(v8 + 24) = v12;
										*(int32_t *)(v8 + 28) = v12;
										int32_t v35 = v8 + 32; // 0xd5730
										v8 = v35;
										int32_t v36 = v19 - 1; // 0xd5734
										// branch -> 0xd5710
										while (v36 != 0) {
											// 0xd5710
											*(int32_t *)v35 = v12;
											*(int32_t *)(v8 + 4) = v12;
											*(int32_t *)(v8 + 8) = v12;
											*(int32_t *)(v8 + 12) = v12;
											*(int32_t *)(v8 + 16) = v12;
											*(int32_t *)(v8 + 20) = v12;
											*(int32_t *)(v8 + 24) = v12;
											*(int32_t *)(v8 + 28) = v12;
											v35 = v8 + 32;
											v8 = v35;
											v36--;
											// continue -> 0xd5710
										}
										int32_t v37 = v7 % 8; // 0xd5738
										if (v37 == 0) {
											goto lab_0xd5750;
										}
										v32 = v35;
										v31 = v37;
										goto lab_0xd5740;
									}
								lab_0xd5750_2:
									// 0xd5750
									v25 = v2;
									v26 = v25 + 2;
									v2 = v26;
									result = v17 + v15 + v25 - 800;
									if (v26 >= 31) {
										// break -> 0xd5764
										break;
									}
									v24 = v26;
									v17 = result;
									// continue -> 0xd56a0
									continue;
								}
							} else {
							lab_0xd56ac_3:
								// 0xd56ac
								// branch -> 0xd5750
								goto lab_0xd5750_2;
							}
							// 0xd5750
							v25 = v2;
							v26 = v25 + 2;
							v2 = v26;
							result = v6 + v25 - 800;
							if (v26 >= 31) {
								// break -> 0xd5764
								break;
							}
							v24 = v26;
							v17 = result;
							// continue -> 0xd56a0
						}
						// 0xd5764
						return result;
					}
				lab_0xd568c_5:
					// 0xd568c
					v3 = v14;
					v4 = v16;
					// branch -> 0xd55dc
					continue;
				} else {
					// 0xd564c
					*(int32_t *)v8 = v12;
					*(int32_t *)(v8 + 4) = v12;
					*(int32_t *)(v8 + 8) = v12;
					*(int32_t *)(v8 + 12) = v12;
					*(int32_t *)(v8 + 16) = v12;
					*(int32_t *)(v8 + 20) = v12;
					*(int32_t *)(v8 + 24) = v12;
					*(int32_t *)(v8 + 28) = v12;
					int32_t v38 = v8 + 32; // 0xd566c
					v8 = v38;
					int32_t v39 = v19 - 1; // 0xd5670
					// branch -> 0xd564c
					while (v39 != 0) {
						// 0xd564c
						*(int32_t *)v38 = v12;
						*(int32_t *)(v8 + 4) = v12;
						*(int32_t *)(v8 + 8) = v12;
						*(int32_t *)(v8 + 12) = v12;
						*(int32_t *)(v8 + 16) = v12;
						*(int32_t *)(v8 + 20) = v12;
						*(int32_t *)(v8 + 24) = v12;
						*(int32_t *)(v8 + 28) = v12;
						v38 = v8 + 32;
						v8 = v38;
						v39--;
						// continue -> 0xd564c
					}
					int32_t v40 = v7 % 8; // 0xd5674
					if (v40 == 0) {
						goto lab_0xd568c;
					}
					v21 = v38;
					v20 = v40;
					goto lab_0xd567c;
				}
			}
		lab_0xd568c_4:
			// 0xd568c
			v13 = v2;
			v14 = v13 - 2;
			v2 = v14;
			v16 = v6 + v13 - 800;
			if (v14 > -1) {
				goto lab_0xd568c_5;
			}
			// 0xd569c
			v2 = 2;
			v17 = v16;
			// branch -> 0xd56a0
			while (true) {
				// 0xd56a0
				v15 = 30;
				if (v17 < *(int32_t *)v1) {
					goto lab_0xd56b8_3;
				}
				goto lab_0xd56ac_3;
			}
		} else {
			// 0xd55e8
			v6 = v4 + v5;
			// branch -> 0xd568c
			goto lab_0xd568c_4;
		}
	}
}

// Address range: 0xd5768 - 0xd5838
int32_t function_d5768(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd5770
	int32_t v2 = 30;                  // r30
	int32_t v3 = result;              // bp+24
	int32_t v4 = &a2;                 // 0xd57c8
	int32_t v5 = result;              // r4
	if (result < *(int32_t *)v1) {
		// 0xd581c
		return result;
	}
	int32_t v6 = 30; // 0xd57a4138
	while (true) {
		int32_t v7 = 32 - v6; // 0xd57a4
		g39 = v7;
		v3 = v2 + v5;
		a2 += __asm_rlwinm(v7, 0, 30, 30);
		function_da338((char *)&v3, v4, a3);
		int32_t result2 = v3; // 0xd57d0
		int32_t v8 = v2 - 2;  // 0xd57d4
		v2 = v8;
		int32_t result3 = result2 - 800; // 0xd57d8
		v3 = result3;
		if (v8 > -1) {
			// 0xd57a4
			v5 = result3;
			if (result3 >= *(int32_t *)v1) {
				// 0xd57a4
				v6 = v8;
				// branch -> 0xd57a4
				continue;
			}
			// 0xd581c
			return result2;
		}
		// 0xd57e4
		v2 = 16;
		// branch -> 0xd57e8
		int32_t result4; // 0xd5808
		while (true) {
			// 0xd57e8
			if (result3 >= *(int32_t *)v1) {
				// 0xd57f8
				function_d9754((char *)&v3, v4, a3);
				result4 = v3;
				int32_t v9 = v2 - 1; // 0xd580c
				v2 = v9;
				int32_t v10 = result4 - 800; // 0xd5810
				v3 = v10;
				if (v9 == 0) {
					// break -> 0xd581c
					break;
				}
				result3 = v10;
				// continue -> 0xd57e8
				continue;
			}
			// 0xd581c
			return result3;
		}
		// 0xd581c
		return result4;
	}
}

// Address range: 0xd5838 - 0xd5a84
int32_t function_d5838(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd5838
	int32_t v2 = 30;                  // r9
	int32_t result = 0;
	if (result < *(int32_t *)v1) {
		// bb
		return result;
	}
	int32_t v3 = 30; // 0xd5850181
	while (true) {
		int32_t v4 = 32 - v3;                      // 0xd584c
		int32_t v5 = __asm_rlwinm_(v4, 0, 30, 30); // 0xd5854
		int32_t v6 = 0;                            // 0xd5858
		int32_t v7 = v6;                           // r7
		int32_t v8 = result + v3;                  // 0xd585c
		int32_t v9 = v8;                           // r8
		int32_t v10 = v4 + v8;                     // r3
		int32_t v11 = v6 + v5 + v4;                // r4
		uint32_t v12 = v4;                         // 0xd5888
		if (v5 != 0) {
			// 0xd5870
			v7 = v6 + 4;
			*(int16_t *)v8 = *(int16_t *)(v6 + 2);
			v9 += 2;
			v12 = v4 - 2;
			// branch -> 0xd5884
		}
		int32_t v13 = v12 / 4; // 0xd5888
		int32_t v14 = v13;     // r5
		int32_t v15;           // ctr
		int32_t v16;           // 0xd5908
		int32_t v17;           // 0xd590c
		int32_t result2;       // 0xd5928
		if (v12 >= 4) {
			int32_t v18 = __asm_rlwinm_(v13, 29, 3, 31); // 0xd5890
			v15 = v18;
			int32_t v19; // 0xd58f0
			int32_t v20;
			if (v18 == 0) {
				// 0xd5890
				v20 = v9;
				v19 = v14;
				// branch -> 0xd58f0
			lab_0xd58f0:;
				int32_t v21 = v7; // 0xd58f4
				*(int32_t *)v20 = *(int32_t *)v21;
				int32_t v22 = v9 + 4;  // 0xd5900
				int32_t v23 = v19 - 1; // 0xd5904
				// branch -> 0xd58f4
				while (v23 != 0) {
					// 0xd58f4
					v21 += 4;
					*(int32_t *)v22 = *(int32_t *)v21;
					v22 += 4;
					v23--;
					// continue -> 0xd58f4
				}
			lab_0xd5908:
				// 0xd5908
				v16 = v2 - 2;
				v2 = v16;
				v17 = v10 - 800;
				v10 = v17;
				if (v16 <= -1) {
					// 0xd5914
					v15 = 4;
					v14 = 16;
					result2 = v17;
					// branch -> 0xd5920
					int32_t result6; // 0xd5a78
					while (true) {
						// 0xd5920
						if (result2 < *(int32_t *)v1) {
							// bb150
							return result2;
						}
					lab_0xd592c_2:
						// 0xd592c
						*(int32_t *)result2 = *(int32_t *)v11;
						*(int32_t *)(v10 + 4) = *(int32_t *)(v11 + 4);
						*(int32_t *)(v10 + 8) = *(int32_t *)(v11 + 8);
						*(int32_t *)(v10 + 12) = *(int32_t *)(v11 + 12);
						*(int32_t *)(v10 + 16) = *(int32_t *)(v11 + 16);
						*(int32_t *)(v10 + 20) = *(int32_t *)(v11 + 20);
						*(int32_t *)(v10 + 24) = *(int32_t *)(v11 + 24);
						int32_t v24 = v11; // 0xd5964
						v11 = v24 + 32;
						*(int32_t *)(v10 + 28) = *(int32_t *)(v24 + 28);
						int32_t result3 = v10 - 768; // 0xd5970
						v10 = result3;
						if (result3 < *(int32_t *)v1) {
							// bb151
							return result3;
						}
						// 0xd5980
						*(int32_t *)result3 = *(int32_t *)v11;
						*(int32_t *)(v10 + 4) = *(int32_t *)(v11 + 4);
						*(int32_t *)(v10 + 8) = *(int32_t *)(v11 + 8);
						*(int32_t *)(v10 + 12) = *(int32_t *)(v11 + 12);
						*(int32_t *)(v10 + 16) = *(int32_t *)(v11 + 16);
						*(int32_t *)(v10 + 20) = *(int32_t *)(v11 + 20);
						*(int32_t *)(v10 + 24) = *(int32_t *)(v11 + 24);
						int32_t v25 = v11; // 0xd59bc
						v11 = v25 + 32;
						*(int32_t *)(v10 + 28) = *(int32_t *)(v25 + 28);
						int32_t result4 = v10 - 768; // 0xd59c8
						v10 = result4;
						if (result4 < *(int32_t *)v1) {
							// bb152
							return result4;
						}
						// 0xd59d8
						*(int32_t *)result4 = *(int32_t *)v11;
						*(int32_t *)(v10 + 4) = *(int32_t *)(v11 + 4);
						*(int32_t *)(v10 + 8) = *(int32_t *)(v11 + 8);
						*(int32_t *)(v10 + 12) = *(int32_t *)(v11 + 12);
						*(int32_t *)(v10 + 16) = *(int32_t *)(v11 + 16);
						*(int32_t *)(v10 + 20) = *(int32_t *)(v11 + 20);
						*(int32_t *)(v10 + 24) = *(int32_t *)(v11 + 24);
						int32_t v26 = v11; // 0xd5a14
						v11 = v26 + 32;
						*(int32_t *)(v10 + 28) = *(int32_t *)(v26 + 28);
						int32_t result5 = v10 - 768; // 0xd5a20
						v10 = result5;
						if (result5 < *(int32_t *)v1) {
							// bb153
							return result5;
						}
						// 0xd5a30
						v14 -= 3;
						*(int32_t *)result5 = *(int32_t *)v11;
						*(int32_t *)(v10 + 4) = *(int32_t *)(v11 + 4);
						*(int32_t *)(v10 + 8) = *(int32_t *)(v11 + 8);
						*(int32_t *)(v10 + 12) = *(int32_t *)(v11 + 12);
						*(int32_t *)(v10 + 16) = *(int32_t *)(v11 + 16);
						*(int32_t *)(v10 + 20) = *(int32_t *)(v11 + 20);
						*(int32_t *)(v10 + 24) = *(int32_t *)(v11 + 24);
						int32_t v27 = v11; // 0xd5a6c
						v11 = v27 + 32;
						*(int32_t *)(v10 + 28) = *(int32_t *)(v27 + 28);
						result6 = v10 - 768;
						v10 = result6;
						int32_t v28 = v15 - 1; // 0xd5a7c
						v15 = v28;
						if (v28 == 0) {
							// break -> 0xd5a80
							break;
						}
						result2 = result6;
						// continue -> 0xd5920
					}
					// 0xd5a80
					return result6;
				}
			lab_0xd5908_3:
				// 0xd5908
				if (v17 < *(int32_t *)v1) {
					// break -> bb
					break;
				}
				result = v17;
				v3 = v16;
				// continue -> 0xd584c
				continue;
			} else {
				// 0xd589c
				*(int32_t *)v9 = *(int32_t *)v7;
				*(int32_t *)(v9 + 4) = *(int32_t *)(v7 + 4);
				*(int32_t *)(v9 + 8) = *(int32_t *)(v7 + 8);
				*(int32_t *)(v9 + 12) = *(int32_t *)(v7 + 12);
				*(int32_t *)(v9 + 16) = *(int32_t *)(v7 + 16);
				*(int32_t *)(v9 + 20) = *(int32_t *)(v7 + 20);
				*(int32_t *)(v9 + 24) = *(int32_t *)(v7 + 24);
				int32_t v29 = v7; // 0xd58d4
				v7 = v29 + 32;
				*(int32_t *)(v9 + 28) = *(int32_t *)(v29 + 28);
				int32_t v30 = v9 + 32; // 0xd58e0
				v9 = v30;
				int32_t v31 = v15 - 1; // 0xd58e4
				// branch -> 0xd589c
				while (v31 != 0) {
					// 0xd589c
					*(int32_t *)v30 = *(int32_t *)v7;
					*(int32_t *)(v9 + 4) = *(int32_t *)(v7 + 4);
					*(int32_t *)(v9 + 8) = *(int32_t *)(v7 + 8);
					*(int32_t *)(v9 + 12) = *(int32_t *)(v7 + 12);
					*(int32_t *)(v9 + 16) = *(int32_t *)(v7 + 16);
					*(int32_t *)(v9 + 20) = *(int32_t *)(v7 + 20);
					*(int32_t *)(v9 + 24) = *(int32_t *)(v7 + 24);
					v29 = v7;
					v7 = v29 + 32;
					*(int32_t *)(v9 + 28) = *(int32_t *)(v29 + 28);
					v30 = v9 + 32;
					v9 = v30;
					v31--;
					// continue -> 0xd589c
				}
				int32_t v32 = v14 % 8; // 0xd58e8
				if (v32 == 0) {
					goto lab_0xd5908;
				}
				v20 = v30;
				v19 = v32;
				goto lab_0xd58f0;
			}
		}
		// 0xd5908
		v16 = v2 - 2;
		v2 = v16;
		v17 = v10 - 800;
		v10 = v17;
		if (v16 > -1) {
			goto lab_0xd5908_3;
		}
		// 0xd5914
		v15 = 4;
		v14 = 16;
		result2 = v17;
		// branch -> 0xd5920
		while (true) {
			// 0xd5920
			if (result2 >= *(int32_t *)v1) {
				goto lab_0xd592c_2;
			}
			// bb150
			return result2;
		}
	}
}

// Address range: 0xd5a84 - 0xd5c24
int32_t function_d5a84(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd5a84
	int32_t v2 = 30;                  // r8
	int32_t result = 0;
	if (result < *(int32_t *)v1) {
		// bb
		return result;
	}
	int32_t v3 = 30; // 0xd5a9c181
	while (true) {
		int32_t v4 = 32 - v3;     // 0xd5a98
		int32_t v5 = v4;          // r4
		int32_t v6 = result + v3; // 0xd5a9c
		int32_t v7 = v6;          // r7
		int32_t v8 = result + 32; // r3
		int32_t v9 = v4;          // 0xd5ac0
		if (v4 % 2 != 0) {
			// 0xd5ab0
			v5 = v4 - 1;
			*(char *)v6 = 0;
			v7++;
			v9 = v5;
			// branch -> 0xd5ac0
		}
		// 0xd5ac0
		if (__asm_rlwinm_(v9, 0, 30, 30) != 0) {
			// 0xd5ac8
			v5 -= 2;
			*(int16_t *)v7 = 0;
			v7 += 2;
			// branch -> 0xd5ad8
		}
		uint32_t v10 = v5;     // 0xd5ad8
		int32_t v11 = v10 / 4; // 0xd5adc
		v5 = v11;
		int32_t v12 = 0; // r5
		int32_t v13;     // ctr
		int32_t v14;     // r0
		int32_t v15;     // 0xd5b34
		int32_t v16;     // 0xd5b38
		int32_t result2; // 0xd5b58
		if (v10 >= 4) {
			int32_t v17 = __asm_rlwinm_(v11, 29, 3, 31); // 0xd5ae8
			v13 = v17;
			int32_t v18; // 0xd5b24
			int32_t v19;
			if (v17 == 0) {
				// 0xd5ae8
				v19 = v7;
				v18 = v5;
				// branch -> 0xd5b24
			lab_0xd5b24:
				// 0xd5b24
				*(int32_t *)v19 = v12;
				int32_t v20 = v7 + 4;  // 0xd5b2c
				int32_t v21 = v18 - 1; // 0xd5b30
				// branch -> 0xd5b28
				while (v21 != 0) {
					// 0xd5b28
					*(int32_t *)v20 = v12;
					v20 += 4;
					v21--;
					// continue -> 0xd5b28
				}
			lab_0xd5b34:
				// 0xd5b34
				v15 = v2 - 2;
				v2 = v15;
				v16 = v8 - 800;
				v8 = v16;
				if (v15 <= -1) {
					// 0xd5b40
					v13 = 4;
					v12 = 16;
					v14 = 0;
					result2 = v16;
					// branch -> 0xd5b50
					int32_t result6; // 0xd5c18
					while (true) {
						// 0xd5b50
						if (result2 < *(int32_t *)v1) {
							// bb150
							return result2;
						}
					lab_0xd5b5c_2:
						// 0xd5b5c
						*(int32_t *)(result2 + 28) = v14;
						*(int32_t *)(v8 + 24) = v14;
						*(int32_t *)(v8 + 20) = v14;
						*(int32_t *)(v8 + 16) = v14;
						*(int32_t *)(v8 + 12) = v14;
						*(int32_t *)(v8 + 8) = v14;
						*(int32_t *)(v8 + 4) = v14;
						*(int32_t *)v8 = v14;
						int32_t v22 = v8;            // 0xd5b7c
						int32_t result3 = v22 - 768; // 0xd5b7c
						v8 = result3;
						if (result3 < *(int32_t *)v1) {
							// bb151
							return result3;
						}
						// 0xd5b8c
						*(int32_t *)(v22 - 740) = v14;
						*(int32_t *)(v8 + 24) = v14;
						*(int32_t *)(v8 + 20) = v14;
						*(int32_t *)(v8 + 16) = v14;
						*(int32_t *)(v8 + 12) = v14;
						*(int32_t *)(v8 + 8) = v14;
						*(int32_t *)(v8 + 4) = v14;
						*(int32_t *)v8 = v14;
						int32_t v23 = v8;            // 0xd5bb0
						int32_t result4 = v23 - 768; // 0xd5bb0
						v8 = result4;
						if (result4 < *(int32_t *)v1) {
							// bb152
							return result4;
						}
						// 0xd5bc0
						*(int32_t *)(v23 - 740) = v14;
						*(int32_t *)(v8 + 24) = v14;
						*(int32_t *)(v8 + 20) = v14;
						*(int32_t *)(v8 + 16) = v14;
						*(int32_t *)(v8 + 12) = v14;
						*(int32_t *)(v8 + 8) = v14;
						*(int32_t *)(v8 + 4) = v14;
						*(int32_t *)v8 = v14;
						int32_t v24 = v8;            // 0xd5be4
						int32_t result5 = v24 - 768; // 0xd5be4
						v8 = result5;
						if (result5 < *(int32_t *)v1) {
							// bb153
							return result5;
						}
						// 0xd5bf4
						*(int32_t *)(v24 - 740) = v14;
						v12 -= 3;
						*(int32_t *)(v8 + 24) = v14;
						*(int32_t *)(v8 + 20) = v14;
						*(int32_t *)(v8 + 16) = v14;
						*(int32_t *)(v8 + 12) = v14;
						*(int32_t *)(v8 + 8) = v14;
						*(int32_t *)(v8 + 4) = v14;
						*(int32_t *)v8 = v14;
						result6 = v8 - 768;
						v8 = result6;
						int32_t v25 = v13 - 1; // 0xd5c1c
						v13 = v25;
						if (v25 == 0) {
							// break -> 0xd5c20
							break;
						}
						result2 = result6;
						// continue -> 0xd5b50
					}
					// 0xd5c20
					return result6;
				}
			lab_0xd5b34_3:
				// 0xd5b34
				if (v16 < *(int32_t *)v1) {
					// break -> bb
					break;
				}
				result = v16;
				v3 = v15;
				// continue -> 0xd5a98
				continue;
			} else {
				// 0xd5af4
				*(int32_t *)v7 = v12;
				*(int32_t *)(v7 + 4) = v12;
				*(int32_t *)(v7 + 8) = v12;
				*(int32_t *)(v7 + 12) = v12;
				*(int32_t *)(v7 + 16) = v12;
				*(int32_t *)(v7 + 20) = v12;
				*(int32_t *)(v7 + 24) = v12;
				*(int32_t *)(v7 + 28) = v12;
				int32_t v26 = v7 + 32; // 0xd5b14
				v7 = v26;
				int32_t v27 = v13 - 1; // 0xd5b18
				// branch -> 0xd5af4
				while (v27 != 0) {
					// 0xd5af4
					*(int32_t *)v26 = v12;
					*(int32_t *)(v7 + 4) = v12;
					*(int32_t *)(v7 + 8) = v12;
					*(int32_t *)(v7 + 12) = v12;
					*(int32_t *)(v7 + 16) = v12;
					*(int32_t *)(v7 + 20) = v12;
					*(int32_t *)(v7 + 24) = v12;
					*(int32_t *)(v7 + 28) = v12;
					v26 = v7 + 32;
					v7 = v26;
					v27--;
					// continue -> 0xd5af4
				}
				int32_t v28 = v5 % 8; // 0xd5b1c
				if (v28 == 0) {
					goto lab_0xd5b34;
				}
				v19 = v26;
				v18 = v28;
				goto lab_0xd5b24;
			}
		}
		// 0xd5b34
		v15 = v2 - 2;
		v2 = v15;
		v16 = v8 - 800;
		v8 = v16;
		if (v15 > -1) {
			goto lab_0xd5b34_3;
		}
		// 0xd5b40
		v13 = 4;
		v12 = 16;
		v14 = 0;
		result2 = v16;
		// branch -> 0xd5b50
		while (true) {
			// 0xd5b50
			if (result2 >= *(int32_t *)v1) {
				goto lab_0xd5b5c_2;
			}
			// bb150
			return result2;
		}
	}
}

// Address range: 0xd5c24 - 0xd5d44
int32_t function_d5c24(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7808); // r31
	int32_t v2;                              // bp-24
	int32_t v3 = &v2;                        // 0xd5c50
	int32_t v4 = &a2;                        // 0xd5c58
	v2 = 30;
	int32_t v5; // 0xd5ce4
	int32_t v6; // 0xd5d0c8
	if (function_d0424(&a1, v4, v3, 0) != 0) {
		int32_t v7 = v2;
		if (v7 > -1) {
			int32_t v8 = 32 - v7; // 0xd5c70
			g39 = v8;
			a1 += v7;
			a2 += __asm_rlwinm(v8, 0, 30, 30);
			function_da338((char *)&a1, v4, a3);
			int32_t v9 = a1 - 800; // 0xd5ca8
			int32_t v10 = v2 - 2;  // 0xd5cac
			a1 = v9;
			v2 = v10;
			// branch -> 0xd5c70
			while (v10 > 0xffffffff) {
				// 0xd5c70
				v8 = 32 - v10;
				g39 = v8;
				a1 = v10 + v9;
				a2 += __asm_rlwinm(v8, 0, 30, 30);
				function_da338((char *)&a1, v4, a3);
				v9 = a1 - 800;
				v10 = v2 - 2;
				a1 = v9;
				v2 = v10;
				// continue -> 0xd5c70
			}
			// 0xd5cc4
			v2 = 16;
			v6 = 16;
			v5 = a1;
			// branch -> 0xd5cd0
			int32_t result; // 0xd5d40
			while (true) {
				// 0xd5cd0
				int32_t v11; // 0xd5d08
				if (v5 < *(int32_t *)v1) {
				lab_0xd5cf8:
					// 0xd5cf8
					function_d9754((char *)&a1, v4, a3);
					result = v2;
					v11 = a1;
					// branch -> 0xd5d08
				} else {
				lab_0xd5ce0:;
					int32_t v12 = v5 + 32; // 0xd5ce4
					a1 = v12;
					a2 += 32;
					result = v6;
					v11 = v12;
					// branch -> 0xd5d08
				}
				int32_t v13 = v11 - 800;  // 0xd5d10
				int32_t v14 = result - 1; // 0xd5d14
				a1 = v13;
				v2 = v14;
				if (v14 == 0) {
					// break -> 0xd5d2c
					break;
				}
				v6 = v14;
				v5 = v13;
				// continue -> 0xd5cd0
			}
			// 0xd5d2c
			return result;
		}
	}
	// 0xd5cc4
	v2 = 16;
	v6 = 16;
	v5 = a1;
	// branch -> 0xd5cd0
	while (true) {
		// 0xd5cd0
		if (v5 < *(int32_t *)v1) {
			goto lab_0xd5cf8;
		}
		goto lab_0xd5ce0;
	}
}

// Address range: 0xd5d44 - 0xd5f78
int32_t function_d5d44(int16_t *a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7808); // r31
	int16_t *v2 = (int16_t *)(int32_t)a1;    // bp+24
	int32_t v3;                              // bp-24
	int32_t v4 = &v3;                        // 0xd5d68
	v3 = 30;
	int16_t *v5; // 0xd5e84
	int32_t v6;  // 0xd5eac
	int32_t v7;  // 0xd5f4414
	int32_t v8;  // 0xd5e84
	if (function_d0424((int32_t *)&v2, (int32_t)&a2, v4, 0) != 0) {
		int32_t v9 = v3;
		int32_t v10 = v9; // r5
		if (v9 > -1) {
			int16_t *v11 = v2; // 0xd5d88
			// branch -> 0xd5d88
			while (true) {
				int32_t v12 = 32 - v9;                       // 0xd5d8c
				int32_t v13 = __asm_rlwinm_(v12, 0, 30, 30); // 0xd5d90
				int32_t v14 = a2;                            // 0xd5d94
				int32_t v15 = v14;                           // r4
				int32_t v16 = v10 + (int32_t)v11;            // 0xd5d98
				v10 = v16;
				a2 = v14 + v13 + v12;
				v2 = (int16_t *)(v12 + v16);
				uint32_t v17 = v12; // 0xd5dd4
				if (v13 != 0) {
					// 0xd5dbc
					v15 = v14 + 4;
					*(int16_t *)v16 = *(int16_t *)(v14 + 2);
					v10 += 2;
					v17 = v12 - 2;
					// branch -> 0xd5dd0
				}
				int32_t v18 = v17 / 4; // 0xd5dd4
				int32_t v19 = v18;     // r3
				int32_t v20;           // 0xd5e60
				int16_t *v21;          // 0xd5e64
				if (v17 >= 4) {
					int32_t v22 = __asm_rlwinm_(v18, 29, 3, 31); // 0xd5ddc
					int32_t v23 = v22;                           // ctr
					int32_t v24;                                 // 0xd5e3c
					int32_t v25;
					if (v22 == 0) {
						// 0xd5ddc
						v25 = v10;
						v24 = v19;
						// branch -> 0xd5e3c
					lab_0xd5e3c:;
						int32_t v26 = v15; // 0xd5e40
						*(int32_t *)v25 = *(int32_t *)v26;
						int32_t v27 = v10 + 4; // 0xd5e4c
						int32_t v28 = v24 - 1; // 0xd5e50
						// branch -> 0xd5e40
						while (v28 != 0) {
							// 0xd5e40
							v26 += 4;
							*(int32_t *)v27 = *(int32_t *)v26;
							v27 += 4;
							v28--;
							// continue -> 0xd5e40
						}
					lab_0xd5e54:
						// 0xd5e54
						v20 = v3 - 2;
						v21 = (int16_t *)((int32_t)v2 - 800);
						v2 = v21;
						v3 = v20;
						v10 = v20;
						if (v20 <= 0xffffffff) {
							// break -> 0xd5e78
							break;
						}
						v9 = v20;
						v11 = v21;
						// continue -> 0xd5d88
						continue;
					} else {
						// 0xd5de8
						*(int32_t *)v10 = *(int32_t *)v15;
						*(int32_t *)(v10 + 4) = *(int32_t *)(v15 + 4);
						*(int32_t *)(v10 + 8) = *(int32_t *)(v15 + 8);
						*(int32_t *)(v10 + 12) = *(int32_t *)(v15 + 12);
						*(int32_t *)(v10 + 16) = *(int32_t *)(v15 + 16);
						*(int32_t *)(v10 + 20) = *(int32_t *)(v15 + 20);
						*(int32_t *)(v10 + 24) = *(int32_t *)(v15 + 24);
						int32_t v29 = v15; // 0xd5e20
						v15 = v29 + 32;
						*(int32_t *)(v10 + 28) = *(int32_t *)(v29 + 28);
						int32_t v30 = v10 + 32; // 0xd5e2c
						v10 = v30;
						int32_t v31 = v23 - 1; // 0xd5e30
						// branch -> 0xd5de8
						while (v31 != 0) {
							// 0xd5de8
							*(int32_t *)v30 = *(int32_t *)v15;
							*(int32_t *)(v10 + 4) = *(int32_t *)(v15 + 4);
							*(int32_t *)(v10 + 8) = *(int32_t *)(v15 + 8);
							*(int32_t *)(v10 + 12) = *(int32_t *)(v15 + 12);
							*(int32_t *)(v10 + 16) = *(int32_t *)(v15 + 16);
							*(int32_t *)(v10 + 20) = *(int32_t *)(v15 + 20);
							*(int32_t *)(v10 + 24) = *(int32_t *)(v15 + 24);
							v29 = v15;
							v15 = v29 + 32;
							*(int32_t *)(v10 + 28) = *(int32_t *)(v29 + 28);
							v30 = v10 + 32;
							v10 = v30;
							v31--;
							// continue -> 0xd5de8
						}
						int32_t v32 = v19 % 8; // 0xd5e34
						if (v32 == 0) {
							goto lab_0xd5e54;
						}
						v25 = v30;
						v24 = v32;
						goto lab_0xd5e3c;
					}
				}
				// 0xd5e54
				v20 = v3 - 2;
				v21 = (int16_t *)((int32_t)v2 - 800);
				v2 = v21;
				v3 = v20;
				v10 = v20;
				if (v20 <= 0xffffffff) {
					// break -> 0xd5e78
					break;
				}
				v9 = v20;
				v11 = v21;
				// continue -> 0xd5d88
			}
			// 0xd5e78
			v3 = 16;
			v7 = 16;
			v6 = a2;
			v5 = v2;
			// branch -> 0xd5e84
			int32_t result; // 0xd5f74
			while (true) {
				// 0xd5e84
				v8 = (int32_t)v5;
				int32_t v33;
				int16_t *v34; // 0xd5f38
				if (v8 < *(int32_t *)v1) {
				lab_0xd5eac:
					// 0xd5eac
					*(int32_t *)v5 = *(int32_t *)v6;
					*(int32_t *)((int32_t)v2 + 4) = *(int32_t *)(a2 + 4);
					*(int32_t *)((int32_t)v2 + 8) = *(int32_t *)(a2 + 8);
					*(int32_t *)((int32_t)v2 + 12) = *(int32_t *)(a2 + 12);
					*(int32_t *)((int32_t)v2 + 16) = *(int32_t *)(a2 + 16);
					*(int32_t *)((int32_t)v2 + 20) = *(int32_t *)(a2 + 20);
					*(int32_t *)((int32_t)v2 + 24) = *(int32_t *)(a2 + 24);
					*(int32_t *)((int32_t)v2 + 28) = *(int32_t *)(a2 + 28);
					v34 = (int16_t *)((int32_t)v2 + 32);
					v2 = v34;
					result = v3;
					v33 = a2 + 32;
					// branch -> 0xd5f40
				} else {
				lab_0xd5e94:;
					int16_t *v35 = (int16_t *)(v8 + 32); // 0xd5e9c
					v2 = v35;
					result = v7;
					v34 = v35;
					v33 = v6 + 32;
					// branch -> 0xd5f40
				}
				// 0xd5f40
				a2 = v33;
				int32_t v36 = result - 1;                       // 0xd5f4c
				int16_t *v37 = (int16_t *)((int32_t)v34 - 800); // 0xd5f50
				v2 = v37;
				v3 = v36;
				if (v36 == 0) {
					// break -> 0xd5f64
					break;
				}
				v7 = v36;
				v6 = v33;
				v5 = v37;
				// continue -> 0xd5e84
			}
			// 0xd5f64
			return result;
		}
	}
	// 0xd5e78
	v3 = 16;
	v7 = 16;
	v6 = a2;
	v5 = v2;
	// branch -> 0xd5e84
	while (true) {
		// 0xd5e84
		v8 = (int32_t)v5;
		if (v8 < *(int32_t *)v1) {
			goto lab_0xd5eac;
		}
		goto lab_0xd5e94;
	}
}

// Address range: 0xd5f78 - 0xd6150
int32_t function_d5f78(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd5f78
	int32_t v2 = 30;                  // r8
	int32_t v3 = 30;                  // 0xd5f98
	int32_t v4 = 0;                   // 0xd5f98
	// branch -> 0xd5f80
	while (true) {
		// 0xd5f80
		if (v4 < *(int32_t *)v1) {
			int32_t v5 = 32 - v3; // 0xd5f94
			int32_t v6 = v5;      // r4
			int32_t v7 = v4 + v3; // 0xd5f98
			int32_t v8 = v7;      // r7
			int32_t v9 = v4 + 32; // r3
			int32_t v10 = v5;     // 0xd5fbc
			if (v5 % 2 != 0) {
				// 0xd5fac
				v6 = v5 - 1;
				*(char *)v7 = 0;
				v8++;
				v10 = v6;
				// branch -> 0xd5fbc
			}
			// 0xd5fbc
			if (__asm_rlwinm_(v10, 0, 30, 30) != 0) {
				// 0xd5fc4
				v6 -= 2;
				*(int16_t *)v8 = 0;
				v8 += 2;
				// branch -> 0xd5fd4
			}
			uint32_t v11 = v6;     // 0xd5fd4
			int32_t v12 = v11 / 4; // 0xd5fd8
			v6 = v12;
			int32_t v13 = 0; // r5
			int32_t v14;     // ctr
			int32_t v15;     // r0
			int32_t v16;
			int32_t v17; // 0xd604c
			int32_t v18; // 0xd6084
			int32_t v19; // 0xd6030
			int32_t v20; // 0xd6034
			int32_t v21; // 0xd6060
			if (v11 >= 4) {
				int32_t v22 = __asm_rlwinm_(v12, 29, 3, 31); // 0xd5fe4
				v14 = v22;
				int32_t v23; // 0xd6020
				int32_t v24;
				if (v22 == 0) {
					// 0xd5fe4
					v24 = v8;
					v23 = v6;
					// branch -> 0xd6020
				lab_0xd6020:
					// 0xd6020
					*(int32_t *)v24 = v13;
					int32_t v25 = v8 + 4;  // 0xd6028
					int32_t v26 = v23 - 1; // 0xd602c
					// branch -> 0xd6024
					while (v26 != 0) {
						// 0xd6024
						*(int32_t *)v25 = v13;
						v25 += 4;
						v26--;
						// continue -> 0xd6024
					}
				lab_0xd6030:
					// 0xd6030
					v19 = v2 - 2;
					v2 = v19;
					v20 = v9 - 800;
					v9 = v20;
					if (v19 <= -1) {
						// 0xd603c
						v14 = 4;
						v13 = 16;
						v15 = 0;
						v21 = v20;
						// branch -> 0xd604c
						int32_t result; // 0xd6140
						while (true) {
							// 0xd604c
							v17 = v1;
							v18 = v17;
							v16 = v21;
							if (v21 < *(int32_t *)v17) {
							lab_0xd6060_3:
								// 0xd6060
								*(int32_t *)(v21 + 28) = v15;
								*(int32_t *)(v9 + 24) = v15;
								*(int32_t *)(v9 + 20) = v15;
								*(int32_t *)(v9 + 16) = v15;
								*(int32_t *)(v9 + 12) = v15;
								*(int32_t *)(v9 + 8) = v15;
								*(int32_t *)(v9 + 4) = v15;
								*(int32_t *)v9 = v15;
								v18 = v1;
								v16 = v9;
								// branch -> 0xd6084
							}
						lab_0xd6084_3:;
							int32_t v27 = v16 - 768; // 0xd6088
							v9 = v27;
							int32_t v28 = v18; // 0xd60c0
							int32_t v29 = v27;
							if (v27 < *(int32_t *)v18) {
								// 0xd609c
								*(int32_t *)(v16 - 740) = v15;
								*(int32_t *)(v9 + 24) = v15;
								*(int32_t *)(v9 + 20) = v15;
								*(int32_t *)(v9 + 16) = v15;
								*(int32_t *)(v9 + 12) = v15;
								*(int32_t *)(v9 + 8) = v15;
								*(int32_t *)(v9 + 4) = v15;
								*(int32_t *)v9 = v15;
								v28 = v1;
								v29 = v9;
								// branch -> 0xd60c0
							}
							int32_t v30 = v29 - 768; // 0xd60c4
							v9 = v30;
							int32_t v31 = v13 - 1; // 0xd60c8
							v13 = v31;
							int32_t v32 = v28; // 0xd6100
							int32_t v33 = v30;
							if (v30 < *(int32_t *)v28) {
								// 0xd60dc
								*(int32_t *)(v29 - 740) = v15;
								*(int32_t *)(v9 + 24) = v15;
								*(int32_t *)(v9 + 20) = v15;
								*(int32_t *)(v9 + 16) = v15;
								*(int32_t *)(v9 + 12) = v15;
								*(int32_t *)(v9 + 8) = v15;
								*(int32_t *)(v9 + 4) = v15;
								*(int32_t *)v9 = v15;
								v31 = v13;
								v32 = v1;
								v33 = v9;
								// branch -> 0xd6100
							}
							int32_t v34 = v33 - 768; // 0xd6104
							v9 = v34;
							int32_t v35 = v31 - 1; // 0xd6108
							v13 = v35;
							int32_t v36 = v34;
							if (v34 < *(int32_t *)v32) {
								// 0xd611c
								*(int32_t *)(v33 - 740) = v15;
								*(int32_t *)(v9 + 24) = v15;
								*(int32_t *)(v9 + 20) = v15;
								*(int32_t *)(v9 + 16) = v15;
								*(int32_t *)(v9 + 12) = v15;
								*(int32_t *)(v9 + 8) = v15;
								*(int32_t *)(v9 + 4) = v15;
								*(int32_t *)v9 = v15;
								v35 = v13;
								v36 = v9;
								// branch -> 0xd6140
							}
							// 0xd6140
							result = v36 - 768;
							v9 = result;
							v13 = v35 - 1;
							int32_t v37 = v14 - 1; // 0xd6148
							v14 = v37;
							if (v37 == 0) {
								// break -> 0xd614c
								break;
							}
							v21 = result;
							// continue -> 0xd604c
						}
						// 0xd614c
						return result;
					}
				lab_0xd6030_5:
					// 0xd6030
					v3 = v19;
					v4 = v20;
					// branch -> 0xd5f80
					continue;
				} else {
					// 0xd5ff0
					*(int32_t *)v8 = v13;
					*(int32_t *)(v8 + 4) = v13;
					*(int32_t *)(v8 + 8) = v13;
					*(int32_t *)(v8 + 12) = v13;
					*(int32_t *)(v8 + 16) = v13;
					*(int32_t *)(v8 + 20) = v13;
					*(int32_t *)(v8 + 24) = v13;
					*(int32_t *)(v8 + 28) = v13;
					int32_t v38 = v8 + 32; // 0xd6010
					v8 = v38;
					int32_t v39 = v14 - 1; // 0xd6014
					// branch -> 0xd5ff0
					while (v39 != 0) {
						// 0xd5ff0
						*(int32_t *)v38 = v13;
						*(int32_t *)(v8 + 4) = v13;
						*(int32_t *)(v8 + 8) = v13;
						*(int32_t *)(v8 + 12) = v13;
						*(int32_t *)(v8 + 16) = v13;
						*(int32_t *)(v8 + 20) = v13;
						*(int32_t *)(v8 + 24) = v13;
						*(int32_t *)(v8 + 28) = v13;
						v38 = v8 + 32;
						v8 = v38;
						v39--;
						// continue -> 0xd5ff0
					}
					int32_t v40 = v6 % 8; // 0xd6018
					if (v40 == 0) {
						goto lab_0xd6030;
					}
					v24 = v38;
					v23 = v40;
					goto lab_0xd6020;
				}
			}
		lab_0xd6030_4:
			// 0xd6030
			v19 = v2 - 2;
			v2 = v19;
			v20 = v4 - 768;
			v9 = v20;
			if (v19 > -1) {
				goto lab_0xd6030_5;
			}
			// 0xd603c
			v14 = 4;
			v13 = 16;
			v15 = 0;
			v21 = v20;
			// branch -> 0xd604c
			while (true) {
				// 0xd604c
				v17 = v1;
				if (v21 < *(int32_t *)v17) {
					goto lab_0xd6060_3;
				}
				v18 = v17;
				v16 = v21;
				goto lab_0xd6084_3;
			}
		} else {
			// 0xd5f8c
			// branch -> 0xd6030
			goto lab_0xd6030_4;
		}
	}
}

// Address range: 0xd6150 - 0xd62a0
int32_t function_d6150(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd6160
	int32_t v4 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t v5 = &a2;    // 0xd61f8
	int32_t result = a1; // 0xd619c
	// branch -> 0xd618c
	int32_t v6; // 0xd6210
	while (true) {
		// 0xd618c
		if (result < *(int32_t *)v2) {
			// 0xd6280
			return result;
		}
		// 0xd619c
		a1 = v4 + result;
		int32_t *v7 = (int32_t *)v3; // 0xd61a4
		*v7 = *v7 ^ 1;
		int32_t v8 = 32 - v4; // 0xd61e4
		g39 = v8;
		a2 += __asm_rlwinm(v8, 0, 30, 30);
		if (*(int32_t *)v3 == 0) {
			// 0xd61e4
			function_da6a4((char *)&a1, v5, a3);
			// branch -> 0xd6208
		} else {
			// 0xd61bc
			function_da538((char *)&a1, v5, a3);
			// branch -> 0xd6208
		}
		int32_t v9 = v4 - 2; // 0xd620c
		v4 = v9;
		v6 = a1 - 800;
		a1 = v6;
		if (v9 <= 0xffffffff) {
			// break -> 0xd621c
			break;
		}
		result = v6;
		// continue -> 0xd618c
	}
	// 0xd621c
	v4 = 8;
	int32_t result2 = v6; // 0xd6220
	// branch -> 0xd6220
	int32_t result4; // 0xd626c
	while (true) {
		// 0xd6220
		if (result2 < *(int32_t *)v2) {
			// 0xd6280
			return result2;
		}
		// 0xd6230
		function_d99d4(&a1, v5, a3);
		int32_t result3 = a1 - 800; // 0xd6244
		a1 = result3;
		if (result3 < *(int32_t *)v2) {
			// 0xd6280
			return result3;
		}
		// 0xd625c
		function_d98f4((char *)&a1, v5, a3);
		result4 = a1;
		int32_t v10 = v4 - 1; // 0xd6270
		v4 = v10;
		int32_t v11 = result4 - 800; // 0xd6274
		a1 = v11;
		if (v10 == 0) {
			// break -> 0xd6280
			break;
		}
		result2 = v11;
		// continue -> 0xd6220
	}
	// 0xd6280
	return result4;
}

// Address range: 0xd62a0 - 0xd63d4
int32_t function_d62a0(int32_t a1, int32_t a2)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd62b0
	int32_t v4 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t v5 = &a2;    // 0xd633c
	int32_t result = a1; // 0xd62e4
	// branch -> 0xd62d4
	int32_t v6; // 0xd6350
	while (true) {
		// 0xd62d4
		if (result < *(int32_t *)v2) {
			// 0xd63b8
			return result;
		}
		// 0xd62e4
		a1 = v4 + result;
		int32_t *v7 = (int32_t *)v3; // 0xd62ec
		*v7 = *v7 ^ 1;
		int32_t v8 = 32 - v4; // 0xd6328
		g38 = v8;
		a2 += __asm_rlwinm(v8, 0, 30, 30);
		if (*(int32_t *)v3 == 0) {
			// 0xd6328
			function_d9ee4((char *)&a1, v5);
			// branch -> 0xd6348
		} else {
			// 0xd6304
			function_da004((char *)&a1, v5);
			// branch -> 0xd6348
		}
		int32_t v9 = v4 - 2; // 0xd634c
		v4 = v9;
		v6 = a1 - 800;
		a1 = v6;
		if (v9 <= 0xffffffff) {
			// break -> 0xd635c
			break;
		}
		result = v6;
		// continue -> 0xd62d4
	}
	// 0xd635c
	v4 = 8;
	int32_t result2 = v6; // 0xd6360
	// branch -> 0xd6360
	int32_t result4; // 0xd63a4
	while (true) {
		// 0xd6360
		if (result2 < *(int32_t *)v2) {
			// 0xd63b8
			return result2;
		}
		// 0xd6370
		function_d91e4(&a1, v5);
		int32_t result3 = a1 - 800; // 0xd6380
		a1 = result3;
		if (result3 < *(int32_t *)v2) {
			// 0xd63b8
			return result3;
		}
		// 0xd6398
		function_d9144((char *)&a1, v5);
		result4 = a1;
		int32_t v10 = v4 - 1; // 0xd63a8
		v4 = v10;
		int32_t v11 = result4 - 800; // 0xd63ac
		a1 = v11;
		if (v10 == 0) {
			// break -> 0xd63b8
			break;
		}
		result2 = v11;
		// continue -> 0xd6360
	}
	// 0xd63b8
	return result4;
}

// Address range: 0xd63d4 - 0xd64e4
int32_t function_d63d4(int32_t a1)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd63e4
	int32_t v4 = v3;                        // r30
	int32_t v5 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t result = a1; // 0xd6414
	// branch -> 0xd6404
	int32_t v6; // 0xd6460
	while (true) {
		// 0xd6404
		if (result < *(int32_t *)v2) {
			// 0xd64c8
			return result;
		}
		// 0xd6414
		a1 = v5 + result;
		int32_t *v7 = (int32_t *)v4; // 0xd641c
		*v7 = *v7 ^ 1;
		int32_t v8 = 32 - v5; // 0xd644c
		if (*(int32_t *)v4 == 0) {
			// 0xd6448
			function_da178((char *)&a1, v8, 0);
			// branch -> 0xd6458
		} else {
			// 0xd6434
			function_da238((char *)&a1, v8, 0);
			// branch -> 0xd6458
		}
		int32_t v9 = v5 - 2; // 0xd645c
		v5 = v9;
		v6 = a1 - 800;
		a1 = v6;
		if (v9 <= 0xffffffff) {
			// break -> 0xd646c
			break;
		}
		result = v6;
		// continue -> 0xd6404
	}
	// 0xd646c
	v4 = 8;
	int32_t result2 = v6; // 0xd6470
	// branch -> 0xd6470
	int32_t result4; // 0xd64b4
	while (true) {
		// 0xd6470
		if (result2 < *(int32_t *)v2) {
			// 0xd64c8
			return result2;
		}
		// 0xd6480
		function_d9544(&a1, 0);
		int32_t result3 = a1 - 800; // 0xd6490
		a1 = result3;
		if (result3 < *(int32_t *)v2) {
			// 0xd64c8
			return result3;
		}
		// 0xd64a8
		function_d94f4((char *)&a1, 0);
		result4 = a1;
		int32_t v10 = v4 - 1; // 0xd64b8
		v4 = v10;
		int32_t v11 = result4 - 800; // 0xd64bc
		a1 = v11;
		if (v10 == 0) {
			// break -> 0xd64c8
			break;
		}
		result2 = v11;
		// continue -> 0xd6470
	}
	// 0xd64c8
	return result4;
}

// Address range: 0xd64e4 - 0xd669c
int32_t function_d64e4(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7808); // r31
	int32_t v2 = *(int32_t *)(g23 - 0x6e7c); // 0xd64f8
	int32_t v3;                              // bp-24
	int32_t v4 = &v3;                        // 0xd6518
	int32_t v5 = &a2;                        // 0xd6520
	*(int32_t *)v2 = 0;
	v3 = 30;
	int32_t v6; // 0xd65e4
	int32_t v7; // 0xd65f4
	if (function_d0424(&a1, v5, v4, 1) != 0) {
		int32_t v8 = v3;
		int32_t v9 = v8; // r3
		if (v8 > -1) {
			int32_t v10 = a1; // 0xd6540
			// branch -> 0xd6540
			while (true) {
				// 0xd6540
				a1 = v10 + v8;
				int32_t *v11 = (int32_t *)v2; // 0xd654c
				*v11 = *v11 ^ 1;
				int32_t v12 = 32 - v9; // 0xd658c
				g39 = v12;
				a2 += __asm_rlwinm(v12, 0, 30, 30);
				if (*(int32_t *)v2 == 0) {
					// 0xd658c
					function_da6a4((char *)&a1, v5, a3);
					// branch -> 0xd65b0
				} else {
					// 0xd6564
					function_da538((char *)&a1, v5, a3);
					// branch -> 0xd65b0
				}
				int32_t v13 = a1 - 800; // 0xd65b8
				int32_t v14 = v3 - 2;   // 0xd65bc
				a1 = v13;
				v3 = v14;
				v9 = v14;
				if (v14 <= 0xffffffff) {
					// break -> 0xd65d4
					break;
				}
				v8 = v14;
				v10 = v13;
				// continue -> 0xd6540
			}
			// 0xd65d4
			v3 = 8;
			v7 = a1;
			// branch -> 0xd65e0
			int32_t result; // 0xd6660
			while (true) {
				// 0xd65e0
				v6 = v1;
				int32_t v15; // 0xd6628
				int32_t v16; // 0xd6618
				if (v7 < *(int32_t *)v6) {
				lab_0xd6608:
					// 0xd6608
					function_d99d4(&a1, v5, a3);
					v15 = v1;
					v16 = a1;
					// branch -> 0xd6618
				} else {
				lab_0xd65f0:;
					int32_t v17 = v7 + 32; // 0xd65f4
					a1 = v17;
					a2 += 32;
					v15 = v6;
					v16 = v17;
					// branch -> 0xd6618
				}
				int32_t v18 = v16 - 800; // 0xd661c
				a1 = v18;
				int32_t v19; // 0xd665c
				if (v18 < *(int32_t *)v15) {
					// 0xd664c
					function_d98f4((char *)&a1, v5, a3);
					v19 = a1;
					// branch -> 0xd665c
				} else {
					int32_t v20 = v16 - 768; // 0xd6638
					a1 = v20;
					a2 += 32;
					v19 = v20;
					// branch -> 0xd665c
				}
				// 0xd665c
				result = v3;
				int32_t v21 = v19 - 800;  // 0xd6664
				int32_t v22 = result - 1; // 0xd6668
				a1 = v21;
				v3 = v22;
				if (v22 == 0) {
					// break -> 0xd6680
					break;
				}
				v7 = v21;
				// continue -> 0xd65e0
			}
			// 0xd6680
			return result;
		}
	}
	// 0xd65d4
	v3 = 8;
	v7 = a1;
	// branch -> 0xd65e0
	while (true) {
		// 0xd65e0
		v6 = v1;
		if (v7 < *(int32_t *)v6) {
			goto lab_0xd6608;
		}
		goto lab_0xd65f0;
	}
}

// Address range: 0xd669c - 0xd6838
int32_t function_d669c(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7808); // r31
	int32_t v2 = *(int32_t *)(g23 - 0x6e7c); // 0xd66b0
	int32_t v3 = &a2;                        // 0xd66d0
	*(int32_t *)v2 = 0;
	int32_t v4 = 30; // bp-24
	int32_t v5;      // 0xd678c
	int32_t v6;      // 0xd679c
	if (function_d0424(&a1, v3, (int32_t)&v4, 1) != 0) {
		int32_t v7 = v4;
		int32_t v8 = v7; // r3
		if (v7 > -1) {
			int32_t v9 = a1; // 0xd66f0
			// branch -> 0xd66f0
			while (true) {
				// 0xd66f0
				a1 = v9 + v7;
				int32_t *v10 = (int32_t *)v2; // 0xd66fc
				*v10 = *v10 ^ 1;
				int32_t v11 = 32 - v8; // 0xd6738
				g38 = v11;
				a2 += __asm_rlwinm(v11, 0, 30, 30);
				if (*(int32_t *)v2 == 0) {
					// 0xd6738
					function_d9ee4((char *)&a1, v3);
					// branch -> 0xd6758
				} else {
					// 0xd6714
					function_da004((char *)&a1, v3);
					// branch -> 0xd6758
				}
				int32_t v12 = a1 - 800; // 0xd6760
				int32_t v13 = v4 - 2;   // 0xd6764
				a1 = v12;
				v4 = v13;
				v8 = v13;
				if (v13 <= 0xffffffff) {
					// break -> 0xd677c
					break;
				}
				v7 = v13;
				v9 = v12;
				// continue -> 0xd66f0
			}
			// 0xd677c
			v4 = 8;
			v6 = a1;
			// branch -> 0xd6788
			int32_t result; // 0xd6800
			while (true) {
				// 0xd6788
				v5 = v1;
				int32_t v14; // 0xd67cc
				int32_t v15; // 0xd67bc
				if (v6 < *(int32_t *)v5) {
				lab_0xd67b0:
					// 0xd67b0
					function_d91e4(&a1, v3);
					v14 = v1;
					v15 = a1;
					// branch -> 0xd67bc
				} else {
				lab_0xd6798:;
					int32_t v16 = v6 + 32; // 0xd679c
					a1 = v16;
					a2 += 32;
					v14 = v5;
					v15 = v16;
					// branch -> 0xd67bc
				}
				int32_t v17 = v15 - 800; // 0xd67c0
				a1 = v17;
				int32_t v18; // 0xd67fc
				if (v17 < *(int32_t *)v14) {
					// 0xd67f0
					function_d9144((char *)&a1, v3);
					v18 = a1;
					// branch -> 0xd67fc
				} else {
					int32_t v19 = v15 - 768; // 0xd67dc
					a1 = v19;
					a2 += 32;
					v18 = v19;
					// branch -> 0xd67fc
				}
				// 0xd67fc
				result = v4;
				int32_t v20 = v18 - 800;  // 0xd6804
				int32_t v21 = result - 1; // 0xd6808
				a1 = v20;
				v4 = v21;
				if (v21 == 0) {
					// break -> 0xd6820
					break;
				}
				v6 = v20;
				// continue -> 0xd6788
			}
			// 0xd6820
			return result;
		}
	}
	// 0xd677c
	v4 = 8;
	v6 = a1;
	// branch -> 0xd6788
	while (true) {
		// 0xd6788
		v5 = v1;
		if (v6 < *(int32_t *)v5) {
			goto lab_0xd67b0;
		}
		goto lab_0xd6798;
	}
}

// Address range: 0xd6838 - 0xd696c
int32_t function_d6838(int32_t a1)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd6848
	int32_t v4 = v3;                        // r30
	int32_t v5 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t v6 = a1; // 0xd6868
	// branch -> 0xd6868
	int32_t v7; // 0xd68d0
	while (true) {
		// 0xd6868
		if (v6 < *(int32_t *)v2) {
			// 0xd6884
			a1 = v5 + v6;
			int32_t *v8 = (int32_t *)v4; // 0xd688c
			*v8 = *v8 ^ 1;
			int32_t v9 = 32 - v5; // 0xd68bc
			if (*(int32_t *)v4 == 0) {
				// 0xd68b8
				function_da178((char *)&a1, v9, 0);
				// branch -> 0xd68c8
			} else {
				// 0xd68a4
				function_da238((char *)&a1, v9, 0);
				// branch -> 0xd68c8
			}
		lab_0xd68c8:;
			int32_t v10 = v5 - 2; // 0xd68cc
			v5 = v10;
			v7 = a1 - 800;
			a1 = v7;
			if (v10 <= 0xffffffff) {
				// break -> 0xd68dc
				break;
			}
			v6 = v7;
			// continue -> 0xd6868
			continue;
		} else {
			// 0xd6878
			a1 = v6 + 32;
			// branch -> 0xd68c8
			goto lab_0xd68c8;
		}
	}
	// 0xd68dc
	v4 = 8;
	int32_t v11 = v7; // 0xd68f0
	// branch -> 0xd68e0
	int32_t result; // 0xd6968
	while (true) {
		// 0xd68e0
		int32_t v12; // 0xd6908
		if (v11 < *(int32_t *)v2) {
			// 0xd68fc
			function_d9544(&a1, 0);
			v12 = a1;
			// branch -> 0xd6908
		} else {
			int32_t v13 = v11 + 32; // 0xd68f0
			a1 = v13;
			v12 = v13;
			// branch -> 0xd6908
		}
		int32_t v14 = v12 - 800; // 0xd690c
		a1 = v14;
		if (v14 < *(int32_t *)v2) {
			// 0xd6930
			function_d94f4((char *)&a1, 0);
			result = a1;
			// branch -> 0xd693c
		} else {
			int32_t v15 = v12 - 768; // 0xd6924
			a1 = v15;
			result = v15;
			// branch -> 0xd693c
		}
		int32_t v16 = v4 - 1; // 0xd6940
		v4 = v16;
		int32_t v17 = result - 800; // 0xd6944
		a1 = v17;
		if (v16 == 0) {
			// break -> 0xd6950
			break;
		}
		v11 = v17;
		// continue -> 0xd68e0
	}
	// 0xd6950
	return result;
}

// Address range: 0xd696c - 0xd6a64
int32_t function_d696c(int32_t result, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd6974
	int32_t v2 = 30;                  // r28
	int32_t v3 = result;              // bp+24
	int32_t v4 = &a2;                 // 0xd69d4
	int32_t v5 = result;              // r4
	if (result < *(int32_t *)v1) {
		// 0xd6a44
		return result;
	}
	int32_t v6 = 30; // 0xd69b0138
	while (true) {
		int32_t v7 = 32 - v6; // 0xd69b0
		g39 = v7;
		v3 = v2 + v5;
		a2 += __asm_rlwinm(v7, 0, 30, 30);
		function_da338((char *)&v3, v4, a3);
		int32_t result2 = v3; // 0xd69dc
		int32_t v8 = v2 - 2;  // 0xd69e0
		v2 = v8;
		int32_t result3 = result2 - 800; // 0xd69e4
		v3 = result3;
		if (v8 > -1) {
			// 0xd69b0
			v5 = result3;
			if (result3 >= *(int32_t *)v1) {
				// 0xd69b0
				v6 = v8;
				// branch -> 0xd69b0
				continue;
			}
			// 0xd6a44
			return result2;
		}
		// 0xd69f0
		v2 = 16;
		int32_t v9 = a4 - 64; // r30
		// branch -> 0xd69f8
		int32_t result4; // 0xd6a30
		while (true) {
			// 0xd69f8
			if (result3 >= *(int32_t *)v1) {
				int32_t v10 = a2; // 0xd6a08
				g38 = a3;
				g37 = v4;
				a2 = __asm_rlwinm(v10, 0, 30, 30) + v10;
				int32_t v11 = v9;              // 0xd6a24
				int32_t v12 = *(int32_t *)v11; // 0xd6a24
				g39 = v12;
				v9 = v11 - 4;
				function_d9ab4((char *)v12);
				result4 = v3;
				int32_t v13 = v2 - 1; // 0xd6a34
				v2 = v13;
				int32_t v14 = result4 - 800; // 0xd6a38
				v3 = v14;
				if (v13 == 0) {
					// break -> 0xd6a44
					break;
				}
				result3 = v14;
				// continue -> 0xd69f8
				continue;
			}
			// 0xd6a44
			return result3;
		}
		// 0xd6a44
		return result4;
	}
}

// Address range: 0xd6a64 - 0xd6bd4
int32_t function_d6a64(int16_t *a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd6a6c
	int32_t v2 = 30;                  // r8
	int32_t result = (int32_t)a1;     // 0xd6a84
	int16_t *v3 = (int16_t *)result;  // bp+24
	if (result < *(int32_t *)v1) {
		// 0xd6bb8
		return result;
	}
	int32_t v4 = 30; // 0xd6a9c141
	while (true) {
		int32_t v5 = result + v4;                  // 0xd6a9c
		int32_t v6 = a2;                           // r4
		int32_t v7 = 32 - v4;                      // 0xd6aa4
		int32_t v8 = __asm_rlwinm_(v7, 0, 30, 30); // 0xd6aac
		int32_t v9 = v5;                           // r5
		v3 = (int16_t *)(result + 32);
		a2 = a2 + v8 + v7;
		uint32_t v10 = v7; // 0xd6ae4
		if (v8 != 0) {
			// 0xd6acc
			v6 = a2 + 4;
			*(int16_t *)v5 = *(int16_t *)(a2 + 2);
			v9 += 2;
			v10 = v7 - 2;
			// branch -> 0xd6ae0
		}
		int32_t v11 = v10 / 4; // 0xd6ae4
		int32_t v12 = v11;     // r3
		int32_t v13;           // r29
		int32_t v14;           // r30
		int32_t v15;           // 0xd6b68
		int32_t result2;       // 0xd6b6c
		int16_t *v16;          // 0xd6b70
		int32_t result4;       // 0xd6b80
		if (v10 >= 4) {
			int32_t v17 = __asm_rlwinm_(v11, 29, 3, 31); // 0xd6aec
			int32_t v18 = v17;                           // ctr
			int32_t v19;                                 // 0xd6b4c
			int32_t v20;
			if (v17 == 0) {
				// 0xd6aec
				v20 = v9;
				v19 = v12;
				// branch -> 0xd6b4c
			lab_0xd6b4c:;
				int32_t v21 = v6; // 0xd6b50
				*(int32_t *)v20 = *(int32_t *)v21;
				int32_t v22 = v9 + 4;  // 0xd6b5c
				int32_t v23 = v19 - 1; // 0xd6b60
				// branch -> 0xd6b50
				while (v23 != 0) {
					// 0xd6b50
					v21 += 4;
					*(int32_t *)v22 = *(int32_t *)v21;
					v22 += 4;
					v23--;
					// continue -> 0xd6b50
				}
			lab_0xd6b64:
				// 0xd6b64
				v15 = v2 - 2;
				v2 = v15;
				result2 = (int32_t)v3 - 800;
				v16 = (int16_t *)result2;
				v3 = v16;
				if (v15 > -1) {
				lab_0xd6b64_3:
					// 0xd6b64
					if (result2 >= *(int32_t *)v1) {
						// 0xd6b64
						result = result2;
						v4 = v15;
						// branch -> 0xd6a9c
						continue;
					}
					// 0xd6bb8
					return result2;
				}
				// 0xd6b78
				v13 = a3 - 64;
				v14 = 16;
				int16_t *v24 = v16; // 0xd6b80
				// branch -> 0xd6b80
				int32_t result3; // 0xd6ba4
				while (true) {
					// 0xd6b80
					result4 = (int32_t)v24;
					if (result4 >= *(int32_t *)v1) {
					lab_0xd6b90_2:;
						int32_t v25 = v13; // 0xd6b90
						v13 = v25 - 4;
						function_d9284((char *)&v3, (int32_t)&a2, *(int32_t *)v25);
						result3 = (int32_t)v3;
						int32_t v26 = v14 - 1; // 0xd6ba8
						v14 = v26;
						int16_t *v27 = (int16_t *)(result3 - 800); // 0xd6bb0
						v3 = v27;
						if (v26 == 0) {
							// break -> 0xd6bb8
							break;
						}
						v24 = v27;
						// continue -> 0xd6b80
						continue;
					} else {
						result3 = result4;
					}
				}
				// 0xd6bb8
				return result3;
			}
			// 0xd6af8
			*(int32_t *)v9 = *(int32_t *)v6;
			*(int32_t *)(v9 + 4) = *(int32_t *)(v6 + 4);
			*(int32_t *)(v9 + 8) = *(int32_t *)(v6 + 8);
			*(int32_t *)(v9 + 12) = *(int32_t *)(v6 + 12);
			*(int32_t *)(v9 + 16) = *(int32_t *)(v6 + 16);
			*(int32_t *)(v9 + 20) = *(int32_t *)(v6 + 20);
			*(int32_t *)(v9 + 24) = *(int32_t *)(v6 + 24);
			int32_t v28 = v6; // 0xd6b30
			v6 = v28 + 32;
			*(int32_t *)(v9 + 28) = *(int32_t *)(v28 + 28);
			int32_t v29 = v9 + 32; // 0xd6b3c
			v9 = v29;
			int32_t v30 = v18 - 1; // 0xd6b40
			// branch -> 0xd6af8
			while (v30 != 0) {
				// 0xd6af8
				*(int32_t *)v29 = *(int32_t *)v6;
				*(int32_t *)(v9 + 4) = *(int32_t *)(v6 + 4);
				*(int32_t *)(v9 + 8) = *(int32_t *)(v6 + 8);
				*(int32_t *)(v9 + 12) = *(int32_t *)(v6 + 12);
				*(int32_t *)(v9 + 16) = *(int32_t *)(v6 + 16);
				*(int32_t *)(v9 + 20) = *(int32_t *)(v6 + 20);
				*(int32_t *)(v9 + 24) = *(int32_t *)(v6 + 24);
				v28 = v6;
				v6 = v28 + 32;
				*(int32_t *)(v9 + 28) = *(int32_t *)(v28 + 28);
				v29 = v9 + 32;
				v9 = v29;
				v30--;
				// continue -> 0xd6af8
			}
			int32_t v31 = v12 % 8; // 0xd6b44
			if (v31 == 0) {
				goto lab_0xd6b64;
			}
			v20 = v29;
			v19 = v31;
			goto lab_0xd6b4c;
		}
		// 0xd6b64
		v15 = v2 - 2;
		v2 = v15;
		result2 = (int32_t)v3 - 800;
		v16 = (int16_t *)result2;
		v3 = v16;
		if (v15 > -1) {
			goto lab_0xd6b64_3;
		}
		// 0xd6b78
		v13 = a3 - 64;
		v14 = 16;
		// branch -> 0xd6b80
		while (true) {
			// 0xd6b80
			result4 = (int32_t)v16;
			if (result4 >= *(int32_t *)v1) {
				goto lab_0xd6b90_2;
			}
			// 0xd6bb8
			return result4;
		}
	}
}

// Address range: 0xd6bd4 - 0xd6d1c
int32_t function_d6bd4(int16_t *a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd6bdc
	int32_t v2 = 30;                  // r7
	int32_t result = (int32_t)a1;     // 0xd6bf4
	int16_t *v3 = (int16_t *)result;  // bp+24
	if (result < *(int32_t *)v1) {
		// 0xd6d00
		return result;
	}
	int32_t v4 = 30; // 0xd6c08140
	while (true) {
		int32_t v5 = result + v4; // 0xd6c08
		int32_t v6 = 32 - v4;     // 0xd6c10
		int32_t v7 = v6;          // r3
		int32_t v8 = v5;          // r5
		v3 = (int16_t *)(result + 32);
		int32_t v9 = v6; // 0xd6c38
		if (v6 % 2 != 0) {
			// 0xd6c28
			v7 = v6 - 1;
			*(char *)v5 = 0;
			v8++;
			v9 = v7;
			// branch -> 0xd6c38
		}
		// 0xd6c38
		if (__asm_rlwinm_(v9, 0, 30, 30) != 0) {
			// 0xd6c40
			v7 -= 2;
			*(int16_t *)v8 = 0;
			v8 += 2;
			// branch -> 0xd6c50
		}
		uint32_t v10 = v7;     // 0xd6c50
		int32_t v11 = v10 / 4; // 0xd6c54
		v7 = v11;
		int32_t v12 = 0; // r4
		int32_t v13;     // r29
		int32_t v14;     // r30
		int32_t v15;     // 0xd6cb0
		int32_t v16;     // 0xd6cb4
		int16_t *v17;    // 0xd6cb8
		int32_t result3; // 0xd6cc8
		if (v10 >= 4) {
			int32_t v18 = __asm_rlwinm_(v11, 29, 3, 31); // 0xd6c60
			int32_t v19 = v18;                           // ctr
			int32_t v20;                                 // 0xd6c9c
			int32_t v21;
			if (v18 == 0) {
				// 0xd6c60
				v21 = v8;
				v20 = v7;
				// branch -> 0xd6c9c
			lab_0xd6c9c:
				// 0xd6c9c
				*(int32_t *)v21 = v12;
				int32_t v22 = v8 + 4;  // 0xd6ca4
				int32_t v23 = v20 - 1; // 0xd6ca8
				// branch -> 0xd6ca0
				while (v23 != 0) {
					// 0xd6ca0
					*(int32_t *)v22 = v12;
					v22 += 4;
					v23--;
					// continue -> 0xd6ca0
				}
			lab_0xd6cac:
				// 0xd6cac
				v15 = v2 - 2;
				v2 = v15;
				v16 = (int32_t)v3 - 800;
				v17 = (int16_t *)v16;
				v3 = v17;
				if (v15 > -1) {
				lab_0xd6cac_3:
					// 0xd6cac
					if (v16 < *(int32_t *)v1) {
						// break -> 0xd6d00
						break;
					}
					result = v16;
					v4 = v15;
					// continue -> 0xd6c08
					continue;
				}
				// 0xd6cc0
				v13 = a2 - 64;
				v14 = 16;
				int16_t *v24 = v17; // 0xd6cc8
				// branch -> 0xd6cc8
				int32_t result2; // 0xd6cec
				while (true) {
					// 0xd6cc8
					result3 = (int32_t)v24;
					if (result3 >= *(int32_t *)v1) {
					lab_0xd6cd8_2:;
						int32_t v25 = v13; // 0xd6cd8
						v13 = v25 - 4;
						function_d9594((char *)&v3, 0, *(int32_t *)v25);
						result2 = (int32_t)v3;
						int32_t v26 = v14 - 1; // 0xd6cf0
						v14 = v26;
						int16_t *v27 = (int16_t *)(result2 - 800); // 0xd6cf8
						v3 = v27;
						if (v26 == 0) {
							// break -> 0xd6d00
							break;
						}
						v24 = v27;
						// continue -> 0xd6cc8
						continue;
					} else {
						result2 = result3;
					}
				}
				// 0xd6d00
				return result2;
			}
			// 0xd6c6c
			*(int32_t *)v8 = v12;
			*(int32_t *)(v8 + 4) = v12;
			*(int32_t *)(v8 + 8) = v12;
			*(int32_t *)(v8 + 12) = v12;
			*(int32_t *)(v8 + 16) = v12;
			*(int32_t *)(v8 + 20) = v12;
			*(int32_t *)(v8 + 24) = v12;
			*(int32_t *)(v8 + 28) = v12;
			int32_t v28 = v8 + 32; // 0xd6c8c
			v8 = v28;
			int32_t v29 = v19 - 1; // 0xd6c90
			// branch -> 0xd6c6c
			while (v29 != 0) {
				// 0xd6c6c
				*(int32_t *)v28 = v12;
				*(int32_t *)(v8 + 4) = v12;
				*(int32_t *)(v8 + 8) = v12;
				*(int32_t *)(v8 + 12) = v12;
				*(int32_t *)(v8 + 16) = v12;
				*(int32_t *)(v8 + 20) = v12;
				*(int32_t *)(v8 + 24) = v12;
				*(int32_t *)(v8 + 28) = v12;
				v28 = v8 + 32;
				v8 = v28;
				v29--;
				// continue -> 0xd6c6c
			}
			int32_t v30 = v7 % 8; // 0xd6c94
			if (v30 == 0) {
				goto lab_0xd6cac;
			}
			v21 = v28;
			v20 = v30;
			goto lab_0xd6c9c;
		}
		// 0xd6cac
		v15 = v2 - 2;
		v2 = v15;
		v16 = (int32_t)v3 - 800;
		v17 = (int16_t *)v16;
		v3 = v17;
		if (v15 > -1) {
			goto lab_0xd6cac_3;
		}
		// 0xd6cc0
		v13 = a2 - 64;
		v14 = 16;
		// branch -> 0xd6cc8
		while (true) {
			// 0xd6cc8
			result3 = (int32_t)v17;
			if (result3 >= *(int32_t *)v1) {
				goto lab_0xd6cd8_2;
			}
			// 0xd6d00
			return result3;
		}
	}
}

// Address range: 0xd6d1c - 0xd6e54
int32_t function_d6d1c(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7808); // r31
	int32_t v2;                              // bp-24
	int32_t v3 = &v2;                        // 0xd6d50
	int32_t v4 = &a2;                        // 0xd6d58
	v2 = 30;
	int32_t v5; // 0xd6de8
	int32_t v6; // 0xd6dfc
	int32_t v7; // 0xd6dc8
	int32_t v8; // 0xd6e1810
	if (function_d0424(&a1, v4, v3, 0) != 0) {
		int32_t v9 = v2;
		if (v9 > -1) {
			int32_t v10 = 32 - v9; // 0xd6d70
			g39 = v10;
			a1 += v9;
			a2 += __asm_rlwinm(v10, 0, 30, 30);
			function_da338((char *)&a1, v4, a3);
			int32_t v11 = a1 - 800; // 0xd6da8
			int32_t v12 = v2 - 2;   // 0xd6dac
			a1 = v11;
			v2 = v12;
			// branch -> 0xd6d70
			while (v12 > 0xffffffff) {
				// 0xd6d70
				v10 = 32 - v12;
				g39 = v10;
				a1 = v12 + v11;
				a2 += __asm_rlwinm(v10, 0, 30, 30);
				function_da338((char *)&a1, v4, a3);
				v11 = a1 - 800;
				v12 = v2 - 2;
				a1 = v11;
				v2 = v12;
				// continue -> 0xd6d70
			}
			// 0xd6dc4
			v7 = a4 - 64;
			a4 = v7;
			v2 = 16;
			v8 = 16;
			v6 = v7;
			v5 = a1;
			// branch -> 0xd6dd4
			int32_t result; // 0xd6e50
			while (true) {
				// 0xd6dd4
				int32_t v13; // 0xd6e14
				int32_t v14; // 0xd6e10
				if (v5 < *(int32_t *)v1) {
				lab_0xd6dfc:
					// 0xd6dfc
					g39 = *(int32_t *)v6;
					g38 = a3;
					g37 = v4;
					function_d9ab4((char *)&a1);
					result = v2;
					v13 = a4;
					v14 = a1;
					// branch -> 0xd6e10
				} else {
				lab_0xd6de4:;
					int32_t v15 = v5 + 32; // 0xd6de8
					a1 = v15;
					a2 += 32;
					result = v8;
					v13 = v6;
					v14 = v15;
					// branch -> 0xd6e10
				}
				int32_t v16 = v13 - 4; // 0xd6e14
				a4 = v16;
				int32_t v17 = v14 - 800;  // 0xd6e1c
				int32_t v18 = result - 1; // 0xd6e20
				a1 = v17;
				v2 = v18;
				if (v18 == 0) {
					// break -> 0xd6e38
					break;
				}
				v8 = v18;
				v6 = v16;
				v5 = v17;
				// continue -> 0xd6dd4
			}
			// 0xd6e38
			return result;
		}
	}
	// 0xd6dc4
	v7 = a4 - 64;
	a4 = v7;
	v2 = 16;
	v8 = 16;
	v6 = v7;
	v5 = a1;
	// branch -> 0xd6dd4
	while (true) {
		// 0xd6dd4
		if (v5 < *(int32_t *)v1) {
			goto lab_0xd6dfc;
		}
		goto lab_0xd6de4;
	}
}

// Address range: 0xd6e54 - 0xd7018
int32_t function_d6e54(int16_t *a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7808); // r31
	int16_t *v2 = (int16_t *)(int32_t)a1;    // bp+24
	int32_t v3;                              // bp-24
	int32_t v4 = &v3;                        // 0xd6e80
	int32_t v5 = &a2;                        // 0xd6e88
	v3 = 30;
	int32_t v6; // 0xd6fc8
	int32_t v7; // 0xd6f94
	int32_t v8; // 0xd6fe014
	int32_t v9; // 0xd6fa0
	if (function_d0424((int32_t *)&v2, v5, v4, 0) != 0) {
		int32_t v10 = v3;
		int32_t v11 = v10; // r5
		if (v10 > -1) {
			int16_t *v12 = v2; // 0xd6ea0
			// branch -> 0xd6ea0
			while (true) {
				int32_t v13 = 32 - v10;                      // 0xd6ea4
				int32_t v14 = __asm_rlwinm_(v13, 0, 30, 30); // 0xd6ea8
				int32_t v15 = a2;                            // 0xd6eac
				int32_t v16 = v15;                           // r4
				int32_t v17 = v11 + (int32_t)v12;            // 0xd6eb0
				v11 = v17;
				a2 = v15 + v14 + v13;
				v2 = (int16_t *)(v13 + v17);
				uint32_t v18 = v13; // 0xd6eec
				if (v14 != 0) {
					// 0xd6ed4
					v16 = v15 + 4;
					*(int16_t *)v17 = *(int16_t *)(v15 + 2);
					v11 += 2;
					v18 = v13 - 2;
					// branch -> 0xd6ee8
				}
				int32_t v19 = v18 / 4; // 0xd6eec
				int32_t v20 = v19;     // r3
				int32_t v21;           // 0xd6f78
				int16_t *v22;          // 0xd6f7c
				if (v18 >= 4) {
					int32_t v23 = __asm_rlwinm_(v19, 29, 3, 31); // 0xd6ef4
					int32_t v24 = v23;                           // ctr
					int32_t v25;                                 // 0xd6f54
					int32_t v26;
					if (v23 == 0) {
						// 0xd6ef4
						v26 = v11;
						v25 = v20;
						// branch -> 0xd6f54
					lab_0xd6f54:;
						int32_t v27 = v16; // 0xd6f58
						*(int32_t *)v26 = *(int32_t *)v27;
						int32_t v28 = v11 + 4; // 0xd6f64
						int32_t v29 = v25 - 1; // 0xd6f68
						// branch -> 0xd6f58
						while (v29 != 0) {
							// 0xd6f58
							v27 += 4;
							*(int32_t *)v28 = *(int32_t *)v27;
							v28 += 4;
							v29--;
							// continue -> 0xd6f58
						}
					lab_0xd6f6c:
						// 0xd6f6c
						v21 = v3 - 2;
						v22 = (int16_t *)((int32_t)v2 - 800);
						v2 = v22;
						v3 = v21;
						v11 = v21;
						if (v21 <= 0xffffffff) {
							// break -> 0xd6f90
							break;
						}
						v10 = v21;
						v12 = v22;
						// continue -> 0xd6ea0
						continue;
					} else {
						// 0xd6f00
						*(int32_t *)v11 = *(int32_t *)v16;
						*(int32_t *)(v11 + 4) = *(int32_t *)(v16 + 4);
						*(int32_t *)(v11 + 8) = *(int32_t *)(v16 + 8);
						*(int32_t *)(v11 + 12) = *(int32_t *)(v16 + 12);
						*(int32_t *)(v11 + 16) = *(int32_t *)(v16 + 16);
						*(int32_t *)(v11 + 20) = *(int32_t *)(v16 + 20);
						*(int32_t *)(v11 + 24) = *(int32_t *)(v16 + 24);
						int32_t v30 = v16; // 0xd6f38
						v16 = v30 + 32;
						*(int32_t *)(v11 + 28) = *(int32_t *)(v30 + 28);
						int32_t v31 = v11 + 32; // 0xd6f44
						v11 = v31;
						int32_t v32 = v24 - 1; // 0xd6f48
						// branch -> 0xd6f00
						while (v32 != 0) {
							// 0xd6f00
							*(int32_t *)v31 = *(int32_t *)v16;
							*(int32_t *)(v11 + 4) = *(int32_t *)(v16 + 4);
							*(int32_t *)(v11 + 8) = *(int32_t *)(v16 + 8);
							*(int32_t *)(v11 + 12) = *(int32_t *)(v16 + 12);
							*(int32_t *)(v11 + 16) = *(int32_t *)(v16 + 16);
							*(int32_t *)(v11 + 20) = *(int32_t *)(v16 + 20);
							*(int32_t *)(v11 + 24) = *(int32_t *)(v16 + 24);
							v30 = v16;
							v16 = v30 + 32;
							*(int32_t *)(v11 + 28) = *(int32_t *)(v30 + 28);
							v31 = v11 + 32;
							v11 = v31;
							v32--;
							// continue -> 0xd6f00
						}
						int32_t v33 = v20 % 8; // 0xd6f4c
						if (v33 == 0) {
							goto lab_0xd6f6c;
						}
						v26 = v31;
						v25 = v33;
						goto lab_0xd6f54;
					}
				}
				// 0xd6f6c
				v21 = v3 - 2;
				v22 = (int16_t *)((int32_t)v2 - 800);
				v2 = v22;
				v3 = v21;
				v11 = v21;
				if (v21 <= 0xffffffff) {
					// break -> 0xd6f90
					break;
				}
				v10 = v21;
				v12 = v22;
				// continue -> 0xd6ea0
			}
			// 0xd6f90
			v7 = a3 - 64;
			a3 = v7;
			v3 = 16;
			v8 = 16;
			v6 = v7;
			int16_t *v34 = v2; // 0xd6fa0
			// branch -> 0xd6fa0
			int32_t result; // 0xd7014
			while (true) {
				// 0xd6fa0
				v9 = (int32_t)v34;
				int32_t v35;  // 0xd6fdc
				int16_t *v36; // 0xd6fd8
				if (v9 < *(int32_t *)v1) {
				lab_0xd6fc8:
					// 0xd6fc8
					function_d9284((char *)&v2, v5, *(int32_t *)v6);
					result = v3;
					v35 = a3;
					v36 = v2;
					// branch -> 0xd6fd8
				} else {
				lab_0xd6fb0:;
					int16_t *v37 = (int16_t *)(v9 + 32); // 0xd6fb8
					v2 = v37;
					a2 += 32;
					result = v8;
					v35 = v6;
					v36 = v37;
					// branch -> 0xd6fd8
				}
				int32_t v38 = v35 - 4; // 0xd6fdc
				a3 = v38;
				int32_t v39 = result - 1;                       // 0xd6fe8
				int16_t *v40 = (int16_t *)((int32_t)v36 - 800); // 0xd6fec
				v2 = v40;
				v3 = v39;
				if (v39 == 0) {
					// break -> 0xd7000
					break;
				}
				v8 = v39;
				v6 = v38;
				v34 = v40;
				// continue -> 0xd6fa0
			}
			// 0xd7000
			return result;
		}
	}
	// 0xd6f90
	v7 = a3 - 64;
	a3 = v7;
	v3 = 16;
	v8 = 16;
	v6 = v7;
	// branch -> 0xd6fa0
	while (true) {
		// 0xd6fa0
		v9 = (int32_t)v2;
		if (v9 < *(int32_t *)v1) {
			goto lab_0xd6fc8;
		}
		goto lab_0xd6fb0;
	}
}

// Address range: 0xd7018 - 0xd7178
int32_t function_d7018(int16_t *a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)-0x7808;     // 0xd7020
	int32_t v2 = 30;                      // r7
	int16_t *v3 = (int16_t *)(int32_t)a1; // 0xd7038
	int32_t v4 = 30;                      // 0xd7058
	// branch -> 0xd703c
	while (true) {
		int32_t v5 = (int32_t)v3; // 0xd703c
		if (v5 < *(int32_t *)v1) {
			int32_t v6 = v5 + v4; // 0xd7058
			int32_t v7 = 32 - v4; // 0xd7060
			int32_t v8 = v7;      // r3
			int32_t v9 = v6;      // r5
			v3 = (int16_t *)(v5 + 32);
			int32_t v10 = v7; // 0xd7088
			if (v7 % 2 != 0) {
				// 0xd7078
				v8 = v7 - 1;
				*(char *)v6 = 0;
				v9++;
				v10 = v8;
				// branch -> 0xd7088
			}
			// 0xd7088
			if (__asm_rlwinm_(v10, 0, 30, 30) != 0) {
				// 0xd7090
				v8 -= 2;
				*(int16_t *)v9 = 0;
				v9 += 2;
				// branch -> 0xd70a0
			}
			uint32_t v11 = v8;     // 0xd70a0
			int32_t v12 = v11 / 4; // 0xd70a4
			v8 = v12;
			int32_t v13 = 0; // r4
			int32_t v14;     // r29
			int32_t v15;     // r30
			int32_t v16;     // 0xd7134
			int32_t v17;     // 0xd714811
			int32_t v18;     // 0xd7100
			int32_t v19;     // 0xd7110
			int16_t *v20;    // 0xd7108
			int32_t v21;     // 0xd7118
			if (v11 >= 4) {
				int32_t v22 = __asm_rlwinm_(v12, 29, 3, 31); // 0xd70b0
				int32_t v23 = v22;                           // ctr
				int32_t v24;                                 // 0xd70ec
				int32_t v25;
				if (v22 == 0) {
					// 0xd70b0
					v25 = v9;
					v24 = v8;
					// branch -> 0xd70ec
				lab_0xd70ec:
					// 0xd70ec
					*(int32_t *)v25 = v13;
					int32_t v26 = v9 + 4;  // 0xd70f4
					int32_t v27 = v24 - 1; // 0xd70f8
					// branch -> 0xd70f0
					while (v27 != 0) {
						// 0xd70f0
						*(int32_t *)v26 = v13;
						v26 += 4;
						v27--;
						// continue -> 0xd70f0
					}
				lab_0xd70fc:
					// 0xd70fc
					v18 = v2 - 2;
					v2 = v18;
					v20 = (int16_t *)((int32_t)v3 - 800);
					v3 = v20;
					if (v18 <= -1) {
						// 0xd7110
						v19 = a2 - 64;
						v14 = v19;
						v15 = 16;
						v17 = 16;
						v16 = v19;
						int16_t *v28 = v20; // 0xd7118
						// branch -> 0xd7118
						int32_t result; // 0xd7144
						while (true) {
							// 0xd7118
							v21 = (int32_t)v28;
							int32_t v29;  // 0xd7148
							int32_t v30;  // 0xd714c
							int16_t *v31; // 0xd7144
							if (v21 < *(int32_t *)v1) {
							lab_0xd7134_3:
								// 0xd7134
								function_d9594((char *)&v3, 0, *(int32_t *)v16);
								v30 = v14;
								v29 = v15;
								v31 = v3;
								// branch -> 0xd7144
							} else {
							lab_0xd7128_3:;
								int16_t *v32 = (int16_t *)(v21 + 32); // 0xd712c
								v3 = v32;
								v30 = v16;
								v29 = v17;
								v31 = v32;
								// branch -> 0xd7144
							}
							// 0xd7144
							result = (int32_t)v31;
							int32_t v33 = v29 - 1; // 0xd7148
							v15 = v33;
							int32_t v34 = v30 - 4; // 0xd714c
							v14 = v34;
							int16_t *v35 = (int16_t *)(result - 800); // 0xd7154
							v3 = v35;
							if (v33 == 0) {
								// break -> 0xd715c
								break;
							}
							v17 = v33;
							v16 = v34;
							v28 = v35;
							// continue -> 0xd7118
						}
						// 0xd715c
						return result;
					}
				lab_0xd70fc_5:
					// 0xd70fc
					v4 = v18;
					v3 = v20;
					// branch -> 0xd703c
					continue;
				} else {
					// 0xd70bc
					*(int32_t *)v9 = v13;
					*(int32_t *)(v9 + 4) = v13;
					*(int32_t *)(v9 + 8) = v13;
					*(int32_t *)(v9 + 12) = v13;
					*(int32_t *)(v9 + 16) = v13;
					*(int32_t *)(v9 + 20) = v13;
					*(int32_t *)(v9 + 24) = v13;
					*(int32_t *)(v9 + 28) = v13;
					int32_t v36 = v9 + 32; // 0xd70dc
					v9 = v36;
					int32_t v37 = v23 - 1; // 0xd70e0
					// branch -> 0xd70bc
					while (v37 != 0) {
						// 0xd70bc
						*(int32_t *)v36 = v13;
						*(int32_t *)(v9 + 4) = v13;
						*(int32_t *)(v9 + 8) = v13;
						*(int32_t *)(v9 + 12) = v13;
						*(int32_t *)(v9 + 16) = v13;
						*(int32_t *)(v9 + 20) = v13;
						*(int32_t *)(v9 + 24) = v13;
						*(int32_t *)(v9 + 28) = v13;
						v36 = v9 + 32;
						v9 = v36;
						v37--;
						// continue -> 0xd70bc
					}
					int32_t v38 = v8 % 8; // 0xd70e4
					if (v38 == 0) {
						goto lab_0xd70fc;
					}
					v25 = v36;
					v24 = v38;
					goto lab_0xd70ec;
				}
			}
		lab_0xd70fc_4:
			// 0xd70fc
			v18 = v2 - 2;
			v2 = v18;
			v20 = (int16_t *)((int32_t)v3 - 800);
			v3 = v20;
			if (v18 > -1) {
				goto lab_0xd70fc_5;
			}
			// 0xd7110
			v19 = a2 - 64;
			v14 = v19;
			v15 = 16;
			v17 = 16;
			v16 = v19;
			// branch -> 0xd7118
			while (true) {
				// 0xd7118
				v21 = (int32_t)v20;
				if (v21 < *(int32_t *)v1) {
					goto lab_0xd7134_3;
				}
				goto lab_0xd7128_3;
			}
		} else {
			// 0xd704c
			v3 = (int16_t *)(v5 + 32);
			// branch -> 0xd70fc
			goto lab_0xd70fc_4;
		}
	}
}

// Address range: 0xd7178 - 0xd7244
int32_t function_d7178(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd7180
	int32_t v2 = 30;                  // r30
	int32_t v3 = result;              // bp+24
	int32_t v4 = &a2;                 // 0xd71bc
	if (result < *(int32_t *)v1) {
		// 0xd7228
		return result;
	}
	int32_t v5 = 30; // 0xd71c0
	while (true) {
		// 0xd71b4
		g39 = 32 - v5;
		function_da338((char *)&v3, v4, a3);
		int32_t v6 = a2;     // 0xd71c8
		int32_t v7 = v2;     // 0xd71cc
		int32_t v8 = v7 - 2; // 0xd71d4
		v2 = v8;
		int32_t v9 = __asm_rlwinm(v6, 0, 30, 30) + v6; // 0xd71dc
		int32_t result2 = v3 - (800 - v7);             // 0xd71e0
		a2 = v9;
		v3 = result2;
		if (v8 == 0 || v8 > 0) {
			// 0xd71b4
			if (result2 >= *(int32_t *)v1) {
				// 0xd71b4
				v5 = v2;
				// branch -> 0xd71b4
				continue;
			}
			// 0xd7228
			return result2;
		}
		// 0xd71f0
		v2 = 16;
		// branch -> 0xd71f4
		int32_t result3; // 0xd7214
		while (true) {
			// 0xd71f4
			if (result2 >= *(int32_t *)v1) {
				// 0xd7204
				function_d9754((char *)&v3, v4, a3);
				result3 = v3;
				int32_t v10 = v2 - 1; // 0xd7218
				v2 = v10;
				int32_t v11 = result3 - 800; // 0xd721c
				v3 = v11;
				if (v10 == 0) {
					// break -> 0xd7228
					break;
				}
				result2 = v11;
				// continue -> 0xd71f4
				continue;
			}
			// 0xd7228
			return result2;
		}
		// 0xd7228
		return result3;
	}
}

// Address range: 0xd7244 - 0xd7494
int32_t function_d7244(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd7244
	int32_t v2 = 30;                  // r11
	int32_t v3 = 0;                   // r3
	int32_t result = v3;
	if (result < *(int32_t *)v1) {
		// bb
		return result;
	}
	int32_t v4 = 30; // 0xd7258181
	while (true) {
		int32_t v5 = 32 - v4;                                 // 0xd7258
		int32_t v6 = v5;                                      // r10
		int32_t v7 = 0;                                       // 0xd7264
		int32_t v8 = v7;                                      // r8
		int32_t v9 = v3;                                      // 0xd726c
		int32_t v10 = v9;                                     // r9
		int32_t v11 = v6;                                     // 0xd7270
		int32_t v12 = v7 + __asm_rlwinm(v5, 0, 30, 30) + v11; // r4
		int32_t v13 = v11 / 4;                                // 0xd7278
		int32_t v14 = v13;                                    // r5
		int32_t v15 = v11;                                    // 0xd7304
		if (v5 >= 4) {
			int32_t v16 = __asm_rlwinm_(v13, 29, 3, 31); // 0xd7280
			int32_t v17 = v16;                           // ctr
			int32_t v18 = v14;                           // 0xd7288
			int32_t v19 = v10;
			int32_t v20; // 0xd72e8
			if (v16 == 0) {
				v20 = v18;
			lab_0xd72e8:;
				int32_t v21 = v8; // 0xd72ec
				v8 = v21 + 4;
				*(int32_t *)v19 = *(int32_t *)v21;
				int32_t v22 = v10 + 4; // 0xd72f8
				v10 = v22;
				int32_t v23 = v20 - 1; // 0xd72fc
				// branch -> 0xd72ec
				while (v23 != 0) {
					// 0xd72ec
					v21 = v8;
					v8 = v21 + 4;
					*(int32_t *)v22 = *(int32_t *)v21;
					v22 = v10 + 4;
					v10 = v22;
					v23--;
					// continue -> 0xd72ec
				}
			lab_0xd7300:
				// 0xd7300
				// branch -> 0xd7304
			lab_0xd7304:
				// 0xd7304
				if (__asm_rlwinm_(-4 * v18 + v6, 0, 30, 30) != 0) {
				lab_0xd730c:
					// 0xd730c
					*(int16_t *)v10 = *(int16_t *)v8;
					// branch -> 0xd7314
				}
			lab_0xd7314:;
				int32_t v24 = v2;      // 0xd7314
				int32_t v25 = v24 - 2; // 0xd7318
				v2 = v25;
				int32_t result2 = v11 + v9 - (800 - v24); // 0xd731c
				v3 = result2;
				if (v25 <= -1) {
					// 0xd7324
					v17 = 4;
					v14 = 16;
					// branch -> 0xd7330
					int32_t result6; // 0xd7488
					while (true) {
						// 0xd7330
						if (result2 < *(int32_t *)v1) {
							// bb150
							return result2;
						}
						// 0xd733c
						*(int32_t *)result2 = *(int32_t *)v12;
						*(int32_t *)(v3 + 4) = *(int32_t *)(v12 + 4);
						*(int32_t *)(v3 + 8) = *(int32_t *)(v12 + 8);
						*(int32_t *)(v3 + 12) = *(int32_t *)(v12 + 12);
						*(int32_t *)(v3 + 16) = *(int32_t *)(v12 + 16);
						*(int32_t *)(v3 + 20) = *(int32_t *)(v12 + 20);
						*(int32_t *)(v3 + 24) = *(int32_t *)(v12 + 24);
						int32_t v26 = v12; // 0xd7374
						v12 = v26 + 32;
						*(int32_t *)(v3 + 28) = *(int32_t *)(v26 + 28);
						int32_t result3 = v3 - 768; // 0xd7380
						v3 = result3;
						if (result3 < *(int32_t *)v1) {
							// bb151
							return result3;
						}
						// 0xd7390
						*(int32_t *)result3 = *(int32_t *)v12;
						*(int32_t *)(v3 + 4) = *(int32_t *)(v12 + 4);
						*(int32_t *)(v3 + 8) = *(int32_t *)(v12 + 8);
						*(int32_t *)(v3 + 12) = *(int32_t *)(v12 + 12);
						*(int32_t *)(v3 + 16) = *(int32_t *)(v12 + 16);
						*(int32_t *)(v3 + 20) = *(int32_t *)(v12 + 20);
						*(int32_t *)(v3 + 24) = *(int32_t *)(v12 + 24);
						int32_t v27 = v12; // 0xd73cc
						v12 = v27 + 32;
						*(int32_t *)(v3 + 28) = *(int32_t *)(v27 + 28);
						int32_t result4 = v3 - 768; // 0xd73d8
						v3 = result4;
						if (result4 < *(int32_t *)v1) {
							// bb152
							return result4;
						}
						// 0xd73e8
						*(int32_t *)result4 = *(int32_t *)v12;
						*(int32_t *)(v3 + 4) = *(int32_t *)(v12 + 4);
						*(int32_t *)(v3 + 8) = *(int32_t *)(v12 + 8);
						*(int32_t *)(v3 + 12) = *(int32_t *)(v12 + 12);
						*(int32_t *)(v3 + 16) = *(int32_t *)(v12 + 16);
						*(int32_t *)(v3 + 20) = *(int32_t *)(v12 + 20);
						*(int32_t *)(v3 + 24) = *(int32_t *)(v12 + 24);
						int32_t v28 = v12; // 0xd7424
						v12 = v28 + 32;
						*(int32_t *)(v3 + 28) = *(int32_t *)(v28 + 28);
						int32_t result5 = v3 - 768; // 0xd7430
						v3 = result5;
						if (result5 < *(int32_t *)v1) {
							// bb153
							return result5;
						}
						// 0xd7440
						v14 -= 3;
						*(int32_t *)result5 = *(int32_t *)v12;
						*(int32_t *)(v3 + 4) = *(int32_t *)(v12 + 4);
						*(int32_t *)(v3 + 8) = *(int32_t *)(v12 + 8);
						*(int32_t *)(v3 + 12) = *(int32_t *)(v12 + 12);
						*(int32_t *)(v3 + 16) = *(int32_t *)(v12 + 16);
						*(int32_t *)(v3 + 20) = *(int32_t *)(v12 + 20);
						*(int32_t *)(v3 + 24) = *(int32_t *)(v12 + 24);
						int32_t v29 = v12; // 0xd747c
						v12 = v29 + 32;
						*(int32_t *)(v3 + 28) = *(int32_t *)(v29 + 28);
						result6 = v3 - 768;
						v3 = result6;
						int32_t v30 = v17 - 1; // 0xd748c
						v17 = v30;
						if (v30 == 0) {
							// break -> 0xd7490
							break;
						}
						result2 = result6;
						// continue -> 0xd7330
					}
					// 0xd7490
					return result6;
				}
				// 0xd7314
				if (result2 < *(int32_t *)v1) {
					// break -> bb
					break;
				}
				v4 = v25;
				// continue -> 0xd7258
				continue;
			} else {
				*(int32_t *)v19 = *(int32_t *)v8;
				*(int32_t *)(v10 + 4) = *(int32_t *)(v8 + 4);
				*(int32_t *)(v10 + 8) = *(int32_t *)(v8 + 8);
				*(int32_t *)(v10 + 12) = *(int32_t *)(v8 + 12);
				*(int32_t *)(v10 + 16) = *(int32_t *)(v8 + 16);
				*(int32_t *)(v10 + 20) = *(int32_t *)(v8 + 20);
				*(int32_t *)(v10 + 24) = *(int32_t *)(v8 + 24);
				int32_t v31 = v8; // 0xd72cc
				v8 = v31 + 32;
				*(int32_t *)(v10 + 28) = *(int32_t *)(v31 + 28);
				int32_t v32 = v10 + 32; // 0xd72d8
				v10 = v32;
				int32_t v33 = v17 - 1; // 0xd72dc
				while (v33 != 0) {
					// 0xd7294
					*(int32_t *)v32 = *(int32_t *)v8;
					*(int32_t *)(v10 + 4) = *(int32_t *)(v8 + 4);
					*(int32_t *)(v10 + 8) = *(int32_t *)(v8 + 8);
					*(int32_t *)(v10 + 12) = *(int32_t *)(v8 + 12);
					*(int32_t *)(v10 + 16) = *(int32_t *)(v8 + 16);
					*(int32_t *)(v10 + 20) = *(int32_t *)(v8 + 20);
					*(int32_t *)(v10 + 24) = *(int32_t *)(v8 + 24);
					v31 = v8;
					v8 = v31 + 32;
					*(int32_t *)(v10 + 28) = *(int32_t *)(v31 + 28);
					v32 = v10 + 32;
					v10 = v32;
					v33--;
					// continue -> 0xd7294
				}
				int32_t v34 = v14 % 8; // 0xd72e0
				if (v34 == 0) {
					goto lab_0xd7300;
				}
				v19 = v32;
				v20 = v34;
				goto lab_0xd72e8;
			}
		}
		// 0xd7304
		if (__asm_rlwinm_(v15, 0, 30, 30) == 0) {
			goto lab_0xd7314;
		}
		goto lab_0xd730c;
	}
}

// Address range: 0xd7494 - 0xd7634
int32_t function_d7494(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd7494
	int32_t v2 = 30;                  // r8
	int32_t result = 0;
	if (result < *(int32_t *)v1) {
		// bb
		return result;
	}
	int32_t v3 = 30; // 0xd74a8181
	while (true) {
		int32_t v4 = 32 - v3;     // 0xd74a8
		int32_t v5 = v4;          // r4
		int32_t v6 = result;      // r7
		int32_t v7 = v4 + result; // r3
		int32_t v8 = v4;          // 0xd74cc
		if (v4 % 2 != 0) {
			// 0xd74bc
			v5 = v4 - 1;
			*(char *)result = 0;
			v6++;
			v8 = v5;
			// branch -> 0xd74cc
		}
		// 0xd74cc
		if (__asm_rlwinm_(v8, 0, 30, 30) != 0) {
			// 0xd74d4
			v5 -= 2;
			*(int16_t *)v6 = 0;
			v6 += 2;
			// branch -> 0xd74e4
		}
		uint32_t v9 = v5;     // 0xd74e4
		int32_t v10 = v9 / 4; // 0xd74e8
		v5 = v10;
		int32_t v11 = 0; // r5
		int32_t v12;     // ctr
		int32_t v13;     // r0
		int32_t v14;     // 0xd7540
		int32_t v15;     // 0xd7544
		int32_t v16;     // 0xd7548
		int32_t result2; // 0xd7568
		if (v9 >= 4) {
			int32_t v17 = __asm_rlwinm_(v10, 29, 3, 31); // 0xd74f4
			v12 = v17;
			int32_t v18; // 0xd7530
			int32_t v19;
			if (v17 == 0) {
				// 0xd74f4
				v19 = v6;
				v18 = v5;
				// branch -> 0xd7530
			lab_0xd7530:
				// 0xd7530
				*(int32_t *)v19 = v11;
				int32_t v20 = v6 + 4;  // 0xd7538
				int32_t v21 = v18 - 1; // 0xd753c
				// branch -> 0xd7534
				while (v21 != 0) {
					// 0xd7534
					*(int32_t *)v20 = v11;
					v20 += 4;
					v21--;
					// continue -> 0xd7534
				}
			lab_0xd7540:
				// 0xd7540
				v14 = v2;
				v15 = v14 - 2;
				v2 = v15;
				v16 = v7 - (800 - v14);
				v7 = v16;
				if (v15 <= -1) {
					// 0xd7550
					v12 = 4;
					v11 = 16;
					v13 = 0;
					result2 = v16;
					// branch -> 0xd7560
					int32_t result6; // 0xd7628
					while (true) {
						// 0xd7560
						if (result2 < *(int32_t *)v1) {
							// bb150
							return result2;
						}
					lab_0xd756c_2:
						// 0xd756c
						*(int32_t *)(result2 + 28) = v13;
						*(int32_t *)(v7 + 24) = v13;
						*(int32_t *)(v7 + 20) = v13;
						*(int32_t *)(v7 + 16) = v13;
						*(int32_t *)(v7 + 12) = v13;
						*(int32_t *)(v7 + 8) = v13;
						*(int32_t *)(v7 + 4) = v13;
						*(int32_t *)v7 = v13;
						int32_t v22 = v7;            // 0xd758c
						int32_t result3 = v22 - 768; // 0xd758c
						v7 = result3;
						if (result3 < *(int32_t *)v1) {
							// bb151
							return result3;
						}
						// 0xd759c
						*(int32_t *)(v22 - 740) = v13;
						*(int32_t *)(v7 + 24) = v13;
						*(int32_t *)(v7 + 20) = v13;
						*(int32_t *)(v7 + 16) = v13;
						*(int32_t *)(v7 + 12) = v13;
						*(int32_t *)(v7 + 8) = v13;
						*(int32_t *)(v7 + 4) = v13;
						*(int32_t *)v7 = v13;
						int32_t v23 = v7;            // 0xd75c0
						int32_t result4 = v23 - 768; // 0xd75c0
						v7 = result4;
						if (result4 < *(int32_t *)v1) {
							// bb152
							return result4;
						}
						// 0xd75d0
						*(int32_t *)(v23 - 740) = v13;
						*(int32_t *)(v7 + 24) = v13;
						*(int32_t *)(v7 + 20) = v13;
						*(int32_t *)(v7 + 16) = v13;
						*(int32_t *)(v7 + 12) = v13;
						*(int32_t *)(v7 + 8) = v13;
						*(int32_t *)(v7 + 4) = v13;
						*(int32_t *)v7 = v13;
						int32_t v24 = v7;            // 0xd75f4
						int32_t result5 = v24 - 768; // 0xd75f4
						v7 = result5;
						if (result5 < *(int32_t *)v1) {
							// bb153
							return result5;
						}
						// 0xd7604
						*(int32_t *)(v24 - 740) = v13;
						v11 -= 3;
						*(int32_t *)(v7 + 24) = v13;
						*(int32_t *)(v7 + 20) = v13;
						*(int32_t *)(v7 + 16) = v13;
						*(int32_t *)(v7 + 12) = v13;
						*(int32_t *)(v7 + 8) = v13;
						*(int32_t *)(v7 + 4) = v13;
						*(int32_t *)v7 = v13;
						result6 = v7 - 768;
						v7 = result6;
						int32_t v25 = v12 - 1; // 0xd762c
						v12 = v25;
						if (v25 == 0) {
							// break -> 0xd7630
							break;
						}
						result2 = result6;
						// continue -> 0xd7560
					}
					// 0xd7630
					return result6;
				}
			lab_0xd7540_3:
				// 0xd7540
				if (v16 < *(int32_t *)v1) {
					// break -> bb
					break;
				}
				result = v16;
				v3 = v15;
				// continue -> 0xd74a8
				continue;
			} else {
				// 0xd7500
				*(int32_t *)v6 = v11;
				*(int32_t *)(v6 + 4) = v11;
				*(int32_t *)(v6 + 8) = v11;
				*(int32_t *)(v6 + 12) = v11;
				*(int32_t *)(v6 + 16) = v11;
				*(int32_t *)(v6 + 20) = v11;
				*(int32_t *)(v6 + 24) = v11;
				*(int32_t *)(v6 + 28) = v11;
				int32_t v26 = v6 + 32; // 0xd7520
				v6 = v26;
				int32_t v27 = v12 - 1; // 0xd7524
				// branch -> 0xd7500
				while (v27 != 0) {
					// 0xd7500
					*(int32_t *)v26 = v11;
					*(int32_t *)(v6 + 4) = v11;
					*(int32_t *)(v6 + 8) = v11;
					*(int32_t *)(v6 + 12) = v11;
					*(int32_t *)(v6 + 16) = v11;
					*(int32_t *)(v6 + 20) = v11;
					*(int32_t *)(v6 + 24) = v11;
					*(int32_t *)(v6 + 28) = v11;
					v26 = v6 + 32;
					v6 = v26;
					v27--;
					// continue -> 0xd7500
				}
				int32_t v28 = v5 % 8; // 0xd7528
				if (v28 == 0) {
					goto lab_0xd7540;
				}
				v19 = v26;
				v18 = v28;
				goto lab_0xd7530;
			}
		}
		// 0xd7540
		v14 = v2;
		v15 = v14 - 2;
		v2 = v15;
		v16 = v7 - (800 - v14);
		v7 = v16;
		if (v15 > -1) {
			goto lab_0xd7540_3;
		}
		// 0xd7550
		v12 = 4;
		v11 = 16;
		v13 = 0;
		result2 = v16;
		// branch -> 0xd7560
		while (true) {
			// 0xd7560
			if (result2 >= *(int32_t *)v1) {
				goto lab_0xd756c_2;
			}
			// bb150
			return result2;
		}
	}
}

// Address range: 0xd7634 - 0xd774c
int32_t function_d7634(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7808); // r31
	int32_t v2;                              // bp-24
	int32_t v3 = &v2;                        // 0xd7660
	int32_t v4 = &a2;                        // 0xd7668
	v2 = 30;
	int32_t v5; // 0xd76ec
	int32_t v6; // 0xd77147
	if (function_d0424(&a1, v4, v3, 0) != 0) {
		int32_t v7 = v2;
		if (v7 > -1) {
			g39 = 32 - v7;
			function_da338((char *)&a1, v4, a3);
			int32_t v8 = v2;      // 0xd7694
			int32_t v9 = a2;      // 0xd7698
			int32_t v10 = v8 - 2; // 0xd76a8
			a2 = __asm_rlwinm(v9, 0, 30, 30) + v9;
			a1 -= (800 - v8);
			v2 = v10;
			// branch -> 0xd7680
			while (v10 > 0xffffffff) {
				// 0xd7680
				g39 = 32 - v10;
				function_da338((char *)&a1, v4, a3);
				v8 = v2;
				v9 = a2;
				v10 = v8 - 2;
				a2 = __asm_rlwinm(v9, 0, 30, 30) + v9;
				a1 -= (800 - v8);
				v2 = v10;
				// continue -> 0xd7680
			}
			// 0xd76cc
			v2 = 16;
			v6 = 16;
			v5 = a1;
			// branch -> 0xd76d8
			int32_t result; // 0xd7748
			while (true) {
				// 0xd76d8
				int32_t v11; // 0xd7710
				if (v5 < *(int32_t *)v1) {
				lab_0xd7700:
					// 0xd7700
					function_d9754((char *)&a1, v4, a3);
					result = v2;
					v11 = a1;
					// branch -> 0xd7710
				} else {
				lab_0xd76e8:;
					int32_t v12 = v5 + 32; // 0xd76ec
					a1 = v12;
					a2 += 32;
					result = v6;
					v11 = v12;
					// branch -> 0xd7710
				}
				int32_t v13 = v11 - 800;  // 0xd7718
				int32_t v14 = result - 1; // 0xd771c
				a1 = v13;
				v2 = v14;
				if (v14 == 0) {
					// break -> 0xd7734
					break;
				}
				v6 = v14;
				v5 = v13;
				// continue -> 0xd76d8
			}
			// 0xd7734
			return result;
		}
	}
	// 0xd76cc
	v2 = 16;
	v6 = 16;
	v5 = a1;
	// branch -> 0xd76d8
	while (true) {
		// 0xd76d8
		if (v5 < *(int32_t *)v1) {
			goto lab_0xd7700;
		}
		goto lab_0xd76e8;
	}
}

// Address range: 0xd774c - 0xd797c
int32_t function_d774c(int16_t *a1, int32_t a2)
{
	int16_t *v1 = (int16_t *)(int32_t)a1; // bp+24
	int32_t v2;                           // bp-24
	int32_t v3 = &v2;                     // 0xd7770
	int16_t *v4 = (int16_t *)a2;          // bp+28
	v2 = 30;
	if (function_d0424((int32_t *)&v1, (int32_t)&v4, v3, 0) != 0) {
		int32_t v5 = v2;
		if (v5 > -1) {
			while (true) {
				int32_t v6 = 32 - v5;                                 // 0xd7790
				int32_t v7 = v6;                                      // r7
				int32_t v8 = (int32_t)v4;                             // 0xd7794
				int32_t v9 = v8;                                      // r5
				int32_t v10 = (int32_t)v1;                            // 0xd779c
				int32_t v11 = v10;                                    // r6
				uint32_t v12 = v7;                                    // 0xd77a4
				int32_t v13 = v8 + __asm_rlwinm(v6, 0, 30, 30) + v12; // 0xd77ac
				v1 = (int16_t *)(v12 + v10);
				int32_t v14 = v12 / 4; // 0xd77b4
				int32_t v15 = v14;     // r3
				v4 = (int16_t *)v13;
				int32_t v16 = v12; // 0xd7844
				if (v12 >= 4) {
					int32_t v17 = __asm_rlwinm_(v14, 29, 3, 31); // 0xd77c0
					int32_t v18 = v17;                           // ctr
					int32_t v19 = v15;                           // 0xd77c8
					int32_t v20 = v11;
					int32_t v21; // 0xd7828
					if (v17 == 0) {
						v21 = v19;
					lab_0xd7828:;
						int32_t v22 = v9; // 0xd782c
						v9 = v22 + 4;
						*(int32_t *)v20 = *(int32_t *)v22;
						int32_t v23 = v11 + 4; // 0xd7838
						v11 = v23;
						int32_t v24 = v21 - 1; // 0xd783c
						// branch -> 0xd782c
						while (v24 != 0) {
							// 0xd782c
							v22 = v9;
							v9 = v22 + 4;
							*(int32_t *)v23 = *(int32_t *)v22;
							v23 = v11 + 4;
							v11 = v23;
							v24--;
							// continue -> 0xd782c
						}
					lab_0xd7840:
						// 0xd7840
						// branch -> 0xd7844
					lab_0xd7844:
						// 0xd7844
						if (__asm_rlwinm_(-4 * v19 + v7, 0, 30, 30) != 0) {
						lab_0xd784c:
							// 0xd784c
							*(int16_t *)v11 = *(int16_t *)v9;
							// branch -> 0xd7854
						}
					lab_0xd7854:;
						int32_t v25 = v2;      // 0xd7854
						int32_t v26 = v25 - 2; // 0xd7860
						v2 = v26;
						v1 = (int16_t *)((int32_t)v1 - (800 - v25));
						if (v26 <= 0xffffffff) {
							// break -> 0xd787c
							break;
						}
						v5 = v26;
						// continue -> 0xd7790
						continue;
					} else {
						*(int32_t *)v20 = *(int32_t *)v9;
						*(int32_t *)(v11 + 4) = *(int32_t *)(v9 + 4);
						*(int32_t *)(v11 + 8) = *(int32_t *)(v9 + 8);
						*(int32_t *)(v11 + 12) = *(int32_t *)(v9 + 12);
						*(int32_t *)(v11 + 16) = *(int32_t *)(v9 + 16);
						*(int32_t *)(v11 + 20) = *(int32_t *)(v9 + 20);
						*(int32_t *)(v11 + 24) = *(int32_t *)(v9 + 24);
						int32_t v27 = v9; // 0xd780c
						v9 = v27 + 32;
						*(int32_t *)(v11 + 28) = *(int32_t *)(v27 + 28);
						int32_t v28 = v11 + 32; // 0xd7818
						v11 = v28;
						int32_t v29 = v18 - 1; // 0xd781c
						while (v29 != 0) {
							// 0xd77d4
							*(int32_t *)v28 = *(int32_t *)v9;
							*(int32_t *)(v11 + 4) = *(int32_t *)(v9 + 4);
							*(int32_t *)(v11 + 8) = *(int32_t *)(v9 + 8);
							*(int32_t *)(v11 + 12) = *(int32_t *)(v9 + 12);
							*(int32_t *)(v11 + 16) = *(int32_t *)(v9 + 16);
							*(int32_t *)(v11 + 20) = *(int32_t *)(v9 + 20);
							*(int32_t *)(v11 + 24) = *(int32_t *)(v9 + 24);
							v27 = v9;
							v9 = v27 + 32;
							*(int32_t *)(v11 + 28) = *(int32_t *)(v27 + 28);
							v28 = v11 + 32;
							v11 = v28;
							v29--;
							// continue -> 0xd77d4
						}
						int32_t v30 = v15 % 8; // 0xd7820
						if (v30 == 0) {
							goto lab_0xd7840;
						}
						v20 = v28;
						v21 = v30;
						goto lab_0xd7828;
					}
				}
				// 0xd7844
				if (__asm_rlwinm_(v16, 0, 30, 30) == 0) {
					goto lab_0xd7854;
				}
				goto lab_0xd784c;
			}
		}
	}
	// 0xd787c
	v2 = 16;
	int32_t v31 = 16;  // 0xd794815
	int16_t *v32 = v4; // 0xd78b0
	int16_t *v33 = v1; // 0xd7888
	// branch -> 0xd7888
	int32_t result; // 0xd7978
	while (true) {
		int32_t v34 = (int32_t)v33; // 0xd7888
		int32_t v35 = (int32_t)v32; // 0xd78b0
		int32_t v36;
		int16_t *v37; // 0xd793c
		if (v34 < *(int32_t *)*(int32_t *)(g23 - 0x7808)) {
			// 0xd78b0
			*(int32_t *)v33 = *(int32_t *)v32;
			*(int32_t *)((int32_t)v1 + 4) = *(int32_t *)((int32_t)v4 + 4);
			*(int32_t *)((int32_t)v1 + 8) = *(int32_t *)((int32_t)v4 + 8);
			*(int32_t *)((int32_t)v1 + 12) = *(int32_t *)((int32_t)v4 + 12);
			*(int32_t *)((int32_t)v1 + 16) = *(int32_t *)((int32_t)v4 + 16);
			*(int32_t *)((int32_t)v1 + 20) = *(int32_t *)((int32_t)v4 + 20);
			*(int32_t *)((int32_t)v1 + 24) = *(int32_t *)((int32_t)v4 + 24);
			*(int32_t *)((int32_t)v1 + 28) = *(int32_t *)((int32_t)v4 + 28);
			v37 = (int16_t *)((int32_t)v1 + 32);
			v1 = v37;
			result = v2;
			v36 = (int32_t)v4 + 32;
			// branch -> 0xd7944
		} else {
			int16_t *v38 = (int16_t *)(v34 + 32); // 0xd78a0
			v1 = v38;
			result = v31;
			v37 = v38;
			v36 = v35 + 32;
			// branch -> 0xd7944
		}
		int16_t *v39 = (int16_t *)v36;
		v4 = v39;
		int32_t v40 = result - 1;                       // 0xd7950
		int16_t *v41 = (int16_t *)((int32_t)v37 - 800); // 0xd7954
		v1 = v41;
		v2 = v40;
		if (v40 == 0) {
			// break -> 0xd7968
			break;
		}
		v31 = v40;
		v32 = v39;
		v33 = v41;
		// continue -> 0xd7888
	}
	// 0xd7968
	return result;
}

// Address range: 0xd797c - 0xd7b58
int32_t function_d797c(void)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd797c
	int32_t v2 = 30;                  // r8
	int32_t v3 = 30;                  // 0xd799c
	int32_t v4 = 0;                   // 0xd79b8
	// branch -> 0xd7984
	while (true) {
		int32_t v5 = 32 - v3; // 0xd799c
		int32_t v6;           // r3
		if (v4 < *(int32_t *)v1) {
			int32_t v7 = v5; // r4
			int32_t v8 = v4; // r7
			v6 = v5 + v4;
			int32_t v9 = v5; // 0xd79c0
			if (v5 % 2 != 0) {
				// 0xd79b0
				v7 = v5 - 1;
				*(char *)v4 = 0;
				v8++;
				v9 = v7;
				// branch -> 0xd79c0
			}
			// 0xd79c0
			if (__asm_rlwinm_(v9, 0, 30, 30) != 0) {
				// 0xd79c8
				v7 -= 2;
				*(int16_t *)v8 = 0;
				v8 += 2;
				// branch -> 0xd79d8
			}
			uint32_t v10 = v7;     // 0xd79d8
			int32_t v11 = v10 / 4; // 0xd79dc
			v7 = v11;
			int32_t v12 = 0; // r5
			int32_t v13;     // ctr
			int32_t v14;     // r0
			int32_t v15;
			int32_t v16; // 0xd7a34
			int32_t v17; // 0xd7a54
			int32_t v18; // 0xd7a8c
			int32_t v19; // 0xd7a38
			int32_t v20; // 0xd7a68
			int32_t v21; // 0xd7a3c
			if (v10 >= 4) {
				int32_t v22 = __asm_rlwinm_(v11, 29, 3, 31); // 0xd79e8
				v13 = v22;
				int32_t v23; // 0xd7a24
				int32_t v24;
				if (v22 == 0) {
					// 0xd79e8
					v24 = v8;
					v23 = v7;
					// branch -> 0xd7a24
				lab_0xd7a24:
					// 0xd7a24
					*(int32_t *)v24 = v12;
					int32_t v25 = v8 + 4;  // 0xd7a2c
					int32_t v26 = v23 - 1; // 0xd7a30
					// branch -> 0xd7a28
					while (v26 != 0) {
						// 0xd7a28
						*(int32_t *)v25 = v12;
						v25 += 4;
						v26--;
						// continue -> 0xd7a28
					}
				lab_0xd7a34:
					// 0xd7a34
					v16 = v2;
					v19 = v16 - 2;
					v2 = v19;
					v21 = v6 - (800 - v16);
					v6 = v21;
					if (v19 <= -1) {
						// 0xd7a44
						v13 = 4;
						v12 = 16;
						v14 = 0;
						v20 = v21;
						// branch -> 0xd7a54
						int32_t result; // 0xd7b48
						while (true) {
							// 0xd7a54
							v17 = v1;
							v18 = v17;
							v15 = v20;
							if (v20 < *(int32_t *)v17) {
							lab_0xd7a68_3:
								// 0xd7a68
								*(int32_t *)(v20 + 28) = v14;
								*(int32_t *)(v6 + 24) = v14;
								*(int32_t *)(v6 + 20) = v14;
								*(int32_t *)(v6 + 16) = v14;
								*(int32_t *)(v6 + 12) = v14;
								*(int32_t *)(v6 + 8) = v14;
								*(int32_t *)(v6 + 4) = v14;
								*(int32_t *)v6 = v14;
								v18 = v1;
								v15 = v6;
								// branch -> 0xd7a8c
							}
						lab_0xd7a8c_3:;
							int32_t v27 = v15 - 768; // 0xd7a90
							v6 = v27;
							int32_t v28 = v18; // 0xd7ac8
							int32_t v29 = v27;
							if (v27 < *(int32_t *)v18) {
								// 0xd7aa4
								*(int32_t *)(v15 - 740) = v14;
								*(int32_t *)(v6 + 24) = v14;
								*(int32_t *)(v6 + 20) = v14;
								*(int32_t *)(v6 + 16) = v14;
								*(int32_t *)(v6 + 12) = v14;
								*(int32_t *)(v6 + 8) = v14;
								*(int32_t *)(v6 + 4) = v14;
								*(int32_t *)v6 = v14;
								v28 = v1;
								v29 = v6;
								// branch -> 0xd7ac8
							}
							int32_t v30 = v29 - 768; // 0xd7acc
							v6 = v30;
							int32_t v31 = v12 - 1; // 0xd7ad0
							v12 = v31;
							int32_t v32 = v28; // 0xd7b08
							int32_t v33 = v30;
							if (v30 < *(int32_t *)v28) {
								// 0xd7ae4
								*(int32_t *)(v29 - 740) = v14;
								*(int32_t *)(v6 + 24) = v14;
								*(int32_t *)(v6 + 20) = v14;
								*(int32_t *)(v6 + 16) = v14;
								*(int32_t *)(v6 + 12) = v14;
								*(int32_t *)(v6 + 8) = v14;
								*(int32_t *)(v6 + 4) = v14;
								*(int32_t *)v6 = v14;
								v31 = v12;
								v32 = v1;
								v33 = v6;
								// branch -> 0xd7b08
							}
							int32_t v34 = v33 - 768; // 0xd7b0c
							v6 = v34;
							int32_t v35 = v31 - 1; // 0xd7b10
							v12 = v35;
							int32_t v36 = v34;
							if (v34 < *(int32_t *)v32) {
								// 0xd7b24
								*(int32_t *)(v33 - 740) = v14;
								*(int32_t *)(v6 + 24) = v14;
								*(int32_t *)(v6 + 20) = v14;
								*(int32_t *)(v6 + 16) = v14;
								*(int32_t *)(v6 + 12) = v14;
								*(int32_t *)(v6 + 8) = v14;
								*(int32_t *)(v6 + 4) = v14;
								*(int32_t *)v6 = v14;
								v35 = v12;
								v36 = v6;
								// branch -> 0xd7b48
							}
							// 0xd7b48
							result = v36 - 768;
							v6 = result;
							v12 = v35 - 1;
							int32_t v37 = v13 - 1; // 0xd7b50
							v13 = v37;
							if (v37 == 0) {
								// break -> 0xd7b54
								break;
							}
							v20 = result;
							// continue -> 0xd7a54
						}
						// 0xd7b54
						return result;
					}
				lab_0xd7a34_5:
					// 0xd7a34
					v3 = v19;
					v4 = v21;
					// branch -> 0xd7984
					continue;
				} else {
					// 0xd79f4
					*(int32_t *)v8 = v12;
					*(int32_t *)(v8 + 4) = v12;
					*(int32_t *)(v8 + 8) = v12;
					*(int32_t *)(v8 + 12) = v12;
					*(int32_t *)(v8 + 16) = v12;
					*(int32_t *)(v8 + 20) = v12;
					*(int32_t *)(v8 + 24) = v12;
					*(int32_t *)(v8 + 28) = v12;
					int32_t v38 = v8 + 32; // 0xd7a14
					v8 = v38;
					int32_t v39 = v13 - 1; // 0xd7a18
					// branch -> 0xd79f4
					while (v39 != 0) {
						// 0xd79f4
						*(int32_t *)v38 = v12;
						*(int32_t *)(v8 + 4) = v12;
						*(int32_t *)(v8 + 8) = v12;
						*(int32_t *)(v8 + 12) = v12;
						*(int32_t *)(v8 + 16) = v12;
						*(int32_t *)(v8 + 20) = v12;
						*(int32_t *)(v8 + 24) = v12;
						*(int32_t *)(v8 + 28) = v12;
						v38 = v8 + 32;
						v8 = v38;
						v39--;
						// continue -> 0xd79f4
					}
					int32_t v40 = v7 % 8; // 0xd7a1c
					if (v40 == 0) {
						goto lab_0xd7a34;
					}
					v24 = v38;
					v23 = v40;
					goto lab_0xd7a24;
				}
			}
		lab_0xd7a34_4:
			// 0xd7a34
			v16 = v2;
			v19 = v16 - 2;
			v2 = v19;
			v21 = v6 - (800 - v16);
			v6 = v21;
			if (v19 > -1) {
				goto lab_0xd7a34_5;
			}
			// 0xd7a44
			v13 = 4;
			v12 = 16;
			v14 = 0;
			v20 = v21;
			// branch -> 0xd7a54
			while (true) {
				// 0xd7a54
				v17 = v1;
				if (v20 < *(int32_t *)v17) {
					goto lab_0xd7a68_3;
				}
				v18 = v17;
				v15 = v20;
				goto lab_0xd7a8c_3;
			}
		} else {
			// 0xd7990
			v6 = v4 + v5;
			// branch -> 0xd7a34
			goto lab_0xd7a34_4;
		}
	}
}

// Address range: 0xd7b58 - 0xd7ca4
int32_t function_d7b58(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd7b68
	int32_t v4 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t v5 = &a2;    // 0xd7bec
	int32_t result = a1; // 0xd7b94
	// branch -> 0xd7b94
	int32_t v6; // 0xd7c14
	while (true) {
		// 0xd7b94
		if (result < *(int32_t *)v2) {
			// 0xd7c84
			return result;
		}
		int32_t *v7 = (int32_t *)v3; // 0xd7ba4
		*v7 = *v7 ^ 1;
		g39 = 32 - v4;
		int32_t v8;
		if (*(int32_t *)v3 == 0) {
			// 0xd7be4
			function_da6a4((char *)&a1, v5, a3);
			int32_t v9 = a2; // 0xd7bf8
			v8 = __asm_rlwinm(v9, 0, 30, 30) + v9;
			// branch -> 0xd7c08
		} else {
			// 0xd7bbc
			function_da538((char *)&a1, v5, a3);
			v8 = __asm_rlwinm(a2, 0, 30, 30) + a2;
			// branch -> 0xd7c08
		}
		// 0xd7c08
		a2 = v8;
		int32_t v10 = v4;      // 0xd7c0c
		int32_t v11 = v10 - 2; // 0xd7c10
		v4 = v11;
		v6 = a1 - (800 - v10);
		a1 = v6;
		if (v11 <= 0xffffffff) {
			// break -> 0xd7c20
			break;
		}
		result = v6;
		// continue -> 0xd7b94
	}
	// 0xd7c20
	v4 = 8;
	int32_t result2 = v6; // 0xd7c24
	// branch -> 0xd7c24
	int32_t result4; // 0xd7c70
	while (true) {
		// 0xd7c24
		if (result2 < *(int32_t *)v2) {
			// 0xd7c84
			return result2;
		}
		// 0xd7c34
		function_d99d4(&a1, v5, a3);
		int32_t result3 = a1 - 800; // 0xd7c48
		a1 = result3;
		if (result3 < *(int32_t *)v2) {
			// 0xd7c84
			return result3;
		}
		// 0xd7c60
		function_d98f4((char *)&a1, v5, a3);
		result4 = a1;
		int32_t v12 = v4 - 1; // 0xd7c74
		v4 = v12;
		int32_t v13 = result4 - 800; // 0xd7c78
		a1 = v13;
		if (v12 == 0) {
			// break -> 0xd7c84
			break;
		}
		result2 = v13;
		// continue -> 0xd7c24
	}
	// 0xd7c84
	return result4;
}

// Address range: 0xd7ca4 - 0xd7de4
int32_t function_d7ca4(int32_t a1, int32_t a2)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd7cb4
	int32_t v4 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t v5 = &a2;    // 0xd7d38
	int32_t result = a1; // 0xd7cdc
	// branch -> 0xd7cdc
	int32_t v6; // 0xd7d5c
	while (true) {
		// 0xd7cdc
		if (result < *(int32_t *)v2) {
			// 0xd7dc4
			return result;
		}
		int32_t *v7 = (int32_t *)v3; // 0xd7cec
		*v7 = *v7 ^ 1;
		int32_t v8 = 32 - v4; // 0xd7d2c
		g38 = v8;
		int32_t v9;
		if (*(int32_t *)v3 == 0) {
			// 0xd7d2c
			function_d9ee4((char *)&a1, v5);
			v9 = a2 + __asm_rlwinm(v8, 0, 30, 30);
			// branch -> 0xd7d50
		} else {
			// 0xd7d04
			function_da004((char *)&a1, v5);
			v9 = a2 + __asm_rlwinm(v8, 0, 30, 30);
			// branch -> 0xd7d50
		}
		// 0xd7d50
		a2 = v9;
		int32_t v10 = v4;      // 0xd7d54
		int32_t v11 = v10 - 2; // 0xd7d58
		v4 = v11;
		v6 = a1 - (800 - v10);
		a1 = v6;
		if (v11 <= 0xffffffff) {
			// break -> 0xd7d68
			break;
		}
		result = v6;
		// continue -> 0xd7cdc
	}
	int32_t v12 = 8;      // r28
	int32_t result2 = v6; // 0xd7d6c
	// branch -> 0xd7d6c
	int32_t result4; // 0xd7db0
	while (true) {
		// 0xd7d6c
		if (result2 < *(int32_t *)v2) {
			// 0xd7dc4
			return result2;
		}
		// 0xd7d7c
		function_d91e4(&a1, v5);
		int32_t result3 = a1 - 800; // 0xd7d8c
		a1 = result3;
		if (result3 < *(int32_t *)v2) {
			// 0xd7dc4
			return result3;
		}
		// 0xd7da4
		function_d9144((char *)&a1, v5);
		result4 = a1;
		int32_t v13 = v12 - 1; // 0xd7db4
		v12 = v13;
		int32_t v14 = result4 - 800; // 0xd7db8
		a1 = v14;
		if (v13 == 0) {
			// break -> 0xd7dc4
			break;
		}
		result2 = v14;
		// continue -> 0xd7d6c
	}
	// 0xd7dc4
	return result4;
}

// Address range: 0xd7de4 - 0xd7ef0
int32_t function_d7de4(int32_t a1)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd7df4
	int32_t v4 = v3;                        // r30
	int32_t v5 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t result = a1; // 0xd7e14
	// branch -> 0xd7e14
	int32_t v6; // 0xd7e6c
	while (true) {
		// 0xd7e14
		if (result < *(int32_t *)v2) {
			// 0xd7ed4
			return result;
		}
		int32_t *v7 = (int32_t *)v4; // 0xd7e24
		*v7 = *v7 ^ 1;
		int32_t v8 = 32 - v5; // 0xd7e54
		if (*(int32_t *)v4 == 0) {
			// 0xd7e50
			function_da178((char *)&a1, v8, 0);
			// branch -> 0xd7e60
		} else {
			// 0xd7e3c
			function_da238((char *)&a1, v8, 0);
			// branch -> 0xd7e60
		}
		int32_t v9 = v5;      // 0xd7e64
		int32_t v10 = v9 - 2; // 0xd7e68
		v5 = v10;
		v6 = a1 - (800 - v9);
		a1 = v6;
		if (v10 <= 0xffffffff) {
			// break -> 0xd7e78
			break;
		}
		result = v6;
		// continue -> 0xd7e14
	}
	// 0xd7e78
	v4 = 8;
	int32_t result2 = v6; // 0xd7e7c
	// branch -> 0xd7e7c
	int32_t result4; // 0xd7ec0
	while (true) {
		// 0xd7e7c
		if (result2 < *(int32_t *)v2) {
			// 0xd7ed4
			return result2;
		}
		// 0xd7e8c
		function_d9544(&a1, 0);
		int32_t result3 = a1 - 800; // 0xd7e9c
		a1 = result3;
		if (result3 < *(int32_t *)v2) {
			// 0xd7ed4
			return result3;
		}
		// 0xd7eb4
		function_d94f4((char *)&a1, 0);
		result4 = a1;
		int32_t v11 = v4 - 1; // 0xd7ec4
		v4 = v11;
		int32_t v12 = result4 - 800; // 0xd7ec8
		a1 = v12;
		if (v11 == 0) {
			// break -> 0xd7ed4
			break;
		}
		result2 = v12;
		// continue -> 0xd7e7c
	}
	// 0xd7ed4
	return result4;
}

// Address range: 0xd7ef0 - 0xd80a0
int32_t function_d7ef0(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7808); // r31
	int32_t v2 = *(int32_t *)(g23 - 0x6e7c); // 0xd7f04
	int32_t v3;                              // bp-24
	int32_t v4 = &v3;                        // 0xd7f24
	int32_t v5 = &a2;                        // 0xd7f2c
	*(int32_t *)v2 = 0;
	v3 = 30;
	int32_t v6; // 0xd7fe8
	int32_t v7; // 0xd7ff8
	if (function_d0424(&a1, v5, v4, 1) != 0) {
		int32_t v8 = v3;
		int32_t v9 = v8; // r6
		if (v8 > -1) {
			// 0xd7f4c
			// branch -> 0xd7f4c
			while (true) {
				int32_t *v10 = (int32_t *)v2; // 0xd7f4c
				*v10 = *v10 ^ 1;
				g39 = 32 - v9;
				int32_t v11;
				if (*(int32_t *)v2 == 0) {
					// 0xd7f8c
					function_da6a4((char *)&a1, v5, a3);
					int32_t v12 = a2; // 0xd7fa0
					v11 = __asm_rlwinm(v12, 0, 30, 30) + v12;
					// branch -> 0xd7fb0
				} else {
					// 0xd7f64
					function_da538((char *)&a1, v5, a3);
					v11 = __asm_rlwinm(a2, 0, 30, 30) + a2;
					// branch -> 0xd7fb0
				}
				// 0xd7fb0
				a2 = v11;
				int32_t v13 = v3;      // 0xd7fb0
				int32_t v14 = v13 - 2; // 0xd7fbc
				v3 = v14;
				a1 -= (800 - v13);
				v9 = v14;
				if (v14 <= 0xffffffff) {
					// break -> 0xd7fd8
					break;
				}
				// continue -> 0xd7f4c
			}
			// 0xd7fd8
			v3 = 8;
			v7 = a1;
			// branch -> 0xd7fe4
			int32_t result; // 0xd8064
			while (true) {
				// 0xd7fe4
				v6 = v1;
				int32_t v15; // 0xd802c
				int32_t v16; // 0xd801c
				if (v7 < *(int32_t *)v6) {
				lab_0xd800c:
					// 0xd800c
					function_d99d4(&a1, v5, a3);
					v15 = v1;
					v16 = a1;
					// branch -> 0xd801c
				} else {
				lab_0xd7ff4:;
					int32_t v17 = v7 + 32; // 0xd7ff8
					a1 = v17;
					a2 += 32;
					v15 = v6;
					v16 = v17;
					// branch -> 0xd801c
				}
				int32_t v18 = v16 - 800; // 0xd8020
				a1 = v18;
				int32_t v19; // 0xd8060
				if (v18 < *(int32_t *)v15) {
					// 0xd8050
					function_d98f4((char *)&a1, v5, a3);
					v19 = a1;
					// branch -> 0xd8060
				} else {
					int32_t v20 = v16 - 768; // 0xd803c
					a1 = v20;
					a2 += 32;
					v19 = v20;
					// branch -> 0xd8060
				}
				// 0xd8060
				result = v3;
				int32_t v21 = v19 - 800;  // 0xd8068
				int32_t v22 = result - 1; // 0xd806c
				a1 = v21;
				v3 = v22;
				if (v22 == 0) {
					// break -> 0xd8084
					break;
				}
				v7 = v21;
				// continue -> 0xd7fe4
			}
			// 0xd8084
			return result;
		}
	}
	// 0xd7fd8
	v3 = 8;
	v7 = a1;
	// branch -> 0xd7fe4
	while (true) {
		// 0xd7fe4
		v6 = v1;
		if (v7 < *(int32_t *)v6) {
			goto lab_0xd800c;
		}
		goto lab_0xd7ff4;
	}
}

// Address range: 0xd80a0 - 0xd8244
int32_t function_d80a0(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7808); // r31
	int32_t v2 = *(int32_t *)(g23 - 0x6e7c); // 0xd80b4
	int32_t v3 = &a2;                        // 0xd80d4
	*(int32_t *)v2 = 0;
	int32_t v4;       // bp-24
	int32_t v5 = &v4; // 0xd80dc
	v4 = 30;
	int32_t v6; // 0xd8198
	int32_t v7; // 0xd81a8
	if (function_d0424(&a1, v3, v5, 1) != 0) {
		int32_t v8 = v4;
		int32_t v9 = v8; // r5
		if (v8 > -1) {
			// 0xd80f4
			// branch -> 0xd80f4
			while (true) {
				int32_t *v10 = (int32_t *)v2; // 0xd80f4
				*v10 = *v10 ^ 1;
				g38 = 32 - v9;
				int32_t v11;
				if (*(int32_t *)v2 == 0) {
					// 0xd8138
					function_d9ee4((char *)&a1, v3);
					v11 = a2 + __asm_rlwinm(32 - v4, 0, 30, 30);
					// branch -> 0xd8160
				} else {
					// 0xd810c
					function_da004((char *)&a1, v3);
					v11 = a2 + __asm_rlwinm(32 - v4, 0, 30, 30);
					// branch -> 0xd8160
				}
				// 0xd8160
				a2 = v11;
				int32_t v12 = v4;      // 0xd8160
				int32_t v13 = v12 - 2; // 0xd816c
				v4 = v13;
				a1 -= (800 - v12);
				v9 = v13;
				if (v13 <= 0xffffffff) {
					// break -> 0xd8188
					break;
				}
				// continue -> 0xd80f4
			}
			// 0xd8188
			v4 = 8;
			v7 = a1;
			// branch -> 0xd8194
			int32_t result; // 0xd820c
			while (true) {
				// 0xd8194
				v6 = v1;
				int32_t v14; // 0xd81d8
				int32_t v15; // 0xd81c8
				if (v7 < *(int32_t *)v6) {
				lab_0xd81bc:
					// 0xd81bc
					function_d91e4(&a1, v3);
					v14 = v1;
					v15 = a1;
					// branch -> 0xd81c8
				} else {
				lab_0xd81a4:;
					int32_t v16 = v7 + 32; // 0xd81a8
					a1 = v16;
					a2 += 32;
					v14 = v6;
					v15 = v16;
					// branch -> 0xd81c8
				}
				int32_t v17 = v15 - 800; // 0xd81cc
				a1 = v17;
				int32_t v18; // 0xd8208
				if (v17 < *(int32_t *)v14) {
					// 0xd81fc
					function_d9144((char *)&a1, v3);
					v18 = a1;
					// branch -> 0xd8208
				} else {
					int32_t v19 = v15 - 768; // 0xd81e8
					a1 = v19;
					a2 += 32;
					v18 = v19;
					// branch -> 0xd8208
				}
				// 0xd8208
				result = v4;
				int32_t v20 = v18 - 800;  // 0xd8210
				int32_t v21 = result - 1; // 0xd8214
				a1 = v20;
				v4 = v21;
				if (v21 == 0) {
					// break -> 0xd822c
					break;
				}
				v7 = v20;
				// continue -> 0xd8194
			}
			// 0xd822c
			return result;
		}
	}
	// 0xd8188
	v4 = 8;
	v7 = a1;
	// branch -> 0xd8194
	while (true) {
		// 0xd8194
		v6 = v1;
		if (v7 < *(int32_t *)v6) {
			goto lab_0xd81bc;
		}
		goto lab_0xd81a4;
	}
}

// Address range: 0xd8244 - 0xd8378
int32_t function_d8244(int32_t a1)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x7808); // r31
	int32_t v3 = *(int32_t *)(v1 - 0x6e7c); // 0xd8254
	int32_t v4 = v3;                        // r30
	int32_t v5 = 30;                        // r29
	*(int32_t *)v3 = 0;
	int32_t v6 = a1; // 0xd8288
	// branch -> 0xd8274
	int32_t v7; // 0xd82dc
	while (true) {
		// 0xd8274
		if (v6 < *(int32_t *)v2) {
			int32_t *v8 = (int32_t *)v4; // 0xd8294
			*v8 = *v8 ^ 1;
			int32_t v9 = 32 - v5; // 0xd82c4
			if (*(int32_t *)v4 == 0) {
				// 0xd82c0
				function_da178((char *)&a1, v9, 0);
				// branch -> 0xd82d0
			} else {
				// 0xd82ac
				function_da238((char *)&a1, v9, 0);
				// branch -> 0xd82d0
			}
		lab_0xd82d0:;
			int32_t v10 = v5;      // 0xd82d4
			int32_t v11 = v10 - 2; // 0xd82d8
			v5 = v11;
			v7 = a1 - (800 - v10);
			a1 = v7;
			if (v11 <= 0xffffffff) {
				// break -> 0xd82e8
				break;
			}
			v6 = v7;
			// continue -> 0xd8274
			continue;
		} else {
			// 0xd8284
			a1 = 32 - v5 + v6;
			// branch -> 0xd82d0
			goto lab_0xd82d0;
		}
	}
	// 0xd82e8
	v4 = 8;
	int32_t v12 = v7; // 0xd82fc
	// branch -> 0xd82ec
	int32_t result; // 0xd8374
	while (true) {
		// 0xd82ec
		int32_t v13; // 0xd8314
		if (v12 < *(int32_t *)v2) {
			// 0xd8308
			function_d9544(&a1, 0);
			v13 = a1;
			// branch -> 0xd8314
		} else {
			int32_t v14 = v12 + 32; // 0xd82fc
			a1 = v14;
			v13 = v14;
			// branch -> 0xd8314
		}
		int32_t v15 = v13 - 800; // 0xd8318
		a1 = v15;
		if (v15 < *(int32_t *)v2) {
			// 0xd833c
			function_d94f4((char *)&a1, 0);
			result = a1;
			// branch -> 0xd8348
		} else {
			int32_t v16 = v13 - 768; // 0xd8330
			a1 = v16;
			result = v16;
			// branch -> 0xd8348
		}
		int32_t v17 = v4 - 1; // 0xd834c
		v4 = v17;
		int32_t v18 = result - 800; // 0xd8350
		a1 = v18;
		if (v17 == 0) {
			// break -> 0xd835c
			break;
		}
		v12 = v18;
		// continue -> 0xd82ec
	}
	// 0xd835c
	return result;
}

// Address range: 0xd8378 - 0xd846c
int32_t function_d8378(int32_t result, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd8390
	int32_t v2 = 30;                  // r28
	int32_t v3 = result;              // bp+24
	int32_t v4 = &a2;                 // 0xd83c4
	if (result < *(int32_t *)v1) {
		// 0xd844c
		return result;
	}
	int32_t v5 = 30; // 0xd83c8
	while (true) {
		// 0xd83bc
		g39 = 32 - v5;
		function_da338((char *)&v3, v4, a3);
		int32_t v6 = a2;     // 0xd83d0
		int32_t v7 = v2;     // 0xd83d4
		int32_t v8 = v7 - 2; // 0xd83dc
		v2 = v8;
		int32_t v9 = __asm_rlwinm(v6, 0, 30, 30) + v6; // 0xd83e4
		int32_t result2 = v3 - (800 - v7);             // 0xd83e8
		a2 = v9;
		v3 = result2;
		if (v8 == 0 || v8 > 0) {
			// 0xd83bc
			if (result2 >= *(int32_t *)v1) {
				// 0xd83bc
				v5 = v2;
				// branch -> 0xd83bc
				continue;
			}
			// 0xd844c
			return result2;
		}
		// 0xd83f8
		v2 = 16;
		int32_t v10 = a4 - 64; // r31
		// branch -> 0xd8400
		int32_t result3; // 0xd8430
		while (true) {
			// 0xd8400
			if (result2 >= *(int32_t *)v1) {
				int32_t v11 = v10; // 0xd8410
				g39 = *(int32_t *)v11;
				g38 = a3;
				g37 = v4;
				v10 = v11 - 4;
				function_d9ab4((char *)&v3);
				int32_t v12 = a2;     // 0xd8428
				int32_t v13 = v2 - 1; // 0xd842c
				v2 = v13;
				result3 = v3;
				int32_t v14 = __asm_rlwinm(v12, 0, 30, 30) + v12; // 0xd8438
				int32_t v15 = result3 - 800;                      // 0xd843c
				a2 = v14;
				v3 = v15;
				if (v13 == 0) {
					// break -> 0xd844c
					break;
				}
				result2 = v15;
				// continue -> 0xd8400
				continue;
			}
			// 0xd844c
			return result2;
		}
		// 0xd844c
		return result3;
	}
}

// Address range: 0xd846c - 0xd85e8
int32_t function_d846c(int16_t *a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd8474
	int32_t v2 = 30;                  // r9
	int32_t result = (int32_t)a1;     // 0xd848c
	int16_t *v3 = (int16_t *)result;  // bp+24
	int16_t *v4 = (int16_t *)a2;      // 0xd8490
	int32_t v5 = result;              // r8
	if (result < *(int32_t *)v1) {
		// 0xd85cc
		return result;
	}
	int32_t v6 = 30; // 0xd84a4146
	while (true) {
		int32_t v7 = 32 - v6;                      // 0xd84a4
		int32_t v8 = v7;                           // r7
		int32_t v9 = (int32_t)v4;                  // 0xd84a8
		int32_t v10 = v9;                          // r5
		int32_t v11 = __asm_rlwinm(v7, 0, 30, 30); // 0xd84ac
		v3 = (int16_t *)(v7 + v5);
		v4 = (int16_t *)(v7 + v11 + v9);
		int32_t v12 = v7 / 4; // 0xd84c8
		int32_t v13 = v12;    // r3
		int32_t v14 = v7;     // 0xd8554
		if (v7 >= 4) {
			int32_t v15 = __asm_rlwinm_(v12, 29, 3, 31); // 0xd84d0
			int32_t v16 = v15;                           // ctr
			int32_t v17 = v13;                           // 0xd84d8
			int32_t v18 = v5;
			int32_t v19; // 0xd8538
			if (v15 == 0) {
				v19 = v17;
			lab_0xd8538:;
				int32_t v20 = v10; // 0xd853c
				v10 = v20 + 4;
				*(int32_t *)v18 = *(int32_t *)v20;
				int32_t v21 = v5 + 4; // 0xd8548
				v5 = v21;
				int32_t v22 = v19 - 1; // 0xd854c
				// branch -> 0xd853c
				while (v22 != 0) {
					// 0xd853c
					v20 = v10;
					v10 = v20 + 4;
					*(int32_t *)v21 = *(int32_t *)v20;
					v21 = v5 + 4;
					v5 = v21;
					v22--;
					// continue -> 0xd853c
				}
			lab_0xd8550:
				// 0xd8550
				// branch -> 0xd8554
			lab_0xd8554:
				// 0xd8554
				if (__asm_rlwinm_(-4 * v17 + v8, 0, 30, 30) != 0) {
				lab_0xd855c:
					// 0xd855c
					*(int16_t *)v5 = *(int16_t *)v10;
					// branch -> 0xd8564
				}
			lab_0xd8564:;
				int32_t v23 = v2;            // 0xd8568
				int32_t result2 = 800 - v23; // 0xd8568
				int32_t v24 = v23 - 2;       // 0xd856c
				v2 = v24;
				int32_t v25 = (int32_t)v3 - result2; // 0xd8570
				int16_t *v26 = (int16_t *)v25;       // 0xd8574
				v3 = v26;
				if (v24 > -1) {
					// 0xd8564
					v5 = v25;
					if (v25 >= *(int32_t *)v1) {
						// 0xd8564
						v6 = v24;
						// branch -> 0xd84a4
						continue;
					}
					// 0xd85cc
					return result2;
				}
				int32_t v27 = a3 - 64;      // r29
				int32_t v28 = 16;           // r30
				int32_t v29 = (int32_t)&v4; // 0xd859c
				// branch -> 0xd8584
				int32_t result3; // 0xd85b0
				while (true) {
					int32_t v30 = (int32_t)v26; // 0xd8584
					if (v30 >= *(int32_t *)v1) {
						int32_t v31 = v27; // 0xd8594
						v27 = v31 - 4;
						function_d9284((char *)&v3, v29, *(int32_t *)v31);
						int32_t v32 = (int32_t)v4; // 0xd85a8
						int32_t v33 = v28 - 1;     // 0xd85ac
						v28 = v33;
						result3 = (int32_t)v3;
						v4 = (int16_t *)(__asm_rlwinm(v32, 0, 30, 30) + v32);
						int16_t *v34 = (int16_t *)(result3 - 800); // 0xd85c4
						v3 = v34;
						if (v33 == 0) {
							// break -> 0xd85cc
							break;
						}
						v26 = v34;
						// continue -> 0xd8584
						continue;
					} else {
						result3 = v30;
					}
				}
				// 0xd85cc
				return result3;
			}
			*(int32_t *)v18 = *(int32_t *)v10;
			*(int32_t *)(v5 + 4) = *(int32_t *)(v10 + 4);
			*(int32_t *)(v5 + 8) = *(int32_t *)(v10 + 8);
			*(int32_t *)(v5 + 12) = *(int32_t *)(v10 + 12);
			*(int32_t *)(v5 + 16) = *(int32_t *)(v10 + 16);
			*(int32_t *)(v5 + 20) = *(int32_t *)(v10 + 20);
			*(int32_t *)(v5 + 24) = *(int32_t *)(v10 + 24);
			int32_t v35 = v10; // 0xd851c
			v10 = v35 + 32;
			*(int32_t *)(v5 + 28) = *(int32_t *)(v35 + 28);
			int32_t v36 = v5 + 32; // 0xd8528
			v5 = v36;
			int32_t v37 = v16 - 1; // 0xd852c
			while (v37 != 0) {
				// 0xd84e4
				*(int32_t *)v36 = *(int32_t *)v10;
				*(int32_t *)(v5 + 4) = *(int32_t *)(v10 + 4);
				*(int32_t *)(v5 + 8) = *(int32_t *)(v10 + 8);
				*(int32_t *)(v5 + 12) = *(int32_t *)(v10 + 12);
				*(int32_t *)(v5 + 16) = *(int32_t *)(v10 + 16);
				*(int32_t *)(v5 + 20) = *(int32_t *)(v10 + 20);
				*(int32_t *)(v5 + 24) = *(int32_t *)(v10 + 24);
				v35 = v10;
				v10 = v35 + 32;
				*(int32_t *)(v5 + 28) = *(int32_t *)(v35 + 28);
				v36 = v5 + 32;
				v5 = v36;
				v37--;
				// continue -> 0xd84e4
			}
			int32_t v38 = v13 % 8; // 0xd8530
			if (v38 == 0) {
				goto lab_0xd8550;
			}
			v18 = v36;
			v19 = v38;
			goto lab_0xd8538;
		}
		// 0xd8554
		if (__asm_rlwinm_(v14, 0, 30, 30) == 0) {
			goto lab_0xd8564;
		}
		goto lab_0xd855c;
	}
}

// Address range: 0xd85e8 - 0xd8728
int32_t function_d85e8(int16_t *a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)-0x7808; // 0xd85f0
	int32_t v2 = 30;                  // r7
	int32_t result = (int32_t)a1;     // 0xd8608
	int16_t *v3 = (int16_t *)result;  // 0xd8608
	int32_t v4 = result;              // r5
	if (result < *(int32_t *)v1) {
		// 0xd870c
		return result;
	}
	int32_t v5 = 30; // 0xd861c141
	while (true) {
		int32_t v6 = 32 - v5; // 0xd861c
		int32_t v7 = v6;      // r4
		v3 = (int16_t *)(result + v6);
		int32_t v8 = v6; // 0xd8640
		if (v6 % 2 != 0) {
			// 0xd8630
			v7 = v6 - 1;
			*(char *)v3 = 0;
			v4++;
			v8 = v7;
			// branch -> 0xd8640
		}
		// 0xd8640
		if (__asm_rlwinm_(v8, 0, 30, 30) != 0) {
			// 0xd8648
			v7 -= 2;
			*(int16_t *)v4 = 0;
			v4 += 2;
			// branch -> 0xd8658
		}
		uint32_t v9 = v7;     // 0xd8658
		int32_t v10 = v9 / 4; // 0xd865c
		int32_t v11 = v10;    // r3
		v7 = 0;
		int32_t v12;     // r29
		int32_t v13;     // r30
		int32_t v14;     // 0xd86b8
		int32_t v15;     // 0xd86bc
		int32_t v16;     // 0xd86c0
		int16_t *v17;    // 0xd86c4
		int32_t result3; // 0xd86d4
		if (v9 >= 4) {
			int32_t v18 = __asm_rlwinm_(v10, 29, 3, 31); // 0xd8668
			int32_t v19 = v18;                           // ctr
			int32_t v20;                                 // 0xd86a4
			int32_t v21;
			if (v18 == 0) {
				// 0xd8668
				v21 = v4;
				v20 = v11;
				// branch -> 0xd86a4
			lab_0xd86a4:
				// 0xd86a4
				*(int32_t *)v21 = v7;
				int32_t v22 = v4 + 4;  // 0xd86ac
				int32_t v23 = v20 - 1; // 0xd86b0
				// branch -> 0xd86a8
				while (v23 != 0) {
					// 0xd86a8
					*(int32_t *)v22 = v7;
					v22 += 4;
					v23--;
					// continue -> 0xd86a8
				}
			lab_0xd86b4:
				// 0xd86b4
				v14 = v2;
				v15 = v14 - 2;
				v2 = v15;
				v16 = (int32_t)v3 - (800 - v14);
				v17 = (int16_t *)v16;
				v3 = v17;
				if (v15 > -1) {
				lab_0xd86b4_3:
					// 0xd86b4
					v4 = v16;
					if (v16 < *(int32_t *)v1) {
						// break -> 0xd870c
						break;
					}
					result = v16;
					v3 = v17;
					v5 = v15;
					// continue -> 0xd861c
					continue;
				}
				// 0xd86cc
				v12 = a2 - 64;
				v13 = 16;
				int16_t *v24 = v17; // 0xd86d4
				// branch -> 0xd86d4
				int32_t result2; // 0xd86f8
				while (true) {
					// 0xd86d4
					result3 = (int32_t)v24;
					if (result3 >= *(int32_t *)v1) {
					lab_0xd86e4_2:;
						int32_t v25 = v12; // 0xd86e4
						v12 = v25 - 4;
						function_d9594((char *)&v3, 0, *(int32_t *)v25);
						result2 = (int32_t)v3;
						int32_t v26 = v13 - 1; // 0xd86fc
						v13 = v26;
						int16_t *v27 = (int16_t *)(result2 - 800); // 0xd8704
						v3 = v27;
						if (v26 == 0) {
							// break -> 0xd870c
							break;
						}
						v24 = v27;
						// continue -> 0xd86d4
						continue;
					} else {
						result2 = result3;
					}
				}
				// 0xd870c
				return result2;
			}
			// 0xd8674
			*(int32_t *)v4 = v7;
			*(int32_t *)(v4 + 4) = v7;
			*(int32_t *)(v4 + 8) = v7;
			*(int32_t *)(v4 + 12) = v7;
			*(int32_t *)(v4 + 16) = v7;
			*(int32_t *)(v4 + 20) = v7;
			*(int32_t *)(v4 + 24) = v7;
			*(int32_t *)(v4 + 28) = v7;
			int32_t v28 = v4 + 32; // 0xd8694
			v4 = v28;
			int32_t v29 = v19 - 1; // 0xd8698
			// branch -> 0xd8674
			while (v29 != 0) {
				// 0xd8674
				*(int32_t *)v28 = v7;
				*(int32_t *)(v4 + 4) = v7;
				*(int32_t *)(v4 + 8) = v7;
				*(int32_t *)(v4 + 12) = v7;
				*(int32_t *)(v4 + 16) = v7;
				*(int32_t *)(v4 + 20) = v7;
				*(int32_t *)(v4 + 24) = v7;
				*(int32_t *)(v4 + 28) = v7;
				v28 = v4 + 32;
				v4 = v28;
				v29--;
				// continue -> 0xd8674
			}
			int32_t v30 = v11 % 8; // 0xd869c
			if (v30 == 0) {
				goto lab_0xd86b4;
			}
			v21 = v28;
			v20 = v30;
			goto lab_0xd86a4;
		}
		// 0xd86b4
		v14 = v2;
		v15 = v14 - 2;
		v2 = v15;
		v16 = (int32_t)v3 - (800 - v14);
		v17 = (int16_t *)v16;
		v3 = v17;
		if (v15 > -1) {
			goto lab_0xd86b4_3;
		}
		// 0xd86cc
		v12 = a2 - 64;
		v13 = 16;
		// branch -> 0xd86d4
		while (true) {
			// 0xd86d4
			result3 = (int32_t)v17;
			if (result3 >= *(int32_t *)v1) {
				goto lab_0xd86e4_2;
			}
			// 0xd870c
			return result3;
		}
	}
}

// Address range: 0xd8728 - 0xd8868
int32_t function_d8728(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7808); // r31
	int32_t v2;                              // bp-24
	int32_t v3 = &v2;                        // 0xd875c
	int32_t v4 = &a2;                        // 0xd8764
	v2 = 30;
	int32_t v5; // 0xd87ec
	int32_t v6; // 0xd8800
	int32_t v7; // 0xd87cc
	int32_t v8; // 0xd882c11
	if (function_d0424(&a1, v4, v3, 0) != 0) {
		int32_t v9 = v2;
		if (v9 > -1) {
			g39 = 32 - v9;
			function_da338((char *)&a1, v4, a3);
			int32_t v10 = v2;                           // 0xd8790
			int32_t v11 = a2;                           // 0xd8794
			int32_t v12 = __asm_rlwinm(v11, 0, 30, 30); // 0xd87a0
			int32_t v13 = v10 - 2;                      // 0xd87a4
			a2 = v12 + v11;
			a1 -= (800 - v10);
			v2 = v13;
			// branch -> 0xd877c
			while (v13 > 0xffffffff) {
				// 0xd877c
				g39 = 32 - v13;
				function_da338((char *)&a1, v4, a3);
				v10 = v2;
				v11 = a2;
				v12 = __asm_rlwinm(v11, 0, 30, 30);
				v13 = v10 - 2;
				a2 = v12 + v11;
				a1 -= (800 - v10);
				v2 = v13;
				// continue -> 0xd877c
			}
			// 0xd87c8
			v7 = a4 - 64;
			a4 = v7;
			v2 = 16;
			v8 = 16;
			v6 = v7;
			v5 = a1;
			// branch -> 0xd87d8
			int32_t result; // 0xd8864
			while (true) {
				// 0xd87d8
				int32_t v14; // 0xd8828
				int32_t v15; // 0xd881c
				int32_t v16; // 0xd8824
				if (v5 < *(int32_t *)v1) {
				lab_0xd8800:
					// 0xd8800
					g39 = *(int32_t *)v6;
					g38 = a3;
					g37 = v4;
					function_d9ab4((char *)&a1);
					int32_t v17 = a2; // 0xd8814
					v15 = __asm_rlwinm(v17, 0, 30, 30) + v17;
					result = v2;
					v14 = a4;
					v16 = a1;
					// branch -> 0xd8824
				} else {
				lab_0xd87e8:;
					int32_t v18 = v5 + 32; // 0xd87ec
					a1 = v18;
					result = v8;
					v14 = v6;
					v16 = v18;
					v15 = a2 + 32;
					// branch -> 0xd8824
				}
				// 0xd8824
				a2 = v15;
				int32_t v19 = v14 - 4; // 0xd8828
				a4 = v19;
				int32_t v20 = v16 - 800;  // 0xd8830
				int32_t v21 = result - 1; // 0xd8834
				a1 = v20;
				v2 = v21;
				if (v21 == 0) {
					// break -> 0xd884c
					break;
				}
				v8 = v21;
				v6 = v19;
				v5 = v20;
				// continue -> 0xd87d8
			}
			// 0xd884c
			return result;
		}
	}
	// 0xd87c8
	v7 = a4 - 64;
	a4 = v7;
	v2 = 16;
	v8 = 16;
	v6 = v7;
	v5 = a1;
	// branch -> 0xd87d8
	while (true) {
		// 0xd87d8
		if (v5 < *(int32_t *)v1) {
			goto lab_0xd8800;
		}
		goto lab_0xd87e8;
	}
}

// Address range: 0xd8868 - 0xd8a38
int32_t function_d8868(int16_t *a1, int32_t a2, int32_t a3)
{
	int16_t *v1 = (int16_t *)(int32_t)a1; // bp+24
	int32_t v2;                           // bp-24
	int32_t v3 = &v2;                     // 0xd8894
	int16_t *v4 = (int16_t *)a2;          // bp+28
	int32_t v5 = (int32_t)&v4;            // 0xd889c
	v2 = 30;
	if (function_d0424((int32_t *)&v1, v5, v3, 0) != 0) {
		int32_t v6 = v2;
		if (v6 > -1) {
			while (true) {
				int32_t v7 = 32 - v6;                                 // 0xd88b4
				int32_t v8 = v7;                                      // r7
				int32_t v9 = (int32_t)v4;                             // 0xd88b8
				int32_t v10 = v9;                                     // r5
				int32_t v11 = (int32_t)v1;                            // 0xd88c0
				int32_t v12 = v11;                                    // r6
				uint32_t v13 = v8;                                    // 0xd88c8
				int32_t v14 = v9 + __asm_rlwinm(v7, 0, 30, 30) + v13; // 0xd88d0
				v1 = (int16_t *)(v13 + v11);
				int32_t v15 = v13 / 4; // 0xd88d8
				int32_t v16 = v15;     // r3
				v4 = (int16_t *)v14;
				int32_t v17 = v13; // 0xd8968
				if (v13 >= 4) {
					int32_t v18 = __asm_rlwinm_(v15, 29, 3, 31); // 0xd88e4
					int32_t v19 = v18;                           // ctr
					int32_t v20 = v16;                           // 0xd88ec
					int32_t v21 = v12;
					int32_t v22; // 0xd894c
					if (v18 == 0) {
						v22 = v20;
					lab_0xd894c:;
						int32_t v23 = v10; // 0xd8950
						v10 = v23 + 4;
						*(int32_t *)v21 = *(int32_t *)v23;
						int32_t v24 = v12 + 4; // 0xd895c
						v12 = v24;
						int32_t v25 = v22 - 1; // 0xd8960
						// branch -> 0xd8950
						while (v25 != 0) {
							// 0xd8950
							v23 = v10;
							v10 = v23 + 4;
							*(int32_t *)v24 = *(int32_t *)v23;
							v24 = v12 + 4;
							v12 = v24;
							v25--;
							// continue -> 0xd8950
						}
					lab_0xd8964:
						// 0xd8964
						// branch -> 0xd8968
					lab_0xd8968:
						// 0xd8968
						if (__asm_rlwinm_(-4 * v20 + v8, 0, 30, 30) != 0) {
						lab_0xd8970:
							// 0xd8970
							*(int16_t *)v12 = *(int16_t *)v10;
							// branch -> 0xd8978
						}
					lab_0xd8978:;
						int32_t v26 = v2;      // 0xd8978
						int32_t v27 = v26 - 2; // 0xd8984
						v2 = v27;
						v1 = (int16_t *)((int32_t)v1 - (800 - v26));
						if (v27 <= 0xffffffff) {
							// break -> 0xd89a0
							break;
						}
						v6 = v27;
						// continue -> 0xd88b4
						continue;
					} else {
						*(int32_t *)v21 = *(int32_t *)v10;
						*(int32_t *)(v12 + 4) = *(int32_t *)(v10 + 4);
						*(int32_t *)(v12 + 8) = *(int32_t *)(v10 + 8);
						*(int32_t *)(v12 + 12) = *(int32_t *)(v10 + 12);
						*(int32_t *)(v12 + 16) = *(int32_t *)(v10 + 16);
						*(int32_t *)(v12 + 20) = *(int32_t *)(v10 + 20);
						*(int32_t *)(v12 + 24) = *(int32_t *)(v10 + 24);
						int32_t v28 = v10; // 0xd8930
						v10 = v28 + 32;
						*(int32_t *)(v12 + 28) = *(int32_t *)(v28 + 28);
						int32_t v29 = v12 + 32; // 0xd893c
						v12 = v29;
						int32_t v30 = v19 - 1; // 0xd8940
						while (v30 != 0) {
							// 0xd88f8
							*(int32_t *)v29 = *(int32_t *)v10;
							*(int32_t *)(v12 + 4) = *(int32_t *)(v10 + 4);
							*(int32_t *)(v12 + 8) = *(int32_t *)(v10 + 8);
							*(int32_t *)(v12 + 12) = *(int32_t *)(v10 + 12);
							*(int32_t *)(v12 + 16) = *(int32_t *)(v10 + 16);
							*(int32_t *)(v12 + 20) = *(int32_t *)(v10 + 20);
							*(int32_t *)(v12 + 24) = *(int32_t *)(v10 + 24);
							v28 = v10;
							v10 = v28 + 32;
							*(int32_t *)(v12 + 28) = *(int32_t *)(v28 + 28);
							v29 = v12 + 32;
							v12 = v29;
							v30--;
							// continue -> 0xd88f8
						}
						int32_t v31 = v16 % 8; // 0xd8944
						if (v31 == 0) {
							goto lab_0xd8964;
						}
						v21 = v29;
						v22 = v31;
						goto lab_0xd894c;
					}
				}
				// 0xd8968
				if (__asm_rlwinm_(v17, 0, 30, 30) == 0) {
					goto lab_0xd8978;
				}
				goto lab_0xd8970;
			}
		}
	}
	int32_t v32 = a3 - 64; // 0xd89a4
	v2 = 16;
	int32_t v33 = 16;  // 0xd8a0017
	int16_t *v34 = v1; // 0xd89b0
	// branch -> 0xd89b0
	int32_t result; // 0xd8a34
	while (true) {
		int32_t v35 = (int32_t)v34; // 0xd89b0
		int32_t v36;                // 0xd89f0
		int16_t *v37;               // 0xd89f8
		if (v35 < *(int32_t *)*(int32_t *)(g23 - 0x7808)) {
			// 0xd89d8
			function_d9284((char *)&v1, v5, *(int32_t *)v32);
			int32_t v38 = (int32_t)v4; // 0xd89e8
			v36 = __asm_rlwinm(v38, 0, 30, 30) + v38;
			result = v2;
			v37 = v1;
			// branch -> 0xd89f8
		} else {
			int16_t *v39 = (int16_t *)(v35 + 32); // 0xd89c8
			v1 = v39;
			result = v33;
			v37 = v39;
			v36 = (int32_t)v4 + 32;
			// branch -> 0xd89f8
		}
		// 0xd89f8
		v4 = (int16_t *)v36;
		int32_t v40 = result - 1;                       // 0xd8a08
		int16_t *v41 = (int16_t *)((int32_t)v37 - 800); // 0xd8a0c
		v1 = v41;
		v2 = v40;
		if (v40 == 0) {
			// break -> 0xd8a20
			break;
		}
		v33 = v40;
		v32 -= 4;
		v34 = v41;
		// continue -> 0xd89b0
	}
	// 0xd8a20
	return result;
}

// Address range: 0xd8a38 - 0xd8b94
int32_t function_d8a38(int16_t *a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)-0x7808;     // 0xd8a40
	int32_t v2 = 30;                      // r7
	int16_t *v3 = (int16_t *)(int32_t)a1; // 0xd8a58
	int32_t v4 = 30;                      // 0xd8a7c
	// branch -> 0xd8a5c
	while (true) {
		int32_t v5 = (int32_t)v3; // 0xd8a5c
		int32_t v6 = v5;          // r5
		int32_t v7 = 32 - v4;     // 0xd8a7c
		if (v5 < *(int32_t *)v1) {
			int32_t v8 = v7; // r4
			v3 = (int16_t *)(v5 + v7);
			int32_t v9 = v7; // 0xd8aa0
			if (v7 % 2 != 0) {
				// 0xd8a90
				v8 = v7 - 1;
				*(char *)v3 = 0;
				v6++;
				v9 = v8;
				// branch -> 0xd8aa0
			}
			// 0xd8aa0
			if (__asm_rlwinm_(v9, 0, 30, 30) != 0) {
				// 0xd8aa8
				v8 -= 2;
				*(int16_t *)v6 = 0;
				v6 += 2;
				// branch -> 0xd8ab8
			}
			uint32_t v10 = v8;     // 0xd8ab8
			int32_t v11 = v10 / 4; // 0xd8abc
			int32_t v12 = v11;     // r3
			v8 = 0;
			int32_t v13;  // r29
			int32_t v14;  // r30
			int32_t v15;  // 0xd8b18
			int32_t v16;  // 0xd8b50
			int32_t v17;  // 0xd8b6411
			int32_t v18;  // 0xd8b1c
			int32_t v19;  // 0xd8b2c
			int16_t *v20; // 0xd8b24
			int32_t v21;  // 0xd8b34
			if (v10 >= 4) {
				int32_t v22 = __asm_rlwinm_(v11, 29, 3, 31); // 0xd8ac8
				int32_t v23 = v22;                           // ctr
				int32_t v24;                                 // 0xd8b04
				int32_t v25;
				if (v22 == 0) {
					// 0xd8ac8
					v25 = v6;
					v24 = v12;
					// branch -> 0xd8b04
				lab_0xd8b04:
					// 0xd8b04
					*(int32_t *)v25 = v8;
					int32_t v26 = v6 + 4;  // 0xd8b0c
					int32_t v27 = v24 - 1; // 0xd8b10
					// branch -> 0xd8b08
					while (v27 != 0) {
						// 0xd8b08
						*(int32_t *)v26 = v8;
						v26 += 4;
						v27--;
						// continue -> 0xd8b08
					}
				lab_0xd8b14:
					// 0xd8b14
					v15 = v2;
					v18 = v15 - 2;
					v2 = v18;
					v20 = (int16_t *)((int32_t)v3 - (800 - v15));
					v3 = v20;
					if (v18 <= -1) {
						// 0xd8b2c
						v19 = a2 - 64;
						v13 = v19;
						v14 = 16;
						v17 = 16;
						v16 = v19;
						int16_t *v28 = v20; // 0xd8b34
						// branch -> 0xd8b34
						int32_t result; // 0xd8b60
						while (true) {
							// 0xd8b34
							v21 = (int32_t)v28;
							int32_t v29;  // 0xd8b64
							int32_t v30;  // 0xd8b68
							int16_t *v31; // 0xd8b60
							if (v21 < *(int32_t *)v1) {
							lab_0xd8b50_3:
								// 0xd8b50
								function_d9594((char *)&v3, 0, *(int32_t *)v16);
								v30 = v13;
								v29 = v14;
								v31 = v3;
								// branch -> 0xd8b60
							} else {
							lab_0xd8b44_3:;
								int16_t *v32 = (int16_t *)(v21 + 32); // 0xd8b48
								v3 = v32;
								v30 = v16;
								v29 = v17;
								v31 = v32;
								// branch -> 0xd8b60
							}
							// 0xd8b60
							result = (int32_t)v31;
							int32_t v33 = v29 - 1; // 0xd8b64
							v14 = v33;
							int32_t v34 = v30 - 4; // 0xd8b68
							v13 = v34;
							int16_t *v35 = (int16_t *)(result - 800); // 0xd8b70
							v3 = v35;
							if (v33 == 0) {
								// break -> 0xd8b78
								break;
							}
							v17 = v33;
							v16 = v34;
							v28 = v35;
							// continue -> 0xd8b34
						}
						// 0xd8b78
						return result;
					}
				lab_0xd8b14_5:
					// 0xd8b14
					v4 = v18;
					v3 = v20;
					// branch -> 0xd8a5c
					continue;
				} else {
					// 0xd8ad4
					*(int32_t *)v6 = v8;
					*(int32_t *)(v6 + 4) = v8;
					*(int32_t *)(v6 + 8) = v8;
					*(int32_t *)(v6 + 12) = v8;
					*(int32_t *)(v6 + 16) = v8;
					*(int32_t *)(v6 + 20) = v8;
					*(int32_t *)(v6 + 24) = v8;
					*(int32_t *)(v6 + 28) = v8;
					int32_t v36 = v6 + 32; // 0xd8af4
					v6 = v36;
					int32_t v37 = v23 - 1; // 0xd8af8
					// branch -> 0xd8ad4
					while (v37 != 0) {
						// 0xd8ad4
						*(int32_t *)v36 = v8;
						*(int32_t *)(v6 + 4) = v8;
						*(int32_t *)(v6 + 8) = v8;
						*(int32_t *)(v6 + 12) = v8;
						*(int32_t *)(v6 + 16) = v8;
						*(int32_t *)(v6 + 20) = v8;
						*(int32_t *)(v6 + 24) = v8;
						*(int32_t *)(v6 + 28) = v8;
						v36 = v6 + 32;
						v6 = v36;
						v37--;
						// continue -> 0xd8ad4
					}
					int32_t v38 = v12 % 8; // 0xd8afc
					if (v38 == 0) {
						goto lab_0xd8b14;
					}
					v25 = v36;
					v24 = v38;
					goto lab_0xd8b04;
				}
			}
		lab_0xd8b14_4:
			// 0xd8b14
			v15 = v2;
			v18 = v15 - 2;
			v2 = v18;
			v20 = (int16_t *)((int32_t)v3 - (800 - v15));
			v3 = v20;
			if (v18 > -1) {
				goto lab_0xd8b14_5;
			}
			// 0xd8b2c
			v19 = a2 - 64;
			v13 = v19;
			v14 = 16;
			v17 = 16;
			v16 = v19;
			// branch -> 0xd8b34
			while (true) {
				// 0xd8b34
				v21 = (int32_t)v20;
				if (v21 < *(int32_t *)v1) {
					goto lab_0xd8b50_3;
				}
				goto lab_0xd8b44_3;
			}
		} else {
			// 0xd8a6c
			v3 = (int16_t *)(v5 + v7);
			// branch -> 0xd8b14
			goto lab_0xd8b14_4;
		}
	}
}

// Address range: 0xd8b94 - 0xd8e50
int32_t drawUpperScreen(int32_t a1)
{
	int32_t v1 = g10; // 0xd8b98
	g31 = 0;
	g29 = a1;
	g32 = *(int32_t *)(g23 - 0x54c4);
	g30 = 0;
	g33 = *(int32_t *)(g23 - 0x75e8);
	g35 = *(int32_t *)(g23 - 0x6f50);
	g36 = *(int32_t *)(g23 - 0x7290);
	int32_t v2 = *(int32_t *)(g23 - 0x6e8c); // 0xd8bbc
	int32_t v3 = *(int32_t *)(g23 - 0x6f48); // 0xd8bc0
	int32_t v4 = *(int32_t *)(g23 - 0x723c); // 0xd8bc8
	int32_t v5;                              // bp-36
	int32_t result2;                         // 0xd8dbc
	int32_t result;                          // 0xd8e34
	int32_t result3;                         // 0xd8e4c
	int32_t v6;                              // 0xd8cac
	int32_t v7;                              // 0xd8ccc
	int32_t v8;                              // 0xd8c7c
	int32_t v9;                              // 0xd8d50
	int32_t v10;                             // 0xd8d7c
	int32_t v11;                             // 0xd8da4
	int32_t v12;                             // 0xd8dc8
	int32_t v13;                             // 0xd8df4
	int32_t v14;                             // 0xd8cb4
	int32_t v15;                             // 0xd8d64
	int32_t v16;                             // 0xd8d84
	int32_t v17;                             // 0xd8ddc
	int32_t v18;                             // 0xd8dfc
	if (*(int32_t *)*(int32_t *)(g23 - 0x7294) == 0) {
		// 0xd8c74
		*(int32_t *)v2 = *(int32_t *)(g23 - 0x724c);
		v8 = *(int32_t *)g36;
		if (v8 == 0) {
			// 0xd8dc8
			v12 = *(int32_t *)g35;
			if (__asm_rlwinm_(v12, 0, 16, 16) != 0) {
				// 0xd8dd4
				v17 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v12, 6, 14, 25));
				*(int32_t *)g35 = v17 + __asm_rlwinm(v12, 0, 16, 19);
				// branch -> 0xd8dec
			}
			// 0xd8dec
			g34 = &v5;
			v13 = *(int32_t *)g33;
			v18 = *(int32_t *)(v13 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
			g11 = v18;
			v5 = v18;
			function_d8e50();
			g15 = *(int32_t *)(g32 + 4 * (__asm_rlwinm(*(int32_t *)g35, 20, 29, 31) + 8 + g30));
			g34 = g29;
			result = FunctionPointer();
			// branch -> 0xd8e3c
			// 0xd8e3c
			g10 = v1;
			return result;
		}
		// 0xd8c88
		v9 = *(int32_t *)g35;
		if (v8 == (int32_t) * (char *)*(int32_t *)(g23 - 0x70cc)) {
			// 0xd8d50
			if (__asm_rlwinm_(v9, 0, 16, 16) != 0) {
				// 0xd8d5c
				v15 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v9, 6, 14, 25));
				*(int32_t *)g35 = v15 + __asm_rlwinm(v9, 0, 16, 19);
				// branch -> 0xd8d74
			}
			// 0xd8d74
			g34 = &v5;
			v10 = *(int32_t *)g33;
			v16 = *(int32_t *)(v10 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
			g11 = v16;
			v5 = v16;
			function_d8e50();
			v11 = g30 + __asm_rlwinm(*(int32_t *)g35, 20, 29, 31);
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c8) + 4 * v11);
			g34 = g29;
			result2 = FunctionPointer();
			// branch -> 0xd8e3c
			// 0xd8e3c
			g10 = v1;
			return result2;
		}
		// 0xd8c9c
		if (__asm_rlwinm_(v9, 0, 16, 16) == 0) {
			// 0xd8ca8
			v6 = __asm_rlwinm(v9, 2, 18, 29);
			g34 = &v5;
			v14 = *(int32_t *)(*(int32_t *)g33 + v6);
			g11 = v14;
			v5 = v14;
			function_d8e50();
			v7 = __asm_rlwinm(*(int32_t *)g35, 20, 28, 31);
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c0) + 4 * (g30 + v7));
			g34 = g29;
			result3 = FunctionPointer();
			// branch -> 0xd8e3c
		} else {
			// 0xd8d08
			__asm_rlwinm(v9, 4, 16, 27);
			g15 = *(int32_t *)(g32 + 4 * (g30 + __asm_rlwinm(v9, 20, 28, 31)));
			g34 = g29;
			result3 = FunctionPointer();
			// branch -> 0xd8e3c
		}
		// 0xd8e3c
		g10 = v1;
		return result3;
	}
	char v19 = *(char *)*(int32_t *)(g23 - 0x6f4c); // 0xd8be0
	if (v19 != 1) {
		// 0xd8bf0
		if (v19 > 1) {
			// 0xd8c00
			if (v19 == 2) {
				unsigned char v20 = *(char *)(*(int32_t *)v3 + v4); // 0xd8c50
				if (v20 <= 3) {
					// 0xd8c5c
					if (v20 > 1) {
						// 0xd8c68
						g30 = 64;
						g31 = *(int32_t *)(g23 - 0x6e88) + 124;
						// branch -> 0xd8c74
					}
				}
			}
		} else {
			// 0xd8bf4
			if (v19 > -1) {
				// 0xd8c0c
				g30 = 32;
				// branch -> 0xd8c74
			}
		}
		// 0xd8c74
		*(int32_t *)v2 = *(int32_t *)(g23 - 0x724c);
		v8 = *(int32_t *)g36;
		if (v8 == 0) {
			// 0xd8dc8
			v12 = *(int32_t *)g35;
			if (__asm_rlwinm_(v12, 0, 16, 16) != 0) {
				// 0xd8dd4
				v17 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v12, 6, 14, 25));
				*(int32_t *)g35 = v17 + __asm_rlwinm(v12, 0, 16, 19);
				// branch -> 0xd8dec
			}
			// 0xd8dec
			g34 = &v5;
			v13 = *(int32_t *)g33;
			v18 = *(int32_t *)(v13 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
			g11 = v18;
			v5 = v18;
			function_d8e50();
			g15 = *(int32_t *)(g32 + 4 * (__asm_rlwinm(*(int32_t *)g35, 20, 29, 31) + 8 + g30));
			g34 = g29;
			result = FunctionPointer();
			// branch -> 0xd8e3c
			// 0xd8e3c
			g10 = v1;
			return result;
		}
		// 0xd8c88
		v9 = *(int32_t *)g35;
		if (v8 == (int32_t) * (char *)*(int32_t *)(g23 - 0x70cc)) {
			// 0xd8d50
			if (__asm_rlwinm_(v9, 0, 16, 16) != 0) {
				// 0xd8d5c
				v15 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v9, 6, 14, 25));
				*(int32_t *)g35 = v15 + __asm_rlwinm(v9, 0, 16, 19);
				// branch -> 0xd8d74
			}
			// 0xd8d74
			g34 = &v5;
			v10 = *(int32_t *)g33;
			v16 = *(int32_t *)(v10 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
			g11 = v16;
			v5 = v16;
			function_d8e50();
			v11 = g30 + __asm_rlwinm(*(int32_t *)g35, 20, 29, 31);
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c8) + 4 * v11);
			g34 = g29;
			result2 = FunctionPointer();
			// branch -> 0xd8e3c
			// 0xd8e3c
			g10 = v1;
			return result2;
		}
		// 0xd8c9c
		if (__asm_rlwinm_(v9, 0, 16, 16) == 0) {
			// 0xd8ca8
			v6 = __asm_rlwinm(v9, 2, 18, 29);
			g34 = &v5;
			v14 = *(int32_t *)(*(int32_t *)g33 + v6);
			g11 = v14;
			v5 = v14;
			function_d8e50();
			v7 = __asm_rlwinm(*(int32_t *)g35, 20, 28, 31);
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c0) + 4 * (g30 + v7));
			g34 = g29;
			result3 = FunctionPointer();
			// branch -> 0xd8e3c
		} else {
			// 0xd8d08
			__asm_rlwinm(v9, 4, 16, 27);
			g15 = *(int32_t *)(g32 + 4 * (g30 + __asm_rlwinm(v9, 20, 28, 31)));
			g34 = g29;
			result3 = FunctionPointer();
			// branch -> 0xd8e3c
		}
		// 0xd8e3c
		g10 = v1;
		return result3;
	}
	unsigned char v21 = *(char *)(*(int32_t *)v3 + v4); // 0xd8c18
	if (v21 != 2) {
		// 0xd8c24
		if (v21 > 2) {
			// 0xd8c34
			if (v21 == 3) {
				// 0xd8c3c
				g30 = 64;
				g31 = *(int32_t *)(g23 - 0x6e84) + 124;
				// branch -> 0xd8c74
			}
		} else {
			// 0xd8c28
			if (v21 != 0) {
				// 0xd8c3c
				g30 = 64;
				g31 = *(int32_t *)(g23 - 0x6e84) + 124;
				// branch -> 0xd8c74
			}
		}
		// 0xd8c74
		*(int32_t *)v2 = *(int32_t *)(g23 - 0x724c);
		v8 = *(int32_t *)g36;
		if (v8 == 0) {
			// 0xd8dc8
			v12 = *(int32_t *)g35;
			if (__asm_rlwinm_(v12, 0, 16, 16) != 0) {
				// 0xd8dd4
				v17 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v12, 6, 14, 25));
				*(int32_t *)g35 = v17 + __asm_rlwinm(v12, 0, 16, 19);
				// branch -> 0xd8dec
			}
			// 0xd8dec
			g34 = &v5;
			v13 = *(int32_t *)g33;
			v18 = *(int32_t *)(v13 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
			g11 = v18;
			v5 = v18;
			function_d8e50();
			g15 = *(int32_t *)(g32 + 4 * (__asm_rlwinm(*(int32_t *)g35, 20, 29, 31) + 8 + g30));
			g34 = g29;
			result = FunctionPointer();
			// branch -> 0xd8e3c
			// 0xd8e3c
			g10 = v1;
			return result;
		}
		// 0xd8c88
		v9 = *(int32_t *)g35;
		if (v8 == (int32_t) * (char *)*(int32_t *)(g23 - 0x70cc)) {
			// 0xd8d50
			if (__asm_rlwinm_(v9, 0, 16, 16) != 0) {
				// 0xd8d5c
				v15 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v9, 6, 14, 25));
				*(int32_t *)g35 = v15 + __asm_rlwinm(v9, 0, 16, 19);
				// branch -> 0xd8d74
			}
			// 0xd8d74
			g34 = &v5;
			v10 = *(int32_t *)g33;
			v16 = *(int32_t *)(v10 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
			g11 = v16;
			v5 = v16;
			function_d8e50();
			v11 = g30 + __asm_rlwinm(*(int32_t *)g35, 20, 29, 31);
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c8) + 4 * v11);
			g34 = g29;
			result2 = FunctionPointer();
			// branch -> 0xd8e3c
			// 0xd8e3c
			g10 = v1;
			return result2;
		}
		// 0xd8c9c
		if (__asm_rlwinm_(v9, 0, 16, 16) == 0) {
			// 0xd8ca8
			v6 = __asm_rlwinm(v9, 2, 18, 29);
			g34 = &v5;
			v14 = *(int32_t *)(*(int32_t *)g33 + v6);
			g11 = v14;
			v5 = v14;
			function_d8e50();
			v7 = __asm_rlwinm(*(int32_t *)g35, 20, 28, 31);
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c0) + 4 * (g30 + v7));
			g34 = g29;
			result3 = FunctionPointer();
			// branch -> 0xd8e3c
		} else {
			// 0xd8d08
			__asm_rlwinm(v9, 4, 16, 27);
			g15 = *(int32_t *)(g32 + 4 * (g30 + __asm_rlwinm(v9, 20, 28, 31)));
			g34 = g29;
			result3 = FunctionPointer();
			// branch -> 0xd8e3c
		}
		// 0xd8e3c
		g10 = v1;
		return result3;
	}
	// 0xd8c74
	*(int32_t *)v2 = *(int32_t *)(g23 - 0x724c);
	v8 = *(int32_t *)g36;
	if (v8 == 0) {
		// 0xd8dc8
		v12 = *(int32_t *)g35;
		if (__asm_rlwinm_(v12, 0, 16, 16) != 0) {
			// 0xd8dd4
			v17 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v12, 6, 14, 25));
			*(int32_t *)g35 = v17 + __asm_rlwinm(v12, 0, 16, 19);
			// branch -> 0xd8dec
		}
		// 0xd8dec
		g34 = &v5;
		v13 = *(int32_t *)g33;
		v18 = *(int32_t *)(v13 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
		g11 = v18;
		v5 = v18;
		function_d8e50();
		g15 = *(int32_t *)(g32 + 4 * (__asm_rlwinm(*(int32_t *)g35, 20, 29, 31) + 8 + g30));
		g34 = g29;
		result = FunctionPointer();
		// branch -> 0xd8e3c
		// 0xd8e3c
		g10 = v1;
		return result;
	}
	// 0xd8c88
	v9 = *(int32_t *)g35;
	if (v8 == (int32_t) * (char *)*(int32_t *)(g23 - 0x70cc)) {
		// 0xd8d50
		if (__asm_rlwinm_(v9, 0, 16, 16) != 0) {
			// 0xd8d5c
			v15 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v9, 6, 14, 25));
			*(int32_t *)g35 = v15 + __asm_rlwinm(v9, 0, 16, 19);
			// branch -> 0xd8d74
		}
		// 0xd8d74
		g34 = &v5;
		v10 = *(int32_t *)g33;
		v16 = *(int32_t *)(v10 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
		g11 = v16;
		v5 = v16;
		function_d8e50();
		v11 = g30 + __asm_rlwinm(*(int32_t *)g35, 20, 29, 31);
		g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c8) + 4 * v11);
		g34 = g29;
		result2 = FunctionPointer();
		// branch -> 0xd8e3c
		// 0xd8e3c
		g10 = v1;
		return result2;
	}
	// 0xd8c9c
	if (__asm_rlwinm_(v9, 0, 16, 16) == 0) {
		// 0xd8ca8
		v6 = __asm_rlwinm(v9, 2, 18, 29);
		g34 = &v5;
		v14 = *(int32_t *)(*(int32_t *)g33 + v6);
		g11 = v14;
		v5 = v14;
		function_d8e50();
		v7 = __asm_rlwinm(*(int32_t *)g35, 20, 28, 31);
		g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c0) + 4 * (g30 + v7));
		g34 = g29;
		result3 = FunctionPointer();
		// branch -> 0xd8e3c
	} else {
		// 0xd8d08
		__asm_rlwinm(v9, 4, 16, 27);
		g15 = *(int32_t *)(g32 + 4 * (g30 + __asm_rlwinm(v9, 20, 28, 31)));
		g34 = g29;
		result3 = FunctionPointer();
		// branch -> 0xd8e3c
	}
	// 0xd8e3c
	g10 = v1;
	return result3;
}

// Address range: 0xd8e50 - 0xd8e58
int32_t function_d8e50(void)
{
	// 0xd8e50
	return __asm_lwbrx(g11, g34);
}

// Address range: 0xd8e58 - 0xd9114
int32_t drawLowerScreen(int32_t a1)
{
	int32_t v1 = g10; // 0xd8e5c
	g29 = a1;
	g32 = *(int32_t *)(g23 - 0x54c4);
	g33 = *(int32_t *)(g23 - 0x75e8);
	g31 = 0;
	g35 = *(int32_t *)(g23 - 0x6f50);
	g30 = 16;
	g36 = *(int32_t *)(g23 - 0x7290);
	int32_t v2 = *(int32_t *)(g23 - 0x6e8c); // 0xd8e80
	int32_t v3 = *(int32_t *)(g23 - 0x6f48); // 0xd8e84
	int32_t v4 = *(int32_t *)(g23 - 0x723c); // 0xd8e88
	int32_t v5;                              // bp-36
	int32_t result2;                         // 0xd9080
	int32_t result;                          // 0xd90f8
	int32_t result3;                         // 0xd9110
	int32_t v6;                              // 0xd8f70
	int32_t v7;                              // 0xd8f90
	int32_t v8;                              // 0xd8f40
	int32_t v9;                              // 0xd9014
	int32_t v10;                             // 0xd9040
	int32_t v11;                             // 0xd9068
	int32_t v12;                             // 0xd908c
	int32_t v13;                             // 0xd90b8
	int32_t v14;                             // 0xd8f78
	int32_t v15;                             // 0xd9028
	int32_t v16;                             // 0xd9048
	int32_t v17;                             // 0xd90a0
	int32_t v18;                             // 0xd90c0
	if (*(int32_t *)*(int32_t *)(g23 - 0x7294) == 0) {
		// 0xd8f38
		*(int32_t *)v2 = *(int32_t *)(g23 - 0x724c);
		v8 = *(int32_t *)g36;
		if (v8 == 0) {
			// 0xd908c
			v12 = *(int32_t *)g35;
			if (__asm_rlwinm_(v12, 0, 16, 16) != 0) {
				// 0xd9098
				v17 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v12, 6, 14, 25));
				*(int32_t *)g35 = v17 + __asm_rlwinm(v12, 0, 16, 19);
				// branch -> 0xd90b0
			}
			// 0xd90b0
			g34 = &v5;
			v13 = *(int32_t *)g33;
			v18 = *(int32_t *)(v13 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
			g11 = v18;
			v5 = v18;
			function_d8e50();
			g15 = *(int32_t *)(g32 + 4 * (__asm_rlwinm(*(int32_t *)g35, 20, 29, 31) + 8 + g30));
			g34 = g29;
			result = FunctionPointer();
			// branch -> 0xd9100
			// 0xd9100
			g10 = v1;
			return result;
		}
		// 0xd8f4c
		v9 = *(int32_t *)g35;
		if (v8 == (int32_t) * (char *)*(int32_t *)(g23 - 0x70cc)) {
			// 0xd9014
			if (__asm_rlwinm_(v9, 0, 16, 16) != 0) {
				// 0xd9020
				v15 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v9, 6, 14, 25));
				*(int32_t *)g35 = v15 + __asm_rlwinm(v9, 0, 16, 19);
				// branch -> 0xd9038
			}
			// 0xd9038
			g34 = &v5;
			v10 = *(int32_t *)g33;
			v16 = *(int32_t *)(v10 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
			g11 = v16;
			v5 = v16;
			function_d8e50();
			v11 = g30 + __asm_rlwinm(*(int32_t *)g35, 20, 29, 31);
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c8) + 4 * v11);
			g34 = g29;
			result2 = FunctionPointer();
			// branch -> 0xd9100
			// 0xd9100
			g10 = v1;
			return result2;
		}
		// 0xd8f60
		if (__asm_rlwinm_(v9, 0, 16, 16) == 0) {
			// 0xd8f6c
			v6 = __asm_rlwinm(v9, 2, 18, 29);
			g34 = &v5;
			v14 = *(int32_t *)(*(int32_t *)g33 + v6);
			g11 = v14;
			v5 = v14;
			function_d8e50();
			v7 = __asm_rlwinm(*(int32_t *)g35, 20, 28, 31);
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c0) + 4 * (g30 + v7));
			g34 = g29;
			result3 = FunctionPointer();
			// branch -> 0xd9100
		} else {
			// 0xd8fcc
			__asm_rlwinm(v9, 4, 16, 27);
			g15 = *(int32_t *)(g32 + 4 * (g30 + __asm_rlwinm(v9, 20, 28, 31)));
			g34 = g29;
			result3 = FunctionPointer();
			// branch -> 0xd9100
		}
		// 0xd9100
		g10 = v1;
		return result3;
	}
	char v19 = *(char *)*(int32_t *)(g23 - 0x6f4c); // 0xd8ea4
	if (v19 != 1) {
		// 0xd8eb4
		if (v19 > 1) {
			// 0xd8ec4
			if (v19 == 2) {
				unsigned char v20 = *(char *)(*(int32_t *)v3 + v4); // 0xd8f14
				if (v20 <= 3) {
					// 0xd8f20
					if (v20 > 1) {
						// 0xd8f2c
						g30 = 80;
						g31 = *(int32_t *)(g23 - 0x6e88) + 124;
						// branch -> 0xd8f38
					}
				}
			}
		} else {
			// 0xd8eb8
			if (v19 > -1) {
				// 0xd8ed0
				g30 = 48;
				// branch -> 0xd8f38
			}
		}
		// 0xd8f38
		*(int32_t *)v2 = *(int32_t *)(g23 - 0x724c);
		v8 = *(int32_t *)g36;
		if (v8 == 0) {
			// 0xd908c
			v12 = *(int32_t *)g35;
			if (__asm_rlwinm_(v12, 0, 16, 16) != 0) {
				// 0xd9098
				v17 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v12, 6, 14, 25));
				*(int32_t *)g35 = v17 + __asm_rlwinm(v12, 0, 16, 19);
				// branch -> 0xd90b0
			}
			// 0xd90b0
			g34 = &v5;
			v13 = *(int32_t *)g33;
			v18 = *(int32_t *)(v13 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
			g11 = v18;
			v5 = v18;
			function_d8e50();
			g15 = *(int32_t *)(g32 + 4 * (__asm_rlwinm(*(int32_t *)g35, 20, 29, 31) + 8 + g30));
			g34 = g29;
			result = FunctionPointer();
			// branch -> 0xd9100
			// 0xd9100
			g10 = v1;
			return result;
		}
		// 0xd8f4c
		v9 = *(int32_t *)g35;
		if (v8 == (int32_t) * (char *)*(int32_t *)(g23 - 0x70cc)) {
			// 0xd9014
			if (__asm_rlwinm_(v9, 0, 16, 16) != 0) {
				// 0xd9020
				v15 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v9, 6, 14, 25));
				*(int32_t *)g35 = v15 + __asm_rlwinm(v9, 0, 16, 19);
				// branch -> 0xd9038
			}
			// 0xd9038
			g34 = &v5;
			v10 = *(int32_t *)g33;
			v16 = *(int32_t *)(v10 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
			g11 = v16;
			v5 = v16;
			function_d8e50();
			v11 = g30 + __asm_rlwinm(*(int32_t *)g35, 20, 29, 31);
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c8) + 4 * v11);
			g34 = g29;
			result2 = FunctionPointer();
			// branch -> 0xd9100
			// 0xd9100
			g10 = v1;
			return result2;
		}
		// 0xd8f60
		if (__asm_rlwinm_(v9, 0, 16, 16) == 0) {
			// 0xd8f6c
			v6 = __asm_rlwinm(v9, 2, 18, 29);
			g34 = &v5;
			v14 = *(int32_t *)(*(int32_t *)g33 + v6);
			g11 = v14;
			v5 = v14;
			function_d8e50();
			v7 = __asm_rlwinm(*(int32_t *)g35, 20, 28, 31);
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c0) + 4 * (g30 + v7));
			g34 = g29;
			result3 = FunctionPointer();
			// branch -> 0xd9100
		} else {
			// 0xd8fcc
			__asm_rlwinm(v9, 4, 16, 27);
			g15 = *(int32_t *)(g32 + 4 * (g30 + __asm_rlwinm(v9, 20, 28, 31)));
			g34 = g29;
			result3 = FunctionPointer();
			// branch -> 0xd9100
		}
		// 0xd9100
		g10 = v1;
		return result3;
	}
	unsigned char v21 = *(char *)(*(int32_t *)v3 + v4); // 0xd8edc
	if (v21 != 2) {
		// 0xd8ee8
		if (v21 > 2) {
			// 0xd8ef8
			if (v21 == 3) {
				// 0xd8f00
				g30 = 80;
				g31 = *(int32_t *)(g23 - 0x6e84) + 124;
				// branch -> 0xd8f38
			}
		} else {
			// 0xd8eec
			if (v21 != 0) {
				// 0xd8f00
				g30 = 80;
				g31 = *(int32_t *)(g23 - 0x6e84) + 124;
				// branch -> 0xd8f38
			}
		}
		// 0xd8f38
		*(int32_t *)v2 = *(int32_t *)(g23 - 0x724c);
		v8 = *(int32_t *)g36;
		if (v8 == 0) {
			// 0xd908c
			v12 = *(int32_t *)g35;
			if (__asm_rlwinm_(v12, 0, 16, 16) != 0) {
				// 0xd9098
				v17 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v12, 6, 14, 25));
				*(int32_t *)g35 = v17 + __asm_rlwinm(v12, 0, 16, 19);
				// branch -> 0xd90b0
			}
			// 0xd90b0
			g34 = &v5;
			v13 = *(int32_t *)g33;
			v18 = *(int32_t *)(v13 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
			g11 = v18;
			v5 = v18;
			function_d8e50();
			g15 = *(int32_t *)(g32 + 4 * (__asm_rlwinm(*(int32_t *)g35, 20, 29, 31) + 8 + g30));
			g34 = g29;
			result = FunctionPointer();
			// branch -> 0xd9100
			// 0xd9100
			g10 = v1;
			return result;
		}
		// 0xd8f4c
		v9 = *(int32_t *)g35;
		if (v8 == (int32_t) * (char *)*(int32_t *)(g23 - 0x70cc)) {
			// 0xd9014
			if (__asm_rlwinm_(v9, 0, 16, 16) != 0) {
				// 0xd9020
				v15 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v9, 6, 14, 25));
				*(int32_t *)g35 = v15 + __asm_rlwinm(v9, 0, 16, 19);
				// branch -> 0xd9038
			}
			// 0xd9038
			g34 = &v5;
			v10 = *(int32_t *)g33;
			v16 = *(int32_t *)(v10 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
			g11 = v16;
			v5 = v16;
			function_d8e50();
			v11 = g30 + __asm_rlwinm(*(int32_t *)g35, 20, 29, 31);
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c8) + 4 * v11);
			g34 = g29;
			result2 = FunctionPointer();
			// branch -> 0xd9100
			// 0xd9100
			g10 = v1;
			return result2;
		}
		// 0xd8f60
		if (__asm_rlwinm_(v9, 0, 16, 16) == 0) {
			// 0xd8f6c
			v6 = __asm_rlwinm(v9, 2, 18, 29);
			g34 = &v5;
			v14 = *(int32_t *)(*(int32_t *)g33 + v6);
			g11 = v14;
			v5 = v14;
			function_d8e50();
			v7 = __asm_rlwinm(*(int32_t *)g35, 20, 28, 31);
			g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c0) + 4 * (g30 + v7));
			g34 = g29;
			result3 = FunctionPointer();
			// branch -> 0xd9100
		} else {
			// 0xd8fcc
			__asm_rlwinm(v9, 4, 16, 27);
			g15 = *(int32_t *)(g32 + 4 * (g30 + __asm_rlwinm(v9, 20, 28, 31)));
			g34 = g29;
			result3 = FunctionPointer();
			// branch -> 0xd9100
		}
		// 0xd9100
		g10 = v1;
		return result3;
	}
	// 0xd8f38
	*(int32_t *)v2 = *(int32_t *)(g23 - 0x724c);
	v8 = *(int32_t *)g36;
	if (v8 == 0) {
		// 0xd908c
		v12 = *(int32_t *)g35;
		if (__asm_rlwinm_(v12, 0, 16, 16) != 0) {
			// 0xd9098
			v17 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v12, 6, 14, 25));
			*(int32_t *)g35 = v17 + __asm_rlwinm(v12, 0, 16, 19);
			// branch -> 0xd90b0
		}
		// 0xd90b0
		g34 = &v5;
		v13 = *(int32_t *)g33;
		v18 = *(int32_t *)(v13 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
		g11 = v18;
		v5 = v18;
		function_d8e50();
		g15 = *(int32_t *)(g32 + 4 * (__asm_rlwinm(*(int32_t *)g35, 20, 29, 31) + 8 + g30));
		g34 = g29;
		result = FunctionPointer();
		// branch -> 0xd9100
		// 0xd9100
		g10 = v1;
		return result;
	}
	// 0xd8f4c
	v9 = *(int32_t *)g35;
	if (v8 == (int32_t) * (char *)*(int32_t *)(g23 - 0x70cc)) {
		// 0xd9014
		if (__asm_rlwinm_(v9, 0, 16, 16) != 0) {
			// 0xd9020
			v15 = *(int32_t *)(*(int32_t *)v2 + __asm_rlwinm(v9, 6, 14, 25));
			*(int32_t *)g35 = v15 + __asm_rlwinm(v9, 0, 16, 19);
			// branch -> 0xd9038
		}
		// 0xd9038
		g34 = &v5;
		v10 = *(int32_t *)g33;
		v16 = *(int32_t *)(v10 + __asm_rlwinm(*(int32_t *)g35, 2, 18, 29));
		g11 = v16;
		v5 = v16;
		function_d8e50();
		v11 = g30 + __asm_rlwinm(*(int32_t *)g35, 20, 29, 31);
		g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c8) + 4 * v11);
		g34 = g29;
		result2 = FunctionPointer();
		// branch -> 0xd9100
		// 0xd9100
		g10 = v1;
		return result2;
	}
	// 0xd8f60
	if (__asm_rlwinm_(v9, 0, 16, 16) == 0) {
		// 0xd8f6c
		v6 = __asm_rlwinm(v9, 2, 18, 29);
		g34 = &v5;
		v14 = *(int32_t *)(*(int32_t *)g33 + v6);
		g11 = v14;
		v5 = v14;
		function_d8e50();
		v7 = __asm_rlwinm(*(int32_t *)g35, 20, 28, 31);
		g15 = *(int32_t *)(*(int32_t *)(g23 - 0x54c0) + 4 * (g30 + v7));
		g34 = g29;
		result3 = FunctionPointer();
		// branch -> 0xd9100
	} else {
		// 0xd8fcc
		__asm_rlwinm(v9, 4, 16, 27);
		g15 = *(int32_t *)(g32 + 4 * (g30 + __asm_rlwinm(v9, 20, 28, 31)));
		g34 = g29;
		result3 = FunctionPointer();
		// branch -> 0xd9100
	}
	// 0xd9100
	g10 = v1;
	return result3;
}

// Address range: 0xd9114 - 0xd9138
int32_t world_draw_black_tile(int32_t a1, int32_t a2)
{
	// 0xd9114
	return world_draw_black_tile_part(0, 0);
}

// Address range: 0xd9144 - 0xd91e4
int32_t function_d9144(char *a1, int32_t result)
{
	int32_t v1 = (int32_t)a1;
	*(int32_t *)a1 = v1 + 32;
	*(int32_t *)result = result + 32;
	*(char *)v1 = *(char *)&g37;
	*(char *)(v1 + 2) = *(char *)(result + 2);
	*(char *)(v1 + 4) = *(char *)(result + 4);
	*(char *)(v1 + 6) = *(char *)(result + 6);
	*(char *)(v1 + 8) = *(char *)(result + 8);
	*(char *)(v1 + 10) = *(char *)(result + 10);
	*(char *)(v1 + 12) = *(char *)(result + 12);
	*(char *)(v1 + 14) = *(char *)(result + 14);
	*(char *)(v1 + 16) = *(char *)(result + 16);
	*(char *)(v1 + 18) = *(char *)(result + 18);
	*(char *)(v1 + 20) = *(char *)(result + 20);
	*(char *)(v1 + 22) = *(char *)(result + 22);
	*(char *)(v1 + 24) = *(char *)(result + 24);
	*(char *)(v1 + 26) = *(char *)(result + 26);
	*(char *)(v1 + 28) = *(char *)(result + 28);
	*(char *)(v1 + 30) = *(char *)(result + 30);
	return result;
}

// Address range: 0xd91e4 - 0xd9284
int32_t function_d91e4(int32_t *a1, int32_t result)
{
	int32_t v1 = (int32_t)a1;
	*a1 = v1 + 32;
	*(int32_t *)result = result + 32;
	*(char *)(v1 + 1) = *(char *)(result + 1);
	*(char *)(v1 + 3) = *(char *)(result + 3);
	*(char *)(v1 + 5) = *(char *)(result + 5);
	*(char *)(v1 + 7) = *(char *)(result + 7);
	*(char *)(v1 + 9) = *(char *)(result + 9);
	*(char *)(v1 + 11) = *(char *)(result + 11);
	*(char *)(v1 + 13) = *(char *)(result + 13);
	*(char *)(v1 + 15) = *(char *)(result + 15);
	*(char *)(v1 + 17) = *(char *)(result + 17);
	*(char *)(v1 + 19) = *(char *)(result + 19);
	*(char *)(v1 + 21) = *(char *)(result + 21);
	*(char *)(v1 + 23) = *(char *)(result + 23);
	*(char *)(v1 + 25) = *(char *)(result + 25);
	*(char *)(v1 + 27) = *(char *)(result + 27);
	*(char *)(v1 + 29) = *(char *)(result + 29);
	*(char *)(v1 + 31) = *(char *)(result + 31);
	return result;
}

// Address range: 0xd9284 - 0xd94f4
int32_t function_d9284(char *a1, int32_t result, uint32_t a3)
{
	int32_t v1 = (int32_t)a1;
	*(int32_t *)a1 = v1 + 32;
	*(int32_t *)result = result + 32;
	if (a3 + (int32_t) "MoveWindow" == 0xffff) {
		// 0xd92ac
		*(int32_t *)v1 = result;
		*(int32_t *)(v1 + 4) = *(int32_t *)(result + 4);
		*(int32_t *)(v1 + 8) = *(int32_t *)(result + 8);
		*(int32_t *)(v1 + 12) = *(int32_t *)(result + 12);
		*(int32_t *)(v1 + 16) = *(int32_t *)(result + 16);
		*(int32_t *)(v1 + 20) = *(int32_t *)(result + 20);
		*(int32_t *)(v1 + 24) = *(int32_t *)(result + 24);
		*(int32_t *)(v1 + 28) = *(int32_t *)(result + 28);
		return result;
	}
	// 0xd92f0
	if (__asm_rlwinm_(a3, 0, 0, 0) != 0) {
		// 0xd92f8
		*(char *)v1 = *(char *)&g37;
		// branch -> 0xd9300
	}
	// 0xd9300
	if (__asm_rlwinm_(a3, 0, 1, 1) != 0) {
		// 0xd9308
		*(char *)(v1 + 1) = *(char *)(result + 1);
		// branch -> 0xd9310
	}
	// 0xd9310
	if (__asm_rlwinm_(a3, 0, 2, 2) != 0) {
		// 0xd9318
		*(char *)(v1 + 2) = *(char *)(result + 2);
		// branch -> 0xd9320
	}
	// 0xd9320
	if (__asm_rlwinm_(a3, 0, 3, 3) != 0) {
		// 0xd9328
		*(char *)(v1 + 3) = *(char *)(result + 3);
		// branch -> 0xd9330
	}
	// 0xd9330
	if (__asm_rlwinm_(a3, 0, 4, 4) != 0) {
		// 0xd9338
		*(char *)(v1 + 4) = *(char *)(result + 4);
		// branch -> 0xd9340
	}
	// 0xd9340
	if (__asm_rlwinm_(a3, 0, 5, 5) != 0) {
		// 0xd9348
		*(char *)(v1 + 5) = *(char *)(result + 5);
		// branch -> 0xd9350
	}
	// 0xd9350
	if (__asm_rlwinm_(a3, 0, 6, 6) != 0) {
		// 0xd9358
		*(char *)(v1 + 6) = *(char *)(result + 6);
		// branch -> 0xd9360
	}
	// 0xd9360
	if (__asm_rlwinm_(a3, 0, 7, 7) != 0) {
		// 0xd9368
		*(char *)(v1 + 7) = *(char *)(result + 7);
		// branch -> 0xd9370
	}
	// 0xd9370
	if (__asm_rlwinm_(a3, 0, 8, 8) != 0) {
		// 0xd9378
		*(char *)(v1 + 8) = *(char *)(result + 8);
		// branch -> 0xd9380
	}
	// 0xd9380
	if (__asm_rlwinm_(a3, 0, 9, 9) != 0) {
		// 0xd9388
		*(char *)(v1 + 9) = *(char *)(result + 9);
		// branch -> 0xd9390
	}
	// 0xd9390
	if (__asm_rlwinm_(a3, 0, 10, 10) != 0) {
		// 0xd9398
		*(char *)(v1 + 10) = *(char *)(result + 10);
		// branch -> 0xd93a0
	}
	// 0xd93a0
	if (__asm_rlwinm_(a3, 0, 11, 11) != 0) {
		// 0xd93a8
		*(char *)(v1 + 11) = *(char *)(result + 11);
		// branch -> 0xd93b0
	}
	// 0xd93b0
	if (__asm_rlwinm_(a3, 0, 12, 12) != 0) {
		// 0xd93b8
		*(char *)(v1 + 12) = *(char *)(result + 12);
		// branch -> 0xd93c0
	}
	// 0xd93c0
	if (__asm_rlwinm_(a3, 0, 13, 13) != 0) {
		// 0xd93c8
		*(char *)(v1 + 13) = *(char *)(result + 13);
		// branch -> 0xd93d0
	}
	// 0xd93d0
	if (__asm_rlwinm_(a3, 0, 14, 14) != 0) {
		// 0xd93d8
		*(char *)(v1 + 14) = *(char *)(result + 14);
		// branch -> 0xd93e0
	}
	// 0xd93e0
	if (__asm_rlwinm_(a3, 0, 15, 15) != 0) {
		// 0xd93e8
		*(char *)(v1 + 15) = *(char *)(result + 15);
		// branch -> 0xd93f0
	}
	// 0xd93f0
	if (__asm_rlwinm_(a3, 0, 16, 16) != 0) {
		// 0xd93f8
		*(char *)(v1 + 16) = *(char *)(result + 16);
		// branch -> 0xd9400
	}
	// 0xd9400
	if (__asm_rlwinm_(a3, 0, 17, 17) != 0) {
		// 0xd9408
		*(char *)(v1 + 17) = *(char *)(result + 17);
		// branch -> 0xd9410
	}
	// 0xd9410
	if (__asm_rlwinm_(a3, 0, 18, 18) != 0) {
		// 0xd9418
		*(char *)(v1 + 18) = *(char *)(result + 18);
		// branch -> 0xd9420
	}
	// 0xd9420
	if (__asm_rlwinm_(a3, 0, 19, 19) != 0) {
		// 0xd9428
		*(char *)(v1 + 19) = *(char *)(result + 19);
		// branch -> 0xd9430
	}
	// 0xd9430
	if (__asm_rlwinm_(a3, 0, 20, 20) != 0) {
		// 0xd9438
		*(char *)(v1 + 20) = *(char *)(result + 20);
		// branch -> 0xd9440
	}
	// 0xd9440
	if (__asm_rlwinm_(a3, 0, 21, 21) != 0) {
		// 0xd9448
		*(char *)(v1 + 21) = *(char *)(result + 21);
		// branch -> 0xd9450
	}
	// 0xd9450
	if (__asm_rlwinm_(a3, 0, 22, 22) != 0) {
		// 0xd9458
		*(char *)(v1 + 22) = *(char *)(result + 22);
		// branch -> 0xd9460
	}
	// 0xd9460
	if (__asm_rlwinm_(a3, 0, 23, 23) != 0) {
		// 0xd9468
		*(char *)(v1 + 23) = *(char *)(result + 23);
		// branch -> 0xd9470
	}
	// 0xd9470
	if (__asm_rlwinm_(a3, 0, 24, 24) != 0) {
		// 0xd9478
		*(char *)(v1 + 24) = *(char *)(result + 24);
		// branch -> 0xd9480
	}
	// 0xd9480
	if (__asm_rlwinm_(a3, 0, 25, 25) != 0) {
		// 0xd9488
		*(char *)(v1 + 25) = *(char *)(result + 25);
		// branch -> 0xd9490
	}
	// 0xd9490
	if (__asm_rlwinm_(a3, 0, 26, 26) != 0) {
		// 0xd9498
		*(char *)(v1 + 26) = *(char *)(result + 26);
		// branch -> 0xd94a0
	}
	// 0xd94a0
	if (__asm_rlwinm_(a3, 0, 27, 27) != 0) {
		// 0xd94a8
		*(char *)(v1 + 27) = *(char *)(result + 27);
		// branch -> 0xd94b0
	}
	// 0xd94b0
	if (__asm_rlwinm_(a3, 0, 28, 28) != 0) {
		// 0xd94b8
		*(char *)(v1 + 28) = *(char *)(result + 28);
		// branch -> 0xd94c0
	}
	// 0xd94c0
	if (__asm_rlwinm_(a3, 0, 29, 29) != 0) {
		// 0xd94c8
		*(char *)(v1 + 29) = *(char *)(result + 29);
		// branch -> 0xd94d0
	}
	// 0xd94d0
	if (__asm_rlwinm_(a3, 0, 30, 30) != 0) {
		// 0xd94d8
		*(char *)(v1 + 30) = *(char *)(result + 30);
		// branch -> 0xd94e0
	}
	// 0xd94e0
	if (a3 % 2 == 0) {
		// bb
		return result;
	}
	// 0xd94e8
	*(char *)(v1 + 31) = *(char *)(result + 31);
	return result;
}

// Address range: 0xd94f4 - 0xd9544
int32_t function_d94f4(char *a1, int32_t a2)
{
	int32_t result = (int32_t)a1;
	*(int32_t *)a1 = result + 32;
	*(char *)(result + 30) = (char)a2;
	*(char *)(result + 28) = (char)a2;
	*(char *)(result + 26) = (char)a2;
	*(char *)(result + 24) = (char)a2;
	*(char *)(result + 22) = (char)a2;
	*(char *)(result + 20) = (char)a2;
	*(char *)(result + 18) = (char)a2;
	*(char *)(result + 16) = (char)a2;
	*(char *)(result + 14) = (char)a2;
	*(char *)(result + 12) = (char)a2;
	*(char *)(result + 10) = (char)a2;
	*(char *)(result + 8) = (char)a2;
	*(char *)(result + 6) = (char)a2;
	*(char *)(result + 4) = (char)a2;
	*(char *)(result + 2) = (char)a2;
	*(char *)result = (char)a2;
	return result;
}

// Address range: 0xd9544 - 0xd9594
int32_t function_d9544(int32_t *a1, int32_t a2)
{
	int32_t result = (int32_t)a1;
	*a1 = result + 32;
	*(char *)(result + 31) = (char)a2;
	*(char *)(result + 29) = (char)a2;
	*(char *)(result + 27) = (char)a2;
	*(char *)(result + 25) = (char)a2;
	*(char *)(result + 23) = (char)a2;
	*(char *)(result + 21) = (char)a2;
	*(char *)(result + 19) = (char)a2;
	*(char *)(result + 17) = (char)a2;
	*(char *)(result + 15) = (char)a2;
	*(char *)(result + 13) = (char)a2;
	*(char *)(result + 11) = (char)a2;
	*(char *)(result + 9) = (char)a2;
	*(char *)(result + 7) = (char)a2;
	*(char *)(result + 5) = (char)a2;
	*(char *)(result + 3) = (char)a2;
	*(char *)(result + 1) = (char)a2;
	return result;
}

// Address range: 0xd9594 - 0xd9754
int32_t function_d9594(char *a1, int32_t a2, uint32_t a3)
{
	int32_t result = (int32_t)a1;
	*(int32_t *)a1 = result + 32;
	if (a3 + (int32_t) "MoveWindow" == 0xffff) {
		// 0xd95ac
		*(int32_t *)(result + 28) = a2;
		*(int32_t *)(result + 24) = a2;
		*(int32_t *)(result + 20) = a2;
		*(int32_t *)(result + 16) = a2;
		*(int32_t *)(result + 12) = a2;
		*(int32_t *)(result + 8) = a2;
		*(int32_t *)(result + 4) = a2;
		*(int32_t *)result = a2;
		return result;
	}
	// 0xd95d0
	if (__asm_rlwinm_(a3, 0, 0, 0) != 0) {
		// 0xd95d8
		*(char *)result = (char)a2;
		// branch -> 0xd95dc
	}
	// 0xd95dc
	if (__asm_rlwinm_(a3, 0, 1, 1) != 0) {
		// 0xd95e4
		*(char *)(result + 1) = (char)a2;
		// branch -> 0xd95e8
	}
	// 0xd95e8
	if (__asm_rlwinm_(a3, 0, 2, 2) != 0) {
		// 0xd95f0
		*(char *)(result + 2) = (char)a2;
		// branch -> 0xd95f4
	}
	// 0xd95f4
	if (__asm_rlwinm_(a3, 0, 3, 3) != 0) {
		// 0xd95fc
		*(char *)(result + 3) = (char)a2;
		// branch -> 0xd9600
	}
	// 0xd9600
	if (__asm_rlwinm_(a3, 0, 4, 4) != 0) {
		// 0xd9608
		*(char *)(result + 4) = (char)a2;
		// branch -> 0xd960c
	}
	// 0xd960c
	if (__asm_rlwinm_(a3, 0, 5, 5) != 0) {
		// 0xd9614
		*(char *)(result + 5) = (char)a2;
		// branch -> 0xd9618
	}
	// 0xd9618
	if (__asm_rlwinm_(a3, 0, 6, 6) != 0) {
		// 0xd9620
		*(char *)(result + 6) = (char)a2;
		// branch -> 0xd9624
	}
	// 0xd9624
	if (__asm_rlwinm_(a3, 0, 7, 7) != 0) {
		// 0xd962c
		*(char *)(result + 7) = (char)a2;
		// branch -> 0xd9630
	}
	// 0xd9630
	if (__asm_rlwinm_(a3, 0, 8, 8) != 0) {
		// 0xd9638
		*(char *)(result + 8) = (char)a2;
		// branch -> 0xd963c
	}
	// 0xd963c
	if (__asm_rlwinm_(a3, 0, 9, 9) != 0) {
		// 0xd9644
		*(char *)(result + 9) = (char)a2;
		// branch -> 0xd9648
	}
	// 0xd9648
	if (__asm_rlwinm_(a3, 0, 10, 10) != 0) {
		// 0xd9650
		*(char *)(result + 10) = (char)a2;
		// branch -> 0xd9654
	}
	// 0xd9654
	if (__asm_rlwinm_(a3, 0, 11, 11) != 0) {
		// 0xd965c
		*(char *)(result + 11) = (char)a2;
		// branch -> 0xd9660
	}
	// 0xd9660
	if (__asm_rlwinm_(a3, 0, 12, 12) != 0) {
		// 0xd9668
		*(char *)(result + 12) = (char)a2;
		// branch -> 0xd966c
	}
	// 0xd966c
	if (__asm_rlwinm_(a3, 0, 13, 13) != 0) {
		// 0xd9674
		*(char *)(result + 13) = (char)a2;
		// branch -> 0xd9678
	}
	// 0xd9678
	if (__asm_rlwinm_(a3, 0, 14, 14) != 0) {
		// 0xd9680
		*(char *)(result + 14) = (char)a2;
		// branch -> 0xd9684
	}
	// 0xd9684
	if (__asm_rlwinm_(a3, 0, 15, 15) != 0) {
		// 0xd968c
		*(char *)(result + 15) = (char)a2;
		// branch -> 0xd9690
	}
	// 0xd9690
	if (__asm_rlwinm_(a3, 0, 16, 16) != 0) {
		// 0xd9698
		*(char *)(result + 16) = (char)a2;
		// branch -> 0xd969c
	}
	// 0xd969c
	if (__asm_rlwinm_(a3, 0, 17, 17) != 0) {
		// 0xd96a4
		*(char *)(result + 17) = (char)a2;
		// branch -> 0xd96a8
	}
	// 0xd96a8
	if (__asm_rlwinm_(a3, 0, 18, 18) != 0) {
		// 0xd96b0
		*(char *)(result + 18) = (char)a2;
		// branch -> 0xd96b4
	}
	// 0xd96b4
	if (__asm_rlwinm_(a3, 0, 19, 19) != 0) {
		// 0xd96bc
		*(char *)(result + 19) = (char)a2;
		// branch -> 0xd96c0
	}
	// 0xd96c0
	if (__asm_rlwinm_(a3, 0, 20, 20) != 0) {
		// 0xd96c8
		*(char *)(result + 20) = (char)a2;
		// branch -> 0xd96cc
	}
	// 0xd96cc
	if (__asm_rlwinm_(a3, 0, 21, 21) != 0) {
		// 0xd96d4
		*(char *)(result + 21) = (char)a2;
		// branch -> 0xd96d8
	}
	// 0xd96d8
	if (__asm_rlwinm_(a3, 0, 22, 22) != 0) {
		// 0xd96e0
		*(char *)(result + 22) = (char)a2;
		// branch -> 0xd96e4
	}
	// 0xd96e4
	if (__asm_rlwinm_(a3, 0, 23, 23) != 0) {
		// 0xd96ec
		*(char *)(result + 23) = (char)a2;
		// branch -> 0xd96f0
	}
	// 0xd96f0
	if (__asm_rlwinm_(a3, 0, 24, 24) != 0) {
		// 0xd96f8
		*(char *)(result + 24) = (char)a2;
		// branch -> 0xd96fc
	}
	// 0xd96fc
	if (__asm_rlwinm_(a3, 0, 25, 25) != 0) {
		// 0xd9704
		*(char *)(result + 25) = (char)a2;
		// branch -> 0xd9708
	}
	// 0xd9708
	if (__asm_rlwinm_(a3, 0, 26, 26) != 0) {
		// 0xd9710
		*(char *)(result + 26) = (char)a2;
		// branch -> 0xd9714
	}
	// 0xd9714
	if (__asm_rlwinm_(a3, 0, 27, 27) != 0) {
		// 0xd971c
		*(char *)(result + 27) = (char)a2;
		// branch -> 0xd9720
	}
	// 0xd9720
	if (__asm_rlwinm_(a3, 0, 28, 28) != 0) {
		// 0xd9728
		*(char *)(result + 28) = (char)a2;
		// branch -> 0xd972c
	}
	// 0xd972c
	if (__asm_rlwinm_(a3, 0, 29, 29) != 0) {
		// 0xd9734
		*(char *)(result + 29) = (char)a2;
		// branch -> 0xd9738
	}
	// 0xd9738
	if (__asm_rlwinm_(a3, 0, 30, 30) != 0) {
		// 0xd9740
		*(char *)(result + 30) = (char)a2;
		// branch -> 0xd9744
	}
	// 0xd9744
	if (a3 % 2 == 0) {
		// bb
		return result;
	}
	// 0xd974c
	*(char *)(result + 31) = (char)a2;
	return result;
}

// Address range: 0xd9754 - 0xd98f4
int32_t function_d9754(char *a1, int32_t result, int32_t a3)
{
	int32_t v1 = (int32_t)a1;
	*(int32_t *)a1 = v1 + 32;
	*(int32_t *)result = result + 32;
	*(char *)v1 = *(char *)(a3 + (int32_t) * (char *)&g37);
	char v2 = *(char *)(a3 + (int32_t) * (char *)(result + 1)); // 0xd9780
	*(char *)(v1 + 1) = v2;
	char v3 = *(char *)(a3 + (int32_t) * (char *)(result + 2)); // 0xd978c
	*(char *)(v1 + 2) = v3;
	char v4 = *(char *)(a3 + (int32_t) * (char *)(result + 3)); // 0xd9798
	*(char *)(v1 + 3) = v4;
	char v5 = *(char *)(a3 + (int32_t) * (char *)(result + 4)); // 0xd97a4
	*(char *)(v1 + 4) = v5;
	char v6 = *(char *)(a3 + (int32_t) * (char *)(result + 5)); // 0xd97b0
	*(char *)(v1 + 5) = v6;
	char v7 = *(char *)(a3 + (int32_t) * (char *)(result + 6)); // 0xd97bc
	*(char *)(v1 + 6) = v7;
	char v8 = *(char *)(a3 + (int32_t) * (char *)(result + 7)); // 0xd97c8
	*(char *)(v1 + 7) = v8;
	char v9 = *(char *)(a3 + (int32_t) * (char *)(result + 8)); // 0xd97d4
	*(char *)(v1 + 8) = v9;
	char v10 = *(char *)(a3 + (int32_t) * (char *)(result + 9)); // 0xd97e0
	*(char *)(v1 + 9) = v10;
	char v11 = *(char *)(a3 + (int32_t) * (char *)(result + 10)); // 0xd97ec
	*(char *)(v1 + 10) = v11;
	char v12 = *(char *)(a3 + (int32_t) * (char *)(result + 11)); // 0xd97f8
	*(char *)(v1 + 11) = v12;
	char v13 = *(char *)(a3 + (int32_t) * (char *)(result + 12)); // 0xd9804
	*(char *)(v1 + 12) = v13;
	char v14 = *(char *)(a3 + (int32_t) * (char *)(result + 13)); // 0xd9810
	*(char *)(v1 + 13) = v14;
	char v15 = *(char *)(a3 + (int32_t) * (char *)(result + 14)); // 0xd981c
	*(char *)(v1 + 14) = v15;
	char v16 = *(char *)(a3 + (int32_t) * (char *)(result + 15)); // 0xd9828
	*(char *)(v1 + 15) = v16;
	char v17 = *(char *)(a3 + (int32_t) * (char *)(result + 16)); // 0xd9834
	*(char *)(v1 + 16) = v17;
	char v18 = *(char *)(a3 + (int32_t) * (char *)(result + 17)); // 0xd9840
	*(char *)(v1 + 17) = v18;
	char v19 = *(char *)(a3 + (int32_t) * (char *)(result + 18)); // 0xd984c
	*(char *)(v1 + 18) = v19;
	char v20 = *(char *)(a3 + (int32_t) * (char *)(result + 19)); // 0xd9858
	*(char *)(v1 + 19) = v20;
	char v21 = *(char *)(a3 + (int32_t) * (char *)(result + 20)); // 0xd9864
	*(char *)(v1 + 20) = v21;
	char v22 = *(char *)(a3 + (int32_t) * (char *)(result + 21)); // 0xd9870
	*(char *)(v1 + 21) = v22;
	char v23 = *(char *)(a3 + (int32_t) * (char *)(result + 22)); // 0xd987c
	*(char *)(v1 + 22) = v23;
	char v24 = *(char *)(a3 + (int32_t) * (char *)(result + 23)); // 0xd9888
	*(char *)(v1 + 23) = v24;
	char v25 = *(char *)(a3 + (int32_t) * (char *)(result + 24)); // 0xd9894
	*(char *)(v1 + 24) = v25;
	char v26 = *(char *)(a3 + (int32_t) * (char *)(result + 25)); // 0xd98a0
	*(char *)(v1 + 25) = v26;
	char v27 = *(char *)(a3 + (int32_t) * (char *)(result + 26)); // 0xd98ac
	*(char *)(v1 + 26) = v27;
	char v28 = *(char *)(a3 + (int32_t) * (char *)(result + 27)); // 0xd98b8
	*(char *)(v1 + 27) = v28;
	char v29 = *(char *)(a3 + (int32_t) * (char *)(result + 28)); // 0xd98c4
	*(char *)(v1 + 28) = v29;
	char v30 = *(char *)(a3 + (int32_t) * (char *)(result + 29)); // 0xd98d0
	*(char *)(v1 + 29) = v30;
	char v31 = *(char *)(a3 + (int32_t) * (char *)(result + 30)); // 0xd98dc
	*(char *)(v1 + 30) = v31;
	char v32 = *(char *)(a3 + (int32_t) * (char *)(result + 31)); // 0xd98e8
	*(char *)(v1 + 31) = v32;
	return result;
}

// Address range: 0xd98f4 - 0xd99d4
int32_t function_d98f4(char *a1, int32_t result, int32_t a3)
{
	int32_t v1 = (int32_t)a1;
	*(int32_t *)a1 = v1 + 32;
	*(int32_t *)result = result + 32;
	*(char *)v1 = *(char *)(a3 + (int32_t) * (char *)&g37);
	char v2 = *(char *)(a3 + (int32_t) * (char *)(result + 2)); // 0xd9920
	*(char *)(v1 + 2) = v2;
	char v3 = *(char *)(a3 + (int32_t) * (char *)(result + 4)); // 0xd992c
	*(char *)(v1 + 4) = v3;
	char v4 = *(char *)(a3 + (int32_t) * (char *)(result + 6)); // 0xd9938
	*(char *)(v1 + 6) = v4;
	char v5 = *(char *)(a3 + (int32_t) * (char *)(result + 8)); // 0xd9944
	*(char *)(v1 + 8) = v5;
	char v6 = *(char *)(a3 + (int32_t) * (char *)(result + 10)); // 0xd9950
	*(char *)(v1 + 10) = v6;
	char v7 = *(char *)(a3 + (int32_t) * (char *)(result + 12)); // 0xd995c
	*(char *)(v1 + 12) = v7;
	char v8 = *(char *)(a3 + (int32_t) * (char *)(result + 14)); // 0xd9968
	*(char *)(v1 + 14) = v8;
	char v9 = *(char *)(a3 + (int32_t) * (char *)(result + 16)); // 0xd9974
	*(char *)(v1 + 16) = v9;
	char v10 = *(char *)(a3 + (int32_t) * (char *)(result + 18)); // 0xd9980
	*(char *)(v1 + 18) = v10;
	char v11 = *(char *)(a3 + (int32_t) * (char *)(result + 20)); // 0xd998c
	*(char *)(v1 + 20) = v11;
	char v12 = *(char *)(a3 + (int32_t) * (char *)(result + 22)); // 0xd9998
	*(char *)(v1 + 22) = v12;
	char v13 = *(char *)(a3 + (int32_t) * (char *)(result + 24)); // 0xd99a4
	*(char *)(v1 + 24) = v13;
	char v14 = *(char *)(a3 + (int32_t) * (char *)(result + 26)); // 0xd99b0
	*(char *)(v1 + 26) = v14;
	char v15 = *(char *)(a3 + (int32_t) * (char *)(result + 28)); // 0xd99bc
	*(char *)(v1 + 28) = v15;
	char v16 = *(char *)(a3 + (int32_t) * (char *)(result + 30)); // 0xd99c8
	*(char *)(v1 + 30) = v16;
	return result;
}

// Address range: 0xd99d4 - 0xd9ab4
int32_t function_d99d4(int32_t *a1, int32_t result, int32_t a3)
{
	int32_t v1 = (int32_t)a1;
	*a1 = v1 + 32;
	*(int32_t *)result = result + 32;
	char v2 = *(char *)(a3 + (int32_t) * (char *)(result + 1)); // 0xd99f4
	*(char *)(v1 + 1) = v2;
	char v3 = *(char *)(a3 + (int32_t) * (char *)(result + 3)); // 0xd9a00
	*(char *)(v1 + 3) = v3;
	char v4 = *(char *)(a3 + (int32_t) * (char *)(result + 5)); // 0xd9a0c
	*(char *)(v1 + 5) = v4;
	char v5 = *(char *)(a3 + (int32_t) * (char *)(result + 7)); // 0xd9a18
	*(char *)(v1 + 7) = v5;
	char v6 = *(char *)(a3 + (int32_t) * (char *)(result + 9)); // 0xd9a24
	*(char *)(v1 + 9) = v6;
	char v7 = *(char *)(a3 + (int32_t) * (char *)(result + 11)); // 0xd9a30
	*(char *)(v1 + 11) = v7;
	char v8 = *(char *)(a3 + (int32_t) * (char *)(result + 13)); // 0xd9a3c
	*(char *)(v1 + 13) = v8;
	char v9 = *(char *)(a3 + (int32_t) * (char *)(result + 15)); // 0xd9a48
	*(char *)(v1 + 15) = v9;
	char v10 = *(char *)(a3 + (int32_t) * (char *)(result + 17)); // 0xd9a54
	*(char *)(v1 + 17) = v10;
	char v11 = *(char *)(a3 + (int32_t) * (char *)(result + 19)); // 0xd9a60
	*(char *)(v1 + 19) = v11;
	char v12 = *(char *)(a3 + (int32_t) * (char *)(result + 21)); // 0xd9a6c
	*(char *)(v1 + 21) = v12;
	char v13 = *(char *)(a3 + (int32_t) * (char *)(result + 23)); // 0xd9a78
	*(char *)(v1 + 23) = v13;
	char v14 = *(char *)(a3 + (int32_t) * (char *)(result + 25)); // 0xd9a84
	*(char *)(v1 + 25) = v14;
	char v15 = *(char *)(a3 + (int32_t) * (char *)(result + 27)); // 0xd9a90
	*(char *)(v1 + 27) = v15;
	char v16 = *(char *)(a3 + (int32_t) * (char *)(result + 29)); // 0xd9a9c
	*(char *)(v1 + 29) = v16;
	char v17 = *(char *)(a3 + (int32_t) * (char *)(result + 31)); // 0xd9aa8
	*(char *)(v1 + 31) = v17;
	return result;
}

// Address range: 0xd9ab4 - 0xd9ee4
int32_t function_d9ab4(char *a1)
{
	int32_t v1 = (int32_t)a1;
	int32_t v2 = g37; // r8
	*(int32_t *)a1 = v1 + 32;
	int32_t result = g37; // 0xd9acc
	*(int32_t *)result = result + 32;
	if (g39 + (int32_t) "MoveWindow" == 0xffff) {
		// 0xd9adc
		*(char *)v1 = *(char *)(g38 + (int32_t) * (char *)&g37);
		char v3 = *(char *)(g38 + (int32_t) * (char *)(v2 + 1)); // 0xd9aec
		*(char *)(v1 + 1) = v3;
		char v4 = *(char *)(g38 + (int32_t) * (char *)(v2 + 2)); // 0xd9af8
		*(char *)(v1 + 2) = v4;
		char v5 = *(char *)(g38 + (int32_t) * (char *)(v2 + 3)); // 0xd9b04
		*(char *)(v1 + 3) = v5;
		char v6 = *(char *)(g38 + (int32_t) * (char *)(v2 + 4)); // 0xd9b10
		*(char *)(v1 + 4) = v6;
		char v7 = *(char *)(g38 + (int32_t) * (char *)(v2 + 5)); // 0xd9b1c
		*(char *)(v1 + 5) = v7;
		char v8 = *(char *)(g38 + (int32_t) * (char *)(v2 + 6)); // 0xd9b28
		*(char *)(v1 + 6) = v8;
		char v9 = *(char *)(g38 + (int32_t) * (char *)(v2 + 7)); // 0xd9b34
		*(char *)(v1 + 7) = v9;
		char v10 = *(char *)(g38 + (int32_t) * (char *)(v2 + 8)); // 0xd9b40
		*(char *)(v1 + 8) = v10;
		char v11 = *(char *)(g38 + (int32_t) * (char *)(v2 + 9)); // 0xd9b4c
		*(char *)(v1 + 9) = v11;
		unsigned char v12 = *(char *)(v2 + 10); // 0xd9b54
		*(char *)(v1 + 10) = *(char *)(g38 + (int32_t)v12);
		unsigned char v13 = *(char *)(v2 + 11); // 0xd9b60
		*(char *)(v1 + 11) = *(char *)(g38 + (int32_t)v13);
		unsigned char v14 = *(char *)(v2 + 12); // 0xd9b6c
		*(char *)(v1 + 12) = *(char *)(g38 + (int32_t)v14);
		unsigned char v15 = *(char *)(v2 + 13); // 0xd9b78
		*(char *)(v1 + 13) = *(char *)(g38 + (int32_t)v15);
		unsigned char v16 = *(char *)(v2 + 14); // 0xd9b84
		*(char *)(v1 + 14) = *(char *)(g38 + (int32_t)v16);
		unsigned char v17 = *(char *)(v2 + 15); // 0xd9b90
		*(char *)(v1 + 15) = *(char *)(g38 + (int32_t)v17);
		unsigned char v18 = *(char *)(v2 + 16); // 0xd9b9c
		*(char *)(v1 + 16) = *(char *)(g38 + (int32_t)v18);
		unsigned char v19 = *(char *)(v2 + 17); // 0xd9ba8
		*(char *)(v1 + 17) = *(char *)(g38 + (int32_t)v19);
		unsigned char v20 = *(char *)(v2 + 18); // 0xd9bb4
		*(char *)(v1 + 18) = *(char *)(g38 + (int32_t)v20);
		unsigned char v21 = *(char *)(v2 + 19); // 0xd9bc0
		*(char *)(v1 + 19) = *(char *)(g38 + (int32_t)v21);
		unsigned char v22 = *(char *)(v2 + 20); // 0xd9bcc
		*(char *)(v1 + 20) = *(char *)(g38 + (int32_t)v22);
		unsigned char v23 = *(char *)(v2 + 21); // 0xd9bd8
		*(char *)(v1 + 21) = *(char *)(g38 + (int32_t)v23);
		unsigned char v24 = *(char *)(v2 + 22); // 0xd9be4
		*(char *)(v1 + 22) = *(char *)(g38 + (int32_t)v24);
		unsigned char v25 = *(char *)(v2 + 23); // 0xd9bf0
		*(char *)(v1 + 23) = *(char *)(g38 + (int32_t)v25);
		unsigned char v26 = *(char *)(v2 + 24); // 0xd9bfc
		*(char *)(v1 + 24) = *(char *)(g38 + (int32_t)v26);
		unsigned char v27 = *(char *)(v2 + 25); // 0xd9c08
		*(char *)(v1 + 25) = *(char *)(g38 + (int32_t)v27);
		unsigned char v28 = *(char *)(v2 + 26); // 0xd9c14
		*(char *)(v1 + 26) = *(char *)(g38 + (int32_t)v28);
		unsigned char v29 = *(char *)(v2 + 27); // 0xd9c20
		*(char *)(v1 + 27) = *(char *)(g38 + (int32_t)v29);
		unsigned char v30 = *(char *)(v2 + 28); // 0xd9c2c
		*(char *)(v1 + 28) = *(char *)(g38 + (int32_t)v30);
		unsigned char v31 = *(char *)(v2 + 29); // 0xd9c38
		*(char *)(v1 + 29) = *(char *)(g38 + (int32_t)v31);
		unsigned char v32 = *(char *)(v2 + 30); // 0xd9c44
		*(char *)(v1 + 30) = *(char *)(g38 + (int32_t)v32);
		unsigned char v33 = *(char *)(v2 + 31); // 0xd9c50
		*(char *)(v1 + 31) = *(char *)(g38 + (int32_t)v33);
		return result;
	}
	// 0xd9c60
	if (__asm_rlwinm_(g39, 0, 0, 0) != 0) {
		// 0xd9c68
		*(char *)v1 = *(char *)(g38 + (int32_t) * (char *)&g37);
		// branch -> 0xd9c74
	}
	// 0xd9c74
	if (__asm_rlwinm_(g39, 0, 1, 1) != 0) {
		char v34 = *(char *)(g38 + (int32_t) * (char *)(v2 + 1)); // 0xd9c80
		*(char *)(v1 + 1) = v34;
		// branch -> 0xd9c88
	}
	// 0xd9c88
	if (__asm_rlwinm_(g39, 0, 2, 2) != 0) {
		char v35 = *(char *)(g38 + (int32_t) * (char *)(v2 + 2)); // 0xd9c94
		*(char *)(v1 + 2) = v35;
		// branch -> 0xd9c9c
	}
	// 0xd9c9c
	if (__asm_rlwinm_(g39, 0, 3, 3) != 0) {
		char v36 = *(char *)(g38 + (int32_t) * (char *)(v2 + 3)); // 0xd9ca8
		*(char *)(v1 + 3) = v36;
		// branch -> 0xd9cb0
	}
	// 0xd9cb0
	if (__asm_rlwinm_(g39, 0, 4, 4) != 0) {
		char v37 = *(char *)(g38 + (int32_t) * (char *)(v2 + 4)); // 0xd9cbc
		*(char *)(v1 + 4) = v37;
		// branch -> 0xd9cc4
	}
	// 0xd9cc4
	if (__asm_rlwinm_(g39, 0, 5, 5) != 0) {
		char v38 = *(char *)(g38 + (int32_t) * (char *)(v2 + 5)); // 0xd9cd0
		*(char *)(v1 + 5) = v38;
		// branch -> 0xd9cd8
	}
	// 0xd9cd8
	if (__asm_rlwinm_(g39, 0, 6, 6) != 0) {
		char v39 = *(char *)(g38 + (int32_t) * (char *)(v2 + 6)); // 0xd9ce4
		*(char *)(v1 + 6) = v39;
		// branch -> 0xd9cec
	}
	// 0xd9cec
	if (__asm_rlwinm_(g39, 0, 7, 7) != 0) {
		char v40 = *(char *)(g38 + (int32_t) * (char *)(v2 + 7)); // 0xd9cf8
		*(char *)(v1 + 7) = v40;
		// branch -> 0xd9d00
	}
	// 0xd9d00
	if (__asm_rlwinm_(g39, 0, 8, 8) != 0) {
		char v41 = *(char *)(g38 + (int32_t) * (char *)(v2 + 8)); // 0xd9d0c
		*(char *)(v1 + 8) = v41;
		// branch -> 0xd9d14
	}
	// 0xd9d14
	if (__asm_rlwinm_(g39, 0, 9, 9) != 0) {
		char v42 = *(char *)(g38 + (int32_t) * (char *)(v2 + 9)); // 0xd9d20
		*(char *)(v1 + 9) = v42;
		// branch -> 0xd9d28
	}
	// 0xd9d28
	if (__asm_rlwinm_(g39, 0, 10, 10) != 0) {
		unsigned char v43 = *(char *)(v2 + 10); // 0xd9d30
		*(char *)(v1 + 10) = *(char *)(g38 + (int32_t)v43);
		// branch -> 0xd9d3c
	}
	// 0xd9d3c
	if (__asm_rlwinm_(g39, 0, 11, 11) != 0) {
		unsigned char v44 = *(char *)(v2 + 11); // 0xd9d44
		*(char *)(v1 + 11) = *(char *)(g38 + (int32_t)v44);
		// branch -> 0xd9d50
	}
	// 0xd9d50
	if (__asm_rlwinm_(g39, 0, 12, 12) != 0) {
		unsigned char v45 = *(char *)(v2 + 12); // 0xd9d58
		*(char *)(v1 + 12) = *(char *)(g38 + (int32_t)v45);
		// branch -> 0xd9d64
	}
	// 0xd9d64
	if (__asm_rlwinm_(g39, 0, 13, 13) != 0) {
		unsigned char v46 = *(char *)(v2 + 13); // 0xd9d6c
		*(char *)(v1 + 13) = *(char *)(g38 + (int32_t)v46);
		// branch -> 0xd9d78
	}
	// 0xd9d78
	if (__asm_rlwinm_(g39, 0, 14, 14) != 0) {
		unsigned char v47 = *(char *)(v2 + 14); // 0xd9d80
		*(char *)(v1 + 14) = *(char *)(g38 + (int32_t)v47);
		// branch -> 0xd9d8c
	}
	// 0xd9d8c
	if (__asm_rlwinm_(g39, 0, 15, 15) != 0) {
		unsigned char v48 = *(char *)(v2 + 15); // 0xd9d94
		*(char *)(v1 + 15) = *(char *)(g38 + (int32_t)v48);
		// branch -> 0xd9da0
	}
	// 0xd9da0
	if (__asm_rlwinm_(g39, 0, 16, 16) != 0) {
		unsigned char v49 = *(char *)(v2 + 16); // 0xd9da8
		*(char *)(v1 + 16) = *(char *)(g38 + (int32_t)v49);
		// branch -> 0xd9db4
	}
	// 0xd9db4
	if (__asm_rlwinm_(g39, 0, 17, 17) != 0) {
		unsigned char v50 = *(char *)(v2 + 17); // 0xd9dbc
		*(char *)(v1 + 17) = *(char *)(g38 + (int32_t)v50);
		// branch -> 0xd9dc8
	}
	// 0xd9dc8
	if (__asm_rlwinm_(g39, 0, 18, 18) != 0) {
		unsigned char v51 = *(char *)(v2 + 18); // 0xd9dd0
		*(char *)(v1 + 18) = *(char *)(g38 + (int32_t)v51);
		// branch -> 0xd9ddc
	}
	// 0xd9ddc
	if (__asm_rlwinm_(g39, 0, 19, 19) != 0) {
		unsigned char v52 = *(char *)(v2 + 19); // 0xd9de4
		*(char *)(v1 + 19) = *(char *)(g38 + (int32_t)v52);
		// branch -> 0xd9df0
	}
	// 0xd9df0
	if (__asm_rlwinm_(g39, 0, 20, 20) != 0) {
		unsigned char v53 = *(char *)(v2 + 20); // 0xd9df8
		*(char *)(v1 + 20) = *(char *)(g38 + (int32_t)v53);
		// branch -> 0xd9e04
	}
	// 0xd9e04
	if (__asm_rlwinm_(g39, 0, 21, 21) != 0) {
		unsigned char v54 = *(char *)(v2 + 21); // 0xd9e0c
		*(char *)(v1 + 21) = *(char *)(g38 + (int32_t)v54);
		// branch -> 0xd9e18
	}
	// 0xd9e18
	if (__asm_rlwinm_(g39, 0, 22, 22) != 0) {
		unsigned char v55 = *(char *)(v2 + 22); // 0xd9e20
		*(char *)(v1 + 22) = *(char *)(g38 + (int32_t)v55);
		// branch -> 0xd9e2c
	}
	// 0xd9e2c
	if (__asm_rlwinm_(g39, 0, 23, 23) != 0) {
		unsigned char v56 = *(char *)(v2 + 23); // 0xd9e34
		*(char *)(v1 + 23) = *(char *)(g38 + (int32_t)v56);
		// branch -> 0xd9e40
	}
	// 0xd9e40
	if (__asm_rlwinm_(g39, 0, 24, 24) != 0) {
		unsigned char v57 = *(char *)(v2 + 24); // 0xd9e48
		*(char *)(v1 + 24) = *(char *)(g38 + (int32_t)v57);
		// branch -> 0xd9e54
	}
	// 0xd9e54
	if (__asm_rlwinm_(g39, 0, 25, 25) != 0) {
		unsigned char v58 = *(char *)(v2 + 25); // 0xd9e5c
		*(char *)(v1 + 25) = *(char *)(g38 + (int32_t)v58);
		// branch -> 0xd9e68
	}
	// 0xd9e68
	if (__asm_rlwinm_(g39, 0, 26, 26) != 0) {
		unsigned char v59 = *(char *)(v2 + 26); // 0xd9e70
		*(char *)(v1 + 26) = *(char *)(g38 + (int32_t)v59);
		// branch -> 0xd9e7c
	}
	// 0xd9e7c
	if (__asm_rlwinm_(g39, 0, 27, 27) != 0) {
		unsigned char v60 = *(char *)(v2 + 27); // 0xd9e84
		*(char *)(v1 + 27) = *(char *)(g38 + (int32_t)v60);
		// branch -> 0xd9e90
	}
	// 0xd9e90
	if (__asm_rlwinm_(g39, 0, 28, 28) != 0) {
		unsigned char v61 = *(char *)(v2 + 28); // 0xd9e98
		*(char *)(v1 + 28) = *(char *)(g38 + (int32_t)v61);
		// branch -> 0xd9ea4
	}
	// 0xd9ea4
	if (__asm_rlwinm_(g39, 0, 29, 29) != 0) {
		unsigned char v62 = *(char *)(v2 + 29); // 0xd9eac
		*(char *)(v1 + 29) = *(char *)(g38 + (int32_t)v62);
		// branch -> 0xd9eb8
	}
	// 0xd9eb8
	if (__asm_rlwinm_(g39, 0, 30, 30) != 0) {
		unsigned char v63 = *(char *)(v2 + 30); // 0xd9ec0
		*(char *)(v1 + 30) = *(char *)(g38 + (int32_t)v63);
		// branch -> 0xd9ecc
	}
	// 0xd9ecc
	if (g39 % 2 == 0) {
		// bb
		return result;
	}
	unsigned char v64 = *(char *)(v2 + 31); // 0xd9ed4
	*(char *)(v1 + 31) = *(char *)(g38 + (int32_t)v64);
	return result;
}

// Address range: 0xd9ee4 - 0xda004
int32_t function_d9ee4(char *a1, int32_t a2)
{
	int32_t v1 = (int32_t)a1;
	int32_t v2 = v1;  // r6
	int32_t v3 = g38; // 0xd9ee8
	*(int32_t *)a1 = v3 + v1;
	uint32_t v4 = g38;       // 0xd9ef8
	int32_t result = v4 / 4; // r3
	*(int32_t *)a2 = a2 + v4;
	int32_t v5; // ctr
	int32_t v6; // 0xd9fdc
	int32_t v7; // 0xd9ff4
	int32_t v8; // 0xd9ffc
	int32_t v9; // 0xd9ff0
	if (v3 < 4) {
		// 0xd9fd8
		v6 = g38;
		// branch -> 0xd9fd8
	} else {
		int32_t v10 = result;                        // 0xd9f0c
		int32_t v11 = __asm_rlwinm_(v10, 29, 3, 31); // 0xd9f0c
		int32_t v12 = -4 * v10;                      // r0
		int32_t v13 = v2;
		int32_t v14; // 0xd9fc0
		int32_t v15; // 0xd9fcc
		int32_t v16; // 0xd9fd0
		if (v11 == 0) {
			// 0xd9fb4
			*(char *)v13 = *(char *)a2;
			v14 = a2;
			a2 = v14 + 4;
			*(char *)(v2 + 2) = *(char *)(v14 + 2);
			v15 = v2 + 4;
			v2 = v15;
			v16 = v10 - 1;
			// branch -> 0xd9fb8
			while (v16 != 0) {
				// 0xd9fb8
				*(char *)v15 = *(char *)a2;
				v14 = a2;
				a2 = v14 + 4;
				*(char *)(v2 + 2) = *(char *)(v14 + 2);
				v15 = v2 + 4;
				v2 = v15;
				v16--;
				// continue -> 0xd9fb8
			}
			// 0xd9fd4
			v6 = v12 + g38;
			// branch -> 0xd9fd8
			// 0xd9fd8
			v5 = v6;
			if (v6 == 0) {
				// bb
				return result;
			}
			v9 = v2;
			// branch -> 0xd9fe4
			while (true) {
				// 0xd9fe4
				v8 = v6;
				v7 = v9;
				if (v9 % 2 == 0) {
				lab_0xd9fec_2:
					// 0xd9fec
					*(char *)v9 = *(char *)a2;
					v8 = v5;
					v7 = v2;
					// branch -> 0xd9ff4
				}
			lab_0xd9ff4_2:;
				int32_t v17 = v7 + 1; // 0xd9ff4
				v2 = v17;
				a2++;
				int32_t v18 = v8 - 1; // 0xd9ffc
				v5 = v18;
				if (v18 == 0) {
					// break -> 0xda000
					break;
				}
				v6 = v18;
				v9 = v17;
				// continue -> 0xd9fe4
			}
			// 0xda000
			return result;
		}
		*(char *)v13 = *(char *)a2;
		*(char *)(v2 + 2) = *(char *)(a2 + 2);
		*(char *)(v2 + 4) = *(char *)(a2 + 4);
		*(char *)(v2 + 6) = *(char *)(a2 + 6);
		*(char *)(v2 + 8) = *(char *)(a2 + 8);
		*(char *)(v2 + 10) = *(char *)(a2 + 10);
		*(char *)(v2 + 12) = *(char *)(a2 + 12);
		*(char *)(v2 + 14) = *(char *)(a2 + 14);
		*(char *)(v2 + 16) = *(char *)(a2 + 16);
		*(char *)(v2 + 18) = *(char *)(a2 + 18);
		*(char *)(v2 + 20) = *(char *)(a2 + 20);
		*(char *)(v2 + 22) = *(char *)(a2 + 22);
		*(char *)(v2 + 24) = *(char *)(a2 + 24);
		*(char *)(v2 + 26) = *(char *)(a2 + 26);
		*(char *)(v2 + 28) = *(char *)(a2 + 28);
		int32_t v19 = a2; // 0xd9f98
		a2 = v19 + 32;
		*(char *)(v2 + 30) = *(char *)(v19 + 30);
		int32_t v20 = v2 + 32; // 0xd9fa4
		v2 = v20;
		int32_t v21 = v11 - 1; // 0xd9fa8
		while (v21 != 0) {
			// 0xd9f20
			*(char *)v20 = *(char *)a2;
			*(char *)(v2 + 2) = *(char *)(a2 + 2);
			*(char *)(v2 + 4) = *(char *)(a2 + 4);
			*(char *)(v2 + 6) = *(char *)(a2 + 6);
			*(char *)(v2 + 8) = *(char *)(a2 + 8);
			*(char *)(v2 + 10) = *(char *)(a2 + 10);
			*(char *)(v2 + 12) = *(char *)(a2 + 12);
			*(char *)(v2 + 14) = *(char *)(a2 + 14);
			*(char *)(v2 + 16) = *(char *)(a2 + 16);
			*(char *)(v2 + 18) = *(char *)(a2 + 18);
			*(char *)(v2 + 20) = *(char *)(a2 + 20);
			*(char *)(v2 + 22) = *(char *)(a2 + 22);
			*(char *)(v2 + 24) = *(char *)(a2 + 24);
			*(char *)(v2 + 26) = *(char *)(a2 + 26);
			*(char *)(v2 + 28) = *(char *)(a2 + 28);
			v19 = a2;
			a2 = v19 + 32;
			*(char *)(v2 + 30) = *(char *)(v19 + 30);
			v20 = v2 + 32;
			v2 = v20;
			v21--;
			// continue -> 0xd9f20
		}
		int32_t v22 = result % 8; // 0xd9fac
		result = v22;
		if (v22 != 0) {
			// 0xd9fb4
			*(char *)v20 = *(char *)a2;
			v14 = a2;
			a2 = v14 + 4;
			*(char *)(v2 + 2) = *(char *)(v14 + 2);
			v15 = v2 + 4;
			v2 = v15;
			v16 = v22 - 1;
			// branch -> 0xd9fb8
			while (v16 != 0) {
				// 0xd9fb8
				*(char *)v15 = *(char *)a2;
				v14 = a2;
				a2 = v14 + 4;
				*(char *)(v2 + 2) = *(char *)(v14 + 2);
				v15 = v2 + 4;
				v2 = v15;
				v16--;
				// continue -> 0xd9fb8
			}
			// 0xd9fd4
			v6 = v12 + g38;
			// branch -> 0xd9fd8
			// 0xd9fd8
			v5 = v6;
			if (v6 == 0) {
				// bb
				return result;
			}
			// 0xd9fe4
			v9 = v2;
			// branch -> 0xd9fe4
			while (true) {
				// 0xd9fe4
				if (v9 % 2 == 0) {
					goto lab_0xd9fec_2;
				}
				v8 = v6;
				v7 = v9;
				goto lab_0xd9ff4_2;
			}
		}
		// 0xd9fd4
		v6 = v12 + g38;
		// branch -> 0xd9fd8
	}
	// 0xd9fd8
	v5 = v6;
	if (v6 == 0) {
		// bb
		return result;
	}
	// 0xd9fe4
	v9 = v2;
	// branch -> 0xd9fe4
	while (true) {
		// 0xd9fe4
		if (v9 % 2 == 0) {
			goto lab_0xd9fec_2;
		}
		v8 = v6;
		v7 = v9;
		goto lab_0xd9ff4_2;
	}
}

// Address range: 0xda004 - 0xda124
int32_t function_da004(char *a1, int32_t a2)
{
	int32_t v1 = (int32_t)a1;
	int32_t v2 = v1;  // r6
	int32_t v3 = g38; // 0xda008
	*(int32_t *)a1 = v3 + v1;
	uint32_t v4 = g38;       // 0xda018
	int32_t result = v4 / 4; // r3
	*(int32_t *)a2 = a2 + v4;
	int32_t v5; // ctr
	int32_t v6; // 0xda0fc
	int32_t v7; // 0xda114
	int32_t v8; // 0xda11c
	int32_t v9; // 0xda110
	if (v3 < 4) {
		// 0xda0f8
		v6 = g38;
		// branch -> 0xda0f8
	} else {
		int32_t v10 = result;                        // 0xda02c
		int32_t v11 = __asm_rlwinm_(v10, 29, 3, 31); // 0xda02c
		int32_t v12 = -4 * v10;                      // r0
		int32_t v13 = v2;
		int32_t v14; // 0xda0e0
		int32_t v15; // 0xda0ec
		int32_t v16; // 0xda0f0
		if (v11 == 0) {
			// 0xda0d4
			*(char *)(v13 + 1) = *(char *)(a2 + 1);
			v14 = a2;
			a2 = v14 + 4;
			*(char *)(v2 + 3) = *(char *)(v14 + 3);
			v15 = v2 + 4;
			v2 = v15;
			v16 = v10 - 1;
			// branch -> 0xda0d8
			while (v16 != 0) {
				// 0xda0d8
				*(char *)(v15 + 1) = *(char *)(a2 + 1);
				v14 = a2;
				a2 = v14 + 4;
				*(char *)(v2 + 3) = *(char *)(v14 + 3);
				v15 = v2 + 4;
				v2 = v15;
				v16--;
				// continue -> 0xda0d8
			}
			// 0xda0f4
			v6 = v12 + g38;
			// branch -> 0xda0f8
			// 0xda0f8
			v5 = v6;
			if (v6 == 0) {
				// bb
				return result;
			}
			v9 = v2;
			// branch -> 0xda104
			while (true) {
				// 0xda104
				v8 = v6;
				v7 = v9;
				if (v9 % 2 != 0) {
				lab_0xda10c_2:
					// 0xda10c
					*(char *)v9 = *(char *)a2;
					v8 = v5;
					v7 = v2;
					// branch -> 0xda114
				}
			lab_0xda114_2:;
				int32_t v17 = v7 + 1; // 0xda114
				v2 = v17;
				a2++;
				int32_t v18 = v8 - 1; // 0xda11c
				v5 = v18;
				if (v18 == 0) {
					// break -> 0xda120
					break;
				}
				v6 = v18;
				v9 = v17;
				// continue -> 0xda104
			}
			// 0xda120
			return result;
		}
		*(char *)(v13 + 1) = *(char *)(a2 + 1);
		*(char *)(v2 + 3) = *(char *)(a2 + 3);
		*(char *)(v2 + 5) = *(char *)(a2 + 5);
		*(char *)(v2 + 7) = *(char *)(a2 + 7);
		*(char *)(v2 + 9) = *(char *)(a2 + 9);
		*(char *)(v2 + 11) = *(char *)(a2 + 11);
		*(char *)(v2 + 13) = *(char *)(a2 + 13);
		*(char *)(v2 + 15) = *(char *)(a2 + 15);
		*(char *)(v2 + 17) = *(char *)(a2 + 17);
		*(char *)(v2 + 19) = *(char *)(a2 + 19);
		*(char *)(v2 + 21) = *(char *)(a2 + 21);
		*(char *)(v2 + 23) = *(char *)(a2 + 23);
		*(char *)(v2 + 25) = *(char *)(a2 + 25);
		*(char *)(v2 + 27) = *(char *)(a2 + 27);
		*(char *)(v2 + 29) = *(char *)(a2 + 29);
		int32_t v19 = a2; // 0xda0b8
		a2 = v19 + 32;
		*(char *)(v2 + 31) = *(char *)(v19 + 31);
		int32_t v20 = v2 + 32; // 0xda0c4
		v2 = v20;
		int32_t v21 = v11 - 1; // 0xda0c8
		while (v21 != 0) {
			// 0xda040
			*(char *)(v20 + 1) = *(char *)(a2 + 1);
			*(char *)(v2 + 3) = *(char *)(a2 + 3);
			*(char *)(v2 + 5) = *(char *)(a2 + 5);
			*(char *)(v2 + 7) = *(char *)(a2 + 7);
			*(char *)(v2 + 9) = *(char *)(a2 + 9);
			*(char *)(v2 + 11) = *(char *)(a2 + 11);
			*(char *)(v2 + 13) = *(char *)(a2 + 13);
			*(char *)(v2 + 15) = *(char *)(a2 + 15);
			*(char *)(v2 + 17) = *(char *)(a2 + 17);
			*(char *)(v2 + 19) = *(char *)(a2 + 19);
			*(char *)(v2 + 21) = *(char *)(a2 + 21);
			*(char *)(v2 + 23) = *(char *)(a2 + 23);
			*(char *)(v2 + 25) = *(char *)(a2 + 25);
			*(char *)(v2 + 27) = *(char *)(a2 + 27);
			*(char *)(v2 + 29) = *(char *)(a2 + 29);
			v19 = a2;
			a2 = v19 + 32;
			*(char *)(v2 + 31) = *(char *)(v19 + 31);
			v20 = v2 + 32;
			v2 = v20;
			v21--;
			// continue -> 0xda040
		}
		int32_t v22 = result % 8; // 0xda0cc
		result = v22;
		if (v22 != 0) {
			// 0xda0d4
			*(char *)(v20 + 1) = *(char *)(a2 + 1);
			v14 = a2;
			a2 = v14 + 4;
			*(char *)(v2 + 3) = *(char *)(v14 + 3);
			v15 = v2 + 4;
			v2 = v15;
			v16 = v22 - 1;
			// branch -> 0xda0d8
			while (v16 != 0) {
				// 0xda0d8
				*(char *)(v15 + 1) = *(char *)(a2 + 1);
				v14 = a2;
				a2 = v14 + 4;
				*(char *)(v2 + 3) = *(char *)(v14 + 3);
				v15 = v2 + 4;
				v2 = v15;
				v16--;
				// continue -> 0xda0d8
			}
			// 0xda0f4
			v6 = v12 + g38;
			// branch -> 0xda0f8
			// 0xda0f8
			v5 = v6;
			if (v6 == 0) {
				// bb
				return result;
			}
			// 0xda104
			v9 = v2;
			// branch -> 0xda104
			while (true) {
				// 0xda104
				if (v9 % 2 == 0) {
					v8 = v6;
					v7 = v9;
					goto lab_0xda114_2;
				}
				goto lab_0xda10c_2;
			}
		}
		// 0xda0f4
		v6 = v12 + g38;
		// branch -> 0xda0f8
	}
	// 0xda0f8
	v5 = v6;
	if (v6 == 0) {
		// bb
		return result;
	}
	// 0xda104
	v9 = v2;
	// branch -> 0xda104
	while (true) {
		// 0xda104
		if (v9 % 2 == 0) {
			v8 = v6;
			v7 = v9;
			goto lab_0xda114_2;
		}
		goto lab_0xda10c_2;
	}
}

// Address range: 0xda124 - 0xda178
int32_t function_da124(char *a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t result = (int32_t)a1;
	int32_t v1 = result; // r7
	int32_t v2 = a3;     // ctr
	int32_t v3 = a4;     // r9
	*(int32_t *)a1 = result + a3;
	*(int32_t *)a2 = a3 + a2;
	int32_t v4 = v3;
	if (a3 == 0) {
		// 0xda170
		*(int32_t *)a4 = v4;
		return result;
	}
	int32_t v5; // 0xda160
	while (true) {
		int32_t v6 = v4; // 0xda160
		if (v4 <= 0xffffffff) {
			// 0xda158
			*(char *)v1 = *(char *)a2;
			v6 = v3;
			// branch -> 0xda160
		}
		// 0xda160
		v5 = 2 * v6;
		v3 = v5;
		v1++;
		a2++;
		int32_t v7 = v2 - 1; // 0xda16c
		v2 = v7;
		if (v7 == 0) {
			// break -> 0xda170
			break;
		}
		v4 = v5;
		// continue -> 0xda150
	}
	// 0xda170
	*(int32_t *)a4 = v5;
	return result;
}

// Address range: 0xda178 - 0xda238
int32_t function_da178(char *a1, uint32_t a2, uint32_t a3)
{
	int32_t v1 = (int32_t)a1;
	int32_t v2 = v1;       // r7
	int32_t v3 = a3 % 256; // r6
	*(int32_t *)a1 = v1 + a2;
	int32_t v4 = a2;     // 0xda18c
	int32_t v5 = v4 / 4; // 0xda18c
	int32_t result = v5; // r3
	int32_t v6;          // ctr
	uint32_t v7;         // 0xda218
	int32_t v8;          // 0xda22c
	int32_t v9;          // 0xda230
	int32_t result2;     // 0xda220
	int32_t v10;         // 0xda228
	if (a2 >= 4) {
		int32_t v11 = __asm_rlwinm_(v5, 29, 3, 31); // 0xda194
		int32_t v12 = result;                       // 0xda19c
		int32_t v13 = -4 * v12;                     // r0
		int32_t v14 = v2;
		int32_t v15; // 0xda204
		int32_t v16; // 0xda208
		if (v11 == 0) {
			// 0xda1f8
			*(char *)(v14 + 2) = (char)v3;
			*(char *)v2 = (char)v3;
			v15 = v2 + 4;
			v2 = v15;
			v16 = v12 - 1;
			// branch -> 0xda1fc
			while (v16 != 0) {
				// 0xda1fc
				*(char *)(v15 + 2) = (char)v3;
				*(char *)v2 = (char)v3;
				v15 = v2 + 4;
				v2 = v15;
				v16--;
				// continue -> 0xda1fc
			}
			// 0xda20c
			v4 = v13 + a2;
			// branch -> 0xda210
			// 0xda210
			v6 = v4;
			if (v4 == 0) {
				// bb
				return result;
			}
			int32_t v17 = v4; // 0xda2307
			v10 = v2;
			// branch -> 0xda220
			while (true) {
				// 0xda220
				result2 = v10 % 2;
				v9 = v17;
				v8 = v10;
				if (result2 == 0) {
				lab_0xda228_2:
					// 0xda228
					*(char *)v10 = (char)(v7 % 256);
					v9 = v6;
					v8 = v2;
					// branch -> 0xda22c
				}
			lab_0xda22c_2:;
				int32_t v18 = v8 + 1; // 0xda22c
				v2 = v18;
				int32_t v19 = v9 - 1; // 0xda230
				v6 = v19;
				if (v19 == 0) {
					// break -> 0xda234
					break;
				}
				v17 = v19;
				v10 = v18;
				// continue -> 0xda220
			}
			// 0xda234
			return result2;
		}
		*(char *)(v14 + 2) = (char)v3;
		*(char *)v2 = (char)v3;
		*(char *)(v2 + 6) = (char)v3;
		*(char *)(v2 + 4) = (char)v3;
		*(char *)(v2 + 10) = (char)v3;
		*(char *)(v2 + 8) = (char)v3;
		*(char *)(v2 + 14) = (char)v3;
		*(char *)(v2 + 12) = (char)v3;
		*(char *)(v2 + 18) = (char)v3;
		*(char *)(v2 + 16) = (char)v3;
		*(char *)(v2 + 22) = (char)v3;
		*(char *)(v2 + 20) = (char)v3;
		*(char *)(v2 + 26) = (char)v3;
		*(char *)(v2 + 24) = (char)v3;
		*(char *)(v2 + 30) = (char)v3;
		*(char *)(v2 + 28) = (char)v3;
		int32_t v20 = v2 + 32; // 0xda1e8
		v2 = v20;
		int32_t v21 = v11 - 1; // 0xda1ec
		while (v21 != 0) {
			// 0xda1a8
			*(char *)(v20 + 2) = (char)v3;
			*(char *)v2 = (char)v3;
			*(char *)(v2 + 6) = (char)v3;
			*(char *)(v2 + 4) = (char)v3;
			*(char *)(v2 + 10) = (char)v3;
			*(char *)(v2 + 8) = (char)v3;
			*(char *)(v2 + 14) = (char)v3;
			*(char *)(v2 + 12) = (char)v3;
			*(char *)(v2 + 18) = (char)v3;
			*(char *)(v2 + 16) = (char)v3;
			*(char *)(v2 + 22) = (char)v3;
			*(char *)(v2 + 20) = (char)v3;
			*(char *)(v2 + 26) = (char)v3;
			*(char *)(v2 + 24) = (char)v3;
			*(char *)(v2 + 30) = (char)v3;
			*(char *)(v2 + 28) = (char)v3;
			v20 = v2 + 32;
			v2 = v20;
			v21--;
			// continue -> 0xda1a8
		}
		int32_t v22 = result % 8; // 0xda1f0
		result = v22;
		if (v22 != 0) {
			// 0xda1f8
			*(char *)(v20 + 2) = (char)v3;
			*(char *)v2 = (char)v3;
			v15 = v2 + 4;
			v2 = v15;
			v16 = v22 - 1;
			// branch -> 0xda1fc
			while (v16 != 0) {
				// 0xda1fc
				*(char *)(v15 + 2) = (char)v3;
				*(char *)v2 = (char)v3;
				v15 = v2 + 4;
				v2 = v15;
				v16--;
				// continue -> 0xda1fc
			}
			// 0xda20c
			v4 = v13 + a2;
			// branch -> 0xda210
			// 0xda210
			v6 = v4;
			if (v4 == 0) {
				// bb
				return result;
			}
			// 0xda220
			v10 = v2;
			// branch -> 0xda220
			while (true) {
				// 0xda220
				result2 = v10 % 2;
				if (result2 == 0) {
					goto lab_0xda228_2;
				}
				v9 = v4;
				v8 = v10;
				goto lab_0xda22c_2;
			}
		}
		// 0xda20c
		v4 = v13 + a2;
		// branch -> 0xda210
	}
	// 0xda210
	v6 = v4;
	v7 = (int32_t)a3;
	if (v4 == 0) {
		// bb
		return result;
	}
	// 0xda220
	v10 = v2;
	// branch -> 0xda220
	while (true) {
		// 0xda220
		result2 = v10 % 2;
		if (result2 == 0) {
			goto lab_0xda228_2;
		}
		v9 = v4;
		v8 = v10;
		goto lab_0xda22c_2;
	}
}

// Address range: 0xda238 - 0xda2f8
int32_t function_da238(char *a1, uint32_t a2, uint32_t a3)
{
	int32_t v1 = (int32_t)a1;
	int32_t v2 = v1;       // r7
	int32_t v3 = a3 % 256; // r6
	*(int32_t *)a1 = v1 + a2;
	int32_t v4 = a2;     // 0xda24c
	int32_t v5 = v4 / 4; // 0xda24c
	int32_t result = v5; // r3
	int32_t v6;          // ctr
	uint32_t v7;         // 0xda2d8
	int32_t v8;          // 0xda2ec
	int32_t v9;          // 0xda2f0
	int32_t result2;     // 0xda2e0
	int32_t v10;         // 0xda2e8
	if (a2 >= 4) {
		int32_t v11 = __asm_rlwinm_(v5, 29, 3, 31); // 0xda254
		int32_t v12 = result;                       // 0xda25c
		int32_t v13 = -4 * v12;                     // r0
		int32_t v14 = v2;
		int32_t v15; // 0xda2c4
		int32_t v16; // 0xda2c8
		if (v11 == 0) {
			// 0xda2b8
			*(char *)(v14 + 3) = (char)v3;
			*(char *)(v2 + 1) = (char)v3;
			v15 = v2 + 4;
			v2 = v15;
			v16 = v12 - 1;
			// branch -> 0xda2bc
			while (v16 != 0) {
				// 0xda2bc
				*(char *)(v15 + 3) = (char)v3;
				*(char *)(v2 + 1) = (char)v3;
				v15 = v2 + 4;
				v2 = v15;
				v16--;
				// continue -> 0xda2bc
			}
			// 0xda2cc
			v4 = v13 + a2;
			// branch -> 0xda2d0
			// 0xda2d0
			v6 = v4;
			if (v4 == 0) {
				// bb
				return result;
			}
			int32_t v17 = v4; // 0xda2f07
			v10 = v2;
			// branch -> 0xda2e0
			while (true) {
				// 0xda2e0
				result2 = v10 % 2;
				v9 = v17;
				v8 = v10;
				if (result2 != 0) {
				lab_0xda2e8_2:
					// 0xda2e8
					*(char *)v10 = (char)(v7 % 256);
					v9 = v6;
					v8 = v2;
					// branch -> 0xda2ec
				}
			lab_0xda2ec_2:;
				int32_t v18 = v8 + 1; // 0xda2ec
				v2 = v18;
				int32_t v19 = v9 - 1; // 0xda2f0
				v6 = v19;
				if (v19 == 0) {
					// break -> 0xda2f4
					break;
				}
				v17 = v19;
				v10 = v18;
				// continue -> 0xda2e0
			}
			// 0xda2f4
			return result2;
		}
		*(char *)(v14 + 3) = (char)v3;
		*(char *)(v2 + 1) = (char)v3;
		*(char *)(v2 + 7) = (char)v3;
		*(char *)(v2 + 5) = (char)v3;
		*(char *)(v2 + 11) = (char)v3;
		*(char *)(v2 + 9) = (char)v3;
		*(char *)(v2 + 15) = (char)v3;
		*(char *)(v2 + 13) = (char)v3;
		*(char *)(v2 + 19) = (char)v3;
		*(char *)(v2 + 17) = (char)v3;
		*(char *)(v2 + 23) = (char)v3;
		*(char *)(v2 + 21) = (char)v3;
		*(char *)(v2 + 27) = (char)v3;
		*(char *)(v2 + 25) = (char)v3;
		*(char *)(v2 + 31) = (char)v3;
		*(char *)(v2 + 29) = (char)v3;
		int32_t v20 = v2 + 32; // 0xda2a8
		v2 = v20;
		int32_t v21 = v11 - 1; // 0xda2ac
		while (v21 != 0) {
			// 0xda268
			*(char *)(v20 + 3) = (char)v3;
			*(char *)(v2 + 1) = (char)v3;
			*(char *)(v2 + 7) = (char)v3;
			*(char *)(v2 + 5) = (char)v3;
			*(char *)(v2 + 11) = (char)v3;
			*(char *)(v2 + 9) = (char)v3;
			*(char *)(v2 + 15) = (char)v3;
			*(char *)(v2 + 13) = (char)v3;
			*(char *)(v2 + 19) = (char)v3;
			*(char *)(v2 + 17) = (char)v3;
			*(char *)(v2 + 23) = (char)v3;
			*(char *)(v2 + 21) = (char)v3;
			*(char *)(v2 + 27) = (char)v3;
			*(char *)(v2 + 25) = (char)v3;
			*(char *)(v2 + 31) = (char)v3;
			*(char *)(v2 + 29) = (char)v3;
			v20 = v2 + 32;
			v2 = v20;
			v21--;
			// continue -> 0xda268
		}
		int32_t v22 = result % 8; // 0xda2b0
		result = v22;
		if (v22 != 0) {
			// 0xda2b8
			*(char *)(v20 + 3) = (char)v3;
			*(char *)(v2 + 1) = (char)v3;
			v15 = v2 + 4;
			v2 = v15;
			v16 = v22 - 1;
			// branch -> 0xda2bc
			while (v16 != 0) {
				// 0xda2bc
				*(char *)(v15 + 3) = (char)v3;
				*(char *)(v2 + 1) = (char)v3;
				v15 = v2 + 4;
				v2 = v15;
				v16--;
				// continue -> 0xda2bc
			}
			// 0xda2cc
			v4 = v13 + a2;
			// branch -> 0xda2d0
			// 0xda2d0
			v6 = v4;
			if (v4 == 0) {
				// bb
				return result;
			}
			// 0xda2e0
			v10 = v2;
			// branch -> 0xda2e0
			while (true) {
				// 0xda2e0
				result2 = v10 % 2;
				if (result2 == 0) {
					v9 = v4;
					v8 = v10;
					goto lab_0xda2ec_2;
				}
				goto lab_0xda2e8_2;
			}
		}
		// 0xda2cc
		v4 = v13 + a2;
		// branch -> 0xda2d0
	}
	// 0xda2d0
	v6 = v4;
	v7 = (int32_t)a3;
	if (v4 == 0) {
		// bb
		return result;
	}
	// 0xda2e0
	v10 = v2;
	// branch -> 0xda2e0
	while (true) {
		// 0xda2e0
		result2 = v10 % 2;
		if (result2 == 0) {
			v9 = v4;
			v8 = v10;
			goto lab_0xda2ec_2;
		}
		goto lab_0xda2e8_2;
	}
}

// Address range: 0xda2f8 - 0xda338
int32_t function_da2f8(char *a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t result = (int32_t)a1;
	int32_t v1 = result; // r7
	int32_t v2 = a3;     // r8
	int32_t v3 = a2;     // ctr
	*(int32_t *)a1 = result + a2;
	int32_t v4 = v2;
	if (a2 == 0) {
		// 0xda330
		*(int32_t *)a3 = v4;
		return result;
	}
	int32_t v5; // 0xda324
	while (true) {
		int32_t v6 = v4; // 0xda324
		if (v4 <= 0xffffffff) {
			// 0xda320
			*(char *)v1 = (char)(a4 % 256);
			v6 = v2;
			// branch -> 0xda324
		}
		// 0xda324
		v5 = 2 * v6;
		v2 = v5;
		v1++;
		int32_t v7 = v3 - 1; // 0xda32c
		v3 = v7;
		if (v7 == 0) {
			// break -> 0xda330
			break;
		}
		v4 = v5;
		// continue -> 0xda318
	}
	// 0xda330
	*(int32_t *)a3 = v5;
	return result;
}

// Address range: 0xda338 - 0xda538
int32_t function_da338(char *a1, int32_t a2, int32_t a3)
{
	g37 = a2;
	int32_t v1 = (int32_t)a1;
	int32_t v2 = v1;   // r7
	uint32_t v3 = g39; // 0xda33c
	*(int32_t *)a1 = v3 + v1;
	int32_t v4 = g37; // 0xda34c
	*(int32_t *)v4 = g39 + v4;
	if (v3 % 2 != 0) {
		// 0xda35c
		a2++;
		g39--;
		unsigned char v5 = *(char *)(a3 + (int32_t) * (char *)&g37); // 0xda368
		*(char *)v2 = v5;
		v2++;
		// branch -> 0xda374
	}
	int32_t v6 = __asm_rlwinm_(g39, 0, 30, 30); // 0xda374
	if (v6 != 0) {
		int32_t v7 = a2;                       // 0xda37c
		int32_t v8 = v7 + v6;                  // 0xda37c
		unsigned char v9 = *(char *)v8;        // 0xda37c
		unsigned char v10 = *(char *)(v8 + 1); // 0xda37c
		a2 = v7 + 2;
		g39 -= 2;
		int32_t v11 = 256 * (int16_t)v10 | (int16_t)v9; // 0xda388
		g37 = v11;
		*(char *)v2 = *(char *)(a3 + (int32_t)v9);
		*(char *)(v2 + 1) = *(char *)(v11 / 256 % 256 + a3);
		v2 += 2;
		// branch -> 0xda3ac
	}
	int32_t result = g39 / 4; // 0xda3b0
	if (g39 < 4) {
		// bb
		return result;
	}
	int32_t v12 = __asm_rlwinm_(result, 30, 2, 31); // 0xda3b8
	int32_t v13 = v12;                              // r0
	int32_t v14 = v12;                              // ctr
	int32_t v15;                                    // 0xda4e8
	int32_t v16;                                    // 0xda530
	int32_t v17;                                    // 0xda4e8
	unsigned char v18;                              // 0xda51c
	unsigned char v19;                              // 0xda524
	if (v12 == 0) {
		// 0xda3b8
		// branch -> 0xda4e4
	} else {
		while (true) {
			int32_t v20 = a2;                    // 0xda3c4
			int32_t v21 = __asm_lwbrx(v12, v20); // 0xda3c4
			*(char *)v2 = *(char *)(a3 + v21 % 256);
			*(char *)(v2 + 1) = *(char *)a3;
			*(char *)(v2 + 2) = *(char *)a3;
			unsigned char v22 = *(char *)(v21 / 256 / 256 / 256 % 256 + a3); // 0xda400
			*(char *)(v2 + 3) = v22;
			int32_t v23 = __asm_lwbrx((int32_t)v22, v20 + 4); // 0xda408
			*(char *)(v2 + 4) = *(char *)(a3 + v23 % 256);
			*(char *)(v2 + 5) = *(char *)a3;
			*(char *)(v2 + 6) = *(char *)a3;
			unsigned char v24 = *(char *)(v23 / 256 / 256 / 256 % 256 + a3); // 0xda444
			*(char *)(v2 + 7) = v24;
			int32_t v25 = __asm_lwbrx((int32_t)v24, v20 + 8); // 0xda44c
			*(char *)(v2 + 8) = *(char *)(a3 + v25 % 256);
			*(char *)(v2 + 9) = *(char *)a3;
			*(char *)(v2 + 10) = *(char *)a3;
			unsigned char v26 = *(char *)(v25 / 256 / 256 / 256 % 256 + a3); // 0xda488
			*(char *)(v2 + 11) = v26;
			int32_t v27 = __asm_lwbrx((int32_t)v26, v20 + 12); // 0xda490
			a2 = v20 + 16;
			*(char *)(v2 + 12) = *(char *)(a3 + v27 % 256);
			*(char *)(v2 + 13) = *(char *)a3;
			unsigned char v28 = *(char *)a3; // 0xda4c4
			g37 = v28;
			*(char *)(v2 + 14) = v28;
			unsigned char v29 = *(char *)(v27 / 256 / 256 / 256 % 256 + a3); // 0xda4cc
			v13 = v29;
			*(char *)(v2 + 15) = v29;
			v2 += 16;
			int32_t v30 = v14 - 1; // 0xda4d8
			v14 = v30;
			if (v30 == 0) {
				int32_t result2 = result % 4; // 0xda4dc
				if (result2 == 0) {
					// bb
					return 0;
				}
				// 0xda4e4
				v15 = a2;
				v17 = __asm_lwbrx(v13, v15);
				*(char *)v2 = *(char *)(a3 + v17 % 256);
				*(char *)(v2 + 1) = *(char *)a3;
				v18 = *(char *)a3;
				g37 = v18;
				*(char *)(v2 + 2) = v18;
				v19 = *(char *)(v17 / 256 / 256 / 256 % 256 + a3);
				*(char *)(v2 + 3) = v19;
				v2 += 4;
				v16 = result2 - 1;
				// branch -> 0xda4e8
				while (v16 != 0) {
					// 0xda4e8
					v15 += 4;
					v17 = __asm_lwbrx((int32_t)v19, v15);
					*(char *)v2 = *(char *)(a3 + v17 % 256);
					*(char *)(v2 + 1) = *(char *)a3;
					v18 = *(char *)a3;
					g37 = v18;
					*(char *)(v2 + 2) = v18;
					v19 = *(char *)(v17 / 256 / 256 / 256 % 256 + a3);
					*(char *)(v2 + 3) = v19;
					v2 += 4;
					v16--;
					// continue -> 0xda4e8
				}
				// 0xda534
				return result2;
			}
			// 0xda3c4
			v12 = v13;
			// branch -> 0xda3c4
		}
	}
	// 0xda4e4
	v15 = a2;
	v17 = __asm_lwbrx(v13, v15);
	*(char *)v2 = *(char *)(a3 + v17 % 256);
	*(char *)(v2 + 1) = *(char *)a3;
	v18 = *(char *)a3;
	g37 = v18;
	*(char *)(v2 + 2) = v18;
	v19 = *(char *)(v17 / 256 / 256 / 256 % 256 + a3);
	*(char *)(v2 + 3) = v19;
	v2 += 4;
	v16 = result - 1;
	// branch -> 0xda4e8
	while (v16 != 0) {
		// 0xda4e8
		v15 += 4;
		v17 = __asm_lwbrx((int32_t)v19, v15);
		*(char *)v2 = *(char *)(a3 + v17 % 256);
		*(char *)(v2 + 1) = *(char *)a3;
		v18 = *(char *)a3;
		g37 = v18;
		*(char *)(v2 + 2) = v18;
		v19 = *(char *)(v17 / 256 / 256 / 256 % 256 + a3);
		*(char *)(v2 + 3) = v19;
		v2 += 4;
		v16--;
		// continue -> 0xda4e8
	}
	// 0xda534
	return result;
}

// Address range: 0xda538 - 0xda6a4
int32_t function_da538(char *a1, int32_t a2, int32_t a3)
{
	int32_t v1 = (int32_t)a1;
	int32_t v2 = v1; // r7
	*(int32_t *)a1 = g39 + v1;
	int32_t result = g39 / 4; // r3
	*(int32_t *)a2 = a2 + g39;
	int32_t v3; // ctr
	int32_t v4; // 0xda678
	int32_t v5; // 0xda694
	int32_t v6; // 0xda69c
	int32_t v7; // 0xda690
	if (g39 < 4) {
		// 0xda674
		v4 = g39;
		// branch -> 0xda674
	} else {
		int32_t v8 = result;                       // 0xda560
		int32_t v9 = __asm_rlwinm_(v8, 29, 3, 31); // 0xda560
		int32_t v10 = -4 * v8;                     // r0
		int32_t v11 = v2;
		int32_t v12;       // 0xda658
		int32_t v13;       // 0xda668
		int32_t v14;       // 0xda66c
		int32_t v15;       // 0xda64c
		unsigned char v16; // 0xda660
		if (v9 == 0) {
			// 0xda648
			v15 = (int32_t) * (char *)a2;
			*(char *)v11 = *(char *)(a3 + v15);
			v12 = a2;
			a2 = v12 + 4;
			v16 = *(char *)(a3 + (int32_t) * (char *)(v12 + 2));
			*(char *)(v2 + 2) = v16;
			v13 = v2 + 4;
			v2 = v13;
			v14 = v8 - 1;
			// branch -> 0xda64c
			while (v14 != 0) {
				// 0xda64c
				v15 = (int32_t) * (char *)a2;
				*(char *)v13 = *(char *)(a3 + v15);
				v12 = a2;
				a2 = v12 + 4;
				v16 = *(char *)(a3 + (int32_t) * (char *)(v12 + 2));
				*(char *)(v2 + 2) = v16;
				v13 = v2 + 4;
				v2 = v13;
				v14--;
				// continue -> 0xda64c
			}
			// 0xda670
			v4 = v10 + g39;
			// branch -> 0xda674
			// 0xda674
			v3 = v4;
			if (v4 == 0) {
				// bb
				return result;
			}
			v7 = v2;
			// branch -> 0xda680
			while (true) {
				// 0xda680
				v6 = v4;
				v5 = v7;
				if (v7 % 2 == 0) {
				lab_0xda688_2:;
					int32_t v17 = (int32_t) * (char *)a2; // 0xda688
					*(char *)v7 = *(char *)(a3 + v17);
					v6 = v3;
					v5 = v2;
					// branch -> 0xda694
				}
			lab_0xda694_2:;
				int32_t v18 = v5 + 1; // 0xda694
				v2 = v18;
				a2++;
				int32_t v19 = v6 - 1; // 0xda69c
				v3 = v19;
				if (v19 == 0) {
					// break -> 0xda6a0
					break;
				}
				v4 = v19;
				v7 = v18;
				// continue -> 0xda680
			}
			// 0xda6a0
			return result;
		}
		int32_t v20 = (int32_t) * (char *)a2; // 0xda574
		*(char *)v11 = *(char *)(a3 + v20);
		unsigned char v21 = *(char *)(a3 + (int32_t) * (char *)(a2 + 2)); // 0xda584
		*(char *)(v2 + 2) = v21;
		unsigned char v22 = *(char *)(a3 + (int32_t) * (char *)(a2 + 4)); // 0xda590
		*(char *)(v2 + 4) = v22;
		unsigned char v23 = *(char *)(a3 + (int32_t) * (char *)(a2 + 6)); // 0xda59c
		*(char *)(v2 + 6) = v23;
		unsigned char v24 = *(char *)(a3 + (int32_t) * (char *)(a2 + 8)); // 0xda5a8
		*(char *)(v2 + 8) = v24;
		unsigned char v25 = *(char *)(a3 + (int32_t) * (char *)(a2 + 10)); // 0xda5b4
		*(char *)(v2 + 10) = v25;
		unsigned char v26 = *(char *)(a3 + (int32_t) * (char *)(a2 + 12)); // 0xda5c0
		*(char *)(v2 + 12) = v26;
		unsigned char v27 = *(char *)(a3 + (int32_t) * (char *)(a2 + 14)); // 0xda5cc
		*(char *)(v2 + 14) = v27;
		unsigned char v28 = *(char *)(a3 + (int32_t) * (char *)(a2 + 16)); // 0xda5d8
		*(char *)(v2 + 16) = v28;
		unsigned char v29 = *(char *)(a3 + (int32_t) * (char *)(a2 + 18)); // 0xda5e4
		*(char *)(v2 + 18) = v29;
		unsigned char v30 = *(char *)(a3 + (int32_t) * (char *)(a2 + 20)); // 0xda5f0
		*(char *)(v2 + 20) = v30;
		unsigned char v31 = *(char *)(a3 + (int32_t) * (char *)(a2 + 22)); // 0xda5fc
		*(char *)(v2 + 22) = v31;
		unsigned char v32 = *(char *)(a3 + (int32_t) * (char *)(a2 + 24)); // 0xda608
		*(char *)(v2 + 24) = v32;
		unsigned char v33 = *(char *)(a3 + (int32_t) * (char *)(a2 + 26)); // 0xda614
		*(char *)(v2 + 26) = v33;
		unsigned char v34 = *(char *)(a3 + (int32_t) * (char *)(a2 + 28)); // 0xda620
		*(char *)(v2 + 28) = v34;
		int32_t v35 = a2; // 0xda628
		a2 = v35 + 32;
		unsigned char v36 = *(char *)(a3 + (int32_t) * (char *)(v35 + 30)); // 0xda630
		*(char *)(v2 + 30) = v36;
		int32_t v37 = v2 + 32; // 0xda638
		v2 = v37;
		int32_t v38 = v9 - 1; // 0xda63c
		while (v38 != 0) {
			// 0xda574
			v20 = (int32_t) * (char *)a2;
			*(char *)v37 = *(char *)(a3 + v20);
			v21 = *(char *)(a3 + (int32_t) * (char *)(a2 + 2));
			*(char *)(v2 + 2) = v21;
			v22 = *(char *)(a3 + (int32_t) * (char *)(a2 + 4));
			*(char *)(v2 + 4) = v22;
			v23 = *(char *)(a3 + (int32_t) * (char *)(a2 + 6));
			*(char *)(v2 + 6) = v23;
			v24 = *(char *)(a3 + (int32_t) * (char *)(a2 + 8));
			*(char *)(v2 + 8) = v24;
			v25 = *(char *)(a3 + (int32_t) * (char *)(a2 + 10));
			*(char *)(v2 + 10) = v25;
			v26 = *(char *)(a3 + (int32_t) * (char *)(a2 + 12));
			*(char *)(v2 + 12) = v26;
			v27 = *(char *)(a3 + (int32_t) * (char *)(a2 + 14));
			*(char *)(v2 + 14) = v27;
			v28 = *(char *)(a3 + (int32_t) * (char *)(a2 + 16));
			*(char *)(v2 + 16) = v28;
			v29 = *(char *)(a3 + (int32_t) * (char *)(a2 + 18));
			*(char *)(v2 + 18) = v29;
			v30 = *(char *)(a3 + (int32_t) * (char *)(a2 + 20));
			*(char *)(v2 + 20) = v30;
			v31 = *(char *)(a3 + (int32_t) * (char *)(a2 + 22));
			*(char *)(v2 + 22) = v31;
			v32 = *(char *)(a3 + (int32_t) * (char *)(a2 + 24));
			*(char *)(v2 + 24) = v32;
			v33 = *(char *)(a3 + (int32_t) * (char *)(a2 + 26));
			*(char *)(v2 + 26) = v33;
			v34 = *(char *)(a3 + (int32_t) * (char *)(a2 + 28));
			*(char *)(v2 + 28) = v34;
			v35 = a2;
			a2 = v35 + 32;
			v36 = *(char *)(a3 + (int32_t) * (char *)(v35 + 30));
			*(char *)(v2 + 30) = v36;
			v37 = v2 + 32;
			v2 = v37;
			v38--;
			// continue -> 0xda574
		}
		int32_t v39 = result % 8; // 0xda640
		result = v39;
		if (v39 != 0) {
			// 0xda648
			v15 = (int32_t) * (char *)a2;
			*(char *)v37 = *(char *)(a3 + v15);
			v12 = a2;
			a2 = v12 + 4;
			v16 = *(char *)(a3 + (int32_t) * (char *)(v12 + 2));
			*(char *)(v2 + 2) = v16;
			v13 = v2 + 4;
			v2 = v13;
			v14 = v39 - 1;
			// branch -> 0xda64c
			while (v14 != 0) {
				// 0xda64c
				v15 = (int32_t) * (char *)a2;
				*(char *)v13 = *(char *)(a3 + v15);
				v12 = a2;
				a2 = v12 + 4;
				v16 = *(char *)(a3 + (int32_t) * (char *)(v12 + 2));
				*(char *)(v2 + 2) = v16;
				v13 = v2 + 4;
				v2 = v13;
				v14--;
				// continue -> 0xda64c
			}
			// 0xda670
			v4 = v10 + g39;
			// branch -> 0xda674
			// 0xda674
			v3 = v4;
			if (v4 == 0) {
				// bb
				return result;
			}
			// 0xda680
			v7 = v2;
			// branch -> 0xda680
			while (true) {
				// 0xda680
				if (v7 % 2 == 0) {
					goto lab_0xda688_2;
				}
				v6 = v4;
				v5 = v7;
				goto lab_0xda694_2;
			}
		}
		// 0xda670
		v4 = v10 + g39;
		// branch -> 0xda674
	}
	// 0xda674
	v3 = v4;
	if (v4 == 0) {
		// bb
		return result;
	}
	// 0xda680
	v7 = v2;
	// branch -> 0xda680
	while (true) {
		// 0xda680
		if (v7 % 2 == 0) {
			goto lab_0xda688_2;
		}
		v6 = v4;
		v5 = v7;
		goto lab_0xda694_2;
	}
}

// Address range: 0xda6a4 - 0xda810
int32_t function_da6a4(char *a1, int32_t a2, int32_t a3)
{
	int32_t v1 = (int32_t)a1;
	int32_t v2 = v1; // r7
	*(int32_t *)a1 = g39 + v1;
	int32_t result = g39 / 4; // r3
	*(int32_t *)a2 = a2 + g39;
	int32_t v3; // ctr
	int32_t v4; // 0xda7e4
	int32_t v5; // 0xda800
	int32_t v6; // 0xda808
	int32_t v7; // 0xda7fc
	if (g39 < 4) {
		// 0xda7e0
		v4 = g39;
		// branch -> 0xda7e0
	} else {
		int32_t v8 = result;                       // 0xda6cc
		int32_t v9 = __asm_rlwinm_(v8, 29, 3, 31); // 0xda6cc
		int32_t v10 = -4 * v8;                     // r0
		int32_t v11 = v2;
		int32_t v12;       // 0xda7c4
		int32_t v13;       // 0xda7d4
		int32_t v14;       // 0xda7d8
		int32_t v15;       // 0xda7b8
		unsigned char v16; // 0xda7cc
		if (v9 == 0) {
			// 0xda7b4
			v15 = (int32_t) * (char *)(a2 + 1);
			*(char *)(v11 + 1) = *(char *)(a3 + v15);
			v12 = a2;
			a2 = v12 + 4;
			v16 = *(char *)(a3 + (int32_t) * (char *)(v12 + 3));
			*(char *)(v2 + 3) = v16;
			v13 = v2 + 4;
			v2 = v13;
			v14 = v8 - 1;
			// branch -> 0xda7b8
			while (v14 != 0) {
				// 0xda7b8
				v15 = (int32_t) * (char *)(a2 + 1);
				*(char *)(v13 + 1) = *(char *)(a3 + v15);
				v12 = a2;
				a2 = v12 + 4;
				v16 = *(char *)(a3 + (int32_t) * (char *)(v12 + 3));
				*(char *)(v2 + 3) = v16;
				v13 = v2 + 4;
				v2 = v13;
				v14--;
				// continue -> 0xda7b8
			}
			// 0xda7dc
			v4 = v10 + g39;
			// branch -> 0xda7e0
			// 0xda7e0
			v3 = v4;
			if (v4 == 0) {
				// bb
				return result;
			}
			v7 = v2;
			// branch -> 0xda7ec
			while (true) {
				// 0xda7ec
				v6 = v4;
				v5 = v7;
				if (v7 % 2 != 0) {
				lab_0xda7f4_2:;
					int32_t v17 = (int32_t) * (char *)a2; // 0xda7f4
					*(char *)v7 = *(char *)(a3 + v17);
					v6 = v3;
					v5 = v2;
					// branch -> 0xda800
				}
			lab_0xda800_2:;
				int32_t v18 = v5 + 1; // 0xda800
				v2 = v18;
				a2++;
				int32_t v19 = v6 - 1; // 0xda808
				v3 = v19;
				if (v19 == 0) {
					// break -> 0xda80c
					break;
				}
				v4 = v19;
				v7 = v18;
				// continue -> 0xda7ec
			}
			// 0xda80c
			return result;
		}
		int32_t v20 = (int32_t) * (char *)(a2 + 1); // 0xda6e0
		*(char *)(v11 + 1) = *(char *)(a3 + v20);
		unsigned char v21 = *(char *)(a3 + (int32_t) * (char *)(a2 + 3)); // 0xda6f0
		*(char *)(v2 + 3) = v21;
		unsigned char v22 = *(char *)(a3 + (int32_t) * (char *)(a2 + 5)); // 0xda6fc
		*(char *)(v2 + 5) = v22;
		unsigned char v23 = *(char *)(a3 + (int32_t) * (char *)(a2 + 7)); // 0xda708
		*(char *)(v2 + 7) = v23;
		unsigned char v24 = *(char *)(a3 + (int32_t) * (char *)(a2 + 9)); // 0xda714
		*(char *)(v2 + 9) = v24;
		unsigned char v25 = *(char *)(a3 + (int32_t) * (char *)(a2 + 11)); // 0xda720
		*(char *)(v2 + 11) = v25;
		unsigned char v26 = *(char *)(a3 + (int32_t) * (char *)(a2 + 13)); // 0xda72c
		*(char *)(v2 + 13) = v26;
		unsigned char v27 = *(char *)(a3 + (int32_t) * (char *)(a2 + 15)); // 0xda738
		*(char *)(v2 + 15) = v27;
		unsigned char v28 = *(char *)(a3 + (int32_t) * (char *)(a2 + 17)); // 0xda744
		*(char *)(v2 + 17) = v28;
		unsigned char v29 = *(char *)(a3 + (int32_t) * (char *)(a2 + 19)); // 0xda750
		*(char *)(v2 + 19) = v29;
		unsigned char v30 = *(char *)(a3 + (int32_t) * (char *)(a2 + 21)); // 0xda75c
		*(char *)(v2 + 21) = v30;
		unsigned char v31 = *(char *)(a3 + (int32_t) * (char *)(a2 + 23)); // 0xda768
		*(char *)(v2 + 23) = v31;
		unsigned char v32 = *(char *)(a3 + (int32_t) * (char *)(a2 + 25)); // 0xda774
		*(char *)(v2 + 25) = v32;
		unsigned char v33 = *(char *)(a3 + (int32_t) * (char *)(a2 + 27)); // 0xda780
		*(char *)(v2 + 27) = v33;
		unsigned char v34 = *(char *)(a3 + (int32_t) * (char *)(a2 + 29)); // 0xda78c
		*(char *)(v2 + 29) = v34;
		int32_t v35 = a2; // 0xda794
		a2 = v35 + 32;
		unsigned char v36 = *(char *)(a3 + (int32_t) * (char *)(v35 + 31)); // 0xda79c
		*(char *)(v2 + 31) = v36;
		int32_t v37 = v2 + 32; // 0xda7a4
		v2 = v37;
		int32_t v38 = v9 - 1; // 0xda7a8
		while (v38 != 0) {
			// 0xda6e0
			v20 = (int32_t) * (char *)(a2 + 1);
			*(char *)(v37 + 1) = *(char *)(a3 + v20);
			v21 = *(char *)(a3 + (int32_t) * (char *)(a2 + 3));
			*(char *)(v2 + 3) = v21;
			v22 = *(char *)(a3 + (int32_t) * (char *)(a2 + 5));
			*(char *)(v2 + 5) = v22;
			v23 = *(char *)(a3 + (int32_t) * (char *)(a2 + 7));
			*(char *)(v2 + 7) = v23;
			v24 = *(char *)(a3 + (int32_t) * (char *)(a2 + 9));
			*(char *)(v2 + 9) = v24;
			v25 = *(char *)(a3 + (int32_t) * (char *)(a2 + 11));
			*(char *)(v2 + 11) = v25;
			v26 = *(char *)(a3 + (int32_t) * (char *)(a2 + 13));
			*(char *)(v2 + 13) = v26;
			v27 = *(char *)(a3 + (int32_t) * (char *)(a2 + 15));
			*(char *)(v2 + 15) = v27;
			v28 = *(char *)(a3 + (int32_t) * (char *)(a2 + 17));
			*(char *)(v2 + 17) = v28;
			v29 = *(char *)(a3 + (int32_t) * (char *)(a2 + 19));
			*(char *)(v2 + 19) = v29;
			v30 = *(char *)(a3 + (int32_t) * (char *)(a2 + 21));
			*(char *)(v2 + 21) = v30;
			v31 = *(char *)(a3 + (int32_t) * (char *)(a2 + 23));
			*(char *)(v2 + 23) = v31;
			v32 = *(char *)(a3 + (int32_t) * (char *)(a2 + 25));
			*(char *)(v2 + 25) = v32;
			v33 = *(char *)(a3 + (int32_t) * (char *)(a2 + 27));
			*(char *)(v2 + 27) = v33;
			v34 = *(char *)(a3 + (int32_t) * (char *)(a2 + 29));
			*(char *)(v2 + 29) = v34;
			v35 = a2;
			a2 = v35 + 32;
			v36 = *(char *)(a3 + (int32_t) * (char *)(v35 + 31));
			*(char *)(v2 + 31) = v36;
			v37 = v2 + 32;
			v2 = v37;
			v38--;
			// continue -> 0xda6e0
		}
		int32_t v39 = result % 8; // 0xda7ac
		result = v39;
		if (v39 != 0) {
			// 0xda7b4
			v15 = (int32_t) * (char *)(a2 + 1);
			*(char *)(v37 + 1) = *(char *)(a3 + v15);
			v12 = a2;
			a2 = v12 + 4;
			v16 = *(char *)(a3 + (int32_t) * (char *)(v12 + 3));
			*(char *)(v2 + 3) = v16;
			v13 = v2 + 4;
			v2 = v13;
			v14 = v39 - 1;
			// branch -> 0xda7b8
			while (v14 != 0) {
				// 0xda7b8
				v15 = (int32_t) * (char *)(a2 + 1);
				*(char *)(v13 + 1) = *(char *)(a3 + v15);
				v12 = a2;
				a2 = v12 + 4;
				v16 = *(char *)(a3 + (int32_t) * (char *)(v12 + 3));
				*(char *)(v2 + 3) = v16;
				v13 = v2 + 4;
				v2 = v13;
				v14--;
				// continue -> 0xda7b8
			}
			// 0xda7dc
			v4 = v10 + g39;
			// branch -> 0xda7e0
			// 0xda7e0
			v3 = v4;
			if (v4 == 0) {
				// bb
				return result;
			}
			// 0xda7ec
			v7 = v2;
			// branch -> 0xda7ec
			while (true) {
				// 0xda7ec
				if (v7 % 2 == 0) {
					v6 = v4;
					v5 = v7;
					goto lab_0xda800_2;
				}
				goto lab_0xda7f4_2;
			}
		}
		// 0xda7dc
		v4 = v10 + g39;
		// branch -> 0xda7e0
	}
	// 0xda7e0
	v3 = v4;
	if (v4 == 0) {
		// bb
		return result;
	}
	// 0xda7ec
	v7 = v2;
	// branch -> 0xda7ec
	while (true) {
		// 0xda7ec
		if (v7 % 2 == 0) {
			v6 = v4;
			v5 = v7;
			goto lab_0xda800_2;
		}
		goto lab_0xda7f4_2;
	}
}

// Address range: 0xda810 - 0xda868
int32_t function_da810(char *a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t result = (int32_t)a1;
	int32_t v1 = result; // r8
	int32_t v2 = a4;     // ctr
	int32_t v3 = a5;     // r10
	*(int32_t *)a1 = result + a4;
	*(int32_t *)a2 = a4 + a2;
	int32_t v4 = v3;
	if (a4 == 0) {
		// 0xda860
		*(int32_t *)a5 = v4;
		return result;
	}
	int32_t v5; // 0xda850
	while (true) {
		int32_t v6 = v4; // 0xda850
		if (v4 <= 0xffffffff) {
			char v7 = *(char *)(a3 + (int32_t) * (char *)a2); // 0xda848
			*(char *)v1 = v7;
			v6 = v3;
			// branch -> 0xda850
		}
		// 0xda850
		v5 = 2 * v6;
		v3 = v5;
		v1++;
		a2++;
		int32_t v8 = v2 - 1; // 0xda85c
		v2 = v8;
		if (v8 == 0) {
			// break -> 0xda860
			break;
		}
		v4 = v5;
		// continue -> 0xda83c
	}
	// 0xda860
	*(int32_t *)a5 = v5;
	return result;
}

// Address range: 0xda868 - 0xda94c
int32_t function_da868(char *a1, int32_t a2, uint32_t a3)
{
	int32_t v1 = a3; // r5
	int32_t v2 = (int32_t)a1;
	int32_t result = v2; // r3
	int32_t v3 = v2;     // r7
	*(int32_t *)a1 = v2 + a3;
	*(int32_t *)a2 = v1 + a2;
	int32_t v4; // 0xda8a8
	if (a3 % 2 == 0) {
		// 0xda868
		v4 = v1;
		// branch -> 0xda8a8
	} else {
		unsigned char v5 = *(char *)&g37; // 0xda88c
		a2++;
		if (v5 != 0) {
			// 0xda89c
			*(char *)v3 = v5;
			// branch -> 0xda8a0
		}
		// 0xda8a0
		v3++;
		int32_t v6 = v1 - 1; // 0xda8a4
		v1 = v6;
		v4 = v6;
		// branch -> 0xda8a8
	}
	int32_t v7 = __asm_rlwinm_(v4, 0, 30, 30); // 0xda8a8
	int32_t v8;                                // 0xda8e4
	if (v7 == 0) {
		// 0xda8e4
		v8 = v1;
		// branch -> 0xda8e4
	} else {
		int32_t v9 = a2 + v7;                                            // 0xda8b0
		unsigned char v10 = *(char *)v9;                                 // 0xda8b0
		int16_t v11 = 256 * (int16_t) * (char *)(v9 + 1) | (int16_t)v10; // 0xda8b0
		int32_t v12 = v11;                                               // 0xda8b4
		if (v11 != 0) {
			int32_t v13 = v12 % 256; // 0xda8bc
			result = v13;
			if (v13 != 0) {
				// 0xda8c4
				*(char *)v3 = v10;
				// branch -> 0xda8c8
			}
			uint32_t v14 = v12 / 256; // 0xda8c8
			if (v14 % 256 != 0) {
				// 0xda8d4
				*(char *)(v3 + 1) = (char)v14;
				// branch -> 0xda8d8
			}
		}
		// 0xda8d8
		v3 += 2;
		a2 += 2;
		v8 = v1 - 2;
		// branch -> 0xda8e4
	}
	int32_t v15 = v8 / 4; // 0xda8e4
	if (v8 < 4) {
		// bb
		return result;
	}
	int32_t v16 = a2; // 0xda8f4
	// branch -> 0xda8f4
	while (true) {
		int32_t v17 = __asm_lwbrx(v15, v16); // 0xda8f4
		int32_t v18 = v17;                   // r0
		int32_t v19;                         // 0xda940
		if (v17 != 0) {
			int32_t v20 = v17 % 256; // 0xda900
			result = v20;
			int32_t v21 = v17 / 256; // 0xda904
			if (v20 != 0) {
				// 0xda90c
				*(char *)v3 = (char)v17;
				// branch -> 0xda910
			}
			int32_t v22 = v21 / 256; // 0xda914
			v21 = v22;
			if (v21 % 256 != 0) {
				// 0xda91c
				*(char *)(v3 + 1) = (char)v21;
				v22 = v21;
				// branch -> 0xda920
			}
			int32_t v23 = v22; // 0xda92c
			if (v22 % 256 != 0) {
				// 0xda928
				*(char *)(v3 + 2) = (char)v22;
				v23 = v21;
				// branch -> 0xda92c
			}
			uint32_t v24 = v23 / 256; // 0xda92c
			int32_t v25 = v24 % 256;  // 0xda930
			v18 = v25;
			if (v25 != 0) {
				// 0xda938
				*(char *)(v3 + 3) = (char)v24;
				// branch -> 0xda93c
			}
			// 0xda93c
			v3 += 4;
			v19 = a2 + 4;
			a2 = v19;
			if (v15 == 1) {
				// 0xda948
				return result;
			}
		lab_0xda93c:
			// 0xda93c
			v16 = v19;
			v15 = v18;
			// branch -> 0xda8f4
			continue;
		}
		// 0xda93c
		v3 += 4;
		v19 = a2 + 4;
		a2 = v19;
		if (v15 != 1) {
			goto lab_0xda93c;
		}
		// 0xda948
		return result;
	}
}
