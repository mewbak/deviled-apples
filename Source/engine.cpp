// Address range: 0x4d850 - 0x4d9a8
int32_t CelDrawDatOnly(int16_t *a1, int32_t a2, int32_t a3, int32_t a4)
{
	g37 = a2;
	int32_t result = (int32_t)a1;
	if (a1 == NULL) {
		// 0x4d860
		return 0;
	}
	int32_t v1 = g37; // 0x4d858
	if (v1 == 0) {
		// 0x4d860
		return result;
	}
	int16_t *v2 = (int16_t *)v1;
	// branch -> 0x4d878
	while (true) {
		int32_t v3 = a4; // 0x4d8b4
		int16_t *v4 = v2;
		int32_t v5 = result; // 0x4d8dc
		// branch -> 0x4d87c
		int16_t *v6;
		int32_t v7;
		int32_t v8;
		while (true) {
			int32_t v9 = (int32_t)v4; // 0x4d87c
			int32_t v10 = v9 + 1;     // 0x4d880
			char v11 = *(char *)v4;   // 0x4d888
			int32_t v12 = v11;        // 0x4d88c
			int32_t v13;              // 0x4d984
			if (v11 > -1) {
				int32_t v14 = v5; // r5
				g37 = v10;
				int32_t v15 = v3 - v12;  // r9
				int32_t v16 = v12 + v5;  // 0x4d8b8
				int32_t v17 = v12 + v10; // 0x4d8bc
				int32_t v18 = v12;       // r3
				int32_t v19 = v12;       // 0x4d8e4
				if (v12 % 2 != 0) {
					// 0x4d8d0
					g37 = v9 + 2;
					v18 = v12 - 1;
					*(char *)v5 = *(char *)v10;
					v14++;
					v19 = v18;
					// branch -> 0x4d8e4
				}
				// 0x4d8e4
				if (__asm_rlwinm_(v19, 0, 30, 30) != 0) {
					int32_t v20 = g37; // 0x4d8ec
					g37 = v20 + 2;
					v18 -= 2;
					*(int16_t *)v14 = *(int16_t *)v20;
					v14 += 2;
					// branch -> 0x4d900
				}
				uint32_t v21 = v18;    // 0x4d900
				int32_t v22 = v21 / 4; // 0x4d904
				v18 = v22;
				if (v21 >= 4) {
					int32_t v23 = __asm_rlwinm_(v22, 29, 3, 31); // 0x4d90c
					int32_t v24 = v23;                           // ctr
					int32_t v25;                                 // 0x4d96c
					int32_t v26;
					if (v23 == 0) {
						// 0x4d90c
						v26 = v14;
						v25 = v18;
						// branch -> 0x4d96c
					lab_0x4d96c:;
						int32_t v27 = g37; // 0x4d970
						g37 = v27 + 4;
						*(int32_t *)v26 = *(int32_t *)v27;
						int32_t v28 = v14 + 4; // 0x4d97c
						int32_t v29 = v25 - 1; // 0x4d980
						// branch -> 0x4d970
						while (v29 != 0) {
							// 0x4d970
							v27 = g37;
							g37 = v27 + 4;
							*(int32_t *)v28 = *(int32_t *)v27;
							v28 += 4;
							v29--;
							// continue -> 0x4d970
						}
					lab_0x4d984:
						// 0x4d984
						v13 = v15;
						v7 = v17;
						v8 = v16;
						// branch -> 0x4d984
					lab_0x4d984_4:
						// 0x4d984
						v6 = (int16_t *)v7;
						if (v13 == 0) {
							// break -> 0x4d98c
							break;
						}
						v3 = v13;
						v4 = v6;
						v5 = v8;
						// continue -> 0x4d87c
						continue;
					} else {
						// 0x4d918
						*(int32_t *)v14 = *(int32_t *)g37;
						*(int32_t *)(v14 + 4) = *(int32_t *)(g37 + 4);
						*(int32_t *)(v14 + 8) = *(int32_t *)(g37 + 8);
						*(int32_t *)(v14 + 12) = *(int32_t *)(g37 + 12);
						*(int32_t *)(v14 + 16) = *(int32_t *)(g37 + 16);
						*(int32_t *)(v14 + 20) = *(int32_t *)(g37 + 20);
						*(int32_t *)(v14 + 24) = *(int32_t *)(g37 + 24);
						int32_t v30 = g37; // 0x4d950
						g37 = v30 + 32;
						*(int32_t *)(v14 + 28) = *(int32_t *)(v30 + 28);
						int32_t v31 = v14 + 32; // 0x4d95c
						v14 = v31;
						int32_t v32 = v24 - 1; // 0x4d960
						// branch -> 0x4d918
						while (v32 != 0) {
							// 0x4d918
							*(int32_t *)v31 = *(int32_t *)g37;
							*(int32_t *)(v14 + 4) = *(int32_t *)(g37 + 4);
							*(int32_t *)(v14 + 8) = *(int32_t *)(g37 + 8);
							*(int32_t *)(v14 + 12) = *(int32_t *)(g37 + 12);
							*(int32_t *)(v14 + 16) = *(int32_t *)(g37 + 16);
							*(int32_t *)(v14 + 20) = *(int32_t *)(g37 + 20);
							*(int32_t *)(v14 + 24) = *(int32_t *)(g37 + 24);
							v30 = g37;
							g37 = v30 + 32;
							*(int32_t *)(v14 + 28) = *(int32_t *)(v30 + 28);
							v31 = v14 + 32;
							v14 = v31;
							v32--;
							// continue -> 0x4d918
						}
						int32_t v33 = v18 % 8; // 0x4d964
						if (v33 == 0) {
							goto lab_0x4d984;
						}
						v26 = v31;
						v25 = v33;
						goto lab_0x4d96c;
					}
				}
				// 0x4d984
				v13 = v15;
				v7 = v17;
				v8 = v16;
				// branch -> 0x4d984
				goto lab_0x4d984_4;
			} else {
				// 0x4d894
				v13 = v12 + v3;
				v7 = v10;
				v8 = v5 - v12;
				// branch -> 0x4d984
				goto lab_0x4d984_4;
			}
		}
		int32_t result2 = v8 - (a4 + 768); // 0x4d994
		if (a3 + v1 == v7) {
			// 0x4d860
			return result2;
		}
		// 0x4d98c
		v2 = v6;
		result = result2;
		// branch -> 0x4d878
	}
}

// Address range: 0x4d9a8 - 0x4da44
int32_t CelDecodeOnly(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	// 0x4d9a8
	g37 = a2;
	int32_t v1 = g10; // 0x4d9ac
	g32 = a3;
	g30 = a1;
	g36 = *(int32_t *)(g23 - 0x7804);
	g31 = g37;
	g33 = a4;
	g35 = a5;
	g34 = a3;
	int32_t v2 = function_c9948(); // 0x4d9d4
	int32_t result;                // 0x4da2c
	if (v2 == 0) {
		// 0x4da28
		result = function_c9acc(g32);
		g10 = v1;
		return result;
	}
	// 0x4d9e0
	if (*(int32_t *)g36 != 0) {
		// 0x4d9f4
		int32_t v3;                                                      // bp-40
		int32_t v4 = function_4d7c4(v2, g33, &v3);                       // 0x4d9fc
		int32_t v5 = *(int32_t *)(4 * g31 + *(int32_t *)(g23 - 0x7698)); // 0x4da0c
		CelDrawDatOnly((int16_t *)(v5 + *(int32_t *)g36 + g30), v4, v3, g35);
		// branch -> 0x4da28
	}
	// 0x4da28
	result = function_c9acc(g32);
	g10 = v1;
	return result;
}

// Address range: 0x4da44 - 0x4dad4
int32_t CelDecDatOnly(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g36; // 0x4da44
	int32_t v2 = g10; // 0x4da48
	g36 = a4;
	g35 = a3;
	g33 = a2;
	g32 = a1;
	g34 = a2;
	int32_t v3 = function_c9948(); // 0x4da74
	int32_t result;                // 0x4dab0
	if (v3 == 0) {
		// 0x4daac
		result = function_c9acc(g33);
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x4da84
	if (g32 != 0) {
		// 0x4da8c
		int32_t v4;                                // bp-24
		int32_t v5 = function_4d7c4(v3, g35, &v4); // 0x4da94
		CelDrawDatOnly((int16_t *)g32, v5, v4, g36);
		// branch -> 0x4daac
	}
	// 0x4daac
	result = function_c9acc(g33);
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0x4dad4 - 0x4db04
int32_t CelDrawHdrOnly(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = &a1; // 0x4dae8
	g38 = v1;
	int32_t result = CelDrawHdrOnly_part(v1); // 0x4daf0
	return result;
}

// Address range: 0x4db04 - 0x4dbc0
int32_t CelDrawHdrOnly_part(int32_t a1)
{
	int32_t v1 = g10; // 0x4db08
	int32_t v2 = g38; // 0x4db0c
	g36 = v2;
	g35 = a1;
	g33 = *(int32_t *)(g23 - 0x7804);
	g28 = g37;
	g29 = g39;
	g30 = g40;
	g31 = g41;
	g32 = g42;
	g34 = v2;
	int32_t v3 = function_c9b28(); // 0x4db38
	int32_t result;                // 0x4dba8
	if (v3 == 0 || *(int32_t *)g33 == 0) {
		// 0x4dba4
		result = function_c9b70((int32_t *)g36);
		g10 = v1;
		return result;
	}
	int32_t v4 = 0;                                      // bp-40
	int32_t v5 = function_4d7e8(v3, g29, g31, g32, &v4); // 0x4db68
	if (v5 != 0) {
		int32_t v6 = *(int32_t *)(4 * (g28 + -16 * g31) + *(int32_t *)(g23 - 0x7698)); // 0x4db8c
		CelDrawDatOnly((int16_t *)(v6 + *(int32_t *)g33 + g35), v5, v4, g30);
		// branch -> 0x4dba4
	}
	// 0x4dba4
	result = function_c9b70((int32_t *)g36);
	g10 = v1;
	return result;
}

// Address range: 0x4dbc0 - 0x4dc4c
int32_t CelDecodeHdrOnly(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = g10; // 0x4dbc4
	g31 = a2;
	g30 = a1;
	g32 = a3;
	g33 = a4;
	g35 = a5;
	g36 = a6;
	g34 = a2;
	int32_t v2 = function_c9948(); // 0x4dbec
	int32_t result;                // 0x4dc34
	if (v2 == 0 || g30 == 0) {
		// 0x4dc30
		result = function_c9acc(g31);
		g10 = v1;
		return result;
	}
	// 0x4dc04
	int32_t v3;                                          // bp-40
	int32_t v4 = function_4d7e8(v2, g32, g35, g36, &v3); // 0x4dc14
	if (v4 != 0) {
		// 0x4dc20
		CelDrawDatOnly((int16_t *)g30, v4, v3, g33);
		// branch -> 0x4dc30
	}
	// 0x4dc30
	result = function_c9acc(g31);
	g10 = v1;
	return result;
}

// Address range: 0x4dc4c - 0x4dd18
int32_t CelDecDatLightOnly(int32_t result, char *a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0x4dc50
	g36 = a4;
	if (result == 0) {
		// 0x4dd04
		g10 = v1;
		return 0;
	}
	int32_t v2 = (int32_t)a2; // 0x4dc68
	if (v2 == 0) {
		// 0x4dd04
		g10 = v1;
		return result;
	}
	// 0x4dc74
	g35 = a4 + 768;
	int32_t v3 = *(int32_t *)(g23 - 0x7290); // 0x4dc7c
	char *v4 = (char *)v2;                   // 0x4dc88
	g33 = 256 * *(int32_t *)v3 + *(int32_t *)*(int32_t *)(g23 - 0x7770);
	g32 = a3 + v2;
	int32_t v5 = (int32_t)&v4; // 0x4dcd8
	// branch -> 0x4dca0
	while (true) {
		int32_t v6 = a4; // 0x4dcdc
		char *v7 = v4;   // 0x4dca4
		// branch -> 0x4dca4
		while (true) {
			// 0x4dca4
			v4 = (char *)((int32_t)v7 + 1);
			char v8 = *v7;   // 0x4dcb0
			int32_t v9 = v8; // 0x4dcb4
			g39 = v9;
			int32_t v10; // 0x4dce4
			if (v8 > -1) {
				// 0x4dcd0
				g31 = v6 - v9;
				function_da338((char *)&result, v5, g33);
				v10 = g31;
				// branch -> 0x4dce4
			} else {
				int32_t v11 = v9 + v6; // 0x4dcc0
				g31 = v11;
				result -= v9;
				v10 = v11;
				// branch -> 0x4dce4
			}
			// 0x4dce4
			if (v10 == 0) {
				char *v12 = v4;                 // 0x4dcf0
				int32_t result2 = result - g35; // 0x4dcf4
				result = result2;
				if (g32 == (int32_t)v12) {
					// 0x4dd04
					g10 = v1;
					return result2;
				}
				// 0x4dcec
				v4 = v12;
				a4 = g36;
				// branch -> 0x4dca0
				break;
			} else {
				// 0x4dce4
				v6 = v10;
				v7 = v4;
				// branch -> 0x4dca4
				continue;
			}
		}
	}
}

// Address range: 0x4dd18 - 0x4df34
int32_t CelDecDatLightTrans(char *a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = (int32_t)a1; // r3
	int32_t result = v1;      // 0x4dd18
	if (result == 0) {
		// 0x4df2c
		return 0;
	}
	if (a2 == 0) {
		// 0x4df2c
		return result;
	}
	int32_t v2 = *(int32_t *)(g23 - 0x7290);            // 0x4dd30
	int32_t v3 = *(int32_t *)(g23 - 0x7770);            // 0x4dd38
	int32_t v4 = *(int32_t *)v3 + 256 * *(int32_t *)v2; // r9
	int32_t v5 = result % 2;                            // r7
	int32_t v6 = a2;                                    // 0x4dd582
	// branch -> 0x4dd54
	while (true) {
		int32_t v7 = a4;     // 0x4dd7c
		int32_t v8 = result; // 0x4dd74
		int32_t v9 = v6;     // 0x4dd58
		// branch -> 0x4dd58
		while (true) {
			char v10 = *(char *)v9;      // 0x4dd58
			int32_t v11 = v9 + 1;        // r4
			uint32_t v12 = (int32_t)v10; // 0x4dd60
			int32_t v13;                 // 0x4df10
			int32_t v14;                 // 0x4df20
			if (v10 > -1) {
				int32_t v15 = v12 % 2;                     // r31
				int32_t v16 = v12 / 2 | v12 & -0x80000000; // 0x4dd84
				int32_t v17 = v16;                         // r5
				int32_t v18;                               // ctr
				int32_t v19;                               // 0x4dd687
				if (v8 % 2 == v5) {
					int32_t v20 = v8; // 0x4de44
					if (v16 != 0) {
						int32_t v21 = __asm_rlwinm_(v16, 29, 3, 31); // 0x4dd9c
						v18 = v21;
						int32_t v22; // 0x4de1c
						int32_t v23;
						if (v21 == 0) {
							// 0x4dd9c
							v23 = v1;
							v22 = v17;
							// branch -> 0x4de1c
						lab_0x4de1c:;
							int32_t v24 = v11;                      // 0x4de20
							unsigned char v25 = *(char *)(v24 + 1); // 0x4de20
							v11 = v24 + 2;
							char v26 = *(char *)(v4 + (int32_t)v25); // 0x4de28
							*(char *)(v23 + 1) = v26;
							int32_t v27 = v1 + 2; // 0x4de30
							v1 = v27;
							int32_t v28 = v22 - 1; // 0x4de34
							v20 = v27;
							// branch -> 0x4de20
							while (v28 != 0) {
								// 0x4de20
								v24 = v11;
								v25 = *(char *)(v24 + 1);
								v11 = v24 + 2;
								v26 = *(char *)(v4 + (int32_t)v25);
								*(char *)(v27 + 1) = v26;
								v27 = v1 + 2;
								v1 = v27;
								v28--;
								v20 = v27;
								// continue -> 0x4de20
							}
						lab_0x4de38:
							// 0x4de38
							v19 = v20;
							if (v15 != 0) {
							lab_0x4de40_2:
								// 0x4de40
								v11++;
								int32_t v29 = v20 + 1; // 0x4de44
								v1 = v29;
								v19 = v29;
								// branch -> 0x4df10
							}
						lab_0x4df10_6:
							// 0x4df10
							v14 = v19;
							v13 = v7 - v12;
							// branch -> 0x4df10
						lab_0x4df10_8:
							// 0x4df10
							if (v13 == 0) {
							lab_0x4df18:;
								int32_t v30 = v11;                  // 0x4df18
								int32_t result2 = v14 - (a4 + 768); // 0x4df20
								v1 = result2;
								v5 = (v5 + 1) % 2;
								if (a3 + a2 == v30) {
									// 0x4df2c
									return result2;
								}
								// 0x4df18
								result = result2;
								v6 = v30;
								// branch -> 0x4dd54
								break;
							} else {
							lab_0x4df10_9:
								// 0x4df10
								v7 = v13;
								v8 = v14;
								v9 = v11;
								// branch -> 0x4dd58
								continue;
							}
						} else {
							unsigned char v31 = *(char *)(v11 + 1);  // 0x4dda8
							char v32 = *(char *)(v4 + (int32_t)v31); // 0x4ddac
							*(char *)(v1 + 1) = v32;
							unsigned char v33 = *(char *)(v11 + 3);  // 0x4ddb4
							char v34 = *(char *)(v4 + (int32_t)v33); // 0x4ddb8
							*(char *)(v1 + 3) = v34;
							unsigned char v35 = *(char *)(v11 + 5);  // 0x4ddc0
							char v36 = *(char *)(v4 + (int32_t)v35); // 0x4ddc4
							*(char *)(v1 + 5) = v36;
							unsigned char v37 = *(char *)(v11 + 7);  // 0x4ddcc
							char v38 = *(char *)(v4 + (int32_t)v37); // 0x4ddd0
							*(char *)(v1 + 7) = v38;
							unsigned char v39 = *(char *)(v11 + 9);  // 0x4ddd8
							char v40 = *(char *)(v4 + (int32_t)v39); // 0x4dddc
							*(char *)(v1 + 9) = v40;
							unsigned char v41 = *(char *)(v11 + 11); // 0x4dde4
							char v42 = *(char *)(v4 + (int32_t)v41); // 0x4dde8
							*(char *)(v1 + 11) = v42;
							unsigned char v43 = *(char *)(v11 + 13); // 0x4ddf0
							char v44 = *(char *)(v4 + (int32_t)v43); // 0x4ddf4
							*(char *)(v1 + 13) = v44;
							int32_t v45 = v11;                       // 0x4ddfc
							unsigned char v46 = *(char *)(v45 + 15); // 0x4ddfc
							v11 = v45 + 16;
							char v47 = *(char *)(v4 + (int32_t)v46); // 0x4de04
							*(char *)(v1 + 15) = v47;
							int32_t v48 = v1 + 16; // 0x4de0c
							v1 = v48;
							int32_t v49 = v18 - 1; // 0x4de10
							// branch -> 0x4dda8
							while (v49 != 0) {
								// 0x4dda8
								v31 = *(char *)(v11 + 1);
								v32 = *(char *)(v4 + (int32_t)v31);
								*(char *)(v48 + 1) = v32;
								v33 = *(char *)(v11 + 3);
								v34 = *(char *)(v4 + (int32_t)v33);
								*(char *)(v1 + 3) = v34;
								v35 = *(char *)(v11 + 5);
								v36 = *(char *)(v4 + (int32_t)v35);
								*(char *)(v1 + 5) = v36;
								v37 = *(char *)(v11 + 7);
								v38 = *(char *)(v4 + (int32_t)v37);
								*(char *)(v1 + 7) = v38;
								v39 = *(char *)(v11 + 9);
								v40 = *(char *)(v4 + (int32_t)v39);
								*(char *)(v1 + 9) = v40;
								v41 = *(char *)(v11 + 11);
								v42 = *(char *)(v4 + (int32_t)v41);
								*(char *)(v1 + 11) = v42;
								v43 = *(char *)(v11 + 13);
								v44 = *(char *)(v4 + (int32_t)v43);
								*(char *)(v1 + 13) = v44;
								v45 = v11;
								v46 = *(char *)(v45 + 15);
								v11 = v45 + 16;
								v47 = *(char *)(v4 + (int32_t)v46);
								*(char *)(v1 + 15) = v47;
								v48 = v1 + 16;
								v1 = v48;
								v49--;
								// continue -> 0x4dda8
							}
							int32_t v50 = v17 % 8; // 0x4de14
							if (v50 == 0) {
								v20 = v48;
								goto lab_0x4de38;
							}
							v23 = v48;
							v22 = v50;
							goto lab_0x4de1c;
						}
					}
					// 0x4de38
					if (v15 == 0) {
						v19 = v20;
						goto lab_0x4df10_6;
					}
					goto lab_0x4de40_2;
				} else {
					int32_t v51 = v8; // 0x4df08
					if (v16 != 0) {
						int32_t v52 = __asm_rlwinm_(v16, 29, 3, 31); // 0x4de58
						v18 = v52;
						int32_t v53; // 0x4ded8
						int32_t v54;
						if (v52 == 0) {
							// 0x4de58
							v54 = v1;
							v53 = v17;
							// branch -> 0x4ded8
						lab_0x4ded8:;
							int32_t v55 = v11; // 0x4dedc
							v11 = v55 + 2;
							char v56 = *(char *)(v4 + (int32_t) * (char *)v55); // 0x4dee4
							*(char *)v54 = v56;
							int32_t v57 = v1 + 2; // 0x4deec
							v1 = v57;
							int32_t v58 = v53 - 1; // 0x4def0
							v51 = v57;
							// branch -> 0x4dedc
							while (v58 != 0) {
								// 0x4dedc
								v55 = v11;
								v11 = v55 + 2;
								v56 = *(char *)(v4 + (int32_t) * (char *)v55);
								*(char *)v57 = v56;
								v57 = v1 + 2;
								v1 = v57;
								v58--;
								v51 = v57;
								// continue -> 0x4dedc
							}
						lab_0x4def4:
							// 0x4def4
							if (v15 == 0) {
								v19 = v51;
								goto lab_0x4df10_6;
							}
						lab_0x4defc_2:;
							int32_t v59 = v11; // 0x4defc
							v11 = v59 + 1;
							char v60 = *(char *)(v4 + (int32_t) * (char *)v59); // 0x4df04
							*(char *)v51 = v60;
							int32_t v61 = v1 + 1; // 0x4df0c
							v1 = v61;
							v19 = v61;
							// branch -> 0x4df10
							goto lab_0x4df10_6;
						} else {
							unsigned char v62 = *(char *)v11; // 0x4de64
							*(char *)v1 = *(char *)(v4 + (int32_t)v62);
							unsigned char v63 = *(char *)(v11 + 2);  // 0x4de70
							char v64 = *(char *)(v4 + (int32_t)v63); // 0x4de74
							*(char *)(v1 + 2) = v64;
							unsigned char v65 = *(char *)(v11 + 4);  // 0x4de7c
							char v66 = *(char *)(v4 + (int32_t)v65); // 0x4de80
							*(char *)(v1 + 4) = v66;
							unsigned char v67 = *(char *)(v11 + 6);  // 0x4de88
							char v68 = *(char *)(v4 + (int32_t)v67); // 0x4de8c
							*(char *)(v1 + 6) = v68;
							unsigned char v69 = *(char *)(v11 + 8);  // 0x4de94
							char v70 = *(char *)(v4 + (int32_t)v69); // 0x4de98
							*(char *)(v1 + 8) = v70;
							unsigned char v71 = *(char *)(v11 + 10); // 0x4dea0
							char v72 = *(char *)(v4 + (int32_t)v71); // 0x4dea4
							*(char *)(v1 + 10) = v72;
							unsigned char v73 = *(char *)(v11 + 12); // 0x4deac
							char v74 = *(char *)(v4 + (int32_t)v73); // 0x4deb0
							*(char *)(v1 + 12) = v74;
							int32_t v75 = v11;                       // 0x4deb8
							unsigned char v76 = *(char *)(v75 + 14); // 0x4deb8
							v11 = v75 + 16;
							char v77 = *(char *)(v4 + (int32_t)v76); // 0x4dec0
							*(char *)(v1 + 14) = v77;
							int32_t v78 = v1 + 16; // 0x4dec8
							v1 = v78;
							int32_t v79 = v18 - 1; // 0x4decc
							// branch -> 0x4de64
							while (v79 != 0) {
								// 0x4de64
								v62 = *(char *)v11;
								*(char *)v78 = *(char *)(v4 + (int32_t)v62);
								v63 = *(char *)(v11 + 2);
								v64 = *(char *)(v4 + (int32_t)v63);
								*(char *)(v1 + 2) = v64;
								v65 = *(char *)(v11 + 4);
								v66 = *(char *)(v4 + (int32_t)v65);
								*(char *)(v1 + 4) = v66;
								v67 = *(char *)(v11 + 6);
								v68 = *(char *)(v4 + (int32_t)v67);
								*(char *)(v1 + 6) = v68;
								v69 = *(char *)(v11 + 8);
								v70 = *(char *)(v4 + (int32_t)v69);
								*(char *)(v1 + 8) = v70;
								v71 = *(char *)(v11 + 10);
								v72 = *(char *)(v4 + (int32_t)v71);
								*(char *)(v1 + 10) = v72;
								v73 = *(char *)(v11 + 12);
								v74 = *(char *)(v4 + (int32_t)v73);
								*(char *)(v1 + 12) = v74;
								v75 = v11;
								v76 = *(char *)(v75 + 14);
								v11 = v75 + 16;
								v77 = *(char *)(v4 + (int32_t)v76);
								*(char *)(v1 + 14) = v77;
								v78 = v1 + 16;
								v1 = v78;
								v79--;
								// continue -> 0x4de64
							}
							int32_t v80 = v17 % 8; // 0x4ded0
							if (v80 == 0) {
								v51 = v78;
								goto lab_0x4def4;
							}
							v54 = v78;
							v53 = v80;
							goto lab_0x4ded8;
						}
					}
					// 0x4def4
					if (v15 == 0) {
						v19 = v51;
						goto lab_0x4df10_6;
					}
					goto lab_0x4defc_2;
				}
			} else {
				int32_t v81 = v8 - v12; // 0x4dd68
				v1 = v81;
				v14 = v81;
				v13 = v12 + v7;
				// branch -> 0x4df10
				goto lab_0x4df10_8;
			}
		}
	}
}

// Address range: 0x4df34 - 0x4dff0
int32_t CelDecodeLightOnly(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g10; // 0x4df38
	g32 = a3;
	g30 = a1;
	g36 = *(int32_t *)(g23 - 0x7804);
	g31 = a2;
	g33 = a4;
	g35 = a5;
	g34 = a3;
	int32_t v2 = function_c9948(); // 0x4df60
	int32_t result;                // 0x4dfd8
	if (v2 == 0 || *(int32_t *)g36 == 0) {
		// 0x4dfd4
		result = function_c9acc(g32);
		g10 = v1;
		return result;
	}
	// 0x4df80
	int32_t v3;                                                      // bp-40
	int32_t v4 = function_4d7c4(v2, g33, &v3);                       // 0x4df88
	int32_t v5 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 4 * g31); // 0x4dfa0
	int32_t v6 = *(int32_t *)g36 + v5 + g30;                         // 0x4dfb0
	int32_t v7 = g35;                                                // 0x4dfcc
	if (*(int32_t *)*(int32_t *)(g23 - 0x7290) == 0) {
		// 0x4dfc8
		CelDrawDatOnly((int16_t *)v6, v4, v3, v7);
		// branch -> 0x4dfd4
	} else {
		// 0x4dfb8
		CelDecDatLightOnly(v6, (char *)v4, v3, v7);
		// branch -> 0x4dfd4
	}
	// 0x4dfd4
	result = function_c9acc(g32);
	g10 = v1;
	return result;
}

// Address range: 0x4dff0 - 0x4e0c8
int32_t CelDecodeHdrLightOnly(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x4dff4
	g35 = a3;
	g33 = a1;
	g32 = *(int32_t *)(g23 - 0x7804);
	g28 = a2;
	g29 = a4;
	g36 = a5;
	g30 = a6;
	g31 = a7;
	g34 = a3;
	int32_t v2 = function_c9948(); // 0x4e024
	int32_t result;                // 0x4e0b0
	if (v2 == 0 || *(int32_t *)g32 == 0) {
		// 0x4e0ac
		result = function_c9acc(g35);
		g10 = v1;
		return result;
	}
	// 0x4e044
	int32_t v3;                                          // bp-40
	int32_t v4 = function_4d7e8(v2, g29, g30, g31, &v3); // 0x4e054
	if (v4 == 0) {
		// 0x4e0ac
		result = function_c9acc(g35);
		g10 = v1;
		return result;
	}
	int32_t v5 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 4 * (g28 + -16 * g30)); // 0x4e078
	int32_t v6 = *(int32_t *)g32 + v5 + g33;                                       // 0x4e088
	int32_t v7 = g36;                                                              // 0x4e0a4
	if (*(int32_t *)*(int32_t *)(g23 - 0x7290) == 0) {
		// 0x4e0a0
		CelDrawDatOnly((int16_t *)v6, v4, v3, v7);
		// branch -> 0x4e0ac
	} else {
		// 0x4e090
		CelDecDatLightOnly(v6, (char *)v4, v3, v7);
		// branch -> 0x4e0ac
	}
	// 0x4e0ac
	result = function_c9acc(g35);
	g10 = v1;
	return result;
}

