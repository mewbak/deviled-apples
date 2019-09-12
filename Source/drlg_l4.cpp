
// Address range: 0x467b8 - 0x46930
int32_t function_467b8(void)
{
	int32_t v1 = 1;                              // r6
	int32_t v2 = *(int32_t *)(g23 - 0x77cc) + 1; // 0x467c0
	// branch -> 0x467c4
	int32_t result; // 0x46910
	while (true) {
		int32_t v3 = v2 + 40; // 0x467c8
		int32_t v4 = 13;      // ctr
		int32_t v5 = 1;       // r5
		// branch -> 0x467d4
		while (true) {
			char v6 = *(char *)v3; // 0x467d4
			int32_t v7 = 0;
			if (v6 == 3) {
				// 0x467e4
				v7 = 1;
				// branch -> 0x467e8
			}
			if (v6 == 4) {
				// 0x467f0
				v7 = 1;
				// branch -> 0x467f4
			}
			if (v6 == 8) {
				// 0x467fc
				v7 = 1;
				// branch -> 0x46800
			}
			// 0x46800
			int32_t v8; // 0x4683c
			if (v6 == 15) {
				// 0x4680c
				// branch -> 0x46814
			} else {
				// 0x4680c
				if (v7 == 0) {
					v8 = v3;
				lab_0x4683c_2:;
					int32_t v9 = v8 + 40;   // 0x4683c
					char v10 = *(char *)v9; // 0x4683c
					v3 = v9;
					int32_t v11 = 0;
					if (v10 == 3) {
						// 0x4684c
						v11 = 1;
						// branch -> 0x46850
					}
					if (v10 == 4) {
						// 0x46858
						v11 = 1;
						// branch -> 0x4685c
					}
					if (v10 == 8) {
						// 0x46864
						v11 = 1;
						// branch -> 0x46868
					}
					// 0x46868
					if (v10 == 15) {
						// 0x46874
						// branch -> 0x4687c
					} else {
						// 0x46874
						if (v11 == 0) {
						lab_0x468a4_2:;
							int32_t v12 = v9 + 40;   // 0x468a4
							char v13 = *(char *)v12; // 0x468a4
							v3 = v12;
							int32_t v14 = 0;
							if (v13 == 3) {
								// 0x468b8
								v14 = 1;
								// branch -> 0x468bc
							}
							if (v13 == 4) {
								// 0x468c4
								v14 = 1;
								// branch -> 0x468c8
							}
							if (v13 == 8) {
								// 0x468d0
								v14 = 1;
								// branch -> 0x468d4
							}
							// 0x468d4
							if (v13 == 15) {
								// 0x468e0
								// branch -> 0x468e8
							} else {
								// 0x468e0
								if (v14 == 0) {
								lab_0x46910_2:
									// 0x46910
									result = v12 + 40;
									v5 += 2;
									int32_t v15 = v4 - 1; // 0x46918
									v4 = v15;
									if (v15 == 0) {
										// break -> 0x4691c
										break;
									}
									v3 = result;
									// continue -> 0x467d4
									continue;
								}
							}
							char *v16 = (char *)v9; // 0x468e8
							if (*v16 == 6) {
								// 0x468f4
								*v16 = 47;
								v12 = v3;
								// branch -> 0x468fc
							}
							char *v17 = (char *)(v12 - 41); // 0x468fc
							if (*v17 != 6) {
								goto lab_0x46910_2;
							}
							// 0x46908
							*v17 = 48;
							v12 = v3;
							// branch -> 0x46910
							goto lab_0x46910_2;
						}
					}
					char *v18 = (char *)v8; // 0x4687c
					if (*v18 == 6) {
						// 0x46888
						*v18 = 47;
						v9 = v3;
						// branch -> 0x46890
					}
					char *v19 = (char *)(v9 - 41); // 0x46890
					if (*v19 != 6) {
						goto lab_0x468a4_2;
					}
					// 0x4689c
					*v19 = 48;
					v9 = v3;
					// branch -> 0x468a4
					goto lab_0x468a4_2;
				}
			}
			char *v20 = (char *)(v3 - 40); // 0x46814
			if (*v20 == 6) {
				// 0x46820
				*v20 = 47;
				// branch -> 0x46828
			}
			char *v21 = (char *)(v3 - 41); // 0x46828
			if (*v21 != 6) {
				v8 = v3;
				goto lab_0x4683c_2;
			}
			// 0x46834
			*v21 = 48;
			v8 = v3;
			// branch -> 0x4683c
			goto lab_0x4683c_2;
		}
		int32_t v22 = v1 + 1; // 0x4691c
		v1 = v22;
		if (v22 >= 40) {
			// break -> 0x4692c
			break;
		}
		v2++;
		// continue -> 0x467c4
	}
	// 0x4692c
	return result;
}

// Address range: 0x46930 - 0x469f0
int32_t function_46930(void)
{
	// 0x46930
	g34 = *(int32_t *)(g23 - 0x72c8);
	memset();
	int32_t v1;
	g34 = *(int32_t *)(v1 - 0x72cc);
	memset();
	int32_t v2 = *(int32_t *)(v1 - 0x77cc); // 0x4695c
	int32_t v3 = 0;                         // r8
	int32_t v4 = *(int32_t *)(v1 - 0x7514); // 0x46964
	                                        // branch -> 0x46968
lab_0x46968:
	while (true) {
		int32_t v5 = v2;     // r4
		int32_t v6 = 5;      // ctr
		int32_t v7 = v4;     // r5
		int32_t result = 30; // r3
		int32_t v8 = 0;      // r0
		int32_t v9 = v2;     // 0x46980
		char v10 = 30;
		// branch -> 0x46980
		while (true) {
			// 0x46980
			*(char *)v9 = v10;
			*(char *)v7 = (char)v8;
			*(char *)(v5 + 40) = (char)result;
			*(char *)(v7 + 40) = (char)v8;
			*(char *)(v5 + 80) = (char)result;
			*(char *)(v7 + 80) = (char)v8;
			*(char *)(v5 + 120) = (char)result;
			*(char *)(v7 + 120) = (char)v8;
			*(char *)(v5 + 160) = (char)result;
			*(char *)(v7 + 160) = (char)v8;
			*(char *)(v5 + 200) = (char)result;
			*(char *)(v7 + 200) = (char)v8;
			*(char *)(v5 + 240) = (char)result;
			*(char *)(v7 + 240) = (char)v8;
			*(char *)(v5 + 280) = (char)result;
			v5 += 320;
			*(char *)(v7 + 280) = (char)v8;
			v7 += 320;
			int32_t v11 = v6 - 1; // 0x469c8
			v6 = v11;
			if (v11 == 0) {
				int32_t v12 = v3 + 1; // 0x469cc
				v3 = v12;
				if (v12 >= 40) {
					// break (via goto) -> 0x469e0
					goto lab_0x469e0;
				}
				v4++;
				v2++;
				// continue (via goto) -> 0x46968
				goto lab_0x46968;
			} else {
				// 0x46980
				v9 = v5;
				v10 = result;
				// branch -> 0x46980
				continue;
			}
		}
	lab_0x469e0:
		// 0x469e0
		return result;
	}
}

// Address range: 0x469f0 - 0x46a8c
int32_t function_469f0(int32_t a1)
{
	int32_t v1 = g36;                        // 0x469f0
	int32_t v2 = g10;                        // 0x469f4
	int32_t v3 = *(int32_t *)(g23 - 0x7524); // 0x469f8
	g36 = v3;
	g35 = *(int32_t *)(g23 - 0x7528);
	*(int32_t *)v3 = 0;
	if (QuestStatus(11) != 0) {
		int32_t v4 = LoadFileInMem(*(int32_t *)(g23 - 0x62c8), NULL); // 0x46a2c
		*(int32_t *)g35 = v4;
		*(int32_t *)g36 = 1;
		// branch -> 0x46a3c
	}
	int32_t result = *(int32_t *)(g23 - 0x77e4); // 0x46a3c
	if (*(char *)result != 15) {
		// 0x46a74
		g36 = v1;
		g10 = v2;
		return result;
	}
	int32_t v5 = *(int32_t *)(g23 - 0x77f0); // 0x46a4c
	int32_t result2;                         // 0x46a64
	if (*(char *)v5 != 1) {
		// 0x46a5c
		result2 = LoadFileInMem(*(int32_t *)(g23 - 0x62cc), NULL);
		*(int32_t *)g35 = result2;
		*(int32_t *)g36 = 1;
		// branch -> 0x46a74
	} else {
		result2 = v5;
	}
	// 0x46a74
	g36 = v1;
	g10 = v2;
	return result2;
}

// Address range: 0x46a8c - 0x46ab0
int32_t function_46a8c(int32_t a1)
{
	// 0x46a8c
	return MemFreeDbg((int32_t *)*(int32_t *)(g23 - 0x7528));
}

// Address range: 0x46ab0 - 0x46bb4
int32_t function_46ab0(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x46ab0
	g36 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x7528); // 0x46ac0
	g35 = v2;
	int32_t v3 = g33; // 0x46ac4
	g33 = a2;
	g34 = *(int32_t *)v2;
	int32_t v4 = function_c9948();             // 0x46ad8
	int32_t v5 = (int32_t) * (char *)v4;       // r9
	int32_t v6 = 0;                            // r12
	int32_t v7 = (int32_t) * (char *)(v4 + 2); // r10
	*(int32_t *)*(int32_t *)(g23 - 0x754c) = g36;
	*(int32_t *)*(int32_t *)(g23 - 0x7550) = g33;
	*(int32_t *)*(int32_t *)(g23 - 0x7554) = v5;
	*(int32_t *)*(int32_t *)(g23 - 0x7558) = v7;
	int32_t v8 = g33 + *(int32_t *)(g23 - 0x77cc);         // 0x46b10
	int32_t v9 = g33 + *(int32_t *)(g23 - 0x7514);         // 0x46b18
	int32_t v10 = *(int32_t *)(*(int32_t *)g35 + 136) + 4; // 0x46b20
	int32_t v11 = v6;                                      // 0x46b881
	if (v11 < v7) {
		int32_t v12 = v7; // 0x46b8816
		while (true) {
			int32_t v13 = v5;  // ctr
			int32_t v14 = 0;   // r11
			int32_t v15 = v12; // 0x46b88
			int32_t v16 = v11; // 0x46b84
			int32_t v17 = v10; // 0x46b3c8
			if (v5 >= 1) {
				int32_t v18 = 0;   // 0x46b64
				int32_t v19 = v10; // 0x46b3c
				int32_t v20;       // 0x46b70
				while (true) {
					char v21 = *(char *)v19; // 0x46b3c
					int32_t v22 = g36 + v18; // 0x46b64
					if (v21 == 0) {
						// 0x46b64
						*(char *)(v8 + 40 * v22) = (char)6;
						// branch -> 0x46b70
					} else {
						int32_t v23 = 40 * v22; // 0x46b4c
						*(char *)(v8 + v23) = v21;
						char *v24 = (char *)(v23 + v9); // 0x46b54
						*v24 = *v24 | -128;
						// branch -> 0x46b70
					}
					// 0x46b70
					v20 = v10 + 2;
					v10 = v20;
					int32_t v25 = v14 + 1; // 0x46b74
					v14 = v25;
					int32_t v26 = v13 - 1; // 0x46b78
					v13 = v26;
					if (v26 == 0) {
						// break -> 0x46b7c
						break;
					}
					v18 = v25;
					v19 = v20;
					// continue -> 0x46b3c
				}
				// 0x46b7c
				v15 = v7;
				v16 = v6;
				v17 = v20;
				// branch -> 0x46b7c
			}
			int32_t v27 = v16 + 1; // 0x46b84
			v6 = v27;
			if (v27 >= v15) {
				// break -> 0x46b88
				break;
			}
			v12 = v15;
			v11 = v27;
			v9++;
			v8++;
			v10 = v17;
			// continue -> 0x46b28
		}
		// 0x46b88
		// branch -> 0x46b90
	}
	int32_t result = function_c9acc(*(int32_t *)g35); // 0x46b94
	g36 = v1;
	g33 = v3;
	return result;
}

// Address range: 0x46bb4 - 0x46c8c
int32_t function_46bb4(int32_t a1)
{
	int32_t v1 = 1;                              // r11
	int32_t v2 = g23 - 781;                      // r6
	int32_t v3 = *(int32_t *)(g23 - 0x77cc);     // 0x46bc0
	int32_t v4 = *(int32_t *)(g23 - 0x72cc) + 1; // 0x46bc4
	                                             // branch -> 0x46bc8
lab_0x46bc8:
	while (true) {
		int32_t v5 = v4 + 80; // 0x46bcc
		int32_t v6 = 13;      // ctr
		int32_t v7 = v3;      // r8
		int32_t v8 = v3;      // 0x46c04
		// branch -> 0x46bd8
		int32_t result; // r3
		while (true) {
			unsigned char v9 = *(char *)(v5 + 81);                  // 0x46bd8
			int32_t v10 = (int32_t) * (char *)(v5 + 1);             // 0x46bdc
			unsigned char v11 = *(char *)(v5 + 80);                 // 0x46be0
			unsigned char v12 = *(char *)v5;                        // 0x46bec
			int32_t v13 = (int32_t)v12 + 4 * v10 + 8 * (int32_t)v9; // 0x46bf4
			char v14 = *(char *)(v2 + v13 + 2 * (int32_t)v11);      // 0x46c00
			*(char *)v8 = v14;
			int32_t v15 = v5;                                        // 0x46c08
			unsigned char v16 = *(char *)(v15 + 241);                // 0x46c08
			unsigned char v17 = *(char *)(v15 + 240);                // 0x46c0c
			int32_t v18 = (int32_t) * (char *)(v15 + 161);           // 0x46c10
			unsigned char v19 = *(char *)(v15 + 160);                // 0x46c20
			int32_t v20 = (int32_t)v19 + 4 * v18 + 8 * (int32_t)v16; // 0x46c28
			char v21 = *(char *)(v2 + v20 + 2 * (int32_t)v17);       // 0x46c30
			*(char *)(v7 + 40) = v21;
			int32_t v22 = v5;                              // 0x46c38
			unsigned char v23 = *(char *)(v22 + 401);      // 0x46c38
			unsigned char v24 = *(char *)(v22 + 400);      // 0x46c3c
			int32_t v25 = (int32_t) * (char *)(v22 + 321); // 0x46c40
			unsigned char v26 = *(char *)(v22 + 320);      // 0x46c50
			v5 = v22 + 480;
			int32_t v27 = (int32_t)v26 + 4 * v25 + 8 * (int32_t)v23; // 0x46c5c
			result = v27;
			char v28 = *(char *)(v2 + v27 + 2 * (int32_t)v24); // 0x46c64
			*(char *)(v7 + 80) = v28;
			int32_t v29 = v7 + 120; // 0x46c6c
			v7 = v29;
			int32_t v30 = v6 - 1; // 0x46c70
			v6 = v30;
			if (v30 == 0) {
				int32_t v31 = v1 + 2; // 0x46c74
				v1 = v31;
				if (v31 >= 78) {
					// break (via goto) -> 0x46c88
					goto lab_0x46c88;
				}
				v3++;
				v4 += 2;
				// continue (via goto) -> 0x46bc8
				goto lab_0x46bc8;
			} else {
				// 0x46bd8
				v8 = v29;
				// branch -> 0x46bd8
				continue;
			}
		}
	lab_0x46c88:
		// 0x46c88
		return result;
	}
}

// Address range: 0x46c8c - 0x46d68
int32_t function_46c8c(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x46c8c
	int32_t result = 1;                      // 0x46ca4
	// branch -> 0x46ca8
	while (true) {
		int32_t v2 = 40 * (result + a1); // 0x46cac
		int32_t v3 = v2 + v1 + a2;       // 0x46cb0
		if (*(char *)v3 == 6) {
			// 0x46cc0
			if (*(char *)(v2 + *(int32_t *)(g23 - 0x7514) + a2) == 0) {
				// 0x46ccc
				if (*(char *)(v3 - 1) == 6) {
					// 0x46cd8
					if (*(char *)(v3 + 1) == 6) {
						// 0x46ca4
						result++;
						// branch -> 0x46ca8
						continue;
					}
				}
			}
		}
		char v4 = *(char *)(v2 + a2 + v1); // 0x46ce8
		int32_t v5 = 0;
		if (v4 == 10) {
			// 0x46cf8
			v5 = 1;
			// branch -> 0x46cfc
		}
		if (v4 == 12) {
			// 0x46d04
			v5 = 1;
			// branch -> 0x46d08
		}
		if (v4 == 13) {
			// 0x46d10
			v5 = 1;
			// branch -> 0x46d14
		}
		if (v4 == 15) {
			// 0x46d1c
			v5 = 1;
			// branch -> 0x46d20
		}
		if (v4 == 16) {
			// 0x46d28
			v5 = 1;
			// branch -> 0x46d2c
		}
		if (v4 == 21) {
			// 0x46d34
			v5 = 1;
			// branch -> 0x46d38
		}
		if (v4 == 22) {
			// 0x46d40
			v5 = 1;
			// branch -> 0x46d44
		}
		if (result <= 3) {
			// 0x46d4c
			v5 = 0;
			// branch -> 0x46d50
		}
		// 0x46d50
		if (v5 == 0) {
			// 0x46d60
			return -1;
		}
		// 0x46d58
		return result;
	}
}

// Address range: 0x46d68 - 0x46e54
int32_t function_46d68(int32_t a1, int32_t a2)
{
	int32_t v1 = 40 * a1 + a2;                    // 0x46d74
	int32_t v2 = *(int32_t *)(g23 - 0x77cc) + v1; // 0x46d7c
	int32_t v3 = v2 + 1;                          // 0x46d84
	int32_t result = 1;                           // 0x46e48
	int32_t v4;                                   // 0x46e44
	int32_t v5;
	int32_t v6;
	int32_t v7;
	int32_t v8;
	int32_t v9;
	int32_t v10;
	int32_t v11;
	int32_t v12;
	char v13; // 0x46dd0
	if (*(char *)v3 != 6) {
		// 0x46dd0
		v13 = *(char *)(result + v2);
		v12 = 0;
		if (v13 == 8) {
			// 0x46de0
			v12 = 1;
			// branch -> 0x46de4
		}
		// 0x46de4
		v11 = v12;
		if (v13 == 9) {
			// 0x46dec
			v11 = 1;
			// branch -> 0x46df0
		}
		// 0x46df0
		v10 = v11;
		if (v13 == 11) {
			// 0x46df8
			v10 = 1;
			// branch -> 0x46dfc
		}
		// 0x46dfc
		v9 = v10;
		if (v13 == 14) {
			// 0x46e04
			v9 = 1;
			// branch -> 0x46e08
		}
		// 0x46e08
		v8 = v9;
		if (v13 == 15) {
			// 0x46e10
			v8 = 1;
			// branch -> 0x46e14
		}
		// 0x46e14
		v7 = v8;
		if (v13 == 16) {
			// 0x46e1c
			v7 = 1;
			// branch -> 0x46e20
		}
		// 0x46e20
		v6 = v7;
		if (v13 == 21) {
			// 0x46e28
			v6 = 1;
			// branch -> 0x46e2c
		}
		// 0x46e2c
		v5 = v6;
		if (v13 == 23) {
			// 0x46e34
			v5 = 1;
			// branch -> 0x46e38
		}
		// 0x46e38
		v4 = v5;
		if (result <= 3) {
			// 0x46e40
			v4 = 0;
			// branch -> 0x46e44
		}
		// 0x46e44
		if (v4 == 0) {
			// 0x46e4c
			return -1;
		}
		// bb
		return result;
	}
	int32_t v14 = 1;                                   // 0x46d9c
	int32_t v15 = v1 + 1 + *(int32_t *)(g23 - 0x7514); // 0x46d98
	while (true) {
		// 0x46dac
		if (*(char *)v15 == 0) {
			// 0x46db8
			if (*(char *)(v3 - 40) == 6) {
				// 0x46dc4
				if (*(char *)(v3 + 40) == 6) {
					int32_t v16 = v3 + 1;  // 0x46d94
					int32_t v17 = v14 + 1; // 0x46d9c
					if (*(char *)v16 != 6) {
						result = v17;
						// break -> 0x46dd0
						break;
					}
					v14 = v17;
					v3 = v16;
					v15++;
					// continue -> 0x46dac
					continue;
				} else {
					result = v14;
				}
			} else {
				result = v14;
			}
		} else {
			result = v14;
		}
	}
	// 0x46dd0
	v13 = *(char *)(result + v2);
	v12 = 0;
	if (v13 == 8) {
		// 0x46de0
		v12 = 1;
		// branch -> 0x46de4
	}
	// 0x46de4
	v11 = v12;
	if (v13 == 9) {
		// 0x46dec
		v11 = 1;
		// branch -> 0x46df0
	}
	// 0x46df0
	v10 = v11;
	if (v13 == 11) {
		// 0x46df8
		v10 = 1;
		// branch -> 0x46dfc
	}
	// 0x46dfc
	v9 = v10;
	if (v13 == 14) {
		// 0x46e04
		v9 = 1;
		// branch -> 0x46e08
	}
	// 0x46e08
	v8 = v9;
	if (v13 == 15) {
		// 0x46e10
		v8 = 1;
		// branch -> 0x46e14
	}
	// 0x46e14
	v7 = v8;
	if (v13 == 16) {
		// 0x46e1c
		v7 = 1;
		// branch -> 0x46e20
	}
	// 0x46e20
	v6 = v7;
	if (v13 == 21) {
		// 0x46e28
		v6 = 1;
		// branch -> 0x46e2c
	}
	// 0x46e2c
	v5 = v6;
	if (v13 == 23) {
		// 0x46e34
		v5 = 1;
		// branch -> 0x46e38
	}
	// 0x46e38
	v4 = v5;
	if (result <= 3) {
		// 0x46e40
		v4 = 0;
		// branch -> 0x46e44
	}
	// 0x46e44
	if (v4 == 0) {
		// 0x46e4c
		return -1;
	}
	// bb
	return result;
}

