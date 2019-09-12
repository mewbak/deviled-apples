
// Address range: 0xc1044 - 0xc10d8
int32_t town_clear_upper_buf(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7808); // 0xc1044
	int32_t v2 = 30;                         // r6
	int32_t v3 = 4;                          // r7
	int32_t result = g34;
	if (result < *(int32_t *)v1) {
		// .loopexit
		return result;
	}
	int32_t v4 = 30; // 0xc106025
	int32_t v5 = 4;  // 0xc106424
lab_0xc1060:
	while (true) {
		int32_t v6 = result + v4; // 0xc1060
		int32_t v7 = v5;          // 0xc1068
		// branch -> 0xc1068
		int32_t result2;
		while (true) {
			int32_t v8 = v7 - 1; // 0xc1068
			int32_t v9 = v8;     // r4
			*(char *)v6 = (char)0;
			int32_t v10 = v6;      // 0xc1070
			int32_t v11 = v10 + 1; // 0xc1070
			if (v8 == 0) {
				int32_t v12 = v2;     // 0xc1078
				int32_t v13 = v3 + 4; // 0xc107c
				v3 = v13;
				int32_t v14 = v12 - 2; // 0xc1080
				v2 = v14;
				int32_t v15 = v10 - 831 + v12; // 0xc1084
				int32_t result3;               // 0xc10a0
				if (v14 == 0) {
					// 0xc108c
					v2 = 2;
					v3 = 60;
					int32_t v16 = 60; // 0xc10a8
					int32_t v17 = 2;  // 0xc10a4
					result3 = v15;
					// branch -> 0xc1098
				lab_0xc1098:
					while (true) {
						// 0xc1098
						if (result3 >= *(int32_t *)v1) {
							int32_t v18 = result3 + v17; // 0xc10a4
							v6 = v18;
							int32_t v19 = v16; // 0xc10ac
							// branch -> 0xc10ac
							while (true) {
								int32_t v20 = v19 - 1; // 0xc10ac
								v9 = v20;
								*(char *)v18 = (char)0;
								int32_t v21 = v6;      // 0xc10b4
								int32_t v22 = v21 + 1; // 0xc10b4
								v6 = v22;
								if (v20 == 0) {
									int32_t v23 = v2;      // 0xc10bc
									int32_t v24 = v23 + 2; // 0xc10c0
									v2 = v24;
									int32_t v25 = v21 - 831 + v23; // 0xc10c8
									int32_t v26 = v3 - 4;          // 0xc10cc
									v3 = v26;
									if (v24 == 32) {
										result2 = v25;
										// break (via goto) -> .loopexit
										goto lab__loopexit_2;
									}
									v16 = v26;
									v17 = v24;
									result3 = v25;
									// continue (via goto) -> 0xc1098
									goto lab_0xc1098;
								} else {
									// 0xc10ac
									v18 = v22;
									v19 = v9;
									// branch -> 0xc10ac
									continue;
								}
							}
							// .loopexit
							return result2;
						}
					}
				} else {
					// 0xc1078
					if (v15 < *(int32_t *)v1) {
						result2 = v15;
						// break (via goto) -> .loopexit
						goto lab__loopexit_2;
					}
					result = v15;
					v4 = v14;
					v5 = v13;
					// continue (via goto) -> 0xc1060
					goto lab_0xc1060;
				}
				// .loopexit
				return result3;
			}
			// 0xc1068
			v6 = v11;
			v7 = v9;
			// branch -> 0xc1068
		}
	lab__loopexit_2:
		// .loopexit
		return result2;
	}
}

// Address range: 0xc10d8 - 0xc117c
int32_t town_clear_low_buf(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7808); // 0xc10d8
	int32_t v2 = 30;                         // 0xc10fc
	int32_t v3 = g34;                        // 0xc10fc
	// branch -> 0xc10e8
	while (true) {
		// 0xc10e8
		int32_t v4; // r6
		int32_t v5; // r7
		int32_t v6;
		int32_t v7;  // 0xc1118
		int32_t v8;  // 0xc1148
		int32_t v9;  // 0xc114c
		int32_t v10; // 0xc1148
		if (v3 < *(int32_t *)v1) {
			int32_t v11 = v3 + v2; // 0xc10fc
			int32_t v12 = 4;       // 0xc1104
			// branch -> 0xc1104
			while (true) {
				int32_t v13 = v12 - 1; // 0xc1104
				*(char *)v11 = (char)0;
				int32_t v14 = v11 + 1; // 0xc110c
				if (v13 == 0) {
					int32_t v15 = 30; // 0xc1114
					v7 = v15;
					v6 = v15 + v14;
					// branch -> 0xc1118
				lab_0xc1118:
					// 0xc1118
					if (v7 != 2) {
					lab_0xc1118_2:
						// 0xc1118
						// branch -> 0xc10e8
						break;
					}
					// 0xc1128
					v4 = 2;
					v5 = 60;
					v9 = 60;
					v10 = 2;
					v8 = v6 - 832;
					// branch -> 0xc1134
					int32_t result; // 0xc1170
					while (true) {
						// 0xc1134
						int32_t v16;
						int32_t v17; // 0xc1164
						int32_t v18; // 0xc1168
						int32_t v19; // 0xc1164
						int32_t v20; // 0xc1168
						if (v8 < *(int32_t *)v1) {
						lab_0xc1148:;
							int32_t v21 = v8 + v10; // 0xc1148
							v11 = v21;
							int32_t v22 = v9; // 0xc1150
							// branch -> 0xc1150
							while (true) {
								int32_t v23 = v22 - 1; // 0xc1150
								int32_t v24 = v23;     // r4
								*(char *)v21 = (char)0;
								int32_t v25 = v11 + 1; // 0xc1158
								v11 = v25;
								if (v23 == 0) {
									int32_t v26 = v4; // 0xc1160
									v18 = v5;
									v17 = v26;
									v16 = v26 + v25;
									// branch -> 0xc1164
								lab_0xc1164:
									// 0xc1164
									v19 = v17 + 2;
									v4 = v19;
									v20 = v18 - 4;
									v5 = v20;
									result = v16 - 832;
									if (v19 == 32) {
										// break (via goto) -> 0xc1178
										goto lab_0xc1178;
									}
									v9 = v20;
									v10 = v19;
									v8 = result;
									// continue (via goto) -> 0xc1134
									goto lab_0xc1134;
								} else {
									// 0xc1150
									v21 = v25;
									v22 = v24;
									// branch -> 0xc1150
									continue;
								}
							}
							// 0xc1178
							return result;
						}
					lab_0xc1140:
						// 0xc1140
						v18 = v9;
						v17 = v10;
						v16 = v8 + 64;
						// branch -> 0xc1164
						goto lab_0xc1164;
						// 0xc1164
						v19 = v17 + 2;
						v4 = v19;
						v20 = v18 - 4;
						v5 = v20;
						result = v16 - 832;
						v11 = result;
						if (v19 == 32) {
							// break -> 0xc1178
							break;
						}
						v9 = v20;
						v10 = v19;
						v8 = result;
						// continue -> 0xc1134
					}
				lab_0xc1178:
					// 0xc1178
					return result;
				}
				// 0xc1104
				v11 = v14;
				v12 = v13;
				// branch -> 0xc1104
			}
		} else {
			// 0xc10f4
			v7 = v2;
			v6 = v3 + 64;
			// branch -> 0xc1118
			goto lab_0xc1118;
		}
		// 0xc1118
		if (v7 != 2) {
			goto lab_0xc1118_2;
		}
		// 0xc1128
		v4 = 2;
		v5 = 60;
		v9 = 60;
		v10 = 2;
		v8 = v6 - 832;
		// branch -> 0xc1134
	lab_0xc1134:
		while (true) {
			// 0xc1134
			if (v8 < *(int32_t *)v1) {
				goto lab_0xc1148;
			}
			goto lab_0xc1140;
		}
	}
}

// Address range: 0xc117c - 0xc1188
int32_t function_c117c(int32_t result, int32_t a2)
{
	// 0xc117c
	return result;
}

// Address range: 0xc1188 - 0xc1194
int32_t function_c1188(int32_t result, int32_t a2)
{
	// 0xc1188
	return result;
}

// Address range: 0xc1194 - 0xc1258
int32_t function_c1194(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	g29 = a3;
	g36 = *(int32_t *)(g23 - 0x6f50);
	g30 = a4;
	g31 = a5;
	g33 = a1;
	g34 = a2;
	g37 = a3;
	int32_t v1 = function_52378(); // 0xc11c8
	g32 = 0;
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x7584) + 32 * v1; // 0xc11dc
	g35 = v2;
	// branch -> 0xc11e4
	while (true) {
		uint16_t v3 = *(int16_t *)v2; // 0xc11e4
		*(int32_t *)g36 = (int32_t)v3;
		if (v3 != 0) {
			// 0xc11f4
			function_d8e58(g33);
			// branch -> 0xc11fc
		}
		uint16_t v4 = *(int16_t *)(g35 + 2); // 0xc11fc
		*(int32_t *)g36 = (int32_t)v4;
		if (v4 != 0) {
			// 0xc120c
			function_d8e58(g33 + 32);
			// branch -> 0xc1214
		}
		int32_t v5 = g32 + 2; // 0xc1214
		g32 = v5;
		int32_t v6 = g35 + 4; // 0xc1218
		g35 = v6;
		g33 -= 0x6000;
		if (v5 >= 12) {
			// break -> 0xc1228
			break;
		}
		v2 = v6;
		// continue -> 0xc11e4
	}
	int32_t result = function_c1258(a1, a2, g29, g30, g31, 0); // 0xc1240
	return result;
}

// Address range: 0xc1258 - 0xc16a0
int32_t function_c1258(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	// 0xc1258
	g31 = a1;
	int32_t v1 = g10;                        // 0xc1260
	int32_t v2 = *(int32_t *)(g23 - 0x768c); // 0xc1264
	int32_t v3 = 112 * a1;                   // 0xc1268
	g19 = v3;
	g32 = a2;
	g33 = a3;
	g21 = *(int32_t *)(g23 - 0x775c);
	g22 = *(int32_t *)(g23 - 0x77a8);
	g35 = a4;
	g24 = *(int32_t *)(g23 - 0x7680);
	g36 = a5;
	g25 = *(int32_t *)(g23 - 0x7750);
	g26 = *(int32_t *)(g23 - 0x7758);
	g27 = *(int32_t *)(g23 - 0x767c);
	int32_t v4 = *(int32_t *)(g23 - 0x779c); // 0xc12a0
	g28 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x7690); // 0xc12a4
	g29 = v5;
	unsigned char v6 = *(char *)(*(int32_t *)v2 + a2 + v3);         // 0xc12b8
	int32_t v7 = *(int32_t *)(4 * a4 + *(int32_t *)(g23 - 0x7698)); // 0xc12bc
	g30 = v7 + a3 + *(int32_t *)*(int32_t *)(g23 - 0x7804);
	if (v6 != 0) {
		int32_t v8 = (0x1000000 * (int32_t)v6 - 0x1000000) / 0x1000000; // 0xc12dc
		int32_t v9 = 368 * v8;                                          // 0xc12e0
		g20 = v9;
		int32_t v10 = v9 + v5;                     // 0xc12e8
		int32_t v11 = a3 - *(int32_t *)(v10 + 40); // 0xc12f8
		g18 = v11;
		int32_t v12 = a4;  // 0xc1334
		int32_t v13 = v11; // 0xc132c
		if (v8 == (int32_t) * (char *)*(int32_t *)(g23 - 0x7748)) {
			// 0xc1300
			g37 = v11;
			int32_t v14 = *(int32_t *)(v10 + 32); // 0xc1308
			g40 = v14;
			g38 = a4;
			g41 = *(int32_t *)(v10 + 36);
			g42 = 0;
			g13 = 8;
			CelDrawHdrClrHL(181, v11, a4, *(int32_t *)(v10 + 24), v14);
			v12 = g35;
			v13 = g18;
			v9 = g20;
			v5 = g29;
			// branch -> 0xc1324
		}
		int32_t v15 = v5 + v9;                // 0xc1324
		int32_t v16 = *(int32_t *)(v15 + 32); // 0xc1330
		g39 = v16;
		g37 = v12;
		int32_t v17 = *(int32_t *)(v15 + 36); // 0xc1338
		g40 = v17;
		g41 = 0;
		g42 = 8;
		function_4e4c8(v13, v12, *(int32_t *)(v15 + 24), v16, v17, 0, 8);
		a2 = g32;
		v3 = g19;
		v4 = g28;
		// branch -> 0xc1348
	}
	unsigned char v18 = *(char *)(*(int32_t *)v4 + v3 + a2); // 0xc1350
	if (__asm_rlwinm_((int32_t)v18, 0, 27, 27) != 0) {
		int16_t v19 = *(int16_t *)(2 * g32 + *(int32_t *)g27 + 224 * g31 - 2); // 0xc1374
		int32_t v20 = g35;                                                     // 0xc1378
		g18 = v20;
		int32_t v21 = -1 - (int32_t)v19; // 0xc1380
		int32_t v22 = 268 * v21;         // 0xc1384
		g20 = v22;
		int32_t v23 = g26 + v22;                    // 0xc138c
		int32_t v24 = g33 - *(int32_t *)(v23 + 68); // 0xc1394
		int32_t v25 = v20;                          // 0xc13d0
		int32_t v26 = v24;                          // 0xc13c8
		if (v21 == *(int32_t *)g25) {
			// 0xc139c
			g39 = *(int32_t *)(v23 + 36);
			g37 = v24;
			g40 = *(int32_t *)(v23 + 52);
			g38 = v20;
			g41 = *(int32_t *)(v23 + 64);
			g42 = 0;
			g13 = 8;
			CelDrawHdrClrHL_part(-90);
			v25 = g18;
			v26 = g29;
			v22 = g20;
			// branch -> 0xc13c0
		}
		int32_t v27 = g26 + v22; // 0xc13c0
		g38 = *(int32_t *)(v27 + 36);
		g39 = *(int32_t *)(v27 + 52);
		g37 = v25;
		g40 = *(int32_t *)(v27 + 64);
		g41 = 0;
		g42 = 8;
		function_4e4f8(v26);
		// branch -> 0xc13e4
	}
	uint16_t v28 = *(int16_t *)(2 * g32 + 224 * g31 + *(int32_t *)g27); // 0xc13f4
	if (v28 >= 1) {
		int32_t v29 = (int32_t)v28 - 1; // 0xc1400
		int32_t v30 = *(int32_t *)g25;  // 0xc1404
		int32_t v31 = 268 * v29;        // 0xc1408
		g18 = v31;
		int32_t v32 = g26 + v31; // 0xc1410
		int32_t v33 = g35;       // 0xc1418
		g25 = v33;
		int32_t v34 = g33 - *(int32_t *)(v32 + 68); // 0xc141c
		g20 = v34;
		int32_t v35 = v33; // 0xc1458
		int32_t v36 = v34; // 0xc1450
		if (v29 == v30) {
			// 0xc1424
			g39 = *(int32_t *)(v32 + 36);
			g37 = v34;
			g40 = *(int32_t *)(v32 + 52);
			g38 = v33;
			g41 = *(int32_t *)(v32 + 64);
			g42 = 0;
			g13 = 8;
			CelDrawHdrClrHL_part(-90);
			v35 = g25;
			v36 = g20;
			v31 = g18;
			// branch -> 0xc1448
		}
		int32_t v37 = g26 + v31; // 0xc1448
		g38 = *(int32_t *)(v37 + 36);
		g39 = *(int32_t *)(v37 + 52);
		g37 = v35;
		g40 = *(int32_t *)(v37 + 64);
		g41 = 0;
		g42 = 8;
		function_4e4f8(v36);
		// branch -> 0xc146c
	}
	unsigned char v38 = *(char *)(g19 + g32 + *(int32_t *)g28); // 0xc1474
	int32_t v39;                                                // 0xc1598
	int32_t v40;                                                // 0xc15e4
	int32_t v41;                                                // 0xc15ec
	int32_t v42;                                                // 0xc15f4
	int32_t v43;                                                // 0xc1638
	int32_t v44;                                                // 0xc166c
	int32_t result;                                             // 0xc169c
	int32_t v45;                                                // 0xc1594
	int32_t v46;                                                // 0xc15e4
	int32_t v47;                                                // 0xc1638
	int32_t v48;                                                // 0xc166c
	char v49;                                                   // 0xc158c
	int32_t v50;                                                // 0xc1590
	int32_t v51;                                                // 0xc1598
	int32_t v52;                                                // 0xc15b4
	int32_t v53;                                                // 0xc15b8
	int32_t v54;                                                // 0xc15e4
	int32_t v55;                                                // 0xc1670
	int32_t v56;                                                // 0xc15c8
	int32_t v57;                                                // 0xc15d0
	int32_t v58;                                                // 0xc15f0
	int32_t v59;                                                // 0xc15f8
	unsigned char v60;                                          // 0xc1548
	unsigned char v61;                                          // 0xc157c
	char v62;                                                   // 0xc1674
	if (__asm_rlwinm_((int32_t)v38, 0, 26, 26) == 0) {
		// 0xc1540
		v60 = *(char *)(g32 + g19 + *(int32_t *)g28);
		if (__asm_rlwinm_((int32_t)v60, 0, 29, 29) != 0) {
			// 0xc1554
			function_af6d0(g31, g32, g33, g35, 0, 8, 1);
			// branch -> 0xc1574
		}
		// 0xc1574
		v61 = *(char *)(g32 + g19 + *(int32_t *)g24);
		if (v61 < 1) {
			// 0xc1634
			v43 = g19;
			v47 = g32;
			v48 = v47;
			v44 = v43;
			if (*(char *)(v47 + v43 + *(int32_t *)g28) % 2 != 0) {
				// 0xc1648
				function_aeb58(g31, v47, g33, g35, 0, 8, 0);
				v48 = g32;
				v44 = g19;
				// branch -> 0xc1668
			}
			// 0xc1668
			v55 = *(int32_t *)*(int32_t *)(g23 - 0x7598);
			v62 = *(char *)(v55 + v44 + v48);
			if (v62 != 0) {
				// 0xc1680
				result = function_c117c(g30, (int32_t)v62);
				// branch -> 0xc168c
			} else {
				result = v55;
			}
			// 0xc168c
			g10 = v1;
			return result;
		}
		// 0xc1588
		v49 = *(char *)g21;
		v50 = (0x1000000 * (int32_t)v61 - 0x1000000) / 0x1000000;
		v45 = 0x55ec * v50;
		g18 = v45;
		v39 = g22;
		v51 = v39 + v45;
		v52 = g35 + *(int32_t *)(v51 + 100);
		g21 = v52;
		v53 = g33 + *(int32_t *)(v51 + 96) - *(int32_t *)(v51 + 148);
		g20 = v53;
		v42 = v52;
		v41 = v53;
		v46 = v45;
		v40 = v39;
		if (v50 == (int32_t)v49) {
			// 0xc15c0
			v56 = *(int32_t *)(v51 + 140);
			v57 = *(int32_t *)(v51 + 144);
			g13 = 8;
			function_507f4(165, v53, v52, *(int32_t *)(v51 + 124), v56, v57, 0);
			v42 = g21;
			v41 = g20;
			v46 = g18;
			v40 = g22;
			// branch -> 0xc15e4
		}
		// 0xc15e4
		v54 = v40 + v46;
		g18 = v54;
		v58 = *(int32_t *)(v54 + 140);
		v59 = *(int32_t *)(v54 + 144);
		Cl2DecodeFrm4(v41, v42, *(int32_t *)(v54 + 124), v58, v59, 0, 8);
		if (g36 == 0) {
			// 0xc1634
			v43 = g19;
			v47 = g32;
			v48 = v47;
			v44 = v43;
			if (*(char *)(v47 + v43 + *(int32_t *)g28) % 2 != 0) {
				// 0xc1648
				function_aeb58(g31, v47, g33, g35, 0, 8, 0);
				v48 = g32;
				v44 = g19;
				// branch -> 0xc1668
			}
			// 0xc1668
			v55 = *(int32_t *)*(int32_t *)(g23 - 0x7598);
			v62 = *(char *)(v55 + v44 + v48);
			if (v62 != 0) {
				// 0xc1680
				result = function_c117c(g30, (int32_t)v62);
				// branch -> 0xc168c
			} else {
				result = v55;
			}
			// 0xc168c
			g10 = v1;
			return result;
		}
		// 0xc1610
		if (*(int32_t *)(g18 + 152) != 0) {
			// 0xc161c
			function_c1194(g30 - 64, g31 - 1, g32 + 1, g33 - 64, g35);
			// branch -> 0xc1634
		}
		// 0xc1634
		v43 = g19;
		v47 = g32;
		v48 = v47;
		v44 = v43;
		if (*(char *)(v47 + v43 + *(int32_t *)g28) % 2 != 0) {
			// 0xc1648
			function_aeb58(g31, v47, g33, g35, 0, 8, 0);
			v48 = g32;
			v44 = g19;
			// branch -> 0xc1668
		}
		// 0xc1668
		v55 = *(int32_t *)*(int32_t *)(g23 - 0x7598);
		v62 = *(char *)(v55 + v44 + v48);
		if (v62 != 0) {
			// 0xc1680
			result = function_c117c(g30, (int32_t)v62);
			// branch -> 0xc168c
		} else {
			result = v55;
		}
		// 0xc168c
		g10 = v1;
		return result;
	}
	unsigned char v63 = *(char *)(g19 + *(int32_t *)g24 + g32 - 1); // 0xc1490
	int32_t v64 = 0x1000000 * (-1 - (int32_t)v63) / 0x1000000;      // 0xc14a0
	int32_t v65 = 0x55ec * v64;                                     // 0xc14a4
	g18 = v65;
	int32_t v66 = g22 + v65;                     // 0xc14ac
	int32_t v67 = g35 + *(int32_t *)(v66 + 100); // 0xc14c0
	g25 = v67;
	int32_t v68 = g33 + *(int32_t *)(v66 + 96) - *(int32_t *)(v66 + 148); // 0xc14c4
	g20 = v68;
	int32_t v69 = v67; // 0xc1500
	int32_t v70 = v68; // 0xc14f8
	if (v64 == (int32_t) * (char *)g21) {
		int32_t v71 = *(int32_t *)(v66 + 140); // 0xc14d4
		int32_t v72 = *(int32_t *)(v66 + 144); // 0xc14dc
		g13 = 8;
		function_507f4(165, v68, v67, *(int32_t *)(v66 + 124), v71, v72, 0);
		v69 = g25;
		v70 = g20;
		v65 = g18;
		// branch -> 0xc14f0
	}
	int32_t v73 = g22 + v65; // 0xc14f0
	g18 = v73;
	int32_t v74 = *(int32_t *)(v73 + 140); // 0xc14fc
	int32_t v75 = *(int32_t *)(v73 + 144); // 0xc1504
	Cl2DecodeFrm4(v70, v69, *(int32_t *)(v73 + 124), v74, v75, 0, 8);
	if (g36 == 0) {
		// 0xc1540
		v60 = *(char *)(g32 + g19 + *(int32_t *)g28);
		if (__asm_rlwinm_((int32_t)v60, 0, 29, 29) != 0) {
			// 0xc1554
			function_af6d0(g31, g32, g33, g35, 0, 8, 1);
			// branch -> 0xc1574
		}
		// 0xc1574
		v61 = *(char *)(g32 + g19 + *(int32_t *)g24);
		if (v61 >= 1) {
			// 0xc1588
			v49 = *(char *)g21;
			v50 = (0x1000000 * (int32_t)v61 - 0x1000000) / 0x1000000;
			v45 = 0x55ec * v50;
			g18 = v45;
			v39 = g22;
			v51 = v39 + v45;
			v52 = g35 + *(int32_t *)(v51 + 100);
			g21 = v52;
			v53 = g33 + *(int32_t *)(v51 + 96) - *(int32_t *)(v51 + 148);
			g20 = v53;
			v42 = v52;
			v41 = v53;
			v46 = v45;
			v40 = v39;
			if (v50 == (int32_t)v49) {
				// 0xc15c0
				v56 = *(int32_t *)(v51 + 140);
				v57 = *(int32_t *)(v51 + 144);
				g13 = 8;
				function_507f4(165, v53, v52, *(int32_t *)(v51 + 124), v56, v57, 0);
				v42 = g21;
				v41 = g20;
				v46 = g18;
				v40 = g22;
				// branch -> 0xc15e4
			}
			// 0xc15e4
			v54 = v40 + v46;
			g18 = v54;
			v58 = *(int32_t *)(v54 + 140);
			v59 = *(int32_t *)(v54 + 144);
			Cl2DecodeFrm4(v41, v42, *(int32_t *)(v54 + 124), v58, v59, 0, 8);
			if (g36 != 0) {
				// 0xc1610
				if (*(int32_t *)(g18 + 152) != 0) {
					// 0xc161c
					function_c1194(g30 - 64, g31 - 1, g32 + 1, g33 - 64, g35);
					// branch -> 0xc1634
				}
			}
		}
		// 0xc1634
		v43 = g19;
		v47 = g32;
		v48 = v47;
		v44 = v43;
		if (*(char *)(v47 + v43 + *(int32_t *)g28) % 2 != 0) {
			// 0xc1648
			function_aeb58(g31, v47, g33, g35, 0, 8, 0);
			v48 = g32;
			v44 = g19;
			// branch -> 0xc1668
		}
		// 0xc1668
		v55 = *(int32_t *)*(int32_t *)(g23 - 0x7598);
		v62 = *(char *)(v55 + v44 + v48);
		if (v62 != 0) {
			// 0xc1680
			result = function_c117c(g30, (int32_t)v62);
			// branch -> 0xc168c
		} else {
			result = v55;
		}
		// 0xc168c
		g10 = v1;
		return result;
	}
	// 0xc151c
	if (*(int32_t *)(g18 + 152) != 0) {
		// 0xc1528
		function_c1194(g30 - 64, g31 - 1, g32 + 1, g33 - 64, g35);
		// branch -> 0xc1540
	}
	// 0xc1540
	v60 = *(char *)(g32 + g19 + *(int32_t *)g28);
	if (__asm_rlwinm_((int32_t)v60, 0, 29, 29) != 0) {
		// 0xc1554
		function_af6d0(g31, g32, g33, g35, 0, 8, 1);
		// branch -> 0xc1574
	}
	// 0xc1574
	v61 = *(char *)(g32 + g19 + *(int32_t *)g24);
	if (v61 >= 1) {
		// 0xc1588
		v49 = *(char *)g21;
		v50 = (0x1000000 * (int32_t)v61 - 0x1000000) / 0x1000000;
		v45 = 0x55ec * v50;
		g18 = v45;
		v39 = g22;
		v51 = v39 + v45;
		v52 = g35 + *(int32_t *)(v51 + 100);
		g21 = v52;
		v53 = g33 + *(int32_t *)(v51 + 96) - *(int32_t *)(v51 + 148);
		g20 = v53;
		v42 = v52;
		v41 = v53;
		v46 = v45;
		v40 = v39;
		if (v50 == (int32_t)v49) {
			// 0xc15c0
			v56 = *(int32_t *)(v51 + 140);
			v57 = *(int32_t *)(v51 + 144);
			g13 = 8;
			function_507f4(165, v53, v52, *(int32_t *)(v51 + 124), v56, v57, 0);
			v42 = g21;
			v41 = g20;
			v46 = g18;
			v40 = g22;
			// branch -> 0xc15e4
		}
		// 0xc15e4
		v54 = v40 + v46;
		g18 = v54;
		v58 = *(int32_t *)(v54 + 140);
		v59 = *(int32_t *)(v54 + 144);
		Cl2DecodeFrm4(v41, v42, *(int32_t *)(v54 + 124), v58, v59, 0, 8);
		if (g36 != 0) {
			// 0xc1610
			if (*(int32_t *)(g18 + 152) != 0) {
				// 0xc161c
				function_c1194(g30 - 64, g31 - 1, g32 + 1, g33 - 64, g35);
				// branch -> 0xc1634
			}
		}
	}
	// 0xc1634
	v43 = g19;
	v47 = g32;
	v48 = v47;
	v44 = v43;
	if (*(char *)(v47 + v43 + *(int32_t *)g28) % 2 != 0) {
		// 0xc1648
		function_aeb58(g31, v47, g33, g35, 0, 8, 0);
		v48 = g32;
		v44 = g19;
		// branch -> 0xc1668
	}
	// 0xc1668
	v55 = *(int32_t *)*(int32_t *)(g23 - 0x7598);
	v62 = *(char *)(v55 + v44 + v48);
	if (v62 != 0) {
		// 0xc1680
		result = function_c117c(g30, (int32_t)v62);
		// branch -> 0xc168c
	} else {
		result = v55;
	}
	// 0xc168c
	g10 = v1;
	return result;
}

