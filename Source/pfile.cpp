
// Address range: 0x9fd1c - 0x9fdbc
int32_t pfile_check_available_space(int32_t a1)
{
	// 0x9fd1c
	g34 = a1;
	int32_t v1 = g36; // 0x9fd1c
	int32_t v2 = g10; // 0x9fd20
	g36 = 0;
	int32_t v3 = g35; // 0x9fd28
	g35 = g34;
	int32_t v4; // 0x9fd60
	if (function_eb0e0() == 0) {
		// 0x9fd1c
		v4 = g36;
		// branch -> 0x9fd60
	} else {
		// 0x9fd48
		int32_t v5;       // bp-344
		int32_t v6 = &v5; // 0x9fd4c
		g34 = v6;
		function_eb0f8(v6, g35, 0);
		g36 = v5;
		v4 = v5;
		// branch -> 0x9fd60
	}
	// 0x9fd60
	g34 = v4;
	int32_t v7;                                                        // bp-266
	int32_t v8 = &v7;                                                  // 0x9fd64
	int32_t v9;                                                        // bp-268
	int32_t v10;                                                       // bp-272
	int32_t v11 = function_eb110(v4, v8, (int32_t)&v9, (int32_t)&v10); // 0x9fd70
	if ((0x10000 * v11 || 0xffff) >= 0x1ffff) {
		// 0x9fd90
		g34 = v8;
		function_ea618(v8);
		int32_t result = DiskFreeDlg(v8); // 0x9fda0
		// branch -> 0x9fda4
		// 0x9fda4
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result;
	}
	int32_t result2; // 0x9fdb8
	if (v10 <= 0x9fffff) {
		// 0x9fd90
		g34 = v8;
		function_ea618(v8);
		result2 = DiskFreeDlg(v8);
		// branch -> 0x9fda4
	} else {
		result2 = v10;
	}
	// 0x9fda4
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result2;
}

// Address range: 0x9fdbc - 0x9fe2c
int32_t pfile_init_save_directory(void)
{
	int32_t v1 = g10; // 0x9fdbc
	g37 = 260;
	int32_t v2;       // bp-264
	int32_t v3 = &v2; // 0x9fdcc
	g34 = v3;
	int32_t v4;
	int32_t result; // 0x9fe18
	if (function_eb0c8(v3, 260) == 0) {
		// 0x9fe14
		result = app_fatal(*(int32_t *)(v4 - 0x5a70));
		// branch -> 0x9fe1c
		// 0x9fe1c
		g10 = v1;
		return result;
	}
	// 0x9fde0
	pfile_check_available_space(v3);
	g37 = v3;
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x75c4); // 0x9fdf4
	g34 = v5;
	if (GetModuleFileName(v5, v3, 260) != 0) {
		int32_t result2 = pfile_check_available_space(v3);
		// branch -> 0x9fe1c
		// 0x9fe1c
		g10 = v1;
		return result2;
	}
	// 0x9fe14
	result = app_fatal(*(int32_t *)(v4 - 0x5a70));
	// branch -> 0x9fe1c
	// 0x9fe1c
	g10 = v1;
	return result;
}

// Address range: 0x9fe2c - 0x9fedc
int32_t pfile_get_save_path(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x9fe2c
	g34 = a1;
	int32_t v1 = g36; // 0x9fe2c
	int32_t v2 = g35; // 0x9fe38
	g35 = a2;
	int32_t v3 = g33; // 0x9fe40
	int32_t v4 = g34; // 0x9fe44
	g33 = v4;
	int32_t v5;
	if ((*(char *)*(int32_t *)(g23 - 0x77f0) || 1) == 1) {
		// 0x9fe74
		g36 = *(int32_t *)(g23 - 0x5a78);
		g37 = 260;
		v5 = function_eb0c8(v4, 260);
		// branch -> 0x9fe88
	} else {
		// 0x9fe5c
		g36 = *(int32_t *)(g23 - 0x5a74);
		g37 = 260;
		v5 = function_eb0c8(v4, 260);
		// branch -> 0x9fe88
	}
	// 0x9fe88
	if (v5 == 0) {
		// 0x9fe90
		int32_t v6;
		app_fatal(*(int32_t *)(v6 - 0x5a7c));
		// branch -> 0x9fe98
	}
	// 0x9fe98
	g37 = g36;
	g38 = g35;
	sprintf();
	int32_t v7; // bp-280
	function_e86d0(g33, (int32_t)&v7);
	int32_t v8 = g33; // 0x9feb4
	g34 = v8;
	g36 = v1;
	g35 = v2;
	g33 = v3;
	return function_eb230(v8);
}

// Address range: 0x9fedc - 0x9ff50
int32_t pfile_get_save_num_from_name(int32_t a1)
{
	int32_t v1 = g10;                        // 0x9fee0
	int32_t v2 = *(int32_t *)(g23 - 0x5a80); // 0x9fee4
	int32_t v3 = v2;                         // r31
	g34 = v2;
	int32_t result = 0;
	if (_strcmpi(v2, a1) == 0) {
		// 0x9ff30
		g10 = v1;
		return result;
	}
	int32_t result3; // 0x9ff20
	while (true) {
		// 0x9ff20
		result3 = result + 1;
		int32_t v4 = v3 + 32; // 0x9ff24
		v3 = v4;
		int32_t result2 = result3; // 0x9ff38
		if (result3 < 10) {
			// 0x9ff20
			g34 = v4;
			if (_strcmpi(v4, a1) == 0) {
				// break -> 0x9ff30
				break;
			}
			result = result3;
			// continue -> 0x9ff20
			continue;
		}
		// 0x9ff30
		g10 = v1;
		return result2;
	}
	// 0x9ff30
	g10 = v1;
	return result3;
}

// Address range: 0x9ff50 - 0x9fff4
int32_t function_9ff50(uint32_t a1, int32_t a2)
{
	// 0x9ff50
	g38 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x5a84); // 0x9ff64
	int32_t result;                          // 0x9fff0
	if ((*(char *)*(int32_t *)(g23 - 0x77f0) || 1) != 1) {
		// 0x9ff74
		if (a1 == 0) {
			// 0x9ff84
			// branch -> 0x9ffd4
			// 0x9ffd4
			g37 = v1;
			sprintf();
			result = 1;
			// branch -> 0x9ffe4
		} else {
			// 0x9ff7c
			result = 0;
			// branch -> 0x9ffe4
		}
		// 0x9ffe4
		return result;
	}
	// 0x9ff8c
	if (a1 <= 16) {
		// 0x9ff94
		// branch -> 0x9ffd4
		// 0x9ffd4
		g37 = *(int32_t *)(g23 - 0x5a88);
		sprintf();
		// branch -> 0x9ffe4
		// 0x9ffe4
		return 1;
	}
	// 0x9ff9c
	if (a1 <= 33) {
		// 0x9ffa4
		g38 = a1 - 17;
		// branch -> 0x9ffd4
		// 0x9ffd4
		g37 = *(int32_t *)(g23 - 0x5a8c);
		sprintf();
		// branch -> 0x9ffe4
		// 0x9ffe4
		return 1;
	}
	// 0x9ffb0
	if (a1 == 34) {
		// 0x9ffb4
		// branch -> 0x9ffd4
		// 0x9ffd4
		g37 = *(int32_t *)(g23 - 0x5a90);
		sprintf();
		// branch -> 0x9ffe4
		// 0x9ffe4
		return 1;
	}
	// 0x9ffbc
	if (a1 == 35) {
		// 0x9ffc4
		// branch -> 0x9ffd4
		// 0x9ffd4
		g37 = v1;
		sprintf();
		result = 1;
		// branch -> 0x9ffe4
	} else {
		// 0x9ffcc
		result = 0;
		// branch -> 0x9ffe4
	}
	// 0x9ffe4
	return result;
}

// Address range: 0x9fff4 - 0xa00f4
int32_t function_9fff4(int32_t *a1, int32_t a2)
{
	// 0x9fff4
	g37 = a2;
	int32_t v1 = (int32_t)a1; // r3
	*a1 = __asm_lwbrx(a2, a2);
	int32_t v2 = g37; // 0xa0000
	*(int32_t *)v2 = v2 + 4;
	int32_t v3 = 2 * g37;                 // 0xa0010
	unsigned char v4 = *(char *)v3;       // 0xa0010
	unsigned char v5 = *(char *)(v3 | 1); // 0xa0010
	*(int16_t *)(v1 + 4) = 256 * (int16_t)v5 | (int16_t)v4;
	int32_t v6 = g37; // 0xa001c
	*(int32_t *)v6 = v6 + 2;
	int32_t v7 = 2 * g37;                 // 0xa002c
	unsigned char v8 = *(char *)v7;       // 0xa002c
	unsigned char v9 = *(char *)(v7 | 1); // 0xa002c
	*(int16_t *)(v1 + 6) = 256 * (int16_t)v9 | (int16_t)v8;
	int32_t v10 = g37; // 0xa0038
	*(int32_t *)v10 = v10 + 2;
	*(char *)(v1 + 8) = (char)(g37 / 0x1000000);
	int32_t v11 = g37; // 0xa0050
	*(int32_t *)v11 = v11 + 1;
	*(char *)(v1 + 9) = (char)(g37 / 0x1000000);
	int32_t v12 = g37; // 0xa0068
	*(int32_t *)v12 = v12 + 1;
	*(char *)(v1 + 10) = (char)(g37 / 0x1000000);
	int32_t v13 = g37; // 0xa0080
	*(int32_t *)v13 = v13 + 1;
	*(char *)(v1 + 11) = (char)(g37 / 0x1000000);
	int32_t v14 = g37; // 0xa0098
	*(int32_t *)v14 = v14 + 1;
	*(char *)(v1 + 12) = (char)(g37 / 0x1000000);
	int32_t v15 = g37; // 0xa00b0
	*(int32_t *)v15 = v15 + 1;
	int32_t v16 = 2 * g37;                  // 0xa00c0
	unsigned char v17 = *(char *)v16;       // 0xa00c0
	unsigned char v18 = *(char *)(v16 | 1); // 0xa00c0
	*(int16_t *)(v1 + 13) = 256 * (int16_t)v18 | (int16_t)v17;
	int32_t v19 = g37; // 0xa00cc
	*(int32_t *)v19 = v19 + 2;
	int32_t v20 = g37; // 0xa00d8
	*(int32_t *)(v1 + 15) = __asm_lwbrx(v20, v20);
	int32_t result = g37; // 0xa00e4
	*(int32_t *)result = result + 4;
	return result;
}

