
// Address range: 0xac32c - 0xac698
int32_t InitQuests(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77f0); // 0xac334
	g36 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x706c); // 0xac338
	g33 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7604); // 0xac33c
	g35 = v3;
	int32_t v4;     // r0
	int32_t result; // r3
	int32_t v5;     // 0xac494
	int32_t v6;
	if (*(char *)v1 != 1) {
		int32_t v7 = 0; // r6
		int32_t v8 = 2; // ctr
		v4 = 0;
		// branch -> 0xac3b4
		while (true) {
			int32_t v9 = v3;  // 0xac3c8
			int32_t v10 = v2; // 0xac3cc
			if (*(int32_t *)(v2 + 8) % 2 == 0) {
				// 0xac3c0
				*(char *)(v3 + 2) = (char)v4;
				v9 = v3;
				v10 = v2;
				// branch -> 0xac3c4
			}
			int32_t v11 = v9 + 24; // 0xac3c8
			v3 = v11;
			int32_t v12 = v10 + 20; // 0xac3cc
			v2 = v12;
			if (*(int32_t *)(v10 + 28) % 2 == 0) {
				// 0xac3d8
				*(char *)(v9 + 26) = (char)v4;
				v11 = v3;
				v12 = v2;
				// branch -> 0xac3dc
			}
			int32_t v13 = v11 + 24; // 0xac3e0
			v3 = v13;
			int32_t v14 = v12 + 20; // 0xac3e4
			v2 = v14;
			int32_t v15 = v7 + 1; // 0xac3e8
			v7 = v15;
			if (*(int32_t *)(v12 + 28) % 2 == 0) {
				// 0xac3f4
				*(char *)(v11 + 26) = (char)v4;
				v15 = v7;
				v13 = v3;
				v14 = v2;
				// branch -> 0xac3f8
			}
			int32_t v16 = v13 + 24; // 0xac3fc
			v3 = v16;
			int32_t v17 = v14 + 20; // 0xac400
			v2 = v17;
			int32_t v18 = v15 + 1; // 0xac404
			v7 = v18;
			if (*(int32_t *)(v14 + 28) % 2 == 0) {
				// 0xac410
				*(char *)(v13 + 26) = (char)v4;
				v18 = v7;
				v16 = v3;
				v17 = v2;
				// branch -> 0xac414
			}
			int32_t v19 = v16 + 24; // 0xac418
			v3 = v19;
			int32_t v20 = v17 + 20; // 0xac41c
			v2 = v20;
			int32_t v21 = v18 + 1; // 0xac420
			v7 = v21;
			if (*(int32_t *)(v17 + 28) % 2 == 0) {
				// 0xac42c
				*(char *)(v16 + 26) = (char)v4;
				v21 = v7;
				v19 = v3;
				v20 = v2;
				// branch -> 0xac430
			}
			int32_t v22 = v19 + 24; // 0xac434
			v3 = v22;
			int32_t v23 = v20 + 20; // 0xac438
			v2 = v23;
			int32_t v24 = v21 + 1; // 0xac43c
			v7 = v24;
			if (*(int32_t *)(v20 + 28) % 2 == 0) {
				// 0xac448
				*(char *)(v19 + 26) = (char)v4;
				v24 = v7;
				v22 = v3;
				v23 = v2;
				// branch -> 0xac44c
			}
			int32_t v25 = v22 + 24; // 0xac450
			v3 = v25;
			int32_t v26 = v23 + 20; // 0xac454
			v2 = v26;
			int32_t v27 = v24 + 1; // 0xac458
			v7 = v27;
			if (*(int32_t *)(v23 + 28) % 2 == 0) {
				// 0xac464
				*(char *)(v22 + 26) = (char)v4;
				v27 = v7;
				v25 = v3;
				v26 = v2;
				// branch -> 0xac468
			}
			int32_t v28 = v25 + 24; // 0xac46c
			v3 = v28;
			int32_t v29 = v26 + 20; // 0xac470
			v2 = v29;
			int32_t v30 = v27 + 1; // 0xac474
			v7 = v30;
			if (*(int32_t *)(v26 + 28) % 2 == 0) {
				// 0xac480
				*(char *)(v25 + 26) = (char)v4;
				v30 = v7;
				v28 = v3;
				v29 = v2;
				// branch -> 0xac484
			}
			// 0xac484
			v7 = v30 + 1;
			int32_t v31 = v8 - 1; // 0xac490
			v8 = v31;
			if (v31 == 0) {
				// break -> 0xac494
				break;
			}
			v3 = v28 + 24;
			v2 = v29 + 20;
			// continue -> 0xac3b4
		}
		// 0xac494
		v5 = g23;
		g31 = 0;
		*(int32_t *)*(int32_t *)(v5 - 0x77c8) = 0;
		result = *(int32_t *)(g23 - 0x6f5c);
		g32 = g35;
		*(int32_t *)*(int32_t *)(v5 - 0x6f58) = 1;
		g30 = 0;
		*(int32_t *)result = g31;
		v6 = g33;
		// branch -> 0xac4bc
		while (true) {
			// 0xac4bc
			int32_t v32; // 0xac570
			if ((*(char *)g36 || 1) != 1) {
			lab_0xac4c8:
				// 0xac4c8
				if (*(int32_t *)(v6 + 8) % 2 == 0) {
					v32 = v6;
				lab_0xac564:;
					int32_t v33 = g31 + 1; // 0xac564
					g31 = v33;
					g32 += 24;
					int32_t v34 = v32 + 20; // 0xac570
					g33 = v34;
					if (v33 >= 16) {
						// break -> 0xac578
						break;
					}
					v6 = v34;
					// continue -> 0xac4bc
					continue;
				}
			}
		lab_0xac4d4:
			// 0xac4d4
			*(char *)(g32 + 1) = *(char *)(v6 + 3);
			if ((*(char *)g36 || 1) == 1) {
				// 0xac51c
				*(char *)(g32 + 2) = 1;
				v4 = 0;
				*(char *)g32 = *(char *)g33;
				*(char *)(g32 + 15) = (char)v4;
				*(int32_t *)(g32 + 20) = v4;
				// branch -> 0xac538
			} else {
				// 0xac4e8
				*(char *)g32 = *(char *)(g33 + 1);
				if (function_8a9e0(g30) == 0) {
					// 0xac500
					*(char *)(g32 + 2) = 1;
					*(char *)(g32 + 15) = 0;
					*(int32_t *)(g32 + 20) = 0;
					// branch -> 0xac514
				}
				// 0xac514
				g30++;
				// branch -> 0xac538
			}
			// 0xac538
			result = 0;
			*(char *)(g32 + 12) = *(char *)(g33 + 5);
			*(int32_t *)(g32 + 4) = result;
			*(int32_t *)(g32 + 8) = result;
			*(char *)(g32 + 13) = (char)g31;
			*(char *)(g32 + 3) = *(char *)(g33 + 2);
			*(char *)(g32 + 16) = (char)result;
			*(char *)(g32 + 14) = (char)*(int32_t *)(g33 + 12);
			v32 = g33;
			// branch -> 0xac564
			goto lab_0xac564;
		}
		// 0xac578
		if (*(char *)g36 == 1) {
			// 0xac584
			g34 = *(int32_t *)(*(int32_t *)(g23 - 0x75ec) + 60);
			SetRndSeed();
			g37 = 2;
			if (random(0) == 0) {
				// 0xac5b0
				*(char *)(g35 + 290) = 0;
				// branch -> 0xac5b8
			} else {
				// 0xac5a4
				*(char *)(g35 + 314) = 0;
				// branch -> 0xac5b8
			}
			// 0xac5b8
			g37 = 3;
			int32_t v35 = random(0);                  // 0xac5c0
			int32_t v36 = *(int32_t *)(g23 - 0x5898); // 0xac5c4
			int32_t v37 = g35 + 2;                    // 0xac5cc
			g31 = v37;
			g30 = 0;
			*(char *)(24 * *(int32_t *)(v36 + 4 * v35) + v37) = 0;
			g37 = 3;
			int32_t v38 = random(0); // 0xac5e8
			g37 = 3;
			int32_t v39 = 24 * *(int32_t *)(*(int32_t *)(g23 - 0x589c) + 4 * v38); // 0xac600
			*(char *)(g31 + v39) = (char)g30;
			int32_t v40 = random(0); // 0xac608
			g37 = 2;
			int32_t v41 = 24 * *(int32_t *)(*(int32_t *)(g23 - 0x58a0) + 4 * v40); // 0xac620
			*(char *)(g31 + v41) = (char)g30;
			int32_t v42 = random(0); // 0xac628
			result = v42;
			int32_t v43 = 24 * *(int32_t *)(*(int32_t *)(g23 - 0x58a4) + 4 * v42); // 0xac638
			*(char *)(g31 + v43) = (char)g30;
			// branch -> 0xac640
		}
		int32_t v44 = g35; // 0xac664
		if (*(char *)(g35 + 290) == 0) {
			// 0xac64c
			*(char *)(g35 + 304) = 2;
			v44 = g35;
			// branch -> 0xac654
		}
		int32_t v45 = v44; // 0xac66c
		if (*(char *)(v44 + 2) == 0) {
			// 0xac660
			*(char *)(v44 + 16) = 2;
			v45 = g35;
			// branch -> 0xac668
		}
		// 0xac668
		*(char *)(v45 + 183) = 1;
		if (*(char *)g36 != 1) {
			// 0xac67c
			*(char *)(g35 + 375) = 2;
			// branch -> 0xac684
		}
		// 0xac684
		return result;
	}
	// 0xac354
	v4 = 0;
	*(char *)(v3 + 2) = 0;
	*(char *)(g35 + 26) = (char)v4;
	*(char *)(g35 + 50) = (char)v4;
	*(char *)(g35 + 74) = (char)v4;
	*(char *)(g35 + 98) = (char)v4;
	*(char *)(g35 + 122) = (char)v4;
	*(char *)(g35 + 146) = (char)v4;
	*(char *)(g35 + 170) = (char)v4;
	*(char *)(g35 + 194) = (char)v4;
	*(char *)(g35 + 218) = (char)v4;
	*(char *)(g35 + 242) = (char)v4;
	*(char *)(g35 + 266) = (char)v4;
	*(char *)(g35 + 290) = (char)v4;
	*(char *)(g35 + 314) = (char)v4;
	*(char *)(g35 + 338) = (char)v4;
	*(char *)(g35 + 362) = (char)v4;
	// branch -> 0xac494
	// 0xac494
	v5 = g23;
	g31 = 0;
	*(int32_t *)*(int32_t *)(v5 - 0x77c8) = 0;
	result = *(int32_t *)(g23 - 0x6f5c);
	g32 = g35;
	*(int32_t *)*(int32_t *)(v5 - 0x6f58) = 1;
	g30 = 0;
	*(int32_t *)result = g31;
	v6 = g33;
	// branch -> 0xac4bc
	while (true) {
		// 0xac4bc
		if ((*(char *)g36 || 1) == 1) {
			goto lab_0xac4d4;
		}
		goto lab_0xac4c8;
	}
}

// Address range: 0xac698 - 0xac9c4
int32_t function_ac698(int32_t a1)
{
	int32_t v1 = g10; // 0xac69c
	g28 = *(int32_t *)(g23 - 0x7200);
	g29 = *(int32_t *)(g23 - 0x77a8);
	g30 = *(int32_t *)(g23 - 0x77e0);
	g31 = *(int32_t *)(g23 - 0x77ac);
	g32 = *(int32_t *)(g23 - 0x77d8);
	g33 = *(int32_t *)(g23 - 0x77e4);
	g35 = *(int32_t *)(g23 - 0x6f5c);
	g27 = *(int32_t *)(g23 - 0x7604);
	g36 = *(int32_t *)(g23 - 0x77f0);
	int32_t v2 = QuestStatus(15); // 0xac6d0
	int32_t result = v2;          // r3
	int32_t v3;                   // 0xac744
	int32_t v4;                   // 0xac800
	int32_t v5;                   // 0xac87c
	int32_t v6;                   // 0xac898
	int32_t v7;                   // 0xac984
	int32_t v8;                   // 0xac9a0
	int32_t v9;                   // 0xac9a03
	int32_t v10;                  // 0xac9a4
	int32_t v11;                  // 0xac75c
	int32_t v12;                  // 0xac76c
	int32_t v13;                  // 0xac7b0
	int32_t v14;                  // 0xac7bc
	int32_t v15;                  // 0xac824
	int32_t *v16;                 // 0xac908
	unsigned char v17;            // 0xac740
	int32_t *v18;                 // 0xac79c
	char *v19;                    // 0xac88c
	uint32_t v20;                 // 0xac8f8
	int32_t v21;                  // 0xac908
	unsigned char v22;            // 0xac930
	char v23;                     // 0xac770
	char v24;                     // 0xac788
	unsigned char v25;            // 0xac88c
	int32_t v26;                  // 0xac898
	int32_t v27;                  // 0xac7e0
	int32_t *v28;
	if (v2 == 0) {
		// 0xac734
		if (*(char *)g36 != 1) {
			// 0xac9b0
			g10 = v1;
			return result;
		}
		// 0xac740
		v17 = *(char *)g33;
		result = v17;
		v3 = g27;
		if (v17 == *(char *)(v3 + 360)) {
			// 0xac750
			if (*(char *)g32 == 0) {
				// 0xac75c
				v11 = v3 + 375;
				g25 = v11;
				if (*(char *)v11 >= 2) {
					// 0xac76c
					v12 = v3 + 362;
					g36 = v12;
					v23 = *(char *)v12;
					if (v23 != 2) {
						// 0xac77c
						if (v23 != 3) {
							// 0xac800
							v4 = g27;
							if (*(char *)(v4 + 362) == 3) {
								// 0xac80c
								if (*(char *)g32 != 0) {
									// 0xac818
									if (*(char *)g30 == 5) {
										// 0xac824
										v15 = v4 + 376;
										g25 = v15;
										if (*(char *)v15 == 4) {
											// 0xac834
											g13 = *(int32_t *)g31;
											result = AddMissile(35, 32, 35, 32, 0, 65, 0, 0, 0);
											*(char *)g25 = 3;
											// branch -> 0xac86c
										}
									}
								}
							}
							// 0xac86c
							if (*(char *)g32 == 0) {
								// 0xac918
								if (*(int32_t *)(g29 + 0x55ec * *(int32_t *)g31) == 0) {
									// 0xac92c
									g25 = 0;
									v9 = 0;
									v7 = g27;
									// branch -> 0xac930
									while (true) {
										// 0xac930
										v22 = *(char *)g33;
										result = v22;
										if (v22 == *(char *)v7) {
											goto lab_0xac940_5;
										}
										v10 = v7;
										v8 = v9;
										goto lab_0xac9a0_5;
									}
								}
							} else {
								// 0xac878
								v5 = g27;
								if (*(char *)g30 == *(char *)(v5 + 324)) {
									// 0xac888
									v19 = (char *)(v5 + 314);
									v25 = *v19;
									if (v25 != 1) {
										// 0xac898
										v6 = g23;
										v26 = *(int32_t *)(v6 - 0x7794);
										if (*(char *)v26 == *(char *)(v5 + 315)) {
											// 0xac8ac
											if (*(int32_t *)*(int32_t *)(v6 - 0x762c) == 4) {
												// 0xac8bc
												if (v25 != 3) {
													// 0xac8c4
													*v19 = 3;
													g34 = 12;
													g38 = *(int32_t *)(g29 + 0x55ec * *(int32_t *)g31 + 60);
													PlaySfxLoc(12);
													LoadPalette(*(int32_t *)(g23 - 0x58a8));
													*(int32_t *)g35 = 32;
													// branch -> 0xac8f8
												}
											}
										}
									}
								}
								// 0xac8f8
								v20 = *(int32_t *)g35;
								result = v20;
								if (v20 >= 1) {
									// 0xac904
									function_9f040(v20);
									v16 = (int32_t *)g35;
									v21 = *v16;
									result = v21;
									*v16 = v21 - 1;
									// branch -> 0xac9b0
								}
							}
							// 0xac9b0
							g10 = v1;
							return result;
						}
					}
					// 0xac784
					v24 = *(char *)(v3 + 376);
					if (v24 != 0) {
						// 0xac794
						if (v24 != 2) {
							// 0xac800
							v4 = g27;
							if (*(char *)(v4 + 362) == 3) {
								// 0xac80c
								if (*(char *)g32 != 0) {
									// 0xac818
									if (*(char *)g30 == 5) {
										// 0xac824
										v15 = v4 + 376;
										g25 = v15;
										if (*(char *)v15 == 4) {
											// 0xac834
											g13 = *(int32_t *)g31;
											result = AddMissile(35, 32, 35, 32, 0, 65, 0, 0, 0);
											*(char *)g25 = 3;
											// branch -> 0xac86c
										}
									}
								}
							}
							// 0xac86c
							if (*(char *)g32 == 0) {
								// 0xac918
								if (*(int32_t *)(g29 + 0x55ec * *(int32_t *)g31) == 0) {
									// 0xac92c
									g25 = 0;
									v9 = 0;
									v7 = g27;
									// branch -> 0xac930
									while (true) {
										// 0xac930
										v22 = *(char *)g33;
										result = v22;
										if (v22 == *(char *)v7) {
											goto lab_0xac940_5;
										}
										v10 = v7;
										v8 = v9;
										goto lab_0xac9a0_5;
									}
								}
							} else {
								// 0xac878
								v5 = g27;
								if (*(char *)g30 == *(char *)(v5 + 324)) {
									// 0xac888
									v19 = (char *)(v5 + 314);
									v25 = *v19;
									if (v25 != 1) {
										// 0xac898
										v6 = g23;
										v26 = *(int32_t *)(v6 - 0x7794);
										if (*(char *)v26 == *(char *)(v5 + 315)) {
											// 0xac8ac
											if (*(int32_t *)*(int32_t *)(v6 - 0x762c) == 4) {
												// 0xac8bc
												if (v25 != 3) {
													// 0xac8c4
													*v19 = 3;
													g34 = 12;
													g38 = *(int32_t *)(g29 + 0x55ec * *(int32_t *)g31 + 60);
													PlaySfxLoc(12);
													LoadPalette(*(int32_t *)(g23 - 0x58a8));
													*(int32_t *)g35 = 32;
													// branch -> 0xac8f8
												}
											}
										}
									}
								}
								// 0xac8f8
								v20 = *(int32_t *)g35;
								result = v20;
								if (v20 >= 1) {
									// 0xac904
									function_9f040(v20);
									v16 = (int32_t *)g35;
									v21 = *v16;
									result = v21;
									*v16 = v21 - 1;
									// branch -> 0xac9b0
								}
							}
							// 0xac9b0
							g10 = v1;
							return result;
						}
					}
					// 0xac79c
					v18 = (int32_t *)(v3 + 364);
					v13 = 2 * *v18 + 16;
					*v18 = v13;
					v14 = 2 * *(int32_t *)(v3 + 368) + 16;
					*(int32_t *)(g27 + 368) = v14;
					g13 = *(int32_t *)g31;
					v27 = AddMissile(v13, v14, 0, 65, 0, 65, 0, (int32_t)&v28, (int32_t)&v28);
					result = v27;
					*(char *)g26 = 1;
					if (*(char *)g36 == 2) {
						// 0xac7f8
						*(char *)g25 = 3;
						// branch -> 0xac800
					}
				}
			}
		}
		// 0xac800
		v4 = g27;
		if (*(char *)(v4 + 362) == 3) {
			// 0xac80c
			if (*(char *)g32 != 0) {
				// 0xac818
				if (*(char *)g30 == 5) {
					// 0xac824
					v15 = v4 + 376;
					g25 = v15;
					if (*(char *)v15 == 4) {
						// 0xac834
						g13 = *(int32_t *)g31;
						result = AddMissile(35, 32, 35, 32, 0, 65, 0, 0, 0);
						*(char *)g25 = 3;
						// branch -> 0xac86c
					}
				}
			}
		}
		// 0xac86c
		if (*(char *)g32 == 0) {
			// 0xac918
			if (*(int32_t *)(g29 + 0x55ec * *(int32_t *)g31) == 0) {
				// 0xac92c
				g25 = 0;
				v9 = 0;
				v7 = g27;
				// branch -> 0xac930
				while (true) {
					// 0xac930
					v22 = *(char *)g33;
					result = v22;
					if (v22 == *(char *)v7) {
						goto lab_0xac940_5;
					}
					v10 = v7;
					v8 = v9;
					goto lab_0xac9a0_5;
				}
			}
		} else {
			// 0xac878
			v5 = g27;
			if (*(char *)g30 == *(char *)(v5 + 324)) {
				// 0xac888
				v19 = (char *)(v5 + 314);
				v25 = *v19;
				if (v25 != 1) {
					// 0xac898
					v6 = g23;
					v26 = *(int32_t *)(v6 - 0x7794);
					if (*(char *)v26 == *(char *)(v5 + 315)) {
						// 0xac8ac
						if (*(int32_t *)*(int32_t *)(v6 - 0x762c) == 4) {
							// 0xac8bc
							if (v25 != 3) {
								// 0xac8c4
								*v19 = 3;
								g34 = 12;
								g38 = *(int32_t *)(g29 + 0x55ec * *(int32_t *)g31 + 60);
								PlaySfxLoc(12);
								LoadPalette(*(int32_t *)(g23 - 0x58a8));
								*(int32_t *)g35 = 32;
								// branch -> 0xac8f8
							}
						}
					}
				}
			}
			// 0xac8f8
			v20 = *(int32_t *)g35;
			result = v20;
			if (v20 >= 1) {
				// 0xac904
				function_9f040(v20);
				v16 = (int32_t *)g35;
				v21 = *v16;
				result = v21;
				*v16 = v21 - 1;
				// branch -> 0xac9b0
			}
		}
		// 0xac9b0
		g10 = v1;
		return result;
	}
	// 0xac6dc
	if (*(char *)g36 != 1) {
		int32_t v29 = g27 + 375; // 0xac6e8
		if (*(char *)v29 == 2) {
			int32_t v30 = *(int32_t *)(g23 - 0x754c); // 0xac6f8
			int32_t v31 = *(int32_t *)(g23 - 0x7550); // 0xac700
			AddObject(83, 2 * *(int32_t *)v30 + 20, 2 * *(int32_t *)v31 + 22);
			*(char *)v29 = 3;
			result = function_8b520(1, 15);
			// branch -> 0xac734
		}
	}
	// 0xac734
	if (*(char *)g36 != 1) {
		// 0xac9b0
		g10 = v1;
		return result;
	}
	// 0xac740
	v17 = *(char *)g33;
	result = v17;
	v3 = g27;
	if (v17 == *(char *)(v3 + 360)) {
		// 0xac750
		if (*(char *)g32 == 0) {
			// 0xac75c
			v11 = v3 + 375;
			g25 = v11;
			if (*(char *)v11 >= 2) {
				// 0xac76c
				v12 = v3 + 362;
				g36 = v12;
				v23 = *(char *)v12;
				if (v23 != 2) {
					// 0xac77c
					if (v23 != 3) {
						// 0xac800
						v4 = g27;
						if (*(char *)(v4 + 362) == 3) {
							// 0xac80c
							if (*(char *)g32 != 0) {
								// 0xac818
								if (*(char *)g30 == 5) {
									// 0xac824
									v15 = v4 + 376;
									g25 = v15;
									if (*(char *)v15 == 4) {
										// 0xac834
										g13 = *(int32_t *)g31;
										result = AddMissile(35, 32, 35, 32, 0, 65, 0, 0, 0);
										*(char *)g25 = 3;
										// branch -> 0xac86c
									}
								}
							}
						}
						// 0xac86c
						if (*(char *)g32 == 0) {
							// 0xac918
							if (*(int32_t *)(g29 + 0x55ec * *(int32_t *)g31) == 0) {
								// 0xac92c
								g25 = 0;
								v9 = 0;
								v7 = g27;
								// branch -> 0xac930
								while (true) {
									// 0xac930
									v22 = *(char *)g33;
									result = v22;
									v10 = v7;
									v8 = v9;
									if (v22 == *(char *)v7) {
									lab_0xac940_5:
										// 0xac940
										if (*(char *)(v7 + 12) != 0) {
											// 0xac94c
											if (*(char *)(v7 + 2) != 0) {
												int32_t v32 = *(int32_t *)g31; // 0xac958
												result = v32;
												int32_t v33 = g29 + 0x55ec * v32; // 0xac964
												if (*(int32_t *)(v33 + 56) == *(int32_t *)(v7 + 4)) {
													// 0xac974
													if (*(int32_t *)(v33 + 60) == *(int32_t *)(v7 + 8)) {
														char v34 = *(char *)(v7 + 3); // 0xac984
														int32_t v35 = v7;             // 0xac994
														if (v34 != -1) {
															// 0xac990
															*(char *)g28 = v34;
															v35 = g27;
															// branch -> 0xac994
														}
														int32_t v36 = (int32_t) * (char *)(v35 + 12); // 0xac994
														result = StartNewLvl(1029, v36, v36);
														v10 = g27;
														v8 = g25;
														// branch -> 0xac9a0
													} else {
														v10 = v7;
														v8 = v9;
													}
												} else {
													v10 = v7;
													v8 = v9;
												}
											} else {
												v10 = v7;
												v8 = v9;
											}
										} else {
											v10 = v7;
											v8 = v9;
										}
									}
								lab_0xac9a0_5:;
									int32_t v37 = v8 + 1; // 0xac9a0
									g25 = v37;
									int32_t v38 = v10 + 24; // 0xac9a4
									g27 = v38;
									if (v37 >= 16) {
										// break -> 0xac9b0
										break;
									}
									v9 = v37;
									v7 = v38;
									// continue -> 0xac930
								}
								// 0xac9b0
								g10 = v1;
								return result;
							}
						} else {
							// 0xac878
							v5 = g27;
							if (*(char *)g30 == *(char *)(v5 + 324)) {
								// 0xac888
								v19 = (char *)(v5 + 314);
								v25 = *v19;
								if (v25 != 1) {
									// 0xac898
									v6 = g23;
									v26 = *(int32_t *)(v6 - 0x7794);
									if (*(char *)v26 == *(char *)(v5 + 315)) {
										// 0xac8ac
										if (*(int32_t *)*(int32_t *)(v6 - 0x762c) == 4) {
											// 0xac8bc
											if (v25 != 3) {
												// 0xac8c4
												*v19 = 3;
												g34 = 12;
												g38 = *(int32_t *)(g29 + 0x55ec * *(int32_t *)g31 + 60);
												PlaySfxLoc(12);
												LoadPalette(*(int32_t *)(g23 - 0x58a8));
												*(int32_t *)g35 = 32;
												// branch -> 0xac8f8
											}
										}
									}
								}
							}
							// 0xac8f8
							v20 = *(int32_t *)g35;
							result = v20;
							if (v20 >= 1) {
								// 0xac904
								function_9f040(v20);
								v16 = (int32_t *)g35;
								v21 = *v16;
								result = v21;
								*v16 = v21 - 1;
								// branch -> 0xac9b0
							}
						}
						// 0xac9b0
						g10 = v1;
						return result;
					}
				}
				// 0xac784
				v24 = *(char *)(v3 + 376);
				if (v24 != 0) {
					// 0xac794
					if (v24 != 2) {
						// 0xac800
						v4 = g27;
						if (*(char *)(v4 + 362) == 3) {
							// 0xac80c
							if (*(char *)g32 != 0) {
								// 0xac818
								if (*(char *)g30 == 5) {
									// 0xac824
									v15 = v4 + 376;
									g25 = v15;
									if (*(char *)v15 == 4) {
										// 0xac834
										g13 = *(int32_t *)g31;
										result = AddMissile(35, 32, 35, 32, 0, 65, 0, 0, 0);
										*(char *)g25 = 3;
										// branch -> 0xac86c
									}
								}
							}
						}
						// 0xac86c
						if (*(char *)g32 == 0) {
							// 0xac918
							if (*(int32_t *)(g29 + 0x55ec * *(int32_t *)g31) == 0) {
								// 0xac92c
								g25 = 0;
								v9 = 0;
								v7 = g27;
								// branch -> 0xac930
								while (true) {
									// 0xac930
									v22 = *(char *)g33;
									result = v22;
									if (v22 == *(char *)v7) {
										goto lab_0xac940_5;
									}
									v10 = v7;
									v8 = v9;
									goto lab_0xac9a0_5;
								}
							}
						} else {
							// 0xac878
							v5 = g27;
							if (*(char *)g30 == *(char *)(v5 + 324)) {
								// 0xac888
								v19 = (char *)(v5 + 314);
								v25 = *v19;
								if (v25 != 1) {
									// 0xac898
									v6 = g23;
									v26 = *(int32_t *)(v6 - 0x7794);
									if (*(char *)v26 == *(char *)(v5 + 315)) {
										// 0xac8ac
										if (*(int32_t *)*(int32_t *)(v6 - 0x762c) == 4) {
											// 0xac8bc
											if (v25 != 3) {
												// 0xac8c4
												*v19 = 3;
												g34 = 12;
												g38 = *(int32_t *)(g29 + 0x55ec * *(int32_t *)g31 + 60);
												PlaySfxLoc(12);
												LoadPalette(*(int32_t *)(g23 - 0x58a8));
												*(int32_t *)g35 = 32;
												// branch -> 0xac8f8
											}
										}
									}
								}
							}
							// 0xac8f8
							v20 = *(int32_t *)g35;
							result = v20;
							if (v20 >= 1) {
								// 0xac904
								function_9f040(v20);
								v16 = (int32_t *)g35;
								v21 = *v16;
								result = v21;
								*v16 = v21 - 1;
								// branch -> 0xac9b0
							}
						}
						// 0xac9b0
						g10 = v1;
						return result;
					}
				}
				// 0xac79c
				v18 = (int32_t *)(v3 + 364);
				v13 = 2 * *v18 + 16;
				*v18 = v13;
				v14 = 2 * *(int32_t *)(v3 + 368) + 16;
				*(int32_t *)(g27 + 368) = v14;
				g13 = *(int32_t *)g31;
				v27 = AddMissile(v13, v14, 0, 65, 0, 65, 0, (int32_t)&v28, (int32_t)&v28);
				result = v27;
				*(char *)g26 = 1;
				if (*(char *)g36 == 2) {
					// 0xac7f8
					*(char *)g25 = 3;
					// branch -> 0xac800
				}
			}
		}
	}
	// 0xac800
	v4 = g27;
	if (*(char *)(v4 + 362) == 3) {
		// 0xac80c
		if (*(char *)g32 != 0) {
			// 0xac818
			if (*(char *)g30 == 5) {
				// 0xac824
				v15 = v4 + 376;
				g25 = v15;
				if (*(char *)v15 == 4) {
					// 0xac834
					g13 = *(int32_t *)g31;
					result = AddMissile(35, 32, 35, 32, 0, 65, 0, 0, 0);
					*(char *)g25 = 3;
					// branch -> 0xac86c
				}
			}
		}
	}
	// 0xac86c
	if (*(char *)g32 == 0) {
		// 0xac918
		if (*(int32_t *)(g29 + 0x55ec * *(int32_t *)g31) == 0) {
			// 0xac92c
			g25 = 0;
			v9 = 0;
			v7 = g27;
			// branch -> 0xac930
			while (true) {
				// 0xac930
				v22 = *(char *)g33;
				result = v22;
				if (v22 == *(char *)v7) {
					goto lab_0xac940_5;
				}
				v10 = v7;
				v8 = v9;
				goto lab_0xac9a0_5;
			}
		}
	} else {
		// 0xac878
		v5 = g27;
		if (*(char *)g30 == *(char *)(v5 + 324)) {
			// 0xac888
			v19 = (char *)(v5 + 314);
			v25 = *v19;
			if (v25 != 1) {
				// 0xac898
				v6 = g23;
				v26 = *(int32_t *)(v6 - 0x7794);
				if (*(char *)v26 == *(char *)(v5 + 315)) {
					// 0xac8ac
					if (*(int32_t *)*(int32_t *)(v6 - 0x762c) == 4) {
						// 0xac8bc
						if (v25 != 3) {
							// 0xac8c4
							*v19 = 3;
							g34 = 12;
							g38 = *(int32_t *)(g29 + 0x55ec * *(int32_t *)g31 + 60);
							PlaySfxLoc(12);
							LoadPalette(*(int32_t *)(g23 - 0x58a8));
							*(int32_t *)g35 = 32;
							// branch -> 0xac8f8
						}
					}
				}
			}
		}
		// 0xac8f8
		v20 = *(int32_t *)g35;
		result = v20;
		if (v20 >= 1) {
			// 0xac904
			function_9f040(v20);
			v16 = (int32_t *)g35;
			v21 = *v16;
			result = v21;
			*v16 = v21 - 1;
			// branch -> 0xac9b0
		}
	}
	// 0xac9b0
	g10 = v1;
	return result;
}

