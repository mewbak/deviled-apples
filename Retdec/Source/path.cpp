
// Address range: 0x9f124 - 0x9f3e4
int32_t FindPath(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x9f128
	g27 = 0;
	g35 = *(int32_t *)(g23 - 0x5ad8);
	g36 = *(int32_t *)(g23 - 0x6fbc);
	g29 = a1;
	g26 = *(int32_t *)(g23 - 0x6fb0);
	g30 = a2;
	g24 = a3;
	g25 = a4;
	g31 = a5;
	g32 = a6;
	g33 = a7;
	*(int32_t *)*(int32_t *)(g23 - 0x6fac) = 0;
	*(int32_t *)g26 = path_new_step();
	*(int32_t *)*(int32_t *)(g23 - 0x6fb4) = path_new_step();
	*(int32_t *)*(int32_t *)(g23 - 0x6fb8) = g27;
	int32_t v2 = path_new_step(); // 0x9f184
	g28 = v2;
	*(char *)(v2 + 2) = (char)g27;
	*(char *)(g28 + 1) = (char)(0x1000000 * function_9f3e4(g24, g25, g31, g32) / 0x1000000);
	int32_t v3 = g28;                               // 0x9f1ac
	int32_t v4 = (int32_t) * (char *)(v3 + 2);      // 0x9f1ac
	int32_t v5 = (int32_t) * (char *)(v3 + 1) + v4; // 0x9f1b4
	*(char *)v3 = (char)v5;
	*(int32_t *)(g28 + 4) = g24;
	*(int32_t *)(g28 + 8) = g25;
	*(int32_t *)(*(int32_t *)g26 + 48) = g28;
	// branch -> 0x9f1cc
	while (true) {
		int32_t v6 = function_9f484(); // 0x9f1cc
		int32_t v7 = v6;               // r5
		if (v6 == 0) {
			// 0x9f1d8
			// branch -> 0x9f3d0
			// 0x9f3d0
			g10 = v1;
			return 0;
		}
		int32_t v8 = g31; // 0x9f1e4
		int32_t v9;       // 0x9f1f0
		if (*(int32_t *)(v6 + 4) == v8) {
			// 0x9f1ec
			v9 = g32;
			if (*(int32_t *)(v6 + 8) == v9) {
				int32_t v10 = 0;                     // r6
				int32_t v11 = *(int32_t *)(v6 + 12); // 0x9f2604
				int32_t v12 = 0;                     // 0x9f294
				int32_t v13;                         // ctr
				int32_t v14;                         // r3
				int32_t v15;                         // r4
				int32_t v16;                         // 0x9f2e4
				int32_t v17;
				int32_t v18;     // 0x9f3ac
				int32_t result3; // 0x9f3e0
				int32_t result;
				int32_t v19; // 0x9f2cc
				int32_t v20; // 0x9f2d4
				int32_t v21; // 0x9f328
				int32_t v22; // 0x9f344
				int32_t v23; // 0x9f394
				int32_t v24; // 0x9f398
				int32_t v25;
				int32_t result2; // 0x9f3a4
				int32_t v26;     // 0x9f3c8
				int32_t v27;     // 0x9f3cc
				int32_t v28;     // 0x9f2d4
				int32_t v29;     // 0x9f3a4
				int32_t v30;     // 0x9f2c8
				int32_t v31;     // 0x9f2ec
				int32_t v32;     // 0x9f310
				int32_t v33;     // 0x9f330
				int32_t v34;     // 0x9f34c
				int32_t v35;     // 0x9f370
				int32_t v36;     // 0x9f37c
				int32_t v37;     // 0x9f388
				int32_t v38;     // 0x9f3bc
				if (v11 == 0) {
					// 0x9f274
					if (v12 == 25) {
						// 0x9f27c
						// branch -> 0x9f3d0
						// 0x9f3d0
						g10 = v1;
						return 0;
					}
					// 0x9f284
					v14 = 0;
					if (v12 >= 1) {
						// 0x9f290
						v24 = v12;
						result2 = 0;
						if (v12 >= 9) {
							// 0x9f29c
							v13 = (v12 - 1) / 8;
							if (v12 >= 9) {
								v19 = v12;
								v20 = 0;
								while (true) {
									// 0x9f2b0
									v30 = *(int32_t *)(g36 + 4 * (v19 - v20) - 4);
									v28 = g33 + v20;
									v15 = v28;
									*(char *)v28 = (char)(0x1000000 * v30 / 0x1000000);
									v16 = v14;
									v31 = *(int32_t *)(g36 + 4 * (v19 - (v20 + 1)) - 4);
									*(char *)(v15 + 1) = (char)(0x1000000 * v31 / 0x1000000);
									v14 += 8;
									v32 = *(int32_t *)(g36 + 4 * (v10 - (v16 + 2)) - 4);
									*(char *)(v15 + 2) = (char)(0x1000000 * v32 / 0x1000000);
									v21 = v10;
									v33 = *(int32_t *)(4 * (v10 - (v20 + 3)) - 4 + g36);
									*(char *)(v15 + 3) = (char)(0x1000000 * v33 / 0x1000000);
									v22 = v10;
									v34 = *(int32_t *)(4 * (v21 - (v20 + 4)) - 4 + g36);
									*(char *)(v15 + 4) = (char)v34;
									v35 = *(int32_t *)(4 * (v21 - (v16 + 5)) - 4 + g36);
									*(char *)(v15 + 5) = (char)(0x1000000 * v35 / 0x1000000);
									v36 = *(int32_t *)(4 * (v22 - (v16 + 6)) - 4 + g36);
									*(char *)(v15 + 6) = (char)(0x1000000 * v36 / 0x1000000);
									v37 = *(int32_t *)(4 * (v22 - (v16 + 7)) - 4 + g36);
									*(char *)(v15 + 7) = (char)(0x1000000 * v37 / 0x1000000);
									v23 = v13 - 1;
									v13 = v23;
									v17 = v14;
									v25 = v10;
									if (v23 == 0) {
										v24 = v25;
										result2 = v17;
										// break -> 0x9f398
										break;
									}
									v19 = v25;
									v20 = v17;
									// continue -> 0x9f2b0
								}
								// 0x9f398
								v29 = g33 + result2;
								if (v24 > result2) {
									v18 = result2;
									while (true) {
										// 0x9f3ac
										v38 = *(int32_t *)(g36 + 4 * (v24 - v18) - 4);
										*(char *)v29 = (char)(0x1000000 * v38 / 0x1000000);
										v26 = v29 + 1;
										v15 = v26;
										v27 = v24 - result2 - 1;
										v13 = v27;
										result = v18 + 1;
										if (v27 != 0) {
											goto lab_0x9f3ac_3;
										}
										// 0x9f3d0
										g10 = v1;
										return result;
									}
								}
								// 0x9f3d0
								g10 = v1;
								return result2;
							}
							v24 = v12;
							result2 = 0;
						}
						// 0x9f398
						v29 = g33 + result2;
						if (v24 > result2) {
							v18 = result2;
							while (true) {
								// 0x9f3ac
								v38 = *(int32_t *)(g36 + 4 * (v24 - v18) - 4);
								*(char *)v29 = (char)(0x1000000 * v38 / 0x1000000);
								v26 = v29 + 1;
								v15 = v26;
								v27 = v24 - result2 - 1;
								v13 = v27;
								result = v18 + 1;
								if (v27 != 0) {
									goto lab_0x9f3ac_3;
								}
								// 0x9f3d0
								g10 = v1;
								return result;
							}
						} else {
							result3 = result2;
						}
					} else {
						result3 = 0;
					}
					// 0x9f3d0
					g10 = v1;
					return result3;
				}
				int32_t v39 = 0; // 0x9f230
				while (true) {
					// 0x9f26c
					if (v39 < 25) {
						// 0x9f224
						v10 = v39 + 1;
						int32_t v40 = *(int32_t *)(v6 + 8) - *(int32_t *)(v11 + 8);  // 0x9f238
						int32_t v41 = *(int32_t *)(v6 + 4) - *(int32_t *)(v11 + 4);  // 0x9f244
						int32_t v42 = (int32_t) * (char *)(g35 + 3 * v40 + 4 + v41); // 0x9f254
						*(int32_t *)(g36 + 4 * v39) = v42;
						int32_t v43 = *(int32_t *)(v7 + 12); // 0x9f25c
						v7 = v43;
						int32_t v44 = *(int32_t *)(v43 + 12); // 0x9f260
						int32_t v45 = v10;
						if (v44 == 0) {
							v12 = v45;
							// break -> 0x9f274
							break;
						}
						v6 = v43;
						v11 = v44;
						v39 = v45;
						// continue -> 0x9f26c
						continue;
					} else {
						v12 = v39;
					}
				}
				// 0x9f274
				if (v12 == 25) {
					// 0x9f27c
					// branch -> 0x9f3d0
					// 0x9f3d0
					g10 = v1;
					return 0;
				}
				// 0x9f284
				v14 = 0;
				if (v12 >= 1) {
					// 0x9f290
					v24 = v12;
					result2 = 0;
					if (v12 >= 9) {
						// 0x9f29c
						v13 = (v12 - 1) / 8;
						if (v12 >= 9) {
							v19 = v12;
							v20 = 0;
							while (true) {
								// 0x9f2b0
								v30 = *(int32_t *)(g36 + 4 * (v19 - v20) - 4);
								v28 = g33 + v20;
								v15 = v28;
								*(char *)v28 = (char)(0x1000000 * v30 / 0x1000000);
								v16 = v14;
								v31 = *(int32_t *)(g36 + 4 * (v19 - (v20 + 1)) - 4);
								*(char *)(v15 + 1) = (char)(0x1000000 * v31 / 0x1000000);
								v14 += 8;
								v32 = *(int32_t *)(g36 + 4 * (v10 - (v16 + 2)) - 4);
								*(char *)(v15 + 2) = (char)(0x1000000 * v32 / 0x1000000);
								v21 = v10;
								v33 = *(int32_t *)(4 * (v10 - (v20 + 3)) - 4 + g36);
								*(char *)(v15 + 3) = (char)(0x1000000 * v33 / 0x1000000);
								v22 = v10;
								v34 = *(int32_t *)(4 * (v21 - (v20 + 4)) - 4 + g36);
								*(char *)(v15 + 4) = (char)v34;
								v35 = *(int32_t *)(4 * (v21 - (v16 + 5)) - 4 + g36);
								*(char *)(v15 + 5) = (char)(0x1000000 * v35 / 0x1000000);
								v36 = *(int32_t *)(4 * (v22 - (v16 + 6)) - 4 + g36);
								*(char *)(v15 + 6) = (char)(0x1000000 * v36 / 0x1000000);
								v37 = *(int32_t *)(4 * (v22 - (v16 + 7)) - 4 + g36);
								*(char *)(v15 + 7) = (char)(0x1000000 * v37 / 0x1000000);
								v23 = v13 - 1;
								v13 = v23;
								v17 = v14;
								v25 = v10;
								if (v23 == 0) {
									v24 = v25;
									result2 = v17;
									// break -> 0x9f398
									break;
								}
								v19 = v25;
								v20 = v17;
								// continue -> 0x9f2b0
							}
							// 0x9f398
							v13 = v24 - result2;
							v29 = g33 + result2;
							v15 = v29;
							result3 = result2;
							if (v24 > result2) {
								int32_t v46 = v29; // 0x9f3c4
								int32_t v47 = v24; // 0x9f3ac
								v18 = result2;
								while (true) {
									// 0x9f3ac
									v38 = *(int32_t *)(g36 + 4 * (v47 - v18) - 4);
									*(char *)v46 = (char)(0x1000000 * v38 / 0x1000000);
									v26 = v15 + 1;
									v15 = v26;
									v27 = v13 - 1;
									v13 = v27;
									result = v18 + 1;
									if (v27 != 0) {
									lab_0x9f3ac_3:
										// 0x9f3ac
										v46 = v26;
										v47 = v10;
										v18 = result;
										// branch -> 0x9f3ac
										continue;
									} else {
										result3 = result;
									}
								}
							}
							// 0x9f3d0
							g10 = v1;
							return result3;
						}
						v24 = v12;
						result2 = 0;
					}
					// 0x9f398
					v29 = g33 + result2;
					if (v24 > result2) {
						v18 = result2;
						while (true) {
							// 0x9f3ac
							v38 = *(int32_t *)(g36 + 4 * (v24 - v18) - 4);
							*(char *)v29 = (char)(0x1000000 * v38 / 0x1000000);
							v26 = v29 + 1;
							v15 = v26;
							v27 = v24 - result2 - 1;
							v13 = v27;
							result = v18 + 1;
							if (v27 != 0) {
								goto lab_0x9f3ac_3;
							}
							// 0x9f3d0
							g10 = v1;
							return result;
						}
					} else {
						result3 = result2;
					}
				} else {
					result3 = 0;
				}
				// 0x9f3d0
				g10 = v1;
				return result3;
			}
		} else {
			// 0x9f1e0
			v9 = g32;
			// branch -> 0x9f1f8
		}
		// 0x9f1f8
		g40 = v9;
		if (function_9f658(g29, g30, v8, v9) == 0) {
			// break -> 0x9f214
			break;
		}
		// continue -> 0x9f1cc
	}
	// 0x9f214
	// branch -> 0x9f3d0
	// 0x9f3d0
	g10 = v1;
	return 0;
}