// Address range: 0xa00f4 - 0xa01e8
int32_t function_a00f4(char *a1, int32_t a2)
{
	int32_t result = (int32_t)a1;
	__asm_stwbrx(a2, a2, result);
	*(int32_t *)result = result + 4;
	int32_t v1 = (int32_t) * (int16_t *)(a2 + 4); // 0xa010c
	__asm_sthbrx(v1, v1, result);
	*(int32_t *)result = result + 2;
	int32_t v2 = (int32_t) * (int16_t *)(a2 + 6); // 0xa0124
	__asm_sthbrx(v2, v2, result);
	*(int32_t *)result = result + 2;
	*(char *)result = *(char *)(a2 + 8);
	*(int32_t *)result = result + 1;
	*(char *)result = *(char *)(a2 + 9);
	*(int32_t *)result = result + 1;
	*(char *)result = *(char *)(a2 + 10);
	*(int32_t *)result = result + 1;
	*(char *)result = *(char *)(a2 + 11);
	*(int32_t *)result = result + 1;
	*(char *)result = *(char *)(a2 + 12);
	*(int32_t *)result = result + 1;
	int32_t v3 = (int32_t) * (int16_t *)(a2 + 13); // 0xa01b4
	__asm_sthbrx(v3, v3, result);
	*(int32_t *)result = result + 2;
	int32_t v4 = *(int32_t *)(a2 + 15); // 0xa01cc
	__asm_stwbrx(v4, v4, result);
	*(int32_t *)result = result + 4;
	return result;
}

// Address range: 0xa01e8 - 0xa07f8
int32_t function_a01e8(int32_t *a1, int32_t a2)
{
	int32_t v1 = (int32_t)a1;         // r30
	int32_t v2 = a2 + 4;              // 0xa0210
	int32_t v3 = __asm_lwbrx(v2, v2); // 0xa0214
	*(int32_t *)(v1 + 4) = __asm_lwbrx(v3, a2);
	*(int32_t *)v1 = v3;
	*(int32_t *)a2 = v3 + 8;
	unsigned char v4 = *(char *)&g37; // 0xa024c
	*(char *)(v1 + 8) = v4;
	*(int32_t *)a2 = (int32_t)v4 + 1;
	unsigned char v5 = *(char *)&g37; // 0xa0264
	*(char *)(v1 + 9) = v5;
	*(int32_t *)a2 = (int32_t)v5 + 1;
	unsigned char v6 = *(char *)&g37; // 0xa027c
	*(char *)(v1 + 10) = v6;
	*(int32_t *)a2 = (int32_t)v6 + 1;
	unsigned char v7 = *(char *)&g37; // 0xa0294
	*(char *)(v1 + 11) = v7;
	*(int32_t *)a2 = (int32_t)v7 + 1;
	unsigned char v8 = *(char *)&g37; // 0xa02ac
	*(char *)(v1 + 12) = v8;
	*(int32_t *)a2 = (int32_t)v8 + 1;
	unsigned char v9 = *(char *)&g37; // 0xa02c4
	*(char *)(v1 + 13) = v9;
	*(int32_t *)a2 = (int32_t)v9 + 1;
	unsigned char v10 = *(char *)&g37; // 0xa02dc
	*(char *)(v1 + 14) = v10;
	*(int32_t *)a2 = (int32_t)v10 + 1;
	unsigned char v11 = *(char *)&g37; // 0xa02f4
	*(char *)(v1 + 15) = v11;
	int32_t v12 = (int32_t)v11 + 1; // 0xa0300
	*(int32_t *)a2 = v12;
	int32_t v13 = v12;                // 0xa0310
	unsigned char v14 = *(char *)v13; // 0xa0310
	v3 = v14;
	int32_t v15 = 31;      // 0xa0314
	int32_t v16 = 16 + v1; // 0xa0318
	*(char *)v16 = v14;
	// branch -> 0xa0310
	while (v15 > 0) {
		// 0xa0310
		v13++;
		v14 = *(char *)v13;
		v3 = v14;
		v15--;
		v16++;
		*(char *)v16 = v14;
		// continue -> 0xa0310
	}
	// 0xa0320
	*(int32_t *)a2 = v13 + 1;
	*(char *)(v1 + 48) = (char)(v3 / 0x1000000);
	*(int32_t *)a2 = v3 + 1;
	*(char *)(v1 + 49) = (char)(v3 / 0x1000000);
	*(int32_t *)a2 = v3 + 1;
	*(char *)(v1 + 50) = (char)(v3 / 0x1000000);
	*(int32_t *)a2 = v3 + 1;
	*(char *)(v1 + 51) = (char)(v3 / 0x1000000);
	*(int32_t *)a2 = v3 + 1;
	*(char *)(v1 + 52) = (char)(v3 / 0x1000000);
	*(int32_t *)a2 = v3 + 1;
	*(char *)(v1 + 53) = (char)(v3 / 0x1000000);
	*(int32_t *)a2 = v3 + 1;
	*(char *)(v1 + 54) = (char)(v3 / 0x1000000);
	*(int32_t *)a2 = v3 + 1;
	int32_t v17 = v3; // 0xa03d0
	*(int32_t *)(v1 + 55) = __asm_lwbrx(v17, v17);
	*(int32_t *)a2 = v3 + 4;
	int32_t v18 = v3; // 0xa03e8
	*(int32_t *)(v1 + 59) = __asm_lwbrx(v18, v18);
	*(int32_t *)a2 = v3 + 4;
	int32_t v19 = v3; // 0xa0400
	*(int32_t *)(v1 + 63) = __asm_lwbrx(v19, v19);
	*(int32_t *)a2 = v3 + 4;
	int32_t v20 = v3; // 0xa0418
	*(int32_t *)(v1 + 67) = __asm_lwbrx(v20, v20);
	*(int32_t *)a2 = v3 + 4;
	int32_t v21 = v3; // 0xa0430
	*(int32_t *)(v1 + 71) = __asm_lwbrx(v21, v21);
	*(int32_t *)a2 = v3 + 4;
	int32_t v22 = v3;                    // 0xa0448
	int32_t v23 = __asm_lwbrx(v22, v22); // 0xa044c
	v3 = v1 + 78;
	*(int32_t *)(v1 + 75) = v23;
	*(int32_t *)a2 = v3 + 4;
	int32_t v24 = v3;      // 0xa0468
	int32_t v25 = v24;     // 0xa0470
	int32_t v26 = 36;      // 0xa0474
	int32_t v27 = v24 + 1; // 0xa0478
	*(char *)v27 = *(char *)v25;
	v3 = v27;
	// branch -> 0xa0470
	while (v26 > 0) {
		// 0xa0470
		v25++;
		v26--;
		v27++;
		*(char *)v27 = *(char *)v25;
		v3 = v27;
		// continue -> 0xa0470
	}
	// 0xa0480
	*(int32_t *)a2 = v25 + 1;
	int32_t v28 = v3;                    // 0xa0488
	int32_t v29 = v28 + 4;               // 0xa048c
	int32_t v30 = __asm_lwbrx(v29, v29); // 0xa0490
	int32_t v31 = __asm_lwbrx(v30, v28); // 0xa0498
	int32_t v32 = v1;                    // r29
	*(int32_t *)(v1 + 120) = v31;
	*(int32_t *)(v1 + 116) = v30;
	*(int32_t *)a2 = v3 + 8;
	function_9fff4((int32_t *)(v32 + 124), a2);
	int32_t v33 = 1;        // 0xa04d4
	int32_t v34 = v32 + 19; // 0xa04d8
	// branch -> 0xa04c8
	while (v33 < 7) {
		// 0xa04c8
		function_9fff4((int32_t *)(v34 + 124), a2);
		v33++;
		v34 += 19;
		// continue -> 0xa04c8
	}
	int32_t v35 = a2; // 0xa04f4
	function_9fff4((int32_t *)(v1 + 257), v35);
	int32_t v36 = 1;       // 0xa04fc
	int32_t v37 = v1 + 19; // 0xa0500
	// branch -> 0xa04f0
	while (v36 < 40) {
		// 0xa04f0
		v35 = a2;
		function_9fff4((int32_t *)(v37 + 257), v35);
		v36++;
		v37 += 19;
		// continue -> 0xa04f0
	}
	int32_t v38 = v1 + 1016; // 0xa0510
	v3 = v38;
	int32_t v39 = 40;      // 0xa0520
	int32_t v40 = v35 - 1; // 0xa051c
	// branch -> 0xa051c
	while (true) {
		int32_t v41 = v40 + 1; // 0xa051c
		int32_t v42 = v39 - 1; // 0xa0520
		*(char *)(v38 + 1) = *(char *)v41;
		int32_t v43 = v3 + 1; // 0xa0528
		v3 = v43;
		if (v42 <= 0) {
			// 0xa0530
			*(int32_t *)a2 = v41 + 1;
			v32 = v1;
			*(char *)(v1 + 1057) = (char)(v3 / 0x1000000);
			*(int32_t *)a2 = v3 + 1;
			int32_t result = a2; // 0xa0560
			function_9fff4((int32_t *)(v32 + 1058), result);
			int32_t v44 = 1;        // 0xa0568
			int32_t v45 = v32 + 19; // 0xa056c
			// branch -> 0xa055c
			while (v44 < 8) {
				// 0xa055c
				result = a2;
				function_9fff4((int32_t *)(v45 + 1058), result);
				v44++;
				v45 += 19;
				// continue -> 0xa055c
			}
			// 0xa0578
			*(char *)(v1 + 1210) = *(char *)&g37;
			int32_t v46 = result + 1; // 0xa0588
			*(int32_t *)a2 = v46;
			*(char *)(v1 + 1211) = *(char *)&g37;
			*(int32_t *)a2 = v46;
			*(char *)(v1 + 1212) = *(char *)&g37;
			*(int32_t *)a2 = v46;
			*(char *)(v1 + 1213) = *(char *)&g37;
			*(int32_t *)a2 = v46;
			*(char *)(v1 + 1214) = *(char *)&g37;
			*(int32_t *)a2 = v46;
			*(char *)(v1 + 1215) = *(char *)&g37;
			*(int32_t *)a2 = v46;
			*(char *)(v1 + 1216) = *(char *)&g37;
			*(int32_t *)a2 = v46;
			*(char *)(v1 + 1217) = *(char *)&g37;
			*(int32_t *)a2 = v46;
			int32_t v47 = 2 * result;      // 0xa063c
			char *v48 = (char *)v47;       // 0xa063c
			unsigned char v49 = *v48;      // 0xa063c
			char *v50 = (char *)(v47 | 1); // 0xa063c
			unsigned char v51 = *v50;      // 0xa063c
			*(int16_t *)(v1 + 1218) = 256 * (int16_t)v51 | (int16_t)v49;
			int32_t v52 = result + 2; // 0xa064c
			*(int32_t *)a2 = v52;
			unsigned char v53 = *v48; // 0xa0658
			unsigned char v54 = *v50; // 0xa0658
			*(int16_t *)(v1 + 1220) = 256 * (int16_t)v54 | (int16_t)v53;
			*(int32_t *)a2 = v52;
			unsigned char v55 = *v48; // 0xa0674
			unsigned char v56 = *v50; // 0xa0674
			*(int16_t *)(v1 + 1222) = 256 * (int16_t)v56 | (int16_t)v55;
			*(int32_t *)a2 = v52;
			unsigned char v57 = *v48; // 0xa0690
			unsigned char v58 = *v50; // 0xa0690
			*(int16_t *)(v1 + 1224) = 256 * (int16_t)v58 | (int16_t)v57;
			*(int32_t *)a2 = v52;
			unsigned char v59 = *v48; // 0xa06ac
			unsigned char v60 = *v50; // 0xa06ac
			*(int16_t *)(v1 + 1226) = 256 * (int16_t)v60 | (int16_t)v59;
			*(int32_t *)a2 = v52;
			unsigned char v61 = *v48; // 0xa06c8
			unsigned char v62 = *v50; // 0xa06c8
			*(int16_t *)(v1 + 1228) = 256 * (int16_t)v62 | (int16_t)v61;
			*(int32_t *)a2 = v52;
			unsigned char v63 = *v48; // 0xa06e4
			unsigned char v64 = *v50; // 0xa06e4
			*(int16_t *)(v1 + 1230) = 256 * (int16_t)v64 | (int16_t)v63;
			*(int32_t *)a2 = v52;
			unsigned char v65 = *v48; // 0xa0700
			unsigned char v66 = *v50; // 0xa0700
			*(int16_t *)(v1 + 1232) = 256 * (int16_t)v66 | (int16_t)v65;
			*(int32_t *)a2 = v52;
			*(int32_t *)(v1 + 1234) = __asm_lwbrx(result, result);
			int32_t v67 = result + 4; // 0xa0728
			*(int32_t *)a2 = v67;
			*(int32_t *)(v1 + 1238) = __asm_lwbrx(result, result);
			*(int32_t *)a2 = v67;
			*(int32_t *)(v1 + 1242) = __asm_lwbrx(result, result);
			*(int32_t *)a2 = v67;
			*(int32_t *)(v1 + 1246) = __asm_lwbrx(result, result);
			*(int32_t *)a2 = v67;
			*(int32_t *)(v1 + 1250) = __asm_lwbrx(result, result);
			*(int32_t *)a2 = v67;
			*(int32_t *)(v1 + 1254) = __asm_lwbrx(result, result);
			*(int32_t *)a2 = v67;
			*(int32_t *)(v1 + 1258) = __asm_lwbrx(result, result);
			*(int32_t *)a2 = v67;
			*(int32_t *)(v1 + 1262) = __asm_lwbrx(result, result);
			*(int32_t *)a2 = v67;
			return result;
		}
		// 0xa051c
		v38 = v43;
		v39 = v42;
		v40 = v41;
		// branch -> 0xa051c
	}
}

