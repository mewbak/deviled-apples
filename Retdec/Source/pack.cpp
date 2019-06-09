
// Address range: 0x9dba0 - 0x9dd18
int32_t PackItem(int32_t *a1, int32_t a2)
{
	int32_t result = (int32_t)a1;
	if (*(int32_t *)(a2 + 8) == -1) {
		// 0x9dbac
		*(int16_t *)(result + 6) = (int16_t)((int32_t) "MoveWindow" - 1);
		return result;
	}
	// 0x9dbbc
	*(int16_t *)(result + 6) = (int16_t) * (int32_t *)(a2 + 360);
	if (*(int32_t *)(a2 + 360) != 23) {
		// 0x9dcb8
		*(int32_t *)result = a2;
		*(int16_t *)(result + 4) = *(int16_t *)(a2 + 4);
		char v1 = *(char *)(a2 + 60);       // 0x9dcc8
		int32_t v2 = *(int32_t *)(a2 + 56); // 0x9dccc
		*(char *)(result + 8) = (char)(v2 + 2 * (int32_t)v1);
		*(char *)(result + 9) = (char)*(int32_t *)(a2 + 236);
		*(char *)(result + 10) = (char)*(int32_t *)(a2 + 240);
		*(char *)(result + 11) = (char)*(int32_t *)(a2 + 228);
		*(char *)(result + 12) = (char)*(int32_t *)(a2 + 232);
		if (*(int32_t *)(a2 + 360) != 0) {
			// bb
			return result;
		}
		// 0x9dd0c
		*(int16_t *)(result + 13) = (int16_t) * (int32_t *)(a2 + 196);
		return result;
	}
	char v3 = *(char *)(a2 + 68); // 0x9dbd0
	char v4 = *(char *)(a2 + 69); // 0x9dbd4
	*(int16_t *)(result + 4) = (int16_t)v4 | 256 * (int16_t)v3;
	unsigned char v5 = *(char *)(a2 + 70); // 0x9dbec
	char v6 = *(char *)(a2 + 71);          // 0x9dbf0
	char v7 = *(char *)(a2 + 72);          // 0x9dbf4
	char v8 = *(char *)(a2 + 73);          // 0x9dc00
	*(int32_t *)result = 0x10000 * (int32_t)v6 | 0x1000000 * (int32_t)v5 | 256 * (int32_t)v7 | (int32_t)v8;
	*(char *)(result + 8) = *(char *)(a2 + 74);
	*(char *)(result + 9) = *(char *)(a2 + 75);
	*(char *)(result + 10) = *(char *)(a2 + 76);
	*(char *)(result + 11) = *(char *)(a2 + 77);
	*(char *)(result + 12) = *(char *)(a2 + 78);
	char v9 = *(char *)(a2 + 79);         // 0x9dc50
	int32_t v10 = *(int32_t *)(a2 + 192); // 0x9dc54
	int32_t v11 = *(int32_t *)(a2 + 196); // 0x9dc5c
	*(int16_t *)(result + 13) = (int16_t)(64 * v10 + 0xfb40 | 256 * (int32_t)v9 | v11);
	unsigned char v12 = *(char *)(a2 + 80);      // 0x9dc78
	char v13 = *(char *)(a2 + 81);               // 0x9dc7c
	char v14 = *(char *)(a2 + 82);               // 0x9dc80
	int32_t v15 = (int32_t) * (char *)(a2 + 83); // 0x9dca4
	*(int32_t *)(result + 15) = 0x10000 * (int32_t)v13 | 0x1000000 * (int32_t)v12 | 256 * (int32_t)v14 | v15;
	return result;
}