// Address range: 0x4e0c8 - 0x4e19c
int32_t CelDecodeHdrLightTrans(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g10; // 0x4e0cc
	g31 = a2;
	g30 = a1;
	g32 = a3;
	g33 = a4;
	g35 = a5;
	g36 = g41;
	g34 = a2;
	int32_t v2 = function_c9948(); // 0x4e0f4
	int32_t result;                // 0x4e184
	if (v2 == 0 || g30 == 0) {
		// 0x4e180
		result = function_c9acc(g31);
		g10 = v1;
		return result;
	}
	// 0x4e10c
	int32_t v3;                                          // bp-40
	int32_t v4 = function_4d7e8(v2, g32, g35, g36, &v3); // 0x4e11c
	if (v4 == 0) {
		// 0x4e180
		result = function_c9acc(g31);
		g10 = v1;
		return result;
	}
	// 0x4e128
	if (*(int32_t *)*(int32_t *)(g23 - 0x7294) != 0) {
		// 0x4e138
		CelDecDatLightTrans((char *)g30, v4, v3, g33);
		// branch -> 0x4e180
		// 0x4e180
		result = function_c9acc(g31);
		g10 = v1;
		return result;
	}
	int32_t v5 = v3;  // 0x4e170
	int32_t v6 = g30; // 0x4e174
	int32_t v7 = g33; // 0x4e178
	if (*(int32_t *)*(int32_t *)(g23 - 0x7290) == 0) {
		// 0x4e170
		CelDrawDatOnly((int16_t *)v6, v4, v5, v7);
		// branch -> 0x4e180
	} else {
		// 0x4e15c
		CelDecDatLightOnly(v6, (char *)v4, v5, v7);
		// branch -> 0x4e180
	}
	// 0x4e180
	result = function_c9acc(g31);
	g10 = v1;
	return result;
}

// Address range: 0x4e19c - 0x4e1cc
int32_t CelDrawHdrLightRed_part(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = &a1; // 0x4e1b0
	g38 = v1;
	int32_t result = function_4e1cc(v1); // 0x4e1b8
	return result;
}

// Address range: 0x4e1cc - 0x4e338
int32_t function_4e1cc(int32_t a1)
{
	int32_t v1 = g38; // 0x4e1d4
	g33 = v1;
	g32 = a1;
	g31 = *(int32_t *)(g23 - 0x7804);
	g27 = g37;
	g28 = g39;
	g35 = g40;
	g29 = g41;
	g30 = g42;
	g36 = g13;
	g34 = v1;
	int32_t v2 = function_c9b28(); // 0x4e204
	if (v2 == 0 || *(int32_t *)g31 == 0) {
		// 0x4e31c
		return function_c9b70((int32_t *)g33);
	}
	// 0x4e224
	int32_t v3;                                          // bp-56
	int32_t v4 = function_4d7e8(v2, g28, g29, g30, &v3); // 0x4e234
	if (v4 == 0) {
		// 0x4e31c
		return function_c9b70((int32_t *)g33);
	}
	int32_t v5 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 4 * (g27 + -16 * g29)); // 0x4e258
	int32_t v6 = *(int32_t *)g31 + v5 + g32;                                       // 0x4e268
	int32_t v7 = *(int32_t *)*(int32_t *)(g23 - 0x776c) == 0 ? 0x1000 : 1024;
	int32_t v8 = 0x1000000 * g36;                 // 0x4e27c
	int32_t v9 = v8 == 0x2000000 ? v7 | 256 : v7; // 0x4e284
	int32_t v10 = v9;                             // 0x4e2c4
	if (v8 >= 0x4000000) {
		// 0x4e29c
		v10 = v8 / 0x10000 - 256 + v9;
		// branch -> 0x4e2ac
	}
	int32_t v11 = *(int32_t *)(g23 - 0x7770); // 0x4e2ac
	int32_t v12 = v4;                         // 0x4e2cc3
	// branch -> 0x4e2c8
	while (true) {
	lab_0x4e2c8:;
		int32_t v13 = g35; // 0x4e2e8
		int32_t v14 = v6;  // 0x4e2dc
		int32_t v15 = v12; // 0x4e2cc
		// branch -> 0x4e2cc
		while (true) {
			char v16 = *(char *)v15; // 0x4e2cc
			int32_t v17 = v15 + 1;   // 0x4e2d0
			int32_t v18 = v16;       // 0x4e2d4
			int32_t v19;             // 0x4e308
			int32_t v20;             // 0x4e314
			if (v16 > -1) {
			lab_0x4e2e8:;
				int32_t v21 = v14; // 0x4e2fc
				int32_t v22 = v18; // 0x4e2f0
				// branch -> 0x4e2ec
				while (true) {
					unsigned char v23 = *(char *)v17; // 0x4e2ec
					int32_t v24 = v22 - 1;            // 0x4e2f0
					int32_t v25 = v24;                // r9
					v17++;
					char v26 = *(char *)(*(int32_t *)v11 + v10 + (int32_t)v23); // 0x4e2f8
					*(char *)v21 = v26;
					int32_t v27 = v6 + 1; // 0x4e300
					v6 = v27;
					if (v24 == 0) {
						// 0x4e308
						v20 = v27;
						v19 = v13 - v18;
						// branch -> 0x4e308
					lab_0x4e308_2:
						// 0x4e308
						if (v19 == 0) {
						lab_0x4e310:;
							int32_t v28 = v17; // 0x4e310
							if (v3 + v4 == v28) {
								// 0x4e31c
								return function_c9b70((int32_t *)g33);
							}
							// 0x4e310
							v6 = v20 - (g35 + 768);
							v12 = v28;
							// branch -> 0x4e2c8
							goto lab_0x4e2c8;
						} else {
						lab_0x4e308_3:
							// 0x4e308
							// branch -> 0x4e2cc
							break;
						}
						while (true) {
							// 0x4e2cc
							v16 = *(char *)v15;
							v17 = v15 + 1;
							v18 = v16;
							v25 = v18;
							if (v16 > -1) {
								goto lab_0x4e2e8;
							}
							int32_t v29 = v14 - v18; // 0x4e2dc
							v6 = v29;
							int32_t v30 = v18 + v13; // 0x4e2e0
							v20 = v29;
							v19 = v30;
							// branch -> 0x4e308
							goto lab_0x4e308_2;
						}
					} else {
						// 0x4e2ec
						v21 = v27;
						v22 = v25;
						// branch -> 0x4e2ec
						continue;
					}
				}
			} else {
				// 0x4e2dc
				v20 = v14 - v18;
				v19 = v18 + v13;
				// branch -> 0x4e308
				goto lab_0x4e308_2;
			}
			// 0x4e308
			if (v19 == 0) {
				goto lab_0x4e310;
			}
			goto lab_0x4e308_3;
		}
	}
}

// Address range: 0x4e338 - 0x4e4c8
int32_t function_4e338(int16_t *a1, int32_t a2, int32_t a3, int32_t a4)
{
	g37 = a2;
	int32_t result = (int32_t)a1; // 0x4e338
	if (result == 0) {
		// 0x4e35c
		return 0;
	}
	int32_t v1 = g37; // 0x4e344
	if (v1 == 0 || *(int32_t *)*(int32_t *)(g23 - 0x7804) == 0) {
		// 0x4e35c
		return result;
	}
	int16_t *v2 = (int16_t *)v1;
	// branch -> 0x4e374
	while (true) {
		int32_t v3 = a4; // 0x4e3a8
		int16_t *v4 = v2;
		int16_t *v5 = (int16_t *)result;
		// branch -> 0x4e378
		int16_t *v6;
		int16_t *v7;
		while (true) {
			int32_t v8 = (int32_t)v4;  // 0x4e378
			int32_t v9 = v8 + 1;       // 0x4e37c
			char v10 = *(char *)v4;    // 0x4e384
			int32_t v11 = v10;         // 0x4e388
			int32_t v12 = (int32_t)v5; // 0x4e3a4
			int32_t v13;               // 0x4e4a4
			if (v10 > -1) {
				int32_t v14 = v12;      // r8
				int32_t v15 = v3 - v11; // r10
				int16_t *v16;           // 0x4e3e0
				int16_t *v17;           // 0x4e3e8
				if (v12 < *(int32_t *)*(int32_t *)(g23 - 0x7808)) {
					int32_t v18 = v9; // r5
					v16 = (int16_t *)(v11 + v12);
					int32_t v19 = v11; // r4
					v17 = (int16_t *)(v11 + v9);
					int32_t v20 = v11; // 0x4e404
					if (v11 % 2 != 0) {
						// 0x4e3f0
						v18 = v8 + 2;
						v19 = v11 - 1;
						*(char *)v5 = *(char *)v9;
						v14++;
						v20 = v19;
						// branch -> 0x4e404
					}
					// 0x4e404
					if (__asm_rlwinm_(v20, 0, 30, 30) != 0) {
						int32_t v21 = v18; // 0x4e40c
						v18 = v21 + 2;
						v19 -= 2;
						*(int16_t *)v14 = *(int16_t *)v21;
						v14 += 2;
						// branch -> 0x4e420
					}
					uint32_t v22 = v19;    // 0x4e420
					int32_t v23 = v22 / 4; // 0x4e424
					v19 = v23;
					if (v22 >= 4) {
						int32_t v24 = __asm_rlwinm_(v23, 29, 3, 31); // 0x4e42c
						int32_t v25 = v24;                           // ctr
						int32_t v26;                                 // 0x4e48c
						int32_t v27;
						if (v24 == 0) {
							// 0x4e42c
							v27 = v14;
							v26 = v19;
							// branch -> 0x4e48c
						lab_0x4e48c:;
							int32_t v28 = v18; // 0x4e490
							*(int32_t *)v27 = *(int32_t *)v28;
							int32_t v29 = v14 + 4; // 0x4e49c
							int32_t v30 = v26 - 1; // 0x4e4a0
							// branch -> 0x4e490
							while (v30 != 0) {
								// 0x4e490
								v28 += 4;
								*(int32_t *)v29 = *(int32_t *)v28;
								v29 += 4;
								v30--;
								// continue -> 0x4e490
							}
						lab_0x4e4a4:
							// 0x4e4a4
							v13 = v15;
							v6 = v17;
							v7 = v16;
							// branch -> 0x4e4a4
						lab_0x4e4a4_5:
							// 0x4e4a4
							if (v13 == 0) {
								// break -> 0x4e4ac
								break;
							}
							v3 = v13;
							v4 = v6;
							v5 = v7;
							// continue -> 0x4e378
							continue;
						} else {
							// 0x4e438
							*(int32_t *)v14 = *(int32_t *)v18;
							*(int32_t *)(v14 + 4) = *(int32_t *)(v18 + 4);
							*(int32_t *)(v14 + 8) = *(int32_t *)(v18 + 8);
							*(int32_t *)(v14 + 12) = *(int32_t *)(v18 + 12);
							*(int32_t *)(v14 + 16) = *(int32_t *)(v18 + 16);
							*(int32_t *)(v14 + 20) = *(int32_t *)(v18 + 20);
							*(int32_t *)(v14 + 24) = *(int32_t *)(v18 + 24);
							int32_t v31 = v18; // 0x4e470
							v18 = v31 + 32;
							*(int32_t *)(v14 + 28) = *(int32_t *)(v31 + 28);
							int32_t v32 = v14 + 32; // 0x4e47c
							v14 = v32;
							int32_t v33 = v25 - 1; // 0x4e480
							// branch -> 0x4e438
							while (v33 != 0) {
								// 0x4e438
								*(int32_t *)v32 = *(int32_t *)v18;
								*(int32_t *)(v14 + 4) = *(int32_t *)(v18 + 4);
								*(int32_t *)(v14 + 8) = *(int32_t *)(v18 + 8);
								*(int32_t *)(v14 + 12) = *(int32_t *)(v18 + 12);
								*(int32_t *)(v14 + 16) = *(int32_t *)(v18 + 16);
								*(int32_t *)(v14 + 20) = *(int32_t *)(v18 + 20);
								*(int32_t *)(v14 + 24) = *(int32_t *)(v18 + 24);
								v31 = v18;
								v18 = v31 + 32;
								*(int32_t *)(v14 + 28) = *(int32_t *)(v31 + 28);
								v32 = v14 + 32;
								v14 = v32;
								v33--;
								// continue -> 0x4e438
							}
							int32_t v34 = v19 % 8; // 0x4e484
							if (v34 == 0) {
								goto lab_0x4e4a4;
							}
							v27 = v32;
							v26 = v34;
							goto lab_0x4e48c;
						}
					lab_0x4e4a4_3:
						// 0x4e4a4
						v13 = v15;
						v6 = (int16_t *)(v11 + v9);
						v7 = (int16_t *)(v11 + v12);
						// branch -> 0x4e4a4
						goto lab_0x4e4a4_5;
					}
				} else {
					// 0x4e3b8
					// branch -> 0x4e4a4
					goto lab_0x4e4a4_3;
				}
				// 0x4e4a4
				v13 = v15;
				v6 = v17;
				v7 = v16;
				// branch -> 0x4e4a4
				goto lab_0x4e4a4_5;
			} else {
				// 0x4e390
				v13 = v11 + v3;
				v6 = (int16_t *)v9;
				v7 = (int16_t *)(v12 - v11);
				// branch -> 0x4e4a4
				goto lab_0x4e4a4_5;
			}
		}
		int32_t result2 = (int32_t)v6;          // 0x4e4b0
		int32_t v35 = (int32_t)v7 - (a4 + 768); // 0x4e4b4
		g37 = v35;
		if (a3 + v1 == result2) {
			// 0x4e35c
			return result2;
		}
		// 0x4e4ac
		v2 = v6;
		result = v35;
		// branch -> 0x4e374
	}
}

// Address range: 0x4e4c8 - 0x4e4f8
int32_t function_4e4c8(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = &a1; // 0x4e4dc
	g38 = v1;
	int32_t result = function_4e4f8(v1); // 0x4e4e4
	return result;
}

// Address range: 0x4e4f8 - 0x4e5b4
int32_t function_4e4f8(int32_t a1)
{
	int32_t v1 = g10; // 0x4e4fc
	int32_t v2 = g38; // 0x4e500
	g36 = v2;
	g35 = a1;
	g33 = *(int32_t *)(g23 - 0x7804);
	g28 = g37;
	g29 = g39;
	g30 = g40;
	g31 = g41;
	g32 = g42;
	g34 = v2;
	int32_t v3 = function_c9b28(); // 0x4e52c
	int32_t result;                // 0x4e59c
	if (v3 == 0 || *(int32_t *)g33 == 0) {
		// 0x4e598
		result = function_c9b70((int32_t *)g36);
		g10 = v1;
		return result;
	}
	int32_t v4 = 0;                                      // bp-40
	int32_t v5 = function_4d7e8(v3, g29, g31, g32, &v4); // 0x4e55c
	if (v5 != 0) {
		int32_t v6 = *(int32_t *)(4 * (g28 + -16 * g31) + *(int32_t *)(g23 - 0x7698)); // 0x4e580
		function_4e338((int16_t *)(v6 + *(int32_t *)g33 + g35), v5, v4, g30);
		// branch -> 0x4e598
	}
	// 0x4e598
	result = function_c9b70((int32_t *)g36);
	g10 = v1;
	return result;
}

// Address range: 0x4e5b4 - 0x4e640
int32_t function_4e5b4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = g10; // 0x4e5b8
	g31 = a2;
	g30 = a1;
	g32 = a3;
	g33 = a4;
	g35 = a5;
	g36 = a6;
	g34 = a2;
	int32_t v2 = function_c9948(); // 0x4e5e0
	int32_t result;                // 0x4e628
	if (v2 == 0 || g30 == 0) {
		// 0x4e624
		result = function_c9acc(g31);
		g10 = v1;
		return result;
	}
	// 0x4e5f8
	int32_t v3;                                          // bp-40
	int32_t v4 = function_4d7e8(v2, g32, g35, g36, &v3); // 0x4e608
	if (v4 != 0) {
		// 0x4e614
		function_4e338((int16_t *)g30, v4, v3, g33);
		// branch -> 0x4e624
	}
	// 0x4e624
	result = function_c9acc(g31);
	g10 = v1;
	return result;
}

// Address range: 0x4e640 - 0x4e748
int32_t function_4e640(int32_t result, char *a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0x4e644
	g36 = *(int32_t *)(g23 - 0x7808);
	g33 = a4;
	if (result == 0) {
		// 0x4e734
		g10 = v1;
		return 0;
	}
	int32_t v2 = (int32_t)a2; // 0x4e660
	if (v2 == 0 || *(int32_t *)*(int32_t *)(g23 - 0x7804) == 0) {
		// 0x4e734
		g10 = v1;
		return result;
	}
	// 0x4e67c
	g35 = a4 + 768;
	int32_t v3 = *(int32_t *)(g23 - 0x7290); // 0x4e684
	char *v4 = (char *)v2;                   // 0x4e690
	g32 = 256 * *(int32_t *)v3 + *(int32_t *)*(int32_t *)(g23 - 0x7770);
	g31 = a3 + v2;
	int32_t v5 = (int32_t)&v4; // 0x4e70c
	// branch -> 0x4e6a8
	while (true) {
		int32_t v6 = a4;     // 0x4e6dc
		int32_t v7 = result; // 0x4e6f0
		char *v8 = v4;       // 0x4e6ac
		// branch -> 0x4e6ac
		while (true) {
			int32_t v9 = (int32_t)v8 + 1; // 0x4e6b0
			v4 = (char *)v9;
			char v10 = *v8;    // 0x4e6b8
			int32_t v11 = v10; // 0x4e6bc
			g39 = v11;
			int32_t v12; // 0x4e714
			if (v10 > -1) {
				int32_t v13 = v6 - v11; // 0x4e6dc
				g30 = v13;
				if (v7 < *(int32_t *)g36) {
					// 0x4e704
					function_da338((char *)&result, v5, g32);
					v12 = g30;
					// branch -> 0x4e714
				} else {
					// 0x4e6ec
					result = v11 + v7;
					v4 = (char *)(v11 + v9);
					v12 = v13;
					// branch -> 0x4e714
				}
			lab_0x4e714:
				// 0x4e714
				if (v12 == 0) {
				lab_0x4e71c:;
					char *v14 = v4;                 // 0x4e720
					int32_t result2 = result - g35; // 0x4e724
					result = result2;
					if (g31 == (int32_t)v14) {
						// 0x4e734
						g10 = v1;
						return result2;
					}
					// 0x4e71c
					result = result2;
					v4 = v14;
					a4 = g33;
					// branch -> 0x4e6a8
					break;
				} else {
				lab_0x4e714_2:
					// 0x4e714
					v6 = v12;
					v7 = result;
					v8 = v4;
					// branch -> 0x4e6ac
					continue;
				}
			} else {
				int32_t v15 = v11 + v6; // 0x4e6c8
				g30 = v15;
				result = v7 - v11;
				v12 = v15;
				// branch -> 0x4e714
				goto lab_0x4e714;
			}
		}
	}
}