// Address range: 0xac9c4 - 0xacae8
int32_t function_ac9c4(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x765c); // 0xac9d8
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7658); // 0xac9dc
	g36 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7604); // 0xac9e0
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		int32_t v4 = v3; // 0xacac4
		int32_t v5 = 0;  // 0xacac0
		// branch -> 0xaca18
		while (true) {
			// 0xaca18
			int32_t v6; // 0xacac0
			if (v5 != 15) {
				// 0xaca20
				if (*(char *)*(int32_t *)(g23 - 0x77e4) == *(char *)v4) {
					// 0xaca2c
					if (*(char *)(v4 + 12) != 0) {
						int32_t v7 = (int32_t) * (char *)(v4 + 13); // 0xaca38
						int32_t v8 = *(int32_t *)(v4 + 4);          // 0xaca44
						g33 = v8;
						int32_t v9 = *(int32_t *)(v4 + 8);                         // 0xaca4c
						int32_t v10 = (int32_t) * (char *)(24 * v7 + 12 + v3) - 1; // 0xaca60
						int32_t v11 = 7;                                           // 0xacabc
						int32_t v12 = *(int32_t *)(g23 - 0x58b0);                  // 0xacab8
						int32_t v13 = *(int32_t *)(g23 - 0x58ac);                  // 0xacab4
						// branch -> 0xaca64
						while (true) {
							// 0xaca64
							if (*(int32_t *)v2 == (int32_t) * (char *)v13 + v8) {
								// 0xaca78
								if (*(int32_t *)v1 == (int32_t) * (char *)v12 + v9) {
									// 0xaca8c
									g37 = *(int32_t *)(g23 - 0x58b4);
									g38 = *(int32_t *)(*(int32_t *)(g23 - 0x6f60) + 4 * v10);
									sprintf();
									*(int32_t *)g36 = g33;
									*(int32_t *)g35 = g32;
									// branch -> 0xacad4
									// 0xacad4
									return 1;
								}
							}
							int32_t v14 = v13 + 1; // 0xacab4
							int32_t v15 = v12 + 1; // 0xacab8
							int32_t v16 = v11 - 1; // 0xacabc
							if (v16 == 0) {
								// break -> 0xacac0
								break;
							}
							v11 = v16;
							v12 = v15;
							v13 = v14;
							// continue -> 0xaca64
						}
						// 0xacac0
						v6 = v5 + 1;
						if (v6 >= 16) {
							// break -> 0xacad0
							break;
						}
						v4 += 24;
						v5 = v6;
						// continue -> 0xaca18
						continue;
					}
				}
			}
			// 0xacac0
			v6 = v5 + 1;
			if (v6 >= 16) {
				// break -> 0xacad0
				break;
			}
			v4 += 24;
			v5 = v6;
			// continue -> 0xaca18
		}
		// 0xacad0
		// branch -> 0xacad4
	}
	// 0xacad4
	return 0;
}

// Address range: 0xacae8 - 0xacb74
int32_t QuestStatus(int32_t a1)
{
	// 0xacae8
	if (*(char *)*(int32_t *)(g23 - 0x77d8) != 0) {
		// 0xacafc
		return 0;
	}
	int32_t v1 = *(int32_t *)(g23 - 0x7604) + 24 * a1; // 0xacb10
	if (*(char *)*(int32_t *)(g23 - 0x77e4) != *(char *)v1 || *(char *)(v1 + 2) == 0) {
		// 0xacb1c
		return 0;
	}
	// 0xacb3c
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// 0xacb6c
		return 1;
	}
	// 0xacb4c
	if (*(int32_t *)(*(int32_t *)(g23 - 0x706c) + 20 * a1 + 8) % 2 == 0) {
		// 0xacb64
		return 0;
	}
	// 0xacb6c
	return 1;
}

// Address range: 0xacb74 - 0xad130
int32_t function_acb74(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10;                                   // 0xacb78
	int32_t v2 = *(int32_t *)(g23 - 0x70f8);            // r6
	int32_t v3 = *(int32_t *)(g23 - 0x708c);            // 0xacb88
	int32_t v4 = *(int32_t *)(g23 - 0x7754) + 232 * a1; // 0xacb8c
	g32 = *(int32_t *)(g23 - 0x71dc);
	int32_t v5 = *(int32_t *)(g23 - 0x70f4); // r0
	g33 = *(int32_t *)(g23 - 0x77a8);
	g35 = *(int32_t *)(g23 - 0x77ac);
	unsigned char v6 = *(char *)*(int32_t *)(v4 + 224); // 0xacbb0
	int32_t result = *(int32_t *)(g23 - 0x71d8);        // r3
	int32_t v7 = *(int32_t *)(g23 - 0x7604);            // 0xacbbc
	g36 = v7;
	if (v6 == 50) {
		// 0xacbc8
		*(char *)(v7 + 290) = 3;
		*(int32_t *)result = 30;
		unsigned char v8 = *(char *)(g33 + 0x55ec * *(int32_t *)g35 + 348); // 0xacbe4
		result = v8;
		if (v8 == 0) {
			// 0xacbf0
			*(int32_t *)g32 = 802;
			// branch -> 0xacc24
			// 0xacc24
			if (a2 != 0) {
				// 0xacc2c
				result = function_8b520(1, 12);
				// branch -> 0xad11c
			}
			// 0xad11c
			g10 = v1;
			return result;
		}
		// 0xacbfc
		if (v8 == 1) {
			// 0xacc08
			*(int32_t *)g32 = 693;
			// branch -> 0xacc24
		} else {
			// 0xacc14
			if (v8 == 2) {
				// 0xacc1c
				*(int32_t *)g32 = 590;
				// branch -> 0xacc24
			}
		}
		// 0xacc24
		if (a2 != 0) {
			// 0xacc2c
			result = function_8b520(1, 12);
			// branch -> 0xad11c
		}
		// 0xad11c
		g10 = v1;
		return result;
	}
	// 0xacc3c
	if (v6 == 51) {
		// 0xacc44
		*(char *)(v7 + 146) = 3;
		*(int32_t *)result = 30;
		unsigned char v9 = *(char *)(g33 + 0x55ec * *(int32_t *)g35 + 348); // 0xacc60
		result = v9;
		if (v9 != 0) {
			// 0xacc78
			if (v9 == 1) {
				// 0xacc84
				*(int32_t *)g32 = 691;
				// branch -> 0xacca0
			} else {
				// 0xacc90
				if (v9 == 2) {
					// 0xacc98
					*(int32_t *)g32 = 588;
					// branch -> 0xacca0
				}
			}
			// 0xacca0
			if (a2 != 0) {
				// 0xacca8
				result = function_8b520(1, 6);
				// branch -> 0xad11c
			}
			// 0xad11c
			g10 = v1;
			return result;
		}
		// 0xacc6c
		*(int32_t *)g32 = 800;
		// branch -> 0xacca0
		// 0xacca0
		if (a2 != 0) {
			// 0xacca8
			result = function_8b520(1, 6);
			// branch -> 0xad11c
		}
		// 0xad11c
		g10 = v1;
		return result;
	}
	int32_t v10 = *(int32_t *)(v4 + 220); // 0xaccb8
	if (v10 == *(int32_t *)(v3 + 4)) {
		// 0xaccc8
		*(char *)(v7 + 50) = 3;
		*(int32_t *)result = 30;
		unsigned char v11 = *(char *)(g33 + 0x55ec * *(int32_t *)g35 + 348); // 0xacce4
		result = v11;
		if (v11 == 0) {
			// 0xaccf0
			*(int32_t *)g32 = 780;
			// branch -> 0xad11c
			// 0xad11c
			g10 = v1;
			return result;
		}
		// 0xaccfc
		if (v11 == 1) {
			// 0xacd08
			*(int32_t *)g32 = 671;
			// branch -> 0xad11c
		} else {
			// 0xacd14
			if (v11 == 2) {
				// 0xacd1c
				*(int32_t *)g32 = 568;
				// branch -> 0xad11c
			}
		}
		// 0xad11c
		g10 = v1;
		return result;
	}
	// 0xacd28
	if (v10 == *(int32_t *)(v3 + 68)) {
		// 0xacd34
		*(char *)(v7 + 74) = 3;
		*(int32_t *)result = 30;
		unsigned char v12 = *(char *)(g33 + 0x55ec * *(int32_t *)g35 + 348); // 0xacd50
		result = v12;
		if (v12 == 0) {
			// 0xacd5c
			*(int32_t *)g32 = 781;
			// branch -> 0xad11c
			// 0xad11c
			g10 = v1;
			return result;
		}
		// 0xacd68
		if (v12 == 1) {
			// 0xacd74
			*(int32_t *)g32 = 672;
			// branch -> 0xad11c
		} else {
			// 0xacd80
			if (v12 == 2) {
				// 0xacd88
				*(int32_t *)g32 = 569;
				// branch -> 0xad11c
			}
		}
		// 0xad11c
		g10 = v1;
		return result;
	}
	// 0xacd94
	unsigned char v13; // 0xad0dc
	if (v10 == *(int32_t *)(v3 + 132)) {
		char *v14 = (char *)*(int32_t *)(g23 - 0x77f0); // 0xacda0
		if (*v14 == 1) {
			// 0xacffc
			if (*v14 != 1) {
				// 0xad0b4
				if (v10 == *(int32_t *)(v3 + 260)) {
					// 0xad0c0
					*(char *)(v7 + 266) = 3;
					*(int32_t *)result = 30;
					v13 = *(char *)(g33 + 0x55ec * *(int32_t *)g35 + 348);
					result = v13;
					if (v13 == 0) {
						// 0xad0e8
						*(int32_t *)g32 = 814;
						// branch -> 0xad11c
						// 0xad11c
						g10 = v1;
						return result;
					}
					// 0xad0f4
					if (v13 == 1) {
						// 0xad100
						*(int32_t *)g32 = 705;
						// branch -> 0xad11c
					} else {
						// 0xad10c
						if (v13 == 2) {
							// 0xad114
							*(int32_t *)g32 = 602;
							// branch -> 0xad11c
						}
					}
					// 0xad11c
					g10 = v1;
					return result;
				}
				// 0xad11c
				g10 = v1;
				return result;
			}
			// 0xad008
			*(char *)(v7 + 362) = 3;
			*(int32_t *)result = 30;
			function_c71c8();
			*(char *)(g36 + 375) = 7;
			*(char *)(g36 + 376) = 4;
			*(char *)(g36 + 122) = (char)2;
			int32_t v15 = 0; // 0xad044
			g13 = *(int32_t *)g35;
			AddMissile(35, 32, 35, 32, 0, 65, 0, v15, v15);
			unsigned char v16 = *(char *)(g33 + 0x55ec * *(int32_t *)g35 + 348); // 0xad070
			result = v16;
			if (v16 == 0) {
				// 0xad07c
				*(int32_t *)g32 = 803;
				// branch -> 0xad11c
				// 0xad11c
				g10 = v1;
				return result;
			}
			// 0xad088
			if (v16 == 1) {
				// 0xad094
				*(int32_t *)g32 = 694;
				// branch -> 0xad11c
			} else {
				// 0xad0a0
				if (v16 == 2) {
					// 0xad0a8
					*(int32_t *)g32 = 591;
					// branch -> 0xad11c
				}
			}
			// 0xad11c
			g10 = v1;
			return result;
		}
		int32_t v17 = v7 + 362; // 0xacdac
		*(char *)v17 = 3;
		*(char *)(g36 + 375) = 7;
		int32_t v18 = 0; // r27
		*(int32_t *)result = 30;
		int32_t v19 = 0; // r11
		*(char *)(g36 + 122) = (char)2;
		int32_t v20 = v19; // 0xacdf0
		                   // branch -> 0xacdd8
	lab_0xacdd8:
		while (true) {
			int32_t v21 = 16;                                           // ctr
			int32_t v22 = (int32_t) * (char *)v17;                      // 0xacdec
			int32_t v23 = *(int32_t *)*(int32_t *)(g23 - 0x757c) + v20; // 0xacdf0
			int32_t v24 = v5 + 16 * *(int32_t *)v2;                     // r9
			g36 = 0;
			int32_t v25 = 1026; // r7
			int32_t v26 = 0;    // 0xace14
			// branch -> 0xace00
			while (true) {
				int32_t v27 = v22; // 0xace40
				int32_t v28 = v26; // 0xace34
				if (*(int16_t *)v23 == 370 == v22 == 3) {
					// 0xace14
					*(int32_t *)v24 = v26;
					*(int32_t *)(v24 + 4) = v18;
					*(int32_t *)(v24 + 8) = v25;
					v24 += 16;
					int32_t *v29 = (int32_t *)v2; // 0xace24
					*v29 = *v29 + 1;
					v27 = v22;
					v28 = g36;
					// branch -> 0xace30
				}
				int32_t v30 = v23 + 224; // 0xace30
				v23 = v30;
				int32_t v31 = v28 + 1; // 0xace34
				int32_t v32 = v31;     // r31
				int32_t v33 = v27;     // 0xace74
				int32_t v34 = v31;     // 0xace68
				int32_t v35 = v30;     // 0xace64
				if (*(int16_t *)v30 == 370 == v27 == 3) {
					// 0xace48
					*(int32_t *)v24 = v31;
					*(int32_t *)(v24 + 4) = v18;
					*(int32_t *)(v24 + 8) = v25;
					v24 += 16;
					int32_t *v36 = (int32_t *)v2; // 0xace58
					*v36 = *v36 + 1;
					v33 = v22;
					v34 = v32;
					v35 = v23;
					// branch -> 0xace64
				}
				int32_t v37 = v35 + 224; // 0xace64
				v23 = v37;
				int32_t v38 = v34 + 1; // 0xace68
				v32 = v38;
				int32_t v39 = v33; // 0xacea8
				int32_t v40 = v38; // 0xace9c
				int32_t v41 = v37; // 0xace98
				if (*(int16_t *)v37 == 370 == v33 == 3) {
					// 0xace7c
					*(int32_t *)v24 = v38;
					*(int32_t *)(v24 + 4) = v18;
					*(int32_t *)(v24 + 8) = v25;
					v24 += 16;
					int32_t *v42 = (int32_t *)v2; // 0xace8c
					*v42 = *v42 + 1;
					v39 = v22;
					v40 = v32;
					v41 = v23;
					// branch -> 0xace98
				}
				int32_t v43 = v41 + 224; // 0xace98
				v23 = v43;
				int32_t v44 = v40 + 1; // 0xace9c
				v32 = v44;
				int32_t v45 = v39; // 0xacedc
				int32_t v46 = v44; // 0xaced0
				int32_t v47 = v43; // 0xacecc
				if (*(int16_t *)v43 == 370 == v39 == 3) {
					// 0xaceb0
					*(int32_t *)v24 = v44;
					*(int32_t *)(v24 + 4) = v18;
					*(int32_t *)(v24 + 8) = v25;
					v24 += 16;
					int32_t *v48 = (int32_t *)v2; // 0xacec0
					*v48 = *v48 + 1;
					v45 = v22;
					v46 = v32;
					v47 = v23;
					// branch -> 0xacecc
				}
				int32_t v49 = v47 + 224; // 0xacecc
				v23 = v49;
				int32_t v50 = v46 + 1; // 0xaced0
				v32 = v50;
				int32_t v51 = v45; // 0xacf10
				int32_t v52 = v50; // 0xacf04
				int32_t v53 = v49; // 0xacf00
				if (*(int16_t *)v49 == 370 == v45 == 3) {
					// 0xacee4
					*(int32_t *)v24 = v50;
					*(int32_t *)(v24 + 4) = v18;
					*(int32_t *)(v24 + 8) = v25;
					v24 += 16;
					int32_t *v54 = (int32_t *)v2; // 0xacef4
					*v54 = *v54 + 1;
					v51 = v22;
					v52 = v32;
					v53 = v23;
					// branch -> 0xacf00
				}
				int32_t v55 = v53 + 224; // 0xacf00
				v23 = v55;
				int32_t v56 = v52 + 1; // 0xacf04
				v32 = v56;
				int32_t v57 = v51; // 0xacf44
				int32_t v58 = v56; // 0xacf38
				int32_t v59 = v55; // 0xacf34
				if (*(int16_t *)v55 == 370 == v51 == 3) {
					// 0xacf18
					*(int32_t *)v24 = v56;
					*(int32_t *)(v24 + 4) = v18;
					*(int32_t *)(v24 + 8) = v25;
					v24 += 16;
					int32_t *v60 = (int32_t *)v2; // 0xacf28
					*v60 = *v60 + 1;
					v57 = v22;
					v58 = v32;
					v59 = v23;
					// branch -> 0xacf34
				}
				int32_t v61 = v59 + 224; // 0xacf34
				v23 = v61;
				int32_t v62 = v58 + 1; // 0xacf38
				v32 = v62;
				int32_t v63 = v62; // 0xacf6c
				int32_t v64 = v61; // 0xacf68
				if (*(int16_t *)v61 == 370 == v57 == 3) {
					// 0xacf4c
					*(int32_t *)v24 = v62;
					*(int32_t *)(v24 + 4) = v18;
					*(int32_t *)(v24 + 8) = v25;
					v24 += 16;
					int32_t *v65 = (int32_t *)v2; // 0xacf5c
					*v65 = *v65 + 1;
					v63 = v32;
					v64 = v23;
					// branch -> 0xacf68
				}
				int32_t v66 = v64 + 224; // 0xacf68
				int32_t v67 = v63 + 1;   // 0xacf6c
				g36 = v67;
				int32_t v68 = v21 - 1; // 0xacf70
				v21 = v68;
				if (v68 == 0) {
					int32_t v69 = v18 + 1; // 0xacf74
					v18 = v69;
					int32_t v70 = v19 + 2; // 0xacf78
					v19 = v70;
					if (v69 >= 112) {
						// break (via goto) -> 0xacf84
						goto lab_0xacf84;
					}
					v20 = v70;
					// continue (via goto) -> 0xacdd8
					goto lab_0xacdd8;
				} else {
					// 0xacf68
					v26 = v67;
					v23 = v66;
					// branch -> 0xace00
					continue;
				}
			}
		lab_0xacf84:;
			unsigned char v71 = *(char *)(g33 + 0x55ec * *(int32_t *)g35 + 348); // 0xacf90
			result = v71;
			if (v71 != 0) {
				// 0xacfa8
				if (v71 == 1) {
					// 0xacfb4
					*(int32_t *)g32 = 694;
					// branch -> 0xacfd0
				} else {
					// 0xacfc0
					if (v71 == 2) {
						// 0xacfc8
						*(int32_t *)g32 = 591;
						// branch -> 0xacfd0
					}
				}
				// 0xacfd0
				if (a2 != 0) {
					// 0xacfd8
					function_8b520(1, 15);
					result = function_8b520(1, 5);
					// branch -> 0xad11c
				}
				// 0xad11c
				g10 = v1;
				return result;
			}
			// 0xacf9c
			v5 = 803;
			*(int32_t *)g32 = 803;
			// branch -> 0xacfd0
			// 0xacfd0
			if (a2 != 0) {
				// 0xacfd8
				function_8b520(1, 15);
				int32_t result2 = function_8b520(1, 5); // 0xacfec
				// branch -> 0xad11c
				// 0xad11c
				g10 = v1;
				return result2;
			}
		}
	}
	// 0xad0b4
	if (v10 == *(int32_t *)(v3 + 260)) {
		// 0xad0c0
		*(char *)(v7 + 266) = 3;
		*(int32_t *)result = 30;
		v13 = *(char *)(g33 + 0x55ec * *(int32_t *)g35 + 348);
		result = v13;
		if (v13 == 0) {
			// 0xad0e8
			*(int32_t *)g32 = 814;
			// branch -> 0xad11c
			// 0xad11c
			g10 = v1;
			return result;
		}
		// 0xad0f4
		if (v13 == 1) {
			// 0xad100
			*(int32_t *)g32 = 705;
			// branch -> 0xad11c
		} else {
			// 0xad10c
			if (v13 == 2) {
				// 0xad114
				*(int32_t *)g32 = 602;
				// branch -> 0xad11c
			}
		}
		// 0xad11c
		g10 = v1;
		return result;
	}
	// 0xad11c
	g10 = v1;
	return result;
}