// Address range: 0xa07f8 - 0xa0e10
int32_t memcpy(int32_t *a1, int32_t a2)
{
	int32_t v1 = a2;          // r31
	int32_t v2 = (int32_t)a1; // r30
	int32_t v3;               // bp-84
	int32_t v4 = &v3;         // 0xa0820
	int32_t v5 = a2;          // r6
	v3 = *(int32_t *)(a2 + 4);
	int32_t v6 = __asm_lwbrx(v4, v4); // 0xa0834
	int32_t v7 = &a2;                 // 0xa0838
	int32_t v8 = __asm_lwbrx(v7, v7); // 0xa0840
	int32_t result = v1 + 15;         // r3
	int32_t v9 = 32;                  // r0
	*(int32_t *)(v5 + 4) = v8;
	*(int32_t *)v5 = v6;
	*(int32_t *)v2 = result + 8;
	*(char *)result = *(char *)(v1 + 8);
	*(int32_t *)v2 = result + 1;
	*(char *)result = *(char *)(v1 + 9);
	*(int32_t *)v2 = result + 1;
	*(char *)result = *(char *)(v1 + 10);
	*(int32_t *)v2 = result + 1;
	*(char *)result = *(char *)(v1 + 11);
	*(int32_t *)v2 = result + 1;
	*(char *)result = *(char *)(v1 + 12);
	*(int32_t *)v2 = result + 1;
	*(char *)result = *(char *)(v1 + 13);
	*(int32_t *)v2 = result + 1;
	*(char *)result = *(char *)(v1 + 14);
	*(int32_t *)v2 = result + 1;
	*(char *)result = *(char *)(v1 + 15);
	*(int32_t *)v2 = result + 1;
	int32_t v10 = result - 1; // 0xa093c
	// branch -> 0xa0934
	while (true) {
		int32_t v11 = result + 1; // 0xa0934
		result = v11;
		int32_t v12 = v9 - 1; // 0xa0938
		v9 = v12;
		int32_t v13 = v10 + 1; // 0xa093c
		*(char *)v13 = *(char *)v11;
		if (v12 > 0) {
			// 0xa0934
			v10 = v13;
			// branch -> 0xa0934
			continue;
		} else {
			// 0xa0944
			*(int32_t *)v2 = v10 + 2;
			*(char *)result = *(char *)(v1 + 48);
			*(int32_t *)v2 = result + 1;
			*(char *)result = *(char *)(v1 + 49);
			*(int32_t *)v2 = result + 1;
			*(char *)result = *(char *)(v1 + 50);
			*(int32_t *)v2 = result + 1;
			*(char *)result = *(char *)(v1 + 51);
			*(int32_t *)v2 = result + 1;
			*(char *)result = *(char *)(v1 + 52);
			*(int32_t *)v2 = result + 1;
			*(char *)result = *(char *)(v1 + 53);
			*(int32_t *)v2 = result + 1;
			*(char *)result = *(char *)(v1 + 54);
			*(int32_t *)v2 = result + 1;
			int32_t v14 = *(int32_t *)(v1 + 55); // 0xa09f4
			int32_t v15 = result;                // 0xa09f8
			__asm_stwbrx(v14, v14, v15);
			*(int32_t *)v2 = v15 + 4;
			int32_t v16 = *(int32_t *)(v1 + 59); // 0xa0a0c
			__asm_stwbrx(v16, v16, v15);
			*(int32_t *)v2 = v15 + 4;
			int32_t v17 = *(int32_t *)(v1 + 63); // 0xa0a24
			__asm_stwbrx(v17, v17, v15);
			*(int32_t *)v2 = v15 + 4;
			int32_t v18 = *(int32_t *)(v1 + 67); // 0xa0a3c
			__asm_stwbrx(v18, v18, v15);
			*(int32_t *)v2 = v15 + 4;
			int32_t v19 = *(int32_t *)(v1 + 71); // 0xa0a54
			__asm_stwbrx(v19, v19, v15);
			*(int32_t *)v2 = v15 + 4;
			int32_t v20 = *(int32_t *)(v1 + 75); // 0xa0a6c
			__asm_stwbrx(v20, v20, v15);
			*(int32_t *)v2 = v15 + 4;
			int32_t v21 = v15 - 1; // 0xa0a9c
			int32_t v22 = 79 + v1; // 0xa0a94
			int32_t v23 = 36;      // 0xa0a98
			int32_t v24 = v21 + 1; // 0xa0a9c
			*(char *)v24 = *(char *)v22;
			// branch -> 0xa0a94
			while (v23 > 0) {
				// 0xa0a94
				v21 = v24;
				v22++;
				v23--;
				v24 = v21 + 1;
				*(char *)v24 = *(char *)v22;
				// continue -> 0xa0a94
			}
			int32_t v25 = v21 + 2; // 0xa0aa4
			int32_t v26;           // bp-100
			int32_t v27 = &v26;    // 0xa0aa8
			*(int32_t *)v2 = v25;
			int32_t v28 = v25; // r5
			v26 = *(int32_t *)(v1 + 120);
			int32_t v29 = *(int32_t *)(v1 + 116); // bp-104
			int32_t v30 = __asm_lwbrx(v27, v27);  // 0xa0ac4
			int32_t v31 = &v29;                   // 0xa0ac8
			int32_t v32 = __asm_lwbrx(v31, v31);  // 0xa0ad0
			result = v30;
			int32_t v33 = v1; // r29
			*(int32_t *)(v28 + 4) = v32;
			*(int32_t *)v28 = result;
			*(int32_t *)v2 = result + 8;
			function_a00f4((char *)v2, v33 + 124);
			int32_t v34 = 1;        // 0xa0b0c
			int32_t v35 = v33 + 19; // 0xa0b10
			// branch -> 0xa0b00
			while (v34 < 7) {
				// 0xa0b00
				function_a00f4((char *)v2, v35 + 124);
				v34++;
				v35 += 19;
				// continue -> 0xa0b00
			}
			int32_t v36 = function_a00f4((char *)v2, v1 + 257); // 0xa0b30
			int32_t v37 = 1;                                    // 0xa0b34
			int32_t v38 = v1 + 19;                              // 0xa0b38
			// branch -> 0xa0b28
			while (v37 < 40) {
				// 0xa0b28
				v36 = function_a00f4((char *)v2, v38 + 257);
				v37++;
				v38 += 19;
				// continue -> 0xa0b28
			}
			int32_t v39 = v36 - 1; // 0xa0b50
			result = v39;
			int32_t v40 = 40;        // 0xa0b58
			int32_t v41 = v1 + 1016; // 0xa0b54
			// branch -> 0xa0b54
			while (true) {
				int32_t v42 = v41 + 1; // 0xa0b54
				int32_t v43 = v40 - 1; // 0xa0b58
				*(char *)(v39 + 1) = *(char *)v42;
				int32_t v44 = result;  // 0xa0b60
				int32_t v45 = v44 + 1; // 0xa0b60
				result = v45;
				if (v43 <= 0) {
					// 0xa0b68
					*(int32_t *)v2 = v44 + 2;
					v33 = v1;
					*(char *)result = *(char *)(v1 + 1057);
					*(int32_t *)v2 = result + 1;
					int32_t v46 = function_a00f4((char *)v2, v33 + 1058); // 0xa0b9c
					result = v46;
					int32_t v47 = 1;        // 0xa0ba0
					int32_t v48 = v33 + 19; // 0xa0ba4
					// branch -> 0xa0b94
					while (v47 < 8) {
						// 0xa0b94
						v46 = function_a00f4((char *)v2, v48 + 1058);
						result = v46;
						v47++;
						v48 += 19;
						// continue -> 0xa0b94
					}
					// 0xa0bb0
					*(char *)v46 = *(char *)(v1 + 1210);
					*(int32_t *)v2 = result + 1;
					*(char *)result = *(char *)(v1 + 1211);
					*(int32_t *)v2 = result + 1;
					*(char *)result = *(char *)(v1 + 1212);
					*(int32_t *)v2 = result + 1;
					*(char *)result = *(char *)(v1 + 1213);
					*(int32_t *)v2 = result + 1;
					*(char *)result = *(char *)(v1 + 1214);
					*(int32_t *)v2 = result + 1;
					*(char *)result = *(char *)(v1 + 1215);
					*(int32_t *)v2 = result + 1;
					*(char *)result = *(char *)(v1 + 1216);
					*(int32_t *)v2 = result + 1;
					*(char *)result = *(char *)(v1 + 1217);
					*(int32_t *)v2 = result + 1;
					int32_t v49 = (int32_t) * (int16_t *)(v1 + 1218); // 0xa0c70
					__asm_sthbrx(v49, v49, result);
					*(int32_t *)v2 = result + 2;
					int32_t v50 = (int32_t) * (int16_t *)(v1 + 1220); // 0xa0c88
					__asm_sthbrx(v50, v50, result);
					*(int32_t *)v2 = result + 2;
					int32_t v51 = (int32_t) * (int16_t *)(v1 + 1222); // 0xa0ca0
					__asm_sthbrx(v51, v51, result);
					*(int32_t *)v2 = result + 2;
					int32_t v52 = (int32_t) * (int16_t *)(v1 + 1224); // 0xa0cb8
					__asm_sthbrx(v52, v52, result);
					*(int32_t *)v2 = result + 2;
					int32_t v53 = (int32_t) * (int16_t *)(v1 + 1226); // 0xa0cd0
					__asm_sthbrx(v53, v53, result);
					*(int32_t *)v2 = result + 2;
					int32_t v54 = (int32_t) * (int16_t *)(v1 + 1228); // 0xa0ce8
					__asm_sthbrx(v54, v54, result);
					*(int32_t *)v2 = result + 2;
					int32_t v55 = (int32_t) * (int16_t *)(v1 + 1230); // 0xa0d00
					__asm_sthbrx(v55, v55, result);
					*(int32_t *)v2 = result + 2;
					int32_t v56 = (int32_t) * (int16_t *)(v1 + 1232); // 0xa0d18
					__asm_sthbrx(v56, v56, result);
					*(int32_t *)v2 = result + 2;
					int32_t v57 = *(int32_t *)(v1 + 1234); // 0xa0d30
					__asm_stwbrx(v57, v57, result);
					*(int32_t *)v2 = result + 4;
					int32_t v58 = *(int32_t *)(v1 + 1238); // 0xa0d48
					__asm_stwbrx(v58, v58, result);
					*(int32_t *)v2 = result + 4;
					int32_t v59 = *(int32_t *)(v1 + 1242); // 0xa0d60
					__asm_stwbrx(v59, v59, result);
					*(int32_t *)v2 = result + 4;
					int32_t v60 = *(int32_t *)(v1 + 1246); // 0xa0d78
					__asm_stwbrx(v60, v60, result);
					*(int32_t *)v2 = result + 4;
					int32_t v61 = *(int32_t *)(v1 + 1250); // 0xa0d90
					__asm_stwbrx(v61, v61, result);
					*(int32_t *)v2 = result + 4;
					int32_t v62 = *(int32_t *)(v1 + 1254); // 0xa0da8
					__asm_stwbrx(v62, v62, result);
					*(int32_t *)v2 = result + 4;
					int32_t v63 = *(int32_t *)(v1 + 1258); // 0xa0dc0
					__asm_stwbrx(v63, v63, result);
					*(int32_t *)v2 = result + 4;
					int32_t v64 = *(int32_t *)(v1 + 1262); // 0xa0dd8
					__asm_stwbrx(v64, v64, result);
					*(int32_t *)v2 = result + 4;
					return result;
				}
				// 0xa0b54
				v39 = v45;
				v40 = v43;
				v41 = v42;
				// branch -> 0xa0b54
			}
		}
	}
}