// Address range: 0xc16a0 - 0xc1a44
int32_t function_c16a0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = g10; // 0xc16a4
	g31 = a6;
	int32_t v2 = *(int32_t *)(g23 - 0x757c); // 0xc16ac
	g33 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7698); // 0xc16b0
	g32 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7804); // 0xc16b4
	g35 = v4;
	g26 = a1;
	int32_t v5 = *(int32_t *)(g23 - 0x6f50); // 0xc16bc
	g36 = v5;
	g27 = a2;
	g25 = *(int32_t *)(g23 - 0x7584);
	g28 = a3;
	g29 = a4;
	g30 = a5;
	int32_t result4 = a1; // 0xc1a4026
	int32_t v6 = a1;      // 0xc17f4
	int32_t v7 = a3;      // 0xc190818
	int32_t v8 = a2;      // 0xc1804
	int32_t v9 = v3;      // 0xc1800
	int32_t v10 = 0;      // 0xc17fc
	int32_t v11 = a4;     // 0xc17f8
	int32_t v12;          // r15
	int32_t v13;          // r16
	int32_t v14;          // r17
	int32_t v15;          // 0xc1818
	int32_t v16;          // 0xc1828
	int32_t v17;          // 0xc1834
	uint32_t v18;         // 0xc195c
	uint32_t v19;         // 0xc1964
	int32_t v20;          // 0xc1998
	int32_t v21;          // 0xc17f4
	int32_t v22;          // 0xc1804
	int32_t v23;          // 0xc1834
	int32_t v24;          // 0xc1908
	int32_t result3;      // 0xc1a2c
	int32_t v25;          // 0xc17fc
	int32_t v26;          // 0xc19a8
	uint16_t v27;         // 0xc19ac
	int32_t v28;          // 0xc1a04
	int32_t v29;          // 0xc1a10
	int32_t v30;          // 0xc1a28
	int16_t v31;          // 0xc196c
	if (a6 != 0) {
		// 0xc16e0
		int32_t v32; // 0xc17e8
		int32_t v33; // 0xc17ec
		int32_t v34; // 0xc17f0
		if (a2 >= 0) {
			// 0xc16e8
			if (a2 <= 111) {
				// 0xc16f0
				if (a1 >= 0) {
					// 0xc16f8
					if (a1 <= 111) {
						int16_t v35 = *(int16_t *)(*(int32_t *)v2 + 2 * a2 + 224 * a1); // 0xc1710
						*(int32_t *)v5 = (int32_t)v35;
						int32_t v36 = 4 * g29;         // 0xc17b4
						int32_t v37 = *(int32_t *)g35; // 0xc17b8
						int32_t v38;                   // 0xc1a4027
						if (v35 == 0) {
							int32_t v39 = *(int32_t *)(g32 + v36) + v37 + g28; // 0xc17c4
							g34 = v39;
							v38 = town_clear_low_buf(v39);
							// branch -> 0xc17e8
						} else {
							int32_t v40 = g32 + v36; // 0xc1728
							g34 = g26;
							g37 = g27;
							v12 = v37 + 32 + g28 + *(int32_t *)v40;
							int32_t v41 = function_52378();               // 0xc1744
							int32_t v42 = 1;                              // r18
							int32_t v43 = *(int32_t *)g25 + 32 * v41 + 2; // 0xc1758
							v13 = v43;
							// branch -> 0xc175c
							while (true) {
								uint16_t v44 = *(int16_t *)v43; // 0xc175c
								*(int32_t *)g36 = (int32_t)v44;
								if (v44 != 0) {
									// 0xc176c
									function_d8e58(v12);
									// branch -> 0xc1774
								}
								int32_t v45 = v42 + 2; // 0xc1774
								v42 = v45;
								int32_t v46 = v13 + 4; // 0xc1778
								v13 = v46;
								v12 -= 0x6000;
								if (v45 >= 17) {
									// break -> 0xc1788
									break;
								}
								v43 = v46;
								// continue -> 0xc175c
							}
							int32_t v47 = g28;                                     // 0xc1798
							int32_t v48 = *(int32_t *)g35 + *(int32_t *)v40 + v47; // 0xc179c
							v38 = function_c1258(v48, g26, g27, v47, g29, 0);
							// branch -> 0xc17e8
						}
						// 0xc17e8
						v32 = g26 + 1;
						g26 = v32;
						v33 = g27 - 1;
						g27 = v33;
						v34 = g28 + 64;
						g28 = v34;
						v6 = v32;
						v7 = v34;
						v8 = v33;
						v10 = g31;
						// branch -> 0xc17f4
						// 0xc17f4
						v21 = 224 * v6;
						g24 = v21;
						v25 = g30 - v10;
						g30 = v25;
						g21 = 4 * g29 + g32;
						v22 = 2 * v8;
						g22 = v22;
						g32 = 0;
						int32_t result = v38; // 0xc1a4025
						int32_t v49 = v7;     // 0xc1a24
						v18 = v6;
						v19 = v8;
						int32_t v50 = v10; // 0xc1934
						if (v25 > 0) {
							v24 = v7;
							v23 = v22;
							v17 = v21;
							v16 = v6;
							v15 = v8;
							int32_t v51; // 0xc1a4028
							int32_t v52; // 0xc1918
							int32_t v53; // 0xc1920
							int32_t v54; // 0xc1924
							while (true) {
								// 0xc1810
								if (v15 >= 0) {
								lab_0xc1818:
									// 0xc1818
									if (v15 <= 111) {
										// 0xc1820
										if (v16 >= 0) {
											// 0xc1828
											if (v16 <= 111) {
												int16_t v55 = *(int16_t *)(*(int32_t *)g33 + v17 + v23); // 0xc1838
												*(int32_t *)g36 = (int32_t)v55;
												int32_t v56 = *(int32_t *)g21; // 0xc18e8
												if (*(int32_t *)g36 == 0) {
													int32_t v57 = *(int32_t *)g35 + v56 + g28; // 0xc18f4
													g34 = v57;
													v51 = town_clear_low_buf(v57);
													// branch -> 0xc1914
												} else {
													// 0xc184c
													g34 = g26;
													g37 = g27;
													v14 = *(int32_t *)g35 + v56 + g28;
													int32_t v58 = function_52378(); // 0xc1864
													v13 = 0;
													int32_t v59 = *(int32_t *)g25 + 32 * v58; // 0xc1874
													v12 = v59;
													// branch -> 0xc1878
													while (true) {
														uint16_t v60 = *(int16_t *)v59; // 0xc1878
														*(int32_t *)g36 = (int32_t)v60;
														if (v60 != 0) {
															// 0xc1888
															function_d8e58(v14);
															// branch -> 0xc1890
														}
														uint16_t v61 = *(int16_t *)(v12 + 2); // 0xc1890
														*(int32_t *)g36 = (int32_t)v61;
														if (v61 != 0) {
															// 0xc18a0
															function_d8e58(v14 + 32);
															// branch -> 0xc18a8
														}
														int32_t v62 = v13 + 2; // 0xc18a8
														v13 = v62;
														int32_t v63 = v12 + 4; // 0xc18ac
														v12 = v63;
														v14 -= 0x6000;
														if (v62 >= 16) {
															// break -> 0xc18bc
															break;
														}
														v59 = v63;
														// continue -> 0xc1878
													}
													int32_t v64 = g28;                                     // 0xc18cc
													int32_t v65 = *(int32_t *)g35 + *(int32_t *)g21 + v64; // 0xc18d0
													v51 = function_c1258(v65, g26, g27, v64, g29, 1);
													// branch -> 0xc1914
												}
											lab_0xc1914:;
												int32_t v66 = g24 + 224; // 0xc1914
												g24 = v66;
												v52 = g26 + 1;
												g26 = v52;
												int32_t v67 = g22 - 2; // 0xc191c
												g22 = v67;
												v53 = g27 - 1;
												g27 = v53;
												v54 = g28 + 64;
												g28 = v54;
												int32_t v68 = g32 + 1; // 0xc1928
												g32 = v68;
												if (v68 >= g30) {
													// break -> 0xc192c
													break;
												}
												v24 = v54;
												v23 = v67;
												v17 = v66;
												v16 = v52;
												v15 = v53;
												// continue -> 0xc1810
												continue;
											}
										}
									}
								}
							lab_0xc1900:;
								int32_t v69 = *(int32_t *)g21 + v24 + *(int32_t *)g35; // 0xc190c
								g34 = v69;
								v51 = town_clear_low_buf(v69);
								// branch -> 0xc1914
								goto lab_0xc1914;
							}
							// 0xc192c
							result = v51;
							v49 = v54;
							v18 = v52;
							v19 = v53;
							v50 = g31;
							// branch -> 0xc1934
						}
						// 0xc1934
						if (v50 == 0) {
							// 0xc1a30
							g10 = v1;
							return result;
						}
						// 0xc193c
						if (v19 >= 0) {
							// 0xc1944
							if (v19 <= 111) {
								// 0xc194c
								if (v18 >= 0) {
									// 0xc1954
									if (v18 <= 111) {
										// 0xc195c
										v31 = *(int16_t *)(*(int32_t *)g33 + 2 * v19 + 224 * v18);
										*(int32_t *)g36 = (int32_t)v31;
										v28 = *(int32_t *)g21;
										int32_t result2; // 0xc1a40
										if (*(int32_t *)g36 == 0) {
											// 0xc1a04
											v29 = *(int32_t *)g35 + v28 + g28;
											g34 = v29;
											result2 = town_clear_low_buf(v29);
											// branch -> 0xc1a30
										} else {
											// 0xc1980
											g34 = g26;
											g37 = g27;
											v13 = *(int32_t *)g35 + v28 + g28;
											v20 = function_52378();
											v12 = 0;
											v26 = *(int32_t *)g25 + 32 * v20;
											v14 = v26;
											int32_t v70 = v26; // 0xc19ac
											// branch -> 0xc19ac
											while (true) {
												// 0xc19ac
												v27 = *(int16_t *)v70;
												*(int32_t *)g36 = (int32_t)v27;
												if (v27 != 0) {
												lab_0xc19bc:
													// 0xc19bc
													function_d8e58(v13);
													// branch -> 0xc19c4
												}
											lab_0xc19c4:;
												int32_t v71 = v12 + 2; // 0xc19c4
												v12 = v71;
												int32_t v72 = v14 + 4; // 0xc19c8
												v14 = v72;
												v13 -= 0x6000;
												if (v71 >= 16) {
													// break -> 0xc19d8
													break;
												}
												v70 = v72;
												// continue -> 0xc19ac
											}
											int32_t v73 = g28;                                     // 0xc19e8
											int32_t v74 = *(int32_t *)g35 + *(int32_t *)g21 + v73; // 0xc19ec
											result2 = function_c1258(v74, g26, g27, v73, g29, 0);
											// branch -> 0xc1a30
										}
										// 0xc1a30
										g10 = v1;
										return result2;
									}
								}
							}
						}
						// 0xc1a1c
						v30 = *(int32_t *)g21 + v49 + *(int32_t *)g35;
						g34 = v30;
						result3 = town_clear_low_buf(v30);
						// branch -> 0xc1a30
						// 0xc1a30
						g10 = v1;
						return result3;
					}
				}
			}
		}
		int32_t v75 = *(int32_t *)v4 + a3 + *(int32_t *)(4 * a4 + v3); // 0xc17e0
		g34 = v75;
		// branch -> 0xc17e8
		// 0xc17e8
		v32 = g26 + 1;
		g26 = v32;
		v33 = g27 - 1;
		g27 = v33;
		v34 = g28 + 64;
		g28 = v34;
		result4 = town_clear_low_buf(v75);
		v6 = v32;
		v7 = v34;
		v8 = v33;
		v9 = g32;
		a5 = g30;
		v10 = g31;
		v11 = g29;
		// branch -> 0xc17f4
	}
	// 0xc17f4
	v21 = 224 * v6;
	g24 = v21;
	v25 = a5 - v10;
	g30 = v25;
	g21 = 4 * v11 + v9;
	v22 = 2 * v8;
	g22 = v22;
	g32 = 0;
	v18 = v6;
	v19 = v8;
	if (v25 > 0) {
		v24 = v7;
		v23 = v22;
		v17 = v21;
		v16 = v6;
		v15 = v8;
		while (true) {
			// 0xc1810
			if (v15 < 0) {
				goto lab_0xc1900;
			}
			goto lab_0xc1818;
		}
	}
	// 0xc1934
	if (v10 == 0) {
		// 0xc1a30
		g10 = v1;
		return result4;
	}
	// 0xc193c
	if (v19 < 0 || v19 > 111 || v18 < 0 || v18 > 111) {
		// 0xc1a1c
		v30 = *(int32_t *)g21 + v7 + *(int32_t *)g35;
		g34 = v30;
		result3 = town_clear_low_buf(v30);
		// branch -> 0xc1a30
		// 0xc1a30
		g10 = v1;
		return result3;
	}
	// 0xc195c
	v31 = *(int16_t *)(*(int32_t *)g33 + 2 * v19 + 224 * v18);
	*(int32_t *)g36 = (int32_t)v31;
	v28 = *(int32_t *)g21;
	int32_t result5; // 0xc1a14
	if (*(int32_t *)g36 == 0) {
		// 0xc1a04
		v29 = *(int32_t *)g35 + v28 + g28;
		g34 = v29;
		result5 = town_clear_low_buf(v29);
		// branch -> 0xc1a30
	} else {
		// 0xc1980
		g34 = g26;
		g37 = g27;
		v13 = *(int32_t *)g35 + v28 + g28;
		v20 = function_52378();
		v12 = 0;
		v26 = *(int32_t *)g25 + 32 * v20;
		v14 = v26;
		// branch -> 0xc19ac
		while (true) {
			// 0xc19ac
			v27 = *(int16_t *)v26;
			*(int32_t *)g36 = (int32_t)v27;
			if (v27 == 0) {
				goto lab_0xc19c4;
			}
			goto lab_0xc19bc;
		}
	}
	// 0xc1a30
	g10 = v1;
	return result5;
}

// Address range: 0xc1a44 - 0xc1b38
int32_t function_c1a44(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	g28 = a4;
	g36 = *(int32_t *)(g23 - 0x6f50);
	g25 = a1;
	g26 = a2;
	g27 = a3;
	g29 = a5;
	g30 = a6;
	g31 = a7;
	int32_t v1 = a1;
	if (a4 != 0) {
		// 0xc1a80
		v1 = a1 + 0x6000 * a4;
		// branch -> 0xc1a88
	}
	// 0xc1a88
	g33 = v1;
	g34 = a2;
	g37 = a3;
	int32_t v2 = 32 * function_52378(); // 0xc1a98
	int32_t result = v2;                // r3
	g32 = 0;
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x7584) + v2; // 0xc1aa4
	g35 = v3;
	int32_t v4 = 0; // 0xc1aac
	// branch -> 0xc1aac
	while (true) {
		// 0xc1aac
		int32_t v5; // 0xc1ae4
		int32_t v6; // 0xc1ae8
		if (g28 <= v4) {
			uint16_t v7 = *(int16_t *)(v3 + 4); // 0xc1ab4
			*(int32_t *)g36 = (int32_t)v7;
			if (v7 != 0) {
				// 0xc1ac4
				result = function_d8e58(g33);
				// branch -> 0xc1acc
			}
			uint16_t v8 = *(int16_t *)(g35 + 6); // 0xc1acc
			*(int32_t *)g36 = (int32_t)v8;
			if (v8 != 0) {
				// 0xc1adc
				result = function_d8e58(g33 + 32);
				// branch -> 0xc1ae4
			}
			// 0xc1ae4
			v5 = g32 + 1;
			g32 = v5;
			v6 = g35 + 4;
			g35 = v6;
			g33 -= 0x6000;
			if (v5 >= 6) {
				// break -> 0xc1af8
				break;
			}
			v3 = v6;
			v4 = v5;
			// continue -> 0xc1aac
			continue;
		}
		// 0xc1ae4
		v5 = g32 + 1;
		g32 = v5;
		v6 = g35 + 4;
		g35 = v6;
		g33 -= 0x6000;
		if (v5 >= 6) {
			// break -> 0xc1af8
			break;
		}
		v3 = v6;
		v4 = v5;
		// continue -> 0xc1aac
	}
	int32_t v9 = g29; // 0xc1af8
	if (v9 > 7) {
		// branch -> 0xc1b24
	} else {
		// 0xc1b00
		g13 = 0;
		result = function_c1b38(g25, g26, g27, g28, v9, g30, g31);
		// branch -> 0xc1b24
	}
	// 0xc1b24
	return result;
}

