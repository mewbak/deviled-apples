
// Address range: 0xc4014 - 0xc4058
int32_t GetActiveTowner(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6eb0); // 0xc4020
	if (v1 < 1) {
		// 0xc4050
		return -1;
	}
	int32_t result = 0;                      // 0xc403c
	int32_t v2 = *(int32_t *)(g23 - 0x7758); // 0xc4044
	while (true) {
		// 0xc4030
		if (*(int32_t *)(v2 + 4) == a1) {
			// 0xc403c
			return result;
		}
		int32_t v3 = v1 - 1; // 0xc404c
		if (v3 == 0) {
			// break -> 0xc4050
			break;
		}
		v1 = v3;
		result++;
		v2 += 268;
		// continue -> 0xc4030
	}
	// 0xc4050
	// branch -> 0xc4050
	// 0xc4050
	return -1;
}

// Address range: 0xc4058 - 0xc411c
int32_t SetTownerGPtrs(int32_t a1, int32_t *a2, int32_t a3)
{
	// 0xc4058
	g34 = a1;
	int32_t v1 = g36; // 0xc4058
	g36 = (int32_t)a2;
	int32_t v2 = g35; // 0xc4064
	g35 = g34;
	int32_t v3 = function_c9948(); // 0xc4074
	*(int32_t *)g36 = g35;
	int32_t v4 = 0; // 0xc4080
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
	int32_t result = function_c9acc(g35); // 0xc4100
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0xc411c - 0xc4148
int32_t NewTownerAnim(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7758) + 268 * a1; // 0xc4124
	*(int32_t *)(v1 + 36) = a2;
	int32_t result = 1; // r3
	*(int32_t *)(v1 + 48) = a3;
	*(int32_t *)(v1 + 52) = result;
	*(int32_t *)(v1 + 44) = 0;
	*(int32_t *)(v1 + 40) = a4;
	return result;
}

// Address range: 0xc4148 - 0xc41fc
int32_t InitTownerInfo(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, char a7, int32_t a8)
{
	g26 = a1;
	g27 = a2;
	int32_t v1 = 268 * a1; // 0xc4158
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7758); // 0xc415c
	g28 = a3;
	g29 = a4;
	g34 = v2 + v1;
	g30 = a5;
	g31 = a6;
	g32 = a7;
	g33 = g13;
	memset();
	int32_t v3 = g35 + v2; // 0xc4190
	g36 = v3;
	int32_t v4 = g27 - 64; // r0
	*(int32_t *)(v3 + 84) = g28;
	*(int32_t *)(g36 + 64) = g27;
	*(int32_t *)(g36 + 68) = v4 / 2 | v4 & -0x80000000;
	*(int32_t *)(g36 + 88) = 0;
	*(int32_t *)(g36 + 4) = g29;
	*(int32_t *)(g36 + 8) = g30;
	*(int32_t *)(g36 + 12) = g31;
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x767c); // 0xc41d0
	*(int16_t *)(224 * g30 + 2 * g31 + v5) = (int16_t)(g26 + 1);
	*(char *)(g36 + 60) = (char)g32;
	*(int32_t *)(g36 + 72) = g33;
	int32_t result = GetRndSeed(); // 0xc41e0
	*(int32_t *)(g36 + 140) = result;
	return result;
}

// Address range: 0xc41fc - 0xc431c
int32_t InitQstSnds(int32_t a1)
{
	int32_t v1 = a1; // 0xc4228
	if (*(int32_t *)*(int32_t *)(g23 - 0x6eb4) != 0) {
		// 0xc4210
		v1 = a1 + 1;
		// branch -> 0xc4214
	}
	int32_t v2 = *(int32_t *)(g23 - 0x7604);            // 0xc4220
	int32_t v3 = 4;                                     // ctr
	int32_t v4 = *(int32_t *)(g23 - 0x7758) + 268 * a1; // 0xc4230
	int32_t v5 = *(int32_t *)(g23 - 0x6f64) + 64 * v1;  // r6
	int32_t v6 = 0;                                     // r8
	int32_t result = 1;                                 // r3
	int32_t v7 = 0;                                     // r0
	// branch -> 0xc4244
	while (true) {
		// 0xc4244
		*(char *)(v4 + 92) = *(char *)(v2 + 1);
		*(char *)(v4 + 93) = (char)*(int32_t *)v5;
		if (*(int32_t *)v5 == -1) {
			// 0xc4268
			*(char *)(v4 + 94) = (char)v7;
			// branch -> 0xc426c
		} else {
			// 0xc4260
			*(char *)(v4 + 94) = (char)result;
			// branch -> 0xc426c
		}
		int32_t v8 = v2; // 0xc426c
		*(char *)(v4 + 95) = *(char *)(v8 + 25);
		int32_t v9 = *(int32_t *)(v5 + 4); // 0xc4278
		*(char *)(v4 + 96) = (char)v9;
		int32_t v10 = v4; // 0xc4280
		v4 = v10 + 3;
		int32_t v11 = v5 + 4; // 0xc4284
		v5 = v11;
		if (*(int32_t *)v11 == -1) {
			// 0xc4298
			*(char *)(v10 + 97) = (char)v7;
			// branch -> 0xc429c
		} else {
			// 0xc4290
			*(char *)(v10 + 97) = (char)result;
			// branch -> 0xc429c
		}
		int32_t v12 = v8 + 24; // 0xc429c
		*(char *)(v4 + 95) = *(char *)(v12 + 25);
		int32_t v13 = *(int32_t *)(v5 + 4); // 0xc42ac
		*(char *)(v4 + 96) = (char)v13;
		int32_t v14 = v4; // 0xc42b4
		v4 = v14 + 3;
		int32_t v15 = v5 + 4; // 0xc42b8
		v5 = v15;
		if (*(int32_t *)v15 == -1) {
			// 0xc42cc
			*(char *)(v14 + 97) = (char)v7;
			// branch -> 0xc42d0
		} else {
			// 0xc42c4
			*(char *)(v14 + 97) = (char)result;
			// branch -> 0xc42d0
		}
		int32_t v16 = v12 + 24; // 0xc42d0
		*(char *)(v4 + 95) = *(char *)(v16 + 25);
		int32_t v17 = *(int32_t *)(v5 + 4); // 0xc42e0
		*(char *)(v4 + 96) = (char)v17;
		int32_t v18 = v4;     // 0xc42e8
		int32_t v19 = v5 + 4; // 0xc42ec
		if (*(int32_t *)v19 == -1) {
			// 0xc4300
			*(char *)(v18 + 97) = (char)v7;
			// branch -> 0xc4304
		} else {
			// 0xc42f8
			*(char *)(v18 + 97) = (char)result;
			// branch -> 0xc4304
		}
		// 0xc4304
		v5 = v19 + 4;
		v6 += 3;
		int32_t v20 = v3 - 1; // 0xc4314
		v3 = v20;
		if (v20 == 0) {
			// break -> 0xc4318
			break;
		}
		v4 = 6 + v18;
		v2 = 48 + v16;
		// continue -> 0xc4244
	}
	// 0xc4318
	return result;
}

// Address range: 0xc431c - 0xc4470
int32_t InitSmith(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6eb0); // 0xc4350
	g13 = 10;
	int32_t v2;
	InitTownerInfo(v1, 96, 1, 0, 62, 63, 0, (int32_t)&v2);
	InitQstSnds(*(int32_t *)g35);
	int32_t v3 = LoadFileInMem(*(int32_t *)(g23 - 0x55f4), NULL); // 0xc436c
	int32_t v4 = *(int32_t *)g35;                                 // 0xc4370
	int32_t v5 = 268 * v4;                                        // 0xc437c
	int32_t v6 = g36 + v5;                                        // 0xc4380
	*(int32_t *)(v6 + 260) = v3;
	int32_t v7 = v6 + 192; // r9
	int32_t v8 = v6 + 256; // r10
	*(int32_t *)(v6 + 264) = 0;
	*(int32_t *)v7 = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 4) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 8) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 12) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 16) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 20) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 24) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 28) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 32) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 36) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 40) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 44) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 48) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 52) = *(int32_t *)(v6 + 264);
	int32_t v9 = *(int32_t *)(v6 + 260); // 0xc4418
	*(int32_t *)(v7 + 56) = v9;
	*(int32_t *)(v7 + 60) = *(int32_t *)(v6 + 264);
	*(int32_t *)v8 = 16;
	NewTownerAnim(v4, v5 + 200 + g36, *(int32_t *)v8, 3, v9);
	g37 = *(int32_t *)(g23 - 0x55f8);
	g34 = 268 * *(int32_t *)g35 + 160 + g36;
	strcpy();
	int32_t *v10 = (int32_t *)g35; // 0xc444c
	int32_t result = *v10;         // 0xc444c
	*v10 = result + 1;
	return result;
}

// Address range: 0xc4470 - 0xc45d4
int32_t function_c4470(void)
{
	// 0xc4470
	*(int32_t *)*(int32_t *)(g23 - 0x6eb8) = 0;
	g13 = 10;
	int32_t v1;
	int32_t v2 = &v1; // 0xc44bc
	InitTownerInfo(*(int32_t *)*(int32_t *)(g23 - 0x6eb0), 96, 1, 3, 55, 62, 3, v2);
	InitQstSnds(*(int32_t *)g35);
	int32_t v3 = LoadFileInMem(*(int32_t *)(g23 - 0x55fc), NULL); // 0xc44d0
	int32_t v4 = *(int32_t *)g35;                                 // 0xc44d4
	int32_t v5 = 268 * v4;                                        // 0xc44e0
	int32_t v6 = g36 + v5;                                        // 0xc44e4
	*(int32_t *)(v6 + 260) = v3;
	int32_t v7 = v6 + 192; // r9
	int32_t v8 = v6 + 256; // r10
	*(int32_t *)(v6 + 264) = g33;
	*(int32_t *)v7 = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 4) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 8) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 12) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 16) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 20) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 24) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 28) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 32) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 36) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 40) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 44) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 48) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 52) = *(int32_t *)(v6 + 264);
	int32_t v9 = *(int32_t *)(v6 + 260); // 0xc4578
	*(int32_t *)(v7 + 56) = v9;
	*(int32_t *)(v7 + 60) = *(int32_t *)(v6 + 264);
	*(int32_t *)v8 = 16;
	NewTownerAnim(v4, v5 + 200 + g36, *(int32_t *)v8, 3, v9);
	g37 = *(int32_t *)(g23 - 0x5600);
	g34 = 268 * *(int32_t *)g35 + 160 + g36;
	strcpy();
	int32_t *v10 = (int32_t *)g35; // 0xc45ac
	int32_t result = *v10;         // 0xc45ac
	*v10 = result + 1;
	return result;
}