// Address range: 0xa0e10 - 0xa0f5c
int32_t pfile_read_hero(int32_t a1, int32_t a2)
{
	int32_t v1 = g36;                        // 0xa0e10
	int32_t v2 = g10;                        // 0xa0e14
	int32_t v3 = g35;                        // 0xa0e1c
	int32_t v4 = g33;                        // 0xa0e20
	int32_t v5 = g32;                        // 0xa0e24
	int32_t v6 = *(int32_t *)(g23 - 0x5a84); // 0xa0e2c
	g37 = v6;
	int32_t v7; // bp-28
	if (SFileOpenFileEx(v6, 0, (int32_t)&v7) == 0) {
		// 0xa0f3c
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		g32 = v5;
		return 0;
	}
	// 0xa0e54
	g36 = 0;
	g35 = 0;
	int32_t v8;
	int32_t v9 = *(int32_t *)*(int32_t *)(v8 - 0x5a94); // bp-44
	if ((*(char *)*(int32_t *)(v8 - 0x77f0) || 1) != 1) {
		// 0xa0e90
		g34 = &v9;
		g37 = *(int32_t *)(v8 - 0x5a98);
		strcpy();
		// branch -> 0xa0e9c
	}
	int32_t v10 = v7; // 0xa0e9c
	g34 = v10;
	g37 = 0;
	int32_t v11 = SFileGetFileSize(v10, 0); // 0xa0ea4
	g33 = v11;
	int32_t v12;    // 0xa0f1c
	int32_t result; // 0xa0f38
	if (v11 == 0) {
		// 0xa0f1c
		v12 = g36;
		if (v12 != 0) {
			// 0xa0f24
			g34 = v12;
			mem_free_dbg();
			// branch -> 0xa0f2c
		}
		// 0xa0f2c
		g34 = v7;
		SFileCloseFile();
		result = g35;
		// branch -> 0xa0f3c
		// 0xa0f3c
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		g32 = v5;
		return result;
	}
	// 0xa0eb4
	g34 = v11;
	int32_t v13 = DiabloAllocPtr(); // 0xa0eb8
	int32_t v14 = v7;               // 0xa0ec0
	g34 = v14;
	g36 = v13;
	g37 = v13;
	int32_t v15; // bp-52
	if (SFileReadFile(v14, v13, g33, (int32_t)&v15, 0) != 0) {
		int32_t v16 = codec_decode((int32_t *)g36, g33, (int32_t)&v9); // 0xa0ef4
		v15 = v16;
		if (v16 == 1266) {
			int32_t v17 = g36; // bp-56
			function_a01e8((int32_t *)g32, (int32_t)&v17);
			g35 = 1;
			// branch -> 0xa0f1c
		}
	}
	// 0xa0f1c
	v12 = g36;
	if (v12 != 0) {
		// 0xa0f24
		g34 = v12;
		mem_free_dbg();
		// branch -> 0xa0f2c
	}
	// 0xa0f2c
	g34 = v7;
	SFileCloseFile();
	result = g35;
	// branch -> 0xa0f3c
	// 0xa0f3c
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	g32 = v5;
	return result;
}

// Address range: 0xa0f5c - 0xa1028
int32_t pfile_encode_hero(int32_t a1)
{
	int32_t v1 = g36; // 0xa0f5c
	int32_t v2 = g35; // 0xa0f68
	int32_t v3 = g33; // 0xa0f6c
	g33 = a1;
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x5a9c); // bp-32
	int32_t v5 = &v4;
	if ((*(char *)*(int32_t *)(g23 - 0x77f0) || 1) != 1) {
		// 0xa0fac
		g34 = v5;
		g37 = *(int32_t *)(g23 - 0x5a98);
		strcpy();
		// branch -> 0xa0fb8
	}
	int32_t v6 = codec_get_encoded_len(1266); // 0xa0fbc
	g34 = v6;
	g36 = v6;
	int32_t v7 = DiabloAllocPtr(); // 0xa0fc4
	g35 = v7;
	memcpy(&v7, g33);
	codec_encode((int32_t *)g35, 1266, g36, v5);
	mpqapi_write_file(*(int32_t *)(g23 - 0x5a84), g35, g36);
	g34 = g35;
	int32_t result = mem_free_dbg(); // 0xa1008
	g36 = v1;
	g35 = v2;
	g33 = v3;
	return result;
}

// Address range: 0xa1028 - 0xa10c0
int32_t pfile_open_archive(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0xa1028
	int32_t v2 = g10; // 0xa102c
	g36 = *(int32_t *)(g23 - 0x77f0);
	int32_t v3 = g35; // 0xa1034
	g35 = a2;
	int32_t v4 = g33; // 0xa1040
	g33 = a1;
	int32_t v5;       // bp-280
	int32_t v6 = &v5; // 0xa1054
	pfile_get_save_path(v6, 260, a2);
	if (OpenMPQ(v6, (int32_t)(*(char *)g36 > 1), g35) != 0) {
		// 0xa10a4
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return 1;
	}
	// 0xa1084
	if (g33 == 0) {
		// 0xa10a4
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return 0;
	}
	// 0xa108c
	if ((*(char *)g36 || 1) != 1) {
		// 0xa1098
		mpqapi_store_default_time(g35);
		// branch -> 0xa10a4
	}
	// 0xa10a4
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	return 0;
}

