
// Address range: 0xc8610 - 0xc86c8
int32_t WGetFileArchive(int32_t a1, int32_t *a2, int32_t a3)
{
	int32_t v1 = g36; // 0xc8610
	int32_t v2 = g10; // 0xc8614
	g36 = a3;
	int32_t v3 = g35;         // 0xc861c
	int32_t v4 = (int32_t)a2; // 0xc8620
	g35 = v4;
	int32_t v5 = g33; // 0xc8624
	g33 = a1;
	if (v4 >= 5) {
		// 0xc8640
		FileErrDlg(a3);
		a1 = g33;
		// branch -> 0xc8648
	}
	// 0xc8648
	int32_t v6;     // 0xc8698
	int32_t result; // 0xc86c4
	if (a1 == 0) {
		// 0xc8698
		v6 = InsertCDDlg();
		result = v6;
		if (v6 == 0) {
			// 0xc86a4
			result = FileErrDlg(g36);
			// branch -> 0xc86ac
		}
		// 0xc86ac
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v5;
		return result;
	}
	// 0xc8650
	g34 = a1;
	int32_t v7; // bp-24
	if (function_eb620(a1, (int32_t)&v7) == 0) {
		// 0xc8698
		v6 = InsertCDDlg();
		result = v6;
		if (v6 == 0) {
			// 0xc86a4
			result = FileErrDlg(g36);
			// branch -> 0xc86ac
		}
		// 0xc86ac
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v5;
		return result;
	}
	int32_t result2 = v7; // r4
	int32_t v8;
	if (v7 != *(int32_t *)*(int32_t *)(v8 - 0x7204)) {
		// 0xc867c
		g34 = 20;
		Sleep(20);
		*(int32_t *)g35 = result2 + 1;
		// branch -> 0xc86ac
		// 0xc86ac
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v5;
		return result2;
	}
	// 0xc8698
	v6 = InsertCDDlg();
	result = v6;
	if (v6 == 0) {
		// 0xc86a4
		result = FileErrDlg(g36);
		// branch -> 0xc86ac
	}
	// 0xc86ac
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v5;
	return result;
}

// Address range: 0xc86ec - 0xc8754
int32_t WGetFileSize(int32_t a1, int32_t a2)
{
	// 0xc86ec
	g34 = a1;
	int32_t v1 = g36; // 0xc86ec
	int32_t v2 = g10; // 0xc86f0
	g36 = a2;
	int32_t v3 = g35; // 0xc86f8
	int32_t v4 = g34; // 0xc86fc
	g35 = v4;
	int32_t v5 = 0;                          // bp-24
	int32_t result = SFileGetFileSize(v4, a2); // 0xc872c3
	if (result != 0) {
		// 0xc873c
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result;
	}
	// 0xc8714
	WGetFileArchive(g35, &v5, 0);
	int32_t v6 = g35; // 0xc8724
	g34 = v6;
	int32_t result2 = SFileGetFileSize(v6, g36); // 0xc872c
	// branch -> 0xc8714
	while (result2 == 0) {
		// 0xc8714
		WGetFileArchive(g35, &v5, 0);
		v6 = g35;
		g34 = v6;
		result2 = SFileGetFileSize(v6, g36);
		// continue -> 0xc8714
	}
	// 0xc873c
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result2;
}

// Address range: 0xc8754 - 0xc87f0
int32_t WOpenFile(int32_t a1, int32_t a2)
{
	// 0xc8754
	g37 = a2;
	g34 = a1;
	int32_t v1 = g36; // 0xc8754
	int32_t v2 = g10; // 0xc8758
	g36 = g38;
	int32_t v3 = g35; // 0xc8760
	int32_t v4 = g37; // 0xc8764
	g35 = v4;
	int32_t v5 = g33; // 0xc8768
	int32_t v6 = g34; // 0xc876c
	g33 = v6;
	int32_t v7 = 0;                      // bp-24
	int32_t v8 = function_eb8f0(v6, v4); // 0xc878815
	g34 = v8;
	if (v8 != 0) {
		// 0xc87d4
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v5;
		return 1;
	}
	while (true) {
		// 0xc87a0
		if (g36 != 0) {
			// 0xc87a8
			if (GetLastError() != 2) {
				goto lab_0xc87c0;
			}
			// 0xc87d4
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v5;
			return 0;
		}
	lab_0xc87c0:
		// 0xc87c0
		WGetFileArchive(0, &v7, g33);
		int32_t v9 = g33;
		int32_t v10 = g35;
		g34 = v9;
		g37 = v10;
		int32_t v11 = function_eb8f0(v9, v10); // 0xc8788
		g34 = v11;
		if (v11 != 0) {
			// break -> 0xc87d4
			break;
		}
		// continue -> 0xc87a0
	}
	// 0xc87d4
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v5;
	return 1;
}