// Address range: 0xc45d4 - 0xc4728
int32_t function_c45d4(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6eb0); // 0xc4608
	g13 = 10;
	int32_t v2;
	InitTownerInfo(v1, 96, 1, 2, 24, 32, -1, (int32_t)&v2);
	InitQstSnds(*(int32_t *)g35);
	int32_t v3 = LoadFileInMem(*(int32_t *)(g23 - 0x5604), NULL); // 0xc4624
	int32_t v4 = *(int32_t *)g35;                                 // 0xc4628
	int32_t v5 = 268 * v4;                                        // 0xc4634
	int32_t v6 = g36 + v5;                                        // 0xc4638
	*(int32_t *)(v6 + 260) = v3;
	int32_t v7 = v6 + 192; // r9
	int32_t v8 = v6 + 256; // r10
	*(int32_t *)(v6 + 264) = 0;
	*(int32_t *)v7 = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 4) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 8) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 12) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 16) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 20) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 24) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 28) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 32) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 36) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 40) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 44) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 48) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 52) = *(int32_t *)(v6 + 264);
	int32_t v9 = *(int32_t *)(v6 + 260); // 0xc46d0
	*(int32_t *)(v7 + 56) = v9;
	*(int32_t *)(v7 + 60) = *(int32_t *)(v6 + 264);
	*(int32_t *)v8 = 8;
	NewTownerAnim(v4, v5 + 224 + g36, *(int32_t *)v8, 6, v9);
	g37 = *(int32_t *)(g23 - 0x5608);
	g34 = 268 * *(int32_t *)g35 + 160 + g36;
	strcpy();
	int32_t *v10 = (int32_t *)g35; // 0xc4704
	int32_t result = *v10;         // 0xc4704
	*v10 = result + 1;
	return result;
}

// Address range: 0xc4728 - 0xc487c
int32_t function_c4728(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6eb0); // 0xc475c
	g13 = 10;
	int32_t v2;
	InitTownerInfo(v1, 96, 1, 6, 80, 20, 5, (int32_t)&v2);
	InitQstSnds(*(int32_t *)g35);
	int32_t v3 = LoadFileInMem(*(int32_t *)(g23 - 0x560c), NULL); // 0xc4778
	int32_t v4 = *(int32_t *)g35;                                 // 0xc477c
	int32_t v5 = 268 * v4;                                        // 0xc4788
	int32_t v6 = g36 + v5;                                        // 0xc478c
	*(int32_t *)(v6 + 260) = v3;
	int32_t v7 = v6 + 192; // r9
	int32_t v8 = v6 + 256; // r10
	*(int32_t *)(v6 + 264) = 0;
	*(int32_t *)v7 = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 4) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 8) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 12) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 16) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 20) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 24) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 28) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 32) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 36) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 40) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 44) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 48) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 52) = *(int32_t *)(v6 + 264);
	int32_t v9 = *(int32_t *)(v6 + 260); // 0xc4824
	*(int32_t *)(v7 + 56) = v9;
	*(int32_t *)(v7 + 60) = *(int32_t *)(v6 + 264);
	*(int32_t *)v8 = 19;
	NewTownerAnim(v4, v5 + 192 + g36, *(int32_t *)v8, 6, v9);
	g37 = *(int32_t *)(g23 - 0x5610);
	g34 = 268 * *(int32_t *)g35 + 160 + g36;
	strcpy();
	int32_t *v10 = (int32_t *)g35; // 0xc4858
	int32_t result = *v10;         // 0xc4858
	*v10 = result + 1;
	return result;
}

// Address range: 0xc487c - 0xc49d0
int32_t function_c487c(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6eb0); // 0xc48b0
	g13 = 10;
	int32_t v2;
	InitTownerInfo(v1, 96, 1, 7, 43, 66, -1, (int32_t)&v2);
	InitQstSnds(*(int32_t *)g35);
	int32_t v3 = LoadFileInMem(*(int32_t *)(g23 - 0x5614), NULL); // 0xc48cc
	int32_t v4 = *(int32_t *)g35;                                 // 0xc48d0
	int32_t v5 = 268 * v4;                                        // 0xc48dc
	int32_t v6 = g36 + v5;                                        // 0xc48e0
	*(int32_t *)(v6 + 260) = v3;
	int32_t v7 = v6 + 192; // r9
	int32_t v8 = v6 + 256; // r10
	*(int32_t *)(v6 + 264) = 0;
	*(int32_t *)v7 = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 4) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 8) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 12) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 16) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 20) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 24) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 28) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 32) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 36) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 40) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 44) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 48) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 52) = *(int32_t *)(v6 + 264);
	int32_t v9 = *(int32_t *)(v6 + 260); // 0xc4978
	*(int32_t *)(v7 + 56) = v9;
	*(int32_t *)(v7 + 60) = *(int32_t *)(v6 + 264);
	*(int32_t *)v8 = 18;
	NewTownerAnim(v4, v5 + 192 + g36, *(int32_t *)v8, 6, v9);
	g37 = *(int32_t *)(g23 - 0x5618);
	g34 = 268 * *(int32_t *)g35 + 160 + g36;
	strcpy();
	int32_t *v10 = (int32_t *)g35; // 0xc49ac
	int32_t result = *v10;         // 0xc49ac
	*v10 = result + 1;
	return result;
}

// Address range: 0xc49d0 - 0xc4b30
int32_t function_c49d0(int32_t a1)
{
	// 0xc49d0
	*(int32_t *)*(int32_t *)(g23 - 0x6eb4) = 1;
	g13 = 10;
	int32_t v1;
	int32_t v2 = &v1; // 0xc4a18
	InitTownerInfo(*(int32_t *)*(int32_t *)(g23 - 0x6eb0), 96, 1, 8, 11, 53, -1, v2);
	InitQstSnds(*(int32_t *)g35);
	int32_t v3 = LoadFileInMem(*(int32_t *)(g23 - 0x561c), NULL); // 0xc4a2c
	int32_t v4 = *(int32_t *)g35;                                 // 0xc4a30
	int32_t v5 = 268 * v4;                                        // 0xc4a3c
	int32_t v6 = g36 + v5;                                        // 0xc4a40
	*(int32_t *)(v6 + 260) = v3;
	int32_t v7 = v6 + 192; // r9
	int32_t v8 = v6 + 256; // r10
	*(int32_t *)(v6 + 264) = 0;
	*(int32_t *)v7 = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 4) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 8) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 12) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 16) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 20) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 24) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 28) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 32) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 36) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 40) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 44) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 48) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 52) = *(int32_t *)(v6 + 264);
	int32_t v9 = *(int32_t *)(v6 + 260); // 0xc4ad8
	*(int32_t *)(v7 + 56) = v9;
	*(int32_t *)(v7 + 60) = *(int32_t *)(v6 + 264);
	*(int32_t *)v8 = 20;
	NewTownerAnim(v4, v5 + 192 + g36, *(int32_t *)v8, 6, v9);
	g37 = *(int32_t *)(g23 - 0x5620);
	g34 = 268 * *(int32_t *)g35 + 160 + g36;
	strcpy();
	int32_t *v10 = (int32_t *)g35; // 0xc4b0c
	int32_t result = *v10;         // 0xc4b0c
	*v10 = result + 1;
	return result;
}

// Address range: 0xc4b30 - 0xc4c84
int32_t function_c4b30(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6eb0); // 0xc4b64
	g13 = 10;
	int32_t v2;
	InitTownerInfo(v1, 96, 1, 1, 55, 79, 1, (int32_t)&v2);
	InitQstSnds(*(int32_t *)g35);
	int32_t v3 = LoadFileInMem(*(int32_t *)(g23 - 0x5624), NULL); // 0xc4b80
	int32_t v4 = *(int32_t *)g35;                                 // 0xc4b84
	int32_t v5 = 268 * v4;                                        // 0xc4b90
	int32_t v6 = g36 + v5;                                        // 0xc4b94
	*(int32_t *)(v6 + 260) = v3;
	int32_t v7 = v6 + 192; // r9
	int32_t v8 = v6 + 256; // r10
	*(int32_t *)(v6 + 264) = 0;
	*(int32_t *)v7 = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 4) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 8) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 12) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 16) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 20) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 24) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 28) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 32) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 36) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 40) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 44) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 48) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 52) = *(int32_t *)(v6 + 264);
	int32_t v9 = *(int32_t *)(v6 + 260); // 0xc4c2c
	*(int32_t *)(v7 + 56) = v9;
	*(int32_t *)(v7 + 60) = *(int32_t *)(v6 + 264);
	*(int32_t *)v8 = 20;
	NewTownerAnim(v4, v5 + 248 + g36, *(int32_t *)v8, 6, v9);
	g37 = *(int32_t *)(g23 - 0x5628);
	g34 = 268 * *(int32_t *)g35 + 160 + g36;
	strcpy();
	int32_t *v10 = (int32_t *)g35; // 0xc4c60
	int32_t result = *v10;         // 0xc4c60
	*v10 = result + 1;
	return result;
}

// Address range: 0xc4c84 - 0xc4dd8
int32_t function_c4c84(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6eb0); // 0xc4cb8
	g13 = 10;
	int32_t v2;
	InitTownerInfo(v1, 96, 1, 4, 62, 71, 2, (int32_t)&v2);
	InitQstSnds(*(int32_t *)g35);
	int32_t v3 = LoadFileInMem(*(int32_t *)(g23 - 0x562c), NULL); // 0xc4cd4
	int32_t v4 = *(int32_t *)g35;                                 // 0xc4cd8
	int32_t v5 = 268 * v4;                                        // 0xc4ce4
	int32_t v6 = g36 + v5;                                        // 0xc4ce8
	*(int32_t *)(v6 + 260) = v3;
	int32_t v7 = v6 + 192; // r9
	int32_t v8 = v6 + 256; // r10
	*(int32_t *)(v6 + 264) = 0;
	*(int32_t *)v7 = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 4) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 8) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 12) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 16) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 20) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 24) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 28) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 32) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 36) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 40) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 44) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 48) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 52) = *(int32_t *)(v6 + 264);
	int32_t v9 = *(int32_t *)(v6 + 260); // 0xc4d80
	*(int32_t *)(v7 + 56) = v9;
	*(int32_t *)(v7 + 60) = *(int32_t *)(v6 + 264);
	*(int32_t *)v8 = 25;
	NewTownerAnim(v4, v5 + 192 + g36, *(int32_t *)v8, 3, v9);
	g37 = *(int32_t *)(g23 - 0x5630);
	g34 = 268 * *(int32_t *)g35 + 160 + g36;
	strcpy();
	int32_t *v10 = (int32_t *)g35; // 0xc4db4
	int32_t result = *v10;         // 0xc4db4
	*v10 = result + 1;
	return result;
}

// Address range: 0xc4dd8 - 0xc4f2c
int32_t function_c4dd8(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6eb0); // 0xc4e0c
	g13 = 10;
	int32_t v2;
	InitTownerInfo(v1, 96, 1, 5, 71, 84, 4, (int32_t)&v2);
	InitQstSnds(*(int32_t *)g35);
	int32_t v3 = LoadFileInMem(*(int32_t *)(g23 - 0x5634), NULL); // 0xc4e28
	int32_t v4 = *(int32_t *)g35;                                 // 0xc4e2c
	int32_t v5 = 268 * v4;                                        // 0xc4e38
	int32_t v6 = g36 + v5;                                        // 0xc4e3c
	*(int32_t *)(v6 + 260) = v3;
	int32_t v7 = v6 + 192; // r9
	int32_t v8 = v6 + 256; // r10
	*(int32_t *)(v6 + 264) = 0;
	*(int32_t *)v7 = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 4) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 8) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 12) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 16) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 20) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 24) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 28) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 32) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 36) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 40) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 44) = *(int32_t *)(v6 + 264);
	*(int32_t *)(v7 + 48) = *(int32_t *)(v6 + 260);
	*(int32_t *)(v7 + 52) = *(int32_t *)(v6 + 264);
	int32_t v9 = *(int32_t *)(v6 + 260); // 0xc4ed4
	*(int32_t *)(v7 + 56) = v9;
	*(int32_t *)(v7 + 60) = *(int32_t *)(v6 + 264);
	*(int32_t *)v8 = 18;
	NewTownerAnim(v4, v5 + 192 + g36, *(int32_t *)v8, 3, v9);
	g37 = *(int32_t *)(g23 - 0x5638);
	g34 = 268 * *(int32_t *)g35 + 160 + g36;
	strcpy();
	int32_t *v10 = (int32_t *)g35; // 0xc4f08
	int32_t result = *v10;         // 0xc4f08
	*v10 = result + 1;
	return result;
}