// Address range: 0xc1b38 - 0xc1f84
int32_t function_c1b38(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	g18 = a2;
	int32_t v1 = g10;                        // 0xc1b40
	int32_t v2 = *(int32_t *)(g23 - 0x768c); // 0xc1b44
	int32_t v3 = 112 * a2;                   // 0xc1b48
	g27 = v3;
	g19 = a3;
	g29 = *(int32_t *)(g23 - 0x775c);
	g30 = *(int32_t *)(g23 - 0x77a8);
	g20 = a4;
	g31 = *(int32_t *)(g23 - 0x7680);
	g17 = a1;
	g32 = *(int32_t *)(g23 - 0x7750);
	g21 = a5;
	g33 = *(int32_t *)(g23 - 0x7758);
	g35 = *(int32_t *)(g23 - 0x767c);
	g22 = a6;
	int32_t v4 = *(int32_t *)(g23 - 0x779c); // 0xc1b78
	g36 = v4;
	g24 = a7;
	int32_t v5 = *(int32_t *)(g23 - 0x7690); // 0xc1b80
	g16 = v5;
	g25 = g13;
	unsigned char v6 = *(char *)(*(int32_t *)v2 + a3 + v3); // 0xc1b98
	if (v6 != 0) {
		int32_t v7 = (0x1000000 * (int32_t)v6 - 0x1000000) / 0x1000000; // 0xc1bac
		int32_t v8 = 368 * v7;                                          // 0xc1bb0
		int32_t v9 = v8 + v5;                                           // 0xc1bb8
		int32_t v10 = a6 - *(int32_t *)(v9 + 40);                       // 0xc1bc8
		g26 = v10;
		int32_t v11 = a5;  // 0xc1c0c
		int32_t v12 = a7;  // 0xc1c04
		int32_t v13 = v10; // 0xc1bfc
		if (v7 == (int32_t) * (char *)*(int32_t *)(g23 - 0x7748)) {
			// 0xc1bd0
			g37 = v10;
			int32_t v14 = *(int32_t *)(v9 + 32); // 0xc1bd8
			g40 = v14;
			g38 = a7;
			g41 = *(int32_t *)(v9 + 36);
			g42 = a5;
			g13 = 8;
			CelDrawHdrClrHL(181, v10, a7, *(int32_t *)(v9 + 24), v14);
			v11 = g21;
			v12 = g24;
			v13 = g26;
			v8 = g28;
			v5 = g16;
			// branch -> 0xc1bf4
		}
		int32_t v15 = v5 + v8;                // 0xc1bf4
		int32_t v16 = *(int32_t *)(v15 + 32); // 0xc1c00
		g39 = v16;
		g37 = v12;
		int32_t v17 = *(int32_t *)(v15 + 36); // 0xc1c08
		g40 = v17;
		g41 = v11;
		g42 = 8;
		function_4e4c8(v13, v12, *(int32_t *)(v15 + 24), v16, v17, v11, 8);
		a3 = g19;
		v3 = g27;
		v4 = g36;
		// branch -> 0xc1c18
	}
	int32_t v18 = *(int32_t *)v4; // 0xc1c18
	if (__asm_rlwinm_((int32_t) * (char *)(v18 + v3 + a3), 0, 27, 27) != 0) {
		int32_t v19 = *(int32_t *)g35 + 224 * g18;                     // 0xc1c38
		int32_t v20 = -1 - (int32_t) * (int16_t *)(2 * g19 + v19 - 2); // 0xc1c4c
		int32_t v21 = 268 * v20;                                       // 0xc1c50
		g16 = v21;
		int32_t v22 = g33 + v21;                    // 0xc1c58
		int32_t v23 = g22 - *(int32_t *)(v22 + 68); // 0xc1c60
		g26 = v23;
		int32_t v24 = v23; // 0xc1c94
		if (v20 == *(int32_t *)g32) {
			// 0xc1c68
			g39 = *(int32_t *)(v22 + 36);
			g37 = v23;
			g40 = *(int32_t *)(v22 + 52);
			g38 = g24;
			g41 = *(int32_t *)(v22 + 64);
			g42 = g21;
			g13 = 8;
			CelDrawHdrClrHL_part(-90);
			v24 = g26;
			v21 = g16;
			// branch -> 0xc1c8c
		}
		int32_t v25 = g33 + v21; // 0xc1c8c
		g38 = *(int32_t *)(v25 + 36);
		g39 = *(int32_t *)(v25 + 52);
		g37 = g24;
		g40 = *(int32_t *)(v25 + 64);
		g41 = g21;
		g42 = 8;
		function_4e4f8(v24);
		// branch -> 0xc1cb0
	}
	uint16_t v26 = *(int16_t *)(2 * g19 + 224 * g18 + *(int32_t *)g35); // 0xc1cc0
	if (v26 >= 1) {
		int32_t v27 = (int32_t)v26 - 1; // 0xc1ccc
		int32_t v28 = 268 * v27;        // 0xc1cd4
		g16 = v28;
		int32_t v29 = g33 + v28;                    // 0xc1cdc
		int32_t v30 = g22 - *(int32_t *)(v29 + 68); // 0xc1ce4
		g26 = v30;
		int32_t v31 = v30; // 0xc1d18
		if (v27 == *(int32_t *)g32) {
			// 0xc1cec
			g39 = *(int32_t *)(v29 + 36);
			g37 = v30;
			g40 = *(int32_t *)(v29 + 52);
			g38 = g24;
			g41 = *(int32_t *)(v29 + 64);
			g42 = g21;
			g13 = 8;
			CelDrawHdrClrHL_part(-90);
			v31 = g26;
			v28 = g16;
			// branch -> 0xc1d10
		}
		int32_t v32 = g33 + v28; // 0xc1d10
		g38 = *(int32_t *)(v32 + 36);
		g39 = *(int32_t *)(v32 + 52);
		g37 = g24;
		g40 = *(int32_t *)(v32 + 64);
		g41 = g21;
		g42 = 8;
		function_4e4f8(v31);
		// branch -> 0xc1d34
	}
	unsigned char v33 = *(char *)(g27 + g19 + *(int32_t *)g36); // 0xc1d3c
	int32_t v34;                                                // 0xc1e68
	int32_t v35;                                                // 0xc1eb4
	int32_t v36;                                                // 0xc1ebc
	int32_t v37;                                                // 0xc1ec4
	int32_t v38;                                                // 0xc1f10
	int32_t v39;                                                // 0xc1f40
	int32_t v40;                                                // 0xc1f44
	int32_t result;                                             // 0xc1f80
	int32_t v41;                                                // 0xc1e64
	int32_t v42;                                                // 0xc1eb4
	int32_t v43;                                                // 0xc1f10
	int32_t v44;                                                // 0xc1f44
	int32_t v45;                                                // 0xc1e60
	int32_t v46;                                                // 0xc1e68
	int32_t v47;                                                // 0xc1e84
	int32_t v48;                                                // 0xc1e88
	int32_t v49;                                                // 0xc1eb4
	int32_t v50;                                                // 0xc1f48
	int32_t v51;                                                // 0xc1e98
	int32_t v52;                                                // 0xc1ea0
	int32_t v53;                                                // 0xc1ec0
	int32_t v54;                                                // 0xc1ec8
	unsigned char v55;                                          // 0xc1e18
	unsigned char v56;                                          // 0xc1e4c
	unsigned char v57;                                          // 0xc1f4c
	int32_t v58;                                                // 0xc1f64
	if (__asm_rlwinm_((int32_t)v33, 0, 26, 26) == 0) {
		// 0xc1e10
		v55 = *(char *)(g19 + g27 + *(int32_t *)g36);
		if (__asm_rlwinm_((int32_t)v55, 0, 29, 29) != 0) {
			// 0xc1e24
			function_af6d0(g18, g19, g22, g24, g21, 8, 1);
			// branch -> 0xc1e44
		}
		// 0xc1e44
		v56 = *(char *)(g19 + g27 + *(int32_t *)g31);
		if (v56 < 1) {
			// 0xc1f0c
			v38 = g27;
			v43 = g19;
			v44 = v43;
			v40 = v38;
			if (*(char *)(v43 + v38 + *(int32_t *)g36) % 2 != 0) {
				// 0xc1f20
				function_aeb58(g18, v43, g22, g24, g21, 8, 0);
				v44 = g19;
				v40 = g27;
				// branch -> 0xc1f40
			}
			// 0xc1f40
			v39 = g23;
			v50 = *(int32_t *)*(int32_t *)(v39 - 0x7598);
			v57 = *(char *)(v50 + v40 + v44);
			if (v57 != 0) {
				// 0xc1f58
				v58 = *(int32_t *)(64 * g21 + *(int32_t *)(v39 - 0x7698));
				result = function_c117c(g17 + v58, (int32_t)v57);
				// branch -> 0xc1f70
			} else {
				result = v50;
			}
			// 0xc1f70
			g10 = v1;
			return result;
		}
		// 0xc1e58
		v45 = 0x1000000 * ((int32_t)v56 - 1) / 0x1000000;
		v41 = 0x55ec * v45;
		g16 = v41;
		v34 = g30;
		v46 = v34 + v41;
		v47 = g24 + *(int32_t *)(v46 + 100);
		v48 = g22 + *(int32_t *)(v46 + 96) - *(int32_t *)(v46 + 148);
		g26 = v48;
		v37 = v47;
		v36 = v48;
		v42 = v41;
		v35 = v34;
		if (v45 == (int32_t) * (char *)g29) {
			// 0xc1e90
			v51 = *(int32_t *)(v46 + 140);
			v52 = *(int32_t *)(v46 + 144);
			g13 = 8;
			function_507f4(165, v48, v47, *(int32_t *)(v46 + 124), v51, v52, g21);
			v37 = g28;
			v36 = g26;
			v42 = g16;
			v35 = g30;
			// branch -> 0xc1eb4
		}
		// 0xc1eb4
		v49 = v35 + v42;
		g16 = v49;
		v53 = *(int32_t *)(v49 + 140);
		v54 = *(int32_t *)(v49 + 144);
		Cl2DecodeFrm4(v36, v37, *(int32_t *)(v49 + 124), v53, v54, g21, 8);
		if (g25 == 0) {
			// 0xc1f0c
			v38 = g27;
			v43 = g19;
			v44 = v43;
			v40 = v38;
			if (*(char *)(v43 + v38 + *(int32_t *)g36) % 2 != 0) {
				// 0xc1f20
				function_aeb58(g18, v43, g22, g24, g21, 8, 0);
				v44 = g19;
				v40 = g27;
				// branch -> 0xc1f40
			}
			// 0xc1f40
			v39 = g23;
			v50 = *(int32_t *)*(int32_t *)(v39 - 0x7598);
			v57 = *(char *)(v50 + v40 + v44);
			if (v57 != 0) {
				// 0xc1f58
				v58 = *(int32_t *)(64 * g21 + *(int32_t *)(v39 - 0x7698));
				result = function_c117c(g17 + v58, (int32_t)v57);
				// branch -> 0xc1f70
			} else {
				result = v50;
			}
			// 0xc1f70
			g10 = v1;
			return result;
		}
		// 0xc1ee0
		if (*(int32_t *)(g16 + 152) != 0) {
			// 0xc1eec
			function_c1a44(g17 - 64, g18 - 1, g19 + 1, g20, g21, g22 - 64, g24);
			// branch -> 0xc1f0c
		}
		// 0xc1f0c
		v38 = g27;
		v43 = g19;
		v44 = v43;
		v40 = v38;
		if (*(char *)(v43 + v38 + *(int32_t *)g36) % 2 != 0) {
			// 0xc1f20
			function_aeb58(g18, v43, g22, g24, g21, 8, 0);
			v44 = g19;
			v40 = g27;
			// branch -> 0xc1f40
		}
		// 0xc1f40
		v39 = g23;
		v50 = *(int32_t *)*(int32_t *)(v39 - 0x7598);
		v57 = *(char *)(v50 + v40 + v44);
		if (v57 != 0) {
			// 0xc1f58
			v58 = *(int32_t *)(64 * g21 + *(int32_t *)(v39 - 0x7698));
			result = function_c117c(g17 + v58, (int32_t)v57);
			// branch -> 0xc1f70
		} else {
			result = v50;
		}
		// 0xc1f70
		g10 = v1;
		return result;
	}
	int32_t v59 = g27 + *(int32_t *)g31 + g19;                                  // 0xc1d54
	int32_t v60 = 0x1000000 * (-1 - (int32_t) * (char *)(v59 - 1)) / 0x1000000; // 0xc1d68
	int32_t v61 = 0x55ec * v60;                                                 // 0xc1d6c
	g16 = v61;
	int32_t v62 = g30 + v61;                     // 0xc1d74
	int32_t v63 = g24 + *(int32_t *)(v62 + 100); // 0xc1d88
	g26 = v63;
	int32_t v64 = g22 + *(int32_t *)(v62 + 96) - *(int32_t *)(v62 + 148); // 0xc1d8c
	int32_t v65 = v63;                                                    // 0xc1dc8
	int32_t v66 = v64;                                                    // 0xc1dc0
	if (v60 == (int32_t) * (char *)g29) {
		int32_t v67 = *(int32_t *)(v62 + 140); // 0xc1d9c
		int32_t v68 = *(int32_t *)(v62 + 144); // 0xc1da4
		g13 = 8;
		function_507f4(165, v64, v63, *(int32_t *)(v62 + 124), v67, v68, g21);
		v65 = g26;
		v66 = g28;
		v61 = g16;
		// branch -> 0xc1db8
	}
	int32_t v69 = g30 + v61; // 0xc1db8
	g16 = v69;
	int32_t v70 = *(int32_t *)(v69 + 140); // 0xc1dc4
	int32_t v71 = *(int32_t *)(v69 + 144); // 0xc1dcc
	Cl2DecodeFrm4(v66, v65, *(int32_t *)(v69 + 124), v70, v71, g21, 8);
	if (g25 == 0) {
		// 0xc1e10
		v55 = *(char *)(g19 + g27 + *(int32_t *)g36);
		if (__asm_rlwinm_((int32_t)v55, 0, 29, 29) != 0) {
			// 0xc1e24
			function_af6d0(g18, g19, g22, g24, g21, 8, 1);
			// branch -> 0xc1e44
		}
		// 0xc1e44
		v56 = *(char *)(g19 + g27 + *(int32_t *)g31);
		if (v56 >= 1) {
			// 0xc1e58
			v45 = 0x1000000 * ((int32_t)v56 - 1) / 0x1000000;
			v41 = 0x55ec * v45;
			g16 = v41;
			v34 = g30;
			v46 = v34 + v41;
			v47 = g24 + *(int32_t *)(v46 + 100);
			v48 = g22 + *(int32_t *)(v46 + 96) - *(int32_t *)(v46 + 148);
			g26 = v48;
			v37 = v47;
			v36 = v48;
			v42 = v41;
			v35 = v34;
			if (v45 == (int32_t) * (char *)g29) {
				// 0xc1e90
				v51 = *(int32_t *)(v46 + 140);
				v52 = *(int32_t *)(v46 + 144);
				g13 = 8;
				function_507f4(165, v48, v47, *(int32_t *)(v46 + 124), v51, v52, g21);
				v37 = g28;
				v36 = g26;
				v42 = g16;
				v35 = g30;
				// branch -> 0xc1eb4
			}
			// 0xc1eb4
			v49 = v35 + v42;
			g16 = v49;
			v53 = *(int32_t *)(v49 + 140);
			v54 = *(int32_t *)(v49 + 144);
			Cl2DecodeFrm4(v36, v37, *(int32_t *)(v49 + 124), v53, v54, g21, 8);
			if (g25 != 0) {
				// 0xc1ee0
				if (*(int32_t *)(g16 + 152) != 0) {
					// 0xc1eec
					function_c1a44(g17 - 64, g18 - 1, g19 + 1, g20, g21, g22 - 64, g24);
					// branch -> 0xc1f0c
				}
			}
		}
		// 0xc1f0c
		v38 = g27;
		v43 = g19;
		v44 = v43;
		v40 = v38;
		if (*(char *)(v43 + v38 + *(int32_t *)g36) % 2 != 0) {
			// 0xc1f20
			function_aeb58(g18, v43, g22, g24, g21, 8, 0);
			v44 = g19;
			v40 = g27;
			// branch -> 0xc1f40
		}
		// 0xc1f40
		v39 = g23;
		v50 = *(int32_t *)*(int32_t *)(v39 - 0x7598);
		v57 = *(char *)(v50 + v40 + v44);
		if (v57 != 0) {
			// 0xc1f58
			v58 = *(int32_t *)(64 * g21 + *(int32_t *)(v39 - 0x7698));
			result = function_c117c(g17 + v58, (int32_t)v57);
			// branch -> 0xc1f70
		} else {
			result = v50;
		}
		// 0xc1f70
		g10 = v1;
		return result;
	}
	// 0xc1de4
	if (*(int32_t *)(g16 + 152) != 0) {
		// 0xc1df0
		function_c1a44(g17 - 64, g18 - 1, g19 + 1, g20, g21, g22 - 64, g24);
		// branch -> 0xc1e10
	}
	// 0xc1e10
	v55 = *(char *)(g19 + g27 + *(int32_t *)g36);
	if (__asm_rlwinm_((int32_t)v55, 0, 29, 29) != 0) {
		// 0xc1e24
		function_af6d0(g18, g19, g22, g24, g21, 8, 1);
		// branch -> 0xc1e44
	}
	// 0xc1e44
	v56 = *(char *)(g19 + g27 + *(int32_t *)g31);
	if (v56 >= 1) {
		// 0xc1e58
		v45 = 0x1000000 * ((int32_t)v56 - 1) / 0x1000000;
		v41 = 0x55ec * v45;
		g16 = v41;
		v34 = g30;
		v46 = v34 + v41;
		v47 = g24 + *(int32_t *)(v46 + 100);
		v48 = g22 + *(int32_t *)(v46 + 96) - *(int32_t *)(v46 + 148);
		g26 = v48;
		v37 = v47;
		v36 = v48;
		v42 = v41;
		v35 = v34;
		if (v45 == (int32_t) * (char *)g29) {
			// 0xc1e90
			v51 = *(int32_t *)(v46 + 140);
			v52 = *(int32_t *)(v46 + 144);
			g13 = 8;
			function_507f4(165, v48, v47, *(int32_t *)(v46 + 124), v51, v52, g21);
			v37 = g28;
			v36 = g26;
			v42 = g16;
			v35 = g30;
			// branch -> 0xc1eb4
		}
		// 0xc1eb4
		v49 = v35 + v42;
		g16 = v49;
		v53 = *(int32_t *)(v49 + 140);
		v54 = *(int32_t *)(v49 + 144);
		Cl2DecodeFrm4(v36, v37, *(int32_t *)(v49 + 124), v53, v54, g21, 8);
		if (g25 != 0) {
			// 0xc1ee0
			if (*(int32_t *)(g16 + 152) != 0) {
				// 0xc1eec
				function_c1a44(g17 - 64, g18 - 1, g19 + 1, g20, g21, g22 - 64, g24);
				// branch -> 0xc1f0c
			}
		}
	}
	// 0xc1f0c
	v38 = g27;
	v43 = g19;
	v44 = v43;
	v40 = v38;
	if (*(char *)(v43 + v38 + *(int32_t *)g36) % 2 != 0) {
		// 0xc1f20
		function_aeb58(g18, v43, g22, g24, g21, 8, 0);
		v44 = g19;
		v40 = g27;
		// branch -> 0xc1f40
	}
	// 0xc1f40
	v39 = g23;
	v50 = *(int32_t *)*(int32_t *)(v39 - 0x7598);
	v57 = *(char *)(v50 + v40 + v44);
	if (v57 != 0) {
		// 0xc1f58
		v58 = *(int32_t *)(64 * g21 + *(int32_t *)(v39 - 0x7698));
		result = function_c117c(g17 + v58, (int32_t)v57);
		// branch -> 0xc1f70
	} else {
		result = v50;
	}
	// 0xc1f70
	g10 = v1;
	return result;
}

