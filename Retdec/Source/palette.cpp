// Address range: 0x9e68c - 0x9e6bc
int32_t palette_update(void)
{
	// 0x9e68c
	int32_t result; // 0x9e6b8
	if (function_2787c() != 0) {
		// 0x9e6a4
		result = function_278bc(*(int32_t *)(g23 - 0x5ae4));
		// branch -> 0x9e6ac
	} else {
		result = 0;
	}
	// 0x9e6ac
	return result;
}

// Address range: 0x9e6bc - 0x9e7f8
int32_t ApplyGamma(char *a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x9e6c0
	g36 = 0x43300000;
	int32_t result2 = (int32_t)a1; // 0x9e6d8
	g31 = result2;
	g32 = a2;
	g33 = a3;
	g35 = 0;
	if (a3 > 0) {
		// 0x9e724
		function_e159c();
		function_e159c();
		int32_t result = function_e159c(); // r3
		g35++;
		g32 += 4;
		g31 += 4;
		// 0x9e7d4
		g10 = v1;
		// branch -> 0x9e724
		while (g35 < g33) {
			// 0x9e724
			// 0x9e724
			function_e159c();
			function_e159c();
			result = function_e159c();
			g35++;
			g32 += 4;
			g31 += 4;
			// 0x9e7d4
			g10 = v1;
			// branch -> 0x9e724
		}
		return result;
	}
	// 0x9e7d4
	g10 = v1;
	return result2;
}

// Address range: 0x9e7f8 - 0x9e850
int32_t SaveGamma(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x75c8); // 0x9e800
	g34 = v1;
	SRegSaveValue(v1, *(int32_t *)(g23 - 0x5ae8), 0, *(int32_t *)(g23 - 0x4cb8));
	g34 = v1;
	int32_t v2;
	return SRegSaveValue(v1, *(int32_t *)(v2 - 0x5aec), 0, *(int32_t *)(v2 - 0x4cb4));
}

// Address range: 0x9e850 - 0x9e934
int32_t function_9e850(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x75c8); // 0x9e858
	g34 = v1;
	int32_t v2;       // bp-24
	int32_t v3 = &v2; // 0x9e874
	v2 = *(int32_t *)(g23 - 0x4cb8);
	int32_t v4; // 0x9e894
	if (SRegLoadValue(v1, *(int32_t *)(g23 - 0x5ae8), 0, v3) == 0) {
		// 0x9e88c
		v2 = 100;
		v4 = 100;
		// branch -> 0x9e894
	} else {
		// 0x9e850
		v4 = v2;
		// branch -> 0x9e894
	}
	// 0x9e894
	int32_t v5;
	*(int32_t *)(v5 - 0x4cb8) = v4;
	int32_t *v6 = (int32_t *)(g23 - 0x4cb8); // 0x9e89c
	uint32_t v7 = *v6;                       // 0x9e89c
	int32_t v8;                              // 0x9e8c8
	int32_t v9;                              // 0x9e8f8
	int32_t *v10;                            // 0x9e8c8
	int32_t v11;                             // 0x9e918
	uint64_t v12;                            // 0x9e8d4
	int32_t result;                          // 0x9e900
	if (v7 <= 29) {
		// 0x9e8a8
		*v6 = 30;
		// branch -> 0x9e8c4
		// 0x9e8c4
		v8 = g23;
		v10 = (int32_t *)(v8 - 0x4cb8);
		v12 = 0x66666667 * (int64_t)*v10;
		*v10 = 5 * (((int32_t)(v12 / 0x100000000) & -0x80000000 | (int32_t)(v12 / 0x200000000)) + (int32_t)(v12 / 0x8000000000000000));
		v9 = v1;
		g34 = v9;
		result = SRegLoadValue(v9, *(int32_t *)(v8 - 0x5aec), 0, v3);
		if (result == 0) {
			// 0x9e910
			v2 = 1;
			v11 = 1;
			// branch -> 0x9e918
		} else {
			// 0x9e8c4
			v11 = v2;
			// branch -> 0x9e918
		}
		// 0x9e918
		*(int32_t *)(v5 - 0x4cb4) = v11;
		return result;
	}
	// 0x9e8b4
	if (v7 >= 101) {
		// 0x9e8bc
		*v6 = 100;
		// branch -> 0x9e8c4
	}
	// 0x9e8c4
	v8 = g23;
	v10 = (int32_t *)(v8 - 0x4cb8);
	v12 = 0x66666667 * (int64_t)*v10;
	*v10 = 5 * (((int32_t)(v12 / 0x100000000) & -0x80000000 | (int32_t)(v12 / 0x200000000)) + (int32_t)(v12 / 0x8000000000000000));
	v9 = v1;
	g34 = v9;
	result = SRegLoadValue(v9, *(int32_t *)(v8 - 0x5aec), 0, v3);
	if (result == 0) {
		// 0x9e910
		v2 = 1;
		v11 = 1;
		// branch -> 0x9e918
	} else {
		// 0x9e8c4
		v11 = v2;
		// branch -> 0x9e918
	}
	// 0x9e918
	*(int32_t *)(v5 - 0x4cb4) = v11;
	return result;
}