// Address range: 0xad130 - 0xad180
int32_t function_ad130(void)
{
	int32_t v1 = 2 * *(int32_t *)*(int32_t *)(g23 - 0x754c); // 0xad14c
	int32_t v2 = 2 * *(int32_t *)*(int32_t *)(g23 - 0x7550); // 0xad150
	int32_t v3 = v2 + 19;                                    // 0xad160
	g37 = v3;
	return function_52a1c(v1 + 19, v3, v1 + 26, v2 + 26);
}

// Address range: 0xad180 - 0xad1a8
int32_t function_ad180(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7604) + 24 * a1; // 0xad18c
	int32_t result = 2 * a3;                           // r3
	*(int32_t *)(v1 + 4) = 2 * a2 + 28;
	*(int32_t *)(v1 + 8) = result + 23;
	return result;
}

// Address range: 0xad1a8 - 0xad294
int32_t function_ad1a8(int32_t a1, int32_t a2)
{
	// 0xad1a8
	g36 = a1;
	g35 = a2;
	int32_t v1 = LoadFileInMem(*(int32_t *)(g23 - 0x58b8), NULL); // 0xad1cc
	int32_t v2 = v1;                                              // bp-24
	g34 = v1;
	int32_t v3 = function_c9948();             // 0xad1d8
	int32_t v4 = (int32_t) * (char *)v3;       // 0xad1dc
	int32_t v5 = (int32_t) * (char *)(v3 + 2); // r6
	int32_t v6 = v3 + 4;                       // r10
	*(int32_t *)*(int32_t *)(g23 - 0x7554) = v4;
	int32_t v7 = g36 + v4; // r7
	int32_t v8 = g35;      // r9
	*(int32_t *)*(int32_t *)(g23 - 0x7558) = v5;
	int32_t v9 = g35 + v5; // r8
	*(int32_t *)*(int32_t *)(g23 - 0x754c) = g36;
	v5 = g35 + *(int32_t *)(g23 - 0x77cc);
	*(int32_t *)*(int32_t *)(g23 - 0x7550) = g35;
	int32_t v10 = v8; // 0xad2641
	if (v10 >= v9) {
		// 0xad26c
		function_c9acc(v2);
		return MemFreeDbg(&v2);
	}
	int32_t v11 = v9; // 0xad26413
	int32_t v12 = v5; // 0xad230
	// branch -> 0xad228
	while (true) {
		int32_t v13 = v7 - g36;       // ctr
		int32_t v14 = 40 * g36 + v12; // 0xad230
		int32_t v15 = v11;            // 0xad264
		int32_t v16 = v10;            // 0xad260
		int32_t v17 = v12;            // 0xad25c
		if (g36 < v7) {
			int32_t v18 = v6; // 0xad238
			// branch -> 0xad238
			while (true) {
				unsigned char v19 = *(char *)v18; // 0xad238
				char v20 = v19;
				if (v19 == 0) {
					// 0xad248
					v20 = 6;
					// branch -> 0xad24c
				}
				// 0xad24c
				*(char *)v14 = v20;
				int32_t v21 = v14 + 40; // 0xad250
				int32_t v22 = v6 + 2;   // 0xad254
				v6 = v22;
				int32_t v23 = v13 - 1; // 0xad258
				v13 = v23;
				if (v23 == 0) {
					// break -> 0xad25c
					break;
				}
				v14 = v21;
				v18 = v22;
				// continue -> 0xad238
			}
			// 0xad25c
			v15 = v9;
			v16 = v8;
			v17 = v5;
			// branch -> 0xad25c
		}
		int32_t v24 = v17 + 1; // 0xad25c
		v5 = v24;
		int32_t v25 = v16 + 1; // 0xad260
		v8 = v25;
		if (v25 >= v15) {
			// break -> 0xad26c
			break;
		}
		v11 = v15;
		v10 = v25;
		v12 = v24;
		// continue -> 0xad228
	}
	// 0xad26c
	function_c9acc(v2);
	return MemFreeDbg(&v2);
}

// Address range: 0xad294 - 0xad3b8
int32_t function_ad294(int32_t a1, int32_t a2, int32_t a3)
{
	// 0xad294
	g36 = a3;
	g35 = a2;
	g33 = a1;
	g32 = *(int32_t *)(g23 - 0x7604);
	int32_t v1 = LoadFileInMem(*(int32_t *)(g23 - 0x58bc), NULL); // 0xad2c8
	int32_t v2 = v1;                                              // bp-40
	g34 = v1;
	int32_t v3 = function_c9948();             // 0xad2d4
	int32_t v4 = (int32_t) * (char *)v3;       // 0xad2d8
	int32_t v5 = (int32_t) * (char *)(v3 + 2); // r6
	int32_t v6 = v3 + 4;                       // r10
	*(int32_t *)*(int32_t *)(g23 - 0x7554) = v4;
	int32_t v7 = g35 + v4; // r7
	int32_t v8 = g36;      // r9
	*(int32_t *)*(int32_t *)(g23 - 0x7558) = v5;
	int32_t v9 = g36 + v5; // r8
	*(int32_t *)*(int32_t *)(g23 - 0x754c) = g35;
	int32_t v10 = g36; // 0xad318
	v5 = v10 + *(int32_t *)(g23 - 0x77cc);
	*(int32_t *)*(int32_t *)(g23 - 0x7550) = v10;
	int32_t v11 = v8; // 0xad3601
	int32_t v12;      // 0xad370
	if (v11 >= v9) {
		// 0xad368
		v12 = g32 + 24 * g33;
		*(int32_t *)(v12 + 4) = 2 * g35 + 22;
		*(int32_t *)(v12 + 8) = 2 * g36 + 23;
		function_c9acc(v2);
		return MemFreeDbg(&v2);
	}
	int32_t v13 = v9; // 0xad36013
	int32_t v14 = v5; // 0xad32c
	// branch -> 0xad324
	while (true) {
		int32_t v15 = v7 - g35;       // ctr
		int32_t v16 = 40 * g35 + v14; // 0xad32c
		int32_t v17 = v13;            // 0xad360
		int32_t v18 = v11;            // 0xad35c
		int32_t v19 = v14;            // 0xad358
		if (g35 < v7) {
			int32_t v20 = v6; // 0xad334
			// branch -> 0xad334
			while (true) {
				unsigned char v21 = *(char *)v20; // 0xad334
				char v22 = v21;
				if (v21 == 0) {
					// 0xad344
					v22 = 3;
					// branch -> 0xad348
				}
				// 0xad348
				*(char *)v16 = v22;
				int32_t v23 = v16 + 40; // 0xad34c
				int32_t v24 = v6 + 2;   // 0xad350
				v6 = v24;
				int32_t v25 = v15 - 1; // 0xad354
				v15 = v25;
				if (v25 == 0) {
					// break -> 0xad358
					break;
				}
				v16 = v23;
				v20 = v24;
				// continue -> 0xad334
			}
			// 0xad358
			v17 = v9;
			v18 = v8;
			v19 = v5;
			// branch -> 0xad358
		}
		int32_t v26 = v19 + 1; // 0xad358
		v5 = v26;
		int32_t v27 = v18 + 1; // 0xad35c
		v8 = v27;
		if (v27 >= v17) {
			// break -> 0xad368
			break;
		}
		v13 = v17;
		v11 = v27;
		v14 = v26;
		// continue -> 0xad324
	}
	// 0xad368
	v12 = g32 + 24 * g33;
	*(int32_t *)(v12 + 4) = 2 * g35 + 22;
	*(int32_t *)(v12 + 8) = 2 * g36 + 23;
	function_c9acc(v2);
	return MemFreeDbg(&v2);
}

// Address range: 0xad3b8 - 0xad494
int32_t function_ad3b8(int32_t a1, int32_t a2)
{
	// 0xad3b8
	g36 = a2;
	g35 = a1;
	int32_t v1 = LoadFileInMem(*(int32_t *)(g23 - 0x58c0), NULL); // 0xad3dc
	int32_t v2 = v1;                                              // bp-24
	g34 = v1;
	int32_t v3 = function_c9948();             // 0xad3e8
	int32_t v4 = (int32_t) * (char *)v3;       // 0xad3ec
	int32_t v5 = v4;                           // r5
	int32_t v6 = v3 + 4;                       // r9
	int32_t v7 = (int32_t) * (char *)(v3 + 2); // r6
	int32_t v8 = 0;                            // r8
	*(int32_t *)*(int32_t *)(g23 - 0x7554) = v4;
	*(int32_t *)*(int32_t *)(g23 - 0x7558) = v7;
	*(int32_t *)*(int32_t *)(g23 - 0x754c) = g35;
	int32_t v9 = g36;                              // 0xad41c
	int32_t v10 = v9 + *(int32_t *)(g23 - 0x7540); // r4
	*(int32_t *)*(int32_t *)(g23 - 0x7550) = v9;
	int32_t v11 = v8; // 0xad4641
	if (v11 >= v7) {
		// 0xad46c
		function_c9acc(v2);
		return MemFreeDbg(&v2);
	}
	int32_t v12 = v7; // 0xad46414
	while (true) {
		int32_t v13 = v5;  // ctr
		int32_t v14 = 0;   // r7
		int32_t v15 = v12; // 0xad464
		int32_t v16 = v11; // 0xad460
		if (v5 >= 1) {
			int32_t v17 = 0;  // 0xad444
			int32_t v18 = v6; // 0xad438
			// branch -> 0xad438
			while (true) {
				unsigned char v19 = *(char *)v18; // 0xad438
				int32_t v20 = v5;                 // 0xad458
				int32_t v21 = v17;                // 0xad454
				int32_t v22 = v18;                // 0xad450
				if (v19 != 0) {
					// 0xad444
					*(char *)(v10 + 40 * (g35 + v17)) = v19;
					v20 = v13;
					v21 = v14;
					v22 = v6;
					// branch -> 0xad450
				}
				int32_t v23 = v22 + 2; // 0xad450
				v6 = v23;
				int32_t v24 = v21 + 1; // 0xad454
				v14 = v24;
				int32_t v25 = v20 - 1; // 0xad458
				v13 = v25;
				if (v25 == 0) {
					// break -> 0xad45c
					break;
				}
				v5 = v25;
				v17 = v24;
				v18 = v23;
				// continue -> 0xad438
			}
			// 0xad45c
			v15 = v7;
			v16 = v8;
			// branch -> 0xad45c
		}
		// 0xad45c
		v10++;
		int32_t v26 = v16 + 1; // 0xad460
		v8 = v26;
		if (v26 >= v15) {
			// break -> 0xad46c
			break;
		}
		v12 = v15;
		v11 = v26;
		// continue -> 0xad428
	}
	// 0xad46c
	function_c9acc(v2);
	return MemFreeDbg(&v2);
}

// Address range: 0xad494 - 0xad570
int32_t function_ad494(int32_t a1, int32_t a2)
{
	// 0xad494
	g36 = a2;
	g35 = a1;
	int32_t v1 = LoadFileInMem(*(int32_t *)(g23 - 0x58c4), NULL); // 0xad4b8
	int32_t v2 = v1;                                              // bp-24
	g34 = v1;
	int32_t v3 = function_c9948();             // 0xad4c4
	int32_t v4 = (int32_t) * (char *)v3;       // r5
	int32_t v5 = v3 + 4;                       // r9
	int32_t v6 = (int32_t) * (char *)(v3 + 2); // r6
	int32_t v7 = 0;                            // r8
	*(int32_t *)*(int32_t *)(g23 - 0x754c) = g35;
	*(int32_t *)*(int32_t *)(g23 - 0x7550) = g36;
	*(int32_t *)*(int32_t *)(g23 - 0x7554) = v4;
	int32_t v8 = g36 + *(int32_t *)(g23 - 0x7540); // r4
	*(int32_t *)*(int32_t *)(g23 - 0x7558) = v6;
	int32_t v9 = v7; // 0xad5401
	if (v9 >= v6) {
		// 0xad548
		function_c9acc(v2);
		return MemFreeDbg(&v2);
	}
	int32_t v10 = v6; // 0xad54014
	while (true) {
		int32_t v11 = v4;  // ctr
		int32_t v12 = 0;   // r7
		int32_t v13 = v10; // 0xad540
		int32_t v14 = v9;  // 0xad53c
		if (v4 >= 1) {
			int32_t v15 = 0;  // 0xad520
			int32_t v16 = v5; // 0xad514
			// branch -> 0xad514
			while (true) {
				unsigned char v17 = *(char *)v16; // 0xad514
				int32_t v18 = v4;                 // 0xad534
				int32_t v19 = v15;                // 0xad530
				int32_t v20 = v16;                // 0xad52c
				if (v17 != 0) {
					// 0xad520
					*(char *)(v8 + 40 * (g35 + v15)) = v17;
					v18 = v11;
					v19 = v12;
					v20 = v5;
					// branch -> 0xad52c
				}
				int32_t v21 = v20 + 2; // 0xad52c
				v5 = v21;
				int32_t v22 = v19 + 1; // 0xad530
				v12 = v22;
				int32_t v23 = v18 - 1; // 0xad534
				v11 = v23;
				if (v23 == 0) {
					// break -> 0xad538
					break;
				}
				v4 = v23;
				v15 = v22;
				v16 = v21;
				// continue -> 0xad514
			}
			// 0xad538
			v13 = v6;
			v14 = v7;
			// branch -> 0xad538
		}
		// 0xad538
		v8++;
		int32_t v24 = v14 + 1; // 0xad53c
		v7 = v24;
		if (v24 >= v13) {
			// break -> 0xad548
			break;
		}
		v10 = v13;
		v9 = v24;
		// continue -> 0xad504
	}
	// 0xad548
	function_c9acc(v2);
	return MemFreeDbg(&v2);
}

// Address range: 0xad570 - 0xad64c
int32_t function_ad570(int32_t a1, int32_t a2)
{
	// 0xad570
	g36 = a2;
	g35 = a1;
	int32_t v1 = LoadFileInMem(*(int32_t *)(g23 - 0x58c8), NULL); // 0xad594
	int32_t v2 = v1;                                              // bp-24
	g34 = v1;
	int32_t v3 = function_c9948();             // 0xad5a0
	int32_t v4 = (int32_t) * (char *)v3;       // r5
	int32_t v5 = v3 + 4;                       // r9
	int32_t v6 = (int32_t) * (char *)(v3 + 2); // r6
	int32_t v7 = 0;                            // r8
	*(int32_t *)*(int32_t *)(g23 - 0x754c) = g35;
	*(int32_t *)*(int32_t *)(g23 - 0x7550) = g36;
	*(int32_t *)*(int32_t *)(g23 - 0x7554) = v4;
	int32_t v8 = g36 + *(int32_t *)(g23 - 0x77cc); // r4
	*(int32_t *)*(int32_t *)(g23 - 0x7558) = v6;
	int32_t v9 = v7; // 0xad61c1
	if (v9 >= v6) {
		// 0xad624
		function_c9acc(v2);
		return MemFreeDbg(&v2);
	}
	int32_t v10 = v6; // 0xad61c14
	while (true) {
		int32_t v11 = v4;  // ctr
		int32_t v12 = 0;   // r7
		int32_t v13 = v10; // 0xad61c
		int32_t v14 = v9;  // 0xad618
		if (v4 >= 1) {
			int32_t v15 = 0;  // 0xad5fc
			int32_t v16 = v5; // 0xad5f0
			// branch -> 0xad5f0
			while (true) {
				unsigned char v17 = *(char *)v16; // 0xad5f0
				int32_t v18 = v4;                 // 0xad610
				int32_t v19 = v15;                // 0xad60c
				int32_t v20 = v16;                // 0xad608
				if (v17 != 0) {
					// 0xad5fc
					*(char *)(v8 + 40 * (g35 + v15)) = v17;
					v18 = v11;
					v19 = v12;
					v20 = v5;
					// branch -> 0xad608
				}
				int32_t v21 = v20 + 2; // 0xad608
				v5 = v21;
				int32_t v22 = v19 + 1; // 0xad60c
				v12 = v22;
				int32_t v23 = v18 - 1; // 0xad610
				v11 = v23;
				if (v23 == 0) {
					// break -> 0xad614
					break;
				}
				v4 = v23;
				v15 = v22;
				v16 = v21;
				// continue -> 0xad5f0
			}
			// 0xad614
			v13 = v6;
			v14 = v7;
			// branch -> 0xad614
		}
		// 0xad614
		v8++;
		int32_t v24 = v14 + 1; // 0xad618
		v7 = v24;
		if (v24 >= v13) {
			// break -> 0xad624
			break;
		}
		v10 = v13;
		v9 = v24;
		// continue -> 0xad5e0
	}
	// 0xad624
	function_c9acc(v2);
	return MemFreeDbg(&v2);
}

// Address range: 0xad64c - 0xad748
int32_t DRLG_CheckQuests(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0xad64c
	g36 = *(int32_t *)(g23 - 0x7604);
	int32_t v2 = g35; // 0xad658
	g35 = 0;
	int32_t v3 = g33; // 0xad660
	g33 = a2;
	int32_t v4 = g32; // 0xad668
	g32 = a1;
	int32_t v5 = 0; // 0xad678
	// branch -> 0xad678
	int32_t result; // 0xad744
	while (true) {
		int32_t v6 = g36;
		result = 0;
		int32_t v7; // 0xad718
		if (QuestStatus(v5) != 0) {
			int32_t v8 = (int32_t) * (char *)(v6 + 1); // 0xad688
			uint32_t v9 = v8 - 6;                      // 0xad68c
			if (v9 <= 8) {
				// 0xad698
				return *(int32_t *)(*(int32_t *)(g23 - 0x58cc) + 4 * v9);
			}
			result = v8;
			// 0xad718
			v7 = g35 + 1;
			g35 = v7;
			g36 = v6 + 24;
			if (v7 >= 16) {
				// break -> 0xad728
				break;
			}
			v5 = v7;
			// continue -> 0xad678
			continue;
		}
		// 0xad718
		v7 = g35 + 1;
		g35 = v7;
		g36 = v6 + 24;
		if (v7 >= 16) {
			// break -> 0xad728
			break;
		}
		v5 = v7;
		// continue -> 0xad678
	}
	// 0xad728
	g36 = v1;
	g35 = v2;
	g33 = v3;
	g32 = v4;
	return result;
}

// Address range: 0xad748 - 0xad834
int32_t function_ad748(void)
{
	int32_t result = *(int32_t *)(g23 - 0x77e0); // 0xad748
	int32_t v1 = *(int32_t *)(g23 - 0x713c);     // r8
	unsigned char v2 = *(char *)result;          // 0xad750
	int32_t v3 = *(int32_t *)(g23 - 0x7138);     // r7
	int32_t v4 = *(int32_t *)(g23 - 0x7134);     // r6
	int32_t v5 = *(int32_t *)(g23 - 0x7130);     // 0xad760
	int32_t v6 = *(int32_t *)(g23 - 0x7604);     // 0xad764
	if (v2 == 3) {
		// bb
		return result;
	}
	// 0xad76c
	if (v2 > 3) {
		// 0xad780
		if (v2 == 5) {
			// 0xad808
			*(int32_t *)v5 = *(int32_t *)(v6 + 364) + 1;
			*(int32_t *)v4 = *(int32_t *)(v6 + 368) - 1;
			int32_t result2 = (int32_t) * (char *)(v6 + 360); // 0xad824
			*(int32_t *)v3 = result2;
			*(int32_t *)v1 = 4;
			return result2;
		}
		// 0xad788
		if (v2 > 5) {
			// bb
			return result;
		}
		// 0xad7e0
		*(int32_t *)v5 = *(int32_t *)(v6 + 316);
		*(int32_t *)v4 = *(int32_t *)(v6 + 320) + 1;
		int32_t result3 = (int32_t) * (char *)(v6 + 312); // 0xad7f8
		*(int32_t *)v3 = result3;
		*(int32_t *)v1 = 1;
		return result3;
	}
	// 0xad770
	if (v2 == 1) {
		// 0xad790
		*(int32_t *)v5 = *(int32_t *)(v6 + 292) + 1;
		*(int32_t *)v4 = *(int32_t *)(v6 + 296);
		int32_t result4 = (int32_t) * (char *)(v6 + 288); // 0xad7a8
		*(int32_t *)v3 = result4;
		*(int32_t *)v1 = 1;
		return result4;
	}
	// 0xad778
	if (v2 == 0) {
		// bb
		return result;
	}
	// 0xad7b8
	*(int32_t *)v5 = *(int32_t *)(v6 + 340) + 1;
	*(int32_t *)v4 = *(int32_t *)(v6 + 344);
	int32_t result5 = (int32_t) * (char *)(v6 + 336); // 0xad7d0
	*(int32_t *)v3 = result5;
	*(int32_t *)v1 = 2;
	return result5;
}

// Address range: 0xad834 - 0xad890
int32_t GetReturnLvlPos(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7604); // 0xad834
	int32_t v2 = g23;                        // 0xad858
	if (*(char *)(v1 + 362) == 3) {
		// 0xad844
		*(char *)(v1 + 376) = 2;
		v2 = g23;
		// branch -> 0xad84c
	}
	int32_t v3 = *(int32_t *)(v2 - 0x77b0); // 0xad850
	*(int32_t *)v3 = *(int32_t *)*(int32_t *)(v2 - 0x7130);
	int32_t v4 = *(int32_t *)(g23 - 0x77b4); // 0xad860
	*(int32_t *)v4 = *(int32_t *)*(int32_t *)(v2 - 0x7134);
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x7138); // 0xad874
	int32_t v6 = *(int32_t *)(g23 - 0x713c);             // 0xad878
	*(char *)*(int32_t *)(g23 - 0x77e4) = (char)v5;
	int32_t result = *(int32_t *)(g23 - 0x7794); // 0xad880
	*(char *)result = (char)*(int32_t *)v6;
	return result;
}