// Address range: 0x46e54 - 0x47084
int32_t function_46e54(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36;                        // 0x46e54
	int32_t v2 = g10;                        // 0x46e58
	int32_t v3 = *(int32_t *)(g23 - 0x77cc); // 0x46e5c
	g36 = v3;
	int32_t v4 = a2 + v3 + 40 * a1; // 0x46e80
	int32_t v5 = v4;                // r3
	char *v6 = (char *)v4;          // 0x46e84
	if (*v6 == 13) {
		// 0x46e90
		*v6 = 17;
		v4 = v5;
		// branch -> 0x46e98
	}
	char *v7 = (char *)v4; // 0x46e98
	if (*v7 == 16) {
		// 0x46ea4
		*v7 = 11;
		v4 = v5;
		// branch -> 0x46eac
	}
	char *v8 = (char *)v4; // 0x46eac
	if (*v8 == 12) {
		// 0x46eb8
		*v8 = 14;
		// branch -> 0x46ec0
	}
	int32_t v9 = a3; // 0x46f8c
	int32_t v10;     // 0x47020
	char *v11;       // 0x46f9c
	char *v12;       // 0x46fb0
	char *v13;       // 0x46fc4
	char *v14;       // 0x46fd8
	int32_t v15;     // 0x47000
	int32_t result;  // 0x47048
	int32_t v16;     // 0x46f98
	int32_t v17;     // 0x46fc0
	int32_t v18;     // 0x46fd4
	int32_t v19;     // 0x46fe8
	int32_t v20;     // 0x47010
	char *v21;       // 0x47048
	if (a3 >= 2) {
		int32_t v22 = a3; // 0x46f64
		int32_t v23 = 1;  // 0x46f64
		int32_t v24;
		int32_t v25; // 0x46f88
		int32_t v26; // 0x46f8831
		int32_t v27; // 0x47060
		if (a3 >= 10) {
			int32_t v28 = a2 + g36;     // 0x46ee8
			int32_t v29 = (a3 - 2) / 8; // ctr
			if (a3 >= 10) {
				int32_t v30 = 1; // 0x46ef4
				while (true) {
					int32_t v31 = a1 + v30; // 0x46ef4
					int32_t v32 = v31;      // r10
					int32_t v33 = 2;        // r11
					*(char *)(40 * v31 + v28) = 2;
					*(char *)(v28 + 40 * (v31 + 1)) = (char)v33;
					*(char *)(40 * (v31 + 2) + v28) = (char)v33;
					*(char *)(40 * (v31 + 3) + v28) = (char)v33;
					int32_t v34 = 40 * (v32 + 4); // 0x46f44
					*(char *)(v34 + v28) = (char)v33;
					int32_t v35 = 40 * (v32 + 5); // 0x46f4c
					*(char *)(v35 + v28) = (char)v33;
					int32_t v36 = 40 * (v32 + 6); // 0x46f54
					*(char *)(v36 + v28) = (char)v33;
					int32_t v37 = 40 * (v32 + 7); // 0x46f58
					*(char *)(v37 + v28) = (char)v33;
					int32_t v38 = v29 - 1; // 0x46f5c
					v29 = v38;
					int32_t v39 = v30 + 8;
					if (v38 == 0) {
						// 0x47060
						v22 = a3;
						v23 = v39;
						// branch -> 0x47060
						// 0x47060
						v27 = a2 + g36;
						v9 = v22;
						if (v22 > v23) {
							// 0x46f78
							*(char *)(40 * (a1 + v23) + v27) = 2;
							v26 = v22 - v23 - 1;
							if (v26 != 0) {
								v24 = v23 + 1;
								*(char *)(40 * (a1 + v24) + v27) = (char)2;
								v25 = v26 - 1;
								while (v25 != 0) {
									// 0x46f78
									v24++;
									*(char *)(40 * (a1 + v24) + v27) = (char)2;
									v25--;
									// continue -> 0x46f78
								}
								// 0x46f8c
								// branch -> 0x46f8c
								// 0x46f8c
								v16 = 40 * (a1 + a3) + a2 + g36;
								v5 = v16;
								v11 = (char *)v16;
								v17 = v16;
								if (*v11 == 15) {
									// 0x46fa8
									*v11 = 14;
									v17 = v5;
									// branch -> 0x46fb0
								}
								// 0x46fb0
								v12 = (char *)v17;
								v18 = v17;
								if (*v12 == 10) {
									// 0x46fbc
									*v12 = 17;
									v18 = v5;
									// branch -> 0x46fc4
								}
								// 0x46fc4
								v13 = (char *)v18;
								v19 = v18;
								if (*v13 == 21) {
									// 0x46fd0
									*v13 = 23;
									v19 = v5;
									// branch -> 0x46fd8
								}
								// 0x46fd8
								v14 = (char *)v19;
								if (*v14 == 22) {
									// 0x46fe4
									*v14 = 29;
									// branch -> 0x46fec
								}
								// 0x46fec
								g37 = a3 - 3;
								v15 = 40 * (random(0) + 1 + a1);
								v20 = a2 + v15 + g36;
								v5 = v20;
								*(char *)v20 = 57;
								v10 = v5;
								*(char *)(v10 + 80) = 56;
								*(char *)(v5 + 40) = (char)60;
								if (*(char *)(v5 - 1) == 6) {
									// 0x47038
									*(char *)(v10 - 1) = 58;
									// branch -> 0x47040
								}
								// 0x47040
								result = a2 + v15 + g36 + 39;
								v21 = (char *)result;
								if (*v21 != 6) {
									// 0x47068
									g36 = v1;
									g10 = v2;
									return result;
								}
								// 0x47054
								*v21 = 59;
								// branch -> 0x47068
								// 0x47068
								g36 = v1;
								g10 = v2;
								return result;
							}
							// 0x46f8c
							v9 = a3;
							// branch -> 0x46f8c
						}
						// 0x46f8c
						v16 = 40 * (a1 + v9) + a2 + g36;
						v5 = v16;
						v11 = (char *)v16;
						v17 = v16;
						if (*v11 == 15) {
							// 0x46fa8
							*v11 = 14;
							v17 = v5;
							// branch -> 0x46fb0
						}
						// 0x46fb0
						v12 = (char *)v17;
						v18 = v17;
						if (*v12 == 10) {
							// 0x46fbc
							*v12 = 17;
							v18 = v5;
							// branch -> 0x46fc4
						}
						// 0x46fc4
						v13 = (char *)v18;
						v19 = v18;
						if (*v13 == 21) {
							// 0x46fd0
							*v13 = 23;
							v19 = v5;
							// branch -> 0x46fd8
						}
						// 0x46fd8
						v14 = (char *)v19;
						if (*v14 == 22) {
							// 0x46fe4
							*v14 = 29;
							// branch -> 0x46fec
						}
						// 0x46fec
						g37 = a3 - 3;
						v15 = 40 * (random(0) + 1 + a1);
						v20 = a2 + v15 + g36;
						v5 = v20;
						*(char *)v20 = 57;
						v10 = v5;
						*(char *)(v10 + 80) = 56;
						*(char *)(v5 + 40) = (char)60;
						if (*(char *)(v5 - 1) == 6) {
							// 0x47038
							*(char *)(v10 - 1) = 58;
							// branch -> 0x47040
						}
						// 0x47040
						result = a2 + v15 + g36 + 39;
						v21 = (char *)result;
						if (*v21 != 6) {
							// 0x47068
							g36 = v1;
							g10 = v2;
							return result;
						}
						// 0x47054
						*v21 = 59;
						// branch -> 0x47068
						// 0x47068
						g36 = v1;
						g10 = v2;
						return result;
					}
					// 0x46ef4
					v30 = v39;
					// branch -> 0x46ef4
				}
			} else {
				v22 = a3;
				v23 = 1;
			}
		}
		// 0x47060
		v27 = a2 + g36;
		if (v22 > v23) {
			// 0x46f78
			*(char *)(40 * (a1 + v23) + v27) = 2;
			v26 = v22 - v23 - 1;
			if (v26 != 0) {
				v24 = v23 + 1;
				*(char *)(40 * (a1 + v24) + v27) = (char)2;
				v25 = v26 - 1;
				while (v25 != 0) {
					// 0x46f78
					v24++;
					*(char *)(40 * (a1 + v24) + v27) = (char)2;
					v25--;
					// continue -> 0x46f78
				}
				// 0x46f8c
				// branch -> 0x46f8c
				// 0x46f8c
				v16 = 40 * (a1 + a3) + a2 + g36;
				v5 = v16;
				v11 = (char *)v16;
				v17 = v16;
				if (*v11 == 15) {
					// 0x46fa8
					*v11 = 14;
					v17 = v5;
					// branch -> 0x46fb0
				}
				// 0x46fb0
				v12 = (char *)v17;
				v18 = v17;
				if (*v12 == 10) {
					// 0x46fbc
					*v12 = 17;
					v18 = v5;
					// branch -> 0x46fc4
				}
				// 0x46fc4
				v13 = (char *)v18;
				v19 = v18;
				if (*v13 == 21) {
					// 0x46fd0
					*v13 = 23;
					v19 = v5;
					// branch -> 0x46fd8
				}
				// 0x46fd8
				v14 = (char *)v19;
				if (*v14 == 22) {
					// 0x46fe4
					*v14 = 29;
					// branch -> 0x46fec
				}
				// 0x46fec
				g37 = a3 - 3;
				v15 = 40 * (random(0) + 1 + a1);
				v20 = a2 + v15 + g36;
				v5 = v20;
				*(char *)v20 = 57;
				v10 = v5;
				*(char *)(v10 + 80) = 56;
				*(char *)(v5 + 40) = (char)60;
				if (*(char *)(v5 - 1) == 6) {
					// 0x47038
					*(char *)(v10 - 1) = 58;
					// branch -> 0x47040
				}
				// 0x47040
				result = a2 + v15 + g36 + 39;
				v21 = (char *)result;
				if (*v21 == 6) {
					// 0x47054
					*v21 = 59;
					// branch -> 0x47068
				}
				// 0x47068
				g36 = v1;
				g10 = v2;
				return result;
			}
			// 0x46f8c
			v9 = a3;
			// branch -> 0x46f8c
		} else {
			v9 = v22;
		}
	}
	// 0x46f8c
	v16 = 40 * (a1 + v9) + a2 + g36;
	v5 = v16;
	v11 = (char *)v16;
	v17 = v16;
	if (*v11 == 15) {
		// 0x46fa8
		*v11 = 14;
		v17 = v5;
		// branch -> 0x46fb0
	}
	// 0x46fb0
	v12 = (char *)v17;
	v18 = v17;
	if (*v12 == 10) {
		// 0x46fbc
		*v12 = 17;
		v18 = v5;
		// branch -> 0x46fc4
	}
	// 0x46fc4
	v13 = (char *)v18;
	v19 = v18;
	if (*v13 == 21) {
		// 0x46fd0
		*v13 = 23;
		v19 = v5;
		// branch -> 0x46fd8
	}
	// 0x46fd8
	v14 = (char *)v19;
	if (*v14 == 22) {
		// 0x46fe4
		*v14 = 29;
		// branch -> 0x46fec
	}
	// 0x46fec
	g37 = a3 - 3;
	v15 = 40 * (random(0) + 1 + a1);
	v20 = a2 + v15 + g36;
	v5 = v20;
	*(char *)v20 = 57;
	v10 = v5;
	*(char *)(v10 + 80) = 56;
	*(char *)(v5 + 40) = (char)60;
	if (*(char *)(v5 - 1) == 6) {
		// 0x47038
		*(char *)(v10 - 1) = 58;
		// branch -> 0x47040
	}
	// 0x47040
	result = a2 + v15 + g36 + 39;
	v21 = (char *)result;
	if (*v21 == 6) {
		// 0x47054
		*v21 = 59;
		// branch -> 0x47068
	}
	// 0x47068
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0x47084 - 0x47278
int32_t function_47084(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36;                        // 0x47084
	int32_t v2 = g10;                        // 0x47088
	int32_t v3 = *(int32_t *)(g23 - 0x77cc); // 0x4708c
	g36 = v3;
	int32_t v4 = 40 * a1;      // 0x47098
	int32_t v5 = v4 + v3 + a2; // 0x470ac
	int32_t v6 = v5;           // r30
	char *v7 = (char *)v5;     // 0x470b4
	if (*v7 == 14) {
		// 0x470c0
		*v7 = 17;
		v5 = v6;
		// branch -> 0x470c8
	}
	char *v8 = (char *)v5; // 0x470c8
	if (*v8 == 8) {
		// 0x470d4
		*v8 = 9;
		v5 = v6;
		// branch -> 0x470dc
	}
	char *v9 = (char *)v5; // 0x470dc
	if (*v9 == 15) {
		// 0x470e8
		*v9 = 10;
		// branch -> 0x470f0
	}
	int32_t v10 = 1;  // r4
	int32_t v11 = a3; // 0x47178
	int32_t v12;      // 0x47208
	int32_t v13;      // 0x47118
	char *v14;        // 0x4717c
	char *v15;        // 0x47190
	char *v16;        // 0x471a4
	char *v17;        // 0x471b8
	char *v18;        // 0x471cc
	int32_t v19;      // 0x471f0
	int32_t result;   // 0x47238
	int32_t v20;      // 0x47178
	int32_t v21;      // 0x471a0
	int32_t v22;      // 0x471b4
	int32_t v23;      // 0x471c8
	int32_t v24;      // 0x471dc
	char *v25;        // 0x47238
	if (a3 >= 2) {
		int32_t v26 = a3; // 0x47158
		int32_t v27 = 1;  // 0x47250
		int32_t v28;      // 0x47170
		int32_t v29;      // 0x4717028
		int32_t v30;      // 0x47174
		int32_t v31;      // 0x4717430
		int32_t v32;      // 0x47250
		if (a3 >= 10) {
			// 0x4710c
			v13 = v6 + 1;
			int32_t v33 = (a3 - 2) / 8; // ctr
			int32_t v34 = 1;            // r0
			if (a3 >= 10) {
				char v35 = 1;
				while (true) {
					// 0x47128
					*(char *)v13 = v35;
					v10 += 8;
					*(char *)(v13 + 1) = (char)v34;
					*(char *)(v13 + 2) = (char)v34;
					*(char *)(v13 + 3) = (char)v34;
					*(char *)(v13 + 4) = (char)v34;
					*(char *)(v13 + 5) = (char)v34;
					*(char *)(v13 + 6) = (char)v34;
					*(char *)(v13 + 7) = (char)v34;
					int32_t v36 = v13 + 8; // 0x4714c
					int32_t v37 = v33 - 1; // 0x47150
					v33 = v37;
					if (v37 == 0) {
						// 0x47250
						v26 = a3;
						v27 = v10;
						// branch -> 0x47250
						// 0x47250
						v32 = v6 + v27;
						v11 = v26;
						if (v26 > v27) {
							// 0x4716c
							*(char *)v32 = 1;
							v29 = v32 + 1;
							v31 = v26 - v27 - 1;
							if (v31 != 0) {
								*(char *)v29 = (char)1;
								v28 = v29 + 1;
								v30 = v31 - 1;
								while (v30 != 0) {
									// 0x4716c
									*(char *)v28 = (char)1;
									v28++;
									v30--;
									// continue -> 0x4716c
								}
								// 0x47178
								// branch -> 0x47178
								// 0x47178
								v20 = v6 + a3;
								v13 = v20;
								v14 = (char *)v20;
								v21 = v20;
								if (*v14 == 11) {
									// 0x47188
									*v14 = 17;
									v21 = v13;
									// branch -> 0x47190
								}
								// 0x47190
								v15 = (char *)v21;
								v22 = v21;
								if (*v15 == 9) {
									// 0x4719c
									*v15 = 10;
									v22 = v13;
									// branch -> 0x471a4
								}
								// 0x471a4
								v16 = (char *)v22;
								v23 = v22;
								if (*v16 == 16) {
									// 0x471b0
									*v16 = 13;
									v23 = v13;
									// branch -> 0x471b8
								}
								// 0x471b8
								v17 = (char *)v23;
								v24 = v23;
								if (*v17 == 21) {
									// 0x471c4
									*v17 = 22;
									v24 = v13;
									// branch -> 0x471cc
								}
								// 0x471cc
								v18 = (char *)v24;
								if (*v18 == 23) {
									// 0x471d8
									*v18 = 29;
									// branch -> 0x471e0
								}
								// 0x471e0
								g37 = a3 - 3;
								v19 = random(0) + 1;
								v13 = v19 + g36 + v4 + a2;
								*(char *)(v6 + v19) = 53;
								v12 = v13;
								*(char *)(v12 + 2) = 52;
								*(char *)(v13 + 1) = 6;
								if (*(char *)(v13 - 40) == 6) {
									// 0x47224
									*(char *)(v12 - 40) = 54;
									// branch -> 0x4722c
								}
								// 0x4722c
								result = v19 + v4 + g36 + a2 - 41;
								v25 = (char *)result;
								if (*v25 != 6) {
									// 0x47258
									g36 = v1;
									g10 = v2;
									return result;
								}
								// 0x47244
								*v25 = 55;
								// branch -> 0x47258
								// 0x47258
								g36 = v1;
								g10 = v2;
								return result;
							}
							// 0x47178
							v11 = a3;
							// branch -> 0x47178
						}
						// 0x47178
						v20 = v6 + v11;
						v13 = v20;
						v14 = (char *)v20;
						v21 = v20;
						if (*v14 == 11) {
							// 0x47188
							*v14 = 17;
							v21 = v13;
							// branch -> 0x47190
						}
						// 0x47190
						v15 = (char *)v21;
						v22 = v21;
						if (*v15 == 9) {
							// 0x4719c
							*v15 = 10;
							v22 = v13;
							// branch -> 0x471a4
						}
						// 0x471a4
						v16 = (char *)v22;
						v23 = v22;
						if (*v16 == 16) {
							// 0x471b0
							*v16 = 13;
							v23 = v13;
							// branch -> 0x471b8
						}
						// 0x471b8
						v17 = (char *)v23;
						v24 = v23;
						if (*v17 == 21) {
							// 0x471c4
							*v17 = 22;
							v24 = v13;
							// branch -> 0x471cc
						}
						// 0x471cc
						v18 = (char *)v24;
						if (*v18 == 23) {
							// 0x471d8
							*v18 = 29;
							// branch -> 0x471e0
						}
						// 0x471e0
						g37 = a3 - 3;
						v19 = random(0) + 1;
						v13 = v19 + g36 + v4 + a2;
						*(char *)(v6 + v19) = 53;
						v12 = v13;
						*(char *)(v12 + 2) = 52;
						*(char *)(v13 + 1) = 6;
						if (*(char *)(v13 - 40) == 6) {
							// 0x47224
							*(char *)(v12 - 40) = 54;
							// branch -> 0x4722c
						}
						// 0x4722c
						result = v19 + v4 + g36 + a2 - 41;
						v25 = (char *)result;
						if (*v25 != 6) {
							// 0x47258
							g36 = v1;
							g10 = v2;
							return result;
						}
						// 0x47244
						*v25 = 55;
						// branch -> 0x47258
						// 0x47258
						g36 = v1;
						g10 = v2;
						return result;
					}
					// 0x47128
					v13 = v36;
					v35 = v34;
					// branch -> 0x47128
				}
			} else {
				v26 = a3;
				v27 = 1;
			}
		}
		// 0x47250
		v32 = v6 + v27;
		if (v26 > v27) {
			// 0x4716c
			*(char *)v32 = 1;
			v29 = v32 + 1;
			v31 = v26 - v27 - 1;
			if (v31 != 0) {
				*(char *)v29 = (char)1;
				v28 = v29 + 1;
				v30 = v31 - 1;
				while (v30 != 0) {
					// 0x4716c
					*(char *)v28 = (char)1;
					v28++;
					v30--;
					// continue -> 0x4716c
				}
				// 0x47178
				// branch -> 0x47178
				// 0x47178
				v20 = v6 + a3;
				v13 = v20;
				v14 = (char *)v20;
				v21 = v20;
				if (*v14 == 11) {
					// 0x47188
					*v14 = 17;
					v21 = v13;
					// branch -> 0x47190
				}
				// 0x47190
				v15 = (char *)v21;
				v22 = v21;
				if (*v15 == 9) {
					// 0x4719c
					*v15 = 10;
					v22 = v13;
					// branch -> 0x471a4
				}
				// 0x471a4
				v16 = (char *)v22;
				v23 = v22;
				if (*v16 == 16) {
					// 0x471b0
					*v16 = 13;
					v23 = v13;
					// branch -> 0x471b8
				}
				// 0x471b8
				v17 = (char *)v23;
				v24 = v23;
				if (*v17 == 21) {
					// 0x471c4
					*v17 = 22;
					v24 = v13;
					// branch -> 0x471cc
				}
				// 0x471cc
				v18 = (char *)v24;
				if (*v18 == 23) {
					// 0x471d8
					*v18 = 29;
					// branch -> 0x471e0
				}
				// 0x471e0
				g37 = a3 - 3;
				v19 = random(0) + 1;
				v13 = v19 + g36 + v4 + a2;
				*(char *)(v6 + v19) = 53;
				v12 = v13;
				*(char *)(v12 + 2) = 52;
				*(char *)(v13 + 1) = 6;
				if (*(char *)(v13 - 40) == 6) {
					// 0x47224
					*(char *)(v12 - 40) = 54;
					// branch -> 0x4722c
				}
				// 0x4722c
				result = v19 + v4 + g36 + a2 - 41;
				v25 = (char *)result;
				if (*v25 == 6) {
					// 0x47244
					*v25 = 55;
					// branch -> 0x47258
				}
				// 0x47258
				g36 = v1;
				g10 = v2;
				return result;
			}
			// 0x47178
			v11 = a3;
			// branch -> 0x47178
		} else {
			v11 = v26;
		}
	}
	// 0x47178
	v20 = v6 + v11;
	v13 = v20;
	v14 = (char *)v20;
	v21 = v20;
	if (*v14 == 11) {
		// 0x47188
		*v14 = 17;
		v21 = v13;
		// branch -> 0x47190
	}
	// 0x47190
	v15 = (char *)v21;
	v22 = v21;
	if (*v15 == 9) {
		// 0x4719c
		*v15 = 10;
		v22 = v13;
		// branch -> 0x471a4
	}
	// 0x471a4
	v16 = (char *)v22;
	v23 = v22;
	if (*v16 == 16) {
		// 0x471b0
		*v16 = 13;
		v23 = v13;
		// branch -> 0x471b8
	}
	// 0x471b8
	v17 = (char *)v23;
	v24 = v23;
	if (*v17 == 21) {
		// 0x471c4
		*v17 = 22;
		v24 = v13;
		// branch -> 0x471cc
	}
	// 0x471cc
	v18 = (char *)v24;
	if (*v18 == 23) {
		// 0x471d8
		*v18 = 29;
		// branch -> 0x471e0
	}
	// 0x471e0
	g37 = a3 - 3;
	v19 = random(0) + 1;
	v13 = v19 + g36 + v4 + a2;
	*(char *)(v6 + v19) = 53;
	v12 = v13;
	*(char *)(v12 + 2) = 52;
	*(char *)(v13 + 1) = 6;
	if (*(char *)(v13 - 40) == 6) {
		// 0x47224
		*(char *)(v12 - 40) = 54;
		// branch -> 0x4722c
	}
	// 0x4722c
	result = v19 + v4 + g36 + a2 - 41;
	v25 = (char *)result;
	if (*v25 == 6) {
		// 0x47244
		*v25 = 55;
		// branch -> 0x47258
	}
	// 0x47258
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0x47278 - 0x476e4
int32_t function_47278(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7514); // 0x47280
	g35 = 0;
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x47288
	// branch -> 0x47294
	while (true) {
		// 0x47294
		g32 = v1;
		g33 = v2;
		g36 = 0;
		int32_t v3 = v2; // 0x472ac
		int32_t v4 = v1; // 0x472a0
		// branch -> 0x472a0
		while (true) {
			// 0x472a0
			int32_t v5; // 0x476a8
			int32_t v6; // 0x476ac
			int32_t v7; // 0x476b4
			if (*(char *)v4 == 0) {
				// 0x472ac
				if (*(char *)v3 == 10) {
					// 0x472b8
					g37 = 100;
					int32_t v8 = random(0); // 0x472c0
					g34 = v8;
					if (v8 <= 99) {
						int32_t v9 = function_46c8c(g36, g35); // 0x472d4
						g34 = v9;
						if (v9 != -1) {
							// 0x472e4
							g34 = function_46e54(g36, g35, v9);
							// branch -> 0x472f0
						}
					}
				}
				// 0x472f0
				if (*(char *)g33 == 12) {
					// 0x472fc
					g37 = 100;
					int32_t v10 = random(0); // 0x47304
					g34 = v10;
					if (v10 <= 99) {
						int32_t v11 = function_46c8c(g36, g35); // 0x47318
						g34 = v11;
						if (v11 != -1) {
							// 0x47328
							g34 = function_46e54(g36, g35, v11);
							// branch -> 0x47334
						}
					}
				}
				// 0x47334
				if (*(char *)g33 == 13) {
					// 0x47340
					g37 = 100;
					int32_t v12 = random(0); // 0x47348
					g34 = v12;
					if (v12 <= 99) {
						int32_t v13 = function_46c8c(g36, g35); // 0x4735c
						g34 = v13;
						if (v13 != -1) {
							// 0x4736c
							g34 = function_46e54(g36, g35, v13);
							// branch -> 0x47378
						}
					}
				}
				// 0x47378
				if (*(char *)g33 == 15) {
					// 0x47384
					g37 = 100;
					int32_t v14 = random(0); // 0x4738c
					g34 = v14;
					if (v14 <= 99) {
						int32_t v15 = function_46c8c(g36, g35); // 0x473a0
						g34 = v15;
						if (v15 != -1) {
							// 0x473b0
							g34 = function_46e54(g36, g35, v15);
							// branch -> 0x473bc
						}
					}
				}
				// 0x473bc
				if (*(char *)g33 == 16) {
					// 0x473c8
					g37 = 100;
					int32_t v16 = random(0); // 0x473d0
					g34 = v16;
					if (v16 <= 99) {
						int32_t v17 = function_46c8c(g36, g35); // 0x473e4
						g34 = v17;
						if (v17 != -1) {
							// 0x473f4
							g34 = function_46e54(g36, g35, v17);
							// branch -> 0x47400
						}
					}
				}
				// 0x47400
				if (*(char *)g33 == 21) {
					// 0x4740c
					g37 = 100;
					int32_t v18 = random(0); // 0x47414
					g34 = v18;
					if (v18 <= 99) {
						int32_t v19 = function_46c8c(g36, g35); // 0x47428
						g34 = v19;
						if (v19 != -1) {
							// 0x47438
							g34 = function_46e54(g36, g35, v19);
							// branch -> 0x47444
						}
					}
				}
				// 0x47444
				if (*(char *)g33 == 22) {
					// 0x47450
					g37 = 100;
					int32_t v20 = random(0); // 0x47458
					g34 = v20;
					if (v20 <= 99) {
						int32_t v21 = function_46c8c(g36, g35); // 0x4746c
						g34 = v21;
						if (v21 != -1) {
							// 0x4747c
							g34 = function_46e54(g36, g35, v21);
							// branch -> 0x47488
						}
					}
				}
				// 0x47488
				if (*(char *)g33 == 8) {
					// 0x47494
					g37 = 100;
					int32_t v22 = random(0); // 0x4749c
					g34 = v22;
					if (v22 <= 99) {
						int32_t v23 = function_46d68(g36, g35); // 0x474b0
						g34 = v23;
						if (v23 != -1) {
							// 0x474c0
							g34 = function_47084(g36, g35, v23);
							// branch -> 0x474cc
						}
					}
				}
				// 0x474cc
				if (*(char *)g33 == 9) {
					// 0x474d8
					g37 = 100;
					int32_t v24 = random(0); // 0x474e0
					g34 = v24;
					if (v24 <= 99) {
						int32_t v25 = function_46d68(g36, g35); // 0x474f4
						g34 = v25;
						if (v25 != -1) {
							// 0x47504
							g34 = function_47084(g36, g35, v25);
							// branch -> 0x47510
						}
					}
				}
				// 0x47510
				if (*(char *)g33 == 11) {
					// 0x4751c
					g37 = 100;
					int32_t v26 = random(0); // 0x47524
					g34 = v26;
					if (v26 <= 99) {
						int32_t v27 = function_46d68(g36, g35); // 0x47538
						g34 = v27;
						if (v27 != -1) {
							// 0x47548
							g34 = function_47084(g36, g35, v27);
							// branch -> 0x47554
						}
					}
				}
				// 0x47554
				if (*(char *)g33 == 14) {
					// 0x47560
					g37 = 100;
					int32_t v28 = random(0); // 0x47568
					g34 = v28;
					if (v28 <= 99) {
						int32_t v29 = function_46d68(g36, g35); // 0x4757c
						g34 = v29;
						if (v29 != -1) {
							// 0x4758c
							g34 = function_47084(g36, g35, v29);
							// branch -> 0x47598
						}
					}
				}
				// 0x47598
				if (*(char *)g33 == 15) {
					// 0x475a4
					g37 = 100;
					int32_t v30 = random(0); // 0x475ac
					g34 = v30;
					if (v30 <= 99) {
						int32_t v31 = function_46d68(g36, g35); // 0x475c0
						g34 = v31;
						if (v31 != -1) {
							// 0x475d0
							g34 = function_47084(g36, g35, v31);
							// branch -> 0x475dc
						}
					}
				}
				// 0x475dc
				if (*(char *)g33 == 16) {
					// 0x475e8
					g37 = 100;
					int32_t v32 = random(0); // 0x475f0
					g34 = v32;
					if (v32 <= 99) {
						int32_t v33 = function_46d68(g36, g35); // 0x47604
						g34 = v33;
						if (v33 != -1) {
							// 0x47614
							g34 = function_47084(g36, g35, v33);
							// branch -> 0x47620
						}
					}
				}
				// 0x47620
				if (*(char *)g33 == 21) {
					// 0x4762c
					g37 = 100;
					int32_t v34 = random(0); // 0x47634
					g34 = v34;
					if (v34 <= 99) {
						int32_t v35 = function_46d68(g36, g35); // 0x47648
						g34 = v35;
						if (v35 != -1) {
							// 0x47658
							g34 = function_47084(g36, g35, v35);
							// branch -> 0x47664
						}
					}
				}
				// 0x47664
				if (*(char *)g33 == 23) {
					// 0x47670
					g37 = 100;
					int32_t v36 = random(0); // 0x47678
					g34 = v36;
					if (v36 <= 99) {
						int32_t v37 = function_46d68(g36, g35); // 0x4768c
						g34 = v37;
						if (v37 != -1) {
							// 0x4769c
							g34 = function_47084(g36, g35, v37);
							// branch -> 0x476a8
						}
						// 0x476a8
						v5 = g36 + 1;
						g36 = v5;
						v6 = g33 + 40;
						g33 = v6;
						v7 = g32 + 40;
						g32 = v7;
						if (v5 >= 40) {
							// break -> 0x476bc
							break;
						}
						v3 = v6;
						v4 = v7;
						// continue -> 0x472a0
						continue;
					}
					// 0x476a8
					v5 = g36 + 1;
					g36 = v5;
					v6 = g33 + 40;
					g33 = v6;
					v7 = g32 + 40;
					g32 = v7;
					if (v5 >= 40) {
						// break -> 0x476bc
						break;
					}
					v3 = v6;
					v4 = v7;
					// continue -> 0x472a0
					continue;
				}
			}
			// 0x476a8
			v5 = g36 + 1;
			g36 = v5;
			v6 = g33 + 40;
			g33 = v6;
			v7 = g32 + 40;
			g32 = v7;
			if (v5 >= 40) {
				// break -> 0x476bc
				break;
			}
			v3 = v6;
			v4 = v7;
			// continue -> 0x472a0
		}
		int32_t v38 = g35 + 1; // 0x476bc
		g35 = v38;
		if (v38 >= 40) {
			// break -> 0x476d0
			break;
		}
		v2++;
		v1++;
		// continue -> 0x47294
	}
	// 0x476d0
	return g34;
}

// Address range: 0x476e4 - 0x48f20
int32_t function_476e4(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x476e4
	int32_t v2 = 0;                          // r7
	// branch -> 0x476f0
	int32_t v3; // ctr
	int32_t v4; // r3
	int32_t v5; // r6
	while (true) {
		// 0x476f0
		v3 = 20;
		v4 = v1;
		v5 = 0;
		int32_t v6 = v1; // 0x4771c
		// branch -> 0x47700
		while (true) {
			int32_t v7 = v6; // 0x4773c
			if (*(char *)v6 == 2) {
				char *v8 = (char *)(v6 + 40); // 0x4770c
				if (*v8 == 6) {
					// 0x47718
					*v8 = 5;
					v7 = v4;
					// branch -> 0x47720
				} else {
					v7 = v6;
				}
			}
			int32_t v9 = v7; // 0x4775c
			if (*(char *)v7 == 2) {
				char *v10 = (char *)(v7 + 40); // 0x4772c
				if (*v10 == 1) {
					// 0x47738
					*v10 = 13;
					v9 = v4;
					// branch -> 0x47740
				} else {
					v9 = v7;
				}
			}
			int32_t v11 = v9; // 0x47760
			if (*(char *)v9 == 1) {
				char *v12 = (char *)(v9 + 1); // 0x4774c
				if (*v12 == 2) {
					// 0x47758
					*v12 = 14;
					v11 = v4;
					// branch -> 0x47760
				} else {
					v11 = v9;
				}
			}
			int32_t v13 = v11 + 40; // 0x47760
			v4 = v13;
			int32_t v14 = v13; // 0x4779c
			if (*(char *)v13 == 2) {
				char *v15 = (char *)(v11 + 80); // 0x4776c
				if (*v15 == 6) {
					// 0x47778
					*v15 = 5;
					v14 = v4;
					// branch -> 0x47780
				} else {
					v14 = v13;
				}
			}
			int32_t v16 = v14; // 0x477bc
			if (*(char *)v14 == 2) {
				char *v17 = (char *)(v14 + 40); // 0x4778c
				if (*v17 == 1) {
					// 0x47798
					*v17 = 13;
					v16 = v4;
					// branch -> 0x477a0
				} else {
					v16 = v14;
				}
			}
			int32_t v18 = v16; // 0x477c0
			if (*(char *)v16 == 1) {
				char *v19 = (char *)(v16 + 1); // 0x477ac
				if (*v19 == 2) {
					// 0x477b8
					*v19 = 14;
					v18 = v4;
					// branch -> 0x477c0
				} else {
					v18 = v16;
				}
			}
			int32_t v20 = v18 + 40; // 0x477c0
			v4 = v20;
			v5++;
			int32_t v21 = v3 - 1; // 0x477c8
			v3 = v21;
			if (v21 == 0) {
				// break -> 0x477cc
				break;
			}
			v6 = v20;
			// continue -> 0x47700
		}
		int32_t v22 = v2 + 1; // 0x477cc
		v2 = v22;
		int32_t v23 = v1 + 1; // 0x477d0
		v1 = v23;
		if (v22 >= 40) {
			// break -> 0x477dc
			break;
		}
		v1 = v23;
		// continue -> 0x476f0
	}
	// 0x477dc
	v5 = 0;
	int32_t v24 = v1; // 0x477e0
	v1 = v24;
	// branch -> 0x477e4
	while (true) {
		// 0x477e4
		v4 = v24;
		v3 = 40;
		int32_t v25 = v24; // 0x4780c
		// branch -> 0x477f0
		while (true) {
			int32_t v26 = v25; // 0x4782c
			if (*(char *)v25 == 2) {
				char *v27 = (char *)(v25 + 40); // 0x477fc
				if (*v27 == 6) {
					// 0x47808
					*v27 = 2;
					v26 = v4;
					// branch -> 0x47810
				} else {
					v26 = v25;
				}
			}
			int32_t v28 = v26; // 0x4784c
			if (*(char *)v26 == 2) {
				char *v29 = (char *)(v26 + 40); // 0x4781c
				if (*v29 == 9) {
					// 0x47828
					*v29 = 11;
					v28 = v4;
					// branch -> 0x47830
				} else {
					v28 = v26;
				}
			}
			int32_t v30 = v28; // 0x4786c
			if (*(char *)v28 == 9) {
				char *v31 = (char *)(v28 + 40); // 0x4783c
				if (*v31 == 6) {
					// 0x47848
					*v31 = 12;
					v30 = v4;
					// branch -> 0x47850
				} else {
					v30 = v28;
				}
			}
			int32_t v32 = v30; // 0x4788c
			if (*(char *)v30 == 14) {
				char *v33 = (char *)(v30 + 40); // 0x4785c
				if (*v33 == 1) {
					// 0x47868
					*v33 = 13;
					v32 = v4;
					// branch -> 0x47870
				} else {
					v32 = v30;
				}
			}
			int32_t v34 = v32; // 0x478ac
			if (*(char *)v32 == 6) {
				char *v35 = (char *)(v32 + 40); // 0x4787c
				if (*v35 == 14) {
					// 0x47888
					*v35 = 15;
					v34 = v4;
					// branch -> 0x47890
				} else {
					v34 = v32;
				}
			}
			int32_t v36 = v34; // 0x478cc
			if (*(char *)v34 == 6) {
				char *v37 = (char *)(v34 + 1); // 0x4789c
				if (*v37 == 13) {
					// 0x478a8
					*v37 = 16;
					v36 = v4;
					// branch -> 0x478b0
				} else {
					v36 = v34;
				}
			}
			int32_t v38 = v36; // 0x478ec
			if (*(char *)v36 == 1) {
				char *v39 = (char *)(v36 + 1); // 0x478bc
				if (*v39 == 9) {
					// 0x478c8
					*v39 = 10;
					v38 = v4;
					// branch -> 0x478d0
				} else {
					v38 = v36;
				}
			}
			int32_t v40 = v38; // 0x478f0
			if (*(char *)v38 == 6) {
				char *v41 = (char *)(v38 - 1); // 0x478dc
				if (*v41 == 1) {
					// 0x478e8
					*v41 = 1;
					v40 = v4;
					// branch -> 0x478f0
				} else {
					v40 = v38;
				}
			}
			int32_t v42 = v40 + 40; // 0x478f0
			v4 = v42;
			int32_t v43 = v3 - 1; // 0x478f4
			v3 = v43;
			if (v43 == 0) {
				// break -> 0x478f8
				break;
			}
			v25 = v42;
			// continue -> 0x477f0
		}
		int32_t v44 = v5 + 1; // 0x478f8
		v5 = v44;
		int32_t v45 = v1 + 1; // 0x478fc
		v1 = v45;
		if (v44 >= 40) {
			// break -> 0x47908
			break;
		}
		v24 = v45;
		// continue -> 0x477e4
	}
	// 0x47908
	v5 = 0;
	int32_t v46 = v1; // 0x4790c
	v1 = v46;
	// branch -> 0x47910
	while (true) {
		// 0x47910
		v4 = v46;
		v3 = 40;
		int32_t v47 = v46; // 0x47938
		// branch -> 0x4791c
		while (true) {
			int32_t v48 = v47; // 0x47958
			if (*(char *)v47 == 13) {
				char *v49 = (char *)(v47 + 1); // 0x47928
				if (*v49 == 30) {
					// 0x47934
					*v49 = 27;
					v48 = v4;
					// branch -> 0x4793c
				} else {
					v48 = v47;
				}
			}
			int32_t v50 = v48; // 0x47978
			if (*(char *)v48 == 27) {
				char *v51 = (char *)(v48 + 40); // 0x47948
				if (*v51 == 30) {
					// 0x47954
					*v51 = 19;
					v50 = v4;
					// branch -> 0x4795c
				} else {
					v50 = v48;
				}
			}
			int32_t v52 = v50; // 0x47998
			if (*(char *)v50 == 1) {
				char *v53 = (char *)(v50 + 1); // 0x47968
				if (*v53 == 30) {
					// 0x47974
					*v53 = 27;
					v52 = v4;
					// branch -> 0x4797c
				} else {
					v52 = v50;
				}
			}
			int32_t v54 = v52; // 0x479b8
			if (*(char *)v52 == 27) {
				char *v55 = (char *)(v52 + 40); // 0x47988
				if (*v55 == 1) {
					// 0x47994
					*v55 = 16;
					v54 = v4;
					// branch -> 0x4799c
				} else {
					v54 = v52;
				}
			}
			int32_t v56 = v54; // 0x479d8
			if (*(char *)v54 == 19) {
				char *v57 = (char *)(v54 + 40); // 0x479a8
				if (*v57 == 27) {
					// 0x479b4
					*v57 = 26;
					v56 = v4;
					// branch -> 0x479bc
				} else {
					v56 = v54;
				}
			}
			int32_t v58 = v56; // 0x479f8
			if (*(char *)v56 == 27) {
				char *v59 = (char *)(v56 + 40); // 0x479c8
				if (*v59 == 30) {
					// 0x479d4
					*v59 = 19;
					v58 = v4;
					// branch -> 0x479dc
				} else {
					v58 = v56;
				}
			}
			int32_t v60 = v58; // 0x47a18
			if (*(char *)v58 == 2) {
				char *v61 = (char *)(v58 + 40); // 0x479e8
				if (*v61 == 15) {
					// 0x479f4
					*v61 = 14;
					v60 = v4;
					// branch -> 0x479fc
				} else {
					v60 = v58;
				}
			}
			int32_t v62 = v60; // 0x47a38
			if (*(char *)v60 == 14) {
				char *v63 = (char *)(v60 + 40); // 0x47a08
				if (*v63 == 15) {
					// 0x47a14
					*v63 = 14;
					v62 = v4;
					// branch -> 0x47a1c
				} else {
					v62 = v60;
				}
			}
			int32_t v64 = v62; // 0x47a58
			if (*(char *)v62 == 22) {
				char *v65 = (char *)(v62 + 40); // 0x47a28
				if (*v65 == 1) {
					// 0x47a34
					*v65 = 16;
					v64 = v4;
					// branch -> 0x47a3c
				} else {
					v64 = v62;
				}
			}
			int32_t v66 = v64; // 0x47a84
			if (*(char *)v64 == 27) {
				char *v67 = (char *)(v64 + 40); // 0x47a48
				if (*v67 == 1) {
					// 0x47a54
					*v67 = 16;
					v66 = v4;
					// branch -> 0x47a5c
				} else {
					v66 = v64;
				}
			}
			int32_t v68 = v66; // 0x47aa4
			int32_t v69;       // 0x47ad0
			if (*(char *)v66 == 6) {
				char *v70 = (char *)(v66 + 40); // 0x47a68
				if (*v70 == 27) {
					// 0x47a74
					if (*(char *)(v66 + 41) != 0) {
						// 0x47a80
						*v70 = 22;
						v68 = v4;
						// branch -> 0x47a88
					} else {
						v68 = v66;
					}
					// 0x47a88
					v69 = v68;
					if (*(char *)v68 == 22) {
					lab_0x47a94:;
						char *v71 = (char *)(v68 + 40); // 0x47a94
						if (*v71 == 30) {
							// 0x47aa0
							*v71 = 19;
							v69 = v4;
							// branch -> 0x47aa8
						} else {
							v69 = v68;
						}
					}
				lab_0x47aa8:;
					int32_t v72 = v69; // 0x47afc
					if (*(char *)v69 == 21) {
						char *v73 = (char *)(v69 + 40); // 0x47ab4
						if (*v73 == 1) {
							// 0x47ac0
							if (*(char *)(v69 + 39) == 1) {
								// 0x47acc
								*v73 = 13;
								v72 = v4;
								// branch -> 0x47ad4
							} else {
								v72 = v69;
							}
						} else {
							v72 = v69;
						}
					}
					int32_t v74 = v72; // 0x47b28
					if (*(char *)v72 == 14) {
						char *v75 = (char *)(v72 + 40); // 0x47ae0
						if (*v75 == 30) {
							// 0x47aec
							if (*(char *)(v72 + 1) == 6) {
								// 0x47af8
								*v75 = 28;
								v74 = v4;
								// branch -> 0x47b00
							} else {
								v74 = v72;
							}
						} else {
							v74 = v72;
						}
					}
					int32_t v76 = v74; // 0x47b54
					if (*(char *)v74 == 16) {
						// 0x47b0c
						if (*(char *)(v74 + 40) == 6) {
							char *v77 = (char *)(v74 + 1); // 0x47b18
							if (*v77 == 30) {
								// 0x47b24
								*v77 = 27;
								v76 = v4;
								// branch -> 0x47b2c
							} else {
								v76 = v74;
							}
						} else {
							v76 = v74;
						}
					}
					int32_t v78 = v76; // 0x47b80
					if (*(char *)v76 == 16) {
						char *v79 = (char *)(v76 + 1); // 0x47b38
						if (*v79 == 30) {
							// 0x47b44
							if (*(char *)(v76 + 41) == 30) {
								// 0x47b50
								*v79 = 27;
								v78 = v4;
								// branch -> 0x47b58
							} else {
								v78 = v76;
							}
						} else {
							v78 = v76;
						}
					}
					int32_t v80 = v78; // 0x47bac
					if (*(char *)v78 == 6) {
						char *v81 = (char *)(v78 + 40); // 0x47b64
						if (*v81 == 30) {
							// 0x47b70
							if (*(char *)(v78 + 39) == 6) {
								// 0x47b7c
								*v81 = 21;
								v80 = v4;
								// branch -> 0x47b84
							} else {
								v80 = v78;
							}
						} else {
							v80 = v78;
						}
					}
					int32_t v82 = v80; // 0x47bcc
					if (*(char *)v80 == 2) {
						char *v83 = (char *)(v80 + 40); // 0x47b90
						if (*v83 == 27) {
							// 0x47b9c
							if (*(char *)(v80 + 41) == 9) {
								// 0x47ba8
								*v83 = 29;
								v82 = v4;
								// branch -> 0x47bb0
							} else {
								v82 = v80;
							}
						} else {
							v82 = v80;
						}
					}
					int32_t v84 = v82; // 0x47bf8
					if (*(char *)v82 == 9) {
						char *v85 = (char *)(v82 + 40); // 0x47bbc
						if (*v85 == 15) {
							// 0x47bc8
							*v85 = 14;
							v84 = v4;
							// branch -> 0x47bd0
						} else {
							v84 = v82;
						}
					}
					int32_t v86 = v84; // 0x47c18
					if (*(char *)v84 == 15) {
						char *v87 = (char *)(v84 + 40); // 0x47bdc
						if (*v87 == 27) {
							// 0x47be8
							if (*(char *)(v84 + 41) == 2) {
								// 0x47bf4
								*v87 = 29;
								v86 = v4;
								// branch -> 0x47bfc
							} else {
								v86 = v84;
							}
						} else {
							v86 = v84;
						}
					}
					int32_t v88 = v86; // 0x47c38
					if (*(char *)v86 == 19) {
						char *v89 = (char *)(v86 + 40); // 0x47c08
						if (*v89 == 18) {
							// 0x47c14
							*v89 = 24;
							v88 = v4;
							// branch -> 0x47c1c
						} else {
							v88 = v86;
						}
					}
					int32_t v90 = v88; // 0x47c64
					if (*(char *)v88 == 9) {
						char *v91 = (char *)(v88 + 40); // 0x47c28
						if (*v91 == 15) {
							// 0x47c34
							*v91 = 14;
							v90 = v4;
							// branch -> 0x47c3c
						} else {
							v90 = v88;
						}
					}
					int32_t v92 = v90; // 0x47c90
					if (*(char *)v90 == 19) {
						char *v93 = (char *)(v90 + 40); // 0x47c48
						if (*v93 == 19) {
							// 0x47c54
							if (*(char *)(v90 + 39) == 30) {
								// 0x47c60
								*v93 = 24;
								v92 = v4;
								// branch -> 0x47c68
							} else {
								v92 = v90;
							}
						} else {
							v92 = v90;
						}
					}
					int32_t v94 = v92; // 0x47cb0
					if (*(char *)v92 == 24) {
						char *v95 = (char *)(v92 - 1); // 0x47c74
						if (*v95 == 30) {
							// 0x47c80
							if (*(char *)(v92 - 2) == 6) {
								// 0x47c8c
								*v95 = 21;
								v94 = v4;
								// branch -> 0x47c94
							} else {
								v94 = v92;
							}
						} else {
							v94 = v92;
						}
					}
					int32_t v96 = v94; // 0x47cd0
					if (*(char *)v94 == 2) {
						char *v97 = (char *)(v94 + 40); // 0x47ca0
						if (*v97 == 30) {
							// 0x47cac
							*v97 = 28;
							v96 = v4;
							// branch -> 0x47cb4
						} else {
							v96 = v94;
						}
					}
					int32_t v98 = v96; // 0x47cf0
					if (*(char *)v96 == 15) {
						char *v99 = (char *)(v96 + 40); // 0x47cc0
						if (*v99 == 30) {
							// 0x47ccc
							*v99 = 28;
							v98 = v4;
							// branch -> 0x47cd4
						} else {
							v98 = v96;
						}
					}
					int32_t v100 = v98; // 0x47d10
					if (*(char *)v98 == 28) {
						char *v101 = (char *)(v98 + 1); // 0x47ce0
						if (*v101 == 30) {
							// 0x47cec
							*v101 = 18;
							v100 = v4;
							// branch -> 0x47cf4
						} else {
							v100 = v98;
						}
					}
					int32_t v102 = v100; // 0x47d48
					if (*(char *)v100 == 28) {
						char *v103 = (char *)(v100 + 1); // 0x47d00
						if (*v103 == 2) {
							// 0x47d0c
							*v103 = 15;
							v102 = v4;
							// branch -> 0x47d14
						} else {
							v102 = v100;
						}
					}
					int32_t v104 = v102; // 0x47d80
					if (*(char *)v102 == 19) {
						// 0x47d20
						if (*(char *)(v102 + 80) == 2) {
							// 0x47d2c
							if (*(char *)(v102 + 39) == 18) {
								// 0x47d38
								if (*(char *)(v102 + 41) == 1) {
									// 0x47d44
									*(char *)(v102 + 40) = 17;
									v104 = v4;
									// branch -> 0x47d4c
								} else {
									v104 = v102;
								}
							} else {
								v104 = v102;
							}
						} else {
							v104 = v102;
						}
					}
					int32_t v105 = v104; // 0x47db8
					if (*(char *)v104 == 19) {
						// 0x47d58
						if (*(char *)(v104 + 80) == 2) {
							// 0x47d64
							if (*(char *)(v104 + 39) == 22) {
								// 0x47d70
								if (*(char *)(v104 + 41) == 1) {
									// 0x47d7c
									*(char *)(v104 + 40) = 17;
									v105 = v4;
									// branch -> 0x47d84
								} else {
									v105 = v104;
								}
							} else {
								v105 = v104;
							}
						} else {
							v105 = v104;
						}
					}
					int32_t v106 = v105; // 0x47df0
					if (*(char *)v105 == 19) {
						// 0x47d90
						if (*(char *)(v105 + 80) == 2) {
							// 0x47d9c
							if (*(char *)(v105 + 39) == 18) {
								// 0x47da8
								if (*(char *)(v105 + 41) == 13) {
									// 0x47db4
									*(char *)(v105 + 40) = 17;
									v106 = v4;
									// branch -> 0x47dbc
								} else {
									v106 = v105;
								}
							} else {
								v106 = v105;
							}
						} else {
							v106 = v105;
						}
					}
					int32_t v107 = v106; // 0x47e28
					if (*(char *)v106 == 21) {
						// 0x47dc8
						if (*(char *)(v106 + 80) == 2) {
							// 0x47dd4
							if (*(char *)(v106 + 39) == 18) {
								// 0x47de0
								if (*(char *)(v106 + 41) == 1) {
									// 0x47dec
									*(char *)(v106 + 40) = 17;
									v107 = v4;
									// branch -> 0x47df4
								} else {
									v107 = v106;
								}
							} else {
								v107 = v106;
							}
						} else {
							v107 = v106;
						}
					}
					int32_t v108 = v107; // 0x47e60
					if (*(char *)v107 == 21) {
						// 0x47e00
						if (*(char *)(v107 + 41) == 1) {
							// 0x47e0c
							if (*(char *)(v107 + 39) == 22) {
								// 0x47e18
								if (*(char *)(v107 + 80) == 3) {
									// 0x47e24
									*(char *)(v107 + 40) = 17;
									v108 = v4;
									// branch -> 0x47e2c
								} else {
									v108 = v107;
								}
							} else {
								v108 = v107;
							}
						} else {
							v108 = v107;
						}
					}
					int32_t v109 = v108; // 0x47e8c
					if (*(char *)v108 == 15) {
						char *v110 = (char *)(v108 + 40); // 0x47e38
						if (*v110 == 28) {
							// 0x47e44
							if (*(char *)(v108 + 80) == 30) {
								// 0x47e50
								if (*(char *)(v108 + 39) == 6) {
									// 0x47e5c
									*v110 = 23;
									v109 = v4;
									// branch -> 0x47e64
								} else {
									v109 = v108;
								}
							} else {
								v109 = v108;
							}
						} else {
							v109 = v108;
						}
					}
					int32_t v111 = v109; // 0x47eb8
					if (*(char *)v109 == 14) {
						char *v112 = (char *)(v109 + 40); // 0x47e70
						if (*v112 == 28) {
							// 0x47e7c
							if (*(char *)(v109 + 80) == 1) {
								// 0x47e88
								*v112 = 23;
								v111 = v4;
								// branch -> 0x47e90
							} else {
								v111 = v109;
							}
						} else {
							v111 = v109;
						}
					}
					int32_t v113 = v111; // 0x47ed8
					if (*(char *)v111 == 15) {
						char *v114 = (char *)(v111 + 40); // 0x47e9c
						if (*v114 == 27) {
							// 0x47ea8
							if (*(char *)(v111 + 41) == 30) {
								// 0x47eb4
								*v114 = 29;
								v113 = v4;
								// branch -> 0x47ebc
							} else {
								v113 = v111;
							}
						} else {
							v113 = v111;
						}
					}
					int32_t v115 = v113; // 0x47ef8
					if (*(char *)v113 == 28) {
						char *v116 = (char *)(v113 + 1); // 0x47ec8
						if (*v116 == 9) {
							// 0x47ed4
							*v116 = 15;
							v115 = v4;
							// branch -> 0x47edc
						} else {
							v115 = v113;
						}
					}
					int32_t v117 = v115; // 0x47f24
					if (*(char *)v115 == 21) {
						// 0x47ee8
						if (*(char *)(v115 + 39) == 21) {
							// 0x47ef4
							*(char *)(v115 + 40) = 24;
							v117 = v4;
							// branch -> 0x47efc
						} else {
							v117 = v115;
						}
					}
					int32_t v118 = v117; // 0x47f44
					if (*(char *)v117 == 2) {
						char *v119 = (char *)(v117 + 40); // 0x47f08
						if (*v119 == 27) {
							// 0x47f14
							if (*(char *)(v117 + 41) == 30) {
								// 0x47f20
								*v119 = 29;
								v118 = v4;
								// branch -> 0x47f28
							} else {
								v118 = v117;
							}
						} else {
							v118 = v117;
						}
					}
					int32_t v120 = v118; // 0x47f70
					if (*(char *)v118 == 2) {
						char *v121 = (char *)(v118 + 40); // 0x47f34
						if (*v121 == 18) {
							// 0x47f40
							*v121 = 25;
							v120 = v4;
							// branch -> 0x47f48
						} else {
							v120 = v118;
						}
					}
					int32_t v122 = v120; // 0x47f90
					if (*(char *)v120 == 21) {
						char *v123 = (char *)(v120 + 40); // 0x47f54
						if (*v123 == 9) {
							// 0x47f60
							if (*(char *)(v120 + 80) == 2) {
								// 0x47f6c
								*v123 = 11;
								v122 = v4;
								// branch -> 0x47f74
							} else {
								v122 = v120;
							}
						} else {
							v122 = v120;
						}
					}
					int32_t v124 = v122; // 0x47fb0
					if (*(char *)v122 == 19) {
						char *v125 = (char *)(v122 + 40); // 0x47f80
						if (*v125 == 10) {
							// 0x47f8c
							*v125 = 17;
							v124 = v4;
							// branch -> 0x47f94
						} else {
							v124 = v122;
						}
					}
					int32_t v126 = v124; // 0x47fd0
					if (*(char *)v124 == 15) {
						char *v127 = (char *)(v124 + 1); // 0x47fa0
						if (*v127 == 3) {
							// 0x47fac
							*v127 = 4;
							v126 = v4;
							// branch -> 0x47fb4
						} else {
							v126 = v124;
						}
					}
					int32_t v128 = v126; // 0x47ff0
					if (*(char *)v126 == 22) {
						char *v129 = (char *)(v126 + 1); // 0x47fc0
						if (*v129 == 9) {
							// 0x47fcc
							*v129 = 15;
							v128 = v4;
							// branch -> 0x47fd4
						} else {
							v128 = v126;
						}
					}
					int32_t v130 = v128; // 0x48010
					if (*(char *)v128 == 18) {
						char *v131 = (char *)(v128 + 1); // 0x47fe0
						if (*v131 == 30) {
							// 0x47fec
							*v131 = 18;
							v130 = v4;
							// branch -> 0x47ff4
						} else {
							v130 = v128;
						}
					}
					int32_t v132 = v130; // 0x48030
					if (*(char *)v130 == 24) {
						char *v133 = (char *)(v130 - 40); // 0x48000
						if (*v133 == 30) {
							// 0x4800c
							*v133 = 19;
							v132 = v4;
							// branch -> 0x48014
						} else {
							v132 = v130;
						}
					}
					int32_t v134 = v132; // 0x48050
					if (*(char *)v132 == 21) {
						char *v135 = (char *)(v132 + 1); // 0x48020
						if (*v135 == 2) {
							// 0x4802c
							*v135 = 15;
							v134 = v4;
							// branch -> 0x48034
						} else {
							v134 = v132;
						}
					}
					int32_t v136 = v134; // 0x48070
					if (*(char *)v134 == 21) {
						char *v137 = (char *)(v134 + 1); // 0x48040
						if (*v137 == 9) {
							// 0x4804c
							*v137 = 10;
							v136 = v4;
							// branch -> 0x48054
						} else {
							v136 = v134;
						}
					}
					int32_t v138 = v136; // 0x48090
					if (*(char *)v136 == 22) {
						char *v139 = (char *)(v136 + 1); // 0x48060
						if (*v139 == 30) {
							// 0x4806c
							*v139 = 18;
							v138 = v4;
							// branch -> 0x48074
						} else {
							v138 = v136;
						}
					}
					int32_t v140 = v138; // 0x480b0
					if (*(char *)v138 == 21) {
						char *v141 = (char *)(v138 + 1); // 0x48080
						if (*v141 == 30) {
							// 0x4808c
							*v141 = 18;
							v140 = v4;
							// branch -> 0x48094
						} else {
							v140 = v138;
						}
					}
					int32_t v142 = v140; // 0x480d0
					if (*(char *)v140 == 16) {
						char *v143 = (char *)(v140 + 1); // 0x480a0
						if (*v143 == 2) {
							// 0x480ac
							*v143 = 15;
							v142 = v4;
							// branch -> 0x480b4
						} else {
							v142 = v140;
						}
					}
					int32_t v144 = v142; // 0x480f0
					if (*(char *)v142 == 13) {
						char *v145 = (char *)(v142 + 1); // 0x480c0
						if (*v145 == 2) {
							// 0x480cc
							*v145 = 15;
							v144 = v4;
							// branch -> 0x480d4
						} else {
							v144 = v142;
						}
					}
					int32_t v146 = v144; // 0x4811c
					if (*(char *)v144 == 22) {
						char *v147 = (char *)(v144 + 1); // 0x480e0
						if (*v147 == 2) {
							// 0x480ec
							*v147 = 15;
							v146 = v4;
							// branch -> 0x480f4
						} else {
							v146 = v144;
						}
					}
					int32_t v148 = v146; // 0x48148
					if (*(char *)v146 == 21) {
						char *v149 = (char *)(v146 + 40); // 0x48100
						if (*v149 == 18) {
							// 0x4810c
							if (*(char *)(v146 + 80) == 30) {
								// 0x48118
								*v149 = 24;
								v148 = v4;
								// branch -> 0x48120
							} else {
								v148 = v146;
							}
						} else {
							v148 = v146;
						}
					}
					int32_t v150 = v148; // 0x48174
					if (*(char *)v148 == 21) {
						char *v151 = (char *)(v148 + 40); // 0x4812c
						if (*v151 == 9) {
							// 0x48138
							if (*(char *)(v148 + 41) == 1) {
								// 0x48144
								*v151 = 16;
								v150 = v4;
								// branch -> 0x4814c
							} else {
								v150 = v148;
							}
						} else {
							v150 = v148;
						}
					}
					int32_t v152 = v150; // 0x48194
					if (*(char *)v150 == 2) {
						char *v153 = (char *)(v150 + 40); // 0x48158
						if (*v153 == 27) {
							// 0x48164
							if (*(char *)(v150 + 41) == 2) {
								// 0x48170
								*v153 = 29;
								v152 = v4;
								// branch -> 0x48178
							} else {
								v152 = v150;
							}
						} else {
							v152 = v150;
						}
					}
					int32_t v154 = v152; // 0x481b4
					if (*(char *)v152 == 23) {
						char *v155 = (char *)(v152 + 1); // 0x48184
						if (*v155 == 2) {
							// 0x48190
							*v155 = 15;
							v154 = v4;
							// branch -> 0x48198
						} else {
							v154 = v152;
						}
					}
					int32_t v156 = v154; // 0x481d4
					if (*(char *)v154 == 23) {
						char *v157 = (char *)(v154 + 1); // 0x481a4
						if (*v157 == 9) {
							// 0x481b0
							*v157 = 15;
							v156 = v4;
							// branch -> 0x481b8
						} else {
							v156 = v154;
						}
					}
					int32_t v158 = v156; // 0x481f4
					if (*(char *)v156 == 25) {
						char *v159 = (char *)(v156 + 1); // 0x481c4
						if (*v159 == 2) {
							// 0x481d0
							*v159 = 15;
							v158 = v4;
							// branch -> 0x481d8
						} else {
							v158 = v156;
						}
					}
					int32_t v160 = v158; // 0x48214
					if (*(char *)v158 == 22) {
						char *v161 = (char *)(v158 + 40); // 0x481e4
						if (*v161 == 9) {
							// 0x481f0
							*v161 = 11;
							v160 = v4;
							// branch -> 0x481f8
						} else {
							v160 = v158;
						}
					}
					int32_t v162 = v160; // 0x48234
					if (*(char *)v160 == 23) {
						char *v163 = (char *)(v160 + 40); // 0x48204
						if (*v163 == 9) {
							// 0x48210
							*v163 = 11;
							v162 = v4;
							// branch -> 0x48218
						} else {
							v162 = v160;
						}
					}
					int32_t v164 = v162; // 0x48254
					if (*(char *)v162 == 15) {
						char *v165 = (char *)(v162 + 40); // 0x48224
						if (*v165 == 1) {
							// 0x48230
							*v165 = 16;
							v164 = v4;
							// branch -> 0x48238
						} else {
							v164 = v162;
						}
					}
					int32_t v166 = v164; // 0x48274
					if (*(char *)v164 == 11) {
						char *v167 = (char *)(v164 + 40); // 0x48244
						if (*v167 == 15) {
							// 0x48250
							*v167 = 14;
							v166 = v4;
							// branch -> 0x48258
						} else {
							v166 = v164;
						}
					}
					int32_t v168 = v166; // 0x48294
					if (*(char *)v166 == 23) {
						char *v169 = (char *)(v166 + 40); // 0x48264
						if (*v169 == 1) {
							// 0x48270
							*v169 = 16;
							v168 = v4;
							// branch -> 0x48278
						} else {
							v168 = v166;
						}
					}
					int32_t v170 = v168; // 0x482b4
					if (*(char *)v168 == 21) {
						char *v171 = (char *)(v168 + 40); // 0x48284
						if (*v171 == 27) {
							// 0x48290
							*v171 = 26;
							v170 = v4;
							// branch -> 0x48298
						} else {
							v170 = v168;
						}
					}
					int32_t v172 = v170; // 0x482d4
					if (*(char *)v170 == 21) {
						char *v173 = (char *)(v170 + 40); // 0x482a4
						if (*v173 == 18) {
							// 0x482b0
							*v173 = 24;
							v172 = v4;
							// branch -> 0x482b8
						} else {
							v172 = v170;
						}
					}
					int32_t v174 = v172; // 0x482f4
					if (*(char *)v172 == 26) {
						char *v175 = (char *)(v172 + 40); // 0x482c4
						if (*v175 == 1) {
							// 0x482d0
							*v175 = 16;
							v174 = v4;
							// branch -> 0x482d8
						} else {
							v174 = v172;
						}
					}
					int32_t v176 = v174; // 0x48314
					if (*(char *)v174 == 29) {
						char *v177 = (char *)(v174 + 40); // 0x482e4
						if (*v177 == 1) {
							// 0x482f0
							*v177 = 16;
							v176 = v4;
							// branch -> 0x482f8
						} else {
							v176 = v174;
						}
					}
					int32_t v178 = v176; // 0x48334
					if (*(char *)v176 == 29) {
						char *v179 = (char *)(v176 + 1); // 0x48304
						if (*v179 == 2) {
							// 0x48310
							*v179 = 15;
							v178 = v4;
							// branch -> 0x48318
						} else {
							v178 = v176;
						}
					}
					int32_t v180 = v178; // 0x48354
					if (*(char *)v178 == 1) {
						char *v181 = (char *)(v178 - 1); // 0x48324
						if (*v181 == 15) {
							// 0x48330
							*v181 = 10;
							v180 = v4;
							// branch -> 0x48338
						} else {
							v180 = v178;
						}
					}
					int32_t v182 = v180; // 0x48374
					if (*(char *)v180 == 18) {
						char *v183 = (char *)(v180 + 1); // 0x48344
						if (*v183 == 2) {
							// 0x48350
							*v183 = 15;
							v182 = v4;
							// branch -> 0x48358
						} else {
							v182 = v180;
						}
					}
					int32_t v184 = v182; // 0x48394
					if (*(char *)v182 == 23) {
						char *v185 = (char *)(v182 + 1); // 0x48364
						if (*v185 == 30) {
							// 0x48370
							*v185 = 18;
							v184 = v4;
							// branch -> 0x48378
						} else {
							v184 = v182;
						}
					}
					int32_t v186 = v184; // 0x483c0
					if (*(char *)v184 == 18) {
						char *v187 = (char *)(v184 + 1); // 0x48384
						if (*v187 == 9) {
							// 0x48390
							*v187 = 10;
							v186 = v4;
							// branch -> 0x48398
						} else {
							v186 = v184;
						}
					}
					int32_t v188 = v186; // 0x483ec
					if (*(char *)v186 == 14) {
						char *v189 = (char *)(v186 + 40); // 0x483a4
						if (*v189 == 30) {
							// 0x483b0
							if (*(char *)(v186 + 41) == 30) {
								// 0x483bc
								*v189 = 23;
								v188 = v4;
								// branch -> 0x483c4
							} else {
								v188 = v186;
							}
						} else {
							v188 = v186;
						}
					}
					int32_t v190 = v188; // 0x48418
					if (*(char *)v188 == 2) {
						char *v191 = (char *)(v188 + 40); // 0x483d0
						if (*v191 == 28) {
							// 0x483dc
							if (*(char *)(v188 + 39) == 6) {
								// 0x483e8
								*v191 = 23;
								v190 = v4;
								// branch -> 0x483f0
							} else {
								v190 = v188;
							}
						} else {
							v190 = v188;
						}
					}
					int32_t v192 = v190; // 0x48444
					if (*(char *)v190 == 23) {
						char *v193 = (char *)(v190 + 40); // 0x483fc
						if (*v193 == 18) {
							// 0x48408
							if (*(char *)(v190 - 1) == 6) {
								// 0x48414
								*v193 = 24;
								v192 = v4;
								// branch -> 0x4841c
							} else {
								v192 = v190;
							}
						} else {
							v192 = v190;
						}
					}
					int32_t v194 = v192; // 0x4847c
					if (*(char *)v192 == 14) {
						char *v195 = (char *)(v192 + 40); // 0x48428
						if (*v195 == 23) {
							// 0x48434
							if (*(char *)(v192 + 80) == 30) {
								// 0x48440
								*v195 = 28;
								v194 = v4;
								// branch -> 0x48448
							} else {
								v194 = v192;
							}
						} else {
							v194 = v192;
						}
					}
					int32_t v196 = v194; // 0x4849c
					if (*(char *)v194 == 14) {
						char *v197 = (char *)(v194 + 40); // 0x48454
						if (*v197 == 28) {
							// 0x48460
							if (*(char *)(v194 + 80) == 30) {
								// 0x4846c
								if (*(char *)(v194 + 39) == 6) {
									// 0x48478
									*v197 = 23;
									v196 = v4;
									// branch -> 0x48480
								} else {
									v196 = v194;
								}
							} else {
								v196 = v194;
							}
						} else {
							v196 = v194;
						}
					}
					int32_t v198 = v196; // 0x484bc
					if (*(char *)v196 == 23) {
						char *v199 = (char *)(v196 + 40); // 0x4848c
						if (*v199 == 30) {
							// 0x48498
							*v199 = 19;
							v198 = v4;
							// branch -> 0x484a0
						} else {
							v198 = v196;
						}
					}
					int32_t v200 = v198; // 0x484dc
					if (*(char *)v198 == 29) {
						char *v201 = (char *)(v198 + 40); // 0x484ac
						if (*v201 == 30) {
							// 0x484b8
							*v201 = 19;
							v200 = v4;
							// branch -> 0x484c0
						} else {
							v200 = v198;
						}
					}
					int32_t v202 = v200; // 0x484fc
					if (*(char *)v200 == 29) {
						char *v203 = (char *)(v200 + 1); // 0x484cc
						if (*v203 == 30) {
							// 0x484d8
							*v203 = 18;
							v202 = v4;
							// branch -> 0x484e0
						} else {
							v202 = v200;
						}
					}
					int32_t v204 = v202; // 0x4851c
					if (*(char *)v202 == 19) {
						char *v205 = (char *)(v202 + 40); // 0x484ec
						if (*v205 == 30) {
							// 0x484f8
							*v205 = 19;
							v204 = v4;
							// branch -> 0x48500
						} else {
							v204 = v202;
						}
					}
					int32_t v206 = v204; // 0x4853c
					if (*(char *)v204 == 21) {
						char *v207 = (char *)(v204 + 40); // 0x4850c
						if (*v207 == 30) {
							// 0x48518
							*v207 = 19;
							v206 = v4;
							// branch -> 0x48520
						} else {
							v206 = v204;
						}
					}
					int32_t v208 = v206; // 0x4855c
					if (*(char *)v206 == 26) {
						char *v209 = (char *)(v206 + 40); // 0x4852c
						if (*v209 == 30) {
							// 0x48538
							*v209 = 19;
							v208 = v4;
							// branch -> 0x48540
						} else {
							v208 = v206;
						}
					}
					int32_t v210 = v208; // 0x4857c
					if (*(char *)v208 == 16) {
						char *v211 = (char *)(v208 + 1); // 0x4854c
						if (*v211 == 30) {
							// 0x48558
							*v211 = 18;
							v210 = v4;
							// branch -> 0x48560
						} else {
							v210 = v208;
						}
					}
					int32_t v212 = v210; // 0x4859c
					if (*(char *)v210 == 13) {
						char *v213 = (char *)(v210 + 1); // 0x4856c
						if (*v213 == 9) {
							// 0x48578
							*v213 = 10;
							v212 = v4;
							// branch -> 0x48580
						} else {
							v212 = v210;
						}
					}
					int32_t v214 = v212; // 0x485bc
					if (*(char *)v212 == 25) {
						char *v215 = (char *)(v212 + 1); // 0x4858c
						if (*v215 == 30) {
							// 0x48598
							*v215 = 18;
							v214 = v4;
							// branch -> 0x485a0
						} else {
							v214 = v212;
						}
					}
					int32_t v216 = v214; // 0x485dc
					if (*(char *)v214 == 18) {
						char *v217 = (char *)(v214 + 1); // 0x485ac
						if (*v217 == 2) {
							// 0x485b8
							*v217 = 15;
							v216 = v4;
							// branch -> 0x485c0
						} else {
							v216 = v214;
						}
					}
					int32_t v218 = v216; // 0x485fc
					if (*(char *)v216 == 11) {
						char *v219 = (char *)(v216 + 40); // 0x485cc
						if (*v219 == 3) {
							// 0x485d8
							*v219 = 5;
							v218 = v4;
							// branch -> 0x485e0
						} else {
							v218 = v216;
						}
					}
					int32_t v220 = v218; // 0x4861c
					if (*(char *)v218 == 19) {
						char *v221 = (char *)(v218 + 40); // 0x485ec
						if (*v221 == 9) {
							// 0x485f8
							*v221 = 11;
							v220 = v4;
							// branch -> 0x48600
						} else {
							v220 = v218;
						}
					}
					int32_t v222 = v220; // 0x48648
					if (*(char *)v220 == 19) {
						char *v223 = (char *)(v220 + 40); // 0x4860c
						if (*v223 == 1) {
							// 0x48618
							*v223 = 13;
							v222 = v4;
							// branch -> 0x48620
						} else {
							v222 = v220;
						}
					}
					int32_t v224 = v222; // 0x4864c
					if (*(char *)v222 == 19) {
						char *v225 = (char *)(v222 + 40); // 0x4862c
						if (*v225 == 13) {
							// 0x48638
							if (*(char *)(v222 + 39) == 6) {
								// 0x48644
								*v225 = 16;
								v224 = v4;
								// branch -> 0x4864c
							} else {
								v224 = v222;
							}
						} else {
							v224 = v222;
						}
					}
					int32_t v226 = v224 + 40; // 0x4864c
					v4 = v226;
					int32_t v227 = v3 - 1; // 0x48650
					v3 = v227;
					if (v227 == 0) {
						// break -> 0x48654
						break;
					}
					v47 = v226;
					// continue -> 0x4791c
					continue;
				} else {
					v68 = v66;
				}
			}
			// 0x47a88
			if (*(char *)v68 == 22) {
				goto lab_0x47a94;
			}
			v69 = v68;
			goto lab_0x47aa8;
		}
		int32_t v228 = v5 + 1; // 0x48654
		v5 = v228;
		int32_t v229 = v1 + 1; // 0x48658
		v1 = v229;
		if (v228 >= 40) {
			// break -> 0x48664
			break;
		}
		v46 = v229;
		// continue -> 0x47910
	}
	// 0x48664
	v5 = 0;
	int32_t v230 = v1; // 0x48668
	v1 = v230;
	// branch -> 0x4866c
	while (true) {
		// 0x4866c
		v4 = v230;
		v3 = 40;
		int32_t v231 = v230; // 0x486a0
		// branch -> 0x48678
		while (true) {
			int32_t v232 = v231; // 0x486d8
			if (*(char *)v231 == 21) {
				char *v233 = (char *)(v231 + 1); // 0x48684
				if (*v233 == 24) {
					// 0x48690
					if (*(char *)(v231 + 2) == 1) {
						// 0x4869c
						*v233 = 17;
						v232 = v4;
						// branch -> 0x486a4
					} else {
						v232 = v231;
					}
				} else {
					v232 = v231;
				}
			}
			int32_t v234 = v232; // 0x486f8
			if (*(char *)v232 == 15) {
				// 0x486b0
				if (*(char *)(v232 + 41) == 9) {
					// 0x486bc
					if (*(char *)(v232 + 39) == 1) {
						// 0x486c8
						if (*(char *)(v232 + 80) == 16) {
							// 0x486d4
							*(char *)(v232 + 40) = 29;
							v234 = v4;
							// branch -> 0x486dc
						} else {
							v234 = v232;
						}
					} else {
						v234 = v232;
					}
				} else {
					v234 = v232;
				}
			}
			int32_t v235 = v234; // 0x48718
			if (*(char *)v234 == 2) {
				char *v236 = (char *)(v234 - 40); // 0x486e8
				if (*v236 == 6) {
					// 0x486f4
					*v236 = 8;
					v235 = v4;
					// branch -> 0x486fc
				} else {
					v235 = v234;
				}
			}
			int32_t v237 = v235; // 0x48744
			if (*(char *)v235 == 1) {
				char *v238 = (char *)(v235 - 1); // 0x48708
				if (*v238 == 6) {
					// 0x48714
					*v238 = 7;
					v237 = v4;
					// branch -> 0x4871c
				} else {
					v237 = v235;
				}
			}
			int32_t v239 = v237; // 0x48764
			if (*(char *)v237 == 6) {
				char *v240 = (char *)(v237 + 40); // 0x48728
				if (*v240 == 15) {
					// 0x48734
					if (*(char *)(v237 + 41) == 4) {
						// 0x48740
						*v240 = 10;
						v239 = v4;
						// branch -> 0x48748
					} else {
						v239 = v237;
					}
				} else {
					v239 = v237;
				}
			}
			int32_t v241 = v239; // 0x48784
			if (*(char *)v239 == 1) {
				char *v242 = (char *)(v239 + 1); // 0x48754
				if (*v242 == 3) {
					// 0x48760
					*v242 = 4;
					v241 = v4;
					// branch -> 0x48768
				} else {
					v241 = v239;
				}
			}
			int32_t v243 = v241; // 0x487a4
			if (*(char *)v241 == 1) {
				char *v244 = (char *)(v241 + 1); // 0x48774
				if (*v244 == 6) {
					// 0x48780
					*v244 = 4;
					v243 = v4;
					// branch -> 0x48788
				} else {
					v243 = v241;
				}
			}
			int32_t v245 = v243; // 0x487c4
			if (*(char *)v243 == 9) {
				char *v246 = (char *)(v243 + 1); // 0x48794
				if (*v246 == 3) {
					// 0x487a0
					*v246 = 4;
					v245 = v4;
					// branch -> 0x487a8
				} else {
					v245 = v243;
				}
			}
			int32_t v247 = v245; // 0x487e4
			if (*(char *)v245 == 10) {
				char *v248 = (char *)(v245 + 1); // 0x487b4
				if (*v248 == 3) {
					// 0x487c0
					*v248 = 4;
					v247 = v4;
					// branch -> 0x487c8
				} else {
					v247 = v245;
				}
			}
			int32_t v249 = v247; // 0x48804
			if (*(char *)v247 == 13) {
				char *v250 = (char *)(v247 + 1); // 0x487d4
				if (*v250 == 3) {
					// 0x487e0
					*v250 = 4;
					v249 = v4;
					// branch -> 0x487e8
				} else {
					v249 = v247;
				}
			}
			int32_t v251 = v249; // 0x48824
			if (*(char *)v249 == 1) {
				char *v252 = (char *)(v249 + 1); // 0x487f4
				if (*v252 == 5) {
					// 0x48800
					*v252 = 12;
					v251 = v4;
					// branch -> 0x48808
				} else {
					v251 = v249;
				}
			}
			int32_t v253 = v251; // 0x48844
			if (*(char *)v251 == 1) {
				char *v254 = (char *)(v251 + 1); // 0x48814
				if (*v254 == 16) {
					// 0x48820
					*v254 = 13;
					v253 = v4;
					// branch -> 0x48828
				} else {
					v253 = v251;
				}
			}
			int32_t v255 = v253; // 0x48864
			if (*(char *)v253 == 6) {
				char *v256 = (char *)(v253 + 1); // 0x48834
				if (*v256 == 13) {
					// 0x48840
					*v256 = 16;
					v255 = v4;
					// branch -> 0x48848
				} else {
					v255 = v253;
				}
			}
			int32_t v257 = v255; // 0x48884
			if (*(char *)v255 == 25) {
				char *v258 = (char *)(v255 + 1); // 0x48854
				if (*v258 == 9) {
					// 0x48860
					*v258 = 10;
					v257 = v4;
					// branch -> 0x48868
				} else {
					v257 = v255;
				}
			}
			int32_t v259 = v257; // 0x488b0
			if (*(char *)v257 == 13) {
				char *v260 = (char *)(v257 + 1); // 0x48874
				if (*v260 == 5) {
					// 0x48880
					*v260 = 12;
					v259 = v4;
					// branch -> 0x48888
				} else {
					v259 = v257;
				}
			}
			int32_t v261 = v259; // 0x488d0
			if (*(char *)v259 == 28) {
				// 0x48894
				if (*(char *)(v259 - 1) == 6) {
					char *v262 = (char *)(v259 + 40); // 0x488a0
					if (*v262 == 1) {
						// 0x488ac
						*v262 = 23;
						v261 = v4;
						// branch -> 0x488b4
					} else {
						v261 = v259;
					}
				} else {
					v261 = v259;
				}
			}
			int32_t v263 = v261; // 0x488f0
			if (*(char *)v261 == 19) {
				char *v264 = (char *)(v261 + 40); // 0x488c0
				if (*v264 == 10) {
					// 0x488cc
					*v264 = 17;
					v263 = v4;
					// branch -> 0x488d4
				} else {
					v263 = v261;
				}
			}
			int32_t v265 = v263; // 0x48910
			if (*(char *)v263 == 21) {
				char *v266 = (char *)(v263 + 40); // 0x488e0
				if (*v266 == 9) {
					// 0x488ec
					*v266 = 11;
					v265 = v4;
					// branch -> 0x488f4
				} else {
					v265 = v263;
				}
			}
			int32_t v267 = v265; // 0x48930
			if (*(char *)v265 == 11) {
				char *v268 = (char *)(v265 + 40); // 0x48900
				if (*v268 == 3) {
					// 0x4890c
					*v268 = 5;
					v267 = v4;
					// branch -> 0x48914
				} else {
					v267 = v265;
				}
			}
			int32_t v269 = v267; // 0x48950
			if (*(char *)v267 == 10) {
				char *v270 = (char *)(v267 + 40); // 0x48920
				if (*v270 == 4) {
					// 0x4892c
					*v270 = 12;
					v269 = v4;
					// branch -> 0x48934
				} else {
					v269 = v267;
				}
			}
			int32_t v271 = v269; // 0x48970
			if (*(char *)v269 == 14) {
				char *v272 = (char *)(v269 + 40); // 0x48940
				if (*v272 == 4) {
					// 0x4894c
					*v272 = 12;
					v271 = v4;
					// branch -> 0x48954
				} else {
					v271 = v269;
				}
			}
			int32_t v273 = v271; // 0x48990
			if (*(char *)v271 == 27) {
				char *v274 = (char *)(v271 + 40); // 0x48960
				if (*v274 == 9) {
					// 0x4896c
					*v274 = 11;
					v273 = v4;
					// branch -> 0x48974
				} else {
					v273 = v271;
				}
			}
			int32_t v275 = v273; // 0x489b0
			if (*(char *)v273 == 15) {
				char *v276 = (char *)(v273 + 40); // 0x48980
				if (*v276 == 4) {
					// 0x4898c
					*v276 = 12;
					v275 = v4;
					// branch -> 0x48994
				} else {
					v275 = v273;
				}
			}
			int32_t v277 = v275; // 0x489d0
			if (*(char *)v275 == 21) {
				char *v278 = (char *)(v275 + 40); // 0x489a0
				if (*v278 == 1) {
					// 0x489ac
					*v278 = 16;
					v277 = v4;
					// branch -> 0x489b4
				} else {
					v277 = v275;
				}
			}
			int32_t v279 = v277; // 0x489f0
			if (*(char *)v277 == 11) {
				char *v280 = (char *)(v277 + 40); // 0x489c0
				if (*v280 == 4) {
					// 0x489cc
					*v280 = 12;
					v279 = v4;
					// branch -> 0x489d4
				} else {
					v279 = v277;
				}
			}
			int32_t v281 = v279; // 0x48a10
			if (*(char *)v279 == 2) {
				char *v282 = (char *)(v279 + 40); // 0x489e0
				if (*v282 == 3) {
					// 0x489ec
					*v282 = 5;
					v281 = v4;
					// branch -> 0x489f4
				} else {
					v281 = v279;
				}
			}
			int32_t v283 = v281; // 0x48a30
			if (*(char *)v281 == 9) {
				char *v284 = (char *)(v281 + 40); // 0x48a00
				if (*v284 == 3) {
					// 0x48a0c
					*v284 = 5;
					v283 = v4;
					// branch -> 0x48a14
				} else {
					v283 = v281;
				}
			}
			int32_t v285 = v283; // 0x48a50
			if (*(char *)v283 == 14) {
				char *v286 = (char *)(v283 + 40); // 0x48a20
				if (*v286 == 3) {
					// 0x48a2c
					*v286 = 5;
					v285 = v4;
					// branch -> 0x48a34
				} else {
					v285 = v283;
				}
			}
			int32_t v287 = v285; // 0x48a7c
			if (*(char *)v285 == 15) {
				char *v288 = (char *)(v285 + 40); // 0x48a40
				if (*v288 == 3) {
					// 0x48a4c
					*v288 = 5;
					v287 = v4;
					// branch -> 0x48a54
				} else {
					v287 = v285;
				}
			}
			int32_t v289 = v287; // 0x48a9c
			if (*(char *)v287 == 2) {
				char *v290 = (char *)(v287 + 40); // 0x48a60
				if (*v290 == 5) {
					// 0x48a6c
					if (*(char *)(v287 + 39) == 16) {
						// 0x48a78
						*v290 = 12;
						v289 = v4;
						// branch -> 0x48a80
					} else {
						v289 = v287;
					}
				} else {
					v289 = v287;
				}
			}
			int32_t v291 = v289; // 0x48abc
			if (*(char *)v289 == 2) {
				char *v292 = (char *)(v289 + 40); // 0x48a8c
				if (*v292 == 4) {
					// 0x48a98
					*v292 = 12;
					v291 = v4;
					// branch -> 0x48aa0
				} else {
					v291 = v289;
				}
			}
			int32_t v293 = v291; // 0x48adc
			if (*(char *)v291 == 9) {
				char *v294 = (char *)(v291 + 40); // 0x48aac
				if (*v294 == 4) {
					// 0x48ab8
					*v294 = 12;
					v293 = v4;
					// branch -> 0x48ac0
				} else {
					v293 = v291;
				}
			}
			int32_t v295 = v293; // 0x48b08
			if (*(char *)v293 == 1) {
				char *v296 = (char *)(v293 - 1); // 0x48acc
				if (*v296 == 8) {
					// 0x48ad8
					*v296 = 9;
					v295 = v4;
					// branch -> 0x48ae0
				} else {
					v295 = v293;
				}
			}
			int32_t v297 = v295; // 0x48b0c
			if (*(char *)v295 == 28) {
				char *v298 = (char *)(v295 + 40); // 0x48aec
				if (*v298 == 23) {
					// 0x48af8
					if (*(char *)(v295 + 41) == 3) {
						// 0x48b04
						*v298 = 16;
						v297 = v4;
						// branch -> 0x48b0c
					} else {
						v297 = v295;
					}
				} else {
					v297 = v295;
				}
			}
			int32_t v299 = v297 + 40; // 0x48b0c
			v4 = v299;
			int32_t v300 = v3 - 1; // 0x48b10
			v3 = v300;
			if (v300 == 0) {
				// break -> 0x48b14
				break;
			}
			v231 = v299;
			// continue -> 0x48678
		}
		int32_t v301 = v5 + 1; // 0x48b14
		v5 = v301;
		int32_t v302 = v1 + 1; // 0x48b18
		v1 = v302;
		if (v301 >= 40) {
			// break -> 0x48b24
			break;
		}
		v230 = v302;
		// continue -> 0x4866c
	}
	// 0x48b24
	v5 = 0;
	int32_t v303 = v1; // 0x48b28
	v1 = v303;
	// branch -> 0x48b2c
	while (true) {
		// 0x48b2c
		v4 = v303;
		v3 = 40;
		int32_t v304 = v303; // 0x48b54
		// branch -> 0x48b38
		while (true) {
			int32_t v305 = v304; // 0x48b74
			if (*(char *)v304 == 21) {
				char *v306 = (char *)(v304 + 40); // 0x48b44
				if (*v306 == 10) {
					// 0x48b50
					*v306 = 17;
					v305 = v4;
					// branch -> 0x48b58
				} else {
					v305 = v304;
				}
			}
			int32_t v307 = v305; // 0x48b94
			if (*(char *)v305 == 17) {
				char *v308 = (char *)(v305 + 40); // 0x48b64
				if (*v308 == 4) {
					// 0x48b70
					*v308 = 12;
					v307 = v4;
					// branch -> 0x48b78
				} else {
					v307 = v305;
				}
			}
			int32_t v309 = v307; // 0x48bb4
			if (*(char *)v307 == 10) {
				char *v310 = (char *)(v307 + 40); // 0x48b84
				if (*v310 == 4) {
					// 0x48b90
					*v310 = 12;
					v309 = v4;
					// branch -> 0x48b98
				} else {
					v309 = v307;
				}
			}
			int32_t v311 = v309; // 0x48bd4
			if (*(char *)v309 == 17) {
				char *v312 = (char *)(v309 + 1); // 0x48ba4
				if (*v312 == 5) {
					// 0x48bb0
					*v312 = 12;
					v311 = v4;
					// branch -> 0x48bb8
				} else {
					v311 = v309;
				}
			}
			int32_t v313 = v311; // 0x48bf4
			if (*(char *)v311 == 29) {
				char *v314 = (char *)(v311 + 1); // 0x48bc4
				if (*v314 == 9) {
					// 0x48bd0
					*v314 = 10;
					v313 = v4;
					// branch -> 0x48bd8
				} else {
					v313 = v311;
				}
			}
			int32_t v315 = v313; // 0x48c14
			if (*(char *)v313 == 13) {
				char *v316 = (char *)(v313 + 1); // 0x48be4
				if (*v316 == 5) {
					// 0x48bf0
					*v316 = 12;
					v315 = v4;
					// branch -> 0x48bf8
				} else {
					v315 = v313;
				}
			}
			int32_t v317 = v315; // 0x48c34
			if (*(char *)v315 == 9) {
				char *v318 = (char *)(v315 + 1); // 0x48c04
				if (*v318 == 16) {
					// 0x48c10
					*v318 = 13;
					v317 = v4;
					// branch -> 0x48c18
				} else {
					v317 = v315;
				}
			}
			int32_t v319 = v317; // 0x48c54
			if (*(char *)v317 == 10) {
				char *v320 = (char *)(v317 + 1); // 0x48c24
				if (*v320 == 16) {
					// 0x48c30
					*v320 = 13;
					v319 = v4;
					// branch -> 0x48c38
				} else {
					v319 = v317;
				}
			}
			int32_t v321 = v319; // 0x48c74
			if (*(char *)v319 == 16) {
				char *v322 = (char *)(v319 + 1); // 0x48c44
				if (*v322 == 3) {
					// 0x48c50
					*v322 = 4;
					v321 = v4;
					// branch -> 0x48c58
				} else {
					v321 = v319;
				}
			}
			int32_t v323 = v321; // 0x48ca0
			if (*(char *)v321 == 11) {
				char *v324 = (char *)(v321 + 1); // 0x48c64
				if (*v324 == 5) {
					// 0x48c70
					*v324 = 12;
					v323 = v4;
					// branch -> 0x48c78
				} else {
					v323 = v321;
				}
			}
			int32_t v325 = v323; // 0x48cc0
			if (*(char *)v323 == 10) {
				char *v326 = (char *)(v323 + 40); // 0x48c84
				if (*v326 == 3) {
					// 0x48c90
					if (*(char *)(v323 + 39) == 16) {
						// 0x48c9c
						*v326 = 12;
						v325 = v4;
						// branch -> 0x48ca4
					} else {
						v325 = v323;
					}
				} else {
					v325 = v323;
				}
			}
			int32_t v327 = v325; // 0x48ce0
			if (*(char *)v325 == 16) {
				char *v328 = (char *)(v325 + 1); // 0x48cb0
				if (*v328 == 5) {
					// 0x48cbc
					*v328 = 12;
					v327 = v4;
					// branch -> 0x48cc4
				} else {
					v327 = v325;
				}
			}
			int32_t v329 = v327; // 0x48d0c
			if (*(char *)v327 == 1) {
				char *v330 = (char *)(v327 + 1); // 0x48cd0
				if (*v330 == 6) {
					// 0x48cdc
					*v330 = 4;
					v329 = v4;
					// branch -> 0x48ce4
				} else {
					v329 = v327;
				}
			}
			int32_t v331 = v329; // 0x48d2c
			if (*(char *)v329 == 21) {
				// 0x48cf0
				if (*(char *)(v329 + 40) == 13) {
					// 0x48cfc
					if (*(char *)(v329 + 1) == 10) {
						// 0x48d08
						*(char *)(v329 + 41) = 12;
						v331 = v4;
						// branch -> 0x48d10
					} else {
						v331 = v329;
					}
				} else {
					v331 = v329;
				}
			}
			int32_t v332 = v331; // 0x48d4c
			if (*(char *)v331 == 15) {
				char *v333 = (char *)(v331 + 40); // 0x48d1c
				if (*v333 == 10) {
					// 0x48d28
					*v333 = 17;
					v332 = v4;
					// branch -> 0x48d30
				} else {
					v332 = v331;
				}
			}
			int32_t v334 = v332; // 0x48d78
			if (*(char *)v332 == 22) {
				char *v335 = (char *)(v332 + 1); // 0x48d3c
				if (*v335 == 11) {
					// 0x48d48
					*v335 = 17;
					v334 = v4;
					// branch -> 0x48d50
				} else {
					v334 = v332;
				}
			}
			int32_t v336 = v334; // 0x48db0
			if (*(char *)v334 == 15) {
				char *v337 = (char *)(v334 + 40); // 0x48d5c
				if (*v337 == 28) {
					// 0x48d68
					if (*(char *)(v334 + 80) == 16) {
						// 0x48d74
						*v337 = 23;
						v336 = v4;
						// branch -> 0x48d7c
					} else {
						v336 = v334;
					}
				} else {
					v336 = v334;
				}
			}
			int32_t v338 = v336; // 0x48db4
			if (*(char *)v336 == 28) {
				char *v339 = (char *)(v336 + 40); // 0x48d88
				if (*v339 == 23) {
					// 0x48d94
					if (*(char *)(v336 + 41) == 1) {
						// 0x48da0
						if (*(char *)(v336 + 80) == 6) {
							// 0x48dac
							*v339 = 16;
							v338 = v4;
							// branch -> 0x48db4
						} else {
							v338 = v336;
						}
					} else {
						v338 = v336;
					}
				} else {
					v338 = v336;
				}
			}
			int32_t v340 = v338 + 40; // 0x48db4
			v4 = v340;
			int32_t v341 = v3 - 1; // 0x48db8
			v3 = v341;
			if (v341 == 0) {
				// break -> 0x48dbc
				break;
			}
			v304 = v340;
			// continue -> 0x48b38
		}
		int32_t v342 = v5 + 1; // 0x48dbc
		v5 = v342;
		int32_t v343 = v1 + 1; // 0x48dc0
		v1 = v343;
		if (v342 >= 40) {
			// break -> 0x48dcc
			break;
		}
		v303 = v343;
		// continue -> 0x48b2c
	}
	// 0x48dcc
	v1 = 0;
	int32_t v344 = v1; // 0x48dd8
	// branch -> 0x48dd0
	int32_t result; // 0x48f00
	while (true) {
		// 0x48dd0
		v3 = 20;
		v4 = v344;
		v5 = 0;
		int32_t v345 = v344; // 0x48e08
		// branch -> 0x48de0
		while (true) {
			int32_t v346 = v345; // 0x48e40
			if (*(char *)v345 == 15) {
				char *v347 = (char *)(v345 + 40); // 0x48dec
				if (*v347 == 28) {
					// 0x48df8
					if (*(char *)(v345 + 80) == 16) {
						// 0x48e04
						*v347 = 23;
						v346 = v4;
						// branch -> 0x48e0c
					} else {
						v346 = v345;
					}
				} else {
					v346 = v345;
				}
			}
			int32_t v348 = v346; // 0x48e6c
			if (*(char *)v346 == 21) {
				// 0x48e18
				if (*(char *)(v346 + 39) == 21) {
					// 0x48e24
					if (*(char *)(v346 + 41) == 13) {
						// 0x48e30
						if (*(char *)(v346 + 80) == 2) {
							// 0x48e3c
							*(char *)(v346 + 40) = 17;
							v348 = v4;
							// branch -> 0x48e44
						} else {
							v348 = v346;
						}
					} else {
						v348 = v346;
					}
				} else {
					v348 = v346;
				}
			}
			int32_t v349 = v348; // 0x48e70
			if (*(char *)v348 == 19) {
				char *v350 = (char *)(v348 + 40); // 0x48e50
				if (*v350 == 15) {
					// 0x48e5c
					if (*(char *)(v348 + 41) == 12) {
						// 0x48e68
						*v350 = 17;
						v349 = v4;
						// branch -> 0x48e70
					} else {
						v349 = v348;
					}
				} else {
					v349 = v348;
				}
			}
			int32_t v351 = v349 + 40; // 0x48e70
			v4 = v351;
			int32_t v352 = v351; // 0x48ed0
			if (*(char *)v351 == 15) {
				char *v353 = (char *)(v349 + 80); // 0x48e7c
				if (*v353 == 28) {
					// 0x48e88
					if (*(char *)(v349 + 120) == 16) {
						// 0x48e94
						*v353 = 23;
						v352 = v4;
						// branch -> 0x48e9c
					} else {
						v352 = v351;
					}
				} else {
					v352 = v351;
				}
			}
			int32_t v354 = v352; // 0x48efc
			if (*(char *)v352 == 21) {
				// 0x48ea8
				if (*(char *)(v352 + 39) == 21) {
					// 0x48eb4
					if (*(char *)(v352 + 41) == 13) {
						// 0x48ec0
						if (*(char *)(v352 + 80) == 2) {
							// 0x48ecc
							*(char *)(v352 + 40) = 17;
							v354 = v4;
							// branch -> 0x48ed4
						} else {
							v354 = v352;
						}
					} else {
						v354 = v352;
					}
				} else {
					v354 = v352;
				}
			}
			int32_t v355 = v354; // 0x48f00
			if (*(char *)v354 == 19) {
				char *v356 = (char *)(v354 + 40); // 0x48ee0
				if (*v356 == 15) {
					// 0x48eec
					if (*(char *)(v354 + 41) == 12) {
						// 0x48ef8
						*v356 = 17;
						v355 = v4;
						// branch -> 0x48f00
					} else {
						v355 = v354;
					}
				} else {
					v355 = v354;
				}
			}
			// 0x48f00
			result = v355 + 40;
			v4 = result;
			v5++;
			int32_t v357 = v3 - 1; // 0x48f08
			v3 = v357;
			if (v357 == 0) {
				// break -> 0x48f0c
				break;
			}
			v345 = result;
			// continue -> 0x48de0
		}
		int32_t v358 = v1 + 1;   // 0x48f0c
		int32_t v359 = v358 + 1; // 0x48f10
		v1 = v359;
		if (v358 >= 40) {
			// break -> 0x48f1c
			break;
		}
		v344 = v359;
		// continue -> 0x48dd0
	}
	// 0x48f1c
	return result;
}

// Address range: 0x48f20 - 0x4907c
int32_t function_48f20(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x48f28
	g30 = v1;
	int32_t v2 = 0;                          // r22
	int32_t v3 = *(int32_t *)(g23 - 0x7514); // 0x48f30
	g29 = v3;
	g36 = g23 - 525;
	// branch -> 0x48f48
	while (true) {
		int32_t v4 = v1; // r30
		int32_t v5 = v3; // r29
		int32_t v6 = 0;  // r23
		// branch -> 0x48f54
		while (true) {
			// 0x48f54
			g37 = 3;
			int32_t v7; // 0x48fc4
			if (random(0) == 0) {
				unsigned char v8 = *(char *)(g36 + (int32_t) * (char *)v4); // 0x48f6c
				int32_t v9 = v8;                                            // r24
				if (v8 != 0) {
					// 0x48f78
					if (*(char *)v5 == 0) {
						// 0x48f84
						g37 = 16;
						int32_t v10 = random(0); // 0x48f8c
						char v11 = -1;
						if (v10 > -1) {
							int32_t v12 = -1; // 0x48f985
							int32_t v13;      // 0x48f98
							while (true) {
								int32_t v14 = v12 + 1; // 0x48f98
								v13 = v14;
								if (v14 == 140) {
									// 0x48fa4
									v13 = 0;
									// branch -> 0x48fa8
								}
								int32_t v15 = v10;
								if (v9 == (int32_t) * (char *)(g36 + v13)) {
									// 0x48fb4
									v15 = v10 - 1;
									// branch -> 0x48fb8
								}
								// 0x48fb8
								if (v15 <= 0xffffffff) {
									// break -> 0x48fb8
									break;
								}
								v10 = v15;
								v12 = v13;
								// continue -> 0x48f98
							}
							// 0x48fb8
							v11 = v13;
							// branch -> 0x48fc0
						}
						// 0x48fc0
						*(char *)v4 = v11;
						// branch -> 0x48fc4
					}
				}
				// 0x48fc4
				v7 = v6 + 1;
				v6 = v7;
				v5 += 40;
				v4 += 40;
				if (v7 >= 40) {
					// break -> 0x48fd8
					break;
				}
				// continue -> 0x48f54
				continue;
			}
			// 0x48fc4
			v7 = v6 + 1;
			v6 = v7;
			v5 += 40;
			v4 += 40;
			if (v7 >= 40) {
				// break -> 0x48fd8
				break;
			}
			// continue -> 0x48f54
		}
		int32_t v16 = v2 + 1; // 0x48fd8
		v2 = v16;
		int32_t v17 = v3 + 1; // 0x48fdc
		if (v16 >= 40) {
			// break -> 0x48fec
			break;
		}
		v3 = v17;
		v1++;
		// continue -> 0x48f48
	}
	// 0x48fec
	g33 = 0;
	int32_t v18 = g29; // 0x48ff4
	int32_t v19 = g30; // 0x48ff0
	// branch -> 0x48ff0
	int32_t result; // r3
	while (true) {
		// 0x48ff0
		v3 = v19;
		g32 = v18;
		g35 = 0;
		// branch -> 0x48ffc
		while (true) {
			// 0x48ffc
			g37 = 10;
			int32_t v20 = random(0); // 0x49004
			result = v20;
			if (v20 == 0) {
				// 0x49010
				if (*(char *)(g36 + (int32_t) * (char *)v3) == 6) {
					// 0x49020
					if (*(char *)g32 == 0) {
						// 0x4902c
						g37 = 3;
						int32_t v21 = random(0); // 0x49034
						result = v21;
						*(char *)v3 = (char)(v21 + 95);
						// branch -> 0x49040
					}
				}
			}
			int32_t v22 = g35 + 1; // 0x49040
			g35 = v22;
			g32 += 40;
			v3 += 40;
			if (v22 >= 40) {
				// break -> 0x49054
				break;
			}
			// continue -> 0x48ffc
		}
		int32_t v23 = g33 + 1; // 0x49054
		g33 = v23;
		int32_t v24 = g29 + 1; // 0x49058
		g29 = v24;
		int32_t v25 = g30 + 1; // 0x49060
		g30 = v25;
		if (v23 >= 40) {
			// break -> 0x49068
			break;
		}
		v18 = v24;
		v19 = v25;
		// continue -> 0x48ff0
	}
	// 0x49068
	return result;
}

// Address range: 0x4907c - 0x49574
int32_t function_4907c(void)
{
	int32_t result = *(int32_t *)(g23 - 0x72c8); // 0x4907c
	int32_t v1 = 0;                              // r10
	int32_t v2 = 0;                              // r8
	int32_t v3 = *(int32_t *)(g23 - 0x72cc);     // r0
	int32_t v4 = 0;                              // 0x490a44
	                                             // branch -> 0x49094
lab_0x49094:
	while (true) {
		int32_t v5 = result; // r6
		int32_t v6 = 4;      // ctr
		int32_t v7 = result; // 0x490a8
		int32_t v8 = v4;     // 0x490a4
		int32_t v9 = 0;      // 0x490b0
		// branch -> 0x490a4
		int32_t v10; // r9
		while (true) {
			int32_t v11 = v3 + v9 + v8; // 0x490ac
			v10 = v11;
			*(char *)v11 = *(char *)v7;
			*(char *)(v10 + 1) = *(char *)v5;
			*(char *)(v10 + 80) = *(char *)v5;
			*(char *)(v10 + 81) = *(char *)v5;
			int32_t v12 = v9 + 160;      // 0x490d0
			int32_t v13 = v2 + v12 + v3; // 0x490d4
			v10 = v13;
			*(char *)v13 = *(char *)(v5 + 20);
			*(char *)(v10 + 1) = *(char *)(v5 + 20);
			*(char *)(v10 + 80) = *(char *)(v5 + 20);
			*(char *)(v10 + 81) = *(char *)(v5 + 20);
			int32_t v14 = v12 + 160;     // 0x490fc
			int32_t v15 = v2 + v14 + v3; // 0x49100
			v10 = v15;
			*(char *)v15 = *(char *)(v5 + 40);
			*(char *)(v10 + 1) = *(char *)(v5 + 40);
			*(char *)(v10 + 80) = *(char *)(v5 + 40);
			*(char *)(v10 + 81) = *(char *)(v5 + 40);
			int32_t v16 = v14 + 160;     // 0x49128
			int32_t v17 = v2 + v16 + v3; // 0x4912c
			v10 = v17;
			*(char *)v17 = *(char *)(v5 + 60);
			*(char *)(v10 + 1) = *(char *)(v5 + 60);
			*(char *)(v10 + 80) = *(char *)(v5 + 60);
			*(char *)(v10 + 81) = *(char *)(v5 + 60);
			int32_t v18 = v16 + 160;     // 0x49154
			int32_t v19 = v2 + v18 + v3; // 0x49158
			v10 = v19;
			int32_t v20 = v18 + 160; // r5
			*(char *)v19 = *(char *)(v5 + 80);
			*(char *)(v10 + 1) = *(char *)(v5 + 80);
			*(char *)(v10 + 80) = *(char *)(v5 + 80);
			int32_t v21 = v5; // 0x49178
			v5 = v21 + 100;
			*(char *)(v10 + 81) = *(char *)(v21 + 80);
			int32_t v22 = v6 - 1; // 0x49184
			v6 = v22;
			if (v22 == 0) {
				int32_t v23 = v1 + 1; // 0x49188
				v1 = v23;
				int32_t v24 = v2 + 2; // 0x4918c
				v2 = v24;
				int32_t v25 = result + 1; // 0x49194
				if (v23 >= 20) {
					// break (via goto) -> 0x4919c
					goto lab_0x4919c;
				}
				v4 = v24;
				result = v25;
				// continue (via goto) -> 0x49094
				goto lab_0x49094;
			} else {
				// 0x490a4
				v7 = v5;
				v8 = v2;
				v9 = v20;
				// branch -> 0x490a4
				continue;
			}
		}
	lab_0x4919c:
		// 0x4919c
		v10 = 0;
		result = 0;
		int32_t v26 = 0; // 0x491b89
		int32_t v27 = 0; // 0x491a8
		                 // branch -> 0x491a4
	lab_0x491a4:
		while (true) {
			// 0x491a4
			v6 = 4;
			int32_t v28 = result + 19 - v27; // 0x491b0
			v5 = v28;
			int32_t v29 = v26; // 0x491b8
			int32_t v30 = 0;   // 0x491c4
			// branch -> 0x491b8
			int32_t v31; // r4
			while (true) {
				int32_t v32 = v3 + v30 + v29; // 0x491c0
				v2 = v32;
				*(char *)(v32 + 40) = *(char *)v28;
				*(char *)(v2 + 41) = *(char *)v5;
				*(char *)(v2 + 120) = *(char *)v5;
				*(char *)(v2 + 121) = *(char *)v5;
				int32_t v33 = v30 + 160;         // 0x491e4
				int32_t v34 = result + v33 + v3; // 0x491e8
				v2 = v34;
				*(char *)(v34 + 40) = *(char *)(v5 + 20);
				*(char *)(v2 + 41) = *(char *)(v5 + 20);
				*(char *)(v2 + 120) = *(char *)(v5 + 20);
				*(char *)(v2 + 121) = *(char *)(v5 + 20);
				int32_t v35 = v33 + 160;         // 0x49210
				int32_t v36 = result + v35 + v3; // 0x49214
				v2 = v36;
				*(char *)(v36 + 40) = *(char *)(v5 + 40);
				*(char *)(v2 + 41) = *(char *)(v5 + 40);
				*(char *)(v2 + 120) = *(char *)(v5 + 40);
				*(char *)(v2 + 121) = *(char *)(v5 + 40);
				int32_t v37 = v35 + 160;         // 0x4923c
				int32_t v38 = result + v37 + v3; // 0x49240
				v2 = v38;
				*(char *)(v38 + 40) = *(char *)(v5 + 60);
				*(char *)(v2 + 41) = *(char *)(v5 + 60);
				*(char *)(v2 + 120) = *(char *)(v5 + 60);
				*(char *)(v2 + 121) = *(char *)(v5 + 60);
				int32_t v39 = v37 + 160;         // 0x49268
				int32_t v40 = result + v39 + v3; // 0x4926c
				v2 = v40;
				v31 = v39 + 160;
				*(char *)(v40 + 40) = *(char *)(v5 + 80);
				*(char *)(v2 + 41) = *(char *)(v5 + 80);
				*(char *)(v2 + 120) = *(char *)(v5 + 80);
				int32_t v41 = v5; // 0x4928c
				v5 = v41 + 100;
				*(char *)(v2 + 121) = *(char *)(v41 + 80);
				int32_t v42 = v6 - 1; // 0x49298
				v6 = v42;
				if (v42 == 0) {
					int32_t v43 = v10 + 1; // 0x4929c
					v10 = v43;
					int32_t v44 = result + 2; // 0x492a0
					result = v44;
					if (v43 >= 20) {
						// break (via goto) -> 0x492ac
						goto lab_0x492ac;
					}
					v26 = v44;
					v27 = v43;
					// continue (via goto) -> 0x491a4
					goto lab_0x491a4;
				} else {
					// 0x491b8
					v28 = v5;
					v29 = result;
					v30 = v31;
					// branch -> 0x491b8
					continue;
				}
			}
		lab_0x492ac:;
			int32_t v45 = 0; // r12
			v2 = 0;
			v10 = result;
			int32_t v46 = result; // 0x492e016
			int32_t v47 = 0;      // 0x492cc14
			                      // branch -> 0x492b8
		lab_0x492b8:
			while (true) {
				// 0x492b8
				v6 = 4;
				int32_t v48 = v46; // 0x492e0
				int32_t v49 = v47; // 0x492cc
				int32_t v50 = 0;   // 0x492dc
				int32_t v51 = 0;   // 0x492d4
				// branch -> 0x492c8
				int32_t v52; // r11
				int32_t v53; // r31
				while (true) {
					int32_t v54 = v50 + v49 + v3; // 0x492d8
					v52 = v54;
					int32_t v55 = 20 * (19 - v51) + v48; // 0x492e0
					v1 = v55;
					*(char *)(v54 + 3200) = *(char *)v55;
					int32_t v56 = v51 + 2; // 0x492fc
					v53 = v56 + 1;
					*(char *)(v52 + 3201) = *(char *)v1;
					*(char *)(v52 + 3280) = *(char *)v1;
					unsigned char v57 = *(char *)v1; // 0x49310
					v1 = 20 * (18 - v51) + v10;
					*(char *)(v52 + 3281) = v57;
					int32_t v58 = v50 + 160;     // 0x49320
					int32_t v59 = v2 + v58 + v3; // 0x49324
					v52 = v59;
					int32_t v60 = v53; // 0x4932c
					*(char *)(v59 + 3200) = *(char *)v1;
					v53++;
					*(char *)(v52 + 3201) = *(char *)v1;
					*(char *)(v52 + 3280) = *(char *)v1;
					unsigned char v61 = *(char *)v1; // 0x4934c
					v1 = 20 * (19 - v56) + v10;
					*(char *)(v52 + 3281) = v61;
					int32_t v62 = v58 + 160;     // 0x4935c
					int32_t v63 = v2 + v62 + v3; // 0x49360
					v52 = v63;
					int32_t v64 = v53; // 0x49368
					*(char *)(v63 + 3200) = *(char *)v1;
					v53++;
					*(char *)(v52 + 3201) = *(char *)v1;
					*(char *)(v52 + 3280) = *(char *)v1;
					unsigned char v65 = *(char *)v1; // 0x49388
					v1 = 20 * (19 - v60) + v10;
					*(char *)(v52 + 3281) = v65;
					int32_t v66 = v62 + 160;     // 0x49398
					int32_t v67 = v2 + v66 + v3; // 0x4939c
					v52 = v67;
					*(char *)(v67 + 3200) = *(char *)v1;
					*(char *)(v52 + 3201) = *(char *)v1;
					*(char *)(v52 + 3280) = *(char *)v1;
					unsigned char v68 = *(char *)v1; // 0x493bc
					v1 = 20 * (19 - v64) + v10;
					*(char *)(v52 + 3281) = v68;
					int32_t v69 = v66 + 160;     // 0x493c8
					int32_t v70 = v2 + v69 + v3; // 0x493cc
					v52 = v70;
					v31 = v69 + 160;
					*(char *)(v70 + 3200) = *(char *)v1;
					*(char *)(v52 + 3201) = *(char *)v1;
					*(char *)(v52 + 3280) = *(char *)v1;
					*(char *)(v52 + 3281) = *(char *)v1;
					int32_t v71 = v6 - 1; // 0x493f4
					v6 = v71;
					if (v71 == 0) {
						int32_t v72 = v45 + 1; // 0x493f8
						v45 = v72;
						int32_t v73 = v10 + 1; // 0x493fc
						v10 = v73;
						int32_t v74 = v2 + 2; // 0x49404
						v2 = v74;
						if (v72 >= 20) {
							// break (via goto) -> 0x4940c
							goto lab_0x4940c;
						}
						v46 = v73;
						v47 = v74;
						// continue (via goto) -> 0x492b8
						goto lab_0x492b8;
					} else {
						// 0x492c8
						v48 = v10;
						v49 = v2;
						v50 = v31;
						v51 = v53;
						// branch -> 0x492c8
						continue;
					}
				}
			lab_0x4940c:
				// 0x4940c
				v45 = 0;
				v10 = 0;
				int32_t v75 = 0; // 0x4943021
				int32_t v76 = 0; // 0x49418
				                 // branch -> 0x49414
			lab_0x49414:
				while (true) {
					// 0x49414
					v6 = 4;
					int32_t v77 = result + 19 - v76; // 0x49420
					v2 = v77;
					int32_t v78 = v75; // 0x49430
					int32_t v79 = 0;   // 0x49440
					int32_t v80 = 0;   // 0x49438
					// branch -> 0x4942c
					while (true) {
						int32_t v81 = v79 + v78 + v3; // 0x4943c
						v52 = v81;
						int32_t v82 = 20 * (19 - v80) + v77; // 0x49444
						v1 = v82;
						*(char *)(v81 + 3240) = *(char *)v82;
						int32_t v83 = v80 + 2; // 0x49460
						v53 = v83 + 1;
						*(char *)(v52 + 3241) = *(char *)v1;
						*(char *)(v52 + 3320) = *(char *)v1;
						unsigned char v84 = *(char *)v1; // 0x49474
						v1 = 20 * (18 - v80) + v2;
						*(char *)(v52 + 3321) = v84;
						int32_t v85 = v79 + 160;      // 0x49484
						int32_t v86 = v10 + v85 + v3; // 0x49488
						v52 = v86;
						int32_t v87 = v53; // 0x49490
						*(char *)(v86 + 3240) = *(char *)v1;
						v53++;
						*(char *)(v52 + 3241) = *(char *)v1;
						*(char *)(v52 + 3320) = *(char *)v1;
						unsigned char v88 = *(char *)v1; // 0x494b0
						v1 = 20 * (19 - v83) + v2;
						*(char *)(v52 + 3321) = v88;
						int32_t v89 = v85 + 160;      // 0x494c0
						int32_t v90 = v10 + v89 + v3; // 0x494c4
						v52 = v90;
						int32_t v91 = v53; // 0x494cc
						*(char *)(v90 + 3240) = *(char *)v1;
						v53++;
						*(char *)(v52 + 3241) = *(char *)v1;
						*(char *)(v52 + 3320) = *(char *)v1;
						unsigned char v92 = *(char *)v1; // 0x494ec
						v1 = 20 * (19 - v87) + v2;
						*(char *)(v52 + 3321) = v92;
						int32_t v93 = v89 + 160;      // 0x494fc
						int32_t v94 = v10 + v93 + v3; // 0x49500
						v52 = v94;
						*(char *)(v94 + 3240) = *(char *)v1;
						*(char *)(v52 + 3241) = *(char *)v1;
						*(char *)(v52 + 3320) = *(char *)v1;
						unsigned char v95 = *(char *)v1; // 0x49520
						v1 = 20 * (19 - v91) + v2;
						*(char *)(v52 + 3321) = v95;
						int32_t v96 = v93 + 160;      // 0x4952c
						int32_t v97 = v10 + v96 + v3; // 0x49530
						v52 = v97;
						v31 = v96 + 160;
						*(char *)(v97 + 3240) = *(char *)v1;
						*(char *)(v52 + 3241) = *(char *)v1;
						*(char *)(v52 + 3320) = *(char *)v1;
						*(char *)(v52 + 3321) = *(char *)v1;
						int32_t v98 = v6 - 1; // 0x49558
						v6 = v98;
						if (v98 == 0) {
							int32_t v99 = v45 + 1; // 0x4955c
							v45 = v99;
							int32_t v100 = v10 + 2; // 0x49560
							v10 = v100;
							if (v99 >= 20) {
								// break (via goto) -> 0x4956c
								goto lab_0x4956c;
							}
							v75 = v100;
							v76 = v99;
							// continue (via goto) -> 0x49414
							goto lab_0x49414;
						} else {
							// 0x4942c
							v77 = v2;
							v78 = v10;
							v79 = v31;
							v80 = v53;
							// branch -> 0x4942c
							continue;
						}
					}
				lab_0x4956c:
					// 0x4956c
					return result;
				}
			}
		}
	}
}

// Address range: 0x49574 - 0x498a0
int32_t function_49574(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x72c8); // 0x4957c
	g36 = v1;
	int32_t v2 = 19;                         // r8
	int32_t v3 = *(int32_t *)(g23 - 0x72d0); // 0x49588
	int32_t v4 = v1 + 19;                    // 0x4958c
	int32_t v5 = v3 + 76;                    // 0x49594
	int32_t v6 = 10;                         // ctr
	                                         // branch -> 0x495ac
lab_0x495ac:
	while (true) {
		int32_t v7 = 19; // r9
		int32_t v8 = 0;  // r0
		int32_t v9 = 19; // 0x495bc
		// branch -> 0x495bc
		int32_t v10; // r7
		while (true) {
			int32_t v11 = 20 * v9 + v4; // 0x495c0
			v10 = v11;
			int32_t v12 = v11; // 0x495ec
			if (*(char *)v11 != 1) {
				// 0x495d0
				*(int32_t *)v5 = v8;
				v12 = v10;
				// branch -> 0x495d4
			}
			// 0x495d4
			int32_t v13; // 0x49608
			int32_t v14; // 0x49608
			if (*(char *)v12 == 1) {
				// 0x495e0
				if (*(char *)(v12 + 1) == 1) {
					// 0x495ec
					if (*(char *)(v12 + 21) == 0) {
						// 0x495f8
						*(int32_t *)v5 = 1;
						// branch -> 0x49604
					lab_0x49604:
						// 0x49604
						v13 = 0;
						// branch -> 0x49608
					lab_0x49608:
						// 0x49608
						v14 = v13 - 1;
						v7 = v14;
						if (v14 > -1) {
						lab_0x49608_2:
							// 0x49608
							v9 = v14;
							// branch -> 0x495bc
							continue;
						} else {
						lab_0x4962c:
							// 0x4962c
							v7 = 19;
							int32_t v15 = v4 - 1; // 0x49618
							v5 -= 4;
							v8 = 0;
							int32_t v16 = 19; // 0x4962c
							// branch -> 0x4962c
							while (true) {
								int32_t v17 = 20 * v16 + v15; // 0x49630
								v10 = v17;
								int32_t v18 = v17; // 0x4965c
								if (*(char *)v17 != 1) {
									// 0x49640
									*(int32_t *)v5 = v8;
									v18 = v10;
									// branch -> 0x49644
								}
								// 0x49644
								int32_t v19; // 0x49678
								int32_t v20; // 0x49678
								if (*(char *)v18 == 1) {
									// 0x49650
									if (*(char *)(v18 + 1) == 1) {
										// 0x4965c
										if (*(char *)(v18 + 21) == 0) {
											// 0x49668
											*(int32_t *)v5 = 1;
											// branch -> 0x49674
										lab_0x49674:
											// 0x49674
											v19 = 0;
											// branch -> 0x49678
										lab_0x49678:
											// 0x49678
											v20 = v19 - 1;
											v7 = v20;
											if (v20 <= 0xffffffff) {
												// break -> 0x49684
												break;
											}
											v16 = v20;
											// continue -> 0x4962c
											continue;
										}
									}
									// 0x49670
									*(int32_t *)v5 = v8;
									// branch -> 0x49674
									goto lab_0x49674;
								} else {
									// 0x49644
									v19 = v7;
									// branch -> 0x49678
									goto lab_0x49678;
								}
								// 0x49678
								v20 = v19 - 1;
								v7 = v20;
								v15 = v4;
								if (v20 <= 0xffffffff) {
									// break -> 0x49684
									break;
								}
								v16 = v20;
								// continue -> 0x4962c
							}
							// 0x49684
							v5 -= 4;
							v2--;
							int32_t v21 = v6 - 1; // 0x49690
							v6 = v21;
							if (v21 == 0) {
								// break (via goto) -> 0x49694
								goto lab_0x49694;
							}
							v4 = v15 - 1;
							// continue (via goto) -> 0x495ac
							goto lab_0x495ac;
						}
					}
				}
				// 0x49600
				*(int32_t *)v5 = v8;
				// branch -> 0x49604
				goto lab_0x49604;
			} else {
				// 0x495d4
				v13 = v7;
				// branch -> 0x49608
				goto lab_0x49608;
			}
			// 0x49608
			v14 = v13 - 1;
			v7 = v14;
			if (v14 > -1) {
				goto lab_0x49608_2;
			}
			goto lab_0x4962c;
		}
	lab_0x49694:
		// 0x49694
		g37 = 19;
		int32_t v22 = random(0) + 1; // 0x496a0
		v5 = v22;
		// branch -> 0x496a4
		int32_t v23; // r4
		while (true) {
			// 0x496a4
			int32_t v24; // 0x4970c
			if (*(int32_t *)(v3 + 4 * v22) == 0) {
				int32_t v25 = v22 + 1; // 0x496fc
				v5 = v25;
				if (v25 == 20) {
					// 0x49708
					v5 = 1;
					v24 = 1;
					// branch -> 0x4970c
				} else {
					v24 = v25;
				}
			} else {
				// 0x496b4
				v4 = 19;
				v8 = 1;
				int32_t v26 = v22; // 0x496c4
				int32_t v27 = 19;  // 0x496c0
				// branch -> 0x496c0
				while (true) {
					int32_t v28 = 20 * v27 + v26 + g36; // 0x496c8
					v23 = v28;
					char *v29 = (char *)v28; // 0x496cc
					int32_t v30;             // 0x496ec
					int32_t v31;
					if (*v29 == 1) {
						// 0x496d8
						v5 = 0;
						v31 = 0;
						v30 = -1;
						// branch -> 0x496ec
					} else {
						// 0x496e4
						*v29 = (char)v8;
						*(char *)(v23 + 1) = (char)v8;
						v31 = v5;
						v30 = v4;
						// branch -> 0x496ec
					}
					int32_t v32 = v30 - 1; // 0x496ec
					v4 = v32;
					if (v32 <= 0xffffffff) {
						v24 = v31;
						// break -> 0x4970c
						break;
					}
					v26 = v31;
					v27 = v32;
					// continue -> 0x496c0
				}
				// 0x4970c
				if (v24 == 0) {
					// break -> 0x49714
					break;
				}
				v22 = v24;
				// continue -> 0x496a4
				continue;
			}
			// 0x4970c
			if (v24 == 0) {
				// break -> 0x49714
				break;
			}
			v22 = v24;
			// continue -> 0x496a4
		}
		int32_t v33 = g36 + 380; // 0x49718
		v4 = v33;
		v6 = 10;
		v2 = 19;
		// branch -> 0x49724
	lab_0x49724:
		while (true) {
			// 0x49724
			v10 = 19;
			v8 = 0;
			int32_t v34 = 19;  // 0x49734
			int32_t v35 = v33; // 0x49734
			// branch -> 0x49734
			while (true) {
				int32_t v36 = v35 + v34; // 0x49734
				v5 = v36;
				int32_t v37 = v36; // 0x49760
				if (*(char *)v36 != 1) {
					// 0x49744
					*(int32_t *)v5 = v8;
					v37 = v5;
					// branch -> 0x49748
				}
				// 0x49748
				int32_t v38; // 0x4977c
				int32_t v39; // 0x4977c
				if (*(char *)v37 == 1) {
					// 0x49754
					if (*(char *)(v37 + 20) == 1) {
						// 0x49760
						if (*(char *)(v37 + 21) == 0) {
							// 0x4976c
							*(int32_t *)v5 = 1;
							// branch -> 0x49778
						lab_0x49778:
							// 0x49778
							v38 = 0;
							// branch -> 0x4977c
						lab_0x4977c:
							// 0x4977c
							v39 = v38 - 1;
							v10 = v39;
							if (v39 > -1) {
							lab_0x4977c_2:
								// 0x4977c
								v34 = v39;
								v35 = v4;
								// branch -> 0x49734
								continue;
							} else {
							lab_0x497a0:
								// 0x497a0
								v10 = 19;
								int32_t v40 = v4 - 20; // 0x4978c
								v8 = 0;
								int32_t v41 = 19; // 0x497a0
								// branch -> 0x497a0
								while (true) {
									int32_t v42 = v40 + v41; // 0x497a0
									v5 = v42;
									int32_t v43 = v42; // 0x497cc
									if (*(char *)v42 != 1) {
										// 0x497b0
										*(int32_t *)v5 = v8;
										v43 = v5;
										// branch -> 0x497b4
									}
									// 0x497b4
									int32_t v44; // 0x497e8
									int32_t v45; // 0x497e8
									if (*(char *)v43 == 1) {
										// 0x497c0
										if (*(char *)(v43 + 20) == 1) {
											// 0x497cc
											if (*(char *)(v43 + 21) == 0) {
												// 0x497d8
												*(int32_t *)v5 = 1;
												// branch -> 0x497e4
											lab_0x497e4:
												// 0x497e4
												v44 = 0;
												// branch -> 0x497e8
											lab_0x497e8:
												// 0x497e8
												v45 = v44 - 1;
												v10 = v45;
												if (v45 <= 0xffffffff) {
													// break -> 0x497f4
													break;
												}
												v41 = v45;
												// continue -> 0x497a0
												continue;
											}
										}
										// 0x497e0
										*(int32_t *)v5 = v8;
										// branch -> 0x497e4
										goto lab_0x497e4;
									} else {
										// 0x497b4
										v44 = v10;
										// branch -> 0x497e8
										goto lab_0x497e8;
									}
									// 0x497e8
									v45 = v44 - 1;
									v10 = v45;
									v40 = v4;
									if (v45 <= 0xffffffff) {
										// break -> 0x497f4
										break;
									}
									v41 = v45;
									// continue -> 0x497a0
								}
								int32_t v46 = v40 - 20; // 0x497f4
								v4 = v46;
								v2--;
								int32_t v47 = v6 - 1; // 0x49800
								v6 = v47;
								if (v47 == 0) {
									// break (via goto) -> 0x49804
									goto lab_0x49804;
								}
								v33 = v46;
								// continue (via goto) -> 0x49724
								goto lab_0x49724;
							}
						}
					}
					// 0x49774
					*(int32_t *)v5 = v8;
					// branch -> 0x49778
					goto lab_0x49778;
				} else {
					// 0x49748
					v38 = v10;
					// branch -> 0x4977c
					goto lab_0x4977c;
				}
				// 0x4977c
				v39 = v38 - 1;
				v10 = v39;
				if (v39 > -1) {
					goto lab_0x4977c_2;
				}
				goto lab_0x497a0;
			}
		lab_0x49804:
			// 0x49804
			g37 = 19;
			int32_t v48 = random(0); // 0x4980c
			int32_t result = v48;    // r3
			int32_t v49 = v48 + 1;   // 0x49810
			v5 = v49;
			// branch -> 0x49814
			while (true) {
				// 0x49814
				int32_t v50; // 0x4987c
				if (*(int32_t *)(v3 + 4 * v49) == 0) {
					int32_t v51 = v49 + 1; // 0x4986c
					v5 = v51;
					if (v51 == 20) {
						// 0x49878
						v5 = 1;
						v50 = 1;
						// branch -> 0x4987c
					} else {
						v50 = v51;
					}
				} else {
					// 0x49824
					v4 = 19;
					v8 = 1;
					int32_t v52 = 19;  // 0x49834
					int32_t v53 = v49; // 0x49830
					// branch -> 0x49830
					while (true) {
						int32_t v54 = 20 * v53 + v52 + g36; // 0x49838
						v23 = v54;
						char *v55 = (char *)v54;  // 0x4983c
						unsigned char v56 = *v55; // 0x4983c
						result = v56;
						int32_t v57;
						int32_t v58; // 0x4985c
						if (v56 == 1) {
							// 0x49848
							v5 = 0;
							v57 = 0;
							v58 = -1;
							// branch -> 0x4985c
						} else {
							// 0x49854
							*v55 = (char)v8;
							*(char *)(v23 + 20) = (char)v8;
							v57 = v5;
							v58 = v4;
							// branch -> 0x4985c
						}
						int32_t v59 = v58 - 1; // 0x4985c
						v4 = v59;
						if (v59 <= 0xffffffff) {
							v50 = v57;
							// break -> 0x4987c
							break;
						}
						v52 = v59;
						v53 = v57;
						// continue -> 0x49830
					}
					// 0x4987c
					if (v50 == 0) {
						// break -> 0x49884
						break;
					}
					v49 = v50;
					// continue -> 0x49814
					continue;
				}
				// 0x4987c
				if (v50 == 0) {
					// break -> 0x49884
					break;
				}
				v49 = v50;
				// continue -> 0x49814
			}
			// 0x49884
			return result;
		}
	}
}