// Address range: 0x9e934 - 0x9e978
int32_t function_9e934(int32_t a1)
{
	int32_t v1 = g36; // 0x9e934
	g36 = *(int32_t *)(g23 - 0x5ae4);
	function_9e850();
	g34 = g36;
	memcpy();
	int32_t result = g36; // 0x9e968
	g36 = v1;
	return result;
}

// Address range: 0x9e978 - 0x9eab8
int32_t LoadPalette(int32_t a1)
{
	// 0x9e978
	g38 = 0;
	int32_t v1; // bp-784
	WOpenFile((int32_t)&v1, 0);
	int32_t v2;       // bp-780
	int32_t v3 = &v2; // 0x9e994
	WReadFile(v1, v3, 768);
	g34 = v1;
	WCloseFile(v1);
	int32_t v4 = *(int32_t *)(g23 - 0x5af0); // 0x9e9ac
	int32_t result = 0;                      // r3
	*(char *)v4 = *(char *)v3;
	*(char *)(v4 + 1) = *(char *)(v3 + 1);
	*(char *)(v4 + 2) = *(char *)(v3 + 2);
	*(char *)(v4 + 3) = (char)result;
	*(char *)(v4 + 4) = *(char *)(v3 + 3);
	*(char *)(v4 + 5) = *(char *)(v3 + 4);
	*(char *)(v4 + 6) = *(char *)(v3 + 5);
	*(char *)(v4 + 7) = (char)result;
	*(char *)(v4 + 8) = *(char *)(v3 + 6);
	*(char *)(v4 + 9) = *(char *)(v3 + 7);
	*(char *)(v4 + 10) = *(char *)(v3 + 8);
	*(char *)(v4 + 11) = (char)result;
	*(char *)(v4 + 12) = *(char *)(v3 + 9);
	*(char *)(v4 + 13) = *(char *)(v3 + 10);
	*(char *)(v4 + 14) = *(char *)(v3 + 11);
	*(char *)(v4 + 15) = (char)result;
	*(char *)(v4 + 16) = *(char *)(v3 + 12);
	*(char *)(v4 + 17) = *(char *)(v3 + 13);
	*(char *)(v4 + 18) = *(char *)(v3 + 14);
	*(char *)(v4 + 19) = (char)result;
	*(char *)(v4 + 20) = *(char *)(v3 + 15);
	*(char *)(v4 + 21) = *(char *)(v3 + 16);
	*(char *)(v4 + 22) = *(char *)(v3 + 17);
	*(char *)(v4 + 23) = (char)result;
	*(char *)(v4 + 24) = *(char *)(v3 + 18);
	*(char *)(v4 + 25) = *(char *)(v3 + 19);
	*(char *)(v4 + 26) = *(char *)(v3 + 20);
	*(char *)(v4 + 27) = (char)result;
	*(char *)(v4 + 28) = *(char *)(v3 + 21);
	*(char *)(v4 + 29) = *(char *)(v3 + 22);
	int32_t v5 = v3; // 0x9ea90
	v3 = v5 + 24;
	*(char *)(v4 + 30) = *(char *)(v5 + 23);
	*(char *)(v4 + 31) = (char)result;
	int32_t v6 = 31; // 0x9eaa4
	// 0x9eaa8
	// branch -> 0x9e9b8
	while (v6 != 0) {
		// 0x9e9b8
		// 0x9e9b8
		v4 += 32;
		result = 0;
		*(char *)v4 = *(char *)v3;
		*(char *)(v4 + 1) = *(char *)(v3 + 1);
		*(char *)(v4 + 2) = *(char *)(v3 + 2);
		*(char *)(v4 + 3) = (char)result;
		*(char *)(v4 + 4) = *(char *)(v3 + 3);
		*(char *)(v4 + 5) = *(char *)(v3 + 4);
		*(char *)(v4 + 6) = *(char *)(v3 + 5);
		*(char *)(v4 + 7) = (char)result;
		*(char *)(v4 + 8) = *(char *)(v3 + 6);
		*(char *)(v4 + 9) = *(char *)(v3 + 7);
		*(char *)(v4 + 10) = *(char *)(v3 + 8);
		*(char *)(v4 + 11) = (char)result;
		*(char *)(v4 + 12) = *(char *)(v3 + 9);
		*(char *)(v4 + 13) = *(char *)(v3 + 10);
		*(char *)(v4 + 14) = *(char *)(v3 + 11);
		*(char *)(v4 + 15) = (char)result;
		*(char *)(v4 + 16) = *(char *)(v3 + 12);
		*(char *)(v4 + 17) = *(char *)(v3 + 13);
		*(char *)(v4 + 18) = *(char *)(v3 + 14);
		*(char *)(v4 + 19) = (char)result;
		*(char *)(v4 + 20) = *(char *)(v3 + 15);
		*(char *)(v4 + 21) = *(char *)(v3 + 16);
		*(char *)(v4 + 22) = *(char *)(v3 + 17);
		*(char *)(v4 + 23) = (char)result;
		*(char *)(v4 + 24) = *(char *)(v3 + 18);
		*(char *)(v4 + 25) = *(char *)(v3 + 19);
		*(char *)(v4 + 26) = *(char *)(v3 + 20);
		*(char *)(v4 + 27) = (char)result;
		*(char *)(v4 + 28) = *(char *)(v3 + 21);
		*(char *)(v4 + 29) = *(char *)(v3 + 22);
		v5 = v3;
		v3 = v5 + 24;
		*(char *)(v4 + 30) = *(char *)(v5 + 23);
		*(char *)(v4 + 31) = (char)result;
		v6--;
		// 0x9eaa8
		// branch -> 0x9e9b8
	}
	return result;
}