// Address range: 0x9f3e4 - 0x9f45c
int32_t function_9f3e4(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x9f3e4
	g34 = a1 - a3;
	int32_t v1 = abs(); // 0x9f408
	g34 = a2 - a4;
	int32_t v2 = abs(); // 0x9f414
	int32_t v3 = v2;    // 0x9f438
	if (v1 > v2) {
		// 0x9f434
		v3 = v1;
		// branch -> 0x9f438
	}
	// 0x9f438
	return 2 * (v3 + (v1 < v2 ? v1 : v2));
}

// Address range: 0x9f45c - 0x9f484
int32_t function_9f45c(void)
{
	int32_t v1 = g34; // 0x9f45c
	if (*(int32_t *)(v1 + 4) == g37 || *(int32_t *)(v1 + 8) == g38) {
		// 0x9f474
		return 2;
	}
	// 0x9f47c
	return 3;
}

// Address range: 0x9f484 - 0x9f4c8
int32_t function_9f484(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x6fb4);                                // r5
	int32_t *v2 = (int32_t *)(*(int32_t *)*(int32_t *)(g23 - 0x6fb0) + 48); // 0x9f494
	int32_t result = *v2;                                                   // 0x9f494
	if (result == 0) {
		// 0x9f4a0
		return 0;
	}
	// 0x9f4a8
	*v2 = *(int32_t *)(result + 48);
	int32_t v3 = *(int32_t *)(*(int32_t *)v1 + 48); // 0x9f4b4
	*(int32_t *)(result + 48) = v3;
	*(int32_t *)(*(int32_t *)v1 + 48) = result;
	return result;
}