// Address range: 0xc4f2c - 0xc5110
int32_t InitCows(int32_t a1)
{
	// 0xc4f2c
	g32 = *(int32_t *)(g23 - 0x564c);
	g33 = *(int32_t *)(g23 - 0x767c);
	g35 = *(int32_t *)(g23 - 0x6eb0);
	g36 = *(int32_t *)(g23 - 0x7758);
	*(int32_t *)(g23 - 0x4a8c) = LoadFileInMem(*(int32_t *)(g23 - 0x563c), NULL);
	int32_t v1 = *(int32_t *)(g23 - 0x5648); // 0xc4f84
	int32_t *v2 = (int32_t *)(g23 - 0x5644);
	int32_t v3 = *(int32_t *)(g23 - 0x5640); // 0xc4f74
	// branch -> 0xc4f74
	while (true) {
		int32_t v4 = *(int32_t *)v3; // 0xc4f74
		g25 = v4;
		int32_t v5 = *(int32_t *)*v2; // 0xc4f7c
		g24 = v5;
		g22 = *(int32_t *)v1;
		g13 = 10;
		int32_t *v6;
		InitTownerInfo(*(int32_t *)g35, 128, 0, 9, v4, v5, -1, (int32_t)&v6);
		int32_t v7 = *(int32_t *)(g23 - 0x4a8c);  // 0xc4fac
		int32_t v8 = g36 + 268 * *(int32_t *)g35; // 0xc4fb4
		int32_t result = v8;                      // r3
		*(int32_t *)(v8 + 260) = v7;
		int32_t v9 = result; // 0xc4fbc
		*(int32_t *)(v9 + 264) = 0;
		int32_t v10 = *(int32_t *)(result + 260); // 0xc4fc4
		SetTownerGPtrs(v10, (int32_t *)(v9 + 192), v7);
		int32_t v11 = *(int32_t *)g35; // 0xc4fcc
		int32_t v12 = g36 + 268 * v11; // 0xc4fe0
		*(int32_t *)(v12 + 256) = 12;
		int32_t v13 = v12 + 256; // 0xc4fe8
		NewTownerAnim(v11, 8 * g22 + 192 + v12, *(int32_t *)v13, 3, v13);
		g37 = 11;
		int32_t v14 = random(0);                   // 0xc5004
		int32_t v15 = g36 + 268 * *(int32_t *)g35; // 0xc5018
		*(int32_t *)(v15 + 52) = v14 + 1;
		g37 = g32;
		g34 = v15 + 160;
		*(int32_t *)(v15 + 84) = 1;
		strcpy();
		int32_t v16 = 4 * g22;                                             // 0xc5030
		int32_t v17 = g25;                                                 // 0xc5038
		int32_t v18 = g24 + *(int32_t *)(g30 + v16);                       // 0xc5044
		int32_t v19 = *(int32_t *)(g31 + v16) + v17;                       // 0xc5050
		int16_t *v20 = (int16_t *)(2 * v18 + 224 * v17 + *(int32_t *)g33); // 0xc5054
		if (*v20 == 0) {
			// 0xc5060
			*v20 = (int16_t)(0x10000 * (-1 - *(int32_t *)g35) / 0x10000);
			// branch -> 0xc5074
		}
		int32_t v21 = 224 * v19; // 0xc5074
		v19 = v21;
		int16_t *v22 = (int16_t *)(v21 + 2 * g24 + *(int32_t *)g33); // 0xc5088
		if (*v22 == 0) {
			// 0xc5094
			*v22 = (int16_t)(0x10000 * (-1 - *(int32_t *)g35) / 0x10000);
			v21 = v19;
			// branch -> 0xc50a8
		}
		int16_t *v23 = (int16_t *)(2 * v18 + v21 + *(int32_t *)g33); // 0xc50b8
		if (*v23 == 0) {
			// 0xc50c4
			*v23 = (int16_t)(0x10000 * (-1 - *(int32_t *)g35) / 0x10000);
			// branch -> 0xc50d8
		}
		int32_t *v24 = (int32_t *)g35; // 0xc50d8
		int32_t v25 = *v24;            // 0xc50d8
		result = v25;
		g28 += 4;
		*v24 = v25 + 1;
		if (g26 >= 2) {
			// 0xc50fc
			return result;
		}
		// 0xc50d8
		v1 = g27 + 4;
		v2 = &g28;
		v3 = g29 + 4;
		// branch -> 0xc4f74
	}
}

// Address range: 0xc5110 - 0xc5180
int32_t function_c5110(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10;                        // 0xc5110
	int32_t v2 = *(int32_t *)(g23 - 0x6eb0); // 0xc5114
	int32_t v3 = *(int32_t *)(g23 - 0x6eb4); // 0xc5120
	*(int32_t *)v2 = 0;
	*(int32_t *)v3 = 0;
	function_c4b30(InitSmith(v3, v2));
	int32_t v4 = *(int32_t *)(g23 - 0x7604); // 0xc5138
	unsigned char v5 = *(char *)(v4 + 146);  // 0xc513c
	int32_t v6;                              // 0xc5154
	int32_t v7;                              // 0xc5158
	int32_t v8;                              // 0xc515c
	int32_t v9;                              // 0xc5160
	int32_t v10;                             // 0xc5164
	int32_t v11;                             // 0xc5168
	int32_t result;                          // 0xc516c
	if (v5 == 0) {
		// 0xc5154
		v6 = function_c4470();
		v7 = function_c4c84(v6);
		v8 = function_c4dd8(v7);
		v9 = function_c4728(v8);
		v10 = function_c487c(v9);
		v11 = function_c49d0(v10);
		result = InitCows(v11);
		g10 = v1;
		return result;
	}
	// 0xc5148
	if (v5 != 3) {
		// 0xc5150
		function_c45d4(v4);
		// branch -> 0xc5154
	}
	// 0xc5154
	v6 = function_c4470();
	v7 = function_c4c84(v6);
	v8 = function_c4dd8(v7);
	v9 = function_c4728(v8);
	v10 = function_c487c(v9);
	v11 = function_c49d0(v10);
	result = InitCows(v11);
	g10 = v1;
	return result;
}

// Address range: 0xc5180 - 0xc5200
int32_t FreeTownerGFX(int32_t a1)
{
	// 0xc5180
	g36 = 0;
	int32_t v1 = *(int32_t *)(g23 - 0x7758); // 0xc5190
	int32_t v2 = 0;                          // r29
	int32_t v3 = g23;                        // 0xc51a8
	// branch -> 0xc51a4
	int32_t v4;
	while (true) {
		int32_t *v5 = (int32_t *)(v1 + 260); // 0xc51a4
		int32_t v6 = *v5;                    // 0xc51a4
		int32_t v7;                          // 0xc51cc
		if (v6 == *(int32_t *)(v3 - 0x4a8c)) {
			// 0xc51b4
			*v5 = g36;
			// branch -> 0xc51cc
		} else {
			// 0xc51bc
			if (v6 != 0) {
				// 0xc51c4
				MemFreeDbg(v5);
				// branch -> 0xc51cc
			}
			// 0xc51cc
			v7 = v2 + 1;
			v2 = v7;
			v4 = g23;
			if (v7 >= 16) {
				// break -> 0xc51dc
				break;
			}
			v3 = v4;
			v1 += 268;
			// continue -> 0xc51a4
			continue;
		}
		// 0xc51cc
		v7 = v2 + 1;
		v2 = v7;
		v4 = g23;
		if (v7 >= 16) {
			// break -> 0xc51dc
			break;
		}
		v3 = v4;
		v1 += 268;
		// continue -> 0xc51a4
	}
	// 0xc51dc
	return MemFreeDbg((int32_t *)(v4 - 0x4a8c));
}

// Address range: 0xc5200 - 0xc52bc
int32_t function_c5200(void)
{
	int32_t v1 = g36;                            // 0xc5200
	int32_t result = *(int32_t *)(g23 - 0x7758); // 0xc520c
	int32_t v2 = g35;                            // 0xc5210
	int32_t v3 = g33;                            // 0xc5218
	int32_t v4 = result + 268 * g34;             // 0xc521c
	int32_t v5 = v4 + 80;                        // 0xc5228
	g33 = v5;
	if (*(int32_t *)v5 == 0) {
		// 0xc52a0
		g36 = v1;
		g35 = v2;
		g33 = v3;
		return result;
	}
	// 0xc5234
	g35 = v4;
	int32_t v6 = 0x55ec * *(int32_t *)(v4 + 144) + *(int32_t *)(g23 - 0x77a8); // 0xc5244
	g34 = *(int32_t *)(v4 + 8) - *(int32_t *)(v6 + 56);
	g36 = abs();
	g34 = *(int32_t *)(g35 + 12) - *(int32_t *)(v6 + 60);
	int32_t v7 = abs(); // 0xc5264
	int32_t result2;    // 0xc52b8
	if (g36 > 1) {
		// 0xc5278
		*(int32_t *)g33 = 0;
		// branch -> 0xc5280
		// 0xc5280
		if (*(int32_t *)g33 == 0) {
			// 0xc528c
			*(char *)*(int32_t *)(g23 - 0x7730) = 0;
			g34 = sfx_stop();
			result2 = function_6c704();
			// branch -> 0xc52a0
		} else {
			// 0xc5280
			result2 = v7;
			// branch -> 0xc52a0
		}
		// 0xc52a0
		g36 = v1;
		g35 = v2;
		g33 = v3;
		return result2;
	}
	// 0xc5270
	if (v7 >= 2) {
		// 0xc5278
		*(int32_t *)g33 = 0;
		// branch -> 0xc5280
	}
	// 0xc5280
	if (*(int32_t *)g33 == 0) {
		// 0xc528c
		*(char *)*(int32_t *)(g23 - 0x7730) = 0;
		g34 = sfx_stop();
		result2 = function_6c704();
		// branch -> 0xc52a0
	} else {
		// 0xc5280
		result2 = v7;
		// branch -> 0xc52a0
	}
	// 0xc52a0
	g36 = v1;
	g35 = v2;
	g33 = v3;
	return result2;
}

// Address range: 0xc52bc - 0xc52e4
int32_t function_c52bc(void)
{
	// 0xc52bc
	g34 = GetActiveTowner(0);
	return function_c5200();
}

// Address range: 0xc52e4 - 0xc530c
int32_t function_c52e4(void)
{
	// 0xc52e4
	g34 = GetActiveTowner(3);
	return function_c5200();
}