// Address range: 0x9eab8 - 0x9eb1c
int32_t LoadRndLvlPal(int32_t a1)
{
	int32_t v1 = g36; // 0x9eab8
	g36 = a1;
	int32_t result;
	if (a1 == 0) {
		// 0x9ead0
		result = LoadPalette(*(int32_t *)(g23 - 0x5af4));
		// branch -> 0x9eb08
	} else {
		// 0x9eadc
		g37 = 4;
		random(0);
		g37 = *(int32_t *)(g23 - 0x5af8);
		g38 = g36;
		sprintf();
		int32_t v2; // bp-280
		result = LoadPalette((int32_t)&v2);
		// branch -> 0x9eb08
	}
	// 0x9eb08
	g36 = v1;
	return result;
}

// Address range: 0x9eb1c - 0x9eb54
int32_t ResetPal(int32_t a1)
{
	int32_t v1 = g10;              // 0x9eb1c
	int32_t v2 = function_27888(); // 0x9eb28
	g34 = v2;
	int32_t result; // 0x9eb50
	if (v2 == 0) {
		// 0x9eb40
		result = SDrawRealizePalette();
		// branch -> 0x9eb44
		// 0x9eb44
		g10 = v1;
		return result;
	}
	int32_t v3 = function_27890(v2); // 0x9eb34
	g34 = v3;
	if (v3 != 0) {
		// 0x9eb40
		result = SDrawRealizePalette();
		// branch -> 0x9eb44
	} else {
		result = 0;
	}
	// 0x9eb44
	g10 = v1;
	return result;
}