// Address range: 0x9f4c8 - 0x9f658
int32_t function_9f4c8(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(a1 + 8);                     // 0x9f4c8
	int32_t v2 = *(int32_t *)(a1 + 4);                     // 0x9f4d0
	int32_t v3 = *(int32_t *)(g23 - 0x5ad8);               // 0x9f4d8
	int32_t v4 = *(int32_t *)(g23 - 0x757c);               // 0x9f4e0
	int32_t v5 = *(int32_t *)(g23 - 0x722c);               // 0x9f4e4
	char v6 = *(char *)(3 * (a3 - v1) + a2 - v2 + v3 + 4); // 0x9f4f4
	int32_t result;                                        // 0x9f650
	if (v6 == 7) {
		int32_t v7 = *(int32_t *)v4 + 224 * a2 + 2 * a3; // 0x9f5cc
		int32_t v8 = 1;                                  // 0x9f5f8
		if (*(char *)((int32_t) * (int16_t *)(v7 - 2) + v5) == 0) {
			// 0x9f5e4
			if (*(char *)((int32_t) * (int16_t *)(v7 - 224) + v5) == 0) {
				// 0x9f5f4
				v8 = 0;
				// branch -> 0x9f5f8
			} else {
				v8 = 1;
			}
		}
		// 0x9f5f8
		result = __asm_rlwinm(llvm_ctlz_i32(v8, true), 27, 24, 31);
		// branch -> 0x9f650
		// 0x9f650
		return result;
	}
	// 0x9f504
	if (v6 > 7) {
		// 0x9f518
		if (v6 == 8) {
			int32_t v9 = *(int32_t *)v4 + 224 * a2 + 2 * a3; // 0x9f618
			int32_t v10 = 1;                                 // 0x9f644
			if (*(char *)((int32_t) * (int16_t *)(v9 + 224) + v5) == 0) {
				// 0x9f630
				if (*(char *)((int32_t) * (int16_t *)(v9 - 2) + v5) == 0) {
					// 0x9f640
					v10 = 0;
					// branch -> 0x9f644
				} else {
					v10 = 1;
				}
			}
			// 0x9f644
			result = __asm_rlwinm(llvm_ctlz_i32(v10, true), 27, 24, 31);
			// branch -> 0x9f650
		} else {
			result = 1;
		}
		// 0x9f650
		return result;
	}
	// 0x9f508
	if (v6 == 5) {
		int32_t v11 = *(int32_t *)v4 + 224 * a2 + 2 * a3; // 0x9f534
		int32_t v12 = 1;                                  // 0x9f560
		if (*(char *)((int32_t) * (int16_t *)(v11 + 2) + v5) == 0) {
			// 0x9f54c
			if (*(char *)((int32_t) * (int16_t *)(v11 + 224) + v5) == 0) {
				// 0x9f55c
				v12 = 0;
				// branch -> 0x9f560
			} else {
				v12 = 1;
			}
		}
		// 0x9f560
		result = __asm_rlwinm(llvm_ctlz_i32(v12, true), 27, 24, 31);
		// branch -> 0x9f650
	} else {
		// 0x9f510
		if (v6 > 5) {
			int32_t v13 = *(int32_t *)v4 + 224 * a2 + 2 * a3; // 0x9f580
			int32_t v14 = 1;                                  // 0x9f5ac
			if (*(char *)((int32_t) * (int16_t *)(v13 + 2) + v5) == 0) {
				// 0x9f598
				if (*(char *)((int32_t) * (int16_t *)(v13 - 224) + v5) == 0) {
					// 0x9f5a8
					v14 = 0;
					// branch -> 0x9f5ac
				} else {
					v14 = 1;
				}
			}
			// 0x9f5ac
			result = __asm_rlwinm(llvm_ctlz_i32(v14, true), 27, 24, 31);
			// branch -> 0x9f650
		} else {
			result = 1;
		}
	}
	// 0x9f650
	return result;
}