// Address range: 0xc530c - 0xc53cc
int32_t function_c530c(void)
{
	// 0xc530c
	g36 = *(int32_t *)(g23 - 0x7758);
	g35 = *(int32_t *)(g23 - 0x7604);
	int32_t v1 = GetActiveTowner(2); // 0xc5330
	g34 = v1;
	g33 = v1;
	function_c5200();
	int32_t v2 = *(int32_t *)(g23 - 0x7730); // 0xc533c
	int32_t result;                          // 0xc53c8
	int32_t v3;                              // 0xc53a4
	if (*(char *)v2 != 0) {
		// 0xc5394
		if (*(char *)(g35 + 146) != 1) {
			// 0xc53a0
			v3 = g36 + 268 * g33;
			*(int32_t *)(v3 + 44) = 0;
			result = v3;
			// branch -> 0xc53b0
		} else {
			result = v2;
		}
		// 0xc53b0
		return result;
	}
	unsigned char result2 = *(char *)(g35 + 146); // 0xc534c
	if (result2 == 2) {
		// 0xc5358
		if (*(int32_t *)(g35 + 164) == 0) {
			// 0xc53b0
			return result2;
		}
	}
	int32_t v4 = 1; // 0xc53c82
	if (result2 != 1) {
		int32_t v5 = 268 * g33; // 0xc536c
		g37 = *(int32_t *)(g23 - 0x5658);
		int32_t v6 = g36;     // 0xc5374
		int32_t v7 = v6 + v5; // 0xc5374
		g34 = v5 + 160 + v6;
		*(int32_t *)(v7 + 40) = 1000;
		*(int32_t *)(v7 + 52) = 1;
		v4 = strcpy();
		// branch -> 0xc5394
	}
	// 0xc5394
	if (*(char *)(g35 + 146) != 1) {
		// 0xc53a0
		v3 = g36 + 268 * g33;
		*(int32_t *)(v3 + 44) = 0;
		result = v3;
		// branch -> 0xc53b0
	} else {
		result = v4;
	}
	// 0xc53b0
	return result;
}

// Address range: 0xc53cc - 0xc53f4
int32_t function_c53cc(void)
{
	// 0xc53cc
	g34 = GetActiveTowner(1);
	return function_c5200();
}

// Address range: 0xc53f4 - 0xc541c
int32_t function_c53f4(void)
{
	// 0xc53f4
	g34 = GetActiveTowner(4);
	return function_c5200();
}

// Address range: 0xc541c - 0xc5444
int32_t function_c541c(void)
{
	// 0xc541c
	g34 = GetActiveTowner(5);
	return function_c5200();
}

// Address range: 0xc5444 - 0xc546c
int32_t function_c5444(void)
{
	// 0xc5444
	g34 = GetActiveTowner(8);
	return function_c5200();
}

// Address range: 0xc546c - 0xc5494
int32_t function_c546c(void)
{
	// 0xc546c
	g34 = GetActiveTowner(6);
	return function_c5200();
}

// Address range: 0xc5494 - 0xc54bc
int32_t function_c5494(void)
{
	// 0xc5494
	g34 = GetActiveTowner(7);
	return function_c5200();
}

// Address range: 0xc54bc - 0xc54e4
int32_t function_c54bc(void)
{
	// 0xc54bc
	g34 = GetActiveTowner(9);
	return function_c5200();
}

// Address range: 0xc54e4 - 0xc5638
int32_t function_c54e4(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7758); // 0xc54f4
	int32_t v2 = 0;                          // r29
	// branch -> 0xc5508
	int32_t result; // r3
	while (true) {
		uint32_t v3 = *(int32_t *)(v1 + 4); // 0xc5508
		if (v3 <= 9) {
			// 0xc5514
			return *(int32_t *)(*(int32_t *)(g23 - 0x5660) + 4 * v3);
		}
		int32_t *v4 = (int32_t *)(v1 + 44); // 0xc5574
		*v4 = *v4 + 1;
		int32_t v5 = v1;                    // 0xc5580
		int32_t *v6 = (int32_t *)(v5 + 44); // 0xc5580
		uint32_t v7 = *v6;                  // 0xc5580
		result = v7;
		int32_t v8; // 0xc560c
		if (v7 >= *(int32_t *)(v5 + 40)) {
			// 0xc5590
			*v6 = 0;
			int32_t v9 = v1;               // 0xc5598
			char v10 = *(char *)(v9 + 60); // 0xc5598
			int32_t v11 = v10;             // 0xc559c
			if (v10 < 0) {
				int32_t *v12 = (int32_t *)(v9 + 52); // 0xc55e8
				*v12 = *v12 + 1;
				int32_t v13 = v1;                     // 0xc55f4
				int32_t *v14 = (int32_t *)(v13 + 52); // 0xc55f4
				int32_t v15 = *v14;                   // 0xc55f4
				result = v15;
				if (v15 > *(int32_t *)(v13 + 48)) {
					// 0xc5604
					*v14 = 1;
					// branch -> 0xc560c
				}
			} else {
				int32_t *v16 = (int32_t *)(v9 + 56); // 0xc55a4
				*v16 = *v16 + 1;
				int32_t v17 = 148 * v11 + *(int32_t *)(g23 - 0x565c); // 0xc55b8
				result = v17;
				int32_t v18 = v1;                     // 0xc55bc
				int32_t *v19 = (int32_t *)(v18 + 56); // 0xc55bc
				int32_t v20 = v17;                    // 0xc55d8
				if (*(char *)(*v19 + v17) == -1) {
					// 0xc55d0
					*v19 = 0;
					v20 = result;
					v18 = v1;
					// branch -> 0xc55d4
				}
				int32_t v21 = *(int32_t *)(v18 + 56); // 0xc55d4
				*(int32_t *)(v18 + 52) = (int32_t) * (char *)(v21 + v20);
				// branch -> 0xc560c
			}
			// 0xc560c
			v8 = v2 + 1;
			v2 = v8;
			if (v8 >= 16) {
				// break -> 0xc561c
				break;
			}
			v1 += 268;
			// continue -> 0xc5508
			continue;
		}
		// 0xc560c
		v8 = v2 + 1;
		v2 = v8;
		if (v8 >= 16) {
			// break -> 0xc561c
			break;
		}
		v1 += 268;
		// continue -> 0xc5508
	}
	// 0xc561c
	return result;
}

// Address range: 0xc5638 - 0xc5694
int32_t function_c5638(int32_t a1, int32_t a2, int32_t *a3)
{
	int32_t v1 = (int32_t)a3;                              // r5
	int32_t v2 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0xc5644
	int32_t v3 = v2;                                       // r7
	*a3 = 0;
	if (v1 < *(int32_t *)(v2 + 0x4828)) {
		int32_t v4 = v1; // 0xc5670
		while (true) {
			int32_t v5 = 368 * v4; // 0xc5650
			if (a2 == *(int32_t *)(v5 + 0x1010 + v2)) {
				// 0xc5664
				return v2 + 3752 + v5;
			}
			// 0xc5670
			*(int32_t *)v4 = v4 + 1;
			if (v1 >= *(int32_t *)(v3 + 0x4828)) {
				// break -> 0xc567c
				break;
			}
			v2 = v3;
			v4 = v1;
			// continue -> 0xc5650
		}
		// 0xc567c
		// branch -> 0xc568c
	}
	// 0xc568c
	return 0;
}

// Address range: 0xc5694 - 0xc57b4
int32_t CowSFX(int32_t a1)
{
	// 0xc5694
	g36 = *(int32_t *)(g23 - 0x77a8);
	g35 = a1;
	int32_t v1 = g23; // 0xc56d0
	if (*(char *)(g23 - 0x4a9c) == 0) {
		// 0xc56c0
		*(int32_t *)(g23 - 0x4a98) = -1;
		*(char *)(g23 - 0x4a9c) = (char)1;
		v1 = g23;
		// branch -> 0xc56d0
	}
	int32_t v2 = *(int32_t *)(v1 - 0x4a98); // 0xc56d0
	int32_t v3;                             // 0xc56f4
	int32_t v4;                             // 0xc5720
	int32_t v5;                             // 0xc5728
	int32_t v6;                             // 0xc572c
	int32_t v7;                             // 0xc5728
	int32_t result;                         // 0xc5794
	int32_t *v8;                            // 0xc56e8
	int32_t v9;                             // 0xc5704
	int32_t v10;                            // 0xc5744
	uint32_t v11;                           // 0xc56f4
	int32_t v12;                            // 0xc5784
	int32_t v13;                            // 0xc5748
	if (v2 == -1) {
		// 0xc56e8
		v8 = (int32_t *)(v1 - 0x4a90);
		*v8 = *v8 + 1;
		v3 = g23;
		v11 = *(int32_t *)(v3 - 0x4a90);
		if (v11 < 8) {
			// 0xc5764
			if (v11 == 4) {
				// 0xc576c
				*(int32_t *)(v3 - 0x4a98) = 237;
				// branch -> 0xc5780
			} else {
				// 0xc5778
				*(int32_t *)(v3 - 0x4a98) = 236;
				// branch -> 0xc5780
			}
			// 0xc5780
			v12 = *(int32_t *)(g23 - 0x4a98);
			g34 = v12;
			g38 = *(int32_t *)(g36 + 0x55ec * g35 + 60);
			result = PlaySfxLoc(v12);
			// branch -> 0xc5798
			// 0xc5798
			return result;
		}
		// 0xc5700
		v9 = g36 + 0x55ec * g35;
		g33 = v9;
		g34 = 236;
		g38 = *(int32_t *)(v9 + 60) + 5;
		PlaySfxLoc(236);
		v4 = g23;
		*(int32_t *)(v4 - 0x4a90) = 4;
		v5 = *(int32_t *)(v4 - 0x4a94);
		v7 = v5 + 1;
		v6 = g23;
		v10 = 0x1000000 * (int32_t) * (char *)(g33 + 348) / 0x400000 + 12 * v5;
		v13 = *(int32_t *)(v10 + *(int32_t *)(v6 - 0x5664));
		*(int32_t *)(v6 - 0x4a98) = v13;
		*(int32_t *)(g23 - 0x4a94) = v7;
		if (v7 >= 3) {
			// 0xc5758
			*(int32_t *)(g23 - 0x4a94) = 0;
			// branch -> 0xc5780
		}
		// 0xc5780
		v12 = *(int32_t *)(g23 - 0x4a98);
		g34 = v12;
		g38 = *(int32_t *)(g36 + 0x55ec * g35 + 60);
		result = PlaySfxLoc(v12);
		// branch -> 0xc5798
		// 0xc5798
		return result;
	}
	int32_t v14 = effect_is_playing(v2); // 0xc56dc
	int32_t result2 = v14;               // 0xc57b0
	if (v14 == 0) {
		// 0xc56dc
		// branch -> 0xc56e8
		// 0xc56e8
		v8 = (int32_t *)(g23 - 0x4a90);
		*v8 = *v8 + 1;
		v3 = g23;
		v11 = *(int32_t *)(v3 - 0x4a90);
		if (v11 < 8) {
			// 0xc5764
			if (v11 == 4) {
				// 0xc576c
				*(int32_t *)(v3 - 0x4a98) = 237;
				// branch -> 0xc5780
			} else {
				// 0xc5778
				*(int32_t *)(v3 - 0x4a98) = 236;
				// branch -> 0xc5780
			}
			// 0xc5780
			v12 = *(int32_t *)(g23 - 0x4a98);
			g34 = v12;
			g38 = *(int32_t *)(g36 + 0x55ec * g35 + 60);
			result = PlaySfxLoc(v12);
			// branch -> 0xc5798
			// 0xc5798
			return result;
		}
		// 0xc5700
		v9 = g36 + 0x55ec * g35;
		g33 = v9;
		g34 = 236;
		g38 = *(int32_t *)(v9 + 60) + 5;
		PlaySfxLoc(236);
		v4 = g23;
		*(int32_t *)(v4 - 0x4a90) = 4;
		v5 = *(int32_t *)(v4 - 0x4a94);
		v7 = v5 + 1;
		v6 = g23;
		v10 = 0x1000000 * (int32_t) * (char *)(g33 + 348) / 0x400000 + 12 * v5;
		v13 = *(int32_t *)(v10 + *(int32_t *)(v6 - 0x5664));
		*(int32_t *)(v6 - 0x4a98) = v13;
		*(int32_t *)(g23 - 0x4a94) = v7;
		if (v7 >= 3) {
			// 0xc5758
			*(int32_t *)(g23 - 0x4a94) = 0;
			// branch -> 0xc5780
		}
		// 0xc5780
		v12 = *(int32_t *)(g23 - 0x4a98);
		g34 = v12;
		g38 = *(int32_t *)(g36 + 0x55ec * g35 + 60);
		result2 = PlaySfxLoc(v12);
		// branch -> 0xc5798
	}
	// 0xc5798
	return result2;
}