// Address range: 0x9eb54 - 0x9ebac
int32_t IncreaseGamma(void)
{
	int32_t *v1 = (int32_t *)(g23 - 0x4cb8); // 0x9eb60
	int32_t result = *v1;                    // 0x9eb60
	if (result > 99) {
		// 0x9eb9c
		return result;
	}
	// 0x9eb6c
	*v1 = result + 5;
	int32_t *v2 = (int32_t *)(g23 - 0x4cb8); // 0x9eb74
	int32_t v3;                              // 0x9eb88
	if (*v2 >= 101) {
		// 0x9eb80
		*v2 = 100;
		v3 = g23;
		// branch -> 0x9eb88
	} else {
		v3 = g23;
	}
	int32_t v4 = *(int32_t *)(v3 - 0x5afc); // 0x9eb90
	ApplyGamma((char *)*(int32_t *)(v3 - 0x5ae4), v4, 256);
	// branch -> 0x9eb9c
	// 0x9eb9c
	return palette_update();
}

// Address range: 0x9ebac - 0x9ec04
int32_t DecreaseGamma(void)
{
	int32_t *v1 = (int32_t *)(g23 - 0x4cb8); // 0x9ebb8
	int32_t result = *v1;                    // 0x9ebb8
	if (result < 31) {
		// 0x9ebf4
		return result;
	}
	// 0x9ebc4
	*v1 = result - 5;
	int32_t *v2 = (int32_t *)(g23 - 0x4cb8); // 0x9ebcc
	int32_t v3;                              // 0x9ebe0
	if (*v2 <= 29) {
		// 0x9ebd8
		*v2 = 30;
		v3 = g23;
		// branch -> 0x9ebe0
	} else {
		v3 = g23;
	}
	int32_t v4 = *(int32_t *)(v3 - 0x5afc); // 0x9ebe8
	ApplyGamma((char *)*(int32_t *)(v3 - 0x5ae4), v4, 256);
	// branch -> 0x9ebf4
	// 0x9ebf4
	return palette_update();
}

// Address range: 0x9ec04 - 0x9ec4c
int32_t UpdateGamma(int32_t a1)
{
	// 0x9ec04
	if (a1 != 0) {
		// 0x9ec18
		*(int32_t *)(g23 - 0x4cb8) = 130 - a1;
		int32_t v1 = *(int32_t *)(g23 - 0x5afc); // 0x9ec28
		ApplyGamma((char *)*(int32_t *)(g23 - 0x5ae4), v1, 256);
		palette_update();
		// branch -> 0x9ec34
	}
	// 0x9ec34
	return 130 - *(int32_t *)(g23 - 0x4cb8);
}