// Address range: 0xc1f84 - 0xc239c
int32_t function_c1f84(int32_t result, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0xc1f88
	g31 = a6;
	int32_t v2 = *(int32_t *)(g23 - 0x757c); // 0xc1f90
	g17 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7698); // 0xc1f94
	g24 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7804); // 0xc1f98
	g26 = v4;
	int32_t v5 = result; // 0xc1f9c
	g29 = v5;
	int32_t v6 = *(int32_t *)(g23 - 0x6f50); // 0xc1fa0
	g32 = v6;
	g28 = a2;
	g16 = *(int32_t *)(g23 - 0x7584);
	g30 = a3;
	g20 = a4;
	g19 = a5;
	int32_t v7 = 2 * a6 + 2; // 0xc1fd0
	g21 = v7;
	int32_t v8 = a3;  // 0xc224020
	int32_t v9 = a2;  // 0xc211c
	int32_t v10 = v5; // 0xc2110
	int32_t v11 = v3; // 0xc2108
	int32_t v12 = a4; // 0xc2104
	int32_t v13;      // 0xc2130
	int32_t v14;      // 0xc2140
	int32_t v15;      // 0xc214c
	uint32_t v16;     // 0xc2298
	uint32_t v17;     // 0xc22a0
	int32_t v18;      // 0xc22d8
	int32_t v19;      // 0xc22f4
	int32_t v20;      // 0xc2110
	int32_t v21;      // 0xc211c
	int32_t v22;      // 0xc214c
	int32_t v23;      // 0xc2240
	int32_t result2;  // 0xc236c
	int32_t result3;  // 0xc2384
	int32_t v24;      // 0xc2118
	int32_t v25;      // 0xc22e8
	int32_t v26;      // 0xc235c
	int32_t v27;      // 0xc2368
	int32_t v28;      // 0xc2380
	int16_t v29;      // 0xc22a8
	if (a7 != 0) {
		// 0xc1fd8
		int32_t v30; // 0xc20f8
		int32_t v31; // 0xc20fc
		int32_t v32; // 0xc2100
		if (a2 >= 0) {
			// 0xc1fe0
			if (a2 <= 111) {
				// 0xc1fe8
				if (v5 >= 0) {
					// 0xc1ff0
					if (v5 <= 111) {
						int16_t v33 = *(int16_t *)(*(int32_t *)v2 + 2 * a2 + 224 * v5); // 0xc2008
						*(int32_t *)v6 = (int32_t)v33;
						int32_t v34 = 4 * g20;         // 0xc20c4
						int32_t v35 = *(int32_t *)g26; // 0xc20c8
						if (v33 == 0) {
							int32_t v36 = *(int32_t *)(g24 + v34) + v35 + g30; // 0xc20d4
							g34 = v36;
							result = town_clear_low_buf(v36);
							// branch -> 0xc20f8
						} else {
							int32_t v37 = g24 + v34; // 0xc2020
							g34 = g29;
							g37 = g28;
							g33 = v35 - 0x5fe0 + g30 + *(int32_t *)v37;
							int32_t v38 = function_52378(); // 0xc203c
							result = v38;
							int32_t v39 = 0;                          // r23
							int32_t v40 = *(int32_t *)g16 + 32 * v38; // 0xc204c
							g35 = v40;
							int32_t v41 = 0; // 0xc2054
							// branch -> 0xc2054
							while (true) {
								// 0xc2054
								if (g31 <= v41) {
									uint16_t v42 = *(int16_t *)(v40 + 6); // 0xc205c
									*(int32_t *)g32 = (int32_t)v42;
									if (v42 != 0) {
										// 0xc206c
										result = function_d8e58(g33);
										// branch -> 0xc2074
									}
								}
								int32_t v43 = v39 + 1; // 0xc2074
								v39 = v43;
								int32_t v44 = g35 + 4; // 0xc2078
								g35 = v44;
								g33 -= 0x6000;
								if (v43 >= 7) {
									// break -> 0xc2088
									break;
								}
								v40 = v44;
								v41 = v43;
								// continue -> 0xc2054
							}
							int32_t v45 = g21; // 0xc2088
							if (v45 <= 7) {
								int32_t v46 = g30;                                     // 0xc20a0
								int32_t v47 = *(int32_t *)g26 + *(int32_t *)v37 + v46; // 0xc20a4
								g13 = 0;
								result = function_c1b38(v47, g29, g28, g31, v45, v46, g20);
								// branch -> 0xc20f8
							}
						}
						// 0xc20f8
						v30 = g29 + 1;
						g29 = v30;
						v31 = g28 - 1;
						g28 = v31;
						v32 = g30 + 64;
						g30 = v32;
						v8 = v32;
						v9 = v31;
						v10 = v30;
						// branch -> 0xc2104
						// 0xc2104
						g27 = 4 * g20 + g24;
						v20 = 224 * v10;
						g22 = v20;
						g18 = 0x3000 * g21;
						v24 = g19 - a7;
						g19 = v24;
						v21 = 2 * v9;
						g24 = v21;
						g25 = 0;
						v16 = v10;
						v17 = v9;
						if (v24 <= 0) {
							// 0xc226c
							if (a7 == 0) {
								// 0xc2388
								g10 = v1;
								return result;
							}
							// 0xc2278
							if (v17 >= 0) {
								// 0xc2280
								if (v17 <= 111) {
									// 0xc2288
									if (v16 >= 0) {
										// 0xc2290
										if (v16 <= 111) {
											// 0xc2298
											v29 = *(int16_t *)(*(int32_t *)g17 + 2 * v17 + 224 * v16);
											*(int32_t *)g32 = (int32_t)v29;
											v26 = *(int32_t *)g27;
											if (*(int32_t *)g32 == 0) {
												// 0xc235c
												v27 = *(int32_t *)g26 + v26 + g30;
												g34 = v27;
												result2 = town_clear_low_buf(v27);
												// branch -> 0xc2388
											} else {
												// 0xc22bc
												g34 = g29;
												g37 = g28;
												g35 = *(int32_t *)g26 - 0x6000 + g30 + v26;
												v18 = function_52378();
												result = v18;
												g33 = 0;
												v25 = *(int32_t *)g16 + 32 * v18;
												g36 = v25;
												v19 = v25;
												// branch -> 0xc22ec
												while (true) {
													// 0xc22ec
													if (g31 > 0) {
														goto lab_0xc230c_2;
													}
													goto lab_0xc22f4_2;
												}
											}
											// 0xc2388
											g10 = v1;
											return result2;
										}
									}
								}
							}
							// 0xc2374
							v28 = *(int32_t *)g27 + v8 + *(int32_t *)g26;
							g34 = v28;
							result3 = town_clear_low_buf(v28);
							// branch -> 0xc2388
							// 0xc2388
							g10 = v1;
							return result3;
						}
						v23 = v8;
						v22 = v21;
						v15 = v20;
						v14 = v10;
						v13 = v9;
						int32_t v48; // 0xc225c
						while (true) {
							// 0xc2128
							if (v13 >= 0) {
							lab_0xc2130:
								// 0xc2130
								if (v13 <= 111) {
									// 0xc2138
									if (v14 >= 0) {
										// 0xc2140
										if (v14 <= 111) {
											int16_t v49 = *(int16_t *)(*(int32_t *)g17 + v15 + v22); // 0xc2150
											*(int32_t *)g32 = (int32_t)v49;
											int32_t v50 = *(int32_t *)g27; // 0xc2220
											if (*(int32_t *)g32 == 0) {
												int32_t v51 = *(int32_t *)g26 + v50 + g30; // 0xc222c
												g34 = v51;
												result = town_clear_low_buf(v51);
												// branch -> 0xc224c
											} else {
												// 0xc2164
												g34 = g29;
												g37 = g28;
												g36 = *(int32_t *)g26 - 0x6000 + g30 + v50;
												int32_t v52 = function_52378(); // 0xc2180
												result = v52;
												g35 = 0;
												int32_t v53 = *(int32_t *)g16 + 32 * v52; // 0xc2190
												g33 = v53;
												int32_t v54 = 0; // 0xc2194
												// branch -> 0xc2194
												while (true) {
													// 0xc2194
													if (g31 <= v54) {
														uint16_t v55 = *(int16_t *)(v53 + 4); // 0xc219c
														*(int32_t *)g32 = (int32_t)v55;
														if (v55 != 0) {
															// 0xc21ac
															result = function_d8e58(g36);
															// branch -> 0xc21b4
														}
														uint16_t v56 = *(int16_t *)(g33 + 6); // 0xc21b4
														*(int32_t *)g32 = (int32_t)v56;
														if (v56 != 0) {
															// 0xc21c4
															result = function_d8e58(g36 + 32);
															// branch -> 0xc21cc
														}
													}
													int32_t v57 = g35 + 1; // 0xc21cc
													g35 = v57;
													int32_t v58 = g33 + 4; // 0xc21d0
													g33 = v58;
													g36 -= 0x6000;
													if (v57 >= 7) {
														// break -> 0xc21e0
														break;
													}
													v53 = v58;
													v54 = v57;
													// continue -> 0xc2194
												}
												int32_t v59 = g21; // 0xc21e0
												if (v59 <= 7) {
													int32_t v60 = g30;                                           // 0xc21f8
													int32_t v61 = *(int32_t *)g26 + *(int32_t *)g27 + v60 - g18; // 0xc2204
													g13 = 1;
													result = function_c1b38(v61, g29, g28, g31, v59, v60, g20);
													// branch -> 0xc224c
												}
											}
										lab_0xc224c:;
											int32_t v62 = g22 + 224; // 0xc224c
											g22 = v62;
											int32_t v63 = g29 + 1; // 0xc2250
											g29 = v63;
											int32_t v64 = g24 - 2; // 0xc2254
											g24 = v64;
											int32_t v65 = g28 - 1; // 0xc2258
											g28 = v65;
											v48 = g30 + 64;
											g30 = v48;
											int32_t v66 = g25 + 1; // 0xc2260
											g25 = v66;
											if (v66 >= g19) {
												v16 = v63;
												v17 = v65;
												// break -> 0xc226c
												break;
											}
											v23 = v48;
											v22 = v64;
											v15 = v62;
											v14 = v63;
											v13 = v65;
											// continue -> 0xc2128
											continue;
										}
									}
								}
							}
						lab_0xc2238:;
							int32_t v67 = *(int32_t *)g27 + v23 + *(int32_t *)g26; // 0xc2244
							g34 = v67;
							result = town_clear_low_buf(v67);
							// branch -> 0xc224c
							goto lab_0xc224c;
						}
						// 0xc226c
						if (a7 == 0) {
							// 0xc2388
							g10 = v1;
							return result;
						}
						// 0xc2278
						if (v17 >= 0) {
							// 0xc2280
							if (v17 <= 111) {
								// 0xc2288
								if (v16 >= 0) {
									// 0xc2290
									if (v16 <= 111) {
										// 0xc2298
										v29 = *(int16_t *)(*(int32_t *)g17 + 2 * v17 + 224 * v16);
										*(int32_t *)g32 = (int32_t)v29;
										v26 = *(int32_t *)g27;
										if (*(int32_t *)g32 == 0) {
											// 0xc235c
											v27 = *(int32_t *)g26 + v26 + g30;
											g34 = v27;
											result = town_clear_low_buf(v27);
											// branch -> 0xc2388
										} else {
											// 0xc22bc
											g34 = g29;
											g37 = g28;
											g35 = *(int32_t *)g26 - 0x6000 + g30 + v26;
											v18 = function_52378();
											result = v18;
											g33 = 0;
											v25 = *(int32_t *)g16 + 32 * v18;
											g36 = v25;
											v19 = v25;
											int32_t v68 = 0; // 0xc22ec
											// branch -> 0xc22ec
											while (true) {
												// 0xc22ec
												if (g31 <= v68) {
												lab_0xc22f4_2:;
													uint16_t v69 = *(int16_t *)(v19 + 4); // 0xc22f4
													*(int32_t *)g32 = (int32_t)v69;
													if (v69 != 0) {
														// 0xc2304
														result = function_d8e58(g35);
														// branch -> 0xc230c
													}
												}
											lab_0xc230c_2:;
												int32_t v70 = g33 + 1; // 0xc230c
												g33 = v70;
												int32_t v71 = g36 + 4; // 0xc2310
												g36 = v71;
												g35 -= 0x6000;
												if (v70 >= 7) {
													// break -> 0xc2320
													break;
												}
												v19 = v71;
												v68 = v70;
												// continue -> 0xc22ec
											}
											int32_t v72 = g21; // 0xc2320
											if (v72 <= 7) {
												int32_t v73 = g30;                                     // 0xc2338
												int32_t v74 = *(int32_t *)g26 + *(int32_t *)g27 + v73; // 0xc233c
												g13 = 0;
												result = function_c1b38(v74, g29, g28, g31, v72, v73, g20);
												// branch -> 0xc2388
											}
										}
										// 0xc2388
										g10 = v1;
										return result;
									}
								}
							}
						}
						// 0xc2374
						v28 = *(int32_t *)g27 + v48 + *(int32_t *)g26;
						g34 = v28;
						result3 = town_clear_low_buf(v28);
						// branch -> 0xc2388
						// 0xc2388
						g10 = v1;
						return result3;
					}
				}
			}
		}
		int32_t v75 = *(int32_t *)v4 + a3 + *(int32_t *)(4 * a4 + v3); // 0xc20f0
		g34 = v75;
		result = town_clear_low_buf(v75);
		// branch -> 0xc20f8
		// 0xc20f8
		v30 = g29 + 1;
		g29 = v30;
		v31 = g28 - 1;
		g28 = v31;
		v32 = g30 + 64;
		g30 = v32;
		v8 = v32;
		v9 = v31;
		a5 = g19;
		v7 = g21;
		v10 = v30;
		v11 = g24;
		v12 = g20;
		// branch -> 0xc2104
	}
	// 0xc2104
	g27 = 4 * v12 + v11;
	v20 = 224 * v10;
	g22 = v20;
	g18 = 0x3000 * v7;
	v24 = a5 - a7;
	g19 = v24;
	v21 = 2 * v9;
	g24 = v21;
	g25 = 0;
	v16 = v10;
	v17 = v9;
	if (v24 > 0) {
		v23 = v8;
		v22 = v21;
		v15 = v20;
		v14 = v10;
		v13 = v9;
		while (true) {
			// 0xc2128
			if (v13 < 0) {
				goto lab_0xc2238;
			}
			goto lab_0xc2130;
		}
	}
	// 0xc226c
	if (a7 == 0) {
		// 0xc2388
		g10 = v1;
		return result;
	}
	// 0xc2278
	if (v17 < 0 || v17 > 111 || v16 < 0 || v16 > 111) {
		// 0xc2374
		v28 = *(int32_t *)g27 + v8 + *(int32_t *)g26;
		g34 = v28;
		result3 = town_clear_low_buf(v28);
		// branch -> 0xc2388
		// 0xc2388
		g10 = v1;
		return result3;
	}
	// 0xc2298
	v29 = *(int16_t *)(*(int32_t *)g17 + 2 * v17 + 224 * v16);
	*(int32_t *)g32 = (int32_t)v29;
	v26 = *(int32_t *)g27;
	if (*(int32_t *)g32 == 0) {
		// 0xc235c
		v27 = *(int32_t *)g26 + v26 + g30;
		g34 = v27;
		result2 = town_clear_low_buf(v27);
		// branch -> 0xc2388
	} else {
		// 0xc22bc
		g34 = g29;
		g37 = g28;
		g35 = *(int32_t *)g26 - 0x6000 + g30 + v26;
		v18 = function_52378();
		result = v18;
		g33 = 0;
		v25 = *(int32_t *)g16 + 32 * v18;
		g36 = v25;
		v19 = v25;
		// branch -> 0xc22ec
		while (true) {
			// 0xc22ec
			if (g31 > 0) {
				goto lab_0xc230c_2;
			}
			goto lab_0xc22f4_2;
		}
	}
	// 0xc2388
	g10 = v1;
	return result2;
}

// Address range: 0xc239c - 0xc2478
int32_t function_c239c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	g26 = a2;
	g36 = *(int32_t *)(g23 - 0x6f50);
	g28 = a4;
	g29 = a5;
	g30 = a6;
	g31 = a7;
	g33 = a1;
	g34 = a2;
	g37 = a3;
	int32_t v1 = function_52378(); // 0xc23d8
	g32 = 0;
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x7584) + 32 * v1; // 0xc23ec
	g35 = v2;
	int32_t v3 = 0; // 0xc23f4
	// branch -> 0xc23f4
	while (true) {
		// 0xc23f4
		int32_t v4; // 0xc242c
		int32_t v5; // 0xc2430
		if (g28 >= v3) {
			uint16_t v6 = *(int16_t *)v2; // 0xc23fc
			*(int32_t *)g36 = (int32_t)v6;
			if (v6 != 0) {
				// 0xc240c
				drawUpperScreen(g33);
				// branch -> 0xc2414
			}
			uint16_t v7 = *(int16_t *)(g35 + 2); // 0xc2414
			*(int32_t *)g36 = (int32_t)v7;
			if (v7 != 0) {
				// 0xc2424
				drawUpperScreen(g33 + 32);
				// branch -> 0xc242c
			}
			// 0xc242c
			v4 = g32 + 1;
			g32 = v4;
			v5 = g35 + 4;
			g35 = v5;
			g33 -= 0x6000;
			if (v4 >= 7) {
				// break -> 0xc2440
				break;
			}
			v2 = v5;
			v3 = v4;
			// continue -> 0xc23f4
			continue;
		}
		// 0xc242c
		v4 = g32 + 1;
		g32 = v4;
		v5 = g35 + 4;
		g35 = v5;
		g33 -= 0x6000;
		if (v4 >= 7) {
			// break -> 0xc2440
			break;
		}
		v2 = v5;
		v3 = v4;
		// continue -> 0xc23f4
	}
	// 0xc2440
	g13 = 0;
	int32_t result = function_c2478(a1, g26, a3, g28, g29, g30, g31); // 0xc2460
	return result;
}

// Address range: 0xc2478 - 0xc28b8
int32_t function_c2478(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	g18 = a2;
	int32_t v1 = g10;                        // 0xc2480
	int32_t v2 = *(int32_t *)(g23 - 0x768c); // 0xc2484
	int32_t v3 = 112 * a2;                   // 0xc2488
	g27 = v3;
	g19 = a3;
	g29 = *(int32_t *)(g23 - 0x775c);
	g30 = *(int32_t *)(g23 - 0x77a8);
	g20 = a4;
	g31 = *(int32_t *)(g23 - 0x7680);
	g17 = a1;
	g32 = *(int32_t *)(g23 - 0x7750);
	g21 = a5;
	g33 = *(int32_t *)(g23 - 0x7758);
	g35 = *(int32_t *)(g23 - 0x767c);
	g22 = a6;
	int32_t v4 = *(int32_t *)(g23 - 0x779c); // 0xc24b8
	g36 = v4;
	g24 = a7;
	int32_t v5 = *(int32_t *)(g23 - 0x7690); // 0xc24c0
	g16 = v5;
	g25 = g13;
	unsigned char v6 = *(char *)(*(int32_t *)v2 + a3 + v3); // 0xc24d8
	if (v6 != 0) {
		int32_t v7 = (0x1000000 * (int32_t)v6 - 0x1000000) / 0x1000000; // 0xc24ec
		int32_t v8 = 368 * v7;                                          // 0xc24f0
		int32_t v9 = v8 + v5;                                           // 0xc24f8
		int32_t v10 = a6 - *(int32_t *)(v9 + 40);                       // 0xc2508
		g26 = v10;
		int32_t v11 = a5;  // 0xc254c
		int32_t v12 = a7;  // 0xc2544
		int32_t v13 = v10; // 0xc253c
		if (v7 == (int32_t) * (char *)*(int32_t *)(g23 - 0x7748)) {
			// 0xc2510
			g37 = v10;
			int32_t v14 = *(int32_t *)(v9 + 32); // 0xc2518
			g40 = v14;
			g38 = a7;
			int32_t v15 = *(int32_t *)(v9 + 36); // 0xc2520
			g41 = v15;
			g13 = a5;
			g42 = 0;
			CelDecodeClr(181, v10, a7, *(int32_t *)(v9 + 24), v14, v15, 0);
			v11 = g21;
			v12 = g24;
			v13 = g26;
			v8 = g28;
			v5 = g16;
			// branch -> 0xc2534
		}
		int32_t v16 = v5 + v8;                // 0xc2534
		int32_t v17 = *(int32_t *)(v16 + 32); // 0xc2540
		g39 = v17;
		g37 = v12;
		int32_t v18 = *(int32_t *)(v16 + 36); // 0xc2548
		g40 = v18;
		g42 = v11;
		g41 = 0;
		CelDrawHdrOnly(v13, v12, *(int32_t *)(v16 + 24), v17, v18, 0, v11);
		a3 = g19;
		v3 = g27;
		v4 = g36;
		// branch -> 0xc2558
	}
	int32_t v19 = *(int32_t *)v4; // 0xc2558
	if (__asm_rlwinm_((int32_t) * (char *)(v19 + v3 + a3), 0, 27, 27) != 0) {
		int32_t v20 = *(int32_t *)g35 + 224 * g18;                     // 0xc2578
		int32_t v21 = -1 - (int32_t) * (int16_t *)(2 * g19 + v20 - 2); // 0xc258c
		int32_t v22 = 268 * v21;                                       // 0xc2590
		g16 = v22;
		int32_t v23 = g33 + v22;                    // 0xc2598
		int32_t v24 = g22 - *(int32_t *)(v23 + 68); // 0xc25a0
		g26 = v24;
		int32_t v25 = v24; // 0xc25d4
		if (v21 == *(int32_t *)g32) {
			// 0xc25a8
			g39 = *(int32_t *)(v23 + 36);
			g37 = v24;
			g40 = *(int32_t *)(v23 + 52);
			g38 = g24;
			g41 = *(int32_t *)(v23 + 64);
			g13 = g21;
			g42 = 0;
			CelDecodeClr_part(-90);
			v25 = g26;
			v22 = g16;
			// branch -> 0xc25cc
		}
		int32_t v26 = g33 + v22; // 0xc25cc
		g38 = *(int32_t *)(v26 + 36);
		g39 = *(int32_t *)(v26 + 52);
		g37 = g24;
		g40 = *(int32_t *)(v26 + 64);
		g42 = g21;
		g41 = 0;
		CelDrawHdrOnly_part(v25);
		// branch -> 0xc25f0
	}
	uint16_t v27 = *(int16_t *)(2 * g19 + 224 * g18 + *(int32_t *)g35); // 0xc2600
	if (v27 >= 1) {
		int32_t v28 = (int32_t)v27 - 1; // 0xc260c
		int32_t v29 = 268 * v28;        // 0xc2614
		g16 = v29;
		int32_t v30 = g33 + v29;                    // 0xc261c
		int32_t v31 = g22 - *(int32_t *)(v30 + 68); // 0xc2624
		g26 = v31;
		int32_t v32 = v31; // 0xc2658
		if (v28 == *(int32_t *)g32) {
			// 0xc262c
			g39 = *(int32_t *)(v30 + 36);
			g37 = v31;
			g40 = *(int32_t *)(v30 + 52);
			g38 = g24;
			g41 = *(int32_t *)(v30 + 64);
			g13 = g21;
			g42 = 0;
			CelDecodeClr_part(-90);
			v32 = g26;
			v29 = g16;
			// branch -> 0xc2650
		}
		int32_t v33 = g33 + v29; // 0xc2650
		g38 = *(int32_t *)(v33 + 36);
		g39 = *(int32_t *)(v33 + 52);
		g37 = g24;
		g40 = *(int32_t *)(v33 + 64);
		g42 = g21;
		g41 = 0;
		CelDrawHdrOnly_part(v32);
		// branch -> 0xc2674
	}
	unsigned char v34 = *(char *)(g27 + g19 + *(int32_t *)g36); // 0xc267c
	int32_t v35;                                                // 0xc27a8
	int32_t v36;                                                // 0xc27f4
	int32_t v37;                                                // 0xc27fc
	int32_t v38;                                                // 0xc2804
	int32_t v39;                                                // 0xc2850
	int32_t v40;                                                // 0xc2884
	int32_t result;                                             // 0xc28b4
	int32_t v41;                                                // 0xc27a4
	int32_t v42;                                                // 0xc27f4
	int32_t v43;                                                // 0xc2850
	int32_t v44;                                                // 0xc2884
	int32_t v45;                                                // 0xc27a0
	int32_t v46;                                                // 0xc27a8
	int32_t v47;                                                // 0xc27c4
	int32_t v48;                                                // 0xc27c8
	int32_t v49;                                                // 0xc27f4
	int32_t v50;                                                // 0xc2888
	int32_t v51;                                                // 0xc27d8
	int32_t v52;                                                // 0xc27e0
	int32_t v53;                                                // 0xc2800
	int32_t v54;                                                // 0xc2808
	unsigned char v55;                                          // 0xc2758
	unsigned char v56;                                          // 0xc278c
	unsigned char v57;                                          // 0xc288c
	if (__asm_rlwinm_((int32_t)v34, 0, 26, 26) == 0) {
		// 0xc2750
		v55 = *(char *)(g19 + g27 + *(int32_t *)g36);
		if (__asm_rlwinm_((int32_t)v55, 0, 29, 29) != 0) {
			// 0xc2764
			function_af6d0(g18, g19, g22, g24, 0, g21, 0);
			// branch -> 0xc2784
		}
		// 0xc2784
		v56 = *(char *)(g19 + g27 + *(int32_t *)g31);
		if (v56 < 1) {
			// 0xc284c
			v39 = g27;
			v43 = g19;
			v44 = v43;
			v40 = v39;
			if (*(char *)(v43 + v39 + *(int32_t *)g36) % 2 != 0) {
				// 0xc2860
				DrawMissile(g18, v43, g22, g24, 0, g21, 0);
				v44 = g19;
				v40 = g27;
				// branch -> 0xc2880
			}
			// 0xc2880
			v50 = *(int32_t *)*(int32_t *)(g23 - 0x7598);
			v57 = *(char *)(v50 + v40 + v44);
			if (v57 != 0) {
				// 0xc2898
				result = function_c1188(g17, (int32_t)v57);
				// branch -> 0xc28a4
			} else {
				result = v50;
			}
			// 0xc28a4
			g10 = v1;
			return result;
		}
		// 0xc2798
		v45 = 0x1000000 * ((int32_t)v56 - 1) / 0x1000000;
		v41 = 0x55ec * v45;
		g16 = v41;
		v35 = g30;
		v46 = v35 + v41;
		v47 = g24 + *(int32_t *)(v46 + 100);
		v48 = g22 + *(int32_t *)(v46 + 96) - *(int32_t *)(v46 + 148);
		g26 = v48;
		v38 = v47;
		v37 = v48;
		v42 = v41;
		v36 = v35;
		if (v45 == (int32_t) * (char *)g29) {
			// 0xc27d0
			v51 = *(int32_t *)(v46 + 140);
			v52 = *(int32_t *)(v46 + 144);
			g13 = g21;
			function_50478(165, v48, v47, *(int32_t *)(v46 + 124), v51, v52, 0);
			v38 = g28;
			v37 = g26;
			v42 = g16;
			v36 = g30;
			// branch -> 0xc27f4
		}
		// 0xc27f4
		v49 = v36 + v42;
		g16 = v49;
		v53 = *(int32_t *)(v49 + 140);
		v54 = *(int32_t *)(v49 + 144);
		function_503bc(v37, v38, *(int32_t *)(v49 + 124), v53, v54, 0, g21);
		if (g25 == 0) {
			// 0xc284c
			v39 = g27;
			v43 = g19;
			v44 = v43;
			v40 = v39;
			if (*(char *)(v43 + v39 + *(int32_t *)g36) % 2 != 0) {
				// 0xc2860
				DrawMissile(g18, v43, g22, g24, 0, g21, 0);
				v44 = g19;
				v40 = g27;
				// branch -> 0xc2880
			}
			// 0xc2880
			v50 = *(int32_t *)*(int32_t *)(g23 - 0x7598);
			v57 = *(char *)(v50 + v40 + v44);
			if (v57 != 0) {
				// 0xc2898
				result = function_c1188(g17, (int32_t)v57);
				// branch -> 0xc28a4
			} else {
				result = v50;
			}
			// 0xc28a4
			g10 = v1;
			return result;
		}
		// 0xc2820
		if (*(int32_t *)(g16 + 152) != 0) {
			// 0xc282c
			function_c239c(g17 - 64, g18 - 1, g19 + 1, g20, g21, g22 - 64, g24);
			// branch -> 0xc284c
		}
		// 0xc284c
		v39 = g27;
		v43 = g19;
		v44 = v43;
		v40 = v39;
		if (*(char *)(v43 + v39 + *(int32_t *)g36) % 2 != 0) {
			// 0xc2860
			DrawMissile(g18, v43, g22, g24, 0, g21, 0);
			v44 = g19;
			v40 = g27;
			// branch -> 0xc2880
		}
		// 0xc2880
		v50 = *(int32_t *)*(int32_t *)(g23 - 0x7598);
		v57 = *(char *)(v50 + v40 + v44);
		if (v57 != 0) {
			// 0xc2898
			result = function_c1188(g17, (int32_t)v57);
			// branch -> 0xc28a4
		} else {
			result = v50;
		}
		// 0xc28a4
		g10 = v1;
		return result;
	}
	int32_t v58 = g27 + *(int32_t *)g31 + g19;                                  // 0xc2694
	int32_t v59 = 0x1000000 * (-1 - (int32_t) * (char *)(v58 - 1)) / 0x1000000; // 0xc26a8
	int32_t v60 = 0x55ec * v59;                                                 // 0xc26ac
	g16 = v60;
	int32_t v61 = g30 + v60;                     // 0xc26b4
	int32_t v62 = g24 + *(int32_t *)(v61 + 100); // 0xc26c8
	g26 = v62;
	int32_t v63 = g22 + *(int32_t *)(v61 + 96) - *(int32_t *)(v61 + 148); // 0xc26cc
	int32_t v64 = v62;                                                    // 0xc2708
	int32_t v65 = v63;                                                    // 0xc2700
	if (v59 == (int32_t) * (char *)g29) {
		int32_t v66 = *(int32_t *)(v61 + 140); // 0xc26dc
		int32_t v67 = *(int32_t *)(v61 + 144); // 0xc26e4
		g13 = g21;
		function_50478(165, v63, v62, *(int32_t *)(v61 + 124), v66, v67, 0);
		v64 = g26;
		v65 = g28;
		v60 = g16;
		// branch -> 0xc26f8
	}
	int32_t v68 = g30 + v60; // 0xc26f8
	g16 = v68;
	int32_t v69 = *(int32_t *)(v68 + 140); // 0xc2704
	int32_t v70 = *(int32_t *)(v68 + 144); // 0xc270c
	function_503bc(v65, v64, *(int32_t *)(v68 + 124), v69, v70, 0, g21);
	if (g25 == 0) {
		// 0xc2750
		v55 = *(char *)(g19 + g27 + *(int32_t *)g36);
		if (__asm_rlwinm_((int32_t)v55, 0, 29, 29) != 0) {
			// 0xc2764
			function_af6d0(g18, g19, g22, g24, 0, g21, 0);
			// branch -> 0xc2784
		}
		// 0xc2784
		v56 = *(char *)(g19 + g27 + *(int32_t *)g31);
		if (v56 >= 1) {
			// 0xc2798
			v45 = 0x1000000 * ((int32_t)v56 - 1) / 0x1000000;
			v41 = 0x55ec * v45;
			g16 = v41;
			v35 = g30;
			v46 = v35 + v41;
			v47 = g24 + *(int32_t *)(v46 + 100);
			v48 = g22 + *(int32_t *)(v46 + 96) - *(int32_t *)(v46 + 148);
			g26 = v48;
			v38 = v47;
			v37 = v48;
			v42 = v41;
			v36 = v35;
			if (v45 == (int32_t) * (char *)g29) {
				// 0xc27d0
				v51 = *(int32_t *)(v46 + 140);
				v52 = *(int32_t *)(v46 + 144);
				g13 = g21;
				function_50478(165, v48, v47, *(int32_t *)(v46 + 124), v51, v52, 0);
				v38 = g28;
				v37 = g26;
				v42 = g16;
				v36 = g30;
				// branch -> 0xc27f4
			}
			// 0xc27f4
			v49 = v36 + v42;
			g16 = v49;
			v53 = *(int32_t *)(v49 + 140);
			v54 = *(int32_t *)(v49 + 144);
			function_503bc(v37, v38, *(int32_t *)(v49 + 124), v53, v54, 0, g21);
			if (g25 != 0) {
				// 0xc2820
				if (*(int32_t *)(g16 + 152) != 0) {
					// 0xc282c
					function_c239c(g17 - 64, g18 - 1, g19 + 1, g20, g21, g22 - 64, g24);
					// branch -> 0xc284c
				}
			}
		}
		// 0xc284c
		v39 = g27;
		v43 = g19;
		v44 = v43;
		v40 = v39;
		if (*(char *)(v43 + v39 + *(int32_t *)g36) % 2 != 0) {
			// 0xc2860
			DrawMissile(g18, v43, g22, g24, 0, g21, 0);
			v44 = g19;
			v40 = g27;
			// branch -> 0xc2880
		}
		// 0xc2880
		v50 = *(int32_t *)*(int32_t *)(g23 - 0x7598);
		v57 = *(char *)(v50 + v40 + v44);
		if (v57 != 0) {
			// 0xc2898
			result = function_c1188(g17, (int32_t)v57);
			// branch -> 0xc28a4
		} else {
			result = v50;
		}
		// 0xc28a4
		g10 = v1;
		return result;
	}
	// 0xc2724
	if (*(int32_t *)(g16 + 152) != 0) {
		// 0xc2730
		function_c239c(g17 - 64, g18 - 1, g19 + 1, g20, g21, g22 - 64, g24);
		// branch -> 0xc2750
	}
	// 0xc2750
	v55 = *(char *)(g19 + g27 + *(int32_t *)g36);
	if (__asm_rlwinm_((int32_t)v55, 0, 29, 29) != 0) {
		// 0xc2764
		function_af6d0(g18, g19, g22, g24, 0, g21, 0);
		// branch -> 0xc2784
	}
	// 0xc2784
	v56 = *(char *)(g19 + g27 + *(int32_t *)g31);
	if (v56 >= 1) {
		// 0xc2798
		v45 = 0x1000000 * ((int32_t)v56 - 1) / 0x1000000;
		v41 = 0x55ec * v45;
		g16 = v41;
		v35 = g30;
		v46 = v35 + v41;
		v47 = g24 + *(int32_t *)(v46 + 100);
		v48 = g22 + *(int32_t *)(v46 + 96) - *(int32_t *)(v46 + 148);
		g26 = v48;
		v38 = v47;
		v37 = v48;
		v42 = v41;
		v36 = v35;
		if (v45 == (int32_t) * (char *)g29) {
			// 0xc27d0
			v51 = *(int32_t *)(v46 + 140);
			v52 = *(int32_t *)(v46 + 144);
			g13 = g21;
			function_50478(165, v48, v47, *(int32_t *)(v46 + 124), v51, v52, 0);
			v38 = g28;
			v37 = g26;
			v42 = g16;
			v36 = g30;
			// branch -> 0xc27f4
		}
		// 0xc27f4
		v49 = v36 + v42;
		g16 = v49;
		v53 = *(int32_t *)(v49 + 140);
		v54 = *(int32_t *)(v49 + 144);
		function_503bc(v37, v38, *(int32_t *)(v49 + 124), v53, v54, 0, g21);
		if (g25 != 0) {
			// 0xc2820
			if (*(int32_t *)(g16 + 152) != 0) {
				// 0xc282c
				function_c239c(g17 - 64, g18 - 1, g19 + 1, g20, g21, g22 - 64, g24);
				// branch -> 0xc284c
			}
		}
	}
	// 0xc284c
	v39 = g27;
	v43 = g19;
	v44 = v43;
	v40 = v39;
	if (*(char *)(v43 + v39 + *(int32_t *)g36) % 2 != 0) {
		// 0xc2860
		DrawMissile(g18, v43, g22, g24, 0, g21, 0);
		v44 = g19;
		v40 = g27;
		// branch -> 0xc2880
	}
	// 0xc2880
	v50 = *(int32_t *)*(int32_t *)(g23 - 0x7598);
	v57 = *(char *)(v50 + v40 + v44);
	if (v57 != 0) {
		// 0xc2898
		result = function_c1188(g17, (int32_t)v57);
		// branch -> 0xc28a4
	} else {
		result = v50;
	}
	// 0xc28a4
	g10 = v1;
	return result;
}