// Address range: 0x498a0 - 0x4999c
int32_t function_498a0(int32_t a1)
{
	int32_t v1 = 0;                          // 0x49988
	int32_t v2 = 0;                          // 0x498c814
	int32_t v3 = *(int32_t *)(g23 - 0x72c8); // 0x4998c
	// branch -> 0x498ac
	int32_t result; // 0x49998
	while (true) {
		int32_t v4 = 2;  // 0x49984
		int32_t v5 = v2; // 0x498c8
		int32_t v6 = v3; // 0x498cc
		// branch -> 0x498bc
		while (true) {
			int32_t v7 = v5; // 0x498d8
			if (*(char *)v6 == 1) {
				// 0x498c8
				v7 = v5 + 1;
				// branch -> 0x498cc
			}
			int32_t v8 = v7; // 0x498ec
			if (*(char *)(v6 + 20) == 1) {
				// 0x498d8
				v8 = v7 + 1;
				// branch -> 0x498dc
			}
			int32_t v9 = v8; // 0x49900
			if (*(char *)(v6 + 40) == 1) {
				// 0x498ec
				v9 = v8 + 1;
				// branch -> 0x498f0
			}
			int32_t v10 = v9; // 0x49914
			if (*(char *)(v6 + 60) == 1) {
				// 0x49900
				v10 = v9 + 1;
				// branch -> 0x49904
			}
			int32_t v11 = v10; // 0x49928
			if (*(char *)(v6 + 80) == 1) {
				// 0x49914
				v11 = v10 + 1;
				// branch -> 0x49918
			}
			int32_t v12 = v11; // 0x4993c
			if (*(char *)(v6 + 100) == 1) {
				// 0x49928
				v12 = v11 + 1;
				// branch -> 0x4992c
			}
			int32_t v13 = v12; // 0x49950
			if (*(char *)(v6 + 120) == 1) {
				// 0x4993c
				v13 = v12 + 1;
				// branch -> 0x49940
			}
			int32_t v14 = v13; // 0x49964
			if (*(char *)(v6 + 140) == 1) {
				// 0x49950
				v14 = v13 + 1;
				// branch -> 0x49954
			}
			int32_t v15 = v14; // 0x49978
			if (*(char *)(v6 + 160) == 1) {
				// 0x49964
				v15 = v14 + 1;
				// branch -> 0x49968
			}
			// 0x49968
			result = v15;
			if (*(char *)(v6 + 180) == 1) {
				// 0x49978
				result = v15 + 1;
				// branch -> 0x4997c
			}
			int32_t v16 = v6 + 200; // 0x4997c
			int32_t v17 = v4 - 1;   // 0x49984
			if (v17 == 0) {
				// break -> 0x49988
				break;
			}
			v4 = v17;
			v5 = result;
			v6 = v16;
			// continue -> 0x498bc
		}
		int32_t v18 = v1 + 1; // 0x49988
		if (v18 >= 20) {
			// break -> 0x49998
			break;
		}
		v1 = v18;
		v2 = result;
		v3++;
		// continue -> 0x498ac
	}
	// 0x49998
	return result;
}