// Address range: 0x9ec4c - 0x9eda0
int32_t SetFadeLevel(int32_t a1)
{
	int32_t v1 = g10; // 0x9ec50
	if (function_2787c() == 0) {
		// 0x9ed8c
		g10 = v1;
		return 0;
	}
	int32_t v2 = *(int32_t *)(g23 - 0x5afc); // 0x9ec70
	int32_t v3 = 51;                         // ctr
	int32_t v4 = *(int32_t *)(g23 - 0x5ae4); // r4
	// branch -> 0x9ec7c
	while (true) {
		int32_t v5 = __asm_rlwinm(a1 * (int32_t) * (char *)v2, 24, 24, 31); // 0x9ec84
		*(char *)v4 = (char)v5;
		int32_t v6 = __asm_rlwinm(a1 * (int32_t) * (char *)(v2 + 1), 24, 24, 31); // 0x9ec94
		*(char *)(v4 + 1) = (char)v6;
		int32_t v7 = __asm_rlwinm(a1 * (int32_t) * (char *)(v2 + 2), 24, 24, 31); // 0x9eca4
		*(char *)(v4 + 2) = (char)v7;
		int32_t v8 = __asm_rlwinm(a1 * (int32_t) * (char *)(v2 + 4), 24, 24, 31); // 0x9ecb4
		*(char *)(v4 + 4) = (char)v8;
		int32_t v9 = __asm_rlwinm(a1 * (int32_t) * (char *)(v2 + 5), 24, 24, 31); // 0x9ecc4
		*(char *)(v4 + 5) = (char)v9;
		int32_t v10 = __asm_rlwinm(a1 * (int32_t) * (char *)(v2 + 6), 24, 24, 31); // 0x9ecd4
		*(char *)(v4 + 6) = (char)v10;
		int32_t v11 = __asm_rlwinm(a1 * (int32_t) * (char *)(v2 + 8), 24, 24, 31); // 0x9ece4
		*(char *)(v4 + 8) = (char)v11;
		int32_t v12 = __asm_rlwinm(a1 * (int32_t) * (char *)(v2 + 9), 24, 24, 31); // 0x9ecf4
		*(char *)(v4 + 9) = (char)v12;
		int32_t v13 = __asm_rlwinm(a1 * (int32_t) * (char *)(v2 + 10), 24, 24, 31); // 0x9ed04
		*(char *)(v4 + 10) = (char)v13;
		int32_t v14 = __asm_rlwinm(a1 * (int32_t) * (char *)(v2 + 12), 24, 24, 31); // 0x9ed14
		*(char *)(v4 + 12) = (char)v14;
		int32_t v15 = __asm_rlwinm(a1 * (int32_t) * (char *)(v2 + 13), 24, 24, 31); // 0x9ed24
		*(char *)(v4 + 13) = (char)v15;
		int32_t v16 = __asm_rlwinm(a1 * (int32_t) * (char *)(v2 + 14), 24, 24, 31); // 0x9ed34
		*(char *)(v4 + 14) = (char)v16;
		int32_t v17 = __asm_rlwinm(a1 * (int32_t) * (char *)(v2 + 16), 24, 24, 31); // 0x9ed44
		*(char *)(v4 + 16) = (char)v17;
		int32_t v18 = __asm_rlwinm(a1 * (int32_t) * (char *)(v2 + 17), 24, 24, 31); // 0x9ed54
		*(char *)(v4 + 17) = (char)v18;
		int32_t v19 = v2; // 0x9ed5c
		v2 = v19 + 20;
		int32_t v20 = __asm_rlwinm(a1 * (int32_t) * (char *)(v19 + 18), 24, 24, 31); // 0x9ed68
		*(char *)(v4 + 18) = (char)v20;
		v4 += 20;
		int32_t v21 = v3 - 1; // 0x9ed74
		v3 = v21;
		if (v21 == 0) {
			// 0x9ed78
			g34 = 3;
			int32_t v22 = Sleep(3); // 0x9ed7c
			g34 = v22;
			WaitForVerticalBlank(v22);
			// branch -> 0x9ed8c
			// 0x9ed8c
			g10 = v1;
			return palette_update();
		}
		// 0x9ec7c
		// branch -> 0x9ec7c
	}
}

// Address range: 0x9eda0 - 0x9edc4
int32_t BlackPalette(int32_t a1)
{
	int32_t result = SetFadeLevel(0); // 0x9edb0
	return result;
}

// Address range: 0x9edc4 - 0x9ee5c
int32_t PaletteFadeIn(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x5afc); // 0x9edd8
	ApplyGamma((char *)v1, *(int32_t *)(g23 - 0x5af0), 256);
	SetFadeLevel(0);
	int32_t v2 = g32; // 0x9ee0c
	// branch -> 0x9ee04
	while (v2 < 256) {
		// 0x9ee04
		SetFadeLevel(v2);
		v2 += g32;
		// continue -> 0x9ee04
	}
	// 0x9ee18
	SetFadeLevel(256);
	g34 = g35;
	int32_t result = memcpy(); // r3
	int32_t v3;
	*(char *)(v3 - 0x4cb0) = 1;
	return result;
}