// Address range: 0x9f658 - 0x9f74c
int32_t function_9f658(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10;                        // 0x9f65c
	int32_t v2 = *(int32_t *)(g23 - 0x5adc); // 0x9f660
	g35 = v2;
	g25 = a1;
	int32_t v3 = *(int32_t *)(g23 - 0x5ae0); // 0x9f668
	g33 = v3;
	g26 = a2;
	g27 = a3;
	g28 = a4;
	g29 = g40;
	g30 = 0;
	// branch -> 0x9f688
	while (true) {
		// 0x9f688
		g34 = a2;
		g15 = a1;
		g32 = *(int32_t *)(a3 + 4) + (int32_t) * (char *)v2;
		g31 = *(int32_t *)(a3 + 8) + (int32_t) * (char *)v3;
		int32_t v4 = FunctionPointer(); // 0x9f6b8
		g36 = v4;
		if (v4 != 0) {
			// 0x9f6c8
			int32_t v5; // 0x9f6fc
			int32_t v6; // 0x9f700
			int32_t v7; // 0x9f704
			int32_t v8; // 0x9f708
			if (function_9f4c8(g27, g32, g31) == 0) {
				// 0x9f6c8
				// branch -> 0x9f6e0
				// 0x9f6e0
				if (g36 == 0) {
				lab_0x9f6e8:;
					int32_t v9 = g32; // 0x9f6e8
					if (v9 == g28) {
						int32_t v10 = g31; // 0x9f6f0
						if (v10 == g29) {
							v8 = v10;
							v6 = v10;
							v7 = v9;
							v5 = v9;
						lab_0x9f6f8:
							// 0x9f6f8
							if (function_9f74c(g27, v5, v6, v7, v8) == 0) {
								// 0x9f738
								g10 = v1;
								return 0;
							}
						}
					}
				}
			} else {
				// 0x9f6c8
				v8 = g29;
				v6 = g31;
				v7 = g28;
				v5 = g32;
				// branch -> 0x9f6f8
				goto lab_0x9f6f8;
			}
		lab_0x9f720:;
			int32_t v11 = g30 + 1; // 0x9f720
			g30 = v11;
			int32_t v12 = g33 + 1; // 0x9f724
			g33 = v12;
			int32_t v13 = g35 + 1; // 0x9f72c
			g35 = v13;
			if (v11 >= 8) {
				// 0x9f738
				g10 = v1;
				return 1;
			}
			// 0x9f720
			a3 = g27;
			a1 = g25;
			v3 = v12;
			a2 = g26;
			v2 = v13;
			// branch -> 0x9f688
			continue;
		}
		goto lab_0x9f6e8;
		goto lab_0x9f720;
	}
}

