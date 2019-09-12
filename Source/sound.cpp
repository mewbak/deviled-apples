
// Address range: 0xb4db8 - 0xb4e5c
int32_t snd_update(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x5810); // 0xb4dc0
	int32_t v2 = 0;                          // r30
	// branch -> 0xb4ddc
	while (true) {
		int32_t v3 = *(int32_t *)v1; // 0xb4ddc
		g34 = v3;
		int32_t v4; // 0xb4e30
		if (v3 != 0) {
			// 0xb4de8
			if (a1 == 0) {
				// 0xb4df0
				int32_t v5;                                    // bp-24
				int32_t v6 = function_eb320(v3, (int32_t)&v5); // 0xb4df4
				g34 = v6;
				if (v6 == 0) {
					// 0xb4e04
					if (v5 == 1) {
					lab_0xb4e30:
						// 0xb4e30
						v4 = v2 + 1;
						v2 = v4;
						if (v4 >= 8) {
							// break -> 0xb4e40
							break;
						}
						v1 += 4;
						// continue -> 0xb4ddc
						continue;
					}
				}
			}
			int32_t v7 = *(int32_t *)v1; // 0xb4e10
			g34 = v7;
			function_eb338(v7);
			int32_t v8 = *(int32_t *)v1; // 0xb4e1c
			g34 = v8;
			g34 = function_eb350(v8);
			*(int32_t *)v1 = 0;
			// branch -> 0xb4e30
			goto lab_0xb4e30;
		}
		// 0xb4e30
		v4 = v2 + 1;
		v2 = v4;
		if (v4 >= 8) {
			// break -> 0xb4e40
			break;
		}
		v1 += 4;
		// continue -> 0xb4ddc
	}
	// 0xb4e40
	return g34;
}

// Address range: 0xb4e5c - 0xb4efc
int32_t function_b4e5c(int32_t a1)
{
	int32_t v1 = g10;                        // 0xb4e60
	int32_t v2 = *(int32_t *)(g23 - 0x5810); // 0xb4e70
	if (*(char *)*(int32_t *)(g23 - 0x6f44) == 0) {
		// 0xb4e84
		// branch -> 0xb4ee8
	} else {
		int32_t v3 = 8;  // 0xb4ee0
		int32_t v4 = 0;  // 0xb4ea8
		int32_t v5 = v2; // 0xb4ed8
		// branch -> 0xb4e9c
		while (true) {
			// 0xb4e9c
			if (*(int32_t *)v5 == 0) {
				int32_t v6 = *(int32_t *)(g23 - 0x4b74); // 0xb4eac
				g34 = v6;
				int32_t v7 = 4 * v4 + v2; // 0xb4eb0
				if (function_eb9b0(v6, v7) == 0) {
					// 0xb4ed0
					// branch -> 0xb4ee8
					// 0xb4ee8
					g10 = v1;
					return *(int32_t *)v7;
				}
				// 0xb4ec8
				// branch -> 0xb4ee8
				// 0xb4ee8
				g10 = v1;
				return 0;
			}
			int32_t v8 = v3 - 1; // 0xb4ee0
			if (v8 == 0) {
				// break -> 0xb4ee4
				break;
			}
			v3 = v8;
			v4++;
			v5 += 4;
			// continue -> 0xb4e9c
		}
		// 0xb4ee4
		// branch -> 0xb4ee8
	}
	// 0xb4ee8
	g10 = v1;
	return 0;
}