// Address range: 0xa10c0 - 0xa1114
int32_t pfile_flush(int32_t a1)
{
	int32_t v1 = g36; // 0xa10c0
	int32_t v2 = g37; // 0xa10c4
	g36 = v2;
	int32_t v3 = g35; // 0xa10d0
	g35 = a1;
	int32_t v4;       // bp-280
	int32_t v5 = &v4; // 0xa10e4
	pfile_get_save_path(v5, 260, v2);
	int32_t result = mpqapi_flush_and_close(v5, g35, g36); // 0xa10f8
	g36 = v1;
	g35 = v3;
	return result;
}

// Address range: 0xa1114 - 0xa1170
int32_t pfile_open_save_archive(int32_t a1, int32_t a2)
{
	// 0xa1114
	int32_t v1;       // bp-264
	int32_t v2 = &v1; // 0xa112c
	pfile_get_save_path(v2, 260, a2);
	g34 = v2;
	g37 = 0x7000;
	int32_t v3;                                               // bp-4
	int32_t v4 = function_eb740(v2, 0x7000, 0, (int32_t)&v3); // 0xa1144
	return v4 == 0 ? 0 : v3;
}

// Address range: 0xa1170 - 0xa1194
int32_t pfile_SFileCloseArchive(int32_t a1)
{
	// 0xa1170
	return SFileCloseArchive();
}

// Address range: 0xa1194 - 0xa11fc
int32_t pfile_archive_contains_game(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0xa1194
	if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
		// 0xa11b0
		// branch -> 0xa11ec
		// 0xa11ec
		g10 = v1;
		return 0;
	}
	// 0xa11b8
	int32_t v2;     // bp-8
	int32_t result; // 0xa11f8
	if (SFileOpenFileEx(*(int32_t *)(g23 - 0x5a90), 0, (int32_t)&v2) == 0) {
		// 0xa11d4
		result = 0;
		// branch -> 0xa11ec
	} else {
		// 0xa11dc
		g34 = v2;
		SFileCloseFile();
		result = 1;
		// branch -> 0xa11ec
	}
	// 0xa11ec
	g10 = v1;
	return result;
}

// Address range: 0xa11fc - 0xa12a4
int32_t pfile_write_hero(int32_t a1)
{
	int32_t v1 = g36;                        // 0xa11fc
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa1204
	int32_t v3 = g35;                        // 0xa1208
	int32_t v4 = *(int32_t *)(g23 - 0x77ac); // 0xa120c
	g35 = v4;
	int32_t v5 = g33; // 0xa1210
	g36 = *(int32_t *)(g23 - 0x77f0);
	int32_t v6 = pfile_get_save_num_from_name(v2 + 316 + 0x55ec * *(int32_t *)v4); // 0xa1230
	g33 = v6;
	int32_t result; // 0xa12a0
	if (pfile_open_archive(1, v6) != 0) {
		int32_t v7 = __asm_rlwinm(llvm_ctlz_i32(1 - (int32_t) * (char *)g36, true), 27, 24, 31); // 0xa1260
		PackPlayer(v7, *(int32_t *)g35, v7);
		int32_t v8; // bp-1288
		pfile_encode_hero((int32_t)&v8);
		g37 = g33;
		int32_t v9 = __asm_rlwinm(llvm_ctlz_i32(1 - (int32_t) * (char *)g36, true), 27, 24, 31); // 0xa1280
		result = pfile_flush(v9);
		// branch -> 0xa1288
	} else {
		result = 0;
	}
	// 0xa1288
	g36 = v1;
	g35 = v3;
	g33 = v5;
	return result;
}

// Address range: 0xa12a4 - 0xa1360
int32_t pfile_create_player_description(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0xa12a8
	int32_t v2 = g35; // 0xa12b0
	g35 = a2;
	int32_t v3 = g33; // 0xa12b8
	g33 = a1;
	*(int32_t *)*(int32_t *)(g23 - 0x77ac) = 0;
	pfile_read_player_from_save();
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x75bc); // 0xa12e0
	int32_t v5;                                          // bp-72
	game_2_ui_player(*(int32_t *)(g23 - 0x77a8), (int32_t)&v5, v4);
	if (g33 == 0) {
		// 0xa1344
		g10 = v1;
		g35 = v2;
		g33 = v3;
		return 1;
	}
	// 0xa1304
	if (g35 != 0) {
		// 0xa130c
		g34 = g33;
		int32_t v6; // bp-200
		SStrCopy(g33, (int32_t)&v6, g35);
		// branch -> 0xa1344
	}
	// 0xa1344
	g10 = v1;
	g35 = v2;
	g33 = v3;
	return 1;
}

// Address range: 0xa1360 - 0xa1498
int32_t pfile_create_save_file(int32_t a1, int32_t a2)
{
	g35 = *(int32_t *)(g23 - 0x7128);
	g36 = *(int32_t *)(g23 - 0x77a8);
	if (pfile_get_save_num_from_name(a2) == 10) {
		// 0xa1398
		g32 = 0;
		int32_t v1 = g36; // 0xa13a0
		g33 = v1;
		// branch -> 0xa13b4
		while (true) {
			// 0xa13b4
			g34 = a1;
			if (_strcmpi(a1, v1 + 316) == 0) {
				int32_t v2 = pfile_get_save_num_from_name(a1); // 0xa13dc
				if (v2 == 10) {
					// 0xa13e8
					// branch -> 0xa1484
					// 0xa1484
					return 0;
				}
				int32_t v3 = *(int32_t *)(g23 - 0x5a80) + 32 * v2; // 0xa13fc
				g34 = v3;
				SStrCopy(v3, a2, 32);
				int32_t v4 = 0x55ec * g32 + 316 + g36; // 0xa1418
				g34 = v4;
				SStrCopy(v4, a2, 32);
				int32_t v5 = g35; // 0xa1428
				g34 = v5;
				int32_t v6; // bp-72
				int32_t v7;
				int32_t v8; // 0xa1454
				if (_strcmpi(v5, a1) != 0) {
					// 0xa1454
					v8 = *(int32_t *)(v7 - 0x75bc);
					game_2_ui_player(g36, (int32_t)&v6, *(int32_t *)v8);
					pfile_write_hero(g35);
					// branch -> 0xa1484
					// 0xa1484
					return 1;
				}
				int32_t v9 = g35; // 0xa1440
				g34 = v9;
				SStrCopy(v9, a2, 16);
				// branch -> 0xa1454
				// 0xa1454
				v8 = *(int32_t *)(v7 - 0x75bc);
				game_2_ui_player(g36, (int32_t)&v6, *(int32_t *)v8);
				pfile_write_hero(g35);
				// branch -> 0xa1484
				// 0xa1484
				return 1;
			}
			int32_t v10 = g33 + 0x55ec; // 0xa13cc
			g33 = v10;
			int32_t v11 = g32 + 1; // 0xa13d0
			g32 = v11;
			if (v11 == 4) {
				// break -> 0xa13ac
				break;
			}
			v1 = v10;
			// continue -> 0xa13b4
		}
		// 0xa13ac
		// branch -> 0xa1484
	}
	// 0xa1484
	return 0;
}

// Address range: 0xa1498 - 0xa14dc
int32_t pfile_flush_W(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa14a4
	g37 = pfile_get_save_num_from_name(v1 + 316 + 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac));
	int32_t result = pfile_flush(1); // 0xa14c8
	return result;
}

// Address range: 0xa14dc - 0xa1504
int32_t function_a14dc(void)
{
	int32_t v1 = g34; // 0xa14dc
	if (v1 == 0) {
		// 0xa14e4
		return 0;
	}
	// 0xa14ec
	if (v1 == 1) {
		// 0xa14f4
		return 1;
	}
	// 0xa14fc
	return 2;
}

// Address range: 0xa1504 - 0xa1534
int32_t function_a1504(int32_t a1)
{
	char v1 = *(char *)(a1 + 348); // 0xa1504
	if (v1 == 0) {
		// 0xa1510
		return 0;
	}
	// 0xa1518
	if (v1 == 1) {
		// 0xa1524
		return 1;
	}
	// 0xa152c
	return 2;
}

// Address range: 0xa1534 - 0xa15f4
int32_t game_2_ui_player(int32_t a1, int32_t a2, int32_t a3)
{
	g34 = a2;
	memset();
	g37 = a1 + 316;
	g38 = 15;
	function_e868c(a2 + 4);
	*(char *)(a2 + 19) = 0;
	*(int16_t *)(a2 + 20) = (int16_t) * (char *)(a1 + 436);
	int32_t result = function_a1504(a1); // 0xa1594
	*(char *)(a2 + 22) = (char)result;
	*(int16_t *)(a2 + 24) = (int16_t) * (int32_t *)(a1 + 352);
	*(int16_t *)(a2 + 26) = (int16_t) * (int32_t *)(a1 + 360);
	*(int16_t *)(a2 + 28) = (int16_t) * (int32_t *)(a1 + 368);
	*(int16_t *)(a2 + 30) = (int16_t) * (int32_t *)(a1 + 376);
	*(int32_t *)(a2 + 32) = *(int32_t *)(a1 + 456);
	*(int32_t *)(a2 + 36) = a3;
	*(char *)(a2 + 23) = (char)*(int32_t *)(a1 + 0x55a8);
	*(int32_t *)(a2 + 40) = 0;
	return result;
}