// Address range: 0x9f74c - 0x9faa0
int32_t function_9f74c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	// 0x9f74c
	g38 = a3;
	g37 = a2;
	g34 = a1;
	int32_t v1 = g10; // 0x9f750
	g32 = g34;
	g33 = g37;
	g35 = g38;
	g29 = a4;
	g30 = a5;
	g36 = (int32_t) * (char *)(g32 + 2) + function_9f45c();
	int32_t v2 = function_9faa0(g33, g35); // 0x9f788
	g31 = v2;
	if (v2 != 0) {
		int32_t v3 = g32; // 0x9f794
		int32_t v4 = 0;   // 0x9f830
		if (*(int32_t *)(v3 + 16) != 0) {
			// 0x9f7a4
			if (*(int32_t *)(v3 + 20) != 0) {
				// 0x9f7b8
				if (*(int32_t *)(v3 + 24) != 0) {
					// 0x9f7cc
					if (*(int32_t *)(v3 + 28) != 0) {
						// 0x9f7e0
						if (*(int32_t *)(v3 + 32) != 0) {
							// 0x9f7f4
							if (*(int32_t *)(v3 + 36) != 0) {
								// 0x9f808
								if (*(int32_t *)(v3 + 40) != 0) {
									// 0x9f81c
									if (*(int32_t *)(v3 + 44) != 0) {
										// 0x9f82c
										v4 = 32;
										// branch -> 0x9f830
									} else {
										v4 = 28;
									}
								} else {
									v4 = 24;
								}
							} else {
								v4 = 20;
							}
						} else {
							v4 = 16;
						}
					} else {
						v4 = 12;
					}
				} else {
					v4 = 8;
				}
			} else {
				v4 = 4;
			}
		}
		// 0x9f830
		*(int32_t *)(v4 + v3 + 16) = v2;
		if (g36 < (int32_t) * (char *)(g31 + 2)) {
			// 0x9f84c
			if (function_9f4c8(g32, g33, g35) != 0) {
				// 0x9f864
				*(int32_t *)(g31 + 12) = g32;
				*(char *)(g31 + 2) = (char)(0x1000000 * g36 / 0x1000000);
				*(char *)g31 = (char)(g36 + (int32_t) * (char *)(g31 + 1));
				// branch -> 0x9fa8c
			}
			// 0x9fa8c
			g10 = v1;
			return 1;
		}
		// 0x9fa8c
		g10 = v1;
		return 1;
	}
	int32_t v5 = function_9fae4(g33, g35); // 0x9f888
	g31 = v5;
	int32_t result;
	if (v5 == 0) {
		int32_t v6 = path_new_step(); // 0x9f988
		g31 = v6;
		if (v6 != 0) {
			// 0x9f99c
			*(int32_t *)(v6 + 12) = g32;
			*(char *)(g31 + 2) = (char)(0x1000000 * g36 / 0x1000000);
			*(char *)(g31 + 1) = (char)(0x1000000 * function_9f3e4(g33, g35, g29, g30) / 0x1000000);
			char *v7 = (char *)g31; // 0x9f9d0
			*v7 = (char)(g36 + (int32_t) * (char *)(g31 + 1));
			*(int32_t *)(g31 + 4) = g33;
			*(int32_t *)(g31 + 8) = g35;
			function_9fb28(v7);
			int32_t v8 = g32; // 0x9f9e0
			int32_t v9 = 0;   // 0x9fa7c
			if (*(int32_t *)(v8 + 16) != 0) {
				// 0x9f9f0
				if (*(int32_t *)(v8 + 20) != 0) {
					// 0x9fa04
					if (*(int32_t *)(v8 + 24) != 0) {
						// 0x9fa18
						if (*(int32_t *)(v8 + 28) != 0) {
							// 0x9fa2c
							if (*(int32_t *)(v8 + 32) != 0) {
								// 0x9fa40
								if (*(int32_t *)(v8 + 36) != 0) {
									// 0x9fa54
									if (*(int32_t *)(v8 + 40) != 0) {
										// 0x9fa68
										if (*(int32_t *)(v8 + 44) != 0) {
											// 0x9fa78
											v9 = 32;
											// branch -> 0x9fa7c
										} else {
											v9 = 28;
										}
									} else {
										v9 = 24;
									}
								} else {
									v9 = 20;
								}
							} else {
								v9 = 16;
							}
						} else {
							v9 = 12;
						}
					} else {
						v9 = 8;
					}
				} else {
					v9 = 4;
				}
			}
			// 0x9fa7c
			*(int32_t *)(v9 + v8 + 16) = g31;
			result = 1;
			// branch -> 0x9fa8c
		} else {
			result = 0;
		}
	} else {
		int32_t v10 = g32; // 0x9f894
		int32_t v11 = 0;   // 0x9f930
		if (*(int32_t *)(v10 + 16) != 0) {
			// 0x9f8a4
			if (*(int32_t *)(v10 + 20) != 0) {
				// 0x9f8b8
				if (*(int32_t *)(v10 + 24) != 0) {
					// 0x9f8cc
					if (*(int32_t *)(v10 + 28) != 0) {
						// 0x9f8e0
						if (*(int32_t *)(v10 + 32) != 0) {
							// 0x9f8f4
							if (*(int32_t *)(v10 + 36) != 0) {
								// 0x9f908
								if (*(int32_t *)(v10 + 40) != 0) {
									// 0x9f91c
									if (*(int32_t *)(v10 + 44) != 0) {
										// 0x9f92c
										v11 = 32;
										// branch -> 0x9f930
									} else {
										v11 = 28;
									}
								} else {
									v11 = 24;
								}
							} else {
								v11 = 20;
							}
						} else {
							v11 = 16;
						}
					} else {
						v11 = 12;
					}
				} else {
					v11 = 8;
				}
			} else {
				v11 = 4;
			}
		}
		// 0x9f930
		*(int32_t *)(v11 + v10 + 16) = v5;
		if (g36 < (int32_t) * (char *)(g31 + 2)) {
			// 0x9f94c
			if (function_9f4c8(g32, g33, g35) != 0) {
				// 0x9f964
				*(int32_t *)(g31 + 12) = g32;
				int32_t v12 = g31; // 0x9f96c
				g34 = v12;
				*(char *)(v12 + 2) = (char)(0x1000000 * g36 / 0x1000000);
				int32_t v13 = g31;                      // 0x9f974
				unsigned char v14 = *(char *)(v13 + 1); // 0x9f974
				*(char *)v13 = (char)(g36 + (int32_t)v14);
				function_9fb88(v12);
				result = 1;
				// branch -> 0x9fa8c
			} else {
				result = 1;
			}
		} else {
			result = 1;
		}
	}
	// 0x9fa8c
	g10 = v1;
	return result;
}