// Address range: 0xb4efc - 0xb4fb0
int32_t function_b4efc(int64_t a1, int32_t a2)
{
	int32_t v1 = g10;                        // 0xb4f00
	int32_t v2 = a1;                         // 0xb4f18
	int32_t v3 = *(int32_t *)(g23 - 0x5814); // 0xb4f1c
	g34 = v3;
	int32_t v4; // 0xb4f40
	if (SRegLoadValue(v3, v2, 0, (int32_t)&a2) == 0) {
		// 0xb4f38
		a2 = 0;
		v4 = 0;
		// branch -> 0xb4f40
	} else {
		// 0xb4efc
		v4 = a2;
		// branch -> 0xb4f40
	}
	// 0xb4f40
	*(int32_t *)a2 = v4;
	int32_t result; // 0xb4f84
	uint64_t v5;    // 0xb4f7c
	int32_t v6;     // 0xb4f80
	if (v2 <= -1601) {
		// 0xb4f54
		*(int32_t *)a2 = -1600;
		// branch -> 0xb4f70
		// 0xb4f70
		v5 = 0x51eb851f * (int64_t)v2;
		v6 = (int32_t)(v5 / 0x100000000) >> 31;
		result = v6 < 0;
		*(int32_t *)a2 = 100 * ((v6 & -0x8000000 | (int32_t)(v5 / 0x2000000000)) + result);
		g10 = v1;
		return result;
	}
	// 0xb4f60
	if (v2 >= 1) {
		// 0xb4f68
		*(int32_t *)a2 = 0;
		// branch -> 0xb4f70
	}
	// 0xb4f70
	v5 = 0x51eb851f * (int64_t)v2;
	v6 = (int32_t)(v5 / 0x100000000) >> 31;
	result = v6 < 0;
	*(int32_t *)a2 = 100 * ((v6 & -0x8000000 | (int32_t)(v5 / 0x2000000000)) + result);
	g10 = v1;
	return result;
}

// Address range: 0xb4fb0 - 0xb4fe8
int32_t function_b4fb0(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x5814); // 0xb4fc0
	g34 = v1;
	return SRegSaveValue(v1, a1, 0, a2);
}