// Address range: 0x4999c - 0x49a90
int32_t function_4999c(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	g34 = a1;
	int32_t v1 = 0;                               // r7
	int32_t v2 = a3 - 8;                          // r30
	int32_t v3 = a2 + *(int32_t *)(g23 - 0x72c8); // 0x499b4
	if (a4 > 0) {
		while (true) {
			// 0x499c0
			int32_t v4; // 0x49a80
			if (a3 >= 1) {
				int32_t v5 = a3; // 0x49a54
				int32_t v6 = 0;  // 0x49a54
				if (a3 >= 9) {
					int32_t v7 = (v2 + 7) / 8; // ctr
					if (v2 >= 1) {
						int32_t v8 = 0; // 0x499e8
						while (true) {
							int32_t v9 = g34 + v8; // 0x499e8
							int32_t v10 = v9;      // r12
							int32_t v11 = 1;       // r31
							*(char *)(20 * v9 + v3) = 1;
							*(char *)(v3 + 20 * (v9 + 1)) = (char)v11;
							*(char *)(20 * (v9 + 2) + v3) = (char)v11;
							*(char *)(20 * (v9 + 3) + v3) = (char)v11;
							int32_t v12 = 20 * (v10 + 4); // 0x49a38
							*(char *)(v12 + v3) = (char)v11;
							int32_t v13 = 20 * (v10 + 5); // 0x49a40
							*(char *)(v13 + v3) = (char)v11;
							int32_t v14 = 20 * (v10 + 6); // 0x49a48
							*(char *)(v14 + v3) = (char)v11;
							int32_t v15 = 20 * (v10 + 7); // 0x49a4c
							*(char *)(v15 + v3) = (char)v11;
							int32_t v16 = v7 - 1; // 0x49a50
							v7 = v16;
							int32_t v17 = v8 + 8;
							if (v16 == 0) {
								// 0x49a54
								v5 = a3;
								v6 = v17;
								// branch -> 0x49a54
								// 0x49a54
								if (v5 > v6) {
								lab_0x49a68:
									// 0x49a68
									*(char *)(v3 + 20 * (g34 + v6)) = 1;
									int32_t v18 = v5 - v6 - 1; // 0x49a7828
									v7 = v18;
									if (v18 != 0) {
										int32_t v19 = v6 + 1;
										*(char *)(v3 + 20 * (g34 + v19)) = (char)1;
										int32_t v20 = v7 - 1; // 0x49a78
										while (v20 != 0) {
											// 0x49a68
											v19++;
											*(char *)(v3 + 20 * (g34 + v19)) = (char)1;
											v20--;
											// continue -> 0x49a68
										}
										// 0x49a7c
										v3++;
										v4 = v1 + 1;
										v1 = v4;
										if (v4 < a4) {
										lab_0x49a7c_3:
											// 0x49a7c
											// branch -> 0x499c0
											break;
										}
										// 0x49a8c
										return function_49a94();
									}
								}
							lab_0x49a7c_2:
								// 0x49a7c
								v3++;
								v4 = v1 + 1;
								v1 = v4;
								if (v4 < a4) {
									goto lab_0x49a7c_3;
								}
								// 0x49a8c
								return function_49a94();
							}
							// 0x499e8
							v8 = v17;
							// branch -> 0x499e8
						}
					} else {
						v5 = a3;
						v6 = 0;
					}
				}
				// 0x49a54
				if (v5 > v6) {
					goto lab_0x49a68;
				}
				goto lab_0x49a7c_2;
			}
			// 0x49a7c
			v3++;
			v4 = v1 + 1;
			v1 = v4;
			if (v4 < a4) {
				goto lab_0x49a7c_3;
			}
			// 0x49a8c
			return function_49a94();
		}
	}
	// 0x49a8c
	return function_49a94();
}