// Address range: 0xc28b8 - 0xc2cac
int32_t function_c28b8(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0xc28bc
	g35 = a6;
	int32_t v2 = *(int32_t *)(g23 - 0x757c); // 0xc28c4
	g25 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7698); // 0xc28c8
	g18 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7804); // 0xc28cc
	g26 = v4;
	g29 = a1;
	int32_t v5 = *(int32_t *)(g23 - 0x6f50); // 0xc28d4
	g27 = v5;
	g30 = a2;
	g28 = *(int32_t *)(g23 - 0x7584);
	g31 = a3;
	g32 = a4;
	g33 = a5;
	g19 = a7;
	int32_t v6 = 2 * a6 + 2; // 0xc28f8
	g36 = v6 > 8 ? 8 : v6;
	int32_t result4 = a1; // 0xc2ca829
	int32_t v7 = a1;      // 0xc2a3c
	int32_t v8 = a3;      // 0xc2b6020
	int32_t v9 = a2;      // 0xc2a4c
	int32_t v10 = v3;     // 0xc2a48
	int32_t v11 = 0;      // 0xc2a44
	int32_t v12 = a4;     // 0xc2a40
	int32_t v13;          // r13
	int32_t v14;          // r14
	int32_t v15;          // r15
	int32_t v16;          // 0xc2a60
	int32_t v17;          // 0xc2a70
	int32_t v18;          // 0xc2a7c
	uint32_t v19;         // 0xc2bb4
	uint32_t v20;         // 0xc2bbc
	int32_t v21;          // 0xc2bf0
	int32_t v22;          // 0xc2c0c
	int32_t v23;          // 0xc2a3c
	int32_t v24;          // 0xc2a4c
	int32_t v25;          // 0xc2a7c
	int32_t v26;          // 0xc2b60
	int32_t v27;          // 0xc2a44
	int32_t v28;          // 0xc2c00
	int32_t v29;          // 0xc2c6c
	int32_t v30;          // 0xc2c70
	int32_t v31;          // 0xc2c78
	int32_t v32;          // 0xc2c88
	int32_t v33;          // 0xc2c90
	int32_t result3;      // 0xc2c94
	int16_t v34;          // 0xc2bc4
	if (a7 != 0) {
		// 0xc2918
		int32_t v35; // 0xc2a30
		int32_t v36; // 0xc2a34
		int32_t v37; // 0xc2a38
		if (a2 >= 0) {
			// 0xc2920
			if (a2 <= 111) {
				// 0xc2928
				if (a1 >= 0) {
					// 0xc2930
					if (a1 <= 111) {
						int16_t v38 = *(int16_t *)(*(int32_t *)v2 + 2 * a2 + 224 * a1); // 0xc2948
						*(int32_t *)v5 = (int32_t)v38;
						int32_t v39 = 4 * g32;         // 0xc29fc
						int32_t v40 = *(int32_t *)g26; // 0xc2a00
						int32_t v41;                   // 0xc2ca830
						if (v38 == 0) {
							int32_t v42 = *(int32_t *)(g18 + v39) + v40 + g31; // 0xc2a0c
							g34 = v42;
							v41 = town_clear_upper_buf(v42, v40);
							// branch -> 0xc2a30
						} else {
							int32_t v43 = g18 + v39; // 0xc2960
							g34 = g29;
							g37 = g30;
							v13 = v40 + 32 + g31 + *(int32_t *)v43;
							int32_t v44 = function_52378(); // 0xc297c
							v14 = 0;
							int32_t v45 = *(int32_t *)g28 + 32 * v44; // 0xc298c
							int32_t v46 = 0;                          // 0xc2994
							// branch -> 0xc2994
							while (true) {
								// 0xc2994
								if (g35 >= v46) {
									uint16_t v47 = *(int16_t *)(v45 + 2); // 0xc299c
									*(int32_t *)g27 = (int32_t)v47;
									if (v47 != 0) {
										// 0xc29ac
										drawUpperScreen(v13);
										// branch -> 0xc29b4
									}
								}
								int32_t v48 = v14 + 1; // 0xc29b4
								v14 = v48;
								v13 -= 0x6000;
								if (v48 >= 7) {
									// break -> 0xc29c8
									break;
								}
								v45 += 4;
								v46 = v48;
								// continue -> 0xc2994
							}
							int32_t v49 = g31;                                     // 0xc29d8
							int32_t v50 = *(int32_t *)g26 + *(int32_t *)v43 + v49; // 0xc29dc
							g13 = 0;
							v41 = function_c2478(v50, g29, g30, g35, g36, v49, g32);
							// branch -> 0xc2a30
						}
						// 0xc2a30
						v35 = g29 + 1;
						g29 = v35;
						v36 = g30 - 1;
						g30 = v36;
						v37 = g31 + 64;
						g31 = v37;
						v7 = v35;
						v8 = v37;
						v9 = v36;
						v11 = g19;
						// branch -> 0xc2a3c
						// 0xc2a3c
						v23 = 224 * v7;
						g24 = v23;
						v27 = g33 - v11;
						g33 = v27;
						g21 = 4 * g32 + g18;
						v24 = 2 * v9;
						g22 = v24;
						g20 = 0;
						int32_t result = v41; // 0xc2ca828
						int32_t v51 = v8;     // 0xc2c8c
						v19 = v7;
						v20 = v9;
						int32_t v52 = v11; // 0xc2b8c
						if (v27 > 0) {
							v26 = v8;
							v25 = v24;
							v18 = v23;
							v17 = v7;
							v16 = v9;
							int32_t v53; // 0xc2ca831
							int32_t v54; // 0xc2b70
							int32_t v55; // 0xc2b78
							int32_t v56; // 0xc2b7c
							while (true) {
								// 0xc2a58
								if (v16 >= 0) {
								lab_0xc2a60:
									// 0xc2a60
									if (v16 <= 111) {
										// 0xc2a68
										if (v17 >= 0) {
											// 0xc2a70
											if (v17 <= 111) {
												int16_t v57 = *(int16_t *)(*(int32_t *)g25 + v18 + v25); // 0xc2a80
												*(int32_t *)g27 = (int32_t)v57;
												int32_t v58 = *(int32_t *)g21; // 0xc2b40
												if (*(int32_t *)g27 == 0) {
													int32_t v59 = *(int32_t *)g26; // 0xc2b44
													int32_t v60 = v59 + v58 + g31; // 0xc2b4c
													g34 = v60;
													v53 = town_clear_upper_buf(v60, v59);
													// branch -> 0xc2b6c
												} else {
													// 0xc2a94
													g34 = g29;
													g37 = g30;
													v14 = *(int32_t *)g26 + v58 + g31;
													int32_t v61 = function_52378(); // 0xc2aac
													v15 = 0;
													int32_t v62 = *(int32_t *)g28 + 32 * v61; // 0xc2abc
													v13 = v62;
													int32_t v63 = 0; // 0xc2ac0
													// branch -> 0xc2ac0
													while (true) {
														// 0xc2ac0
														if (g35 >= v63) {
															uint16_t v64 = *(int16_t *)v62; // 0xc2ac8
															*(int32_t *)g27 = (int32_t)v64;
															if (v64 != 0) {
																// 0xc2ad8
																drawUpperScreen(v14);
																// branch -> 0xc2ae0
															}
															uint16_t v65 = *(int16_t *)(v13 + 2); // 0xc2ae0
															*(int32_t *)g27 = (int32_t)v65;
															if (v65 != 0) {
																// 0xc2af0
																drawUpperScreen(v14 + 32);
																// branch -> 0xc2af8
															}
														}
														int32_t v66 = v15 + 1; // 0xc2af8
														v15 = v66;
														int32_t v67 = v13 + 4; // 0xc2afc
														v13 = v67;
														v14 -= 0x6000;
														if (v66 >= 7) {
															// break -> 0xc2b0c
															break;
														}
														v62 = v67;
														v63 = v66;
														// continue -> 0xc2ac0
													}
													int32_t v68 = g31;                                     // 0xc2b1c
													int32_t v69 = *(int32_t *)g26 + *(int32_t *)g21 + v68; // 0xc2b20
													g13 = 1;
													v53 = function_c2478(v69, g29, g30, g35, g36, v68, g32);
													// branch -> 0xc2b6c
												}
											lab_0xc2b6c:;
												int32_t v70 = g24 + 224; // 0xc2b6c
												g24 = v70;
												v54 = g29 + 1;
												g29 = v54;
												int32_t v71 = g22 - 2; // 0xc2b74
												g22 = v71;
												v55 = g30 - 1;
												g30 = v55;
												v56 = g31 + 64;
												g31 = v56;
												int32_t v72 = g20 + 1; // 0xc2b80
												g20 = v72;
												if (v72 >= g33) {
													// break -> 0xc2b84
													break;
												}
												v26 = v56;
												v25 = v71;
												v18 = v70;
												v17 = v54;
												v16 = v55;
												// continue -> 0xc2a58
												continue;
											}
										}
									}
								}
							lab_0xc2b58:;
								int32_t v73 = *(int32_t *)g26;             // 0xc2b5c
								int32_t v74 = *(int32_t *)g21 + v26 + v73; // 0xc2b64
								g34 = v74;
								v53 = town_clear_upper_buf(v74, v73);
								// branch -> 0xc2b6c
								goto lab_0xc2b6c;
							}
							// 0xc2b84
							result = v53;
							v51 = v56;
							v19 = v54;
							v20 = v55;
							v52 = g19;
							// branch -> 0xc2b8c
						}
						// 0xc2b8c
						if (v52 == 0) {
							// 0xc2c98
							g10 = v1;
							return result;
						}
						// 0xc2b94
						if (v20 >= 0) {
							// 0xc2b9c
							if (v20 <= 111) {
								// 0xc2ba4
								if (v19 >= 0) {
									// 0xc2bac
									if (v19 <= 111) {
										// 0xc2bb4
										v34 = *(int16_t *)(*(int32_t *)g25 + 2 * v20 + 224 * v19);
										*(int32_t *)g27 = (int32_t)v34;
										v29 = *(int32_t *)g21;
										int32_t result2; // 0xc2ca8
										if (*(int32_t *)g27 == 0) {
											// 0xc2c6c
											v30 = *(int32_t *)g26;
											v31 = v30 + v29 + g31;
											g34 = v31;
											result2 = town_clear_upper_buf(v31, v30);
											// branch -> 0xc2c98
										} else {
											// 0xc2bd8
											g34 = g29;
											g37 = g30;
											v13 = *(int32_t *)g26 + v29 + g31;
											v21 = function_52378();
											v15 = 0;
											v28 = *(int32_t *)g28 + 32 * v21;
											v14 = v28;
											v22 = v28;
											int32_t v75 = 0; // 0xc2c04
											// branch -> 0xc2c04
											while (true) {
												// 0xc2c04
												if (g35 >= v75) {
												lab_0xc2c0c:;
													uint16_t v76 = *(int16_t *)v22; // 0xc2c0c
													*(int32_t *)g27 = (int32_t)v76;
													if (v76 != 0) {
														// 0xc2c1c
														drawUpperScreen(v13);
														// branch -> 0xc2c24
													}
												}
											lab_0xc2c24:;
												int32_t v77 = v15 + 1; // 0xc2c24
												v15 = v77;
												int32_t v78 = v14 + 4; // 0xc2c28
												v14 = v78;
												v13 -= 0x6000;
												if (v77 >= 7) {
													// break -> 0xc2c38
													break;
												}
												v22 = v78;
												v75 = v77;
												// continue -> 0xc2c04
											}
											int32_t v79 = g31;                                     // 0xc2c48
											int32_t v80 = *(int32_t *)g26 + *(int32_t *)g21 + v79; // 0xc2c4c
											g13 = 0;
											result2 = function_c2478(v80, g29, g30, g35, g36, v79, g32);
											// branch -> 0xc2c98
										}
										// 0xc2c98
										g10 = v1;
										return result2;
									}
								}
							}
						}
						// 0xc2c84
						v32 = *(int32_t *)g26;
						v33 = *(int32_t *)g21 + v51 + v32;
						g34 = v33;
						result3 = town_clear_upper_buf(v33, v32);
						// branch -> 0xc2c98
						// 0xc2c98
						g10 = v1;
						return result3;
					}
				}
			}
		}
		int32_t v81 = *(int32_t *)v4;                       // 0xc2a1c
		int32_t v82 = v81 + a3 + *(int32_t *)(4 * a4 + v3); // 0xc2a28
		g34 = v82;
		// branch -> 0xc2a30
		// 0xc2a30
		v35 = g29 + 1;
		g29 = v35;
		v36 = g30 - 1;
		g30 = v36;
		v37 = g31 + 64;
		g31 = v37;
		result4 = town_clear_upper_buf(v82, v81);
		v7 = v35;
		v8 = v37;
		v9 = v36;
		v10 = g18;
		a5 = g33;
		v11 = g19;
		v12 = g32;
		// branch -> 0xc2a3c
	}
	// 0xc2a3c
	v23 = 224 * v7;
	g24 = v23;
	v27 = a5 - v11;
	g33 = v27;
	g21 = 4 * v12 + v10;
	v24 = 2 * v9;
	g22 = v24;
	g20 = 0;
	v19 = v7;
	v20 = v9;
	if (v27 > 0) {
		v26 = v8;
		v25 = v24;
		v18 = v23;
		v17 = v7;
		v16 = v9;
		while (true) {
			// 0xc2a58
			if (v16 < 0) {
				goto lab_0xc2b58;
			}
			goto lab_0xc2a60;
		}
	}
	// 0xc2b8c
	if (v11 == 0) {
		// 0xc2c98
		g10 = v1;
		return result4;
	}
	// 0xc2b94
	if (v20 < 0 || v20 > 111 || v19 < 0 || v19 > 111) {
		// 0xc2c84
		v32 = *(int32_t *)g26;
		v33 = *(int32_t *)g21 + v8 + v32;
		g34 = v33;
		result3 = town_clear_upper_buf(v33, v32);
		// branch -> 0xc2c98
		// 0xc2c98
		g10 = v1;
		return result3;
	}
	// 0xc2bb4
	v34 = *(int16_t *)(*(int32_t *)g25 + 2 * v20 + 224 * v19);
	*(int32_t *)g27 = (int32_t)v34;
	v29 = *(int32_t *)g21;
	int32_t result5; // 0xc2c7c
	if (*(int32_t *)g27 == 0) {
		// 0xc2c6c
		v30 = *(int32_t *)g26;
		v31 = v30 + v29 + g31;
		g34 = v31;
		result5 = town_clear_upper_buf(v31, v30);
		// branch -> 0xc2c98
	} else {
		// 0xc2bd8
		g34 = g29;
		g37 = g30;
		v13 = *(int32_t *)g26 + v29 + g31;
		v21 = function_52378();
		v15 = 0;
		v28 = *(int32_t *)g28 + 32 * v21;
		v14 = v28;
		v22 = v28;
		// branch -> 0xc2c04
		while (true) {
			// 0xc2c04
			if (g35 < 0) {
				goto lab_0xc2c24;
			}
			goto lab_0xc2c0c;
		}
	}
	// 0xc2c98
	g10 = v1;
	return result5;
}