// Address range: 0xb4fe8 - 0xb50dc
int32_t function_b4fe8(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0xb4fe8
	int32_t v2 = g35; // 0xb4ff0
	g35 = a2;
	g33 = a1;
	g34 = a2;
	int32_t result = 0;
	if (function_eba10(a2) == 0) {
		// 0xb5024
		g36 = 0;
		g38 = 0;
		int32_t v3; // bp-24
		WOpenFile(*(int32_t *)(g33 + 28), (int32_t)&v3);
		function_c88a0(v3, *(int32_t *)(g33 + 24), 0, 0);
		int32_t v4 = *(int32_t *)(g33 + 20); // 0xb504c
		int32_t v5 = g35;                    // 0xb5050
		g34 = v5;
		int32_t v6;                                                                                      // bp-28
		int32_t v7;                                                                                      // bp-32
		int32_t v8;                                                                                      // bp-36
		int32_t v9;                                                                                      // bp-40
		int32_t v10 = function_eb920(v5, 0, v4, (int32_t)&v6, (int32_t)&v8, (int32_t)&v7, (int32_t)&v9); // 0xb506c
		if (v10 == 0) {
			// 0xb507c
			WReadFile(v3, v6, v8);
			g34 = g35;
			if (function_eb938(g35, v6, v8, v7, v9) == 0) {
				// 0xb50b0
				g36 = 1;
				// branch -> 0xb50b4
			}
		}
		g34 = v3;
		WCloseFile(v3);
		result = g36;
		// branch -> 0xb50c0
	}
	// 0xb50c0
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0xb50dc - 0xb5114
int32_t function_b50dc(int32_t a1)
{
	int32_t v1 = g10; // 0xb50dc
	if (a1 == 0) {
		// 0xb5104
		g10 = v1;
		return 0;
	}
	int32_t v2 = *(int32_t *)(a1 + 32); // 0xb50f0
	g34 = v2;
	int32_t result; // 0xb5110
	if (v2 != 0) {
		// 0xb50fc
		result = function_eb338(v2);
		// branch -> 0xb5104
	} else {
		result = 0;
	}
	// 0xb5104
	g10 = v1;
	return result;
}

// Address range: 0xb5114 - 0xb5180
int32_t function_b5114(int32_t a1)
{
	int32_t v1 = g10; // 0xb5114
	if (a1 == 0) {
		// 0xb5128
		// branch -> 0xb5170
		// 0xb5170
		g10 = v1;
		return 0;
	}
	int32_t v2 = *(int32_t *)(a1 + 32); // 0xb5130
	g34 = v2;
	if (v2 == 0) {
		// 0xb513c
		// branch -> 0xb5170
		// 0xb5170
		g10 = v1;
		return 0;
	}
	// 0xb5144
	int32_t v3;     // bp-8
	int32_t result; // 0xb517c
	if (function_eb320(v2, (int32_t)&v3) == 0) {
		// 0xb5160
		result = __asm_rlwinm(llvm_ctlz_i32(1 - v3, true), 27, 24, 31);
		// branch -> 0xb5170
	} else {
		// 0xb5158
		result = 0;
		// branch -> 0xb5170
	}
	// 0xb5170
	g10 = v1;
	return result;
}

// Address range: 0xb5180 - 0xb52c8
int32_t function_b5180(int32_t a1, int32_t a2, int32_t a3)
{
	// 0xb5180
	g31 = a1;
	g32 = a2;
	g33 = a3;
	if (a1 == 0) {
		// 0xb52b4
		return 0;
	}
	int32_t result = *(int32_t *)(g23 - 0x72b8); // 0xb51a0
	g34 = result;
	if (*(char *)result == 0) {
		// 0xb52b4
		return result;
	}
	int32_t v1 = *(int32_t *)(a1 + 32); // 0xb51b0
	g35 = v1;
	if (v1 == 0) {
		// 0xb52b4
		return result;
	}
	int32_t v2 = GetTickCount(); // 0xb51bc
	g34 = v2;
	int32_t v3 = g31; // 0xb51c4
	g36 = v2;
	int32_t result2; // 0xb52c4
	if (v2 - *(int32_t *)(v3 + 36) > 79) {
		// 0xb51e4
		if (function_b5114(v3) != 0) {
			int32_t v4 = function_b4e5c(*(int32_t *)(g31 + 32)); // 0xb51f8
			g35 = v4;
			if (v4 == 0) {
				// 0xb52b4
				return 0;
			}
		}
		int32_t v5 = g32 + *(int32_t *)(g23 - 0x4b6c); // 0xb5208
		g32 = v5;
		int32_t v6; // 0xb522c
		if (v5 > -1601) {
			// 0xb521c
			if (v5 >= 1) {
				// 0xb5224
				g32 = 0;
				v6 = 0;
				// branch -> 0xb5228
			} else {
				v6 = v5;
			}
		} else {
			// 0xb5214
			g32 = -1600;
			v6 = -1600;
			// branch -> 0xb5228
		}
		int32_t v7 = g35; // 0xb5228
		g34 = v7;
		function_eb9c8(v7, v6);
		int32_t v8 = g35; // 0xb5238
		g34 = v8;
		function_eb9e0(v8, g33);
		int32_t v9 = g35; // 0xb5248
		g34 = v9;
		int32_t v10 = function_eb9f8(v9, 0, 0, 0); // 0xb5258
		int32_t v11 = v10;                         // r3
		if (v10 == -0x7787ff6a) {
			int32_t v12 = function_b4fe8(g31, g35); // 0xb528c
			v11 = v12;
			if (v12 != 0) {
				// 0xb5298
				g34 = g35;
				v11 = function_eb9f8(g35, 0, 0, 0);
				// branch -> 0xb52b0
			}
		} else {
			// 0xb526c
			if (v10 != 0) {
				// 0xb5274
				int32_t v13;
				v11 = DXErrMsg(v10, 296, *(int32_t *)(v13 - 0x5818));
				// branch -> 0xb52b0
			}
		}
		// 0xb52b0
		*(int32_t *)(g31 + 36) = g36;
		result2 = v11;
		// branch -> 0xb52b4
	} else {
		// 0xb51d8
		result2 = GetTickCount();
		// branch -> 0xb52b4
	}
	// 0xb52b4
	return result2;
}

// Address range: 0xb52c8 - 0xb5348
int32_t function_b52c8(int32_t a1)
{
	int32_t v1 = g36; // 0xb52c8
	g36 = a1;
	int32_t v2;       // bp-40
	int32_t v3 = &v2; // 0xb52e0
	g34 = v3;
	memset();
	int32_t v4;
	int32_t v5 = *(int32_t *)(v4 - 0x4b74); // 0xb52f0
	g34 = v5;
	v2 = 20;
	int32_t v6 = function_eb5f0(v5, v3, g36 + 32, 0); // 0xb5318
	int32_t result;                                   // 0xb5344
	if (v6 != 0) {
		// 0xb5328
		result = DXErrMsg(v6, 319, *(int32_t *)(v4 - 0x5818));
		// branch -> 0xb5334
	} else {
		result = 0;
	}
	// 0xb5334
	g36 = v1;
	return result;
}

// Address range: 0xb5348 - 0xb5498
int32_t function_b5348(int32_t a1)
{
	int32_t v1 = g36; // 0xb5348
	int32_t v2 = g10; // 0xb534c
	g36 = *(int32_t *)(g23 - 0x5818);
	int32_t v3 = g35; // 0xb5354
	int32_t v4 = g33; // 0xb5358
	g33 = a1;
	if (*(int32_t *)(g23 - 0x4b74) == 0) {
		// 0xb547c
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return 0;
	}
	// 0xb537c
	g38 = 0;
	int32_t v5; // bp-24
	WOpenFile(a1, (int32_t)&v5);
	g34 = 40;
	int32_t v6 = DiabloAllocPtr(); // 0xb5390
	g34 = v6;
	g35 = v6;
	g34 = memset();
	*(int32_t *)(g35 + 28) = g33;
	int32_t v7 = GetTickCount(); // 0xb53a8
	int32_t v8 = g35;            // 0xb53b4
	*(int32_t *)(v8 + 36) = v7 - 81;
	int32_t v9 = function_c8e80(v5, g35, v8 + 20); // 0xb53c4
	g33 = v9;
	if (v9 == 0) {
		// 0xb53d0
		g37 = *(int32_t *)(g35 + 28);
		app_fatal(*(int32_t *)(g23 - 0x581c));
		// branch -> 0xb53dc
	}
	// 0xb53dc
	function_b52c8(g35);
	int32_t v10 = g35;                    // 0xb53e4
	int32_t v11 = *(int32_t *)(v10 + 32); // 0xb53e4
	g34 = v11;
	int32_t v12 = *(int32_t *)(v10 + 20);                                                                  // 0xb53ec
	int32_t v13;                                                                                           // bp-28
	int32_t v14;                                                                                           // bp-32
	int32_t v15;                                                                                           // bp-36
	int32_t v16;                                                                                           // bp-40
	int32_t v17 = function_eb920(v11, 0, v12, (int32_t)&v13, (int32_t)&v15, (int32_t)&v14, (int32_t)&v16); // 0xb5404
	if (v17 != 0) {
		// 0xb5414
		DXErrMsg(v17, 355, g36);
		// branch -> 0xb5420
	}
	// 0xb5420
	g34 = v13;
	memcpy();
	int32_t v18 = *(int32_t *)(g35 + 32); // 0xb5438
	g34 = v18;
	int32_t v19 = function_eb938(v18, v13, v15, v14, v16); // 0xb544c
	if (v19 != 0) {
		// 0xb545c
		DXErrMsg(v19, 362, g36);
		// branch -> 0xb5468
	}
	// 0xb5468
	g34 = g33;
	function_c8eec(g33);
	g34 = v5;
	WCloseFile(v5);
	int32_t result = g35;
	// branch -> 0xb547c
	// 0xb547c
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	return result;
}

// Address range: 0xb5498 - 0xb54f4
int32_t function_b5498(int32_t a1)
{
	int32_t v1 = g36; // 0xb5498
	int32_t v2 = g10; // 0xb549c
	g36 = a1;
	if (a1 == 0) {
		// 0xb54e0
		g36 = v1;
		g10 = v2;
		return 0;
	}
	int32_t v3 = *(int32_t *)(a1 + 32); // 0xb54b0
	g34 = v3;
	int32_t v4; // 0xb54d8
	if (v3 != 0) {
		// 0xb54bc
		function_eb338(v3);
		int32_t v5 = *(int32_t *)(g36 + 32); // 0xb54c4
		g34 = v5;
		function_eb350(v5);
		*(int32_t *)(g36 + 32) = 0;
		v4 = g36;
		// branch -> 0xb54d8
	} else {
		v4 = a1;
	}
	// 0xb54d8
	g34 = v4;
	int32_t result = mem_free_dbg(); // 0xb54dc
	// branch -> 0xb54e0
	// 0xb54e0
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0xb54f4 - 0xb5664
int32_t function_b54f4(int32_t a1)
{
	int32_t v1 = g36; // 0xb54f4
	g36 = *(int32_t *)(g23 - 0x5818);
	int32_t v2 = g35; // 0xb5500
	int32_t v3 = a1;  // 0xb5504
	g35 = v3;
	if (*(char *)(g23 - 0x4b80) == 0) {
		// 0xb551c
		a1 = 0;
		*(int32_t *)(g23 - 0x4b7c) = 0;
		*(char *)(g23 - 0x4b80) = (char)1;
		v3 = g35;
		// branch -> 0xb552c
	}
	// 0xb552c
	int32_t v4; // bp-132
	int32_t v5; // bp-152
	int32_t v6;
	int32_t v7;
	int32_t v8;      // 0xb5580
	int32_t v9;      // 0xb55b8
	int32_t result2; // 0xb5660
	int32_t v10;     // 0xb559c
	int32_t v11;     // 0xb55c4
	int32_t v12;
	int32_t v13;    // 0xb5590
	int32_t v14;    // 0xb5638
	int32_t result; // 0xb5644
	if (v3 != 0) {
		// 0xb5580
		v8 = g23;
		if (*(int32_t *)(v8 - 0x4b7c) == 0) {
			// 0xb5580
			result2 = a1;
			// branch -> 0xb564c
		} else {
			// 0xb558c
			v13 = *(int32_t *)(v8 - 0x4b74);
			g34 = v13;
			v4 = 96;
			v10 = function_eb608(v13, (int32_t)&v4);
			if (v10 != 0) {
				// 0xb55ac
				DXErrMsg(v10, 426, g36);
				// branch -> 0xb55b8
			}
			// 0xb55b8
			v9 = g35;
			if (v9 == 0) {
				// 0xb55b8
				v12 = &v5;
				// branch -> 0xb55d4
			} else {
				// 0xb55c0
				v11 = &v5;
				if (function_c8e28(v9, v11) != 0) {
					// 0xb55c0
					// branch -> 0xb560c
					// 0xb560c
					v14 = *(int32_t *)(g23 - 0x4b7c);
					g34 = v14;
					result = function_eb680(v14, v11, v6);
					// branch -> 0xb564c
					// 0xb564c
					g36 = v1;
					g35 = v2;
					return result;
				}
				v12 = v11;
			}
			// 0xb55d4
			g34 = v12;
			memset();
			v5 = 1;
			// branch -> 0xb560c
			// 0xb560c
			v14 = *(int32_t *)(v7 - 0x4b7c);
			g34 = v14;
			result2 = function_eb680(v14, v12, 0x5622);
			// branch -> 0xb564c
		}
		// 0xb564c
		g36 = v1;
		g35 = v2;
		return result2;
	}
	// 0xb5534
	int32_t v15;        // bp-36
	int32_t v16 = &v15; // 0xb5534
	g34 = v16;
	memset();
	int32_t v17 = *(int32_t *)(v7 - 0x4b74); // 0xb5548
	g34 = v17;
	v15 = 20;
	int32_t v18 = function_eb5f0(v17, v16, v7 - 0x4b7c, 0); // 0xb5564
	a1 = v18;
	if (v18 != 0) {
		// 0xb5574
		a1 = DXErrMsg(v18, 418, g36);
		// branch -> 0xb5580
	}
	// 0xb5580
	v8 = g23;
	if (*(int32_t *)(v8 - 0x4b7c) == 0) {
		// 0xb5580
		result2 = a1;
		// branch -> 0xb564c
	} else {
		// 0xb558c
		v13 = *(int32_t *)(v8 - 0x4b74);
		g34 = v13;
		v4 = 96;
		v10 = function_eb608(v13, (int32_t)&v4);
		if (v10 != 0) {
			// 0xb55ac
			DXErrMsg(v10, 426, g36);
			// branch -> 0xb55b8
		}
		// 0xb55b8
		v9 = g35;
		if (v9 == 0) {
			// 0xb55b8
			v12 = &v5;
			// branch -> 0xb55d4
		} else {
			// 0xb55c0
			v11 = &v5;
			if (function_c8e28(v9, v11) != 0) {
				// 0xb55c0
				// branch -> 0xb560c
				// 0xb560c
				v14 = *(int32_t *)(g23 - 0x4b7c);
				g34 = v14;
				result = function_eb680(v14, v11, v6);
				// branch -> 0xb564c
				// 0xb564c
				g36 = v1;
				g35 = v2;
				return result;
			}
			v12 = v11;
		}
		// 0xb55d4
		g34 = v12;
		memset();
		v5 = 1;
		// branch -> 0xb560c
		// 0xb560c
		v14 = *(int32_t *)(v7 - 0x4b7c);
		g34 = v14;
		result2 = function_eb680(v14, v12, 0x5622);
		// branch -> 0xb564c
	}
	// 0xb564c
	g36 = v1;
	g35 = v2;
	return result2;
}

// Address range: 0xb5664 - 0xb5690
int32_t function_b5664(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0xb5664
	*(int32_t *)(g23 - 0x4b70) = 0;
	return function_eb5c0();
}

// Address range: 0xb5690 - 0xb5798
int32_t snd_init(int32_t a1)
{
	int32_t v1 = g10; // 0xb5694
	g35 = a1;
	function_b4efc((int64_t) * (int32_t *)(g23 - 0x5820), g23 - 0x4b6c);
	int32_t v2 = *(int32_t *)(g23 - 0x4b6c); // 0xb56b4
	g36 = -1600;
	int32_t v3 = *(int32_t *)(g23 - 0x72b8); // 0xb56bc
	int32_t v4 = -1600 - v2;                 // 0xb56c8
	*(char *)v3 = ((char)(v4 <= -1 - v2) + (char)(v2 < 0)) % 2;
	function_b4efc((int64_t) * (int32_t *)(g23 - 0x5824), g23 - 0x4b94);
	int32_t v5 = *(int32_t *)(g23 - 0x4b94); // 0xb56e4
	int32_t v6 = *(int32_t *)(g23 - 0x727c); // 0xb56ec
	g34 = 0;
	int32_t v7 = g36;      // 0xb56f4
	uint32_t v8 = -1 - v5; // 0xb56f4
	uint32_t v9 = v7 - v5; // 0xb56f8
	*(char *)v6 = ((char)(v9 <= v8) + (char)((v7 ^ v8) < 0)) % 2;
	if (function_b5664(0, g23 - 0x4b74, 0, v9) != 0) {
		// 0xb571c
		*(int32_t *)(g23 - 0x4b74) = 0;
		// branch -> 0xb5724
	}
	int32_t v10 = *(int32_t *)(g23 - 0x4b74); // 0xb5724
	g34 = v10;
	int32_t v11;
	int32_t *v12;   // 0xb575c
	int32_t v13;    // 0xb5750
	int32_t v14;    // 0xb575c
	int32_t v15;    // 0xb5768
	int32_t result; // 0xb576c
	if (v10 == 0) {
		// 0xb5750
		v13 = *(int32_t *)(g23 - 0x4b74);
		g34 = v13;
		function_eb698(v13);
		v12 = (int32_t *)(v11 - 0x4b74);
		v14 = *v12;
		g34 = v14;
		function_eb6b0(v14);
		v15 = *v12;
		result = *(int32_t *)(v11 - 0x72b0);
		*(char *)result = (char)(-1 - v15 < -v15);
		g10 = v1;
		return result;
	}
	int32_t v16 = v11; // 0xb5750
	if (function_eb5d8(v10, g35, 3) == 0) {
		// 0xb5748
		function_b54f4(0);
		v16 = g23;
		// branch -> 0xb5750
	}
	// 0xb5750
	v13 = *(int32_t *)(v16 - 0x4b74);
	g34 = v13;
	function_eb698(v13);
	v12 = (int32_t *)(v11 - 0x4b74);
	v14 = *v12;
	g34 = v14;
	function_eb6b0(v14);
	v15 = *v12;
	result = *(int32_t *)(v11 - 0x72b0);
	*(char *)result = (char)(-1 - v15 < -v15);
	g10 = v1;
	return result;
}

// Address range: 0xb5798 - 0xb5820
int32_t sound_cleanup(int32_t a1)
{
	int32_t v1 = g36; // 0xb5798
	g36 = *(int32_t *)(g23 - 0x72b0);
	int32_t v2 = snd_update(1); // 0xb57b0
	g34 = v2;
	int32_t v3 = function_eb398(v2); // 0xb57b4
	g34 = v3;
	function_eb3b0(v3);
	int32_t v4;
	int32_t *v5 = (int32_t *)(v4 - 0x4b74); // 0xb57c4
	int32_t v6 = *v5;                       // 0xb57c4
	g34 = v6;
	if (v6 != 0) {
		// 0xb57d0
		g34 = function_eb3c8(v6);
		*v5 = 0;
		// branch -> 0xb57e0
	}
	char *v7 = (char *)g36; // 0xb57e0
	int32_t result;         // 0xb581c
	if (*v7 == 0) {
		// 0xb57e0
		result = g34;
		// branch -> 0xb580c
	} else {
		// 0xb57ec
		*v7 = 0;
		function_b4fb0(*(int32_t *)(g23 - 0x5820), *(int32_t *)(g23 - 0x4b6c));
		result = function_b4fb0(*(int32_t *)(g23 - 0x5824), *(int32_t *)(g23 - 0x4b94));
		// branch -> 0xb580c
	}
	// 0xb580c
	g36 = v1;
	return result;
}

// Address range: 0xb5820 - 0xb586c
int32_t music_stop(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x4b78); // 0xb582c
	g34 = v1;
	if (v1 != 0) {
		// 0xb5838
		SFileDdaEnd(v1);
		int32_t v2;
		int32_t *v3 = (int32_t *)(v2 - 0x4b78); // 0xb5840
		g34 = *v3;
		SFileCloseFile();
		*v3 = 0;
		*(int32_t *)(g23 - 0x4b90) = 6;
		// branch -> 0xb585c
	}
	// 0xb585c
	return 0;
}

// Address range: 0xb586c - 0xb591c
int32_t music_start(int32_t a1)
{
	int32_t v1 = g36; // 0xb586c
	int32_t v2 = g10; // 0xb5870
	int32_t v3 = g35; // 0xb5874
	g35 = a1;
	int32_t result = music_stop(); // r3
	if (*(int32_t *)(g23 - 0x4b74) == 0) {
		// 0xb5904
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x727c); // 0xb5894
	if (*(char *)result2 == 0) {
		// 0xb5904
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result2;
	}
	int32_t v4 = *(int32_t *)(4 * g35 + *(int32_t *)(g23 - 0x5828)); // 0xb58b0
	g34 = v4;
	g36 = function_eb8f0(v4, g23 - 0x4b78);
	int32_t v5;
	result = function_b54f4(*(int32_t *)(v5 - 0x4b78));
	if (g36 == 0) {
		// 0xb58d0
		*(int32_t *)(g23 - 0x4b78) = 0;
		// branch -> 0xb5904
	} else {
		int32_t v6 = *(int32_t *)(g23 - 0x4b78); // 0xb58dc
		g34 = v6;
		result = function_eb998(v6, 0x40000, 0x40000, 0, *(int32_t *)(g23 - 0x4b94), 0, 0);
		*(int32_t *)(v5 - 0x4b90) = g35;
		// branch -> 0xb5904
	}
	// 0xb5904
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result;
}

// Address range: 0xb591c - 0xb5990
int32_t sound_disable_music(int32_t a1)
{
	int32_t v1 = g10; // 0xb591c
	int32_t v2 = g23; // 0xb5968
	if (*(char *)(g23 - 0x4b88) == 0) {
		// 0xb5934
		*(int32_t *)(g23 - 0x4b84) = 6;
		*(char *)(g23 - 0x4b88) = (char)1;
		v2 = g23;
		// branch -> 0xb5944
	}
	// 0xb5944
	if (a1 != 0) {
		// 0xb594c
		*(int32_t *)(v2 - 0x4b84) = *(int32_t *)(v2 - 0x4b90);
		int32_t result = music_stop(); // 0xb5954
		// branch -> 0xb5980
		// 0xb5980
		g10 = v1;
		return result;
	}
	int32_t v3 = *(int32_t *)(v2 - 0x4b84); // 0xb595c
	int32_t result2 = v3;                   // r3
	if (v3 != 6) {
		int32_t v4 = v2; // 0xb597c
		if (*(int32_t *)(v2 - 0x4b90) == 6) {
			// 0xb5974
			result2 = music_start(v3);
			v4 = g23;
			// branch -> 0xb5978
		}
		// 0xb5978
		*(int32_t *)(v4 - 0x4b84) = 6;
		// branch -> 0xb5980
	} else {
		result2 = 6;
	}
	// 0xb5980
	g10 = v1;
	return result2;
}

// Address range: 0xb5990 - 0xb59e4
int32_t sound_get_or_set_music_volume(void)
{
	int32_t v1 = g10; // 0xb5990
	int32_t v2 = g34; // 0xb5994
	if (v2 == 1) {
		// 0xb59d4
		g10 = v1;
		return *(int32_t *)(g23 - 0x4b94);
	}
	int32_t v3 = *(int32_t *)(g23 - 0x4b78); // r0
	*(int32_t *)(g23 - 0x4b94) = v2;
	if (v3 != 0) {
		// 0xb59bc
		g34 = v3;
		function_ebba8(v3, *(int32_t *)(g23 - 0x4b94), 0);
		// branch -> 0xb59d4
	}
	// 0xb59d4
	g10 = v1;
	return *(int32_t *)(g23 - 0x4b94);
}

// Address range: 0xb59e4 - 0xb5a00
int32_t sound_get_or_set_sound_volume(void)
{
	int32_t v1 = g34;                        // 0xb59e4
	int32_t *v2 = (int32_t *)(g23 - 0x4b6c); // 0xb59ec
	if (v1 == 1) {
		// 0xb59ec
		return *v2;
	}
	// 0xb59f4
	*v2 = v1;
	return *(int32_t *)(g23 - 0x4b6c);
}