// Address range: 0x49a90 - 0x49a94
int32_t function_49a90(void)
{
	// 0x49a90
	return 0;
}

// Address range: 0x49a94 - 0x49aa8
int32_t function_49a94(void)
{
	// 0x49a94
	return g34;
}

// Address range: 0x49aa8 - 0x49b44
int32_t function_49aa8(int32_t a1, uint32_t a2, uint32_t a3, uint32_t a4)
{
	// 0x49aa8
	if (a1 < 1 || a2 <= 0) {
		// 0x49ab8
		return 0;
	}
	// 0x49ac0
	if ((int32_t)a4 <= 0) {
		// 0x49b3c
		return 1;
	}
	int32_t v1 = *(int32_t *)(g23 - 0x72c8) + a2; // 0x49b2c
	int32_t v2 = 0;                               // 0x49b30
	// branch -> 0x49ad0
	while (true) {
		int32_t v3 = v2 + a2; // 0x49ad8
		int32_t v4;           // 0x49b30
		if (a3 >= 1) {
			int32_t v5 = 0; // 0x49b24
			// branch -> 0x49ae4
			while (true) {
				int32_t v6 = v5 + a1; // 0x49ae4
				if (v6 < 0 || v6 > 19 || v3 < 0 || v3 >= 20 || *(char *)(20 * v6 + v1) != 0) {
					// 0x49b04
					return 0;
				}
				int32_t v7 = v5 + 1; // 0x49b24
				int32_t v8 = a3 - 1; // 0x49b28
				if (v8 == 0) {
					// break -> 0x49b2c
					break;
				}
				a3 = v8;
				v5 = v7;
				// continue -> 0x49ae4
			}
			// 0x49b2c
			v4 = v2 + 1;
			if (v4 >= a4) {
				// break -> 0x49b3c
				break;
			}
			v1++;
			v2 = v4;
			// continue -> 0x49ad0
			continue;
		}
		// 0x49b2c
		v4 = v2 + 1;
		if (v4 >= a4) {
			// break -> 0x49b3c
			break;
		}
		v1++;
		v2 = v4;
		// continue -> 0x49ad0
	}
	// 0x49b3c
	return 1;
}

// Address range: 0x49b44 - 0x49df8
int32_t function_49b44(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g10; // 0x49b48
	g36 = a1;
	g35 = a3;
	g37 = 4;
	int32_t v2 = random(0); // 0x49b70
	int32_t v3;             // r27
	int32_t v4;             // r29
	int32_t v5;             // r30
	uint32_t v6;            // 0x49bc0
	int32_t v7;             // 0x49bf8
	uint32_t v8;            // 0x49cd8
	uint32_t v9;            // 0x49d10
	int32_t result5;        // 0x49df4
	int32_t result;         // 0x49df42
	int32_t v10;            // 0x49df43
	int32_t result3;        // 0x49df44
	int32_t v11;            // 0x49df45
	uint32_t v12;           // 0x49bdc
	int32_t v13;            // 0x49c00
	int32_t v14;            // 0x49c30
	int32_t v15;            // 0x49c64
	uint32_t v16;           // 0x49cf4
	int32_t v17;            // 0x49d0c
	int32_t v18;            // 0x49d40
	int32_t v19;            // 0x49d74
	int32_t v20;            // 0x49bf0
	int32_t v21;            // 0x49c10
	int32_t v22;            // 0x49c14
	int32_t v23;            // 0x49d28
	int32_t v24;            // 0x49d2c
	uint32_t v25;           // 0x49bfc
	int32_t v26;            // 0x49d14
	int32_t v27;            // 0x49c28
	int32_t v28;            // 0x49c70
	int32_t v29;            // 0x49d38
	int32_t v30;            // 0x49d80
	int32_t result2;        // 0x49cd0
	int32_t result4;        // 0x49de0
	if (a5 != 1) {
		// 0x49b94
		if (v2 != 0) {
			// 0x49bc0
			v6 = a4;
			// branch -> 0x49bd0
			while (true) {
				// 0x49bd0
				g37 = 5;
				v12 = random(0) + 2;
				g32 = v12 - v12 % 2;
				g37 = 5;
				v20 = random(0);
				v7 = g32;
				v25 = (v20 + 2) / 2;
				v13 = 2 * v25;
				v3 = v13;
				v21 = a2 + (v6 / 2 | v6 & -0x80000000) - (v13 & -0x80000000 | v25);
				v22 = g36 - v7;
				g30 = v21;
				a4 = v22;
				v27 = function_49aa8(v22 - 1, v21 - 1, v13 + 2, v7 + 1);
				g28 = v27;
				v14 = 1;
				v4 = v14;
				if (v27 == 0) {
					goto lab_0x49c38;
				}
				// 0x49c40
				if (v27 == 1) {
					// 0x49c48
					function_4999c(a4, g30, g32, v3);
					// branch -> 0x49c5c
				}
				// 0x49c5c
				v15 = v3 + 2;
				g33 = g35 + g36;
				v28 = function_49aa8(g30 - 1, g32 + 1, v15, v15);
				g27 = v28;
				v10 = v28;
				if (v28 == 1) {
					// 0x49c80
					v10 = function_4999c(g33, g30, g32, v3);
					// branch -> 0x49c94
				}
				// 0x49c94
				result = v10;
				if (g28 == 1) {
					// 0x49c9c
					result = function_49b44(a4, g30, g32, v3, 1);
					// branch -> 0x49cb4
				}
				// 0x49cb4
				if (g27 != 1) {
					// 0x49de4
					g10 = v1;
					return result;
				}
				// 0x49cbc
				result2 = function_49b44(g33, g30, g32, v3, 1);
				// branch -> 0x49de4
				// 0x49de4
				g10 = v1;
				return result2;
			}
		}
		// 0x49cd8
		v8 = g35;
		g36 += (v8 / 2 | v8 & -0x80000000);
		v5 = 0;
		// branch -> 0x49ce8
		while (true) {
			// 0x49ce8
			g37 = 5;
			v16 = random(0) + 2;
			g33 = v16 - v16 % 2;
			g37 = 5;
			v17 = random(0) + 2;
			v9 = g33;
			v26 = v17 & -2;
			g32 = v26;
			v23 = a2 - v26;
			v3 = v23;
			v24 = g36 - (v9 / 2 | v9 & -0x80000000);
			g30 = v24;
			v29 = function_49aa8(v24 - 1, v23 - 1, v9 + 2, v17 | 1);
			g27 = v29;
			v18 = v5 + 1;
			v5 = v18;
			int32_t v31 = v29;
			if (v29 == 0) {
			lab_0x49d48:
				// 0x49d48
				if (v18 >= 20) {
					// break -> 0x49d50
					break;
				}
				// continue -> 0x49ce8
				continue;
			}
			// 0x49d50
			if (v31 == 1) {
				// 0x49d58
				function_4999c(g30, v3, g33, g32);
				// branch -> 0x49d6c
			}
			// 0x49d6c
			v19 = g32 + 1;
			a4 += a2;
			v30 = function_49aa8(g30 - 1, g33 + 2, v19, v19);
			g28 = v30;
			v11 = v30;
			if (v30 == 1) {
				// 0x49d90
				v11 = function_4999c(g30, a4, g33, g32);
				// branch -> 0x49da4
			}
			// 0x49da4
			result3 = v11;
			if (g27 == 1) {
				// 0x49dac
				result3 = function_49b44(g30, v3, g33, g32, 0);
				// branch -> 0x49dc4
			}
			// 0x49dc4
			if (g28 != 1) {
				// 0x49de4
				g10 = v1;
				return result3;
			}
			// 0x49dcc
			result4 = function_49b44(g30, a4, g33, g32, 0);
			// branch -> 0x49de4
			// 0x49de4
			g10 = v1;
			return result4;
		}
		// 0x49d6c
		v19 = g32 + 1;
		a4 += a2;
		v30 = function_49aa8(g30 - 1, g33 + 2, v19, v19);
		g28 = v30;
		v11 = v30;
		if (v30 == 1) {
			// 0x49d90
			v11 = function_4999c(g30, a4, g33, g32);
			// branch -> 0x49da4
		}
		// 0x49da4
		result3 = v11;
		if (g27 == 1) {
			// 0x49dac
			result3 = function_49b44(g30, v3, g33, g32, 0);
			// branch -> 0x49dc4
		}
		// 0x49dc4
		result5 = result3;
		if (g28 == 1) {
			// 0x49dcc
			result5 = function_49b44(g30, a4, g33, g32, 0);
			// branch -> 0x49de4
		}
		// 0x49de4
		g10 = v1;
		return result5;
	}
	// 0x49b7c
	if (v2 == 0) {
		// 0x49bc0
		v6 = a4;
		v4 = 0;
		// branch -> 0x49bd0
		while (true) {
			// 0x49bd0
			g37 = 5;
			v12 = random(0) + 2;
			g32 = v12 - v12 % 2;
			g37 = 5;
			v20 = random(0);
			v7 = g32;
			v25 = (v20 + 2) / 2;
			v13 = 2 * v25;
			v3 = v13;
			v21 = a2 + (v6 / 2 | v6 & -0x80000000) - (v13 & -0x80000000 | v25);
			v22 = g36 - v7;
			g30 = v21;
			a4 = v22;
			v27 = function_49aa8(v22 - 1, v21 - 1, v13 + 2, v7 + 1);
			g28 = v27;
			v14 = v4 + 1;
			v4 = v14;
			int32_t v32 = v27;
			if (v27 == 0) {
			lab_0x49c38:
				// 0x49c38
				if (v14 >= 20) {
					// break -> 0x49c40
					break;
				}
				// continue -> 0x49bd0
				continue;
			}
			// 0x49c40
			if (v32 == 1) {
				// 0x49c48
				function_4999c(a4, g30, g32, v3);
				// branch -> 0x49c5c
			}
			// 0x49c5c
			v15 = v3 + 2;
			g33 = g35 + g36;
			v28 = function_49aa8(g30 - 1, g32 + 1, v15, v15);
			g27 = v28;
			v10 = v28;
			if (v28 == 1) {
				// 0x49c80
				v10 = function_4999c(g33, g30, g32, v3);
				// branch -> 0x49c94
			}
			// 0x49c94
			result = v10;
			if (g28 == 1) {
				// 0x49c9c
				result = function_49b44(a4, g30, g32, v3, 1);
				// branch -> 0x49cb4
			}
			// 0x49cb4
			if (g27 != 1) {
				// 0x49de4
				g10 = v1;
				return result;
			}
			// 0x49cbc
			result2 = function_49b44(g33, g30, g32, v3, 1);
			// branch -> 0x49de4
			// 0x49de4
			g10 = v1;
			return result2;
		}
		// 0x49c5c
		v15 = v3 + 2;
		g33 = g35 + g36;
		v28 = function_49aa8(g30 - 1, g32 + 1, v15, v15);
		g27 = v28;
		v10 = v28;
		if (v28 == 1) {
			// 0x49c80
			v10 = function_4999c(g33, g30, g32, v3);
			// branch -> 0x49c94
		}
		// 0x49c94
		result = v10;
		if (g28 == 1) {
			// 0x49c9c
			result = function_49b44(a4, g30, g32, v3, 1);
			// branch -> 0x49cb4
		}
		// 0x49cb4
		result5 = result;
		if (g27 == 1) {
			// 0x49cbc
			result5 = function_49b44(g33, g30, g32, v3, 1);
			// branch -> 0x49de4
		}
		// 0x49de4
		g10 = v1;
		return result5;
	}
	// 0x49cd8
	v8 = g35;
	g36 += (v8 / 2 | v8 & -0x80000000);
	// branch -> 0x49ce8
	while (true) {
		// 0x49ce8
		g37 = 5;
		v16 = random(0) + 2;
		g33 = v16 - v16 % 2;
		g37 = 5;
		v17 = random(0) + 2;
		v9 = g33;
		v26 = v17 & -2;
		g32 = v26;
		v23 = a2 - v26;
		v3 = v23;
		v24 = g36 - (v9 / 2 | v9 & -0x80000000);
		g30 = v24;
		v29 = function_49aa8(v24 - 1, v23 - 1, v9 + 2, v17 | 1);
		g27 = v29;
		v18 = 1;
		v5 = v18;
		if (v29 == 0) {
			goto lab_0x49d48;
		}
		// 0x49d50
		if (v29 == 1) {
			// 0x49d58
			function_4999c(g30, v3, g33, g32);
			// branch -> 0x49d6c
		}
		// 0x49d6c
		v19 = g32 + 1;
		a4 += a2;
		v30 = function_49aa8(g30 - 1, g33 + 2, v19, v19);
		g28 = v30;
		v11 = v30;
		if (v30 == 1) {
			// 0x49d90
			v11 = function_4999c(g30, a4, g33, g32);
			// branch -> 0x49da4
		}
		// 0x49da4
		result3 = v11;
		if (g27 == 1) {
			// 0x49dac
			result3 = function_49b44(g30, v3, g33, g32, 0);
			// branch -> 0x49dc4
		}
		// 0x49dc4
		if (g28 != 1) {
			// 0x49de4
			g10 = v1;
			return result3;
		}
		// 0x49dcc
		result4 = function_49b44(g30, a4, g33, g32, 0);
		// branch -> 0x49de4
		// 0x49de4
		g10 = v1;
		return result4;
	}
}

// Address range: 0x49df8 - 0x49ff8
int32_t function_49df8(int32_t a1)
{
	int32_t v1 = g10;                        // 0x49dfc
	int32_t v2 = *(int32_t *)(g23 - 0x77e4); // 0x49e00
	g36 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x72e8); // 0x49e04
	int32_t v4 = *(int32_t *)(g23 - 0x72e4); // 0x49e08
	int32_t v5 = *(int32_t *)(g23 - 0x72e0); // 0x49e0c
	int32_t v6 = *(int32_t *)(g23 - 0x72dc); // 0x49e10
	int32_t v7 = *(int32_t *)(g23 - 0x7604); // 0x49e14
	int32_t v8 = *(int32_t *)(g23 - 0x77f0); // 0x49e18
	unsigned char v9 = *(char *)v2;          // 0x49e24
	int32_t v10;                             // r0
	int32_t v11;                             // r21
	int32_t v12;                             // r22
	int32_t v13;                             // r23
	int32_t v14;                             // r24
	int32_t v15;
	int32_t v16;
	int32_t v17;    // 0x49eac
	int32_t v18;    // 0x49ee4
	int32_t v19;    // 0x49f30
	uint32_t v20;   // 0x49ea4
	uint32_t v21;   // 0x49ee4
	int32_t v22;    // 0x49ec0
	int32_t v23;    // 0x49ec4
	int32_t v24;    // 0x49f00
	int32_t v25;    // 0x49f04
	int32_t v26;    // 0x49fc8
	int32_t result; // 0x49fe0
	int32_t v27;    // 0x49ea8
	int32_t v28;    // 0x49ee8
	if (v9 == 16) {
		// 0x49e9c
		v12 = 14;
		v11 = 14;
		v17 = 14;
		// branch -> 0x49ea4
	} else {
		// 0x49e30
		if (v9 == *(char *)(v7 + 264)) {
			// 0x49e3c
			if (*(char *)(v7 + 266) != 0) {
				// 0x49e48
				v12 = 11;
				v11 = 11;
				v17 = 11;
				// branch -> 0x49ea4
				// 0x49ea4
				v20 = 20 - v17;
				v27 = v20 / 2 | v20 & -0x80000000;
				g37 = 20 - v17 - v27;
				v22 = v27 + random(0);
				v23 = v12 + v22;
				v16 = v22;
				if (v23 >= 20) {
					// 0x49ed0
					v16 = v22 - (v23 - 19) + 1;
					// branch -> 0x49ee4
				}
				// 0x49ee4
				v14 = v16;
				v18 = v11;
				v21 = 20 - v18;
				v28 = v21 / 2 | v21 & -0x80000000;
				g37 = 20 - v18 - v28;
				v24 = v28 + random(0);
				v25 = v11 + v24;
				v15 = v24;
				if (v25 >= 20) {
					// 0x49f10
					v15 = v24 - (v25 - 19) + 1;
					// branch -> 0x49f24
				}
				// 0x49f24
				v13 = v15;
				if (*(char *)g36 == 16) {
					// 0x49f30
					v19 = g23;
					*(int32_t *)*(int32_t *)(v19 - 0x72d4) = v14;
					*(int32_t *)*(int32_t *)(v19 - 0x72d8) = v13;
					// branch -> 0x49f40
				}
				// 0x49f40
				if (QuestStatus(11) != 0) {
					// 0x49f6c
					*(int32_t *)v6 = v14 + 1;
					*(int32_t *)v5 = v13 + 1;
					*(int32_t *)v4 = v12 + *(int32_t *)v6;
					*(int32_t *)v3 = v11 + *(int32_t *)v5;
					// branch -> 0x49fac
					// 0x49fac
					function_4999c(v14, v13, v12, v11);
					g37 = 2;
					v26 = random(0);
					result = function_49b44(v14, v13, v12, v11, v26);
					g10 = v1;
					return result;
				}
				// 0x49f50
				if (*(char *)g36 == *(char *)(v7 + 360)) {
					// 0x49f60
					if (*(char *)v8 != 1) {
						// 0x49f6c
						*(int32_t *)v6 = v14 + 1;
						*(int32_t *)v5 = v13 + 1;
						*(int32_t *)v4 = v12 + *(int32_t *)v6;
						*(int32_t *)v3 = v11 + *(int32_t *)v5;
						// branch -> 0x49fac
						// 0x49fac
						function_4999c(v14, v13, v12, v11);
						g37 = 2;
						v26 = random(0);
						result = function_49b44(v14, v13, v12, v11, v26);
						g10 = v1;
						return result;
					}
				}
				// 0x49f98
				v10 = 0;
				*(int32_t *)v6 = 0;
				*(int32_t *)v5 = v10;
				*(int32_t *)v4 = v10;
				*(int32_t *)v3 = v10;
				// branch -> 0x49fac
				// 0x49fac
				function_4999c(v14, v13, v12, v11);
				g37 = 2;
				v26 = random(0);
				result = function_49b44(v14, v13, v12, v11, v26);
				g10 = v1;
				return result;
			}
		}
		// 0x49e54
		if (v9 == *(char *)(v7 + 360)) {
			// 0x49e60
			if (*(char *)v8 != 1) {
				// 0x49e6c
				v12 = 11;
				v11 = 11;
				v17 = 11;
				// branch -> 0x49ea4
				// 0x49ea4
				v20 = 20 - v17;
				v27 = v20 / 2 | v20 & -0x80000000;
				g37 = 20 - v17 - v27;
				v22 = v27 + random(0);
				v23 = v12 + v22;
				v16 = v22;
				if (v23 >= 20) {
					// 0x49ed0
					v16 = v22 - (v23 - 19) + 1;
					// branch -> 0x49ee4
				}
				// 0x49ee4
				v14 = v16;
				v18 = v11;
				v21 = 20 - v18;
				v28 = v21 / 2 | v21 & -0x80000000;
				g37 = 20 - v18 - v28;
				v24 = v28 + random(0);
				v25 = v11 + v24;
				v15 = v24;
				if (v25 >= 20) {
					// 0x49f10
					v15 = v24 - (v25 - 19) + 1;
					// branch -> 0x49f24
				}
				// 0x49f24
				v13 = v15;
				if (*(char *)g36 == 16) {
					// 0x49f30
					v19 = g23;
					*(int32_t *)*(int32_t *)(v19 - 0x72d4) = v14;
					*(int32_t *)*(int32_t *)(v19 - 0x72d8) = v13;
					// branch -> 0x49f40
				}
				// 0x49f40
				if (QuestStatus(11) != 0) {
					// 0x49f6c
					*(int32_t *)v6 = v14 + 1;
					*(int32_t *)v5 = v13 + 1;
					*(int32_t *)v4 = v12 + *(int32_t *)v6;
					*(int32_t *)v3 = v11 + *(int32_t *)v5;
					// branch -> 0x49fac
					// 0x49fac
					function_4999c(v14, v13, v12, v11);
					g37 = 2;
					v26 = random(0);
					result = function_49b44(v14, v13, v12, v11, v26);
					g10 = v1;
					return result;
				}
				// 0x49f50
				if (*(char *)g36 == *(char *)(v7 + 360)) {
					// 0x49f60
					if (*(char *)v8 != 1) {
						// 0x49f6c
						*(int32_t *)v6 = v14 + 1;
						*(int32_t *)v5 = v13 + 1;
						*(int32_t *)v4 = v12 + *(int32_t *)v6;
						*(int32_t *)v3 = v11 + *(int32_t *)v5;
						// branch -> 0x49fac
						// 0x49fac
						function_4999c(v14, v13, v12, v11);
						g37 = 2;
						v26 = random(0);
						result = function_49b44(v14, v13, v12, v11, v26);
						g10 = v1;
						return result;
					}
				}
				// 0x49f98
				v10 = 0;
				*(int32_t *)v6 = 0;
				*(int32_t *)v5 = v10;
				*(int32_t *)v4 = v10;
				*(int32_t *)v3 = v10;
				// branch -> 0x49fac
				// 0x49fac
				function_4999c(v14, v13, v12, v11);
				g37 = 2;
				v26 = random(0);
				result = function_49b44(v14, v13, v12, v11, v26);
				g10 = v1;
				return result;
			}
		}
		// 0x49e78
		g37 = 5;
		v12 = random(0) + 2;
		g37 = 5;
		v11 = random(0) + 2;
		v17 = v12;
		// branch -> 0x49ea4
	}
	// 0x49ea4
	v20 = 20 - v17;
	v27 = v20 / 2 | v20 & -0x80000000;
	g37 = 20 - v17 - v27;
	v22 = v27 + random(0);
	v23 = v12 + v22;
	v16 = v22;
	if (v23 >= 20) {
		// 0x49ed0
		v16 = v22 - (v23 - 19) + 1;
		// branch -> 0x49ee4
	}
	// 0x49ee4
	v14 = v16;
	v18 = v11;
	v21 = 20 - v18;
	v28 = v21 / 2 | v21 & -0x80000000;
	g37 = 20 - v18 - v28;
	v24 = v28 + random(0);
	v25 = v11 + v24;
	v15 = v24;
	if (v25 >= 20) {
		// 0x49f10
		v15 = v24 - (v25 - 19) + 1;
		// branch -> 0x49f24
	}
	// 0x49f24
	v13 = v15;
	if (*(char *)g36 == 16) {
		// 0x49f30
		v19 = g23;
		*(int32_t *)*(int32_t *)(v19 - 0x72d4) = v14;
		*(int32_t *)*(int32_t *)(v19 - 0x72d8) = v13;
		// branch -> 0x49f40
	}
	// 0x49f40
	if (QuestStatus(11) != 0) {
		// 0x49f6c
		*(int32_t *)v6 = v14 + 1;
		*(int32_t *)v5 = v13 + 1;
		*(int32_t *)v4 = v12 + *(int32_t *)v6;
		*(int32_t *)v3 = v11 + *(int32_t *)v5;
		// branch -> 0x49fac
		// 0x49fac
		function_4999c(v14, v13, v12, v11);
		g37 = 2;
		v26 = random(0);
		result = function_49b44(v14, v13, v12, v11, v26);
		g10 = v1;
		return result;
	}
	// 0x49f50
	if (*(char *)g36 == *(char *)(v7 + 360)) {
		// 0x49f60
		if (*(char *)v8 != 1) {
			// 0x49f6c
			*(int32_t *)v6 = v14 + 1;
			*(int32_t *)v5 = v13 + 1;
			*(int32_t *)v4 = v12 + *(int32_t *)v6;
			*(int32_t *)v3 = v11 + *(int32_t *)v5;
			// branch -> 0x49fac
			// 0x49fac
			function_4999c(v14, v13, v12, v11);
			g37 = 2;
			v26 = random(0);
			result = function_49b44(v14, v13, v12, v11, v26);
			g10 = v1;
			return result;
		}
	}
	// 0x49f98
	v10 = 0;
	*(int32_t *)v6 = 0;
	*(int32_t *)v5 = v10;
	*(int32_t *)v4 = v10;
	*(int32_t *)v3 = v10;
	// branch -> 0x49fac
	// 0x49fac
	function_4999c(v14, v13, v12, v11);
	g37 = 2;
	v26 = random(0);
	result = function_49b44(v14, v13, v12, v11, v26);
	g10 = v1;
	return result;
}