// Address range: 0xa15f4 - 0xa16d8
int32_t pfile_ui_set_hero_infos(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x5a80); // 0xa15fc
	g36 = v1;
	g35 = *(int32_t *)(g23 - 0x77a8);
	g34 = v1;
	memset();
	int32_t v2;       // bp-1288
	int32_t v3 = &v2; // 0xa1624
	g33 = v3;
	int32_t v4 = 1;   // bp-36
	int32_t v5;       // bp-1304
	int32_t v6 = &v5; // 0xa1650
	int32_t v7;       // bp-1352
	int32_t v8 = &v7; // 0xa168c
	int32_t v9 = 0;   // 0xa163c
	// branch -> 0xa1638
	while (true) {
		int32_t v10 = pfile_open_save_archive((int32_t)&v4, v9); // 0xa1640
		g31 = v10;
		if (v10 != 0) {
			// 0xa164c
			g34 = v10;
			if (pfile_read_hero(v10, v6) != 0) {
				// 0xa1660
				g34 = g36;
				g37 = v3;
				strcpy();
				UnPackPlayer(v6, 0, 0);
				int32_t v11 = g31; // 0xa167c
				g34 = v11;
				game_2_ui_player(g35, v8, pfile_archive_contains_game(v11, g32));
				g34 = v8;
				g15 = g30;
				ui_add_hero_info();
				// branch -> 0xa16a8
			}
			int32_t v12 = g31; // 0xa16a8
			g34 = v12;
			pfile_SFileCloseArchive(v12);
			// branch -> 0xa16b0
		}
		int32_t v13 = g32 + 1; // 0xa16b0
		g36 += 32;
		if (v13 >= 10) {
			// break -> 0xa16c0
			break;
		}
		v9 = v13;
		// continue -> 0xa1638
	}
	// 0xa16c0
	return 1;
}

// Address range: 0xa16d8 - 0xa1740
int32_t function_a16d8(int16_t *a1)
{
	int32_t v1 = (int32_t)a1;                                  // r31
	int32_t v2 = 0;                                            // r2
	int32_t v3 = 0x1000000 * function_a14dc() / 0x400000;      // 0xa16f8
	int32_t v4 = *(int32_t *)(*(int32_t *)(v2 - 0x6f9c) + v3); // 0xa1700
	*(int16_t *)v1 = (int16_t)v4;
	int32_t v5 = *(int32_t *)(v3 + *(int32_t *)(v2 - 0x6fa0)); // 0xa1714
	*(int16_t *)(v1 + 2) = (int16_t)v5;
	int32_t v6 = *(int32_t *)(v3 + *(int32_t *)(v2 - 0x6fa4)); // 0xa171c
	*(int16_t *)(v1 + 4) = (int16_t)v6;
	int32_t v7 = *(int32_t *)(v3 + *(int32_t *)(v2 - 0x6fa8)); // 0xa1724
	*(int16_t *)(v1 + 6) = (int16_t)v7;
	return 1;
}

// Address range: 0xa1740 - 0xa18e0
int32_t function_a1740(int32_t a1)
{
	g31 = a1;
	g35 = *(int32_t *)(g23 - 0x77a8);
	g36 = *(int32_t *)(g23 - 0x5a80);
	int32_t v1 = pfile_get_save_num_from_name(a1 + 4); // 0xa1760
	int32_t v2 = v1;                                   // 0xa182c
	int32_t v3;                                        // bp-1304
	int32_t v4;                                        // 0xa1870
	int32_t result;                                    // 0xa18dc
	int32_t v5;                                        // 0xa184c
	int32_t v6;                                        // 0xa1894
	if (v1 != 10) {
		// 0xa1818
		if (v2 == 10) {
			// 0xa18cc
			return 0;
		}
		// 0xa1828
		if (pfile_open_archive(0, v2) == 0) {
			// 0xa183c
			result = 0;
			// branch -> 0xa18cc
		} else {
			// 0xa1844
			function_8892c(*(int32_t *)(g23 - 0x5aa0));
			v5 = 32 * g32;
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g36 + v5);
			*(char *)(v5 + g36 + 31) = 0;
			g34 = (int32_t) * (char *)(g31 + 22);
			v4 = function_a14dc();
			CreatePlayer(0, (char)v4);
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g35 + 316);
			*(char *)(g35 + 347) = (char)g36;
			v6 = &v3;
			PackPlayer(v6, 0, 1);
			pfile_encode_hero(v6);
			game_2_ui_player(g35, g31, 0);
			g37 = g32;
			pfile_flush(1);
			result = 1;
			// branch -> 0xa18cc
		}
		// 0xa18cc
		return result;
	}
	int32_t v7 = g36; // 0xa1770
	if (*(char *)v7 == 0) {
		v2 = 0;
		// 0xa1818
		if (v2 == 10) {
			// 0xa18cc
			return 0;
		}
		// 0xa1828
		if (pfile_open_archive(0, v2) == 0) {
			// 0xa183c
			result = 0;
			// branch -> 0xa18cc
		} else {
			// 0xa1844
			function_8892c(*(int32_t *)(g23 - 0x5aa0));
			v5 = 32 * g32;
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g36 + v5);
			*(char *)(v5 + g36 + 31) = 0;
			g34 = (int32_t) * (char *)(g31 + 22);
			v4 = function_a14dc();
			CreatePlayer(0, (char)v4);
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g35 + 316);
			*(char *)(g35 + 347) = (char)g36;
			v6 = &v3;
			PackPlayer(v6, 0, 1);
			pfile_encode_hero(v6);
			game_2_ui_player(g35, g31, 0);
			g37 = g32;
			pfile_flush(1);
			result = 1;
			// branch -> 0xa18cc
		}
		// 0xa18cc
		return result;
	}
	// 0xa1780
	if (*(char *)(v7 + 32) == 0) {
		v2 = 1;
		// 0xa1818
		if (v2 == 10) {
			// 0xa18cc
			return 0;
		}
		// 0xa1828
		if (pfile_open_archive(0, v2) == 0) {
			// 0xa183c
			result = 0;
			// branch -> 0xa18cc
		} else {
			// 0xa1844
			function_8892c(*(int32_t *)(g23 - 0x5aa0));
			v5 = 32 * g32;
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g36 + v5);
			*(char *)(v5 + g36 + 31) = 0;
			g34 = (int32_t) * (char *)(g31 + 22);
			v4 = function_a14dc();
			CreatePlayer(0, (char)v4);
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g35 + 316);
			*(char *)(g35 + 347) = (char)g36;
			v6 = &v3;
			PackPlayer(v6, 0, 1);
			pfile_encode_hero(v6);
			game_2_ui_player(g35, g31, 0);
			g37 = g32;
			pfile_flush(1);
			result = 1;
			// branch -> 0xa18cc
		}
		// 0xa18cc
		return result;
	}
	// 0xa1794
	if (*(char *)(v7 + 64) == 0) {
		v2 = 2;
		// 0xa1818
		if (v2 == 10) {
			// 0xa18cc
			return 0;
		}
		// 0xa1828
		if (pfile_open_archive(0, v2) == 0) {
			// 0xa183c
			result = 0;
			// branch -> 0xa18cc
		} else {
			// 0xa1844
			function_8892c(*(int32_t *)(g23 - 0x5aa0));
			v5 = 32 * g32;
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g36 + v5);
			*(char *)(v5 + g36 + 31) = 0;
			g34 = (int32_t) * (char *)(g31 + 22);
			v4 = function_a14dc();
			CreatePlayer(0, (char)v4);
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g35 + 316);
			*(char *)(g35 + 347) = (char)g36;
			v6 = &v3;
			PackPlayer(v6, 0, 1);
			pfile_encode_hero(v6);
			game_2_ui_player(g35, g31, 0);
			g37 = g32;
			pfile_flush(1);
			result = 1;
			// branch -> 0xa18cc
		}
		// 0xa18cc
		return result;
	}
	// 0xa17a4
	if (*(char *)(v7 + 96) == 0) {
		v2 = 3;
		// 0xa1818
		if (v2 == 10) {
			// 0xa18cc
			return 0;
		}
		// 0xa1828
		if (pfile_open_archive(0, v2) == 0) {
			// 0xa183c
			result = 0;
			// branch -> 0xa18cc
		} else {
			// 0xa1844
			function_8892c(*(int32_t *)(g23 - 0x5aa0));
			v5 = 32 * g32;
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g36 + v5);
			*(char *)(v5 + g36 + 31) = 0;
			g34 = (int32_t) * (char *)(g31 + 22);
			v4 = function_a14dc();
			CreatePlayer(0, (char)v4);
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g35 + 316);
			*(char *)(g35 + 347) = (char)g36;
			v6 = &v3;
			PackPlayer(v6, 0, 1);
			pfile_encode_hero(v6);
			game_2_ui_player(g35, g31, 0);
			g37 = g32;
			pfile_flush(1);
			result = 1;
			// branch -> 0xa18cc
		}
		// 0xa18cc
		return result;
	}
	// 0xa17b4
	if (*(char *)(v7 + 128) == 0) {
		v2 = 4;
		// 0xa1818
		if (v2 == 10) {
			// 0xa18cc
			return 0;
		}
		// 0xa1828
		if (pfile_open_archive(0, v2) == 0) {
			// 0xa183c
			result = 0;
			// branch -> 0xa18cc
		} else {
			// 0xa1844
			function_8892c(*(int32_t *)(g23 - 0x5aa0));
			v5 = 32 * g32;
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g36 + v5);
			*(char *)(v5 + g36 + 31) = 0;
			g34 = (int32_t) * (char *)(g31 + 22);
			v4 = function_a14dc();
			CreatePlayer(0, (char)v4);
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g35 + 316);
			*(char *)(g35 + 347) = (char)g36;
			v6 = &v3;
			PackPlayer(v6, 0, 1);
			pfile_encode_hero(v6);
			game_2_ui_player(g35, g31, 0);
			g37 = g32;
			pfile_flush(1);
			result = 1;
			// branch -> 0xa18cc
		}
		// 0xa18cc
		return result;
	}
	// 0xa17c4
	if (*(char *)(v7 + 160) == 0) {
		v2 = 5;
		// 0xa1818
		if (v2 == 10) {
			// 0xa18cc
			return 0;
		}
		// 0xa1828
		if (pfile_open_archive(0, v2) == 0) {
			// 0xa183c
			result = 0;
			// branch -> 0xa18cc
		} else {
			// 0xa1844
			function_8892c(*(int32_t *)(g23 - 0x5aa0));
			v5 = 32 * g32;
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g36 + v5);
			*(char *)(v5 + g36 + 31) = 0;
			g34 = (int32_t) * (char *)(g31 + 22);
			v4 = function_a14dc();
			CreatePlayer(0, (char)v4);
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g35 + 316);
			*(char *)(g35 + 347) = (char)g36;
			v6 = &v3;
			PackPlayer(v6, 0, 1);
			pfile_encode_hero(v6);
			game_2_ui_player(g35, g31, 0);
			g37 = g32;
			pfile_flush(1);
			result = 1;
			// branch -> 0xa18cc
		}
		// 0xa18cc
		return result;
	}
	// 0xa17d4
	if (*(char *)(v7 + 192) == 0) {
		v2 = 6;
		// 0xa1818
		if (v2 == 10) {
			// 0xa18cc
			return 0;
		}
		// 0xa1828
		if (pfile_open_archive(0, v2) == 0) {
			// 0xa183c
			result = 0;
			// branch -> 0xa18cc
		} else {
			// 0xa1844
			function_8892c(*(int32_t *)(g23 - 0x5aa0));
			v5 = 32 * g32;
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g36 + v5);
			*(char *)(v5 + g36 + 31) = 0;
			g34 = (int32_t) * (char *)(g31 + 22);
			v4 = function_a14dc();
			CreatePlayer(0, (char)v4);
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g35 + 316);
			*(char *)(g35 + 347) = (char)g36;
			v6 = &v3;
			PackPlayer(v6, 0, 1);
			pfile_encode_hero(v6);
			game_2_ui_player(g35, g31, 0);
			g37 = g32;
			pfile_flush(1);
			result = 1;
			// branch -> 0xa18cc
		}
		// 0xa18cc
		return result;
	}
	// 0xa17e4
	if (*(char *)(v7 + 224) == 0) {
		v2 = 7;
		// 0xa1818
		if (v2 == 10) {
			// 0xa18cc
			return 0;
		}
		// 0xa1828
		if (pfile_open_archive(0, v2) == 0) {
			// 0xa183c
			result = 0;
			// branch -> 0xa18cc
		} else {
			// 0xa1844
			function_8892c(*(int32_t *)(g23 - 0x5aa0));
			v5 = 32 * g32;
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g36 + v5);
			*(char *)(v5 + g36 + 31) = 0;
			g34 = (int32_t) * (char *)(g31 + 22);
			v4 = function_a14dc();
			CreatePlayer(0, (char)v4);
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g35 + 316);
			*(char *)(g35 + 347) = (char)g36;
			v6 = &v3;
			PackPlayer(v6, 0, 1);
			pfile_encode_hero(v6);
			game_2_ui_player(g35, g31, 0);
			g37 = g32;
			pfile_flush(1);
			result = 1;
			// branch -> 0xa18cc
		}
		// 0xa18cc
		return result;
	}
	// 0xa17f4
	if (*(char *)(v7 + 256) == 0) {
		v2 = 8;
		// 0xa1818
		if (v2 == 10) {
			// 0xa18cc
			return 0;
		}
		// 0xa1828
		if (pfile_open_archive(0, v2) == 0) {
			// 0xa183c
			result = 0;
			// branch -> 0xa18cc
		} else {
			// 0xa1844
			function_8892c(*(int32_t *)(g23 - 0x5aa0));
			v5 = 32 * g32;
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g36 + v5);
			*(char *)(v5 + g36 + 31) = 0;
			g34 = (int32_t) * (char *)(g31 + 22);
			v4 = function_a14dc();
			CreatePlayer(0, (char)v4);
			g37 = g31 + 4;
			g38 = 32;
			function_e868c(g35 + 316);
			*(char *)(g35 + 347) = (char)g36;
			v6 = &v3;
			PackPlayer(v6, 0, 1);
			pfile_encode_hero(v6);
			game_2_ui_player(g35, g31, 0);
			g37 = g32;
			pfile_flush(1);
			result = 1;
			// branch -> 0xa18cc
		}
		// 0xa18cc
		return result;
	}
	// 0xa1804
	if (*(char *)(v7 + 288) != 0) {
		// 0xa1814
		v2 = 10;
		// branch -> 0xa1818
	} else {
		v2 = 9;
	}
	// 0xa1818
	if (v2 == 10) {
		// 0xa18cc
		return 0;
	}
	// 0xa1828
	if (pfile_open_archive(0, v2) == 0) {
		// 0xa183c
		result = 0;
		// branch -> 0xa18cc
	} else {
		// 0xa1844
		function_8892c(*(int32_t *)(g23 - 0x5aa0));
		v5 = 32 * g32;
		g37 = g31 + 4;
		g38 = 32;
		function_e868c(g36 + v5);
		*(char *)(v5 + g36 + 31) = 0;
		g34 = (int32_t) * (char *)(g31 + 22);
		v4 = function_a14dc();
		CreatePlayer(0, (char)v4);
		g37 = g31 + 4;
		g38 = 32;
		function_e868c(g35 + 316);
		*(char *)(g35 + 347) = (char)g36;
		v6 = &v3;
		PackPlayer(v6, 0, 1);
		pfile_encode_hero(v6);
		game_2_ui_player(g35, g31, 0);
		g37 = g32;
		pfile_flush(1);
		result = 1;
		// branch -> 0xa18cc
	}
	// 0xa18cc
	return result;
}

