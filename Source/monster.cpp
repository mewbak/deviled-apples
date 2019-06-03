// Address range: 0x79278 - 0x793f0
int32_t InitMonsterTRN(int32_t a1, int32_t a2)
{
	int32_t v1 = 520 * a1; // 0x79280
	g33 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7610); // 0x79284
	g36 = v2;
	g29 = a2;
	int32_t v3 = v2 + v1 + 516; // 0x79298
	g34 = *(int32_t *)v3;
	g31 = v3;
	int32_t v4 = function_c9948(); // 0x7929c
	int32_t v5 = 32;               // ctr
	int32_t v6 = 0;                // r0
	int32_t v7 = 255;              // r5
	// branch -> 0x792b0
	while (true) {
		char *v8 = (char *)v4; // 0x792b0
		if (*v8 == -1) {
			// 0x792bc
			*v8 = (char)v6;
			// branch -> 0x792c0
		}
		int32_t v9 = v4 + 1;    // 0x792c0
		char *v10 = (char *)v9; // 0x792c0
		v4 = v9;
		if (*v10 == -1) {
			// 0x792cc
			*v10 = (char)v6;
			v9 = v4;
			// branch -> 0x792d0
		}
		int32_t v11 = v9 + 1;    // 0x792d0
		char *v12 = (char *)v11; // 0x792d0
		v4 = v11;
		int32_t v13 = v7 - 1; // 0x792d4
		v7 = v13;
		if (*v12 == -1) {
			// 0x792e0
			*v12 = (char)v6;
			v13 = v7;
			v11 = v4;
			// branch -> 0x792e4
		}
		int32_t v14 = v11 + 1;   // 0x792e4
		char *v15 = (char *)v14; // 0x792e4
		v4 = v14;
		int32_t v16 = v13 - 1; // 0x792e8
		v7 = v16;
		if (*v15 == -1) {
			// 0x792f4
			*v15 = (char)v6;
			v16 = v7;
			v14 = v4;
			// branch -> 0x792f8
		}
		int32_t v17 = v14 + 1;   // 0x792f8
		char *v18 = (char *)v17; // 0x792f8
		v4 = v17;
		int32_t v19 = v16 - 1; // 0x792fc
		v7 = v19;
		if (*v18 == -1) {
			// 0x79308
			*v18 = (char)v6;
			v19 = v7;
			v17 = v4;
			// branch -> 0x7930c
		}
		int32_t v20 = v17 + 1;   // 0x7930c
		char *v21 = (char *)v20; // 0x7930c
		v4 = v20;
		int32_t v22 = v19 - 1; // 0x79310
		v7 = v22;
		if (*v21 == -1) {
			// 0x7931c
			*v21 = (char)v6;
			v22 = v7;
			v20 = v4;
			// branch -> 0x79320
		}
		int32_t v23 = v20 + 1;   // 0x79320
		char *v24 = (char *)v23; // 0x79320
		v4 = v23;
		int32_t v25 = v22 - 1; // 0x79324
		v7 = v25;
		if (*v24 == -1) {
			// 0x79330
			*v24 = (char)v6;
			v25 = v7;
			v23 = v4;
			// branch -> 0x79334
		}
		int32_t v26 = v23 + 1;   // 0x79334
		char *v27 = (char *)v26; // 0x79334
		v4 = v26;
		int32_t v28 = v25 - 1; // 0x79338
		v7 = v28;
		if (*v27 == -1) {
			// 0x79344
			*v27 = (char)v6;
			v28 = v7;
			v26 = v4;
			// branch -> 0x79348
		}
		// 0x79348
		v7 = v28 - 1;
		int32_t v29 = v5 - 1; // 0x79350
		v5 = v29;
		if (v29 == 0) {
			// break -> 0x7937c
			break;
		}
		v4 = v26 + 1;
		// continue -> 0x792b0
	}
	int32_t v30 = g29 == 0 ? 5 : 6;
	g35 = v30;
	int32_t v31 = g33 + g36; // 0x7936c
	g32 = v31;
	g33 = v31;
	int32_t v32 = 0; // 0x7937c
	// branch -> 0x7937c
	while (true) {
		// 0x7937c
		int32_t v33; // 0x793a8
		int32_t v34; // 0x793ac
		if (v32 == 1) {
			unsigned char v35 = *(char *)g32; // 0x79384
			int32_t v36;                      // 0x793c4
			int32_t v37;                      // 0x793c8
			int32_t v38;                      // 0x793cc
			if (v35 >= 105) {
				// 0x79390
				if (v35 < 109) {
					v38 = v30;
					v37 = 1;
					v36 = v31;
				lab_0x793c4:;
					int32_t v39 = v36 + 76; // 0x793c4
					g33 = v39;
					int32_t v40 = v37 + 1; // 0x793c8
					g29 = v40;
					if (v40 >= v38) {
						// break -> 0x793d4
						break;
					}
					v30 = v38;
					v31 = v39;
					v32 = v40;
					// continue -> 0x7937c
					continue;
				}
			}
			// 0x79398
			g36 = v31;
			v33 = v31;
			v34 = v31;
			// branch -> 0x793a4
		lab_0x793a4:;
			int32_t v41;
			while (true) {
				// 0x793a4
				function_4fd0c(v33 + 8, *(int32_t *)(g32 + 516), *(int32_t *)(v34 + 72));
				int32_t v42 = g30 + 1; // 0x793b4
				g30 = v42;
				int32_t v43 = g36 + 8; // 0x793b8
				g36 = v43;
				v41 = g33;
				if (v42 >= 8) {
					// break -> 0x793c4
					break;
				}
				v33 = v43;
				v34 = v41;
				// continue -> 0x793a4
			}
			// 0x793c4
			v38 = g35;
			v37 = g29;
			v36 = v41;
			// branch -> 0x793c4
			goto lab_0x793c4;
		}
		// 0x79398
		g36 = v31;
		v33 = v31;
		v34 = v31;
		// branch -> 0x793a4
		goto lab_0x793a4;
	}
}

// Address range: 0x793f0 - 0x795ec
int32_t InitLevelMonsters(void)
{
	int32_t v1 = g36; // 0x793f0
	int32_t v2 = 0;   // r31
	*(int32_t *)*(int32_t *)(g23 - 0x7618) = 0;
	int32_t v3 = *(int32_t *)(g23 - 0x7080); // 0x79410
	*(int32_t *)*(int32_t *)(g23 - 0x707c) = v2;
	int32_t v4 = *(int32_t *)(g23 - 0x7610); // 0x79418
	*(int32_t *)v3 = v2;
	*(char *)(v4 + 1) = (char)v2;
	*(char *)(v4 + 521) = (char)v2;
	*(char *)(v4 + 1041) = (char)v2;
	*(char *)(v4 + 1561) = (char)v2;
	*(char *)(v4 + 2081) = (char)v2;
	*(char *)(v4 + 2601) = (char)v2;
	*(char *)(v4 + 3121) = (char)v2;
	*(char *)(v4 + 3641) = (char)v2;
	*(char *)(v4 + 0x1041) = (char)v2;
	*(char *)(v4 + 0x1249) = (char)v2;
	*(char *)(v4 + 0x1451) = (char)v2;
	*(char *)(v4 + 0x1659) = (char)v2;
	*(char *)(v4 + 0x1861) = (char)v2;
	*(char *)(v4 + 0x1a69) = (char)v2;
	*(char *)(v4 + 0x1c71) = (char)v2;
	*(char *)(v4 + 0x1e79) = (char)v2;
	function_7a430(v3, v4);
	*(int32_t *)*(int32_t *)(g23 - 0x762c) = g36;
	int32_t v5 = *(int32_t *)(g23 - 0x7628); // r9
	*(int32_t *)*(int32_t *)(g23 - 0x7084) = 200;
	*(int32_t *)v5 = g36;
	int32_t v6 = g36; // 0x79488
	*(int32_t *)(v5 + 4) = v6 + 1;
	int32_t v7 = g36; // 0x79498
	*(int32_t *)(v5 + 8) = v6 + 2;
	int32_t v8 = g36; // 0x794a4
	*(int32_t *)(v5 + 12) = v6 + 3;
	int32_t v9 = g36; // 0x794b4
	*(int32_t *)(v5 + 16) = v7 + 4;
	*(int32_t *)(v5 + 20) = v7 + 5;
	*(int32_t *)(v5 + 24) = v8 + 6;
	*(int32_t *)(v5 + 28) = v8 + 7;
	int32_t v10 = g36;     // 0x794d8
	int32_t v11 = v10 + 8; // 0x794dc
	v2 = v11;
	*(int32_t *)(v5 + 32) = v11;
	*(int32_t *)(v5 + 36) = v8 + 9;
	int32_t v12 = v2; // 0x794e8
	*(int32_t *)(v5 + 40) = v9 + 10;
	int32_t v13 = v2; // 0x794f0
	*(int32_t *)(v5 + 44) = v9 + 11;
	int32_t v14 = v2; // 0x794f8
	*(int32_t *)(v5 + 48) = g36 + 12;
	int32_t v15 = v2; // 0x79500
	*(int32_t *)(v5 + 52) = g36 + 13;
	int32_t v16 = v2; // 0x79508
	*(int32_t *)(v5 + 56) = g36 + 14;
	int32_t v17 = v2; // 0x79510
	*(int32_t *)(v5 + 60) = v10 + 15;
	int32_t v18 = v2;      // 0x79518
	int32_t v19 = v18 + 8; // 0x7951c
	v2 = v19;
	*(int32_t *)(v5 + 64) = v19;
	*(int32_t *)(v5 + 68) = v12 + 9;
	int32_t v20 = v2; // 0x79528
	*(int32_t *)(v5 + 72) = v13 + 10;
	int32_t v21 = v2; // 0x79530
	*(int32_t *)(v5 + 76) = v14 + 11;
	int32_t v22 = v2; // 0x79538
	*(int32_t *)(v5 + 80) = v15 + 12;
	int32_t v23 = v2; // 0x79540
	*(int32_t *)(v5 + 84) = v16 + 13;
	int32_t v24 = v2; // 0x79548
	*(int32_t *)(v5 + 88) = v17 + 14;
	int32_t v25 = v2; // 0x79550
	*(int32_t *)(v5 + 92) = v18 + 15;
	int32_t v26 = v2;      // 0x79558
	int32_t v27 = v26 + 8; // 0x7955c
	v2 = v27;
	*(int32_t *)(v5 + 96) = v27;
	*(int32_t *)(v5 + 100) = v20 + 9;
	*(int32_t *)(v5 + 104) = v21 + 10;
	*(int32_t *)(v5 + 108) = v22 + 11;
	*(int32_t *)(v5 + 112) = v23 + 12;
	*(int32_t *)(v5 + 116) = v24 + 13;
	*(int32_t *)(v5 + 120) = v25 + 14;
	*(int32_t *)(v5 + 124) = v26 + 15;
	int32_t v28 = v2;      // 0x79598
	int32_t v29 = v28 + 8; // 0x7959c
	*(int32_t *)(v5 + 128) = v29;
	g36 = v29 + 8;
	*(int32_t *)(v5 + 132) = v2 + 9;
	*(int32_t *)(v5 + 136) = v2 + 10;
	*(int32_t *)(v5 + 140) = v2 + 11;
	*(int32_t *)(v5 + 144) = v2 + 12;
	*(int32_t *)(v5 + 148) = v2 + 13;
	*(int32_t *)(v5 + 152) = v2 + 14;
	*(int32_t *)(v5 + 156) = v28 + 15;
	int32_t v30 = v5 + 160; // 0x795c4
	v5 = v30;
	int32_t v31 = 4; // 0x795c8
	// branch -> 0x79484
	while (v31 != 0) {
		// 0x79484
		*(int32_t *)v30 = g36;
		v6 = g36;
		*(int32_t *)(v5 + 4) = v6 + 1;
		v7 = g36;
		*(int32_t *)(v5 + 8) = v6 + 2;
		v8 = g36;
		*(int32_t *)(v5 + 12) = v6 + 3;
		v9 = g36;
		*(int32_t *)(v5 + 16) = v7 + 4;
		*(int32_t *)(v5 + 20) = v7 + 5;
		*(int32_t *)(v5 + 24) = v8 + 6;
		*(int32_t *)(v5 + 28) = v8 + 7;
		v10 = g36;
		v11 = v10 + 8;
		v2 = v11;
		*(int32_t *)(v5 + 32) = v11;
		*(int32_t *)(v5 + 36) = v8 + 9;
		v12 = v2;
		*(int32_t *)(v5 + 40) = v9 + 10;
		v13 = v2;
		*(int32_t *)(v5 + 44) = v9 + 11;
		v14 = v2;
		*(int32_t *)(v5 + 48) = g36 + 12;
		v15 = v2;
		*(int32_t *)(v5 + 52) = g36 + 13;
		v16 = v2;
		*(int32_t *)(v5 + 56) = g36 + 14;
		v17 = v2;
		*(int32_t *)(v5 + 60) = v10 + 15;
		v18 = v2;
		v19 = v18 + 8;
		v2 = v19;
		*(int32_t *)(v5 + 64) = v19;
		*(int32_t *)(v5 + 68) = v12 + 9;
		v20 = v2;
		*(int32_t *)(v5 + 72) = v13 + 10;
		v21 = v2;
		*(int32_t *)(v5 + 76) = v14 + 11;
		v22 = v2;
		*(int32_t *)(v5 + 80) = v15 + 12;
		v23 = v2;
		*(int32_t *)(v5 + 84) = v16 + 13;
		v24 = v2;
		*(int32_t *)(v5 + 88) = v17 + 14;
		v25 = v2;
		*(int32_t *)(v5 + 92) = v18 + 15;
		v26 = v2;
		v27 = v26 + 8;
		v2 = v27;
		*(int32_t *)(v5 + 96) = v27;
		*(int32_t *)(v5 + 100) = v20 + 9;
		*(int32_t *)(v5 + 104) = v21 + 10;
		*(int32_t *)(v5 + 108) = v22 + 11;
		*(int32_t *)(v5 + 112) = v23 + 12;
		*(int32_t *)(v5 + 116) = v24 + 13;
		*(int32_t *)(v5 + 120) = v25 + 14;
		*(int32_t *)(v5 + 124) = v26 + 15;
		v28 = v2;
		v29 = v28 + 8;
		*(int32_t *)(v5 + 128) = v29;
		g36 = v29 + 8;
		*(int32_t *)(v5 + 132) = v2 + 9;
		*(int32_t *)(v5 + 136) = v2 + 10;
		*(int32_t *)(v5 + 140) = v2 + 11;
		*(int32_t *)(v5 + 144) = v2 + 12;
		*(int32_t *)(v5 + 148) = v2 + 13;
		*(int32_t *)(v5 + 152) = v2 + 14;
		*(int32_t *)(v5 + 156) = v28 + 15;
		v30 = v5 + 160;
		v5 = v30;
		v31--;
		// continue -> 0x79484
	}
	int32_t result = *(int32_t *)(g23 - 0x7088); // 0x795cc
	*(int32_t *)result = 0;
	g36 = v1;
	return result;
}

// Address range: 0x795ec - 0x796d4
int32_t function_795ec(char a1, int32_t a2)
{
	int32_t v1 = a1;                         // r3
	int32_t v2 = g36;                        // 0x795ec
	int32_t v3 = g10;                        // 0x795f0
	int32_t v4 = *(int32_t *)(g23 - 0x7618); // 0x795f4
	int32_t v5 = g35;                        // 0x795fc
	g35 = a2;
	int32_t v6 = g33;                        // 0x79604
	int32_t v7 = *(int32_t *)(g23 - 0x7610); // 0x79608
	g33 = v7;
	int32_t v8 = *(int32_t *)v4; // 0x7961c
	int32_t result;              // 0x796ac
	int32_t *v9;                 // 0x79658
	int32_t *v10;                // 0x79684
	int32_t v11;                 // 0x79658
	int32_t v12;                 // 0x79678
	int32_t v13;                 // 0x79684
	char *v14;                   // 0x796a8
	int32_t v15;                 // 0x79674
	if (v8 <= 0) {
		// 0x7964c
		result = -1;
		// 0x79658
		v9 = (int32_t *)v4;
		v11 = *v9;
		*v9 = v11 + 1;
		v15 = *(int32_t *)(g23 - 0x707c);
		v12 = 128 * v1 + *(int32_t *)(g23 - 0x72b4);
		*(char *)(520 * v11 + g33) = (char)v1;
		v10 = (int32_t *)v15;
		v13 = *v10;
		*v10 = *(int32_t *)(v12 + 4) + v13;
		function_79bec(v11, v12, v13, v15);
		function_4c278(g36);
		result = g36;
		// branch -> 0x796a0
		// 0x796a0
		v14 = (char *)(g33 + 520 * result + 1);
		*v14 = (char)(g35 | (int32_t)*v14);
		g10 = v3;
		g36 = v2;
		g35 = v5;
		g33 = v6;
		return result;
	}
	int32_t v16 = 0; // 0x7962c
	int32_t v17 = 0; // 0x79644
	int32_t v18;     // 0x7964c
	int32_t v19;     // 0x79650
	while (true) {
		// 0x79644
		if (v17 == 0) {
			int32_t v20 = v7; // 0x79624
			v7 = v20 + 520;
			int32_t v21 = llvm_ctlz_i32((int32_t) * (char *)v20 - v1, true); // 0x79634
			int32_t v22 = __asm_rlwinm(v21, 27, 24, 31);                     // 0x79638
			int32_t v23 = v16 + 1;                                           // 0x7963c
			if (v23 >= v8) {
				v19 = v23;
				v18 = v22;
				// break -> 0x7964c
				break;
			}
			v16 = v23;
			v17 = v22;
			// continue -> 0x79644
			continue;
		} else {
			v19 = v16;
			v18 = v17;
		}
	}
	// 0x7964c
	result = v19 - 1;
	if (v18 == 0) {
		// 0x79658
		v9 = (int32_t *)v4;
		v11 = *v9;
		*v9 = v11 + 1;
		v15 = *(int32_t *)(g23 - 0x707c);
		v12 = 128 * v1 + *(int32_t *)(g23 - 0x72b4);
		*(char *)(520 * v11 + g33) = (char)v1;
		v10 = (int32_t *)v15;
		v13 = *v10;
		*v10 = *(int32_t *)(v12 + 4) + v13;
		function_79bec(v11, v12, v13, v15);
		function_4c278(g36);
		result = g36;
		// branch -> 0x796a0
	}
	// 0x796a0
	v14 = (char *)(g33 + 520 * result + 1);
	*v14 = (char)(g35 | (int32_t)*v14);
	g10 = v3;
	g36 = v2;
	g35 = v5;
	g33 = v6;
	return result;
}

// Address range: 0x796d4 - 0x79bec
int32_t GetLevelMTypes(int32_t a1)
{
	int32_t v1 = g10; // 0x796d8
	g30 = *(int32_t *)(g23 - 0x709c);
	g27 = *(int32_t *)(g23 - 0x7090);
	g24 = *(int32_t *)(g23 - 0x708c);
	g31 = *(int32_t *)(g23 - 0x707c);
	g32 = *(int32_t *)(g23 - 0x7618);
	g33 = *(int32_t *)(g23 - 0x77e4);
	g35 = *(int32_t *)(g23 - 0x72b4);
	function_795ec(109, 2);
	if (*(char *)g33 == 16) {
		// 0x79718
		function_795ec(108, 1);
		function_795ec(96, 1);
		int32_t result = function_795ec(110, 2); // 0x79738
		// branch -> 0x79bd8
		// 0x79bd8
		g10 = v1;
		return result;
	}
	// 0x79740
	int32_t result2;
	if (*(char *)*(int32_t *)(g23 - 0x77d8) == 0) {
		// 0x79750
		if (QuestStatus(6) != 0) {
			// 0x79760
			function_795ec(51, 2);
			// branch -> 0x7976c
		}
		// 0x7976c
		if (QuestStatus(2) != 0) {
			// 0x7977c
			function_795ec(*(char *)g24, 4);
			// branch -> 0x7978c
		}
		// 0x7978c
		if (QuestStatus(3) != 0) {
			// 0x7979c
			function_795ec(*(char *)(g24 + 64), 4);
			// branch -> 0x797ac
		}
		// 0x797ac
		if (QuestStatus(7) != 0) {
			// 0x797bc
			function_795ec(*(char *)(g24 + 96), 4);
			// branch -> 0x797cc
		}
		// 0x797cc
		if (QuestStatus(4) != 0) {
			// 0x797dc
			function_795ec(*(char *)(g24 + 224), 4);
			// branch -> 0x797ec
		}
		// 0x797ec
		if (QuestStatus(11) != 0) {
			// 0x797fc
			function_795ec(*(char *)(g24 + 256), 4);
			// branch -> 0x7980c
		}
		// 0x7980c
		if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
			// 0x7981c
			if (*(char *)g33 == *(char *)(*(int32_t *)(g23 - 0x7604) + 288)) {
				// 0x79830
				function_795ec(50, 4);
				int32_t v2 = g35 + 1024; // r25
				int32_t v3 = g27 + 8;    // r24
				g36 = -0x77777777;
				int32_t v4;       // bp-1304
				int32_t v5 = &v4; // 0x7984c
				g24 = v5;
				int32_t v6 = 0; // r21
				g26 = 8;
				int32_t v7 = 8; // 0x79858
				// branch -> 0x79858
				while (true) {
					// 0x79858
					if (function_86dcc(v7) != 0) {
						int32_t v8 = v2;                                                            // 0x79868
						int32_t v9 = (int32_t) * (char *)g33;                                       // 0x79874
						int32_t v10 = 15 * (int32_t) * (char *)(v8 + 85);                           // 0x79878
						int32_t v11 = 15 * (int32_t) * (char *)(v8 + 84);                           // 0x79880
						int64_t v12 = g36;                                                          // 0x79884
						int32_t v13 = ((int32_t)(v12 * (int64_t)v10 / 0x100000000) + v10) / 16 + 1; // 0x798b4
						if (v9 > ((int32_t)(v12 * (int64_t)v11 / 0x100000000) + v11) / 16) {
							// 0x798bc
							if (v9 <= v13) {
								// 0x798c4
								if (*(char *)v3 % 4 != 0) {
									int32_t v14 = v6; // 0x798d0
									v6 = v14 + 1;
									*(int32_t *)(g24 + 4 * v14) = g26;
									// branch -> 0x798dc
								}
							}
						}
					}
					int32_t v15 = g26 + 1; // 0x798dc
					g26 = v15;
					v3++;
					v2 += 128;
					if (v15 >= 28) {
						// break -> 0x798f0
						break;
					}
					v7 = v15;
					// continue -> 0x79858
				}
				// 0x798f0
				g37 = v6;
				int32_t v16 = *(int32_t *)(4 * random(88) + v5); // 0x79904
				function_795ec((char)v16, 1);
				// branch -> 0x79910
			}
		}
		// 0x79910
		int32_t v17;                           // bp-852
		int32_t v18 = &v17;                    // 0x79914
		int32_t v19 = 37;                      // ctr
		int32_t v20 = -0x77777777;             // r0
		int32_t v21 = (int32_t) * (char *)g33; // 0x79924
		int32_t result3 = g35;                 // 0x79928
		int32_t v22 = v18;                     // r4
		g29 = 0;
		int32_t v23 = 0;           // r6
		int32_t v24 = 0;           // 0x79afc41
		int32_t v25 = v18;         // 0x7999c
		int32_t v26 = 0;           // 0x7999c
		int32_t v27 = -0x77777777; // 0x79954
		// branch -> 0x79938
		while (true) {
			int32_t v28 = 15 * (int32_t) * (char *)(result3 + 85);                      // 0x79944
			int32_t v29 = 15 * (int32_t) * (char *)(result3 + 84);                      // 0x7994c
			int64_t v30 = v27;                                                          // 0x79950
			int32_t v31 = ((int32_t)((int64_t)v28 * v30 / 0x100000000) + v28) / 16 + 1; // 0x79980
			int32_t v32 = v24;                                                          // 0x79afc40
			int32_t v33 = v21;                                                          // 0x79a04
			int32_t v34 = v27;                                                          // 0x799d0
			int32_t v35 = v26;                                                          // 0x799b4
			int32_t v36 = result3;                                                      // 0x799c0
			int32_t v37 = v25;                                                          // 0x79a18
			if (v21 > ((int32_t)((int64_t)v29 * v30 / 0x100000000) + v29) / 16) {
				// 0x79988
				if (v21 <= v31) {
					// 0x79990
					if (*(char *)g27 % 4 != 0) {
						// 0x7999c
						*(int32_t *)v25 = v26;
						int32_t v38 = v22 + 4; // 0x799a0
						v22 = v38;
						int32_t v39 = g29 + 1; // 0x799a4
						g29 = v39;
						v32 = v39;
						v33 = v21;
						v34 = v20;
						v35 = v23;
						v36 = result3;
						v37 = v38;
						// branch -> 0x799a8
					} else {
						v32 = v24;
						v33 = v21;
						v34 = v27;
						v35 = v26;
						v36 = result3;
						v37 = v25;
					}
				} else {
					v32 = v24;
					v33 = v21;
					v34 = v27;
					v35 = v26;
					v36 = result3;
					v37 = v25;
				}
			}
			int32_t v40 = g27 + 1; // 0x799ac
			int32_t v41 = v40;     // r23
			int32_t v42 = v35 + 1; // 0x799b4
			v23 = v42;
			int32_t v43 = 15 * (int32_t) * (char *)(v36 + 213); // 0x799bc
			int32_t v44 = v36 + 128;                            // 0x799c0
			result3 = v44;
			int32_t v45 = 15 * (int32_t) * (char *)(v36 + 212);                         // 0x799c8
			int64_t v46 = v34;                                                          // 0x799cc
			int32_t v47 = ((int32_t)((int64_t)v43 * v46 / 0x100000000) + v43) / 16 + 1; // 0x799fc
			int32_t v48 = v32;                                                          // 0x79afc39
			int32_t v49 = v33;                                                          // 0x79a80
			int32_t v50 = v34;                                                          // 0x79a4c
			int32_t v51 = v42;                                                          // 0x79a30
			int32_t v52 = v40;                                                          // 0x79a28
			int32_t v53 = v44;                                                          // 0x79a3c
			int32_t v54 = v37;                                                          // 0x79a94
			if (v33 > ((int32_t)((int64_t)v45 * v46 / 0x100000000) + v45) / 16) {
				// 0x79a04
				if (v33 <= v47) {
					// 0x79a0c
					if (*(char *)v40 % 4 != 0) {
						// 0x79a18
						*(int32_t *)v37 = v42;
						int32_t v55 = v22 + 4; // 0x79a1c
						v22 = v55;
						int32_t v56 = g29 + 1; // 0x79a20
						g29 = v56;
						v48 = v56;
						v49 = v21;
						v50 = v20;
						v51 = v23;
						v52 = v41;
						v53 = result3;
						v54 = v55;
						// branch -> 0x79a24
					} else {
						v48 = v32;
						v49 = v33;
						v50 = v34;
						v51 = v42;
						v52 = v40;
						v53 = v44;
						v54 = v37;
					}
				} else {
					v48 = v32;
					v49 = v33;
					v50 = v34;
					v51 = v42;
					v52 = v40;
					v53 = v44;
					v54 = v37;
				}
			}
			int32_t v57 = v52 + 1; // 0x79a28
			v41 = v57;
			int32_t v58 = v51 + 1; // 0x79a30
			v23 = v58;
			int32_t v59 = 15 * (int32_t) * (char *)(v53 + 213); // 0x79a38
			int32_t v60 = v53 + 128;                            // 0x79a3c
			result3 = v60;
			int32_t v61 = 15 * (int32_t) * (char *)(v53 + 212);                         // 0x79a44
			int64_t v62 = v50;                                                          // 0x79a48
			int32_t v63 = ((int32_t)((int64_t)v59 * v62 / 0x100000000) + v59) / 16 + 1; // 0x79a78
			int32_t v64 = v48;                                                          // 0x79afc
			int32_t v65 = v58;                                                          // 0x79aa8
			int32_t v66 = v57;                                                          // 0x79aa4
			int32_t v67 = v60;                                                          // 0x79aa0
			int32_t v68 = v54;                                                          // 0x7999c22
			if (v49 > ((int32_t)((int64_t)v61 * v62 / 0x100000000) + v61) / 16) {
				// 0x79a80
				if (v49 <= v63) {
					// 0x79a88
					if (*(char *)v57 % 4 != 0) {
						// 0x79a94
						*(int32_t *)v54 = v58;
						int32_t v69 = v22 + 4; // 0x79a98
						v22 = v69;
						int32_t v70 = g29 + 1; // 0x79a9c
						g29 = v70;
						v64 = v70;
						v65 = v23;
						v66 = v41;
						v67 = result3;
						v68 = v69;
						// branch -> 0x79aa0
					} else {
						v64 = v48;
						v65 = v58;
						v66 = v57;
						v67 = v60;
						v68 = v54;
					}
				} else {
					v64 = v48;
					v65 = v58;
					v66 = v57;
					v67 = v60;
					v68 = v54;
				}
			}
			// 0x79aa0
			g27 = v66 + 1;
			int32_t v71 = v65 + 1; // 0x79aa8
			v23 = v71;
			int32_t v72 = v19 - 1; // 0x79aac
			v19 = v72;
			if (v72 == 0) {
				int32_t v73 = *(int32_t *)(g23 - 0x7094); // 0x79ab0
				result3 = v73;
				if (*(int32_t *)v73 == 0) {
					// 0x79af8
					g26 = v18;
					g25 = 4 * v64;
					if (v64 >= 1) {
						int32_t v74 = v64; // 0x79b542
					lab_0x79ba0:
						while (true) {
							// 0x79ba0
							if (*(int32_t *)g32 <= 15) {
								int32_t *v75 = (int32_t *)g31; // 0x79bac
								if (*v75 < 4000) {
									// 0x79b1c
									v21 = v18;
									result3 = 4 * v74;
									int32_t v76 = 4000 - *v75; // 0x79b10
									v23 = v76;
									int32_t v77 = 0;   // r7
									int32_t v78 = v74; // 0x79b38
									int32_t v79 = 0;   // 0x79b50
									int32_t v80 = v18; // 0x79b44
									// branch -> 0x79b1c
									while (true) {
										int32_t *v81 = (int32_t *)v80; // 0x79b1c
										int32_t v82;                   // 0x79b54
										int32_t v83;                   // 0x79b54
										if (*(int32_t *)(g35 + (128 * *v81 || 4)) > v76) {
											int32_t v84 = result3 - 4; // 0x79b34
											result3 = v84;
											g29 = v78 - 1;
											g25 -= 4;
											*v81 = *(int32_t *)(g26 + v84);
											v83 = v77;
											v82 = g29;
											// branch -> 0x79b54
										} else {
											// 0x79b4c
											v21 = v80 + 4;
											int32_t v85 = v79 + 1; // 0x79b50
											v77 = v85;
											v83 = v85;
											v82 = v78;
											// branch -> 0x79b54
										}
										// 0x79b54
										if (v82 > v83) {
											// 0x79b54
											v78 = v82;
											v79 = v83;
											v76 = v23;
											v80 = v21;
											// branch -> 0x79b1c
											continue;
										} else {
											int32_t v86 = 0;
											if (v82 != 0) {
												// 0x79b64
												g37 = v82;
												int32_t v87 = 4 * random(88) + v18; // 0x79b78
												g24 = v87;
												result3 = function_795ec((char)*(int32_t *)v87, 1);
												int32_t v88 = g25 - 4; // 0x79b88
												g25 = v88;
												g29--;
												*(int32_t *)g24 = *(int32_t *)(g26 + v88);
												v86 = g29;
												// branch -> 0x79b98
											}
											// 0x79b98
											if (v86 < 1) {
												// break (via goto) -> 0x79bd8
												goto lab_0x79bd8;
											}
											v74 = v86;
											// continue (via goto) -> 0x79ba0
											goto lab_0x79ba0;
										}
									}
									// 0x79bd8
									result2 = result3;
									// branch -> 0x79bd8
									// 0x79bd8
									v20 = v1;
									g10 = v1;
									return result2;
								}
							}
						lab_0x79bd8:
							// 0x79bd8
							// branch -> 0x79bd8
							// 0x79bd8
							g10 = v1;
							return result3;
						}
					} else {
						result2 = v73;
					}
				} else {
					// 0x79ac0
					g25 = 0;
					int32_t v89 = *(int32_t *)(g23 - 0x7098); // 0x79ac4
					g24 = v89;
					if (*(int32_t *)g30 > 0) {
						int32_t result4 = function_795ec((char)*(int32_t *)v89, 1); // 0x79adc
						int32_t v90 = g24 + 4;                                      // 0x79ae0
						g24 = v90;
						int32_t v91 = g25 + 1; // 0x79ae4
						g25 = v91;
						while (v91 < *(int32_t *)g30) {
							// 0x79ad4
							result4 = function_795ec((char)*(int32_t *)v90, 1);
							v90 = g24 + 4;
							g24 = v90;
							v91 = g25 + 1;
							g25 = v91;
							// continue -> 0x79ad4
						}
						// 0x79bd8
						g10 = v1;
						return result4;
					}
					result2 = v89;
				}
				// 0x79bd8
				g10 = v1;
				return result2;
			}
			// 0x79aa0
			v24 = v64;
			v25 = v68;
			v26 = v71;
			v27 = v20;
			result3 = v67 + 128;
			// branch -> 0x79938
		}
	} else {
		int32_t v92 = *(int32_t *)(g23 - 0x77e0); // 0x79bbc
		if (*(char *)v92 == 1) {
			// 0x79bcc
			result2 = function_795ec(50, 4);
			// branch -> 0x79bd8
		} else {
			result2 = v92;
		}
	}
	// 0x79bd8
	g10 = v1;
	return result2;
}

// Address range: 0x79bec - 0x79fe0
int32_t function_79bec(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0x79bf0
	g22 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x7610); // 0x79bf8
	g36 = v2;
	int32_t v3 = 520 * a1; // 0x79bfc
	g27 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x72b4); // 0x79c00
	g35 = v4;
	g33 = *(int32_t *)(g23 - 0x7080);
	int32_t v5 = v2 + v3; // 0x79c08
	g29 = v5;
	g30 = v5;
	g25 = 0;
	int32_t v6 = (int32_t) * (char *)v5; // 0x79c20
	g24 = v6;
	int32_t v7 = 128 * v6; // 0x79c24
	g26 = v7;
	int32_t v8 = v7 + v4; // 0x79c28
	g28 = v8;
	g31 = v8;
	int32_t v9 = *(int32_t *)(g23 - 0x70a0); // 0x79c30
	// branch -> 0x79c30
	while (true) {
		char v10 = *(char *)v9; // 0x79c30
		if (v10 == 115) {
			// 0x79c3c
			int32_t result2; // r3
			int32_t v11;     // 0x79dc8
			uint32_t v12;    // 0x79dec
			int32_t v13;     // 0x79e1c
			int32_t v14;     // 0x79e4c
			int32_t v15;     // 0x79e80
			uint32_t v16;    // 0x79f54
			uint32_t v17;    // 0x79f80
			int32_t v18;     // 0x79db8
			int32_t *v19;    // 0x79e5c
			int32_t result;  // 0x79fc8
			int32_t v20;     // 0x79dd0
			int32_t v21;     // 0x79dd8
			int32_t v22;     // 0x79ddc
			uint32_t v23;    // 0x79e5c
			int32_t v24;     // 0x79e88
			int32_t v25;     // 0x79eac
			int32_t v26;     // 0x79ed8
			int32_t v27;     // 0x79f04
			int32_t v28;     // 0x79f30
			int32_t v29;     // 0x79f64
			int32_t v30;     // 0x79f90
			int32_t v31;     // 0x79e30
			if (*(int32_t *)(g28 + 12) == 0) {
			lab_0x79db4_4:
				// 0x79db4
				v18 = g25 + 1;
				g25 = v18;
				g32 = v9 + 1;
				*(int32_t *)(v5 + 72) = *(int32_t *)(g31 + 32);
				v11 = g31;
				g31 = v11 + 4;
				v20 = g30 + 76;
				*(int32_t *)v20 = *(int32_t *)(v11 + 56);
				g30 = v20;
				if (v18 < 6) {
					goto lab_0x79db4_5;
				}
				// 0x79dd8
				v21 = *(int32_t *)g28;
				v22 = g27 + g36;
				g25 = v22;
				result2 = g26 + g35;
				*(int32_t *)(v22 + 492) = v21;
				v12 = v21 - 64;
				g26 = result2 + 12;
				*(int32_t *)(g25 + 496) = v12 / 2 | v12 & -0x80000000;
				*(char *)(g25 + 500) = (char)*(int32_t *)(result2 + 88);
				*(char *)(g25 + 501) = (char)*(int32_t *)(result2 + 92);
				*(int32_t *)(g25 + 504) = *(int32_t *)(result2 + 12);
				*(char *)(g25 + 508) = *(char *)(result2 + 106);
				*(int32_t *)(g25 + 512) = g28;
				v13 = result2;
				if (*(int32_t *)(v13 + 24) != 0) {
					// 0x79e28
					v31 = LoadFileInMem(*(int32_t *)(v13 + 28), NULL);
					*(int32_t *)(g25 + 516) = v31;
					InitMonsterTRN(g22, *(int32_t *)g26);
					result2 = MemFreeDbg((int32_t *)(g29 + 516));
					// branch -> 0x79e4c
				}
				// 0x79e4c
				v14 = g24;
				v15 = v14;
				if (v14 >= 60) {
					// 0x79e54
					if (v14 <= 63) {
						// 0x79e5c
						v19 = (int32_t *)g33;
						v23 = *v19;
						result2 = v23;
						if (v23 % 2 == 0) {
							// 0x79e68
							*v19 = v23 | 1;
							result2 = function_6f968(24);
							v15 = g24;
							// branch -> 0x79e78
						} else {
							v15 = v14;
						}
					} else {
						v15 = v14;
					}
				}
				// 0x79e78
				if (v15 >= 76) {
					// 0x79e80
					if (v15 <= 79) {
						// 0x79e88
						v24 = *(int32_t *)g33;
						result2 = v24;
						if (__asm_rlwinm_(v24, 0, 30, 30) == 0) {
							// 0x79e94
							*(int32_t *)g33 = result2 | 2;
							result2 = function_6f968(21);
							// branch -> 0x79ea4
						}
					}
				}
				// 0x79ea4
				if (g24 == 101) {
					// 0x79eac
					v25 = *(int32_t *)g33;
					result2 = v25;
					if (__asm_rlwinm_(v25, 0, 29, 29) == 0) {
						// 0x79eb8
						*(int32_t *)g33 = result2 | 4;
						function_6f968(22);
						result2 = function_6f968(23);
						// branch -> 0x79ed0
					}
				}
				// 0x79ed0
				if (g24 == 102) {
					// 0x79ed8
					v26 = *(int32_t *)g33;
					result2 = v26;
					if (__asm_rlwinm_(v26, 0, 26, 26) == 0) {
						// 0x79ee4
						*(int32_t *)g33 = result2 | 32;
						function_6f968(40);
						result2 = function_6f968(41);
						// branch -> 0x79efc
					}
				}
				// 0x79efc
				if (g24 == 103) {
					// 0x79f04
					v27 = *(int32_t *)g33;
					result2 = v27;
					if (__asm_rlwinm_(v27, 0, 25, 25) == 0) {
						// 0x79f10
						*(int32_t *)g33 = result2 | 64;
						function_6f968(44);
						result2 = function_6f968(45);
						// branch -> 0x79f28
					}
				}
				// 0x79f28
				if (g24 == 104) {
					// 0x79f30
					v28 = *(int32_t *)g33;
					result2 = v28;
					if (__asm_rlwinm_(v28, 0, 24, 24) == 0) {
						// 0x79f3c
						*(int32_t *)g33 = result2 | 128;
						function_6f968(42);
						result2 = function_6f968(43);
						// branch -> 0x79f54
					}
				}
				// 0x79f54
				v16 = g24;
				if (v16 >= 72) {
					// 0x79f5c
					if (v16 <= 75) {
						// 0x79f64
						v29 = *(int32_t *)g33;
						result2 = v29;
						if (__asm_rlwinm_(v29, 0, 28, 28) == 0) {
							// 0x79f70
							*(int32_t *)g33 = result2 | 8;
							result2 = function_6f968(25);
							// branch -> 0x79f80
						}
					}
				}
				// 0x79f80
				v17 = g24;
				if (v17 >= 46) {
					// 0x79f88
					if (v17 <= 49) {
						// 0x79f90
						v30 = *(int32_t *)g33;
						result2 = v30;
						if (__asm_rlwinm_(v30, 0, 27, 27) == 0) {
							// 0x79f9c
							*(int32_t *)g33 = result2 | 16;
							function_6f968(31);
							function_6f968(32);
							result2 = function_6f968(33);
							// branch -> 0x79fbc
						}
					}
				}
				// 0x79fbc
				if (g24 == 110) {
					// 0x79fc4
					result = function_6f968(39);
					// branch -> 0x79fcc
					// 0x79fcc
					g10 = v1;
					return result;
				}
				// 0x79fbc
				// branch -> 0x79fcc
				// 0x79fcc
				g10 = v1;
				return result2;
			}
			// 0x79c48
			if (*(int32_t *)(g31 + 32) >= 1) {
			lab_0x79c54:
				// 0x79c54
				g37 = *(int32_t *)(g28 + 8);
				g38 = v10;
				sprintf();
				int32_t v32;                                      // bp-320
				int32_t v33 = LoadFileInMem((int32_t)&v32, NULL); // 0x79c6c
				*(int32_t *)(g30 + 4) = v33;
				g34 = *(int32_t *)(g30 + 4);
				int32_t v34 = function_c9948(); // 0x79c78
				int32_t v35;                    // 0x79d08
				int32_t v36;                    // 0x79d24
				int32_t v37;                    // 0x79d38
				int32_t v38;                    // 0x79d4c
				int32_t v39;                    // 0x79d60
				int32_t v40;                    // 0x79d74
				int32_t v41;                    // 0x79d88
				int32_t v42;                    // 0x79d9c
				if (*(char *)g29 == 109) {
					char v43 = *(char *)g32; // 0x79c88
					if (v43 != 115) {
						// 0x79c98
						if (v43 != 100) {
							// 0x79d08
							v35 = g30;
							*(int32_t *)(v35 + 8) = *(int32_t *)(v35 + 4);
							*(int32_t *)(g30 + 12) = __asm_lwbrx(v34, 0);
							v36 = g30;
							*(int32_t *)(v36 + 16) = *(int32_t *)(v36 + 4);
							*(int32_t *)(g30 + 20) = __asm_lwbrx(v34, 4);
							v37 = g30;
							*(int32_t *)(v37 + 24) = *(int32_t *)(v37 + 4);
							*(int32_t *)(g30 + 28) = __asm_lwbrx(v34, 8);
							v38 = g30;
							*(int32_t *)(v38 + 32) = *(int32_t *)(v38 + 4);
							*(int32_t *)(g30 + 36) = __asm_lwbrx(v34, 12);
							v39 = g30;
							*(int32_t *)(v39 + 40) = *(int32_t *)(v39 + 4);
							*(int32_t *)(g30 + 44) = __asm_lwbrx(v34, 16);
							v40 = g30;
							*(int32_t *)(v40 + 48) = *(int32_t *)(v40 + 4);
							*(int32_t *)(g30 + 52) = __asm_lwbrx(v34, 20);
							v41 = g30;
							*(int32_t *)(v41 + 56) = *(int32_t *)(v41 + 4);
							*(int32_t *)(g30 + 60) = __asm_lwbrx(v34, 24);
							v42 = g30;
							*(int32_t *)(v42 + 64) = *(int32_t *)(v42 + 4);
							*(int32_t *)(g30 + 68) = __asm_lwbrx(v34, 28);
							// branch -> 0x79dac
						lab_0x79dac_2:
							// 0x79dac
							function_c9acc(*(int32_t *)(g30 + 4));
							// branch -> 0x79db4
						lab_0x79db4:
							// 0x79db4
							v18 = g25 + 1;
							g25 = v18;
							g32++;
							*(int32_t *)(g30 + 72) = *(int32_t *)(g31 + 32);
							v11 = g31;
							g31 = v11 + 4;
							v20 = g30 + 76;
							*(int32_t *)v20 = *(int32_t *)(v11 + 56);
							g30 = v20;
							if (v18 >= 6) {
								// 0x79dd8
								v21 = *(int32_t *)g28;
								v22 = g27 + g36;
								g25 = v22;
								result2 = g26 + g35;
								*(int32_t *)(v22 + 492) = v21;
								v12 = v21 - 64;
								g26 = result2 + 12;
								*(int32_t *)(g25 + 496) = v12 / 2 | v12 & -0x80000000;
								*(char *)(g25 + 500) = (char)*(int32_t *)(result2 + 88);
								*(char *)(g25 + 501) = (char)*(int32_t *)(result2 + 92);
								*(int32_t *)(g25 + 504) = *(int32_t *)(result2 + 12);
								*(char *)(g25 + 508) = *(char *)(result2 + 106);
								*(int32_t *)(g25 + 512) = g28;
								v13 = result2;
								if (*(int32_t *)(v13 + 24) != 0) {
									// 0x79e28
									v31 = LoadFileInMem(*(int32_t *)(v13 + 28), NULL);
									*(int32_t *)(g25 + 516) = v31;
									InitMonsterTRN(g22, *(int32_t *)g26);
									result2 = MemFreeDbg((int32_t *)(g29 + 516));
									// branch -> 0x79e4c
								}
								// 0x79e4c
								v14 = g24;
								v15 = v14;
								if (v14 >= 60) {
									// 0x79e54
									if (v14 <= 63) {
										// 0x79e5c
										v19 = (int32_t *)g33;
										v23 = *v19;
										result2 = v23;
										if (v23 % 2 == 0) {
											// 0x79e68
											*v19 = v23 | 1;
											result2 = function_6f968(24);
											v15 = g24;
											// branch -> 0x79e78
										} else {
											v15 = v14;
										}
									} else {
										v15 = v14;
									}
								}
								// 0x79e78
								if (v15 >= 76) {
									// 0x79e80
									if (v15 <= 79) {
										// 0x79e88
										v24 = *(int32_t *)g33;
										result2 = v24;
										if (__asm_rlwinm_(v24, 0, 30, 30) == 0) {
											// 0x79e94
											*(int32_t *)g33 = result2 | 2;
											result2 = function_6f968(21);
											// branch -> 0x79ea4
										}
									}
								}
								// 0x79ea4
								if (g24 == 101) {
									// 0x79eac
									v25 = *(int32_t *)g33;
									result2 = v25;
									if (__asm_rlwinm_(v25, 0, 29, 29) == 0) {
										// 0x79eb8
										*(int32_t *)g33 = result2 | 4;
										function_6f968(22);
										result2 = function_6f968(23);
										// branch -> 0x79ed0
									}
								}
								// 0x79ed0
								if (g24 == 102) {
									// 0x79ed8
									v26 = *(int32_t *)g33;
									result2 = v26;
									if (__asm_rlwinm_(v26, 0, 26, 26) == 0) {
										// 0x79ee4
										*(int32_t *)g33 = result2 | 32;
										function_6f968(40);
										result2 = function_6f968(41);
										// branch -> 0x79efc
									}
								}
								// 0x79efc
								if (g24 == 103) {
									// 0x79f04
									v27 = *(int32_t *)g33;
									result2 = v27;
									if (__asm_rlwinm_(v27, 0, 25, 25) == 0) {
										// 0x79f10
										*(int32_t *)g33 = result2 | 64;
										function_6f968(44);
										result2 = function_6f968(45);
										// branch -> 0x79f28
									}
								}
								// 0x79f28
								if (g24 == 104) {
									// 0x79f30
									v28 = *(int32_t *)g33;
									result2 = v28;
									if (__asm_rlwinm_(v28, 0, 24, 24) == 0) {
										// 0x79f3c
										*(int32_t *)g33 = result2 | 128;
										function_6f968(42);
										result2 = function_6f968(43);
										// branch -> 0x79f54
									}
								}
								// 0x79f54
								v16 = g24;
								if (v16 >= 72) {
									// 0x79f5c
									if (v16 <= 75) {
										// 0x79f64
										v29 = *(int32_t *)g33;
										result2 = v29;
										if (__asm_rlwinm_(v29, 0, 28, 28) == 0) {
											// 0x79f70
											*(int32_t *)g33 = result2 | 8;
											result2 = function_6f968(25);
											// branch -> 0x79f80
										}
									}
								}
								// 0x79f80
								v17 = g24;
								if (v17 >= 46) {
									// 0x79f88
									if (v17 <= 49) {
										// 0x79f90
										v30 = *(int32_t *)g33;
										result2 = v30;
										if (__asm_rlwinm_(v30, 0, 27, 27) == 0) {
											// 0x79f9c
											*(int32_t *)g33 = result2 | 16;
											function_6f968(31);
											function_6f968(32);
											result2 = function_6f968(33);
											// branch -> 0x79fbc
										}
									}
								}
								// 0x79fbc
								if (g24 == 110) {
									// 0x79fc4
									result = function_6f968(39);
									// branch -> 0x79fcc
									// 0x79fcc
									g10 = v1;
									return result;
								}
								// 0x79fbc
								// branch -> 0x79fcc
								// 0x79fcc
								g10 = v1;
								return result2;
							}
						lab_0x79db4_5:
							// 0x79db4
							v5 = v20;
							v9 = g32;
							// branch -> 0x79c30
							continue;
						}
					}
					int32_t v44 = g30; // 0x79ca0
					result2 = 0;
					*(int32_t *)(v44 + 8) = *(int32_t *)(v44 + 4);
					*(int32_t *)(g30 + 12) = result2;
					int32_t v45 = g30; // 0x79cb0
					*(int32_t *)(v45 + 16) = *(int32_t *)(v45 + 4);
					*(int32_t *)(g30 + 20) = result2;
					int32_t v46 = g30; // 0x79cbc
					*(int32_t *)(v46 + 24) = *(int32_t *)(v46 + 4);
					*(int32_t *)(g30 + 28) = result2;
					int32_t v47 = g30; // 0x79cc8
					*(int32_t *)(v47 + 32) = *(int32_t *)(v47 + 4);
					*(int32_t *)(g30 + 36) = result2;
					int32_t v48 = g30; // 0x79cd4
					*(int32_t *)(v48 + 40) = *(int32_t *)(v48 + 4);
					*(int32_t *)(g30 + 44) = result2;
					int32_t v49 = g30; // 0x79ce0
					*(int32_t *)(v49 + 48) = *(int32_t *)(v49 + 4);
					*(int32_t *)(g30 + 52) = result2;
					int32_t v50 = g30; // 0x79cec
					*(int32_t *)(v50 + 56) = *(int32_t *)(v50 + 4);
					*(int32_t *)(g30 + 60) = result2;
					int32_t v51 = g30; // 0x79cf8
					*(int32_t *)(v51 + 64) = *(int32_t *)(v51 + 4);
					*(int32_t *)(g30 + 68) = result2;
					// branch -> 0x79dac
					goto lab_0x79dac_2;
				} else {
					// 0x79d08
					v35 = g30;
					*(int32_t *)(v35 + 8) = *(int32_t *)(v35 + 4);
					*(int32_t *)(g30 + 12) = __asm_lwbrx(v34, 0);
					v36 = g30;
					*(int32_t *)(v36 + 16) = *(int32_t *)(v36 + 4);
					*(int32_t *)(g30 + 20) = __asm_lwbrx(v34, 4);
					v37 = g30;
					*(int32_t *)(v37 + 24) = *(int32_t *)(v37 + 4);
					*(int32_t *)(g30 + 28) = __asm_lwbrx(v34, 8);
					v38 = g30;
					*(int32_t *)(v38 + 32) = *(int32_t *)(v38 + 4);
					*(int32_t *)(g30 + 36) = __asm_lwbrx(v34, 12);
					v39 = g30;
					*(int32_t *)(v39 + 40) = *(int32_t *)(v39 + 4);
					*(int32_t *)(g30 + 44) = __asm_lwbrx(v34, 16);
					v40 = g30;
					*(int32_t *)(v40 + 48) = *(int32_t *)(v40 + 4);
					*(int32_t *)(g30 + 52) = __asm_lwbrx(v34, 20);
					v41 = g30;
					*(int32_t *)(v41 + 56) = *(int32_t *)(v41 + 4);
					*(int32_t *)(g30 + 60) = __asm_lwbrx(v34, 24);
					v42 = g30;
					*(int32_t *)(v42 + 64) = *(int32_t *)(v42 + 4);
					*(int32_t *)(g30 + 68) = __asm_lwbrx(v34, 28);
					// branch -> 0x79dac
					goto lab_0x79dac_2;
				}
				int32_t v52 = g30;                   // 0x79dac
				int32_t v53 = *(int32_t *)(v52 + 4); // 0x79dac
				result2 = v53;
				result2 = function_c9acc(v53);
				// branch -> 0x79db4
				goto lab_0x79db4;
			}
			// 0x79db4
			v18 = g25 + 1;
			g25 = v18;
			g32 = v9 + 1;
			*(int32_t *)(v5 + 72) = *(int32_t *)(g31 + 32);
			v11 = g31;
			g31 = v11 + 4;
			v20 = g30 + 76;
			*(int32_t *)v20 = *(int32_t *)(v11 + 56);
			g30 = v20;
			if (v18 < 6) {
				goto lab_0x79db4_5;
			}
			// 0x79dd8
			v21 = *(int32_t *)g28;
			v22 = g27 + g36;
			g25 = v22;
			result2 = g26 + g35;
			*(int32_t *)(v22 + 492) = v21;
			v12 = v21 - 64;
			g26 = result2 + 12;
			*(int32_t *)(g25 + 496) = v12 / 2 | v12 & -0x80000000;
			*(char *)(g25 + 500) = (char)*(int32_t *)(result2 + 88);
			*(char *)(g25 + 501) = (char)*(int32_t *)(result2 + 92);
			*(int32_t *)(g25 + 504) = *(int32_t *)(result2 + 12);
			*(char *)(g25 + 508) = *(char *)(result2 + 106);
			*(int32_t *)(g25 + 512) = g28;
			v13 = result2;
			if (*(int32_t *)(v13 + 24) != 0) {
				// 0x79e28
				v31 = LoadFileInMem(*(int32_t *)(v13 + 28), NULL);
				*(int32_t *)(g25 + 516) = v31;
				InitMonsterTRN(g22, *(int32_t *)g26);
				result2 = MemFreeDbg((int32_t *)(g29 + 516));
				// branch -> 0x79e4c
			}
			// 0x79e4c
			v14 = g24;
			v15 = v14;
			if (v14 >= 60) {
				// 0x79e54
				if (v14 <= 63) {
					// 0x79e5c
					v19 = (int32_t *)g33;
					v23 = *v19;
					result2 = v23;
					if (v23 % 2 == 0) {
						// 0x79e68
						*v19 = v23 | 1;
						result2 = function_6f968(24);
						v15 = g24;
						// branch -> 0x79e78
					} else {
						v15 = v14;
					}
				} else {
					v15 = v14;
				}
			}
			// 0x79e78
			if (v15 >= 76) {
				// 0x79e80
				if (v15 <= 79) {
					// 0x79e88
					v24 = *(int32_t *)g33;
					result2 = v24;
					if (__asm_rlwinm_(v24, 0, 30, 30) == 0) {
						// 0x79e94
						*(int32_t *)g33 = result2 | 2;
						result2 = function_6f968(21);
						// branch -> 0x79ea4
					}
				}
			}
			// 0x79ea4
			if (g24 == 101) {
				// 0x79eac
				v25 = *(int32_t *)g33;
				result2 = v25;
				if (__asm_rlwinm_(v25, 0, 29, 29) == 0) {
					// 0x79eb8
					*(int32_t *)g33 = result2 | 4;
					function_6f968(22);
					result2 = function_6f968(23);
					// branch -> 0x79ed0
				}
			}
			// 0x79ed0
			if (g24 == 102) {
				// 0x79ed8
				v26 = *(int32_t *)g33;
				result2 = v26;
				if (__asm_rlwinm_(v26, 0, 26, 26) == 0) {
					// 0x79ee4
					*(int32_t *)g33 = result2 | 32;
					function_6f968(40);
					result2 = function_6f968(41);
					// branch -> 0x79efc
				}
			}
			// 0x79efc
			if (g24 == 103) {
				// 0x79f04
				v27 = *(int32_t *)g33;
				result2 = v27;
				if (__asm_rlwinm_(v27, 0, 25, 25) == 0) {
					// 0x79f10
					*(int32_t *)g33 = result2 | 64;
					function_6f968(44);
					result2 = function_6f968(45);
					// branch -> 0x79f28
				}
			}
			// 0x79f28
			if (g24 == 104) {
				// 0x79f30
				v28 = *(int32_t *)g33;
				result2 = v28;
				if (__asm_rlwinm_(v28, 0, 24, 24) == 0) {
					// 0x79f3c
					*(int32_t *)g33 = result2 | 128;
					function_6f968(42);
					result2 = function_6f968(43);
					// branch -> 0x79f54
				}
			}
			// 0x79f54
			v16 = g24;
			if (v16 >= 72) {
				// 0x79f5c
				if (v16 <= 75) {
					// 0x79f64
					v29 = *(int32_t *)g33;
					result2 = v29;
					if (__asm_rlwinm_(v29, 0, 28, 28) == 0) {
						// 0x79f70
						*(int32_t *)g33 = result2 | 8;
						result2 = function_6f968(25);
						// branch -> 0x79f80
					}
				}
			}
			// 0x79f80
			v17 = g24;
			if (v17 >= 46) {
				// 0x79f88
				if (v17 <= 49) {
					// 0x79f90
					v30 = *(int32_t *)g33;
					result2 = v30;
					if (__asm_rlwinm_(v30, 0, 27, 27) == 0) {
						// 0x79f9c
						*(int32_t *)g33 = result2 | 16;
						function_6f968(31);
						function_6f968(32);
						result2 = function_6f968(33);
						// branch -> 0x79fbc
					}
				}
			}
			// 0x79fbc
			if (g24 != 110) {
				// 0x79fbc
				// branch -> 0x79fcc
				// 0x79fcc
				g10 = v1;
				return result2;
			}
			// 0x79fc4
			result = function_6f968(39);
			// branch -> 0x79fcc
			// 0x79fcc
			g10 = v1;
			return result;
		}
		// 0x79c48
		if (*(int32_t *)(g31 + 32) < 1) {
			goto lab_0x79db4_4;
		}
		goto lab_0x79c54;
	}
}

// Address range: 0x79fe0 - 0x7a014
int32_t function_79fe0(void)
{
	int32_t result = *(int32_t *)(g23 - 0x7754) + 232 * g34; // 0x79fe8
	int32_t v1 = 0;                                          // r0
	*(int32_t *)(result + 116) = 0;
	*(int32_t *)(result + 120) = v1;
	*(int32_t *)(result + 124) = v1;
	*(int32_t *)(result + 128) = v1;
	*(int32_t *)(result + 132) = v1;
	*(int32_t *)(result + 136) = v1;
	*(int32_t *)(result + 140) = v1;
	*(int32_t *)(result + 144) = v1;
	return result;
}

// Address range: 0x7a014 - 0x7a430
int32_t function_7a014(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = 232 * a1;                   // 0x7a01c
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x7a020
	int32_t v3 = v2 + v1;                    // 0x7a028
	g27 = v3 + 4;
	g29 = v3 + 84;
	int32_t v4 = 520 * a3 + *(int32_t *)(g23 - 0x7610); // 0x7a038
	g36 = v4;
	int32_t v5 = 8 * a2; // 0x7a03c
	g30 = v5;
	*(int32_t *)(v3 + 72) = a2;
	*(int32_t *)(v3 + 32) = a4;
	*(int32_t *)(v3 + 36) = a5;
	*(int32_t *)(v3 + 40) = a4;
	*(int32_t *)(v3 + 44) = a5;
	*(int32_t *)(v3 + 48) = a4;
	*(int32_t *)(v3 + 52) = a5;
	*(int32_t *)(v1 + v2) = a3;
	*(int32_t *)(v3 + 4) = 0;
	*(int32_t *)(v3 + 220) = *(int32_t *)(*(int32_t *)(g36 + 512) + 80);
	*(int32_t *)(v3 + 224) = g36;
	*(int32_t *)(v3 + 228) = *(int32_t *)(g36 + 512);
	int32_t v6 = v5 + v4; // 0x7a090
	*(int32_t *)(v3 + 84) = *(int32_t *)(v6 + 8);
	*(int32_t *)(v3 + 88) = *(int32_t *)(v6 + 12);
	*(int32_t *)(v3 + 92) = *(int32_t *)(g36 + 76);
	g37 = *(int32_t *)(v3 + 92) - 1;
	*(int32_t *)(v3 + 96) = random(88);
	int32_t v7 = v3 + 100; // 0x7a0b8
	*(int32_t *)v7 = *(int32_t *)(g36 + 72);
	g37 = *(int32_t *)v7 - 1;
	int32_t v8 = random(88); // 0x7a0d0
	int32_t v9 = v3 + 104;   // 0x7a0d8
	g28 = v9;
	*(int32_t *)v9 = v8 + 1;
	int32_t v10 = g36; // 0x7a0e0
	if (*(char *)v10 == 110) {
		// 0x7a0ec
		g37 = 1;
		*(int32_t *)(v3 + 148) = 64 * random(88) + 0x1a080;
		// branch -> 0x7a130
	} else {
		int32_t v11 = (int32_t) * (char *)(v10 + 501); // 0x7a110
		g37 = 1 - (int32_t) * (char *)(v10 + 500) + v11;
		int32_t v12 = random(88);                 // 0x7a11c
		unsigned char v13 = *(char *)(g36 + 500); // 0x7a120
		*(int32_t *)(v3 + 148) = 64 * ((int32_t)v13 + v12);
		// branch -> 0x7a130
	}
	// 0x7a130
	int32_t v14;    // r10
	int32_t v15;    // r11
	int32_t v16;    // r12
	int32_t result; // r3
	int32_t v17;    // r4
	int32_t v18;    // r8
	int32_t v19;    // r9
	int32_t v20;    // 0x7a1d0
	int32_t v21;    // 0x7a1e0
	int32_t v22;    // 0x7a208
	int32_t v23;    // 0x7a168
	int32_t *v24;   // 0x7a2b8
	int32_t v25;    // 0x7a2bc
	int32_t *v26;   // 0x7a2d8
	char *v27;      // 0x7a2f0
	int16_t *v28;   // 0x7a2fc
	char *v29;      // 0x7a30c
	char *v30;      // 0x7a318
	char *v31;      // 0x7a328
	char *v32;      // 0x7a338
	char *v33;      // 0x7a344
	char *v34;      // 0x7a354
	char *v35;      // 0x7a364
	int32_t v36;    // 0x7a368
	int32_t *v37;   // 0x7a378
	char *v38;      // 0x7a390
	int16_t *v39;   // 0x7a39c
	char *v40;      // 0x7a3ac
	char *v41;      // 0x7a3b8
	char *v42;      // 0x7a3c8
	char *v43;      // 0x7a3d8
	char *v44;      // 0x7a3e4
	char *v45;      // 0x7a3f4
	char *v46;      // 0x7a404
	int32_t v47;    // 0x7a164
	int32_t v48;    // 0x7a174
	int32_t v49;    // 0x7a29c
	int32_t v50;    // 0x7a2cc
	int32_t v51;    // 0x7a18c
	int32_t v52;    // 0x7a280
	int32_t v53;    // 0x7a2a0
	int32_t v54;    // 0x7a2c8
	int32_t v55;    // 0x7a410
	if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
		// 0x7a164
		v47 = v1 + v2;
		v23 = v47 + 148;
		g26 = v23;
		v48 = v47 + 152;
		*(int32_t *)v48 = *(int32_t *)v23;
		g25 = v48;
		g32 = v1 + v2;
		g33 = 1;
		g35 = 0;
		v51 = v47 + 156;
		*(char *)v51 = *(char *)(*(int32_t *)(g36 + 512) + 96);
		g31 = v51;
		*(char *)(g32 + 157) = *(char *)(*(int32_t *)(g36 + 512) + 104);
		*(char *)(g32 + 8) = (char)g33;
		*(int32_t *)(g32 + 12) = g35;
		*(int32_t *)(g32 + 16) = g35;
		*(int32_t *)(g32 + 20) = g35;
		*(int32_t *)(g32 + 24) = g35;
		*(char *)(g32 + 28) = (char)g35;
		*(int32_t *)(g32 + 112) = g35;
		*(char *)(g32 + 192) = (char)g35;
		*(char *)(g32 + 164) = (char)g35;
		*(int32_t *)(g32 + 180) = GetRndSeed();
		*(int32_t *)(g32 + 184) = GetRndSeed();
		v20 = g32;
		v17 = v20 + 196;
		a3 = v20 + 198;
		a4 = v20 + 200;
		*(char *)(v20 + 195) = (char)g35;
		v21 = g32;
		a5 = v21 + 201;
		v18 = v21 + 202;
		v19 = v21 + 203;
		v14 = v21 + 204;
		v15 = v21 + 205;
		v16 = v21 + 206;
		g24 = v21 + 208;
		*(char *)(v21 + 196) = *(char *)(*(int32_t *)(g36 + 512) + 86);
		v22 = g32;
		*(int16_t *)(v22 + 198) = *(int16_t *)(*(int32_t *)(g36 + 512) + 124);
		*(char *)(g32 + 200) = *(char *)(*(int32_t *)(g36 + 512) + 105);
		*(char *)(g32 + 201) = *(char *)(*(int32_t *)(g36 + 512) + 107);
		*(char *)(g32 + 202) = *(char *)(*(int32_t *)(g36 + 512) + 108);
		*(char *)(g32 + 203) = *(char *)(*(int32_t *)(g36 + 512) + 109);
		*(char *)(g32 + 204) = *(char *)(*(int32_t *)(g36 + 512) + 111);
		*(char *)(g32 + 205) = *(char *)(*(int32_t *)(g36 + 512) + 112);
		*(char *)(g32 + 206) = *(char *)(*(int32_t *)(g36 + 512) + 113);
		*(int16_t *)(g32 + 208) = *(int16_t *)(*(int32_t *)(g36 + 512) + 116);
		*(char *)(g32 + 216) = (char)g35;
		*(char *)(g32 + 217) = (char)g35;
		v52 = *(int32_t *)(g36 + 512);
		g22 = v52;
		*(int32_t *)(g32 + 160) = *(int32_t *)(v52 + 100);
		*(int32_t *)(g32 + 212) = g35;
		if (*(char *)g31 == 12) {
			// 0x7a29c
			v49 = g30 + g36;
			v53 = *(int32_t *)(v49 + 388);
			g31 = v53;
			g30 = *(int32_t *)(v49 + 392);
			*(int32_t *)g29 = v53;
			*(int32_t *)(g29 + 4) = g30;
			*(int32_t *)g28 = g33;
			v24 = (int32_t *)(v22 + 160);
			v25 = *v24 | 4;
			g28 = v25;
			*v24 = v25;
			*(int32_t *)g27 = 7;
			// branch -> 0x7a2c8
		}
		// 0x7a2c8
		v54 = *(int32_t *)(g23 - 0x7184);
		result = v54;
		v50 = *(int32_t *)v54;
		if (v50 == 1) {
			// 0x7a2d8
			v26 = (int32_t *)g26;
			*v26 = 3 * *v26 + 64;
			*(int32_t *)g25 = *(int32_t *)g26;
			v27 = (char *)v17;
			*v27 = (char)((int32_t)*v27 + 15);
			v28 = (int16_t *)a3;
			*v28 = (int16_t)(2 * (int32_t)*v28 + 2000);
			v29 = (char *)a4;
			*v29 = (char)((int32_t)*v29 + 85);
			v30 = (char *)a5;
			*v30 = (char)(2 * (int32_t)*v30 + 4);
			v31 = (char *)v18;
			*v31 = (char)(2 * (int32_t)*v31 + 4);
			v32 = (char *)v19;
			*v32 = (char)((int32_t)*v32 + 85);
			v33 = (char *)v14;
			*v33 = (char)(2 * (int32_t)*v33 + 4);
			v34 = (char *)v15;
			*v34 = (char)(2 * (int32_t)*v34 + 4);
			v35 = (char *)v16;
			v36 = (int32_t)*v35 + 50;
			result = v36;
			*v35 = (char)v36;
			// branch -> 0x7a370
		}
		// 0x7a370
		if (v50 == 2) {
			// 0x7a378
			v37 = (int32_t *)g26;
			*v37 = 4 * *v37 + 192;
			*(int32_t *)g25 = *(int32_t *)g26;
			v38 = (char *)v17;
			*v38 = (char)((int32_t)*v38 + 30);
			v39 = (int16_t *)a3;
			*v39 = (int16_t)(4 * (int32_t)*v39 + 4000);
			v40 = (char *)a4;
			*v40 = (char)((int32_t)*v40 + 120);
			v41 = (char *)a5;
			*v41 = (char)(4 * (int32_t)*v41 + 6);
			v42 = (char *)v18;
			*v42 = (char)(4 * (int32_t)*v42 + 6);
			v43 = (char *)v19;
			*v43 = (char)((int32_t)*v43 + 120);
			v44 = (char *)v14;
			*v44 = (char)(4 * (int32_t)*v44 + 6);
			v45 = (char *)v15;
			*v45 = (char)(4 * (int32_t)*v45 + 6);
			v46 = (char *)v16;
			*v46 = (char)((int32_t)*v46 + 80);
			v55 = *(int32_t *)(g36 + 512);
			result = v55;
			*(int16_t *)g24 = *(int16_t *)(v55 + 118);
			// branch -> 0x7a41c
		}
		// 0x7a41c
		return result;
	}
	int32_t v56 = v1 + v2;                 // 0x7a140
	int32_t *v57 = (int32_t *)(v56 + 148); // 0x7a144
	uint32_t v58 = *v57;                   // 0x7a144
	*v57 = v58 / 2 | v58 & -0x80000000;
	int32_t *v59 = (int32_t *)(v56 + 148); // 0x7a150
	if (*v59 <= 63) {
		// 0x7a15c
		*v59 = 64;
		// branch -> 0x7a164
	}
	// 0x7a164
	v47 = v1 + v2;
	v23 = v47 + 148;
	g26 = v23;
	v48 = v47 + 152;
	*(int32_t *)v48 = *(int32_t *)v23;
	g25 = v48;
	g32 = v1 + v2;
	g33 = 1;
	g35 = 0;
	v51 = v47 + 156;
	*(char *)v51 = *(char *)(*(int32_t *)(g36 + 512) + 96);
	g31 = v51;
	*(char *)(g32 + 157) = *(char *)(*(int32_t *)(g36 + 512) + 104);
	*(char *)(g32 + 8) = (char)g33;
	*(int32_t *)(g32 + 12) = g35;
	*(int32_t *)(g32 + 16) = g35;
	*(int32_t *)(g32 + 20) = g35;
	*(int32_t *)(g32 + 24) = g35;
	*(char *)(g32 + 28) = (char)g35;
	*(int32_t *)(g32 + 112) = g35;
	*(char *)(g32 + 192) = (char)g35;
	*(char *)(g32 + 164) = (char)g35;
	*(int32_t *)(g32 + 180) = GetRndSeed();
	*(int32_t *)(g32 + 184) = GetRndSeed();
	v20 = g32;
	v17 = v20 + 196;
	a3 = v20 + 198;
	a4 = v20 + 200;
	*(char *)(v20 + 195) = (char)g35;
	v21 = g32;
	a5 = v21 + 201;
	v18 = v21 + 202;
	v19 = v21 + 203;
	v14 = v21 + 204;
	v15 = v21 + 205;
	v16 = v21 + 206;
	g24 = v21 + 208;
	*(char *)(v21 + 196) = *(char *)(*(int32_t *)(g36 + 512) + 86);
	v22 = g32;
	*(int16_t *)(v22 + 198) = *(int16_t *)(*(int32_t *)(g36 + 512) + 124);
	*(char *)(g32 + 200) = *(char *)(*(int32_t *)(g36 + 512) + 105);
	*(char *)(g32 + 201) = *(char *)(*(int32_t *)(g36 + 512) + 107);
	*(char *)(g32 + 202) = *(char *)(*(int32_t *)(g36 + 512) + 108);
	*(char *)(g32 + 203) = *(char *)(*(int32_t *)(g36 + 512) + 109);
	*(char *)(g32 + 204) = *(char *)(*(int32_t *)(g36 + 512) + 111);
	*(char *)(g32 + 205) = *(char *)(*(int32_t *)(g36 + 512) + 112);
	*(char *)(g32 + 206) = *(char *)(*(int32_t *)(g36 + 512) + 113);
	*(int16_t *)(g32 + 208) = *(int16_t *)(*(int32_t *)(g36 + 512) + 116);
	*(char *)(g32 + 216) = (char)g35;
	*(char *)(g32 + 217) = (char)g35;
	v52 = *(int32_t *)(g36 + 512);
	g22 = v52;
	*(int32_t *)(g32 + 160) = *(int32_t *)(v52 + 100);
	*(int32_t *)(g32 + 212) = g35;
	if (*(char *)g31 == 12) {
		// 0x7a29c
		v49 = g30 + g36;
		v53 = *(int32_t *)(v49 + 388);
		g31 = v53;
		g30 = *(int32_t *)(v49 + 392);
		*(int32_t *)g29 = v53;
		*(int32_t *)(g29 + 4) = g30;
		*(int32_t *)g28 = g33;
		v24 = (int32_t *)(v22 + 160);
		v25 = *v24 | 4;
		g28 = v25;
		*v24 = v25;
		*(int32_t *)g27 = 7;
		// branch -> 0x7a2c8
	}
	// 0x7a2c8
	v54 = *(int32_t *)(g23 - 0x7184);
	result = v54;
	v50 = *(int32_t *)v54;
	if (v50 == 1) {
		// 0x7a2d8
		v26 = (int32_t *)g26;
		*v26 = 3 * *v26 + 64;
		*(int32_t *)g25 = *(int32_t *)g26;
		v27 = (char *)v17;
		*v27 = (char)((int32_t)*v27 + 15);
		v28 = (int16_t *)a3;
		*v28 = (int16_t)(2 * (int32_t)*v28 + 2000);
		v29 = (char *)a4;
		*v29 = (char)((int32_t)*v29 + 85);
		v30 = (char *)a5;
		*v30 = (char)(2 * (int32_t)*v30 + 4);
		v31 = (char *)v18;
		*v31 = (char)(2 * (int32_t)*v31 + 4);
		v32 = (char *)v19;
		*v32 = (char)((int32_t)*v32 + 85);
		v33 = (char *)v14;
		*v33 = (char)(2 * (int32_t)*v33 + 4);
		v34 = (char *)v15;
		*v34 = (char)(2 * (int32_t)*v34 + 4);
		v35 = (char *)v16;
		v36 = (int32_t)*v35 + 50;
		result = v36;
		*v35 = (char)v36;
		// branch -> 0x7a370
	}
	// 0x7a370
	if (v50 == 2) {
		// 0x7a378
		v37 = (int32_t *)g26;
		*v37 = 4 * *v37 + 192;
		*(int32_t *)g25 = *(int32_t *)g26;
		v38 = (char *)v17;
		*v38 = (char)((int32_t)*v38 + 30);
		v39 = (int16_t *)a3;
		*v39 = (int16_t)(4 * (int32_t)*v39 + 4000);
		v40 = (char *)a4;
		*v40 = (char)((int32_t)*v40 + 120);
		v41 = (char *)a5;
		*v41 = (char)(4 * (int32_t)*v41 + 6);
		v42 = (char *)v18;
		*v42 = (char)(4 * (int32_t)*v42 + 6);
		v43 = (char *)v19;
		*v43 = (char)((int32_t)*v43 + 120);
		v44 = (char *)v14;
		*v44 = (char)(4 * (int32_t)*v44 + 6);
		v45 = (char *)v15;
		*v45 = (char)(4 * (int32_t)*v45 + 6);
		v46 = (char *)v16;
		*v46 = (char)((int32_t)*v46 + 80);
		v55 = *(int32_t *)(g36 + 512);
		result = v55;
		*(int16_t *)g24 = *(int16_t *)(v55 + 118);
		// branch -> 0x7a41c
	}
	// 0x7a41c
	return result;
}

// Address range: 0x7a430 - 0x7a520
int32_t function_7a430(int32_t a1, int32_t a2)
{
	// 0x7a430
	g32 = *(int32_t *)(g23 - 0x77a8);
	g30 = 0;
	g33 = *(int32_t *)(g23 - 0x70a4);
	g35 = *(int32_t *)(g23 - 0x5ccc);
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // r27
	g34 = 0;
	function_79fe0();
	*(int32_t *)(v1 + 220) = g35;
	g36 = 0;
	*(char *)(v1 + 8) = 0;
	g37 = 8;
	*(int32_t *)(v1 + 4) = g36;
	*(int32_t *)(v1 + 116) = g36;
	*(int32_t *)(v1 + 120) = g36;
	*(int32_t *)(v1 + 32) = g36;
	*(int32_t *)(v1 + 36) = g36;
	*(int32_t *)(v1 + 40) = g36;
	*(int32_t *)(v1 + 44) = g36;
	*(int32_t *)(v1 + 48) = g36;
	*(int32_t *)(v1 + 52) = g36;
	*(int32_t *)(v1 + 72) = random(89);
	*(int32_t *)(v1 + 64) = g36;
	*(int32_t *)(v1 + 68) = g36;
	*(int32_t *)(v1 + 84) = g36;
	*(int32_t *)(v1 + 88) = g36;
	*(int32_t *)(v1 + 92) = g36;
	*(int32_t *)(v1 + 96) = g36;
	*(int32_t *)(v1 + 100) = g36;
	*(int32_t *)(v1 + 104) = g36;
	*(int32_t *)(v1 + 160) = g36;
	*(int32_t *)(v1 + 112) = g36;
	g37 = (int32_t) * (char *)g33;
	*(int32_t *)(v1 + 76) = random(89);
	int32_t v2 = g30 + 1; // 0x7a4d4
	g30 = v2;
	int32_t v3 = v1;                                                      // 0x7a4dc
	int32_t v4 = *(int32_t *)(g32 + 0x55ec * *(int32_t *)(v3 + 76) + 64); // 0x7a4e8
	*(char *)(v3 + 80) = (char)v4;
	int32_t v5 = v1;                                 // 0x7a4f0
	int32_t result = 0x55ec * *(int32_t *)(v5 + 76); // 0x7a4f4
	*(char *)(v5 + 81) = (char)*(int32_t *)(g32 + result + 68);
	v1 += 232;
	// branch -> 0x7a454
	while (v2 < 200) {
		// 0x7a454
		// 0x7a454
		g34 = g30;
		function_79fe0();
		*(int32_t *)(v1 + 220) = g35;
		g36 = 0;
		*(char *)(v1 + 8) = 0;
		g37 = 8;
		*(int32_t *)(v1 + 4) = g36;
		*(int32_t *)(v1 + 116) = g36;
		*(int32_t *)(v1 + 120) = g36;
		*(int32_t *)(v1 + 32) = g36;
		*(int32_t *)(v1 + 36) = g36;
		*(int32_t *)(v1 + 40) = g36;
		*(int32_t *)(v1 + 44) = g36;
		*(int32_t *)(v1 + 48) = g36;
		*(int32_t *)(v1 + 52) = g36;
		*(int32_t *)(v1 + 72) = random(89);
		*(int32_t *)(v1 + 64) = g36;
		*(int32_t *)(v1 + 68) = g36;
		*(int32_t *)(v1 + 84) = g36;
		*(int32_t *)(v1 + 88) = g36;
		*(int32_t *)(v1 + 92) = g36;
		*(int32_t *)(v1 + 96) = g36;
		*(int32_t *)(v1 + 100) = g36;
		*(int32_t *)(v1 + 104) = g36;
		*(int32_t *)(v1 + 160) = g36;
		*(int32_t *)(v1 + 112) = g36;
		g37 = (int32_t) * (char *)g33;
		*(int32_t *)(v1 + 76) = random(89);
		v2 = g30 + 1;
		g30 = v2;
		v3 = v1;
		v4 = *(int32_t *)(g32 + 0x55ec * *(int32_t *)(v3 + 76) + 64);
		*(char *)(v3 + 80) = (char)v4;
		v5 = v1;
		result = 0x55ec * *(int32_t *)(v5 + 76);
		*(char *)(v5 + 81) = (char)*(int32_t *)(g32 + result + 68);
		v1 += 232;
		// branch -> 0x7a454
	}
	// 0x7a50c
	return result;
}

// Address range: 0x7a520 - 0x7a5f8
int32_t function_7a520(int32_t a1, int32_t a2)
{
	// 0x7a520
	g37 = a2;
	g34 = a1;
	int32_t v1 = g10;  // 0x7a520
	uint32_t v2 = g34; // 0x7a524
	if (v2 < 0 || v2 > 111) {
		// 0x7a54c
		// branch -> 0x7a5e8
		// 0x7a5e8
		g10 = v1;
		return 0;
	}
	int32_t v3 = g37; // 0x7a53c
	if (v3 >= 0) {
		// 0x7a544
		if (v3 < 112) {
			int32_t v4 = *(int32_t *)(g23 - 0x767c); // 0x7a554
			if (*(int16_t *)(*(int32_t *)v4 + 2 * v3 + 224 * v2) != 0) {
				// 0x7a574
				// branch -> 0x7a5e8
				// 0x7a5e8
				g10 = v1;
				return 0;
			}
			int32_t v5 = v3 + 112 * v2; // 0x7a588
			if (*(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7680) + v5) != 0) {
				// 0x7a598
				// branch -> 0x7a5e8
				// 0x7a5e8
				g10 = v1;
				return 0;
			}
			char v6 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x779c) + v5); // 0x7a5a8
			int32_t v7 = v6;                                                  // 0x7a5ac
			if (__asm_rlwinm_(v7, 0, 30, 30) != 0 || __asm_rlwinm_(v7, 0, 28, 28) != 0) {
				// 0x7a5b8
				// branch -> 0x7a5e8
				// 0x7a5e8
				g10 = v1;
				return 0;
			}
			// 0x7a5d0
			int32_t result; // 0x7a5f4
			if (function_a3ef8() == 0) {
				// 0x7a5e4
				result = 1;
				// branch -> 0x7a5e8
			} else {
				// 0x7a5dc
				result = 0;
				// branch -> 0x7a5e8
			}
			// 0x7a5e8
			g10 = v1;
			return result;
		}
	}
	// 0x7a54c
	// branch -> 0x7a5e8
	// 0x7a5e8
	g10 = v1;
	return 0;
}

// Address range: 0x7a5f8 - 0x7a684
int32_t function_7a5f8(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g36; // 0x7a5f8
	g36 = a4;
	g37 = 8;
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x767c); // 0x7a63c
	*(int16_t *)(v2 + 224 * a3 + 2 * a4) = (int16_t)(a1 + 1);
	int32_t v3 = random(90);                              // 0x7a648
	int32_t result = function_7a014(a1, v3, a2, a3, g36); // 0x7a660
	g36 = v1;
	return result;
}

// Address range: 0x7a684 - 0x7acfc
int32_t function_7a684(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x7a688
	g16 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7088); // 0x7a690
	g20 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x762c); // 0x7a694
	g19 = v3;
	g25 = a1;
	g22 = *(int32_t *)(g23 - 0x7550);
	g21 = *(int32_t *)(g23 - 0x754c);
	int32_t v4 = *(int32_t *)(g23 - 0x708c) + 32 * a1; // 0x7a6ac
	g26 = v4;
	g17 = *(int32_t *)(g23 - 0x7184);
	g27 = 0;
	g18 = *(int32_t *)(g23 - 0x77f0);
	int32_t result = *(int32_t *)(g23 - 0x7754); // 0x7a6d8
	g29 = result + 232 * *(int32_t *)v3;
	if (256 * *(int32_t *)v2 > 2047) {
		// 0x7ace8
		g10 = v1;
		return result;
	}
	int32_t v5 = 0;                                      // r20
	int32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x7618); // 0x7a6f8
	int32_t v7;                                          // r26
	int32_t v8;                                          // r27
	int32_t v9;                                          // 0x7a748
	int32_t v10;                                         // 0x7a75c
	int32_t v11;                                         // 0x7a7a821
	int32_t v12;                                         // 0x7a744
	int32_t v13;                                         // 0x7a748
	int32_t v14;                                         // 0x7a74c
	int32_t v15;                                         // 0x7a750
	int32_t v16;                                         // 0x7a7a01
	int32_t v17;                                         // 0x7a7ac23
	int32_t v18;                                         // 0x7a740
	if (v6 >= 1) {
		int32_t v19 = 0;                          // 0x7a720
		int32_t v20 = *(int32_t *)(g23 - 0x7610); // 0x7a71c
		while (true) {
			// 0x7a710
			if ((int32_t) * (char *)v20 != (int32_t) * (char *)v4) {
				int32_t v21 = v19 + 1; // 0x7a720
				v5 = v21;
				int32_t v22 = v6 - 1; // 0x7a724
				if (v22 == 0) {
					// break -> 0x7a728
					break;
				}
				v6 = v22;
				v19 = v21;
				v20 += 520;
				// continue -> 0x7a710
				continue;
			}
			while (true) {
				// 0x7a728
				g37 = 80;
				v8 = random(91) + 16;
				g37 = 80;
				v18 = random(91);
				v12 = v18 + 16;
				v7 = v12;
				v9 = v8;
				v13 = v9 - 3;
				g35 = v13;
				v14 = v18 + 19;
				g32 = v14;
				v15 = v9 + 3;
				g33 = 0;
				if (v13 < v15) {
					v17 = v15;
					v11 = v13;
					v16 = v14;
					v10 = v12;
				lab_0x7a75c_2:;
					int32_t result2; // r3
					while (true) {
					lab_0x7a75c:;
						int32_t v23 = v10 - 3; // 0x7a75c
						g36 = v23;
						int32_t v24 = v17; // 0x7a7ac
						int32_t v25 = v11; // 0x7a7a8
						int32_t v26 = v16; // 0x7a7a0118
						if (v23 < v16) {
							int32_t v27; // 0x7a7a0
							while (true) {
								// 0x7a764
								if (v23 >= 0) {
									// 0x7a76c
									if (v23 <= 111) {
										uint32_t v28 = g35; // 0x7a774
										if (v28 >= 0) {
											// 0x7a77c
											if (v28 <= 111) {
												// 0x7a784
												if (function_7a520(v28, v23) != 0) {
													// 0x7a798
													g33++;
													// branch -> 0x7a79c
												}
											}
										}
									}
								}
								int32_t v29 = g36 + 1; // 0x7a79c
								g36 = v29;
								v27 = g32;
								if (v29 >= v27) {
									// break -> 0x7a7a0
									break;
								}
								v23 = v29;
								// continue -> 0x7a764
							}
							// 0x7a7a0
							v24 = v15;
							v25 = g35;
							v26 = v27;
							// branch -> 0x7a7a8
						}
						int32_t v30 = v25 + 1; // 0x7a7a8
						g35 = v30;
						if (v30 < v24) {
							// 0x7a7a8
							v17 = v24;
							v11 = v30;
							v16 = v26;
							v10 = v7;
							// branch -> 0x7a75c
							continue;
						} else {
							// 0x7a7ac
							// branch -> 0x7a7b4
							// 0x7a7b4
							if (g33 > 8) {
							lab_0x7a7c8:
								// 0x7a7c8
								if (function_7a520(v8, v7) != 0) {
									// break (via goto) -> 0x7a7dc
									goto lab_0x7a7dc_2;
								}
								// continue (via goto) -> 0x7a728
								goto lab_0x7a728_3;
							} else {
							lab_0x7a7bc_2:;
								int32_t v31 = g27 + 1; // 0x7a7bc
								g27 = v31;
								if (v31 >= 1000) {
									// break (via goto) -> 0x7a7c8
									goto lab_0x7a7c8_3;
								}
								// continue (via goto) -> 0x7a728
								goto lab_0x7a728_3;
							}
							while (true) {
								// 0x7a728
								result2 = 91;
								g37 = 80;
								v8 = random(91) + 16;
								result2 = 91;
								g37 = 80;
								v18 = random(91);
								result2 = v18;
								v12 = v18 + 16;
								v7 = v12;
								v9 = v8;
								v13 = v9 - 3;
								g35 = v13;
								v14 = v18 + 19;
								g32 = v14;
								v15 = v9 + 3;
								g33 = 0;
								if (v13 < v15) {
									v17 = v15;
									v11 = v13;
									v16 = v14;
									v10 = v12;
									goto lab_0x7a75c;
								}
								int32_t v32 = 0; // 0x7a7b4
								// 0x7a7b4
								if (v32 > 8) {
									goto lab_0x7a7c8;
								}
								goto lab_0x7a7bc_2;
							}
						lab_0x7a7c8_3:
							// 0x7a7c8
							if (function_7a520(v8, v7) != 0) {
								// break (via goto) -> 0x7a7dc
								goto lab_0x7a7dc_2;
							}
							// continue (via goto) -> 0x7a728
							goto lab_0x7a728_3;
						}
					}
				lab_0x7a7dc_2:;
					int32_t v33 = g25; // 0x7a7dc
					if (v33 == 3) {
						// 0x7a7e4
						v8 = 2 * *(int32_t *)g21 + 24;
						v7 = 2 * *(int32_t *)g22 + 28;
						// branch -> 0x7a7fc
					}
					// 0x7a7fc
					if (v33 == 8) {
						// 0x7a804
						v8 = 2 * *(int32_t *)g21 + 22;
						v7 = 2 * *(int32_t *)g22 + 23;
						// branch -> 0x7a81c
					}
					// 0x7a81c
					if (v33 == 2) {
						int32_t v34 = *(int32_t *)*(int32_t *)(g23 - 0x7270); // 0x7a834
						if (v34 >= 1) {
							int32_t v35 = *(int32_t *)(g23 - 0x726c); // 0x7a878
							int32_t v36 = 1;                          // 0x7a854
							int32_t v37 = 0;                          // 0x7a87c
							while (true) {
								int32_t v38 = v36; // 0x7a85429
								if (v37 == *(int32_t *)*(int32_t *)(g23 - 0x70a8)) {
									// 0x7a854
									if (v36 == 1) {
										// 0x7a85c
										v8 = 2 * *(int32_t *)v35 + 20;
										v7 = 2 * *(int32_t *)(v35 + 4) + 20;
										v38 = 0;
										// branch -> 0x7a878
									} else {
										v38 = v36;
									}
								}
								int32_t v39 = v34 - 1; // 0x7a880
								if (v39 == 0) {
									// break -> 0x7a884
									break;
								}
								v34 = v39;
								v35 += 20;
								v36 = v38;
								v37++;
								// continue -> 0x7a84c
							}
							// 0x7a884
							// branch -> 0x7a884
						}
					}
					// 0x7a884
					if (*(char *)g18 == 1) {
						// 0x7a890
						if (v33 == 4) {
							// 0x7a898
							v8 = 32;
							v7 = 46;
							// branch -> 0x7a8a0
						}
						// 0x7a8a0
						if (v33 == 5) {
							// 0x7a8a8
							v8 = 40;
							v7 = 45;
							// branch -> 0x7a8b0
						}
						// 0x7a8b0
						if (v33 == 6) {
							// 0x7a8b8
							v8 = 38;
							v7 = 49;
							// branch -> 0x7a8c0
						}
						// 0x7a8c0
						if (v33 == 1) {
							// 0x7a8c8
							v8 = 35;
							v7 = 47;
							// branch -> 0x7a934
						}
					} else {
						// 0x7a8d4
						if (v33 == 4) {
							// 0x7a8dc
							v8 = 2 * *(int32_t *)g21 + 19;
							v7 = 2 * *(int32_t *)g22 + 22;
							// branch -> 0x7a8f4
						}
						// 0x7a8f4
						if (v33 == 5) {
							// 0x7a8fc
							v8 = 2 * *(int32_t *)g21 + 21;
							v7 = 2 * *(int32_t *)g22 + 19;
							// branch -> 0x7a914
						}
						// 0x7a914
						if (v33 == 6) {
							// 0x7a91c
							v8 = 2 * *(int32_t *)g21 + 21;
							v7 = 2 * *(int32_t *)g22 + 25;
							// branch -> 0x7a934
						}
					}
					// 0x7a934
					int32_t v40; // bp-152
					int32_t v41; // 0x7a9a8
					int32_t v42; // 0x7aa2c
					int32_t v43; // 0x7aa78
					int32_t v44; // 0x7aa88
					int32_t v45; // 0x7aa94
					int32_t v46; // 0x7aaa8
					int32_t v47;
					int32_t v48;       // 0x7aaf0
					int32_t v49;       // 0x7ab0c
					int32_t v50;       // 0x7ab70
					int32_t v51;       // 0x7ab8c
					int32_t v52;       // 0x7ac90
					int32_t *v53;      // 0x7ac28
					int32_t *v54;      // 0x7ac64
					int32_t v55;       // 0x7acdc
					char *v56;         // 0x7a9d4
					int32_t *v57;      // 0x7aa0c
					int32_t *v58;      // 0x7aa18
					int32_t *v59;      // 0x7aafc
					char *v60;         // 0x7ab14
					int16_t *v61;      // 0x7ab20
					char *v62;         // 0x7ab30
					char *v63;         // 0x7ab40
					char *v64;         // 0x7ab50
					char *v65;         // 0x7ab60
					int32_t *v66;      // 0x7ab7c
					char *v67;         // 0x7ab94
					int16_t *v68;      // 0x7aba0
					char *v69;         // 0x7abb0
					char *v70;         // 0x7abc0
					char *v71;         // 0x7abd0
					char *v72;         // 0x7abe0
					int32_t v73;       // 0x7ac0c
					int32_t v74;       // 0x7ac18
					int32_t v75;       // 0x7ac64
					int32_t v76;       // 0x7acac
					unsigned char v77; // 0x7a9b8
					uint32_t v78;      // 0x7aa0c
					int32_t v79;       // 0x7aa80
					uint16_t v80;      // 0x7ac70
					int32_t v81;       // 0x7a9e0
					if (v33 == 9) {
						// 0x7a93c
						v7 = 0;
						int32_t v82 = *(int32_t *)*(int32_t *)(g23 - 0x757c); // 0x7a948
						int32_t v83 = 0;                                      // 0x7a9a838
						int32_t v84 = 0;                                      // 0x7a994
						                                                      // branch -> 0x7a994
					lab_0x7a994:
						while (true) {
							// 0x7a994
							if (v84 == 0) {
								// 0x7a950
								result2 = v82;
								v8 = 0;
								int32_t v85 = 0; // 0x7a964
								int32_t v86 = 0; // 0x7a97c
								// branch -> 0x7a97c
								while (true) {
									int32_t v87 = v86; // 0x7a99433
									if (v86 == 0) {
										int32_t v88 = result2; // 0x7a95c
										result2 = v88 + 224;
										int32_t v89 = v85 + 1; // 0x7a964
										v8 = v89;
										int32_t v90 = llvm_ctlz_i32(367 - (int32_t) * (int16_t *)v88, true); // 0x7a96c
										int32_t v91 = __asm_rlwinm(v90, 27, 24, 31);                         // 0x7a970
										if (v89 > 111) {
											// break -> 0x7a984
											break;
										}
										v85 = v89;
										v86 = v91;
										// continue -> 0x7a97c
										continue;
									}
									int32_t v92 = v7 + 1; // 0x7a988
									v7 = v92;
									if (v92 > 111) {
										v41 = v92;
										// break (via goto) -> 0x7a99c
										goto lab_0x7a99c;
									}
									v83 = v92;
									v82 += 2;
									v84 = v87;
									// continue (via goto) -> 0x7a994
									goto lab_0x7a994;
								}
								// 0x7a99c
								function_7a5f8(*(int32_t *)g19, v5, v8, v41);
								*(char *)(g29 + 192) = (char)(g25 + 1);
								v77 = *(char *)(g26 + 12);
								if (v77 == 0) {
									// 0x7a9d4
									v56 = (char *)(g29 + 196);
									*v56 = (char)((int32_t)*v56 + 5);
									// branch -> 0x7a9e0
								} else {
									// 0x7a9c4
									*(char *)(g29 + 196) = (char)(0x2000000 * (int32_t)v77 / 0x1000000);
									// branch -> 0x7a9e0
								}
								// 0x7a9e0
								v81 = (int32_t) * (int16_t *)(g29 + 198);
								*(int16_t *)(g29 + 198) = (int16_t)__asm_rlwinm(v81, 1, 16, 30);
								*(int32_t *)(g29 + 220) = *(int32_t *)(g26 + 4);
								*(int32_t *)(g29 + 148) = 64 * (int32_t) * (int16_t *)(g26 + 14);
								if (*(char *)g18 == 1) {
									// 0x7aa0c
									v57 = (int32_t *)(g29 + 148);
									v78 = *v57;
									*v57 = v78 / 2 | v78 & -0x80000000;
									v58 = (int32_t *)(g29 + 148);
									if (*v58 <= 63) {
										// 0x7aa24
										*v58 = 64;
										// branch -> 0x7aa2c
									}
								}
								// 0x7aa2c
								v42 = g29;
								*(int32_t *)(v42 + 152) = *(int32_t *)(v42 + 148);
								*(char *)(g29 + 156) = *(char *)(g26 + 16);
								*(char *)(g29 + 157) = *(char *)(g26 + 17);
								*(char *)(g29 + 201) = *(char *)(g26 + 18);
								*(char *)(g29 + 202) = *(char *)(g26 + 19);
								*(char *)(g29 + 204) = *(char *)(g26 + 18);
								*(char *)(g29 + 205) = *(char *)(g26 + 19);
								*(int16_t *)(g29 + 208) = *(int16_t *)(g26 + 20);
								*(int32_t *)(g29 + 212) = *(int32_t *)(g26 + 28);
								v43 = g29;
								v79 = AddLight(*(int32_t *)(v43 + 32), *(int32_t *)(v43 + 36), 3);
								*(char *)(g29 + 219) = (char)v79;
								v44 = g18;
								v46 = v44;
								if (*(char *)v44 != 1) {
									// 0x7aa94
									v45 = g29;
									if (*(char *)(v45 + 156) == 29) {
										// 0x7aaa0
										*(int32_t *)(v45 + 212) = 0;
										v46 = g18;
										// branch -> 0x7aaa8
									} else {
										v46 = v44;
									}
								}
								// 0x7aaa8
								v47 = g29;
								if (*(char *)v46 != 1) {
									// 0x7aab4
									if (*(char *)(v47 + 156) == 28) {
										// 0x7aac0
										if (*(char *)(*(int32_t *)(g23 - 0x7604) + 375) >= 4) {
											// 0x7aad0
											*(char *)(v47 + 8) = 1;
											// branch -> 0x7aaf0
											// 0x7aaf0
											v48 = g17;
											v50 = v48;
											if (*(int32_t *)v48 == 1) {
												// 0x7aafc
												v59 = (int32_t *)(g29 + 148);
												*v59 = 3 * *v59 + 64;
												v49 = g29;
												*(int32_t *)(v49 + 152) = *(int32_t *)(v49 + 148);
												v60 = (char *)(g29 + 196);
												*v60 = (char)((int32_t)*v60 + 15);
												v61 = (int16_t *)(g29 + 198);
												*v61 = (int16_t)(2 * (int32_t)*v61 + 2000);
												v62 = (char *)(g29 + 201);
												*v62 = (char)(2 * (int32_t)*v62 + 4);
												v63 = (char *)(g29 + 202);
												*v63 = (char)(2 * (int32_t)*v63 + 4);
												v64 = (char *)(g29 + 204);
												*v64 = (char)(2 * (int32_t)*v64 + 4);
												v65 = (char *)(g29 + 205);
												*v65 = (char)(2 * (int32_t)*v65 + 4);
												v50 = g17;
												// branch -> 0x7ab70
											}
											// 0x7ab70
											if (*(int32_t *)v50 == 2) {
												// 0x7ab7c
												v66 = (int32_t *)(g29 + 148);
												*v66 = 4 * *v66 + 192;
												v51 = g29;
												*(int32_t *)(v51 + 152) = *(int32_t *)(v51 + 148);
												v67 = (char *)(g29 + 196);
												*v67 = (char)((int32_t)*v67 + 30);
												v68 = (int16_t *)(g29 + 198);
												*v68 = (int16_t)(4 * (int32_t)*v68 + 4000);
												v69 = (char *)(g29 + 201);
												*v69 = (char)(4 * (int32_t)*v69 + 6);
												v70 = (char *)(g29 + 202);
												*v70 = (char)(4 * (int32_t)*v70 + 6);
												v71 = (char *)(g29 + 204);
												*v71 = (char)(4 * (int32_t)*v71 + 6);
												v72 = (char *)(g29 + 205);
												*v72 = (char)(4 * (int32_t)*v72 + 6);
												// branch -> 0x7abf0
											}
											// 0x7abf0
											g37 = *(int32_t *)(g23 - 0x5cd0);
											g38 = *(int32_t *)(g26 + 8);
											sprintf();
											v73 = *(int32_t *)*(int32_t *)(g23 - 0x7770);
											v74 = 256 * *(int32_t *)g20 + 0x1300 + v73;
											function_4fc74((int32_t)&v40, v74, v73);
											*(char *)(g29 + 193) = (char)*(int32_t *)g20;
											v53 = (int32_t *)g20;
											*v53 = *v53 + 1;
											if (__asm_rlwinm_((int32_t) * (int16_t *)(g26 + 22), 0, 29, 29) != 0) {
												// 0x7ac40
												*(char *)(g29 + 200) = *(char *)(g26 + 24);
												*(char *)(g29 + 203) = *(char *)(g26 + 24);
												// branch -> 0x7ac50
											}
											// 0x7ac50
											if (__asm_rlwinm_((int32_t) * (int16_t *)(g26 + 22), 0, 28, 28) != 0) {
												// 0x7ac5c
												*(char *)(g29 + 206) = *(char *)(g26 + 24);
												// branch -> 0x7ac64
											}
											// 0x7ac64
											v54 = (int32_t *)g19;
											v75 = *v54;
											result2 = v75;
											*v54 = v75 + 1;
											v80 = *(int16_t *)(g26 + 22);
											if (v80 % 2 != 0) {
												// 0x7ac7c
												result2 = function_7b168(g16, a3, (int32_t)v80, *(int32_t *)g19 - 1);
												// branch -> 0x7ac90
											}
											// 0x7ac90
											v52 = g29;
											if (*(char *)(v52 + 156) != 12) {
												// 0x7ac9c
												v76 = *(int32_t *)(v52 + 224) + 8 * *(int32_t *)(v52 + 72);
												*(int32_t *)(v52 + 84) = *(int32_t *)(v76 + 8);
												*(int32_t *)(g29 + 88) = *(int32_t *)(v76 + 12);
												g37 = *(int32_t *)(g29 + 100) - 1;
												*(int32_t *)(g29 + 104) = random(88) + 1;
												v55 = __asm_rlwinm(*(int32_t *)(g29 + 160), 0, 30, 28);
												result2 = v55;
												*(int32_t *)(g29 + 160) = v55;
												*(int32_t *)(g29 + 4) = 0;
												// branch -> 0x7ace8
											}
											// 0x7ace8
											g10 = v1;
											return result2;
										}
									}
								}
								// 0x7aadc
								if (*(int32_t *)(v47 + 212) != 0) {
									// 0x7aae8
									*(char *)(v47 + 8) = 6;
									// branch -> 0x7aaf0
								}
								// 0x7aaf0
								v48 = g17;
								v50 = v48;
								if (*(int32_t *)v48 == 1) {
									// 0x7aafc
									v59 = (int32_t *)(g29 + 148);
									*v59 = 3 * *v59 + 64;
									v49 = g29;
									*(int32_t *)(v49 + 152) = *(int32_t *)(v49 + 148);
									v60 = (char *)(g29 + 196);
									*v60 = (char)((int32_t)*v60 + 15);
									v61 = (int16_t *)(g29 + 198);
									*v61 = (int16_t)(2 * (int32_t)*v61 + 2000);
									v62 = (char *)(g29 + 201);
									*v62 = (char)(2 * (int32_t)*v62 + 4);
									v63 = (char *)(g29 + 202);
									*v63 = (char)(2 * (int32_t)*v63 + 4);
									v64 = (char *)(g29 + 204);
									*v64 = (char)(2 * (int32_t)*v64 + 4);
									v65 = (char *)(g29 + 205);
									*v65 = (char)(2 * (int32_t)*v65 + 4);
									v50 = g17;
									// branch -> 0x7ab70
								}
								// 0x7ab70
								if (*(int32_t *)v50 == 2) {
									// 0x7ab7c
									v66 = (int32_t *)(g29 + 148);
									*v66 = 4 * *v66 + 192;
									v51 = g29;
									*(int32_t *)(v51 + 152) = *(int32_t *)(v51 + 148);
									v67 = (char *)(g29 + 196);
									*v67 = (char)((int32_t)*v67 + 30);
									v68 = (int16_t *)(g29 + 198);
									*v68 = (int16_t)(4 * (int32_t)*v68 + 4000);
									v69 = (char *)(g29 + 201);
									*v69 = (char)(4 * (int32_t)*v69 + 6);
									v70 = (char *)(g29 + 202);
									*v70 = (char)(4 * (int32_t)*v70 + 6);
									v71 = (char *)(g29 + 204);
									*v71 = (char)(4 * (int32_t)*v71 + 6);
									v72 = (char *)(g29 + 205);
									*v72 = (char)(4 * (int32_t)*v72 + 6);
									// branch -> 0x7abf0
								}
								// 0x7abf0
								g37 = *(int32_t *)(g23 - 0x5cd0);
								g38 = *(int32_t *)(g26 + 8);
								sprintf();
								v73 = *(int32_t *)*(int32_t *)(g23 - 0x7770);
								v74 = 256 * *(int32_t *)g20 + 0x1300 + v73;
								function_4fc74((int32_t)&v40, v74, v73);
								*(char *)(g29 + 193) = (char)*(int32_t *)g20;
								v53 = (int32_t *)g20;
								*v53 = *v53 + 1;
								if (__asm_rlwinm_((int32_t) * (int16_t *)(g26 + 22), 0, 29, 29) != 0) {
									// 0x7ac40
									*(char *)(g29 + 200) = *(char *)(g26 + 24);
									*(char *)(g29 + 203) = *(char *)(g26 + 24);
									// branch -> 0x7ac50
								}
								// 0x7ac50
								if (__asm_rlwinm_((int32_t) * (int16_t *)(g26 + 22), 0, 28, 28) != 0) {
									// 0x7ac5c
									*(char *)(g29 + 206) = *(char *)(g26 + 24);
									// branch -> 0x7ac64
								}
								// 0x7ac64
								v54 = (int32_t *)g19;
								v75 = *v54;
								result2 = v75;
								*v54 = v75 + 1;
								v80 = *(int16_t *)(g26 + 22);
								if (v80 % 2 != 0) {
									// 0x7ac7c
									result2 = function_7b168(g16, a3, (int32_t)v80, *(int32_t *)g19 - 1);
									// branch -> 0x7ac90
								}
								// 0x7ac90
								v52 = g29;
								if (*(char *)(v52 + 156) != 12) {
									// 0x7ac9c
									v76 = *(int32_t *)(v52 + 224) + 8 * *(int32_t *)(v52 + 72);
									*(int32_t *)(v52 + 84) = *(int32_t *)(v76 + 8);
									*(int32_t *)(g29 + 88) = *(int32_t *)(v76 + 12);
									g37 = *(int32_t *)(g29 + 100) - 1;
									*(int32_t *)(g29 + 104) = random(88) + 1;
									v55 = __asm_rlwinm(*(int32_t *)(g29 + 160), 0, 30, 28);
									result2 = v55;
									*(int32_t *)(g29 + 160) = v55;
									*(int32_t *)(g29 + 4) = 0;
									// branch -> 0x7ace8
								}
								// 0x7ace8
								g10 = v1;
								return result2;
							}
							v41 = v83;
						}
					} else {
						// 0x7a934
						v41 = v7;
						// branch -> 0x7a99c
					}
				lab_0x7a99c:
					// 0x7a99c
					function_7a5f8(*(int32_t *)g19, v5, v8, v41);
					*(char *)(g29 + 192) = (char)(g25 + 1);
					v77 = *(char *)(g26 + 12);
					if (v77 == 0) {
						// 0x7a9d4
						v56 = (char *)(g29 + 196);
						*v56 = (char)((int32_t)*v56 + 5);
						// branch -> 0x7a9e0
					} else {
						// 0x7a9c4
						*(char *)(g29 + 196) = (char)(0x2000000 * (int32_t)v77 / 0x1000000);
						// branch -> 0x7a9e0
					}
					// 0x7a9e0
					v81 = (int32_t) * (int16_t *)(g29 + 198);
					*(int16_t *)(g29 + 198) = (int16_t)__asm_rlwinm(v81, 1, 16, 30);
					*(int32_t *)(g29 + 220) = *(int32_t *)(g26 + 4);
					*(int32_t *)(g29 + 148) = 64 * (int32_t) * (int16_t *)(g26 + 14);
					if (*(char *)g18 == 1) {
						// 0x7aa0c
						v57 = (int32_t *)(g29 + 148);
						v78 = *v57;
						*v57 = v78 / 2 | v78 & -0x80000000;
						v58 = (int32_t *)(g29 + 148);
						if (*v58 <= 63) {
							// 0x7aa24
							*v58 = 64;
							// branch -> 0x7aa2c
						}
					}
					// 0x7aa2c
					v42 = g29;
					*(int32_t *)(v42 + 152) = *(int32_t *)(v42 + 148);
					*(char *)(g29 + 156) = *(char *)(g26 + 16);
					*(char *)(g29 + 157) = *(char *)(g26 + 17);
					*(char *)(g29 + 201) = *(char *)(g26 + 18);
					*(char *)(g29 + 202) = *(char *)(g26 + 19);
					*(char *)(g29 + 204) = *(char *)(g26 + 18);
					*(char *)(g29 + 205) = *(char *)(g26 + 19);
					*(int16_t *)(g29 + 208) = *(int16_t *)(g26 + 20);
					*(int32_t *)(g29 + 212) = *(int32_t *)(g26 + 28);
					v43 = g29;
					v79 = AddLight(*(int32_t *)(v43 + 32), *(int32_t *)(v43 + 36), 3);
					*(char *)(g29 + 219) = (char)v79;
					v44 = g18;
					v46 = v44;
					if (*(char *)v44 != 1) {
						// 0x7aa94
						v45 = g29;
						if (*(char *)(v45 + 156) == 29) {
							// 0x7aaa0
							*(int32_t *)(v45 + 212) = 0;
							v46 = g18;
							// branch -> 0x7aaa8
						} else {
							v46 = v44;
						}
					}
					// 0x7aaa8
					v47 = g29;
					if (*(char *)v46 != 1) {
						// 0x7aab4
						if (*(char *)(v47 + 156) == 28) {
							// 0x7aac0
							if (*(char *)(*(int32_t *)(g23 - 0x7604) + 375) >= 4) {
								// 0x7aad0
								*(char *)(v47 + 8) = 1;
								// branch -> 0x7aaf0
								// 0x7aaf0
								v48 = g17;
								v50 = v48;
								if (*(int32_t *)v48 == 1) {
									// 0x7aafc
									v59 = (int32_t *)(g29 + 148);
									*v59 = 3 * *v59 + 64;
									v49 = g29;
									*(int32_t *)(v49 + 152) = *(int32_t *)(v49 + 148);
									v60 = (char *)(g29 + 196);
									*v60 = (char)((int32_t)*v60 + 15);
									v61 = (int16_t *)(g29 + 198);
									*v61 = (int16_t)(2 * (int32_t)*v61 + 2000);
									v62 = (char *)(g29 + 201);
									*v62 = (char)(2 * (int32_t)*v62 + 4);
									v63 = (char *)(g29 + 202);
									*v63 = (char)(2 * (int32_t)*v63 + 4);
									v64 = (char *)(g29 + 204);
									*v64 = (char)(2 * (int32_t)*v64 + 4);
									v65 = (char *)(g29 + 205);
									*v65 = (char)(2 * (int32_t)*v65 + 4);
									v50 = g17;
									// branch -> 0x7ab70
								}
								// 0x7ab70
								if (*(int32_t *)v50 == 2) {
									// 0x7ab7c
									v66 = (int32_t *)(g29 + 148);
									*v66 = 4 * *v66 + 192;
									v51 = g29;
									*(int32_t *)(v51 + 152) = *(int32_t *)(v51 + 148);
									v67 = (char *)(g29 + 196);
									*v67 = (char)((int32_t)*v67 + 30);
									v68 = (int16_t *)(g29 + 198);
									*v68 = (int16_t)(4 * (int32_t)*v68 + 4000);
									v69 = (char *)(g29 + 201);
									*v69 = (char)(4 * (int32_t)*v69 + 6);
									v70 = (char *)(g29 + 202);
									*v70 = (char)(4 * (int32_t)*v70 + 6);
									v71 = (char *)(g29 + 204);
									*v71 = (char)(4 * (int32_t)*v71 + 6);
									v72 = (char *)(g29 + 205);
									*v72 = (char)(4 * (int32_t)*v72 + 6);
									// branch -> 0x7abf0
								}
								// 0x7abf0
								g37 = *(int32_t *)(g23 - 0x5cd0);
								g38 = *(int32_t *)(g26 + 8);
								sprintf();
								v73 = *(int32_t *)*(int32_t *)(g23 - 0x7770);
								v74 = 256 * *(int32_t *)g20 + 0x1300 + v73;
								function_4fc74((int32_t)&v40, v74, v73);
								*(char *)(g29 + 193) = (char)*(int32_t *)g20;
								v53 = (int32_t *)g20;
								*v53 = *v53 + 1;
								if (__asm_rlwinm_((int32_t) * (int16_t *)(g26 + 22), 0, 29, 29) != 0) {
									// 0x7ac40
									*(char *)(g29 + 200) = *(char *)(g26 + 24);
									*(char *)(g29 + 203) = *(char *)(g26 + 24);
									// branch -> 0x7ac50
								}
								// 0x7ac50
								if (__asm_rlwinm_((int32_t) * (int16_t *)(g26 + 22), 0, 28, 28) != 0) {
									// 0x7ac5c
									*(char *)(g29 + 206) = *(char *)(g26 + 24);
									// branch -> 0x7ac64
								}
								// 0x7ac64
								v54 = (int32_t *)g19;
								v75 = *v54;
								result2 = v75;
								*v54 = v75 + 1;
								v80 = *(int16_t *)(g26 + 22);
								if (v80 % 2 != 0) {
									// 0x7ac7c
									result2 = function_7b168(g16, a3, (int32_t)v80, *(int32_t *)g19 - 1);
									// branch -> 0x7ac90
								}
								// 0x7ac90
								v52 = g29;
								if (*(char *)(v52 + 156) != 12) {
									// 0x7ac9c
									v76 = *(int32_t *)(v52 + 224) + 8 * *(int32_t *)(v52 + 72);
									*(int32_t *)(v52 + 84) = *(int32_t *)(v76 + 8);
									*(int32_t *)(g29 + 88) = *(int32_t *)(v76 + 12);
									g37 = *(int32_t *)(g29 + 100) - 1;
									*(int32_t *)(g29 + 104) = random(88) + 1;
									v55 = __asm_rlwinm(*(int32_t *)(g29 + 160), 0, 30, 28);
									result2 = v55;
									*(int32_t *)(g29 + 160) = v55;
									*(int32_t *)(g29 + 4) = 0;
									// branch -> 0x7ace8
								}
								// 0x7ace8
								g10 = v1;
								return result2;
							}
						}
					}
					// 0x7aadc
					if (*(int32_t *)(v47 + 212) != 0) {
						// 0x7aae8
						*(char *)(v47 + 8) = 6;
						// branch -> 0x7aaf0
					}
					// 0x7aaf0
					v48 = g17;
					v50 = v48;
					if (*(int32_t *)v48 == 1) {
						// 0x7aafc
						v59 = (int32_t *)(g29 + 148);
						*v59 = 3 * *v59 + 64;
						v49 = g29;
						*(int32_t *)(v49 + 152) = *(int32_t *)(v49 + 148);
						v60 = (char *)(g29 + 196);
						*v60 = (char)((int32_t)*v60 + 15);
						v61 = (int16_t *)(g29 + 198);
						*v61 = (int16_t)(2 * (int32_t)*v61 + 2000);
						v62 = (char *)(g29 + 201);
						*v62 = (char)(2 * (int32_t)*v62 + 4);
						v63 = (char *)(g29 + 202);
						*v63 = (char)(2 * (int32_t)*v63 + 4);
						v64 = (char *)(g29 + 204);
						*v64 = (char)(2 * (int32_t)*v64 + 4);
						v65 = (char *)(g29 + 205);
						*v65 = (char)(2 * (int32_t)*v65 + 4);
						v50 = g17;
						// branch -> 0x7ab70
					}
					// 0x7ab70
					if (*(int32_t *)v50 == 2) {
						// 0x7ab7c
						v66 = (int32_t *)(g29 + 148);
						*v66 = 4 * *v66 + 192;
						v51 = g29;
						*(int32_t *)(v51 + 152) = *(int32_t *)(v51 + 148);
						v67 = (char *)(g29 + 196);
						*v67 = (char)((int32_t)*v67 + 30);
						v68 = (int16_t *)(g29 + 198);
						*v68 = (int16_t)(4 * (int32_t)*v68 + 4000);
						v69 = (char *)(g29 + 201);
						*v69 = (char)(4 * (int32_t)*v69 + 6);
						v70 = (char *)(g29 + 202);
						*v70 = (char)(4 * (int32_t)*v70 + 6);
						v71 = (char *)(g29 + 204);
						*v71 = (char)(4 * (int32_t)*v71 + 6);
						v72 = (char *)(g29 + 205);
						*v72 = (char)(4 * (int32_t)*v72 + 6);
						// branch -> 0x7abf0
					}
					// 0x7abf0
					g37 = *(int32_t *)(g23 - 0x5cd0);
					g38 = *(int32_t *)(g26 + 8);
					sprintf();
					v73 = *(int32_t *)*(int32_t *)(g23 - 0x7770);
					v74 = 256 * *(int32_t *)g20 + 0x1300 + v73;
					function_4fc74((int32_t)&v40, v74, v73);
					*(char *)(g29 + 193) = (char)*(int32_t *)g20;
					v53 = (int32_t *)g20;
					*v53 = *v53 + 1;
					if (__asm_rlwinm_((int32_t) * (int16_t *)(g26 + 22), 0, 29, 29) != 0) {
						// 0x7ac40
						*(char *)(g29 + 200) = *(char *)(g26 + 24);
						*(char *)(g29 + 203) = *(char *)(g26 + 24);
						// branch -> 0x7ac50
					}
					// 0x7ac50
					if (__asm_rlwinm_((int32_t) * (int16_t *)(g26 + 22), 0, 28, 28) != 0) {
						// 0x7ac5c
						*(char *)(g29 + 206) = *(char *)(g26 + 24);
						// branch -> 0x7ac64
					}
					// 0x7ac64
					v54 = (int32_t *)g19;
					v75 = *v54;
					result2 = v75;
					*v54 = v75 + 1;
					v80 = *(int16_t *)(g26 + 22);
					if (v80 % 2 != 0) {
						// 0x7ac7c
						result2 = function_7b168(g16, a3, (int32_t)v80, *(int32_t *)g19 - 1);
						// branch -> 0x7ac90
					}
					// 0x7ac90
					v52 = g29;
					if (*(char *)(v52 + 156) != 12) {
						// 0x7ac9c
						v76 = *(int32_t *)(v52 + 224) + 8 * *(int32_t *)(v52 + 72);
						*(int32_t *)(v52 + 84) = *(int32_t *)(v76 + 8);
						*(int32_t *)(g29 + 88) = *(int32_t *)(v76 + 12);
						g37 = *(int32_t *)(g29 + 100) - 1;
						*(int32_t *)(g29 + 104) = random(88) + 1;
						v55 = __asm_rlwinm(*(int32_t *)(g29 + 160), 0, 30, 28);
						result2 = v55;
						*(int32_t *)(g29 + 160) = v55;
						*(int32_t *)(g29 + 4) = 0;
						// branch -> 0x7ace8
					}
					// 0x7ace8
					g10 = v1;
					return result2;
				}
			lab_0x7a7b4:
				goto lab_0x7a7bc_2;
			}
		}
	}
lab_0x7a728_3:
	while (true) {
		// 0x7a728
		g37 = 80;
		v8 = random(91) + 16;
		g37 = 80;
		v18 = random(91);
		v12 = v18 + 16;
		v7 = v12;
		v9 = v8;
		v13 = v9 - 3;
		g35 = v13;
		v14 = v18 + 19;
		g32 = v14;
		v15 = v9 + 3;
		g33 = 0;
		if (v13 < v15) {
			v17 = v15;
			v11 = v13;
			v16 = v14;
			v10 = v12;
			goto lab_0x7a75c_2;
		}
		goto lab_0x7a7b4;
	}
}

// Address range: 0x7acfc - 0x7ae34
int32_t function_7acfc(int32_t a1)
{
	int32_t v1 = g10; // 0x7ad00
	g30 = *(int32_t *)(g23 - 0x7604);
	g35 = 0;
	g31 = *(int32_t *)(g23 - 0x7618);
	int32_t v2 = *(int32_t *)(g23 - 0x77e4); // 0x7ad10
	g32 = v2;
	g33 = *(int32_t *)(g23 - 0x7610);
	int32_t v3 = *(int32_t *)(g23 - 0x708c); // 0x7ad18
	g36 = v3;
	unsigned char v4 = *(char *)v3; // 0x7ae108
	if (v4 == -1) {
		// 0x7ae20
		g10 = v1;
		return g34;
	}
	int32_t v5 = 0;  // 0x7ae0c25
	int32_t v6 = v4; // 0x7ad40
	while (true) {
		unsigned char v7 = *(char *)v2; // 0x7ad28
		g34 = v7;
		int32_t v8 = v5;   // 0x7ae0c
		int32_t v9;        // 0x7ae08
		int32_t v10;       // 0x7ae0c
		unsigned char v11; // 0x7ae10
		if (v7 == *(char *)(v3 + 12)) {
			int32_t v12 = *(int32_t *)g31; // 0x7ad38
			int32_t v13 = v12;             // r5
			g34 = g33;
			int32_t v14 = 0x1000000 * v6 / 0x1000000; // r4
			int32_t v15 = v5;                         // 0x7ad78
			int32_t v16 = 0;                          // 0x7adfc
			int32_t v17 = 0;
			if (v12 > 0) {
				int32_t v18 = 0; // 0x7ad58
				int32_t v19 = 0; // 0x7ad70
				int32_t v20;     // 0x7ad58
				int32_t v21;     // 0x7ad64
				while (true) {
					// 0x7ad70
					if (v19 == 0) {
						int32_t v22 = g34;                // 0x7ad50
						unsigned char v23 = *(char *)v22; // 0x7ad50
						g34 = v22 + 520;
						v20 = v18 + 1;
						v21 = __asm_rlwinm(llvm_ctlz_i32(v14 - (int32_t)v23, true), 27, 24, 31);
						if (v20 >= v13) {
							// break -> 0x7ad78
							break;
						}
						v18 = v20;
						v19 = v21;
						// continue -> 0x7ad70
						continue;
					}
					// 0x7ad78
					// branch -> 0x7ad78
				}
				// 0x7ad78
				v15 = g35;
				v16 = v20;
				v17 = v21;
				// branch -> 0x7ad78
			}
			int32_t v24 = v17;
			if (v15 == 0) {
				// 0x7ad80
				if (*(char *)(g30 + 50) == 0) {
					// 0x7ad8c
					v24 = 0;
					// branch -> 0x7ad90
				} else {
					v24 = v17;
				}
			}
			int32_t v25 = v24;
			if (v15 == 2) {
				// 0x7ad98
				if (*(char *)(g30 + 74) == 0) {
					// 0x7ada4
					v25 = 0;
					// branch -> 0x7ada8
				} else {
					v25 = v24;
				}
			}
			int32_t v26 = v25;
			if (v15 == 3) {
				// 0x7adb0
				if (*(char *)(g30 + 170) == 0) {
					// 0x7adbc
					v26 = 0;
					// branch -> 0x7adc0
				} else {
					v26 = v25;
				}
			}
			int32_t v27 = v26;
			if (v15 == 7) {
				// 0x7adc8
				if (*(char *)(g30 + 98) == 0) {
					// 0x7add4
					v27 = 0;
					// branch -> 0x7add8
				} else {
					v27 = v26;
				}
			}
			int32_t v28 = v27; // 0x7adf0
			if (v15 == 8) {
				// 0x7ade0
				if (*(char *)(g30 + 266) == 0) {
					// 0x7adec
					v28 = 0;
					// branch -> 0x7adf0
				} else {
					v28 = v27;
				}
			}
			// 0x7adf0
			if (v28 != 0) {
				// 0x7adf8
				g34 = function_7a684(v15, v16 - 1, 8);
				v8 = g35;
				// branch -> 0x7ae08
			} else {
				v8 = v15;
			}
			// 0x7ae08
			v9 = g36 + 32;
			g36 = v9;
			v10 = v8 + 1;
			g35 = v10;
			v11 = *(char *)v9;
			if (v11 == -1) {
				// 0x7ae20
				g10 = v1;
				return g34;
			}
		lab_0x7ae08:
			// 0x7ae08
			v5 = v10;
			v6 = v11;
			v3 = v9;
			v2 = g32;
			// branch -> 0x7ad28
			continue;
		}
		// 0x7ae08
		v9 = g36 + 32;
		g36 = v9;
		v10 = v8 + 1;
		g35 = v10;
		v11 = *(char *)v9;
		if (v11 != -1) {
			goto lab_0x7ae08;
		}
		// 0x7ae20
		g10 = v1;
		return g34;
	}
}

// Address range: 0x7ae34 - 0x7b168
int32_t function_7ae34(void)
{
	int32_t v1 = g10; // 0x7ae38
	g30 = *(int32_t *)(g23 - 0x7550);
	g31 = *(int32_t *)(g23 - 0x754c);
	g32 = *(int32_t *)(g23 - 0x7604);
	g33 = *(int32_t *)(g23 - 0x77f0);
	g35 = *(int32_t *)(g23 - 0x708c);
	g29 = *(int32_t *)(g23 - 0x7618);
	g36 = *(int32_t *)(g23 - 0x77e4);
	int32_t result3; // 0x7b164
	if (*(char *)*(int32_t *)(g23 - 0x77d8) == 0) {
		// 0x7ae70
		if (QuestStatus(6) != 0) {
			// 0x7ae80
			function_7a684(9, 0, 0);
			// branch -> 0x7ae90
		}
		// 0x7ae90
		int32_t v2;            // bp-56
		unsigned char result2; // 0x7b094
		int32_t v3;            // 0x7af0c
		int32_t v4;            // 0x7af4c
		int32_t v5;            // 0x7af8c
		int32_t v6;            // 0x7afcc
		int32_t v7;            // 0x7b014
		int32_t v8;            // 0x7b094
		int32_t v9;            // 0x7b108
		if (*(char *)g36 == *(char *)(g32 + 288)) {
			// 0x7aea0
			if (*(char *)g33 != 1) {
				int32_t v10 = 0;                          // r23
				int32_t v11 = *(int32_t *)(g23 - 0x7610); // 0x7aeb0
				if (*(int32_t *)g29 > 0) {
					int32_t v12; // 0x7aed4
					while (true) {
						// 0x7aec0
						if (function_86dcc((int32_t) * (char *)v11) == 0) {
							// 0x7aed0
							v12 = v10 + 1;
							v10 = v12;
							if (v12 >= *(int32_t *)g29) {
								// break -> 0x7aee4
								break;
							}
							v11 += 520;
							// continue -> 0x7aec0
							continue;
						}
						// 0x7aee4
						function_7a684(1, v10, 30);
						// branch -> 0x7aef4
						// 0x7aef4
						if (QuestStatus(7) != 0) {
							// 0x7af04
							v3 = LoadFileInMem(*(int32_t *)(g23 - 0x5cd4), NULL);
							v2 = v3;
							SetMapMonsters(v3, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
							MemFreeDbg(&v2);
							// branch -> 0x7af34
						}
						// 0x7af34
						if (QuestStatus(9) != 0) {
							// 0x7af44
							v4 = LoadFileInMem(*(int32_t *)(g23 - 0x5cd8), NULL);
							v2 = v4;
							SetMapMonsters(v4, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
							MemFreeDbg(&v2);
							// branch -> 0x7af74
						}
						// 0x7af74
						if (QuestStatus(8) != 0) {
							// 0x7af84
							v5 = LoadFileInMem(*(int32_t *)(g23 - 0x5cdc), NULL);
							v2 = v5;
							SetMapMonsters(v5, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
							MemFreeDbg(&v2);
							// branch -> 0x7afb4
						}
						// 0x7afb4
						if (QuestStatus(10) != 0) {
							// 0x7afc4
							v6 = LoadFileInMem(*(int32_t *)(g23 - 0x5ce0), NULL);
							v2 = v6;
							SetMapMonsters(v6, 2 * *(int32_t *)g31 + 2, 2 * *(int32_t *)g30 + 2);
							MemFreeDbg(&v2);
							// branch -> 0x7affc
						}
						// 0x7affc
						if (QuestStatus(11) != 0) {
							// 0x7b00c
							v7 = LoadFileInMem(*(int32_t *)(g23 - 0x5ce4), NULL);
							v2 = v7;
							SetMapMonsters(v7, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
							MemFreeDbg(&v2);
							function_795ec(*(char *)(g35 + 256), 1);
							// branch -> 0x7b04c
						}
						// 0x7b04c
						if (QuestStatus(4) != 0) {
							// 0x7b05c
							function_795ec(*(char *)(g35 + 224), 1);
							// branch -> 0x7b06c
						}
						// 0x7b06c
						if (QuestStatus(3) != 0) {
							// 0x7b07c
							if (*(int32_t *)*(int32_t *)(g23 - 0x70a8) == -1) {
								// 0x7b08c
								*(char *)(g32 + 74) = 0;
								// branch -> 0x7b094
							}
						}
						// 0x7b094
						result2 = *(char *)g36;
						if (result2 == *(char *)(g32 + 360)) {
							// 0x7b0a4
							if (*(char *)g33 != 1) {
								// 0x7b0b0
								function_795ec(*(char *)(g35 + 128), 4);
								function_795ec(*(char *)(g35 + 160), 4);
								function_7a684(4, 0, 0);
								function_7a684(5, 0, 0);
								function_7a684(6, 0, 0);
								v9 = LoadFileInMem(*(int32_t *)(g23 - 0x5ce8), NULL);
								v2 = v9;
								SetMapMonsters(v9, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
								int32_t result = MemFreeDbg(&v2); // 0x7b12c
								// branch -> 0x7b154
								// 0x7b154
								g10 = v1;
								return result;
							}
						}
						// 0x7b154
						g10 = v1;
						return result2;
					}
					// 0x7aee4
					function_7a684(1, v12, 30);
					// branch -> 0x7aef4
					// 0x7aef4
					if (QuestStatus(7) != 0) {
						// 0x7af04
						v3 = LoadFileInMem(*(int32_t *)(g23 - 0x5cd4), NULL);
						v2 = v3;
						SetMapMonsters(v3, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
						MemFreeDbg(&v2);
						// branch -> 0x7af34
					}
					// 0x7af34
					if (QuestStatus(9) != 0) {
						// 0x7af44
						v4 = LoadFileInMem(*(int32_t *)(g23 - 0x5cd8), NULL);
						v2 = v4;
						SetMapMonsters(v4, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
						MemFreeDbg(&v2);
						// branch -> 0x7af74
					}
					// 0x7af74
					if (QuestStatus(8) != 0) {
						// 0x7af84
						v5 = LoadFileInMem(*(int32_t *)(g23 - 0x5cdc), NULL);
						v2 = v5;
						SetMapMonsters(v5, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
						MemFreeDbg(&v2);
						// branch -> 0x7afb4
					}
					// 0x7afb4
					if (QuestStatus(10) != 0) {
						// 0x7afc4
						v6 = LoadFileInMem(*(int32_t *)(g23 - 0x5ce0), NULL);
						v2 = v6;
						SetMapMonsters(v6, 2 * *(int32_t *)g31 + 2, 2 * *(int32_t *)g30 + 2);
						MemFreeDbg(&v2);
						// branch -> 0x7affc
					}
					// 0x7affc
					if (QuestStatus(11) != 0) {
						// 0x7b00c
						v7 = LoadFileInMem(*(int32_t *)(g23 - 0x5ce4), NULL);
						v2 = v7;
						SetMapMonsters(v7, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
						MemFreeDbg(&v2);
						function_795ec(*(char *)(g35 + 256), 1);
						// branch -> 0x7b04c
					}
					// 0x7b04c
					if (QuestStatus(4) != 0) {
						// 0x7b05c
						function_795ec(*(char *)(g35 + 224), 1);
						// branch -> 0x7b06c
					}
					// 0x7b06c
					if (QuestStatus(3) != 0) {
						// 0x7b07c
						if (*(int32_t *)*(int32_t *)(g23 - 0x70a8) == -1) {
							// 0x7b08c
							*(char *)(g32 + 74) = 0;
							// branch -> 0x7b094
						}
					}
					// 0x7b094
					result2 = *(char *)g36;
					v8 = result2;
					result3 = v8;
					if (result2 == *(char *)(g32 + 360)) {
						// 0x7b0a4
						if (*(char *)g33 != 1) {
							// 0x7b0b0
							function_795ec(*(char *)(g35 + 128), 4);
							function_795ec(*(char *)(g35 + 160), 4);
							function_7a684(4, 0, 0);
							function_7a684(5, 0, 0);
							function_7a684(6, 0, 0);
							v9 = LoadFileInMem(*(int32_t *)(g23 - 0x5ce8), NULL);
							v2 = v9;
							SetMapMonsters(v9, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
							result3 = MemFreeDbg(&v2);
							// branch -> 0x7b154
						} else {
							result3 = v8;
						}
					}
					// 0x7b154
					g10 = v1;
					return result3;
				}
				// 0x7aee4
				function_7a684(1, 0, 30);
				// branch -> 0x7aef4
			}
		}
		// 0x7aef4
		if (QuestStatus(7) != 0) {
			// 0x7af04
			v3 = LoadFileInMem(*(int32_t *)(g23 - 0x5cd4), NULL);
			v2 = v3;
			SetMapMonsters(v3, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
			MemFreeDbg(&v2);
			// branch -> 0x7af34
		}
		// 0x7af34
		if (QuestStatus(9) != 0) {
			// 0x7af44
			v4 = LoadFileInMem(*(int32_t *)(g23 - 0x5cd8), NULL);
			v2 = v4;
			SetMapMonsters(v4, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
			MemFreeDbg(&v2);
			// branch -> 0x7af74
		}
		// 0x7af74
		if (QuestStatus(8) != 0) {
			// 0x7af84
			v5 = LoadFileInMem(*(int32_t *)(g23 - 0x5cdc), NULL);
			v2 = v5;
			SetMapMonsters(v5, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
			MemFreeDbg(&v2);
			// branch -> 0x7afb4
		}
		// 0x7afb4
		if (QuestStatus(10) != 0) {
			// 0x7afc4
			v6 = LoadFileInMem(*(int32_t *)(g23 - 0x5ce0), NULL);
			v2 = v6;
			SetMapMonsters(v6, 2 * *(int32_t *)g31 + 2, 2 * *(int32_t *)g30 + 2);
			MemFreeDbg(&v2);
			// branch -> 0x7affc
		}
		// 0x7affc
		if (QuestStatus(11) != 0) {
			// 0x7b00c
			v7 = LoadFileInMem(*(int32_t *)(g23 - 0x5ce4), NULL);
			v2 = v7;
			SetMapMonsters(v7, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
			MemFreeDbg(&v2);
			function_795ec(*(char *)(g35 + 256), 1);
			// branch -> 0x7b04c
		}
		// 0x7b04c
		if (QuestStatus(4) != 0) {
			// 0x7b05c
			function_795ec(*(char *)(g35 + 224), 1);
			// branch -> 0x7b06c
		}
		// 0x7b06c
		if (QuestStatus(3) != 0) {
			// 0x7b07c
			if (*(int32_t *)*(int32_t *)(g23 - 0x70a8) == -1) {
				// 0x7b08c
				*(char *)(g32 + 74) = 0;
				// branch -> 0x7b094
			}
		}
		// 0x7b094
		result2 = *(char *)g36;
		v8 = result2;
		if (result2 == *(char *)(g32 + 360)) {
			// 0x7b0a4
			if (*(char *)g33 != 1) {
				// 0x7b0b0
				function_795ec(*(char *)(g35 + 128), 4);
				function_795ec(*(char *)(g35 + 160), 4);
				function_7a684(4, 0, 0);
				function_7a684(5, 0, 0);
				function_7a684(6, 0, 0);
				v9 = LoadFileInMem(*(int32_t *)(g23 - 0x5ce8), NULL);
				v2 = v9;
				SetMapMonsters(v9, 2 * *(int32_t *)g31, 2 * *(int32_t *)g30);
				result3 = MemFreeDbg(&v2);
				// branch -> 0x7b154
			} else {
				result3 = v8;
			}
			// 0x7b154
			g10 = v1;
			return result3;
		}
		result3 = v8;
	} else {
		int32_t v13 = *(int32_t *)(g23 - 0x77e0); // 0x7b134
		if (*(char *)v13 == 1) {
			// 0x7b144
			result3 = function_7a684(1, 0, 0);
			// branch -> 0x7b154
		} else {
			result3 = v13;
		}
	}
	// 0x7b154
	g10 = v1;
	return result3;
}

// Address range: 0x7b168 - 0x7b47c
int32_t function_7b168(int32_t a1, int32_t a2, uint32_t a3, int32_t a4)
{
	// 0x7b168
	g31 = *(int32_t *)(g23 - 0x7754);
	g19 = a1;
	g17 = *(int32_t *)(g23 - 0x7588);
	g27 = *(int32_t *)(g23 - 0x71ec);
	g21 = a2;
	g16 = *(int32_t *)(g23 - 0x767c);
	g20 = a3 % 2;
	g33 = *(int32_t *)(g23 - 0x762c);
	g26 = __asm_rlwinm(a3, 0, 30, 30);
	g18 = a4 % 256;
	g32 = 0;
	int32_t v1 = g10;      // 0x7b19c
	int32_t v2 = 232 * a4; // 0x7b1a0
	g28 = g31 + v2;
	int32_t v3 = 0; // 0x7b1fc1
	int32_t v4 = 0;
	// branch -> 0x7b1fc
lab_0x7b1fc:
	while (true) {
		// 0x7b1fc
		if (v3 != 0) {
			int32_t *v5 = (int32_t *)g33; // 0x7b1c0
			g32 = v3 - 1;
			*v5 = *v5 - 1;
			int32_t v6 = g31 + 232 * *(int32_t *)g33;                             // 0x7b1e0
			int32_t v7 = 2 * *(int32_t *)(v6 + 36) + 224 * *(int32_t *)(v6 + 32); // 0x7b1f4
			*(int16_t *)(v7 + *(int32_t *)g16) = (int16_t)0;
			while (g32 != 0) {
				// 0x7b1c0
				v5 = (int32_t *)g33;
				g32--;
				*v5 = *v5 - 1;
				v6 = g31 + 232 * *(int32_t *)g33;
				v7 = 2 * *(int32_t *)(v6 + 36) + 224 * *(int32_t *)(v6 + 32);
				*(int16_t *)(v7 + *(int32_t *)g16) = (int16_t)0;
				// continue -> 0x7b1c0
			}
			// 0x7b1fc
			// branch -> 0x7b204
		}
		// 0x7b204
		if (g20 == 0) {
			g37 = 80;
			int32_t v8 = random(93) + 16; // 0x7b250
			g35 = v8;
			g24 = v8;
			g37 = 80;
			int32_t v9 = random(93) + 16; // 0x7b264
			g36 = v9;
			g25 = v9;
			while (function_7a520(g35, v9) == 0) {
				// 0x7b244
				g37 = 80;
				v8 = random(93) + 16;
				g35 = v8;
				g24 = v8;
				g37 = 80;
				v9 = random(93) + 16;
				g36 = v9;
				g25 = v9;
				// continue -> 0x7b244
			}
			// 0x7b280
			// branch -> 0x7b280
		} else {
			// 0x7b20c
			g37 = 8;
			int32_t v10 = 4 * random(92);                                   // 0x7b218
			int32_t v11 = g28;                                              // 0x7b220
			int32_t v12 = *(int32_t *)(*(int32_t *)(g23 - 0x71f0) + v10);   // 0x7b22c
			int32_t v13 = *(int32_t *)(g27 + v10) + *(int32_t *)(v11 + 32); // 0x7b230
			g35 = v13;
			g24 = v13;
			int32_t v14 = v12 + *(int32_t *)(v11 + 36); // 0x7b238
			g36 = v14;
			g25 = v14;
			// branch -> 0x7b280
		}
		int32_t v15 = *(int32_t *)g33;                        // 0x7b284
		int32_t v16 = *(int32_t *)*(int32_t *)(g23 - 0x7084); // 0x7b288
		int32_t v17 = g21;                                    // 0x7b28c
		int32_t v18 = v17 + v15;                              // 0x7b28c
		if (v18 > v16) {
			int32_t v19 = v16 - v15; // 0x7b298
			g21 = v19;
			v17 = v19;
			// branch -> 0x7b29c
		}
		// 0x7b29c
		g22 = g25 + 112 * g24;
		g29 = 0;
		g30 = 0;
		int32_t v20 = v17; // 0x7b434
		int32_t v21;       // 0x7b434
		int32_t result;    // 0x7b478
		int32_t v22;       // 0x7b47820
		int32_t v23;       // 0x7b460
		if (v17 <= 0) {
			// 0x7b434
			v21 = g32;
			if (v21 < v20) {
				goto lab_0x7b43c;
			}
			v22 = v18;
		lab_0x7b454:
			// 0x7b454
			if (g26 != 0) {
				// 0x7b45c
				v23 = g31 + v2;
				*(char *)(v23 + 218) = (char)v21;
				result = v23;
				// branch -> 0x7b468
			} else {
				result = v22;
			}
			// 0x7b468
			g10 = v1;
			return result;
		}
		int32_t v24 = g36; // 0x7b2b4
		// branch -> 0x7b2b0
		while (true) {
			// 0x7b2b0
			if (function_7a520(g35, v24) != 0) {
				int32_t v25 = g35;             // 0x7b2c4
				int32_t v26 = *(int32_t *)g17; // 0x7b2c8
				if (*(char *)(g36 + 112 * v25 + v26) == *(char *)(g22 + v26)) {
					// 0x7b2e8
					int32_t v27; // 0x7b318
					if (g26 == 0) {
						v27 = v25;
					lab_0x7b310:
						// 0x7b310
						function_7a5f8(*(int32_t *)g33, g19, v27, g36);
						if (g20 != 0) {
							int32_t v28 = g31 + 232 * *(int32_t *)g33; // 0x7b338
							int32_t v29 = v28;                         // r5
							int32_t *v30 = (int32_t *)(v28 + 148);     // 0x7b33c
							*v30 = 2 * *v30;
							int32_t v31 = v29; // 0x7b348
							*(int32_t *)(v31 + 152) = *(int32_t *)(v31 + 148);
							*(char *)(v29 + 157) = *(char *)(g28 + 157);
							if (g26 != 0) {
								// 0x7b35c
								*(char *)(v29 + 216) = (char)g18;
								*(char *)(v29 + 217) = 1;
								*(char *)(v29 + 156) = *(char *)(g28 + 156);
								// branch -> 0x7b370
							}
							int32_t v32 = v29; // 0x7b370
							if (*(char *)(v32 + 156) != 12) {
								int32_t v33 = 8 * *(int32_t *)(v32 + 72) + 8 + *(int32_t *)(v32 + 224); // 0x7b390
								*(int32_t *)(v32 + 84) = *(int32_t *)v33;
								*(int32_t *)(v29 + 88) = *(int32_t *)(v33 + 4);
								g37 = *(int32_t *)(v29 + 100) - 1;
								int32_t v34 = random(88);                  // 0x7b3ac
								int32_t v35 = g31 + 232 * *(int32_t *)g33; // 0x7b3c0
								int32_t v36 = v35;                         // r4
								*(int32_t *)(v35 + 104) = v34 + 1;
								int32_t v37 = *(int32_t *)(v36 + 160); // 0x7b3c8
								*(int32_t *)(v36 + 160) = __asm_rlwinm(v37, 0, 30, 28);
								*(int32_t *)(v36 + 4) = 0;
								// branch -> 0x7b3d8
							}
						}
						int32_t *v38 = (int32_t *)g33; // 0x7b3d8
						g32++;
						g29++;
						*v38 = *v38 + 1;
						// branch -> 0x7b3f4
					} else {
						// 0x7b2f0
						g34 = v25 - g24;
						if (abs() <= 3) {
							// 0x7b300
							g34 = g36 - g25;
							if (abs() <= 3) {
								// 0x7b300
								v27 = g35;
								// branch -> 0x7b310
								goto lab_0x7b310;
							}
						}
						// 0x7b3f0
						g30++;
						// branch -> 0x7b3f4
					}
				lab_0x7b3f4:
					// 0x7b3f4
					g37 = 8;
					int32_t v39 = *(int32_t *)(g27 + 4 * random(94)); // 0x7b404
					g37 = 8;
					g35 += v39;
					int32_t v40 = random(94);                        // 0x7b414
					int32_t v41 = g36 + *(int32_t *)(g27 + 4 * v40); // 0x7b420
					g36 = v41;
					int32_t v42 = g21; // 0x7b424
					v18 = v40;
					v20 = v42;
					if (g29 < v42) {
						// 0x7b3f4
						if (g30 >= 100) {
							// break -> 0x7b434
							break;
						}
						v24 = v41;
						// continue -> 0x7b2b0
						continue;
					}
					// 0x7b434
					v21 = g32;
					v22 = v18;
					if (v21 < v20) {
					lab_0x7b43c:;
						int32_t v43 = v4 + 1; // 0x7b440
						if (v43 >= 10) {
							v22 = v43;
							// break (via goto) -> 0x7b454
							goto lab_0x7b454;
						}
						v3 = v21;
						v4 = v43;
						// continue (via goto) -> 0x7b1fc
						goto lab_0x7b1fc;
					}
					// 0x7b454
					if (g26 != 0) {
						// 0x7b45c
						v23 = g31 + v2;
						*(char *)(v23 + 218) = (char)v21;
						result = v23;
						// branch -> 0x7b468
					} else {
						result = v22;
					}
					// 0x7b468
					g10 = v1;
					return result;
				}
			}
			// 0x7b3f0
			g30++;
			// branch -> 0x7b3f4
			goto lab_0x7b3f4;
		}
		// 0x7b454
		if (g26 != 0) {
			// 0x7b45c
			v23 = g31 + v2;
			*(char *)(v23 + 218) = (char)v21;
			result = v23;
			// branch -> 0x7b468
		} else {
			result = v22;
		}
		// 0x7b468
		g10 = v1;
		return result;
	}
}

// Address range: 0x7b47c - 0x7b578
int32_t function_7b47c(void)
{
	int32_t v1 = LoadFileInMem(*(int32_t *)(g23 - 0x5cec), NULL); // 0x7b490
	int32_t v2 = v1;                                              // bp-8
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x72f0);          // 0x7b4a4
	SetMapMonsters(v1, 2 * *(int32_t *)*(int32_t *)(g23 - 0x72ec), 2 * v3);
	MemFreeDbg(&v2);
	int32_t v4 = LoadFileInMem(*(int32_t *)(g23 - 0x5cf0), NULL); // 0x7b4c8
	v2 = v4;
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x72f8); // 0x7b4dc
	SetMapMonsters(v4, 2 * *(int32_t *)*(int32_t *)(g23 - 0x72f4), 2 * v5);
	MemFreeDbg(&v2);
	int32_t v6 = LoadFileInMem(*(int32_t *)(g23 - 0x5cf4), NULL); // 0x7b500
	v2 = v6;
	int32_t v7 = *(int32_t *)*(int32_t *)(g23 - 0x7300); // 0x7b514
	SetMapMonsters(v6, 2 * *(int32_t *)*(int32_t *)(g23 - 0x72fc), 2 * v7);
	MemFreeDbg(&v2);
	int32_t v8 = LoadFileInMem(*(int32_t *)(g23 - 0x5cf8), NULL); // 0x7b538
	v2 = v8;
	int32_t v9 = *(int32_t *)*(int32_t *)(g23 - 0x7308); // 0x7b54c
	SetMapMonsters(v8, 2 * *(int32_t *)*(int32_t *)(g23 - 0x7304), 2 * v9);
	int32_t result = MemFreeDbg(&v2); // 0x7b564
	return result;
}

// Address range: 0x7b578 - 0x7b884
int32_t InitMonsters(int32_t a1)
{
	int32_t v1 = g10;                        // 0x7b57c
	int32_t v2 = *(int32_t *)(g23 - 0x77d8); // 0x7b580
	g29 = v2;
	g32 = *(int32_t *)(g23 - 0x70f4);
	g33 = *(int32_t *)(g23 - 0x7084);
	g35 = *(int32_t *)(g23 - 0x762c);
	g36 = *(int32_t *)(g23 - 0x77e4);
	int32_t v3 = v2; // 0x7b60c
	if (*(char *)v2 == 0) {
		// 0x7b5ac
		AddMonster(1, 0, 0, 0, 0);
		AddMonster(1, 0, 0, 0, 0);
		AddMonster(1, 0, 0, 0, 0);
		AddMonster(1, 0, 0, 0, 0);
		v3 = g29;
		// branch -> 0x7b60c
	}
	// 0x7b60c
	if (*(char *)v3 == 0) {
		// 0x7b618
		if (*(char *)g36 == 16) {
			// 0x7b624
			function_7b47c();
			// branch -> 0x7b628
		}
	}
	// 0x7b628
	g28 = g32;
	int32_t v4;      // r23
	int32_t v5;      // r24
	int32_t v6;      // r25
	int32_t v7;      // r26
	int32_t result5; // 0x7b6a0
	int32_t v8;      // 0x7b6c0
	int32_t v9;      // 0x7b6c4
	int32_t v10;     // 0x7b83c36
	if (*(char *)g36 == 15 | *(int32_t *)*(int32_t *)(g23 - 0x70f8) > 0) {
		while (true) {
			int32_t v11 = -2; // 0x7b66822
			// branch -> 0x7b654
			while (true) {
				int32_t v12 = g28;                   // 0x7b658
				int32_t v13 = *(int32_t *)v12 + v11; // 0x7b668
				DoVision(v13, *(int32_t *)(v12 + 4) - 2, 15, 0, 0);
				int32_t v14 = g25 + 1; // 0x7b678
				g25 = v14;
				int32_t v15 = g26;
				// branch -> 0x7b658
				while (v14 < 2) {
					// 0x7b658
					v12 = g28;
					v13 = *(int32_t *)v12 + v15;
					DoVision(v13, *(int32_t *)(v12 + 4) + v14, 15, 0, 0);
					v14 = g25 + 1;
					g25 = v14;
					v15 = g26;
					// continue -> 0x7b658
				}
				int32_t v16 = v15 + 1; // 0x7b684
				if (v16 >= 2) {
					// break -> 0x7b690
					break;
				}
				v11 = v16;
				// continue -> 0x7b654
			}
			// 0x7b690
			g28 += 16;
			if (g27 + 1 >= g31) {
				// break -> 0x7b6a0
				break;
			}
			// continue -> 0x7b650
		}
		// 0x7b6a0
		result5 = function_7ae34();
		g34 = result5;
		int32_t result4 = result5; // 0x7b88039
		if (*(char *)g29 == 0) {
			// 0x7b6b0
			function_7acfc(result5);
			v4 = 0;
			v5 = 16;
			int32_t v17 = 16; // 0x7b6c025
			// branch -> 0x7b6bc
			while (true) {
				// 0x7b6bc
				v6 = 16;
				v9 = 16;
				v8 = v17;
				// branch -> 0x7b6c0
			lab_0x7b6c0:;
				int32_t v18;
				while (true) {
					// 0x7b6c0
					g34 = v8;
					g37 = v9;
					if (function_a3ef8() == 0) {
						// 0x7b6d4
						v4++;
						// branch -> 0x7b6d8
					}
					int32_t v19 = v6 + 1; // 0x7b6d8
					v6 = v19;
					v18 = v5;
					if (v19 >= 96) {
						// break -> 0x7b6e4
						break;
					}
					v9 = v19;
					v8 = v18;
					// continue -> 0x7b6c0
				}
				int32_t v20 = v18 + 1; // 0x7b6e4
				v5 = v20;
				if (v20 >= 96) {
					// break -> 0x7b6f0
					break;
				}
				v17 = v20;
				// continue -> 0x7b6bc
			}
			int32_t v21 = ((int32_t)(-0x77777777 * (int64_t)v4 / 0x100000000) + v4) / 16; // 0x7b70c
			int32_t v22 = v21;                                                            // 0x7b728
			if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
				// 0x7b71c
				v22 = (v21 / 2 | v21 & -0x80000000) + v21;
				// branch -> 0x7b724
			}
			int32_t v23 = *(int32_t *)g35; // 0x7b724
			int32_t v24 = v22;             // 0x7b738
			if (v23 + v22 >= 191) {
				// 0x7b734
				v24 = 190 - v23;
				// branch -> 0x7b738
			}
			// 0x7b738
			*(int32_t *)g33 = v24 + v23;
			int32_t v25;                                          // bp-504
			int32_t v26 = &v25;                                   // 0x7b744
			int32_t v27 = *(int32_t *)(g23 - 0x7610);             // 0x7b748
			int32_t v28 = 0;                                      // r6
			int32_t v29 = *(int32_t *)*(int32_t *)(g23 - 0x7618); // 0x7b750
			int32_t v30 = v29;                                    // ctr
			int32_t result;                                       // 0x7b8088
			int32_t v31;                                          // 0x7b7a0
			if (v29 >= 1) {
				int32_t v32 = 0; // 0x7b774
				while (true) {
					int32_t v33 = v29; // 0x7b780
					int32_t v34 = v32; // 0x7b77c
					if (*(char *)(v27 + 1) % 2 != 0) {
						int32_t v35 = g30; // 0x7b76c
						g30 = v35 + 1;
						*(int32_t *)(v26 + 4 * v35) = v32;
						v33 = v30;
						v34 = v28;
						// branch -> 0x7b778
					}
					int32_t v36 = v34 + 1; // 0x7b77c
					v28 = v36;
					int32_t v37 = v33 - 1; // 0x7b780
					v30 = v37;
					if (v37 == 0) {
						// break -> 0x7b784
						break;
					}
					v29 = v37;
					v32 = v36;
					v27 += 520;
					// continue -> 0x7b760
				}
				// 0x7b784
				g29 = v26;
				result = *(int32_t *)g35;
				if (result >= *(int32_t *)g33) {
					// 0x7b818
					g29 = 0;
					v5 = g32;
					if (g31 > 0) {
						while (true) {
							// 0x7b828
							v7 = -2;
							v10 = -2;
							// branch -> 0x7b82c
							goto lab_0x7b82c_3;
						}
					}
					// 0x7b870
					g10 = v1;
					return result;
				}
				int32_t result2; // 0x7b808
				while (true) {
					// 0x7b78c
					g37 = g30;
					v31 = *(int32_t *)(g29 + 4 * random(95));
					if (*(char *)g36 != 1) {
					lab_0x7b7ac:
						// 0x7b7ac
						g37 = 2;
						if (random(95) != 0) {
							// 0x7b7c0
							if (*(char *)g36 == 2) {
								// 0x7b7cc
								g37 = 2;
								random(95);
								// branch -> 0x7b7f8
							} else {
								// 0x7b7e0
								g37 = 3;
								random(95);
								// branch -> 0x7b7f8
							}
						lab_0x7b7f8:
							// 0x7b7f8
							function_7b168(v31, 0, 0, 0);
							result2 = *(int32_t *)g35;
							if (result2 >= *(int32_t *)g33) {
								// break -> 0x7b818
								break;
							}
							// continue -> 0x7b78c
							continue;
						}
					}
				lab_0x7b7f4:
					// 0x7b7f4
					// branch -> 0x7b7f8
					goto lab_0x7b7f8;
				}
				// 0x7b818
				g29 = 0;
				v5 = g32;
				if (g31 <= 0) {
					// 0x7b870
					g10 = v1;
					return result2;
				}
				int32_t result3; // 0x7b844
				while (true) {
					// 0x7b828
					v7 = -2;
					v10 = -2;
					// branch -> 0x7b82c
				lab_0x7b82c_3:
					while (true) {
						int32_t v38 = v5;                    // 0x7b830
						int32_t v39 = *(int32_t *)v38 + v10; // 0x7b83c
						result3 = function_ca430(v39, *(int32_t *)(v38 + 4) - 2, 15);
						int32_t v40 = -1; // 0x7b848
						int32_t v41 = v7;
						// branch -> 0x7b830
						while (v40 < 2) {
							// 0x7b830
							v38 = v5;
							v39 = *(int32_t *)v38 + v41;
							result3 = function_ca430(v39, *(int32_t *)(v38 + 4) + v40, 15);
							v40++;
							v41 = v7;
							// continue -> 0x7b830
						}
						int32_t v42 = v41 + 1; // 0x7b854
						v7 = v42;
						if (v42 >= 2) {
							// break -> 0x7b860
							break;
						}
						v10 = v42;
						// continue -> 0x7b82c
					}
					// 0x7b860
					v5 += 16;
					int32_t v43 = g29 + 1; // 0x7b864
					g29 = v43;
					if (v43 >= g31) {
						// break -> 0x7b870
						break;
					}
					// continue -> 0x7b828
				}
				// 0x7b870
				g10 = v1;
				return result3;
			}
			// 0x7b784
			g29 = v26;
			result = *(int32_t *)g35;
			if (result < *(int32_t *)g33) {
				while (true) {
					// 0x7b78c
					g37 = g30;
					v31 = *(int32_t *)(g29 + 4 * random(95));
					if (*(char *)g36 == 1) {
						goto lab_0x7b7f4;
					}
					goto lab_0x7b7ac;
				}
			} else {
				result4 = result;
			}
		}
		// 0x7b818
		g29 = 0;
		v5 = g32;
		if (g31 > 0) {
			while (true) {
				// 0x7b828
				v7 = -2;
				v10 = -2;
				// branch -> 0x7b82c
				goto lab_0x7b82c_3;
			}
		}
		// 0x7b870
		g10 = v1;
		return result4;
	}
	// 0x7b6a0
	result5 = function_7ae34();
	g34 = result5;
	if (*(char *)g29 == 0) {
		// 0x7b6b0
		function_7acfc(result5);
		v4 = 0;
		v5 = 16;
		// branch -> 0x7b6bc
		while (true) {
			// 0x7b6bc
			v6 = 16;
			v9 = 16;
			v8 = 16;
			// branch -> 0x7b6c0
			goto lab_0x7b6c0;
		}
	}
	// 0x7b818
	g29 = 0;
	v5 = g32;
	if (g31 > 0) {
		while (true) {
			// 0x7b828
			v7 = -2;
			v10 = -2;
			// branch -> 0x7b82c
			goto lab_0x7b82c_3;
		}
	}
	// 0x7b870
	g10 = v1;
	return result5;
}

// Address range: 0x7b884 - 0x7ba88
int32_t SetMapMonsters(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x7b884
	g34 = a1;
	int32_t v1 = g10; // 0x7b888
	g32 = *(int32_t *)(g23 - 0x70ac);
	g25 = g34;
	g28 = *(int32_t *)(g23 - 0x708c);
	g33 = *(int32_t *)(g23 - 0x762c);
	g26 = a2;
	g27 = a3;
	g29 = function_c9948();
	function_795ec(109, 2);
	AddMonster(1, 0, 0, 0, 0);
	AddMonster(1, 0, 0, 0, 0);
	AddMonster(1, 0, 0, 0, 0);
	AddMonster(1, 0, 0, 0, 0);
	if (*(char *)*(int32_t *)(g23 - 0x77d8) != 0) {
		// 0x7b930
		if (*(char *)*(int32_t *)(g23 - 0x77e0) == 5) {
			// 0x7b940
			function_795ec(*(char *)(g28 + 128), 4);
			function_795ec(*(char *)(g28 + 160), 4);
			function_795ec(*(char *)(g28 + 192), 4);
			function_7a684(4, 0, 0);
			function_7a684(5, 0, 0);
			function_7a684(6, 0, 0);
			// branch -> 0x7b9a0
		}
	}
	int32_t v2 = g29;                                        // 0x7b9a0
	int32_t v3 = 2 * v2;                                     // 0x7b9a4
	unsigned char v4 = *(char *)(v3 | 1);                    // 0x7b9a4
	int16_t v5 = 256 * (int16_t)v4 | (int16_t) * (char *)v3; // 0x7b9a4
	int32_t v6 = v5;                                         // 0x7b9b0
	int32_t v7 = (int32_t)v5 + v2 + 2;                       // 0x7b9b4
	unsigned char v8 = *(char *)(v7 + 1);                    // 0x7b9b4
	int16_t v9 = 256 * (int16_t)v8 | (int16_t) * (char *)v7; // 0x7b9b4
	g35 = __asm_rlwinm(v6, 1, 16, 30);
	int32_t v10 = __asm_rlwinm((int32_t)v9, 1, 16, 30); // 0x7b9d8
	g36 = v10;
	int32_t v11 = g35;                                                       // 0x7b9dc
	int32_t v12 = 2 * (v6 % 0x10000) * (int32_t)v9 + v2 + 4 + 2 * v10 * v11; // 0x7b9e4
	g29 = v12;
	g30 = 0;
	int32_t result; // 0x7ba70
	if (v10 <= 0) {
		// 0x7ba6c
		result = function_c9acc(g25);
		g10 = v1;
		return result;
	}
	int32_t v13 = 0; // 0x7b9f0
	while (true) {
		// 0x7b9f0
		g28 = v13 + 16 + g27;
		g31 = 0;
		int32_t v14 = v10; // 0x7ba64
		int32_t v15 = v13; // 0x7ba60
		int32_t v16 = v12; // 0x7ba0414
		int32_t v17 = v11; // 0x7ba58211
		if (v11 > 0) {
			int32_t v18 = v11; // 0x7ba5819
			int32_t v19 = 0;   // 0x7ba5417
			int32_t v20 = v12; // 0x7ba10
			int32_t v21;       // 0x7ba50
			int32_t v22;       // 0x7ba58
			while (true) {
				uint16_t v23 = *(int16_t *)v20; // 0x7ba04
				v22 = v18;
				int32_t v24 = v19; // 0x7ba54
				int32_t v25 = v20; // 0x7ba50
				if (v23 != 0) {
					int32_t v26 = (int32_t)v23 + v20;                                             // 0x7ba10
					unsigned char v27 = *(char *)v26;                                             // 0x7ba10
					unsigned char v28 = *(char *)(v26 + 1);                                       // 0x7ba10
					char v29 = *(char *)((int32_t)(256 * (int16_t)v28 | (int16_t)v27) - 1 + g32); // 0x7ba20
					int32_t v30 = function_795ec(v29, 2);                                         // 0x7ba28
					int32_t *v31 = (int32_t *)g33;                                                // 0x7ba2c
					int32_t v32 = *v31;                                                           // 0x7ba2c
					*v31 = v32 + 1;
					function_7a5f8(v32, v30, g31 + 16 + g26, g28);
					v22 = g35;
					v24 = g31;
					v25 = g29;
					// branch -> 0x7ba50
				}
				// 0x7ba50
				v21 = v25 + 2;
				g29 = v21;
				int32_t v33 = v24 + 1; // 0x7ba54
				g31 = v33;
				if (v33 >= v22) {
					// break -> 0x7ba58
					break;
				}
				v18 = v22;
				v19 = v33;
				v20 = v21;
				// continue -> 0x7ba04
			}
			// 0x7ba58
			v14 = g36;
			v15 = g30;
			v16 = v21;
			v17 = v22;
			// branch -> 0x7ba60
		}
		int32_t v34 = v15 + 1; // 0x7ba60
		g30 = v34;
		if (v34 >= v14) {
			// break -> 0x7ba6c
			break;
		}
		v10 = v14;
		v12 = v16;
		v11 = v17;
		v13 = v34;
		// continue -> 0x7b9f0
	}
	// 0x7ba6c
	result = function_c9acc(g25);
	g10 = v1;
	return result;
}

// Address range: 0x7ba88 - 0x7bac4
int32_t function_7ba88(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x762c); // 0x7ba88
	int32_t v2 = *(int32_t *)(g23 - 0x7628); // 0x7ba90
	int32_t *v3 = (int32_t *)v1;             // 0x7ba94
	int32_t v4 = v2 + 4 * a1;                // r6
	int32_t v5 = *v3 - 1;                    // 0x7ba9c
	*v3 = v5;
	int32_t result = *(int32_t *)v4; // 0x7bab0
	*(int32_t *)(v2 + 4 * *(int32_t *)v1) = result;
	*(int32_t *)v4 = *(int32_t *)(v2 + 4 * v5);
	return result;
}

// Address range: 0x7bac4 - 0x7bb5c
int32_t AddMonster(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g36;                                    // 0x7bac4
	int32_t v2 = g10;                                    // 0x7bac8
	int32_t *v3 = (int32_t *)*(int32_t *)(g23 - 0x762c); // 0x7bae0
	int32_t v4 = *v3;                                    // 0x7bae0
	if (v4 > 199) {
		// 0x7bb48
		g36 = v1;
		g10 = v2;
		return -1;
	}
	// 0x7baec
	*v3 = v4 + 1;
	int32_t v5 = *(int32_t *)(*(int32_t *)(g23 - 0x7628) + 4 * v4); // 0x7bb00
	if (a5 != 0) {
		int32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x767c); // 0x7bb14
		*(int16_t *)(2 * a2 + 224 * a1 + v6) = (int16_t)(v5 + 1);
		// branch -> 0x7bb24
	}
	// 0x7bb24
	function_7a014(v5, a3, a4, a1, a2);
	int32_t result = g36;
	// branch -> 0x7bb48
	// 0x7bb48
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0x7bb5c - 0x7bbb4
int32_t function_7bb5c(int32_t a1, int32_t a2)
{
	int32_t v1 = 8 * g38 + a2;                          // 0x7bb64
	int32_t v2 = *(int32_t *)(g23 - 0x7754) + 232 * a1; // 0x7bb74
	*(int32_t *)(v2 + 84) = *(int32_t *)(v1 + 4);
	int32_t result = 1; // r3
	*(int32_t *)(v2 + 88) = *(int32_t *)(v1 + 8);
	*(int32_t *)(v2 + 100) = *(int32_t *)(a2 + 68);
	*(int32_t *)(v2 + 104) = result;
	*(int32_t *)(v2 + 96) = 0;
	*(int32_t *)(v2 + 92) = *(int32_t *)(a2 + 72);
	*(int32_t *)(v2 + 72) = g38;
	*(int32_t *)(v2 + 160) = __asm_rlwinm(*(int32_t *)(v2 + 160), 0, 31, 28);
	return result;
}

// Address range: 0x7bbb4 - 0x7bbf4
int32_t function_7bbb4(int32_t a1)
{
	char v1 = *(char *)(*(int32_t *)(g23 - 0x7754) + 232 * a1 + 156); // 0x7bbc0
	if (v1 == 3 || v1 == 7 || v1 == 14 || v1 == 29) {
		// 0x7bbe4
		return 1;
	}
	// 0x7bbec
	return 0;
}

// Address range: 0x7bbf4 - 0x7bc44
int32_t function_7bbf4(int32_t a1)
{
	unsigned char v1 = *(char *)(*(int32_t *)(g23 - 0x7754) + 232 * a1 + 156); // 0x7bc00
	int32_t v2 = v1;                                                           // 0x7bc00
	if (v1 == 28 || v1 == 18 || ((v2 + 234) % 256 || 1) == 1) {
		// 0x7bc34
		return 1;
	}
	// 0x7bc24
	if ((v2 + 227) % 256 > 2) {
		// 0x7bc3c
		return 0;
	}
	// 0x7bc34
	return 1;
}

// Address range: 0x7bc44 - 0x7bfc0
int32_t function_7bc44(int32_t result)
{
	int32_t v1 = g10;    // 0x7bc48
	int32_t v2 = result; // 0x7bc4c
	g30 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0x7bc50
	g28 = v3;
	g27 = *(int32_t *)(g23 - 0x7588);
	g22 = *(int32_t *)(g23 - 0x77f0);
	g36 = -1;
	g29 = *(int32_t *)(g23 - 0x762c);
	g35 = -1;
	g21 = *(int32_t *)(g23 - 0x77e4);
	g33 = 0;
	int32_t v4 = v3 + 232 * v2; // 0x7bc7c
	g26 = v4;
	int32_t v5;  // 0x7bf7c
	int32_t v6;  // 0x7bfa0
	int32_t v7;  // 0x7bdd0
	int32_t *v8; // 0x7bfa0
	int32_t v9;  // 0x7bdc4
	if (__asm_rlwinm_(*(int32_t *)(v4 + 160), 0, 26, 26) != 0) {
		// 0x7bdc4
		v9 = *(int32_t *)(g23 - 0x7628);
		g20 = v9;
		g24 = 0;
		if (*(int32_t *)g29 > 0) {
			while (true) {
				// 0x7bdd0
				v7 = *(int32_t *)v9;
				g22 = v7;
				if (v7 == g30) {
					goto lab_0x7bf68_9;
				}
				goto lab_0x7bde0;
			}
		}
		// 0x7bf7c
		v5 = g36;
		v6 = g26;
		if (v5 == -1) {
			// 0x7bfa0
			v8 = (int32_t *)(v6 + 160);
			*v8 = *v8 | 1024;
			// branch -> 0x7bfac
		} else {
			// 0x7bf84
			*(int32_t *)(v6 + 76) = v5;
			*(char *)(g26 + 80) = (char)g32;
			*(char *)(g26 + 81) = (char)g31;
			*(int32_t *)(g26 + 160) = __asm_rlwinm(*(int32_t *)(g26 + 160), 0, 22, 20);
			// branch -> 0x7bfac
		}
		// 0x7bfac
		g10 = v1;
		return result;
	}
	// 0x7bc8c
	g17 = 0;
	int32_t v10 = *(int32_t *)(g23 - 0x77a8); // 0x7bc90
	// branch -> 0x7bc94
	while (true) {
		// 0x7bc94
		int32_t v11; // 0x7bdb4
		if (*(char *)(v10 + 29) != 0) {
			int32_t v12 = (int32_t) * (char *)g21; // 0x7bca0
			result = v12;
			if (v12 == *(int32_t *)(v10 + 52)) {
				// 0x7bcb0
				if (*(char *)(v10 + 315) == 0) {
					// 0x7bcbc
					int32_t v13; // 0x7bdb8
					if (*(int32_t *)(v10 + 404) == 0) {
						// 0x7bcc8
						if (*(char *)g22 != 1) {
							v13 = v10;
						lab_0x7bdb4_4:
							// 0x7bdb4
							v11 = g17 + 1;
							g17 = v11;
							if (v11 >= 4) {
								// break -> 0x7bdc4
								break;
							}
							v10 = v13 + 0x55ec;
							// continue -> 0x7bc94
							continue;
						}
					}
					int32_t v14 = g26;                                                       // 0x7bcd4
					int32_t v15 = *(int32_t *)(v14 + 36);                                    // 0x7bce0
					int32_t v16 = *(int32_t *)(v10 + 60);                                    // 0x7bce4
					int32_t v17 = *(int32_t *)g27;                                           // 0x7bce8
					unsigned char v18 = *(char *)(v17 + v15 + 112 * *(int32_t *)(v14 + 32)); // 0x7bcf4
					char v19 = *(char *)(v17 + v16 + 112 * *(int32_t *)(v10 + 56));          // 0x7bcfc
					g34 = v15 - v16;
					g18 = __asm_rlwinm(llvm_ctlz_i32((int32_t)v19 - (int32_t)v18, true), 27, 24, 31);
					g19 = abs();
					g34 = *(int32_t *)(g26 + 32) - *(int32_t *)(v10 + 56);
					int32_t v20 = v10; // 0x7bd38
					int32_t v21;       // 0x7bd94
					if (abs() > g19) {
						// 0x7bd38
						g34 = *(int32_t *)(g26 + 32) - *(int32_t *)(v20 + 56);
						v21 = abs();
						// branch -> 0x7bd5c
					} else {
						// 0x7bd4c
						g34 = *(int32_t *)(g26 + 36) - *(int32_t *)(v20 + 60);
						v21 = abs();
						// branch -> 0x7bd5c
					}
					// 0x7bd5c
					result = v21;
					int32_t v22 = g33; // 0x7bd74
					if (g18 == 0) {
						// 0x7bd74
						int32_t v23;  // 0x7bda4
						uint32_t v24; // 0x7bda4
						if (v22 == 0) {
						lab_0x7bd7c:
							// 0x7bd7c
							if (v21 >= g35) {
								// 0x7bd84
								if (g36 != -1) {
								lab_0x7bd84:
									// 0x7bd84
									v13 = v10;
									// branch -> 0x7bdb4
									goto lab_0x7bdb4_4;
								}
							}
						} else {
							// 0x7bd84
							if (g36 != -1) {
								goto lab_0x7bd84;
							}
							// 0x7bd8c
							g36 = g17;
							g35 = v21;
							*(int32_t *)(g26 + 160) = __asm_rlwinm(*(int32_t *)(g26 + 160), 0, 28, 26);
							g33 = g18;
							v23 = v10;
							v24 = *(int32_t *)(v23 + 64);
							result = v24;
							g32 = v24 % 256;
							g31 = *(int32_t *)(v23 + 68) % 256;
							v13 = v23;
							// branch -> 0x7bdb4
							goto lab_0x7bdb4_4;
						}
					lab_0x7bd8c:
						// 0x7bd8c
						g36 = g17;
						g35 = v21;
						*(int32_t *)(g26 + 160) = __asm_rlwinm(*(int32_t *)(g26 + 160), 0, 28, 26);
						g33 = g18;
						v23 = v10;
						v24 = *(int32_t *)(v23 + 64);
						result = v24;
						g32 = v24 % 256;
						g31 = *(int32_t *)(v23 + 68) % 256;
						v13 = v23;
						// branch -> 0x7bdb4
						goto lab_0x7bdb4_4;
					} else {
						// 0x7bd64
						if (v22 == 0) {
							goto lab_0x7bd8c;
						}
						// 0x7bd6c
						// branch -> 0x7bd7c
						goto lab_0x7bd7c;
					}
				}
			}
		}
		// 0x7bdb4
		v11 = g17 + 1;
		g17 = v11;
		if (v11 >= 4) {
			// break -> 0x7bdc4
			break;
		}
		v10 += 0x55ec;
		// continue -> 0x7bc94
	}
	// 0x7bdc4
	v9 = *(int32_t *)(g23 - 0x7628);
	g20 = v9;
	g24 = 0;
	if (*(int32_t *)g29 <= 0) {
		// 0x7bf7c
		v5 = g36;
		v6 = g26;
		if (v5 == -1) {
			// 0x7bfa0
			v8 = (int32_t *)(v6 + 160);
			*v8 = *v8 | 1024;
			// branch -> 0x7bfac
		} else {
			// 0x7bf84
			*(int32_t *)(v6 + 76) = v5;
			*(char *)(g26 + 80) = (char)g32;
			*(char *)(g26 + 81) = (char)g31;
			*(int32_t *)(g26 + 160) = __asm_rlwinm(*(int32_t *)(g26 + 160), 0, 22, 20);
			// branch -> 0x7bfac
		}
		// 0x7bfac
		g10 = v1;
		return result;
	}
	int32_t v25 = v9; // 0x7bdd0
	while (true) {
		// 0x7bdd0
		v7 = *(int32_t *)v25;
		g22 = v7;
		int32_t v26; // 0x7bf68
		int32_t v27; // 0x7bf6c
		if (v7 != g30) {
		lab_0x7bde0:;
			int32_t v28 = g28 + 232 * v7; // 0x7bde4
			g19 = v28;
			int32_t v29 = v28 + 32; // 0x7bde8
			g18 = v29;
			if (*(int32_t *)v29 == 1) {
				// 0x7bdf8
				if (*(int32_t *)(v28 + 36) == 0) {
				lab_0x7bf68_8:
					// 0x7bf68
					v26 = g20 + 4;
					g20 = v26;
					v27 = g24 + 1;
					g24 = v27;
					if (v27 >= *(int32_t *)g29) {
						// break -> 0x7bf7c
						break;
					}
					v25 = v26;
					// continue -> 0x7bdd0
					continue;
				}
			}
			int32_t v30 = function_7bbf4(v7); // 0x7be08
			result = v30;
			if (v30 != 0) {
				// 0x7be14
				if (*(int32_t *)(g19 + 212) != 0) {
					goto lab_0x7bf68_8;
				}
				// 0x7be20
				if (__asm_rlwinm_(*(int32_t *)(g26 + 160), 0, 26, 26) == 0) {
				lab_0x7be2c:
					// 0x7be2c
					g34 = *(int32_t *)g18 - *(int32_t *)(g26 + 32);
					if (abs() > 1) {
					lab_0x7be5c:;
						int32_t v31 = function_7bbb4(g30); // 0x7be60
						result = v31;
						if (v31 == 0) {
							goto lab_0x7bf68_8;
						}
					lab_0x7be6c:;
						// 0x7be6c
						int32_t v32;       // 0x7be84
						int32_t v33;       // 0x7be88
						int32_t v34;       // 0x7bec4
						int32_t v35;       // 0x7be9c
						int32_t v36;       // 0x7be94
						int32_t v37;       // 0x7be98
						unsigned char v38; // 0x7bea8
						char v39;          // 0x7beb0
						if (__asm_rlwinm_(*(int32_t *)(g26 + 160), 0, 26, 26) == 0) {
						lab_0x7be78_2:
							// 0x7be78
							if (__asm_rlwinm_(*(int32_t *)(g19 + 160), 0, 26, 26) == 0) {
								goto lab_0x7bf68_8;
							}
							// 0x7be84
							v32 = g26;
							v33 = g19 + 36;
							g17 = v33;
							v36 = *(int32_t *)(v32 + 36);
							v37 = *(int32_t *)v33;
							v35 = *(int32_t *)g27;
							v38 = *(char *)(v35 + v36 + 112 * *(int32_t *)(v32 + 32));
							v39 = *(char *)(v35 + v37 + 112 * *(int32_t *)g18);
							g34 = v36 - v37;
							v34 = llvm_ctlz_i32((int32_t)v39 - (int32_t)v38, true);
							g25 = __asm_rlwinm(v34, 27, 24, 31);
							g21 = abs();
							g34 = *(int32_t *)(g26 + 32) - *(int32_t *)g18;
							int32_t v40; // 0x7bf48
							if (abs() > g21) {
							lab_0x7beec:
								// 0x7beec
								g34 = *(int32_t *)(g26 + 32) - *(int32_t *)g18;
								v40 = abs();
								// branch -> 0x7bf10
							} else {
							lab_0x7bf00:
								// 0x7bf00
								g34 = *(int32_t *)(g26 + 36) - *(int32_t *)g17;
								v40 = abs();
								// branch -> 0x7bf10
							}
							// 0x7bf10
							result = v40;
							int32_t v41 = g33; // 0x7bf28
							int32_t v42;       // 0x7bf58
							int32_t *v43;      // 0x7bf40
							uint32_t v44;      // 0x7bf58
							if (g25 == 0) {
								// 0x7bf28
								if (v41 == 0) {
								lab_0x7bf30:
									// 0x7bf30
									if (v40 >= g35) {
										// 0x7bf38
										if (g36 != -1) {
											goto lab_0x7bf68_8;
										}
									lab_0x7bf40:
										// 0x7bf40
										v43 = (int32_t *)(g26 + 160);
										g36 = g22;
										g35 = v40;
										*v43 = *v43 | 16;
										g33 = g25;
										v42 = g19;
										v44 = *(int32_t *)(v42 + 40);
										result = v44;
										g32 = v44 % 256;
										g31 = *(int32_t *)(v42 + 44) % 256;
										// branch -> 0x7bf68
										goto lab_0x7bf68_8;
									}
								} else {
									// 0x7bf38
									if (g36 == -1) {
										goto lab_0x7bf40;
									}
									goto lab_0x7bf68_8;
								}
							lab_0x7bf40_2:
								// 0x7bf40
								v43 = (int32_t *)(g26 + 160);
								g36 = g22;
								g35 = v40;
								*v43 = *v43 | 16;
								g33 = g25;
								v42 = g19;
								v44 = *(int32_t *)(v42 + 40);
								result = v44;
								g32 = v44 % 256;
								g31 = *(int32_t *)(v42 + 44) % 256;
								// branch -> 0x7bf68
								goto lab_0x7bf68_8;
							} else {
								// 0x7bf18
								if (v41 == 0) {
									goto lab_0x7bf40_2;
								}
								// 0x7bf20
								// branch -> 0x7bf30
								goto lab_0x7bf30;
							}
							int32_t v45 = g26; // 0x7bf40
							v43 = (int32_t *)(v45 + 160);
							int32_t v46 = *v43; // 0x7bf40
							int32_t v47 = g22;  // 0x7bf44
							g36 = v47;
							g35 = v40;
							*v43 = v46 | 16;
							int32_t v48 = g25; // 0x7bf54
							g33 = v48;
							v42 = g19;
							v44 = *(int32_t *)(v42 + 40);
							result = v44;
							uint32_t v49 = *(int32_t *)(v42 + 44); // 0x7bf5c
							g32 = v44 % 256;
							g31 = v49 % 256;
							// branch -> 0x7bf68
							goto lab_0x7bf68_8;
						}
					lab_0x7be84_2:
						// 0x7be84
						v32 = g26;
						v33 = g19 + 36;
						g17 = v33;
						v36 = *(int32_t *)(v32 + 36);
						v37 = *(int32_t *)v33;
						v35 = *(int32_t *)g27;
						v38 = *(char *)(v35 + v36 + 112 * *(int32_t *)(v32 + 32));
						v39 = *(char *)(v35 + v37 + 112 * *(int32_t *)g18);
						g34 = v36 - v37;
						v34 = llvm_ctlz_i32((int32_t)v39 - (int32_t)v38, true);
						g25 = __asm_rlwinm(v34, 27, 24, 31);
						g21 = abs();
						g34 = *(int32_t *)(g26 + 32) - *(int32_t *)g18;
						if (abs() > g21) {
							goto lab_0x7beec;
						}
						goto lab_0x7bf00;
					} else {
						// 0x7be44
						g34 = *(int32_t *)(g19 + 36) - *(int32_t *)(g26 + 36);
						int32_t v50 = abs(); // 0x7be50
						result = v50;
						if (v50 < 2) {
							goto lab_0x7be6c;
						}
						goto lab_0x7be5c;
					}
					int32_t v51 = g26;                     // 0x7be6c
					int32_t v52 = *(int32_t *)(v51 + 160); // 0x7be6c
					if (__asm_rlwinm_(v52, 0, 26, 26) == 0) {
						goto lab_0x7be78_2;
					}
					goto lab_0x7be84_2;
				} else {
				lab_0x7be6c_2:
					// 0x7be6c
					if (__asm_rlwinm_(*(int32_t *)(g26 + 160), 0, 26, 26) == 0) {
						goto lab_0x7be78_2;
					}
					goto lab_0x7be84_2;
				}
				int32_t v53 = g20; // 0x7bf68
				v26 = v53 + 4;
				g20 = v26;
				int32_t v54 = g24; // 0x7bf6c
				v27 = v54 + 1;
				g24 = v27;
				int32_t v55 = g29;              // 0x7bf70
				uint32_t v56 = *(int32_t *)v55; // 0x7bf70
				if (v27 >= v56) {
					// break -> 0x7bf7c
					break;
				}
				v25 = v26;
				// continue -> 0x7bdd0
				continue;
			}
			// 0x7be20
			if (__asm_rlwinm_(*(int32_t *)(g26 + 160), 0, 26, 26) == 0) {
				goto lab_0x7be2c;
			}
			goto lab_0x7be6c_2;
		}
	lab_0x7bf68_9:
		// 0x7bf68
		v26 = g20 + 4;
		g20 = v26;
		v27 = g24 + 1;
		g24 = v27;
		if (v27 >= *(int32_t *)g29) {
			// break -> 0x7bf7c
			break;
		}
		v25 = v26;
		// continue -> 0x7bdd0
	}
	// 0x7bf7c
	v5 = g36;
	v6 = g26;
	if (v5 == -1) {
		// 0x7bfa0
		v8 = (int32_t *)(v6 + 160);
		*v8 = *v8 | 1024;
		// branch -> 0x7bfac
	} else {
		// 0x7bf84
		*(int32_t *)(v6 + 76) = v5;
		*(char *)(g26 + 80) = (char)g32;
		*(char *)(g26 + 81) = (char)g31;
		*(int32_t *)(g26 + 160) = __asm_rlwinm(*(int32_t *)(g26 + 160), 0, 22, 20);
		// branch -> 0x7bfac
	}
	// 0x7bfac
	g10 = v1;
	return result;
}

// Address range: 0x7bfc0 - 0x7bffc
int32_t function_7bfc0(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754) + 232 * g34; // 0x7bfd4
	int32_t v2 = *(int32_t *)(v1 + 32);                  // 0x7bfd8
	int32_t v3 = *(int32_t *)(v1 + 36);                  // 0x7bfdc
	unsigned char v4 = *(char *)(v1 + 80);               // 0x7bfe0
	unsigned char v5 = *(char *)(v1 + 81);               // 0x7bfe4
	return GetDirection(v2, v3, (int32_t)v4, (int32_t)v5);
}

// Address range: 0x7bffc - 0x7c124
int32_t function_7bffc(int32_t a1)
{
	int32_t v1 = g10;      // 0x7c000
	int32_t v2 = 232 * a1; // 0x7c008
	g35 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0x7c00c
	g36 = v3;
	int32_t v4 = v3 + v2; // 0x7c010
	g32 = v4;
	int32_t v5 = *(int32_t *)(v4 + 32) - 1; // 0x7c02c
	g31 = v5;
	int32_t v6 = *(int32_t *)(v4 + 36) + 1; // 0x7c030
	g33 = v6;
	int32_t v7;      // 0x7c07c
	int32_t v8;      // 0x7c0bc
	int32_t result2; // 0x7c104
	int16_t v9;      // 0x7c098
	int16_t v10;     // 0x7c0a0
	int16_t v11;     // 0x7c0a8
	int16_t v12;     // 0x7c0b0
	int16_t v13;     // 0x7c0c4
	uint16_t v14;    // 0x7c0cc
	int16_t v15;     // 0x7c0d4
	int16_t v16;     // 0x7c0e0
	char v17;        // 0x7c0c8
	if (*(int32_t *)(g23 + 0x2854) == 0) {
		int32_t result = 3584 * v5;                            // 0x7c06c
		uint32_t v18 = *(int32_t *)*(int32_t *)(g23 - 0x7580); // 0x7c070
		int32_t v19 = 32 * v6 + result;                        // 0x7c078
		v7 = v18 + v19;
		if (v19 != 0 && v7 <= v18) {
			// 0x7c08c
			*(int32_t *)(v4 + 108) = 0;
			// branch -> 0x7c110
			// 0x7c110
			g10 = v1;
			return result;
		}
		// 0x7c098
		v9 = *(int16_t *)(v7 + 4);
		v10 = *(int16_t *)(v7 + 6);
		v11 = *(int16_t *)(v7 + 8);
		v12 = *(int16_t *)(v7 + 10);
		v8 = *(int32_t *)*(int32_t *)(g23 - 0x7598);
		v13 = *(int16_t *)(v7 + 12);
		v17 = *(char *)(v8 + 112 * v5 + v6);
		v14 = *(int16_t *)(v7 + 14);
		v15 = *(int16_t *)(v7 + 16);
		v16 = *(int16_t *)(v7 + 18);
		result2 = v3 + v2;
		if (((int32_t)(v15 | v14 | v13 | v12 | v11 | v10 | v9 || v16) || (int32_t)v17) == 0) {
			// 0x7c104
			*(int32_t *)(result2 + 108) = 0;
			// branch -> 0x7c110
		} else {
			// 0x7c0f4
			*(int32_t *)(result2 + 108) = 1;
			// branch -> 0x7c110
		}
		// 0x7c110
		g10 = v1;
		return result2;
	}
	// 0x7c038
	g34 = v5;
	g37 = v6;
	int32_t v20 = 32 * function_52378();                       // 0x7c048
	uint32_t result3 = *(int32_t *)*(int32_t *)(g23 - 0x7584); // 0x7c04c
	int32_t v21 = result3 + v20;                               // 0x7c050
	if (v20 == 0 || v21 > result3) {
		// 0x7c038
		v7 = v21;
		// branch -> 0x7c098
		// 0x7c098
		v9 = *(int16_t *)(v7 + 4);
		v10 = *(int16_t *)(v7 + 6);
		v11 = *(int16_t *)(v7 + 8);
		v12 = *(int16_t *)(v7 + 10);
		v8 = *(int32_t *)*(int32_t *)(g23 - 0x7598);
		v13 = *(int16_t *)(v7 + 12);
		v17 = *(char *)(v8 + 112 * g31 + g33);
		v14 = *(int16_t *)(v7 + 14);
		v15 = *(int16_t *)(v7 + 16);
		v16 = *(int16_t *)(v7 + 18);
		result2 = g36 + g35;
		if (((int32_t)(v15 | v14 | v13 | v12 | v11 | v10 | v9 || v16) || (int32_t)v17) == 0) {
			// 0x7c104
			*(int32_t *)(result2 + 108) = 0;
			// branch -> 0x7c110
		} else {
			// 0x7c0f4
			*(int32_t *)(result2 + 108) = 1;
			// branch -> 0x7c110
		}
		// 0x7c110
		g10 = v1;
		return result2;
	}
	// 0x7c05c
	*(int32_t *)(g32 + 108) = 0;
	// branch -> 0x7c110
	// 0x7c110
	g10 = v1;
	return result3;
}

// Address range: 0x7c124 - 0x7c204
int32_t function_7c124(int32_t a1, int32_t a2)
{
	// 0x7c124
	g34 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // r31
	int32_t v2 = g34;                        // 0x7c140
	function_79fe0();
	int32_t v3 = 232 * v2;                    // 0x7c150
	int32_t v4 = *(int32_t *)(v1 + v3 + 224); // 0x7c158
	if (*(char *)v4 == 109) {
		// 0x7c168
		g38 = a2;
		function_7bb5c(v2, v4 + 80);
		// branch -> 0x7c18c
	} else {
		// 0x7c17c
		g38 = a2;
		function_7bb5c(v2, v4 + 4);
		// branch -> 0x7c18c
	}
	int32_t v5 = v3 + v1; // 0x7c18c
	int32_t v6 = 0;       // r0
	*(int32_t *)(v5 + 116) = *(int32_t *)(v5 + 4);
	*(int32_t *)(v5 + 120) = v6;
	*(int32_t *)(v5 + 4) = v6;
	*(int32_t *)(v5 + 56) = v6;
	*(int32_t *)(v5 + 60) = v6;
	*(int32_t *)(v5 + 40) = *(int32_t *)(v5 + 32);
	*(int32_t *)(v5 + 44) = *(int32_t *)(v5 + 36);
	*(int32_t *)(v5 + 48) = *(int32_t *)(v5 + 32);
	*(int32_t *)(v5 + 52) = *(int32_t *)(v5 + 36);
	*(int32_t *)(v5 + 72) = a2;
	function_7bffc(v2);
	int32_t result = function_7bc44(g32); // 0x7c1e0
	return result;
}

// Address range: 0x7c204 - 0x7c234
int32_t function_7c204(int32_t result, int32_t a2)
{
	// 0x7c204
	if (a2 < 1) {
		// bb
		return result;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x7754) + 232 * result; // 0x7c214
	if (*(char *)(result2 + 156) == 28) {
		// bb
		return result2;
	}
	// 0x7c224
	*(int32_t *)(result2 + 120) = a2;
	*(int32_t *)(result2 + 4) = 13;
	return result2;
}

// Address range: 0x7c234 - 0x7c2d0
int32_t function_7c234(int32_t a1, int32_t a2)
{
	g38 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x7754) + 232 * a1; // 0x7c260
	function_7bb5c(a1, *(int32_t *)(v1 + 224) + 384);
	*(int32_t *)(v1 + 4) = 11;
	*(int32_t *)(v1 + 56) = 0;
	*(int32_t *)(v1 + 60) = 0;
	*(int32_t *)(v1 + 40) = *(int32_t *)(v1 + 32);
	*(int32_t *)(v1 + 44) = *(int32_t *)(v1 + 36);
	*(int32_t *)(v1 + 48) = *(int32_t *)(v1 + 32);
	*(int32_t *)(v1 + 52) = *(int32_t *)(v1 + 36);
	*(int32_t *)(v1 + 72) = a2;
	int32_t result = function_7bffc(a1); // 0x7c2b0
	return result;
}

// Address range: 0x7c2d0 - 0x7c3b4
int32_t function_7c2d0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754) + 232 * a1;  // 0x7c2f4
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x767c); // 0x7c30c
	int32_t v3 = a4 + *(int32_t *)(v1 + 32);             // 0x7c318
	int32_t v4 = a5 + *(int32_t *)(v1 + 36);             // 0x7c31c
	*(int16_t *)(224 * v3 + v2 + 2 * v4) = (int16_t)(-1 - a1);
	*(int32_t *)(v1 + 4) = 1;
	*(int32_t *)(v1 + 48) = *(int32_t *)(v1 + 32);
	*(int32_t *)(v1 + 52) = *(int32_t *)(v1 + 36);
	*(int32_t *)(v1 + 40) = v3;
	*(int32_t *)(v1 + 44) = v4;
	*(int32_t *)(v1 + 64) = a2;
	*(int32_t *)(v1 + 68) = a3;
	g38 = a6;
	*(int32_t *)(v1 + 116) = a4;
	*(int32_t *)(v1 + 120) = a5;
	*(int32_t *)(v1 + 124) = a6;
	*(int32_t *)(v1 + 72) = a6;
	function_7bb5c(a1, *(int32_t *)(v1 + 224) + 80);
	int32_t v5 = 0; // r0
	*(int32_t *)(v1 + 136) = 0;
	*(int32_t *)(v1 + 140) = v5;
	*(int32_t *)(v1 + 144) = v5;
	return function_7bffc(a1);
}

// Address range: 0x7c3b4 - 0x7c4ec
int32_t function_7c3b4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = 232 * a1;                   // 0x7c3c0
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x7c3c4
	int32_t v3 = *(int32_t *)(g23 - 0x767c); // 0x7c3c8
	int32_t v4 = v2 + v1;                    // 0x7c3d0
	int32_t v5 = *(int32_t *)(v4 + 32);      // 0x7c3ec
	int32_t v6 = *(int32_t *)(v4 + 36);      // 0x7c3f0
	int32_t v7 = a6 + v5;                    // r0
	int32_t v8 = a7 + v6;                    // r8
	int32_t v9 = 2 * v6 + 224 * v5;          // 0x7c408
	*(int16_t *)(*(int32_t *)v3 + v9) = (int16_t)(-1 - a1);
	*(int32_t *)(v4 + 116) = *(int32_t *)(v4 + 32);
	int32_t v10 = 2 * v8; // 0x7c428
	*(int32_t *)(v4 + 120) = *(int32_t *)(v4 + 36);
	*(int32_t *)(v4 + 48) = *(int32_t *)(v4 + 32);
	*(int32_t *)(v4 + 52) = *(int32_t *)(v4 + 36);
	int32_t v11 = v4 + 32; // 0x7c44c
	*(int32_t *)v11 = v7;
	int32_t v12 = v4 + 36; // 0x7c450
	*(int32_t *)v12 = v8;
	*(int32_t *)(v4 + 40) = v7;
	*(int32_t *)(v4 + 44) = v8;
	int32_t v13 = *(int32_t *)v3; // 0x7c45c
	*(int16_t *)(v10 + 224 * v7 + v13) = (int16_t)(a1 + 1);
	if (*(char *)(v4 + 192) != 0) {
		int32_t v14 = (int32_t) * (char *)(v4 + 219); // 0x7c470
		function_cb984(v14, *(int32_t *)v11, *(int32_t *)v12);
		// branch -> 0x7c480
	}
	int32_t v15 = v1 + v2; // 0x7c480
	*(int32_t *)(v15 + 56) = a4;
	*(int32_t *)(v15 + 60) = a5;
	g38 = g13;
	*(int32_t *)(v15 + 4) = 2;
	*(int32_t *)(v15 + 64) = a2;
	*(int32_t *)(v15 + 68) = a3;
	*(int32_t *)(v15 + 124) = g13;
	*(int32_t *)(v15 + 72) = g13;
	function_7bb5c(a1, *(int32_t *)(v15 + 224) + 80);
	*(int32_t *)(v15 + 136) = 16 * a4;
	*(int32_t *)(v15 + 140) = 16 * a5;
	*(int32_t *)(v15 + 144) = 0;
	return function_7bffc(a1);
}

// Address range: 0x7c4ec - 0x7c64c
int32_t function_7c4ec(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7c4f8
	int32_t v2 = 232 * a1;                   // 0x7c4fc
	int32_t v3 = *(int32_t *)(g23 - 0x767c); // 0x7c500
	int32_t v4 = v1 + v2;                    // 0x7c50c
	int32_t v5 = v4 + 32;                    // 0x7c528
	int32_t v6 = *(int32_t *)v5;             // 0x7c528
	int32_t v7 = v4 + 36;                    // 0x7c52c
	int32_t v8 = *(int32_t *)v7;             // 0x7c52c
	int32_t v9 = a6 + v6;                    // r26
	int32_t v10 = v8 + a8;                   // 0x7c540
	int32_t v11 = a7 + v8;                   // r25
	int32_t v12 = g13 + v6;                  // 0x7c548
	if (*(char *)(v4 + 192) != 0) {
		// 0x7c554
		function_cb984((int32_t) * (char *)(v4 + 219), v12, v10);
		// branch -> 0x7c564
	}
	int32_t v13 = v1 + v2;                                   // r31
	int32_t v14 = 0x10000 * (-1 - a1) / 0x10000;             // 0x7c58c
	int32_t v15 = 2 * *(int32_t *)v7 + 224 * *(int32_t *)v5; // 0x7c590
	*(int16_t *)(*(int32_t *)v3 + v15) = (int16_t)v14;
	int32_t v16 = 224 * v9;       // 0x7c598
	int32_t v17 = *(int32_t *)v3; // 0x7c59c
	*(int16_t *)(v17 + v16 + 2 * v11) = (int16_t)v14;
	*(int32_t *)(v13 + 128) = v12;
	g38 = a9;
	*(int32_t *)(v13 + 132) = v10;
	int32_t v18 = *(int32_t *)*(int32_t *)(g23 - 0x779c); // 0x7c5c0
	char *v19 = (char *)(112 * v12 + v10 + v18);          // 0x7c5c4
	*v19 = (char)((int32_t)*v19 | 16);
	*(int32_t *)(v13 + 48) = *(int32_t *)v5;
	*(int32_t *)(v13 + 52) = *(int32_t *)v7;
	*(int32_t *)(v13 + 40) = v9;
	*(int32_t *)(v13 + 44) = v11;
	*(int32_t *)(v13 + 56) = a4;
	*(int32_t *)(v13 + 60) = a5;
	*(int32_t *)(v13 + 4) = 3;
	*(int32_t *)(v13 + 64) = a2;
	*(int32_t *)(v13 + 68) = a3;
	*(int32_t *)(v13 + 116) = v9;
	*(int32_t *)(v13 + 120) = v11;
	*(int32_t *)(v13 + 124) = a9;
	*(int32_t *)(v13 + 72) = a9;
	function_7bb5c(a1, *(int32_t *)(v13 + 224) + 80);
	*(int32_t *)(v13 + 136) = 16 * a4;
	*(int32_t *)(v13 + 140) = 16 * a5;
	*(int32_t *)(v13 + 144) = 0;
	return function_7bffc(a1);
}

// Address range: 0x7c64c - 0x7c6ec
int32_t function_7c64c(int32_t a1)
{
	// 0x7c64c
	g34 = a1;
	int32_t v1 = g34;              // 0x7c660
	int32_t v2 = function_7bfc0(); // 0x7c66c
	g38 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7754) + 232 * v1; // 0x7c680
	function_7bb5c(v1, *(int32_t *)(v3 + 224) + 156);
	*(int32_t *)(v3 + 4) = 4;
	*(int32_t *)(v3 + 56) = 0;
	*(int32_t *)(v3 + 60) = 0;
	*(int32_t *)(v3 + 40) = *(int32_t *)(v3 + 32);
	*(int32_t *)(v3 + 44) = *(int32_t *)(v3 + 36);
	*(int32_t *)(v3 + 48) = *(int32_t *)(v3 + 32);
	*(int32_t *)(v3 + 52) = *(int32_t *)(v3 + 36);
	*(int32_t *)(v3 + 72) = v2;
	int32_t result = function_7bffc(v1); // 0x7c6cc
	return result;
}

// Address range: 0x7c6ec - 0x7c78c
int32_t function_7c6ec(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x7c6ec
	g34 = a1;
	int32_t v1 = g34;              // 0x7c6f8
	int32_t v2 = function_7bfc0(); // 0x7c70c
	g38 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7754) + 232 * v1; // 0x7c720
	function_7bb5c(v1, *(int32_t *)(v3 + 224) + 156);
	*(int32_t *)(v3 + 4) = 10;
	int32_t v4 = 0; // r0
	*(int32_t *)(v3 + 116) = a2;
	*(int32_t *)(v3 + 120) = a3;
	*(int32_t *)(v3 + 56) = v4;
	*(int32_t *)(v3 + 60) = v4;
	*(int32_t *)(v3 + 40) = *(int32_t *)(v3 + 32);
	*(int32_t *)(v3 + 44) = *(int32_t *)(v3 + 36);
	*(int32_t *)(v3 + 48) = *(int32_t *)(v3 + 32);
	*(int32_t *)(v3 + 52) = *(int32_t *)(v3 + 36);
	*(int32_t *)(v3 + 72) = v2;
	int32_t result = function_7bffc(v1); // 0x7c774
	return result;
}

// Address range: 0x7c78c - 0x7c830
int32_t function_7c78c(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x7c78c
	g34 = a1;
	int32_t v1 = g34;              // 0x7c798
	int32_t v2 = function_7bfc0(); // 0x7c7ac
	g38 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7754) + 232 * v1; // 0x7c7c0
	function_7bb5c(v1, *(int32_t *)(v3 + 224) + 384);
	*(int32_t *)(v3 + 4) = 12;
	int32_t v4 = 0; // r0
	*(int32_t *)(v3 + 116) = a2;
	*(int32_t *)(v3 + 120) = v4;
	*(int32_t *)(v3 + 124) = a3;
	*(int32_t *)(v3 + 56) = v4;
	*(int32_t *)(v3 + 60) = v4;
	*(int32_t *)(v3 + 40) = *(int32_t *)(v3 + 32);
	*(int32_t *)(v3 + 44) = *(int32_t *)(v3 + 36);
	*(int32_t *)(v3 + 48) = *(int32_t *)(v3 + 32);
	*(int32_t *)(v3 + 52) = *(int32_t *)(v3 + 36);
	*(int32_t *)(v3 + 72) = v2;
	int32_t result = function_7bffc(v1); // 0x7c818
	return result;
}

// Address range: 0x7c830 - 0x7c8d0
int32_t function_7c830(int32_t a1)
{
	// 0x7c830
	g34 = a1;
	int32_t v1 = g34;              // 0x7c844
	int32_t v2 = function_7bfc0(); // 0x7c850
	g38 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7754) + 232 * v1; // 0x7c864
	function_7bb5c(v1, *(int32_t *)(v3 + 224) + 384);
	*(int32_t *)(v3 + 4) = 7;
	*(int32_t *)(v3 + 56) = 0;
	*(int32_t *)(v3 + 60) = 0;
	*(int32_t *)(v3 + 40) = *(int32_t *)(v3 + 32);
	*(int32_t *)(v3 + 44) = *(int32_t *)(v3 + 36);
	*(int32_t *)(v3 + 48) = *(int32_t *)(v3 + 32);
	*(int32_t *)(v3 + 52) = *(int32_t *)(v3 + 36);
	*(int32_t *)(v3 + 72) = v2;
	return function_7bffc(v1);
}

// Address range: 0x7c8d0 - 0x7c95c
int32_t function_7c8d0(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754) + 232 * a1; // 0x7c8f0
	g38 = *(int32_t *)(v1 + 72);
	function_7bb5c(a1, *(int32_t *)(v1 + 224) + 384);
	*(int32_t *)(v1 + 4) = 7;
	*(int32_t *)(v1 + 56) = 0;
	*(int32_t *)(v1 + 60) = 0;
	*(int32_t *)(v1 + 40) = *(int32_t *)(v1 + 32);
	*(int32_t *)(v1 + 44) = *(int32_t *)(v1 + 36);
	*(int32_t *)(v1 + 48) = *(int32_t *)(v1 + 32);
	*(int32_t *)(v1 + 52) = *(int32_t *)(v1 + 36);
	int32_t result = function_7bffc(a1); // 0x7c940
	return result;
}

// Address range: 0x7c95c - 0x7ca88
int32_t function_7c95c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754) + 232 * a1; // 0x7c970
	int32_t v2 = *(int32_t *)(g23 - 0x779c);            // r7
	int32_t v3 = *(int32_t *)(g23 - 0x767c);            // 0x7c984
	int32_t v4 = *(int32_t *)(v1 + 52);                 // 0x7c988
	int32_t v5 = *(int32_t *)(v1 + 48);                 // 0x7c98c
	int32_t v6 = v5;                                    // r12
	int32_t v7 = v4 - 1;                                // 0x7c990
	int32_t v8 = v7;                                    // r29
	int32_t v9 = v4 + 1;                                // 0x7c994
	int32_t result = v9;                                // r3
	int32_t v10 = 2 * v7;                               // 0x7c998
	int32_t v11 = v5 + 1;                               // r4
	if (v7 <= v9) {
		while (true) {
			// 0x7c9a4
			if (v7 <= 111) {
				int32_t v12 = v6 - 1;       // 0x7c9b4
				int32_t v13 = v12;          // r28
				int32_t v14 = 2 - v6 + v11; // 0x7c9bc
				int32_t v15 = 224 * v12;    // 0x7c9c4
				if (v12 <= v11) {
					while (true) {
						int32_t v16 = v12; // 0x7ca0c
						if (v12 <= 111) {
							int16_t *v17 = (int16_t *)(*(int32_t *)v3 + v15 + v10); // 0x7c9f0
							int32_t v18 = (int32_t)*v17;                            // 0x7c9f0
							if (-1 - a1 == v18 || a1 + 1 == v18) {
								// 0x7ca04
								*v17 = (int16_t)0;
								v16 = v13;
								// branch -> 0x7ca08
							} else {
								v16 = v12;
							}
						}
						int32_t v19 = v15 + 224; // 0x7ca08
						int32_t v20 = v16 + 1;   // 0x7ca0c
						v13 = v20;
						int32_t v21 = v14 - 1; // 0x7ca10
						if (v21 == 0) {
							// break -> 0x7ca14
							break;
						}
						v14 = v21;
						v15 = v19;
						v12 = v20;
						// continue -> 0x7c9d4
					}
					// 0x7ca14
					// branch -> 0x7ca14
				}
			}
			int32_t v22 = v8 + 1; // 0x7ca18
			v8 = v22;
			if (v22 > result) {
				// break -> 0x7ca1c
				break;
			}
			v10 += 2;
			v7 = v22;
			// continue -> 0x7c9a4
		}
		// 0x7ca1c
		v5 = v6;
		// branch -> 0x7ca24
	}
	// 0x7ca24
	if (v5 <= 110) {
		int32_t v23 = v4 + *(int32_t *)v2 + 112 * v5; // 0x7ca3c
		result = v23;
		char *v24 = (char *)(v23 + 112); // 0x7ca40
		*v24 = (char)((int32_t)*v24 & 239);
		// branch -> 0x7ca4c
	}
	// 0x7ca4c
	if (v4 <= 110) {
		int32_t v25 = *(int32_t *)v2 + 112 * v6 + v4; // 0x7ca64
		result = v25;
		char *v26 = (char *)(v25 + 1); // 0x7ca68
		*v26 = (char)((int32_t)*v26 & 239);
		// branch -> 0x7ca74
	}
	// 0x7ca74
	return result;
}

// Address range: 0x7ca88 - 0x7cbac
int32_t function_7ca88(int32_t a1)
{
	// 0x7ca88
	g34 = a1;
	g37 = (*(int32_t *)(*(int32_t *)(g23 - 0x7754) + 232 * g34 + 72) + 4) % 8;
	int32_t result; // 0x7cb84
	if (function_8539c() != 0) {
		// 0x7cac4
		function_7c95c(g32);
		int32_t v1 = g30 + g31;      // 0x7cad0
		int32_t v2 = 4 * g29;        // 0x7cad4
		int32_t v3 = v1 + 48;        // 0x7cae0
		int32_t *v4 = (int32_t *)v3; // 0x7cae0
		*v4 = *v4 + *(int32_t *)(v2 + *(int32_t *)(g23 - 0x71ec));
		int32_t v5 = v1 + 52;        // 0x7caf8
		int32_t *v6 = (int32_t *)v5; // 0x7caf8
		*v6 = *(int32_t *)(v2 + *(int32_t *)(g23 - 0x71f0)) + *v6;
		g38 = *(int32_t *)g36;
		function_7bb5c(g32, *(int32_t *)(v1 + 224) + 232);
		g30 = v1 + 32;
		*(int32_t *)(v1 + 4) = 5;
		*(int32_t *)(v1 + 56) = 0;
		*(int32_t *)(v1 + 60) = 0;
		*(int32_t *)(v1 + 32) = *(int32_t *)v3;
		*(int32_t *)(v1 + 36) = *(int32_t *)v5;
		*(int32_t *)(v1 + 40) = *(int32_t *)(v1 + 32);
		*(int32_t *)(v1 + 44) = *(int32_t *)(v1 + 36);
		*(int32_t *)v3 = *(int32_t *)(v1 + 32);
		*(int32_t *)v5 = *(int32_t *)(v1 + 36);
		function_7bffc(g32);
		function_7c95c(g32);
		int32_t v7 = *(int32_t *)(g23 - 0x767c); // 0x7cb7c
		result = 224 * *(int32_t *)g30;
		int32_t v8 = 2 * *(int32_t *)g36 + result; // 0x7cb90
		*(int16_t *)(*(int32_t *)v7 + v8) = (int16_t)(g32 + 1);
		// branch -> 0x7cb98
	} else {
		result = 0;
	}
	// 0x7cb98
	return result;
}

// Address range: 0x7cbac - 0x7cdac
int32_t function_7cbac(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0x7cbb0
	g30 = a2;
	g35 = *(int32_t *)(g23 - 0x77a8);
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x7cbbc
	g36 = v2;
	g29 = a1;
	g31 = g38;
	int32_t v3 = a2;  // 0x7cbf8
	int32_t v4 = g23; // 0x7cc04
	if (a2 >= 0) {
		char *v5 = (char *)(232 * a1 + v2 + 195); // 0x7cbe0
		*v5 = (char)((int32_t)*v5 | 1 << a2 % 64);
		v3 = g30;
		v4 = g23;
		// branch -> 0x7cbf0
	}
	// 0x7cbf0
	if (v3 == *(int32_t *)*(int32_t *)(v4 - 0x77ac)) {
		int32_t v6 = g29;                                // 0x7cc00
		int32_t v7 = *(int32_t *)(v4 - 0x77e4);          // 0x7cc04
		int32_t v8 = *(int32_t *)(g36 + 232 * v6 + 152); // 0x7cc10
		function_8a4a8(v6, v8, (int32_t) * (char *)v7);
		function_8b434(0, 37, g29 % 0x10000, g31 % 0x10000);
		// branch -> 0x7cc30
	}
	// 0x7cc30
	PlayEffect(g29, 1);
	int32_t v9 = 232 * g29; // 0x7cc3c
	g33 = v9;
	int32_t v10 = g36 + v9;  // 0x7cc40
	int32_t v11 = v10 + 224; // 0x7cc44
	g32 = v11;
	unsigned char v12 = *(char *)*(int32_t *)v11; // 0x7cc48
	int32_t v13;                                  // r27
	int32_t result2;                              // r3
	uint32_t v14;                                 // 0x7cc78
	int32_t v15;                                  // 0x7ccb8
	int32_t v16;                                  // 0x7cd38
	int32_t v17;                                  // 0x7cd40
	int32_t v18;                                  // 0x7cd48
	int32_t v19;                                  // 0x7cd50
	int32_t v20;                                  // 0x7cd58
	int32_t v21;                                  // 0x7cd60
	int32_t v22;                                  // 0x7ccf4
	int32_t v23;                                  // 0x7cd84
	int32_t result;                               // 0x7cc68
	int32_t v24;                                  // 0x7cc8c
	int32_t v25;                                  // 0x7ccb8
	unsigned char v26;                            // 0x7ccbc
	int32_t v27;                                  // 0x7cce4
	int32_t v28;                                  // 0x7ccf0
	int32_t v29;                                  // 0x7cd90
	int32_t v30;                                  // 0x7cc90
	int32_t v31;                                  // 0x7cc9c
	int32_t v32;                                  // 0x7cca4
	int32_t v33;                                  // 0x7cd7c
	if (v12 >= 29) {
		// 0x7cc54
		if (v12 >= 33) {
			// 0x7cc5c
			result = (int32_t) * (char *)(v10 + 196);
			if (g31 / 64 < result + 3) {
				// 0x7cd98
				g10 = v1;
				return result;
			}
		}
		// 0x7cc78
		v14 = g30;
		v15 = v11;
		if (v14 >= 0) {
			// 0x7cc80
			v13 = v10;
			*(int32_t *)(v10 + 76) = v14;
			v24 = 0x55ec * v14 + g35;
			v30 = *(int32_t *)(v24 + 64);
			g34 = g29;
			*(char *)(v13 + 80) = (char)v30;
			v31 = *(int32_t *)(v24 + 68);
			*(char *)(v13 + 81) = (char)v31;
			v32 = *(int32_t *)(v13 + 160);
			*(int32_t *)(v13 + 160) = __asm_rlwinm(v32, 0, 28, 26);
			*(int32_t *)(v13 + 72) = function_7bfc0();
			v15 = g32;
			// branch -> 0x7ccb8
		}
		// 0x7ccb8
		v25 = *(int32_t *)v15;
		result2 = v25;
		v26 = *(char *)v25;
		if (v26 == 39) {
			// 0x7ccc8
			result2 = function_7f4b8(g29);
			// branch -> 0x7ccf0
		} else {
			// 0x7ccd4
			if (v26 >= 16) {
				// 0x7ccdc
				if (v26 <= 19) {
					// 0x7cce4
					v27 = g33 + g36;
					result2 = v27;
					*(char *)(v27 + 8) = 1;
					// branch -> 0x7ccf0
				}
			}
		}
		// 0x7ccf0
		v28 = g33 + g36;
		v22 = v28 + 4;
		g31 = v22;
		if (*(int32_t *)v22 != 15) {
			// 0x7cd00
			g30 = v28;
			g38 = *(int32_t *)(v28 + 72);
			function_7bb5c(g29, *(int32_t *)g32 + 232);
			*(int32_t *)g31 = 5;
			*(int32_t *)(g30 + 56) = 0;
			*(int32_t *)(g30 + 60) = 0;
			v16 = g30;
			*(int32_t *)(v16 + 32) = *(int32_t *)(v16 + 48);
			v17 = g30;
			*(int32_t *)(v17 + 36) = *(int32_t *)(v17 + 52);
			v18 = g30;
			*(int32_t *)(v18 + 40) = *(int32_t *)(v18 + 32);
			v19 = g30;
			*(int32_t *)(v19 + 44) = *(int32_t *)(v19 + 36);
			v20 = g30;
			*(int32_t *)(v20 + 48) = *(int32_t *)(v20 + 32);
			v21 = g30;
			*(int32_t *)(v21 + 52) = *(int32_t *)(v21 + 36);
			function_7bffc(g29);
			function_7c95c(g29);
			v33 = *(int32_t *)(g23 - 0x767c);
			v23 = 224 * *(int32_t *)g31;
			result2 = v23;
			v29 = 2 * *(int32_t *)g32 + v23;
			*(int16_t *)(*(int32_t *)v33 + v29) = (int16_t)(g29 + 1);
			// branch -> 0x7cd98
		}
		// 0x7cd98
		g10 = v1;
		return result2;
	}
	// 0x7cc5c
	result = (int32_t) * (char *)(v10 + 196);
	if (g31 / 64 < result + 3) {
		// 0x7cd98
		g10 = v1;
		return result;
	}
	// 0x7cc78
	v14 = g30;
	v15 = v11;
	if (v14 >= 0) {
		// 0x7cc80
		v13 = v10;
		*(int32_t *)(v10 + 76) = v14;
		v24 = 0x55ec * v14 + g35;
		v30 = *(int32_t *)(v24 + 64);
		g34 = g29;
		*(char *)(v13 + 80) = (char)v30;
		v31 = *(int32_t *)(v24 + 68);
		*(char *)(v13 + 81) = (char)v31;
		v32 = *(int32_t *)(v13 + 160);
		*(int32_t *)(v13 + 160) = __asm_rlwinm(v32, 0, 28, 26);
		*(int32_t *)(v13 + 72) = function_7bfc0();
		v15 = g32;
		// branch -> 0x7ccb8
	}
	// 0x7ccb8
	v25 = *(int32_t *)v15;
	result2 = v25;
	v26 = *(char *)v25;
	if (v26 == 39) {
		// 0x7ccc8
		result2 = function_7f4b8(g29);
		// branch -> 0x7ccf0
		// 0x7ccf0
		v28 = g33 + g36;
		v22 = v28 + 4;
		g31 = v22;
		if (*(int32_t *)v22 != 15) {
			// 0x7cd00
			g30 = v28;
			g38 = *(int32_t *)(v28 + 72);
			function_7bb5c(g29, *(int32_t *)g32 + 232);
			*(int32_t *)g31 = 5;
			*(int32_t *)(g30 + 56) = 0;
			*(int32_t *)(g30 + 60) = 0;
			v16 = g30;
			*(int32_t *)(v16 + 32) = *(int32_t *)(v16 + 48);
			v17 = g30;
			*(int32_t *)(v17 + 36) = *(int32_t *)(v17 + 52);
			v18 = g30;
			*(int32_t *)(v18 + 40) = *(int32_t *)(v18 + 32);
			v19 = g30;
			*(int32_t *)(v19 + 44) = *(int32_t *)(v19 + 36);
			v20 = g30;
			*(int32_t *)(v20 + 48) = *(int32_t *)(v20 + 32);
			v21 = g30;
			*(int32_t *)(v21 + 52) = *(int32_t *)(v21 + 36);
			function_7bffc(g29);
			function_7c95c(g29);
			v33 = *(int32_t *)(g23 - 0x767c);
			v23 = 224 * *(int32_t *)g31;
			result2 = v23;
			v29 = 2 * *(int32_t *)g32 + v23;
			*(int16_t *)(*(int32_t *)v33 + v29) = (int16_t)(g29 + 1);
			// branch -> 0x7cd98
		}
		// 0x7cd98
		g10 = v1;
		return result2;
	}
	// 0x7ccd4
	if (v26 < 16) {
		// 0x7ccf0
		v28 = g33 + g36;
		v22 = v28 + 4;
		g31 = v22;
		if (*(int32_t *)v22 != 15) {
			// 0x7cd00
			g30 = v28;
			g38 = *(int32_t *)(v28 + 72);
			function_7bb5c(g29, *(int32_t *)g32 + 232);
			*(int32_t *)g31 = 5;
			*(int32_t *)(g30 + 56) = 0;
			*(int32_t *)(g30 + 60) = 0;
			v16 = g30;
			*(int32_t *)(v16 + 32) = *(int32_t *)(v16 + 48);
			v17 = g30;
			*(int32_t *)(v17 + 36) = *(int32_t *)(v17 + 52);
			v18 = g30;
			*(int32_t *)(v18 + 40) = *(int32_t *)(v18 + 32);
			v19 = g30;
			*(int32_t *)(v19 + 44) = *(int32_t *)(v19 + 36);
			v20 = g30;
			*(int32_t *)(v20 + 48) = *(int32_t *)(v20 + 32);
			v21 = g30;
			*(int32_t *)(v21 + 52) = *(int32_t *)(v21 + 36);
			function_7bffc(g29);
			function_7c95c(g29);
			v33 = *(int32_t *)(g23 - 0x767c);
			v23 = 224 * *(int32_t *)g31;
			result2 = v23;
			v29 = 2 * *(int32_t *)g32 + v23;
			*(int16_t *)(*(int32_t *)v33 + v29) = (int16_t)(g29 + 1);
			// branch -> 0x7cd98
		}
		// 0x7cd98
		g10 = v1;
		return result2;
	}
	// 0x7ccdc
	if (v26 <= 19) {
		// 0x7cce4
		v27 = g33 + g36;
		result2 = v27;
		*(char *)(v27 + 8) = 1;
		// branch -> 0x7ccf0
	}
	// 0x7ccf0
	v28 = g33 + g36;
	v22 = v28 + 4;
	g31 = v22;
	if (*(int32_t *)v22 != 15) {
		// 0x7cd00
		g30 = v28;
		g38 = *(int32_t *)(v28 + 72);
		function_7bb5c(g29, *(int32_t *)g32 + 232);
		*(int32_t *)g31 = 5;
		*(int32_t *)(g30 + 56) = 0;
		*(int32_t *)(g30 + 60) = 0;
		v16 = g30;
		*(int32_t *)(v16 + 32) = *(int32_t *)(v16 + 48);
		v17 = g30;
		*(int32_t *)(v17 + 36) = *(int32_t *)(v17 + 52);
		v18 = g30;
		*(int32_t *)(v18 + 40) = *(int32_t *)(v18 + 32);
		v19 = g30;
		*(int32_t *)(v19 + 44) = *(int32_t *)(v19 + 36);
		v20 = g30;
		*(int32_t *)(v20 + 48) = *(int32_t *)(v20 + 32);
		v21 = g30;
		*(int32_t *)(v21 + 52) = *(int32_t *)(v21 + 36);
		function_7bffc(g29);
		function_7c95c(g29);
		v33 = *(int32_t *)(g23 - 0x767c);
		v23 = 224 * *(int32_t *)g31;
		result2 = v23;
		v29 = 2 * *(int32_t *)g32 + v23;
		*(int16_t *)(*(int32_t *)v33 + v29) = (int16_t)(g29 + 1);
		// branch -> 0x7cd98
	}
	// 0x7cd98
	g10 = v1;
	return result2;
}

// Address range: 0x7cdac - 0x7d044
int32_t M_DiabloDeath(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0x7cdb0
	g22 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x7cdb8
	g35 = v2;
	g32 = *(int32_t *)(g23 - 0x77b0);
	g24 = a2;
	g33 = *(int32_t *)(g23 - 0x767c);
	g34 = 857;
	g36 = *(int32_t *)(g23 - 0x762c);
	g29 = v2 + 232 * a1;
	PlaySFX(857);
	*(char *)(*(int32_t *)(g23 - 0x7604) + 122) = 3;
	if (g24 != 0) {
		// 0x7cdfc
		function_8b520(1, 5);
		// branch -> 0x7ce08
	}
	int32_t v3 = 0;                          // r21
	int32_t v4 = *(int32_t *)(g23 - 0x7628); // r26
	*(char *)(g23 - 0x4d88) = *(char *)*(int32_t *)(g23 - 0x72b8);
	*(int32_t *)*(int32_t *)(g23 - 0x75a8) = 0;
	int32_t v5 = g36; // 0x7ceec1
	int32_t v6 = v3;  // 0x7cef04
	int32_t v7;
	int32_t v8;  // 0x7cef8
	int32_t v9;  // 0x7cf08
	int32_t v10; // 0x7cf40
	int32_t v11; // 0x7cf4c
	if (v6 >= *(int32_t *)v5) {
		// 0x7cef8
		v8 = g29;
		AddLight(*(int32_t *)(v8 + 32), *(int32_t *)(v8 + 36), 8);
		v9 = g29;
		DoVision(*(int32_t *)(v9 + 32), *(int32_t *)(v9 + 36), 8, 0, 1);
		g34 = *(int32_t *)g31 - *(int32_t *)(g29 + 36);
		g22 = abs();
		g34 = *(int32_t *)g32 - *(int32_t *)(g29 + 32);
		v10 = abs();
		v11 = g29;
		if (v10 > g22) {
			// 0x7cf4c
			g34 = *(int32_t *)g32 - *(int32_t *)(v11 + 32);
			v7 = abs();
			// branch -> 0x7cf70
		} else {
			// 0x7cf60
			g34 = *(int32_t *)g31 - *(int32_t *)(v11 + 36);
			v7 = abs();
			// branch -> 0x7cf70
		}
		// 0x7cf70
		if (v7 >= 21) {
			// 0x7cf78
			// branch -> 0x7cf7c
		}
		// 0x7cf7c
		*(int32_t *)(g29 + 124) = 0x10000 * *(int32_t *)g32;
		*(int32_t *)(g29 + 128) = 0x10000 * *(int32_t *)g31;
		g10 = v1;
		return 0x10000 * *(int32_t *)(g29 + 36);
	}
	int32_t v12 = v4; // 0x7ce2c
	// branch -> 0x7ce2c
	while (true) {
		int32_t v13 = *(int32_t *)v12; // 0x7ce2c
		int32_t v14 = v13;             // r20
		int32_t v15 = v5;              // 0x7ceec
		int32_t v16 = v6;              // 0x7cee8
		int32_t v17 = v12;             // 0x7cee4
		if (v13 != g22) {
			// 0x7ce3c
			if (*(char *)(g29 + 164) != 0) {
				int32_t v18 = g35 + 232 * v13; // 0x7ce4c
				int32_t v19 = v18;             // r24
				g38 = *(int32_t *)(v18 + 72);
				function_7bb5c(v13, *(int32_t *)(v18 + 224) + 308);
				int32_t v20 = v19; // 0x7ce68
				*(int32_t *)(v20 + 4) = 6;
				int32_t v21 = 0;   // r0
				int32_t v22 = v19; // 0x7ce74
				*(int32_t *)(v22 + 56) = 0;
				*(int32_t *)(v19 + 60) = v21;
				*(int32_t *)(v19 + 116) = v21;
				*(int32_t *)(v19 + 32) = *(int32_t *)(v19 + 48);
				*(int32_t *)(v19 + 36) = *(int32_t *)(v19 + 52);
				*(int32_t *)(v19 + 40) = *(int32_t *)(v19 + 32);
				*(int32_t *)(v19 + 44) = *(int32_t *)(v19 + 36);
				*(int32_t *)(v19 + 48) = *(int32_t *)(v19 + 32);
				*(int32_t *)(v19 + 52) = *(int32_t *)(v19 + 36);
				function_7bffc(v14);
				function_7c95c(v14);
				int32_t v23 = *(int32_t *)g33;                                           // 0x7ced4
				int32_t v24 = 2 * *(int32_t *)(v22 + 36) + 224 * *(int32_t *)(v20 + 32); // 0x7cedc
				*(int16_t *)(v23 + v24) = (int16_t)(v14 + 1);
				v15 = g36;
				v16 = v3;
				v17 = v4;
				// branch -> 0x7cee4
			} else {
				v15 = v5;
				v16 = v6;
				v17 = v12;
			}
		}
		int32_t v25 = v17 + 4; // 0x7cee4
		v4 = v25;
		int32_t v26 = v16 + 1; // 0x7cee8
		v3 = v26;
		if (v26 >= *(int32_t *)v15) {
			// break -> 0x7cef8
			break;
		}
		v5 = v15;
		v6 = v26;
		v12 = v25;
		// continue -> 0x7ce2c
	}
	// 0x7cef8
	v8 = g29;
	AddLight(*(int32_t *)(v8 + 32), *(int32_t *)(v8 + 36), 8);
	v9 = g29;
	DoVision(*(int32_t *)(v9 + 32), *(int32_t *)(v9 + 36), 8, 0, 1);
	g34 = *(int32_t *)g31 - *(int32_t *)(g29 + 36);
	g22 = abs();
	g34 = *(int32_t *)g32 - *(int32_t *)(g29 + 32);
	v10 = abs();
	v11 = g29;
	if (v10 > g22) {
		// 0x7cf4c
		g34 = *(int32_t *)g32 - *(int32_t *)(v11 + 32);
		v7 = abs();
		// branch -> 0x7cf70
	} else {
		// 0x7cf60
		g34 = *(int32_t *)g31 - *(int32_t *)(v11 + 36);
		v7 = abs();
		// branch -> 0x7cf70
	}
	// 0x7cf70
	if (v7 >= 21) {
		// 0x7cf78
		// branch -> 0x7cf7c
	}
	// 0x7cf7c
	*(int32_t *)(g29 + 124) = 0x10000 * *(int32_t *)g32;
	*(int32_t *)(g29 + 128) = 0x10000 * *(int32_t *)g31;
	g10 = v1;
	return 0x10000 * *(int32_t *)(g29 + 36);
}

// Address range: 0x7d044 - 0x7d258
int32_t function_7d044(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x7d048
	g30 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x7d050
	g36 = v2;
	g31 = a2;
	g32 = a3;
	int32_t v3 = a1; // 0x7d09c
	if (a1 >= 200) {
		// 0x7d06c
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5cfc));
		v2 = g36;
		v3 = g30;
		// branch -> 0x7d078
	}
	int32_t v4 = 232 * v3; // 0x7d078
	g35 = v4;
	int32_t v5 = v4 + v2 + 224; // 0x7d080
	g33 = v5;
	if (*(int32_t *)v5 == 0) {
		// 0x7d090
		g37 = v3;
		app_fatal(*(int32_t *)(g23 - 0x5d00));
		// branch -> 0x7d0a4
	}
	uint32_t v6 = g31; // 0x7d0a4
	if (v6 >= 0) {
		char *v7 = (char *)(g36 + 232 * v6 + 195); // 0x7d0b8
		*v7 = (char)((int32_t)*v7 | 1 << v6 % 64);
		// branch -> 0x7d0c8
	}
	int32_t v8 = *(int32_t *)(g35 + g36 + 152); // 0x7d0d0
	function_8a4a8(g30, v8, (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4));
	function_8b434(0, 37, g30 % 0x10000, g32 % 0x10000);
	PlayEffect(g30, 1);
	int32_t v9 = g33;                            // 0x7d100
	unsigned char v10 = *(char *)*(int32_t *)v9; // 0x7d104
	int32_t result2;                             // r3
	int32_t v11;                                 // r4
	uint32_t v12;                                // 0x7d134
	int32_t v13;                                 // 0x7d154
	int32_t v14;                                 // 0x7d18c
	int32_t v15;                                 // 0x7d1c8
	int32_t v16;                                 // 0x7d1e4
	int32_t v17;                                 // 0x7d1ec
	int32_t v18;                                 // 0x7d1f4
	int32_t v19;                                 // 0x7d1fc
	int32_t v20;                                 // 0x7d204
	int32_t v21;                                 // 0x7d20c
	int32_t v22;                                 // 0x7d140
	int32_t v23;                                 // 0x7d18c
	int32_t v24;                                 // 0x7d190
	int32_t v25;                                 // 0x7d1c8
	int32_t result3;                             // 0x7d230
	int32_t result;                              // 0x7d124
	int32_t v26;                                 // 0x7d154
	unsigned char v27;                           // 0x7d158
	int32_t v28;                                 // 0x7d180
	int32_t v29;                                 // 0x7d18c
	int32_t v30;                                 // 0x7d19c
	int32_t v31;                                 // 0x7d1c8
	int32_t v32;                                 // 0x7d234
	int32_t v33;                                 // 0x7d23c
	if (v10 >= 29) {
		// 0x7d110
		if (v10 >= 33) {
			// 0x7d118
			result = (int32_t) * (char *)(g35 + g36 + 196);
			if (g32 / 64 < result + 3) {
				// 0x7d244
				g10 = v1;
				return result;
			}
		}
		// 0x7d134
		v12 = g31;
		v13 = v9;
		if (v12 >= 0) {
			// 0x7d13c
			v22 = g36 + 72;
			*(int32_t *)(g35 + v22) = (*(int32_t *)(v22 + 232 * v12) + 4) % 8;
			v13 = g33;
			// branch -> 0x7d154
		}
		// 0x7d154
		v26 = *(int32_t *)v13;
		result2 = v26;
		v27 = *(char *)v26;
		if (v27 == 39) {
			// 0x7d164
			result2 = function_7f4b8(g30);
			// branch -> 0x7d18c
		} else {
			// 0x7d170
			if (v27 >= 16) {
				// 0x7d178
				if (v27 <= 19) {
					// 0x7d180
					v28 = g35 + g36;
					result2 = v28;
					*(char *)(v28 + 8) = 1;
					// branch -> 0x7d18c
				}
			}
		}
		// 0x7d18c
		v14 = g36;
		v23 = g35;
		v29 = v23 + v14;
		v24 = v29 + 4;
		g31 = v24;
		if (*(int32_t *)v24 == 15) {
			// 0x7d244
			g10 = v1;
			return result2;
		}
		// 0x7d19c
		v30 = *(int32_t *)g33;
		if (*(char *)v30 != 109) {
			// 0x7d1ac
			g38 = *(int32_t *)(v29 + 72);
			function_7bb5c(g30, v30 + 232);
			*(int32_t *)g31 = 5;
			v25 = g35;
			v15 = g36;
			// branch -> 0x7d1c8
		} else {
			v25 = v23;
			v15 = v14;
		}
		// 0x7d1c8
		v31 = v15 + v25;
		v11 = v31;
		*(int32_t *)(v31 + 56) = 0;
		*(int32_t *)(v11 + 60) = 0;
		v16 = v11;
		*(int32_t *)(v16 + 32) = *(int32_t *)(v16 + 48);
		v17 = v11;
		*(int32_t *)(v17 + 36) = *(int32_t *)(v17 + 52);
		v18 = v11;
		*(int32_t *)(v18 + 40) = *(int32_t *)(v18 + 32);
		v19 = v11;
		*(int32_t *)(v19 + 44) = *(int32_t *)(v19 + 36);
		v20 = v11;
		*(int32_t *)(v20 + 48) = *(int32_t *)(v20 + 32);
		v21 = v11;
		*(int32_t *)(v21 + 52) = *(int32_t *)(v21 + 36);
		function_7bffc(g30);
		function_7c95c(g30);
		result3 = 224 * *(int32_t *)g31;
		v32 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
		v33 = 2 * *(int32_t *)g32 + result3;
		*(int16_t *)(v32 + v33) = (int16_t)(g30 + 1);
		// branch -> 0x7d244
		// 0x7d244
		g10 = v1;
		return result3;
	}
	// 0x7d118
	result = (int32_t) * (char *)(g35 + g36 + 196);
	if (g32 / 64 < result + 3) {
		// 0x7d244
		g10 = v1;
		return result;
	}
	// 0x7d134
	v12 = g31;
	v13 = v9;
	if (v12 >= 0) {
		// 0x7d13c
		v22 = g36 + 72;
		*(int32_t *)(g35 + v22) = (*(int32_t *)(v22 + 232 * v12) + 4) % 8;
		v13 = g33;
		// branch -> 0x7d154
	}
	// 0x7d154
	v26 = *(int32_t *)v13;
	result2 = v26;
	v27 = *(char *)v26;
	if (v27 == 39) {
		int32_t result4 = function_7f4b8(g30); // 0x7d168
		// branch -> 0x7d18c
		// 0x7d18c
		v14 = g36;
		v23 = g35;
		v29 = v23 + v14;
		v24 = v29 + 4;
		g31 = v24;
		if (*(int32_t *)v24 == 15) {
			// 0x7d244
			g10 = v1;
			return result4;
		}
		// 0x7d19c
		v30 = *(int32_t *)g33;
		if (*(char *)v30 != 109) {
			// 0x7d1ac
			g38 = *(int32_t *)(v29 + 72);
			function_7bb5c(g30, v30 + 232);
			*(int32_t *)g31 = 5;
			v25 = g35;
			v15 = g36;
			// branch -> 0x7d1c8
		} else {
			v25 = v23;
			v15 = v14;
		}
		// 0x7d1c8
		v31 = v15 + v25;
		v11 = v31;
		*(int32_t *)(v31 + 56) = 0;
		*(int32_t *)(v11 + 60) = 0;
		v16 = v11;
		*(int32_t *)(v16 + 32) = *(int32_t *)(v16 + 48);
		v17 = v11;
		*(int32_t *)(v17 + 36) = *(int32_t *)(v17 + 52);
		v18 = v11;
		*(int32_t *)(v18 + 40) = *(int32_t *)(v18 + 32);
		v19 = v11;
		*(int32_t *)(v19 + 44) = *(int32_t *)(v19 + 36);
		v20 = v11;
		*(int32_t *)(v20 + 48) = *(int32_t *)(v20 + 32);
		v21 = v11;
		*(int32_t *)(v21 + 52) = *(int32_t *)(v21 + 36);
		function_7bffc(g30);
		function_7c95c(g30);
		result3 = 224 * *(int32_t *)g31;
		v32 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
		v33 = 2 * *(int32_t *)g32 + result3;
		*(int16_t *)(v32 + v33) = (int16_t)(g30 + 1);
		// branch -> 0x7d244
		// 0x7d244
		g10 = v1;
		return result3;
	}
	// 0x7d170
	if (v27 < 16) {
		// 0x7d18c
		v14 = g36;
		v23 = g35;
		v29 = v23 + v14;
		v24 = v29 + 4;
		g31 = v24;
		if (*(int32_t *)v24 == 15) {
			// 0x7d244
			g10 = v1;
			return result2;
		}
		// 0x7d19c
		v30 = *(int32_t *)g33;
		if (*(char *)v30 != 109) {
			// 0x7d1ac
			g38 = *(int32_t *)(v29 + 72);
			function_7bb5c(g30, v30 + 232);
			*(int32_t *)g31 = 5;
			v25 = g35;
			v15 = g36;
			// branch -> 0x7d1c8
		} else {
			v25 = v23;
			v15 = v14;
		}
		// 0x7d1c8
		v31 = v15 + v25;
		v11 = v31;
		*(int32_t *)(v31 + 56) = 0;
		*(int32_t *)(v11 + 60) = 0;
		v16 = v11;
		*(int32_t *)(v16 + 32) = *(int32_t *)(v16 + 48);
		v17 = v11;
		*(int32_t *)(v17 + 36) = *(int32_t *)(v17 + 52);
		v18 = v11;
		*(int32_t *)(v18 + 40) = *(int32_t *)(v18 + 32);
		v19 = v11;
		*(int32_t *)(v19 + 44) = *(int32_t *)(v19 + 36);
		v20 = v11;
		*(int32_t *)(v20 + 48) = *(int32_t *)(v20 + 32);
		v21 = v11;
		*(int32_t *)(v21 + 52) = *(int32_t *)(v21 + 36);
		function_7bffc(g30);
		function_7c95c(g30);
		result3 = 224 * *(int32_t *)g31;
		v32 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
		v33 = 2 * *(int32_t *)g32 + result3;
		*(int16_t *)(v32 + v33) = (int16_t)(g30 + 1);
		// branch -> 0x7d244
		// 0x7d244
		g10 = v1;
		return result3;
	}
	// 0x7d178
	if (v27 <= 19) {
		// 0x7d180
		v28 = g35 + g36;
		result2 = v28;
		*(char *)(v28 + 8) = 1;
		// branch -> 0x7d18c
	}
	// 0x7d18c
	v14 = g36;
	v23 = g35;
	v29 = v23 + v14;
	v24 = v29 + 4;
	g31 = v24;
	if (*(int32_t *)v24 == 15) {
		// 0x7d244
		g10 = v1;
		return result2;
	}
	// 0x7d19c
	v30 = *(int32_t *)g33;
	if (*(char *)v30 != 109) {
		// 0x7d1ac
		g38 = *(int32_t *)(v29 + 72);
		function_7bb5c(g30, v30 + 232);
		*(int32_t *)g31 = 5;
		v25 = g35;
		v15 = g36;
		// branch -> 0x7d1c8
	} else {
		v25 = v23;
		v15 = v14;
	}
	// 0x7d1c8
	v31 = v15 + v25;
	v11 = v31;
	*(int32_t *)(v31 + 56) = 0;
	*(int32_t *)(v11 + 60) = 0;
	v16 = v11;
	*(int32_t *)(v16 + 32) = *(int32_t *)(v16 + 48);
	v17 = v11;
	*(int32_t *)(v17 + 36) = *(int32_t *)(v17 + 52);
	v18 = v11;
	*(int32_t *)(v18 + 40) = *(int32_t *)(v18 + 32);
	v19 = v11;
	*(int32_t *)(v19 + 44) = *(int32_t *)(v19 + 36);
	v20 = v11;
	*(int32_t *)(v20 + 48) = *(int32_t *)(v20 + 32);
	v21 = v11;
	*(int32_t *)(v21 + 52) = *(int32_t *)(v21 + 36);
	function_7bffc(g30);
	function_7c95c(g30);
	result3 = 224 * *(int32_t *)g31;
	v32 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
	v33 = 2 * *(int32_t *)g32 + result3;
	*(int16_t *)(v32 + v33) = (int16_t)(g30 + 1);
	// branch -> 0x7d244
	// 0x7d244
	g10 = v1;
	return result3;
}

// Address range: 0x7d258 - 0x7d4dc
int32_t function_7d258(int32_t a1, int32_t a2, int32_t a3)
{
	g32 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7d264
	g35 = v1;
	g36 = a2;
	g33 = a3;
	int32_t v2 = a1; // 0x7d2a4
	if (a1 >= 200) {
		// 0x7d280
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d04));
		v1 = g35;
		v2 = g32;
		// branch -> 0x7d28c
	}
	int32_t v3 = 232 * v2; // 0x7d28c
	g31 = v3;
	int32_t v4 = v3; // 0x7d2b4
	int32_t v5 = v1; // 0x7d2b4
	if (*(int32_t *)(v3 + v1 + 224) == 0) {
		// 0x7d2a0
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5d08));
		v4 = g31;
		v5 = g35;
		// branch -> 0x7d2b0
	}
	uint32_t v6 = g36;    // 0x7d2b0
	int32_t v7 = v5 + v4; // 0x7d2b4
	g35 = v7;
	int32_t v8 = v6; // 0x7d2d0
	if (v6 >= 0) {
		char *v9 = (char *)(v7 + 195); // 0x7d2c0
		*v9 = (char)((int32_t)*v9 | 1 << v6 % 64);
		v8 = g36;
		// branch -> 0x7d2d0
	}
	// 0x7d2d0
	int32_t v10; // r31
	int32_t v11;
	int32_t v12;       // 0x7d334
	int32_t v13;       // 0x7d370
	int32_t v14;       // 0x7d378
	int32_t v15;       // 0x7d39c
	int32_t v16;       // 0x7d3c4
	int32_t v17;       // 0x7d3d0
	int32_t v18;       // 0x7d404
	int32_t v19;       // 0x7d40c
	int32_t v20;       // 0x7d414
	int32_t v21;       // 0x7d41c
	int32_t v22;       // 0x7d424
	int32_t v23;       // 0x7d42c
	int32_t v24;       // 0x7d440
	int32_t v25;       // 0x7d444
	int32_t v26;       // 0x7d470
	int32_t v27;       // 0x7d47c
	int32_t result2;   // 0x7d4d8
	int32_t v28;       // 0x7d358
	int32_t v29;       // 0x7d3d4
	int32_t v30;       // 0x7d444
	int32_t v31;       // 0x7d458
	unsigned char v32; // 0x7d480
	int32_t v33;       // 0x7d300
	int32_t *v34;      // 0x7d308
	int32_t v35;       // 0x7d338
	int32_t v36;       // 0x7d440
	int32_t v37;       // 0x7d450
	int32_t result;    // 0x7d47c
	int32_t v38;       // 0x7d4c0
	int32_t v39;       // 0x7d494
	if (v8 > 3) {
		// 0x7d2f4
		v33 = (int32_t) * (char *)*(int32_t *)(g35 + 224);
		v34 = (int32_t *)(4 * v33 + *(int32_t *)(g23 - 0x714c));
		*v34 = *v34 + 1;
		*(int32_t *)(g35 + 152) = 0;
		g34 = *(int32_t *)(g35 + 180);
		SetRndSeed();
		if (QuestStatus(2) != 0) {
			// 0x7d330
			v12 = g35;
			v35 = *(int32_t *)(*(int32_t *)(g23 - 0x708c) + 4);
			if (*(int32_t *)(v12 + 220) == v35) {
				// 0x7d344
				v28 = *(int32_t *)(v12 + 36) + 1;
				function_60490(*(int32_t *)(v12 + 32) + 1, v28, 1, 4, 0, 1, 0);
				// branch -> 0x7d38c
				// 0x7d38c
				v15 = g32;
				if (*(char *)*(int32_t *)(g35 + 224) == 110) {
					// 0x7d39c
					M_DiabloDeath(v15, 1);
					// branch -> 0x7d3b8
				} else {
					// 0x7d3ac
					PlayEffect(v15, 2);
					// branch -> 0x7d3b8
				}
				// 0x7d3b8
				if (g36 < 0) {
					// 0x7d3d0
					v17 = g35;
					v29 = v17;
					v11 = *(int32_t *)(v17 + 72);
					// branch -> 0x7d3d4
				} else {
					// 0x7d3c0
					g34 = g32;
					v16 = function_7bfc0();
					v29 = g35;
					v11 = v16;
					// branch -> 0x7d3d4
				}
				// 0x7d3d4
				g38 = v11;
				*(int32_t *)(v29 + 72) = v11;
				function_7bb5c(g32, *(int32_t *)(g35 + 224) + 308);
				*(int32_t *)(g35 + 4) = 6;
				v10 = 0;
				*(int32_t *)(g35 + 56) = 0;
				*(int32_t *)(g35 + 60) = v10;
				*(int32_t *)(g35 + 116) = v10;
				v18 = g35;
				*(int32_t *)(v18 + 32) = *(int32_t *)(v18 + 48);
				v19 = g35;
				*(int32_t *)(v19 + 36) = *(int32_t *)(v19 + 52);
				v20 = g35;
				*(int32_t *)(v20 + 40) = *(int32_t *)(v20 + 32);
				v21 = g35;
				*(int32_t *)(v21 + 44) = *(int32_t *)(v21 + 36);
				v22 = g35;
				*(int32_t *)(v22 + 48) = *(int32_t *)(v22 + 32);
				v23 = g35;
				*(int32_t *)(v23 + 52) = *(int32_t *)(v23 + 36);
				function_7bffc(g32);
				function_7c95c(g32);
				v24 = g35;
				v36 = *(int32_t *)(v24 + 32);
				v25 = g32;
				v30 = v25 + 1;
				v37 = *(int32_t *)(v24 + 36);
				v31 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
				*(int16_t *)(v31 + 2 * v37 + 224 * v36) = (int16_t)v30;
				function_acb74(v25, g33, v31, v30);
				v26 = g35;
				function_86084(*(int32_t *)(v26 + 32), *(int32_t *)(v26 + 36));
				v27 = g35;
				result = *(int32_t *)(v27 + 224);
				v32 = *(char *)result;
				if (v32 < 46) {
					// 0x7d4c8
					return result;
				}
				// 0x7d48c
				if (v32 <= 49) {
					// 0x7d494
					v39 = (int32_t) * (char *)(v27 + 157);
					g13 = g32;
					v38 = *(int32_t *)(v27 + 36);
					result2 = AddMissile(*(int32_t *)(v27 + 32), v38, 0, 0, 0, 59, 1, v39 + 1, g36);
					// branch -> 0x7d4c8
				} else {
					result2 = result;
				}
				// 0x7d4c8
				return result2;
			}
		}
		// 0x7d370
		v13 = g32;
		if (v13 >= 4) {
			// 0x7d378
			v14 = g35;
			function_5ff4c(v13, *(int32_t *)(v14 + 32), *(int32_t *)(v14 + 36), g33);
			// branch -> 0x7d38c
		}
		// 0x7d38c
		v15 = g32;
		if (*(char *)*(int32_t *)(g35 + 224) == 110) {
			// 0x7d39c
			M_DiabloDeath(v15, 1);
			// branch -> 0x7d3b8
		} else {
			// 0x7d3ac
			PlayEffect(v15, 2);
			// branch -> 0x7d3b8
		}
		// 0x7d3b8
		if (g36 < 0) {
			// 0x7d3d0
			v17 = g35;
			v29 = v17;
			v11 = *(int32_t *)(v17 + 72);
			// branch -> 0x7d3d4
		} else {
			// 0x7d3c0
			g34 = g32;
			v16 = function_7bfc0();
			v29 = g35;
			v11 = v16;
			// branch -> 0x7d3d4
		}
		// 0x7d3d4
		g38 = v11;
		*(int32_t *)(v29 + 72) = v11;
		function_7bb5c(g32, *(int32_t *)(g35 + 224) + 308);
		*(int32_t *)(g35 + 4) = 6;
		v10 = 0;
		*(int32_t *)(g35 + 56) = 0;
		*(int32_t *)(g35 + 60) = v10;
		*(int32_t *)(g35 + 116) = v10;
		v18 = g35;
		*(int32_t *)(v18 + 32) = *(int32_t *)(v18 + 48);
		v19 = g35;
		*(int32_t *)(v19 + 36) = *(int32_t *)(v19 + 52);
		v20 = g35;
		*(int32_t *)(v20 + 40) = *(int32_t *)(v20 + 32);
		v21 = g35;
		*(int32_t *)(v21 + 44) = *(int32_t *)(v21 + 36);
		v22 = g35;
		*(int32_t *)(v22 + 48) = *(int32_t *)(v22 + 32);
		v23 = g35;
		*(int32_t *)(v23 + 52) = *(int32_t *)(v23 + 36);
		function_7bffc(g32);
		function_7c95c(g32);
		v24 = g35;
		v36 = *(int32_t *)(v24 + 32);
		v25 = g32;
		v30 = v25 + 1;
		v37 = *(int32_t *)(v24 + 36);
		v31 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
		*(int16_t *)(v31 + 2 * v37 + 224 * v36) = (int16_t)v30;
		function_acb74(v25, g33, v31, v30);
		v26 = g35;
		function_86084(*(int32_t *)(v26 + 32), *(int32_t *)(v26 + 36));
		v27 = g35;
		result = *(int32_t *)(v27 + 224);
		v32 = *(char *)result;
		if (v32 < 46) {
			// 0x7d4c8
			return result;
		}
		// 0x7d48c
		if (v32 <= 49) {
			// 0x7d494
			v39 = (int32_t) * (char *)(v27 + 157);
			g13 = g32;
			v38 = *(int32_t *)(v27 + 36);
			result2 = AddMissile(*(int32_t *)(v27 + 32), v38, 0, 0, 0, 59, 1, v39 + 1, g36);
			// branch -> 0x7d4c8
		} else {
			result2 = result;
		}
		// 0x7d4c8
		return result2;
	}
	// 0x7d2d8
	if (g32 >= 5) {
		int32_t v40 = g35;                                // 0x7d2e0
		int32_t v41 = (int32_t) * (int16_t *)(v40 + 198); // 0x7d2e4
		int32_t v42 = (int32_t) * (char *)(v40 + 195);    // 0x7d2e8
		function_a37e0((int32_t) * (char *)(v40 + 196), v41, v42);
		// branch -> 0x7d2f4
	}
	// 0x7d2f4
	v33 = (int32_t) * (char *)*(int32_t *)(g35 + 224);
	v34 = (int32_t *)(4 * v33 + *(int32_t *)(g23 - 0x714c));
	*v34 = *v34 + 1;
	*(int32_t *)(g35 + 152) = 0;
	g34 = *(int32_t *)(g35 + 180);
	SetRndSeed();
	if (QuestStatus(2) != 0) {
		// 0x7d330
		v12 = g35;
		v35 = *(int32_t *)(*(int32_t *)(g23 - 0x708c) + 4);
		if (*(int32_t *)(v12 + 220) == v35) {
			// 0x7d344
			v28 = *(int32_t *)(v12 + 36) + 1;
			function_60490(*(int32_t *)(v12 + 32) + 1, v28, 1, 4, 0, 1, 0);
			// branch -> 0x7d38c
			// 0x7d38c
			v15 = g32;
			if (*(char *)*(int32_t *)(g35 + 224) == 110) {
				// 0x7d39c
				M_DiabloDeath(v15, 1);
				// branch -> 0x7d3b8
			} else {
				// 0x7d3ac
				PlayEffect(v15, 2);
				// branch -> 0x7d3b8
			}
			// 0x7d3b8
			if (g36 < 0) {
				// 0x7d3d0
				v17 = g35;
				v29 = v17;
				v11 = *(int32_t *)(v17 + 72);
				// branch -> 0x7d3d4
			} else {
				// 0x7d3c0
				g34 = g32;
				v16 = function_7bfc0();
				v29 = g35;
				v11 = v16;
				// branch -> 0x7d3d4
			}
			// 0x7d3d4
			g38 = v11;
			*(int32_t *)(v29 + 72) = v11;
			function_7bb5c(g32, *(int32_t *)(g35 + 224) + 308);
			*(int32_t *)(g35 + 4) = 6;
			v10 = 0;
			*(int32_t *)(g35 + 56) = 0;
			*(int32_t *)(g35 + 60) = v10;
			*(int32_t *)(g35 + 116) = v10;
			v18 = g35;
			*(int32_t *)(v18 + 32) = *(int32_t *)(v18 + 48);
			v19 = g35;
			*(int32_t *)(v19 + 36) = *(int32_t *)(v19 + 52);
			v20 = g35;
			*(int32_t *)(v20 + 40) = *(int32_t *)(v20 + 32);
			v21 = g35;
			*(int32_t *)(v21 + 44) = *(int32_t *)(v21 + 36);
			v22 = g35;
			*(int32_t *)(v22 + 48) = *(int32_t *)(v22 + 32);
			v23 = g35;
			*(int32_t *)(v23 + 52) = *(int32_t *)(v23 + 36);
			function_7bffc(g32);
			function_7c95c(g32);
			v24 = g35;
			v36 = *(int32_t *)(v24 + 32);
			v25 = g32;
			v30 = v25 + 1;
			v37 = *(int32_t *)(v24 + 36);
			v31 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
			*(int16_t *)(v31 + 2 * v37 + 224 * v36) = (int16_t)v30;
			function_acb74(v25, g33, v31, v30);
			v26 = g35;
			function_86084(*(int32_t *)(v26 + 32), *(int32_t *)(v26 + 36));
			v27 = g35;
			result = *(int32_t *)(v27 + 224);
			v32 = *(char *)result;
			if (v32 < 46) {
				// 0x7d4c8
				return result;
			}
			// 0x7d48c
			if (v32 <= 49) {
				// 0x7d494
				v39 = (int32_t) * (char *)(v27 + 157);
				g13 = g32;
				v38 = *(int32_t *)(v27 + 36);
				result2 = AddMissile(*(int32_t *)(v27 + 32), v38, 0, 0, 0, 59, 1, v39 + 1, g36);
				// branch -> 0x7d4c8
			} else {
				result2 = result;
			}
			// 0x7d4c8
			return result2;
		}
	}
	// 0x7d370
	v13 = g32;
	if (v13 >= 4) {
		// 0x7d378
		v14 = g35;
		function_5ff4c(v13, *(int32_t *)(v14 + 32), *(int32_t *)(v14 + 36), g33);
		// branch -> 0x7d38c
	}
	// 0x7d38c
	v15 = g32;
	if (*(char *)*(int32_t *)(g35 + 224) == 110) {
		// 0x7d39c
		M_DiabloDeath(v15, 1);
		// branch -> 0x7d3b8
	} else {
		// 0x7d3ac
		PlayEffect(v15, 2);
		// branch -> 0x7d3b8
	}
	// 0x7d3b8
	if (g36 < 0) {
		// 0x7d3d0
		v17 = g35;
		v29 = v17;
		v11 = *(int32_t *)(v17 + 72);
		// branch -> 0x7d3d4
	} else {
		// 0x7d3c0
		g34 = g32;
		v16 = function_7bfc0();
		v29 = g35;
		v11 = v16;
		// branch -> 0x7d3d4
	}
	// 0x7d3d4
	g38 = v11;
	*(int32_t *)(v29 + 72) = v11;
	function_7bb5c(g32, *(int32_t *)(g35 + 224) + 308);
	*(int32_t *)(g35 + 4) = 6;
	v10 = 0;
	*(int32_t *)(g35 + 56) = 0;
	*(int32_t *)(g35 + 60) = v10;
	*(int32_t *)(g35 + 116) = v10;
	v18 = g35;
	*(int32_t *)(v18 + 32) = *(int32_t *)(v18 + 48);
	v19 = g35;
	*(int32_t *)(v19 + 36) = *(int32_t *)(v19 + 52);
	v20 = g35;
	*(int32_t *)(v20 + 40) = *(int32_t *)(v20 + 32);
	v21 = g35;
	*(int32_t *)(v21 + 44) = *(int32_t *)(v21 + 36);
	v22 = g35;
	*(int32_t *)(v22 + 48) = *(int32_t *)(v22 + 32);
	v23 = g35;
	*(int32_t *)(v23 + 52) = *(int32_t *)(v23 + 36);
	function_7bffc(g32);
	function_7c95c(g32);
	v24 = g35;
	v36 = *(int32_t *)(v24 + 32);
	v25 = g32;
	v30 = v25 + 1;
	v37 = *(int32_t *)(v24 + 36);
	v31 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
	*(int16_t *)(v31 + 2 * v37 + 224 * v36) = (int16_t)v30;
	function_acb74(v25, g33, v31, v30);
	v26 = g35;
	function_86084(*(int32_t *)(v26 + 32), *(int32_t *)(v26 + 36));
	v27 = g35;
	result = *(int32_t *)(v27 + 224);
	v32 = *(char *)result;
	if (v32 < 46) {
		// 0x7d4c8
		return result;
	}
	// 0x7d48c
	if (v32 <= 49) {
		// 0x7d494
		v39 = (int32_t) * (char *)(v27 + 157);
		g13 = g32;
		v38 = *(int32_t *)(v27 + 36);
		result2 = AddMissile(*(int32_t *)(v27 + 32), v38, 0, 0, 0, 59, 1, v39 + 1, g36);
		// branch -> 0x7d4c8
	} else {
		result2 = result;
	}
	// 0x7d4c8
	return result2;
}

// Address range: 0x7d4dc - 0x7d784
int32_t M2MStartKill(int32_t a1, int32_t a2, int32_t a3)
{
	g28 = a1;
	g35 = *(int32_t *)(g23 - 0x7754);
	g29 = a2;
	if (a1 >= 200) {
		// 0x7d500
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d0c));
		a2 = g29;
		// branch -> 0x7d50c
	}
	// 0x7d50c
	if (a2 >= 200) {
		// 0x7d514
		g37 = a2;
		app_fatal(*(int32_t *)(g23 - 0x5d10));
		// branch -> 0x7d520
	}
	int32_t v1 = 232 * g28; // 0x7d520
	g30 = v1;
	int32_t v2 = g35 + 224; // 0x7d524
	g31 = v2;
	if (*(int32_t *)(v2 + v1) == 0) {
		// 0x7d534
		g37 = g29;
		app_fatal(*(int32_t *)(g23 - 0x5d14));
		// branch -> 0x7d54c
	}
	int32_t v3 = g29;      // 0x7d54c
	int32_t v4 = 232 * v3; // 0x7d54c
	g36 = v4;
	unsigned char v5 = *(char *)*(int32_t *)(g23 - 0x77e4); // 0x7d554
	int32_t v6 = v4 + g35;                                  // 0x7d558
	int32_t v7 = v6 + 32;                                   // 0x7d560
	uint32_t v8 = *(int32_t *)v7;                           // 0x7d560
	g32 = v7;
	int32_t v9 = v6 + 36;          // 0x7d568
	uint32_t v10 = *(int32_t *)v9; // 0x7d568
	g33 = v9;
	function_8a44c(v3, (char)v8, v10 % 256, (int32_t)v5);
	NetSendCmdLocParam1(0, 36, *(int32_t *)g32 % 256, *(int32_t *)g33 % 256);
	uint32_t v11 = g28;                    // 0x7d59c
	char *v12 = (char *)(g36 + g35 + 195); // 0x7d5a4
	*v12 = (char)((int32_t)*v12 | 1 << v11 % 64);
	if (v11 != 4 && v11 <= 4) {
		int32_t v13 = g36 + g35;                          // 0x7d5b8
		int32_t v14 = (int32_t) * (int16_t *)(v13 + 198); // 0x7d5c4
		int32_t v15 = (int32_t) * (char *)(v13 + 196);    // 0x7d5c8
		function_a37e0(v15, v14, (int32_t)*v12);
		// branch -> 0x7d5d0
	}
	int32_t v16 = g36;       // 0x7d5d0
	int32_t v17 = v16 + g31; // 0x7d5d0
	g31 = v17;
	int32_t v18 = g35 + v16;                                          // r3
	int32_t v19 = (int32_t) * (char *)*(int32_t *)v17;                // 0x7d5e4
	int32_t *v20 = (int32_t *)(4 * v19 + *(int32_t *)(g23 - 0x714c)); // 0x7d5ec
	*v20 = *v20 + 1;
	*(int32_t *)(v18 + 152) = 0;
	g34 = *(int32_t *)(v18 + 180);
	SetRndSeed();
	uint32_t v21 = g29; // 0x7d604
	if (v21 >= 4) {
		// 0x7d60c
		function_5ff4c(v21, *(int32_t *)g32, *(int32_t *)g33, 1);
		// branch -> 0x7d620
	}
	// 0x7d620
	if (*(char *)*(int32_t *)g31 == 110) {
		// 0x7d630
		M_DiabloDeath(g29, 1);
		// branch -> 0x7d64c
	} else {
		// 0x7d640
		PlayEffect(g28, 2);
		// branch -> 0x7d64c
	}
	// 0x7d64c
	PlayEffect(g29, 2);
	int32_t v22 = g35 + 72;                                           // 0x7d65c
	unsigned char v23 = *(char *)*(int32_t *)g31;                     // 0x7d664
	int32_t v24 = v23 == 109 ? 0 : (*(int32_t *)(g30 + v22) + 4) % 8; // 0x7d670
	g38 = v24;
	*(int32_t *)(g36 + v22) = v24;
	function_7bb5c(g29, *(int32_t *)g31 + 308);
	int32_t v25 = g36 + g35; // 0x7d690
	*(int32_t *)(v25 + 4) = 6;
	*(int32_t *)(v25 + 56) = 0;
	*(int32_t *)(v25 + 60) = 0;
	*(int32_t *)g32 = *(int32_t *)(v25 + 48);
	*(int32_t *)g33 = *(int32_t *)(v25 + 52);
	*(int32_t *)(v25 + 40) = *(int32_t *)g32;
	*(int32_t *)(v25 + 44) = *(int32_t *)g33;
	*(int32_t *)(v25 + 48) = *(int32_t *)g32;
	*(int32_t *)(v25 + 52) = *(int32_t *)g33;
	function_7bffc(g29);
	function_7c95c(g29);
	int32_t v26 = g29;                                         // 0x7d6ec
	int32_t v27 = v26 + 1;                                     // 0x7d6ec
	int32_t v28 = *(int32_t *)*(int32_t *)(g23 - 0x767c);      // 0x7d700
	int32_t v29 = 2 * *(int32_t *)g33 + 224 * *(int32_t *)g32; // 0x7d708
	*(int16_t *)(v28 + v29) = (int16_t)v27;
	function_acb74(v26, 1, v28, v27);
	function_86084(*(int32_t *)g32, *(int32_t *)g33);
	int32_t result = *(int32_t *)g31;    // 0x7d724
	unsigned char v30 = *(char *)result; // 0x7d728
	if (v30 < 46) {
		// 0x7d770
		return result;
	}
	// 0x7d734
	int32_t result2; // 0x7d780
	if (v30 <= 49) {
		int32_t v31 = (int32_t) * (char *)(g35 + 157); // 0x7d73c
		g13 = g29;
		int32_t v32 = *(int32_t *)g33; // 0x7d768
		result2 = AddMissile(*(int32_t *)g32, v32, 0, 0, 0, 59, 1, v31 + 1, g36);
		// branch -> 0x7d770
	} else {
		result2 = result;
	}
	// 0x7d770
	return result2;
}

// Address range: 0x7d784 - 0x7d860
int32_t M_StartKill(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0x7d788
	g31 = a1;
	g35 = *(int32_t *)(g23 - 0x7754);
	g36 = *(int32_t *)(g23 - 0x77e4);
	g32 = a2;
	if (a1 >= 200) {
		// 0x7d7ac
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d18));
		a2 = g32;
		// branch -> 0x7d7b8
	}
	// 0x7d7b8
	int32_t result; // 0x7d848
	if (*(int32_t *)*(int32_t *)(g23 - 0x77ac) != a2) {
		// 0x7d83c
		result = function_7d258(g31, g32, 1);
		g10 = v1;
		return result;
	}
	int32_t v2 = g31;                // 0x7d7c8
	unsigned char v3 = *(char *)g36; // 0x7d7cc
	int32_t v4 = g35 + 232 * v2;     // 0x7d7d0
	int32_t v5 = v4 + 32;            // 0x7d7d8
	uint32_t v6 = *(int32_t *)v5;    // 0x7d7d8
	g33 = v5;
	int32_t v7 = v4 + 36;         // 0x7d7e0
	uint32_t v8 = *(int32_t *)v7; // 0x7d7e0
	g35 = v7;
	function_8a44c(v2, (char)v6, v8 % 256, (int32_t)v3);
	uint32_t v9 = *(int32_t *)g33; // 0x7d81c
	if (g31 == g32) {
		// 0x7d81c
		NetSendCmdLocParam1(0, 87, v9 % 256, *(int32_t *)g35 % 256);
		// branch -> 0x7d83c
	} else {
		// 0x7d7f8
		NetSendCmdLocParam1(0, 36, v9 % 256, *(int32_t *)g35 % 256);
		// branch -> 0x7d83c
	}
	// 0x7d83c
	result = function_7d258(g31, g32, 1);
	g10 = v1;
	return result;
}

// Address range: 0x7d860 - 0x7d940
int32_t function_7d860(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x7d860
	g30 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7d86c
	g36 = v1;
	g31 = a2;
	g32 = a3;
	g33 = a4;
	int32_t result = a1; // 0x7d93c6
	int32_t v2 = a1;     // 0x7d8dc
	if (a1 >= 200) {
		// 0x7d88c
		g37 = a1;
		result = app_fatal(*(int32_t *)(g23 - 0x5d1c));
		v2 = g30;
		v1 = g36;
		// branch -> 0x7d898
	}
	int32_t v3 = 232 * v2 + v1; // 0x7d89c
	g36 = v3;
	if (*(int32_t *)(v3 + 152) == 0) {
		// 0x7d92c
		return result;
	}
	int32_t v4 = v3 + 4; // 0x7d8ac
	g35 = v4;
	if (*(int32_t *)v4 == 6) {
		// 0x7d92c
		return result;
	}
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x767c); // 0x7d8c4
	int32_t v6 = v2;                                     // 0x7d900
	if (*(int16_t *)(2 * g32 + 224 * g31 + v5) == 0) {
		// 0x7d8dc
		function_7c95c(v2);
		*(int32_t *)(g36 + 32) = g31;
		*(int32_t *)(g36 + 36) = g32;
		*(int32_t *)(g36 + 48) = g31;
		*(int32_t *)(g36 + 52) = g32;
		v6 = g30;
		v4 = g35;
		// branch -> 0x7d8f4
	}
	int32_t result2 = function_7d258(v6, g33, 0); // 0x7d90c
	if (*(int32_t *)v4 == 15) {
		// 0x7d900
		*(int32_t *)g35 = 15;
		// branch -> 0x7d92c
	}
	// 0x7d92c
	return result2;
}

// Address range: 0x7d940 - 0x7da34
int32_t function_7d940(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x7d940
	g30 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7d94c
	g36 = v1;
	g31 = a2;
	int32_t v2 = a1; // 0x7d994
	if (a1 >= 200) {
		// 0x7d968
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d20));
		v1 = g36;
		v2 = g30;
		// branch -> 0x7d974
	}
	int32_t v3 = 232 * v2; // 0x7d974
	g35 = v3;
	int32_t v4 = v3 + v1 + 224; // 0x7d97c
	g33 = v4;
	int32_t v5 = v2; // 0x7d9a0
	int32_t v6 = v4; // 0x7d99c
	if (*(int32_t *)v4 == 0) {
		// 0x7d988
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5d24));
		v5 = g30;
		v6 = g33;
		// branch -> 0x7d99c
	}
	// 0x7d99c
	g38 = g31;
	function_7bb5c(v5, *(int32_t *)v6 + 384);
	int32_t v7 = g35 + g36; // 0x7d9b0
	*(int32_t *)(v7 + 4) = 8;
	*(int32_t *)(v7 + 56) = 0;
	*(int32_t *)(v7 + 60) = 0;
	*(int32_t *)(v7 + 40) = *(int32_t *)(v7 + 32);
	*(int32_t *)(v7 + 44) = *(int32_t *)(v7 + 36);
	*(int32_t *)(v7 + 48) = *(int32_t *)(v7 + 32);
	*(int32_t *)(v7 + 52) = *(int32_t *)(v7 + 36);
	function_7bffc(g30);
	*(int32_t *)(g36 + 72) = g31;
	int32_t result = g36 + 160; // 0x7d9f4
	*(int32_t *)(g36 + 160) = __asm_rlwinm(*(int32_t *)result, 0, 0, 30);
	if (g32 != 0) {
		int32_t *v8 = (int32_t *)result; // 0x7da0c
		*v8 = *v8 | 2;
		int32_t v9 = g36; // 0x7da18
		*(int32_t *)(v9 + 104) = *(int32_t *)(v9 + 100);
		// branch -> 0x7da20
	}
	// 0x7da20
	return result;
}

// Address range: 0x7da34 - 0x7db18
int32_t function_7da34(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x7da34
	g30 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7da40
	g36 = v1;
	g31 = a2;
	int32_t v2 = a1; // 0x7da88
	if (a1 >= 200) {
		// 0x7da5c
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d28));
		v1 = g36;
		v2 = g30;
		// branch -> 0x7da68
	}
	int32_t v3 = 232 * v2; // 0x7da68
	g35 = v3;
	int32_t v4 = v3 + v1 + 224; // 0x7da70
	g33 = v4;
	int32_t v5 = v2; // 0x7da94
	int32_t v6 = v4; // 0x7da90
	if (*(int32_t *)v4 == 0) {
		// 0x7da7c
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5d2c));
		v5 = g30;
		v6 = g33;
		// branch -> 0x7da90
	}
	// 0x7da90
	g38 = g31;
	function_7bb5c(v5, *(int32_t *)v6 + 384);
	int32_t v7 = g35 + g36; // 0x7daa4
	*(int32_t *)(v7 + 4) = 9;
	*(int32_t *)(v7 + 56) = 0;
	*(int32_t *)(v7 + 60) = 0;
	*(int32_t *)(v7 + 40) = *(int32_t *)(v7 + 32);
	*(int32_t *)(v7 + 44) = *(int32_t *)(v7 + 36);
	*(int32_t *)(v7 + 48) = *(int32_t *)(v7 + 32);
	*(int32_t *)(v7 + 52) = *(int32_t *)(v7 + 36);
	int32_t result = function_7bffc(g30); // r3
	*(int32_t *)(g36 + 72) = g31;
	if (g32 != 0) {
		int32_t *v8 = (int32_t *)(g36 + 160); // 0x7daf0
		*v8 = *v8 | 2;
		int32_t v9 = g36; // 0x7dafc
		*(int32_t *)(v9 + 104) = *(int32_t *)(v9 + 100);
		// branch -> 0x7db04
	}
	// 0x7db04
	return result;
}

// Address range: 0x7db18 - 0x7dbf0
int32_t function_7db18(int32_t a1)
{
	int32_t v1 = g36;                        // 0x7db18
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x7db20
	g36 = v2;
	int32_t v3 = g35; // 0x7db24
	int32_t v4 = g33; // 0x7db28
	g33 = a1;
	int32_t v5 = a1; // 0x7db64
	if (a1 >= 200) {
		// 0x7db40
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d30));
		v2 = g36;
		v5 = g33;
		// branch -> 0x7db4c
	}
	int32_t v6 = 232 * v5; // 0x7db4c
	g35 = v6;
	int32_t v7 = v6; // 0x7db70
	int32_t v8 = v2; // 0x7db70
	if (*(int32_t *)(v6 + v2 + 224) == 0) {
		// 0x7db60
		g37 = v5;
		app_fatal(*(int32_t *)(g23 - 0x5d34));
		v7 = g35;
		v8 = g36;
		// branch -> 0x7db70
	}
	int32_t v9 = v8 + v7;                                             // 0x7db70
	int32_t v10 = *(int32_t *)(v9 + 224) + 8 * *(int32_t *)(v9 + 72); // 0x7db88
	g37 = 5;
	*(int32_t *)(v9 + 84) = *(int32_t *)(v10 + 388);
	*(int32_t *)(v9 + 88) = *(int32_t *)(v10 + 392);
	int32_t v11 = *(int32_t *)(*(int32_t *)(v9 + 224) + 452); // 0x7dba4
	*(int32_t *)(v9 + 104) = v11;
	int32_t *v12 = (int32_t *)(v9 + 160); // 0x7dbac
	*v12 = *v12 | 2;
	*(int32_t *)(v9 + 4) = 16;
	int32_t result = 16 * (random(97) + 4); // 0x7dbc8
	*(int32_t *)(v9 + 116) = *(int32_t *)(v9 + 148) / result;
	g36 = v1;
	g35 = v3;
	g33 = v4;
	return result;
}

// Address range: 0x7dbf0 - 0x7dc9c
int32_t function_7dbf0(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7dbf8
	g36 = v1;
	g35 = a1;
	int32_t v2 = a1; // 0x7dc20
	if (a1 >= 200) {
		// 0x7dc14
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d38));
		v1 = g36;
		v2 = g35;
		// branch -> 0x7dc20
	}
	int32_t v3 = 232 * v2 + v1;             // 0x7dc24
	int32_t v4 = *(int32_t *)(v3 + 56);     // 0x7dc2c
	int32_t v5 = 2 * *(int32_t *)(v3 + 60); // 0x7dc30
	int32_t v6 = v5 - v4;                   // 0x7dc38
	if (v4 + v5 <= 0xffffffff) {
		// 0x7dc40
		// branch -> 0x7dc50
	}
	// 0x7dc50
	int32_t v7;
	int32_t v8; // 0x7dc70
	if (v6 <= 0xffffffff) {
		// 0x7dc60
		v8 = -v6;
		v7 = -1;
		// branch -> 0x7dc70
	} else {
		v8 = v6;
		v7 = 1;
	}
	int32_t v9 = v8 / 8 * v7; // 0x7dc78
	return function_cb9dc((int32_t) * (char *)(v3 + 219), v9, v9);
}

// Address range: 0x7dc9c - 0x7dd88
int32_t function_7dc9c(int32_t a1)
{
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7dcb0
	g35 = v1;
	int32_t v2 = a1; // 0x7dce8
	if (a1 >= 200) {
		// 0x7dcc4
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d3c));
		v1 = g35;
		v2 = g36;
		// branch -> 0x7dcd0
	}
	int32_t v3 = 232 * v2; // 0x7dcd0
	g33 = v3;
	int32_t v4 = v3; // 0x7dcf4
	int32_t v5 = v1; // 0x7dcf4
	if (*(int32_t *)(v3 + v1 + 224) == 0) {
		// 0x7dce4
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5d40));
		v4 = g33;
		v5 = g35;
		// branch -> 0x7dcf4
	}
	int32_t v6 = v5 + v4;                        // 0x7dcf4
	int32_t v7 = *(int32_t *)(v6 + 224);         // 0x7dcf8
	int32_t v8 = 8 * *(int32_t *)(v6 + 72) + v7; // 0x7dd10
	if (*(char *)v7 == 109) {
		// 0x7dd08
		*(int32_t *)(v6 + 84) = *(int32_t *)(v8 + 84);
		*(int32_t *)(v6 + 88) = *(int32_t *)(v8 + 88);
		// branch -> 0x7dd44
	} else {
		// 0x7dd28
		*(int32_t *)(v6 + 84) = *(int32_t *)(v8 + 8);
		*(int32_t *)(v6 + 88) = *(int32_t *)(v8 + 12);
		// branch -> 0x7dd44
	}
	int32_t v9 = v6; // 0x7dd68
	if (*(int32_t *)(v6 + 104) == *(int32_t *)(v6 + 100)) {
		// 0x7dd54
		function_7bc44(g36);
		v9 = g33;
		// branch -> 0x7dd5c
	}
	int32_t *v10 = (int32_t *)(v9 + 120); // 0x7dd5c
	*v10 = *v10 + 1;
	return 0;
}

// Address range: 0x7dd88 - 0x7df1c
int32_t function_7dd88(int32_t a1)
{
	g32 = a1;
	g35 = *(int32_t *)(g23 - 0x767c);
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7dd9c
	g36 = v1;
	int32_t v2 = a1; // 0x7ddd8
	if (a1 >= 200) {
		// 0x7ddac
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d44));
		v1 = g36;
		v2 = g32;
		// branch -> 0x7ddb8
	}
	int32_t v3 = 232 * v2; // 0x7ddb8
	g33 = v3;
	int32_t v4 = v3 + v1 + 224; // 0x7ddc0
	g31 = v4;
	int32_t v5 = v4; // 0x7dde0
	if (*(int32_t *)v4 == 0) {
		// 0x7ddcc
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5d48));
		v3 = g33;
		v1 = g36;
		v5 = g31;
		// branch -> 0x7dde0
	}
	int32_t v6 = v1 + v3;                // 0x7dde4
	int32_t *v7 = (int32_t *)(v6 + 144); // 0x7dde8
	int32_t v8 = *v7;                    // 0x7dde8
	int32_t v9;
	if (v8 == *(int32_t *)(*(int32_t *)v5 + 148)) {
		int32_t v10 = *(int32_t *)(v6 + 32); // 0x7de00
		int32_t v11 = *(int32_t *)g35;       // 0x7de14
		*(int16_t *)(v11 + 2 * *(int32_t *)(v6 + 36) + 224 * v10) = 0;
		int32_t *v12 = (int32_t *)(v6 + 32); // 0x7de28
		*v12 = *(int32_t *)(v6 + 116) + *v12;
		int32_t *v13 = (int32_t *)(v6 + 36); // 0x7de38
		*v13 = *(int32_t *)(v6 + 120) + *v13;
		int32_t v14 = v6 + 32;               // 0x7de48
		int32_t v15 = v6 + 36;               // 0x7de4c
		int32_t v16 = *(int32_t *)v15;       // 0x7de4c
		int32_t v17 = 224 * *(int32_t *)v14; // 0x7de50
		int32_t v18 = *(int32_t *)g35;       // 0x7de54
		*(int16_t *)(v18 + 2 * v16 + v17) = (int16_t)(g32 + 1);
		if (*(char *)(v6 + 192) != 0) {
			int32_t v19 = (int32_t) * (char *)(v6 + 219); // 0x7de70
			function_cb984(v19, *(int32_t *)v14, *(int32_t *)v15);
			// branch -> 0x7de80
		}
		// 0x7de80
		function_7c124(g32, *(int32_t *)(g33 + g36 + 72));
		v9 = 1;
		// branch -> 0x7deec
	} else {
		// 0x7de98
		if (*(int32_t *)(v6 + 96) == 0) {
			// 0x7dea8
			*v7 = v8 + 1;
			int32_t *v20 = (int32_t *)(v6 + 136); // 0x7deb0
			*v20 = *(int32_t *)(v6 + 64) + *v20;
			int32_t *v21 = (int32_t *)(v6 + 140); // 0x7dec0
			*v21 = *(int32_t *)(v6 + 68) + *v21;
			*(int32_t *)(v6 + 56) = *(int32_t *)(v6 + 136) / 16;
			*(int32_t *)(v6 + 60) = *(int32_t *)(v6 + 140) / 16;
			v9 = 0;
			// branch -> 0x7deec
		} else {
			v9 = 0;
		}
	}
	// 0x7deec
	g31 = v9;
	int32_t result; // 0x7df0c
	if (*(char *)(g33 + g36 + 192) != 0) {
		// 0x7defc
		function_7dbf0(g32);
		result = g31;
		// branch -> 0x7df04
	} else {
		result = v9;
	}
	// 0x7df04
	return result;
}

// Address range: 0x7df1c - 0x7e080
int32_t function_7df1c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7df24
	g36 = v1;
	g33 = a1;
	int32_t v2 = a1; // 0x7df74
	if (a1 >= 200) {
		// 0x7df48
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d4c));
		v1 = g36;
		v2 = g33;
		// branch -> 0x7df54
	}
	int32_t v3 = 232 * v2; // 0x7df54
	g35 = v3;
	int32_t v4 = v3 + v1 + 224; // 0x7df5c
	g32 = v4;
	int32_t v5 = v4; // 0x7df7c
	if (*(int32_t *)v4 == 0) {
		// 0x7df68
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5d50));
		v3 = g35;
		v1 = g36;
		v5 = g32;
		// branch -> 0x7df7c
	}
	int32_t v6 = v1 + v3;                // 0x7df80
	int32_t *v7 = (int32_t *)(v6 + 144); // 0x7df84
	int32_t v8 = *v7;                    // 0x7df84
	int32_t v9;
	if (v8 == *(int32_t *)(*(int32_t *)v5 + 148)) {
		int32_t v10 = *(int32_t *)(v6 + 116);                 // 0x7df9c
		int32_t v11 = *(int32_t *)*(int32_t *)(g23 - 0x767c); // 0x7dfac
		*(int16_t *)(v11 + 2 * *(int32_t *)(v6 + 120) + 224 * v10) = 0;
		if (*(char *)(v6 + 192) != 0) {
			int32_t v12 = (int32_t) * (char *)(v6 + 219); // 0x7dfc8
			function_cb984(v12, *(int32_t *)(v6 + 32), *(int32_t *)(v6 + 36));
			// branch -> 0x7dfd8
		}
		// 0x7dfd8
		function_7c124(g33, *(int32_t *)(g35 + g36 + 72));
		v9 = 1;
		// branch -> 0x7e044
	} else {
		// 0x7dff0
		if (*(int32_t *)(v6 + 96) == 0) {
			// 0x7e000
			*v7 = v8 + 1;
			int32_t *v13 = (int32_t *)(v6 + 136); // 0x7e008
			*v13 = *(int32_t *)(v6 + 64) + *v13;
			int32_t *v14 = (int32_t *)(v6 + 140); // 0x7e018
			*v14 = *(int32_t *)(v6 + 68) + *v14;
			*(int32_t *)(v6 + 56) = *(int32_t *)(v6 + 136) / 16;
			*(int32_t *)(v6 + 60) = *(int32_t *)(v6 + 140) / 16;
			v9 = 0;
			// branch -> 0x7e044
		} else {
			v9 = 0;
		}
	}
	// 0x7e044
	g32 = v9;
	int32_t result; // 0x7e064
	if (*(char *)(g35 + g36 + 192) != 0) {
		// 0x7e054
		function_7dbf0(g33);
		result = g32;
		// branch -> 0x7e05c
	} else {
		result = v9;
	}
	// 0x7e05c
	return result;
}

// Address range: 0x7e080 - 0x7e228
int32_t function_7e080(int32_t a1)
{
	g32 = a1;
	g35 = *(int32_t *)(g23 - 0x767c);
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7e094
	g36 = v1;
	int32_t v2 = a1; // 0x7e0d0
	if (a1 >= 200) {
		// 0x7e0a4
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d54));
		v1 = g36;
		v2 = g32;
		// branch -> 0x7e0b0
	}
	int32_t v3 = 232 * v2; // 0x7e0b0
	g33 = v3;
	int32_t v4 = v3 + v1 + 224; // 0x7e0b8
	g31 = v4;
	int32_t v5 = v4; // 0x7e0d8
	if (*(int32_t *)v4 == 0) {
		// 0x7e0c4
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5d58));
		v3 = g33;
		v1 = g36;
		v5 = g31;
		// branch -> 0x7e0d8
	}
	int32_t v6 = v1 + v3;                // 0x7e0dc
	int32_t *v7 = (int32_t *)(v6 + 144); // 0x7e0e0
	int32_t v8 = *v7;                    // 0x7e0e0
	int32_t v9;
	if (v8 == *(int32_t *)(*(int32_t *)v5 + 148)) {
		int32_t v10 = *(int32_t *)(v6 + 32); // 0x7e0f8
		int32_t v11 = *(int32_t *)g35;       // 0x7e10c
		*(int16_t *)(v11 + 2 * *(int32_t *)(v6 + 36) + 224 * v10) = 0;
		*(int32_t *)(v6 + 32) = *(int32_t *)(v6 + 116);
		*(int32_t *)(v6 + 36) = *(int32_t *)(v6 + 120);
		int32_t v12 = *(int32_t *)(v6 + 132) + 112 * *(int32_t *)(v6 + 128); // 0x7e144
		char *v13 = (char *)(*(int32_t *)*(int32_t *)(g23 - 0x779c) + v12);  // 0x7e148
		*v13 = *v13 & -17;
		int32_t v14 = v6 + 32;               // 0x7e154
		int32_t v15 = v6 + 36;               // 0x7e158
		int32_t v16 = *(int32_t *)v15;       // 0x7e158
		int32_t v17 = 224 * *(int32_t *)v14; // 0x7e15c
		int32_t v18 = *(int32_t *)g35;       // 0x7e160
		*(int16_t *)(v18 + 2 * v16 + v17) = (int16_t)(g32 + 1);
		if (*(char *)(v6 + 192) != 0) {
			int32_t v19 = *(int32_t *)v14; // 0x7e180
			int32_t v20 = *(int32_t *)v15; // 0x7e184
			function_cb984((int32_t) * (char *)(v6 + 219), v19, v20);
			// branch -> 0x7e18c
		}
		// 0x7e18c
		function_7c124(g32, *(int32_t *)(g33 + g36 + 72));
		v9 = 1;
		// branch -> 0x7e1f8
	} else {
		// 0x7e1a4
		if (*(int32_t *)(v6 + 96) == 0) {
			// 0x7e1b4
			*v7 = v8 + 1;
			int32_t *v21 = (int32_t *)(v6 + 136); // 0x7e1bc
			*v21 = *(int32_t *)(v6 + 64) + *v21;
			int32_t *v22 = (int32_t *)(v6 + 140); // 0x7e1cc
			*v22 = *(int32_t *)(v6 + 68) + *v22;
			*(int32_t *)(v6 + 56) = *(int32_t *)(v6 + 136) / 16;
			*(int32_t *)(v6 + 60) = *(int32_t *)(v6 + 140) / 16;
			v9 = 0;
			// branch -> 0x7e1f8
		} else {
			v9 = 0;
		}
	}
	// 0x7e1f8
	g31 = v9;
	int32_t result; // 0x7e218
	if (*(char *)(g33 + g36 + 192) != 0) {
		// 0x7e208
		function_7dbf0(g32);
		result = g31;
		// branch -> 0x7e210
	} else {
		result = v9;
	}
	// 0x7e210
	return result;
}

// Address range: 0x7e228 - 0x7e3a4
int32_t function_7e228(int32_t result, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	// 0x7e228
	g37 = a2;
	int32_t v1 = g10; // 0x7e22c
	int32_t v2 = g37; // 0x7e230
	g30 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0x7e234
	g35 = v3;
	g29 = result;
	g31 = a3;
	g32 = a4;
	g33 = a5;
	int32_t v4 = v2; // 0x7e284
	if (v2 >= 200) {
		// 0x7e258
		result = app_fatal(*(int32_t *)(g23 - 0x5d5c));
		v3 = g35;
		v4 = g30;
		// branch -> 0x7e264
	}
	int32_t v5 = 232 * v4; // 0x7e264
	g28 = v5;
	int32_t v6 = v5 + v3 + 224; // 0x7e26c
	g27 = v6;
	if (*(int32_t *)v6 == 0) {
		// 0x7e278
		g37 = v4;
		result = app_fatal(*(int32_t *)(g23 - 0x5d60));
		v5 = g28;
		v3 = g35;
		// branch -> 0x7e28c
	}
	int32_t result2 = v3 + v5;  // 0x7e28c
	int32_t v7 = result2 + 152; // 0x7e290
	g36 = v7;
	if (*(int32_t *)v7 < 64) {
		// 0x7e390
		g10 = v1;
		return result;
	}
	// 0x7e29c
	if (*(char *)*(int32_t *)g27 == 32) {
		// 0x7e2ac
		if (*(char *)(result2 + 8) == 2) {
			// 0x7e390
			g10 = v1;
			return result2;
		}
	}
	// 0x7e2bc
	g37 = 100;
	int32_t v8 = random(4);     // 0x7e2c4
	int32_t v9 = g28 + g35 + 4; // 0x7e2cc
	g35 = v9;
	if (*(int32_t *)v9 == 15) {
		// 0x7e2dc
		v8 = 0;
		// branch -> 0x7e2e0
	}
	// 0x7e2e0
	g27 = v8;
	int32_t v10 = 0;                             // bp-56
	int32_t result3 = function_875c8(g30, &v10); // 0x7e2e8
	if (result3 == 0) {
		// 0x7e2f4
		if (g27 < g31) {
			// 0x7e2fc
			g37 = 1 - g32 + g33;
			int32_t v11 = g32 + random(5); // 0x7e30c
			int32_t *v12 = (int32_t *)g36; // 0x7e310
			int32_t v13 = 64 * v11;        // 0x7e314
			*v12 = *v12 - v13;
			int32_t v14 = *(int32_t *)g35; // 0x7e360
			if (*(int32_t *)g36 > 63) {
				// 0x7e360
				result = function_7d044(g30, g29, v13);
				if (v14 == 15) {
					// 0x7e36c
					*(int32_t *)g35 = 15;
					// branch -> 0x7e390
				}
			} else {
				// 0x7e32c
				result = M2MStartKill(g29, g30, v13);
				if (v14 == 15) {
					// 0x7e338
					*(int32_t *)g35 = 15;
					// branch -> 0x7e390
				}
			}
			// 0x7e390
			g10 = v1;
			return result;
		}
	}
	// 0x7e390
	g10 = v1;
	return result3;
}

// Address range: 0x7e3a4 - 0x7e948
int32_t function_7e3a4(int32_t result, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g10;    // 0x7e3a8
	int32_t v2 = result; // 0x7e3ac
	g26 = v2;
	g35 = *(int32_t *)(g23 - 0x7664);
	g32 = *(int32_t *)(g23 - 0x77a8);
	g36 = a2;
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0x7e3c0
	g28 = v3;
	g25 = a3;
	g17 = a4;
	g16 = a5;
	int32_t v4 = v2; // 0x7e40c
	if (v2 >= 200) {
		// 0x7e3dc
		g37 = v2;
		result = app_fatal(*(int32_t *)(g23 - 0x5d64));
		v3 = g28;
		v4 = g26;
		// branch -> 0x7e3e8
	}
	int32_t v5 = 232 * v4; // 0x7e3e8
	g29 = v5;
	int32_t v6 = v5 + v3 + 224; // 0x7e3f0
	g21 = v6;
	if (*(int32_t *)v6 == 0) {
		// 0x7e400
		g37 = v4;
		result = app_fatal(*(int32_t *)(g23 - 0x5d68));
		v5 = g29;
		v3 = g28;
		// branch -> 0x7e414
	}
	int32_t v7 = v3 + v5 + 160; // 0x7e418
	g20 = v7;
	if (__asm_rlwinm_(*(int32_t *)v7, 0, 27, 27) != 0) {
		// 0x7e428
		result = function_7e228(g26, g36, g25, g17, g16);
		// branch -> 0x7e934
		// 0x7e934
		g10 = v1;
		return result;
	}
	int32_t v8 = 0x55ec * g36; // 0x7e444
	g33 = v8;
	int32_t v9 = g32 + v8;  // 0x7e448
	int32_t v10 = v9 + 404; // 0x7e44c
	g31 = v10;
	if (*(int32_t *)v10 >= 64) {
		// 0x7e458
		g30 = v9;
		if (*(char *)(v9 + 313) == 0) {
			// 0x7e468
			if (*(char *)(v9 + 284) % 2 == 0) {
				int32_t v11 = v9 + 56;        // 0x7e478
				int32_t v12 = g29 + g28 + 32; // 0x7e47c
				g18 = v11;
				g34 = *(int32_t *)v12 - *(int32_t *)v11;
				int32_t v13 = g30 + 60;       // 0x7e490
				int32_t v14 = g29 + g28 + 36; // 0x7e494
				g24 = v14;
				g27 = abs();
				g19 = v13;
				g34 = *(int32_t *)v14 - *(int32_t *)v13;
				int32_t v15 = abs(); // 0x7e4a4
				result = v15;
				if (g27 > 1) {
					// 0x7e934
					g10 = v1;
					return result;
				}
				// 0x7e4b0
				if (v15 <= 1) {
					// 0x7e4b8
					g37 = 100;
					int32_t v16 = random(98);      // 0x7e4c0
					int32_t v17 = g30;             // 0x7e4c4
					int32_t v18 = g29 + g28 + 196; // 0x7e4d8
					g27 = v18;
					char *v19 = (char *)(v17 + 436);                                                                                               // 0x7e4e0
					int32_t *v20 = (int32_t *)(v17 + 368);                                                                                         // 0x7e4e8
					int32_t v21 = *(int32_t *)(v17 + 0x554c);                                                                                      // 0x7e4f0
					uint64_t v22 = 0x66666667 * (int64_t)*v20;                                                                                     // 0x7e4f4
					int32_t v23 = v22 / 0x100000000;                                                                                               // 0x7e4f4
					int32_t v24 = *(int32_t *)(v17 + 0x5558);                                                                                      // 0x7e4fc
					int32_t v25 = g25 + 30 - v21 - (int32_t)(v22 / 0x8000000000000000) - (v23 & -0x80000000 | (int32_t)(v22 / 0x200000000)) - v24; // 0x7e528
					int32_t v26 = 2 * ((int32_t) * (char *)v18 - (int32_t)*v19) + v25;                                                             // 0x7e530
					int32_t v27 = v26 < 15 ? 15 : v26;
					g30 = v27;
					unsigned char v28 = *(char *)*(int32_t *)(g23 - 0x77e4); // 0x7e548
					int32_t v29 = v27;                                       // 0x7e568
					if (v28 == 14) {
						// 0x7e554
						if (v27 <= 19) {
							// 0x7e55c
							g30 = 20;
							v29 = 20;
							// branch -> 0x7e560
						} else {
							v29 = v27;
						}
					}
					int32_t v30 = v29; // 0x7e57c
					if (v28 == 15) {
						// 0x7e568
						if (v29 <= 24) {
							// 0x7e570
							g30 = 25;
							v30 = 25;
							// branch -> 0x7e574
						} else {
							v30 = v29;
						}
					}
					// 0x7e574
					if (v28 == 16) {
						// 0x7e57c
						if (v30 <= 29) {
							// 0x7e584
							g30 = 30;
							// branch -> 0x7e588
						}
					}
					int32_t v31 = g32;       // 0x7e588
					int32_t v32 = g33;       // 0x7e588
					int32_t v33 = v32 + v31; // 0x7e588
					g25 = v33;
					int32_t v34 = *(int32_t *)v33; // 0x7e58c
					int32_t v35;                   // r0
					int32_t v36;                   // r4
					int32_t v37;
					int32_t v38;     // 0x7e600
					int32_t result2; // 0x7e618
					int32_t v39;     // 0x7e654
					int32_t v40;
					int32_t v41;     // 0x7e6a8
					int32_t v42;     // 0x7e6ac
					int32_t v43;     // 0x7e754
					int32_t v44;     // 0x7e790
					int32_t v45;     // 0x7e7a4
					int32_t v46;     // 0x7e7f4
					int32_t v47;     // 0x7e7f8
					int32_t v48;     // 0x7e840
					int32_t v49;     // 0x7e854
					int32_t v50;     // 0x7e85c
					int32_t v51;     // 0x7e878
					int32_t v52;     // 0x7e8b4
					int32_t v53;     // 0x7e618
					int32_t result3; // 0x7e63c
					int32_t v54;     // 0x7e684
					int32_t v55;     // 0x7e6b4
					int32_t v56;     // 0x7e6c4
					int32_t *v57;    // 0x7e6d8
					int32_t *v58;    // 0x7e704
					int32_t v59;     // 0x7e714
					int32_t v60;     // 0x7e754
					int32_t *v61;    // 0x7e788
					int32_t v62;     // 0x7e7a4
					int32_t v63;     // 0x7e7cc
					int32_t *v64;    // 0x7e840
					int32_t v65;     // 0x7e8c4
					int32_t v66;     // 0x7e5c8
					int32_t v67;     // 0x7e5f4
					int32_t v68;     // 0x7e628
					int32_t v69;     // 0x7e62c
					int32_t v70;     // 0x7e658
					int32_t v71;     // 0x7e670
					int32_t v72;     // 0x7e680
					int32_t *v73;    // 0x7e6b4
					int32_t v74;     // 0x7e6dc
					int32_t *v75;    // 0x7e714
					int32_t v76;     // 0x7e718
					int32_t v77;     // 0x7e750
					int32_t v78;     // 0x7e754
					int32_t v79;     // 0x7e768
					int32_t *v80;    // 0x7e798
					int32_t v81;     // 0x7e7bc
					int32_t v82;     // 0x7e7c0
					int32_t *v83;    // 0x7e7c8
					int32_t *v84;    // 0x7e830
					int32_t v85;     // 0x7e83c
					int32_t v86;     // 0x7e8d8
					int32_t v87;     // 0x7e8e0
					uint32_t v88;    // 0x7e6b4
					int32_t v89;     // 0x7e844
					int32_t v90;     // 0x7e8e8
					int32_t v91;     // 0x7e918
					int32_t v92;     // 0x7e8cc
					int32_t v93;     // 0x7e8d4
					if (v34 != 0) {
						// 0x7e598
						if (v34 != 4) {
							result2 = 100;
							// 0x7e5c4
							v66 = v31 + v32;
							int32_t v94 = (int32_t) * (char *)v18 - (int32_t)*v19; // 0x7e5e4
							v67 = *v20 + *(int32_t *)(v66 + 392) + -2 * v94;
							v38 = v67;
							if (v67 <= 0xffffffff) {
								// 0x7e5fc
								v38 = 0;
								// branch -> 0x7e600
							}
							// 0x7e600
							v53 = v38;
							if (v38 >= 101) {
								// 0x7e608
								v53 = 100;
								// branch -> 0x7e60c
							}
							// 0x7e60c
							if (v16 >= g30) {
								// 0x7e934
								g10 = v1;
								return result2;
							}
							// 0x7e618
							if (result2 < v53) {
								// 0x7e620
								v68 = *(int32_t *)v12;
								v69 = *(int32_t *)g24;
								g37 = GetDirection(*(int32_t *)g18, *(int32_t *)g19, v68, v69);
								result3 = function_a5074(g36);
								// branch -> 0x7e934
								// 0x7e934
								g10 = v1;
								return result3;
							}
							// 0x7e644
							if (*(char *)*(int32_t *)g21 == 3) {
								// 0x7e654
								v39 = g23;
								v70 = *(int32_t *)*(int32_t *)(v39 - 0x77ac);
								if (g36 == v70) {
									// 0x7e664
									v35 = -1;
									v71 = *(int32_t *)*(int32_t *)(v39 - 0x7668);
									if (v71 >= 1) {
										// 0x7e680
										v40 = g35;
										v42 = v71;
										v41 = *(int32_t *)(v39 - 0x7660);
										// branch -> 0x7e680
										while (true) {
											// 0x7e680
											v72 = *(int32_t *)v41;
											v54 = 180 * v72;
											if (*(int32_t *)(v54 + v40) == 13) {
											lab_0x7e694:
												// 0x7e694
												if (v70 == *(int32_t *)(v54 + 120 + v40)) {
													// 0x7e6a4
													v35 = v72;
													// branch -> 0x7e6a8
												}
											}
										lab_0x7e6a8:;
											int32_t v95 = v42 - 1; // 0x7e6ac
											if (v95 == 0) {
												// break -> 0x7e6b0
												break;
											}
											v42 = v95;
											v41 += 4;
											// continue -> 0x7e680
										}
										// 0x7e6b0
										// branch -> 0x7e6b0
									}
									// 0x7e6b0
									v55 = v66 + 408;
									v73 = (int32_t *)v55;
									v88 = *v73;
									if (v88 >= 65) {
										// 0x7e6c0
										v56 = v66 + 400;
										v36 = v56;
										if (*(int32_t *)v56 >= 65) {
											// 0x7e6d0
											*v73 = v88 - 64;
											v57 = (int32_t *)g31;
											v74 = *(int32_t *)v55;
											if (*v57 > v74) {
												// 0x7e6e8
												*v57 = v74;
												if (v35 >= 0) {
													// 0x7e6f4
													*(int32_t *)(g35 + 180 * v35 + 148) = *(int32_t *)g31;
													// branch -> 0x7e704
												}
											}
											// 0x7e704
											v58 = (int32_t *)v36;
											*v58 = *v58 - 64;
											v59 = g33 + g32 + 396;
											v75 = (int32_t *)v59;
											v76 = *(int32_t *)v36;
											if (*v75 > v76) {
												// 0x7e724
												*v75 = v76;
												if (v35 >= 0) {
													// 0x7e730
													*(int32_t *)(g35 + 180 * v35 + 152) = *(int32_t *)v59;
													// branch -> 0x7e740
												}
											}
										}
									}
								}
							}
							// 0x7e740
							g37 = 64 * (g16 - g17 + 1);
							v77 = random(99);
							v43 = g32;
							v60 = g33;
							v78 = v60 + v43;
							v79 = 64 * *(int32_t *)(v78 + 0x556c) + v77 + 64 * g17;
							v37 = v79;
							v44 = v79;
							if (v79 <= 63) {
								// 0x7e774
								v37 = 64;
								v44 = 64;
								// branch -> 0x7e778
							}
							// 0x7e778
							g30 = v37;
							v62 = v60;
							v45 = v43;
							if (g36 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
								// 0x7e788
								v61 = (int32_t *)g31;
								*v61 = *v61 - v44;
								v80 = (int32_t *)(v78 + 396);
								*v80 = *v80 - g30;
								v62 = g33;
								v45 = g32;
								// branch -> 0x7e7a4
							}
							// 0x7e7a4
							if (__asm_rlwinm_(*(int32_t *)(v45 + v62 + 0x5568), 0, 5, 5) == 0) {
								// 0x7e800
								if (__asm_rlwinm_(*(int32_t *)g20, 0, 19, 19) == 0) {
									// 0x7e80c
									if (*(char *)*(int32_t *)g21 == 50) {
										// 0x7e81c
										if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
											// 0x7e82c
											v84 = (int32_t *)(g29 + g28 + 152);
											*v84 = g30 + *v84;
											// branch -> 0x7e83c
										}
									}
								}
								// 0x7e83c
								v85 = g33 + g32;
								v48 = g31;
								v64 = (int32_t *)v48;
								v89 = *(int32_t *)(v85 + 408);
								v50 = v48;
								if (*v64 > v89) {
									// 0x7e850
									*v64 = v89;
									v49 = v85;
									*(int32_t *)(v49 + 396) = *(int32_t *)(v49 + 400);
									v50 = g31;
									// branch -> 0x7e85c
								}
								// 0x7e85c
								v51 = g36;
								if (*(int32_t *)v50 > 63) {
									// 0x7e878
									g38 = 0;
									result = function_a579c(v51, g30);
									if (__asm_rlwinm_(*(int32_t *)g20, 0, 24, 24) != 0) {
										// 0x7e894
										if (*(int32_t *)g25 != 7) {
											// 0x7e8a0
											g38 = 1;
											function_a579c(g36, 0);
											// branch -> 0x7e8b0
										}
										// 0x7e8b0
										v52 = g23;
										v65 = 4 * *(int32_t *)(g29 + g28 + 72);
										v92 = *(int32_t *)(v65 + *(int32_t *)(v52 - 0x71ec));
										v93 = *(int32_t *)(*(int32_t *)(v52 - 0x71f0) + v65);
										v86 = v92 + *(int32_t *)g18;
										g30 = v86;
										v87 = v93 + *(int32_t *)g19;
										g29 = v87;
										v90 = function_a9df0(g36, v86, v87);
										result = v90;
										if (v90 != 0) {
											// 0x7e8f4
											*(int32_t *)g18 = g30;
											*(int32_t *)g19 = g29;
											function_a4250(g36, *(int32_t *)(g33 + g32 + 112));
											function_a5364(g36);
											v91 = *(int32_t *)(g23 - 0x7680);
											*(char *)(g29 + 112 * g30 + *(int32_t *)v91) = (char)(g36 + 1);
											result = SetPlayerOld(g36);
											// branch -> 0x7e934
										}
									}
								} else {
									// 0x7e868
									result = function_a640c(v51, 0);
									// branch -> 0x7e934
								}
								// 0x7e934
								g10 = v1;
								return result;
							}
							// 0x7e7b4
							g37 = 3;
							v81 = random(99);
							v82 = g29 + g28;
							v83 = (int32_t *)(v82 + 152);
							v63 = 64 * (v81 + 1);
							g38 = v63;
							*v83 = *v83 - v63;
							v46 = g26;
							v47 = g36;
							if (*(int32_t *)(v82 + 152) > 63) {
								// 0x7e7f4
								function_7cbac(v46, v47);
								// branch -> 0x7e800
							} else {
								// 0x7e7e4
								M_StartKill(v46, v47);
								// branch -> 0x7e800
							}
							// 0x7e800
							if (__asm_rlwinm_(*(int32_t *)g20, 0, 19, 19) == 0) {
								// 0x7e80c
								if (*(char *)*(int32_t *)g21 == 50) {
									// 0x7e81c
									if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
										// 0x7e82c
										v84 = (int32_t *)(g29 + g28 + 152);
										*v84 = g30 + *v84;
										// branch -> 0x7e83c
									}
								}
							}
							// 0x7e83c
							v85 = g33 + g32;
							v48 = g31;
							v64 = (int32_t *)v48;
							v89 = *(int32_t *)(v85 + 408);
							v50 = v48;
							if (*v64 > v89) {
								// 0x7e850
								*v64 = v89;
								v49 = v85;
								*(int32_t *)(v49 + 396) = *(int32_t *)(v49 + 400);
								v50 = g31;
								// branch -> 0x7e85c
							}
							// 0x7e85c
							v51 = g36;
							if (*(int32_t *)v50 > 63) {
								// 0x7e878
								g38 = 0;
								result = function_a579c(v51, g30);
								if (__asm_rlwinm_(*(int32_t *)g20, 0, 24, 24) != 0) {
									// 0x7e894
									if (*(int32_t *)g25 != 7) {
										// 0x7e8a0
										g38 = 1;
										function_a579c(g36, 0);
										// branch -> 0x7e8b0
									}
									// 0x7e8b0
									v52 = g23;
									v65 = 4 * *(int32_t *)(g29 + g28 + 72);
									v92 = *(int32_t *)(v65 + *(int32_t *)(v52 - 0x71ec));
									v93 = *(int32_t *)(*(int32_t *)(v52 - 0x71f0) + v65);
									v86 = v92 + *(int32_t *)g18;
									g30 = v86;
									v87 = v93 + *(int32_t *)g19;
									g29 = v87;
									v90 = function_a9df0(g36, v86, v87);
									result = v90;
									if (v90 != 0) {
										// 0x7e8f4
										*(int32_t *)g18 = g30;
										*(int32_t *)g19 = g29;
										function_a4250(g36, *(int32_t *)(g33 + g32 + 112));
										function_a5364(g36);
										v91 = *(int32_t *)(g23 - 0x7680);
										*(char *)(g29 + 112 * g30 + *(int32_t *)v91) = (char)(g36 + 1);
										result = SetPlayerOld(g36);
										// branch -> 0x7e934
									}
								}
							} else {
								// 0x7e868
								result = function_a640c(v51, 0);
								// branch -> 0x7e934
							}
							// 0x7e934
							g10 = v1;
							return result;
						}
					}
					result2 = 100;
					if (*(char *)(v33 + 312) != 0) {
						// 0x7e5b0
						g37 = 100;
						v18 = g27;
						result2 = random(98);
						// branch -> 0x7e5c4
					}
					// 0x7e5c4
					result = result2;
					v66 = g32 + g33;
					int32_t v96 = (int32_t)*v19;                  // 0x7e5d8
					int32_t v97 = *v20 + *(int32_t *)(v66 + 392); // 0x7e5f0
					v67 = v97 + -2 * ((int32_t) * (char *)v18 - v96);
					v38 = v67;
					if (v67 <= 0xffffffff) {
						// 0x7e5fc
						v38 = 0;
						// branch -> 0x7e600
					}
					// 0x7e600
					v53 = v38;
					if (v38 >= 101) {
						// 0x7e608
						v53 = 100;
						// branch -> 0x7e60c
					}
					// 0x7e60c
					if (v16 < g30) {
						// 0x7e618
						if (result2 < v53) {
							// 0x7e620
							v68 = *(int32_t *)v12;
							v69 = *(int32_t *)g24;
							g37 = GetDirection(*(int32_t *)g18, *(int32_t *)g19, v68, v69);
							result3 = function_a5074(g36);
							// branch -> 0x7e934
							// 0x7e934
							g10 = v1;
							return result3;
						}
						// 0x7e644
						if (*(char *)*(int32_t *)g21 == 3) {
							// 0x7e654
							v39 = g23;
							v70 = *(int32_t *)*(int32_t *)(v39 - 0x77ac);
							if (g36 == v70) {
								// 0x7e664
								v35 = -1;
								v71 = *(int32_t *)*(int32_t *)(v39 - 0x7668);
								if (v71 >= 1) {
									// 0x7e680
									v40 = g35;
									v42 = v71;
									v41 = *(int32_t *)(v39 - 0x7660);
									// branch -> 0x7e680
									while (true) {
										// 0x7e680
										v72 = *(int32_t *)v41;
										v54 = 180 * v72;
										if (*(int32_t *)(v54 + v40) == 13) {
											goto lab_0x7e694;
										}
										goto lab_0x7e6a8;
									}
								}
								// 0x7e6b0
								v55 = v66 + 408;
								v73 = (int32_t *)v55;
								v88 = *v73;
								if (v88 >= 65) {
									// 0x7e6c0
									v56 = v66 + 400;
									v36 = v56;
									if (*(int32_t *)v56 >= 65) {
										// 0x7e6d0
										*v73 = v88 - 64;
										v57 = (int32_t *)g31;
										v74 = *(int32_t *)v55;
										if (*v57 > v74) {
											// 0x7e6e8
											*v57 = v74;
											if (v35 >= 0) {
												// 0x7e6f4
												*(int32_t *)(g35 + 180 * v35 + 148) = *(int32_t *)g31;
												// branch -> 0x7e704
											}
										}
										// 0x7e704
										v58 = (int32_t *)v36;
										*v58 = *v58 - 64;
										v59 = g33 + g32 + 396;
										v75 = (int32_t *)v59;
										v76 = *(int32_t *)v36;
										if (*v75 > v76) {
											// 0x7e724
											*v75 = v76;
											if (v35 >= 0) {
												// 0x7e730
												*(int32_t *)(g35 + 180 * v35 + 152) = *(int32_t *)v59;
												// branch -> 0x7e740
											}
										}
									}
								}
							}
						}
						// 0x7e740
						g37 = 64 * (g16 - g17 + 1);
						v77 = random(99);
						v43 = g32;
						v60 = g33;
						v78 = v60 + v43;
						v79 = 64 * *(int32_t *)(v78 + 0x556c) + v77 + 64 * g17;
						v37 = v79;
						v44 = v79;
						if (v79 <= 63) {
							// 0x7e774
							v37 = 64;
							v44 = 64;
							// branch -> 0x7e778
						}
						// 0x7e778
						g30 = v37;
						v62 = v60;
						v45 = v43;
						if (g36 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
							// 0x7e788
							v61 = (int32_t *)g31;
							*v61 = *v61 - v44;
							v80 = (int32_t *)(v78 + 396);
							*v80 = *v80 - g30;
							v62 = g33;
							v45 = g32;
							// branch -> 0x7e7a4
						}
						// 0x7e7a4
						if (__asm_rlwinm_(*(int32_t *)(v45 + v62 + 0x5568), 0, 5, 5) == 0) {
							// 0x7e800
							if (__asm_rlwinm_(*(int32_t *)g20, 0, 19, 19) == 0) {
								// 0x7e80c
								if (*(char *)*(int32_t *)g21 == 50) {
									// 0x7e81c
									if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
										// 0x7e82c
										v84 = (int32_t *)(g29 + g28 + 152);
										*v84 = g30 + *v84;
										// branch -> 0x7e83c
									}
								}
							}
							// 0x7e83c
							v85 = g33 + g32;
							v48 = g31;
							v64 = (int32_t *)v48;
							v89 = *(int32_t *)(v85 + 408);
							v50 = v48;
							if (*v64 > v89) {
								// 0x7e850
								*v64 = v89;
								v49 = v85;
								*(int32_t *)(v49 + 396) = *(int32_t *)(v49 + 400);
								v50 = g31;
								// branch -> 0x7e85c
							}
							// 0x7e85c
							v51 = g36;
							if (*(int32_t *)v50 > 63) {
								// 0x7e878
								g38 = 0;
								result = function_a579c(v51, g30);
								if (__asm_rlwinm_(*(int32_t *)g20, 0, 24, 24) != 0) {
									// 0x7e894
									if (*(int32_t *)g25 != 7) {
										// 0x7e8a0
										g38 = 1;
										function_a579c(g36, 0);
										// branch -> 0x7e8b0
									}
									// 0x7e8b0
									v52 = g23;
									v65 = 4 * *(int32_t *)(g29 + g28 + 72);
									v92 = *(int32_t *)(v65 + *(int32_t *)(v52 - 0x71ec));
									v93 = *(int32_t *)(*(int32_t *)(v52 - 0x71f0) + v65);
									v86 = v92 + *(int32_t *)g18;
									g30 = v86;
									v87 = v93 + *(int32_t *)g19;
									g29 = v87;
									v90 = function_a9df0(g36, v86, v87);
									result = v90;
									if (v90 != 0) {
										// 0x7e8f4
										*(int32_t *)g18 = g30;
										*(int32_t *)g19 = g29;
										function_a4250(g36, *(int32_t *)(g33 + g32 + 112));
										function_a5364(g36);
										v91 = *(int32_t *)(g23 - 0x7680);
										*(char *)(g29 + 112 * g30 + *(int32_t *)v91) = (char)(g36 + 1);
										result = SetPlayerOld(g36);
										// branch -> 0x7e934
									}
								}
							} else {
								// 0x7e868
								result = function_a640c(v51, 0);
								// branch -> 0x7e934
							}
							// 0x7e934
							g10 = v1;
							return result;
						}
						// 0x7e7b4
						g37 = 3;
						v81 = random(99);
						v82 = g29 + g28;
						v83 = (int32_t *)(v82 + 152);
						v63 = 64 * (v81 + 1);
						g38 = v63;
						*v83 = *v83 - v63;
						v46 = g26;
						v47 = g36;
						if (*(int32_t *)(v82 + 152) > 63) {
							// 0x7e7f4
							function_7cbac(v46, v47);
							// branch -> 0x7e800
						} else {
							// 0x7e7e4
							M_StartKill(v46, v47);
							// branch -> 0x7e800
						}
						// 0x7e800
						if (__asm_rlwinm_(*(int32_t *)g20, 0, 19, 19) == 0) {
							// 0x7e80c
							if (*(char *)*(int32_t *)g21 == 50) {
								// 0x7e81c
								if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
									// 0x7e82c
									v84 = (int32_t *)(g29 + g28 + 152);
									*v84 = g30 + *v84;
									// branch -> 0x7e83c
								}
							}
						}
						// 0x7e83c
						v85 = g33 + g32;
						v48 = g31;
						v64 = (int32_t *)v48;
						v89 = *(int32_t *)(v85 + 408);
						v50 = v48;
						if (*v64 > v89) {
							// 0x7e850
							*v64 = v89;
							v49 = v85;
							*(int32_t *)(v49 + 396) = *(int32_t *)(v49 + 400);
							v50 = g31;
							// branch -> 0x7e85c
						}
						// 0x7e85c
						v51 = g36;
						if (*(int32_t *)v50 > 63) {
							// 0x7e878
							g38 = 0;
							result = function_a579c(v51, g30);
							if (__asm_rlwinm_(*(int32_t *)g20, 0, 24, 24) != 0) {
								// 0x7e894
								if (*(int32_t *)g25 != 7) {
									// 0x7e8a0
									g38 = 1;
									function_a579c(g36, 0);
									// branch -> 0x7e8b0
								}
								// 0x7e8b0
								v52 = g23;
								v65 = 4 * *(int32_t *)(g29 + g28 + 72);
								v92 = *(int32_t *)(v65 + *(int32_t *)(v52 - 0x71ec));
								v93 = *(int32_t *)(*(int32_t *)(v52 - 0x71f0) + v65);
								v86 = v92 + *(int32_t *)g18;
								g30 = v86;
								v87 = v93 + *(int32_t *)g19;
								g29 = v87;
								v90 = function_a9df0(g36, v86, v87);
								result = v90;
								if (v90 != 0) {
									// 0x7e8f4
									*(int32_t *)g18 = g30;
									*(int32_t *)g19 = g29;
									function_a4250(g36, *(int32_t *)(g33 + g32 + 112));
									function_a5364(g36);
									v91 = *(int32_t *)(g23 - 0x7680);
									*(char *)(g29 + 112 * g30 + *(int32_t *)v91) = (char)(g36 + 1);
									result = SetPlayerOld(g36);
									// branch -> 0x7e934
								}
							}
						} else {
							// 0x7e868
							result = function_a640c(v51, 0);
							// branch -> 0x7e934
						}
						// 0x7e934
						g10 = v1;
						return result;
					}
				}
				// 0x7e934
				g10 = v1;
				return result;
			}
		}
	}
	// 0x7e934
	g10 = v1;
	return result;
}

// Address range: 0x7e948 - 0x7eb24
int32_t function_7e948(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7e950
	g36 = v1;
	g35 = a1;
	int32_t v2 = a1; // 0x7e9a0
	if (a1 >= 200) {
		// 0x7e974
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d6c));
		v1 = g36;
		v2 = g35;
		// branch -> 0x7e980
	}
	int32_t v3 = 232 * v2; // 0x7e980
	g33 = v3;
	int32_t v4 = v3 + v1 + 224; // 0x7e988
	g32 = v4;
	int32_t v5 = v4; // 0x7e9a8
	if (*(int32_t *)v4 == 0) {
		// 0x7e994
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5d70));
		v5 = g32;
		// branch -> 0x7e9a8
	}
	// 0x7e9a8
	if (*(int32_t *)v5 == 0) {
		// 0x7e9b4
		g37 = g35;
		app_fatal(*(int32_t *)(g23 - 0x5d74));
		// branch -> 0x7e9c8
	}
	int32_t v6 = g33 + g36; // 0x7e9c8
	g36 = v6;
	unsigned char v7 = *(char *)(*(int32_t *)(v6 + 228) + 106); // 0x7e9d4
	int32_t v8 = v6;                                            // 0x7ea48
	int32_t result;
	int32_t v9;        // 0x7ea9c
	int32_t v10;       // 0x7eac4
	int32_t v11;       // 0x7eaf0
	unsigned char v12; // 0x7ea14
	unsigned char v13; // 0x7ea68
	unsigned char v14; // 0x7ea34
	unsigned char v15; // 0x7ea3c
	unsigned char v16; // 0x7ea40
	int32_t v17;       // 0x7ea48
	unsigned char v18; // 0x7ea88
	unsigned char v19; // 0x7ea90
	unsigned char v20; // 0x7ea94
	int32_t v21;       // 0x7ea9c
	if (*(int32_t *)(v6 + 104) == (int32_t)v7) {
		int32_t v22 = *(int32_t *)(v6 + 76);     // 0x7e9e0
		unsigned char v23 = *(char *)(v6 + 200); // 0x7e9e8
		unsigned char v24 = *(char *)(v6 + 201); // 0x7e9ec
		unsigned char v25 = *(char *)(v6 + 202); // 0x7e9f0
		function_7e3a4(g35, v22, (int32_t)v23, (int32_t)v24, (int32_t)v25);
		int32_t v26 = g36; // 0x7e9f8
		if (*(char *)(v26 + 156) != 24) {
			// 0x7ea04
			PlayEffect(g35, 0);
			v8 = g36;
			// branch -> 0x7ea10
		} else {
			v8 = v26;
		}
		// 0x7ea10
		v12 = *(char *)*(int32_t *)(v8 + 224);
		v9 = v8;
		if (v12 >= 60) {
			// 0x7ea20
			if (v12 <= 63) {
				// 0x7ea28
				if (*(int32_t *)(v8 + 104) == 9) {
					// 0x7ea34
					v14 = *(char *)(v8 + 200);
					v15 = *(char *)(v8 + 201);
					v16 = *(char *)(v8 + 202);
					v17 = *(int32_t *)(v8 + 76);
					function_7e3a4(g35, v17, (int32_t)v14 + 10, (int32_t)v15 - 2, (int32_t)v16 - 2);
					PlayEffect(g35, 0);
					v9 = g36;
					// branch -> 0x7ea64
				} else {
					v9 = v8;
				}
			} else {
				v9 = v8;
			}
		}
		// 0x7ea64
		v13 = *(char *)*(int32_t *)(v9 + 224);
		v10 = v9;
		if (v13 >= 76) {
			// 0x7ea74
			if (v13 <= 79) {
				// 0x7ea7c
				if (*(int32_t *)(v9 + 104) == 13) {
					// 0x7ea88
					v18 = *(char *)(v9 + 200);
					v19 = *(char *)(v9 + 201);
					v20 = *(char *)(v9 + 202);
					v21 = *(int32_t *)(v9 + 76);
					function_7e3a4(g35, v21, (int32_t)v18 - 20, (int32_t)v19 + 4, (int32_t)v20 + 4);
					PlayEffect(g35, 0);
					v10 = g36;
					// branch -> 0x7eab8
				} else {
					v10 = v9;
				}
			} else {
				v10 = v9;
			}
		}
		// 0x7eab8
		v11 = v10;
		if (*(char *)(v10 + 156) == 24) {
			// 0x7eac4
			if (*(int32_t *)(v10 + 104) == 1) {
				// 0x7ead0
				PlayEffect(g35, 0);
				v11 = g36;
				// branch -> 0x7eadc
			} else {
				v11 = v10;
			}
		}
		// 0x7eadc
		result = 0;
		if (*(int32_t *)(v11 + 104) == *(int32_t *)(v11 + 100)) {
			// 0x7eaec
			function_7c124(g35, *(int32_t *)(v11 + 72));
			result = 1;
			// branch -> 0x7eb04
		}
		// 0x7eb04
		return result;
	}
	// 0x7ea10
	v12 = *(char *)*(int32_t *)(v8 + 224);
	v9 = v8;
	if (v12 >= 60) {
		// 0x7ea20
		if (v12 <= 63) {
			// 0x7ea28
			if (*(int32_t *)(v8 + 104) == 9) {
				// 0x7ea34
				v14 = *(char *)(v8 + 200);
				v15 = *(char *)(v8 + 201);
				v16 = *(char *)(v8 + 202);
				v17 = *(int32_t *)(v8 + 76);
				function_7e3a4(g35, v17, (int32_t)v14 + 10, (int32_t)v15 - 2, (int32_t)v16 - 2);
				PlayEffect(g35, 0);
				v9 = g36;
				// branch -> 0x7ea64
			} else {
				v9 = v8;
			}
		} else {
			v9 = v8;
		}
		// 0x7ea64
		v13 = *(char *)*(int32_t *)(v9 + 224);
		v10 = v9;
		if (v13 >= 76) {
			// 0x7ea74
			if (v13 <= 79) {
				// 0x7ea7c
				if (*(int32_t *)(v9 + 104) == 13) {
					// 0x7ea88
					v18 = *(char *)(v9 + 200);
					v19 = *(char *)(v9 + 201);
					v20 = *(char *)(v9 + 202);
					v21 = *(int32_t *)(v9 + 76);
					function_7e3a4(g35, v21, (int32_t)v18 - 20, (int32_t)v19 + 4, (int32_t)v20 + 4);
					PlayEffect(g35, 0);
					v10 = g36;
					// branch -> 0x7eab8
				} else {
					v10 = v9;
				}
			} else {
				v10 = v9;
			}
		}
		// 0x7eab8
		v11 = v10;
		if (*(char *)(v10 + 156) == 24) {
			// 0x7eac4
			if (*(int32_t *)(v10 + 104) == 1) {
				// 0x7ead0
				PlayEffect(g35, 0);
				v11 = g36;
				// branch -> 0x7eadc
			} else {
				v11 = v10;
			}
		}
		// 0x7eadc
		result = 0;
		if (*(int32_t *)(v11 + 104) == *(int32_t *)(v11 + 100)) {
			// 0x7eaec
			function_7c124(g35, *(int32_t *)(v11 + 72));
			result = 1;
			// branch -> 0x7eb04
		}
		// 0x7eb04
		return result;
	}
	// 0x7ea64
	v13 = *(char *)*(int32_t *)(v9 + 224);
	v10 = v9;
	if (v13 < 76) {
		// 0x7eab8
		v11 = v10;
		if (*(char *)(v10 + 156) == 24) {
			// 0x7eac4
			if (*(int32_t *)(v10 + 104) == 1) {
				// 0x7ead0
				PlayEffect(g35, 0);
				v11 = g36;
				// branch -> 0x7eadc
			} else {
				v11 = v10;
			}
		}
		// 0x7eadc
		result = 0;
		if (*(int32_t *)(v11 + 104) == *(int32_t *)(v11 + 100)) {
			// 0x7eaec
			function_7c124(g35, *(int32_t *)(v11 + 72));
			result = 1;
			// branch -> 0x7eb04
		}
		// 0x7eb04
		return result;
	}
	// 0x7ea74
	if (v13 <= 79) {
		// 0x7ea7c
		if (*(int32_t *)(v9 + 104) == 13) {
			// 0x7ea88
			v18 = *(char *)(v9 + 200);
			v19 = *(char *)(v9 + 201);
			v20 = *(char *)(v9 + 202);
			v21 = *(int32_t *)(v9 + 76);
			function_7e3a4(g35, v21, (int32_t)v18 - 20, (int32_t)v19 + 4, (int32_t)v20 + 4);
			PlayEffect(g35, 0);
			v10 = g36;
			// branch -> 0x7eab8
		} else {
			v10 = v9;
		}
	} else {
		v10 = v9;
	}
	// 0x7eab8
	v11 = v10;
	if (*(char *)(v10 + 156) == 24) {
		// 0x7eac4
		if (*(int32_t *)(v10 + 104) == 1) {
			// 0x7ead0
			PlayEffect(g35, 0);
			v11 = g36;
			// branch -> 0x7eadc
		} else {
			v11 = v10;
		}
	}
	// 0x7eadc
	result = 0;
	if (*(int32_t *)(v11 + 104) == *(int32_t *)(v11 + 100)) {
		// 0x7eaec
		function_7c124(g35, *(int32_t *)(v11 + 72));
		result = 1;
		// branch -> 0x7eb04
	}
	// 0x7eb04
	return result;
}

// Address range: 0x7eb24 - 0x7ec6c
int32_t function_7eb24(int32_t a1)
{
	// 0x7eb24
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7eb30
	g33 = v1;
	int32_t v2 = a1; // 0x7eb70
	if (a1 >= 200) {
		// 0x7eb44
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d78));
		v1 = g33;
		v2 = g36;
		// branch -> 0x7eb50
	}
	int32_t v3 = 232 * v2; // 0x7eb50
	g31 = v3;
	int32_t v4 = v3 + v1 + 224; // 0x7eb58
	g32 = v4;
	int32_t v5 = v4; // 0x7eb78
	if (*(int32_t *)v4 == 0) {
		// 0x7eb64
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5d7c));
		v5 = g32;
		// branch -> 0x7eb78
	}
	// 0x7eb78
	if (*(int32_t *)v5 == 0) {
		// 0x7eb84
		g37 = g36;
		app_fatal(*(int32_t *)(g23 - 0x5d80));
		// branch -> 0x7eb98
	}
	int32_t v6 = g31 + g33; // 0x7eb98
	int32_t v7 = v6 + 104;  // 0x7eba4
	g30 = v7;
	unsigned char v8 = *(char *)(*(int32_t *)(v6 + 228) + 106); // 0x7eba8
	int32_t v9 = v7;                                            // 0x7ec30
	if (*(int32_t *)v7 == (int32_t)v8) {
		// 0x7ebb4
		if (*(int32_t *)(v6 + 116) != -1) {
			int32_t v10 = 0; // 0x7ebf4
			// branch -> 0x7ebe4
			while (true) {
				int32_t v11 = *(int32_t *)(v6 + 120); // 0x7ebe4
				g13 = g36;
				int32_t v12 = *(int32_t *)(v6 + 32);    // 0x7ebf8
				int32_t v13 = *(int32_t *)(v6 + 36);    // 0x7ebfc
				unsigned char v14 = *(char *)(v6 + 80); // 0x7ec00
				unsigned char v15 = *(char *)(v6 + 81); // 0x7ec04
				int32_t v16 = *(int32_t *)(v6 + 72);    // 0x7ec08
				int32_t v17 = *(int32_t *)(v6 + 116);   // 0x7ec0c
				AddMissile(v12, v13, (int32_t)v14, (int32_t)v15, v16, v17, 1, v11, v10);
				if (g28 + 1 < g29) {
					// 0x7ebe4
					v10 = g35;
					v6 = g32;
					// branch -> 0x7ebe4
					continue;
				}
			}
		}
		// 0x7ec20
		PlayEffect(g36, 0);
		v9 = g30;
		// branch -> 0x7ec2c
	}
	int32_t v18 = g33 + g31; // 0x7ec2c
	int32_t result = 0;
	if (*(int32_t *)v9 == *(int32_t *)(v18 + 100)) {
		// 0x7ec40
		function_7c124(g36, *(int32_t *)(v18 + 72));
		result = 1;
		// branch -> 0x7ec58
	}
	// 0x7ec58
	return result;
}

// Address range: 0x7ec6c - 0x7edfc
int32_t function_7ec6c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7ec74
	g36 = v1;
	g32 = a1;
	int32_t v2 = a1; // 0x7ecc4
	if (a1 >= 200) {
		// 0x7ec98
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d84));
		v1 = g36;
		v2 = g32;
		// branch -> 0x7eca4
	}
	int32_t v3 = 232 * v2; // 0x7eca4
	g35 = v3;
	int32_t v4 = v3 + v1 + 224; // 0x7ecac
	g33 = v4;
	int32_t v5 = v4; // 0x7eccc
	if (*(int32_t *)v4 == 0) {
		// 0x7ecb8
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5d88));
		v5 = g33;
		// branch -> 0x7eccc
	}
	// 0x7eccc
	if (*(int32_t *)v5 == 0) {
		// 0x7ecd8
		g37 = g32;
		app_fatal(*(int32_t *)(g23 - 0x5d8c));
		// branch -> 0x7ecec
	}
	int32_t v6 = g36;             // 0x7ecec
	int32_t v7 = g35;             // 0x7ecec
	int32_t v8 = v7 + v6;         // 0x7ecec
	int32_t v9 = v8 + 104;        // 0x7ecf8
	int32_t v10 = *(int32_t *)v9; // 0x7ecf8
	g33 = v9;
	int32_t v11 = v7; // 0x7ed54
	int32_t v12 = v6; // 0x7ed54
	if (v10 == (int32_t) * (char *)(*(int32_t *)(v8 + 228) + 110)) {
		// 0x7ed08
		if (*(int32_t *)(v8 + 96) == 0) {
			int32_t v13 = *(int32_t *)(v8 + 124); // 0x7ed14
			g13 = g32;
			int32_t v14 = *(int32_t *)(v8 + 32);         // 0x7ed2c
			int32_t v15 = *(int32_t *)(v8 + 36);         // 0x7ed30
			int32_t v16 = (int32_t) * (char *)(v8 + 80); // 0x7ed34
			unsigned char v17 = *(char *)(v8 + 81);      // 0x7ed38
			int32_t v18 = *(int32_t *)(v8 + 72);         // 0x7ed3c
			int32_t v19 = *(int32_t *)(v8 + 116);        // 0x7ed40
			AddMissile(v14, v15, v16, (int32_t)v17, v18, v19, 1, v13, 0);
			PlayEffect(g32, 3);
			v11 = g35;
			v12 = g36;
			// branch -> 0x7ed54
		} else {
			v11 = v7;
			v12 = v6;
		}
	}
	int32_t v20 = v12 + v11; // 0x7ed54
	int32_t result;
	int32_t v21; // 0x7edb0
	if (*(char *)(v20 + 156) == 26) {
		// 0x7ed64
		if (*(int32_t *)g33 == 3) {
			int32_t v22 = v20 + 120;       // 0x7ed70
			int32_t *v23 = (int32_t *)v22; // 0x7ed74
			int32_t v24 = *v23;            // 0x7ed74
			*v23 = v24 + 1;
			if (v24 == 0) {
				int32_t *v25 = (int32_t *)(v20 + 160); // 0x7ed88
				*v25 = *v25 | 4;
				// branch -> 0x7edb0
			} else {
				// 0x7ed98
				if (*(int32_t *)v22 == 15) {
					*(int32_t *)(v20 + 160) = __asm_rlwinm(*(int32_t *)(v20 + 160), 0, 30, 28);
					// branch -> 0x7edb0
				}
			}
			// 0x7edb0
			v21 = g35 + g36;
			result = 0;
			if (*(int32_t *)g33 == *(int32_t *)(v21 + 100)) {
				// 0x7edc4
				function_7c124(g32, *(int32_t *)(v21 + 72));
				result = 1;
				// branch -> 0x7eddc
			}
			// 0x7eddc
			return result;
		}
	}
	// 0x7edb0
	v21 = g35 + g36;
	result = 0;
	if (*(int32_t *)g33 == *(int32_t *)(v21 + 100)) {
		// 0x7edc4
		function_7c124(g32, *(int32_t *)(v21 + 72));
		result = 1;
		// branch -> 0x7eddc
	}
	// 0x7eddc
	return result;
}

// Address range: 0x7edfc - 0x7eefc
int32_t function_7edfc(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7ee04
	g36 = v1;
	g32 = a1;
	int32_t v2 = a1; // 0x7ee54
	if (a1 >= 200) {
		// 0x7ee28
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d90));
		v1 = g36;
		v2 = g32;
		// branch -> 0x7ee34
	}
	int32_t v3 = 232 * v2; // 0x7ee34
	g35 = v3;
	int32_t v4 = v3 + v1 + 224; // 0x7ee3c
	g33 = v4;
	int32_t v5 = v4; // 0x7ee5c
	if (*(int32_t *)v4 == 0) {
		// 0x7ee48
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5d94));
		v5 = g33;
		// branch -> 0x7ee5c
	}
	// 0x7ee5c
	if (*(int32_t *)v5 == 0) {
		// 0x7ee68
		g37 = g32;
		app_fatal(*(int32_t *)(g23 - 0x5d98));
		// branch -> 0x7ee7c
	}
	int32_t v6 = g35 + g36; // 0x7ee7c
	int32_t v7 = v6 + 104;  // 0x7ee88
	g33 = v7;
	unsigned char v8 = *(char *)(*(int32_t *)(v6 + 228) + 110); // 0x7ee8c
	int32_t v9 = v7;                                            // 0x7eeb4
	if (*(int32_t *)v7 == (int32_t)v8) {
		int32_t v10 = *(int32_t *)(v6 + 76);     // 0x7ee98
		unsigned char v11 = *(char *)(v6 + 203); // 0x7eea0
		unsigned char v12 = *(char *)(v6 + 204); // 0x7eea4
		unsigned char v13 = *(char *)(v6 + 205); // 0x7eea8
		function_7e3a4(g32, v10, (int32_t)v11, (int32_t)v12, (int32_t)v13);
		v9 = g33;
		// branch -> 0x7eeb0
	}
	int32_t v14 = g36 + g35; // 0x7eeb0
	int32_t result = 0;
	if (*(int32_t *)v9 == *(int32_t *)(v14 + 100)) {
		// 0x7eec4
		function_7c124(g32, *(int32_t *)(v14 + 72));
		result = 1;
		// branch -> 0x7eedc
	}
	// 0x7eedc
	return result;
}

// Address range: 0x7eefc - 0x7efb4
int32_t function_7eefc(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7ef04
	g36 = v1;
	g33 = a1;
	int32_t v2 = a1; // 0x7ef30
	if (a1 >= 200) {
		// 0x7ef24
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5d9c));
		v1 = g36;
		v2 = g33;
		// branch -> 0x7ef30
	}
	int32_t v3 = 232 * v2; // 0x7ef30
	int32_t v4 = v3 + g36; // 0x7ef5c
	if (__asm_rlwinm_(*(int32_t *)(v3 + v1 + 160), 0, 30, 30) == 0) {
		// 0x7ef5c
		if (*(int32_t *)(v4 + 104) != *(int32_t *)(v4 + 100)) {
			// 0x7ef94
			// branch -> 0x7ef98
			// 0x7ef98
			return 0;
		}
		// 0x7ef70
		function_7c124(g33, *(int32_t *)(v4 + 72));
		*(int32_t *)g35 = __asm_rlwinm(*(int32_t *)g35, 0, 31, 29);
		// branch -> 0x7ef98
		// 0x7ef98
		return 1;
	}
	// 0x7ef44
	if (*(int32_t *)(v4 + 104) != 1) {
		// 0x7ef54
		// branch -> 0x7ef94
		// 0x7ef94
		// branch -> 0x7ef98
		// 0x7ef98
		return 0;
	}
	// 0x7ef70
	function_7c124(g33, *(int32_t *)(v4 + 72));
	*(int32_t *)g35 = __asm_rlwinm(*(int32_t *)g35, 0, 31, 29);
	// branch -> 0x7ef98
	// 0x7ef98
	return 1;
}

// Address range: 0x7efb4 - 0x7f09c
int32_t function_7efb4(int32_t a1)
{
	// 0x7efb4
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7efc8
	g35 = v1;
	int32_t v2 = a1; // 0x7efe4
	if (a1 >= 200) {
		// 0x7efd8
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5da0));
		v1 = g35;
		v2 = g36;
		// branch -> 0x7efe4
	}
	int32_t v3 = 232 * v2;      // 0x7efe4
	int32_t v4 = v3 + v1 + 160; // 0x7efec
	int32_t v5 = v3 + g35;      // 0x7f010
	int32_t v6;                 // 0x7f040
	int32_t v7;                 // 0x7f050
	int32_t *v8;                // 0x7f05c
	unsigned char v9;           // 0x7f02c
	if (__asm_rlwinm_(*(int32_t *)v4, 0, 30, 30) == 0) {
		// 0x7f010
		if (*(int32_t *)(v5 + 104) != *(int32_t *)(v5 + 100)) {
			// 0x7f084
			return 0;
		}
		// 0x7f024
		v9 = *(char *)*(int32_t *)(v5 + 224);
		if (v9 >= 72) {
			// 0x7f038
			if (v9 <= 75) {
				// 0x7f040
				v6 = v4;
				*(int32_t *)v6 = __asm_rlwinm(*(int32_t *)v6, 0, 31, 29);
				// branch -> 0x7f068
				// 0x7f068
				function_7c124(g36, *(int32_t *)(v3 + g35 + 72));
				// branch -> 0x7f084
				// 0x7f084
				return 1;
			}
		}
		// 0x7f050
		v7 = v4;
		*(int32_t *)v7 = __asm_rlwinm(*(int32_t *)v7, 0, 31, 29);
		v8 = (int32_t *)v4;
		*v8 = *v8 | 1;
		// branch -> 0x7f068
		// 0x7f068
		function_7c124(g36, *(int32_t *)(v3 + g35 + 72));
		// branch -> 0x7f084
		// 0x7f084
		return 1;
	}
	// 0x7eff8
	if (*(int32_t *)(v5 + 104) != 1) {
		// 0x7f008
		// branch -> 0x7f084
		// 0x7f084
		return 0;
	}
	// 0x7f024
	v9 = *(char *)*(int32_t *)(v5 + 224);
	if (v9 >= 72) {
		// 0x7f038
		if (v9 <= 75) {
			// 0x7f040
			v6 = v4;
			*(int32_t *)v6 = __asm_rlwinm(*(int32_t *)v6, 0, 31, 29);
			// branch -> 0x7f068
			// 0x7f068
			function_7c124(g36, *(int32_t *)(v3 + g35 + 72));
			// branch -> 0x7f084
			// 0x7f084
			return 1;
		}
	}
	// 0x7f050
	v7 = v4;
	*(int32_t *)v7 = __asm_rlwinm(*(int32_t *)v7, 0, 31, 29);
	v8 = (int32_t *)v4;
	*v8 = *v8 | 1;
	// branch -> 0x7f068
	// 0x7f068
	function_7c124(g36, *(int32_t *)(v3 + g35 + 72));
	// branch -> 0x7f084
	// 0x7f084
	return 1;
}

// Address range: 0x7f09c - 0x7f16c
int32_t function_7f09c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7f0a4
	g36 = v1;
	g35 = a1;
	int32_t v2 = a1; // 0x7f0cc
	if (a1 >= 200) {
		// 0x7f0c0
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5da4));
		v1 = g36;
		v2 = g35;
		// branch -> 0x7f0cc
	}
	int32_t v3 = 232 * v2 + v1;          // 0x7f0d0
	int32_t v4 = *(int32_t *)(v3 + 160); // 0x7f0d4
	if (__asm_rlwinm_(v4, 0, 28, 28) == 0) {
		// 0x7f0f8
		if (*(int32_t *)(v3 + 104) == 1) {
			// 0x7f104
			*(int32_t *)(v3 + 160) = __asm_rlwinm(v4, 0, 31, 29);
			int32_t *v5 = (int32_t *)(v3 + 160); // 0x7f10c
			*v5 = *v5 | 4;
			int32_t *v6 = (int32_t *)(v3 + 152);       // 0x7f118
			int32_t v7 = *(int32_t *)(v3 + 148);       // 0x7f120
			int32_t v8 = *(int32_t *)(v3 + 116) + *v6; // 0x7f124
			if (v8 < v7) {
				// 0x7f130
				*v6 = v8;
				// branch -> 0x7f150
			} else {
				// 0x7f138
				*v6 = v7;
				*(int32_t *)(v3 + 160) = __asm_rlwinm(*(int32_t *)(v3 + 160), 0, 30, 28);
				*(int32_t *)(v3 + 4) = 7;
				// branch -> 0x7f150
			}
			// 0x7f150
			// branch -> 0x7f154
			// 0x7f154
			return 0;
		}
		// 0x7f150
		// branch -> 0x7f154
	} else {
		// 0x7f0e0
		*(int32_t *)(v3 + 160) = __asm_rlwinm(v4, 0, 30, 28);
		*(int32_t *)(v3 + 4) = 7;
		// branch -> 0x7f154
	}
	// 0x7f154
	return 0;
}

// Address range: 0x7f16c - 0x7f4b8
int32_t function_7f16c(int32_t a1)
{
	g21 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7f194
	g32 = v1;
	g33 = *(int32_t *)(g23 - 0x7604);
	g35 = *(int32_t *)(g23 - 0x708c);
	int32_t v2 = a1; // 0x7f1c4
	if (a1 >= 200) {
		// 0x7f1ac
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5da8));
		v1 = g32;
		v2 = g21;
		// branch -> 0x7f1b8
	}
	int32_t v3 = 232 * v2; // 0x7f1b8
	g25 = v3;
	function_7c124(v2, *(int32_t *)(v3 + v1 + 72));
	g24 = g36 + 212;
	int32_t v4 = *(int32_t *)(g23 - 0x710c); // 0x7f1d8
	*(char *)(g32 + g25 + 8) = 7;
	if (effect_is_playing(*(int32_t *)(v4 + 16 * *(int32_t *)(g36 + 212) + 12)) == 0) {
		// 0x7f204
		g34 = *(int32_t *)g24;
		function_6c63c();
		int32_t v5 = g36 + 220; // 0x7f20c
		g22 = v5;
		if (*(int32_t *)v5 == *(int32_t *)(g35 + 4)) {
			int32_t v6 = *(int32_t *)g24; // 0x7f220
			if (v6 == 144) {
				// 0x7f22c
				*(char *)(g33 + 50) = 2;
				// branch -> 0x7f234
			}
			// 0x7f234
			*(int32_t *)(g33 + 68) = 1;
			if (v6 == 145) {
				int32_t v7 = g25 + g32 + 160; // 0x7f248
				g36 = v7;
				if (__asm_rlwinm_(*(int32_t *)v7, 0, 25, 25) == 0) {
					int32_t v8 = g25 + g32; // 0x7f254
					function_5ff4c(g21, *(int32_t *)(v8 + 32) + 1, *(int32_t *)(v8 + 36) + 1, 1);
					int32_t *v9 = (int32_t *)g36; // 0x7f274
					*v9 = *v9 | 64;
					// branch -> 0x7f280
				}
			}
		}
		// 0x7f280
		if (*(int32_t *)g22 == *(int32_t *)(g35 + 68)) {
			// 0x7f290
			if (*(int32_t *)g24 == 148) {
				int32_t v10 = g25 + g32 + 160; // 0x7f2a0
				g36 = v10;
				if (__asm_rlwinm_(*(int32_t *)v10, 0, 25, 25) == 0) {
					// 0x7f2ac
					*(char *)(g33 + 74) = 2;
					*(int32_t *)(g33 + 92) = 1;
					int32_t v11 = g25 + g32;              // 0x7f2cc
					int32_t v12 = *(int32_t *)(v11 + 32); // 0x7f2cc
					function_60490(v12 + 1, *(int32_t *)(v11 + 36) + 1, 0, 0, 24, 1, 0);
					int32_t *v13 = (int32_t *)g36; // 0x7f2e8
					*v13 = *v13 | 64;
					// branch -> 0x7f2f4
				}
			}
		}
		// 0x7f2f4
		if (*(int32_t *)g22 == *(int32_t *)(g35 + 100)) {
			// 0x7f304
			if (*(int32_t *)g24 == 20) {
				int32_t v14 = g25 + g32 + 160; // 0x7f314
				g36 = v14;
				if (__asm_rlwinm_(*(int32_t *)v14, 0, 25, 25) == 0) {
					uint32_t v15 = *(int32_t *)g29; // 0x7f320
					uint32_t v16 = *(int32_t *)g28; // 0x7f324
					int32_t v17 = *(int32_t *)g30;  // 0x7f32c
					int32_t v18 = *(int32_t *)g31;  // 0x7f334
					function_986b4(v18, v17, (v15 / 2 | v15 & -0x80000000) + 2 + v18, (v16 / 2 | v16 & -0x80000000) - 2 + v17);
					char *v19 = (char *)g27; // 0x7f34c
					*v19 = 9;
					uint32_t v20 = *(int32_t *)g29;            // 0x7f35c
					uint32_t v21 = *(int32_t *)g28;            // 0x7f360
					int32_t v22 = *(int32_t *)g30;             // 0x7f368
					int32_t v23 = v21 / 2 | v21 & -0x80000000; // 0x7f36c
					int32_t v24 = *(int32_t *)g31;             // 0x7f370
					function_528e8(v24, v22, (v20 / 2 | v20 & -0x80000000) + 4 + v24, v22 + v23);
					*(char *)g27 = (char)(0x1000000 * (int32_t)*v19 / 0x1000000);
					int32_t v25 = g33; // 0x7f38c
					*(char *)(v25 + 183) = 2;
					if (*(char *)(g33 + 170) == 1) {
						// 0x7f3a0
						*(char *)(v25 + 170) = (char)2;
						// branch -> 0x7f3a4
					}
					int32_t *v26 = (int32_t *)g36; // 0x7f3a4
					*v26 = *v26 | 64;
					// branch -> 0x7f3b0
				}
			}
			// 0x7f3b0
			if (*(char *)(g33 + 183) <= 1) {
				// 0x7f3bc
				g37 = *(int32_t *)(g23 - 0x5dac);
				g38 = *(int32_t *)g24;
				sprintf();
				app_fatal(g26);
				// branch -> 0x7f3dc
			}
		}
		// 0x7f3dc
		if (*(int32_t *)g22 == *(int32_t *)(g35 + 228)) {
			int32_t v27 = *(int32_t *)g24; // 0x7f3ec
			if (v27 == 81) {
				// 0x7f3f8
				*(char *)(g33 + 98) = 2;
				*(int32_t *)(g33 + 116) = 1;
				// branch -> 0x7f408
			}
			// 0x7f408
			if (v27 == 83) {
				int32_t v28 = g25 + g32 + 160; // 0x7f414
				if (__asm_rlwinm_(*(int32_t *)v28, 0, 25, 25) == 0) {
					int32_t v29 = g25 + g32; // 0x7f420
					function_5fbe4(6, *(int32_t *)(v29 + 32) + 1, *(int32_t *)(v29 + 36) + 1);
					int32_t *v30 = (int32_t *)v28; // 0x7f43c
					*v30 = *v30 | 64;
					// branch -> 0x7f448
				}
			}
		}
		int32_t v31 = *(int32_t *)g22; // 0x7f448
		if (v31 == *(int32_t *)(g35 + 260)) {
			// 0x7f458
			*(char *)(g33 + 279) = 2;
			// branch -> 0x7f460
		}
		// 0x7f460
		if (v31 == *(int32_t *)(g35 + 132)) {
			// 0x7f46c
			if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
				int32_t v32 = g25 + g32; // r4
				*(char *)(g33 + 375) = 6;
				*(char *)(v32 + 8) = 1;
				*(char *)(v32 + 164) = (char)255;
				*(int32_t *)g24 = 0;
				// branch -> 0x7f4a4
			}
			// 0x7f4a4
			return 0;
		}
	}
	// 0x7f4a4
	return 0;
}

// Address range: 0x7f4b8 - 0x7f660
int32_t function_7f4b8(int32_t a1)
{
	int32_t v1 = g10; // 0x7f4bc
	g29 = a1;
	g36 = *(int32_t *)(g23 - 0x767c);
	int32_t v2 = a1; // 0x7f4e4
	if (a1 >= 200) {
		// 0x7f4d8
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5db0));
		v2 = g29;
		// branch -> 0x7f4e4
	}
	int32_t result = *(int32_t *)(g23 - 0x7754); // 0x7f4e8
	int32_t v3 = result + 232 * v2;              // 0x7f4ec
	g35 = v3;
	g25 = 0;
	if (*(int32_t *)(v3 + 4) == 15) {
		// 0x7f64c
		g10 = v1;
		return result;
	}
	// 0x7f500
	g31 = (int32_t) * (char *)(v3 + 80);
	g30 = (int32_t) * (char *)(v3 + 81);
	g37 = 2;
	g24 = 2 * random(100) - 1;
	g37 = 2;
	int32_t v4 = 2 * random(100); // 0x7f528
	int32_t v5 = v4 - 1;          // 0x7f52c
	g22 = v5;
	int32_t v6 = -g24; // 0x7f530
	g26 = v6;
	g21 = -1;
	int32_t v7 = -1; // 0x7f54c38
	                 // branch -> 0x7f5e0
lab_0x7f5e0:
	while (true) {
		int32_t v8 = g25; // 0x7f5e0
		int32_t v9 = v4;  // 0x7f65c13
		int32_t v10 = v8; // 0x7f5e8
		if (v8 == 0) {
			int32_t v11 = -v5; // 0x7f53c
			g28 = v11;
			g27 = g31 + v6;
			g20 = -1;
			int32_t v12 = v7; // 0x7f54c
			int32_t v13 = -1; // 0x7f55435
			int32_t v14 = v4; // 0x7f65c1633
			// branch -> 0x7f54c
			int32_t v15; // 0x7f5a8
			while (true) {
				// 0x7f54c
				int32_t v16; // 0x7f560
				int32_t v17; // 0x7f5b8
				int32_t v18; // 0x7f5bc
				int32_t v19; // 0x7f55c
				int32_t v20; // 0x7f5b8
				if (v12 == 0) {
					// 0x7f554
					if (v13 != 0) {
						// 0x7f55c
						v19 = g30 + v11;
						v16 = g27;
						g33 = v16;
						g32 = v19;
						if (v19 >= 0) {
						lab_0x7f56c:
							// 0x7f56c
							if (v19 <= 111) {
								// 0x7f574
								if (v16 >= 0) {
									// 0x7f57c
									if (v16 <= 111) {
										int32_t v21 = g35; // 0x7f584
										if (v16 != *(int32_t *)(v21 + 32)) {
											// 0x7f590
											if (v19 != *(int32_t *)(v21 + 36)) {
												// 0x7f59c
												v15 = function_86824(g29, v16, v19);
												if (v15 != 0) {
													// 0x7f5b4
													g25 = 1;
													// branch -> 0x7f5b8
												} else {
													v15 = 0;
												}
											} else {
												v15 = v14;
											}
										} else {
											v15 = v14;
										}
									} else {
										v15 = v14;
									}
								} else {
									v15 = v14;
								}
							} else {
								v15 = v14;
							}
						} else {
							v15 = v14;
						}
					} else {
						v15 = v14;
					}
				} else {
					// 0x7f55c
					v19 = g30 + v11;
					v16 = g27;
					g33 = v16;
					g32 = v19;
					if (v19 >= 0) {
						goto lab_0x7f56c;
					}
					v15 = v14;
					// 0x7f5b8
					v17 = g22;
					v20 = v17 + g28;
					g28 = v20;
					v18 = g20 + 1;
					g20 = v18;
					if (v18 <= 0) {
					lab_0x7f5b8:
						// 0x7f5b8
						if (g25 == 0) {
							// 0x7f5b8
							v12 = g21;
							v13 = v18;
							v11 = v20;
							v14 = v15;
							// branch -> 0x7f54c
							continue;
						}
					}
				lab_0x7f5d0:;
					int32_t v22 = g24 + g26; // 0x7f5d0
					g26 = v22;
					int32_t v23 = g21 + 1; // 0x7f5d4
					g21 = v23;
					if (v23 > 1) {
						// break (via goto) -> 0x7f5d0
						goto lab_0x7f5d0_2;
					}
					v7 = v23;
					v4 = v15;
					v6 = v22;
					v5 = v17;
					// continue (via goto) -> 0x7f5e0
					goto lab_0x7f5e0;
				}
				// 0x7f5b8
				v17 = g22;
				v20 = v17 + g28;
				g28 = v20;
				v18 = g20 + 1;
				g20 = v18;
				if (v18 > 0) {
					goto lab_0x7f5d0;
				}
				goto lab_0x7f5b8;
			}
		lab_0x7f5d0_2:
			// 0x7f5d0
			v9 = v15;
			v10 = g25;
			// branch -> 0x7f5e8
		}
		// 0x7f5e8
		int32_t result2; // 0x7f65c
		if (v10 != 0) {
			// 0x7f5f0
			function_7c95c(g29);
			int32_t v24 = g35;                    // 0x7f5f8
			int32_t v25 = *(int32_t *)(v24 + 36); // 0x7f600
			int32_t v26 = *(int32_t *)g36;        // 0x7f608
			*(int16_t *)(2 * v25 + 224 * *(int32_t *)(v24 + 32) + v26) = 0;
			g34 = g29;
			*(int16_t *)(*(int32_t *)g36 + 224 * g33 + 2 * g32) = (int16_t)(g29 + 1);
			*(int32_t *)(g35 + 48) = g33;
			*(int32_t *)(g35 + 52) = g32;
			*(int32_t *)(g35 + 72) = function_7bfc0();
			result2 = function_7bffc(g29);
			// branch -> 0x7f64c
		} else {
			result2 = v9;
		}
		// 0x7f64c
		g10 = v1;
		return result2;
	}
}

// Address range: 0x7f660 - 0x7f700
int32_t function_7f660(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7f668
	g36 = v1;
	g33 = a1;
	int32_t v2 = a1; // 0x7f6ac
	if (a1 >= 200) {
		// 0x7f688
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5db4));
		v1 = g36;
		v2 = g33;
		// branch -> 0x7f694
	}
	int32_t v3 = 232 * v2; // 0x7f694
	g35 = v3;
	int32_t v4 = v3; // 0x7f6b8
	int32_t v5 = v1; // 0x7f6b8
	if (*(int32_t *)(v3 + v1 + 224) == 0) {
		// 0x7f6a8
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5db8));
		v4 = g35;
		v5 = g36;
		// branch -> 0x7f6b8
	}
	int32_t v6 = v5 + v4; // 0x7f6b8
	int32_t result = 0;
	if (*(int32_t *)(v6 + 104) == *(int32_t *)(v6 + 100)) {
		// 0x7f6cc
		function_7c124(g33, *(int32_t *)(v6 + 72));
		result = 1;
		// branch -> 0x7f6e4
	}
	// 0x7f6e4
	return result;
}

// Address range: 0x7f700 - 0x7f7c4
int32_t function_7f700(int32_t a1)
{
	int32_t v1 = g36; // 0x7f700
	g36 = *(int32_t *)(g23 - 0x7754);
	int32_t v2 = g35; // 0x7f70c
	g35 = a1;
	int32_t v3 = a1;  // 0x7f734
	int32_t v4 = g23; // 0x7f738
	if (a1 >= 200) {
		// 0x7f724
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5dbc));
		v3 = g35;
		v4 = g23;
		// branch -> 0x7f730
	}
	int32_t v5 = *(int32_t *)(v4 - 0x7628);             // 0x7f738
	int32_t v6 = *(int32_t *)*(int32_t *)(v4 - 0x762c); // 0x7f73c
	int32_t v7 = v6;                                    // ctr
	if (v6 >= 1) {
		while (true) {
			int32_t v8 = 232 * *(int32_t *)v5; // 0x7f754
			int32_t v9 = g36;                  // 0x7f75c
			int32_t v10 = v6;                  // 0x7f780
			if (*(char *)(v9 + v8 + 217) == 1) {
				int32_t v11 = v9 + v8; // 0x7f768
				if (g35 == (int32_t) * (char *)(v11 + 216)) {
					// 0x7f778
					*(char *)(v11 + 217) = (char)0;
					v10 = v7;
					// branch -> 0x7f77c
				} else {
					v10 = v6;
				}
			}
			int32_t v12 = v10 - 1; // 0x7f780
			v7 = v12;
			if (v12 == 0) {
				// break -> 0x7f784
				break;
			}
			v6 = v12;
			v5 += 4;
			// continue -> 0x7f750
		}
		// 0x7f784
		// branch -> 0x7f784
	}
	int32_t v13 = g36;            // 0x7f784
	int32_t v14 = v13 + 232 * v3; // 0x7f784
	int32_t result = v14;         // 0x7f7c0
	if (*(char *)(v14 + 217) == 1) {
		int32_t v15 = 232 * (int32_t) * (char *)(v14 + 216); // 0x7f798
		char *v16 = (char *)(v15 + v13 + 218);               // 0x7f7a0
		int32_t v17 = (int32_t)*v16;                         // 0x7f7a0
		*v16 = (char)(v17 - 1);
		result = v17;
		// branch -> 0x7f7ac
	}
	// 0x7f7ac
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0x7f7c4 - 0x7f8e0
int32_t DoEnding(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77f0); // 0x7f7cc
	g33 = *(int32_t *)(g23 - 0x70b0);
	if ((*(char *)v1 || 1) != 1) {
		// 0x7f7ec
		g34 = 0x40000004;
		SNetLeaveGame(0x40000004);
		// branch -> 0x7f7fc
	}
	// 0x7f7fc
	music_stop();
	int32_t v2; // 0x7f838
	if ((*(char *)v1 || 1) == 1) {
		// 0x7f7fc
		v2 = g23;
		// branch -> 0x7f818
	} else {
		// 0x7f80c
		g34 = 1000;
		Sleep(1000);
		int32_t v3;
		v2 = v3;
		// branch -> 0x7f818
	}
	int32_t v4 = *(int32_t *)(v2 - 0x77ac);                           // 0x7f818
	int32_t v5 = *(int32_t *)(v2 - 0x77a8);                           // 0x7f81c
	unsigned char v6 = *(char *)(0x55ec * *(int32_t *)v4 + v5 + 348); // 0x7f82c
	int32_t result;                                                   // 0x7f8c4
	if (v6 == 0) {
		// 0x7f838
		play_movie(*(int32_t *)(v2 - 0x5dc0), 0);
		// branch -> 0x7f870
		// 0x7f870
		play_movie(*(int32_t *)(g23 - 0x5dcc), 0);
		g36 = 1;
		g34 = 1;
		*(char *)g35 = 1;
		g32 = sound_get_or_set_music_volume();
		g34 = 0;
		sound_get_or_set_music_volume();
		music_start(2);
		*(int32_t *)g33 = g36;
		play_movie(*(int32_t *)(g23 - 0x5dd0), 1);
		*(int32_t *)g33 = 0;
		music_stop();
		g34 = g32;
		result = sound_get_or_set_music_volume();
		*(char *)g35 = (char)g31;
		return result;
	}
	// 0x7f848
	if (v6 == 2) {
		// 0x7f854
		play_movie(*(int32_t *)(v2 - 0x5dc4), 0);
		// branch -> 0x7f870
	} else {
		// 0x7f864
		play_movie(*(int32_t *)(v2 - 0x5dc8), 0);
		// branch -> 0x7f870
	}
	// 0x7f870
	play_movie(*(int32_t *)(g23 - 0x5dcc), 0);
	g36 = 1;
	g34 = 1;
	*(char *)g35 = 1;
	g32 = sound_get_or_set_music_volume();
	g34 = 0;
	sound_get_or_set_music_volume();
	music_start(2);
	*(int32_t *)g33 = g36;
	play_movie(*(int32_t *)(g23 - 0x5dd0), 1);
	*(int32_t *)g33 = 0;
	music_stop();
	g34 = g32;
	result = sound_get_or_set_music_volume();
	*(char *)g35 = (char)g31;
	return result;
}

// Address range: 0x7f8e0 - 0x7fa28
int32_t PrepDoEnding(void)
{
	int32_t v1 = 0; // r0
	*(char *)*(int32_t *)(g23 - 0x72b8) = *(char *)(g23 - 0x4d88);
	*(char *)*(int32_t *)(g23 - 0x759c) = (char)1;
	*(int32_t *)*(int32_t *)(g23 - 0x75a4) = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0x7f908
	*(int32_t *)*(int32_t *)(g23 - 0x75cc) = v1;
	int32_t v3 = *(int32_t *)(g23 - 0x77a8);                          // 0x7f920
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x7184) + 1;          // 0x7f924
	int32_t *v5 = (int32_t *)(v3 + 0x55ec * *(int32_t *)v2 + 0x55a8); // 0x7f92c
	uint32_t v6 = *v5;                                                // 0x7f92c
	int32_t v7 = v6;                                                  // 0x7f940
	if (v6 <= v4) {
		// 0x7f93c
		v7 = v4;
		// branch -> 0x7f940
	}
	// 0x7f940
	*v5 = v7;
	int32_t v8 = 11;                                              // r5
	int32_t v9 = 1;                                               // r4
	int32_t result = 64;                                          // r3
	int32_t v10 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77f0); // r8
	*(int32_t *)v3 = 11;
	*(char *)(v3 + 313) = (char)v9;
	if (v10 != 1 && v10 != 0) {
		int32_t *v11 = (int32_t *)(v3 + 404); // 0x7f968
		if (*v11 < 64) {
			// 0x7f974
			*v11 = result;
			// branch -> 0x7f978
		}
		int32_t *v12 = (int32_t *)(v3 + 424); // 0x7f978
		if (*v12 < 64) {
			// 0x7f984
			*v12 = result;
			// branch -> 0x7f988
		}
	}
	int32_t v13 = v3 + 0x55ec; // 0x7f988
	int32_t v14 = v13;         // r6
	*(int32_t *)v13 = v8;
	*(char *)(v3 + 0x5725) = (char)v9;
	if (v10 != 1 && v10 != 0) {
		int32_t *v15 = (int32_t *)(v14 + 404); // 0x7f99c
		if (*v15 < 64) {
			// 0x7f9a8
			*v15 = result;
			// branch -> 0x7f9ac
		}
		int32_t *v16 = (int32_t *)(v14 + 424); // 0x7f9ac
		if (*v16 < 64) {
			// 0x7f9b8
			*v16 = result;
			// branch -> 0x7f9bc
		}
	}
	// 0x7f9bc
	*(int32_t *)(v14 + 0x55ec) = v8;
	*(char *)(v14 + 0x5725) = (char)v9;
	int32_t v17 = v14;          // 0x7f9c8
	int32_t v18 = v17 + 0x55ec; // 0x7f9c8
	v14 = v18;
	if (v10 != 1 && v10 != 0) {
		int32_t *v19 = (int32_t *)(v17 + 0x5780); // 0x7f9d0
		if (*v19 < 64) {
			// 0x7f9dc
			*v19 = result;
			v18 = v14;
			// branch -> 0x7f9e0
		}
		int32_t *v20 = (int32_t *)(v18 + 424); // 0x7f9e0
		if (*v20 < 64) {
			// 0x7f9ec
			*v20 = result;
			v18 = v14;
			// branch -> 0x7f9f0
		}
	}
	// 0x7f9f0
	*(int32_t *)(v18 + 0x55ec) = v8;
	*(char *)(v14 + 0x5725) = (char)v9;
	if (v10 == 1 || v10 == 0) {
		// bb
		return result;
	}
	int32_t *v21 = (int32_t *)(v14 + 0x5780); // 0x7fa04
	if (*v21 < 64) {
		// 0x7fa10
		*v21 = result;
		// branch -> 0x7fa14
	}
	int32_t *v22 = (int32_t *)(0x5794 + v14); // 0x7fa14
	if (*v22 >= 64) {
		// bb7
		return result;
	}
	// 0x7fa20
	*v22 = result;
	return result;
}

// Address range: 0x7fa28 - 0x7fbcc
int32_t function_7fa28(int32_t a1)
{
	g33 = a1;
	g36 = *(int32_t *)(g23 - 0x77b4);
	g31 = *(int32_t *)(g23 - 0x77b0);
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7fa40
	g32 = v1;
	int32_t v2 = a1; // 0x7fa7c
	if (a1 >= 200) {
		// 0x7fa50
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5dd4));
		v1 = g32;
		v2 = g33;
		// branch -> 0x7fa5c
	}
	int32_t v3 = 232 * v2; // 0x7fa5c
	g35 = v3;
	int32_t v4 = v3 + v1 + 224; // 0x7fa64
	g30 = v4;
	if (*(int32_t *)v4 == 0) {
		// 0x7fa70
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5dd8));
		v3 = g35;
		v1 = g32;
		// branch -> 0x7fa84
	}
	int32_t v5 = v1 + v3 + 116;  // 0x7fa88
	int32_t *v6 = (int32_t *)v5; // 0x7fa88
	*v6 = *v6 + 1;
	int32_t v7 = *(int32_t *)g30; // 0x7fa94
	int32_t v8 = g35 + g32;       // 0x7faa4
	if (*(char *)v7 == 110) {
		int32_t *v9 = (int32_t *)g31;              // 0x7faa8
		int32_t v10 = *(int32_t *)(v8 + 32) - *v9; // 0x7fab0
		int32_t *v11;                              // 0x7fae4
		int32_t v12;                               // 0x7fb14
		int32_t v13;                               // 0x7faec
		if (v10 > -1) {
			// 0x7fac0
			int32_t v14; // 0x7fadc
			if (v10 == 0) {
				// 0x7fad0
				v14 = 0;
				// branch -> 0x7fad4
			} else {
				// 0x7fac8
				v14 = 1;
				// branch -> 0x7fad4
			}
			// 0x7fad4
			*v9 = *v9 + v14;
			v11 = (int32_t *)g36;
			v13 = *(int32_t *)(v8 + 36) - *v11;
			if (v13 <= -1) {
				// 0x7faf4
				// branch -> 0x7fb10
				// 0x7fb10
				*v11 = *v11 - 1;
				if (*(int32_t *)v5 == 140) {
					// 0x7fb28
					PrepDoEnding();
					// branch -> 0x7fbb4
				}
				// 0x7fbb4
				return 0;
			}
			// 0x7fafc
			if (v13 == 0) {
				// 0x7fb0c
				v12 = 0;
				// branch -> 0x7fb10
			} else {
				// 0x7fb04
				v12 = 1;
				// branch -> 0x7fb10
			}
			// 0x7fb10
			*v11 = *v11 + v12;
			if (*(int32_t *)v5 == 140) {
				// 0x7fb28
				PrepDoEnding();
				// branch -> 0x7fbb4
			}
			// 0x7fbb4
			return 0;
		}
		// 0x7fab8
		// branch -> 0x7fad4
		// 0x7fad4
		*v9 = *v9 - 1;
		v11 = (int32_t *)g36;
		v13 = *(int32_t *)(v8 + 36) - *v11;
		if (v13 > -1) {
			// 0x7fafc
			if (v13 == 0) {
				// 0x7fb0c
				v12 = 0;
				// branch -> 0x7fb10
			} else {
				// 0x7fb04
				v12 = 1;
				// branch -> 0x7fb10
			}
			// 0x7fb10
			*v11 = *v11 + v12;
			if (*(int32_t *)v5 == 140) {
				// 0x7fb28
				PrepDoEnding();
				// branch -> 0x7fbb4
			}
			// 0x7fbb4
			return 0;
		}
		// 0x7faf4
		// branch -> 0x7fb10
		// 0x7fb10
		*v11 = *v11 - 1;
		if (*(int32_t *)v5 == 140) {
			// 0x7fb28
			PrepDoEnding();
			// branch -> 0x7fbb4
		}
	} else {
		// 0x7fb30
		if (*(int32_t *)(v8 + 104) == *(int32_t *)(v8 + 100)) {
			int32_t v15 = *(int32_t *)(v8 + 32); // 0x7fb50
			int32_t v16 = *(int32_t *)(v8 + 36); // 0x7fb54
			if (*(char *)(v8 + 192) == 0) {
				int32_t v17 = (int32_t) * (char *)(v7 + 509); // 0x7fb58
				AddDead(v15, v16, v17, *(int32_t *)(v8 + 72));
				// branch -> 0x7fb7c
			} else {
				int32_t v18 = (int32_t) * (char *)(v8 + 194); // 0x7fb70
				AddDead(v15, v16, v18, *(int32_t *)(v8 + 72));
				// branch -> 0x7fb7c
			}
			int32_t v19 = g35 + g32;                  // 0x7fb7c
			int32_t v20 = *(int32_t *)(g23 - 0x767c); // 0x7fb80
			int32_t v21 = *(int32_t *)(v19 + 32);     // 0x7fb84
			int32_t v22 = *(int32_t *)(v19 + 36);     // 0x7fb8c
			*(int16_t *)(2 * v22 + 224 * v21 + *(int32_t *)v20) = 0;
			*(int32_t *)(v19 + 112) = 1;
			function_7f700(g33);
			// branch -> 0x7fbb4
		}
	}
	// 0x7fbb4
	return 0;
}

// Address range: 0x7fbcc - 0x7fc9c
int32_t function_7fbcc(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7fbd4
	g36 = v1;
	g32 = a1;
	int32_t v2 = a1; // 0x7fc1c
	if (a1 >= 200) {
		// 0x7fbf8
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5ddc));
		v1 = g36;
		v2 = g32;
		// branch -> 0x7fc04
	}
	int32_t v3 = 232 * v2; // 0x7fc04
	g35 = v3;
	int32_t v4 = v3; // 0x7fc28
	int32_t v5 = v1; // 0x7fc28
	if (*(int32_t *)(v3 + v1 + 224) == 0) {
		// 0x7fc18
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5de0));
		v4 = g35;
		v5 = g36;
		// branch -> 0x7fc28
	}
	int32_t v6 = v5 + v4;  // 0x7fc28
	int32_t v7 = v6 + 104; // 0x7fc34
	g33 = v7;
	unsigned char v8 = *(char *)(*(int32_t *)(v6 + 228) + 110); // 0x7fc38
	int32_t v9 = v7;                                            // 0x7fc54
	if (*(int32_t *)v7 == (int32_t)v8) {
		// 0x7fc44
		PlayEffect(g32, 3);
		v9 = g33;
		v4 = g35;
		v5 = g36;
		// branch -> 0x7fc50
	}
	int32_t v10 = v5 + v4; // 0x7fc50
	int32_t result = 0;
	if (*(int32_t *)v9 == *(int32_t *)(v10 + 100)) {
		// 0x7fc64
		function_7c124(g32, *(int32_t *)(v10 + 72));
		result = 1;
		// branch -> 0x7fc7c
	}
	// 0x7fc7c
	return result;
}

// Address range: 0x7fc9c - 0x7fdac
int32_t function_7fc9c(int32_t a1)
{
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7fcb0
	g35 = v1;
	int32_t v2 = a1; // 0x7fcf4
	if (a1 >= 200) {
		// 0x7fcc8
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5de4));
		v1 = g35;
		v2 = g36;
		// branch -> 0x7fcd4
	}
	int32_t v3 = 232 * v2; // 0x7fcd4
	g33 = v3;
	int32_t v4 = v3 + v1 + 224; // 0x7fcdc
	g32 = v4;
	int32_t v5 = v2; // 0x7fcfc
	if (*(int32_t *)v4 == 0) {
		// 0x7fce8
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5de8));
		v5 = g36;
		// branch -> 0x7fcfc
	}
	// 0x7fcfc
	g34 = v5;
	int32_t v6 = function_7bfc0();         // 0x7fd00
	int32_t v7 = g33 + g35;                // 0x7fd0c
	int32_t v8 = *(int32_t *)g32 + 8 * v6; // 0x7fd10
	*(int32_t *)(v7 + 84) = *(int32_t *)(v8 + 8);
	*(int32_t *)(v7 + 88) = *(int32_t *)(v8 + 12);
	int32_t result;
	int32_t v9;   // 0x7fd68
	int32_t v10;  // 0x7fd50
	int32_t *v11; // 0x7fd54
	int32_t v12;  // 0x7fd54
	if (*(char *)(v7 + 156) != 28) {
		// 0x7fd50
		v10 = g33 + g35;
		v11 = (int32_t *)(v10 + 120);
		v12 = *v11;
		*v11 = v12 - 1;
		result = 0;
		if (v12 == 0) {
			// 0x7fd68
			v9 = v10;
			g32 = v9 + 104;
			function_7c124(g36, *(int32_t *)(v9 + 72));
			*(int32_t *)g32 = g33;
			result = 1;
			// branch -> 0x7fd8c
		}
		// 0x7fd8c
		return result;
	}
	int32_t *v13 = (int32_t *)(v7 + 120); // 0x7fd34
	int32_t v14 = *v13;                   // 0x7fd34
	if (v14 > 8) {
		// 0x7fd48
		*v13 = 8;
		// branch -> 0x7fd50
	} else {
		// 0x7fd40
		if (v14 <= 0xffffffff) {
			// 0x7fd48
			*v13 = 8;
			// branch -> 0x7fd50
		}
	}
	// 0x7fd50
	v10 = g33 + g35;
	v11 = (int32_t *)(v10 + 120);
	v12 = *v11;
	*v11 = v12 - 1;
	result = 0;
	if (v12 == 0) {
		// 0x7fd68
		v9 = v10;
		g32 = v9 + 104;
		function_7c124(g36, *(int32_t *)(v9 + 72));
		*(int32_t *)g32 = g33;
		result = 1;
		// branch -> 0x7fd8c
	}
	// 0x7fd8c
	return result;
}

// Address range: 0x7fdac - 0x7fe38
int32_t M_DoStone(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x7fdb4
	g36 = v1;
	g35 = a1;
	int32_t v2 = a1; // 0x7fddc
	if (a1 >= 200) {
		// 0x7fdd0
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5dec));
		v1 = g36;
		v2 = g35;
		// branch -> 0x7fddc
	}
	int32_t v3 = 232 * v2 + v1; // 0x7fde0
	if (*(int32_t *)(v3 + 152) == 0) {
		int32_t v4 = 2 * *(int32_t *)(v3 + 36) + 224 * *(int32_t *)(v3 + 32); // 0x7fe10
		*(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x767c) + v4) = 0;
		*(int32_t *)(v3 + 112) = 1;
		// branch -> 0x7fe1c
	}
	// 0x7fe1c
	return 0;
}

// Address range: 0x7fe38 - 0x8005c
int32_t function_7fe38(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x7fe38
	g36 = *(int32_t *)(g23 - 0x5df4);
	int32_t v2 = g35; // 0x7fe44
	g35 = a1;
	int32_t v3 = g33; // 0x7fe50
	g33 = a2;
	int32_t v4 = g23; // 0x7fe90
	int32_t v5 = a1;  // 0x7fe70
	if (a1 >= 200) {
		// 0x7fe64
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5df0));
		a2 = g33;
		v4 = g23;
		v5 = g35;
		// branch -> 0x7fe70
	}
	int32_t v6 = *(int32_t *)(*(int32_t *)(v4 - 0x7754) + 232 * v5 + 224); // 0x7fe80
	if (a2 <= 7) {
		// 0x7fe90
		return *(int32_t *)(*(int32_t *)(v4 - 0x5df8) + 4 * a2);
	}
	// 0x80040
	g36 = v1;
	g35 = v2;
	g33 = v3;
	return *(int32_t *)(v6 + 148);
}

// Address range: 0x8005c - 0x802c4
int32_t function_8005c(int32_t result)
{
	int32_t v1 = g10;    // 0x80060
	int32_t v2 = result; // 0x80064
	g31 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0x80068
	g36 = v3;
	int32_t v4 = v2; // 0x80088
	if (v2 >= 200) {
		// 0x8007c
		g37 = v2;
		result = app_fatal(*(int32_t *)(g23 - 0x5dfc));
		v3 = g36;
		v4 = g31;
		// branch -> 0x80088
	}
	int32_t v5 = 232 * v4; // 0x80088
	g35 = v5;
	int32_t v6 = v5 + v3;  // 0x8008c
	int32_t v7 = v6 + 217; // 0x80090
	g33 = v7;
	int32_t v8;        // ctr
	int32_t v9;        // r4
	int32_t v10;       // r5
	int32_t v11;       // 0x80170
	int32_t v12;       // 0x801b0
	int32_t v13;       // 0x8020c
	int32_t v14;       // 0x80230
	int32_t v15;       // 0x8016c
	int32_t v16;       // 0x80170
	int32_t v17;       // 0x80174
	int32_t v18;       // 0x801c0
	int32_t v19;       // 0x80228
	int32_t v20;       // 0x80174
	unsigned char v21; // 0x80178
	int32_t v22;       // 0x8017c
	int32_t v23;       // 0x8018c
	int32_t v24;       // 0x80190
	int32_t v25;       // 0x801b0
	int32_t v26;       // 0x801e4
	int32_t result2;   // 0x801fc
	int32_t v27;       // 0x80214
	int32_t v28;       // 0x801a4
	int32_t v29;       // 0x801c0
	unsigned char v30; // 0x801e8
	int32_t result3;   // 0x8020c
	int32_t v31;       // 0x80210
	if (*(char *)v7 == 0) {
		// 0x80160
		if (*(char *)g33 != 1) {
			// 0x801e4
			v26 = g35 + g36;
			v9 = v26;
			v30 = *(char *)(v26 + 192);
			if (v30 == 0) {
				// 0x802b0
				g10 = v1;
				return result;
			}
			// 0x801f4
			result2 = *(int32_t *)(g23 - 0x708c) + 32 * (int32_t)v30;
			if (__asm_rlwinm_((int32_t) * (int16_t *)(result2 - 10), 0, 30, 30) == 0) {
				// 0x802b0
				g10 = v1;
				return result2;
			}
			// 0x8020c
			v13 = g23;
			result3 = *(int32_t *)(v13 - 0x762c);
			v31 = *(int32_t *)(v13 - 0x7628);
			v10 = v31;
			v27 = *(int32_t *)result3;
			v8 = v27;
			if (v27 >= 1) {
				while (true) {
					// 0x80224
					v19 = 232 * *(int32_t *)v31;
					result = v19;
					v14 = g36;
					if (*(char *)(v14 + v19 + 217) == 1) {
						goto lab_0x8023c_2;
					}
					goto lab_0x802a8_2;
				}
			}
			// 0x802b0
			g10 = v1;
			return result3;
		}
		// 0x8016c
		v15 = 232 * g32;
		v11 = g36;
		v16 = v11 + 164;
		v17 = g35;
		v20 = v17 + v16;
		v21 = *(char *)v20;
		result = v21;
		v22 = v16 + v15;
		v12 = v11;
		if (v21 > *(char *)v22) {
			// 0x8018c
			v23 = v17 + v11;
			v24 = v11 + v15;
			*(int32_t *)(v24 + 172) = *(int32_t *)(v23 + 32);
			*(int32_t *)(v24 + 176) = *(int32_t *)(v23 + 36);
			v28 = (int32_t) * (char *)v20;
			result = v28;
			*(char *)v22 = (char)(v28 - 1);
			v12 = g36;
			// branch -> 0x801b0
		}
		// 0x801b0
		v25 = v12 + v15;
		if (*(char *)(v25 + 156) == 12) {
			// 0x801c0
			v18 = v25 + 160;
			v29 = *(int32_t *)v18;
			result = v29;
			if (__asm_rlwinm_(v29, 0, 29, 29) != 0) {
				// 0x801d0
				*(int32_t *)v18 = __asm_rlwinm(result, 0, 30, 28);
				*(int32_t *)(v25 + 4) = 7;
				// branch -> 0x802b0
			}
			// 0x802b0
			g10 = v1;
			return result;
		}
		// 0x802b0
		g10 = v1;
		return result;
	}
	int32_t v32 = *(int32_t *)(g23 - 0x70b4);                                // 0x800a4
	int32_t v33 = *(int32_t *)(v6 + 32);                                     // 0x800b4
	int32_t v34 = 232 * (int32_t) * (char *)(v6 + 216) + v3;                 // 0x800c0
	int32_t v35 = *(int32_t *)(v34 + 40);                                    // 0x800c8
	int32_t v36 = *(int32_t *)(v34 + 44);                                    // 0x800cc
	int32_t v37 = function_8576c(v32, v33, *(int32_t *)(v6 + 36), v35, v36); // 0x800d0
	result = v37;
	if (v37 != 0) {
		// 0x8010c
		if (*(char *)g33 == 2) {
			// 0x80118
			g34 = *(int32_t *)g28 - *(int32_t *)g29;
			int32_t v38 = abs(); // 0x80124
			result = v38;
			if (v38 <= 3) {
				// 0x80130
				g34 = *(int32_t *)g26 - *(int32_t *)g27;
				int32_t v39 = abs(); // 0x8013c
				result = v39;
				if (v39 <= 3) {
					char *v40 = (char *)(g30 + g36 + 218); // 0x8014c
					int32_t v41 = (int32_t)*v40 + 1;       // 0x80154
					result = v41;
					*v40 = (char)v41;
					*(char *)g33 = (char)1;
					// branch -> 0x80160
				}
			}
		}
		// 0x80160
		if (*(char *)g33 == 1) {
			// 0x8016c
			v15 = 232 * g32;
			v11 = g36;
			v16 = v11 + 164;
			v17 = g35;
			v20 = v17 + v16;
			v21 = *(char *)v20;
			result = v21;
			v22 = v16 + v15;
			v12 = v11;
			if (v21 > *(char *)v22) {
				// 0x8018c
				v23 = v17 + v11;
				v24 = v11 + v15;
				*(int32_t *)(v24 + 172) = *(int32_t *)(v23 + 32);
				*(int32_t *)(v24 + 176) = *(int32_t *)(v23 + 36);
				v28 = (int32_t) * (char *)v20;
				result = v28;
				*(char *)v22 = (char)(v28 - 1);
				v12 = g36;
				// branch -> 0x801b0
			}
			// 0x801b0
			v25 = v12 + v15;
			if (*(char *)(v25 + 156) == 12) {
				// 0x801c0
				v18 = v25 + 160;
				v29 = *(int32_t *)v18;
				result = v29;
				if (__asm_rlwinm_(v29, 0, 29, 29) != 0) {
					// 0x801d0
					*(int32_t *)v18 = __asm_rlwinm(result, 0, 30, 28);
					*(int32_t *)(v25 + 4) = 7;
					// branch -> 0x802b0
				}
			}
		} else {
			// 0x801e4
			v26 = g35 + g36;
			v9 = v26;
			v30 = *(char *)(v26 + 192);
			if (v30 != 0) {
				// 0x801f4
				result2 = *(int32_t *)(g23 - 0x708c) + 32 * (int32_t)v30;
				result = result2;
				if (__asm_rlwinm_((int32_t) * (int16_t *)(result2 - 10), 0, 30, 30) != 0) {
					// 0x8020c
					v13 = g23;
					result3 = *(int32_t *)(v13 - 0x762c);
					result = result3;
					v31 = *(int32_t *)(v13 - 0x7628);
					v10 = v31;
					v27 = *(int32_t *)result3;
					v8 = v27;
					if (v27 >= 1) {
						while (true) {
							// 0x80224
							v19 = 232 * *(int32_t *)v31;
							result = v19;
							v14 = g36;
							if (*(char *)(v14 + v19 + 217) == 1) {
								goto lab_0x8023c_2;
							}
							goto lab_0x802a8_2;
						}
					}
				}
			}
		}
		// 0x802b0
		g10 = v1;
		return result;
	}
	// 0x800dc
	if (*(char *)g33 == 1) {
		char *v42 = (char *)(g30 + g36 + 218); // 0x800ec
		int32_t v43 = (int32_t)*v42 - 1;       // 0x800f4
		result = v43;
		*v42 = (char)v43;
		*(char *)g33 = (char)2;
		// branch -> 0x80160
	}
	// 0x80160
	if (*(char *)g33 == 1) {
		// 0x8016c
		v15 = 232 * g32;
		v11 = g36;
		v16 = v11 + 164;
		v17 = g35;
		v20 = v17 + v16;
		v21 = *(char *)v20;
		result = v21;
		v22 = v16 + v15;
		v12 = v11;
		if (v21 > *(char *)v22) {
			// 0x8018c
			v23 = v17 + v11;
			v24 = v11 + v15;
			*(int32_t *)(v24 + 172) = *(int32_t *)(v23 + 32);
			*(int32_t *)(v24 + 176) = *(int32_t *)(v23 + 36);
			v28 = (int32_t) * (char *)v20;
			result = v28;
			*(char *)v22 = (char)(v28 - 1);
			v12 = g36;
			// branch -> 0x801b0
		}
		// 0x801b0
		v25 = v12 + v15;
		if (*(char *)(v25 + 156) == 12) {
			// 0x801c0
			v18 = v25 + 160;
			v29 = *(int32_t *)v18;
			result = v29;
			if (__asm_rlwinm_(v29, 0, 29, 29) != 0) {
				// 0x801d0
				*(int32_t *)v18 = __asm_rlwinm(result, 0, 30, 28);
				*(int32_t *)(v25 + 4) = 7;
				// branch -> 0x802b0
			}
		}
	} else {
		// 0x801e4
		v26 = g35 + g36;
		v9 = v26;
		v30 = *(char *)(v26 + 192);
		if (v30 != 0) {
			// 0x801f4
			result2 = *(int32_t *)(g23 - 0x708c) + 32 * (int32_t)v30;
			result = result2;
			if (__asm_rlwinm_((int32_t) * (int16_t *)(result2 - 10), 0, 30, 30) != 0) {
				// 0x8020c
				v13 = g23;
				result3 = *(int32_t *)(v13 - 0x762c);
				result = result3;
				v31 = *(int32_t *)(v13 - 0x7628);
				v10 = v31;
				v27 = *(int32_t *)result3;
				v8 = v27;
				if (v27 >= 1) {
					int32_t v44 = v31; // 0x80224
					while (true) {
						// 0x80224
						v19 = 232 * *(int32_t *)v44;
						result = v19;
						v14 = g36;
						if (*(char *)(v14 + v19 + 217) == 1) {
						lab_0x8023c_2:;
							int32_t v45 = v14 + v19; // 0x8023c
							int32_t v46 = v45;       // r6
							if (g31 == (int32_t) * (char *)(v45 + 216)) {
								int32_t v47 = v45 + 164;                 // 0x8024c
								int32_t v48 = v47;                       // r7
								unsigned char v49 = *(char *)(v9 + 164); // 0x80250
								result = v49;
								int32_t v50 = v45; // 0x80288
								if (v49 > *(char *)v47) {
									// 0x80260
									*(int32_t *)(v45 + 172) = *(int32_t *)(v9 + 32);
									*(int32_t *)(v46 + 176) = *(int32_t *)(v9 + 36);
									int32_t v51 = (int32_t) * (char *)(v9 + 164); // 0x80270
									result = v51;
									*(char *)v48 = (char)(v51 - 1);
									v50 = v46;
									// branch -> 0x8027c
								}
								// 0x8027c
								if (*(char *)(v50 + 156) == 12) {
									int32_t v52 = v50 + 160;       // 0x80288
									int32_t v53 = *(int32_t *)v52; // 0x80288
									result = v53;
									v48 = v52;
									if (__asm_rlwinm_(v53, 0, 29, 29) != 0) {
										// 0x80298
										*(int32_t *)v48 = __asm_rlwinm(result, 0, 30, 28);
										*(int32_t *)(v46 + 4) = 7;
										// branch -> 0x802a8
									}
								}
							}
						}
					lab_0x802a8_2:;
						int32_t v54 = v10 + 4; // 0x802a8
						v10 = v54;
						int32_t v55 = v8 - 1; // 0x802ac
						v8 = v55;
						if (v55 == 0) {
							// break -> 0x802b0
							break;
						}
						v44 = v54;
						// continue -> 0x80224
					}
					// 0x802b0
					g10 = v1;
					return result;
				}
			}
		}
	}
	// 0x802b0
	g10 = v1;
	return result;
}

// Address range: 0x802c4 - 0x804dc
int32_t function_802c4(int32_t a1, int32_t a2)
{
	// 0x802c4
	g37 = a2;
	g34 = a1;
	int32_t v1 = g10; // 0x802c8
	g35 = *(int32_t *)(g23 - 0x70bc);
	g33 = g37;
	int32_t v2 = function_8539c(); // 0x802e8
	g37 = 2;
	int32_t v3;
	uint32_t v4;
	int32_t *v5;
	int32_t v6;     // 0x803e8
	bool v7;        // 0x8040c
	int32_t v8;     // 0x80418
	int32_t v9;     // 0x80458
	bool v10;       // 0x8047c
	int32_t v11;    // 0x80488
	int32_t result; // 0x804cc
	int32_t v12;    // 0x803c8
	if (random(101) == 0) {
		// 0x80364
		if (v2 == 0) {
			// 0x80374
			g34 = g31;
			g37 = *(int32_t *)(g35 + 4 * g33);
			bool v13; // 0x80394
			if (function_8539c() == 0) {
				// 0x80390
				v13 = true;
				// branch -> 0x80394
			} else {
				// 0x80374
				v13 = g30 % 256 == 0;
				// branch -> 0x80394
			}
			// 0x80394
			if (v13) {
				// 0x8039c
				g34 = g31;
				g37 = *(int32_t *)(g36 + 4 * g33);
				if (function_8539c() == 0) {
					// 0x803b8
					// branch -> 0x803c0
				}
			}
			// 0x803c0
			v4 = g29;
			g37 = 2;
			v12 = random(102);
			g29 = 1;
			g30 = 1;
			if (v12 == 0) {
				// 0x80444
				if (v4 % 256 == 0) {
					// 0x80454
					v9 = g36;
					g34 = g31;
					g37 = *(int32_t *)(4 * *(int32_t *)(v9 + 4 * g33) + v9);
					if (function_8539c() == 0) {
						// 0x80478
						g30 = 0;
						v10 = true;
						// branch -> 0x8047c
					} else {
						// 0x80454
						v10 = g30 % 256 == 0;
						// branch -> 0x8047c
					}
					// 0x8047c
					if (v10) {
						// 0x80484
						v11 = g35;
						g34 = g31;
						g37 = *(int32_t *)(4 * *(int32_t *)(v11 + 4 * g33) + v11);
						if (function_8539c() == 0) {
							// 0x804a8
							g29 = 0;
							// branch -> 0x804b0
						}
					}
					// 0x804b0
					v3 = g29 % 256;
					g29 = v3;
					if (v3 != 0) {
						// 0x804b8
						function_7fe38(g31, g32);
						result = g29;
						// branch -> 0x804c4
					} else {
						result = 0;
					}
					// 0x804c4
					g10 = v1;
					return result;
				}
			} else {
				// 0x803d4
				if (v4 % 256 == 0) {
					// 0x803e4
					v6 = g35;
					g34 = g31;
					g37 = *(int32_t *)(4 * *(int32_t *)(v6 + 4 * g33) + v6);
					if (function_8539c() == 0) {
						// 0x80408
						g30 = 0;
						v7 = true;
						// branch -> 0x8040c
					} else {
						// 0x803e4
						v7 = g30 % 256 == 0;
						// branch -> 0x8040c
					}
					// 0x8040c
					if (v7) {
						// 0x80414
						v8 = g36;
						g34 = g31;
						g37 = *(int32_t *)(4 * *(int32_t *)(v8 + 4 * g33) + v8);
						if (function_8539c() == 0) {
							// 0x80438
							g29 = 0;
							// branch -> 0x804b0
						}
					}
					// 0x804b0
					v3 = g29 % 256;
					g29 = v3;
					if (v3 != 0) {
						// 0x804b8
						function_7fe38(g31, g32);
						result = g29;
						// branch -> 0x804c4
					} else {
						result = 0;
					}
					// 0x804c4
					g10 = v1;
					return result;
				}
			}
			// 0x804b0
			v3 = g29 % 256;
			g29 = v3;
			if (v3 != 0) {
				// 0x804b8
				function_7fe38(g31, g32);
				result = g29;
				// branch -> 0x804c4
			} else {
				result = 0;
			}
			// 0x804c4
			g10 = v1;
			return result;
		}
		v5 = &g29;
	} else {
		// 0x80304
		if (v2 == 0) {
			// 0x80314
			g34 = g31;
			g37 = *(int32_t *)(g36 + 4 * g33);
			bool v14; // 0x80334
			if (function_8539c() == 0) {
				// 0x80330
				v14 = true;
				// branch -> 0x80334
			} else {
				// 0x80314
				v14 = g29 % 256 == 0;
				// branch -> 0x80334
			}
			// 0x80334
			if (v14) {
				// 0x8033c
				g34 = g31;
				g37 = *(int32_t *)(g35 + 4 * g33);
				if (function_8539c() == 0) {
					// 0x80358
					// branch -> 0x803c0
				}
			}
			// 0x803c0
			v4 = g30;
			g37 = 2;
			v12 = random(102);
			g29 = 1;
			g30 = 1;
			if (v12 == 0) {
				// 0x80444
				if (v4 % 256 == 0) {
					// 0x80454
					v9 = g36;
					g34 = g31;
					g37 = *(int32_t *)(4 * *(int32_t *)(v9 + 4 * g33) + v9);
					if (function_8539c() == 0) {
						// 0x80478
						g30 = 0;
						v10 = true;
						// branch -> 0x8047c
					} else {
						// 0x80454
						v10 = g30 % 256 == 0;
						// branch -> 0x8047c
					}
					// 0x8047c
					if (v10) {
						// 0x80484
						v11 = g35;
						g34 = g31;
						g37 = *(int32_t *)(4 * *(int32_t *)(v11 + 4 * g33) + v11);
						if (function_8539c() == 0) {
							// 0x804a8
							g29 = 0;
							// branch -> 0x804b0
						}
					}
					// 0x804b0
					v3 = g29 % 256;
					g29 = v3;
					if (v3 != 0) {
						// 0x804b8
						function_7fe38(g31, g32);
						result = g29;
						// branch -> 0x804c4
					} else {
						result = 0;
					}
					// 0x804c4
					g10 = v1;
					return result;
				}
			} else {
				// 0x803d4
				if (v4 % 256 == 0) {
					// 0x803e4
					v6 = g35;
					g34 = g31;
					g37 = *(int32_t *)(4 * *(int32_t *)(v6 + 4 * g33) + v6);
					if (function_8539c() == 0) {
						// 0x80408
						g30 = 0;
						v7 = true;
						// branch -> 0x8040c
					} else {
						// 0x803e4
						v7 = g30 % 256 == 0;
						// branch -> 0x8040c
					}
					// 0x8040c
					if (v7) {
						// 0x80414
						v8 = g36;
						g34 = g31;
						g37 = *(int32_t *)(4 * *(int32_t *)(v8 + 4 * g33) + v8);
						if (function_8539c() == 0) {
							// 0x80438
							g29 = 0;
							// branch -> 0x804b0
						}
					}
					// 0x804b0
					v3 = g29 % 256;
					g29 = v3;
					if (v3 != 0) {
						// 0x804b8
						function_7fe38(g31, g32);
						result = g29;
						// branch -> 0x804c4
					} else {
						result = 0;
					}
					// 0x804c4
					g10 = v1;
					return result;
				}
			}
			// 0x804b0
			v3 = g29 % 256;
			g29 = v3;
			if (v3 != 0) {
				// 0x804b8
				function_7fe38(g31, g32);
				result = g29;
				// branch -> 0x804c4
			} else {
				result = 0;
			}
			// 0x804c4
			g10 = v1;
			return result;
		}
		v5 = &g30;
	}
	// 0x803c0
	v4 = *v5;
	g37 = 2;
	v12 = random(102);
	g29 = 1;
	g30 = 1;
	if (v12 == 0) {
		// 0x80444
		if (v4 % 256 == 0) {
			// 0x80454
			v9 = g36;
			g34 = g31;
			g37 = *(int32_t *)(4 * *(int32_t *)(v9 + 4 * g33) + v9);
			if (function_8539c() == 0) {
				// 0x80478
				g30 = 0;
				v10 = true;
				// branch -> 0x8047c
			} else {
				// 0x80454
				v10 = g30 % 256 == 0;
				// branch -> 0x8047c
			}
			// 0x8047c
			if (v10) {
				// 0x80484
				v11 = g35;
				g34 = g31;
				g37 = *(int32_t *)(4 * *(int32_t *)(v11 + 4 * g33) + v11);
				if (function_8539c() == 0) {
					// 0x804a8
					g29 = 0;
					// branch -> 0x804b0
				}
			}
			// 0x804b0
			v3 = g29 % 256;
			g29 = v3;
			if (v3 != 0) {
				// 0x804b8
				function_7fe38(g31, g32);
				result = g29;
				// branch -> 0x804c4
			} else {
				result = 0;
			}
			// 0x804c4
			g10 = v1;
			return result;
		}
	} else {
		// 0x803d4
		if (v4 % 256 == 0) {
			// 0x803e4
			v6 = g35;
			g34 = g31;
			g37 = *(int32_t *)(4 * *(int32_t *)(v6 + 4 * g33) + v6);
			if (function_8539c() == 0) {
				// 0x80408
				g30 = 0;
				v7 = true;
				// branch -> 0x8040c
			} else {
				// 0x803e4
				v7 = g30 % 256 == 0;
				// branch -> 0x8040c
			}
			// 0x8040c
			if (v7) {
				// 0x80414
				v8 = g36;
				g34 = g31;
				g37 = *(int32_t *)(4 * *(int32_t *)(v8 + 4 * g33) + v8);
				if (function_8539c() == 0) {
					// 0x80438
					g29 = 0;
					// branch -> 0x804b0
				}
			}
			// 0x804b0
			v3 = g29 % 256;
			g29 = v3;
			if (v3 != 0) {
				// 0x804b8
				function_7fe38(g31, g32);
				result = g29;
				// branch -> 0x804c4
			} else {
				result = 0;
			}
			// 0x804c4
			g10 = v1;
			return result;
		}
	}
	// 0x804b0
	v3 = g29 % 256;
	g29 = v3;
	if (v3 != 0) {
		// 0x804b8
		function_7fe38(g31, g32);
		result = g29;
		// branch -> 0x804c4
	} else {
		result = 0;
	}
	// 0x804c4
	g10 = v1;
	return result;
}

// Address range: 0x804dc - 0x80598
int32_t function_804dc(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x804e4
	g36 = v1;
	int32_t v2 = g35; // 0x804e8
	g35 = a1;
	int32_t v3 = a1; // 0x8050c
	if (a1 >= 200) {
		// 0x80500
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e00));
		v1 = g36;
		v3 = g35;
		// branch -> 0x8050c
	}
	int32_t v4 = 232 * v3;                    // 0x8050c
	int32_t v5 = *(int32_t *)(v4 + v1 + 160); // 0x80514
	int32_t v6 = *(int32_t *)(g23 + (__asm_rlwinm_(v5, 0, 22, 22) == 0 ? -0x70c4 : -0x70c0));
	int32_t v7 = v4 + g36;                                                                    // 0x8052c
	int32_t v8 = *(int32_t *)(v7 + 32);                                                       // 0x80534
	int32_t v9 = *(int32_t *)(v7 + 36);                                                       // 0x8053c
	unsigned char v10 = *(char *)(v7 + 80);                                                   // 0x80544
	unsigned char v11 = *(char *)(v7 + 81);                                                   // 0x80548
	int32_t v12;                                                                              // bp-40
	int32_t v13 = function_9f124(v6, g35, v8, v9, (int32_t)v10, (int32_t)v11, (int32_t)&v12); // 0x8054c
	int32_t result;
	if (v13 != 0) {
		int32_t v14 = *(int32_t *)(g23 - 0x5e04);                              // 0x80560
		int32_t v15 = (int32_t) * (char *)(v14 + 0x1000000 * v12 / 0x1000000); // 0x8056c
		function_802c4(g35, v15);
		result = 1;
		// branch -> 0x80580
	} else {
		result = 0;
	}
	// 0x80580
	g35 = v2;
	return result;
}

// Address range: 0x80598 - 0x806c0
int32_t function_80598(int32_t a1, int32_t a2)
{
	// 0x80598
	g37 = a2;
	g34 = a1;
	g33 = *(int32_t *)(g23 - 0x70bc);
	g35 = *(int32_t *)(g23 - 0x70b8);
	g36 = function_8539c();
	g37 = 2;
	int32_t v1 = g36; // 0x80638
	int32_t v2;
	int32_t *v3;
	int32_t result; // 0x806b0
	if (random(101) == 0) {
		// 0x80638
		g36 = 1;
		if (v1 == 0) {
			// 0x80648
			g34 = g29;
			g37 = *(int32_t *)(g33 + 4 * g31);
			bool v4; // 0x80668
			if (function_8539c() == 0) {
				// 0x80664
				g36 = 0;
				v4 = true;
				// branch -> 0x80668
			} else {
				// 0x80648
				v4 = g36 % 256 == 0;
				// branch -> 0x80668
			}
			// 0x80668
			if (v4) {
				// 0x80670
				g34 = g29;
				g37 = *(int32_t *)(g35 + 4 * g31);
				if (function_8539c() == 0) {
					// 0x8068c
					// branch -> 0x80694
				}
			}
			// 0x80694
			v2 = g32 % 256;
			g32 = v2;
			if (v2 != 0) {
				// 0x8069c
				function_7fe38(g29, g30);
				result = g32;
				// branch -> 0x806a8
			} else {
				result = 0;
			}
			// 0x806a8
			return result;
		}
		v3 = &g32;
	} else {
		// 0x805d8
		g36 = 1;
		if (v1 == 0) {
			// 0x805e8
			g34 = g29;
			g37 = *(int32_t *)(g35 + 4 * g31);
			bool v5; // 0x80608
			if (function_8539c() == 0) {
				// 0x80604
				v5 = true;
				// branch -> 0x80608
			} else {
				// 0x805e8
				v5 = g32 % 256 == 0;
				// branch -> 0x80608
			}
			// 0x80608
			if (v5) {
				// 0x80610
				g34 = g29;
				g37 = *(int32_t *)(g33 + 4 * g31);
				if (function_8539c() == 0) {
					// 0x8062c
					g36 = 0;
					// branch -> 0x80694
				}
			}
			// 0x80694
			v2 = g36 % 256;
			g32 = v2;
			if (v2 != 0) {
				// 0x8069c
				function_7fe38(g29, g30);
				result = g32;
				// branch -> 0x806a8
			} else {
				result = 0;
			}
			// 0x806a8
			return result;
		}
		v3 = &g36;
	}
	// 0x80694
	v2 = *v3 % 256;
	g32 = v2;
	if (v2 != 0) {
		// 0x8069c
		function_7fe38(g29, g30);
		result = g32;
		// branch -> 0x806a8
	} else {
		result = 0;
	}
	// 0x806a8
	return result;
}

// Address range: 0x806c0 - 0x80718
int32_t function_806c0(int32_t a1, int32_t a2)
{
	// 0x806c0
	g37 = a2;
	g34 = a1;
	int32_t v1 = g36; // 0x806c0
	int32_t v2 = g35; // 0x806c8
	g35 = g37;
	g33 = g34;
	int32_t v3 = function_8539c(); // 0x806e0
	g36 = v3;
	int32_t result; // 0x80700
	if (v3 != 0) {
		// 0x806ec
		function_7fe38(g33, g35);
		result = g36;
		// branch -> 0x806f8
	} else {
		result = 0;
	}
	// 0x806f8
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0x80718 - 0x80880
int32_t function_80718(int32_t a1, int32_t a2, int32_t *a3)
{
	// 0x80718
	g34 = a1;
	int32_t v1 = g10;                        // 0x8071c
	int32_t v2 = *(int32_t *)(g23 - 0x70bc); // 0x80720
	int32_t v3 = *(int32_t *)(g23 - 0x70b8); // 0x80728
	g33 = v3;
	g35 = g34;
	int32_t v4 = 4 * a2; // 0x80758
	int32_t v5;
	if ((int32_t)a3 == 0) {
		// 0x80758
		v5 = 4 * *(int32_t *)(v4 + v2) + v2;
		// branch -> 0x80768
	} else {
		// 0x80744
		v5 = 4 * *(int32_t *)(v4 + v3) + v3;
		// branch -> 0x80768
	}
	// 0x80768
	g37 = *(int32_t *)v5;
	int32_t v6 = function_8539c(); // 0x80774
	g31 = v6;
	int32_t result; // 0x80870
	int32_t v7;     // 0x80850
	int32_t v8;     // 0x80860
	int32_t v9;     // 0x8085c
	if (v6 != 0) {
		// 0x80828
		if (v6 == 0) {
			// 0x80840
			v7 = llvm_ctlz_i32(g38, true);
			*(int32_t *)g36 = __asm_rlwinm(v7, 27, 24, 31);
			v9 = *(int32_t *)(4 * g30 + *(int32_t *)(g23 - 0x7104));
			v8 = function_802c4(v9, v9);
			g31 = v8;
			result = v8;
			// branch -> 0x80868
		} else {
			// 0x80830
			function_7fe38(g35, g29);
			result = g31;
			// branch -> 0x80868
		}
		// 0x80868
		g10 = v1;
		return result;
	}
	int32_t v10 = 4 * g30; // 0x807dc
	int32_t v11;           // 0x80824
	if (g38 == 0) {
		// 0x807dc
		g34 = g35;
		g37 = *(int32_t *)(g33 + v10);
		if (function_8539c() == 0) {
			// 0x80800
			g34 = g35;
			g37 = *(int32_t *)(g33 + 4 * *(int32_t *)g31);
			if (function_8539c() == 0) {
				// 0x80820
				g32 = 0;
				// branch -> 0x80824
			}
		}
		// 0x80824
		v11 = g32 % 256;
		g31 = v11;
		// branch -> 0x80828
	} else {
		// 0x8078c
		g34 = g35;
		g33 = 1;
		g37 = *(int32_t *)(g32 + v10);
		if (function_8539c() == 0) {
			// 0x807b0
			g34 = g35;
			g37 = *(int32_t *)(g32 + 4 * *(int32_t *)g31);
			if (function_8539c() == 0) {
				// 0x807d0
				g33 = 0;
				// branch -> 0x807d4
			}
		}
		int32_t v12 = g33 % 256; // 0x807d4
		g31 = v12;
		v11 = v12;
		// branch -> 0x80828
	}
	// 0x80828
	if (v11 == 0) {
		// 0x80840
		v7 = llvm_ctlz_i32(g38, true);
		*(int32_t *)g36 = __asm_rlwinm(v7, 27, 24, 31);
		v9 = *(int32_t *)(4 * g30 + *(int32_t *)(g23 - 0x7104));
		v8 = function_802c4(v9, v9);
		g31 = v8;
		result = v8;
		// branch -> 0x80868
	} else {
		// 0x80830
		function_7fe38(g35, g29);
		result = g31;
		// branch -> 0x80868
	}
	// 0x80868
	g10 = v1;
	return result;
}

// Address range: 0x80880 - 0x80a28
int32_t function_80880(int32_t a1)
{
	g33 = a1;
	int32_t v1 = a1; // 0x808a8
	if (a1 >= 200) {
		// 0x8089c
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e08));
		v1 = g33;
		// branch -> 0x808a8
	}
	int32_t result = *(int32_t *)(g23 - 0x7754); // 0x808ac
	int32_t v2 = result + 232 * v1;              // 0x808b0
	g36 = v2;
	if (*(int32_t *)(v2 + 4) != 0) {
		// 0x80a14
		return result;
	}
	int32_t v3 = *(int32_t *)(v2 + 32);                    // 0x808c0
	int32_t v4 = *(int32_t *)(v2 + 36);                    // 0x808cc
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x779c);   // 0x808d0
	int32_t result2 = v5;                                  // r3
	int32_t v6 = (int32_t) * (char *)(v5 + v4 + 112 * v3); // 0x808d8
	if (__asm_rlwinm_(v6, 0, 30, 30) != 0) {
		int32_t v7 = g36; // 0x808e4
		g37 = 100;
		g35 = *(int32_t *)(v7 + 72);
		int32_t v8 = v3 - (int32_t) * (char *)(v7 + 80); // 0x808f8
		int32_t v9 = v4 - (int32_t) * (char *)(v7 + 81); // r26
		int32_t v10 = random(103);                       // r28
		g34 = v8;
		int32_t v11; // 0x809e8
		int32_t v12; // 0x80a00
		int32_t v13; // 0x80a04
		if (abs() <= 1) {
			// 0x80918
			g34 = v9;
			if (abs() <= 1) {
				int32_t v14 = 2 * (int32_t) * (char *)(g36 + 157); // 0x8092c
				result2 = v14;
				if (v10 < v14 + 10) {
					// 0x8093c
					result2 = function_7c64c(g33);
					// branch -> 0x809e8
				}
				// 0x809e8
				v11 = g36;
				if (*(int32_t *)(v11 + 4) == 0) {
					// 0x809f4
					v12 = *(int32_t *)(v11 + 224) + 8 * *(int32_t *)(v11 + 72);
					v13 = *(int32_t *)(v12 + 8);
					result2 = v13;
					*(int32_t *)(v11 + 84) = v13;
					*(int32_t *)(g36 + 88) = *(int32_t *)(v12 + 12);
					// branch -> 0x80a14
				}
				// 0x80a14
				return result2;
			}
		}
		int32_t v15 = 2 * (int32_t) * (char *)(g36 + 157); // 0x8094c
		result2 = v15;
		if (v10 < v15 + 10) {
			// 0x8095c
			g34 = v8;
			if (abs() < 2 * (int32_t) * (char *)(g36 + 157) + 4) {
				// 0x80978
				g34 = v9;
				if (abs() < 2 * (int32_t) * (char *)(g36 + 157) + 4) {
					// 0x80994
					g34 = g33;
					int32_t v16 = function_7bfc0(); // 0x80998
					result2 = function_802c4(g33, v16);
					// branch -> 0x809e8
					// 0x809e8
					v11 = g36;
					if (*(int32_t *)(v11 + 4) == 0) {
						// 0x809f4
						v12 = *(int32_t *)(v11 + 224) + 8 * *(int32_t *)(v11 + 72);
						v13 = *(int32_t *)(v12 + 8);
						result2 = v13;
						*(int32_t *)(v11 + 84) = v13;
						*(int32_t *)(g36 + 88) = *(int32_t *)(v12 + 12);
						// branch -> 0x80a14
					}
					// 0x80a14
					return result2;
				}
			}
			// 0x809ac
			g37 = 100;
			int32_t v17; // 0x809d4
			if (random(104) < 2 * (int32_t) * (char *)(g36 + 157) + 20) {
				// 0x809cc
				g37 = 8;
				v17 = random(104);
				g35 = v17;
				// branch -> 0x809dc
			} else {
				// 0x809ac
				v17 = g35;
				// branch -> 0x809dc
			}
			// 0x809dc
			result2 = function_806c0(g33, v17);
			// branch -> 0x809e8
		}
		// 0x809e8
		v11 = g36;
		if (*(int32_t *)(v11 + 4) == 0) {
			// 0x809f4
			v12 = *(int32_t *)(v11 + 224) + 8 * *(int32_t *)(v11 + 72);
			v13 = *(int32_t *)(v12 + 8);
			result2 = v13;
			*(int32_t *)(v11 + 84) = v13;
			*(int32_t *)(g36 + 88) = *(int32_t *)(v12 + 12);
			// branch -> 0x80a14
		}
	}
	// 0x80a14
	return result2;
}

// Address range: 0x80a28 - 0x80bbc
int32_t function_80a28(int32_t a1)
{
	g33 = a1;
	int32_t v1 = a1; // 0x80a50
	if (a1 >= 200) {
		// 0x80a44
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e0c));
		v1 = g33;
		// branch -> 0x80a50
	}
	int32_t result = *(int32_t *)(g23 - 0x7754); // 0x80a54
	int32_t v2 = result + 232 * v1;              // 0x80a58
	g36 = v2;
	if (*(int32_t *)(v2 + 4) != 0) {
		// 0x80ba8
		return result;
	}
	// 0x80a68
	int32_t result2; // 0x80b18
	if (*(char *)(v2 + 164) != 0) {
		int32_t v3 = *(int32_t *)(v2 + 32);  // 0x80a74
		int32_t v4 = *(int32_t *)(v2 + 36);  // 0x80a7c
		int32_t v5 = *(int32_t *)(v2 + 176); // 0x80a8c
		g31 = v4 - (int32_t) * (char *)(v2 + 81);
		int32_t v6 = GetDirection(v3, v4, *(int32_t *)(v2 + 172), v5); // 0x80a94
		g35 = v6;
		*(int32_t *)(g36 + 72) = v6;
		g34 = v3 - (int32_t) * (char *)(v2 + 80);
		int32_t v7; // 0x80b80
		int32_t v8; // 0x80b94
		int32_t v9; // 0x80b98
		if (abs() <= 1) {
			// 0x80ab0
			g34 = g31;
			if (abs() <= 1) {
				// 0x80ac0
				if (*(int32_t *)(g36 + 116) != 13) {
					// 0x80acc
					g37 = 100;
					if (random(105) >= 2 * (int32_t) * (char *)(g36 + 157) + 20) {
						// 0x80af8
						g37 = 10;
						int32_t v10 = random(105); // 0x80b00
						result2 = function_7c204(g33, v10 + 10 - 2 * (int32_t) * (char *)(g36 + 157));
						// branch -> 0x80b80
						// 0x80b80
						v7 = g36;
						if (*(int32_t *)(v7 + 4) == 0) {
							// 0x80b8c
							v8 = 8 * g35 + *(int32_t *)(v7 + 224);
							v9 = *(int32_t *)(v8 + 8);
							*(int32_t *)(v7 + 84) = v9;
							*(int32_t *)(g36 + 88) = *(int32_t *)(v8 + 12);
							result2 = v9;
							// branch -> 0x80ba8
						}
						// 0x80ba8
						return result2;
					}
				}
				int32_t v11 = function_7c64c(g33); // 0x80af0
				// branch -> 0x80b80
				// 0x80b80
				v7 = g36;
				result2 = v11;
				if (*(int32_t *)(v7 + 4) == 0) {
					// 0x80b8c
					v8 = 8 * g35 + *(int32_t *)(v7 + 224);
					v9 = *(int32_t *)(v8 + 8);
					*(int32_t *)(v7 + 84) = v9;
					*(int32_t *)(g36 + 88) = *(int32_t *)(v8 + 12);
					result2 = v9;
					// branch -> 0x80ba8
				}
				// 0x80ba8
				return result2;
			}
		}
		// 0x80b20
		if (*(int32_t *)(g36 + 116) != 13) {
			// 0x80b2c
			g37 = 100;
			if (random(106) < -4 * (int32_t) * (char *)(g36 + 157) + 35) {
				// 0x80b4c
				g37 = 10;
				int32_t v12 = random(106);                                                         // 0x80b54
				int32_t v13 = function_7c204(g33, v12 + 15 - 2 * (int32_t) * (char *)(g36 + 157)); // 0x80b6c
				// branch -> 0x80b80
				// 0x80b80
				v7 = g36;
				result2 = v13;
				if (*(int32_t *)(v7 + 4) == 0) {
					// 0x80b8c
					v8 = 8 * g35 + *(int32_t *)(v7 + 224);
					v9 = *(int32_t *)(v8 + 8);
					*(int32_t *)(v7 + 84) = v9;
					*(int32_t *)(g36 + 88) = *(int32_t *)(v8 + 12);
					result2 = v9;
					// branch -> 0x80ba8
				}
				// 0x80ba8
				return result2;
			}
		}
		int32_t v14 = function_802c4(g33, g35); // 0x80b7c
		// branch -> 0x80b80
		// 0x80b80
		v7 = g36;
		if (*(int32_t *)(v7 + 4) == 0) {
			// 0x80b8c
			v8 = 8 * g35 + *(int32_t *)(v7 + 224);
			v9 = *(int32_t *)(v8 + 8);
			*(int32_t *)(v7 + 84) = v9;
			*(int32_t *)(g36 + 88) = *(int32_t *)(v8 + 12);
			result2 = v9;
			// branch -> 0x80ba8
		} else {
			result2 = v14;
		}
	} else {
		result2 = result;
	}
	// 0x80ba8
	return result2;
}

// Address range: 0x80bbc - 0x80d10
int32_t function_80bbc(int32_t a1)
{
	int32_t v1 = g36; // 0x80bbc
	g36 = a1;
	int32_t v2 = g10; // 0x80bc4
	int32_t v3 = g35; // 0x80bcc
	int32_t v4 = a1;  // 0x80c5c
	if (a1 >= 200) {
		// 0x80bdc
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e10));
		v4 = g36;
		// branch -> 0x80be8
	}
	int32_t v5 = *(int32_t *)(g23 - 0x7754) + 232 * v4; // 0x80bf0
	int32_t v6;
	int32_t result;    // 0x80d0c
	int32_t v7;        // 0x80ca8
	char *v8;          // 0x80ca4
	int32_t v9;        // 0x80cf0
	int32_t v10;       // 0x80c58
	int32_t v11;       // 0x80c60
	int32_t v12;       // 0x80c64
	unsigned char v13; // 0x80c68
	unsigned char v14; // 0x80c6c
	unsigned char v15; // 0x80c7c
	int32_t v16;       // 0x80c70
	if (*(char *)*(int32_t *)(v5 + 224) == 109) {
		// 0x80be8
		// branch -> 0x80c58
		// 0x80c58
		v10 = *(int32_t *)(g23 - 0x70c8);
		v11 = *(int32_t *)(v5 + 32);
		v12 = *(int32_t *)(v5 + 36);
		v13 = *(char *)(v5 + 80);
		v14 = *(char *)(v5 + 81);
		v16 = function_85a54(v10, v4, v11, v12, (int32_t)v13, (int32_t)v14);
		v6 = g35;
		if (v16 == 0) {
			// 0x80c90
			if (__asm_rlwinm_(*(int32_t *)(v6 + 160), 0, 22, 22) != 0) {
				// 0x80c9c
				MonstCheckDoors(g36);
				// branch -> 0x80ca4
			}
			// 0x80ca4
			v8 = (char *)(g35 + 28);
			v7 = (int32_t)*v8 + 1;
			*v8 = (char)v7;
			if (v7 % 256 < 5) {
				// 0x80cd4
				// branch -> 0x80cf8
				// 0x80cf8
				g36 = v1;
				g10 = v2;
				g35 = v3;
				return 0;
			}
			// 0x80cbc
			if (function_804dc(g36) == 0) {
				// 0x80cbc
				v9 = g35;
				// branch -> 0x80cdc
				// 0x80cdc
				if (*(char *)*(int32_t *)(v9 + 224) != 109) {
					// 0x80cec
					*(char *)(v9 + 28) = 0;
					// branch -> 0x80cf4
				}
				// 0x80cf4
				result = 0;
				// branch -> 0x80cf8
			} else {
				// 0x80ccc
				result = 1;
				// branch -> 0x80cf8
			}
			// 0x80cf8
			g36 = v1;
			g10 = v2;
			g35 = v3;
			return result;
		}
		// 0x80c7c
		v15 = *(char *)(v6 + 28);
		v9 = v6;
		if (v15 >= 5) {
			// 0x80c88
			if (v15 <= 7) {
				// 0x80c90
				if (__asm_rlwinm_(*(int32_t *)(v6 + 160), 0, 22, 22) != 0) {
					// 0x80c9c
					MonstCheckDoors(g36);
					// branch -> 0x80ca4
				}
				// 0x80ca4
				v8 = (char *)(g35 + 28);
				v7 = (int32_t)*v8 + 1;
				*v8 = (char)v7;
				if (v7 % 256 < 5) {
					// 0x80cd4
					// branch -> 0x80cf8
					// 0x80cf8
					g36 = v1;
					g10 = v2;
					g35 = v3;
					return 0;
				}
				// 0x80cbc
				if (function_804dc(g36) == 0) {
					// 0x80cbc
					v9 = g35;
					// branch -> 0x80cdc
					// 0x80cdc
					if (*(char *)*(int32_t *)(v9 + 224) != 109) {
						// 0x80cec
						*(char *)(v9 + 28) = 0;
						// branch -> 0x80cf4
					}
					// 0x80cf4
					result = 0;
					// branch -> 0x80cf8
				} else {
					// 0x80ccc
					result = 1;
					// branch -> 0x80cf8
				}
				// 0x80cf8
				g36 = v1;
				g10 = v2;
				g35 = v3;
				return result;
			}
			v9 = v6;
		}
		// 0x80cdc
		if (*(char *)*(int32_t *)(v9 + 224) != 109) {
			// 0x80cec
			*(char *)(v9 + 28) = 0;
			// branch -> 0x80cf4
		}
		// 0x80cf4
		// branch -> 0x80cf8
		// 0x80cf8
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return 0;
	}
	// 0x80c04
	if (*(char *)(v5 + 164) != 0) {
		// 0x80c10
		if (*(int32_t *)(v5 + 4) == 0) {
			unsigned char v17 = *(char *)(v5 + 8); // 0x80c1c
			if (v17 != 1) {
				// 0x80c28
				if (((int32_t)v17 + 252) % 256 > 1) {
					// 0x80c50
					// branch -> 0x80cf8
					// 0x80cf8
					g36 = v1;
					g10 = v2;
					g35 = v3;
					return 0;
				}
			}
			int32_t *v18 = (int32_t *)(v5 + 32); // 0x80c38
			if (*v18 == 1) {
				// 0x80c44
				if (*(int32_t *)(v5 + 36) == 0) {
					// 0x80c50
					// branch -> 0x80cf8
					// 0x80cf8
					g36 = v1;
					g10 = v2;
					g35 = v3;
					return 0;
				}
			}
			// 0x80c58
			v10 = *(int32_t *)(g23 - 0x70c8);
			v11 = *v18;
			v12 = *(int32_t *)(v5 + 36);
			v13 = *(char *)(v5 + 80);
			v14 = *(char *)(v5 + 81);
			v16 = function_85a54(v10, v4, v11, v12, (int32_t)v13, (int32_t)v14);
			v6 = g35;
			if (v16 == 0) {
				// 0x80c90
				if (__asm_rlwinm_(*(int32_t *)(v6 + 160), 0, 22, 22) != 0) {
					// 0x80c9c
					MonstCheckDoors(g36);
					// branch -> 0x80ca4
				}
				// 0x80ca4
				v8 = (char *)(g35 + 28);
				v7 = (int32_t)*v8 + 1;
				*v8 = (char)v7;
				if (v7 % 256 < 5) {
					// 0x80cd4
					// branch -> 0x80cf8
					// 0x80cf8
					g36 = v1;
					g10 = v2;
					g35 = v3;
					return 0;
				}
				// 0x80cbc
				if (function_804dc(g36) == 0) {
					// 0x80cbc
					v9 = g35;
					// branch -> 0x80cdc
					// 0x80cdc
					if (*(char *)*(int32_t *)(v9 + 224) != 109) {
						// 0x80cec
						*(char *)(v9 + 28) = 0;
						// branch -> 0x80cf4
					}
					// 0x80cf4
					result = 0;
					// branch -> 0x80cf8
				} else {
					// 0x80ccc
					result = 1;
					// branch -> 0x80cf8
				}
				// 0x80cf8
				g36 = v1;
				g10 = v2;
				g35 = v3;
				return result;
			}
			// 0x80c7c
			v15 = *(char *)(v6 + 28);
			v9 = v6;
			if (v15 >= 5) {
				// 0x80c88
				if (v15 <= 7) {
					// 0x80c90
					if (__asm_rlwinm_(*(int32_t *)(v6 + 160), 0, 22, 22) != 0) {
						// 0x80c9c
						MonstCheckDoors(g36);
						// branch -> 0x80ca4
					}
					// 0x80ca4
					v8 = (char *)(g35 + 28);
					v7 = (int32_t)*v8 + 1;
					*v8 = (char)v7;
					if (v7 % 256 < 5) {
						// 0x80cd4
						// branch -> 0x80cf8
						// 0x80cf8
						g36 = v1;
						g10 = v2;
						g35 = v3;
						return 0;
					}
					// 0x80cbc
					if (function_804dc(g36) == 0) {
						// 0x80cbc
						v9 = g35;
						// branch -> 0x80cdc
						// 0x80cdc
						if (*(char *)*(int32_t *)(v9 + 224) != 109) {
							// 0x80cec
							*(char *)(v9 + 28) = 0;
							// branch -> 0x80cf4
						}
						// 0x80cf4
						result = 0;
						// branch -> 0x80cf8
					} else {
						// 0x80ccc
						result = 1;
						// branch -> 0x80cf8
					}
					// 0x80cf8
					g36 = v1;
					g10 = v2;
					g35 = v3;
					return result;
				}
				v9 = v6;
			}
			// 0x80cdc
			if (*(char *)*(int32_t *)(v9 + 224) != 109) {
				// 0x80cec
				*(char *)(v9 + 28) = 0;
				// branch -> 0x80cf4
			}
			// 0x80cf4
			// branch -> 0x80cf8
			// 0x80cf8
			g36 = v1;
			g10 = v2;
			g35 = v3;
			return 0;
		}
	}
	// 0x80c50
	// branch -> 0x80cf8
	// 0x80cf8
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return 0;
}

// Address range: 0x80d10 - 0x8106c
int32_t function_80d10(int32_t a1)
{
	g35 = a1;
	int32_t v1 = a1; // 0x80d3c
	if (a1 >= 200) {
		// 0x80d2c
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e14));
		v1 = g35;
		// branch -> 0x80d38
	}
	int32_t v2 = *(int32_t *)(g23 - 0x5e18);            // 0x80d38
	int32_t result = v2;                                // r3
	int32_t v3 = *(int32_t *)(g23 - 0x7754) + 232 * v1; // 0x80d48
	g36 = v3;
	int32_t v4 = *(int32_t *)v2; // bp-44
	if (*(int32_t *)(v3 + 4) != 0) {
		// 0x81058
		return result;
	}
	// 0x80d68
	if (*(char *)(v3 + 164) != 0) {
		int32_t v5 = (int32_t) * (char *)(v3 + 80); // 0x80d74
		int32_t v6 = *(int32_t *)(v3 + 32);         // 0x80d78
		int32_t v7 = (int32_t) * (char *)(v3 + 81); // 0x80d7c
		g33 = v5;
		int32_t v8 = *(int32_t *)(v3 + 36);                              // 0x80d84
		int32_t v9 = v6 - v5;                                            // r27
		int32_t v10 = *(int32_t *)(v3 + 176);                            // 0x80d90
		int32_t v11 = v8 - v7;                                           // r26
		int32_t v12 = GetDirection(v6, v8, *(int32_t *)(v3 + 172), v10); // 0x80d9c
		g29 = v12;
		*(int32_t *)(g36 + 72) = v12;
		g34 = v9;
		int32_t v13; // 0x8102c
		int32_t v14; // 0x81044
		int32_t v15; // 0x81048
		if (abs() <= 1) {
			// 0x80db8
			g34 = v11;
			if (abs() <= 1) {
				int32_t v16 = *(int32_t *)(g36 + 116); // 0x80dc8
				if (v16 != 13) {
					// 0x80dd4
					if (v16 != 14) {
						// 0x80ddc
						g37 = 100;
						if (random(105) >= (int32_t) * (char *)(g36 + 157) + 20) {
							// 0x80e04
							g37 = 10;
							int32_t v17 = random(105);                     // 0x80e0c
							int32_t v18 = (int32_t) * (char *)(g36 + 157); // 0x80e10
							result = function_7c204(g35, v17 + 10 - v18);
							// branch -> 0x8102c
							// 0x8102c
							v13 = g36;
							if (*(int32_t *)(v13 + 4) == 0) {
								// 0x81038
								v14 = *(int32_t *)(v13 + 224) + 8 * *(int32_t *)(v13 + 72);
								v15 = *(int32_t *)(v14 + 8);
								result = v15;
								*(int32_t *)(v13 + 84) = v15;
								*(int32_t *)(g36 + 88) = *(int32_t *)(v14 + 12);
								// branch -> 0x81058
							}
							// 0x81058
							return result;
						}
					}
				}
				// 0x80df8
				result = function_7c64c(g35);
				// branch -> 0x8102c
				// 0x8102c
				v13 = g36;
				if (*(int32_t *)(v13 + 4) == 0) {
					// 0x81038
					v14 = *(int32_t *)(v13 + 224) + 8 * *(int32_t *)(v13 + 72);
					v15 = *(int32_t *)(v14 + 8);
					result = v15;
					*(int32_t *)(v13 + 84) = v15;
					*(int32_t *)(g36 + 88) = *(int32_t *)(v14 + 12);
					// branch -> 0x81058
				}
				// 0x81058
				return result;
			}
		}
		// 0x80e28
		g34 = v9;
		if (abs() <= 2) {
			// 0x80e38
			g34 = v11;
			if (abs() <= 2) {
				int32_t v19 = g36;                    // 0x80e50
				int32_t v20 = *(int32_t *)(v19 + 32); // 0x80e50
				int32_t v21 = *(int32_t *)(v19 + 36); // 0x80e58
				if (function_85a54(*(int32_t *)(g23 - 0x70c4), g35, v20, v21, g33, v7) != 0) {
					int32_t v22 = g36; // 0x80e6c
					if (*(int32_t *)(v22 + 116) != 14) {
						// 0x80e78
						g13 = g35;
						int32_t v23 = *(int32_t *)(v22 + 32);                                                         // 0x80e94
						int32_t v24 = *(int32_t *)(v22 + 36);                                                         // 0x80e9c
						int32_t v25 = AddMissile(v23, v24, g33, g32, g29, 20, 0x1000000 * g28 / 0x1000000, 0, 0); // 0x80ea4
						result = v25;
						if (v25 != -1) {
							// 0x80eb0
							PlayEffect(g35, 0);
							int32_t v26 = g36;                          // 0x80ebc
							int32_t v27 = *(int32_t *)(v26 + 36);       // 0x80ecc
							int32_t v28 = 224 * *(int32_t *)(v26 + 32); // 0x80ed0
							result = v28;
							int32_t v29 = *(int32_t *)*(int32_t *)(g23 - 0x767c); // 0x80ed4
							*(int16_t *)(2 * v27 + v28 + v29) = (int16_t)(0x10000 * (-1 - g35) / 0x10000);
							*(int32_t *)(g36 + 4) = 14;
							// branch -> 0x8102c
						}
						// 0x8102c
						v13 = g36;
						if (*(int32_t *)(v13 + 4) == 0) {
							// 0x81038
							v14 = *(int32_t *)(v13 + 224) + 8 * *(int32_t *)(v13 + 72);
							v15 = *(int32_t *)(v14 + 8);
							result = v15;
							*(int32_t *)(v13 + 84) = v15;
							*(int32_t *)(g36 + 88) = *(int32_t *)(v14 + 12);
							// branch -> 0x81058
						}
						// 0x81058
						return result;
					}
				}
			}
		}
		int32_t v30 = g36; // 0x80ef4
		int32_t v31 = v30; // 0x80f7c
		if (*(int32_t *)(v30 + 116) != 13) {
			// 0x80f00
			g37 = 100;
			int32_t v32 = random(106); // 0x80f08
			int32_t v33 = g36;         // 0x80f0c
			if (v32 < -2 * (int32_t) * (char *)(v33 + 157) + 35) {
				// 0x80f20
				g37 = 10;
				int32_t v34 = random(106);                     // 0x80f28
				int32_t v35 = (int32_t) * (char *)(g36 + 157); // 0x80f2c
				result = function_7c204(g35, v34 + 15 - v35);
				// branch -> 0x8102c
				// 0x8102c
				v13 = g36;
				if (*(int32_t *)(v13 + 4) == 0) {
					// 0x81038
					v14 = *(int32_t *)(v13 + 224) + 8 * *(int32_t *)(v13 + 72);
					v15 = *(int32_t *)(v14 + 8);
					result = v15;
					*(int32_t *)(v13 + 84) = v15;
					*(int32_t *)(g36 + 88) = *(int32_t *)(v14 + 12);
					// branch -> 0x81058
				}
				// 0x81058
				return result;
			}
			v31 = v33;
		}
		int32_t *v36 = (int32_t *)(v31 + 12);                    // 0x80f44
		int32_t v37 = (int32_t) * (char *)(*v36 + (int32_t)&v4); // 0x80f50
		int32_t v38 = g29 + v37;                                 // 0x80f54
		int32_t v39 = v38;                                       // r4
		if (v38 > -1) {
			// 0x80f64
			if (v38 >= 8) {
				// 0x80f6c
				v39 = v38 - 8;
				// branch -> 0x80f70
			}
		} else {
			// 0x80f5c
			v39 = v38 + 8;
			// branch -> 0x80f70
		}
		int32_t v40 = *v36 + 1; // 0x80f74
		*v36 = v40;
		if (v40 >= 6) {
			// 0x80f84
			*(int32_t *)(g36 + 12) = 0;
			// branch -> 0x80f8c
		}
		int32_t *v41 = (int32_t *)(g36 + 16); // 0x80f8c
		int32_t v42 = *v41;                   // 0x80f8c
		int32_t v43 = v39 - v42;              // 0x80f90
		int32_t v44;                          // 0x80fb4
		if (v43 > -1) {
			// 0x80fa0
			if (v43 >= 8) {
				// 0x80fa8
				v44 = v43 - 8;
				// branch -> 0x80fac
			} else {
				v44 = v43;
			}
		} else {
			// 0x80f98
			v44 = v43 + 8;
			// branch -> 0x80fac
		}
		// 0x80fac
		int32_t v45; // 0x81014
		if (v44 >= 1) {
			// 0x80fb4
			if (v44 <= 3) {
				int32_t v46 = v42 + 1; // 0x80fbc
				int32_t v47;           // 0x80fd8
				if (v46 > -1) {
					// 0x80fcc
					if (v46 >= 8) {
						// 0x80fd4
						v47 = v42 - 7;
						// branch -> 0x80fd8
					} else {
						v47 = v46;
					}
				} else {
					// 0x80fc4
					v47 = v42 + 9;
					// branch -> 0x80fd8
				}
				// 0x80fd8
				*v41 = v47;
				// branch -> 0x8100c
				// 0x8100c
				v45 = function_806c0(g35, *(int32_t *)(g36 + 16));
				result = v45;
				if (v45 == 0) {
					// 0x81020
					result = function_80598(g35, *(int32_t *)(g36 + 72));
					// branch -> 0x8102c
				}
				// 0x8102c
				v13 = g36;
				if (*(int32_t *)(v13 + 4) == 0) {
					// 0x81038
					v14 = *(int32_t *)(v13 + 224) + 8 * *(int32_t *)(v13 + 72);
					v15 = *(int32_t *)(v14 + 8);
					result = v15;
					*(int32_t *)(v13 + 84) = v15;
					*(int32_t *)(g36 + 88) = *(int32_t *)(v14 + 12);
					// branch -> 0x81058
				}
				// 0x81058
				return result;
			}
			// 0x80fe0
			if (v44 == 4) {
				// 0x80fe4
				*v41 = v39;
				// branch -> 0x8100c
			} else {
				int32_t v48 = v42 - 1; // 0x80fec
				int32_t v49;           // 0x81008
				if (v48 > -1) {
					// 0x80ffc
					if (v48 >= 8) {
						// 0x81004
						v49 = v42 - 9;
						// branch -> 0x81008
					} else {
						v49 = v48;
					}
				} else {
					// 0x80ff4
					v49 = v42 + 7;
					// branch -> 0x81008
				}
				// 0x81008
				*v41 = v49;
				// branch -> 0x8100c
			}
			// 0x8100c
			v45 = function_806c0(g35, *(int32_t *)(g36 + 16));
			result = v45;
			if (v45 == 0) {
				// 0x81020
				result = function_80598(g35, *(int32_t *)(g36 + 72));
				// branch -> 0x8102c
			}
			// 0x8102c
			v13 = g36;
			if (*(int32_t *)(v13 + 4) == 0) {
				// 0x81038
				v14 = *(int32_t *)(v13 + 224) + 8 * *(int32_t *)(v13 + 72);
				v15 = *(int32_t *)(v14 + 8);
				result = v15;
				*(int32_t *)(v13 + 84) = v15;
				*(int32_t *)(g36 + 88) = *(int32_t *)(v14 + 12);
				// branch -> 0x81058
			}
			// 0x81058
			return result;
		}
		// 0x8100c
		v45 = function_806c0(g35, *(int32_t *)(g36 + 16));
		result = v45;
		if (v45 == 0) {
			// 0x81020
			result = function_80598(g35, *(int32_t *)(g36 + 72));
			// branch -> 0x8102c
		}
		// 0x8102c
		v13 = g36;
		if (*(int32_t *)(v13 + 4) == 0) {
			// 0x81038
			v14 = *(int32_t *)(v13 + 224) + 8 * *(int32_t *)(v13 + 72);
			v15 = *(int32_t *)(v14 + 8);
			result = v15;
			*(int32_t *)(v13 + 84) = v15;
			*(int32_t *)(g36 + 88) = *(int32_t *)(v14 + 12);
			// branch -> 0x81058
		}
	}
	// 0x81058
	return result;
}

// Address range: 0x8106c - 0x81394
int32_t function_8106c(int32_t a1)
{
	g31 = a1;
	int32_t v1 = a1; // 0x81094
	if (a1 >= 200) {
		// 0x81088
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e1c));
		v1 = g31;
		// branch -> 0x81094
	}
	int32_t result = *(int32_t *)(g23 - 0x7754); // 0x81098
	int32_t v2 = result + 232 * v1;              // 0x8109c
	g35 = v2;
	if (*(int32_t *)(v2 + 4) != 0 || *(char *)(v2 + 164) == 0) {
		// 0x81380
		return result;
	}
	int32_t v3 = *(int32_t *)(v2 + 32); // 0x810bc
	int32_t v4 = *(int32_t *)(v2 + 36); // 0x810c4
	g30 = v3 - (int32_t) * (char *)(v2 + 80);
	int32_t v5 = *(int32_t *)(v2 + 176); // 0x810d4
	g29 = v4 - (int32_t) * (char *)(v2 + 81);
	int32_t v6 = GetDirection(v3, v4, *(int32_t *)(v2 + 172), v5); // 0x810dc
	g33 = v6;
	*(int32_t *)(g35 + 72) = v6;
	g37 = 100;
	int32_t v7 = g35; // 0x810f4
	g36 = random(107);
	int32_t result2; // r3
	if (*(char *)(v7 + 8) == 2) {
		// 0x81104
		if (*(int32_t *)(v7 + 12) == 0) {
			// 0x81110
			function_802c4(g31, *(int32_t *)(4 * g33 + *(int32_t *)(g23 - 0x7104)));
			int32_t *v8 = (int32_t *)(g35 + 12); // 0x81124
			int32_t v9 = *v8;                    // 0x81124
			result2 = v9;
			*v8 = v9 + 1;
			// branch -> 0x81380
		} else {
			// 0x81134
			g37 = 2;
			int32_t v10;
			if (random(108) == 0) {
				// 0x81160
				v10 = function_802c4(g31, *(int32_t *)(4 * g33 + *(int32_t *)(g23 - 0x70bc)));
				// branch -> 0x81174
			} else {
				// 0x81148
				v10 = function_802c4(g31, *(int32_t *)(4 * g33 + *(int32_t *)(g23 - 0x70b8)));
				// branch -> 0x81174
			}
			// 0x81174
			result2 = v10;
			*(char *)(g35 + 8) = 1;
			// branch -> 0x81380
		}
		// 0x81380
		return result2;
	}
	int32_t v11 = (int32_t) * (char *)(v7 + 80); // r24
	int32_t v12 = (int32_t) * (char *)(v7 + 81); // r23
	int32_t v13;                                 // 0x812ac
	int32_t v14;                                 // 0x812d0
	int32_t v15;                                 // 0x81300
	int32_t v16;                                 // 0x81358
	int32_t v17;                                 // 0x81284
	int32_t v18;                                 // 0x812cc
	int32_t v19;                                 // 0x8136c
	int32_t v20;                                 // 0x812ac
	unsigned char v21;                           // 0x812ec
	uint32_t v22;                                // 0x81300
	int32_t v23;                                 // 0x8131c
	int32_t v24;                                 // 0x81370
	int32_t v25;                                 // 0x8133c
	int32_t v26;                                 // 0x812f8
	if (*(char *)*(int32_t *)(v7 + 224) == 40) {
		// 0x81198
		g34 = g30;
		int32_t v27; // 0x811b8
		int32_t v28; // 0x8120c
		int32_t v29; // 0x81228
		int32_t v30; // 0x8123c
		int32_t v31; // 0x81240
		int32_t v32; // 0x811cc
		int32_t v33; // 0x811d4
		int32_t v34; // 0x811dc
		int32_t v35; // 0x8120c
		int32_t v36; // 0x81214
		int32_t v37; // 0x81238
		int32_t v38; // 0x8121c
		if (abs() > 4) {
			// 0x811b8
			v27 = g35;
			if (g36 < 4 * (int32_t) * (char *)(v27 + 157) + 33) {
				// 0x811cc
				v32 = *(int32_t *)(g23 - 0x70c4);
				v33 = *(int32_t *)(v27 + 32);
				v34 = *(int32_t *)(v27 + 36);
				if (function_85a54(v32, g31, v33, v34, v11, v12) != 0) {
					// 0x811f0
					g13 = g31;
					v28 = g35;
					v35 = *(int32_t *)(v28 + 32);
					v36 = *(int32_t *)(v28 + 36);
					v38 = AddMissile(v35, v36, g28, g27, g33, 20, 0x1000000 * g32 / 0x1000000, 0, 0);
					result2 = v38;
					if (v38 != -1) {
						// 0x81228
						v29 = g35;
						v37 = *(int32_t *)(v29 + 36);
						v30 = 224 * *(int32_t *)(v29 + 32);
						result2 = v30;
						v31 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
						*(int16_t *)(2 * v37 + v30 + v31) = (int16_t)(0x10000 * (-1 - g31) / 0x10000);
						*(int32_t *)(g35 + 4) = 14;
						// branch -> 0x81358
					}
					// 0x81358
					v16 = g35;
					if (*(int32_t *)(v16 + 4) == 0) {
						// 0x81364
						v19 = 8 * g33 + *(int32_t *)(v16 + 224);
						v24 = *(int32_t *)(v19 + 8);
						result2 = v24;
						*(int32_t *)(v16 + 84) = v24;
						*(int32_t *)(g35 + 88) = *(int32_t *)(v19 + 12);
						// branch -> 0x81380
					}
					// 0x81380
					return result2;
				}
			}
		} else {
			// 0x811a8
			g34 = g29;
			if (abs() >= 5) {
				// 0x811b8
				v27 = g35;
				if (g36 < 4 * (int32_t) * (char *)(v27 + 157) + 33) {
					// 0x811cc
					v32 = *(int32_t *)(g23 - 0x70c4);
					v33 = *(int32_t *)(v27 + 32);
					v34 = *(int32_t *)(v27 + 36);
					if (function_85a54(v32, g31, v33, v34, v11, v12) != 0) {
						// 0x811f0
						g13 = g31;
						v28 = g35;
						v35 = *(int32_t *)(v28 + 32);
						v36 = *(int32_t *)(v28 + 36);
						v38 = AddMissile(v35, v36, g28, g27, g33, 20, 0x1000000 * g32 / 0x1000000, 0, 0);
						result2 = v38;
						if (v38 != -1) {
							// 0x81228
							v29 = g35;
							v37 = *(int32_t *)(v29 + 36);
							v30 = 224 * *(int32_t *)(v29 + 32);
							result2 = v30;
							v31 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
							*(int16_t *)(2 * v37 + v30 + v31) = (int16_t)(0x10000 * (-1 - g31) / 0x10000);
							*(int32_t *)(g35 + 4) = 14;
							// branch -> 0x81358
						}
						// 0x81358
						v16 = g35;
						if (*(int32_t *)(v16 + 4) == 0) {
							// 0x81364
							v19 = 8 * g33 + *(int32_t *)(v16 + 224);
							v24 = *(int32_t *)(v19 + 8);
							result2 = v24;
							*(int32_t *)(v16 + 84) = v24;
							*(int32_t *)(g35 + 88) = *(int32_t *)(v19 + 12);
							// branch -> 0x81380
						}
						// 0x81380
						return result2;
					}
				}
			}
		}
		// 0x81260
		g34 = g30;
		if (abs() <= 1) {
			// 0x81270
			g34 = g29;
			if (abs() <= 1) {
				// 0x81280
				v17 = 4 * (int32_t) * (char *)(g35 + 157);
				result2 = v17;
				if (g36 < v17 + 8) {
					// 0x81294
					function_7c64c(g31);
					*(char *)(g35 + 8) = 2;
					*(int32_t *)(g35 + 12) = 0;
					v13 = g35;
					v20 = *(int32_t *)(v13 + 224);
					result2 = v20;
					if (*(char *)v20 == 41) {
						// 0x812bc
						g36 = (int32_t) * (char *)(v13 + 80);
						g37 = 10;
						v18 = random(109) + 1;
						v14 = g36;
						g13 = g31;
						v21 = *(char *)(g35 + 81);
						v26 = AddMissile(v14, (int32_t)v21, v14 + 1, 0, -1, 8, 1, v18, 0);
						result2 = v26;
						// branch -> 0x81358
					}
				}
				// 0x81358
				v16 = g35;
				if (*(int32_t *)(v16 + 4) == 0) {
					// 0x81364
					v19 = 8 * g33 + *(int32_t *)(v16 + 224);
					v24 = *(int32_t *)(v19 + 8);
					result2 = v24;
					*(int32_t *)(v16 + 84) = v24;
					*(int32_t *)(g35 + 88) = *(int32_t *)(v19 + 12);
					// branch -> 0x81380
				}
				// 0x81380
				return result2;
			}
		}
		// 0x81300
		v15 = g35;
		v22 = *(int32_t *)(v15 + 120);
		if (v22 >= 21) {
			// 0x8130c
			if (g36 < (int32_t) * (char *)(v15 + 157) + 13) {
				// 0x8134c
				result2 = function_802c4(g31, g33);
				// branch -> 0x81358
				// 0x81358
				v16 = g35;
				if (*(int32_t *)(v16 + 4) == 0) {
					// 0x81364
					v19 = 8 * g33 + *(int32_t *)(v16 + 224);
					v24 = *(int32_t *)(v19 + 8);
					result2 = v24;
					*(int32_t *)(v16 + 84) = v24;
					*(int32_t *)(g35 + 88) = *(int32_t *)(v19 + 12);
					// branch -> 0x81380
				}
				// 0x81380
				return result2;
			}
		}
		// 0x8131c
		v23 = *(int32_t *)(v15 + 116);
		result2 = v23;
		if (v23 == 1) {
			// 0x81334
			if (v22 == 0) {
				// 0x8133c
				v25 = (int32_t) * (char *)(v15 + 157);
				result2 = v25;
				if (g36 < v25 + 63) {
					// 0x8134c
					result2 = function_802c4(g31, g33);
					// branch -> 0x81358
				}
			}
		} else {
			// 0x81328
			if (v23 <= 3) {
				// 0x81334
				if (v22 == 0) {
					// 0x8133c
					v25 = (int32_t) * (char *)(v15 + 157);
					result2 = v25;
					if (g36 < v25 + 63) {
						// 0x8134c
						result2 = function_802c4(g31, g33);
						// branch -> 0x81358
					}
				}
			}
		}
		// 0x81358
		v16 = g35;
		if (*(int32_t *)(v16 + 4) == 0) {
			// 0x81364
			v19 = 8 * g33 + *(int32_t *)(v16 + 224);
			v24 = *(int32_t *)(v19 + 8);
			result2 = v24;
			*(int32_t *)(v16 + 84) = v24;
			*(int32_t *)(g35 + 88) = *(int32_t *)(v19 + 12);
			// branch -> 0x81380
		}
		// 0x81380
		return result2;
	}
	// 0x81260
	g34 = g30;
	if (abs() <= 1) {
		// 0x81270
		g34 = g29;
		if (abs() <= 1) {
			// 0x81280
			v17 = 4 * (int32_t) * (char *)(g35 + 157);
			result2 = v17;
			if (g36 < v17 + 8) {
				// 0x81294
				function_7c64c(g31);
				*(char *)(g35 + 8) = 2;
				*(int32_t *)(g35 + 12) = 0;
				v13 = g35;
				v20 = *(int32_t *)(v13 + 224);
				result2 = v20;
				if (*(char *)v20 == 41) {
					// 0x812bc
					g36 = (int32_t) * (char *)(v13 + 80);
					g37 = 10;
					v18 = random(109) + 1;
					v14 = g36;
					g13 = g31;
					v21 = *(char *)(g35 + 81);
					v26 = AddMissile(v14, (int32_t)v21, v14 + 1, 0, -1, 8, 1, v18, 0);
					result2 = v26;
					// branch -> 0x81358
				}
			}
			// 0x81358
			v16 = g35;
			if (*(int32_t *)(v16 + 4) == 0) {
				// 0x81364
				v19 = 8 * g33 + *(int32_t *)(v16 + 224);
				v24 = *(int32_t *)(v19 + 8);
				result2 = v24;
				*(int32_t *)(v16 + 84) = v24;
				*(int32_t *)(g35 + 88) = *(int32_t *)(v19 + 12);
				// branch -> 0x81380
			}
			// 0x81380
			return result2;
		}
	}
	// 0x81300
	v15 = g35;
	v22 = *(int32_t *)(v15 + 120);
	if (v22 >= 21) {
		// 0x8130c
		if (g36 < (int32_t) * (char *)(v15 + 157) + 13) {
			// 0x8134c
			result2 = function_802c4(g31, g33);
			// branch -> 0x81358
			// 0x81358
			v16 = g35;
			if (*(int32_t *)(v16 + 4) == 0) {
				// 0x81364
				v19 = 8 * g33 + *(int32_t *)(v16 + 224);
				v24 = *(int32_t *)(v19 + 8);
				result2 = v24;
				*(int32_t *)(v16 + 84) = v24;
				*(int32_t *)(g35 + 88) = *(int32_t *)(v19 + 12);
				// branch -> 0x81380
			}
			// 0x81380
			return result2;
		}
	}
	// 0x8131c
	v23 = *(int32_t *)(v15 + 116);
	result2 = v23;
	if (v23 == 1) {
		// 0x81334
		if (v22 == 0) {
			// 0x8133c
			v25 = (int32_t) * (char *)(v15 + 157);
			result2 = v25;
			if (g36 < v25 + 63) {
				// 0x8134c
				result2 = function_802c4(g31, g33);
				// branch -> 0x81358
			}
		}
	} else {
		// 0x81328
		if (v23 <= 3) {
			// 0x81334
			if (v22 == 0) {
				// 0x8133c
				v25 = (int32_t) * (char *)(v15 + 157);
				result2 = v25;
				if (g36 < v25 + 63) {
					// 0x8134c
					result2 = function_802c4(g31, g33);
					// branch -> 0x81358
				}
			}
		}
	}
	// 0x81358
	v16 = g35;
	if (*(int32_t *)(v16 + 4) == 0) {
		// 0x81364
		v19 = 8 * g33 + *(int32_t *)(v16 + 224);
		v24 = *(int32_t *)(v19 + 8);
		result2 = v24;
		*(int32_t *)(v16 + 84) = v24;
		*(int32_t *)(g35 + 88) = *(int32_t *)(v19 + 12);
		// branch -> 0x81380
	}
	// 0x81380
	return result2;
}

// Address range: 0x81394 - 0x81540
int32_t function_81394(int32_t a1)
{
	g32 = a1;
	g33 = 0;
	int32_t v1 = a1; // 0x813e8
	if (a1 >= 200) {
		// 0x813b4
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e20));
		v1 = g32;
		// branch -> 0x813c0
	}
	int32_t result = *(int32_t *)(g23 - 0x7754); // 0x813c4
	int32_t v2 = result + 232 * v1;              // 0x813c8
	g35 = v2;
	if (*(int32_t *)(v2 + 4) != 0) {
		// 0x8152c
		return result;
	}
	// 0x813d8
	int32_t result2; // 0x8153c
	if (*(char *)(v2 + 164) != 0) {
		// 0x813e4
		g34 = v1;
		int32_t v3 = function_7bfc0(); // 0x81400
		g36 = v3;
		*(int32_t *)(g35 + 72) = v3;
		g37 = 100;
		int32_t v4 = random(110); // r27
		g34 = *(int32_t *)(v2 + 32) - (int32_t) * (char *)(v2 + 80);
		int32_t v5 = abs(); // 0x81420
		int32_t v6 = v5;
		int32_t v7;        // 0x814ac
		int32_t v8;        // 0x814c4
		int32_t v9;        // 0x814e4
		int32_t v10;       // 0x81504
		int32_t v11;       // 0x8153c3
		int32_t v12;       // 0x814c0
		int32_t v13;       // 0x81518
		unsigned char v14; // 0x814ac
		int32_t v15;       // 0x814d8
		int32_t v16;       // 0x8151c
		int32_t v17;       // 0x814e8
		if (v5 <= 3) {
			// 0x8142c
			g34 = *(int32_t *)(v2 + 36) - (int32_t) * (char *)(v2 + 81);
			int32_t v18 = abs(); // 0x81430
			if (v18 <= 3) {
				int32_t v19 = g35;                      // 0x8143c
				uint32_t v20 = *(int32_t *)(v19 + 120); // 0x8143c
				int32_t v21;                            // 0x814a0
				if (v20 >= 21) {
					// 0x81448
					if (v4 < 2 * (int32_t) * (char *)(v19 + 157) + 13) {
						// 0x81490
						v21 = function_806c0(g32, *(int32_t *)(4 * g36 + *(int32_t *)(g23 - 0x7104)));
						// branch -> 0x814a8
						// 0x814a8
						v7 = g35;
						v14 = *(char *)(v7 + 80);
						v11 = v21;
						if (v21 == 0) {
							// 0x814b8
							g37 = 100;
							v12 = random(110);
							v8 = g35;
							if (v12 < 2 * (int32_t) * (char *)(v8 + 157) + 3) {
								// 0x814d8
								v15 = *(int32_t *)(v8 + 32);
								v9 = (int32_t) * (char *)(v7 + 81);
								v17 = function_85a14(v15, *(int32_t *)(v8 + 36), (int32_t)v14, v9);
								if (v17 != 0) {
									// 0x814f4
									v11 = function_7c6ec(g32, 0, 4);
									// branch -> 0x81504
								} else {
									v11 = 0;
								}
							} else {
								v11 = v12;
							}
						}
						// 0x81504
						v10 = g35;
						result2 = v11;
						if (*(int32_t *)(v10 + 4) == 0) {
							// 0x81510
							v13 = 8 * g36 + *(int32_t *)(v10 + 224);
							v16 = *(int32_t *)(v13 + 8);
							*(int32_t *)(v10 + 84) = v16;
							*(int32_t *)(g35 + 88) = *(int32_t *)(v13 + 12);
							result2 = v16;
							// branch -> 0x8152c
						}
						// 0x8152c
						return result2;
					}
				}
				int32_t v22 = *(int32_t *)(v19 + 116); // 0x8145c
				int32_t v23;                           // 0x81480
				if (v22 == 1) {
					// 0x81474
					if (v20 == 0) {
						// 0x8147c
						v23 = 2 * (int32_t) * (char *)(v19 + 157);
						if (v4 < v23 + 63) {
							// 0x81490
							v21 = function_806c0(g32, *(int32_t *)(4 * g36 + *(int32_t *)(g23 - 0x7104)));
							// branch -> 0x814a8
							// 0x814a8
							v7 = g35;
							v14 = *(char *)(v7 + 80);
							v11 = v21;
							if (v21 == 0) {
								// 0x814b8
								g37 = 100;
								v12 = random(110);
								v8 = g35;
								if (v12 < 2 * (int32_t) * (char *)(v8 + 157) + 3) {
									// 0x814d8
									v15 = *(int32_t *)(v8 + 32);
									v9 = (int32_t) * (char *)(v7 + 81);
									v17 = function_85a14(v15, *(int32_t *)(v8 + 36), (int32_t)v14, v9);
									if (v17 != 0) {
										// 0x814f4
										v11 = function_7c6ec(g32, 0, 4);
										// branch -> 0x81504
									} else {
										v11 = 0;
									}
								} else {
									v11 = v12;
								}
							}
							// 0x81504
							v10 = g35;
							result2 = v11;
							if (*(int32_t *)(v10 + 4) == 0) {
								// 0x81510
								v13 = 8 * g36 + *(int32_t *)(v10 + 224);
								v16 = *(int32_t *)(v13 + 8);
								*(int32_t *)(v10 + 84) = v16;
								*(int32_t *)(g35 + 88) = *(int32_t *)(v13 + 12);
								result2 = v16;
								// branch -> 0x8152c
							}
							// 0x8152c
							return result2;
						}
						v6 = v23;
					} else {
						v6 = v22;
					}
				} else {
					// 0x81468
					if (v22 <= 3) {
						// 0x81474
						if (v20 == 0) {
							// 0x8147c
							v23 = 2 * (int32_t) * (char *)(v19 + 157);
							if (v4 < v23 + 63) {
								// 0x81490
								v21 = function_806c0(g32, *(int32_t *)(4 * g36 + *(int32_t *)(g23 - 0x7104)));
								// branch -> 0x814a8
								// 0x814a8
								v7 = g35;
								v14 = *(char *)(v7 + 80);
								v11 = v21;
								if (v21 == 0) {
									// 0x814b8
									g37 = 100;
									v12 = random(110);
									v8 = g35;
									if (v12 < 2 * (int32_t) * (char *)(v8 + 157) + 3) {
										// 0x814d8
										v15 = *(int32_t *)(v8 + 32);
										v9 = (int32_t) * (char *)(v7 + 81);
										v17 = function_85a14(v15, *(int32_t *)(v8 + 36), (int32_t)v14, v9);
										if (v17 != 0) {
											// 0x814f4
											v11 = function_7c6ec(g32, 0, 4);
											// branch -> 0x81504
										} else {
											v11 = 0;
										}
									} else {
										v11 = v12;
									}
								}
								// 0x81504
								v10 = g35;
								result2 = v11;
								if (*(int32_t *)(v10 + 4) == 0) {
									// 0x81510
									v13 = 8 * g36 + *(int32_t *)(v10 + 224);
									v16 = *(int32_t *)(v13 + 8);
									*(int32_t *)(v10 + 84) = v16;
									*(int32_t *)(g35 + 88) = *(int32_t *)(v13 + 12);
									result2 = v16;
									// branch -> 0x8152c
								}
								// 0x8152c
								return result2;
							}
							v6 = v23;
						} else {
							v6 = v22;
						}
					} else {
						v6 = v22;
					}
				}
				// 0x814a8
				// branch -> 0x814a8
				// 0x814a8
				v7 = g35;
				v14 = *(char *)(v7 + 80);
				v11 = v6;
				if (g33 == 0) {
					// 0x814b8
					g37 = 100;
					v12 = random(110);
					v8 = g35;
					if (v12 < 2 * (int32_t) * (char *)(v8 + 157) + 3) {
						// 0x814d8
						v15 = *(int32_t *)(v8 + 32);
						v9 = (int32_t) * (char *)(v7 + 81);
						v17 = function_85a14(v15, *(int32_t *)(v8 + 36), (int32_t)v14, v9);
						if (v17 != 0) {
							// 0x814f4
							v11 = function_7c6ec(g32, 0, 4);
							// branch -> 0x81504
						} else {
							v11 = 0;
						}
					} else {
						v11 = v12;
					}
				}
				// 0x81504
				v10 = g35;
				result2 = v11;
				if (*(int32_t *)(v10 + 4) == 0) {
					// 0x81510
					v13 = 8 * g36 + *(int32_t *)(v10 + 224);
					v16 = *(int32_t *)(v13 + 8);
					*(int32_t *)(v10 + 84) = v16;
					*(int32_t *)(g35 + 88) = *(int32_t *)(v13 + 12);
					result2 = v16;
					// branch -> 0x8152c
				}
				// 0x8152c
				return result2;
			}
			v6 = v18;
		}
		// 0x814a8
		// branch -> 0x814a8
		// 0x814a8
		v7 = g35;
		v14 = *(char *)(v7 + 80);
		v11 = v6;
		if (g33 == 0) {
			// 0x814b8
			g37 = 100;
			v12 = random(110);
			v8 = g35;
			if (v12 < 2 * (int32_t) * (char *)(v8 + 157) + 3) {
				// 0x814d8
				v15 = *(int32_t *)(v8 + 32);
				v9 = (int32_t) * (char *)(v7 + 81);
				v17 = function_85a14(v15, *(int32_t *)(v8 + 36), (int32_t)v14, v9);
				if (v17 != 0) {
					// 0x814f4
					v11 = function_7c6ec(g32, 0, 4);
					// branch -> 0x81504
				} else {
					v11 = 0;
				}
			} else {
				v11 = v12;
			}
		}
		// 0x81504
		v10 = g35;
		if (*(int32_t *)(v10 + 4) == 0) {
			// 0x81510
			v13 = 8 * g36 + *(int32_t *)(v10 + 224);
			v16 = *(int32_t *)(v13 + 8);
			*(int32_t *)(v10 + 84) = v16;
			*(int32_t *)(g35 + 88) = *(int32_t *)(v13 + 12);
			result2 = v16;
			// branch -> 0x8152c
		} else {
			result2 = v11;
		}
	} else {
		result2 = result;
	}
	// 0x8152c
	return result2;
}

// Address range: 0x81540 - 0x816b8
int32_t function_81540(int32_t a1)
{
	g33 = a1;
	int32_t v1 = a1; // 0x81590
	if (a1 >= 200) {
		// 0x8155c
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e24));
		v1 = g33;
		// branch -> 0x81568
	}
	int32_t result = *(int32_t *)(g23 - 0x7754); // 0x8156c
	int32_t v2 = result + 232 * v1;              // 0x81570
	g36 = v2;
	if (*(int32_t *)(v2 + 4) != 0) {
		// 0x816a4
		return result;
	}
	// 0x81580
	int32_t result2; // 0x816b4
	if (*(char *)(v2 + 164) != 0) {
		// 0x8158c
		g34 = v1;
		int32_t v3 = function_7bfc0(); // 0x815a8
		g35 = v3;
		*(int32_t *)(g36 + 72) = v3;
		g37 = 100;
		int32_t v4 = random(111); // r28
		g34 = *(int32_t *)(v2 + 32) - (int32_t) * (char *)(v2 + 80);
		int32_t v5; // 0x8167c
		int32_t v6; // 0x816b43
		int32_t v7; // 0x81690
		int32_t v8; // 0x81694
		if (abs() <= 1) {
			// 0x815d4
			g34 = *(int32_t *)(v2 + 36) - (int32_t) * (char *)(v2 + 81);
			if (abs() <= 1) {
				int32_t v9 = 4 * (int32_t) * (char *)(g36 + 157); // 0x815e8
				if (v4 < v9 + 15) {
					// 0x815f8
					v6 = function_7c64c(g33);
					// branch -> 0x8167c
				} else {
					// 0x81604
					if (v4 < v9 + 20) {
						// 0x81610
						v6 = function_7c830(g33);
						// branch -> 0x8167c
					} else {
						v6 = v9;
					}
				}
				// 0x8167c
				v5 = g36;
				result2 = v6;
				if (*(int32_t *)(v5 + 4) == 0) {
					// 0x81688
					v7 = 8 * g35 + *(int32_t *)(v5 + 224);
					v8 = *(int32_t *)(v7 + 8);
					*(int32_t *)(v5 + 84) = v8;
					*(int32_t *)(g36 + 88) = *(int32_t *)(v7 + 12);
					result2 = v8;
					// branch -> 0x816a4
				}
				// 0x816a4
				return result2;
			}
		}
		int32_t v10 = g36;                      // 0x8161c
		uint32_t v11 = *(int32_t *)(v10 + 120); // 0x8161c
		if (v11 >= 21) {
			// 0x81628
			if (v4 < 4 * (int32_t) * (char *)(v10 + 157) + 20) {
				int32_t v12 = function_802c4(g33, g35); // 0x81678
				// branch -> 0x8167c
				// 0x8167c
				v5 = g36;
				result2 = v12;
				if (*(int32_t *)(v5 + 4) == 0) {
					// 0x81688
					v7 = 8 * g35 + *(int32_t *)(v5 + 224);
					v8 = *(int32_t *)(v7 + 8);
					*(int32_t *)(v5 + 84) = v8;
					*(int32_t *)(g36 + 88) = *(int32_t *)(v7 + 12);
					result2 = v8;
					// branch -> 0x816a4
				}
				// 0x816a4
				return result2;
			}
		}
		int32_t v13 = *(int32_t *)(v10 + 116); // 0x8163c
		int32_t v14;                           // 0x81660
		if (v13 == 1) {
			// 0x81654
			if (v11 == 0) {
				// 0x8165c
				v14 = 4 * (int32_t) * (char *)(v10 + 157);
				if (v4 < v14 + 70) {
					// 0x81670
					v6 = function_802c4(g33, g35);
					// branch -> 0x8167c
				} else {
					v6 = v14;
				}
			} else {
				v6 = v13;
			}
		} else {
			// 0x81648
			if (v13 <= 3) {
				// 0x81654
				if (v11 == 0) {
					// 0x8165c
					v14 = 4 * (int32_t) * (char *)(v10 + 157);
					if (v4 < v14 + 70) {
						// 0x81670
						v6 = function_802c4(g33, g35);
						// branch -> 0x8167c
					} else {
						v6 = v14;
					}
				} else {
					v6 = v13;
				}
			} else {
				v6 = v13;
			}
		}
		// 0x8167c
		v5 = g36;
		if (*(int32_t *)(v5 + 4) == 0) {
			// 0x81688
			v7 = 8 * g35 + *(int32_t *)(v5 + 224);
			v8 = *(int32_t *)(v7 + 8);
			*(int32_t *)(v5 + 84) = v8;
			*(int32_t *)(g36 + 88) = *(int32_t *)(v7 + 12);
			result2 = v8;
			// branch -> 0x816a4
		} else {
			result2 = v6;
		}
	} else {
		result2 = result;
	}
	// 0x816a4
	return result2;
}

// Address range: 0x816b8 - 0x819e8
int32_t function_816b8(int32_t a1)
{
	g29 = a1;
	g36 = *(int32_t *)(g23 - 0x77a8);
	int32_t v1 = g23; // 0x8170c
	int32_t v2 = a1;  // 0x81734
	if (a1 >= 200) {
		// 0x816d8
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e28));
		v1 = g23;
		v2 = g29;
		// branch -> 0x816e4
	}
	int32_t v3 = *(int32_t *)(v1 - 0x7754) + 232 * v2; // 0x816ec
	g35 = v3;
	if (*(int32_t *)(v3 + 4) == 0) {
		int32_t v4 = *(int32_t *)(v3 + 32);                  // 0x816fc
		int32_t v5 = *(int32_t *)(v1 - 0x758c);              // 0x81700
		int32_t v6 = *(int32_t *)(v3 + 36);                  // 0x81708
		char v7 = *(char *)(*(int32_t *)v5 + v6 + 112 * v4); // 0x8171c
		if (*(char *)*(int32_t *)(v1 - 0x70cc) != v7) {
			// 0x81730
			g34 = v2;
			g33 = v4 - (int32_t) * (char *)(v3 + 80);
			g32 = v6 - (int32_t) * (char *)(v3 + 81);
			int32_t v8 = g35; // 0x81748
			g31 = function_7bfc0();
			int32_t v9 = 5 - (int32_t) * (char *)(v8 + 157); // r26
			int32_t v10;                                     // 0x817b4
			int32_t v11;                                     // 0x817cc
			int32_t v12;                                     // 0x817f4
			int32_t v13;                                     // 0x81830
			int32_t v14;                                     // 0x8183c
			int32_t v15;                                     // 0x81894
			int32_t v16;                                     // 0x818b4
			int32_t v17;                                     // 0x818d4
			int32_t v18;                                     // 0x81900
			int32_t v19;                                     // 0x819b8
			int32_t v20;                                     // 0x81898
			int32_t v21;                                     // 0x817dc
			int32_t v22;                                     // 0x81814
			int32_t *v23;                                    // 0x81954
			int32_t v24;                                     // 0x819c0
			int32_t v25;                                     // 0x817d0
			int32_t v26;                                     // 0x817e0
			int32_t v27;                                     // 0x817e4
			uint32_t v28;                                    // 0x81900
			int32_t v29;                                     // 0x81920
			int32_t v30;                                     // 0x81800
			int32_t v31;                                     // 0x81828
			int32_t v32;                                     // 0x81838
			if (*(int32_t *)(v8 + 116) == 5) {
				// 0x81760
				*(char *)(v8 + 8) = 2;
				*(int32_t *)(g35 + 12) = 0;
				// branch -> 0x817b4
			} else {
				// 0x81774
				g34 = g33;
				int32_t v33 = v9 + 3; // 0x8177c
				if (abs() < v33) {
					// 0x81788
					g34 = g32;
					if (abs() < v33) {
						// 0x81798
						if (*(int32_t *)(g35 + 12) < 9) {
							// 0x817b4
							v10 = g35;
							int32_t v34;     // 0x818f4
							int32_t result2; // 0x819e4
							int32_t result;  // 0x819b0
							int32_t v35;     // 0x81888
							int32_t v36;     // 0x819c4
							if (*(char *)(v10 + 8) == 2) {
								// 0x817c0
								if (__asm_rlwinm_(*(int32_t *)(v10 + 160), 0, 27, 27) == 0) {
									// 0x817c0
									v12 = g31;
									// branch -> 0x817f0
								} else {
									// 0x817cc
									v11 = g35;
									v25 = *(int32_t *)(v11 + 32);
									v21 = g36 + 0x55ec * *(int32_t *)(v11 + 76);
									v26 = *(int32_t *)(v21 + 80);
									v27 = *(int32_t *)(v21 + 84);
									v12 = GetDirection(v25, *(int32_t *)(v11 + 36), v26, v27);
									// branch -> 0x817f0
								}
								// 0x817f0
								v30 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * v12);
								g31 = v30;
								if (*(char *)*(int32_t *)(g35 + 224) == 31) {
									// 0x8180c
									g37 = 2;
									v22 = random(112);
									v13 = g23;
									if (v22 == 0) {
										// 0x81830
										v32 = *(int32_t *)(4 * g31 + *(int32_t *)(v13 - 0x70bc));
										g31 = v32;
										v14 = v32;
										// branch -> 0x8183c
									} else {
										// 0x81820
										v31 = *(int32_t *)(4 * g31 + *(int32_t *)(v13 - 0x70b8));
										g31 = v31;
										v14 = v31;
										// branch -> 0x8183c
									}
									// 0x8183c
									*(int32_t *)(g35 + 72) = v14;
									g37 = 100;
									g36 = random(112);
									g34 = g33;
									if (abs() < v9) {
										// 0x81860
										g34 = g32;
										if (abs() < v9) {
											// 0x81870
											if (*(int32_t *)(g35 + 160) % 2 != 0) {
												// 0x8187c
												v35 = function_7d940(g29, g31, 0);
												// branch -> 0x8196c
												// 0x8196c
												result2 = v35;
												if (*(int32_t *)(g35 + 4) == 0) {
													// 0x81978
													g34 = g33;
													if (abs() <= 1) {
														// 0x81988
														g34 = g32;
														if (abs() <= 1) {
															// 0x81998
															if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
																// 0x819ac
																result = function_7c64c(g29);
																// branch -> 0x819d4
																// 0x819d4
																return result;
															}
														}
													}
													// 0x819b8
													v19 = g35;
													v24 = 8 * g31 + *(int32_t *)(v19 + 224);
													v36 = *(int32_t *)(v24 + 8);
													*(int32_t *)(v19 + 84) = v36;
													*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
													result2 = v36;
													// branch -> 0x819d4
												}
												// 0x819d4
												return result2;
											}
										}
									}
									// 0x81890
									g34 = g33;
									v15 = abs();
									v20 = v9 + 1;
									int32_t v37; // 0x819e48
									int32_t v38; // 0x81944
									int32_t v39; // 0x81968
									if (v15 < v20) {
										// 0x818a4
										g34 = g32;
										if (abs() < v20) {
											// 0x818a4
											v17 = g35;
											// branch -> 0x818d4
											// 0x818d4
											if (*(char *)(v17 + 8) == 2) {
												// 0x81954
												v23 = (int32_t *)(v17 + 12);
												*v23 = *v23 + 1;
												v39 = function_802c4(g29, g31);
												// branch -> 0x8196c
												// 0x8196c
												result2 = v39;
												if (*(int32_t *)(g35 + 4) == 0) {
													// 0x81978
													g34 = g33;
													if (abs() <= 1) {
														// 0x81988
														g34 = g32;
														if (abs() <= 1) {
															// 0x81998
															if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
																// 0x819ac
																result = function_7c64c(g29);
																// branch -> 0x819d4
																// 0x819d4
																return result;
															}
														}
													}
													// 0x819b8
													v19 = g35;
													v24 = 8 * g31 + *(int32_t *)(v19 + 224);
													v36 = *(int32_t *)(v24 + 8);
													*(int32_t *)(v19 + 84) = v36;
													*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
													result2 = v36;
													// branch -> 0x819d4
												}
												// 0x819d4
												return result2;
											}
											// 0x818e0
											g34 = g33;
											if (abs() <= 1) {
												// 0x818f0
												g34 = g32;
												v34 = abs();
												if (v34 < 2) {
													// 0x8196c
													result2 = v34;
													if (*(int32_t *)(g35 + 4) == 0) {
														// 0x81978
														g34 = g33;
														if (abs() <= 1) {
															// 0x81988
															g34 = g32;
															if (abs() <= 1) {
																// 0x81998
																if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
																	// 0x819ac
																	result = function_7c64c(g29);
																	// branch -> 0x819d4
																	// 0x819d4
																	return result;
																}
															}
														}
														// 0x819b8
														v19 = g35;
														v24 = 8 * g31 + *(int32_t *)(v19 + 224);
														v36 = *(int32_t *)(v24 + 8);
														*(int32_t *)(v19 + 84) = v36;
														*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
														result2 = v36;
														// branch -> 0x819d4
													}
													// 0x819d4
													return result2;
												}
											}
											// 0x81900
											v18 = g35;
											v28 = *(int32_t *)(v18 + 120);
											if (v28 >= 21) {
												// 0x8190c
												if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 14) {
													// 0x81954
													v23 = (int32_t *)(v18 + 12);
													*v23 = *v23 + 1;
													v39 = function_802c4(g29, g31);
													// branch -> 0x8196c
													// 0x8196c
													result2 = v39;
													if (*(int32_t *)(g35 + 4) == 0) {
														// 0x81978
														g34 = g33;
														if (abs() <= 1) {
															// 0x81988
															g34 = g32;
															if (abs() <= 1) {
																// 0x81998
																if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
																	// 0x819ac
																	result = function_7c64c(g29);
																	// branch -> 0x819d4
																	// 0x819d4
																	return result;
																}
															}
														}
														// 0x819b8
														v19 = g35;
														v24 = 8 * g31 + *(int32_t *)(v19 + 224);
														v36 = *(int32_t *)(v24 + 8);
														*(int32_t *)(v19 + 84) = v36;
														*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
														result2 = v36;
														// branch -> 0x819d4
													}
													// 0x819d4
													return result2;
												}
											}
											// 0x81920
											v29 = *(int32_t *)(v18 + 116);
											if (v29 == 1) {
												// 0x81938
												if (v28 == 0) {
													// 0x81940
													v38 = 4 * (int32_t) * (char *)(v18 + 157);
													if (g36 < v38 + 64) {
														// 0x81954
														v23 = (int32_t *)(v18 + 12);
														*v23 = *v23 + 1;
														v37 = function_802c4(g29, g31);
														// branch -> 0x8196c
													} else {
														v37 = v38;
													}
												} else {
													v37 = v29;
												}
											} else {
												// 0x8192c
												if (v29 <= 3) {
													// 0x81938
													if (v28 == 0) {
														// 0x81940
														v38 = 4 * (int32_t) * (char *)(v18 + 157);
														if (g36 < v38 + 64) {
															// 0x81954
															v23 = (int32_t *)(v18 + 12);
															*v23 = *v23 + 1;
															v37 = function_802c4(g29, g31);
															// branch -> 0x8196c
														} else {
															v37 = v38;
														}
													} else {
														v37 = v29;
													}
												} else {
													v37 = v29;
												}
											}
											// 0x8196c
											result2 = v37;
											if (*(int32_t *)(g35 + 4) == 0) {
												// 0x81978
												g34 = g33;
												if (abs() <= 1) {
													// 0x81988
													g34 = g32;
													if (abs() <= 1) {
														// 0x81998
														if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
															// 0x819ac
															result = function_7c64c(g29);
															// branch -> 0x819d4
															// 0x819d4
															return result;
														}
													}
												}
												// 0x819b8
												v19 = g35;
												v24 = 8 * g31 + *(int32_t *)(v19 + 224);
												v36 = *(int32_t *)(v24 + 8);
												*(int32_t *)(v19 + 84) = v36;
												*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
												result2 = v36;
												// branch -> 0x819d4
											}
											// 0x819d4
											return result2;
										}
									}
									// 0x818b4
									v16 = g35;
									if (*(int32_t *)(v16 + 160) % 2 == 0) {
										// 0x818c0
										// branch -> 0x8196c
										// 0x8196c
										result2 = function_7da34(g29, g31, 1);
										if (*(int32_t *)(g35 + 4) == 0) {
											// 0x81978
											g34 = g33;
											if (abs() <= 1) {
												// 0x81988
												g34 = g32;
												if (abs() <= 1) {
													// 0x81998
													if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
														// 0x819ac
														result = function_7c64c(g29);
														// branch -> 0x819d4
														// 0x819d4
														return result;
													}
												}
											}
											// 0x819b8
											v19 = g35;
											v24 = 8 * g31 + *(int32_t *)(v19 + 224);
											v36 = *(int32_t *)(v24 + 8);
											*(int32_t *)(v19 + 84) = v36;
											*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
											result2 = v36;
											// branch -> 0x819d4
										}
										// 0x819d4
										return result2;
									}
									v17 = v16;
									// 0x818d4
									if (*(char *)(v17 + 8) == 2) {
										// 0x81954
										v23 = (int32_t *)(v17 + 12);
										*v23 = *v23 + 1;
										v39 = function_802c4(g29, g31);
										// branch -> 0x8196c
										// 0x8196c
										result2 = v39;
										if (*(int32_t *)(g35 + 4) == 0) {
											// 0x81978
											g34 = g33;
											if (abs() <= 1) {
												// 0x81988
												g34 = g32;
												if (abs() <= 1) {
													// 0x81998
													if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
														// 0x819ac
														result = function_7c64c(g29);
														// branch -> 0x819d4
														// 0x819d4
														return result;
													}
												}
											}
											// 0x819b8
											v19 = g35;
											v24 = 8 * g31 + *(int32_t *)(v19 + 224);
											v36 = *(int32_t *)(v24 + 8);
											*(int32_t *)(v19 + 84) = v36;
											*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
											result2 = v36;
											// branch -> 0x819d4
										}
										// 0x819d4
										return result2;
									}
									// 0x818e0
									g34 = g33;
									if (abs() <= 1) {
										// 0x818f0
										g34 = g32;
										v34 = abs();
										if (v34 < 2) {
											// 0x8196c
											result2 = v34;
											if (*(int32_t *)(g35 + 4) == 0) {
												// 0x81978
												g34 = g33;
												if (abs() <= 1) {
													// 0x81988
													g34 = g32;
													if (abs() <= 1) {
														// 0x81998
														if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
															// 0x819ac
															result = function_7c64c(g29);
															// branch -> 0x819d4
															// 0x819d4
															return result;
														}
													}
												}
												// 0x819b8
												v19 = g35;
												v24 = 8 * g31 + *(int32_t *)(v19 + 224);
												v36 = *(int32_t *)(v24 + 8);
												*(int32_t *)(v19 + 84) = v36;
												*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
												result2 = v36;
												// branch -> 0x819d4
											}
											// 0x819d4
											return result2;
										}
									}
									// 0x81900
									v18 = g35;
									v28 = *(int32_t *)(v18 + 120);
									if (v28 >= 21) {
										// 0x8190c
										if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 14) {
											// 0x81954
											v23 = (int32_t *)(v18 + 12);
											*v23 = *v23 + 1;
											v39 = function_802c4(g29, g31);
											// branch -> 0x8196c
											// 0x8196c
											result2 = v39;
											if (*(int32_t *)(g35 + 4) == 0) {
												// 0x81978
												g34 = g33;
												if (abs() <= 1) {
													// 0x81988
													g34 = g32;
													if (abs() <= 1) {
														// 0x81998
														if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
															// 0x819ac
															result = function_7c64c(g29);
															// branch -> 0x819d4
															// 0x819d4
															return result;
														}
													}
												}
												// 0x819b8
												v19 = g35;
												v24 = 8 * g31 + *(int32_t *)(v19 + 224);
												v36 = *(int32_t *)(v24 + 8);
												*(int32_t *)(v19 + 84) = v36;
												*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
												result2 = v36;
												// branch -> 0x819d4
											}
											// 0x819d4
											return result2;
										}
									}
									// 0x81920
									v29 = *(int32_t *)(v18 + 116);
									if (v29 == 1) {
										// 0x81938
										if (v28 == 0) {
											// 0x81940
											v38 = 4 * (int32_t) * (char *)(v18 + 157);
											if (g36 < v38 + 64) {
												// 0x81954
												v23 = (int32_t *)(v18 + 12);
												*v23 = *v23 + 1;
												v37 = function_802c4(g29, g31);
												// branch -> 0x8196c
											} else {
												v37 = v38;
											}
										} else {
											v37 = v29;
										}
									} else {
										// 0x8192c
										if (v29 <= 3) {
											// 0x81938
											if (v28 == 0) {
												// 0x81940
												v38 = 4 * (int32_t) * (char *)(v18 + 157);
												if (g36 < v38 + 64) {
													// 0x81954
													v23 = (int32_t *)(v18 + 12);
													*v23 = *v23 + 1;
													v37 = function_802c4(g29, g31);
													// branch -> 0x8196c
												} else {
													v37 = v38;
												}
											} else {
												v37 = v29;
											}
										} else {
											v37 = v29;
										}
									}
									// 0x8196c
									result2 = v37;
									if (*(int32_t *)(g35 + 4) == 0) {
										// 0x81978
										g34 = g33;
										if (abs() <= 1) {
											// 0x81988
											g34 = g32;
											if (abs() <= 1) {
												// 0x81998
												if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
													// 0x819ac
													result = function_7c64c(g29);
													// branch -> 0x819d4
													// 0x819d4
													return result;
												}
											}
										}
										// 0x819b8
										v19 = g35;
										v24 = 8 * g31 + *(int32_t *)(v19 + 224);
										v36 = *(int32_t *)(v24 + 8);
										*(int32_t *)(v19 + 84) = v36;
										*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
										result2 = v36;
										// branch -> 0x819d4
									}
									// 0x819d4
									return result2;
								}
								v14 = v30;
							} else {
								// 0x817b4
								v14 = g31;
								// branch -> 0x8183c
							}
							// 0x8183c
							*(int32_t *)(g35 + 72) = v14;
							g37 = 100;
							g36 = random(112);
							g34 = g33;
							if (abs() < v9) {
								// 0x81860
								g34 = g32;
								if (abs() < v9) {
									// 0x81870
									if (*(int32_t *)(g35 + 160) % 2 != 0) {
										// 0x8187c
										v35 = function_7d940(g29, g31, 0);
										// branch -> 0x8196c
										// 0x8196c
										result2 = v35;
										if (*(int32_t *)(g35 + 4) == 0) {
											// 0x81978
											g34 = g33;
											if (abs() <= 1) {
												// 0x81988
												g34 = g32;
												if (abs() <= 1) {
													// 0x81998
													if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
														// 0x819ac
														result = function_7c64c(g29);
														// branch -> 0x819d4
														// 0x819d4
														return result;
													}
												}
											}
											// 0x819b8
											v19 = g35;
											v24 = 8 * g31 + *(int32_t *)(v19 + 224);
											v36 = *(int32_t *)(v24 + 8);
											*(int32_t *)(v19 + 84) = v36;
											*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
											result2 = v36;
											// branch -> 0x819d4
										}
										// 0x819d4
										return result2;
									}
								}
							}
							// 0x81890
							g34 = g33;
							v15 = abs();
							v20 = v9 + 1;
							v9 = v20;
							if (v15 < v20) {
								// 0x818a4
								g34 = g32;
								if (abs() < v9) {
									// 0x818a4
									v17 = g35;
									// branch -> 0x818d4
									// 0x818d4
									if (*(char *)(v17 + 8) == 2) {
										// 0x81954
										v23 = (int32_t *)(v17 + 12);
										*v23 = *v23 + 1;
										function_802c4(g29, g31);
										// branch -> 0x8196c
									} else {
										// 0x818e0
										g34 = g33;
										if (abs() <= 1) {
											// 0x818f0
											g34 = g32;
											v34 = abs();
											if (v34 < 2) {
												// 0x8196c
												result2 = v34;
												if (*(int32_t *)(g35 + 4) == 0) {
													// 0x81978
													g34 = g33;
													if (abs() <= 1) {
														// 0x81988
														g34 = g32;
														if (abs() <= 1) {
															// 0x81998
															if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
																// 0x819ac
																result = function_7c64c(g29);
																// branch -> 0x819d4
																// 0x819d4
																return result;
															}
														}
													}
													// 0x819b8
													v19 = g35;
													v24 = 8 * g31 + *(int32_t *)(v19 + 224);
													v36 = *(int32_t *)(v24 + 8);
													*(int32_t *)(v19 + 84) = v36;
													*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
													result2 = v36;
													// branch -> 0x819d4
												}
												// 0x819d4
												return result2;
											}
										}
										// 0x81900
										v18 = g35;
										v28 = *(int32_t *)(v18 + 120);
										if (v28 >= 21) {
											// 0x8190c
											if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 14) {
												// 0x81954
												v23 = (int32_t *)(v18 + 12);
												*v23 = *v23 + 1;
												function_802c4(g29, g31);
												// branch -> 0x8196c
												// 0x8196c
												if (*(int32_t *)(g35 + 4) == 0) {
													// 0x81978
													g34 = g33;
													if (abs() <= 1) {
														// 0x81988
														g34 = g32;
														if (abs() <= 1) {
															// 0x81998
															if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
																// 0x819ac
																result = function_7c64c(g29);
																// branch -> 0x819d4
																// 0x819d4
																return result;
															}
														}
													}
													// 0x819b8
													v19 = g35;
													v24 = 8 * g31 + *(int32_t *)(v19 + 224);
													*(int32_t *)(v19 + 84) = *(int32_t *)(v24 + 8);
													*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
													// branch -> 0x819d4
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x81920
										v29 = *(int32_t *)(v18 + 116);
										if (v29 == 1) {
											// 0x81938
											if (v28 == 0) {
												// 0x81940
												if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 64) {
													// 0x81954
													v23 = (int32_t *)(v18 + 12);
													*v23 = *v23 + 1;
													function_802c4(g29, g31);
													// branch -> 0x8196c
												}
											}
										} else {
											// 0x8192c
											if (v29 <= 3) {
												// 0x81938
												if (v28 == 0) {
													// 0x81940
													if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 64) {
														// 0x81954
														v23 = (int32_t *)(v18 + 12);
														*v23 = *v23 + 1;
														function_802c4(g29, g31);
														// branch -> 0x8196c
													}
												}
											}
										}
										// 0x8196c
										if (*(int32_t *)(g35 + 4) == 0) {
											// 0x81978
											g34 = g33;
											if (abs() <= 1) {
												// 0x81988
												g34 = g32;
												if (abs() <= 1) {
													// 0x81998
													if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
														// 0x819ac
														function_7c64c(g29);
														// branch -> 0x819d4
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
											}
											// 0x819b8
											v19 = g35;
											v24 = 8 * g31 + *(int32_t *)(v19 + 224);
											*(int32_t *)(v19 + 84) = *(int32_t *)(v24 + 8);
											*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
											// branch -> 0x819d4
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// 0x8196c
									if (*(int32_t *)(g35 + 4) == 0) {
										// 0x81978
										g34 = g33;
										if (abs() <= 1) {
											// 0x81988
											g34 = g32;
											if (abs() <= 1) {
												// 0x81998
												if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
													// 0x819ac
													function_7c64c(g29);
													// branch -> 0x819d4
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										}
										// 0x819b8
										v19 = g35;
										v24 = 8 * g31 + *(int32_t *)(v19 + 224);
										*(int32_t *)(v19 + 84) = *(int32_t *)(v24 + 8);
										*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
										// branch -> 0x819d4
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x818b4
							v16 = g35;
							if (*(int32_t *)(v16 + 160) % 2 == 0) {
								// 0x818c0
								function_7da34(g29, g31, 1);
								// branch -> 0x8196c
							} else {
								v17 = v16;
								// 0x818d4
								if (*(char *)(v17 + 8) == 2) {
									// 0x81954
									v23 = (int32_t *)(v17 + 12);
									*v23 = *v23 + 1;
									function_802c4(g29, g31);
									// branch -> 0x8196c
								} else {
									// 0x818e0
									g34 = g33;
									if (abs() <= 1) {
										// 0x818f0
										g34 = g32;
										if (abs() < 2) {
											// 0x8196c
											if (*(int32_t *)(g35 + 4) == 0) {
												// 0x81978
												g34 = g33;
												if (abs() <= 1) {
													// 0x81988
													g34 = g32;
													if (abs() <= 1) {
														// 0x81998
														if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
															// 0x819ac
															function_7c64c(g29);
															// branch -> 0x819d4
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
												}
												// 0x819b8
												v19 = g35;
												v24 = 8 * g31 + *(int32_t *)(v19 + 224);
												*(int32_t *)(v19 + 84) = *(int32_t *)(v24 + 8);
												*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
												// branch -> 0x819d4
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x81900
									v18 = g35;
									v28 = *(int32_t *)(v18 + 120);
									if (v28 >= 21) {
										// 0x8190c
										if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 14) {
											// 0x81954
											v23 = (int32_t *)(v18 + 12);
											*v23 = *v23 + 1;
											function_802c4(g29, g31);
											// branch -> 0x8196c
											// 0x8196c
											if (*(int32_t *)(g35 + 4) == 0) {
												// 0x81978
												g34 = g33;
												if (abs() <= 1) {
													// 0x81988
													g34 = g32;
													if (abs() <= 1) {
														// 0x81998
														if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
															// 0x819ac
															function_7c64c(g29);
															// branch -> 0x819d4
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
												}
												// 0x819b8
												v19 = g35;
												v24 = 8 * g31 + *(int32_t *)(v19 + 224);
												*(int32_t *)(v19 + 84) = *(int32_t *)(v24 + 8);
												*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
												// branch -> 0x819d4
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x81920
									v29 = *(int32_t *)(v18 + 116);
									if (v29 == 1) {
										// 0x81938
										if (v28 == 0) {
											// 0x81940
											if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 64) {
												// 0x81954
												v23 = (int32_t *)(v18 + 12);
												*v23 = *v23 + 1;
												function_802c4(g29, g31);
												// branch -> 0x8196c
											}
										}
									} else {
										// 0x8192c
										if (v29 <= 3) {
											// 0x81938
											if (v28 == 0) {
												// 0x81940
												if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 64) {
													// 0x81954
													v23 = (int32_t *)(v18 + 12);
													*v23 = *v23 + 1;
													function_802c4(g29, g31);
													// branch -> 0x8196c
												}
											}
										}
									}
									// 0x8196c
									if (*(int32_t *)(g35 + 4) == 0) {
										// 0x81978
										g34 = g33;
										if (abs() <= 1) {
											// 0x81988
											g34 = g32;
											if (abs() <= 1) {
												// 0x81998
												if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
													// 0x819ac
													function_7c64c(g29);
													// branch -> 0x819d4
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										}
										// 0x819b8
										v19 = g35;
										v24 = 8 * g31 + *(int32_t *)(v19 + 224);
										*(int32_t *)(v19 + 84) = *(int32_t *)(v24 + 8);
										*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
										// branch -> 0x819d4
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x8196c
								if (*(int32_t *)(g35 + 4) == 0) {
									// 0x81978
									g34 = g33;
									if (abs() <= 1) {
										// 0x81988
										g34 = g32;
										if (abs() <= 1) {
											// 0x81998
											if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
												// 0x819ac
												function_7c64c(g29);
												// branch -> 0x819d4
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// 0x819b8
									v19 = g35;
									v24 = 8 * g31 + *(int32_t *)(v19 + 224);
									*(int32_t *)(v19 + 84) = *(int32_t *)(v24 + 8);
									*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
									// branch -> 0x819d4
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x8196c
							if (*(int32_t *)(g35 + 4) == 0) {
								// 0x81978
								g34 = g33;
								if (abs() <= 1) {
									// 0x81988
									g34 = g32;
									if (abs() <= 1) {
										// 0x81998
										if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
											// 0x819ac
											function_7c64c(g29);
											// branch -> 0x819d4
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// 0x819b8
								v19 = g35;
								v24 = 8 * g31 + *(int32_t *)(v19 + 224);
								*(int32_t *)(v19 + 84) = *(int32_t *)(v24 + 8);
								*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
								// branch -> 0x819d4
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// 0x817a4
				*(char *)(g35 + 8) = 1;
				*(int32_t *)(g35 + 12) = 0;
				// branch -> 0x817b4
			}
			// 0x817b4
			v10 = g35;
			if (*(char *)(v10 + 8) == 2) {
				// 0x817c0
				if (__asm_rlwinm_(*(int32_t *)(v10 + 160), 0, 27, 27) == 0) {
					// 0x817c0
					v12 = g31;
					// branch -> 0x817f0
				} else {
					// 0x817cc
					v11 = g35;
					v25 = *(int32_t *)(v11 + 32);
					v21 = g36 + 0x55ec * *(int32_t *)(v11 + 76);
					v26 = *(int32_t *)(v21 + 80);
					v27 = *(int32_t *)(v21 + 84);
					v12 = GetDirection(v25, *(int32_t *)(v11 + 36), v26, v27);
					// branch -> 0x817f0
				}
				// 0x817f0
				v30 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * v12);
				g31 = v30;
				if (*(char *)*(int32_t *)(g35 + 224) == 31) {
					// 0x8180c
					g37 = 2;
					v22 = random(112);
					v13 = g23;
					if (v22 == 0) {
						// 0x81830
						v32 = *(int32_t *)(4 * g31 + *(int32_t *)(v13 - 0x70bc));
						g31 = v32;
						v14 = v32;
						// branch -> 0x8183c
					} else {
						// 0x81820
						v31 = *(int32_t *)(4 * g31 + *(int32_t *)(v13 - 0x70b8));
						g31 = v31;
						v14 = v31;
						// branch -> 0x8183c
					}
					// 0x8183c
					*(int32_t *)(g35 + 72) = v14;
					g37 = 100;
					g36 = random(112);
					g34 = g33;
					if (abs() < v9) {
						// 0x81860
						g34 = g32;
						if (abs() < v9) {
							// 0x81870
							if (*(int32_t *)(g35 + 160) % 2 != 0) {
								// 0x8187c
								function_7d940(g29, g31, 0);
								// branch -> 0x8196c
								// 0x8196c
								if (*(int32_t *)(g35 + 4) == 0) {
									// 0x81978
									g34 = g33;
									if (abs() <= 1) {
										// 0x81988
										g34 = g32;
										if (abs() <= 1) {
											// 0x81998
											if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
												// 0x819ac
												function_7c64c(g29);
												// branch -> 0x819d4
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// 0x819b8
									v19 = g35;
									v24 = 8 * g31 + *(int32_t *)(v19 + 224);
									*(int32_t *)(v19 + 84) = *(int32_t *)(v24 + 8);
									*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
									// branch -> 0x819d4
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// 0x81890
					g34 = g33;
					v15 = abs();
					v20 = v9 + 1;
					v9 = v20;
					if (v15 < v20) {
						// 0x818a4
						g34 = g32;
						if (abs() < v9) {
							// 0x818a4
							v17 = g35;
							// branch -> 0x818d4
							// 0x818d4
							if (*(char *)(v17 + 8) == 2) {
								// 0x81954
								v23 = (int32_t *)(v17 + 12);
								*v23 = *v23 + 1;
								function_802c4(g29, g31);
								// branch -> 0x8196c
							} else {
								// 0x818e0
								g34 = g33;
								if (abs() <= 1) {
									// 0x818f0
									g34 = g32;
									if (abs() < 2) {
										// 0x8196c
										if (*(int32_t *)(g35 + 4) == 0) {
											// 0x81978
											g34 = g33;
											if (abs() <= 1) {
												// 0x81988
												g34 = g32;
												if (abs() <= 1) {
													// 0x81998
													if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
														// 0x819ac
														function_7c64c(g29);
														// branch -> 0x819d4
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
											}
											// 0x819b8
											v19 = g35;
											v24 = 8 * g31 + *(int32_t *)(v19 + 224);
											*(int32_t *)(v19 + 84) = *(int32_t *)(v24 + 8);
											*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
											// branch -> 0x819d4
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x81900
								v18 = g35;
								v28 = *(int32_t *)(v18 + 120);
								if (v28 >= 21) {
									// 0x8190c
									if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 14) {
										// 0x81954
										v23 = (int32_t *)(v18 + 12);
										*v23 = *v23 + 1;
										function_802c4(g29, g31);
										// branch -> 0x8196c
										// 0x8196c
										if (*(int32_t *)(g35 + 4) == 0) {
											// 0x81978
											g34 = g33;
											if (abs() <= 1) {
												// 0x81988
												g34 = g32;
												if (abs() <= 1) {
													// 0x81998
													if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
														// 0x819ac
														function_7c64c(g29);
														// branch -> 0x819d4
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
											}
											// 0x819b8
											v19 = g35;
											v24 = 8 * g31 + *(int32_t *)(v19 + 224);
											*(int32_t *)(v19 + 84) = *(int32_t *)(v24 + 8);
											*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
											// branch -> 0x819d4
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x81920
								v29 = *(int32_t *)(v18 + 116);
								if (v29 == 1) {
									// 0x81938
									if (v28 == 0) {
										// 0x81940
										if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 64) {
											// 0x81954
											v23 = (int32_t *)(v18 + 12);
											*v23 = *v23 + 1;
											function_802c4(g29, g31);
											// branch -> 0x8196c
										}
									}
								} else {
									// 0x8192c
									if (v29 <= 3) {
										// 0x81938
										if (v28 == 0) {
											// 0x81940
											if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 64) {
												// 0x81954
												v23 = (int32_t *)(v18 + 12);
												*v23 = *v23 + 1;
												function_802c4(g29, g31);
												// branch -> 0x8196c
											}
										}
									}
								}
								// 0x8196c
								if (*(int32_t *)(g35 + 4) == 0) {
									// 0x81978
									g34 = g33;
									if (abs() <= 1) {
										// 0x81988
										g34 = g32;
										if (abs() <= 1) {
											// 0x81998
											if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
												// 0x819ac
												function_7c64c(g29);
												// branch -> 0x819d4
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// 0x819b8
									v19 = g35;
									v24 = 8 * g31 + *(int32_t *)(v19 + 224);
									*(int32_t *)(v19 + 84) = *(int32_t *)(v24 + 8);
									*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
									// branch -> 0x819d4
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x8196c
							if (*(int32_t *)(g35 + 4) == 0) {
								// 0x81978
								g34 = g33;
								if (abs() <= 1) {
									// 0x81988
									g34 = g32;
									if (abs() <= 1) {
										// 0x81998
										if (g36 < 4 * (int32_t) * (char *)(g35 + 157) + 10) {
											// 0x819ac
											function_7c64c(g29);
											// branch -> 0x819d4
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// 0x819b8
								v19 = g35;
								v24 = 8 * g31 + *(int32_t *)(v19 + 224);
								*(int32_t *)(v19 + 84) = *(int32_t *)(v24 + 8);
								*(int32_t *)(g35 + 88) = *(int32_t *)(v24 + 12);
								// branch -> 0x819d4
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x818b4
					v16 = g35;
					if (*(int32_t *)(v16 + 160) % 2 == 0) {
						// 0x818c0
						function_7da34(g29, g31, 1);
						// branch -> 0x8196c
					} else {
						v17 = v16;
						// 0x818d4
						if (*(char *)(v17 + 8) == 2) {
							// 0x81954
							v23 = (int32_t *)(v17 + 12);
							*v23 = *v23 + 1;
							function_802c4(g29, g31);
							// branch -> 0x8196c
						} else {
							// 0x818e0
							g34 = g33;
							if (abs() <= 1) {
								// 0x818f0
								g34 = g32;
								if (abs() < 2) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x81900
							v18 = g35;
							v28 = *(int32_t *)(v18 + 120);
							if (v28 >= 21) {
								// 0x8190c
								if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 14) {
									// 0x81954
									v23 = (int32_t *)(v18 + 12);
									*v23 = *v23 + 1;
									function_802c4(g29, g31);
									// branch -> 0x8196c
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x81920
							v29 = *(int32_t *)(v18 + 116);
							if (v29 == 1) {
								// 0x81938
								if (v28 == 0) {
									// 0x81940
									if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 64) {
										// 0x81954
										v23 = (int32_t *)(v18 + 12);
										*v23 = *v23 + 1;
										function_802c4(g29, g31);
										// branch -> 0x8196c
									}
								}
							} else {
								// 0x8192c
								if (v29 <= 3) {
									// 0x81938
									if (v28 == 0) {
										// 0x81940
										if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 64) {
											// 0x81954
											v23 = (int32_t *)(v18 + 12);
											*v23 = *v23 + 1;
											function_802c4(g29, g31);
											// branch -> 0x8196c
										}
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					v14 = v30;
				}
			} else {
				// 0x817b4
				v14 = g31;
				// branch -> 0x8183c
			}
			// 0x8183c
			*(int32_t *)(g35 + 72) = v14;
			g37 = 100;
			g36 = random(112);
			g34 = g33;
			if (abs() < v9) {
				// 0x81860
				g34 = g32;
				if (abs() < v9) {
					// 0x81870
					if (*(int32_t *)(g35 + 160) % 2 != 0) {
						// 0x8187c
						function_7d940(g29, g31, 0);
						// branch -> 0x8196c
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// 0x81890
			g34 = g33;
			v15 = abs();
			v20 = v9 + 1;
			if (v15 < v20) {
				// 0x818a4
				g34 = g32;
				if (abs() < v20) {
					// 0x818a4
					v17 = g35;
					// branch -> 0x818d4
					// 0x818d4
					if (*(char *)(v17 + 8) == 2) {
						// 0x81954
						v23 = (int32_t *)(v17 + 12);
						*v23 = *v23 + 1;
						function_802c4(g29, g31);
						// branch -> 0x8196c
					} else {
						// 0x818e0
						g34 = g33;
						if (abs() <= 1) {
							// 0x818f0
							g34 = g32;
							if (abs() < 2) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x81900
						v18 = g35;
						v28 = *(int32_t *)(v18 + 120);
						if (v28 >= 21) {
							// 0x8190c
							if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 14) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x81920
						v29 = *(int32_t *)(v18 + 116);
						if (v29 == 1) {
							// 0x81938
							if (v28 == 0) {
								// 0x81940
								if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 64) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						} else {
							// 0x8192c
							if (v29 <= 3) {
								// 0x81938
								if (v28 == 0) {
									// 0x81940
									if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 64) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x818b4
			v16 = g35;
			if (*(int32_t *)(v16 + 160) % 2 == 0) {
				// 0x818c0
				function_7da34(g29, g31, 1);
				// branch -> 0x8196c
			} else {
				// 0x818d4
				if (*(char *)(v16 + 8) == 2) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					// 0x818e0
					g34 = g33;
					if (abs() <= 1) {
						// 0x818f0
						g34 = g32;
						if (abs() < 2) {
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x81900
					v18 = g35;
					v28 = *(int32_t *)(v18 + 120);
					if (v28 >= 21) {
						// 0x8190c
						if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 14) {
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x81920
					v29 = *(int32_t *)(v18 + 116);
					if (v29 == 1) {
						// 0x81938
						if (v28 == 0) {
							// 0x81940
							if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 64) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					} else {
						// 0x8192c
						if (v29 <= 3) {
							// 0x81938
							if (v28 == 0) {
								// 0x81940
								if (g36 < 4 * (int32_t) * (char *)(v18 + 157) + 64) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
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

// Address range: 0x819e8 - 0x81c8c
int32_t function_819e8(int32_t result)
{
	int32_t v1 = result; // 0x819f0
	g29 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x819f4
	g36 = v2;
	int32_t v3 = v1; // 0x81a38
	if (v1 >= 200) {
		// 0x81a08
		g37 = v1;
		result = app_fatal(*(int32_t *)(g23 - 0x5e2c));
		v2 = g36;
		v3 = g29;
		// branch -> 0x81a14
	}
	int32_t v4 = 232 * v3; // 0x81a14
	g33 = v4;
	int32_t v5 = v4 + v2; // 0x81a18
	g35 = v5;
	if (*(int32_t *)(v5 + 4) != 0) {
		// 0x81c78
		return result;
	}
	// 0x81a28
	if (*(char *)(v5 + 164) != 0) {
		int32_t v6 = (int32_t) * (char *)(v5 + 80); // 0x81a34
		g34 = v3;
		int32_t v7 = (int32_t) * (char *)(v5 + 81); // 0x81a3c
		g25 = v7;
		g32 = *(int32_t *)(v5 + 32) - v6;
		g31 = *(int32_t *)(v5 + 36) - v7;
		int32_t v8 = function_7bfc0(); // 0x81a5c
		int32_t v9 = g35;              // 0x81a60
		char *v10 = (char *)(v9 + 8);  // 0x81a60
		char v11 = *v10;               // 0x81a60
		g30 = v8;
		int32_t v12;       // 0x81bdc
		int32_t v13;       // 0x81c10
		int32_t v14;       // 0x81c40
		int32_t v15;       // 0x81be0
		unsigned char v16; // 0x81be8
		unsigned char v17; // 0x81bec
		unsigned char v18; // 0x81bf0
		char v19;          // 0x81c4c
		if (v11 != 1) {
			// 0x81adc
			if (v11 != 5) {
				// 0x81b74
				if (v11 == 2) {
					// 0x81b7c
					function_7d940(g29, v8, 0);
					*(char *)(g35 + 8) = 5;
					// branch -> 0x81b94
				}
				// 0x81b94
				*(int32_t *)(g35 + 72) = g30;
				g37 = 100;
				result = random(112);
				if (*(int32_t *)(g35 + 4) == 0) {
					// 0x81bb0
					g34 = g32;
					if (abs() <= 1) {
						// 0x81bc0
						g34 = g31;
						if (abs() <= 1) {
							// 0x81bd0
							if (*(char *)(g35 + 8) == 1) {
								// 0x81bdc
								v12 = g33 + g36;
								v15 = *(int32_t *)(v12 + 76);
								v16 = *(char *)(v12 + 200);
								v17 = *(char *)(v12 + 201);
								v18 = *(char *)(v12 + 202);
								function_7e3a4(g29, v15, (int32_t)v16, (int32_t)v17, (int32_t)v18);
								*(char *)(g35 + 8) = 2;
								v13 = function_802c4(g29, *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * g30));
								result = v13;
								if (v13 == 0) {
									// 0x81c1c
									result = function_7d940(g29, g30, 0);
									*(char *)(g35 + 8) = 5;
									// branch -> 0x81c78
								}
								// 0x81c78
								return result;
							}
						}
					}
					// 0x81c38
					v14 = function_802c4(g29, g30);
					result = v14;
					if (v14 == 0) {
						// 0x81c4c
						v19 = *(char *)(g35 + 8);
						if (v19 != 1) {
							// 0x81c58
							if (v19 != 2) {
								// 0x81c78
								return result;
							}
						}
						// 0x81c60
						result = function_7d940(g29, g30, 0);
						*(char *)(g35 + 8) = 5;
						// branch -> 0x81c78
					}
				}
				// 0x81c78
				return result;
			}
			// 0x81ae4
			if (*(int32_t *)(v9 + 12) == 3) {
				// 0x81af0
				*v10 = 1;
				function_7da34(g29, g30, 1);
				// branch -> 0x81b94
				// 0x81b94
				*(int32_t *)(g35 + 72) = g30;
				g37 = 100;
				result = random(112);
				if (*(int32_t *)(g35 + 4) == 0) {
					// 0x81bb0
					g34 = g32;
					if (abs() <= 1) {
						// 0x81bc0
						g34 = g31;
						if (abs() <= 1) {
							// 0x81bd0
							if (*(char *)(g35 + 8) == 1) {
								// 0x81bdc
								v12 = g33 + g36;
								v15 = *(int32_t *)(v12 + 76);
								v16 = *(char *)(v12 + 200);
								v17 = *(char *)(v12 + 201);
								v18 = *(char *)(v12 + 202);
								function_7e3a4(g29, v15, (int32_t)v16, (int32_t)v17, (int32_t)v18);
								*(char *)(g35 + 8) = 2;
								v13 = function_802c4(g29, *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * g30));
								result = v13;
								if (v13 == 0) {
									// 0x81c1c
									result = function_7d940(g29, g30, 0);
									*(char *)(g35 + 8) = 5;
									// branch -> 0x81c78
								}
								// 0x81c78
								return result;
							}
						}
					}
					// 0x81c38
					v14 = function_802c4(g29, g30);
					result = v14;
					if (v14 == 0) {
						// 0x81c4c
						v19 = *(char *)(g35 + 8);
						if (v19 != 1) {
							// 0x81c58
							if (v19 != 2) {
								// 0x81c78
								return result;
							}
						}
						// 0x81c60
						result = function_7d940(g29, g30, 0);
						*(char *)(g35 + 8) = 5;
						// branch -> 0x81c78
					}
				}
				// 0x81c78
				return result;
			}
			int32_t v20 = *(int32_t *)(v9 + 36); // 0x81b14
			if (function_85a14(*(int32_t *)(v9 + 32), v20, v6, g25) == 0) {
				// 0x81b48
				g37 = 10;
				int32_t v21 = random(112) + 5; // 0x81b5c
				function_7c204(g29, v21);
				int32_t *v22 = (int32_t *)(g35 + 12); // 0x81b64
				*v22 = *v22 + 1;
				// branch -> 0x81b94
			} else {
				// 0x81b28
				function_7c6ec(g29, 51, 4);
				int32_t *v23 = (int32_t *)(g35 + 12); // 0x81b38
				*v23 = *v23 + 1;
				// branch -> 0x81b94
			}
			// 0x81b94
			*(int32_t *)(g35 + 72) = g30;
			g37 = 100;
			result = random(112);
			if (*(int32_t *)(g35 + 4) == 0) {
				// 0x81bb0
				g34 = g32;
				if (abs() <= 1) {
					// 0x81bc0
					g34 = g31;
					if (abs() <= 1) {
						// 0x81bd0
						if (*(char *)(g35 + 8) == 1) {
							// 0x81bdc
							v12 = g33 + g36;
							v15 = *(int32_t *)(v12 + 76);
							v16 = *(char *)(v12 + 200);
							v17 = *(char *)(v12 + 201);
							v18 = *(char *)(v12 + 202);
							function_7e3a4(g29, v15, (int32_t)v16, (int32_t)v17, (int32_t)v18);
							*(char *)(g35 + 8) = 2;
							v13 = function_802c4(g29, *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * g30));
							result = v13;
							if (v13 == 0) {
								// 0x81c1c
								result = function_7d940(g29, g30, 0);
								*(char *)(g35 + 8) = 5;
								// branch -> 0x81c78
							}
							// 0x81c78
							return result;
						}
					}
				}
				// 0x81c38
				v14 = function_802c4(g29, g30);
				result = v14;
				if (v14 == 0) {
					// 0x81c4c
					v19 = *(char *)(g35 + 8);
					if (v19 != 1) {
						// 0x81c58
						if (v19 != 2) {
							// 0x81c78
							return result;
						}
					}
					// 0x81c60
					result = function_7d940(g29, g30, 0);
					*(char *)(g35 + 8) = 5;
					// branch -> 0x81c78
				}
			}
			// 0x81c78
			return result;
		}
		int32_t v24 = *(int32_t *)(v9 + 36); // 0x81a78
		if (function_85a14(*(int32_t *)(v9 + 32), v24, v6, g25) != 0) {
			// 0x81a8c
			g13 = g29;
			int32_t v25 = g35;                    // 0x81aa8
			int32_t v26 = *(int32_t *)(v25 + 32); // 0x81aa8
			int32_t v27 = *(int32_t *)(v25 + 36); // 0x81ab0
			if (AddMissile(v26, v27, g26, g25, g30, 50, 0x1000000 * g27 / 0x1000000, 0, 0) != -1) {
				// 0x81ac4
				*(int32_t *)(g35 + 4) = 14;
				*(char *)(g35 + 8) = 5;
				*(int32_t *)(g35 + 12) = g28;
				// branch -> 0x81b94
			}
		}
		// 0x81b94
		*(int32_t *)(g35 + 72) = g30;
		g37 = 100;
		result = random(112);
		if (*(int32_t *)(g35 + 4) == 0) {
			// 0x81bb0
			g34 = g32;
			if (abs() <= 1) {
				// 0x81bc0
				g34 = g31;
				if (abs() <= 1) {
					// 0x81bd0
					if (*(char *)(g35 + 8) == 1) {
						// 0x81bdc
						v12 = g33 + g36;
						v15 = *(int32_t *)(v12 + 76);
						v16 = *(char *)(v12 + 200);
						v17 = *(char *)(v12 + 201);
						v18 = *(char *)(v12 + 202);
						function_7e3a4(g29, v15, (int32_t)v16, (int32_t)v17, (int32_t)v18);
						*(char *)(g35 + 8) = 2;
						v13 = function_802c4(g29, *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * g30));
						result = v13;
						if (v13 == 0) {
							// 0x81c1c
							result = function_7d940(g29, g30, 0);
							*(char *)(g35 + 8) = 5;
							// branch -> 0x81c78
						}
						// 0x81c78
						return result;
					}
				}
			}
			// 0x81c38
			v14 = function_802c4(g29, g30);
			result = v14;
			if (v14 == 0) {
				// 0x81c4c
				v19 = *(char *)(g35 + 8);
				if (v19 != 1) {
					// 0x81c58
					if (v19 != 2) {
						// 0x81c78
						return result;
					}
				}
				// 0x81c60
				result = function_7d940(g29, g30, 0);
				*(char *)(g35 + 8) = 5;
				// branch -> 0x81c78
			}
		}
	}
	// 0x81c78
	return result;
}

// Address range: 0x81c8c - 0x81f30
int32_t function_81c8c(int32_t result)
{
	int32_t v1 = g36;                        // 0x81c8c
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x81c94
	g36 = v2;
	int32_t v3 = g33;    // 0x81c9c
	int32_t v4 = result; // 0x81ca4
	g32 = v4;
	int32_t v5 = v4; // 0x81cc4
	if (v4 >= 200) {
		// 0x81cb8
		g37 = v4;
		result = app_fatal(*(int32_t *)(g23 - 0x5e30));
		v2 = g36;
		v5 = g32;
		// branch -> 0x81cc4
	}
	int32_t v6 = 232 * v5; // 0x81cc4
	g33 = v6;
	int32_t v7 = v6 + v2; // 0x81cc8
	g35 = v7;
	char *v8 = (char *)(v7 + 8); // 0x81ccc
	int32_t v9;                  // ctr
	int32_t v10;                 // r6
	int32_t v11;                 // r8
	int32_t v12;                 // r9
	int32_t v13;                 // 0x81cf8
	int32_t v14;                 // 0x81d50
	int32_t v15;                 // 0x81d90
	int32_t v16;                 // 0x81de0
	int32_t v17;                 // 0x81de4
	int32_t v18;                 // 0x81dfc10
	int32_t v19;                 // 0x81e10
	int32_t v20;                 // 0x81e20
	int32_t v21;                 // 0x81e7814
	int32_t v22;                 // 0x81ef4
	int32_t v23;                 // 0x81da0
	int32_t v24;                 // 0x81dc8
	int32_t v25;                 // 0x81dcc
	int32_t v26;                 // 0x81dd4
	int32_t result3;             // 0x81ee8
	int32_t *v27;                // 0x81d1c
	int32_t result4;             // 0x81d68
	int32_t *v28;                // 0x81d9c
	int32_t v29;                 // 0x81de8
	int32_t result2;             // 0x81ea0
	int32_t v30;                 // 0x81d1c
	int32_t v31;                 // 0x81d40
	int32_t v32;                 // 0x81d94
	int32_t v33;                 // 0x81d9c
	char v34;                    // 0x81e8c
	if (*v8 != 5) {
		// 0x81cf8
		v13 = g35;
		if (*(int32_t *)(v13 + 4) != 0 || *(char *)(v13 + 164) == 0) {
			// 0x81f10
			g36 = v1;
			g33 = v3;
			return result;
		}
		// 0x81d10
		if (*(char *)(v13 + 8) == 2) {
			// 0x81d1c
			v27 = (int32_t *)(v13 + 12);
			v30 = *v27;
			*v27 = v30 - 1;
			if (v30 == 0) {
				// 0x81d30
				*(char *)(g35 + 8) = 1;
				v31 = *(int32_t *)(g35 + 72);
				function_7c124(g32, *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * v31));
				// branch -> 0x81d50
			}
		}
		// 0x81d50
		v14 = g35;
		if (*(int32_t *)(v14 + 104) != *(int32_t *)(v14 + 100)) {
			// 0x81e8c
			v34 = *(char *)(v14 + 8);
			if (v34 == 2) {
				// 0x81e98
				result2 = function_802c4(g32, *(int32_t *)(v14 + 72));
				// branch -> 0x81f10
				// 0x81f10
				g36 = v1;
				g33 = v3;
				return result2;
			}
			// 0x81ea8
			if (v34 == 5) {
				// 0x81eb0
				g34 = *(int32_t *)(v14 + 32) - (int32_t) * (char *)(v14 + 80);
				g33 = *(int32_t *)(v14 + 36) - (int32_t) * (char *)(v14 + 81);
				if (abs() <= 1) {
					// 0x81ed4
					g34 = g33;
					if (abs() <= 1) {
						// 0x81ee4
						result3 = function_7c64c(g32);
						// branch -> 0x81f10
						// 0x81f10
						g36 = v1;
						g33 = v3;
						return result3;
					}
				}
				// 0x81ef0
				g34 = g32;
				v22 = function_7bfc0();
				result = function_802c4(g32, v22);
				// branch -> 0x81f10
			} else {
				// 0x81f08
				result = function_80a28(g32);
				// branch -> 0x81f10
			}
			// 0x81f10
			g36 = v1;
			g33 = v3;
			return result;
		}
		// 0x81d60
		g37 = 4;
		result4 = random(113);
		if (result4 == 0) {
			// 0x81d74
			if (__asm_rlwinm_(*(int32_t *)(g33 + g36 + 160), 0, 28, 28) == 0) {
				// 0x81d84
				function_7c234(g32, *(int32_t *)(g35 + 72));
				v15 = g35;
				v32 = *(int32_t *)(v15 + 148);
				v28 = (int32_t *)(v15 + 152);
				v33 = *v28;
				v23 = 2 * (int32_t) * (char *)(v15 + 157) + 2;
				if (v32 - v23 < v33) {
					// 0x81dbc
					*v28 = v32;
					// branch -> 0x81de0
				} else {
					// 0x81db0
					*v28 = v33 + v23;
					// branch -> 0x81de0
				}
				// 0x81de0
				result = *(int32_t *)(g23 - 0x767c);
				v24 = 2 * (int32_t) * (char *)(g35 + 157);
				v25 = v24 + 4;
				v10 = v25;
				v26 = -4 - v24;
				v12 = v26;
				v18 = v26;
				v16 = v26;
				v17 = v25;
				// branch -> 0x81de0
				while (true) {
					// 0x81de0
					v11 = v16;
					v29 = 1 - v16 + v17;
					v9 = v29;
					if (v16 > v17) {
						goto lab_0x81e7c_4;
					}
					v21 = v29;
					v20 = v16;
					v19 = v18;
					goto lab_0x81df8_3;
				}
			}
			// 0x81de0
			result = *(int32_t *)(g23 - 0x767c);
			v24 = 2 * (int32_t) * (char *)(g35 + 157);
			v25 = v24 + 4;
			v10 = v25;
			v26 = -4 - v24;
			v12 = v26;
			v18 = v26;
			v16 = v26;
			v17 = v25;
			// branch -> 0x81de0
			while (true) {
				// 0x81de0
				v11 = v16;
				v29 = 1 - v16 + v17;
				v9 = v29;
				if (v16 > v17) {
					goto lab_0x81e7c_4;
				}
				v21 = v29;
				v20 = v16;
				v19 = v18;
				goto lab_0x81df8_3;
			}
		}
		// 0x81f10
		g36 = v1;
		g33 = v3;
		return result4;
	}
	int32_t *v35 = (int32_t *)(v7 + 12); // 0x81cd8
	int32_t result5 = *v35;              // 0x81cd8
	if (result5 == 0) {
		// 0x81cf0
		*v8 = 1;
		// branch -> 0x81cf8
	} else {
		// 0x81ce4
		*v35 = result5 - 1;
		// branch -> 0x81cf8
	}
	// 0x81cf8
	v13 = g35;
	if (*(int32_t *)(v13 + 4) == 0) {
		// 0x81d04
		if (*(char *)(v13 + 164) != 0) {
			// 0x81d10
			if (*(char *)(v13 + 8) == 2) {
				// 0x81d1c
				v27 = (int32_t *)(v13 + 12);
				v30 = *v27;
				*v27 = v30 - 1;
				if (v30 == 0) {
					// 0x81d30
					*(char *)(g35 + 8) = 1;
					v31 = *(int32_t *)(g35 + 72);
					function_7c124(g32, *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * v31));
					// branch -> 0x81d50
				}
			}
			// 0x81d50
			v14 = g35;
			if (*(int32_t *)(v14 + 104) != *(int32_t *)(v14 + 100)) {
				// 0x81e8c
				v34 = *(char *)(v14 + 8);
				if (v34 == 2) {
					// 0x81e98
					result2 = function_802c4(g32, *(int32_t *)(v14 + 72));
					// branch -> 0x81f10
					// 0x81f10
					g36 = v1;
					g33 = v3;
					return result2;
				}
				// 0x81ea8
				if (v34 == 5) {
					// 0x81eb0
					g34 = *(int32_t *)(v14 + 32) - (int32_t) * (char *)(v14 + 80);
					g33 = *(int32_t *)(v14 + 36) - (int32_t) * (char *)(v14 + 81);
					if (abs() <= 1) {
						// 0x81ed4
						g34 = g33;
						if (abs() <= 1) {
							// 0x81ee4
							result3 = function_7c64c(g32);
							// branch -> 0x81f10
							// 0x81f10
							g36 = v1;
							g33 = v3;
							return result3;
						}
					}
					// 0x81ef0
					g34 = g32;
					v22 = function_7bfc0();
					result = function_802c4(g32, v22);
					// branch -> 0x81f10
				} else {
					// 0x81f08
					result = function_80a28(g32);
					// branch -> 0x81f10
				}
				// 0x81f10
				g36 = v1;
				g33 = v3;
				return result;
			}
			// 0x81d60
			g37 = 4;
			result4 = random(113);
			if (result4 == 0) {
				// 0x81d74
				if (__asm_rlwinm_(*(int32_t *)(g33 + g36 + 160), 0, 28, 28) == 0) {
					// 0x81d84
					function_7c234(g32, *(int32_t *)(g35 + 72));
					v15 = g35;
					v32 = *(int32_t *)(v15 + 148);
					v28 = (int32_t *)(v15 + 152);
					v33 = *v28;
					v23 = 2 * (int32_t) * (char *)(v15 + 157) + 2;
					if (v32 - v23 < v33) {
						// 0x81dbc
						*v28 = v32;
						// branch -> 0x81de0
					} else {
						// 0x81db0
						*v28 = v33 + v23;
						// branch -> 0x81de0
					}
					int32_t v36 = *(int32_t *)(g23 - 0x767c); // 0x81dc4
					result = v36;
					v24 = 2 * (int32_t) * (char *)(g35 + 157);
					v25 = v24 + 4;
					v10 = v25;
					int32_t v37 = *(int32_t *)v36; // 0x81dd0
					v26 = -4 - v24;
					v12 = v26;
					v18 = v26;
					v16 = v26;
					v17 = v25;
					// branch -> 0x81de0
					while (true) {
						// 0x81de0
						v11 = v16;
						v29 = 1 - v16 + v17;
						v9 = v29;
						int32_t v38; // 0x81e7c
						int32_t v39; // 0x81e80
						if (v16 <= v17) {
							v21 = v29;
							v20 = v16;
							v19 = v18;
						lab_0x81df8_3:;
							int32_t v40;
							while (true) {
								int32_t v41 = *(int32_t *)(g35 + 32) + v20; // 0x81e04
								result = v41;
								int32_t v42 = *(int32_t *)(g35 + 36) + v19; // 0x81e08
								v40 = v19;
								int32_t v43 = v21; // 0x81e78
								int32_t v44 = v20; // 0x81e74
								if (v19 >= 0) {
									// 0x81e10
									if (v19 <= 111) {
										// 0x81e18
										if (v20 >= 0) {
											// 0x81e20
											if (v20 <= 111) {
												uint16_t v45 = *(int16_t *)(v37 + 2 * v42 + 224 * v41); // 0x81e34
												int32_t v46 = v45;                                      // 0x81e34
												result = v46;
												if (v45 >= 1) {
													int32_t v47 = g36 + 232 * v46 - 232; // 0x81e48
													int32_t v48 = v47;                   // r7
													if (*(char *)(v47 + 156) == 8) {
														// 0x81e58
														*(char *)(v47 + 8) = 5;
														int32_t v49 = (int32_t) * (char *)(g35 + 157); // 0x81e60
														result = 2 * v49;
														*(int32_t *)(v48 + 12) = 30 * v49 + 105;
														v40 = v12;
														v43 = v9;
														v44 = v11;
														// branch -> 0x81e74
													} else {
														v40 = v19;
														v43 = v21;
														v44 = v20;
													}
												} else {
													v40 = v19;
													v43 = v21;
													v44 = v20;
												}
											} else {
												v40 = v19;
												v43 = v21;
												v44 = v20;
											}
										} else {
											v40 = v19;
											v43 = v21;
											v44 = v20;
										}
									} else {
										v40 = v19;
										v43 = v21;
										v44 = v20;
									}
								}
								int32_t v50 = v44 + 1; // 0x81e74
								v11 = v50;
								int32_t v51 = v43 - 1; // 0x81e78
								v9 = v51;
								if (v51 == 0) {
									// break -> 0x81e7c
									break;
								}
								v21 = v51;
								v20 = v50;
								v19 = v40;
								// continue -> 0x81df8
							}
							// 0x81e7c
							v38 = v40 + 1;
							v12 = v38;
							v39 = v10;
							if (v38 > v39) {
								// 0x81f10
								g36 = v1;
								g33 = v3;
								return result;
							}
						lab_0x81e7c:
							// 0x81e7c
							v18 = v38;
							v16 = v26;
							v17 = v39;
							// branch -> 0x81de0
							continue;
						}
					lab_0x81e7c_4:
						// 0x81e7c
						v38 = v18 + 1;
						v12 = v38;
						v39 = v10;
						if (v38 <= v39) {
							goto lab_0x81e7c;
						}
						// 0x81f10
						g36 = v1;
						g33 = v3;
						return result;
					}
				}
				// 0x81de0
				result = *(int32_t *)(g23 - 0x767c);
				v24 = 2 * (int32_t) * (char *)(g35 + 157);
				v25 = v24 + 4;
				v10 = v25;
				v26 = -4 - v24;
				v12 = v26;
				v18 = v26;
				v16 = v26;
				v17 = v25;
				// branch -> 0x81de0
				while (true) {
					// 0x81de0
					v11 = v16;
					v29 = 1 - v16 + v17;
					v9 = v29;
					if (v16 > v17) {
						goto lab_0x81e7c_4;
					}
					v21 = v29;
					v20 = v16;
					v19 = v18;
					goto lab_0x81df8_3;
				}
			}
			// 0x81f10
			g36 = v1;
			g33 = v3;
			return result4;
		}
	}
	// 0x81f10
	g36 = v1;
	g33 = v3;
	return result5;
}

// Address range: 0x81f30 - 0x8201c
int32_t function_81f30(int32_t a1)
{
	// 0x81f30
	g31 = a1;
	int32_t v1 = a1; // 0x81f58
	if (a1 >= 200) {
		// 0x81f4c
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e34));
		v1 = g31;
		// branch -> 0x81f58
	}
	int32_t result = *(int32_t *)(g23 - 0x7754); // 0x81f5c
	int32_t v2 = result + 232 * v1;              // 0x81f60
	g36 = v2;
	if (*(int32_t *)(v2 + 4) != 0) {
		// 0x82008
		return result;
	}
	// 0x81f70
	int32_t result2; // 0x82018
	if (*(char *)(v2 + 164) != 0) {
		int32_t v3 = *(int32_t *)(v2 + 32); // 0x81f7c
		int32_t v4 = *(int32_t *)(v2 + 36); // 0x81f84
		g35 = v3 - (int32_t) * (char *)(v2 + 80);
		int32_t v5 = *(int32_t *)(v2 + 176); // 0x81f94
		g33 = v4 - (int32_t) * (char *)(v2 + 81);
		int32_t v6 = GetDirection(v3, v4, *(int32_t *)(v2 + 172), v5); // 0x81f9c
		*(int32_t *)(g36 + 72) = v6;
		g34 = g35;
		int32_t v7;
		int32_t v8;  // 0x81fe0
		int32_t v9;  // 0x81ff4
		int32_t v10; // 0x81ff8
		if (abs() <= 1) {
			// 0x81fb8
			g34 = g33;
			if (abs() <= 1) {
				// 0x81fc8
				v7 = function_7c64c(g31);
				// branch -> 0x81fe0
				// 0x81fe0
				v8 = g36;
				result2 = v7;
				if (*(int32_t *)(v8 + 4) == 0) {
					// 0x81fec
					v9 = 8 * g32 + *(int32_t *)(v8 + 224);
					v10 = *(int32_t *)(v9 + 8);
					*(int32_t *)(v8 + 84) = v10;
					*(int32_t *)(g36 + 88) = *(int32_t *)(v9 + 12);
					result2 = v10;
					// branch -> 0x82008
				}
				// 0x82008
				return result2;
			}
		}
		// 0x81fd4
		v7 = function_802c4(g31, v6);
		// branch -> 0x81fe0
		// 0x81fe0
		v8 = g36;
		if (*(int32_t *)(v8 + 4) == 0) {
			// 0x81fec
			v9 = 8 * g32 + *(int32_t *)(v8 + 224);
			v10 = *(int32_t *)(v9 + 8);
			*(int32_t *)(v8 + 84) = v10;
			*(int32_t *)(g36 + 88) = *(int32_t *)(v9 + 12);
			result2 = v10;
			// branch -> 0x82008
		} else {
			result2 = v7;
		}
	} else {
		result2 = result;
	}
	// 0x82008
	return result2;
}

// Address range: 0x8201c - 0x82388
int32_t function_8201c(int32_t a1)
{
	g26 = a1;
	g35 = *(int32_t *)(g23 - 0x7588);
	g27 = g37;
	int32_t v1 = a1; // 0x8204c
	if (a1 >= 200) {
		// 0x82040
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e38));
		v1 = g26;
		// branch -> 0x8204c
	}
	int32_t v2 = *(int32_t *)(g23 - 0x7754) + 232 * v1; // 0x82054
	g33 = v2;
	if (*(int32_t *)(v2 + 4) == 0) {
		// 0x82064
		if (*(char *)(v2 + 164) != 0) {
			int32_t v3 = *(int32_t *)(v2 + 32);         // 0x82070
			int32_t v4 = (int32_t) * (char *)(v2 + 80); // 0x82074
			g25 = v4;
			int32_t v5 = *(int32_t *)(v2 + 36);         // 0x82078
			int32_t v6 = (int32_t) * (char *)(v2 + 81); // 0x8207c
			g32 = v6;
			g30 = v3 - v4;
			int32_t v7 = *(int32_t *)(v2 + 176); // 0x82088
			g29 = v5 - v6;
			g28 = GetDirection(v3, v5, *(int32_t *)(v2 + 172), v7);
			if (*(char *)(g33 + 164) != -1) {
				// 0x820a4
				MonstCheckDoors(g26);
				// branch -> 0x820ac
			}
			// 0x820ac
			g37 = 100;
			g36 = random(114);
			g34 = g30;
			int32_t result; // r3
			int32_t v8;     // 0x8228c
			int32_t v9;     // 0x822ac
			int32_t v10;    // 0x822ec
			int32_t v11;    // 0x8234c
			int32_t v12;    // 0x82290
			int32_t v13;    // 0x82330
			int32_t v14;    // 0x82360
			uint32_t v15;   // 0x822ac
			uint32_t v16;   // 0x822ec
			int32_t v17;    // 0x8230c
			int32_t v18;    // 0x82364
			if (abs() <= 1) {
				// 0x820cc
				g34 = g29;
				int32_t v19 = abs(); // 0x820d0
				result = v19;
				if (v19 < 2) {
					// 0x820cc
					// branch -> 0x8211c
					// 0x8211c
					*(char *)(g33 + 8) = 1;
					// branch -> 0x82260
					// 0x82260
					if (*(char *)(g33 + 8) != 1) {
						// 0x8234c
						v11 = g33;
						if (*(int32_t *)(v11 + 4) == 0) {
							// 0x82358
							v14 = 8 * g28 + *(int32_t *)(v11 + 224);
							v18 = *(int32_t *)(v14 + 8);
							result = v18;
							*(int32_t *)(v11 + 84) = v18;
							*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
							// branch -> 0x82374
						}
						// 0x82374
						return result;
					}
					// 0x8226c
					g34 = g30;
					if (abs() <= 1) {
						// 0x8227c
						g34 = g29;
						if (abs() <= 1) {
							// 0x8228c
							v8 = g33;
							v12 = 2 * (int32_t) * (char *)(v8 + 157);
							result = v12;
							if (g36 < v12 + 23) {
								// 0x822a0
								*(int32_t *)(v8 + 72) = g28;
								if (g27 != 0) {
									// 0x822ac
									v9 = g33;
									v15 = *(int32_t *)(v9 + 148);
									if (*(int32_t *)(v9 + 152) < (v15 / 2 || v15 & -0x80000000)) {
										// 0x822c0
										g37 = 2;
										if (random(117) != 0) {
											// 0x822d4
											result = function_7c830(g26);
											// branch -> 0x8234c
											// 0x8234c
											v11 = g33;
											if (*(int32_t *)(v11 + 4) == 0) {
												// 0x82358
												v14 = 8 * g28 + *(int32_t *)(v11 + 224);
												v18 = *(int32_t *)(v14 + 8);
												result = v18;
												*(int32_t *)(v11 + 84) = v18;
												*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
												// branch -> 0x82374
											}
											// 0x82374
											return result;
										}
									}
								}
								// 0x822e0
								result = function_7c64c(g26);
								// branch -> 0x8234c
							}
							// 0x8234c
							v11 = g33;
							if (*(int32_t *)(v11 + 4) == 0) {
								// 0x82358
								v14 = 8 * g28 + *(int32_t *)(v11 + 224);
								v18 = *(int32_t *)(v14 + 8);
								result = v18;
								*(int32_t *)(v11 + 84) = v18;
								*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
								// branch -> 0x82374
							}
							// 0x82374
							return result;
						}
					}
					// 0x822ec
					v10 = g33;
					v16 = *(int32_t *)(v10 + 120);
					if (v16 >= 21) {
						// 0x822f8
						if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 28) {
							// 0x82340
							result = function_802c4(g26, g28);
							// branch -> 0x8234c
							// 0x8234c
							v11 = g33;
							if (*(int32_t *)(v11 + 4) == 0) {
								// 0x82358
								v14 = 8 * g28 + *(int32_t *)(v11 + 224);
								v18 = *(int32_t *)(v14 + 8);
								result = v18;
								*(int32_t *)(v11 + 84) = v18;
								*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
								// branch -> 0x82374
							}
							// 0x82374
							return result;
						}
					}
					// 0x8230c
					v17 = *(int32_t *)(v10 + 116);
					result = v17;
					if (v17 == 1) {
						// 0x82324
						if (v16 == 0) {
							// 0x8232c
							v13 = 2 * (int32_t) * (char *)(v10 + 157);
							result = v13;
							if (g36 < v13 + 78) {
								// 0x82340
								result = function_802c4(g26, g28);
								// branch -> 0x8234c
							}
						}
					} else {
						// 0x82318
						if (v17 <= 3) {
							// 0x82324
							if (v16 == 0) {
								// 0x8232c
								v13 = 2 * (int32_t) * (char *)(v10 + 157);
								result = v13;
								if (g36 < v13 + 78) {
									// 0x82340
									result = function_802c4(g26, g28);
									// branch -> 0x8234c
								}
							}
						}
					}
					// 0x8234c
					v11 = g33;
					if (*(int32_t *)(v11 + 4) == 0) {
						// 0x82358
						v14 = 8 * g28 + *(int32_t *)(v11 + 224);
						v18 = *(int32_t *)(v14 + 8);
						result = v18;
						*(int32_t *)(v11 + 84) = v18;
						*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
						// branch -> 0x82374
					}
					// 0x82374
					return result;
				}
			}
			int32_t v20 = g33; // 0x820dc
			if (*(char *)(v20 + 164) == -1) {
				int32_t v21 = 112 * g25; // 0x820ec
				g31 = v21;
				int32_t v22 = *(int32_t *)(v20 + 36);                           // 0x820f0
				int32_t v23 = *(int32_t *)g35;                                  // 0x820f4
				char v24 = *(char *)(v23 + v22 + 112 * *(int32_t *)(v20 + 32)); // 0x82108
				if (v24 == *(char *)(g32 + v21 + v23)) {
					int32_t v25 = v20; // 0x82178
					int32_t v26;
					int32_t v27;  // 0x821f0
					int32_t v28;  // 0x82190
					int32_t *v29; // 0x821c4
					int32_t v30;  // 0x821f8
					int32_t v31;  // 0x8224c
					uint32_t v32; // 0x821c4
					int32_t v33;  // 0x82200
					char v34;     // 0x8220c
					if (*(char *)(v20 + 8) != 4) {
						// 0x82134
						g34 = g30;
						int32_t v35; // 0x821e4
						int32_t v36; // 0x82238
						if (abs() > 3) {
							// 0x82154
							g37 = 4;
							if (random(115) == 0) {
								// 0x82154
								v25 = g33;
								// branch -> 0x82168
								// 0x82168
								v28 = v25;
								if (*(char *)(v25 + 8) != 4) {
									// 0x82174
									*(int32_t *)(v25 + 12) = 0;
									g37 = 2;
									*(int32_t *)(g33 + 16) = random(116);
									v28 = g33;
									// branch -> 0x8218c
								}
								// 0x8218c
								*(char *)(v28 + 8) = 4;
								g34 = g29;
								g25 = abs();
								g34 = g30;
								if (abs() > g25) {
									// 0x821b0
									g34 = g30;
									v26 = abs();
									// branch -> 0x821c4
								} else {
									// 0x821bc
									g34 = g29;
									v26 = abs();
									// branch -> 0x821c4
								}
								// 0x821c4
								v29 = (int32_t *)(g33 + 12);
								v32 = *v29;
								*v29 = v32 + 1;
								if (v32 >= 2 * v26) {
									// 0x821dc
									g34 = g26;
									g37 = g28;
									v35 = function_8539c();
									result = v35;
									if (v35 != 0) {
										// 0x821dc
										// branch -> 0x82220
										// 0x82220
										*(char *)(g33 + 8) = 1;
										// branch -> 0x82260
										// 0x82260
										if (*(char *)(g33 + 8) != 1) {
											// 0x8234c
											v11 = g33;
											if (*(int32_t *)(v11 + 4) == 0) {
												// 0x82358
												v14 = 8 * g28 + *(int32_t *)(v11 + 224);
												v18 = *(int32_t *)(v14 + 8);
												result = v18;
												*(int32_t *)(v11 + 84) = v18;
												*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
												// branch -> 0x82374
											}
											// 0x82374
											return result;
										}
										// 0x8226c
										g34 = g30;
										if (abs() <= 1) {
											// 0x8227c
											g34 = g29;
											if (abs() <= 1) {
												// 0x8228c
												v8 = g33;
												v12 = 2 * (int32_t) * (char *)(v8 + 157);
												result = v12;
												if (g36 < v12 + 23) {
													// 0x822a0
													*(int32_t *)(v8 + 72) = g28;
													if (g27 != 0) {
														// 0x822ac
														v9 = g33;
														v15 = *(int32_t *)(v9 + 148);
														if (*(int32_t *)(v9 + 152) < (v15 / 2 || v15 & -0x80000000)) {
															// 0x822c0
															g37 = 2;
															if (random(117) != 0) {
																// 0x822d4
																result = function_7c830(g26);
																// branch -> 0x8234c
																// 0x8234c
																v11 = g33;
																if (*(int32_t *)(v11 + 4) == 0) {
																	// 0x82358
																	v14 = 8 * g28 + *(int32_t *)(v11 + 224);
																	v18 = *(int32_t *)(v14 + 8);
																	result = v18;
																	*(int32_t *)(v11 + 84) = v18;
																	*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
																	// branch -> 0x82374
																}
																// 0x82374
																return result;
															}
														}
													}
													// 0x822e0
													result = function_7c64c(g26);
													// branch -> 0x8234c
												}
												// 0x8234c
												v11 = g33;
												if (*(int32_t *)(v11 + 4) == 0) {
													// 0x82358
													v14 = 8 * g28 + *(int32_t *)(v11 + 224);
													v18 = *(int32_t *)(v14 + 8);
													result = v18;
													*(int32_t *)(v11 + 84) = v18;
													*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
													// branch -> 0x82374
												}
												// 0x82374
												return result;
											}
										}
										// 0x822ec
										v10 = g33;
										v16 = *(int32_t *)(v10 + 120);
										if (v16 >= 21) {
											// 0x822f8
											if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 28) {
												// 0x82340
												result = function_802c4(g26, g28);
												// branch -> 0x8234c
												// 0x8234c
												v11 = g33;
												if (*(int32_t *)(v11 + 4) == 0) {
													// 0x82358
													v14 = 8 * g28 + *(int32_t *)(v11 + 224);
													v18 = *(int32_t *)(v14 + 8);
													result = v18;
													*(int32_t *)(v11 + 84) = v18;
													*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
													// branch -> 0x82374
												}
												// 0x82374
												return result;
											}
										}
										// 0x8230c
										v17 = *(int32_t *)(v10 + 116);
										result = v17;
										if (v17 == 1) {
											// 0x82324
											if (v16 == 0) {
												// 0x8232c
												v13 = 2 * (int32_t) * (char *)(v10 + 157);
												result = v13;
												if (g36 < v13 + 78) {
													// 0x82340
													result = function_802c4(g26, g28);
													// branch -> 0x8234c
												}
											}
										} else {
											// 0x82318
											if (v17 <= 3) {
												// 0x82324
												if (v16 == 0) {
													// 0x8232c
													v13 = 2 * (int32_t) * (char *)(v10 + 157);
													result = v13;
													if (g36 < v13 + 78) {
														// 0x82340
														result = function_802c4(g26, g28);
														// branch -> 0x8234c
													}
												}
											}
										}
										// 0x8234c
										v11 = g33;
										if (*(int32_t *)(v11 + 4) == 0) {
											// 0x82358
											v14 = 8 * g28 + *(int32_t *)(v11 + 224);
											v18 = *(int32_t *)(v14 + 8);
											result = v18;
											*(int32_t *)(v11 + 84) = v18;
											*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
											// branch -> 0x82374
										}
										// 0x82374
										return result;
									}
								}
								// 0x821f0
								v27 = g33;
								v30 = *(int32_t *)g35;
								v33 = *(int32_t *)(v27 + 36);
								v34 = *(char *)(v33 + 112 * *(int32_t *)(v27 + 32) + v30);
								result = v34;
								if (v34 == *(char *)(v30 + g32 + g31)) {
									// 0x8222c
									v36 = function_80718(g26, g28, (int32_t *)(v27 + 16));
									result = v36;
									if (v36 == 0) {
										// 0x82244
										g37 = 10;
										v31 = random(125);
										result = function_7c204(g26, v31 + 10);
										// branch -> 0x82260
									}
								} else {
									// 0x82220
									*(char *)(v27 + 8) = 1;
									// branch -> 0x82260
								}
								// 0x82260
								if (*(char *)(g33 + 8) != 1) {
									// 0x8234c
									v11 = g33;
									if (*(int32_t *)(v11 + 4) == 0) {
										// 0x82358
										v14 = 8 * g28 + *(int32_t *)(v11 + 224);
										v18 = *(int32_t *)(v14 + 8);
										result = v18;
										*(int32_t *)(v11 + 84) = v18;
										*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
										// branch -> 0x82374
									}
									// 0x82374
									return result;
								}
								// 0x8226c
								g34 = g30;
								if (abs() <= 1) {
									// 0x8227c
									g34 = g29;
									if (abs() <= 1) {
										// 0x8228c
										v8 = g33;
										v12 = 2 * (int32_t) * (char *)(v8 + 157);
										result = v12;
										if (g36 < v12 + 23) {
											// 0x822a0
											*(int32_t *)(v8 + 72) = g28;
											if (g27 != 0) {
												// 0x822ac
												v9 = g33;
												v15 = *(int32_t *)(v9 + 148);
												if (*(int32_t *)(v9 + 152) < (v15 / 2 || v15 & -0x80000000)) {
													// 0x822c0
													g37 = 2;
													if (random(117) != 0) {
														// 0x822d4
														result = function_7c830(g26);
														// branch -> 0x8234c
														// 0x8234c
														v11 = g33;
														if (*(int32_t *)(v11 + 4) == 0) {
															// 0x82358
															v14 = 8 * g28 + *(int32_t *)(v11 + 224);
															v18 = *(int32_t *)(v14 + 8);
															result = v18;
															*(int32_t *)(v11 + 84) = v18;
															*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
															// branch -> 0x82374
														}
														// 0x82374
														return result;
													}
												}
											}
											// 0x822e0
											result = function_7c64c(g26);
											// branch -> 0x8234c
										}
										// 0x8234c
										v11 = g33;
										if (*(int32_t *)(v11 + 4) == 0) {
											// 0x82358
											v14 = 8 * g28 + *(int32_t *)(v11 + 224);
											v18 = *(int32_t *)(v14 + 8);
											result = v18;
											*(int32_t *)(v11 + 84) = v18;
											*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
											// branch -> 0x82374
										}
										// 0x82374
										return result;
									}
								}
								// 0x822ec
								v10 = g33;
								v16 = *(int32_t *)(v10 + 120);
								if (v16 >= 21) {
									// 0x822f8
									if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 28) {
										// 0x82340
										result = function_802c4(g26, g28);
										// branch -> 0x8234c
										// 0x8234c
										v11 = g33;
										if (*(int32_t *)(v11 + 4) == 0) {
											// 0x82358
											v14 = 8 * g28 + *(int32_t *)(v11 + 224);
											v18 = *(int32_t *)(v14 + 8);
											result = v18;
											*(int32_t *)(v11 + 84) = v18;
											*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
											// branch -> 0x82374
										}
										// 0x82374
										return result;
									}
								}
								// 0x8230c
								v17 = *(int32_t *)(v10 + 116);
								result = v17;
								if (v17 == 1) {
									// 0x82324
									if (v16 == 0) {
										// 0x8232c
										v13 = 2 * (int32_t) * (char *)(v10 + 157);
										result = v13;
										if (g36 < v13 + 78) {
											// 0x82340
											result = function_802c4(g26, g28);
											// branch -> 0x8234c
										}
									}
								} else {
									// 0x82318
									if (v17 <= 3) {
										// 0x82324
										if (v16 == 0) {
											// 0x8232c
											v13 = 2 * (int32_t) * (char *)(v10 + 157);
											result = v13;
											if (g36 < v13 + 78) {
												// 0x82340
												result = function_802c4(g26, g28);
												// branch -> 0x8234c
											}
										}
									}
								}
								// 0x8234c
								v11 = g33;
								if (*(int32_t *)(v11 + 4) == 0) {
									// 0x82358
									v14 = 8 * g28 + *(int32_t *)(v11 + 224);
									v18 = *(int32_t *)(v14 + 8);
									result = v18;
									*(int32_t *)(v11 + 84) = v18;
									*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
									// branch -> 0x82374
								}
								// 0x82374
								return result;
							}
						} else {
							// 0x82144
							g34 = g29;
							if (abs() >= 4) {
								// 0x82154
								g37 = 4;
								if (random(115) == 0) {
									// 0x82154
									v25 = g33;
									// branch -> 0x82168
									// 0x82168
									v28 = v25;
									if (*(char *)(v25 + 8) != 4) {
										// 0x82174
										*(int32_t *)(v25 + 12) = 0;
										g37 = 2;
										*(int32_t *)(g33 + 16) = random(116);
										v28 = g33;
										// branch -> 0x8218c
									}
									// 0x8218c
									*(char *)(v28 + 8) = 4;
									g34 = g29;
									g25 = abs();
									g34 = g30;
									if (abs() > g25) {
										// 0x821b0
										g34 = g30;
										v26 = abs();
										// branch -> 0x821c4
									} else {
										// 0x821bc
										g34 = g29;
										v26 = abs();
										// branch -> 0x821c4
									}
									// 0x821c4
									v29 = (int32_t *)(g33 + 12);
									v32 = *v29;
									*v29 = v32 + 1;
									if (v32 >= 2 * v26) {
										// 0x821dc
										g34 = g26;
										g37 = g28;
										v35 = function_8539c();
										result = v35;
										if (v35 != 0) {
											// 0x821dc
											// branch -> 0x82220
											// 0x82220
											*(char *)(g33 + 8) = 1;
											// branch -> 0x82260
											// 0x82260
											if (*(char *)(g33 + 8) != 1) {
												// 0x8234c
												v11 = g33;
												if (*(int32_t *)(v11 + 4) == 0) {
													// 0x82358
													v14 = 8 * g28 + *(int32_t *)(v11 + 224);
													v18 = *(int32_t *)(v14 + 8);
													result = v18;
													*(int32_t *)(v11 + 84) = v18;
													*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
													// branch -> 0x82374
												}
												// 0x82374
												return result;
											}
											// 0x8226c
											g34 = g30;
											if (abs() <= 1) {
												// 0x8227c
												g34 = g29;
												if (abs() <= 1) {
													// 0x8228c
													v8 = g33;
													v12 = 2 * (int32_t) * (char *)(v8 + 157);
													result = v12;
													if (g36 < v12 + 23) {
														// 0x822a0
														*(int32_t *)(v8 + 72) = g28;
														if (g27 != 0) {
															// 0x822ac
															v9 = g33;
															v15 = *(int32_t *)(v9 + 148);
															if (*(int32_t *)(v9 + 152) < (v15 / 2 || v15 & -0x80000000)) {
																// 0x822c0
																g37 = 2;
																if (random(117) != 0) {
																	// 0x822d4
																	result = function_7c830(g26);
																	// branch -> 0x8234c
																	// 0x8234c
																	v11 = g33;
																	if (*(int32_t *)(v11 + 4) == 0) {
																		// 0x82358
																		v14 = 8 * g28 + *(int32_t *)(v11 + 224);
																		v18 = *(int32_t *)(v14 + 8);
																		result = v18;
																		*(int32_t *)(v11 + 84) = v18;
																		*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
																		// branch -> 0x82374
																	}
																	// 0x82374
																	return result;
																}
															}
														}
														// 0x822e0
														result = function_7c64c(g26);
														// branch -> 0x8234c
													}
													// 0x8234c
													v11 = g33;
													if (*(int32_t *)(v11 + 4) == 0) {
														// 0x82358
														v14 = 8 * g28 + *(int32_t *)(v11 + 224);
														v18 = *(int32_t *)(v14 + 8);
														result = v18;
														*(int32_t *)(v11 + 84) = v18;
														*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
														// branch -> 0x82374
													}
													// 0x82374
													return result;
												}
											}
											// 0x822ec
											v10 = g33;
											v16 = *(int32_t *)(v10 + 120);
											if (v16 >= 21) {
												// 0x822f8
												if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 28) {
													// 0x82340
													result = function_802c4(g26, g28);
													// branch -> 0x8234c
													// 0x8234c
													v11 = g33;
													if (*(int32_t *)(v11 + 4) == 0) {
														// 0x82358
														v14 = 8 * g28 + *(int32_t *)(v11 + 224);
														v18 = *(int32_t *)(v14 + 8);
														result = v18;
														*(int32_t *)(v11 + 84) = v18;
														*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
														// branch -> 0x82374
													}
													// 0x82374
													return result;
												}
											}
											// 0x8230c
											v17 = *(int32_t *)(v10 + 116);
											result = v17;
											if (v17 == 1) {
												// 0x82324
												if (v16 == 0) {
													// 0x8232c
													v13 = 2 * (int32_t) * (char *)(v10 + 157);
													result = v13;
													if (g36 < v13 + 78) {
														// 0x82340
														result = function_802c4(g26, g28);
														// branch -> 0x8234c
													}
												}
											} else {
												// 0x82318
												if (v17 <= 3) {
													// 0x82324
													if (v16 == 0) {
														// 0x8232c
														v13 = 2 * (int32_t) * (char *)(v10 + 157);
														result = v13;
														if (g36 < v13 + 78) {
															// 0x82340
															result = function_802c4(g26, g28);
															// branch -> 0x8234c
														}
													}
												}
											}
											// 0x8234c
											v11 = g33;
											if (*(int32_t *)(v11 + 4) == 0) {
												// 0x82358
												v14 = 8 * g28 + *(int32_t *)(v11 + 224);
												v18 = *(int32_t *)(v14 + 8);
												result = v18;
												*(int32_t *)(v11 + 84) = v18;
												*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
												// branch -> 0x82374
											}
											// 0x82374
											return result;
										}
									}
									// 0x821f0
									v27 = g33;
									v30 = *(int32_t *)g35;
									v33 = *(int32_t *)(v27 + 36);
									v34 = *(char *)(v33 + 112 * *(int32_t *)(v27 + 32) + v30);
									result = v34;
									if (v34 == *(char *)(v30 + g32 + g31)) {
										// 0x8222c
										v36 = function_80718(g26, g28, (int32_t *)(v27 + 16));
										result = v36;
										if (v36 == 0) {
											// 0x82244
											g37 = 10;
											v31 = random(125);
											result = function_7c204(g26, v31 + 10);
											// branch -> 0x82260
										}
									} else {
										// 0x82220
										*(char *)(v27 + 8) = 1;
										// branch -> 0x82260
									}
									// 0x82260
									if (*(char *)(g33 + 8) != 1) {
										// 0x8234c
										v11 = g33;
										if (*(int32_t *)(v11 + 4) == 0) {
											// 0x82358
											v14 = 8 * g28 + *(int32_t *)(v11 + 224);
											v18 = *(int32_t *)(v14 + 8);
											result = v18;
											*(int32_t *)(v11 + 84) = v18;
											*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
											// branch -> 0x82374
										}
										// 0x82374
										return result;
									}
									// 0x8226c
									g34 = g30;
									if (abs() <= 1) {
										// 0x8227c
										g34 = g29;
										if (abs() <= 1) {
											// 0x8228c
											v8 = g33;
											v12 = 2 * (int32_t) * (char *)(v8 + 157);
											result = v12;
											if (g36 < v12 + 23) {
												// 0x822a0
												*(int32_t *)(v8 + 72) = g28;
												if (g27 != 0) {
													// 0x822ac
													v9 = g33;
													v15 = *(int32_t *)(v9 + 148);
													if (*(int32_t *)(v9 + 152) < (v15 / 2 || v15 & -0x80000000)) {
														// 0x822c0
														g37 = 2;
														if (random(117) != 0) {
															// 0x822d4
															result = function_7c830(g26);
															// branch -> 0x8234c
															// 0x8234c
															v11 = g33;
															if (*(int32_t *)(v11 + 4) == 0) {
																// 0x82358
																v14 = 8 * g28 + *(int32_t *)(v11 + 224);
																v18 = *(int32_t *)(v14 + 8);
																result = v18;
																*(int32_t *)(v11 + 84) = v18;
																*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
																// branch -> 0x82374
															}
															// 0x82374
															return result;
														}
													}
												}
												// 0x822e0
												result = function_7c64c(g26);
												// branch -> 0x8234c
											}
											// 0x8234c
											v11 = g33;
											if (*(int32_t *)(v11 + 4) == 0) {
												// 0x82358
												v14 = 8 * g28 + *(int32_t *)(v11 + 224);
												v18 = *(int32_t *)(v14 + 8);
												result = v18;
												*(int32_t *)(v11 + 84) = v18;
												*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
												// branch -> 0x82374
											}
											// 0x82374
											return result;
										}
									}
									// 0x822ec
									v10 = g33;
									v16 = *(int32_t *)(v10 + 120);
									if (v16 >= 21) {
										// 0x822f8
										if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 28) {
											// 0x82340
											result = function_802c4(g26, g28);
											// branch -> 0x8234c
											// 0x8234c
											v11 = g33;
											if (*(int32_t *)(v11 + 4) == 0) {
												// 0x82358
												v14 = 8 * g28 + *(int32_t *)(v11 + 224);
												v18 = *(int32_t *)(v14 + 8);
												result = v18;
												*(int32_t *)(v11 + 84) = v18;
												*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
												// branch -> 0x82374
											}
											// 0x82374
											return result;
										}
									}
									// 0x8230c
									v17 = *(int32_t *)(v10 + 116);
									result = v17;
									if (v17 == 1) {
										// 0x82324
										if (v16 == 0) {
											// 0x8232c
											v13 = 2 * (int32_t) * (char *)(v10 + 157);
											result = v13;
											if (g36 < v13 + 78) {
												// 0x82340
												result = function_802c4(g26, g28);
												// branch -> 0x8234c
											}
										}
									} else {
										// 0x82318
										if (v17 <= 3) {
											// 0x82324
											if (v16 == 0) {
												// 0x8232c
												v13 = 2 * (int32_t) * (char *)(v10 + 157);
												result = v13;
												if (g36 < v13 + 78) {
													// 0x82340
													result = function_802c4(g26, g28);
													// branch -> 0x8234c
												}
											}
										}
									}
									// 0x8234c
									v11 = g33;
									if (*(int32_t *)(v11 + 4) == 0) {
										// 0x82358
										v14 = 8 * g28 + *(int32_t *)(v11 + 224);
										v18 = *(int32_t *)(v14 + 8);
										result = v18;
										*(int32_t *)(v11 + 84) = v18;
										*(int32_t *)(g33 + 88) = *(int32_t *)(v14 + 12);
										// branch -> 0x82374
									}
									// 0x82374
									return result;
								}
							}
						}
						// 0x82260
						if (*(char *)(g33 + 8) == 1) {
							// 0x8226c
							g34 = g30;
							if (abs() <= 1) {
								// 0x8227c
								g34 = g29;
								if (abs() <= 1) {
									// 0x8228c
									v8 = g33;
									if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 23) {
										// 0x822a0
										*(int32_t *)(v8 + 72) = g28;
										if (g27 != 0) {
											// 0x822ac
											v9 = g33;
											v15 = *(int32_t *)(v9 + 148);
											if (*(int32_t *)(v9 + 152) < (v15 / 2 || v15 & -0x80000000)) {
												// 0x822c0
												g37 = 2;
												if (random(117) != 0) {
													// 0x822d4
													function_7c830(g26);
													// branch -> 0x8234c
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										}
										// 0x822e0
										function_7c64c(g26);
										// branch -> 0x8234c
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x822ec
							v10 = g33;
							v16 = *(int32_t *)(v10 + 120);
							if (v16 >= 21) {
								// 0x822f8
								if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 28) {
									// 0x82340
									function_802c4(g26, g28);
									// branch -> 0x8234c
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x8230c
							v17 = *(int32_t *)(v10 + 116);
							if (v17 == 1) {
								// 0x82324
								if (v16 == 0) {
									// 0x8232c
									if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 78) {
										// 0x82340
										function_802c4(g26, g28);
										// branch -> 0x8234c
									}
								}
							} else {
								// 0x82318
								if (v17 <= 3) {
									// 0x82324
									if (v16 == 0) {
										// 0x8232c
										if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 78) {
											// 0x82340
											function_802c4(g26, g28);
											// branch -> 0x8234c
										}
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x82168
					v28 = v25;
					if (*(char *)(v25 + 8) != 4) {
						// 0x82174
						*(int32_t *)(v25 + 12) = 0;
						g37 = 2;
						*(int32_t *)(g33 + 16) = random(116);
						v28 = g33;
						// branch -> 0x8218c
					}
					// 0x8218c
					*(char *)(v28 + 8) = 4;
					g34 = g29;
					g25 = abs();
					g34 = g30;
					if (abs() > g25) {
						// 0x821b0
						g34 = g30;
						v26 = abs();
						// branch -> 0x821c4
					} else {
						// 0x821bc
						g34 = g29;
						v26 = abs();
						// branch -> 0x821c4
					}
					// 0x821c4
					v29 = (int32_t *)(g33 + 12);
					v32 = *v29;
					*v29 = v32 + 1;
					if (v32 >= 2 * v26) {
						// 0x821dc
						g34 = g26;
						g37 = g28;
						if (function_8539c() != 0) {
							// 0x821dc
							// branch -> 0x82220
							// 0x82220
							*(char *)(g33 + 8) = 1;
							// branch -> 0x82260
							// 0x82260
							if (*(char *)(g33 + 8) == 1) {
								// 0x8226c
								g34 = g30;
								if (abs() <= 1) {
									// 0x8227c
									g34 = g29;
									if (abs() <= 1) {
										// 0x8228c
										v8 = g33;
										if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 23) {
											// 0x822a0
											*(int32_t *)(v8 + 72) = g28;
											if (g27 != 0) {
												// 0x822ac
												v9 = g33;
												v15 = *(int32_t *)(v9 + 148);
												if (*(int32_t *)(v9 + 152) < (v15 / 2 || v15 & -0x80000000)) {
													// 0x822c0
													g37 = 2;
													if (random(117) != 0) {
														// 0x822d4
														function_7c830(g26);
														// branch -> 0x8234c
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
											}
											// 0x822e0
											function_7c64c(g26);
											// branch -> 0x8234c
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x822ec
								v10 = g33;
								v16 = *(int32_t *)(v10 + 120);
								if (v16 >= 21) {
									// 0x822f8
									if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 28) {
										// 0x82340
										function_802c4(g26, g28);
										// branch -> 0x8234c
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x8230c
								v17 = *(int32_t *)(v10 + 116);
								if (v17 == 1) {
									// 0x82324
									if (v16 == 0) {
										// 0x8232c
										if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 78) {
											// 0x82340
											function_802c4(g26, g28);
											// branch -> 0x8234c
										}
									}
								} else {
									// 0x82318
									if (v17 <= 3) {
										// 0x82324
										if (v16 == 0) {
											// 0x8232c
											if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 78) {
												// 0x82340
												function_802c4(g26, g28);
												// branch -> 0x8234c
											}
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x821f0
					v27 = g33;
					v30 = *(int32_t *)g35;
					v33 = *(int32_t *)(v27 + 36);
					v34 = *(char *)(v33 + 112 * *(int32_t *)(v27 + 32) + v30);
					if (v34 == *(char *)(v30 + g32 + g31)) {
						// 0x8222c
						if (function_80718(g26, g28, (int32_t *)(v27 + 16)) == 0) {
							// 0x82244
							g37 = 10;
							v31 = random(125);
							function_7c204(g26, v31 + 10);
							// branch -> 0x82260
						}
					} else {
						// 0x82220
						*(char *)(v27 + 8) = 1;
						// branch -> 0x82260
					}
					// 0x82260
					if (*(char *)(g33 + 8) == 1) {
						// 0x8226c
						g34 = g30;
						if (abs() <= 1) {
							// 0x8227c
							g34 = g29;
							if (abs() <= 1) {
								// 0x8228c
								v8 = g33;
								if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 23) {
									// 0x822a0
									*(int32_t *)(v8 + 72) = g28;
									if (g27 != 0) {
										// 0x822ac
										v9 = g33;
										v15 = *(int32_t *)(v9 + 148);
										if (*(int32_t *)(v9 + 152) < (v15 / 2 || v15 & -0x80000000)) {
											// 0x822c0
											g37 = 2;
											if (random(117) != 0) {
												// 0x822d4
												function_7c830(g26);
												// branch -> 0x8234c
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// 0x822e0
									function_7c64c(g26);
									// branch -> 0x8234c
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x822ec
						v10 = g33;
						v16 = *(int32_t *)(v10 + 120);
						if (v16 >= 21) {
							// 0x822f8
							if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 28) {
								// 0x82340
								function_802c4(g26, g28);
								// branch -> 0x8234c
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x8230c
						v17 = *(int32_t *)(v10 + 116);
						if (v17 == 1) {
							// 0x82324
							if (v16 == 0) {
								// 0x8232c
								if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 78) {
									// 0x82340
									function_802c4(g26, g28);
									// branch -> 0x8234c
								}
							}
						} else {
							// 0x82318
							if (v17 <= 3) {
								// 0x82324
								if (v16 == 0) {
									// 0x8232c
									if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 78) {
										// 0x82340
										function_802c4(g26, g28);
										// branch -> 0x8234c
									}
								}
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x8211c
			*(char *)(v20 + 8) = 1;
			// branch -> 0x82260
			// 0x82260
			if (*(char *)(g33 + 8) == 1) {
				// 0x8226c
				g34 = g30;
				if (abs() <= 1) {
					// 0x8227c
					g34 = g29;
					if (abs() <= 1) {
						// 0x8228c
						v8 = g33;
						if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 23) {
							// 0x822a0
							*(int32_t *)(v8 + 72) = g28;
							if (g27 != 0) {
								// 0x822ac
								v9 = g33;
								v15 = *(int32_t *)(v9 + 148);
								if (*(int32_t *)(v9 + 152) < (v15 / 2 || v15 & -0x80000000)) {
									// 0x822c0
									g37 = 2;
									if (random(117) != 0) {
										// 0x822d4
										function_7c830(g26);
										// branch -> 0x8234c
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// 0x822e0
							function_7c64c(g26);
							// branch -> 0x8234c
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0x822ec
				v10 = g33;
				v16 = *(int32_t *)(v10 + 120);
				if (v16 >= 21) {
					// 0x822f8
					if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 28) {
						// 0x82340
						function_802c4(g26, g28);
						// branch -> 0x8234c
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0x8230c
				v17 = *(int32_t *)(v10 + 116);
				if (v17 == 1) {
					// 0x82324
					if (v16 == 0) {
						// 0x8232c
						if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 78) {
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				} else {
					// 0x82318
					if (v17 <= 3) {
						// 0x82324
						if (v16 == 0) {
							// 0x8232c
							if (g36 < 2 * (int32_t) * (char *)(v10 + 157) + 78) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x82388 - 0x823ac
int32_t function_82388(void)
{
	// 0x82388
	g37 = 1;
	return function_8201c(1);
}

// Address range: 0x823ac - 0x82588
int32_t function_823ac(int32_t a1, int32_t a2)
{
	g30 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x823b8
	g29 = v1;
	g32 = g38;
	int32_t result = a1; // 0x825848
	int32_t v2 = a1;     // 0x823e0
	if (a1 >= 200) {
		// 0x823d4
		g37 = a1;
		result = app_fatal(*(int32_t *)(g23 - 0x5e3c));
		v2 = g30;
		v1 = g29;
		// branch -> 0x823e0
	}
	int32_t v3 = 232 * v2 + v1; // 0x823e4
	g36 = v3;
	if (*(int32_t *)(v3 + 4) == 0) {
		unsigned char v4 = *(char *)(v3 + 164); // 0x823f4
		int32_t v5 = v3;                        // 0x82420
		int32_t v6;                             // 0x82430
		int32_t v7;                             // 0x82434
		int32_t v8;                             // 0x8244c
		int32_t v9;                             // 0x8247c
		int32_t v10;                            // 0x8248c
		int32_t v11;                            // 0x824cc
		int32_t v12;                            // 0x82510
		int32_t v13;                            // 0x82514
		int32_t v14;                            // 0x82524
		int32_t v15;                            // 0x825849
		int32_t v16;                            // 0x8244c
		int32_t v17;                            // 0x82464
		int32_t v18;                            // 0x824a0
		int32_t v19;                            // 0x8252c
		int32_t v20;                            // 0x824e0
		int32_t result2;                        // 0x82530
		int32_t v21;                            // 0x8240c
		int32_t v22;                            // 0x82414
		if (v4 != -1) {
			// 0x82400
			if (__asm_rlwinm_(*(int32_t *)(v3 + 160), 0, 27, 27) == 0) {
				// 0x82544
				if ((int32_t)v4 != 0) {
					int32_t v23 = g36;                     // 0x82554
					int32_t v24 = *(int32_t *)(v23 + 176); // 0x82558
					int32_t v25 = *(int32_t *)(v23 + 32);  // 0x8255c
					int32_t v26 = *(int32_t *)(v23 + 36);  // 0x82560
					result = function_802c4(g30, GetDirection(v25, v26, *(int32_t *)(v23 + 172), v24));
					// branch -> 0x82574
				} else {
					result = 0;
				}
			} else {
				// 0x82400
				v5 = g36;
				// branch -> 0x8240c
				// 0x8240c
				v21 = (int32_t) * (char *)(v5 + 80);
				g34 = g30;
				v22 = (int32_t) * (char *)(v5 + 81);
				g35 = v21;
				g33 = v22;
				g28 = *(int32_t *)(v5 + 32) - v21;
				g27 = *(int32_t *)(v5 + 36) - v22;
				v6 = function_7bfc0();
				v7 = g36;
				g29 = v6;
				v16 = v7;
				v8 = v6;
				if (*(char *)(v7 + 164) != -1) {
					// 0x82444
					MonstCheckDoors(g30);
					v16 = g36;
					v8 = g29;
					// branch -> 0x8244c
				}
				// 0x8244c
				*(int32_t *)(v16 + 72) = v8;
				if (*(int32_t *)(g36 + 116) == 10) {
					// 0x8245c
					g37 = 20;
					v17 = random(118);
					v15 = function_7c204(g30, v17);
					// branch -> 0x824cc
				} else {
					// 0x82478
					g34 = g28;
					v9 = abs();
					if (v9 <= 3) {
						// 0x82488
						g34 = g27;
						v10 = abs();
						if (v10 <= 3) {
							// 0x82498
							g37 = 100;
							v18 = random(119);
							if (v18 < 10 * (int32_t) * (char *)(g36 + 157) + 70) {
								// 0x824b8
								v15 = function_802c4(g30, *(int32_t *)(4 * g29 + *(int32_t *)(g23 - 0x7104)));
								// branch -> 0x824cc
							} else {
								v15 = v18;
							}
						} else {
							v15 = v10;
						}
					} else {
						v15 = v9;
					}
				}
				// 0x824cc
				v11 = g36;
				if (*(int32_t *)(v11 + 4) == 0) {
					// 0x824d8
					v20 = *(int32_t *)(v11 + 36);
					if (function_85a14(*(int32_t *)(v11 + 32), v20, g35, g33) != 0) {
						// 0x824f4
						v12 = g30;
						v13 = g31;
						if (g32 == 0) {
							// 0x82510
							result = function_7c6ec(v12, v13, 4);
							// branch -> 0x82574
						} else {
							// 0x824fc
							result = function_7c78c(v12, v13, 4);
							// branch -> 0x82574
						}
						// 0x82574
						return result;
					}
					// 0x82524
					v14 = g36;
					v19 = 8 * g29 + *(int32_t *)(v14 + 224);
					result2 = *(int32_t *)(v19 + 8);
					*(int32_t *)(v14 + 84) = result2;
					*(int32_t *)(g36 + 88) = *(int32_t *)(v19 + 12);
					// branch -> 0x82574
					// 0x82574
					return result2;
				}
				result = v15;
			}
			// 0x82574
			return result;
		}
		// 0x8240c
		v21 = (int32_t) * (char *)(v5 + 80);
		g34 = v2;
		v22 = (int32_t) * (char *)(v5 + 81);
		g35 = v21;
		g33 = v22;
		g28 = *(int32_t *)(v5 + 32) - v21;
		g27 = *(int32_t *)(v5 + 36) - v22;
		v6 = function_7bfc0();
		v7 = g36;
		g29 = v6;
		v16 = v7;
		v8 = v6;
		if (*(char *)(v7 + 164) != -1) {
			// 0x82444
			MonstCheckDoors(g30);
			v16 = g36;
			v8 = g29;
			// branch -> 0x8244c
		}
		// 0x8244c
		*(int32_t *)(v16 + 72) = v8;
		if (*(int32_t *)(g36 + 116) == 10) {
			// 0x8245c
			g37 = 20;
			v17 = random(118);
			v15 = function_7c204(g30, v17);
			// branch -> 0x824cc
		} else {
			// 0x82478
			g34 = g28;
			v9 = abs();
			if (v9 <= 3) {
				// 0x82488
				g34 = g27;
				v10 = abs();
				if (v10 <= 3) {
					// 0x82498
					g37 = 100;
					v18 = random(119);
					if (v18 < 10 * (int32_t) * (char *)(g36 + 157) + 70) {
						// 0x824b8
						v15 = function_802c4(g30, *(int32_t *)(4 * g29 + *(int32_t *)(g23 - 0x7104)));
						// branch -> 0x824cc
					} else {
						v15 = v18;
					}
				} else {
					v15 = v10;
				}
			} else {
				v15 = v9;
			}
		}
		// 0x824cc
		v11 = g36;
		if (*(int32_t *)(v11 + 4) == 0) {
			// 0x824d8
			v20 = *(int32_t *)(v11 + 36);
			if (function_85a14(*(int32_t *)(v11 + 32), v20, g35, g33) != 0) {
				// 0x824f4
				v12 = g30;
				v13 = g31;
				if (g32 == 0) {
					// 0x82510
					result = function_7c6ec(v12, v13, 4);
					// branch -> 0x82574
				} else {
					// 0x824fc
					result = function_7c78c(v12, v13, 4);
					// branch -> 0x82574
				}
				// 0x82574
				return result;
			}
			// 0x82524
			v14 = g36;
			v19 = 8 * g29 + *(int32_t *)(v14 + 224);
			result2 = *(int32_t *)(v19 + 8);
			*(int32_t *)(v14 + 84) = result2;
			*(int32_t *)(g36 + 88) = *(int32_t *)(v19 + 12);
			// branch -> 0x82574
			// 0x82574
			return result2;
		}
		result = v15;
	}
	// 0x82574
	return result;
}

// Address range: 0x82588 - 0x825b0
int32_t function_82588(void)
{
	// 0x82588
	g38 = 0;
	return function_823ac(0, 0);
}

// Address range: 0x825b0 - 0x825d8
int32_t function_825b0(int32_t a1)
{
	// 0x825b0
	g38 = 0;
	return function_823ac(24, 0);
}

// Address range: 0x825d8 - 0x82600
int32_t function_825d8(void)
{
	// 0x825d8
	g38 = 1;
	return function_823ac(57, 1);
}

// Address range: 0x82600 - 0x82940
int32_t function_82600(int32_t a1)
{
	g28 = a1;
	g33 = *(int32_t *)(g23 - 0x7630);
	g35 = *(int32_t *)(g23 - 0x70b4);
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x82618
	g36 = v1;
	int32_t result = a1; // 0x8293c44
	int32_t v2 = a1;     // 0x82634
	if (a1 >= 200) {
		// 0x82628
		g37 = a1;
		result = app_fatal(*(int32_t *)(g23 - 0x5e40));
		v2 = g28;
		v1 = g36;
		// branch -> 0x82634
	}
	int32_t v3 = 232 * v2 + v1; // 0x82638
	g32 = v3;
	int32_t v4 = 0; // r25
	if (*(int32_t *)(v3 + 4) != 0) {
		// 0x8292c
		return result;
	}
	uint32_t v5 = *(int32_t *)(v3 + 148); // 0x8264c
	int32_t v6 = *(int32_t *)(v3 + 152);  // 0x82650
	int32_t result3 = v6;                 // r3
	int32_t v7 = v3;                      // 0x826c8
	if (v6 < (v5 / 2 || v5 & -0x80000000)) {
		// 0x82660
		if (*(char *)(v3 + 8) != 3) {
			int32_t v8 = v3 + 217; // 0x8266c
			int32_t v9 = v3;       // 0x826a0
			if (*(char *)v8 != 0) {
				int32_t v10 = 232 * (int32_t) * (char *)(v3 + 216); // 0x82684
				char *v11 = (char *)(v10 + v1 + 218);               // 0x8268c
				int32_t v12 = (int32_t)*v11 - 1;                    // 0x82690
				result3 = v12;
				*v11 = (char)v12;
				*(char *)v8 = (char)0;
				v9 = g32;
				// branch -> 0x8269c
			}
			// 0x8269c
			*(char *)(v9 + 8) = 3;
			*(int32_t *)(g32 + 20) = 10;
			v7 = g32;
			// branch -> 0x826ac
		} else {
			v7 = v3;
		}
	}
	// 0x826ac
	int32_t result4; // 0x8293c
	if (*(char *)(v7 + 8) == 3) {
		int32_t *v13 = (int32_t *)(v7 + 20); // 0x826b8
		int32_t v14 = *v13;                  // 0x826b8
		result3 = v14;
		if (v14 != 0) {
			// 0x826c4
			*v13 = v14 - 1;
			int32_t v15 = g32;                    // 0x826cc
			int32_t v16 = *(int32_t *)(v15 + 36); // 0x826d0
			int32_t v17 = *(int32_t *)g33;        // 0x826d8
			if (*(char *)(v17 + v16 + 112 * *(int32_t *)(v15 + 32)) == 0) {
				// 0x82744
				int32_t v18; // 0x828e0
				int32_t v19; // 0x828e0
				int32_t v20; // 0x828f4
				int32_t v21; // 0x82900
				int32_t v22; // 0x82904
				if (*(int32_t *)(v15 + 12) == 0) {
					// 0x82750
					g37 = 2;
					int32_t v23;     // 0x828c0
					int32_t v24;     // 0x828d4
					int32_t result2; // 0x82928
					if (random(120) == 0) {
						// 0x828a0
						g31 = 4;
						int32_t v25 = 4; // 0x828b429
						                 // branch -> 0x828a8
					lab_0x828a8:
						while (true) {
							// 0x828a8
							int32_t v26; // 0x828b4
							int32_t v27; // 0x828b839
							if (v4 == 0) {
								// 0x8288c
								g30 = 4;
								int32_t v28 = v4; // 0x828b837
								int32_t v29 = 4;  // 0x8284c
								int32_t v30 = 0;  // 0x82894
								// branch -> 0x82894
								int32_t v31; // 0x828b028
								while (true) {
									int32_t v32 = v28; // 0x828b840
									v31 = v29;
									if (v30 == 0) {
										uint32_t v33 = g31; // 0x82820
										int32_t v34;        // 0x82888
										if (v33 >= 0) {
											// 0x82828
											if (v33 <= 111) {
												// 0x82830
												if (v29 >= 0) {
													// 0x82838
													if (v29 <= 111) {
														int32_t v35 = g32;                    // 0x82840
														int32_t v36 = *(int32_t *)(v35 + 32); // 0x82840
														int32_t v37 = v36 + v29;              // 0x8284c
														int32_t v38 = *(int32_t *)(v35 + 36); // 0x82850
														int32_t v39;
														int32_t v40; // 0x82884
														if (*(char *)(*(int32_t *)g33 + 112 * v37 + v38 + v33) != 0) {
															// 0x8286c
															int32_t v41; // 0x82884
															if (function_8576c(g35, v36, v38, v37, v38 + v33) == 0) {
																// 0x8286c
																v41 = g29;
																// branch -> 0x82884
															} else {
																// 0x82880
																v41 = 1;
																// branch -> 0x82884
															}
															// 0x82884
															v40 = v41 % 256;
															// branch -> 0x82888
														lab_0x82888:
															// 0x82888
															v34 = v39 - 1;
															g30 = v34;
															if (v34 < -4) {
																// break -> 0x8289c
																break;
															}
															v28 = v40;
															v29 = v34;
															v30 = v40;
															// continue -> 0x82894
															continue;
														}
														// 0x82884
														v40 = 0;
														v39 = g30;
														// branch -> 0x82888
														goto lab_0x82888;
													}
												}
											}
										}
										// 0x82888
										v34 = v29 - 1;
										g30 = v34;
										if (v34 < -4) {
											// break -> 0x8289c
											break;
										}
										v29 = v34;
										v30 = 0;
										// continue -> 0x82894
										continue;
									}
									int32_t v42 = g31 - 1; // 0x8289c
									g31 = v42;
									if (v42 < -4) {
										v27 = v32;
										v26 = v42;
										// break (via goto) -> 0x828b0
										goto lab_0x828b0;
									}
									v4 = v32;
									v25 = v42;
									// continue (via goto) -> 0x828a8
									goto lab_0x828a8;
								}
								// 0x828b0
								// branch -> 0x828b8
								// 0x828b8
								if (v27 != 0) {
									// 0x828c0
									v23 = g32;
									*(int32_t *)(v23 + 12) = 2 + v31 + *(int32_t *)(v23 + 32);
									v24 = g32;
									*(int32_t *)(v24 + 16) = 2 + v26 + *(int32_t *)(v24 + 36);
									// branch -> 0x828e0
								}
								// 0x828e0
								v18 = g32;
								v19 = *(int32_t *)(v18 + 12);
								result3 = v19;
								if (v19 != 0) {
									// 0x828ec
									v20 = *(int32_t *)(v18 + 32);
									v21 = *(int32_t *)(v18 + 36);
									v22 = GetDirection(v20, v21, v19 - 1, *(int32_t *)(v18 + 16) - 1);
									*(int32_t *)(g32 + 72) = v22;
									result3 = function_802c4(g28, *(int32_t *)(g32 + 72));
									// branch -> 0x82918
								}
								// 0x82918
								if (*(int32_t *)(g32 + 4) == 0) {
									// 0x82924
									result2 = function_80a28(g28);
									// branch -> 0x8292c
									// 0x8292c
									return result2;
								}
								// 0x82918
								// branch -> 0x8292c
								// 0x8292c
								return result3;
							}
							// 0x828a8
							v27 = v4;
							v26 = v25;
							// branch -> 0x828b0
						lab_0x828b0:;
							// 0x828b0
							// branch -> 0x828b8
						}
					} else {
						// 0x827f4
						g31 = -4;
						int32_t v43 = -4; // 0x8280818
						                  // branch -> 0x827fc
					lab_0x827fc:
						while (true) {
							// 0x827fc
							int32_t v44; // 0x82808
							int32_t v45; // 0x828b834
							if (v4 == 0) {
								// 0x827e0
								g30 = -4;
								int32_t v46 = v4; // 0x828b831
								int32_t v47 = -4; // 0x827a0
								int32_t v48 = 0;  // 0x827e8
								// branch -> 0x827e8
								int32_t v49; // 0x8280417
								while (true) {
									int32_t v50 = v46; // 0x828b835
									v49 = v47;
									if (v48 == 0) {
										uint32_t v51 = g31; // 0x82774
										int32_t v52;        // 0x827dc
										if (v51 >= 0) {
											// 0x8277c
											if (v51 <= 111) {
												// 0x82784
												if (v47 >= 0) {
													// 0x8278c
													if (v47 <= 111) {
														int32_t v53 = g32;                    // 0x82794
														int32_t v54 = *(int32_t *)(v53 + 32); // 0x82794
														int32_t v55 = v54 + v47;              // 0x827a0
														int32_t v56 = *(int32_t *)(v53 + 36); // 0x827a4
														int32_t v57;
														int32_t v58; // 0x827d8
														if (*(char *)(*(int32_t *)g33 + 112 * v55 + v56 + v51) != 0) {
															// 0x827c0
															int32_t v59; // 0x827d8
															if (function_8576c(g35, v54, v56, v55, v56 + v51) == 0) {
																// 0x827c0
																v59 = g29;
																// branch -> 0x827d8
															} else {
																// 0x827d4
																v59 = 1;
																// branch -> 0x827d8
															}
															// 0x827d8
															v58 = v59 % 256;
															// branch -> 0x827dc
														lab_0x827dc:
															// 0x827dc
															v52 = v57 + 1;
															g30 = v52;
															if (v52 > 4) {
																// break -> 0x827f0
																break;
															}
															v46 = v58;
															v47 = v52;
															v48 = v58;
															// continue -> 0x827e8
															continue;
														}
														// 0x827d8
														v58 = 0;
														v57 = g30;
														// branch -> 0x827dc
														goto lab_0x827dc;
													}
												}
											}
										}
										// 0x827dc
										v52 = v47 + 1;
										g30 = v52;
										if (v52 > 4) {
											// break -> 0x827f0
											break;
										}
										v47 = v52;
										v48 = 0;
										// continue -> 0x827e8
										continue;
									}
									int32_t v60 = g31 + 1; // 0x827f0
									g31 = v60;
									if (v60 > 4) {
										v45 = v50;
										v44 = v60;
										// break (via goto) -> 0x82804
										goto lab_0x82804;
									}
									v4 = v50;
									v43 = v60;
									// continue (via goto) -> 0x827fc
									goto lab_0x827fc;
								}
								// 0x82804
								// branch -> 0x828b8
								// 0x828b8
								if (v45 != 0) {
									// 0x828c0
									v23 = g32;
									*(int32_t *)(v23 + 12) = v49 + *(int32_t *)(v23 + 32);
									v24 = g32;
									*(int32_t *)(v24 + 16) = v44 + *(int32_t *)(v24 + 36);
									// branch -> 0x828e0
								}
								// 0x828e0
								v18 = g32;
								v19 = *(int32_t *)(v18 + 12);
								result3 = v19;
								if (v19 != 0) {
									// 0x828ec
									v20 = *(int32_t *)(v18 + 32);
									v21 = *(int32_t *)(v18 + 36);
									v22 = GetDirection(v20, v21, v19 - 1, *(int32_t *)(v18 + 16) - 1);
									*(int32_t *)(g32 + 72) = v22;
									result3 = function_802c4(g28, *(int32_t *)(g32 + 72));
									// branch -> 0x82918
								}
								// 0x82918
								if (*(int32_t *)(g32 + 4) == 0) {
									// 0x82924
									result2 = function_80a28(g28);
									// branch -> 0x8292c
									// 0x8292c
									return result2;
								}
								// 0x82918
								// branch -> 0x8292c
								// 0x8292c
								return result3;
							}
							// 0x827fc
							v45 = v4;
							v44 = v43;
							// branch -> 0x82804
						lab_0x82804:;
							// 0x82804
							// branch -> 0x828b8
						}
					}
				}
				// 0x828e0
				v18 = g32;
				v19 = *(int32_t *)(v18 + 12);
				result3 = v19;
				if (v19 != 0) {
					// 0x828ec
					v20 = *(int32_t *)(v18 + 32);
					v21 = *(int32_t *)(v18 + 36);
					v22 = GetDirection(v20, v21, v19 - 1, *(int32_t *)(v18 + 16) - 1);
					*(int32_t *)(g32 + 72) = v22;
					result3 = function_802c4(g28, *(int32_t *)(g32 + 72));
					// branch -> 0x82918
				}
			} else {
				// 0x826ec
				function_7c8d0(g28, v17);
				if (__asm_rlwinm_(*(int32_t *)(g31 + g36 + 160), 0, 28, 28) == 0) {
					int32_t *v61 = (int32_t *)(g32 + 152); // 0x82704
					*v61 = *v61 + 64;
					// branch -> 0x82710
				}
				int32_t v62 = g32;                         // 0x82710
				int32_t v63 = *(int32_t *)(v62 + 148);     // 0x82710
				int32_t v64 = v63 / 2 | v63 & -0x80000000; // 0x82718
				result3 = v64;
				if (*(int32_t *)(v62 + 152) >= v63 / 4 + v64) {
					// 0x8272c
					*(char *)(v62 + 8) = 1;
					*(int32_t *)(g32 + 12) = 0;
					*(int32_t *)(g32 + 16) = 0;
					// branch -> 0x82918
				}
			}
			// 0x82918
			if (*(int32_t *)(g32 + 4) == 0) {
				// 0x82924
				result4 = function_80a28(g28);
				// branch -> 0x8292c
			} else {
				// 0x82918
				result4 = result3;
				// branch -> 0x8292c
			}
			// 0x8292c
			return result4;
		}
	}
	// 0x82918
	if (*(int32_t *)(g32 + 4) == 0) {
		// 0x82924
		result4 = function_80a28(g28);
		// branch -> 0x8292c
	} else {
		// 0x82918
		result4 = result3;
		// branch -> 0x8292c
	}
	// 0x8292c
	return result4;
}

// Address range: 0x82940 - 0x82adc
int32_t function_82940(int32_t a1)
{
	g35 = a1;
	int32_t v1 = a1; // 0x82978
	if (a1 >= 200) {
		// 0x8295c
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e44));
		v1 = g35;
		// branch -> 0x82968
	}
	int32_t v2 = *(int32_t *)(g23 - 0x7754) + 232 * v1; // 0x82970
	g36 = v2;
	g34 = v1;
	g32 = *(int32_t *)(v2 + 32) - *(int32_t *)(v2 + 172);
	g31 = *(int32_t *)(v2 + 36) - *(int32_t *)(v2 + 176);
	int32_t v3 = function_7bfc0();          // 0x82990
	int32_t result = v3;                    // r3
	int32_t v4 = g36;                       // 0x82994
	unsigned char v5 = *(char *)(v4 + 164); // 0x82994
	int32_t v6 = v5;                        // r4
	g33 = v3;
	int32_t v7 = v4; // 0x82a34
	int32_t v8;      // 0x82a58
	int32_t v9;      // 0x82a5c
	int32_t v10;     // 0x82a70
	int32_t v11;     // 0x82a74
	int32_t v12;     // 0x82ab0
	int32_t result2; // 0x82ac4
	uint32_t v13;    // 0x82a20
	if (v5 == 0) {
		// 0x82a0c
		if (*(int32_t *)(v7 + 4) != 0) {
			// 0x82ac8
			return result;
		}
		// 0x82a18
		if (v6 != 0) {
			// 0x82a20
			v13 = *(int32_t *)(v7 + 148);
			if (*(int32_t *)(v7 + 152) < (v13 / 2 || v13 & -0x80000000)) {
				// 0x82a34
				if (__asm_rlwinm_(*(int32_t *)(v7 + 160), 0, 28, 28) == 0) {
					// 0x82a40
					*(char *)(g36 + 8) = 2;
					// branch -> 0x82a48
				}
			}
			// 0x82a48
			if (*(char *)(g36 + 8) == 2) {
				// 0x82a54
				g34 = g32;
				v8 = abs();
				v9 = g36;
				v12 = v9;
				if (v8 < (int32_t) * (char *)(v9 + 157) + 2) {
					// 0x82a6c
					g34 = g31;
					v10 = abs();
					v11 = g36;
					if (v10 < (int32_t) * (char *)(v11 + 157) + 2) {
						// 0x82a84
						if (function_802c4(g35, *(int32_t *)(4 * g33 + *(int32_t *)(g23 - 0x7104))) == 0) {
							// 0x82aa0
							*(char *)(g36 + 8) = 1;
							// branch -> 0x82abc
						}
						// 0x82abc
						g37 = 0;
						result2 = function_8201c(g35);
						// branch -> 0x82ac8
						// 0x82ac8
						return result2;
					}
					v12 = v11;
				}
				// 0x82aac
				*(char *)(v12 + 8) = 1;
				function_7db18(g35);
				// branch -> 0x82abc
			}
			// 0x82abc
			g37 = 0;
			result = function_8201c(g35);
			// branch -> 0x82ac8
		}
		// 0x82ac8
		return result;
	}
	// 0x829a4
	if (__asm_rlwinm_(*(int32_t *)(v4 + 160), 0, 29, 29) == 0) {
		// 0x829a4
		v7 = g36;
		// branch -> 0x82a0c
		// 0x82a0c
		if (*(int32_t *)(v7 + 4) == 0) {
			// 0x82a18
			if (v6 != 0) {
				// 0x82a20
				v13 = *(int32_t *)(v7 + 148);
				if (*(int32_t *)(v7 + 152) < (v13 / 2 || v13 & -0x80000000)) {
					// 0x82a34
					if (__asm_rlwinm_(*(int32_t *)(v7 + 160), 0, 28, 28) == 0) {
						// 0x82a40
						*(char *)(g36 + 8) = 2;
						// branch -> 0x82a48
					}
				}
				// 0x82a48
				if (*(char *)(g36 + 8) == 2) {
					// 0x82a54
					g34 = g32;
					v8 = abs();
					v9 = g36;
					v12 = v9;
					if (v8 < (int32_t) * (char *)(v9 + 157) + 2) {
						// 0x82a6c
						g34 = g31;
						v10 = abs();
						v11 = g36;
						if (v10 < (int32_t) * (char *)(v11 + 157) + 2) {
							// 0x82a84
							if (function_802c4(g35, *(int32_t *)(4 * g33 + *(int32_t *)(g23 - 0x7104))) == 0) {
								// 0x82aa0
								*(char *)(g36 + 8) = 1;
								// branch -> 0x82abc
							}
							// 0x82abc
							g37 = 0;
							result2 = function_8201c(g35);
							// branch -> 0x82ac8
							// 0x82ac8
							return result2;
						}
						v12 = v11;
					}
					// 0x82aac
					*(char *)(v12 + 8) = 1;
					function_7db18(g35);
					// branch -> 0x82abc
				}
				// 0x82abc
				g37 = 0;
				result = function_8201c(g35);
				// branch -> 0x82ac8
			}
		}
	} else {
		// 0x829b0
		function_7bc44(g35);
		int32_t v14 = g36; // 0x829b8
		g34 = *(int32_t *)(v14 + 32) - (int32_t) * (char *)(v14 + 80);
		int32_t v15 = abs(); // 0x829d0
		result = v15;
		if (v15 < (int32_t) * (char *)(g36 + 157) + 2) {
			// 0x829e4
			g34 = *(int32_t *)(v14 + 36) - (int32_t) * (char *)(v14 + 81);
			int32_t v16 = abs(); // 0x829e8
			result = v16;
			int32_t v17 = g36; // 0x829ec
			if (v16 < (int32_t) * (char *)(v17 + 157) + 2) {
				// 0x829fc
				*(int32_t *)(g36 + 160) = __asm_rlwinm(*(int32_t *)(v17 + 160), 0, 30, 28);
				// branch -> 0x82ac8
			}
		}
	}
	// 0x82ac8
	return result;
}

// Address range: 0x82adc - 0x82e9c
int32_t function_82adc(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	g25 = a1;
	g24 = a3;
	g28 = g40;
	int32_t v1 = a1; // 0x82b14
	if (a1 >= 200) {
		// 0x82b08
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e48));
		v1 = g25;
		// branch -> 0x82b14
	}
	int32_t v2 = *(int32_t *)(g23 - 0x7754) + 232 * v1; // 0x82b1c
	g35 = v2;
	if (*(int32_t *)(v2 + 4) == 0) {
		// 0x82b2c
		if (*(char *)(v2 + 164) != 0) {
			int32_t v3 = (int32_t) * (char *)(v2 + 80); // 0x82b38
			int32_t v4 = *(int32_t *)(v2 + 32);         // 0x82b3c
			int32_t v5 = (int32_t) * (char *)(v2 + 81); // 0x82b40
			g33 = v3;
			int32_t v6 = *(int32_t *)(v2 + 36); // 0x82b48
			g31 = v4 - v3;
			int32_t v7 = *(int32_t *)(v2 + 172); // 0x82b50
			g32 = v5;
			g30 = v6 - v5;
			g29 = GetDirection(v4, v6, v7, *(int32_t *)(v2 + 176));
			if (g24 != 0) {
				// 0x82b70
				if (*(char *)(g35 + 164) != -1) {
					// 0x82b7c
					MonstCheckDoors(g25);
					// branch -> 0x82b84
				}
			}
			// 0x82b84
			g37 = 0x2710;
			g36 = random(121);
			g34 = g31;
			int32_t v8;     // r3
			int32_t v9;     // 0x82d60
			int32_t v10;    // 0x82d70
			int32_t v11;    // 0x82d78
			int32_t v12;    // 0x82d98
			int32_t v13;    // 0x82de0
			int32_t v14;    // 0x82e10
			int32_t result; // 0x82e98
			int32_t v15;    // 0x82d6c
			int32_t v16;    // 0x82d84
			uint32_t v17;   // 0x82d68
			int32_t v18;    // 0x82d6c
			uint32_t v19;   // 0x82d80
			uint32_t v20;   // 0x82d84
			int32_t v21;    // 0x82de4
			int32_t v22;    // 0x82e14
			int32_t v23;    // 0x82e0c
			int32_t v24;    // 0x82e74
			int32_t v25;    // 0x82d98
			int32_t v26;    // 0x82db8
			int32_t v27;    // 0x82e24
			uint32_t v28;   // 0x82d6c
			uint32_t v29;   // 0x82d84
			if (abs() <= 1) {
				// 0x82ba4
				g34 = g30;
				int32_t v30 = abs(); // 0x82ba8
				if (v30 < 2) {
					// 0x82ba4
					// branch -> 0x82bf8
					// 0x82bf8
					*(char *)(g35 + 8) = 1;
					// branch -> 0x82d34
					// 0x82d34
					if (*(char *)(g35 + 8) != 1) {
						// 0x82e60
						if (*(int32_t *)(g35 + 4) == 0) {
							// 0x82e6c
							g37 = 10;
							v24 = random(125);
							result = function_7c204(g25, v24 + 5);
							// branch -> 0x82e88
						} else {
							// 0x82e60
							result = v30;
							// branch -> 0x82e88
						}
						// 0x82e88
						return result;
					}
					// 0x82d40
					g34 = g31;
					if (abs() <= 2) {
						// 0x82d50
						g34 = g30;
						if (abs() < 3) {
							// 0x82d50
							v20 = g28;
							v11 = g35;
							// branch -> 0x82d78
							// 0x82d78
							v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
							v29 = -v20 % 32;
							v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
							if (g36 < (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
								v12 = v11;
								// 0x82d90
								v25 = *(int32_t *)(v12 + 36);
								if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) != 0) {
									// 0x82dac
									v26 = function_7c78c(g25, g26, g27);
									// branch -> 0x82e60
									// 0x82e60
									if (*(int32_t *)(g35 + 4) == 0) {
										// 0x82e6c
										g37 = 10;
										v24 = random(125);
										result = function_7c204(g25, v24 + 5);
										// branch -> 0x82e88
									} else {
										// 0x82e60
										result = v26;
										// branch -> 0x82e88
									}
									// 0x82e88
									return result;
								}
							}
							// 0x82dc0
							g34 = g31;
							if (abs() <= 1) {
								// 0x82dd0
								g34 = g30;
								if (abs() <= 1) {
									// 0x82de0
									v13 = g35;
									v21 = 1000 * (int32_t) * (char *)(v13 + 157);
									v8 = v21;
									if (g36 < v21 + 0x1770) {
										// 0x82df4
										*(int32_t *)(v13 + 72) = g29;
										v8 = function_7c64c(g25);
										// branch -> 0x82e60
									}
									// 0x82e60
									if (*(int32_t *)(g35 + 4) == 0) {
										// 0x82e6c
										g37 = 10;
										v24 = random(125);
										result = function_7c204(g25, v24 + 5);
										// branch -> 0x82e88
									} else {
										// 0x82e60
										result = v8;
										// branch -> 0x82e88
									}
									// 0x82e88
									return result;
								}
							}
							// 0x82e04
							g37 = 100;
							v23 = random(124);
							v8 = v23;
							v14 = g35;
							v22 = 1000 * (int32_t) * (char *)(v14 + 157);
							if (v23 < v22 + 0x1388) {
								// 0x82e54
								v8 = function_802c4(g25, g29);
								// branch -> 0x82e60
							} else {
								// 0x82e24
								v27 = *(int32_t *)(v14 + 116);
								if (v27 != 1) {
									// 0x82e30
									if ((v27 & -2) != 2) {
										// 0x82e60
										if (*(int32_t *)(g35 + 4) == 0) {
											// 0x82e6c
											g37 = 10;
											v24 = random(125);
											result = function_7c204(g25, v24 + 5);
											// branch -> 0x82e88
										} else {
											// 0x82e60
											result = v8;
											// branch -> 0x82e88
										}
										// 0x82e88
										return result;
									}
								}
								// 0x82e3c
								if (*(int32_t *)(v14 + 120) == 0) {
									// 0x82e48
									if (v23 < v22 + 0x1f40) {
										// 0x82e54
										v8 = function_802c4(g25, g29);
										// branch -> 0x82e60
									}
								}
							}
							// 0x82e60
							if (*(int32_t *)(g35 + 4) == 0) {
								// 0x82e6c
								g37 = 10;
								v24 = random(125);
								result = function_7c204(g25, v24 + 5);
								// branch -> 0x82e88
							} else {
								// 0x82e60
								result = v8;
								// branch -> 0x82e88
							}
							// 0x82e88
							return result;
						}
					}
					// 0x82d60
					v9 = g35;
					v17 = 500 * (int32_t) * (char *)(v9 + 157) + 1000;
					v18 = g28;
					v28 = -v18 % 32;
					v15 = (v18 & 32) != 0 ? 0 : 0xffffffff >> v18 % 32;
					v10 = g36;
					v12 = v9;
					if (v10 >= (((v17 >> (v28 ^ 31)) / 2 | v17 << v28) & v15)) {
						v20 = v18;
						v11 = v9;
						// 0x82d78
						v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
						v29 = -v20 % 32;
						v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
						if (v10 >= (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
							// 0x82dc0
							g34 = g31;
							if (abs() <= 1) {
								// 0x82dd0
								g34 = g30;
								if (abs() <= 1) {
									// 0x82de0
									v13 = g35;
									v21 = 1000 * (int32_t) * (char *)(v13 + 157);
									v8 = v21;
									if (g36 < v21 + 0x1770) {
										// 0x82df4
										*(int32_t *)(v13 + 72) = g29;
										v8 = function_7c64c(g25);
										// branch -> 0x82e60
									}
									// 0x82e60
									if (*(int32_t *)(g35 + 4) == 0) {
										// 0x82e6c
										g37 = 10;
										v24 = random(125);
										result = function_7c204(g25, v24 + 5);
										// branch -> 0x82e88
									} else {
										// 0x82e60
										result = v8;
										// branch -> 0x82e88
									}
									// 0x82e88
									return result;
								}
							}
							// 0x82e04
							g37 = 100;
							v23 = random(124);
							v8 = v23;
							v14 = g35;
							v22 = 1000 * (int32_t) * (char *)(v14 + 157);
							if (v23 < v22 + 0x1388) {
								// 0x82e54
								v8 = function_802c4(g25, g29);
								// branch -> 0x82e60
							} else {
								// 0x82e24
								v27 = *(int32_t *)(v14 + 116);
								if (v27 != 1) {
									// 0x82e30
									if ((v27 & -2) != 2) {
										// 0x82e60
										if (*(int32_t *)(g35 + 4) == 0) {
											// 0x82e6c
											g37 = 10;
											v24 = random(125);
											result = function_7c204(g25, v24 + 5);
											// branch -> 0x82e88
										} else {
											// 0x82e60
											result = v8;
											// branch -> 0x82e88
										}
										// 0x82e88
										return result;
									}
								}
								// 0x82e3c
								if (*(int32_t *)(v14 + 120) == 0) {
									// 0x82e48
									if (v23 < v22 + 0x1f40) {
										// 0x82e54
										v8 = function_802c4(g25, g29);
										// branch -> 0x82e60
									}
								}
							}
							// 0x82e60
							if (*(int32_t *)(g35 + 4) == 0) {
								// 0x82e6c
								g37 = 10;
								v24 = random(125);
								result = function_7c204(g25, v24 + 5);
								// branch -> 0x82e88
							} else {
								// 0x82e60
								result = v8;
								// branch -> 0x82e88
							}
							// 0x82e88
							return result;
						}
						v12 = v11;
					}
					// 0x82d90
					v25 = *(int32_t *)(v12 + 36);
					if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) != 0) {
						// 0x82dac
						v26 = function_7c78c(g25, g26, g27);
						// branch -> 0x82e60
						// 0x82e60
						if (*(int32_t *)(g35 + 4) == 0) {
							// 0x82e6c
							g37 = 10;
							v24 = random(125);
							result = function_7c204(g25, v24 + 5);
							// branch -> 0x82e88
						} else {
							// 0x82e60
							result = v26;
							// branch -> 0x82e88
						}
						// 0x82e88
						return result;
					}
					// 0x82dc0
					g34 = g31;
					if (abs() <= 1) {
						// 0x82dd0
						g34 = g30;
						if (abs() <= 1) {
							// 0x82de0
							v13 = g35;
							v21 = 1000 * (int32_t) * (char *)(v13 + 157);
							v8 = v21;
							if (g36 < v21 + 0x1770) {
								// 0x82df4
								*(int32_t *)(v13 + 72) = g29;
								v8 = function_7c64c(g25);
								// branch -> 0x82e60
							}
							// 0x82e60
							if (*(int32_t *)(g35 + 4) == 0) {
								// 0x82e6c
								g37 = 10;
								v24 = random(125);
								result = function_7c204(g25, v24 + 5);
								// branch -> 0x82e88
							} else {
								// 0x82e60
								result = v8;
								// branch -> 0x82e88
							}
							// 0x82e88
							return result;
						}
					}
					// 0x82e04
					g37 = 100;
					v23 = random(124);
					v8 = v23;
					v14 = g35;
					v22 = 1000 * (int32_t) * (char *)(v14 + 157);
					if (v23 < v22 + 0x1388) {
						// 0x82e54
						v8 = function_802c4(g25, g29);
						// branch -> 0x82e60
					} else {
						// 0x82e24
						v27 = *(int32_t *)(v14 + 116);
						if (v27 != 1) {
							// 0x82e30
							if ((v27 & -2) != 2) {
								// 0x82e60
								if (*(int32_t *)(g35 + 4) == 0) {
									// 0x82e6c
									g37 = 10;
									v24 = random(125);
									result = function_7c204(g25, v24 + 5);
									// branch -> 0x82e88
								} else {
									// 0x82e60
									result = v8;
									// branch -> 0x82e88
								}
								// 0x82e88
								return result;
							}
						}
						// 0x82e3c
						if (*(int32_t *)(v14 + 120) == 0) {
							// 0x82e48
							if (v23 < v22 + 0x1f40) {
								// 0x82e54
								v8 = function_802c4(g25, g29);
								// branch -> 0x82e60
							}
						}
					}
					// 0x82e60
					if (*(int32_t *)(g35 + 4) == 0) {
						// 0x82e6c
						g37 = 10;
						v24 = random(125);
						result = function_7c204(g25, v24 + 5);
						// branch -> 0x82e88
					} else {
						// 0x82e60
						result = v8;
						// branch -> 0x82e88
					}
					// 0x82e88
					return result;
				}
			}
			int32_t v31 = g35; // 0x82bb4
			if (*(char *)(v31 + 164) == -1) {
				int32_t v32 = *(int32_t *)(v31 + 36);                           // 0x82bcc
				int32_t v33 = *(int32_t *)*(int32_t *)(g23 - 0x7588);           // 0x82bd4
				char v34 = *(char *)(v33 + v32 + 112 * *(int32_t *)(v31 + 32)); // 0x82be4
				if (v34 == *(char *)(g32 + 112 * g33 + v33)) {
					int32_t v35 = v31; // 0x82c58
					int32_t v36;
					int32_t v37;  // 0x82cdc
					int32_t v38;  // 0x82d28
					int32_t v39;  // 0x82ce8
					uint32_t v40; // 0x82ce4
					uint32_t v41; // 0x82ce8
					int32_t v42;  // 0x82c70
					int32_t *v43; // 0x82ca4
					uint32_t v44; // 0x82ca4
					int32_t v45;  // 0x82cfc
					uint32_t v46; // 0x82ce8
					if (*(char *)(v31 + 8) != 4) {
						// 0x82c10
						g34 = g31;
						if (abs() > 2) {
							// 0x82c30
							g37 = 4 << g28 % 64;
							if (random(122) == 0) {
								// 0x82c30
								v35 = g35;
								// branch -> 0x82c48
								// 0x82c48
								v42 = v35;
								if (*(char *)(v35 + 8) != 4) {
									// 0x82c54
									*(int32_t *)(v35 + 12) = 0;
									g37 = 2;
									*(int32_t *)(g35 + 16) = random(123);
									v42 = g35;
									// branch -> 0x82c6c
								}
								// 0x82c6c
								*(char *)(v42 + 8) = 4;
								g34 = g30;
								g24 = abs();
								g34 = g31;
								if (abs() > g24) {
									// 0x82c90
									g34 = g31;
									v36 = abs();
									// branch -> 0x82ca4
								} else {
									// 0x82c9c
									g34 = g30;
									v36 = abs();
									// branch -> 0x82ca4
								}
								// 0x82ca4
								v43 = (int32_t *)(g35 + 12);
								v44 = *v43;
								*v43 = v44 + 1;
								if (v44 >= 2 * v36) {
									// 0x82cbc
									g34 = g25;
									g37 = g29;
									int32_t v47 = function_8539c(); // 0x82cc4
									if (v47 != 0) {
										// 0x82cd0
										*(char *)(g35 + 8) = 1;
										// branch -> 0x82d34
										// 0x82d34
										if (*(char *)(g35 + 8) != 1) {
											// 0x82e60
											if (*(int32_t *)(g35 + 4) == 0) {
												// 0x82e6c
												g37 = 10;
												v24 = random(125);
												result = function_7c204(g25, v24 + 5);
												// branch -> 0x82e88
											} else {
												// 0x82e60
												result = v47;
												// branch -> 0x82e88
											}
											// 0x82e88
											return result;
										}
										// 0x82d40
										g34 = g31;
										if (abs() <= 2) {
											// 0x82d50
											g34 = g30;
											if (abs() < 3) {
												// 0x82d50
												v20 = g28;
												v11 = g35;
												// branch -> 0x82d78
												// 0x82d78
												v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
												v29 = -v20 % 32;
												v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
												if (g36 < (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
													v12 = v11;
													// 0x82d90
													v25 = *(int32_t *)(v12 + 36);
													if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) != 0) {
														// 0x82dac
														v26 = function_7c78c(g25, g26, g27);
														// branch -> 0x82e60
														// 0x82e60
														if (*(int32_t *)(g35 + 4) == 0) {
															// 0x82e6c
															g37 = 10;
															v24 = random(125);
															result = function_7c204(g25, v24 + 5);
															// branch -> 0x82e88
														} else {
															// 0x82e60
															result = v26;
															// branch -> 0x82e88
														}
														// 0x82e88
														return result;
													}
												}
												// 0x82dc0
												g34 = g31;
												if (abs() <= 1) {
													// 0x82dd0
													g34 = g30;
													if (abs() <= 1) {
														// 0x82de0
														v13 = g35;
														v21 = 1000 * (int32_t) * (char *)(v13 + 157);
														v8 = v21;
														if (g36 < v21 + 0x1770) {
															// 0x82df4
															*(int32_t *)(v13 + 72) = g29;
															v8 = function_7c64c(g25);
															// branch -> 0x82e60
														}
														// 0x82e60
														if (*(int32_t *)(g35 + 4) == 0) {
															// 0x82e6c
															g37 = 10;
															v24 = random(125);
															result = function_7c204(g25, v24 + 5);
															// branch -> 0x82e88
														} else {
															// 0x82e60
															result = v8;
															// branch -> 0x82e88
														}
														// 0x82e88
														return result;
													}
												}
												// 0x82e04
												g37 = 100;
												v23 = random(124);
												v8 = v23;
												v14 = g35;
												v22 = 1000 * (int32_t) * (char *)(v14 + 157);
												if (v23 < v22 + 0x1388) {
													// 0x82e54
													v8 = function_802c4(g25, g29);
													// branch -> 0x82e60
												} else {
													// 0x82e24
													v27 = *(int32_t *)(v14 + 116);
													if (v27 != 1) {
														// 0x82e30
														if ((v27 & -2) != 2) {
															// 0x82e60
															if (*(int32_t *)(g35 + 4) == 0) {
																// 0x82e6c
																g37 = 10;
																v24 = random(125);
																result = function_7c204(g25, v24 + 5);
																// branch -> 0x82e88
															} else {
																// 0x82e60
																result = v8;
																// branch -> 0x82e88
															}
															// 0x82e88
															return result;
														}
													}
													// 0x82e3c
													if (*(int32_t *)(v14 + 120) == 0) {
														// 0x82e48
														if (v23 < v22 + 0x1f40) {
															// 0x82e54
															v8 = function_802c4(g25, g29);
															// branch -> 0x82e60
														}
													}
												}
												// 0x82e60
												if (*(int32_t *)(g35 + 4) == 0) {
													// 0x82e6c
													g37 = 10;
													v24 = random(125);
													result = function_7c204(g25, v24 + 5);
													// branch -> 0x82e88
												} else {
													// 0x82e60
													result = v8;
													// branch -> 0x82e88
												}
												// 0x82e88
												return result;
											}
										}
										// 0x82d60
										v9 = g35;
										v17 = 500 * (int32_t) * (char *)(v9 + 157) + 1000;
										v18 = g28;
										v28 = -v18 % 32;
										v15 = (v18 & 32) != 0 ? 0 : 0xffffffff >> v18 % 32;
										v10 = g36;
										v12 = v9;
										if (v10 >= (((v17 >> (v28 ^ 31)) / 2 | v17 << v28) & v15)) {
											v20 = v18;
											v11 = v9;
											// 0x82d78
											v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
											v29 = -v20 % 32;
											v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
											if (v10 >= (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
												// 0x82dc0
												g34 = g31;
												if (abs() <= 1) {
													// 0x82dd0
													g34 = g30;
													if (abs() <= 1) {
														// 0x82de0
														v13 = g35;
														v21 = 1000 * (int32_t) * (char *)(v13 + 157);
														v8 = v21;
														if (g36 < v21 + 0x1770) {
															// 0x82df4
															*(int32_t *)(v13 + 72) = g29;
															v8 = function_7c64c(g25);
															// branch -> 0x82e60
														}
														// 0x82e60
														if (*(int32_t *)(g35 + 4) == 0) {
															// 0x82e6c
															g37 = 10;
															v24 = random(125);
															result = function_7c204(g25, v24 + 5);
															// branch -> 0x82e88
														} else {
															// 0x82e60
															result = v8;
															// branch -> 0x82e88
														}
														// 0x82e88
														return result;
													}
												}
												// 0x82e04
												g37 = 100;
												v23 = random(124);
												v8 = v23;
												v14 = g35;
												v22 = 1000 * (int32_t) * (char *)(v14 + 157);
												if (v23 < v22 + 0x1388) {
													// 0x82e54
													v8 = function_802c4(g25, g29);
													// branch -> 0x82e60
												} else {
													// 0x82e24
													v27 = *(int32_t *)(v14 + 116);
													if (v27 != 1) {
														// 0x82e30
														if ((v27 & -2) != 2) {
															// 0x82e60
															if (*(int32_t *)(g35 + 4) == 0) {
																// 0x82e6c
																g37 = 10;
																v24 = random(125);
																result = function_7c204(g25, v24 + 5);
																// branch -> 0x82e88
															} else {
																// 0x82e60
																result = v8;
																// branch -> 0x82e88
															}
															// 0x82e88
															return result;
														}
													}
													// 0x82e3c
													if (*(int32_t *)(v14 + 120) == 0) {
														// 0x82e48
														if (v23 < v22 + 0x1f40) {
															// 0x82e54
															v8 = function_802c4(g25, g29);
															// branch -> 0x82e60
														}
													}
												}
												// 0x82e60
												if (*(int32_t *)(g35 + 4) == 0) {
													// 0x82e6c
													g37 = 10;
													v24 = random(125);
													result = function_7c204(g25, v24 + 5);
													// branch -> 0x82e88
												} else {
													// 0x82e60
													result = v8;
													// branch -> 0x82e88
												}
												// 0x82e88
												return result;
											}
											v12 = v11;
										}
										// 0x82d90
										v25 = *(int32_t *)(v12 + 36);
										if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) != 0) {
											// 0x82dac
											v26 = function_7c78c(g25, g26, g27);
											// branch -> 0x82e60
											// 0x82e60
											if (*(int32_t *)(g35 + 4) == 0) {
												// 0x82e6c
												g37 = 10;
												v24 = random(125);
												result = function_7c204(g25, v24 + 5);
												// branch -> 0x82e88
											} else {
												// 0x82e60
												result = v26;
												// branch -> 0x82e88
											}
											// 0x82e88
											return result;
										}
										// 0x82dc0
										g34 = g31;
										if (abs() <= 1) {
											// 0x82dd0
											g34 = g30;
											if (abs() <= 1) {
												// 0x82de0
												v13 = g35;
												v21 = 1000 * (int32_t) * (char *)(v13 + 157);
												v8 = v21;
												if (g36 < v21 + 0x1770) {
													// 0x82df4
													*(int32_t *)(v13 + 72) = g29;
													v8 = function_7c64c(g25);
													// branch -> 0x82e60
												}
												// 0x82e60
												if (*(int32_t *)(g35 + 4) == 0) {
													// 0x82e6c
													g37 = 10;
													v24 = random(125);
													result = function_7c204(g25, v24 + 5);
													// branch -> 0x82e88
												} else {
													// 0x82e60
													result = v8;
													// branch -> 0x82e88
												}
												// 0x82e88
												return result;
											}
										}
										// 0x82e04
										g37 = 100;
										v23 = random(124);
										v8 = v23;
										v14 = g35;
										v22 = 1000 * (int32_t) * (char *)(v14 + 157);
										if (v23 < v22 + 0x1388) {
											// 0x82e54
											v8 = function_802c4(g25, g29);
											// branch -> 0x82e60
										} else {
											// 0x82e24
											v27 = *(int32_t *)(v14 + 116);
											if (v27 != 1) {
												// 0x82e30
												if ((v27 & -2) != 2) {
													// 0x82e60
													if (*(int32_t *)(g35 + 4) == 0) {
														// 0x82e6c
														g37 = 10;
														v24 = random(125);
														result = function_7c204(g25, v24 + 5);
														// branch -> 0x82e88
													} else {
														// 0x82e60
														result = v8;
														// branch -> 0x82e88
													}
													// 0x82e88
													return result;
												}
											}
											// 0x82e3c
											if (*(int32_t *)(v14 + 120) == 0) {
												// 0x82e48
												if (v23 < v22 + 0x1f40) {
													// 0x82e54
													v8 = function_802c4(g25, g29);
													// branch -> 0x82e60
												}
											}
										}
										// 0x82e60
										if (*(int32_t *)(g35 + 4) == 0) {
											// 0x82e6c
											g37 = 10;
											v24 = random(125);
											result = function_7c204(g25, v24 + 5);
											// branch -> 0x82e88
										} else {
											// 0x82e60
											result = v8;
											// branch -> 0x82e88
										}
										// 0x82e88
										return result;
									}
								}
								// 0x82cdc
								v37 = g35;
								v40 = 500 * (int32_t) * (char *)(v37 + 157) + 500;
								v41 = g28;
								v46 = -v41 % 32;
								v39 = (v41 & 32) != 0 ? 0 : 0xffffffff >> v41 % 32;
								v38 = v37;
								if (g36 < (((v40 >> (v46 ^ 31)) / 2 | v40 << v46) & v39)) {
									// 0x82cf4
									v45 = *(int32_t *)(v37 + 36);
									if (function_85a14(*(int32_t *)(v37 + 32), v45, g33, g32) == 0) {
										// 0x82cf4
										v38 = g35;
										// branch -> 0x82d24
										// 0x82d24
										function_80718(g25, g29, (int32_t *)(v38 + 16));
										// branch -> 0x82d34
									} else {
										// 0x82d10
										function_7c78c(g25, g26, g27);
										// branch -> 0x82d34
									}
									// 0x82d34
									if (*(char *)(g35 + 8) == 1) {
										// 0x82d40
										g34 = g31;
										if (abs() <= 2) {
											// 0x82d50
											g34 = g30;
											if (abs() < 3) {
												// 0x82d50
												v20 = g28;
												v11 = g35;
												// branch -> 0x82d78
												// 0x82d78
												v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
												v29 = -v20 % 32;
												v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
												if (g36 < (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
													v12 = v11;
													// 0x82d90
													v25 = *(int32_t *)(v12 + 36);
													if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) != 0) {
														// 0x82dac
														v26 = function_7c78c(g25, g26, g27);
														// branch -> 0x82e60
														// 0x82e60
														if (*(int32_t *)(g35 + 4) == 0) {
															// 0x82e6c
															g37 = 10;
															v24 = random(125);
															result = function_7c204(g25, v24 + 5);
															// branch -> 0x82e88
														} else {
															// 0x82e60
															result = v26;
															// branch -> 0x82e88
														}
														// 0x82e88
														return result;
													}
												}
												// 0x82dc0
												g34 = g31;
												if (abs() <= 1) {
													// 0x82dd0
													g34 = g30;
													if (abs() <= 1) {
														// 0x82de0
														v13 = g35;
														if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
															// 0x82df4
															*(int32_t *)(v13 + 72) = g29;
															function_7c64c(g25);
															// branch -> 0x82e60
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x82e04
												g37 = 100;
												v23 = random(124);
												v14 = g35;
												v22 = 1000 * (int32_t) * (char *)(v14 + 157);
												if (v23 < v22 + 0x1388) {
													// 0x82e54
													function_802c4(g25, g29);
													// branch -> 0x82e60
												} else {
													// 0x82e24
													v27 = *(int32_t *)(v14 + 116);
													if (v27 != 1) {
														// 0x82e30
														if ((v27 & -2) != 2) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x82e3c
													if (*(int32_t *)(v14 + 120) == 0) {
														// 0x82e48
														if (v23 < v22 + 0x1f40) {
															// 0x82e54
															function_802c4(g25, g29);
															// branch -> 0x82e60
														}
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x82d60
										v9 = g35;
										v17 = 500 * (int32_t) * (char *)(v9 + 157) + 1000;
										v18 = g28;
										v28 = -v18 % 32;
										v15 = (v18 & 32) != 0 ? 0 : 0xffffffff >> v18 % 32;
										v10 = g36;
										v12 = v9;
										if (v10 >= (((v17 >> (v28 ^ 31)) / 2 | v17 << v28) & v15)) {
											v20 = v18;
											v11 = v9;
											// 0x82d78
											v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
											v29 = -v20 % 32;
											v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
											if (v10 >= (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
												// 0x82dc0
												g34 = g31;
												if (abs() <= 1) {
													// 0x82dd0
													g34 = g30;
													if (abs() <= 1) {
														// 0x82de0
														v13 = g35;
														if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
															// 0x82df4
															*(int32_t *)(v13 + 72) = g29;
															function_7c64c(g25);
															// branch -> 0x82e60
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x82e04
												g37 = 100;
												v23 = random(124);
												v14 = g35;
												v22 = 1000 * (int32_t) * (char *)(v14 + 157);
												if (v23 < v22 + 0x1388) {
													// 0x82e54
													function_802c4(g25, g29);
													// branch -> 0x82e60
												} else {
													// 0x82e24
													v27 = *(int32_t *)(v14 + 116);
													if (v27 != 1) {
														// 0x82e30
														if ((v27 & -2) != 2) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x82e3c
													if (*(int32_t *)(v14 + 120) == 0) {
														// 0x82e48
														if (v23 < v22 + 0x1f40) {
															// 0x82e54
															function_802c4(g25, g29);
															// branch -> 0x82e60
														}
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												v12 = v11;
											}
										}
										// 0x82d90
										v25 = *(int32_t *)(v12 + 36);
										if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) == 0) {
											// 0x82dc0
											g34 = g31;
											if (abs() <= 1) {
												// 0x82dd0
												g34 = g30;
												if (abs() <= 1) {
													// 0x82de0
													v13 = g35;
													if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
														// 0x82df4
														*(int32_t *)(v13 + 72) = g29;
														function_7c64c(g25);
														// branch -> 0x82e60
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x82e04
											g37 = 100;
											v23 = random(124);
											v14 = g35;
											v22 = 1000 * (int32_t) * (char *)(v14 + 157);
											if (v23 < v22 + 0x1388) {
												// 0x82e54
												function_802c4(g25, g29);
												// branch -> 0x82e60
											} else {
												// 0x82e24
												v27 = *(int32_t *)(v14 + 116);
												if (v27 != 1) {
													// 0x82e30
													if ((v27 & -2) != 2) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x82e3c
												if (*(int32_t *)(v14 + 120) == 0) {
													// 0x82e48
													if (v23 < v22 + 0x1f40) {
														// 0x82e54
														function_802c4(g25, g29);
														// branch -> 0x82e60
													}
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x82dac
											function_7c78c(g25, g26, g27);
											// branch -> 0x82e60
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x82d24
								function_80718(g25, g29, (int32_t *)(v38 + 16));
								// branch -> 0x82d34
							}
						} else {
							// 0x82c20
							g34 = g30;
							if (abs() >= 3) {
								// 0x82c30
								g37 = 4 << g28 % 64;
								if (random(122) == 0) {
									// 0x82c30
									v35 = g35;
									// branch -> 0x82c48
									// 0x82c48
									v42 = v35;
									if (*(char *)(v35 + 8) != 4) {
										// 0x82c54
										*(int32_t *)(v35 + 12) = 0;
										g37 = 2;
										*(int32_t *)(g35 + 16) = random(123);
										v42 = g35;
										// branch -> 0x82c6c
									}
									// 0x82c6c
									*(char *)(v42 + 8) = 4;
									g34 = g30;
									g24 = abs();
									g34 = g31;
									if (abs() > g24) {
										// 0x82c90
										g34 = g31;
										v36 = abs();
										// branch -> 0x82ca4
									} else {
										// 0x82c9c
										g34 = g30;
										v36 = abs();
										// branch -> 0x82ca4
									}
									// 0x82ca4
									v43 = (int32_t *)(g35 + 12);
									v44 = *v43;
									*v43 = v44 + 1;
									if (v44 >= 2 * v36) {
										// 0x82cbc
										g34 = g25;
										g37 = g29;
										if (function_8539c() != 0) {
											// 0x82cd0
											*(char *)(g35 + 8) = 1;
											// branch -> 0x82d34
											// 0x82d34
											if (*(char *)(g35 + 8) == 1) {
												// 0x82d40
												g34 = g31;
												if (abs() <= 2) {
													// 0x82d50
													g34 = g30;
													if (abs() < 3) {
														// 0x82d50
														v20 = g28;
														v11 = g35;
														// branch -> 0x82d78
														// 0x82d78
														v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
														v29 = -v20 % 32;
														v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
														if (g36 < (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
															v12 = v11;
															// 0x82d90
															v25 = *(int32_t *)(v12 + 36);
															if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) != 0) {
																// 0x82dac
																function_7c78c(g25, g26, g27);
																// branch -> 0x82e60
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
														// 0x82dc0
														g34 = g31;
														if (abs() <= 1) {
															// 0x82dd0
															g34 = g30;
															if (abs() <= 1) {
																// 0x82de0
																v13 = g35;
																if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
																	// 0x82df4
																	*(int32_t *)(v13 + 72) = g29;
																	function_7c64c(g25);
																	// branch -> 0x82e60
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
														// 0x82e04
														g37 = 100;
														v23 = random(124);
														v14 = g35;
														v22 = 1000 * (int32_t) * (char *)(v14 + 157);
														if (v23 < v22 + 0x1388) {
															// 0x82e54
															function_802c4(g25, g29);
															// branch -> 0x82e60
														} else {
															// 0x82e24
															v27 = *(int32_t *)(v14 + 116);
															if (v27 != 1) {
																// 0x82e30
																if ((v27 & -2) != 2) {
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
															// 0x82e3c
															if (*(int32_t *)(v14 + 120) == 0) {
																// 0x82e48
																if (v23 < v22 + 0x1f40) {
																	// 0x82e54
																	function_802c4(g25, g29);
																	// branch -> 0x82e60
																}
															}
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x82d60
												v9 = g35;
												v17 = 500 * (int32_t) * (char *)(v9 + 157) + 1000;
												v18 = g28;
												v28 = -v18 % 32;
												v15 = (v18 & 32) != 0 ? 0 : 0xffffffff >> v18 % 32;
												v10 = g36;
												v12 = v9;
												if (v10 >= (((v17 >> (v28 ^ 31)) / 2 | v17 << v28) & v15)) {
													v20 = v18;
													v11 = v9;
													// 0x82d78
													v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
													v29 = -v20 % 32;
													v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
													if (v10 >= (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
														// 0x82dc0
														g34 = g31;
														if (abs() <= 1) {
															// 0x82dd0
															g34 = g30;
															if (abs() <= 1) {
																// 0x82de0
																v13 = g35;
																if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
																	// 0x82df4
																	*(int32_t *)(v13 + 72) = g29;
																	function_7c64c(g25);
																	// branch -> 0x82e60
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
														// 0x82e04
														g37 = 100;
														v23 = random(124);
														v14 = g35;
														v22 = 1000 * (int32_t) * (char *)(v14 + 157);
														if (v23 < v22 + 0x1388) {
															// 0x82e54
															function_802c4(g25, g29);
															// branch -> 0x82e60
														} else {
															// 0x82e24
															v27 = *(int32_t *)(v14 + 116);
															if (v27 != 1) {
																// 0x82e30
																if ((v27 & -2) != 2) {
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
															// 0x82e3c
															if (*(int32_t *)(v14 + 120) == 0) {
																// 0x82e48
																if (v23 < v22 + 0x1f40) {
																	// 0x82e54
																	function_802c4(g25, g29);
																	// branch -> 0x82e60
																}
															}
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														v12 = v11;
													}
												}
												// 0x82d90
												v25 = *(int32_t *)(v12 + 36);
												if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) == 0) {
													// 0x82dc0
													g34 = g31;
													if (abs() <= 1) {
														// 0x82dd0
														g34 = g30;
														if (abs() <= 1) {
															// 0x82de0
															v13 = g35;
															if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
																// 0x82df4
																*(int32_t *)(v13 + 72) = g29;
																function_7c64c(g25);
																// branch -> 0x82e60
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x82e04
													g37 = 100;
													v23 = random(124);
													v14 = g35;
													v22 = 1000 * (int32_t) * (char *)(v14 + 157);
													if (v23 < v22 + 0x1388) {
														// 0x82e54
														function_802c4(g25, g29);
														// branch -> 0x82e60
													} else {
														// 0x82e24
														v27 = *(int32_t *)(v14 + 116);
														if (v27 != 1) {
															// 0x82e30
															if ((v27 & -2) != 2) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
														// 0x82e3c
														if (*(int32_t *)(v14 + 120) == 0) {
															// 0x82e48
															if (v23 < v22 + 0x1f40) {
																// 0x82e54
																function_802c4(g25, g29);
																// branch -> 0x82e60
															}
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x82dac
													function_7c78c(g25, g26, g27);
													// branch -> 0x82e60
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x82cdc
									v37 = g35;
									v40 = 500 * (int32_t) * (char *)(v37 + 157) + 500;
									v41 = g28;
									v46 = -v41 % 32;
									v39 = (v41 & 32) != 0 ? 0 : 0xffffffff >> v41 % 32;
									v38 = v37;
									if (g36 < (((v40 >> (v46 ^ 31)) / 2 | v40 << v46) & v39)) {
										// 0x82cf4
										v45 = *(int32_t *)(v37 + 36);
										if (function_85a14(*(int32_t *)(v37 + 32), v45, g33, g32) == 0) {
											// 0x82cf4
											v38 = g35;
											// branch -> 0x82d24
											// 0x82d24
											function_80718(g25, g29, (int32_t *)(v38 + 16));
											// branch -> 0x82d34
										} else {
											// 0x82d10
											function_7c78c(g25, g26, g27);
											// branch -> 0x82d34
										}
										// 0x82d34
										if (*(char *)(g35 + 8) == 1) {
											// 0x82d40
											g34 = g31;
											if (abs() <= 2) {
												// 0x82d50
												g34 = g30;
												if (abs() < 3) {
													// 0x82d50
													v20 = g28;
													v11 = g35;
													// branch -> 0x82d78
													// 0x82d78
													v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
													v29 = -v20 % 32;
													v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
													if (g36 < (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
														v12 = v11;
														// 0x82d90
														v25 = *(int32_t *)(v12 + 36);
														if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) != 0) {
															// 0x82dac
															function_7c78c(g25, g26, g27);
															// branch -> 0x82e60
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x82dc0
													g34 = g31;
													if (abs() <= 1) {
														// 0x82dd0
														g34 = g30;
														if (abs() <= 1) {
															// 0x82de0
															v13 = g35;
															if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
																// 0x82df4
																*(int32_t *)(v13 + 72) = g29;
																function_7c64c(g25);
																// branch -> 0x82e60
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x82e04
													g37 = 100;
													v23 = random(124);
													v14 = g35;
													v22 = 1000 * (int32_t) * (char *)(v14 + 157);
													if (v23 < v22 + 0x1388) {
														// 0x82e54
														function_802c4(g25, g29);
														// branch -> 0x82e60
													} else {
														// 0x82e24
														v27 = *(int32_t *)(v14 + 116);
														if (v27 != 1) {
															// 0x82e30
															if ((v27 & -2) != 2) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
														// 0x82e3c
														if (*(int32_t *)(v14 + 120) == 0) {
															// 0x82e48
															if (v23 < v22 + 0x1f40) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x82d60
											v9 = g35;
											v17 = 500 * (int32_t) * (char *)(v9 + 157) + 1000;
											v18 = g28;
											v28 = -v18 % 32;
											v15 = (v18 & 32) != 0 ? 0 : 0xffffffff >> v18 % 32;
											v10 = g36;
											v12 = v9;
											if (v10 >= (((v17 >> (v28 ^ 31)) / 2 | v17 << v28) & v15)) {
												v20 = v18;
												v11 = v9;
												// 0x82d78
												v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
												v29 = -v20 % 32;
												v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
												if (v10 >= (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
													// 0x82dc0
													g34 = g31;
													if (abs() <= 1) {
														// 0x82dd0
														g34 = g30;
														if (abs() <= 1) {
															// 0x82de0
															v13 = g35;
															if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
																// 0x82df4
																*(int32_t *)(v13 + 72) = g29;
																function_7c64c(g25);
																// branch -> 0x82e60
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x82e04
													g37 = 100;
													v23 = random(124);
													v14 = g35;
													v22 = 1000 * (int32_t) * (char *)(v14 + 157);
													if (v23 < v22 + 0x1388) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x82e24
														v27 = *(int32_t *)(v14 + 116);
														if (v27 != 1) {
															// 0x82e30
															if ((v27 & -2) != 2) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
														// 0x82e3c
														if (*(int32_t *)(v14 + 120) == 0) {
															// 0x82e48
															if (v23 < v22 + 0x1f40) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													v12 = v11;
												}
											}
											// 0x82d90
											v25 = *(int32_t *)(v12 + 36);
											if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) == 0) {
												// 0x82dc0
												g34 = g31;
												if (abs() <= 1) {
													// 0x82dd0
													g34 = g30;
													if (abs() <= 1) {
														// 0x82de0
														v13 = g35;
														if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
															// 0x82df4
															*(int32_t *)(v13 + 72) = g29;
															function_7c64c(g25);
															// branch -> 0x82e60
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x82e04
												g37 = 100;
												v23 = random(124);
												v14 = g35;
												v22 = 1000 * (int32_t) * (char *)(v14 + 157);
												if (v23 < v22 + 0x1388) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x82e24
													v27 = *(int32_t *)(v14 + 116);
													if (v27 != 1) {
														// 0x82e30
														if ((v27 & -2) != 2) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x82e3c
													if (*(int32_t *)(v14 + 120) == 0) {
														// 0x82e48
														if (v23 < v22 + 0x1f40) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x82dac
												function_7c78c(g25, g26, g27);
												// branch -> 0x82e60
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// 0x82d24
									function_80718(g25, g29, (int32_t *)(v38 + 16));
									// branch -> 0x82d34
								}
							}
						}
						// 0x82d34
						if (*(char *)(g35 + 8) == 1) {
							// 0x82d40
							g34 = g31;
							if (abs() <= 2) {
								// 0x82d50
								g34 = g30;
								if (abs() < 3) {
									// 0x82d50
									v20 = g28;
									v11 = g35;
									// branch -> 0x82d78
									// 0x82d78
									v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
									v29 = -v20 % 32;
									v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
									if (g36 < (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
										v12 = v11;
										// 0x82d90
										v25 = *(int32_t *)(v12 + 36);
										if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) != 0) {
											// 0x82dac
											function_7c78c(g25, g26, g27);
											// branch -> 0x82e60
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x82dc0
									g34 = g31;
									if (abs() <= 1) {
										// 0x82dd0
										g34 = g30;
										if (abs() <= 1) {
											// 0x82de0
											v13 = g35;
											if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
												// 0x82df4
												*(int32_t *)(v13 + 72) = g29;
												function_7c64c(g25);
												// branch -> 0x82e60
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x82e04
									g37 = 100;
									v23 = random(124);
									v14 = g35;
									v22 = 1000 * (int32_t) * (char *)(v14 + 157);
									if (v23 < v22 + 0x1388) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x82e24
										v27 = *(int32_t *)(v14 + 116);
										if (v27 != 1) {
											// 0x82e30
											if ((v27 & -2) != 2) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x82e3c
										if (*(int32_t *)(v14 + 120) == 0) {
											// 0x82e48
											if (v23 < v22 + 0x1f40) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x82d60
							v9 = g35;
							v17 = 500 * (int32_t) * (char *)(v9 + 157) + 1000;
							v18 = g28;
							v28 = -v18 % 32;
							v15 = (v18 & 32) != 0 ? 0 : 0xffffffff >> v18 % 32;
							v10 = g36;
							v12 = v9;
							if (v10 >= (((v17 >> (v28 ^ 31)) / 2 | v17 << v28) & v15)) {
								v20 = v18;
								v11 = v9;
								// 0x82d78
								v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
								v29 = -v20 % 32;
								v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
								if (v10 >= (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
									// 0x82dc0
									g34 = g31;
									if (abs() <= 1) {
										// 0x82dd0
										g34 = g30;
										if (abs() <= 1) {
											// 0x82de0
											v13 = g35;
											if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
												// 0x82df4
												*(int32_t *)(v13 + 72) = g29;
												function_7c64c(g25);
												// branch -> 0x82e60
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x82e04
									g37 = 100;
									v23 = random(124);
									v14 = g35;
									v22 = 1000 * (int32_t) * (char *)(v14 + 157);
									if (v23 < v22 + 0x1388) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x82e24
										v27 = *(int32_t *)(v14 + 116);
										if (v27 != 1) {
											// 0x82e30
											if ((v27 & -2) != 2) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x82e3c
										if (*(int32_t *)(v14 + 120) == 0) {
											// 0x82e48
											if (v23 < v22 + 0x1f40) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									v12 = v11;
								}
							}
							// 0x82d90
							v25 = *(int32_t *)(v12 + 36);
							if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) == 0) {
								// 0x82dc0
								g34 = g31;
								if (abs() <= 1) {
									// 0x82dd0
									g34 = g30;
									if (abs() <= 1) {
										// 0x82de0
										v13 = g35;
										if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
											// 0x82df4
											*(int32_t *)(v13 + 72) = g29;
											function_7c64c(g25);
											// branch -> 0x82e60
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x82e04
								g37 = 100;
								v23 = random(124);
								v14 = g35;
								v22 = 1000 * (int32_t) * (char *)(v14 + 157);
								if (v23 < v22 + 0x1388) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x82e24
									v27 = *(int32_t *)(v14 + 116);
									if (v27 != 1) {
										// 0x82e30
										if ((v27 & -2) != 2) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x82e3c
									if (*(int32_t *)(v14 + 120) == 0) {
										// 0x82e48
										if (v23 < v22 + 0x1f40) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								// 0x82dac
								function_7c78c(g25, g26, g27);
								// branch -> 0x82e60
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x82c48
					v42 = v35;
					if (*(char *)(v35 + 8) != 4) {
						// 0x82c54
						*(int32_t *)(v35 + 12) = 0;
						g37 = 2;
						*(int32_t *)(g35 + 16) = random(123);
						v42 = g35;
						// branch -> 0x82c6c
					}
					// 0x82c6c
					*(char *)(v42 + 8) = 4;
					g34 = g30;
					g24 = abs();
					g34 = g31;
					if (abs() > g24) {
						// 0x82c90
						g34 = g31;
						v36 = abs();
						// branch -> 0x82ca4
					} else {
						// 0x82c9c
						g34 = g30;
						v36 = abs();
						// branch -> 0x82ca4
					}
					// 0x82ca4
					v43 = (int32_t *)(g35 + 12);
					v44 = *v43;
					*v43 = v44 + 1;
					if (v44 >= 2 * v36) {
						// 0x82cbc
						g34 = g25;
						g37 = g29;
						if (function_8539c() != 0) {
							// 0x82cd0
							*(char *)(g35 + 8) = 1;
							// branch -> 0x82d34
							// 0x82d34
							if (*(char *)(g35 + 8) == 1) {
								// 0x82d40
								g34 = g31;
								if (abs() <= 2) {
									// 0x82d50
									g34 = g30;
									if (abs() < 3) {
										// 0x82d50
										v20 = g28;
										v11 = g35;
										// branch -> 0x82d78
										// 0x82d78
										v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
										v29 = -v20 % 32;
										v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
										if (g36 < (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
											v12 = v11;
											// 0x82d90
											v25 = *(int32_t *)(v12 + 36);
											if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) != 0) {
												// 0x82dac
												function_7c78c(g25, g26, g27);
												// branch -> 0x82e60
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x82dc0
										g34 = g31;
										if (abs() <= 1) {
											// 0x82dd0
											g34 = g30;
											if (abs() <= 1) {
												// 0x82de0
												v13 = g35;
												if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
													// 0x82df4
													*(int32_t *)(v13 + 72) = g29;
													function_7c64c(g25);
													// branch -> 0x82e60
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x82e04
										g37 = 100;
										v23 = random(124);
										v14 = g35;
										v22 = 1000 * (int32_t) * (char *)(v14 + 157);
										if (v23 < v22 + 0x1388) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x82e24
											v27 = *(int32_t *)(v14 + 116);
											if (v27 != 1) {
												// 0x82e30
												if ((v27 & -2) != 2) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x82e3c
											if (*(int32_t *)(v14 + 120) == 0) {
												// 0x82e48
												if (v23 < v22 + 0x1f40) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x82d60
								v9 = g35;
								v17 = 500 * (int32_t) * (char *)(v9 + 157) + 1000;
								v18 = g28;
								v28 = -v18 % 32;
								v15 = (v18 & 32) != 0 ? 0 : 0xffffffff >> v18 % 32;
								v10 = g36;
								v12 = v9;
								if (v10 >= (((v17 >> (v28 ^ 31)) / 2 | v17 << v28) & v15)) {
									v20 = v18;
									v11 = v9;
									// 0x82d78
									v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
									v29 = -v20 % 32;
									v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
									if (v10 >= (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
										// 0x82dc0
										g34 = g31;
										if (abs() <= 1) {
											// 0x82dd0
											g34 = g30;
											if (abs() <= 1) {
												// 0x82de0
												v13 = g35;
												if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
													// 0x82df4
													*(int32_t *)(v13 + 72) = g29;
													function_7c64c(g25);
													// branch -> 0x82e60
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x82e04
										g37 = 100;
										v23 = random(124);
										v14 = g35;
										v22 = 1000 * (int32_t) * (char *)(v14 + 157);
										if (v23 < v22 + 0x1388) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x82e24
											v27 = *(int32_t *)(v14 + 116);
											if (v27 != 1) {
												// 0x82e30
												if ((v27 & -2) != 2) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x82e3c
											if (*(int32_t *)(v14 + 120) == 0) {
												// 0x82e48
												if (v23 < v22 + 0x1f40) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v12 = v11;
									}
								}
								// 0x82d90
								v25 = *(int32_t *)(v12 + 36);
								if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) == 0) {
									// 0x82dc0
									g34 = g31;
									if (abs() <= 1) {
										// 0x82dd0
										g34 = g30;
										if (abs() <= 1) {
											// 0x82de0
											v13 = g35;
											if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
												// 0x82df4
												*(int32_t *)(v13 + 72) = g29;
												function_7c64c(g25);
												// branch -> 0x82e60
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x82e04
									g37 = 100;
									v23 = random(124);
									v14 = g35;
									v22 = 1000 * (int32_t) * (char *)(v14 + 157);
									if (v23 < v22 + 0x1388) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x82e24
										v27 = *(int32_t *)(v14 + 116);
										if (v27 != 1) {
											// 0x82e30
											if ((v27 & -2) != 2) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x82e3c
										if (*(int32_t *)(v14 + 120) == 0) {
											// 0x82e48
											if (v23 < v22 + 0x1f40) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x82dac
									function_7c78c(g25, g26, g27);
									// branch -> 0x82e60
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x82cdc
					v37 = g35;
					v40 = 500 * (int32_t) * (char *)(v37 + 157) + 500;
					v41 = g28;
					v46 = -v41 % 32;
					v39 = (v41 & 32) != 0 ? 0 : 0xffffffff >> v41 % 32;
					v38 = v37;
					if (g36 < (((v40 >> (v46 ^ 31)) / 2 | v40 << v46) & v39)) {
						// 0x82cf4
						v45 = *(int32_t *)(v37 + 36);
						if (function_85a14(*(int32_t *)(v37 + 32), v45, g33, g32) == 0) {
							// 0x82cf4
							v38 = g35;
							// branch -> 0x82d24
							// 0x82d24
							function_80718(g25, g29, (int32_t *)(v38 + 16));
							// branch -> 0x82d34
						} else {
							// 0x82d10
							function_7c78c(g25, g26, g27);
							// branch -> 0x82d34
						}
						// 0x82d34
						if (*(char *)(g35 + 8) == 1) {
							// 0x82d40
							g34 = g31;
							if (abs() <= 2) {
								// 0x82d50
								g34 = g30;
								if (abs() < 3) {
									// 0x82d50
									v20 = g28;
									v11 = g35;
									// branch -> 0x82d78
									// 0x82d78
									v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
									v29 = -v20 % 32;
									v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
									if (g36 < (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
										v12 = v11;
										// 0x82d90
										v25 = *(int32_t *)(v12 + 36);
										if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) != 0) {
											// 0x82dac
											function_7c78c(g25, g26, g27);
											// branch -> 0x82e60
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x82dc0
									g34 = g31;
									if (abs() <= 1) {
										// 0x82dd0
										g34 = g30;
										if (abs() <= 1) {
											// 0x82de0
											v13 = g35;
											if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
												// 0x82df4
												*(int32_t *)(v13 + 72) = g29;
												function_7c64c(g25);
												// branch -> 0x82e60
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x82e04
									g37 = 100;
									v23 = random(124);
									v14 = g35;
									v22 = 1000 * (int32_t) * (char *)(v14 + 157);
									if (v23 < v22 + 0x1388) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x82e24
										v27 = *(int32_t *)(v14 + 116);
										if (v27 != 1) {
											// 0x82e30
											if ((v27 & -2) != 2) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x82e3c
										if (*(int32_t *)(v14 + 120) == 0) {
											// 0x82e48
											if (v23 < v22 + 0x1f40) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x82d60
							v9 = g35;
							v17 = 500 * (int32_t) * (char *)(v9 + 157) + 1000;
							v18 = g28;
							v28 = -v18 % 32;
							v15 = (v18 & 32) != 0 ? 0 : 0xffffffff >> v18 % 32;
							v10 = g36;
							v12 = v9;
							if (v10 >= (((v17 >> (v28 ^ 31)) / 2 | v17 << v28) & v15)) {
								v20 = v18;
								v11 = v9;
								// 0x82d78
								v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
								v29 = -v20 % 32;
								v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
								if (v10 >= (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
									// 0x82dc0
									g34 = g31;
									if (abs() <= 1) {
										// 0x82dd0
										g34 = g30;
										if (abs() <= 1) {
											// 0x82de0
											v13 = g35;
											if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
												// 0x82df4
												*(int32_t *)(v13 + 72) = g29;
												function_7c64c(g25);
												// branch -> 0x82e60
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x82e04
									g37 = 100;
									v23 = random(124);
									v14 = g35;
									v22 = 1000 * (int32_t) * (char *)(v14 + 157);
									if (v23 < v22 + 0x1388) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x82e24
										v27 = *(int32_t *)(v14 + 116);
										if (v27 != 1) {
											// 0x82e30
											if ((v27 & -2) != 2) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x82e3c
										if (*(int32_t *)(v14 + 120) == 0) {
											// 0x82e48
											if (v23 < v22 + 0x1f40) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									v12 = v11;
								}
							}
							// 0x82d90
							v25 = *(int32_t *)(v12 + 36);
							if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) == 0) {
								// 0x82dc0
								g34 = g31;
								if (abs() <= 1) {
									// 0x82dd0
									g34 = g30;
									if (abs() <= 1) {
										// 0x82de0
										v13 = g35;
										if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
											// 0x82df4
											*(int32_t *)(v13 + 72) = g29;
											function_7c64c(g25);
											// branch -> 0x82e60
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x82e04
								g37 = 100;
								v23 = random(124);
								v14 = g35;
								v22 = 1000 * (int32_t) * (char *)(v14 + 157);
								if (v23 < v22 + 0x1388) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x82e24
									v27 = *(int32_t *)(v14 + 116);
									if (v27 != 1) {
										// 0x82e30
										if ((v27 & -2) != 2) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x82e3c
									if (*(int32_t *)(v14 + 120) == 0) {
										// 0x82e48
										if (v23 < v22 + 0x1f40) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								// 0x82dac
								function_7c78c(g25, g26, g27);
								// branch -> 0x82e60
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x82d24
					function_80718(g25, g29, (int32_t *)(v38 + 16));
					// branch -> 0x82d34
					// 0x82d34
					if (*(char *)(g35 + 8) == 1) {
						// 0x82d40
						g34 = g31;
						if (abs() <= 2) {
							// 0x82d50
							g34 = g30;
							if (abs() < 3) {
								// 0x82d50
								v20 = g28;
								v11 = g35;
								// branch -> 0x82d78
								// 0x82d78
								v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
								v29 = -v20 % 32;
								v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
								if (g36 < (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
									v12 = v11;
									// 0x82d90
									v25 = *(int32_t *)(v12 + 36);
									if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) != 0) {
										// 0x82dac
										function_7c78c(g25, g26, g27);
										// branch -> 0x82e60
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x82dc0
								g34 = g31;
								if (abs() <= 1) {
									// 0x82dd0
									g34 = g30;
									if (abs() <= 1) {
										// 0x82de0
										v13 = g35;
										if (g36 < 1000 * (int32_t) * (char *)(v13 + 157) + 0x1770) {
											// 0x82df4
											*(int32_t *)(v13 + 72) = g29;
											function_7c64c(g25);
											// branch -> 0x82e60
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x82e04
								g37 = 100;
								v23 = random(124);
								v14 = g35;
								v22 = 1000 * (int32_t) * (char *)(v14 + 157);
								if (v23 < v22 + 0x1388) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x82e24
									v27 = *(int32_t *)(v14 + 116);
									if (v27 != 1) {
										// 0x82e30
										if ((v27 & -2) != 2) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x82e3c
									if (*(int32_t *)(v14 + 120) == 0) {
										// 0x82e48
										if (v23 < v22 + 0x1f40) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x82d60
						v9 = g35;
						v17 = 500 * (int32_t) * (char *)(v9 + 157) + 1000;
						v18 = g28;
						v28 = -v18 % 32;
						v15 = (v18 & 32) != 0 ? 0 : 0xffffffff >> v18 % 32;
						v10 = g36;
						v12 = v9;
						if (v10 >= (((v17 >> (v28 ^ 31)) / 2 | v17 << v28) & v15)) {
							v20 = v18;
							v11 = v9;
							// 0x82d78
							v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
							v29 = -v20 % 32;
							v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
							if (v10 >= (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								v12 = v11;
							}
						}
						// 0x82d90
						v25 = *(int32_t *)(v12 + 36);
						if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) == 0) {
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x82dac
							function_7c78c(g25, g26, g27);
							// branch -> 0x82e60
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x82bf8
			*(char *)(v31 + 8) = 1;
			// branch -> 0x82d34
			// 0x82d34
			if (*(char *)(g35 + 8) == 1) {
				// 0x82d40
				g34 = g31;
				if (abs() <= 2) {
					// 0x82d50
					g34 = g30;
					if (abs() < 3) {
						// 0x82d50
						v20 = g28;
						v11 = g35;
						// branch -> 0x82d78
						// 0x82d78
						v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
						v29 = -v20 % 32;
						v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
						if (g36 < (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
							v12 = v11;
							// 0x82d90
							v25 = *(int32_t *)(v12 + 36);
							if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) != 0) {
								// 0x82dac
								function_7c78c(g25, g26, g27);
								// branch -> 0x82e60
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0x82d60
				v9 = g35;
				v17 = 500 * (int32_t) * (char *)(v9 + 157) + 1000;
				v18 = g28;
				v28 = -v18 % 32;
				v15 = (v18 & 32) != 0 ? 0 : 0xffffffff >> v18 % 32;
				v10 = g36;
				v12 = v9;
				if (v10 >= (((v17 >> (v28 ^ 31)) / 2 | v17 << v28) & v15)) {
					v20 = v18;
					v11 = v9;
					// 0x82d78
					v19 = 500 * (int32_t) * (char *)(v11 + 157) + 500;
					v29 = -v20 % 32;
					v16 = (v20 & 32) != 0 ? 0 : 0xffffffff >> v20 % 32;
					if (v10 >= (((v19 >> (v29 ^ 31)) / 2 | v19 << v29) & v16)) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						v12 = v11;
					}
				}
				// 0x82d90
				v25 = *(int32_t *)(v12 + 36);
				if (function_85a14(*(int32_t *)(v12 + 32), v25, g33, g32) == 0) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					// 0x82dac
					function_7c78c(g25, g26, g27);
					// branch -> 0x82e60
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x82e9c - 0x82ecc
int32_t function_82e9c(void)
{
	// 0x82e9c
	g40 = 0;
	return function_82adc(21, 1, 4, 0);
}

// Address range: 0x82ecc - 0x82efc
int32_t function_82ecc(void)
{
	// 0x82ecc
	g40 = 0;
	return function_82adc(22, 1, 4, 0);
}

// Address range: 0x82efc - 0x82f2c
int32_t function_82efc(void)
{
	// 0x82efc
	g40 = 1;
	return function_82adc(57, 0, 4, 1);
}

// Address range: 0x82f2c - 0x82f5c
int32_t function_82f2c(void)
{
	// 0x82f2c
	g40 = 0;
	return function_82adc(67, 0, 40, 0);
}

// Address range: 0x82f5c - 0x83344
int32_t function_82f5c(int32_t a1, int32_t a2)
{
	g26 = a1;
	g27 = a2;
	g28 = g38;
	int32_t v1 = a1; // 0x82f8c
	if (a1 >= 200) {
		// 0x82f80
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e4c));
		v1 = g26;
		// branch -> 0x82f8c
	}
	int32_t v2 = *(int32_t *)(g23 - 0x7754) + 232 * v1; // 0x82f94
	g29 = v2;
	g34 = *(int32_t *)(v2 + 32) - (int32_t) * (char *)(v2 + 80);
	g25 = *(int32_t *)(v2 + 36) - (int32_t) * (char *)(v2 + 81);
	if (abs() <= 4) {
		// 0x82fbc
		g34 = g25;
		if (abs() < 5) {
			int32_t v3 = g29; // 0x82fd8
			if (*(int32_t *)(v3 + 4) == 0) {
				// 0x82fe4
				if (*(char *)(v3 + 164) != 0) {
					int32_t v4 = (int32_t) * (char *)(v3 + 80); // 0x82ff0
					int32_t v5 = *(int32_t *)(v3 + 32);         // 0x82ff4
					int32_t v6 = (int32_t) * (char *)(v3 + 81); // 0x82ff8
					g32 = v4;
					int32_t v7 = *(int32_t *)(v3 + 36); // 0x83000
					g35 = v5 - v4;
					int32_t v8 = *(int32_t *)(v3 + 176); // 0x8300c
					g31 = v6;
					g33 = v7 - v6;
					g30 = GetDirection(v5, v7, *(int32_t *)(v3 + 172), v8);
					if (*(char *)(g29 + 164) != -1) {
						// 0x8302c
						MonstCheckDoors(g26);
						// branch -> 0x83034
					}
					// 0x83034
					g37 = 100;
					g36 = random(121);
					g34 = g35;
					int32_t v9;     // r3
					int32_t v10;    // 0x831c8
					int32_t v11;    // 0x831d4
					int32_t v12;    // 0x831f0
					int32_t v13;    // 0x83204
					int32_t v14;    // 0x83258
					int32_t v15;    // 0x83290
					int32_t v16;    // 0x832b0
					int32_t result; // 0x83340
					int32_t v17;    // 0x832b4
					int32_t v18;    // 0x83254
					int32_t v19;    // 0x83278
					int32_t v20;    // 0x832ac
					int32_t v21;    // 0x832fc
					int32_t v22;    // 0x8331c
					int32_t v23;    // 0x83204
					int32_t v24;    // 0x832c4
					if (abs() <= 1) {
						// 0x83054
						g34 = g33;
						int32_t v25 = abs(); // 0x83058
						v9 = v25;
						if (v25 < 2) {
							// 0x83054
							// branch -> 0x830a8
							// 0x830a8
							*(char *)(g29 + 8) = 1;
							// branch -> 0x8319c
							int32_t v26 = g29; // 0x8319c
							int32_t v27 = v26; // 0x83308
							if (*(char *)(v26 + 8) == 1) {
								// 0x831a8
								g34 = g35;
								if (abs() <= 2) {
									// 0x831b8
									g34 = g33;
									if (abs() < 3) {
										// 0x831b8
										v12 = g29;
										// branch -> 0x831dc
										// 0x831dc
										v13 = v12;
										if (g36 >= 5 * (int32_t) * (char *)(v12 + 157) + 5) {
											// 0x831f0
											if (*(int32_t *)(v12 + 20) != 4) {
												// 0x8322c
												g34 = g35;
												if (abs() <= 1) {
													// 0x8323c
													g34 = g33;
													if (abs() <= 1) {
														// 0x8324c
														g37 = 100;
														v18 = random(124);
														v14 = g29;
														if (v18 >= 10 * (int32_t) * (char *)(v14 + 157) + 40) {
															// 0x83300
															*(int32_t *)(g29 + 20) = 1;
															// branch -> 0x83308
															// 0x83308
															if (*(int32_t *)(g29 + 4) == 0) {
																// 0x83314
																g37 = 10;
																v22 = random(125);
																result = function_7c204(g26, v22 + 5);
																// branch -> 0x83330
															} else {
																// 0x83308
																result = v18;
																// branch -> 0x83330
															}
															// 0x83330
															return result;
														}
														// 0x8326c
														*(int32_t *)(v14 + 72) = g30;
														g37 = 2;
														v19 = random(124);
														v15 = g26;
														if (v19 == 0) {
															// 0x83290
															v9 = function_7c78c(v15, g27, g28);
															// branch -> 0x83300
														} else {
															// 0x83284
															v9 = function_7c64c(v15);
															// branch -> 0x83300
														}
														// 0x83300
														*(int32_t *)(g29 + 20) = 1;
														// branch -> 0x83308
														// 0x83308
														if (*(int32_t *)(g29 + 4) == 0) {
															// 0x83314
															g37 = 10;
															v22 = random(125);
															result = function_7c204(g26, v22 + 5);
															// branch -> 0x83330
														} else {
															// 0x83308
															result = v9;
															// branch -> 0x83330
														}
														// 0x83330
														return result;
													}
												}
												// 0x832a4
												g37 = 100;
												v20 = random(124);
												v9 = v20;
												v16 = g29;
												v17 = 10 * (int32_t) * (char *)(v16 + 157);
												if (v20 < v17 + 50) {
													// 0x832f4
													v21 = function_802c4(g26, g30);
													// branch -> 0x83300
													// 0x83300
													*(int32_t *)(g29 + 20) = 1;
													// branch -> 0x83308
													// 0x83308
													if (*(int32_t *)(g29 + 4) == 0) {
														// 0x83314
														g37 = 10;
														v22 = random(125);
														result = function_7c204(g26, v22 + 5);
														// branch -> 0x83330
													} else {
														// 0x83308
														result = v21;
														// branch -> 0x83330
													}
													// 0x83330
													return result;
												}
												// 0x832c4
												v24 = *(int32_t *)(v16 + 116);
												if (v24 == 1) {
													// 0x832dc
													if (*(int32_t *)(v16 + 120) == 0) {
														// 0x832e8
														if (v20 < v17 + 80) {
															// 0x832f4
															v9 = function_802c4(g26, g30);
															// branch -> 0x83300
														}
													}
												} else {
													// 0x832d0
													if (v24 <= 3) {
														// 0x832dc
														if (*(int32_t *)(v16 + 120) == 0) {
															// 0x832e8
															if (v20 < v17 + 80) {
																// 0x832f4
																v9 = function_802c4(g26, g30);
																// branch -> 0x83300
															}
														}
													}
												}
												// 0x83300
												*(int32_t *)(g29 + 20) = 1;
												// branch -> 0x83308
												// 0x83308
												if (*(int32_t *)(g29 + 4) == 0) {
													// 0x83314
													g37 = 10;
													v22 = random(125);
													result = function_7c204(g26, v22 + 5);
													// branch -> 0x83330
												} else {
													// 0x83308
													result = v9;
													// branch -> 0x83330
												}
												// 0x83330
												return result;
											}
											v13 = v12;
										}
										// 0x831fc
										v23 = *(int32_t *)(v13 + 36);
										if (function_85a14(*(int32_t *)(v13 + 32), v23, g32, g31) != 0) {
											int32_t v28 = function_7c78c(g26, g27, g28); // 0x83224
											// branch -> 0x83300
											// 0x83300
											*(int32_t *)(g29 + 20) = 1;
											// branch -> 0x83308
											// 0x83308
											if (*(int32_t *)(g29 + 4) == 0) {
												// 0x83314
												g37 = 10;
												v22 = random(125);
												result = function_7c204(g26, v22 + 5);
												// branch -> 0x83330
											} else {
												// 0x83308
												result = v28;
												// branch -> 0x83330
											}
											// 0x83330
											return result;
										}
										// 0x8322c
										g34 = g35;
										if (abs() <= 1) {
											// 0x8323c
											g34 = g33;
											if (abs() <= 1) {
												// 0x8324c
												g37 = 100;
												v18 = random(124);
												v14 = g29;
												if (v18 >= 10 * (int32_t) * (char *)(v14 + 157) + 40) {
													// 0x83300
													*(int32_t *)(g29 + 20) = 1;
													// branch -> 0x83308
													// 0x83308
													if (*(int32_t *)(g29 + 4) == 0) {
														// 0x83314
														g37 = 10;
														v22 = random(125);
														result = function_7c204(g26, v22 + 5);
														// branch -> 0x83330
													} else {
														// 0x83308
														result = v18;
														// branch -> 0x83330
													}
													// 0x83330
													return result;
												}
												// 0x8326c
												*(int32_t *)(v14 + 72) = g30;
												g37 = 2;
												v19 = random(124);
												v15 = g26;
												if (v19 == 0) {
													// 0x83290
													v9 = function_7c78c(v15, g27, g28);
													// branch -> 0x83300
												} else {
													// 0x83284
													v9 = function_7c64c(v15);
													// branch -> 0x83300
												}
												// 0x83300
												*(int32_t *)(g29 + 20) = 1;
												// branch -> 0x83308
												// 0x83308
												if (*(int32_t *)(g29 + 4) == 0) {
													// 0x83314
													g37 = 10;
													v22 = random(125);
													result = function_7c204(g26, v22 + 5);
													// branch -> 0x83330
												} else {
													// 0x83308
													result = v9;
													// branch -> 0x83330
												}
												// 0x83330
												return result;
											}
										}
										// 0x832a4
										g37 = 100;
										v20 = random(124);
										v9 = v20;
										v16 = g29;
										v17 = 10 * (int32_t) * (char *)(v16 + 157);
										if (v20 < v17 + 50) {
											// 0x832f4
											v21 = function_802c4(g26, g30);
											// branch -> 0x83300
											// 0x83300
											*(int32_t *)(g29 + 20) = 1;
											// branch -> 0x83308
											// 0x83308
											if (*(int32_t *)(g29 + 4) == 0) {
												// 0x83314
												g37 = 10;
												v22 = random(125);
												result = function_7c204(g26, v22 + 5);
												// branch -> 0x83330
											} else {
												// 0x83308
												result = v21;
												// branch -> 0x83330
											}
											// 0x83330
											return result;
										}
										// 0x832c4
										v24 = *(int32_t *)(v16 + 116);
										if (v24 == 1) {
											// 0x832dc
											if (*(int32_t *)(v16 + 120) == 0) {
												// 0x832e8
												if (v20 < v17 + 80) {
													// 0x832f4
													v9 = function_802c4(g26, g30);
													// branch -> 0x83300
												}
											}
										} else {
											// 0x832d0
											if (v24 <= 3) {
												// 0x832dc
												if (*(int32_t *)(v16 + 120) == 0) {
													// 0x832e8
													if (v20 < v17 + 80) {
														// 0x832f4
														v9 = function_802c4(g26, g30);
														// branch -> 0x83300
													}
												}
											}
										}
										// 0x83300
										*(int32_t *)(g29 + 20) = 1;
										// branch -> 0x83308
										// 0x83308
										if (*(int32_t *)(g29 + 4) == 0) {
											// 0x83314
											g37 = 10;
											v22 = random(125);
											result = function_7c204(g26, v22 + 5);
											// branch -> 0x83330
										} else {
											// 0x83308
											result = v9;
											// branch -> 0x83330
										}
										// 0x83330
										return result;
									}
								}
								// 0x831c8
								v10 = g29;
								v11 = g36;
								v13 = v10;
								if (v11 >= 5 * (int32_t) * (char *)(v10 + 157) + 10) {
									v12 = v10;
									// 0x831dc
									if (v11 >= 5 * (int32_t) * (char *)(v12 + 157) + 5) {
										// 0x831f0
										if (*(int32_t *)(v12 + 20) != 4) {
											// 0x8322c
											g34 = g35;
											if (abs() <= 1) {
												// 0x8323c
												g34 = g33;
												if (abs() <= 1) {
													// 0x8324c
													g37 = 100;
													v18 = random(124);
													v14 = g29;
													if (v18 >= 10 * (int32_t) * (char *)(v14 + 157) + 40) {
														// 0x83300
														*(int32_t *)(g29 + 20) = 1;
														// branch -> 0x83308
														// 0x83308
														if (*(int32_t *)(g29 + 4) == 0) {
															// 0x83314
															g37 = 10;
															v22 = random(125);
															result = function_7c204(g26, v22 + 5);
															// branch -> 0x83330
														} else {
															// 0x83308
															result = v18;
															// branch -> 0x83330
														}
														// 0x83330
														return result;
													}
													// 0x8326c
													*(int32_t *)(v14 + 72) = g30;
													g37 = 2;
													v19 = random(124);
													v15 = g26;
													if (v19 == 0) {
														// 0x83290
														v9 = function_7c78c(v15, g27, g28);
														// branch -> 0x83300
													} else {
														// 0x83284
														v9 = function_7c64c(v15);
														// branch -> 0x83300
													}
													// 0x83300
													*(int32_t *)(g29 + 20) = 1;
													// branch -> 0x83308
													// 0x83308
													if (*(int32_t *)(g29 + 4) == 0) {
														// 0x83314
														g37 = 10;
														v22 = random(125);
														result = function_7c204(g26, v22 + 5);
														// branch -> 0x83330
													} else {
														// 0x83308
														result = v9;
														// branch -> 0x83330
													}
													// 0x83330
													return result;
												}
											}
											// 0x832a4
											g37 = 100;
											v20 = random(124);
											v9 = v20;
											v16 = g29;
											v17 = 10 * (int32_t) * (char *)(v16 + 157);
											if (v20 < v17 + 50) {
												// 0x832f4
												v21 = function_802c4(g26, g30);
												// branch -> 0x83300
												// 0x83300
												*(int32_t *)(g29 + 20) = 1;
												// branch -> 0x83308
												// 0x83308
												if (*(int32_t *)(g29 + 4) == 0) {
													// 0x83314
													g37 = 10;
													v22 = random(125);
													result = function_7c204(g26, v22 + 5);
													// branch -> 0x83330
												} else {
													// 0x83308
													result = v21;
													// branch -> 0x83330
												}
												// 0x83330
												return result;
											}
											// 0x832c4
											v24 = *(int32_t *)(v16 + 116);
											if (v24 == 1) {
												// 0x832dc
												if (*(int32_t *)(v16 + 120) == 0) {
													// 0x832e8
													if (v20 < v17 + 80) {
														// 0x832f4
														v9 = function_802c4(g26, g30);
														// branch -> 0x83300
													}
												}
											} else {
												// 0x832d0
												if (v24 <= 3) {
													// 0x832dc
													if (*(int32_t *)(v16 + 120) == 0) {
														// 0x832e8
														if (v20 < v17 + 80) {
															// 0x832f4
															v9 = function_802c4(g26, g30);
															// branch -> 0x83300
														}
													}
												}
											}
											// 0x83300
											*(int32_t *)(g29 + 20) = 1;
											// branch -> 0x83308
											// 0x83308
											if (*(int32_t *)(g29 + 4) == 0) {
												// 0x83314
												g37 = 10;
												v22 = random(125);
												result = function_7c204(g26, v22 + 5);
												// branch -> 0x83330
											} else {
												// 0x83308
												result = v9;
												// branch -> 0x83330
											}
											// 0x83330
											return result;
										}
										v13 = v12;
									} else {
										v13 = v12;
									}
								}
								// 0x831fc
								v23 = *(int32_t *)(v13 + 36);
								if (function_85a14(*(int32_t *)(v13 + 32), v23, g32, g31) == 0) {
									// 0x8322c
									g34 = g35;
									if (abs() <= 1) {
										// 0x8323c
										g34 = g33;
										if (abs() <= 1) {
											// 0x8324c
											g37 = 100;
											v18 = random(124);
											v14 = g29;
											if (v18 >= 10 * (int32_t) * (char *)(v14 + 157) + 40) {
												// 0x83300
												*(int32_t *)(g29 + 20) = 1;
												// branch -> 0x83308
												// 0x83308
												if (*(int32_t *)(g29 + 4) == 0) {
													// 0x83314
													g37 = 10;
													v22 = random(125);
													result = function_7c204(g26, v22 + 5);
													// branch -> 0x83330
												} else {
													// 0x83308
													result = v18;
													// branch -> 0x83330
												}
												// 0x83330
												return result;
											}
											// 0x8326c
											*(int32_t *)(v14 + 72) = g30;
											g37 = 2;
											v19 = random(124);
											v15 = g26;
											if (v19 == 0) {
												// 0x83290
												v9 = function_7c78c(v15, g27, g28);
												// branch -> 0x83300
											} else {
												// 0x83284
												v9 = function_7c64c(v15);
												// branch -> 0x83300
											}
											// 0x83300
											*(int32_t *)(g29 + 20) = 1;
											// branch -> 0x83308
											// 0x83308
											if (*(int32_t *)(g29 + 4) == 0) {
												// 0x83314
												g37 = 10;
												v22 = random(125);
												result = function_7c204(g26, v22 + 5);
												// branch -> 0x83330
											} else {
												// 0x83308
												result = v9;
												// branch -> 0x83330
											}
											// 0x83330
											return result;
										}
									}
									// 0x832a4
									g37 = 100;
									v20 = random(124);
									v9 = v20;
									v16 = g29;
									v17 = 10 * (int32_t) * (char *)(v16 + 157);
									if (v20 < v17 + 50) {
										// 0x832f4
										v21 = function_802c4(g26, g30);
										// branch -> 0x83300
										// 0x83300
										*(int32_t *)(g29 + 20) = 1;
										// branch -> 0x83308
										// 0x83308
										if (*(int32_t *)(g29 + 4) == 0) {
											// 0x83314
											g37 = 10;
											v22 = random(125);
											result = function_7c204(g26, v22 + 5);
											// branch -> 0x83330
										} else {
											// 0x83308
											result = v21;
											// branch -> 0x83330
										}
										// 0x83330
										return result;
									}
									// 0x832c4
									v24 = *(int32_t *)(v16 + 116);
									if (v24 == 1) {
										// 0x832dc
										if (*(int32_t *)(v16 + 120) == 0) {
											// 0x832e8
											if (v20 < v17 + 80) {
												// 0x832f4
												v9 = function_802c4(g26, g30);
												// branch -> 0x83300
											}
										}
									} else {
										// 0x832d0
										if (v24 <= 3) {
											// 0x832dc
											if (*(int32_t *)(v16 + 120) == 0) {
												// 0x832e8
												if (v20 < v17 + 80) {
													// 0x832f4
													v9 = function_802c4(g26, g30);
													// branch -> 0x83300
												}
											}
										}
									}
									// 0x83300
									*(int32_t *)(g29 + 20) = 1;
									// branch -> 0x83308
									// 0x83308
									if (*(int32_t *)(g29 + 4) == 0) {
										// 0x83314
										g37 = 10;
										v22 = random(125);
										result = function_7c204(g26, v22 + 5);
										// branch -> 0x83330
									} else {
										// 0x83308
										result = v9;
										// branch -> 0x83330
									}
									// 0x83330
									return result;
								}
								// 0x83218
								v9 = function_7c78c(g26, g27, g28);
								// branch -> 0x83300
								// 0x83300
								*(int32_t *)(g29 + 20) = 1;
								v27 = g29;
								// branch -> 0x83308
							}
							// 0x83308
							if (*(int32_t *)(v27 + 4) == 0) {
								// 0x83314
								g37 = 10;
								v22 = random(125);
								result = function_7c204(g26, v22 + 5);
								// branch -> 0x83330
							} else {
								// 0x83308
								result = v9;
								// branch -> 0x83330
							}
							// 0x83330
							return result;
						}
					}
					int32_t v29 = g29; // 0x83064
					if (*(char *)(v29 + 164) == -1) {
						int32_t v30 = *(int32_t *)(v29 + 36);                           // 0x8307c
						int32_t v31 = *(int32_t *)*(int32_t *)(g23 - 0x7588);           // 0x83084
						char v32 = *(char *)(v31 + v30 + 112 * *(int32_t *)(v29 + 32)); // 0x83094
						if (v32 == *(char *)(g31 + 112 * g32 + v31)) {
							// 0x830b4
							if (*(char *)(v29 + 8) != 4) {
								// 0x830c0
								g34 = g35;
								if (abs() <= 2) {
									// 0x830d0
									g34 = g33;
									if (abs() < 3) {
										// 0x8319c
										if (*(char *)(g29 + 8) == 1) {
											// 0x831a8
											g34 = g35;
											if (abs() <= 2) {
												// 0x831b8
												g34 = g33;
												if (abs() < 3) {
													// 0x831b8
													v12 = g29;
													// branch -> 0x831dc
													// 0x831dc
													v13 = v12;
													if (g36 >= 5 * (int32_t) * (char *)(v12 + 157) + 5) {
														// 0x831f0
														if (*(int32_t *)(v12 + 20) != 4) {
															// 0x8322c
															g34 = g35;
															if (abs() <= 1) {
																// 0x8323c
																g34 = g33;
																if (abs() <= 1) {
																	// 0x8324c
																	g37 = 100;
																	v18 = random(124);
																	v14 = g29;
																	if (v18 >= 10 * (int32_t) * (char *)(v14 + 157) + 40) {
																		// 0x83300
																		*(int32_t *)(g29 + 20) = 1;
																		// branch -> 0x83308
																		// 0x83308
																		if (*(int32_t *)(g29 + 4) == 0) {
																			// 0x83314
																			g37 = 10;
																			v22 = random(125);
																			result = function_7c204(g26, v22 + 5);
																			// branch -> 0x83330
																		} else {
																			// 0x83308
																			result = v18;
																			// branch -> 0x83330
																		}
																		// 0x83330
																		return result;
																	}
																	// 0x8326c
																	*(int32_t *)(v14 + 72) = g30;
																	g37 = 2;
																	v19 = random(124);
																	v15 = g26;
																	if (v19 == 0) {
																		// 0x83290
																		v9 = function_7c78c(v15, g27, g28);
																		// branch -> 0x83300
																	} else {
																		// 0x83284
																		v9 = function_7c64c(v15);
																		// branch -> 0x83300
																	}
																	// 0x83300
																	*(int32_t *)(g29 + 20) = 1;
																	// branch -> 0x83308
																	// 0x83308
																	if (*(int32_t *)(g29 + 4) == 0) {
																		// 0x83314
																		g37 = 10;
																		v22 = random(125);
																		result = function_7c204(g26, v22 + 5);
																		// branch -> 0x83330
																	} else {
																		// 0x83308
																		result = v9;
																		// branch -> 0x83330
																	}
																	// 0x83330
																	return result;
																}
															}
															// 0x832a4
															g37 = 100;
															v20 = random(124);
															v9 = v20;
															v16 = g29;
															v17 = 10 * (int32_t) * (char *)(v16 + 157);
															if (v20 < v17 + 50) {
																// 0x832f4
																v21 = function_802c4(g26, g30);
																// branch -> 0x83300
																// 0x83300
																*(int32_t *)(g29 + 20) = 1;
																// branch -> 0x83308
																// 0x83308
																if (*(int32_t *)(g29 + 4) == 0) {
																	// 0x83314
																	g37 = 10;
																	v22 = random(125);
																	result = function_7c204(g26, v22 + 5);
																	// branch -> 0x83330
																} else {
																	// 0x83308
																	result = v21;
																	// branch -> 0x83330
																}
																// 0x83330
																return result;
															}
															// 0x832c4
															v24 = *(int32_t *)(v16 + 116);
															if (v24 == 1) {
																// 0x832dc
																if (*(int32_t *)(v16 + 120) == 0) {
																	// 0x832e8
																	if (v20 < v17 + 80) {
																		// 0x832f4
																		v9 = function_802c4(g26, g30);
																		// branch -> 0x83300
																	}
																}
															} else {
																// 0x832d0
																if (v24 <= 3) {
																	// 0x832dc
																	if (*(int32_t *)(v16 + 120) == 0) {
																		// 0x832e8
																		if (v20 < v17 + 80) {
																			// 0x832f4
																			v9 = function_802c4(g26, g30);
																			// branch -> 0x83300
																		}
																	}
																}
															}
															// 0x83300
															*(int32_t *)(g29 + 20) = 1;
															// branch -> 0x83308
															// 0x83308
															if (*(int32_t *)(g29 + 4) == 0) {
																// 0x83314
																g37 = 10;
																v22 = random(125);
																result = function_7c204(g26, v22 + 5);
																// branch -> 0x83330
															} else {
																// 0x83308
																result = v9;
																// branch -> 0x83330
															}
															// 0x83330
															return result;
														}
														v13 = v12;
													}
													// 0x831fc
													v23 = *(int32_t *)(v13 + 36);
													if (function_85a14(*(int32_t *)(v13 + 32), v23, g32, g31) == 0) {
														// 0x8322c
														g34 = g35;
														if (abs() <= 1) {
															// 0x8323c
															g34 = g33;
															if (abs() <= 1) {
																// 0x8324c
																g37 = 100;
																v18 = random(124);
																v14 = g29;
																if (v18 >= 10 * (int32_t) * (char *)(v14 + 157) + 40) {
																	// 0x83300
																	*(int32_t *)(g29 + 20) = 1;
																	// branch -> 0x83308
																	// 0x83308
																	if (*(int32_t *)(g29 + 4) == 0) {
																		// 0x83314
																		g37 = 10;
																		v22 = random(125);
																		result = function_7c204(g26, v22 + 5);
																		// branch -> 0x83330
																	} else {
																		// 0x83308
																		result = v18;
																		// branch -> 0x83330
																	}
																	// 0x83330
																	return result;
																}
																// 0x8326c
																*(int32_t *)(v14 + 72) = g30;
																g37 = 2;
																v19 = random(124);
																v15 = g26;
																if (v19 == 0) {
																	// 0x83290
																	v9 = function_7c78c(v15, g27, g28);
																	// branch -> 0x83300
																} else {
																	// 0x83284
																	v9 = function_7c64c(v15);
																	// branch -> 0x83300
																}
																// 0x83300
																*(int32_t *)(g29 + 20) = 1;
																// branch -> 0x83308
																// 0x83308
																if (*(int32_t *)(g29 + 4) == 0) {
																	// 0x83314
																	g37 = 10;
																	v22 = random(125);
																	result = function_7c204(g26, v22 + 5);
																	// branch -> 0x83330
																} else {
																	// 0x83308
																	result = v9;
																	// branch -> 0x83330
																}
																// 0x83330
																return result;
															}
														}
														// 0x832a4
														g37 = 100;
														v20 = random(124);
														v9 = v20;
														v16 = g29;
														v17 = 10 * (int32_t) * (char *)(v16 + 157);
														if (v20 >= v17 + 50) {
															// 0x832c4
															v24 = *(int32_t *)(v16 + 116);
															if (v24 == 1) {
																// 0x832dc
																if (*(int32_t *)(v16 + 120) == 0) {
																	// 0x832e8
																	if (v20 < v17 + 80) {
																		// 0x832f4
																		v9 = function_802c4(g26, g30);
																		// branch -> 0x83300
																	}
																}
															} else {
																// 0x832d0
																if (v24 <= 3) {
																	// 0x832dc
																	if (*(int32_t *)(v16 + 120) == 0) {
																		// 0x832e8
																		if (v20 < v17 + 80) {
																			// 0x832f4
																			v9 = function_802c4(g26, g30);
																			// branch -> 0x83300
																		}
																	}
																}
															}
															// 0x83300
															*(int32_t *)(g29 + 20) = 1;
															// branch -> 0x83308
															// 0x83308
															if (*(int32_t *)(g29 + 4) == 0) {
																// 0x83314
																g37 = 10;
																v22 = random(125);
																result = function_7c204(g26, v22 + 5);
																// branch -> 0x83330
															} else {
																// 0x83308
																result = v9;
																// branch -> 0x83330
															}
															// 0x83330
															return result;
														}
														// 0x832f4
														function_802c4(g26, g30);
														// branch -> 0x83300
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x83218
														function_7c78c(g26, g27, g28);
														// branch -> 0x83300
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x831c8
											v10 = g29;
											v11 = g36;
											v13 = v10;
											if (v11 >= 5 * (int32_t) * (char *)(v10 + 157) + 10) {
												v12 = v10;
												// 0x831dc
												if (v11 >= 5 * (int32_t) * (char *)(v12 + 157) + 5) {
													// 0x831f0
													if (*(int32_t *)(v12 + 20) != 4) {
														// 0x8322c
														g34 = g35;
														if (abs() <= 1) {
															// 0x8323c
															g34 = g33;
															if (abs() <= 1) {
																// 0x8324c
																g37 = 100;
																v18 = random(124);
																v14 = g29;
																if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
																	// 0x8326c
																	*(int32_t *)(v14 + 72) = g30;
																	g37 = 2;
																	v19 = random(124);
																	v15 = g26;
																	if (v19 == 0) {
																		// 0x83290
																		function_7c78c(v15, g27, g28);
																		// branch -> 0x83300
																	} else {
																		// 0x83284
																		function_7c64c(v15);
																		// branch -> 0x83300
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
														// 0x832a4
														g37 = 100;
														v20 = random(124);
														v16 = g29;
														v17 = 10 * (int32_t) * (char *)(v16 + 157);
														if (v20 < v17 + 50) {
															// 0x832f4
															function_802c4(g26, g30);
															// branch -> 0x83300
														} else {
															// 0x832c4
															v24 = *(int32_t *)(v16 + 116);
															if (v24 == 1) {
																// 0x832dc
																if (*(int32_t *)(v16 + 120) == 0) {
																	// 0x832e8
																	if (v20 < v17 + 80) {
																		// 0x832f4
																		function_802c4(g26, g30);
																		// branch -> 0x83300
																	}
																}
															} else {
																// 0x832d0
																if (v24 <= 3) {
																	// 0x832dc
																	if (*(int32_t *)(v16 + 120) == 0) {
																		// 0x832e8
																		if (v20 < v17 + 80) {
																			// 0x832f4
																			function_802c4(g26, g30);
																			// branch -> 0x83300
																		}
																	}
																}
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														v13 = v12;
													}
												} else {
													v13 = v12;
												}
											}
											// 0x831fc
											v23 = *(int32_t *)(v13 + 36);
											if (function_85a14(*(int32_t *)(v13 + 32), v23, g32, g31) == 0) {
												// 0x8322c
												g34 = g35;
												if (abs() <= 1) {
													// 0x8323c
													g34 = g33;
													if (abs() <= 1) {
														// 0x8324c
														g37 = 100;
														v18 = random(124);
														v14 = g29;
														if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
															// 0x8326c
															*(int32_t *)(v14 + 72) = g30;
															g37 = 2;
															v19 = random(124);
															v15 = g26;
															if (v19 == 0) {
																// 0x83290
																function_7c78c(v15, g27, g28);
																// branch -> 0x83300
															} else {
																// 0x83284
																function_7c64c(v15);
																// branch -> 0x83300
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x832a4
												g37 = 100;
												v20 = random(124);
												v16 = g29;
												v17 = 10 * (int32_t) * (char *)(v16 + 157);
												if (v20 < v17 + 50) {
													// 0x832f4
													function_802c4(g26, g30);
													// branch -> 0x83300
												} else {
													// 0x832c4
													v24 = *(int32_t *)(v16 + 116);
													if (v24 == 1) {
														// 0x832dc
														if (*(int32_t *)(v16 + 120) == 0) {
															// 0x832e8
															if (v20 < v17 + 80) {
																// 0x832f4
																function_802c4(g26, g30);
																// branch -> 0x83300
															}
														}
													} else {
														// 0x832d0
														if (v24 <= 3) {
															// 0x832dc
															if (*(int32_t *)(v16 + 120) == 0) {
																// 0x832e8
																if (v20 < v17 + 80) {
																	// 0x832f4
																	function_802c4(g26, g30);
																	// branch -> 0x83300
																}
															}
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x83218
												function_7c78c(g26, g27, g28);
												// branch -> 0x83300
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							int32_t v33 = g29; // 0x830e0
							int32_t v34 = v33; // 0x83108
							if (*(char *)(v33 + 8) != 4) {
								// 0x830ec
								*(int32_t *)(v33 + 12) = 0;
								g37 = 2;
								*(int32_t *)(g29 + 16) = random(123);
								v34 = g29;
								// branch -> 0x83104
							}
							// 0x83104
							*(char *)(v34 + 8) = 4;
							g34 = g33;
							*(int32_t *)(g29 + 20) = 4;
							g25 = abs();
							g34 = g35;
							int32_t v35;
							if (abs() > g25) {
								// 0x8312c
								g34 = g35;
								v35 = abs();
								// branch -> 0x83140
							} else {
								// 0x83138
								g34 = g33;
								v35 = abs();
								// branch -> 0x83140
							}
							int32_t *v36 = (int32_t *)(g29 + 12); // 0x83140
							uint32_t v37 = *v36;                  // 0x83140
							*v36 = v37 + 1;
							if (v37 >= 2 * v35) {
								// 0x83158
								g34 = g26;
								g37 = g30;
								if (function_8539c() != 0) {
									// 0x8316c
									*(char *)(g29 + 8) = 1;
									// branch -> 0x8319c
									// 0x8319c
									if (*(char *)(g29 + 8) == 1) {
										// 0x831a8
										g34 = g35;
										if (abs() <= 2) {
											// 0x831b8
											g34 = g33;
											if (abs() < 3) {
												// 0x831b8
												v12 = g29;
												// branch -> 0x831dc
												// 0x831dc
												v13 = v12;
												if (g36 >= 5 * (int32_t) * (char *)(v12 + 157) + 5) {
													// 0x831f0
													if (*(int32_t *)(v12 + 20) != 4) {
														// 0x8322c
														g34 = g35;
														if (abs() <= 1) {
															// 0x8323c
															g34 = g33;
															if (abs() <= 1) {
																// 0x8324c
																g37 = 100;
																v18 = random(124);
																v14 = g29;
																if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
																	// 0x8326c
																	*(int32_t *)(v14 + 72) = g30;
																	g37 = 2;
																	v19 = random(124);
																	v15 = g26;
																	if (v19 == 0) {
																		// 0x83290
																		function_7c78c(v15, g27, g28);
																		// branch -> 0x83300
																	} else {
																		// 0x83284
																		function_7c64c(v15);
																		// branch -> 0x83300
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
														// 0x832a4
														g37 = 100;
														v20 = random(124);
														v16 = g29;
														v17 = 10 * (int32_t) * (char *)(v16 + 157);
														if (v20 < v17 + 50) {
															// 0x832f4
															function_802c4(g26, g30);
															// branch -> 0x83300
														} else {
															// 0x832c4
															v24 = *(int32_t *)(v16 + 116);
															if (v24 == 1) {
																// 0x832dc
																if (*(int32_t *)(v16 + 120) == 0) {
																	// 0x832e8
																	if (v20 < v17 + 80) {
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																}
															} else {
																// 0x832d0
																if (v24 <= 3) {
																	// 0x832dc
																	if (*(int32_t *)(v16 + 120) == 0) {
																		// 0x832e8
																		if (v20 < v17 + 80) {
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		}
																	}
																}
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														v13 = v12;
													}
												}
												// 0x831fc
												v23 = *(int32_t *)(v13 + 36);
												if (function_85a14(*(int32_t *)(v13 + 32), v23, g32, g31) == 0) {
													// 0x8322c
													g34 = g35;
													if (abs() <= 1) {
														// 0x8323c
														g34 = g33;
														if (abs() <= 1) {
															// 0x8324c
															g37 = 100;
															v18 = random(124);
															v14 = g29;
															if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
																// 0x8326c
																*(int32_t *)(v14 + 72) = g30;
																g37 = 2;
																v19 = random(124);
																v15 = g26;
																if (v19 == 0) {
																	// 0x83290
																	function_7c78c(v15, g27, g28);
																	// branch -> 0x83300
																} else {
																	// 0x83284
																	function_7c64c(v15);
																	// branch -> 0x83300
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x832a4
													g37 = 100;
													v20 = random(124);
													v16 = g29;
													v17 = 10 * (int32_t) * (char *)(v16 + 157);
													if (v20 < v17 + 50) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x832c4
														v24 = *(int32_t *)(v16 + 116);
														if (v24 == 1) {
															// 0x832dc
															if (*(int32_t *)(v16 + 120) == 0) {
																// 0x832e8
																if (v20 < v17 + 80) {
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
														} else {
															// 0x832d0
															if (v24 <= 3) {
																// 0x832dc
																if (*(int32_t *)(v16 + 120) == 0) {
																	// 0x832e8
																	if (v20 < v17 + 80) {
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																}
															}
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x83218
													function_7c78c(g26, g27, g28);
													// branch -> 0x83300
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x831c8
										v10 = g29;
										v11 = g36;
										v13 = v10;
										if (v11 >= 5 * (int32_t) * (char *)(v10 + 157) + 10) {
											v12 = v10;
											// 0x831dc
											if (v11 >= 5 * (int32_t) * (char *)(v12 + 157) + 5) {
												// 0x831f0
												if (*(int32_t *)(v12 + 20) != 4) {
													// 0x8322c
													g34 = g35;
													if (abs() <= 1) {
														// 0x8323c
														g34 = g33;
														if (abs() <= 1) {
															// 0x8324c
															g37 = 100;
															v18 = random(124);
															v14 = g29;
															if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
																// 0x8326c
																*(int32_t *)(v14 + 72) = g30;
																g37 = 2;
																v19 = random(124);
																v15 = g26;
																if (v19 == 0) {
																	// 0x83290
																	function_7c78c(v15, g27, g28);
																	// branch -> 0x83300
																} else {
																	// 0x83284
																	function_7c64c(v15);
																	// branch -> 0x83300
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x832a4
													g37 = 100;
													v20 = random(124);
													v16 = g29;
													v17 = 10 * (int32_t) * (char *)(v16 + 157);
													if (v20 < v17 + 50) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x832c4
														v24 = *(int32_t *)(v16 + 116);
														if (v24 == 1) {
															// 0x832dc
															if (*(int32_t *)(v16 + 120) == 0) {
																// 0x832e8
																if (v20 < v17 + 80) {
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
														} else {
															// 0x832d0
															if (v24 <= 3) {
																// 0x832dc
																if (*(int32_t *)(v16 + 120) == 0) {
																	// 0x832e8
																	if (v20 < v17 + 80) {
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																}
															}
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													v13 = v12;
												}
											} else {
												v13 = v12;
											}
										}
										// 0x831fc
										v23 = *(int32_t *)(v13 + 36);
										if (function_85a14(*(int32_t *)(v13 + 32), v23, g32, g31) == 0) {
											// 0x8322c
											g34 = g35;
											if (abs() <= 1) {
												// 0x8323c
												g34 = g33;
												if (abs() <= 1) {
													// 0x8324c
													g37 = 100;
													v18 = random(124);
													v14 = g29;
													if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
														// 0x8326c
														*(int32_t *)(v14 + 72) = g30;
														g37 = 2;
														v19 = random(124);
														v15 = g26;
														if (v19 == 0) {
															// 0x83290
															function_7c78c(v15, g27, g28);
															// branch -> 0x83300
														} else {
															// 0x83284
															function_7c64c(v15);
															// branch -> 0x83300
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x832a4
											g37 = 100;
											v20 = random(124);
											v16 = g29;
											v17 = 10 * (int32_t) * (char *)(v16 + 157);
											if (v20 < v17 + 50) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x832c4
												v24 = *(int32_t *)(v16 + 116);
												if (v24 == 1) {
													// 0x832dc
													if (*(int32_t *)(v16 + 120) == 0) {
														// 0x832e8
														if (v20 < v17 + 80) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
												} else {
													// 0x832d0
													if (v24 <= 3) {
														// 0x832dc
														if (*(int32_t *)(v16 + 120) == 0) {
															// 0x832e8
															if (v20 < v17 + 80) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x83218
											function_7c78c(g26, g27, g28);
											// branch -> 0x83300
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							int32_t v38 = g29; // 0x83178
							if (g36 < 5 * (int32_t) * (char *)(v38 + 157) + 80) {
								// 0x8318c
								function_80718(g26, g30, (int32_t *)(v38 + 16));
								// branch -> 0x8319c
							}
							// 0x8319c
							if (*(char *)(g29 + 8) == 1) {
								// 0x831a8
								g34 = g35;
								if (abs() <= 2) {
									// 0x831b8
									g34 = g33;
									if (abs() < 3) {
										// 0x831b8
										v12 = g29;
										// branch -> 0x831dc
										// 0x831dc
										v13 = v12;
										if (g36 >= 5 * (int32_t) * (char *)(v12 + 157) + 5) {
											// 0x831f0
											if (*(int32_t *)(v12 + 20) != 4) {
												// 0x8322c
												g34 = g35;
												if (abs() <= 1) {
													// 0x8323c
													g34 = g33;
													if (abs() <= 1) {
														// 0x8324c
														g37 = 100;
														v18 = random(124);
														v14 = g29;
														if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
															// 0x8326c
															*(int32_t *)(v14 + 72) = g30;
															g37 = 2;
															v19 = random(124);
															v15 = g26;
															if (v19 == 0) {
																// 0x83290
																function_7c78c(v15, g27, g28);
																// branch -> 0x83300
															} else {
																// 0x83284
																function_7c64c(v15);
																// branch -> 0x83300
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x832a4
												g37 = 100;
												v20 = random(124);
												v16 = g29;
												v17 = 10 * (int32_t) * (char *)(v16 + 157);
												if (v20 < v17 + 50) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x832c4
													v24 = *(int32_t *)(v16 + 116);
													if (v24 == 1) {
														// 0x832dc
														if (*(int32_t *)(v16 + 120) == 0) {
															// 0x832e8
															if (v20 < v17 + 80) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													} else {
														// 0x832d0
														if (v24 <= 3) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												v13 = v12;
											}
										}
										// 0x831fc
										v23 = *(int32_t *)(v13 + 36);
										if (function_85a14(*(int32_t *)(v13 + 32), v23, g32, g31) == 0) {
											// 0x8322c
											g34 = g35;
											if (abs() <= 1) {
												// 0x8323c
												g34 = g33;
												if (abs() <= 1) {
													// 0x8324c
													g37 = 100;
													v18 = random(124);
													v14 = g29;
													if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
														// 0x8326c
														*(int32_t *)(v14 + 72) = g30;
														g37 = 2;
														v19 = random(124);
														v15 = g26;
														if (v19 == 0) {
															// 0x83290
															function_7c78c(v15, g27, g28);
															// branch -> 0x83300
														} else {
															// 0x83284
															function_7c64c(v15);
															// branch -> 0x83300
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x832a4
											g37 = 100;
											v20 = random(124);
											v16 = g29;
											if (v20 < 10 * (int32_t) * (char *)(v16 + 157) + 50) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x832c4
												v24 = *(int32_t *)(v16 + 116);
												if (v24 == 1) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x832d0
													if (v24 <= 3) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x83218
											function_7c78c(g26, g27, g28);
											// branch -> 0x83300
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x831c8
								v10 = g29;
								v11 = g36;
								v13 = v10;
								if (v11 >= 5 * (int32_t) * (char *)(v10 + 157) + 10) {
									v12 = v10;
									// 0x831dc
									if (v11 >= 5 * (int32_t) * (char *)(v12 + 157) + 5) {
										// 0x831f0
										if (*(int32_t *)(v12 + 20) != 4) {
											// 0x8322c
											g34 = g35;
											if (abs() <= 1) {
												// 0x8323c
												g34 = g33;
												if (abs() <= 1) {
													// 0x8324c
													g37 = 100;
													v18 = random(124);
													v14 = g29;
													if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
														// 0x8326c
														*(int32_t *)(v14 + 72) = g30;
														g37 = 2;
														v19 = random(124);
														v15 = g26;
														if (v19 == 0) {
															// 0x83290
															function_7c78c(v15, g27, g28);
															// branch -> 0x83300
														} else {
															// 0x83284
															function_7c64c(v15);
															// branch -> 0x83300
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x832a4
											g37 = 100;
											v20 = random(124);
											v16 = g29;
											if (v20 < 10 * (int32_t) * (char *)(v16 + 157) + 50) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x832c4
												v24 = *(int32_t *)(v16 + 116);
												if (v24 == 1) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x832d0
													if (v24 <= 3) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											v13 = v12;
										}
									} else {
										v13 = v12;
									}
								}
								// 0x831fc
								v23 = *(int32_t *)(v13 + 36);
								if (function_85a14(*(int32_t *)(v13 + 32), v23, g32, g31) == 0) {
									// 0x8322c
									g34 = g35;
									if (abs() <= 1) {
										// 0x8323c
										g34 = g33;
										if (abs() <= 1) {
											// 0x8324c
											g37 = 100;
											v18 = random(124);
											v14 = g29;
											if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
												// 0x8326c
												*(int32_t *)(v14 + 72) = g30;
												g37 = 2;
												v19 = random(124);
												v15 = g26;
												if (v19 == 0) {
													// 0x83290
													function_7c78c(v15, g27, g28);
													// branch -> 0x83300
												} else {
													// 0x83284
													function_7c64c(v15);
													// branch -> 0x83300
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x832a4
									g37 = 100;
									v20 = random(124);
									v16 = g29;
									if (v20 < 10 * (int32_t) * (char *)(v16 + 157) + 50) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x832c4
										v24 = *(int32_t *)(v16 + 116);
										if (v24 == 1) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x832d0
											if (v24 <= 3) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x83218
									function_7c78c(g26, g27, g28);
									// branch -> 0x83300
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x830a8
					*(char *)(v29 + 8) = 1;
					// branch -> 0x8319c
					// 0x8319c
					if (*(char *)(g29 + 8) == 1) {
						// 0x831a8
						g34 = g35;
						if (abs() <= 2) {
							// 0x831b8
							g34 = g33;
							if (abs() < 3) {
								// 0x831b8
								v12 = g29;
								// branch -> 0x831dc
								// 0x831dc
								v13 = v12;
								if (g36 >= 5 * (int32_t) * (char *)(v12 + 157) + 5) {
									// 0x831f0
									if (*(int32_t *)(v12 + 20) != 4) {
										// 0x8322c
										g34 = g35;
										if (abs() <= 1) {
											// 0x8323c
											g34 = g33;
											if (abs() <= 1) {
												// 0x8324c
												g37 = 100;
												v18 = random(124);
												v14 = g29;
												if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
													// 0x8326c
													*(int32_t *)(v14 + 72) = g30;
													g37 = 2;
													v19 = random(124);
													v15 = g26;
													if (v19 == 0) {
														// 0x83290
														function_7c78c(v15, g27, g28);
														// branch -> 0x83300
													} else {
														// 0x83284
														function_7c64c(v15);
														// branch -> 0x83300
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x832a4
										g37 = 100;
										v20 = random(124);
										v16 = g29;
										if (v20 < 10 * (int32_t) * (char *)(v16 + 157) + 50) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x832c4
											v24 = *(int32_t *)(v16 + 116);
											if (v24 == 1) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x832d0
												if (v24 <= 3) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										v13 = v12;
									}
								}
								// 0x831fc
								v23 = *(int32_t *)(v13 + 36);
								if (function_85a14(*(int32_t *)(v13 + 32), v23, g32, g31) == 0) {
									// 0x8322c
									g34 = g35;
									if (abs() <= 1) {
										// 0x8323c
										g34 = g33;
										if (abs() <= 1) {
											// 0x8324c
											g37 = 100;
											v18 = random(124);
											v14 = g29;
											if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
												// 0x8326c
												*(int32_t *)(v14 + 72) = g30;
												g37 = 2;
												v19 = random(124);
												v15 = g26;
												if (v19 == 0) {
													// 0x83290
													function_7c78c(v15, g27, g28);
													// branch -> 0x83300
												} else {
													// 0x83284
													function_7c64c(v15);
													// branch -> 0x83300
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x832a4
									g37 = 100;
									v20 = random(124);
									v16 = g29;
									if (v20 < 10 * (int32_t) * (char *)(v16 + 157) + 50) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x832c4
										v24 = *(int32_t *)(v16 + 116);
										if (v24 == 1) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x832d0
											if (v24 <= 3) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x83218
									function_7c78c(g26, g27, g28);
									// branch -> 0x83300
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x831c8
						v10 = g29;
						v11 = g36;
						v13 = v10;
						if (v11 >= 5 * (int32_t) * (char *)(v10 + 157) + 10) {
							v12 = v10;
							// 0x831dc
							if (v11 >= 5 * (int32_t) * (char *)(v12 + 157) + 5) {
								// 0x831f0
								if (*(int32_t *)(v12 + 20) != 4) {
									// 0x8322c
									g34 = g35;
									if (abs() <= 1) {
										// 0x8323c
										g34 = g33;
										if (abs() <= 1) {
											// 0x8324c
											g37 = 100;
											v18 = random(124);
											v14 = g29;
											if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
												// 0x8326c
												*(int32_t *)(v14 + 72) = g30;
												g37 = 2;
												v19 = random(124);
												v15 = g26;
												if (v19 == 0) {
													// 0x83290
													function_7c78c(v15, g27, g28);
													// branch -> 0x83300
												} else {
													// 0x83284
													function_7c64c(v15);
													// branch -> 0x83300
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x832a4
									g37 = 100;
									v20 = random(124);
									v16 = g29;
									if (v20 < 10 * (int32_t) * (char *)(v16 + 157) + 50) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x832c4
										v24 = *(int32_t *)(v16 + 116);
										if (v24 == 1) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x832d0
											if (v24 <= 3) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									v13 = v12;
								}
							} else {
								v13 = v12;
							}
						}
						// 0x831fc
						v23 = *(int32_t *)(v13 + 36);
						if (function_85a14(*(int32_t *)(v13 + 32), v23, g32, g31) == 0) {
							// 0x8322c
							g34 = g35;
							if (abs() <= 1) {
								// 0x8323c
								g34 = g33;
								if (abs() <= 1) {
									// 0x8324c
									g37 = 100;
									v18 = random(124);
									v14 = g29;
									if (v18 < 10 * (int32_t) * (char *)(v14 + 157) + 40) {
										// 0x8326c
										*(int32_t *)(v14 + 72) = g30;
										g37 = 2;
										v19 = random(124);
										v15 = g26;
										if (v19 == 0) {
											// 0x83290
											function_7c78c(v15, g27, g28);
											// branch -> 0x83300
										} else {
											// 0x83284
											function_7c64c(v15);
											// branch -> 0x83300
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x832a4
							g37 = 100;
							v20 = random(124);
							v16 = g29;
							if (v20 < 10 * (int32_t) * (char *)(v16 + 157) + 50) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								// 0x832c4
								v24 = *(int32_t *)(v16 + 116);
								if (v24 == 1) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x832d0
									if (v24 <= 3) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x83218
							function_7c78c(g26, g27, g28);
							// branch -> 0x83300
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
	// 0x82fcc
	function_80a28(g26);
	// branch -> 0x83330
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x83344 - 0x8336c
int32_t function_83344(void)
{
	// 0x83344
	g38 = 0;
	return function_82f5c(49, 0);
}

// Address range: 0x8336c - 0x836d8
int32_t function_8336c(int32_t a1)
{
	int32_t v1 = g10; // 0x83370
	g33 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x83378
	g36 = v2;
	int32_t v3 = a1; // 0x83398
	if (a1 >= 200) {
		// 0x8338c
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e50));
		v2 = g36;
		v3 = g33;
		// branch -> 0x83398
	}
	int32_t result = 232 * v3; // 0x83398
	int32_t v4 = result + v2;  // 0x8339c
	g35 = v4;
	int32_t v5;      // ctr
	int32_t v6;      // r5
	int32_t v7;      // r6
	int32_t v8;      // r7
	int32_t v9;      // 0x833f4
	int32_t v10;     // 0x83410
	int32_t v11;     // 0x83414
	int32_t v12;     // 0x83478
	int32_t v13;     // 0x83488
	int32_t v14;     // 0x834c8
	int32_t v15;     // 0x834dc
	int32_t v16;     // 0x834f4
	int32_t v17;     // 0x83514
	int32_t v18;     // 0x8352c
	int32_t v19;     // 0x8354c
	int32_t v20;     // 0x83658
	int32_t v21;     // 0x836a8
	int32_t result5; // 0x836d4
	int32_t v22;     // 0x833fc
	int32_t v23;     // 0x83400
	int32_t v24;     // 0x83414
	int32_t v25;     // 0x8341c
	int32_t v26;     // 0x83420
	int32_t v27;     // 0x83500
	int32_t v28;     // 0x83538
	int32_t result2; // 0x83618
	int32_t result3; // 0x8362c
	int32_t v29;     // 0x83428
	char *v30;       // 0x834a4
	int32_t v31;     // 0x834f0
	int32_t v32;     // 0x83510
	char *v33;       // 0x83638
	char *v34;       // 0x83644
	int32_t v35;     // 0x8366c
	int32_t result4; // 0x836c0
	int32_t v36;     // 0x833b8
	int32_t v37;     // 0x83418
	int32_t v38;     // 0x83424
	int32_t v39;     // 0x834cc
	int32_t v40;     // 0x834e0
	int32_t v41;     // 0x834f4
	int32_t v42;     // 0x8365c
	int32_t v43;     // 0x83438
	int32_t v44;     // 0x83444
	int32_t v45;     // 0x83480
	int32_t v46;     // 0x83490
	int16_t v47;     // 0x83514
	if (*(int32_t *)(v4 + 32) != 1) {
		// 0x833b8
		v36 = *(int32_t *)(v4 + 4);
		if (v36 == 6 || v36 == 11) {
			// 0x836c4
			g10 = v1;
			return result;
		}
		// 0x833cc
		if (v36 >= 1) {
			// 0x833d4
			if (v36 < 4) {
				// 0x836c4
				g10 = v1;
				return result;
			}
		}
		// 0x833dc
		if (__asm_rlwinm_(*(int32_t *)(v4 + 160), 0, 27, 27) == 0) {
			// 0x833ec
			function_7bc44(g33);
			// branch -> 0x833f4
		}
		// 0x833f4
		v9 = g35;
		v22 = __asm_rlwinm(*(int32_t *)(v9 + 160), 0, 21, 21);
		v23 = llvm_ctlz_i32(v22, true);
		g27 = __asm_rlwinm(v23, 27, 24, 31);
		if (*(int32_t *)(v9 + 4) == 4) {
			// 0x833f4
			result5 = v23;
			// branch -> 0x836c4
		} else {
			// 0x83410
			v10 = g35;
			v11 = g36;
			v24 = v11 + 32;
			g31 = v24;
			v37 = *(int32_t *)(v10 + 32);
			v25 = v11 + 36;
			v26 = 232 * *(int32_t *)(v10 + 76);
			v38 = *(int32_t *)(v10 + 36);
			v29 = v11 + v26;
			v43 = *(int32_t *)(v25 + v26);
			g29 = v37 - *(int32_t *)(v29 + 40);
			g28 = v38 - *(int32_t *)(v29 + 44);
			v44 = GetDirection(v37, v38, *(int32_t *)(v24 + v26), v43);
			g32 = v44;
			*(int32_t *)(g35 + 72) = v44;
			g34 = g29;
			if (abs() <= 1) {
				// 0x83460
				g34 = g28;
				if (abs() <= 1) {
					// 0x83470
					if (g27 != 0) {
						// 0x83478
						v12 = g35;
						v45 = *(int32_t *)(g31 + 232 * *(int32_t *)(v12 + 76));
						*(char *)(v12 + 80) = (char)v45;
						v13 = g35;
						v46 = *(int32_t *)(v25 + 232 * *(int32_t *)(v13 + 76));
						*(char *)(v13 + 81) = (char)v46;
						v30 = (char *)(g36 + 232 * *(int32_t *)(g35 + 76) + 164);
						if (*v30 == 0) {
							// 0x834b0
							v7 = 255;
							*v30 = -1;
							v5 = 5;
							v8 = 0;
							v14 = g35;
							v39 = *(int32_t *)(v14 + 32);
							*(int32_t *)(g36 + 232 * *(int32_t *)(v14 + 76) + 172) = v39;
							v15 = g35;
							v40 = *(int32_t *)(v15 + 36);
							*(int32_t *)(g36 + 232 * *(int32_t *)(v15 + 76) + 176) = v40;
							v31 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
							v6 = v31;
							v17 = v31;
							v27 = v8;
							// branch -> 0x834f4
							while (true) {
								// 0x834f4
								v16 = g35;
								v41 = *(int32_t *)(v16 + 32);
								v32 = 224 * v41 - 452 + 2 * (*(int32_t *)(v16 + 36) + v27);
								v47 = *(int16_t *)(v32 + v17);
								if (v47 < 1) {
									v19 = v17;
									v28 = v27;
									v18 = v16;
									goto lab_0x8352c;
								}
								goto lab_0x83520;
							}
						}
						// 0x83614
						result2 = function_7c64c(g33);
						// branch -> 0x836c4
						// 0x836c4
						g10 = v1;
						return result2;
					}
				}
			}
			// 0x83620
			if (g27 != 0) {
				// 0x83628
				result3 = function_80bbc(g33);
				if (result3 != 0) {
					// 0x836c4
					g10 = v1;
					return result3;
				}
			}
			// 0x83638
			v33 = (char *)(g35 + 28);
			*v33 = (char)((int32_t)*v33 + 1);
			v34 = (char *)(g35 + 28);
			if (*v34 >= 9) {
				// 0x83650
				*v34 = 5;
				// branch -> 0x83658
			}
			// 0x83658
			v20 = g33;
			v42 = *(int32_t *)(g23 - 0x77a8);
			v35 = function_802c4(v20, *(int32_t *)(v42 + 0x55ec * v20 + 112));
			if (v35 == 0) {
				// 0x83678
				g30 = (g32 - 1) % 8;
				g31 = 0;
				v21 = 0;
				// branch -> 0x836a8
				while (true) {
					// 0x836a8
					if (v21 == 0) {
						goto lab_0x83688;
					}
					// 0x836b0
					if (v21 != 0) {
						// 0x836b8
						result4 = function_7fe38(g33, g30);
						// branch -> 0x836c4
						// 0x836c4
						g10 = v1;
						return result4;
					}
				}
			} else {
				result5 = v35;
			}
		}
		// 0x836c4
		g10 = v1;
		return result5;
	}
	// 0x833ac
	if (*(int32_t *)(v4 + 36) == 0) {
		// 0x836c4
		g10 = v1;
		return result;
	}
	// 0x833b8
	v36 = *(int32_t *)(v4 + 4);
	if (v36 == 6 || v36 == 11) {
		// 0x836c4
		g10 = v1;
		return result;
	}
	// 0x833cc
	if (v36 >= 1) {
		// 0x833d4
		if (v36 < 4) {
			// 0x836c4
			g10 = v1;
			return result;
		}
	}
	// 0x833dc
	if (__asm_rlwinm_(*(int32_t *)(v4 + 160), 0, 27, 27) == 0) {
		// 0x833ec
		function_7bc44(g33);
		// branch -> 0x833f4
	}
	// 0x833f4
	v9 = g35;
	v22 = __asm_rlwinm(*(int32_t *)(v9 + 160), 0, 21, 21);
	v23 = llvm_ctlz_i32(v22, true);
	g27 = __asm_rlwinm(v23, 27, 24, 31);
	if (*(int32_t *)(v9 + 4) == 4) {
		// 0x833f4
		result5 = v23;
		// branch -> 0x836c4
	} else {
		// 0x83410
		v10 = g35;
		v11 = g36;
		v24 = v11 + 32;
		g31 = v24;
		v37 = *(int32_t *)(v10 + 32);
		v25 = v11 + 36;
		v26 = 232 * *(int32_t *)(v10 + 76);
		v38 = *(int32_t *)(v10 + 36);
		v29 = v11 + v26;
		v43 = *(int32_t *)(v25 + v26);
		g29 = v37 - *(int32_t *)(v29 + 40);
		g28 = v38 - *(int32_t *)(v29 + 44);
		v44 = GetDirection(v37, v38, *(int32_t *)(v24 + v26), v43);
		g32 = v44;
		*(int32_t *)(g35 + 72) = v44;
		g34 = g29;
		if (abs() <= 1) {
			// 0x83460
			g34 = g28;
			if (abs() <= 1) {
				// 0x83470
				if (g27 != 0) {
					// 0x83478
					v12 = g35;
					v45 = *(int32_t *)(g31 + 232 * *(int32_t *)(v12 + 76));
					*(char *)(v12 + 80) = (char)v45;
					v13 = g35;
					v46 = *(int32_t *)(v25 + 232 * *(int32_t *)(v13 + 76));
					*(char *)(v13 + 81) = (char)v46;
					v30 = (char *)(g36 + 232 * *(int32_t *)(g35 + 76) + 164);
					if (*v30 == 0) {
						// 0x834b0
						v7 = 255;
						*v30 = -1;
						v5 = 5;
						v8 = 0;
						v14 = g35;
						v39 = *(int32_t *)(v14 + 32);
						*(int32_t *)(g36 + 232 * *(int32_t *)(v14 + 76) + 172) = v39;
						v15 = g35;
						v40 = *(int32_t *)(v15 + 36);
						*(int32_t *)(g36 + 232 * *(int32_t *)(v15 + 76) + 176) = v40;
						v31 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
						v6 = v31;
						v17 = v31;
						v27 = v8;
						// branch -> 0x834f4
						while (true) {
							// 0x834f4
							v16 = g35;
							v41 = *(int32_t *)(v16 + 32);
							v32 = 224 * v41 - 452 + 2 * (*(int32_t *)(v16 + 36) + v27);
							v47 = *(int16_t *)(v32 + v17);
							v19 = v17;
							v28 = v27;
							v18 = v16;
							if (v47 >= 1) {
							lab_0x83520:
								// 0x83520
								*(char *)(g36 + 232 * (int32_t)v47 + 164) = (char)v7;
								v19 = v6;
								v28 = v8;
								v18 = g35;
								// branch -> 0x8352c
							}
						lab_0x8352c:;
							int32_t v48 = *(int32_t *)(v18 + 32);                               // 0x8352c
							int32_t v49 = 224 * v48 - 228 + 2 * (*(int32_t *)(v18 + 36) + v28); // 0x83548
							uint16_t v50 = *(int16_t *)(v49 + v19);                             // 0x8354c
							int32_t v51 = v50;                                                  // 0x8354c
							int32_t v52 = v19;                                                  // 0x83584
							int32_t v53 = v28;                                                  // 0x83570
							int32_t v54 = v18;                                                  // 0x83564
							if (v50 >= 1) {
								// 0x83558
								*(char *)(g36 + 232 * v51 + 164) = (char)v7;
								v52 = v6;
								v53 = v8;
								v54 = g35;
								// branch -> 0x83564
							}
							int32_t v55 = *(int32_t *)(v54 + 32);                             // 0x83564
							int32_t v56 = 224 * v55 - 4 + 2 * (*(int32_t *)(v54 + 36) + v53); // 0x83580
							uint16_t v57 = *(int16_t *)(v56 + v52);                           // 0x83584
							int32_t v58 = v57;                                                // 0x83584
							if (v57 >= 1) {
								// 0x83590
								*(char *)(g36 + 232 * v58 + 164) = (char)v7;
								v52 = v6;
								v53 = v8;
								v54 = g35;
								// branch -> 0x8359c
							}
							int32_t v59 = *(int32_t *)(v54 + 32);                               // 0x8359c
							int32_t v60 = 224 * v59 + 220 + 2 * (*(int32_t *)(v54 + 36) + v53); // 0x835b8
							uint16_t v61 = *(int16_t *)(v60 + v52);                             // 0x835bc
							int32_t v62 = v61;                                                  // 0x835bc
							if (v61 >= 1) {
								// 0x835c8
								*(char *)(g36 + 232 * v62 + 164) = (char)v7;
								v52 = v6;
								v53 = v8;
								v54 = g35;
								// branch -> 0x835d4
							}
							int32_t v63 = *(int32_t *)(v54 + 32);                               // 0x835d4
							int32_t v64 = 224 * v63 + 444 + 2 * (*(int32_t *)(v54 + 36) + v53); // 0x835f0
							uint16_t v65 = *(int16_t *)(v64 + v52);                             // 0x835f4
							int32_t v66 = v65;                                                  // 0x835f4
							if (v65 >= 1) {
								// 0x83600
								*(char *)(g36 + 232 * v66 + 164) = (char)v7;
								v53 = v8;
								// branch -> 0x8360c
							}
							int32_t v67 = v53 + 1; // 0x8360c
							v8 = v67;
							int32_t v68 = v5 - 1; // 0x83610
							v5 = v68;
							if (v68 != 0) {
								// 0x8360c
								v17 = v6;
								v27 = v67;
								// branch -> 0x834f4
								continue;
							}
						}
					}
					// 0x83614
					result2 = function_7c64c(g33);
					// branch -> 0x836c4
					// 0x836c4
					g10 = v1;
					return result2;
				}
			}
		}
		// 0x83620
		if (g27 != 0) {
			// 0x83628
			result3 = function_80bbc(g33);
			if (result3 != 0) {
				// 0x836c4
				g10 = v1;
				return result3;
			}
		}
		// 0x83638
		v33 = (char *)(g35 + 28);
		*v33 = (char)((int32_t)*v33 + 1);
		v34 = (char *)(g35 + 28);
		if (*v34 >= 9) {
			// 0x83650
			*v34 = 5;
			// branch -> 0x83658
		}
		// 0x83658
		v20 = g33;
		v42 = *(int32_t *)(g23 - 0x77a8);
		v35 = function_802c4(v20, *(int32_t *)(v42 + 0x55ec * v20 + 112));
		if (v35 == 0) {
			// 0x83678
			g30 = (g32 - 1) % 8;
			g31 = 0;
			v21 = 0;
			// branch -> 0x836a8
			int32_t v69; // 0x83698
			while (true) {
				int32_t v70 = v21; // 0x836b0
				if (v21 == 0) {
				lab_0x83688:
					// 0x83688
					g34 = g33;
					g37 = (g30 + 1) % 8;
					v69 = function_8539c();
					int32_t v71 = g31 + 1; // 0x8369c
					g31 = v71;
					if (v71 > 7) {
						// break -> 0x836b0
						break;
					}
					v21 = v69;
					// continue -> 0x836a8
					continue;
				}
				// 0x836b0
				if (v70 != 0) {
					// 0x836b8
					result4 = function_7fe38(g33, g30);
					// branch -> 0x836c4
					// 0x836c4
					g10 = v1;
					return result4;
				}
			}
			// 0x836b0
			if (v69 != 0) {
				// 0x836b8
				result5 = function_7fe38(g33, g30);
				// branch -> 0x836c4
			} else {
				result5 = 0;
			}
		} else {
			result5 = v35;
		}
	}
	// 0x836c4
	g10 = v1;
	return result5;
}

// Address range: 0x836d8 - 0x83af4
int32_t function_836d8(int32_t a1)
{
	g26 = a1;
	g35 = *(int32_t *)(g23 - 0x7588);
	int32_t v1 = a1; // 0x83704
	if (a1 >= 200) {
		// 0x836f8
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e54));
		v1 = g26;
		// branch -> 0x83704
	}
	int32_t v2 = *(int32_t *)(g23 - 0x7754) + 232 * v1; // 0x8370c
	g33 = v2;
	if (*(int32_t *)(v2 + 4) == 0) {
		// 0x8371c
		if (*(char *)(v2 + 164) != 0) {
			int32_t v3 = (int32_t) * (char *)(v2 + 80); // 0x83728
			int32_t v4 = *(int32_t *)(v2 + 32);         // 0x8372c
			int32_t v5 = (int32_t) * (char *)(v2 + 81); // 0x83730
			g31 = v3;
			int32_t v6 = *(int32_t *)(v2 + 36); // 0x83738
			g29 = v4 - v3;
			int32_t v7 = *(int32_t *)(v2 + 176); // 0x83744
			g30 = v5;
			g28 = v6 - v5;
			g27 = GetDirection(v4, v6, *(int32_t *)(v2 + 172), v7);
			if (*(char *)(g33 + 164) != -1) {
				// 0x83764
				MonstCheckDoors(g26);
				// branch -> 0x8376c
			}
			// 0x8376c
			g37 = 100;
			g36 = random(126);
			g34 = g29;
			int32_t result; // r3
			int32_t v8;     // 0x8395c
			int32_t v9;     // 0x83968
			int32_t v10;    // 0x83980
			int32_t v11;    // 0x83994
			int32_t v12;    // 0x839a4
			int32_t v13;    // 0x83a20
			int32_t v14;    // 0x83a4c
			int32_t v15;    // 0x83ab8
			int32_t v16;    // 0x83998
			int32_t v17;    // 0x839b4
			int32_t v18;    // 0x83a48
			int32_t v19;    // 0x83aa4
			int32_t v20;    // 0x83acc
			int32_t v21;    // 0x83980
			int32_t v22;    // 0x839c4
			int32_t v23;    // 0x839d0
			int32_t v24;    // 0x83a5c
			int32_t v25;    // 0x83ad0
			int32_t v26;    // 0x839a8
			int32_t v27;    // 0x839b0
			int32_t v28;    // 0x83a20
			int32_t v29;    // 0x83a4c
			if (abs() <= 1) {
				// 0x8378c
				g34 = g28;
				int32_t v30 = abs(); // 0x83790
				result = v30;
				if (v30 < 2) {
					// 0x8378c
					// branch -> 0x837dc
					// 0x837dc
					*(char *)(g33 + 8) = 1;
					// branch -> 0x83920
					// 0x83920
					if (*(char *)(g33 + 8) == 1) {
						// 0x8392c
						if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
							// 0x8393c
							g34 = g29;
							if (abs() <= 2) {
								// 0x8394c
								g34 = g28;
								if (abs() < 3) {
									// 0x8394c
									// branch -> 0x83970
									// 0x83970
									if (g36 <= 5) {
										// 0x83970
										v10 = g33;
										// branch -> 0x83978
										// 0x83978
										v21 = *(int32_t *)(v10 + 36);
										if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
											// 0x83994
											v11 = g23;
											v16 = 4 * g27;
											v12 = g33;
											v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
											v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
											v17 = v26 + *(int32_t *)(v12 + 32);
											v22 = function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36));
											result = v22;
											if (v22 != 0) {
												// 0x839d0
												v23 = *(int32_t *)(g23 - 0x762c);
												result = v23;
												if (*(int32_t *)v23 <= 199) {
													// 0x839e0
													function_86e9c(v17, g28, g27);
													result = function_7c234(g26, g27);
													// branch -> 0x83ab8
												}
											}
											// 0x83ab8
											v15 = g33;
											if (*(int32_t *)(v15 + 4) == 0) {
												// 0x83ac4
												v20 = 8 * g27 + *(int32_t *)(v15 + 224);
												v25 = *(int32_t *)(v20 + 8);
												result = v25;
												*(int32_t *)(v15 + 84) = v25;
												*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
												// branch -> 0x83ae0
											}
											// 0x83ae0
											return result;
										}
									}
									// 0x83a00
									g34 = g29;
									if (abs() <= 1) {
										// 0x83a10
										g34 = g28;
										if (abs() <= 1) {
											// 0x83a20
											v13 = g33;
											v28 = (int32_t) * (char *)(v13 + 157);
											result = v28;
											if (g36 < v28 + 20) {
												// 0x83a30
												*(int32_t *)(v13 + 72) = g27;
												result = function_7c64c(g26);
												// branch -> 0x83ab8
											}
											// 0x83ab8
											v15 = g33;
											if (*(int32_t *)(v15 + 4) == 0) {
												// 0x83ac4
												v20 = 8 * g27 + *(int32_t *)(v15 + 224);
												v25 = *(int32_t *)(v20 + 8);
												result = v25;
												*(int32_t *)(v15 + 84) = v25;
												*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
												// branch -> 0x83ae0
											}
											// 0x83ae0
											return result;
										}
									}
									// 0x83a40
									g37 = 100;
									v18 = random(-127);
									v14 = g33;
									v29 = (int32_t) * (char *)(v14 + 157);
									if (v18 < v29 + 25) {
										// 0x83a8c
										result = function_802c4(g26, g27);
										// branch -> 0x83ab8
										// 0x83ab8
										v15 = g33;
										if (*(int32_t *)(v15 + 4) == 0) {
											// 0x83ac4
											v20 = 8 * g27 + *(int32_t *)(v15 + 224);
											v25 = *(int32_t *)(v20 + 8);
											result = v25;
											*(int32_t *)(v15 + 84) = v25;
											*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
											// branch -> 0x83ae0
										}
										// 0x83ae0
										return result;
									}
									// 0x83a5c
									v24 = *(int32_t *)(v14 + 116);
									if (v24 == 1) {
										// 0x83a74
										if (*(int32_t *)(v14 + 120) == 0) {
											// 0x83a80
											if (v18 < v29 + 75) {
												// 0x83a8c
												result = function_802c4(g26, g27);
												// branch -> 0x83ab8
												// 0x83ab8
												v15 = g33;
												if (*(int32_t *)(v15 + 4) == 0) {
													// 0x83ac4
													v20 = 8 * g27 + *(int32_t *)(v15 + 224);
													v25 = *(int32_t *)(v20 + 8);
													result = v25;
													*(int32_t *)(v15 + 84) = v25;
													*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
													// branch -> 0x83ae0
												}
												// 0x83ae0
												return result;
											}
										}
									} else {
										// 0x83a68
										if (v24 <= 3) {
											// 0x83a74
											if (*(int32_t *)(v14 + 120) == 0) {
												// 0x83a80
												if (v18 < v29 + 75) {
													// 0x83a8c
													result = function_802c4(g26, g27);
													// branch -> 0x83ab8
													// 0x83ab8
													v15 = g33;
													if (*(int32_t *)(v15 + 4) == 0) {
														// 0x83ac4
														v20 = 8 * g27 + *(int32_t *)(v15 + 224);
														v25 = *(int32_t *)(v20 + 8);
														result = v25;
														*(int32_t *)(v15 + 84) = v25;
														*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
														// branch -> 0x83ae0
													}
													// 0x83ae0
													return result;
												}
											}
										}
									}
									// 0x83a9c
									g37 = 10;
									v19 = random(-126);
									result = function_7c204(g26, v19 + 10);
									// branch -> 0x83ab8
									// 0x83ab8
									v15 = g33;
									if (*(int32_t *)(v15 + 4) == 0) {
										// 0x83ac4
										v20 = 8 * g27 + *(int32_t *)(v15 + 224);
										v25 = *(int32_t *)(v20 + 8);
										result = v25;
										*(int32_t *)(v15 + 84) = v25;
										*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
										// branch -> 0x83ae0
									}
									// 0x83ae0
									return result;
								}
							}
							// 0x8395c
							v8 = g33;
							v9 = g36;
							if (v9 < 4 * (int32_t) * (char *)(v8 + 157) + 35) {
								v10 = v8;
								// 0x83978
								v21 = *(int32_t *)(v10 + 36);
								if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
									// 0x83994
									v11 = g23;
									v16 = 4 * g27;
									v12 = g33;
									v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
									v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
									v17 = v26 + *(int32_t *)(v12 + 32);
									v22 = function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36));
									result = v22;
									if (v22 != 0) {
										// 0x839d0
										v23 = *(int32_t *)(g23 - 0x762c);
										result = v23;
										if (*(int32_t *)v23 <= 199) {
											// 0x839e0
											function_86e9c(v17, g28, g27);
											result = function_7c234(g26, g27);
											// branch -> 0x83ab8
										}
									}
									// 0x83ab8
									v15 = g33;
									if (*(int32_t *)(v15 + 4) == 0) {
										// 0x83ac4
										v20 = 8 * g27 + *(int32_t *)(v15 + 224);
										v25 = *(int32_t *)(v20 + 8);
										result = v25;
										*(int32_t *)(v15 + 84) = v25;
										*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
										// branch -> 0x83ae0
									}
									// 0x83ae0
									return result;
								}
							} else {
								// 0x83970
								if (v9 <= 5) {
									// 0x83970
									v10 = g33;
									// branch -> 0x83978
									// 0x83978
									v21 = *(int32_t *)(v10 + 36);
									if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
										// 0x83994
										v11 = g23;
										v16 = 4 * g27;
										v12 = g33;
										v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
										v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
										v17 = v26 + *(int32_t *)(v12 + 32);
										v22 = function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36));
										result = v22;
										if (v22 != 0) {
											// 0x839d0
											v23 = *(int32_t *)(g23 - 0x762c);
											result = v23;
											if (*(int32_t *)v23 <= 199) {
												// 0x839e0
												function_86e9c(v17, g28, g27);
												result = function_7c234(g26, g27);
												// branch -> 0x83ab8
											}
										}
										// 0x83ab8
										v15 = g33;
										if (*(int32_t *)(v15 + 4) == 0) {
											// 0x83ac4
											v20 = 8 * g27 + *(int32_t *)(v15 + 224);
											v25 = *(int32_t *)(v20 + 8);
											result = v25;
											*(int32_t *)(v15 + 84) = v25;
											*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
											// branch -> 0x83ae0
										}
										// 0x83ae0
										return result;
									}
								}
							}
							// 0x83a00
							g34 = g29;
							if (abs() <= 1) {
								// 0x83a10
								g34 = g28;
								if (abs() <= 1) {
									// 0x83a20
									v13 = g33;
									v28 = (int32_t) * (char *)(v13 + 157);
									result = v28;
									if (g36 < v28 + 20) {
										// 0x83a30
										*(int32_t *)(v13 + 72) = g27;
										result = function_7c64c(g26);
										// branch -> 0x83ab8
									}
									// 0x83ab8
									v15 = g33;
									if (*(int32_t *)(v15 + 4) == 0) {
										// 0x83ac4
										v20 = 8 * g27 + *(int32_t *)(v15 + 224);
										v25 = *(int32_t *)(v20 + 8);
										result = v25;
										*(int32_t *)(v15 + 84) = v25;
										*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
										// branch -> 0x83ae0
									}
									// 0x83ae0
									return result;
								}
							}
							// 0x83a40
							g37 = 100;
							v18 = random(-127);
							v14 = g33;
							v29 = (int32_t) * (char *)(v14 + 157);
							if (v18 < v29 + 25) {
								// 0x83a8c
								result = function_802c4(g26, g27);
								// branch -> 0x83ab8
								// 0x83ab8
								v15 = g33;
								if (*(int32_t *)(v15 + 4) == 0) {
									// 0x83ac4
									v20 = 8 * g27 + *(int32_t *)(v15 + 224);
									v25 = *(int32_t *)(v20 + 8);
									result = v25;
									*(int32_t *)(v15 + 84) = v25;
									*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
									// branch -> 0x83ae0
								}
								// 0x83ae0
								return result;
							}
							// 0x83a5c
							v24 = *(int32_t *)(v14 + 116);
							if (v24 == 1) {
								// 0x83a74
								if (*(int32_t *)(v14 + 120) == 0) {
									// 0x83a80
									if (v18 < v29 + 75) {
										// 0x83a8c
										result = function_802c4(g26, g27);
										// branch -> 0x83ab8
										// 0x83ab8
										v15 = g33;
										if (*(int32_t *)(v15 + 4) == 0) {
											// 0x83ac4
											v20 = 8 * g27 + *(int32_t *)(v15 + 224);
											v25 = *(int32_t *)(v20 + 8);
											result = v25;
											*(int32_t *)(v15 + 84) = v25;
											*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
											// branch -> 0x83ae0
										}
										// 0x83ae0
										return result;
									}
								}
							} else {
								// 0x83a68
								if (v24 <= 3) {
									// 0x83a74
									if (*(int32_t *)(v14 + 120) == 0) {
										// 0x83a80
										if (v18 < v29 + 75) {
											// 0x83a8c
											result = function_802c4(g26, g27);
											// branch -> 0x83ab8
											// 0x83ab8
											v15 = g33;
											if (*(int32_t *)(v15 + 4) == 0) {
												// 0x83ac4
												v20 = 8 * g27 + *(int32_t *)(v15 + 224);
												v25 = *(int32_t *)(v20 + 8);
												result = v25;
												*(int32_t *)(v15 + 84) = v25;
												*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
												// branch -> 0x83ae0
											}
											// 0x83ae0
											return result;
										}
									}
								}
							}
							// 0x83a9c
							g37 = 10;
							v19 = random(-126);
							result = function_7c204(g26, v19 + 10);
							// branch -> 0x83ab8
							// 0x83ab8
							v15 = g33;
							if (*(int32_t *)(v15 + 4) == 0) {
								// 0x83ac4
								v20 = 8 * g27 + *(int32_t *)(v15 + 224);
								v25 = *(int32_t *)(v20 + 8);
								result = v25;
								*(int32_t *)(v15 + 84) = v25;
								*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
								// branch -> 0x83ae0
							}
							// 0x83ae0
							return result;
						}
						// 0x83a00
						g34 = g29;
						if (abs() <= 1) {
							// 0x83a10
							g34 = g28;
							if (abs() <= 1) {
								// 0x83a20
								v13 = g33;
								v28 = (int32_t) * (char *)(v13 + 157);
								result = v28;
								if (g36 < v28 + 20) {
									// 0x83a30
									*(int32_t *)(v13 + 72) = g27;
									result = function_7c64c(g26);
									// branch -> 0x83ab8
								}
								// 0x83ab8
								v15 = g33;
								if (*(int32_t *)(v15 + 4) == 0) {
									// 0x83ac4
									v20 = 8 * g27 + *(int32_t *)(v15 + 224);
									v25 = *(int32_t *)(v20 + 8);
									result = v25;
									*(int32_t *)(v15 + 84) = v25;
									*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
									// branch -> 0x83ae0
								}
								// 0x83ae0
								return result;
							}
						}
						// 0x83a40
						g37 = 100;
						v18 = random(-127);
						v14 = g33;
						v29 = (int32_t) * (char *)(v14 + 157);
						if (v18 >= v29 + 25) {
							// 0x83a5c
							v24 = *(int32_t *)(v14 + 116);
							if (v24 == 1) {
								// 0x83a74
								if (*(int32_t *)(v14 + 120) == 0) {
									// 0x83a80
									if (v18 < v29 + 75) {
										// 0x83a8c
										result = function_802c4(g26, g27);
										// branch -> 0x83ab8
										// 0x83ab8
										v15 = g33;
										if (*(int32_t *)(v15 + 4) == 0) {
											// 0x83ac4
											v20 = 8 * g27 + *(int32_t *)(v15 + 224);
											v25 = *(int32_t *)(v20 + 8);
											result = v25;
											*(int32_t *)(v15 + 84) = v25;
											*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
											// branch -> 0x83ae0
										}
										// 0x83ae0
										return result;
									}
								}
							} else {
								// 0x83a68
								if (v24 <= 3) {
									// 0x83a74
									if (*(int32_t *)(v14 + 120) == 0) {
										// 0x83a80
										if (v18 < v29 + 75) {
											// 0x83a8c
											result = function_802c4(g26, g27);
											// branch -> 0x83ab8
											// 0x83ab8
											v15 = g33;
											if (*(int32_t *)(v15 + 4) == 0) {
												// 0x83ac4
												v20 = 8 * g27 + *(int32_t *)(v15 + 224);
												v25 = *(int32_t *)(v20 + 8);
												result = v25;
												*(int32_t *)(v15 + 84) = v25;
												*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
												// branch -> 0x83ae0
											}
											// 0x83ae0
											return result;
										}
									}
								}
							}
							// 0x83a9c
							g37 = 10;
							v19 = random(-126);
							result = function_7c204(g26, v19 + 10);
							// branch -> 0x83ab8
							// 0x83ab8
							v15 = g33;
							if (*(int32_t *)(v15 + 4) == 0) {
								// 0x83ac4
								v20 = 8 * g27 + *(int32_t *)(v15 + 224);
								v25 = *(int32_t *)(v20 + 8);
								result = v25;
								*(int32_t *)(v15 + 84) = v25;
								*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
								// branch -> 0x83ae0
							}
							// 0x83ae0
							return result;
						}
						// 0x83a8c
						result = function_802c4(g26, g27);
						// branch -> 0x83ab8
					}
					// 0x83ab8
					v15 = g33;
					if (*(int32_t *)(v15 + 4) == 0) {
						// 0x83ac4
						v20 = 8 * g27 + *(int32_t *)(v15 + 224);
						v25 = *(int32_t *)(v20 + 8);
						result = v25;
						*(int32_t *)(v15 + 84) = v25;
						*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
						// branch -> 0x83ae0
					}
					// 0x83ae0
					return result;
				}
			}
			int32_t v31 = g33; // 0x8379c
			if (*(char *)(v31 + 164) == -1) {
				int32_t v32 = 112 * g31; // 0x837ac
				g32 = v32;
				int32_t v33 = *(int32_t *)(v31 + 36);                           // 0x837b0
				int32_t v34 = *(int32_t *)g35;                                  // 0x837b4
				char v35 = *(char *)(v34 + v33 + 112 * *(int32_t *)(v31 + 32)); // 0x837c8
				if (v35 == *(char *)(g30 + v32 + v34)) {
					int32_t v36 = v31; // 0x83838
					int32_t v37;       // r21
					int32_t v38;
					int32_t v39;  // 0x838b0
					int32_t v40;  // 0x83850
					int32_t *v41; // 0x83884
					int32_t v42;  // 0x838b8
					int32_t v43;  // 0x8390c
					uint32_t v44; // 0x83884
					int32_t v45;  // 0x838c0
					char v46;     // 0x838cc
					if (*(char *)(v31 + 8) != 4) {
						// 0x837f4
						g34 = g29;
						if (abs() > 2) {
							// 0x83814
							g37 = 4;
							if (random(127) == 0) {
								// 0x83814
								v36 = g33;
								// branch -> 0x83828
								// 0x83828
								v40 = v36;
								if (*(char *)(v36 + 8) != 4) {
									// 0x83834
									*(int32_t *)(v36 + 12) = 0;
									g37 = 2;
									*(int32_t *)(g33 + 16) = random(-128);
									v40 = g33;
									// branch -> 0x8384c
								}
								// 0x8384c
								*(char *)(v40 + 8) = 4;
								g34 = g28;
								g25 = abs();
								g34 = g29;
								if (abs() > g25) {
									// 0x83870
									g34 = g29;
									v38 = abs();
									// branch -> 0x83884
								} else {
									// 0x8387c
									g34 = g28;
									v38 = abs();
									// branch -> 0x83884
								}
								// 0x83884
								v41 = (int32_t *)(g33 + 12);
								v44 = *v41;
								*v41 = v44 + 1;
								if (v44 >= 2 * v38) {
									// 0x8389c
									g34 = g26;
									g37 = g27;
									if (function_8539c() != 0) {
										// 0x8389c
										// branch -> 0x838e0
										// 0x838e0
										*(char *)(g33 + 8) = 1;
										// branch -> 0x83920
										// 0x83920
										if (*(char *)(g33 + 8) == 1) {
											// 0x8392c
											if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
												// 0x8393c
												g34 = g29;
												if (abs() <= 2) {
													// 0x8394c
													g34 = g28;
													if (abs() < 3) {
														// 0x8394c
														// branch -> 0x83970
														// 0x83970
														if (g36 <= 5) {
															// 0x83970
															v10 = g33;
															// branch -> 0x83978
															// 0x83978
															v21 = *(int32_t *)(v10 + 36);
															if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
																// 0x83994
																v11 = g23;
																v16 = 4 * g27;
																v12 = g33;
																v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
																v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
																v17 = v26 + *(int32_t *)(v12 + 32);
																v22 = function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36));
																result = v22;
																if (v22 != 0) {
																	// 0x839d0
																	v23 = *(int32_t *)(g23 - 0x762c);
																	result = v23;
																	if (*(int32_t *)v23 <= 199) {
																		// 0x839e0
																		function_86e9c(v17, g28, g27);
																		result = function_7c234(g26, g27);
																		// branch -> 0x83ab8
																	}
																}
																// 0x83ab8
																v15 = g33;
																if (*(int32_t *)(v15 + 4) == 0) {
																	// 0x83ac4
																	v20 = 8 * g27 + *(int32_t *)(v15 + 224);
																	v25 = *(int32_t *)(v20 + 8);
																	result = v25;
																	*(int32_t *)(v15 + 84) = v25;
																	*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
																	// branch -> 0x83ae0
																}
																// 0x83ae0
																return result;
															}
														}
														// 0x83a00
														g34 = g29;
														if (abs() <= 1) {
															// 0x83a10
															g34 = g28;
															if (abs() <= 1) {
																// 0x83a20
																v13 = g33;
																v28 = (int32_t) * (char *)(v13 + 157);
																result = v28;
																if (g36 < v28 + 20) {
																	// 0x83a30
																	*(int32_t *)(v13 + 72) = g27;
																	result = function_7c64c(g26);
																	// branch -> 0x83ab8
																}
																// 0x83ab8
																v15 = g33;
																if (*(int32_t *)(v15 + 4) == 0) {
																	// 0x83ac4
																	v20 = 8 * g27 + *(int32_t *)(v15 + 224);
																	v25 = *(int32_t *)(v20 + 8);
																	result = v25;
																	*(int32_t *)(v15 + 84) = v25;
																	*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
																	// branch -> 0x83ae0
																}
																// 0x83ae0
																return result;
															}
														}
														// 0x83a40
														g37 = 100;
														v18 = random(-127);
														v14 = g33;
														v29 = (int32_t) * (char *)(v14 + 157);
														if (v18 < v29 + 25) {
															// 0x83a8c
															result = function_802c4(g26, g27);
															// branch -> 0x83ab8
															// 0x83ab8
															v15 = g33;
															if (*(int32_t *)(v15 + 4) == 0) {
																// 0x83ac4
																v20 = 8 * g27 + *(int32_t *)(v15 + 224);
																v25 = *(int32_t *)(v20 + 8);
																result = v25;
																*(int32_t *)(v15 + 84) = v25;
																*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
																// branch -> 0x83ae0
															}
															// 0x83ae0
															return result;
														}
														// 0x83a5c
														v24 = *(int32_t *)(v14 + 116);
														if (v24 == 1) {
															// 0x83a74
															if (*(int32_t *)(v14 + 120) == 0) {
																// 0x83a80
																if (v18 < v29 + 75) {
																	// 0x83a8c
																	result = function_802c4(g26, g27);
																	// branch -> 0x83ab8
																	// 0x83ab8
																	v15 = g33;
																	if (*(int32_t *)(v15 + 4) == 0) {
																		// 0x83ac4
																		v20 = 8 * g27 + *(int32_t *)(v15 + 224);
																		v25 = *(int32_t *)(v20 + 8);
																		result = v25;
																		*(int32_t *)(v15 + 84) = v25;
																		*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
																		// branch -> 0x83ae0
																	}
																	// 0x83ae0
																	return result;
																}
															}
														} else {
															// 0x83a68
															if (v24 <= 3) {
																// 0x83a74
																if (*(int32_t *)(v14 + 120) == 0) {
																	// 0x83a80
																	if (v18 < v29 + 75) {
																		// 0x83a8c
																		result = function_802c4(g26, g27);
																		// branch -> 0x83ab8
																		// 0x83ab8
																		v15 = g33;
																		if (*(int32_t *)(v15 + 4) == 0) {
																			// 0x83ac4
																			v20 = 8 * g27 + *(int32_t *)(v15 + 224);
																			v25 = *(int32_t *)(v20 + 8);
																			result = v25;
																			*(int32_t *)(v15 + 84) = v25;
																			*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
																			// branch -> 0x83ae0
																		}
																		// 0x83ae0
																		return result;
																	}
																}
															}
														}
														// 0x83a9c
														g37 = 10;
														v19 = random(-126);
														result = function_7c204(g26, v19 + 10);
														// branch -> 0x83ab8
														// 0x83ab8
														v15 = g33;
														if (*(int32_t *)(v15 + 4) == 0) {
															// 0x83ac4
															v20 = 8 * g27 + *(int32_t *)(v15 + 224);
															v25 = *(int32_t *)(v20 + 8);
															result = v25;
															*(int32_t *)(v15 + 84) = v25;
															*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
															// branch -> 0x83ae0
														}
														// 0x83ae0
														return result;
													}
												}
												// 0x8395c
												v8 = g33;
												v9 = g36;
												if (v9 < 4 * (int32_t) * (char *)(v8 + 157) + 35) {
													v10 = v8;
													// 0x83978
													v21 = *(int32_t *)(v10 + 36);
													if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
														// 0x83994
														v11 = g23;
														v16 = 4 * g27;
														v12 = g33;
														v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
														v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
														v17 = v26 + *(int32_t *)(v12 + 32);
														v22 = function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36));
														result = v22;
														if (v22 != 0) {
															// 0x839d0
															v23 = *(int32_t *)(g23 - 0x762c);
															result = v23;
															if (*(int32_t *)v23 <= 199) {
																// 0x839e0
																function_86e9c(v17, g28, g27);
																result = function_7c234(g26, g27);
																// branch -> 0x83ab8
															}
														}
														// 0x83ab8
														v15 = g33;
														if (*(int32_t *)(v15 + 4) == 0) {
															// 0x83ac4
															v20 = 8 * g27 + *(int32_t *)(v15 + 224);
															v25 = *(int32_t *)(v20 + 8);
															result = v25;
															*(int32_t *)(v15 + 84) = v25;
															*(int32_t *)(g33 + 88) = *(int32_t *)(v20 + 12);
															// branch -> 0x83ae0
														}
														// 0x83ae0
														return result;
													}
												} else {
													// 0x83970
													if (v9 <= 5) {
														// 0x83970
														v10 = g33;
														// branch -> 0x83978
														// 0x83978
														v21 = *(int32_t *)(v10 + 36);
														if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
															// 0x83994
															v11 = g23;
															v16 = 4 * g27;
															v12 = g33;
															v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
															v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
															v17 = v26 + *(int32_t *)(v12 + 32);
															v37 = v17;
															if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
																// 0x839d0
																if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
																	// 0x839e0
																	function_86e9c(v37, g28, g27);
																	function_7c234(g26, g27);
																	// branch -> 0x83ab8
																}
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
												}
												// 0x83a00
												g34 = g29;
												if (abs() <= 1) {
													// 0x83a10
													g34 = g28;
													if (abs() <= 1) {
														// 0x83a20
														v13 = g33;
														if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
															// 0x83a30
															*(int32_t *)(v13 + 72) = g27;
															function_7c64c(g26);
															// branch -> 0x83ab8
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x83a40
												g37 = 100;
												v18 = random(-127);
												v14 = g33;
												v29 = (int32_t) * (char *)(v14 + 157);
												if (v18 >= v29 + 25) {
													// 0x83a5c
													v24 = *(int32_t *)(v14 + 116);
													if (v24 == 1) {
														// 0x83a74
														if (*(int32_t *)(v14 + 120) == 0) {
															// 0x83a80
															if (v18 < v29 + 75) {
																// 0x83a8c
																function_802c4(g26, g27);
																// branch -> 0x83ab8
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													} else {
														// 0x83a68
														if (v24 <= 3) {
															// 0x83a74
															if (*(int32_t *)(v14 + 120) == 0) {
																// 0x83a80
																if (v18 < v29 + 75) {
																	// 0x83a8c
																	function_802c4(g26, g27);
																	// branch -> 0x83ab8
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
														}
													}
													// 0x83a9c
													g37 = 10;
													v19 = random(-126);
													function_7c204(g26, v19 + 10);
													// branch -> 0x83ab8
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// 0x83a8c
												function_802c4(g26, g27);
												// branch -> 0x83ab8
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// 0x83a00
											g34 = g29;
											if (abs() <= 1) {
												// 0x83a10
												g34 = g28;
												if (abs() <= 1) {
													// 0x83a20
													v13 = g33;
													if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
														// 0x83a30
														*(int32_t *)(v13 + 72) = g27;
														function_7c64c(g26);
														// branch -> 0x83ab8
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x83a40
											g37 = 100;
											v18 = random(-127);
											v14 = g33;
											v29 = (int32_t) * (char *)(v14 + 157);
											if (v18 >= v29 + 25) {
												// 0x83a5c
												v24 = *(int32_t *)(v14 + 116);
												if (v24 == 1) {
													// 0x83a74
													if (*(int32_t *)(v14 + 120) == 0) {
														// 0x83a80
														if (v18 < v29 + 75) {
															// 0x83a8c
															function_802c4(g26, g27);
															// branch -> 0x83ab8
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
												} else {
													// 0x83a68
													if (v24 <= 3) {
														// 0x83a74
														if (*(int32_t *)(v14 + 120) == 0) {
															// 0x83a80
															if (v18 < v29 + 75) {
																// 0x83a8c
																function_802c4(g26, g27);
																// branch -> 0x83ab8
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													}
												}
												// 0x83a9c
												g37 = 10;
												v19 = random(-126);
												function_7c204(g26, v19 + 10);
												// branch -> 0x83ab8
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// 0x83a8c
											function_802c4(g26, g27);
											// branch -> 0x83ab8
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x838b0
								v39 = g33;
								v42 = *(int32_t *)g35;
								v45 = *(int32_t *)(v39 + 36);
								v46 = *(char *)(v45 + 112 * *(int32_t *)(v39 + 32) + v42);
								if (v46 == *(char *)(v42 + g30 + g32)) {
									// 0x838ec
									if (function_80718(g26, g27, (int32_t *)(v39 + 16)) == 0) {
										// 0x83904
										g37 = 10;
										v43 = random(125);
										function_7c204(g26, v43 + 10);
										// branch -> 0x83920
									}
								} else {
									// 0x838e0
									*(char *)(v39 + 8) = 1;
									// branch -> 0x83920
								}
								// 0x83920
								if (*(char *)(g33 + 8) == 1) {
									// 0x8392c
									if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
										// 0x8393c
										g34 = g29;
										if (abs() <= 2) {
											// 0x8394c
											g34 = g28;
											if (abs() < 3) {
												// 0x8394c
												// branch -> 0x83970
												// 0x83970
												if (g36 <= 5) {
													// 0x83970
													v10 = g33;
													// branch -> 0x83978
													// 0x83978
													v21 = *(int32_t *)(v10 + 36);
													if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
														// 0x83994
														v11 = g23;
														v16 = 4 * g27;
														v12 = g33;
														v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
														v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
														v17 = v26 + *(int32_t *)(v12 + 32);
														v37 = v17;
														if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
															// 0x839d0
															if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
																// 0x839e0
																function_86e9c(v37, g28, g27);
																function_7c234(g26, g27);
																// branch -> 0x83ab8
															}
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x83a00
												g34 = g29;
												if (abs() <= 1) {
													// 0x83a10
													g34 = g28;
													if (abs() <= 1) {
														// 0x83a20
														v13 = g33;
														if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
															// 0x83a30
															*(int32_t *)(v13 + 72) = g27;
															function_7c64c(g26);
															// branch -> 0x83ab8
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x83a40
												g37 = 100;
												v18 = random(-127);
												v14 = g33;
												v29 = (int32_t) * (char *)(v14 + 157);
												if (v18 >= v29 + 25) {
													// 0x83a5c
													v24 = *(int32_t *)(v14 + 116);
													if (v24 == 1) {
														// 0x83a74
														if (*(int32_t *)(v14 + 120) == 0) {
															// 0x83a80
															if (v18 < v29 + 75) {
																// 0x83a8c
																function_802c4(g26, g27);
																// branch -> 0x83ab8
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													} else {
														// 0x83a68
														if (v24 <= 3) {
															// 0x83a74
															if (*(int32_t *)(v14 + 120) == 0) {
																// 0x83a80
																if (v18 < v29 + 75) {
																	// 0x83a8c
																	function_802c4(g26, g27);
																	// branch -> 0x83ab8
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
														}
													}
													// 0x83a9c
													g37 = 10;
													v19 = random(-126);
													function_7c204(g26, v19 + 10);
													// branch -> 0x83ab8
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// 0x83a8c
												function_802c4(g26, g27);
												// branch -> 0x83ab8
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x8395c
										v8 = g33;
										v9 = g36;
										if (v9 < 4 * (int32_t) * (char *)(v8 + 157) + 35) {
											v10 = v8;
											// 0x83978
											v21 = *(int32_t *)(v10 + 36);
											if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
												// 0x83994
												v11 = g23;
												v16 = 4 * g27;
												v12 = g33;
												v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
												v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
												v17 = v26 + *(int32_t *)(v12 + 32);
												v37 = v17;
												if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
													// 0x839d0
													if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
														// 0x839e0
														function_86e9c(v37, g28, g27);
														function_7c234(g26, g27);
														// branch -> 0x83ab8
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										} else {
											// 0x83970
											if (v9 <= 5) {
												// 0x83970
												v10 = g33;
												// branch -> 0x83978
												// 0x83978
												v21 = *(int32_t *)(v10 + 36);
												if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
													// 0x83994
													v11 = g23;
													v16 = 4 * g27;
													v12 = g33;
													v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
													v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
													v17 = v26 + *(int32_t *)(v12 + 32);
													v37 = v17;
													if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
														// 0x839d0
														if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
															// 0x839e0
															function_86e9c(v37, g28, g27);
															function_7c234(g26, g27);
															// branch -> 0x83ab8
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										}
										// 0x83a00
										g34 = g29;
										if (abs() <= 1) {
											// 0x83a10
											g34 = g28;
											if (abs() <= 1) {
												// 0x83a20
												v13 = g33;
												if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
													// 0x83a30
													*(int32_t *)(v13 + 72) = g27;
													function_7c64c(g26);
													// branch -> 0x83ab8
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x83a40
										g37 = 100;
										v18 = random(-127);
										v14 = g33;
										v29 = (int32_t) * (char *)(v14 + 157);
										if (v18 >= v29 + 25) {
											// 0x83a5c
											v24 = *(int32_t *)(v14 + 116);
											if (v24 == 1) {
												// 0x83a74
												if (*(int32_t *)(v14 + 120) == 0) {
													// 0x83a80
													if (v18 < v29 + 75) {
														// 0x83a8c
														function_802c4(g26, g27);
														// branch -> 0x83ab8
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
											} else {
												// 0x83a68
												if (v24 <= 3) {
													// 0x83a74
													if (*(int32_t *)(v14 + 120) == 0) {
														// 0x83a80
														if (v18 < v29 + 75) {
															// 0x83a8c
															function_802c4(g26, g27);
															// branch -> 0x83ab8
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
												}
											}
											// 0x83a9c
											g37 = 10;
											v19 = random(-126);
											function_7c204(g26, v19 + 10);
											// branch -> 0x83ab8
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// 0x83a8c
										function_802c4(g26, g27);
										// branch -> 0x83ab8
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// 0x83a00
									g34 = g29;
									if (abs() <= 1) {
										// 0x83a10
										g34 = g28;
										if (abs() <= 1) {
											// 0x83a20
											v13 = g33;
											if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
												// 0x83a30
												*(int32_t *)(v13 + 72) = g27;
												function_7c64c(g26);
												// branch -> 0x83ab8
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x83a40
									g37 = 100;
									v18 = random(-127);
									v14 = g33;
									v29 = (int32_t) * (char *)(v14 + 157);
									if (v18 >= v29 + 25) {
										// 0x83a5c
										v24 = *(int32_t *)(v14 + 116);
										if (v24 == 1) {
											// 0x83a74
											if (*(int32_t *)(v14 + 120) == 0) {
												// 0x83a80
												if (v18 < v29 + 75) {
													// 0x83a8c
													function_802c4(g26, g27);
													// branch -> 0x83ab8
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										} else {
											// 0x83a68
											if (v24 <= 3) {
												// 0x83a74
												if (*(int32_t *)(v14 + 120) == 0) {
													// 0x83a80
													if (v18 < v29 + 75) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
											}
										}
										// 0x83a9c
										g37 = 10;
										v19 = random(-126);
										function_7c204(g26, v19 + 10);
										// branch -> 0x83ab8
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						} else {
							// 0x83804
							g34 = g28;
							if (abs() >= 3) {
								// 0x83814
								g37 = 4;
								if (random(127) == 0) {
									// 0x83814
									v36 = g33;
									// branch -> 0x83828
									// 0x83828
									v40 = v36;
									if (*(char *)(v36 + 8) != 4) {
										// 0x83834
										*(int32_t *)(v36 + 12) = 0;
										g37 = 2;
										*(int32_t *)(g33 + 16) = random(-128);
										v40 = g33;
										// branch -> 0x8384c
									}
									// 0x8384c
									*(char *)(v40 + 8) = 4;
									g34 = g28;
									g25 = abs();
									g34 = g29;
									if (abs() > g25) {
										// 0x83870
										g34 = g29;
										v38 = abs();
										// branch -> 0x83884
									} else {
										// 0x8387c
										g34 = g28;
										v38 = abs();
										// branch -> 0x83884
									}
									// 0x83884
									v41 = (int32_t *)(g33 + 12);
									v44 = *v41;
									*v41 = v44 + 1;
									if (v44 >= 2 * v38) {
										// 0x8389c
										g34 = g26;
										g37 = g27;
										if (function_8539c() != 0) {
											// 0x8389c
											// branch -> 0x838e0
											// 0x838e0
											*(char *)(g33 + 8) = 1;
											// branch -> 0x83920
											// 0x83920
											if (*(char *)(g33 + 8) == 1) {
												// 0x8392c
												if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
													// 0x8393c
													g34 = g29;
													if (abs() <= 2) {
														// 0x8394c
														g34 = g28;
														if (abs() < 3) {
															// 0x8394c
															// branch -> 0x83970
															// 0x83970
															if (g36 <= 5) {
																// 0x83970
																v10 = g33;
																// branch -> 0x83978
																// 0x83978
																v21 = *(int32_t *)(v10 + 36);
																if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
																	// 0x83994
																	v11 = g23;
																	v16 = 4 * g27;
																	v12 = g33;
																	v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
																	v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
																	v17 = v26 + *(int32_t *)(v12 + 32);
																	v37 = v17;
																	if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
																		// 0x839d0
																		if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
																			// 0x839e0
																			function_86e9c(v37, g28, g27);
																			function_7c234(g26, g27);
																			// branch -> 0x83ab8
																		}
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
															// 0x83a00
															g34 = g29;
															if (abs() <= 1) {
																// 0x83a10
																g34 = g28;
																if (abs() <= 1) {
																	// 0x83a20
																	v13 = g33;
																	if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
																		// 0x83a30
																		*(int32_t *)(v13 + 72) = g27;
																		function_7c64c(g26);
																		// branch -> 0x83ab8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
															// 0x83a40
															g37 = 100;
															v18 = random(-127);
															v14 = g33;
															v29 = (int32_t) * (char *)(v14 + 157);
															if (v18 >= v29 + 25) {
																// 0x83a5c
																v24 = *(int32_t *)(v14 + 116);
																if (v24 == 1) {
																	// 0x83a74
																	if (*(int32_t *)(v14 + 120) == 0) {
																		// 0x83a80
																		if (v18 < v29 + 75) {
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		}
																	}
																} else {
																	// 0x83a68
																	if (v24 <= 3) {
																		// 0x83a74
																		if (*(int32_t *)(v14 + 120) == 0) {
																			// 0x83a80
																			if (v18 < v29 + 75) {
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			}
																		}
																	}
																}
																// 0x83a9c
																g37 = 10;
																v19 = random(-126);
																function_7c204(g26, v19 + 10);
																// branch -> 0x83ab8
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x8395c
													v8 = g33;
													v9 = g36;
													if (v9 < 4 * (int32_t) * (char *)(v8 + 157) + 35) {
														v10 = v8;
														// 0x83978
														v21 = *(int32_t *)(v10 + 36);
														if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
															// 0x83994
															v11 = g23;
															v16 = 4 * g27;
															v12 = g33;
															v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
															v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
															v17 = v26 + *(int32_t *)(v12 + 32);
															v37 = v17;
															if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
																// 0x839d0
																if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
																	// 0x839e0
																	function_86e9c(v37, g28, g27);
																	function_7c234(g26, g27);
																	// branch -> 0x83ab8
																}
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													} else {
														// 0x83970
														if (v9 <= 5) {
															// 0x83970
															v10 = g33;
															// branch -> 0x83978
															// 0x83978
															v21 = *(int32_t *)(v10 + 36);
															if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
																// 0x83994
																v11 = g23;
																v16 = 4 * g27;
																v12 = g33;
																v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
																v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
																v17 = v26 + *(int32_t *)(v12 + 32);
																v37 = v17;
																if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
																	// 0x839d0
																	if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
																		// 0x839e0
																		function_86e9c(v37, g28, g27);
																		function_7c234(g26, g27);
																		// branch -> 0x83ab8
																	}
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													}
													// 0x83a00
													g34 = g29;
													if (abs() <= 1) {
														// 0x83a10
														g34 = g28;
														if (abs() <= 1) {
															// 0x83a20
															v13 = g33;
															if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
																// 0x83a30
																*(int32_t *)(v13 + 72) = g27;
																function_7c64c(g26);
																// branch -> 0x83ab8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x83a40
													g37 = 100;
													v18 = random(-127);
													v14 = g33;
													v29 = (int32_t) * (char *)(v14 + 157);
													if (v18 >= v29 + 25) {
														// 0x83a5c
														v24 = *(int32_t *)(v14 + 116);
														if (v24 == 1) {
															// 0x83a74
															if (*(int32_t *)(v14 + 120) == 0) {
																// 0x83a80
																if (v18 < v29 + 75) {
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
														} else {
															// 0x83a68
															if (v24 <= 3) {
																// 0x83a74
																if (*(int32_t *)(v14 + 120) == 0) {
																	// 0x83a80
																	if (v18 < v29 + 75) {
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																}
															}
														}
														// 0x83a9c
														g37 = 10;
														v19 = random(-126);
														function_7c204(g26, v19 + 10);
														// branch -> 0x83ab8
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// 0x83a00
												g34 = g29;
												if (abs() <= 1) {
													// 0x83a10
													g34 = g28;
													if (abs() <= 1) {
														// 0x83a20
														v13 = g33;
														if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
															// 0x83a30
															*(int32_t *)(v13 + 72) = g27;
															function_7c64c(g26);
															// branch -> 0x83ab8
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x83a40
												g37 = 100;
												v18 = random(-127);
												v14 = g33;
												v29 = (int32_t) * (char *)(v14 + 157);
												if (v18 >= v29 + 25) {
													// 0x83a5c
													v24 = *(int32_t *)(v14 + 116);
													if (v24 == 1) {
														// 0x83a74
														if (*(int32_t *)(v14 + 120) == 0) {
															// 0x83a80
															if (v18 < v29 + 75) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													} else {
														// 0x83a68
														if (v24 <= 3) {
															// 0x83a74
															if (*(int32_t *)(v14 + 120) == 0) {
																// 0x83a80
																if (v18 < v29 + 75) {
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
														}
													}
													// 0x83a9c
													g37 = 10;
													v19 = random(-126);
													function_7c204(g26, v19 + 10);
													// branch -> 0x83ab8
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x838b0
									v39 = g33;
									v42 = *(int32_t *)g35;
									v45 = *(int32_t *)(v39 + 36);
									v46 = *(char *)(v45 + 112 * *(int32_t *)(v39 + 32) + v42);
									if (v46 == *(char *)(v42 + g30 + g32)) {
										// 0x838ec
										if (function_80718(g26, g27, (int32_t *)(v39 + 16)) == 0) {
											// 0x83904
											g37 = 10;
											v43 = random(125);
											function_7c204(g26, v43 + 10);
											// branch -> 0x83920
										}
									} else {
										// 0x838e0
										*(char *)(v39 + 8) = 1;
										// branch -> 0x83920
									}
									// 0x83920
									if (*(char *)(g33 + 8) == 1) {
										// 0x8392c
										if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
											// 0x8393c
											g34 = g29;
											if (abs() <= 2) {
												// 0x8394c
												g34 = g28;
												if (abs() < 3) {
													// 0x8394c
													// branch -> 0x83970
													// 0x83970
													if (g36 <= 5) {
														// 0x83970
														v10 = g33;
														// branch -> 0x83978
														// 0x83978
														v21 = *(int32_t *)(v10 + 36);
														if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
															// 0x83994
															v11 = g23;
															v16 = 4 * g27;
															v12 = g33;
															v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
															v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
															v17 = v26 + *(int32_t *)(v12 + 32);
															v37 = v17;
															if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
																// 0x839d0
																if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
																	// 0x839e0
																	function_86e9c(v37, g28, g27);
																	function_7c234(g26, g27);
																	// branch -> 0x83ab8
																}
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x83a00
													g34 = g29;
													if (abs() <= 1) {
														// 0x83a10
														g34 = g28;
														if (abs() <= 1) {
															// 0x83a20
															v13 = g33;
															if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
																// 0x83a30
																*(int32_t *)(v13 + 72) = g27;
																function_7c64c(g26);
																// branch -> 0x83ab8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0x83a40
													g37 = 100;
													v18 = random(-127);
													v14 = g33;
													v29 = (int32_t) * (char *)(v14 + 157);
													if (v18 >= v29 + 25) {
														// 0x83a5c
														v24 = *(int32_t *)(v14 + 116);
														if (v24 == 1) {
															// 0x83a74
															if (*(int32_t *)(v14 + 120) == 0) {
																// 0x83a80
																if (v18 < v29 + 75) {
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
														} else {
															// 0x83a68
															if (v24 <= 3) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
														// 0x83a9c
														g37 = 10;
														v19 = random(-126);
														function_7c204(g26, v19 + 10);
														// branch -> 0x83ab8
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x8395c
											v8 = g33;
											v9 = g36;
											if (v9 < 4 * (int32_t) * (char *)(v8 + 157) + 35) {
												v10 = v8;
												// 0x83978
												v21 = *(int32_t *)(v10 + 36);
												if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
													// 0x83994
													v11 = g23;
													v16 = 4 * g27;
													v12 = g33;
													v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
													v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
													v17 = v26 + *(int32_t *)(v12 + 32);
													v37 = v17;
													if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
														// 0x839d0
														if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
															// 0x839e0
															function_86e9c(v37, g28, g27);
															function_7c234(g26, g27);
															// branch -> 0x83ab8
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											} else {
												// 0x83970
												if (v9 <= 5) {
													// 0x83970
													v10 = g33;
													// branch -> 0x83978
													// 0x83978
													v21 = *(int32_t *)(v10 + 36);
													if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
														// 0x83994
														v11 = g23;
														v16 = 4 * g27;
														v12 = g33;
														v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
														v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
														v17 = v26 + *(int32_t *)(v12 + 32);
														v37 = v17;
														if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
															// 0x839d0
															if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
																// 0x839e0
																function_86e9c(v37, g28, g27);
																function_7c234(g26, g27);
																// branch -> 0x83ab8
															}
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
											}
											// 0x83a00
											g34 = g29;
											if (abs() <= 1) {
												// 0x83a10
												g34 = g28;
												if (abs() <= 1) {
													// 0x83a20
													v13 = g33;
													if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
														// 0x83a30
														*(int32_t *)(v13 + 72) = g27;
														function_7c64c(g26);
														// branch -> 0x83ab8
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x83a40
											g37 = 100;
											v18 = random(-127);
											v14 = g33;
											if (v18 >= (int32_t) * (char *)(v14 + 157) + 25) {
												// 0x83a5c
												v24 = *(int32_t *)(v14 + 116);
												if (v24 == 1) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x83a68
													if (v24 <= 3) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x83a9c
												g37 = 10;
												v19 = random(-126);
												function_7c204(g26, v19 + 10);
												// branch -> 0x83ab8
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// 0x83a00
										g34 = g29;
										if (abs() <= 1) {
											// 0x83a10
											g34 = g28;
											if (abs() <= 1) {
												// 0x83a20
												v13 = g33;
												if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
													// 0x83a30
													*(int32_t *)(v13 + 72) = g27;
													function_7c64c(g26);
													// branch -> 0x83ab8
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x83a40
										g37 = 100;
										v18 = random(-127);
										v14 = g33;
										if (v18 >= (int32_t) * (char *)(v14 + 157) + 25) {
											// 0x83a5c
											v24 = *(int32_t *)(v14 + 116);
											if (v24 == 1) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x83a68
												if (v24 <= 3) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x83a9c
											g37 = 10;
											v19 = random(-126);
											function_7c204(g26, v19 + 10);
											// branch -> 0x83ab8
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// 0x83920
						if (*(char *)(g33 + 8) == 1) {
							// 0x8392c
							if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
								// 0x8393c
								g34 = g29;
								if (abs() <= 2) {
									// 0x8394c
									g34 = g28;
									if (abs() < 3) {
										// 0x8394c
										// branch -> 0x83970
										// 0x83970
										if (g36 <= 5) {
											// 0x83970
											v10 = g33;
											// branch -> 0x83978
											// 0x83978
											v21 = *(int32_t *)(v10 + 36);
											if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
												// 0x83994
												v11 = g23;
												v16 = 4 * g27;
												v12 = g33;
												v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
												v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
												v17 = v26 + *(int32_t *)(v12 + 32);
												v37 = v17;
												if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
													// 0x839d0
													if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
														// 0x839e0
														function_86e9c(v37, g28, g27);
														function_7c234(g26, g27);
														// branch -> 0x83ab8
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x83a00
										g34 = g29;
										if (abs() <= 1) {
											// 0x83a10
											g34 = g28;
											if (abs() <= 1) {
												// 0x83a20
												v13 = g33;
												if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
													// 0x83a30
													*(int32_t *)(v13 + 72) = g27;
													function_7c64c(g26);
													// branch -> 0x83ab8
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x83a40
										g37 = 100;
										v18 = random(-127);
										v14 = g33;
										if (v18 >= (int32_t) * (char *)(v14 + 157) + 25) {
											// 0x83a5c
											v24 = *(int32_t *)(v14 + 116);
											if (v24 == 1) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x83a68
												if (v24 <= 3) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x83a9c
											g37 = 10;
											v19 = random(-126);
											function_7c204(g26, v19 + 10);
											// branch -> 0x83ab8
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x8395c
								v8 = g33;
								v9 = g36;
								if (v9 < 4 * (int32_t) * (char *)(v8 + 157) + 35) {
									v10 = v8;
									// 0x83978
									v21 = *(int32_t *)(v10 + 36);
									if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
										// 0x83994
										v11 = g23;
										v16 = 4 * g27;
										v12 = g33;
										v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
										v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
										v17 = v26 + *(int32_t *)(v12 + 32);
										v37 = v17;
										if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
											// 0x839d0
											if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
												// 0x839e0
												function_86e9c(v37, g28, g27);
												function_7c234(g26, g27);
												// branch -> 0x83ab8
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								} else {
									// 0x83970
									if (v9 <= 5) {
										// 0x83970
										v10 = g33;
										// branch -> 0x83978
										// 0x83978
										v21 = *(int32_t *)(v10 + 36);
										if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
											// 0x83994
											v11 = g23;
											v16 = 4 * g27;
											v12 = g33;
											v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
											v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
											v17 = v26 + *(int32_t *)(v12 + 32);
											v37 = v17;
											if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
												// 0x839d0
												if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
													// 0x839e0
													function_86e9c(v37, g28, g27);
													function_7c234(g26, g27);
													// branch -> 0x83ab8
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// 0x83a00
								g34 = g29;
								if (abs() <= 1) {
									// 0x83a10
									g34 = g28;
									if (abs() <= 1) {
										// 0x83a20
										v13 = g33;
										if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
											// 0x83a30
											*(int32_t *)(v13 + 72) = g27;
											function_7c64c(g26);
											// branch -> 0x83ab8
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x83a40
								g37 = 100;
								v18 = random(-127);
								v14 = g33;
								if (v18 >= (int32_t) * (char *)(v14 + 157) + 25) {
									// 0x83a5c
									v24 = *(int32_t *)(v14 + 116);
									if (v24 == 1) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x83a68
										if (v24 <= 3) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x83a9c
									g37 = 10;
									v19 = random(-126);
									function_7c204(g26, v19 + 10);
									// branch -> 0x83ab8
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x83a00
							g34 = g29;
							if (abs() <= 1) {
								// 0x83a10
								g34 = g28;
								if (abs() <= 1) {
									// 0x83a20
									v13 = g33;
									if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
										// 0x83a30
										*(int32_t *)(v13 + 72) = g27;
										function_7c64c(g26);
										// branch -> 0x83ab8
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x83a40
							g37 = 100;
							v18 = random(-127);
							v14 = g33;
							if (v18 >= (int32_t) * (char *)(v14 + 157) + 25) {
								// 0x83a5c
								v24 = *(int32_t *)(v14 + 116);
								if (v24 == 1) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x83a68
									if (v24 <= 3) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x83a9c
								g37 = 10;
								v19 = random(-126);
								function_7c204(g26, v19 + 10);
								// branch -> 0x83ab8
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x83828
					v40 = v36;
					if (*(char *)(v36 + 8) != 4) {
						// 0x83834
						*(int32_t *)(v36 + 12) = 0;
						g37 = 2;
						*(int32_t *)(g33 + 16) = random(-128);
						v40 = g33;
						// branch -> 0x8384c
					}
					// 0x8384c
					*(char *)(v40 + 8) = 4;
					g34 = g28;
					g25 = abs();
					g34 = g29;
					if (abs() > g25) {
						// 0x83870
						g34 = g29;
						v38 = abs();
						// branch -> 0x83884
					} else {
						// 0x8387c
						g34 = g28;
						v38 = abs();
						// branch -> 0x83884
					}
					// 0x83884
					v41 = (int32_t *)(g33 + 12);
					v44 = *v41;
					*v41 = v44 + 1;
					if (v44 >= 2 * v38) {
						// 0x8389c
						g34 = g26;
						g37 = g27;
						if (function_8539c() != 0) {
							// 0x8389c
							// branch -> 0x838e0
							// 0x838e0
							*(char *)(g33 + 8) = 1;
							// branch -> 0x83920
							// 0x83920
							if (*(char *)(g33 + 8) == 1) {
								// 0x8392c
								if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
									// 0x8393c
									g34 = g29;
									if (abs() <= 2) {
										// 0x8394c
										g34 = g28;
										if (abs() < 3) {
											// 0x8394c
											// branch -> 0x83970
											// 0x83970
											if (g36 <= 5) {
												// 0x83970
												v10 = g33;
												// branch -> 0x83978
												// 0x83978
												v21 = *(int32_t *)(v10 + 36);
												if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
													// 0x83994
													v11 = g23;
													v16 = 4 * g27;
													v12 = g33;
													v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
													v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
													v17 = v26 + *(int32_t *)(v12 + 32);
													v37 = v17;
													if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
														// 0x839d0
														if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
															// 0x839e0
															function_86e9c(v37, g28, g27);
															function_7c234(g26, g27);
															// branch -> 0x83ab8
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x83a00
											g34 = g29;
											if (abs() <= 1) {
												// 0x83a10
												g34 = g28;
												if (abs() <= 1) {
													// 0x83a20
													v13 = g33;
													if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
														// 0x83a30
														*(int32_t *)(v13 + 72) = g27;
														function_7c64c(g26);
														// branch -> 0x83ab8
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x83a40
											g37 = 100;
											v18 = random(-127);
											v14 = g33;
											if (v18 >= (int32_t) * (char *)(v14 + 157) + 25) {
												// 0x83a5c
												v24 = *(int32_t *)(v14 + 116);
												if (v24 == 1) {
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x83a68
													if (v24 <= 3) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0x83a9c
												g37 = 10;
												v19 = random(-126);
												function_7c204(g26, v19 + 10);
												// branch -> 0x83ab8
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x8395c
									v8 = g33;
									v9 = g36;
									if (v9 < 4 * (int32_t) * (char *)(v8 + 157) + 35) {
										v10 = v8;
										// 0x83978
										v21 = *(int32_t *)(v10 + 36);
										if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
											// 0x83994
											v11 = g23;
											v16 = 4 * g27;
											v12 = g33;
											v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
											v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
											v17 = v26 + *(int32_t *)(v12 + 32);
											v37 = v17;
											if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
												// 0x839d0
												if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
													// 0x839e0
													function_86e9c(v37, g28, g27);
													function_7c234(g26, g27);
													// branch -> 0x83ab8
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									} else {
										// 0x83970
										if (v9 <= 5) {
											// 0x83970
											v10 = g33;
											// branch -> 0x83978
											// 0x83978
											v21 = *(int32_t *)(v10 + 36);
											if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
												// 0x83994
												v11 = g23;
												v16 = 4 * g27;
												v12 = g33;
												v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
												v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
												v17 = v26 + *(int32_t *)(v12 + 32);
												v37 = v17;
												if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
													// 0x839d0
													if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
														// 0x839e0
														function_86e9c(v37, g28, g27);
														function_7c234(g26, g27);
														// branch -> 0x83ab8
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// 0x83a00
									g34 = g29;
									if (abs() <= 1) {
										// 0x83a10
										g34 = g28;
										if (abs() <= 1) {
											// 0x83a20
											v13 = g33;
											if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
												// 0x83a30
												*(int32_t *)(v13 + 72) = g27;
												function_7c64c(g26);
												// branch -> 0x83ab8
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x83a40
									g37 = 100;
									v18 = random(-127);
									v14 = g33;
									if (v18 >= (int32_t) * (char *)(v14 + 157) + 25) {
										// 0x83a5c
										v24 = *(int32_t *)(v14 + 116);
										if (v24 == 1) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x83a68
											if (v24 <= 3) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x83a9c
										g37 = 10;
										v19 = random(-126);
										function_7c204(g26, v19 + 10);
										// branch -> 0x83ab8
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x83a00
								g34 = g29;
								if (abs() <= 1) {
									// 0x83a10
									g34 = g28;
									if (abs() <= 1) {
										// 0x83a20
										v13 = g33;
										if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
											// 0x83a30
											*(int32_t *)(v13 + 72) = g27;
											function_7c64c(g26);
											// branch -> 0x83ab8
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x83a40
								g37 = 100;
								v18 = random(-127);
								v14 = g33;
								if (v18 >= (int32_t) * (char *)(v14 + 157) + 25) {
									// 0x83a5c
									v24 = *(int32_t *)(v14 + 116);
									if (v24 == 1) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x83a68
										if (v24 <= 3) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x83a9c
									g37 = 10;
									v19 = random(-126);
									function_7c204(g26, v19 + 10);
									// branch -> 0x83ab8
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x838b0
					v39 = g33;
					v42 = *(int32_t *)g35;
					v45 = *(int32_t *)(v39 + 36);
					v46 = *(char *)(v45 + 112 * *(int32_t *)(v39 + 32) + v42);
					if (v46 == *(char *)(v42 + g30 + g32)) {
						// 0x838ec
						if (function_80718(g26, g27, (int32_t *)(v39 + 16)) == 0) {
							// 0x83904
							g37 = 10;
							v43 = random(125);
							function_7c204(g26, v43 + 10);
							// branch -> 0x83920
						}
					} else {
						// 0x838e0
						*(char *)(v39 + 8) = 1;
						// branch -> 0x83920
					}
					// 0x83920
					if (*(char *)(g33 + 8) == 1) {
						// 0x8392c
						if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
							// 0x8393c
							g34 = g29;
							if (abs() <= 2) {
								// 0x8394c
								g34 = g28;
								if (abs() < 3) {
									// 0x8394c
									// branch -> 0x83970
									// 0x83970
									if (g36 <= 5) {
										// 0x83970
										v10 = g33;
										// branch -> 0x83978
										// 0x83978
										v21 = *(int32_t *)(v10 + 36);
										if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
											// 0x83994
											v11 = g23;
											v16 = 4 * g27;
											v12 = g33;
											v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
											v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
											v17 = v26 + *(int32_t *)(v12 + 32);
											v37 = v17;
											if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
												// 0x839d0
												if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
													// 0x839e0
													function_86e9c(v37, g28, g27);
													function_7c234(g26, g27);
													// branch -> 0x83ab8
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x83a00
									g34 = g29;
									if (abs() <= 1) {
										// 0x83a10
										g34 = g28;
										if (abs() <= 1) {
											// 0x83a20
											v13 = g33;
											if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
												// 0x83a30
												*(int32_t *)(v13 + 72) = g27;
												function_7c64c(g26);
												// branch -> 0x83ab8
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x83a40
									g37 = 100;
									v18 = random(-127);
									v14 = g33;
									if (v18 >= (int32_t) * (char *)(v14 + 157) + 25) {
										// 0x83a5c
										v24 = *(int32_t *)(v14 + 116);
										if (v24 == 1) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x83a68
											if (v24 <= 3) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x83a9c
										g37 = 10;
										v19 = random(-126);
										function_7c204(g26, v19 + 10);
										// branch -> 0x83ab8
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x8395c
							v8 = g33;
							v9 = g36;
							if (v9 < 4 * (int32_t) * (char *)(v8 + 157) + 35) {
								v10 = v8;
								// 0x83978
								v21 = *(int32_t *)(v10 + 36);
								if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
									// 0x83994
									v11 = g23;
									v16 = 4 * g27;
									v12 = g33;
									v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
									v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
									v17 = v26 + *(int32_t *)(v12 + 32);
									v37 = v17;
									if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
										// 0x839d0
										if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
											// 0x839e0
											function_86e9c(v37, g28, g27);
											function_7c234(g26, g27);
											// branch -> 0x83ab8
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							} else {
								// 0x83970
								if (v9 <= 5) {
									// 0x83970
									v10 = g33;
									// branch -> 0x83978
									// 0x83978
									v21 = *(int32_t *)(v10 + 36);
									if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
										// 0x83994
										v11 = g23;
										v16 = 4 * g27;
										v12 = g33;
										v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
										v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
										v17 = v26 + *(int32_t *)(v12 + 32);
										v37 = v17;
										if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
											// 0x839d0
											if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
												// 0x839e0
												function_86e9c(v37, g28, g27);
												function_7c234(g26, g27);
												// branch -> 0x83ab8
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// 0x83a00
							g34 = g29;
							if (abs() <= 1) {
								// 0x83a10
								g34 = g28;
								if (abs() <= 1) {
									// 0x83a20
									v13 = g33;
									if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
										// 0x83a30
										*(int32_t *)(v13 + 72) = g27;
										function_7c64c(g26);
										// branch -> 0x83ab8
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x83a40
							g37 = 100;
							v18 = random(-127);
							v14 = g33;
							if (v18 >= (int32_t) * (char *)(v14 + 157) + 25) {
								// 0x83a5c
								v24 = *(int32_t *)(v14 + 116);
								if (v24 == 1) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x83a68
									if (v24 <= 3) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x83a9c
								g37 = 10;
								v19 = random(-126);
								function_7c204(g26, v19 + 10);
								// branch -> 0x83ab8
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// 0x83a00
						g34 = g29;
						if (abs() <= 1) {
							// 0x83a10
							g34 = g28;
							if (abs() <= 1) {
								// 0x83a20
								v13 = g33;
								if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
									// 0x83a30
									*(int32_t *)(v13 + 72) = g27;
									function_7c64c(g26);
									// branch -> 0x83ab8
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x83a40
						g37 = 100;
						v18 = random(-127);
						v14 = g33;
						if (v18 >= (int32_t) * (char *)(v14 + 157) + 25) {
							// 0x83a5c
							v24 = *(int32_t *)(v14 + 116);
							if (v24 == 1) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								// 0x83a68
								if (v24 <= 3) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x83a9c
							g37 = 10;
							v19 = random(-126);
							function_7c204(g26, v19 + 10);
							// branch -> 0x83ab8
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x837dc
			*(char *)(v31 + 8) = 1;
			// branch -> 0x83920
			// 0x83920
			if (*(char *)(g33 + 8) == 1) {
				// 0x8392c
				if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
					// 0x8393c
					g34 = g29;
					if (abs() <= 2) {
						// 0x8394c
						g34 = g28;
						if (abs() < 3) {
							// 0x8394c
							// branch -> 0x83970
							// 0x83970
							if (g36 <= 5) {
								// 0x83970
								v10 = g33;
								// branch -> 0x83978
								// 0x83978
								v21 = *(int32_t *)(v10 + 36);
								if (function_85a14(*(int32_t *)(v10 + 32), v21, g31, g30) != 0) {
									// 0x83994
									v11 = g23;
									v16 = 4 * g27;
									v12 = g33;
									v26 = *(int32_t *)(v16 + *(int32_t *)(v11 - 0x71ec));
									v27 = *(int32_t *)(*(int32_t *)(v11 - 0x71f0) + v16);
									v17 = v26 + *(int32_t *)(v12 + 32);
									if (function_86824(g26, v17, v27 + *(int32_t *)(v12 + 36)) != 0) {
										// 0x839d0
										if (*(int32_t *)*(int32_t *)(g23 - 0x762c) <= 199) {
											// 0x839e0
											function_86e9c(v17, g28, g27);
											function_7c234(g26, g27);
											// branch -> 0x83ab8
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x83a00
							g34 = g29;
							if (abs() <= 1) {
								// 0x83a10
								g34 = g28;
								if (abs() <= 1) {
									// 0x83a20
									v13 = g33;
									if (g36 < (int32_t) * (char *)(v13 + 157) + 20) {
										// 0x83a30
										*(int32_t *)(v13 + 72) = g27;
										function_7c64c(g26);
										// branch -> 0x83ab8
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x83a40
							g37 = 100;
							v18 = random(-127);
							v14 = g33;
							if (v18 >= (int32_t) * (char *)(v14 + 157) + 25) {
								// 0x83a5c
								v24 = *(int32_t *)(v14 + 116);
								if (v24 == 1) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x83a68
									if (v24 <= 3) {
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x83a9c
								g37 = 10;
								v19 = random(-126);
								function_7c204(g26, v19 + 10);
								// branch -> 0x83ab8
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x8395c
					v9 = g36;
					if (v9 < 4 * (int32_t) * (char *)(g33 + 157) + 35) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x83970
						if (v9 <= 5) {
							// 0x83970
							// branch -> 0x83978
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
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

// Address range: 0x83af4 - 0x83ee0
int32_t function_83af4(int32_t a1)
{
	g28 = a1;
	int32_t v1 = a1; // 0x83b1c
	if (a1 >= 200) {
		// 0x83b10
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e58));
		v1 = g28;
		// branch -> 0x83b1c
	}
	int32_t v2 = *(int32_t *)(g23 - 0x7754) + 232 * v1; // 0x83b24
	g35 = v2;
	if (*(int32_t *)(v2 + 4) == 0) {
		// 0x83b34
		if (*(char *)(v2 + 164) != 0) {
			int32_t v3 = (int32_t) * (char *)(v2 + 80); // 0x83b40
			int32_t v4 = *(int32_t *)(v2 + 32);         // 0x83b44
			int32_t v5 = (int32_t) * (char *)(v2 + 81); // 0x83b48
			g33 = v3;
			int32_t v6 = *(int32_t *)(v2 + 36); // 0x83b50
			g31 = v4 - v3;
			int32_t v7 = *(int32_t *)(v2 + 176); // 0x83b5c
			g32 = v5;
			g30 = v6 - v5;
			g29 = GetDirection(v4, v6, *(int32_t *)(v2 + 172), v7);
			if (*(char *)(g35 + 164) != -1) {
				// 0x83b7c
				MonstCheckDoors(g28);
				// branch -> 0x83b84
			}
			// 0x83b84
			g37 = 100;
			g36 = random(-125);
			g34 = g31;
			int32_t result; // r3
			int32_t v8;     // 0x83d18
			int32_t v9;     // 0x83d6c
			int32_t v10;    // 0x83d8c
			int32_t v11;    // 0x83db8
			int32_t v12;    // 0x83e00
			int32_t v13;    // 0x83e30
			int32_t v14;    // 0x83ea0
			int32_t v15;    // 0x83dbc
			int32_t v16;    // 0x83e04
			int32_t v17;    // 0x83e34
			int32_t v18;    // 0x83dc0
			int32_t v19;    // 0x83e2c
			int32_t v20;    // 0x83e8c
			int32_t v21;    // 0x83eb8
			int32_t v22;    // 0x83d34
			int32_t v23;    // 0x83d3c
			int32_t v24;    // 0x83d6c
			int32_t v25;    // 0x83d74
			int32_t v26;    // 0x83d78
			int32_t v27;    // 0x83db8
			int32_t v28;    // 0x83e44
			int32_t v29;    // 0x83ebc
			int32_t v30;    // 0x83d80
			if (abs() <= 1) {
				// 0x83ba4
				g34 = g30;
				int32_t v31 = abs(); // 0x83ba8
				result = v31;
				if (v31 <= 1) {
					// 0x83bb4
					*(char *)(g35 + 8) = 1;
					// branch -> 0x83cec
					// 0x83cec
					if (*(char *)(g35 + 8) == 1) {
						// 0x83cf8
						g34 = g31;
						if (abs() > 4) {
							// 0x83d18
							v8 = g35;
							if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 43) {
								// 0x83d2c
								v22 = *(int32_t *)(v8 + 32);
								v23 = *(int32_t *)(v8 + 36);
								if (function_85a54(*(int32_t *)(g23 - 0x70c4), g28, v22, v23, g33, g32) != 0) {
									// 0x83d50
									g13 = g28;
									v9 = g35;
									v24 = *(int32_t *)(v9 + 76);
									v25 = *(int32_t *)(v9 + 32);
									v26 = *(int32_t *)(v9 + 36);
									v30 = AddMissile(v25, v26, g33, g32, g29, 20, 0x1000000 * v24 / 0x1000000, 0, 0);
									result = v30;
									if (v30 != -1) {
										// 0x83d8c
										v10 = g35;
										v11 = v10;
										if (*(int32_t *)(*(int32_t *)(v10 + 228) + 20) != 0) {
											// 0x83d9c
											PlayEffect(g28, 3);
											v11 = g35;
											// branch -> 0x83da8
										}
										// 0x83da8
										v27 = *(int32_t *)(v11 + 36);
										v15 = 224 * *(int32_t *)(v11 + 32);
										result = v15;
										v18 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
										*(int16_t *)(2 * v27 + v15 + v18) = (int16_t)(0x10000 * (-1 - g28) / 0x10000);
										*(int32_t *)(g35 + 4) = 14;
										// branch -> 0x83ea0
									}
									// 0x83ea0
									v14 = g35;
									if (*(int32_t *)(v14 + 4) == 0) {
										// 0x83eac
										v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
										v29 = *(int32_t *)(v21 + 8);
										result = v29;
										*(int32_t *)(v14 + 84) = v29;
										*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
										// branch -> 0x83ecc
									}
									// 0x83ecc
									return result;
								}
							}
						} else {
							// 0x83d08
							g34 = g30;
							if (abs() >= 5) {
								// 0x83d18
								v8 = g35;
								if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 43) {
									// 0x83d2c
									v22 = *(int32_t *)(v8 + 32);
									v23 = *(int32_t *)(v8 + 36);
									if (function_85a54(*(int32_t *)(g23 - 0x70c4), g28, v22, v23, g33, g32) != 0) {
										// 0x83d50
										g13 = g28;
										v9 = g35;
										v24 = *(int32_t *)(v9 + 76);
										v25 = *(int32_t *)(v9 + 32);
										v26 = *(int32_t *)(v9 + 36);
										v30 = AddMissile(v25, v26, g33, g32, g29, 20, 0x1000000 * v24 / 0x1000000, 0, 0);
										result = v30;
										if (v30 != -1) {
											// 0x83d8c
											v10 = g35;
											v11 = v10;
											if (*(int32_t *)(*(int32_t *)(v10 + 228) + 20) != 0) {
												// 0x83d9c
												PlayEffect(g28, 3);
												v11 = g35;
												// branch -> 0x83da8
											}
											// 0x83da8
											v27 = *(int32_t *)(v11 + 36);
											v15 = 224 * *(int32_t *)(v11 + 32);
											result = v15;
											v18 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
											*(int16_t *)(2 * v27 + v15 + v18) = (int16_t)(0x10000 * (-1 - g28) / 0x10000);
											*(int32_t *)(g35 + 4) = 14;
											// branch -> 0x83ea0
										}
										// 0x83ea0
										v14 = g35;
										if (*(int32_t *)(v14 + 4) == 0) {
											// 0x83eac
											v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
											v29 = *(int32_t *)(v21 + 8);
											result = v29;
											*(int32_t *)(v14 + 84) = v29;
											*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
											// branch -> 0x83ecc
										}
										// 0x83ecc
										return result;
									}
								}
							}
						}
						// 0x83de0
						g34 = g31;
						if (abs() <= 1) {
							// 0x83df0
							g34 = g30;
							if (abs() <= 1) {
								// 0x83e00
								v12 = g35;
								v16 = 2 * (int32_t) * (char *)(v12 + 157);
								result = v16;
								if (g36 < v16 + 28) {
									// 0x83e14
									*(int32_t *)(v12 + 72) = g29;
									result = function_7c64c(g28);
									// branch -> 0x83ea0
								}
								// 0x83ea0
								v14 = g35;
								if (*(int32_t *)(v14 + 4) == 0) {
									// 0x83eac
									v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
									v29 = *(int32_t *)(v21 + 8);
									result = v29;
									*(int32_t *)(v14 + 84) = v29;
									*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
									// branch -> 0x83ecc
								}
								// 0x83ecc
								return result;
							}
						}
						// 0x83e24
						g37 = 100;
						v19 = random(-122);
						v13 = g35;
						v17 = 2 * (int32_t) * (char *)(v13 + 157);
						if (v19 >= v17 + 33) {
							// 0x83e44
							v28 = *(int32_t *)(v13 + 116);
							if (v28 == 1) {
								// 0x83e5c
								if (*(int32_t *)(v13 + 120) == 0) {
									// 0x83e68
									if (v19 < v17 + 83) {
										// 0x83e74
										result = function_802c4(g28, g29);
										// branch -> 0x83ea0
										// 0x83ea0
										v14 = g35;
										if (*(int32_t *)(v14 + 4) == 0) {
											// 0x83eac
											v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
											v29 = *(int32_t *)(v21 + 8);
											result = v29;
											*(int32_t *)(v14 + 84) = v29;
											*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
											// branch -> 0x83ecc
										}
										// 0x83ecc
										return result;
									}
								}
							} else {
								// 0x83e50
								if (v28 <= 3) {
									// 0x83e5c
									if (*(int32_t *)(v13 + 120) == 0) {
										// 0x83e68
										if (v19 < v17 + 83) {
											// 0x83e74
											result = function_802c4(g28, g29);
											// branch -> 0x83ea0
											// 0x83ea0
											v14 = g35;
											if (*(int32_t *)(v14 + 4) == 0) {
												// 0x83eac
												v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
												v29 = *(int32_t *)(v21 + 8);
												result = v29;
												*(int32_t *)(v14 + 84) = v29;
												*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
												// branch -> 0x83ecc
											}
											// 0x83ecc
											return result;
										}
									}
								}
							}
							// 0x83e84
							g37 = 10;
							v20 = random(-121);
							result = function_7c204(g28, v20 + 10);
							// branch -> 0x83ea0
							// 0x83ea0
							v14 = g35;
							if (*(int32_t *)(v14 + 4) == 0) {
								// 0x83eac
								v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
								v29 = *(int32_t *)(v21 + 8);
								result = v29;
								*(int32_t *)(v14 + 84) = v29;
								*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
								// branch -> 0x83ecc
							}
							// 0x83ecc
							return result;
						}
						// 0x83e74
						result = function_802c4(g28, g29);
						// branch -> 0x83ea0
					}
					// 0x83ea0
					v14 = g35;
					if (*(int32_t *)(v14 + 4) == 0) {
						// 0x83eac
						v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
						v29 = *(int32_t *)(v21 + 8);
						result = v29;
						*(int32_t *)(v14 + 84) = v29;
						*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
						// branch -> 0x83ecc
					}
					// 0x83ecc
					return result;
				}
			}
			int32_t v32 = g35; // 0x83bc0
			int32_t v33 = v32; // 0x83c10
			int32_t v34;
			int32_t v35;  // 0x83c30
			int32_t v36;  // 0x83c74
			int32_t v37;  // 0x83c28
			int32_t *v38; // 0x83c5c
			int32_t v39;  // 0x83c88
			int32_t v40;  // 0x83cd8
			int32_t v41;  // 0x83c5c
			int32_t v42;  // 0x83c80
			char v43;     // 0x83c98
			if (*(char *)(v32 + 8) != 4) {
				// 0x83bcc
				g34 = g31;
				int32_t v44; // 0x83cc4
				if (abs() > 4) {
					// 0x83bec
					g37 = 4;
					if (random(-124) != 0) {
						// 0x83bec
						v33 = g35;
						// branch -> 0x83c00
						// 0x83c00
						v37 = v33;
						if (*(char *)(v33 + 8) != 4) {
							// 0x83c0c
							*(int32_t *)(v33 + 12) = 0;
							g37 = 2;
							*(int32_t *)(g35 + 16) = random(-123);
							v37 = g35;
							// branch -> 0x83c24
						}
						// 0x83c24
						*(char *)(v37 + 8) = 4;
						g34 = g30;
						v35 = abs();
						g34 = g31;
						if (abs() > v35) {
							// 0x83c48
							g34 = g31;
							v34 = abs();
							// branch -> 0x83c5c
						} else {
							// 0x83c54
							g34 = g30;
							v34 = abs();
							// branch -> 0x83c5c
						}
						// 0x83c5c
						v38 = (int32_t *)(g35 + 12);
						v41 = *v38;
						*v38 = v41 + 1;
						v36 = g35;
						if (v41 < 2 * v34) {
							// 0x83c74
							v42 = *(int32_t *)(v36 + 36);
							v39 = *(int32_t *)*(int32_t *)(g23 - 0x7588);
							v43 = *(char *)(v39 + v42 + 112 * *(int32_t *)(v36 + 32));
							if (v43 == *(char *)(g32 + 112 * g33 + v39)) {
								// 0x83cb8
								v44 = function_80718(g28, g29, (int32_t *)(v36 + 16));
								result = v44;
								if (v44 == 0) {
									// 0x83cd0
									g37 = 10;
									v40 = random(125);
									result = function_7c204(g28, v40 + 10);
									// branch -> 0x83cec
								}
								// 0x83cec
								if (*(char *)(g35 + 8) == 1) {
									// 0x83cf8
									g34 = g31;
									if (abs() > 4) {
										// 0x83d18
										v8 = g35;
										if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 43) {
											// 0x83d2c
											v22 = *(int32_t *)(v8 + 32);
											v23 = *(int32_t *)(v8 + 36);
											if (function_85a54(*(int32_t *)(g23 - 0x70c4), g28, v22, v23, g33, g32) != 0) {
												// 0x83d50
												g13 = g28;
												v9 = g35;
												v24 = *(int32_t *)(v9 + 76);
												v25 = *(int32_t *)(v9 + 32);
												v26 = *(int32_t *)(v9 + 36);
												v30 = AddMissile(v25, v26, g33, g32, g29, 20, 0x1000000 * v24 / 0x1000000, 0, 0);
												result = v30;
												if (v30 != -1) {
													// 0x83d8c
													v10 = g35;
													v11 = v10;
													if (*(int32_t *)(*(int32_t *)(v10 + 228) + 20) != 0) {
														// 0x83d9c
														PlayEffect(g28, 3);
														v11 = g35;
														// branch -> 0x83da8
													}
													// 0x83da8
													v27 = *(int32_t *)(v11 + 36);
													v15 = 224 * *(int32_t *)(v11 + 32);
													result = v15;
													v18 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
													*(int16_t *)(2 * v27 + v15 + v18) = (int16_t)(0x10000 * (-1 - g28) / 0x10000);
													*(int32_t *)(g35 + 4) = 14;
													// branch -> 0x83ea0
												}
												// 0x83ea0
												v14 = g35;
												if (*(int32_t *)(v14 + 4) == 0) {
													// 0x83eac
													v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
													v29 = *(int32_t *)(v21 + 8);
													result = v29;
													*(int32_t *)(v14 + 84) = v29;
													*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
													// branch -> 0x83ecc
												}
												// 0x83ecc
												return result;
											}
										}
									} else {
										// 0x83d08
										g34 = g30;
										if (abs() >= 5) {
											// 0x83d18
											v8 = g35;
											if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 43) {
												// 0x83d2c
												v22 = *(int32_t *)(v8 + 32);
												v23 = *(int32_t *)(v8 + 36);
												if (function_85a54(*(int32_t *)(g23 - 0x70c4), g28, v22, v23, g33, g32) != 0) {
													// 0x83d50
													g13 = g28;
													v9 = g35;
													v24 = *(int32_t *)(v9 + 76);
													v25 = *(int32_t *)(v9 + 32);
													v26 = *(int32_t *)(v9 + 36);
													v30 = AddMissile(v25, v26, g33, g32, g29, 20, 0x1000000 * v24 / 0x1000000, 0, 0);
													result = v30;
													if (v30 != -1) {
														// 0x83d8c
														v10 = g35;
														v11 = v10;
														if (*(int32_t *)(*(int32_t *)(v10 + 228) + 20) != 0) {
															// 0x83d9c
															PlayEffect(g28, 3);
															v11 = g35;
															// branch -> 0x83da8
														}
														// 0x83da8
														v27 = *(int32_t *)(v11 + 36);
														v15 = 224 * *(int32_t *)(v11 + 32);
														result = v15;
														v18 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
														*(int16_t *)(2 * v27 + v15 + v18) = (int16_t)(0x10000 * (-1 - g28) / 0x10000);
														*(int32_t *)(g35 + 4) = 14;
														// branch -> 0x83ea0
													}
													// 0x83ea0
													v14 = g35;
													if (*(int32_t *)(v14 + 4) == 0) {
														// 0x83eac
														v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
														v29 = *(int32_t *)(v21 + 8);
														result = v29;
														*(int32_t *)(v14 + 84) = v29;
														*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
														// branch -> 0x83ecc
													}
													// 0x83ecc
													return result;
												}
											}
										}
									}
									// 0x83de0
									g34 = g31;
									if (abs() <= 1) {
										// 0x83df0
										g34 = g30;
										if (abs() <= 1) {
											// 0x83e00
											v12 = g35;
											v16 = 2 * (int32_t) * (char *)(v12 + 157);
											result = v16;
											if (g36 < v16 + 28) {
												// 0x83e14
												*(int32_t *)(v12 + 72) = g29;
												result = function_7c64c(g28);
												// branch -> 0x83ea0
											}
											// 0x83ea0
											v14 = g35;
											if (*(int32_t *)(v14 + 4) == 0) {
												// 0x83eac
												v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
												v29 = *(int32_t *)(v21 + 8);
												result = v29;
												*(int32_t *)(v14 + 84) = v29;
												*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
												// branch -> 0x83ecc
											}
											// 0x83ecc
											return result;
										}
									}
									// 0x83e24
									g37 = 100;
									v19 = random(-122);
									v13 = g35;
									v17 = 2 * (int32_t) * (char *)(v13 + 157);
									if (v19 >= v17 + 33) {
										// 0x83e44
										v28 = *(int32_t *)(v13 + 116);
										if (v28 == 1) {
											// 0x83e5c
											if (*(int32_t *)(v13 + 120) == 0) {
												// 0x83e68
												if (v19 < v17 + 83) {
													// 0x83e74
													result = function_802c4(g28, g29);
													// branch -> 0x83ea0
													// 0x83ea0
													v14 = g35;
													if (*(int32_t *)(v14 + 4) == 0) {
														// 0x83eac
														v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
														v29 = *(int32_t *)(v21 + 8);
														result = v29;
														*(int32_t *)(v14 + 84) = v29;
														*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
														// branch -> 0x83ecc
													}
													// 0x83ecc
													return result;
												}
											}
										} else {
											// 0x83e50
											if (v28 <= 3) {
												// 0x83e5c
												if (*(int32_t *)(v13 + 120) == 0) {
													// 0x83e68
													if (v19 < v17 + 83) {
														// 0x83e74
														result = function_802c4(g28, g29);
														// branch -> 0x83ea0
														// 0x83ea0
														v14 = g35;
														if (*(int32_t *)(v14 + 4) == 0) {
															// 0x83eac
															v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
															v29 = *(int32_t *)(v21 + 8);
															result = v29;
															*(int32_t *)(v14 + 84) = v29;
															*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
															// branch -> 0x83ecc
														}
														// 0x83ecc
														return result;
													}
												}
											}
										}
										// 0x83e84
										g37 = 10;
										v20 = random(-121);
										result = function_7c204(g28, v20 + 10);
										// branch -> 0x83ea0
										// 0x83ea0
										v14 = g35;
										if (*(int32_t *)(v14 + 4) == 0) {
											// 0x83eac
											v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
											v29 = *(int32_t *)(v21 + 8);
											result = v29;
											*(int32_t *)(v14 + 84) = v29;
											*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
											// branch -> 0x83ecc
										}
										// 0x83ecc
										return result;
									}
									// 0x83e74
									result = function_802c4(g28, g29);
									// branch -> 0x83ea0
								}
								// 0x83ea0
								v14 = g35;
								if (*(int32_t *)(v14 + 4) == 0) {
									// 0x83eac
									v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
									v29 = *(int32_t *)(v21 + 8);
									result = v29;
									*(int32_t *)(v14 + 84) = v29;
									*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
									// branch -> 0x83ecc
								}
								// 0x83ecc
								return result;
							}
						}
						// 0x83cac
						*(char *)(v36 + 8) = 1;
						// branch -> 0x83cec
					}
				} else {
					// 0x83bdc
					g34 = g30;
					if (abs() >= 5) {
						// 0x83bec
						g37 = 4;
						if (random(-124) != 0) {
							// 0x83bec
							v33 = g35;
							// branch -> 0x83c00
							// 0x83c00
							v37 = v33;
							if (*(char *)(v33 + 8) != 4) {
								// 0x83c0c
								*(int32_t *)(v33 + 12) = 0;
								g37 = 2;
								*(int32_t *)(g35 + 16) = random(-123);
								v37 = g35;
								// branch -> 0x83c24
							}
							// 0x83c24
							*(char *)(v37 + 8) = 4;
							g34 = g30;
							v35 = abs();
							g34 = g31;
							if (abs() > v35) {
								// 0x83c48
								g34 = g31;
								v34 = abs();
								// branch -> 0x83c5c
							} else {
								// 0x83c54
								g34 = g30;
								v34 = abs();
								// branch -> 0x83c5c
							}
							// 0x83c5c
							v38 = (int32_t *)(g35 + 12);
							v41 = *v38;
							*v38 = v41 + 1;
							v36 = g35;
							if (v41 < 2 * v34) {
								// 0x83c74
								v42 = *(int32_t *)(v36 + 36);
								v39 = *(int32_t *)*(int32_t *)(g23 - 0x7588);
								v43 = *(char *)(v39 + v42 + 112 * *(int32_t *)(v36 + 32));
								if (v43 == *(char *)(g32 + 112 * g33 + v39)) {
									// 0x83cb8
									v44 = function_80718(g28, g29, (int32_t *)(v36 + 16));
									result = v44;
									if (v44 == 0) {
										// 0x83cd0
										g37 = 10;
										v40 = random(125);
										result = function_7c204(g28, v40 + 10);
										// branch -> 0x83cec
									}
									// 0x83cec
									if (*(char *)(g35 + 8) == 1) {
										// 0x83cf8
										g34 = g31;
										if (abs() > 4) {
											// 0x83d18
											v8 = g35;
											if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 43) {
												// 0x83d2c
												v22 = *(int32_t *)(v8 + 32);
												v23 = *(int32_t *)(v8 + 36);
												if (function_85a54(*(int32_t *)(g23 - 0x70c4), g28, v22, v23, g33, g32) != 0) {
													// 0x83d50
													g13 = g28;
													v9 = g35;
													v24 = *(int32_t *)(v9 + 76);
													v25 = *(int32_t *)(v9 + 32);
													v26 = *(int32_t *)(v9 + 36);
													v30 = AddMissile(v25, v26, g33, g32, g29, 20, 0x1000000 * v24 / 0x1000000, 0, 0);
													result = v30;
													if (v30 != -1) {
														// 0x83d8c
														v10 = g35;
														v11 = v10;
														if (*(int32_t *)(*(int32_t *)(v10 + 228) + 20) != 0) {
															// 0x83d9c
															PlayEffect(g28, 3);
															v11 = g35;
															// branch -> 0x83da8
														}
														// 0x83da8
														v27 = *(int32_t *)(v11 + 36);
														v15 = 224 * *(int32_t *)(v11 + 32);
														result = v15;
														v18 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
														*(int16_t *)(2 * v27 + v15 + v18) = (int16_t)(0x10000 * (-1 - g28) / 0x10000);
														*(int32_t *)(g35 + 4) = 14;
														// branch -> 0x83ea0
													}
													// 0x83ea0
													v14 = g35;
													if (*(int32_t *)(v14 + 4) == 0) {
														// 0x83eac
														v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
														v29 = *(int32_t *)(v21 + 8);
														result = v29;
														*(int32_t *)(v14 + 84) = v29;
														*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
														// branch -> 0x83ecc
													}
													// 0x83ecc
													return result;
												}
											}
										} else {
											// 0x83d08
											g34 = g30;
											if (abs() >= 5) {
												// 0x83d18
												v8 = g35;
												if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 43) {
													// 0x83d2c
													v22 = *(int32_t *)(v8 + 32);
													v23 = *(int32_t *)(v8 + 36);
													if (function_85a54(*(int32_t *)(g23 - 0x70c4), g28, v22, v23, g33, g32) != 0) {
														// 0x83d50
														g13 = g28;
														v9 = g35;
														v24 = *(int32_t *)(v9 + 76);
														v25 = *(int32_t *)(v9 + 32);
														v26 = *(int32_t *)(v9 + 36);
														v30 = AddMissile(v25, v26, g33, g32, g29, 20, 0x1000000 * v24 / 0x1000000, 0, 0);
														result = v30;
														if (v30 != -1) {
															// 0x83d8c
															v10 = g35;
															v11 = v10;
															if (*(int32_t *)(*(int32_t *)(v10 + 228) + 20) != 0) {
																// 0x83d9c
																PlayEffect(g28, 3);
																v11 = g35;
																// branch -> 0x83da8
															}
															// 0x83da8
															v27 = *(int32_t *)(v11 + 36);
															v15 = 224 * *(int32_t *)(v11 + 32);
															result = v15;
															v18 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
															*(int16_t *)(2 * v27 + v15 + v18) = (int16_t)(0x10000 * (-1 - g28) / 0x10000);
															*(int32_t *)(g35 + 4) = 14;
															// branch -> 0x83ea0
														}
														// 0x83ea0
														v14 = g35;
														if (*(int32_t *)(v14 + 4) == 0) {
															// 0x83eac
															v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
															v29 = *(int32_t *)(v21 + 8);
															result = v29;
															*(int32_t *)(v14 + 84) = v29;
															*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
															// branch -> 0x83ecc
														}
														// 0x83ecc
														return result;
													}
												}
											}
										}
										// 0x83de0
										g34 = g31;
										if (abs() <= 1) {
											// 0x83df0
											g34 = g30;
											if (abs() <= 1) {
												// 0x83e00
												v12 = g35;
												v16 = 2 * (int32_t) * (char *)(v12 + 157);
												result = v16;
												if (g36 < v16 + 28) {
													// 0x83e14
													*(int32_t *)(v12 + 72) = g29;
													result = function_7c64c(g28);
													// branch -> 0x83ea0
												}
												// 0x83ea0
												v14 = g35;
												if (*(int32_t *)(v14 + 4) == 0) {
													// 0x83eac
													v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
													v29 = *(int32_t *)(v21 + 8);
													result = v29;
													*(int32_t *)(v14 + 84) = v29;
													*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
													// branch -> 0x83ecc
												}
												// 0x83ecc
												return result;
											}
										}
										// 0x83e24
										g37 = 100;
										v19 = random(-122);
										v13 = g35;
										v17 = 2 * (int32_t) * (char *)(v13 + 157);
										if (v19 >= v17 + 33) {
											// 0x83e44
											v28 = *(int32_t *)(v13 + 116);
											if (v28 == 1) {
												// 0x83e5c
												if (*(int32_t *)(v13 + 120) == 0) {
													// 0x83e68
													if (v19 < v17 + 83) {
														// 0x83e74
														result = function_802c4(g28, g29);
														// branch -> 0x83ea0
														// 0x83ea0
														v14 = g35;
														if (*(int32_t *)(v14 + 4) == 0) {
															// 0x83eac
															v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
															v29 = *(int32_t *)(v21 + 8);
															result = v29;
															*(int32_t *)(v14 + 84) = v29;
															*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
															// branch -> 0x83ecc
														}
														// 0x83ecc
														return result;
													}
												}
											} else {
												// 0x83e50
												if (v28 <= 3) {
													// 0x83e5c
													if (*(int32_t *)(v13 + 120) == 0) {
														// 0x83e68
														if (v19 < v17 + 83) {
															// 0x83e74
															result = function_802c4(g28, g29);
															// branch -> 0x83ea0
															// 0x83ea0
															v14 = g35;
															if (*(int32_t *)(v14 + 4) == 0) {
																// 0x83eac
																v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
																v29 = *(int32_t *)(v21 + 8);
																result = v29;
																*(int32_t *)(v14 + 84) = v29;
																*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
																// branch -> 0x83ecc
															}
															// 0x83ecc
															return result;
														}
													}
												}
											}
											// 0x83e84
											g37 = 10;
											v20 = random(-121);
											result = function_7c204(g28, v20 + 10);
											// branch -> 0x83ea0
											// 0x83ea0
											v14 = g35;
											if (*(int32_t *)(v14 + 4) == 0) {
												// 0x83eac
												v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
												v29 = *(int32_t *)(v21 + 8);
												result = v29;
												*(int32_t *)(v14 + 84) = v29;
												*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
												// branch -> 0x83ecc
											}
											// 0x83ecc
											return result;
										}
										// 0x83e74
										result = function_802c4(g28, g29);
										// branch -> 0x83ea0
									}
									// 0x83ea0
									v14 = g35;
									if (*(int32_t *)(v14 + 4) == 0) {
										// 0x83eac
										v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
										v29 = *(int32_t *)(v21 + 8);
										result = v29;
										*(int32_t *)(v14 + 84) = v29;
										*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
										// branch -> 0x83ecc
									}
									// 0x83ecc
									return result;
								}
							}
							// 0x83cac
							*(char *)(v36 + 8) = 1;
							// branch -> 0x83cec
						}
					}
				}
				// 0x83cec
				if (*(char *)(g35 + 8) == 1) {
					// 0x83cf8
					g34 = g31;
					if (abs() > 4) {
						// 0x83d18
						v8 = g35;
						if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 43) {
							// 0x83d2c
							v22 = *(int32_t *)(v8 + 32);
							v23 = *(int32_t *)(v8 + 36);
							if (function_85a54(*(int32_t *)(g23 - 0x70c4), g28, v22, v23, g33, g32) != 0) {
								// 0x83d50
								g13 = g28;
								v9 = g35;
								v24 = *(int32_t *)(v9 + 76);
								v25 = *(int32_t *)(v9 + 32);
								v26 = *(int32_t *)(v9 + 36);
								v30 = AddMissile(v25, v26, g33, g32, g29, 20, 0x1000000 * v24 / 0x1000000, 0, 0);
								result = v30;
								if (v30 != -1) {
									// 0x83d8c
									v10 = g35;
									v11 = v10;
									if (*(int32_t *)(*(int32_t *)(v10 + 228) + 20) != 0) {
										// 0x83d9c
										PlayEffect(g28, 3);
										v11 = g35;
										// branch -> 0x83da8
									}
									// 0x83da8
									v27 = *(int32_t *)(v11 + 36);
									v15 = 224 * *(int32_t *)(v11 + 32);
									result = v15;
									v18 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
									*(int16_t *)(2 * v27 + v15 + v18) = (int16_t)(0x10000 * (-1 - g28) / 0x10000);
									*(int32_t *)(g35 + 4) = 14;
									// branch -> 0x83ea0
								}
								// 0x83ea0
								v14 = g35;
								if (*(int32_t *)(v14 + 4) == 0) {
									// 0x83eac
									v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
									v29 = *(int32_t *)(v21 + 8);
									result = v29;
									*(int32_t *)(v14 + 84) = v29;
									*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
									// branch -> 0x83ecc
								}
								// 0x83ecc
								return result;
							}
						}
					} else {
						// 0x83d08
						g34 = g30;
						if (abs() >= 5) {
							// 0x83d18
							v8 = g35;
							if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 43) {
								// 0x83d2c
								v22 = *(int32_t *)(v8 + 32);
								v23 = *(int32_t *)(v8 + 36);
								if (function_85a54(*(int32_t *)(g23 - 0x70c4), g28, v22, v23, g33, g32) != 0) {
									// 0x83d50
									g13 = g28;
									v9 = g35;
									v24 = *(int32_t *)(v9 + 76);
									v25 = *(int32_t *)(v9 + 32);
									v26 = *(int32_t *)(v9 + 36);
									v30 = AddMissile(v25, v26, g33, g32, g29, 20, 0x1000000 * v24 / 0x1000000, 0, 0);
									result = v30;
									if (v30 != -1) {
										// 0x83d8c
										v10 = g35;
										v11 = v10;
										if (*(int32_t *)(*(int32_t *)(v10 + 228) + 20) != 0) {
											// 0x83d9c
											PlayEffect(g28, 3);
											v11 = g35;
											// branch -> 0x83da8
										}
										// 0x83da8
										v27 = *(int32_t *)(v11 + 36);
										v15 = 224 * *(int32_t *)(v11 + 32);
										result = v15;
										v18 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
										*(int16_t *)(2 * v27 + v15 + v18) = (int16_t)(0x10000 * (-1 - g28) / 0x10000);
										*(int32_t *)(g35 + 4) = 14;
										// branch -> 0x83ea0
									}
									// 0x83ea0
									v14 = g35;
									if (*(int32_t *)(v14 + 4) == 0) {
										// 0x83eac
										v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
										v29 = *(int32_t *)(v21 + 8);
										result = v29;
										*(int32_t *)(v14 + 84) = v29;
										*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
										// branch -> 0x83ecc
									}
									// 0x83ecc
									return result;
								}
							}
						}
					}
					// 0x83de0
					g34 = g31;
					if (abs() <= 1) {
						// 0x83df0
						g34 = g30;
						if (abs() <= 1) {
							// 0x83e00
							v12 = g35;
							v16 = 2 * (int32_t) * (char *)(v12 + 157);
							result = v16;
							if (g36 < v16 + 28) {
								// 0x83e14
								*(int32_t *)(v12 + 72) = g29;
								result = function_7c64c(g28);
								// branch -> 0x83ea0
							}
							// 0x83ea0
							v14 = g35;
							if (*(int32_t *)(v14 + 4) == 0) {
								// 0x83eac
								v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
								v29 = *(int32_t *)(v21 + 8);
								result = v29;
								*(int32_t *)(v14 + 84) = v29;
								*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
								// branch -> 0x83ecc
							}
							// 0x83ecc
							return result;
						}
					}
					// 0x83e24
					g37 = 100;
					v19 = random(-122);
					v13 = g35;
					v17 = 2 * (int32_t) * (char *)(v13 + 157);
					if (v19 >= v17 + 33) {
						// 0x83e44
						v28 = *(int32_t *)(v13 + 116);
						if (v28 == 1) {
							// 0x83e5c
							if (*(int32_t *)(v13 + 120) == 0) {
								// 0x83e68
								if (v19 < v17 + 83) {
									// 0x83e74
									result = function_802c4(g28, g29);
									// branch -> 0x83ea0
									// 0x83ea0
									v14 = g35;
									if (*(int32_t *)(v14 + 4) == 0) {
										// 0x83eac
										v21 = *(int32_t *)(v14 + 224) + 8 * *(int32_t *)(v14 + 72);
										v29 = *(int32_t *)(v21 + 8);
										result = v29;
										*(int32_t *)(v14 + 84) = v29;
										*(int32_t *)(g35 + 88) = *(int32_t *)(v21 + 12);
										// branch -> 0x83ecc
									}
									// 0x83ecc
									return result;
								}
							}
						} else {
							// 0x83e50
							if (v28 <= 3) {
								// 0x83e5c
								if (*(int32_t *)(v13 + 120) == 0) {
									// 0x83e68
									if (v19 < v17 + 83) {
										// 0x83e74
										function_802c4(g28, g29);
										// branch -> 0x83ea0
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
						}
						// 0x83e84
						g37 = 10;
						v20 = random(-121);
						function_7c204(g28, v20 + 10);
						// branch -> 0x83ea0
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x83e74
					function_802c4(g28, g29);
					// branch -> 0x83ea0
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x83c00
			v37 = v33;
			if (*(char *)(v33 + 8) != 4) {
				// 0x83c0c
				*(int32_t *)(v33 + 12) = 0;
				g37 = 2;
				*(int32_t *)(g35 + 16) = random(-123);
				v37 = g35;
				// branch -> 0x83c24
			}
			// 0x83c24
			*(char *)(v37 + 8) = 4;
			g34 = g30;
			v35 = abs();
			g34 = g31;
			if (abs() > v35) {
				// 0x83c48
				g34 = g31;
				v34 = abs();
				// branch -> 0x83c5c
			} else {
				// 0x83c54
				g34 = g30;
				v34 = abs();
				// branch -> 0x83c5c
			}
			// 0x83c5c
			v38 = (int32_t *)(g35 + 12);
			v41 = *v38;
			*v38 = v41 + 1;
			v36 = g35;
			if (v41 < 2 * v34) {
				// 0x83c74
				v42 = *(int32_t *)(v36 + 36);
				v39 = *(int32_t *)*(int32_t *)(g23 - 0x7588);
				v43 = *(char *)(v39 + v42 + 112 * *(int32_t *)(v36 + 32));
				if (v43 == *(char *)(g32 + 112 * g33 + v39)) {
					// 0x83cb8
					if (function_80718(g28, g29, (int32_t *)(v36 + 16)) == 0) {
						// 0x83cd0
						g37 = 10;
						v40 = random(125);
						function_7c204(g28, v40 + 10);
						// branch -> 0x83cec
					}
					// 0x83cec
					if (*(char *)(g35 + 8) == 1) {
						// 0x83cf8
						g34 = g31;
						if (abs() > 4) {
							// 0x83d18
							v8 = g35;
							if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 43) {
								// 0x83d2c
								v22 = *(int32_t *)(v8 + 32);
								v23 = *(int32_t *)(v8 + 36);
								if (function_85a54(*(int32_t *)(g23 - 0x70c4), g28, v22, v23, g33, g32) != 0) {
									// 0x83d50
									g13 = g28;
									v9 = g35;
									v24 = *(int32_t *)(v9 + 76);
									v25 = *(int32_t *)(v9 + 32);
									v26 = *(int32_t *)(v9 + 36);
									if (AddMissile(v25, v26, g33, g32, g29, 20, 0x1000000 * v24 / 0x1000000, 0, 0) != -1) {
										// 0x83d8c
										v10 = g35;
										v11 = v10;
										if (*(int32_t *)(*(int32_t *)(v10 + 228) + 20) != 0) {
											// 0x83d9c
											PlayEffect(g28, 3);
											v11 = g35;
											// branch -> 0x83da8
										}
										// 0x83da8
										v27 = *(int32_t *)(v11 + 36);
										v15 = 224 * *(int32_t *)(v11 + 32);
										v18 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
										*(int16_t *)(2 * v27 + v15 + v18) = (int16_t)(0x10000 * (-1 - g28) / 0x10000);
										*(int32_t *)(g35 + 4) = 14;
										// branch -> 0x83ea0
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						} else {
							// 0x83d08
							g34 = g30;
							if (abs() >= 5) {
								// 0x83d18
								v8 = g35;
								if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 43) {
									// 0x83d2c
									v22 = *(int32_t *)(v8 + 32);
									v23 = *(int32_t *)(v8 + 36);
									if (function_85a54(*(int32_t *)(g23 - 0x70c4), g28, v22, v23, g33, g32) != 0) {
										// 0x83d50
										g13 = g28;
										v9 = g35;
										v24 = *(int32_t *)(v9 + 76);
										v25 = *(int32_t *)(v9 + 32);
										v26 = *(int32_t *)(v9 + 36);
										if (AddMissile(v25, v26, g33, g32, g29, 20, 0x1000000 * v24 / 0x1000000, 0, 0) != -1) {
											// 0x83d8c
											v10 = g35;
											v11 = v10;
											if (*(int32_t *)(*(int32_t *)(v10 + 228) + 20) != 0) {
												// 0x83d9c
												PlayEffect(g28, 3);
												v11 = g35;
												// branch -> 0x83da8
											}
											// 0x83da8
											v27 = *(int32_t *)(v11 + 36);
											v15 = 224 * *(int32_t *)(v11 + 32);
											v18 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
											*(int16_t *)(2 * v27 + v15 + v18) = (int16_t)(0x10000 * (-1 - g28) / 0x10000);
											*(int32_t *)(g35 + 4) = 14;
											// branch -> 0x83ea0
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
						}
						// 0x83de0
						g34 = g31;
						if (abs() <= 1) {
							// 0x83df0
							g34 = g30;
							if (abs() <= 1) {
								// 0x83e00
								v12 = g35;
								if (g36 < 2 * (int32_t) * (char *)(v12 + 157) + 28) {
									// 0x83e14
									*(int32_t *)(v12 + 72) = g29;
									function_7c64c(g28);
									// branch -> 0x83ea0
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x83e24
						g37 = 100;
						v19 = random(-122);
						v13 = g35;
						v17 = 2 * (int32_t) * (char *)(v13 + 157);
						if (v19 >= v17 + 33) {
							// 0x83e44
							v28 = *(int32_t *)(v13 + 116);
							if (v28 == 1) {
								// 0x83e5c
								if (*(int32_t *)(v13 + 120) == 0) {
									// 0x83e68
									if (v19 < v17 + 83) {
										// 0x83e74
										function_802c4(g28, g29);
										// branch -> 0x83ea0
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							} else {
								// 0x83e50
								if (v28 <= 3) {
									// 0x83e5c
									if (*(int32_t *)(v13 + 120) == 0) {
										// 0x83e68
										if (v19 < v17 + 83) {
											// 0x83e74
											function_802c4(g28, g29);
											// branch -> 0x83ea0
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
							}
							// 0x83e84
							g37 = 10;
							v20 = random(-121);
							function_7c204(g28, v20 + 10);
							// branch -> 0x83ea0
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// 0x83e74
						function_802c4(g28, g29);
						// branch -> 0x83ea0
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x83cac
			*(char *)(v36 + 8) = 1;
			// branch -> 0x83cec
			// 0x83cec
			if (*(char *)(g35 + 8) == 1) {
				// 0x83cf8
				g34 = g31;
				if (abs() > 4) {
					// 0x83d18
					v8 = g35;
					if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 43) {
						// 0x83d2c
						v22 = *(int32_t *)(v8 + 32);
						v23 = *(int32_t *)(v8 + 36);
						if (function_85a54(*(int32_t *)(g23 - 0x70c4), g28, v22, v23, g33, g32) != 0) {
							// 0x83d50
							g13 = g28;
							v9 = g35;
							v24 = *(int32_t *)(v9 + 76);
							v25 = *(int32_t *)(v9 + 32);
							v26 = *(int32_t *)(v9 + 36);
							if (AddMissile(v25, v26, g33, g32, g29, 20, 0x1000000 * v24 / 0x1000000, 0, 0) != -1) {
								// 0x83d8c
								v10 = g35;
								v11 = v10;
								if (*(int32_t *)(*(int32_t *)(v10 + 228) + 20) != 0) {
									// 0x83d9c
									PlayEffect(g28, 3);
									v11 = g35;
									// branch -> 0x83da8
								}
								// 0x83da8
								v27 = *(int32_t *)(v11 + 36);
								v15 = 224 * *(int32_t *)(v11 + 32);
								v18 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
								*(int16_t *)(2 * v27 + v15 + v18) = (int16_t)(0x10000 * (-1 - g28) / 0x10000);
								*(int32_t *)(g35 + 4) = 14;
								// branch -> 0x83ea0
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				} else {
					// 0x83d08
					g34 = g30;
					if (abs() >= 5) {
						// 0x83d18
						v8 = g35;
						if (g36 < 2 * (int32_t) * (char *)(v8 + 157) + 43) {
							// 0x83d2c
							v22 = *(int32_t *)(v8 + 32);
							v23 = *(int32_t *)(v8 + 36);
							if (function_85a54(*(int32_t *)(g23 - 0x70c4), g28, v22, v23, g33, g32) != 0) {
								// 0x83d50
								g13 = g28;
								v9 = g35;
								v24 = *(int32_t *)(v9 + 76);
								v25 = *(int32_t *)(v9 + 32);
								v26 = *(int32_t *)(v9 + 36);
								if (AddMissile(v25, v26, g33, g32, g29, 20, 0x1000000 * v24 / 0x1000000, 0, 0) != -1) {
									// 0x83d8c
									v10 = g35;
									v11 = v10;
									if (*(int32_t *)(*(int32_t *)(v10 + 228) + 20) != 0) {
										// 0x83d9c
										PlayEffect(g28, 3);
										v11 = g35;
										// branch -> 0x83da8
									}
									// 0x83da8
									v27 = *(int32_t *)(v11 + 36);
									v15 = 224 * *(int32_t *)(v11 + 32);
									v18 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
									*(int16_t *)(2 * v27 + v15 + v18) = (int16_t)(0x10000 * (-1 - g28) / 0x10000);
									*(int32_t *)(g35 + 4) = 14;
									// branch -> 0x83ea0
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
				}
				// 0x83de0
				g34 = g31;
				if (abs() <= 1) {
					// 0x83df0
					g34 = g30;
					if (abs() <= 1) {
						// 0x83e00
						v12 = g35;
						if (g36 < 2 * (int32_t) * (char *)(v12 + 157) + 28) {
							// 0x83e14
							*(int32_t *)(v12 + 72) = g29;
							function_7c64c(g28);
							// branch -> 0x83ea0
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0x83e24
				g37 = 100;
				v19 = random(-122);
				v13 = g35;
				v17 = 2 * (int32_t) * (char *)(v13 + 157);
				if (v19 >= v17 + 33) {
					// 0x83e44
					v28 = *(int32_t *)(v13 + 116);
					if (v28 == 1) {
						// 0x83e5c
						if (*(int32_t *)(v13 + 120) == 0) {
							// 0x83e68
							if (v19 < v17 + 83) {
								// 0x83e74
								function_802c4(g28, g29);
								// branch -> 0x83ea0
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					} else {
						// 0x83e50
						if (v28 <= 3) {
							// 0x83e5c
							if (*(int32_t *)(v13 + 120) == 0) {
								// 0x83e68
								if (v19 < v17 + 83) {
									// 0x83e74
									function_802c4(g28, g29);
									// branch -> 0x83ea0
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
					}
					// 0x83e84
					g37 = 10;
					v20 = random(-121);
					function_7c204(g28, v20 + 10);
					// branch -> 0x83ea0
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x83e74
				function_802c4(g28, g29);
				// branch -> 0x83ea0
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x83ee0 - 0x8432c
int32_t function_83ee0(int32_t a1)
{
	g28 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x83eec
	g36 = v1;
	int32_t result = a1; // 0x843286
	int32_t v2 = a1;     // 0x83f0c
	if (a1 >= 200) {
		// 0x83f00
		g37 = a1;
		result = app_fatal(*(int32_t *)(g23 - 0x5e5c));
		v2 = g28;
		v1 = g36;
		// branch -> 0x83f0c
	}
	int32_t v3 = 232 * v2; // 0x83f0c
	g33 = v3;
	int32_t v4 = v3 + v1; // 0x83f10
	g35 = v4;
	if (*(int32_t *)(v4 + 4) != 0 || *(char *)(v4 + 164) == 0) {
		// 0x84318
		return result;
	}
	int32_t v5 = (int32_t) * (char *)(v4 + 80); // 0x83f2c
	int32_t v6 = *(int32_t *)(v4 + 32);         // 0x83f30
	int32_t v7 = (int32_t) * (char *)(v4 + 81); // 0x83f34
	g32 = v5;
	int32_t v8 = *(int32_t *)(v4 + 36); // 0x83f3c
	g30 = v6 - v5;
	int32_t v9 = *(int32_t *)(v4 + 176); // 0x83f48
	g31 = v7;
	g26 = v8 - v7;
	g29 = GetDirection(v6, v8, *(int32_t *)(v4 + 172), v9);
	if (*(char *)(g35 + 164) != -1) {
		// 0x83f68
		MonstCheckDoors(g28);
		// branch -> 0x83f70
	}
	// 0x83f70
	g37 = 100;
	int32_t v10 = random(121);     // 0x83f78
	int32_t v11 = g35;             // 0x83f7c
	char v12 = *(char *)(v11 + 8); // 0x83f7c
	int32_t result2;               // 0x84328
	int32_t v13;                   // 0x843287
	int32_t v14;                   // 0x84304
	if (v12 == 2) {
		int32_t *v15 = (int32_t *)(v11 + 12); // 0x83f8c
		int32_t v16 = *v15;                   // 0x83f8c
		*v15 = v16 + 1;
		if (v16 < 4) {
			// 0x83fbc
			v13 = function_802c4(g28, *(int32_t *)(4 * g29 + *(int32_t *)(g23 - 0x7104)));
			// branch -> 0x842f0
		} else {
			// 0x83fa0
			*(char *)(g35 + 8) = 1;
			v13 = function_7d940(g28, g29, 1);
			// branch -> 0x842f0
		}
		// 0x842f0
		result2 = v13;
		if (*(int32_t *)(g35 + 4) == 0) {
			// 0x842fc
			g37 = 10;
			v14 = random(125);
			result2 = function_7c204(g28, v14 + 5);
			// branch -> 0x84318
		}
		// 0x84318
		return result2;
	}
	// 0x83fd4
	if (v12 == 4) {
		// 0x83fdc
		g34 = g26;
		g33 = abs();
		g34 = g30;
		int32_t v17;
		if (abs() > g33) {
			// 0x83ff8
			g34 = g30;
			v17 = abs();
			// branch -> 0x84014
		} else {
			// 0x84008
			g34 = g26;
			v17 = abs();
			// branch -> 0x84014
		}
		// 0x84014
		g34 = g30;
		if (abs() <= 1) {
			// 0x84024
			g34 = g26;
			if (abs() < 2) {
				// 0x84024
				// branch -> 0x84078
				// 0x84078
				*(char *)(g35 + 8) = 1;
				// branch -> 0x842f0
				// 0x842f0
				result2 = function_7d940(g28, g29, 1);
				if (*(int32_t *)(g35 + 4) == 0) {
					// 0x842fc
					g37 = 10;
					v14 = random(125);
					result2 = function_7c204(g28, v14 + 5);
					// branch -> 0x84318
				}
				// 0x84318
				return result2;
			}
		}
		int32_t v18 = g35; // 0x84034
		if (*(char *)(v18 + 164) == -1) {
			int32_t v19 = *(int32_t *)(v18 + 36);                           // 0x8404c
			int32_t v20 = *(int32_t *)*(int32_t *)(g23 - 0x7588);           // 0x84054
			char v21 = *(char *)(v20 + v19 + 112 * *(int32_t *)(v18 + 32)); // 0x84064
			if (v21 == *(char *)(g31 + 112 * g32 + v20)) {
				int32_t *v22 = (int32_t *)(v18 + 12); // 0x84094
				uint32_t v23 = *v22;                  // 0x84094
				*v22 = v23 + 1;
				if (v23 >= 2 * v17) {
					// 0x840ac
					g34 = g28;
					g37 = g29;
					if (function_8539c() != 0) {
						// 0x840c0
						*(char *)(g35 + 8) = 1;
						// branch -> 0x842f0
						// 0x842f0
						result2 = function_7d940(g28, g29, 1);
						if (*(int32_t *)(g35 + 4) == 0) {
							// 0x842fc
							g37 = 10;
							v14 = random(125);
							result2 = function_7c204(g28, v14 + 5);
							// branch -> 0x84318
						}
						// 0x84318
						return result2;
					}
				}
				// 0x840dc
				// branch -> 0x842f0
				// 0x842f0
				result2 = function_80718(g28, g29, (int32_t *)(g35 + 16));
				if (*(int32_t *)(g35 + 4) == 0) {
					// 0x842fc
					g37 = 10;
					v14 = random(125);
					result2 = function_7c204(g28, v14 + 5);
					// branch -> 0x84318
				}
				// 0x84318
				return result2;
			}
		}
		// 0x84078
		*(char *)(v18 + 8) = 1;
		v13 = function_7d940(g28, g29, 1);
		// branch -> 0x842f0
	} else {
		// 0x840f0
		if (v12 == 1) {
			// 0x840f8
			g34 = g30;
			if (abs() <= 1) {
				// 0x84108
				g34 = g26;
				if (abs() <= 1) {
					// 0x84118
					*(int32_t *)(g35 + 72) = g29;
					int32_t v24 = g35;                      // 0x8411c
					uint32_t v25 = *(int32_t *)(v24 + 148); // 0x8411c
					if (*(int32_t *)(v24 + 152) < (v25 / 2 || v25 & -0x80000000)) {
						// 0x84130
						*(char *)(v24 + 8) = 2;
						*(int32_t *)(g35 + 12) = 0;
						v13 = function_7da34(g28, g29, 0);
						// branch -> 0x842f0
					} else {
						// 0x84154
						if (*(int32_t *)(v24 + 116) != 13) {
							// 0x84160
							g37 = 100;
							if (random(105) >= 2 * (int32_t) * (char *)(g35 + 157) + 20) {
								// 0x84200
								g37 = 10;
								int32_t v26 = random(105);                                                          // 0x84208
								int32_t v27 = function_7c204(g28, v26 + 10 + -2 * (int32_t) * (char *)(g35 + 157)); // 0x84220
								// branch -> 0x842f0
								// 0x842f0
								result2 = v27;
								if (*(int32_t *)(g35 + 4) == 0) {
									// 0x842fc
									g37 = 10;
									v14 = random(125);
									result2 = function_7c204(g28, v14 + 5);
									// branch -> 0x84318
								}
								// 0x84318
								return result2;
							}
						}
						// 0x84180
						function_7c6ec(g28, -1, 0);
						int32_t v28 = g33 + g36; // 0x84194
						g13 = g28;
						int32_t v29 = *(int32_t *)(v28 + 36); // 0x841b8
						int32_t v30 = *(int32_t *)(v28 + 72); // 0x841c0
						AddMissile(*(int32_t *)(v28 + 32), v29, 0, 0, v30, 11, 1, 4, 0);
						g13 = g28;
						int32_t v31 = *(int32_t *)g27;                                                              // 0x841f4
						int32_t v32 = AddMissile(*(int32_t *)g32, *(int32_t *)g31, 0, 0, v31, 12, 1, g30, g29); // 0x841f8
						v13 = v32;
						// branch -> 0x842f0
					}
					// 0x842f0
					result2 = v13;
					if (*(int32_t *)(g35 + 4) == 0) {
						// 0x842fc
						g37 = 10;
						v14 = random(125);
						result2 = function_7c204(g28, v14 + 5);
						// branch -> 0x84318
					}
					// 0x84318
					return result2;
				}
			}
			int32_t v33 = g35; // 0x84228
			if (v10 < 5 * (int32_t) * (char *)(v33 + 157) + 50) {
				int32_t v34 = *(int32_t *)(v33 + 36); // 0x84244
				if (function_85a14(*(int32_t *)(v33 + 32), v34, g32, g31) != 0) {
					int32_t v35 = g35;                        // 0x84258
					unsigned char v36 = *(char *)(v35 + 202); // 0x84260
					g37 = 1 - (int32_t) * (char *)(v35 + 201) + (int32_t)v36;
					int32_t v37 = random(77);                                                      // 0x8426c
					int32_t v38 = g35;                                                             // 0x84270
					unsigned char v39 = *(char *)(v38 + 201);                                      // 0x84278
					unsigned char v40 = *(char *)(g23 - 0x4d90 + (int32_t) * (char *)(v38 + 157)); // 0x84280
					// branch -> 0x842f0
					// 0x842f0
					result2 = function_7c6ec(g28, (int32_t)v40, (int32_t)v39 + v37);
					if (*(int32_t *)(g35 + 4) == 0) {
						// 0x842fc
						g37 = 10;
						v14 = random(125);
						result2 = function_7c204(g28, v14 + 5);
						// branch -> 0x84318
					}
					// 0x84318
					return result2;
				}
			}
			// 0x84294
			g37 = 100;
			if (random(124) > 29) {
				// 0x842cc
				g37 = 10;
				int32_t v41 = random(105); // 0x842d4
				v13 = function_7c204(g28, v41 + 10 + -2 * (int32_t) * (char *)(g35 + 157));
				// branch -> 0x842f0
			} else {
				// 0x842a8
				*(char *)(g35 + 8) = 4;
				*(int32_t *)(g35 + 12) = 0;
				v13 = function_7da34(g28, g29, 0);
				// branch -> 0x842f0
			}
			// 0x842f0
			result2 = v13;
			if (*(int32_t *)(g35 + 4) == 0) {
				// 0x842fc
				g37 = 10;
				v14 = random(125);
				result2 = function_7c204(g28, v14 + 5);
				// branch -> 0x84318
			}
			// 0x84318
			return result2;
		}
		v13 = v10;
	}
	// 0x842f0
	result2 = v13;
	if (*(int32_t *)(g35 + 4) == 0) {
		// 0x842fc
		g37 = 10;
		v14 = random(125);
		result2 = function_7c204(g28, v14 + 5);
		// branch -> 0x84318
	}
	// 0x84318
	return result2;
}

// Address range: 0x8432c - 0x84488
int32_t function_8432c(int32_t a1)
{
	int32_t result = a1; // r3
	g30 = a1;
	g29 = *(int32_t *)(g23 - 0x779c);
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x84340
	g35 = v1;
	int32_t v2 = a1; // 0x84374
	if (a1 >= 200) {
		// 0x84350
		g37 = a1;
		result = app_fatal(*(int32_t *)(g23 - 0x5e60));
		v1 = g35;
		v2 = g30;
		// branch -> 0x8435c
	}
	int32_t v3 = 232 * v2; // 0x8435c
	g32 = v3;
	int32_t v4 = v3 + v1; // 0x84360
	g33 = v4;
	if (*(int32_t *)(v4 + 4) == 0) {
		int32_t v5 = *(int32_t *)(v4 + 32); // r24
		g34 = v2;
		int32_t v6 = *(int32_t *)(v4 + 36);    // r27
		int32_t v7 = function_7bfc0();         // 0x8437c
		uint32_t v8 = *(int32_t *)(g33 + 212); // 0x84380
		g36 = v7;
		if (v8 <= 146) {
			// 0x84390
			if (v8 >= 144) {
				int32_t v9 = v6 + 112 * v5;                               // 0x843a0
				int32_t v10 = (int32_t) * (char *)(v9 + *(int32_t *)g29); // 0x843a4
				if (__asm_rlwinm_(v10, 0, 30, 30) == 0) {
					int32_t v11 = g33; // 0x843b0
					if (*(char *)(v11 + 8) == 7) {
						// 0x843bc
						*(int32_t *)(v11 + 212) = v8 + 1;
						*(char *)(g33 + 8) = 6;
						// branch -> 0x843cc
					}
				}
			}
		}
		int32_t v12 = v6 + 112 * v5;                               // 0x843d4
		int32_t v13 = (int32_t) * (char *)(v12 + *(int32_t *)g29); // 0x843d8
		if (__asm_rlwinm_(v13, 0, 30, 30) != 0) {
			// 0x843e4
			if (*(int32_t *)(g33 + 212) == 147) {
				// 0x843f0
				if (effect_is_playing(842) == 0) {
					char *v14 = (char *)(g33 + 8); // 0x84400
					if (*v14 == 7) {
						// 0x8440c
						*v14 = 1;
						*(char *)(g33 + 164) = -1;
						*(int32_t *)(g33 + 212) = 0;
						// branch -> 0x84424
					}
				}
			}
		}
		unsigned char v15 = *(char *)(g33 + 8); // 0x84424
		int32_t v16;                            // 0x8444c
		int32_t v17;                            // 0x84444
		int32_t v18;                            // 0x84460
		int32_t v19;                            // 0x84464
		if (v15 != 1) {
			// 0x84430
			if (v15 != 4) {
				// 0x84444
				v17 = g32 + g35;
				result = v17;
				*(int32_t *)(v17 + 72) = g36;
				v16 = g33;
				if (*(int32_t *)(v16 + 4) == 0) {
					// 0x84458
					v18 = 8 * g36 + *(int32_t *)(v16 + 224);
					v19 = *(int32_t *)(v18 + 8);
					result = v19;
					*(int32_t *)(v16 + 84) = v19;
					*(int32_t *)(g33 + 88) = *(int32_t *)(v18 + 12);
					// branch -> 0x84474
				}
				// 0x84474
				return result;
			}
		}
		// 0x84438
		g37 = 1;
		function_8201c(g30);
		// branch -> 0x84444
		// 0x84444
		v17 = g32 + g35;
		result = v17;
		*(int32_t *)(v17 + 72) = g36;
		v16 = g33;
		if (*(int32_t *)(v16 + 4) == 0) {
			// 0x84458
			v18 = 8 * g36 + *(int32_t *)(v16 + 224);
			v19 = *(int32_t *)(v18 + 8);
			result = v19;
			*(int32_t *)(v16 + 84) = v19;
			*(int32_t *)(g33 + 88) = *(int32_t *)(v18 + 12);
			// branch -> 0x84474
		}
	}
	// 0x84474
	return result;
}

// Address range: 0x84488 - 0x84628
int32_t function_84488(int32_t a1)
{
	int32_t result = a1; // r3
	g29 = a1;
	g33 = *(int32_t *)(g23 - 0x779c);
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x8449c
	g35 = v1;
	int32_t v2 = a1; // 0x844d0
	if (a1 >= 200) {
		// 0x844ac
		g37 = a1;
		result = app_fatal(*(int32_t *)(g23 - 0x5e64));
		v1 = g35;
		v2 = g29;
		// branch -> 0x844b8
	}
	int32_t v3 = 232 * v2; // 0x844b8
	g31 = v3;
	int32_t v4 = v3 + v1; // 0x844bc
	g32 = v4;
	if (*(int32_t *)(v4 + 4) == 0) {
		int32_t v5 = *(int32_t *)(v4 + 32); // r24
		g34 = v2;
		int32_t v6 = *(int32_t *)(v4 + 36);   // r26
		int32_t v7 = function_7bfc0();        // 0x844d8
		int32_t v8 = *(int32_t *)(g32 + 212); // 0x844dc
		g36 = v7;
		if (v8 == 148) {
			int32_t v9 = v6 + 112 * v5;                               // 0x844f4
			int32_t v10 = (int32_t) * (char *)(v9 + *(int32_t *)g33); // 0x844f8
			if (__asm_rlwinm_(v10, 0, 30, 30) == 0) {
				int32_t v11 = g32; // 0x84504
				if (*(char *)(v11 + 8) == 7) {
					// 0x84510
					*(int32_t *)(v11 + 212) = v8 + 1;
					*(char *)(g32 + 8) = 6;
					// branch -> 0x84520
				}
			}
		}
		int32_t v12 = v6 + 112 * v5;                               // 0x84528
		int32_t v13 = (int32_t) * (char *)(v12 + *(int32_t *)g33); // 0x8452c
		if (__asm_rlwinm_(v13, 0, 30, 30) != 0) {
			int32_t v14 = g32;                                                     // 0x84538
			int32_t v15 = *(int32_t *)(v14 + 36) - (int32_t) * (char *)(v14 + 81); // 0x84548
			g34 = v15;
			g33 = *(int32_t *)(v14 + 32) - (int32_t) * (char *)(v14 + 80);
			int32_t v16 = abs(); // 0x84554
			g34 = g33;
			if (abs() > v16) {
				// 0x8456c
				g34 = g33;
				abs();
				// branch -> 0x84580
			} else {
				// 0x84578
				g34 = v15;
				abs();
				// branch -> 0x84580
			}
			// 0x84580
			if (*(int32_t *)(g32 + 212) == 149) {
				// 0x8458c
				if (effect_is_playing(856) == 0) {
					char *v17 = (char *)(g32 + 8); // 0x8459c
					if (*v17 == 7) {
						// 0x845a8
						*v17 = 1;
						*(char *)(g32 + 164) = -1;
						*(int32_t *)(g32 + 212) = 0;
						// branch -> 0x845c0
					}
				}
			}
		}
		unsigned char v18 = *(char *)(g32 + 8); // 0x845c0
		int32_t v19;                            // 0x845ec
		int32_t v20;                            // 0x845e4
		int32_t v21;                            // 0x84600
		int32_t v22;                            // 0x84604
		if (v18 != 1) {
			// 0x845cc
			if (v18 != 2) {
				// 0x845d4
				if (v18 != 4) {
					// 0x845e4
					v20 = g31 + g35;
					result = v20;
					*(int32_t *)(v20 + 72) = g36;
					v19 = g32;
					if (*(int32_t *)(v19 + 4) == 0) {
						// 0x845f8
						v21 = 8 * g36 + *(int32_t *)(v19 + 224);
						v22 = *(int32_t *)(v21 + 8);
						result = v22;
						*(int32_t *)(v19 + 84) = v22;
						*(int32_t *)(g32 + 88) = *(int32_t *)(v21 + 12);
						// branch -> 0x84614
					}
					// 0x84614
					return result;
				}
			}
		}
		// 0x845dc
		function_83ee0(g29);
		// branch -> 0x845e4
		// 0x845e4
		v20 = g31 + g35;
		result = v20;
		*(int32_t *)(v20 + 72) = g36;
		v19 = g32;
		if (*(int32_t *)(v19 + 4) == 0) {
			// 0x845f8
			v21 = 8 * g36 + *(int32_t *)(v19 + 224);
			v22 = *(int32_t *)(v21 + 8);
			result = v22;
			*(int32_t *)(v19 + 84) = v22;
			*(int32_t *)(g32 + 88) = *(int32_t *)(v21 + 12);
			// branch -> 0x84614
		}
	}
	// 0x84614
	return result;
}

// Address range: 0x84628 - 0x847f0
int32_t function_84628(int32_t a1)
{
	int32_t result = a1; // r3
	g27 = a1;
	g32 = *(int32_t *)(g23 - 0x779c);
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x8463c
	g33 = v1;
	g35 = *(int32_t *)(g23 - 0x7604);
	int32_t v2 = a1; // 0x84674
	if (a1 >= 200) {
		// 0x84650
		g37 = a1;
		result = app_fatal(*(int32_t *)(g23 - 0x5e68));
		v1 = g33;
		v2 = g27;
		// branch -> 0x8465c
	}
	int32_t v3 = 232 * v2; // 0x8465c
	g31 = v3;
	int32_t v4 = v3 + v1; // 0x84660
	g28 = v4;
	if (*(int32_t *)(v4 + 4) == 0) {
		int32_t v5 = *(int32_t *)(v4 + 32); // r26
		g34 = v2;
		int32_t v6 = *(int32_t *)(v4 + 36); // r25
		g36 = function_7bfc0();
		if (*(int32_t *)(g28 + 212) == 20) {
			int32_t v7 = v6 + 112 * v5;                              // 0x84698
			int32_t v8 = (int32_t) * (char *)(v7 + *(int32_t *)g32); // 0x8469c
			if (__asm_rlwinm_(v8, 0, 30, 30) == 0) {
				int32_t v9 = g28; // 0x846a8
				if (*(char *)(v9 + 8) == 7) {
					// 0x846b4
					*(int32_t *)(v9 + 212) = 21;
					*(char *)(g28 + 8) = 6;
					// branch -> 0x846c4
				}
			}
		}
		int32_t *v10 = (int32_t *)(g28 + 212); // 0x846c4
		if (*v10 == 21) {
			// 0x846d0
			if (*(char *)(g35 + 183) == 3) {
				// 0x846dc
				*v10 = 0;
				*(char *)(g28 + 8) = 1;
				// branch -> 0x846ec
			}
		}
		int32_t v11 = v6 + 112 * v5;                               // 0x846f4
		int32_t v12 = (int32_t) * (char *)(v11 + *(int32_t *)g32); // 0x846f8
		int32_t v13;                                               // 0x847b4
		int32_t v14;                                               // 0x847ac
		int32_t v15;                                               // 0x847c8
		int32_t v16;                                               // 0x847cc
		if (__asm_rlwinm_(v12, 0, 30, 30) != 0) {
			// 0x84704
			if (*(int32_t *)(g28 + 212) == 22) {
				// 0x84710
				if (effect_is_playing(852) == 0) {
					// 0x84720
					if (*(char *)(g28 + 8) == 7) {
						int32_t v17 = *(int32_t *)*(int32_t *)(g23 - 0x7554); // 0x84734
						int32_t v18 = *(int32_t *)*(int32_t *)(g23 - 0x7558); // 0x8473c
						int32_t v19 = *(int32_t *)*(int32_t *)(g23 - 0x7550); // 0x84748
						int32_t v20 = *(int32_t *)*(int32_t *)(g23 - 0x754c); // 0x84750
						g34 = function_986b4(v20, v19, v20 + v17 + 1, v19 + v18 + 1);
						*(char *)(g35 + 183) = 3;
						function_97630();
						*(char *)(g28 + 8) = 1;
						*(char *)(g28 + 164) = -1;
						*(int32_t *)(g28 + 212) = 0;
						// branch -> 0x84784
					}
				}
			}
			// 0x84784
			if (*(char *)(g35 + 183) == 3) {
				unsigned char v21 = *(char *)(g28 + 8); // 0x84790
				if (v21 != 1) {
					// 0x8479c
					if (v21 != 5) {
						// 0x847ac
						v14 = g31 + g33;
						result = v14;
						*(int32_t *)(v14 + 72) = g36;
						v13 = g28;
						if (*(int32_t *)(v13 + 4) == 0) {
							// 0x847c0
							v15 = 8 * g36 + *(int32_t *)(v13 + 224);
							v16 = *(int32_t *)(v15 + 8);
							result = v16;
							*(int32_t *)(v13 + 84) = v16;
							*(int32_t *)(g28 + 88) = *(int32_t *)(v15 + 12);
							// branch -> 0x847dc
						}
						// 0x847dc
						return result;
					}
				}
				// 0x847a4
				function_81c8c(g27);
				// branch -> 0x847ac
			}
		}
		// 0x847ac
		v14 = g31 + g33;
		result = v14;
		*(int32_t *)(v14 + 72) = g36;
		v13 = g28;
		if (*(int32_t *)(v13 + 4) == 0) {
			// 0x847c0
			v15 = 8 * g36 + *(int32_t *)(v13 + 224);
			v16 = *(int32_t *)(v15 + 8);
			result = v16;
			*(int32_t *)(v13 + 84) = v16;
			*(int32_t *)(g28 + 88) = *(int32_t *)(v15 + 12);
			// branch -> 0x847dc
		}
	}
	// 0x847dc
	return result;
}

// Address range: 0x847f0 - 0x849e0
int32_t function_847f0(int32_t result3)
{
	int32_t v1 = result3; // 0x847f8
	g28 = v1;
	g31 = *(int32_t *)(g23 - 0x77a8);
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x84804
	g32 = v2;
	g33 = *(int32_t *)(g23 - 0x7604);
	g35 = *(int32_t *)(g23 - 0x77f0);
	int32_t v3 = v1; // 0x84840
	if (v1 >= 200) {
		// 0x8481c
		g37 = v1;
		result3 = app_fatal(*(int32_t *)(g23 - 0x5e6c));
		v2 = g32;
		v3 = g28;
		// branch -> 0x84828
	}
	int32_t v4 = 232 * v3; // 0x84828
	g29 = v4;
	int32_t v5 = v4 + v2; // 0x8482c
	g30 = v5;
	if (*(int32_t *)(v5 + 4) == 0) {
		// 0x8483c
		g34 = v3;
		g36 = function_7bfc0();
		int32_t v6 = *(int32_t *)(v5 + 36) + 112 * *(int32_t *)(v5 + 32);          // 0x8485c
		unsigned char v7 = *(char *)(v6 + *(int32_t *)*(int32_t *)(g23 - 0x779c)); // 0x84860
		if (__asm_rlwinm_((int32_t)v7, 0, 30, 30) != 0) {
			// 0x8486c
			if (*(char *)g35 == 1) {
				int32_t v8 = g30; // 0x84878
				int32_t v9 = v8;  // 0x848d0
				if (*(int32_t *)(v8 + 212) == 35) {
					// 0x84884
					if (*(char *)(v8 + 8) == 6) {
						int32_t v10 = g31 + 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x8489c
						if (*(int32_t *)(v10 + 56) == 35) {
							// 0x848ac
							if (*(int32_t *)(v10 + 60) == 46) {
								// 0x848b8
								PlayInGameMovie(*(int32_t *)(g23 - 0x5e70));
								*(int32_t *)(g30 + 4) = 17;
								*(char *)(g33 + 375) = 5;
								v9 = g30;
								// branch -> 0x848d0
							} else {
								v9 = v8;
							}
						} else {
							v9 = v8;
						}
					} else {
						v9 = v8;
					}
				}
				// 0x848d0
				if (*(int32_t *)(v9 + 212) == 35) {
					// 0x848dc
					if (effect_is_playing(847) == 0) {
						// 0x848ec
						if (*(char *)(g30 + 8) == 7) {
							// 0x848f8
							g34 = function_98800(1, 18, 20, 24);
							function_97630();
							*(char *)(g33 + 375) = 6;
							*(char *)(g30 + 8) = 1;
							*(char *)(g30 + 164) = (char)255;
							*(int32_t *)(g30 + 212) = 0;
							// branch -> 0x84930
						}
					}
				}
			}
			// 0x84930
			if (*(char *)g35 != 1) {
				int32_t v11 = g30; // 0x8493c
				if (*(int32_t *)(v11 + 212) == 35) {
					// 0x84948
					if (*(char *)(v11 + 8) == 6) {
						// 0x84954
						if (*(char *)(g33 + 375) <= 3) {
							// 0x84960
							*(int32_t *)(v11 + 4) = 17;
							// branch -> 0x84968
						}
					}
				}
			}
		}
		int32_t v12 = g30;                      // 0x84968
		unsigned char v13 = *(char *)(v12 + 8); // 0x84968
		int32_t v14;                            // 0x8499c
		int32_t result;                         // 0x84994
		int32_t v15;                            // 0x849b8
		int32_t v16;                            // 0x8499c
		int32_t result2;                        // 0x849bc
		if (v13 != 1) {
			// 0x84974
			if (v13 != 2) {
				// 0x8497c
				if (v13 != 4) {
					// 0x84994
					result = g29 + g32;
					*(int32_t *)(result + 72) = g36;
					v14 = g30;
					v16 = *(int32_t *)(v14 + 4);
					if (v16 != 0) {
						// 0x849a8
						if (v16 != 17) {
							// 0x849cc
							return result;
						}
					}
					// 0x849b0
					v15 = 8 * g36 + *(int32_t *)(v14 + 224);
					result2 = *(int32_t *)(v15 + 8);
					*(int32_t *)(v14 + 84) = result2;
					*(int32_t *)(g30 + 88) = *(int32_t *)(v15 + 12);
					// branch -> 0x849cc
					// 0x849cc
					return result2;
				}
			}
		}
		// 0x84984
		*(int32_t *)(v12 + 212) = 0;
		function_83ee0(g28);
		// branch -> 0x84994
		// 0x84994
		result = g29 + g32;
		*(int32_t *)(result + 72) = g36;
		v14 = g30;
		v16 = *(int32_t *)(v14 + 4);
		if (v16 != 0) {
			// 0x849a8
			if (v16 != 17) {
				// 0x849cc
				return result;
			}
		}
		// 0x849b0
		v15 = 8 * g36 + *(int32_t *)(v14 + 224);
		result2 = *(int32_t *)(v15 + 8);
		result3 = result2;
		*(int32_t *)(v14 + 84) = result2;
		*(int32_t *)(g30 + 88) = *(int32_t *)(v15 + 12);
		// branch -> 0x849cc
	}
	// 0x849cc
	return result3;
}

// Address range: 0x849e0 - 0x84af4
int32_t function_849e0(int32_t a1)
{
	int32_t result = a1; // r3
	g31 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x849ec
	g36 = v1;
	int32_t v2 = a1; // 0x84a24
	if (a1 >= 200) {
		// 0x84a00
		g37 = a1;
		result = app_fatal(*(int32_t *)(g23 - 0x5e74));
		v1 = g36;
		v2 = g31;
		// branch -> 0x84a0c
	}
	int32_t v3 = 232 * v2; // 0x84a0c
	g33 = v3;
	int32_t v4 = v3 + v1; // 0x84a10
	g35 = v4;
	int32_t v5 = v4; // 0x84ad8
	int32_t v6;      // 0x84acc
	int32_t v7;      // 0x84ad0
	if (*(int32_t *)(v4 + 4) == 0) {
		// 0x84a20
		g34 = v2;
		g32 = function_7bfc0();
		int32_t v8 = *(int32_t *)(v4 + 36) + 112 * *(int32_t *)(v4 + 32);          // 0x84a40
		unsigned char v9 = *(char *)(v8 + *(int32_t *)*(int32_t *)(g23 - 0x779c)); // 0x84a44
		int32_t v10;                                                               // 0x84ab0
		if (__asm_rlwinm_((int32_t)v9, 0, 30, 30) != 0) {
			// 0x84a50
			if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
				// 0x84a94
				*(char *)(g35 + 8) = 1;
				// branch -> 0x84a9c
				// 0x84a9c
				if (*(char *)(g35 + 8) == 1) {
					// 0x84aa8
					function_825b0(g31);
					// branch -> 0x84ab0
				}
				// 0x84ab0
				v10 = g33 + g36;
				result = v10;
				*(int32_t *)(v10 + 72) = g32;
				v5 = g35;
				// branch -> 0x84ab8
				// 0x84ab8
				if (*(int32_t *)(v5 + 4) == 0) {
					// 0x84ac4
					v6 = 8 * g32 + *(int32_t *)(v5 + 224);
					v7 = *(int32_t *)(v6 + 8);
					result = v7;
					*(int32_t *)(v5 + 84) = v7;
					*(int32_t *)(g35 + 88) = *(int32_t *)(v6 + 12);
					// branch -> 0x84ae0
				}
				// 0x84ae0
				return result;
			}
			// 0x84a60
			if (*(char *)(*(int32_t *)(g23 - 0x7604) + 375) > 5) {
				// 0x84a7c
				*(char *)(g35 + 8) = 1;
				*(int32_t *)(g35 + 212) = 0;
				// branch -> 0x84a9c
			} else {
				// 0x84a70
				*(char *)(g35 + 8) = 6;
				// branch -> 0x84a9c
			}
			// 0x84a9c
			if (*(char *)(g35 + 8) == 1) {
				// 0x84aa8
				function_825b0(g31);
				// branch -> 0x84ab0
			}
			// 0x84ab0
			v10 = g33 + g36;
			result = v10;
			*(int32_t *)(v10 + 72) = g32;
			v5 = g35;
			// branch -> 0x84ab8
			// 0x84ab8
			if (*(int32_t *)(v5 + 4) == 0) {
				// 0x84ac4
				v6 = 8 * g32 + *(int32_t *)(v5 + 224);
				v7 = *(int32_t *)(v6 + 8);
				result = v7;
				*(int32_t *)(v5 + 84) = v7;
				*(int32_t *)(g35 + 88) = *(int32_t *)(v6 + 12);
				// branch -> 0x84ae0
			}
			// 0x84ae0
			return result;
		}
		// 0x84a9c
		if (*(char *)(g35 + 8) == 1) {
			// 0x84aa8
			function_825b0(g31);
			// branch -> 0x84ab0
		}
		// 0x84ab0
		v10 = g33 + g36;
		result = v10;
		*(int32_t *)(v10 + 72) = g32;
		v5 = g35;
		// branch -> 0x84ab8
	}
	// 0x84ab8
	if (*(int32_t *)(v5 + 4) == 0) {
		// 0x84ac4
		v6 = 8 * g32 + *(int32_t *)(v5 + 224);
		v7 = *(int32_t *)(v6 + 8);
		result = v7;
		*(int32_t *)(v5 + 84) = v7;
		*(int32_t *)(g35 + 88) = *(int32_t *)(v6 + 12);
		// branch -> 0x84ae0
	}
	// 0x84ae0
	return result;
}

// Address range: 0x84af4 - 0x84c30
int32_t function_84af4(int32_t a1)
{
	int32_t result = a1; // r3
	g29 = a1;
	g33 = *(int32_t *)(g23 - 0x779c);
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x84b08
	g35 = v1;
	int32_t v2 = a1; // 0x84b3c
	if (a1 >= 200) {
		// 0x84b18
		g37 = a1;
		result = app_fatal(*(int32_t *)(g23 - 0x5e78));
		v1 = g35;
		v2 = g29;
		// branch -> 0x84b24
	}
	int32_t v3 = 232 * v2; // 0x84b24
	g32 = v3;
	int32_t v4 = v3 + v1; // 0x84b28
	g30 = v4;
	if (*(int32_t *)(v4 + 4) == 0) {
		int32_t v5 = *(int32_t *)(v4 + 32); // r24
		g34 = v2;
		int32_t v6 = *(int32_t *)(v4 + 36);   // r27
		int32_t v7 = function_7bfc0();        // 0x84b44
		int32_t v8 = *(int32_t *)(g30 + 212); // 0x84b48
		g36 = v7;
		if (v8 == 81) {
			int32_t v9 = v6 + 112 * v5;                               // 0x84b60
			int32_t v10 = (int32_t) * (char *)(v9 + *(int32_t *)g33); // 0x84b64
			if (__asm_rlwinm_(v10, 0, 30, 30) == 0) {
				int32_t v11 = g30; // 0x84b70
				if (*(char *)(v11 + 8) == 7) {
					// 0x84b7c
					*(int32_t *)(v11 + 212) = v8 + 1;
					*(char *)(g30 + 8) = 6;
					// branch -> 0x84b8c
				}
			}
		}
		int32_t v12 = v6 + 112 * v5;                               // 0x84b94
		int32_t v13 = (int32_t) * (char *)(v12 + *(int32_t *)g33); // 0x84b98
		if (__asm_rlwinm_(v13, 0, 30, 30) != 0) {
			// 0x84ba4
			if (*(int32_t *)(g30 + 212) == 83) {
				// 0x84bb0
				if (effect_is_playing(846) == 0) {
					int32_t v14 = g30; // 0x84bc0
					if (*(char *)(v14 + 8) == 7) {
						// 0x84bcc
						*(int32_t *)(v14 + 212) = 0;
						*(char *)(*(int32_t *)(g23 - 0x7604) + 98) = 3;
						M_StartKill(g29, -1);
						// branch -> 0x84bec
					}
				}
			}
		}
		int32_t v15 = g32 + g35; // 0x84bec
		result = v15;
		*(int32_t *)(v15 + 72) = g36;
		int32_t v16 = g30; // 0x84bf4
		if (*(int32_t *)(v16 + 4) == 0) {
			int32_t v17 = 8 * g36 + *(int32_t *)(v16 + 224); // 0x84c08
			int32_t v18 = *(int32_t *)(v17 + 8);             // 0x84c0c
			result = v18;
			*(int32_t *)(v16 + 84) = v18;
			*(int32_t *)(g30 + 88) = *(int32_t *)(v17 + 12);
			// branch -> 0x84c1c
		}
	}
	// 0x84c1c
	return result;
}

// Address range: 0x84c30 - 0x84d60
int32_t function_84c30(int32_t a1)
{
	int32_t result2 = a1; // r3
	g32 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x84c3c
	g36 = v1;
	int32_t v2 = a1; // 0x84c74
	if (a1 >= 200) {
		// 0x84c50
		g37 = a1;
		result2 = app_fatal(*(int32_t *)(g23 - 0x5e7c));
		v1 = g36;
		v2 = g32;
		// branch -> 0x84c5c
	}
	int32_t v3 = 232 * v2; // 0x84c5c
	g33 = v3;
	int32_t v4 = v3 + v1; // 0x84c60
	g35 = v4;
	if (*(int32_t *)(v4 + 4) == 0) {
		// 0x84c70
		g34 = v2;
		g31 = function_7bfc0();
		int32_t v5 = *(int32_t *)(v4 + 36) + 112 * *(int32_t *)(v4 + 32);          // 0x84c90
		unsigned char v6 = *(char *)(v5 + *(int32_t *)*(int32_t *)(g23 - 0x779c)); // 0x84c94
		if (__asm_rlwinm_((int32_t)v6, 0, 30, 30) != 0) {
			int32_t v7 = g35; // 0x84ca0
			int32_t v8 = v7;  // 0x84cc0
			if (*(int32_t *)(v7 + 212) == 110) {
				// 0x84cac
				if (*(char *)(v7 + 8) == 6) {
					// 0x84cb8
					*(int32_t *)(v7 + 4) = 17;
					v8 = g35;
					// branch -> 0x84cc0
				} else {
					v8 = v7;
				}
			}
			// 0x84cc0
			if (*(int32_t *)(v8 + 212) == 110) {
				// 0x84ccc
				if (effect_is_playing(853) == 0) {
					char *v9 = (char *)(g35 + 8); // 0x84cdc
					if (*v9 == 7) {
						// 0x84ce8
						*v9 = 1;
						*(char *)(g35 + 164) = -1;
						*(int32_t *)(g35 + 212) = 0;
						// branch -> 0x84d00
					}
				}
			}
		}
		// 0x84d00
		if (*(char *)(g35 + 8) == 1) {
			// 0x84d0c
			function_80a28(g32);
			// branch -> 0x84d14
		}
		int32_t result = g33 + g36; // 0x84d14
		*(int32_t *)(result + 72) = g31;
		int32_t v10 = *(int32_t *)(g35 + 4); // 0x84d1c
		if (v10 != 0) {
			// 0x84d28
			if (v10 != 17) {
				// 0x84d4c
				return result;
			}
		}
		int32_t v11 = 8 * g31 + *(int32_t *)(g35 + 224); // 0x84d38
		int32_t v12 = *(int32_t *)(v11 + 8);             // 0x84d3c
		result2 = v12;
		*(int32_t *)(g35 + 84) = v12;
		*(int32_t *)(g35 + 88) = *(int32_t *)(v11 + 12);
		// branch -> 0x84d4c
	}
	// 0x84d4c
	return result2;
}

// Address range: 0x84d60 - 0x84e94
int32_t function_84d60(void)
{
	int32_t v1 = g10;                        // 0x84d64
	int32_t v2 = *(int32_t *)(g23 - 0x762c); // r31
	int32_t v3 = 1;                          // r3
	int32_t v4 = *(int32_t *)(g23 - 0x7754); // 0x84d7c
	int32_t v5 = 0;                          // r0
	int32_t v6 = v4;                         // 0x84db4
	if (*(int32_t *)(v4 + 112) != 0) {
		// 0x84d98
		*(int32_t *)(v4 + 32) = 1;
		*(int32_t *)(v4 + 36) = v5;
		*(int32_t *)(v4 + 40) = v5;
		*(int32_t *)(v4 + 44) = v5;
		*(int32_t *)(v4 + 48) = v5;
		*(int32_t *)(v4 + 52) = v5;
		*(int32_t *)(v4 + 112) = v5;
		v6 = v4;
		// branch -> 0x84db4
	}
	int32_t v7 = v6 + 232; // 0x84db4
	if (*(int32_t *)(v6 + 344) != 0) {
		// 0x84dc4
		*(int32_t *)(v6 + 264) = v3;
		*(int32_t *)(v7 + 36) = v5;
		*(int32_t *)(v7 + 40) = v5;
		*(int32_t *)(v7 + 44) = v5;
		*(int32_t *)(v7 + 48) = v5;
		*(int32_t *)(v7 + 52) = v5;
		*(int32_t *)(v7 + 112) = v5;
		// branch -> 0x84de0
	}
	int32_t v8 = v7 + 232; // 0x84de4
	v7 = v8;
	if (*(int32_t *)(v7 + 344) != 0) {
		// 0x84df0
		*(int32_t *)(v7 + 264) = v3;
		*(int32_t *)(v7 + 36) = v5;
		*(int32_t *)(v7 + 40) = v5;
		*(int32_t *)(v7 + 44) = v5;
		*(int32_t *)(v7 + 48) = v5;
		*(int32_t *)(v7 + 52) = v5;
		*(int32_t *)(v7 + 112) = v5;
		v8 = v7;
		// branch -> 0x84e0c
	}
	// 0x84e0c
	v7 = v8 + 232;
	if (*(int32_t *)(v8 + 344) != 0) {
		// 0x84e1c
		*(int32_t *)(v8 + 264) = v3;
		*(int32_t *)(v7 + 36) = v5;
		*(int32_t *)(v7 + 40) = v5;
		*(int32_t *)(v7 + 44) = v5;
		*(int32_t *)(v7 + 48) = v5;
		*(int32_t *)(v7 + 52) = v5;
		*(int32_t *)(v7 + 112) = v5;
		// branch -> 0x84e38
	}
	// 0x84e38
	if (*(int32_t *)v2 <= 4) {
		// 0x84e78
		g10 = v1;
		return 4;
	}
	int32_t v9 = v2; // 0x84e6c12
	int32_t v10 = 4; // 0x84e68
	int32_t result;
	while (true) {
		int32_t v11 = 232 * *(int32_t *)(*(int32_t *)(g23 - 0x7628) + 4 * v10); // 0x84e48
		int32_t v12;                                                            // 0x84e6c
		if (*(int32_t *)(v4 + v11 + 112) == 0) {
			// 0x84e68
			v12 = v9;
			result = v10 + 1;
			// branch -> 0x84e6c
		} else {
			// 0x84e5c
			function_7ba88(v11);
			v12 = v2;
			result = 0;
			// branch -> 0x84e6c
		}
		// 0x84e6c
		if (result >= *(int32_t *)v12) {
			// break -> 0x84e78
			break;
		}
		v9 = v12;
		v10 = result;
		// continue -> 0x84e40
	}
	// 0x84e78
	g10 = v1;
	return result;
}

// Address range: 0x84e94 - 0x852f8
int32_t ProcessMonsters(int32_t a1)
{
	// 0x84e94
	g33 = *(int32_t *)(g23 - 0x70d0);
	g27 = *(int32_t *)(g23 - 0x5e84);
	g26 = *(int32_t *)(g23 - 0x5e80);
	g28 = *(int32_t *)(g23 - 0x779c);
	g32 = *(int32_t *)(g23 - 0x77a8);
	g31 = *(int32_t *)(g23 - 0x7754);
	g25 = *(int32_t *)(g23 - 0x77f0);
	g24 = *(int32_t *)(g23 - 0x762c);
	function_84d60();
	int32_t v1 = *(int32_t *)(g23 - 0x7628); // 0x84ec8
	g29 = v1;
	g30 = 0;
	int32_t result; // 0x852e0
	if (*(int32_t *)g24 > 0) {
		while (true) {
			int32_t v2 = *(int32_t *)v1; // 0x84ed4
			g20 = 0;
			g36 = v2;
			int32_t v3 = g31 + 232 * v2; // 0x84eec
			g35 = v3;
			if ((*(char *)g25 || 1) != 1) {
				// 0x84ef4
				g34 = *(int32_t *)(v3 + 184);
				SetRndSeed();
				*(int32_t *)(g35 + 184) = GetRndSeed();
				v2 = g36;
				// branch -> 0x84f04
			}
			// 0x84f04
			int32_t v4; // 0x84f58
			int32_t v5; // 0x84f58
			int32_t v6; // 0x84f5c
			int32_t v7; // 0x84f6c
			if (__asm_rlwinm_(*(int32_t *)(232 * v2 + 160 + g31), 0, 28, 28) == 0) {
				int32_t v8 = g35;                    // 0x84f18
				int32_t *v9 = (int32_t *)(v8 + 152); // 0x84f18
				int32_t v10 = *v9;                   // 0x84f18
				if (v10 < *(int32_t *)(v8 + 148)) {
					// 0x84f28
					if (v10 >= 64) {
						char v11 = *(char *)(v8 + 196); // 0x84f30
						int32_t v12 = v11;              // 0x84f34
						if (v11 < 2) {
							// 0x84f50
							*v9 = v12 + v10;
							// branch -> 0x84f58
						} else {
							// 0x84f40
							*v9 = (v12 / 2 | v12 & -0x80000000) + v10;
							// branch -> 0x84f58
						}
						// 0x84f58
						v4 = g35;
						v5 = *(int32_t *)(v4 + 32);
						g22 = v5;
						v6 = *(int32_t *)(v4 + 36);
						g21 = v6;
						v7 = (int32_t) * (char *)(*(int32_t *)g28 + v6 + 112 * v5);
						if (__asm_rlwinm_(v7, 0, 30, 30) != 0) {
						lab_0x84f78:;
							int32_t v13 = g35; // 0x84f78
							if (*(char *)(v13 + 164) == 0) {
								// 0x84f84
								if (*(char *)*(int32_t *)(v13 + 224) == 51) {
									// 0x84f94
									g34 = 838;
									PlaySFX(838);
									// branch -> 0x84f9c
								}
							}
						}
					lab_0x84f9c:;
						int32_t v14 = __asm_rlwinm_(*(int32_t *)(g35 + 160), 0, 27, 27); // 0x84fa0
						int32_t v15 = g35;                                               // 0x84ff4
						uint32_t v16 = *(int32_t *)(v15 + 76);                           // 0x84ff4
						g37 = v16;
						if (v14 == 0) {
							if (v16 >= 4) {
								// 0x85000
								app_fatal(g27);
								v15 = g35;
								// branch -> 0x8500c
							}
							int32_t v17 = *(int32_t *)(g32 + 0x55ec * *(int32_t *)(v15 + 76) + 64); // 0x85020
							*(char *)(v15 + 80) = (char)v17;
							int32_t v18 = g35;                                                      // 0x85028
							int32_t v19 = *(int32_t *)(g32 + 0x55ec * *(int32_t *)(v18 + 76) + 68); // 0x85034
							*(char *)(v18 + 81) = (char)v19;
							int32_t v20 = (int32_t) * (char *)(g21 + 112 * g22 + *(int32_t *)g28); // 0x85040
							if (__asm_rlwinm_(v20, 0, 30, 30) == 0) {
								int32_t v21 = g35;               // 0x85080
								char *v22 = (char *)(v21 + 164); // 0x85080
								unsigned char v23 = *v22;        // 0x85080
								int32_t v24 = v23;               // 0x85080
								if (v23 != 0) {
									// 0x8508c
									if (*(char *)(v21 + 156) != 110) {
										// 0x85098
										*v22 = (char)(v24 - 1);
										// branch -> 0x850a0
									}
								}
							} else {
								// 0x8504c
								*(char *)(g35 + 164) = -1;
								int32_t v25 = g35;                                                      // 0x85054
								int32_t v26 = *(int32_t *)(g32 + 0x55ec * *(int32_t *)(v25 + 76) + 64); // 0x85060
								*(int32_t *)(v25 + 172) = v26;
								int32_t v27 = g35;                                                      // 0x85068
								int32_t v28 = *(int32_t *)(g32 + 0x55ec * *(int32_t *)(v27 + 76) + 68); // 0x85074
								*(int32_t *)(v27 + 176) = v28;
								// branch -> 0x850a0
							}
						lab_0x850a0:
							while (true) {
								// 0x850a0
								if (__asm_rlwinm_(*(int32_t *)(g35 + 160), 0, 23, 23) == 0) {
								lab_0x850d8:
									// 0x850d8
									g34 = g36;
									g15 = *(int32_t *)(g33 + 4 * (int32_t) * (char *)(g35 + 156));
									FunctionPointer();
									// branch -> 0x850f0
								} else {
								lab_0x850ac:
									// 0x850ac
									if (function_80bbc(g36) == 0) {
										// 0x850bc
										g34 = g36;
										g15 = *(int32_t *)(g33 + 4 * (int32_t) * (char *)(g35 + 156));
										FunctionPointer();
										// branch -> 0x850f0
									}
								}
								uint32_t v29 = *(int32_t *)(g35 + 4); // 0x850f0
								if (v29 <= 17) {
									// 0x850fc
									return *(int32_t *)(*(int32_t *)(g23 - 0x5e88) + 4 * v29);
								}
								int32_t v30 = 0; // 0x85234
								if (g20 != 0) {
									// 0x8522c
									function_8005c(g36);
									v30 = g20;
									// branch -> 0x85234
								}
								// 0x85234
								if (v30 == 0) {
									// break -> 0x8523c
									break;
								}
								// continue -> 0x850a0
							}
							int32_t v31 = g35; // 0x8523c
							int32_t v32;       // 0x852cc
							int32_t v33;       // 0x852d0
							if (*(int32_t *)(v31 + 4) != 15) {
								int32_t *v34 = (int32_t *)(v31 + 96); // 0x85248
								*v34 = *v34 + 1;
								if (__asm_rlwinm_(*(int32_t *)(g35 + 160), 0, 29, 29) == 0) {
									int32_t v35 = g35;                    // 0x85260
									int32_t *v36 = (int32_t *)(v35 + 96); // 0x85260
									if (*v36 >= *(int32_t *)(v35 + 92)) {
										// 0x85270
										*v36 = 0;
										int32_t v37 = __asm_rlwinm_(*(int32_t *)(g35 + 160), 0, 30, 30); // 0x8527c
										int32_t *v38 = (int32_t *)(g35 + 104);                           // 0x852a8
										int32_t v39 = *v38;                                              // 0x852a8
										if (v37 == 0) {
											// 0x852a8
											*v38 = v39 + 1;
											int32_t v40 = g35;                     // 0x852b4
											int32_t *v41 = (int32_t *)(v40 + 104); // 0x852b4
											if (*v41 > *(int32_t *)(v40 + 100)) {
												// 0x852c4
												*v41 = 1;
												// branch -> 0x852cc
											}
										} else {
											// 0x85284
											*v38 = v39 - 1;
											int32_t v42 = g35;                     // 0x85290
											int32_t *v43 = (int32_t *)(v42 + 104); // 0x85290
											if (*v43 == 0) {
												// 0x8529c
												*v43 = *(int32_t *)(v42 + 100);
												// branch -> 0x852cc
											}
										}
										// 0x852cc
										v32 = g29 + 4;
										g29 = v32;
										v33 = g30 + 1;
										g30 = v33;
										if (v33 >= *(int32_t *)g24) {
											// break -> 0x852e0
											break;
										}
										v1 = v32;
										// continue -> 0x84ed4
										continue;
									}
								}
							}
							// 0x852cc
							v32 = g29 + 4;
							g29 = v32;
							v33 = g30 + 1;
							g30 = v33;
							if (v33 >= *(int32_t *)g24) {
								// break -> 0x852e0
								break;
							}
							v1 = v32;
							// continue -> 0x84ed4
							continue;
						} else {
							if (v16 >= 200) {
								// 0x84fb4
								app_fatal(g26);
								v15 = g35;
								// branch -> 0x84fc0
							}
							int32_t v44 = *(int32_t *)(g31 + 232 * *(int32_t *)(v15 + 76) + 40); // 0x84fcc
							*(int32_t *)(v15 + 172) = v44;
							*(char *)(g35 + 80) = (char)v44;
							int32_t v45 = g35;                                                   // 0x84fd8
							int32_t v46 = *(int32_t *)(g31 + 232 * *(int32_t *)(v45 + 76) + 44); // 0x84fe4
							*(int32_t *)(v45 + 176) = v46;
							*(char *)(g35 + 81) = (char)v46;
							// branch -> 0x850a0
							goto lab_0x850a0;
						}
						while (true) {
							int32_t v47 = g35;                     // 0x850a0
							int32_t v48 = *(int32_t *)(v47 + 160); // 0x850a0
							if (__asm_rlwinm_(v48, 0, 23, 23) == 0) {
								goto lab_0x850d8;
							}
							goto lab_0x850ac;
						}
						// 0x852e0
						result = function_84d60();
						int32_t v49; // 0x84e98
						g10 = v49;
						return result;
					}
				}
			}
			// 0x84f58
			v4 = g35;
			v5 = *(int32_t *)(v4 + 32);
			g22 = v5;
			v6 = *(int32_t *)(v4 + 36);
			g21 = v6;
			v7 = (int32_t) * (char *)(*(int32_t *)g28 + v6 + 112 * v5);
			if (__asm_rlwinm_(v7, 0, 30, 30) == 0) {
				goto lab_0x84f9c;
			}
			goto lab_0x84f78;
		}
	}
	// 0x852e0
	result = function_84d60();
	return result;
}

// Address range: 0x852f8 - 0x8539c
int32_t FreeMonsters(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x70a0); // 0x85300
	g33 = v1;
	int32_t v2 = 0;                          // r24
	int32_t v3 = *(int32_t *)(g23 - 0x7618); // 0x85308
	g35 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x72b4); // 0x8530c
	g36 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x7610); // 0x85310
	if (*(int32_t *)v3 > 0) {
		while (true) {
			int32_t v6 = 0; // r23
			g34 = 0;
			int32_t v7 = v5; // r27
			g32 = v1;
			int32_t v8 = 128 * (int32_t) * (char *)v5 + v4; // r26
			int32_t v9 = 0;                                 // 0x8535c13
			int32_t v10 = v5;                               // 0x85354
			int32_t v11 = v1;                               // 0x8533c
			// branch -> 0x8533c
			while (true) {
				// 0x8533c
				int32_t v12; // 0x8535c
				int32_t v13; // 0x85360
				int32_t v14; // 0x85368
				if (*(char *)v11 == 115) {
					// 0x85348
					if (*(int32_t *)(v8 + 12) != 0) {
						// 0x85354
						g34 = MemFreeDbg((int32_t *)(v10 + 4));
						v14 = g32;
						v13 = v7;
						v12 = v6;
						// branch -> 0x8535c
					} else {
						v14 = v11;
						v13 = v10;
						v12 = v9;
					}
				} else {
					// 0x85354
					g34 = MemFreeDbg((int32_t *)(v10 + 4));
					v14 = g32;
					v13 = v7;
					v12 = v6;
					// branch -> 0x8535c
				}
				int32_t v15 = v12 + 1; // 0x8535c
				v6 = v15;
				int32_t v16 = v13 + 76; // 0x85360
				v7 = v16;
				int32_t v17 = v14 + 1; // 0x85368
				g32 = v17;
				if (v15 >= 6) {
					// break -> 0x85370
					break;
				}
				v9 = v15;
				v10 = v16;
				v11 = v17;
				// continue -> 0x8533c
			}
			int32_t v18 = v5 + 520; // 0x85370
			v5 = v18;
			int32_t v19 = v2 + 1; // 0x85374
			v2 = v19;
			if (v19 < *(int32_t *)g35) {
				// 0x85370
				v4 = g36;
				v1 = g33;
				v5 = v18;
				// branch -> 0x85320
				continue;
			}
		}
	}
	int32_t result = function_6fc30(); // 0x85384
	return result;
}

// Address range: 0x8539c - 0x856e4
int32_t function_8539c(void)
{
	int32_t v1 = g10; // 0x853a0
	int32_t v2 = g34; // 0x853a4
	g31 = v2;
	g30 = *(int32_t *)(g23 - 0x779c);
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0x853b0
	g36 = v3;
	int32_t v4 = g37; // 0x853b4
	g29 = v4;
	int32_t v5 = g23; // 0x853d4
	int32_t v6 = v2;  // 0x85424
	if (v2 >= 200) {
		// 0x853c4
		g37 = v2;
		app_fatal(*(int32_t *)(g23 - 0x5e8c));
		v4 = g29;
		v3 = g36;
		v5 = g23;
		v6 = g31;
		// branch -> 0x853d0
	}
	int32_t v7 = 232 * v6; // 0x853d0
	g35 = v7;
	int32_t v8 = *(int32_t *)(v5 - 0x71ec); // 0x853d8
	g38 = v8;
	int32_t v9 = v7 + v3;                                         // 0x853dc
	int32_t v10 = 4 * v4;                                         // 0x853e0
	int32_t v11 = *(int32_t *)(*(int32_t *)(v5 - 0x71f0) + v10);  // 0x853e8
	uint32_t v12 = v11 + *(int32_t *)(v9 + 36);                   // 0x853f0
	int32_t v13 = *(int32_t *)(v8 + v10) + *(int32_t *)(v9 + 32); // 0x853f8
	g33 = v13;
	g32 = v12;
	if (v12 >= 0) {
		// 0x85404
		if (v12 <= 111) {
			// 0x8540c
			if (v13 >= 0) {
				// 0x85414
				if (v13 < 112) {
					// 0x85424
					if (function_86824(v6, v13, v12) == 0) {
						// 0x8543c
						// branch -> 0x856d0
						// 0x856d0
						g10 = v1;
						return 0;
					}
					int32_t v14 = g29; // 0x85444
					int32_t v15;       // 0x85554
					int32_t v16;       // 0x855dc
					int32_t v17;       // 0x855e8
					int32_t v18;       // 0x8569419
					int32_t v19;       // 0x8569420
					int32_t v20;       // 0x856a4
					int32_t v21;       // 0x856a8
					int32_t result2;   // 0x856e0
					int32_t v22;       // 0x85564
					int32_t v23;       // 0x855dc
					int32_t v24;       // 0x855f0
					int32_t v25;       // 0x85600
					int32_t v26;       // 0x856c0
					int32_t result;    // 0x856c4
					int32_t v27;       // 0x85554
					int32_t v28;       // 0x855ec
					int32_t v29;       // 0x85618
					int32_t v30;       // 0x85578
					int32_t v31;       // 0x85598
					unsigned char v32; // 0x855b8
					int32_t v33;       // 0x855c4
					uint16_t v34;      // 0x855d0
					if (v14 == 6) {
						// 0x8544c
						g34 = g33;
						g37 = g32 + 1;
						if (function_a3ef8() != 0) {
							// 0x85460
							// branch -> 0x856d0
							// 0x856d0
							g10 = v1;
							return 0;
						}
						unsigned char v35 = *(char *)(g32 + *(int32_t *)g30 + 112 * g33 + 1); // 0x85478
						if (__asm_rlwinm_((int32_t)v35, 0, 27, 27) != 0) {
							// 0x85484
							// branch -> 0x856d0
							// 0x856d0
							g10 = v1;
							return 0;
						}
						// 0x85554
						v15 = g36;
						v27 = g35 + v15;
						if (*(char *)(v27 + 217) == 1) {
							// 0x85564
							v22 = v27 + 216;
							g31 = v22;
							g30 = 0;
							v30 = *(int32_t *)(232 * (int32_t) * (char *)v22 + v15 + 40);
							if (abs(g33 - v30) <= 3) {
								// 0x8558c
								v31 = *(int32_t *)(g36 + 232 * (int32_t) * (char *)g31 + 44);
								if (abs(g32 - v31) <= 3) {
									// 0x855ac
									g30 = 1;
									// branch -> 0x855b0
								}
							}
							// 0x855b0
							result2 = g30 % 256;
							// branch -> 0x856d0
						} else {
							// 0x855b8
							v32 = *(char *)(v27 + 192);
							if (v32 != 0) {
								// 0x855c4
								v33 = *(int32_t *)(g23 - 0x708c);
								v34 = *(int16_t *)(v33 + 32 * (int32_t)v32 - 10);
								if (__asm_rlwinm_((int32_t)v34, 0, 30, 30) != 0) {
									// 0x855dc
									v16 = g33;
									v23 = v16 - 3;
									v17 = g32;
									v28 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
									g38 = v28;
									v24 = v16 + 3;
									if (v23 > v24) {
										// 0x856b4
										v26 = llvm_ctlz_i32((int32_t) * (char *)(g35 + g36 + 218), true);
										result = __asm_rlwinm(v26, 27, 24, 31);
										// branch -> 0x856d0
										// 0x856d0
										g10 = v1;
										return result;
									}
									// 0x85600
									v25 = v17 - 3;
									v18 = 0;
									v21 = v23;
									v20 = v28 + 224 * v23;
									// branch -> 0x85600
									while (true) {
										// 0x85600
										v29 = v20 + 2 * v25;
										g38 = v29;
										v19 = v18;
										int32_t v36; // 0x856a8
										if (v25 <= v17 + 3) {
										lab_0x85620_6:;
											int32_t v37 = 7;    // 0x856a0
											int32_t v38 = v18;  // 0x85694
											int32_t v39 = v29;  // 0x85698
											uint32_t v40 = v25; // 0x8569c
											// branch -> 0x85620
											while (true) {
												int32_t v41 = v38; // 0x8569421
												if (v40 >= 0) {
													// 0x85628
													if (v40 <= 111) {
														// 0x85630
														if (v21 >= 0) {
															// 0x85638
															if (v21 <= 111) {
																uint16_t v42 = *(int16_t *)v39; // 0x85640
																int32_t v43 = v42;              // 0x85640
																int32_t v44 = v43;              // 0x85658
																if (v42 <= 0xffff) {
																	// 0x8564c
																	v44 = -v43;
																	// branch -> 0x85650
																}
																int32_t v45 = 0; // 0x8565c
																if (v44 != 0) {
																	// 0x85658
																	v45 = v44 - 1;
																	// branch -> 0x8565c
																}
																int32_t v46 = g36 + 232 * v45; // 0x85660
																if (*(char *)(v46 + 217) == 1) {
																	// 0x85670
																	if (g31 == (int32_t) * (char *)(v46 + 216)) {
																		// 0x8567c
																		if (v21 == *(int32_t *)(v46 + 40)) {
																			// 0x85688
																			if (v40 == *(int32_t *)(v46 + 44)) {
																				// 0x85694
																				v41 = v38 + 1;
																				// branch -> 0x85698
																			} else {
																				v41 = v38;
																			}
																		} else {
																			v41 = v38;
																		}
																	} else {
																		v41 = v38;
																	}
																} else {
																	v41 = v38;
																}
															} else {
																v41 = v38;
															}
														} else {
															v41 = v38;
														}
													} else {
														v41 = v38;
													}
												}
												int32_t v47 = v39 + 2; // 0x85698
												g38 = v47;
												int32_t v48 = v40 + 1; // 0x8569c
												int32_t v49 = v37 - 1; // 0x856a0
												if (v49 == 0) {
													v19 = v41;
													// break -> 0x856a4
													break;
												}
												v37 = v49;
												v38 = v41;
												v39 = v47;
												v40 = v48;
												// continue -> 0x85620
											}
											// 0x856a4
											v36 = v21 + 1;
											if (v36 > v24) {
												// break -> 0x856b4
												break;
											}
											v18 = v19;
											v21 = v36;
											v20 += 224;
											// continue -> 0x85600
											continue;
										}
									lab_0x856a4_6:
										// 0x856a4
										v36 = v21 + 1;
										if (v36 > v24) {
											// break -> 0x856b4
											break;
										}
										v18 = v19;
										v21 = v36;
										v20 += 224;
										// continue -> 0x85600
									}
									// 0x856b4
									v26 = llvm_ctlz_i32((int32_t) * (char *)(g35 + g36 + 218) - v19, true);
									result = __asm_rlwinm(v26, 27, 24, 31);
									// branch -> 0x856d0
									// 0x856d0
									g10 = v1;
									return result;
								}
							}
							// 0x856cc
							result2 = 1;
							// branch -> 0x856d0
						}
						// 0x856d0
						g10 = v1;
						return result2;
					}
					// 0x8548c
					if (v14 == 2) {
						// 0x85494
						g34 = g33 + 1;
						g37 = g32;
						if (function_a3ef8() != 0) {
							// 0x854a8
							// branch -> 0x856d0
							// 0x856d0
							g10 = v1;
							return 0;
						}
						unsigned char v50 = *(char *)(g32 + *(int32_t *)g30 + 112 * g33 + 112); // 0x854c0
						if (__asm_rlwinm_((int32_t)v50, 0, 27, 27) != 0) {
							// 0x854cc
							// branch -> 0x856d0
							// 0x856d0
							g10 = v1;
							return 0;
						}
						// 0x85554
						v15 = g36;
						v27 = g35 + v15;
						if (*(char *)(v27 + 217) == 1) {
							// 0x85564
							v22 = v27 + 216;
							g31 = v22;
							g30 = 0;
							v30 = *(int32_t *)(232 * (int32_t) * (char *)v22 + v15 + 40);
							if (abs(g33 - v30) <= 3) {
								// 0x8558c
								v31 = *(int32_t *)(g36 + 232 * (int32_t) * (char *)g31 + 44);
								if (abs(g32 - v31) <= 3) {
									// 0x855ac
									g30 = 1;
									// branch -> 0x855b0
								}
							}
							// 0x855b0
							result2 = g30 % 256;
							// branch -> 0x856d0
						} else {
							// 0x855b8
							v32 = *(char *)(v27 + 192);
							if (v32 != 0) {
								// 0x855c4
								v33 = *(int32_t *)(g23 - 0x708c);
								v34 = *(int16_t *)(v33 + 32 * (int32_t)v32 - 10);
								if (__asm_rlwinm_((int32_t)v34, 0, 30, 30) != 0) {
									// 0x855dc
									v16 = g33;
									v23 = v16 - 3;
									v17 = g32;
									v28 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
									g38 = v28;
									v24 = v16 + 3;
									if (v23 <= v24) {
										// 0x85600
										v25 = v17 - 3;
										v18 = 0;
										v21 = v23;
										v20 = v28 + 224 * v23;
										// branch -> 0x85600
										while (true) {
											// 0x85600
											v29 = v20 + 2 * v25;
											g38 = v29;
											if (v25 > v17 + 3) {
												v19 = v18;
												goto lab_0x856a4_6;
											}
											goto lab_0x85620_6;
										}
									}
									// 0x856b4
									v26 = llvm_ctlz_i32((int32_t) * (char *)(g35 + g36 + 218), true);
									result = __asm_rlwinm(v26, 27, 24, 31);
									// branch -> 0x856d0
									// 0x856d0
									g10 = v1;
									return result;
								}
							}
							// 0x856cc
							result2 = 1;
							// branch -> 0x856d0
						}
						// 0x856d0
						g10 = v1;
						return result2;
					}
					// 0x854d4
					if (v14 == 4) {
						// 0x854dc
						g34 = g33 + 1;
						g37 = g32;
						if (function_a3ef8() != 0) {
							// 0x854f0
							// branch -> 0x856d0
							// 0x856d0
							g10 = v1;
							return 0;
						}
						// 0x854f8
						g34 = g33;
						g37 = g32 + 1;
						if (function_a3ef8() != 0) {
							// 0x8550c
							// branch -> 0x856d0
							// 0x856d0
							g10 = v1;
							return 0;
						}
						// 0x85554
						v15 = g36;
						v27 = g35 + v15;
						if (*(char *)(v27 + 217) == 1) {
							// 0x85564
							v22 = v27 + 216;
							g31 = v22;
							g30 = 0;
							v30 = *(int32_t *)(232 * (int32_t) * (char *)v22 + v15 + 40);
							if (abs(g33 - v30) <= 3) {
								// 0x8558c
								v31 = *(int32_t *)(g36 + 232 * (int32_t) * (char *)g31 + 44);
								if (abs(g32 - v31) <= 3) {
									// 0x855ac
									g30 = 1;
									// branch -> 0x855b0
								}
							}
							// 0x855b0
							result2 = g30 % 256;
							// branch -> 0x856d0
						} else {
							// 0x855b8
							v32 = *(char *)(v27 + 192);
							if (v32 != 0) {
								// 0x855c4
								v33 = *(int32_t *)(g23 - 0x708c);
								v34 = *(int16_t *)(v33 + 32 * (int32_t)v32 - 10);
								if (__asm_rlwinm_((int32_t)v34, 0, 30, 30) != 0) {
									// 0x855dc
									v16 = g33;
									v23 = v16 - 3;
									v17 = g32;
									v28 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
									g38 = v28;
									v24 = v16 + 3;
									if (v23 <= v24) {
										// 0x85600
										v25 = v17 - 3;
										v18 = 0;
										v21 = v23;
										v20 = v28 + 224 * v23;
										// branch -> 0x85600
										while (true) {
											// 0x85600
											v29 = v20 + 2 * v25;
											g38 = v29;
											if (v25 > v17 + 3) {
												v19 = v18;
												goto lab_0x856a4_6;
											}
											goto lab_0x85620_6;
										}
									}
									// 0x856b4
									v26 = llvm_ctlz_i32((int32_t) * (char *)(g35 + g36 + 218), true);
									result = __asm_rlwinm(v26, 27, 24, 31);
									// branch -> 0x856d0
									// 0x856d0
									g10 = v1;
									return result;
								}
							}
							// 0x856cc
							result2 = 1;
							// branch -> 0x856d0
						}
						// 0x856d0
						g10 = v1;
						return result2;
					}
					// 0x85514
					if (v14 == 0) {
						// 0x8551c
						g34 = g33 - 1;
						g37 = g32;
						if (function_a3ef8() != 0) {
							// 0x85530
							// branch -> 0x856d0
							// 0x856d0
							g10 = v1;
							return 0;
						}
						// 0x85538
						g34 = g33;
						g37 = g32 - 1;
						if (function_a3ef8() != 0) {
							// 0x8554c
							// branch -> 0x856d0
							// 0x856d0
							g10 = v1;
							return 0;
						}
						// 0x85554
						v15 = g36;
						v27 = g35 + v15;
						if (*(char *)(v27 + 217) == 1) {
							// 0x85564
							v22 = v27 + 216;
							g31 = v22;
							g30 = 0;
							v30 = *(int32_t *)(232 * (int32_t) * (char *)v22 + v15 + 40);
							if (abs(g33 - v30) <= 3) {
								// 0x8558c
								v31 = *(int32_t *)(g36 + 232 * (int32_t) * (char *)g31 + 44);
								if (abs(g32 - v31) <= 3) {
									// 0x855ac
									g30 = 1;
									// branch -> 0x855b0
								}
							}
							// 0x855b0
							result2 = g30 % 256;
							// branch -> 0x856d0
						} else {
							// 0x855b8
							v32 = *(char *)(v27 + 192);
							if (v32 != 0) {
								// 0x855c4
								v33 = *(int32_t *)(g23 - 0x708c);
								v34 = *(int16_t *)(v33 + 32 * (int32_t)v32 - 10);
								if (__asm_rlwinm_((int32_t)v34, 0, 30, 30) != 0) {
									// 0x855dc
									v16 = g33;
									v23 = v16 - 3;
									v17 = g32;
									v28 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
									g38 = v28;
									v24 = v16 + 3;
									if (v23 <= v24) {
										// 0x85600
										v25 = v17 - 3;
										v18 = 0;
										v21 = v23;
										v20 = v28 + 224 * v23;
										// branch -> 0x85600
										while (true) {
											// 0x85600
											v29 = v20 + 2 * v25;
											g38 = v29;
											if (v25 > v17 + 3) {
												v19 = v18;
												goto lab_0x856a4_6;
											}
											goto lab_0x85620_6;
										}
									}
									// 0x856b4
									v26 = llvm_ctlz_i32((int32_t) * (char *)(g35 + g36 + 218), true);
									result = __asm_rlwinm(v26, 27, 24, 31);
									// branch -> 0x856d0
									// 0x856d0
									g10 = v1;
									return result;
								}
							}
							// 0x856cc
							result2 = 1;
							// branch -> 0x856d0
						}
						// 0x856d0
						g10 = v1;
						return result2;
					}
					// 0x85554
					v15 = g36;
					v27 = g35 + v15;
					if (*(char *)(v27 + 217) == 1) {
						// 0x85564
						v22 = v27 + 216;
						g31 = v22;
						g30 = 0;
						v30 = *(int32_t *)(232 * (int32_t) * (char *)v22 + v15 + 40);
						if (abs(g33 - v30) <= 3) {
							// 0x8558c
							v31 = *(int32_t *)(g36 + 232 * (int32_t) * (char *)g31 + 44);
							if (abs(g32 - v31) <= 3) {
								// 0x855ac
								g30 = 1;
								// branch -> 0x855b0
							}
						}
						// 0x855b0
						result2 = g30 % 256;
						// branch -> 0x856d0
					} else {
						// 0x855b8
						v32 = *(char *)(v27 + 192);
						if (v32 != 0) {
							// 0x855c4
							v33 = *(int32_t *)(g23 - 0x708c);
							v34 = *(int16_t *)(v33 + 32 * (int32_t)v32 - 10);
							if (__asm_rlwinm_((int32_t)v34, 0, 30, 30) != 0) {
								// 0x855dc
								v16 = g33;
								v23 = v16 - 3;
								v17 = g32;
								v28 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
								g38 = v28;
								v24 = v16 + 3;
								if (v23 <= v24) {
									// 0x85600
									v25 = v17 - 3;
									v18 = 0;
									v21 = v23;
									v20 = v28 + 224 * v23;
									// branch -> 0x85600
									while (true) {
										// 0x85600
										v29 = v20 + 2 * v25;
										g38 = v29;
										if (v25 > v17 + 3) {
											v19 = v18;
											goto lab_0x856a4_6;
										}
										goto lab_0x85620_6;
									}
								}
								// 0x856b4
								v26 = llvm_ctlz_i32((int32_t) * (char *)(g35 + g36 + 218), true);
								result = __asm_rlwinm(v26, 27, 24, 31);
								// branch -> 0x856d0
								// 0x856d0
								g10 = v1;
								return result;
							}
						}
						// 0x856cc
						result2 = 1;
						// branch -> 0x856d0
					}
					// 0x856d0
					g10 = v1;
					return result2;
				}
			}
			// 0x8541c
			// branch -> 0x856d0
			// 0x856d0
			g10 = v1;
			return 0;
		}
		// 0x8541c
		// branch -> 0x856d0
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x8541c
	// branch -> 0x856d0
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x856e4 - 0x85740
int32_t function_856e4(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x757c);                       // 0x856e4
	int16_t v2 = *(int16_t *)(*(int32_t *)v1 + 2 * a2 + 224 * a1); // 0x856fc
	int32_t v3;                                                    // 0x85734
	if (*(char *)((int32_t)v2 + *(int32_t *)(g23 - 0x7234)) != 0) {
		// 0x85730
		v3 = llvm_ctlz_i32(1, true);
		return __asm_rlwinm(v3, 27, 24, 31);
	}
	int32_t v4 = *(int32_t *)(g23 - 0x779c);                      // 0x85714
	unsigned char v5 = *(char *)(*(int32_t *)v4 + 112 * a1 + a2); // 0x85720
	int32_t v6;                                                   // 0x85730
	if (__asm_rlwinm_((int32_t)v5, 0, 27, 27) == 0) {
		// 0x8572c
		v6 = 0;
		// branch -> 0x85730
	} else {
		// 0x85710
		v6 = 1 % 256;
		// branch -> 0x85730
	}
	// 0x85730
	v3 = llvm_ctlz_i32(v6, true);
	return __asm_rlwinm(v3, 27, 24, 31);
}

// Address range: 0x85740 - 0x8576c
int32_t function_85740(int32_t a1, int32_t a2)
{
	int32_t v1 = 0;                                                           // r2
	int32_t v2 = *(int32_t *)(v1 - 0x757c);                                   // 0x85740
	int32_t v3 = *(int32_t *)(v1 - 0x722c);                                   // 0x85748
	int16_t v4 = *(int16_t *)(*(int32_t *)v2 + 2 * a2 + 224 * a1);            // 0x85758
	int32_t v5 = llvm_ctlz_i32((int32_t) * (char *)((int32_t)v4 + v3), true); // 0x85760
	return __asm_rlwinm(v5, 27, 24, 31);
}

// Address range: 0x8576c - 0x85a14
int32_t function_8576c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g10; // 0x85770
	g30 = a3;
	g32 = a5;
	g29 = a2;
	g31 = a4;
	g28 = a1;
	int32_t v2 = a5 - a3; // 0x85788
	g36 = a2;
	g35 = a3;
	g34 = v2;
	int32_t v3 = a4 - a2; // 0x85798
	int32_t v4 = v3;      // r20
	g33 = 0;
	int32_t v5 = abs(); // 0x857a8
	g34 = v3;
	int32_t result; // 0x859fc
	if (abs() > v5) {
		// 0x857c0
		int32_t v6; // 0x8580c
		int32_t v7; // 0x85810
		if (v4 > -1) {
			// 0x857e8
			v7 = v4;
			v6 = v2;
			// branch -> 0x857e8
		} else {
			int32_t v8 = g29; // 0x857c8
			int32_t v9 = g30; // 0x857cc
			g29 = g31;
			g30 = g32;
			g31 = v8;
			g32 = v9;
			v7 = -v4;
			v6 = -v2;
			// branch -> 0x857e8
		}
		int32_t v10 = 2 * v6; // 0x8580c
		int32_t v11;
		int32_t v12;
		int32_t v13;
		if (v6 < 1) {
			// 0x8580c
			g25 = v10;
			v13 = v10 + v7;
			v12 = v6 + v7;
			v11 = -1;
			// branch -> 0x85824
		} else {
			// 0x857f0
			g25 = v10;
			v13 = v10 - v7;
			v12 = v6 - v7;
			v11 = 1;
			// branch -> 0x85824
		}
		// 0x85824
		g24 = v13;
		g26 = 2 * v12;
		g22 = v11;
		if (g33 == 0) {
			while (true) {
				int32_t v14 = g29; // 0x858c4
				if (v14 == g31) {
					// 0x858cc
					if (g30 == g32) {
						// 0x859e4
						if (g29 == g31) {
							// 0x859f0
							if (g30 == g32) {
								// 0x859f8
								// branch -> 0x859fc
								// 0x859fc
								g10 = v1;
								return 1;
							}
						}
						// 0x859fc
						g10 = v1;
						return 0;
					}
				}
				int32_t v15 = g24; // 0x85848
				if (g27 == (int32_t)(-1 - v15 >= -v15) + (int32_t)(v15 < 0)) {
					// 0x85868
					g24 = g26 + v15;
					g30 += g22;
					// branch -> 0x85870
				} else {
					// 0x85860
					g24 = g25 + v15;
					// branch -> 0x85870
				}
				int32_t v16 = v14 + 1; // 0x85870
				g29 = v16;
				bool v17 = false; // 0x85890
				if (v16 == g36) {
					// 0x85884
					if (g30 == g35) {
						// 0x8588c
						v17 = true;
						// branch -> 0x85890
					} else {
						v17 = false;
					}
				}
				// 0x85890
				int32_t v18; // 0x858b8
				if (!v17) {
					// 0x85898
					g34 = v16;
					g15 = g28;
					int32_t v19; // 0x858b8
					if (FunctionPointer() == 0) {
						// 0x858b4
						v19 = 1;
						// branch -> 0x858b8
					} else {
						// 0x85898
						v19 = 0;
						// branch -> 0x858b8
					}
					// 0x858b8
					v18 = v19 % 256;
					g33 = v18;
					if (v18 != 0) {
						// break -> 0x859e4
						break;
					}
					// continue -> 0x858c4
					continue;
				}
				// 0x858b8
				v18 = 0;
				g33 = v18;
				if (v18 != 0) {
					// break -> 0x859e4
					break;
				}
				// continue -> 0x858c4
			}
			// 0x859e4
			result = 0;
			if (g29 == g31) {
				// 0x859f0
				if (g30 == g32) {
					// 0x859f8
					result = 1;
					// branch -> 0x859fc
				} else {
					result = 0;
				}
			}
			// 0x859fc
			g10 = v1;
			return result;
		}
	} else {
		int32_t v20; // 0x85920
		int32_t v21; // 0x85924
		if (v2 > -1) {
			// 0x85900
			v21 = v2;
			v20 = v4;
			// branch -> 0x85900
		} else {
			int32_t v22 = g30; // 0x858e0
			int32_t v23 = g29; // 0x858e4
			g30 = g32;
			g29 = g31;
			g32 = v22;
			g31 = v23;
			v21 = -v2;
			v20 = -v4;
			// branch -> 0x85900
		}
		int32_t v24 = 2 * v20; // 0x85920
		g25 = v24;
		int32_t v25;
		int32_t v26;
		int32_t v27;
		if (v20 < 1) {
			// 0x85920
			v27 = v24 + v21;
			v26 = v20 + v21;
			v25 = -1;
			// branch -> 0x85934
		} else {
			// 0x85908
			v27 = v24 - v21;
			v26 = v20 - v21;
			v25 = 1;
			// branch -> 0x85934
		}
		// 0x85934
		g26 = v27;
		g24 = 2 * v26;
		g22 = v25;
		if (g33 == 0) {
			while (true) {
				int32_t v28 = g30; // 0x859d4
				if (v28 == g32) {
					// 0x859dc
					if (g29 == g31) {
						// 0x859e4
						if (g29 == g31) {
							// 0x859f0
							if (g30 == g32) {
								// 0x859f8
								// branch -> 0x859fc
								// 0x859fc
								g10 = v1;
								return 1;
							}
						}
						// 0x859fc
						g10 = v1;
						return 0;
					}
				}
				int32_t v29 = g26; // 0x85958
				if (g27 == (int32_t)(-1 - v29 >= -v29) + (int32_t)(v29 < 0)) {
					// 0x85978
					g26 = g24 + v29;
					g29 += g22;
					// branch -> 0x85980
				} else {
					// 0x85970
					g26 = g25 + v29;
					// branch -> 0x85980
				}
				int32_t v30 = v28 + 1; // 0x85980
				g30 = v30;
				bool v31 = false; // 0x859a0
				if (v30 == g35) {
					// 0x85994
					if (g29 == g36) {
						// 0x8599c
						v31 = true;
						// branch -> 0x859a0
					} else {
						v31 = false;
					}
				}
				// 0x859a0
				int32_t v32; // 0x859c8
				if (!v31) {
					// 0x859a8
					g34 = g29;
					g15 = g28;
					int32_t v33; // 0x859c8
					if (FunctionPointer() == 0) {
						// 0x859c4
						v33 = 1;
						// branch -> 0x859c8
					} else {
						// 0x859a8
						v33 = 0;
						// branch -> 0x859c8
					}
					// 0x859c8
					v32 = v33 % 256;
					g33 = v32;
					if (v32 != 0) {
						// break -> 0x859e4
						break;
					}
					// continue -> 0x859d4
					continue;
				}
				// 0x859c8
				v32 = 0;
				g33 = v32;
				if (v32 != 0) {
					// break -> 0x859e4
					break;
				}
				// continue -> 0x859d4
			}
			// 0x859e4
			result = 0;
			if (g29 == g31) {
				// 0x859f0
				if (g30 == g32) {
					// 0x859f8
					result = 1;
					// branch -> 0x859fc
				} else {
					result = 0;
				}
			}
			// 0x859fc
			g10 = v1;
			return result;
		}
	}
	// 0x859e4
	result = 0;
	if (g29 == g31) {
		// 0x859f0
		if (g30 == g32) {
			// 0x859f8
			result = 1;
			// branch -> 0x859fc
		} else {
			result = 0;
		}
	}
	// 0x859fc
	g10 = v1;
	return result;
}

// Address range: 0x85a14 - 0x85a54
int32_t function_85a14(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t result = function_8576c(*(int32_t *)(g23 - 0x70d4), a1, a2, a3, a4); // 0x85a40
	return result;
}

// Address range: 0x85a54 - 0x85d08
int32_t function_85a54(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = g10; // 0x85a58
	g30 = a4;
	g32 = a6;
	g29 = a3;
	g31 = a5;
	g27 = a1;
	int32_t v2 = a6 - a4; // 0x85a70
	g28 = a2;
	g36 = a3;
	g35 = a4;
	g34 = v2;
	int32_t v3 = a5 - a3; // 0x85a84
	int32_t v4 = v3;      // r19
	g33 = 0;
	int32_t v5 = abs(); // 0x85a94
	g34 = v3;
	int32_t result; // 0x85cf0
	if (abs() > v5) {
		// 0x85aac
		int32_t v6; // 0x85af8
		int32_t v7; // 0x85afc
		if (v4 > -1) {
			// 0x85ad4
			v7 = v4;
			v6 = v2;
			// branch -> 0x85ad4
		} else {
			int32_t v8 = g29; // 0x85ab4
			int32_t v9 = g30; // 0x85ab8
			g29 = g31;
			g30 = g32;
			g31 = v8;
			g32 = v9;
			v7 = -v4;
			v6 = -v2;
			// branch -> 0x85ad4
		}
		int32_t v10 = 2 * v6; // 0x85af8
		int32_t v11;
		int32_t v12;
		int32_t v13;
		if (v6 < 1) {
			// 0x85af8
			g24 = v10;
			v13 = v10 + v7;
			v12 = v6 + v7;
			v11 = -1;
			// branch -> 0x85b10
		} else {
			// 0x85adc
			g24 = v10;
			v13 = v10 - v7;
			v12 = v6 - v7;
			v11 = 1;
			// branch -> 0x85b10
		}
		// 0x85b10
		g22 = v13;
		g25 = 2 * v12;
		g21 = v11;
		if (g33 == 0) {
			while (true) {
				int32_t v14 = g29; // 0x85bb4
				if (v14 == g31) {
					// 0x85bbc
					if (g30 == g32) {
						// 0x85cd8
						if (g29 == g31) {
							// 0x85ce4
							if (g30 == g32) {
								// 0x85cec
								// branch -> 0x85cf0
								// 0x85cf0
								g10 = v1;
								return 1;
							}
						}
						// 0x85cf0
						g10 = v1;
						return 0;
					}
				}
				int32_t v15 = g22; // 0x85b34
				if (g26 == (int32_t)(-1 - v15 >= -v15) + (int32_t)(v15 < 0)) {
					// 0x85b54
					g22 = g25 + v15;
					g30 += g21;
					// branch -> 0x85b5c
				} else {
					// 0x85b4c
					g22 = g24 + v15;
					// branch -> 0x85b5c
				}
				int32_t v16 = v14 + 1; // 0x85b5c
				g29 = v16;
				bool v17 = false; // 0x85b7c
				if (v16 == g36) {
					// 0x85b70
					if (g30 == g35) {
						// 0x85b78
						v17 = true;
						// branch -> 0x85b7c
					} else {
						v17 = false;
					}
				}
				// 0x85b7c
				int32_t v18; // 0x85ba8
				if (!v17) {
					// 0x85b84
					g34 = g28;
					g15 = g27;
					int32_t v19; // 0x85ba8
					if (FunctionPointer() == 0) {
						// 0x85ba4
						v19 = 1;
						// branch -> 0x85ba8
					} else {
						// 0x85b84
						v19 = 0;
						// branch -> 0x85ba8
					}
					// 0x85ba8
					v18 = v19 % 256;
					g33 = v18;
					if (v18 != 0) {
						// break -> 0x85cd8
						break;
					}
					// continue -> 0x85bb4
					continue;
				}
				// 0x85ba8
				v18 = 0;
				g33 = v18;
				if (v18 != 0) {
					// break -> 0x85cd8
					break;
				}
				// continue -> 0x85bb4
			}
			// 0x85cd8
			result = 0;
			if (g29 == g31) {
				// 0x85ce4
				if (g30 == g32) {
					// 0x85cec
					result = 1;
					// branch -> 0x85cf0
				} else {
					result = 0;
				}
			}
			// 0x85cf0
			g10 = v1;
			return result;
		}
	} else {
		int32_t v20; // 0x85c10
		int32_t v21; // 0x85c14
		if (v2 > -1) {
			// 0x85bf0
			v21 = v2;
			v20 = v4;
			// branch -> 0x85bf0
		} else {
			int32_t v22 = g30; // 0x85bd0
			int32_t v23 = g29; // 0x85bd4
			g30 = g32;
			g29 = g31;
			g32 = v22;
			g31 = v23;
			v21 = -v2;
			v20 = -v4;
			// branch -> 0x85bf0
		}
		int32_t v24 = 2 * v20; // 0x85c10
		g24 = v24;
		int32_t v25;
		int32_t v26;
		int32_t v27;
		if (v20 < 1) {
			// 0x85c10
			v27 = v24 + v21;
			v26 = v20 + v21;
			v25 = -1;
			// branch -> 0x85c24
		} else {
			// 0x85bf8
			v27 = v24 - v21;
			v26 = v20 - v21;
			v25 = 1;
			// branch -> 0x85c24
		}
		// 0x85c24
		g25 = v27;
		g22 = 2 * v26;
		g21 = v25;
		if (g33 == 0) {
			while (true) {
				int32_t v28 = g30; // 0x85cc8
				if (v28 == g32) {
					// 0x85cd0
					if (g29 == g31) {
						// 0x85cd8
						if (g29 == g31) {
							// 0x85ce4
							if (g30 == g32) {
								// 0x85cec
								// branch -> 0x85cf0
								// 0x85cf0
								g10 = v1;
								return 1;
							}
						}
						// 0x85cf0
						g10 = v1;
						return 0;
					}
				}
				int32_t v29 = g25; // 0x85c48
				if (g26 == (int32_t)(-1 - v29 >= -v29) + (int32_t)(v29 < 0)) {
					// 0x85c68
					g25 = g22 + v29;
					g29 += g21;
					// branch -> 0x85c70
				} else {
					// 0x85c60
					g25 = g24 + v29;
					// branch -> 0x85c70
				}
				int32_t v30 = v28 + 1; // 0x85c70
				g30 = v30;
				bool v31 = false; // 0x85c90
				if (v30 == g35) {
					// 0x85c84
					if (g29 == g36) {
						// 0x85c8c
						v31 = true;
						// branch -> 0x85c90
					} else {
						v31 = false;
					}
				}
				// 0x85c90
				int32_t v32; // 0x85cbc
				if (!v31) {
					// 0x85c98
					g34 = g28;
					g15 = g27;
					int32_t v33; // 0x85cbc
					if (FunctionPointer() == 0) {
						// 0x85cb8
						v33 = 1;
						// branch -> 0x85cbc
					} else {
						// 0x85c98
						v33 = 0;
						// branch -> 0x85cbc
					}
					// 0x85cbc
					v32 = v33 % 256;
					g33 = v32;
					if (v32 != 0) {
						// break -> 0x85cd8
						break;
					}
					// continue -> 0x85cc8
					continue;
				}
				// 0x85cbc
				v32 = 0;
				g33 = v32;
				if (v32 != 0) {
					// break -> 0x85cd8
					break;
				}
				// continue -> 0x85cc8
			}
			// 0x85cd8
			result = 0;
			if (g29 == g31) {
				// 0x85ce4
				if (g30 == g32) {
					// 0x85cec
					result = 1;
					// branch -> 0x85cf0
				} else {
					result = 0;
				}
			}
			// 0x85cf0
			g10 = v1;
			return result;
		}
	}
	// 0x85cd8
	result = 0;
	if (g29 == g31) {
		// 0x85ce4
		if (g30 == g32) {
			// 0x85cec
			result = 1;
			// branch -> 0x85cf0
		} else {
			result = 0;
		}
	}
	// 0x85cf0
	g10 = v1;
	return result;
}

// Address range: 0x85d08 - 0x86084
int32_t function_85d08(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x85d10
	g36 = v1;
	int32_t v2 = g35;                        // 0x85d14
	int32_t v3 = *(int32_t *)(g23 - 0x7610); // 0x85d18
	g35 = v3;
	int32_t v4 = g33; // 0x85d1c
	g33 = a1;
	int32_t v5 = a1; // 0x85d40
	if (a1 >= 200) {
		// 0x85d34
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5e90));
		v3 = g35;
		v1 = g36;
		v5 = g33;
		// branch -> 0x85d40
	}
	int32_t v6 = 232 * v5; // 0x85d40
	int32_t v7 = v6 + v1;  // 0x85d44
	int32_t v8 = v7 + 224; // 0x85d4c
	*(int32_t *)v8 = 520 * *(int32_t *)v7 + v3;
	int32_t v9 = g35 + 520 * *(int32_t *)v7; // 0x85d68
	*(int32_t *)(v7 + 228) = *(int32_t *)(v9 + 512);
	unsigned char v10 = *(char *)(v7 + 192); // 0x85d74
	if (v10 == 0) {
		// 0x85d98
		*(int32_t *)(v7 + 220) = *(int32_t *)(*(int32_t *)(v7 + 228) + 80);
		// branch -> 0x85da4
	} else {
		int32_t v11 = *(int32_t *)(g23 - 0x708c) + 32 * (int32_t)v10; // 0x85d88
		*(int32_t *)(v7 + 220) = *(int32_t *)(v11 - 28);
		// branch -> 0x85da4
	}
	int32_t result = v6 + g36; // 0x85da4
	if (*(int32_t *)(result + 4) <= 17) {
		// 0x85db8
		return result;
	}
	int32_t v12 = *(int32_t *)v8 + 8 * *(int32_t *)(result + 72); // 0x86040
	*(int32_t *)(result + 84) = *(int32_t *)(v12 + 8);
	*(int32_t *)(result + 88) = *(int32_t *)(v12 + 12);
	*(int32_t *)(result + 104) = 1;
	int32_t result2 = *(int32_t *)v8; // 0x8605c
	*(int32_t *)(result + 100) = *(int32_t *)(result2 + 72);
	g35 = v2;
	g33 = v4;
	return result2;
}

// Address range: 0x86084 - 0x861ac
int32_t function_86084(int32_t result, int32_t a2)
{
	// 0x86084
	g31 = 0;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x86090
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x762c); // 0x86094
	g36 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7628); // 0x86098
	g33 = v3;
	g28 = result;
	g29 = a2;
	g32 = v1;
	int32_t *v4 = (int32_t *)v2; // 0x8618c2
	if (*v4 <= 0) {
		// 0x86198
		return result;
	}
	int32_t v5 = 0;  // 0x8618813
	int32_t v6 = v1; // 0x8618411
	int32_t result2; // 0x860cc
	while (true) {
		// 0x860b8
		g30 = 0;
		int32_t v7 = 232 * *(int32_t *)v3; // 0x860c0
		result2 = (int32_t) * (char *)*(int32_t *)(v7 + 224 + v1);
		uint32_t v8 = result2 - 4; // 0x860d0
		if (v8 <= 11) {
			// 0x860dc
			return *(int32_t *)(*(int32_t *)(g23 - 0x5e98) + 4 * v8);
		}
		int32_t v9 = v7 + v1; // 0x86110
		g27 = v9;
		if (*(char *)(v9 + 156) == 8) {
			// 0x86120
			// branch -> 0x86180
		}
		int32_t v10 = v3 + 4; // 0x86180
		g33 = v10;
		int32_t v11 = v6 + 232; // 0x86184
		g32 = v11;
		int32_t v12 = v5 + 1; // 0x86188
		g31 = v12;
		if (v12 >= *v4) {
			// break -> 0x86198
			break;
		}
		v5 = v12;
		v6 = v11;
		v3 = v10;
		// continue -> 0x860b8
	}
	// 0x86198
	return result2;
}

// Address range: 0x861ac - 0x863f0
int32_t function_861ac(int32_t a1)
{
	int32_t v1 = g10; // 0x861b0
	g30 = a1;
	g35 = *(int32_t *)(g23 - 0x76b4);
	g31 = *(int32_t *)(g23 - 0x5eb4);
	g33 = *(int32_t *)(g23 - 0x5eac);
	g29 = *(int32_t *)(g23 - 0x7184);
	g36 = *(int32_t *)(g23 - 0x72b4);
	g37 = *(int32_t *)(g23 - 0x5e9c);
	int32_t v2 = *(int32_t *)(g23 - 0x714c) + 4 * a1; // 0x861e0
	g28 = v2;
	g38 = *(int32_t *)v2;
	sprintf();
	function_2dbac(g35, 1);
	int32_t v3 = g28; // 0x86200
	int32_t v4 = v3;  // 0x86298
	if (*(int32_t *)v3 >= 30) {
		int32_t v5 = g36 + 128 * g30;       // 0x86214
		int32_t v6 = *(int32_t *)(v5 + 88); // 0x8621c
		g38 = v6;
		uint32_t v7 = *(int32_t *)(v5 + 92); // 0x86224
		int32_t v8 = v7;                     // 0x86240
		int32_t v9 = v6;                     // 0x86234
		if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
			int32_t v10 = v6 / 2 | v6 & -0x80000000; // 0x8622c
			g38 = v10;
			v8 = v7 / 2 | v7 & -0x80000000;
			v9 = v10;
			// branch -> 0x86234
		}
		int32_t v11 = v9; // 0x86258
		if (v9 <= 0) {
			// 0x8623c
			g38 = 1;
			v11 = 1;
			// branch -> 0x86240
		}
		// 0x86240
		if (v8 <= 0) {
			// 0x86248
			// branch -> 0x8624c
		}
		int32_t v12 = *(int32_t *)g29; // 0x8624c
		int32_t v13 = v11;             // 0x86270
		if (v12 == 1) {
			int32_t v14 = 3 * v11 + 1; // 0x86260
			g38 = v14;
			v13 = v14;
			// branch -> 0x86268
		}
		// 0x86268
		if (v12 == 2) {
			// 0x86270
			g38 = 4 * v13 | 3;
			// branch -> 0x86280
		}
		// 0x86280
		g37 = *(int32_t *)(g23 - 0x5ea0);
		sprintf();
		function_2dbac(g35, 1);
		v4 = g28;
		// branch -> 0x86298
	}
	// 0x86298
	int32_t result; // 0x863d0
	if (*(int32_t *)v4 < 15) {
		// 0x863d0
		result = *(int32_t *)(g23 - 0x76cc);
		*(int32_t *)result = 1;
		g10 = v1;
		return result;
	}
	uint16_t v15 = *(int16_t *)(g36 + 128 * g30 + (*(int32_t *)g29 == 2 ? 118 : 116));
	uint16_t v16 = v15 % 64;
	int32_t v17 = v16; // 0x862cc
	g28 = v17;
	if (v16 == 0) {
		// 0x862d4
		g34 = g35;
		g37 = *(int32_t *)(g23 - 0x5ea4);
		strcpy();
		function_2dbac(g35, 1);
		// branch -> 0x863d0
		// 0x863d0
		result = *(int32_t *)(g23 - 0x76cc);
		*(int32_t *)result = 1;
		g10 = v1;
		return result;
	}
	// 0x862f0
	if (v15 % 8 != 0) {
		// 0x862f8
		g34 = g35;
		g37 = *(int32_t *)(g23 - 0x5ea8);
		strcpy();
		if (v15 % 2 != 0) {
			// 0x8630c
			function_e86d0(g35, g33);
			// branch -> 0x86318
		}
		// 0x86318
		if (__asm_rlwinm_(v17, 0, 30, 30) != 0) {
			// 0x86320
			function_e86d0(g35, g32);
			// branch -> 0x8632c
		}
		// 0x8632c
		if (__asm_rlwinm_(v17, 0, 29, 29) != 0) {
			// 0x86334
			function_e86d0(g35, g31);
			// branch -> 0x86340
		}
		// 0x86340
		g34 = g35;
		*(char *)(CPrintString() - 1 + g35) = 0;
		function_2dbac(g35, 1);
		// branch -> 0x86360
	}
	// 0x86360
	if (__asm_rlwinm_(v17, 0, 26, 28) != 0) {
		// 0x86368
		g34 = g35;
		g37 = *(int32_t *)(g23 - 0x5eb8);
		strcpy();
		if (__asm_rlwinm_(v17, 0, 28, 28) != 0) {
			// 0x8637c
			function_e86d0(g35, g33);
			// branch -> 0x86388
		}
		// 0x86388
		if (__asm_rlwinm_(v17, 0, 27, 27) != 0) {
			// 0x86390
			function_e86d0(g35, g32);
			// branch -> 0x8639c
		}
		// 0x8639c
		if (__asm_rlwinm_(v17, 0, 26, 26) != 0) {
			// 0x863a4
			function_e86d0(g35, g31);
			// branch -> 0x863b0
		}
		// 0x863b0
		g34 = g35;
		*(char *)(CPrintString() - 1 + g35) = 0;
		function_2dbac(g35, 1);
		// branch -> 0x863d0
	}
	// 0x863d0
	result = *(int32_t *)(g23 - 0x76cc);
	*(int32_t *)result = 1;
	g10 = v1;
	return result;
}

// Address range: 0x863f0 - 0x864e8
int32_t function_863f0(int32_t a1)
{
	int32_t v1 = g36;                        // 0x863f0
	int32_t v2 = *(int32_t *)(g23 - 0x7750); // 0x863f8
	int32_t v3 = g35;                        // 0x863fc
	int32_t v4 = *(int32_t *)(g23 - 0x7754); // 0x86400
	g35 = *(int32_t *)(g23 - 0x5ec0);
	g37 = *(int32_t *)(g23 - 0x5ebc);
	int32_t v5 = *(int32_t *)(g23 - 0x76b4); // 0x86418
	g36 = v5;
	uint16_t v6 = *(int16_t *)(232 * *(int32_t *)v2 + v4 + 208); // 0x86428
	uint16_t v7 = v6 % 64;
	if (v7 == 0) {
		// 0x86434
		g34 = v5;
		strcpy();
		function_2dbac(g36, 1);
		g34 = g36;
		g37 = g35;
		strcpy();
		function_2dbac(g36, 1);
		// branch -> 0x864c0
	} else {
		// 0x86464
		g34 = v5;
		if (v6 % 8 == 0) {
			// 0x8647c
			strcpy();
			// branch -> 0x86484
		} else {
			// 0x8646c
			g37 = *(int32_t *)(g23 - 0x5ec4);
			strcpy();
			// branch -> 0x86484
		}
		// 0x86484
		function_2dbac(g36, 1);
		g34 = g36;
		if (__asm_rlwinm_((int32_t)v7, 0, 26, 28) == 0) {
			// 0x864a8
			g37 = g35;
			strcpy();
			// branch -> 0x864b4
		} else {
			// 0x86498
			g37 = *(int32_t *)(g23 - 0x5ec8);
			strcpy();
			// branch -> 0x864b4
		}
		// 0x864b4
		function_2dbac(g36, 1);
		// branch -> 0x864c0
	}
	int32_t result = *(int32_t *)(g23 - 0x76cc); // 0x864c0
	*(int32_t *)result = 1;
	g36 = v1;
	g35 = v3;
	return result;
}

// Address range: 0x864e8 - 0x86824
int32_t function_864e8(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x864ec
	g26 = a1;
	g24 = a2;
	g32 = *(int32_t *)(g23 - 0x7680);
	g25 = a3;
	g33 = *(int32_t *)(g23 - 0x767c);
	g35 = *(int32_t *)(g23 - 0x77a8);
	g36 = *(int32_t *)(g23 - 0x7754);
	int32_t v2 = g23; // 0x8654c
	int32_t v3 = a1;  // 0x86530
	if (a1 >= 125) {
		// 0x86524
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5ecc));
		v2 = g23;
		v3 = g26;
		// branch -> 0x86530
	}
	int32_t v4 = *(int32_t *)(v2 - 0x7664) + 180 * v3; // 0x86538
	g26 = v4;
	int32_t v5 = *(int32_t *)(v4 + 120); // 0x8653c
	g27 = v5;
	int32_t v6 = v5; // 0x86564
	if (v5 >= 200) {
		// 0x8654c
		g37 = v5;
		app_fatal(*(int32_t *)(v2 - 0x5ed0));
		v6 = g27;
		// branch -> 0x86558
	}
	int32_t v7 = 2 * g25 + 224 * g24; // 0x86570
	*(int16_t *)(v7 + *(int32_t *)g33) = (int16_t)(v6 + 1);
	int32_t v8 = g36 + 232 * g27; // 0x86580
	*(int32_t *)(v8 + 72) = *(int32_t *)(g26 + 44);
	*(int32_t *)(v8 + 32) = g24;
	*(int32_t *)(v8 + 36) = g25;
	function_7c124(g27, *(int32_t *)(v8 + 72));
	int32_t v9 = g26;                                    // 0x8659c
	unsigned char v10 = *(char *)*(int32_t *)(v9 + 224); // 0x865a0
	int32_t v11;                                         // r3
	int32_t v12;                                         // r4
	int32_t v13;                                         // 0x865d4
	int32_t v14;                                         // 0x86604
	int32_t v15;                                         // 0x86628
	int32_t v16;                                         // 0x86678
	int32_t v17;                                         // 0x866b8
	int32_t v18;                                         // 0x866bc
	int32_t v19;                                         // 0x866d0
	int32_t v20;                                         // 0x86744
	int32_t v21;                                         // 0x8677c
	int32_t result3;                                     // 0x86820
	int32_t v22;                                         // 0x865cc
	int32_t v23;                                         // 0x865fc
	int32_t v24;                                         // 0x86604
	int32_t v25;                                         // 0x86660
	int32_t v26;                                         // 0x8666c
	int32_t v27;                                         // 0x86690
	int32_t v28;                                         // 0x866c0
	int32_t v29;                                         // 0x86728
	int32_t v30;                                         // 0x86730
	int32_t v31;                                         // 0x867a0
	int32_t v32;                                         // 0x867bc
	int32_t result4;                                     // 0x86614
	unsigned char v33;                                   // 0x8662c
	int32_t v34;                                         // 0x86668
	unsigned char v35;                                   // 0x8667c
	int32_t v36;                                         // 0x866cc
	int32_t v37;                                         // 0x866d0
	int32_t v38;                                         // 0x866e8
	int32_t result;                                      // 0x8672c
	unsigned char v39;                                   // 0x86748
	unsigned char v40;                                   // 0x86780
	int32_t v41;                                         // 0x86798
	int32_t v42;                                         // 0x867b0
	int32_t v43;                                         // 0x867b4
	int32_t v44;                                         // 0x867d0
	int32_t result5;                                     // 0x86628
	int32_t result6;                                     // 0x86678
	int32_t result2;                                     // 0x86744
	unsigned char v45;                                   // 0x86764
	unsigned char v46;                                   // 0x8676c
	int32_t v47;                                         // 0x8677c
	unsigned char v48;                                   // 0x86610
	int32_t v49;                                         // 0x86650
	int32_t v50;                                         // 0x86694
	uint16_t v51;                                        // 0x86738
	int16_t v52;                                         // 0x867d8
	if (v10 < 72) {
		// 0x865c8
		v22 = __asm_rlwinm_(*(int32_t *)(v9 + 160), 0, 27, 27);
		v13 = g27;
		g38 = 0;
		if (v22 == 0) {
			// 0x865d4
			function_7cbac(v13, -1);
			// branch -> 0x865f8
		} else {
			// 0x865e8
			function_7d044(v13, -1, 0);
			// branch -> 0x865f8
		}
		// 0x865f8
		v23 = __asm_rlwinm_(*(int32_t *)(g26 + 160), 0, 27, 27);
		v14 = g29;
		if (v23 != 0) {
			// 0x86728
			v29 = 224 * v14;
			g25 = v29;
			result = *(int32_t *)g33;
			v30 = 2 * g28;
			g24 = v30;
			v51 = *(int16_t *)(v30 + v29 + result);
			if (v51 < 1) {
				// 0x86810
				g10 = v1;
				return result;
			}
			// 0x86744
			v20 = g26;
			result2 = *(int32_t *)(v20 + 224);
			v39 = *(char *)result2;
			if (v39 == 40) {
				// 0x86810
				g10 = v1;
				return result2;
			}
			// 0x86754
			if (v39 >= 72) {
				// 0x8675c
				if (v39 < 76) {
					// 0x86810
					g10 = v1;
					return result2;
				}
			}
			// 0x86764
			v45 = *(char *)(v20 + 204);
			v46 = *(char *)(v20 + 205);
			function_7e228(g27, (int32_t)v51 - 1, 500, (int32_t)v45, (int32_t)v46);
			v21 = g26;
			v47 = *(int32_t *)(v21 + 224);
			v40 = *(char *)v47;
			if (v40 < 89) {
				// 0x86794
				v41 = g24 + g25;
				g24 = v41;
				v31 = 4 * *(int32_t *)(v21 + 72);
				v42 = g29 + *(int32_t *)(g31 + v31);
				g25 = v42;
				v43 = g28 + *(int32_t *)(g30 + v31);
				g26 = v43;
				v32 = (int32_t) * (int16_t *)(*(int32_t *)g33 + v41) - 1;
				if (function_86824(v32, v42, v43) != 0) {
					// 0x867d0
					v44 = *(int32_t *)g33;
					v52 = *(int16_t *)(g24 + v44);
					*(int16_t *)(224 * g25 + v44 + 2 * g26) = v52;
					v11 = g36 + 232 * ((int32_t)v52 - 1);
					*(int16_t *)(g24 + *(int32_t *)g33) = 0;
					*(int32_t *)(v11 + 32) = g25;
					*(int32_t *)(v11 + 40) = g25;
					*(int32_t *)(v11 + 36) = g26;
					*(int32_t *)(v11 + 44) = g26;
					result3 = v11;
					// branch -> 0x86810
				} else {
					result3 = 0;
				}
			} else {
				// 0x8678c
				if (v40 >= 93) {
					// 0x86794
					v41 = g24 + g25;
					g24 = v41;
					v31 = 4 * *(int32_t *)(v21 + 72);
					v42 = g29 + *(int32_t *)(g31 + v31);
					g25 = v42;
					v43 = g28 + *(int32_t *)(g30 + v31);
					g26 = v43;
					v32 = (int32_t) * (int16_t *)(*(int32_t *)g33 + v41) - 1;
					if (function_86824(v32, v42, v43) != 0) {
						// 0x867d0
						v44 = *(int32_t *)g33;
						v52 = *(int16_t *)(g24 + v44);
						*(int16_t *)(224 * g25 + v44 + 2 * g26) = v52;
						v11 = g36 + 232 * ((int32_t)v52 - 1);
						*(int16_t *)(g24 + *(int32_t *)g33) = 0;
						*(int32_t *)(v11 + 32) = g25;
						*(int32_t *)(v11 + 40) = g25;
						*(int32_t *)(v11 + 36) = g26;
						*(int32_t *)(v11 + 44) = g26;
						result3 = v11;
						// branch -> 0x86810
					} else {
						result3 = 0;
					}
				} else {
					result3 = v47;
				}
			}
			// 0x86810
			g10 = v1;
			return result3;
		}
		// 0x86604
		v24 = 112 * v14;
		g24 = v24;
		v48 = *(char *)(g28 + v24 + *(int32_t *)g32);
		result4 = v48;
		g33 = result4 - 1;
		if (v48 < 1) {
			// 0x86810
			g10 = v1;
			return result4;
		}
		// 0x86628
		v15 = g26;
		result5 = *(int32_t *)(v15 + 224);
		v33 = *(char *)result5;
		if (v33 == 40) {
			// 0x86810
			g10 = v1;
			return result5;
		}
		// 0x86638
		if (v33 < 72) {
			// 0x86648
			v49 = (int32_t) * (char *)(v15 + 205);
			function_7e3a4(g27, 500, (int32_t) * (char *)(v15 + 204), v49, v49);
			v25 = g28;
			v34 = (int32_t) * (char *)(v25 + g24 + *(int32_t *)g32);
			v26 = v34 - 1;
			if (g33 == v26) {
				// 0x86678
				v16 = g26;
				result6 = *(int32_t *)(v16 + 224);
				v35 = *(char *)result6;
				if (v35 >= 89) {
					// 0x86688
					if (v35 < 93) {
						// 0x86810
						g10 = v1;
						return result6;
					}
				}
				// 0x86690
				v27 = 0x55ec * v26;
				g24 = v27;
				v50 = *(int32_t *)(g35 + v27);
				v19 = v25;
				v18 = v26;
				v17 = v16;
				if (v50 != 7) {
					// 0x866a0
					if (v50 != 8) {
						// 0x866a8
						g38 = 1;
						function_a579c(v26, 0);
						v19 = g28;
						v18 = g33;
						v17 = g26;
						// branch -> 0x866b8
					} else {
						v19 = v25;
						v18 = v26;
						v17 = v16;
					}
				}
				// 0x866b8
				v28 = 4 * *(int32_t *)(v17 + 72);
				v36 = g29 + *(int32_t *)(g31 + v28);
				g25 = v36;
				v37 = *(int32_t *)(g30 + v28) + v19;
				g26 = v37;
				if (function_a9df0(v18, v36, v37) != 0) {
					// 0x866e8
					v38 = g24 + g35;
					v12 = v38;
					*(int32_t *)(v38 + 56) = g25;
					*(int32_t *)(v12 + 60) = g26;
					function_a4250(g33, *(int32_t *)(v12 + 112));
					function_a5364(g33);
					*(char *)(g26 + 112 * g25 + *(int32_t *)g32) = (char)(g33 + 1);
					result3 = SetPlayerOld(g33);
					// branch -> 0x86810
				} else {
					result3 = 0;
				}
			} else {
				result3 = v34;
			}
		} else {
			// 0x86640
			if (v33 >= 76) {
				// 0x86648
				v49 = (int32_t) * (char *)(v15 + 205);
				function_7e3a4(g27, 500, (int32_t) * (char *)(v15 + 204), v49, v49);
				v25 = g28;
				v34 = (int32_t) * (char *)(v25 + g24 + *(int32_t *)g32);
				v26 = v34 - 1;
				if (g33 == v26) {
					// 0x86678
					v16 = g26;
					result6 = *(int32_t *)(v16 + 224);
					v35 = *(char *)result6;
					if (v35 >= 89) {
						// 0x86688
						if (v35 < 93) {
							// 0x86810
							g10 = v1;
							return result6;
						}
					}
					// 0x86690
					v27 = 0x55ec * v26;
					g24 = v27;
					v50 = *(int32_t *)(g35 + v27);
					v19 = v25;
					v18 = v26;
					v17 = v16;
					if (v50 != 7) {
						// 0x866a0
						if (v50 != 8) {
							// 0x866a8
							g38 = 1;
							function_a579c(v26, 0);
							v19 = g28;
							v18 = g33;
							v17 = g26;
							// branch -> 0x866b8
						} else {
							v19 = v25;
							v18 = v26;
							v17 = v16;
						}
					}
					// 0x866b8
					v28 = 4 * *(int32_t *)(v17 + 72);
					v36 = g29 + *(int32_t *)(g31 + v28);
					g25 = v36;
					v37 = *(int32_t *)(g30 + v28) + v19;
					g26 = v37;
					if (function_a9df0(v18, v36, v37) != 0) {
						// 0x866e8
						v38 = g24 + g35;
						v12 = v38;
						*(int32_t *)(v38 + 56) = g25;
						*(int32_t *)(v12 + 60) = g26;
						function_a4250(g33, *(int32_t *)(v12 + 112));
						function_a5364(g33);
						*(char *)(g26 + 112 * g25 + *(int32_t *)g32) = (char)(g33 + 1);
						result3 = SetPlayerOld(g33);
						// branch -> 0x86810
					} else {
						result3 = 0;
					}
				} else {
					result3 = v34;
				}
			} else {
				result3 = result5;
			}
		}
		// 0x86810
		g10 = v1;
		return result3;
	}
	// 0x865ac
	if (v10 <= 75) {
		// 0x865b4
		function_7d940(g27, *(int32_t *)(v9 + 72), 0);
		// branch -> 0x865f8
		// 0x865f8
		v23 = __asm_rlwinm_(*(int32_t *)(g26 + 160), 0, 27, 27);
		v14 = g29;
		if (v23 == 0) {
			// 0x86604
			v24 = 112 * v14;
			g24 = v24;
			v48 = *(char *)(g28 + v24 + *(int32_t *)g32);
			result4 = v48;
			g33 = result4 - 1;
			if (v48 >= 1) {
				// 0x86628
				v15 = g26;
				result5 = *(int32_t *)(v15 + 224);
				v33 = *(char *)result5;
				if (v33 != 40) {
					// 0x86638
					if (v33 < 72) {
						// 0x86648
						v49 = (int32_t) * (char *)(v15 + 205);
						function_7e3a4(g27, 500, (int32_t) * (char *)(v15 + 204), v49, v49);
						v25 = g28;
						v34 = (int32_t) * (char *)(v25 + g24 + *(int32_t *)g32);
						v26 = v34 - 1;
						if (g33 == v26) {
							// 0x86678
							v16 = g26;
							result6 = *(int32_t *)(v16 + 224);
							v35 = *(char *)result6;
							if (v35 >= 89) {
								// 0x86688
								if (v35 < 93) {
									// 0x86810
									g10 = v1;
									return result6;
								}
							}
							// 0x86690
							v27 = 0x55ec * v26;
							g24 = v27;
							v50 = *(int32_t *)(g35 + v27);
							v19 = v25;
							v18 = v26;
							v17 = v16;
							if (v50 != 7) {
								// 0x866a0
								if (v50 != 8) {
									// 0x866a8
									g38 = 1;
									function_a579c(v26, 0);
									v19 = g28;
									v18 = g33;
									v17 = g26;
									// branch -> 0x866b8
								} else {
									v19 = v25;
									v18 = v26;
									v17 = v16;
								}
							}
							// 0x866b8
							v28 = 4 * *(int32_t *)(v17 + 72);
							v36 = g29 + *(int32_t *)(g31 + v28);
							g25 = v36;
							v37 = *(int32_t *)(g30 + v28) + v19;
							g26 = v37;
							if (function_a9df0(v18, v36, v37) != 0) {
								// 0x866e8
								v38 = g24 + g35;
								v12 = v38;
								*(int32_t *)(v38 + 56) = g25;
								*(int32_t *)(v12 + 60) = g26;
								function_a4250(g33, *(int32_t *)(v12 + 112));
								function_a5364(g33);
								*(char *)(g26 + 112 * g25 + *(int32_t *)g32) = (char)(g33 + 1);
								result3 = SetPlayerOld(g33);
								// branch -> 0x86810
							} else {
								result3 = 0;
							}
						} else {
							result3 = v34;
						}
					} else {
						// 0x86640
						if (v33 >= 76) {
							// 0x86648
							v49 = (int32_t) * (char *)(v15 + 205);
							function_7e3a4(g27, 500, (int32_t) * (char *)(v15 + 204), v49, v49);
							v25 = g28;
							v34 = (int32_t) * (char *)(v25 + g24 + *(int32_t *)g32);
							v26 = v34 - 1;
							if (g33 == v26) {
								// 0x86678
								v16 = g26;
								result6 = *(int32_t *)(v16 + 224);
								v35 = *(char *)result6;
								if (v35 >= 89) {
									// 0x86688
									if (v35 < 93) {
										// 0x86810
										g10 = v1;
										return result6;
									}
								}
								// 0x86690
								v27 = 0x55ec * v26;
								g24 = v27;
								v50 = *(int32_t *)(g35 + v27);
								v19 = v25;
								v18 = v26;
								v17 = v16;
								if (v50 != 7) {
									// 0x866a0
									if (v50 != 8) {
										// 0x866a8
										g38 = 1;
										function_a579c(v26, 0);
										v19 = g28;
										v18 = g33;
										v17 = g26;
										// branch -> 0x866b8
									} else {
										v19 = v25;
										v18 = v26;
										v17 = v16;
									}
								}
								// 0x866b8
								v28 = 4 * *(int32_t *)(v17 + 72);
								v36 = g29 + *(int32_t *)(g31 + v28);
								g25 = v36;
								v37 = *(int32_t *)(g30 + v28) + v19;
								g26 = v37;
								if (function_a9df0(v18, v36, v37) != 0) {
									// 0x866e8
									v38 = g24 + g35;
									v12 = v38;
									*(int32_t *)(v38 + 56) = g25;
									*(int32_t *)(v12 + 60) = g26;
									function_a4250(g33, *(int32_t *)(v12 + 112));
									function_a5364(g33);
									*(char *)(g26 + 112 * g25 + *(int32_t *)g32) = (char)(g33 + 1);
									result3 = SetPlayerOld(g33);
									// branch -> 0x86810
								} else {
									result3 = 0;
								}
							} else {
								result3 = v34;
							}
						} else {
							result3 = result5;
						}
					}
					// 0x86810
					g10 = v1;
					return result3;
				}
				result3 = result5;
			} else {
				result3 = result4;
			}
		} else {
			// 0x86728
			v29 = 224 * v14;
			g25 = v29;
			result = *(int32_t *)g33;
			v30 = 2 * g28;
			g24 = v30;
			v51 = *(int16_t *)(v30 + v29 + result);
			if (v51 >= 1) {
				// 0x86744
				v20 = g26;
				result2 = *(int32_t *)(v20 + 224);
				v39 = *(char *)result2;
				if (v39 != 40) {
					// 0x86754
					if (v39 >= 72) {
						// 0x8675c
						if (v39 < 76) {
							// 0x86810
							g10 = v1;
							return result2;
						}
					}
					// 0x86764
					v45 = *(char *)(v20 + 204);
					v46 = *(char *)(v20 + 205);
					function_7e228(g27, (int32_t)v51 - 1, 500, (int32_t)v45, (int32_t)v46);
					v21 = g26;
					v47 = *(int32_t *)(v21 + 224);
					v40 = *(char *)v47;
					if (v40 < 89) {
						// 0x86794
						v41 = g24 + g25;
						g24 = v41;
						v31 = 4 * *(int32_t *)(v21 + 72);
						v42 = g29 + *(int32_t *)(g31 + v31);
						g25 = v42;
						v43 = g28 + *(int32_t *)(g30 + v31);
						g26 = v43;
						v32 = (int32_t) * (int16_t *)(*(int32_t *)g33 + v41) - 1;
						if (function_86824(v32, v42, v43) != 0) {
							// 0x867d0
							v44 = *(int32_t *)g33;
							v52 = *(int16_t *)(g24 + v44);
							*(int16_t *)(224 * g25 + v44 + 2 * g26) = v52;
							v11 = g36 + 232 * ((int32_t)v52 - 1);
							*(int16_t *)(g24 + *(int32_t *)g33) = 0;
							*(int32_t *)(v11 + 32) = g25;
							*(int32_t *)(v11 + 40) = g25;
							*(int32_t *)(v11 + 36) = g26;
							*(int32_t *)(v11 + 44) = g26;
							result3 = v11;
							// branch -> 0x86810
						} else {
							result3 = 0;
						}
					} else {
						// 0x8678c
						if (v40 >= 93) {
							// 0x86794
							v41 = g24 + g25;
							g24 = v41;
							v31 = 4 * *(int32_t *)(v21 + 72);
							v42 = g29 + *(int32_t *)(g31 + v31);
							g25 = v42;
							v43 = g28 + *(int32_t *)(g30 + v31);
							g26 = v43;
							v32 = (int32_t) * (int16_t *)(*(int32_t *)g33 + v41) - 1;
							if (function_86824(v32, v42, v43) != 0) {
								// 0x867d0
								v44 = *(int32_t *)g33;
								v52 = *(int16_t *)(g24 + v44);
								*(int16_t *)(224 * g25 + v44 + 2 * g26) = v52;
								v11 = g36 + 232 * ((int32_t)v52 - 1);
								*(int16_t *)(g24 + *(int32_t *)g33) = 0;
								*(int32_t *)(v11 + 32) = g25;
								*(int32_t *)(v11 + 40) = g25;
								*(int32_t *)(v11 + 36) = g26;
								*(int32_t *)(v11 + 44) = g26;
								result3 = v11;
								// branch -> 0x86810
							} else {
								result3 = 0;
							}
						} else {
							result3 = v47;
						}
					}
					// 0x86810
					g10 = v1;
					return result3;
				}
				result3 = result2;
			} else {
				result3 = result;
			}
		}
		// 0x86810
		g10 = v1;
		return result3;
	}
	// 0x865c8
	v22 = __asm_rlwinm_(*(int32_t *)(v9 + 160), 0, 27, 27);
	v13 = g27;
	g38 = 0;
	if (v22 == 0) {
		// 0x865d4
		function_7cbac(v13, -1);
		// branch -> 0x865f8
	} else {
		// 0x865e8
		function_7d044(v13, -1, 0);
		// branch -> 0x865f8
	}
	// 0x865f8
	v23 = __asm_rlwinm_(*(int32_t *)(g26 + 160), 0, 27, 27);
	v14 = g29;
	if (v23 == 0) {
		// 0x86604
		v24 = 112 * v14;
		g24 = v24;
		v48 = *(char *)(g28 + v24 + *(int32_t *)g32);
		result4 = v48;
		g33 = result4 - 1;
		if (v48 >= 1) {
			// 0x86628
			v15 = g26;
			result5 = *(int32_t *)(v15 + 224);
			v33 = *(char *)result5;
			if (v33 != 40) {
				// 0x86638
				if (v33 < 72) {
					// 0x86648
					v49 = (int32_t) * (char *)(v15 + 205);
					function_7e3a4(g27, 500, (int32_t) * (char *)(v15 + 204), v49, v49);
					v25 = g28;
					v34 = (int32_t) * (char *)(v25 + g24 + *(int32_t *)g32);
					v26 = v34 - 1;
					if (g33 == v26) {
						// 0x86678
						v16 = g26;
						result6 = *(int32_t *)(v16 + 224);
						v35 = *(char *)result6;
						if (v35 >= 89) {
							// 0x86688
							if (v35 < 93) {
								// 0x86810
								g10 = v1;
								return result6;
							}
						}
						// 0x86690
						v27 = 0x55ec * v26;
						g24 = v27;
						v50 = *(int32_t *)(g35 + v27);
						v19 = v25;
						v18 = v26;
						v17 = v16;
						if (v50 != 7) {
							// 0x866a0
							if (v50 != 8) {
								// 0x866a8
								g38 = 1;
								function_a579c(v26, 0);
								v19 = g28;
								v18 = g33;
								v17 = g26;
								// branch -> 0x866b8
							} else {
								v19 = v25;
								v18 = v26;
								v17 = v16;
							}
						}
						// 0x866b8
						v28 = 4 * *(int32_t *)(v17 + 72);
						v36 = g29 + *(int32_t *)(g31 + v28);
						g25 = v36;
						v37 = *(int32_t *)(g30 + v28) + v19;
						g26 = v37;
						if (function_a9df0(v18, v36, v37) != 0) {
							// 0x866e8
							v38 = g24 + g35;
							v12 = v38;
							*(int32_t *)(v38 + 56) = g25;
							*(int32_t *)(v12 + 60) = g26;
							function_a4250(g33, *(int32_t *)(v12 + 112));
							function_a5364(g33);
							*(char *)(g26 + 112 * g25 + *(int32_t *)g32) = (char)(g33 + 1);
							result3 = SetPlayerOld(g33);
							// branch -> 0x86810
						} else {
							result3 = 0;
						}
					} else {
						result3 = v34;
					}
				} else {
					// 0x86640
					if (v33 >= 76) {
						// 0x86648
						v49 = (int32_t) * (char *)(v15 + 205);
						function_7e3a4(g27, 500, (int32_t) * (char *)(v15 + 204), v49, v49);
						v25 = g28;
						v34 = (int32_t) * (char *)(v25 + g24 + *(int32_t *)g32);
						v26 = v34 - 1;
						if (g33 == v26) {
							// 0x86678
							v16 = g26;
							result6 = *(int32_t *)(v16 + 224);
							v35 = *(char *)result6;
							if (v35 >= 89) {
								// 0x86688
								if (v35 < 93) {
									// 0x86810
									g10 = v1;
									return result6;
								}
							}
							// 0x86690
							v27 = 0x55ec * v26;
							g24 = v27;
							v50 = *(int32_t *)(g35 + v27);
							v19 = v25;
							v18 = v26;
							v17 = v16;
							if (v50 != 7) {
								// 0x866a0
								if (v50 != 8) {
									// 0x866a8
									g38 = 1;
									function_a579c(v26, 0);
									v19 = g28;
									v18 = g33;
									v17 = g26;
									// branch -> 0x866b8
								} else {
									v19 = v25;
									v18 = v26;
									v17 = v16;
								}
							}
							// 0x866b8
							v28 = 4 * *(int32_t *)(v17 + 72);
							v36 = g29 + *(int32_t *)(g31 + v28);
							g25 = v36;
							v37 = *(int32_t *)(g30 + v28) + v19;
							g26 = v37;
							if (function_a9df0(v18, v36, v37) != 0) {
								// 0x866e8
								v38 = g24 + g35;
								v12 = v38;
								*(int32_t *)(v38 + 56) = g25;
								*(int32_t *)(v12 + 60) = g26;
								function_a4250(g33, *(int32_t *)(v12 + 112));
								function_a5364(g33);
								*(char *)(g26 + 112 * g25 + *(int32_t *)g32) = (char)(g33 + 1);
								result3 = SetPlayerOld(g33);
								// branch -> 0x86810
							} else {
								result3 = 0;
							}
						} else {
							result3 = v34;
						}
					} else {
						result3 = result5;
					}
				}
				// 0x86810
				g10 = v1;
				return result3;
			}
			result3 = result5;
		} else {
			result3 = result4;
		}
	} else {
		// 0x86728
		v29 = 224 * v14;
		g25 = v29;
		result = *(int32_t *)g33;
		v30 = 2 * g28;
		g24 = v30;
		v51 = *(int16_t *)(v30 + v29 + result);
		if (v51 >= 1) {
			// 0x86744
			v20 = g26;
			result2 = *(int32_t *)(v20 + 224);
			v39 = *(char *)result2;
			if (v39 != 40) {
				// 0x86754
				if (v39 >= 72) {
					// 0x8675c
					if (v39 < 76) {
						// 0x86810
						g10 = v1;
						return result2;
					}
				}
				// 0x86764
				v45 = *(char *)(v20 + 204);
				v46 = *(char *)(v20 + 205);
				function_7e228(g27, (int32_t)v51 - 1, 500, (int32_t)v45, (int32_t)v46);
				v21 = g26;
				v47 = *(int32_t *)(v21 + 224);
				v40 = *(char *)v47;
				if (v40 < 89) {
					// 0x86794
					v41 = g24 + g25;
					g24 = v41;
					v31 = 4 * *(int32_t *)(v21 + 72);
					v42 = g29 + *(int32_t *)(g31 + v31);
					g25 = v42;
					v43 = g28 + *(int32_t *)(g30 + v31);
					g26 = v43;
					v32 = (int32_t) * (int16_t *)(*(int32_t *)g33 + v41) - 1;
					if (function_86824(v32, v42, v43) != 0) {
						// 0x867d0
						v44 = *(int32_t *)g33;
						v52 = *(int16_t *)(g24 + v44);
						*(int16_t *)(224 * g25 + v44 + 2 * g26) = v52;
						v11 = g36 + 232 * ((int32_t)v52 - 1);
						*(int16_t *)(g24 + *(int32_t *)g33) = 0;
						*(int32_t *)(v11 + 32) = g25;
						*(int32_t *)(v11 + 40) = g25;
						*(int32_t *)(v11 + 36) = g26;
						*(int32_t *)(v11 + 44) = g26;
						result3 = v11;
						// branch -> 0x86810
					} else {
						result3 = 0;
					}
				} else {
					// 0x8678c
					if (v40 >= 93) {
						// 0x86794
						v41 = g24 + g25;
						g24 = v41;
						v31 = 4 * *(int32_t *)(v21 + 72);
						v42 = g29 + *(int32_t *)(g31 + v31);
						g25 = v42;
						v43 = g28 + *(int32_t *)(g30 + v31);
						g26 = v43;
						v32 = (int32_t) * (int16_t *)(*(int32_t *)g33 + v41) - 1;
						if (function_86824(v32, v42, v43) != 0) {
							// 0x867d0
							v44 = *(int32_t *)g33;
							v52 = *(int16_t *)(g24 + v44);
							*(int16_t *)(224 * g25 + v44 + 2 * g26) = v52;
							v11 = g36 + 232 * ((int32_t)v52 - 1);
							*(int16_t *)(g24 + *(int32_t *)g33) = 0;
							*(int32_t *)(v11 + 32) = g25;
							*(int32_t *)(v11 + 40) = g25;
							*(int32_t *)(v11 + 36) = g26;
							*(int32_t *)(v11 + 44) = g26;
							result3 = v11;
							// branch -> 0x86810
						} else {
							result3 = 0;
						}
					} else {
						result3 = v47;
					}
				}
				// 0x86810
				g10 = v1;
				return result3;
			}
			result3 = result2;
		} else {
			result3 = result;
		}
	}
	// 0x86810
	g10 = v1;
	return result3;
}

// Address range: 0x86824 - 0x869f0
int32_t function_86824(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x86824
	g38 = a3;
	int32_t v1 = g10; // 0x86828
	g33 = 0;
	g35 = *(int32_t *)(g23 - 0x7664);
	g30 = a2;
	int32_t v2 = g38; // 0x86838
	g31 = v2;
	g29 = a1;
	g36 = *(int32_t *)(g23 - 0x7754);
	g28 = 0;
	g34 = a2;
	g37 = v2;
	g32 = 0;
	if (function_a3ef8() == 0) {
		int32_t v3 = *(int32_t *)(g23 - 0x7680); // 0x8686c
		if (*(char *)(g31 + 112 * g30 + *(int32_t *)v3) == 0) {
			// 0x86884
			g28 = 1;
			// branch -> 0x86888
		}
	}
	// 0x86888
	if (g28 % 256 != 0) {
		int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x767c); // 0x86898
		if (*(int16_t *)(2 * g31 + 224 * g30 + v4) == 0) {
			// 0x868b0
			g33 = 1;
			// branch -> 0x868b4
		}
	}
	int32_t v5 = g33 % 256; // 0x868b4
	int32_t result = v5;    // r3
	if (v5 == 0) {
		// 0x86918
		// branch -> 0x869dc
		// 0x869dc
		g10 = v1;
		return result;
	}
	int32_t v6 = g31 + 112 * g30;                                              // 0x868cc
	unsigned char v7 = *(char *)(v6 + *(int32_t *)*(int32_t *)(g23 - 0x7684)); // 0x868d0
	int32_t v8 = v7;                                                           // 0x868d4
	if (v7 != 0) {
		int32_t v9 = *(int32_t *)(g23 - 0x7688);                              // 0x86900
		int32_t v10 = v9 + 120 * (((int32_t)v7 & 128) != 0 ? -v8 : v8) - 120; // 0x86904
		if (*(int32_t *)(v10 + 56) != 0) {
			// 0x86914
			// branch -> 0x86918
			// 0x86918
			// branch -> 0x869dc
			// 0x869dc
			g10 = v1;
			return 0;
		}
	}
	unsigned char v11 = *(char *)(v6 + *(int32_t *)*(int32_t *)(g23 - 0x7594)); // 0x86930
	if (v11 == 0) {
		// 0x869dc
		g10 = v1;
		return result;
	}
	uint32_t v12 = g29; // 0x8693c
	if (v12 >= 0) {
		// 0x86944
		if (0x1000000 * (int32_t)v11 >= 0) {
			// 0x8694c
			bool v13; // 0x8699c
			if (*(int32_t *)(g35 + 180 * (int32_t)v11) == 5) {
				// 0x8695c
				g32 = 1;
				v13 = false;
				// branch -> 0x8699c
			} else {
				int32_t v14 = *(int32_t *)(g23 - 0x7660); // 0x86968
				g38 = v14;
				uint32_t v15 = *(int32_t *)*(int32_t *)(g23 - 0x7668); // 0x8696c
				if (v15 >= 1) {
					while (true) {
						// 0x8697c
						if (*(int32_t *)(180 * *(int32_t *)v14 + g35) == 5) {
							// 0x86990
							g32 = 1;
							// branch -> 0x86994
						}
						int32_t v16 = v14 + 4; // 0x86994
						g38 = v16;
						int32_t v17 = v15 - 1; // 0x86998
						if (v17 == 0) {
							// break -> 0x8699c
							break;
						}
						v15 = v17;
						v14 = v16;
						// continue -> 0x8697c
					}
					// 0x8699c
					// branch -> 0x8699c
				}
				// 0x8699c
				v13 = g32 == 0;
				// branch -> 0x8699c
			}
			// 0x8699c
			if (v13) {
				// 0x869b8
				if (true || *(char *)*(int32_t *)(g36 + 232 * g29 + 224) != 110) {
					// 0x869dc
					g10 = v1;
					return result;
				}
			} else {
				// 0x869a4
				if (__asm_rlwinm_((int32_t) * (int16_t *)(g36 + 232 * v12 + 208), 0, 27, 27) != 0) {
					// 0x869a4
					// branch -> 0x869b8
					// 0x869b8
					if (g32 == 0 || *(char *)*(int32_t *)(g36 + 232 * g29 + 224) != 110) {
						// 0x869dc
						g10 = v1;
						return result;
					}
				}
			}
			// 0x869d8
			// branch -> 0x869dc
			// 0x869dc
			g10 = v1;
			return 0;
		}
		// 0x8699c
		// branch -> 0x8699c
		// 0x8699c
		if (g32 == 0) {
			// 0x869b8
			if (true || *(char *)*(int32_t *)(g36 + 232 * g29 + 224) != 110) {
				// 0x869dc
				g10 = v1;
				return result;
			}
		} else {
			// 0x869a4
			if (__asm_rlwinm_((int32_t) * (int16_t *)(g36 + 232 * v12 + 208), 0, 27, 27) != 0) {
				// 0x869a4
				// branch -> 0x869b8
				// 0x869b8
				if (g32 == 0 || *(char *)*(int32_t *)(g36 + 232 * g29 + 224) != 110) {
					// 0x869dc
					g10 = v1;
					return result;
				}
			}
		}
		// 0x869d8
		result = 0;
		// branch -> 0x869dc
	}
	// 0x869dc
	g10 = v1;
	return result;
}

// Address range: 0x869f0 - 0x86b60
int32_t function_869f0(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x86a04
	g34 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x86a0c
	g37 = a3;
	int32_t v3 = 0;                                                  // r29
	int32_t v4 = function_a3ef8();                                   // 0x86a20
	int32_t v5 = __asm_rlwinm_(llvm_ctlz_i32(v4, true), 27, 24, 31); // 0x86a28
	int32_t result = v5;                                             // r3
	int32_t v6 = 0;                                                  // 0x86a88
	int32_t v7;                                                      // 0x86a94
	int32_t v8;                                                      // 0x86aac
	int32_t v9;                                                      // 0x86ac0
	int32_t v10;                                                     // 0x86b04
	int32_t v11;                                                     // 0x86b08
	bool v12;                                                        // 0x86b0c
	int32_t v13;                                                     // 0x86a98
	uint32_t v14;                                                    // 0x86adc
	unsigned char v15;                                               // 0x86aa0
	if (v5 != 0) {
		int32_t v16 = *(int32_t *)*(int32_t *)(g23 - 0x7684); // 0x86a38
		char v17 = *(char *)(a3 + 112 * a2 + v16);            // 0x86a40
		int32_t v18 = v17;                                    // 0x86a44
		if (v17 != 0) {
			int32_t v19 = *(int32_t *)(g23 - 0x7688);                                  // 0x86a70
			int32_t v20 = *(int32_t *)(v19 + 120 * (v17 < 0 ? -v18 : v18) - 120 + 56); // 0x86a78
			if (v20 != 0) {
				// 0x86a84
				result = 0;
				v6 = 0;
				// branch -> 0x86a88
			} else {
				v6 = v5;
			}
			// 0x86a88
			if (v6 == 0) {
				// 0x86b4c
				return result;
			}
			// 0x86a90
			v7 = g23;
			v13 = *(int32_t *)*(int32_t *)(v7 - 0x7594);
			v15 = *(char *)(a3 + 112 * a2 + v13);
			if (v15 == 0) {
				// 0x86b4c
				return result;
			}
			// 0x86aac
			v8 = a1;
			if (v8 < 0) {
				// 0x86b4c
				return result;
			}
			// 0x86ab4
			if (0x1000000 * (int32_t)v15 < 0) {
				// 0x86b0c
				// branch -> 0x86b0c
				// 0x86b0c
				if (v3 == 0) {
					// 0x86b28
					if (true || *(char *)*(int32_t *)(v2 + 232 * a1 + 224) != 110) {
						// 0x86b4c
						return result;
					}
				} else {
					// 0x86b14
					if (__asm_rlwinm_((int32_t) * (int16_t *)(v2 + 232 * v8 + 208), 0, 27, 27) != 0) {
						// 0x86b14
						// branch -> 0x86b28
						// 0x86b28
						if (v3 == 0 || *(char *)*(int32_t *)(v2 + 232 * a1 + 224) != 110) {
							// 0x86b4c
							return result;
						}
					}
				}
				// 0x86b48
				// branch -> 0x86b4c
				// 0x86b4c
				return 0;
			}
			// 0x86abc
			v9 = v1;
			if (*(int32_t *)(v9 + 180 * (int32_t)v15) == 5) {
				// 0x86acc
				v3 = 1;
				v12 = false;
				// branch -> 0x86b0c
			} else {
				// 0x86ad4
				v14 = *(int32_t *)*(int32_t *)(v7 - 0x7668);
				if (v14 >= 1) {
					v11 = v14;
					v10 = *(int32_t *)(v7 - 0x7660);
					while (true) {
						// 0x86aec
						if (*(int32_t *)(180 * *(int32_t *)v10 + v9) == 5) {
						lab_0x86b00_2:
							// 0x86b00
							v3 = 1;
							// branch -> 0x86b04
						}
					lab_0x86b04_2:;
						int32_t v21 = v11 - 1; // 0x86b08
						if (v21 == 0) {
							// break -> 0x86b0c
							break;
						}
						v11 = v21;
						v10 += 4;
						// continue -> 0x86aec
					}
					// 0x86b0c
					// branch -> 0x86b0c
				}
				// 0x86b0c
				v12 = v3 == 0;
				// branch -> 0x86b0c
			}
			// 0x86b0c
			if (v12) {
				// 0x86b28
				if (true || *(char *)*(int32_t *)(v2 + 232 * a1 + 224) != 110) {
					// 0x86b4c
					return result;
				}
			} else {
				// 0x86b14
				if (__asm_rlwinm_((int32_t) * (int16_t *)(v2 + 232 * v8 + 208), 0, 27, 27) != 0) {
					// 0x86b14
					// branch -> 0x86b28
					// 0x86b28
					if (v3 == 0 || *(char *)*(int32_t *)(v2 + 232 * a1 + 224) != 110) {
						// 0x86b4c
						return result;
					}
				}
			}
			// 0x86b48
			// branch -> 0x86b4c
			// 0x86b4c
			return 0;
		}
		v6 = v5;
		// 0x86a88
		if (v6 == 0) {
			// 0x86b4c
			return result;
		}
		// 0x86a90
		v7 = g23;
		v13 = *(int32_t *)*(int32_t *)(v7 - 0x7594);
		v15 = *(char *)(a3 + 112 * a2 + v13);
		int32_t v22 = v15; // 0x86aa4
		if (v15 == 0) {
			// 0x86b4c
			return result;
		}
		// 0x86aac
		v8 = a1;
		if (v8 < 0) {
			// 0x86b4c
			return result;
		}
		// 0x86ab4
		if (0x1000000 * (int32_t)v15 >= 0) {
			// 0x86abc
			v9 = v1;
			if (*(int32_t *)(v9 + 180 * v22) == 5) {
				// 0x86acc
				v3 = 1;
				v12 = false;
				// branch -> 0x86b0c
			} else {
				// 0x86ad4
				v14 = *(int32_t *)*(int32_t *)(v7 - 0x7668);
				if (v14 >= 1) {
					v11 = v14;
					v10 = *(int32_t *)(v7 - 0x7660);
					while (true) {
						// 0x86aec
						if (*(int32_t *)(180 * *(int32_t *)v10 + v9) == 5) {
							goto lab_0x86b00_2;
						}
						goto lab_0x86b04_2;
					}
				}
				// 0x86b0c
				v12 = v3 == 0;
				// branch -> 0x86b0c
			}
			// 0x86b0c
			if (v12) {
				// 0x86b28
				if (true || *(char *)*(int32_t *)(v2 + 232 * a1 + 224) != 110) {
					// 0x86b4c
					return result;
				}
			} else {
				// 0x86b14
				if (__asm_rlwinm_((int32_t) * (int16_t *)(v2 + 232 * v8 + 208), 0, 27, 27) != 0) {
					// 0x86b14
					// branch -> 0x86b28
					// 0x86b28
					if (v3 == 0 || *(char *)*(int32_t *)(v2 + 232 * a1 + 224) != 110) {
						// 0x86b4c
						return result;
					}
				}
			}
			// 0x86b48
			// branch -> 0x86b4c
			// 0x86b4c
			return 0;
		}
		// 0x86b0c
		// branch -> 0x86b0c
		// 0x86b0c
		if (v3 == 0) {
			// 0x86b28
			if (true || *(char *)*(int32_t *)(v2 + 232 * a1 + 224) != 110) {
				// 0x86b4c
				return result;
			}
		} else {
			// 0x86b14
			if (__asm_rlwinm_((int32_t) * (int16_t *)(v2 + 232 * v8 + 208), 0, 27, 27) != 0) {
				// 0x86b14
				// branch -> 0x86b28
				// 0x86b28
				if (v3 == 0 || *(char *)*(int32_t *)(v2 + 232 * a1 + 224) != 110) {
					// 0x86b4c
					return result;
				}
			}
		}
		// 0x86b48
		result = 0;
		// branch -> 0x86b4c
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x86a88
	if (v6 == 0) {
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x86a90
	v7 = g23;
	v13 = *(int32_t *)*(int32_t *)(v7 - 0x7594);
	v15 = *(char *)(a3 + 112 * a2 + v13);
	if (v15 == 0) {
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x86aac
	v8 = a1;
	if (v8 < 0) {
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x86ab4
	if (0x1000000 * (int32_t)v15 < 0) {
		// 0x86b0c
		v12 = v3 == 0;
		// branch -> 0x86b0c
	} else {
		// 0x86abc
		v9 = v1;
		if (*(int32_t *)(v9 + 180 * (int32_t)v15) == 5) {
			// 0x86acc
			v3 = 1;
			v12 = false;
			// branch -> 0x86b0c
		} else {
			// 0x86ad4
			v14 = *(int32_t *)*(int32_t *)(v7 - 0x7668);
			if (v14 >= 1) {
				v11 = v14;
				v10 = *(int32_t *)(v7 - 0x7660);
				while (true) {
					// 0x86aec
					if (*(int32_t *)(180 * *(int32_t *)v10 + v9) == 5) {
						goto lab_0x86b00_2;
					}
					goto lab_0x86b04_2;
				}
			}
			// 0x86b0c
			v12 = v3 == 0;
			// branch -> 0x86b0c
		}
		// 0x86b0c
		if (v12) {
			// Detected a possible infinite recursion (goto support failed); quitting...
			// 0x86b30
			if (*(char *)*(int32_t *)(v2 + 232 * a1 + 224) != 110) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		} else {
			// 0x86b14
			if (__asm_rlwinm_((int32_t) * (int16_t *)(v2 + 232 * v8 + 208), 0, 27, 27) != 0) {
				// 0x86b14
				// branch -> 0x86b28
				// 0x86b28
				if (v3 == 0) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x86b30
				if (*(char *)*(int32_t *)(v2 + 232 * a1 + 224) != 110) {
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
		}
		// 0x86b48
		// branch -> 0x86b4c
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x86b0c
	if (v12) {
		// Detected a possible infinite recursion (goto support failed); quitting...
		// 0x86b30
		if (*(char *)*(int32_t *)(v2 + 232 * a1 + 224) != 110) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x86b48
		// branch -> 0x86b4c
		// Detected a possible infinite recursion (goto support failed); quitting...
	} else {
		// 0x86b14
		if (__asm_rlwinm_((int32_t) * (int16_t *)(v2 + 232 * v8 + 208), 0, 27, 27) != 0) {
			// 0x86b14
			// branch -> 0x86b28
			// 0x86b28
			if (v3 == 0) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x86b30
			if (*(char *)*(int32_t *)(v2 + 232 * a1 + 224) != 110) {
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x86b48
			// branch -> 0x86b4c
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x86b48
		// branch -> 0x86b4c
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x86b48
	// branch -> 0x86b4c
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x86b60 - 0x86dcc
int32_t function_86b60(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7684);       // 0x86b70
	int32_t v2 = 112 * a2;                         // 0x86b74
	int32_t v3 = *(int32_t *)(g23 - 0x7664);       // 0x86b80
	int32_t v4 = *(int32_t *)(g23 - 0x7754);       // 0x86b84
	int32_t v5 = 0;                                // r27
	char v6 = *(char *)(*(int32_t *)v1 + a3 + v2); // 0x86ba4
	int32_t v7 = v6;                               // 0x86ba8
	int32_t v8;                                    // r22
	int32_t v9;                                    // r23
	int32_t v10;                                   // r29
	int32_t result;                                // r3
	int32_t v11;                                   // 0x86d00
	int32_t v12;                                   // 0x86d18
	int32_t v13;                                   // 0x86d2c
	int32_t v14;                                   // 0x86d70
	int32_t v15;                                   // 0x86d74
	bool v16;                                      // 0x86d78
	int32_t v17;                                   // 0x86cf4
	int32_t v18;                                   // 0x86cb4
	int32_t v19;                                   // 0x86cd8
	int32_t v20;                                   // 0x86d08
	uint32_t v21;                                  // 0x86d48
	unsigned char v22;                             // 0x86d0c
	if (v6 != 0) {
		int32_t v23 = 120 * (v6 < 0 ? -v7 : v7) - 120 + *(int32_t *)(g23 - 0x7688); // 0x86bd4
		int32_t v24 = *(int32_t *)v23;                                              // 0x86bd4
		bool v25 = false;                                                           // 0x86c00
		if (v24 != 1) {
			// 0x86bf4
			if (v24 != 2) {
				// 0x86bfc
				v25 = true;
				// branch -> 0x86c00
			} else {
				v25 = false;
			}
		}
		bool v26 = false; // 0x86c14
		if (v25) {
			// 0x86c08
			if (v24 != 42) {
				// 0x86c10
				v26 = true;
				// branch -> 0x86c14
			} else {
				v26 = false;
			}
		}
		bool v27 = false; // 0x86c28
		if (v26) {
			// 0x86c1c
			if (v24 != 43) {
				// 0x86c24
				v27 = true;
				// branch -> 0x86c28
			} else {
				v27 = false;
			}
		}
		bool v28 = false; // 0x86c3c
		if (v27) {
			// 0x86c30
			if (v24 != 74) {
				// 0x86c38
				v28 = true;
				// branch -> 0x86c3c
			} else {
				v28 = false;
			}
		}
		int32_t v29 = 1; // 0x86c58
		if (v28) {
			// 0x86c44
			if (v24 != 75) {
				// 0x86c4c
				v29 = 0;
				// branch -> 0x86c50
			} else {
				v29 = 1;
			}
		}
		// 0x86c50
		if (*(int32_t *)(v23 + 56) != 0) {
			// 0x86c64
			if (v29 == 0) {
				// 0x86cf8
				// branch -> 0x86db8
				// 0x86db8
				return 0;
			}
		}
		// 0x86c78
		v10 = 0;
		v9 = 0;
		g34 = a2;
		g37 = a3;
		v8 = 1;
		if (function_a3ef8() != 0) {
			// 0x86c98
			if (v29 == 0) {
				// 0x86ca0
				v8 = v10;
				// branch -> 0x86ca4
			}
		}
		// 0x86ca4
		if (v8 % 256 != 0) {
			// 0x86cac
			v18 = *(int32_t *)*(int32_t *)(g23 - 0x7680);
			if (*(char *)(v18 + a3 + v2) == 0) {
				// 0x86cc4
				v9 = 1;
				// branch -> 0x86cc8
			}
		}
		// 0x86cc8
		if (v9 % 256 != 0) {
			// 0x86cd0
			v19 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
			if (*(int16_t *)(2 * a3 + 224 * a2 + v19) == 0) {
				// 0x86cf0
				v10 = 1;
				// branch -> 0x86cf8
			}
		}
		// 0x86cf8
		v17 = v10 % 256;
		result = v17;
		if (v17 == 0) {
			// 0x86db8
			return result;
		}
		// 0x86d00
		v11 = g23;
		v20 = *(int32_t *)*(int32_t *)(v11 - 0x7594);
		v22 = *(char *)(v20 + a3 + v2);
		if (v22 == 0) {
			// 0x86db8
			return result;
		}
		// 0x86d18
		v12 = a1;
		if (v12 < 0) {
			// 0x86db8
			return result;
		}
		// 0x86d20
		if (0x1000000 * (int32_t)v22 < 0) {
			// 0x86d78
			// branch -> 0x86d78
			// 0x86d78
			if (v5 == 0) {
				// 0x86d94
				if (true || *(char *)*(int32_t *)(v4 + 232 * a1 + 224) != 110) {
					// 0x86db8
					return result;
				}
			} else {
				// 0x86d80
				if (__asm_rlwinm_((int32_t) * (int16_t *)(v4 + 232 * v12 + 208), 0, 27, 27) != 0) {
					// 0x86d80
					// branch -> 0x86d94
					// 0x86d94
					if (v5 == 0 || *(char *)*(int32_t *)(v4 + 232 * a1 + 224) != 110) {
						// 0x86db8
						return result;
					}
				}
			}
			// 0x86db4
			// branch -> 0x86db8
			// 0x86db8
			return 0;
		}
		// 0x86d28
		v13 = v3;
		if (*(int32_t *)(v13 + 180 * (int32_t)v22) == 5) {
			// 0x86d38
			v5 = 1;
			v16 = false;
			// branch -> 0x86d78
		} else {
			// 0x86d40
			v21 = *(int32_t *)*(int32_t *)(v11 - 0x7668);
			if (v21 >= 1) {
				v15 = v21;
				v14 = *(int32_t *)(v11 - 0x7660);
				while (true) {
					// 0x86d58
					if (*(int32_t *)(180 * *(int32_t *)v14 + v13) == 5) {
					lab_0x86d6c:
						// 0x86d6c
						v5 = 1;
						// branch -> 0x86d70
					}
				lab_0x86d70:;
					int32_t v30 = v15 - 1; // 0x86d74
					if (v30 == 0) {
						// break -> 0x86d78
						break;
					}
					v15 = v30;
					v14 += 4;
					// continue -> 0x86d58
				}
				// 0x86d78
				// branch -> 0x86d78
			}
			// 0x86d78
			v16 = v5 == 0;
			// branch -> 0x86d78
		}
		// 0x86d78
		if (v16) {
			// 0x86d94
			if (true || *(char *)*(int32_t *)(v4 + 232 * a1 + 224) != 110) {
				// 0x86db8
				return result;
			}
		} else {
			// 0x86d80
			if (__asm_rlwinm_((int32_t) * (int16_t *)(v4 + 232 * v12 + 208), 0, 27, 27) != 0) {
				// 0x86d80
				// branch -> 0x86d94
				// 0x86d94
				if (v5 == 0 || *(char *)*(int32_t *)(v4 + 232 * a1 + 224) != 110) {
					// 0x86db8
					return result;
				}
			}
		}
		// 0x86db4
		// branch -> 0x86db8
		// 0x86db8
		return 0;
	}
	// 0x86c78
	v10 = 0;
	v9 = 0;
	g34 = a2;
	g37 = a3;
	v8 = 1;
	if (function_a3ef8() != 0) {
		// 0x86ca0
		v8 = v10;
		// branch -> 0x86ca4
	}
	// 0x86ca4
	if (v8 % 256 != 0) {
		// 0x86cac
		v18 = *(int32_t *)*(int32_t *)(g23 - 0x7680);
		if (*(char *)(v18 + a3 + v2) == 0) {
			// 0x86cc4
			v9 = 1;
			// branch -> 0x86cc8
		}
	}
	// 0x86cc8
	if (v9 % 256 != 0) {
		// 0x86cd0
		v19 = *(int32_t *)*(int32_t *)(g23 - 0x767c);
		if (*(int16_t *)(2 * a3 + 224 * a2 + v19) == 0) {
			// 0x86cf0
			v10 = 1;
			// branch -> 0x86cf8
		}
	}
	// 0x86cf8
	v17 = v10 % 256;
	result = v17;
	if (v17 == 0) {
		// 0x86db8
		return result;
	}
	// 0x86d00
	v11 = g23;
	v20 = *(int32_t *)*(int32_t *)(v11 - 0x7594);
	v22 = *(char *)(v20 + a3 + v2);
	if (v22 == 0) {
		// 0x86db8
		return result;
	}
	// 0x86d18
	v12 = a1;
	if (v12 < 0) {
		// 0x86db8
		return result;
	}
	// 0x86d20
	if (0x1000000 * (int32_t)v22 >= 0) {
		// 0x86d28
		v13 = v3;
		if (*(int32_t *)(v13 + 180 * (int32_t)v22) == 5) {
			// 0x86d38
			v5 = 1;
			v16 = false;
			// branch -> 0x86d78
		} else {
			// 0x86d40
			v21 = *(int32_t *)*(int32_t *)(v11 - 0x7668);
			if (v21 >= 1) {
				v15 = v21;
				v14 = *(int32_t *)(v11 - 0x7660);
				while (true) {
					// 0x86d58
					if (*(int32_t *)(180 * *(int32_t *)v14 + v13) == 5) {
						goto lab_0x86d6c;
					}
					goto lab_0x86d70;
				}
			}
			// 0x86d78
			v16 = v5 == 0;
			// branch -> 0x86d78
		}
		// 0x86d78
		if (v16) {
			// 0x86d94
			if (true || *(char *)*(int32_t *)(v4 + 232 * a1 + 224) != 110) {
				// 0x86db8
				return result;
			}
		} else {
			// 0x86d80
			if (__asm_rlwinm_((int32_t) * (int16_t *)(v4 + 232 * v12 + 208), 0, 27, 27) != 0) {
				// 0x86d80
				// branch -> 0x86d94
				// 0x86d94
				if (v5 == 0 || *(char *)*(int32_t *)(v4 + 232 * a1 + 224) != 110) {
					// 0x86db8
					return result;
				}
			}
		}
		// 0x86db4
		// branch -> 0x86db8
		// 0x86db8
		return 0;
	}
	// 0x86d78
	// branch -> 0x86d78
	// 0x86d78
	if (v5 == 0) {
		// 0x86d94
		if (true || *(char *)*(int32_t *)(v4 + 232 * a1 + 224) != 110) {
			// 0x86db8
			return result;
		}
		// 0x86db4
		// branch -> 0x86db8
		// 0x86db8
		return 0;
	}
	// 0x86d80
	if (__asm_rlwinm_((int32_t) * (int16_t *)(v4 + 232 * v12 + 208), 0, 27, 27) != 0) {
		// 0x86d80
		// branch -> 0x86d94
		// 0x86d94
		if (v5 == 0) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x86d9c
		if (*(char *)*(int32_t *)(v4 + 232 * a1 + 224) != 110) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x86db4
		// branch -> 0x86db8
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x86db4
	// branch -> 0x86db8
	// Detected a possible infinite recursion (goto support failed); quitting...
	// 0x86db4
	// branch -> 0x86db8
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x86dcc - 0x86e4c
int32_t function_86dcc(uint32_t a1)
{
	// 0x86dcc
	bool v1;        // 0x86e0c
	bool v2;        // 0x86e18
	bool v3;        // 0x86e38
	int32_t result; // 0x86e44
	if (a1 < 8) {
		// 0x86dec
		v2 = false;
		if ((bool)true) {
			// 0x86df4
			v1 = true;
			if (a1 >= 20) {
				// 0x86e00
				if (a1 <= 23) {
					// 0x86e08
					v1 = false;
					// branch -> 0x86e0c
				} else {
					v1 = true;
				}
			}
			// 0x86e0c
			if (v1) {
				// 0x86e14
				v2 = true;
				// branch -> 0x86e18
			} else {
				v2 = false;
			}
		}
		// 0x86e18
		result = 1;
		if (v2) {
			// 0x86e20
			v3 = true;
			if (a1 >= 24) {
				// 0x86e2c
				if (a1 <= 27) {
					// 0x86e34
					v3 = false;
					// branch -> 0x86e38
				} else {
					v3 = true;
				}
			}
			// 0x86e38
			if (v3) {
				// 0x86e40
				result = 0;
				// branch -> 0x86e44
			} else {
				result = 1;
			}
		}
		// 0x86e44
		return result;
	}
	// 0x86de0
	bool v4; // 0x86dec
	if (a1 <= 11) {
		// 0x86de8
		v4 = false;
		// branch -> 0x86dec
	} else {
		v4 = true;
	}
	// 0x86dec
	v2 = false;
	if (v4) {
		// 0x86df4
		v1 = true;
		if (a1 >= 20) {
			// 0x86e00
			if (a1 <= 23) {
				// 0x86e08
				v1 = false;
				// branch -> 0x86e0c
			} else {
				v1 = true;
			}
		}
		// 0x86e0c
		if (v1) {
			// 0x86e14
			v2 = true;
			// branch -> 0x86e18
		} else {
			v2 = false;
		}
	}
	// 0x86e18
	result = 1;
	if (v2) {
		// 0x86e20
		v3 = true;
		if (a1 >= 24) {
			// 0x86e2c
			if (a1 <= 27) {
				// 0x86e34
				v3 = false;
				// branch -> 0x86e38
			} else {
				v3 = true;
			}
		}
		// 0x86e38
		if (v3) {
			// 0x86e40
			result = 0;
			// branch -> 0x86e44
		} else {
			result = 1;
		}
	}
	// 0x86e44
	return result;
}

// Address range: 0x86e4c - 0x86e9c
int32_t function_86e4c(uint32_t a1)
{
	// 0x86e4c
	bool v1;        // 0x86e88
	int32_t result; // 0x86e94
	if (a1 < 34) {
		// 0x86e68
		result = 1;
		if ((bool)true) {
			// 0x86e70
			v1 = true;
			if (a1 >= 42) {
				// 0x86e7c
				if (a1 <= 45) {
					// 0x86e84
					v1 = false;
					// branch -> 0x86e88
				} else {
					v1 = true;
				}
			}
			// 0x86e88
			if (v1) {
				// 0x86e90
				result = 0;
				// branch -> 0x86e94
			} else {
				result = 1;
			}
		}
		// 0x86e94
		return result;
	}
	// 0x86e5c
	bool v2; // 0x86e68
	if (a1 <= 37) {
		// 0x86e64
		v2 = false;
		// branch -> 0x86e68
	} else {
		v2 = true;
	}
	// 0x86e68
	result = 1;
	if (v2) {
		// 0x86e70
		v1 = true;
		if (a1 >= 42) {
			// 0x86e7c
			if (a1 <= 45) {
				// 0x86e84
				v1 = false;
				// branch -> 0x86e88
			} else {
				v1 = true;
			}
		}
		// 0x86e88
		if (v1) {
			// 0x86e90
			result = 0;
			// branch -> 0x86e94
		} else {
			result = 1;
		}
	}
	// 0x86e94
	return result;
}

// Address range: 0x86e9c - 0x86fa8
int32_t function_86e9c(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10;                        // 0x86ea0
	int32_t v2 = 0;                          // r27
	int32_t v3 = *(int32_t *)(g23 - 0x7610); // 0x86ea8
	g35 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7618); // 0x86eac
	g33 = v4;
	g30 = a3;
	int32_t v5 = 0; // r28
	g36 = v3;
	int32_t v6 = 0; // 0x86f08
	if (*(int32_t *)v4 > 0) {
		while (true) {
			// 0x86ed4
			if (function_86dcc((int32_t) * (char *)v3) != 0) {
				// 0x86ee4
				v5++;
				// branch -> 0x86ee8
			}
			int32_t v7 = g36 + 520; // 0x86ee8
			g36 = v7;
			int32_t v8 = v2 + 1; // 0x86eec
			v2 = v8;
			if (v8 >= *(int32_t *)g33) {
				// break -> 0x86ef0
				break;
			}
			v3 = v7;
			// continue -> 0x86ed4
		}
		// 0x86ef0
		v6 = v5;
		// branch -> 0x86efc
	}
	// 0x86efc
	if (v6 == 0) {
		// 0x86f94
		g10 = v1;
		return -1;
	}
	// 0x86f04
	g37 = v6;
	int32_t v9 = random(-120); // 0x86f0c
	v5 = 0;
	v2 = 0;
	g36 = v9;
	int32_t result;
	int32_t v10; // 0x86f6c
	if (*(int32_t *)g33 <= 0 || v9 < 0) {
		// 0x86f58
		v10 = AddMonster(a1, a2, g30, -1, 1);
		if (v10 != -1) {
			// 0x86f7c
			function_7c234(v10, g30);
			result = g31;
			// branch -> 0x86f94
		} else {
			result = -1;
		}
		// 0x86f94
		g10 = v1;
		return result;
	}
	int32_t v11 = g35; // 0x86f28
	// branch -> 0x86f28
	int32_t v12; // 0x86f40
	while (true) {
		// 0x86f28
		if (function_86dcc((int32_t) * (char *)v11) != 0) {
			// 0x86f38
			v5++;
			// branch -> 0x86f3c
		}
		int32_t v13 = g35 + 520; // 0x86f3c
		g35 = v13;
		v12 = v2 + 1;
		v2 = v12;
		if (v12 < *(int32_t *)g33) {
			// 0x86f3c
			if (v5 > g36) {
				// break -> 0x86f58
				break;
			}
			v11 = v13;
			// continue -> 0x86f28
			continue;
		}
	}
	// 0x86f58
	v10 = AddMonster(a1, a2, g30, v12 - 1, 1);
	if (v10 != -1) {
		// 0x86f7c
		function_7c234(v10, g30);
		result = g31;
		// branch -> 0x86f94
	} else {
		result = -1;
	}
	// 0x86f94
	g10 = v1;
	return result;
}

// Address range: 0x86fa8 - 0x8700c
int32_t function_86fa8(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x767c); // 0x86fc8
	*(int16_t *)(v1 + 2 * a3 + 224 * a2) = (int16_t)(a1 + 1);
	int32_t v2 = 232 * a1 + *(int32_t *)(g23 - 0x7754); // 0x86fd8
	*(int32_t *)(v2 + 32) = a2;
	*(int32_t *)(v2 + 36) = a3;
	*(int32_t *)(v2 + 40) = a2;
	*(int32_t *)(v2 + 44) = a3;
	*(int32_t *)(v2 + 48) = a2;
	*(int32_t *)(v2 + 52) = a3;
	return function_7c234(a4, a4);
}

// Address range: 0x8700c - 0x871a8
int32_t function_8700c(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x87010
	g33 = a1;
	g35 = a2;
	g36 = a3;
	if (a1 == -1) {
		// 0x87030
		// branch -> 0x87194
		// 0x87194
		g10 = v1;
		return 0;
	}
	// 0x87038
	if (function_86824(-1, a2, a3) != 0) {
		int32_t v2 = g35; // 0x87050
		int32_t v3 = g36; // 0x87054
		function_86fa8(g33, g35, g36, GetDirection(v2, v3, v2, v3));
		// branch -> 0x87190
		// 0x87190
		// branch -> 0x87194
		// 0x87194
		g10 = v1;
		return 1;
	}
	int32_t v4 = g36;    // 0x8707c
	int32_t v5 = v4 - 1; // 0x8707c
	g27 = v5;
	int32_t v6;       // bp-88
	int32_t v7 = &v6; // 0x87080
	g29 = v7;
	int32_t v8 = g35;    // 0x87084
	int32_t v9 = v8 + 1; // 0x87084
	g31 = v9;
	int32_t v10 = v4 + 1; // 0x87088
	g32 = v10;
	g26 = 0;
	int32_t v11;
	int32_t v12;
	int32_t v13; // 0x87158
	int32_t v14; // 0x8715c
	int32_t v15; // 0x870fc
	int32_t v16; // 0x87160
	int32_t v17; // 0x87164
	int32_t v18; // 0x87178
	if (v5 <= v10) {
		int32_t v19 = v7; // 0x87094
		while (true) {
			// 0x87094
			g30 = v19;
			int32_t v20 = v8 - 1; // 0x87098
			g28 = v20;
			int32_t v21 = 0; // 0x870dc25
			int32_t v22;     // 0x870d0
			if (v20 <= v9) {
				while (true) {
					int32_t v23 = function_86824(-1, v20, v5); // 0x870ac
					*(int32_t *)g30 = v23;
					int32_t v24 = g28 + 1; // 0x870b4
					g28 = v24;
					int32_t v25 = g30; // 0x870b8
					g30 = v25 + 12;
					int32_t v26 = g26 | *(int32_t *)v25; // 0x870c0
					g26 = v26;
					if (v24 > g31) {
						// 0x870c4
						v21 = v26;
						v10 = g32;
						v5 = g27;
						v19 = g29;
						// branch -> 0x870cc
						// 0x870cc
						g29 = v19 + 4;
						v22 = v5 + 1;
						g27 = v22;
						if (v22 <= v10) {
						lab_0x870cc:
							// 0x870cc
							// branch -> 0x87094
							break;
						}
						// 0x870dc
						if (v21 == 0) {
							// 0x870e4
							// branch -> 0x87194
							// 0x87194
							g10 = v1;
							return 0;
						}
						// 0x870ec
						g37 = 15;
						v15 = random(-119) + 1;
						if (v15 > 0) {
							int32_t v27 = v15;
							v12 = 0;
							int32_t v28;
							while (true) {
							lab_0x8710c:
								// 0x8710c
								v11 = v27;
								// branch -> 0x8710c
							lab_0x8710c_3:
								for (uint32_t i = 0; i < 3; i++) {
									// 0x8710c
									v28 = v11;
									if (*(int32_t *)(12 * i + 4 * v12 + v7) != 0) {
										int32_t v29 = v11 - 1; // 0x87124
										if (v29 < 1) {
											// 0x87150
											// branch -> 0x87158
											// 0x87158
											v13 = g35;
											v14 = g36;
											v16 = i - 1 + v13;
											g30 = v16;
											v17 = v12 - 1 + v14;
											g29 = v17;
											v18 = GetDirection(v16, v17, v13, v14);
											function_86fa8(g33, g30, g29, v18);
											// branch -> 0x87190
											// 0x87190
											// branch -> 0x87194
											// 0x87194
											g10 = v1;
											return 1;
										}
										v28 = v29;
									}
									// 0x87130
									// PHI copies at the loop end
									v11 = v28;
									// loop 0x8710c end
								}
								int32_t v30 = v12 + 1; // 0x8713c
								if (v30 == 3) {
									// break -> 0x8714c
									break;
								}
								v27 = v28;
								v12 = v30;
								// continue -> 0x8710c
							}
							// 0x8714c
							v27 = v28;
							v12 = 0;
							// branch -> 0x8710c
							goto lab_0x8710c;
						}
						// 0x87158
						v13 = g35;
						v14 = g36;
						v16 = v13 - 1;
						g30 = v16;
						v17 = v14 - 1;
						g29 = v17;
						v18 = GetDirection(v16, v17, v13, v14);
						function_86fa8(g33, g30, g29, v18);
						// branch -> 0x87190
						// 0x87190
						// branch -> 0x87194
						// 0x87194
						g10 = v1;
						return 1;
					}
					// 0x870a0
					v5 = g27;
					v20 = v24;
					// branch -> 0x870a0
				}
			}
			// 0x870cc
			g29 = v19 + 4;
			v22 = v5 + 1;
			g27 = v22;
			if (v22 <= v10) {
				goto lab_0x870cc;
			}
			// 0x870dc
			if (v21 == 0) {
				// 0x870e4
				// branch -> 0x87194
				// 0x87194
				g10 = v1;
				return 0;
			}
			// 0x870ec
			g37 = 15;
			v15 = random(-119) + 1;
			if (v15 > 0) {
				v12 = 0;
				while (true) {
					// 0x8710c
					v11 = v15;
					// branch -> 0x8710c
					goto lab_0x8710c_3;
				}
			}
			// 0x87158
			v13 = g35;
			v14 = g36;
			v16 = v13 - 1;
			g30 = v16;
			v17 = v14 - 1;
			g29 = v17;
			v18 = GetDirection(v16, v17, v13, v14);
			function_86fa8(g33, g30, g29, v18);
			// branch -> 0x87190
			// 0x87190
			// branch -> 0x87194
			// 0x87194
			g10 = v1;
			return 1;
		}
	}
	// 0x870dc
	int32_t result; // 0x871a4
	// 0x870e4
	result = 0;
	// branch -> 0x87194
	// 0x87194
	g10 = v1;
	return result;
}

// Address range: 0x871a8 - 0x872a8
int32_t function_871a8(int32_t a1)
{
	int32_t v1 = g10; // 0x871ac
	g31 = 0;
	int32_t v2 = *(int32_t *)(g23 - 0x7610); // 0x871b4
	g35 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7618); // 0x871b8
	g33 = v3;
	g32 = 0;
	g36 = v2;
	int32_t v4 = 0; // 0x87208
	if (*(int32_t *)v3 > 0) {
		while (true) {
			// 0x871d4
			if (function_86dcc((int32_t) * (char *)v2) != 0) {
				// 0x871e4
				g32++;
				// branch -> 0x871e8
			}
			int32_t v5 = g36 + 520; // 0x871e8
			g36 = v5;
			int32_t v6 = g31 + 1; // 0x871ec
			g31 = v6;
			if (v6 >= *(int32_t *)g33) {
				// break -> 0x871f0
				break;
			}
			v2 = v5;
			// continue -> 0x871d4
		}
		// 0x871f0
		v4 = g32;
		// branch -> 0x871fc
	}
	// 0x871fc
	if (v4 == 0) {
		// 0x87294
		g10 = v1;
		return -1;
	}
	// 0x87204
	g37 = v4;
	int32_t v7 = random(-120); // 0x8720c
	g32 = 0;
	int32_t v8 = 0; // r27
	g36 = v7;
	int32_t result;
	int32_t v9; // 0x8726c
	if (*(int32_t *)g33 <= 0 || v7 < 0) {
		// 0x87258
		v9 = AddMonster(0, 0, 0, -1, 0);
		g31 = v9;
		if (v9 != -1) {
			// 0x8727c
			function_7c124(v9, 0);
			result = g31;
			// branch -> 0x87294
		} else {
			result = -1;
		}
		// 0x87294
		g10 = v1;
		return result;
	}
	int32_t v10 = g35; // 0x87228
	// branch -> 0x87228
	int32_t v11; // 0x87240
	while (true) {
		// 0x87228
		if (function_86dcc((int32_t) * (char *)v10) != 0) {
			// 0x87238
			g32++;
			// branch -> 0x8723c
		}
		int32_t v12 = g35 + 520; // 0x8723c
		g35 = v12;
		v11 = v8 + 1;
		v8 = v11;
		if (v11 < *(int32_t *)g33) {
			// 0x8723c
			if (g32 > g36) {
				// break -> 0x87258
				break;
			}
			v10 = v12;
			// continue -> 0x87228
			continue;
		}
	}
	// 0x87258
	v9 = AddMonster(0, 0, 0, v11 - 1, 0);
	g31 = v9;
	if (v9 != -1) {
		// 0x8727c
		function_7c124(v9, 0);
		result = g31;
		// branch -> 0x87294
	} else {
		result = -1;
	}
	// 0x87294
	g10 = v1;
	return result;
}

// Address range: 0x872a8 - 0x873cc
int32_t function_872a8(int32_t a1)
{
	int32_t v1 = g36; // 0x872a8
	int32_t v2 = g10; // 0x872ac
	g36 = *(int32_t *)(g23 - 0x7604);
	int32_t v3 = g35; // 0x872b4
	int32_t v4 = g33; // 0x872b8
	g33 = a1;
	int32_t v5 = a1; // 0x872dc
	if (a1 >= 200) {
		// 0x872d0
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5ed4));
		v5 = g33;
		// branch -> 0x872dc
	}
	int32_t result = *(int32_t *)(g23 - 0x7754); // 0x872e0
	int32_t v6 = result + 232 * v5;              // 0x872e4
	g33 = v6;
	g35 = *(int32_t *)(v6 + 76);
	*(int32_t *)(v6 + 4) = 17;
	unsigned char v7 = *(char *)(g33 + 156); // 0x872f4
	int32_t result3;                         // r3
	int32_t v8;                              // bp-24
	int32_t result2;                         // 0x87364
	int32_t v9;                              // 0x87388
	if (v7 != 23) {
		// 0x87300
		if (v7 != 30) {
			// 0x873b0
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result;
		}
		// 0x87308
		if (QuestStatus(7) != 0) {
			// 0x87318
			if (*(char *)(g36 + 183) == 2) {
				// 0x87324
				v8 = 0;
				if (function_c5638(g35, 12, &v8) != 0) {
					// 0x8733c
					g37 = v8;
					function_591d8(g35);
					*(char *)(g36 + 170) = 3;
					*(int32_t *)(g33 + 212) = 22;
					*(char *)(g33 + 8) = (char)6;
					// branch -> 0x87360
				}
			}
		}
		// 0x87360
		result2 = QuestStatus(4);
		if (result2 == 0 || *(int32_t *)(g33 + 212) < 81) {
			// 0x873b0
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result2;
		}
		// 0x8737c
		v9 = function_c5638(g35, 15, &v8);
		result3 = v9;
		if (v9 != 0) {
			// 0x87394
			g37 = v8;
			result3 = function_591d8(g35);
			*(int32_t *)(g33 + 212) = 83;
			*(char *)(g33 + 8) = 6;
			// branch -> 0x873b0
		}
		// 0x873b0
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return result3;
	}
	// 0x87308
	if (QuestStatus(7) != 0) {
		// 0x87318
		if (*(char *)(g36 + 183) == 2) {
			// 0x87324
			if (function_c5638(g35, 12, &v8) != 0) {
				// 0x8733c
				g37 = v8;
				function_591d8(g35);
				*(char *)(g36 + 170) = 3;
				*(int32_t *)(g33 + 212) = 22;
				*(char *)(g33 + 8) = (char)6;
				// branch -> 0x87360
			}
			// 0x87360
			result2 = QuestStatus(4);
			if (result2 == 0 || *(int32_t *)(g33 + 212) < 81) {
				// 0x873b0
				g36 = v1;
				g10 = v2;
				g35 = v3;
				g33 = v4;
				return result2;
			}
			// 0x8737c
			v9 = function_c5638(g35, 15, &v8);
			result3 = v9;
			if (v9 != 0) {
				// 0x87394
				g37 = v8;
				result3 = function_591d8(g35);
				*(int32_t *)(g33 + 212) = 83;
				*(char *)(g33 + 8) = 6;
				// branch -> 0x873b0
			}
			// 0x873b0
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result3;
		}
	}
	// 0x87360
	result2 = QuestStatus(4);
	if (result2 == 0 || *(int32_t *)(g33 + 212) < 81) {
		// 0x873b0
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return result2;
	}
	// 0x8737c
	v9 = function_c5638(g35, 15, &v8);
	result3 = v9;
	if (v9 != 0) {
		// 0x87394
		g37 = v8;
		result3 = function_591d8(g35);
		*(int32_t *)(g33 + 212) = 83;
		*(char *)(g33 + 8) = 6;
		// branch -> 0x873b0
	}
	// 0x873b0
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	return result3;
}

// Address range: 0x873cc - 0x87558
int32_t function_873cc(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x873cc
	g27 = a1;
	g35 = *(int32_t *)(g23 - 0x77a8);
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x873e0
	g33 = v1;
	g28 = a2;
	g29 = a3;
	g30 = a4;
	int32_t v2 = a1;  // 0x8741c
	int32_t v3 = g23; // 0x87414
	if (a1 >= 200) {
		// 0x873fc
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5ed8));
		v1 = g33;
		a3 = g29;
		v2 = g27;
		a2 = g28;
		v3 = g23;
		// branch -> 0x87408
	}
	int32_t v4 = *(int32_t *)*(int32_t *)(v3 - 0x767c); // 0x87418
	int32_t v5 = 232 * v2;                              // 0x8741c
	int32_t v6 = v5 + v1;                               // 0x87424
	*(int16_t *)(224 * a2 + 2 * a3 + v4) = (int16_t)(v2 + 1);
	g36 = v5 + g33;
	*(int32_t *)(v6 + 32) = g28;
	*(int32_t *)(v6 + 36) = g29;
	int32_t v7 = 0x55ec * g27 + g35; // r9
	*(int32_t *)(g36 + 40) = g28;
	*(int32_t *)(g36 + 44) = g29;
	*(int32_t *)(g36 + 48) = g28;
	*(int32_t *)(g36 + 52) = g29;
	*(char *)(g36 + 28) = (char)0;
	int32_t v8 = *(int32_t *)(180 * g30 + *(int32_t *)(v3 - 0x7664) + 48);                  // 0x87480
	int32_t v9 = *(int32_t *)(v7 + 428);                                                    // 0x87484
	int32_t v10 = 2 * v8;                                                                   // 0x87488
	uint64_t v11 = (int64_t)0x55555556 * (int64_t)v9;                                       // 0x8748c
	int32_t v12 = 2 * ((int32_t)(v11 / 0x100000000) + (int32_t)(v11 / 0x8000000000000000)); // 0x87498
	*(int32_t *)(g36 + 148) = v12 + 640 * v8;
	int32_t v13 = g36; // 0x874c0
	*(int32_t *)(v13 + 152) = *(int32_t *)(v13 + 148);
	*(char *)(g36 + 206) = (char)25;
	int32_t v14 = 2 * (int32_t) * (char *)(v7 + 436); // 0x874d4
	*(char *)(g36 + 200) = (char)(v14 + 40 + 5 * v8);
	*(char *)(g36 + 201) = (char)(v10 + 8);
	*(char *)(g36 + 202) = (char)(v10 + 16);
	int32_t *v15 = (int32_t *)(g36 + 160); // 0x874ec
	*v15 = *v15 | 32;
	function_7c234(g27, 0);
	function_7bc44(g27);
	int32_t v16 = *(int32_t *)(g23 - 0x77ac); // 0x87504
	int32_t result = v16;                     // 0x87554
	if (g27 == *(int32_t *)v16) {
		uint32_t v17 = *(int32_t *)g31;                               // 0x87518
		uint32_t v18 = *(int32_t *)g32;                               // 0x8751c
		int32_t v19 = g36;                                            // 0x87520
		int32_t v20 = *(int32_t *)g33;                                // 0x87530
		int32_t v21 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x87534
		int32_t v22 = *(int32_t *)(v19 + 72) % 256;                   // 0x87538
		int32_t v23 = *(int32_t *)(v19 + 76) % 256;                   // 0x8753c
		result = function_8b1e0((char)v17, v18 % 256, v22, v23, v20, v21);
		// branch -> 0x87544
	}
	// 0x87544
	return result;
}

// Address range: 0x87558 - 0x875c8
int32_t function_87558(int32_t a1)
{
	int32_t v1 = g36; // 0x87558
	int32_t v2 = g10; // 0x8755c
	g36 = a1;
	int32_t v3 = a1; // 0x87580
	if (a1 >= 200) {
		// 0x87574
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5edc));
		v3 = g36;
		// branch -> 0x87580
	}
	char v4 = *(char *)(*(int32_t *)(g23 - 0x7754) + 232 * v3 + 8); // 0x8758c
	if (v4 == 6) {
		// 0x87598
		// branch -> 0x875b4
		// 0x875b4
		g36 = v1;
		g10 = v2;
		return 1;
	}
	// 0x875a0
	int32_t result; // 0x875c4
	if (v4 == 7) {
		// 0x875a8
		result = 1;
		// branch -> 0x875b4
	} else {
		// 0x875b0
		result = 0;
		// branch -> 0x875b4
	}
	// 0x875b4
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0x875c8 - 0x8769c
int32_t function_875c8(int32_t a1, int32_t *a2)
{
	int32_t v1 = g36;                        // 0x875c8
	int32_t v2 = g10;                        // 0x875cc
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0x875d0
	g36 = v3;
	int32_t v4 = g35; // 0x875d4
	g35 = (int32_t)a2;
	int32_t v5 = g33; // 0x875dc
	g33 = a1;
	int32_t v6 = a1; // 0x87600
	if (a1 >= 200) {
		// 0x875f4
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x5ee0));
		v3 = g36;
		v6 = g33;
		// branch -> 0x87600
	}
	int32_t v7 = 232 * v6; // 0x87600
	int32_t v8 = v7 + v3;  // 0x87604
	int32_t v9;            // 0x87644
	unsigned char v10;     // 0x8764c
	if (*(char *)(v8 + 156) != 12) {
		// 0x87644
		v9 = v3 + v7;
		v10 = *(char *)*(int32_t *)(v9 + 224);
		if (v10 < 105 || v10 > 108 || *(char *)(v9 + 8) == 1) {
			// 0x8767c
			// branch -> 0x87680
			// 0x87680
			g36 = v1;
			g10 = v2;
			g35 = v4;
			g33 = v5;
			return 0;
		}
		// 0x8766c
		*(int32_t *)g35 = 0;
		// branch -> 0x87680
		// 0x87680
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v5;
		return 1;
	}
	int32_t v11 = v8 + 160;        // 0x87614
	int32_t v12 = *(int32_t *)v11; // 0x87614
	int32_t result;                // 0x87698
	if (__asm_rlwinm_(v12, 0, 29, 29) == 0) {
		// 0x87614
		// branch -> 0x87644
		// 0x87644
		v9 = g36 + v7;
		v10 = *(char *)*(int32_t *)(v9 + 224);
		if (v10 >= 105) {
			// 0x87658
			if (v10 <= 108) {
				// 0x87660
				if (*(char *)(v9 + 8) != 1) {
					// 0x8766c
					*(int32_t *)g35 = 0;
					// branch -> 0x87680
					// 0x87680
					g36 = v1;
					g10 = v2;
					g35 = v4;
					g33 = v5;
					return 1;
				}
			}
		}
		// 0x8767c
		result = 0;
		// branch -> 0x87680
	} else {
		// 0x87624
		*(int32_t *)v11 = __asm_rlwinm(v12, 0, 30, 28);
		*(int32_t *)(v8 + 4) = 7;
		*(int32_t *)g35 = 1;
		result = 1;
		// branch -> 0x87680
	}
	// 0x87680
	g36 = v1;
	g10 = v2;
	g35 = v4;
	g33 = v5;
	return result;
}

// Address range: 0x8769c - 0x876c8
int32_t function_8769c(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754) + 232 * a1;            // 0x876a4
	int32_t v2 = __asm_rlwinm_(*(int32_t *)(v1 + 160), 0, 27, 27); // 0x876ac
	int32_t result = *(int32_t *)(v1 + 76);                        // 0x876c0
	if (v2 == 0) {
		// 0x876c0
		return result;
	}
	// 0x876b4
	return result + 4;
}

// Address range: 0x876c8 - 0x87744
int32_t decode_enemy(int32_t a1, uint32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x876d0
	int32_t v2 = 232 * a1;                   // 0x8770c
	int32_t result;                          // r3
	int32_t v3;                              // r5
	if (a2 <= 3) {
		int32_t v4 = v1 + v2; // 0x876dc
		v3 = v4;
		int32_t v5 = __asm_rlwinm(*(int32_t *)(v4 + 160), 0, 28, 26); // 0x876e8
		result = 0x55ec * a2 + *(int32_t *)(g23 - 0x77a8);
		*(int32_t *)(v3 + 160) = v5;
		*(int32_t *)(v3 + 76) = (int32_t)a2;
		int32_t v6 = *(int32_t *)(result + 64); // 0x876f8
		*(char *)(v3 + 80) = (char)v6;
		int32_t v7 = *(int32_t *)(result + 68); // 0x87700
		*(char *)(v3 + 81) = (char)v7;
		return result;
	}
	int32_t v8 = a2 - 4;  // 0x87710
	int32_t v9 = v1 + v2; // 0x87714
	v3 = v9;
	int32_t *v10 = (int32_t *)(v9 + 160); // 0x87718
	result = v1 + 232 * v8;
	*v10 = *v10 | 16;
	*(int32_t *)(v3 + 76) = v8;
	int32_t v11 = *(int32_t *)(result + 40); // 0x87730
	*(char *)(v3 + 80) = (char)v11;
	int32_t v12 = *(int32_t *)(result + 44); // 0x87738
	*(char *)(v3 + 81) = (char)v12;
	return result;
}