// Address range: 0xad890 - 0xad9bc
int32_t function_ad890(void)
{
	int32_t v1 = g10;                        // 0xad894
	int32_t v2 = *(int32_t *)(g23 - 0x7604); // 0xad898
	g36 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77e4); // 0xad8a0
	g35 = v3;
	char *v4 = (char *)(v2 + 290); // 0xad8b0
	int32_t v5 = v2;               // 0xad900
	int32_t v6;                    // 0xad944
	int32_t v7;                    // 0xad97c
	int32_t result;                // 0xad9b8
	char *v8;                      // 0xad8f4
	char *v9;                      // 0xad938
	unsigned char v10;             // 0xad948
	int32_t v11;                   // 0xad98c
	uint32_t v12;                  // 0xad904
	int32_t v13;                   // 0xad97c
	int32_t v14;                   // 0xad900
	if (*v4 != 1) {
		// 0xad8f0
		v8 = (char *)(v5 + 146);
		v6 = v5;
		if (*v8 != 1) {
			// 0xad934
			v9 = (char *)(v6 + 362);
			if (*v9 == 1) {
				// 0xad944
				v10 = *(char *)g35;
				if ((int32_t)v10 == (int32_t) * (char *)(v6 + 360) - 1) {
					// 0xad958
					*v9 = 2;
					function_8b520(1, 15);
					// branch -> 0xad96c
				}
			}
			// 0xad96c
			if (QuestStatus(15) != 0) {
				// 0xad97c
				v7 = g23;
				v13 = *(int32_t *)(v7 - 0x754c);
				v11 = *(int32_t *)*(int32_t *)(v7 - 0x7550);
				result = AddObject(83, 2 * *(int32_t *)v13 + 20, 2 * v11 + 22);
				// branch -> 0xad9a4
			} else {
				result = 0;
			}
			// 0xad9a4
			g10 = v1;
			return result;
		}
		// 0xad900
		v14 = (int32_t) * (char *)(v5 + 144);
		v12 = (int32_t) * (char *)g35;
		if (v12 < v14 - 1) {
			v6 = v5;
			// 0xad934
			v9 = (char *)(v6 + 362);
			if (*v9 == 1) {
				// 0xad944
				v10 = *(char *)g35;
				if ((int32_t)v10 == (int32_t) * (char *)(v6 + 360) - 1) {
					// 0xad958
					*v9 = 2;
					function_8b520(1, 15);
					// branch -> 0xad96c
				}
			}
			// 0xad96c
			if (QuestStatus(15) != 0) {
				// 0xad97c
				v7 = g23;
				v13 = *(int32_t *)(v7 - 0x754c);
				v11 = *(int32_t *)*(int32_t *)(v7 - 0x7550);
				result = AddObject(83, 2 * *(int32_t *)v13 + 20, 2 * v11 + 22);
				// branch -> 0xad9a4
			} else {
				result = 0;
			}
			// 0xad9a4
			g10 = v1;
			return result;
		}
		// 0xad914
		if (v12 <= v14 + 1) {
			// 0xad920
			*v8 = 2;
			function_8b520(1, 6);
			v6 = g36;
			// branch -> 0xad934
		} else {
			v6 = v5;
		}
		// 0xad934
		v9 = (char *)(v6 + 362);
		if (*v9 == 1) {
			// 0xad944
			v10 = *(char *)g35;
			if ((int32_t)v10 == (int32_t) * (char *)(v6 + 360) - 1) {
				// 0xad958
				*v9 = 2;
				function_8b520(1, 15);
				// branch -> 0xad96c
			}
		}
		// 0xad96c
		if (QuestStatus(15) != 0) {
			// 0xad97c
			v7 = g23;
			v13 = *(int32_t *)(v7 - 0x754c);
			v11 = *(int32_t *)*(int32_t *)(v7 - 0x7550);
			result = AddObject(83, 2 * *(int32_t *)v13 + 20, 2 * v11 + 22);
			// branch -> 0xad9a4
		} else {
			result = 0;
		}
		// 0xad9a4
		g10 = v1;
		return result;
	}
	int32_t v15 = (int32_t) * (char *)(v2 + 288); // 0xad8bc
	uint32_t v16 = (int32_t) * (char *)v3;        // 0xad8c0
	if (v16 < v15 - 1) {
		v5 = v2;
		// 0xad8f0
		v8 = (char *)(v5 + 146);
		v6 = v5;
		if (*v8 == 1) {
			// 0xad900
			v14 = (int32_t) * (char *)(v5 + 144);
			v12 = (int32_t) * (char *)g35;
			if (v12 >= v14 - 1) {
				// 0xad914
				if (v12 <= v14 + 1) {
					// 0xad920
					*v8 = 2;
					function_8b520(1, 6);
					v6 = g36;
					// branch -> 0xad934
				} else {
					v6 = v5;
				}
			} else {
				v6 = v5;
			}
		}
		// 0xad934
		v9 = (char *)(v6 + 362);
		if (*v9 == 1) {
			// 0xad944
			v10 = *(char *)g35;
			if ((int32_t)v10 == (int32_t) * (char *)(v6 + 360) - 1) {
				// 0xad958
				*v9 = 2;
				function_8b520(1, 15);
				// branch -> 0xad96c
			}
		}
		// 0xad96c
		if (QuestStatus(15) != 0) {
			// 0xad97c
			v7 = g23;
			v13 = *(int32_t *)(v7 - 0x754c);
			v11 = *(int32_t *)*(int32_t *)(v7 - 0x7550);
			result = AddObject(83, 2 * *(int32_t *)v13 + 20, 2 * v11 + 22);
			// branch -> 0xad9a4
		} else {
			result = 0;
		}
		// 0xad9a4
		g10 = v1;
		return result;
	}
	// 0xad8d0
	if (v16 <= v15 + 1) {
		// 0xad8dc
		*v4 = 2;
		function_8b520(1, 12);
		v5 = g36;
		// branch -> 0xad8f0
	} else {
		v5 = v2;
	}
	// 0xad8f0
	v8 = (char *)(v5 + 146);
	v6 = v5;
	if (*v8 == 1) {
		// 0xad900
		v14 = (int32_t) * (char *)(v5 + 144);
		v12 = (int32_t) * (char *)g35;
		if (v12 >= v14 - 1) {
			// 0xad914
			if (v12 <= v14 + 1) {
				// 0xad920
				*v8 = 2;
				function_8b520(1, 6);
				v6 = g36;
				// branch -> 0xad934
			} else {
				v6 = v5;
			}
		} else {
			v6 = v5;
		}
	}
	// 0xad934
	v9 = (char *)(v6 + 362);
	if (*v9 == 1) {
		// 0xad944
		v10 = *(char *)g35;
		if ((int32_t)v10 == (int32_t) * (char *)(v6 + 360) - 1) {
			// 0xad958
			*v9 = 2;
			function_8b520(1, 15);
			// branch -> 0xad96c
		}
	}
	// 0xad96c
	if (QuestStatus(15) != 0) {
		// 0xad97c
		v7 = g23;
		v13 = *(int32_t *)(v7 - 0x754c);
		v11 = *(int32_t *)*(int32_t *)(v7 - 0x7550);
		result = AddObject(83, 2 * *(int32_t *)v13 + 20, 2 * v11 + 22);
		// branch -> 0xad9a4
	} else {
		result = 0;
	}
	// 0xad9a4
	g10 = v1;
	return result;
}