// Address range: 0x49ff8 - 0x4a1a0
int32_t function_49ff8(int32_t a1)
{
	int32_t v1 = 0;                                      // r19
	int32_t v2 = *(int32_t *)(g23 - 0x7514);             // 0x4a00c
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x72d4); // 0x4a010
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x72d8); // 0x4a014
	int32_t v5 = 39 - v3;                                // 0x4a018
	int32_t v6 = v4 + v2;                                // 0x4a038
	int32_t v7 = v6;                                     // r3
	int32_t v8 = 40 * v3;
	g36 = v8 + 120;
	int32_t v9 = 40 * v5;
	int32_t v10 = v9 - 120; // r30
	int32_t v11 = v8 + 160; // r29
	int32_t v12 = v9 - 160; // r28
	int32_t v13 = v8 + 200; // r27
	g30 = v9 - 200;
	int32_t v14 = v8 + 240; // r25
	int32_t v15 = v8 + 40;  // r9
	int32_t v16 = v9 - 40;  // r10
	int32_t v17 = v8 + 80;  // r11
	int32_t v18 = v9 - 80;  // r12
	g28 = 40 * v5 - 240;
	g27 = 40 * (v3 + 7);
	int32_t v19 = 40 * (v5 - 7); // r22
	int32_t v20 = 39 - v4;       // r6
	// branch -> 0x4a09c
	while (true) {
		// 0x4a09c
		g24 = 0;
		int32_t v21 = 0; // 0x4a13c
		int32_t v22 = 0; // 0x4a18c
		int32_t v23 = 1; // r17
		*(char *)(v8 + v6) = 1;
		int32_t v24 = v20 - v1 + v2; // r18
		*(char *)(v9 + v7) = (char)v23;
		g24 = 8;
		*(char *)(v8 + v24) = (char)v23;
		*(char *)(v9 + v24) = (char)v23;
		*(char *)(v15 + v7) = (char)v23;
		*(char *)(v16 + v7) = (char)v23;
		*(char *)(v15 + v24) = (char)v23;
		*(char *)(v16 + v24) = (char)v23;
		*(char *)(v17 + v7) = (char)v23;
		*(char *)(v18 + v7) = (char)v23;
		*(char *)(v17 + v24) = (char)v23;
		*(char *)(v18 + v24) = (char)v23;
		*(char *)(g36 + v7) = (char)v23;
		*(char *)(v10 + v7) = (char)v23;
		*(char *)(g36 + v24) = (char)v23;
		*(char *)(v10 + v24) = (char)v23;
		*(char *)(v11 + v7) = (char)v23;
		*(char *)(v12 + v7) = (char)v23;
		*(char *)(v11 + v24) = (char)v23;
		*(char *)(v12 + v24) = (char)v23;
		*(char *)(v13 + v7) = (char)v23;
		*(char *)(g30 + v7) = (char)v23;
		*(char *)(v13 + v24) = (char)v23;
		*(char *)(g30 + v24) = (char)v23;
		*(char *)(v14 + v7) = (char)v23;
		*(char *)(g28 + v7) = (char)v23;
		*(char *)(v14 + v24) = (char)v23;
		*(char *)(g28 + v24) = (char)v23;
		*(char *)(g27 + v7) = (char)v23;
		*(char *)(v19 + v7) = (char)v23;
		*(char *)(g27 + v24) = (char)v23;
		*(char *)(v19 + v24) = (char)v23;
		v21 = g24;
		v22 = v1;
		// branch -> 0x4a18c
		// 0x4a18c
		g19 = v20 - v22 + v2;
		int32_t v25 = 14 - v21; // 0x4a13c
		g21 = v25;
		g20 = 1;
		int32_t result; // 0x4a17c
		if (v21 <= 13) {
			char v26 = 1;
			while (true) {
				int32_t v27 = 40 * (v3 + v21); // 0x4a154
				*(char *)(v7 + v27) = v26;
				int32_t v28 = 40 * (v5 - v21); // 0x4a160
				g21 = v28;
				g24++;
				*(char *)(v7 + v28) = (char)g20;
				*(char *)(v27 + g19) = (char)g20;
				*(char *)(g21 + g19) = (char)g20;
				int32_t v29 = v25 - 1; // 0x4a174
				v25 = v29;
				if (v29 == 0) {
					// 0x4a178
					v22 = v1;
					// branch -> 0x4a178
					// 0x4a178
					result = v7 + 1;
					v7 = result;
					if (v22 < 13) {
					lab_0x4a178:
						// 0x4a178
						// branch -> 0x4a09c
						break;
					}
					// 0x4a198
					return result;
				}
				// 0x4a150
				v26 = g20;
				v21 = g24;
				// branch -> 0x4a150
			}
		}
		// 0x4a178
		result = v7 + 1;
		v7 = result;
		if (v22 < 13) {
			goto lab_0x4a178;
		}
		// 0x4a198
		return result;
	}
}

// Address range: 0x4a1a0 - 0x4a27c
int32_t function_4a1a0(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x4a1a0
	g34 = a1;
	int32_t v1 = g36; // 0x4a1a0
	int32_t v2 = g10; // 0x4a1a4
	g36 = a2;
	int32_t v3 = g35; // 0x4a1ac
	g35 = g34;
	int32_t v4 = g33; // 0x4a1b4
	g33 = a3;
	int32_t v5 = function_c9948();                  // 0x4a1c4
	int32_t v6 = 0;                                 // r12
	int32_t v7 = *(int32_t *)(g35 + 136) + 4;       // 0x4a1d8
	int32_t v8 = (int32_t) * (char *)v5;            // 0x4a1dc
	int32_t v9 = g33 + *(int32_t *)(g23 - 0x77cc);  // 0x4a1e0
	unsigned char v10 = *(char *)(v5 + 2);          // 0x4a1e4
	int32_t v11 = v10;                              // 0x4a1e4
	int32_t v12 = g33 + *(int32_t *)(g23 - 0x7514); // 0x4a1e8
	int32_t result;                                 // 0x4a25c
	if (v10 == 0) {
		// 0x4a258
		result = function_c9acc(g35);
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return result;
	}
	int32_t v13 = v11; // 0x4a25017
	int32_t v14 = 0;   // 0x4a24c15
	int32_t v15 = v8;  // 0x4a1f4
	while (true) {
		int32_t v16 = v15; // ctr
		int32_t v17 = 0;   // r11
		int32_t v18 = v13; // 0x4a250
		int32_t v19 = v14; // 0x4a24c
		int32_t v20 = v7;  // 0x4a2049
		if (v15 >= 1) {
			int32_t v21 = 0;  // 0x4a22c
			int32_t v22 = v7; // 0x4a204
			int32_t v23;      // 0x4a238
			while (true) {
				char v24 = *(char *)v22; // 0x4a204
				int32_t v25 = g36 + v21; // 0x4a22c
				if (v24 == 0) {
					// 0x4a22c
					*(char *)(v9 + 40 * v25) = (char)6;
					// branch -> 0x4a238
				} else {
					int32_t v26 = 40 * v25; // 0x4a214
					*(char *)(v9 + v26) = v24;
					char *v27 = (char *)(v26 + v12); // 0x4a21c
					*v27 = *v27 | -128;
					// branch -> 0x4a238
				}
				// 0x4a238
				v23 = v7 + 2;
				v7 = v23;
				int32_t v28 = v17 + 1; // 0x4a23c
				v17 = v28;
				int32_t v29 = v16 - 1; // 0x4a240
				v16 = v29;
				if (v29 == 0) {
					// break -> 0x4a244
					break;
				}
				v21 = v28;
				v22 = v23;
				// continue -> 0x4a204
			}
			// 0x4a244
			v18 = v11;
			v19 = v6;
			v20 = v23;
			// branch -> 0x4a244
		}
		int32_t v30 = v19 + 1; // 0x4a24c
		v6 = v30;
		if (v30 >= v18) {
			// 0x4a250
			// branch -> 0x4a258
			// 0x4a258
			result = function_c9acc(g35);
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result;
		}
		// 0x4a244
		v13 = v18;
		v14 = v30;
		v12++;
		v9++;
		v7 = v20;
		v15 = v8;
		// branch -> 0x4a1f0
	}
}

// Address range: 0x4a27c - 0x4a420
int32_t function_4a27c(int32_t a1)
{
	// 0x4a27c
	g27 = a1;
	g28 = *(int32_t *)(g23 - 0x7308);
	g29 = *(int32_t *)(g23 - 0x7304);
	g30 = *(int32_t *)(g23 - 0x7300);
	g31 = *(int32_t *)(g23 - 0x72fc);
	g32 = *(int32_t *)(g23 - 0x72f8);
	g33 = *(int32_t *)(g23 - 0x72f4);
	g25 = *(int32_t *)(g23 - 0x72f0);
	g26 = *(int32_t *)(g23 - 0x72ec);
	g35 = *(int32_t *)(g23 - 0x72d8);
	g36 = *(int32_t *)(g23 - 0x72d4);
	int32_t v1 = LoadFileInMem(*(int32_t *)(g23 - 0x62d8), NULL); // bp-56
	*(int32_t *)g26 = *(int32_t *)g36 + 4;
	*(int32_t *)g25 = *(int32_t *)g35 + 4;
	function_4a1a0(v1, *(int32_t *)g26, *(int32_t *)g25);
	MemFreeDbg(&v1);
	int32_t v2;
	if (g27 == 0) {
		// 0x4a314
		v2 = LoadFileInMem(*(int32_t *)(g23 - 0x62e0), NULL);
		// branch -> 0x4a324
	} else {
		// 0x4a300
		v2 = LoadFileInMem(*(int32_t *)(g23 - 0x62dc), NULL);
		// branch -> 0x4a324
	}
	// 0x4a324
	v1 = v2;
	*(int32_t *)g33 = 27 - *(int32_t *)g36;
	*(int32_t *)g32 = *(int32_t *)g35 + 1;
	function_4a1a0(v1, *(int32_t *)g33, *(int32_t *)g32);
	MemFreeDbg(&v1);
	int32_t v3;
	if (g27 == 0) {
		// 0x4a370
		v3 = LoadFileInMem(*(int32_t *)(g23 - 0x62e8), NULL);
		// branch -> 0x4a380
	} else {
		// 0x4a35c
		v3 = LoadFileInMem(*(int32_t *)(g23 - 0x62e4), NULL);
		// branch -> 0x4a380
	}
	// 0x4a380
	v1 = v3;
	*(int32_t *)g31 = *(int32_t *)g36 + 1;
	*(int32_t *)g30 = 27 - *(int32_t *)g35;
	function_4a1a0(v1, *(int32_t *)g31, *(int32_t *)g30);
	MemFreeDbg(&v1);
	int32_t v4;
	if (g27 == 0) {
		// 0x4a3cc
		v4 = LoadFileInMem(*(int32_t *)(g23 - 0x62f0), NULL);
		// branch -> 0x4a3dc
	} else {
		// 0x4a3b8
		v4 = LoadFileInMem(*(int32_t *)(g23 - 0x62ec), NULL);
		// branch -> 0x4a3dc
	}
	// 0x4a3dc
	v1 = v4;
	*(int32_t *)g29 = 28 - *(int32_t *)g36;
	*(int32_t *)g28 = 28 - *(int32_t *)g35;
	function_4a1a0(v1, *(int32_t *)g29, *(int32_t *)g28);
	int32_t result = MemFreeDbg(&v1); // 0x4a408
	return result;
}

// Address range: 0x4a420 - 0x4a794
int32_t function_4a420(char *a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x4a424
	g18 = *(int32_t *)(g23 - 0x72e8);
	g37 = a3 - a2;
	g17 = *(int32_t *)(g23 - 0x72e4);
	int32_t v2 = (int32_t)a1; // 0x4a438
	g16 = *(int32_t *)(g23 - 0x72e0);
	int32_t v3 = *(int32_t *)(g23 - 0x7514); // r23
	g26 = *(int32_t *)(g23 - 0x77cc);
	g19 = a5;
	int32_t v4 = v2 / 0x1000000;
	int32_t v5 = (int32_t) * (char *)(v2 + 1); // 0x4a464
	int32_t v6 = 1;
	if (a3 != a2) {
		int32_t v7 = a2 + random(0); // 0x4a480
		a5 = g19;
		v6 = v7;
		// branch -> 0x4a488
	}
	// 0x4a488
	g21 = a4 + 12;
	g20 = a5 + 12;
	int32_t v8 = v5 * v4 + 2; // 0x4a494
	int32_t v9 = 40 - v4;     // 0x4a4a0
	g30 = 40 - v5;
	g22 = a4 - v4;
	g24 = a5 - v5;
	int32_t result;
	int32_t v10; // 0x4a6fc
	int32_t v11; // 0x4a734
	int32_t v12; // 0x4a760
	if (v6 > 0) {
		int32_t v13 = 0;
		while (true) {
			// 0x4a4b8
			g37 = v9;
			g36 = random(0);
			g37 = g30;
			int32_t v14 = random(0); // 0x4a4d0
			g33 = v14;
			g31 = 0;
			int32_t v15 = 0; // 0x4a658
			// branch -> 0x4a658
			while (true) {
				int32_t v16 = v14; // 0x4a674
				int32_t v17 = v15; // 0x4a660
				if (v15 < 200) {
					uint32_t v18 = g36; // 0x4a4f0
					int32_t v19 = 1;    // 0x4a61c35
					if (v18 >= *(int32_t *)*(int32_t *)(g23 - 0x72dc)) {
						// 0x4a4f8
						if (v18 <= *(int32_t *)g17) {
							// 0x4a504
							if (v14 >= *(int32_t *)g16) {
								// 0x4a510
								if (v14 <= *(int32_t *)g18) {
									// 0x4a51c
									v19 = 0;
									// branch -> 0x4a520
								} else {
									v19 = 1;
								}
							} else {
								v19 = 1;
							}
						} else {
							v19 = 1;
						}
					}
					int32_t v20 = v19; // 0x4a61c34
					int32_t v21 = v14; // 0x4a56c
					if (a4 != -1) {
						// 0x4a528
						if (v18 >= g22) {
							// 0x4a530
							if (v18 <= g21) {
								// 0x4a538
								g37 = v9;
								g36 = random(0);
								g37 = g30;
								int32_t v22 = random(0); // 0x4a550
								g33 = v22;
								v20 = 0;
								v21 = v22;
								// branch -> 0x4a55c
							} else {
								v20 = v19;
								v21 = v14;
							}
						} else {
							v20 = v19;
							v21 = v14;
						}
					}
					int32_t v23 = v20; // 0x4a61c33
					int32_t v24 = v21; // 0x4a638
					if (g19 != -1) {
						// 0x4a564
						if (v21 >= g24) {
							// 0x4a56c
							if (v21 <= g20) {
								// 0x4a574
								g37 = v9;
								g36 = random(0);
								g37 = g30;
								int32_t v25 = random(0); // 0x4a58c
								g33 = v25;
								v23 = 0;
								v24 = v25;
								// branch -> 0x4a598
							} else {
								v23 = v20;
								v24 = v21;
							}
						} else {
							v23 = v20;
							v24 = v21;
						}
					}
					int32_t v26 = g26 + v24; // 0x4a598
					int32_t v27 = v3 + v24;  // 0x4a59c
					int32_t v28 = v23;
					int32_t v29; // 0x4a50830
					if (v5 > 0) {
						int32_t v30 = v23;    // 0x4a62461
						int32_t v31 = v23;    // 0x4a60040
						int32_t v32 = v23;    // 0x4a61c
						int32_t v33 = 0;      // 0x4a610
						int32_t v34 = v2 + 2; // 0x4a5b443
						while (true) {
							// 0x4a61c
							if (v32 == 1) {
								int32_t v35 = v30; // 0x4a62457
								int32_t v36 = v34; // 0x4a5b444
								int32_t v37 = v31; // 0x4a60041
								int32_t v38;       // 0x4a608
								int32_t v39;       // 0x4a60c
								int32_t v40;       // 0x4a610
								if (v4 > 0) {
									int32_t v41 = v30; // 0x4a62460
									int32_t v42 = 0;   // 0x4a5f4
									int32_t v43 = v34; // 0x4a5f0
									int32_t v44 = v31; // 0x4a600
									int32_t v45;       // 0x4a61c36
									while (true) {
										// 0x4a600
										if (v44 == 1) {
											unsigned char v46 = *(char *)v43; // 0x4a5b4
											int32_t v47 = 40 * (g36 + v42);
											int32_t v48 = v41; // 0x4a62459
											int32_t v49 = 1;   // 0x4a61c38
											if (v46 != 0) {
												// 0x4a5c0
												if (v46 != *(char *)(v47 + v26)) {
													// 0x4a5d4
													v48 = 0;
													v49 = 0;
													// branch -> 0x4a5d8
												} else {
													v48 = v41;
													v49 = 1;
												}
											}
											int32_t v50 = v48; // 0x4a62458
											int32_t v51 = v49; // 0x4a61c37
											if (*(char *)(v47 + v27) != 0) {
												// 0x4a5ec
												v50 = 0;
												v51 = 0;
												// branch -> 0x4a5f0
											}
											int32_t v52 = v43 + 1; // 0x4a5f0
											int32_t v53 = v42 + 1; // 0x4a5f4
											if (v53 >= v4) {
												v35 = v50;
												v36 = v52;
												v37 = v51;
												v45 = v51;
												// break -> 0x4a608
												break;
											}
											v41 = v50;
											v42 = v53;
											v43 = v52;
											v44 = v51;
											// continue -> 0x4a600
											continue;
										} else {
											v35 = v41;
											v36 = v43;
											v37 = v44;
											v45 = v44;
										}
									}
									// 0x4a608
									v38 = v26 + 1;
									v39 = v27 + 1;
									v40 = v33 + 1;
									if (v40 >= v5) {
										v28 = v35;
										// break -> 0x4a624
										break;
									}
									v30 = v35;
									v31 = v37;
									v32 = v45;
									v33 = v40;
									v27 = v39;
									v26 = v38;
									v34 = v36;
									// continue -> 0x4a61c
									continue;
								}
								// 0x4a608
								v38 = v26 + 1;
								v39 = v27 + 1;
								v40 = v33 + 1;
								if (v40 >= v5) {
									v28 = v35;
									// break -> 0x4a624
									break;
								}
								v30 = v35;
								v31 = v37;
								v32 = 1;
								v33 = v40;
								v27 = v39;
								v26 = v38;
								v34 = v36;
								// continue -> 0x4a61c
								continue;
							} else {
								v28 = v30;
							}
						}
						// 0x4a624
						v29 = v24;
						if (v28 == 0) {
						lab_0x4a62c:;
							int32_t v54 = g36 + 1; // 0x4a62c
							g36 = v54;
							if (v54 == v9) {
								int32_t v55 = v24 + 1; // 0x4a638
								g33 = v55;
								g36 = 0;
								if (v55 == g30) {
									// 0x4a648
									g33 = 0;
									v29 = 0;
									// branch -> 0x4a64c
								} else {
									v29 = v55;
								}
							} else {
								v29 = v24;
							}
						}
					lab_0x4a64c:;
						int32_t v56 = g31 + 1; // 0x4a64c
						g31 = v56;
						if (v28 != 0) {
							// break -> 0x4a660
							break;
						}
						v14 = v29;
						v15 = v56;
						// continue -> 0x4a658
						continue;
					}
					// 0x4a624
					if (v28 == 0) {
						goto lab_0x4a62c;
					}
					v29 = v24;
					goto lab_0x4a64c;
				}
				// 0x4a660
				if (v17 < 200) {
					int32_t v57 = g26 + v16; // 0x4a674
					int32_t v58 = v3 + v16;  // 0x4a678
					int32_t v59 = 0;         // r9
					int32_t v60;             // 0x4a6e4
					if (v5 > 0) {
						int32_t v61 = v5; // 0x4a6d880
						int32_t v62 = 0;  // 0x4a6d478
						while (true) {
							int32_t v63 = v4;      // ctr
							int32_t v64 = v2 + v8; // 0x4a68c
							int32_t v65 = 0;       // r4
							int32_t v66 = v61;     // 0x4a6d8
							int32_t v67 = v62;     // 0x4a6d4
							int32_t v68 = v8;      // 0x4a68c64
							if (v4 >= 1) {
								int32_t v69 = v8; // 0x4a6bc68
								int32_t v70 = 0;  // 0x4a6a4
								int32_t v71;      // 0x4a6bc
								while (true) {
									unsigned char v72 = *(char *)v64; // 0x4a698
									int32_t v73 = v4;                 // 0x4a6c8
									int32_t v74 = v70;                // 0x4a6c4
									int32_t v75 = v69;                // 0x4a6bc
									if (v72 != 0) {
										int32_t v76 = 40 * (g36 + v70); // 0x4a6a8
										*(char *)(v57 + v76) = v72;
										char *v77 = (char *)(v76 + v58); // 0x4a6b0
										*v77 = (char)((int32_t)*v77 | 8);
										v73 = v63;
										v74 = v65;
										v75 = v8;
										// branch -> 0x4a6bc
									}
									// 0x4a6bc
									v71 = v75 + 1;
									v8 = v71;
									int32_t v78 = v64 + 1; // 0x4a6c0
									int32_t v79 = v74 + 1; // 0x4a6c4
									v65 = v79;
									int32_t v80 = v73 - 1; // 0x4a6c8
									v63 = v80;
									if (v80 == 0) {
										// break -> 0x4a6cc
										break;
									}
									v4 = v80;
									v69 = v71;
									v70 = v79;
									v64 = v78;
									// continue -> 0x4a698
								}
								// 0x4a6cc
								v66 = v5;
								v67 = v59;
								v68 = v71;
								// branch -> 0x4a6cc
							}
							int32_t v81 = v57 + 1; // 0x4a6cc
							int32_t v82 = v58 + 1; // 0x4a6d0
							int32_t v83 = v67 + 1; // 0x4a6d4
							v59 = v83;
							if (v83 >= v66) {
								// break -> 0x4a6e0
								break;
							}
							v61 = v66;
							v62 = v83;
							v58 = v82;
							v57 = v81;
							v8 = v68;
							// continue -> 0x4a684
						}
						// 0x4a6e0
						v60 = v13 + 1;
						if (v60 >= v6) {
							// 0x4a6fc
							v10 = g23;
							if (*(char *)*(int32_t *)(v10 - 0x77e4) == 15) {
								// 0x4a70c
								*(int32_t *)(*(int32_t *)(v10 - 0x7604) + 364) = g36 + 1;
								*(int32_t *)(*(int32_t *)(g23 - 0x7604) + 368) = g33 + 1;
								// branch -> 0x4a724
							}
							// 0x4a724
							if (a6 == 1) {
								// 0x4a730
								v11 = g23;
								*(int32_t *)*(int32_t *)(v11 - 0x77b0) = 2 * g36 + 21;
								*(int32_t *)*(int32_t *)(v11 - 0x77b4) = 2 * g33 + 22;
								// branch -> 0x4a750
							}
							// 0x4a750
							if (a7 != 0) {
								// 0x4a780
								g10 = v1;
								return 1;
							}
							// 0x4a75c
							v12 = g23;
							*(int32_t *)*(int32_t *)(v12 - 0x751c) = 2 * g36 + 21;
							*(int32_t *)*(int32_t *)(v12 - 0x7520) = 2 * g33 + 22;
							// branch -> 0x4a780
							// 0x4a780
							g10 = v1;
							return 1;
						}
					lab_0x4a6e0:
						// 0x4a6e0
						v13 = v60;
						// branch -> 0x4a4b8
						break;
					}
					// 0x4a6e0
					v60 = v13 + 1;
					if (v60 < v6) {
						goto lab_0x4a6e0;
					}
					// 0x4a6fc
					v10 = g23;
					if (*(char *)*(int32_t *)(v10 - 0x77e4) == 15) {
						// 0x4a70c
						*(int32_t *)(*(int32_t *)(v10 - 0x7604) + 364) = g36 + 1;
						*(int32_t *)(*(int32_t *)(g23 - 0x7604) + 368) = g33 + 1;
						// branch -> 0x4a724
					}
					// 0x4a724
					if (a6 == 1) {
						// 0x4a730
						v11 = g23;
						*(int32_t *)*(int32_t *)(v11 - 0x77b0) = 2 * g36 + 21;
						*(int32_t *)*(int32_t *)(v11 - 0x77b4) = 2 * g33 + 22;
						// branch -> 0x4a750
					}
					// 0x4a750
					if (a7 == 0) {
						// 0x4a75c
						v12 = g23;
						*(int32_t *)*(int32_t *)(v12 - 0x751c) = 2 * g36 + 21;
						*(int32_t *)*(int32_t *)(v12 - 0x7520) = 2 * g33 + 22;
						// branch -> 0x4a780
						// 0x4a780
						g10 = v1;
						return 1;
					}
					result = 1;
				} else {
					result = 0;
				}
			}
		}
	} else {
		// 0x4a6fc
		v10 = g23;
		if (*(char *)*(int32_t *)(v10 - 0x77e4) == 15) {
			// 0x4a70c
			*(int32_t *)(*(int32_t *)(v10 - 0x7604) + 364) = g36 + 1;
			*(int32_t *)(*(int32_t *)(g23 - 0x7604) + 368) = g33 + 1;
			// branch -> 0x4a724
		}
		// 0x4a724
		if (a6 == 1) {
			// 0x4a730
			v11 = g23;
			*(int32_t *)*(int32_t *)(v11 - 0x77b0) = 2 * g36 + 21;
			*(int32_t *)*(int32_t *)(v11 - 0x77b4) = 2 * g33 + 22;
			// branch -> 0x4a750
		}
		// 0x4a750
		if (a7 == 0) {
			// 0x4a75c
			v12 = g23;
			*(int32_t *)*(int32_t *)(v12 - 0x751c) = 2 * g36 + 21;
			*(int32_t *)*(int32_t *)(v12 - 0x7520) = 2 * g33 + 22;
			result = 1;
			// branch -> 0x4a780
		} else {
			result = 1;
		}
	}
	// 0x4a780
	g10 = v1;
	return result;
}

// Address range: 0x4a794 - 0x4a7d0
int32_t function_4a794(int32_t a1)
{
	int32_t v1 = 0x1000000 * a1; // 0x4a794
	if (v1 == 0x19000000 || v1 == 0x1c000000 || v1 == 0x17000000) {
		// 0x4a7a0
		return 1;
	}
	// 0x4a7c8
	return 0;
}

// Address range: 0x4a7d0 - 0x4a80c
int32_t function_4a7d0(int32_t a1)
{
	int32_t v1 = 0x1000000 * a1; // 0x4a7d0
	if (v1 == 0x1b000000 || v1 == 0x1a000000 || v1 == 0x16000000) {
		// 0x4a7dc
		return 1;
	}
	// 0x4a804
	return 0;
}

// Address range: 0x4a80c - 0x4aa18
int32_t function_4a80c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77cc); // 0x4a814
	g32 = v1;
	g29 = 16;
	g36 = *(int32_t *)(g23 - 0x7588);
	g30 = 0;
	// branch -> 0x4a82c
	int32_t result; // r3
	while (true) {
		// 0x4a82c
		g31 = 0;
		g35 = v1;
		g33 = 1792;
		int32_t v2 = v1; // 0x4a83c
		// branch -> 0x4a83c
		while (true) {
			// 0x4a83c
			if (function_4a794((int32_t) * (char *)v2) != 0) {
				// 0x4a84c
				if (*(char *)(g35 - 1) == 18) {
					int32_t v3 = g33 + *(int32_t *)g36 + g29; // 0x4a860
					*(char *)(v3 + 112) = *(char *)v3;
					int32_t v4 = g33 + *(int32_t *)g36 + g29; // 0x4a874
					*(char *)(v4 + 113) = *(char *)v4;
					// branch -> 0x4a880
				}
			}
			int32_t v5 = function_4a7d0((int32_t) * (char *)g35); // 0x4a884
			result = v5;
			if (v5 != 0) {
				// 0x4a890
				if (*(char *)(g35 + 40) == 19) {
					int32_t v6 = g33 + *(int32_t *)g36 + g29; // 0x4a8a4
					*(char *)(v6 + 1) = *(char *)v6;
					int32_t v7 = g33 + *(int32_t *)g36 + g29; // 0x4a8b8
					result = v7;
					*(char *)(v7 + 113) = *(char *)v7;
					// branch -> 0x4a8c4
				}
			}
			int32_t v8 = g35; // 0x4a8c4
			int32_t v9 = v8;  // 0x4a8f8
			if (*(char *)v8 == 18) {
				int32_t v10 = g33 + *(int32_t *)g36 + g29; // 0x4a8d8
				*(char *)(v10 + 112) = *(char *)v10;
				int32_t v11 = g33 + *(int32_t *)g36 + g29; // 0x4a8ec
				result = v11;
				*(char *)(v11 + 113) = *(char *)v11;
				v9 = g35;
				// branch -> 0x4a8f8
			}
			int32_t v12 = v9; // 0x4a92c
			if (*(char *)v9 == 19) {
				int32_t v13 = g33 + *(int32_t *)g36 + g29; // 0x4a90c
				*(char *)(v13 + 1) = *(char *)v13;
				int32_t v14 = g33 + *(int32_t *)g36 + g29; // 0x4a920
				result = v14;
				*(char *)(v14 + 113) = *(char *)v14;
				v12 = g35;
				// branch -> 0x4a92c
			}
			int32_t v15 = v12; // 0x4a974
			if (*(char *)v12 == 24) {
				int32_t v16 = g33 + *(int32_t *)g36 + g29; // 0x4a940
				*(char *)(v16 + 112) = *(char *)v16;
				int32_t v17 = g33 + *(int32_t *)g36 + g29; // 0x4a954
				*(char *)(v17 + 1) = *(char *)v17;
				int32_t v18 = g33 + *(int32_t *)g36 + g29; // 0x4a968
				result = v18;
				*(char *)(v18 + 113) = *(char *)v18;
				v15 = g35;
				// branch -> 0x4a974
			}
			int32_t v19 = v15; // 0x4a9a8
			if (*(char *)v15 == 57) {
				int32_t v20 = g33 + *(int32_t *)g36 + g29; // 0x4a988
				*(char *)(v20 - 112) = *(char *)(v20 + 1);
				int32_t v21 = g33 + *(int32_t *)g36 + g29; // 0x4a99c
				result = v21;
				*(char *)v21 = *(char *)(v21 + 1);
				v19 = g35;
				// branch -> 0x4a9a8
			}
			int32_t v22 = v19; // 0x4a9e0
			if (*(char *)v19 == 53) {
				int32_t v23 = g33 + *(int32_t *)g36 + g29; // 0x4a9bc
				*(char *)(v23 - 1) = *(char *)(v23 + 112);
				int32_t v24 = g33 + *(int32_t *)g36 + g29; // 0x4a9d0
				result = v24;
				*(char *)v24 = *(char *)(v24 + 112);
				v22 = g35;
				// branch -> 0x4a9dc
			}
			int32_t v25 = g31 + 1; // 0x4a9dc
			g31 = v25;
			int32_t v26 = v22 + 40; // 0x4a9e0
			g35 = v26;
			g33 += 224;
			if (v25 >= 40) {
				// break -> 0x4a9f0
				break;
			}
			v2 = v26;
			// continue -> 0x4a83c
		}
		int32_t v27 = g30 + 1; // 0x4a9f0
		g30 = v27;
		int32_t v28 = g32 + 1; // 0x4a9f4
		g32 = v28;
		g29 += 2;
		if (v27 >= 40) {
			// break -> 0x4aa04
			break;
		}
		v1 = v28;
		// continue -> 0x4a82c
	}
	// 0x4aa04
	return result;
}

// Address range: 0x4aa18 - 0x4aad4
int32_t function_4aa18(int32_t a1)
{
	int32_t v1 = 1;                              // r7
	int32_t v2 = *(int32_t *)(g23 - 0x77cc) + 1; // 0x4aa20
	// branch -> 0x4aa24
	int32_t result; // 0x4aab4
	while (true) {
		int32_t v3 = v2 + 40; // 0x4aa28
		int32_t v4 = 19;      // ctr
		int32_t v5 = 1;       // r6
		// branch -> 0x4aa34
		while (true) {
			char *v6 = (char *)v3;  // 0x4aa34
			unsigned char v7 = *v6; // 0x4aa34
			int32_t v8;             // 0x4aa74
			int32_t v9;             // 0x4aa74
			char *v10;              // 0x4aa74
			unsigned char v11;      // 0x4aa74
			if (v7 >= 18) {
				// 0x4aa40
				if (v7 <= 30) {
					// 0x4aa48
					if (*(char *)(v3 + 40) > 17) {
						// 0x4aa60
						if (*(char *)(v3 + 1) <= 17) {
							// 0x4aa6c
							*v6 = v7 + 98;
							// branch -> 0x4aa74
						}
					} else {
						// 0x4aa54
						*v6 = v7 + 98;
						// branch -> 0x4aa74
					}
					// 0x4aa74
					v8 = v3;
					v9 = v8 + 40;
					v10 = (char *)v9;
					v11 = *v10;
					v3 = v9;
					int32_t v12; // 0x4aabc
					if (v11 >= 18) {
					lab_0x4aa80_2:
						// 0x4aa80
						if (v11 <= 30) {
							// 0x4aa88
							if (*(char *)(v8 + 80) > 17) {
								// 0x4aaa0
								if (*(char *)(v8 + 41) <= 17) {
									// 0x4aaac
									*v10 = v11 + 98;
									// branch -> 0x4aab4
								}
							} else {
								// 0x4aa94
								*v10 = v11 + 98;
								// branch -> 0x4aab4
							}
							// 0x4aab4
							result = v3 + 40;
							v5++;
							v12 = v4 - 1;
							v4 = v12;
							if (v12 == 0) {
								// break -> 0x4aac0
								break;
							}
							v3 = result;
							// continue -> 0x4aa34
							continue;
						}
					}
				lab_0x4aab4_2:
					// 0x4aab4
					result = v3 + 40;
					v5++;
					v12 = v4 - 1;
					v4 = v12;
					if (v12 == 0) {
						// break -> 0x4aac0
						break;
					}
					v3 = result;
					// continue -> 0x4aa34
					continue;
				}
				// 0x4aa74
				v8 = v3;
				v9 = v8 + 40;
				v10 = (char *)v9;
				v11 = *v10;
				v3 = v9;
				if (v11 < 18) {
					goto lab_0x4aab4_2;
				}
				goto lab_0x4aa80_2;
			}
			// 0x4aa74
			v8 = v3;
			v9 = v8 + 40;
			v10 = (char *)v9;
			v11 = *v10;
			v3 = v9;
			if (v11 < 18) {
				goto lab_0x4aab4_2;
			}
			goto lab_0x4aa80_2;
		}
		int32_t v13 = v1 + 1; // 0x4aac0
		v1 = v13;
		if (v13 >= 39) {
			// break -> 0x4aad0
			break;
		}
		v2++;
		// continue -> 0x4aa24
	}
	// 0x4aad0
	return result;
}