// Address range: 0x9faa0 - 0x9fae4
int32_t function_9faa0(int32_t a1, int32_t a2)
{
	int32_t result = *(int32_t *)(*(int32_t *)*(int32_t *)(g23 - 0x6fb0) + 48);
	if (result == 0) {
		// 0x9fadc
		return 0;
	}
	while (true) {
		// 0x9fab0
		if (*(int32_t *)(result + 4) == a1) {
			// 0x9fabc
			if (*(int32_t *)(result + 8) == a2) {
				// 0x9fac8
				return result;
			}
		}
		int32_t v1 = *(int32_t *)(result + 48);
		if (v1 == 0) {
			// break -> 0x9fad4
			break;
		}
		result = v1;
		// continue -> 0x9fab0
	}
	// 0x9fad4
	// branch -> 0x9fadc
	// 0x9fadc
	return 0;
}

// Address range: 0x9fae4 - 0x9fb28
int32_t function_9fae4(int32_t a1, int32_t a2)
{
	int32_t result = *(int32_t *)(*(int32_t *)*(int32_t *)(g23 - 0x6fb4) + 48);
	if (result == 0) {
		// 0x9fb20
		return 0;
	}
	while (true) {
		// 0x9faf4
		if (*(int32_t *)(result + 4) == a1) {
			// 0x9fb00
			if (*(int32_t *)(result + 8) == a2) {
				// 0x9fb0c
				return result;
			}
		}
		int32_t v1 = *(int32_t *)(result + 48);
		if (v1 == 0) {
			// break -> 0x9fb18
			break;
		}
		result = v1;
		// continue -> 0x9faf4
	}
	// 0x9fb18
	// branch -> 0x9fb20
	// 0x9fb20
	return 0;
}