// Address range: 0x9dd18 - 0x9e074
int32_t PackPlayer(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x9dd18
	g34 = a1;
	int32_t v1 = g10; // 0x9dd1c
	g33 = g34;
	g35 = a3;
	memset();
	g34 = g33 + 16;
	int32_t v2;
	int32_t v3 = *(int32_t *)(v2 - 0x77a8) + 0x55ec * a2; // 0x9dd4c
	g36 = v3;
	g37 = v3 + 316;
	*(char *)(g33 + 8) = (char)*(int32_t *)(v3 + 32);
	*(char *)(g33 + 9) = (char)*(int32_t *)(g36 + 36);
	*(char *)(g33 + 10) = (char)*(int32_t *)(g36 + 40);
	*(char *)(g33 + 11) = (char)*(int32_t *)(g36 + 52);
	*(char *)(g33 + 12) = (char)*(int32_t *)(g36 + 56);
	*(char *)(g33 + 13) = (char)*(int32_t *)(g36 + 60);
	*(char *)(g33 + 14) = (char)*(int32_t *)(g36 + 72);
	*(char *)(g33 + 15) = (char)*(int32_t *)(g36 + 76);
	strcpy();
	*(char *)(g33 + 48) = *(char *)(g36 + 348);
	*(char *)(g33 + 49) = (char)*(int32_t *)(g36 + 356);
	*(char *)(g33 + 50) = (char)*(int32_t *)(g36 + 364);
	*(char *)(g33 + 51) = (char)*(int32_t *)(g36 + 372);
	*(char *)(g33 + 52) = (char)*(int32_t *)(g36 + 380);
	*(char *)(g33 + 53) = *(char *)(g36 + 436);
	*(char *)(g33 + 54) = (char)*(int32_t *)(g36 + 384);
	*(int32_t *)(g33 + 55) = *(int32_t *)(g36 + 440);
	*(int32_t *)(g33 + 59) = *(int32_t *)(g36 + 456);
	*(int32_t *)(g33 + 63) = *(int32_t *)(g36 + 396);
	*(int32_t *)(g33 + 67) = *(int32_t *)(g36 + 400);
	*(int32_t *)(g33 + 71) = *(int32_t *)(g36 + 416);
	*(int32_t *)(g33 + 75) = *(int32_t *)(g36 + 420);
	int32_t v4 = g36; // 0x9de00
	*(int32_t *)(g33 + 120) = *(int32_t *)(v4 + 264);
	*(int32_t *)(g33 + 116) = *(int32_t *)(v4 + 260);
	*(char *)(g33 + 79) = *(char *)(g36 + 193);
	*(char *)(g33 + 80) = *(char *)(g36 + 194);
	*(char *)(g33 + 81) = *(char *)(g36 + 195);
	*(char *)(g33 + 82) = *(char *)(g36 + 196);
	*(char *)(g33 + 83) = *(char *)(g36 + 197);
	*(char *)(g33 + 84) = *(char *)(g36 + 198);
	*(char *)(g33 + 85) = *(char *)(g36 + 199);
	*(char *)(g33 + 86) = *(char *)(g36 + 200);
	*(char *)(g33 + 87) = *(char *)(g36 + 201);
	*(char *)(g33 + 88) = *(char *)(g36 + 202);
	*(char *)(g33 + 89) = *(char *)(g36 + 203);
	*(char *)(g33 + 90) = *(char *)(g36 + 204);
	*(char *)(g33 + 91) = *(char *)(g36 + 205);
	*(char *)(g33 + 92) = *(char *)(g36 + 206);
	*(char *)(g33 + 93) = *(char *)(g36 + 207);
	*(char *)(g33 + 94) = *(char *)(g36 + 208);
	*(char *)(g33 + 95) = *(char *)(g36 + 209);
	*(char *)(g33 + 96) = *(char *)(g36 + 210);
	*(char *)(g33 + 97) = *(char *)(g36 + 211);
	*(char *)(g33 + 98) = *(char *)(g36 + 212);
	*(char *)(g33 + 99) = *(char *)(g36 + 213);
	*(char *)(g33 + 100) = *(char *)(g36 + 214);
	*(char *)(g33 + 101) = *(char *)(g36 + 215);
	*(char *)(g33 + 102) = *(char *)(g36 + 216);
	*(char *)(g33 + 103) = *(char *)(g36 + 217);
	*(char *)(g33 + 104) = *(char *)(g36 + 218);
	*(char *)(g33 + 105) = *(char *)(g36 + 219);
	*(char *)(g33 + 106) = *(char *)(g36 + 220);
	*(char *)(g33 + 107) = *(char *)(g36 + 221);
	*(char *)(g33 + 108) = *(char *)(g36 + 222);
	*(char *)(g33 + 109) = *(char *)(g36 + 223);
	*(char *)(g33 + 110) = *(char *)(g36 + 224);
	int32_t v5;       // ctr
	int32_t v6;       // r26
	int32_t v7;       // r27
	int32_t result;   // r3
	int32_t v8;       // r4
	int32_t v9;       // 0x9df54
	int32_t v10;      // 0x9df80
	int32_t v11;      // 0x9dfb4
	int32_t v12;      // 0x9dff8
	int32_t v13;      // 0x9dffc
	int32_t v14;      // 0x9e018
	int32_t v15;      // 0x9df3c
	int32_t v16;      // 0x9df40
	int32_t v17;      // 0x9df58
	int32_t v18;      // 0x9df5c
	int32_t v19;      // 0x9df68
	int32_t v20;      // 0x9df6c
	int32_t v21;      // 0x9df84
	int32_t v22;      // 0x9df88
	int32_t v23;      // 0x9dff4
	int32_t v24;      // 0x9e01c
	int32_t v25;      // 0x9e020
	int32_t v26;      // 0x9dfa8
	int32_t v27;      // 0x9dfac
	int32_t v28 = 32; // 0x9df24
	*(char *)(g33 + v28 + 79) = *(char *)(g36 + v28 + 193);
	int32_t v29 = 4; // 0x9df38
	while (v29 != 0) {
		// 0x9df24
		v28++;
		*(char *)(g33 + v28 + 79) = *(char *)(g36 + v28 + 193);
		v29--;
		// continue -> 0x9df24
	}
	// 0x9df3c
	v15 = g33 + 124;
	v16 = g36 + 1176;
	PackItem((int32_t *)v15, v16);
	v9 = 6;
	v17 = v15 + 19;
	v18 = v16 + 368;
	// branch -> 0x9df48
	while (v9 != 0) {
		// 0x9df48
		PackItem((int32_t *)v17, v18);
		v9--;
		v17 += 19;
		v18 += 368;
		// continue -> 0x9df48
	}
	// 0x9df68
	v19 = g33 + 257;
	v20 = g36 + 3752;
	PackItem((int32_t *)v19, v20);
	v10 = 39;
	v21 = v19 + 19;
	v22 = v20 + 368;
	// branch -> 0x9df74
	while (v10 != 0) {
		// 0x9df74
		PackItem((int32_t *)v21, v22);
		v10--;
		v21 += 19;
		v22 += 368;
		// continue -> 0x9df74
	}
	// 0x9df94
	v5 = 5;
	v11 = 0;
	// branch -> 0x9dfa0
	while (true) {
		// 0x9dfa0
		v26 = v11 + 0x482c + g36;
		result = v26;
		v27 = v11 + 1017 + g33;
		v8 = v27;
		*(char *)v27 = *(char *)v26;
		*(char *)(v8 + 1) = *(char *)(result + 1);
		*(char *)(v8 + 2) = *(char *)(result + 2);
		*(char *)(v8 + 3) = *(char *)(result + 3);
		*(char *)(v8 + 4) = *(char *)(result + 4);
		*(char *)(v8 + 5) = *(char *)(result + 5);
		*(char *)(v8 + 6) = *(char *)(result + 6);
		*(char *)(v8 + 7) = *(char *)(result + 7);
		v23 = v5 - 1;
		v5 = v23;
		if (v23 == 0) {
			// 0x9dff8
			v12 = g36;
			v13 = g33;
			v7 = v13 + 1058;
			v6 = v12 + 0x4854;
			*(char *)(v13 + 1057) = (char)*(int32_t *)(v12 + 0x4828);
			g32 = 7;
			PackItem((int32_t *)v7, v6);
			v14 = g32;
			v24 = v7 + 19;
			v25 = v6 + 368;
			g32 = v14 - 1;
			// branch -> 0x9e00c
			while (v14 != 0) {
				// 0x9e00c
				PackItem((int32_t *)v24, v25);
				v14 = g32;
				v24 += 19;
				v25 += 368;
				g32 = v14 - 1;
				// continue -> 0x9e00c
			}
			// 0x9e02c
			result = *(int32_t *)(g23 - 0x77f0);
			*(int32_t *)(g33 + 1234) = *(int32_t *)(g36 + 0x55a8);
			if (*(char *)result != 1) {
				// 0x9e044
				if (g35 == 0) {
					// 0x9e058
					*(char *)(g33 + 1214) = 0;
					// branch -> 0x9e060
					// 0x9e060
					g10 = v1;
					return result;
				}
			}
			// 0x9e04c
			*(char *)(g33 + 1214) = *(char *)(g36 + 0x5594);
			// branch -> 0x9e060
			// 0x9e060
			g10 = v1;
			return result;
		}
	lab_0x9dfa0:
		// 0x9dfa0
		v11 += 8;
		// branch -> 0x9dfa0
	}
	// 0x9df3c
	v15 = g33 + 124;
	v16 = g36 + 1176;
	PackItem((int32_t *)v15, v16);
	v9 = 6;
	v17 = v15 + 19;
	v18 = v16 + 368;
	// branch -> 0x9df48
	while (v9 != 0) {
		// 0x9df48
		PackItem((int32_t *)v17, v18);
		v9--;
		v17 += 19;
		v18 += 368;
		// continue -> 0x9df48
	}
	// 0x9df68
	v19 = g33 + 257;
	v20 = g36 + 3752;
	PackItem((int32_t *)v19, v20);
	v10 = 39;
	v21 = v19 + 19;
	v22 = v20 + 368;
	// branch -> 0x9df74
	while (v10 != 0) {
		// 0x9df74
		PackItem((int32_t *)v21, v22);
		v10--;
		v21 += 19;
		v22 += 368;
		// continue -> 0x9df74
	}
	// 0x9df94
	v11 = 0;
	// branch -> 0x9dfa0
	while (true) {
		// 0x9dfa0
		v26 = v11 + 0x482c + g36;
		result = v26;
		v27 = v11 + 1017 + g33;
		v8 = v27;
		*(char *)v27 = *(char *)v26;
		*(char *)(v8 + 1) = *(char *)(result + 1);
		*(char *)(v8 + 2) = *(char *)(result + 2);
		*(char *)(v8 + 3) = *(char *)(result + 3);
		*(char *)(v8 + 4) = *(char *)(result + 4);
		*(char *)(v8 + 5) = *(char *)(result + 5);
		*(char *)(v8 + 6) = *(char *)(result + 6);
		*(char *)(v8 + 7) = *(char *)(result + 7);
		v23 = 4;
		v5 = v23;
		if (v23 != 0) {
			goto lab_0x9dfa0;
		}
		// 0x9dff8
		v12 = g36;
		v13 = g33;
		v7 = v13 + 1058;
		v6 = v12 + 0x4854;
		*(char *)(v13 + 1057) = (char)*(int32_t *)(v12 + 0x4828);
		g32 = 7;
		PackItem((int32_t *)v7, v6);
		v14 = g32;
		v24 = v7 + 19;
		v25 = v6 + 368;
		g32 = v14 - 1;
		// branch -> 0x9e00c
		while (v14 != 0) {
			// 0x9e00c
			PackItem((int32_t *)v24, v25);
			v14 = g32;
			v24 += 19;
			v25 += 368;
			g32 = v14 - 1;
			// continue -> 0x9e00c
		}
		// 0x9e02c
		result = *(int32_t *)(g23 - 0x77f0);
		*(int32_t *)(g33 + 1234) = *(int32_t *)(g36 + 0x55a8);
		if (*(char *)result != 1) {
			// 0x9e044
			if (g35 == 0) {
				// 0x9e058
				*(char *)(g33 + 1214) = 0;
				// branch -> 0x9e060
				// 0x9e060
				g10 = v1;
				return result;
			}
		}
		// 0x9e04c
		*(char *)(g33 + 1214) = *(char *)(g36 + 0x5594);
		// branch -> 0x9e060
		// 0x9e060
		g10 = v1;
		return result;
	}
}