// Address range: 0x4aad4 - 0x4abc0
int32_t function_4aad4(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x72c8); // 0x4aad4
	int32_t v2 = v1;                         // r4
	int32_t result = 0;                      // r3
	*(char *)v1 = 0;
	*(char *)(v2 + 20) = (char)result;
	*(char *)(v2 + 40) = (char)result;
	*(char *)(v2 + 60) = (char)result;
	*(char *)(v2 + 80) = (char)result;
	*(char *)(v2 + 100) = (char)result;
	*(char *)(v2 + 120) = (char)result;
	*(char *)(v2 + 140) = (char)result;
	*(char *)(v2 + 160) = (char)result;
	*(char *)(v2 + 180) = (char)result;
	*(char *)(v2 + 200) = (char)result;
	*(char *)(v2 + 220) = (char)result;
	*(char *)(v2 + 240) = (char)result;
	*(char *)(v2 + 260) = (char)result;
	*(char *)(v2 + 280) = (char)result;
	*(char *)(v2 + 300) = (char)result;
	uint32_t v3 = 16;          // 0x4abac
	int32_t v4 = v2 + 20 * v3; // 0x4abb0
	if (v3 <= 19) {
		*(char *)v4 = (char)result;
		int32_t v5 = 19 - v3; // 0x4ab3c
		while (v5 != 0) {
			// 0x4ab34
			v4 += 20;
			*(char *)v4 = (char)result;
			v5--;
			// continue -> 0x4ab34
		}
		// 0x4ab40
		// branch -> 0x4ab40
	}
	// 0x4ab40
	result = 0;
	*(char *)v2 = 0;
	int32_t v6 = 16; // r6
	*(char *)(v2 + 1) = (char)result;
	*(char *)(v2 + 2) = (char)result;
	*(char *)(v2 + 3) = (char)result;
	*(char *)(v2 + 4) = (char)result;
	*(char *)(v2 + 5) = (char)result;
	*(char *)(v2 + 6) = (char)result;
	*(char *)(v2 + 7) = (char)result;
	*(char *)(v2 + 8) = (char)result;
	*(char *)(v2 + 9) = (char)result;
	*(char *)(v2 + 10) = (char)result;
	*(char *)(v2 + 11) = (char)result;
	*(char *)(v2 + 12) = (char)result;
	*(char *)(v2 + 13) = (char)result;
	*(char *)(v2 + 14) = (char)result;
	*(char *)(v2 + 15) = (char)result;
	int32_t v7 = v2 + 16; // 0x4abb8
	if (v6 > 19) {
		// bb
		return result;
	}
	*(char *)v7 = (char)result;
	int32_t v8 = v7 + 1;  // 0x4aba0
	int32_t v9 = 19 - v6; // 0x4aba4
	while (v9 != 0) {
		// 0x4ab9c
		*(char *)v8 = (char)result;
		v8++;
		v9--;
		// continue -> 0x4ab9c
	}
	// 0x4aba8
	return result;
}

// Address range: 0x4abc0 - 0x4abc4
int32_t function_4abc0(void)
{
	// 0x4abc0
	return 0;
}

// Address range: 0x4abc4 - 0x4ac94
int32_t function_4abc4(void)
{
	int32_t v1 = 0;                          // r7
	int32_t v2 = *(int32_t *)(g23 - 0x77cc); // 0x4abc8
	// branch -> 0x4abcc
	int32_t result; // r3
	while (true) {
		int32_t v3 = 13; // ctr
		int32_t v4 = v2; // r4
		int32_t v5 = 0;  // r6
		int32_t v6 = 17; // r0
		int32_t v7 = v2; // 0x4ac0c
		// branch -> 0x4abe0
		while (true) {
			char *v8 = (char *)v7;  // 0x4abe0
			unsigned char v9 = *v8; // 0x4abe0
			int32_t v10;            // 0x4ac10
			if (v9 != 24) {
				// 0x4abec
				if (v9 != 122) {
					v10 = v7;
				lab_0x4ac10_4:;
					int32_t v11 = v10 + 40;   // 0x4ac10
					char *v12 = (char *)v11;  // 0x4ac10
					unsigned char v13 = *v12; // 0x4ac10
					v4 = v11;
					int32_t v14; // 0x4ac40
					if (v13 != 24) {
						// 0x4ac1c
						if (v13 != 122) {
							v14 = v11;
						lab_0x4ac40_3:;
							int32_t v15 = v14 + 40;   // 0x4ac40
							char *v16 = (char *)v15;  // 0x4ac40
							unsigned char v17 = *v16; // 0x4ac40
							result = v17;
							v4 = v15;
							int32_t v18 = v5 + 1; // 0x4ac44
							v5 = v18;
							int32_t v19; // 0x4ac74
							int32_t v20; // 0x4ac78
							if (v17 != 24) {
								// 0x4ac50
								if (v17 != 122) {
									v20 = v18;
									v19 = v15;
								lab_0x4ac74_3:;
									int32_t v21 = v19 + 40; // 0x4ac74
									v4 = v21;
									v5 = v20 + 1;
									int32_t v22 = v3 - 1; // 0x4ac7c
									v3 = v22;
									if (v22 == 0) {
										// break -> 0x4ac80
										break;
									}
									v7 = v21;
									// continue -> 0x4abe0
									continue;
								}
							}
							unsigned char v23 = *(char *)(v14 + 80); // 0x4ac58
							result = v23;
							if (v23 != 2) {
								v20 = v18;
								v19 = v15;
								goto lab_0x4ac74_3;
							}
							unsigned char v24 = *(char *)(v14 + 41); // 0x4ac64
							result = v24;
							if (v24 != 5) {
								v20 = v18;
								v19 = v15;
								goto lab_0x4ac74_3;
							}
							// 0x4ac70
							*v16 = (char)v6;
							v20 = v5;
							v19 = v4;
							// branch -> 0x4ac74
							goto lab_0x4ac74_3;
						}
					}
					// 0x4ac24
					if (*(char *)(v10 + 80) != 2) {
						v14 = v11;
						goto lab_0x4ac40_3;
					}
					// 0x4ac30
					if (*(char *)(v10 + 41) != 5) {
						v14 = v11;
						goto lab_0x4ac40_3;
					}
					// 0x4ac3c
					*v12 = (char)v6;
					v14 = v4;
					// branch -> 0x4ac40
					goto lab_0x4ac40_3;
				}
				// 0x4abf4
				if (*(char *)(v7 + 40) != 2) {
					v10 = v7;
					goto lab_0x4ac10_4;
				}
			lab_0x4ac00:
				// 0x4ac00
				if (*(char *)(v7 + 1) != 5) {
					v10 = v7;
					goto lab_0x4ac10_4;
				}
				// 0x4ac0c
				*v8 = (char)v6;
				v10 = v4;
				// branch -> 0x4ac10
				goto lab_0x4ac10_4;
			}
			// 0x4abf4
			if (*(char *)(v7 + 40) == 2) {
				goto lab_0x4ac00;
			}
			v10 = v7;
			goto lab_0x4ac10_4;
		}
		int32_t v25 = v1 + 1; // 0x4ac80
		v1 = v25;
		if (v25 >= 39) {
			// break -> 0x4ac90
			break;
		}
		v2++;
		// continue -> 0x4abcc
	}
	// 0x4ac90
	return result;
}

// Address range: 0x4ac94 - 0x4b900
int32_t function_4ac94(int32_t a1)
{
	int32_t v1 = g10; // 0x4ac98
	// branch -> 0x4acf4
	int32_t v2; // ctr
	int32_t v3; // r5
	int32_t v4; // r6
	int32_t v5; // r7
	while (true) {
		// 0x4acf4
		DRLG_InitTrans(0);
		// branch -> 0x4acf8
		while (true) {
			int32_t v6 = function_49df8(function_46930());   // 0x4acfc
			int32_t v7 = function_498a0(function_4aad4(v6)); // 0x4ad04
			g35 = v7;
			int32_t v8 = v7; // 0x4ad18
			if (v7 >= 173) {
				// 0x4ad14
				function_49574();
				v8 = g35;
				// branch -> 0x4ad18
			}
			// 0x4ad18
			if (v8 >= 173) {
				// break -> 0x4ad20
				break;
			}
			// continue -> 0x4acf8
		}
		int32_t v9 = function_4907c();                    // 0x4ad20
		int32_t v10 = function_476e4(function_46bb4(v9)); // 0x4ad28
		if (*(char *)g30 == 16) {
			// 0x4ad38
			function_49ff8(v10);
			// branch -> 0x4ad3c
		}
		// 0x4ad3c
		int32_t v11; // r4
		int32_t v12; // 0x4ad8c
		int32_t v13; // 0x4ad70
		int32_t v14; // 0x4ae04
		int32_t v15; // 0x4ad68
		int32_t v16; // 0x4ad7c
		if (QuestStatus(11) == 0) {
			unsigned char v17 = *(char *)g30; // 0x4ad4c
			g34 = v17;
			if (v17 == *(char *)(g21 + 360)) {
				// 0x4ad5c
				if (*(char *)g20 != 1) {
					// 0x4ad68
					v15 = *(int32_t *)g19;
					v5 = 1;
					v13 = 40 * v15;
					g34 = v13;
					v3 = v15;
					v16 = *(int32_t *)(g23 - 0x7514) + v13;
					v11 = v16;
					if (v15 < *(int32_t *)g27) {
						v12 = v16;
					lab_0x4ad84:
						while (true) {
							int32_t v18 = *(int32_t *)g36; // 0x4ad84
							int32_t v19 = *(int32_t *)g28; // 0x4ad88
							g34 = v18 + v12;
							int32_t v20 = v19 - v18; // 0x4ad94
							v4 = v20;
							int32_t v21; // 0x4ade8
							int32_t v22; // 0x4adec
							if (v19 > v18) {
								int32_t v23 = __asm_rlwinm_(v20, 29, 3, 31); // 0x4ad9c
								v2 = v23;
								int32_t v24; // 0x4add8
								int32_t v25;
								if (v23 == 0) {
									// 0x4ad9c
									v25 = g34;
									v24 = v4;
									// branch -> 0x4add8
								lab_0x4add8:
									// 0x4add8
									*(char *)v25 = (char)v5;
									int32_t v26 = g34 + 1; // 0x4ade0
									g34 = v26;
									int32_t v27 = v24 - 1; // 0x4ade4
									// branch -> 0x4addc
									while (v27 != 0) {
										// 0x4addc
										*(char *)v26 = (char)v5;
										v26 = g34 + 1;
										g34 = v26;
										v27--;
										// continue -> 0x4addc
									}
								lab_0x4ade8:
									// 0x4ade8
									v21 = v11 + 40;
									v11 = v21;
									v22 = v3 + 1;
									v3 = v22;
									if (v22 >= *(int32_t *)g27) {
										// break -> 0x4adfc
										break;
									}
									v12 = v21;
									// continue -> 0x4ad84
									continue;
								} else {
									// 0x4ada8
									*(char *)g34 = (char)v5;
									*(char *)(g34 + 1) = (char)v5;
									*(char *)(g34 + 2) = (char)v5;
									*(char *)(g34 + 3) = (char)v5;
									*(char *)(g34 + 4) = (char)v5;
									*(char *)(g34 + 5) = (char)v5;
									*(char *)(g34 + 6) = (char)v5;
									*(char *)(g34 + 7) = (char)v5;
									int32_t v28 = g34 + 8; // 0x4adc8
									g34 = v28;
									int32_t v29 = v2 - 1; // 0x4adcc
									// branch -> 0x4ada8
									while (v29 != 0) {
										// 0x4ada8
										*(char *)v28 = (char)v5;
										*(char *)(g34 + 1) = (char)v5;
										*(char *)(g34 + 2) = (char)v5;
										*(char *)(g34 + 3) = (char)v5;
										*(char *)(g34 + 4) = (char)v5;
										*(char *)(g34 + 5) = (char)v5;
										*(char *)(g34 + 6) = (char)v5;
										*(char *)(g34 + 7) = (char)v5;
										v28 = g34 + 8;
										g34 = v28;
										v29--;
										// continue -> 0x4ada8
									}
									int32_t v30 = v4 % 8; // 0x4add0
									if (v30 == 0) {
										goto lab_0x4ade8;
									}
									v25 = v28;
									v24 = v30;
									goto lab_0x4add8;
								}
								int32_t v31 = v11; // 0x4ade8
								v21 = v31 + 40;
								v11 = v21;
								int32_t v32 = v3; // 0x4adec
								v22 = v32 + 1;
								v3 = v22;
								int32_t v33 = g27;              // 0x4adf0
								uint32_t v34 = *(int32_t *)v33; // 0x4adf0
								if (v22 >= v34) {
									// break -> 0x4adfc
									break;
								}
								v12 = v21;
								// continue -> 0x4ad84
								continue;
							}
							// 0x4ade8
							v21 = v11 + 40;
							v11 = v21;
							v22 = v3 + 1;
							v3 = v22;
							if (v22 >= *(int32_t *)g27) {
								// break -> 0x4adfc
								break;
							}
							v12 = v21;
							// continue -> 0x4ad84
						}
						// 0x4adfc
						function_47278();
						v14 = DRLG_LXTransFix(6);
						function_4a80c(v14);
						if (*(int32_t *)*(int32_t *)(g23 - 0x7524) != 0) {
						lab_0x4ae1c_2:
							// 0x4ae1c
							function_46ab0(*(int32_t *)g19, *(int32_t *)g36);
							// branch -> 0x4ae28
						}
					lab_0x4ae28_2:
						// 0x4ae28
						if (*(char *)g30 == 16) {
							// 0x4ae34
							function_4a27c(1);
							// branch -> 0x4ae3c
						}
						// 0x4ae3c
						int32_t v35; // r3
						int32_t v36; // 0x4b2b0
						if (QuestStatus(11) == 0) {
							int32_t v37 = g25; // 0x4b184
							if (*(char *)g30 == 15) {
								int32_t v38 = g29; // 0x4b18c
								if (v37 == 0) {
									int32_t v39 = function_4a420((char *)v38, 1, 1, -1, -1, 1, 0); // 0x4b1a8
									v35 = v39;
									int32_t *v40; // 0x4b210
									if (v39 != 0) {
										// 0x4b1b4
										if (*(char *)g20 == 1) {
											// 0x4b1c0
											if (*(char *)(g21 + 122) != 2) {
												// 0x4b1f0
												v35 = function_4a420((char *)g18, 1, 1, -1, -1, 0, 1);
												// branch -> 0x4b210
											lab_0x4b210:
												// 0x4b210
												v40 = (int32_t *)g31;
												*v40 = *v40 + 1;
												// branch -> 0x4b2b0
											lab_0x4b2b0_3:
												// 0x4b2b0
												if (v35 != 0) {
													// break -> 0x4b2b8
													break;
												}
												// continue -> 0x4acf4
												continue;
											}
										}
										// 0x4b1cc
										v35 = function_4a420((char *)g17, 1, 1, -1, -1, 0, 1);
										// branch -> 0x4b210
										goto lab_0x4b210;
									}
									// 0x4b210
									v40 = (int32_t *)g31;
									*v40 = *v40 + 1;
									// branch -> 0x4b2b0
									goto lab_0x4b2b0_3;
								} else {
									int32_t v41 = function_4a420((char *)v38, 1, 1, -1, -1, 0, 0); // 0x4b23c
									v35 = v41;
									int32_t *v42; // 0x4b2a4
									if (v41 != 0) {
										// 0x4b248
										if (*(char *)g20 == 1) {
											// 0x4b254
											if (*(char *)(g21 + 122) != 2) {
												// 0x4b284
												v35 = function_4a420((char *)g18, 1, 1, -1, -1, 1, 1);
												// branch -> 0x4b2a4
											lab_0x4b2a4:
												// 0x4b2a4
												v42 = (int32_t *)g24;
												*v42 = *v42 + 1;
												// branch -> 0x4b2b0
												goto lab_0x4b2b0_3;
											}
										}
										// 0x4b260
										v35 = function_4a420((char *)g17, 1, 1, -1, -1, 1, 1);
										// branch -> 0x4b2a4
										goto lab_0x4b2a4;
									}
									// 0x4b2a4
									v42 = (int32_t *)g24;
									*v42 = *v42 + 1;
									// branch -> 0x4b2b0
									goto lab_0x4b2b0_3;
								}
							lab_0x4b2b0_6:
								// 0x4b2b0
								if (v35 != 0) {
									// break -> 0x4b2b8
									break;
								}
								// continue -> 0x4acf4
								continue;
							} else {
								// 0x4afac
								if (v37 == 0) {
									int32_t v43 = function_4a420((char *)g29, 1, 1, -1, -1, 1, 0); // 0x4afd0
									v35 = v43;
									int32_t v44 = 0; // 0x4b008
									if (v43 != 0) {
										// 0x4afdc
										if (*(char *)g30 != 16) {
											int32_t v45 = function_4a420((char *)g22, 1, 1, -1, -1, 0, 1); // 0x4b004
											v35 = v45;
											v44 = v45;
											// branch -> 0x4b008
										} else {
											v44 = v43;
										}
									}
									// 0x4b008
									if (v44 != 0) {
										// 0x4b010
										if (*(char *)g30 == 13) {
											// 0x4b01c
											v35 = function_4a420((char *)g26, 1, 1, -1, -1, 0, 6);
											// branch -> 0x4b03c
										}
									}
									int32_t *v46 = (int32_t *)g31; // 0x4b03c
									*v46 = *v46 + 1;
									// branch -> 0x4b2b0
									goto lab_0x4b2b0_6;
								} else {
									int32_t v47 = function_4a420((char *)g29, 1, 1, -1, -1, 0, 0); // 0x4b070
									v35 = v47;
									if (v37 == 1) {
										int32_t v48 = 0; // 0x4b0a8
										if (v47 != 0) {
											// 0x4b07c
											if (*(char *)g30 != 16) {
												int32_t v49 = function_4a420((char *)g22, 1, 1, -1, -1, 1, 1); // 0x4b0a4
												v35 = v49;
												v48 = v49;
												// branch -> 0x4b0a8
											} else {
												v48 = v47;
											}
										}
										// 0x4b0a8
										if (v48 != 0) {
											// 0x4b0b0
											if (*(char *)g30 == 13) {
												// 0x4b0bc
												v35 = function_4a420((char *)g26, 1, 1, -1, -1, 0, 6);
												// branch -> 0x4b0dc
											}
										}
										int32_t *v50 = (int32_t *)g24; // 0x4b0dc
										*v50 = *v50 + 1;
										// branch -> 0x4b2b0
										goto lab_0x4b2b0_6;
									} else {
										int32_t v51 = 0; // 0x4b140
										if (v47 != 0) {
											// 0x4b114
											if (*(char *)g30 != 16) {
												int32_t v52 = function_4a420((char *)g22, 1, 1, -1, -1, 0, 1); // 0x4b13c
												v35 = v52;
												v51 = v52;
												// branch -> 0x4b140
											} else {
												v51 = v47;
											}
										}
										// 0x4b140
										if (v51 != 0) {
											// 0x4b148
											if (*(char *)g30 == 13) {
												// 0x4b154
												v35 = function_4a420((char *)g26, 1, 1, -1, -1, 1, 6);
												// branch -> 0x4b174
											}
										}
										int32_t *v53 = (int32_t *)g31; // 0x4b174
										*v53 = *v53 + 1;
										// branch -> 0x4b2b0
										goto lab_0x4b2b0_6;
									}
									// 0x4b2b0
									v36 = v35;
									if (v36 != 0) {
										// break -> 0x4b2b8
										break;
									}
									// continue -> 0x4acf4
									continue;
								}
								// 0x4b2b0
								v36 = v35;
								if (v36 != 0) {
									// break -> 0x4b2b8
									break;
								}
								// continue -> 0x4acf4
								continue;
							}
						lab_0x4b2b0_9:
							// 0x4b2b0
							if (v35 != 0) {
								// break -> 0x4b2b8
								break;
							}
							// continue -> 0x4acf4
							continue;
						} else {
							int32_t v54 = g25; // 0x4ae4c
							if (v54 == 0) {
								int32_t v55 = function_4a420((char *)g29, 1, 1, -1, -1, 1, 0); // 0x4ae70
								v35 = v55;
								if (v55 != 0) {
									// 0x4ae7c
									if (*(char *)g30 == 13) {
										// 0x4ae88
										v35 = function_4a420((char *)g26, 1, 1, -1, -1, 0, 6);
										// branch -> 0x4aea8
									}
								}
								int32_t *v56 = (int32_t *)g31; // 0x4aea8
								*v56 = *v56 + 1;
								// branch -> 0x4b2b0
								goto lab_0x4b2b0_9;
							} else {
								int32_t v57 = function_4a420((char *)g29, 1, 1, -1, -1, 0, 0); // 0x4aedc
								v35 = v57;
								if (v54 == 1) {
									// 0x4aec0
									if (v57 != 0) {
										// 0x4aee8
										if (*(char *)g30 == 13) {
											// 0x4aef4
											v35 = function_4a420((char *)g26, 1, 1, -1, -1, 0, 6);
											// branch -> 0x4af14
										}
									}
									// 0x4af14
									*(int32_t *)g31 = 2 * *(int32_t *)*(int32_t *)(g23 - 0x754c) + 22;
									*(int32_t *)g24 = 2 * *(int32_t *)g16 + 22;
									// branch -> 0x4b2b0
									goto lab_0x4b2b0_9;
								} else {
									// 0x4af3c
									if (v57 != 0) {
										// 0x4af64
										if (*(char *)g30 == 13) {
											// 0x4af70
											v35 = function_4a420((char *)g26, 1, 1, -1, -1, 1, 6);
											// branch -> 0x4af90
										}
									}
									int32_t *v58 = (int32_t *)g31; // 0x4af90
									*v58 = *v58 + 1;
									// branch -> 0x4b2b0
									goto lab_0x4b2b0_9;
								}
								// 0x4b2b0
								v36 = v35;
								if (v36 != 0) {
									// break -> 0x4b2b8
									break;
								}
								// continue -> 0x4acf4
								continue;
							}
							// 0x4b2b0
							v36 = v35;
							if (v36 != 0) {
								// break -> 0x4b2b8
								break;
							}
							// continue -> 0x4acf4
							continue;
						}
						// 0x4b2b0
						v36 = v35;
						if (v36 != 0) {
							// break -> 0x4b2b8
							break;
						}
						// continue -> 0x4acf4
						continue;
					}
				}
			lab_0x4adfc:
				// 0x4adfc
				function_47278();
				v14 = DRLG_LXTransFix(6);
				function_4a80c(v14);
				if (*(int32_t *)*(int32_t *)(g23 - 0x7524) == 0) {
					goto lab_0x4ae28_2;
				}
				goto lab_0x4ae1c_2;
			}
		} else {
			// 0x4ad68
			v15 = *(int32_t *)g19;
			v5 = 1;
			v13 = 40 * v15;
			g34 = v13;
			v3 = v15;
			v16 = *(int32_t *)(g23 - 0x7514) + v13;
			v11 = v16;
			if (v15 < *(int32_t *)g27) {
				v12 = v16;
				goto lab_0x4ad84;
			}
			goto lab_0x4adfc;
		}
		// 0x4adfc
		function_47278();
		v14 = DRLG_LXTransFix(6);
		function_4a80c(v14);
		if (*(int32_t *)*(int32_t *)(g23 - 0x7524) == 0) {
			goto lab_0x4ae28_2;
		}
		goto lab_0x4ae1c_2;
	}
	// 0x4b2b8
	function_4abc4();
	if (*(char *)g30 != 16) {
		// 0x4b2c8
		DRLG_PlaceThemeRooms(7, 10, 6, 8, 1);
		// branch -> 0x4b2e0
	}
	int32_t v59 = function_467b8(); // 0x4b2e0
	function_48f20(function_4aa18(v59));
	DRLG_Init_Globals();
	int32_t v60;     // r23
	int32_t v61;     // r28
	int32_t v62;     // r29
	int32_t v63;     // 0x4b5b8
	int32_t v64;     // 0x4b5c8
	int32_t v65;     // 0x4b5d0
	int32_t v66;     // 0x4b5d4
	int32_t v67;     // 0x4b5e0
	int32_t v68;     // 0x4b784
	int32_t v69;     // 0x4b8d0
	int32_t v70;     // 0x4b8fc31
	int32_t v71;     // 0x4b790
	int32_t v72;     // 0x4b8dc
	int32_t v73;     // 0x4b8e0
	int32_t result3; // 0x4b5b4
	char v74;        // 0x4b7b0
	char v75;        // 0x4b7b8
	char v76;        // 0x4b7c0
	char v77;        // 0x4b7c8
	char v78;        // 0x4b7d0
	char v79;        // 0x4b7d8
	char v80;        // 0x4b7e0
	char v81;        // 0x4b7e8
	char v82;        // 0x4b7f0
	char v83;        // 0x4b7f8
	char v84;        // 0x4b800
	char v85;        // 0x4b808
	char v86;        // 0x4b810
	char v87;        // 0x4b818
	char v88;        // 0x4b820
	char v89;        // 0x4b828
	char v90;        // 0x4b830
	char v91;        // 0x4b838
	char v92;        // 0x4b840
	char v93;        // 0x4b848
	char v94;        // 0x4b850
	char v95;        // 0x4b858
	char v96;        // 0x4b860
	char v97;        // 0x4b868
	char v98;        // 0x4b870
	char v99;        // 0x4b878
	char v100;       // 0x4b880
	char v101;       // 0x4b888
	char v102;       // 0x4b890
	char v103;       // 0x4b898
	char v104;       // 0x4b8a0
	char v105;       // 0x4b8a8
	char v106;       // 0x4b8b0
	char v107;       // 0x4b8b8
	char v108;       // 0x4b8c0
	char v109;       // 0x4b8c8
	if (QuestStatus(11) != 0) {
		// 0x4b300
		v2 = 20;
		int32_t v110 = g33; // 0x4b308
		v3 = v110;
		int32_t v111 = g32; // 0x4b30c
		v4 = v111;
		v5 = 0;
		// branch -> 0x4b314
		while (true) {
			// 0x4b314
			*(char *)v111 = *(char *)v110;
			*(char *)(v4 + 40) = *(char *)(v3 + 40);
			*(char *)(v4 + 80) = *(char *)(v3 + 80);
			*(char *)(v4 + 120) = *(char *)(v3 + 120);
			*(char *)(v4 + 160) = *(char *)(v3 + 160);
			*(char *)(v4 + 200) = *(char *)(v3 + 200);
			*(char *)(v4 + 240) = *(char *)(v3 + 240);
			*(char *)(v4 + 280) = *(char *)(v3 + 280);
			*(char *)(v4 + 320) = *(char *)(v3 + 320);
			*(char *)(v4 + 360) = *(char *)(v3 + 360);
			*(char *)(v4 + 400) = *(char *)(v3 + 400);
			*(char *)(v4 + 440) = *(char *)(v3 + 440);
			*(char *)(v4 + 480) = *(char *)(v3 + 480);
			*(char *)(v4 + 520) = *(char *)(v3 + 520);
			*(char *)(v4 + 560) = *(char *)(v3 + 560);
			*(char *)(v4 + 600) = *(char *)(v3 + 600);
			*(char *)(v4 + 640) = *(char *)(v3 + 640);
			*(char *)(v4 + 680) = *(char *)(v3 + 680);
			*(char *)(v4 + 720) = *(char *)(v3 + 720);
			*(char *)(v4 + 760) = *(char *)(v3 + 760);
			*(char *)(v4 + 800) = *(char *)(v3 + 800);
			*(char *)(v4 + 840) = *(char *)(v3 + 840);
			*(char *)(v4 + 880) = *(char *)(v3 + 880);
			*(char *)(v4 + 920) = *(char *)(v3 + 920);
			*(char *)(v4 + 960) = *(char *)(v3 + 960);
			char v112 = *(char *)(v3 + 1000); // 0x4b3dc
			*(char *)(v4 + 1000) = v112;
			char v113 = *(char *)(v3 + 1040); // 0x4b3e4
			*(char *)(v4 + 1040) = v113;
			char v114 = *(char *)(v3 + 1080); // 0x4b3ec
			*(char *)(v4 + 1080) = v114;
			char v115 = *(char *)(v3 + 1120); // 0x4b3f4
			*(char *)(v4 + 1120) = v115;
			char v116 = *(char *)(v3 + 1160); // 0x4b3fc
			*(char *)(v4 + 1160) = v116;
			char v117 = *(char *)(v3 + 1200); // 0x4b404
			*(char *)(v4 + 1200) = v117;
			char v118 = *(char *)(v3 + 1240); // 0x4b40c
			*(char *)(v4 + 1240) = v118;
			char v119 = *(char *)(v3 + 1280); // 0x4b414
			*(char *)(v4 + 1280) = v119;
			char v120 = *(char *)(v3 + 1320); // 0x4b41c
			*(char *)(v4 + 1320) = v120;
			char v121 = *(char *)(v3 + 1360); // 0x4b424
			*(char *)(v4 + 1360) = v121;
			char v122 = *(char *)(v3 + 1400); // 0x4b42c
			*(char *)(v4 + 1400) = v122;
			char v123 = *(char *)(v3 + 1440); // 0x4b434
			*(char *)(v4 + 1440) = v123;
			char v124 = *(char *)(v3 + 1480); // 0x4b43c
			*(char *)(v4 + 1480) = v124;
			char v125 = *(char *)(v3 + 1520); // 0x4b444
			*(char *)(v4 + 1520) = v125;
			int32_t v126 = v3; // 0x4b44c
			v3 = v126 + 1;
			*(char *)(v4 + 1560) = *(char *)(v126 + 1560);
			int32_t v127 = v4 + 1; // 0x4b458
			v4 = v127;
			v5++;
			*(char *)v127 = *(char *)v3;
			*(char *)(v4 + 40) = *(char *)(v3 + 40);
			*(char *)(v4 + 80) = *(char *)(v3 + 80);
			*(char *)(v4 + 120) = *(char *)(v3 + 120);
			*(char *)(v4 + 160) = *(char *)(v3 + 160);
			*(char *)(v4 + 200) = *(char *)(v3 + 200);
			*(char *)(v4 + 240) = *(char *)(v3 + 240);
			*(char *)(v4 + 280) = *(char *)(v3 + 280);
			*(char *)(v4 + 320) = *(char *)(v3 + 320);
			*(char *)(v4 + 360) = *(char *)(v3 + 360);
			*(char *)(v4 + 400) = *(char *)(v3 + 400);
			*(char *)(v4 + 440) = *(char *)(v3 + 440);
			*(char *)(v4 + 480) = *(char *)(v3 + 480);
			*(char *)(v4 + 520) = *(char *)(v3 + 520);
			*(char *)(v4 + 560) = *(char *)(v3 + 560);
			*(char *)(v4 + 600) = *(char *)(v3 + 600);
			*(char *)(v4 + 640) = *(char *)(v3 + 640);
			*(char *)(v4 + 680) = *(char *)(v3 + 680);
			*(char *)(v4 + 720) = *(char *)(v3 + 720);
			*(char *)(v4 + 760) = *(char *)(v3 + 760);
			*(char *)(v4 + 800) = *(char *)(v3 + 800);
			*(char *)(v4 + 840) = *(char *)(v3 + 840);
			*(char *)(v4 + 880) = *(char *)(v3 + 880);
			*(char *)(v4 + 920) = *(char *)(v3 + 920);
			*(char *)(v4 + 960) = *(char *)(v3 + 960);
			char v128 = *(char *)(v3 + 1000); // 0x4b528
			*(char *)(v4 + 1000) = v128;
			char v129 = *(char *)(v3 + 1040); // 0x4b530
			*(char *)(v4 + 1040) = v129;
			char v130 = *(char *)(v3 + 1080); // 0x4b538
			*(char *)(v4 + 1080) = v130;
			char v131 = *(char *)(v3 + 1120); // 0x4b540
			*(char *)(v4 + 1120) = v131;
			char v132 = *(char *)(v3 + 1160); // 0x4b548
			*(char *)(v4 + 1160) = v132;
			char v133 = *(char *)(v3 + 1200); // 0x4b550
			*(char *)(v4 + 1200) = v133;
			char v134 = *(char *)(v3 + 1240); // 0x4b558
			*(char *)(v4 + 1240) = v134;
			char v135 = *(char *)(v3 + 1280); // 0x4b560
			*(char *)(v4 + 1280) = v135;
			char v136 = *(char *)(v3 + 1320); // 0x4b568
			*(char *)(v4 + 1320) = v136;
			char v137 = *(char *)(v3 + 1360); // 0x4b570
			*(char *)(v4 + 1360) = v137;
			char v138 = *(char *)(v3 + 1400); // 0x4b578
			*(char *)(v4 + 1400) = v138;
			char v139 = *(char *)(v3 + 1440); // 0x4b580
			*(char *)(v4 + 1440) = v139;
			char v140 = *(char *)(v3 + 1480); // 0x4b588
			*(char *)(v4 + 1480) = v140;
			char v141 = *(char *)(v3 + 1520); // 0x4b590
			*(char *)(v4 + 1520) = v141;
			int32_t v142 = v3; // 0x4b598
			v3 = v142 + 1;
			*(char *)(v4 + 1560) = *(char *)(v142 + 1560);
			int32_t v143 = v4 + 1; // 0x4b5a4
			v4 = v143;
			int32_t v144 = v2 - 1; // 0x4b5a8
			v2 = v144;
			if (v144 != 0) {
				// 0x4b314
				v111 = v143;
				v110 = v3;
				// branch -> 0x4b314
				continue;
			}
			// 0x4b5ac
			result3 = DRLG_CheckQuests(*(int32_t *)g19, *(int32_t *)g36);
			v63 = g30;
			int32_t result = result3; // 0x4b8fc28
			int32_t v145 = v63;       // 0x4b634
			if (*(char *)v63 == 15) {
				// 0x4b5c4
				g31 = 0;
				v64 = g33;
				v60 = v64;
				int32_t v146 = result3; // 0x4b8fc32
				v65 = v64;
				// branch -> 0x4b5cc
				int32_t v147; // 0x4b8fc30
				while (true) {
					// 0x4b5cc
					g36 = 0;
					g35 = v65;
					v70 = v146;
					v67 = 0;
					v66 = v65;
					// branch -> 0x4b5d4
				lab_0x4b5d4:
					while (true) {
						// 0x4b5d4
						v147 = v70;
						int32_t v148 = v66; // 0x4b5f4
						if (*(char *)v66 == 98) {
							// 0x4b5e0
							v147 = function_52e24(v67 - 1, g31 - 1, 5, 5);
							v148 = g35;
							// branch -> 0x4b5f4
						}
						int32_t v149 = v148; // 0x4b618
						if (*(char *)v148 == 107) {
							// 0x4b600
							v147 = function_52e24(g36 - 1, g31 - 1, 5, 5);
							v149 = g35;
							// branch -> 0x4b614
						}
						int32_t v150 = g36 + 1; // 0x4b614
						g36 = v150;
						int32_t v151 = v149 + 40; // 0x4b618
						g35 = v151;
						if (v150 >= 40) {
							// break -> 0x4b624
							break;
						}
						v70 = v147;
						v67 = v150;
						v66 = v151;
						// continue -> 0x4b5d4
					}
					int32_t v152 = g31 + 1; // 0x4b624
					g31 = v152;
					int32_t v153 = v60 + 1; // 0x4b628
					v60 = v153;
					if (v152 >= 40) {
						// break -> 0x4b634
						break;
					}
					v146 = v147;
					v65 = v153;
					// continue -> 0x4b5cc
				}
				// 0x4b634
				result = v147;
				v145 = g30;
				// branch -> 0x4b634
			}
			// 0x4b634
			if (*(char *)v145 != 16) {
				// 0x4b8ec
				g10 = v1;
				return result;
			}
			// 0x4b640
			v3 = 0;
			*(char *)g32 = *(char *)g33;
			*(char *)(g32 + 40) = *(char *)(g33 + 40);
			*(char *)(g32 + 80) = *(char *)(g33 + 80);
			*(char *)(g32 + 120) = *(char *)(g33 + 120);
			*(char *)(g32 + 160) = *(char *)(g33 + 160);
			*(char *)(g32 + 200) = *(char *)(g33 + 200);
			*(char *)(g32 + 240) = *(char *)(g33 + 240);
			*(char *)(g32 + 280) = *(char *)(g33 + 280);
			*(char *)(g32 + 320) = *(char *)(g33 + 320);
			*(char *)(g32 + 360) = *(char *)(g33 + 360);
			*(char *)(g32 + 400) = *(char *)(g33 + 400);
			*(char *)(g32 + 440) = *(char *)(g33 + 440);
			*(char *)(g32 + 480) = *(char *)(g33 + 480);
			*(char *)(g32 + 520) = *(char *)(g33 + 520);
			*(char *)(g32 + 560) = *(char *)(g33 + 560);
			*(char *)(g32 + 600) = *(char *)(g33 + 600);
			*(char *)(g32 + 640) = *(char *)(g33 + 640);
			*(char *)(g32 + 680) = *(char *)(g33 + 680);
			*(char *)(g32 + 720) = *(char *)(g33 + 720);
			*(char *)(g32 + 760) = *(char *)(g33 + 760);
			*(char *)(g32 + 800) = *(char *)(g33 + 800);
			*(char *)(g32 + 840) = *(char *)(g33 + 840);
			*(char *)(g32 + 880) = *(char *)(g33 + 880);
			*(char *)(g32 + 920) = *(char *)(g33 + 920);
			*(char *)(g32 + 960) = *(char *)(g33 + 960);
			*(char *)(g32 + 1000) = *(char *)(g33 + 1000);
			*(char *)(g32 + 1040) = *(char *)(g33 + 1040);
			*(char *)(g32 + 1080) = *(char *)(g33 + 1080);
			*(char *)(g32 + 1120) = *(char *)(g33 + 1120);
			*(char *)(g32 + 1160) = *(char *)(g33 + 1160);
			*(char *)(g32 + 1200) = *(char *)(g33 + 1200);
			*(char *)(g32 + 1240) = *(char *)(g33 + 1240);
			*(char *)(g32 + 1280) = *(char *)(g33 + 1280);
			*(char *)(g32 + 1320) = *(char *)(g33 + 1320);
			*(char *)(g32 + 1360) = *(char *)(g33 + 1360);
			*(char *)(g32 + 1400) = *(char *)(g33 + 1400);
			*(char *)(g32 + 1440) = *(char *)(g33 + 1440);
			*(char *)(g32 + 1480) = *(char *)(g33 + 1480);
			*(char *)(g32 + 1520) = *(char *)(g33 + 1520);
			v68 = g33;
			v62 = v68 + 1;
			*(char *)(g32 + 1560) = *(char *)(v68 + 1560);
			v71 = g32 + 1;
			v61 = v71;
			v3++;
			*(char *)v71 = *(char *)v62;
			*(char *)(v61 + 40) = *(char *)(v62 + 40);
			*(char *)(v61 + 80) = *(char *)(v62 + 80);
			v74 = *(char *)(v62 + 120);
			*(char *)(v61 + 120) = v74;
			v75 = *(char *)(v62 + 160);
			*(char *)(v61 + 160) = v75;
			v76 = *(char *)(v62 + 200);
			*(char *)(v61 + 200) = v76;
			v77 = *(char *)(v62 + 240);
			*(char *)(v61 + 240) = v77;
			v78 = *(char *)(v62 + 280);
			*(char *)(v61 + 280) = v78;
			v79 = *(char *)(v62 + 320);
			*(char *)(v61 + 320) = v79;
			v80 = *(char *)(v62 + 360);
			*(char *)(v61 + 360) = v80;
			v81 = *(char *)(v62 + 400);
			*(char *)(v61 + 400) = v81;
			v82 = *(char *)(v62 + 440);
			*(char *)(v61 + 440) = v82;
			v83 = *(char *)(v62 + 480);
			*(char *)(v61 + 480) = v83;
			v84 = *(char *)(v62 + 520);
			*(char *)(v61 + 520) = v84;
			v85 = *(char *)(v62 + 560);
			*(char *)(v61 + 560) = v85;
			v86 = *(char *)(v62 + 600);
			*(char *)(v61 + 600) = v86;
			v87 = *(char *)(v62 + 640);
			*(char *)(v61 + 640) = v87;
			v88 = *(char *)(v62 + 680);
			*(char *)(v61 + 680) = v88;
			v89 = *(char *)(v62 + 720);
			*(char *)(v61 + 720) = v89;
			v90 = *(char *)(v62 + 760);
			*(char *)(v61 + 760) = v90;
			v91 = *(char *)(v62 + 800);
			*(char *)(v61 + 800) = v91;
			v92 = *(char *)(v62 + 840);
			*(char *)(v61 + 840) = v92;
			v93 = *(char *)(v62 + 880);
			*(char *)(v61 + 880) = v93;
			v94 = *(char *)(v62 + 920);
			*(char *)(v61 + 920) = v94;
			v95 = *(char *)(v62 + 960);
			*(char *)(v61 + 960) = v95;
			v96 = *(char *)(v62 + 1000);
			*(char *)(v61 + 1000) = v96;
			v97 = *(char *)(v62 + 1040);
			*(char *)(v61 + 1040) = v97;
			v98 = *(char *)(v62 + 1080);
			*(char *)(v61 + 1080) = v98;
			v99 = *(char *)(v62 + 1120);
			*(char *)(v61 + 1120) = v99;
			v100 = *(char *)(v62 + 1160);
			*(char *)(v61 + 1160) = v100;
			v101 = *(char *)(v62 + 1200);
			*(char *)(v61 + 1200) = v101;
			v102 = *(char *)(v62 + 1240);
			*(char *)(v61 + 1240) = v102;
			v103 = *(char *)(v62 + 1280);
			*(char *)(v61 + 1280) = v103;
			v104 = *(char *)(v62 + 1320);
			*(char *)(v61 + 1320) = v104;
			v105 = *(char *)(v62 + 1360);
			*(char *)(v61 + 1360) = v105;
			v106 = *(char *)(v62 + 1400);
			*(char *)(v61 + 1400) = v106;
			v107 = *(char *)(v62 + 1440);
			*(char *)(v61 + 1440) = v107;
			v108 = *(char *)(v62 + 1480);
			*(char *)(v61 + 1480) = v108;
			v109 = *(char *)(v62 + 1520);
			*(char *)(v61 + 1520) = v109;
			v69 = v62;
			g33 = v69 + 1;
			*(char *)(v61 + 1560) = *(char *)(v69 + 1560);
			v72 = v61 + 1;
			g32 = v72;
			v73 = 19;
			// branch -> 0x4b64c
			while (v73 != 0) {
				// 0x4b64c
				*(char *)v72 = *(char *)g33;
				*(char *)(g32 + 40) = *(char *)(g33 + 40);
				*(char *)(g32 + 80) = *(char *)(g33 + 80);
				*(char *)(g32 + 120) = *(char *)(g33 + 120);
				*(char *)(g32 + 160) = *(char *)(g33 + 160);
				*(char *)(g32 + 200) = *(char *)(g33 + 200);
				*(char *)(g32 + 240) = *(char *)(g33 + 240);
				*(char *)(g32 + 280) = *(char *)(g33 + 280);
				*(char *)(g32 + 320) = *(char *)(g33 + 320);
				*(char *)(g32 + 360) = *(char *)(g33 + 360);
				*(char *)(g32 + 400) = *(char *)(g33 + 400);
				*(char *)(g32 + 440) = *(char *)(g33 + 440);
				*(char *)(g32 + 480) = *(char *)(g33 + 480);
				*(char *)(g32 + 520) = *(char *)(g33 + 520);
				*(char *)(g32 + 560) = *(char *)(g33 + 560);
				*(char *)(g32 + 600) = *(char *)(g33 + 600);
				*(char *)(g32 + 640) = *(char *)(g33 + 640);
				*(char *)(g32 + 680) = *(char *)(g33 + 680);
				*(char *)(g32 + 720) = *(char *)(g33 + 720);
				*(char *)(g32 + 760) = *(char *)(g33 + 760);
				*(char *)(g32 + 800) = *(char *)(g33 + 800);
				*(char *)(g32 + 840) = *(char *)(g33 + 840);
				*(char *)(g32 + 880) = *(char *)(g33 + 880);
				*(char *)(g32 + 920) = *(char *)(g33 + 920);
				*(char *)(g32 + 960) = *(char *)(g33 + 960);
				*(char *)(g32 + 1000) = *(char *)(g33 + 1000);
				*(char *)(g32 + 1040) = *(char *)(g33 + 1040);
				*(char *)(g32 + 1080) = *(char *)(g33 + 1080);
				*(char *)(g32 + 1120) = *(char *)(g33 + 1120);
				*(char *)(g32 + 1160) = *(char *)(g33 + 1160);
				*(char *)(g32 + 1200) = *(char *)(g33 + 1200);
				*(char *)(g32 + 1240) = *(char *)(g33 + 1240);
				*(char *)(g32 + 1280) = *(char *)(g33 + 1280);
				*(char *)(g32 + 1320) = *(char *)(g33 + 1320);
				*(char *)(g32 + 1360) = *(char *)(g33 + 1360);
				*(char *)(g32 + 1400) = *(char *)(g33 + 1400);
				*(char *)(g32 + 1440) = *(char *)(g33 + 1440);
				*(char *)(g32 + 1480) = *(char *)(g33 + 1480);
				*(char *)(g32 + 1520) = *(char *)(g33 + 1520);
				v68 = g33;
				v62 = v68 + 1;
				*(char *)(g32 + 1560) = *(char *)(v68 + 1560);
				v71 = g32 + 1;
				v61 = v71;
				v3++;
				*(char *)v71 = *(char *)v62;
				*(char *)(v61 + 40) = *(char *)(v62 + 40);
				*(char *)(v61 + 80) = *(char *)(v62 + 80);
				v74 = *(char *)(v62 + 120);
				*(char *)(v61 + 120) = v74;
				v75 = *(char *)(v62 + 160);
				*(char *)(v61 + 160) = v75;
				v76 = *(char *)(v62 + 200);
				*(char *)(v61 + 200) = v76;
				v77 = *(char *)(v62 + 240);
				*(char *)(v61 + 240) = v77;
				v78 = *(char *)(v62 + 280);
				*(char *)(v61 + 280) = v78;
				v79 = *(char *)(v62 + 320);
				*(char *)(v61 + 320) = v79;
				v80 = *(char *)(v62 + 360);
				*(char *)(v61 + 360) = v80;
				v81 = *(char *)(v62 + 400);
				*(char *)(v61 + 400) = v81;
				v82 = *(char *)(v62 + 440);
				*(char *)(v61 + 440) = v82;
				v83 = *(char *)(v62 + 480);
				*(char *)(v61 + 480) = v83;
				v84 = *(char *)(v62 + 520);
				*(char *)(v61 + 520) = v84;
				v85 = *(char *)(v62 + 560);
				*(char *)(v61 + 560) = v85;
				v86 = *(char *)(v62 + 600);
				*(char *)(v61 + 600) = v86;
				v87 = *(char *)(v62 + 640);
				*(char *)(v61 + 640) = v87;
				v88 = *(char *)(v62 + 680);
				*(char *)(v61 + 680) = v88;
				v89 = *(char *)(v62 + 720);
				*(char *)(v61 + 720) = v89;
				v90 = *(char *)(v62 + 760);
				*(char *)(v61 + 760) = v90;
				v91 = *(char *)(v62 + 800);
				*(char *)(v61 + 800) = v91;
				v92 = *(char *)(v62 + 840);
				*(char *)(v61 + 840) = v92;
				v93 = *(char *)(v62 + 880);
				*(char *)(v61 + 880) = v93;
				v94 = *(char *)(v62 + 920);
				*(char *)(v61 + 920) = v94;
				v95 = *(char *)(v62 + 960);
				*(char *)(v61 + 960) = v95;
				v96 = *(char *)(v62 + 1000);
				*(char *)(v61 + 1000) = v96;
				v97 = *(char *)(v62 + 1040);
				*(char *)(v61 + 1040) = v97;
				v98 = *(char *)(v62 + 1080);
				*(char *)(v61 + 1080) = v98;
				v99 = *(char *)(v62 + 1120);
				*(char *)(v61 + 1120) = v99;
				v100 = *(char *)(v62 + 1160);
				*(char *)(v61 + 1160) = v100;
				v101 = *(char *)(v62 + 1200);
				*(char *)(v61 + 1200) = v101;
				v102 = *(char *)(v62 + 1240);
				*(char *)(v61 + 1240) = v102;
				v103 = *(char *)(v62 + 1280);
				*(char *)(v61 + 1280) = v103;
				v104 = *(char *)(v62 + 1320);
				*(char *)(v61 + 1320) = v104;
				v105 = *(char *)(v62 + 1360);
				*(char *)(v61 + 1360) = v105;
				v106 = *(char *)(v62 + 1400);
				*(char *)(v61 + 1400) = v106;
				v107 = *(char *)(v62 + 1440);
				*(char *)(v61 + 1440) = v107;
				v108 = *(char *)(v62 + 1480);
				*(char *)(v61 + 1480) = v108;
				v109 = *(char *)(v62 + 1520);
				*(char *)(v61 + 1520) = v109;
				v69 = v62;
				g33 = v69 + 1;
				*(char *)(v61 + 1560) = *(char *)(v69 + 1560);
				v72 = v61 + 1;
				g32 = v72;
				v73--;
				// continue -> 0x4b64c
			}
			int32_t result2 = function_4a27c(0); // 0x4b8e8
			// branch -> 0x4b8ec
			// 0x4b8ec
			g10 = v1;
			return result2;
		}
	}
	// 0x4b5ac
	result3 = DRLG_CheckQuests(*(int32_t *)g19, *(int32_t *)g36);
	v63 = g30;
	if (*(char *)v63 == 15) {
		// 0x4b5c4
		g31 = 0;
		v64 = g33;
		v60 = v64;
		v65 = v64;
		// branch -> 0x4b5cc
		while (true) {
			// 0x4b5cc
			g36 = 0;
			g35 = v65;
			v70 = result3;
			v67 = 0;
			v66 = v65;
			// branch -> 0x4b5d4
			goto lab_0x4b5d4;
		}
	}
	if (*(char *)v63 == 16) {
		// 0x4b640
		v3 = 0;
		*(char *)g32 = *(char *)g33;
		*(char *)(g32 + 40) = *(char *)(g33 + 40);
		*(char *)(g32 + 80) = *(char *)(g33 + 80);
		*(char *)(g32 + 120) = *(char *)(g33 + 120);
		*(char *)(g32 + 160) = *(char *)(g33 + 160);
		*(char *)(g32 + 200) = *(char *)(g33 + 200);
		*(char *)(g32 + 240) = *(char *)(g33 + 240);
		*(char *)(g32 + 280) = *(char *)(g33 + 280);
		*(char *)(g32 + 320) = *(char *)(g33 + 320);
		*(char *)(g32 + 360) = *(char *)(g33 + 360);
		*(char *)(g32 + 400) = *(char *)(g33 + 400);
		*(char *)(g32 + 440) = *(char *)(g33 + 440);
		*(char *)(g32 + 480) = *(char *)(g33 + 480);
		*(char *)(g32 + 520) = *(char *)(g33 + 520);
		*(char *)(g32 + 560) = *(char *)(g33 + 560);
		*(char *)(g32 + 600) = *(char *)(g33 + 600);
		*(char *)(g32 + 640) = *(char *)(g33 + 640);
		*(char *)(g32 + 680) = *(char *)(g33 + 680);
		*(char *)(g32 + 720) = *(char *)(g33 + 720);
		*(char *)(g32 + 760) = *(char *)(g33 + 760);
		*(char *)(g32 + 800) = *(char *)(g33 + 800);
		*(char *)(g32 + 840) = *(char *)(g33 + 840);
		*(char *)(g32 + 880) = *(char *)(g33 + 880);
		*(char *)(g32 + 920) = *(char *)(g33 + 920);
		*(char *)(g32 + 960) = *(char *)(g33 + 960);
		*(char *)(g32 + 1000) = *(char *)(g33 + 1000);
		*(char *)(g32 + 1040) = *(char *)(g33 + 1040);
		*(char *)(g32 + 1080) = *(char *)(g33 + 1080);
		*(char *)(g32 + 1120) = *(char *)(g33 + 1120);
		*(char *)(g32 + 1160) = *(char *)(g33 + 1160);
		*(char *)(g32 + 1200) = *(char *)(g33 + 1200);
		*(char *)(g32 + 1240) = *(char *)(g33 + 1240);
		*(char *)(g32 + 1280) = *(char *)(g33 + 1280);
		*(char *)(g32 + 1320) = *(char *)(g33 + 1320);
		*(char *)(g32 + 1360) = *(char *)(g33 + 1360);
		*(char *)(g32 + 1400) = *(char *)(g33 + 1400);
		*(char *)(g32 + 1440) = *(char *)(g33 + 1440);
		*(char *)(g32 + 1480) = *(char *)(g33 + 1480);
		*(char *)(g32 + 1520) = *(char *)(g33 + 1520);
		v68 = g33;
		v62 = v68 + 1;
		*(char *)(g32 + 1560) = *(char *)(v68 + 1560);
		v71 = g32 + 1;
		v61 = v71;
		v3++;
		*(char *)v71 = *(char *)v62;
		*(char *)(v61 + 40) = *(char *)(v62 + 40);
		*(char *)(v61 + 80) = *(char *)(v62 + 80);
		v74 = *(char *)(v62 + 120);
		*(char *)(v61 + 120) = v74;
		v75 = *(char *)(v62 + 160);
		*(char *)(v61 + 160) = v75;
		v76 = *(char *)(v62 + 200);
		*(char *)(v61 + 200) = v76;
		v77 = *(char *)(v62 + 240);
		*(char *)(v61 + 240) = v77;
		v78 = *(char *)(v62 + 280);
		*(char *)(v61 + 280) = v78;
		v79 = *(char *)(v62 + 320);
		*(char *)(v61 + 320) = v79;
		v80 = *(char *)(v62 + 360);
		*(char *)(v61 + 360) = v80;
		v81 = *(char *)(v62 + 400);
		*(char *)(v61 + 400) = v81;
		v82 = *(char *)(v62 + 440);
		*(char *)(v61 + 440) = v82;
		v83 = *(char *)(v62 + 480);
		*(char *)(v61 + 480) = v83;
		v84 = *(char *)(v62 + 520);
		*(char *)(v61 + 520) = v84;
		v85 = *(char *)(v62 + 560);
		*(char *)(v61 + 560) = v85;
		v86 = *(char *)(v62 + 600);
		*(char *)(v61 + 600) = v86;
		v87 = *(char *)(v62 + 640);
		*(char *)(v61 + 640) = v87;
		v88 = *(char *)(v62 + 680);
		*(char *)(v61 + 680) = v88;
		v89 = *(char *)(v62 + 720);
		*(char *)(v61 + 720) = v89;
		v90 = *(char *)(v62 + 760);
		*(char *)(v61 + 760) = v90;
		v91 = *(char *)(v62 + 800);
		*(char *)(v61 + 800) = v91;
		v92 = *(char *)(v62 + 840);
		*(char *)(v61 + 840) = v92;
		v93 = *(char *)(v62 + 880);
		*(char *)(v61 + 880) = v93;
		v94 = *(char *)(v62 + 920);
		*(char *)(v61 + 920) = v94;
		v95 = *(char *)(v62 + 960);
		*(char *)(v61 + 960) = v95;
		v96 = *(char *)(v62 + 1000);
		*(char *)(v61 + 1000) = v96;
		v97 = *(char *)(v62 + 1040);
		*(char *)(v61 + 1040) = v97;
		v98 = *(char *)(v62 + 1080);
		*(char *)(v61 + 1080) = v98;
		v99 = *(char *)(v62 + 1120);
		*(char *)(v61 + 1120) = v99;
		v100 = *(char *)(v62 + 1160);
		*(char *)(v61 + 1160) = v100;
		v101 = *(char *)(v62 + 1200);
		*(char *)(v61 + 1200) = v101;
		v102 = *(char *)(v62 + 1240);
		*(char *)(v61 + 1240) = v102;
		v103 = *(char *)(v62 + 1280);
		*(char *)(v61 + 1280) = v103;
		v104 = *(char *)(v62 + 1320);
		*(char *)(v61 + 1320) = v104;
		v105 = *(char *)(v62 + 1360);
		*(char *)(v61 + 1360) = v105;
		v106 = *(char *)(v62 + 1400);
		*(char *)(v61 + 1400) = v106;
		v107 = *(char *)(v62 + 1440);
		*(char *)(v61 + 1440) = v107;
		v108 = *(char *)(v62 + 1480);
		*(char *)(v61 + 1480) = v108;
		v109 = *(char *)(v62 + 1520);
		*(char *)(v61 + 1520) = v109;
		v69 = v62;
		g33 = v69 + 1;
		*(char *)(v61 + 1560) = *(char *)(v69 + 1560);
		v72 = v61 + 1;
		g32 = v72;
		v73 = 19;
		// branch -> 0x4b64c
		while (v73 != 0) {
			// 0x4b64c
			*(char *)v72 = *(char *)g33;
			*(char *)(g32 + 40) = *(char *)(g33 + 40);
			*(char *)(g32 + 80) = *(char *)(g33 + 80);
			*(char *)(g32 + 120) = *(char *)(g33 + 120);
			*(char *)(g32 + 160) = *(char *)(g33 + 160);
			*(char *)(g32 + 200) = *(char *)(g33 + 200);
			*(char *)(g32 + 240) = *(char *)(g33 + 240);
			*(char *)(g32 + 280) = *(char *)(g33 + 280);
			*(char *)(g32 + 320) = *(char *)(g33 + 320);
			*(char *)(g32 + 360) = *(char *)(g33 + 360);
			*(char *)(g32 + 400) = *(char *)(g33 + 400);
			*(char *)(g32 + 440) = *(char *)(g33 + 440);
			*(char *)(g32 + 480) = *(char *)(g33 + 480);
			*(char *)(g32 + 520) = *(char *)(g33 + 520);
			*(char *)(g32 + 560) = *(char *)(g33 + 560);
			*(char *)(g32 + 600) = *(char *)(g33 + 600);
			*(char *)(g32 + 640) = *(char *)(g33 + 640);
			*(char *)(g32 + 680) = *(char *)(g33 + 680);
			*(char *)(g32 + 720) = *(char *)(g33 + 720);
			*(char *)(g32 + 760) = *(char *)(g33 + 760);
			*(char *)(g32 + 800) = *(char *)(g33 + 800);
			*(char *)(g32 + 840) = *(char *)(g33 + 840);
			*(char *)(g32 + 880) = *(char *)(g33 + 880);
			*(char *)(g32 + 920) = *(char *)(g33 + 920);
			*(char *)(g32 + 960) = *(char *)(g33 + 960);
			*(char *)(g32 + 1000) = *(char *)(g33 + 1000);
			*(char *)(g32 + 1040) = *(char *)(g33 + 1040);
			*(char *)(g32 + 1080) = *(char *)(g33 + 1080);
			*(char *)(g32 + 1120) = *(char *)(g33 + 1120);
			*(char *)(g32 + 1160) = *(char *)(g33 + 1160);
			*(char *)(g32 + 1200) = *(char *)(g33 + 1200);
			*(char *)(g32 + 1240) = *(char *)(g33 + 1240);
			*(char *)(g32 + 1280) = *(char *)(g33 + 1280);
			*(char *)(g32 + 1320) = *(char *)(g33 + 1320);
			*(char *)(g32 + 1360) = *(char *)(g33 + 1360);
			*(char *)(g32 + 1400) = *(char *)(g33 + 1400);
			*(char *)(g32 + 1440) = *(char *)(g33 + 1440);
			*(char *)(g32 + 1480) = *(char *)(g33 + 1480);
			*(char *)(g32 + 1520) = *(char *)(g33 + 1520);
			v68 = g33;
			v62 = v68 + 1;
			*(char *)(g32 + 1560) = *(char *)(v68 + 1560);
			v71 = g32 + 1;
			v61 = v71;
			v3++;
			*(char *)v71 = *(char *)v62;
			*(char *)(v61 + 40) = *(char *)(v62 + 40);
			*(char *)(v61 + 80) = *(char *)(v62 + 80);
			v74 = *(char *)(v62 + 120);
			*(char *)(v61 + 120) = v74;
			v75 = *(char *)(v62 + 160);
			*(char *)(v61 + 160) = v75;
			v76 = *(char *)(v62 + 200);
			*(char *)(v61 + 200) = v76;
			v77 = *(char *)(v62 + 240);
			*(char *)(v61 + 240) = v77;
			v78 = *(char *)(v62 + 280);
			*(char *)(v61 + 280) = v78;
			v79 = *(char *)(v62 + 320);
			*(char *)(v61 + 320) = v79;
			v80 = *(char *)(v62 + 360);
			*(char *)(v61 + 360) = v80;
			v81 = *(char *)(v62 + 400);
			*(char *)(v61 + 400) = v81;
			v82 = *(char *)(v62 + 440);
			*(char *)(v61 + 440) = v82;
			v83 = *(char *)(v62 + 480);
			*(char *)(v61 + 480) = v83;
			v84 = *(char *)(v62 + 520);
			*(char *)(v61 + 520) = v84;
			v85 = *(char *)(v62 + 560);
			*(char *)(v61 + 560) = v85;
			v86 = *(char *)(v62 + 600);
			*(char *)(v61 + 600) = v86;
			v87 = *(char *)(v62 + 640);
			*(char *)(v61 + 640) = v87;
			v88 = *(char *)(v62 + 680);
			*(char *)(v61 + 680) = v88;
			v89 = *(char *)(v62 + 720);
			*(char *)(v61 + 720) = v89;
			v90 = *(char *)(v62 + 760);
			*(char *)(v61 + 760) = v90;
			v91 = *(char *)(v62 + 800);
			*(char *)(v61 + 800) = v91;
			v92 = *(char *)(v62 + 840);
			*(char *)(v61 + 840) = v92;
			v93 = *(char *)(v62 + 880);
			*(char *)(v61 + 880) = v93;
			v94 = *(char *)(v62 + 920);
			*(char *)(v61 + 920) = v94;
			v95 = *(char *)(v62 + 960);
			*(char *)(v61 + 960) = v95;
			v96 = *(char *)(v62 + 1000);
			*(char *)(v61 + 1000) = v96;
			v97 = *(char *)(v62 + 1040);
			*(char *)(v61 + 1040) = v97;
			v98 = *(char *)(v62 + 1080);
			*(char *)(v61 + 1080) = v98;
			v99 = *(char *)(v62 + 1120);
			*(char *)(v61 + 1120) = v99;
			v100 = *(char *)(v62 + 1160);
			*(char *)(v61 + 1160) = v100;
			v101 = *(char *)(v62 + 1200);
			*(char *)(v61 + 1200) = v101;
			v102 = *(char *)(v62 + 1240);
			*(char *)(v61 + 1240) = v102;
			v103 = *(char *)(v62 + 1280);
			*(char *)(v61 + 1280) = v103;
			v104 = *(char *)(v62 + 1320);
			*(char *)(v61 + 1320) = v104;
			v105 = *(char *)(v62 + 1360);
			*(char *)(v61 + 1360) = v105;
			v106 = *(char *)(v62 + 1400);
			*(char *)(v61 + 1400) = v106;
			v107 = *(char *)(v62 + 1440);
			*(char *)(v61 + 1440) = v107;
			v108 = *(char *)(v62 + 1480);
			*(char *)(v61 + 1480) = v108;
			v109 = *(char *)(v62 + 1520);
			*(char *)(v61 + 1520) = v109;
			v69 = v62;
			g33 = v69 + 1;
			*(char *)(v61 + 1560) = *(char *)(v69 + 1560);
			v72 = v61 + 1;
			g32 = v72;
			v73--;
			// continue -> 0x4b64c
		}
		// 0x4b8e4
		result3 = function_4a27c(0);
		// branch -> 0x4b8ec
	}
	// 0x4b8ec
	g10 = v1;
	return result3;
}