// Address range: 0x9fb28 - 0x9fb88
int32_t function_9fb28(char *a1)
{
	int32_t result = (int32_t)a1;
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x6fb0); // 0x9fb2c
	int32_t *v2 = (int32_t *)(v1 + 48);                  // 0x9fb34
	int32_t v3 = *v2;                                    // 0x9fb34
	if (v3 == 0) {
		// 0x9fb40
		*v2 = result;
		return result;
	}
	// branch -> 0x9fb6c
	while (true) {
		int32_t v4 = v3; // 0x9fb7c
		if ((int32_t) * (char *)v3 < result / 0x1000000) {
			// 0x9fb5c
			v1 = v3;
			int32_t v5 = *(int32_t *)(v3 + 48); // 0x9fb60
			if (v5 == 0) {
				// break -> 0x9fb7c
				break;
			}
			v3 = v5;
			// continue -> 0x9fb6c
			continue;
		}
		// 0x9fb7c
		*(int32_t *)(result + 48) = v4;
		*(int32_t *)(v1 + 48) = result;
		return result;
	}
	// 0x9fb7c
	*(int32_t *)(result + 48) = 0;
	*(int32_t *)(v1 + 48) = result;
	return result;
}

// Address range: 0x9fb88 - 0x9fc6c
int32_t function_9fb88(int32_t a1)
{
	// 0x9fb88
	g36 = *(int32_t *)(g23 - 0x6fb8);
	int32_t result = function_9fc6c(); // 0x9fb9c
	if (*(int32_t *)g36 == 0) {
		// 0x9fc58
		return result;
	}
lab_0x9fba4:
	while (true) {
		int32_t v1 = function_9fc8c(); // 0x9fba4
		g31 = v1;
		g35 = v1;
		g33 = 0;
		// branch -> 0x9fbb4
		int32_t result2; // 0x9fc689
		while (true) {
			int32_t v2 = *(int32_t *)(v1 + 16); // 0x9fbb4
			g32 = v2;
			result2 = v1;
			if (v2 != 0) {
				// 0x9fbc0
				g37 = *(int32_t *)(v2 + 4);
				g34 = g31;
				g38 = *(int32_t *)(v2 + 8);
				int32_t v3 = function_9f45c();                  // 0x9fbcc
				int32_t v4 = g31;                               // 0x9fbd0
				int32_t v5 = g32;                               // 0x9fbd4
				int32_t v6 = (int32_t) * (char *)(v4 + 2) + v3; // 0x9fbdc
				if (v6 < (int32_t) * (char *)(v5 + 2)) {
					// 0x9fbec
					if (function_9f4c8(v4, *(int32_t *)(v5 + 4), *(int32_t *)(v5 + 8)) != 0) {
						// 0x9fc04
						*(int32_t *)(g32 + 12) = g31;
						g34 = g31;
						int32_t v7 = g32; // 0x9fc0c
						g37 = *(int32_t *)(v7 + 4);
						g38 = *(int32_t *)(v7 + 8);
						int32_t v8 = function_9f45c();         // 0x9fc14
						unsigned char v9 = *(char *)(g31 + 2); // 0x9fc18
						*(char *)(g32 + 2) = (char)((int32_t)v9 + v8);
						int32_t v10 = g32; // 0x9fc24
						g34 = v10;
						char v11 = *(char *)(v10 + 1); // 0x9fc2c
						*(char *)v10 = v11 + *(char *)(v10 + 2);
						function_9fc6c();
						// branch -> 0x9fc3c
					}
				}
				int32_t v12 = g33 + 1; // 0x9fc3c
				g33 = v12;
				int32_t v13 = g35 + 4; // 0x9fc40
				g35 = v13;
				if (v12 >= 8) {
					// break -> 0x9fc4c
					break;
				}
				v1 = v13;
				// continue -> 0x9fbb4
				continue;
			}
			// 0x9fc4c
			if (*(int32_t *)g36 == 0) {
				// break (via goto) -> 0x9fc58
				goto lab_0x9fc58;
			}
			// continue (via goto) -> 0x9fba4
			goto lab_0x9fba4;
		}
	lab_0x9fc58:
		// 0x9fc58
		return result2;
	}
}