// Address range: 0x9e074 - 0x9e18c
int32_t UnPackItem(int32_t *a1, int32_t a2)
{
	int32_t result = (int32_t)a1; // r3
	int32_t v1 = g36;             // 0x9e074
	int32_t v2 = g10;             // 0x9e078
	g36 = a2;
	int32_t v3 = g35; // 0x9e080
	g35 = *(int32_t *)(g23 - 0x7690);
	int32_t v4 = g33;    // 0x9e088
	int32_t v5 = result; // 0x9e08c
	g33 = v5;
	uint16_t v6 = *(int16_t *)(v5 + 6); // 0x9e098
	if (v6 == -1) {
		// 0x9e0a4
		*(int32_t *)(a2 + 8) = -1;
		// branch -> 0x9e170
	} else {
		// 0x9e0b0
		if (v6 == 23) {
			int32_t v7 = (int32_t) * (int16_t *)(v5 + 4); // 0x9e0cc
			unsigned char v8 = *(char *)(v5 + 8);         // 0x9e0d4
			unsigned char v9 = *(char *)(v5 + 9);         // 0x9e0d8
			unsigned char v10 = *(char *)(v5 + 10);       // 0x9e0dc
			int32_t v11 = (int32_t) * (char *)(v5 + 11);  // 0x9e0e0
			g13 = (int32_t) * (char *)(v5 + 12);
			int32_t *v12;
			function_606f0(v7, 127, (int32_t)v8, (int32_t)v9, (int32_t)v10, v11, v11, (int32_t)&v12, (int32_t)&v12);
			// branch -> 0x9e148
		} else {
			uint16_t v13 = *(int16_t *)(v5 + 13); // 0x9e100
			function_60590(127, (int32_t)v6, *(int16_t *)(v5 + 4), v5, (int32_t)v13);
			result = g35 + (int32_t) "MoveWindow";
			unsigned char v14 = *(char *)(g33 + 8) / 2;
			*(char *)(g35 + (int32_t) "MoveWindow" - 0x4934) = v14;
			int32_t v15 = (int32_t)(*(char *)(g33 + 8) % 2); // 0x9e120
			*(int32_t *)(result - 0x4938) = v15;
			*(int32_t *)(result - 0x4884) = (int32_t) * (char *)(g33 + 9);
			*(int32_t *)(result - 0x4880) = (int32_t) * (char *)(g33 + 10);
			*(int32_t *)(result - 0x488c) = (int32_t) * (char *)(g33 + 11);
			*(int32_t *)(result - 0x4888) = (int32_t) * (char *)(g33 + 12);
			// branch -> 0x9e148
		}
		int32_t v16 = 46;                                    // ctr
		int32_t v17 = g36 - 8;                               // 0x9e164
		int32_t v18 = g35 + (int32_t) "MoveWindow" - 0x4978; // 0x9e15c
		// branch -> 0x9e15c
		while (true) {
			int32_t v19 = v18 + 8;         // 0x9e15c
			int32_t v20 = *(int32_t *)v19; // 0x9e15c
			result = v20;
			int32_t v21 = v17 + 8; // 0x9e164
			*(int32_t *)v21 = v20;
			*(int32_t *)(v17 + 12) = *(int32_t *)(v18 + 12);
			int32_t v22 = v16 - 1; // 0x9e16c
			v16 = v22;
			if (v22 != 0) {
				// 0x9e15c
				v17 = v21;
				v18 = v19;
				// branch -> 0x9e15c
				continue;
			}
			// 0x9e170
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result;
		}
	}
	// 0x9e170
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	return result;
}

// Address range: 0x9e18c - 0x9e240
int32_t VerifyGoldSeeds(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = 0;      // r30
	int32_t v2 = a1;     // 0x9e1a0
	int32_t v3 = v2;     // r31
	int32_t result = v2; // 0x9e23c
	if (*(int32_t *)(v2 + 0x4828) > 0) {
		int32_t v4 = 0;  // 0x9e1c818
		int32_t v5 = v2; // 0x9e2041
		int32_t v6 = v2; // 0x9e1b4
		while (true) {
			int32_t v7 = v5; // 0x9e218
			int32_t v8;      // 0x9e210
			int32_t v9;      // 0x9e214
			if (*(int32_t *)(v6 + 0x1010) == 0) {
				// 0x9e204
				if (*(int32_t *)(v5 + 0x4828) > 0) {
					int32_t v10 = v5; // 0x9e1d4
					int32_t v11 = 0;  // 0x9e1d0
					int32_t v12 = v4; // 0x9e1c8
					int32_t v13;
					while (true) {
						// 0x9e1c8
						v13 = v11;
						int32_t v14 = v11; // 0x9e200
						int32_t v15 = v10; // 0x9e204
						if (v12 != v11) {
							int32_t v16 = 368 * v11 + v10; // 0x9e1d4
							if (*(int32_t *)(v16 + 0x1010) == 0) {
								int32_t v17 = *(int32_t *)(v3 + 3752); // 0x9e1e4
								a1 = v17;
								if (v17 == *(int32_t *)(v16 + 3752)) {
									int32_t v18 = GetRndSeed(); // 0x9e1f4
									a1 = v18;
									*(int32_t *)(v3 + 3752) = v18;
									v13 = v1;
									v14 = -1;
									v15 = v2;
									// branch -> 0x9e200
								} else {
									v13 = v12;
									v14 = v11;
									v15 = v10;
								}
							} else {
								v13 = v12;
								v14 = v11;
								v15 = v10;
							}
						}
						int32_t v19 = v14 + 1; // 0x9e200
						if (v19 >= *(int32_t *)(v15 + 0x4828)) {
							v7 = v15;
							// break -> 0x9e210
							break;
						}
						v10 = v15;
						v11 = v19;
						v12 = v13;
						// continue -> 0x9e1c8
					}
					// 0x9e210
					v8 = v3 + 368;
					v3 = v8;
					v9 = v13 + 1;
					v1 = v9;
					if (v9 >= *(int32_t *)(v7 + 0x4828)) {
						// break -> 0x9e218
						break;
					}
					v4 = v9;
					v5 = v7;
					v6 = v8;
					// continue -> 0x9e1b4
					continue;
				} else {
					v7 = v5;
				}
			}
			// 0x9e210
			v8 = v3 + 368;
			v3 = v8;
			v9 = v4 + 1;
			v1 = v9;
			if (v9 >= *(int32_t *)(v7 + 0x4828)) {
				// break -> 0x9e218
				break;
			}
			v4 = v9;
			v5 = v7;
			v6 = v8;
			// continue -> 0x9e1b4
		}
		// 0x9e218
		result = a1;
		// branch -> 0x9e224
	}
	// 0x9e224
	return result;
}