// Address range: 0xc2cac - 0xc2f68
int32_t T_DrawGame(int32_t a1, int32_t a2)
{
	int32_t v1 = g10;     // 0xc2cb0
	int32_t v2 = a1 - 10; // r23
	g28 = a2 - 1;
	g30 = 10;
	g33 = *(int32_t *)(g23 - 0x7698);
	g35 = *(int32_t *)(g23 - 0x7804);
	g36 = *(int32_t *)(g23 - 0x7808);
	*(int32_t *)*(int32_t *)(g23 - 0x7258) = 640;
	*(int32_t *)*(int32_t *)(g23 - 0x725c) = 352;
	*(int32_t *)*(int32_t *)(g23 - 0x7260) = 10;
	*(int32_t *)*(int32_t *)(g23 - 0x7264) = 11;
	int32_t v3 = *(int32_t *)(g23 - 0x77b8); // 0xc2d0c
	int32_t v4 = *(int32_t *)v3;             // 0xc2d14
	int32_t v5 = v4 + 64;                    // 0xc2d20
	g32 = v5;
	int32_t v6 = *(int32_t *)(v3 + 4) + 175; // r27
	int32_t v7;                              // 0xc2d78
	int32_t v8;
	int32_t v9;
	int32_t v10;    // 0xc2d48
	int32_t v11;    // 0xc2e7c
	int32_t v12;    // 0xc2e80
	int32_t v13;    // 0xc2e88
	int32_t v14;    // 0xc2ee4
	int32_t v15;    // 0xc2ee8
	int32_t v16;    // 0xc2eec
	int32_t v17;    // 0xc2f40
	int32_t v18;    // 0xc2e90
	uint32_t v19;   // 0xc2d7c
	int32_t result; // 0xc2f3c
	if (*(int32_t *)*(int32_t *)(g23 - 0x77c4) == 0) {
		// 0xc2d2c
		if (*(int32_t *)*(int32_t *)(g23 - 0x77c8) != 0) {
			// 0xc2d3c
			g30 = 6;
			v2 += 2;
			g28 -= 2;
			v10 = v4 + 352;
			g32 = v10;
			v7 = v10;
			// branch -> 0xc2d4c
		} else {
			v7 = v5;
		}
		// 0xc2d4c
		if (*(int32_t *)*(int32_t *)(g23 - 0x77bc) == 0) {
			// 0xc2d5c
			if (*(int32_t *)*(int32_t *)(g23 - 0x77c0) != 0) {
				// 0xc2d6c
				g30 = 6;
				v2 += 2;
				g28 -= 2;
				g32 = v7 - 32;
				// branch -> 0xc2d7c
			}
		} else {
			// 0xc2d6c
			g30 = 6;
			v2 += 2;
			g28 -= 2;
			g32 = v7 - 32;
			// branch -> 0xc2d7c
		}
		// 0xc2d7c
		v19 = *(int32_t *)(v3 + 16);
		if (v19 <= 8) {
			// 0xc2d88
			return *(int32_t *)(*(int32_t *)(g23 - 0x5668) + 4 * v19);
		}
		// 0xc2e24
		*(int32_t *)g36 = *(int32_t *)(g33 + 640) + *(int32_t *)g35;
		function_c28b8(v2, g28, g32, v6, g30, 0, 0);
		function_c28b8(g27, g28 + 1, g32 - 32, g31 + 16, g30, g26, 1);
		v11 = g26 + 1;
		v12 = g31 + 32;
		v13 = g27 + 1;
		// branch -> 0xc2e38
		while (v11 < 7) {
			// 0xc2e38
			function_c28b8(v13, g28, g32, v12, g30, v11, 0);
			function_c28b8(g27, g28 + 1, g32 - 32, g31 + 16, g30, g26, 1);
			v11 = g26 + 1;
			v12 = g31 + 32;
			v13 = g27 + 1;
			// continue -> 0xc2e38
		}
		// 0xc2e90
		v18 = *(int32_t *)g35;
		g35 = 0;
		*(int32_t *)g36 = *(int32_t *)(g33 + 2048) + v18;
		v8 = v13;
		v9 = v12;
		if (g35 >= g29) {
			// 0xc2ef8
			function_c1f84(v8, g28, g32, v9, g30, 0, 0);
			result = function_c1f84(g27, g28 + 1, g32 - 32, g31 + 16, g30, g29, 1);
			v17 = g29 + 1;
			// branch -> 0xc2efc
			while (v17 < 7) {
				// 0xc2efc
				function_c1f84(g27 + 1, g28, g32, g31 + 32, g30, v17, 0);
				result = function_c1f84(g27, g28 + 1, g32 - 32, g31 + 16, g30, g29, 1);
				v17 = g29 + 1;
				// continue -> 0xc2efc
			}
			// 0xc2f54
			g10 = v1;
			return result;
		}
		function_c16a0(v8, g28, g32, v9, g30, 0);
		function_c16a0(g27, g28 + 1, g32 - 32, g31 + 16, g30, 1);
		v14 = g27 + 1;
		v15 = g31 + 32;
		v16 = g35 + 1;
		g35 = v16;
		while (v16 < g29) {
			// 0xc2ea8
			function_c16a0(v14, g28, g32, v15, g30, 0);
			function_c16a0(g27, g28 + 1, g32 - 32, g31 + 16, g30, 1);
			v14 = g27 + 1;
			v15 = g31 + 32;
			v16 = g35 + 1;
			g35 = v16;
			// continue -> 0xc2ea8
		}
		// 0xc2ef8
		function_c1f84(v14, g28, g32, v15, g30, 0, 0);
		result = function_c1f84(g27, g28 + 1, g32 - 32, g31 + 16, g30, g29, 1);
		v17 = g29 + 1;
		// branch -> 0xc2efc
		while (v17 < 7) {
			// 0xc2efc
			function_c1f84(g27 + 1, g28, g32, g31 + 32, g30, v17, 0);
			result = function_c1f84(g27, g28 + 1, g32 - 32, g31 + 16, g30, g29, 1);
			v17 = g29 + 1;
			// continue -> 0xc2efc
		}
		// 0xc2f54
		g10 = v1;
		return result;
	}
	// 0xc2d3c
	g30 = 6;
	v2 += 2;
	g28 -= 2;
	v10 = v4 + 352;
	g32 = v10;
	v7 = v10;
	// branch -> 0xc2d4c
	// 0xc2d4c
	if (*(int32_t *)*(int32_t *)(g23 - 0x77bc) != 0) {
		// 0xc2d6c
		g30 = 6;
		g28 -= 2;
		g32 = v7 - 32;
		// branch -> 0xc2d7c
		// 0xc2d7c
		v19 = *(int32_t *)(v3 + 16);
		if (v19 <= 8) {
			// 0xc2d88
			return *(int32_t *)(*(int32_t *)(g23 - 0x5668) + 4 * v19);
		}
		// 0xc2e24
		*(int32_t *)g36 = *(int32_t *)(g33 + 640) + *(int32_t *)g35;
		function_c28b8(v2 + 2, g28, g32, v6, g30, 0, 0);
		function_c28b8(g27, g28 + 1, g32 - 32, g31 + 16, g30, g26, 1);
		v11 = g26 + 1;
		v12 = g31 + 32;
		v13 = g27 + 1;
		// branch -> 0xc2e38
		while (v11 < 7) {
			// 0xc2e38
			function_c28b8(v13, g28, g32, v12, g30, v11, 0);
			function_c28b8(g27, g28 + 1, g32 - 32, g31 + 16, g30, g26, 1);
			v11 = g26 + 1;
			v12 = g31 + 32;
			v13 = g27 + 1;
			// continue -> 0xc2e38
		}
		// 0xc2e90
		v18 = *(int32_t *)g35;
		g35 = 0;
		*(int32_t *)g36 = *(int32_t *)(g33 + 2048) + v18;
		v8 = v13;
		v9 = v12;
		if (g35 >= g29) {
			// 0xc2ef8
			function_c1f84(v8, g28, g32, v9, g30, 0, 0);
			result = function_c1f84(g27, g28 + 1, g32 - 32, g31 + 16, g30, g29, 1);
			v17 = g29 + 1;
			// branch -> 0xc2efc
			while (v17 < 7) {
				// 0xc2efc
				function_c1f84(g27 + 1, g28, g32, g31 + 32, g30, v17, 0);
				result = function_c1f84(g27, g28 + 1, g32 - 32, g31 + 16, g30, g29, 1);
				v17 = g29 + 1;
				// continue -> 0xc2efc
			}
			// 0xc2f54
			g10 = v1;
			return result;
		}
		function_c16a0(v8, g28, g32, v9, g30, 0);
		function_c16a0(g27, g28 + 1, g32 - 32, g31 + 16, g30, 1);
		v14 = g27 + 1;
		v15 = g31 + 32;
		v16 = g35 + 1;
		g35 = v16;
		while (v16 < g29) {
			// 0xc2ea8
			function_c16a0(v14, g28, g32, v15, g30, 0);
			function_c16a0(g27, g28 + 1, g32 - 32, g31 + 16, g30, 1);
			v14 = g27 + 1;
			v15 = g31 + 32;
			v16 = g35 + 1;
			g35 = v16;
			// continue -> 0xc2ea8
		}
		// 0xc2ef8
		function_c1f84(v14, g28, g32, v15, g30, 0, 0);
		result = function_c1f84(g27, g28 + 1, g32 - 32, g31 + 16, g30, g29, 1);
		v17 = g29 + 1;
		// branch -> 0xc2efc
		while (v17 < 7) {
			// 0xc2efc
			function_c1f84(g27 + 1, g28, g32, g31 + 32, g30, v17, 0);
			result = function_c1f84(g27, g28 + 1, g32 - 32, g31 + 16, g30, g29, 1);
			v17 = g29 + 1;
			// continue -> 0xc2efc
		}
		// 0xc2f54
		g10 = v1;
		return result;
	}
	// 0xc2d5c
	if (*(int32_t *)*(int32_t *)(g23 - 0x77c0) != 0) {
		// 0xc2d6c
		g30 = 6;
		g28 -= 2;
		g32 = v7 - 32;
		// branch -> 0xc2d7c
	}
	// 0xc2d7c
	v19 = *(int32_t *)(v3 + 16);
	if (v19 <= 8) {
		// 0xc2d88
		return *(int32_t *)(*(int32_t *)(g23 - 0x5668) + 4 * v19);
	}
	// 0xc2e24
	*(int32_t *)g36 = *(int32_t *)(g33 + 640) + *(int32_t *)g35;
	function_c28b8(v2 + 2, g28, g32, v6, g30, 0, 0);
	function_c28b8(g27, g28 + 1, g32 - 32, g31 + 16, g30, g26, 1);
	v11 = g26 + 1;
	v12 = g31 + 32;
	v13 = g27 + 1;
	// branch -> 0xc2e38
	while (v11 < 7) {
		// 0xc2e38
		function_c28b8(v13, g28, g32, v12, g30, v11, 0);
		function_c28b8(g27, g28 + 1, g32 - 32, g31 + 16, g30, g26, 1);
		v11 = g26 + 1;
		v12 = g31 + 32;
		v13 = g27 + 1;
		// continue -> 0xc2e38
	}
	// 0xc2e90
	v18 = *(int32_t *)g35;
	g35 = 0;
	*(int32_t *)g36 = *(int32_t *)(g33 + 2048) + v18;
	v8 = v13;
	v9 = v12;
	if (g35 >= g29) {
		// 0xc2ef8
		function_c1f84(v8, g28, g32, v9, g30, 0, 0);
		result = function_c1f84(g27, g28 + 1, g32 - 32, g31 + 16, g30, g29, 1);
		v17 = g29 + 1;
		// branch -> 0xc2efc
		while (v17 < 7) {
			// 0xc2efc
			function_c1f84(g27 + 1, g28, g32, g31 + 32, g30, v17, 0);
			result = function_c1f84(g27, g28 + 1, g32 - 32, g31 + 16, g30, g29, 1);
			v17 = g29 + 1;
			// continue -> 0xc2efc
		}
		// 0xc2f54
		g10 = v1;
		return result;
	}
	function_c16a0(v8, g28, g32, v9, g30, 0);
	function_c16a0(g27, g28 + 1, g32 - 32, g31 + 16, g30, 1);
	v14 = g27 + 1;
	v15 = g31 + 32;
	v16 = g35 + 1;
	g35 = v16;
	while (v16 < g29) {
		// 0xc2ea8
		function_c16a0(v14, g28, g32, v15, g30, 0);
		function_c16a0(g27, g28 + 1, g32 - 32, g31 + 16, g30, 1);
		v14 = g27 + 1;
		v15 = g31 + 32;
		v16 = g35 + 1;
		g35 = v16;
		// continue -> 0xc2ea8
	}
	// 0xc2ef8
	function_c1f84(v14, g28, g32, v15, g30, 0, 0);
	result = function_c1f84(g27, g28 + 1, g32 - 32, g31 + 16, g30, g29, 1);
	v17 = g29 + 1;
	// branch -> 0xc2efc
	while (v17 < 7) {
		// 0xc2efc
		function_c1f84(g27 + 1, g28, g32, g31 + 32, g30, v17, 0);
		result = function_c1f84(g27, g28 + 1, g32 - 32, g31 + 16, g30, g29, 1);
		v17 = g29 + 1;
		// continue -> 0xc2efc
	}
	// 0xc2f54
	g10 = v1;
	return result;
}

// Address range: 0xc2f68 - 0xc32a0
int32_t T_DrawZoom(int32_t a1, int32_t a2)
{
	// 0xc2f68
	g30 = a2 - 1;
	g36 = *(int32_t *)(g23 - 0x7804);
	g32 = 6;
	*(int32_t *)*(int32_t *)(g23 - 0x7258) = 384;
	int32_t v1 = 6; // r0
	*(int32_t *)*(int32_t *)(g23 - 0x725c) = 192;
	*(int32_t *)*(int32_t *)(g23 - 0x7260) = v1;
	*(int32_t *)*(int32_t *)(g23 - 0x7264) = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x77b8); // 0xc2fc4
	uint32_t v3 = *(int32_t *)(v2 + 16);     // 0xc2fc4
	g35 = *(int32_t *)v2 + 64;
	g33 = *(int32_t *)(v2 + 4) + 143;
	if (v3 <= 8) {
		// 0xc2fe0
		return *(int32_t *)(*(int32_t *)(g23 - 0x566c) + 4 * v3);
	}
	int32_t v4 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 572) + *(int32_t *)g36; // 0xc3088
	*(int32_t *)*(int32_t *)(g23 - 0x7808) = v4;
	function_c28b8(a1 - 6, g30, g35, g33, g32, 0, 0);
	function_c28b8(g29, g30 + 1, g35 - 32, g33 + 16, g32, g26, 1);
	int32_t v5 = g26 + 1;  // 0xc30d4
	int32_t v6 = g33 + 32; // 0xc30d8
	g33 = v6;
	int32_t v7 = g29 + 1; // 0xc30e0
	int32_t v8 = v7;      // r25
	// branch -> 0xc3090
	while (v5 < 7) {
		// 0xc3090
		function_c28b8(v7, g30, g35, v6, g32, v5, 0);
		function_c28b8(g29, g30 + 1, g35 - 32, g33 + 16, g32, g26, 1);
		v5 = g26 + 1;
		v6 = g33 + 32;
		g33 = v6;
		v7 = g29 + 1;
		v8 = v7;
		// continue -> 0xc3090
	}
	// 0xc30e8
	*(int32_t *)g28 = *(int32_t *)(g27 + 1280) + *(int32_t *)g36;
	int32_t v9 = g33;
	int32_t result; // r3
	int32_t v10;    // r4
	int32_t v11;    // r6
	int32_t v12;    // r7
	int32_t v13;    // r8
	int32_t v14;    // 0xc31ac
	int32_t v15;    // 0xc3234
	int32_t v16;    // 0xc3254
	int32_t v17;    // 0xc3258
	int32_t v18;    // 0xc3198
	int32_t v19;    // 0xc319c
	int32_t v20;    // 0xc3234
	int32_t v21;    // 0xc3230
	int32_t v22;    // 0xc323c
	if (0 < g31) {
		function_c16a0(v8, g30, g35, v9, g32, 0);
		function_c16a0(g29, g30 + 1, g35 - 32, g33 + 16, g32, 1);
		int32_t v23 = g29 + 1;  // 0xc313c
		int32_t v24 = g33 + 32; // 0xc3140
		g33 = v24;
		while (g26 + 1 < g31) {
			// 0xc3100
			function_c16a0(v23, g30, g35, v24, g32, 0);
			function_c16a0(g29, g30 + 1, g35 - 32, g33 + 16, g32, 1);
			v23 = g29 + 1;
			v24 = g33 + 32;
			g33 = v24;
			// continue -> 0xc3100
		}
		// 0xc3150
		function_c1f84(v23, g30, g35, v24, g32, 0, 0);
		function_c1f84(g29, g30 + 1, g35 - 32, g33 + 16, g32, g27, 1);
		v18 = g27 + 1;
		v19 = g33 + 32;
		g33 = v19;
		// branch -> 0xc3154
		while (v18 < 7) {
			// 0xc3154
			function_c1f84(g29 + 1, g30, g35, v19, g32, v18, 0);
			function_c1f84(g29, g30 + 1, g35 - 32, g33 + 16, g32, g27, 1);
			v18 = g27 + 1;
			v19 = g33 + 32;
			g33 = v19;
			// continue -> 0xc3154
		}
		// 0xc31ac
		v14 = g23;
		if (*(int32_t *)*(int32_t *)(v14 - 0x77c4) == 0) {
			// 0xc31bc
			if (*(int32_t *)*(int32_t *)(v14 - 0x77c8) == 0) {
				// 0xc31e4
				if (*(int32_t *)*(int32_t *)(v14 - 0x77bc) == 0) {
					// 0xc31f4
					if (*(int32_t *)*(int32_t *)(v14 - 0x77c0) == 0) {
						// 0xc321c
						v11 = 320;
						v15 = 320;
						// branch -> 0xc3230
						// 0xc3230
						v21 = *(int32_t *)g36;
						v20 = v15 + 768;
						result = 2 * v20;
						v22 = v21 + (int32_t)&g8;
						v10 = v22;
						v12 = v22 + 768;
						v13 = 176;
						int32_t v25 = v21 + (int32_t)&g7; // 0xc325019
						int32_t v26 = v15;                // 0xc324c
						// branch -> 0xc324c
						while (true) {
							// 0xc324c
							v16 = v26;
							v17 = v25;
							// branch -> 0xc3250
						lab_0xc3250_5:
							while (true) {
								int32_t v27 = v16 - 1;                                                              // 0xc3254
								int32_t v28 = v27;                                                                  // r9
								int32_t v29 = v17 + 1;                                                              // r5
								int32_t v30 = 0x10000 * __asm_rlwimi((int32_t) * (char *)v17, 8, 16, 23) / 0x10000; // 0xc3260
								*(int16_t *)v10 = (int16_t)v30;
								v10 += 2;
								*(int16_t *)v12 = (int16_t)v30;
								int32_t v31 = v12 + 2; // 0xc3270
								v12 = v31;
								if (v27 == 0) {
									int32_t v32 = v13 - 1; // 0xc3278
									v13 = v32;
									v12 = v31 - result;
									v10 -= result;
									if (v32 == 0) {
										// 0xc328c
										return result;
									}
									// 0xc3278
									v25 = v29 - v20;
									v26 = v11;
									// branch -> 0xc324c
									break;
								} else {
									// 0xc3250
									v16 = v28;
									v17 = v29;
									// branch -> 0xc3250
									continue;
								}
							}
						}
					}
				}
				// 0xc3204
				v11 = 160;
				v15 = 160;
				// branch -> 0xc3230
				// 0xc3230
				v21 = *(int32_t *)g36;
				v20 = v15 + 768;
				result = 2 * v20;
				v22 = v21 + (int32_t)&g8;
				v10 = v22;
				v12 = v22 + 768;
				v13 = 176;
				// branch -> 0xc324c
				while (true) {
					// 0xc324c
					v16 = v15;
					v17 = v21 + 0x3bdb0;
					// branch -> 0xc3250
					goto lab_0xc3250_5;
				}
			}
		}
		// 0xc31cc
		v11 = 160;
		v15 = 160;
		// branch -> 0xc3230
		// 0xc3230
		v21 = *(int32_t *)g36;
		v20 = v15 + 768;
		result = 2 * v20;
		v22 = v21 + (int32_t) "; " - 1152;
		v10 = v22;
		v12 = v22 + 768;
		v13 = 176;
		// branch -> 0xc324c
		while (true) {
			// 0xc324c
			v16 = v15;
			v17 = v21 + 0x3bdb0;
			// branch -> 0xc3250
			goto lab_0xc3250_5;
		}
	}
	// 0xc3150
	function_c1f84(v8, g30, g35, v9, g32, 0, 0);
	function_c1f84(g29, g30 + 1, g35 - 32, g33 + 16, g32, g27, 1);
	v18 = g27 + 1;
	v19 = g33 + 32;
	g33 = v19;
	// branch -> 0xc3154
	while (v18 < 7) {
		// 0xc3154
		function_c1f84(g29 + 1, g30, g35, v19, g32, v18, 0);
		function_c1f84(g29, g30 + 1, g35 - 32, g33 + 16, g32, g27, 1);
		v18 = g27 + 1;
		v19 = g33 + 32;
		g33 = v19;
		// continue -> 0xc3154
	}
	// 0xc31ac
	v14 = g23;
	if (*(int32_t *)*(int32_t *)(v14 - 0x77c4) == 0) {
		// 0xc31bc
		if (*(int32_t *)*(int32_t *)(v14 - 0x77c8) == 0) {
			// 0xc31e4
			if (*(int32_t *)*(int32_t *)(v14 - 0x77bc) == 0) {
				// 0xc31f4
				if (*(int32_t *)*(int32_t *)(v14 - 0x77c0) == 0) {
					// 0xc321c
					v11 = 320;
					v15 = 320;
					// branch -> 0xc3230
					// 0xc3230
					v21 = *(int32_t *)g36;
					v20 = v15 + 768;
					result = 2 * v20;
					v22 = v21 + (int32_t)&g8;
					v10 = v22;
					v12 = v22 + 768;
					v13 = 176;
					// branch -> 0xc324c
					while (true) {
						// 0xc324c
						v16 = v15;
						v17 = v21 + (int32_t)&g7;
						// branch -> 0xc3250
						goto lab_0xc3250_5;
					}
				}
			}
			// 0xc3204
			v11 = 160;
			v15 = 160;
			// branch -> 0xc3230
			// 0xc3230
			v21 = *(int32_t *)g36;
			v20 = v15 + 768;
			result = 2 * v20;
			v22 = v21 + (int32_t)&g8;
			v10 = v22;
			v12 = v22 + 768;
			v13 = 176;
			// branch -> 0xc324c
			while (true) {
				// 0xc324c
				v16 = v15;
				v17 = v21 + 0x3bdb0;
				// branch -> 0xc3250
				goto lab_0xc3250_5;
			}
		}
	}
	// 0xc31cc
	v11 = 160;
	v15 = 160;
	// branch -> 0xc3230
	// 0xc3230
	v21 = *(int32_t *)g36;
	v20 = v15 + 768;
	result = 2 * v20;
	v22 = v21 + (int32_t) "; " - 1152;
	v10 = v22;
	v12 = v22 + 768;
	v13 = 176;
	// branch -> 0xc324c
	while (true) {
		// 0xc324c
		v16 = v15;
		v17 = v21 + 0x3bdb0;
		// branch -> 0xc3250
		goto lab_0xc3250_5;
	}
}