// Address range: 0x4b900 - 0x4bbb8
int32_t function_4b900(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x756c); // 0x4b908
	g36 = v1;
	int32_t v2 = g35; // 0x4b90c
	g35 = *(int32_t *)(g23 - 0x757c);
	g34 = *(int32_t *)v1;
	int32_t v3 = function_c9948();                     // 0x4b928
	int32_t v4 = g11 + v3 + 232;                       // 0x4b930
	unsigned char v5 = *(char *)v4;                    // 0x4b930
	unsigned char v6 = *(char *)(v4 + 1);              // 0x4b930
	int32_t v7 = 256 * (int16_t)v6 | (int16_t)v5;      // 0x4b938
	unsigned char v8 = *(char *)(v3 + 234);            // 0x4b940
	unsigned char v9 = *(char *)(v3 + 235);            // 0x4b940
	int32_t v10 = 256 * (int16_t)v9 | (int16_t)v8;     // 0x4b948
	unsigned char v11 = *(char *)(v3 + 236);           // 0x4b950
	unsigned char v12 = *(char *)(v3 + 237);           // 0x4b950
	int32_t v13 = 256 * (int16_t)v12 | (int16_t)v11;   // 0x4b958
	unsigned char v14 = *(char *)(v3 + 238);           // 0x4b960
	unsigned char v15 = *(char *)(v3 + 239);           // 0x4b960
	int32_t v16 = 0;                                   // r11
	int32_t v17 = 256 * (int16_t)v15 | (int16_t)v14;   // 0x4b968
	int32_t v18 = 0;                                   // r10
	int32_t v19 = 0x10000 * (v7 + 1) / 0x10000;        // r8
	int32_t v20 = 0x10000 * (v10 + 1) / 0x10000;       // r7
	int32_t v21 = 0x10000 * (v13 + 1) / 0x10000;       // r6
	int32_t v22 = (0x10000 * v17 + 0x10000) / 0x10000; // r5
	int32_t v23 = 0;                                   // 0x4b9983
	                                                   // branch -> 0x4b984
lab_0x4b984:
	while (true) {
		int32_t v24 = 14;  // ctr
		int32_t v25 = 0;   // r9
		int32_t v26 = v23; // 0x4b998
		int32_t v27 = 0;   // 0x4b994
		// branch -> 0x4b990
		while (true) {
			int32_t v28 = *(int32_t *)g35; // 0x4b990
			*(int16_t *)(v28 + v27 + v26) = (int16_t)v19;
			int32_t v29 = v25 + *(int32_t *)g35; // 0x4b9a0
			*(int16_t *)(v18 + v29 + 224) = (int16_t)v20;
			int32_t v30 = v25 + *(int32_t *)g35; // 0x4b9b0
			*(int16_t *)(v18 + v30 + 2) = (int16_t)v21;
			int32_t v31 = v25;                   // 0x4b9c0
			int32_t v32 = v31 + *(int32_t *)g35; // 0x4b9c0
			v25 = v31 + 448;
			*(int16_t *)(v18 + v32 + 226) = (int16_t)v22;
			int32_t v33 = *(int32_t *)g35; // 0x4b9d0
			*(int16_t *)(v18 + v25 + v33) = (int16_t)v19;
			int32_t v34 = v25 + *(int32_t *)g35; // 0x4b9e0
			*(int16_t *)(v18 + v34 + 224) = (int16_t)v20;
			int32_t v35 = v25 + *(int32_t *)g35; // 0x4b9f0
			*(int16_t *)(v18 + v35 + 2) = (int16_t)v21;
			int32_t v36 = v25;                   // 0x4ba00
			int32_t v37 = v36 + *(int32_t *)g35; // 0x4ba00
			v25 = v36 + 448;
			*(int16_t *)(v18 + v37 + 226) = (int16_t)v22;
			int32_t v38 = *(int32_t *)g35; // 0x4ba10
			*(int16_t *)(v18 + v25 + v38) = (int16_t)v19;
			int32_t v39 = v25 + *(int32_t *)g35; // 0x4ba20
			*(int16_t *)(v18 + v39 + 224) = (int16_t)v20;
			int32_t v40 = v25 + *(int32_t *)g35; // 0x4ba30
			*(int16_t *)(v18 + v40 + 2) = (int16_t)v21;
			int32_t v41 = v25;                   // 0x4ba40
			int32_t v42 = v41 + *(int32_t *)g35; // 0x4ba40
			v25 = v41 + 448;
			*(int16_t *)(v18 + v42 + 226) = (int16_t)v22;
			int32_t v43 = *(int32_t *)g35; // 0x4ba50
			*(int16_t *)(v18 + v25 + v43) = (int16_t)v19;
			int32_t v44 = v25 + *(int32_t *)g35; // 0x4ba60
			*(int16_t *)(v18 + v44 + 224) = (int16_t)v20;
			int32_t v45 = v25 + *(int32_t *)g35; // 0x4ba70
			*(int16_t *)(v18 + v45 + 2) = (int16_t)v21;
			int32_t v46 = v25;                   // 0x4ba80
			int32_t v47 = v46 + *(int32_t *)g35; // 0x4ba80
			v25 = v46 + 448;
			*(int16_t *)(v18 + v47 + 226) = (int16_t)v22;
			int32_t v48 = v24 - 1; // 0x4ba90
			v24 = v48;
			if (v48 == 0) {
				int32_t v49 = v16 + 2; // 0x4ba94
				v16 = v49;
				int32_t v50 = v18 + 4; // 0x4ba98
				v18 = v50;
				if (v49 >= 112) {
					// break (via goto) -> 0x4baa4
					goto lab_0x4baa4;
				}
				v23 = v50;
				// continue (via goto) -> 0x4b984
				goto lab_0x4b984;
			} else {
				// 0x4b990
				v26 = v18;
				v27 = v25;
				// branch -> 0x4b990
				continue;
			}
		}
	lab_0x4baa4:;
		int32_t v51 = *(int32_t *)(g23 - 0x77cc); // 0x4baa4
		v21 = v51;
		v19 = 0;
		v20 = 32;
		// branch -> 0x4bab0
	lab_0x4bab0:
		while (true) {
			// 0x4bab0
			v24 = 40;
			v22 = 3584;
			int32_t v52 = v51; // 0x4bb30
			// branch -> 0x4bac0
			while (true) {
				unsigned char v53 = *(char *)v52; // 0x4bac0
				int32_t v54;                      // r29
				int32_t v55;
				int32_t v56; // 0x4bb28
				int32_t v57; // 0x4bb2c
				if (v53 == 0) {
					// 0x4bb14
					v54 = 0;
					v57 = 0;
					v56 = 0;
					v55 = 0;
					// branch -> 0x4bb24
				} else {
					int32_t v58 = 8 * (int32_t)v53 - 8;              // 0x4bacc
					int32_t v59 = v3 + v58;                          // 0x4bad0
					int32_t v60 = v59 + v58;                         // 0x4bad4
					unsigned char v61 = *(char *)v60;                // 0x4bad4
					unsigned char v62 = *(char *)(v60 + 1);          // 0x4bad4
					unsigned char v63 = *(char *)(v59 + 2);          // 0x4bae4
					unsigned char v64 = *(char *)(v59 + 3);          // 0x4bae4
					unsigned char v65 = *(char *)(v59 + 4);          // 0x4baf4
					unsigned char v66 = *(char *)(v59 + 5);          // 0x4baf4
					int32_t v67 = 256 * (int16_t)v66 | (int16_t)v65; // 0x4bafc
					v54 = v67 + 1;
					unsigned char v68 = *(char *)(v59 + 6); // 0x4bb04
					unsigned char v69 = *(char *)(v59 + 7); // 0x4bb04
					v57 = (int32_t)(256 * (int16_t)v64 | (int16_t)v63) + 1;
					v56 = (int32_t)(256 * (int16_t)v62 | (int16_t)v61) + 1;
					v55 = (int32_t)(256 * (int16_t)v69 | (int16_t)v68) + 1;
					// branch -> 0x4bb24
				}
				int32_t v70 = *(int32_t *)g35;         // 0x4bb24
				int32_t v71 = 0x10000 * v56 / 0x10000; // 0x4bb28
				int32_t v72 = v52 + 40;                // r4
				*(int16_t *)(v20 + v22 + v70) = (int16_t)v71;
				int32_t v73 = v22 + *(int32_t *)g35;   // 0x4bb48
				int32_t v74 = 0x10000 * v57 / 0x10000; // 0x4bb50
				*(int16_t *)(v20 + v73 + 224) = (int16_t)v74;
				int32_t v75 = v22 + *(int32_t *)g35;   // 0x4bb58
				int32_t v76 = 0x10000 * v54 / 0x10000; // 0x4bb60
				*(int16_t *)(v20 + v75 + 2) = (int16_t)v76;
				int32_t v77 = v22;                   // 0x4bb68
				int32_t v78 = v77 + *(int32_t *)g35; // 0x4bb68
				v22 = v77 + 448;
				int32_t v79 = 0x10000 * v55 / 0x10000; // 0x4bb74
				*(int16_t *)(v20 + v78 + 226) = (int16_t)v79;
				int32_t v80 = v24 - 1; // 0x4bb78
				v24 = v80;
				if (v80 == 0) {
					int32_t v81 = v19 + 1; // 0x4bb7c
					v19 = v81;
					int32_t v82 = v21 + 1; // 0x4bb80
					v21 = v82;
					v20 += 4;
					if (v81 >= 40) {
						// break (via goto) -> 0x4bb90
						goto lab_0x4bb90;
					}
					v51 = v82;
					// continue (via goto) -> 0x4bab0
					goto lab_0x4bab0;
				} else {
					// 0x4bb24
					v52 = v72;
					// branch -> 0x4bac0
					continue;
				}
			}
		lab_0x4bb90:;
			int32_t result = function_c9acc(*(int32_t *)g36); // 0x4bb94
			g35 = v2;
			return result;
		}
	}
}

// Address range: 0x4bbb8 - 0x4bc3c
int32_t CreateL4Dungeon(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g36; // 0x4bbb8
	g36 = a1;
	SetRndSeed();
	int32_t v2 = 96; // r5
	*(int32_t *)*(int32_t *)(g23 - 0x7530) = 16;
	int32_t v3 = 40; // r0
	*(int32_t *)*(int32_t *)(g23 - 0x7534) = 16;
	*(int32_t *)*(int32_t *)(g23 - 0x7538) = v2;
	*(int32_t *)*(int32_t *)(g23 - 0x753c) = v2;
	int32_t v4 = *(int32_t *)(g23 - 0x77b4); // 0x4bc00
	*(int32_t *)*(int32_t *)(g23 - 0x77b0) = v3;
	*(int32_t *)v4 = v3;
	function_469f0(DRLG_InitSetPC(v4));
	int32_t v5 = function_4ac94(g36); // 0x4bc18
	function_46a8c(function_4b900(v5));
	int32_t result = DRLG_SetPC(); // 0x4bc24
	g36 = v1;
	return result;
}