// Address range: 0x9e240 - 0x9e680
int32_t UnPackPlayer(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x9e244
	g33 = a2;
	g36 = *(int32_t *)(g23 - 0x7178);
	g32 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a2; // 0x9e268
	g35 = v2;
	ClearPlrRVars(v2);
	*(int32_t *)(g35 + 56) = (int32_t) * (char *)(g32 + 12);
	*(int32_t *)(g35 + 60) = (int32_t) * (char *)(g32 + 13);
	*(int32_t *)(g35 + 64) = (int32_t) * (char *)(g32 + 12);
	*(int32_t *)(g35 + 68) = (int32_t) * (char *)(g32 + 13);
	*(int32_t *)(g35 + 72) = (int32_t) * (char *)(g32 + 14);
	*(int32_t *)(g35 + 76) = (int32_t) * (char *)(g32 + 15);
	*(int32_t *)(g35 + 52) = (int32_t) * (char *)(g32 + 11);
	ClrPlrPath(g33);
	int32_t v3 = g35; // 0x9e2b8
	g34 = v3 + 316;
	*(int32_t *)(v3 + 32) = -1;
	g37 = g32 + 16;
	strcpy();
	*(char *)(g35 + 348) = *(char *)(g32 + 48);
	InitPlayer(g33, 1);
	*(int32_t *)(g35 + 356) = (int32_t) * (char *)(g32 + 49);
	*(int32_t *)(g35 + 352) = (int32_t) * (char *)(g32 + 49);
	*(int32_t *)(g35 + 364) = (int32_t) * (char *)(g32 + 50);
	*(int32_t *)(g35 + 360) = (int32_t) * (char *)(g32 + 50);
	*(int32_t *)(g35 + 372) = (int32_t) * (char *)(g32 + 51);
	*(int32_t *)(g35 + 368) = (int32_t) * (char *)(g32 + 51);
	*(int32_t *)(g35 + 380) = (int32_t) * (char *)(g32 + 52);
	*(int32_t *)(g35 + 376) = (int32_t) * (char *)(g32 + 52);
	*(char *)(g35 + 436) = *(char *)(g32 + 53);
	*(int32_t *)(g35 + 384) = (int32_t) * (char *)(g32 + 54);
	*(int32_t *)(g35 + 440) = *(int32_t *)(g32 + 55);
	*(int32_t *)(g35 + 456) = *(int32_t *)(g32 + 59);
	*(int32_t *)(g35 + 400) = *(int32_t *)(g32 + 67);
	*(int32_t *)(g35 + 396) = *(int32_t *)(g32 + 63);
	int32_t v4;     // ctr
	int32_t v5;     // r0
	int32_t v6;     // r3
	int32_t v7;     // r5
	int32_t v8;     // 0x9e38c
	int32_t v9;     // 0x9e4a0
	int32_t v10;    // 0x9e4d0
	int32_t v11;    // 0x9e4fc
	int32_t v12;    // 0x9e530
	int32_t v13;    // 0x9e578
	int32_t v14;    // 0x9e59c
	int32_t v15;    // 0x9e660
	int32_t v16;    // 0x9e4b4
	int32_t v17;    // 0x9e4b8
	int32_t v18;    // 0x9e4bc
	int32_t v19;    // 0x9e4d4
	int32_t v20;    // 0x9e4d8
	int32_t v21;    // 0x9e4e4
	int32_t v22;    // 0x9e4e8
	int32_t v23;    // 0x9e500
	int32_t v24;    // 0x9e504
	int32_t v25;    // 0x9e570
	int32_t v26;    // 0x9e584
	int32_t v27;    // 0x9e588
	int32_t v28;    // 0x9e5a0
	int32_t v29;    // 0x9e5a4
	int32_t v30;    // 0x9e620
	int32_t v31;    // 0x9e624
	int32_t v32;    // 0x9e524
	int32_t v33;    // 0x9e528
	int32_t result; // 0x9e630
	int32_t v34;    // 0x9e664
	if (g29 == 0) {
		int32_t *v35 = (int32_t *)(g35 + 396); // 0x9e354
		if (*v35 <= 63) {
			// 0x9e364
			*v35 = 64;
			// branch -> 0x9e36c
		}
		// 0x9e36c
		*(int32_t *)(g35 + 420) = *(int32_t *)(g32 + 75);
		*(int32_t *)(g35 + 416) = *(int32_t *)(g32 + 71);
		v8 = g32;
		*(int32_t *)(g35 + 264) = *(int32_t *)(v8 + 120);
		*(int32_t *)(g35 + 260) = *(int32_t *)(v8 + 116);
		*(char *)(g35 + 193) = *(char *)(g32 + 79);
		*(char *)(g35 + 194) = *(char *)(g32 + 80);
		*(char *)(g35 + 195) = *(char *)(g32 + 81);
		*(char *)(g35 + 196) = *(char *)(g32 + 82);
		*(char *)(g35 + 197) = *(char *)(g32 + 83);
		*(char *)(g35 + 198) = *(char *)(g32 + 84);
		*(char *)(g35 + 199) = *(char *)(g32 + 85);
		*(char *)(g35 + 200) = *(char *)(g32 + 86);
		*(char *)(g35 + 201) = *(char *)(g32 + 87);
		*(char *)(g35 + 202) = *(char *)(g32 + 88);
		*(char *)(g35 + 203) = *(char *)(g32 + 89);
		*(char *)(g35 + 204) = *(char *)(g32 + 90);
		*(char *)(g35 + 205) = *(char *)(g32 + 91);
		*(char *)(g35 + 206) = *(char *)(g32 + 92);
		*(char *)(g35 + 207) = *(char *)(g32 + 93);
		*(char *)(g35 + 208) = *(char *)(g32 + 94);
		*(char *)(g35 + 209) = *(char *)(g32 + 95);
		*(char *)(g35 + 210) = *(char *)(g32 + 96);
		*(char *)(g35 + 211) = *(char *)(g32 + 97);
		*(char *)(g35 + 212) = *(char *)(g32 + 98);
		*(char *)(g35 + 213) = *(char *)(g32 + 99);
		*(char *)(g35 + 214) = *(char *)(g32 + 100);
		*(char *)(g35 + 215) = *(char *)(g32 + 101);
		*(char *)(g35 + 216) = *(char *)(g32 + 102);
		*(char *)(g35 + 217) = *(char *)(g32 + 103);
		*(char *)(g35 + 218) = *(char *)(g32 + 104);
		*(char *)(g35 + 219) = *(char *)(g32 + 105);
		*(char *)(g35 + 220) = *(char *)(g32 + 106);
		*(char *)(g35 + 221) = *(char *)(g32 + 107);
		*(char *)(g35 + 222) = *(char *)(g32 + 108);
		*(char *)(g35 + 223) = *(char *)(g32 + 109);
		*(char *)(g35 + 224) = *(char *)(g32 + 110);
		v9 = 32;
		*(char *)(g35 + v9 + 193) = *(char *)(g32 + v9 + 79);
		v16 = 4;
		while (v16 != 0) {
			// 0x9e4a0
			v9++;
			*(char *)(g35 + v9 + 193) = *(char *)(g32 + v9 + 79);
			v16--;
			// continue -> 0x9e4a0
		}
		// 0x9e4b8
		v17 = g32 + 124;
		g30 = v17;
		v18 = g35 + 1176;
		g29 = v18;
		g31 = 6;
		UnPackItem((int32_t *)v17, v18);
		v10 = g31;
		v19 = g30 + 19;
		g30 = v19;
		v20 = g29 + 368;
		g29 = v20;
		g31 = v10 - 1;
		// branch -> 0x9e4c4
		while (v10 != 0) {
			// 0x9e4c4
			UnPackItem((int32_t *)v19, v20);
			v10 = g31;
			v19 = g30 + 19;
			g30 = v19;
			v20 = g29 + 368;
			g29 = v20;
			g31 = v10 - 1;
			// continue -> 0x9e4c4
		}
		// 0x9e4e4
		v21 = g32 + 257;
		g30 = v21;
		v22 = g35 + 3752;
		g29 = v22;
		g31 = 39;
		UnPackItem((int32_t *)v21, v22);
		v11 = g31;
		v23 = g30 + 19;
		g30 = v23;
		v24 = g29 + 368;
		g29 = v24;
		g31 = v11 - 1;
		// branch -> 0x9e4f0
		while (v11 != 0) {
			// 0x9e4f0
			UnPackItem((int32_t *)v23, v24);
			v11 = g31;
			v23 = g30 + 19;
			g30 = v23;
			v24 = g29 + 368;
			g29 = v24;
			g31 = v11 - 1;
			// continue -> 0x9e4f0
		}
		// 0x9e510
		v4 = 5;
		v12 = 0;
		// branch -> 0x9e51c
		while (true) {
			// 0x9e51c
			v32 = v12 + 1017 + g32;
			v6 = v32;
			v33 = v12 + 0x482c + g35;
			v7 = v12 + 8;
			*(char *)v33 = *(char *)v32;
			*(char *)(v33 + 1) = *(char *)(v6 + 1);
			*(char *)(v33 + 2) = *(char *)(v6 + 2);
			*(char *)(v33 + 3) = *(char *)(v6 + 3);
			*(char *)(v33 + 4) = *(char *)(v6 + 4);
			*(char *)(v33 + 5) = *(char *)(v6 + 5);
			*(char *)(v33 + 6) = *(char *)(v6 + 6);
			*(char *)(v33 + 7) = *(char *)(v6 + 7);
			v25 = v4 - 1;
			v4 = v25;
			if (v25 == 0) {
				// 0x9e574
				v13 = g35;
				*(int32_t *)(v13 + 0x4828) = (int32_t) * (char *)(g32 + 1057);
				VerifyGoldSeeds(v13, v33, v7);
				v26 = g32 + 1058;
				g30 = v26;
				v27 = g35 + 0x4854;
				g29 = v27;
				g31 = 7;
				UnPackItem((int32_t *)v26, v27);
				v14 = g31;
				v28 = g30 + 19;
				g30 = v28;
				v29 = g29 + 368;
				g29 = v29;
				g31 = v14 - 1;
				// branch -> 0x9e590
				while (v14 != 0) {
					// 0x9e590
					UnPackItem((int32_t *)v28, v29);
					v14 = g31;
					v28 = g30 + 19;
					g30 = v28;
					v29 = g29 + 368;
					g29 = v29;
					g31 = v14 - 1;
					// continue -> 0x9e590
				}
				// 0x9e5b0
				if (g33 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
					// 0x9e5c0
					v6 = -1;
					*(int32_t *)(g36 + 8) = -1;
					*(int32_t *)(g36 + 376) = v6;
					*(int32_t *)(g36 + 744) = v6;
					*(int32_t *)(g36 + 1112) = v6;
					*(int32_t *)(g36 + 1480) = v6;
					*(int32_t *)(g36 + 1848) = v6;
					*(int32_t *)(g36 + 2216) = v6;
					*(int32_t *)(g36 + 2584) = v6;
					*(int32_t *)(g36 + 2952) = v6;
					*(int32_t *)(g36 + 3320) = v6;
					*(int32_t *)(g36 + 3688) = v6;
					*(int32_t *)(g36 + 4056) = v6;
					*(int32_t *)(g36 + 0x1148) = v6;
					*(int32_t *)(g36 + 0x12b8) = v6;
					*(int32_t *)(g36 + 0x1428) = v6;
					*(int32_t *)(g36 + 0x1598) = v6;
					v15 = 16;
					v34 = g36 + 368 * v15;
					if (v15 <= 19) {
						*(int32_t *)(v34 + 8) = v6;
						v30 = v34 + 368;
						v31 = 19 - v15;
						while (v31 != 0) {
							// 0x9e61c
							*(int32_t *)(v30 + 8) = v6;
							v30 += 368;
							v31--;
							// continue -> 0x9e61c
						}
						// 0x9e628
						result = CalcPlrInv(g33, 0);
						v5 = 0;
						*(char *)(g35 + 0x5590) = 0;
						*(char *)(g35 + 0x5591) = (char)v5;
						*(char *)(g35 + 0x5592) = (char)v5;
						*(int32_t *)(g35 + 0x55a8) = *(int32_t *)(g32 + 1234);
						*(char *)(g35 + 0x5593) = *(char *)(g32 + 1213);
						*(char *)(g35 + 0x5594) = *(char *)(g32 + 1214);
						g10 = v1;
						return result;
					}
				}
				// 0x9e628
				result = CalcPlrInv(g33, 0);
				v5 = 0;
				*(char *)(g35 + 0x5590) = 0;
				*(char *)(g35 + 0x5591) = (char)v5;
				*(char *)(g35 + 0x5592) = (char)v5;
				*(int32_t *)(g35 + 0x55a8) = *(int32_t *)(g32 + 1234);
				*(char *)(g35 + 0x5593) = *(char *)(g32 + 1213);
				*(char *)(g35 + 0x5594) = *(char *)(g32 + 1214);
				g10 = v1;
				return result;
			}
		lab_0x9e51c_3:
			// 0x9e51c
			v12 = v7;
			// branch -> 0x9e51c
		}
		// 0x9e4b8
		v17 = g32 + 124;
		g30 = v17;
		v18 = g35 + 1176;
		g29 = v18;
		g31 = 6;
		UnPackItem((int32_t *)v17, v18);
		v10 = g31;
		v19 = g30 + 19;
		g30 = v19;
		v20 = g29 + 368;
		g29 = v20;
		g31 = v10 - 1;
		// branch -> 0x9e4c4
		while (v10 != 0) {
			// 0x9e4c4
			UnPackItem((int32_t *)v19, v20);
			v10 = g31;
			v19 = g30 + 19;
			g30 = v19;
			v20 = g29 + 368;
			g29 = v20;
			g31 = v10 - 1;
			// continue -> 0x9e4c4
		}
		// 0x9e4e4
		v21 = g32 + 257;
		g30 = v21;
		v22 = g35 + 3752;
		g29 = v22;
		g31 = 39;
		UnPackItem((int32_t *)v21, v22);
		v11 = g31;
		v23 = g30 + 19;
		g30 = v23;
		v24 = g29 + 368;
		g29 = v24;
		g31 = v11 - 1;
		// branch -> 0x9e4f0
		while (v11 != 0) {
			// 0x9e4f0
			UnPackItem((int32_t *)v23, v24);
			v11 = g31;
			v23 = g30 + 19;
			g30 = v23;
			v24 = g29 + 368;
			g29 = v24;
			g31 = v11 - 1;
			// continue -> 0x9e4f0
		}
		// 0x9e510
		v12 = 0;
		// branch -> 0x9e51c
		while (true) {
			// 0x9e51c
			v32 = v12 + 1017 + g32;
			v6 = v32;
			v33 = v12 + 0x482c + g35;
			v7 = v12 + 8;
			*(char *)v33 = *(char *)v32;
			*(char *)(v33 + 1) = *(char *)(v6 + 1);
			*(char *)(v33 + 2) = *(char *)(v6 + 2);
			*(char *)(v33 + 3) = *(char *)(v6 + 3);
			*(char *)(v33 + 4) = *(char *)(v6 + 4);
			*(char *)(v33 + 5) = *(char *)(v6 + 5);
			*(char *)(v33 + 6) = *(char *)(v6 + 6);
			*(char *)(v33 + 7) = *(char *)(v6 + 7);
			v25 = 4;
			v4 = v25;
			if (v25 != 0) {
				goto lab_0x9e51c_3;
			}
			// 0x9e574
			v13 = g35;
			*(int32_t *)(v13 + 0x4828) = (int32_t) * (char *)(g32 + 1057);
			VerifyGoldSeeds(v13, v33, v7);
			v26 = g32 + 1058;
			g30 = v26;
			v27 = g35 + 0x4854;
			g29 = v27;
			g31 = 7;
			UnPackItem((int32_t *)v26, v27);
			v14 = g31;
			v28 = g30 + 19;
			g30 = v28;
			v29 = g29 + 368;
			g29 = v29;
			g31 = v14 - 1;
			// branch -> 0x9e590
			while (v14 != 0) {
				// 0x9e590
				UnPackItem((int32_t *)v28, v29);
				v14 = g31;
				v28 = g30 + 19;
				g30 = v28;
				v29 = g29 + 368;
				g29 = v29;
				g31 = v14 - 1;
				// continue -> 0x9e590
			}
			// 0x9e5b0
			if (g33 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
				// 0x9e5c0
				v6 = -1;
				*(int32_t *)(g36 + 8) = -1;
				*(int32_t *)(g36 + 376) = v6;
				*(int32_t *)(g36 + 744) = v6;
				*(int32_t *)(g36 + 1112) = v6;
				*(int32_t *)(g36 + 1480) = v6;
				*(int32_t *)(g36 + 1848) = v6;
				*(int32_t *)(g36 + 2216) = v6;
				*(int32_t *)(g36 + 2584) = v6;
				*(int32_t *)(g36 + 2952) = v6;
				*(int32_t *)(g36 + 3320) = v6;
				*(int32_t *)(g36 + 3688) = v6;
				*(int32_t *)(g36 + 4056) = v6;
				*(int32_t *)(g36 + 0x1148) = v6;
				*(int32_t *)(g36 + 0x12b8) = v6;
				*(int32_t *)(g36 + 0x1428) = v6;
				*(int32_t *)(g36 + 0x1598) = v6;
				v15 = 16;
				v34 = g36 + 368 * v15;
				if (v15 <= 19) {
					*(int32_t *)(v34 + 8) = v6;
					v30 = v34 + 368;
					v31 = 19 - v15;
					while (v31 != 0) {
						// 0x9e61c
						*(int32_t *)(v30 + 8) = v6;
						v30 += 368;
						v31--;
						// continue -> 0x9e61c
					}
					// 0x9e628
					result = CalcPlrInv(g33, 0);
					v5 = 0;
					*(char *)(g35 + 0x5590) = 0;
					*(char *)(g35 + 0x5591) = (char)v5;
					*(char *)(g35 + 0x5592) = (char)v5;
					*(int32_t *)(g35 + 0x55a8) = *(int32_t *)(g32 + 1234);
					*(char *)(g35 + 0x5593) = *(char *)(g32 + 1213);
					*(char *)(g35 + 0x5594) = *(char *)(g32 + 1214);
					g10 = v1;
					return result;
				}
			}
			// 0x9e628
			result = CalcPlrInv(g33, 0);
			v5 = 0;
			*(char *)(g35 + 0x5590) = 0;
			*(char *)(g35 + 0x5591) = (char)v5;
			*(char *)(g35 + 0x5592) = (char)v5;
			*(int32_t *)(g35 + 0x55a8) = *(int32_t *)(g32 + 1234);
			*(char *)(g35 + 0x5593) = *(char *)(g32 + 1213);
			*(char *)(g35 + 0x5594) = *(char *)(g32 + 1214);
			g10 = v1;
			return result;
		}
	}
	// 0x9e36c
	*(int32_t *)(g35 + 420) = *(int32_t *)(g32 + 75);
	*(int32_t *)(g35 + 416) = *(int32_t *)(g32 + 71);
	v8 = g32;
	*(int32_t *)(g35 + 264) = *(int32_t *)(v8 + 120);
	*(int32_t *)(g35 + 260) = *(int32_t *)(v8 + 116);
	*(char *)(g35 + 193) = *(char *)(g32 + 79);
	*(char *)(g35 + 194) = *(char *)(g32 + 80);
	*(char *)(g35 + 195) = *(char *)(g32 + 81);
	*(char *)(g35 + 196) = *(char *)(g32 + 82);
	*(char *)(g35 + 197) = *(char *)(g32 + 83);
	*(char *)(g35 + 198) = *(char *)(g32 + 84);
	*(char *)(g35 + 199) = *(char *)(g32 + 85);
	*(char *)(g35 + 200) = *(char *)(g32 + 86);
	*(char *)(g35 + 201) = *(char *)(g32 + 87);
	*(char *)(g35 + 202) = *(char *)(g32 + 88);
	*(char *)(g35 + 203) = *(char *)(g32 + 89);
	*(char *)(g35 + 204) = *(char *)(g32 + 90);
	*(char *)(g35 + 205) = *(char *)(g32 + 91);
	*(char *)(g35 + 206) = *(char *)(g32 + 92);
	*(char *)(g35 + 207) = *(char *)(g32 + 93);
	*(char *)(g35 + 208) = *(char *)(g32 + 94);
	*(char *)(g35 + 209) = *(char *)(g32 + 95);
	*(char *)(g35 + 210) = *(char *)(g32 + 96);
	*(char *)(g35 + 211) = *(char *)(g32 + 97);
	*(char *)(g35 + 212) = *(char *)(g32 + 98);
	*(char *)(g35 + 213) = *(char *)(g32 + 99);
	*(char *)(g35 + 214) = *(char *)(g32 + 100);
	*(char *)(g35 + 215) = *(char *)(g32 + 101);
	*(char *)(g35 + 216) = *(char *)(g32 + 102);
	*(char *)(g35 + 217) = *(char *)(g32 + 103);
	*(char *)(g35 + 218) = *(char *)(g32 + 104);
	*(char *)(g35 + 219) = *(char *)(g32 + 105);
	*(char *)(g35 + 220) = *(char *)(g32 + 106);
	*(char *)(g35 + 221) = *(char *)(g32 + 107);
	*(char *)(g35 + 222) = *(char *)(g32 + 108);
	*(char *)(g35 + 223) = *(char *)(g32 + 109);
	*(char *)(g35 + 224) = *(char *)(g32 + 110);
	v9 = 32;
	*(char *)(g35 + v9 + 193) = *(char *)(g32 + v9 + 79);
	v16 = 4;
	while (v16 != 0) {
		// 0x9e4a0
		v9++;
		*(char *)(g35 + v9 + 193) = *(char *)(g32 + v9 + 79);
		v16--;
		// continue -> 0x9e4a0
	}
	// 0x9e4b8
	v17 = g32 + 124;
	g30 = v17;
	v18 = g35 + 1176;
	g29 = v18;
	g31 = 6;
	UnPackItem((int32_t *)v17, v18);
	v10 = g31;
	v19 = g30 + 19;
	g30 = v19;
	v20 = g29 + 368;
	g29 = v20;
	g31 = v10 - 1;
	// branch -> 0x9e4c4
	while (v10 != 0) {
		// 0x9e4c4
		UnPackItem((int32_t *)v19, v20);
		v10 = g31;
		v19 = g30 + 19;
		g30 = v19;
		v20 = g29 + 368;
		g29 = v20;
		g31 = v10 - 1;
		// continue -> 0x9e4c4
	}
	// 0x9e4e4
	v21 = g32 + 257;
	g30 = v21;
	v22 = g35 + 3752;
	g29 = v22;
	g31 = 39;
	UnPackItem((int32_t *)v21, v22);
	v11 = g31;
	v23 = g30 + 19;
	g30 = v23;
	v24 = g29 + 368;
	g29 = v24;
	g31 = v11 - 1;
	// branch -> 0x9e4f0
	while (v11 != 0) {
		// 0x9e4f0
		UnPackItem((int32_t *)v23, v24);
		v11 = g31;
		v23 = g30 + 19;
		g30 = v23;
		v24 = g29 + 368;
		g29 = v24;
		g31 = v11 - 1;
		// continue -> 0x9e4f0
	}
	// 0x9e510
	v12 = 0;
	// branch -> 0x9e51c
	while (true) {
		// 0x9e51c
		v32 = v12 + 1017 + g32;
		v6 = v32;
		v33 = v12 + 0x482c + g35;
		v7 = v12 + 8;
		*(char *)v33 = *(char *)v32;
		*(char *)(v33 + 1) = *(char *)(v6 + 1);
		*(char *)(v33 + 2) = *(char *)(v6 + 2);
		*(char *)(v33 + 3) = *(char *)(v6 + 3);
		*(char *)(v33 + 4) = *(char *)(v6 + 4);
		*(char *)(v33 + 5) = *(char *)(v6 + 5);
		*(char *)(v33 + 6) = *(char *)(v6 + 6);
		*(char *)(v33 + 7) = *(char *)(v6 + 7);
		v25 = 4;
		v4 = v25;
		if (v25 != 0) {
			goto lab_0x9e51c_3;
		}
		// 0x9e574
		v13 = g35;
		*(int32_t *)(v13 + 0x4828) = (int32_t) * (char *)(g32 + 1057);
		VerifyGoldSeeds(v13, v33, v7);
		v26 = g32 + 1058;
		g30 = v26;
		v27 = g35 + 0x4854;
		g29 = v27;
		g31 = 7;
		UnPackItem((int32_t *)v26, v27);
		v14 = g31;
		v28 = g30 + 19;
		g30 = v28;
		v29 = g29 + 368;
		g29 = v29;
		g31 = v14 - 1;
		// branch -> 0x9e590
		while (v14 != 0) {
			// 0x9e590
			UnPackItem((int32_t *)v28, v29);
			v14 = g31;
			v28 = g30 + 19;
			g30 = v28;
			v29 = g29 + 368;
			g29 = v29;
			g31 = v14 - 1;
			// continue -> 0x9e590
		}
		// 0x9e5b0
		if (g33 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
			// 0x9e5c0
			v6 = -1;
			*(int32_t *)(g36 + 8) = -1;
			*(int32_t *)(g36 + 376) = v6;
			*(int32_t *)(g36 + 744) = v6;
			*(int32_t *)(g36 + 1112) = v6;
			*(int32_t *)(g36 + 1480) = v6;
			*(int32_t *)(g36 + 1848) = v6;
			*(int32_t *)(g36 + 2216) = v6;
			*(int32_t *)(g36 + 2584) = v6;
			*(int32_t *)(g36 + 2952) = v6;
			*(int32_t *)(g36 + 3320) = v6;
			*(int32_t *)(g36 + 3688) = v6;
			*(int32_t *)(g36 + 4056) = v6;
			*(int32_t *)(g36 + 0x1148) = v6;
			*(int32_t *)(g36 + 0x12b8) = v6;
			*(int32_t *)(g36 + 0x1428) = v6;
			*(int32_t *)(g36 + 0x1598) = v6;
			v15 = 16;
			v34 = g36 + 368 * v15;
			if (v15 <= 19) {
				*(int32_t *)(v34 + 8) = v6;
				v30 = v34 + 368;
				v31 = 19 - v15;
				while (v31 != 0) {
					// 0x9e61c
					*(int32_t *)(v30 + 8) = v6;
					v30 += 368;
					v31--;
					// continue -> 0x9e61c
				}
				// 0x9e628
				result = CalcPlrInv(g33, 0);
				v5 = 0;
				*(char *)(g35 + 0x5590) = 0;
				*(char *)(g35 + 0x5591) = (char)v5;
				*(char *)(g35 + 0x5592) = (char)v5;
				*(int32_t *)(g35 + 0x55a8) = *(int32_t *)(g32 + 1234);
				*(char *)(g35 + 0x5593) = *(char *)(g32 + 1213);
				*(char *)(g35 + 0x5594) = *(char *)(g32 + 1214);
				g10 = v1;
				return result;
			}
		}
		// 0x9e628
		result = CalcPlrInv(g33, 0);
		v5 = 0;
		*(char *)(g35 + 0x5590) = 0;
		*(char *)(g35 + 0x5591) = (char)v5;
		*(char *)(g35 + 0x5592) = (char)v5;
		*(int32_t *)(g35 + 0x55a8) = *(int32_t *)(g32 + 1234);
		*(char *)(g35 + 0x5593) = *(char *)(g32 + 1213);
		*(char *)(g35 + 0x5594) = *(char *)(g32 + 1214);
		g10 = v1;
		return result;
	}
	// 0x9e4b8
	v17 = g32 + 124;
	g30 = v17;
	v18 = g35 + 1176;
	g29 = v18;
	g31 = 6;
	UnPackItem((int32_t *)v17, v18);
	v10 = g31;
	v19 = g30 + 19;
	g30 = v19;
	v20 = g29 + 368;
	g29 = v20;
	g31 = v10 - 1;
	// branch -> 0x9e4c4
	while (v10 != 0) {
		// 0x9e4c4
		UnPackItem((int32_t *)v19, v20);
		v10 = g31;
		v19 = g30 + 19;
		g30 = v19;
		v20 = g29 + 368;
		g29 = v20;
		g31 = v10 - 1;
		// continue -> 0x9e4c4
	}
	// 0x9e4e4
	v21 = g32 + 257;
	g30 = v21;
	v22 = g35 + 3752;
	g29 = v22;
	g31 = 39;
	UnPackItem((int32_t *)v21, v22);
	v11 = g31;
	v23 = g30 + 19;
	g30 = v23;
	v24 = g29 + 368;
	g29 = v24;
	g31 = v11 - 1;
	// branch -> 0x9e4f0
	while (v11 != 0) {
		// 0x9e4f0
		UnPackItem((int32_t *)v23, v24);
		v11 = g31;
		v23 = g30 + 19;
		g30 = v23;
		v24 = g29 + 368;
		g29 = v24;
		g31 = v11 - 1;
		// continue -> 0x9e4f0
	}
	// 0x9e510
	v12 = 0;
	// branch -> 0x9e51c
	while (true) {
		// 0x9e51c
		v32 = v12 + 1017 + g32;
		v6 = v32;
		v33 = v12 + 0x482c + g35;
		v7 = v12 + 8;
		*(char *)v33 = *(char *)v32;
		*(char *)(v33 + 1) = *(char *)(v6 + 1);
		*(char *)(v33 + 2) = *(char *)(v6 + 2);
		*(char *)(v33 + 3) = *(char *)(v6 + 3);
		*(char *)(v33 + 4) = *(char *)(v6 + 4);
		*(char *)(v33 + 5) = *(char *)(v6 + 5);
		*(char *)(v33 + 6) = *(char *)(v6 + 6);
		*(char *)(v33 + 7) = *(char *)(v6 + 7);
		v25 = 4;
		v4 = v25;
		if (v25 != 0) {
			goto lab_0x9e51c_3;
		}
		// 0x9e574
		v13 = g35;
		*(int32_t *)(v13 + 0x4828) = (int32_t) * (char *)(g32 + 1057);
		VerifyGoldSeeds(v13, v33, v7);
		v26 = g32 + 1058;
		g30 = v26;
		v27 = g35 + 0x4854;
		g29 = v27;
		g31 = 7;
		UnPackItem((int32_t *)v26, v27);
		v14 = g31;
		v28 = g30 + 19;
		g30 = v28;
		v29 = g29 + 368;
		g29 = v29;
		g31 = v14 - 1;
		// branch -> 0x9e590
		while (v14 != 0) {
			// 0x9e590
			UnPackItem((int32_t *)v28, v29);
			v14 = g31;
			v28 = g30 + 19;
			g30 = v28;
			v29 = g29 + 368;
			g29 = v29;
			g31 = v14 - 1;
			// continue -> 0x9e590
		}
		// 0x9e5b0
		if (g33 != *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
			// 0x9e628
			result = CalcPlrInv(g33, 0);
			v5 = 0;
			*(char *)(g35 + 0x5590) = 0;
			*(char *)(g35 + 0x5591) = (char)v5;
			*(char *)(g35 + 0x5592) = (char)v5;
			*(int32_t *)(g35 + 0x55a8) = *(int32_t *)(g32 + 1234);
			*(char *)(g35 + 0x5593) = *(char *)(g32 + 1213);
			*(char *)(g35 + 0x5594) = *(char *)(g32 + 1214);
			g10 = v1;
			return result;
		}
		// 0x9e5c0
		v6 = -1;
		*(int32_t *)(g36 + 8) = -1;
		*(int32_t *)(g36 + 376) = v6;
		*(int32_t *)(g36 + 744) = v6;
		*(int32_t *)(g36 + 1112) = v6;
		*(int32_t *)(g36 + 1480) = v6;
		*(int32_t *)(g36 + 1848) = v6;
		*(int32_t *)(g36 + 2216) = v6;
		*(int32_t *)(g36 + 2584) = v6;
		*(int32_t *)(g36 + 2952) = v6;
		*(int32_t *)(g36 + 3320) = v6;
		*(int32_t *)(g36 + 3688) = v6;
		*(int32_t *)(g36 + 4056) = v6;
		*(int32_t *)(g36 + 0x1148) = v6;
		*(int32_t *)(g36 + 0x12b8) = v6;
		*(int32_t *)(g36 + 0x1428) = v6;
		*(int32_t *)(g36 + 0x1598) = v6;
		v15 = 16;
		v34 = g36 + 368 * v15;
		if (v15 > 19) {
			// 0x9e628
			result = CalcPlrInv(g33, 0);
			v5 = 0;
			*(char *)(g35 + 0x5590) = 0;
			*(char *)(g35 + 0x5591) = (char)v5;
			*(char *)(g35 + 0x5592) = (char)v5;
			*(int32_t *)(g35 + 0x55a8) = *(int32_t *)(g32 + 1234);
			*(char *)(g35 + 0x5593) = *(char *)(g32 + 1213);
			*(char *)(g35 + 0x5594) = *(char *)(g32 + 1214);
			g10 = v1;
			return result;
		}
		*(int32_t *)(v34 + 8) = v6;
		v30 = v34 + 368;
		v31 = 19 - v15;
		while (v31 != 0) {
			// 0x9e61c
			*(int32_t *)(v30 + 8) = v6;
			v30 += 368;
			v31--;
			// continue -> 0x9e61c
		}
		// 0x9e628
		result = CalcPlrInv(g33, 0);
		v5 = 0;
		*(char *)(g35 + 0x5590) = 0;
		*(char *)(g35 + 0x5591) = (char)v5;
		*(char *)(g35 + 0x5592) = (char)v5;
		*(int32_t *)(g35 + 0x55a8) = *(int32_t *)(g32 + 1234);
		*(char *)(g35 + 0x5593) = *(char *)(g32 + 1213);
		*(char *)(g35 + 0x5594) = *(char *)(g32 + 1214);
		g10 = v1;
		return result;
	}
}