// Address range: 0xa18e0 - 0xa1944
int32_t function_a18e0(int32_t a1)
{
	int32_t v1 = pfile_get_save_num_from_name(a1 + 4); // 0xa18f0
	if (v1 < 10) {
		// 0xa1908
		int32_t v2;       // bp-264
		int32_t v3 = &v2; // 0xa1914
		*(char *)(*(int32_t *)(g23 - 0x5a80) + 32 * v1) = 0;
		pfile_get_save_path(v3, 260, v1);
		g34 = v3;
		function_eb008(v3);
		// branch -> 0xa1934
	}
	// 0xa1934
	return 1;
}

// Address range: 0xa1944 - 0xa19e4
int32_t pfile_read_player_from_save(void)
{
	int32_t v1 = g36;                                                      // 0xa1944
	int32_t v2 = g35;                                                      // 0xa1950
	int32_t v3 = pfile_get_save_num_from_name(*(int32_t *)(g23 - 0x7128)); // 0xa195c
	g36 = v3;
	int32_t v4 = pfile_open_save_archive(0, v3); // 0xa196c
	g35 = v4;
	int32_t v5 = v4; // 0xa1980
	if (v4 == 0) {
		// 0xa1978
		app_fatal(*(int32_t *)(g23 - 0x5aa4));
		v5 = g35;
		// branch -> 0xa1980
	}
	// 0xa1980
	g34 = v5;
	int32_t v6;       // bp-1288
	int32_t v7 = &v6; // 0xa1984
	if (pfile_read_hero(v5, v7) == 0) {
		// 0xa1994
		app_fatal(*(int32_t *)(g23 - 0x5aa8));
		// branch -> 0xa199c
	}
	// 0xa199c
	UnPackPlayer(v7, *(int32_t *)*(int32_t *)(g23 - 0x77ac), 0);
	g34 = g35;
	*(int32_t *)*(int32_t *)(g23 - 0x75bc) = pfile_archive_contains_game(g35, g36);
	g34 = g35;
	int32_t result = pfile_SFileCloseArchive(g35); // 0xa19c8
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0xa19e4 - 0xa1a64
int32_t function_a19e4(int32_t a1)
{
	int32_t v1 = g36; // 0xa19e4
	g36 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa19f8
	pfile_get_save_num_from_name(v2 + 316 + 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac));
	int32_t result;
	if (*(char *)*(int32_t *)(g23 - 0x77d8) == 0) {
		// 0xa1a3c
		g37 = *(int32_t *)(g23 - 0x5ab0);
		g38 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
		result = sprintf();
		// branch -> 0xa1a50
	} else {
		// 0xa1a24
		g37 = *(int32_t *)(g23 - 0x5aac);
		g38 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e0);
		result = sprintf();
		// branch -> 0xa1a50
	}
	// 0xa1a50
	g36 = v1;
	return result;
}

// Address range: 0xa1a64 - 0xa1b3c
int32_t function_a1a64(int32_t a1)
{
	int32_t v1 = g36;                        // 0xa1a64
	int32_t v2 = g10;                        // 0xa1a68
	int32_t v3 = g35;                        // 0xa1a70
	int32_t v4 = *(int32_t *)(g23 - 0x77a8); // 0xa1a74
	int32_t v5 = g33;                        // 0xa1a78
	g33 = a1;
	g35 = pfile_get_save_num_from_name(v4 + 316 + 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac));
	function_a19e4(g33);
	if (pfile_open_archive(0, g35) == 0) {
		// 0xa1abc
		app_fatal(*(int32_t *)(g23 - 0x5ab4));
		// branch -> 0xa1ac4
	}
	int32_t v6 = g33; // 0xa1ac4
	g34 = v6;
	g36 = function_890f4(v6);
	g37 = g35;
	int32_t result = pfile_flush(1); // 0xa1ad8
	if (g36 != 0) {
		// 0xa1b20
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v5;
		return result;
	}
	// 0xa1ae4
	int32_t result2; // 0xa1b38
	if (*(char *)*(int32_t *)(g23 - 0x77d8) == 0) {
		// 0xa1b0c
		g37 = *(int32_t *)(g23 - 0x5a88);
		g38 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
		result2 = sprintf();
		// branch -> 0xa1b20
	} else {
		// 0xa1af4
		g37 = *(int32_t *)(g23 - 0x5a8c);
		g38 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e0);
		result2 = sprintf();
		// branch -> 0xa1b20
	}
	// 0xa1b20
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v5;
	return result2;
}

// Address range: 0xa1b3c - 0xa1b8c
int32_t pfile_get_game_name(int32_t a1)
{
	int32_t v1 = g36; // 0xa1b3c
	g36 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0xa1b50
	pfile_get_save_num_from_name(v2 + 316 + 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac));
	g34 = g36;
	g37 = *(int32_t *)(g23 - 0x5a90);
	g36 = v1;
	return strcpy();
}

// Address range: 0xa1b8c - 0xa1be8
int32_t function_a1b8c(uint32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0xa1b8c
	g38 = a1;
	if (a1 <= 16) {
		// 0xa1ba4
		// branch -> 0xa1bc8
		// 0xa1bc8
		g37 = *(int32_t *)(g23 - 0x5a88);
		sprintf();
		// branch -> 0xa1bd8
		// 0xa1bd8
		g10 = v1;
		return 1;
	}
	// 0xa1bac
	int32_t result;
	if (a1 <= 33) {
		// 0xa1bb4
		g38 = a1 - 17;
		// branch -> 0xa1bc8
		// 0xa1bc8
		g37 = *(int32_t *)(g23 - 0x5a8c);
		sprintf();
		result = 1;
		// branch -> 0xa1bd8
	} else {
		result = 0;
	}
	// 0xa1bd8
	g10 = v1;
	return result;
}