// Address range: 0xc57b4 - 0xc57f0
int32_t function_c57b4(int32_t a1, int32_t a2)
{
	// 0xc57b4
	*(int32_t *)(g23 - 0x4a90) = 0;
	*(int32_t *)(g23 - 0x4a94) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x6ebc) = 1;
	int32_t result = function_6c63c(); // 0xc57dc
	return result;
}

// Address range: 0xc57f0 - 0xc6588
int32_t TalkToTowner(int32_t a1, int32_t a2)
{
	// 0xc57f0
	g35 = a1;
	g36 = a2;
	g27 = *(int32_t *)(g23 - 0x77f0);
	g28 = *(int32_t *)(g23 - 0x6ebc);
	g29 = *(int32_t *)(g23 - 0x7730);
	g37 = 3;
	g30 = *(int32_t *)(g23 - 0x77a8);
	g32 = *(int32_t *)(g23 - 0x7604);
	g33 = *(int32_t *)(g23 - 0x7758);
	random(6);
	g37 = 4;
	random(6);
	g37 = 5;
	random(6);
	int32_t v1 = 0x55ec * g35; // 0xc5848
	g25 = v1;
	int32_t v2 = 268 * g36; // 0xc584c
	g26 = v2;
	int32_t v3 = g30 + v1;     // 0xc5850
	int32_t v4 = g33 + v2 + 8; // 0xc585c
	g21 = v4;
	g34 = *(int32_t *)(v3 + 56) - *(int32_t *)v4;
	int32_t v5 = abs();          // 0xc5864
	int32_t v6 = g26 + g33 + 12; // 0xc5870
	g22 = v6;
	g34 = *(int32_t *)(v3 + 60) - *(int32_t *)v6;
	int32_t result = abs(); // 0xc587c
	if (v5 > 1) {
		// 0xc6574
		return result;
	}
	// 0xc5888
	if (result < 2) {
		// 0xc5894
		if (*(char *)g29 == 0) {
			int32_t v7 = *(int32_t *)(g23 - 0x7744); // 0xc58a8
			int32_t v8 = g26 + g33 + 88;             // 0xc58ac
			*(int32_t *)v8 = 0;
			g24 = v8;
			if (*(int32_t *)v7 >= 12) {
				int32_t result2 = DropItemBeforeTrig(v7); // 0xc58bc
				if (result2 == 0) {
					// 0xc6574
					return result2;
				}
			}
			// 0xc58c8
			int32_t result3; // r3
			int32_t v9;      // r4
			int32_t v10;     // bp-60
			if (g36 == GetActiveTowner(3)) {
				int32_t v11 = g30; // 0xc58d8
				int32_t v12 = g25; // 0xc58d8
				int32_t v13 = v12; // 0xc5914
				int32_t v14 = v11; // 0xc5914
				if (*(char *)(v12 + v11 + 496) == 0) {
					// 0xc58e8
					if (*(int32_t *)g24 == 0) {
						int32_t v15 = g26 + g33; // 0xc58f4
						*(int32_t *)(v15 + 80) = 150;
						g34 = 258;
						*(int32_t *)(v15 + 144) = g35;
						function_6c63c();
						*(int32_t *)g24 = 1;
						v13 = g25;
						v14 = g30;
						// branch -> 0xc5914
					} else {
						v13 = v12;
						v14 = v11;
					}
				}
				int32_t v16 = v14 + v13; // 0xc5914
				int32_t v17;             // 0xc5930
				int32_t v18;             // 0xc59b0
				int32_t v19;             // 0xc5930
				char *v20;               // 0xc596c
				char *v21;               // 0xc5948
				int32_t v22;             // 0xc5984
				char *v23;               // 0xc59c0
				if (*(char *)(v16 + 498) == 0) {
					// 0xc5924
					if (*(char *)(v16 + 500) != 0) {
						// 0xc5930
						v17 = g32;
						v19 = v17 + 290;
						g31 = v19;
						if (*(char *)v19 != 0) {
							// 0xc5944
							v21 = (char *)(v17 + 304);
							v18 = v19;
							if (*v21 == 0) {
								// 0xc5954
								if (*(int32_t *)g24 == 0) {
									// 0xc5960
									result3 = 1;
									*v21 = 1;
									*(int32_t *)(g32 + 308) = result3;
									v20 = (char *)g31;
									if (*v20 == 1) {
										// 0xc5978
										*v20 = 2;
										*(char *)(g32 + 303) = (char)result3;
										// branch -> 0xc5984
									}
									// 0xc5984
									v22 = g26 + g33;
									*(int32_t *)(v22 + 80) = 150;
									g34 = 1;
									*(int32_t *)(v22 + 144) = g35;
									function_6c63c();
									*(int32_t *)g24 = 1;
									function_8b520(1, 12);
									v18 = g31;
									// branch -> 0xc59b0
								} else {
									v18 = v19;
								}
							}
							// 0xc59b0
							if (*(char *)v18 == 3) {
								// 0xc59bc
								v23 = (char *)(g32 + 304);
								if (*v23 == 1) {
									// 0xc59cc
									if (*(int32_t *)g24 == 0) {
										// 0xc59d8
										v9 = g26 + g33;
										*v23 = 2;
										g34 = 3;
										*(char *)(g32 + 303) = (char)2;
										*(int32_t *)(v9 + 80) = 150;
										*(int32_t *)(v9 + 144) = g35;
										function_6c63c();
										*(int32_t *)g24 = 1;
										function_8b520(1, 12);
										// branch -> 0xc5a10
									}
								}
							}
						}
					}
				} else {
					// 0xc5930
					v17 = g32;
					v19 = v17 + 290;
					g31 = v19;
					if (*(char *)v19 != 0) {
						// 0xc5944
						v21 = (char *)(v17 + 304);
						v18 = v19;
						if (*v21 == 0) {
							// 0xc5954
							if (*(int32_t *)g24 == 0) {
								// 0xc5960
								result3 = 1;
								*v21 = 1;
								*(int32_t *)(g32 + 308) = result3;
								v20 = (char *)g31;
								if (*v20 == 1) {
									// 0xc5978
									*v20 = 2;
									*(char *)(g32 + 303) = (char)result3;
									// branch -> 0xc5984
								}
								// 0xc5984
								v22 = g26 + g33;
								*(int32_t *)(v22 + 80) = 150;
								g34 = 1;
								*(int32_t *)(v22 + 144) = g35;
								function_6c63c();
								*(int32_t *)g24 = 1;
								function_8b520(1, 12);
								v18 = g31;
								// branch -> 0xc59b0
							} else {
								v18 = v19;
							}
						}
						// 0xc59b0
						if (*(char *)v18 == 3) {
							// 0xc59bc
							v23 = (char *)(g32 + 304);
							if (*v23 == 1) {
								// 0xc59cc
								if (*(int32_t *)g24 == 0) {
									// 0xc59d8
									v9 = g26 + g33;
									*v23 = 2;
									g34 = 3;
									*(char *)(g32 + 303) = (char)2;
									*(int32_t *)(v9 + 80) = 150;
									*(int32_t *)(v9 + 144) = g35;
									function_6c63c();
									*(int32_t *)g24 = 1;
									function_8b520(1, 12);
									// branch -> 0xc5a10
								}
							}
						}
					}
				}
				// 0xc5a10
				if (*(char *)g27 == 1) {
					// 0xc5a1c
					if (*(char *)(g25 + g30 + 499) != 0) {
						int32_t v24 = g32;       // 0xc5a2c
						int32_t v25 = v24 + 170; // 0xc5a2c
						g25 = v25;
						unsigned char v26 = *(char *)v25; // 0xc5a30
						if (v26 != 0) {
							int32_t v27 = v24; // 0xc5aac
							if (((int32_t)v26 + 255) % 256 <= 1) {
								char *v28 = (char *)(v24 + 184); // 0xc5a50
								if (*v28 == 0) {
									// 0xc5a5c
									if (*(int32_t *)g24 == 0) {
										// 0xc5a68
										*v28 = 1;
										if (*(char *)g25 == 1) {
											// 0xc5a7c
											*(char *)(g32 + 183) = (char)1;
											*(char *)g25 = 2;
											// branch -> 0xc5a88
										}
										// 0xc5a88
										g27 = 1;
										v9 = g26 + g33;
										*(int32_t *)(g32 + 188) = 1;
										g34 = 12;
										*(int32_t *)(v9 + 80) = 150;
										*(int32_t *)(v9 + 144) = g35;
										function_6c63c();
										*(int32_t *)g24 = g27;
										v27 = g32;
										// branch -> 0xc5aac
									} else {
										v27 = v24;
									}
								} else {
									v27 = v24;
								}
							}
							// 0xc5aac
							if (*(char *)(v27 + 184) == 1) {
								// 0xc5ab8
								if (function_c5638(g35, 12, &v10) != 0) {
									// 0xc5ad0
									if (*(int32_t *)g24 == 0) {
										// 0xc5adc
										*(char *)g25 = 3;
										*(char *)(g32 + 183) = (char)3;
										g37 = v10;
										function_591d8(g35);
										function_60128(5, *(int32_t *)g21, *(int32_t *)g22 + 1);
										int32_t v29 = g26 + g33; // 0xc5b08
										*(int32_t *)(v29 + 80) = 150;
										g34 = 13;
										*(int32_t *)(v29 + 144) = g35;
										function_6c63c();
										*(int32_t *)g24 = 1;
										// branch -> 0xc5b28
									}
								}
							}
						}
					}
				}
				// 0xc5b28
				if (*(char *)g29 == 0) {
					// 0xc5b34
					g34 = 160;
					function_c57b4(160, g36);
					if (*(int32_t *)g28 != 0) {
						// 0xc5b4c
						function_ba888(21);
						// branch -> 0xc6574
					}
				}
			} else {
				// 0xc5b58
				if (g36 == GetActiveTowner(2)) {
					int32_t v30 = g32;               // 0xc5b68
					char *v31 = (char *)(v30 + 146); // 0xc5b6c
					unsigned char v32 = *v31;        // 0xc5b6c
					result3 = v32;
					if (v32 == 2) {
						int32_t v33 = v30 + 159; // 0xc5b78
						if (*(char *)v33 == 1) {
							int32_t v34 = g26 + g33; // 0xc5b88
							result3 = v34;
							*(int32_t *)(v34 + 80) = 150;
							*(int32_t *)(result3 + 144) = g35;
							*(char *)v33 = (char)1;
							int32_t v35 = g25 + g30 + 348; // 0xc5ba4
							int32_t v36 = v35;             // 0xc5bcc
							int32_t v37;                   // 0xc5bdc
							int32_t v38;                   // 0xc5c04
							if (*(char *)v35 != 0) {
								// 0xc5bcc
								if (*(char *)v36 != 1) {
									// 0xc5bf4
									if (*(char *)v36 == 2) {
										// 0xc5c00
										v38 = effect_is_playing(515);
										result3 = v38;
										if (v38 == 0) {
											// 0xc5c10
											g34 = 515;
											result3 = PlaySFX(515);
											// branch -> 0xc5c18
										}
									}
									// 0xc5c18
									*(int32_t *)g24 = 1;
									// branch -> 0xc6574
									// 0xc6574
									return result3;
								}
								// 0xc5bd8
								v37 = effect_is_playing(618);
								result3 = v37;
								if (v37 == 0) {
									// 0xc5be8
									g34 = 618;
									result3 = PlaySFX(618);
									// branch -> 0xc5c18
								} else {
									// 0xc5bd8
									// branch -> 0xc5bf4
									// 0xc5bf4
									if (*(char *)v35 == 2) {
										// 0xc5c00
										v38 = effect_is_playing(515);
										result3 = v38;
										if (v38 == 0) {
											// 0xc5c10
											g34 = 515;
											result3 = PlaySFX(515);
											// branch -> 0xc5c18
										}
									}
								}
								// 0xc5c18
								*(int32_t *)g24 = 1;
								// branch -> 0xc6574
								// 0xc6574
								return result3;
							}
							int32_t v39 = effect_is_playing(721); // 0xc5bb4
							result3 = v39;
							if (v39 == 0) {
								// 0xc5bc0
								g34 = 721;
								result3 = PlaySFX(721);
								// branch -> 0xc5c18
								// 0xc5c18
								*(int32_t *)g24 = 1;
								// branch -> 0xc6574
								// 0xc6574
								return result3;
							}
							// 0xc5bb0
							v36 = v35;
							// branch -> 0xc5bcc
							// 0xc5bcc
							if (*(char *)v36 != 1) {
								// 0xc5bf4
								if (*(char *)v36 == 2) {
									// 0xc5c00
									v38 = effect_is_playing(515);
									result3 = v38;
									if (v38 == 0) {
										// 0xc5c10
										g34 = 515;
										result3 = PlaySFX(515);
										// branch -> 0xc5c18
									}
								}
								// 0xc5c18
								*(int32_t *)g24 = 1;
								// branch -> 0xc6574
								// 0xc6574
								return result3;
							}
							// 0xc5bd8
							v37 = effect_is_playing(618);
							result3 = v37;
							if (v37 == 0) {
								// 0xc5be8
								g34 = 618;
								result3 = PlaySFX(618);
								// branch -> 0xc5c18
							} else {
								// 0xc5bd8
								// branch -> 0xc5bf4
								// 0xc5bf4
								if (*(char *)v35 == 2) {
									// 0xc5c00
									v38 = effect_is_playing(515);
									result3 = v38;
									if (v38 == 0) {
										// 0xc5c10
										g34 = 515;
										result3 = PlaySFX(515);
										// branch -> 0xc5c18
									}
								}
							}
							// 0xc5c18
							*(int32_t *)g24 = 1;
							// branch -> 0xc6574
							// 0xc6574
							return result3;
						}
					}
					// 0xc5c24
					if (v32 == 3) {
						char *v40 = (char *)(v30 + 159); // 0xc5c30
						if (*v40 == 1) {
							// 0xc5c3c
							result3 = g26 + g33;
							*v40 = 1;
							*(int32_t *)(result3 + 80) = 150;
							*(int32_t *)(result3 + 144) = g35;
							*(int32_t *)g24 = 1;
							// branch -> 0xc6574
							// 0xc6574
							return result3;
						}
					}
					// 0xc5c5c
					if (v32 == 1) {
						// 0xc5c78
						v9 = g26 + g33;
						*v31 = 2;
						g21 = 1;
						*(int32_t *)(g32 + 164) = 1;
						*(char *)(g32 + 158) = (char)63;
						g34 = 63;
						*(char *)(g32 + 159) = (char)g21;
						*(int32_t *)(v9 + 80) = 50;
						*(int32_t *)(v9 + 144) = g35;
						*(int32_t *)(v9 + 148) = 3;
						function_6c63c();
						*(int32_t *)g24 = g21;
						result3 = function_8b520(1, 6);
						// branch -> 0xc6574
					} else {
						// 0xc5c64
						if (v32 == 2) {
							// 0xc5c6c
							if (*(char *)(v30 + 159) == 0) {
								// 0xc5c78
								v9 = g26 + g33;
								*v31 = 2;
								g21 = 1;
								*(int32_t *)(g32 + 164) = 1;
								*(char *)(g32 + 158) = (char)63;
								g34 = 63;
								*(char *)(g32 + 159) = (char)g21;
								*(int32_t *)(v9 + 80) = 50;
								*(int32_t *)(v9 + 144) = g35;
								*(int32_t *)(v9 + 148) = 3;
								function_6c63c();
								*(int32_t *)g24 = g21;
								result3 = function_8b520(1, 6);
								// branch -> 0xc6574
							}
						}
					}
					// 0xc6574
					return result3;
				}
				// 0xc5cc8
				if (g36 != GetActiveTowner(0)) {
					int32_t v41 = GetActiveTowner(6); // 0xc5f50
					result3 = v41;
					if (g36 == v41) {
						int32_t v42 = g32 + 26; // 0xc5f5c
						g21 = v42;
						int32_t v43;       // 0xc5fd0
						int32_t v44;       // 0xc6050
						int32_t v45;       // 0xc60fc
						int32_t v46;       // 0xc6060
						int32_t v47;       // 0xc60a4
						int32_t v48;       // 0xc60d8
						int32_t v49;       // 0xc610c
						unsigned char v50; // 0xc5fd4
						int32_t v51;       // 0xc5ff4
						int32_t v52;       // 0xc6098
						int32_t v53;       // 0xc60f0
						if (*(char *)v42 == 1) {
							int32_t v54 = function_c5638(g35, 19, &v10); // 0xc5f78
							result3 = v54;
							if (v54 == 0) {
								// 0xc5f6c
								// branch -> 0xc5fc4
								// 0xc5fc4
								if (*(char *)g21 == 2) {
									// 0xc5fd0
									v43 = g32 + 39;
									v50 = *(char *)v43;
									if (v50 >= 2) {
										// 0xc5fe0
										if (v50 <= 4) {
											// 0xc5fe8
											v51 = function_c5638(g35, 17, &v10);
											result3 = v51;
											if (v51 == 0) {
												// 0xc6050
												v44 = g32 + 38;
												if (*(char *)v44 != -127) {
													// 0xc6060
													v46 = g26 + g33;
													*(int32_t *)(v46 + 80) = 150;
													g34 = 129;
													*(int32_t *)(v46 + 144) = g35;
													*(char *)v44 = (char)129;
													result3 = function_6c63c();
													*(int32_t *)g24 = 1;
													// branch -> 0xc6134
												}
											} else {
												// 0xc6000
												g37 = v10;
												function_591d8(g35);
												v9 = g26 + g33;
												*(char *)v43 = 5;
												*(int32_t *)(g31 + 68) = 123;
												*(int32_t *)(g31 + 388) = -1;
												g34 = 130;
												*(int32_t *)(v9 + 80) = 150;
												*(int32_t *)(v9 + 144) = g35;
												*(char *)(g32 + 38) = (char)130;
												result3 = function_6c63c();
												*(int32_t *)g24 = 1;
												// branch -> 0xc6134
											}
											// 0xc6134
											if (*(char *)g29 == 0) {
												// 0xc6140
												g34 = 212;
												result3 = function_c57b4(212, g36);
												if (*(int32_t *)g28 != 0) {
													// 0xc6158
													result3 = function_ba888(5);
													// branch -> 0xc6574
												}
											}
											// 0xc6574
											return result3;
										}
									}
									// 0xc608c
									v52 = function_c5638(g35, 20, &v10);
									g22 = v52;
									if (v52 == 0) {
										// 0xc60e4
										v53 = function_c5638(g35, 18, &v10);
										result3 = v53;
										if (v53 != 0) {
											// 0xc60fc
											v45 = g32 + 40;
											if (*(char *)v45 != -125) {
												// 0xc610c
												v49 = g26 + g33;
												*(int32_t *)(v49 + 80) = 150;
												g34 = 131;
												*(int32_t *)(v49 + 144) = g35;
												*(char *)v45 = (char)131;
												result3 = function_6c63c();
												*(int32_t *)g24 = 1;
												// branch -> 0xc6134
											}
										}
									} else {
										// 0xc60a4
										v47 = g26 + g33;
										*(int32_t *)(v47 + 80) = 150;
										g34 = 132;
										*(int32_t *)(v47 + 144) = g35;
										function_6c63c();
										*(char *)g21 = 3;
										*(int32_t *)g24 = 1;
										v48 = g23 + 0x3858 + 76 * *(int32_t *)(g22 + 360);
										result3 = v48;
										*(int32_t *)(v48 + 64) = 1;
										// branch -> 0xc6134
									}
									// 0xc6134
									if (*(char *)g29 == 0) {
										// 0xc6140
										g34 = 212;
										result3 = function_c57b4(212, g36);
										if (*(int32_t *)g28 != 0) {
											// 0xc6158
											result3 = function_ba888(5);
											// branch -> 0xc6574
										}
									}
									// 0xc6574
									return result3;
								}
							} else {
								// 0xc5f84
								g37 = v10;
								function_591d8(g35);
								v9 = g26 + g33;
								*(char *)g21 = 2;
								g21 = 1;
								*(int32_t *)(g32 + 44) = 1;
								g34 = 128;
								*(char *)(g32 + 39) = (char)2;
								*(int32_t *)(v9 + 80) = 150;
								*(int32_t *)(v9 + 144) = g35;
								result3 = function_6c63c();
								*(int32_t *)g24 = g21;
								// branch -> 0xc6134
							}
							// 0xc6134
							if (*(char *)g29 == 0) {
								// 0xc6140
								g34 = 212;
								result3 = function_c57b4(212, g36);
								if (*(int32_t *)g28 != 0) {
									// 0xc6158
									result3 = function_ba888(5);
									// branch -> 0xc6574
								}
							}
							// 0xc6574
							return result3;
						}
						// 0xc5fc4
						if (*(char *)v42 == 2) {
							// 0xc5fd0
							v43 = g32 + 39;
							v50 = *(char *)v43;
							if (v50 >= 2) {
								// 0xc5fe0
								if (v50 <= 4) {
									// 0xc5fe8
									v51 = function_c5638(g35, 17, &v10);
									result3 = v51;
									if (v51 == 0) {
										// 0xc6050
										v44 = g32 + 38;
										if (*(char *)v44 != -127) {
											// 0xc6060
											v46 = g26 + g33;
											*(int32_t *)(v46 + 80) = 150;
											g34 = 129;
											*(int32_t *)(v46 + 144) = g35;
											*(char *)v44 = (char)129;
											result3 = function_6c63c();
											*(int32_t *)g24 = 1;
											// branch -> 0xc6134
										}
									} else {
										// 0xc6000
										g37 = v10;
										function_591d8(g35);
										v9 = g26 + g33;
										*(char *)v43 = 5;
										*(int32_t *)(g31 + 68) = 123;
										*(int32_t *)(g31 + 388) = -1;
										g34 = 130;
										*(int32_t *)(v9 + 80) = 150;
										*(int32_t *)(v9 + 144) = g35;
										*(char *)(g32 + 38) = (char)130;
										result3 = function_6c63c();
										*(int32_t *)g24 = 1;
										// branch -> 0xc6134
									}
									// 0xc6134
									if (*(char *)g29 == 0) {
										// 0xc6140
										g34 = 212;
										result3 = function_c57b4(212, g36);
										if (*(int32_t *)g28 != 0) {
											// 0xc6158
											result3 = function_ba888(5);
											// branch -> 0xc6574
										}
									}
									// 0xc6574
									return result3;
								}
							}
							// 0xc608c
							v52 = function_c5638(g35, 20, &v10);
							g22 = v52;
							if (v52 == 0) {
								// 0xc60e4
								v53 = function_c5638(g35, 18, &v10);
								result3 = v53;
								if (v53 != 0) {
									// 0xc60fc
									v45 = g32 + 40;
									if (*(char *)v45 != -125) {
										// 0xc610c
										v49 = g26 + g33;
										*(int32_t *)(v49 + 80) = 150;
										g34 = 131;
										*(int32_t *)(v49 + 144) = g35;
										*(char *)v45 = (char)131;
										result3 = function_6c63c();
										*(int32_t *)g24 = 1;
										// branch -> 0xc6134
									}
								}
							} else {
								// 0xc60a4
								v47 = g26 + g33;
								*(int32_t *)(v47 + 80) = 150;
								g34 = 132;
								*(int32_t *)(v47 + 144) = g35;
								function_6c63c();
								*(char *)g21 = 3;
								*(int32_t *)g24 = 1;
								v48 = g23 + 0x3858 + 76 * *(int32_t *)(g22 + 360);
								result3 = v48;
								*(int32_t *)(v48 + 64) = 1;
								// branch -> 0xc6134
							}
							// 0xc6134
							if (*(char *)g29 == 0) {
								// 0xc6140
								g34 = 212;
								result3 = function_c57b4(212, g36);
								if (*(int32_t *)g28 != 0) {
									// 0xc6158
									result3 = function_ba888(5);
									// branch -> 0xc6574
								}
							}
							// 0xc6574
							return result3;
						}
						// 0xc6134
						if (*(char *)g29 == 0) {
							// 0xc6140
							g34 = 212;
							result3 = function_c57b4(212, g36);
							if (*(int32_t *)g28 != 0) {
								// 0xc6158
								result3 = function_ba888(5);
								// branch -> 0xc6574
							}
						}
						// 0xc6574
						return result3;
					}
					int32_t v55 = GetActiveTowner(7); // 0xc6168
					result3 = v55;
					if (g36 == v55) {
						// 0xc6174
						if (*(char *)g29 == 0) {
							// 0xc6180
							g34 = 179;
							result3 = function_c57b4(179, v55);
							if (*(int32_t *)g28 != 0) {
								// 0xc6198
								result3 = function_ba888(23);
								// branch -> 0xc6574
							}
						}
						// 0xc6574
						return result3;
					}
					int32_t v56 = GetActiveTowner(5); // 0xc61a8
					result3 = v56;
					if (g36 == v56) {
						// 0xc61b4
						if (*(char *)g29 == 0) {
							// 0xc61c0
							g34 = 200;
							result3 = function_c57b4(200, v56);
							if (*(int32_t *)g28 != 0) {
								// 0xc61d8
								result3 = function_ba888(22);
								// branch -> 0xc6574
							}
						}
						// 0xc6574
						return result3;
					}
					int32_t v57 = GetActiveTowner(1); // 0xc61e8
					result3 = v57;
					if (g36 == v57) {
						// 0xc61f4
						if (*(char *)g27 == 1) {
							int32_t v58 = g25 + g30; // 0xc6200
							result3 = v58;
							int32_t v59; // 0xc62bc
							int32_t v60; // 0xc62e0
							if (*(char *)(v58 + 497) != 0) {
								// 0xc6210
								if (*(int32_t *)g24 == 0) {
									int32_t v61 = g32;       // 0xc621c
									int32_t v62 = v61 + 314; // 0xc621c
									result3 = v62;
									char *v63 = (char *)v62;  // 0xc6220
									unsigned char v64 = *v63; // 0xc6220
									if (v64 == 1) {
										// 0xc622c
										v9 = g26 + g33;
										*v63 = 2;
										g25 = 1;
										*(int32_t *)(g32 + 332) = 1;
										g34 = 39;
										*(char *)(g32 + 326) = (char)39;
										*(char *)(g32 + 327) = (char)g25;
										*(int32_t *)(v9 + 80) = 150;
										*(int32_t *)(v9 + 144) = g35;
										result3 = function_6c63c();
										*(int32_t *)g24 = g25;
										// branch -> 0xc62bc
									} else {
										// 0xc6268
										if (v64 == 3) {
											int32_t v65 = v61 + 327; // 0xc6270
											result3 = v65;
											char *v66 = (char *)v65; // 0xc6274
											if (*v66 != 2) {
												// 0xc6280
												v9 = g26 + g33;
												*v66 = 2;
												g34 = 41;
												*(int32_t *)(v9 + 80) = 150;
												*(int32_t *)(v9 + 144) = g35;
												function_6c63c();
												result3 = function_60128(4, *(int32_t *)g21, *(int32_t *)g22 + 1);
												*(int32_t *)g24 = 1;
												// branch -> 0xc62bc
											}
										}
									}
									// 0xc62bc
									v59 = g32;
									if (*(char *)(v59 + 26) == 2) {
										// 0xc62c8
										if (*(char *)(v59 + 38) == -126) {
											// 0xc62d4
											v60 = function_c5638(g35, 18, &v10);
											result3 = v60;
											if (v60 != 0) {
												// 0xc62ec
												g37 = v10;
												function_591d8(g35);
												function_60808(20, *(int32_t *)g21, *(int32_t *)g22 + 1, 0, 0);
												g34 = 124;
												result3 = function_6c63c();
												*(char *)(g32 + 39) = 7;
												*(int32_t *)(g31 + 68) = -1;
												// branch -> 0xc632c
											}
										}
									}
									// 0xc632c
									if (*(char *)g29 == 0) {
										// 0xc6338
										g34 = 169;
										result3 = function_c57b4(169, g36);
										if (*(int32_t *)g28 != 0) {
											// 0xc6350
											result3 = function_ba888(14);
											// branch -> 0xc6574
										}
									}
									// 0xc6574
									return result3;
								}
							}
							// 0xc62bc
							v59 = g32;
							if (*(char *)(v59 + 26) == 2) {
								// 0xc62c8
								if (*(char *)(v59 + 38) == -126) {
									// 0xc62d4
									v60 = function_c5638(g35, 18, &v10);
									result3 = v60;
									if (v60 != 0) {
										// 0xc62ec
										g37 = v10;
										function_591d8(g35);
										function_60808(20, *(int32_t *)g21, *(int32_t *)g22 + 1, 0, 0);
										g34 = 124;
										result3 = function_6c63c();
										*(char *)(g32 + 39) = 7;
										*(int32_t *)(g31 + 68) = -1;
										// branch -> 0xc632c
									}
								}
							}
						}
						// 0xc632c
						if (*(char *)g29 == 0) {
							// 0xc6338
							g34 = 169;
							result3 = function_c57b4(169, g36);
							if (*(int32_t *)g28 != 0) {
								// 0xc6350
								result3 = function_ba888(14);
								// branch -> 0xc6574
							}
						}
						// 0xc6574
						return result3;
					}
					int32_t v67 = GetActiveTowner(8); // 0xc6360
					result3 = v67;
					if (g36 == v67) {
						// 0xc636c
						if (*(char *)g29 == 0) {
							// 0xc6378
							g34 = 224;
							result3 = function_c57b4(224, v67);
							if (*(int32_t *)g28 != 0) {
								// 0xc6390
								result3 = function_ba888(12);
								// branch -> 0xc6574
							}
						}
						// 0xc6574
						return result3;
					}
					int32_t v68 = GetActiveTowner(4); // 0xc63a0
					result3 = v68;
					if (g36 == v68) {
						// 0xc63ac
						int32_t v69;       // 0xc6474
						int32_t v70;       // 0xc6480
						int32_t v71;       // 0xc64cc
						int32_t v72;       // 0xc6490
						char *v73;         // 0xc64d0
						unsigned char v74; // 0xc6474
						if (*(char *)g27 == 1) {
							int32_t v75 = g32 + 362; // 0xc63b8
							g22 = v75;
							int32_t v76; // 0xc642c
							char *v77;   // 0xc6430
							if (*(char *)v75 == 1) {
								int32_t v78 = function_c5638(g35, 33, &v10); // 0xc63d4
								result3 = v78;
								if (v78 == 0) {
									// 0xc63c8
									// branch -> 0xc6420
									// 0xc6420
									if (*(char *)g22 == 3) {
										// 0xc642c
										v76 = g32 + 375;
										result3 = v76;
										v77 = (char *)v76;
										if (*v77 == 7) {
											// 0xc643c
											v9 = g26 + g33;
											*v77 = 8;
											g34 = 25;
											*(int32_t *)(v9 + 80) = 150;
											*(int32_t *)(v9 + 144) = g35;
											result3 = function_6c63c();
											*(int32_t *)g24 = 1;
											*(int32_t *)(g32 + 140) = 1;
											// branch -> 0xc6468
										}
									}
								} else {
									// 0xc63e0
									g37 = v10;
									function_591d8(g35);
									g21 = 2;
									v9 = g26 + g33;
									*(char *)(g32 + 375) = 2;
									g34 = 23;
									*(int32_t *)(v9 + 80) = 150;
									*(int32_t *)(v9 + 144) = g35;
									result3 = function_6c63c();
									*(int32_t *)g24 = 1;
									*(char *)g22 = (char)g21;
									*(int32_t *)(g32 + 380) = 1;
									// branch -> 0xc6468
								}
								// 0xc6468
								if (*(char *)g27 != 1) {
									// 0xc6474
									v69 = g32;
									v74 = *(char *)(v69 + 362);
									result3 = v74;
									if (v74 == 2) {
										// 0xc6480
										v70 = v69 + 380;
										g21 = v70;
										if (*(int32_t *)v70 == 0) {
											// 0xc6490
											v72 = g26 + g33;
											*(int32_t *)(v72 + 80) = 150;
											g34 = 23;
											*(int32_t *)(v72 + 144) = g35;
											function_6c63c();
											*(int32_t *)g24 = 1;
											*(int32_t *)g21 = 1;
											result3 = function_8b520(1, 15);
											// branch -> 0xc6520
											// 0xc6520
											if (*(char *)g29 == 0) {
												// 0xc652c
												g34 = 150;
												result3 = function_c57b4(150, g36);
												if (*(int32_t *)g28 != 0) {
													// 0xc6544
													result3 = function_ba888(15);
													// branch -> 0xc6574
												}
											}
											// 0xc6574
											return result3;
										}
									}
									// 0xc64c4
									if (v74 == 3) {
										// 0xc64cc
										v71 = v69 + 375;
										result3 = v71;
										v73 = (char *)v71;
										if (*v73 == 7) {
											// 0xc64dc
											v9 = g26 + g33;
											*v73 = 8;
											g34 = 25;
											*(int32_t *)(v9 + 80) = 150;
											*(int32_t *)(v9 + 144) = g35;
											function_6c63c();
											g21 = 1;
											*(int32_t *)g24 = 1;
											function_8b520(1, 15);
											*(int32_t *)(g32 + 140) = g21;
											result3 = function_8b520(1, 5);
											// branch -> 0xc6520
										}
									}
								}
								// 0xc6520
								if (*(char *)g29 == 0) {
									// 0xc652c
									g34 = 150;
									result3 = function_c57b4(150, g36);
									if (*(int32_t *)g28 != 0) {
										// 0xc6544
										result3 = function_ba888(15);
										// branch -> 0xc6574
									}
								}
								// 0xc6574
								return result3;
							}
							// 0xc6420
							if (*(char *)v75 == 3) {
								// 0xc642c
								v76 = g32 + 375;
								result3 = v76;
								v77 = (char *)v76;
								if (*v77 == 7) {
									// 0xc643c
									v9 = g26 + g33;
									*v77 = 8;
									g34 = 25;
									*(int32_t *)(v9 + 80) = 150;
									*(int32_t *)(v9 + 144) = g35;
									result3 = function_6c63c();
									*(int32_t *)g24 = 1;
									*(int32_t *)(g32 + 140) = 1;
									// branch -> 0xc6468
								}
							}
						}
						// 0xc6468
						if (*(char *)g27 != 1) {
							// 0xc6474
							v69 = g32;
							v74 = *(char *)(v69 + 362);
							result3 = v74;
							if (v74 == 2) {
								// 0xc6480
								v70 = v69 + 380;
								g21 = v70;
								if (*(int32_t *)v70 == 0) {
									// 0xc6490
									v72 = g26 + g33;
									*(int32_t *)(v72 + 80) = 150;
									g34 = 23;
									*(int32_t *)(v72 + 144) = g35;
									function_6c63c();
									*(int32_t *)g24 = 1;
									*(int32_t *)g21 = 1;
									result3 = function_8b520(1, 15);
									// branch -> 0xc6520
									// 0xc6520
									if (*(char *)g29 == 0) {
										// 0xc652c
										g34 = 150;
										result3 = function_c57b4(150, g36);
										if (*(int32_t *)g28 != 0) {
											// 0xc6544
											result3 = function_ba888(15);
											// branch -> 0xc6574
										}
									}
									// 0xc6574
									return result3;
								}
							}
							// 0xc64c4
							if (v74 == 3) {
								// 0xc64cc
								v71 = v69 + 375;
								result3 = v71;
								v73 = (char *)v71;
								if (*v73 == 7) {
									// 0xc64dc
									v9 = g26 + g33;
									*v73 = 8;
									g34 = 25;
									*(int32_t *)(v9 + 80) = 150;
									*(int32_t *)(v9 + 144) = g35;
									function_6c63c();
									g21 = 1;
									*(int32_t *)g24 = 1;
									function_8b520(1, 15);
									*(int32_t *)(g32 + 140) = g21;
									result3 = function_8b520(1, 5);
									// branch -> 0xc6520
								}
							}
						}
						// 0xc6520
						if (*(char *)g29 == 0) {
							// 0xc652c
							g34 = 150;
							result3 = function_c57b4(150, g36);
							if (*(int32_t *)g28 != 0) {
								// 0xc6544
								result3 = function_ba888(15);
								// branch -> 0xc6574
							}
						}
					} else {
						int32_t v79 = g26 + g33; // 0xc6550
						result3 = v79;
						if (*(int32_t *)(v79 + 4) == 9) {
							// 0xc6560
							if (*(char *)g29 == 0) {
								// 0xc656c
								result3 = CowSFX(g35);
								// branch -> 0xc6574
							}
						}
					}
					// 0xc6574
					return result3;
				}
				// 0xc5cd8
				if (*(char *)g27 == 1) {
					// 0xc5ce4
					if (*(char *)(g25 + g30 + 500) != 0) {
						int32_t v80 = g32;     // 0xc5cf4
						int32_t v81 = v80 + 2; // 0xc5cf4
						g27 = v81;
						if (*(char *)v81 != 0) {
							char *v82 = (char *)(v80 + 16); // 0xc5d0c
							if (*v82 == 0) {
								// 0xc5d18
								result3 = 1;
								*v82 = 1;
								*(int32_t *)(g32 + 20) = result3;
								char *v83 = (char *)g27; // 0xc5d24
								if (*v83 == 1) {
									// 0xc5d30
									*v83 = 2;
									*(char *)(g32 + 15) = (char)result3;
									// branch -> 0xc5d3c
								}
								int32_t v84 = g26 + g33; // 0xc5d3c
								*(int32_t *)(v84 + 80) = 150;
								g34 = 115;
								*(int32_t *)(v84 + 144) = g35;
								function_6c63c();
								*(int32_t *)g24 = 1;
								// branch -> 0xc5d5c
							}
							int32_t v85 = g32 + 16; // 0xc5d5c
							if (*(char *)v85 == 1) {
								// 0xc5d6c
								if (function_c5638(g35, 9, &v10) != 0) {
									// 0xc5d84
									if (*(int32_t *)g24 == 0) {
										// 0xc5d90
										*(char *)g27 = 3;
										*(char *)v85 = 2;
										*(char *)(g32 + 15) = (char)2;
										g37 = v10;
										function_591d8(g35);
										function_60128(2, *(int32_t *)g21, *(int32_t *)g22 + 1);
										int32_t v86 = g26 + g33; // 0xc5dc4
										*(int32_t *)(v86 + 80) = 150;
										g34 = 117;
										*(int32_t *)(v86 + 144) = g35;
										function_6c63c();
										*(int32_t *)g24 = 1;
										// branch -> 0xc5de4
									}
								}
							}
						}
					}
					// 0xc5de4
					if (*(char *)(g25 + g30 + 505) != 0) {
						int32_t v87 = g32;       // 0xc5df4
						int32_t v88 = v87 + 242; // 0xc5df4
						g25 = v88;
						unsigned char v89 = *(char *)v88; // 0xc5df8
						if (v89 != 0) {
							int32_t v90 = v87; // 0xc5e94
							int32_t v91;       // 0xc5e94
							int32_t v92;       // 0xc5efc
							if (((int32_t)v89 + 255) % 256 <= 1) {
								char *v93 = (char *)(v87 + 256); // 0xc5e18
								if (*v93 == 0) {
									// 0xc5e24
									if (*(int32_t *)g24 == 0) {
										unsigned char v94 = *(char *)(v87 + 16); // 0xc5e30
										result3 = v94;
										char *v95;   // 0xc5e5c
										int32_t v96; // 0xc5e74
										if (v94 != 2) {
											// 0xc5e3c
											v90 = v87;
											if (*(char *)(v87 + 2) == 2) {
												// 0xc5e48
												if (v94 == 1) {
													// 0xc5e50
													result3 = 1;
													*v93 = 1;
													*(int32_t *)(g32 + 260) = result3;
													v95 = (char *)g25;
													if (*v95 == 1) {
														// 0xc5e68
														*v95 = 2;
														*(char *)(g32 + 255) = (char)result3;
														// branch -> 0xc5e74
													}
													// 0xc5e74
													v96 = g26 + g33;
													*(int32_t *)(v96 + 80) = 150;
													g34 = 88;
													*(int32_t *)(v96 + 144) = g35;
													result3 = function_6c63c();
													*(int32_t *)g24 = 1;
													v90 = g32;
													// branch -> 0xc5e94
												} else {
													v90 = v87;
												}
											}
											// 0xc5e94
											v91 = v90 + 256;
											if (*(char *)v91 == 1) {
												int32_t v97 = function_c5638(g35, 16, &v10); // 0xc5eb0
												result3 = v97;
												if (v97 != 0) {
													// 0xc5ebc
													if (*(int32_t *)g24 == 0) {
														// 0xc5ec8
														*(char *)g25 = 3;
														*(char *)v91 = 2;
														*(char *)(g32 + 255) = (char)2;
														g37 = v10;
														function_591d8(g35);
														function_60128(8, *(int32_t *)g21, *(int32_t *)g22 + 1);
														v92 = g26 + g33;
														*(int32_t *)(v92 + 80) = 150;
														g34 = 90;
														*(int32_t *)(v92 + 144) = g35;
														result3 = function_6c63c();
														*(int32_t *)g24 = 1;
														// branch -> 0xc5f1c
													}
												}
											}
											// 0xc5f1c
											if (*(char *)g29 == 0) {
												// 0xc5f28
												g34 = 188;
												result3 = function_c57b4(188, g36);
												if (*(int32_t *)g28 != 0) {
													// 0xc5f40
													result3 = function_ba888(1);
													// branch -> 0xc6574
												}
											}
											// 0xc6574
											return result3;
										}
										// 0xc5e50
										result3 = 1;
										*v93 = 1;
										*(int32_t *)(g32 + 260) = result3;
										v95 = (char *)g25;
										if (*v95 == 1) {
											// 0xc5e68
											*v95 = 2;
											*(char *)(g32 + 255) = (char)result3;
											// branch -> 0xc5e74
										}
										// 0xc5e74
										v96 = g26 + g33;
										*(int32_t *)(v96 + 80) = 150;
										g34 = 88;
										*(int32_t *)(v96 + 144) = g35;
										function_6c63c();
										*(int32_t *)g24 = 1;
										v90 = g32;
										// branch -> 0xc5e94
									} else {
										v90 = v87;
									}
								} else {
									v90 = v87;
								}
							}
							// 0xc5e94
							v91 = v90 + 256;
							if (*(char *)v91 == 1) {
								// 0xc5ea4
								if (function_c5638(g35, 16, &v10) != 0) {
									// 0xc5ebc
									if (*(int32_t *)g24 == 0) {
										// 0xc5ec8
										*(char *)g25 = 3;
										*(char *)v91 = 2;
										*(char *)(g32 + 255) = (char)2;
										g37 = v10;
										function_591d8(g35);
										function_60128(8, *(int32_t *)g21, *(int32_t *)g22 + 1);
										v92 = g26 + g33;
										*(int32_t *)(v92 + 80) = 150;
										g34 = 90;
										*(int32_t *)(v92 + 144) = g35;
										function_6c63c();
										*(int32_t *)g24 = 1;
										// branch -> 0xc5f1c
									}
								}
							}
						}
					}
				}
				// 0xc5f1c
				if (*(char *)g29 == 0) {
					// 0xc5f28
					g34 = 188;
					function_c57b4(188, g36);
					if (*(int32_t *)g28 != 0) {
						// 0xc5f40
						function_ba888(1);
						// branch -> 0xc6574
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}