// Address range: 0x4e748 - 0x4e998
int32_t function_4e748(char *a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = (int32_t)a1; // r3
	int32_t result = v1;      // 0x4e74c
	if (result == 0) {
		// 0x4e98c
		return 0;
	}
	if (a2 == 0 || *(int32_t *)*(int32_t *)(g23 - 0x7804) == 0) {
		// 0x4e98c
		return result;
	}
	int32_t v2 = *(int32_t *)(g23 - 0x7290);            // 0x4e778
	int32_t v3 = *(int32_t *)(g23 - 0x7770);            // 0x4e780
	int32_t v4 = *(int32_t *)v3 + 256 * *(int32_t *)v2; // r10
	int32_t v5 = result % 2;                            // r7
	int32_t v6 = a2;                                    // 0x4e7a02
	// branch -> 0x4e79c
	while (true) {
		int32_t v7 = a4;     // 0x4e7c0
		int32_t v8 = result; // 0x4e7d8
		int32_t v9 = v6;     // 0x4e7a0
		// branch -> 0x4e7a0
		while (true) {
			char v10 = *(char *)v9;      // 0x4e7a0
			int32_t v11 = v9 + 1;        // 0x4e7a4
			int32_t v12 = v11;           // r4
			uint32_t v13 = (int32_t)v10; // 0x4e7a8
			int32_t v14;                 // 0x4e970
			int32_t v15;                 // 0x4e980
			if (v10 > -1) {
				int32_t v16 = v7 - v13; // r12
				int32_t v17;            // 0x4e7d0
				if (v8 < *(int32_t *)*(int32_t *)(g23 - 0x7808)) {
					int32_t v18 = v13 % 2;                     // r30
					int32_t v19 = v13 / 2 | v13 & -0x80000000; // 0x4e7e4
					int32_t v20 = v19;                         // r5
					int32_t v21;                               // ctr
					int32_t v22;                               // 0x4e7b07
					if (v8 % 2 == v5) {
						int32_t v23 = v8; // 0x4e8a4
						if (v19 != 0) {
							int32_t v24 = __asm_rlwinm_(v19, 29, 3, 31); // 0x4e7fc
							v21 = v24;
							int32_t v25; // 0x4e87c
							int32_t v26;
							if (v24 == 0) {
								// 0x4e7fc
								v26 = v1;
								v25 = v20;
								// branch -> 0x4e87c
							lab_0x4e87c:;
								int32_t v27 = v12;                      // 0x4e880
								unsigned char v28 = *(char *)(v27 + 1); // 0x4e880
								v12 = v27 + 2;
								char v29 = *(char *)(v4 + (int32_t)v28); // 0x4e888
								*(char *)(v26 + 1) = v29;
								int32_t v30 = v1 + 2; // 0x4e890
								v1 = v30;
								int32_t v31 = v25 - 1; // 0x4e894
								v23 = v30;
								// branch -> 0x4e880
								while (v31 != 0) {
									// 0x4e880
									v27 = v12;
									v28 = *(char *)(v27 + 1);
									v12 = v27 + 2;
									v29 = *(char *)(v4 + (int32_t)v28);
									*(char *)(v30 + 1) = v29;
									v30 = v1 + 2;
									v1 = v30;
									v31--;
									v23 = v30;
									// continue -> 0x4e880
								}
							lab_0x4e898:
								// 0x4e898
								v22 = v23;
								if (v18 != 0) {
								lab_0x4e8a0_2:
									// 0x4e8a0
									v12++;
									int32_t v32 = v23 + 1; // 0x4e8a4
									v1 = v32;
									v22 = v32;
									// branch -> 0x4e970
								}
							lab_0x4e970_6:
								// 0x4e970
								v15 = v22;
								v14 = v16;
								// branch -> 0x4e970
							lab_0x4e970_10:
								// 0x4e970
								if (v14 == 0) {
								lab_0x4e978:;
									int32_t v33 = v12;                  // 0x4e978
									int32_t result2 = v15 - (a4 + 768); // 0x4e980
									v1 = result2;
									v5 = (v5 + 1) % 2;
									if (a3 + a2 == v33) {
										// 0x4e98c
										return result2;
									}
									// 0x4e978
									result = result2;
									v6 = v33;
									// branch -> 0x4e79c
									break;
								} else {
								lab_0x4e970_11:
									// 0x4e970
									v7 = v14;
									v8 = v15;
									v9 = v12;
									// branch -> 0x4e7a0
									continue;
								}
							} else {
								unsigned char v34 = *(char *)(v12 + 1);  // 0x4e808
								char v35 = *(char *)(v4 + (int32_t)v34); // 0x4e80c
								*(char *)(v1 + 1) = v35;
								unsigned char v36 = *(char *)(v12 + 3);  // 0x4e814
								char v37 = *(char *)(v4 + (int32_t)v36); // 0x4e818
								*(char *)(v1 + 3) = v37;
								unsigned char v38 = *(char *)(v12 + 5);  // 0x4e820
								char v39 = *(char *)(v4 + (int32_t)v38); // 0x4e824
								*(char *)(v1 + 5) = v39;
								unsigned char v40 = *(char *)(v12 + 7);  // 0x4e82c
								char v41 = *(char *)(v4 + (int32_t)v40); // 0x4e830
								*(char *)(v1 + 7) = v41;
								unsigned char v42 = *(char *)(v12 + 9);  // 0x4e838
								char v43 = *(char *)(v4 + (int32_t)v42); // 0x4e83c
								*(char *)(v1 + 9) = v43;
								unsigned char v44 = *(char *)(v12 + 11); // 0x4e844
								char v45 = *(char *)(v4 + (int32_t)v44); // 0x4e848
								*(char *)(v1 + 11) = v45;
								unsigned char v46 = *(char *)(v12 + 13); // 0x4e850
								char v47 = *(char *)(v4 + (int32_t)v46); // 0x4e854
								*(char *)(v1 + 13) = v47;
								int32_t v48 = v12;                       // 0x4e85c
								unsigned char v49 = *(char *)(v48 + 15); // 0x4e85c
								v12 = v48 + 16;
								char v50 = *(char *)(v4 + (int32_t)v49); // 0x4e864
								*(char *)(v1 + 15) = v50;
								int32_t v51 = v1 + 16; // 0x4e86c
								v1 = v51;
								int32_t v52 = v21 - 1; // 0x4e870
								// branch -> 0x4e808
								while (v52 != 0) {
									// 0x4e808
									v34 = *(char *)(v12 + 1);
									v35 = *(char *)(v4 + (int32_t)v34);
									*(char *)(v51 + 1) = v35;
									v36 = *(char *)(v12 + 3);
									v37 = *(char *)(v4 + (int32_t)v36);
									*(char *)(v1 + 3) = v37;
									v38 = *(char *)(v12 + 5);
									v39 = *(char *)(v4 + (int32_t)v38);
									*(char *)(v1 + 5) = v39;
									v40 = *(char *)(v12 + 7);
									v41 = *(char *)(v4 + (int32_t)v40);
									*(char *)(v1 + 7) = v41;
									v42 = *(char *)(v12 + 9);
									v43 = *(char *)(v4 + (int32_t)v42);
									*(char *)(v1 + 9) = v43;
									v44 = *(char *)(v12 + 11);
									v45 = *(char *)(v4 + (int32_t)v44);
									*(char *)(v1 + 11) = v45;
									v46 = *(char *)(v12 + 13);
									v47 = *(char *)(v4 + (int32_t)v46);
									*(char *)(v1 + 13) = v47;
									v48 = v12;
									v49 = *(char *)(v48 + 15);
									v12 = v48 + 16;
									v50 = *(char *)(v4 + (int32_t)v49);
									*(char *)(v1 + 15) = v50;
									v51 = v1 + 16;
									v1 = v51;
									v52--;
									// continue -> 0x4e808
								}
								int32_t v53 = v20 % 8; // 0x4e874
								if (v53 == 0) {
									v23 = v51;
									goto lab_0x4e898;
								}
								v26 = v51;
								v25 = v53;
								goto lab_0x4e87c;
							}
						}
						// 0x4e898
						if (v18 == 0) {
							v22 = v23;
							goto lab_0x4e970_6;
						}
						goto lab_0x4e8a0_2;
					} else {
						int32_t v54 = v8; // 0x4e968
						if (v19 != 0) {
							int32_t v55 = __asm_rlwinm_(v19, 29, 3, 31); // 0x4e8b8
							v21 = v55;
							int32_t v56; // 0x4e938
							int32_t v57;
							if (v55 == 0) {
								// 0x4e8b8
								v57 = v1;
								v56 = v20;
								// branch -> 0x4e938
							lab_0x4e938:;
								int32_t v58 = v12;                // 0x4e93c
								unsigned char v59 = *(char *)v58; // 0x4e93c
								v12 = v58 + 2;
								char v60 = *(char *)(v4 + (int32_t)v59); // 0x4e944
								*(char *)v57 = v60;
								int32_t v61 = v1 + 2; // 0x4e94c
								v1 = v61;
								int32_t v62 = v56 - 1; // 0x4e950
								v54 = v61;
								// branch -> 0x4e93c
								while (v62 != 0) {
									// 0x4e93c
									v58 = v12;
									v59 = *(char *)v58;
									v12 = v58 + 2;
									v60 = *(char *)(v4 + (int32_t)v59);
									*(char *)v61 = v60;
									v61 = v1 + 2;
									v1 = v61;
									v62--;
									v54 = v61;
									// continue -> 0x4e93c
								}
							lab_0x4e954:
								// 0x4e954
								if (v18 == 0) {
									v22 = v54;
									goto lab_0x4e970_6;
								}
							lab_0x4e95c_2:;
								int32_t v63 = v12;                // 0x4e95c
								unsigned char v64 = *(char *)v63; // 0x4e95c
								v12 = v63 + 1;
								char v65 = *(char *)(v4 + (int32_t)v64); // 0x4e964
								*(char *)v54 = v65;
								int32_t v66 = v1 + 1; // 0x4e96c
								v1 = v66;
								v22 = v66;
								// branch -> 0x4e970
								goto lab_0x4e970_6;
							} else {
								unsigned char v67 = *(char *)v12;        // 0x4e8c4
								char v68 = *(char *)(v4 + (int32_t)v67); // 0x4e8c8
								*(char *)v1 = v68;
								unsigned char v69 = *(char *)(v12 + 2);  // 0x4e8d0
								char v70 = *(char *)(v4 + (int32_t)v69); // 0x4e8d4
								*(char *)(v1 + 2) = v70;
								unsigned char v71 = *(char *)(v12 + 4);  // 0x4e8dc
								char v72 = *(char *)(v4 + (int32_t)v71); // 0x4e8e0
								*(char *)(v1 + 4) = v72;
								unsigned char v73 = *(char *)(v12 + 6);  // 0x4e8e8
								char v74 = *(char *)(v4 + (int32_t)v73); // 0x4e8ec
								*(char *)(v1 + 6) = v74;
								unsigned char v75 = *(char *)(v12 + 8);  // 0x4e8f4
								char v76 = *(char *)(v4 + (int32_t)v75); // 0x4e8f8
								*(char *)(v1 + 8) = v76;
								unsigned char v77 = *(char *)(v12 + 10); // 0x4e900
								char v78 = *(char *)(v4 + (int32_t)v77); // 0x4e904
								*(char *)(v1 + 10) = v78;
								unsigned char v79 = *(char *)(v12 + 12); // 0x4e90c
								char v80 = *(char *)(v4 + (int32_t)v79); // 0x4e910
								*(char *)(v1 + 12) = v80;
								int32_t v81 = v12;                       // 0x4e918
								unsigned char v82 = *(char *)(v81 + 14); // 0x4e918
								v12 = v81 + 16;
								char v83 = *(char *)(v4 + (int32_t)v82); // 0x4e920
								*(char *)(v1 + 14) = v83;
								int32_t v84 = v1 + 16; // 0x4e928
								v1 = v84;
								int32_t v85 = v21 - 1; // 0x4e92c
								// branch -> 0x4e8c4
								while (v85 != 0) {
									// 0x4e8c4
									v67 = *(char *)v12;
									v68 = *(char *)(v4 + (int32_t)v67);
									*(char *)v84 = v68;
									v69 = *(char *)(v12 + 2);
									v70 = *(char *)(v4 + (int32_t)v69);
									*(char *)(v1 + 2) = v70;
									v71 = *(char *)(v12 + 4);
									v72 = *(char *)(v4 + (int32_t)v71);
									*(char *)(v1 + 4) = v72;
									v73 = *(char *)(v12 + 6);
									v74 = *(char *)(v4 + (int32_t)v73);
									*(char *)(v1 + 6) = v74;
									v75 = *(char *)(v12 + 8);
									v76 = *(char *)(v4 + (int32_t)v75);
									*(char *)(v1 + 8) = v76;
									v77 = *(char *)(v12 + 10);
									v78 = *(char *)(v4 + (int32_t)v77);
									*(char *)(v1 + 10) = v78;
									v79 = *(char *)(v12 + 12);
									v80 = *(char *)(v4 + (int32_t)v79);
									*(char *)(v1 + 12) = v80;
									v81 = v12;
									v82 = *(char *)(v81 + 14);
									v12 = v81 + 16;
									v83 = *(char *)(v4 + (int32_t)v82);
									*(char *)(v1 + 14) = v83;
									v84 = v1 + 16;
									v1 = v84;
									v85--;
									// continue -> 0x4e8c4
								}
								int32_t v86 = v20 % 8; // 0x4e930
								if (v86 == 0) {
									v54 = v84;
									goto lab_0x4e954;
								}
								v57 = v84;
								v56 = v86;
								goto lab_0x4e938;
							}
						}
						// 0x4e954
						if (v18 == 0) {
							v22 = v54;
							goto lab_0x4e970_6;
						}
						goto lab_0x4e95c_2;
					}
				lab_0x4e970_8:
					// 0x4e970
					v15 = v17;
					v14 = v16;
					// branch -> 0x4e970
					goto lab_0x4e970_10;
				} else {
					// 0x4e7cc
					v12 = v13 + v11;
					v17 = v13 + v8;
					v1 = v17;
					// branch -> 0x4e970
					goto lab_0x4e970_8;
				}
			} else {
				int32_t v87 = v8 - v13; // 0x4e7b0
				v1 = v87;
				v15 = v87;
				v14 = v13 + v7;
				// branch -> 0x4e970
				goto lab_0x4e970_10;
			}
		}
	}
}

// Address range: 0x4e998 - 0x4ea70
int32_t function_4e998(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x4e99c
	g35 = a3;
	g33 = a1;
	g32 = *(int32_t *)(g23 - 0x7804);
	g28 = a2;
	g29 = a4;
	g36 = a5;
	g30 = a6;
	g31 = a7;
	g34 = a3;
	int32_t v2 = function_c9948(); // 0x4e9cc
	int32_t result;                // 0x4ea58
	if (v2 == 0 || *(int32_t *)g32 == 0) {
		// 0x4ea54
		result = function_c9acc(g35);
		g10 = v1;
		return result;
	}
	// 0x4e9ec
	int32_t v3;                                          // bp-40
	int32_t v4 = function_4d7e8(v2, g29, g30, g31, &v3); // 0x4e9fc
	if (v4 == 0) {
		// 0x4ea54
		result = function_c9acc(g35);
		g10 = v1;
		return result;
	}
	int32_t v5 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 4 * (g28 + -16 * g30)); // 0x4ea20
	int32_t v6 = *(int32_t *)g32 + v5 + g33;                                       // 0x4ea30
	int32_t v7 = g36;                                                              // 0x4ea4c
	if (*(int32_t *)*(int32_t *)(g23 - 0x7290) == 0) {
		// 0x4ea48
		function_4e338((int16_t *)v6, v4, v3, v7);
		// branch -> 0x4ea54
	} else {
		// 0x4ea38
		function_4e640(v6, (char *)v4, v3, v7);
		// branch -> 0x4ea54
	}
	// 0x4ea54
	result = function_c9acc(g35);
	g10 = v1;
	return result;
}

// Address range: 0x4ea70 - 0x4eb3c
int32_t function_4ea70(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	g31 = a2;
	g30 = a1;
	g32 = a3;
	g33 = a4;
	g35 = a5;
	g36 = a6;
	g34 = a2;
	int32_t v1 = function_c9948(); // 0x4ea9c
	if (v1 == 0) {
		// 0x4eb20
		return function_c9acc(g31);
	}
	// 0x4eaac
	int32_t v2;                                          // bp-40
	int32_t v3 = function_4d7e8(v1, g32, g35, g36, &v2); // 0x4eabc
	if (v3 == 0) {
		// 0x4eb20
		return function_c9acc(g31);
	}
	// 0x4eac8
	if (*(int32_t *)*(int32_t *)(g23 - 0x7294) != 0) {
		// 0x4ead8
		function_4e748((char *)g30, v3, v2, g33);
		// branch -> 0x4eb20
		// 0x4eb20
		return function_c9acc(g31);
	}
	int32_t v4 = v2;  // 0x4eb10
	int32_t v5 = g30; // 0x4eb14
	int32_t v6 = g33; // 0x4eb18
	if (*(int32_t *)*(int32_t *)(g23 - 0x7290) == 0) {
		// 0x4eb10
		function_4e338((int16_t *)v5, v3, v4, v6);
		// branch -> 0x4eb20
	} else {
		// 0x4eafc
		function_4e640(v5, (char *)v3, v4, v6);
		// branch -> 0x4eb20
	}
	// 0x4eb20
	return function_c9acc(g31);
}

// Address range: 0x4eb3c - 0x4ecc4
int32_t function_4eb3c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	// 0x4eb3c
	g37 = a2;
	g31 = a3;
	g35 = *(int32_t *)(g23 - 0x7808);
	g30 = a1;
	g36 = *(int32_t *)(g23 - 0x7804);
	g26 = g37;
	g27 = a4;
	g32 = a5;
	g28 = a6;
	g29 = a7;
	g33 = g13;
	g34 = a3;
	int32_t v1 = function_c9948(); // 0x4eb78
	if (v1 == 0 || *(int32_t *)g36 == 0) {
		// 0x4eca8
		return function_c9acc(g31);
	}
	// 0x4eb98
	int32_t v2;                                          // bp-56
	int32_t v3 = function_4d7e8(v1, g27, g28, g29, &v2); // 0x4eba8
	if (v3 == 0) {
		// 0x4eca8
		return function_c9acc(g31);
	}
	int32_t v4 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 4 * (g26 + -16 * g28)); // 0x4ebcc
	int32_t v5 = *(int32_t *)g36 + v4 + g30;                                       // 0x4ebdc
	int32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x776c) == 0 ? 0x1000 : 1024;
	int32_t v7 = 0x1000000 * g33;                 // 0x4ebf0
	int32_t v8 = v7 == 0x2000000 ? v6 | 256 : v6; // 0x4ebf8
	int32_t v9 = v8;                              // 0x4ec38
	if (v7 >= 0x4000000) {
		// 0x4ec10
		v9 = v7 / 0x10000 - 256 + v8;
		// branch -> 0x4ec20
	}
	int32_t v10 = g32; // 0x4ec2c
	g37 = *(int32_t *)*(int32_t *)(g23 - 0x7770) + v9;
	int32_t v11 = v3;  // 0x4ec403
	int32_t v12 = v10; // 0x4ec3c
	// branch -> 0x4ec3c
	while (true) {
	lab_0x4ec3c:;
		int32_t v13 = v12; // 0x4ec60
		int32_t v14 = v5;  // 0x4ec70
		int32_t v15 = v11; // 0x4ec40
		// branch -> 0x4ec40
		while (true) {
			char v16 = *(char *)v15; // 0x4ec40
			int32_t v17 = v15 + 1;   // 0x4ec44
			int32_t v18 = v17;       // r3
			int32_t v19 = v16;       // 0x4ec48
			int32_t v20;             // r6
			int32_t v21;             // 0x4eca0
			if (v16 > -1) {
			lab_0x4ec5c:;
				int32_t v22 = v13 - v19; // 0x4ec60
				v20 = v22;
				if (v14 < *(int32_t *)g35) {
					int32_t v23 = v14; // 0x4ec88
					int32_t v24 = v19; // 0x4ec7c
					int32_t v25 = v17; // 0x4ec80
					while (true) {
						int32_t v26 = v24 - 1; // 0x4ec7c
						int32_t v27 = v26;     // r9
						v18 = v25 + 1;
						char v28 = *(char *)(g37 + (int32_t) * (char *)v25); // 0x4ec84
						*(char *)v23 = v28;
						int32_t v29 = v5 + 1; // 0x4ec8c
						v5 = v29;
						if (v26 == 0) {
							// 0x4ec94
							v21 = v29;
							// branch -> 0x4ec94
						lab_0x4ec94_2:
							// 0x4ec94
							if (v20 == 0) {
							lab_0x4ec9c_2:;
								int32_t v30 = v18; // 0x4ec9c
								if (v2 + v3 == v30) {
									// 0x4eca8
									return function_c9acc(g31);
								}
								// 0x4ec9c
								v5 = v21 - (v10 + 768);
								v11 = v30;
								v12 = g32;
								// branch -> 0x4ec3c
								goto lab_0x4ec3c;
							} else {
							lab_0x4ec94_5:
								// 0x4ec94
								// branch -> 0x4ec40
								break;
							}
							while (true) {
								// 0x4ec40
								v16 = *(char *)v15;
								v17 = v15 + 1;
								v18 = v17;
								v19 = v16;
								v27 = v19;
								if (v16 > -1) {
									goto lab_0x4ec5c;
								}
								int32_t v31 = v14 - v19; // 0x4ec50
								v5 = v31;
								int32_t v32 = v19 + v13; // 0x4ec54
								v20 = v32;
								v21 = v31;
								v20 = v32;
								// branch -> 0x4ec94
								goto lab_0x4ec94_2;
							}
						} else {
							// 0x4ec78
							v23 = v29;
							v24 = v27;
							v25 = v18;
							// branch -> 0x4ec78
							continue;
						}
					}
				} else {
					// 0x4ec6c
					v18 = v19 + v17;
					v21 = v19 + v14;
					v20 = v22;
					// branch -> 0x4ec94
					goto lab_0x4ec94_2;
				}
			lab_0x4ec94_4:
				// 0x4ec94
				if (v20 == 0) {
					goto lab_0x4ec9c_2;
				}
				goto lab_0x4ec94_5;
			} else {
				// 0x4ec50
				v21 = v14 - v19;
				v20 = v19 + v13;
				// branch -> 0x4ec94
				goto lab_0x4ec94_4;
			}
			// 0x4ec94
			if (v20 == 0) {
				goto lab_0x4ec9c_2;
			}
			goto lab_0x4ec94_5;
		}
	}
}

// Address range: 0x4ecc4 - 0x4ee84
int32_t function_4ecc4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8)
{
	int32_t v1 = g10; // 0x4ecc8
	g35 = a5;
	g29 = a1;
	g30 = a2;
	g31 = a3;
	g33 = a4;
	g32 = a6;
	g36 = a7;
	g34 = a5;
	int32_t v2 = function_c9948(); // 0x4ecf4
	int32_t result;                // 0x4ee6c
	if (v2 == 0 || g29 == 0) {
		// 0x4ee68
		result = function_c9acc(g35);
		g10 = v1;
		return result;
	}
	// 0x4ed0c
	int32_t v3;                                // bp-48
	int32_t v4 = function_4d7c4(v2, g32, &v3); // 0x4ed14
	int32_t v5 = g33;                          // 0x4ed18
	g33 = g36 + v5;
	int16_t *v6 = (int16_t *)v4;
	int32_t v7 = g29 + g30 + g31 * v5;
	// branch -> 0x4ed3c
	while (true) {
		int32_t v8 = g36; // 0x4ed78
		int16_t *v9 = v6;
		int32_t v10 = v7; // 0x4eda0
		// branch -> 0x4ed40
		int16_t *v11;
		int32_t v12;
		int32_t v13;
		while (true) {
			int32_t v14 = (int32_t)v9; // 0x4ed40
			int32_t v15 = v14 + 1;     // 0x4ed44
			char v16 = *(char *)v9;    // 0x4ed4c
			int32_t v17 = v16;         // 0x4ed50
			int32_t v18;               // 0x4ee48
			if (v16 > -1) {
				int32_t v19 = v10;       // r5
				int32_t v20 = v15;       // r4
				int32_t v21 = v8 - v17;  // r7
				int32_t v22 = v17 + v10; // 0x4ed7c
				int32_t v23 = v17 + v15; // 0x4ed80
				int32_t v24 = v17;       // r3
				int32_t v25 = v17;       // 0x4eda8
				if (v17 % 2 != 0) {
					// 0x4ed94
					v20 = v14 + 2;
					v24 = v17 - 1;
					*(char *)v10 = *(char *)v15;
					v19++;
					v25 = v24;
					// branch -> 0x4eda8
				}
				// 0x4eda8
				if (__asm_rlwinm_(v25, 0, 30, 30) != 0) {
					int32_t v26 = v20; // 0x4edb0
					v20 = v26 + 2;
					v24 -= 2;
					*(int16_t *)v19 = *(int16_t *)v26;
					v19 += 2;
					// branch -> 0x4edc4
				}
				uint32_t v27 = v24;    // 0x4edc4
				int32_t v28 = v27 / 4; // 0x4edc8
				v24 = v28;
				if (v27 >= 4) {
					int32_t v29 = __asm_rlwinm_(v28, 29, 3, 31); // 0x4edd0
					int32_t v30 = v29;                           // ctr
					int32_t v31;                                 // 0x4ee30
					int32_t v32;
					if (v29 == 0) {
						// 0x4edd0
						v32 = v19;
						v31 = v24;
						// branch -> 0x4ee30
					lab_0x4ee30:;
						int32_t v33 = v20; // 0x4ee34
						*(int32_t *)v32 = *(int32_t *)v33;
						int32_t v34 = v19 + 4; // 0x4ee40
						int32_t v35 = v31 - 1; // 0x4ee44
						// branch -> 0x4ee34
						while (v35 != 0) {
							// 0x4ee34
							v33 += 4;
							*(int32_t *)v34 = *(int32_t *)v33;
							v34 += 4;
							v35--;
							// continue -> 0x4ee34
						}
					lab_0x4ee48:
						// 0x4ee48
						v18 = v21;
						v12 = v23;
						v13 = v22;
						// branch -> 0x4ee48
					lab_0x4ee48_4:
						// 0x4ee48
						v11 = (int16_t *)v12;
						if (v18 == 0) {
							// break -> 0x4ee50
							break;
						}
						v8 = v18;
						v9 = v11;
						v10 = v13;
						// continue -> 0x4ed40
						continue;
					} else {
						// 0x4eddc
						*(int32_t *)v19 = *(int32_t *)v20;
						*(int32_t *)(v19 + 4) = *(int32_t *)(v20 + 4);
						*(int32_t *)(v19 + 8) = *(int32_t *)(v20 + 8);
						*(int32_t *)(v19 + 12) = *(int32_t *)(v20 + 12);
						*(int32_t *)(v19 + 16) = *(int32_t *)(v20 + 16);
						*(int32_t *)(v19 + 20) = *(int32_t *)(v20 + 20);
						*(int32_t *)(v19 + 24) = *(int32_t *)(v20 + 24);
						int32_t v36 = v20; // 0x4ee14
						v20 = v36 + 32;
						*(int32_t *)(v19 + 28) = *(int32_t *)(v36 + 28);
						int32_t v37 = v19 + 32; // 0x4ee20
						v19 = v37;
						int32_t v38 = v30 - 1; // 0x4ee24
						// branch -> 0x4eddc
						while (v38 != 0) {
							// 0x4eddc
							*(int32_t *)v37 = *(int32_t *)v20;
							*(int32_t *)(v19 + 4) = *(int32_t *)(v20 + 4);
							*(int32_t *)(v19 + 8) = *(int32_t *)(v20 + 8);
							*(int32_t *)(v19 + 12) = *(int32_t *)(v20 + 12);
							*(int32_t *)(v19 + 16) = *(int32_t *)(v20 + 16);
							*(int32_t *)(v19 + 20) = *(int32_t *)(v20 + 20);
							*(int32_t *)(v19 + 24) = *(int32_t *)(v20 + 24);
							v36 = v20;
							v20 = v36 + 32;
							*(int32_t *)(v19 + 28) = *(int32_t *)(v36 + 28);
							v37 = v19 + 32;
							v19 = v37;
							v38--;
							// continue -> 0x4eddc
						}
						int32_t v39 = v24 % 8; // 0x4ee28
						if (v39 == 0) {
							goto lab_0x4ee48;
						}
						v32 = v37;
						v31 = v39;
						goto lab_0x4ee30;
					}
				}
				// 0x4ee48
				v18 = v21;
				v12 = v23;
				v13 = v22;
				// branch -> 0x4ee48
				goto lab_0x4ee48_4;
			} else {
				// 0x4ed58
				v18 = v17 + v8;
				v12 = v15;
				v13 = v10 - v17;
				// branch -> 0x4ee48
				goto lab_0x4ee48_4;
			}
		}
		// 0x4ee50
		if (v3 + v4 == v12) {
			// 0x4ee68
			result = function_c9acc(g35);
			g10 = v1;
			return result;
		}
		// 0x4ee50
		v6 = v11;
		v7 = v13 - g33;
		// branch -> 0x4ed3c
	}
}

// Address range: 0x4ee84 - 0x4eeb4
int32_t CelDecodeClr(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = &a1; // 0x4ee98
	g39 = v1;
	int32_t result = CelDecodeClr_part((char)v1); // 0x4eea0
	return result;
}