// Address range: 0xc32a0 - 0xc347c
int32_t T_DrawView(int32_t a1, int32_t a2)
{
	int32_t v1 = g36;                        // 0xc32a0
	int32_t v2 = g10;                        // 0xc32a4
	int32_t v3 = g35;                        // 0xc32ac
	int32_t v4 = *(int32_t *)(g23 - 0x7294); // 0xc32b0
	*(int32_t *)*(int32_t *)(g23 - 0x7290) = 0;
	int32_t v5 = *(int32_t *)(g23 - 0x766c); // 0xc32cc
	*(int32_t *)v4 = 0;
	if (*(int32_t *)v5 == 0) {
		// 0xc32e8
		T_DrawZoom(v5, v4);
		// branch -> 0xc32ec
	} else {
		// 0xc32e0
		T_DrawGame(v5, v4);
		// branch -> 0xc32ec
	}
	int32_t v6 = *(int32_t *)(g23 - 0x7778); // 0xc32ec
	int32_t v7 = g23;                        // 0xc3300
	if (*(int32_t *)v6 != 0) {
		// 0xc32fc
		DrawAutomap(v6);
		v7 = g23;
		// branch -> 0xc3300
	}
	int32_t v8 = *(int32_t *)(v7 - 0x7764); // 0xc3300
	int32_t v9 = v7;                        // 0xc3338
	if (*(char *)v8 != 0) {
		// 0xc3310
		if (*(char *)g36 == 0) {
			// 0xc331c
			DrawSText(v8);
			v9 = g23;
			// branch -> 0xc3320
		} else {
			v9 = v7;
		}
	}
	int32_t v10 = *(int32_t *)(v9 - 0x77bc); // 0xc3320
	int32_t v11;                             // 0xc3350
	int32_t v12;                             // 0xc33e4
	int32_t v13;                             // 0xc3400
	int32_t v14;                             // 0xc3414
	int32_t v15;                             // 0xc3438
	int32_t v16;                             // 0xc344c
	int32_t v17;                             // 0xc3450
	int32_t v18;                             // 0xc3454
	int32_t v19;                             // 0xc3458
	int32_t v20;                             // 0xc345c
	int32_t result;                          // 0xc3460
	int32_t v21;                             // 0xc3390
	int32_t v22;                             // 0xc3350
	int32_t v23;                             // 0xc3368
	int32_t v24;                             // 0xc3384
	int32_t v25;                             // 0xc33b0
	int32_t v26;                             // 0xc3400
	int32_t v27;                             // 0xc3414
	int32_t v28;                             // 0xc3438
	if (*(int32_t *)v10 != 0) {
		// 0xc3330
		DrawInv(v10);
		// branch -> 0xc334c
		// 0xc334c
		DrawDurIcon();
		v11 = g23;
		v22 = *(int32_t *)(v11 - 0x77c4);
		if (*(int32_t *)v22 != 0) {
			// 0xc3360
			DrawChr(v22);
			// branch -> 0xc33b0
			// 0xc33b0
			v25 = *(int32_t *)(g23 - 0x7674);
			if (*(int32_t *)v25 != 0) {
				// 0xc33c0
				DrawUniqueInfo(v25);
				// branch -> 0xc33c4
			}
			// 0xc33c4
			if (*(char *)g36 != 0) {
				// 0xc33d0
				DrawQText();
				// branch -> 0xc33d4
			}
			// 0xc33d4
			if (*(int32_t *)g35 != 0) {
				// 0xc33e0
				DrawSpellList();
				// branch -> 0xc33e4
			}
			// 0xc33e4
			v12 = g23;
			v13 = v12;
			if (*(int32_t *)*(int32_t *)(v12 - 0x7704) != 0) {
				// 0xc33f4
				DrawGoldSplit(*(int32_t *)*(int32_t *)(v12 - 0x7708));
				v13 = g23;
				// branch -> 0xc3400
			}
			// 0xc3400
			v26 = *(int32_t *)(v13 - 0x75d4);
			v14 = v13;
			if (*(int32_t *)v26 != 0) {
				// 0xc3410
				DrawHelp(v26);
				v14 = g23;
				// branch -> 0xc3414
			}
			// 0xc3414
			v27 = *(int32_t *)(v14 - 0x75d8);
			v15 = v14;
			if (*(char *)v27 != 0) {
				// 0xc3424
				DrawDiabloMsg(v27);
				v15 = g23;
				// branch -> 0xc3428
			}
			// 0xc3428
			if (*(int32_t *)*(int32_t *)(v15 - 0x75d0) == 0) {
				// 0xc344c
				v16 = DrawPlrMsg();
				v17 = gmenu_draw(v16);
				v18 = doom_draw(v17);
				v19 = DrawInfoBox(v18);
				v20 = DrawLifeFlask(v19);
				result = DrawManaFlask(v20);
				g36 = v1;
				g10 = v2;
				g35 = v3;
				return result;
			}
			// 0xc3438
			v28 = *(int32_t *)(v15 - 0x75cc);
			if (*(int32_t *)v28 == 0) {
				// 0xc3448
				gmenu_draw_pause(v28);
				// branch -> 0xc344c
			}
			// 0xc344c
			v16 = DrawPlrMsg();
			v17 = gmenu_draw(v16);
			v18 = doom_draw(v17);
			v19 = DrawInfoBox(v18);
			v20 = DrawLifeFlask(v19);
			result = DrawManaFlask(v20);
			g36 = v1;
			g10 = v2;
			g35 = v3;
			return result;
		}
		// 0xc3368
		v23 = *(int32_t *)(v11 - 0x77c8);
		if (*(int32_t *)v23 == 0) {
			// 0xc3380
			v24 = *(int32_t *)(v11 - 0x77a8);
			v21 = 0x55ec * *(int32_t *)*(int32_t *)(v11 - 0x77ac) + v24;
			if (*(int32_t *)(v21 + 384) != 0) {
				// 0xc33a0
				if (*(int32_t *)g35 == 0) {
					// 0xc33ac
					DrawLevelUpIcon(v21, v24);
					// branch -> 0xc33b0
				}
			}
		} else {
			// 0xc3378
			DrawQuestLog(v23);
			// branch -> 0xc33b0
		}
		// 0xc33b0
		v25 = *(int32_t *)(g23 - 0x7674);
		if (*(int32_t *)v25 != 0) {
			// 0xc33c0
			DrawUniqueInfo(v25);
			// branch -> 0xc33c4
		}
		// 0xc33c4
		if (*(char *)g36 != 0) {
			// 0xc33d0
			DrawQText();
			// branch -> 0xc33d4
		}
		// 0xc33d4
		if (*(int32_t *)g35 != 0) {
			// 0xc33e0
			DrawSpellList();
			// branch -> 0xc33e4
		}
		// 0xc33e4
		v12 = g23;
		v13 = v12;
		if (*(int32_t *)*(int32_t *)(v12 - 0x7704) != 0) {
			// 0xc33f4
			DrawGoldSplit(*(int32_t *)*(int32_t *)(v12 - 0x7708));
			v13 = g23;
			// branch -> 0xc3400
		}
		// 0xc3400
		v26 = *(int32_t *)(v13 - 0x75d4);
		v14 = v13;
		if (*(int32_t *)v26 != 0) {
			// 0xc3410
			DrawHelp(v26);
			v14 = g23;
			// branch -> 0xc3414
		}
		// 0xc3414
		v27 = *(int32_t *)(v14 - 0x75d8);
		v15 = v14;
		if (*(char *)v27 != 0) {
			// 0xc3424
			DrawDiabloMsg(v27);
			v15 = g23;
			// branch -> 0xc3428
		}
		// 0xc3428
		if (*(int32_t *)*(int32_t *)(v15 - 0x75d0) == 0) {
			// 0xc344c
			v16 = DrawPlrMsg();
			v17 = gmenu_draw(v16);
			v18 = doom_draw(v17);
			v19 = DrawInfoBox(v18);
			v20 = DrawLifeFlask(v19);
			result = DrawManaFlask(v20);
			g36 = v1;
			g10 = v2;
			g35 = v3;
			return result;
		}
		// 0xc3438
		v28 = *(int32_t *)(v15 - 0x75cc);
		if (*(int32_t *)v28 == 0) {
			// 0xc3448
			gmenu_draw_pause(v28);
			// branch -> 0xc344c
		}
		// 0xc344c
		v16 = DrawPlrMsg();
		v17 = gmenu_draw(v16);
		v18 = doom_draw(v17);
		v19 = DrawInfoBox(v18);
		v20 = DrawLifeFlask(v19);
		result = DrawManaFlask(v20);
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result;
	}
	int32_t v29 = *(int32_t *)(v9 - 0x77c0); // 0xc3338
	if (*(int32_t *)v29 != 0) {
		// 0xc3348
		DrawSpellBook(v29);
		// branch -> 0xc334c
	}
	// 0xc334c
	DrawDurIcon();
	v11 = g23;
	v22 = *(int32_t *)(v11 - 0x77c4);
	if (*(int32_t *)v22 != 0) {
		// 0xc3360
		DrawChr(v22);
		// branch -> 0xc33b0
		// 0xc33b0
		v25 = *(int32_t *)(g23 - 0x7674);
		if (*(int32_t *)v25 != 0) {
			// 0xc33c0
			DrawUniqueInfo(v25);
			// branch -> 0xc33c4
		}
		// 0xc33c4
		if (*(char *)g36 != 0) {
			// 0xc33d0
			DrawQText();
			// branch -> 0xc33d4
		}
		// 0xc33d4
		if (*(int32_t *)g35 != 0) {
			// 0xc33e0
			DrawSpellList();
			// branch -> 0xc33e4
		}
		// 0xc33e4
		v12 = g23;
		v13 = v12;
		if (*(int32_t *)*(int32_t *)(v12 - 0x7704) != 0) {
			// 0xc33f4
			DrawGoldSplit(*(int32_t *)*(int32_t *)(v12 - 0x7708));
			v13 = g23;
			// branch -> 0xc3400
		}
		// 0xc3400
		v26 = *(int32_t *)(v13 - 0x75d4);
		v14 = v13;
		if (*(int32_t *)v26 != 0) {
			// 0xc3410
			DrawHelp(v26);
			v14 = g23;
			// branch -> 0xc3414
		}
		// 0xc3414
		v27 = *(int32_t *)(v14 - 0x75d8);
		v15 = v14;
		if (*(char *)v27 != 0) {
			// 0xc3424
			DrawDiabloMsg(v27);
			v15 = g23;
			// branch -> 0xc3428
		}
		// 0xc3428
		if (*(int32_t *)*(int32_t *)(v15 - 0x75d0) == 0) {
			// 0xc344c
			v16 = DrawPlrMsg();
			v17 = gmenu_draw(v16);
			v18 = doom_draw(v17);
			v19 = DrawInfoBox(v18);
			v20 = DrawLifeFlask(v19);
			result = DrawManaFlask(v20);
			g36 = v1;
			g10 = v2;
			g35 = v3;
			return result;
		}
		// 0xc3438
		v28 = *(int32_t *)(v15 - 0x75cc);
		if (*(int32_t *)v28 == 0) {
			// 0xc3448
			gmenu_draw_pause(v28);
			// branch -> 0xc344c
		}
		// 0xc344c
		v16 = DrawPlrMsg();
		v17 = gmenu_draw(v16);
		v18 = doom_draw(v17);
		v19 = DrawInfoBox(v18);
		v20 = DrawLifeFlask(v19);
		result = DrawManaFlask(v20);
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result;
	}
	// 0xc3368
	v23 = *(int32_t *)(v11 - 0x77c8);
	if (*(int32_t *)v23 == 0) {
		// 0xc3380
		v24 = *(int32_t *)(v11 - 0x77a8);
		v21 = 0x55ec * *(int32_t *)*(int32_t *)(v11 - 0x77ac) + v24;
		if (*(int32_t *)(v21 + 384) != 0) {
			// 0xc33a0
			if (*(int32_t *)g35 == 0) {
				// 0xc33ac
				DrawLevelUpIcon(v21, v24);
				// branch -> 0xc33b0
			}
		}
	} else {
		// 0xc3378
		DrawQuestLog(v23);
		// branch -> 0xc33b0
	}
	// 0xc33b0
	v25 = *(int32_t *)(g23 - 0x7674);
	if (*(int32_t *)v25 != 0) {
		// 0xc33c0
		DrawUniqueInfo(v25);
		// branch -> 0xc33c4
	}
	// 0xc33c4
	if (*(char *)g36 != 0) {
		// 0xc33d0
		DrawQText();
		// branch -> 0xc33d4
	}
	// 0xc33d4
	if (*(int32_t *)g35 != 0) {
		// 0xc33e0
		DrawSpellList();
		// branch -> 0xc33e4
	}
	// 0xc33e4
	v12 = g23;
	v13 = v12;
	if (*(int32_t *)*(int32_t *)(v12 - 0x7704) != 0) {
		// 0xc33f4
		DrawGoldSplit(*(int32_t *)*(int32_t *)(v12 - 0x7708));
		v13 = g23;
		// branch -> 0xc3400
	}
	// 0xc3400
	v26 = *(int32_t *)(v13 - 0x75d4);
	v14 = v13;
	if (*(int32_t *)v26 != 0) {
		// 0xc3410
		DrawHelp(v26);
		v14 = g23;
		// branch -> 0xc3414
	}
	// 0xc3414
	v27 = *(int32_t *)(v14 - 0x75d8);
	v15 = v14;
	if (*(char *)v27 != 0) {
		// 0xc3424
		DrawDiabloMsg(v27);
		v15 = g23;
		// branch -> 0xc3428
	}
	// 0xc3428
	if (*(int32_t *)*(int32_t *)(v15 - 0x75d0) == 0) {
		// 0xc344c
		v16 = DrawPlrMsg();
		v17 = gmenu_draw(v16);
		v18 = doom_draw(v17);
		v19 = DrawInfoBox(v18);
		v20 = DrawLifeFlask(v19);
		result = DrawManaFlask(v20);
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result;
	}
	// 0xc3438
	v28 = *(int32_t *)(v15 - 0x75cc);
	if (*(int32_t *)v28 == 0) {
		// 0xc3448
		gmenu_draw_pause(v28);
		// branch -> 0xc344c
	}
	// 0xc344c
	v16 = DrawPlrMsg();
	v17 = gmenu_draw(v16);
	v18 = doom_draw(v17);
	v19 = DrawInfoBox(v18);
	v20 = DrawLifeFlask(v19);
	result = DrawManaFlask(v20);
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result;
}

// Address range: 0xc347c - 0xc3708
int32_t function_c347c(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7570); // 0xc3484
	g28 = v1;
	g29 = *(int32_t *)(g23 - 0x7264);
	g30 = *(int32_t *)(g23 - 0x7260);
	g31 = *(int32_t *)(g23 - 0x725c);
	g32 = *(int32_t *)(g23 - 0x7258);
	g33 = *(int32_t *)(g23 - 0x757c);
	g35 = *(int32_t *)(g23 - 0x7584);
	g34 = *(int32_t *)v1;
	g36 = function_c9948();
	g24 = 0;
	g26 = 0;
	int32_t v2 = 0; // 0xc34d46
	int32_t v3 = 0; // 0xc34cc3
	                // branch -> 0xc34bc
lab_0xc34bc:
	while (true) {
		// 0xc34bc
		g25 = 0;
		int32_t v4 = 0; // r23
		// branch -> 0xc34c4
		while (true) {
			// 0xc34c4
			g34 = 0;
			g37 = v3;
			int16_t v5 = *(int16_t *)(*(int32_t *)g33 + v2);      // 0xc34d4
			int32_t v6 = *(int32_t *)g35 + 32 * function_52378(); // 0xc34e8
			int32_t v7 = v6;                                      // r4
			int32_t v8;                                           // r0
			int32_t v9;                                           // 0xc3678
			if (v5 == 0) {
			lab_0xc3634:
				// 0xc3634
				v8 = 0;
				*(int16_t *)v6 = 0;
				*(int16_t *)(v7 + 2) = (int16_t)v8;
				*(int16_t *)(v7 + 4) = (int16_t)v8;
				*(int16_t *)(v7 + 6) = (int16_t)v8;
				*(int16_t *)(v7 + 8) = (int16_t)v8;
				*(int16_t *)(v7 + 10) = (int16_t)v8;
				*(int16_t *)(v7 + 12) = (int16_t)v8;
				*(int16_t *)(v7 + 14) = (int16_t)v8;
				*(int16_t *)(v7 + 16) = (int16_t)v8;
				*(int16_t *)(v7 + 18) = (int16_t)v8;
				*(int16_t *)(v7 + 20) = (int16_t)v8;
				*(int16_t *)(v7 + 22) = (int16_t)v8;
				*(int16_t *)(v7 + 24) = (int16_t)v8;
				*(int16_t *)(v7 + 26) = (int16_t)v8;
				*(int16_t *)(v7 + 28) = (int16_t)v8;
				*(int16_t *)(v7 + 30) = (int16_t)v8;
				// branch -> 0xc3678
			} else {
			lab_0xc34f0:;
				int32_t v10 = 2;                           // ctr
				int32_t v11 = g36 + 32 * (int32_t)v5 - 32; // r6
				int32_t v12 = 0;                           // r5
				int32_t v13 = 0;                           // 0xc3508
				// branch -> 0xc3508
				while (true) {
					int32_t v14 = 14 - __asm_rlwinm(v13, 0, 28, 30); // 0xc350c
					uint32_t v15 = v12;                              // 0xc3510
					int32_t v16 = 2 * (v15 % 2 + v14) + v11;         // 0xc351c
					unsigned char v17 = *(char *)v16;                // 0xc351c
					unsigned char v18 = *(char *)(v16 + 1);          // 0xc351c
					int32_t v19 = v15 + 1;                           // 0xc3520
					v8 = __asm_rlwinm(v19, 0, 28, 30);
					int32_t v20 = 256 * (int16_t)v18 | (int16_t)v17; // 0xc3528
					*(int16_t *)v7 = (int16_t)v20;
					int32_t v21 = v11 + 2 * (14 - v8 + v19 % 2); // 0xc3540
					unsigned char v22 = *(char *)v21;            // 0xc3540
					unsigned char v23 = *(char *)(v21 + 1);      // 0xc3540
					int32_t v24 = v15 + 2;                       // 0xc3544
					v8 = __asm_rlwinm(v24, 0, 28, 30);
					int32_t v25 = 256 * (int16_t)v23 | (int16_t)v22; // 0xc354c
					*(int16_t *)(v7 + 2) = (int16_t)v25;
					int32_t v26 = v11 + 2 * (14 - v8 + v24 % 2); // 0xc3564
					unsigned char v27 = *(char *)v26;            // 0xc3564
					unsigned char v28 = *(char *)(v26 + 1);      // 0xc3564
					int32_t v29 = v15 + 3;                       // 0xc3568
					v8 = __asm_rlwinm(v29, 0, 28, 30);
					int32_t v30 = 256 * (int16_t)v28 | (int16_t)v27; // 0xc3570
					*(int16_t *)(v7 + 4) = (int16_t)v30;
					int32_t v31 = v11 + 2 * (14 - v8 + v29 % 2); // 0xc3588
					unsigned char v32 = *(char *)v31;            // 0xc3588
					unsigned char v33 = *(char *)(v31 + 1);      // 0xc3588
					int32_t v34 = v15 + 4;                       // 0xc358c
					v8 = __asm_rlwinm(v34, 0, 28, 30);
					int32_t v35 = 256 * (int16_t)v33 | (int16_t)v32; // 0xc3594
					*(int16_t *)(v7 + 6) = (int16_t)v35;
					int32_t v36 = v11 + 2 * (14 - v8 + v34 % 2); // 0xc35ac
					unsigned char v37 = *(char *)v36;            // 0xc35ac
					unsigned char v38 = *(char *)(v36 + 1);      // 0xc35ac
					int32_t v39 = v15 + 5;                       // 0xc35b0
					v8 = __asm_rlwinm(v39, 0, 28, 30);
					int32_t v40 = 256 * (int16_t)v38 | (int16_t)v37; // 0xc35b8
					*(int16_t *)(v7 + 8) = (int16_t)v40;
					int32_t v41 = v11 + 2 * (14 - v8 + v39 % 2); // 0xc35d0
					unsigned char v42 = *(char *)v41;            // 0xc35d0
					unsigned char v43 = *(char *)(v41 + 1);      // 0xc35d0
					int32_t v44 = v15 + 6;                       // 0xc35d4
					v8 = __asm_rlwinm(v44, 0, 28, 30);
					int32_t v45 = 256 * (int16_t)v43 | (int16_t)v42; // 0xc35dc
					*(int16_t *)(v7 + 10) = (int16_t)v45;
					int32_t v46 = v11 + 2 * (14 - v8 + v44 % 2); // 0xc35f4
					unsigned char v47 = *(char *)v46;            // 0xc35f4
					unsigned char v48 = *(char *)(v46 + 1);      // 0xc35f4
					int32_t v49 = v15 + 7;                       // 0xc35f8
					v8 = __asm_rlwinm(v49, 0, 28, 30);
					int32_t v50 = 256 * (int16_t)v48 | (int16_t)v47; // 0xc3600
					*(int16_t *)(v7 + 12) = (int16_t)v50;
					int32_t v51 = v11 + 2 * (14 - v8 + v49 % 2);                // 0xc3618
					unsigned char v52 = *(char *)(v51 + 1);                     // 0xc3618
					int16_t v53 = 256 * (int16_t)v52 | (int16_t) * (char *)v51; // 0xc3618
					v12 = v15 + 8;
					*(int16_t *)(v7 + 14) = v53;
					v7 += 16;
					int32_t v54 = v10 - 1; // 0xc362c
					v10 = v54;
					if (v54 != 0) {
						// 0xc3508
						v13 = v12;
						// branch -> 0xc3508
						continue;
					}
					// 0xc3678
					v9 = g25 + 1;
					g25 = v9;
					v4 += 224;
					if (v9 < 112) {
					lab_0xc3678:
						// 0xc3678
						// branch -> 0xc34c4
						break;
					} else {
					lab_0xc3688:;
						int32_t v55 = g24 + 1; // 0xc3688
						g24 = v55;
						int32_t v56 = g26 + 2; // 0xc368c
						g26 = v56;
						if (v55 >= 112) {
							// break (via goto) -> 0xc3698
							goto lab_0xc3698;
						}
						v2 = v56;
						v3 = v55;
						// continue (via goto) -> 0xc34bc
						goto lab_0xc34bc;
					}
					int32_t result; // r3
					while (true) {
						int32_t v57 = g33;             // 0xc34c4
						int32_t v58 = *(int32_t *)v57; // 0xc34c4
						int32_t v59;                   // 0xc34c8
						g34 = v59;
						int32_t v60; // 0xc34cc
						g37 = v60;
						int32_t v61;             // 0xc34d0
						int32_t v62 = v58 + v61; // 0xc34d0
						v8 = v62;
						int32_t v63; // 0xc34d4
						v5 = *(int16_t *)(v62 + v63);
						int32_t v64 = function_52378(); // 0xc34d8
						result = v64;
						int32_t v65 = g35;             // 0xc34e0
						int32_t v66 = *(int32_t *)v65; // 0xc34e0
						v8 = v66;
						int32_t v67 = 32 * v64; // 0xc34e4
						result = v67;
						v6 = v66 + v67;
						v7 = v6;
						if (v5 == 0) {
							goto lab_0xc3634;
						}
						goto lab_0xc34f0;
					}
				lab_0xc3698:
					// 0xc3698
					function_c9acc(*(int32_t *)g28);
					int32_t *v68 = (int32_t *)g32; // 0xc36d8
					if (*(int32_t *)*(int32_t *)(g23 - 0x766c) == 0) {
						// 0xc36d4
						*v68 = 384;
						result = 6;
						*(int32_t *)g31 = 224;
						*(int32_t *)g30 = result;
						*(int32_t *)g29 = 7;
						// branch -> 0xc36f4
						// 0xc36f4
						return result;
					}
					// 0xc36b0
					*v68 = 640;
					result = 10;
					*(int32_t *)g31 = 352;
					*(int32_t *)g30 = result;
					*(int32_t *)g29 = 11;
					// branch -> 0xc36f4
					// 0xc36f4
					return result;
				}
			}
			// 0xc3678
			v9 = g25 + 1;
			g25 = v9;
			v4 += 224;
			if (v9 < 112) {
				goto lab_0xc3678;
			}
			goto lab_0xc3688;
		}
	}
}

// Address range: 0xc3708 - 0xc3878
int32_t function_c3708(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	// 0xc3708
	g34 = a1;
	int32_t v1 = g10; // 0xc370c
	g35 = *(int32_t *)(g23 - 0x757c);
	g29 = g34;
	g30 = a2;
	g31 = a3;
	g28 = a4;
	g32 = a5;
	g33 = a6;
	g36 = function_c9948();
	g34 = g30;
	int32_t v2 = function_c9948(); // r3
	int32_t v3 = 2 * g28;          // 0xc3744
	int32_t v4 = 4;                // r7
	int32_t v5 = 0;                // r6
	int32_t result;                // 0xc3860
	if (g33 <= 0) {
		// 0xc3854
		function_c9acc(g29);
		result = function_c9acc(g30);
		g10 = v1;
		return result;
	}
	int32_t v6 = g33; // 0xc384c13
	int32_t v7 = 0;   // 0xc384811
	int32_t v8 = 4;   // 0xc37646
	while (true) {
		int32_t v9 = g32;        // 0xc3754
		int32_t v10 = v9;        // ctr
		int32_t v11 = 224 * g31; // 0xc375c
		int32_t v12 = v6;        // 0xc384c
		int32_t v13 = v7;        // 0xc3848
		int32_t v14 = v8;        // 0xc37647
		if (v9 >= 1) {
			int32_t v15 = v8; // 0xc3764
			int32_t v16;      // 0xc383c
			while (true) {
				int32_t v17 = v2 + v15;                                     // 0xc3764
				unsigned char v18 = *(char *)(v17 + 1);                     // 0xc3764
				int16_t v19 = 256 * (int16_t)v18 | (int16_t) * (char *)v17; // 0xc3764
				int32_t v20 = v19;                                          // 0xc3768
				if (v19 == 0) {
					int32_t v21 = 0; // r9
					*(int16_t *)(v3 + *(int32_t *)g35 + v11) = 0;
					int32_t v22 = v11 + *(int32_t *)g35; // 0xc3784
					*(int16_t *)(v3 + v22 + 224) = (int16_t)v21;
					int32_t v23 = v11 + *(int32_t *)g35; // 0xc3794
					*(int16_t *)(v3 + v23 + 2) = (int16_t)v21;
					int32_t v24 = v11 + *(int32_t *)g35; // 0xc37a4
					*(int16_t *)(v3 + v24 + 226) = (int16_t)v21;
					// branch -> 0xc3838
				} else {
					int32_t v25 = 8 * v20 - 8;              // 0xc37b8
					int32_t v26 = g36 + v25;                // 0xc37bc
					int32_t v27 = v26;                      // r8
					int32_t v28 = v26 + v25;                // 0xc37c0
					unsigned char v29 = *(char *)v28;       // 0xc37c0
					unsigned char v30 = *(char *)(v28 + 1); // 0xc37c0
					int32_t v31 = *(int32_t *)g35 + v11;    // 0xc37d4
					*(int16_t *)(v3 + v31) = (256 * (int16_t)v30 | (int16_t)v29) + 1;
					int32_t v32 = 2 + v27;                     // 0xc37dc
					unsigned char v33 = *(char *)v32;          // 0xc37dc
					unsigned char v34 = *(char *)(v32 + 1);    // 0xc37dc
					int32_t v35 = *(int32_t *)g35 + 224 + v11; // 0xc37f4
					*(int16_t *)(v3 + v35) = (256 * (int16_t)v34 | (int16_t)v33) + 1;
					int32_t v36 = 4 + v27;                   // 0xc37fc
					unsigned char v37 = *(char *)v36;        // 0xc37fc
					unsigned char v38 = *(char *)(v36 + 1);  // 0xc37fc
					int32_t v39 = *(int32_t *)g35 + 2 + v11; // 0xc3814
					*(int16_t *)(v3 + v39) = (256 * (int16_t)v38 | (int16_t)v37) + 1;
					int32_t v40 = 6 + v27;                                      // 0xc381c
					unsigned char v41 = *(char *)(v40 + 1);                     // 0xc381c
					int16_t v42 = 256 * (int16_t)v41 | (int16_t) * (char *)v40; // 0xc381c
					int32_t v43 = v11 + *(int32_t *)g35;                        // 0xc3828
					*(int16_t *)(v3 + v43 + 226) = (int16_t)((int32_t)v42 + 1);
					// branch -> 0xc3838
				}
				int32_t v44 = v11 + 448; // 0xc3838
				v16 = v4 + 2;
				v4 = v16;
				int32_t v45 = v10 - 1; // 0xc3840
				v10 = v45;
				if (v45 == 0) {
					// break -> 0xc3844
					break;
				}
				v11 = v44;
				v15 = v16;
				// continue -> 0xc3764
			}
			// 0xc3844
			v12 = g33;
			v13 = v5;
			v14 = v16;
			// branch -> 0xc3844
		}
		int32_t v46 = v13 + 1; // 0xc3848
		v5 = v46;
		if (v46 >= v12) {
			// break -> 0xc3854
			break;
		}
		v6 = v12;
		v7 = v46;
		v3 += 4;
		v8 = v14;
		// continue -> 0xc3754
	}
	// 0xc3854
	function_c9acc(g29);
	result = function_c9acc(g30);
	g10 = v1;
	return result;
}