// Address range: 0xc88a0 - 0xc8930
int32_t function_c88a0(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g36; // 0xc88a0
	g36 = a4;
	int32_t v2 = g35; // 0xc88ac
	g35 = a3;
	int32_t v3 = g33; // 0xc88b4
	g33 = a2;
	int32_t v4 = g32; // 0xc88bc
	g32 = a1;
	int32_t v5 = 0; // bp-24
	// branch -> 0xc88d4
	while (true) {
		// 0xc88d4
		g34 = a1;
		int32_t result = function_eb650(a1, a2, a3, a4); // 0xc88e4
		if (result + (int32_t) "MoveWindow" != 0xffff) {
			// 0xc8910
			g36 = v1;
			g35 = v2;
			g33 = v3;
			g32 = v4;
			return result;
		}
		// 0xc88fc
		WGetFileArchive(g32, &v5, 0);
		a4 = g36;
		a3 = g35;
		a2 = g33;
		a1 = g32;
		// branch -> 0xc88d4
	}
}

// Address range: 0xc8930 - 0xc89b8
int32_t function_c8930(int32_t *a1)
{
	int32_t v1 = g35;         // 0xc893c
	int32_t v2 = (int32_t)a1; // 0xc8940
	g35 = v2;
	function_c88a0(*(int32_t *)(v2 + 24), *(int32_t *)(v2 + 4), 0, 0);
	int32_t result = *(int32_t *)(g35 + 4); // 0xc895c
	*(int32_t *)(g35 + 16) = 0;
	*(int32_t *)(g35 + 12) = 0;
	g35 = v1;
	return result;
}

// Address range: 0xc89b8 - 0xc8a5c
int32_t AllocateMemFile(int32_t a1, int32_t *a2)
{
	int32_t v1 = g36; // 0xc89b8
	g36 = g38;
	int32_t v2 = g35;         // 0xc89c4
	int32_t v3 = (int32_t)a2; // 0xc89c8
	g35 = v3;
	int32_t v4 = g33; // 0xc89d0
	g33 = a1;
	g34 = v3;
	memset();
	int32_t v5 = WGetFileSize(g33, 0); // 0xc89f4
	*(int32_t *)g35 = v5;
	*(int32_t *)(g35 + 8) = g36 < 0x1001 ? 0x1000 : g36;
	*(int32_t *)(g35 + 8) = 0;
	g34 = *(int32_t *)(g35 + 8);
	int32_t result = DiabloAllocPtr(); // 0xc8a34
	*(int32_t *)(g35 + 20) = result;
	*(int32_t *)(g35 + 24) = g33;
	g36 = v1;
	g35 = v2;
	g33 = v4;
	return result;
}

// Address range: 0xc8a5c - 0xc8a8c
int32_t function_c8a5c(int32_t a1)
{
	int32_t *v1 = (int32_t *)(a1 + 20); // 0xc8a6c
	*v1 = 0;
	g34 = *v1;
	return mem_free_dbg();
}

// Address range: 0xc8a8c - 0xc8b5c
int32_t function_c8a8c(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36; // 0xc8a8c
	int32_t v2 = g10; // 0xc8a90
	int32_t v3 = g35; // 0xc8a94
	g35 = a3;
	int32_t v4 = g33; // 0xc8a9c
	g33 = a2;
	int32_t v5 = g32; // 0xc8aa4
	g32 = a1;
	if (a3 == 0) {
		// 0xc8b3c
		g11 = v2;
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		g32 = v5;
		return 1;
	}
	while (true) {
		int32_t v6 = a3; // 0xc8ad8
		int32_t v7 = a1; // 0xc8af8
		if (*(int32_t *)(a1 + 16) == 0) {
			// 0xc8ac4
			function_c8930((int32_t *)a1);
			v6 = g35;
			v7 = g32;
			// branch -> 0xc8acc
		}
		int32_t v8 = *(int32_t *)(v7 + 16); // 0xc8acc
		int32_t v9 = v8;
		int32_t v10 = v8; // 0xc8ae0
		if (v6 < v8) {
			// 0xc8ad8
			v9 = v6;
			v10 = v6;
			// branch -> 0xc8adc
		}
		// 0xc8adc
		g36 = v9;
		if (v10 == 0) {
			// 0xc8b3c
			g11 = v2;
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			g32 = v5;
			return 0;
		}
		// 0xc8af0
		g34 = g33;
		memcpy();
		int32_t *v11 = (int32_t *)(g32 + 4); // 0xc8b08
		int32_t v12 = g36;                   // 0xc8b0c
		g35 -= v12;
		*v11 = v12 + *v11;
		int32_t *v13 = (int32_t *)(g32 + 12); // 0xc8b18
		*v13 = g36 + *v13;
		int32_t *v14 = (int32_t *)(g32 + 16); // 0xc8b24
		*v14 = *v14 - g36;
		int32_t v15 = g35; // 0xc8b30
		if (v15 == 0) {
			// 0xc8b3c
			g11 = v2;
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			g32 = v5;
			return 1;
		}
		// 0xc8af0
		a3 = v15;
		a1 = g32;
		// branch -> 0xc8ab8
	}
}