// Address range: 0x4eeb4 - 0x4efd0
int32_t CelDecodeClr_part(char a1)
{
	int32_t v1 = g10; // 0x4eeb8
	int32_t v2 = g39; // 0x4eebc
	g35 = v2;
	g32 = a1;
	g31 = *(int32_t *)(g23 - 0x7804);
	g33 = g37;
	g27 = g38;
	g28 = g40;
	g36 = g41;
	g29 = g42;
	g30 = g13;
	g34 = v2;
	int32_t v3 = function_c9b28(); // 0x4eeec
	int32_t result;                // 0x4efb8
	if (v3 == 0 || *(int32_t *)g31 == 0) {
		// 0x4efb4
		result = function_c9b70((int32_t *)g35);
		g10 = v1;
		return result;
	}
	// 0x4ef08
	int32_t v4;                                          // bp-56
	int32_t v5 = function_4d7e8(v3, g28, g29, g30, &v4); // 0x4ef18
	if (v5 == 0) {
		// 0x4efb4
		result = function_c9b70((int32_t *)g35);
		g10 = v1;
		return result;
	}
	int32_t v6 = *(int32_t *)(g23 - 0x7698);                                       // 0x4ef30
	int32_t v7 = g36;                                                              // 0x4ef40
	int32_t v8 = *(int32_t *)(v6 + 4 * (g27 + -16 * g29)) + *(int32_t *)g31 + g33; // 0x4ef4c
	int32_t v9 = v5;                                                               // 0x4ef542
	int32_t v10 = v7;                                                              // 0x4ef50
	// branch -> 0x4ef50
	while (true) {
	lab_0x4ef50:;
		int32_t v11 = v10; // 0x4ef70
		int32_t v12 = v8;  // 0x4ef64
		int32_t v13 = v9;  // 0x4ef54
		// branch -> 0x4ef54
		while (true) {
			char v14 = *(char *)v13; // 0x4ef54
			int32_t v15 = v13 + 1;   // 0x4ef58
			int32_t v16 = v14;       // 0x4ef5c
			int32_t v17 = v16;       // r8
			int32_t v18;             // 0x4efa0
			int32_t v19;             // 0x4efac
			if (v14 > -1) {
			lab_0x4ef70:;
				int32_t v20 = v16; // 0x4ef9410
				int32_t v21 = v12; // 0x4ef84
				// branch -> 0x4ef74
				while (true) {
					// 0x4ef74
					v15++;
					int32_t v22 = v21; // 0x4ef98
					int32_t v23 = v20; // 0x4ef94
					if (*(char *)v15 != 0) {
						// 0x4ef84
						*(char *)(v21 - 768) = (char)g32;
						*(char *)(v8 - 1) = (char)g32;
						*(char *)(v8 + 1) = (char)g32;
						*(char *)(v8 + 768) = (char)g32;
						v22 = v8;
						v23 = v17;
						// branch -> 0x4ef94
					}
					int32_t v24 = v23 - 1; // 0x4ef94
					v17 = v24;
					int32_t v25 = v22 + 1; // 0x4ef98
					v8 = v25;
					if (v24 == 0) {
						// 0x4efa0
						v19 = v25;
						v18 = v11 - v16;
						// branch -> 0x4efa0
					lab_0x4efa0_2:
						// 0x4efa0
						if (v18 == 0) {
						lab_0x4efa8_2:;
							int32_t v26 = v15; // 0x4efa8
							if (v4 + v5 == v26) {
								// 0x4efb4
								result = function_c9b70((int32_t *)g35);
								g10 = v1;
								return result;
							}
							// 0x4efa8
							v8 = v19 - (v7 + 768);
							v9 = v26;
							v10 = g36;
							// branch -> 0x4ef50
							goto lab_0x4ef50;
						} else {
						lab_0x4efa0_3:
							// 0x4efa0
							// branch -> 0x4ef54
							break;
						}
						while (true) {
							// 0x4ef54
							v14 = *(char *)v13;
							v15 = v13 + 1;
							v16 = v14;
							v17 = v16;
							if (v14 > -1) {
								goto lab_0x4ef70;
							}
							int32_t v27 = v12 - v16; // 0x4ef64
							v8 = v27;
							int32_t v28 = v16 + v11; // 0x4ef68
							v19 = v27;
							v18 = v28;
							// branch -> 0x4efa0
							// 0x4efa0
							if (v18 == 0) {
								goto lab_0x4efa8_2;
							}
							goto lab_0x4efa0_3;
						}
					} else {
						// 0x4ef94
						v20 = v24;
						v21 = v25;
						// branch -> 0x4ef74
						continue;
					}
				}
			} else {
				// 0x4ef64
				v19 = v12 - v16;
				v18 = v16 + v11;
				// branch -> 0x4efa0
				goto lab_0x4efa0_2;
			}
			// 0x4efa0
			if (v18 == 0) {
				goto lab_0x4efa8_2;
			}
			goto lab_0x4efa0_3;
		}
	}
}

// Address range: 0x4efd0 - 0x4f000
int32_t CelDrawHdrClrHL(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = &a1; // 0x4efe4
	g39 = v1;
	int32_t result = CelDrawHdrClrHL_part((char)v1); // 0x4efec
	return result;
}

// Address range: 0x4f000 - 0x4f170
int32_t CelDrawHdrClrHL_part(char a1)
{
	int32_t v1 = g10; // 0x4f004
	int32_t v2 = g39; // 0x4f008
	g33 = v2;
	g36 = *(int32_t *)(g23 - 0x7808);
	g31 = a1;
	g30 = *(int32_t *)(g23 - 0x7804);
	g32 = g37;
	g26 = g38;
	g27 = g40;
	g35 = g41;
	g28 = g42;
	g29 = g13;
	g34 = v2;
	int32_t v3 = function_c9b28(); // 0x4f03c
	int32_t result;                // 0x4f158
	if (v3 == 0 || *(int32_t *)g30 == 0) {
		// 0x4f154
		result = function_c9b70((int32_t *)g33);
		g10 = v1;
		return result;
	}
	// 0x4f058
	int32_t v4;                                          // bp-56
	int32_t v5 = function_4d7e8(v3, g27, g28, g29, &v4); // 0x4f068
	if (v5 == 0) {
		// 0x4f154
		result = function_c9b70((int32_t *)g33);
		g10 = v1;
		return result;
	}
	int32_t v6 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 4 * (g26 + -16 * g28)); // 0x4f08c
	int32_t v7 = v6 + *(int32_t *)g30 + g32;                                       // 0x4f09c
	int32_t v8 = v5;                                                               // 0x4f0a43
	// branch -> 0x4f0a0
	while (true) {
		int32_t v9 = g35; // 0x4f0c4
		int32_t v10 = v7; // 0x4f0e0
		int32_t v11 = v8; // 0x4f0a4
		// branch -> 0x4f0a4
		while (true) {
			char v12 = *(char *)v11; // 0x4f0a4
			int32_t v13 = v11 + 1;   // 0x4f0a8
			int32_t v14 = v13;       // r3
			int32_t v15 = v12;       // 0x4f0ac
			int32_t v16 = v15;       // r9
			int32_t v17;             // 0x4f140
			int32_t v18;             // 0x4f14c
			if (v12 > -1) {
				uint32_t v19 = *(int32_t *)g36; // 0x4f0c0
				int32_t v20;                    // 0x4f10c
				if (v10 < v19) {
					// 0x4f0dc
					if (v10 < v19 - 768) {
						int32_t v21 = v15; // 0x4f10817
						int32_t v22 = v10; // 0x4f0f8
						int32_t v23 = v13; // 0x4f0e8
						while (true) {
							int32_t v24 = v22; // 0x4f10c
							int32_t v25 = v21; // 0x4f108
							if (*(char *)v23 != 0) {
								// 0x4f0f8
								*(char *)(v22 - 768) = (char)g31;
								*(char *)(v7 - 1) = (char)g31;
								*(char *)(v7 + 1) = (char)g31;
								*(char *)(v7 + 768) = (char)g31;
								v24 = v7;
								v25 = v16;
								// branch -> 0x4f108
							}
							int32_t v26 = v25 - 1; // 0x4f108
							v16 = v26;
							v20 = v24 + 1;
							v7 = v20;
							if (v26 != 0) {
								// 0x4f108
								v21 = v26;
								v22 = v20;
								v23++;
								// branch -> 0x4f0e8
								continue;
							}
						}
					} else {
						int32_t v27 = v15; // 0x4f13412
						int32_t v28 = v10; // 0x4f128
						int32_t v29 = v13; // 0x4f118
						while (true) {
							// 0x4f118
							v14 = v29 + 1;
							int32_t v30 = v28; // 0x4f138
							int32_t v31 = v27; // 0x4f134
							if (*(char *)v29 != 0) {
								// 0x4f128
								*(char *)(v28 - 768) = (char)g31;
								*(char *)(v7 - 1) = (char)g31;
								*(char *)(v7 + 1) = (char)g31;
								v30 = v7;
								v31 = v16;
								// branch -> 0x4f134
							}
							int32_t v32 = v31 - 1; // 0x4f134
							v16 = v32;
							int32_t v33 = v30 + 1; // 0x4f138
							v7 = v33;
							if (v32 != 0) {
								// 0x4f134
								v27 = v32;
								v28 = v33;
								v29 = v14;
								// branch -> 0x4f118
								continue;
							} else {
								v20 = v33;
							}
						}
					}
				lab_0x4f140:
					// 0x4f140
					v18 = v20;
					v17 = v9 - v15;
					// branch -> 0x4f140
				lab_0x4f140_3:
					// 0x4f140
					if (v17 == 0) {
					lab_0x4f148:;
						int32_t v34 = v14; // 0x4f148
						if (v4 + v5 == v34) {
							// 0x4f154
							result = function_c9b70((int32_t *)g33);
							g10 = v1;
							return result;
						}
						// 0x4f148
						v7 = v18 - (g35 + 768);
						v8 = v34;
						// branch -> 0x4f0a0
						break;
					} else {
					lab_0x4f140_4:
						// 0x4f140
						v9 = v17;
						v10 = v18;
						v11 = v14;
						// branch -> 0x4f0a4
						continue;
					}
				} else {
					// 0x4f0d0
					v14 = v15 + v13;
					int32_t v35 = v15 + v10; // 0x4f0d4
					v7 = v35;
					v20 = v35;
					// branch -> 0x4f140
					goto lab_0x4f140;
				}
			} else {
				int32_t v36 = v10 - v15; // 0x4f0b4
				v7 = v36;
				v18 = v36;
				v17 = v15 + v9;
				// branch -> 0x4f140
				goto lab_0x4f140_3;
			}
		}
	}
}

// Address range: 0x4f170 - 0x4f1cc
int32_t ENG_set_pixel(int32_t result, int32_t a2, char a3)
{
	// 0x4f170
	if (a2 < 0 || a2 >= 640) {
		// bb
		return result;
	}
	// 0x4f184
	int32_t result2; // 0x4f1b8
	if (result >= 64) {
		// 0x4f18c
		if (result < 704) {
			int32_t v1 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 4 * a2); // 0x4f1a4
			result2 = *(int32_t *)*(int32_t *)(g23 - 0x7804) + v1 + result;
			if (result2 < *(int32_t *)*(int32_t *)(g23 - 0x7808)) {
				// 0x4f1c4
				*(char *)result2 = a3;
				return result2;
			}
		} else {
			result2 = result;
		}
	} else {
		result2 = result;
	}
	// bb
	return result2;
}

// Address range: 0x4f1cc - 0x4f29c
int32_t engine_draw_pixel(int32_t a1, uint32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7698);             // 0x4f1d8
	int32_t v2 = *(int32_t *)(g23 - 0x7804);             // 0x4f1e0
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x729c); // 0x4f234
	int32_t result2;
	uint32_t v4;    // 0x4f294
	int32_t v5;     // 0x4f27c
	int32_t result; // 0x4f28c
	if (*(int32_t *)*(int32_t *)(g23 - 0x7298) == 0) {
		// 0x4f234
		if (v3 == 0) {
			// 0x4f268
			v4 = *(int32_t *)(v1 + 4 * a2) + a1 + *(int32_t *)v2;
			// branch -> 0x4f27c
			// 0x4f27c
			v5 = *(int32_t *)(g23 - 0x7808);
			if (v4 < *(int32_t *)v5) {
				// 0x4f28c
				result = *(int32_t *)(g23 - 0x72a0);
				*(char *)v4 = *(char *)result;
				return result;
			}
			result2 = v5;
		} else {
			// 0x4f240
			if (a2 >= 0) {
				// 0x4f248
				if (a2 < 640) {
					// 0x4f254
					if (a1 >= 64) {
						// 0x4f25c
						if (a1 < 704) {
							// 0x4f268
							v4 = *(int32_t *)(v1 + 4 * a2) + a1 + *(int32_t *)v2;
							// branch -> 0x4f27c
							// 0x4f27c
							v5 = *(int32_t *)(g23 - 0x7808);
							if (v4 < *(int32_t *)v5) {
								// 0x4f28c
								result = *(int32_t *)(g23 - 0x72a0);
								*(char *)v4 = *(char *)result;
								return result;
							}
							result2 = v5;
						} else {
							result2 = a1;
						}
					} else {
						result2 = a1;
					}
				} else {
					result2 = a1;
				}
			} else {
				result2 = a1;
			}
		}
		// 0x4f250
		return result2;
	}
	// 0x4f1e8
	if (v3 == 0) {
		// 0x4f21c
		v4 = *(int32_t *)(v1 + 4 * a1) + a2 + *(int32_t *)v2;
		// branch -> 0x4f27c
		// 0x4f27c
		v5 = *(int32_t *)(g23 - 0x7808);
		if (v4 < *(int32_t *)v5) {
			// 0x4f28c
			result = *(int32_t *)(g23 - 0x72a0);
			*(char *)v4 = *(char *)result;
			return result;
		}
		result2 = v5;
	} else {
		// 0x4f1f4
		if (a1 >= 0) {
			// 0x4f1fc
			if (a1 < 640) {
				// 0x4f208
				if (a2 >= 64) {
					// 0x4f210
					if (a2 < 704) {
						// 0x4f21c
						v4 = *(int32_t *)(v1 + 4 * a1) + a2 + *(int32_t *)v2;
						// branch -> 0x4f27c
						// 0x4f27c
						v5 = *(int32_t *)(g23 - 0x7808);
						if (v4 < *(int32_t *)v5) {
							// 0x4f28c
							result = *(int32_t *)(g23 - 0x72a0);
							*(char *)v4 = *(char *)result;
							return result;
						}
						result2 = v5;
					} else {
						result2 = a1;
					}
				} else {
					result2 = a1;
				}
			} else {
				result2 = a1;
			}
		} else {
			result2 = a1;
		}
	}
	// 0x4f250
	return result2;
}