// Address range: 0xc3878 - 0xc3948
int32_t function_c3878(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0xc3878
	g34 = a1;
	g36 = *(int32_t *)(g23 - 0x757c);
	g35 = g34;
	g31 = a2;
	g32 = a3;
	g33 = a4;
	int32_t v1 = function_c9948();                           // 0xc389c
	int32_t v2 = 8 * g33 - 8;                                // 0xc38a4
	int32_t v3 = v2 + v1;                                    // 0xc38a8
	int32_t v4 = v3 + v2;                                    // 0xc38ac
	unsigned char v5 = *(char *)(v4 + 1);                    // 0xc38ac
	int16_t v6 = 256 * (int16_t)v5 | (int16_t) * (char *)v4; // 0xc38ac
	int32_t v7 = 224 * g31;                                  // 0xc38b0
	int32_t v8 = *(int32_t *)g36;                            // 0xc38b4
	int32_t v9 = 2 * g32;                                    // 0xc38bc
	*(int16_t *)(v8 + v7 + v9) = (int16_t)((int32_t)v6 + 1);
	unsigned char v10 = *(char *)(v3 + 2);                          // 0xc38d0
	unsigned char v11 = *(char *)(v3 + 3);                          // 0xc38d0
	int32_t v12 = *(int32_t *)g36;                                  // 0xc38d8
	int32_t v13 = (int32_t)(256 * (int16_t)v11 | (int16_t)v10) + 1; // 0xc38e4
	*(int16_t *)(v7 + v12 + v9 + 224) = (int16_t)v13;
	int32_t v14 = 4 + v3;                                       // 0xc38f0
	unsigned char v15 = *(char *)(v14 + 1);                     // 0xc38f0
	int16_t v16 = 256 * (int16_t)v15 | (int16_t) * (char *)v14; // 0xc38f0
	int32_t v17 = (int32_t)v16 + 1;                             // 0xc3904
	*(int16_t *)(v7 + *(int32_t *)g36 + v9 + 2) = (int16_t)v17;
	int32_t v18 = 6 + v3;                                       // 0xc3910
	unsigned char v19 = *(char *)(v18 + 1);                     // 0xc3910
	int16_t v20 = 256 * (int16_t)v19 | (int16_t) * (char *)v18; // 0xc3910
	int32_t v21 = v9 + v7 + *(int32_t *)g36;                    // 0xc3928
	*(int16_t *)(v21 + 226) = (int16_t)((int32_t)v20 + 1);
	int32_t result = function_c9acc(g35); // 0xc3930
	return result;
}

// Address range: 0xc3948 - 0xc3ca4
int32_t function_c3948(void)
{
	int32_t v1 = g36; // 0xc3948
	int32_t v2 = g10; // 0xc394c
	g36 = *(int32_t *)(g23 - 0x77ac);
	int32_t v3 = 0;                          // r11
	int32_t v4 = g35;                        // 0xc3958
	int32_t v5 = *(int32_t *)(g23 - 0x757c); // r8
	int32_t v6 = 0;                          // r10
	int32_t v7 = 0;                          // 0xc39904
	                                         // branch -> 0xc396c
lab_0xc396c:
	while (true) {
		int32_t v8 = 0;   // r9
		int32_t v9 = 14;  // ctr
		int32_t v10 = 0;  // r7
		int32_t v11 = 0;  // r6
		int32_t v12 = 0;  // r5
		int32_t v13 = 0;  // r4
		int32_t v14 = v7; // 0xc3990
		int16_t v15 = 0;
		int32_t v16 = 0; // 0xc398c
		// branch -> 0xc3988
		while (true) {
			// 0xc3988
			*(int16_t *)(*(int32_t *)v5 + v16 + v14) = v15;
			int32_t v17 = *(int32_t *)v5; // 0xc3994
			*(int16_t *)(v6 + v8 + v17 + 224) = (int16_t)v11;
			int32_t v18 = *(int32_t *)v5; // 0xc39a4
			*(int16_t *)(v6 + v8 + v18 + 2) = (int16_t)v12;
			int32_t v19 = *(int32_t *)v5; // 0xc39b4
			int32_t v20 = v8;             // 0xc39b8
			v8 = v20 + 448;
			*(int16_t *)(v6 + v20 + v19 + 226) = (int16_t)v13;
			int32_t v21 = *(int32_t *)v5; // 0xc39c8
			*(int16_t *)(v6 + v8 + v21) = (int16_t)v10;
			int32_t v22 = *(int32_t *)v5; // 0xc39d4
			*(int16_t *)(v6 + v8 + v22 + 224) = (int16_t)v11;
			int32_t v23 = *(int32_t *)v5; // 0xc39e4
			*(int16_t *)(v6 + v8 + v23 + 2) = (int16_t)v12;
			int32_t v24 = *(int32_t *)v5; // 0xc39f4
			int32_t v25 = v8;             // 0xc39f8
			v8 = v25 + 448;
			*(int16_t *)(v6 + v25 + v24 + 226) = (int16_t)v13;
			int32_t v26 = *(int32_t *)v5; // 0xc3a08
			*(int16_t *)(v6 + v8 + v26) = (int16_t)v10;
			int32_t v27 = *(int32_t *)v5; // 0xc3a14
			*(int16_t *)(v6 + v8 + v27 + 224) = (int16_t)v11;
			int32_t v28 = *(int32_t *)v5; // 0xc3a24
			*(int16_t *)(v6 + v8 + v28 + 2) = (int16_t)v12;
			int32_t v29 = *(int32_t *)v5; // 0xc3a34
			int32_t v30 = v8;             // 0xc3a38
			v8 = v30 + 448;
			*(int16_t *)(v6 + v30 + v29 + 226) = (int16_t)v13;
			int32_t v31 = *(int32_t *)v5; // 0xc3a48
			*(int16_t *)(v6 + v8 + v31) = (int16_t)v10;
			int32_t v32 = *(int32_t *)v5; // 0xc3a54
			*(int16_t *)(v6 + v8 + v32 + 224) = (int16_t)v11;
			int32_t v33 = *(int32_t *)v5; // 0xc3a64
			*(int16_t *)(v6 + v8 + v33 + 2) = (int16_t)v12;
			int32_t v34 = *(int32_t *)v5; // 0xc3a74
			int32_t v35 = v8;             // 0xc3a78
			v8 = v35 + 448;
			*(int16_t *)(v6 + v35 + v34 + 226) = (int16_t)v13;
			int32_t v36 = v9 - 1; // 0xc3a88
			v9 = v36;
			if (v36 == 0) {
				int32_t v37 = v3 + 2; // 0xc3a8c
				v3 = v37;
				int32_t v38 = v6 + 4; // 0xc3a90
				v6 = v38;
				if (v37 >= 112) {
					// break (via goto) -> 0xc3a9c
					goto lab_0xc3a9c;
				}
				v7 = v38;
				// continue (via goto) -> 0xc396c
				goto lab_0xc396c;
			} else {
				// 0xc3988
				v14 = v6;
				v15 = v10;
				v16 = v8;
				// branch -> 0xc3988
				continue;
			}
		}
	lab_0xc3a9c:;
		int32_t v39 = LoadFileInMem(*(int32_t *)(g23 - 0x5670), NULL); // 0xc3aa4
		int32_t v40 = v39;                                             // bp-20
		int32_t v41 = LoadFileInMem(*(int32_t *)(g23 - 0x5674), NULL); // 0xc3ab4
		int32_t v42 = v41;                                             // bp-24
		function_c3708(v39, v41, 46, 46, 25, 25);
		MemFreeDbg(&v42);
		int32_t v43 = LoadFileInMem(*(int32_t *)(g23 - 0x5678), NULL); // 0xc3ae8
		v42 = v43;
		function_c3708(v39, v43, 46, 0, 25, 23);
		MemFreeDbg(&v42);
		int32_t v44 = LoadFileInMem(*(int32_t *)(g23 - 0x567c), NULL); // 0xc3b1c
		v42 = v44;
		function_c3708(v39, v44, 0, 46, 23, 25);
		MemFreeDbg(&v42);
		int32_t v45 = LoadFileInMem(*(int32_t *)(g23 - 0x5680), NULL); // 0xc3b50
		v42 = v45;
		function_c3708(v39, v45, 0, 0, 23, 23);
		MemFreeDbg(&v42);
		int32_t result; // 0xc3c88
		char v46;       // 0xc3c44
		if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
			int32_t v47 = g36;                                 // 0xc3b8c
			int32_t v48 = *(int32_t *)(g23 - 0x77a8) + 0x5590; // 0xc3b98
			g35 = v48;
			int32_t v49 = v48; // 0xc3bc4
			int32_t v50 = v47; // 0xc3bbc
			if (*(char *)(v48 + 0x55ec * *(int32_t *)v47) % 2 == 0) {
				// 0xc3ba8
				function_c3878(v39, 48, 20, 320);
				v49 = g35;
				v50 = g36;
				// branch -> 0xc3bbc
			}
			unsigned char v51 = *(char *)(0x55ec * *(int32_t *)v50 + v49); // 0xc3bc4
			if (__asm_rlwinm_((int32_t)v51, 0, 30, 30) == 0) {
				// 0xc3bd0
				function_c3878(v40, 16, 68, 332);
				function_c3878(v40, 16, 70, 331);
				// branch -> 0xc3bf8
			}
			unsigned char v52 = *(char *)(g35 + 0x55ec * *(int32_t *)g36); // 0xc3c00
			if (__asm_rlwinm_((int32_t)v52, 0, 29, 29) == 0) {
				// 0xc3c0c
				g37 = 4;
				int32_t v53 = random(0) + 1; // 0xc3c28
				function_c3878(v40, 36, 78, v53);
				int32_t v54 = g35 + 1; // 0xc3c34
				// branch -> 0xc3c10
				while (v54 < 46) {
					// 0xc3c10
					g37 = 4;
					v53 = random(0) + 1;
					function_c3878(v40, v54, 78, v53);
					v54 = g35 + 1;
					// continue -> 0xc3c10
				}
				// 0xc3c40
				v46 = *(char *)(*(int32_t *)(g23 - 0x7604) + 314);
				if (v46 != 3) {
					// 0xc3c50
					if (v46 != 0) {
						// 0xc3c70
						function_c3878(v40, 60, 70, 342);
						// branch -> 0xc3c84
						// 0xc3c84
						result = MemFreeDbg(&v40);
						g36 = v1;
						g10 = v2;
						g35 = v4;
						return result;
					}
				}
				// 0xc3c58
				function_c3878(v40, 60, 70, 71);
				// branch -> 0xc3c84
				// 0xc3c84
				result = MemFreeDbg(&v40);
				g36 = v1;
				g10 = v2;
				g35 = v4;
				return result;
			}
		}
		// 0xc3c40
		v46 = *(char *)(*(int32_t *)(g23 - 0x7604) + 314);
		if (v46 == 3) {
			// 0xc3c58
			function_c3878(v40, 60, 70, 71);
			// branch -> 0xc3c84
			// 0xc3c84
			result = MemFreeDbg(&v40);
			g36 = v1;
			g10 = v2;
			g35 = v4;
			return result;
		}
		// 0xc3c50
		if (v46 != 0) {
			// 0xc3c70
			function_c3878(v40, 60, 70, 342);
			// branch -> 0xc3c84
			// 0xc3c84
			result = MemFreeDbg(&v40);
			g36 = v1;
			g10 = v2;
			g35 = v4;
			return result;
		}
		// 0xc3c58
		function_c3878(v40, 60, 70, 71);
		// branch -> 0xc3c84
		// 0xc3c84
		result = MemFreeDbg(&v40);
		g36 = v1;
		g10 = v2;
		g35 = v4;
		return result;
	}
}

// Address range: 0xc3ca4 - 0xc4008
int32_t CreateTown(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36; // 0xc3ca4
	int32_t v2 = g35; // 0xc3cb4
	int32_t v3 = 84;  // r0
	g35 = *(int32_t *)(g23 - 0x757c);
	g36 = *(int32_t *)(g23 - 0x7598);
	*(int32_t *)*(int32_t *)(g23 - 0x7530) = 10;
	*(int32_t *)*(int32_t *)(g23 - 0x7534) = 10;
	*(int32_t *)*(int32_t *)(g23 - 0x7538) = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x77b4); // r5
	*(int32_t *)*(int32_t *)(g23 - 0x753c) = v3;
	int32_t v5 = *(int32_t *)(g23 - 0x77b0); // 0xc3cf0
	int32_t v6 = v5;                         // r4
	int32_t v7;                              // ctr
	int32_t v8;                              // r6
	int32_t v9;
	int32_t v10; // 0xc3e2c
	int32_t v11; // 0xc3e2c4
	int32_t v12; // 0xc3e28
	int32_t v13; // 0xc3e40
	if (a1 == 0) {
		// 0xc3cf8
		*(int32_t *)v5 = 75;
		*(int32_t *)v4 = 68;
		// branch -> 0xc3d80
	} else {
		int32_t v14 = a1; // 0xc3d0c
		if (v14 == 1) {
			// 0xc3d14
			*(int32_t *)v5 = 25;
			*(int32_t *)v4 = 31;
			// branch -> 0xc3d80
		} else {
			// 0xc3d28
			if (v14 == 7) {
				int32_t v15 = *(int32_t *)*(int32_t *)(g23 - 0x6ec0); // 0xc3d34
				a1 = v15;
				int32_t v16 = v15; // 0xc3d50
				if (v15 == 5) {
					// 0xc3d40
					*(int32_t *)v5 = 49;
					*(int32_t *)v4 = 22;
					v16 = a1;
					// branch -> 0xc3d50
				}
				int32_t v17 = v16; // 0xc3d68
				if (v16 == 9) {
					// 0xc3d58
					*(int32_t *)v6 = 18;
					*(int32_t *)v4 = 69;
					v17 = a1;
					// branch -> 0xc3d68
				}
				// 0xc3d68
				if (v17 == 13) {
					// 0xc3d70
					*(int32_t *)v6 = 41;
					*(int32_t *)v4 = 81;
					// branch -> 0xc3d80
				}
			}
		}
		// 0xc3d80
		function_c3948();
		g34 = *(int32_t *)*(int32_t *)(g23 - 0x758c);
		memset();
		g34 = *(int32_t *)*(int32_t *)(v9 - 0x779c);
		memset();
		g34 = *(int32_t *)*(int32_t *)(v9 - 0x7680);
		memset();
		g34 = *(int32_t *)*(int32_t *)(v9 - 0x767c);
		memset();
		g34 = *(int32_t *)*(int32_t *)(v9 - 0x7684);
		memset();
		g34 = *(int32_t *)*(int32_t *)(v9 - 0x768c);
		memset();
		g34 = *(int32_t *)g36;
		memset();
		v8 = 0;
		v4 = 0;
		// branch -> 0xc3e14
		while (true) {
			// 0xc3e14
			a1 = 0;
			v7 = 112;
			v6 = 0;
			v13 = 0;
			v10 = 0;
			v12 = 0;
			// branch -> 0xc3e24
		lab_0xc3e24:;
			int32_t v18; // 0xc3fd0
			int32_t v19; // 0xc3fd4
			int32_t v20; // 0xc3fdc
			int32_t v21; // 0xc3fe0
			while (true) {
				int16_t v22 = *(int16_t *)(*(int32_t *)g35 + v12 + v10); // 0xc3e2c
				int32_t v23;                                             // 0xc3fd8
				if (v22 == 360) {
					// 0xc3e38
					*(char *)(v8 + *(int32_t *)g36 + v13) = 1;
					// branch -> 0xc3fd0
				} else {
					// 0xc3e4c
					if (v22 == 358) {
						// 0xc3e54
						*(char *)(v8 + *(int32_t *)g36 + v13) = 2;
						// branch -> 0xc3fd0
					} else {
						// 0xc3e68
						if (v22 == 129) {
							// 0xc3e70
							*(char *)(v8 + *(int32_t *)g36 + v13) = 6;
							// branch -> 0xc3fd0
						} else {
							// 0xc3e84
							if (v22 == 130) {
								// 0xc3e8c
								*(char *)(v8 + *(int32_t *)g36 + v13) = 7;
								// branch -> 0xc3fd0
							} else {
								// 0xc3ea0
								if (v22 == 128) {
									// 0xc3ea8
									*(char *)(v8 + *(int32_t *)g36 + v13) = 8;
									// branch -> 0xc3fd0
								} else {
									// 0xc3ebc
									if (v22 == 117) {
										// 0xc3ec4
										*(char *)(v8 + *(int32_t *)g36 + v13) = 9;
										// branch -> 0xc3fd0
									} else {
										// 0xc3ed8
										if (v22 == 157) {
											// 0xc3ee0
											*(char *)(v8 + *(int32_t *)g36 + v13) = 10;
											// branch -> 0xc3fd0
										} else {
											// 0xc3ef4
											if (v22 == 158) {
												// 0xc3efc
												*(char *)(v8 + *(int32_t *)g36 + v13) = 11;
												// branch -> 0xc3fd0
											} else {
												// 0xc3f10
												if (v22 == 156) {
													// 0xc3f18
													*(char *)(v8 + *(int32_t *)g36 + v13) = 12;
													// branch -> 0xc3fd0
												} else {
													// 0xc3f2c
													if (v22 == 162) {
														// 0xc3f34
														*(char *)(v8 + *(int32_t *)g36 + v13) = 13;
														// branch -> 0xc3fd0
													} else {
														// 0xc3f48
														if (v22 == 160) {
															// 0xc3f50
															*(char *)(v8 + *(int32_t *)g36 + v13) = 14;
															// branch -> 0xc3fd0
														} else {
															// 0xc3f64
															if (v22 == 214) {
																// 0xc3f6c
																*(char *)(v8 + *(int32_t *)g36 + v13) = 15;
																// branch -> 0xc3fd0
															} else {
																// 0xc3f80
																if (v22 == 212) {
																	// 0xc3f88
																	*(char *)(v8 + *(int32_t *)g36 + v13) = 16;
																	// branch -> 0xc3fd0
																} else {
																	// 0xc3f9c
																	if (v22 == 217) {
																		// 0xc3fa4
																		*(char *)(v8 + *(int32_t *)g36 + v13) = 17;
																		// branch -> 0xc3fd0
																	} else {
																		// 0xc3fb8
																		if (v22 == 216) {
																			// 0xc3fc0
																			*(char *)(v8 + *(int32_t *)g36 + v13) = 18;
																			// branch -> 0xc3fd0
																		}
																	}
																	// 0xc3fd0
																	v18 = a1 + 224;
																	a1 = v18;
																	v19 = v6 + 112;
																	v6 = v19;
																	v23 = v7 - 1;
																	v7 = v23;
																	if (v23 == 0) {
																	lab_0xc3fdc_13:
																		// 0xc3fdc
																		v20 = v8 + 1;
																		v8 = v20;
																		v21 = v4 + 2;
																		v4 = v21;
																		if (v20 >= 112) {
																			// break (via goto) -> 0xc3fec
																			goto lab_0xc3fec;
																		}
																		v11 = v21;
																		// continue (via goto) -> 0xc3e14
																		goto lab_0xc3e14;
																	} else {
																	lab_0xc3fd0_13:
																		// 0xc3fd0
																		v13 = v19;
																		v10 = v4;
																		v12 = v18;
																		// branch -> 0xc3e24
																		continue;
																	}
																}
																// 0xc3fd0
																v18 = a1 + 224;
																a1 = v18;
																v19 = v6 + 112;
																v6 = v19;
																v23 = v7 - 1;
																v7 = v23;
																if (v23 == 0) {
																	goto lab_0xc3fdc_13;
																}
																goto lab_0xc3fd0_13;
															}
															// 0xc3fd0
															v18 = a1 + 224;
															a1 = v18;
															v19 = v6 + 112;
															v6 = v19;
															v23 = v7 - 1;
															v7 = v23;
															if (v23 == 0) {
																goto lab_0xc3fdc_13;
															}
															goto lab_0xc3fd0_13;
														}
														// 0xc3fd0
														v18 = a1 + 224;
														a1 = v18;
														v19 = v6 + 112;
														v6 = v19;
														v23 = v7 - 1;
														v7 = v23;
														if (v23 == 0) {
															goto lab_0xc3fdc_13;
														}
														goto lab_0xc3fd0_13;
													}
													// 0xc3fd0
													v18 = a1 + 224;
													a1 = v18;
													v19 = v6 + 112;
													v6 = v19;
													v23 = v7 - 1;
													v7 = v23;
													if (v23 == 0) {
														goto lab_0xc3fdc_13;
													}
													goto lab_0xc3fd0_13;
												}
												// 0xc3fd0
												v18 = a1 + 224;
												a1 = v18;
												v19 = v6 + 112;
												v6 = v19;
												v23 = v7 - 1;
												v7 = v23;
												if (v23 == 0) {
													goto lab_0xc3fdc_13;
												}
												goto lab_0xc3fd0_13;
											}
											// 0xc3fd0
											v18 = a1 + 224;
											a1 = v18;
											v19 = v6 + 112;
											v6 = v19;
											v23 = v7 - 1;
											v7 = v23;
											if (v23 == 0) {
												goto lab_0xc3fdc_13;
											}
											goto lab_0xc3fd0_13;
										}
										// 0xc3fd0
										v18 = a1 + 224;
										a1 = v18;
										v19 = v6 + 112;
										v6 = v19;
										v23 = v7 - 1;
										v7 = v23;
										if (v23 == 0) {
											goto lab_0xc3fdc_13;
										}
										goto lab_0xc3fd0_13;
									}
									// 0xc3fd0
									v18 = a1 + 224;
									a1 = v18;
									v19 = v6 + 112;
									v6 = v19;
									v23 = v7 - 1;
									v7 = v23;
									if (v23 == 0) {
										goto lab_0xc3fdc_13;
									}
									goto lab_0xc3fd0_13;
								}
								// 0xc3fd0
								v18 = a1 + 224;
								a1 = v18;
								v19 = v6 + 112;
								v6 = v19;
								v23 = v7 - 1;
								v7 = v23;
								if (v23 == 0) {
									goto lab_0xc3fdc_13;
								}
								goto lab_0xc3fd0_13;
							}
							// 0xc3fd0
							v18 = a1 + 224;
							a1 = v18;
							v19 = v6 + 112;
							v6 = v19;
							v23 = v7 - 1;
							v7 = v23;
							if (v23 == 0) {
								goto lab_0xc3fdc_13;
							}
							goto lab_0xc3fd0_13;
						}
						// 0xc3fd0
						v18 = a1 + 224;
						a1 = v18;
						v19 = v6 + 112;
						v6 = v19;
						v23 = v7 - 1;
						v7 = v23;
						if (v23 == 0) {
							goto lab_0xc3fdc_13;
						}
						goto lab_0xc3fd0_13;
					}
					// 0xc3fd0
					v18 = a1 + 224;
					a1 = v18;
					v19 = v6 + 112;
					v6 = v19;
					v23 = v7 - 1;
					v7 = v23;
					if (v23 == 0) {
						goto lab_0xc3fdc_13;
					}
					goto lab_0xc3fd0_13;
				}
				// 0xc3fd0
				v18 = a1 + 224;
				a1 = v18;
				v19 = v6 + 112;
				v6 = v19;
				v23 = v7 - 1;
				v7 = v23;
				if (v23 == 0) {
					goto lab_0xc3fdc_13;
				}
				goto lab_0xc3fd0_13;
			}
		lab_0xc3fec:;
			int32_t result = function_c347c(v18, v19, v21, v20); // 0xc3fec
			g36 = v1;
			g35 = v2;
			return result;
		}
	}
	// 0xc3d80
	function_c3948();
	g34 = *(int32_t *)*(int32_t *)(g23 - 0x758c);
	memset();
	g34 = *(int32_t *)*(int32_t *)(v9 - 0x779c);
	memset();
	g34 = *(int32_t *)*(int32_t *)(v9 - 0x7680);
	memset();
	g34 = *(int32_t *)*(int32_t *)(v9 - 0x767c);
	memset();
	g34 = *(int32_t *)*(int32_t *)(v9 - 0x7684);
	memset();
	g34 = *(int32_t *)*(int32_t *)(v9 - 0x768c);
	memset();
	g34 = *(int32_t *)g36;
	memset();
	v8 = 0;
	v4 = 0;
	v11 = 0;
	// branch -> 0xc3e14
lab_0xc3e14:
	while (true) {
		// 0xc3e14
		a1 = 0;
		v7 = 112;
		v6 = 0;
		v13 = 0;
		v10 = v11;
		v12 = 0;
		// branch -> 0xc3e24
		goto lab_0xc3e24;
	}
}