// Address range: 0xad9bc - 0xaddf0
int32_t ResyncQuests(void)
{
	int32_t v1 = g10;                        // 0xad9c0
	int32_t v2 = *(int32_t *)(g23 - 0x77d8); // 0xad9c4
	g27 = v2;
	g32 = *(int32_t *)(g23 - 0x6f64);
	g33 = *(int32_t *)(g23 - 0x7518);
	g35 = *(int32_t *)(g23 - 0x7194);
	g36 = *(int32_t *)(g23 - 0x7190);
	g24 = *(int32_t *)(g23 - 0x7558);
	g25 = *(int32_t *)(g23 - 0x7554);
	int32_t v3 = *(int32_t *)(g23 - 0x77e0); // 0xad9e0
	g26 = v3;
	g28 = *(int32_t *)(g23 - 0x77e4);
	g29 = *(int32_t *)(g23 - 0x7550);
	g30 = *(int32_t *)(g23 - 0x754c);
	int32_t v4 = *(int32_t *)(g23 - 0x7604); // 0xad9f0
	g31 = v4;
	int32_t v5;        // 0xadab8
	int32_t v6;        // 0xadb24
	int32_t v7;        // 0xadb84
	int32_t v8;        // 0xadbbc
	int32_t v9;        // 0xadc20
	int32_t v10;       // 0xadca4
	int32_t v11;       // 0xadd30
	int32_t v12;       // 0xadd50
	int32_t v13;       // 0xadd68
	int32_t v14;       // 0xada7c
	int32_t v15;       // 0xadb34
	int32_t v16;       // 0xadb38
	char *v17;         // 0xadb48
	int32_t v18;       // 0xadbcc
	int32_t v19;       // 0xadbd0
	char *v20;         // 0xadbe0
	int32_t v21;       // 0xadc38
	int32_t v22;       // 0xadd0c
	int32_t v23;       // 0xadd78
	int32_t v24;       // 0xadd7c
	int32_t v25;       // 0xada98
	int32_t v26;       // 0xadaa8
	int32_t v27;       // 0xadad0
	int32_t v28;       // 0xadae0
	uint32_t v29;      // 0xadaf0
	uint32_t v30;      // 0xadaf4
	int32_t v31;       // 0xadafc
	int32_t v32;       // 0xadb04
	uint32_t v33;      // 0xadb58
	uint32_t v34;      // 0xadb5c
	int32_t v35;       // 0xadb64
	int32_t v36;       // 0xadb6c
	int32_t v37;       // 0xadb94
	int32_t v38;       // 0xadb9c
	int32_t v39;       // 0xadba0
	uint32_t v40;      // 0xadbf0
	uint32_t v41;      // 0xadbf4
	int32_t v42;       // 0xadbfc
	int32_t v43;       // 0xadc04
	char *v44;         // 0xadcc8
	unsigned char v45; // 0xadc2c
	int32_t v46;       // 0xadca4
	if (*(char *)v2 != 0) {
		// 0xada08
		if (*(char *)v3 == *(char *)(v4 + 324)) {
			char v47 = *(char *)(v4 + 314); // 0xada18
			int32_t v48;                    // 0xadd90
			char *v49;                      // 0xaddac
			unsigned char v50;              // 0xaddac
			char v51;                       // 0xaddc0
			if (v47 != 1) {
				// 0xada24
				if (*(char *)*(int32_t *)(g23 - 0x7794) == *(char *)(v4 + 315)) {
					// 0xada38
					if (v47 == 3) {
						// 0xada40
						LoadPalette(*(int32_t *)(g23 - 0x58a8));
						// branch -> 0xada54
					} else {
						// 0xada4c
						LoadPalette(*(int32_t *)(g23 - 0x58d0));
						// branch -> 0xada54
					}
					// 0xada54
					g20 = 0;
					function_9f040(0);
					int32_t v52 = g20 + 1; // 0xada60
					g20 = v52;
					// branch -> 0xada58
					while (v52 < 33) {
						// 0xada58
						function_9f040(v52);
						v52 = g20 + 1;
						g20 = v52;
						// continue -> 0xada58
					}
					// 0xada6c
					if (QuestStatus(7) != 0) {
						// 0xada7c
						v14 = g31 + 183;
						g22 = v14;
						v5 = v14;
						if (*(char *)v14 == 1) {
							// 0xada8c
							v25 = *(int32_t *)g24 + *(int32_t *)g29;
							v26 = *(int32_t *)g25 + *(int32_t *)g30;
							function_98800(v26 - 2, v25 - 2, v26 + 1, v25 + 1);
							v5 = g22;
							// branch -> 0xadab8
						}
						// 0xadab8
						v7 = v5;
						if (*(char *)v5 == 2) {
							// 0xadac4
							v27 = *(int32_t *)g24 + *(int32_t *)g29;
							v28 = *(int32_t *)g25 + *(int32_t *)g30;
							function_98800(v28 - 2, v27 - 2, v28 + 1, v27 + 1);
							v29 = *(int32_t *)g25;
							v30 = *(int32_t *)g24;
							v31 = *(int32_t *)g29;
							v32 = *(int32_t *)g30;
							function_98800(v32, v31, (v29 / 2 | v29 & -0x80000000) + 2 + v32, (v30 / 2 | v30 & -0x80000000) - 2 + v31);
							g20 = 0;
							v6 = g36;
							g21 = v6;
							if (*(int32_t *)g35 > 0) {
								function_9d6e4(*(int32_t *)v6);
								v15 = g21 + 4;
								g21 = v15;
								v16 = g20 + 1;
								g20 = v16;
								while (v16 < *(int32_t *)g35) {
									// 0xadb2c
									function_9d6e4(*(int32_t *)v15);
									v15 = g21 + 4;
									g21 = v15;
									v16 = g20 + 1;
									g20 = v16;
									// continue -> 0xadb2c
								}
								// 0xadb48
								v17 = (char *)g33;
								*v17 = 9;
								g21 = 0x1000000 * (int32_t)*v17 / 0x1000000;
								v33 = *(int32_t *)g25;
								v34 = *(int32_t *)g24;
								v35 = *(int32_t *)g29;
								v36 = *(int32_t *)g30;
								function_528e8(v36, v35, (v33 / 2 | v33 & -0x80000000) + 4 + v36, v35 + (v34 / 2 | v34 & -0x80000000));
								*(char *)g33 = (char)g21;
								// branch -> 0xadb84
								// 0xadb84
								int32_t result2;   // 0xaddec
								int32_t result;    // 0xadda8
								unsigned char v53; // 0xadd8c
								int32_t v54;       // 0xadd8c
								if (*(char *)g22 == 3) {
									// 0xadb90
									v37 = *(int32_t *)g24;
									v38 = *(int32_t *)g30;
									v39 = *(int32_t *)g29;
									function_98800(v38, v39, v38 + *(int32_t *)g25 + 1, v37 + 1 + v39);
									g22 = 0;
									v8 = g36;
									g21 = v8;
									if (*(int32_t *)g35 > 0) {
										function_9d6e4(*(int32_t *)v8);
										v18 = g21 + 4;
										g21 = v18;
										v19 = g22 + 1;
										g22 = v19;
										while (v19 < *(int32_t *)g35) {
											// 0xadbc4
											function_9d6e4(*(int32_t *)v18);
											v18 = g21 + 4;
											g21 = v18;
											v19 = g22 + 1;
											g22 = v19;
											// continue -> 0xadbc4
										}
										// 0xadbe0
										v20 = (char *)g33;
										*v20 = 9;
										g22 = 0x1000000 * (int32_t)*v20 / 0x1000000;
										v40 = *(int32_t *)g25;
										v41 = *(int32_t *)g24;
										v42 = *(int32_t *)g29;
										v43 = *(int32_t *)g30;
										function_528e8(v43, v42, (v40 / 2 | v40 & -0x80000000) + 4 + v43, v42 + (v41 / 2 | v41 & -0x80000000));
										*(char *)g33 = (char)g22;
										// branch -> 0xadc1c
										// 0xadc1c
										v9 = g31;
										if (*(char *)g28 == *(char *)(v9 + 24)) {
											// 0xadc2c
											v45 = *(char *)(v9 + 26);
											if (v45 == 1) {
												// 0xadc38
												v21 = v9 + 39;
												g21 = v21;
												if (*(char *)v21 == 0) {
													// 0xadc48
													function_60808(19, 0, 0, 5, 1);
													*(char *)g21 = 1;
													// branch -> 0xadca4
													// 0xadca4
													v10 = g31;
													v46 = (int32_t) * (char *)(v10 + 96);
													if ((int32_t) * (char *)g28 == v46 + 1) {
														// 0xadcb8
														if (*(char *)(v10 + 98) == 2) {
															// 0xadcc4
															v44 = (char *)(v10 + 111);
															if (*v44 == 0) {
																// 0xadcd4
																*v44 = 1;
																function_60808(15, 0, 0, 5, 1);
																// branch -> 0xadcf4
															}
														}
													}
													// 0xadcf4
													if (*(char *)g27 != 0) {
														// 0xadd00
														if (*(char *)g26 == 5) {
															// 0xadd0c
															v22 = g31 + 375;
															g21 = v22;
															v11 = v22;
															if (*(char *)v22 >= 4) {
																// 0xadd1c
																function_98800(1, 11, 20, 18);
																v11 = g21;
																// branch -> 0xadd30
															}
															// 0xadd30
															v12 = v11;
															if (*(char *)v11 >= 6) {
																// 0xadd3c
																function_98800(1, 18, 20, 24);
																v12 = g21;
																// branch -> 0xadd50
															}
															// 0xadd50
															if (*(char *)v12 >= 7) {
																// 0xadd5c
																function_c71c8();
																// branch -> 0xadd60
															}
															// 0xadd60
															g22 = 0;
															v13 = g36;
															g21 = v13;
															if (*(int32_t *)g35 > 0) {
																function_9d6e4(*(int32_t *)v13);
																v23 = g21 + 4;
																g21 = v23;
																v24 = g22 + 1;
																g22 = v24;
																while (v24 < *(int32_t *)g35) {
																	// 0xadd70
																	function_9d6e4(*(int32_t *)v23);
																	v23 = g21 + 4;
																	g21 = v23;
																	v24 = g22 + 1;
																	g22 = v24;
																	// continue -> 0xadd70
																}
																// 0xadd8c
																v53 = *(char *)g28;
																v54 = v53;
																v48 = g31;
																result2 = v54;
																if (v53 == *(char *)(v48 + 360)) {
																	// 0xadd9c
																	if (*(char *)g27 == 0) {
																		// 0xadda8
																		result = v48 + 376;
																		v49 = (char *)result;
																		v50 = *v49;
																		if (v50 != 1) {
																			// 0xaddb8
																			if (v50 < 3) {
																				// 0xadddc
																				g10 = v1;
																				return result;
																			}
																		}
																		// 0xaddc0
																		v51 = *(char *)(v48 + 362);
																		if (v51 != 2) {
																			// 0xaddcc
																			if (v51 != 3) {
																				// 0xadddc
																				g10 = v1;
																				return result;
																			}
																		}
																		// 0xaddd4
																		*v49 = 2;
																		result2 = result;
																		// branch -> 0xadddc
																	} else {
																		result2 = v54;
																	}
																}
																// 0xadddc
																g10 = v1;
																return result2;
															}
														}
													}
													// 0xadd8c
													v53 = *(char *)g28;
													v54 = v53;
													v48 = g31;
													result2 = v54;
													if (v53 == *(char *)(v48 + 360)) {
														// 0xadd9c
														if (*(char *)g27 == 0) {
															// 0xadda8
															result = v48 + 376;
															v49 = (char *)result;
															v50 = *v49;
															if (v50 != 1) {
																// 0xaddb8
																if (v50 < 3) {
																	// 0xadddc
																	g10 = v1;
																	return result;
																}
															}
															// 0xaddc0
															v51 = *(char *)(v48 + 362);
															if (v51 != 2) {
																// 0xaddcc
																if (v51 != 3) {
																	// 0xadddc
																	g10 = v1;
																	return result;
																}
															}
															// 0xaddd4
															*v49 = 2;
															result2 = result;
															// branch -> 0xadddc
														} else {
															result2 = v54;
														}
													}
													// 0xadddc
													g10 = v1;
													return result2;
												}
											}
											// 0xadc6c
											if (v45 == 2) {
												// 0xadc74
												if (*(char *)(v9 + 39) < 5) {
													// 0xadc94
													// branch -> 0xadca4
												} else {
													// 0xadc80
													*(int32_t *)(g32 + 68) = 123;
													*(int32_t *)(g32 + 388) = -1;
													// branch -> 0xadca4
												}
												// 0xadca4
												v10 = g31;
												v46 = (int32_t) * (char *)(v10 + 96);
												if ((int32_t) * (char *)g28 == v46 + 1) {
													// 0xadcb8
													if (*(char *)(v10 + 98) == 2) {
														// 0xadcc4
														v44 = (char *)(v10 + 111);
														if (*v44 == 0) {
															// 0xadcd4
															*v44 = 1;
															function_60808(15, 0, 0, 5, 1);
															// branch -> 0xadcf4
														}
													}
												}
												// 0xadcf4
												if (*(char *)g27 != 0) {
													// 0xadd00
													if (*(char *)g26 == 5) {
														// 0xadd0c
														v22 = g31 + 375;
														g21 = v22;
														v11 = v22;
														if (*(char *)v22 >= 4) {
															// 0xadd1c
															function_98800(1, 11, 20, 18);
															v11 = g21;
															// branch -> 0xadd30
														}
														// 0xadd30
														v12 = v11;
														if (*(char *)v11 >= 6) {
															// 0xadd3c
															function_98800(1, 18, 20, 24);
															v12 = g21;
															// branch -> 0xadd50
														}
														// 0xadd50
														if (*(char *)v12 >= 7) {
															// 0xadd5c
															function_c71c8();
															// branch -> 0xadd60
														}
														// 0xadd60
														g22 = 0;
														v13 = g36;
														g21 = v13;
														if (*(int32_t *)g35 > 0) {
															function_9d6e4(*(int32_t *)v13);
															v23 = g21 + 4;
															g21 = v23;
															v24 = g22 + 1;
															g22 = v24;
															while (v24 < *(int32_t *)g35) {
																// 0xadd70
																function_9d6e4(*(int32_t *)v23);
																v23 = g21 + 4;
																g21 = v23;
																v24 = g22 + 1;
																g22 = v24;
																// continue -> 0xadd70
															}
															// 0xadd8c
															v53 = *(char *)g28;
															v54 = v53;
															v48 = g31;
															result2 = v54;
															if (v53 == *(char *)(v48 + 360)) {
																// 0xadd9c
																if (*(char *)g27 == 0) {
																	// 0xadda8
																	result = v48 + 376;
																	v49 = (char *)result;
																	v50 = *v49;
																	if (v50 != 1) {
																		// 0xaddb8
																		if (v50 < 3) {
																			// 0xadddc
																			g10 = v1;
																			return result;
																		}
																	}
																	// 0xaddc0
																	v51 = *(char *)(v48 + 362);
																	if (v51 != 2) {
																		// 0xaddcc
																		if (v51 != 3) {
																			// 0xadddc
																			g10 = v1;
																			return result;
																		}
																	}
																	// 0xaddd4
																	*v49 = 2;
																	result2 = result;
																	// branch -> 0xadddc
																} else {
																	result2 = v54;
																}
															}
															// 0xadddc
															g10 = v1;
															return result2;
														}
													}
												}
												// 0xadd8c
												v53 = *(char *)g28;
												v54 = v53;
												v48 = g31;
												result2 = v54;
												if (v53 == *(char *)(v48 + 360)) {
													// 0xadd9c
													if (*(char *)g27 == 0) {
														// 0xadda8
														result = v48 + 376;
														v49 = (char *)result;
														v50 = *v49;
														if (v50 != 1) {
															// 0xaddb8
															if (v50 < 3) {
																// 0xadddc
																g10 = v1;
																return result;
															}
														}
														// 0xaddc0
														v51 = *(char *)(v48 + 362);
														if (v51 != 2) {
															// 0xaddcc
															if (v51 != 3) {
																// 0xadddc
																g10 = v1;
																return result;
															}
														}
														// 0xaddd4
														*v49 = 2;
														result2 = result;
														// branch -> 0xadddc
													} else {
														result2 = v54;
													}
												}
												// 0xadddc
												g10 = v1;
												return result2;
											}
										}
										// 0xadca4
										v10 = g31;
										v46 = (int32_t) * (char *)(v10 + 96);
										if ((int32_t) * (char *)g28 == v46 + 1) {
											// 0xadcb8
											if (*(char *)(v10 + 98) == 2) {
												// 0xadcc4
												v44 = (char *)(v10 + 111);
												if (*v44 == 0) {
													// 0xadcd4
													*v44 = 1;
													function_60808(15, 0, 0, 5, 1);
													// branch -> 0xadcf4
												}
											}
										}
										// 0xadcf4
										if (*(char *)g27 != 0) {
											// 0xadd00
											if (*(char *)g26 == 5) {
												// 0xadd0c
												v22 = g31 + 375;
												g21 = v22;
												v11 = v22;
												if (*(char *)v22 >= 4) {
													// 0xadd1c
													function_98800(1, 11, 20, 18);
													v11 = g21;
													// branch -> 0xadd30
												}
												// 0xadd30
												v12 = v11;
												if (*(char *)v11 >= 6) {
													// 0xadd3c
													function_98800(1, 18, 20, 24);
													v12 = g21;
													// branch -> 0xadd50
												}
												// 0xadd50
												if (*(char *)v12 >= 7) {
													// 0xadd5c
													function_c71c8();
													// branch -> 0xadd60
												}
												// 0xadd60
												g22 = 0;
												v13 = g36;
												g21 = v13;
												if (*(int32_t *)g35 > 0) {
													function_9d6e4(*(int32_t *)v13);
													v23 = g21 + 4;
													g21 = v23;
													v24 = g22 + 1;
													g22 = v24;
													while (v24 < *(int32_t *)g35) {
														// 0xadd70
														function_9d6e4(*(int32_t *)v23);
														v23 = g21 + 4;
														g21 = v23;
														v24 = g22 + 1;
														g22 = v24;
														// continue -> 0xadd70
													}
													// 0xadd8c
													v53 = *(char *)g28;
													v54 = v53;
													v48 = g31;
													result2 = v54;
													if (v53 == *(char *)(v48 + 360)) {
														// 0xadd9c
														if (*(char *)g27 == 0) {
															// 0xadda8
															result = v48 + 376;
															v49 = (char *)result;
															v50 = *v49;
															if (v50 != 1) {
																// 0xaddb8
																if (v50 < 3) {
																	// 0xadddc
																	g10 = v1;
																	return result;
																}
															}
															// 0xaddc0
															v51 = *(char *)(v48 + 362);
															if (v51 != 2) {
																// 0xaddcc
																if (v51 != 3) {
																	// 0xadddc
																	g10 = v1;
																	return result;
																}
															}
															// 0xaddd4
															*v49 = 2;
															result2 = result;
															// branch -> 0xadddc
														} else {
															result2 = v54;
														}
													}
													// 0xadddc
													g10 = v1;
													return result2;
												}
											}
										}
										// 0xadd8c
										v53 = *(char *)g28;
										v54 = v53;
										v48 = g31;
										result2 = v54;
										if (v53 == *(char *)(v48 + 360)) {
											// 0xadd9c
											if (*(char *)g27 == 0) {
												// 0xadda8
												result = v48 + 376;
												v49 = (char *)result;
												v50 = *v49;
												if (v50 != 1) {
													// 0xaddb8
													if (v50 < 3) {
														// 0xadddc
														g10 = v1;
														return result;
													}
												}
												// 0xaddc0
												v51 = *(char *)(v48 + 362);
												if (v51 != 2) {
													// 0xaddcc
													if (v51 != 3) {
														// 0xadddc
														g10 = v1;
														return result;
													}
												}
												// 0xaddd4
												*v49 = 2;
												result2 = result;
												// branch -> 0xadddc
											} else {
												result2 = v54;
											}
										}
										// 0xadddc
										g10 = v1;
										return result2;
									}
									// 0xadbe0
									v20 = (char *)g33;
									*v20 = 9;
									g22 = 0x1000000 * (int32_t)*v20 / 0x1000000;
									v40 = *(int32_t *)g25;
									v41 = *(int32_t *)g24;
									v42 = *(int32_t *)g29;
									v43 = *(int32_t *)g30;
									function_528e8(v43, v42, (v40 / 2 | v40 & -0x80000000) + 4 + v43, v42 + (v41 / 2 | v41 & -0x80000000));
									*(char *)g33 = (char)g22;
									// branch -> 0xadc1c
								}
								// 0xadc1c
								v9 = g31;
								if (*(char *)g28 == *(char *)(v9 + 24)) {
									// 0xadc2c
									v45 = *(char *)(v9 + 26);
									if (v45 == 1) {
										// 0xadc38
										v21 = v9 + 39;
										g21 = v21;
										if (*(char *)v21 == 0) {
											// 0xadc48
											function_60808(19, 0, 0, 5, 1);
											*(char *)g21 = 1;
											// branch -> 0xadca4
											// 0xadca4
											v10 = g31;
											v46 = (int32_t) * (char *)(v10 + 96);
											if ((int32_t) * (char *)g28 == v46 + 1) {
												// 0xadcb8
												if (*(char *)(v10 + 98) == 2) {
													// 0xadcc4
													v44 = (char *)(v10 + 111);
													if (*v44 == 0) {
														// 0xadcd4
														*v44 = 1;
														function_60808(15, 0, 0, 5, 1);
														// branch -> 0xadcf4
													}
												}
											}
											// 0xadcf4
											if (*(char *)g27 != 0) {
												// 0xadd00
												if (*(char *)g26 == 5) {
													// 0xadd0c
													v22 = g31 + 375;
													g21 = v22;
													v11 = v22;
													if (*(char *)v22 >= 4) {
														// 0xadd1c
														function_98800(1, 11, 20, 18);
														v11 = g21;
														// branch -> 0xadd30
													}
													// 0xadd30
													v12 = v11;
													if (*(char *)v11 >= 6) {
														// 0xadd3c
														function_98800(1, 18, 20, 24);
														v12 = g21;
														// branch -> 0xadd50
													}
													// 0xadd50
													if (*(char *)v12 >= 7) {
														// 0xadd5c
														function_c71c8();
														// branch -> 0xadd60
													}
													// 0xadd60
													g22 = 0;
													v13 = g36;
													g21 = v13;
													if (*(int32_t *)g35 > 0) {
														function_9d6e4(*(int32_t *)v13);
														v23 = g21 + 4;
														g21 = v23;
														v24 = g22 + 1;
														g22 = v24;
														while (v24 < *(int32_t *)g35) {
															// 0xadd70
															function_9d6e4(*(int32_t *)v23);
															v23 = g21 + 4;
															g21 = v23;
															v24 = g22 + 1;
															g22 = v24;
															// continue -> 0xadd70
														}
														// 0xadd8c
														v53 = *(char *)g28;
														v54 = v53;
														v48 = g31;
														result2 = v54;
														if (v53 == *(char *)(v48 + 360)) {
															// 0xadd9c
															if (*(char *)g27 == 0) {
																// 0xadda8
																result = v48 + 376;
																v49 = (char *)result;
																v50 = *v49;
																if (v50 != 1) {
																	// 0xaddb8
																	if (v50 < 3) {
																		// 0xadddc
																		g10 = v1;
																		return result;
																	}
																}
																// 0xaddc0
																v51 = *(char *)(v48 + 362);
																if (v51 != 2) {
																	// 0xaddcc
																	if (v51 != 3) {
																		// 0xadddc
																		g10 = v1;
																		return result;
																	}
																}
																// 0xaddd4
																*v49 = 2;
																result2 = result;
																// branch -> 0xadddc
															} else {
																result2 = v54;
															}
														}
														// 0xadddc
														g10 = v1;
														return result2;
													}
												}
											}
											// 0xadd8c
											v53 = *(char *)g28;
											v54 = v53;
											v48 = g31;
											result2 = v54;
											if (v53 == *(char *)(v48 + 360)) {
												// 0xadd9c
												if (*(char *)g27 == 0) {
													// 0xadda8
													result = v48 + 376;
													v49 = (char *)result;
													v50 = *v49;
													if (v50 != 1) {
														// 0xaddb8
														if (v50 < 3) {
															// 0xadddc
															g10 = v1;
															return result;
														}
													}
													// 0xaddc0
													v51 = *(char *)(v48 + 362);
													if (v51 != 2) {
														// 0xaddcc
														if (v51 != 3) {
															// 0xadddc
															g10 = v1;
															return result;
														}
													}
													// 0xaddd4
													*v49 = 2;
													result2 = result;
													// branch -> 0xadddc
												} else {
													result2 = v54;
												}
											}
											// 0xadddc
											g10 = v1;
											return result2;
										}
									}
									// 0xadc6c
									if (v45 == 2) {
										// 0xadc74
										if (*(char *)(v9 + 39) < 5) {
											// 0xadc94
											// branch -> 0xadca4
										} else {
											// 0xadc80
											*(int32_t *)(g32 + 68) = 123;
											*(int32_t *)(g32 + 388) = -1;
											// branch -> 0xadca4
										}
										// 0xadca4
										v10 = g31;
										v46 = (int32_t) * (char *)(v10 + 96);
										if ((int32_t) * (char *)g28 == v46 + 1) {
											// 0xadcb8
											if (*(char *)(v10 + 98) == 2) {
												// 0xadcc4
												v44 = (char *)(v10 + 111);
												if (*v44 == 0) {
													// 0xadcd4
													*v44 = 1;
													function_60808(15, 0, 0, 5, 1);
													// branch -> 0xadcf4
												}
											}
										}
										// 0xadcf4
										if (*(char *)g27 != 0) {
											// 0xadd00
											if (*(char *)g26 == 5) {
												// 0xadd0c
												v22 = g31 + 375;
												g21 = v22;
												v11 = v22;
												if (*(char *)v22 >= 4) {
													// 0xadd1c
													function_98800(1, 11, 20, 18);
													v11 = g21;
													// branch -> 0xadd30
												}
												// 0xadd30
												v12 = v11;
												if (*(char *)v11 >= 6) {
													// 0xadd3c
													function_98800(1, 18, 20, 24);
													v12 = g21;
													// branch -> 0xadd50
												}
												// 0xadd50
												if (*(char *)v12 >= 7) {
													// 0xadd5c
													function_c71c8();
													// branch -> 0xadd60
												}
												// 0xadd60
												g22 = 0;
												v13 = g36;
												g21 = v13;
												if (*(int32_t *)g35 > 0) {
													function_9d6e4(*(int32_t *)v13);
													v23 = g21 + 4;
													g21 = v23;
													v24 = g22 + 1;
													g22 = v24;
													while (v24 < *(int32_t *)g35) {
														// 0xadd70
														function_9d6e4(*(int32_t *)v23);
														v23 = g21 + 4;
														g21 = v23;
														v24 = g22 + 1;
														g22 = v24;
														// continue -> 0xadd70
													}
													// 0xadd8c
													v48 = g31;
													if (*(char *)g28 == *(char *)(v48 + 360)) {
														// 0xadd9c
														if (*(char *)g27 == 0) {
															// 0xadda8
															result = v48 + 376;
															v49 = (char *)result;
															v50 = *v49;
															if (v50 != 1) {
																// 0xaddb8
																if (v50 < 3) {
																	// 0xadddc
																	g10 = v1;
																	return result;
																}
															}
															// 0xaddc0
															v51 = *(char *)(v48 + 362);
															if (v51 != 2) {
																// 0xaddcc
																if (v51 != 3) {
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
															// 0xaddd4
															*v49 = 2;
															// branch -> 0xadddc
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										}
										// 0xadd8c
										v48 = g31;
										if (*(char *)g28 == *(char *)(v48 + 360)) {
											// 0xadd9c
											if (*(char *)g27 == 0) {
												// 0xadda8
												v49 = (char *)(v48 + 376);
												v50 = *v49;
												if (v50 != 1) {
													// 0xaddb8
													if (v50 < 3) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0xaddc0
												v51 = *(char *)(v48 + 362);
												if (v51 != 2) {
													// 0xaddcc
													if (v51 != 3) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0xaddd4
												*v49 = 2;
												// branch -> 0xadddc
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0xadca4
								v10 = g31;
								v46 = (int32_t) * (char *)(v10 + 96);
								if ((int32_t) * (char *)g28 == v46 + 1) {
									// 0xadcb8
									if (*(char *)(v10 + 98) == 2) {
										// 0xadcc4
										v44 = (char *)(v10 + 111);
										if (*v44 == 0) {
											// 0xadcd4
											*v44 = 1;
											function_60808(15, 0, 0, 5, 1);
											// branch -> 0xadcf4
										}
									}
								}
								// 0xadcf4
								if (*(char *)g27 != 0) {
									// 0xadd00
									if (*(char *)g26 == 5) {
										// 0xadd0c
										v22 = g31 + 375;
										g21 = v22;
										v11 = v22;
										if (*(char *)v22 >= 4) {
											// 0xadd1c
											function_98800(1, 11, 20, 18);
											v11 = g21;
											// branch -> 0xadd30
										}
										// 0xadd30
										v12 = v11;
										if (*(char *)v11 >= 6) {
											// 0xadd3c
											function_98800(1, 18, 20, 24);
											v12 = g21;
											// branch -> 0xadd50
										}
										// 0xadd50
										if (*(char *)v12 >= 7) {
											// 0xadd5c
											function_c71c8();
											// branch -> 0xadd60
										}
										// 0xadd60
										g22 = 0;
										v13 = g36;
										g21 = v13;
										if (*(int32_t *)g35 > 0) {
											function_9d6e4(*(int32_t *)v13);
											v23 = g21 + 4;
											g21 = v23;
											v24 = g22 + 1;
											g22 = v24;
											while (v24 < *(int32_t *)g35) {
												// 0xadd70
												function_9d6e4(*(int32_t *)v23);
												v23 = g21 + 4;
												g21 = v23;
												v24 = g22 + 1;
												g22 = v24;
												// continue -> 0xadd70
											}
											// 0xadd8c
											v48 = g31;
											if (*(char *)g28 == *(char *)(v48 + 360)) {
												// 0xadd9c
												if (*(char *)g27 == 0) {
													// 0xadda8
													v49 = (char *)(v48 + 376);
													v50 = *v49;
													if (v50 != 1) {
														// 0xaddb8
														if (v50 < 3) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0xaddc0
													v51 = *(char *)(v48 + 362);
													if (v51 != 2) {
														// 0xaddcc
														if (v51 != 3) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0xaddd4
													*v49 = 2;
													// branch -> 0xadddc
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// 0xadd8c
								v48 = g31;
								if (*(char *)g28 == *(char *)(v48 + 360)) {
									// 0xadd9c
									if (*(char *)g27 == 0) {
										// 0xadda8
										v49 = (char *)(v48 + 376);
										v50 = *v49;
										if (v50 != 1) {
											// 0xaddb8
											if (v50 < 3) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0xaddc0
										v51 = *(char *)(v48 + 362);
										if (v51 != 2) {
											// 0xaddcc
											if (v51 != 3) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0xaddd4
										*v49 = 2;
										// branch -> 0xadddc
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0xadb48
							v17 = (char *)g33;
							*v17 = 9;
							g21 = 0x1000000 * (int32_t)*v17 / 0x1000000;
							v33 = *(int32_t *)g25;
							v34 = *(int32_t *)g24;
							v35 = *(int32_t *)g29;
							v36 = *(int32_t *)g30;
							function_528e8(v36, v35, (v33 / 2 | v33 & -0x80000000) + 4 + v36, v35 + (v34 / 2 | v34 & -0x80000000));
							*(char *)g33 = (char)g21;
							v7 = g22;
							// branch -> 0xadb84
						}
						// 0xadb84
						if (*(char *)v7 == 3) {
							// 0xadb90
							v37 = *(int32_t *)g24;
							v38 = *(int32_t *)g30;
							v39 = *(int32_t *)g29;
							function_98800(v38, v39, v38 + *(int32_t *)g25 + 1, v37 + 1 + v39);
							g22 = 0;
							v8 = g36;
							g21 = v8;
							if (*(int32_t *)g35 > 0) {
								function_9d6e4(*(int32_t *)v8);
								v18 = g21 + 4;
								g21 = v18;
								v19 = g22 + 1;
								g22 = v19;
								while (v19 < *(int32_t *)g35) {
									// 0xadbc4
									function_9d6e4(*(int32_t *)v18);
									v18 = g21 + 4;
									g21 = v18;
									v19 = g22 + 1;
									g22 = v19;
									// continue -> 0xadbc4
								}
								// 0xadbe0
								v20 = (char *)g33;
								*v20 = 9;
								g22 = 0x1000000 * (int32_t)*v20 / 0x1000000;
								v40 = *(int32_t *)g25;
								v41 = *(int32_t *)g24;
								v42 = *(int32_t *)g29;
								v43 = *(int32_t *)g30;
								function_528e8(v43, v42, (v40 / 2 | v40 & -0x80000000) + 4 + v43, v42 + (v41 / 2 | v41 & -0x80000000));
								*(char *)g33 = (char)g22;
								// branch -> 0xadc1c
								// 0xadc1c
								v9 = g31;
								if (*(char *)g28 == *(char *)(v9 + 24)) {
									// 0xadc2c
									v45 = *(char *)(v9 + 26);
									if (v45 == 1) {
										// 0xadc38
										v21 = v9 + 39;
										g21 = v21;
										if (*(char *)v21 == 0) {
											// 0xadc48
											function_60808(19, 0, 0, 5, 1);
											*(char *)g21 = 1;
											// branch -> 0xadca4
											// 0xadca4
											v10 = g31;
											v46 = (int32_t) * (char *)(v10 + 96);
											if ((int32_t) * (char *)g28 == v46 + 1) {
												// 0xadcb8
												if (*(char *)(v10 + 98) == 2) {
													// 0xadcc4
													v44 = (char *)(v10 + 111);
													if (*v44 == 0) {
														// 0xadcd4
														*v44 = 1;
														function_60808(15, 0, 0, 5, 1);
														// branch -> 0xadcf4
													}
												}
											}
											// 0xadcf4
											if (*(char *)g27 != 0) {
												// 0xadd00
												if (*(char *)g26 == 5) {
													// 0xadd0c
													v22 = g31 + 375;
													g21 = v22;
													v11 = v22;
													if (*(char *)v22 >= 4) {
														// 0xadd1c
														function_98800(1, 11, 20, 18);
														v11 = g21;
														// branch -> 0xadd30
													}
													// 0xadd30
													v12 = v11;
													if (*(char *)v11 >= 6) {
														// 0xadd3c
														function_98800(1, 18, 20, 24);
														v12 = g21;
														// branch -> 0xadd50
													}
													// 0xadd50
													if (*(char *)v12 >= 7) {
														// 0xadd5c
														function_c71c8();
														// branch -> 0xadd60
													}
													// 0xadd60
													g22 = 0;
													v13 = g36;
													g21 = v13;
													if (*(int32_t *)g35 > 0) {
														function_9d6e4(*(int32_t *)v13);
														v23 = g21 + 4;
														g21 = v23;
														v24 = g22 + 1;
														g22 = v24;
														while (v24 < *(int32_t *)g35) {
															// 0xadd70
															function_9d6e4(*(int32_t *)v23);
															v23 = g21 + 4;
															g21 = v23;
															v24 = g22 + 1;
															g22 = v24;
															// continue -> 0xadd70
														}
														// 0xadd8c
														v48 = g31;
														if (*(char *)g28 == *(char *)(v48 + 360)) {
															// 0xadd9c
															if (*(char *)g27 == 0) {
																// 0xadda8
																v49 = (char *)(v48 + 376);
																v50 = *v49;
																if (v50 != 1) {
																	// 0xaddb8
																	if (v50 < 3) {
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																}
																// 0xaddc0
																v51 = *(char *)(v48 + 362);
																if (v51 != 2) {
																	// 0xaddcc
																	if (v51 != 3) {
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																}
																// 0xaddd4
																*v49 = 2;
																// branch -> 0xadddc
															}
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
											}
											// 0xadd8c
											v48 = g31;
											if (*(char *)g28 == *(char *)(v48 + 360)) {
												// 0xadd9c
												if (*(char *)g27 == 0) {
													// 0xadda8
													v49 = (char *)(v48 + 376);
													v50 = *v49;
													if (v50 != 1) {
														// 0xaddb8
														if (v50 < 3) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0xaddc0
													v51 = *(char *)(v48 + 362);
													if (v51 != 2) {
														// 0xaddcc
														if (v51 != 3) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0xaddd4
													*v49 = 2;
													// branch -> 0xadddc
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0xadc6c
									if (v45 == 2) {
										// 0xadc74
										if (*(char *)(v9 + 39) < 5) {
											// 0xadc94
											// branch -> 0xadca4
										} else {
											// 0xadc80
											*(int32_t *)(g32 + 68) = 123;
											*(int32_t *)(g32 + 388) = -1;
											// branch -> 0xadca4
										}
										// 0xadca4
										v10 = g31;
										v46 = (int32_t) * (char *)(v10 + 96);
										if ((int32_t) * (char *)g28 == v46 + 1) {
											// 0xadcb8
											if (*(char *)(v10 + 98) == 2) {
												// 0xadcc4
												v44 = (char *)(v10 + 111);
												if (*v44 == 0) {
													// 0xadcd4
													*v44 = 1;
													function_60808(15, 0, 0, 5, 1);
													// branch -> 0xadcf4
												}
											}
										}
										// 0xadcf4
										if (*(char *)g27 != 0) {
											// 0xadd00
											if (*(char *)g26 == 5) {
												// 0xadd0c
												v22 = g31 + 375;
												g21 = v22;
												v11 = v22;
												if (*(char *)v22 >= 4) {
													// 0xadd1c
													function_98800(1, 11, 20, 18);
													v11 = g21;
													// branch -> 0xadd30
												}
												// 0xadd30
												v12 = v11;
												if (*(char *)v11 >= 6) {
													// 0xadd3c
													function_98800(1, 18, 20, 24);
													v12 = g21;
													// branch -> 0xadd50
												}
												// 0xadd50
												if (*(char *)v12 >= 7) {
													// 0xadd5c
													function_c71c8();
													// branch -> 0xadd60
												}
												// 0xadd60
												g22 = 0;
												v13 = g36;
												g21 = v13;
												if (*(int32_t *)g35 > 0) {
													function_9d6e4(*(int32_t *)v13);
													v23 = g21 + 4;
													g21 = v23;
													v24 = g22 + 1;
													g22 = v24;
													while (v24 < *(int32_t *)g35) {
														// 0xadd70
														function_9d6e4(*(int32_t *)v23);
														v23 = g21 + 4;
														g21 = v23;
														v24 = g22 + 1;
														g22 = v24;
														// continue -> 0xadd70
													}
													// 0xadd8c
													v48 = g31;
													if (*(char *)g28 == *(char *)(v48 + 360)) {
														// 0xadd9c
														if (*(char *)g27 == 0) {
															// 0xadda8
															v49 = (char *)(v48 + 376);
															v50 = *v49;
															if (v50 != 1) {
																// 0xaddb8
																if (v50 < 3) {
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
															// 0xaddc0
															v51 = *(char *)(v48 + 362);
															if (v51 != 2) {
																// 0xaddcc
																if (v51 != 3) {
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
															// 0xaddd4
															*v49 = 2;
															// branch -> 0xadddc
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										}
										// 0xadd8c
										v48 = g31;
										if (*(char *)g28 == *(char *)(v48 + 360)) {
											// 0xadd9c
											if (*(char *)g27 == 0) {
												// 0xadda8
												v49 = (char *)(v48 + 376);
												v50 = *v49;
												if (v50 != 1) {
													// 0xaddb8
													if (v50 < 3) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0xaddc0
												v51 = *(char *)(v48 + 362);
												if (v51 != 2) {
													// 0xaddcc
													if (v51 != 3) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0xaddd4
												*v49 = 2;
												// branch -> 0xadddc
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0xadca4
								v10 = g31;
								v46 = (int32_t) * (char *)(v10 + 96);
								if ((int32_t) * (char *)g28 == v46 + 1) {
									// 0xadcb8
									if (*(char *)(v10 + 98) == 2) {
										// 0xadcc4
										v44 = (char *)(v10 + 111);
										if (*v44 == 0) {
											// 0xadcd4
											*v44 = 1;
											function_60808(15, 0, 0, 5, 1);
											// branch -> 0xadcf4
										}
									}
								}
								// 0xadcf4
								if (*(char *)g27 != 0) {
									// 0xadd00
									if (*(char *)g26 == 5) {
										// 0xadd0c
										v22 = g31 + 375;
										g21 = v22;
										v11 = v22;
										if (*(char *)v22 >= 4) {
											// 0xadd1c
											function_98800(1, 11, 20, 18);
											v11 = g21;
											// branch -> 0xadd30
										}
										// 0xadd30
										v12 = v11;
										if (*(char *)v11 >= 6) {
											// 0xadd3c
											function_98800(1, 18, 20, 24);
											v12 = g21;
											// branch -> 0xadd50
										}
										// 0xadd50
										if (*(char *)v12 >= 7) {
											// 0xadd5c
											function_c71c8();
											// branch -> 0xadd60
										}
										// 0xadd60
										g22 = 0;
										v13 = g36;
										g21 = v13;
										if (*(int32_t *)g35 > 0) {
											function_9d6e4(*(int32_t *)v13);
											v23 = g21 + 4;
											g21 = v23;
											v24 = g22 + 1;
											g22 = v24;
											while (v24 < *(int32_t *)g35) {
												// 0xadd70
												function_9d6e4(*(int32_t *)v23);
												v23 = g21 + 4;
												g21 = v23;
												v24 = g22 + 1;
												g22 = v24;
												// continue -> 0xadd70
											}
											// 0xadd8c
											v48 = g31;
											if (*(char *)g28 == *(char *)(v48 + 360)) {
												// 0xadd9c
												if (*(char *)g27 == 0) {
													// 0xadda8
													v49 = (char *)(v48 + 376);
													v50 = *v49;
													if (v50 != 1) {
														// 0xaddb8
														if (v50 < 3) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0xaddc0
													v51 = *(char *)(v48 + 362);
													if (v51 != 2) {
														// 0xaddcc
														if (v51 != 3) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0xaddd4
													*v49 = 2;
													// branch -> 0xadddc
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// 0xadd8c
								v48 = g31;
								if (*(char *)g28 == *(char *)(v48 + 360)) {
									// 0xadd9c
									if (*(char *)g27 == 0) {
										// 0xadda8
										v49 = (char *)(v48 + 376);
										v50 = *v49;
										if (v50 != 1) {
											// 0xaddb8
											if (v50 < 3) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0xaddc0
										v51 = *(char *)(v48 + 362);
										if (v51 != 2) {
											// 0xaddcc
											if (v51 != 3) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0xaddd4
										*v49 = 2;
										// branch -> 0xadddc
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0xadbe0
							v20 = (char *)g33;
							*v20 = 9;
							g22 = 0x1000000 * (int32_t)*v20 / 0x1000000;
							v40 = *(int32_t *)g25;
							v41 = *(int32_t *)g24;
							v42 = *(int32_t *)g29;
							v43 = *(int32_t *)g30;
							function_528e8(v43, v42, (v40 / 2 | v40 & -0x80000000) + 4 + v43, v42 + (v41 / 2 | v41 & -0x80000000));
							*(char *)g33 = (char)g22;
							// branch -> 0xadc1c
						}
					}
					// 0xadc1c
					v9 = g31;
					if (*(char *)g28 == *(char *)(v9 + 24)) {
						// 0xadc2c
						v45 = *(char *)(v9 + 26);
						if (v45 == 1) {
							// 0xadc38
							v21 = v9 + 39;
							g21 = v21;
							if (*(char *)v21 == 0) {
								// 0xadc48
								function_60808(19, 0, 0, 5, 1);
								*(char *)g21 = 1;
								// branch -> 0xadca4
								// 0xadca4
								v10 = g31;
								v46 = (int32_t) * (char *)(v10 + 96);
								if ((int32_t) * (char *)g28 == v46 + 1) {
									// 0xadcb8
									if (*(char *)(v10 + 98) == 2) {
										// 0xadcc4
										v44 = (char *)(v10 + 111);
										if (*v44 == 0) {
											// 0xadcd4
											*v44 = 1;
											function_60808(15, 0, 0, 5, 1);
											// branch -> 0xadcf4
										}
									}
								}
								// 0xadcf4
								if (*(char *)g27 != 0) {
									// 0xadd00
									if (*(char *)g26 == 5) {
										// 0xadd0c
										v22 = g31 + 375;
										g21 = v22;
										v11 = v22;
										if (*(char *)v22 >= 4) {
											// 0xadd1c
											function_98800(1, 11, 20, 18);
											v11 = g21;
											// branch -> 0xadd30
										}
										// 0xadd30
										v12 = v11;
										if (*(char *)v11 >= 6) {
											// 0xadd3c
											function_98800(1, 18, 20, 24);
											v12 = g21;
											// branch -> 0xadd50
										}
										// 0xadd50
										if (*(char *)v12 >= 7) {
											// 0xadd5c
											function_c71c8();
											// branch -> 0xadd60
										}
										// 0xadd60
										g22 = 0;
										v13 = g36;
										g21 = v13;
										if (*(int32_t *)g35 > 0) {
											function_9d6e4(*(int32_t *)v13);
											v23 = g21 + 4;
											g21 = v23;
											v24 = g22 + 1;
											g22 = v24;
											while (v24 < *(int32_t *)g35) {
												// 0xadd70
												function_9d6e4(*(int32_t *)v23);
												v23 = g21 + 4;
												g21 = v23;
												v24 = g22 + 1;
												g22 = v24;
												// continue -> 0xadd70
											}
											// 0xadd8c
											v48 = g31;
											if (*(char *)g28 == *(char *)(v48 + 360)) {
												// 0xadd9c
												if (*(char *)g27 == 0) {
													// 0xadda8
													v49 = (char *)(v48 + 376);
													v50 = *v49;
													if (v50 != 1) {
														// 0xaddb8
														if (v50 < 3) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0xaddc0
													v51 = *(char *)(v48 + 362);
													if (v51 != 2) {
														// 0xaddcc
														if (v51 != 3) {
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// 0xaddd4
													*v49 = 2;
													// branch -> 0xadddc
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// 0xadd8c
								v48 = g31;
								if (*(char *)g28 == *(char *)(v48 + 360)) {
									// 0xadd9c
									if (*(char *)g27 == 0) {
										// 0xadda8
										v49 = (char *)(v48 + 376);
										v50 = *v49;
										if (v50 != 1) {
											// 0xaddb8
											if (v50 < 3) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0xaddc0
										v51 = *(char *)(v48 + 362);
										if (v51 != 2) {
											// 0xaddcc
											if (v51 != 3) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0xaddd4
										*v49 = 2;
										// branch -> 0xadddc
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0xadc6c
						if (v45 == 2) {
							// 0xadc74
							if (*(char *)(v9 + 39) < 5) {
								// 0xadc94
								// branch -> 0xadca4
							} else {
								// 0xadc80
								*(int32_t *)(g32 + 68) = 123;
								*(int32_t *)(g32 + 388) = -1;
								// branch -> 0xadca4
							}
							// 0xadca4
							v10 = g31;
							v46 = (int32_t) * (char *)(v10 + 96);
							if ((int32_t) * (char *)g28 == v46 + 1) {
								// 0xadcb8
								if (*(char *)(v10 + 98) == 2) {
									// 0xadcc4
									v44 = (char *)(v10 + 111);
									if (*v44 == 0) {
										// 0xadcd4
										*v44 = 1;
										function_60808(15, 0, 0, 5, 1);
										// branch -> 0xadcf4
									}
								}
							}
							// 0xadcf4
							if (*(char *)g27 != 0) {
								// 0xadd00
								if (*(char *)g26 == 5) {
									// 0xadd0c
									v22 = g31 + 375;
									g21 = v22;
									v11 = v22;
									if (*(char *)v22 >= 4) {
										// 0xadd1c
										function_98800(1, 11, 20, 18);
										v11 = g21;
										// branch -> 0xadd30
									}
									// 0xadd30
									v12 = v11;
									if (*(char *)v11 >= 6) {
										// 0xadd3c
										function_98800(1, 18, 20, 24);
										v12 = g21;
										// branch -> 0xadd50
									}
									// 0xadd50
									if (*(char *)v12 >= 7) {
										// 0xadd5c
										function_c71c8();
										// branch -> 0xadd60
									}
									// 0xadd60
									g22 = 0;
									v13 = g36;
									g21 = v13;
									if (*(int32_t *)g35 > 0) {
										function_9d6e4(*(int32_t *)v13);
										v23 = g21 + 4;
										g21 = v23;
										v24 = g22 + 1;
										g22 = v24;
										while (v24 < *(int32_t *)g35) {
											// 0xadd70
											function_9d6e4(*(int32_t *)v23);
											v23 = g21 + 4;
											g21 = v23;
											v24 = g22 + 1;
											g22 = v24;
											// continue -> 0xadd70
										}
										// 0xadd8c
										v48 = g31;
										if (*(char *)g28 == *(char *)(v48 + 360)) {
											// 0xadd9c
											if (*(char *)g27 == 0) {
												// 0xadda8
												v49 = (char *)(v48 + 376);
												v50 = *v49;
												if (v50 != 1) {
													// 0xaddb8
													if (v50 < 3) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0xaddc0
												v51 = *(char *)(v48 + 362);
												if (v51 != 2) {
													// 0xaddcc
													if (v51 != 3) {
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// 0xaddd4
												*v49 = 2;
												// branch -> 0xadddc
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// 0xadd8c
							v48 = g31;
							if (*(char *)g28 == *(char *)(v48 + 360)) {
								// 0xadd9c
								if (*(char *)g27 == 0) {
									// 0xadda8
									v49 = (char *)(v48 + 376);
									v50 = *v49;
									if (v50 != 1) {
										// 0xaddb8
										if (v50 < 3) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0xaddc0
									v51 = *(char *)(v48 + 362);
									if (v51 != 2) {
										// 0xaddcc
										if (v51 != 3) {
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0xaddd4
									*v49 = 2;
									// branch -> 0xadddc
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0xadca4
					v10 = g31;
					v46 = (int32_t) * (char *)(v10 + 96);
					if ((int32_t) * (char *)g28 == v46 + 1) {
						// 0xadcb8
						if (*(char *)(v10 + 98) == 2) {
							// 0xadcc4
							v44 = (char *)(v10 + 111);
							if (*v44 == 0) {
								// 0xadcd4
								*v44 = 1;
								function_60808(15, 0, 0, 5, 1);
								// branch -> 0xadcf4
							}
						}
					}
					// 0xadcf4
					if (*(char *)g27 != 0) {
						// 0xadd00
						if (*(char *)g26 == 5) {
							// 0xadd0c
							v22 = g31 + 375;
							g21 = v22;
							v11 = v22;
							if (*(char *)v22 >= 4) {
								// 0xadd1c
								function_98800(1, 11, 20, 18);
								v11 = g21;
								// branch -> 0xadd30
							}
							// 0xadd30
							v12 = v11;
							if (*(char *)v11 >= 6) {
								// 0xadd3c
								function_98800(1, 18, 20, 24);
								v12 = g21;
								// branch -> 0xadd50
							}
							// 0xadd50
							if (*(char *)v12 >= 7) {
								// 0xadd5c
								function_c71c8();
								// branch -> 0xadd60
							}
							// 0xadd60
							g22 = 0;
							v13 = g36;
							g21 = v13;
							if (*(int32_t *)g35 > 0) {
								function_9d6e4(*(int32_t *)v13);
								v23 = g21 + 4;
								g21 = v23;
								v24 = g22 + 1;
								g22 = v24;
								while (v24 < *(int32_t *)g35) {
									// 0xadd70
									function_9d6e4(*(int32_t *)v23);
									v23 = g21 + 4;
									g21 = v23;
									v24 = g22 + 1;
									g22 = v24;
									// continue -> 0xadd70
								}
								// 0xadd8c
								v48 = g31;
								if (*(char *)g28 == *(char *)(v48 + 360)) {
									// 0xadd9c
									if (*(char *)g27 == 0) {
										// 0xadda8
										v49 = (char *)(v48 + 376);
										v50 = *v49;
										if (v50 != 1) {
											// 0xaddb8
											if (v50 < 3) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0xaddc0
										v51 = *(char *)(v48 + 362);
										if (v51 != 2) {
											// 0xaddcc
											if (v51 != 3) {
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0xaddd4
										*v49 = 2;
										// branch -> 0xadddc
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// 0xadd8c
					v48 = g31;
					if (*(char *)g28 == *(char *)(v48 + 360)) {
						// 0xadd9c
						if (*(char *)g27 == 0) {
							// 0xadda8
							v49 = (char *)(v48 + 376);
							v50 = *v49;
							if (v50 != 1) {
								// 0xaddb8
								if (v50 < 3) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0xaddc0
							v51 = *(char *)(v48 + 362);
							if (v51 != 2) {
								// 0xaddcc
								if (v51 != 3) {
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0xaddd4
							*v49 = 2;
							// branch -> 0xadddc
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0xada6c
			if (QuestStatus(7) != 0) {
				// 0xada7c
				v14 = g31 + 183;
				g22 = v14;
				v5 = v14;
				if (*(char *)v14 == 1) {
					// 0xada8c
					v25 = *(int32_t *)g24 + *(int32_t *)g29;
					v26 = *(int32_t *)g25 + *(int32_t *)g30;
					function_98800(v26 - 2, v25 - 2, v26 + 1, v25 + 1);
					v5 = g22;
					// branch -> 0xadab8
				}
				// 0xadab8
				v7 = v5;
				if (*(char *)v5 == 2) {
					// 0xadac4
					v27 = *(int32_t *)g24 + *(int32_t *)g29;
					v28 = *(int32_t *)g25 + *(int32_t *)g30;
					function_98800(v28 - 2, v27 - 2, v28 + 1, v27 + 1);
					v29 = *(int32_t *)g25;
					v30 = *(int32_t *)g24;
					v31 = *(int32_t *)g29;
					v32 = *(int32_t *)g30;
					function_98800(v32, v31, (v29 / 2 | v29 & -0x80000000) + 2 + v32, (v30 / 2 | v30 & -0x80000000) - 2 + v31);
					g20 = 0;
					v6 = g36;
					g21 = v6;
					if (*(int32_t *)g35 > 0) {
						function_9d6e4(*(int32_t *)v6);
						v15 = g21 + 4;
						g21 = v15;
						v16 = g20 + 1;
						g20 = v16;
						while (v16 < *(int32_t *)g35) {
							// 0xadb2c
							function_9d6e4(*(int32_t *)v15);
							v15 = g21 + 4;
							g21 = v15;
							v16 = g20 + 1;
							g20 = v16;
							// continue -> 0xadb2c
						}
						// 0xadb48
						v17 = (char *)g33;
						*v17 = 9;
						g21 = 0x1000000 * (int32_t)*v17 / 0x1000000;
						v33 = *(int32_t *)g25;
						v34 = *(int32_t *)g24;
						v35 = *(int32_t *)g29;
						v36 = *(int32_t *)g30;
						function_528e8(v36, v35, (v33 / 2 | v33 & -0x80000000) + 4 + v36, v35 + (v34 / 2 | v34 & -0x80000000));
						*(char *)g33 = (char)g21;
						// branch -> 0xadb84
						// 0xadb84
						if (*(char *)g22 == 3) {
							// 0xadb90
							v37 = *(int32_t *)g24;
							v38 = *(int32_t *)g30;
							v39 = *(int32_t *)g29;
							function_98800(v38, v39, v38 + *(int32_t *)g25 + 1, v37 + 1 + v39);
							g22 = 0;
							v8 = g36;
							g21 = v8;
							if (*(int32_t *)g35 > 0) {
								function_9d6e4(*(int32_t *)v8);
								v18 = g21 + 4;
								g21 = v18;
								v19 = g22 + 1;
								g22 = v19;
								while (v19 < *(int32_t *)g35) {
									// 0xadbc4
									function_9d6e4(*(int32_t *)v18);
									v18 = g21 + 4;
									g21 = v18;
									v19 = g22 + 1;
									g22 = v19;
									// continue -> 0xadbc4
								}
								// 0xadbe0
								v20 = (char *)g33;
								*v20 = 9;
								g22 = 0x1000000 * (int32_t)*v20 / 0x1000000;
								v40 = *(int32_t *)g25;
								v41 = *(int32_t *)g24;
								v42 = *(int32_t *)g29;
								v43 = *(int32_t *)g30;
								function_528e8(v43, v42, (v40 / 2 | v40 & -0x80000000) + 4 + v43, v42 + (v41 / 2 | v41 & -0x80000000));
								*(char *)g33 = (char)g22;
								// branch -> 0xadc1c
								// 0xadc1c
								v9 = g31;
								if (*(char *)g28 == *(char *)(v9 + 24)) {
									// 0xadc2c
									v45 = *(char *)(v9 + 26);
									if (v45 == 1) {
										// 0xadc38
										v21 = v9 + 39;
										g21 = v21;
										if (*(char *)v21 == 0) {
											// 0xadc48
											function_60808(19, 0, 0, 5, 1);
											*(char *)g21 = 1;
											// branch -> 0xadca4
											// 0xadca4
											v10 = g31;
											v46 = (int32_t) * (char *)(v10 + 96);
											if ((int32_t) * (char *)g28 == v46 + 1) {
												// 0xadcb8
												if (*(char *)(v10 + 98) == 2) {
													// 0xadcc4
													v44 = (char *)(v10 + 111);
													if (*v44 == 0) {
														// 0xadcd4
														*v44 = 1;
														function_60808(15, 0, 0, 5, 1);
														// branch -> 0xadcf4
													}
												}
											}
											// 0xadcf4
											if (*(char *)g27 != 0) {
												// 0xadd00
												if (*(char *)g26 == 5) {
													// 0xadd0c
													v22 = g31 + 375;
													g21 = v22;
													v11 = v22;
													if (*(char *)v22 >= 4) {
														// 0xadd1c
														function_98800(1, 11, 20, 18);
														v11 = g21;
														// branch -> 0xadd30
													}
													// 0xadd30
													v12 = v11;
													if (*(char *)v11 >= 6) {
														// 0xadd3c
														function_98800(1, 18, 20, 24);
														v12 = g21;
														// branch -> 0xadd50
													}
													// 0xadd50
													if (*(char *)v12 >= 7) {
														// 0xadd5c
														function_c71c8();
														// branch -> 0xadd60
													}
													// 0xadd60
													g22 = 0;
													v13 = g36;
													g21 = v13;
													if (*(int32_t *)g35 > 0) {
														function_9d6e4(*(int32_t *)v13);
														v23 = g21 + 4;
														g21 = v23;
														v24 = g22 + 1;
														g22 = v24;
														while (v24 < *(int32_t *)g35) {
															// 0xadd70
															function_9d6e4(*(int32_t *)v23);
															v23 = g21 + 4;
															g21 = v23;
															v24 = g22 + 1;
															g22 = v24;
															// continue -> 0xadd70
														}
														// 0xadd8c
														v48 = g31;
														if (*(char *)g28 == *(char *)(v48 + 360)) {
															// 0xadd9c
															if (*(char *)g27 == 0) {
																// 0xadda8
																v49 = (char *)(v48 + 376);
																v50 = *v49;
																if (v50 != 1) {
																	// 0xaddb8
																	if (v50 < 3) {
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																}
																// 0xaddc0
																v51 = *(char *)(v48 + 362);
																if (v51 != 2) {
																	// 0xaddcc
																	if (v51 != 3) {
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																}
																// 0xaddd4
																*v49 = 2;
																// branch -> 0xadddc
															}
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0xadc6c
									if (v45 == 2) {
										// 0xadc74
										if (*(char *)(v9 + 39) < 5) {
											// 0xadc94
											// branch -> 0xadca4
										} else {
											// 0xadc80
											*(int32_t *)(g32 + 68) = 123;
											*(int32_t *)(g32 + 388) = -1;
											// branch -> 0xadca4
										}
										// 0xadca4
										v10 = g31;
										v46 = (int32_t) * (char *)(v10 + 96);
										if ((int32_t) * (char *)g28 == v46 + 1) {
											// 0xadcb8
											if (*(char *)(v10 + 98) == 2) {
												// 0xadcc4
												v44 = (char *)(v10 + 111);
												if (*v44 == 0) {
													// 0xadcd4
													*v44 = 1;
													function_60808(15, 0, 0, 5, 1);
													// branch -> 0xadcf4
												}
											}
										}
										// 0xadcf4
										if (*(char *)g27 != 0) {
											// 0xadd00
											if (*(char *)g26 == 5) {
												// 0xadd0c
												v22 = g31 + 375;
												g21 = v22;
												v11 = v22;
												if (*(char *)v22 >= 4) {
													// 0xadd1c
													function_98800(1, 11, 20, 18);
													v11 = g21;
													// branch -> 0xadd30
												}
												// 0xadd30
												v12 = v11;
												if (*(char *)v11 >= 6) {
													// 0xadd3c
													function_98800(1, 18, 20, 24);
													v12 = g21;
													// branch -> 0xadd50
												}
												// 0xadd50
												if (*(char *)v12 >= 7) {
													// 0xadd5c
													function_c71c8();
													// branch -> 0xadd60
												}
												// 0xadd60
												g22 = 0;
												v13 = g36;
												g21 = v13;
												if (*(int32_t *)g35 > 0) {
													function_9d6e4(*(int32_t *)v13);
													v23 = g21 + 4;
													g21 = v23;
													v24 = g22 + 1;
													g22 = v24;
													while (v24 < *(int32_t *)g35) {
														// 0xadd70
														function_9d6e4(*(int32_t *)v23);
														v23 = g21 + 4;
														g21 = v23;
														v24 = g22 + 1;
														g22 = v24;
														// continue -> 0xadd70
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0xadca4
								v10 = g31;
								v46 = (int32_t) * (char *)(v10 + 96);
								if ((int32_t) * (char *)g28 == v46 + 1) {
									// 0xadcb8
									if (*(char *)(v10 + 98) == 2) {
										// 0xadcc4
										v44 = (char *)(v10 + 111);
										if (*v44 == 0) {
											// 0xadcd4
											*v44 = 1;
											function_60808(15, 0, 0, 5, 1);
											// branch -> 0xadcf4
										}
									}
								}
								// 0xadcf4
								if (*(char *)g27 != 0) {
									// 0xadd00
									if (*(char *)g26 == 5) {
										// 0xadd0c
										v22 = g31 + 375;
										g21 = v22;
										v11 = v22;
										if (*(char *)v22 >= 4) {
											// 0xadd1c
											function_98800(1, 11, 20, 18);
											v11 = g21;
											// branch -> 0xadd30
										}
										// 0xadd30
										v12 = v11;
										if (*(char *)v11 >= 6) {
											// 0xadd3c
											function_98800(1, 18, 20, 24);
											v12 = g21;
											// branch -> 0xadd50
										}
										// 0xadd50
										if (*(char *)v12 >= 7) {
											// 0xadd5c
											function_c71c8();
											// branch -> 0xadd60
										}
										// 0xadd60
										g22 = 0;
										v13 = g36;
										g21 = v13;
										if (*(int32_t *)g35 > 0) {
											function_9d6e4(*(int32_t *)v13);
											v23 = g21 + 4;
											g21 = v23;
											v24 = g22 + 1;
											g22 = v24;
											while (v24 < *(int32_t *)g35) {
												// 0xadd70
												function_9d6e4(*(int32_t *)v23);
												v23 = g21 + 4;
												g21 = v23;
												v24 = g22 + 1;
												g22 = v24;
												// continue -> 0xadd70
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0xadbe0
							v20 = (char *)g33;
							*v20 = 9;
							g22 = 0x1000000 * (int32_t)*v20 / 0x1000000;
							v40 = *(int32_t *)g25;
							v41 = *(int32_t *)g24;
							v42 = *(int32_t *)g29;
							v43 = *(int32_t *)g30;
							function_528e8(v43, v42, (v40 / 2 | v40 & -0x80000000) + 4 + v43, v42 + (v41 / 2 | v41 & -0x80000000));
							*(char *)g33 = (char)g22;
							// branch -> 0xadc1c
						}
						// 0xadc1c
						v9 = g31;
						if (*(char *)g28 == *(char *)(v9 + 24)) {
							// 0xadc2c
							v45 = *(char *)(v9 + 26);
							if (v45 == 1) {
								// 0xadc38
								v21 = v9 + 39;
								g21 = v21;
								if (*(char *)v21 == 0) {
									// 0xadc48
									function_60808(19, 0, 0, 5, 1);
									*(char *)g21 = 1;
									// branch -> 0xadca4
									// 0xadca4
									v10 = g31;
									v46 = (int32_t) * (char *)(v10 + 96);
									if ((int32_t) * (char *)g28 == v46 + 1) {
										// 0xadcb8
										if (*(char *)(v10 + 98) == 2) {
											// 0xadcc4
											v44 = (char *)(v10 + 111);
											if (*v44 == 0) {
												// 0xadcd4
												*v44 = 1;
												function_60808(15, 0, 0, 5, 1);
												// branch -> 0xadcf4
											}
										}
									}
									// 0xadcf4
									if (*(char *)g27 != 0) {
										// 0xadd00
										if (*(char *)g26 == 5) {
											// 0xadd0c
											v22 = g31 + 375;
											g21 = v22;
											v11 = v22;
											if (*(char *)v22 >= 4) {
												// 0xadd1c
												function_98800(1, 11, 20, 18);
												v11 = g21;
												// branch -> 0xadd30
											}
											// 0xadd30
											v12 = v11;
											if (*(char *)v11 >= 6) {
												// 0xadd3c
												function_98800(1, 18, 20, 24);
												v12 = g21;
												// branch -> 0xadd50
											}
											// 0xadd50
											if (*(char *)v12 >= 7) {
												// 0xadd5c
												function_c71c8();
												// branch -> 0xadd60
											}
											// 0xadd60
											g22 = 0;
											v13 = g36;
											g21 = v13;
											if (*(int32_t *)g35 > 0) {
												function_9d6e4(*(int32_t *)v13);
												v23 = g21 + 4;
												g21 = v23;
												v24 = g22 + 1;
												g22 = v24;
												while (v24 < *(int32_t *)g35) {
													// 0xadd70
													function_9d6e4(*(int32_t *)v23);
													v23 = g21 + 4;
													g21 = v23;
													v24 = g22 + 1;
													g22 = v24;
													// continue -> 0xadd70
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0xadc6c
							if (v45 == 2) {
								// 0xadc74
								if (*(char *)(v9 + 39) < 5) {
									// 0xadc94
									// branch -> 0xadca4
								} else {
									// 0xadc80
									*(int32_t *)(g32 + 68) = 123;
									*(int32_t *)(g32 + 388) = -1;
									// branch -> 0xadca4
								}
								// 0xadca4
								v10 = g31;
								v46 = (int32_t) * (char *)(v10 + 96);
								if ((int32_t) * (char *)g28 == v46 + 1) {
									// 0xadcb8
									if (*(char *)(v10 + 98) == 2) {
										// 0xadcc4
										v44 = (char *)(v10 + 111);
										if (*v44 == 0) {
											// 0xadcd4
											*v44 = 1;
											function_60808(15, 0, 0, 5, 1);
											// branch -> 0xadcf4
										}
									}
								}
								// 0xadcf4
								if (*(char *)g27 != 0) {
									// 0xadd00
									if (*(char *)g26 == 5) {
										// 0xadd0c
										v22 = g31 + 375;
										g21 = v22;
										v11 = v22;
										if (*(char *)v22 >= 4) {
											// 0xadd1c
											function_98800(1, 11, 20, 18);
											v11 = g21;
											// branch -> 0xadd30
										}
										// 0xadd30
										v12 = v11;
										if (*(char *)v11 >= 6) {
											// 0xadd3c
											function_98800(1, 18, 20, 24);
											v12 = g21;
											// branch -> 0xadd50
										}
										// 0xadd50
										if (*(char *)v12 >= 7) {
											// 0xadd5c
											function_c71c8();
											// branch -> 0xadd60
										}
										// 0xadd60
										g22 = 0;
										v13 = g36;
										g21 = v13;
										if (*(int32_t *)g35 > 0) {
											function_9d6e4(*(int32_t *)v13);
											v23 = g21 + 4;
											g21 = v23;
											v24 = g22 + 1;
											g22 = v24;
											while (v24 < *(int32_t *)g35) {
												// 0xadd70
												function_9d6e4(*(int32_t *)v23);
												v23 = g21 + 4;
												g21 = v23;
												v24 = g22 + 1;
												g22 = v24;
												// continue -> 0xadd70
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0xadca4
						v10 = g31;
						v46 = (int32_t) * (char *)(v10 + 96);
						if ((int32_t) * (char *)g28 == v46 + 1) {
							// 0xadcb8
							if (*(char *)(v10 + 98) == 2) {
								// 0xadcc4
								v44 = (char *)(v10 + 111);
								if (*v44 == 0) {
									// 0xadcd4
									*v44 = 1;
									function_60808(15, 0, 0, 5, 1);
									// branch -> 0xadcf4
								}
							}
						}
						// 0xadcf4
						if (*(char *)g27 != 0) {
							// 0xadd00
							if (*(char *)g26 == 5) {
								// 0xadd0c
								v22 = g31 + 375;
								g21 = v22;
								v11 = v22;
								if (*(char *)v22 >= 4) {
									// 0xadd1c
									function_98800(1, 11, 20, 18);
									v11 = g21;
									// branch -> 0xadd30
								}
								// 0xadd30
								v12 = v11;
								if (*(char *)v11 >= 6) {
									// 0xadd3c
									function_98800(1, 18, 20, 24);
									v12 = g21;
									// branch -> 0xadd50
								}
								// 0xadd50
								if (*(char *)v12 >= 7) {
									// 0xadd5c
									function_c71c8();
									// branch -> 0xadd60
								}
								// 0xadd60
								g22 = 0;
								v13 = g36;
								g21 = v13;
								if (*(int32_t *)g35 > 0) {
									function_9d6e4(*(int32_t *)v13);
									v23 = g21 + 4;
									g21 = v23;
									v24 = g22 + 1;
									g22 = v24;
									while (v24 < *(int32_t *)g35) {
										// 0xadd70
										function_9d6e4(*(int32_t *)v23);
										v23 = g21 + 4;
										g21 = v23;
										v24 = g22 + 1;
										g22 = v24;
										// continue -> 0xadd70
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0xadb48
					v17 = (char *)g33;
					*v17 = 9;
					g21 = 0x1000000 * (int32_t)*v17 / 0x1000000;
					v33 = *(int32_t *)g25;
					v34 = *(int32_t *)g24;
					v35 = *(int32_t *)g29;
					v36 = *(int32_t *)g30;
					function_528e8(v36, v35, (v33 / 2 | v33 & -0x80000000) + 4 + v36, v35 + (v34 / 2 | v34 & -0x80000000));
					*(char *)g33 = (char)g21;
					v7 = g22;
					// branch -> 0xadb84
				}
				// 0xadb84
				if (*(char *)v7 == 3) {
					// 0xadb90
					v37 = *(int32_t *)g24;
					v38 = *(int32_t *)g30;
					v39 = *(int32_t *)g29;
					function_98800(v38, v39, v38 + *(int32_t *)g25 + 1, v37 + 1 + v39);
					g22 = 0;
					v8 = g36;
					g21 = v8;
					if (*(int32_t *)g35 > 0) {
						function_9d6e4(*(int32_t *)v8);
						v18 = g21 + 4;
						g21 = v18;
						v19 = g22 + 1;
						g22 = v19;
						while (v19 < *(int32_t *)g35) {
							// 0xadbc4
							function_9d6e4(*(int32_t *)v18);
							v18 = g21 + 4;
							g21 = v18;
							v19 = g22 + 1;
							g22 = v19;
							// continue -> 0xadbc4
						}
						// 0xadbe0
						v20 = (char *)g33;
						*v20 = 9;
						g22 = 0x1000000 * (int32_t)*v20 / 0x1000000;
						v40 = *(int32_t *)g25;
						v41 = *(int32_t *)g24;
						v42 = *(int32_t *)g29;
						v43 = *(int32_t *)g30;
						function_528e8(v43, v42, (v40 / 2 | v40 & -0x80000000) + 4 + v43, v42 + (v41 / 2 | v41 & -0x80000000));
						*(char *)g33 = (char)g22;
						// branch -> 0xadc1c
						// 0xadc1c
						v9 = g31;
						if (*(char *)g28 == *(char *)(v9 + 24)) {
							// 0xadc2c
							v45 = *(char *)(v9 + 26);
							if (v45 == 1) {
								// 0xadc38
								v21 = v9 + 39;
								g21 = v21;
								if (*(char *)v21 == 0) {
									// 0xadc48
									function_60808(19, 0, 0, 5, 1);
									*(char *)g21 = 1;
									// branch -> 0xadca4
									// 0xadca4
									v10 = g31;
									v46 = (int32_t) * (char *)(v10 + 96);
									if ((int32_t) * (char *)g28 == v46 + 1) {
										// 0xadcb8
										if (*(char *)(v10 + 98) == 2) {
											// 0xadcc4
											v44 = (char *)(v10 + 111);
											if (*v44 == 0) {
												// 0xadcd4
												*v44 = 1;
												function_60808(15, 0, 0, 5, 1);
												// branch -> 0xadcf4
											}
										}
									}
									// 0xadcf4
									if (*(char *)g27 != 0) {
										// 0xadd00
										if (*(char *)g26 == 5) {
											// 0xadd0c
											v22 = g31 + 375;
											g21 = v22;
											v11 = v22;
											if (*(char *)v22 >= 4) {
												// 0xadd1c
												function_98800(1, 11, 20, 18);
												v11 = g21;
												// branch -> 0xadd30
											}
											// 0xadd30
											v12 = v11;
											if (*(char *)v11 >= 6) {
												// 0xadd3c
												function_98800(1, 18, 20, 24);
												v12 = g21;
												// branch -> 0xadd50
											}
											// 0xadd50
											if (*(char *)v12 >= 7) {
												// 0xadd5c
												function_c71c8();
												// branch -> 0xadd60
											}
											// 0xadd60
											g22 = 0;
											v13 = g36;
											g21 = v13;
											if (*(int32_t *)g35 > 0) {
												function_9d6e4(*(int32_t *)v13);
												v23 = g21 + 4;
												g21 = v23;
												v24 = g22 + 1;
												g22 = v24;
												while (v24 < *(int32_t *)g35) {
													// 0xadd70
													function_9d6e4(*(int32_t *)v23);
													v23 = g21 + 4;
													g21 = v23;
													v24 = g22 + 1;
													g22 = v24;
													// continue -> 0xadd70
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0xadc6c
							if (v45 == 2) {
								// 0xadc74
								if (*(char *)(v9 + 39) < 5) {
									// 0xadc94
									// branch -> 0xadca4
								} else {
									// 0xadc80
									*(int32_t *)(g32 + 68) = 123;
									*(int32_t *)(g32 + 388) = -1;
									// branch -> 0xadca4
								}
								// 0xadca4
								v10 = g31;
								v46 = (int32_t) * (char *)(v10 + 96);
								if ((int32_t) * (char *)g28 == v46 + 1) {
									// 0xadcb8
									if (*(char *)(v10 + 98) == 2) {
										// 0xadcc4
										v44 = (char *)(v10 + 111);
										if (*v44 == 0) {
											// 0xadcd4
											*v44 = 1;
											function_60808(15, 0, 0, 5, 1);
											// branch -> 0xadcf4
										}
									}
								}
								// 0xadcf4
								if (*(char *)g27 != 0) {
									// 0xadd00
									if (*(char *)g26 == 5) {
										// 0xadd0c
										v22 = g31 + 375;
										g21 = v22;
										v11 = v22;
										if (*(char *)v22 >= 4) {
											// 0xadd1c
											function_98800(1, 11, 20, 18);
											v11 = g21;
											// branch -> 0xadd30
										}
										// 0xadd30
										v12 = v11;
										if (*(char *)v11 >= 6) {
											// 0xadd3c
											function_98800(1, 18, 20, 24);
											v12 = g21;
											// branch -> 0xadd50
										}
										// 0xadd50
										if (*(char *)v12 >= 7) {
											// 0xadd5c
											function_c71c8();
											// branch -> 0xadd60
										}
										// 0xadd60
										g22 = 0;
										v13 = g36;
										g21 = v13;
										if (*(int32_t *)g35 > 0) {
											function_9d6e4(*(int32_t *)v13);
											v23 = g21 + 4;
											g21 = v23;
											v24 = g22 + 1;
											g22 = v24;
											while (v24 < *(int32_t *)g35) {
												// 0xadd70
												function_9d6e4(*(int32_t *)v23);
												v23 = g21 + 4;
												g21 = v23;
												v24 = g22 + 1;
												g22 = v24;
												// continue -> 0xadd70
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0xadca4
						v10 = g31;
						v46 = (int32_t) * (char *)(v10 + 96);
						if ((int32_t) * (char *)g28 == v46 + 1) {
							// 0xadcb8
							if (*(char *)(v10 + 98) == 2) {
								// 0xadcc4
								v44 = (char *)(v10 + 111);
								if (*v44 == 0) {
									// 0xadcd4
									*v44 = 1;
									function_60808(15, 0, 0, 5, 1);
									// branch -> 0xadcf4
								}
							}
						}
						// 0xadcf4
						if (*(char *)g27 != 0) {
							// 0xadd00
							if (*(char *)g26 == 5) {
								// 0xadd0c
								v22 = g31 + 375;
								g21 = v22;
								v11 = v22;
								if (*(char *)v22 >= 4) {
									// 0xadd1c
									function_98800(1, 11, 20, 18);
									v11 = g21;
									// branch -> 0xadd30
								}
								// 0xadd30
								v12 = v11;
								if (*(char *)v11 >= 6) {
									// 0xadd3c
									function_98800(1, 18, 20, 24);
									v12 = g21;
									// branch -> 0xadd50
								}
								// 0xadd50
								if (*(char *)v12 >= 7) {
									// 0xadd5c
									function_c71c8();
									// branch -> 0xadd60
								}
								// 0xadd60
								g22 = 0;
								v13 = g36;
								g21 = v13;
								if (*(int32_t *)g35 > 0) {
									function_9d6e4(*(int32_t *)v13);
									v23 = g21 + 4;
									g21 = v23;
									v24 = g22 + 1;
									g22 = v24;
									while (v24 < *(int32_t *)g35) {
										// 0xadd70
										function_9d6e4(*(int32_t *)v23);
										v23 = g21 + 4;
										g21 = v23;
										v24 = g22 + 1;
										g22 = v24;
										// continue -> 0xadd70
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0xadbe0
					v20 = (char *)g33;
					*v20 = 9;
					g22 = 0x1000000 * (int32_t)*v20 / 0x1000000;
					v40 = *(int32_t *)g25;
					v41 = *(int32_t *)g24;
					v42 = *(int32_t *)g29;
					v43 = *(int32_t *)g30;
					function_528e8(v43, v42, (v40 / 2 | v40 & -0x80000000) + 4 + v43, v42 + (v41 / 2 | v41 & -0x80000000));
					*(char *)g33 = (char)g22;
					// branch -> 0xadc1c
				}
			}
			// 0xadc1c
			v9 = g31;
			if (*(char *)g28 == *(char *)(v9 + 24)) {
				// 0xadc2c
				v45 = *(char *)(v9 + 26);
				if (v45 == 1) {
					// 0xadc38
					v21 = v9 + 39;
					g21 = v21;
					if (*(char *)v21 == 0) {
						// 0xadc48
						function_60808(19, 0, 0, 5, 1);
						*(char *)g21 = 1;
						// branch -> 0xadca4
						// 0xadca4
						v10 = g31;
						v46 = (int32_t) * (char *)(v10 + 96);
						if ((int32_t) * (char *)g28 == v46 + 1) {
							// 0xadcb8
							if (*(char *)(v10 + 98) == 2) {
								// 0xadcc4
								v44 = (char *)(v10 + 111);
								if (*v44 == 0) {
									// 0xadcd4
									*v44 = 1;
									function_60808(15, 0, 0, 5, 1);
									// branch -> 0xadcf4
								}
							}
						}
						// 0xadcf4
						if (*(char *)g27 != 0) {
							// 0xadd00
							if (*(char *)g26 == 5) {
								// 0xadd0c
								v22 = g31 + 375;
								g21 = v22;
								v11 = v22;
								if (*(char *)v22 >= 4) {
									// 0xadd1c
									function_98800(1, 11, 20, 18);
									v11 = g21;
									// branch -> 0xadd30
								}
								// 0xadd30
								v12 = v11;
								if (*(char *)v11 >= 6) {
									// 0xadd3c
									function_98800(1, 18, 20, 24);
									v12 = g21;
									// branch -> 0xadd50
								}
								// 0xadd50
								if (*(char *)v12 >= 7) {
									// 0xadd5c
									function_c71c8();
									// branch -> 0xadd60
								}
								// 0xadd60
								g22 = 0;
								v13 = g36;
								g21 = v13;
								if (*(int32_t *)g35 > 0) {
									function_9d6e4(*(int32_t *)v13);
									v23 = g21 + 4;
									g21 = v23;
									v24 = g22 + 1;
									g22 = v24;
									while (v24 < *(int32_t *)g35) {
										// 0xadd70
										function_9d6e4(*(int32_t *)v23);
										v23 = g21 + 4;
										g21 = v23;
										v24 = g22 + 1;
										g22 = v24;
										// continue -> 0xadd70
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0xadc6c
				if (v45 == 2) {
					// 0xadc74
					if (*(char *)(v9 + 39) < 5) {
						// 0xadc94
						// branch -> 0xadca4
					} else {
						// 0xadc80
						*(int32_t *)(g32 + 68) = 123;
						*(int32_t *)(g32 + 388) = -1;
						// branch -> 0xadca4
					}
					// 0xadca4
					v10 = g31;
					v46 = (int32_t) * (char *)(v10 + 96);
					if ((int32_t) * (char *)g28 == v46 + 1) {
						// 0xadcb8
						if (*(char *)(v10 + 98) == 2) {
							// 0xadcc4
							v44 = (char *)(v10 + 111);
							if (*v44 == 0) {
								// 0xadcd4
								*v44 = 1;
								function_60808(15, 0, 0, 5, 1);
								// branch -> 0xadcf4
							}
						}
					}
					// 0xadcf4
					if (*(char *)g27 != 0) {
						// 0xadd00
						if (*(char *)g26 == 5) {
							// 0xadd0c
							v22 = g31 + 375;
							g21 = v22;
							v11 = v22;
							if (*(char *)v22 >= 4) {
								// 0xadd1c
								function_98800(1, 11, 20, 18);
								v11 = g21;
								// branch -> 0xadd30
							}
							// 0xadd30
							v12 = v11;
							if (*(char *)v11 >= 6) {
								// 0xadd3c
								function_98800(1, 18, 20, 24);
								v12 = g21;
								// branch -> 0xadd50
							}
							// 0xadd50
							if (*(char *)v12 >= 7) {
								// 0xadd5c
								function_c71c8();
								// branch -> 0xadd60
							}
							// 0xadd60
							g22 = 0;
							v13 = g36;
							g21 = v13;
							if (*(int32_t *)g35 > 0) {
								function_9d6e4(*(int32_t *)v13);
								v23 = g21 + 4;
								g21 = v23;
								v24 = g22 + 1;
								g22 = v24;
								while (v24 < *(int32_t *)g35) {
									// 0xadd70
									function_9d6e4(*(int32_t *)v23);
									v23 = g21 + 4;
									g21 = v23;
									v24 = g22 + 1;
									g22 = v24;
									// continue -> 0xadd70
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0xadca4
			v10 = g31;
			v46 = (int32_t) * (char *)(v10 + 96);
			if ((int32_t) * (char *)g28 == v46 + 1) {
				// 0xadcb8
				if (*(char *)(v10 + 98) == 2) {
					// 0xadcc4
					v44 = (char *)(v10 + 111);
					if (*v44 == 0) {
						// 0xadcd4
						*v44 = 1;
						function_60808(15, 0, 0, 5, 1);
						// branch -> 0xadcf4
					}
				}
			}
			// 0xadcf4
			if (*(char *)g27 != 0) {
				// 0xadd00
				if (*(char *)g26 == 5) {
					// 0xadd0c
					v22 = g31 + 375;
					g21 = v22;
					v11 = v22;
					if (*(char *)v22 >= 4) {
						// 0xadd1c
						function_98800(1, 11, 20, 18);
						v11 = g21;
						// branch -> 0xadd30
					}
					// 0xadd30
					v12 = v11;
					if (*(char *)v11 >= 6) {
						// 0xadd3c
						function_98800(1, 18, 20, 24);
						v12 = g21;
						// branch -> 0xadd50
					}
					// 0xadd50
					if (*(char *)v12 >= 7) {
						// 0xadd5c
						function_c71c8();
						// branch -> 0xadd60
					}
					// 0xadd60
					g22 = 0;
					v13 = g36;
					g21 = v13;
					if (*(int32_t *)g35 > 0) {
						function_9d6e4(*(int32_t *)v13);
						v23 = g21 + 4;
						g21 = v23;
						v24 = g22 + 1;
						g22 = v24;
						while (v24 < *(int32_t *)g35) {
							// 0xadd70
							function_9d6e4(*(int32_t *)v23);
							v23 = g21 + 4;
							g21 = v23;
							v24 = g22 + 1;
							g22 = v24;
							// continue -> 0xadd70
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
	// 0xada6c
	if (QuestStatus(7) != 0) {
		// 0xada7c
		v14 = g31 + 183;
		g22 = v14;
		v5 = v14;
		if (*(char *)v14 == 1) {
			// 0xada8c
			v25 = *(int32_t *)g24 + *(int32_t *)g29;
			v26 = *(int32_t *)g25 + *(int32_t *)g30;
			function_98800(v26 - 2, v25 - 2, v26 + 1, v25 + 1);
			v5 = g22;
			// branch -> 0xadab8
		}
		// 0xadab8
		v7 = v5;
		if (*(char *)v5 == 2) {
			// 0xadac4
			v27 = *(int32_t *)g24 + *(int32_t *)g29;
			v28 = *(int32_t *)g25 + *(int32_t *)g30;
			function_98800(v28 - 2, v27 - 2, v28 + 1, v27 + 1);
			v29 = *(int32_t *)g25;
			v30 = *(int32_t *)g24;
			v31 = *(int32_t *)g29;
			v32 = *(int32_t *)g30;
			function_98800(v32, v31, (v29 / 2 | v29 & -0x80000000) + 2 + v32, (v30 / 2 | v30 & -0x80000000) - 2 + v31);
			g20 = 0;
			v6 = g36;
			g21 = v6;
			if (*(int32_t *)g35 > 0) {
				function_9d6e4(*(int32_t *)v6);
				v15 = g21 + 4;
				g21 = v15;
				v16 = g20 + 1;
				g20 = v16;
				while (v16 < *(int32_t *)g35) {
					// 0xadb2c
					function_9d6e4(*(int32_t *)v15);
					v15 = g21 + 4;
					g21 = v15;
					v16 = g20 + 1;
					g20 = v16;
					// continue -> 0xadb2c
				}
				// 0xadb48
				v17 = (char *)g33;
				*v17 = 9;
				g21 = 0x1000000 * (int32_t)*v17 / 0x1000000;
				v33 = *(int32_t *)g25;
				v34 = *(int32_t *)g24;
				v35 = *(int32_t *)g29;
				v36 = *(int32_t *)g30;
				function_528e8(v36, v35, (v33 / 2 | v33 & -0x80000000) + 4 + v36, v35 + (v34 / 2 | v34 & -0x80000000));
				*(char *)g33 = (char)g21;
				// branch -> 0xadb84
				// 0xadb84
				if (*(char *)g22 == 3) {
					// 0xadb90
					v37 = *(int32_t *)g24;
					v38 = *(int32_t *)g30;
					v39 = *(int32_t *)g29;
					function_98800(v38, v39, v38 + *(int32_t *)g25 + 1, v37 + 1 + v39);
					g22 = 0;
					v8 = g36;
					g21 = v8;
					if (*(int32_t *)g35 > 0) {
						function_9d6e4(*(int32_t *)v8);
						v18 = g21 + 4;
						g21 = v18;
						v19 = g22 + 1;
						g22 = v19;
						while (v19 < *(int32_t *)g35) {
							// 0xadbc4
							function_9d6e4(*(int32_t *)v18);
							v18 = g21 + 4;
							g21 = v18;
							v19 = g22 + 1;
							g22 = v19;
							// continue -> 0xadbc4
						}
						// 0xadbe0
						v20 = (char *)g33;
						*v20 = 9;
						g22 = 0x1000000 * (int32_t)*v20 / 0x1000000;
						v40 = *(int32_t *)g25;
						v41 = *(int32_t *)g24;
						v42 = *(int32_t *)g29;
						v43 = *(int32_t *)g30;
						function_528e8(v43, v42, (v40 / 2 | v40 & -0x80000000) + 4 + v43, v42 + (v41 / 2 | v41 & -0x80000000));
						*(char *)g33 = (char)g22;
						// branch -> 0xadc1c
						// 0xadc1c
						v9 = g31;
						if (*(char *)g28 == *(char *)(v9 + 24)) {
							// 0xadc2c
							v45 = *(char *)(v9 + 26);
							if (v45 == 1) {
								// 0xadc38
								v21 = v9 + 39;
								g21 = v21;
								if (*(char *)v21 == 0) {
									// 0xadc48
									function_60808(19, 0, 0, 5, 1);
									*(char *)g21 = 1;
									// branch -> 0xadca4
									// 0xadca4
									v10 = g31;
									v46 = (int32_t) * (char *)(v10 + 96);
									if ((int32_t) * (char *)g28 == v46 + 1) {
										// 0xadcb8
										if (*(char *)(v10 + 98) == 2) {
											// 0xadcc4
											v44 = (char *)(v10 + 111);
											if (*v44 == 0) {
												// 0xadcd4
												*v44 = 1;
												function_60808(15, 0, 0, 5, 1);
												// branch -> 0xadcf4
											}
										}
									}
									// 0xadcf4
									if (*(char *)g27 != 0) {
										// 0xadd00
										if (*(char *)g26 == 5) {
											// 0xadd0c
											v22 = g31 + 375;
											g21 = v22;
											v11 = v22;
											if (*(char *)v22 >= 4) {
												// 0xadd1c
												function_98800(1, 11, 20, 18);
												v11 = g21;
												// branch -> 0xadd30
											}
											// 0xadd30
											v12 = v11;
											if (*(char *)v11 >= 6) {
												// 0xadd3c
												function_98800(1, 18, 20, 24);
												v12 = g21;
												// branch -> 0xadd50
											}
											// 0xadd50
											if (*(char *)v12 >= 7) {
												// 0xadd5c
												function_c71c8();
												// branch -> 0xadd60
											}
											// 0xadd60
											g22 = 0;
											v13 = g36;
											g21 = v13;
											if (*(int32_t *)g35 > 0) {
												function_9d6e4(*(int32_t *)v13);
												v23 = g21 + 4;
												g21 = v23;
												v24 = g22 + 1;
												g22 = v24;
												while (v24 < *(int32_t *)g35) {
													// 0xadd70
													function_9d6e4(*(int32_t *)v23);
													v23 = g21 + 4;
													g21 = v23;
													v24 = g22 + 1;
													g22 = v24;
													// continue -> 0xadd70
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0xadc6c
							if (v45 == 2) {
								// 0xadc74
								if (*(char *)(v9 + 39) < 5) {
									// 0xadc94
									// branch -> 0xadca4
								} else {
									// 0xadc80
									*(int32_t *)(g32 + 68) = 123;
									*(int32_t *)(g32 + 388) = -1;
									// branch -> 0xadca4
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0xadbe0
					v20 = (char *)g33;
					*v20 = 9;
					g22 = 0x1000000 * (int32_t)*v20 / 0x1000000;
					v40 = *(int32_t *)g25;
					v41 = *(int32_t *)g24;
					v42 = *(int32_t *)g29;
					v43 = *(int32_t *)g30;
					function_528e8(v43, v42, (v40 / 2 | v40 & -0x80000000) + 4 + v43, v42 + (v41 / 2 | v41 & -0x80000000));
					*(char *)g33 = (char)g22;
					// branch -> 0xadc1c
				}
				// 0xadc1c
				v9 = g31;
				if (*(char *)g28 == *(char *)(v9 + 24)) {
					// 0xadc2c
					v45 = *(char *)(v9 + 26);
					if (v45 == 1) {
						// 0xadc38
						v21 = v9 + 39;
						g21 = v21;
						if (*(char *)v21 == 0) {
							// 0xadc48
							function_60808(19, 0, 0, 5, 1);
							*(char *)g21 = 1;
							// branch -> 0xadca4
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0xadc6c
					if (v45 == 2) {
						// 0xadc74
						if (*(char *)(v9 + 39) < 5) {
							// 0xadc94
							// branch -> 0xadca4
						} else {
							// 0xadc80
							*(int32_t *)(g32 + 68) = 123;
							*(int32_t *)(g32 + 388) = -1;
							// branch -> 0xadca4
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0xadb48
			v17 = (char *)g33;
			*v17 = 9;
			g21 = 0x1000000 * (int32_t)*v17 / 0x1000000;
			v33 = *(int32_t *)g25;
			v34 = *(int32_t *)g24;
			v35 = *(int32_t *)g29;
			v36 = *(int32_t *)g30;
			function_528e8(v36, v35, (v33 / 2 | v33 & -0x80000000) + 4 + v36, v35 + (v34 / 2 | v34 & -0x80000000));
			*(char *)g33 = (char)g21;
			v7 = g22;
			// branch -> 0xadb84
		}
		// 0xadb84
		if (*(char *)v7 == 3) {
			// 0xadb90
			v37 = *(int32_t *)g24;
			v38 = *(int32_t *)g30;
			v39 = *(int32_t *)g29;
			function_98800(v38, v39, v38 + *(int32_t *)g25 + 1, v37 + 1 + v39);
			g22 = 0;
			v8 = g36;
			g21 = v8;
			if (*(int32_t *)g35 > 0) {
				function_9d6e4(*(int32_t *)v8);
				v18 = g21 + 4;
				g21 = v18;
				v19 = g22 + 1;
				g22 = v19;
				while (v19 < *(int32_t *)g35) {
					// 0xadbc4
					function_9d6e4(*(int32_t *)v18);
					v18 = g21 + 4;
					g21 = v18;
					v19 = g22 + 1;
					g22 = v19;
					// continue -> 0xadbc4
				}
				// 0xadbe0
				v20 = (char *)g33;
				*v20 = 9;
				g22 = 0x1000000 * (int32_t)*v20 / 0x1000000;
				v40 = *(int32_t *)g25;
				v41 = *(int32_t *)g24;
				v42 = *(int32_t *)g29;
				v43 = *(int32_t *)g30;
				function_528e8(v43, v42, (v40 / 2 | v40 & -0x80000000) + 4 + v43, v42 + (v41 / 2 | v41 & -0x80000000));
				*(char *)g33 = (char)g22;
				// branch -> 0xadc1c
				// 0xadc1c
				v9 = g31;
				if (*(char *)g28 == *(char *)(v9 + 24)) {
					// 0xadc2c
					v45 = *(char *)(v9 + 26);
					if (v45 == 1) {
						// 0xadc38
						v21 = v9 + 39;
						g21 = v21;
						if (*(char *)v21 == 0) {
							// 0xadc48
							function_60808(19, 0, 0, 5, 1);
							*(char *)g21 = 1;
							// branch -> 0xadca4
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0xadc6c
					if (v45 == 2) {
						// 0xadc74
						if (*(char *)(v9 + 39) < 5) {
							// 0xadc94
							// branch -> 0xadca4
						} else {
							// 0xadc80
							*(int32_t *)(g32 + 68) = 123;
							*(int32_t *)(g32 + 388) = -1;
							// branch -> 0xadca4
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0xadbe0
			v20 = (char *)g33;
			*v20 = 9;
			g22 = 0x1000000 * (int32_t)*v20 / 0x1000000;
			v40 = *(int32_t *)g25;
			v41 = *(int32_t *)g24;
			v42 = *(int32_t *)g29;
			v43 = *(int32_t *)g30;
			function_528e8(v43, v42, (v40 / 2 | v40 & -0x80000000) + 4 + v43, v42 + (v41 / 2 | v41 & -0x80000000));
			*(char *)g33 = (char)g22;
			// branch -> 0xadc1c
		}
	}
	// 0xadc1c
	v9 = g31;
	if (*(char *)g28 == *(char *)(v9 + 24)) {
		// 0xadc2c
		v45 = *(char *)(v9 + 26);
		if (v45 == 1) {
			// 0xadc38
			v21 = v9 + 39;
			g21 = v21;
			if (*(char *)v21 == 0) {
				// 0xadc48
				function_60808(19, 0, 0, 5, 1);
				*(char *)g21 = 1;
				// branch -> 0xadca4
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// 0xadc6c
		if (v45 == 2) {
			// 0xadc74
			if (*(char *)(v9 + 39) < 5) {
				// 0xadc94
				// branch -> 0xadca4
			} else {
				// 0xadc80
				*(int32_t *)(g32 + 68) = 123;
				*(int32_t *)(g32 + 388) = -1;
				// branch -> 0xadca4
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0xaddf0 - 0xae090
int32_t PrintQLString(int32_t a1, int32_t a2, int32_t a3, char *a4, int32_t a5)
{
	int32_t v1 = g10; // 0xaddf4
	g28 = a2;
	g27 = a1;
	int32_t v2 = (int32_t)a4; // 0xade04
	g30 = v2;
	g36 = *(int32_t *)(g23 - 0x7774);
	g20 = *(int32_t *)(g23 - 0x6f68);
	g29 = a3;
	g21 = g23 - 0x2da0;
	g31 = a5;
	g22 = g23 - 0x2e20;
	g24 = g23 - 0x2ae8;
	g25 = *(int32_t *)(g23 - 0x6f58);
	int32_t v3 = *(int32_t *)(4 * a2 + *(int32_t *)(g23 - 0x721c)); // 0xade38
	g35 = v3;
	g34 = v2;
	g33 = a1 + 96 + *(int32_t *)(4 * v3 + *(int32_t *)(g23 - 0x7698) + 816);
	int32_t v4 = CPrintString(); // 0xade54
	g26 = v4;
	g32 = 0;
	int32_t v5 = v4; // 0xae08c38
	int32_t v6 = v4; // 0xae03c224
	if (g29 != 0) {
		int32_t v7 = v4; // 0xae08c37
		int32_t v8 = v4; // 0xae03c223
		int32_t v9 = 0;  // 0xadfa0
		if (v4 >= 1) {
			int32_t v10 = 0;
			int32_t v11 = v4; // 0xadf64
			int32_t v12 = 0;  // 0xadf70
			if (v4 >= 9) {
				// 0xade84
				if (v4 >= 9) {
					int32_t v13 = g21;                                                                             // 0xadee4
					int32_t v14 = g22;                                                                             // 0xadeec
					int32_t v15 = g24;                                                                             // 0xadef4
					int32_t v16 = 0;                                                                               // 0xade98
					int32_t v17 = g30 + v16;                                                                       // 0xade98
					int32_t v18 = (int32_t) * (char *)v17;                                                         // 0xadea0
					int32_t v19 = (int32_t) * (char *)(v18 + v15);                                                 // 0xadea8
					unsigned char v20 = *(char *)((int32_t) * (char *)(v17 + 1) + v15);                            // 0xadeac
					int32_t v21 = (int32_t) * (char *)(v19 + v14);                                                 // 0xadeb0
					unsigned char v22 = *(char *)((int32_t) * (char *)(v17 + 2) + v15);                            // 0xadec4
					unsigned char v23 = *(char *)((int32_t) * (char *)((int32_t)v20 + v14) + v13);                 // 0xadec8
					int32_t v24 = (int32_t)v23 + 1 + (int32_t) * (char *)(v21 + v13);                              // 0xaded8
					unsigned char v25 = *(char *)((int32_t) * (char *)(v17 + 3) + v15);                            // 0xadedc
					unsigned char v26 = *(char *)((int32_t) * (char *)((int32_t)v22 + v14) + v13);                 // 0xadee4
					unsigned char v27 = *(char *)((int32_t) * (char *)(v17 + 4) + v15);                            // 0xadef4
					int32_t v28 = g21;                                                                             // 0xadefc
					unsigned char v29 = *(char *)(v28 + (int32_t) * (char *)((int32_t)v25 + v14));                 // 0xadefc
					int32_t v30 = g22;                                                                             // 0xadf04
					int32_t v31 = g24;                                                                             // 0xadf0c
					unsigned char v32 = *(char *)(v31 + (int32_t) * (char *)(v17 + 5));                            // 0xadf0c
					unsigned char v33 = *(char *)((int32_t) * (char *)(v30 + (int32_t)v27) + v28);                 // 0xadf14
					unsigned char v34 = *(char *)((int32_t) * (char *)(v17 + 6) + v31);                            // 0xadf24
					unsigned char v35 = *(char *)((int32_t) * (char *)((int32_t)v32 + v30) + v28);                 // 0xadf30
					int32_t v36 = (int32_t) * (char *)((int32_t)v34 + v30);                                        // 0xadf34
					unsigned char v37 = *(char *)((int32_t) * (char *)(v17 + 7) + v31);                            // 0xadf38
					int32_t v38 = (int32_t)v35 + (int32_t)v33 + (int32_t)v29 + (int32_t)v26 + v24 + 1 + 1 + 1 + 1; // 0xadf3c
					int32_t v39 = (int32_t) * (char *)((int32_t)v37 + v30);                                        // 0xadf48
					int32_t v40 = (int32_t) * (char *)(v36 + v28) + v38 + 1;                                       // 0xadf4c
					int32_t v41 = v40 + 2 + (int32_t) * (char *)(v39 + v28);                                       // 0xadf5c
					int32_t v42 = (v4 - 1) / 8 - 1;                                                                // 0xadf60
					int32_t v43 = v16 + 8;
					// branch -> 0xade98
					while (v42 != 0) {
						// 0xade98
						v13 = v28;
						v14 = v30;
						v15 = v31;
						v16 = v43;
						v17 = g30 + v16;
						v18 = (int32_t) * (char *)v17;
						v19 = (int32_t) * (char *)(v18 + v15);
						v20 = *(char *)((int32_t) * (char *)(v17 + 1) + v15);
						v21 = (int32_t) * (char *)(v19 + v14);
						v22 = *(char *)((int32_t) * (char *)(v17 + 2) + v15);
						v23 = *(char *)((int32_t) * (char *)((int32_t)v20 + v14) + v13);
						v24 = (int32_t)v23 + (int32_t) * (char *)(v21 + v13) + v41 + 1;
						v25 = *(char *)((int32_t) * (char *)(v17 + 3) + v15);
						v26 = *(char *)((int32_t) * (char *)((int32_t)v22 + v14) + v13);
						v27 = *(char *)((int32_t) * (char *)(v17 + 4) + v15);
						v28 = g21;
						v29 = *(char *)(v28 + (int32_t) * (char *)((int32_t)v25 + v14));
						v30 = g22;
						v31 = g24;
						v32 = *(char *)(v31 + (int32_t) * (char *)(v17 + 5));
						v33 = *(char *)((int32_t) * (char *)(v30 + (int32_t)v27) + v28);
						v34 = *(char *)((int32_t) * (char *)(v17 + 6) + v31);
						v35 = *(char *)((int32_t) * (char *)((int32_t)v32 + v30) + v28);
						v36 = (int32_t) * (char *)((int32_t)v34 + v30);
						v37 = *(char *)((int32_t) * (char *)(v17 + 7) + v31);
						v38 = (int32_t)v35 + (int32_t)v33 + (int32_t)v29 + (int32_t)v26 + v24 + 1 + 1 + 1 + 1;
						v39 = (int32_t) * (char *)((int32_t)v37 + v30);
						v40 = (int32_t) * (char *)(v36 + v28) + v38 + 1;
						v41 = v40 + 2 + (int32_t) * (char *)(v39 + v28);
						v42--;
						v43 = v16 + 8;
						// continue -> 0xade98
					}
					// 0xadf64
					v10 = v41;
					v11 = g26;
					v12 = v43;
					// branch -> 0xadf64
				} else {
					v10 = 0;
					v11 = v4;
					v12 = 0;
				}
			}
			int32_t v44 = g30;       // 0xadf70
			int32_t v45 = v44 + v12; // 0xadf70
			if (v11 > v12) {
				int32_t v46 = v11 - v12;                                          // 0xadf94
				int32_t v47 = v45;                                                // 0xadf78
				unsigned char v48 = *(char *)((int32_t) * (char *)v47 + g24);     // 0xadf80
				unsigned char v49 = *(char *)((int32_t)v48 + g22);                // 0xadf84
				int32_t v50 = v10 + 1 + (int32_t) * (char *)((int32_t)v49 + g21); // 0xadf90
				// branch -> 0xadf78
				while (v46 != 1) {
					// 0xadf78
					v46--;
					v47++;
					v48 = *(char *)((int32_t) * (char *)v47 + g24);
					v49 = *(char *)((int32_t)v48 + g22);
					v50 = v50 + 1 + (int32_t) * (char *)((int32_t)v49 + g21);
					// continue -> 0xadf78
				}
				// 0xadf98
				v7 = v11 + v44;
				v8 = v11;
				v9 = v50;
				// branch -> 0xadf98
			} else {
				v7 = v45;
				v8 = v11;
				v9 = v10;
			}
		}
		// 0xadf98
		int32_t v51; // 0xadfa8
		if (v9 > 256) {
			// 0xadf98
			v51 = g32;
			// branch -> 0xadfa8
		} else {
			uint32_t v52 = 257 - v9;                   // 0xadfa0
			int32_t v53 = v52 / 2 | v52 & -0x80000000; // 0xadfa4
			g32 = v53;
			v51 = v53;
			// branch -> 0xadfa8
		}
		// 0xadfa8
		g33 += v51;
		v5 = v7;
		v6 = v8;
		// branch -> 0xadfac
	}
	if (*(int32_t *)g20 == g28) {
		// 0xadfb8
		if (g29 == 0) {
			// 0xadfcc
			// branch -> 0xadfd0
		}
		// 0xadfd0
		v5 = CelDecodeOnly(g35 + 205, *(int32_t *)g36, *(int32_t *)g25, 12, 12);
		v6 = g26;
		// branch -> 0xadfe4
	}
	int32_t v54 = g30; // 0xadfe4
	g18 = v54;
	g19 = 0;
	int32_t result; // 0xae08c
	if (v6 <= 0) {
		// 0xae044
		result = v5;
		if (*(int32_t *)g20 == g28) {
			// 0xae050
			if (g29 == 0) {
				// 0xae064
				// branch -> 0xae068
			}
			// 0xae068
			result = CelDecodeOnly(g35 + 205, *(int32_t *)g36, *(int32_t *)g25, 12, 12);
			// branch -> 0xae07c
		}
		// 0xae07c
		g10 = v1;
		return result;
	}
	int32_t v55 = v5; // 0xae08c35
	int32_t v56 = 0;  // 0xae02c27
	int32_t v57;      // 0xae08c34
	while (true) {
		unsigned char v58 = *(char *)(g24 + (int32_t) * (char *)v54); // 0xadff4
		unsigned char v59 = *(char *)(g22 + (int32_t)v58);            // 0xadff8
		int32_t v60 = v59;                                            // 0xadff8
		int32_t v61 = g21 + v60;                                      // 0xadffc
		g30 = v61;
		int32_t v62 = (int32_t) * (char *)v61 + 1 + g32; // 0xae00c
		g32 = v62;
		v57 = v55;
		int32_t v63 = v6;  // 0xae03c
		int32_t v64 = v54; // 0xae030
		int32_t v65 = v56; // 0xae02c
		int32_t v66 = v61; // 0xae028
		if (v59 != 0) {
			// 0xae014
			if (v62 <= 257) {
				// 0xae01c
				v57 = function_2d918(g33, v60, g31);
				v63 = g26;
				v64 = g18;
				v65 = g19;
				v66 = g30;
				// branch -> 0xae028
			} else {
				v57 = v55;
				v63 = v6;
				v64 = v54;
				v65 = v56;
				v66 = v61;
			}
		}
		int32_t v67 = v65 + 1; // 0xae02c
		g19 = v67;
		int32_t v68 = v64 + 1; // 0xae030
		g18 = v68;
		g33 += (int32_t) * (char *)v66 + 1;
		if (v67 >= v63) {
			// break -> 0xae044
			break;
		}
		v55 = v57;
		v6 = v63;
		v56 = v67;
		v54 = v68;
		// continue -> 0xadff0
	}
	// 0xae044
	result = v57;
	if (*(int32_t *)g20 == g28) {
		// 0xae050
		if (g29 == 0) {
			// 0xae064
			// branch -> 0xae068
		}
		// 0xae068
		result = CelDecodeOnly(g35 + 205, *(int32_t *)g36, *(int32_t *)g25, 12, 12);
		// branch -> 0xae07c
	}
	// 0xae07c
	g10 = v1;
	return result;
}

// Address range: 0xae090 - 0xae16c
int32_t DrawQuestLog(int32_t a1)
{
	// 0xae090
	PrintQLString(0, 2, 1, (char *)*(int32_t *)(g23 - 0x58d4), 3);
	CelDecodeOnly(64, 511, *(int32_t *)*(int32_t *)(g23 - 0x7700), 1, 320);
	if (*(int32_t *)g33 > 0) {
		int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6f6c);       // 0xae0f8
		int32_t v2 = *(int32_t *)(g23 - 0x6f70);                   // 0xae0f4
		int32_t v3 = *(int32_t *)(g36 + 20 * *(int32_t *)v2 + 16); // 0xae108
		PrintQLString(0, v1, 1, (char *)v3, 0);
		while (g31 + 1 < *(int32_t *)g33) {
			// 0xae0f4
			v3 = *(int32_t *)(g36 + 20 * *(int32_t *)(g32 + 4) + 16);
			PrintQLString(0, g30 + 2, 1, (char *)v3, 0);
			// continue -> 0xae0f4
		}
		// 0xae124
		// branch -> 0xae130
	}
	// 0xae130
	PrintQLString(0, 22, 1, (char *)*(int32_t *)(g23 - 0x58d8), 0);
	int32_t *v4 = (int32_t *)g35; // 0xae148
	int32_t result = *v4 % 8;     // 0xae14c
	*v4 = result + 1;
	return result;
}

// Address range: 0xae16c - 0xae2c0
int32_t function_ae16c(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f74); // 0xae16c
	int32_t v2 = *(int32_t *)(g23 - 0x6f6c); // r5
	*(int32_t *)v1 = 0;
	int32_t v3 = 4;                          // ctr
	int32_t v4 = *(int32_t *)(g23 - 0x6f68); // r4
	int32_t v5 = *(int32_t *)(g23 - 0x7604); // 0xae188
	int32_t v6 = 0;                          // r9
	int32_t v7 = *(int32_t *)(g23 - 0x6f70); // r8
	int32_t v8 = 0;                          // 0xae1ac
	// branch -> 0xae194
	while (true) {
		int32_t v9 = v8;  // 0xae1c4
		int32_t v10 = v5; // 0xae1c8
		int32_t v11;      // 0xae1fc
		int32_t v12;      // 0xae1c4
		int32_t v13;      // 0xae1c8
		if (*(char *)(v5 + 2) == 2) {
			// 0xae1a0
			if (*(int32_t *)(v5 + 20) != 0) {
				// 0xae1ac
				*(int32_t *)v7 = v8;
				v7 += 4;
				int32_t *v14 = (int32_t *)v1; // 0xae1b4
				*v14 = *v14 + 1;
				v9 = v6;
				v10 = v5;
				// branch -> 0xae1c0
			} else {
				v9 = v8;
				v10 = v5;
			}
			// 0xae1c0
			v12 = v9 + 1;
			v13 = v10 + 24;
			v11 = v13;
			if (*(char *)(v10 + 26) == 2) {
			lab_0xae1d4:
				// 0xae1d4
				if (*(int32_t *)(v10 + 44) != 0) {
					// 0xae1e0
					*(int32_t *)v7 = v12;
					v7 += 4;
					int32_t *v15 = (int32_t *)v1; // 0xae1e8
					*v15 = *v15 + 1;
					v11 = v13;
					// branch -> 0xae1f4
				} else {
					v11 = v13;
				}
			}
		lab_0xae1f4:;
			int32_t v16 = v12 + 1; // 0xae1f8
			v6 = v16;
			int32_t v17 = v11 + 24; // 0xae1fc
			v5 = v17;
			int32_t v18 = v16; // 0xae22c
			int32_t v19 = v17; // 0xae230
			if (*(char *)(v11 + 26) == 2) {
				// 0xae208
				if (*(int32_t *)(v11 + 44) != 0) {
					// 0xae214
					*(int32_t *)v7 = v16;
					v7 += 4;
					int32_t *v20 = (int32_t *)v1; // 0xae21c
					*v20 = *v20 + 1;
					v18 = v6;
					v19 = v5;
					// branch -> 0xae228
				} else {
					v18 = v16;
					v19 = v17;
				}
			}
			int32_t v21 = v18 + 1; // 0xae22c
			v6 = v21;
			int32_t v22 = v19 + 24; // 0xae230
			v5 = v22;
			int32_t v23 = v21; // 0xae260
			int32_t v24 = v22; // 0xae25c
			if (*(char *)(v19 + 26) == 2) {
				// 0xae23c
				if (*(int32_t *)(v19 + 44) != 0) {
					// 0xae248
					*(int32_t *)v7 = v21;
					v7 += 4;
					int32_t *v25 = (int32_t *)v1; // 0xae250
					*v25 = *v25 + 1;
					v23 = v6;
					v24 = v5;
					// branch -> 0xae25c
				} else {
					v23 = v21;
					v24 = v22;
				}
			}
			int32_t v26 = v23 + 1; // 0xae260
			v6 = v26;
			int32_t v27 = v3 - 1; // 0xae264
			v3 = v27;
			if (v27 == 0) {
				// break -> 0xae268
				break;
			}
			v8 = v26;
			v5 = v24 + 24;
			// continue -> 0xae194
			continue;
		}
		// 0xae1c0
		v12 = v9 + 1;
		v13 = v10 + 24;
		if (*(char *)(v10 + 26) == 2) {
			goto lab_0xae1d4;
		}
		v11 = v13;
		goto lab_0xae1f4;
	}
	int32_t v28 = *(int32_t *)v1; // 0xae268
	if (v28 < 6) {
		// 0xae284
		*(int32_t *)v2 = 8;
		// branch -> 0xae28c
	} else {
		// 0xae274
		*(int32_t *)v2 = 5 - (v28 / 2 | v28 & -0x80000000);
		// branch -> 0xae28c
	}
	// 0xae28c
	if (v28 == 0) {
		// 0xae294
		*(int32_t *)v4 = 22;
		// branch -> 0xae2a8
	} else {
		// 0xae2a0
		*(int32_t *)v4 = *(int32_t *)v2;
		// branch -> 0xae2a8
	}
	int32_t result = *(int32_t *)(g23 - 0x6f58); // r3
	*(int32_t *)*(int32_t *)(g23 - 0x77c8) = 1;
	*(int32_t *)result = 1;
	return result;
}

// Address range: 0xae2c0 - 0xae33c
int32_t QuestlogUp(void)
{
	int32_t result = *(int32_t *)(g23 - 0x6f74); // 0xae2c4
	int32_t v1 = *(int32_t *)result;             // 0xae2d4
	if (v1 == 0) {
		// 0xae32c
		return result;
	}
	int32_t *v2 = (int32_t *)*(int32_t *)(g23 - 0x6f68); // 0xae2e4
	int32_t v3 = *v2;                                    // 0xae2e4
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x6f6c); // 0xae2e8
	int32_t result2;                                     // 0xae328
	if (v3 == v4) {
		// 0xae2f4
		*v2 = 22;
		// branch -> 0xae324
		// 0xae324
		g34 = 69;
		result2 = PlaySFX(69);
		// branch -> 0xae32c
		// 0xae32c
		return result2;
	}
	// 0xae300
	if (v3 == 22) {
		// 0xae308
		*v2 = 2 * v1 - 2 + v4;
		// branch -> 0xae324
	} else {
		// 0xae31c
		*v2 = v3 - 2;
		// branch -> 0xae324
	}
	// 0xae324
	g34 = 69;
	result2 = PlaySFX(69);
	// branch -> 0xae32c
	// 0xae32c
	return result2;
}

// Address range: 0xae33c - 0xae3bc
int32_t QuestlogDown(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f6c);             // 0xae348
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x6f74); // 0xae354
	if (v2 == 0) {
		// 0xae3ac
		return 0;
	}
	int32_t *v3 = (int32_t *)*(int32_t *)(g23 - 0x6f68); // 0xae360
	int32_t v4 = *v3;                                    // 0xae360
	int32_t result;                                      // 0xae3a8
	if (v4 == 22) {
		// 0xae36c
		*v3 = *(int32_t *)v1;
		// branch -> 0xae3a4
		// 0xae3a4
		g34 = 69;
		result = PlaySFX(69);
		// branch -> 0xae3ac
		// 0xae3ac
		return result;
	}
	// 0xae378
	if (v4 == *(int32_t *)v1 + 2 * v2 - 2) {
		// 0xae390
		*v3 = 22;
		// branch -> 0xae3a4
	} else {
		// 0xae39c
		*v3 = v4 + 2;
		// branch -> 0xae3a4
	}
	// 0xae3a4
	g34 = 69;
	result = PlaySFX(69);
	// branch -> 0xae3ac
	// 0xae3ac
	return result;
}

// Address range: 0xae3bc - 0xae43c
int32_t QuestlogEnter(void)
{
	int32_t v1 = g10; // 0xae3bc
	g34 = 70;
	PlaySFX(70);
	int32_t result; // 0xae420
	if (*(int32_t *)*(int32_t *)(g23 - 0x6f74) == 0) {
		// 0xae420
		result = *(int32_t *)(g23 - 0x77c8);
		*(int32_t *)result = 0;
		g10 = v1;
		return result;
	}
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x6f68); // 0xae3e4
	if (v2 != 22) {
		int32_t v3 = *(int32_t *)(g23 - 0x6f6c);                       // 0xae3f0
		int32_t v4 = *(int32_t *)(g23 - 0x6f70);                       // 0xae3f4
		int32_t v5 = *(int32_t *)(4 * (v2 - *(int32_t *)v3) / 2 + v4); // 0xae40c
		g34 = (int32_t) * (char *)(24 * v5 + *(int32_t *)(g23 - 0x7604) + 14);
		function_6c63c();
		// branch -> 0xae420
	}
	// 0xae420
	result = *(int32_t *)(g23 - 0x77c8);
	*(int32_t *)result = 0;
	g10 = v1;
	return result;
}

// Address range: 0xae43c - 0xae4e8
int32_t function_ae43c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6f74); // 0xae450
	g33 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x6f6c); // 0xae454
	g35 = v2;
	g36 = *(int32_t *)(g23 - 0x6f68);
	int32_t *v3 = (int32_t *)v1;                                                                 // 0xae468
	uint64_t v4 = 0x2aaaaaab * (int64_t)(*(int32_t *)*(int32_t *)(g23 - 0x76ac) - 32);           // 0xae470
	int32_t v5 = v4 / 0x8000000000000000;                                                        // 0xae47c
	int32_t v6 = ((int32_t)(v4 / 0x100000000) & -0x80000000 | (int32_t)(v4 / 0x200000000)) + v5; // 0xae480
	g30 = v6;
	int32_t result2; // 0xae4e4
	if (*v3 != 0) {
		// 0xae488
		g31 = 0;
		g32 = 0;
		if (*v3 > 0) {
			int32_t v7 = v5; // 0xae4e420
			int32_t v8 = 0;  // 0xae4b012
			int32_t v9 = v6; // 0xae4a4
			int32_t v10 = 0; // 0xae498
			while (true) {
				int32_t result = v7; // 0xae4e419
				int32_t v11 = v1;    // 0xae4b4
				int32_t v12 = v8;    // 0xae4b0
				int32_t v13 = v10;   // 0xae4ac
				if (v9 == *(int32_t *)v2 + v10) {
					// 0xae4a4
					*(int32_t *)g36 = v9;
					result = QuestlogEnter();
					v11 = g33;
					v12 = g31;
					v13 = g32;
					// branch -> 0xae4ac
				}
				int32_t v14 = v13 + 2; // 0xae4ac
				g32 = v14;
				int32_t v15 = v12 + 1; // 0xae4b0
				g31 = v15;
				if (v15 >= *(int32_t *)v11) {
					// 0xae4b4
					// branch -> 0xae4c0
					// 0xae4c0
					if (g30 != 22) {
						// 0xae4d4
						return result;
					}
					// 0xae4c8
					*(int32_t *)g36 = 22;
					result2 = QuestlogEnter();
					// branch -> 0xae4d4
					// 0xae4d4
					return result2;
				}
				// 0xae4ac
				v7 = result;
				v1 = v11;
				v8 = v15;
				v9 = g30;
				v10 = v14;
				v2 = g35;
				// branch -> 0xae494
			}
		}
	}
	// 0xae4c0
	result2 = v5;
	if (v6 == 22) {
		// 0xae4c8
		*(int32_t *)g36 = 22;
		result2 = QuestlogEnter();
		// branch -> 0xae4d4
	}
	// 0xae4d4
	return result2;
}

// Address range: 0xae4e8 - 0xae534
int32_t SetMultiQuest(int32_t a1, char a2, int32_t a3, int32_t a4)
{
	int32_t v1 = 24 * a1;                    // 0xae4e8
	int32_t v2 = *(int32_t *)(g23 - 0x7604); // 0xae4ec
	char *v3 = (char *)(v2 + v1 + 2);        // 0xae4f4
	unsigned char v4 = *v3;                  // 0xae4f4
	int32_t result = v4;                     // 0xae4f4
	if (v4 == 3) {
		// bb
		return result;
	}
	// 0xae500
	if ((int32_t)a2 > result) {
		// 0xae508
		*v3 = a2;
		// branch -> 0xae50c
	}
	int32_t result2 = v2 + v1;               // 0xae50c
	int32_t *v5 = (int32_t *)(result2 + 20); // 0xae510
	*v5 = *v5 | a3;
	if (a4 <= (int32_t) * (char *)(result2 + 15)) {
		// bb
		return result2;
	}
	// 0xae52c
	*(char *)(result2 + 15) = (char)a4;
	return result2;
}