// Address range: 0x4f29c - 0x4f844
int32_t DrawLine(int32_t a1, int32_t a2, int32_t a3, int32_t a4, char a5)
{
	int32_t v1 = g10;                        // 0x4f2a0
	int32_t v2 = *(int32_t *)(g23 - 0x729c); // r9
	*(char *)*(int32_t *)(g23 - 0x72a0) = (char)(int32_t)a5;
	int32_t v3 = *(int32_t *)(g23 - 0x7298); // r7
	*(int32_t *)v2 = 0;
	int32_t v4;  // r22
	int32_t v5;  // r23
	int32_t v6;  // r24
	int32_t v7;  // r25
	int32_t v8;  // r29
	int32_t v9;  // r30
	int32_t v10; // r31
	int32_t v11;
	int32_t v12;
	int32_t v13;
	int32_t v14;
	int32_t v15;
	int32_t v16;
	int32_t v17;
	int32_t v18;
	int32_t v19;     // 0x4f2dc
	int32_t v20;     // 0x4f2f4
	int32_t v21;     // 0x4f30c
	int32_t v22;     // 0x4f324
	int32_t v23;     // 0x4f33c
	int32_t v24;     // 0x4f388
	int32_t v25;     // 0x4f38c
	int32_t v26;     // 0x4f3d4
	int32_t v27;     // 0x4f408
	int32_t v28;     // 0x4f40c
	int32_t v29;     // 0x4f47c
	int32_t v30;     // 0x4f538
	int32_t v31;     // 0x4f550
	int32_t v32;     // 0x4f56c
	int32_t v33;     // 0x4f584
	int32_t v34;     // 0x4f5a0
	int32_t v35;     // 0x4f5d0
	int32_t v36;     // 0x4f5e8
	int32_t v37;     // 0x4f680
	int32_t v38;     // 0x4f740
	int32_t v39;     // 0x4f75c
	int32_t v40;     // 0x4f77c
	int32_t v41;     // 0x4f794
	int32_t v42;     // 0x4f7b0
	int32_t v43;     // 0x4f7e0
	int32_t v44;     // 0x4f7f8
	int32_t result2; // 0x4f840
	int32_t v45;     // 0x4f84046
	int32_t v46;     // 0x4f84047
	int32_t v47;     // 0x4f84048
	int32_t v48;     // 0x4f84050
	int32_t v49;     // 0x4f84051
	int32_t v50;     // 0x4f84052
	int32_t v51;     // 0x4f324
	int32_t v52;     // 0x4f374
	int32_t v53;     // 0x4f390
	int32_t v54;     // 0x4f3d4
	int32_t result4; // 0x4f408
	int32_t v55;     // 0x4f40c
	int32_t v56;     // 0x4f430
	int32_t v57;     // 0x4f528
	int32_t v58;     // 0x4f540
	int32_t v59;     // 0x4f558
	int32_t v60;     // 0x4f574
	int32_t v61;     // 0x4f590
	int32_t v62;     // 0x4f5a8
	int32_t v63;     // 0x4f5c0
	int32_t v64;     // 0x4f5d8
	int32_t v65;     // 0x4f5f4
	int32_t v66;     // 0x4f610
	int32_t v67;     // 0x4f624
	int32_t v68;     // 0x4f730
	int32_t v69;     // 0x4f74c
	int32_t v70;     // 0x4f768
	int32_t v71;     // 0x4f784
	int32_t v72;     // 0x4f7a0
	int32_t v73;     // 0x4f7b8
	int32_t v74;     // 0x4f7d0
	int32_t v75;     // 0x4f7e8
	int32_t v76;     // 0x4f80c
	int32_t v77;     // 0x4f820
	int32_t v78;     // 0x4f324
	int32_t v79;     // 0x4f338
	int32_t v80;     // 0x4f33c
	int32_t v81;     // 0x4f350
	int32_t v82;     // 0x4f410
	int32_t v83;     // 0x4f420
	int32_t v84;     // 0x4f534
	int32_t v85;     // 0x4f580
	int32_t v86;     // 0x4f58c
	int32_t v87;     // 0x4f5bc
	int32_t v88;     // 0x4f5cc
	int32_t v89;     // 0x4f608
	int32_t v90;     // 0x4f614
	int32_t v91;     // 0x4f72c
	int32_t v92;     // 0x4f73c
	int32_t v93;     // 0x4f748
	int32_t v94;     // 0x4f790
	int32_t v95;     // 0x4f79c
	int32_t v96;     // 0x4f7cc
	int32_t v97;     // 0x4f7dc
	if (a1 >= 64) {
		// 0x4f2cc
		if (a1 >= 704) {
			// 0x4f2d4
			*(int32_t *)v2 = 1;
			// branch -> 0x4f2dc
		}
		// 0x4f2dc
		v19 = a3;
		if (v19 < 64) {
			// 0x4f2ec
			*(int32_t *)v2 = 1;
			// branch -> 0x4f2f4
		} else {
			// 0x4f2e4
			if (v19 >= 704) {
				// 0x4f2ec
				*(int32_t *)v2 = 1;
				// branch -> 0x4f2f4
			}
		}
		// 0x4f2f4
		v20 = a2;
		if (v20 < 160) {
			// 0x4f304
			*(int32_t *)v2 = 1;
			// branch -> 0x4f30c
		} else {
			// 0x4f2fc
			if (v20 >= 512) {
				// 0x4f304
				*(int32_t *)v2 = 1;
				// branch -> 0x4f30c
			}
		}
		// 0x4f30c
		v21 = a4;
		if (v21 < 160) {
			// 0x4f31c
			*(int32_t *)v2 = 1;
			v52 = a4;
			// branch -> 0x4f324
		} else {
			// 0x4f314
			if (v21 >= 512) {
				// 0x4f31c
				*(int32_t *)v2 = 1;
				v52 = a4;
				// branch -> 0x4f324
			} else {
				v52 = v21;
			}
		}
		// 0x4f324
		v22 = a1;
		v51 = a3;
		v78 = v51 - v22;
		v17 = v78 >> 31 | 1;
		v79 = v17 * v78;
		v10 = v79;
		v23 = a2;
		v80 = v52 - v23;
		v18 = v80 >> 31 | 1;
		v81 = v18 * v80;
		v9 = v81;
		v5 = v17 == v18 ? 1 : -1;
		if (v81 > v79) {
			// 0x4f370
			*(int32_t *)v3 = 1;
			v24 = a4;
			v25 = v9;
			v9 = v81 ^ v79 ^ v25;
			v53 = v22;
			v10 = v25;
			v26 = v25;
			v12 = v53;
			v14 = v51 ^ v52 ^ v24;
			v13 = v24;
			v11 = v53 ^ v23 ^ v22;
			// branch -> 0x4f3a8
		} else {
			// 0x4f3a0
			*(int32_t *)v3 = 0;
			v26 = v10;
			v12 = a2;
			v14 = a4;
			v13 = a3;
			v11 = a1;
			// branch -> 0x4f3a8
		}
		// 0x4f3a8
		v16 = v11 > v13 ? v13 : v11;
		g33 = v16;
		v15 = v11 > v13 ? v14 : v12;
		g32 = v15;
		g29 = v11 > v13 ? v11 : v13;
		v6 = v11 > v13 ? v12 : v14;
		v54 = v26 - 1;
		g31 = v54 / 4;
		g30 = v54;
		engine_draw_pixel(v16, v15);
		engine_draw_pixel(g29, v6);
		v27 = v10;
		result4 = 2 * v27;
		v28 = v9;
		v55 = 4 * v28;
		v82 = v55 - result4;
		v4 = v82;
		if (v82 > -1) {
			// 0x4f608
			v89 = v28 - v27;
			g25 = 2 * v89;
			v66 = 4 * v89;
			g35 = v66;
			v90 = v66 + v27;
			g36 = v90;
			g24 = 0;
			v40 = v90;
			if (g31 > 0) {
				v37 = v90;
				int32_t result; // 0x4f84049
				while (true) {
					// 0x4f620
					v67 = g33 + 1;
					v8 = v67;
					v7 = g29 - 1;
					int32_t v98;
					if (v37 < 1) {
					lab_0x4f680_4:;
						// 0x4f680
						int32_t v99;
						if (v37 < g25) {
							// 0x4f688
							engine_draw_pixel(v67, g32);
							int32_t v100 = v5 + g32; // 0x4f694
							g32 = v100;
							int32_t v101 = v8 + 1; // 0x4f698
							g33 = v101;
							engine_draw_pixel(v101, v100);
							engine_draw_pixel(v7, v6);
							int32_t v102 = v6 - v5; // 0x4f6b4
							v6 = v102;
							int32_t v103 = v7 - 1; // 0x4f6b8
							g29 = v103;
							v99 = engine_draw_pixel(v103, v102);
							// branch -> 0x4f70c
						} else {
							int32_t v104 = v5 + g32; // 0x4f6cc
							g32 = v104;
							engine_draw_pixel(v67, v104);
							int32_t v105 = v8 + 1; // 0x4f6dc
							g33 = v105;
							engine_draw_pixel(v105, g32);
							int32_t v106 = v6 - v5; // 0x4f6ec
							v6 = v106;
							int32_t v107 = v7; // 0x4f6f0
							engine_draw_pixel(v107, v106);
							int32_t v108 = v107 - 1; // 0x4f6fc
							g29 = v108;
							v99 = engine_draw_pixel(v108, v6);
							// branch -> 0x4f70c
						}
						// 0x4f70c
						result = v99;
						v98 = v4 + g36;
						// branch -> 0x4f710
					} else {
					lab_0x4f630_4:;
						int32_t v109 = v5 + g32; // 0x4f630
						engine_draw_pixel(v67, v109);
						int32_t v110 = v5 + v109; // 0x4f640
						g32 = v110;
						int32_t v111 = v8 + 1; // 0x4f644
						g33 = v111;
						engine_draw_pixel(v111, v110);
						int32_t v112 = v6 - v5; // 0x4f654
						engine_draw_pixel(v7, v112);
						int32_t v113 = v112 - v5; // 0x4f664
						v6 = v113;
						int32_t v114 = v7 - 1; // 0x4f668
						g29 = v114;
						result = engine_draw_pixel(v114, v113);
						v98 = g35 + g36;
						// branch -> 0x4f710
					}
					// 0x4f710
					g36 = v98;
					int32_t v115 = g24 + 1; // 0x4f710
					g24 = v115;
					if (v115 >= g31) {
						v40 = v98;
						// break -> 0x4f71c
						break;
					}
					v37 = v98;
					// continue -> 0x4f620
				}
				// 0x4f71c
				if (g30 == 0) {
					// 0x4f830
					g10 = v1;
					return result;
				}
				// 0x4f724
				if (v40 >= 1) {
					// 0x4f72c
					v91 = v5 + g32;
					g32 = v91;
					v68 = g33 + 1;
					g33 = v68;
					v92 = engine_draw_pixel(v68, v91);
					v38 = g30;
					v48 = v92;
					v39 = v38;
					if (v38 >= 2) {
						// 0x4f748
						v93 = v5 + g32;
						g32 = v93;
						v69 = g33 + 1;
						g33 = v69;
						v48 = engine_draw_pixel(v69, v93);
						v39 = g30;
						// branch -> 0x4f75c
					}
					// 0x4f75c
					if (v39 >= 3) {
						// 0x4f764
						v70 = g29 - 1;
						g29 = v70;
						result2 = engine_draw_pixel(v70, v6 - v5);
						// branch -> 0x4f830
					} else {
						result2 = v48;
					}
					// 0x4f830
					g10 = v1;
					return result2;
				}
				// 0x4f77c
				if (v40 < g25) {
					// 0x4f784
					v71 = g33 + 1;
					g33 = v71;
					v94 = engine_draw_pixel(v71, g32);
					v41 = g30;
					v49 = v94;
					v42 = v41;
					if (v41 >= 2) {
						// 0x4f79c
						v95 = v5 + g32;
						g32 = v95;
						v72 = g33 + 1;
						g33 = v72;
						v49 = engine_draw_pixel(v72, v95);
						v42 = g30;
						// branch -> 0x4f7b0
					}
					// 0x4f7b0
					if (v42 >= 3) {
						// 0x4f7b8
						v73 = g29 - 1;
						g29 = v73;
						result2 = engine_draw_pixel(v73, v6);
						// branch -> 0x4f830
					} else {
						result2 = v49;
					}
				} else {
					// 0x4f7cc
					v96 = v5 + g32;
					g32 = v96;
					v74 = g33 + 1;
					g33 = v74;
					v97 = engine_draw_pixel(v74, v96);
					v43 = g30;
					v50 = v97;
					v44 = v43;
					if (v43 >= 2) {
						// 0x4f7e8
						v75 = g33 + 1;
						g33 = v75;
						v50 = engine_draw_pixel(v75, g32);
						v44 = g30;
						// branch -> 0x4f7f8
					}
					// 0x4f7f8
					if (v44 >= 3) {
						// 0x4f800
						if (g36 > g25) {
							// 0x4f808
							v76 = g29 - 1;
							g29 = v76;
							result2 = engine_draw_pixel(v76, v6 - v5);
							// branch -> 0x4f830
						} else {
							// 0x4f820
							v77 = g29 - 1;
							g29 = v77;
							result2 = engine_draw_pixel(v77, v6);
							// branch -> 0x4f830
						}
						// 0x4f830
						g10 = v1;
						return result2;
					}
					result2 = v50;
				}
				// 0x4f830
				g10 = v1;
				return result2;
			}
			// 0x4f71c
			if (g30 != 0) {
				// 0x4f724
				if (v40 >= 1) {
					// 0x4f72c
					v91 = v5 + g32;
					g32 = v91;
					v68 = g33 + 1;
					g33 = v68;
					v92 = engine_draw_pixel(v68, v91);
					v38 = g30;
					v48 = v92;
					v39 = v38;
					if (v38 >= 2) {
						// 0x4f748
						v93 = v5 + g32;
						g32 = v93;
						v69 = g33 + 1;
						g33 = v69;
						v48 = engine_draw_pixel(v69, v93);
						v39 = g30;
						// branch -> 0x4f75c
					}
					// 0x4f75c
					if (v39 >= 3) {
						// 0x4f764
						v70 = g29 - 1;
						g29 = v70;
						result2 = engine_draw_pixel(v70, v6 - v5);
						// branch -> 0x4f830
					} else {
						result2 = v48;
					}
					// 0x4f830
					g10 = v1;
					return result2;
				}
				// 0x4f77c
				if (v40 < g25) {
					// 0x4f784
					v71 = g33 + 1;
					g33 = v71;
					v94 = engine_draw_pixel(v71, g32);
					v41 = g30;
					v49 = v94;
					v42 = v41;
					if (v41 >= 2) {
						// 0x4f79c
						v95 = v5 + g32;
						g32 = v95;
						v72 = g33 + 1;
						g33 = v72;
						v49 = engine_draw_pixel(v72, v95);
						v42 = g30;
						// branch -> 0x4f7b0
					}
					// 0x4f7b0
					if (v42 >= 3) {
						// 0x4f7b8
						v73 = g29 - 1;
						g29 = v73;
						result2 = engine_draw_pixel(v73, v6);
						// branch -> 0x4f830
					} else {
						result2 = v49;
					}
				} else {
					// 0x4f7cc
					v96 = v5 + g32;
					g32 = v96;
					v74 = g33 + 1;
					g33 = v74;
					v97 = engine_draw_pixel(v74, v96);
					v43 = g30;
					v50 = v97;
					v44 = v43;
					if (v43 >= 2) {
						// 0x4f7e8
						v75 = g33 + 1;
						g33 = v75;
						v50 = engine_draw_pixel(v75, g32);
						v44 = g30;
						// branch -> 0x4f7f8
					}
					// 0x4f7f8
					if (v44 >= 3) {
						// 0x4f800
						if (g36 > g25) {
							// 0x4f808
							v76 = g29 - 1;
							g29 = v76;
							result2 = engine_draw_pixel(v76, v6 - v5);
							// branch -> 0x4f830
						} else {
							// 0x4f820
							v77 = g29 - 1;
							g29 = v77;
							result2 = engine_draw_pixel(v77, v6);
							// branch -> 0x4f830
						}
						// 0x4f830
						g10 = v1;
						return result2;
					}
					result2 = v50;
				}
				// 0x4f830
				g10 = v1;
				return result2;
			}
		} else {
			// 0x4f418
			g25 = 2 * v28;
			g35 = v55;
			v83 = v55 - v27;
			g24 = v83;
			g36 = 0;
			v32 = v83;
			if (g31 > 0) {
				v29 = v83;
				int32_t result3; // 0x4f84045
				while (true) {
					// 0x4f42c
					v56 = g33 + 1;
					v8 = v56;
					v7 = g29 - 1;
					int32_t v116;
					if (v29 > -1) {
					lab_0x4f47c_4:;
						// 0x4f47c
						int32_t v117;
						if (v29 < g25) {
							// 0x4f484
							engine_draw_pixel(v56, g32);
							int32_t v118 = v5 + g32; // 0x4f490
							g32 = v118;
							int32_t v119 = v8 + 1; // 0x4f494
							g33 = v119;
							engine_draw_pixel(v119, v118);
							engine_draw_pixel(v7, v6);
							int32_t v120 = v6 - v5; // 0x4f4b0
							v6 = v120;
							int32_t v121 = v7 - 1; // 0x4f4b4
							g29 = v121;
							v117 = engine_draw_pixel(v121, v120);
							// branch -> 0x4f508
						} else {
							int32_t v122 = v5 + g32; // 0x4f4c8
							g32 = v122;
							engine_draw_pixel(v56, v122);
							int32_t v123 = v8 + 1; // 0x4f4d8
							g33 = v123;
							engine_draw_pixel(v123, g32);
							int32_t v124 = v6 - v5; // 0x4f4e8
							v6 = v124;
							int32_t v125 = v7; // 0x4f4ec
							engine_draw_pixel(v125, v124);
							int32_t v126 = v125 - 1; // 0x4f4f8
							g29 = v126;
							v117 = engine_draw_pixel(v126, v6);
							// branch -> 0x4f508
						}
						// 0x4f508
						result3 = v117;
						v116 = v4 + g24;
						// branch -> 0x4f50c
					} else {
					lab_0x4f43c_4:
						// 0x4f43c
						engine_draw_pixel(v56, g32);
						int32_t v127 = v8 + 1; // 0x4f448
						g33 = v127;
						engine_draw_pixel(v127, g32);
						int32_t v128 = v7; // 0x4f458
						engine_draw_pixel(v128, v6);
						int32_t v129 = v128 - 1; // 0x4f464
						g29 = v129;
						result3 = engine_draw_pixel(v129, v6);
						v116 = g35 + g24;
						// branch -> 0x4f50c
					}
					// 0x4f50c
					g24 = v116;
					int32_t v130 = g36 + 1; // 0x4f50c
					g36 = v130;
					if (v130 >= g31) {
						v32 = v116;
						// break -> 0x4f518
						break;
					}
					v29 = v116;
					// continue -> 0x4f42c
				}
				// 0x4f518
				if (g30 == 0) {
					// 0x4f830
					g10 = v1;
					return result3;
				}
				// 0x4f520
				if (v32 <= -1) {
					// 0x4f528
					v57 = g33 + 1;
					g33 = v57;
					v84 = engine_draw_pixel(v57, g32);
					v30 = g30;
					v45 = v84;
					v31 = v30;
					if (v30 >= 2) {
						// 0x4f540
						v58 = g33 + 1;
						g33 = v58;
						v45 = engine_draw_pixel(v58, g32);
						v31 = g30;
						// branch -> 0x4f550
					}
					// 0x4f550
					if (v31 >= 3) {
						// 0x4f558
						v59 = g29 - 1;
						g29 = v59;
						result2 = engine_draw_pixel(v59, v6);
						// branch -> 0x4f830
					} else {
						result2 = v45;
					}
					// 0x4f830
					g10 = v1;
					return result2;
				}
				// 0x4f56c
				if (v32 < g25) {
					// 0x4f574
					v60 = g33 + 1;
					g33 = v60;
					v85 = engine_draw_pixel(v60, g32);
					v33 = g30;
					v46 = v85;
					v34 = v33;
					if (v33 >= 2) {
						// 0x4f58c
						v86 = v5 + g32;
						g32 = v86;
						v61 = g33 + 1;
						g33 = v61;
						v46 = engine_draw_pixel(v61, v86);
						v34 = g30;
						// branch -> 0x4f5a0
					}
					// 0x4f5a0
					if (v34 >= 3) {
						// 0x4f5a8
						v62 = g29 - 1;
						g29 = v62;
						result2 = engine_draw_pixel(v62, v6);
						// branch -> 0x4f830
					} else {
						result2 = v46;
					}
				} else {
					// 0x4f5bc
					v87 = v5 + g32;
					g32 = v87;
					v63 = g33 + 1;
					g33 = v63;
					v88 = engine_draw_pixel(v63, v87);
					v35 = g30;
					v47 = v88;
					v36 = v35;
					if (v35 >= 2) {
						// 0x4f5d8
						v64 = g33 + 1;
						g33 = v64;
						v47 = engine_draw_pixel(v64, g32);
						v36 = g30;
						// branch -> 0x4f5e8
					}
					// 0x4f5e8
					if (v36 >= 3) {
						// 0x4f5f0
						v65 = g29 - 1;
						g29 = v65;
						result2 = engine_draw_pixel(v65, v6 - v5);
						// branch -> 0x4f830
					} else {
						result2 = v47;
					}
				}
				// 0x4f830
				g10 = v1;
				return result2;
			}
			// 0x4f518
			if (g30 != 0) {
				// 0x4f520
				if (v32 <= -1) {
					// 0x4f528
					v57 = g33 + 1;
					g33 = v57;
					v84 = engine_draw_pixel(v57, g32);
					v30 = g30;
					v45 = v84;
					v31 = v30;
					if (v30 >= 2) {
						// 0x4f540
						v58 = g33 + 1;
						g33 = v58;
						v45 = engine_draw_pixel(v58, g32);
						v31 = g30;
						// branch -> 0x4f550
					}
					// 0x4f550
					if (v31 >= 3) {
						// 0x4f558
						v59 = g29 - 1;
						g29 = v59;
						result2 = engine_draw_pixel(v59, v6);
						// branch -> 0x4f830
					} else {
						result2 = v45;
					}
					// 0x4f830
					g10 = v1;
					return result2;
				}
				// 0x4f56c
				if (v32 < g25) {
					// 0x4f574
					v60 = g33 + 1;
					g33 = v60;
					v85 = engine_draw_pixel(v60, g32);
					v33 = g30;
					v46 = v85;
					v34 = v33;
					if (v33 >= 2) {
						// 0x4f58c
						v86 = v5 + g32;
						g32 = v86;
						v61 = g33 + 1;
						g33 = v61;
						v46 = engine_draw_pixel(v61, v86);
						v34 = g30;
						// branch -> 0x4f5a0
					}
					// 0x4f5a0
					if (v34 >= 3) {
						// 0x4f5a8
						v62 = g29 - 1;
						g29 = v62;
						result2 = engine_draw_pixel(v62, v6);
						// branch -> 0x4f830
					} else {
						result2 = v46;
					}
				} else {
					// 0x4f5bc
					v87 = v5 + g32;
					g32 = v87;
					v63 = g33 + 1;
					g33 = v63;
					v88 = engine_draw_pixel(v63, v87);
					v35 = g30;
					v47 = v88;
					v36 = v35;
					if (v35 >= 2) {
						// 0x4f5d8
						v64 = g33 + 1;
						g33 = v64;
						v47 = engine_draw_pixel(v64, g32);
						v36 = g30;
						// branch -> 0x4f5e8
					}
					// 0x4f5e8
					if (v36 >= 3) {
						// 0x4f5f0
						v65 = g29 - 1;
						g29 = v65;
						result2 = engine_draw_pixel(v65, v6 - v5);
						// branch -> 0x4f830
					} else {
						result2 = v47;
					}
				}
				// 0x4f830
				g10 = v1;
				return result2;
			}
		}
		// 0x4f830
		g10 = v1;
		return result4;
	}
	// 0x4f2d4
	*(int32_t *)v2 = 1;
	// branch -> 0x4f2dc
	// 0x4f2dc
	v19 = a3;
	if (v19 >= 64) {
		// 0x4f2e4
		if (v19 >= 704) {
			// 0x4f2ec
			*(int32_t *)v2 = 1;
			// branch -> 0x4f2f4
		}
		// 0x4f2f4
		v20 = a2;
		if (v20 < 160) {
			// 0x4f304
			*(int32_t *)v2 = 1;
			// branch -> 0x4f30c
		} else {
			// 0x4f2fc
			if (v20 >= 512) {
				// 0x4f304
				*(int32_t *)v2 = 1;
				// branch -> 0x4f30c
			}
		}
		// 0x4f30c
		v21 = a4;
		if (v21 < 160) {
			// 0x4f31c
			*(int32_t *)v2 = 1;
			v52 = a4;
			// branch -> 0x4f324
		} else {
			// 0x4f314
			if (v21 >= 512) {
				// 0x4f31c
				*(int32_t *)v2 = 1;
				v52 = a4;
				// branch -> 0x4f324
			} else {
				v52 = v21;
			}
		}
		// 0x4f324
		v22 = a1;
		v51 = a3;
		v78 = v51 - v22;
		v17 = v78 >> 31 | 1;
		v79 = v17 * v78;
		v10 = v79;
		v23 = a2;
		v80 = v52 - v23;
		v18 = v80 >> 31 | 1;
		v81 = v18 * v80;
		v9 = v81;
		v5 = v17 == v18 ? 1 : -1;
		if (v81 > v79) {
			// 0x4f370
			*(int32_t *)v3 = 1;
			v24 = a4;
			v25 = v9;
			v9 = v81 ^ v79 ^ v25;
			v53 = v22;
			v10 = v25;
			v26 = v25;
			v12 = v53;
			v14 = v51 ^ v52 ^ v24;
			v13 = v24;
			v11 = v53 ^ v23 ^ v22;
			// branch -> 0x4f3a8
		} else {
			// 0x4f3a0
			*(int32_t *)v3 = 0;
			v26 = v10;
			v12 = a2;
			v14 = a4;
			v13 = a3;
			v11 = a1;
			// branch -> 0x4f3a8
		}
		// 0x4f3a8
		v16 = v11 > v13 ? v13 : v11;
		g33 = v16;
		v15 = v11 > v13 ? v14 : v12;
		g32 = v15;
		g29 = v11 > v13 ? v11 : v13;
		v6 = v11 > v13 ? v12 : v14;
		v54 = v26 - 1;
		g31 = v54 / 4;
		g30 = v54;
		engine_draw_pixel(v16, v15);
		engine_draw_pixel(g29, v6);
		v27 = v10;
		result4 = 2 * v27;
		v28 = v9;
		v55 = 4 * v28;
		v82 = v55 - result4;
		v4 = v82;
		if (v82 > -1) {
			// 0x4f608
			v89 = v28 - v27;
			g25 = 2 * v89;
			v66 = 4 * v89;
			g35 = v66;
			v90 = v66 + v27;
			g36 = v90;
			g24 = 0;
			v40 = v90;
			if (g31 > 0) {
				v37 = v90;
				while (true) {
					// 0x4f620
					v67 = g33 + 1;
					v8 = v67;
					v7 = g29 - 1;
					if (v37 < 1) {
						goto lab_0x4f680_4;
					}
					goto lab_0x4f630_4;
				}
			}
			// 0x4f71c
			if (g30 != 0) {
				// 0x4f724
				if (v40 >= 1) {
					// 0x4f72c
					v91 = v5 + g32;
					g32 = v91;
					v68 = g33 + 1;
					g33 = v68;
					v92 = engine_draw_pixel(v68, v91);
					v38 = g30;
					v48 = v92;
					v39 = v38;
					if (v38 >= 2) {
						// 0x4f748
						v93 = v5 + g32;
						g32 = v93;
						v69 = g33 + 1;
						g33 = v69;
						v48 = engine_draw_pixel(v69, v93);
						v39 = g30;
						// branch -> 0x4f75c
					}
					// 0x4f75c
					if (v39 >= 3) {
						// 0x4f764
						v70 = g29 - 1;
						g29 = v70;
						result2 = engine_draw_pixel(v70, v6 - v5);
						// branch -> 0x4f830
					} else {
						result2 = v48;
					}
					// 0x4f830
					g10 = v1;
					return result2;
				}
				// 0x4f77c
				if (v40 < g25) {
					// 0x4f784
					v71 = g33 + 1;
					g33 = v71;
					v94 = engine_draw_pixel(v71, g32);
					v41 = g30;
					v49 = v94;
					v42 = v41;
					if (v41 >= 2) {
						// 0x4f79c
						v95 = v5 + g32;
						g32 = v95;
						v72 = g33 + 1;
						g33 = v72;
						v49 = engine_draw_pixel(v72, v95);
						v42 = g30;
						// branch -> 0x4f7b0
					}
					// 0x4f7b0
					if (v42 >= 3) {
						// 0x4f7b8
						v73 = g29 - 1;
						g29 = v73;
						result2 = engine_draw_pixel(v73, v6);
						// branch -> 0x4f830
					} else {
						result2 = v49;
					}
				} else {
					// 0x4f7cc
					v96 = v5 + g32;
					g32 = v96;
					v74 = g33 + 1;
					g33 = v74;
					v97 = engine_draw_pixel(v74, v96);
					v43 = g30;
					v50 = v97;
					v44 = v43;
					if (v43 >= 2) {
						// 0x4f7e8
						v75 = g33 + 1;
						g33 = v75;
						v50 = engine_draw_pixel(v75, g32);
						v44 = g30;
						// branch -> 0x4f7f8
					}
					// 0x4f7f8
					if (v44 >= 3) {
						// 0x4f800
						if (g36 > g25) {
							// 0x4f808
							v76 = g29 - 1;
							g29 = v76;
							result2 = engine_draw_pixel(v76, v6 - v5);
							// branch -> 0x4f830
						} else {
							// 0x4f820
							v77 = g29 - 1;
							g29 = v77;
							result2 = engine_draw_pixel(v77, v6);
							// branch -> 0x4f830
						}
						// 0x4f830
						g10 = v1;
						return result2;
					}
					result2 = v50;
				}
				// 0x4f830
				g10 = v1;
				return result2;
			}
		} else {
			// 0x4f418
			g25 = 2 * v28;
			g35 = v55;
			v83 = v55 - v27;
			g24 = v83;
			g36 = 0;
			v32 = v83;
			if (g31 > 0) {
				v29 = v83;
				while (true) {
					// 0x4f42c
					v56 = g33 + 1;
					v8 = v56;
					v7 = g29 - 1;
					if (v29 > -1) {
						goto lab_0x4f47c_4;
					}
					goto lab_0x4f43c_4;
				}
			}
			// 0x4f518
			if (g30 != 0) {
				// 0x4f520
				if (v32 <= -1) {
					// 0x4f528
					v57 = g33 + 1;
					g33 = v57;
					v84 = engine_draw_pixel(v57, g32);
					v30 = g30;
					v45 = v84;
					v31 = v30;
					if (v30 >= 2) {
						// 0x4f540
						v58 = g33 + 1;
						g33 = v58;
						v45 = engine_draw_pixel(v58, g32);
						v31 = g30;
						// branch -> 0x4f550
					}
					// 0x4f550
					if (v31 >= 3) {
						// 0x4f558
						v59 = g29 - 1;
						g29 = v59;
						result2 = engine_draw_pixel(v59, v6);
						// branch -> 0x4f830
					} else {
						result2 = v45;
					}
					// 0x4f830
					g10 = v1;
					return result2;
				}
				// 0x4f56c
				if (v32 < g25) {
					// 0x4f574
					v60 = g33 + 1;
					g33 = v60;
					v85 = engine_draw_pixel(v60, g32);
					v33 = g30;
					v46 = v85;
					v34 = v33;
					if (v33 >= 2) {
						// 0x4f58c
						v86 = v5 + g32;
						g32 = v86;
						v61 = g33 + 1;
						g33 = v61;
						v46 = engine_draw_pixel(v61, v86);
						v34 = g30;
						// branch -> 0x4f5a0
					}
					// 0x4f5a0
					if (v34 >= 3) {
						// 0x4f5a8
						v62 = g29 - 1;
						g29 = v62;
						result2 = engine_draw_pixel(v62, v6);
						// branch -> 0x4f830
					} else {
						result2 = v46;
					}
				} else {
					// 0x4f5bc
					v87 = v5 + g32;
					g32 = v87;
					v63 = g33 + 1;
					g33 = v63;
					v88 = engine_draw_pixel(v63, v87);
					v35 = g30;
					v47 = v88;
					v36 = v35;
					if (v35 >= 2) {
						// 0x4f5d8
						v64 = g33 + 1;
						g33 = v64;
						v47 = engine_draw_pixel(v64, g32);
						v36 = g30;
						// branch -> 0x4f5e8
					}
					// 0x4f5e8
					if (v36 >= 3) {
						// 0x4f5f0
						v65 = g29 - 1;
						g29 = v65;
						result2 = engine_draw_pixel(v65, v6 - v5);
						// branch -> 0x4f830
					} else {
						result2 = v47;
					}
				}
				// 0x4f830
				g10 = v1;
				return result2;
			}
		}
		// 0x4f830
		g10 = v1;
		return result4;
	}
	// 0x4f2ec
	*(int32_t *)v2 = 1;
	// branch -> 0x4f2f4
	// 0x4f2f4
	v20 = a2;
	if (v20 >= 160) {
		// 0x4f2fc
		if (v20 >= 512) {
			// 0x4f304
			*(int32_t *)v2 = 1;
			// branch -> 0x4f30c
		}
		// 0x4f30c
		v21 = a4;
		if (v21 < 160) {
			// 0x4f31c
			*(int32_t *)v2 = 1;
			v52 = a4;
			// branch -> 0x4f324
		} else {
			// 0x4f314
			if (v21 >= 512) {
				// 0x4f31c
				*(int32_t *)v2 = 1;
				v52 = a4;
				// branch -> 0x4f324
			} else {
				v52 = v21;
			}
		}
		// 0x4f324
		v22 = a1;
		v51 = a3;
		v78 = v51 - v22;
		v17 = v78 >> 31 | 1;
		v79 = v17 * v78;
		v10 = v79;
		v23 = a2;
		v80 = v52 - v23;
		v18 = v80 >> 31 | 1;
		v81 = v18 * v80;
		v9 = v81;
		v5 = v17 == v18 ? 1 : -1;
		if (v81 > v79) {
			// 0x4f370
			*(int32_t *)v3 = 1;
			v24 = a4;
			v25 = v9;
			v9 = v81 ^ v79 ^ v25;
			v53 = v22;
			v10 = v25;
			v26 = v25;
			v12 = v53;
			v14 = v51 ^ v52 ^ v24;
			v13 = v24;
			v11 = v53 ^ v23 ^ v22;
			// branch -> 0x4f3a8
		} else {
			// 0x4f3a0
			*(int32_t *)v3 = 0;
			v26 = v10;
			v12 = a2;
			v14 = a4;
			v13 = a3;
			v11 = a1;
			// branch -> 0x4f3a8
		}
		// 0x4f3a8
		v16 = v11 > v13 ? v13 : v11;
		g33 = v16;
		v15 = v11 > v13 ? v14 : v12;
		g32 = v15;
		g29 = v11 > v13 ? v11 : v13;
		v6 = v11 > v13 ? v12 : v14;
		v54 = v26 - 1;
		g31 = v54 / 4;
		g30 = v54;
		engine_draw_pixel(v16, v15);
		engine_draw_pixel(g29, v6);
		v27 = v10;
		result4 = 2 * v27;
		v28 = v9;
		v55 = 4 * v28;
		v82 = v55 - result4;
		v4 = v82;
		if (v82 > -1) {
			// 0x4f608
			v89 = v28 - v27;
			g25 = 2 * v89;
			v66 = 4 * v89;
			g35 = v66;
			v90 = v66 + v27;
			g36 = v90;
			g24 = 0;
			v40 = v90;
			if (g31 > 0) {
				v37 = v90;
				while (true) {
					// 0x4f620
					v67 = g33 + 1;
					v8 = v67;
					v7 = g29 - 1;
					if (v37 < 1) {
						goto lab_0x4f680_4;
					}
					goto lab_0x4f630_4;
				}
			}
			// 0x4f71c
			if (g30 != 0) {
				// 0x4f724
				if (v40 >= 1) {
					// 0x4f72c
					v91 = v5 + g32;
					g32 = v91;
					v68 = g33 + 1;
					g33 = v68;
					v92 = engine_draw_pixel(v68, v91);
					v38 = g30;
					v48 = v92;
					v39 = v38;
					if (v38 >= 2) {
						// 0x4f748
						v93 = v5 + g32;
						g32 = v93;
						v69 = g33 + 1;
						g33 = v69;
						v48 = engine_draw_pixel(v69, v93);
						v39 = g30;
						// branch -> 0x4f75c
					}
					// 0x4f75c
					if (v39 >= 3) {
						// 0x4f764
						v70 = g29 - 1;
						g29 = v70;
						result2 = engine_draw_pixel(v70, v6 - v5);
						// branch -> 0x4f830
					} else {
						result2 = v48;
					}
					// 0x4f830
					g10 = v1;
					return result2;
				}
				// 0x4f77c
				if (v40 < g25) {
					// 0x4f784
					v71 = g33 + 1;
					g33 = v71;
					v94 = engine_draw_pixel(v71, g32);
					v41 = g30;
					v49 = v94;
					v42 = v41;
					if (v41 >= 2) {
						// 0x4f79c
						v95 = v5 + g32;
						g32 = v95;
						v72 = g33 + 1;
						g33 = v72;
						v49 = engine_draw_pixel(v72, v95);
						v42 = g30;
						// branch -> 0x4f7b0
					}
					// 0x4f7b0
					if (v42 >= 3) {
						// 0x4f7b8
						v73 = g29 - 1;
						g29 = v73;
						result2 = engine_draw_pixel(v73, v6);
						// branch -> 0x4f830
					} else {
						result2 = v49;
					}
				} else {
					// 0x4f7cc
					v96 = v5 + g32;
					g32 = v96;
					v74 = g33 + 1;
					g33 = v74;
					v97 = engine_draw_pixel(v74, v96);
					v43 = g30;
					v50 = v97;
					v44 = v43;
					if (v43 >= 2) {
						// 0x4f7e8
						v75 = g33 + 1;
						g33 = v75;
						v50 = engine_draw_pixel(v75, g32);
						v44 = g30;
						// branch -> 0x4f7f8
					}
					// 0x4f7f8
					if (v44 >= 3) {
						// 0x4f800
						if (g36 > g25) {
							// 0x4f808
							v76 = g29 - 1;
							g29 = v76;
							result2 = engine_draw_pixel(v76, v6 - v5);
							// branch -> 0x4f830
						} else {
							// 0x4f820
							v77 = g29 - 1;
							g29 = v77;
							result2 = engine_draw_pixel(v77, v6);
							// branch -> 0x4f830
						}
						// 0x4f830
						g10 = v1;
						return result2;
					}
					result2 = v50;
				}
				// 0x4f830
				g10 = v1;
				return result2;
			}
		} else {
			// 0x4f418
			g25 = 2 * v28;
			g35 = v55;
			v83 = v55 - v27;
			g24 = v83;
			g36 = 0;
			v32 = v83;
			if (g31 > 0) {
				v29 = v83;
				while (true) {
					// 0x4f42c
					v56 = g33 + 1;
					v8 = v56;
					v7 = g29 - 1;
					if (v29 > -1) {
						goto lab_0x4f47c_4;
					}
					goto lab_0x4f43c_4;
				}
			}
			// 0x4f518
			if (g30 != 0) {
				// 0x4f520
				if (v32 <= -1) {
					// 0x4f528
					v57 = g33 + 1;
					g33 = v57;
					v84 = engine_draw_pixel(v57, g32);
					v30 = g30;
					v45 = v84;
					v31 = v30;
					if (v30 >= 2) {
						// 0x4f540
						v58 = g33 + 1;
						g33 = v58;
						v45 = engine_draw_pixel(v58, g32);
						v31 = g30;
						// branch -> 0x4f550
					}
					// 0x4f550
					if (v31 >= 3) {
						// 0x4f558
						v59 = g29 - 1;
						g29 = v59;
						result2 = engine_draw_pixel(v59, v6);
						// branch -> 0x4f830
					} else {
						result2 = v45;
					}
					// 0x4f830
					g10 = v1;
					return result2;
				}
				// 0x4f56c
				if (v32 < g25) {
					// 0x4f574
					v60 = g33 + 1;
					g33 = v60;
					v85 = engine_draw_pixel(v60, g32);
					v33 = g30;
					v46 = v85;
					v34 = v33;
					if (v33 >= 2) {
						// 0x4f58c
						v86 = v5 + g32;
						g32 = v86;
						v61 = g33 + 1;
						g33 = v61;
						v46 = engine_draw_pixel(v61, v86);
						v34 = g30;
						// branch -> 0x4f5a0
					}
					// 0x4f5a0
					if (v34 >= 3) {
						// 0x4f5a8
						v62 = g29 - 1;
						g29 = v62;
						result2 = engine_draw_pixel(v62, v6);
						// branch -> 0x4f830
					} else {
						result2 = v46;
					}
				} else {
					// 0x4f5bc
					v87 = v5 + g32;
					g32 = v87;
					v63 = g33 + 1;
					g33 = v63;
					v88 = engine_draw_pixel(v63, v87);
					v35 = g30;
					v47 = v88;
					v36 = v35;
					if (v35 >= 2) {
						// 0x4f5d8
						v64 = g33 + 1;
						g33 = v64;
						v47 = engine_draw_pixel(v64, g32);
						v36 = g30;
						// branch -> 0x4f5e8
					}
					// 0x4f5e8
					if (v36 >= 3) {
						// 0x4f5f0
						v65 = g29 - 1;
						g29 = v65;
						result2 = engine_draw_pixel(v65, v6 - v5);
						// branch -> 0x4f830
					} else {
						result2 = v47;
					}
				}
				// 0x4f830
				g10 = v1;
				return result2;
			}
		}
		// 0x4f830
		g10 = v1;
		return result4;
	}
	// 0x4f304
	*(int32_t *)v2 = 1;
	// branch -> 0x4f30c
	// 0x4f30c
	v21 = a4;
	if (v21 < 160) {
		// 0x4f31c
		*(int32_t *)v2 = 1;
		v52 = a4;
		// branch -> 0x4f324
	} else {
		// 0x4f314
		if (v21 >= 512) {
			// 0x4f31c
			*(int32_t *)v2 = 1;
			v52 = a4;
			// branch -> 0x4f324
		} else {
			v52 = v21;
		}
		// 0x4f324
		v22 = a1;
		v51 = a3;
		v78 = v51 - v22;
		v17 = v78 >> 31 | 1;
		v79 = v17 * v78;
		v10 = v79;
		v23 = a2;
		v80 = v52 - v23;
		v18 = v80 >> 31 | 1;
		v81 = v18 * v80;
		v9 = v81;
		v5 = v17 == v18 ? 1 : -1;
		if (v81 > v79) {
			// 0x4f370
			*(int32_t *)v3 = 1;
			v24 = a4;
			int32_t v131 = v51 ^ v52 ^ v24; // 0x4f388
			a4 = v131;
			v25 = v9;
			v9 = v81 ^ v79 ^ v25;
			v53 = v22;
			a3 = v24;
			v10 = v25;
			v26 = v25;
			v12 = v53;
			v14 = v131;
			v13 = v24;
			v11 = v53 ^ v23 ^ v22;
			// branch -> 0x4f3a8
		} else {
			// 0x4f3a0
			*(int32_t *)v3 = 0;
			v26 = v10;
			v12 = a2;
			v14 = a4;
			v13 = a3;
			v11 = a1;
			// branch -> 0x4f3a8
		}
		// 0x4f3a8
		v16 = v11 > v13 ? v13 : v11;
		g33 = v16;
		v15 = v11 > v13 ? v14 : v12;
		g32 = v15;
		g29 = v11 > v13 ? v11 : v13;
		v6 = v11 > v13 ? v12 : v14;
		v54 = v26 - 1;
		g31 = v54 / 4;
		g30 = v54;
		engine_draw_pixel(v16, v15);
		int32_t v132 = v6; // 0x4f400
		a2 = v132;
		engine_draw_pixel(g29, v132);
		v27 = v10;
		result4 = 2 * v27;
		a1 = result4;
		v28 = v9;
		v55 = 4 * v28;
		v82 = v55 - result4;
		v4 = v82;
		if (v82 > -1) {
			// 0x4f608
			v89 = v28 - v27;
			g25 = 2 * v89;
			v66 = 4 * v89;
			g35 = v66;
			v90 = v66 + v27;
			g36 = v90;
			g24 = 0;
			v40 = v90;
			if (g31 > 0) {
				v37 = v90;
				while (true) {
					// 0x4f620
					v67 = g33 + 1;
					v8 = v67;
					v7 = g29 - 1;
					if (v37 < 1) {
						goto lab_0x4f680_4;
					}
					goto lab_0x4f630_4;
				}
			}
			// 0x4f71c
			if (g30 != 0) {
				// 0x4f724
				if (v40 < 1) {
					// 0x4f77c
					if (v40 < g25) {
						// 0x4f784
						v71 = g33 + 1;
						g33 = v71;
						int32_t v133 = g32; // 0x4f78c
						a2 = v133;
						a1 = engine_draw_pixel(v71, v133);
						v41 = g30;
						v42 = v41;
						if (v41 >= 2) {
							// 0x4f79c
							v95 = v5 + g32;
							g32 = v95;
							v72 = g33 + 1;
							g33 = v72;
							a2 = v95;
							a1 = engine_draw_pixel(v72, v95);
							v42 = g30;
							// branch -> 0x4f7b0
						}
						// 0x4f7b0
						if (v42 >= 3) {
							// 0x4f7b8
							v73 = g29 - 1;
							g29 = v73;
							int32_t v134 = v6; // 0x4f7c0
							a2 = v134;
							a1 = engine_draw_pixel(v73, v134);
							// branch -> 0x4f830
						}
					} else {
						// 0x4f7cc
						v96 = v5 + g32;
						g32 = v96;
						v74 = g33 + 1;
						g33 = v74;
						a2 = v96;
						a1 = engine_draw_pixel(v74, v96);
						v43 = g30;
						v44 = v43;
						if (v43 >= 2) {
							// 0x4f7e8
							v75 = g33 + 1;
							g33 = v75;
							int32_t v135 = g32; // 0x4f7f0
							a2 = v135;
							a1 = engine_draw_pixel(v75, v135);
							v44 = g30;
							// branch -> 0x4f7f8
						}
						// 0x4f7f8
						if (v44 >= 3) {
							// 0x4f800
							if (g36 > g25) {
								int32_t v136 = v6 - v5; // 0x4f808
								v76 = g29 - 1;
								g29 = v76;
								a2 = v136;
								a1 = engine_draw_pixel(v76, v136);
								// branch -> 0x4f830
							} else {
								// 0x4f820
								v77 = g29 - 1;
								g29 = v77;
								int32_t v137 = v6; // 0x4f828
								a2 = v137;
								a1 = engine_draw_pixel(v77, v137);
								// branch -> 0x4f830
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					// 0x4f72c
					v91 = v5 + g32;
					g32 = v91;
					v68 = g33 + 1;
					g33 = v68;
					a2 = v91;
					a1 = engine_draw_pixel(v68, v91);
					v38 = g30;
					v39 = v38;
					if (v38 >= 2) {
						// 0x4f748
						v93 = v5 + g32;
						g32 = v93;
						v69 = g33 + 1;
						g33 = v69;
						a2 = v93;
						a1 = engine_draw_pixel(v69, v93);
						v39 = g30;
						// branch -> 0x4f75c
					}
					// 0x4f75c
					if (v39 >= 3) {
						int32_t v138 = v6 - v5; // 0x4f764
						v70 = g29 - 1;
						g29 = v70;
						a2 = v138;
						a1 = engine_draw_pixel(v70, v138);
						// branch -> 0x4f830
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		} else {
			// 0x4f418
			g25 = 2 * v28;
			g35 = v55;
			v83 = v55 - v27;
			g24 = v83;
			g36 = 0;
			v32 = v83;
			if (g31 > 0) {
				v29 = v83;
				while (true) {
					// 0x4f42c
					v56 = g33 + 1;
					v8 = v56;
					v7 = g29 - 1;
					if (v29 > -1) {
						goto lab_0x4f47c_4;
					}
					goto lab_0x4f43c_4;
				}
			}
			// 0x4f518
			if (g30 != 0) {
				// 0x4f520
				if (v32 > -1) {
					// 0x4f56c
					if (v32 < g25) {
						// 0x4f574
						v60 = g33 + 1;
						g33 = v60;
						int32_t v139 = g32; // 0x4f57c
						a2 = v139;
						a1 = engine_draw_pixel(v60, v139);
						v33 = g30;
						v34 = v33;
						if (v33 >= 2) {
							// 0x4f58c
							v86 = v5 + g32;
							g32 = v86;
							v61 = g33 + 1;
							g33 = v61;
							a2 = v86;
							a1 = engine_draw_pixel(v61, v86);
							v34 = g30;
							// branch -> 0x4f5a0
						}
						// 0x4f5a0
						if (v34 >= 3) {
							// 0x4f5a8
							v62 = g29 - 1;
							g29 = v62;
							int32_t v140 = v6; // 0x4f5b0
							a2 = v140;
							a1 = engine_draw_pixel(v62, v140);
							// branch -> 0x4f830
						}
					} else {
						// 0x4f5bc
						v87 = v5 + g32;
						g32 = v87;
						v63 = g33 + 1;
						g33 = v63;
						a2 = v87;
						a1 = engine_draw_pixel(v63, v87);
						v35 = g30;
						v36 = v35;
						if (v35 >= 2) {
							// 0x4f5d8
							v64 = g33 + 1;
							g33 = v64;
							int32_t v141 = g32; // 0x4f5e0
							a2 = v141;
							a1 = engine_draw_pixel(v64, v141);
							v36 = g30;
							// branch -> 0x4f5e8
						}
						// 0x4f5e8
						if (v36 >= 3) {
							int32_t v142 = v6 - v5; // 0x4f5f0
							v65 = g29 - 1;
							g29 = v65;
							a2 = v142;
							a1 = engine_draw_pixel(v65, v142);
							// branch -> 0x4f830
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					// 0x4f528
					v57 = g33 + 1;
					g33 = v57;
					int32_t v143 = g32; // 0x4f530
					a2 = v143;
					a1 = engine_draw_pixel(v57, v143);
					v30 = g30;
					v31 = v30;
					if (v30 >= 2) {
						// 0x4f540
						v58 = g33 + 1;
						g33 = v58;
						int32_t v144 = g32; // 0x4f548
						a2 = v144;
						a1 = engine_draw_pixel(v58, v144);
						v31 = g30;
						// branch -> 0x4f550
					}
					// 0x4f550
					if (v31 >= 3) {
						// 0x4f558
						v59 = g29 - 1;
						g29 = v59;
						int32_t v145 = v6; // 0x4f560
						a2 = v145;
						a1 = engine_draw_pixel(v59, v145);
						// branch -> 0x4f830
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x4f324
	v22 = a1;
	v51 = a3;
	v78 = v51 - v22;
	v17 = v78 >> 31 | 1;
	v79 = v17 * v78;
	v10 = v79;
	v23 = a2;
	v80 = v52 - v23;
	v18 = v80 >> 31 | 1;
	v81 = v18 * v80;
	v9 = v81;
	v5 = v17 == v18 ? 1 : -1;
	if (v81 > v79) {
		// 0x4f370
		*(int32_t *)v3 = 1;
		v24 = a4;
		v25 = v9;
		v9 = v81 ^ v79 ^ v25;
		v53 = v22;
		v10 = v25;
		v26 = v25;
		v12 = v53;
		v14 = v51 ^ v52 ^ v24;
		v13 = v24;
		v11 = v53 ^ v23 ^ v22;
		// branch -> 0x4f3a8
	} else {
		// 0x4f3a0
		*(int32_t *)v3 = 0;
		v26 = v10;
		v12 = a2;
		v14 = a4;
		v13 = a3;
		v11 = a1;
		// branch -> 0x4f3a8
	}
	// 0x4f3a8
	v16 = v11 > v13 ? v13 : v11;
	g33 = v16;
	v15 = v11 > v13 ? v14 : v12;
	g32 = v15;
	g29 = v11 > v13 ? v11 : v13;
	v6 = v11 > v13 ? v12 : v14;
	v54 = v26 - 1;
	g31 = v54 / 4;
	g30 = v54;
	engine_draw_pixel(v16, v15);
	engine_draw_pixel(g29, v6);
	v27 = v10;
	v28 = v9;
	v55 = 4 * v28;
	v82 = v55 - 2 * v27;
	v4 = v82;
	if (v82 > -1) {
		// 0x4f608
		v89 = v28 - v27;
		g25 = 2 * v89;
		v66 = 4 * v89;
		g35 = v66;
		v90 = v66 + v27;
		g36 = v90;
		g24 = 0;
		v40 = v90;
		if (g31 > 0) {
			v37 = v90;
			while (true) {
				// 0x4f620
				v67 = g33 + 1;
				v8 = v67;
				v7 = g29 - 1;
				if (v37 < 1) {
					goto lab_0x4f680_4;
				}
				goto lab_0x4f630_4;
			}
		}
		// 0x4f71c
		if (g30 != 0) {
			// 0x4f724
			if (v40 < 1) {
				// 0x4f77c
				if (v40 < g25) {
					// 0x4f784
					v71 = g33 + 1;
					g33 = v71;
					engine_draw_pixel(v71, g32);
					v41 = g30;
					v42 = v41;
					if (v41 >= 2) {
						// 0x4f79c
						v95 = v5 + g32;
						g32 = v95;
						v72 = g33 + 1;
						g33 = v72;
						engine_draw_pixel(v72, v95);
						v42 = g30;
						// branch -> 0x4f7b0
					}
					// 0x4f7b0
					if (v42 >= 3) {
						// 0x4f7b8
						v73 = g29 - 1;
						g29 = v73;
						engine_draw_pixel(v73, v6);
						// branch -> 0x4f830
					}
				} else {
					// 0x4f7cc
					v96 = v5 + g32;
					g32 = v96;
					v74 = g33 + 1;
					g33 = v74;
					engine_draw_pixel(v74, v96);
					v43 = g30;
					v44 = v43;
					if (v43 >= 2) {
						// 0x4f7e8
						v75 = g33 + 1;
						g33 = v75;
						engine_draw_pixel(v75, g32);
						v44 = g30;
						// branch -> 0x4f7f8
					}
					// 0x4f7f8
					if (v44 >= 3) {
						// 0x4f800
						if (g36 > g25) {
							// 0x4f808
							v76 = g29 - 1;
							g29 = v76;
							engine_draw_pixel(v76, v6 - v5);
							// branch -> 0x4f830
						} else {
							// 0x4f820
							v77 = g29 - 1;
							g29 = v77;
							engine_draw_pixel(v77, v6);
							// branch -> 0x4f830
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x4f72c
				v91 = v5 + g32;
				g32 = v91;
				v68 = g33 + 1;
				g33 = v68;
				engine_draw_pixel(v68, v91);
				v38 = g30;
				v39 = v38;
				if (v38 >= 2) {
					// 0x4f748
					v93 = v5 + g32;
					g32 = v93;
					v69 = g33 + 1;
					g33 = v69;
					engine_draw_pixel(v69, v93);
					v39 = g30;
					// branch -> 0x4f75c
				}
				// 0x4f75c
				if (v39 >= 3) {
					// 0x4f764
					v70 = g29 - 1;
					g29 = v70;
					engine_draw_pixel(v70, v6 - v5);
					// branch -> 0x4f830
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	} else {
		// 0x4f418
		g25 = 2 * v28;
		g35 = v55;
		v83 = v55 - v27;
		g24 = v83;
		g36 = 0;
		v32 = v83;
		if (g31 > 0) {
			v29 = v83;
			while (true) {
				// 0x4f42c
				v56 = g33 + 1;
				v8 = v56;
				v7 = g29 - 1;
				if (v29 > -1) {
					goto lab_0x4f47c_4;
				}
				goto lab_0x4f43c_4;
			}
		}
		// 0x4f518
		if (g30 != 0) {
			// 0x4f520
			if (v32 > -1) {
				// 0x4f56c
				if (v32 < g25) {
					// 0x4f574
					v60 = g33 + 1;
					g33 = v60;
					engine_draw_pixel(v60, g32);
					v33 = g30;
					v34 = v33;
					if (v33 >= 2) {
						// 0x4f58c
						v86 = v5 + g32;
						g32 = v86;
						v61 = g33 + 1;
						g33 = v61;
						engine_draw_pixel(v61, v86);
						v34 = g30;
						// branch -> 0x4f5a0
					}
					// 0x4f5a0
					if (v34 >= 3) {
						// 0x4f5a8
						v62 = g29 - 1;
						g29 = v62;
						engine_draw_pixel(v62, v6);
						// branch -> 0x4f830
					}
				} else {
					// 0x4f5bc
					v87 = v5 + g32;
					g32 = v87;
					v63 = g33 + 1;
					g33 = v63;
					engine_draw_pixel(v63, v87);
					v35 = g30;
					v36 = v35;
					if (v35 >= 2) {
						// 0x4f5d8
						v64 = g33 + 1;
						g33 = v64;
						engine_draw_pixel(v64, g32);
						v36 = g30;
						// branch -> 0x4f5e8
					}
					// 0x4f5e8
					if (v36 >= 3) {
						// 0x4f5f0
						v65 = g29 - 1;
						g29 = v65;
						engine_draw_pixel(v65, v6 - v5);
						// branch -> 0x4f830
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x4f528
				v57 = g33 + 1;
				g33 = v57;
				engine_draw_pixel(v57, g32);
				v30 = g30;
				v31 = v30;
				if (v30 >= 2) {
					// 0x4f540
					v58 = g33 + 1;
					g33 = v58;
					engine_draw_pixel(v58, g32);
					v31 = g30;
					// branch -> 0x4f550
				}
				// 0x4f550
				if (v31 >= 3) {
					// 0x4f558
					v59 = g29 - 1;
					g29 = v59;
					engine_draw_pixel(v59, v6);
					// branch -> 0x4f830
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x4f844 - 0x4f910
int32_t GetDirection(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = a3 - a1; // 0x4f844
	int32_t v2 = a4 - a2; // 0x4f848
	int32_t result;
	if (v1 >= 0) {
		// 0x4f850
		if (v2 < 0) {
			// 0x4f880
			if (-2 * v2 < v1) {
				// 0x4f8a4
				return 7;
			}
			result = 2 * v1 < -v2 ? 5 : 6;
		} else {
			// 0x4f858
			if (2 * v2 < v1) {
				// 0x4f878
				return 7;
			}
			result = 2 * v1 < v2;
		}
		// bb
		return result;
	}
	int32_t v3 = -v1; // 0x4f8e0
	if (v2 < 0) {
		// 0x4f8e0
		if (-2 * v2 < v3) {
			// 0x4f908
			return 3;
		}
		result = -2 * v1 < -v2 ? 5 : 4;
	} else {
		// 0x4f8b4
		if (2 * v2 < v3) {
			// 0x4f8d8
			return 3;
		}
		result = -2 * v1 < v2 ? 1 : 2;
	}
	// bb
	return result;
}

// Address range: 0x4f910 - 0x4f92c
int32_t SetRndSeed(void)
{
	// 0x4f910
	*(int32_t *)(g23 - 0x4ea8) = g34;
	*(int32_t *)*(int32_t *)(g23 - 0x72a4) = g34;
	*(int32_t *)*(int32_t *)(g23 - 0x72a8) = 0;
	return g34;
}

// Address range: 0x4f92c - 0x4f978
int32_t GetRndSeed(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x72a8); // 0x4f930
	g37 = v1;
	int32_t *v2 = (int32_t *)v1; // 0x4f944
	*v2 = *v2 + 1;
	int32_t *v3 = (int32_t *)(g23 - 0x4ea8); // 0x4f950
	*v3 = 0x15a4e35 * *v3 + 1;
	return abs(*(int32_t *)(g23 - 0x4ea8));
}

// Address range: 0x4f978 - 0x4f9e8
int32_t random(char a1)
{
	int32_t v1 = g10; // 0x4f97c
	int32_t v2 = g37; // 0x4f980
	if (v2 <= 0) {
		// 0x4f994
		// branch -> 0x4f9d4
		// 0x4f9d4
		g10 = v1;
		return 0;
	}
	int32_t v3 = GetRndSeed(); // 0x4f9ac
	int32_t result;            // 0x4f9e4
	if (v2 < (int32_t) "MoveWindow" - 1) {
		// 0x4f9ac
		result = v3 / 0x10000 % v2;
		// branch -> 0x4f9d4
	} else {
		// 0x4f9c4
		result = v3 % v2;
		// branch -> 0x4f9d4
	}
	// 0x4f9d4
	g10 = v1;
	return result;
}

// Address range: 0x4f9ec - 0x4fa88
int32_t DiabloAllocPtr(void)
{
	int32_t v1 = g36;                        // 0x4f9ec
	int32_t v2 = *(int32_t *)(g23 - 0x6278); // 0x4f9f4
	g36 = v2;
	int32_t v3 = g35; // 0x4f9f8
	g35 = *(int32_t *)(g23 - 0x627c);
	int32_t v4 = g33; // 0x4fa00
	int32_t v5 = g34; // 0x4fa04
	g34 = v2;
	EnterCriticalSection(v2);
	g34 = v5;
	g33 = SMemAlloc(v5, g35, 3794, 0);
	int32_t v6 = g36; // 0x4fa38
	g34 = v6;
	g34 = LeaveCriticalSection(v6);
	int32_t v7 = g33;    // 0x4fa44
	int32_t result = v7; // 0x4fa70
	if (v7 == 0) {
		// 0x4fa4c
		ErrDlg(105, GetLastError(), g35, 3827);
		result = g33;
		// branch -> 0x4fa68
	}
	// 0x4fa68
	g36 = v1;
	g35 = v3;
	g33 = v4;
	return result;
}

// Address range: 0x4fa88 - 0x4faf0
int32_t mem_free_dbg(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6278); // 0x4fa90
	int32_t v2 = g34;                        // 0x4fa98
	int32_t result;                          // 0x4faec
	if (v2 != 0) {
		// 0x4faa8
		g34 = v1;
		EnterCriticalSection(v1);
		int32_t v3;
		int32_t v4 = *(int32_t *)(v3 - 0x627c); // 0x4fab4
		g37 = v4;
		g34 = v2;
		g39 = 0;
		SMemFree(v2, v4, 3875, 0);
		g34 = v1;
		result = LeaveCriticalSection(v1);
		// branch -> 0x4fad8
	} else {
		result = 0;
	}
	// 0x4fad8
	return result;
}

// Address range: 0x4faf0 - 0x4fba8
int32_t LoadFileInMem(int32_t a1, int32_t *a2)
{
	int32_t v1 = g36; // 0x4faf0
	g38 = 0;
	int32_t v2 = g35; // 0x4fafc
	g35 = (int32_t)a2;
	int32_t v3 = g33; // 0x4fb04
	g33 = a1;
	int32_t v4; // bp-24
	function_c8754((int32_t)&v4, 0);
	int32_t v5 = function_c86ec(v4, 0); // 0x4fb24
	int32_t v6 = g35;                   // 0x4fb28
	g36 = v5;
	int32_t v7 = v5; // 0x4fb38
	if (v6 != 0) {
		// 0x4fb34
		*(int32_t *)v6 = v5;
		v7 = g36;
		// branch -> 0x4fb38
	}
	int32_t v8 = v7; // 0x4fb50
	if (v7 == 0) {
		// 0x4fb40
		g37 = g33;
		app_fatal(*(int32_t *)(g23 - 0x6280));
		v8 = g36;
		// branch -> 0x4fb4c
	}
	int32_t v9 = function_c95c8(g33, v8, 0); // 0x4fb58
	g34 = v9;
	g35 = v9;
	int32_t v10 = function_c9948(); // 0x4fb60
	function_c87f0(v4, v10, g36);
	g34 = v4;
	function_c86c8(v4);
	function_c9acc(g35);
	int32_t result = g35; // 0x4fb90
	g36 = v1;
	g35 = v2;
	g33 = v3;
	return result;
}

// Address range: 0x4fba8 - 0x4fc74
int32_t function_4fba8(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x4fba8
	int32_t v2 = g35; // 0x4fbb0
	int32_t v3 = g33; // 0x4fbb4
	g33 = a2;
	int32_t v4 = g32; // 0x4fbbc
	g32 = a1;
	g34 = a2;
	int32_t v5 = function_c9948(); // 0x4fbd0
	g36 = v5;
	if (v5 == 0) {
		// 0x4fbdc
		g37 = g32;
		app_fatal(*(int32_t *)(g23 - 0x6284));
		// branch -> 0x4fbe8
	}
	// 0x4fbe8
	g38 = 0;
	int32_t v6; // bp-24
	function_c8754(g32, (int32_t)&v6);
	int32_t v7 = function_c86ec(v6, 0); // 0x4fc00
	g35 = v7;
	int32_t v8 = v7; // 0x4fc1c
	if (v7 == 0) {
		// 0x4fc0c
		g37 = g32;
		app_fatal(*(int32_t *)(g23 - 0x6280));
		v8 = g35;
		// branch -> 0x4fc18
	}
	int32_t v9 = v8; // 0x4fc38
	if (v8 > *(int32_t *)(g33 + 144)) {
		// 0x4fc24
		g37 = g32;
		app_fatal(*(int32_t *)(g23 - 0x6288));
		v9 = g35;
		// branch -> 0x4fc30
	}
	// 0x4fc30
	function_c87f0(v6, g36, v9);
	g34 = v6;
	function_c86c8(v6);
	function_c9acc(g33);
	int32_t result = g35; // 0x4fc58
	g36 = v1;
	g35 = v2;
	g33 = v3;
	g32 = v4;
	return result;
}

// Address range: 0x4fc74 - 0x4fd0c
int32_t function_4fc74(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36; // 0x4fc74
	int32_t v2 = g35; // 0x4fc7c
	g35 = a2;
	int32_t v3 = g33; // 0x4fc84
	g33 = a1;
	int32_t v4 = a1; // 0x4fca4
	if (a2 == 0) {
		// 0x4fc98
		g37 = a1;
		app_fatal(*(int32_t *)(g23 - 0x628c));
		v4 = g33;
		// branch -> 0x4fca4
	}
	// 0x4fca4
	g38 = 0;
	int32_t v5; // bp-24
	function_c8754(v4, (int32_t)&v5);
	int32_t v6 = function_c86ec(v5, 0); // 0x4fcbc
	g36 = v6;
	int32_t v7 = v6; // 0x4fcdc
	if (v6 == 0) {
		// 0x4fcc8
		g37 = g33;
		app_fatal(*(int32_t *)(g23 - 0x6280));
		v7 = g36;
		// branch -> 0x4fcd4
	}
	// 0x4fcd4
	function_c87f0(v5, g35, v7);
	g34 = v5;
	function_c86c8(v5);
	int32_t result = g36; // 0x4fcf4
	g36 = v1;
	g35 = v2;
	g33 = v3;
	return result;
}

// Address range: 0x4fd0c - 0x4fe04
int32_t function_4fd0c(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x4fd0c
	g34 = a1;
	int32_t v1 = g10; // 0x4fd10
	g29 = g34;
	g30 = a2;
	g31 = a3;
	g35 = function_c9b28();
	g34 = g30;
	g36 = function_c9948();
	g32 = 1;
	int32_t result; // 0x4fdec
	if (g31 < 1) {
		// 0x4fde0
		function_c9acc(g30);
		result = function_c9b70((int32_t *)g29);
		g10 = v1;
		return result;
	}
	int32_t v2 = 1; // 0x4fd48
	while (true) {
		// 0x4fd44
		g33 = function_4d79c(g35, v2) + 10 + g35;
		int32_t v3 = function_4d7a8(g35, g32) - 10; // 0x4fd64
		int32_t v4;                                 // 0x4fdd4
		if (v3 != 0) {
			int32_t v5 = g33; // 0x4fd6c
			// branch -> 0x4fd6c
			while (true) {
				unsigned char v6 = *(char *)v5; // 0x4fd6c
				int32_t v7 = v6;                // 0x4fd6c
				int32_t v8 = v5 + 1;            // 0x4fd70
				g33 = v8;
				int32_t v9 = v3 - 1; // 0x4fd74
				int32_t v10 = v9;    // r4
				int32_t v11 = v8;    // 0x4fd6c18
				int32_t v12;
				if (v6 <= 255) {
					int32_t v13 = -0x1000000 * v7; // 0x4fd84
					if (v13 < 0x41000001) {
						// 0x4fda8
						v10 = v9 - v13 / 0x1000000;
						int32_t v14 = -1 - v7; // r3
						if ((v13 || 0xffffff) >= 0x1ffffff) {
							char *v15 = (char *)v8; // 0x4fdb0
							*v15 = *(char *)(g36 + (int32_t)*v15);
							int32_t v16 = g33 + 1; // 0x4fdbc
							g33 = v16;
							v11 = v16;
							while ((0x1000000 * v14 || 0xffffff) >= 0x1ffffff) {
								// 0x4fdb0
								v14--;
								v15 = (char *)v16;
								*v15 = *(char *)(g36 + (int32_t)*v15);
								v16 = g33 + 1;
								g33 = v16;
								v11 = v16;
								// continue -> 0x4fdb0
							}
						lab_0x4fdcc:
							// 0x4fdcc
							v12 = v10;
							if (v12 == 0) {
								// break -> 0x4fdd4
								break;
							}
							v3 = v12;
							v5 = v11;
							// continue -> 0x4fd6c
							continue;
						} else {
							v11 = v8;
						}
					} else {
						char *v17 = (char *)v8; // 0x4fd90
						v10 = v3 - 2;
						*v17 = *(char *)(g36 + (int32_t)*v17);
						int32_t v18 = g33 + 1; // 0x4fda0
						g33 = v18;
						v11 = v18;
						// branch -> 0x4fdcc
						goto lab_0x4fdcc;
					}
					// 0x4fdcc
					v12 = v10;
					if (v12 == 0) {
						// break -> 0x4fdd4
						break;
					}
					v3 = v12;
					v5 = v11;
					// continue -> 0x4fd6c
					continue;
				}
				// 0x4fdcc
				v12 = v10;
				if (v12 == 0) {
					// break -> 0x4fdd4
					break;
				}
				v3 = v12;
				v5 = v11;
				// continue -> 0x4fd6c
			}
			// 0x4fdd4
			v4 = g32 + 1;
			g32 = v4;
			if (v4 > g31) {
				// break -> 0x4fde0
				break;
			}
			v2 = v4;
			// continue -> 0x4fd44
			continue;
		}
		// 0x4fdd4
		v4 = g32 + 1;
		g32 = v4;
		if (v4 > g31) {
			// break -> 0x4fde0
			break;
		}
		v2 = v4;
		// continue -> 0x4fd44
	}
	// 0x4fde0
	function_c9acc(g30);
	result = function_c9b70((int32_t *)g29);
	g10 = v1;
	return result;
}

// Address range: 0x4fe04 - 0x4fed8
int32_t function_4fe04(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g38; // 0x4fe10
	// branch -> 0x4fe08
	int32_t result; // 0x4fed418
	while (true) {
		int32_t v2 = g37;      // 0x4fe08
		char v3 = *(char *)v2; // 0x4fe08
		int32_t v4 = v2 + 1;   // 0x4fe0c
		g37 = v4;
		int32_t v5 = v1 - 1; // r5
		int32_t v6 = v3;     // 0x4fe14
		int32_t v7;          // 0x4fe307
		if (v3 > -1) {
			int32_t v8 = a1; // 0x4febc3
			int32_t v9 = v6;
			// branch -> 0x4fe8c
			int32_t v10; // 0x4febc4
			while (true) {
				// 0x4fe8c
				int32_t v11;
				int32_t v12; // 0x4feb0
				int32_t v13; // 0x4fe98
				if (v9 > v8) {
					// 0x4fe94
					v13 = g34 + v8;
					g34 = v13;
					v12 = v8;
					v11 = v9 - v8;
					// branch -> 0x4feb0
				} else {
					int32_t v14 = g34 + v9; // 0x4fea8
					g34 = v14;
					v13 = v14;
					v12 = v9;
					v11 = 0;
					// branch -> 0x4feb0
				}
				// 0x4feb0
				result = v13;
				v10 = v8 - v12;
				if (v8 == v12) {
					int32_t v15 = -768 - a1 + v13; // 0x4fec0
					g34 = v15;
					result = v15;
					v10 = a1;
					// branch -> 0x4fec4
				}
				// 0x4fec4
				if (v11 == 0) {
					// break -> 0x4fecc
					break;
				}
				v8 = v10;
				v9 = v11;
				// continue -> 0x4fe8c
			}
			v7 = v10;
			// branch -> 0x4fecc
		} else {
			int32_t v16 = -v6; // 0x4fe1c
			int32_t v17;       // r7
			int32_t v18;       // r8
			int32_t v19;       // 0x4fe68
			if (v3 > -66) {
				int32_t v20 = g34; // 0x4fe64
				int32_t v21 = v4;  // 0x4fe60
				// branch -> 0x4fe58
				while (true) {
					int32_t v22 = v16 - 1; // 0x4fe5c
					v17 = v22;
					g37 = v21 + 1;
					*(char *)v20 = *(char *)v21;
					v19 = g34 + 1;
					g34 = v19;
					if (v22 != 0) {
						// 0x4fe58
						v20 = v19;
						v16 = v17;
						v21 = g37;
						// branch -> 0x4fe58
						continue;
					}
				}
			} else {
				unsigned char v23 = *(char *)v4; // 0x4fe28
				int32_t v24 = v23;               // r0
				int32_t v25 = -65 - v6;          // 0x4fe2c
				v18 = a1 - v25;
				g37 = v2 + 2;
				v5 = v1 - 2;
				int32_t v26 = g34; // 0x4fe40
				// branch -> 0x4fe3c
				while (true) {
					int32_t v27 = v25 - 1; // 0x4fe3c
					v17 = v27;
					*(char *)v26 = v23;
					int32_t v28 = g34 + 1; // 0x4fe44
					g34 = v28;
					if (v27 != 0) {
						// 0x4fe3c
						v26 = v28;
						v23 = (char)v24;
						v25 = v17;
						// branch -> 0x4fe3c
						continue;
					} else {
						v19 = v28;
					}
				}
			}
			int32_t v29 = v18; // 0x4fe70
			if (v29 == 0) {
				int32_t v30 = v19 - 768 - a1; // 0x4fe80
				g34 = v30;
				result = v30;
				v7 = a1;
				// branch -> 0x4fecc
			} else {
				result = v19;
				v7 = v29;
			}
		}
		int32_t v31 = v5; // 0x4fecc
		if (v31 == 0) {
			// break -> 0x4fed4
			break;
		}
		a1 = v7;
		v1 = v31;
		// continue -> 0x4fe08
	}
	// 0x4fed4
	return result;
}

// Address range: 0x4fed8 - 0x4ffd0
int32_t function_4fed8(int32_t a1, char a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = a2;  // r7
	int32_t v2 = g38; // 0x4fee4
	// branch -> 0x4fedc
	int32_t result; // 0x4ffcc17
	while (true) {
		int32_t v3 = g37;      // 0x4fedc
		char v4 = *(char *)v3; // 0x4fedc
		int32_t v5 = v3 + 1;   // 0x4fee0
		g37 = v5;
		int32_t v6 = v2 - 1; // r5
		int32_t v7 = v4;     // 0x4fee8
		int32_t v8 = v7;
		int32_t v9;  // 0x4ffb4
		int32_t v10; // 0x4ffb43
		int32_t v11; // 0x4ff00
		if (v4 <= 255) {
			int32_t v12 = -v7; // 0x4fef0
			int32_t v13;       // 0x4ff6c
			int32_t v14;       // 0x4ff3c8
			int32_t v15;       // 0x4ff64
			if (v4 > -66) {
				int32_t v16 = v5; // 0x4ff40
				// branch -> 0x4ff40
				while (true) {
					// 0x4ff40
					g37 = v16 + 1;
					if (*(char *)v16 != 0) {
						// 0x4ff50
						*(char *)(g34 - 1) = (char)v1;
						*(char *)(g34 + 1) = (char)v1;
						*(char *)(g34 - 768) = (char)v1;
						*(char *)(g34 + 768) = (char)v1;
						// branch -> 0x4ff60
					}
					int32_t v17 = v12 - 1; // 0x4ff60
					v12 = v17;
					g34++;
					if (v17 != 0) {
						// 0x4ff60
						v12 = v17;
						v16 = g37;
						// branch -> 0x4ff40
						continue;
					}
				}
			} else {
				// 0x4fefc
				v11 = -65 - v7;
				v12 = v11;
				v6 = v2 - 2;
				g37 = v3 + 2;
				if (*(char *)v5 == 0) {
					// 0x4ff84
					v9 = a1;
					v10 = a1;
					// branch -> 0x4ff84
				lab_0x4ff84:;
					int32_t v18; // 0x4ffb44
					while (true) {
						// 0x4ff84
						int32_t v19;
						int32_t v20; // 0x4ffa8
						int32_t v21; // 0x4ff90
						if (v11 > v10) {
							// 0x4ff8c
							v21 = g34 + v10;
							g34 = v21;
							v20 = v10;
							v19 = v11 - v10;
							// branch -> 0x4ffa8
						} else {
							int32_t v22 = g34 + v11; // 0x4ffa0
							g34 = v22;
							v21 = v22;
							v20 = v11;
							v19 = 0;
							// branch -> 0x4ffa8
						}
						// 0x4ffa8
						result = v21;
						v18 = v10 - v20;
						if (v10 == v20) {
							int32_t v23 = -768 - v9 + v21; // 0x4ffb8
							g34 = v23;
							result = v23;
							v18 = v9;
							// branch -> 0x4ffbc
						}
						// 0x4ffbc
						if (v19 == 0) {
							// break -> 0x4ffc4
							break;
						}
						v10 = v18;
						v11 = v19;
						// continue -> 0x4ff84
					}
					// 0x4ffc4
					v14 = v18;
					// branch -> 0x4ffc4
				} else {
					// 0x4ff14
					*(char *)(g34 - 1) = (char)v1;
					int32_t v24 = v12; // 0x4ff18
					a1 -= v24;
					*(char *)(g34 + v24) = (char)v1;
					*(char *)(g34 - 768) = (char)v1;
					int32_t v25 = v12 - 1; // 0x4ff24
					*(char *)(g34 + 768) = (char)v1;
					int32_t v26 = g34 + 1; // 0x4ff2c
					g34 = v26;
					v15 = v26;
					// branch -> 0x4ff20
					while (v25 != 0) {
						// 0x4ff20
						*(char *)(v26 - 768) = (char)v1;
						v25--;
						*(char *)(g34 + 768) = (char)v1;
						v26 = g34 + 1;
						g34 = v26;
						v15 = v26;
						// continue -> 0x4ff20
					}
					// 0x4ff6c
					v13 = a1;
					if (v13 == 0) {
					lab_0x4ff74:;
						int32_t v27 = v15 - 768 - a1; // 0x4ff7c
						g34 = v27;
						result = v27;
						v14 = a1;
						// branch -> 0x4ffc4
					} else {
						result = v15;
						v14 = v13;
					}
				}
			lab_0x4ffc4:;
				int32_t v28 = v6; // 0x4ffc4
				if (v28 == 0) {
					// break -> 0x4ffcc
					break;
				}
				a1 = v14;
				v2 = v28;
				// continue -> 0x4fedc
				continue;
			}
			// 0x4ff6c
			v13 = a1;
			if (v13 == 0) {
				goto lab_0x4ff74;
			}
			result = v15;
			v14 = v13;
			goto lab_0x4ffc4;
		}
		// 0x4ff84
		v9 = a1;
		v10 = a1;
		v11 = v8;
		// branch -> 0x4ff84
		goto lab_0x4ff84;
	}
	// 0x4ffcc
	return result;
}

// Address range: 0x4ffd0 - 0x500b0
int32_t function_4ffd0(int32_t a1, int32_t a2, int32_t a3)
{
	*(int32_t *)(g23 - 0x4eac) = a1;
	int32_t v1 = a1;
	int32_t v2 = g38; // 0x4ffe0
	// branch -> 0x4ffd8
	int32_t result; // 0x500ac18
	while (true) {
		int32_t v3 = g37;      // 0x4ffd8
		char v4 = *(char *)v3; // 0x4ffd8
		int32_t v5 = v3 + 1;   // 0x4ffdc
		g37 = v5;
		int32_t v6 = v2 - 1; // r5
		int32_t v7 = v4;     // 0x4ffe4
		int32_t v8;          // 0x500007
		if (v4 > -1) {
			int32_t v9 = v1; // 0x500943
			int32_t v10 = v7;
			// branch -> 0x50064
			int32_t v11; // 0x500944
			while (true) {
				// 0x50064
				int32_t v12;
				int32_t v13; // 0x50088
				int32_t v14; // 0x50070
				if (v10 > v9) {
					// 0x5006c
					v14 = g34 + v9;
					g34 = v14;
					v13 = v9;
					v12 = v10 - v9;
					// branch -> 0x50088
				} else {
					int32_t v15 = g34 + v10; // 0x50080
					g34 = v15;
					v14 = v15;
					v13 = v10;
					v12 = 0;
					// branch -> 0x50088
				}
				// 0x50088
				result = v14;
				v11 = v9 - v13;
				if (v9 == v13) {
					int32_t v16 = -768 - a1 + v14; // 0x50098
					g34 = v16;
					result = v16;
					v11 = a1;
					// branch -> 0x5009c
				}
				// 0x5009c
				if (v12 == 0) {
					// break -> 0x500a4
					break;
				}
				v9 = v11;
				v10 = v12;
				// continue -> 0x50064
			}
			v8 = v11;
			// branch -> 0x500a4
		} else {
			int32_t v17 = -v7; // 0x4ffec
			int32_t v18;       // r8
			int32_t v19;       // r9
			int32_t v20;       // 0x50040
			if (v4 > -66) {
				int32_t v21 = g34; // 0x5003c
				int32_t v22 = v5;  // 0x50034
				// branch -> 0x5002c
				while (true) {
					int32_t v23 = v17 - 1; // 0x50030
					v18 = v23;
					g37 = v22 + 1;
					unsigned char v24 = *(char *)(a2 + (int32_t) * (char *)v22); // 0x50038
					*(char *)v21 = v24;
					v20 = g34 + 1;
					g34 = v20;
					if (v23 != 0) {
						// 0x5002c
						v21 = v20;
						v17 = v18;
						v22 = g37;
						// branch -> 0x5002c
						continue;
					}
				}
			} else {
				int32_t v25 = -65 - v7; // 0x4fffc
				v19 = v1 - v25;
				v6 = v2 - 2;
				unsigned char v26 = *(char *)(a2 + (int32_t) * (char *)v5); // 0x50008
				int32_t v27 = v26;                                          // r0
				g37 = v3 + 2;
				int32_t v28 = g34; // 0x50014
				// branch -> 0x50010
				while (true) {
					int32_t v29 = v25 - 1; // 0x50010
					v18 = v29;
					*(char *)v28 = v26;
					int32_t v30 = g34 + 1; // 0x50018
					g34 = v30;
					if (v29 != 0) {
						// 0x50010
						v28 = v30;
						v26 = (char)v27;
						v25 = v18;
						// branch -> 0x50010
						continue;
					} else {
						v20 = v30;
					}
				}
			}
			int32_t v31 = v19; // 0x50048
			if (v31 == 0) {
				int32_t v32 = v20 - 768 - a1; // 0x50058
				g34 = v32;
				result = v32;
				v8 = a1;
				// branch -> 0x500a4
			} else {
				result = v20;
				v8 = v31;
			}
		}
		int32_t v33 = v6; // 0x500a4
		if (v33 == 0) {
			// break -> 0x500ac
			break;
		}
		v1 = v8;
		v2 = v33;
		// continue -> 0x4ffd8
	}
	// 0x500ac
	return result;
}

// Address range: 0x500b0 - 0x501a4
int32_t Cl2DecDatFrm4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = a1;
	int32_t v2 = g38; // 0x500c0
	                  // branch -> 0x500b8
lab_0x500b8:
	while (true) {
		int32_t v3 = g37;      // 0x500b8
		char v4 = *(char *)v3; // 0x500b8
		int32_t v5 = v3 + 1;   // 0x500bc
		g37 = v5;
		int32_t v6 = v2 - 1; // 0x500c0
		int32_t v7 = v6;     // r5
		int32_t v8 = v4;     // 0x500c4
		int32_t v9 = v8;
		int32_t v10;
		int32_t v11; // 0x50188
		int32_t v12; // 0x501883
		if (v4 <= 255) {
			int32_t v13 = -v8;                                     // 0x500cc
			uint32_t v14 = *(int32_t *)*(int32_t *)(g23 - 0x7808); // 0x5010c
			int32_t v15;                                           // r8
			int32_t v16;                                           // r9
			int32_t v17;                                           // 0x50148
			int32_t result;                                        // 0x501a0
			if (v4 <= -66) {
				int32_t v18 = -65 - v8;          // 0x500dc
				unsigned char v19 = *(char *)v5; // 0x500e0
				int32_t v20 = v19;               // r10
				g37 = v3 + 2;
				int32_t v21 = g34; // 0x500e8
				v7 = v2 - 2;
				if (v21 >= v14) {
					v9 = v18;
					goto lab_0x50158;
				}
				// 0x500f4
				v15 = v1 - v18;
				// branch -> 0x500f8
				while (true) {
					int32_t v22 = v18 - 1; // 0x500f8
					v16 = v22;
					*(char *)v21 = v19;
					int32_t v23 = g34 + 1; // 0x50100
					g34 = v23;
					if (v22 == 0) {
						v17 = v23;
						goto lab_0x50140;
					}
					// 0x500f8
					v21 = v23;
					v19 = (char)v20;
					v18 = v16;
					// branch -> 0x500f8
				}
			lab_0x501a0:
				// 0x501a0
				return result;
			}
			// 0x5010c
			v7 = v8 + v6;
			int32_t v24 = g34; // 0x50114
			int32_t v25;       // 0x50198
			int32_t v26;       // 0x500f47
			if (v24 < v14) {
				// 0x50124
				v15 = v8 + v1;
				int32_t v27 = v13; // 0x5012c
				int32_t v28 = v5;  // 0x50130
				// branch -> 0x50128
				while (true) {
					int32_t v29 = v27 - 1; // 0x5012c
					v16 = v29;
					g37 = v28 + 1;
					*(char *)v24 = *(char *)v28;
					int32_t v30 = g34 + 1; // 0x50138
					g34 = v30;
					if (v29 == 0) {
						v17 = v30;
					lab_0x50140:;
						int32_t v31 = v15; // 0x50140
						result = v17;
						v26 = v31;
						if (v31 == 0) {
							int32_t v32 = v17 - 768 - a1; // 0x50150
							g34 = v32;
							result = v32;
							v26 = a1;
							// branch -> 0x50198
						}
					lab_0x50198:
						// 0x50198
						v25 = v7;
						if (v25 == 0) {
							// break (via goto) -> 0x501a0
							goto lab_0x501a0;
						}
						v1 = v26;
						v2 = v25;
						// continue (via goto) -> 0x500b8
						goto lab_0x500b8;
					} else {
						// 0x50128
						v24 = v30;
						v27 = v16;
						v28 = g37;
						// branch -> 0x50128
						continue;
					}
				}
				// 0x501a0
				return result;
			}
			// 0x5011c
			g37 = v5 - v8;
			v9 = v13;
			// branch -> 0x50158
		lab_0x50158:
			// 0x50158
			v11 = a1;
			v12 = v1;
			v10 = v9;
			// branch -> 0x50158
		lab_0x50158_3:;
			int32_t v33; // 0x501884
			int32_t v34; // 0x501a019
			while (true) {
				// 0x50158
				int32_t v35;
				int32_t v36; // 0x5017c
				int32_t v37; // 0x50164
				if (v10 > v12) {
					// 0x50160
					v37 = g34 + v12;
					g34 = v37;
					v36 = v12;
					v35 = v10 - v12;
					// branch -> 0x5017c
				} else {
					int32_t v38 = g34 + v10; // 0x50174
					g34 = v38;
					v37 = v38;
					v36 = v10;
					v35 = 0;
					// branch -> 0x5017c
				}
				// 0x5017c
				v34 = v37;
				v33 = v12 - v36;
				if (v12 == v36) {
					int32_t v39 = -768 - v11 + v37; // 0x5018c
					g34 = v39;
					v34 = v39;
					v33 = v11;
					// branch -> 0x50190
				}
				// 0x50190
				if (v35 == 0) {
					// break -> 0x50198
					break;
				}
				v12 = v33;
				v10 = v35;
				// continue -> 0x50158
			}
			// 0x50198
			result = v34;
			v26 = v33;
			// branch -> 0x50198
			goto lab_0x50198;
			// 0x50198
			v25 = v7;
			if (v25 == 0) {
				// break -> 0x501a0
				break;
			}
			v1 = v26;
			v2 = v25;
			// continue -> 0x500b8
			continue;
		}
		// 0x50158
		v11 = a1;
		v12 = v1;
		v10 = v9;
		// branch -> 0x50158
		goto lab_0x50158_3;
	}
}

// Address range: 0x501a4 - 0x502c0
int32_t function_501a4(int32_t a1, char a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = a2;                         // r7
	int32_t v2 = *(int32_t *)(g23 - 0x7808); // r8
	int32_t v3 = a1;                         // r9
	int32_t v4 = a1;
	int32_t v5 = g38; // 0x501b4
	                  // branch -> 0x501ac
lab_0x501ac:
	while (true) {
		int32_t v6 = g37;      // 0x501ac
		char v7 = *(char *)v6; // 0x501ac
		int32_t v8 = v6 + 1;   // 0x501b0
		g37 = v8;
		int32_t v9 = v5 - 1; // 0x501b4
		int32_t v10 = v9;    // r5
		int32_t v11 = v7;    // 0x501b8
		int32_t v12 = v11;
		int32_t v13;
		int32_t v14; // 0x502a4
		int32_t v15; // 0x502a43
		if (v7 <= 255) {
			int32_t v16 = -v11; // 0x501c0
			int32_t v17 = v16;  // r10
			int32_t v18;        // 0x5025c
			int32_t v19;        // 0x50264
			if (v7 > -66) {
				// 0x50214
				v10 = v11 + v9;
				int32_t v20 = g34; // 0x5021c
				int32_t v21;       // 0x502b4
				int32_t result;    // 0x502bc
				int32_t v22;       // 0x5022c8
				if (v20 < *(int32_t *)v2) {
					// 0x5022c
					v3 = v11 + v4;
					int32_t v23 = v16; // 0x5025011
					int32_t v24 = v8;  // 0x50230
					// branch -> 0x50230
					while (true) {
						// 0x50230
						g37 = v24 + 1;
						int32_t v25 = v20; // 0x50254
						int32_t v26 = v23; // 0x50250
						if (*(char *)v24 != 0) {
							// 0x50240
							*(char *)(v20 - 1) = (char)v1;
							*(char *)(g34 + 1) = (char)v1;
							*(char *)(g34 - 768) = (char)v1;
							*(char *)(g34 + 768) = (char)v1;
							v25 = g34;
							v26 = v17;
							// branch -> 0x50250
						}
						int32_t v27 = v26 - 1; // 0x50250
						v17 = v27;
						int32_t v28 = v25 + 1; // 0x50254
						g34 = v28;
						if (v27 == 0) {
							v19 = v28;
							// 0x5025c
							v18 = v3;
							result = v19;
							v22 = v18;
							if (v18 == 0) {
							lab_0x50264:
								// 0x50264
								v3 = a1;
								int32_t v29 = v19 - 768 - a1; // 0x5026c
								g34 = v29;
								result = v29;
								v22 = a1;
								// branch -> 0x502b4
							}
						lab_0x502b4:
							// 0x502b4
							v21 = v10;
							if (v21 == 0) {
								// break (via goto) -> 0x502bc
								goto lab_0x502bc;
							}
							v4 = v22;
							v5 = v21;
							// continue (via goto) -> 0x501ac
							goto lab_0x501ac;
						} else {
							// 0x50250
							v23 = v27;
							v20 = v28;
							v24 = g37;
							// branch -> 0x50230
							continue;
						}
					}
				lab_0x502bc:
					// 0x502bc
					return result;
				}
				// 0x50224
				g37 = v8 - v11;
				v12 = v16;
				// branch -> 0x50274
			lab_0x50274_2:
				// 0x50274
				v14 = a1;
				v15 = v4;
				v13 = v12;
				// branch -> 0x50274
			lab_0x50274_4:;
				int32_t v30; // 0x502a44
				int32_t v31; // 0x502bc19
				while (true) {
					// 0x50274
					int32_t v32;
					int32_t v33; // 0x50298
					int32_t v34; // 0x50280
					if (v13 > v15) {
						// 0x5027c
						v34 = g34 + v15;
						g34 = v34;
						v33 = v15;
						v32 = v13 - v15;
						// branch -> 0x50298
					} else {
						int32_t v35 = g34 + v13; // 0x50290
						g34 = v35;
						v34 = v35;
						v33 = v13;
						v32 = 0;
						// branch -> 0x50298
					}
					// 0x50298
					v31 = v34;
					v30 = v15 - v33;
					if (v15 == v33) {
						int32_t v36 = -768 - v14 + v34; // 0x502a8
						g34 = v36;
						v31 = v36;
						v30 = v14;
						// branch -> 0x502ac
					}
					// 0x502ac
					if (v32 == 0) {
						// break -> 0x502b4
						break;
					}
					v15 = v30;
					v13 = v32;
					// continue -> 0x50274
				}
				// 0x502b4
				v3 = v30;
				result = v31;
				v22 = v30;
				// branch -> 0x502b4
				goto lab_0x502b4;
			lab_0x502b4_2:
				// 0x502b4
				v21 = v10;
				if (v21 == 0) {
					// break -> 0x502bc
					break;
				}
				v4 = v18;
				v5 = v21;
				// continue -> 0x501ac
				continue;
			} else {
				int32_t v37 = -65 - v11; // 0x501d0
				v17 = v37;
				v10 = v5 - 2;
				g37 = v6 + 2;
				if (*(char *)v8 == 0) {
					v12 = v37;
					goto lab_0x50274_2;
				}
				uint32_t v38 = g34; // 0x501e8
				if (v38 >= *(int32_t *)v2) {
					v12 = v37;
					goto lab_0x50274_2;
				}
				// 0x501f0
				*(char *)(v38 - 1) = (char)v1;
				int32_t v39 = v17; // 0x501f4
				v3 -= v39;
				*(char *)(g34 + v39) = (char)v1;
				*(char *)(g34 - 768) = (char)v1;
				int32_t v40 = v17 - 1; // 0x50200
				*(char *)(g34 + 768) = (char)v1;
				int32_t v41 = g34 + 1; // 0x50208
				g34 = v41;
				v19 = v41;
				// branch -> 0x501fc
				while (v40 != 0) {
					// 0x501fc
					*(char *)(v41 - 768) = (char)v1;
					v40--;
					*(char *)(g34 + 768) = (char)v1;
					v41 = g34 + 1;
					g34 = v41;
					v19 = v41;
					// continue -> 0x501fc
				}
				// 0x5025c
				v18 = v3;
				if (v18 == 0) {
					goto lab_0x50264;
				}
				goto lab_0x502b4_2;
			}
			// 0x50274
			v14 = a1;
			v15 = v4;
			v13 = v12;
			// branch -> 0x50274
			goto lab_0x50274_4;
		}
		// 0x50274
		v14 = a1;
		v15 = v4;
		v13 = v12;
		// branch -> 0x50274
		goto lab_0x50274_4;
	}
}

// Address range: 0x502c0 - 0x503bc
int32_t Cl2DecDatLightTbl2(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = a1;
	int32_t v2 = g38; // 0x502d0
	                  // branch -> 0x502c8
lab_0x502c8:
	while (true) {
		int32_t v3 = g37;               // 0x502c8
		unsigned char v4 = *(char *)v3; // 0x502c8
		int32_t v5 = v3 + 1;            // 0x502cc
		g37 = v5;
		int32_t v6 = v2 - 1; // 0x502d0
		int32_t v7 = v6;     // r5
		int32_t v8 = v4;     // 0x502d4
		int32_t v9 = v8;
		int32_t v10;
		int32_t v11; // 0x503a0
		int32_t v12; // 0x503a03
		if (v4 <= 255) {
			int32_t v13 = -v8;                                     // 0x502dc
			uint32_t v14 = *(int32_t *)*(int32_t *)(g23 - 0x7808); // 0x50320
			int32_t v15;                                           // r10
			int32_t v16;                                           // r9
			int32_t v17;                                           // 0x50360
			int32_t result;                                        // 0x503b8
			if (v4 <= -66) {
				int32_t v18 = -65 - v8; // 0x502ec
				g37 = v3 + 2;
				int32_t v19 = g34;                                          // 0x502f8
				unsigned char v20 = *(char *)(a2 + (int32_t) * (char *)v5); // 0x502fc
				int32_t v21 = v20;                                          // r0
				v7 = v2 - 2;
				if (v19 >= v14) {
					v9 = v18;
					goto lab_0x50370;
				}
				// 0x50308
				v16 = v1 - v18;
				// branch -> 0x5030c
				while (true) {
					int32_t v22 = v18 - 1; // 0x5030c
					v15 = v22;
					*(char *)v19 = v20;
					int32_t v23 = g34 + 1; // 0x50314
					g34 = v23;
					if (v22 == 0) {
						v17 = v23;
						goto lab_0x50358;
					}
					// 0x5030c
					v19 = v23;
					v20 = (char)v21;
					v18 = v15;
					// branch -> 0x5030c
				}
			lab_0x503b8:
				// 0x503b8
				return result;
			}
			// 0x50320
			v7 = v8 + v6;
			int32_t v24 = g34; // 0x50328
			int32_t v25;       // 0x503b0
			int32_t v26;       // 0x503087
			if (v24 < v14) {
				// 0x50338
				v16 = v8 + v1;
				int32_t v27 = v13; // 0x50340
				int32_t v28 = v5;  // 0x50344
				// branch -> 0x5033c
				while (true) {
					int32_t v29 = v27 - 1; // 0x50340
					v15 = v29;
					g37 = v28 + 1;
					unsigned char v30 = *(char *)(a2 + (int32_t) * (char *)v28); // 0x50348
					*(char *)v24 = v30;
					int32_t v31 = g34 + 1; // 0x50350
					g34 = v31;
					if (v29 == 0) {
						v17 = v31;
					lab_0x50358:;
						int32_t v32 = v16; // 0x50358
						result = v17;
						v26 = v32;
						if (v32 == 0) {
							int32_t v33 = v17 - 768 - a1; // 0x50368
							g34 = v33;
							result = v33;
							v26 = a1;
							// branch -> 0x503b0
						}
					lab_0x503b0:
						// 0x503b0
						v25 = v7;
						if (v25 == 0) {
							// break (via goto) -> 0x503b8
							goto lab_0x503b8;
						}
						v1 = v26;
						v2 = v25;
						// continue (via goto) -> 0x502c8
						goto lab_0x502c8;
					} else {
						// 0x5033c
						v24 = v31;
						v27 = v15;
						v28 = g37;
						// branch -> 0x5033c
						continue;
					}
				}
				// 0x503b8
				return result;
			}
			// 0x50330
			g37 = v5 - v8;
			v9 = v13;
			// branch -> 0x50370
		lab_0x50370:
			// 0x50370
			v11 = a1;
			v12 = v1;
			v10 = v9;
			// branch -> 0x50370
		lab_0x50370_3:;
			int32_t v34; // 0x503a04
			int32_t v35; // 0x503b819
			while (true) {
				// 0x50370
				int32_t v36;
				int32_t v37; // 0x50394
				int32_t v38; // 0x5037c
				if (v10 > v12) {
					// 0x50378
					v38 = g34 + v12;
					g34 = v38;
					v37 = v12;
					v36 = v10 - v12;
					// branch -> 0x50394
				} else {
					int32_t v39 = g34 + v10; // 0x5038c
					g34 = v39;
					v38 = v39;
					v37 = v10;
					v36 = 0;
					// branch -> 0x50394
				}
				// 0x50394
				v35 = v38;
				v34 = v12 - v37;
				if (v12 == v37) {
					int32_t v40 = -768 - v11 + v38; // 0x503a4
					g34 = v40;
					v35 = v40;
					v34 = v11;
					// branch -> 0x503a8
				}
				// 0x503a8
				if (v36 == 0) {
					// break -> 0x503b0
					break;
				}
				v12 = v34;
				v10 = v36;
				// continue -> 0x50370
			}
			// 0x503b0
			result = v35;
			v26 = v34;
			// branch -> 0x503b0
			goto lab_0x503b0;
			// 0x503b0
			v25 = v7;
			if (v25 == 0) {
				// break -> 0x503b8
				break;
			}
			v1 = v26;
			v2 = v25;
			// continue -> 0x502c8
			continue;
		}
		// 0x50370
		v11 = a1;
		v12 = v1;
		v10 = v9;
		// branch -> 0x50370
		goto lab_0x50370_3;
	}
}

// Address range: 0x503bc - 0x50478
int32_t function_503bc(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x503c0
	g36 = a3;
	g35 = a1;
	g33 = *(int32_t *)(g23 - 0x7804);
	g28 = a2;
	g29 = a4;
	g30 = a5;
	g31 = a6;
	g32 = a7;
	g34 = a3;
	int32_t v2 = function_c9b28(); // 0x503f0
	int32_t result;                // 0x50460
	if (*(int32_t *)g33 == 0 || v2 == 0) {
		// 0x5045c
		result = function_c9b70((int32_t *)g36);
		g10 = v1;
		return result;
	}
	int32_t v3 = g29; // 0x50408
	if (v3 < 1) {
		// 0x5045c
		result = function_c9b70((int32_t *)g36);
		g10 = v1;
		return result;
	}
	// 0x50410
	int32_t v4;                                         // bp-40
	int32_t v5 = function_4d7e8(v2, v3, g31, g32, &v4); // 0x50420
	if (v5 != 0) {
		int32_t v6 = *(int32_t *)g33; // 0x50438
		g38 = v4;
		int32_t v7 = *(int32_t *)(4 * (g28 + -16 * g31) + *(int32_t *)(g23 - 0x7698)); // 0x50444
		g37 = v5;
		int32_t v8 = v7 + v6 + g35; // 0x50454
		g34 = v8;
		function_4fe04(v8, v5, v4, g30, v6);
		// branch -> 0x5045c
	}
	// 0x5045c
	result = function_c9b70((int32_t *)g36);
	g10 = v1;
	return result;
}

// Address range: 0x50478 - 0x5053c
int32_t function_50478(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x5047c
	g35 = a4;
	g32 = a1;
	g31 = *(int32_t *)(g23 - 0x7804);
	g33 = a2;
	g27 = a3;
	g28 = a5;
	g36 = a6;
	g29 = a7;
	g30 = g13;
	g34 = a4;
	int32_t v2 = function_c9b28(); // 0x504b0
	int32_t result;                // 0x50524
	if (*(int32_t *)g31 == 0 || v2 == 0) {
		// 0x50520
		result = function_c9b70((int32_t *)g35);
		g10 = v1;
		return result;
	}
	int32_t v3 = g28; // 0x504c8
	if (v3 < 1) {
		// 0x50520
		result = function_c9b70((int32_t *)g35);
		g10 = v1;
		return result;
	}
	// 0x504d0
	int32_t v4;                                         // bp-56
	int32_t v5 = function_4d7e8(v2, v3, g29, g30, &v4); // 0x504e0
	if (v5 != 0) {
		g38 = v4;
		int32_t v6 = *(int32_t *)(4 * (g27 + -16 * g29) + *(int32_t *)(g23 - 0x7698)); // 0x50504
		g37 = v5;
		int32_t v7 = v6 + *(int32_t *)g31 + g33; // 0x50514
		g34 = v7;
		function_4fed8(v7, (char)v5, v4, g36, g32);
		// branch -> 0x50520
	}
	// 0x50520
	result = function_c9b70((int32_t *)g35);
	g10 = v1;
	return result;
}

// Address range: 0x5053c - 0x50650
int32_t function_5053c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x50540
	g33 = a3;
	g32 = a1;
	g31 = *(int32_t *)(g23 - 0x7804);
	g27 = a2;
	g28 = a4;
	g35 = a5;
	g29 = a6;
	g30 = a7;
	g36 = g13;
	g34 = a3;
	int32_t v2 = function_c9b28(); // 0x50574
	int32_t result;                // 0x50638
	if (*(int32_t *)g31 == 0 || v2 == 0) {
		// 0x50634
		result = function_c9b70((int32_t *)g33);
		g10 = v1;
		return result;
	}
	int32_t v3 = g28; // 0x5058c
	if (v3 < 1) {
		// 0x50634
		result = function_c9b70((int32_t *)g33);
		g10 = v1;
		return result;
	}
	// 0x50594
	int32_t v4;                                         // bp-56
	int32_t v5 = function_4d7e8(v2, v3, g29, g30, &v4); // 0x505a4
	g37 = v5;
	if (v5 == 0) {
		// 0x50634
		result = function_c9b70((int32_t *)g33);
		g10 = v1;
		return result;
	}
	int32_t v6 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 4 * (g27 + -16 * g29)); // 0x505c8
	g34 = *(int32_t *)g31 + v6 + g32;
	int32_t v7 = *(int32_t *)*(int32_t *)(g23 - 0x776c) == 0 ? 0x1000 : 1024;
	int32_t v8 = 0x1000000 * g36;                 // 0x505ec
	int32_t v9 = v8 == 0x2000000 ? v7 | 256 : v7; // 0x505f4
	int32_t v10;                                  // 0x5062c
	if (v8 >= 0x4000000) {
		// 0x5060c
		v10 = v8 / 0x10000 - 256 + v9;
		// branch -> 0x5061c
	} else {
		v10 = v9;
	}
	g38 = v4;
	function_4ffd0(v4, g35, *(int32_t *)*(int32_t *)(g23 - 0x7770) + v10);
	// branch -> 0x50634
	// 0x50634
	result = function_c9b70((int32_t *)g33);
	g10 = v1;
	return result;
}

// Address range: 0x50650 - 0x50738
int32_t function_50650(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x50654
	g35 = a3;
	g33 = a1;
	g32 = *(int32_t *)(g23 - 0x7804);
	g28 = a2;
	g29 = a4;
	g36 = a5;
	g30 = a6;
	g31 = a7;
	g34 = a3;
	int32_t v2 = function_c9b28(); // 0x50684
	int32_t result;                // 0x50720
	if (*(int32_t *)g32 == 0 || v2 == 0) {
		// 0x5071c
		result = function_c9b70((int32_t *)g35);
		g10 = v1;
		return result;
	}
	int32_t v3 = g29; // 0x5069c
	if (v3 < 1) {
		// 0x5071c
		result = function_c9b70((int32_t *)g35);
		g10 = v1;
		return result;
	}
	// 0x506a4
	int32_t v4;                                         // bp-40
	int32_t v5 = function_4d7e8(v2, v3, g30, g31, &v4); // 0x506b4
	g37 = v5;
	if (v5 == 0) {
		// 0x5071c
		result = function_c9b70((int32_t *)g35);
		g10 = v1;
		return result;
	}
	int32_t v6 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 4 * (g28 + -16 * g30)); // 0x506d8
	int32_t v7 = *(int32_t *)g32 + v6 + g33;                                       // 0x506e8
	g34 = v7;
	if (*(int32_t *)*(int32_t *)(g23 - 0x7290) == 0) {
		g38 = v4;
		function_4fe04(v7, v5, v4, g36, 0);
		// branch -> 0x5071c
	} else {
		g38 = v4;
		function_4ffd0(v7, v5, v4);
		// branch -> 0x5071c
	}
	// 0x5071c
	result = function_c9b70((int32_t *)g35);
	g10 = v1;
	return result;
}

// Address range: 0x50738 - 0x507f4
int32_t Cl2DecodeFrm4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x5073c
	g36 = a3;
	g35 = a1;
	g33 = *(int32_t *)(g23 - 0x7804);
	g28 = a2;
	g29 = a4;
	g30 = a5;
	g31 = a6;
	g32 = a7;
	g34 = a3;
	int32_t v2 = function_c9b28(); // 0x5076c
	int32_t result;                // 0x507dc
	if (*(int32_t *)g33 == 0 || v2 == 0) {
		// 0x507d8
		result = function_c9b70((int32_t *)g36);
		g10 = v1;
		return result;
	}
	int32_t v3 = g29; // 0x50784
	if (v3 < 1) {
		// 0x507d8
		result = function_c9b70((int32_t *)g36);
		g10 = v1;
		return result;
	}
	// 0x5078c
	int32_t v4;                                         // bp-40
	int32_t v5 = function_4d7e8(v2, v3, g31, g32, &v4); // 0x5079c
	if (v5 != 0) {
		int32_t v6 = *(int32_t *)g33; // 0x507b4
		g38 = v4;
		int32_t v7 = *(int32_t *)(4 * (g28 + -16 * g31) + *(int32_t *)(g23 - 0x7698)); // 0x507c0
		g37 = v5;
		int32_t v8 = v7 + v6 + g35; // 0x507d0
		g34 = v8;
		Cl2DecDatFrm4(v8, v5, v4, g30, v6);
		// branch -> 0x507d8
	}
	// 0x507d8
	result = function_c9b70((int32_t *)g36);
	g10 = v1;
	return result;
}

// Address range: 0x507f4 - 0x508d4
int32_t function_507f4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x507f8
	g33 = a4;
	g36 = *(int32_t *)(g23 - 0x7808);
	g31 = a1;
	g30 = *(int32_t *)(g23 - 0x7804);
	g32 = a2;
	g26 = a3;
	g27 = a5;
	g35 = a6;
	g28 = a7;
	g29 = g13;
	g34 = a4;
	int32_t v2 = function_c9b28(); // 0x50830
	int32_t result;                // 0x508bc
	if (*(int32_t *)g30 == 0 || v2 == 0 || g27 < 1) {
		// 0x508b8
		result = function_c9b70((int32_t *)g33);
		g10 = v1;
		return result;
	}
	// 0x50850
	int32_t v3;                                          // bp-56
	int32_t v4 = function_4d7e8(v2, g27, g28, g29, &v3); // 0x50860
	if (v4 != 0) {
		int32_t *v5 = (int32_t *)g36;                                                  // 0x50878
		int32_t v6 = *(int32_t *)(4 * (g26 + -16 * g28) + *(int32_t *)(g23 - 0x7698)); // 0x50884
		g37 = v4;
		*v5 = *v5 - 768;
		int32_t v7 = v3; // 0x5089c
		g38 = v7;
		int32_t v8 = g32 + v6 + *(int32_t *)g30; // 0x508a0
		g34 = v8;
		function_501a4(v8, (char)v4, v7, g35, g31);
		int32_t *v9 = (int32_t *)g36; // 0x508ac
		*v9 = *v9 + 768;
		// branch -> 0x508b8
	}
	// 0x508b8
	result = function_c9b70((int32_t *)g33);
	g10 = v1;
	return result;
}

// Address range: 0x508d4 - 0x509e8
int32_t Cl2DecodeFrm5(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x508d8
	g33 = a3;
	g32 = a1;
	g31 = *(int32_t *)(g23 - 0x7804);
	g27 = a2;
	g28 = a4;
	g35 = a5;
	g29 = a6;
	g30 = a7;
	g36 = g13;
	g34 = a3;
	int32_t v2 = function_c9b28(); // 0x5090c
	int32_t result;                // 0x509d0
	if (*(int32_t *)g31 == 0 || v2 == 0) {
		// 0x509cc
		result = function_c9b70((int32_t *)g33);
		g10 = v1;
		return result;
	}
	int32_t v3 = g28; // 0x50924
	if (v3 < 1) {
		// 0x509cc
		result = function_c9b70((int32_t *)g33);
		g10 = v1;
		return result;
	}
	// 0x5092c
	int32_t v4;                                         // bp-56
	int32_t v5 = function_4d7e8(v2, v3, g29, g30, &v4); // 0x5093c
	g37 = v5;
	if (v5 == 0) {
		// 0x509cc
		result = function_c9b70((int32_t *)g33);
		g10 = v1;
		return result;
	}
	int32_t v6 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 4 * (g27 + -16 * g29)); // 0x50960
	g34 = *(int32_t *)g31 + v6 + g32;
	int32_t v7 = *(int32_t *)*(int32_t *)(g23 - 0x776c) == 0 ? 0x1000 : 1024;
	int32_t v8 = 0x1000000 * g36;                 // 0x50984
	int32_t v9 = v8 == 0x2000000 ? v7 | 256 : v7; // 0x5098c
	int32_t v10;                                  // 0x509c4
	if (v8 >= 0x4000000) {
		// 0x509a4
		v10 = v8 / 0x10000 - 256 + v9;
		// branch -> 0x509b4
	} else {
		v10 = v9;
	}
	g38 = v4;
	Cl2DecDatLightTbl2(v4, g35, *(int32_t *)*(int32_t *)(g23 - 0x7770) + v10);
	// branch -> 0x509cc
	// 0x509cc
	result = function_c9b70((int32_t *)g33);
	g10 = v1;
	return result;
}

// Address range: 0x509e8 - 0x50ad0
int32_t Cl2DecodeFrm6(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x509ec
	g35 = a3;
	g33 = a1;
	g32 = *(int32_t *)(g23 - 0x7804);
	g28 = a2;
	g29 = a4;
	g36 = a5;
	g30 = a6;
	g31 = a7;
	g34 = a3;
	int32_t v2 = function_c9b28(); // 0x50a1c
	int32_t result;                // 0x50ab8
	if (*(int32_t *)g32 == 0 || v2 == 0) {
		// 0x50ab4
		result = function_c9b70((int32_t *)g35);
		g10 = v1;
		return result;
	}
	int32_t v3 = g29; // 0x50a34
	if (v3 < 1) {
		// 0x50ab4
		result = function_c9b70((int32_t *)g35);
		g10 = v1;
		return result;
	}
	// 0x50a3c
	int32_t v4;                                         // bp-40
	int32_t v5 = function_4d7e8(v2, v3, g30, g31, &v4); // 0x50a4c
	g37 = v5;
	if (v5 == 0) {
		// 0x50ab4
		result = function_c9b70((int32_t *)g35);
		g10 = v1;
		return result;
	}
	int32_t v6 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 4 * (g28 + -16 * g30)); // 0x50a70
	int32_t v7 = *(int32_t *)g32 + v6 + g33;                                       // 0x50a80
	g34 = v7;
	if (*(int32_t *)*(int32_t *)(g23 - 0x7290) == 0) {
		g38 = v4;
		Cl2DecDatFrm4(v7, v5, v4, g36, 0);
		// branch -> 0x50ab4
	} else {
		g38 = v4;
		Cl2DecDatLightTbl2(v7, v5, v4);
		// branch -> 0x50ab4
	}
	// 0x50ab4
	result = function_c9b70((int32_t *)g35);
	g10 = v1;
	return result;
}

// Address range: 0x50ad0 - 0x50b38
int32_t PlayInGameMovie(int32_t a1)
{
	int32_t v1 = g36; // 0x50ad0
	g36 = a1;
	PaletteFadeOut(8);
	function_b336c(play_movie(g36, 0));
	g36 = 255;
	*(int32_t *)g35 = 255;
	scrollrt_draw_game_screen(1);
	int32_t result = PaletteFadeIn(8); // r3
	*(int32_t *)g35 = g36;
	g36 = v1;
	return result;
}