// Address range: 0x9fc6c - 0x9fc8c
int32_t function_9fc6c(void)
{
	int32_t *v1 = (int32_t *)*(int32_t *)(g23 - 0x6fb8); // 0x9fc74
	int32_t v2 = *v1;                                    // 0x9fc74
	*v1 = v2 + 1;
	*(int32_t *)(*(int32_t *)(g23 - 0x6fc0) + 4 * v2) = g34;
	return g34;
}

// Address range: 0x9fc8c - 0x9fcac
int32_t function_9fc8c(void)
{
	int32_t *v1 = (int32_t *)*(int32_t *)(g23 - 0x6fb8); // 0x9fc94
	int32_t v2 = *v1 - 1;                                // 0x9fc98
	*v1 = v2;
	return *(int32_t *)(*(int32_t *)(g23 - 0x6fc0) + 4 * v2);
}

// Address range: 0x9fcac - 0x9fd10
int32_t path_new_step(void)
{
	int32_t v1 = g36;                                    // 0x9fcac
	int32_t *v2 = (int32_t *)*(int32_t *)(g23 - 0x6fac); // 0x9fcc0
	int32_t v3 = *v2;                                    // 0x9fcc0
	int32_t result;
	if (v3 != 300) {
		// 0x9fcd4
		*v2 = v3 + 1;
		int32_t v4 = 52 * v3 + *(int32_t *)(g23 - 0x6fc4); // 0x9fce4
		g36 = v4;
		g37 = 0;
		g38 = 52;
		function_e3f00(v4, 0, 52);
		result = g36;
		// branch -> 0x9fcfc
	} else {
		result = 0;
	}
	// 0x9fcfc
	g36 = v1;
	return result;
}