// Address range: 0xc8b5c - 0xc8b9c
int32_t function_c8b5c(int32_t a1, uint32_t a2, int32_t a3)
{
	int32_t v1 = a2;                    // r4
	int32_t *v2 = (int32_t *)(a1 + 16); // 0xc8b5c
	uint32_t v3 = *v2;                  // 0xc8b5c
	if (v3 > a2) {
		// 0xc8b68
		*v2 = v3 - a2;
		int32_t *v4 = (int32_t *)(a1 + 12); // 0xc8b70
		*v4 = v1 + *v4;
		// branch -> 0xc8b88
	} else {
		// 0xc8b80
		*v2 = 0;
		// branch -> 0xc8b88
	}
	int32_t *v5 = (int32_t *)(a1 + 4); // 0xc8b88
	*v5 = v1 + *v5;
	return *(int32_t *)(a1 + 4);
}

// Address range: 0xc8b9c - 0xc8c70
int32_t function_c8b9c(int32_t a1, int32_t a2, int32_t *a3)
{
	int32_t v1 = g36; // 0xc8b9c
	int32_t v2 = g10; // 0xc8ba0
	int32_t v3 = g35; // 0xc8ba4
	g35 = (int32_t)a3;
	int32_t v4 = g33; // 0xc8bac
	g33 = a2;
	int32_t v5 = g32; // 0xc8bb4
	g32 = a1;
	int32_t v6;       // bp-20
	int32_t v7 = &v6; // 0xc8bc4
	g36 = v7;
	int32_t v8;       // bp-24
	int32_t v9 = &v8; // 0xc8bcc
	if (function_c8a8c(a1, v9, 8) == 0) {
		// 0xc8be0
		// branch -> 0xc8c50
	} else {
		while (true) {
			int32_t v10 = __asm_lwbrx(g11, v7); // 0xc8be8
			v6 = v10;
			if (v8 == g33) {
				// 0xc8c20
				*(int32_t *)g35 = v10;
				*(int32_t *)(g35 + 4) = function_c8b5c(g32, 0, 1);
				int32_t result = *(int32_t *)(g35 + 4) != -1; // 0xc8c48
				// branch -> 0xc8c50
				// 0xc8c50
				g36 = v1;
				g10 = v2;
				g35 = v3;
				g33 = v4;
				g32 = v5;
				return result;
			}
			// 0xc8bfc
			if (function_c8b5c(g32, v10, 1) + (int32_t) "MoveWindow" == 0xffff) {
				// 0xc8c18
				// branch -> 0xc8c50
				// 0xc8c50
				g36 = v1;
				g10 = v2;
				g35 = v3;
				g33 = v4;
				g32 = v5;
				return 0;
			}
			// 0xc8bfc
			if (function_c8a8c(g32, v9, 8) == 0) {
				// break -> 0xc8be0
				break;
			}
			// continue -> 0xc8be8
		}
		// 0xc8be0
		// branch -> 0xc8c50
	}
	// 0xc8c50
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	g32 = v5;
	return 0;
}

