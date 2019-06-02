
// Address range: 0x5bb28 - 0x5bbc0
int32_t InitItemGFX(int32_t a1)
{
	int32_t v1 = g36;                        // 0x5bb28
	int32_t v2 = *(int32_t *)(g23 - 0x716c); // 0x5bb30
	int32_t v3 = g35;                        // 0x5bb34
	int32_t v4 = *(int32_t *)(g23 - 0x5f70); // 0x5bb38
	g36 = v4;
	int32_t v5 = g33; // 0x5bb3c
	g33 = *(int32_t *)(g23 - 0x5f6c);
	g35 = v2;
	// branch -> 0x5bb5c
	while (true) {
		// 0x5bb5c
		g38 = *(int32_t *)v2;
		g37 = v4;
		sprintf();
		int32_t v6;                                     // bp-88
		int32_t v7 = LoadFileInMem((int32_t)&v6, NULL); // 0x5bb74
		*(int32_t *)g33 = v7;
		int32_t v8 = g35 + 4; // 0x5bb84
		g35 = v8;
		g33 += 4;
		if (g32 >= 34) {
			// 0x5bb90
			g34 = *(int32_t *)(g23 - 0x7170);
			g36 = v1;
			g35 = v3;
			g33 = v5;
			return memset();
		}
		// 0x5bb5c
		v4 = g36;
		v2 = v8;
		// branch -> 0x5bb5c
	}
}

// Address range: 0x5bbc0 - 0x5bc8c
int32_t function_5bbc0(int32_t a1, int32_t a2)
{
	int32_t v1 = 2 * a2 + 224 * a1; // 0x5bbd0
	if (*(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x767c) + v1) != 0) {
		// 0x5bbe0
		return 0;
	}
	int32_t v2 = 112 * a1 + a2; // 0x5bbf4
	if (*(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7680) + v2) != 0 || *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x768c) + v2) != 0 || *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7684) + v2) != 0) {
		// 0x5bc04
		return 0;
	}
	unsigned char v3 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x779c) + v2); // 0x5bc4c
	if (__asm_rlwinm_((int32_t)v3, 0, 28, 28) != 0) {
		// 0x5bc58
		return 0;
	}
	int16_t v4 = *(int16_t *)(v1 + *(int32_t *)*(int32_t *)(g23 - 0x757c)); // 0x5bc6c
	if (*(char *)((int32_t)v4 + *(int32_t *)(g23 - 0x722c)) == 0) {
		// 0x5bc84
		return 1;
	}
	// 0x5bc7c
	return 0;
}

// Address range: 0x5bc8c - 0x5be14
int32_t function_5bc8c(int32_t a1)
{
	// 0x5bc8c
	g30 = *(int32_t *)(g23 - 0x77e4);
	g31 = *(int32_t *)(g23 - 0x7690);
	g32 = *(int32_t *)(g23 - 0x71e0);
	g37 = 3;
	g33 = *(int32_t *)(g23 - 0x71e4);
	g35 = *(int32_t *)(g23 - 0x71f4);
	g36 = *(int32_t *)(g23 - 0x768c);
	int32_t result2 = random(11); // 0x5bcbc
	int32_t v1 = result2 + 3;     // 0x5bcc0
	g28 = v1;
	g27 = 0;
	if (v1 > 0) {
	lab_0x5bccc:
		while (true) {
			int32_t v2 = *(int32_t *)g33; // 0x5bccc
			int32_t v3 = g35;             // 0x5bcd4
			int32_t *v4 = (int32_t *)v3;  // 0x5bcd4
			int32_t v5 = *v4;             // r22
			g37 = 80;
			*v4 = *(int32_t *)(v3 + 4 * (126 - v2));
			*(int32_t *)(4 * v2 + g32) = v5;
			int32_t v6 = random(12) + 16; // r21
			g37 = 80;
			int32_t v7 = random(12);
			// branch -> 0x5bd30
			int32_t result; // r3
			while (true) {
				int32_t v8 = v7 + 16;
				g24 = v8;
				if (function_5bbc0(v6, v8) == 0) {
					// 0x5bd10
					g37 = 80;
					v6 = random(12) + 16;
					g37 = 80;
					v7 = random(12);
					// branch -> 0x5bd30
					continue;
				} else {
					int32_t v9 = g31 + 368 * v5; // 0x5bd4c
					int32_t v10 = v9;            // r25
					*(int32_t *)(v9 + 12) = v6;
					*(int32_t *)(v10 + 16) = g24;
					int32_t v11 = g24 + 112 * v6; // 0x5bd5c
					*(char *)(*(int32_t *)g36 + v11) = (char)(v5 + 1);
					*(int32_t *)v10 = GetRndSeed();
					g34 = *(int32_t *)v10;
					SetRndSeed();
					g37 = 2;
					int32_t v12 = random(12);              // 0x5bd80
					int32_t v13 = (int32_t) * (char *)g30; // 0x5bda0
					if (v12 == 0) {
						// 0x5bda0
						function_5e014(v5, 25, v13);
						// branch -> 0x5bdb0
					} else {
						// 0x5bd8c
						function_5e014(v5, 24, v13);
						// branch -> 0x5bdb0
					}
					int32_t v14 = (int32_t) * (char *)g30 + (int32_t) "MoveWindow" - 0x8000; // 0x5bdbc
					*(int16_t *)(g29 + 4) = (int16_t)v14;
					function_5f358(g26);
					int32_t v15 = g29; // 0x5bdc8
					*(int32_t *)(v15 + 32) = *(int32_t *)(v15 + 28);
					*(int32_t *)(g29 + 20) = 0;
					*(char *)(g29 + 48) = (char)1;
					function_8aa08(g26);
					int32_t *v16 = (int32_t *)g33; // 0x5bde8
					int32_t v17 = *v16;            // 0x5bde8
					result = v17;
					g27++;
					*v16 = v17 + 1;
					if (g27 >= g28) {
						// break (via goto) -> 0x5bdf8
						goto lab_0x5bdf8;
					}
					// continue (via goto) -> 0x5bccc
					goto lab_0x5bccc;
				}
			}
		lab_0x5bdf8:
			// 0x5bdf8
			// branch -> 0x5be00
			// 0x5be00
			return result;
		}
	}
	// 0x5be00
	return result2;
}

// Address range: 0x5be14 - 0x5c140
int32_t InitItems(int32_t a1)
{
	int32_t v1 = g10; // 0x5be18
	function_5e014(0, 0, 1);
	int32_t v2 = 46;      // ctr
	int32_t v3 = g32 - 8; // 0x5be68
	int32_t v4 = g33 - 8; // 0x5be60
	// branch -> 0x5be60
	while (true) {
		int32_t v5 = v4 + 8; // 0x5be60
		int32_t v6 = v3 + 8; // 0x5be68
		*(int32_t *)v6 = *(int32_t *)v5;
		*(int32_t *)(v3 + 12) = *(int32_t *)(v4 + 12);
		int32_t v7 = v2 - 1; // 0x5be70
		v2 = v7;
		if (v7 == 0) {
			// 0x5be74
			*(int32_t *)(g32 + 356) = 1;
			*(int32_t *)*(int32_t *)(g23 - 0x71e4) = 0;
			int32_t v8 = g33; // 0x5be90
			int32_t v9 = 0;   // r3
			*(int32_t *)(v8 + 8) = 0;
			*(int32_t *)(v8 + 12) = v9;
			*(int32_t *)(v8 + 16) = v9;
			*(int32_t *)(v8 + 20) = v9;
			*(char *)(v8 + 48) = (char)v9;
			*(int32_t *)(v8 + 56) = v9;
			*(int32_t *)(v8 + 52) = v9;
			*(int32_t *)(v8 + 376) = v9;
			*(int32_t *)(v8 + 380) = v9;
			*(int32_t *)(v8 + 384) = v9;
			*(int32_t *)(v8 + 388) = v9;
			*(char *)(v8 + 416) = (char)v9;
			*(int32_t *)(v8 + 424) = v9;
			*(int32_t *)(v8 + 420) = v9;
			*(int32_t *)(v8 + 744) = v9;
			*(int32_t *)(v8 + 748) = v9;
			*(int32_t *)(v8 + 752) = v9;
			*(int32_t *)(v8 + 756) = v9;
			*(char *)(v8 + 784) = (char)v9;
			*(int32_t *)(v8 + 792) = v9;
			*(int32_t *)(v8 + 788) = v9;
			*(int32_t *)(v8 + 1112) = v9;
			*(int32_t *)(v8 + 1116) = v9;
			*(int32_t *)(v8 + 1120) = v9;
			*(int32_t *)(v8 + 1124) = v9;
			*(char *)(v8 + 1152) = (char)v9;
			*(int32_t *)(v8 + 1160) = v9;
			*(int32_t *)(v8 + 1156) = v9;
			*(int32_t *)(v8 + 1480) = v9;
			*(int32_t *)(v8 + 1484) = v9;
			*(int32_t *)(v8 + 1488) = v9;
			*(int32_t *)(v8 + 1492) = v9;
			*(char *)(v8 + 1520) = (char)v9;
			*(int32_t *)(v8 + 1528) = v9;
			*(int32_t *)(v8 + 1524) = v9;
			*(int32_t *)(v8 + 1848) = v9;
			*(int32_t *)(v8 + 1852) = v9;
			*(int32_t *)(v8 + 1856) = v9;
			*(int32_t *)(v8 + 1860) = v9;
			*(char *)(v8 + 1888) = (char)v9;
			*(int32_t *)(v8 + 1896) = v9;
			*(int32_t *)(v8 + 1892) = v9;
			*(int32_t *)(v8 + 2216) = v9;
			*(int32_t *)(v8 + 2220) = v9;
			*(int32_t *)(v8 + 2224) = v9;
			*(int32_t *)(v8 + 2228) = v9;
			*(char *)(v8 + 2256) = (char)v9;
			*(int32_t *)(v8 + 2264) = v9;
			*(int32_t *)(v8 + 2260) = v9;
			*(int32_t *)(v8 + 2584) = v9;
			*(int32_t *)(v8 + 2588) = v9;
			*(int32_t *)(v8 + 2592) = v9;
			*(int32_t *)(v8 + 2596) = v9;
			*(char *)(v8 + 2624) = (char)v9;
			*(int32_t *)(v8 + 2632) = v9;
			*(int32_t *)(v8 + 2628) = v9;
			int32_t v10 = 14; // 0x5bf84
			int32_t v11 = 8;  // 0x5c104
			// branch -> 0x5be98
			while (v10 != 0) {
				// 0x5be98
				v8 += 2944;
				v9 = 0;
				*(int32_t *)(v8 + 8) = 0;
				*(int32_t *)(v8 + 12) = v9;
				*(int32_t *)(v8 + 16) = v9;
				*(int32_t *)(v8 + 20) = v9;
				*(char *)(v8 + 48) = (char)v9;
				*(int32_t *)(v8 + 56) = v9;
				*(int32_t *)(v8 + 52) = v9;
				*(int32_t *)(v8 + 376) = v9;
				*(int32_t *)(v8 + 380) = v9;
				*(int32_t *)(v8 + 384) = v9;
				*(int32_t *)(v8 + 388) = v9;
				*(char *)(v8 + 416) = (char)v9;
				*(int32_t *)(v8 + 424) = v9;
				*(int32_t *)(v8 + 420) = v9;
				*(int32_t *)(v8 + 744) = v9;
				*(int32_t *)(v8 + 748) = v9;
				*(int32_t *)(v8 + 752) = v9;
				*(int32_t *)(v8 + 756) = v9;
				*(char *)(v8 + 784) = (char)v9;
				*(int32_t *)(v8 + 792) = v9;
				*(int32_t *)(v8 + 788) = v9;
				*(int32_t *)(v8 + 1112) = v9;
				*(int32_t *)(v8 + 1116) = v9;
				*(int32_t *)(v8 + 1120) = v9;
				*(int32_t *)(v8 + 1124) = v9;
				*(char *)(v8 + 1152) = (char)v9;
				*(int32_t *)(v8 + 1160) = v9;
				*(int32_t *)(v8 + 1156) = v9;
				*(int32_t *)(v8 + 1480) = v9;
				*(int32_t *)(v8 + 1484) = v9;
				*(int32_t *)(v8 + 1488) = v9;
				*(int32_t *)(v8 + 1492) = v9;
				*(char *)(v8 + 1520) = (char)v9;
				*(int32_t *)(v8 + 1528) = v9;
				*(int32_t *)(v8 + 1524) = v9;
				*(int32_t *)(v8 + 1848) = v9;
				*(int32_t *)(v8 + 1852) = v9;
				*(int32_t *)(v8 + 1856) = v9;
				*(int32_t *)(v8 + 1860) = v9;
				*(char *)(v8 + 1888) = (char)v9;
				*(int32_t *)(v8 + 1896) = v9;
				*(int32_t *)(v8 + 1892) = v9;
				*(int32_t *)(v8 + 2216) = v9;
				*(int32_t *)(v8 + 2220) = v9;
				*(int32_t *)(v8 + 2224) = v9;
				*(int32_t *)(v8 + 2228) = v9;
				*(char *)(v8 + 2256) = (char)v9;
				*(int32_t *)(v8 + 2264) = v9;
				*(int32_t *)(v8 + 2260) = v9;
				*(int32_t *)(v8 + 2584) = v9;
				*(int32_t *)(v8 + 2588) = v9;
				*(int32_t *)(v8 + 2592) = v9;
				*(int32_t *)(v8 + 2596) = v9;
				*(char *)(v8 + 2624) = (char)v9;
				*(int32_t *)(v8 + 2632) = v9;
				*(int32_t *)(v8 + 2628) = v9;
				v10--;
				v11 += 8;
				// continue -> 0x5be98
			}
			int32_t v12 = g33 + 368 * v11; // 0x5c108
			v8 = v12;
			int32_t v13;       // r10
			int32_t v14;       // r11
			int32_t v15;       // r8
			int32_t v16;       // r9
			int32_t v17;       // 0x5bfc8
			int32_t v18;       // 0x5bfdc
			int32_t v19;       // 0x5bfe8
			int32_t v20;       // 0x5bff4
			int32_t v21;       // 0x5c070
			int32_t v22;       // 0x5c0a8
			int32_t v23;       // 0x5c0d8
			int32_t v24;       // 0x5c0f4
			int32_t v25;       // 0x5c110
			int32_t v26;       // 0x5c040
			int32_t v27;       // 0x5c06c
			int32_t v28;       // 0x5c088
			int32_t v29;       // 0x5c0d0
			int32_t v30;       // 0x5c110
			int32_t v31;       // 0x5c114
			int32_t v32;       // 0x5c0d8
			unsigned char v33; // 0x5c0dc
			int32_t result;    // 0x5c0f4
			if (v11 <= 126) {
				*(int32_t *)(v12 + 8) = v9;
				*(int32_t *)(v8 + 12) = v9;
				*(int32_t *)(v8 + 16) = v9;
				*(int32_t *)(v8 + 20) = v9;
				*(char *)(v8 + 48) = (char)v9;
				*(int32_t *)(v8 + 56) = v9;
				*(int32_t *)(v8 + 52) = v9;
				int32_t v34 = v8 + 368; // 0x5bfb8
				v8 = v34;
				int32_t v35 = 126 - v11; // 0x5bfbc
				while (v35 != 0) {
					// 0x5bf9c
					*(int32_t *)(v34 + 8) = v9;
					*(int32_t *)(v8 + 12) = v9;
					*(int32_t *)(v8 + 16) = v9;
					*(int32_t *)(v8 + 20) = v9;
					*(char *)(v8 + 48) = (char)v9;
					*(int32_t *)(v8 + 56) = v9;
					*(int32_t *)(v8 + 52) = v9;
					v34 = v8 + 368;
					v8 = v34;
					v35--;
					// continue -> 0x5bf9c
				}
				// 0x5bfc0
				v2 = 15;
				v17 = g36;
				v16 = v17;
				v13 = g35;
				v14 = 0;
				int32_t v36 = v17; // 0x5bfd4
				int32_t v37 = 0;   // 0x5bfd4
				// branch -> 0x5bfd4
				while (true) {
					// 0x5bfd4
					*(int32_t *)v36 = v37;
					v15 = 0;
					v18 = v14;
					g40 = v18 + 2;
					*(int32_t *)v13 = 0;
					v19 = v14;
					*(int32_t *)(v16 + 4) = v18 + 1;
					v20 = v14;
					*(int32_t *)(v13 + 4) = v15;
					v14 += 8;
					*(int32_t *)(v16 + 8) = g40;
					*(int32_t *)(v13 + 8) = v15;
					*(int32_t *)(v16 + 12) = v19 + 3;
					*(int32_t *)(v13 + 12) = v15;
					*(int32_t *)(v16 + 16) = v19 + 4;
					*(int32_t *)(v13 + 16) = v15;
					*(int32_t *)(v16 + 20) = v20 + 5;
					*(int32_t *)(v13 + 20) = v15;
					*(int32_t *)(v16 + 24) = v20 + 6;
					*(int32_t *)(v13 + 24) = v15;
					*(int32_t *)(v16 + 28) = v20 + 7;
					v16 += 32;
					*(int32_t *)(v13 + 28) = v15;
					v13 += 32;
					v26 = v2 - 1;
					v2 = v26;
					v25 = v14;
					if (v26 == 0) {
						// 0x5c110
						v30 = 4 * v25;
						v31 = g36 + v30;
						v9 = v31;
						v8 = g35 + v30;
						v2 = 127 - v25;
						if (v25 <= 126) {
							int32_t v38 = v31; // 0x5c058
							int32_t v39 = v25; // 0x5c058
							while (true) {
								// 0x5c058
								*(int32_t *)v38 = v39;
								v9 += 4;
								v14++;
								*(int32_t *)v8 = v15;
								v8 += 4;
								v27 = v2 - 1;
								v2 = v27;
								if (v27 != 0) {
								lab_0x5c058:
									// 0x5c058
									v38 = v9;
									v39 = v14;
									// branch -> 0x5c058
									continue;
								}
							}
						}
						// 0x5c070
						v21 = g23;
						v24 = v21;
						if (*(char *)*(int32_t *)(v21 - 0x77d8) == 0) {
							// 0x5c080
							GetRndSeed();
							v28 = QuestStatus(0);
							if (v28 != 0) {
								// 0x5c094
								function_6098c(v28);
								// branch -> 0x5c098
							}
							// 0x5c098
							if (QuestStatus(10) != 0) {
								// 0x5c0a8
								v22 = g23;
								v29 = 2 * *(int32_t *)*(int32_t *)(v22 - 0x7550) + 27;
								function_60808(16, 2 * *(int32_t *)*(int32_t *)(v22 - 0x754c) + 27, v29, 0, 1);
								// branch -> 0x5c0d8
							}
							// 0x5c0d8
							v23 = g23;
							v32 = *(int32_t *)(v23 - 0x77e4);
							v33 = *(char *)v32;
							if (v33 != 0) {
								// 0x5c0e8
								if (v33 <= 15) {
									// 0x5c0f0
									function_5bc8c(v32);
									// branch -> 0x5c0f4
									// 0x5c0f4
									result = *(int32_t *)(g23 - 0x7674);
									*(int32_t *)result = 0;
									g10 = v1;
									return result;
								}
								v24 = v23;
							} else {
								v24 = v23;
							}
						}
						// 0x5c0f4
						result = *(int32_t *)(v24 - 0x7674);
						*(int32_t *)result = 0;
						g10 = v1;
						return result;
					}
				lab_0x5bfd4:
					// 0x5bfd4
					v36 = v16;
					v37 = v25;
					// branch -> 0x5bfd4
				}
			}
			// 0x5bfc0
			v17 = g36;
			v16 = v17;
			v13 = g35;
			v14 = 0;
			// branch -> 0x5bfd4
			while (true) {
				// 0x5bfd4
				*(int32_t *)v17 = 0;
				v15 = 0;
				v18 = v14;
				g40 = v18 + 2;
				*(int32_t *)v13 = 0;
				v19 = v14;
				*(int32_t *)(v16 + 4) = v18 + 1;
				v20 = v14;
				*(int32_t *)(v13 + 4) = v15;
				v14 += 8;
				*(int32_t *)(v16 + 8) = g40;
				*(int32_t *)(v13 + 8) = v15;
				*(int32_t *)(v16 + 12) = v19 + 3;
				*(int32_t *)(v13 + 12) = v15;
				*(int32_t *)(v16 + 16) = v19 + 4;
				*(int32_t *)(v13 + 16) = v15;
				*(int32_t *)(v16 + 20) = v20 + 5;
				*(int32_t *)(v13 + 20) = v15;
				*(int32_t *)(v16 + 24) = v20 + 6;
				*(int32_t *)(v13 + 24) = v15;
				*(int32_t *)(v16 + 28) = v20 + 7;
				v16 += 32;
				*(int32_t *)(v13 + 28) = v15;
				v13 += 32;
				v26 = 14;
				v2 = v26;
				v25 = v14;
				if (v26 != 0) {
					goto lab_0x5bfd4;
				}
				// 0x5c110
				v30 = 4 * v25;
				v31 = g36 + v30;
				v8 = g35 + v30;
				if (v25 <= 126) {
					while (true) {
						// 0x5c058
						*(int32_t *)v31 = v25;
						v9 = v31 + 4;
						v14++;
						*(int32_t *)v8 = v15;
						v8 += 4;
						v27 = 126 - v25;
						v2 = v27;
						if (v27 != 0) {
							goto lab_0x5c058;
						}
						// 0x5c070
						v21 = g23;
						v24 = v21;
						if (*(char *)*(int32_t *)(v21 - 0x77d8) == 0) {
							// 0x5c080
							GetRndSeed();
							v28 = QuestStatus(0);
							if (v28 != 0) {
								// 0x5c094
								function_6098c(v28);
								// branch -> 0x5c098
							}
							// 0x5c098
							if (QuestStatus(10) != 0) {
								// 0x5c0a8
								v22 = g23;
								v29 = 2 * *(int32_t *)*(int32_t *)(v22 - 0x7550) + 27;
								function_60808(16, 2 * *(int32_t *)*(int32_t *)(v22 - 0x754c) + 27, v29, 0, 1);
								// branch -> 0x5c0d8
							}
							// 0x5c0d8
							v23 = g23;
							v32 = *(int32_t *)(v23 - 0x77e4);
							v33 = *(char *)v32;
							if (v33 != 0) {
								// 0x5c0e8
								if (v33 <= 15) {
									// 0x5c0f0
									function_5bc8c(v32);
									// branch -> 0x5c0f4
									// 0x5c0f4
									result = *(int32_t *)(g23 - 0x7674);
									*(int32_t *)result = 0;
									g10 = v1;
									return result;
								}
								v24 = v23;
							} else {
								v24 = v23;
							}
						}
						// 0x5c0f4
						result = *(int32_t *)(v24 - 0x7674);
						*(int32_t *)result = 0;
						g10 = v1;
						return result;
					}
				}
				// 0x5c070
				v21 = g23;
				v24 = v21;
				if (*(char *)*(int32_t *)(v21 - 0x77d8) == 0) {
					// 0x5c080
					GetRndSeed();
					v28 = QuestStatus(0);
					if (v28 != 0) {
						// 0x5c094
						function_6098c(v28);
						// branch -> 0x5c098
					}
					// 0x5c098
					if (QuestStatus(10) != 0) {
						// 0x5c0a8
						v22 = g23;
						v29 = 2 * *(int32_t *)*(int32_t *)(v22 - 0x7550) + 27;
						function_60808(16, 2 * *(int32_t *)*(int32_t *)(v22 - 0x754c) + 27, v29, 0, 1);
						// branch -> 0x5c0d8
					}
					// 0x5c0d8
					v23 = g23;
					v32 = *(int32_t *)(v23 - 0x77e4);
					v33 = *(char *)v32;
					if (v33 != 0) {
						// 0x5c0e8
						if (v33 <= 15) {
							// 0x5c0f0
							function_5bc8c(v32);
							// branch -> 0x5c0f4
							// 0x5c0f4
							result = *(int32_t *)(g23 - 0x7674);
							*(int32_t *)result = 0;
							g10 = v1;
							return result;
						}
						v24 = v23;
					} else {
						v24 = v23;
					}
				}
				// 0x5c0f4
				result = *(int32_t *)(v24 - 0x7674);
				*(int32_t *)result = 0;
				g10 = v1;
				return result;
			}
		} else {
			// 0x5be60
			v3 = v6;
			v4 = v5;
			// branch -> 0x5be60
			continue;
		}
	}
}

// Address range: 0x5c140 - 0x5ca38
int32_t function_5c140(int32_t a1, int32_t a2)
{
	g16 = a1;
	int32_t v1 = g10; // 0x5c148
	g18 = *(int32_t *)(g23 - 0x7664);
	g21 = 0;
	g25 = 0;
	g24 = 0;
	g28 = 0;
	g29 = 0;
	g17 = 0;
	g19 = 0;
	g20 = 0;
	g22 = 0;
	g31 = 10;
	int32_t v2 = 0; // r22
	int32_t v3 = 0; // r23
	g30 = 0;
	int32_t v4 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0x5c194
	g35 = v4;
	g33 = v4;
	int32_t v5 = 0;  // 0x5c324
	int32_t v6 = 10; // 0x5c3a8
	int32_t v7 = 0;  // 0x5c340
	int32_t v8 = 0;  // 0x5c338
	int32_t v9 = 0;  // 0x5c32c
	int32_t v10 = 0; // 0x5c3ec38
	int32_t v11 = 0; // 0x5c39c
	int32_t v12 = 0; // 0x5c354
	int32_t v13 = 0;
	int32_t v14 = 0;
	int32_t v15 = 0;
	int32_t v16 = 0;
	int32_t v17 = 0;
	int32_t v18 = 0;
	int32_t v19 = 0;
	int32_t v20 = 0;
	int32_t v21 = 0;
	int32_t v22 = 0;
	int32_t v23 = 0;
	int32_t v24 = 0;
	int32_t v25 = 0;
	int32_t v26 = 0;
	// branch -> 0x5c224
	int32_t v27;
	int32_t v28;
	int32_t v29;
	int32_t v30;
	int32_t v31;
	int32_t v32;
	int32_t v33;
	int32_t v34;
	int32_t v35;
	int32_t v36;
	int32_t v37;
	int32_t v38;
	int32_t v39;
	int32_t v40;
	while (true) {
		// 0x5c224
		g36 = v4 + 1176;
		int32_t v41 = v5;  // 0x5c324108
		int32_t v42 = v6;  // 0x5c3a8104
		int32_t v43 = v7;  // 0x5c340102
		int32_t v44 = v8;  // 0x5c338100
		int32_t v45 = v9;  // 0x5c32c98
		int32_t v46 = v4;  // 0x5c3f0
		int32_t v47 = v10; // 0x5c3ec
		int32_t v48 = v11; // 0x5c39c36
		int32_t v49 = v12; // 0x5c35434
		v39 = v13;
		v40 = v14;
		v27 = v15;
		v28 = v16;
		v29 = v17;
		v30 = v18;
		v31 = v19;
		v32 = v20;
		v33 = v21;
		v34 = v22;
		v35 = v23;
		v36 = v24;
		v37 = v25;
		v38 = v26;
		int32_t v50; // 0x5c3ec
		int32_t v51; // 0x5c3f0
		if (*(int32_t *)(v4 + 1184) != -1) {
			// 0x5c234
			if (*(int32_t *)(v4 + 1532) != 0) {
				// 0x5c240
				g25 += *(int32_t *)(v4 + 1384);
				int32_t v52 = *(int32_t *)(v4 + 1388); // 0x5c24c
				g32 = v52;
				int32_t v53 = v52 + v13; // 0x5c25c
				g21 += *(int32_t *)(v4 + 1380);
				if (*(int32_t *)(v4 + 1400) != 0) {
					// 0x5c26c
					g17 |= 1;
					// branch -> 0x5c28c
				}
				// 0x5c28c
				if (*(char *)(v4 + 1236) != 0) {
					// 0x5c298
					if (*(int32_t *)(v4 + 1232) == 0) {
						v41 = v5;
						v42 = v6;
						v43 = v7;
						v44 = v8;
						v45 = v9;
						v46 = v4;
						v47 = v10;
						v48 = v11;
						v49 = v12;
						v39 = v53;
						v40 = v14;
						v27 = v15;
						v28 = v16;
						v29 = v17;
						v30 = v18;
						v31 = v19;
						v32 = v20;
						v33 = v21;
						v34 = v22;
						v35 = v23;
						v36 = v24;
						v37 = v25;
						v38 = v26;
					lab_0x5c3ec:
						// 0x5c3ec
						v50 = v47 + 1;
						g30 = v50;
						v51 = v46 + 368;
						g33 = v51;
						if (v50 >= 7) {
							// break -> 0x5c3fc
							break;
						}
						v5 = v41;
						v6 = v42;
						v7 = v43;
						v8 = v44;
						v9 = v45;
						v10 = v50;
						v11 = v48;
						v12 = v49;
						v4 = v51;
						v13 = v39;
						v14 = v40;
						v15 = v27;
						v16 = v28;
						v17 = v29;
						v18 = v30;
						v19 = v31;
						v20 = v32;
						v21 = v33;
						v22 = v34;
						v23 = v35;
						v24 = v36;
						v25 = v37;
						v26 = v38;
						// continue -> 0x5c224
						continue;
					}
				}
				int32_t v54 = *(int32_t *)(v4 + 1428); // 0x5c2ac
				int32_t v55 = v16;
				if (v54 != 0) {
					uint64_t v56 = 0x51eb851f * (int64_t)(v54 * v52);                                      // 0x5c2d8
					int32_t v57 = (int32_t)(v56 / 0x100000000) >> 31;                                      // 0x5c2dc
					int32_t v58 = (v57 & -0x8000000 | (int32_t)(v56 / 0x2000000000)) + (int32_t)(v57 < 0); // 0x5c2e4
					v55 = (v58 == 0 ? 1 : v58) + v16;
					// branch -> 0x5c300
				}
				// 0x5c300
				g24 |= *(int32_t *)(v4 + 1392);
				int32_t v59 = v5 + *(int32_t *)(v4 + 1436); // 0x5c324
				g28 = v59;
				int32_t v60 = v9 + *(int32_t *)(v4 + 1452); // 0x5c32c
				g20 = v60;
				int32_t v61 = v8 + *(int32_t *)(v4 + 1460); // 0x5c338
				v3 = v61;
				int32_t v62 = v7 + *(int32_t *)(v4 + 1456); // 0x5c340
				g22 = v62;
				int32_t v63 = *(int32_t *)(v4 + 1444) + v12; // 0x5c354
				g29 = v63;
				int32_t v64 = *(int32_t *)(v4 + 1448) + v11; // 0x5c39c
				g19 = v64;
				int32_t v65 = v6 + *(int32_t *)(v4 + 1476); // 0x5c3a8
				g31 = v65;
				v2 += *(int32_t *)(v4 + 1464);
				int32_t v66 = g36; // 0x5c3b4
				v41 = v59;
				v42 = v65;
				v43 = v62;
				v44 = v61;
				v45 = v60;
				v46 = g33;
				v47 = g30;
				v48 = v64;
				v49 = v63;
				v39 = v53;
				v40 = *(int32_t *)(v4 + 1420) + v14;
				v27 = *(int32_t *)(v4 + 1424) + v15;
				v28 = v55;
				v29 = *(int32_t *)(v4 + 1432) + v17;
				v30 = *(int32_t *)(v4 + 1440) + v18;
				v31 = *(int32_t *)(v4 + 1468) + v19;
				v32 = *(int32_t *)(v66 + 296) + v20;
				v33 = (int32_t) * (char *)(v4 + 1480) + v21;
				v34 = *(int32_t *)(v4 + 1504) + v22;
				v35 = *(int32_t *)(v4 + 1488) + v23;
				v36 = *(int32_t *)(v4 + 1492) + v24;
				v37 = *(int32_t *)(v66 + 320) + v25;
				v38 = *(int32_t *)(v66 + 324) + v26;
				// branch -> 0x5c3ec
				goto lab_0x5c3ec;
			} else {
				v39 = v13;
				v40 = v14;
				v27 = v15;
				v28 = v16;
				v29 = v17;
				v30 = v18;
				v31 = v19;
				v32 = v20;
				v33 = v21;
				v34 = v22;
				v35 = v23;
				v36 = v24;
				v37 = v25;
				v38 = v26;
			}
			// 0x5c3ec
			v50 = v10 + 1;
			g30 = v50;
			v51 = v4 + 368;
			g33 = v51;
			if (v50 >= 7) {
				// break -> 0x5c3fc
				break;
			}
			v10 = v50;
			v4 = v51;
			v13 = v39;
			v14 = v40;
			v15 = v27;
			v16 = v28;
			v17 = v29;
			v18 = v30;
			v19 = v31;
			v20 = v32;
			v21 = v33;
			v22 = v34;
			v23 = v35;
			v24 = v36;
			v25 = v37;
			v26 = v38;
			// continue -> 0x5c224
			continue;
		}
		// 0x5c3ec
		v50 = v47 + 1;
		g30 = v50;
		v51 = v46 + 368;
		g33 = v51;
		if (v50 >= 7) {
			// break -> 0x5c3fc
			break;
		}
		v5 = v41;
		v6 = v42;
		v7 = v43;
		v8 = v44;
		v9 = v45;
		v10 = v50;
		v11 = v48;
		v12 = v49;
		v4 = v51;
		v13 = v39;
		v14 = v40;
		v15 = v27;
		v16 = v28;
		v17 = v29;
		v18 = v30;
		v19 = v31;
		v20 = v32;
		v21 = v33;
		v22 = v34;
		v23 = v35;
		v24 = v36;
		v25 = v37;
		v26 = v38;
		// continue -> 0x5c224
	}
	int32_t v67 = g21; // 0x5c3fc
	int32_t v68 = v67; // 0x5c44c
	int32_t v69;       // ctr
	int32_t result;    // r3
	int32_t v70;       // 0x5c494
	int32_t v71;       // 0x5c4a0
	int32_t v72;       // 0x5c4c4
	int32_t v73;       // 0x5c4cc
	int32_t v74;       // 0x5c514
	int32_t v75;       // 0x5c530
	int32_t v76;       // 0x5c534
	int32_t v77;       // 0x5c548
	int32_t v78;       // 0x5c564
	int32_t v79;       // 0x5c570
	int32_t v80;       // 0x5c580
	int32_t v81;       // 0x5c59c
	int32_t v82;       // 0x5c5a0
	int32_t v83;       // 0x5c5d0
	int32_t v84;       // 0x5c64c
	int32_t v85;       // 0x5c6d4
	int32_t v86;       // 0x5c6e0
	int32_t v87;       // 0x5c6e4
	int32_t v88;       // 0x5c6f4
	int32_t v89;       // 0x5c6f8
	int32_t v90;       // 0x5c708
	int32_t v91;       // 0x5c710
	int32_t v92;       // 0x5c71c
	int32_t v93;       // 0x5c72c
	int32_t v94;       // 0x5c73c
	int32_t v95;       // 0x5c748
	int32_t v96;       // 0x5c758
	int32_t v97;       // 0x5c764
	int32_t v98;       // 0x5c778
	int32_t v99;       // 0x5c7a8
	int32_t v100;      // 0x5c7b8
	int32_t v101;      // 0x5c80c
	int32_t v102;      // 0x5c874
	int32_t v103;      // 0x5c8d4
	int32_t v104;      // 0x5c96c
	int32_t v105;      // 0x5c988
	int32_t v106;      // 0x5c99c
	int32_t v107;      // 0x5c9a4
	int32_t v108;      // 0x5c9bc
	int32_t v109;      // 0x5c9d4
	int32_t v110;      // 0x5ca08
	int32_t v111;      // 0x5ca0c
	int32_t v112;      // 0x5ca0c59
	int32_t v113;      // 0x5ca10
	int32_t v114;      // 0x5c508
	int32_t v115;      // 0x5c604
	int32_t v116;      // 0x5c634
	int32_t v117;      // 0x5c6b8
	int32_t v118;      // 0x5c71c
	int32_t v119;      // 0x5c748
	int32_t v120;      // 0x5c938
	uint32_t v121;     // 0x5c9a8
	int32_t v122;      // 0x5c9b8
	int32_t *v123;     // 0x5c51c
	int32_t *v124;     // 0x5c550
	int32_t *v125;     // 0x5c588
	int32_t *v126;     // 0x5c5bc
	int32_t v127;      // 0x5c608
	int32_t v128;      // 0x5c638
	int32_t v129;      // 0x5c6b4
	int32_t v130;      // 0x5c730
	int32_t v131;      // 0x5c740
	int32_t v132;      // 0x5c75c
	int32_t v133;      // 0x5c784
	int32_t v134;      // 0x5c8d8
	int32_t v135;      // 0x5c8fc
	int32_t *v136;     // 0x5c934
	int32_t v137;      // 0x5c9c4
	int32_t v138;      // 0x5c9dc
	int32_t v139;      // 0x5c4e4
	int32_t v140;      // 0x5c504
	int32_t v141;      // 0x5c514
	int32_t v142;      // 0x5c534
	int32_t v143;      // 0x5c548
	int32_t v144;      // 0x5c570
	int32_t v145;      // 0x5c580
	int32_t v146;      // 0x5c5a0
	int32_t v147;      // 0x5c5b4
	char v148;         // 0x5c5dc
	int32_t v149;      // 0x5c5e4
	int32_t v150;      // 0x5c5ec
	char v151;         // 0x5c710
	int32_t v152;      // 0x5c80c
	int32_t v153;      // 0x5c834
	int32_t v154;      // 0x5c900
	int32_t v155;      // 0x5c9c0
	uint64_t v156;     // 0x5c5fc
	uint64_t v157;     // 0x5c62c
	int32_t v158;      // 0x5c600
	int32_t v159;      // 0x5c630
	if (v67 == 0) {
		// 0x5c404
		if (g25 == 0) {
			int32_t v160 = g35; // 0x5c40c
			g21 = 1;
			g25 = 1;
			if (*(int32_t *)(v160 + 2656) == 5) {
				// 0x5c420
				if (*(int32_t *)(v160 + 3004) != 0) {
					// 0x5c42c
					g25 = 3;
					// branch -> 0x5c430
				}
			}
			// 0x5c430
			if (*(int32_t *)(v160 + 3024) == 5) {
				// 0x5c43c
				if (*(int32_t *)(v160 + 3372) != 0) {
					// 0x5c448
					g25 = 3;
					// branch -> 0x5c44c
				}
				// 0x5c44c
				*(int32_t *)(g35 + 0x5544) = 1;
				*(int32_t *)(g35 + 0x5548) = g25;
				*(int32_t *)(g35 + 0x554c) = v39;
				*(int32_t *)(g35 + 0x5550) = v40;
				*(int32_t *)(g35 + 0x5554) = v27;
				*(int32_t *)(g35 + 0x5558) = v28;
				*(int32_t *)(g35 + 0x5568) = g24;
				*(int32_t *)(g35 + 0x555c) = v31;
				*(int32_t *)(g35 + 0x556c) = v32;
				if (g31 > 1) {
					// 0x5c494
					v70 = g31;
					// branch -> 0x5c494
				} else {
					// 0x5c490
					g31 = 2;
					v70 = 2;
					// branch -> 0x5c494
				}
				// 0x5c494
				v72 = v70;
				if (v70 >= 16) {
					// 0x5c49c
					g31 = 15;
					v72 = 15;
					// branch -> 0x5c4a0
				}
				// 0x5c4a0
				v71 = g35;
				v114 = v71;
				if ((int32_t) * (char *)(v71 + 314) != v72) {
					// 0x5c4b0
					if (g16 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
						// 0x5c4c0
						function_cb930(*(int32_t *)(v71 + 156), v72);
						v73 = g31;
						v139 = *(int32_t *)(g35 + 160);
						if (v73 > 9) {
							// 0x5c4e4
							function_cbd80(v139, v73);
							// branch -> 0x5c4f0
						} else {
							// 0x5c4d4
							function_cbd80(v139, 10);
							// branch -> 0x5c4f0
						}
						// 0x5c4f0
						*(char *)(g35 + 314) = (char)(0x1000000 * g31 / 0x1000000);
						v114 = g35;
						// branch -> 0x5c4f8
					} else {
						v114 = v71;
					}
				}
				// 0x5c4f8
				v140 = *(int32_t *)(g23 - 0x77ac);
				*(int32_t *)(v114 + 352) = *(int32_t *)(v114 + 356) + v29;
				v74 = g23;
				v141 = *(int32_t *)(v74 - 0x77a8);
				v123 = (int32_t *)(v141 + 0x55ec * *(int32_t *)v140 + 352);
				v76 = v74;
				if (*v123 <= 0) {
					// 0x5c528
					*v123 = 0;
					v76 = g23;
					// branch -> 0x5c530
				}
				// 0x5c530
				v75 = g35;
				v142 = *(int32_t *)(v76 - 0x77ac);
				*(int32_t *)(v75 + 360) = g28 + *(int32_t *)(v75 + 364);
				v77 = g23;
				v143 = *(int32_t *)(v77 - 0x77a8);
				v124 = (int32_t *)(v143 + 0x55ec * *(int32_t *)v142 + 360);
				v79 = v77;
				if (*v124 <= 0) {
					// 0x5c55c
					*v124 = 0;
					v79 = g23;
					// branch -> 0x5c564
				}
				// 0x5c564
				v78 = g35;
				v144 = *(int32_t *)(v79 - 0x77ac);
				*(int32_t *)(v78 + 368) = *(int32_t *)(v78 + 372) + v30;
				v80 = g23;
				v145 = *(int32_t *)(v80 - 0x77a8);
				v125 = (int32_t *)(v145 + 0x55ec * *(int32_t *)v144 + 368);
				v82 = v80;
				if (*v125 <= 0) {
					// 0x5c594
					*v125 = 0;
					v82 = g23;
					// branch -> 0x5c59c
				}
				// 0x5c59c
				v81 = g35;
				v146 = *(int32_t *)(v82 - 0x77ac);
				*(int32_t *)(v81 + 376) = g29 + *(int32_t *)(v81 + 380);
				v147 = *(int32_t *)(g23 - 0x77a8);
				v126 = (int32_t *)(v147 + 0x55ec * *(int32_t *)v146 + 376);
				if (*v126 <= 0) {
					// 0x5c5c8
					*v126 = 0;
					// branch -> 0x5c5d0
				}
				// 0x5c5d0
				v83 = g35;
				v148 = *(char *)(v83 + 436);
				v149 = *(int32_t *)(v83 + 352);
				if (*(char *)(v83 + 348) == 1) {
					// 0x5c5dc
					v150 = *(int32_t *)(v83 + 368);
					v156 = 0x51eb851f * (int64_t)((v150 + v149) * (int32_t)v148);
					v158 = (int32_t)(v156 / 0x100000000) >> 31;
					v115 = v158 < 0;
					v127 = (v158 & -0x4000000 | (int32_t)(v156 / 0x4000000000)) + v115;
					*(int32_t *)(v83 + 388) = v127;
					// branch -> 0x5c640
				} else {
					// 0x5c614
					v157 = 0x51eb851f * (int64_t)(v149 * (int32_t)v148);
					v159 = (int32_t)(v157 / 0x100000000) >> 31;
					v116 = v159 < 0;
					v128 = (v159 & -0x8000000 | (int32_t)(v157 / 0x2000000000)) + v116;
					*(int32_t *)(v83 + 388) = v128;
					// branch -> 0x5c640
				}
				// 0x5c640
				*(int32_t *)(g35 + 0x5564) = g17;
				*(int32_t *)(g35 + 0x5560) = 0;
				v84 = g35;
				v129 = v84;
				if (*(char *)(v84 + 184) == 3) {
					// 0x5c658
					if (*(int32_t *)(v84 + 0x5564) % 2 == 0) {
						// 0x5c690
						*(int32_t *)(v84 + 180) = -1;
						*(char *)(g35 + 184) = 4;
						*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
						v129 = g35;
						// branch -> 0x5c6ac
					} else {
						v129 = v84;
					}
				}
				// 0x5c6ac
				*(char *)(v129 + 0x5570) = (char)(0x1000000 * v33 / 0x1000000);
				v117 = __asm_rlwinm_(g24, 0, 0, 0);
				*(int32_t *)(g35 + 0x5578) = v34;
				if (v117 == 0) {
					// 0x5c6d4
					v85 = g22;
					// branch -> 0x5c6d4
				} else {
					// 0x5c6c8
					g22 = 0;
					g19 = 0;
					g20 = 0;
					v85 = 0;
					// branch -> 0x5c6d4
				}
				// 0x5c6d4
				v86 = v85;
				if (v85 >= 76) {
					// 0x5c6dc
					g22 = 75;
					v86 = 75;
					// branch -> 0x5c6e0
				}
				// 0x5c6e0
				v87 = g19;
				*(char *)(g35 + 453) = (char)(0x1000000 * v86 / 0x1000000);
				if (v87 == 75 || v87 < 75) {
					// 0x5c6e0
					v88 = g19;
					// branch -> 0x5c6f4
				} else {
					// 0x5c6f0
					g19 = 75;
					v88 = 75;
					// branch -> 0x5c6f4
				}
				// 0x5c6f4
				v89 = g20;
				*(char *)(g35 + 454) = (char)(0x1000000 * v88 / 0x1000000);
				if (v89 == 75 || v89 < 75) {
					// 0x5c6f4
					v90 = g20;
					// branch -> 0x5c708
				} else {
					// 0x5c704
					g20 = 75;
					v90 = 75;
					// branch -> 0x5c708
				}
				// 0x5c708
				*(char *)(g35 + 455) = (char)(0x1000000 * v90 / 0x1000000);
				v91 = g35;
				v151 = *(char *)(v91 + 348);
				v92 = g29;
				v93 = v92;
				if (v151 == 0) {
					// 0x5c71c
					v118 = 2 * v92;
					g29 = v118;
					v93 = v118;
					// branch -> 0x5c720
				}
				// 0x5c720
				v94 = v93;
				if (v151 == 1) {
					// 0x5c72c
					v130 = (v93 / 2 | v93 & -0x80000000) + v93;
					g29 = v130;
					v94 = v130;
					// branch -> 0x5c734
				}
				// 0x5c734
				v131 = v2 + 64 * v94;
				g26 = v131;
				v95 = g28;
				v96 = v95;
				if (v151 == 2) {
					// 0x5c748
					v119 = 2 * v95;
					g28 = v119;
					v96 = v119;
					// branch -> 0x5c74c
				}
				// 0x5c74c
				v97 = v96;
				if (v151 == 1) {
					// 0x5c758
					v132 = (v96 / 2 | v96 & -0x80000000) + v96;
					g28 = v132;
					v97 = v132;
					// branch -> 0x5c760
				}
				// 0x5c760
				g27 = v3 + 64 * v97;
				*(int32_t *)(v91 + 404) = *(int32_t *)(v91 + 396) + v131;
				v98 = g35;
				*(int32_t *)(v98 + 408) = g26 + *(int32_t *)(v98 + 400);
				v133 = *(int32_t *)*(int32_t *)(g23 - 0x77ac);
				if (g16 == v133) {
					// 0x5c790
					if (*(int32_t *)(g35 + 404) <= 63) {
						// 0x5c79c
						g37 = 0;
						SetPlayerHitPoints(v133);
						// branch -> 0x5c7a8
					}
				}
				// 0x5c7a8
				v99 = g35;
				*(int32_t *)(v99 + 424) = g27 + *(int32_t *)(v99 + 416);
				v100 = g35;
				*(int32_t *)(v100 + 428) = g27 + *(int32_t *)(v100 + 420);
				*(int32_t *)(g35 + 0x557c) = v35;
				*(int32_t *)(g35 + 0x5580) = v36;
				*(int32_t *)(g35 + 0x5584) = v37;
				*(int32_t *)(g35 + 0x5588) = v38;
				if (g24 % 2 == 0) {
					// 0x5c7f4
					*(int32_t *)(g35 + 460) = 0;
					// branch -> 0x5c7fc
				} else {
					// 0x5c7e8
					*(int32_t *)(g35 + 460) = 1;
					// branch -> 0x5c7fc
				}
				// 0x5c7fc
				*(char *)(g35 + 312) = 0;
				result = 0;
				*(int32_t *)(g35 + 308) = 0;
				v101 = g35;
				v152 = *(int32_t *)(v101 + 2656);
				if (v152 != -1) {
					// 0x5c818
					if (*(char *)(v101 + 2838) == 1) {
						// 0x5c824
						if (*(int32_t *)(v101 + 3004) != 0) {
							// 0x5c830
							result = v152;
							// branch -> 0x5c834
						}
					}
				}
				// 0x5c834
				v153 = *(int32_t *)(v101 + 3024);
				if (v153 != -1) {
					// 0x5c840
					if (*(char *)(v101 + 3206) == 1) {
						// 0x5c84c
						if (*(int32_t *)(v101 + 3372) != 0) {
							// 0x5c858
							result = v153;
							v102 = v153;
							// branch -> 0x5c85c
							// 0x5c85c
							if (v102 == 4) {
								// 0x5c894
								result = 6;
								v134 = v101;
								// branch -> 0x5c8b8
							} else {
								// 0x5c864
								if (v102 > 4) {
									// 0x5c880
									if (v102 == 10) {
										// 0x5c8b4
										result = 8;
										v103 = 8;
										v134 = v101;
										// branch -> 0x5c8b8
									} else {
										v103 = v102;
										v134 = v101;
									}
								} else {
									// 0x5c868
									if (v102 == 2) {
										// 0x5c8ac
										result = 5;
										v134 = v101;
										// branch -> 0x5c8b8
									} else {
										// 0x5c870
										if (v102 > 2) {
											// 0x5c89c
											*(int32_t *)(v101 + 308) = 1;
											result = 4;
											v103 = 4;
											v134 = g35;
											// branch -> 0x5c8b8
										} else {
											// 0x5c874
											if (v102 > 0) {
												// 0x5c88c
												result = 2;
												v103 = 2;
												v134 = v101;
												// branch -> 0x5c8b8
											} else {
												v103 = v102;
												v134 = v101;
											}
										}
										// 0x5c8b8
										v135 = v134;
										if (*(int32_t *)(v134 + 2656) == 5) {
											// 0x5c8c4
											if (*(int32_t *)(v134 + 3004) != 0) {
												// 0x5c8d0
												result = v103 + 1;
												*(char *)(v134 + 312) = 1;
												v135 = g35;
												// branch -> 0x5c8dc
											} else {
												v135 = v134;
											}
										}
										// 0x5c8dc
										v122 = v135;
										if (*(int32_t *)(v135 + 3024) == 5) {
											// 0x5c8e8
											if (*(int32_t *)(v135 + 3372) != 0) {
												// 0x5c8f4
												result++;
												*(char *)(v135 + 312) = 1;
												v122 = g35;
												// branch -> 0x5c900
											} else {
												v122 = v135;
											}
										}
										// 0x5c900
										v154 = *(int32_t *)(v122 + 3392);
										if (v154 == 8) {
											// 0x5c90c
											if (*(int32_t *)(v122 + 3740) != 0) {
												// 0x5c918
												result += 16;
												// branch -> 0x5c91c
											}
										}
										// 0x5c91c
										if (v154 == 9) {
											// 0x5c924
											if (*(int32_t *)(v122 + 3740) != 0) {
												// 0x5c930
												result += 32;
												// branch -> 0x5c934
											}
										}
										// 0x5c934
										v136 = (int32_t *)(v122 + 120);
										v120 = result;
										if (*v136 != v120) {
											// 0x5c940
											if (a2 != 0) {
												// 0x5c94c
												*v136 = v120;
												*(int32_t *)(g35 + 532) = 0;
												LoadPlrGFX(g16, 1);
												function_a2b68(g16);
												v104 = g35;
												*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
												v105 = g35;
												*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
												*(int32_t *)(g35 + 140) = 1;
												*(int32_t *)(g35 + 132) = g25;
												*(int32_t *)(g35 + 128) = 3;
												v106 = g35;
												*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
												v107 = g35;
												v121 = *(int32_t *)(v107 + 604) - 64;
												*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
												// branch -> 0x5c9bc
												// 0x5c9bc
												v108 = g23;
												v155 = *(int32_t *)(v108 - 0x7660);
												result = v155;
												v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
												v69 = v137;
												if (v137 < 1) {
													v113 = v108;
													// 0x5ca10
													result = *(int32_t *)(v113 - 0x76f0);
													*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
													*(int32_t *)result = 1;
													g10 = v1;
													return result;
												}
												v112 = v137;
												v109 = v155;
												while (true) {
													// 0x5c9d4
													v138 = g18 + 180 * *(int32_t *)v109;
													v111 = v112;
													v110 = v109;
													if (*(int32_t *)v138 == 13) {
													lab_0x5c9e8_24:;
														int32_t v161 = v138; // r4
														if (g16 == *(int32_t *)(v138 + 120)) {
															// 0x5c9f8
															*(int32_t *)(v138 + 148) = *(int32_t *)(g35 + 404);
															*(int32_t *)(v161 + 152) = *(int32_t *)(g35 + 396);
															v111 = v69;
															v110 = result;
															// branch -> 0x5ca08
														} else {
															v111 = v112;
															v110 = v109;
														}
													}
												lab_0x5ca08_24:;
													int32_t v162 = v110 + 4; // 0x5ca08
													result = v162;
													int32_t v163 = v111 - 1; // 0x5ca0c
													v69 = v163;
													if (v163 == 0) {
														// break -> 0x5ca10
														break;
													}
													v112 = v163;
													v109 = v162;
													// continue -> 0x5c9d4
												}
												// 0x5ca10
												v113 = g23;
												// branch -> 0x5ca10
												// 0x5ca10
												result = *(int32_t *)(v113 - 0x76f0);
												*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
												*(int32_t *)result = 1;
												g10 = v1;
												return result;
											}
										}
										// 0x5c9b8
										*v136 = v120;
										// branch -> 0x5c9bc
										// 0x5c9bc
										v108 = g23;
										v155 = *(int32_t *)(v108 - 0x7660);
										result = v155;
										v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
										v69 = v137;
										if (v137 < 1) {
											v113 = v108;
											// 0x5ca10
											result = *(int32_t *)(v113 - 0x76f0);
											*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
											*(int32_t *)result = 1;
											g10 = v1;
											return result;
										}
										v112 = v137;
										v109 = v155;
										while (true) {
											// 0x5c9d4
											v138 = g18 + 180 * *(int32_t *)v109;
											if (*(int32_t *)v138 == 13) {
												goto lab_0x5c9e8_24;
											}
											v111 = v112;
											v110 = v109;
											goto lab_0x5ca08_24;
										}
									}
									// 0x5c8b8
									v135 = v134;
									if (*(int32_t *)(v134 + 2656) == 5) {
										// 0x5c8c4
										if (*(int32_t *)(v134 + 3004) != 0) {
											// 0x5c8d0
											result = 6;
											*(char *)(v134 + 312) = 1;
											v135 = g35;
											// branch -> 0x5c8dc
										} else {
											v135 = v134;
										}
									}
									// 0x5c8dc
									v122 = v135;
									if (*(int32_t *)(v135 + 3024) == 5) {
										// 0x5c8e8
										if (*(int32_t *)(v135 + 3372) != 0) {
											// 0x5c8f4
											result++;
											*(char *)(v135 + 312) = 1;
											v122 = g35;
											// branch -> 0x5c900
										} else {
											v122 = v135;
										}
									}
									// 0x5c900
									v154 = *(int32_t *)(v122 + 3392);
									if (v154 == 8) {
										// 0x5c90c
										if (*(int32_t *)(v122 + 3740) != 0) {
											// 0x5c918
											result += 16;
											// branch -> 0x5c91c
										}
									}
									// 0x5c91c
									if (v154 == 9) {
										// 0x5c924
										if (*(int32_t *)(v122 + 3740) != 0) {
											// 0x5c930
											result += 32;
											// branch -> 0x5c934
										}
									}
									// 0x5c934
									v136 = (int32_t *)(v122 + 120);
									v120 = result;
									if (*v136 != v120) {
										// 0x5c940
										if (a2 != 0) {
											// 0x5c94c
											*v136 = v120;
											*(int32_t *)(g35 + 532) = 0;
											LoadPlrGFX(g16, 1);
											function_a2b68(g16);
											v104 = g35;
											*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
											v105 = g35;
											*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
											*(int32_t *)(g35 + 140) = 1;
											*(int32_t *)(g35 + 132) = g25;
											*(int32_t *)(g35 + 128) = 3;
											v106 = g35;
											*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
											v107 = g35;
											v121 = *(int32_t *)(v107 + 604) - 64;
											*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
											// branch -> 0x5c9bc
											// 0x5c9bc
											v108 = g23;
											v155 = *(int32_t *)(v108 - 0x7660);
											result = v155;
											v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
											v69 = v137;
											if (v137 < 1) {
												v113 = v108;
												// 0x5ca10
												result = *(int32_t *)(v113 - 0x76f0);
												*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
												*(int32_t *)result = 1;
												g10 = v1;
												return result;
											}
											v112 = v137;
											v109 = v155;
											while (true) {
												// 0x5c9d4
												v138 = g18 + 180 * *(int32_t *)v109;
												if (*(int32_t *)v138 == 13) {
													goto lab_0x5c9e8_24;
												}
												v111 = v112;
												v110 = v109;
												goto lab_0x5ca08_24;
											}
										}
									}
									// 0x5c9b8
									*v136 = v120;
									// branch -> 0x5c9bc
									// 0x5c9bc
									v108 = g23;
									v155 = *(int32_t *)(v108 - 0x7660);
									result = v155;
									v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
									v69 = v137;
									if (v137 < 1) {
										v113 = v108;
										// 0x5ca10
										result = *(int32_t *)(v113 - 0x76f0);
										*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
										*(int32_t *)result = 1;
										g10 = v1;
										return result;
									}
									v112 = v137;
									v109 = v155;
									while (true) {
										// 0x5c9d4
										v138 = g18 + 180 * *(int32_t *)v109;
										if (*(int32_t *)v138 == 13) {
											goto lab_0x5c9e8_24;
										}
										v111 = v112;
										v110 = v109;
										goto lab_0x5ca08_24;
									}
								}
								// 0x5c8b8
								v135 = v134;
								if (*(int32_t *)(v134 + 2656) == 5) {
									// 0x5c8c4
									if (*(int32_t *)(v134 + 3004) != 0) {
										// 0x5c8d0
										result = v103 + 1;
										*(char *)(v134 + 312) = 1;
										v135 = g35;
										// branch -> 0x5c8dc
									} else {
										v135 = v134;
									}
								}
								// 0x5c8dc
								v122 = v135;
								if (*(int32_t *)(v135 + 3024) == 5) {
									// 0x5c8e8
									if (*(int32_t *)(v135 + 3372) != 0) {
										// 0x5c8f4
										result++;
										*(char *)(v135 + 312) = 1;
										v122 = g35;
										// branch -> 0x5c900
									} else {
										v122 = v135;
									}
								}
								// 0x5c900
								v154 = *(int32_t *)(v122 + 3392);
								if (v154 == 8) {
									// 0x5c90c
									if (*(int32_t *)(v122 + 3740) != 0) {
										// 0x5c918
										result += 16;
										// branch -> 0x5c91c
									}
								}
								// 0x5c91c
								if (v154 == 9) {
									// 0x5c924
									if (*(int32_t *)(v122 + 3740) != 0) {
										// 0x5c930
										result += 32;
										// branch -> 0x5c934
									}
								}
								// 0x5c934
								v136 = (int32_t *)(v122 + 120);
								v120 = result;
								if (*v136 != v120) {
									// 0x5c940
									if (a2 != 0) {
										// 0x5c94c
										*v136 = v120;
										*(int32_t *)(g35 + 532) = 0;
										LoadPlrGFX(g16, 1);
										function_a2b68(g16);
										v104 = g35;
										*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
										v105 = g35;
										*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
										*(int32_t *)(g35 + 140) = 1;
										*(int32_t *)(g35 + 132) = g25;
										*(int32_t *)(g35 + 128) = 3;
										v106 = g35;
										*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
										v107 = g35;
										v121 = *(int32_t *)(v107 + 604) - 64;
										*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
										// branch -> 0x5c9bc
										// 0x5c9bc
										v108 = g23;
										v155 = *(int32_t *)(v108 - 0x7660);
										result = v155;
										v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
										v69 = v137;
										if (v137 < 1) {
											v113 = v108;
											// 0x5ca10
											result = *(int32_t *)(v113 - 0x76f0);
											*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
											*(int32_t *)result = 1;
											g10 = v1;
											return result;
										}
										v112 = v137;
										v109 = v155;
										while (true) {
											// 0x5c9d4
											v138 = g18 + 180 * *(int32_t *)v109;
											if (*(int32_t *)v138 == 13) {
												goto lab_0x5c9e8_24;
											}
											v111 = v112;
											v110 = v109;
											goto lab_0x5ca08_24;
										}
									}
								}
								// 0x5c9b8
								*v136 = v120;
								// branch -> 0x5c9bc
								// 0x5c9bc
								v108 = g23;
								v155 = *(int32_t *)(v108 - 0x7660);
								result = v155;
								v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
								v69 = v137;
								if (v137 < 1) {
									v113 = v108;
									// 0x5ca10
									result = *(int32_t *)(v113 - 0x76f0);
									*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
									*(int32_t *)result = 1;
									g10 = v1;
									return result;
								}
								v112 = v137;
								v109 = v155;
								while (true) {
									// 0x5c9d4
									v138 = g18 + 180 * *(int32_t *)v109;
									if (*(int32_t *)v138 == 13) {
										goto lab_0x5c9e8_24;
									}
									v111 = v112;
									v110 = v109;
									goto lab_0x5ca08_24;
								}
							}
							// 0x5c8b8
							v135 = v134;
							if (*(int32_t *)(v134 + 2656) == 5) {
								// 0x5c8c4
								if (*(int32_t *)(v134 + 3004) != 0) {
									// 0x5c8d0
									result = 7;
									*(char *)(v134 + 312) = 1;
									v135 = g35;
									// branch -> 0x5c8dc
								} else {
									v135 = v134;
								}
							}
							// 0x5c8dc
							v122 = v135;
							if (*(int32_t *)(v135 + 3024) == 5) {
								// 0x5c8e8
								if (*(int32_t *)(v135 + 3372) != 0) {
									// 0x5c8f4
									result++;
									*(char *)(v135 + 312) = 1;
									v122 = g35;
									// branch -> 0x5c900
								} else {
									v122 = v135;
								}
							}
							// 0x5c900
							v154 = *(int32_t *)(v122 + 3392);
							if (v154 == 8) {
								// 0x5c90c
								if (*(int32_t *)(v122 + 3740) != 0) {
									// 0x5c918
									result += 16;
									// branch -> 0x5c91c
								}
							}
							// 0x5c91c
							if (v154 == 9) {
								// 0x5c924
								if (*(int32_t *)(v122 + 3740) != 0) {
									// 0x5c930
									result += 32;
									// branch -> 0x5c934
								}
							}
							// 0x5c934
							v136 = (int32_t *)(v122 + 120);
							v120 = result;
							if (*v136 != v120) {
								// 0x5c940
								if (a2 != 0) {
									// 0x5c94c
									*v136 = v120;
									*(int32_t *)(g35 + 532) = 0;
									LoadPlrGFX(g16, 1);
									function_a2b68(g16);
									v104 = g35;
									*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
									v105 = g35;
									*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
									*(int32_t *)(g35 + 140) = 1;
									*(int32_t *)(g35 + 132) = g25;
									*(int32_t *)(g35 + 128) = 3;
									v106 = g35;
									*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
									v107 = g35;
									v121 = *(int32_t *)(v107 + 604) - 64;
									*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
									// branch -> 0x5c9bc
									// 0x5c9bc
									v108 = g23;
									v155 = *(int32_t *)(v108 - 0x7660);
									result = v155;
									v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
									v69 = v137;
									if (v137 < 1) {
										v113 = v108;
										// 0x5ca10
										result = *(int32_t *)(v113 - 0x76f0);
										*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
										*(int32_t *)result = 1;
										g10 = v1;
										return result;
									}
									v112 = v137;
									v109 = v155;
									while (true) {
										// 0x5c9d4
										v138 = g18 + 180 * *(int32_t *)v109;
										if (*(int32_t *)v138 == 13) {
											goto lab_0x5c9e8_24;
										}
										v111 = v112;
										v110 = v109;
										goto lab_0x5ca08_24;
									}
								}
							}
							// 0x5c9b8
							*v136 = v120;
							// branch -> 0x5c9bc
							// 0x5c9bc
							v108 = g23;
							v155 = *(int32_t *)(v108 - 0x7660);
							result = v155;
							v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
							v69 = v137;
							if (v137 < 1) {
								v113 = v108;
								// 0x5ca10
								result = *(int32_t *)(v113 - 0x76f0);
								*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
								*(int32_t *)result = 1;
								g10 = v1;
								return result;
							}
							v112 = v137;
							v109 = v155;
							while (true) {
								// 0x5c9d4
								v138 = g18 + 180 * *(int32_t *)v109;
								if (*(int32_t *)v138 == 13) {
									goto lab_0x5c9e8_24;
								}
								v111 = v112;
								v110 = v109;
								goto lab_0x5ca08_24;
							}
						}
					}
				}
				// 0x5c85c
				v102 = result;
				// branch -> 0x5c85c
				// 0x5c85c
				if (v102 == 4) {
					// 0x5c894
					result = 6;
					v134 = v101;
					// branch -> 0x5c8b8
				} else {
					// 0x5c864
					if (v102 > 4) {
						// 0x5c880
						if (v102 == 10) {
							// 0x5c8b4
							result = 8;
							v103 = 8;
							v134 = v101;
							// branch -> 0x5c8b8
						} else {
							v103 = v102;
							v134 = v101;
						}
					} else {
						// 0x5c868
						if (v102 == 2) {
							// 0x5c8ac
							result = 5;
							v134 = v101;
							// branch -> 0x5c8b8
						} else {
							// 0x5c870
							if (v102 > 2) {
								// 0x5c89c
								*(int32_t *)(v101 + 308) = 1;
								result = 4;
								v103 = 4;
								v134 = g35;
								// branch -> 0x5c8b8
							} else {
								// 0x5c874
								if (v102 > 0) {
									// 0x5c88c
									result = 2;
									v103 = 2;
									v134 = v101;
									// branch -> 0x5c8b8
								} else {
									v103 = v102;
									v134 = v101;
								}
							}
							// 0x5c8b8
							v135 = v134;
							if (*(int32_t *)(v134 + 2656) == 5) {
								// 0x5c8c4
								if (*(int32_t *)(v134 + 3004) != 0) {
									// 0x5c8d0
									result = v103 + 1;
									*(char *)(v134 + 312) = 1;
									v135 = g35;
									// branch -> 0x5c8dc
								} else {
									v135 = v134;
								}
							}
							// 0x5c8dc
							v122 = v135;
							if (*(int32_t *)(v135 + 3024) == 5) {
								// 0x5c8e8
								if (*(int32_t *)(v135 + 3372) != 0) {
									// 0x5c8f4
									result++;
									*(char *)(v135 + 312) = 1;
									v122 = g35;
									// branch -> 0x5c900
								} else {
									v122 = v135;
								}
							}
							// 0x5c900
							v154 = *(int32_t *)(v122 + 3392);
							if (v154 == 8) {
								// 0x5c90c
								if (*(int32_t *)(v122 + 3740) != 0) {
									// 0x5c918
									result += 16;
									// branch -> 0x5c91c
								}
							}
							// 0x5c91c
							if (v154 == 9) {
								// 0x5c924
								if (*(int32_t *)(v122 + 3740) != 0) {
									// 0x5c930
									result += 32;
									// branch -> 0x5c934
								}
							}
							// 0x5c934
							v136 = (int32_t *)(v122 + 120);
							v120 = result;
							if (*v136 != v120) {
								// 0x5c940
								if (a2 != 0) {
									// 0x5c94c
									*v136 = v120;
									*(int32_t *)(g35 + 532) = 0;
									LoadPlrGFX(g16, 1);
									function_a2b68(g16);
									v104 = g35;
									*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
									v105 = g35;
									*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
									*(int32_t *)(g35 + 140) = 1;
									*(int32_t *)(g35 + 132) = g25;
									*(int32_t *)(g35 + 128) = 3;
									v106 = g35;
									*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
									v107 = g35;
									v121 = *(int32_t *)(v107 + 604) - 64;
									*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
									// branch -> 0x5c9bc
									// 0x5c9bc
									v108 = g23;
									v155 = *(int32_t *)(v108 - 0x7660);
									result = v155;
									v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
									v69 = v137;
									if (v137 < 1) {
										v113 = v108;
										// 0x5ca10
										result = *(int32_t *)(v113 - 0x76f0);
										*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
										*(int32_t *)result = 1;
										g10 = v1;
										return result;
									}
									v112 = v137;
									v109 = v155;
									while (true) {
										// 0x5c9d4
										v138 = g18 + 180 * *(int32_t *)v109;
										if (*(int32_t *)v138 == 13) {
											goto lab_0x5c9e8_24;
										}
										v111 = v112;
										v110 = v109;
										goto lab_0x5ca08_24;
									}
								}
							}
							// 0x5c9b8
							*v136 = v120;
							// branch -> 0x5c9bc
							// 0x5c9bc
							v108 = g23;
							v155 = *(int32_t *)(v108 - 0x7660);
							result = v155;
							v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
							v69 = v137;
							if (v137 < 1) {
								v113 = v108;
								// 0x5ca10
								result = *(int32_t *)(v113 - 0x76f0);
								*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
								*(int32_t *)result = 1;
								g10 = v1;
								return result;
							}
							v112 = v137;
							v109 = v155;
							while (true) {
								// 0x5c9d4
								v138 = g18 + 180 * *(int32_t *)v109;
								if (*(int32_t *)v138 == 13) {
									goto lab_0x5c9e8_24;
								}
								v111 = v112;
								v110 = v109;
								goto lab_0x5ca08_24;
							}
						}
						// 0x5c8b8
						v135 = v134;
						if (*(int32_t *)(v134 + 2656) == 5) {
							// 0x5c8c4
							if (*(int32_t *)(v134 + 3004) != 0) {
								// 0x5c8d0
								result = 6;
								*(char *)(v134 + 312) = 1;
								v135 = g35;
								// branch -> 0x5c8dc
							} else {
								v135 = v134;
							}
						}
						// 0x5c8dc
						v122 = v135;
						if (*(int32_t *)(v135 + 3024) == 5) {
							// 0x5c8e8
							if (*(int32_t *)(v135 + 3372) != 0) {
								// 0x5c8f4
								result++;
								*(char *)(v135 + 312) = 1;
								v122 = g35;
								// branch -> 0x5c900
							} else {
								v122 = v135;
							}
						}
						// 0x5c900
						v154 = *(int32_t *)(v122 + 3392);
						if (v154 == 8) {
							// 0x5c90c
							if (*(int32_t *)(v122 + 3740) != 0) {
								// 0x5c918
								result += 16;
								// branch -> 0x5c91c
							}
						}
						// 0x5c91c
						if (v154 == 9) {
							// 0x5c924
							if (*(int32_t *)(v122 + 3740) != 0) {
								// 0x5c930
								result += 32;
								// branch -> 0x5c934
							}
						}
						// 0x5c934
						v136 = (int32_t *)(v122 + 120);
						v120 = result;
						if (*v136 != v120) {
							// 0x5c940
							if (a2 != 0) {
								// 0x5c94c
								*v136 = v120;
								*(int32_t *)(g35 + 532) = 0;
								LoadPlrGFX(g16, 1);
								function_a2b68(g16);
								v104 = g35;
								*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
								v105 = g35;
								*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
								*(int32_t *)(g35 + 140) = 1;
								*(int32_t *)(g35 + 132) = g25;
								*(int32_t *)(g35 + 128) = 3;
								v106 = g35;
								*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
								v107 = g35;
								v121 = *(int32_t *)(v107 + 604) - 64;
								*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
								// branch -> 0x5c9bc
								// 0x5c9bc
								v108 = g23;
								v155 = *(int32_t *)(v108 - 0x7660);
								result = v155;
								v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
								v69 = v137;
								if (v137 < 1) {
									v113 = v108;
									// 0x5ca10
									result = *(int32_t *)(v113 - 0x76f0);
									*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
									*(int32_t *)result = 1;
									g10 = v1;
									return result;
								}
								v112 = v137;
								v109 = v155;
								while (true) {
									// 0x5c9d4
									v138 = g18 + 180 * *(int32_t *)v109;
									if (*(int32_t *)v138 == 13) {
										goto lab_0x5c9e8_24;
									}
									v111 = v112;
									v110 = v109;
									goto lab_0x5ca08_24;
								}
							}
						}
						// 0x5c9b8
						*v136 = v120;
						// branch -> 0x5c9bc
						// 0x5c9bc
						v108 = g23;
						v155 = *(int32_t *)(v108 - 0x7660);
						result = v155;
						v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
						v69 = v137;
						if (v137 < 1) {
							v113 = v108;
							// 0x5ca10
							result = *(int32_t *)(v113 - 0x76f0);
							*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
							*(int32_t *)result = 1;
							g10 = v1;
							return result;
						}
						v112 = v137;
						v109 = v155;
						while (true) {
							// 0x5c9d4
							v138 = g18 + 180 * *(int32_t *)v109;
							if (*(int32_t *)v138 == 13) {
								goto lab_0x5c9e8_24;
							}
							v111 = v112;
							v110 = v109;
							goto lab_0x5ca08_24;
						}
					}
					// 0x5c8b8
					v135 = v134;
					if (*(int32_t *)(v134 + 2656) == 5) {
						// 0x5c8c4
						if (*(int32_t *)(v134 + 3004) != 0) {
							// 0x5c8d0
							result = v103 + 1;
							*(char *)(v134 + 312) = 1;
							v135 = g35;
							// branch -> 0x5c8dc
						} else {
							v135 = v134;
						}
					}
					// 0x5c8dc
					v122 = v135;
					if (*(int32_t *)(v135 + 3024) == 5) {
						// 0x5c8e8
						if (*(int32_t *)(v135 + 3372) != 0) {
							// 0x5c8f4
							result++;
							*(char *)(v135 + 312) = 1;
							v122 = g35;
							// branch -> 0x5c900
						} else {
							v122 = v135;
						}
					}
					// 0x5c900
					v154 = *(int32_t *)(v122 + 3392);
					if (v154 == 8) {
						// 0x5c90c
						if (*(int32_t *)(v122 + 3740) != 0) {
							// 0x5c918
							result += 16;
							// branch -> 0x5c91c
						}
					}
					// 0x5c91c
					if (v154 == 9) {
						// 0x5c924
						if (*(int32_t *)(v122 + 3740) != 0) {
							// 0x5c930
							result += 32;
							// branch -> 0x5c934
						}
					}
					// 0x5c934
					v136 = (int32_t *)(v122 + 120);
					v120 = result;
					if (*v136 != v120) {
						// 0x5c940
						if (a2 != 0) {
							// 0x5c94c
							*v136 = v120;
							*(int32_t *)(g35 + 532) = 0;
							LoadPlrGFX(g16, 1);
							function_a2b68(g16);
							v104 = g35;
							*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
							v105 = g35;
							*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
							*(int32_t *)(g35 + 140) = 1;
							*(int32_t *)(g35 + 132) = g25;
							*(int32_t *)(g35 + 128) = 3;
							v106 = g35;
							*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
							v107 = g35;
							v121 = *(int32_t *)(v107 + 604) - 64;
							*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
							// branch -> 0x5c9bc
							// 0x5c9bc
							v108 = g23;
							v155 = *(int32_t *)(v108 - 0x7660);
							result = v155;
							v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
							v69 = v137;
							if (v137 < 1) {
								v113 = v108;
								// 0x5ca10
								result = *(int32_t *)(v113 - 0x76f0);
								*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
								*(int32_t *)result = 1;
								g10 = v1;
								return result;
							}
							v112 = v137;
							v109 = v155;
							while (true) {
								// 0x5c9d4
								v138 = g18 + 180 * *(int32_t *)v109;
								if (*(int32_t *)v138 == 13) {
									goto lab_0x5c9e8_24;
								}
								v111 = v112;
								v110 = v109;
								goto lab_0x5ca08_24;
							}
						}
					}
					// 0x5c9b8
					*v136 = v120;
					// branch -> 0x5c9bc
					// 0x5c9bc
					v108 = g23;
					v155 = *(int32_t *)(v108 - 0x7660);
					result = v155;
					v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
					v69 = v137;
					if (v137 < 1) {
						v113 = v108;
						// 0x5ca10
						result = *(int32_t *)(v113 - 0x76f0);
						*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
						*(int32_t *)result = 1;
						g10 = v1;
						return result;
					}
					v112 = v137;
					v109 = v155;
					while (true) {
						// 0x5c9d4
						v138 = g18 + 180 * *(int32_t *)v109;
						if (*(int32_t *)v138 == 13) {
							goto lab_0x5c9e8_24;
						}
						v111 = v112;
						v110 = v109;
						goto lab_0x5ca08_24;
					}
				}
				// 0x5c8b8
				v135 = v134;
				if (*(int32_t *)(v134 + 2656) == 5) {
					// 0x5c8c4
					if (*(int32_t *)(v134 + 3004) != 0) {
						// 0x5c8d0
						result = 7;
						*(char *)(v134 + 312) = 1;
						v135 = g35;
						// branch -> 0x5c8dc
					} else {
						v135 = v134;
					}
				}
				// 0x5c8dc
				v122 = v135;
				if (*(int32_t *)(v135 + 3024) == 5) {
					// 0x5c8e8
					if (*(int32_t *)(v135 + 3372) != 0) {
						// 0x5c8f4
						result++;
						*(char *)(v135 + 312) = 1;
						v122 = g35;
						// branch -> 0x5c900
					} else {
						v122 = v135;
					}
				}
				// 0x5c900
				v154 = *(int32_t *)(v122 + 3392);
				if (v154 == 8) {
					// 0x5c90c
					if (*(int32_t *)(v122 + 3740) != 0) {
						// 0x5c918
						result += 16;
						// branch -> 0x5c91c
					}
				}
				// 0x5c91c
				if (v154 == 9) {
					// 0x5c924
					if (*(int32_t *)(v122 + 3740) != 0) {
						// 0x5c930
						result += 32;
						// branch -> 0x5c934
					}
				}
				// 0x5c934
				v136 = (int32_t *)(v122 + 120);
				v120 = result;
				if (*v136 != v120) {
					// 0x5c940
					if (a2 != 0) {
						// 0x5c94c
						*v136 = v120;
						*(int32_t *)(g35 + 532) = 0;
						LoadPlrGFX(g16, 1);
						function_a2b68(g16);
						v104 = g35;
						*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
						v105 = g35;
						*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
						*(int32_t *)(g35 + 140) = 1;
						*(int32_t *)(g35 + 132) = g25;
						*(int32_t *)(g35 + 128) = 3;
						v106 = g35;
						*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
						v107 = g35;
						v121 = *(int32_t *)(v107 + 604) - 64;
						*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
						// branch -> 0x5c9bc
						// 0x5c9bc
						v108 = g23;
						v155 = *(int32_t *)(v108 - 0x7660);
						result = v155;
						v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
						v69 = v137;
						if (v137 < 1) {
							v113 = v108;
							// 0x5ca10
							result = *(int32_t *)(v113 - 0x76f0);
							*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
							*(int32_t *)result = 1;
							g10 = v1;
							return result;
						}
						v112 = v137;
						v109 = v155;
						while (true) {
							// 0x5c9d4
							v138 = g18 + 180 * *(int32_t *)v109;
							if (*(int32_t *)v138 == 13) {
								goto lab_0x5c9e8_24;
							}
							v111 = v112;
							v110 = v109;
							goto lab_0x5ca08_24;
						}
					}
				}
				// 0x5c9b8
				*v136 = v120;
				// branch -> 0x5c9bc
				// 0x5c9bc
				v108 = g23;
				v155 = *(int32_t *)(v108 - 0x7660);
				result = v155;
				v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
				v69 = v137;
				if (v137 < 1) {
					v113 = v108;
					// 0x5ca10
					result = *(int32_t *)(v113 - 0x76f0);
					*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
					*(int32_t *)result = 1;
					g10 = v1;
					return result;
				}
				v112 = v137;
				v109 = v155;
				while (true) {
					// 0x5c9d4
					v138 = g18 + 180 * *(int32_t *)v109;
					if (*(int32_t *)v138 == 13) {
						goto lab_0x5c9e8_24;
					}
					v111 = v112;
					v110 = v109;
					goto lab_0x5ca08_24;
				}
			} else {
				v68 = 1;
			}
		} else {
			v68 = 0;
		}
	}
	// 0x5c44c
	*(int32_t *)(g35 + 0x5544) = v68;
	*(int32_t *)(g35 + 0x5548) = g25;
	*(int32_t *)(g35 + 0x554c) = v39;
	*(int32_t *)(g35 + 0x5550) = v40;
	*(int32_t *)(g35 + 0x5554) = v27;
	*(int32_t *)(g35 + 0x5558) = v28;
	*(int32_t *)(g35 + 0x5568) = g24;
	*(int32_t *)(g35 + 0x555c) = v31;
	*(int32_t *)(g35 + 0x556c) = v32;
	if (g31 > 1) {
		// 0x5c494
		v70 = g31;
		// branch -> 0x5c494
	} else {
		// 0x5c490
		g31 = 2;
		v70 = 2;
		// branch -> 0x5c494
	}
	// 0x5c494
	v72 = v70;
	if (v70 >= 16) {
		// 0x5c49c
		g31 = 15;
		v72 = 15;
		// branch -> 0x5c4a0
	}
	// 0x5c4a0
	v71 = g35;
	v114 = v71;
	if ((int32_t) * (char *)(v71 + 314) != v72) {
		// 0x5c4b0
		if (g16 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
			// 0x5c4c0
			function_cb930(*(int32_t *)(v71 + 156), v72);
			v73 = g31;
			v139 = *(int32_t *)(g35 + 160);
			if (v73 > 9) {
				// 0x5c4e4
				function_cbd80(v139, v73);
				// branch -> 0x5c4f0
			} else {
				// 0x5c4d4
				function_cbd80(v139, 10);
				// branch -> 0x5c4f0
			}
			// 0x5c4f0
			*(char *)(g35 + 314) = (char)(0x1000000 * g31 / 0x1000000);
			v114 = g35;
			// branch -> 0x5c4f8
		} else {
			v114 = v71;
		}
	}
	// 0x5c4f8
	v140 = *(int32_t *)(g23 - 0x77ac);
	*(int32_t *)(v114 + 352) = *(int32_t *)(v114 + 356) + v29;
	v74 = g23;
	v141 = *(int32_t *)(v74 - 0x77a8);
	v123 = (int32_t *)(v141 + 0x55ec * *(int32_t *)v140 + 352);
	v76 = v74;
	if (*v123 <= 0) {
		// 0x5c528
		*v123 = 0;
		v76 = g23;
		// branch -> 0x5c530
	}
	// 0x5c530
	v75 = g35;
	v142 = *(int32_t *)(v76 - 0x77ac);
	*(int32_t *)(v75 + 360) = g28 + *(int32_t *)(v75 + 364);
	v77 = g23;
	v143 = *(int32_t *)(v77 - 0x77a8);
	v124 = (int32_t *)(v143 + 0x55ec * *(int32_t *)v142 + 360);
	v79 = v77;
	if (*v124 <= 0) {
		// 0x5c55c
		*v124 = 0;
		v79 = g23;
		// branch -> 0x5c564
	}
	// 0x5c564
	v78 = g35;
	v144 = *(int32_t *)(v79 - 0x77ac);
	*(int32_t *)(v78 + 368) = *(int32_t *)(v78 + 372) + v30;
	v80 = g23;
	v145 = *(int32_t *)(v80 - 0x77a8);
	v125 = (int32_t *)(v145 + 0x55ec * *(int32_t *)v144 + 368);
	v82 = v80;
	if (*v125 <= 0) {
		// 0x5c594
		*v125 = 0;
		v82 = g23;
		// branch -> 0x5c59c
	}
	// 0x5c59c
	v81 = g35;
	v146 = *(int32_t *)(v82 - 0x77ac);
	*(int32_t *)(v81 + 376) = g29 + *(int32_t *)(v81 + 380);
	v147 = *(int32_t *)(g23 - 0x77a8);
	v126 = (int32_t *)(v147 + 0x55ec * *(int32_t *)v146 + 376);
	if (*v126 <= 0) {
		// 0x5c5c8
		*v126 = 0;
		// branch -> 0x5c5d0
	}
	// 0x5c5d0
	v83 = g35;
	v148 = *(char *)(v83 + 436);
	v149 = *(int32_t *)(v83 + 352);
	if (*(char *)(v83 + 348) == 1) {
		// 0x5c5dc
		v150 = *(int32_t *)(v83 + 368);
		v156 = 0x51eb851f * (int64_t)((v150 + v149) * (int32_t)v148);
		v158 = (int32_t)(v156 / 0x100000000) >> 31;
		v115 = v158 < 0;
		v127 = (v158 & -0x4000000 | (int32_t)(v156 / 0x4000000000)) + v115;
		*(int32_t *)(v83 + 388) = v127;
		// branch -> 0x5c640
	} else {
		// 0x5c614
		v157 = 0x51eb851f * (int64_t)(v149 * (int32_t)v148);
		v159 = (int32_t)(v157 / 0x100000000) >> 31;
		v116 = v159 < 0;
		v128 = (v159 & -0x8000000 | (int32_t)(v157 / 0x2000000000)) + v116;
		*(int32_t *)(v83 + 388) = v128;
		// branch -> 0x5c640
	}
	// 0x5c640
	*(int32_t *)(g35 + 0x5564) = g17;
	*(int32_t *)(g35 + 0x5560) = 0;
	v84 = g35;
	v129 = v84;
	if (*(char *)(v84 + 184) == 3) {
		// 0x5c658
		if (*(int32_t *)(v84 + 0x5564) % 2 == 0) {
			// 0x5c690
			*(int32_t *)(v84 + 180) = -1;
			*(char *)(g35 + 184) = 4;
			*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
			v129 = g35;
			// branch -> 0x5c6ac
		} else {
			v129 = v84;
		}
	}
	// 0x5c6ac
	*(char *)(v129 + 0x5570) = (char)(0x1000000 * v33 / 0x1000000);
	v117 = __asm_rlwinm_(g24, 0, 0, 0);
	*(int32_t *)(g35 + 0x5578) = v34;
	if (v117 == 0) {
		// 0x5c6d4
		v85 = g22;
		// branch -> 0x5c6d4
	} else {
		// 0x5c6c8
		g22 = 0;
		g19 = 0;
		g20 = 0;
		v85 = 0;
		// branch -> 0x5c6d4
	}
	// 0x5c6d4
	v86 = v85;
	if (v85 >= 76) {
		// 0x5c6dc
		g22 = 75;
		v86 = 75;
		// branch -> 0x5c6e0
	}
	// 0x5c6e0
	v87 = g19;
	*(char *)(g35 + 453) = (char)(0x1000000 * v86 / 0x1000000);
	if (v87 == 75 || v87 < 75) {
		// 0x5c6e0
		v88 = g19;
		// branch -> 0x5c6f4
	} else {
		// 0x5c6f0
		g19 = 75;
		v88 = 75;
		// branch -> 0x5c6f4
	}
	// 0x5c6f4
	v89 = g20;
	*(char *)(g35 + 454) = (char)(0x1000000 * v88 / 0x1000000);
	if (v89 == 75 || v89 < 75) {
		// 0x5c6f4
		v90 = g20;
		// branch -> 0x5c708
	} else {
		// 0x5c704
		g20 = 75;
		v90 = 75;
		// branch -> 0x5c708
	}
	// 0x5c708
	*(char *)(g35 + 455) = (char)(0x1000000 * v90 / 0x1000000);
	v91 = g35;
	v151 = *(char *)(v91 + 348);
	v92 = g29;
	v93 = v92;
	if (v151 == 0) {
		// 0x5c71c
		v118 = 2 * v92;
		g29 = v118;
		v93 = v118;
		// branch -> 0x5c720
	}
	// 0x5c720
	v94 = v93;
	if (v151 == 1) {
		// 0x5c72c
		v130 = (v93 / 2 | v93 & -0x80000000) + v93;
		g29 = v130;
		v94 = v130;
		// branch -> 0x5c734
	}
	// 0x5c734
	v131 = v2 + 64 * v94;
	g26 = v131;
	v95 = g28;
	v96 = v95;
	if (v151 == 2) {
		// 0x5c748
		v119 = 2 * v95;
		g28 = v119;
		v96 = v119;
		// branch -> 0x5c74c
	}
	// 0x5c74c
	v97 = v96;
	if (v151 == 1) {
		// 0x5c758
		v132 = (v96 / 2 | v96 & -0x80000000) + v96;
		g28 = v132;
		v97 = v132;
		// branch -> 0x5c760
	}
	// 0x5c760
	g27 = v3 + 64 * v97;
	*(int32_t *)(v91 + 404) = *(int32_t *)(v91 + 396) + v131;
	v98 = g35;
	*(int32_t *)(v98 + 408) = g26 + *(int32_t *)(v98 + 400);
	v133 = *(int32_t *)*(int32_t *)(g23 - 0x77ac);
	int32_t v164; // 0x5c9a4
	if (g16 == v133) {
		// 0x5c790
		if (*(int32_t *)(g35 + 404) <= 63) {
			// 0x5c79c
			g37 = 0;
			SetPlayerHitPoints(v133);
			// branch -> 0x5c7a8
		}
		// 0x5c7a8
		v99 = g35;
		*(int32_t *)(v99 + 424) = g27 + *(int32_t *)(v99 + 416);
		v100 = g35;
		*(int32_t *)(v100 + 428) = g27 + *(int32_t *)(v100 + 420);
		*(int32_t *)(g35 + 0x557c) = v35;
		*(int32_t *)(g35 + 0x5580) = v36;
		*(int32_t *)(g35 + 0x5584) = v37;
		*(int32_t *)(g35 + 0x5588) = v38;
		if (g24 % 2 == 0) {
			// 0x5c7f4
			*(int32_t *)(g35 + 460) = 0;
			// branch -> 0x5c7fc
		} else {
			// 0x5c7e8
			*(int32_t *)(g35 + 460) = 1;
			// branch -> 0x5c7fc
		}
		// 0x5c7fc
		*(char *)(g35 + 312) = 0;
		result = 0;
		*(int32_t *)(g35 + 308) = 0;
		v101 = g35;
		v152 = *(int32_t *)(v101 + 2656);
		if (v152 != -1) {
			// 0x5c818
			if (*(char *)(v101 + 2838) == 1) {
				// 0x5c824
				if (*(int32_t *)(v101 + 3004) != 0) {
					// 0x5c830
					result = v152;
					// branch -> 0x5c834
				}
			}
		}
		// 0x5c834
		v153 = *(int32_t *)(v101 + 3024);
		if (v153 != -1) {
			// 0x5c840
			if (*(char *)(v101 + 3206) == 1) {
				// 0x5c84c
				if (*(int32_t *)(v101 + 3372) != 0) {
					// 0x5c858
					result = v153;
					v102 = v153;
					// branch -> 0x5c85c
					// 0x5c85c
					if (v102 == 4) {
						// 0x5c894
						result = 6;
						v134 = v101;
						// branch -> 0x5c8b8
					} else {
						// 0x5c864
						if (v102 > 4) {
							// 0x5c880
							if (v102 == 10) {
								// 0x5c8b4
								result = 8;
								v103 = 8;
								v134 = v101;
								// branch -> 0x5c8b8
							} else {
								v103 = v102;
								v134 = v101;
							}
						} else {
							// 0x5c868
							if (v102 == 2) {
								// 0x5c8ac
								result = 5;
								v134 = v101;
								// branch -> 0x5c8b8
							} else {
								// 0x5c870
								if (v102 > 2) {
									// 0x5c89c
									*(int32_t *)(v101 + 308) = 1;
									result = 4;
									v103 = 4;
									v134 = g35;
									// branch -> 0x5c8b8
								} else {
									// 0x5c874
									if (v102 > 0) {
										// 0x5c88c
										result = 2;
										v103 = 2;
										v134 = v101;
										// branch -> 0x5c8b8
									} else {
										v103 = v102;
										v134 = v101;
									}
								}
								// 0x5c8b8
								v135 = v134;
								if (*(int32_t *)(v134 + 2656) == 5) {
									// 0x5c8c4
									if (*(int32_t *)(v134 + 3004) != 0) {
										// 0x5c8d0
										result = v103 + 1;
										*(char *)(v134 + 312) = 1;
										v135 = g35;
										// branch -> 0x5c8dc
									} else {
										v135 = v134;
									}
								}
								// 0x5c8dc
								v122 = v135;
								if (*(int32_t *)(v135 + 3024) == 5) {
									// 0x5c8e8
									if (*(int32_t *)(v135 + 3372) != 0) {
										// 0x5c8f4
										result++;
										*(char *)(v135 + 312) = 1;
										v122 = g35;
										// branch -> 0x5c900
									} else {
										v122 = v135;
									}
								}
								// 0x5c900
								v154 = *(int32_t *)(v122 + 3392);
								if (v154 == 8) {
									// 0x5c90c
									if (*(int32_t *)(v122 + 3740) != 0) {
										// 0x5c918
										result += 16;
										// branch -> 0x5c91c
									}
								}
								// 0x5c91c
								if (v154 == 9) {
									// 0x5c924
									if (*(int32_t *)(v122 + 3740) != 0) {
										// 0x5c930
										result += 32;
										// branch -> 0x5c934
									}
								}
								// 0x5c934
								v136 = (int32_t *)(v122 + 120);
								v120 = result;
								if (*v136 != v120) {
									// 0x5c940
									if (a2 != 0) {
										// 0x5c94c
										*v136 = v120;
										*(int32_t *)(g35 + 532) = 0;
										LoadPlrGFX(g16, 1);
										function_a2b68(g16);
										v104 = g35;
										*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
										v105 = g35;
										*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
										*(int32_t *)(g35 + 140) = 1;
										*(int32_t *)(g35 + 132) = g25;
										*(int32_t *)(g35 + 128) = 3;
										v106 = g35;
										*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
										v107 = g35;
										v121 = *(int32_t *)(v107 + 604) - 64;
										*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
										// branch -> 0x5c9bc
										// 0x5c9bc
										v108 = g23;
										v155 = *(int32_t *)(v108 - 0x7660);
										result = v155;
										v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
										v69 = v137;
										if (v137 < 1) {
											v113 = v108;
											// 0x5ca10
											result = *(int32_t *)(v113 - 0x76f0);
											*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
											*(int32_t *)result = 1;
											g10 = v1;
											return result;
										}
										v112 = v137;
										v109 = v155;
										while (true) {
											// 0x5c9d4
											v138 = g18 + 180 * *(int32_t *)v109;
											if (*(int32_t *)v138 == 13) {
												goto lab_0x5c9e8_24;
											}
											v111 = v112;
											v110 = v109;
											goto lab_0x5ca08_24;
										}
									}
								}
								// 0x5c9b8
								*v136 = v120;
								// branch -> 0x5c9bc
								// 0x5c9bc
								v108 = g23;
								v155 = *(int32_t *)(v108 - 0x7660);
								result = v155;
								v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
								v69 = v137;
								if (v137 < 1) {
									v113 = v108;
									// 0x5ca10
									result = *(int32_t *)(v113 - 0x76f0);
									*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
									*(int32_t *)result = 1;
									g10 = v1;
									return result;
								}
								v112 = v137;
								v109 = v155;
								while (true) {
									// 0x5c9d4
									v138 = g18 + 180 * *(int32_t *)v109;
									if (*(int32_t *)v138 == 13) {
										goto lab_0x5c9e8_24;
									}
									v111 = v112;
									v110 = v109;
									goto lab_0x5ca08_24;
								}
							}
							// 0x5c8b8
							v135 = v134;
							if (*(int32_t *)(v134 + 2656) == 5) {
								// 0x5c8c4
								if (*(int32_t *)(v134 + 3004) != 0) {
									// 0x5c8d0
									result = 6;
									*(char *)(v134 + 312) = 1;
									v135 = g35;
									// branch -> 0x5c8dc
								} else {
									v135 = v134;
								}
							}
							// 0x5c8dc
							v122 = v135;
							if (*(int32_t *)(v135 + 3024) == 5) {
								// 0x5c8e8
								if (*(int32_t *)(v135 + 3372) != 0) {
									// 0x5c8f4
									result++;
									*(char *)(v135 + 312) = 1;
									v122 = g35;
									// branch -> 0x5c900
								} else {
									v122 = v135;
								}
							}
							// 0x5c900
							v154 = *(int32_t *)(v122 + 3392);
							if (v154 == 8) {
								// 0x5c90c
								if (*(int32_t *)(v122 + 3740) != 0) {
									// 0x5c918
									result += 16;
									// branch -> 0x5c91c
								}
							}
							// 0x5c91c
							if (v154 == 9) {
								// 0x5c924
								if (*(int32_t *)(v122 + 3740) != 0) {
									// 0x5c930
									result += 32;
									// branch -> 0x5c934
								}
							}
							// 0x5c934
							v136 = (int32_t *)(v122 + 120);
							v120 = result;
							if (*v136 != v120) {
								// 0x5c940
								if (a2 != 0) {
									// 0x5c94c
									*v136 = v120;
									*(int32_t *)(g35 + 532) = 0;
									LoadPlrGFX(g16, 1);
									function_a2b68(g16);
									v104 = g35;
									*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
									v105 = g35;
									*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
									*(int32_t *)(g35 + 140) = 1;
									*(int32_t *)(g35 + 132) = g25;
									*(int32_t *)(g35 + 128) = 3;
									v106 = g35;
									*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
									v107 = g35;
									v121 = *(int32_t *)(v107 + 604) - 64;
									*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
									// branch -> 0x5c9bc
									// 0x5c9bc
									v108 = g23;
									v155 = *(int32_t *)(v108 - 0x7660);
									result = v155;
									v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
									v69 = v137;
									if (v137 < 1) {
										v113 = v108;
										// 0x5ca10
										result = *(int32_t *)(v113 - 0x76f0);
										*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
										*(int32_t *)result = 1;
										g10 = v1;
										return result;
									}
									v112 = v137;
									v109 = v155;
									while (true) {
										// 0x5c9d4
										v138 = g18 + 180 * *(int32_t *)v109;
										if (*(int32_t *)v138 == 13) {
											goto lab_0x5c9e8_24;
										}
										v111 = v112;
										v110 = v109;
										goto lab_0x5ca08_24;
									}
								}
							}
							// 0x5c9b8
							*v136 = v120;
							// branch -> 0x5c9bc
							// 0x5c9bc
							v108 = g23;
							v155 = *(int32_t *)(v108 - 0x7660);
							result = v155;
							v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
							v69 = v137;
							if (v137 < 1) {
								v113 = v108;
								// 0x5ca10
								result = *(int32_t *)(v113 - 0x76f0);
								*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
								*(int32_t *)result = 1;
								g10 = v1;
								return result;
							}
							v112 = v137;
							v109 = v155;
							while (true) {
								// 0x5c9d4
								v138 = g18 + 180 * *(int32_t *)v109;
								if (*(int32_t *)v138 == 13) {
									goto lab_0x5c9e8_24;
								}
								v111 = v112;
								v110 = v109;
								goto lab_0x5ca08_24;
							}
						}
						// 0x5c8b8
						v135 = v134;
						if (*(int32_t *)(v134 + 2656) == 5) {
							// 0x5c8c4
							if (*(int32_t *)(v134 + 3004) != 0) {
								// 0x5c8d0
								result = v103 + 1;
								*(char *)(v134 + 312) = 1;
								v135 = g35;
								// branch -> 0x5c8dc
							} else {
								v135 = v134;
							}
						}
						// 0x5c8dc
						v122 = v135;
						if (*(int32_t *)(v135 + 3024) == 5) {
							// 0x5c8e8
							if (*(int32_t *)(v135 + 3372) != 0) {
								// 0x5c8f4
								result++;
								*(char *)(v135 + 312) = 1;
								v122 = g35;
								// branch -> 0x5c900
							} else {
								v122 = v135;
							}
						}
						// 0x5c900
						v154 = *(int32_t *)(v122 + 3392);
						if (v154 == 8) {
							// 0x5c90c
							if (*(int32_t *)(v122 + 3740) != 0) {
								// 0x5c918
								result += 16;
								// branch -> 0x5c91c
							}
						}
						// 0x5c91c
						if (v154 == 9) {
							// 0x5c924
							if (*(int32_t *)(v122 + 3740) != 0) {
								// 0x5c930
								result += 32;
								// branch -> 0x5c934
							}
						}
						// 0x5c934
						v136 = (int32_t *)(v122 + 120);
						v120 = result;
						if (*v136 != v120) {
							// 0x5c940
							if (a2 != 0) {
								// 0x5c94c
								*v136 = v120;
								*(int32_t *)(g35 + 532) = 0;
								LoadPlrGFX(g16, 1);
								function_a2b68(g16);
								v104 = g35;
								*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
								v105 = g35;
								*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
								*(int32_t *)(g35 + 140) = 1;
								*(int32_t *)(g35 + 132) = g25;
								*(int32_t *)(g35 + 128) = 3;
								v106 = g35;
								*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
								v107 = g35;
								v121 = *(int32_t *)(v107 + 604) - 64;
								*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
								// branch -> 0x5c9bc
								// 0x5c9bc
								v108 = g23;
								v155 = *(int32_t *)(v108 - 0x7660);
								result = v155;
								v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
								v69 = v137;
								if (v137 < 1) {
									v113 = v108;
									// 0x5ca10
									result = *(int32_t *)(v113 - 0x76f0);
									*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
									*(int32_t *)result = 1;
									g10 = v1;
									return result;
								}
								v112 = v137;
								v109 = v155;
								while (true) {
									// 0x5c9d4
									v138 = g18 + 180 * *(int32_t *)v109;
									if (*(int32_t *)v138 == 13) {
										goto lab_0x5c9e8_24;
									}
									v111 = v112;
									v110 = v109;
									goto lab_0x5ca08_24;
								}
							}
						}
						// 0x5c9b8
						*v136 = v120;
						// branch -> 0x5c9bc
						// 0x5c9bc
						v108 = g23;
						v155 = *(int32_t *)(v108 - 0x7660);
						result = v155;
						v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
						v69 = v137;
						if (v137 < 1) {
							v113 = v108;
							// 0x5ca10
							result = *(int32_t *)(v113 - 0x76f0);
							*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
							*(int32_t *)result = 1;
							g10 = v1;
							return result;
						}
						v112 = v137;
						v109 = v155;
						while (true) {
							// 0x5c9d4
							v138 = g18 + 180 * *(int32_t *)v109;
							if (*(int32_t *)v138 == 13) {
								goto lab_0x5c9e8_24;
							}
							v111 = v112;
							v110 = v109;
							goto lab_0x5ca08_24;
						}
					}
					// 0x5c8b8
					v135 = v134;
					if (*(int32_t *)(v134 + 2656) == 5) {
						// 0x5c8c4
						if (*(int32_t *)(v134 + 3004) != 0) {
							// 0x5c8d0
							result = 7;
							*(char *)(v134 + 312) = 1;
							v135 = g35;
							// branch -> 0x5c8dc
						} else {
							v135 = v134;
						}
					}
					// 0x5c8dc
					v122 = v135;
					if (*(int32_t *)(v135 + 3024) == 5) {
						// 0x5c8e8
						if (*(int32_t *)(v135 + 3372) != 0) {
							// 0x5c8f4
							result++;
							*(char *)(v135 + 312) = 1;
							v122 = g35;
							// branch -> 0x5c900
						} else {
							v122 = v135;
						}
					}
					// 0x5c900
					v154 = *(int32_t *)(v122 + 3392);
					if (v154 == 8) {
						// 0x5c90c
						if (*(int32_t *)(v122 + 3740) != 0) {
							// 0x5c918
							result += 16;
							// branch -> 0x5c91c
						}
					}
					// 0x5c91c
					if (v154 == 9) {
						// 0x5c924
						if (*(int32_t *)(v122 + 3740) != 0) {
							// 0x5c930
							result += 32;
							// branch -> 0x5c934
						}
					}
					// 0x5c934
					v136 = (int32_t *)(v122 + 120);
					v120 = result;
					if (*v136 != v120) {
						// 0x5c940
						if (a2 != 0) {
							// 0x5c94c
							*v136 = v120;
							*(int32_t *)(g35 + 532) = 0;
							LoadPlrGFX(g16, 1);
							function_a2b68(g16);
							v104 = g35;
							*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
							v105 = g35;
							*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
							*(int32_t *)(g35 + 140) = 1;
							*(int32_t *)(g35 + 132) = g25;
							*(int32_t *)(g35 + 128) = 3;
							v106 = g35;
							*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
							v107 = g35;
							v121 = *(int32_t *)(v107 + 604) - 64;
							*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
							// branch -> 0x5c9bc
							// 0x5c9bc
							v108 = g23;
							v155 = *(int32_t *)(v108 - 0x7660);
							result = v155;
							v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
							v69 = v137;
							if (v137 < 1) {
								v113 = v108;
								// 0x5ca10
								result = *(int32_t *)(v113 - 0x76f0);
								*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
								*(int32_t *)result = 1;
								g10 = v1;
								return result;
							}
							v112 = v137;
							v109 = v155;
							while (true) {
								// 0x5c9d4
								v138 = g18 + 180 * *(int32_t *)v109;
								if (*(int32_t *)v138 == 13) {
									goto lab_0x5c9e8_24;
								}
								v111 = v112;
								v110 = v109;
								goto lab_0x5ca08_24;
							}
						}
					}
					// 0x5c9b8
					*v136 = v120;
					// branch -> 0x5c9bc
					// 0x5c9bc
					v108 = g23;
					v155 = *(int32_t *)(v108 - 0x7660);
					result = v155;
					v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
					v69 = v137;
					if (v137 < 1) {
						v113 = v108;
						// 0x5ca10
						result = *(int32_t *)(v113 - 0x76f0);
						*(int32_t *)*(int32_t *)(v113 - 0x76f4) = 1;
						*(int32_t *)result = 1;
						g10 = v1;
						return result;
					}
					v112 = v137;
					v109 = v155;
					while (true) {
						// 0x5c9d4
						v138 = g18 + 180 * *(int32_t *)v109;
						if (*(int32_t *)v138 == 13) {
							goto lab_0x5c9e8_24;
						}
						v111 = v112;
						v110 = v109;
						goto lab_0x5ca08_24;
					}
				}
			}
		}
		// 0x5c85c
		v102 = result;
		// branch -> 0x5c85c
		// 0x5c85c
		if (v102 == 4) {
			// 0x5c894
			result = 6;
			v103 = 6;
			v134 = v101;
			// branch -> 0x5c8b8
		} else {
			// 0x5c864
			if (v102 > 4) {
				// 0x5c880
				if (v102 == 10) {
					// 0x5c8b4
					result = 8;
					v103 = 8;
					v134 = v101;
					// branch -> 0x5c8b8
				} else {
					v103 = v102;
					v134 = v101;
				}
			} else {
				// 0x5c868
				if (v102 == 2) {
					// 0x5c8ac
					result = 5;
					v103 = 5;
					v134 = v101;
					// branch -> 0x5c8b8
				} else {
					// 0x5c870
					if (v102 > 2) {
						// 0x5c89c
						*(int32_t *)(v101 + 308) = 1;
						result = 4;
						v103 = 4;
						v134 = g35;
						// branch -> 0x5c8b8
					} else {
						// 0x5c874
						if (v102 > 0) {
							// 0x5c88c
							result = 2;
							v103 = 2;
							v134 = v101;
							// branch -> 0x5c8b8
						} else {
							v103 = v102;
							v134 = v101;
						}
					}
					// 0x5c8b8
					v135 = v134;
					if (*(int32_t *)(v134 + 2656) == 5) {
						// 0x5c8c4
						if (*(int32_t *)(v134 + 3004) != 0) {
							// 0x5c8d0
							result = v103 + 1;
							*(char *)(v134 + 312) = 1;
							v135 = g35;
							// branch -> 0x5c8dc
						} else {
							v135 = v134;
						}
					}
					// 0x5c8dc
					v122 = v135;
					if (*(int32_t *)(v135 + 3024) == 5) {
						// 0x5c8e8
						if (*(int32_t *)(v135 + 3372) != 0) {
							// 0x5c8f4
							result++;
							*(char *)(v135 + 312) = 1;
							v122 = g35;
							// branch -> 0x5c900
						} else {
							v122 = v135;
						}
					}
					// 0x5c900
					v154 = *(int32_t *)(v122 + 3392);
					if (v154 == 8) {
						// 0x5c90c
						if (*(int32_t *)(v122 + 3740) != 0) {
							// 0x5c918
							result += 16;
							// branch -> 0x5c91c
						}
					}
					// 0x5c91c
					if (v154 == 9) {
						// 0x5c924
						if (*(int32_t *)(v122 + 3740) != 0) {
							// 0x5c930
							result += 32;
							// branch -> 0x5c934
						}
					}
					// 0x5c934
					v136 = (int32_t *)(v122 + 120);
					v120 = result;
					if (*v136 != v120) {
						// 0x5c940
						if (a2 != 0) {
							// 0x5c94c
							*v136 = v120;
							*(int32_t *)(g35 + 532) = 0;
							LoadPlrGFX(g16, 1);
							function_a2b68(g16);
							v104 = g35;
							*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
							v105 = g35;
							*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
							*(int32_t *)(g35 + 140) = 1;
							*(int32_t *)(g35 + 132) = g25;
							*(int32_t *)(g35 + 128) = 3;
							v106 = g35;
							*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
							v107 = g35;
							v121 = *(int32_t *)(v107 + 604) - 64;
							*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
							// branch -> 0x5c9bc
							// 0x5c9bc
							v108 = g23;
							v155 = *(int32_t *)(v108 - 0x7660);
							result = v155;
							v137 = *(int32_t *)*(int32_t *)(v108 - 0x7668);
							v69 = v137;
							if (v137 < 1) {
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								v112 = v137;
								v109 = v155;
							}
							while (true) {
								// 0x5c9d4
								v138 = g18 + 180 * *(int32_t *)v109;
								if (*(int32_t *)v138 == 13) {
									goto lab_0x5c9e8_24;
								}
								v111 = v112;
								v110 = v109;
								goto lab_0x5ca08_24;
							}
						}
					}
					// 0x5c9b8
					*v136 = v120;
					// branch -> 0x5c9bc
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x5c8b8
				v135 = v134;
				if (*(int32_t *)(v134 + 2656) == 5) {
					// 0x5c8c4
					if (*(int32_t *)(v134 + 3004) != 0) {
						// 0x5c8d0
						result = v103 + 1;
						*(char *)(v134 + 312) = 1;
						v135 = g35;
						// branch -> 0x5c8dc
					} else {
						v135 = v134;
					}
				}
				// 0x5c8dc
				v122 = v135;
				if (*(int32_t *)(v135 + 3024) == 5) {
					// 0x5c8e8
					if (*(int32_t *)(v135 + 3372) != 0) {
						// 0x5c8f4
						result++;
						*(char *)(v135 + 312) = 1;
						v122 = g35;
						// branch -> 0x5c900
					} else {
						v122 = v135;
					}
				}
				// 0x5c900
				v154 = *(int32_t *)(v122 + 3392);
				if (v154 == 8) {
					// 0x5c90c
					if (*(int32_t *)(v122 + 3740) != 0) {
						// 0x5c918
						result += 16;
						// branch -> 0x5c91c
					}
				}
				// 0x5c91c
				if (v154 == 9) {
					// 0x5c924
					if (*(int32_t *)(v122 + 3740) != 0) {
						// 0x5c930
						result += 32;
						// branch -> 0x5c934
					}
				}
				// 0x5c934
				v136 = (int32_t *)(v122 + 120);
				v120 = result;
				if (*v136 != v120) {
					// 0x5c940
					if (a2 != 0) {
						// 0x5c94c
						*v136 = v120;
						*(int32_t *)(g35 + 532) = 0;
						LoadPlrGFX(g16, 1);
						function_a2b68(g16);
						v104 = g35;
						*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
						v105 = g35;
						*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
						*(int32_t *)(g35 + 140) = 1;
						*(int32_t *)(g35 + 132) = g25;
						*(int32_t *)(g35 + 128) = 3;
						v106 = g35;
						*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
						v107 = g35;
						v164 = *(int32_t *)(v107 + 604);
						result = v164;
						v121 = v164 - 64;
						*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
						// branch -> 0x5c9bc
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0x5c9b8
				*v136 = v120;
				// branch -> 0x5c9bc
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x5c8b8
			v135 = v134;
			if (*(int32_t *)(v134 + 2656) == 5) {
				// 0x5c8c4
				if (*(int32_t *)(v134 + 3004) != 0) {
					// 0x5c8d0
					result = v103 + 1;
					*(char *)(v134 + 312) = 1;
					v135 = g35;
					// branch -> 0x5c8dc
				} else {
					v135 = v134;
				}
			}
			// 0x5c8dc
			v122 = v135;
			if (*(int32_t *)(v135 + 3024) == 5) {
				// 0x5c8e8
				if (*(int32_t *)(v135 + 3372) != 0) {
					// 0x5c8f4
					result++;
					*(char *)(v135 + 312) = 1;
					v122 = g35;
					// branch -> 0x5c900
				} else {
					v122 = v135;
				}
			}
			// 0x5c900
			v154 = *(int32_t *)(v122 + 3392);
			if (v154 == 8) {
				// 0x5c90c
				if (*(int32_t *)(v122 + 3740) != 0) {
					// 0x5c918
					result += 16;
					// branch -> 0x5c91c
				}
			}
			// 0x5c91c
			if (v154 == 9) {
				// 0x5c924
				if (*(int32_t *)(v122 + 3740) != 0) {
					// 0x5c930
					result += 32;
					// branch -> 0x5c934
				}
			}
			// 0x5c934
			v136 = (int32_t *)(v122 + 120);
			v120 = result;
			if (*v136 != v120) {
				// 0x5c940
				if (a2 != 0) {
					// 0x5c94c
					*v136 = v120;
					*(int32_t *)(g35 + 532) = 0;
					LoadPlrGFX(g16, 1);
					function_a2b68(g16);
					v104 = g35;
					*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
					v105 = g35;
					*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
					*(int32_t *)(g35 + 140) = 1;
					*(int32_t *)(g35 + 132) = g25;
					*(int32_t *)(g35 + 128) = 3;
					v106 = g35;
					*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
					v107 = g35;
					v164 = *(int32_t *)(v107 + 604);
					result = v164;
					v121 = v164 - 64;
					*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
					// branch -> 0x5c9bc
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x5c9b8
			*v136 = v120;
			// branch -> 0x5c9bc
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x5c8b8
		v135 = v134;
		if (*(int32_t *)(v134 + 2656) == 5) {
			// 0x5c8c4
			if (*(int32_t *)(v134 + 3004) != 0) {
				// 0x5c8d0
				result = v103 + 1;
				*(char *)(v134 + 312) = 1;
				v135 = g35;
				// branch -> 0x5c8dc
			} else {
				v135 = v134;
			}
		}
		// 0x5c8dc
		v122 = v135;
		if (*(int32_t *)(v135 + 3024) == 5) {
			// 0x5c8e8
			if (*(int32_t *)(v135 + 3372) != 0) {
				// 0x5c8f4
				result++;
				*(char *)(v135 + 312) = 1;
				v122 = g35;
				// branch -> 0x5c900
			} else {
				v122 = v135;
			}
		}
		// 0x5c900
		v154 = *(int32_t *)(v122 + 3392);
		if (v154 == 8) {
			// 0x5c90c
			if (*(int32_t *)(v122 + 3740) != 0) {
				// 0x5c918
				result += 16;
				// branch -> 0x5c91c
			}
		}
		// 0x5c91c
		if (v154 == 9) {
			// 0x5c924
			if (*(int32_t *)(v122 + 3740) != 0) {
				// 0x5c930
				result += 32;
				// branch -> 0x5c934
			}
		}
		// 0x5c934
		v136 = (int32_t *)(v122 + 120);
		v120 = result;
		if (*v136 != v120) {
			// 0x5c940
			if (a2 != 0) {
				// 0x5c94c
				*v136 = v120;
				*(int32_t *)(g35 + 532) = 0;
				LoadPlrGFX(g16, 1);
				function_a2b68(g16);
				v104 = g35;
				*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
				v105 = g35;
				*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
				*(int32_t *)(g35 + 140) = 1;
				*(int32_t *)(g35 + 132) = g25;
				*(int32_t *)(g35 + 128) = 3;
				v106 = g35;
				*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
				v107 = g35;
				v121 = *(int32_t *)(v107 + 604) - 64;
				*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
				// branch -> 0x5c9bc
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// 0x5c9b8
		*v136 = v120;
		// branch -> 0x5c9bc
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x5c7a8
	v99 = g35;
	*(int32_t *)(v99 + 424) = g27 + *(int32_t *)(v99 + 416);
	v100 = g35;
	*(int32_t *)(v100 + 428) = g27 + *(int32_t *)(v100 + 420);
	*(int32_t *)(g35 + 0x557c) = v35;
	*(int32_t *)(g35 + 0x5580) = v36;
	*(int32_t *)(g35 + 0x5584) = v37;
	*(int32_t *)(g35 + 0x5588) = v38;
	if (g24 % 2 == 0) {
		// 0x5c7f4
		*(int32_t *)(g35 + 460) = 0;
		// branch -> 0x5c7fc
	} else {
		// 0x5c7e8
		*(int32_t *)(g35 + 460) = 1;
		// branch -> 0x5c7fc
	}
	// 0x5c7fc
	*(char *)(g35 + 312) = 0;
	result = 0;
	*(int32_t *)(g35 + 308) = 0;
	v101 = g35;
	v152 = *(int32_t *)(v101 + 2656);
	if (v152 != -1) {
		// 0x5c818
		if (*(char *)(v101 + 2838) == 1) {
			// 0x5c824
			if (*(int32_t *)(v101 + 3004) != 0) {
				// 0x5c830
				result = v152;
				// branch -> 0x5c834
			}
			// 0x5c834
			v153 = *(int32_t *)(v101 + 3024);
			if (v153 != -1) {
				// 0x5c840
				if (*(char *)(v101 + 3206) == 1) {
					// 0x5c84c
					if (*(int32_t *)(v101 + 3372) != 0) {
						// 0x5c858
						result = v153;
						v102 = v153;
						// branch -> 0x5c85c
						// 0x5c85c
						if (v102 == 4) {
							// 0x5c894
							result = 6;
							v103 = 6;
							v134 = v101;
							// branch -> 0x5c8b8
						} else {
							// 0x5c864
							if (v102 > 4) {
								// 0x5c880
								if (v102 == 10) {
									// 0x5c8b4
									result = 8;
									v103 = 8;
									v134 = v101;
									// branch -> 0x5c8b8
								} else {
									v103 = v102;
									v134 = v101;
								}
							} else {
								// 0x5c868
								if (v102 == 2) {
									// 0x5c8ac
									result = 5;
									v103 = 5;
									v134 = v101;
									// branch -> 0x5c8b8
								} else {
									// 0x5c870
									if (v102 > 2) {
										// 0x5c89c
										*(int32_t *)(v101 + 308) = 1;
										result = 4;
										v103 = 4;
										v134 = g35;
										// branch -> 0x5c8b8
									} else {
										// 0x5c874
										if (v102 > 0) {
											// 0x5c88c
											result = 2;
											v103 = 2;
											v134 = v101;
											// branch -> 0x5c8b8
										} else {
											v103 = v102;
											v134 = v101;
										}
									}
									// 0x5c8b8
									v135 = v134;
									if (*(int32_t *)(v134 + 2656) == 5) {
										// 0x5c8c4
										if (*(int32_t *)(v134 + 3004) != 0) {
											// 0x5c8d0
											result = v103 + 1;
											*(char *)(v134 + 312) = 1;
											v135 = g35;
											// branch -> 0x5c8dc
										} else {
											v135 = v134;
										}
									}
									// 0x5c8dc
									v122 = v135;
									if (*(int32_t *)(v135 + 3024) == 5) {
										// 0x5c8e8
										if (*(int32_t *)(v135 + 3372) != 0) {
											// 0x5c8f4
											result++;
											*(char *)(v135 + 312) = 1;
											v122 = g35;
											// branch -> 0x5c900
										} else {
											v122 = v135;
										}
									}
									// 0x5c900
									v154 = *(int32_t *)(v122 + 3392);
									if (v154 == 8) {
										// 0x5c90c
										if (*(int32_t *)(v122 + 3740) != 0) {
											// 0x5c918
											result += 16;
											// branch -> 0x5c91c
										}
									}
									// 0x5c91c
									if (v154 == 9) {
										// 0x5c924
										if (*(int32_t *)(v122 + 3740) != 0) {
											// 0x5c930
											result += 32;
											// branch -> 0x5c934
										}
									}
									// 0x5c934
									v136 = (int32_t *)(v122 + 120);
									v120 = result;
									if (*v136 != v120) {
										// 0x5c940
										if (a2 != 0) {
											// 0x5c94c
											*v136 = v120;
											*(int32_t *)(g35 + 532) = 0;
											LoadPlrGFX(g16, 1);
											function_a2b68(g16);
											v104 = g35;
											*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
											v105 = g35;
											*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
											*(int32_t *)(g35 + 140) = 1;
											*(int32_t *)(g35 + 132) = g25;
											*(int32_t *)(g35 + 128) = 3;
											v106 = g35;
											*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
											v107 = g35;
											v164 = *(int32_t *)(v107 + 604);
											result = v164;
											v121 = v164 - 64;
											*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
											// branch -> 0x5c9bc
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x5c9b8
									*v136 = v120;
									// branch -> 0x5c9bc
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x5c8b8
								v135 = v134;
								if (*(int32_t *)(v134 + 2656) == 5) {
									// 0x5c8c4
									if (*(int32_t *)(v134 + 3004) != 0) {
										// 0x5c8d0
										result = v103 + 1;
										*(char *)(v134 + 312) = 1;
										v135 = g35;
										// branch -> 0x5c8dc
									} else {
										v135 = v134;
									}
								}
								// 0x5c8dc
								v122 = v135;
								if (*(int32_t *)(v135 + 3024) == 5) {
									// 0x5c8e8
									if (*(int32_t *)(v135 + 3372) != 0) {
										// 0x5c8f4
										result++;
										*(char *)(v135 + 312) = 1;
										v122 = g35;
										// branch -> 0x5c900
									} else {
										v122 = v135;
									}
								}
								// 0x5c900
								v154 = *(int32_t *)(v122 + 3392);
								if (v154 == 8) {
									// 0x5c90c
									if (*(int32_t *)(v122 + 3740) != 0) {
										// 0x5c918
										result += 16;
										// branch -> 0x5c91c
									}
								}
								// 0x5c91c
								if (v154 == 9) {
									// 0x5c924
									if (*(int32_t *)(v122 + 3740) != 0) {
										// 0x5c930
										result += 32;
										// branch -> 0x5c934
									}
								}
								// 0x5c934
								v136 = (int32_t *)(v122 + 120);
								v120 = result;
								if (*v136 != v120) {
									// 0x5c940
									if (a2 != 0) {
										// 0x5c94c
										*v136 = v120;
										*(int32_t *)(g35 + 532) = 0;
										LoadPlrGFX(g16, 1);
										function_a2b68(g16);
										v104 = g35;
										*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
										v105 = g35;
										*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
										*(int32_t *)(g35 + 140) = 1;
										*(int32_t *)(g35 + 132) = g25;
										*(int32_t *)(g35 + 128) = 3;
										v106 = g35;
										*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
										v107 = g35;
										v164 = *(int32_t *)(v107 + 604);
										result = v164;
										v121 = v164 - 64;
										*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
										// branch -> 0x5c9bc
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x5c9b8
								*v136 = v120;
								// branch -> 0x5c9bc
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x5c8b8
							v135 = v134;
							if (*(int32_t *)(v134 + 2656) == 5) {
								// 0x5c8c4
								if (*(int32_t *)(v134 + 3004) != 0) {
									// 0x5c8d0
									result = v103 + 1;
									*(char *)(v134 + 312) = 1;
									v135 = g35;
									// branch -> 0x5c8dc
								} else {
									v135 = v134;
								}
							}
							// 0x5c8dc
							v122 = v135;
							if (*(int32_t *)(v135 + 3024) == 5) {
								// 0x5c8e8
								if (*(int32_t *)(v135 + 3372) != 0) {
									// 0x5c8f4
									result++;
									*(char *)(v135 + 312) = 1;
									v122 = g35;
									// branch -> 0x5c900
								} else {
									v122 = v135;
								}
							}
							// 0x5c900
							v154 = *(int32_t *)(v122 + 3392);
							if (v154 == 8) {
								// 0x5c90c
								if (*(int32_t *)(v122 + 3740) != 0) {
									// 0x5c918
									result += 16;
									// branch -> 0x5c91c
								}
							}
							// 0x5c91c
							if (v154 == 9) {
								// 0x5c924
								if (*(int32_t *)(v122 + 3740) != 0) {
									// 0x5c930
									result += 32;
									// branch -> 0x5c934
								}
							}
							// 0x5c934
							v136 = (int32_t *)(v122 + 120);
							v120 = result;
							if (*v136 != v120) {
								// 0x5c940
								if (a2 != 0) {
									// 0x5c94c
									*v136 = v120;
									*(int32_t *)(g35 + 532) = 0;
									LoadPlrGFX(g16, 1);
									function_a2b68(g16);
									v104 = g35;
									*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
									v105 = g35;
									*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
									*(int32_t *)(g35 + 140) = 1;
									*(int32_t *)(g35 + 132) = g25;
									*(int32_t *)(g35 + 128) = 3;
									v106 = g35;
									*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
									v107 = g35;
									v164 = *(int32_t *)(v107 + 604);
									result = v164;
									v121 = v164 - 64;
									*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
									// branch -> 0x5c9bc
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x5c9b8
							*v136 = v120;
							// branch -> 0x5c9bc
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// 0x5c8b8
						v135 = v134;
						if (*(int32_t *)(v134 + 2656) == 5) {
							// 0x5c8c4
							if (*(int32_t *)(v134 + 3004) != 0) {
								// 0x5c8d0
								result = v103 + 1;
								*(char *)(v134 + 312) = 1;
								v135 = g35;
								// branch -> 0x5c8dc
							} else {
								v135 = v134;
							}
						}
						// 0x5c8dc
						v122 = v135;
						if (*(int32_t *)(v135 + 3024) == 5) {
							// 0x5c8e8
							if (*(int32_t *)(v135 + 3372) != 0) {
								// 0x5c8f4
								result++;
								*(char *)(v135 + 312) = 1;
								v122 = g35;
								// branch -> 0x5c900
							} else {
								v122 = v135;
							}
						}
						// 0x5c900
						v154 = *(int32_t *)(v122 + 3392);
						if (v154 == 8) {
							// 0x5c90c
							if (*(int32_t *)(v122 + 3740) != 0) {
								// 0x5c918
								result += 16;
								// branch -> 0x5c91c
							}
						}
						// 0x5c91c
						if (v154 == 9) {
							// 0x5c924
							if (*(int32_t *)(v122 + 3740) != 0) {
								// 0x5c930
								result += 32;
								// branch -> 0x5c934
							}
						}
						// 0x5c934
						v136 = (int32_t *)(v122 + 120);
						v120 = result;
						if (*v136 != v120) {
							// 0x5c940
							if (a2 != 0) {
								// 0x5c94c
								*v136 = v120;
								*(int32_t *)(g35 + 532) = 0;
								LoadPlrGFX(g16, 1);
								function_a2b68(g16);
								v104 = g35;
								*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
								v105 = g35;
								*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
								*(int32_t *)(g35 + 140) = 1;
								*(int32_t *)(g35 + 132) = g25;
								*(int32_t *)(g35 + 128) = 3;
								v106 = g35;
								*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
								v107 = g35;
								v164 = *(int32_t *)(v107 + 604);
								result = v164;
								v121 = v164 - 64;
								*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
								// branch -> 0x5c9bc
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x5c9b8
						*v136 = v120;
						// branch -> 0x5c9bc
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// 0x5c85c
			v102 = result;
			// branch -> 0x5c85c
			// 0x5c85c
			if (v102 == 4) {
				// 0x5c894
				result = 6;
				v103 = 6;
				v134 = v101;
				// branch -> 0x5c8b8
			} else {
				// 0x5c864
				if (v102 > 4) {
					// 0x5c880
					if (v102 == 10) {
						// 0x5c8b4
						result = 8;
						v103 = 8;
						v134 = v101;
						// branch -> 0x5c8b8
					} else {
						v103 = v102;
						v134 = v101;
					}
				} else {
					// 0x5c868
					if (v102 == 2) {
						// 0x5c8ac
						result = 5;
						v103 = 5;
						v134 = v101;
						// branch -> 0x5c8b8
					} else {
						// 0x5c870
						if (v102 > 2) {
							// 0x5c89c
							*(int32_t *)(v101 + 308) = 1;
							result = 4;
							v103 = 4;
							v134 = g35;
							// branch -> 0x5c8b8
						} else {
							// 0x5c874
							if (v102 > 0) {
								// 0x5c88c
								result = 2;
								v103 = 2;
								v134 = v101;
								// branch -> 0x5c8b8
							} else {
								v103 = v102;
								v134 = v101;
							}
						}
						// 0x5c8b8
						v135 = v134;
						if (*(int32_t *)(v134 + 2656) == 5) {
							// 0x5c8c4
							if (*(int32_t *)(v134 + 3004) != 0) {
								// 0x5c8d0
								result = v103 + 1;
								*(char *)(v134 + 312) = 1;
								v135 = g35;
								// branch -> 0x5c8dc
							} else {
								v135 = v134;
							}
						}
						// 0x5c8dc
						v122 = v135;
						if (*(int32_t *)(v135 + 3024) == 5) {
							// 0x5c8e8
							if (*(int32_t *)(v135 + 3372) != 0) {
								// 0x5c8f4
								result++;
								*(char *)(v135 + 312) = 1;
								v122 = g35;
								// branch -> 0x5c900
							} else {
								v122 = v135;
							}
						}
						// 0x5c900
						v154 = *(int32_t *)(v122 + 3392);
						if (v154 == 8) {
							// 0x5c90c
							if (*(int32_t *)(v122 + 3740) != 0) {
								// 0x5c918
								result += 16;
								// branch -> 0x5c91c
							}
						}
						// 0x5c91c
						if (v154 == 9) {
							// 0x5c924
							if (*(int32_t *)(v122 + 3740) != 0) {
								// 0x5c930
								result += 32;
								// branch -> 0x5c934
							}
						}
						// 0x5c934
						v136 = (int32_t *)(v122 + 120);
						v120 = result;
						if (*v136 != v120) {
							// 0x5c940
							if (a2 != 0) {
								// 0x5c94c
								*v136 = v120;
								*(int32_t *)(g35 + 532) = 0;
								LoadPlrGFX(g16, 1);
								function_a2b68(g16);
								v104 = g35;
								*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
								v105 = g35;
								*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
								*(int32_t *)(g35 + 140) = 1;
								*(int32_t *)(g35 + 132) = g25;
								*(int32_t *)(g35 + 128) = 3;
								v106 = g35;
								*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
								v107 = g35;
								v164 = *(int32_t *)(v107 + 604);
								result = v164;
								v121 = v164 - 64;
								*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
								// branch -> 0x5c9bc
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x5c9b8
						*v136 = v120;
						// branch -> 0x5c9bc
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x5c8b8
					v135 = v134;
					if (*(int32_t *)(v134 + 2656) == 5) {
						// 0x5c8c4
						if (*(int32_t *)(v134 + 3004) != 0) {
							// 0x5c8d0
							result = v103 + 1;
							*(char *)(v134 + 312) = 1;
							v135 = g35;
							// branch -> 0x5c8dc
						} else {
							v135 = v134;
						}
					}
					// 0x5c8dc
					v122 = v135;
					if (*(int32_t *)(v135 + 3024) == 5) {
						// 0x5c8e8
						if (*(int32_t *)(v135 + 3372) != 0) {
							// 0x5c8f4
							result++;
							*(char *)(v135 + 312) = 1;
							v122 = g35;
							// branch -> 0x5c900
						} else {
							v122 = v135;
						}
					}
					// 0x5c900
					v154 = *(int32_t *)(v122 + 3392);
					if (v154 == 8) {
						// 0x5c90c
						if (*(int32_t *)(v122 + 3740) != 0) {
							// 0x5c918
							result += 16;
							// branch -> 0x5c91c
						}
					}
					// 0x5c91c
					if (v154 == 9) {
						// 0x5c924
						if (*(int32_t *)(v122 + 3740) != 0) {
							// 0x5c930
							result += 32;
							// branch -> 0x5c934
						}
					}
					// 0x5c934
					v136 = (int32_t *)(v122 + 120);
					v120 = result;
					if (*v136 != v120) {
						// 0x5c940
						if (a2 != 0) {
							// 0x5c94c
							*v136 = v120;
							*(int32_t *)(g35 + 532) = 0;
							LoadPlrGFX(g16, 1);
							function_a2b68(g16);
							v104 = g35;
							*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
							v105 = g35;
							*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
							*(int32_t *)(g35 + 140) = 1;
							*(int32_t *)(g35 + 132) = g25;
							*(int32_t *)(g35 + 128) = 3;
							v106 = g35;
							*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
							v107 = g35;
							v164 = *(int32_t *)(v107 + 604);
							result = v164;
							v121 = v164 - 64;
							*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
							// branch -> 0x5c9bc
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x5c9b8
					*v136 = v120;
					// branch -> 0x5c9bc
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x5c8b8
				v135 = v134;
				if (*(int32_t *)(v134 + 2656) == 5) {
					// 0x5c8c4
					if (*(int32_t *)(v134 + 3004) != 0) {
						// 0x5c8d0
						result = v103 + 1;
						*(char *)(v134 + 312) = 1;
						v135 = g35;
						// branch -> 0x5c8dc
					} else {
						v135 = v134;
					}
				}
				// 0x5c8dc
				v122 = v135;
				if (*(int32_t *)(v135 + 3024) == 5) {
					// 0x5c8e8
					if (*(int32_t *)(v135 + 3372) != 0) {
						// 0x5c8f4
						result++;
						*(char *)(v135 + 312) = 1;
						v122 = g35;
						// branch -> 0x5c900
					} else {
						v122 = v135;
					}
				}
				// 0x5c900
				v154 = *(int32_t *)(v122 + 3392);
				if (v154 == 8) {
					// 0x5c90c
					if (*(int32_t *)(v122 + 3740) != 0) {
						// 0x5c918
						result += 16;
						// branch -> 0x5c91c
					}
				}
				// 0x5c91c
				if (v154 == 9) {
					// 0x5c924
					if (*(int32_t *)(v122 + 3740) != 0) {
						// 0x5c930
						result += 32;
						// branch -> 0x5c934
					}
				}
				// 0x5c934
				v136 = (int32_t *)(v122 + 120);
				v120 = result;
				if (*v136 != v120) {
					// 0x5c940
					if (a2 != 0) {
						// 0x5c94c
						*v136 = v120;
						*(int32_t *)(g35 + 532) = 0;
						LoadPlrGFX(g16, 1);
						function_a2b68(g16);
						v104 = g35;
						*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
						v105 = g35;
						*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
						*(int32_t *)(g35 + 140) = 1;
						*(int32_t *)(g35 + 132) = g25;
						*(int32_t *)(g35 + 128) = 3;
						v106 = g35;
						*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
						v107 = g35;
						v164 = *(int32_t *)(v107 + 604);
						result = v164;
						v121 = v164 - 64;
						*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
						// branch -> 0x5c9bc
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0x5c9b8
				*v136 = v120;
				// branch -> 0x5c9bc
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x5c8b8
			v135 = v134;
			if (*(int32_t *)(v134 + 2656) == 5) {
				// 0x5c8c4
				if (*(int32_t *)(v134 + 3004) != 0) {
					// 0x5c8d0
					result = v103 + 1;
					*(char *)(v134 + 312) = 1;
					v135 = g35;
					// branch -> 0x5c8dc
				} else {
					v135 = v134;
				}
			}
			// 0x5c8dc
			v122 = v135;
			if (*(int32_t *)(v135 + 3024) == 5) {
				// 0x5c8e8
				if (*(int32_t *)(v135 + 3372) != 0) {
					// 0x5c8f4
					result++;
					*(char *)(v135 + 312) = 1;
					v122 = g35;
					// branch -> 0x5c900
				} else {
					v122 = v135;
				}
			}
			// 0x5c900
			v154 = *(int32_t *)(v122 + 3392);
			if (v154 == 8) {
				// 0x5c90c
				if (*(int32_t *)(v122 + 3740) != 0) {
					// 0x5c918
					result += 16;
					// branch -> 0x5c91c
				}
			}
			// 0x5c91c
			if (v154 == 9) {
				// 0x5c924
				if (*(int32_t *)(v122 + 3740) != 0) {
					// 0x5c930
					result += 32;
					// branch -> 0x5c934
				}
			}
			// 0x5c934
			v136 = (int32_t *)(v122 + 120);
			v120 = result;
			if (*v136 != v120) {
				// 0x5c940
				if (a2 != 0) {
					// 0x5c94c
					*v136 = v120;
					*(int32_t *)(g35 + 532) = 0;
					LoadPlrGFX(g16, 1);
					function_a2b68(g16);
					v104 = g35;
					*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
					v105 = g35;
					*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
					*(int32_t *)(g35 + 140) = 1;
					*(int32_t *)(g35 + 132) = g25;
					*(int32_t *)(g35 + 128) = 3;
					v106 = g35;
					*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
					v107 = g35;
					v164 = *(int32_t *)(v107 + 604);
					result = v164;
					v121 = v164 - 64;
					*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
					// branch -> 0x5c9bc
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x5c9b8
			*v136 = v120;
			// branch -> 0x5c9bc
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
	// 0x5c834
	v153 = *(int32_t *)(v101 + 3024);
	if (v153 != -1) {
		// 0x5c840
		if (*(char *)(v101 + 3206) == 1) {
			// 0x5c84c
			if (*(int32_t *)(v101 + 3372) != 0) {
				// 0x5c858
				result = v153;
				v102 = v153;
				// branch -> 0x5c85c
				// 0x5c85c
				if (v102 == 4) {
					// 0x5c894
					result = 6;
					// branch -> 0x5c8b8
				} else {
					// 0x5c864
					if (v102 > 4) {
						// 0x5c880
						if (v102 == 10) {
							// 0x5c8b4
							result = 8;
							// branch -> 0x5c8b8
						}
					} else {
						// 0x5c868
						if (v102 == 2) {
							// 0x5c8ac
							result = 5;
							// branch -> 0x5c8b8
						} else {
							// 0x5c870
							if (v102 > 2) {
								// 0x5c89c
								*(int32_t *)(v101 + 308) = 1;
								result = 4;
								v103 = 4;
								v134 = g35;
								// branch -> 0x5c8b8
							} else {
								// 0x5c874
								if (v102 > 0) {
									// 0x5c88c
									result = 2;
									v103 = 2;
									v134 = v101;
									// branch -> 0x5c8b8
								} else {
									v103 = v102;
									v134 = v101;
								}
							}
							// 0x5c8b8
							v135 = v134;
							if (*(int32_t *)(v134 + 2656) == 5) {
								// 0x5c8c4
								if (*(int32_t *)(v134 + 3004) != 0) {
									// 0x5c8d0
									result = v103 + 1;
									*(char *)(v134 + 312) = 1;
									v135 = g35;
									// branch -> 0x5c8dc
								} else {
									v135 = v134;
								}
							}
							// 0x5c8dc
							v122 = v135;
							if (*(int32_t *)(v135 + 3024) == 5) {
								// 0x5c8e8
								if (*(int32_t *)(v135 + 3372) != 0) {
									// 0x5c8f4
									result++;
									*(char *)(v135 + 312) = 1;
									v122 = g35;
									// branch -> 0x5c900
								} else {
									v122 = v135;
								}
							}
							// 0x5c900
							v154 = *(int32_t *)(v122 + 3392);
							if (v154 == 8) {
								// 0x5c90c
								if (*(int32_t *)(v122 + 3740) != 0) {
									// 0x5c918
									result += 16;
									// branch -> 0x5c91c
								}
							}
							// 0x5c91c
							if (v154 == 9) {
								// 0x5c924
								if (*(int32_t *)(v122 + 3740) != 0) {
									// 0x5c930
									result += 32;
									// branch -> 0x5c934
								}
							}
							// 0x5c934
							v136 = (int32_t *)(v122 + 120);
							v120 = result;
							if (*v136 != v120) {
								// 0x5c940
								if (a2 != 0) {
									// 0x5c94c
									*v136 = v120;
									*(int32_t *)(g35 + 532) = 0;
									LoadPlrGFX(g16, 1);
									function_a2b68(g16);
									v104 = g35;
									*(int32_t *)(v104 + 124) = v104 + 536 + 8 * *(int32_t *)(v104 + 112);
									v105 = g35;
									*(int32_t *)(v105 + 136) = *(int32_t *)(v105 + 600);
									*(int32_t *)(g35 + 140) = 1;
									*(int32_t *)(g35 + 132) = g25;
									*(int32_t *)(g35 + 128) = 3;
									v106 = g35;
									*(int32_t *)(v106 + 144) = *(int32_t *)(v106 + 604);
									v107 = g35;
									v164 = *(int32_t *)(v107 + 604);
									result = v164;
									v121 = v164 - 64;
									*(int32_t *)(v107 + 148) = v121 / 2 | v121 & -0x80000000;
									// branch -> 0x5c9bc
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x5c9b8
							*v136 = v120;
							// branch -> 0x5c9bc
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x5c85c
			v102 = result;
			// branch -> 0x5c85c
			// 0x5c85c
			if (v102 == 4) {
				// 0x5c894
				result = 6;
				// branch -> 0x5c8b8
			} else {
				// 0x5c864
				if (v102 > 4) {
					// 0x5c880
					if (v102 == 10) {
						// 0x5c8b4
						result = 8;
						// branch -> 0x5c8b8
					}
				} else {
					// 0x5c868
					if (v102 == 2) {
						// 0x5c8ac
						result = 5;
						// branch -> 0x5c8b8
					} else {
						// 0x5c870
						if (v102 > 2) {
							// 0x5c89c
							*(int32_t *)(v101 + 308) = 1;
							result = 4;
							// branch -> 0x5c8b8
						} else {
							// 0x5c874
							if (v102 > 0) {
								// 0x5c88c
								result = 2;
								// branch -> 0x5c8b8
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
	}
	// 0x5c85c
	v102 = result;
	// branch -> 0x5c85c
	// 0x5c85c
	if (v102 == 4) {
		// 0x5c894
		// branch -> 0x5c8b8
	} else {
		// 0x5c864
		if (v102 > 4) {
			// 0x5c880
			if (v102 == 10) {
				// 0x5c8b4
				// branch -> 0x5c8b8
			}
		} else {
			// 0x5c868
			if (v102 == 2) {
				// 0x5c8ac
				// branch -> 0x5c8b8
			} else {
				// 0x5c870
				if (v102 > 2) {
					// 0x5c89c
					*(int32_t *)(v101 + 308) = 1;
					// branch -> 0x5c8b8
				} else {
					// 0x5c874
					if (v102 > 0) {
						// 0x5c88c
						// branch -> 0x5c8b8
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

// Address range: 0x5ca38 - 0x5cbc8
int32_t function_5ca38(void)
{
	int32_t v1 = 0x55ec * g34; // 0x5ca40
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0x5ca44
	g36 = v2;
	int32_t v3 = v2 + v1; // 0x5ca48
	g33 = v3;
	int32_t v4 = v3; // r27
	int32_t v5 = 0;  // r26
	*(int32_t *)(v3 + 280) = 0;
	int32_t v6 = v3 + 276; // 0x5ca68
	*(int32_t *)v6 = 0;
	g32 = v6;
	int32_t v7 = v5;  // 0x5cad45
	int32_t v8 = g33; // 0x5cae0
	if (v7 < *(int32_t *)(g33 + 0x4828)) {
		int32_t v9 = g33; // 0x5cabc
		int32_t v10 = v4; // 0x5ca9c
		// branch -> 0x5ca70
		int32_t v11; // 0x5cad0
		while (true) {
			// 0x5ca70
			v11 = v9;
			int32_t v12 = v7;  // 0x5cacc
			int32_t v13 = v10; // 0x5cac8
			if (*(int32_t *)(v10 + 3760) != -1) {
				// 0x5ca7c
				if (*(int32_t *)(v10 + 3972) < 23) {
					// 0x5ca90
					if (*(int32_t *)(v10 + 0x100c) != 0) {
						// 0x5ca9c
						g34 = 0;
						int32_t *v14 = (int32_t *)(v9 + 280); // 0x5cab0
						*v14 = *v14 | 1;
						*(int32_t *)(g33 + 276) = g34 | *(int32_t *)(v9 + 276);
						v11 = g33;
						v12 = v5;
						v13 = v4;
						// branch -> 0x5cac8
					} else {
						v11 = v9;
						v12 = v7;
						v13 = v10;
					}
				} else {
					v11 = v9;
					v12 = v7;
					v13 = v10;
				}
			}
			int32_t v15 = v13 + 368; // 0x5cac8
			v4 = v15;
			int32_t v16 = v12 + 1; // 0x5cacc
			v5 = v16;
			if (v16 >= *(int32_t *)(v11 + 0x4828)) {
				// break -> 0x5cad0
				break;
			}
			v7 = v16;
			v9 = v11;
			v10 = v15;
			// continue -> 0x5ca70
		}
		// 0x5cad0
		v8 = v11;
		// branch -> 0x5cadc
	}
	// 0x5cadc
	g30 = 0;
	g31 = v8;
	int32_t v17 = 0; // 0x5cb3c17
	// branch -> 0x5cae4
	while (true) {
		// 0x5cae4
		int32_t v18; // 0x5cb3c
		int32_t v19; // 0x5cb40
		if (*(int32_t *)(v8 + 0x485c) != -1) {
			// 0x5caf0
			if (*(int32_t *)(v8 + 0x4930) < 23) {
				// 0x5cb04
				int32_t v20; // 0x5cb3c
				int32_t v21; // 0x5cb40
				if (*(int32_t *)(v8 + 0x49b8) != 0) {
					// 0x5cb10
					g34 = 0;
					int32_t *v22 = (int32_t *)(g33 + 280); // 0x5cb24
					*v22 = *v22 | 1;
					*(int32_t *)(g33 + 276) = g34 | *(int32_t *)(g33 + 276);
					v21 = g31;
					v20 = g30;
					// branch -> 0x5cb3c
				} else {
					v21 = v8;
					v20 = v17;
				}
				// 0x5cb3c
				v18 = v20 + 1;
				g30 = v18;
				v19 = v21 + 368;
				g31 = v19;
				if (v18 >= 8) {
					// break -> 0x5cb4c
					break;
				}
				v17 = v18;
				v8 = v19;
				// continue -> 0x5cae4
				continue;
			}
		}
		// 0x5cb3c
		v18 = v17 + 1;
		g30 = v18;
		v19 = v8 + 368;
		g31 = v19;
		if (v18 >= 8) {
			// break -> 0x5cb4c
			break;
		}
		v17 = v18;
		v8 = v19;
		// continue -> 0x5cae4
	}
	int32_t v23 = g35 + g36; // 0x5cb4c
	int32_t v24 = v23 + 184; // 0x5cb50
	if (*(char *)v24 == 2) {
		int32_t *v25 = (int32_t *)(v23 + 180);     // 0x5cb60
		int32_t v26 = g32;                         // 0x5cb68
		int32_t v27 = *(int32_t *)v26;             // 0x5cb68
		uint32_t v28 = (*v25 - 1) % 64;            // 0x5cb74
		int32_t v29 = 1 << v28;                    // 0x5cb74
		int32_t v30 = *(int32_t *)(v26 + 4) & v29; // 0x5cb80
		g34 = v30;
		if ((v30 || (v29 >> 31 & -2 | (int32_t)(v28 == 31)) & v27) == 0) {
			// 0x5cb98
			g34 = *(int32_t *)(g23 - 0x76bc);
			*v25 = -1;
			*(char *)v24 = 4;
			*(int32_t *)g34 = 255;
			// branch -> 0x5cbb4
		}
	}
	// 0x5cbb4
	return g34;
}

// Address range: 0x5cbc8 - 0x5cc58
int32_t function_5cbc8(void)
{
	int32_t v1 = g10;                                           // 0x5cbcc
	int32_t result = *(int32_t *)(g23 - 0x77a8) + 0x55ec * g34; // 0x5cbe0
	*(int32_t *)(result + 0x5564) = 0;
	int32_t v2 = result + 0x5560; // 0x5cbf0
	int32_t *v3 = (int32_t *)v2;  // 0x5cbf0
	*v3 = 0;
	if (*(int32_t *)(result + 2656) == -1 || *(int32_t *)(result + 3004) == 0) {
		// 0x5cc44
		g10 = v1;
		return result;
	}
	// 0x5cc0c
	int32_t result2; // r3
	if (*(int32_t *)(result + 2876) >= 1) {
		// 0x5cc18
		result2 = 0;
		int32_t *v4 = (int32_t *)(result + 0x5564); // 0x5cc2c
		*v4 = *v4 | 1;
		*(int32_t *)v2 = result2 | *v3;
		// branch -> 0x5cc44
	} else {
		result2 = result;
	}
	// 0x5cc44
	g10 = v1;
	return result2;
}

// Address range: 0x5cc58 - 0x5cd84
int32_t function_5cc58(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0x5cc64
	int32_t v1 = 7;                                            // ctr
	int32_t v2 = result + 1176;                                // 0x5cc6c
	int32_t v3 = 0;                                            // r0
	int32_t v4 = 0;                                            // r4
	int32_t v5 = 0;                                            // r5
	// branch -> 0x5cc80
	while (true) {
		int32_t v6 = v2; // 0x5ccb4
		int32_t v7;      // 0x5ccb8
		if (*(int32_t *)(v2 + 8) != -1) {
			// 0x5cc8c
			*(int32_t *)(v2 + 356) = 1;
			int32_t v8 = v2; // 0x5cc90
			if (*(int32_t *)(v8 + 56) != 0) {
				// 0x5cc9c
				v3 += *(int32_t *)(v8 + 256);
				v4 += *(int32_t *)(v8 + 260);
				v5 += *(int32_t *)(v8 + 264);
				// branch -> 0x5ccb4
			}
			// 0x5ccb4
			v7 = v1 - 1;
			v1 = v7;
			if (v7 == 0) {
				// break -> 0x5ccbc
				break;
			}
			v2 = v8 + 368;
			// continue -> 0x5cc80
			continue;
		}
		// 0x5ccb4
		v7 = v1 - 1;
		v1 = v7;
		if (v7 == 0) {
			// break -> 0x5ccbc
			break;
		}
		v2 = v6 + 368;
		// continue -> 0x5cc80
	}
	// 0x5ccbc
	// branch -> 0x5ccbc
	while (true) {
		int32_t v9 = result + 1176; // 0x5ccc0
		v1 = 7;
		int32_t v10 = 0; // 0x5cd7810
		// branch -> 0x5cccc
		int32_t v11; // 0x5cd78
		while (true) {
			// 0x5cccc
			v11 = v10;
			int32_t v12 = v9; // 0x5cd70
			int32_t v13;      // 0x5cd70
			int32_t v14;      // 0x5cd74
			if (*(int32_t *)(v9 + 8) != -1) {
				int32_t *v15 = (int32_t *)(v9 + 356); // 0x5ccd8
				if (*v15 != 0) {
					int32_t v16 = *(int32_t *)(result + 356); // 0x5cce4
					int32_t v17 = 1;
					if (v3 + v16 < (int32_t) * (char *)(v9 + 352)) {
						// 0x5cd00
						v17 = 0;
						// branch -> 0x5cd04
					}
					int32_t v18 = *(int32_t *)(result + 364); // 0x5cd04
					if (v4 + v18 < (int32_t) * (char *)(v9 + 353)) {
						// 0x5cd18
						v17 = 0;
						// branch -> 0x5cd1c
					}
					int32_t v19 = *(int32_t *)(result + 372); // 0x5cd1c
					if (v5 + v19 < (int32_t) * (char *)(v9 + 354)) {
						// 0x5cd38
						// branch -> 0x5cd40
					} else {
						// 0x5cd38
						if (v17 != 0) {
							v11 = v10;
							v12 = v9;
						lab_0x5cd70_2:
							// 0x5cd70
							v13 = v12 + 368;
							v14 = v1 - 1;
							v1 = v14;
							if (v14 == 0) {
								// break -> 0x5cd78
								break;
							}
							v10 = v11;
							v9 = v13;
							// continue -> 0x5cccc
							continue;
						}
					}
					// 0x5cd40
					*v15 = 0;
					int32_t v20 = v9; // 0x5cd4c
					if (*(int32_t *)(v20 + 56) == 0) {
						v11 = 1;
						v12 = v20;
						goto lab_0x5cd70_2;
					}
					// 0x5cd58
					v3 -= *(int32_t *)(v20 + 256);
					v4 -= *(int32_t *)(v20 + 260);
					v5 -= *(int32_t *)(v20 + 264);
					v11 = 1;
					v12 = v20;
					// branch -> 0x5cd70
					goto lab_0x5cd70_2;
				} else {
					v11 = v10;
				}
				// 0x5cd70
				v13 = v9 + 368;
				v14 = v1 - 1;
				v1 = v14;
				if (v14 == 0) {
					// break -> 0x5cd78
					break;
				}
				v10 = v11;
				v9 = v13;
				// continue -> 0x5cccc
				continue;
			}
			// 0x5cd70
			v13 = v12 + 368;
			v14 = v1 - 1;
			v1 = v14;
			if (v14 == 0) {
				// break -> 0x5cd78
				break;
			}
			v10 = v11;
			v9 = v13;
			// continue -> 0x5cccc
		}
		// 0x5cd78
		if (v11 == 0) {
			// break -> 0x5cd80
			break;
		}
		// continue -> 0x5ccbc
	}
	// 0x5cd80
	return result;
}

// Address range: 0x5cd84 - 0x5cddc
int32_t function_5cd84(int32_t a1, int32_t a2)
{
	// 0x5cd84
	if (*(int32_t *)(a1 + 360) < (int32_t) * (char *)(a2 + 353) || *(int32_t *)(a1 + 352) < (int32_t) * (char *)(a2 + 352) || *(int32_t *)(a1 + 368) < (int32_t) * (char *)(a2 + 354)) {
		// 0x5cd94
		return 0;
	}
	// 0x5cdd4
	return 1;
}

// Address range: 0x5cddc - 0x5ce7c
int32_t function_5cddc(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x5cdf4
	int32_t result = v1;                     // r3
	int32_t v2 = v1 + 0x55ec * g34;          // 0x5cdfc
	int32_t v3 = *(int32_t *)(v2 + 0x4828);  // 0x5ce00
	int32_t v4 = v2 + 3752;                  // 0x5ce04
	int32_t v5;                              // r30
	int32_t v6;                              // 0x5ce44
	int32_t v7;                              // 0x5ce54
	int32_t v8;                              // 0x5ce58
	int32_t v9;                              // 0x5ce2c
	if (v3 != 0) {
		int32_t v10 = function_5cd84(v2, v4); // 0x5ce14
		result = v10;
		*(int32_t *)(v4 + 356) = v10;
		int32_t v11 = v3 - 1;
		while (v11 != 0) {
			// 0x5ce0c
			v4 += 368;
			v10 = function_5cd84(v2, v4);
			result = v10;
			*(int32_t *)(v4 + 356) = v10;
			v11--;
			// continue -> 0x5ce0c
		}
		// 0x5ce2c
		v9 = v2 + 0x4854;
		v4 = v9;
		v5 = 7;
		int32_t v12 = 7; // 0x5ce5011
		v6 = v9;
		// branch -> 0x5ce34
		while (true) {
			// 0x5ce34
			v7 = v6;
			v8 = v12;
			if (*(int32_t *)(v6 + 8) != -1) {
			lab_0x5ce40:;
				int32_t v13 = function_5cd84(v2, v6); // 0x5ce48
				result = v13;
				*(int32_t *)(v4 + 356) = v13;
				v7 = v4;
				v8 = v5;
				// branch -> 0x5ce50
			}
		lab_0x5ce50:;
			int32_t v14 = v7 + 368; // 0x5ce54
			v4 = v14;
			int32_t v15 = v8 - 1; // 0x5ce58
			v5 = v15;
			if (v8 == 0) {
				// break -> 0x5ce60
				break;
			}
			v12 = v15;
			v6 = v14;
			// continue -> 0x5ce34
		}
		// 0x5ce60
		return result;
	}
	// 0x5ce2c
	v9 = v2 + 0x4854;
	v4 = v9;
	v5 = 7;
	v6 = v9;
	// branch -> 0x5ce34
	while (true) {
		// 0x5ce34
		if (*(int32_t *)(v6 + 8) == -1) {
			v7 = v6;
			v8 = 7;
			goto lab_0x5ce50;
		}
		goto lab_0x5ce40;
	}
}

// Address range: 0x5ce7c - 0x5cfd4
int32_t function_5ce7c(int32_t a1)
{
	int32_t v1 = g10;                        // 0x5ce80
	int32_t v2 = *(int32_t *)(g23 - 0x769c); // 0x5ce8c
	int32_t v3;                              // r27
	int32_t v4;                              // r28
	int32_t v5;                              // r30
	int32_t v6;                              // r3
	int32_t v7;                              // 0x5cfb047
	int32_t v8;                              // 0x5cfb4
	int32_t v9;                              // 0x5cfb449
	int32_t v10;                             // 0x5cee8
	int32_t v11;                             // 0x5cf2c
	if (*(char *)*(int32_t *)(g23 - 0x77e4) != 0) {
		// 0x5cee0
		v10 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1;
		g33 = v10;
		v6 = 0x51ec0000;
		v5 = v10;
		v3 = 0x51eb851f;
		v4 = 0;
		if (*(int32_t *)(v10 + 0x4828) > 0) {
			v9 = v10;
			v11 = v10;
			v7 = 0;
		lab_0x5cf00:
			while (true) {
				// 0x5cf00
				if (*(int32_t *)(v11 + 3760) == 0) {
					goto lab_0x5cf0c;
				}
				v8 = v9;
				goto lab_0x5cfac_2;
			}
		}
		// 0x5cfc0
		g10 = v1;
		return 0x51ec0000;
	}
	int32_t v12 = *(int32_t *)(g23 - 0x7178); // 0x5cea8
	v3 = v12 + 368;
	if (*(int32_t *)(v12 + 376) != -1) {
		function_63804(1);
		int32_t v13 = v3; // 0x5cec0
		g34 = v13;
		*(int32_t *)(v13 + 356) = function_62de8();
		int32_t v14 = v3; // 0x5cecc
		v3 = v14 + 368;
		int32_t v15 = 2; // 0x5ced0
		while (*(int32_t *)(v14 + 376) != -1) {
			// 0x5ceb8
			function_63804(v15);
			v13 = v3;
			g34 = v13;
			*(int32_t *)(v13 + 356) = function_62de8();
			v14 = v3;
			v3 = v14 + 368;
			v15++;
			// continue -> 0x5ceb8
		}
		// 0x5ced4
		// branch -> 0x5cee0
	}
	// 0x5cee0
	v10 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1;
	g33 = v10;
	v6 = 0x51ec0000;
	v5 = v10;
	v3 = 0x51eb851f;
	v4 = 0;
	int32_t result = 0x51ec0000; // 0x5cfd0
	if (*(int32_t *)(v10 + 0x4828) > 0) {
		v9 = v10;
		v11 = v10;
		v7 = 0;
		while (true) {
			// 0x5cf00
			v8 = v9;
			int32_t v16; // 0x5cfac
			int32_t v17; // 0x5cfb0
			if (*(int32_t *)(v11 + 3760) == 0) {
			lab_0x5cf0c:
				// 0x5cf0c
				if (*(int32_t *)(v11 + 3972) == 24) {
					int32_t v18 = *(int32_t *)(v2 + 56 * *(int32_t *)(v11 + 3976) + 28); // 0x5cf28
					*(char *)(v11 + 0x1009) = (char)v18;
					int32_t v19 = g33;                                         // 0x5cf30
					char v20 = *(char *)(v5 + *(int32_t *)(v19 + 3976) + 193); // 0x5cf38
					int32_t v21 = v20;                                         // 0x5cf3c
					int32_t v22;                                               // 0x5cfa4
					if (v20 != 0) {
						while (true) {
							char *v23 = (char *)(g33 + 0x1009);                                                          // 0x5cf44
							int32_t v24 = (int32_t)*v23;                                                                 // 0x5cf44
							int32_t v25 = v21 - 1;                                                                       // r6
							uint64_t v26 = (int64_t)v3 * (int64_t)(20 * v24);                                            // 0x5cf50
							int32_t v27 = (int32_t)(v26 / 0x100000000) >> 31;                                            // 0x5cf54
							int32_t v28 = (int32_t)(v27 < 0) + v24 + (v27 & -0x8000000 | (int32_t)(v26 / 0x2000000000)); // 0x5cf60
							*v23 = (char)v28;
							char *v29 = (char *)(g33 + 0x1009);                                                          // 0x5cf68
							int32_t v30 = (int32_t)*v29;                                                                 // 0x5cf68
							uint64_t v31 = (int64_t)v3 * (int64_t)(20 * v30);                                            // 0x5cf70
							int32_t v32 = (int32_t)(v31 / 0x100000000) >> 31;                                            // 0x5cf74
							int32_t v33 = (int32_t)(v32 < 0) + v30 + (v32 & -0x8000000 | (int32_t)(v31 / 0x2000000000)); // 0x5cf80
							if (v33 < 256) {
								// branch -> 0x5cf94
							} else {
								// 0x5cf8c
								*v29 = (char)255;
								v25 = 0;
								// branch -> 0x5cf94
							}
							// 0x5cf94
							if (v25 == 0) {
								// 0x5cf94
								// branch -> 0x5cf9c
								// 0x5cf9c
								v22 = function_5cd84(v5, g33 + 3752);
								v6 = v22;
								*(int32_t *)(g33 + 0x100c) = v22;
								int32_t v34 = g33;
								int32_t v35 = v4;
								v8 = v5;
								// branch -> 0x5cfac
							lab_0x5cfac:
								// 0x5cfac
								v16 = v34 + 368;
								g33 = v16;
								v17 = v35 + 1;
								v4 = v17;
								if (v17 >= *(int32_t *)(v8 + 0x4828)) {
									// break (via goto) -> 0x5cfb4
									goto lab_0x5cfb4;
								}
								v9 = v8;
								v11 = v16;
								v7 = v17;
								// continue (via goto) -> 0x5cf00
								goto lab_0x5cf00;
							} else {
								// 0x5cf94
								v21 = v25;
								// branch -> 0x5cf44
								continue;
							}
						}
						int32_t v36 = v6;
						result = v36;
						// branch -> 0x5cfc0
						// 0x5cfc0
						g10 = v1;
						return result;
					}
					// 0x5cf9c
					v22 = function_5cd84(v5, v19 + 3752);
					v6 = v22;
					*(int32_t *)(g33 + 0x100c) = v22;
					v8 = v5;
					// branch -> 0x5cfac
					goto lab_0x5cfac;
				} else {
					v8 = v9;
				}
			}
		lab_0x5cfac_2:
			// 0x5cfac
			v16 = v11 + 368;
			g33 = v16;
			v17 = v7 + 1;
			v4 = v17;
			if (v17 >= *(int32_t *)(v8 + 0x4828)) {
				// break -> 0x5cfb4
				break;
			}
			v9 = v8;
			v11 = v16;
			v7 = v17;
			// continue -> 0x5cf00
		}
	lab_0x5cfb4:
		// 0x5cfb4
		result = v6;
		// branch -> 0x5cfc0
	}
	// 0x5cfc0
	g10 = v1;
	return result;
}

// Address range: 0x5cfd4 - 0x5d078
int32_t CalcPlrInv(int32_t a1, int32_t a2)
{
	// 0x5cfd4
	g34 = a1;
	int32_t v1 = g35; // 0x5cfe0
	g35 = a2;
	int32_t v2 = g33; // 0x5cfe8
	g33 = g34;
	function_5cddc();
	function_5cc58(g33);
	function_5c140(g33, g35);
	g34 = g33;
	int32_t result = function_5cddc(); // 0x5d014
	int32_t v3 = *(int32_t *)g36;      // 0x5d018
	int32_t v4 = g33;                  // 0x5d01c
	int32_t v5 = v4;                   // 0x5d040
	if (v4 == v3) {
		// 0x5d024
		function_5ce7c(v3);
		g34 = g33;
		function_5ca38();
		g34 = g33;
		result = function_5cbc8();
		v5 = g33;
		// branch -> 0x5d03c
	}
	if (v5 == *(int32_t *)g36) {
		int32_t v6 = *(int32_t *)(g23 - 0x77e4); // 0x5d048
		if (*(char *)v6 == 0) {
			// 0x5d058
			result = function_6459c(v6);
			// branch -> 0x5d05c
		} else {
			result = v6;
		}
	}
	// 0x5d05c
	g35 = v1;
	g33 = v2;
	return result;
}

// Address range: 0x5d078 - 0x5d19c
int32_t function_5d078(int32_t a1)
{
	// 0x5d078
	g34 = a1;
	int32_t v1 = g37;                    // 0x5d084
	int32_t v2 = g34;                    // r29
	int32_t v3 = 76 * v1 + 0x3858 + g23; // 0x5d0a0
	memset();
	g34 = v2 + 61;
	int32_t v4 = (int32_t) * (char *)(v3 + 12); // 0x5d0b8
	*(int32_t *)(v2 + 8) = v4;
	*(int32_t *)(v2 + 192) = *(int32_t *)(v3 + 8);
	g37 = *(int32_t *)(v3 + 16);
	strcpy();
	g34 = v2 + 125;
	g37 = *(int32_t *)(v3 + 16);
	strcpy();
	*(char *)(v2 + 189) = *(char *)(v3 + 5);
	*(char *)(v2 + 190) = *(char *)(v3 + 4);
	*(int32_t *)(v2 + 204) = *(int32_t *)(v3 + 32);
	*(int32_t *)(v2 + 208) = *(int32_t *)(v3 + 36);
	*(int32_t *)(v2 + 212) = *(int32_t *)(v3 + 40);
	*(int32_t *)(v2 + 220) = *(int32_t *)(v3 + 56);
	*(int32_t *)(v2 + 224) = *(int32_t *)(v3 + 60);
	if (*(int32_t *)(v3 + 56) == 23) {
		// 0x5d120
		*(int32_t *)(v2 + 228) = 40;
		// branch -> 0x5d128
	}
	int32_t v5 = *(int32_t *)(v2 + 228); // 0x5d128
	int32_t result = -1;                 // r3
	*(int32_t *)(v2 + 232) = v5;
	*(int32_t *)(v2 + 236) = *(int32_t *)(v3 + 28);
	*(int32_t *)(v2 + 240) = *(int32_t *)(v3 + 28);
	*(char *)(v2 + 352) = *(char *)(v3 + 48);
	*(char *)(v2 + 353) = *(char *)(v3 + 49);
	*(char *)(v2 + 354) = *(char *)(v3 + 50);
	*(int32_t *)(v2 + 196) = *(int32_t *)(v3 + 68);
	*(int32_t *)(v2 + 200) = *(int32_t *)(v3 + 68);
	*(char *)(v2 + 332) = (char)result;
	*(char *)(v2 + 333) = (char)result;
	*(int32_t *)(v2 + 360) = v1;
	*(char *)(v2 + 60) = (char)0;
	return result;
}

// Address range: 0x5d19c - 0x5d1cc
int32_t GetPlrHandSeed(int32_t *a1)
{
	int32_t result = GetRndSeed(); // 0x5d1b0
	*a1 = result;
	return result;
}

// Address range: 0x5d1cc - 0x5d294
int32_t function_5d1cc(int32_t a1, int32_t *a2)
{
	// 0x5d1cc
	g36 = a1;
	g31 = *(int32_t *)(g23 - 0x77ac);
	g32 = *(int32_t *)(g23 - 0x7690);
	g28 = (int32_t)a2;
	g33 = *(int32_t *)(g23 - 0x71e0);
	g35 = *(int32_t *)(g23 - 0x71e4);
	g30 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1;
	// branch -> 0x5d200
	int32_t result; // r3
	int32_t v1;     // 0x5d204
	while (true) {
		// 0x5d200
		g29 = 1;
		v1 = GetRndSeed();
		result = v1;
		uint32_t v2 = *(int32_t *)g35; // 0x5d208
		if (v2 >= 1) {
			int32_t v3 = g33; // 0x5d234
			// branch -> 0x5d21c
			while (true) {
				// 0x5d21c
				if (v1 == *(int32_t *)(368 * *(int32_t *)v3 + g32)) {
					// 0x5d230
					g29 = 0;
					// branch -> 0x5d234
				}
				int32_t v4 = v3 + 4; // 0x5d234
				int32_t v5 = v2 - 1; // 0x5d238
				if (v5 == 0) {
					// break -> 0x5d23c
					break;
				}
				v2 = v5;
				v3 = v4;
				// continue -> 0x5d21c
			}
			// 0x5d23c
			// branch -> 0x5d23c
		}
		// 0x5d23c
		if (g36 == *(int32_t *)g31) {
			int32_t v6 = g30;                        // 0x5d248
			uint32_t v7 = *(int32_t *)(v6 + 0x4828); // 0x5d248
			if (v7 >= 1) {
				while (true) {
					// 0x5d25c
					if (v1 == *(int32_t *)(v6 + 3752)) {
						// 0x5d268
						g29 = 0;
						// branch -> 0x5d26c
					}
					int32_t v8 = v6 + 368; // 0x5d26c
					int32_t v9 = v7 - 1;   // 0x5d270
					if (v9 == 0) {
						// break -> 0x5d274
						break;
					}
					v7 = v9;
					v6 = v8;
					// continue -> 0x5d25c
				}
				// 0x5d274
				// branch -> 0x5d274
			}
			// 0x5d274
			if (g29 != 0) {
				// break -> 0x5d27c
				break;
			}
			// continue -> 0x5d200
			continue;
		}
		// 0x5d274
		if (g29 != 0) {
			// break -> 0x5d27c
			break;
		}
		// continue -> 0x5d200
	}
	// 0x5d27c
	*(int32_t *)g28 = v1;
	return result;
}

// Address range: 0x5d294 - 0x5d29c
int32_t function_5d294(int32_t *a1, int32_t a2)
{
	// 0x5d294
	*a1 = a2;
	return (int32_t)a1;
}

// Address range: 0x5d29c - 0x5d2d4
int32_t function_5d29c(int32_t result)
{
	uint32_t v1 = *(int32_t *)(result + 196); // 0x5d29c
	if (v1 >= 2500) {
		// 0x5d2a8
		*(int32_t *)(result + 192) = 6;
		return result;
	}
	// 0x5d2b4
	if (v1 > 1000) {
		// 0x5d2c8
		*(int32_t *)(result + 192) = 5;
		return result;
	}
	// 0x5d2bc
	*(int32_t *)(result + 192) = 4;
	return result;
}

// Address range: 0x5d2d4 - 0x5d584
int32_t CreatePlrItems(int32_t a1)
{
	g32 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x5d2e0
	g36 = v1;
	int32_t v2 = 0x55ec * a1; // 0x5d2e4
	g35 = v2;
	int32_t v3 = v1 + v2; // 0x5d2e8
	g31 = v3;
	int32_t v4 = -1; // r29
	g34 = v3 + 0x482c;
	*(int32_t *)(v3 + 1184) = -1;
	*(int32_t *)(g31 + 1552) = v4;
	*(int32_t *)(g31 + 1920) = v4;
	*(int32_t *)(g31 + 2288) = v4;
	*(int32_t *)(g31 + 2656) = v4;
	*(int32_t *)(g31 + 3024) = v4;
	*(int32_t *)(g31 + 3392) = v4;
	memset();
	int32_t v5 = g31 + 3752; // 0x5d328
	*(int32_t *)(v5 + 8) = v4;
	*(int32_t *)(v5 + 376) = v4;
	*(int32_t *)(v5 + 744) = v4;
	*(int32_t *)(v5 + 1112) = v4;
	*(int32_t *)(v5 + 1480) = v4;
	*(int32_t *)(v5 + 1848) = v4;
	*(int32_t *)(v5 + 2216) = v4;
	*(int32_t *)(v5 + 2584) = v4;
	*(int32_t *)(v5 + 2952) = v4;
	*(int32_t *)(v5 + 3320) = v4;
	int32_t v6 = 3; // 0x5d35c
	// branch -> 0x5d330
	while (v6 != 0) {
		// 0x5d330
		v5 += 3680;
		*(int32_t *)(v5 + 8) = v4;
		*(int32_t *)(v5 + 376) = v4;
		*(int32_t *)(v5 + 744) = v4;
		*(int32_t *)(v5 + 1112) = v4;
		*(int32_t *)(v5 + 1480) = v4;
		*(int32_t *)(v5 + 1848) = v4;
		*(int32_t *)(v5 + 2216) = v4;
		*(int32_t *)(v5 + 2584) = v4;
		*(int32_t *)(v5 + 2952) = v4;
		*(int32_t *)(v5 + 3320) = v4;
		v6--;
		// continue -> 0x5d330
	}
	int32_t v7 = g36 + 0x4828 + g35; // 0x5d368
	*(int32_t *)v7 = 0;
	g33 = v7;
	int32_t v8 = -1;           // r0
	int32_t v9 = g31;          // 0x5d374
	int32_t v10 = v9 + 0x4854; // r25
	*(int32_t *)(v9 + 0x485c) = -1;
	*(int32_t *)(g31 + 0x49cc) = v8;
	*(int32_t *)(g31 + 0x4b3c) = v8;
	*(int32_t *)(g31 + 0x4cac) = v8;
	*(int32_t *)(g31 + 0x4e1c) = v8;
	*(int32_t *)(g31 + 0x4f8c) = v8;
	*(int32_t *)(g31 + 0x50fc) = v8;
	*(int32_t *)(g31 + 0x526c) = v8;
	char v11 = *(char *)(g35 + g36 + 348); // 0x5d398
	int32_t v12;                           // ctr
	int32_t v13;                           // r4
	int32_t v14;                           // 0x5d534
	int32_t v15;                           // 0x5d4e0
	int32_t v16;                           // 0x5d534
	int32_t v17;                           // 0x5d53c
	int32_t v18;                           // 0x5d544
	int32_t *v19;                          // 0x5d548
	int32_t v20;                           // 0x5d4f8
	int32_t v21;                           // 0x5d53c
	int32_t v22;                           // 0x5d564
	if (v11 == 1) {
		int32_t v23 = g31 + 2648; // 0x5d454
		g37 = 4;
		function_5d078(v23);
		GetPlrHandSeed((int32_t *)v23);
		g37 = 24;
		function_5d078(v10);
		GetPlrHandSeed((int32_t *)v10);
		int32_t v24 = g31 + 0x49c4; // 0x5d480
		g37 = 24;
		function_5d078(v24);
		GetPlrHandSeed((int32_t *)v24);
		// branch -> 0x5d4e0
	} else {
		// 0x5d3a8
		if (v11 > 1) {
			// 0x5d3b8
			if (v11 == 2) {
				int32_t v25 = g31 + 2648; // 0x5d49c
				g37 = 5;
				function_5d078(v25);
				GetPlrHandSeed((int32_t *)v25);
				g37 = 25;
				function_5d078(v10);
				GetPlrHandSeed((int32_t *)v10);
				int32_t v26 = g31 + 0x49c4; // 0x5d4c8
				g37 = 25;
				function_5d078(v26);
				GetPlrHandSeed((int32_t *)v26);
				// branch -> 0x5d4e0
			}
		} else {
			// 0x5d3ac
			if (v11 > -1) {
				int32_t v27 = g31 + 2648; // 0x5d3c4
				g37 = 1;
				function_5d078(v27);
				GetPlrHandSeed((int32_t *)v27);
				int32_t v28 = g31 + 3016; // 0x5d3dc
				g37 = 2;
				function_5d078(v28);
				GetPlrHandSeed((int32_t *)v28);
				int32_t v29 = g31 + 0x53d4; // 0x5d3f4
				g37 = 3;
				function_5d078(v29);
				GetPlrHandSeed((int32_t *)v29);
				function_56c68(g32, 0, 1, 3, 1);
				g37 = 24;
				function_5d078(v10);
				GetPlrHandSeed((int32_t *)v10);
				int32_t v30 = g31 + 0x49c4; // 0x5d438
				g37 = 24;
				function_5d078(v30);
				GetPlrHandSeed((int32_t *)v30);
				// branch -> 0x5d4e0
			}
		}
		// 0x5d4e0
		v15 = g31 + 0x53d4;
		g37 = 0;
		function_5d078(v15);
		GetPlrHandSeed((int32_t *)v15);
		v20 = g35 + g36;
		v5 = v20;
		v13 = v20 + 0x53cc;
		*(int32_t *)(v20 + 0x5498) = 100;
		*(int32_t *)(v5 + 0x5494) = 4;
		v12 = 46;
		*(int32_t *)(v5 + 456) = *(int32_t *)(v20 + 0x5498);
		v17 = v5 + 368 * *(int32_t *)g33 + 3744;
		// branch -> 0x5d534
		while (true) {
			// 0x5d534
			v14 = v13;
			v16 = v14 + 8;
			v13 = v16;
			v21 = v17 + 8;
			*(int32_t *)v21 = *(int32_t *)v16;
			*(int32_t *)(v17 + 12) = *(int32_t *)(v14 + 12);
			v18 = v12 - 1;
			v12 = v18;
			if (v18 == 0) {
				// 0x5d548
				v19 = (int32_t *)g33;
				*v19 = *v19 + 1;
				v22 = 0x1000000 * *(int32_t *)g33 / 0x1000000;
				*(char *)(g35 + g36 + 0x484a) = (char)v22;
				return function_5c140(g32, 0);
			}
		lab_0x5d534:
			// 0x5d534
			v17 = v21;
			// branch -> 0x5d534
		}
	}
	// 0x5d4e0
	v15 = g31 + 0x53d4;
	g37 = 0;
	function_5d078(v15);
	GetPlrHandSeed((int32_t *)v15);
	v20 = g35 + g36;
	v5 = v20;
	*(int32_t *)(v20 + 0x5498) = 100;
	*(int32_t *)(v5 + 0x5494) = 4;
	*(int32_t *)(v5 + 456) = *(int32_t *)(v20 + 0x5498);
	v17 = v5 + 368 * *(int32_t *)g33 + 3744;
	// branch -> 0x5d534
	while (true) {
		// 0x5d534
		v14 = v20 + 0x53cc;
		v16 = v14 + 8;
		v13 = v16;
		v21 = v17 + 8;
		*(int32_t *)v21 = *(int32_t *)v16;
		*(int32_t *)(v17 + 12) = *(int32_t *)(v14 + 12);
		v18 = 45;
		v12 = v18;
		if (v18 != 0) {
			goto lab_0x5d534;
		}
		// 0x5d548
		v19 = (int32_t *)g33;
		*v19 = *v19 + 1;
		v22 = 0x1000000 * *(int32_t *)g33 / 0x1000000;
		*(char *)(g35 + g36 + 0x484a) = (char)v22;
		return function_5c140(g32, 0);
	}
}

// Address range: 0x5d584 - 0x5d75c
int32_t function_5d584(int32_t a1, uint32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x5d588
	g38 = v1;
	if (a1 < 0 || a1 > 111 || a2 < 0 || a2 >= 112) {
		// 0x5d5a8
		return 0;
	}
	int32_t v2 = 2 * a2; // 0x5d5bc
	g39 = v2;
	int32_t v3 = v2 + 224 * a1; // 0x5d5c0
	if (*(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x767c) + v3) != 0) {
		// 0x5d5d0
		return 0;
	}
	int32_t v4 = 112 * a1; // 0x5d5d8
	int32_t v5 = v4 + a2;  // 0x5d5e4
	if (*(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7680) + v5) != 0 || *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x768c) + v5) != 0) {
		// 0x5d5f4
		return 0;
	}
	int32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x7684); // 0x5d61c
	char v7 = *(char *)(v6 + v5);                        // 0x5d620
	int32_t v8 = v7;                                     // 0x5d624
	int32_t v9;                                          // 0x5d6f4
	int32_t v10;                                         // 0x5d66c
	int32_t v11;                                         // 0x5d674
	unsigned char v12;                                   // 0x5d670
	unsigned char v13;                                   // 0x5d6d8
	unsigned char v14;                                   // 0x5d6e4
	int16_t v15;                                         // 0x5d73c
	if (v7 != 0) {
		// 0x5d62c
		if (*(int32_t *)(v1 - 120 + 120 * (v7 < 0 ? -v8 : v8) + 56) != 0) {
			// 0x5d660
			return 0;
		}
		// 0x5d668
		v10 = v6 + v4 + a2;
		v12 = *(char *)(v10 + 113);
		v11 = v12;
		if (v12 >= 1) {
			// 0x5d67c
			if (*(char *)(v1 - 120 + 120 * v11 + 64) != 0) {
				// 0x5d698
				return 0;
			}
		}
		// 0x5d6a0
		if (v12 != 0 && 0x1000000 * (int32_t)v12 <= 0) {
			// 0x5d6a8
			if (*(char *)(120 * (-1 - v11) + v1 + 64) != 0) {
				// 0x5d6c8
				return 0;
			}
		}
		// 0x5d6d0
		v13 = *(char *)(v10 + 112);
		if (v13 >= 1) {
			// 0x5d6e4
			v14 = *(char *)(v10 + 1);
			if (v14 >= 1) {
				// 0x5d6f0
				v9 = v1 + 64;
				if (*(char *)(120 * (int32_t)v13 - 120 + v9) != 0) {
					// 0x5d70c
					if (*(char *)(120 * (int32_t)v14 - 120 + v9) != 0) {
						// 0x5d724
						return 0;
					}
				}
			}
		}
		// 0x5d72c
		v15 = *(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x757c) + v3);
		if (*(char *)((int32_t)v15 + *(int32_t *)(g23 - 0x722c)) == 0) {
			// 0x5d754
			return 1;
		}
		// 0x5d74c
		return 0;
	}
	// 0x5d668
	v10 = v6 + v4 + a2;
	v12 = *(char *)(v10 + 113);
	int32_t v16 = v12; // 0x5d670
	v11 = v12;
	if (v12 >= 1) {
		// 0x5d67c
		if (*(char *)(v1 - 120 + 120 * v11 + 64) != 0) {
			// 0x5d698
			return 0;
		}
		// 0x5d6a0
		if (v12 != 0 && 0x1000000 * v16 <= 0) {
			// 0x5d6a8
			if (*(char *)(120 * (-1 - v11) + v1 + 64) != 0) {
				// 0x5d6c8
				return 0;
			}
		}
		// 0x5d6d0
		v13 = *(char *)(v10 + 112);
		if (v13 >= 1) {
			// 0x5d6e4
			v14 = *(char *)(v10 + 1);
			if (v14 >= 1) {
				// 0x5d6f0
				v9 = v1 + 64;
				if (*(char *)(120 * (int32_t)v13 - 120 + v9) != 0) {
					// 0x5d70c
					if (*(char *)(120 * (int32_t)v14 - 120 + v9) != 0) {
						// 0x5d724
						return 0;
					}
				}
			}
		}
		// 0x5d72c
		v15 = *(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x757c) + v3);
		if (*(char *)((int32_t)v15 + *(int32_t *)(g23 - 0x722c)) == 0) {
			// 0x5d754
			return 1;
		}
		// 0x5d74c
		return 0;
	}
	// 0x5d6a0
	if (v12 != 0 && 0x1000000 * v16 <= 0) {
		// 0x5d6a8
		if (*(char *)(120 * (-1 - v11) + v1 + 64) != 0) {
			// 0x5d6c8
			return 0;
		}
		// 0x5d6d0
		v13 = *(char *)(v10 + 112);
		if (v13 >= 1) {
			// 0x5d6e4
			v14 = *(char *)(v10 + 1);
			if (v14 >= 1) {
				// 0x5d6f0
				v9 = v1 + 64;
				if (*(char *)(120 * (int32_t)v13 - 120 + v9) != 0) {
					// 0x5d70c
					if (*(char *)(120 * (int32_t)v14 - 120 + v9) != 0) {
						// 0x5d724
						return 0;
					}
				}
			}
		}
		// 0x5d72c
		v15 = *(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x757c) + v3);
		if (*(char *)((int32_t)v15 + *(int32_t *)(g23 - 0x722c)) == 0) {
			// 0x5d754
			return 1;
		}
		// 0x5d74c
		return 0;
	}
	// 0x5d6d0
	v13 = *(char *)(v10 + 112);
	if (v13 < 1) {
		// 0x5d72c
		v15 = *(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x757c) + v3);
		if (*(char *)((int32_t)v15 + *(int32_t *)(g23 - 0x722c)) == 0) {
			// 0x5d754
			return 1;
		}
		// 0x5d74c
		return 0;
	}
	// 0x5d6e4
	v14 = *(char *)(v10 + 1);
	if (v14 < 1) {
		// 0x5d72c
		v15 = *(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x757c) + v3);
		if (*(char *)((int32_t)v15 + *(int32_t *)(g23 - 0x722c)) == 0) {
			// 0x5d754
			return 1;
		}
		// 0x5d74c
		return 0;
	}
	// 0x5d6f0
	v9 = v1 + 64;
	if (*(char *)(120 * (int32_t)v13 - 120 + v9) == 0) {
		// 0x5d72c
		v15 = *(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x757c) + v3);
		if (*(char *)((int32_t)v15 + *(int32_t *)(g23 - 0x722c)) == 0) {
			// 0x5d754
			return 1;
		}
		// 0x5d74c
		return 0;
	}
	// 0x5d70c
	if (*(char *)(120 * (int32_t)v14 - 120 + v9) != 0) {
		// 0x5d724
		return 0;
	}
	// 0x5d72c
	v15 = *(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x757c) + v3);
	if (*(char *)((int32_t)v15 + *(int32_t *)(g23 - 0x722c)) == 0) {
		// 0x5d754
		return 1;
	}
	// 0x5d74c
	return 0;
}

// Address range: 0x5d75c - 0x5d8e8
int32_t function_5d75c(void)
{
	int32_t v1 = g37; // 0x5d760
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x717c); // 0x5d768
	g27 = v2;
	int32_t v3 = g34; // 0x5d76c
	g33 = v3;
	g30 = *(int32_t *)(g23 - 0x7690);
	g36 = g38;
	int32_t v4 = v1 - 1; // 0x5d778
	int32_t v5 = v4;     // r21
	g28 = v2;
	int32_t v6 = v3 + 1; // 0x5d780
	g31 = v6;
	int32_t v7 = v1 + 1; // 0x5d784
	g32 = v7;
	int32_t v8; // 0x5d814
	int32_t v9; // 0x5d818
	if (v4 <= v7) {
		int32_t v10 = v2; // 0x5d794
		while (true) {
			// 0x5d794
			g29 = v10;
			int32_t v11 = v3 - 1; // 0x5d798
			g26 = v11;
			int32_t v12 = v7;  // 0x5d7c8
			int32_t v13 = v4;  // 0x5d7c4
			int32_t v14 = v10; // 0x5d7c0
			int32_t v15 = v6;  // 0x5d7b8516
			int32_t v16;       // 0x5d7c0
			int32_t v17;       // 0x5d7c4
			if (v11 <= v6) {
				int32_t v18 = v4; // 0x5d7a4
				while (true) {
					// 0x5d7a0
					*(int32_t *)g29 = function_5d584(v11, v18);
					g29 += 12;
					int32_t v19 = g26 + 1; // 0x5d7b4
					g26 = v19;
					if (v19 > g31) {
						// 0x5d7b8
						v12 = g32;
						v13 = v5;
						v14 = g28;
						v15 = g31;
						// branch -> 0x5d7c0
						// 0x5d7c0
						v16 = v14 + 4;
						g28 = v16;
						v17 = v13 + 1;
						if (v17 <= v12) {
						lab_0x5d7c0:
							// 0x5d7c0
							v7 = v12;
							v4 = v17;
							v6 = v15;
							v3 = g33;
							v10 = v16;
							// branch -> 0x5d794
							break;
						}
						// 0x5d7c8
						// branch -> 0x5d7d0
						// 0x5d7d0
						v5 = 0;
						v9 = 3;
						v8 = g27;
						// branch -> 0x5d7e0
						while (true) {
							// 0x5d7e0
							if (*(int32_t *)v8 != 0) {
							lab_0x5d7ec:
								// 0x5d7ec
								v5 = 1;
								// branch -> 0x5d7f0
							}
						lab_0x5d7f0:
							// 0x5d7f0
							if (*(int32_t *)(v8 + 12) != 0) {
								// 0x5d800
								v5 = 1;
								// branch -> 0x5d804
							}
							// 0x5d804
							if (*(int32_t *)(v8 + 24) != 0) {
								// 0x5d810
								v5 = 1;
								// branch -> 0x5d814
							}
							int32_t v20 = v9 - 1; // 0x5d818
							if (v20 == 0) {
								// break -> 0x5d81c
								break;
							}
							v9 = v20;
							v8 += 4;
							// continue -> 0x5d7e0
						}
						// 0x5d81c
						g37 = 15;
						int32_t v21 = random(13) + 1; // 0x5d82c
						if (v5 == 0) {
							// 0x5d834
							// branch -> 0x5d8d4
							// 0x5d8d4
							return 0;
						}
						// 0x5d83c
						int32_t v22; // r6
						int32_t v23; // 0x5d894
						int32_t v24; // 0x5d8a0
						int32_t v25; // 0x5d8b0
						int32_t v26; // 0x5d8c4
						int32_t v27; // 0x5d8a8
						if (v21 > 0) {
							int32_t v28 = 0;
							// branch -> 0x5d848
							int32_t v29; // 0x5d88c37
							while (true) {
							lab_0x5d848:;
								int32_t v30 = 4 * v28; // 0x5d84c
								int32_t v31 = v21;
								// branch -> 0x5d848
								for (uint32_t i = 0; i < 3; i++) {
									// 0x5d848
									v29 = v31;
									if (*(int32_t *)(12 * i + v30 + g27) != 0) {
										int32_t v32 = v31 - 1; // 0x5d860
										if (v32 < 1) {
											// 0x5d88c
											// branch -> 0x5d894
											// 0x5d894
											v23 = g36;
											v24 = i - 1 + g33;
											v27 = *(int32_t *)(g23 - 0x768c);
											v22 = g35 - 1 + v28;
											v25 = g30 + 368 * 0x1000000 * v23 / 0x1000000;
											*(int32_t *)(v25 + 12) = v24;
											*(int32_t *)(v25 + 16) = v22;
											v26 = v22 + 112 * v24;
											*(char *)(*(int32_t *)v27 + v26) = (char)(v23 + 1);
											// branch -> 0x5d8d4
											// 0x5d8d4
											return 1;
										}
										v29 = v32;
									}
									// 0x5d86c
									// PHI copies at the loop end
									v31 = v29;
									// loop 0x5d848 end
								}
								int32_t v33 = v28 + 1; // 0x5d878
								if (v33 == 3) {
									// break -> 0x5d888
									break;
								}
								v21 = v29;
								v28 = v33;
								// continue -> 0x5d848
							}
							// 0x5d888
							v21 = v29;
							v28 = 0;
							// branch -> 0x5d848
							goto lab_0x5d848;
						}
						// 0x5d894
						v23 = g36;
						v24 = g33 - 1;
						v27 = *(int32_t *)(g23 - 0x768c);
						v22 = g35 - 1;
						v25 = g30 + 368 * 0x1000000 * v23 / 0x1000000;
						*(int32_t *)(v25 + 12) = v24;
						*(int32_t *)(v25 + 16) = v22;
						v26 = v22 + 112 * v24;
						*(char *)(*(int32_t *)v27 + v26) = (char)(v23 + 1);
						// branch -> 0x5d8d4
						// 0x5d8d4
						return 1;
					}
					// 0x5d7a0
					v18 = v5;
					v11 = v19;
					// branch -> 0x5d7a0
				}
			}
			// 0x5d7c0
			v16 = v14 + 4;
			g28 = v16;
			v17 = v13 + 1;
			v5 = v17;
			if (v17 <= v12) {
				goto lab_0x5d7c0;
			}
			// 0x5d7c8
			// branch -> 0x5d7d0
		}
	}
	// 0x5d7d0
	v5 = 0;
	v9 = 3;
	v8 = v2;
	// branch -> 0x5d7e0
	while (true) {
		// 0x5d7e0
		if (*(int32_t *)v8 == 0) {
			goto lab_0x5d7f0;
		}
		goto lab_0x5d7ec;
	}
}

// Address range: 0x5d8e8 - 0x5d9b0
int32_t function_5d8e8(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x5d8e8
	g38 = a3;
	g37 = a2;
	g34 = a1;
	int32_t v1 = g10; // 0x5d8ec
	g26 = g34;
	int32_t v2 = function_5d75c(); // 0x5d908
	int32_t result = v2;           // 0x5d9ac
	if (v2 != 0) {
	lab_0x5d99c:
		// 0x5d99c
		g10 = v1;
		return result;
	}
	// 0x5d914
	g31 = 2;
	int32_t v3 = 2; // 0x5d918
	                // branch -> 0x5d918
lab_0x5d918:
	while (true) {
		int32_t v4 = -v3; // 0x5d918
		g35 = v4;
		g30 = v4;
		int32_t v5 = v3; // 0x5d990
		int32_t v6;      // 0x5d990
		if (v3 >= v4) {
			int32_t v7 = v3; // 0x5d97c2
			while (true) {
				// 0x5d924
				g29 = v4;
				int32_t v8 = g27 + v4; // 0x5d928
				g32 = v8;
				int32_t v9;  // 0x5d984
				int32_t v10; // 0x5d988
				if (v4 > v7) {
					v10 = v7;
					v9 = v4;
				lab_0x5d984:;
					int32_t v11 = v9 + 1; // 0x5d984
					g30 = v11;
					if (v11 > v10) {
						// 0x5d990
						v6 = v10 + 1;
						g31 = v6;
						if (v6 >= 50) {
							result = 0;
							// break (via goto) -> 0x5d99c
							goto lab_0x5d99c;
						}
						v3 = v6;
						// continue (via goto) -> 0x5d918
						goto lab_0x5d918;
					} else {
						// 0x5d984
						v7 = v10;
						v4 = g35;
						// branch -> 0x5d924
						continue;
					}
					// 0x5d99c
					g10 = v1;
					return result;
				}
				while (true) {
					int32_t v12 = g26 + v4; // 0x5d930
					g33 = v12;
					if (function_5d584(v12, v8) != 0) {
						int32_t v13 = g28;                                     // 0x5d948
						int32_t v14 = g36 + 368 * 0x1000000 * v13 / 0x1000000; // 0x5d958
						*(int32_t *)(v14 + 12) = g33;
						*(int32_t *)(v14 + 16) = g32;
						int32_t result2 = *(int32_t *)*(int32_t *)(g23 - 0x768c); // 0x5d96c
						*(char *)(result2 + g32 + 112 * g33) = (char)(v13 + 1);
						// branch -> 0x5d99c
						// 0x5d99c
						g10 = v1;
						return result2;
					}
					int32_t v15 = g29 + 1; // 0x5d978
					g29 = v15;
					int32_t v16 = g31; // 0x5d97c
					if (v15 > v16) {
						// 0x5d97c
						v10 = v16;
						v9 = g30;
						// branch -> 0x5d984
						goto lab_0x5d984;
					} else {
						// 0x5d978
						v8 = g32;
						v4 = v15;
						// branch -> 0x5d930
						continue;
					}
					// 0x5d99c
					g10 = v1;
					return result;
				}
				// 0x5d99c
				g10 = v1;
				return result;
			}
		}
		// 0x5d990
		v6 = v5 + 1;
		g31 = v6;
		if (v6 >= 50) {
			// break -> 0x5d99c
			break;
		}
		v3 = v6;
		// continue -> 0x5d918
	}
	// 0x5d99c
	g10 = v1;
	return 0;
}

// Address range: 0x5d9b0 - 0x5da44
int32_t function_5d9b0(int32_t a1, int32_t a2, int32_t *a3, int32_t a4)
{
	// 0x5d9b0
	g39 = a4;
	g38 = (int32_t)a3;
	int32_t result2 = a1; // r3
	int32_t v1 = g10;     // 0x5d9b4
	int32_t v2 = 1;       // r30
	int32_t v3 = 1;       // 0x5d9d4
	// branch -> 0x5d9d4
	while (true) {
		int32_t v4 = -v3; // 0x5d9d4
		int32_t v5 = v4;  // r31
		int32_t v6 = v4;  // r29
		int32_t v7 = v3;  // 0x5da24
		int32_t v8;       // 0x5da24
		if (v3 >= v4) {
			int32_t v9; // 0x5da1c
			while (true) {
				// 0x5d9e0
				*(int32_t *)g39 = a2 + v4;
				int32_t v10 = v5; // r28
				int32_t v11 = v2; // 0x5da103
				v9 = v11;
				int32_t v12; // 0x5da18
				if (v5 <= v11) {
					while (true) {
						// 0x5d9f0
						*(int32_t *)g38 = a1 + v5;
						int32_t v13 = function_5d584(g38, g39); // 0x5da00
						result2 = v13;
						int32_t result = v13; // 0x5da40
						if (v13 == 0) {
							int32_t v14 = v10 + 1; // 0x5da0c
							v10 = v14;
							int32_t v15 = v2; // 0x5da10
							if (v14 > v15) {
								v9 = v15;
								// break -> 0x5da18
								break;
							}
							v5 = v14;
							// continue -> 0x5d9f0
							continue;
						}
						// 0x5da30
						g10 = v1;
						return result;
					}
					// 0x5da18
					v12 = v6 + 1;
					v6 = v12;
					if (v12 > v9) {
						// break -> 0x5da24
						break;
					}
					v4 = v12;
					// continue -> 0x5d9e0
					continue;
				}
				// 0x5da18
				v12 = v6 + 1;
				v6 = v12;
				if (v12 > v9) {
					// break -> 0x5da24
					break;
				}
				v4 = v12;
				// continue -> 0x5d9e0
			}
			// 0x5da24
			v8 = v9 + 1;
			v2 = v8;
			if (v8 >= 50) {
				// break -> 0x5da30
				break;
			}
			v3 = v8;
			// continue -> 0x5d9d4
			continue;
		}
		// 0x5da24
		v8 = v7 + 1;
		v2 = v8;
		if (v8 >= 50) {
			// break -> 0x5da30
			break;
		}
		v3 = v8;
		// continue -> 0x5d9d4
	}
	// 0x5da30
	// branch -> 0x5da30
	// 0x5da30
	g10 = v1;
	return result2;
}

// Address range: 0x5da44 - 0x5daa8
int32_t function_5da44(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x7690) + 368 * a1;               // 0x5da4c
	int32_t v1 = *(int32_t *)(result + 348) + *(int32_t *)(result + 340); // 0x5da58
	int32_t v2 = v1;                                                      // 0x5da7c
	if (v1 >= 1) {
		// 0x5da64
		v2 = *(int32_t *)(result + 196) * v1;
		// branch -> 0x5da6c
	}
	int32_t v3 = v2; // 0x5da8c
	if (v2 <= 0xffffffff) {
		// 0x5da74
		v3 = *(int32_t *)(result + 196) / v2;
		// branch -> 0x5da80
	}
	int32_t v4 = *(int32_t *)(result + 344) + v3 + *(int32_t *)(result + 336); // 0x5da90
	int32_t v5;                                                                // 0x5daa0
	if (v4 <= 0) {
		// 0x5da98
		v5 = 1;
		// branch -> 0x5da9c
	} else {
		v5 = v4;
	}
	// 0x5da9c
	*(int32_t *)(result + 200) = v5;
	return result;
}

// Address range: 0x5daa8 - 0x5dbf8
int32_t function_5daa8(int32_t a1, int32_t a2)
{
	int32_t v1 = a2; // r26
	g35 = *(int32_t *)(g23 - 0x769c);
	g36 = *(int32_t *)(g23 - 0x7690);
	if (a2 == 0) {
		// 0x5dacc
		v1 = 1;
		// branch -> 0x5dad0
	}
	// 0x5dad0
	g37 = 37;
	int32_t v2 = random(14) + 1; // 0x5dae0
	if (v2 > 0) {
		int32_t v3 = 1; // 0x5db18
		// branch -> 0x5daf0
		while (true) {
			int32_t v4 = *(int32_t *)(56 * v3 + 12 + g35); // 0x5daf8
			int32_t v5 = v2;                               // 0x5db4c
			if (v4 != -1 && v1 >= v4) {
				// 0x5db0c
				g29 = v3;
				v5 = v2 - 1;
				// branch -> 0x5db14
			}
			int32_t v6 = v3 + 1; // 0x5db18
			int32_t v7;          // 0x5daf06
			if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
				// 0x5db20
				v7 = v6;
				switch (v3) {
				case 31: {
					// 0x5db34
					v7 = 33;
					// branch -> 0x5db4c
					break;
				}
				case 33: {
					// 0x5db3c
					v7 = 35;
					// branch -> 0x5db4c
					break;
				}
				case 36: {
				lab_0x5db48:
					// 0x5db48
					v7 = 1;
					// branch -> 0x5db4c
					break;
				}
				}
			lab_0x5db4c:
				// 0x5db4c
				if (v5 <= 0) {
					// break (via goto) -> 0x5db4c
					goto lab_0x5db4c_2;
				}
				v2 = v5;
				v3 = v7;
				// continue -> 0x5daf0
				continue;
			} else {
				// 0x5db40
				if (v6 == 37) {
					goto lab_0x5db48;
				}
				v7 = v6;
				goto lab_0x5db4c;
			}
		}
	lab_0x5db4c_2:;
		// 0x5db4c
		// branch -> 0x5db54
	}
	int32_t v8 = 56 * g29; // 0x5db54
	g30 = v8;
	int32_t v9 = 368 * a1; // 0x5db58
	g31 = v9;
	int32_t v10 = v8 + g35 + 4; // 0x5db60
	g33 = v10;
	int32_t v11 = g36 + v9; // 0x5db64
	g32 = v11;
	function_e86d0(v11 + 61, *(int32_t *)v10);
	function_e86d0(g32 + 125, *(int32_t *)g33);
	*(int32_t *)(g32 + 224) = g29;
	int32_t v12 = g30 + g35; // 0x5db80
	int32_t result = v12;    // r3
	*(char *)(g32 + 353) = (char)*(int32_t *)(v12 + 28);
	int32_t *v13 = (int32_t *)(g32 + 196);   // 0x5db8c
	int32_t v14 = *(int32_t *)(result + 48); // 0x5db90
	*v13 = v14 + *v13;
	int32_t *v15 = (int32_t *)(g32 + 200); // 0x5db9c
	*v15 = v14 + *v15;
	unsigned char v16 = *(char *)(result + 2); // 0x5dba8
	int32_t v17 = v16;                         // 0x5dba8
	if (v16 == 0) {
		// 0x5dbb4
		*(int32_t *)(g32 + 192) = 87;
		// branch -> 0x5dbbc
	}
	// 0x5dbbc
	if (v17 == 1) {
		int32_t v18 = g31 + g36; // 0x5dbc4
		result = v18;
		*(int32_t *)(v18 + 192) = 88;
		// branch -> 0x5dbd0
	}
	// 0x5dbd0
	if (v17 == 2) {
		int32_t v19 = g31 + g36; // 0x5dbd8
		result = v19;
		*(int32_t *)(v19 + 192) = 86;
		// branch -> 0x5dbe4
	}
	// 0x5dbe4
	return result;
}

// Address range: 0x5dbf8 - 0x5de28
int32_t function_5dbf8(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	// 0x5dbf8
	g28 = a1;
	g33 = *(int32_t *)(g23 - 0x5f74);
	g35 = g23 + 0x66f4;
	g29 = a3;
	g36 = *(int32_t *)(g23 - 0x7690);
	g37 = 10;
	g30 = -1;
	int32_t v1; // bp-1192
	int32_t v2; // 0x5dd98
	int32_t v3; // 0x5dd68
	int32_t v4; // 0x5dd64
	int32_t v5; // 0x5dda4
	int32_t v6;
	if (random(15) != 0) {
		// 0x5dc3c
		if (a4 == 0) {
			// 0x5dd60
			v4 = g36 + 368 * g28;
			g31 = v4;
			v3 = v4 + 125;
			g32 = v3;
			g34 = v3;
			if (control_WriteStringToBuffer(v3) == 0) {
				// 0x5dd7c
				g34 = g32;
				g37 = *(int32_t *)(76 * *(int32_t *)(g31 + 360) + 0x3858 + g23 + 20);
				strcpy();
				v2 = g30;
				if (v2 == -1) {
					// 0x5dd7c
					v6 = &v1;
					// branch -> 0x5ddc4
				} else {
					// 0x5dda0
					v5 = &v1;
					g38 = *(int32_t *)(g35 + 48 * v2);
					g37 = g33;
					sprintf();
					g34 = g32;
					g37 = v5;
					strcpy();
					v6 = v5;
					// branch -> 0x5ddc4
				}
				// 0x5ddc4
				g37 = *(int32_t *)(g23 - 0x5f78);
				g38 = g32;
				sprintf();
				g34 = g32;
				g37 = v6;
				strcpy();
				if (*(char *)(g27 + g36 + 60) == 0) {
					// 0x5de00
					g34 = g31 + 61;
					g37 = g32;
					strcpy();
					// branch -> 0x5de0c
				}
			}
			// 0x5de0c
			return function_5da44(g28);
		}
	}
	int32_t v7 = g35;  // 0x5dc44
	int32_t v8 = v7;   // r6
	int32_t v9;        // bp-1064
	int32_t v10 = &v9; // 0x5dc48
	g37 = 0;
	int32_t v11 = 0; // r3
	int32_t v12 = 0; // r7
	bool v13 = true; // 0x5dcd4
	if (*(int32_t *)(v7 + 4) != -1) {
		while (true) {
			// 0x5dc5c
			int32_t v14; // 0x5dcc0
			int32_t v15; // 0x5dcc0
			if (__asm_rlwinm_(*(int32_t *)(v7 + 20), 0, 23, 23) != 0) {
				int32_t v16 = v8; // 0x5dc68
				if ((int32_t) * (char *)(v16 + 16) <= a2) {
					// 0x5dc78
					if (a4 != 0) {
						// 0x5dc84
						if (*(int32_t *)(v16 + 32) == 0) {
							// 0x5dc94
							// branch -> 0x5dcc0
						lab_0x5dcc0_2:
							// 0x5dcc0
							v14 = v8;
							v15 = v14 + 48;
							v8 = v15;
							v12++;
							if (*(int32_t *)(v14 + 52) == -1) {
								// break -> 0x5dcc8
								break;
							}
							v7 = v15;
							// continue -> 0x5dc5c
							continue;
						}
					}
					// 0x5dc9c
					*(int32_t *)(v11 + v10) = v12;
					g37++;
					int32_t v17 = v11 + 4; // 0x5dca4
					v11 = v17;
					if (*(int32_t *)(v8 + 28) == 0) {
						goto lab_0x5dcc0_2;
					}
					// 0x5dcb4
					*(int32_t *)(v10 + v17) = v12;
					g37++;
					v11 += 4;
					// branch -> 0x5dcc0
					goto lab_0x5dcc0_2;
				}
			}
			// 0x5dcc0
			v14 = v8;
			v15 = v14 + 48;
			v8 = v15;
			v12++;
			if (*(int32_t *)(v14 + 52) == -1) {
				// break -> 0x5dcc8
				break;
			}
			v7 = v15;
			// continue -> 0x5dc5c
		}
		// 0x5dcc8
		v13 = g37 == 0;
		// branch -> 0x5dcd4
	}
	// 0x5dcd4
	if (!v13) {
		int32_t v18 = *(int32_t *)(4 * random(16) + v10); // 0x5dcec
		g31 = 368 * g28 + 125 + g36;
		g38 = *(int32_t *)(g35 + 48 * v18);
		g37 = g33;
		sprintf();
		g34 = g31;
		g37 = &v1;
		strcpy();
		int32_t v19 = g27 + g35; // 0x5dd24
		*(char *)(g32 + g36 + 60) = 1;
		int32_t v20 = *(int32_t *)(v19 + 4);  // 0x5dd38
		int32_t v21 = *(int32_t *)(v19 + 12); // 0x5dd40
		int32_t v22 = *(int32_t *)(v19 + 36); // 0x5dd44
		int32_t v23 = *(int32_t *)(v19 + 40); // 0x5dd48
		int32_t v24 = *(int32_t *)(v19 + 44); // 0x5dd4c
		function_5e350(g28, v20, *(int32_t *)(v19 + 8), v21, v22, v23, v24);
		*(char *)(g31 + 332) = (char)(0x1000000 * *(int32_t *)g32 / 0x1000000);
		// branch -> 0x5dd60
	}
	// 0x5dd60
	v4 = g36 + 368 * g28;
	g31 = v4;
	v3 = v4 + 125;
	g32 = v3;
	g34 = v3;
	if (control_WriteStringToBuffer(v3) == 0) {
		// 0x5dd7c
		g34 = g32;
		g37 = *(int32_t *)(76 * *(int32_t *)(g31 + 360) + 0x3858 + g23 + 20);
		strcpy();
		v2 = g30;
		if (v2 == -1) {
			// 0x5dd7c
			v6 = &v1;
			// branch -> 0x5ddc4
		} else {
			// 0x5dda0
			v5 = &v1;
			g38 = *(int32_t *)(g35 + 48 * v2);
			g37 = g33;
			sprintf();
			g34 = g32;
			g37 = v5;
			strcpy();
			v6 = v5;
			// branch -> 0x5ddc4
		}
		// 0x5ddc4
		g37 = *(int32_t *)(g23 - 0x5f78);
		g38 = g32;
		sprintf();
		g34 = g32;
		g37 = v6;
		strcpy();
		if (*(char *)(g27 + g36 + 60) == 0) {
			// 0x5de00
			g34 = g31 + 61;
			g37 = g32;
			strcpy();
			// branch -> 0x5de0c
		}
	}
	// 0x5de0c
	return function_5da44(g28);
}

// Address range: 0x5de28 - 0x5e014
int32_t function_5de28(int32_t a1, int32_t a2)
{
	// 0x5de28
	g31 = a1;
	g29 = *(int32_t *)(g23 - 0x769c);
	g30 = *(int32_t *)(g23 - 0x7690);
	g33 = g38;
	g37 = 4;
	int32_t result;
	if (random(17) == 0) {
		// 0x5de60
		g40 = g33;
		result = function_5eec8(g31, a2 / 2 | a2 & -0x80000000, a2, 256);
		// branch -> 0x5e000
	} else {
		int32_t v1 = a2 / 2 | a2 & -0x80000000; // 0x5de7c
		g37 = 37;
		int32_t v2 = random(18) + 1; // 0x5de9c
		int32_t v3 = g29;
		if (v2 > 0) {
			int32_t v4 = 1; // 0x5ded4
			// branch -> 0x5deac
			while (true) {
				int32_t v5 = *(int32_t *)(56 * v4 + 16 + v3); // 0x5deb4
				int32_t v6 = v2;                              // 0x5df08
				if (v5 != -1 && (v1 == 0 ? 1 : v1) >= v5) {
					// 0x5dec8
					g35 = v4;
					v6 = v2 - 1;
					// branch -> 0x5ded0
				}
				int32_t v7 = v4 + 1; // 0x5ded4
				int32_t v8;          // 0x5deac16
				if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
					// 0x5dedc
					v8 = v7;
					switch (v4) {
					case 31: {
						// 0x5def0
						v8 = 33;
						// branch -> 0x5df08
						break;
					}
					case 33: {
						// 0x5def8
						v8 = 35;
						// branch -> 0x5df08
						break;
					}
					case 36: {
					lab_0x5df04:
						// 0x5df04
						v8 = 1;
						// branch -> 0x5df08
						break;
					}
					}
				lab_0x5df08:
					// 0x5df08
					if (v6 <= 0) {
						// break (via goto) -> 0x5df08
						goto lab_0x5df08_2;
					}
					v2 = v6;
					v4 = v8;
					// continue -> 0x5deac
					continue;
				} else {
					// 0x5defc
					if (v7 == 37) {
						goto lab_0x5df04;
					}
					v8 = v7;
					goto lab_0x5df08;
				}
			}
		lab_0x5df08_2:;
			// 0x5df08
			// branch -> 0x5df10
		}
		// 0x5df10
		g37 = *(int32_t *)(g23 - 0x5f78);
		int32_t v9;             // bp-120
		int32_t v10 = &v9;      // 0x5df18
		int32_t v11 = 56 * g35; // 0x5df1c
		g25 = v11;
		int32_t v12 = g30 + 368 * g31 + 61; // 0x5df24
		g28 = v12;
		g38 = v12;
		g36 = v11 + v3 + 4;
		sprintf();
		g34 = v10;
		if (control_WriteStringToBuffer(v10) == 0) {
			// 0x5df48
			g37 = *(int32_t *)(g23 - 0x5f7c);
			g38 = *(int32_t *)g36;
			sprintf();
			// branch -> 0x5df58
		}
		// 0x5df58
		g34 = g28;
		g37 = v10;
		strcpy();
		g34 = g27 + 125;
		g37 = v10;
		strcpy();
		int32_t v13 = g26 + g30; // 0x5df70
		g36 = v13;
		int32_t v14 = g25 + g29; // r26
		*(int32_t *)(v13 + 224) = g35;
		int32_t v15 = *(int32_t *)(v14 + 40); // 0x5df80
		g25 = v15;
		g37 = 1 - v15 + *(int32_t *)(v14 + 44);
		int32_t v16 = random(19); // 0x5df90
		int32_t v17 = g36 + 228;  // 0x5df98
		*(int32_t *)v17 = g25 + v16;
		int32_t v18 = g36; // 0x5dfac
		*(int32_t *)(v18 + 232) = *(int32_t *)(v18 + 228);
		*(char *)(g36 + 353) = (char)*(int32_t *)(v14 + 28);
		int32_t v19 = *(int32_t *)v17;                                                                   // 0x5dfcc
		int32_t *v20 = (int32_t *)(g36 + 196);                                                           // 0x5dfd0
		uint64_t v21 = 0x66666667 * (int64_t)(v19 * *(int32_t *)(v14 + 52));                             // 0x5dfd8
		int32_t v22 = v21 / 0x8000000000000000;                                                          // 0x5dfe0
		int32_t v23 = ((int32_t)(v21 / 0x100000000) & -0x80000000 | (int32_t)(v21 / 0x200000000)) + v22; // 0x5dfe4
		*v20 = v23 + *v20;
		int32_t *v24 = (int32_t *)(g36 + 200); // 0x5dff0
		*v24 = *v24 + v23;
		result = function_5dbf8(g31, g32, g35, g33, v23, v22, 0x66666667);
		// branch -> 0x5e000
	}
	// 0x5e000
	return result;
}

// Address range: 0x5e014 - 0x5e2bc
int32_t function_5e014(int32_t a1, int32_t a2, int32_t a3)
{
	g26 = a2;
	int32_t v1 = g10; // 0x5e01c
	g25 = a1;
	g27 = a3;
	g33 = *(int32_t *)(g23 - 0x7184);
	g35 = *(int32_t *)(g23 - 0x77e4);
	int32_t v2 = *(int32_t *)(g23 - 0x7690) + 368 * a1; // 0x5e03c
	g32 = v2;
	g34 = v2 + 61;
	int32_t v3 = g23 + 0x3858 + 76 * a2; // 0x5e058
	g36 = v3;
	int32_t v4 = v2 + 8; // 0x5e068
	*(int32_t *)v4 = (int32_t) * (char *)(v3 + 12);
	g31 = v4;
	int32_t v5 = v2 + 192; // 0x5e070
	*(int32_t *)v5 = *(int32_t *)(g36 + 8);
	g29 = v5;
	g37 = *(int32_t *)(g36 + 16);
	strcpy();
	g34 = g32 + 125;
	g37 = *(int32_t *)(v3 + 16);
	strcpy();
	int32_t v6 = g36; // 0x5e088
	*(char *)(g32 + 189) = *(char *)(v6 + 5);
	*(char *)(g32 + 190) = *(char *)(g36 + 4);
	*(int32_t *)(g32 + 204) = *(int32_t *)(g36 + 32);
	*(int32_t *)(g32 + 208) = *(int32_t *)(g36 + 36);
	int32_t v7 = g36; // 0x5e0b0
	g37 = 1 - *(int32_t *)(v7 + 40) + *(int32_t *)(v7 + 44);
	int32_t v8 = random(20); // 0x5e0c0
	int32_t v9 = 0;          // r4
	int32_t v10 = g32;       // 0x5e0cc
	g30 = v10 + 196;
	*(int32_t *)(v10 + 212) = *(int32_t *)(v6 + 40) + v8;
	int32_t v11 = -1; // r0
	*(int32_t *)(g32 + 216) = *(int32_t *)(g36 + 52);
	*(int32_t *)(g32 + 220) = *(int32_t *)(g36 + 56);
	*(int32_t *)(g32 + 224) = *(int32_t *)(g36 + 60);
	*(char *)(g32 + 60) = (char)v9;
	int32_t v12 = *(int32_t *)(g36 + 68); // 0x5e0f8
	*(int32_t *)(g32 + 196) = v12;
	*(int32_t *)(g32 + 200) = v12;
	*(int32_t *)(g32 + 336) = v9;
	*(int32_t *)(g32 + 340) = v9;
	*(int32_t *)(g32 + 344) = v9;
	*(int32_t *)(g32 + 348) = v9;
	*(int32_t *)(g32 + 244) = v9;
	*(int32_t *)(g32 + 248) = v9;
	*(int32_t *)(g32 + 252) = v9;
	*(int32_t *)(g32 + 256) = v9;
	*(int32_t *)(g32 + 260) = v9;
	*(int32_t *)(g32 + 264) = v9;
	*(int32_t *)(g32 + 268) = v9;
	*(int32_t *)(g32 + 228) = v9;
	*(int32_t *)(g32 + 232) = v9;
	int32_t v13 = *(int32_t *)(g36 + 28); // 0x5e138
	*(int32_t *)(g32 + 236) = v13;
	*(int32_t *)(g32 + 240) = v13;
	*(char *)(g32 + 352) = *(char *)(g36 + 48);
	*(char *)(g32 + 353) = *(char *)(g36 + 49);
	unsigned char v14 = *(char *)(g36 + 50); // 0x5e154
	int32_t result = v14;                    // r3
	*(char *)(g32 + 354) = v14;
	*(int32_t *)(g32 + 272) = v9;
	*(int32_t *)(g32 + 276) = v9;
	*(int32_t *)(g32 + 280) = v9;
	*(int32_t *)(g32 + 360) = g26;
	*(int32_t *)(g32 + 292) = v9;
	*(int32_t *)(g32 + 296) = v9;
	*(int32_t *)(g32 + 300) = v9;
	*(char *)(g32 + 304) = (char)v9;
	*(char *)(g32 + 305) = (char)v9;
	*(int32_t *)(g32 + 312) = v9;
	*(int32_t *)(g32 + 316) = v9;
	*(int32_t *)(g32 + 320) = v9;
	*(int32_t *)(g32 + 324) = v9;
	*(int32_t *)(g32 + 328) = v9;
	*(int32_t *)(g32 + 284) = v9;
	*(int32_t *)(g32 + 288) = v9;
	*(char *)(g32 + 332) = (char)v11;
	*(char *)(g32 + 333) = (char)v11;
	if (*(int32_t *)(g32 + 220) == 24) {
		// 0x5e1b0
		result = function_5daa8(g25, g27);
		// branch -> 0x5e1bc
	}
	// 0x5e1bc
	if (*(int32_t *)g31 != 11) {
		// 0x5e2a8
		g10 = v1;
		return result;
	}
	int32_t v15 = g33; // 0x5e1f0
	if (*(int32_t *)g33 == 0) {
		// 0x5e1d4
		g37 = 10 * (int32_t) * (char *)g35;
		g28 = 5 * (int32_t) * (char *)g35 + random(21);
		v15 = g33;
		// branch -> 0x5e1f0
	}
	int32_t v16 = v15; // 0x5e220
	if (*(int32_t *)v15 == 1) {
		// 0x5e1fc
		g37 = 10 * ((int32_t) * (char *)g35 + 16);
		g28 = 5 * (int32_t) * (char *)g35 + 80 + random(21);
		v16 = g33;
		// branch -> 0x5e220
	}
	// 0x5e220
	int32_t v17; // 0x5e24c
	if (*(int32_t *)v16 == 2) {
		// 0x5e22c
		g37 = 10 * ((int32_t) * (char *)g35 + 32);
		v17 = 5 * (int32_t) * (char *)g35 + 160 + random(21);
		g28 = v17;
		// branch -> 0x5e250
	} else {
		// 0x5e220
		v17 = g28;
		// branch -> 0x5e250
	}
	int32_t v18 = *(int32_t *)(g23 - 0x7794); // 0x5e250
	result = v18;
	int32_t v19 = v17; // 0x5e268
	if (*(char *)v18 == 4) {
		int32_t v20 = v17 / 8 + v17; // 0x5e264
		g28 = v20;
		v19 = v20;
		// branch -> 0x5e268
	}
	int32_t v21 = v19; // 0x5e278
	if (v19 >= 0x1389) {
		// 0x5e270
		g28 = 0x1388;
		v21 = 0x1388;
		// branch -> 0x5e274
	}
	// 0x5e274
	*(int32_t *)g30 = v21;
	if (v21 >= 2500) {
		// 0x5e280
		*(int32_t *)g29 = 6;
		// branch -> 0x5e2a8
		// 0x5e2a8
		g10 = v1;
		return result;
	}
	// 0x5e28c
	if (g28 > 1000) {
		// 0x5e2a0
		*(int32_t *)g29 = 5;
		// branch -> 0x5e2a8
	} else {
		// 0x5e294
		*(int32_t *)g29 = 4;
		// branch -> 0x5e2a8
	}
	// 0x5e2a8
	g10 = v1;
	return result;
}

// Address range: 0x5e2bc - 0x5e2f8
int32_t function_5e2bc(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x5e2bc
	g36 = a1;
	g37 = 1 - a1 + a2;
	int32_t result = g36 + random(22); // 0x5e2e8
	g36 = v1;
	return result;
}

// Address range: 0x5e2f8 - 0x5e350
int32_t function_5e2f8(int32_t a1, int32_t a2, int32_t a3, int32_t result, int32_t result2)
{
	// 0x5e2f8
	if (a3 == a2) {
		// 0x5e300
		return result;
	}
	// 0x5e308
	if (result2 == result) {
		// 0x5e310
		return result2;
	}
	uint64_t v1 = 0x51eb851f * (int64_t)(100 * (a1 - a2) / (a3 - a2) * (result2 - result)); // 0x5e338
	int32_t v2 = (int32_t)(v1 / 0x100000000) >> 31;                                         // 0x5e33c
	return (v2 & -0x8000000 | (int32_t)(v1 / 0x2000000000)) + (int32_t)(v2 < 0) + result;
}

// Address range: 0x5e350 - 0x5eec8
int32_t function_5e350(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x5e354
	g32 = a3;
	g26 = *(int32_t *)(g23 - 0x76f4);
	g31 = a1;
	g24 = *(int32_t *)(g23 - 0x77ac);
	g33 = a4;
	g22 = a2;
	g27 = *(int32_t *)(g23 - 0x77a8);
	g36 = *(int32_t *)(g23 - 0x7690);
	g35 = a5;
	g30 = a6;
	g28 = a7;
	int32_t v2 = function_5e2bc(a3, a4); // 0x5e394
	g29 = v2;
	if (g22 <= 79) {
		// 0x5e3a4
		return *(int32_t *)(*(int32_t *)(g23 - 0x5f80) + 4 * g22);
	}
	int32_t v3 = 368 * g31; // 0x5ee48
	g24 = v3;
	int32_t v4 = g36 + v3; // 0x5ee4c
	int32_t v5 = v4 + 336; // 0x5ee50
	g25 = v5;
	if (*(int32_t *)v5 == 0) {
		int32_t v6 = v4 + 340; // 0x5ee60
		g26 = v6;
		if (*(int32_t *)v6 == 0) {
			int32_t result = function_5e2f8(v2, g32, g33, g35, g30); // 0x5ee80
			*(int32_t *)g25 = result;
			*(int32_t *)g26 = g28;
			// branch -> 0x5eeb4
			// 0x5eeb4
			g10 = v1;
			return result;
		}
	}
	int32_t result2 = function_5e2f8(v2, g32, g33, g35, g30); // 0x5eea4
	int32_t v7 = g24 + g36;                                   // 0x5eea8
	*(int32_t *)(v7 + 344) = result2;
	*(int32_t *)(v7 + 348) = g28;
	// branch -> 0x5eeb4
	// 0x5eeb4
	g10 = v1;
	return result2;
}

// Address range: 0x5eec8 - 0x5f280
int32_t function_5eec8(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x5eec8
	g22 = a1;
	g24 = a2;
	g31 = g23 + 0x76b4;
	g32 = *(int32_t *)(g23 - 0x5f78);
	g25 = a3;
	g33 = *(int32_t *)(g23 - 0x5f74);
	g26 = a4;
	g35 = g23 + 0x66f4;
	g36 = *(int32_t *)(g23 - 0x7690);
	g27 = g40;
	g37 = 4;
	int32_t v1 = random(23); // 0x5ef08
	int32_t v2 = v1;         // r17
	g37 = 3;
	int32_t v3 = random(23); // 0x5ef18
	g30 = v3;
	int32_t v4;     // r16
	int32_t v5;     // r3
	int32_t v6;     // r5
	int32_t v7;     // r6
	int32_t v8;     // r7
	int32_t v9;     // r8
	int32_t v10;    // bp-1096
	int32_t v11;    // bp-1224
	int32_t v12;    // 0x5ef84
	int32_t v13;    // 0x5efa0
	int32_t v14;    // 0x5efc8
	int32_t v15;    // 0x5efdc
	int32_t v16;    // 0x5efe4
	int32_t v17;    // 0x5f008
	int32_t v18;    // 0x5f01c21
	int32_t v19;    // 0x5f01c22
	int32_t v20;    // 0x5f084
	int32_t v21;    // 0x5f0c0
	int32_t v22;    // 0x5f108
	int32_t v23;    // 0x5f114
	int32_t v24;    // 0x5f120
	int32_t v25;    // 0x5f13430
	int32_t v26;    // 0x5f13431
	int32_t v27;    // 0x5f19c
	int32_t v28;    // 0x5f1f8
	int32_t v29;    // 0x5f1fc
	int32_t result; // 0x5f27c
	int32_t v30;    // 0x5f27c34
	int32_t v31;    // 0x5f27c35
	int32_t v32;    // 0x5f038
	int32_t v33;    // 0x5f040
	int32_t v34;    // 0x5f080
	int32_t v35;    // 0x5f114
	int32_t v36;    // 0x5f150
	int32_t v37;    // 0x5f198
	int32_t v38;    // 0x5f1c0
	int32_t v39;    // 0x5f1d0
	int32_t v40;    // 0x5ef88
	int32_t v41;    // 0x5efe4
	int32_t v42;    // 0x5f028
	int32_t v43;    // 0x5f068
	int32_t v44;    // 0x5f06c
	int32_t v45;    // 0x5f09c
	int32_t v46;    // 0x5f0b8
	int32_t v47;    // 0x5f140
	int32_t v48;    // 0x5f160
	int32_t v49;    // 0x5f180
	int32_t v50;    // 0x5f184
	int32_t v51;    // 0x5f1b4
	int32_t v52;    // 0x5f1c8
	int32_t v53;    // 0x5f01011
	int32_t v54;    // 0x5f084
	int32_t v55;    // 0x5f088
	int32_t v56;    // 0x5f08c
	int32_t v57;    // 0x5f090
	int32_t v58;    // 0x5f094
	int32_t v59;    // 0x5f19c
	int32_t v60;    // 0x5f1a0
	int32_t v61;    // 0x5f1a4
	int32_t v62;    // 0x5f1a8
	int32_t v63;    // 0x5f1ac
	if (v1 != 0) {
		// 0x5ef28
		if (v3 == 0) {
			// 0x5ef30
			g37 = 2;
			if (random(23) == 0) {
				// 0x5ef4c
				v2 = 0;
				// branch -> 0x5ef50
			} else {
				// 0x5ef44
				g30 = 1;
				// branch -> 0x5ef50
			}
			// 0x5ef50
			g29 = -1;
			g28 = -1;
			if (g27 == 0) {
				// 0x5ef64
				g37 = 3;
				if (random(0) != 0) {
					// 0x5ef78
					g27 = 1;
					// branch -> 0x5ef7c
				}
			}
			// 0x5ef7c
			if (v2 == 0) {
				// 0x5ef84
				v12 = g35;
				v7 = v12;
				v40 = &v10;
				v6 = v40;
				g37 = 0;
				v5 = 0;
				v9 = 0;
				v53 = *(int32_t *)(v12 + 4);
				if (v53 != -1) {
					v19 = 0;
					v41 = 0;
					v16 = 0;
					v15 = v53;
					v14 = v12;
					while (true) {
						// 0x5ef9c
						v13 = g26;
						v18 = v19;
						v17 = v14;
						int32_t v64; // 0x5f008
						int32_t v65; // 0x5f00c
						int32_t v66; // 0x5f010
						if ((v13 & *(int32_t *)(v14 + 20)) != 0) {
						lab_0x5efa8_2:;
							uint32_t v67 = (int32_t) * (char *)(v14 + 16); // 0x5efac
							if (v67 >= g24) {
								// 0x5efb8
								if (v67 <= g25) {
									// 0x5efc0
									int32_t v68; // 0x5efe419
									if (g27 != 0) {
										// 0x5efc8
										if (*(int32_t *)(v14 + 32) == 0) {
											v18 = v19;
											v17 = v14;
											v68 = v41;
										lab_0x5f008_4:
											// 0x5f008
											v64 = v17 + 48;
											v7 = v64;
											v65 = v9 + 1;
											v9 = v65;
											v66 = *(int32_t *)(v17 + 52);
											if (v66 == -1) {
												// break -> 0x5f01c
												break;
											}
											v19 = v18;
											v41 = v68;
											v16 = v65;
											v15 = v66;
											v14 = v64;
											// continue -> 0x5ef9c
											continue;
										}
									}
									// 0x5efd4
									int32_t v69; // 0x5eff0
									int32_t v70; // 0x5efe8
									int32_t v71; // 0x5efec
									if (v13 == 256) {
										// 0x5efdc
										if (v15 == 15) {
											v18 = v19;
											v17 = v14;
											v68 = v41;
											goto lab_0x5f008_4;
										}
										// 0x5efe4
										*(int32_t *)(v6 + v41) = v16;
										v70 = g37 + 1;
										g37 = v70;
										v71 = v5 + 4;
										v5 = v71;
										v69 = v7;
										if (*(int32_t *)(v69 + 28) == 0) {
											v18 = v70;
											v17 = v69;
											v68 = v71;
											goto lab_0x5f008_4;
										}
									lab_0x5effc:
										// 0x5effc
										*(int32_t *)(v6 + v71) = v9;
										int32_t v72 = g37 + 1; // 0x5f000
										g37 = v72;
										int32_t v73 = v5 + 4; // 0x5f004
										v5 = v73;
										v18 = v72;
										v17 = v7;
										v68 = v73;
										// branch -> 0x5f008
										goto lab_0x5f008_4;
									} else {
										// 0x5efe4
										*(int32_t *)(v6 + v41) = v16;
										v70 = g37 + 1;
										g37 = v70;
										v71 = v5 + 4;
										v5 = v71;
										v69 = v7;
										if (*(int32_t *)(v69 + 28) == 0) {
											v18 = v70;
											v17 = v69;
											v68 = v71;
											goto lab_0x5f008_4;
										}
										goto lab_0x5effc;
									}
									// 0x5f008
									v64 = v17 + 48;
									v7 = v64;
									int32_t v74 = v9; // 0x5f00c
									v65 = v74 + 1;
									v9 = v65;
									v66 = *(int32_t *)(v17 + 52);
									v8 = v66;
									if (v66 == -1) {
										// break -> 0x5f01c
										break;
									}
									v19 = v18;
									v41 = v68;
									v16 = v65;
									v15 = v66;
									v14 = v64;
									// continue -> 0x5ef9c
									continue;
								} else {
									v18 = v19;
									v17 = v14;
								}
							} else {
								v18 = v19;
								v17 = v14;
							}
						}
					lab_0x5f008_6:
						// 0x5f008
						v64 = v17 + 48;
						v7 = v64;
						v65 = v9 + 1;
						v9 = v65;
						v66 = *(int32_t *)(v17 + 52);
						if (v66 == -1) {
							// break -> 0x5f01c
							break;
						}
						v19 = v18;
						v16 = v65;
						v15 = v66;
						v14 = v64;
						// continue -> 0x5ef9c
					}
					// 0x5f01c
					if (v18 != 0) {
						// 0x5f024
						v42 = random(23);
						v32 = 368 * g22;
						g20 = v32;
						v33 = 48 * *(int32_t *)(4 * v42 + v40);
						g21 = v33;
						g19 = v32 + 125 + g36;
						g38 = *(int32_t *)(g35 + v33);
						g37 = g33;
						sprintf();
						g34 = g19;
						g37 = &v11;
						strcpy();
						v43 = g20 + g36;
						v44 = g21 + g35;
						*(char *)(v43 + 60) = 1;
						v34 = v44 + 4;
						v20 = v44;
						v54 = *(int32_t *)(v20 + 8);
						v55 = *(int32_t *)(v20 + 12);
						v56 = *(int32_t *)(v20 + 36);
						v57 = *(int32_t *)(v20 + 40);
						v58 = *(int32_t *)(v20 + 44);
						function_5e350(g22, *(int32_t *)v34, v54, v55, v56, v57, v58);
						v45 = *(int32_t *)v34;
						*(char *)(v43 + 332) = (char)(0x1000000 * v45 / 0x1000000);
						// branch -> 0x5f0ac
					}
					// 0x5f0ac
					if (g30 != 0) {
						// 0x5f0b4
						g37 = 0;
						v46 = &v10;
						v6 = v46;
						v8 = 0;
						v21 = g31;
						v5 = v21;
						if (*(int32_t *)(v21 + 4) != -1) {
							v26 = 0;
							v35 = v46;
							v23 = 0;
							v22 = v21;
							while (true) {
								// 0x5f0cc
								v25 = v26;
								v24 = v22;
								int32_t v75; // 0x5f120
								int32_t v76; // 0x5f124
								if ((g26 & *(int32_t *)(v22 + 20)) != 0) {
								lab_0x5f0d8_4:;
									uint32_t v77 = (int32_t) * (char *)(v22 + 16); // 0x5f0dc
									if (v77 >= g24) {
										// 0x5f0e8
										if (v77 <= g25) {
											// 0x5f0f0
											if ((v4 % 256 | (int32_t) * (char *)(v22 + 24)) != 17) {
												// 0x5f100
												int32_t v78; // 0x5f118
												if (g27 == 0) {
												lab_0x5f114:
													// 0x5f114
													*(int32_t *)v35 = v23;
													v78 = v6 + 4;
													v6 = v78;
													int32_t v79 = g37 + 1; // 0x5f11c
													g37 = v79;
													v25 = v79;
													v24 = v5;
													// branch -> 0x5f120
												} else {
													// 0x5f108
													if (*(int32_t *)(v22 + 32) != 0) {
														goto lab_0x5f114;
													}
													v25 = v26;
													v24 = v22;
													// 0x5f120
													v75 = v24 + 48;
													v5 = v75;
													v76 = v23 + 1;
													v8 = v76;
													if (*(int32_t *)(v24 + 52) == -1) {
														// break -> 0x5f134
														break;
													}
													v26 = v25;
													v23 = v76;
													v22 = v75;
													// continue -> 0x5f0cc
													continue;
												}
												// 0x5f120
												v75 = v24 + 48;
												v5 = v75;
												v76 = v8 + 1;
												v8 = v76;
												if (*(int32_t *)(v24 + 52) == -1) {
													// break -> 0x5f134
													break;
												}
												v26 = v25;
												v35 = v78;
												v23 = v76;
												v22 = v75;
												// continue -> 0x5f0cc
												continue;
											} else {
												v25 = v26;
												v24 = v22;
											}
										} else {
											v25 = v26;
											v24 = v22;
										}
									} else {
										v25 = v26;
										v24 = v22;
									}
								}
							lab_0x5f120_4:
								// 0x5f120
								v75 = v24 + 48;
								v5 = v75;
								v76 = v23 + 1;
								v8 = v76;
								if (*(int32_t *)(v24 + 52) == -1) {
									// break -> 0x5f134
									break;
								}
								v26 = v25;
								v23 = v76;
								v22 = v75;
								// continue -> 0x5f0cc
							}
							// 0x5f134
							if (v25 != 0) {
								// 0x5f13c
								v47 = random(23);
								v36 = 368 * g22;
								g20 = v36;
								g21 = 48 * *(int32_t *)(4 * v47 + v46);
								v48 = v36 + 125 + g36;
								g19 = v48;
								g37 = g32;
								g38 = v48;
								sprintf();
								g34 = g19;
								g37 = &v11;
								strcpy();
								v49 = g20 + g36;
								v50 = g21 + g31;
								*(char *)(v49 + 60) = 1;
								v37 = v50 + 4;
								v27 = v50;
								v59 = *(int32_t *)(v27 + 8);
								v60 = *(int32_t *)(v27 + 12);
								v61 = *(int32_t *)(v27 + 36);
								v62 = *(int32_t *)(v27 + 40);
								v63 = *(int32_t *)(v27 + 44);
								function_5e350(g22, *(int32_t *)v37, v59, v60, v61, v62, v63);
								v51 = *(int32_t *)v37;
								*(char *)(v49 + 333) = (char)(0x1000000 * v51 / 0x1000000);
								// branch -> 0x5f1c0
							}
							// 0x5f1c0
							v38 = 368 * g22;
							v52 = v38 + 125 + g36;
							g20 = v52;
							g34 = v52;
							v39 = control_WriteStringToBuffer(v52);
							v30 = v39;
							if (v39 == 0) {
								// 0x5f1dc
								g34 = g20;
								g37 = *(int32_t *)(76 * *(int32_t *)(v38 + g36 + 360) + g23 + 0x3858 + 20);
								v28 = strcpy();
								v29 = g29;
								v31 = v28;
								if (v29 != -1) {
									// 0x5f204
									g38 = *(int32_t *)(g35 + 48 * v29);
									g37 = g33;
									sprintf();
									g34 = g20;
									g37 = &v11;
									v31 = strcpy();
									// branch -> 0x5f228
								}
								// 0x5f228
								if (g28 != -1) {
									// 0x5f230
									g37 = g32;
									g38 = g20;
									sprintf();
									g34 = g20;
									g37 = &v11;
									v30 = strcpy();
									// branch -> 0x5f254
								} else {
									v30 = v31;
								}
							}
							// 0x5f254
							if (g29 == -1) {
								// 0x5f25c
								if (g28 != -1) {
									// 0x5f264
									result = function_5da44(g22);
									// branch -> 0x5f26c
								} else {
									result = v30;
								}
							} else {
								// 0x5f264
								result = function_5da44(g22);
								// branch -> 0x5f26c
							}
							// 0x5f26c
							return result;
						}
					}
					// 0x5f1c0
					v38 = 368 * g22;
					v52 = v38 + 125 + g36;
					g20 = v52;
					g34 = v52;
					v39 = control_WriteStringToBuffer(v52);
					v30 = v39;
					if (v39 == 0) {
						// 0x5f1dc
						g34 = g20;
						g37 = *(int32_t *)(76 * *(int32_t *)(v38 + g36 + 360) + g23 + 0x3858 + 20);
						v28 = strcpy();
						v29 = g29;
						v31 = v28;
						if (v29 != -1) {
							// 0x5f204
							g38 = *(int32_t *)(g35 + 48 * v29);
							g37 = g33;
							sprintf();
							g34 = g20;
							g37 = &v11;
							v31 = strcpy();
							// branch -> 0x5f228
						}
						// 0x5f228
						if (g28 != -1) {
							// 0x5f230
							g37 = g32;
							g38 = g20;
							sprintf();
							g34 = g20;
							g37 = &v11;
							v30 = strcpy();
							// branch -> 0x5f254
						} else {
							v30 = v31;
						}
					}
					// 0x5f254
					if (g29 == -1) {
						// 0x5f25c
						if (g28 != -1) {
							// 0x5f264
							result = function_5da44(g22);
							// branch -> 0x5f26c
						} else {
							result = v30;
						}
					} else {
						// 0x5f264
						result = function_5da44(g22);
						// branch -> 0x5f26c
					}
					// 0x5f26c
					return result;
				}
			}
			// 0x5f0ac
			if (g30 != 0) {
				// 0x5f0b4
				g37 = 0;
				v46 = &v10;
				v6 = v46;
				v8 = 0;
				v21 = g31;
				v5 = v21;
				if (*(int32_t *)(v21 + 4) != -1) {
					v26 = 0;
					v35 = v46;
					v23 = 0;
					v22 = v21;
					while (true) {
						// 0x5f0cc
						if ((g26 & *(int32_t *)(v22 + 20)) == 0) {
							v25 = v26;
							v24 = v22;
							goto lab_0x5f120_4;
						}
						goto lab_0x5f0d8_4;
					}
				}
			}
			// 0x5f1c0
			v38 = 368 * g22;
			v52 = v38 + 125 + g36;
			g20 = v52;
			g34 = v52;
			v39 = control_WriteStringToBuffer(v52);
			v30 = v39;
			if (v39 == 0) {
				// 0x5f1dc
				g34 = g20;
				g37 = *(int32_t *)(76 * *(int32_t *)(v38 + g36 + 360) + g23 + 0x3858 + 20);
				v28 = strcpy();
				v29 = g29;
				v31 = v28;
				if (v29 != -1) {
					// 0x5f204
					g38 = *(int32_t *)(g35 + 48 * v29);
					g37 = g33;
					sprintf();
					g34 = g20;
					g37 = &v11;
					v31 = strcpy();
					// branch -> 0x5f228
				}
				// 0x5f228
				if (g28 != -1) {
					// 0x5f230
					g37 = g32;
					g38 = g20;
					sprintf();
					g34 = g20;
					g37 = &v11;
					v30 = strcpy();
					// branch -> 0x5f254
				} else {
					v30 = v31;
				}
			}
			// 0x5f254
			if (g29 == -1) {
				// 0x5f25c
				if (g28 != -1) {
					// 0x5f264
					result = function_5da44(g22);
					// branch -> 0x5f26c
				} else {
					result = v30;
				}
			} else {
				// 0x5f264
				result = function_5da44(g22);
				// branch -> 0x5f26c
			}
			// 0x5f26c
			return result;
		}
	}
	// 0x5ef50
	g29 = -1;
	g28 = -1;
	v4 = 0;
	if (g27 == 0) {
		// 0x5ef64
		g37 = 3;
		if (random(0) != 0) {
			// 0x5ef78
			g27 = 1;
			// branch -> 0x5ef7c
		}
		// 0x5ef7c
		if (v2 == 0) {
			// 0x5ef84
			v12 = g35;
			v7 = v12;
			v40 = &v10;
			v6 = v40;
			g37 = 0;
			v5 = 0;
			v9 = 0;
			v53 = *(int32_t *)(v12 + 4);
			if (v53 != -1) {
				v19 = 0;
				v41 = 0;
				v16 = 0;
				v15 = v53;
				v14 = v12;
				while (true) {
					// 0x5ef9c
					v13 = g26;
					if ((v13 & *(int32_t *)(v14 + 20)) == 0) {
						v18 = v19;
						v17 = v14;
						goto lab_0x5f008_6;
					}
					goto lab_0x5efa8_2;
				}
			}
		}
		// 0x5f0ac
		if (g30 != 0) {
			// 0x5f0b4
			g37 = 0;
			v46 = &v10;
			v6 = v46;
			v8 = 0;
			v21 = g31;
			v5 = v21;
			if (*(int32_t *)(v21 + 4) != -1) {
				v26 = 0;
				v35 = v46;
				v23 = 0;
				v22 = v21;
				while (true) {
					// 0x5f0cc
					if ((g26 & *(int32_t *)(v22 + 20)) == 0) {
						v25 = v26;
						v24 = v22;
						goto lab_0x5f120_4;
					}
					goto lab_0x5f0d8_4;
				}
			}
		}
		// 0x5f1c0
		v38 = 368 * g22;
		v52 = v38 + 125 + g36;
		g20 = v52;
		g34 = v52;
		v39 = control_WriteStringToBuffer(v52);
		v30 = v39;
		if (v39 == 0) {
			// 0x5f1dc
			g34 = g20;
			g37 = *(int32_t *)(76 * *(int32_t *)(v38 + g36 + 360) + g23 + 0x3858 + 20);
			v28 = strcpy();
			v29 = g29;
			v31 = v28;
			if (v29 != -1) {
				// 0x5f204
				g38 = *(int32_t *)(g35 + 48 * v29);
				g37 = g33;
				sprintf();
				g34 = g20;
				g37 = &v11;
				v31 = strcpy();
				// branch -> 0x5f228
			}
			// 0x5f228
			if (g28 != -1) {
				// 0x5f230
				g37 = g32;
				g38 = g20;
				sprintf();
				g34 = g20;
				g37 = &v11;
				v30 = strcpy();
				// branch -> 0x5f254
			} else {
				v30 = v31;
			}
		}
		// 0x5f254
		if (g29 == -1) {
			// 0x5f25c
			if (g28 != -1) {
				// 0x5f264
				result = function_5da44(g22);
				// branch -> 0x5f26c
			} else {
				result = v30;
			}
		} else {
			// 0x5f264
			result = function_5da44(g22);
			// branch -> 0x5f26c
		}
		// 0x5f26c
		return result;
	}
	// 0x5ef7c
	if (v2 != 0) {
		// 0x5f0ac
		if (g30 == 0) {
			// 0x5f1c0
			v38 = 368 * g22;
			v52 = v38 + 125 + g36;
			g20 = v52;
			g34 = v52;
			v39 = control_WriteStringToBuffer(v52);
			if (v39 != 0) {
				// 0x5f254
				if (g29 != -1) {
					// 0x5f264
					// branch -> 0x5f26c
					// 0x5f26c
					return function_5da44(g22);
				}
				// 0x5f25c
				if (g28 != -1) {
					// 0x5f264
					result = function_5da44(g22);
					// branch -> 0x5f26c
				} else {
					result = v39;
				}
				// 0x5f26c
				return result;
			}
			// 0x5f1dc
			g34 = g20;
			g37 = *(int32_t *)(76 * *(int32_t *)(v38 + g36 + 360) + g23 + 0x3858 + 20);
			v28 = strcpy();
			v29 = g29;
			v31 = v28;
			if (v29 != -1) {
				// 0x5f204
				g38 = *(int32_t *)(g35 + 48 * v29);
				g37 = g33;
				sprintf();
				g34 = g20;
				g37 = &v11;
				v31 = strcpy();
				// branch -> 0x5f228
			}
			// 0x5f228
			if (g28 != -1) {
				// 0x5f230
				g37 = g32;
				g38 = g20;
				sprintf();
				g34 = g20;
				g37 = &v11;
				v30 = strcpy();
				// branch -> 0x5f254
			} else {
				v30 = v31;
			}
			// 0x5f254
			if (g29 == -1) {
				// 0x5f25c
				if (g28 != -1) {
					// 0x5f264
					result = function_5da44(g22);
					// branch -> 0x5f26c
				} else {
					result = v30;
				}
			} else {
				// 0x5f264
				result = function_5da44(g22);
				// branch -> 0x5f26c
			}
			// 0x5f26c
			return result;
		}
		// 0x5f0b4
		g37 = 0;
		v46 = &v10;
		v6 = v46;
		v8 = 0;
		v21 = g31;
		v5 = v21;
		if (*(int32_t *)(v21 + 4) != -1) {
			v26 = 0;
			v35 = v46;
			v23 = 0;
			v22 = v21;
			while (true) {
				// 0x5f0cc
				if ((g26 & *(int32_t *)(v22 + 20)) == 0) {
					v25 = v26;
					v24 = v22;
					goto lab_0x5f120_4;
				}
				goto lab_0x5f0d8_4;
			}
		}
		// 0x5f1c0
		v38 = 368 * g22;
		v52 = v38 + 125 + g36;
		g20 = v52;
		g34 = v52;
		v39 = control_WriteStringToBuffer(v52);
		v30 = v39;
		if (v39 == 0) {
			// 0x5f1dc
			g34 = g20;
			g37 = *(int32_t *)(76 * *(int32_t *)(v38 + g36 + 360) + g23 + 0x3858 + 20);
			v28 = strcpy();
			v29 = g29;
			v31 = v28;
			if (v29 != -1) {
				// 0x5f204
				g38 = *(int32_t *)(g35 + 48 * v29);
				g37 = g33;
				sprintf();
				g34 = g20;
				g37 = &v11;
				v31 = strcpy();
				// branch -> 0x5f228
			}
			// 0x5f228
			if (g28 != -1) {
				// 0x5f230
				g37 = g32;
				g38 = g20;
				sprintf();
				g34 = g20;
				g37 = &v11;
				v30 = strcpy();
				// branch -> 0x5f254
			} else {
				v30 = v31;
			}
		}
		// 0x5f254
		if (g29 == -1) {
			// 0x5f25c
			if (g28 != -1) {
				// 0x5f264
				result = function_5da44(g22);
				// branch -> 0x5f26c
			} else {
				result = v30;
			}
		} else {
			// 0x5f264
			result = function_5da44(g22);
			// branch -> 0x5f26c
		}
		// 0x5f26c
		return result;
	}
	// 0x5ef84
	v12 = g35;
	v7 = v12;
	v40 = &v10;
	v6 = v40;
	g37 = 0;
	v5 = 0;
	v9 = 0;
	v53 = *(int32_t *)(v12 + 4);
	if (v53 != -1) {
		v19 = 0;
		v41 = 0;
		v16 = 0;
		v15 = v53;
		v14 = v12;
		while (true) {
			// 0x5ef9c
			v13 = g26;
			if ((v13 & *(int32_t *)(v14 + 20)) == 0) {
				v18 = v19;
				v17 = v14;
				goto lab_0x5f008_6;
			}
			goto lab_0x5efa8_2;
		}
	}
	// 0x5f0ac
	if (g30 != 0) {
		// 0x5f0b4
		g37 = 0;
		v46 = &v10;
		v6 = v46;
		v8 = 0;
		v21 = g31;
		v5 = v21;
		if (*(int32_t *)(v21 + 4) != -1) {
			v26 = 0;
			v35 = v46;
			v23 = 0;
			v22 = v21;
			while (true) {
				// 0x5f0cc
				if ((g26 & *(int32_t *)(v22 + 20)) == 0) {
					v25 = v26;
					v24 = v22;
					goto lab_0x5f120_4;
				}
				goto lab_0x5f0d8_4;
			}
		}
	}
	// 0x5f1c0
	v38 = 368 * g22;
	v52 = v38 + 125 + g36;
	g20 = v52;
	g34 = v52;
	v39 = control_WriteStringToBuffer(v52);
	v30 = v39;
	if (v39 == 0) {
		// 0x5f1dc
		g34 = g20;
		g37 = *(int32_t *)(76 * *(int32_t *)(v38 + g36 + 360) + g23 + 0x3858 + 20);
		v28 = strcpy();
		v29 = g29;
		v31 = v28;
		if (v29 != -1) {
			// 0x5f204
			g38 = *(int32_t *)(g35 + 48 * v29);
			g37 = g33;
			sprintf();
			g34 = g20;
			g37 = &v11;
			v31 = strcpy();
			// branch -> 0x5f228
		}
		// 0x5f228
		if (g28 != -1) {
			// 0x5f230
			g37 = g32;
			g38 = g20;
			sprintf();
			g34 = g20;
			g37 = &v11;
			v30 = strcpy();
			// branch -> 0x5f254
		} else {
			v30 = v31;
		}
	}
	// 0x5f254
	if (g29 == -1) {
		// 0x5f25c
		if (g28 != -1) {
			// 0x5f264
			result = function_5da44(g22);
			// branch -> 0x5f26c
		} else {
			result = v30;
		}
	} else {
		// 0x5f264
		result = function_5da44(g22);
		// branch -> 0x5f26c
	}
	// 0x5f26c
	return result;
}

// Address range: 0x5f280 - 0x5f358
int32_t function_5f280(int32_t result, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7690) + 368 * result; // 0x5f298
	if (*(char *)(v1 + 190) == 4) {
		// 0x5f348
		return result;
	}
	// 0x5f2a8
	if (a3 >= 26) {
		// 0x5f2b0
		// branch -> 0x5f2b4
	}
	// 0x5f2b4
	if (*(int32_t *)(v1 + 8) > 13) {
		// 0x5f348
	}
	// 0x5f2c4
	return result;
}

// Address range: 0x5f358 - 0x5f3f8
int32_t function_5f358(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7690) + 368 * a1;                 // 0x5f368
	int32_t v2 = *(int32_t *)(v1 + 192);                                // 0x5f36c
	int32_t v3 = (int32_t) * (char *)(v2 + *(int32_t *)(g23 - 0x71d0)); // 0x5f37c
	int32_t v4 = *(int32_t *)(g23 - 0x77ac);                            // 0x5f384
	int32_t v5 = *(int32_t *)(4 * v3 + *(int32_t *)(g23 - 0x5f6c));     // 0x5f390
	int32_t v6 = 0;                                                     // r5
	*(int32_t *)(v1 + 24) = v5;
	unsigned char v7 = *(char *)(v3 + *(int32_t *)(g23 - 0x5f88)); // 0x5f39c
	*(int32_t *)(v1 + 28) = (int32_t)v7;
	*(int32_t *)(v1 + 36) = 96;
	*(int32_t *)(v1 + 40) = 16;
	*(int32_t *)(v1 + 56) = v6;
	*(int32_t *)(v1 + 52) = v6;
	int32_t result = *(int32_t *)(g23 - 0x77a8) + 0x55ec * *(int32_t *)v4; // 0x5f3bc
	if (*(char *)(result + 0x5592) == 0) {
		// 0x5f3cc
		*(int32_t *)(v1 + 32) = 1;
		*(int32_t *)(v1 + 20) = 1;
		*(char *)(v1 + 48) = (char)v6;
		return result;
	}
	int32_t result2 = *(int32_t *)(v1 + 28); // 0x5f3e0
	*(int32_t *)(v1 + 32) = result2;
	*(int32_t *)(v1 + 20) = v6;
	*(char *)(v1 + 48) = (char)1;
	return result2;
}

// Address range: 0x5f3f8 - 0x5f568
int32_t function_5f3f8(void)
{
	int32_t v1 = g36;                        // 0x5f3f8
	int32_t v2 = g10;                        // 0x5f3fc
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0x5f400
	g36 = v3;
	int32_t v4 = 232 * g34;                                        // 0x5f408
	uint16_t v5 = *(int16_t *)(*(int32_t *)(v4 + v3 + 228) + 120); // 0x5f41c
	int32_t v6 = v5;                                               // 0x5f41c
	if (__asm_rlwinm_(v6, 0, 16, 16) != 0) {
		// 0x5f428
		// branch -> 0x5f550
		// 0x5f550
		g36 = v1;
		g10 = v2;
		return -1 - (int32_t)(v5 % 0x1000);
	}
	// 0x5f438
	if (__asm_rlwinm_(v6, 0, 17, 17) != 0) {
		// 0x5f440
		// branch -> 0x5f550
		// 0x5f550
		g36 = v1;
		g10 = v2;
		return 0;
	}
	// 0x5f448
	g37 = 100;
	if (random(24) >= 41) {
		// 0x5f45c
		// branch -> 0x5f550
		// 0x5f550
		g36 = v1;
		g10 = v2;
		return 0;
	}
	// 0x5f464
	g37 = 100;
	int32_t result; // 0x5f564
	if (random(24) < 26) {
		// 0x5f480
		int32_t v7;                // bp-2056
		int32_t v8 = &v7;          // 0x5f48c
		int32_t v9 = g23 + 0x3858; // 0x5f490
		g37 = 0;
		int32_t v10 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77f0); // r7
		int32_t v11 = (int32_t) * (char *)(g36 + v4 + 196);           // r5
		int32_t v12 = 0;                                              // r9
		if (*(char *)(g23 + 0x385d) != -1) {
			int32_t v13 = 0; // 0x5f4cc
			while (true) {
				int32_t v14 = *(int32_t *)v9; // 0x5f4a8
				int32_t v15 = v14;            // r8
				int32_t v16 = v14;            // 0x5f4d0
				if (v14 == 2) {
					// 0x5f4b4
					if (v11 >= (int32_t) * (char *)(v9 + 24)) {
						int32_t v17 = g37; // 0x5f4c4
						g37 = v17 + 1;
						*(int32_t *)(v8 + 4 * v17) = v13;
						v16 = v15;
						// branch -> 0x5f4d0
					} else {
						v16 = 2;
					}
				}
				// 0x5f4d0
				if (v16 != 0) {
					// 0x5f4d8
					if (v11 >= (int32_t) * (char *)(v9 + 24)) {
						int32_t v18 = g37; // 0x5f4e8
						g37 = v18 + 1;
						*(int32_t *)(v8 + 4 * v18) = v12;
						// branch -> 0x5f4f4
					}
				}
				int32_t v19 = v9;                     // 0x5f4f4
				int32_t v20 = *(int32_t *)(v19 + 60); // 0x5f4f4
				if (v20 == 32) {
					// 0x5f500
					if (v10 == 1) {
						// 0x5f508
						g37--;
						// branch -> 0x5f50c
					}
				}
				// 0x5f50c
				if (v20 == 34) {
					// 0x5f514
					if (v10 == 1) {
						// 0x5f51c
						g37--;
						// branch -> 0x5f520
					}
				}
				int32_t v21 = v12 + 1; // 0x5f524
				v12 = v21;
				if (*(char *)(v19 + 81) == -1) {
					// break -> 0x5f538
					break;
				}
				v13 = v21;
				v9 = v19 + 76;
				// continue -> 0x5f4a8
			}
			int32_t v22 = random(24); // 0x5f53c
			// branch -> 0x5f550
			// 0x5f550
			g36 = v1;
			g10 = v2;
			return *(int32_t *)(4 * v22 + v8) + 1;
		}
		// 0x5f538
		result = *(int32_t *)(4 * random(24) + v8) + 1;
		// branch -> 0x5f550
	} else {
		// 0x5f478
		result = 1;
		// branch -> 0x5f550
	}
	// 0x5f550
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0x5f568 - 0x5f6f0
int32_t function_5f568(void)
{
	int32_t v1 = g10;                        // 0x5f568
	int32_t v2 = g34;                        // 0x5f56c
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0x5f574
	int32_t v4 = *(int32_t *)(g23 - 0x77f0); // 0x5f57c
	int32_t v5;                              // r10
	int32_t v6;                              // r11
	int32_t v7;                              // r9
	int32_t v8;                              // bp-2056
	int32_t v9;                              // 0x5f5bc
	int32_t v10;                             // 0x5f674
	int32_t v11;
	int32_t v12;       // 0x5f6b0
	int32_t v13;       // 0x5f5c0
	int32_t v14;       // 0x5f5c4
	unsigned char v15; // 0x5f5c8
	int32_t result;    // 0x5f6dc
	if (v2 == -1) {
		// 0x5f5b8
		v9 = g23;
		v13 = v9 + 0x3858;
		v7 = v13;
		v14 = &v8;
		v15 = *(char *)*(int32_t *)(v9 - 0x77e4);
		v5 = (int32_t) * (char *)v4;
		g37 = 0;
		v6 = 0;
		if (*(char *)(v9 + 0x385d) != -1) {
			v12 = 0;
			v10 = v13;
			while (true) {
				// 0x5f5ec
				if (*(int32_t *)v10 == 0) {
					goto lab_0x5f5fc;
				}
				v11 = 1;
				goto lab_0x5f600;
			}
		}
		// 0x5f6cc
		result = *(int32_t *)(4 * random(25) + v14);
		// branch -> 0x5f6e0
		// 0x5f6e0
		g10 = v1;
		return result;
	}
	uint16_t v16 = *(int16_t *)(*(int32_t *)(v3 + 232 * v2 + 228) + 120); // 0x5f590
	if (__asm_rlwinm_((int32_t)v16, 0, 16, 16) != 0) {
		// 0x5f59c
		if (*(char *)v4 == 1) {
			// 0x5f5a8
			// branch -> 0x5f6e0
			// 0x5f6e0
			g10 = v1;
			return -1 - (int32_t)(v16 % 0x1000);
		}
	}
	// 0x5f5b8
	v9 = g23;
	v13 = v9 + 0x3858;
	v7 = v13;
	v14 = &v8;
	v5 = (int32_t) * (char *)v4;
	g37 = 0;
	v6 = 0;
	if (*(char *)(v9 + 0x385d) == -1) {
		// 0x5f6cc
		result = *(int32_t *)(4 * random(25) + v14);
		// branch -> 0x5f6e0
		// 0x5f6e0
		g10 = v1;
		return result;
	}
	v12 = 0;
	v10 = v13;
	while (true) {
		// 0x5f5ec
		v11 = 1;
		if (*(int32_t *)v10 == 0) {
		lab_0x5f5fc:
			// 0x5f5fc
			v11 = 0;
			// branch -> 0x5f600
		}
	lab_0x5f600:;
		int32_t v17 = (int32_t) * (char *)(v10 + 24); // 0x5f624
		int32_t v18;
		if (g34 == -1) {
			// 0x5f620
			if (2 * (int32_t)v15 < v17) {
				// 0x5f630
				v18 = 0;
				// branch -> 0x5f634
			} else {
				v18 = v11;
			}
		} else {
			// 0x5f608
			if ((int32_t) * (char *)(v3 + 232 * g34 + 196) < v17) {
				// 0x5f618
				v18 = 0;
				// branch -> 0x5f634
			} else {
				v18 = v11;
			}
		}
		unsigned char v19 = *(char *)(v10 + 12); // 0x5f634
		int32_t v20 = v18;
		if (v19 == 0) {
			// 0x5f640
			v20 = 0;
			// branch -> 0x5f644
		}
		if (v19 == 11) {
			// 0x5f650
			v20 = 0;
			// branch -> 0x5f654
		}
		if (v19 == 14) {
			// 0x5f660
			v20 = 0;
			// branch -> 0x5f664
		}
		if (*(int32_t *)(v10 + 56) == 24) {
			// 0x5f670
			v20 = 1;
			// branch -> 0x5f674
		}
		int32_t v21 = *(int32_t *)(v10 + 60); // 0x5f674
		int32_t v22 = v20;
		if (v21 == 32) {
			// 0x5f680
			if (v5 == 1) {
				// 0x5f688
				v22 = 0;
				// branch -> 0x5f68c
			} else {
				v22 = v20;
			}
		}
		int32_t v23 = v22; // 0x5f6a0
		if (v21 == 34) {
			// 0x5f694
			if (v5 == 1) {
				// 0x5f69c
				v23 = 0;
				// branch -> 0x5f6a0
			} else {
				v23 = v22;
			}
		}
		int32_t v24 = v12; // 0x5f6b8
		int32_t v25 = v10; // 0x5f6b4
		if (v23 != 0) {
			int32_t v26 = g37; // 0x5f6a8
			g37 = v26 + 1;
			*(int32_t *)(v14 + 4 * v26) = v12;
			v24 = v6;
			v25 = v7;
			// branch -> 0x5f6b4
		}
		int32_t v27 = v25 + 76; // 0x5f6b4
		v7 = v27;
		int32_t v28 = v24 + 1; // 0x5f6b8
		v6 = v28;
		if (*(char *)(v25 + 81) == -1) {
			// break -> 0x5f6cc
			break;
		}
		v12 = v28;
		v10 = v27;
		// continue -> 0x5f5ec
	}
	// 0x5f6cc
	result = *(int32_t *)(4 * random(25) + v14);
	// branch -> 0x5f6e0
	// 0x5f6e0
	g10 = v1;
	return result;
}

// Address range: 0x5f6f0 - 0x5f7d0
int32_t function_5f6f0(void)
{
	int32_t v1 = g10; // 0x5f6f0
	g37 = 100;
	int32_t result = 0;
	if (random(26) < 26) {
		int32_t v2 = *(int32_t *)(g23 - 0x77e4); // 0x5f718
		int32_t v3;                              // bp-2056
		int32_t v4 = &v3;                        // 0x5f71c
		g37 = 0;
		int32_t v5 = g23 + 0x3858;                                   // 0x5f72c
		int32_t v6 = 0;                                              // r8
		int32_t v7 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77f0); // r7
		if (*(char *)(g23 + 0x385d) != -1) {
			int32_t v8 = 0; // 0x5f764
			while (true) {
				int32_t v9 = v5; // 0x5f794
				if (*(int32_t *)v5 != 0) {
					char v10 = *(char *)(v5 + 24); // 0x5f74c
					if (2 * (int32_t) * (char *)v2 >= (int32_t)v10) {
						int32_t v11 = g37; // 0x5f75c
						g37 = v11 + 1;
						*(int32_t *)(v4 + 4 * v11) = v8;
						v9 = v5;
						// branch -> 0x5f768
					} else {
						v9 = v5;
					}
				}
				int32_t v12 = *(int32_t *)(v9 + 60); // 0x5f768
				if (v12 == 32) {
					// 0x5f774
					if (v7 == 1) {
						// 0x5f77c
						g37--;
						// branch -> 0x5f780
					}
				}
				// 0x5f780
				if (v12 == 34) {
					// 0x5f788
					if (v7 == 1) {
						// 0x5f790
						g37--;
						// branch -> 0x5f794
					}
				}
				int32_t v13 = v6 + 1; // 0x5f798
				v6 = v13;
				if (*(char *)(v9 + 81) == -1) {
					// break -> 0x5f7ac
					break;
				}
				v8 = v13;
				v5 = v9 + 76;
				// continue -> 0x5f740
			}
			int32_t v14 = random(26); // 0x5f7b0
			// branch -> 0x5f7c0
			// 0x5f7c0
			g10 = v1;
			return *(int32_t *)(4 * v14 + v4);
		}
		// 0x5f7ac
		result = *(int32_t *)(4 * random(26) + v4);
		// branch -> 0x5f7c0
	}
	// 0x5f7c0
	g10 = v1;
	return result;
}

// Address range: 0x5f7d0 - 0x5f8a4
int32_t function_5f7d0(int32_t a1, int32_t a2)
{
	int32_t v1 = g10;                        // 0x5f7d0
	int32_t v2 = *(int32_t *)(g23 - 0x77e4); // 0x5f7d4
	int32_t v3 = 0;                          // r8
	int32_t v4 = g23 + 0x3858;               // 0x5f7e0
	int32_t v5 = 0;                          // r9
	int32_t v6;                              // bp-2056
	int32_t v7 = &v6;                        // 0x5f7f0
	int32_t result;                          // 0x5f890
	if (*(char *)(g23 + 0x385d) == -1) {
		// 0x5f87c
		g37 = 0;
		result = *(int32_t *)(4 * random(27) + v7);
		g10 = v1;
		return result;
	}
	int32_t v8 = 0; // 0x5f860
	while (true) {
		int32_t v9 = 1;
		if (*(int32_t *)v4 == 0) {
			// 0x5f80c
			v9 = 0;
			// branch -> 0x5f810
		}
		char v10 = *(char *)(v4 + 24); // 0x5f810
		if (2 * (int32_t) * (char *)v2 < (int32_t)v10) {
			// 0x5f820
			v9 = 0;
			// branch -> 0x5f824
		}
		if (a1 != (int32_t) * (char *)(v4 + 12)) {
			// 0x5f834
			v9 = 0;
			// branch -> 0x5f838
		}
		// 0x5f838
		int32_t v11; // 0x5f864
		int32_t v12; // 0x5f868
		if (a2 != -1) {
			// 0x5f840
			if (a2 != *(int32_t *)(v4 + 56)) {
				// 0x5f850
				v12 = v8;
				v11 = v4;
				// branch -> 0x5f864
			lab_0x5f864_3:;
				int32_t v13 = v12 + 1; // 0x5f868
				v5 = v13;
				if (*(char *)(v11 + 81) == -1) {
					// break -> 0x5f86c
					break;
				}
				v8 = v13;
				v4 = v11 + 76;
				// continue -> 0x5f7fc
				continue;
			}
			// 0x5f850
			if (v9 == 0) {
				v12 = v8;
				v11 = v4;
				goto lab_0x5f864_3;
			}
		lab_0x5f858:;
			int32_t v14 = v3; // 0x5f858
			v3 = v14 + 1;
			*(int32_t *)(v7 + 4 * v14) = v8;
			v12 = v5;
			v11 = v4;
			// branch -> 0x5f864
			goto lab_0x5f864_3;
		}
		// 0x5f850
		if (v9 == 0) {
			v12 = v8;
			v11 = v4;
			goto lab_0x5f864_3;
		}
		goto lab_0x5f858;
	}
	// 0x5f86c
	// branch -> 0x5f87c
	// 0x5f87c
	g37 = v3;
	result = *(int32_t *)(4 * random(27) + v7);
	g10 = v1;
	return result;
}

// Address range: 0x5f8a4 - 0x5fa14
int32_t function_5f8a4(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g36; // 0x5f8a4
	int32_t v2 = g10; // 0x5f8a8
	g36 = a3;
	g37 = 100;
	if (random(28) > g36) {
		// 0x5f8e4
		// branch -> 0x5f9f4
		// 0x5f9f4
		g36 = v1;
		g10 = v2;
		return -1;
	}
	// 0x5f8ec
	int32_t v3;       // bp-148
	int32_t v4 = &v3; // 0x5f8ec
	g34 = v4;
	g36 = 0;
	memset();
	int32_t v5 = v4; // r9
	int32_t v6;
	int32_t v7 = *(int32_t *)(v6 - 0x718c);                                      // 0x5f918
	int32_t v8 = v7;                                                             // r7
	int32_t v9 = *(int32_t *)(v6 - 0x7170);                                      // 0x5f924
	int32_t v10 = 76 * *(int32_t *)(*(int32_t *)(v6 - 0x7690) + 368 * a1 + 360); // 0x5f928
	int32_t v11 = (int32_t) * (char *)(v10 + 13 + v6 + 0x3858);                  // 0x5f938
	unsigned char v12 = *(char *)(v7 + 4);                                       // 0x5f98c8
	int32_t v13;
	int32_t v14; // 0x5f9dc
	int32_t v15; // 0x5f9ec
	int32_t v16; // 0x5f9ec1
	if (v12 != -1) {
		int32_t v17 = v4;  // 0x5f978
		int32_t v18 = v12; // 0x5f940
		while (true) {
			int32_t v19 = v7;  // 0x5f980
			int32_t v20;       // 0x5f980
			int32_t v21;       // 0x5f988
			unsigned char v22; // 0x5f98c
			if (0x1000000 * v18 / 0x1000000 == v11) {
				// 0x5f94c
				if (a2 >= (int32_t) * (char *)(v7 + 5)) {
					// 0x5f95c
					int32_t v23; // 0x5f988
					if (a4 == 0) {
						// 0x5f964
						if (*(int32_t *)v9 != 0) {
							// 0x5f970
							if ((int32_t) * (char *)*(int32_t *)(v6 - 0x77f0) == 1) {
								v23 = v17;
								v19 = v7;
							lab_0x5f980:
								// 0x5f980
								v20 = v19 + 84;
								v8 = v20;
								v21 = v23 + 1;
								v5 = v21;
								v22 = *(char *)(v19 + 88);
								if (v22 == -1) {
									// 0x5f99c
									if (g36 == 0) {
										// 0x5f9a4
										// branch -> 0x5f9f4
										// 0x5f9f4
										g36 = v1;
										g10 = v2;
										return -1;
									}
									// 0x5f9ac
									g37 = 10;
									random(29);
									v16 = g36;
									if (v16 > 0) {
										v13 = v16;
										v14 = 0;
										int32_t result; // 0x5f9c423
										while (true) {
											// 0x5f9c4
											v15 = v13;
											if (*(char *)(v14 + v4) != 0) {
											lab_0x5f9d0_2:
												// 0x5f9d0
												v15 = v13 - 1;
												// branch -> 0x5f9d4
											}
										lab_0x5f9d4_2:
											// 0x5f9d4
											result = v14;
											if (v15 >= 1) {
												int32_t v24 = v14 + 1; // 0x5f9dc
												if (v24 == 128) {
													// 0x5f9e8
													result = 0;
													// branch -> 0x5f9ec
												} else {
													result = v24;
												}
											}
											// 0x5f9ec
											if (v15 <= 0) {
												// break -> 0x5f9f4
												break;
											}
											v13 = v15;
											v14 = result;
											// continue -> 0x5f9c4
										}
										// 0x5f9f4
										g36 = v1;
										g10 = v2;
										return result;
									}
									// 0x5f9f4
									g36 = v1;
									g10 = v2;
									return 0;
								}
							lab_0x5f980_2:
								// 0x5f980
								v17 = v21;
								v9 += 4;
								v7 = v20;
								v18 = v22;
								// branch -> 0x5f940
								continue;
							}
						}
					}
					// 0x5f978
					*(char *)v17 = (char)1;
					g36++;
					v23 = v5;
					v19 = v8;
					// branch -> 0x5f980
					goto lab_0x5f980;
				} else {
					v19 = v7;
				}
			}
			// 0x5f980
			v20 = v19 + 84;
			v8 = v20;
			v21 = v17 + 1;
			v5 = v21;
			v22 = *(char *)(v19 + 88);
			if (v22 != -1) {
				goto lab_0x5f980_2;
			}
			// 0x5f99c
			if (g36 == 0) {
				// 0x5f9a4
				// branch -> 0x5f9f4
				// 0x5f9f4
				g36 = v1;
				g10 = v2;
				return -1;
			}
			// 0x5f9ac
			g37 = 10;
			random(29);
			v16 = g36;
			if (v16 > 0) {
				v13 = v16;
				v14 = 0;
				while (true) {
					// 0x5f9c4
					if (*(char *)(v14 + v4) == 0) {
						v15 = v13;
						goto lab_0x5f9d4_2;
					}
					goto lab_0x5f9d0_2;
				}
			}
			// 0x5f9f4
			g36 = v1;
			g10 = v2;
			return 0;
		}
	}
	// 0x5f99c
	int32_t result2; // 0x5fa10
	if (g36 == 0) {
		// 0x5f9a4
		result2 = -1;
		// branch -> 0x5f9f4
	} else {
		// 0x5f9ac
		g37 = 10;
		random(29);
		v16 = g36;
		if (v16 > 0) {
			v13 = v16;
			v14 = 0;
			while (true) {
				// 0x5f9c4
				if (*(char *)(v14 + v4) == 0) {
					v15 = v13;
					goto lab_0x5f9d4_2;
				}
				goto lab_0x5f9d0_2;
			}
		} else {
			result2 = 0;
		}
	}
	// 0x5f9f4
	g36 = v1;
	g10 = v2;
	return result2;
}

// Address range: 0x5fa14 - 0x5fbe4
int32_t function_5fa14(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x718c) + 84 * a2; // r26
	*(int32_t *)(*(int32_t *)(g23 - 0x7170) + 4 * a2) = 1;
	char v2 = *(char *)(v1 + 12);       // 0x5fa58
	int32_t v3 = *(int32_t *)(v1 + 16); // 0x5fa5c
	int32_t v4 = *(int32_t *)(v1 + 20); // 0x5fa60
	function_5e350((int32_t)v2, v3, v4, 0, 0, 1, 1);
	int32_t v5 = g30;    // 0x5fa6c
	int32_t v6 = v5 + 6; // 0x5fa6c
	int32_t v7 = v6;     // 0x5faa4
	if (*(char *)v6 >= 2) {
		int32_t v8 = *(int32_t *)(v5 + 28); // 0x5fa88
		int32_t v9 = *(int32_t *)(v5 + 32); // 0x5fa90
		function_5e350(g31, (int32_t) * (char *)(v5 + 24), v8, v9, 0, 0, 1);
		v7 = g29;
		// branch -> 0x5faa4
	}
	int32_t v10 = v7; // 0x5fadc
	if (*(char *)v7 >= 3) {
		int32_t v11 = g33 + g35;              // 0x5fab4
		int32_t v12 = *(int32_t *)(v11 + 40); // 0x5fac0
		int32_t v13 = *(int32_t *)(v11 + 44); // 0x5fac8
		function_5e350(g31, (int32_t) * (char *)(v11 + 36), v12, v13, 0, 0, 1);
		v10 = g29;
		// branch -> 0x5fadc
	}
	int32_t v14 = v10; // 0x5fb14
	if (*(char *)v10 >= 4) {
		int32_t v15 = g33 + g35;              // 0x5faec
		int32_t v16 = *(int32_t *)(v15 + 52); // 0x5faf8
		int32_t v17 = *(int32_t *)(v15 + 56); // 0x5fb00
		function_5e350(g31, (int32_t) * (char *)(v15 + 48), v16, v17, 0, 0, 1);
		v14 = g29;
		// branch -> 0x5fb14
	}
	int32_t v18 = v14; // 0x5fb4c
	if (*(char *)v14 >= 5) {
		int32_t v19 = g33 + g35;              // 0x5fb24
		int32_t v20 = *(int32_t *)(v19 + 64); // 0x5fb30
		int32_t v21 = *(int32_t *)(v19 + 68); // 0x5fb38
		function_5e350(g31, (int32_t) * (char *)(v19 + 60), v20, v21, 0, 0, 1);
		v18 = g29;
		// branch -> 0x5fb4c
	}
	// 0x5fb4c
	if (*(char *)v18 >= 6) {
		int32_t v22 = g33 + g35;              // 0x5fb5c
		int32_t v23 = *(int32_t *)(v22 + 76); // 0x5fb68
		int32_t v24 = *(int32_t *)(v22 + 80); // 0x5fb70
		function_5e350(g31, (int32_t) * (char *)(v22 + 72), v23, v24, 0, 0, 1);
		// branch -> 0x5fb84
	}
	int32_t v25 = 368 * g31; // 0x5fb84
	g29 = v25;
	g37 = *(int32_t *)(g33 + g35);
	int32_t v26 = g36 + v25; // 0x5fb8c
	g30 = v26;
	g34 = v26 + 125;
	strcpy();
	*(int32_t *)(g30 + 200) = *(int32_t *)(g33 + g35 + 8);
	int32_t v27 = g30; // 0x5fba4
	if (*(int32_t *)(v27 + 220) == 27) {
		// 0x5fbb0
		*(int32_t *)v27 = g32;
		// branch -> 0x5fbb4
	}
	int32_t result = g29 + g36; // 0x5fbb4
	*(int32_t *)(result + 308) = g32;
	*(char *)(result + 60) = 2;
	int16_t *v28 = (int16_t *)(result + 4); // 0x5fbc4
	*v28 = *v28 | 512;
	return result;
}

// Address range: 0x5fbe4 - 0x5fcd4
int32_t function_5fbe4(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = g36; // 0x5fbe4
	int32_t v2 = g35; // 0x5fbf0
	int32_t v3 = g33; // 0x5fbf4
	int32_t v4 = g32; // 0x5fbfc
	if (*(int32_t *)*(int32_t *)(g23 - 0x71e4) > 126) {
		// 0x5fcb4
		g36 = v1;
		g35 = v2;
		g33 = v3;
		g32 = v4;
		return result;
	}
	// 0x5fc18
	function_5d8e8(a2, a3, 0x1000000 * *(int32_t *)*(int32_t *)(g23 - 0x71f4) / 0x1000000);
	int32_t v5 = *(int32_t *)g36; // 0x5fc2c
	int32_t v6 = g32;             // 0x5fc4c
	*(int32_t *)v6 = *(int32_t *)(v6 + 4 * (126 - v5));
	*(int32_t *)(4 * v5 + *(int32_t *)(g23 - 0x71e0)) = g35;
	char v7 = *(char *)(84 * g33 + 4 + *(int32_t *)(g23 - 0x718c)); // 0x5fc60
	int32_t v8 = g23 + 0x3858;                                      // 0x5fc741
	int32_t *v9;                                                    // 0x5fca8
	int32_t result2;                                                // 0x5fca8
	int32_t v10;                                                    // 0x5fc8c
	if (*(char *)(v8 + 13) == v7) {
		// 0x5fc84
		v10 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
		function_5e014(g35, v10, v10);
		function_5fa14(g35, g33);
		function_5f358(g35);
		v9 = (int32_t *)g36;
		result2 = *v9;
		*v9 = result2 + 1;
		// branch -> 0x5fcb4
		// 0x5fcb4
		g36 = v1;
		g35 = v2;
		g33 = v3;
		g32 = v4;
		return result2;
	}
	int32_t v11 = 0; // 0x5fc70
	// branch -> 0x5fc6c
	while (*(char *)(v8 + 89) != v7) {
		// 0x5fc6c
		v11++;
		v8 += 76;
		// continue -> 0x5fc6c
	}
	// 0x5fc84
	v10 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
	function_5e014(g35, v10, v10);
	function_5fa14(g35, g33);
	function_5f358(g35);
	v9 = (int32_t *)g36;
	result2 = *v9;
	*v9 = result2 + 1;
	// branch -> 0x5fcb4
	// 0x5fcb4
	g36 = v1;
	g35 = v2;
	g33 = v3;
	g32 = v4;
	return result2;
}

// Address range: 0x5fcd4 - 0x5fd48
int32_t function_5fcd4(int32_t a1)
{
	int32_t v1 = g36;                                   // 0x5fcd4
	int32_t v2 = *(int32_t *)(g23 - 0x7690) + 368 * a1; // 0x5fcf0
	int32_t v3 = v2 + 236;                              // 0x5fcf4
	int32_t v4 = *(int32_t *)v3;                        // 0x5fcf4
	if (v4 == 0) {
		// 0x5fd30
		g36 = v1;
		return 0;
	}
	// 0x5fd00
	int32_t result; // 0x5fd24
	if (v4 != 255) {
		int32_t v5 = v2 + 240;        // 0x5fd0c
		uint32_t v6 = *(int32_t *)v5; // 0x5fd0c
		g36 = v5;
		g37 = v6 / 2 | v6 & -0x80000000;
		int32_t v7 = random(0); // 0x5fd18
		result = *(int32_t *)g36 / 4;
		*(int32_t *)v3 = v7 + 1 + result;
		// branch -> 0x5fd30
	} else {
		result = 255;
	}
	// 0x5fd30
	g36 = v1;
	return result;
}

// Address range: 0x5fd48 - 0x5ff4c
int32_t function_5fd48(int32_t a1, int32_t a2, int32_t a3, int16_t a4)
{
	int32_t v1 = g10; // 0x5fd4c
	g28 = a3;
	int32_t v2 = a4; // r25
	g34 = a3;
	*(int32_t *)(*(int32_t *)(g23 - 0x7690) + 368 * a1) = a3;
	SetRndSeed();
	function_5e014(a1, a2, v2 / 2 | v2 & -0x80000000);
	int32_t v3 = g36 + 4 + g35;  // 0x5fda4
	int16_t *v4 = (int16_t *)v3; // 0x5fda4
	*v4 = (int16_t)g29;
	g33 = v3;
	if (g25 != 0) {
		// 0x5fdac
		*v4 = *v4 | -0x8000;
		// branch -> 0x5fdb8
	}
	// 0x5fdb8
	if (g31 != 0) {
		int16_t *v5 = (int16_t *)g33; // 0x5fdc0
		*v5 = *v5 | 64;
		// branch -> 0x5fdcc
	}
	int32_t v6 = g30; // 0x5fdcc
	if (v6 == 15) {
		int16_t *v7 = (int16_t *)g33; // 0x5fdd4
		*v7 = *v7 | 128;
		// branch -> 0x5fdf8
	} else {
		// 0x5fde4
		if (v6 == 1) {
			int16_t *v8 = (int16_t *)g33; // 0x5fdec
			*v8 = *v8 | 256;
			// branch -> 0x5fdf8
		}
	}
	int32_t v9 = g35 + g36; // 0x5fdf8
	int32_t v10 = v9 + 220; // 0x5fdfc
	g25 = v10;
	int32_t result; // 0x5ff34
	if (*(int32_t *)v10 == 27) {
		// 0x5ff14
		if (*(char *)(v9 + 189) != 7) {
			// 0x5ff24
			function_5fa14(g26, g28);
			// branch -> 0x5ff30
		}
		// 0x5ff30
		result = function_5f358(g26);
		g10 = v1;
		return result;
	}
	// 0x5fe08
	g28 = -1;
	g37 = 100;
	int32_t v11;
	int32_t v12; // 0x5fe70
	int32_t v13;
	int32_t v14; // 0x5fe94
	int32_t v15; // 0x5fe9c
	int32_t v16;
	int32_t v17;
	int32_t v18;  // 0x5feac
	int32_t v19;  // 0x5fec8
	int32_t v20;  // 0x5fed0
	int32_t v21;  // 0x5fe9c
	int16_t *v22; // 0x5feec
	int32_t v23;  // 0x5feb8
	if (random(32) <= 10) {
		int32_t v24 = g29; // 0x5fe20
		g28 = v24;
		v11 = v24;
		v15 = v24;
		// branch -> 0x5fe40
		// 0x5fe40
		v13 = v11;
		if (v11 == -1) {
			// 0x5fe48
			if (*(int32_t *)g25 == 23) {
				// 0x5fe54
				g28 = v15;
				v13 = v15;
				// branch -> 0x5fe58
			} else {
				v13 = -1;
			}
		}
		// 0x5fe58
		v12 = v13;
		if (v13 == -1) {
			// 0x5fe60
			if (*(int32_t *)g25 == 25) {
				// 0x5fe6c
				g28 = v15;
				v12 = v15;
				// branch -> 0x5fe70
			} else {
				v12 = -1;
			}
		}
		// 0x5fe70
		v17 = v12;
		if (v12 == -1) {
			// 0x5fe78
			if (*(int32_t *)g25 == 26) {
				// 0x5fe84
				g28 = v15;
				v17 = v15;
				// branch -> 0x5fe88
			} else {
				v17 = -1;
			}
		}
		// 0x5fe88
		v16 = v17;
		if (g31 != 0) {
			// 0x5fe90
			g28 = v15;
			v16 = v15;
			// branch -> 0x5fe94
		}
		// 0x5fe94
		v14 = g30;
		v18 = v16;
		if (v14 == 15) {
			// 0x5fe9c
			v21 = v15 + 4;
			g28 = v21;
			v18 = v21;
			// branch -> 0x5fea0
		}
		// 0x5fea0
		if (v18 == -1) {
			// 0x5fef8
			if (*(char *)(g35 + g36 + 60) != 2) {
				// 0x5ff08
				function_5fcd4(g26);
				// branch -> 0x5ff30
			}
			// 0x5ff30
			result = function_5f358(g26);
			g10 = v1;
			return result;
		}
		// 0x5fea8
		v23 = function_5f8a4(g26, 0x10000 * v18 / 0x10000, v14, g32);
		v19 = g26;
		if (v23 == -1) {
			// 0x5fec8
			v20 = g28;
			function_5f280(v19, g27, v20 / 2 | v20 & -0x80000000, 0x10000 * v20 / 0x10000, g31);
			// branch -> 0x5fef8
		} else {
			// 0x5fee4
			function_5fa14(v19, v23);
			v22 = (int16_t *)g33;
			*v22 = *v22 | 512;
			// branch -> 0x5fef8
		}
		// 0x5fef8
		if (*(char *)(g35 + g36 + 60) != 2) {
			// 0x5ff08
			function_5fcd4(g26);
			// branch -> 0x5ff30
		}
		// 0x5ff30
		result = function_5f358(g26);
		g10 = v1;
		return result;
	}
	// 0x5fe28
	g37 = 100;
	int32_t v25 = g29; // 0x5fe34
	if (random(33) > v25) {
		// 0x5fe40
		v11 = g28;
		v15 = v25;
		// branch -> 0x5fe40
	} else {
		// 0x5fe3c
		g28 = v25;
		v11 = v25;
		v15 = v25;
		// branch -> 0x5fe40
	}
	// 0x5fe40
	v13 = v11;
	if (v11 == -1) {
		// 0x5fe48
		if (*(int32_t *)g25 == 23) {
			// 0x5fe54
			g28 = v15;
			v13 = v15;
			// branch -> 0x5fe58
		} else {
			v13 = -1;
		}
	}
	// 0x5fe58
	v12 = v13;
	if (v13 == -1) {
		// 0x5fe60
		if (*(int32_t *)g25 == 25) {
			// 0x5fe6c
			g28 = v15;
			v12 = v15;
			// branch -> 0x5fe70
		} else {
			v12 = -1;
		}
	}
	// 0x5fe70
	v17 = v12;
	if (v12 == -1) {
		// 0x5fe78
		if (*(int32_t *)g25 == 26) {
			// 0x5fe84
			g28 = v15;
			v17 = v15;
			// branch -> 0x5fe88
		} else {
			v17 = -1;
		}
	}
	// 0x5fe88
	v16 = v17;
	if (g31 != 0) {
		// 0x5fe90
		g28 = v15;
		v16 = v15;
		// branch -> 0x5fe94
	}
	// 0x5fe94
	v14 = g30;
	v18 = v16;
	if (v14 == 15) {
		// 0x5fe9c
		v21 = v15 + 4;
		g28 = v21;
		v18 = v21;
		// branch -> 0x5fea0
	}
	// 0x5fea0
	if (v18 == -1) {
		// 0x5fef8
		if (*(char *)(g35 + g36 + 60) != 2) {
			// 0x5ff08
			function_5fcd4(g26);
			// branch -> 0x5ff30
		}
		// 0x5ff30
		result = function_5f358(g26);
		g10 = v1;
		return result;
	}
	// 0x5fea8
	v23 = function_5f8a4(g26, 0x10000 * v18 / 0x10000, v14, g32);
	v19 = g26;
	if (v23 == -1) {
		// 0x5fec8
		v20 = g28;
		function_5f280(v19, g27, v20 / 2 | v20 & -0x80000000, 0x10000 * v20 / 0x10000, g31);
		// branch -> 0x5fef8
	} else {
		// 0x5fee4
		function_5fa14(v19, v23);
		v22 = (int16_t *)g33;
		*v22 = *v22 | 512;
		// branch -> 0x5fef8
	}
	// 0x5fef8
	if (*(char *)(g35 + g36 + 60) != 2) {
		// 0x5ff08
		function_5fcd4(g26);
		// branch -> 0x5ff30
	}
	// 0x5ff30
	result = function_5f358(g26);
	g10 = v1;
	return result;
}

// Address range: 0x5ff4c - 0x60128
int32_t function_5ff4c(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x5ff4c
	g34 = a1;
	int32_t v1 = g10;       // 0x5ff50
	int32_t v2 = 232 * g34; // 0x5ff54
	g32 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0x5ff58
	g33 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7604); // r7
	g35 = *(int32_t *)(g23 - 0x71e4);
	g25 = a2;
	int32_t v5 = v3 + v2; // 0x5ff68
	g36 = *(int32_t *)(g23 - 0x71f4);
	g26 = a3;
	g27 = a4;
	int32_t v6 = v5 + 192; // 0x5ff80
	g31 = v6;
	int32_t v7;   // 0x5ffb0
	int32_t v8;   // 0x6006c
	int32_t v9;   // 0x600c0
	int32_t v10;  // 0x600d0
	int32_t v11;  // 0x600dc
	int32_t *v12; // 0x600f4
	int32_t v13;  // 0x6005c
	int32_t v14;  // 0x600f4
	char v15;     // 0x600d8
	if (*(char *)v6 != 0) {
		// 0x5ffb0
		v7 = function_5f568();
		g34 = v7;
		g29 = v7;
		if (v7 <= -1) {
			// 0x5ffbc
			g34 = function_5fbe4(-1 - v7, g25, g26);
			// branch -> 0x60114
			// 0x60114
			g10 = v1;
			return g34;
		}
		// 0x5ffd4
		g28 = 1;
		// branch -> 0x6003c
		// 0x6003c
		if (*(int32_t *)g35 > 126) {
			// 0x60114
			g10 = v1;
			return g34;
		}
		// 0x60048
		function_5d8e8(g25, g26, 0x1000000 * *(int32_t *)g36 / 0x1000000);
		v13 = *(int32_t *)g35;
		v8 = g36;
		*(int32_t *)v8 = *(int32_t *)(v8 + 4 * (126 - v13));
		*(int32_t *)(4 * v13 + *(int32_t *)(g23 - 0x71e0)) = g30;
		v9 = GetRndSeed();
		v10 = g30;
		g41 = g28;
		v15 = *(char *)(*(int32_t *)(g32 + g33 + 228) + 86);
		v11 = g29;
		if (*(char *)g31 == 0) {
			// 0x600c0
			g40 = 1;
			g42 = 0;
			g13 = 0;
			function_5fd48(v10, v11, v9, (int16_t)v15);
			// branch -> 0x600f4
		} else {
			// 0x60088
			g40 = 15;
			g42 = 0;
			g13 = 0;
			function_5fd48(v10, v11, v9, (int16_t)v15);
			// branch -> 0x600f4
		}
		// 0x600f4
		v12 = (int32_t *)g35;
		v14 = *v12;
		g34 = v14;
		*v12 = v14 + 1;
		if (g27 != 0) {
			// 0x60108
			g34 = function_8bd30(0, g30);
			// branch -> 0x60114
		}
		// 0x60114
		g10 = v1;
		return g34;
	}
	int32_t v16 = (int32_t) * (int16_t *)(*(int32_t *)(v5 + 228) + 120); // 0x5ff94
	if (__asm_rlwinm_(v16, 0, 16, 16) != 0) {
		// 0x5ffa0
		if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
			// 0x5ffb0
			v7 = function_5f568();
			g34 = v7;
			g29 = v7;
			if (v7 > -1) {
				// 0x5ffd4
				g28 = 1;
				// branch -> 0x6003c
				// 0x6003c
				if (*(int32_t *)g35 <= 126) {
					// 0x60048
					function_5d8e8(g25, g26, 0x1000000 * *(int32_t *)g36 / 0x1000000);
					v13 = *(int32_t *)g35;
					v8 = g36;
					*(int32_t *)v8 = *(int32_t *)(v8 + 4 * (126 - v13));
					*(int32_t *)(4 * v13 + *(int32_t *)(g23 - 0x71e0)) = g30;
					v9 = GetRndSeed();
					v10 = g30;
					g41 = g28;
					v15 = *(char *)(*(int32_t *)(g32 + g33 + 228) + 86);
					v11 = g29;
					if (*(char *)g31 == 0) {
						// 0x600c0
						g40 = 1;
						g42 = 0;
						g13 = 0;
						function_5fd48(v10, v11, v9, (int16_t)v15);
						// branch -> 0x600f4
					} else {
						// 0x60088
						g40 = 15;
						g42 = 0;
						g13 = 0;
						function_5fd48(v10, v11, v9, (int16_t)v15);
						// branch -> 0x600f4
					}
					// 0x600f4
					v12 = (int32_t *)g35;
					v14 = *v12;
					g34 = v14;
					*v12 = v14 + 1;
					if (g27 != 0) {
						// 0x60108
						g34 = function_8bd30(0, g30);
						// branch -> 0x60114
					}
				}
			} else {
				// 0x5ffbc
				g34 = function_5fbe4(-1 - v7, g25, g26);
				// branch -> 0x60114
			}
			// 0x60114
			g10 = v1;
			return g34;
		}
	}
	// 0x5ffdc
	if (*(char *)(v4 + 26) == 2) {
		char *v17 = (char *)(v4 + 39); // 0x5ffec
		if (*v17 == 5) {
			// 0x5fff8
			*v17 = 6;
			g29 = 18;
			// branch -> 0x6003c
			// 0x6003c
			if (*(int32_t *)g35 > 126) {
				// 0x60114
				g10 = v1;
				return g34;
			}
			// 0x60048
			function_5d8e8(g25, g26, 0x1000000 * *(int32_t *)g36 / 0x1000000);
			v13 = *(int32_t *)g35;
			v8 = g36;
			*(int32_t *)v8 = *(int32_t *)(v8 + 4 * (126 - v13));
			*(int32_t *)(4 * v13 + *(int32_t *)(g23 - 0x71e0)) = g30;
			v9 = GetRndSeed();
			v10 = g30;
			g41 = g28;
			v15 = *(char *)(*(int32_t *)(g32 + g33 + 228) + 86);
			v11 = g29;
			if (*(char *)g31 == 0) {
				// 0x600c0
				g40 = 1;
				g42 = 0;
				g13 = 0;
				function_5fd48(v10, v11, v9, (int16_t)v15);
				// branch -> 0x600f4
			} else {
				// 0x60088
				g40 = 15;
				g42 = 0;
				g13 = 0;
				function_5fd48(v10, v11, v9, (int16_t)v15);
				// branch -> 0x600f4
			}
			// 0x600f4
			v12 = (int32_t *)g35;
			v14 = *v12;
			g34 = v14;
			*v12 = v14 + 1;
			if (g27 != 0) {
				// 0x60108
				g34 = function_8bd30(0, g30);
				// branch -> 0x60114
			}
			// 0x60114
			g10 = v1;
			return g34;
		}
	}
	int32_t v18 = function_5f3f8(); // 0x60008
	g34 = v18;
	if (v18 == 0) {
		// 0x60114
		g10 = v1;
		return g34;
	}
	// 0x60014
	if (v18 < 0) {
		// 0x60024
		g34 = function_5fbe4(-1 - v18, g25, g26);
		// branch -> 0x60114
	} else {
		// 0x60018
		g29 = v18 - 1;
		g28 = 0;
		// branch -> 0x6003c
		// 0x6003c
		if (*(int32_t *)g35 <= 126) {
			// 0x60048
			function_5d8e8(g25, g26, 0x1000000 * *(int32_t *)g36 / 0x1000000);
			v13 = *(int32_t *)g35;
			v8 = g36;
			*(int32_t *)v8 = *(int32_t *)(v8 + 4 * (126 - v13));
			*(int32_t *)(4 * v13 + *(int32_t *)(g23 - 0x71e0)) = g30;
			v9 = GetRndSeed();
			v10 = g30;
			g41 = g28;
			v15 = *(char *)(*(int32_t *)(g32 + g33 + 228) + 86);
			v11 = g29;
			if (*(char *)g31 == 0) {
				// 0x600c0
				g40 = 1;
				g42 = 0;
				g13 = 0;
				function_5fd48(v10, v11, v9, (int16_t)v15);
				// branch -> 0x600f4
			} else {
				// 0x60088
				g40 = 15;
				g42 = 0;
				g13 = 0;
				function_5fd48(v10, v11, v9, (int16_t)v15);
				// branch -> 0x600f4
			}
			// 0x600f4
			v12 = (int32_t *)g35;
			v14 = *v12;
			g34 = v14;
			*v12 = v14 + 1;
			if (g27 != 0) {
				// 0x60108
				g34 = function_8bd30(0, g30);
				// branch -> 0x60114
			}
		}
	}
	// 0x60114
	g10 = v1;
	return g34;
}

// Address range: 0x60128 - 0x6022c
int32_t function_60128(int32_t result, int32_t a2, int32_t a3)
{
	int32_t v1 = g36; // 0x60128
	int32_t v2 = g10; // 0x6012c
	int32_t v3 = g35; // 0x60134
	int32_t v4 = g33; // 0x60138
	int32_t v5 = g32; // 0x60140
	if (*(int32_t *)*(int32_t *)(g23 - 0x71e4) > 126) {
		// 0x6020c
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		g32 = v5;
		return result;
	}
	// 0x6015c
	function_5d8e8(a2, a3, 0x1000000 * *(int32_t *)*(int32_t *)(g23 - 0x71f4) / 0x1000000);
	int32_t v6 = *(int32_t *)g36; // 0x60170
	int32_t v7 = g32;             // 0x60190
	*(int32_t *)v7 = *(int32_t *)(v7 + 4 * (126 - v6));
	*(int32_t *)(4 * v6 + *(int32_t *)(g23 - 0x71e0)) = g35;
	char v8 = *(char *)(84 * g33 + 4 + *(int32_t *)(g23 - 0x718c)); // 0x601a4
	int32_t v9 = g23 + 0x3858;                                      // 0x601b81
	int32_t *v10;                                                   // 0x60200
	int32_t result2;                                                // 0x60200
	int32_t v11;                                                    // 0x601d0
	if (*(char *)(v9 + 13) == v8) {
		// 0x601c8
		v11 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
		function_5e014(g35, v11, v11);
		function_5fa14(g35, g33);
		function_5f358(g35);
		*(char *)(*(int32_t *)(g23 - 0x7690) + 368 * g35 + 60) = 2;
		v10 = (int32_t *)g36;
		result2 = *v10;
		*v10 = result2 + 1;
		// branch -> 0x6020c
		// 0x6020c
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		g32 = v5;
		return result2;
	}
	int32_t v12 = 0; // 0x601b4
	// branch -> 0x601b0
	while (*(char *)(v9 + 89) != v8) {
		// 0x601b0
		v12++;
		v9 += 76;
		// continue -> 0x601b0
	}
	// 0x601c8
	v11 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
	function_5e014(g35, v11, v11);
	function_5fa14(g35, g33);
	function_5f358(g35);
	*(char *)(*(int32_t *)(g23 - 0x7690) + 368 * g35 + 60) = 2;
	v10 = (int32_t *)g36;
	result2 = *v10;
	*v10 = result2 + 1;
	// branch -> 0x6020c
	// 0x6020c
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	g32 = v5;
	return result2;
}

// Address range: 0x6022c - 0x60328
int32_t function_6022c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g10; // 0x60230
	g33 = a3;
	g31 = *(int32_t *)(g23 - 0x71e4);
	g32 = *(int32_t *)(g23 - 0x71f4);
	g27 = a1;
	g28 = a2;
	g35 = a4;
	g36 = a5;
	int32_t result;
	if (a3 == 0) {
		// 0x6026c
		result = function_5f6f0();
		// branch -> 0x60274
	} else {
		// 0x6025c
		g34 = -1;
		result = function_5f568();
		// branch -> 0x60274
	}
	// 0x60274
	g29 = result;
	if (*(int32_t *)g31 > 126) {
		// 0x60314
		g10 = v1;
		return result;
	}
	// 0x60280
	function_5d8e8(g27, g28, 0x1000000 * *(int32_t *)g32 / 0x1000000);
	int32_t v2 = *(int32_t *)g31; // 0x60294
	int32_t v3 = g32;             // 0x602a4
	*(int32_t *)v3 = *(int32_t *)(v3 + 4 * (126 - v2));
	*(int32_t *)(4 * v2 + *(int32_t *)(g23 - 0x71e0)) = g30;
	int32_t v4 = GetRndSeed(); // 0x602b4
	g41 = g33;
	g13 = g36;
	int32_t v5 = 2 * (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x602d4
	g40 = 1;
	g42 = 0;
	function_5fd48(g30, g29, v4, (int16_t)v5);
	if (g35 != 0) {
		// 0x602ec
		function_8bd30(0, g30);
		// branch -> 0x602f8
	}
	// 0x602f8
	if (g36 != 0) {
		// 0x60300
		function_8aa08(g30);
		// branch -> 0x60308
	}
	int32_t *v6 = (int32_t *)g31; // 0x60308
	int32_t result2 = *v6;        // 0x60308
	*v6 = result2 + 1;
	// branch -> 0x60314
	// 0x60314
	g10 = v1;
	return result2;
}

// Address range: 0x60328 - 0x603cc
int32_t function_60328(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x60330
	g34 = a2;
	*(int32_t *)(*(int32_t *)(g23 - 0x7690) + 368 * a1) = a2;
	SetRndSeed();
	g37 = 2;
	int32_t v2 = random(34) == 0 ? 25 : 24;
	int32_t result; // 0x603b4
	if (a3 < 2) {
		// 0x60394
		function_5e014(a1, v2, a3);
		*(int16_t *)(g36 + 4 + g35) = (int16_t)(g32 + 384);
		result = function_5f358(g31);
		g10 = v1;
		return result;
	}
	// 0x6037c
	g37 = 3;
	int32_t v3; // 0x60398
	if (random(34) == 0) {
		// 0x60390
		v3 = 27;
		// branch -> 0x60394
	} else {
		// 0x6037c
		v3 = v2;
		// branch -> 0x60394
	}
	// 0x60394
	function_5e014(a1, v3, a3);
	*(int16_t *)(g36 + 4 + g35) = (int16_t)(g32 + 384);
	result = function_5f358(g31);
	g10 = v1;
	return result;
}

// Address range: 0x603cc - 0x60490
int32_t function_603cc(int32_t result, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g36; // 0x603cc
	int32_t v2 = g10; // 0x603d0
	int32_t v3 = g35; // 0x603d8
	int32_t v4 = g33; // 0x603e0
	int32_t v5 = g32; // 0x603e4
	if (*(int32_t *)*(int32_t *)(g23 - 0x71e4) > 126) {
		// 0x60470
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		g32 = v5;
		return result;
	}
	// 0x60404
	function_5d8e8(a2, a3, 0x1000000 * *(int32_t *)*(int32_t *)(g23 - 0x71f4) / 0x1000000);
	int32_t v6 = *(int32_t *)g35; // 0x60418
	int32_t v7 = g36;             // 0x60428
	*(int32_t *)v7 = *(int32_t *)(v7 + 4 * (126 - v6));
	*(int32_t *)(4 * v6 + *(int32_t *)(g23 - 0x71e0)) = g33;
	int32_t v8 = GetRndSeed(); // 0x60438
	function_60328(g33, v8, (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4));
	if (g32 != 0) {
		// 0x60458
		function_8bd30(0, g33);
		// branch -> 0x60464
	}
	int32_t *v9 = (int32_t *)g35; // 0x60464
	int32_t result2 = *v9;        // 0x60464
	*v9 = result2 + 1;
	// branch -> 0x60470
	// 0x60470
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	g32 = v5;
	return result2;
}

// Address range: 0x60490 - 0x60590
int32_t function_60490(int32_t result, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10;                        // 0x60494
	int32_t v2 = *(int32_t *)(g23 - 0x71e4); // 0x6049c
	g36 = v2;
	g31 = *(int32_t *)(g23 - 0x71f4);
	g27 = result;
	g28 = a2;
	g32 = a3;
	g33 = a6;
	g35 = a7;
	int32_t v3 = 0;
	if (a4 != 11) {
		int32_t v4 = function_5f7d0(a4, a5); // 0x604cc
		v3 = v4;
		result = v4;
		v2 = g36;
		// branch -> 0x604dc
	}
	// 0x604dc
	g29 = v3;
	if (*(int32_t *)v2 > 126) {
		// 0x6057c
		g10 = v1;
		return result;
	}
	// 0x604e8
	function_5d8e8(g27, g28, 0x1000000 * *(int32_t *)g31 / 0x1000000);
	int32_t v5 = *(int32_t *)g36; // 0x604fc
	int32_t v6 = g31;             // 0x6050c
	*(int32_t *)v6 = *(int32_t *)(v6 + 4 * (126 - v5));
	*(int32_t *)(4 * v5 + *(int32_t *)(g23 - 0x71e0)) = g30;
	int32_t v7 = GetRndSeed(); // 0x6051c
	g41 = g32;
	g13 = g35;
	int32_t v8 = 2 * (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x6053c
	g40 = 1;
	g42 = 0;
	function_5fd48(g30, g29, v7, (int16_t)v8);
	if (g33 != 0) {
		// 0x60554
		function_8bd30(0, g30);
		// branch -> 0x60560
	}
	// 0x60560
	if (g35 != 0) {
		// 0x60568
		function_8aa08(g30);
		// branch -> 0x60570
	}
	int32_t *v9 = (int32_t *)g36; // 0x60570
	int32_t result2 = *v9;        // 0x60570
	*v9 = result2 + 1;
	// branch -> 0x6057c
	// 0x6057c
	g10 = v1;
	return result2;
}

// Address range: 0x60590 - 0x606f0
int32_t function_60590(int32_t a1, int32_t a2, int16_t a3, int32_t a4, int32_t a5)
{
	// 0x60590
	g37 = a2;
	g34 = a1;
	int32_t v1 = g36;                        // 0x60590
	int32_t v2 = g10;                        // 0x60594
	int32_t v3 = *(int32_t *)(g23 - 0x7690); // 0x6059c
	int32_t v4 = g35;                        // 0x605a0
	g36 = a4;
	int32_t v5 = g33; // 0x605a8
	g33 = a5;
	int32_t v6 = g32;          // 0x605b0
	uint32_t v7 = (int32_t)a3; // 0x605b4
	g32 = v7;
	int32_t result; // r3
	if (g37 == 0) {
		int32_t v8 = 368 * g34 + v3; // 0x605c8
		g35 = v8;
		result = function_5d078(v8);
		*(int32_t *)g35 = g36;
		*(int16_t *)(g35 + 4) = (int16_t)g32;
		*(int32_t *)(g35 + 196) = g33;
		if (*(int32_t *)(g35 + 196) >= 2500) {
			// 0x605ec
			*(int32_t *)(g35 + 192) = 6;
			// branch -> 0x606d0
			// 0x606d0
			g36 = v1;
			g10 = v2;
			g35 = v4;
			g33 = v5;
			g32 = v6;
			return result;
		}
		// 0x605f8
		if (g33 > 1000) {
			// 0x6060c
			*(int32_t *)(g35 + 192) = 5;
			// branch -> 0x606d0
		} else {
			// 0x60600
			*(int32_t *)(g35 + 192) = 4;
			// branch -> 0x606d0
		}
		// 0x606d0
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v5;
		g32 = v6;
		return result;
	}
	int32_t v9 = v7 % 0x10000; // 0x60618
	if (v9 == 0) {
		int32_t v10 = 368 * g34 + v3; // 0x60624
		g35 = v10;
		function_5d078(v10);
		result = function_5d294((int32_t *)g35, g36);
		// branch -> 0x606d0
		// 0x606d0
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v5;
		g32 = v6;
		return result;
	}
	// 0x60640
	if (__asm_rlwinm_(v9, 0, 17, 21) != 0) {
		int32_t v11 = g36; // 0x6064c
		g39 = v11;
		result = function_64518(0x10000 * g32 / 0x10000, v11, g33);
		// branch -> 0x606d0
		// 0x606d0
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v5;
		g32 = v6;
		return result;
	}
	// 0x6065c
	if (__asm_rlwinm(v9, 0, 23, 24) == 384) {
		int32_t v12 = v7 % 64; // 0x6066c
		result = function_60328(g36, v12, v12);
		// branch -> 0x606d0
	} else {
		// 0x60678
		g40 = 0;
		g41 = 0;
		g42 = 0;
		g13 = 0;
		if (__asm_rlwinm_(v9, 0, 23, 23) != 0) {
			// 0x60690
			g40 = 1;
			// branch -> 0x60694
		}
		// 0x60694
		if (__asm_rlwinm_(v9, 0, 24, 24) != 0) {
			// 0x6069c
			g40 = 15;
			// branch -> 0x606a0
		}
		// 0x606a0
		if (__asm_rlwinm_(v9, 0, 25, 25) != 0) {
			// 0x606a8
			g41 = 1;
			// branch -> 0x606ac
		}
		// 0x606ac
		if (__asm_rlwinm_(v9, 0, 22, 22) != 0) {
			// 0x606b4
			g42 = 1;
			// branch -> 0x606b8
		}
		// 0x606b8
		if (__asm_rlwinm_(v9, 0, 16, 16) != 0) {
			// 0x606c0
			g13 = 1;
			// branch -> 0x606c4
		}
		int32_t v13 = g36;     // 0x606c4
		int32_t v14 = v7 % 64; // 0x606c8
		result = function_5fd48(v13, v14, v13, (int16_t)v14);
		// branch -> 0x606d0
	}
	// 0x606d0
	g36 = v1;
	g10 = v2;
	g35 = v4;
	g33 = v5;
	g32 = v6;
	return result;
}

// Address range: 0x606f0 - 0x60808
int32_t function_606f0(int32_t a1, int16_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, uint32_t a8, uint32_t a9)
{
	int32_t v1 = a2; // r4
	g30 = v1;
	g36 = *(int32_t *)(g23 - 0x76b4);
	g31 = a3;
	g25 = a4;
	g28 = a7;
	g29 = g13;
	g37 = 23;
	int32_t v2 = *(int32_t *)(g23 - 0x7690) + 368 * a1; // 0x6072c
	g35 = v2;
	g33 = a9;
	function_5d078(v2);
	int32_t v3 = __asm_rlwinm(v1, 24, 25, 31); // 0x60740
	g37 = *(int32_t *)(g23 - 0x5f8c);
	*(char *)g36 = (char)v3;
	int32_t v4 = __asm_rlwinm(a3, 8, 25, 31); // r5
	*(char *)(g36 + 1) = (char)(v1 % 128);
	int32_t v5 = __asm_rlwinm(a3, 16, 25, 31); // r0
	*(char *)(g36 + 2) = (char)v4;
	int32_t v6 = __asm_rlwinm(a3, 24, 25, 31); // r8
	*(char *)(g36 + 3) = (char)v5;
	*(char *)(g36 + 4) = (char)v6;
	*(char *)(g36 + 5) = (char)(a3 % 128);
	int32_t v7 = __asm_rlwinm(a8, 24, 25, 31); // r10
	*(char *)(g36 + 6) = (char)(g25 % 128);
	int32_t v8 = __asm_rlwinm(a9, 8, 25, 31); // r9
	v6 = __asm_rlwinm(a9, 16, 25, 31);
	*(char *)(g36 + 7) = (char)(a5 % 128);
	int32_t v9 = __asm_rlwinm(a9, 24, 25, 31); // r7
	*(char *)(g36 + 8) = (char)(a6 % 128);
	int32_t v10 = g36; // 0x607b0
	g38 = v10;
	*(char *)(v10 + 9) = (char)(g28 % 128);
	*(char *)(g36 + 10) = (char)(g29 % 128);
	*(char *)(g36 + 11) = (char)v7;
	*(char *)(g36 + 12) = (char)v8;
	*(char *)(g36 + 13) = (char)v6;
	*(char *)(g36 + 14) = (char)v9;
	*(char *)(g36 + 15) = (char)(a9 % 128);
	*(char *)(g36 + 16) = (char)0;
	sprintf();
	int32_t result = __asm_rlwinm(a8, 26, 30, 31); // 0x607d8
	*(int32_t *)(g35 + 192) = result + 19;
	*(int32_t *)(g35 + 196) = a8 % 64;
	*(int16_t *)(g35 + 4) = (int16_t)v1;
	*(int32_t *)g35 = a3;
	return result;
}

// Address range: 0x60808 - 0x6098c
int32_t function_60808(int32_t result, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g10; // 0x6080c
	g24 = a4;
	g35 = *(int32_t *)(g23 - 0x7690);
	int32_t v2 = *(int32_t *)(g23 - 0x71e4); // 0x60818
	g36 = v2;
	g28 = *(int32_t *)(g23 - 0x71f4);
	g29 = result;
	g30 = a2;
	g31 = a3;
	g32 = a5;
	int32_t v3;      // r29
	int32_t v4;      // 0x608e4
	int32_t v5;      // 0x608ec
	int32_t v6;      // 0x60910
	int32_t v7;      // 0x60960
	int32_t *v8;     // 0x608e4
	int32_t *v9;     // 0x6096c
	int32_t v10;     // 0x608d4
	int32_t v11;     // 0x608e4
	int32_t v12;     // 0x6090c
	int32_t v13;     // 0x60928
	int32_t result2; // 0x6096c
	int32_t v14;     // 0x60934
	if (a4 != 0) {
		int32_t v15 = 0; // 0x60840
		// branch -> 0x60840
		while (true) {
			int32_t v16 = v15 + 1; // 0x60840
			g25 = v16;
			if (v16 >= 1001) {
				// 0x6084c
				if (a4 >= 2) {
					// 0x60854
					g24 = a4 - 1;
					// branch -> 0x60858
				}
			}
			// 0x60858
			g37 = 112;
			g30 = random(0);
			g37 = 112;
			int32_t v17 = random(0); // 0x60870
			result = v17;
			g31 = v17;
			g27 = 0;
			int32_t v18 = g24; // 0x608bc6
			int32_t v19 = v18; // 0x6084c12
			if (v18 > 0) {
				int32_t v20 = 0; // 0x608b017
				int32_t v21 = 0; // 0x60884
				int32_t v22 = 0; // 0x608c4
				int32_t v23;     // 0x608cc
				while (true) {
					// 0x608c4
					if (v22 == 0) {
						// 0x60884
						g33 = g30 + v21;
						g26 = 0;
						int32_t v24 = v21; // 0x608b8
						int32_t v25 = v18; // 0x608bc
						int32_t v26 = v20; // 0x608b018
						int32_t v27 = 0;   // 0x608c414
						if (v18 > 0) {
							int32_t v28 = 0;   // 0x60894
							int32_t v29 = v20; // 0x608b0
							int32_t v30;
							int32_t v31; // 0x608a8
							while (true) {
								// 0x608b0
								if (v29 == 0) {
									int32_t v32 = function_5d584(g33, g31 + v28); // 0x60898
									result = v32;
									g26++;
									int32_t v33 = __asm_rlwinm(llvm_ctlz_i32(v32, true), 27, 24, 31); // 0x608a4
									int32_t v34 = g26;                                                // 0x608a8
									v31 = g24;
									if (v34 >= v31) {
										v30 = v33;
										// break -> 0x608b8
										break;
									}
									v28 = v34;
									v29 = v33;
									// continue -> 0x608b0
									continue;
								}
								// 0x608b8
								// branch -> 0x608b8
							}
							// 0x608b8
							v24 = g27;
							v25 = v31;
							v26 = v30;
							v27 = v30;
							// branch -> 0x608b8
						}
						int32_t v35 = v24 + 1; // 0x608b8
						g27 = v35;
						if (v35 >= v25) {
							v23 = v26;
							v19 = v25;
							// break -> 0x608cc
							break;
						}
						v20 = v26;
						v21 = v35;
						v22 = v27;
						v18 = v25;
						// continue -> 0x608c4
						continue;
					} else {
						v23 = v20;
						v19 = v18;
					}
				}
				// 0x608cc
				if (v23 == 0) {
					// 0x608d4
					// branch -> 0x608d4
					// 0x608d4
					v10 = *(int32_t *)g36;
					if (v10 > 126) {
						// 0x60978
						g10 = v1;
						return result;
					}
					// 0x608e0
					v4 = g28;
					v8 = (int32_t *)v4;
					v11 = *v8;
					v3 = v11;
					v5 = g23;
					*v8 = *(int32_t *)(v4 + 4 * (126 - v10));
					*(int32_t *)(*(int32_t *)(v5 - 0x71e0) + 4 * v10) = v3;
					v12 = 368 * v11 + g35;
					v6 = g30;
					*(int32_t *)(v12 + 12) = v6;
					*(int32_t *)(v12 + 16) = g31;
					v13 = *(int32_t *)*(int32_t *)(v5 - 0x768c);
					*(char *)(v13 + g31 + 112 * v6) = (char)(v11 + 1);
					v14 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
					function_5e014(v3, g29, v14);
					function_5f358(g33);
					*(int32_t *)(g35 + 52) = 1;
					if (g32 != 0) {
						// 0x60954
						*(char *)(g35 + 48) = (char)g32;
						v7 = g35;
						*(int32_t *)(v7 + 32) = *(int32_t *)(v7 + 28);
						*(int32_t *)(g35 + 20) = 0;
						// branch -> 0x6096c
					}
					// 0x6096c
					v9 = (int32_t *)g36;
					result2 = *v9;
					*v9 = result2 + 1;
					// branch -> 0x60978
					// 0x60978
					g10 = v1;
					return result2;
				}
			lab_0x608cc:
				// 0x608cc
				a4 = v19;
				v15 = g25;
				// branch -> 0x60840
				continue;
			}
			// 0x608d4
			// branch -> 0x608d4
		}
	}
	// 0x608d4
	v10 = *(int32_t *)v2;
	if (v10 > 126) {
		// 0x60978
		g10 = v1;
		return result;
	}
	// 0x608e0
	v4 = g28;
	v8 = (int32_t *)v4;
	v11 = *v8;
	v3 = v11;
	v5 = g23;
	*v8 = *(int32_t *)(v4 + 4 * (126 - v10));
	*(int32_t *)(*(int32_t *)(v5 - 0x71e0) + 4 * v10) = v3;
	v12 = 368 * v11 + g35;
	v6 = g30;
	*(int32_t *)(v12 + 12) = v6;
	*(int32_t *)(v12 + 16) = g31;
	v13 = *(int32_t *)*(int32_t *)(v5 - 0x768c);
	*(char *)(v13 + g31 + 112 * v6) = (char)(v11 + 1);
	v14 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
	function_5e014(v3, g29, v14);
	function_5f358(g33);
	*(int32_t *)(g35 + 52) = 1;
	if (g32 != 0) {
		// 0x60954
		*(char *)(g35 + 48) = (char)g32;
		v7 = g35;
		*(int32_t *)(v7 + 32) = *(int32_t *)(v7 + 28);
		*(int32_t *)(g35 + 20) = 0;
		// branch -> 0x6096c
	}
	// 0x6096c
	v9 = (int32_t *)g36;
	result2 = *v9;
	*v9 = result2 + 1;
	// branch -> 0x60978
	// 0x60978
	g10 = v1;
	return result2;
}

// Address range: 0x6098c - 0x60abc
int32_t function_6098c(int32_t a1)
{
	int32_t v1 = g10;                                    // 0x60990
	int32_t v2 = *(int32_t *)(g23 - 0x7688);             // r5
	int32_t v3 = *(int32_t *)(g23 - 0x7690);             // 0x609a8
	int32_t v4 = *(int32_t *)(g23 - 0x71e4);             // r31
	int32_t v5 = *(int32_t *)(g23 - 0x71f4);             // r4
	int32_t v6 = *(int32_t *)(g23 - 0x7190);             // r6
	int32_t v7 = *(int32_t *)*(int32_t *)(g23 - 0x7194); // 0x609c4
	int32_t v8;                                          // r30
	int32_t v9;                                          // r8
	int32_t v10;                                         // 0x60a0c
	int32_t v11;                                         // 0x60a10
	int32_t result;                                      // 0x60ab8
	int32_t *v12;                                        // 0x60a0c
	int32_t *v13;                                        // 0x60a94
	int32_t v14;                                         // 0x60a04
	int32_t v15;                                         // 0x60a0c
	int32_t v16;                                         // 0x60a40
	int32_t v17;                                         // 0x60a60
	int32_t v18;                                         // 0x60a94
	int32_t v19;                                         // 0x60a20
	int32_t v20;                                         // 0x60a48
	int32_t v21;                                         // 0x60a58
	int32_t v22;                                         // 0x60a6c
	if (v7 <= 0) {
		result = v7;
		// 0x60aa0
		g10 = v1;
		return result;
	}
	int32_t v23 = 0; // 0x609d4
	int32_t v24 = 0; // 0x609f4
	int32_t v25;     // 0x609fc
	while (true) {
		// 0x609f4
		if (v24 == 0) {
			int32_t v26 = v6;              // 0x609cc
			int32_t v27 = *(int32_t *)v26; // 0x609cc
			g40 = v27;
			v6 = v26 + 4;
			int32_t v28 = llvm_ctlz_i32(23 - *(int32_t *)(v2 + 120 * v27), true); // 0x609e4
			int32_t v29 = __asm_rlwinm(v28, 27, 24, 31);                          // 0x609e8
			int32_t v30 = v23 + 1;                                                // 0x609ec
			if (v30 >= v7) {
				v25 = v29;
				// break -> 0x609fc
				break;
			}
			v23 = v30;
			v24 = v29;
			// continue -> 0x609f4
			continue;
		} else {
			v25 = v24;
		}
	}
	// 0x609fc
	if (v25 != 0) {
		// 0x60a04
		v14 = *(int32_t *)v4;
		v10 = v5;
		v12 = (int32_t *)v10;
		v15 = *v12;
		v8 = v15;
		v11 = g23;
		v9 = v2 + 120 * g40;
		v19 = *(int32_t *)(v11 - 0x768c);
		*v12 = *(int32_t *)(v10 + 4 * (126 - v14));
		*(int32_t *)(*(int32_t *)(v11 - 0x71e0) + 4 * v14) = v8;
		v16 = 368 * v15 + v3;
		v20 = *(int32_t *)(v9 + 4);
		*(int32_t *)(v16 + 12) = v20;
		v21 = *(int32_t *)(v9 + 8);
		*(int32_t *)(v16 + 16) = v21;
		v17 = v21 + 112 * v20;
		*(char *)(*(int32_t *)v19 + v17) = (char)(v15 + 1);
		v22 = (int32_t) * (char *)*(int32_t *)(v11 - 0x77e4);
		function_5e014(v8, 9, v22);
		function_5f358(g35);
		*(char *)(g33 + 48) = 2;
		*(int32_t *)(g33 + 52) = 1;
		*(int32_t *)(g33 + 32) = 11;
		v13 = (int32_t *)g36;
		v18 = *v13;
		*v13 = v18 + 1;
		result = v18;
		// branch -> 0x60aa0
	} else {
		result = v7;
	}
	// 0x60aa0
	g10 = v1;
	return result;
}

// Address range: 0x60abc - 0x60bd4
int32_t function_60abc(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36;                        // 0x60abc
	int32_t v2 = *(int32_t *)(g23 - 0x7690); // 0x60ac8
	g36 = v2;
	int32_t v3 = g35;      // 0x60acc
	int32_t v4 = 368 * a1; // 0x60ad0
	g35 = v4;
	int32_t v5 = g33;            // 0x60ad8
	int32_t v6 = v4 + v2;        // 0x60ae4
	int32_t result = 96;         // r3
	int32_t v7 = 0;              // r4
	int32_t v8 = v6 + 192;       // 0x60afc
	int32_t v9 = *(int32_t *)v8; // 0x60afc
	g33 = v8;
	int32_t v10 = (int32_t) * (char *)(v9 + *(int32_t *)(g23 - 0x71d0)); // 0x60b04
	int32_t v11 = 4 * v10;                                               // 0x60b0c
	int32_t v12 = *(int32_t *)(v11 + *(int32_t *)(g23 - 0x5f6c));        // 0x60b10
	*(int32_t *)(v6 + 24) = v12;
	unsigned char v13 = *(char *)(v10 + *(int32_t *)(g23 - 0x5f88)); // 0x60b18
	*(int32_t *)(v6 + 28) = (int32_t)v13;
	*(int32_t *)(v6 + 36) = result;
	*(int32_t *)(v6 + 40) = 16;
	*(int32_t *)(v6 + 52) = v7;
	*(char *)(v6 + 305) = (char)v7;
	if (a2 == 0) {
		int32_t v14 = *(int32_t *)(v6 + 28); // 0x60b48
		result = v14;
		*(int32_t *)(v6 + 32) = v14;
		*(int32_t *)(v6 + 20) = v7;
		*(char *)(v6 + 48) = (char)1;
		// branch -> 0x60b5c
	} else {
		// 0x60b34
		*(int32_t *)(v6 + 32) = 1;
		*(int32_t *)(v6 + 20) = 1;
		*(char *)(v6 + 48) = (char)v7;
		// branch -> 0x60b5c
	}
	int32_t v15 = g33; // 0x60b5c
	int32_t v16 = v15; // 0x60b88
	if (*(int32_t *)v15 == 76) {
		int32_t v17 = g35 + g36; // 0x60b68
		*(char *)(v17 + 48) = 1;
		int32_t v18 = *(int32_t *)(v11 + *(int32_t *)(g23 - 0x5f90)); // 0x60b78
		g34 = v18;
		g38 = *(int32_t *)(v17 + 16);
		result = PlaySfxLoc(v18);
		v16 = g33;
		// branch -> 0x60b88
	}
	int32_t v19 = v16; // 0x60ba0
	if (*(int32_t *)v16 == 126) {
		int32_t v20 = g35 + g36; // 0x60b94
		result = v20;
		*(char *)(v20 + 48) = 1;
		v19 = g33;
		// branch -> 0x60ba0
	}
	// 0x60ba0
	if (*(int32_t *)v19 == 140) {
		int32_t v21 = g35 + g36; // 0x60bac
		result = v21;
		*(char *)(v21 + 48) = 1;
		// branch -> 0x60bb8
	}
	// 0x60bb8
	g36 = v1;
	g35 = v3;
	g33 = v5;
	return result;
}

// Address range: 0x60bd4 - 0x60c24
int32_t function_60bd4(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x71e4); // 0x60bd4
	int32_t v2 = *(int32_t *)(g23 - 0x71f4); // 0x60bd8
	int32_t v3 = *(int32_t *)(g23 - 0x71e0); // r7
	*(int32_t *)(4 * (127 - *(int32_t *)v1) + v2) = g34;
	int32_t *v4 = (int32_t *)v1; // 0x60bf0
	int32_t result = *v4;        // 0x60bf0
	*v4 = result - 1;
	int32_t v5 = *(int32_t *)v1; // 0x60bfc
	if (v5 < 1) {
		// bb
		return result;
	}
	int32_t v6 = g37; // 0x60c08
	if (v6 == v5) {
		// bb1
		return result;
	}
	int32_t result2 = *(int32_t *)(v3 + 4 * v5); // 0x60c14
	*(int32_t *)(v3 + 4 * v6) = result2;
	return result2;
}

// Address range: 0x60c24 - 0x60e0c
int32_t function_60c24(void)
{
	int32_t result = *(int32_t *)(g23 - 0x77f0); // 0x60c24
	int32_t v1 = *(int32_t *)(g23 - 0x7198);     // 0x60c28
	int32_t v2 = *(int32_t *)(g23 - 0x7690);     // r5
	int32_t v3 = *(int32_t *)(g23 - 0x768c);     // 0x60c38
	if (*(char *)result == 1) {
		// bb
		return result;
	}
	int32_t v4 = 16;   // ctr
	int32_t v5 = 16;   // r11
	int32_t v6 = 1792; // r7
	int32_t v7 = 0;    // r0
	int32_t v8 = 16;   // 0x60c84
	int32_t v9 = 1792; // 0x60c5c
	int32_t v10 = v1;  // 0x60c54
	// branch -> 0x60c54
	while (true) {
		int32_t v11 = *(int32_t *)v10;                   // 0x60c54
		char *v12 = (char *)(v11 + v9 + *(int32_t *)v3); // 0x60c64
		char v13 = *v12;                                 // 0x60c64
		int32_t v14 = v13;                               // 0x60c68
		int32_t v15 = v8;                                // 0x60ca8
		int32_t v16 = v3;                                // 0x60ca4
		int32_t v17 = v9;                                // 0x60ca0
		int32_t v18 = v10;                               // 0x60c9c
		int32_t v19;                                     // 0x60cec
		int32_t v20;                                     // 0x60cf4
		int32_t v21;                                     // 0x60ca0
		int32_t v22;                                     // 0x60ca8
		char *v23;                                       // 0x60cb4
		int32_t v24;                                     // 0x60c9c
		char v25;                                        // 0x60cb4
		if (v13 != 0) {
			int32_t v26 = v2 + 368 * v14 - 368; // 0x60c7c
			if (*(int32_t *)(v26 + 12) == v8) {
				// 0x60c8c
				if (*(int32_t *)(v26 + 16) != v11) {
					// 0x60c98
					*v12 = (char)v7;
					v15 = v5;
					v16 = v3;
					v17 = v6;
					v18 = v1;
					// branch -> 0x60c9c
				} else {
					v15 = v8;
					v16 = v3;
					v17 = v9;
					v18 = v10;
				}
			} else {
				// 0x60c98
				*v12 = (char)v7;
				v15 = v5;
				v16 = v3;
				v17 = v6;
				v18 = v1;
				// branch -> 0x60c9c
			}
			// 0x60c9c
			v24 = *(int32_t *)v18;
			v21 = v17 + 112;
			v6 = v21;
			v22 = v15 + 1;
			v5 = v22;
			v23 = (char *)(v24 + v21 + *(int32_t *)v16);
			v25 = *v23;
			v20 = v16;
			v19 = v18;
			int32_t v27; // 0x60d3c
			int32_t v28; // 0x60d44
			int32_t v29; // 0x60cf0
			int32_t v30; // 0x60cf8
			char *v31;   // 0x60d04
			int32_t v32; // 0x60cec
			char v33;    // 0x60d04
			if (v25 != 0) {
			lab_0x60cc0:;
				int32_t v34 = v2 + 368 * (int32_t)v25 - 368; // 0x60ccc
				int32_t v35;                                 // 0x60cf0
				int32_t v36;                                 // 0x60cf8
				if (*(int32_t *)(v34 + 12) == v22) {
					// 0x60cdc
					if (*(int32_t *)(v34 + 16) != v24) {
						// 0x60ce8
						*v23 = (char)v7;
						v36 = v5;
						v20 = v3;
						v35 = v6;
						v19 = v1;
						// branch -> 0x60cec
					} else {
						v36 = v22;
						v20 = v16;
						v35 = v21;
						v19 = v18;
					}
				} else {
					// 0x60ce8
					*v23 = (char)v7;
					v36 = v5;
					v20 = v3;
					v35 = v6;
					v19 = v1;
					// branch -> 0x60cec
				}
				// 0x60cec
				v32 = *(int32_t *)v19;
				v29 = v35 + 112;
				v6 = v29;
				v30 = v36 + 1;
				v5 = v30;
				v31 = (char *)(v32 + v29 + *(int32_t *)v20);
				v33 = *v31;
				v28 = v20;
				v27 = v19;
				int32_t v37; // 0x60d8c
				int32_t v38; // 0x60d40
				int32_t v39; // 0x60d48
				char *v40;   // 0x60d54
				int32_t v41; // 0x60d3c
				char v42;    // 0x60d54
				if (v33 != 0) {
				lab_0x60d10:;
					int32_t v43 = v2 + 368 * (int32_t)v33 - 368; // 0x60d1c
					int32_t v44;                                 // 0x60d40
					int32_t v45;                                 // 0x60d48
					if (*(int32_t *)(v43 + 12) == v30) {
						// 0x60d2c
						if (*(int32_t *)(v43 + 16) != v32) {
							// 0x60d38
							*v31 = (char)v7;
							v45 = v5;
							v28 = v3;
							v44 = v6;
							v27 = v1;
							// branch -> 0x60d3c
						} else {
							v45 = v30;
							v28 = v20;
							v44 = v29;
							v27 = v19;
						}
					} else {
						// 0x60d38
						*v31 = (char)v7;
						v45 = v5;
						v28 = v3;
						v44 = v6;
						v27 = v1;
						// branch -> 0x60d3c
					}
					// 0x60d3c
					v41 = *(int32_t *)v27;
					v38 = v44 + 112;
					v6 = v38;
					v39 = v45 + 1;
					v5 = v39;
					v40 = (char *)(v41 + v38 + *(int32_t *)v28);
					v42 = *v40;
					v37 = v27;
					int32_t v46; // 0x60de8
					int32_t v47; // 0x60d90
					int32_t v48; // 0x60d98
					char *v49;   // 0x60da4
					int32_t v50; // 0x60d8c
					char v51;    // 0x60da4
					if (v42 != 0) {
					lab_0x60d60:;
						int32_t v52 = v2 + 368 * (int32_t)v42 - 368; // 0x60d6c
						int32_t v53;                                 // 0x60d90
						int32_t v54;                                 // 0x60d94
						int32_t v55;                                 // 0x60d98
						if (*(int32_t *)(v52 + 12) == v39) {
							// 0x60d7c
							if (*(int32_t *)(v52 + 16) != v41) {
								// 0x60d88
								*v40 = (char)v7;
								v55 = v5;
								v54 = v3;
								v53 = v6;
								v37 = v1;
								// branch -> 0x60d8c
							} else {
								v55 = v39;
								v54 = v28;
								v53 = v38;
								v37 = v27;
							}
						} else {
							// 0x60d88
							*v40 = (char)v7;
							v55 = v5;
							v54 = v3;
							v53 = v6;
							v37 = v1;
							// branch -> 0x60d8c
						}
						// 0x60d8c
						v50 = *(int32_t *)v37;
						v47 = v53 + 112;
						v6 = v47;
						v48 = v55 + 1;
						v5 = v48;
						v49 = (char *)(v50 + v47 + *(int32_t *)v54);
						v51 = *v49;
						v46 = v37;
						int32_t result2; // r3
						int32_t v56;     // 0x60ddc
						int32_t v57;     // 0x60de0
						int32_t v58;     // 0x60de4
						int32_t *v59;    // 0x60de8
						int32_t *v60;    // 0x60df4
						int32_t v61;     // 0x60de8
						if (v51 != 0) {
						lab_0x60db0:;
							int32_t v62 = v2 + 368 * (int32_t)v51 - 368; // 0x60dbc
							int32_t v63;                                 // 0x60ddc
							int32_t v64;                                 // 0x60de0
							if (*(int32_t *)(v62 + 12) == v48) {
								// 0x60dcc
								if (*(int32_t *)(v62 + 16) != v50) {
									// 0x60dd8
									*v49 = (char)v7;
									v46 = v1;
									v64 = v5;
									v63 = v6;
									// branch -> 0x60ddc
								} else {
									v46 = v37;
									v64 = v48;
									v63 = v47;
								}
							} else {
								// 0x60dd8
								*v49 = (char)v7;
								v46 = v1;
								v64 = v5;
								v63 = v6;
								// branch -> 0x60ddc
							}
							// 0x60ddc
							v56 = v63 + 112;
							v6 = v56;
							v57 = v64 + 1;
							v5 = v57;
							v58 = v4 - 1;
							v4 = v58;
							if (v58 == 0) {
								// 0x60de8
								v59 = (int32_t *)v46;
								v61 = *v59;
								result2 = v61;
								*v59 = v61 + 1;
								v60 = (int32_t *)v1;
								if (*v60 != 96) {
									// bb27
									return result2;
								}
								// 0x60e00
								*v60 = 16;
								return result2;
							}
						lab_0x60ddc:
							// 0x60ddc
							v8 = v57;
							v9 = v56;
							v10 = v46;
							// branch -> 0x60c54
							continue;
						}
					lab_0x60ddc_2:
						// 0x60ddc
						v56 = v47 + 112;
						v6 = v56;
						v57 = v48 + 1;
						v5 = v57;
						v58 = v4 - 1;
						v4 = v58;
						if (v58 != 0) {
							goto lab_0x60ddc;
						}
						// 0x60de8
						v59 = (int32_t *)v46;
						v61 = *v59;
						result2 = v61;
						*v59 = v61 + 1;
						v60 = (int32_t *)v1;
						if (*v60 != 96) {
							// bb27
							return result2;
						}
						// 0x60e00
						*v60 = 16;
						return result2;
					}
				lab_0x60d8c:
					// 0x60d8c
					v50 = *(int32_t *)v37;
					v47 = v38 + 112;
					v6 = v47;
					v48 = v39 + 1;
					v5 = v48;
					v49 = (char *)(v50 + v47 + *(int32_t *)v28);
					v51 = *v49;
					if (v51 == 0) {
						v46 = v37;
						goto lab_0x60ddc_2;
					}
					goto lab_0x60db0;
				}
			lab_0x60d3c:
				// 0x60d3c
				v41 = *(int32_t *)v27;
				v38 = v29 + 112;
				v6 = v38;
				v39 = v30 + 1;
				v5 = v39;
				v40 = (char *)(v41 + v38 + *(int32_t *)v28);
				v42 = *v40;
				if (v42 == 0) {
					v37 = v27;
					goto lab_0x60d8c;
				}
				goto lab_0x60d60;
			}
		lab_0x60cec:
			// 0x60cec
			v32 = *(int32_t *)v19;
			v29 = v21 + 112;
			v6 = v29;
			v30 = v22 + 1;
			v5 = v30;
			v31 = (char *)(v32 + v29 + *(int32_t *)v20);
			v33 = *v31;
			if (v33 == 0) {
				v28 = v20;
				v27 = v19;
				goto lab_0x60d3c;
			}
			goto lab_0x60d10;
		}
		// 0x60c9c
		v24 = *(int32_t *)v18;
		v21 = v17 + 112;
		v6 = v21;
		v22 = v15 + 1;
		v5 = v22;
		v23 = (char *)(v24 + v21 + *(int32_t *)v16);
		v25 = *v23;
		if (v25 == 0) {
			v20 = v16;
			v19 = v18;
			goto lab_0x60cec;
		}
		goto lab_0x60cc0;
	}
}

// Address range: 0x60e0c - 0x60f38
int32_t function_60e0c(int32_t a1)
{
	int32_t v1 = g10; // 0x60e10
	g32 = *(int32_t *)(g23 - 0x5f90);
	g29 = 0;
	g33 = *(int32_t *)(g23 - 0x71d0);
	int32_t v2 = *(int32_t *)(g23 - 0x7690); // 0x60e20
	g35 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x71e4); // 0x60e24
	g36 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x71e0); // 0x60e28
	g31 = v4;
	int32_t result; // 0x60f20
	if (*(int32_t *)v3 > 0) {
		while (true) {
			int32_t v5 = 368 * *(int32_t *)v4; // 0x60e3c
			int32_t v6;                        // 0x60f0c
			int32_t v7;                        // 0x60f10
			if (*(int32_t *)(v5 + 20 + v2) != 0) {
				int32_t v8 = v5 + v2; // 0x60e50
				g28 = v8;
				int32_t v9 = v8 + 32; // 0x60e54
				g30 = v9;
				int32_t *v10 = (int32_t *)v9; // 0x60e58
				*v10 = *v10 + 1;
				int32_t v11 = g28;                     // 0x60e64
				int32_t v12 = *(int32_t *)(v11 + 192); // 0x60e64
				if (v12 == 76) {
					int32_t v13 = v11 + 48; // 0x60e70
					int32_t v14 = v13;      // r3
					int32_t v15 = v13;      // 0x60e94
					if (*(char *)v13 == 1) {
						int32_t *v16 = (int32_t *)g30; // 0x60e80
						if (*v16 == 11) {
							// 0x60e8c
							*v16 = 1;
							v15 = v14;
							// branch -> 0x60e94
						} else {
							v15 = v13;
						}
					}
					// 0x60e94
					if (*(char *)v15 == 2) {
						int32_t *v17 = (int32_t *)g30; // 0x60ea0
						if (*v17 == 21) {
							// 0x60eac
							*v17 = 11;
							// branch -> 0x60f0c
						}
					}
				} else {
					int32_t v18 = v11 + 28; // 0x60eb8
					g27 = v18;
					int32_t v19 = g30;              // 0x60ebc
					uint32_t v20 = *(int32_t *)v18; // 0x60ec0
					int32_t v21 = v19;              // 0x60ef8
					if (*(int32_t *)v19 == (v20 / 2 || v20 & -0x80000000)) {
						// 0x60ed0
						g38 = *(int32_t *)(v11 + 16);
						int32_t v22 = *(int32_t *)(g32 + 4 * (int32_t) * (char *)(g33 + v12)); // 0x60ee0
						g34 = v22;
						PlaySfxLoc(v22);
						v18 = g27;
						v21 = g30;
						// branch -> 0x60ee8
					}
					int32_t *v23 = (int32_t *)v21;  // 0x60ee8
					uint32_t v24 = *(int32_t *)v18; // 0x60eec
					if (*v23 >= v24) {
						// 0x60ef8
						*v23 = v24;
						*(int32_t *)(g28 + 20) = 0;
						*(char *)(g28 + 48) = (char)1;
						// branch -> 0x60f0c
					}
				}
				// 0x60f0c
				v6 = g31 + 4;
				g31 = v6;
				v7 = g29 + 1;
				g29 = v7;
				if (v7 >= *(int32_t *)g36) {
					// 0x60f20
					result = function_60c24();
					g10 = v1;
					return result;
				}
			lab_0x60f0c:
				// 0x60f0c
				v2 = g35;
				v4 = v6;
				// branch -> 0x60e38
				continue;
			}
			// 0x60f0c
			v6 = g31 + 4;
			g31 = v6;
			v7 = g29 + 1;
			g29 = v7;
			if (v7 < *(int32_t *)g36) {
				goto lab_0x60f0c;
			}
			// 0x60f20
			result = function_60c24();
			g10 = v1;
			return result;
		}
	}
	// 0x60f20
	result = function_60c24();
	g10 = v1;
	return result;
}

// Address range: 0x60f38 - 0x60f8c
int32_t FreeItemGFX(int32_t a1)
{
	int32_t v1 = g36;                        // 0x60f38
	int32_t v2 = *(int32_t *)(g23 - 0x5f6c); // 0x60f40
	g36 = v2;
	int32_t result = MemFreeDbg((int32_t *)v2); // 0x60f60
	int32_t v3 = 1;                             // 0x60f64
	int32_t v4 = g36 + 4;                       // 0x60f68
	g36 = v4;
	// branch -> 0x60f5c
	while (v3 < 35) {
		// 0x60f5c
		result = MemFreeDbg((int32_t *)v4);
		v3++;
		v4 = g36 + 4;
		g36 = v4;
		// continue -> 0x60f5c
	}
	// 0x60f74
	g36 = v1;
	return result;
}

// Address range: 0x60f8c - 0x60fb8
int32_t function_60f8c(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x7690) + 368 * a1;                  // 0x60f9c
	int32_t v1 = *(int32_t *)(result + 192);                                 // 0x60fa0
	unsigned char v2 = *(char *)(v1 + *(int32_t *)(g23 - 0x71d0));           // 0x60fa4
	int32_t v3 = *(int32_t *)(4 * (int32_t)v2 + *(int32_t *)(g23 - 0x5f6c)); // 0x60fac
	*(int32_t *)(result + 24) = v3;
	return result;
}

// Address range: 0x60fb8 - 0x61098
int32_t function_60fb8(int32_t a1)
{
	int32_t v1 = g36;                        // 0x60fb8
	int32_t v2 = *(int32_t *)(g23 - 0x7690); // 0x60fc0
	g36 = v2;
	int32_t v3 = g35;                        // 0x60fc4
	int32_t v4 = *(int32_t *)(g23 - 0x76a4); // 0x60fc8
	g35 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x7728); // r29
	int32_t v6 = 368 * a1;                   // 0x60fd8
	int32_t v7 = v6 + v2;                    // 0x60fe0
	int32_t result;                          // 0x61094
	if (*(int32_t *)(v7 + 8) == 11) {
		int32_t v8 = *(int32_t *)(v7 + 196); // 0x60ff8
		function_314d0(v8);
		g37 = *(int32_t *)(g23 - 0x5f94);
		g38 = v8;
		result = sprintf();
		// branch -> 0x61078
	} else {
		// 0x6101c
		g34 = v4;
		if (*(int32_t *)(v7 + 56) == 0) {
			// 0x6103c
			g37 = v2 + 61 + v6;
			strcpy();
			// branch -> 0x6104c
		} else {
			// 0x61028
			g37 = v2 + 125 + v6;
			strcpy();
			// branch -> 0x6104c
		}
		unsigned char v9 = *(char *)(v6 + g36 + 60); // 0x61050
		int32_t v10 = v9;                            // 0x61050
		if (v9 == 1) {
			// 0x6105c
			*(char *)v5 = 1;
			// branch -> 0x61064
		}
		// 0x61064
		if (0x1000000 * v10 == 0x2000000) {
			// 0x61070
			*(char *)v5 = 3;
			result = v10;
			// branch -> 0x61078
		} else {
			result = v10;
		}
	}
	// 0x61078
	g36 = v1;
	g35 = v3;
	return result;
}

// Address range: 0x61098 - 0x61128
int32_t function_61098(int32_t a1, int32_t a2, int32_t a3)
{
	g36 = a1;
	*(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 56 + 368 * a2 + 1176 + 0x55ec * a1) = 1;
	CalcPlrInv(g36, 1);
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0x610fc
	int32_t result = v1;                     // 0x61124
	if (g36 == *(int32_t *)v1) {
		// 0x6110c
		g34 = 1;
		result = function_324ec(1);
		// branch -> 0x61114
	}
	// 0x61114
	return result;
}

// Address range: 0x61128 - 0x61210
int32_t function_61128(int32_t a1)
{
	int32_t v1 = g36;                    // 0x61128
	int32_t v2 = g10;                    // 0x6112c
	int32_t v3 = g37;                    // 0x61138
	int32_t v4 = v3;                     // r29
	int32_t v5 = *(int32_t *)(a1 + 240); // 0x61150
	int32_t result = v5;                 // r3
	if (*(int32_t *)(a1 + 236) == v5) {
		// 0x611f0
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x6115c
	if (v5 > 0) {
		int32_t v6 = 0; // r30
		g36 = v3 + 9;
		// branch -> 0x61178
		while (true) {
			// 0x61178
			g37 = v3;
			int32_t *v7 = (int32_t *)(a1 + 240); // 0x61184
			v6 = v6 + random(37) + v4;
			int32_t v8 = *v7 / g36; // 0x61190
			*v7 = *v7 - (v8 < 1 ? 1 : v8);
			int32_t v9 = *(int32_t *)(a1 + 240); // 0x611b0
			result = v9;
			if (v9 == 0) {
				// 0x611bc
				*(int32_t *)(a1 + 8) = -1;
				// branch -> 0x611f0
				// 0x611f0
				g36 = v1;
				g10 = v2;
				return result;
			}
			int32_t *v10 = (int32_t *)(a1 + 236); // 0x611c8
			int32_t v11 = v6 + *v10;              // 0x611cc
			if (v11 >= v9) {
				// 0x611d8
				*v10 = v11;
				int32_t *v12 = (int32_t *)(a1 + 236); // 0x611dc
				int32_t v13 = *(int32_t *)(a1 + 240); // 0x611e0
				result = v13;
				if (*v12 <= v13) {
					// 0x611f0
					g36 = v1;
					g10 = v2;
					return result;
				}
				// 0x611ec
				*v12 = v13;
				// branch -> 0x611f0
				// 0x611f0
				g36 = v1;
				g10 = v2;
				return result;
			}
			// 0x611c8
			v3 = v4;
			// branch -> 0x61178
		}
	} else {
		// 0x61164
		*(int32_t *)(a1 + 8) = -1;
		// branch -> 0x611f0
	}
	// 0x611f0
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0x61210 - 0x612c0
int32_t function_61210(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x61210
	g35 = a2;
	g33 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0x61238
	g36 = v1;
	g34 = 85;
	g38 = *(int32_t *)(v1 + 60);
	PlaySfxLoc(85);
	if (g35 > 6) {
		// 0x61264
		// branch -> 0x61274
	}
	int32_t v2 = (int32_t) * (char *)(g36 + 436); // 0x61278
	g37 = v2;
	function_61128(v2);
	CalcPlrInv(g33, 1);
	int32_t v3 = *(int32_t *)(g23 - 0x77ac); // 0x6128c
	int32_t result = v3;                     // 0x612bc
	if (g33 == *(int32_t *)v3) {
		// 0x6129c
		g34 = 1;
		result = function_324ec(1);
		// branch -> 0x612a4
	}
	// 0x612a4
	return result;
}

// Address range: 0x612c0 - 0x61310
int32_t function_612c0(int32_t result, int32_t a2)
{
	// 0x612c0
	if (*(int32_t *)(result + 228) == *(int32_t *)(result + 232)) {
		// bb
		return result;
	}
	int32_t result2 = result; // r3
	int32_t *v1;              // 0x612f4
	uint32_t v2;              // 0x612f4
	uint32_t v3;              // 0x612f8
	while (true) {
		int32_t *v4 = (int32_t *)(result + 232); // 0x612d0
		*v4 = *v4 - 1;
		if (*(int32_t *)(result2 + 232) == 0) {
			// bb5
			return result2;
		}
		int32_t *v5 = (int32_t *)(result2 + 228); // 0x612e8
		*v5 = a2 + *v5;
		v1 = (int32_t *)(result2 + 228);
		v2 = *v1;
		v3 = *(int32_t *)(result2 + 232);
		if (v2 >= v3) {
			// break -> 0x61304
			break;
		}
		result = result2;
		// continue -> 0x612d0
	}
	// 0x61304
	if (v2 <= v3) {
		// bb
		return result2;
	}
	// 0x61308
	*v1 = v3;
	return result2;
}

// Address range: 0x61310 - 0x613e0
int32_t function_61310(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x61310
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0x61334
	if (a2 > 6) {
		// 0x6134c
		// branch -> 0x6135c
	}
	int32_t v2 = 368 * a2 + 1176 + v1; // 0x61368
	g35 = v2;
	int32_t result; // 0x613dc
	int32_t v3;     // 0x613b0
	if (*(int32_t *)(v2 + 8) != 10) {
		// 0x613b0
		v3 = *(int32_t *)(g23 - 0x77ac);
		result = v3;
		if (a1 == *(int32_t *)v3) {
			// 0x613c0
			g34 = 1;
			result = function_324ec(1);
			// branch -> 0x613c8
		}
		// 0x613c8
		return result;
	}
	int32_t v4 = *(int32_t *)(v2 + 224); // 0x61368
	int32_t v5;                          // 0x613b8
	if (v4 != 0) {
		int32_t v6 = *(int32_t *)(*(int32_t *)(g23 - 0x769c) + 56 * v4 + 12); // 0x61384
		g37 = (int32_t) * (char *)(v1 + 436) / v6;
		int32_t v7 = random(38) + 1; // 0x61398
		function_612c0(g35, v7);
		CalcPlrInv(g36, 1);
		v5 = g36;
		// branch -> 0x613b0
	} else {
		v5 = a1;
	}
	// 0x613b0
	v3 = *(int32_t *)(g23 - 0x77ac);
	result = v3;
	if (v5 == *(int32_t *)v3) {
		// 0x613c0
		g34 = 1;
		result = function_324ec(1);
		// branch -> 0x613c8
	}
	// 0x613c8
	return result;
}

// Address range: 0x613e0 - 0x615e0
int32_t function_613e0(int32_t result)
{
	int32_t v1 = g36;                // 0x613e0
	int32_t v2 = 0x1000000 * result; // 0x613f0
	g36 = *(int32_t *)(g23 - 0x76b4);
	if (v2 / 0x1000000 <= 19) {
		// 0x61404
		return *(int32_t *)(*(int32_t *)(g23 - 0x5fd4) + v2 / 0x400000);
	}
	// 0x615cc
	g36 = v1;
	return result;
}

// Address range: 0x615e0 - 0x61c4c
int32_t PrintItemPower(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x615e0
	int32_t v2 = g35; // 0x615ec
	g35 = a2;
	int32_t v3 = 0x1000000 * a1;             // 0x615fc
	int32_t v4 = *(int32_t *)(g23 - 0x76b4); // 0x6160c
	g36 = v4;
	if (v3 / 0x1000000 <= 79) {
		// 0x61614
		return *(int32_t *)(*(int32_t *)(g23 - 0x60f0) + v3 / 0x400000);
	}
	// 0x61c28
	g34 = v4;
	g37 = *(int32_t *)(g23 - 0x60ec);
	g36 = v1;
	g35 = v2;
	return strcpy();
}

// Address range: 0x61c4c - 0x61cf0
int32_t DrawUTextBack(int32_t a1)
{
	// 0x61c4c
	CelDecodeOnly(88, 487, *(int32_t *)*(int32_t *)(g23 - 0x719c), 1, 271);
	int32_t v1 = 148;                                                              // r5
	int32_t v2 = 0;                                                                // r0
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x7804) + (int32_t) "; " - 0x53a5; // 0x61c88
	                                                                               // branch -> 0x61c8c
lab_0x61c8c:
	while (true) {
		int32_t v4 = v3;  // 0x61c94
		int32_t v5 = 132; // 0x61c90
		// branch -> 0x61c90
		while (true) {
			int32_t v6 = v5 - 1; // 0x61c90
			int32_t result = v6; // r3
			*(char *)v4 = (char)v2;
			int32_t v7 = v3 + 2; // 0x61c98
			v3 = v7;
			if (v6 == 0) {
				// 0x61ca0
				*(char *)v7 = (char)v2;
				int32_t v8 = v3 - 1032; // 0x61ca8
				v3 = v8;
				int32_t v9 = 132; // 0x61cac
				// branch -> 0x61cac
				int32_t v10; // 0x61cc0
				while (true) {
					int32_t v11 = v9 - 1; // 0x61cac
					result = v11;
					*(char *)(v8 + 1) = (char)v2;
					int32_t v12 = v3;      // 0x61cb4
					int32_t v13 = v12 + 2; // 0x61cb4
					v3 = v13;
					if (v11 == 0) {
						int32_t v14 = v1 - 1; // 0x61cbc
						v1 = v14;
						v10 = v12 - 1030;
						v3 = v10;
						if (v14 == 0) {
							// break (via goto) -> 0x61cc8
							goto lab_0x61cc8;
						}
						v3 = v10;
						// continue (via goto) -> 0x61c8c
						goto lab_0x61c8c;
					} else {
						// 0x61cac
						v8 = v13;
						v9 = result;
						// branch -> 0x61cac
						continue;
					}
				}
			lab_0x61cc8:;
				int32_t v15 = 131; // 0x61cd0
				result = v15;
				*(char *)v10 = 0;
				int32_t v16 = v3 + 2; // 0x61cd8
				// 0x61ce0
				// branch -> 0x61cd0
				while (v15 != 0) {
					// 0x61cd0
					// 0x61cd0
					v15 = result - 1;
					result = v15;
					*(char *)v16 = (char)0;
					v16 += 2;
					// 0x61ce0
					// branch -> 0x61cd0
				}
				return result;
			} else {
				// 0x61c90
				v4 = v7;
				v5 = result;
				// branch -> 0x61c90
				continue;
			}
		}
	}
}

// Address range: 0x61cf0 - 0x61f08
int32_t PrintUString(int32_t a1, int32_t a2, int32_t a3, char *a4, int32_t a5)
{
	int32_t v1 = (int32_t)a4; // 0x61cfc
	g28 = v1;
	g32 = g23 - 0x2da0;
	g33 = g23 - 0x2e20;
	g35 = g23 - 0x2ae8;
	g29 = a5;
	int32_t v2 = *(int32_t *)(4 * a2 + *(int32_t *)(g23 - 0x721c)); // 0x61d24
	g31 = *(int32_t *)(4 * v2 + *(int32_t *)(g23 - 0x7698) + 816) + 96 + a1;
	g34 = v1;
	int32_t v3 = CPrintString(); // 0x61d40
	g36 = v3;
	g30 = 0;
	int32_t result = v3; // 0x61f0435
	int32_t v4 = v3;     // 0x61eec2
	int32_t v5 = 0;      // 0x61eb824
	if (a3 != 0) {
		int32_t v6 = 0;  // 0x61f0436
		int32_t v7 = v3; // 0x61eec221
		int32_t v8 = 0;  // 0x61e8c
		if (v3 >= 1) {
			int32_t v9 = 0;
			int32_t v10 = v3; // 0x61e50
			int32_t v11 = 0;  // 0x61e5c
			if (v3 >= 9) {
				// 0x61d70
				if (v3 >= 9) {
					int32_t v12 = g32;                                                                             // 0x61dd0
					int32_t v13 = g33;                                                                             // 0x61dd8
					int32_t v14 = g35;                                                                             // 0x61de0
					int32_t v15 = 0;                                                                               // 0x61d84
					int32_t v16 = g28 + v15;                                                                       // 0x61d84
					int32_t v17 = (int32_t) * (char *)v16;                                                         // 0x61d8c
					int32_t v18 = (int32_t) * (char *)(v17 + v14);                                                 // 0x61d94
					unsigned char v19 = *(char *)((int32_t) * (char *)(v16 + 1) + v14);                            // 0x61d98
					int32_t v20 = (int32_t) * (char *)(v18 + v13);                                                 // 0x61d9c
					unsigned char v21 = *(char *)((int32_t) * (char *)(v16 + 2) + v14);                            // 0x61db0
					unsigned char v22 = *(char *)((int32_t) * (char *)((int32_t)v19 + v13) + v12);                 // 0x61db4
					int32_t v23 = (int32_t)v22 + 1 + (int32_t) * (char *)(v20 + v12);                              // 0x61dc4
					unsigned char v24 = *(char *)((int32_t) * (char *)(v16 + 3) + v14);                            // 0x61dc8
					unsigned char v25 = *(char *)((int32_t) * (char *)((int32_t)v21 + v13) + v12);                 // 0x61dd0
					unsigned char v26 = *(char *)((int32_t) * (char *)(v16 + 4) + v14);                            // 0x61de0
					int32_t v27 = g32;                                                                             // 0x61de8
					unsigned char v28 = *(char *)(v27 + (int32_t) * (char *)((int32_t)v24 + v13));                 // 0x61de8
					int32_t v29 = g33;                                                                             // 0x61df0
					int32_t v30 = g35;                                                                             // 0x61df8
					unsigned char v31 = *(char *)(v30 + (int32_t) * (char *)(v16 + 5));                            // 0x61df8
					unsigned char v32 = *(char *)((int32_t) * (char *)(v29 + (int32_t)v26) + v27);                 // 0x61e00
					unsigned char v33 = *(char *)((int32_t) * (char *)(v16 + 6) + v30);                            // 0x61e10
					unsigned char v34 = *(char *)((int32_t) * (char *)((int32_t)v31 + v29) + v27);                 // 0x61e1c
					int32_t v35 = (int32_t) * (char *)((int32_t)v33 + v29);                                        // 0x61e20
					unsigned char v36 = *(char *)((int32_t) * (char *)(v16 + 7) + v30);                            // 0x61e24
					int32_t v37 = (int32_t)v34 + (int32_t)v32 + (int32_t)v28 + (int32_t)v25 + v23 + 1 + 1 + 1 + 1; // 0x61e28
					int32_t v38 = (int32_t) * (char *)((int32_t)v36 + v29);                                        // 0x61e34
					int32_t v39 = (int32_t) * (char *)(v35 + v27) + v37 + 1;                                       // 0x61e38
					int32_t v40 = v39 + 2 + (int32_t) * (char *)(v38 + v27);                                       // 0x61e48
					int32_t v41 = (v3 - 1) / 8 - 1;                                                                // 0x61e4c
					int32_t v42 = v15 + 8;
					// branch -> 0x61d84
					while (v41 != 0) {
						// 0x61d84
						v12 = v27;
						v13 = v29;
						v14 = v30;
						v15 = v42;
						v16 = g28 + v15;
						v17 = (int32_t) * (char *)v16;
						v18 = (int32_t) * (char *)(v17 + v14);
						v19 = *(char *)((int32_t) * (char *)(v16 + 1) + v14);
						v20 = (int32_t) * (char *)(v18 + v13);
						v21 = *(char *)((int32_t) * (char *)(v16 + 2) + v14);
						v22 = *(char *)((int32_t) * (char *)((int32_t)v19 + v13) + v12);
						v23 = (int32_t)v22 + (int32_t) * (char *)(v20 + v12) + v40 + 1;
						v24 = *(char *)((int32_t) * (char *)(v16 + 3) + v14);
						v25 = *(char *)((int32_t) * (char *)((int32_t)v21 + v13) + v12);
						v26 = *(char *)((int32_t) * (char *)(v16 + 4) + v14);
						v27 = g32;
						v28 = *(char *)(v27 + (int32_t) * (char *)((int32_t)v24 + v13));
						v29 = g33;
						v30 = g35;
						v31 = *(char *)(v30 + (int32_t) * (char *)(v16 + 5));
						v32 = *(char *)((int32_t) * (char *)(v29 + (int32_t)v26) + v27);
						v33 = *(char *)((int32_t) * (char *)(v16 + 6) + v30);
						v34 = *(char *)((int32_t) * (char *)((int32_t)v31 + v29) + v27);
						v35 = (int32_t) * (char *)((int32_t)v33 + v29);
						v36 = *(char *)((int32_t) * (char *)(v16 + 7) + v30);
						v37 = (int32_t)v34 + (int32_t)v32 + (int32_t)v28 + (int32_t)v25 + v23 + 1 + 1 + 1 + 1;
						v38 = (int32_t) * (char *)((int32_t)v36 + v29);
						v39 = (int32_t) * (char *)(v35 + v27) + v37 + 1;
						v40 = v39 + 2 + (int32_t) * (char *)(v38 + v27);
						v41--;
						v42 = v15 + 8;
						// continue -> 0x61d84
					}
					// 0x61e50
					v9 = v40;
					v10 = g36;
					v11 = v42;
					// branch -> 0x61e50
				} else {
					v9 = 0;
					v10 = v3;
					v11 = 0;
				}
			}
			int32_t v43 = g28;       // 0x61e5c
			int32_t v44 = v43 + v11; // 0x61e5c
			if (v10 > v11) {
				int32_t v45 = v10 - v11;                                         // 0x61e80
				int32_t v46 = v44;                                               // 0x61e64
				unsigned char v47 = *(char *)((int32_t) * (char *)v46 + g35);    // 0x61e6c
				unsigned char v48 = *(char *)((int32_t)v47 + g33);               // 0x61e70
				int32_t v49 = v9 + 1 + (int32_t) * (char *)((int32_t)v48 + g32); // 0x61e7c
				// branch -> 0x61e64
				while (v45 != 1) {
					// 0x61e64
					v45--;
					v46++;
					v47 = *(char *)((int32_t) * (char *)v46 + g35);
					v48 = *(char *)((int32_t)v47 + g33);
					v49 = v49 + 1 + (int32_t) * (char *)((int32_t)v48 + g32);
					// continue -> 0x61e64
				}
				// 0x61e84
				v6 = v10 + v43;
				v7 = v10;
				v8 = v49;
				// branch -> 0x61e84
			} else {
				v6 = v44;
				v7 = v10;
				v8 = v9;
			}
		}
		// 0x61e84
		int32_t v50; // 0x61e94
		if (v8 > 256) {
			// 0x61e84
			v50 = g30;
			// branch -> 0x61e94
		} else {
			uint32_t v51 = 257 - v8;                   // 0x61e8c
			int32_t v52 = v51 / 2 | v51 & -0x80000000; // 0x61e90
			g30 = v52;
			v50 = v52;
			// branch -> 0x61e94
		}
		// 0x61e94
		g31 += v50;
		result = v6;
		v4 = v7;
		v5 = v50;
		// branch -> 0x61e98
	}
	// 0x61e98
	g26 = 0;
	if (v4 > 0) {
		int32_t v53 = 0;   // 0x61edc27
		int32_t v54 = g28; // 0x61ea0
		// branch -> 0x61ea0
		while (true) {
			unsigned char v55 = *(char *)(g35 + (int32_t) * (char *)v54); // 0x61ea4
			unsigned char v56 = *(char *)(g33 + (int32_t)v55);            // 0x61ea8
			int32_t v57 = v56;                                            // 0x61ea8
			int32_t v58 = g32 + v57;                                      // 0x61eac
			g27 = v58;
			int32_t v59 = v5 + 1 + (int32_t) * (char *)v58; // 0x61ebc
			g30 = v59;
			int32_t v60 = result; // 0x61f0433
			int32_t v61 = v4;     // 0x61eec
			int32_t v62 = v54;    // 0x61ee0
			int32_t v63 = v53;    // 0x61edc
			int32_t v64 = v58;    // 0x61ed8
			if (v56 != 0) {
				// 0x61ec4
				if (v59 <= 257) {
					// 0x61ecc
					v60 = function_2d918(g31, v57, g29);
					v61 = g36;
					v62 = g28;
					v63 = g26;
					v64 = g27;
					// branch -> 0x61ed8
				} else {
					v60 = result;
					v61 = v4;
					v62 = v54;
					v63 = v53;
					v64 = v58;
				}
			}
			int32_t v65 = v63 + 1; // 0x61edc
			g26 = v65;
			int32_t v66 = v62 + 1; // 0x61ee0
			g28 = v66;
			g31 += (int32_t) * (char *)v64 + 1;
			if (v65 < v61) {
				// 0x61ed8
				result = v60;
				v4 = v61;
				v53 = v65;
				v5 = g30;
				v54 = v66;
				// branch -> 0x61ea0
				continue;
			} else {
				result = v60;
			}
		}
	}
	// 0x61ef4
	return result;
}

// Address range: 0x61f08 - 0x6201c
int32_t DrawULine(int32_t a1)
{
	int32_t v1 = 3;                                                          // r7
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x7804);                     // 0x61f18
	int32_t v3 = *(int32_t *)(g23 - 0x7698);                                 // 0x61f1c
	int32_t v4 = 4 * *(int32_t *)(*(int32_t *)(g23 - 0x721c) + 4 * a1) + v3; // 0x61f34
	int32_t v5 = v2 + 0x22b5a;
	int32_t v6 = *(int32_t *)(v4 + 792) + v2 + 90;
	// branch -> 0x61f80
	int32_t result; // 0x61f58
	while (true) {
		// 0x61f80
		result = v6 + 266;
		int32_t v7 = 66;     // r3
		int32_t v8 = v5 + 2; // r4
		*(int16_t *)v6 = *(int16_t *)v5;
		int32_t v9 = v6 + 2;                        // r5
		int32_t v10 = __asm_rlwinm_(v7, 29, 3, 31); // 0x61f80
		int32_t v11 = v10;                          // ctr
		int32_t v12;                                // 0x61fe0
		int32_t v13;
		if (v10 == 0) {
			// 0x61f80
			v13 = v9;
			v12 = v7;
			// branch -> 0x61fe0
		lab_0x61fe0:;
			int32_t v14 = v8; // 0x61fe4
			*(int32_t *)v13 = *(int32_t *)v14;
			int32_t v15 = v9 + 4;  // 0x61ff0
			int32_t v16 = v12 - 1; // 0x61ff4
			// branch -> 0x61fe4
			while (v16 != 0) {
				// 0x61fe4
				v14 += 4;
				*(int32_t *)v15 = *(int32_t *)v14;
				v15 += 4;
				v16--;
				// continue -> 0x61fe4
			}
		lab_0x61ff8:;
			int32_t v17 = v1 - 1; // 0x61ffc
			v1 = v17;
			if (v17 == 0) {
				// break -> 0x62018
				break;
			}
			v5 += 768;
			v6 += 768;
			// continue -> 0x61f80
			continue;
		} else {
			// 0x61f8c
			*(int32_t *)v9 = *(int32_t *)v8;
			*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
			*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
			*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
			*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
			*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
			*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
			int32_t v18 = v8; // 0x61fc4
			v8 = v18 + 32;
			*(int32_t *)(v9 + 28) = *(int32_t *)(v18 + 28);
			int32_t v19 = v9 + 32; // 0x61fd0
			v9 = v19;
			int32_t v20 = v11 - 1; // 0x61fd4
			// branch -> 0x61f8c
			while (v20 != 0) {
				// 0x61f8c
				*(int32_t *)v19 = *(int32_t *)v8;
				*(int32_t *)(v9 + 4) = *(int32_t *)(v8 + 4);
				*(int32_t *)(v9 + 8) = *(int32_t *)(v8 + 8);
				*(int32_t *)(v9 + 12) = *(int32_t *)(v8 + 12);
				*(int32_t *)(v9 + 16) = *(int32_t *)(v8 + 16);
				*(int32_t *)(v9 + 20) = *(int32_t *)(v8 + 20);
				*(int32_t *)(v9 + 24) = *(int32_t *)(v8 + 24);
				v18 = v8;
				v8 = v18 + 32;
				*(int32_t *)(v9 + 28) = *(int32_t *)(v18 + 28);
				v19 = v9 + 32;
				v9 = v19;
				v20--;
				// continue -> 0x61f8c
			}
			int32_t v21 = v7 % 8; // 0x61fd8
			if (v21 == 0) {
				goto lab_0x61ff8;
			}
			v13 = v19;
			v12 = v21;
			goto lab_0x61fe0;
		}
	}
	// 0x62018
	return result;
}

// Address range: 0x6201c - 0x621e8
int32_t DrawUniqueInfo(int32_t a1)
{
	int32_t v1 = g10;                        // 0x62020
	int32_t v2 = *(int32_t *)(g23 - 0x77c4); // 0x62024
	g35 = *(int32_t *)(g23 - 0x76b4);
	g36 = *(int32_t *)(g23 - 0x718c);
	int32_t result = v2; // 0x621e4
	if (*(int32_t *)v2 == 0) {
		int32_t v3 = *(int32_t *)(g23 - 0x77c8); // 0x62048
		if (*(int32_t *)v3 == 0) {
			// 0x6205c
			g29 = *(int32_t *)(*(int32_t *)(g23 - 0x71a0) + 308);
			DrawUTextBack(v3);
			PrintUString(0, 2, 1, (char *)*(int32_t *)(g36 + 84 * g29), 3);
			DrawULine(5);
			int32_t v4 = g32 + g36; // 0x62088
			PrintItemPower((int32_t) * (char *)(v4 + 12), g33);
			char v5 = *(char *)(v4 + 6);                                       // 0x6209c
			int32_t v6 = PrintUString(0, 14 - (int32_t)v5, 1, (char *)g35, 0); // 0x620bc
			int32_t v7 = g31;                                                  // 0x620c0
			int32_t v8 = v7;                                                   // 0x620f4
			if (*(char *)v7 >= 2) {
				// 0x620d0
				PrintItemPower((int32_t) * (char *)(g29 + 24), g33);
				v6 = PrintUString(0, g30 + 2, 1, (char *)g35, 0);
				v8 = g31;
				// branch -> 0x620f4
			}
			int32_t v9 = v8; // 0x6212c
			if (*(char *)v8 >= 3) {
				// 0x62104
				PrintItemPower((int32_t) * (char *)(g32 + g36 + 36), g33);
				v6 = PrintUString(0, g30 + 4, 1, (char *)g35, 0);
				v9 = g31;
				// branch -> 0x6212c
			}
			int32_t v10 = v9; // 0x62164
			if (*(char *)v9 >= 4) {
				// 0x6213c
				PrintItemPower((int32_t) * (char *)(g32 + g36 + 48), g33);
				v6 = PrintUString(0, g30 + 6, 1, (char *)g35, 0);
				v10 = g31;
				// branch -> 0x62164
			}
			int32_t v11 = v10; // 0x6219c
			if (*(char *)v10 >= 5) {
				// 0x62174
				PrintItemPower((int32_t) * (char *)(g32 + g36 + 60), g33);
				v6 = PrintUString(0, g30 + 8, 1, (char *)g35, 0);
				v11 = g31;
				// branch -> 0x6219c
			}
			// 0x6219c
			if (*(char *)v11 >= 6) {
				// 0x621ac
				PrintItemPower((int32_t) * (char *)(g32 + g36 + 72), g33);
				result = PrintUString(0, g30 + 10, 1, (char *)g35, 0);
				// branch -> 0x621d4
			} else {
				result = v6;
			}
			// 0x621d4
			g10 = v1;
			return result;
		}
		result = v3;
	}
	// 0x621d4
	g10 = v1;
	return result;
}

// Address range: 0x621e8 - 0x62320
int32_t function_621e8(int32_t a1)
{
	int32_t v1 = g36;                        // 0x621e8
	int32_t v2 = g10;                        // 0x621ec
	int32_t v3 = *(int32_t *)(g23 - 0x76b4); // 0x621f0
	g36 = v3;
	int32_t v4 = g35; // 0x621f4
	g35 = a1;
	int32_t v5 = a1; // 0x62228
	int32_t v6 = a1; // 0x6231c11
	if (*(int32_t *)(a1 + 220) == 21) {
		// 0x62210
		g34 = v3;
		g37 = *(int32_t *)(g23 - 0x60f4);
		strcpy();
		v5 = g35;
		v6 = function_2dbac(g36, 1);
		// branch -> 0x62228
	}
	int32_t v7 = v5; // 0x62264
	if (*(int32_t *)(v5 + 220) == 22) {
		// 0x62234
		g34 = g36;
		g37 = *(int32_t *)(g23 - 0x60f8);
		strcpy();
		function_2dbac(g36, 1);
		g34 = g36;
		g37 = *(int32_t *)(g23 - 0x60fc);
		strcpy();
		v6 = function_2dbac(g36, 1);
		v7 = g35;
		// branch -> 0x62264
	}
	uint32_t v8 = *(int32_t *)(v7 + 220); // 0x62264
	int32_t v9 = v7;                      // 0x62298
	int32_t v10;                          // 0x622bc
	int32_t v11;                          // 0x622f4
	int32_t result;                       // 0x6231c
	int32_t v12;                          // 0x6231c7
	int32_t v13;                          // 0x6231c8
	if (v8 < 1) {
		// 0x62298
		v13 = v6;
		v10 = v9;
		if (*(int32_t *)(v9 + 220) == 24) {
			// 0x622a4
			g34 = g36;
			g37 = *(int32_t *)(g23 - 0x6104);
			strcpy();
			v13 = function_2dbac(g36, 1);
			v10 = g35;
			// branch -> 0x622bc
		}
		// 0x622bc
		v12 = v13;
		v11 = v10;
		if (*(int32_t *)(v10 + 220) == 42) {
			// 0x622c8
			g34 = g36;
			g37 = *(int32_t *)(g23 - 0x6108);
			strcpy();
			v12 = function_2dbac(g36, 1);
			v11 = g35;
			// branch -> 0x622e0
		}
		// 0x622e0
		result = v12;
		if (*(int32_t *)(v11 + 220) == 43) {
			// 0x622ec
			g37 = *(int32_t *)(g23 - 0x610c);
			g38 = *(int32_t *)(v11 + 196);
			sprintf();
			result = function_2dbac(g36, 1);
			// branch -> 0x62308
		}
		// 0x62308
		g36 = v1;
		g10 = v2;
		g35 = v4;
		return result;
	}
	// 0x62270
	int32_t v14; // 0x6231c9
	if (v8 <= 20) {
		// 0x62278
		function_613e0(0x1000000 * v8 / 0x1000000);
		g34 = g36;
		g37 = *(int32_t *)(g23 - 0x6100);
		strcpy();
		v14 = function_2dbac(g36, 1);
		v9 = g35;
		// branch -> 0x62298
	} else {
		v14 = v6;
		v9 = v7;
	}
	// 0x62298
	v13 = v14;
	v10 = v9;
	if (*(int32_t *)(v9 + 220) == 24) {
		// 0x622a4
		g34 = g36;
		g37 = *(int32_t *)(g23 - 0x6104);
		strcpy();
		v13 = function_2dbac(g36, 1);
		v10 = g35;
		// branch -> 0x622bc
	}
	// 0x622bc
	v12 = v13;
	v11 = v10;
	if (*(int32_t *)(v10 + 220) == 42) {
		// 0x622c8
		g34 = g36;
		g37 = *(int32_t *)(g23 - 0x6108);
		strcpy();
		v12 = function_2dbac(g36, 1);
		v11 = g35;
		// branch -> 0x622e0
	}
	// 0x622e0
	result = v12;
	if (*(int32_t *)(v11 + 220) == 43) {
		// 0x622ec
		g37 = *(int32_t *)(g23 - 0x610c);
		g38 = *(int32_t *)(v11 + 196);
		sprintf();
		result = function_2dbac(g36, 1);
		// branch -> 0x62308
	}
	// 0x62308
	g36 = v1;
	g10 = v2;
	g35 = v4;
	return result;
}

// Address range: 0x62320 - 0x62584
int32_t function_62320(int32_t a1)
{
	int32_t v1 = g36; // 0x62320
	g36 = *(int32_t *)(g23 - 0x76b4);
	int32_t v2 = g35; // 0x6232c
	g35 = a1;
	int32_t v3 = a1; // 0x623b0
	if (*(char *)(a1 + 190) == 1) {
		// 0x62348
		if (*(int32_t *)(a1 + 240) == 255) {
			// 0x62354
			g37 = *(int32_t *)(g23 - 0x6110);
			g38 = *(int32_t *)(a1 + 204);
			sprintf();
			// branch -> 0x62384
		} else {
			// 0x6236c
			g37 = *(int32_t *)(g23 - 0x6114);
			g38 = *(int32_t *)(a1 + 204);
			sprintf();
			// branch -> 0x62384
		}
		// 0x62384
		function_2dbac(g36, 1);
		v3 = g35;
		// branch -> 0x62390
	}
	int32_t v4 = v3; // 0x62404
	if (*(char *)(v3 + 190) == 2) {
		// 0x6239c
		if (*(int32_t *)(v3 + 240) == 255) {
			// 0x623a8
			g37 = *(int32_t *)(g23 - 0x6118);
			g38 = *(int32_t *)(v3 + 212);
			sprintf();
			// branch -> 0x623d0
		} else {
			// 0x623bc
			g37 = *(int32_t *)(g23 - 0x611c);
			g38 = *(int32_t *)(v3 + 212);
			sprintf();
			// branch -> 0x623d0
		}
		// 0x623d0
		function_2dbac(g36, 1);
		v4 = g35;
		// branch -> 0x623dc
	}
	int32_t v5 = v4;   // 0x62440
	int32_t v6;        // ctr
	int32_t v7;        // 0x62464
	int32_t v8;        // 0x62478
	int32_t v9;        // 0x62490
	int32_t v10;       // 0x624b0
	int32_t v11;       // 0x624cc
	int32_t v12;       // 0x624f8
	int32_t v13;       // 0x62518
	int32_t v14;       // 0x62534
	int32_t v15;       // 0x624b0
	int32_t v16;       // 0x624b8
	int32_t v17;       // 0x624c0
	int32_t v18;       // 0x624b8
	int32_t v19;       // 0x624dc
	unsigned char v20; // 0x62430
	unsigned char v21; // 0x62454
	unsigned char v22; // 0x624cc
	int32_t result;    // 0x62560
	if (*(int32_t *)(v4 + 220) != 23) {
		// 0x62430
		v20 = *(char *)(v5 + 332);
		v7 = v5;
		if (v20 != -1) {
			// 0x62440
			PrintItemPower((int32_t)v20, v5);
			function_2dbac(g36, 1);
			v7 = g35;
			// branch -> 0x62454
		}
		// 0x62454
		v21 = *(char *)(v7 + 333);
		v8 = v7;
		if (v21 != -1) {
			// 0x62464
			PrintItemPower((int32_t)v21, v7);
			function_2dbac(g36, 1);
			v8 = g35;
			// branch -> 0x62478
		}
		// 0x62478
		if (*(char *)(v8 + 60) == 2) {
			// 0x62484
			function_2dbac(*(int32_t *)(g23 - 0x6128), 1);
			v9 = g23;
			*(int32_t *)*(int32_t *)(v9 - 0x7674) = 1;
			v6 = 46;
			v16 = *(int32_t *)(v9 - 0x71a0) - 8;
			v10 = g35 - 8;
			// branch -> 0x624b0
			while (true) {
				// 0x624b0
				v15 = v10 + 8;
				v18 = v16 + 8;
				*(int32_t *)v18 = *(int32_t *)v15;
				*(int32_t *)(v16 + 12) = *(int32_t *)(v10 + 12);
				v17 = v6 - 1;
				v6 = v17;
				if (v17 != 0) {
					goto lab_0x624b0;
				}
				// 0x624c4
				// branch -> 0x624c4
			}
		}
		// 0x624c4
		function_621e8(v8);
		v11 = g35;
		v22 = *(char *)(v11 + 354);
		v19 = (int32_t) * (char *)(v11 + 352);
		if (v19 + (int32_t)v22 + (int32_t) * (char *)(v11 + 353) == 0) {
			// 0x62560
			result = *(int32_t *)(g23 - 0x76cc);
			*(int32_t *)result = 1;
			g36 = v1;
			g35 = v2;
			return result;
		}
		// 0x624ec
		g34 = g36;
		g37 = *(int32_t *)(g23 - 0x612c);
		strcpy();
		v12 = g35;
		v13 = v12;
		if (*(char *)(v12 + 352) != 0) {
			// 0x62504
			g37 = *(int32_t *)(g23 - 0x6130);
			g38 = g36;
			sprintf();
			v13 = g35;
			// branch -> 0x62518
		}
		// 0x62518
		v14 = v13;
		if (*(char *)(v13 + 353) != 0) {
			// 0x62524
			g37 = *(int32_t *)(g23 - 0x6134);
			g38 = g36;
			sprintf();
			v14 = g35;
			// branch -> 0x62534
		}
		// 0x62534
		if (*(char *)(v14 + 354) != 0) {
			// 0x62540
			g37 = *(int32_t *)(g23 - 0x6138);
			g38 = g36;
			sprintf();
			// branch -> 0x62554
		}
		// 0x62554
		function_2dbac(g36, 1);
		// branch -> 0x62560
		// 0x62560
		result = *(int32_t *)(g23 - 0x76cc);
		*(int32_t *)result = 1;
		g36 = v1;
		g35 = v2;
		return result;
	}
	// 0x623e8
	if (*(int32_t *)(v4 + 232) != 0) {
		// 0x623f4
		g37 = *(int32_t *)(g23 - 0x6120);
		g38 = *(int32_t *)(v4 + 204);
		sprintf();
		g37 = *(int32_t *)(g23 - 0x6124);
		g38 = *(int32_t *)(g35 + 228);
		sprintf();
		function_2dbac(g36, 1);
		v5 = g35;
		// branch -> 0x62430
	} else {
		v5 = v4;
	}
	// 0x62430
	v20 = *(char *)(v5 + 332);
	v7 = v5;
	if (v20 != -1) {
		// 0x62440
		PrintItemPower((int32_t)v20, v5);
		function_2dbac(g36, 1);
		v7 = g35;
		// branch -> 0x62454
	}
	// 0x62454
	v21 = *(char *)(v7 + 333);
	v8 = v7;
	if (v21 != -1) {
		// 0x62464
		PrintItemPower((int32_t)v21, v7);
		function_2dbac(g36, 1);
		v8 = g35;
		// branch -> 0x62478
	}
	// 0x62478
	if (*(char *)(v8 + 60) == 2) {
		// 0x62484
		function_2dbac(*(int32_t *)(g23 - 0x6128), 1);
		v9 = g23;
		*(int32_t *)*(int32_t *)(v9 - 0x7674) = 1;
		v6 = 46;
		v16 = *(int32_t *)(v9 - 0x71a0) - 8;
		v10 = g35 - 8;
		// branch -> 0x624b0
		while (true) {
			// 0x624b0
			v15 = v10 + 8;
			v18 = v16 + 8;
			*(int32_t *)v18 = *(int32_t *)v15;
			*(int32_t *)(v16 + 12) = *(int32_t *)(v10 + 12);
			v17 = v6 - 1;
			v6 = v17;
			if (v17 == 0) {
				// 0x624c4
				// branch -> 0x624c4
				// 0x624c4
				function_621e8(g35);
				v11 = g35;
				v22 = *(char *)(v11 + 354);
				v19 = (int32_t) * (char *)(v11 + 352);
				if (v19 + (int32_t)v22 + (int32_t) * (char *)(v11 + 353) == 0) {
					// 0x62560
					result = *(int32_t *)(g23 - 0x76cc);
					*(int32_t *)result = 1;
					g36 = v1;
					g35 = v2;
					return result;
				}
				// 0x624ec
				g34 = g36;
				g37 = *(int32_t *)(g23 - 0x612c);
				strcpy();
				v12 = g35;
				v13 = v12;
				if (*(char *)(v12 + 352) != 0) {
					// 0x62504
					g37 = *(int32_t *)(g23 - 0x6130);
					g38 = g36;
					sprintf();
					v13 = g35;
					// branch -> 0x62518
				}
				// 0x62518
				v14 = v13;
				if (*(char *)(v13 + 353) != 0) {
					// 0x62524
					g37 = *(int32_t *)(g23 - 0x6134);
					g38 = g36;
					sprintf();
					v14 = g35;
					// branch -> 0x62534
				}
				// 0x62534
				if (*(char *)(v14 + 354) != 0) {
					// 0x62540
					g37 = *(int32_t *)(g23 - 0x6138);
					g38 = g36;
					sprintf();
					// branch -> 0x62554
				}
				// 0x62554
				function_2dbac(g36, 1);
				// branch -> 0x62560
				// 0x62560
				result = *(int32_t *)(g23 - 0x76cc);
				*(int32_t *)result = 1;
				g36 = v1;
				g35 = v2;
				return result;
			}
		lab_0x624b0:
			// 0x624b0
			v16 = v18;
			v10 = v15;
			// branch -> 0x624b0
		}
	}
	// 0x624c4
	function_621e8(v8);
	v11 = g35;
	v22 = *(char *)(v11 + 354);
	v19 = (int32_t) * (char *)(v11 + 352);
	if (v19 + (int32_t)v22 + (int32_t) * (char *)(v11 + 353) == 0) {
		// 0x62560
		result = *(int32_t *)(g23 - 0x76cc);
		*(int32_t *)result = 1;
		g36 = v1;
		g35 = v2;
		return result;
	}
	// 0x624ec
	g34 = g36;
	g37 = *(int32_t *)(g23 - 0x612c);
	strcpy();
	v12 = g35;
	v13 = v12;
	if (*(char *)(v12 + 352) != 0) {
		// 0x62504
		g37 = *(int32_t *)(g23 - 0x6130);
		g38 = g36;
		sprintf();
		v13 = g35;
		// branch -> 0x62518
	}
	// 0x62518
	v14 = v13;
	if (*(char *)(v13 + 353) != 0) {
		// 0x62524
		g37 = *(int32_t *)(g23 - 0x6134);
		g38 = g36;
		sprintf();
		v14 = g35;
		// branch -> 0x62534
	}
	// 0x62534
	if (*(char *)(v14 + 354) != 0) {
		// 0x62540
		g37 = *(int32_t *)(g23 - 0x6138);
		g38 = g36;
		sprintf();
		// branch -> 0x62554
	}
	// 0x62554
	function_2dbac(g36, 1);
	// branch -> 0x62560
	// 0x62560
	result = *(int32_t *)(g23 - 0x76cc);
	*(int32_t *)result = 1;
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0x62584 - 0x627d0
int32_t function_62584(int32_t a1)
{
	int32_t v1 = g36; // 0x62584
	g36 = *(int32_t *)(g23 - 0x76b4);
	int32_t v2 = g35; // 0x62590
	g35 = a1;
	int32_t v3 = g33; // 0x62598
	g33 = *(int32_t *)(g23 - 0x6124);
	g32 = *(int32_t *)(g23 - 0x613c);
	int32_t v4 = a1;   // 0x62670
	int32_t v5;        // 0x62668
	int32_t v6;        // 0x6269c
	int32_t v7;        // 0x626cc
	int32_t v8;        // 0x626e8
	int32_t v9;        // 0x62710
	int32_t v10;       // 0x6273c
	int32_t v11;       // 0x6275c
	int32_t v12;       // 0x62778
	int32_t v13;       // 0x626e8
	unsigned char v14; // 0x62714
	unsigned char v15; // 0x62718
	int32_t result;    // 0x627a4
	if (*(char *)(a1 + 190) == 1) {
		// 0x625bc
		if (*(int32_t *)(a1 + 240) == 255) {
			// 0x625c8
			g37 = *(int32_t *)(g23 - 0x6110);
			g38 = *(int32_t *)(a1 + 204);
			sprintf();
			// branch -> 0x625f8
		} else {
			// 0x625e0
			g37 = *(int32_t *)(g23 - 0x6114);
			g38 = *(int32_t *)(a1 + 204);
			sprintf();
			// branch -> 0x625f8
		}
		// 0x625f8
		function_2dbac(g36, 1);
		int32_t v16 = g35; // 0x62604
		int32_t v17 = v16; // 0x62638
		if (*(int32_t *)(v16 + 220) == 23) {
			// 0x62610
			if (*(int32_t *)(v16 + 232) != 0) {
				// 0x6261c
				g38 = *(int32_t *)(v16 + 228);
				g37 = g33;
				sprintf();
				function_2dbac(g36, 1);
				v17 = g35;
				// branch -> 0x62638
			} else {
				v17 = v16;
			}
		}
		// 0x62638
		if (*(char *)(v17 + 60) != 0) {
			// 0x62644
			function_2dbac(g32, 1);
			v4 = g35;
			// branch -> 0x62650
		} else {
			v4 = v17;
		}
		// 0x62650
		v8 = v4;
		if (*(char *)(v4 + 190) == 2) {
			// 0x6265c
			v5 = g23;
			if (*(int32_t *)(v4 + 240) == 255) {
				// 0x62668
				g37 = *(int32_t *)(v5 - 0x6118);
				g38 = *(int32_t *)(v4 + 212);
				sprintf();
				// branch -> 0x62690
			} else {
				// 0x6267c
				g37 = *(int32_t *)(v5 - 0x611c);
				g38 = *(int32_t *)(v4 + 212);
				sprintf();
				// branch -> 0x62690
			}
			// 0x62690
			function_2dbac(g36, 1);
			v6 = g35;
			v7 = v6;
			if (*(char *)(v6 + 60) != 0) {
				// 0x626a8
				function_2dbac(g32, 1);
				v7 = g35;
				// branch -> 0x626b4
			}
			// 0x626b4
			if (*(int32_t *)(v7 + 220) == 23) {
				// 0x626c0
				if (*(int32_t *)(v7 + 232) != 0) {
					// 0x626cc
					g38 = *(int32_t *)(v7 + 228);
					g37 = g33;
					sprintf();
					function_2dbac(g36, 1);
					v8 = g35;
					// branch -> 0x626e8
				} else {
					v8 = v7;
				}
			} else {
				v8 = v7;
			}
		}
		// 0x626e8
		v13 = *(int32_t *)(v8 + 8);
		if (v13 != 12) {
			// 0x626f4
			if (v13 != 13) {
				// 0x62708
				function_621e8(v8);
				v9 = g35;
				v14 = *(char *)(v9 + 352);
				v15 = *(char *)(v9 + 353);
				if ((int32_t)v14 + (int32_t) * (char *)(v9 + 354) == -(int32_t)v15) {
					// 0x627a4
					result = *(int32_t *)(g23 - 0x76cc);
					*(int32_t *)result = 1;
					g36 = v1;
					g35 = v2;
					g33 = v3;
					return result;
				}
				// 0x62730
				g34 = g36;
				g37 = *(int32_t *)(g23 - 0x612c);
				strcpy();
				v10 = g35;
				v11 = v10;
				if (*(char *)(v10 + 352) != 0) {
					// 0x62748
					g37 = *(int32_t *)(g23 - 0x6130);
					g38 = g36;
					sprintf();
					v11 = g35;
					// branch -> 0x6275c
				}
				// 0x6275c
				v12 = v11;
				if (*(char *)(v11 + 353) != 0) {
					// 0x62768
					g37 = *(int32_t *)(g23 - 0x6134);
					g38 = g36;
					sprintf();
					v12 = g35;
					// branch -> 0x62778
				}
				// 0x62778
				if (*(char *)(v12 + 354) != 0) {
					// 0x62784
					g37 = *(int32_t *)(g23 - 0x6138);
					g38 = g36;
					sprintf();
					// branch -> 0x62798
				}
				// 0x62798
				function_2dbac(g36, 1);
				// branch -> 0x627a4
				// 0x627a4
				result = *(int32_t *)(g23 - 0x76cc);
				*(int32_t *)result = 1;
				g36 = v1;
				g35 = v2;
				g33 = v3;
				return result;
			}
		}
		// 0x626fc
		function_2dbac(g32, 1);
		// branch -> 0x62708
		// 0x62708
		function_621e8(g35);
		v9 = g35;
		v14 = *(char *)(v9 + 352);
		v15 = *(char *)(v9 + 353);
		if ((int32_t)v14 + (int32_t) * (char *)(v9 + 354) == -(int32_t)v15) {
			// 0x627a4
			result = *(int32_t *)(g23 - 0x76cc);
			*(int32_t *)result = 1;
			g36 = v1;
			g35 = v2;
			g33 = v3;
			return result;
		}
		// 0x62730
		g34 = g36;
		g37 = *(int32_t *)(g23 - 0x612c);
		strcpy();
		v10 = g35;
		v11 = v10;
		if (*(char *)(v10 + 352) != 0) {
			// 0x62748
			g37 = *(int32_t *)(g23 - 0x6130);
			g38 = g36;
			sprintf();
			v11 = g35;
			// branch -> 0x6275c
		}
		// 0x6275c
		v12 = v11;
		if (*(char *)(v11 + 353) != 0) {
			// 0x62768
			g37 = *(int32_t *)(g23 - 0x6134);
			g38 = g36;
			sprintf();
			v12 = g35;
			// branch -> 0x62778
		}
		// 0x62778
		if (*(char *)(v12 + 354) != 0) {
			// 0x62784
			g37 = *(int32_t *)(g23 - 0x6138);
			g38 = g36;
			sprintf();
			// branch -> 0x62798
		}
		// 0x62798
		function_2dbac(g36, 1);
		// branch -> 0x627a4
		// 0x627a4
		result = *(int32_t *)(g23 - 0x76cc);
		*(int32_t *)result = 1;
		g36 = v1;
		g35 = v2;
		g33 = v3;
		return result;
	}
	// 0x62650
	v8 = v4;
	if (*(char *)(v4 + 190) == 2) {
		// 0x6265c
		v5 = g23;
		if (*(int32_t *)(v4 + 240) == 255) {
			// 0x62668
			g37 = *(int32_t *)(v5 - 0x6118);
			g38 = *(int32_t *)(v4 + 212);
			sprintf();
			// branch -> 0x62690
		} else {
			// 0x6267c
			g37 = *(int32_t *)(v5 - 0x611c);
			g38 = *(int32_t *)(v4 + 212);
			sprintf();
			// branch -> 0x62690
		}
		// 0x62690
		function_2dbac(g36, 1);
		v6 = g35;
		v7 = v6;
		if (*(char *)(v6 + 60) != 0) {
			// 0x626a8
			function_2dbac(g32, 1);
			v7 = g35;
			// branch -> 0x626b4
		}
		// 0x626b4
		if (*(int32_t *)(v7 + 220) == 23) {
			// 0x626c0
			if (*(int32_t *)(v7 + 232) != 0) {
				// 0x626cc
				g38 = *(int32_t *)(v7 + 228);
				g37 = g33;
				sprintf();
				function_2dbac(g36, 1);
				v8 = g35;
				// branch -> 0x626e8
			} else {
				v8 = v7;
			}
			// 0x626e8
			v13 = *(int32_t *)(v8 + 8);
			if (v13 != 12) {
				// 0x626f4
				if (v13 != 13) {
					// 0x62708
					function_621e8(v8);
					v9 = g35;
					v14 = *(char *)(v9 + 352);
					v15 = *(char *)(v9 + 353);
					if ((int32_t)v14 + (int32_t) * (char *)(v9 + 354) == -(int32_t)v15) {
						// 0x627a4
						result = *(int32_t *)(g23 - 0x76cc);
						*(int32_t *)result = 1;
						g36 = v1;
						g35 = v2;
						g33 = v3;
						return result;
					}
					// 0x62730
					g34 = g36;
					g37 = *(int32_t *)(g23 - 0x612c);
					strcpy();
					v10 = g35;
					v11 = v10;
					if (*(char *)(v10 + 352) != 0) {
						// 0x62748
						g37 = *(int32_t *)(g23 - 0x6130);
						g38 = g36;
						sprintf();
						v11 = g35;
						// branch -> 0x6275c
					}
					// 0x6275c
					v12 = v11;
					if (*(char *)(v11 + 353) != 0) {
						// 0x62768
						g37 = *(int32_t *)(g23 - 0x6134);
						g38 = g36;
						sprintf();
						v12 = g35;
						// branch -> 0x62778
					}
					// 0x62778
					if (*(char *)(v12 + 354) != 0) {
						// 0x62784
						g37 = *(int32_t *)(g23 - 0x6138);
						g38 = g36;
						sprintf();
						// branch -> 0x62798
					}
					// 0x62798
					function_2dbac(g36, 1);
					// branch -> 0x627a4
					// 0x627a4
					result = *(int32_t *)(g23 - 0x76cc);
					*(int32_t *)result = 1;
					g36 = v1;
					g35 = v2;
					g33 = v3;
					return result;
				}
			}
			// 0x626fc
			function_2dbac(g32, 1);
			// branch -> 0x62708
			// 0x62708
			function_621e8(g35);
			v9 = g35;
			v14 = *(char *)(v9 + 352);
			v15 = *(char *)(v9 + 353);
			if ((int32_t)v14 + (int32_t) * (char *)(v9 + 354) == -(int32_t)v15) {
				// 0x627a4
				result = *(int32_t *)(g23 - 0x76cc);
				*(int32_t *)result = 1;
				g36 = v1;
				g35 = v2;
				g33 = v3;
				return result;
			}
			// 0x62730
			g34 = g36;
			g37 = *(int32_t *)(g23 - 0x612c);
			strcpy();
			v10 = g35;
			v11 = v10;
			if (*(char *)(v10 + 352) != 0) {
				// 0x62748
				g37 = *(int32_t *)(g23 - 0x6130);
				g38 = g36;
				sprintf();
				v11 = g35;
				// branch -> 0x6275c
			}
			// 0x6275c
			v12 = v11;
			if (*(char *)(v11 + 353) != 0) {
				// 0x62768
				g37 = *(int32_t *)(g23 - 0x6134);
				g38 = g36;
				sprintf();
				v12 = g35;
				// branch -> 0x62778
			}
			// 0x62778
			if (*(char *)(v12 + 354) != 0) {
				// 0x62784
				g37 = *(int32_t *)(g23 - 0x6138);
				g38 = g36;
				sprintf();
				// branch -> 0x62798
			}
			// 0x62798
			function_2dbac(g36, 1);
			// branch -> 0x627a4
			// 0x627a4
			result = *(int32_t *)(g23 - 0x76cc);
			*(int32_t *)result = 1;
			g36 = v1;
			g35 = v2;
			g33 = v3;
			return result;
		}
		v8 = v7;
	}
	// 0x626e8
	v13 = *(int32_t *)(v8 + 8);
	if (v13 == 12) {
		// 0x626fc
		function_2dbac(g32, 1);
		// branch -> 0x62708
		// 0x62708
		function_621e8(g35);
		v9 = g35;
		v14 = *(char *)(v9 + 352);
		v15 = *(char *)(v9 + 353);
		if ((int32_t)v14 + (int32_t) * (char *)(v9 + 354) == -(int32_t)v15) {
			// 0x627a4
			result = *(int32_t *)(g23 - 0x76cc);
			*(int32_t *)result = 1;
			g36 = v1;
			g35 = v2;
			g33 = v3;
			return result;
		}
		// 0x62730
		g34 = g36;
		g37 = *(int32_t *)(g23 - 0x612c);
		strcpy();
		v10 = g35;
		v11 = v10;
		if (*(char *)(v10 + 352) != 0) {
			// 0x62748
			g37 = *(int32_t *)(g23 - 0x6130);
			g38 = g36;
			sprintf();
			v11 = g35;
			// branch -> 0x6275c
		}
		// 0x6275c
		v12 = v11;
		if (*(char *)(v11 + 353) != 0) {
			// 0x62768
			g37 = *(int32_t *)(g23 - 0x6134);
			g38 = g36;
			sprintf();
			v12 = g35;
			// branch -> 0x62778
		}
		// 0x62778
		if (*(char *)(v12 + 354) != 0) {
			// 0x62784
			g37 = *(int32_t *)(g23 - 0x6138);
			g38 = g36;
			sprintf();
			// branch -> 0x62798
		}
		// 0x62798
		function_2dbac(g36, 1);
		// branch -> 0x627a4
		// 0x627a4
		result = *(int32_t *)(g23 - 0x76cc);
		*(int32_t *)result = 1;
		g36 = v1;
		g35 = v2;
		g33 = v3;
		return result;
	}
	// 0x626f4
	if (v13 != 13) {
		// 0x62708
		function_621e8(v8);
		v9 = g35;
		v14 = *(char *)(v9 + 352);
		v15 = *(char *)(v9 + 353);
		if ((int32_t)v14 + (int32_t) * (char *)(v9 + 354) == -(int32_t)v15) {
			// 0x627a4
			result = *(int32_t *)(g23 - 0x76cc);
			*(int32_t *)result = 1;
			g36 = v1;
			g35 = v2;
			g33 = v3;
			return result;
		}
		// 0x62730
		g34 = g36;
		g37 = *(int32_t *)(g23 - 0x612c);
		strcpy();
		v10 = g35;
		v11 = v10;
		if (*(char *)(v10 + 352) != 0) {
			// 0x62748
			g37 = *(int32_t *)(g23 - 0x6130);
			g38 = g36;
			sprintf();
			v11 = g35;
			// branch -> 0x6275c
		}
		// 0x6275c
		v12 = v11;
		if (*(char *)(v11 + 353) != 0) {
			// 0x62768
			g37 = *(int32_t *)(g23 - 0x6134);
			g38 = g36;
			sprintf();
			v12 = g35;
			// branch -> 0x62778
		}
		// 0x62778
		if (*(char *)(v12 + 354) != 0) {
			// 0x62784
			g37 = *(int32_t *)(g23 - 0x6138);
			g38 = g36;
			sprintf();
			// branch -> 0x62798
		}
		// 0x62798
		function_2dbac(g36, 1);
		// branch -> 0x627a4
		// 0x627a4
		result = *(int32_t *)(g23 - 0x76cc);
		*(int32_t *)result = 1;
		g36 = v1;
		g35 = v2;
		g33 = v3;
		return result;
	}
	// 0x626fc
	function_2dbac(g32, 1);
	// branch -> 0x62708
	// 0x62708
	function_621e8(g35);
	v9 = g35;
	v14 = *(char *)(v9 + 352);
	v15 = *(char *)(v9 + 353);
	if ((int32_t)v14 + (int32_t) * (char *)(v9 + 354) == -(int32_t)v15) {
		// 0x627a4
		result = *(int32_t *)(g23 - 0x76cc);
		*(int32_t *)result = 1;
		g36 = v1;
		g35 = v2;
		g33 = v3;
		return result;
	}
	// 0x62730
	g34 = g36;
	g37 = *(int32_t *)(g23 - 0x612c);
	strcpy();
	v10 = g35;
	v11 = v10;
	if (*(char *)(v10 + 352) != 0) {
		// 0x62748
		g37 = *(int32_t *)(g23 - 0x6130);
		g38 = g36;
		sprintf();
		v11 = g35;
		// branch -> 0x6275c
	}
	// 0x6275c
	v12 = v11;
	if (*(char *)(v11 + 353) != 0) {
		// 0x62768
		g37 = *(int32_t *)(g23 - 0x6134);
		g38 = g36;
		sprintf();
		v12 = g35;
		// branch -> 0x62778
	}
	// 0x62778
	if (*(char *)(v12 + 354) != 0) {
		// 0x62784
		g37 = *(int32_t *)(g23 - 0x6138);
		g38 = g36;
		sprintf();
		// branch -> 0x62798
	}
	// 0x62798
	function_2dbac(g36, 1);
	// branch -> 0x627a4
	// 0x627a4
	result = *(int32_t *)(g23 - 0x76cc);
	*(int32_t *)result = 1;
	g36 = v1;
	g35 = v2;
	g33 = v3;
	return result;
}

// Address range: 0x627d0 - 0x62de8
int32_t function_627d0(int32_t result, uint32_t a2, int32_t a3)
{
	// 0x627d0
	g29 = *(int32_t *)(g23 - 0x765c);
	g31 = *(int32_t *)(g23 - 0x769c);
	g32 = *(int32_t *)(g23 - 0x76f0);
	g28 = a3;
	g35 = *(int32_t *)(g23 - 0x77ac);
	g36 = *(int32_t *)(g23 - 0x77a8);
	if (a2 > 44) {
		// 0x62dd4
		return result;
	}
	// 0x6280c
	return *(int32_t *)(*(int32_t *)(g23 - 0x6140) + 4 * a2);
}

// Address range: 0x62de8 - 0x62e54
int32_t function_62de8(void)
{
	int32_t v1 = g34;                                                  // 0x62df0
	int32_t v2 = *(int32_t *)(g23 - 0x77a8);                           // 0x62df8
	int32_t v3 = v2 + 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x62e04
	int32_t result = 1;                                                // 0x62e4c3
	if (*(int32_t *)(v3 + 352) < (int32_t) * (char *)(v1 + 352)) {
		// 0x62e14
		result = 0;
		// branch -> 0x62e18
	}
	if (*(int32_t *)(v3 + 360) < (int32_t) * (char *)(v1 + 353)) {
		// 0x62e2c
		result = 0;
		// branch -> 0x62e30
	}
	if (*(int32_t *)(v3 + 368) < (int32_t) * (char *)(v1 + 354)) {
		// 0x62e48
		result = 0;
		// branch -> 0x62e4c
	}
	// 0x62e4c
	return result;
}

// Address range: 0x62e54 - 0x62ec8
int32_t function_62e54(int32_t a1)
{
	char v1 = *(char *)(76 * a1 + 0x3858 + g23 + 12); // 0x62e60
	int32_t result = 1;                               // 0x62ebc5
	if (v1 == 0) {
		// 0x62e70
		result = 0;
		// branch -> 0x62e74
	}
	if (v1 == 11) {
		// 0x62e80
		result = 0;
		// branch -> 0x62e84
	}
	if (v1 == 14) {
		// 0x62e90
		result = 0;
		// branch -> 0x62e94
	}
	if (v1 == 10) {
		// 0x62ea0
		result = 0;
		// branch -> 0x62ea4
	}
	if (v1 == 12) {
		// 0x62eb0
		result = 0;
		// branch -> 0x62eb4
	}
	// 0x62eb4
	if (v1 == 13) {
		// 0x62ec0
		return 0;
	}
	// bb
	return result;
}

// Address range: 0x62ec8 - 0x62f8c
int32_t function_62ec8(int32_t a1)
{
	int32_t v1 = g10; // 0x62ecc
	g33 = 0;
	int32_t v2 = g23 + 0x38a4; // 0x62edc
	g32 = 1;
	int32_t v3;       // bp-2072
	int32_t v4 = &v3; // 0x62eec
	g36 = v4;
	int32_t v5; // 0x62f64
	if (*(char *)(g23 + 0x38a9) == -1) {
		// 0x62f5c
		g37 = 0;
		v5 = random(50);
		g10 = v1;
		return *(int32_t *)(4 * v5 + v4) + 1;
	}
	int32_t v6 = 1; // 0x62f00
	while (true) {
		// 0x62ef4
		int32_t v7; // 0x62f44
		int32_t v8; // 0x62f48
		if (*(int32_t *)v2 != 0) {
			// 0x62f00
			if (function_62e54(v6) != 0) {
				// 0x62f10
				if (a1 >= (int32_t) * (char *)(v2 + 24)) {
					int32_t v9 = g33; // 0x62f20
					g33 = v9 + 1;
					*(int32_t *)(g36 + 4 * v9) = g32;
					if (*(int32_t *)v2 == 2) {
						int32_t v10 = g33; // 0x62f38
						g33 = v10 + 1;
						*(int32_t *)(g36 + 4 * v10) = g32;
						// branch -> 0x62f44
					}
				}
				// 0x62f44
				v7 = v2;
				v8 = g32 + 1;
				g32 = v8;
				if (*(char *)(v7 + 81) == -1) {
					// break -> 0x62f4c
					break;
				}
				v6 = v8;
				v2 = v7 + 76;
				// continue -> 0x62ef4
				continue;
			}
			// 0x62f44
			v7 = v2;
			v8 = g32 + 1;
			g32 = v8;
			if (*(char *)(v7 + 81) == -1) {
				// break -> 0x62f4c
				break;
			}
			v6 = v8;
			v2 = v7 + 76;
			// continue -> 0x62ef4
			continue;
		}
		// 0x62f44
		v7 = v2;
		v8 = g32 + 1;
		g32 = v8;
		if (*(char *)(v7 + 81) == -1) {
			// break -> 0x62f4c
			break;
		}
		v6 = v8;
		v2 = v7 + 76;
		// continue -> 0x62ef4
	}
	// 0x62f4c
	// branch -> 0x62f5c
	// 0x62f5c
	g37 = g33;
	v5 = random(50);
	g10 = v1;
	return *(int32_t *)(4 * v5 + v4) + 1;
}

// Address range: 0x62f8c - 0x63004
int32_t function_62f8c(int32_t a1, int32_t a2)
{
	int32_t v1 = 46;     // ctr
	int32_t v2;          // bp-376
	int32_t v3 = &v2;    // 0x62f9c
	int32_t v4 = a1 - 8; // 0x62fa0
	// branch -> 0x62fa0
	while (true) {
		int32_t v5 = v4 + 8; // 0x62fa0
		int32_t v6 = v3 + 8; // 0x62fa8
		*(int32_t *)v6 = *(int32_t *)v5;
		*(int32_t *)(v3 + 12) = *(int32_t *)(v4 + 12);
		int32_t v7 = v1 - 1; // 0x62fb0
		v1 = v7;
		if (v7 == 0) {
			// 0x62fb4
			v1 = 46;
			int32_t v8 = a1 - 8; // 0x62fcc
			int32_t v9 = a2 - 8; // 0x62fc4
			// branch -> 0x62fc4
			while (true) {
				int32_t v10 = v9 + 8; // 0x62fc4
				int32_t v11 = v8 + 8; // 0x62fcc
				*(int32_t *)v11 = *(int32_t *)v10;
				*(int32_t *)(v8 + 12) = *(int32_t *)(v9 + 12);
				int32_t v12 = v1 - 1; // 0x62fd4
				v1 = v12;
				if (v12 == 0) {
					int32_t v13 = a2 - 8;             // 0x62ff0
					int32_t v14 = v3 + 8;             // 0x62fe8
					int32_t result = *(int32_t *)v14; // 0x62fe8
					int32_t v15 = v13 + 8;            // 0x62ff0
					*(int32_t *)v15 = result;
					*(int32_t *)(v13 + 12) = *(int32_t *)(v3 + 12);
					int32_t v16 = 45; // 0x62ff8
					// branch -> 0x62fe8
					while (v16 != 0) {
						// 0x62fe8
						// 0x62fe8
						v13 = v15;
						v3 = v14;
						v14 = v3 + 8;
						result = *(int32_t *)v14;
						v15 = v13 + 8;
						*(int32_t *)v15 = result;
						*(int32_t *)(v13 + 12) = *(int32_t *)(v3 + 12);
						v16--;
						// branch -> 0x62fe8
					}
					// 0x62ffc
					return result;
				} else {
					// 0x62fc4
					v8 = v11;
					v9 = v10;
					// branch -> 0x62fc4
					continue;
				}
			}
		} else {
			// 0x62fa0
			v3 = v6;
			v4 = v5;
			// branch -> 0x62fa0
			continue;
		}
	}
}

// Address range: 0x63004 - 0x630c8
int32_t function_63004(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x71a4); // 0x63010
	int32_t v2 = v1;                         // r30
	int32_t v3 = 0;                          // r28
	int32_t result = v1;                     // 0x630c433
	int32_t v4 = 0;
	if (*(int32_t *)(v1 + 376) != -1) {
		int32_t v5 = v1 + 368; // 0x63030
		int32_t v6 = 1;        // 0x63034
		v3 = v6;
		while (*(int32_t *)(v1 + 744) != -1) {
			// 0x63030
			v1 = v5;
			v5 = v1 + 368;
			v6++;
			v3 = v6;
			// continue -> 0x63030
		}
		// 0x63038
		result = v5;
		v4 = v6;
		// branch -> 0x63044
	}
	// 0x63044
	if (v4 < 1) {
		// 0x630a8
		return result;
	}
	int32_t v7 = 0;  // 0x630a0
	int32_t result3; // 0x630c434
	while (true) {
		int32_t result2 = result; // 0x630c4
		if (v7 == 0) {
			int32_t v8 = v2;  // r31
			int32_t v9 = 0;   // r29
			int32_t v10 = v4; // 0x6308c27
			int32_t v11 = 0;  // 0x6306c
			int32_t v12 = v2; // 0x63074
			int32_t v13 = 1;  // 0x630a021
			// branch -> 0x6305c
			int32_t v14; // 0x630a020
			int32_t v15; // 0x6308c
			while (true) {
				int32_t v16 = *(int32_t *)(v12 + 360); // 0x6305c
				result3 = v16;
				v15 = v10;
				int32_t v17 = v11; // 0x63088
				int32_t v18 = v12; // 0x63084
				v14 = v13;
				if (v16 > *(int32_t *)(v12 + 728)) {
					// 0x6306c
					result3 = function_62f8c(v12, v2 + 368 * v11 + 368);
					v15 = v3;
					v17 = v9;
					v18 = v8;
					v14 = 0;
					// branch -> 0x63084
				}
				int32_t v19 = v18 + 368; // 0x63084
				v8 = v19;
				int32_t v20 = v17 + 1; // 0x63088
				v9 = v20;
				if (v20 >= v15) {
					// break -> 0x63094
					break;
				}
				v10 = v15;
				v11 = v20;
				v12 = v19;
				v13 = v14;
				// continue -> 0x6305c
			}
			int32_t v21 = v15 - 1; // 0x63094
			v3 = v21;
			if (v21 < 1) {
				// break -> 0x630a8
				break;
			}
			result = result3;
			v4 = v21;
			v7 = v14;
			// continue -> 0x630a0
			continue;
		}
		// 0x630a8
		return result2;
	}
	// 0x630a8
	return result3;
}

// Address range: 0x630c8 - 0x6320c
int32_t function_630c8(int32_t a1)
{
	int32_t v1 = g10; // 0x630cc
	g28 = a1;
	g32 = *(int32_t *)(g23 - 0x71a4);
	g33 = *(int32_t *)(g23 - 0x7690);
	g37 = 10;
	int32_t v2 = random(50) + 10; // 0x630f4
	int32_t v3;                   // r4
	int32_t v4;                   // 0x6315c
	if (v2 > 0) {
	lab_0x63110:
		while (true) {
			// 0x63110
			*(int32_t *)g33 = GetRndSeed();
			g34 = *(int32_t *)g33;
			SetRndSeed();
			int32_t v5 = function_62ec8(g28) - 1; // 0x63128
			function_5e014(0, v5, g28);
			int32_t v6 = g33; // 0x63138
			// branch -> 0x63110
			while (*(int32_t *)(v6 + 200) > g35) {
				// 0x63110
				*(int32_t *)g33 = GetRndSeed();
				g34 = *(int32_t *)g33;
				SetRndSeed();
				v5 = function_62ec8(g28) - 1;
				function_5e014(0, v5, g28);
				v6 = g33;
				// continue -> 0x63110
			}
			int32_t v7 = 46;      // ctr
			int32_t v8 = g31 - 8; // 0x6315c
			int32_t v9 = v6 - 8;  // 0x63154
			// branch -> 0x63154
			while (true) {
				int32_t v10 = v9 + 8; // 0x63154
				v3 = v10;
				v4 = v8 + 8;
				*(int32_t *)v4 = *(int32_t *)v10;
				*(int32_t *)(v8 + 12) = *(int32_t *)(v9 + 12);
				int32_t v11 = v7 - 1; // 0x63164
				v7 = v11;
				if (v11 == 0) {
					// 0x63168
					*(int16_t *)(g31 + 4) = (int16_t)g36;
					int32_t v12 = g31; // 0x63170
					g34 = v12;
					*(int32_t *)(v12 + 56) = 1;
					*(int32_t *)(g31 + 356) = function_62de8();
					if (g30 + 1 >= g29) {
						// break (via goto) -> 0x63188
						goto lab_0x63188;
					}
					// continue (via goto) -> 0x63110
					goto lab_0x63110;
				} else {
					// 0x63154
					v8 = v4;
					v9 = v3;
					// branch -> 0x63154
					continue;
				}
			}
		lab_0x63188:;
			// 0x63188
			// branch -> 0x63190
		}
	}
	// 0x63190
	v4 = 368 * v2 + g32;
	int32_t v13 = 20 - v2; // 0x6319c
	v3 = -1;
	int32_t result; // 0x631f4
	if (v2 > 19) {
		// 0x631f4
		result = function_63004();
		g10 = v1;
		return result;
	}
	int32_t v14 = __asm_rlwinm_(v13, 29, 3, 31); // 0x631a8
	int32_t v15;                                 // 0x631ec
	int32_t v16;                                 // 0x631f0
	if (v14 == 0) {
		// 0x631a8
		// branch -> 0x631e4
		// 0x631e4
		*(int32_t *)(v4 + 8) = v3;
		v15 = v4 + 368;
		v16 = v13 - 1;
		// branch -> 0x631e8
		while (v16 != 0) {
			// 0x631e8
			*(int32_t *)(v15 + 8) = v3;
			v15 += 368;
			v16--;
			// continue -> 0x631e8
		}
		// 0x631f4
		result = function_63004();
		g10 = v1;
		return result;
	}
	// 0x631b4
	*(int32_t *)(v4 + 8) = v3;
	*(int32_t *)(v4 + 376) = v3;
	*(int32_t *)(v4 + 744) = v3;
	*(int32_t *)(v4 + 1112) = v3;
	*(int32_t *)(v4 + 1480) = v3;
	*(int32_t *)(v4 + 1848) = v3;
	*(int32_t *)(v4 + 2216) = v3;
	*(int32_t *)(v4 + 2584) = v3;
	int32_t v17 = v4 + 2944; // 0x631d4
	v4 = v17;
	int32_t v18 = v14 - 1; // 0x631d8
	// branch -> 0x631b4
	while (v18 != 0) {
		// 0x631b4
		*(int32_t *)(v17 + 8) = v3;
		*(int32_t *)(v4 + 376) = v3;
		*(int32_t *)(v4 + 744) = v3;
		*(int32_t *)(v4 + 1112) = v3;
		*(int32_t *)(v4 + 1480) = v3;
		*(int32_t *)(v4 + 1848) = v3;
		*(int32_t *)(v4 + 2216) = v3;
		*(int32_t *)(v4 + 2584) = v3;
		v17 = v4 + 2944;
		v4 = v17;
		v18--;
		// continue -> 0x631b4
	}
	int32_t v19 = v13 % 8; // 0x631dc
	if (v19 == 0) {
		// 0x631f4
		result = function_63004();
		g10 = v1;
		return result;
	}
	// 0x631e4
	*(int32_t *)(v17 + 8) = v3;
	v15 = v4 + 368;
	v16 = v19 - 1;
	// branch -> 0x631e8
	while (v16 != 0) {
		// 0x631e8
		*(int32_t *)(v15 + 8) = v3;
		v15 += 368;
		v16--;
		// continue -> 0x631e8
	}
	// 0x631f4
	result = function_63004();
	g10 = v1;
	return result;
}

// Address range: 0x6320c - 0x63290
int32_t function_6320c(int32_t a1)
{
	char v1 = *(char *)(76 * a1 + 0x3858 + g23 + 12); // 0x63218
	int32_t result = 1;                               // 0x632845
	if (v1 == 0) {
		// 0x63228
		result = 0;
		// branch -> 0x6322c
	}
	if (v1 == 11) {
		// 0x63238
		result = 0;
		// branch -> 0x6323c
	}
	if (v1 == 14) {
		// 0x63248
		result = 0;
		// branch -> 0x6324c
	}
	if (v1 == 10) {
		// 0x63258
		result = 0;
		// branch -> 0x6325c
	}
	// 0x6325c
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// bb
		return result;
	}
	if (v1 == 12) {
		// 0x63278
		result = 0;
		// branch -> 0x6327c
	}
	// 0x6327c
	if (v1 == 13) {
		// 0x63288
		return 0;
	}
	// bb
	return result;
}

// Address range: 0x63290 - 0x63348
int32_t function_63290(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0x63294
	g31 = a2;
	int32_t v2 = g23 + 0x38a4; // 0x632a4
	g35 = v2;
	int32_t v3 = 0; // r29
	g32 = 1;
	int32_t v4;       // bp-2072
	int32_t v5 = &v4; // 0x632b8
	g36 = v5;
	int32_t v6; // 0x63320
	if (*(char *)(g23 + 0x38a9) == -1) {
		// 0x63318
		g37 = 0;
		v6 = random(50);
		g10 = v1;
		return *(int32_t *)(4 * v6 + v5) + 1;
	}
	int32_t v7 = 1; // 0x632cc
	while (true) {
		// 0x632c0
		int32_t v8;  // 0x63300
		int32_t v9;  // 0x63300
		int32_t v10; // 0x63304
		if (*(int32_t *)v2 != 0) {
			// 0x632cc
			if (function_6320c(v7) != 0) {
				uint32_t v11 = (int32_t) * (char *)(g35 + 24); // 0x632e0
				if (v11 >= a1) {
					// 0x632ec
					if (v11 <= g31) {
						int32_t v12 = v3; // 0x632f4
						v3 = v12 + 1;
						*(int32_t *)(g36 + 4 * v12) = g32;
						// branch -> 0x63300
					}
					// 0x63300
					v8 = g35;
					v9 = v8 + 76;
					g35 = v9;
					v10 = g32 + 1;
					g32 = v10;
					if (*(char *)(v8 + 81) == -1) {
						// break -> 0x63308
						break;
					}
					v7 = v10;
					v2 = v9;
					// continue -> 0x632c0
					continue;
				}
				// 0x63300
				v8 = g35;
				v9 = v8 + 76;
				g35 = v9;
				v10 = g32 + 1;
				g32 = v10;
				if (*(char *)(v8 + 81) == -1) {
					// break -> 0x63308
					break;
				}
				v7 = v10;
				v2 = v9;
				// continue -> 0x632c0
				continue;
			}
			// 0x63300
			v8 = g35;
			v9 = v8 + 76;
			g35 = v9;
			v10 = g32 + 1;
			g32 = v10;
			if (*(char *)(v8 + 81) == -1) {
				// break -> 0x63308
				break;
			}
			v7 = v10;
			v2 = v9;
			// continue -> 0x632c0
			continue;
		}
		// 0x63300
		v8 = g35;
		v9 = v8 + 76;
		g35 = v9;
		v10 = g32 + 1;
		g32 = v10;
		if (*(char *)(v8 + 81) == -1) {
			// break -> 0x63308
			break;
		}
		v7 = v10;
		v2 = v9;
		// continue -> 0x632c0
	}
	// 0x63308
	// branch -> 0x63318
	// 0x63318
	g37 = v3;
	v6 = random(50);
	g10 = v1;
	return *(int32_t *)(4 * v6 + v5) + 1;
}

// Address range: 0x63348 - 0x63488
int32_t function_63348(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7690); // 0x63350
	g36 = v1;
	g35 = a2;
	g28 = a1;
	int32_t v2 = 46;     // ctr
	int32_t v3;          // bp-416
	int32_t v4 = &v3;    // 0x63374
	int32_t v5 = v1 - 8; // 0x63378
	// branch -> 0x63378
	while (true) {
		int32_t v6 = v5 + 8; // 0x63378
		int32_t v7 = v4 + 8; // 0x63380
		*(int32_t *)v7 = *(int32_t *)v6;
		*(int32_t *)(v4 + 12) = *(int32_t *)(v5 + 12);
		int32_t v8 = v2 - 1; // 0x63388
		v2 = v8;
		if (v8 == 0) {
			int32_t v9 = g35; // 0x6338c
			int32_t v10 = v9; // 0x63398
			if (v9 >= 31) {
				// 0x63394
				g35 = 30;
				v10 = 30;
				// branch -> 0x63398
			}
			int32_t v11 = v10; // 0x633ac
			if (v10 <= 0) {
				// 0x633a0
				g35 = 1;
				v11 = 1;
				// branch -> 0x633a4
			}
			// 0x633a4
			g31 = v11 / 4;
			*(int32_t *)g36 = GetRndSeed();
			g34 = *(int32_t *)g36;
			SetRndSeed();
			int32_t v12 = function_63290(g31, g35) - 1; // 0x633d0
			function_5e014(0, v12, g35);
			function_5f280(0, g29, g30, g35, 1);
			int32_t v13 = g36; // 0x633fc
			// branch -> 0x633b4
			while (*(int32_t *)(v13 + 200) > g33) {
				// 0x633b4
				*(int32_t *)g36 = GetRndSeed();
				g34 = *(int32_t *)g36;
				SetRndSeed();
				v12 = function_63290(g31, g35) - 1;
				function_5e014(0, v12, g35);
				function_5f280(0, g29, g30, g35, 1);
				v13 = g36;
				// continue -> 0x633b4
			}
			int32_t v14 = 368 * g28; // 0x63408
			int32_t v15 = g32 + v14; // 0x63414
			g34 = v15;
			v2 = 46;
			int32_t v16 = v15 - 8; // 0x63428
			int32_t v17 = v13 - 8; // 0x63420
			// branch -> 0x63420
			while (true) {
				int32_t v18 = v17 + 8; // 0x63420
				int32_t v19 = v16 + 8; // 0x63428
				*(int32_t *)v19 = *(int32_t *)v18;
				*(int32_t *)(v16 + 12) = *(int32_t *)(v17 + 12);
				int32_t v20 = v2 - 1; // 0x63430
				v2 = v20;
				if (v20 == 0) {
					int32_t v21 = g35;       // 0x63434
					int32_t v22 = v14 + g32; // 0x63438
					g35 = v22;
					*(int16_t *)(v22 + 4) = (int16_t)(v21 | 2048);
					*(int32_t *)(g35 + 56) = 1;
					*(int32_t *)(g35 + 356) = function_62de8();
					int32_t v23 = g36 - 8;            // 0x63468
					int32_t v24 = v4 + 8;             // 0x63460
					int32_t result = *(int32_t *)v24; // 0x63460
					int32_t v25 = v23 + 8;            // 0x63468
					*(int32_t *)v25 = result;
					*(int32_t *)(v23 + 12) = *(int32_t *)(v4 + 12);
					int32_t v26 = 45; // 0x63470
					// 0x63474
					// branch -> 0x63460
					while (v26 != 0) {
						// 0x63460
						// 0x63460
						v23 = v25;
						v4 = v24;
						v24 = v4 + 8;
						result = *(int32_t *)v24;
						v25 = v23 + 8;
						*(int32_t *)v25 = result;
						*(int32_t *)(v23 + 12) = *(int32_t *)(v4 + 12);
						v26--;
						// 0x63474
						// branch -> 0x63460
					}
					return result;
				} else {
					// 0x63420
					v16 = v19;
					v17 = v18;
					// branch -> 0x63420
					continue;
				}
			}
		} else {
			// 0x63378
			v4 = v7;
			v5 = v6;
			// branch -> 0x63378
			continue;
		}
	}
}

// Address range: 0x63488 - 0x635f4
int32_t function_63488(int32_t result2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x71ac); // 0x63490
	g31 = v1;
	int32_t v2 = result2; // 0x63494
	g30 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x71b4); // 0x63498
	g33 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x71b0); // 0x6349c
	g35 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x71a8); // 0x634a0
	g36 = v5;
	if (*(int32_t *)v1 <= 5) {
		int32_t v6 = 0; // 0x634d8
		// branch -> 0x634c8
		while (true) {
			int32_t v7 = v5; // 0x634f4
			int32_t v8 = v4; // 0x634ec
			int32_t v9 = v6; // 0x634e8
			if (*(int32_t *)(v5 + 8) == -1) {
				// 0x634d4
				result2 = function_63348(v6, *(int32_t *)v4 + *(int32_t *)g33);
				v7 = g32;
				v8 = g29;
				v9 = g28;
				// branch -> 0x634e8
			}
			int32_t v10 = v9 + 1; // 0x634e8
			g28 = v10;
			int32_t v11 = v8 + 4; // 0x634ec
			g29 = v11;
			if (v10 >= 6) {
				// break -> 0x634fc
				break;
			}
			v4 = v11;
			v6 = v10;
			v5 = v7 + 368;
			// continue -> 0x634c8
		}
		// 0x634fc
		*(int32_t *)g31 = 6;
		v2 = g30;
		v3 = g33;
		v5 = g36;
		// branch -> 0x63504
	}
	// 0x63504
	g32 = v5 + 736;
	g31 = v5 + 1472;
	if (*(int32_t *)v3 < v2) {
		while (true) {
		lab_0x63510:;
			int32_t *v12 = (int32_t *)v3; // 0x63510
			int32_t v13 = 46;             // ctr
			int32_t v14 = v5 - 8;         // r5
			*v12 = *v12 + 1;
			int32_t v15 = g32 - 8; // 0x6352c
			// branch -> 0x6352c
			while (true) {
				int32_t v16 = v15 + 8; // 0x6352c
				int32_t v17 = v16;     // r4
				int32_t v18 = v14;     // 0x63534
				int32_t v19 = v18 + 8; // 0x63534
				*(int32_t *)v19 = *(int32_t *)v16;
				v14 = v19;
				*(int32_t *)(v18 + 12) = *(int32_t *)(v15 + 12);
				int32_t v20 = v13 - 1; // 0x6353c
				v13 = v20;
				if (v20 == 0) {
					int32_t v21 = g36; // 0x63544
					v13 = 46;
					int32_t v22 = v21 + 360;  // 0x63558
					int32_t v23 = v21 + 1096; // 0x63550
					// branch -> 0x63550
					while (true) {
						int32_t v24 = v23 + 8; // 0x63550
						v17 = v24;
						int32_t v25 = v22 + 8; // 0x63558
						*(int32_t *)v25 = *(int32_t *)v24;
						v14 = v25;
						*(int32_t *)(v22 + 12) = *(int32_t *)(v23 + 12);
						int32_t v26 = v13 - 1; // 0x63560
						v13 = v26;
						if (v26 == 0) {
							// 0x63564
							v13 = 46;
							int32_t v27 = g32 - 8; // 0x6357c
							int32_t v28 = g31 - 8; // 0x63574
							// branch -> 0x63574
							while (true) {
								int32_t v29 = v28 + 8; // 0x63574
								v17 = v29;
								int32_t v30 = v27 + 8; // 0x6357c
								*(int32_t *)v30 = *(int32_t *)v29;
								v14 = v30;
								*(int32_t *)(v27 + 12) = *(int32_t *)(v28 + 12);
								int32_t v31 = v13 - 1; // 0x63584
								v13 = v31;
								if (v31 == 0) {
									// 0x63588
									function_63348(3, *(int32_t *)(g35 + 12) + *(int32_t *)g33);
									v13 = 46;
									int32_t v32 = g31 - 8;    // 0x635b4
									int32_t v33 = g36 + 1832; // 0x635ac
									// branch -> 0x635ac
									while (true) {
										int32_t v34 = v33 + 8; // 0x635ac
										v17 = v34;
										int32_t v35 = v32 + 8; // 0x635b4
										*(int32_t *)v35 = *(int32_t *)v34;
										v14 = v35;
										*(int32_t *)(v32 + 12) = *(int32_t *)(v33 + 12);
										int32_t v36 = v13 - 1; // 0x635bc
										v13 = v36;
										if (v36 == 0) {
											int32_t result = function_63348(5, *(int32_t *)(g35 + 20) + *(int32_t *)g33); // 0x635d0
											int32_t v37 = g33;                                                            // 0x635d4
											if (*(int32_t *)v37 >= g30) {
												// 0x635e0
												return result;
											}
											// 0x635c0
											v5 = g36;
											v3 = v37;
											// branch -> 0x63510
											goto lab_0x63510;
										} else {
											// 0x635ac
											v32 = v14;
											v33 = v17;
											// branch -> 0x635ac
											continue;
										}
									}
								} else {
									// 0x63574
									v27 = v14;
									v28 = v17;
									// branch -> 0x63574
									continue;
								}
							}
						} else {
							// 0x63550
							v22 = v14;
							v23 = v17;
							// branch -> 0x63550
							continue;
						}
					}
				} else {
					// 0x6352c
					v15 = v17;
					// branch -> 0x6352c
					continue;
				}
			}
		}
	}
	// 0x635e0
	return result2;
}

// Address range: 0x635f4 - 0x636a8
int32_t function_635f4(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77f0); // 0x635fc
	int32_t v2 = g23 + 0x3858 + 76 * a1;     // 0x63600
	char v3 = *(char *)(v2 + 12);            // 0x63604
	int32_t v4 = 0;                          // 0x636908
	if (v3 == 0) {
		// 0x63614
		v4 = 1;
		// branch -> 0x63618
	}
	if (v3 == 10) {
		// 0x63624
		v4 = 1;
		// branch -> 0x63628
	}
	int32_t v5 = *(int32_t *)(v2 + 56); // 0x6362c
	if (v5 == 6) {
		// 0x63638
		v4 = 0;
		// branch -> 0x6363c
	}
	if (v5 == 7) {
		// 0x63644
		v4 = 0;
		// branch -> 0x63648
	}
	int32_t v6 = *(int32_t *)(v2 + 60); // 0x6364c
	if (v6 == 7) {
		// 0x63658
		v4 = 0;
		// branch -> 0x6365c
	}
	if (v5 == 2) {
		// 0x63664
		v4 = 0;
		// branch -> 0x63668
	}
	if (v5 == 3) {
		// 0x63670
		v4 = 0;
		// branch -> 0x63674
	}
	int32_t result = v4; // 0x6369c
	if (v6 == 32) {
		// 0x6367c
		if (*(char *)v1 == 1) {
			// 0x63688
			result = 0;
			// branch -> 0x6368c
		} else {
			result = v4;
		}
	}
	// 0x6368c
	if (v6 == 34) {
		// 0x63694
		if (*(char *)v1 == 1) {
			// 0x636a0
			return 0;
		}
	}
	// bb
	return result;
}

// Address range: 0x636a8 - 0x63754
int32_t function_636a8(int32_t a1)
{
	int32_t v1 = g10; // 0x636ac
	g31 = a1;
	int32_t v2 = 0;            // r29
	int32_t v3 = g23 + 0x38a4; // 0x636bc
	int32_t v4 = 1;            // r28
	int32_t v5;                // bp-2072
	int32_t v6 = &v5;          // 0x636cc
	g36 = v6;
	int32_t v7; // 0x6372c
	if (*(char *)(g23 + 0x38a9) == -1) {
		// 0x63724
		g37 = 0;
		v7 = random(51);
		g10 = v1;
		return *(int32_t *)(4 * v7 + v6) + 1;
	}
	int32_t v8 = 1; // 0x636e0
	while (true) {
		// 0x636d4
		int32_t v9;  // 0x6370c
		int32_t v10; // 0x63710
		if (*(int32_t *)v3 != 0) {
			// 0x636e0
			if (function_635f4(v8) != 0) {
				// 0x636f0
				if (g31 >= (int32_t) * (char *)(v3 + 24)) {
					int32_t v11 = v2; // 0x63700
					v2 = v11 + 1;
					*(int32_t *)(g36 + 4 * v11) = v4;
					// branch -> 0x6370c
				}
				// 0x6370c
				v9 = v3;
				v10 = v4 + 1;
				v4 = v10;
				if (*(char *)(v9 + 81) == -1) {
					// break -> 0x63714
					break;
				}
				v8 = v10;
				v3 = v9 + 76;
				// continue -> 0x636d4
				continue;
			}
			// 0x6370c
			v9 = v3;
			v10 = v4 + 1;
			v4 = v10;
			if (*(char *)(v9 + 81) == -1) {
				// break -> 0x63714
				break;
			}
			v8 = v10;
			v3 = v9 + 76;
			// continue -> 0x636d4
			continue;
		}
		// 0x6370c
		v9 = v3;
		v10 = v4 + 1;
		v4 = v10;
		if (*(char *)(v9 + 81) == -1) {
			// break -> 0x63714
			break;
		}
		v8 = v10;
		v3 = v9 + 76;
		// continue -> 0x636d4
	}
	// 0x63714
	// branch -> 0x63724
	// 0x63724
	g37 = v2;
	v7 = random(51);
	g10 = v1;
	return *(int32_t *)(4 * v7 + v6) + 1;
}

// Address range: 0x63754 - 0x63804
int32_t function_63754(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7178); // 0x6375c
	int32_t v2 = 3;                          // r27
	int32_t result = v1 + 1104;              // 0x63764
	g33 = result;
	int32_t v3 = 3;
	if (*(int32_t *)(v1 + 1480) != -1) {
		int32_t v4 = result + 368; // 0x63778
		int32_t v5 = 4;            // 0x6377c
		v2 = v5;
		while (*(int32_t *)(result + 744) != -1) {
			// 0x63778
			result = v4;
			v4 = result + 368;
			v5++;
			v2 = v5;
			// continue -> 0x63778
		}
		// 0x63780
		result = v4;
		v3 = v5;
		// branch -> 0x6378c
	}
	// 0x6378c
	if (v3 < 4) {
		// 0x637f0
		return result;
	}
	int32_t v6 = 0;  // 0x637e8
	int32_t result3; // 0x6380034
	while (true) {
		int32_t result2 = result; // 0x63800
		if (v6 == 0) {
			int32_t v7 = g33;  // r30
			int32_t v8 = 3;    // r28
			int32_t v9 = v3;   // 0x637d427
			int32_t v10 = 3;   // 0x637b4
			int32_t v11 = g33; // 0x637bc
			int32_t v12 = 1;   // 0x637e821
			// branch -> 0x637a4
			int32_t v13; // 0x637e820
			int32_t v14; // 0x637d4
			while (true) {
				int32_t v15 = *(int32_t *)(v11 + 360); // 0x637a4
				result3 = v15;
				v14 = v9;
				int32_t v16 = v10; // 0x637d0
				int32_t v17 = v11; // 0x637cc
				v13 = v12;
				if (v15 > *(int32_t *)(v11 + 728)) {
					// 0x637b4
					result3 = function_62f8c(v11, v1 + 368 * v10 + 368);
					v14 = v2;
					v16 = v8;
					v17 = v7;
					v13 = 0;
					// branch -> 0x637cc
				}
				int32_t v18 = v17 + 368; // 0x637cc
				v7 = v18;
				int32_t v19 = v16 + 1; // 0x637d0
				v8 = v19;
				if (v19 >= v14) {
					// break -> 0x637dc
					break;
				}
				v9 = v14;
				v10 = v19;
				v11 = v18;
				v12 = v13;
				// continue -> 0x637a4
			}
			int32_t v20 = v14 - 1; // 0x637dc
			v2 = v20;
			if (v20 < 4) {
				// break -> 0x637f0
				break;
			}
			result = result3;
			v3 = v20;
			v6 = v13;
			// continue -> 0x637e8
			continue;
		}
		// 0x637f0
		return result2;
	}
	// 0x637f0
	return result3;
}

// Address range: 0x63804 - 0x638c4
int32_t function_63804(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x7178) + 368 * a1; // 0x6380c
	if (*(int32_t *)(result + 220) != 24) {
		// 0x638c0
		return result;
	}
	int32_t v1 = *(int32_t *)(g23 - 0x769c);      // 0x63824
	int32_t v2 = 0x51eb851f;                      // r6
	int32_t v3 = 56 * *(int32_t *)(result + 224); // 0x6382c
	int32_t v4 = *(int32_t *)(g23 - 0x77a8);      // 0x63834
	*(char *)(result + 353) = (char)*(int32_t *)(v1 + v3 + 28);
	int32_t v5 = v4 + 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x63854
	char v6 = *(char *)(v5 + *(int32_t *)(result + 224) + 193);        // 0x6385c
	if (v6 == 0) {
		// 0x638c0
		return result;
	}
	int32_t v7 = v6;     // 0x6386c
	int32_t v8 = result; // 0x63888
	int32_t result2;     // 0x638c0
	while (true) {
		char *v9 = (char *)(v8 + 353);                    // 0x63868
		int32_t v10 = (int32_t)*v9;                       // 0x63868
		int32_t v11 = v7 - 1;                             // r8
		uint64_t v12 = (int64_t)v2 * (int64_t)(20 * v10); // 0x63874
		int32_t v13 = (int32_t)(v12 / 0x100000000) < 0;   // 0x6387c
		*v9 = (char)(v13 + v10 + (int32_t)(v12 / 0x2000000000));
		char *v14 = (char *)(result + 353);               // 0x6388c
		int32_t v15 = (int32_t)*v14;                      // 0x6388c
		uint64_t v16 = (int64_t)v2 * (int64_t)(20 * v15); // 0x63894
		int32_t v17 = (int32_t)(v16 / 0x100000000) >> 31; // 0x63898
		int32_t v18 = v17 < 0;                            // 0x6389c
		if (v18 + v15 + (v17 & -0x8000000 || (int32_t)(v16 / 0x2000000000)) < 256) {
			// 0x638b8
			result2 = result;
			// branch -> 0x638b8
		} else {
			// 0x638b0
			*v14 = (char)255;
			result2 = result;
			v11 = 0;
			// branch -> 0x638b8
		}
		// 0x638b8
		if (v11 == 0) {
			// break -> 0x638c0
			break;
		}
		v7 = v11;
		v8 = result2;
		// continue -> 0x63868
	}
	// 0x638c0
	return result2;
}

// Address range: 0x638c4 - 0x63b2c
int32_t function_638c4(int16_t a1)
{
	int32_t v1 = g10; // 0x638c8
	function_5e014(0, 25, 1);
	int32_t v2 = 46;      // ctr
	int32_t v3 = g35 - 8; // 0x63908
	int32_t v4 = g36 - 8; // 0x63900
	// branch -> 0x63900
	while (true) {
		int32_t v5 = v4 + 8; // 0x63900
		int32_t v6 = v3 + 8; // 0x63908
		*(int32_t *)v6 = *(int32_t *)v5;
		*(int32_t *)(v3 + 12) = *(int32_t *)(v4 + 12);
		int32_t v7 = v2 - 1; // 0x63910
		v2 = v7;
		if (v7 == 0) {
			// 0x63914
			*(int16_t *)(g35 + 4) = (int16_t)g31;
			*(int32_t *)(g35 + 356) = 1;
			function_5e014(0, 30, 1);
			v2 = 46;
			int32_t v8 = g35 + 360; // 0x63948
			int32_t v9 = g36 - 8;   // 0x63940
			// branch -> 0x63940
			while (true) {
				int32_t v10 = v9 + 8; // 0x63940
				int32_t v11 = v8 + 8; // 0x63948
				*(int32_t *)v11 = *(int32_t *)v10;
				*(int32_t *)(v8 + 12) = *(int32_t *)(v9 + 12);
				int32_t v12 = v2 - 1; // 0x63950
				v2 = v12;
				if (v12 == 0) {
					// 0x63954
					*(int16_t *)(g35 + 372) = (int16_t)g31;
					*(int32_t *)(g35 + 724) = 1;
					function_5e014(0, 27, 1);
					v2 = 46;
					int32_t v13 = g35 + 728; // 0x63988
					int32_t v14 = g36 - 8;   // 0x63980
					// branch -> 0x63980
					while (true) {
						int32_t v15 = v14 + 8; // 0x63980
						int32_t v16 = v13 + 8; // 0x63988
						*(int32_t *)v16 = *(int32_t *)v15;
						*(int32_t *)(v13 + 12) = *(int32_t *)(v14 + 12);
						int32_t v17 = v2 - 1; // 0x63990
						v2 = v17;
						if (v17 == 0) {
							// 0x63994
							*(int16_t *)(g35 + 740) = (int16_t)g31;
							*(int32_t *)(g35 + 1092) = 1;
							g37 = 8;
							int32_t v18 = random(51) + 10; // 0x639ac
							int32_t v19 = g35;             // 0x639b0
							g28 = v19 + 1104;
							int32_t v20; // r4
							int32_t v21; // 0x63a74
							if (v18 > 3) {
							lab_0x639d0:
								while (true) {
									// 0x639d0
									// branch -> 0x639d0
									int32_t v22; // 0x63a50
									while (true) {
										// 0x639d0
										*(int32_t *)g36 = GetRndSeed();
										g34 = *(int32_t *)g36;
										SetRndSeed();
										int32_t v23 = function_636a8(0x10000 * g31 / 0x10000) - 1; // 0x639e8
										function_5e014(0, v23, 0x10000 * g31 / 0x10000);
										g37 = 100;
										int32_t v24;
										if (random(51) > 5) {
											// 0x63a18
											v24 = -1;
											// branch -> 0x63a18
										} else {
											// 0x63a14
											v24 = g27;
											// branch -> 0x63a18
										}
										int32_t v25 = v24; // 0x63a3c
										if (v24 == -1) {
											// 0x63a20
											if (*(int32_t *)(g36 + 220) == 23) {
												// 0x63a2c
												v25 = g27;
												// branch -> 0x63a30
											} else {
												v25 = -1;
											}
										}
										// 0x63a30
										if (v25 != -1) {
											// 0x63a38
											function_5f280(0, g26, v25 / 2 | v25 & -0x80000000, v25, 1);
											// branch -> 0x63a50
										}
										// 0x63a50
										v22 = g36;
										if (*(int32_t *)(v22 + 200) <= g29) {
											// break -> 0x63a5c
											break;
										}
										// continue -> 0x639d0
									}
									// 0x63a5c
									v2 = 46;
									int32_t v26 = g28 - 8; // 0x63a74
									int32_t v27 = v22 - 8; // 0x63a6c
									// branch -> 0x63a6c
									while (true) {
										int32_t v28 = v27 + 8; // 0x63a6c
										v20 = v28;
										v21 = v26 + 8;
										*(int32_t *)v21 = *(int32_t *)v28;
										*(int32_t *)(v26 + 12) = *(int32_t *)(v27 + 12);
										int32_t v29 = v2 - 1; // 0x63a7c
										v2 = v29;
										if (v29 == 0) {
											// 0x63a80
											*(int16_t *)(g28 + 4) = (int16_t)g30;
											*(int32_t *)(g28 + 56) = 1;
											function_63804(g33);
											g34 = g28;
											*(int32_t *)(g28 + 356) = function_62de8();
											g28 += 368;
											if (g33 + 1 >= g32) {
												// break (via goto) -> 0x63aa8
												goto lab_0x63aa8;
											}
											// continue (via goto) -> 0x639d0
											goto lab_0x639d0;
										} else {
											// 0x63a6c
											v26 = v21;
											v27 = v20;
											// branch -> 0x63a6c
											continue;
										}
									}
								lab_0x63aa8:;
									// 0x63aa8
									// branch -> 0x63ab0
								}
							}
							// 0x63ab0
							v21 = 368 * v18 + v19;
							int32_t v30 = 20 - v18; // 0x63abc
							v20 = -1;
							int32_t result; // 0x63b14
							if (v18 > 19) {
								// 0x63b14
								result = function_63754();
								g10 = v1;
								return result;
							}
							int32_t v31 = __asm_rlwinm_(v30, 29, 3, 31); // 0x63ac8
							int32_t v32;                                 // 0x63b0c
							int32_t v33;                                 // 0x63b10
							if (v31 == 0) {
								// 0x63ac8
								// branch -> 0x63b04
								// 0x63b04
								*(int32_t *)(v21 + 8) = v20;
								v32 = v21 + 368;
								v33 = v30 - 1;
								// branch -> 0x63b08
								while (v33 != 0) {
									// 0x63b08
									*(int32_t *)(v32 + 8) = v20;
									v32 += 368;
									v33--;
									// continue -> 0x63b08
								}
								// 0x63b14
								result = function_63754();
								g10 = v1;
								return result;
							}
							// 0x63ad4
							*(int32_t *)(v21 + 8) = v20;
							*(int32_t *)(v21 + 376) = v20;
							*(int32_t *)(v21 + 744) = v20;
							*(int32_t *)(v21 + 1112) = v20;
							*(int32_t *)(v21 + 1480) = v20;
							*(int32_t *)(v21 + 1848) = v20;
							*(int32_t *)(v21 + 2216) = v20;
							*(int32_t *)(v21 + 2584) = v20;
							int32_t v34 = v21 + 2944; // 0x63af4
							v21 = v34;
							int32_t v35 = v31 - 1; // 0x63af8
							// branch -> 0x63ad4
							while (v35 != 0) {
								// 0x63ad4
								*(int32_t *)(v34 + 8) = v20;
								*(int32_t *)(v21 + 376) = v20;
								*(int32_t *)(v21 + 744) = v20;
								*(int32_t *)(v21 + 1112) = v20;
								*(int32_t *)(v21 + 1480) = v20;
								*(int32_t *)(v21 + 1848) = v20;
								*(int32_t *)(v21 + 2216) = v20;
								*(int32_t *)(v21 + 2584) = v20;
								v34 = v21 + 2944;
								v21 = v34;
								v35--;
								// continue -> 0x63ad4
							}
							int32_t v36 = v30 % 8; // 0x63afc
							if (v36 != 0) {
								// 0x63b04
								*(int32_t *)(v34 + 8) = v20;
								v32 = v21 + 368;
								v33 = v36 - 1;
								// branch -> 0x63b08
								while (v33 != 0) {
									// 0x63b08
									*(int32_t *)(v32 + 8) = v20;
									v32 += 368;
									v33--;
									// continue -> 0x63b08
								}
								// 0x63b14
								result = function_63754();
								g10 = v1;
								return result;
							}
							// 0x63b14
							result = function_63754();
							g10 = v1;
							return result;
						}
						// 0x63980
						v13 = v16;
						v14 = v15;
						// branch -> 0x63980
					}
				} else {
					// 0x63940
					v8 = v11;
					v9 = v10;
					// branch -> 0x63940
					continue;
				}
			}
		} else {
			// 0x63900
			v3 = v6;
			v4 = v5;
			// branch -> 0x63900
			continue;
		}
	}
}

// Address range: 0x63b2c - 0x63bd8
int32_t function_63b2c(int32_t a1)
{
	int32_t v1 = g10; // 0x63b30
	g31 = a1;
	int32_t v2 = 0;            // r29
	int32_t v3 = g23 + 0x38a4; // 0x63b40
	g32 = 1;
	int32_t v4;       // bp-2072
	int32_t v5 = &v4; // 0x63b50
	g36 = v5;
	int32_t v6; // 0x63bb0
	if (*(char *)(g23 + 0x38a9) == -1) {
		// 0x63ba8
		g37 = 0;
		v6 = random(49);
		g10 = v1;
		return *(int32_t *)(4 * v6 + v5) + 1;
	}
	int32_t v7 = 1; // 0x63b64
	while (true) {
		// 0x63b58
		int32_t v8; // 0x63b90
		int32_t v9; // 0x63b94
		if (*(int32_t *)v3 != 0) {
			// 0x63b64
			if (function_6320c(v7) != 0) {
				// 0x63b74
				if (g31 >= (int32_t) * (char *)(v3 + 24)) {
					int32_t v10 = v2; // 0x63b84
					v2 = v10 + 1;
					*(int32_t *)(g36 + 4 * v10) = g32;
					// branch -> 0x63b90
				}
				// 0x63b90
				v8 = v3;
				v9 = g32 + 1;
				g32 = v9;
				if (*(char *)(v8 + 81) == -1) {
					// break -> 0x63b98
					break;
				}
				v7 = v9;
				v3 = v8 + 76;
				// continue -> 0x63b58
				continue;
			}
			// 0x63b90
			v8 = v3;
			v9 = g32 + 1;
			g32 = v9;
			if (*(char *)(v8 + 81) == -1) {
				// break -> 0x63b98
				break;
			}
			v7 = v9;
			v3 = v8 + 76;
			// continue -> 0x63b58
			continue;
		}
		// 0x63b90
		v8 = v3;
		v9 = g32 + 1;
		g32 = v9;
		if (*(char *)(v8 + 81) == -1) {
			// break -> 0x63b98
			break;
		}
		v7 = v9;
		v3 = v8 + 76;
		// continue -> 0x63b58
	}
	// 0x63b98
	// branch -> 0x63ba8
	// 0x63ba8
	g37 = v2;
	v6 = random(49);
	g10 = v1;
	return *(int32_t *)(4 * v6 + v5) + 1;
}

// Address range: 0x63bd8 - 0x63cc8
int32_t function_63bd8(int32_t result)
{
	int32_t v1 = g10; // 0x63bdc
	g28 = result;
	g35 = *(int32_t *)(g23 - 0x7690);
	int32_t v2;      // ctr
	int32_t v3;      // 0x63c64
	int32_t v4;      // 0x63c80
	int32_t v5;      // 0x63ca0
	int32_t result2; // 0x63ca8
	int32_t v6;      // 0x63c38
	int32_t v7;      // 0x63c80
	int32_t v8;      // 0x63c88
	int32_t v9;      // 0x63c90
	int32_t v10;     // 0x63c88
	if (*(int32_t *)*(int32_t *)(g23 - 0x71b8) >= (result / 2 || result & -0x80000000)) {
		// 0x63c08
		if (*(int32_t *)(*(int32_t *)(g23 - 0x71bc) + 8) != -1) {
			// 0x63cb4
			g10 = v1;
			return result;
		}
		// 0x63c14
		*(int32_t *)g35 = GetRndSeed();
		g34 = *(int32_t *)g35;
		SetRndSeed();
		v6 = function_63b2c(g28) - 1;
		function_5e014(0, v6, g28);
		function_5f280(0, g29, g28, g31, 1);
		v3 = g35;
		// branch -> 0x63c20
		while (*(int32_t *)(v3 + 200) > g36) {
			// 0x63c20
			*(int32_t *)g35 = GetRndSeed();
			g34 = *(int32_t *)g35;
			SetRndSeed();
			v6 = function_63b2c(g28) - 1;
			function_5e014(0, v6, g28);
			function_5f280(0, g29, g28, g31, 1);
			v3 = g35;
			// continue -> 0x63c20
		}
		// 0x63c70
		v2 = 46;
		v8 = g32 - 8;
		v4 = v3 - 8;
		// branch -> 0x63c80
		while (true) {
			// 0x63c80
			v7 = v4 + 8;
			v10 = v8 + 8;
			*(int32_t *)v10 = *(int32_t *)v7;
			*(int32_t *)(v8 + 12) = *(int32_t *)(v4 + 12);
			v9 = v2 - 1;
			v2 = v9;
			if (v9 == 0) {
				// 0x63c94
				*(int16_t *)(g32 + 4) = (int16_t)(g28 | 0x1000);
				v5 = g32;
				g34 = v5;
				*(int32_t *)(v5 + 56) = 1;
				result2 = function_62de8();
				*(int32_t *)(g32 + 356) = result2;
				*(int32_t *)g33 = g30;
				// branch -> 0x63cb4
				// 0x63cb4
				g10 = v1;
				return result2;
			}
		lab_0x63c80:
			// 0x63c80
			v8 = v10;
			v4 = v7;
			// branch -> 0x63c80
		}
	}
	// 0x63c14
	*(int32_t *)g35 = GetRndSeed();
	g34 = *(int32_t *)g35;
	SetRndSeed();
	v6 = function_63b2c(g28) - 1;
	function_5e014(0, v6, g28);
	function_5f280(0, g29, g28, g31, 1);
	v3 = g35;
	// branch -> 0x63c20
	while (*(int32_t *)(v3 + 200) > g36) {
		// 0x63c20
		*(int32_t *)g35 = GetRndSeed();
		g34 = *(int32_t *)g35;
		SetRndSeed();
		v6 = function_63b2c(g28) - 1;
		function_5e014(0, v6, g28);
		function_5f280(0, g29, g28, g31, 1);
		v3 = g35;
		// continue -> 0x63c20
	}
	// 0x63c70
	v8 = g32 - 8;
	v4 = v3 - 8;
	// branch -> 0x63c80
	while (true) {
		// 0x63c80
		v7 = v4 + 8;
		v10 = v8 + 8;
		*(int32_t *)v10 = *(int32_t *)v7;
		*(int32_t *)(v8 + 12) = *(int32_t *)(v4 + 12);
		v9 = 45;
		v2 = v9;
		if (v9 != 0) {
			goto lab_0x63c80;
		}
		// 0x63c94
		*(int16_t *)(g32 + 4) = (int16_t)(g28 | 0x1000);
		v5 = g32;
		g34 = v5;
		*(int32_t *)(v5 + 56) = 1;
		result2 = function_62de8();
		*(int32_t *)(g32 + 356) = result2;
		*(int32_t *)g33 = g30;
		// branch -> 0x63cb4
		// 0x63cb4
		g10 = v1;
		return result2;
	}
}

// Address range: 0x63cc8 - 0x63df0
int32_t function_63cc8(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77f0); // 0x63cd0
	int32_t v2 = g23 + 0x3858 + 76 * a1;     // 0x63cd4
	if (*(char *)(v2 + 12) != 0) {
		// 0x63ce8
		return 0;
	}
	int32_t v3 = *(int32_t *)(v2 + 56); // 0x63cf0
	int32_t v4 = 0;                     // 0x63de413
	if (v3 == 21) {
		// 0x63cfc
		if (*(int32_t *)(v2 + 60) == 2) {
			// 0x63d08
			v4 = 1;
			// branch -> 0x63d0c
		} else {
			v4 = 0;
		}
	}
	// 0x63d0c
	int32_t result; // 0x63de4
	int32_t v5;     // 0x63de410
	int32_t v6;     // 0x63de411
	int32_t v7;     // 0x63de42
	int32_t v8;     // 0x63de43
	int32_t v9;     // 0x63de44
	int32_t v10;    // 0x63de45
	int32_t v11;    // 0x63de46
	int32_t v12;    // 0x63de47
	int32_t v13;    // 0x63de48
	int32_t v14;    // 0x63de49
	if (v3 == 22) {
		int32_t *v15 = (int32_t *)(v2 + 60); // 0x63d18
		int32_t v16 = v4;
		if (*v15 == 32) {
			// 0x63d24
			if (*(char *)v1 != 1) {
				// 0x63d30
				v16 = 0;
				// branch -> 0x63d3c
			} else {
				v16 = v4;
			}
		}
		// 0x63d3c
		if (*v15 == 34) {
			// 0x63d4c
			if (*(char *)v1 != 1) {
				// 0x63d58
				v6 = 1;
				// branch -> 0x63d5c
			} else {
				v6 = v16;
			}
			// 0x63d5c
			v12 = v6;
			if (*(char *)v1 == 1) {
				// 0x63d68
				v5 = v6;
				if (v3 == 10) {
					// 0x63d70
					v5 = 1;
					// branch -> 0x63d74
				}
				// 0x63d74
				v14 = v5;
				if (v3 == 11) {
					// 0x63d7c
					v14 = 1;
					// branch -> 0x63d80
				}
				// 0x63d80
				v13 = v14;
				if (v3 == 12) {
					// 0x63d88
					v13 = 1;
					// branch -> 0x63d8c
				}
				// 0x63d8c
				if (v3 == 13) {
					// 0x63d94
					v12 = 1;
					// branch -> 0x63d98
				} else {
					v12 = v13;
				}
			}
			// 0x63d98
			v11 = v12;
			if (v3 == 2) {
				// 0x63da0
				v11 = 1;
				// branch -> 0x63da4
			}
			// 0x63da4
			v10 = v11;
			if (v3 == 18) {
				// 0x63dac
				v10 = 1;
				// branch -> 0x63db0
			}
			// 0x63db0
			v9 = v10;
			if (v3 == 19) {
				// 0x63db8
				v9 = 1;
				// branch -> 0x63dbc
			}
			// 0x63dbc
			v8 = v9;
			if (v3 == 3) {
				// 0x63dc4
				v8 = 0;
				// branch -> 0x63dc8
			}
			// 0x63dc8
			v7 = v8;
			if (v3 == 2) {
				// 0x63dd0
				v7 = 0;
				// branch -> 0x63dd4
			}
			// 0x63dd4
			result = v7;
			if (v3 == 6) {
				// 0x63ddc
				result = 0;
				// branch -> 0x63de0
			}
			// 0x63de0
			if (v3 == 7) {
				// 0x63de8
				return 0;
			}
			// bb
			return result;
		}
		v6 = v16;
	} else {
		// 0x63d34
		v6 = v4;
		// branch -> 0x63d5c
	}
	// 0x63d5c
	v12 = v6;
	if (*(char *)v1 == 1) {
		// 0x63d68
		v5 = v6;
		if (v3 == 10) {
			// 0x63d70
			v5 = 1;
			// branch -> 0x63d74
		}
		// 0x63d74
		v14 = v5;
		if (v3 == 11) {
			// 0x63d7c
			v14 = 1;
			// branch -> 0x63d80
		}
		// 0x63d80
		v13 = v14;
		if (v3 == 12) {
			// 0x63d88
			v13 = 1;
			// branch -> 0x63d8c
		}
		// 0x63d8c
		if (v3 == 13) {
			// 0x63d94
			v12 = 1;
			// branch -> 0x63d98
		} else {
			v12 = v13;
		}
	}
	// 0x63d98
	v11 = v12;
	if (v3 == 2) {
		// 0x63da0
		v11 = 1;
		// branch -> 0x63da4
	}
	// 0x63da4
	v10 = v11;
	if (v3 == 18) {
		// 0x63dac
		v10 = 1;
		// branch -> 0x63db0
	}
	// 0x63db0
	v9 = v10;
	if (v3 == 19) {
		// 0x63db8
		v9 = 1;
		// branch -> 0x63dbc
	}
	// 0x63dbc
	v8 = v9;
	if (v3 == 3) {
		// 0x63dc4
		v8 = 0;
		// branch -> 0x63dc8
	}
	// 0x63dc8
	v7 = v8;
	if (v3 == 2) {
		// 0x63dd0
		v7 = 0;
		// branch -> 0x63dd4
	}
	// 0x63dd4
	result = v7;
	if (v3 == 6) {
		// 0x63ddc
		result = 0;
		// branch -> 0x63de0
	}
	// 0x63de0
	if (v3 == 7) {
		// 0x63de8
		return 0;
	}
	// bb
	return result;
}

// Address range: 0x63df0 - 0x63e9c
int32_t function_63df0(int32_t a1)
{
	int32_t v1 = g10; // 0x63df4
	g33 = 0;
	int32_t v2 = g23 + 0x38a4; // 0x63e04
	g32 = 1;
	int32_t v3;       // bp-2072
	int32_t v4 = &v3; // 0x63e14
	g36 = v4;
	int32_t v5; // 0x63e74
	if (*(char *)(g23 + 0x38a9) == -1) {
		// 0x63e6c
		g37 = 0;
		v5 = random(50);
		g10 = v1;
		return *(int32_t *)(4 * v5 + v4) + 1;
	}
	int32_t v6 = 1; // 0x63e28
	while (true) {
		// 0x63e1c
		int32_t v7; // 0x63e54
		int32_t v8; // 0x63e58
		if (*(int32_t *)v2 != 0) {
			// 0x63e28
			if (function_63cc8(v6) != 0) {
				// 0x63e38
				if (a1 >= (int32_t) * (char *)(v2 + 24)) {
					int32_t v9 = g33; // 0x63e48
					g33 = v9 + 1;
					*(int32_t *)(g36 + 4 * v9) = g32;
					// branch -> 0x63e54
				}
				// 0x63e54
				v7 = v2;
				v8 = g32 + 1;
				g32 = v8;
				if (*(char *)(v7 + 81) == -1) {
					// break -> 0x63e5c
					break;
				}
				v6 = v8;
				v2 = v7 + 76;
				// continue -> 0x63e1c
				continue;
			}
			// 0x63e54
			v7 = v2;
			v8 = g32 + 1;
			g32 = v8;
			if (*(char *)(v7 + 81) == -1) {
				// break -> 0x63e5c
				break;
			}
			v6 = v8;
			v2 = v7 + 76;
			// continue -> 0x63e1c
			continue;
		}
		// 0x63e54
		v7 = v2;
		v8 = g32 + 1;
		g32 = v8;
		if (*(char *)(v7 + 81) == -1) {
			// break -> 0x63e5c
			break;
		}
		v6 = v8;
		v2 = v7 + 76;
		// continue -> 0x63e1c
	}
	// 0x63e5c
	// branch -> 0x63e6c
	// 0x63e6c
	g37 = g33;
	v5 = random(50);
	g10 = v1;
	return *(int32_t *)(4 * v5 + v4) + 1;
}

// Address range: 0x63e9c - 0x63f4c
int32_t function_63e9c(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x71c0); // 0x63ea4
	g36 = v1;
	int32_t v2 = 2;            // r27
	int32_t result = v1 + 736; // 0x63eac
	int32_t v3 = 2;
	if (*(int32_t *)(v1 + 1112) != -1) {
		int32_t v4 = result + 368; // 0x63ec0
		int32_t v5 = 3;            // 0x63ec4
		v2 = v5;
		while (*(int32_t *)(result + 744) != -1) {
			// 0x63ec0
			result = v4;
			v4 = result + 368;
			v5++;
			v2 = v5;
			// continue -> 0x63ec0
		}
		// 0x63ec8
		result = v4;
		v3 = v5;
		// branch -> 0x63ed4
	}
	// 0x63ed4
	if (v3 < 3) {
		// 0x63f38
		return result;
	}
	int32_t v6 = 0;  // 0x63f30
	int32_t result3; // 0x63f4834
	while (true) {
		int32_t result2 = result; // 0x63f48
		if (v6 == 0) {
			// 0x63eec
			g35 = result;
			int32_t v7 = 2;  // r28
			int32_t v8 = v3; // 0x63f1c27
			int32_t v9 = 2;  // 0x63efc
			int32_t v10 = 1; // 0x63f3021
			// branch -> 0x63eec
			int32_t v11; // 0x63f3020
			int32_t v12; // 0x63f1c
			while (true) {
				int32_t v13 = *(int32_t *)(result + 360); // 0x63eec
				result3 = v13;
				v12 = v8;
				int32_t v14 = v9;     // 0x63f18
				int32_t v15 = result; // 0x63f14
				v11 = v10;
				if (v13 > *(int32_t *)(result + 728)) {
					// 0x63efc
					result3 = function_62f8c(result, g36 + 368 * v9 + 368);
					v12 = v2;
					v14 = v7;
					v15 = g35;
					v11 = 0;
					// branch -> 0x63f14
				}
				int32_t v16 = v15 + 368; // 0x63f14
				g35 = v16;
				int32_t v17 = v14 + 1; // 0x63f18
				v7 = v17;
				if (v17 >= v12) {
					// break -> 0x63f24
					break;
				}
				v8 = v12;
				v9 = v17;
				result = v16;
				v10 = v11;
				// continue -> 0x63eec
			}
			int32_t v18 = v12 - 1; // 0x63f24
			v2 = v18;
			if (v18 < 3) {
				// break -> 0x63f38
				break;
			}
			result = result3;
			v3 = v18;
			v6 = v11;
			// continue -> 0x63f30
			continue;
		}
		// 0x63f38
		return result2;
	}
	// 0x63f38
	return result3;
}

// Address range: 0x63f4c - 0x64158
int32_t function_63f4c(int16_t a1)
{
	int32_t v1 = g10; // 0x63f50
	function_5e014(0, 24, 1);
	int32_t v2 = 46;      // ctr
	int32_t v3 = g35 - 8; // 0x63f90
	int32_t v4 = g36 - 8; // 0x63f88
	// branch -> 0x63f88
	while (true) {
		int32_t v5 = v4 + 8; // 0x63f88
		int32_t v6 = v3 + 8; // 0x63f90
		*(int32_t *)v6 = *(int32_t *)v5;
		*(int32_t *)(v3 + 12) = *(int32_t *)(v4 + 12);
		int32_t v7 = v2 - 1; // 0x63f98
		v2 = v7;
		if (v7 == 0) {
			// 0x63f9c
			*(int16_t *)(g35 + 4) = (int16_t)g33;
			*(int32_t *)(g35 + 356) = 1;
			function_5e014(0, 29, 1);
			v2 = 46;
			int32_t v8 = g35 + 360; // 0x63fd0
			int32_t v9 = g36 - 8;   // 0x63fc8
			// branch -> 0x63fc8
			while (true) {
				int32_t v10 = v9 + 8; // 0x63fc8
				int32_t v11 = v8 + 8; // 0x63fd0
				*(int32_t *)v11 = *(int32_t *)v10;
				*(int32_t *)(v8 + 12) = *(int32_t *)(v9 + 12);
				int32_t v12 = v2 - 1; // 0x63fd8
				v2 = v12;
				if (v12 == 0) {
					// 0x63fdc
					*(int16_t *)(g35 + 372) = (int16_t)g33;
					*(int32_t *)(g35 + 724) = 1;
					int32_t v13;    // r3
					int32_t v14;    // r4
					int32_t v15;    // 0x640a0
					int32_t v16;    // 0x640e8
					int32_t result; // 0x64140
					int32_t v17;    // 0x64054
					int32_t v18;    // 0x64080
					int32_t v19;    // 0x640a8
					int32_t v20;    // 0x640e8
					int32_t v21;    // 0x640f4
					int32_t v22;    // 0x64120
					int32_t v23;    // 0x64124
					int32_t v24;    // 0x64128
					int32_t v25;    // 0x64138
					int32_t v26;    // 0x6413c
					int32_t v27;    // 0x640a8
					if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
						// 0x64040
						// branch -> 0x64044
					} else {
						// 0x63ff8
						function_5e014(0, 34, 1);
						v2 = 46;
						int32_t v28 = g35 + 728; // 0x64020
						int32_t v29 = g36 - 8;   // 0x64018
						// branch -> 0x64018
						while (true) {
							int32_t v30 = v29 + 8; // 0x64018
							int32_t v31 = v28 + 8; // 0x64020
							*(int32_t *)v31 = *(int32_t *)v30;
							*(int32_t *)(v28 + 12) = *(int32_t *)(v29 + 12);
							int32_t v32 = v2 - 1; // 0x64028
							v2 = v32;
							if (v32 == 0) {
								// 0x6402c
								*(int16_t *)(g35 + 740) = (int16_t)g33;
								*(int32_t *)(g35 + 1092) = 1;
								// branch -> 0x64044
								// 0x64044
								g37 = 8;
								v17 = random(50) + 10;
								g29 = v17;
								v16 = v17;
								if (3 < v17) {
									while (true) {
										// 0x64068
										*(int32_t *)g36 = GetRndSeed();
										g34 = *(int32_t *)g36;
										SetRndSeed();
										v18 = function_63df0(0x10000 * g33 / 0x10000) - 1;
										function_5e014(0, v18, 0x10000 * g33 / 0x10000);
										v2 = 46;
										v19 = g31 - 8;
										v15 = g36 - 8;
										// branch -> 0x640a0
									lab_0x640a0:
										while (true) {
											int32_t v33 = v15 + 8; // 0x640a0
											v14 = v33;
											v27 = v19 + 8;
											*(int32_t *)v27 = *(int32_t *)v33;
											*(int32_t *)(v19 + 12) = *(int32_t *)(v15 + 12);
											int32_t v34 = v2 - 1; // 0x640b0
											v2 = v34;
											if (v34 == 0) {
												// 0x640b4
												*(int16_t *)(g31 + 4) = (int16_t)g32;
												int32_t v35 = g31; // 0x640bc
												g34 = v35;
												*(int32_t *)(v35 + 56) = 1;
												*(int32_t *)(g31 + 356) = function_62de8();
												if (g30 + 1 >= g29) {
													// break (via goto) -> 0x640d4
													goto lab_0x640d4;
												}
												// continue (via goto) -> 0x64068
												goto lab_0x64068;
											} else {
												// 0x640a0
												v19 = v27;
												v15 = v14;
												// branch -> 0x640a0
												continue;
											}
										}
									lab_0x640d4:;
										// 0x640d4
										// branch -> 0x640dc
									}
								}
								// 0x640dc
								v27 = 368 * v16 + g35;
								v20 = 20 - v16;
								v13 = v20;
								v14 = -1;
								if (v16 > 19) {
									// 0x64140
									result = function_63e9c();
									g10 = v1;
									return result;
								}
								// 0x640f4
								v21 = __asm_rlwinm_(v20, 29, 3, 31);
								if (v21 == 0) {
									// 0x640f4
									// branch -> 0x64130
									// 0x64130
									*(int32_t *)(v27 + 8) = v14;
									v25 = v27 + 368;
									v26 = v13 - 1;
									// branch -> 0x64134
									while (v26 != 0) {
										// 0x64134
										*(int32_t *)(v25 + 8) = v14;
										v25 += 368;
										v26--;
										// continue -> 0x64134
									}
									// 0x64140
									result = function_63e9c();
									g10 = v1;
									return result;
								}
								// 0x64100
								*(int32_t *)(v27 + 8) = v14;
								*(int32_t *)(v27 + 376) = v14;
								*(int32_t *)(v27 + 744) = v14;
								*(int32_t *)(v27 + 1112) = v14;
								*(int32_t *)(v27 + 1480) = v14;
								*(int32_t *)(v27 + 1848) = v14;
								*(int32_t *)(v27 + 2216) = v14;
								*(int32_t *)(v27 + 2584) = v14;
								v22 = v27 + 2944;
								v27 = v22;
								v23 = v21 - 1;
								// branch -> 0x64100
								while (v23 != 0) {
									// 0x64100
									*(int32_t *)(v22 + 8) = v14;
									*(int32_t *)(v27 + 376) = v14;
									*(int32_t *)(v27 + 744) = v14;
									*(int32_t *)(v27 + 1112) = v14;
									*(int32_t *)(v27 + 1480) = v14;
									*(int32_t *)(v27 + 1848) = v14;
									*(int32_t *)(v27 + 2216) = v14;
									*(int32_t *)(v27 + 2584) = v14;
									v22 = v27 + 2944;
									v27 = v22;
									v23--;
									// continue -> 0x64100
								}
								// 0x64128
								v24 = v13 % 8;
								if (v24 != 0) {
									// 0x64130
									*(int32_t *)(v22 + 8) = v14;
									v25 = v27 + 368;
									v26 = v24 - 1;
									// branch -> 0x64134
									while (v26 != 0) {
										// 0x64134
										*(int32_t *)(v25 + 8) = v14;
										v25 += 368;
										v26--;
										// continue -> 0x64134
									}
									// 0x64140
									result = function_63e9c();
									g10 = v1;
									return result;
								}
								// 0x64140
								result = function_63e9c();
								g10 = v1;
								return result;
							}
							// 0x64018
							v28 = v31;
							v29 = v30;
							// branch -> 0x64018
						}
					}
					// 0x64044
					g37 = 8;
					v17 = random(50) + 10;
					g29 = v17;
					v16 = v17;
					if (2 < v17) {
					lab_0x64068:
						while (true) {
							// 0x64068
							*(int32_t *)g36 = GetRndSeed();
							g34 = *(int32_t *)g36;
							SetRndSeed();
							v18 = function_63df0(0x10000 * g33 / 0x10000) - 1;
							function_5e014(0, v18, 0x10000 * g33 / 0x10000);
							v2 = 46;
							v19 = g31 - 8;
							v15 = g36 - 8;
							// branch -> 0x640a0
							goto lab_0x640a0;
						}
					}
					// 0x640dc
					v27 = 368 * v16 + g35;
					v20 = 20 - v16;
					v13 = v20;
					v14 = -1;
					if (v16 > 19) {
						// 0x64140
						result = function_63e9c();
						g10 = v1;
						return result;
					}
					// 0x640f4
					v21 = __asm_rlwinm_(v20, 29, 3, 31);
					if (v21 == 0) {
						// 0x640f4
						// branch -> 0x64130
						// 0x64130
						*(int32_t *)(v27 + 8) = v14;
						v25 = v27 + 368;
						v26 = v13 - 1;
						// branch -> 0x64134
						while (v26 != 0) {
							// 0x64134
							*(int32_t *)(v25 + 8) = v14;
							v25 += 368;
							v26--;
							// continue -> 0x64134
						}
						// 0x64140
						result = function_63e9c();
						g10 = v1;
						return result;
					}
					// 0x64100
					*(int32_t *)(v27 + 8) = v14;
					*(int32_t *)(v27 + 376) = v14;
					*(int32_t *)(v27 + 744) = v14;
					*(int32_t *)(v27 + 1112) = v14;
					*(int32_t *)(v27 + 1480) = v14;
					*(int32_t *)(v27 + 1848) = v14;
					*(int32_t *)(v27 + 2216) = v14;
					*(int32_t *)(v27 + 2584) = v14;
					v22 = v27 + 2944;
					v27 = v22;
					v23 = v21 - 1;
					// branch -> 0x64100
					while (v23 != 0) {
						// 0x64100
						*(int32_t *)(v22 + 8) = v14;
						*(int32_t *)(v27 + 376) = v14;
						*(int32_t *)(v27 + 744) = v14;
						*(int32_t *)(v27 + 1112) = v14;
						*(int32_t *)(v27 + 1480) = v14;
						*(int32_t *)(v27 + 1848) = v14;
						*(int32_t *)(v27 + 2216) = v14;
						*(int32_t *)(v27 + 2584) = v14;
						v22 = v27 + 2944;
						v27 = v22;
						v23--;
						// continue -> 0x64100
					}
					// 0x64128
					v24 = v13 % 8;
					if (v24 != 0) {
						// 0x64130
						*(int32_t *)(v22 + 8) = v14;
						v25 = v27 + 368;
						v26 = v24 - 1;
						// branch -> 0x64134
						while (v26 != 0) {
							// 0x64134
							*(int32_t *)(v25 + 8) = v14;
							v25 += 368;
							v26--;
							// continue -> 0x64134
						}
						// 0x64140
						result = function_63e9c();
						g10 = v1;
						return result;
					}
					// 0x64140
					result = function_63e9c();
					g10 = v1;
					return result;
				}
				// 0x63fc8
				v8 = v11;
				v9 = v10;
				// branch -> 0x63fc8
			}
		} else {
			// 0x63f88
			v3 = v6;
			v4 = v5;
			// branch -> 0x63f88
			continue;
		}
	}
}

// Address range: 0x64158 - 0x641c0
int32_t function_64158(void)
{
	// 0x64158
	function_5e014(0, 0, 1);
	int32_t v1 = 46;                             // ctr
	int32_t v2 = g36 - 8;                        // 0x64198
	int32_t v3 = *(int32_t *)(g23 - 0x7690) - 8; // 0x64190
	// branch -> 0x64190
	while (true) {
		int32_t v4 = v3 + 8;         // 0x64190
		int32_t v5 = *(int32_t *)v4; // 0x64190
		int32_t result = v5;         // r3
		int32_t v6 = v2 + 8;         // 0x64198
		*(int32_t *)v6 = v5;
		*(int32_t *)(v2 + 12) = *(int32_t *)(v3 + 12);
		int32_t v7 = v1 - 1; // 0x641a0
		v1 = v7;
		if (v7 == 0) {
			// 0x641a4
			*(int32_t *)(g36 + 356) = 1;
			return result;
		}
		// 0x64190
		v2 = v6;
		v3 = v4;
		// branch -> 0x64190
	}
}

// Address range: 0x641c0 - 0x6424c
int32_t function_641c0(int32_t a1)
{
	// 0x641c0
	g34 = g39;
	SetRndSeed();
	int32_t v1 = function_62ec8(g38); // 0x641fc
	function_5e014(g32, v1 - 1, g33);
	int32_t v2 = 368 * g32; // 0x64210
	*(int32_t *)(g36 + v2) = g35;
	int32_t result = v2 + g36; // 0x6421c
	*(int16_t *)(result + 4) = (int16_t)(g33 | 1024);
	*(int32_t *)(result + 56) = 1;
	return result;
}

// Address range: 0x6424c - 0x642e0
int32_t function_6424c(int32_t a1)
{
	int32_t v1 = g38; // 0x64260
	g34 = g39;
	SetRndSeed();
	int32_t v2 = function_63290(v1 / 4, v1); // 0x64280
	function_5e014(g31, v2 - 1, g32);
	uint32_t v3 = g32; // 0x642a0
	function_5f280(g31, g35, v3 / 2 | v3 & -0x80000000, v3, 1);
	int32_t v4 = 368 * g31; // 0x642b0
	*(int32_t *)(g36 + v4) = g33;
	int32_t result = v4 + g36; // 0x642bc
	*(int16_t *)(result + 4) = (int16_t)(g32 | 2048);
	*(int32_t *)(result + 56) = 1;
	return result;
}

// Address range: 0x642e0 - 0x64370
int32_t function_642e0(int32_t a1)
{
	// 0x642e0
	g34 = g39;
	SetRndSeed();
	int32_t v1 = function_63b2c(g38); // 0x64310
	function_5e014(g31, v1 - 1, g32);
	int32_t v2 = g32; // 0x64330
	function_5f280(g31, g35, v2, 2 * v2, 1);
	int32_t v3 = 368 * g31; // 0x64340
	*(int32_t *)(g36 + v3) = g33;
	int32_t result = v3 + g36; // 0x6434c
	*(int16_t *)(result + 4) = (int16_t)(g32 | 0x1000);
	*(int32_t *)(result + 56) = 1;
	return result;
}

// Address range: 0x64370 - 0x64468
int32_t function_64370(int32_t a1)
{
	int32_t v1 = g37; // 0x64378
	int32_t v2 = g38; // 0x64384
	int32_t result;   // r3
	int32_t v3;       // 0x64438
	int32_t v4;       // 0x64444
	if (v1 == 25 || v1 == 30 || v1 == 27) {
		// 0x643a8
		function_5e014(a1, v2, v2);
		// branch -> 0x64438
		// 0x64438
		v3 = 368 * g30;
		*(int32_t *)(g36 + v3) = g32;
		v4 = v3 + g36;
		result = v4;
		*(int16_t *)(v4 + 4) = (int16_t)(g31 | 0x2000);
		*(int32_t *)(result + 56) = 1;
		return result;
	}
	// 0x643b8
	g34 = g39;
	SetRndSeed();
	int32_t v5 = function_636a8(v2); // 0x643c4
	function_5e014(a1, v5 - 1, g31);
	g37 = 100;
	int32_t v6;
	if (random(51) > 5) {
		// 0x643f8
		v6 = -1;
		// branch -> 0x643f8
	} else {
		// 0x643f4
		v6 = 2 * g31;
		// branch -> 0x643f8
	}
	int32_t v7 = v6; // 0x64428
	if (v6 == -1) {
		// 0x64400
		if (*(int32_t *)(g36 + 368 * g30 + 220) == 23) {
			// 0x64414
			v7 = 2 * g31;
			// branch -> 0x64418
		} else {
			v7 = -1;
		}
	}
	// 0x64418
	if (v7 != -1) {
		// 0x64420
		function_5f280(g30, g35, v7 / 2 | v7 & -0x80000000, v7, 1);
		// branch -> 0x64438
	}
	// 0x64438
	v3 = 368 * g30;
	*(int32_t *)(g36 + v3) = g32;
	v4 = v3 + g36;
	result = v4;
	*(int16_t *)(v4 + 4) = (int16_t)(g31 | 0x2000);
	*(int32_t *)(result + 56) = 1;
	return result;
}

// Address range: 0x64468 - 0x64518
int32_t function_64468(int32_t result)
{
	int32_t v1 = g37; // 0x64470
	int32_t v2 = g38; // 0x64484
	int32_t v3;       // 0x644dc
	int32_t v4;       // 0x644e8
	if (v1 == 24 || v1 == 29 || v1 == 34) {
		// 0x644ac
		function_5e014(result, v2, v2);
		// branch -> 0x644dc
		// 0x644dc
		v3 = 368 * g32;
		*(int32_t *)(g36 + v3) = g35;
		v4 = v3 + g36;
		result = v4;
		*(int16_t *)(v4 + 4) = (int16_t)(g33 | 0x4000);
		*(int32_t *)(result + 56) = 1;
		return result;
	}
	// 0x644bc
	g34 = g39;
	SetRndSeed();
	int32_t v5 = function_63df0(v2); // 0x644c8
	function_5e014(g32, v5 - 1, g33);
	// branch -> 0x644dc
	// 0x644dc
	v3 = 368 * g32;
	*(int32_t *)(g36 + v3) = g35;
	v4 = v3 + g36;
	result = v4;
	*(int16_t *)(v4 + 4) = (int16_t)(g33 | 0x4000);
	*(int32_t *)(result + 56) = 1;
	return result;
}

// Address range: 0x64518 - 0x6459c
int32_t function_64518(uint32_t a1, int32_t a2, int32_t a3)
{
	uint32_t v1 = a1 % 0x10000; // 0x6451c
	int32_t result;             // 0x64598
	if (__asm_rlwinm_(a1, 0, 21, 21) != 0) {
		int32_t v2 = a1 % 64; // 0x64534
		g38 = v2;
		result = function_641c0(v2);
		// branch -> 0x6458c
		// 0x6458c
		return result;
	}
	// 0x64540
	if (__asm_rlwinm_(v1, 0, 20, 20) != 0) {
		int32_t v3 = a1 % 64; // 0x64548
		g38 = v3;
		result = function_6424c(v3);
		// branch -> 0x6458c
		// 0x6458c
		return result;
	}
	// 0x64554
	if (__asm_rlwinm_(v1, 0, 19, 19) != 0) {
		int32_t v4 = a1 % 64; // 0x6455c
		g38 = v4;
		result = function_642e0(v4);
		// branch -> 0x6458c
		// 0x6458c
		return result;
	}
	// 0x64568
	if (__asm_rlwinm_(v1, 0, 18, 18) != 0) {
		int32_t v5 = a1 % 64; // 0x64570
		g38 = v5;
		result = function_64370(v5);
		// branch -> 0x6458c
		// 0x6458c
		return result;
	}
	// 0x6457c
	if (__asm_rlwinm_(v1, 0, 17, 17) == 0) {
		// 0x6457c
		result = g34;
		// branch -> 0x6458c
	} else {
		int32_t v6 = a1 % 64; // 0x64584
		g38 = v6;
		result = function_64468(v6);
		// branch -> 0x6458c
	}
	// 0x6458c
	return result;
}

// Address range: 0x6459c - 0x646a0
int32_t function_6459c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x71bc); // r31
	int32_t v2 = *(int32_t *)(g23 - 0x71a4); // 0x645ac
	int32_t v3 = 0;                          // r29
	int32_t v4 = 0;                          // 0x645d82
	// branch -> 0x645c0
	while (true) {
		int32_t v5 = v4; // 0x645d8
		if (*(int32_t *)(v2 + 8) != -1) {
			// 0x645cc
			g34 = v2;
			*(int32_t *)(v2 + 356) = function_62de8();
			v5 = v3;
			// branch -> 0x645d8
		}
		int32_t v6 = v5 + 1; // 0x645d8
		v3 = v6;
		int32_t v7 = v2 + 368; // 0x645dc
		if (v6 >= 20) {
			// break -> 0x645e8
			break;
		}
		v4 = v6;
		v2 = v7;
		// continue -> 0x645c0
	}
	// 0x645e8
	v3 = 0;
	int32_t v8 = *(int32_t *)(g23 - 0x71a8); // 0x645ec
	v2 = v8;
	int32_t v9 = 0; // 0x646086
	// branch -> 0x645f0
	while (true) {
		int32_t v10 = v8; // 0x6460c
		int32_t v11 = v9; // 0x64608
		if (*(int32_t *)(v8 + 8) != -1) {
			// 0x645fc
			g34 = v8;
			*(int32_t *)(v2 + 356) = function_62de8();
			v10 = v2;
			v11 = v3;
			// branch -> 0x64608
		}
		int32_t v12 = v11 + 1; // 0x64608
		v3 = v12;
		int32_t v13 = v10 + 368; // 0x6460c
		v2 = v13;
		if (v12 >= 6) {
			// break -> 0x64618
			break;
		}
		v9 = v12;
		v8 = v13;
		// continue -> 0x645f0
	}
	// 0x64618
	v3 = 0;
	int32_t v14 = *(int32_t *)(g23 - 0x7178); // 0x6461c
	v2 = v14;
	int32_t v15 = 0; // 0x6463810
	// branch -> 0x64620
	while (true) {
		int32_t v16 = v14; // 0x6463c
		int32_t v17 = v15; // 0x64638
		if (*(int32_t *)(v14 + 8) != -1) {
			// 0x6462c
			g34 = v14;
			*(int32_t *)(v2 + 356) = function_62de8();
			v16 = v2;
			v17 = v3;
			// branch -> 0x64638
		}
		int32_t v18 = v17 + 1; // 0x64638
		v3 = v18;
		int32_t v19 = v16 + 368; // 0x6463c
		v2 = v19;
		if (v18 >= 20) {
			// break -> 0x64648
			break;
		}
		v15 = v18;
		v14 = v19;
		// continue -> 0x64620
	}
	// 0x64648
	v3 = 0;
	int32_t v20 = *(int32_t *)(g23 - 0x71c0); // 0x6464c
	v2 = v20;
	int32_t v21 = 0; // 0x6466814
	// branch -> 0x64650
	while (true) {
		int32_t v22 = v20; // 0x6466c
		int32_t v23 = v21; // 0x64668
		if (*(int32_t *)(v20 + 8) != -1) {
			// 0x6465c
			g34 = v20;
			*(int32_t *)(v2 + 356) = function_62de8();
			v22 = v2;
			v23 = v3;
			// branch -> 0x64668
		}
		int32_t v24 = v23 + 1; // 0x64668
		v3 = v24;
		int32_t v25 = v22 + 368; // 0x6466c
		v2 = v25;
		if (v24 >= 20) {
			// break -> 0x64678
			break;
		}
		v21 = v24;
		v20 = v25;
		// continue -> 0x64650
	}
	// 0x64678
	g34 = v1;
	int32_t result = function_62de8(); // 0x6467c
	*(int32_t *)(v1 + 356) = result;
	return result;
}

// Address range: 0x646a0 - 0x646e0
int32_t function_646a0(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x71e4);                      // 0x646a0
	int32_t v2 = 4 * *(int32_t *)v1 + *(int32_t *)(g23 - 0x71e0); // 0x646bc
	int32_t result = *(int32_t *)(v2 - 4);                        // 0x646c0
	int32_t v3 = 368 * result + *(int32_t *)(g23 - 0x7690);       // 0x646c8
	*(int32_t *)(v3 + 32) = *(int32_t *)(v3 + 28);
	*(int32_t *)(v3 + 20) = 0;
	*(char *)(v3 + 48) = (char)1;
	return result;
}

// Address range: 0x646e0 - 0x64804
int32_t function_646e0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g10; // 0x646e4
	g25 = a1;
	g35 = *(int32_t *)(g23 - 0x77e4);
	g36 = *(int32_t *)(g23 - 0x71e4);
	int32_t result = function_5f7d0(0, 24); // 0x6471c
	g32 = result;
	if (*(int32_t *)g36 > 126) {
		// 0x647f0
		g10 = v1;
		return result;
	}
	// 0x64730
	function_5d8e8(g25, a2, 0x1000000 * *(int32_t *)*(int32_t *)(g23 - 0x71f4) / 0x1000000);
	int32_t v2 = *(int32_t *)g36; // 0x64744
	int32_t v3 = g27;             // 0x64760
	*(int32_t *)v3 = *(int32_t *)(v3 + 4 * (126 - v2));
	*(int32_t *)(4 * v2 + *(int32_t *)(g23 - 0x71e0)) = g33;
	// branch -> 0x64770
	while (true) {
		int32_t v4 = GetRndSeed(); // 0x64770
		g13 = g30;
		g40 = 1;
		g41 = 1;
		g42 = 0;
		function_5fd48(g33, g32, v4, (int16_t)(2 * (int32_t) * (char *)g35));
		int32_t v5 = g26; // 0x6479c
		int32_t v6;       // 0x647b8
		if (*(int32_t *)(v5 + 220) == 24) {
			// 0x647a8
			if (g28 == *(int32_t *)(v5 + 224)) {
				// 0x647b4
				v6 = 1;
				// branch -> 0x647b8
			lab_0x647b8:
				// 0x647b8
				if (v6 != 0) {
					// break -> 0x647c0
					break;
				}
				// continue -> 0x64770
				continue;
			}
		}
		// 0x647b8
		v6 = g31;
		// branch -> 0x647b8
		goto lab_0x647b8;
	}
	// 0x647c0
	if (g29 != 0) {
		// 0x647c8
		function_8bd30(0, g33);
		// branch -> 0x647d4
	}
	// 0x647d4
	if (g30 != 0) {
		// 0x647dc
		function_8aa08(g33);
		// branch -> 0x647e4
	}
	int32_t *v7 = (int32_t *)g36; // 0x647e4
	int32_t result2 = *v7;        // 0x647e4
	*v7 = result2 + 1;
	// branch -> 0x647f0
	// 0x647f0
	g10 = v1;
	return result2;
}

// Address range: 0x64804 - 0x64924
int32_t function_64804(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = g10;                        // 0x64808
	int32_t v2 = *(int32_t *)(g23 - 0x71e4); // 0x6480c
	g36 = v2;
	g35 = *(int32_t *)(g23 - 0x77e4);
	g32 = 0;
	if (*(int32_t *)v2 > 126) {
		// 0x64910
		g10 = v1;
		return g34;
	}
	int32_t v3 = 0x1000000 * *(int32_t *)*(int32_t *)(g23 - 0x71f4) / 0x1000000; // 0x64844
	function_5d8e8(v3, g37, v3);
	int32_t v4 = *(int32_t *)g36; // 0x6484c
	int32_t v5 = g27;             // 0x64864
	*(int32_t *)v5 = *(int32_t *)(v5 + 4 * (126 - v4));
	*(int32_t *)(4 * v4 + *(int32_t *)(g23 - 0x71e0)) = g33;
	g26 = function_5f7d0(g28, 0);
	// branch -> 0x64888
	while (true) {
		int32_t v6 = GetRndSeed(); // 0x64888
		g13 = g31;
		g40 = 1;
		g41 = 1;
		g42 = 0;
		function_5fd48(g33, g26, v6, (int16_t)(2 * (int32_t) * (char *)g35));
		int32_t v7; // 0x648d8
		if (g29 == *(int32_t *)(g27 + 192)) {
			// 0x648c0
			g32 = 1;
			v7 = 1;
			// branch -> 0x648d8
		} else {
			// 0x648c8
			g26 = function_5f7d0(g28, 0);
			v7 = g32;
			// branch -> 0x648d8
		}
		// 0x648d8
		if (v7 != 0) {
			// break -> 0x648e0
			break;
		}
		// continue -> 0x64888
	}
	// 0x648e0
	if (g30 != 0) {
		// 0x648e8
		function_8bd30(0, g33);
		// branch -> 0x648f4
	}
	// 0x648f4
	if (g31 != 0) {
		// 0x648fc
		function_8aa08(g33);
		// branch -> 0x64904
	}
	int32_t *v8 = (int32_t *)g36; // 0x64904
	int32_t v9 = *v8;             // 0x64904
	g34 = v9;
	*v8 = v9 + 1;
	// branch -> 0x64910
	// 0x64910
	g10 = v1;
	return g34;
}

// Address range: 0x64924 - 0x64a44
int32_t function_64924(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = g10;                        // 0x64928
	int32_t v2 = *(int32_t *)(g23 - 0x71e4); // 0x6492c
	g36 = v2;
	g35 = *(int32_t *)(g23 - 0x77e4);
	g32 = 0;
	if (*(int32_t *)v2 > 126) {
		// 0x64a30
		g10 = v1;
		return g34;
	}
	int32_t v3 = 0x1000000 * *(int32_t *)*(int32_t *)(g23 - 0x71f4) / 0x1000000; // 0x64964
	function_5d8e8(v3, g37, v3);
	int32_t v4 = *(int32_t *)g36; // 0x6496c
	int32_t v5 = g27;             // 0x64984
	*(int32_t *)v5 = *(int32_t *)(v5 + 4 * (126 - v4));
	*(int32_t *)(4 * v4 + *(int32_t *)(g23 - 0x71e0)) = g33;
	g26 = function_5f7d0(g28, 0);
	// branch -> 0x649a8
	while (true) {
		int32_t v6 = GetRndSeed(); // 0x649a8
		g13 = g31;
		g40 = 1;
		g41 = 1;
		g42 = 0;
		function_5fd48(g33, g26, v6, (int16_t)(2 * (int32_t) * (char *)g35));
		int32_t v7; // 0x649f8
		if (g29 == *(int32_t *)(g27 + 192)) {
			// 0x649e0
			g32 = 1;
			v7 = 1;
			// branch -> 0x649f8
		} else {
			// 0x649e8
			g26 = function_5f7d0(g28, 0);
			v7 = g32;
			// branch -> 0x649f8
		}
		// 0x649f8
		if (v7 != 0) {
			// break -> 0x64a00
			break;
		}
		// continue -> 0x649a8
	}
	// 0x64a00
	if (g30 != 0) {
		// 0x64a08
		function_8bd30(0, g33);
		// branch -> 0x64a14
	}
	// 0x64a14
	if (g31 != 0) {
		// 0x64a1c
		function_8aa08(g33);
		// branch -> 0x64a24
	}
	int32_t *v8 = (int32_t *)g36; // 0x64a24
	int32_t v9 = *v8;             // 0x64a24
	g34 = v9;
	*v8 = v9 + 1;
	// branch -> 0x64a30
	// 0x64a30
	g10 = v1;
	return g34;
}

// Address range: 0x64a44 - 0x64a9c
int32_t NextItemRecord(int32_t result)
{
	int32_t v1 = *(int32_t *)(g23 - 0x71c4); // 0x64a44
	int32_t v2 = *(int32_t *)(g23 - 0x71c8); // r6
	int32_t *v3 = (int32_t *)v1;             // 0x64a4c
	*v3 = *v3 - 1;
	int32_t v4 = *(int32_t *)v1; // 0x64a58
	if (v4 == 0) {
		// bb
		return result;
	}
	int32_t v5 = v2 + 8;      // 0x64a64
	int32_t v6 = v2 + 4;      // r7
	int32_t v7 = 16 * v4;     // 0x64a6c
	int32_t v8 = v2 + 12;     // r8
	int32_t v9 = 16 * result; // 0x64a78
	result = v9;
	*(int32_t *)(v9 + v5) = *(int32_t *)(v5 + v7);
	int32_t v10 = *(int32_t *)(v7 + v2); // 0x64a80
	*(int32_t *)(result + v2) = v10;
	int16_t v11 = *(int16_t *)(v7 + v6); // 0x64a88
	*(int16_t *)(result + v6) = v11;
	int32_t v12 = *(int32_t *)(v7 + v8); // 0x64a90
	*(int32_t *)(result + v8) = v12;
	return result;
}

// Address range: 0x64a9c - 0x64b54
int32_t function_64a9c(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x64a9c
	g34 = a1;
	int32_t v1 = g10; // 0x64aa0
	g32 = *(int32_t *)(g23 - 0x71c8);
	g33 = *(int32_t *)(g23 - 0x71c4);
	int32_t v2 = GetTickCount(); // 0x64ac0
	g35 = v2;
	g36 = a2 % 0x10000;
	int32_t v3 = 0; // r27
	if (*(int32_t *)g33 > 0) {
		int32_t v4 = g33; // 0x64b3012
		int32_t v5 = 0;   // 0x64af0
		while (true) {
			int32_t v6 = g32 + 16 * v5; // 0x64adc
			int32_t v7;                 // 0x64b2c
			int32_t v8;                 // 0x64b30
			if (v2 - *(int32_t *)(v6 + 12) < 0x1771) {
				// 0x64b00
				if (g34 == *(int32_t *)v6) {
					// 0x64b0c
					if (g36 == (int32_t) * (int16_t *)(v6 + 4)) {
						// 0x64b18
						if (a3 == *(int32_t *)(v6 + 8)) {
							// 0x64b40
							g10 = v1;
							return 0;
						}
						v8 = v4;
						v7 = v5;
					} else {
						v8 = v4;
						v7 = v5;
					}
				} else {
					v8 = v4;
					v7 = v5;
				}
			} else {
				// 0x64af0
				NextItemRecord(v5);
				v8 = g33;
				v7 = v3 - 1;
				// branch -> 0x64b2c
			}
			int32_t v9 = v7 + 1; // 0x64b2c
			v3 = v9;
			if (v9 < *(int32_t *)v8) {
				// 0x64b2c
				v4 = v8;
				v2 = g35;
				v5 = v9;
				// branch -> 0x64ad8
				continue;
			}
		}
	}
	// 0x64b40
	g10 = v1;
	return 1;
}

// Address range: 0x64b54 - 0x64bc4
int32_t function_64b54(int32_t a1, int16_t a2, int32_t a3)
{
	// 0x64b54
	g34 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x71c8); // r30
	int32_t v2 = *(int32_t *)(g23 - 0x71c4); // r31
	int32_t v3 = GetTickCount();             // 0x64b78
	int32_t v4 = *(int32_t *)v2;             // 0x64b80
	int32_t result;                          // 0x64ba4
	if (v4 != 127) {
		int32_t v5 = 16 * v4; // 0x64b8c
		int32_t v6 = v1 + v5; // 0x64b90
		*(int32_t *)(v6 + 12) = v3;
		*(int32_t *)(v5 + v1) = g34;
		*(int16_t *)(v6 + 4) = (int16_t)(int32_t)a2;
		*(int32_t *)(v6 + 8) = a3;
		int32_t *v7 = (int32_t *)v2; // 0x64ba4
		result = *v7;
		*v7 = result + 1;
		// branch -> 0x64bb0
	} else {
		result = v3;
	}
	// 0x64bb0
	return result;
}

// Address range: 0x64bc4 - 0x64c7c
int32_t PutItemRecord(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x64bc4
	g34 = a1;
	int32_t v1 = g10; // 0x64bc8
	g33 = *(int32_t *)(g23 - 0x71c4);
	g30 = a3;
	int32_t result = GetTickCount(); // 0x64be8
	g35 = result;
	g36 = a2 % 0x10000;
	g31 = 0;
	if (*(int32_t *)g33 > 0) {
		int32_t v2 = g33; // 0x64c5c10
		int32_t v3 = 0;   // 0x64c4c
		while (true) {
			int32_t v4 = *(int32_t *)(g23 - 0x71c8) + 16 * v3; // 0x64c04
			int32_t v5;                                        // 0x64c58
			int32_t v6;                                        // 0x64c5c
			int32_t v7;                                        // 0x64c7814
			if (result - *(int32_t *)(v4 + 12) < 0x1771) {
				// 0x64c28
				if (g34 == *(int32_t *)v4) {
					// 0x64c34
					if (g36 == (int32_t) * (int16_t *)(v4 + 4)) {
						// 0x64c40
						if (g30 == *(int32_t *)(v4 + 8)) {
							// 0x64c4c
							result = NextItemRecord(v3);
							// branch -> 0x64c68
							// 0x64c68
							g10 = v1;
							return result;
						}
						v7 = v4;
						v6 = v2;
						v5 = v3;
					} else {
						v7 = v4;
						v6 = v2;
						v5 = v3;
					}
				} else {
					v7 = v4;
					v6 = v2;
					v5 = v3;
				}
			} else {
				// 0x64c18
				v7 = NextItemRecord(v3);
				v6 = g33;
				v5 = g31 - 1;
				// branch -> 0x64c58
			}
			int32_t v8 = v5 + 1; // 0x64c58
			g31 = v8;
			if (v8 < *(int32_t *)v6) {
				// 0x64c58
				v2 = v6;
				result = g35;
				v3 = v8;
				// branch -> 0x64c00
				continue;
			} else {
				result = v7;
			}
		}
	}
	// 0x64c68
	g10 = v1;
	return result;
}