// Address range: 0xa1be8 - 0xa1c44
int32_t function_a1be8(uint32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0xa1be8
	g38 = a1;
	if (a1 <= 16) {
		// 0xa1c00
		// branch -> 0xa1c24
		// 0xa1c24
		g37 = *(int32_t *)(g23 - 0x5ab0);
		sprintf();
		// branch -> 0xa1c34
		// 0xa1c34
		g10 = v1;
		return 1;
	}
	// 0xa1c08
	int32_t result;
	if (a1 <= 33) {
		// 0xa1c10
		g38 = a1 - 17;
		// branch -> 0xa1c24
		// 0xa1c24
		g37 = *(int32_t *)(g23 - 0x5aac);
		sprintf();
		result = 1;
		// branch -> 0xa1c34
	} else {
		result = 0;
	}
	// 0xa1c34
	g10 = v1;
	return result;
}

// Address range: 0xa1c44 - 0xa1cc8
int32_t pfile_remove_temp_files(int32_t a1)
{
	int32_t v1 = g36;                            // 0xa1c44
	int32_t v2 = g10;                            // 0xa1c48
	int32_t result = *(int32_t *)(g23 - 0x77f0); // 0xa1c4c
	if (*(char *)result > 1) {
		// 0xa1cb4
		g36 = v1;
		g10 = v2;
		return result;
	}
	int32_t v3 = *(int32_t *)(g23 - 0x77ac);                                       // 0xa1c64
	int32_t v4 = *(int32_t *)(g23 - 0x77a8);                                       // 0xa1c68
	int32_t v5 = pfile_get_save_num_from_name(v4 + 316 + 0x55ec * *(int32_t *)v3); // 0xa1c7c
	g36 = v5;
	if (pfile_open_archive(0, v5) == 0) {
		// 0xa1c98
		app_fatal(*(int32_t *)(g23 - 0x5ab8));
		// branch -> 0xa1ca0
	}
	// 0xa1ca0
	function_8892c(*(int32_t *)(g23 - 0x5abc));
	g37 = g36;
	int32_t result2 = pfile_flush(1); // 0xa1cc4
	// branch -> 0xa1cb4
	// 0xa1cb4
	g36 = v1;
	g10 = v2;
	return result2;
}

// Address range: 0xa1cc8 - 0xa1d9c
int32_t function_a1cc8(int32_t a1)
{
	int32_t v1 = g36;                                                              // 0xa1cc8
	int32_t v2 = g10;                                                              // 0xa1ccc
	int32_t v3 = *(int32_t *)(g23 - 0x77ac);                                       // 0xa1cd0
	int32_t v4 = g35;                                                              // 0xa1cd4
	int32_t v5 = *(int32_t *)(g23 - 0x77a8);                                       // 0xa1cd8
	int32_t v6 = pfile_get_save_num_from_name(v5 + 316 + 0x55ec * *(int32_t *)v3); // 0xa1cf4
	g36 = v6;
	if (pfile_open_archive(0, v6) == 0) {
		// 0xa1d10
		app_fatal(*(int32_t *)(g23 - 0x5ab8));
		// branch -> 0xa1d18
	}
	// 0xa1d18
	g35 = 0;
	int32_t v7;       // bp-272
	int32_t v8 = &v7; // 0xa1d68
	int32_t result;   // 0xa1d80
	if (function_a1be8(0, v8) == 0) {
		// 0xa1d78
		g37 = g36;
		result = pfile_flush(1);
		g36 = v1;
		g10 = v2;
		g35 = v4;
		return result;
	}
	// 0xa1d20
	int32_t v9;        // bp-532
	int32_t v10 = &v9; // 0xa1d24
	// branch -> 0xa1d20
	while (true) {
		// 0xa1d20
		function_a1b8c(g35, v10);
		g35++;
		g34 = v8;
		if (function_890f4(v8) != 0) {
			// 0xa1d40
			g34 = v10;
			if (function_890f4(v10) != 0) {
				// 0xa1d50
				g34 = v10;
				function_8890c(v10);
				// branch -> 0xa1d58
			}
			// 0xa1d58
			g34 = v8;
			function_89088(v8, v10);
			// branch -> 0xa1d64
		}
		// 0xa1d64
		if (function_a1be8(g35, v8) == 0) {
			// break -> 0xa1d78
			break;
		}
		// continue -> 0xa1d20
	}
	// 0xa1d78
	g37 = g36;
	result = pfile_flush(1);
	g36 = v1;
	g10 = v2;
	g35 = v4;
	return result;
}

// Address range: 0xa1d9c - 0xa1e7c
int32_t pfile_write_save_file(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0xa1dac
	g33 = a3;
	g35 = a4;
	g36 = pfile_get_save_num_from_name(v1 + 316 + 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac));
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x5ac0); // bp-52
	int32_t v3 = &v2;
	if ((*(char *)*(int32_t *)(g23 - 0x77f0) || 1) != 1) {
		// 0xa1e10
		g34 = v3;
		g37 = *(int32_t *)(g23 - 0x5a98);
		strcpy();
		// branch -> 0xa1e1c
	}
	// 0xa1e1c
	codec_encode((int32_t *)a2, g33, g35, v3);
	if (pfile_open_archive(0, g36) == 0) {
		// 0xa1e44
		app_fatal(*(int32_t *)(g23 - 0x5ab8));
		// branch -> 0xa1e4c
	}
	// 0xa1e4c
	mpqapi_write_file(g31, g32, g35);
	g37 = g36;
	int32_t result = pfile_flush(1); // 0xa1e64
	return result;
}

// Address range: 0xa1e7c - 0xa2008
int32_t pfile_read(int32_t a1, int32_t *a2)
{
	int32_t v1 = g36;                        // 0xa1e7c
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0xa1e84
	int32_t v3 = g35;                        // 0xa1e88
	g35 = (int32_t)a2;
	int32_t v4 = *(int32_t *)(g23 - 0x77a8); // 0xa1e90
	int32_t v5 = g33;                        // 0xa1e94
	g36 = *(int32_t *)(g23 - 0x5acc);
	int32_t v6 = pfile_get_save_num_from_name(v4 + 316 + 0x55ec * *(int32_t *)v2); // 0xa1ebc
	int32_t v7 = pfile_open_save_archive(0, v6);                                            // 0xa1ec8
	g33 = v7;
	int32_t v8 = v7; // 0xa1edc
	if (v7 == 0) {
		// 0xa1ed4
		app_fatal(*(int32_t *)(g23 - 0x5ac4));
		v8 = g33;
		// branch -> 0xa1edc
	}
	// 0xa1edc
	g34 = v8;
	int32_t v9 = g32; // 0xa1ee4
	g37 = v9;
	int32_t v10;
	if (SFileOpenFileEx(v8, v9, 0) == 0) {
		// 0xa1efc
		app_fatal(*(int32_t *)(v10 - 0x5ac8));
		// branch -> 0xa1f04
	}
	int32_t v11 = 0; // bp-32
	g34 = v11;
	g37 = 0;
	*(int32_t *)g35 = SFileGetFileSize(v11, 0);
	app_fatal(g36);
	g34 = 0;
	int32_t v12 = DiabloAllocPtr(); // 0xa1f30
	g34 = v11;
	g32 = v12;
	g37 = v12;
	int32_t v13;                                                 // bp-36
	int32_t v14 = SFileReadFile(v11, v12, 0, (int32_t)&v13, 0); // 0xa1f50
	int32_t v15 = v10;                                           // 0xa1fa0
	if (v14 == 0) {
		// 0xa1f60
		app_fatal(*(int32_t *)(v10 - 0x5ad0));
		v15 = g23;
		// branch -> 0xa1f68
	}
	int32_t v16 = *(int32_t *)(v15 - 0x5ad4); // 0xa1f68
	int32_t v17 = *(int32_t *)v16;            // bp-52
	int32_t v18 = &v17;
	int32_t v19 = *(int32_t *)(v16 + 8); // 0xa1fa8
	if ((*(char *)*(int32_t *)(v15 - 0x77f0) || 1) != 1) {
		// 0xa1f9c
		g34 = v18;
		g37 = *(int32_t *)(v15 - 0x5a98);
		strcpy();
		v19 = g37;
		// branch -> 0xa1fa8
	}
	int32_t v20 = codec_decode((int32_t *)g32, v19, v18); // 0xa1fb4
	*(int32_t *)g35 = v20;
	g34 = v11;
	SFileCloseFile();
	int32_t v21 = g33; // 0xa1fc8
	g34 = v21;
	pfile_SFileCloseArchive(v21);
	if (v19 == 0) {
		// 0xa1fdc
		app_fatal(g36);
		// branch -> 0xa1fe4
	}
	// 0xa1fe4
	g36 = v1;
	g35 = v3;
	g33 = v5;
	return g32;
}

// Address range: 0xa2008 - 0xa208c
int32_t pfile_update(int32_t a1)
{
	// 0xa2008
	g36 = a1;
	if (*(char *)(g23 - 0x4c6c) == 0) {
		// 0xa2028
		*(int32_t *)(g23 - 0x4c68) = 0;
		*(char *)(g23 - 0x4c6c) = (char)1;
		// branch -> 0xa2038
	}
	int32_t result = *(int32_t *)(g23 - 0x77f0); // 0xa2038
	g34 = result;
	if (*(char *)result == 1) {
		// 0xa2078
		return result;
	}
	int32_t result3 = GetTickCount(); // 0xa2048
	int32_t v1;
	int32_t *v2 = (int32_t *)(v1 - 0x4c68); // 0xa2058
	int32_t result2;                        // 0xa2074
	if (g36 != 0) {
		// 0xa2070
		*v2 = result3;
		result2 = pfile_write_hero(result3);
		// branch -> 0xa2078
		// 0xa2078
		return result2;
	}
	// 0xa2058
	if (result3 - *v2 <= (int32_t) "MoveWindow" - 0x15a0) {
		// 0xa2078
		return result3;
	}
	// 0xa2070
	*v2 = result3;
	result2 = pfile_write_hero(result3);
	// branch -> 0xa2078
	// 0xa2078
	return result2;
}