// Address range: 0xc8c70 - 0xc8e28
int32_t function_c8c70(int32_t a1, int16_t *a2, int32_t a3)
{
	// 0xc8c70
	g36 = a3;
	int32_t v1 = g10; // 0xc8c78
	g35 = (int32_t)a2;
	int32_t v2 = g33; // 0xc8c88
	g33 = a1;
	int32_t v3; // bp-56
	if (function_c8a8c((int32_t)&v3, 12, 12) == 0) {
		// 0xc8ca8
		// branch -> 0xc8e0c
	} else {
		// 0xc8cb0
		if (v3 == 0x52494646) {
			// 0xc8cc0
			int32_t v4;
			if (v4 == 0x57415645) {
				// 0xc8cd8
				int32_t v5; // bp-36
				int32_t v6; // bp-72
				if (function_c8b9c(g33, 0x666d7420, &v5) == 0 || v5 <= 15 || function_c8a8c(g33, (int32_t)&v6, 16) == 0) {
					// 0xc8cf4
					// branch -> 0xc8e0c
					// 0xc8e0c
					g10 = v1;
					g33 = v2;
					return 0;
				}
				// 0xc8d30
				int16_t v7;
				int16_t v8;
				int32_t v9 = v8 | 256 * v7; // 0xc8d3c
				v6 = v9;
				int32_t v10;                                     // bp-70
				int32_t v11 = v9 + (int32_t)&v10;                // 0xc8d44
				unsigned char v12 = *(char *)v11;                // 0xc8d44
				unsigned char v13 = *(char *)(v11 + 1);          // 0xc8d44
				int32_t v14 = 256 * (int16_t)v13 | (int16_t)v12; // 0xc8d4c
				v10 = v14;
				int32_t v15;                                   // bp-68
				int32_t v16 = __asm_lwbrx(v14, (int32_t)&v15); // 0xc8d54
				v15 = v16;
				int32_t v17;                                   // bp-64
				int32_t v18 = __asm_lwbrx(v16, (int32_t)&v17); // 0xc8d60
				v17 = v18;
				int32_t v19;                                     // bp-60
				int32_t v20 = v18 + (int32_t)&v19;               // 0xc8d6c
				unsigned char v21 = *(char *)v20;                // 0xc8d6c
				unsigned char v22 = *(char *)(v20 + 1);          // 0xc8d6c
				int32_t v23 = 256 * (int16_t)v22 | (int16_t)v21; // 0xc8d74
				v19 = v23;
				int32_t v24;                            // bp-58
				int32_t v25 = v23 + (int32_t)&v24;      // 0xc8d7c
				unsigned char v26 = *(char *)v25;       // 0xc8d7c
				unsigned char v27 = *(char *)(v25 + 1); // 0xc8d7c
				v24 = 256 * (int16_t)v27 | (int16_t)v26;
				if (function_c8b5c(g33, v5 - 16, 1) + (int32_t) "MoveWindow" == 0xffff) {
					// 0xc8da8
					// branch -> 0xc8e0c
					// 0xc8e0c
					g10 = v1;
					g33 = v2;
					return 0;
				}
				// 0xc8db0
				*(int16_t *)g35 = (int16_t)v6;
				*(int16_t *)(g35 + 2) = (int16_t)v10;
				*(int32_t *)(g35 + 4) = v15;
				*(int32_t *)(g35 + 8) = v17;
				*(int16_t *)(g35 + 12) = (int16_t)v19;
				*(int16_t *)(g35 + 14) = (int16_t)v24;
				*(int16_t *)(g35 + 16) = (int16_t)0;
				int32_t result; // 0xc8e24
				if (g36 == 0) {
					// 0xc8df0
					result = 1;
					// branch -> 0xc8e0c
				} else {
					// 0xc8df8
					result = function_c8b9c(g33, 0x64617461, (int32_t *)g36);
					// branch -> 0xc8e0c
				}
				// 0xc8e0c
				g10 = v1;
				g33 = v2;
				return result;
			}
		}
		// 0xc8cd0
		// branch -> 0xc8e0c
	}
	// 0xc8e0c
	g10 = v1;
	g33 = v2;
	return 0;
}

// Address range: 0xc8e28 - 0xc8e80
int32_t ReadWaveSection(int32_t a1, int32_t a2)
{
	// 0xc8e28
	g36 = a1;
	g38 = 0;
	int32_t v1;       // bp-40
	int32_t v2 = &v1; // 0xc8e40
	AllocateMemFile(v2, NULL);
	g36 = function_c8c70(v2, (int16_t *)g36, 0);
	function_c8a5c(v2);
	return g36;
}

// Address range: 0xc8e80 - 0xc8eec
int32_t LoadWaveFile(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36; // 0xc8e80
	g36 = a2;
	g38 = -1;
	int32_t v2 = g35; // 0xc8e90
	g35 = a1;
	int32_t v3;       // bp-40
	int32_t v4 = &v3; // 0xc8ea0
	AllocateMemFile(v4, (int32_t *)-1);
	int32_t result;
	if (function_c8c70(v4, (int16_t *)g35, g36) == 0) {
		// 0xc8ec0
		function_c8a5c(v4);
		result = 0;
		// branch -> 0xc8ed4
	}
	// 0xc8ed4
	g36 = v1;
	g35 = v2;
	return result;
}