// Address range: 0x9ee5c - 0x9eec4
int32_t PaletteFadeOut(int32_t result)
{
	int32_t v1 = g36; // 0x9ee5c
	int32_t v2 = g10; // 0x9ee60
	if (*(char *)(g23 - 0x4cb0) == 0) {
		// 0x9eeac
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x9ee94
	g36 = 256;
	SetFadeLevel(256);
	int32_t v3 = g36 - result; // 0x9ee90
	g36 = v3;
	// branch -> 0x9ee88
	while (v3 > 0) {
		// 0x9ee88
		SetFadeLevel(v3);
		v3 = g36 - result;
		g36 = v3;
		// continue -> 0x9ee88
	}
	int32_t result2 = SetFadeLevel(0); // r3
	*(char *)(g23 - 0x4cb0) = 0;
	// branch -> 0x9eeac
	// 0x9eeac
	g36 = v1;
	g10 = v2;
	return result2;
}

// Address range: 0x9eec4 - 0x9f040
int32_t palette_update_caves(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x5ae4); // 0x9eec8
	if (*(int32_t *)(g23 - 0x4cb4) == 0) {
		// 0x9f030
		return result;
	}
	int32_t v1 = result + 4; // 0x9eee0
	int32_t v2 = v1;         // r4
	int32_t v3 = v1;         // 0x9ef00
	*(char *)v3 = *(char *)(v3 + 4);
	int32_t v4 = v2; // 0x9ef04
	*(char *)(v4 + 1) = *(char *)(v4 + 5);
	int32_t v5 = v2; // 0x9ef0c
	*(char *)(v5 + 2) = *(char *)(v5 + 6);
	int32_t v6 = v2; // 0x9ef14
	*(char *)(v6 + 4) = *(char *)(v6 + 8);
	int32_t v7 = v2; // 0x9ef1c
	*(char *)(v7 + 5) = *(char *)(v7 + 9);
	int32_t v8 = v2; // 0x9ef24
	*(char *)(v8 + 6) = *(char *)(v8 + 10);
	int32_t v9 = v2; // 0x9ef2c
	*(char *)(v9 + 8) = *(char *)(v9 + 12);
	int32_t v10 = v2; // 0x9ef34
	*(char *)(v10 + 9) = *(char *)(v10 + 13);
	int32_t v11 = v2; // 0x9ef3c
	*(char *)(v11 + 10) = *(char *)(v11 + 14);
	int32_t v12 = v2; // 0x9ef44
	*(char *)(v12 + 12) = *(char *)(v12 + 16);
	int32_t v13 = v2; // 0x9ef4c
	*(char *)(v13 + 13) = *(char *)(v13 + 17);
	int32_t v14 = v2; // 0x9ef54
	*(char *)(v14 + 14) = *(char *)(v14 + 18);
	int32_t v15 = v2; // 0x9ef5c
	*(char *)(v15 + 16) = *(char *)(v15 + 20);
	int32_t v16 = v2; // 0x9ef64
	*(char *)(v16 + 17) = *(char *)(v16 + 21);
	int32_t v17 = v2; // 0x9ef6c
	*(char *)(v17 + 18) = *(char *)(v17 + 22);
	int32_t v18 = v2; // 0x9ef74
	*(char *)(v18 + 20) = *(char *)(v18 + 24);
	int32_t v19 = v2; // 0x9ef7c
	*(char *)(v19 + 21) = *(char *)(v19 + 25);
	int32_t v20 = v2; // 0x9ef84
	*(char *)(v20 + 22) = *(char *)(v20 + 26);
	int32_t v21 = v2; // 0x9ef8c
	*(char *)(v21 + 24) = *(char *)(v21 + 28);
	int32_t v22 = v2; // 0x9ef94
	*(char *)(v22 + 25) = *(char *)(v22 + 29);
	int32_t v23 = v2; // 0x9ef9c
	*(char *)(v23 + 26) = *(char *)(v23 + 30);
	int32_t v24 = v2; // 0x9efa4
	*(char *)(v24 + 28) = *(char *)(v24 + 32);
	int32_t v25 = v2; // 0x9efac
	*(char *)(v25 + 29) = *(char *)(v25 + 33);
	int32_t v26 = v2; // 0x9efb4
	*(char *)(v26 + 30) = *(char *)(v26 + 34);
	int32_t v27 = v2 + 32; // 0x9efbc
	v2 = v27;
	int32_t v28 = 2; // 0x9efc0
	int32_t v29 = 9; // 0x9f024
	// branch -> 0x9eef8
	while (v28 != 0) {
		// 0x9eef8
		v3 = v27;
		*(char *)v3 = *(char *)(v3 + 4);
		v4 = v2;
		*(char *)(v4 + 1) = *(char *)(v4 + 5);
		v5 = v2;
		*(char *)(v5 + 2) = *(char *)(v5 + 6);
		v6 = v2;
		*(char *)(v6 + 4) = *(char *)(v6 + 8);
		v7 = v2;
		*(char *)(v7 + 5) = *(char *)(v7 + 9);
		v8 = v2;
		*(char *)(v8 + 6) = *(char *)(v8 + 10);
		v9 = v2;
		*(char *)(v9 + 8) = *(char *)(v9 + 12);
		v10 = v2;
		*(char *)(v10 + 9) = *(char *)(v10 + 13);
		v11 = v2;
		*(char *)(v11 + 10) = *(char *)(v11 + 14);
		v12 = v2;
		*(char *)(v12 + 12) = *(char *)(v12 + 16);
		v13 = v2;
		*(char *)(v13 + 13) = *(char *)(v13 + 17);
		v14 = v2;
		*(char *)(v14 + 14) = *(char *)(v14 + 18);
		v15 = v2;
		*(char *)(v15 + 16) = *(char *)(v15 + 20);
		v16 = v2;
		*(char *)(v16 + 17) = *(char *)(v16 + 21);
		v17 = v2;
		*(char *)(v17 + 18) = *(char *)(v17 + 22);
		v18 = v2;
		*(char *)(v18 + 20) = *(char *)(v18 + 24);
		v19 = v2;
		*(char *)(v19 + 21) = *(char *)(v19 + 25);
		v20 = v2;
		*(char *)(v20 + 22) = *(char *)(v20 + 26);
		v21 = v2;
		*(char *)(v21 + 24) = *(char *)(v21 + 28);
		v22 = v2;
		*(char *)(v22 + 25) = *(char *)(v22 + 29);
		v23 = v2;
		*(char *)(v23 + 26) = *(char *)(v23 + 30);
		v24 = v2;
		*(char *)(v24 + 28) = *(char *)(v24 + 32);
		v25 = v2;
		*(char *)(v25 + 29) = *(char *)(v25 + 33);
		v26 = v2;
		*(char *)(v26 + 30) = *(char *)(v26 + 34);
		v27 = v2 + 32;
		v2 = v27;
		v28--;
		v29 += 8;
		// continue -> 0x9eef8
	}
	int32_t v30 = result + 4 * v29; // 0x9f028
	v2 = v30;
	int32_t v31 = v29; // 0x9f000
	if (v29 <= 30) {
		*(char *)v30 = *(char *)(v30 + 4);
		int32_t v32 = v2; // 0x9efe4
		*(char *)(v32 + 1) = *(char *)(v32 + 5);
		int32_t v33 = v2; // 0x9efec
		*(char *)(v33 + 2) = *(char *)(v33 + 6);
		int32_t v34 = v2 + 4; // 0x9eff4
		v2 = v34;
		int32_t v35 = 30 - v29; // 0x9eff8
		int32_t v36 = v29 + 1;
		while (v35 != 0) {
			// 0x9efd8
			v30 = v34;
			*(char *)v30 = *(char *)(v30 + 4);
			v32 = v2;
			*(char *)(v32 + 1) = *(char *)(v32 + 5);
			v33 = v2;
			*(char *)(v33 + 2) = *(char *)(v33 + 6);
			v34 = v2 + 4;
			v2 = v34;
			v35--;
			v36++;
			// continue -> 0x9efd8
		}
		// 0x9effc
		v31 = v36;
		// branch -> 0x9effc
	}
	// 0x9effc
	*(char *)(4 * v31 + result) = (char)*(int32_t *)v1;
	// branch -> 0x9f030
	// 0x9f030
	return palette_update();
}

