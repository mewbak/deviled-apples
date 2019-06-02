// Address range: 0x87750 - 0x877d8
int32_t MovieWndProc(int32_t a1, int32_t a2)
{
	// 0x87750
	g38 = a2;
	g37 = a1;
	int32_t v1 = g37; // 0x87754
	int32_t result;   // 0x877c4
	if (v1 == 513) {
		// 0x877bc
		*(char *)(g23 - 0x4d74) = 0;
		// branch -> 0x877c4
		// 0x877c4
		result = MainWndProc();
		// branch -> 0x877c8
		// 0x877c8
		return result;
	}
	// 0x87764
	if (v1 > 513) {
		// 0x8778c
		if (v1 != 930) {
			// 0x87794
			if (v1 <= 930) {
				// 0x87798
				if (v1 == 516) {
					// 0x877bc
					*(char *)(g23 - 0x4d74) = 0;
					// branch -> 0x877c4
				}
			}
			// 0x877c4
			result = MainWndProc();
			// branch -> 0x877c8
			// 0x877c8
			return result;
		}
	} else {
		// 0x87768
		if (v1 != 258) {
			// 0x87770
			if (v1 > 258) {
				// 0x87780
				if (v1 == 274) {
					// 0x877a4
					if (g38 == 0xf060) {
						// 0x877ac
						*(char *)(g23 - 0x4d74) = 0;
						// branch -> 0x877c8
						// 0x877c8
						return 0;
					}
				}
			} else {
				// 0x87774
				if (v1 == 256) {
					// 0x877bc
					*(char *)(g23 - 0x4d74) = 0;
					// branch -> 0x877c4
				}
			}
			// 0x877c4
			result = MainWndProc();
			// branch -> 0x877c8
			// 0x877c8
			return result;
		}
	}
	// 0x877bc
	*(char *)(g23 - 0x4d74) = 0;
	// branch -> 0x877c4
	// 0x877c4
	result = MainWndProc();
	// branch -> 0x877c8
	// 0x877c8
	return result;
}

// Address range: 0x877d8 - 0x87958
int32_t play_movie(int32_t result, int32_t a2)
{
	int32_t v1 = g10;                        // 0x877dc
	int32_t v2 = *(int32_t *)(g23 - 0x7210); // 0x877e0
	g36 = v2;
	g31 = result;
	g35 = *(int32_t *)(g23 - 0x780c);
	g32 = a2;
	if (*(int32_t *)v2 == 0) {
		// 0x87944
		g10 = v1;
		return result;
	}
	int32_t v3 = SetWindowProc(*(int32_t *)(g23 - 0x5cc4)); // 0x87808
	int32_t v4 = *(int32_t *)g35;                           // 0x87810
	g34 = v4;
	g33 = v3;
	function_e9ef8(v4, 0, 0);
	int32_t v5 = *(int32_t *)g35; // 0x87828
	g34 = v5;
	function_eb548(v5);
	int32_t v6;
	char *v7 = (char *)(v6 - 0x4d74); // 0x87838
	*v7 = 1;
	function_b591c(1);
	function_4c0c8();
	function_4cbd0(*(int32_t *)(g23 - 0x5cc8));
	int32_t v8 = g31; // 0x87874
	g34 = v8;
	int32_t v9; // bp-28
	function_ebc68(v8, 0, 0, 0, 0, (int32_t)&v9);
	int32_t v10;        // bp-56
	int32_t v11 = &v10; // 0x878d4
	                    // branch -> 0x87908
lab_0x87908:;
	int32_t result2; // 0x87940
	int32_t v12;     // 0x87920
	while (true) {
		int32_t v13 = v9; // 0x87908
		v12 = 0;
		if (v13 == 0) {
			// 0x87920
			g34 = v12;
			if (v12 != 0) {
				// 0x8792c
				function_ebc98(v12);
				// branch -> 0x87934
			}
			// 0x87934
			SetWindowProc(g33);
			result2 = function_b591c(0);
			// branch -> 0x87944
			// 0x87944
			g10 = v1;
			return result2;
		}
		// 0x87914
		if (*(int32_t *)g36 != 0) {
			// 0x87898
			if (g32 != 0) {
				// 0x878a0
				if (*v7 == 0) {
					v12 = v13;
					// 0x87920
					g34 = v12;
					if (v12 != 0) {
						// 0x8792c
						function_ebc98(v12);
						// branch -> 0x87934
					}
					// 0x87934
					SetWindowProc(g33);
					result2 = function_b591c(0);
					// branch -> 0x87944
					// 0x87944
					g10 = v1;
					return result2;
				}
			}
			while (true) {
			lab_0x878d4:
				// 0x878d4
				g34 = v11;
				int32_t v14 = PeekMessage(v11, 0, 0, 0, 1); // 0x878e8
				g34 = v14;
				if (v14 == 0) {
					// 0x878f8
					if (function_ebc80(0) == 0) {
						// break (via goto) -> 0x878f8
						goto lab_0x878f8;
					}
					// continue (via goto) -> 0x87908
					goto lab_0x87908;
				} else {
					// 0x878b0
					int32_t v15;
					if (v15 != 18) {
						// break -> 0x878bc
						break;
					}
					// continue -> 0x878d4
					continue;
				}
			}
			// 0x878bc
			g34 = v11;
			TranslateMessage(v11);
			g34 = v11;
			DispatchMessage(v11);
			// branch -> 0x878d4
			goto lab_0x878d4;
		} else {
			v12 = v13;
		}
		// 0x87920
		g34 = v12;
		if (v12 != 0) {
			// 0x8792c
			function_ebc98(v12);
			// branch -> 0x87934
		}
		// 0x87934
		SetWindowProc(g33);
		result2 = function_b591c(0);
		// branch -> 0x87944
		// 0x87944
		g10 = v1;
		return result2;
	}
lab_0x878f8:
	// 0x878f8
	v12 = v9;
	// branch -> 0x87920
	// 0x87920
	g34 = v12;
	if (v12 != 0) {
		// 0x8792c
		function_ebc98(v12);
		// branch -> 0x87934
	}
	// 0x87934
	SetWindowProc(g33);
	result2 = function_b591c(0);
	// branch -> 0x87944
	// 0x87944
	g10 = v1;
	return result2;
}