// Address range: 0x9f040 - 0x9f108
int32_t function_9f040(int32_t a1)
{
	int32_t v1 = g10;                             // 0x9f040
	int32_t v2 = 32 - a1;                         // 0x9f044
	int32_t v3 = 4 * v2;                          // 0x9f054
	int32_t v4 = v2 + 1;                          // 0x9f060
	int32_t v5 = *(int32_t *)(g23 - 0x5af0) + v3; // r5
	int32_t v6 = *(int32_t *)(g23 - 0x5afc) + v3; // r6
	int32_t result;                               // 0x9f0f4
	if (v2 < 0) {
		// 0x9f0e8
		ApplyGamma((char *)*(int32_t *)(g23 - 0x5ae4), 32, 32);
		result = palette_update();
		g10 = v1;
		return result;
	}
	int32_t v7 = __asm_rlwinm_(v4, 29, 3, 31); // 0x9f070
	int32_t v8;                                // 0x9f0d4
	int32_t v9;                                // 0x9f0e0
	int32_t v10;                               // 0x9f0e4
	if (v7 == 0) {
		// 0x9f070
		// branch -> 0x9f0d0
		// 0x9f0d0
		v8 = v5;
		*(int32_t *)v6 = *(int32_t *)v8;
		v9 = v6 - 4;
		v10 = v4 - 1;
		// branch -> 0x9f0d4
		while (v10 != 0) {
			// 0x9f0d4
			v8 -= 4;
			*(int32_t *)v9 = *(int32_t *)v8;
			v9 -= 4;
			v10--;
			// continue -> 0x9f0d4
		}
		// 0x9f0e8
		ApplyGamma((char *)*(int32_t *)(g23 - 0x5ae4), 32, 32);
		result = palette_update();
		g10 = v1;
		return result;
	}
	// 0x9f07c
	*(int32_t *)v6 = *(int32_t *)v5;
	*(int32_t *)(v6 - 4) = *(int32_t *)(v5 - 4);
	*(int32_t *)(v6 - 8) = *(int32_t *)(v5 - 8);
	*(int32_t *)(v6 - 12) = *(int32_t *)(v5 - 12);
	*(int32_t *)(v6 - 16) = *(int32_t *)(v5 - 16);
	*(int32_t *)(v6 - 20) = *(int32_t *)(v5 - 20);
	*(int32_t *)(v6 - 24) = *(int32_t *)(v5 - 24);
	int32_t v11 = v5; // 0x9f0b4
	v5 = v11 - 32;
	*(int32_t *)(v6 - 28) = *(int32_t *)(v11 - 28);
	int32_t v12 = v6 - 32; // 0x9f0c0
	v6 = v12;
	int32_t v13 = v7 - 1; // 0x9f0c4
	// branch -> 0x9f07c
	while (v13 != 0) {
		// 0x9f07c
		*(int32_t *)v12 = *(int32_t *)v5;
		*(int32_t *)(v6 - 4) = *(int32_t *)(v5 - 4);
		*(int32_t *)(v6 - 8) = *(int32_t *)(v5 - 8);
		*(int32_t *)(v6 - 12) = *(int32_t *)(v5 - 12);
		*(int32_t *)(v6 - 16) = *(int32_t *)(v5 - 16);
		*(int32_t *)(v6 - 20) = *(int32_t *)(v5 - 20);
		*(int32_t *)(v6 - 24) = *(int32_t *)(v5 - 24);
		v11 = v5;
		v5 = v11 - 32;
		*(int32_t *)(v6 - 28) = *(int32_t *)(v11 - 28);
		v12 = v6 - 32;
		v6 = v12;
		v13--;
		// continue -> 0x9f07c
	}
	int32_t v14 = v4 % 8; // 0x9f0c8
	if (v14 == 0) {
		// 0x9f0e8
		ApplyGamma((char *)*(int32_t *)(g23 - 0x5ae4), 32, 32);
		result = palette_update();
		g10 = v1;
		return result;
	}
	// 0x9f0d0
	v8 = v5;
	*(int32_t *)v12 = *(int32_t *)v8;
	v9 = v6 - 4;
	v10 = v14 - 1;
	// branch -> 0x9f0d4
	while (v10 != 0) {
		// 0x9f0d4
		v8 -= 4;
		*(int32_t *)v9 = *(int32_t *)v8;
		v9 -= 4;
		v10--;
		// continue -> 0x9f0d4
	}
	// 0x9f0e8
	ApplyGamma((char *)*(int32_t *)(g23 - 0x5ae4), 32, 32);
	result = palette_update();
	g10 = v1;
	return result;
}

// Address range: 0x9f108 - 0x9f110
int32_t palette_get_colour_cycling(void)
{
	// 0x9f108
	return *(int32_t *)(g23 - 0x4cb4);
}

// Address range: 0x9f110 - 0x9f118
int32_t palette_set_color_cycling(int32_t result)
{
	// 0x9f110
	*(int32_t *)(g23 - 0x4cb4) = result;
	return result;
}
