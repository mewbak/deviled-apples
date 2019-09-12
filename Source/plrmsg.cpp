
// Address range: 0xab6a4 - 0xab774
int32_t plrmsg_delay(int32_t a1)
{
	// 0xab6a4
	g34 = a1;
	int32_t v1 = GetTickCount(); // 0xab6cc
	int32_t result = v1;         // r3
	int32_t v2;
	if (g34 == 0) {
		int32_t *v3 = (int32_t *)(v2 - 0x4bec); // 0xab6d4
		int32_t v4 = *(int32_t *)(v2 - 0x58dc); // r4
		*v3 = *v3 + v1;
		int32_t *v5 = (int32_t *)v4; // 0xab6e4
		*v5 = *(int32_t *)(g23 - 0x4bec) + *v5;
		int32_t *v6 = (int32_t *)(v4 + 152); // 0xab6f4
		*v6 = *(int32_t *)(g23 - 0x4bec) + *v6;
		int32_t *v7 = (int32_t *)(v4 + 304); // 0xab704
		*v7 = *(int32_t *)(g23 - 0x4bec) + *v7;
		int32_t *v8 = (int32_t *)(v4 + 456); // 0xab714
		*v8 = *(int32_t *)(g23 - 0x4bec) + *v8;
		int32_t *v9 = (int32_t *)(v4 + 608); // 0xab724
		*v9 = *(int32_t *)(g23 - 0x4bec) + *v9;
		int32_t *v10 = (int32_t *)(v4 + 760); // 0xab734
		*v10 = *(int32_t *)(g23 - 0x4bec) + *v10;
		int32_t *v11 = (int32_t *)(v4 + 912); // 0xab744
		*v11 = *(int32_t *)(g23 - 0x4bec) + *v11;
		int32_t *v12 = (int32_t *)(v4 + 1064); // 0xab754
		int32_t v13 = *v12;                    // 0xab754
		result = v13;
		*v12 = *(int32_t *)(g23 - 0x4bec) + v13;
		// branch -> 0xab764
	} else {
		// 0xab6b8
		*(int32_t *)(v2 - 0x4bec) = -v1;
		// branch -> 0xab764
	}
	// 0xab764
	return result;
}

// Address range: 0xab774 - 0xab7f4
int32_t function_ab774(int32_t a1)
{
	char *v1 = (char *)(g23 - 0x4be8); // 0xab794
	int32_t v2 = (int32_t)*v1;         // 0xab794
	*v1 = (char)(v2 + 1);
	char *v3 = (char *)(g23 - 0x4be8);                  // 0xab7a4
	int32_t v4 = *(int32_t *)(g23 - 0x58dc) + 152 * v2; // r31
	unsigned char v5 = *v3 % 8;
	g34 = v5;
	*v3 = v5;
	*(char *)(v4 + 4) = (char)4;
	*(int32_t *)v4 = GetTickCount();
	g37 = a1;
	g38 = 144;
	int32_t result = function_e868c(v4 + 5); // r3
	*(char *)(v4 + 148) = 0;
	return result;
}

// Address range: 0xab7f4 - 0xab880
int32_t EventPlrMsg(int32_t a1, int32_t a2)
{
	int32_t v1 = g36;                  // 0xab7f4
	char *v2 = (char *)(g23 - 0x4be8); // 0xab828
	unsigned char v3 = *v2;            // 0xab828
	*v2 = v3 + 1;
	char *v4 = (char *)(g23 - 0x4be8); // 0xab83c
	g36 = *(int32_t *)(g23 - 0x58dc) + 152 * (int32_t)v3;
	unsigned char v5 = *v4 % 8;
	g34 = v5;
	*v4 = v5;
	*(char *)(g36 + 4) = (char)4;
	*(int32_t *)g36 = GetTickCount();
	int32_t result = function_e62a4(g36 + 5, a1, (int32_t)&a2); // 0xab868
	g36 = v1;
	return result;
}

// Address range: 0xab880 - 0xab924
int32_t function_ab880(char a1, int32_t a2)
{
	int32_t v1 = g36; // 0xab880
	g36 = *(int32_t *)(g23 - 0x77a8);
	int32_t v2 = a1;                   // r28
	char *v3 = (char *)(g23 - 0x4be8); // 0xab8ac
	unsigned char v4 = *v3;            // 0xab8ac
	*v3 = v4 + 1;
	int32_t v5 = 152 * (int32_t)v4; // 0xab8b8
	g34 = v5;
	char *v6 = (char *)(g23 - 0x4be8); // 0xab8bc
	g35 = *(int32_t *)(g23 - 0x58dc) + v5;
	*v6 = *v6 % 8;
	*(char *)(g35 + 4) = (char)v2;
	*(int32_t *)g35 = GetTickCount();
	g37 = *(int32_t *)(g23 - 0x58e0);
	g38 = g36 + 316 + 0x55ec * v2;
	int32_t result = sprintf(); // 0xab900
	g36 = v1;
	return result;
}

// Address range: 0xab924 - 0xab9f8
int32_t function_ab924(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x58dc); // 0xab92c
	int32_t v2 = GetTickCount();             // 0xab938
	int32_t result = v2;                     // r3
	int32_t v3 = 0;                          // r0
	int32_t v4 = v2;                         // 0xab95c
	int32_t v5 = v1;                         // 0xab958
	if (v2 - *(int32_t *)v1 >= 0x2711) {
		// 0xab954
		*(char *)(v1 + 5) = 0;
		v4 = result;
		v5 = v1;
		// branch -> 0xab958
	}
	int32_t v6 = v5 + 152; // 0xab958
	int32_t v7 = v4;       // 0xab970
	int32_t v8 = v6;       // 0xab96c
	if (v4 - *(int32_t *)v6 >= 0x2711) {
		// 0xab968
		*(char *)(v5 + 157) = (char)v3;
		v7 = result;
		v8 = v6;
		// branch -> 0xab96c
	}
	int32_t v9 = v8 + 152; // 0xab96c
	int32_t v10 = v7;      // 0xab984
	int32_t v11 = v9;      // 0xab980
	if (v7 - *(int32_t *)v9 >= 0x2711) {
		// 0xab97c
		*(char *)(v8 + 157) = (char)v3;
		v10 = result;
		v11 = v9;
		// branch -> 0xab980
	}
	int32_t v12 = v11 + 152; // 0xab980
	int32_t v13 = v10;       // 0xab998
	int32_t v14 = v12;       // 0xab994
	if (v10 - *(int32_t *)v12 >= 0x2711) {
		// 0xab990
		*(char *)(v11 + 157) = (char)v3;
		v13 = result;
		v14 = v12;
		// branch -> 0xab994
	}
	int32_t v15 = v14 + 152; // 0xab994
	int32_t v16 = v13;       // 0xab9ac
	int32_t v17 = v15;       // 0xab9a8
	if (v13 - *(int32_t *)v15 >= 0x2711) {
		// 0xab9a4
		*(char *)(v14 + 157) = (char)v3;
		v16 = result;
		v17 = v15;
		// branch -> 0xab9a8
	}
	int32_t v18 = v17 + 152; // 0xab9a8
	int32_t v19 = v16;       // 0xab9c0
	int32_t v20 = v18;       // 0xab9bc
	if (v16 - *(int32_t *)v18 >= 0x2711) {
		// 0xab9b8
		*(char *)(v17 + 157) = (char)v3;
		v19 = result;
		v20 = v18;
		// branch -> 0xab9bc
	}
	int32_t v21 = v20 + 152; // 0xab9bc
	int32_t v22 = v19;       // 0xab9d4
	int32_t v23 = v21;       // 0xab9d0
	if (v19 - *(int32_t *)v21 >= 0x2711) {
		// 0xab9cc
		*(char *)(v20 + 157) = (char)v3;
		v22 = result;
		v23 = v21;
		// branch -> 0xab9d0
	}
	// 0xab9d0
	if (v22 - *(int32_t *)(v23 + 152) >= 0x2711) {
		// 0xab9e0
		*(char *)(v23 + 157) = (char)v3;
		// branch -> 0xab9e4
	} else {
		result = v22;
	}
	// 0xab9e4
	return result;
}

// Address range: 0xab9f8 - 0xaba2c
int32_t function_ab9f8(int32_t a1)
{
	// 0xab9f8
	g34 = *(int32_t *)(g23 - 0x58dc);
	int32_t result = memset(); // r3
	int32_t v1;
	*(char *)(v1 - 0x4be8) = 0;
	return result;
}

// Address range: 0xaba2c - 0xabb38
int32_t PrintPlrMsg(int32_t a1, int32_t a2, int32_t a3, char *a4, int32_t a5)
{
	int32_t v1 = (int32_t)a4; // r6
	g27 = a1;
	int32_t v2 = g23 - 0x2da0; // 0xaba3c
	g33 = v2;
	g35 = g23 - 0x2e20;
	g28 = a3;
	g36 = g23 - 0x2ae8;
	g30 = a5;
	g32 = 0;
	int32_t v3 = 4 * a2 + *(int32_t *)(g23 - 0x7698); // 0xaba60
	g26 = v3;
	int32_t v4 = 0; // 0xabb0846
	                // branch -> 0xabb18
lab_0xabb18:
	while (true) {
		char *v5 = (char *)v1; // 0xabb18
		int32_t result;        // 0xabb34
		if (*v5 == 0) {
			result = a1;
		lab_0xabb24:
			// 0xabb24
			return result;
		}
		// 0xaba6c
		g31 = v1;
		int32_t v6 = g27 + *(int32_t *)v3; // 0xaba78
		g24 = v6;
		unsigned char v7 = *v5; // 0xaba803
		int32_t v8 = v7;        // 0xaba804
		int32_t v9;             // 0xaba8c
		int32_t v10;            // 0xabaa021
		int32_t v11;            // 0xabacc
		int32_t v12;            // 0xabae4
		int32_t v13;            // 0xabaf439
		int32_t v14;            // 0xabb08
		int32_t v15;            // 0xabb0c
		int32_t v16;            // 0xabb1815
		int32_t v17;            // 0xabb3451
		int32_t v18;            // 0xabb3453
		int32_t v19;            // 0xabb0010
		int32_t v20;            // 0xabb0044
		if (v7 == 0) {
			v9 = v1;
			// 0xaba8c
			g31 = v9;
			v19 = v9;
			// branch -> 0xabb00
		} else {
			int32_t v21 = v1; // 0xaba98
			int32_t v22 = v1; // 0xabb001031
			int32_t v23 = 0;  // 0xabaa8
			// branch -> 0xaba94
			int32_t v24; // 0xaba80
			while (true) {
				int32_t v25 = v21 + 1;                                               // 0xaba98
				unsigned char v26 = *(char *)((int32_t) * (char *)(v8 + g36) + g35); // 0xaba9c
				int32_t v27 = v26;                                                   // 0xaba9c
				int32_t v28 = v23 + 1 + (int32_t) * (char *)(v27 + v2);              // 0xabaac
				int32_t v29;                                                         // 0xabb001032
				if (v26 == 0) {
					// 0xabab4
					g31 = v25;
					v29 = v25;
					// branch -> 0xaba80
				} else {
					// 0xababc
					if (v28 >= g28) {
						v8 = v27;
						v19 = v22;
					lab_0xabb00:
						// 0xabb00
						v17 = v8;
						v15 = v3;
						v14 = v4;
						v10 = v2;
						v16 = v1;
						if (v1 < v19) {
							v18 = v8;
							v20 = v19;
							v13 = v2;
							v12 = v6;
							v11 = v1;
						lab_0xabacc:;
							int32_t v30; // 0xabaf4
							int32_t v31; // 0xabb3452
							int32_t v32; // 0xabad0
							while (true) {
								// 0xabacc
								v32 = v11 + 1;
								g29 = v32;
								unsigned char v33 = *(char *)(g36 + (int32_t) * (char *)v11); // 0xabad4
								unsigned char v34 = *(char *)(g35 + (int32_t)v33);            // 0xabad8
								int32_t v35 = v34;                                            // 0xabad8
								g25 = v35;
								v31 = v18;
								int32_t v36 = v20; // 0xabb00
								int32_t v37 = v12; // 0xabaf8
								int32_t v38 = v35; // 0xabaf4
								v30 = v13;
								if (v34 != 0) {
									// 0xabae4
									v31 = function_2d918(v12, v35, g30);
									v36 = g31;
									v32 = g29;
									v37 = g24;
									v38 = g25;
									v30 = g33;
									// branch -> 0xabaf4
								}
								int32_t v39 = v37 + 1 + (int32_t) * (char *)(v30 + v38); // 0xabafc
								g24 = v39;
								if (v32 >= v36) {
									// break -> 0xabb00
									break;
								}
								v18 = v31;
								v20 = v36;
								v13 = v30;
								v12 = v39;
								v11 = v32;
								// continue -> 0xabacc
							}
							// 0xabb00
							v17 = v31;
							v15 = g26;
							v14 = g32;
							v10 = v30;
							v16 = v32;
							// branch -> 0xabb08
						}
					lab_0xabb08:;
						int32_t v40 = v14 + 1; // 0xabb08
						g32 = v40;
						int32_t v41 = v15 + 40; // 0xabb0c
						g26 = v41;
						if (v40 == 3) {
							result = v17;
							// break (via goto) -> 0xabb24
							goto lab_0xabb24;
						}
						a1 = v17;
						v4 = v40;
						v2 = v10;
						v1 = v16;
						v3 = v41;
						// continue (via goto) -> 0xabb18
						goto lab_0xabb18;
					} else {
						v29 = v22;
					}
				}
				unsigned char v42 = *(char *)v25; // 0xaba80
				v24 = v42;
				if (v42 == 0) {
					v9 = v25;
					// break -> 0xaba8c
					break;
				}
				v21 = v25;
				v22 = v29;
				v23 = v28;
				v8 = v24;
				// continue -> 0xaba94
			}
			// 0xaba8c
			g31 = v9;
			v8 = v24;
			v19 = v9;
			// branch -> 0xabb00
			goto lab_0xabb00;
		}
		// 0xabb00
		if (v1 < v19) {
			v18 = v8;
			v20 = v19;
			v13 = v2;
			v12 = v6;
			v11 = v1;
			goto lab_0xabacc;
		}
		v17 = v8;
		v15 = v3;
		v14 = v4;
		v10 = v2;
		v16 = v1;
		goto lab_0xabb08;
	}
}

// Address range: 0xabb38 - 0xabc1c
int32_t DrawPlrMsg(void)
{
	int32_t v1 = g10;                        // 0xabb3c
	int32_t v2 = *(int32_t *)(g23 - 0x77c4); // 0xabb40
	g35 = 74;
	g36 = *(int32_t *)(g23 - 0x58e4);
	int32_t v3 = *(int32_t *)(g23 - 0x77c0); // 0xabb4c
	g33 = 230;
	int32_t v4 = *(int32_t *)(g23 - 0x77bc); // 0xabb54
	g32 = 620;
	int32_t result2 = v2; // 0xabc1811
	int32_t v5;           // 0xabbe0
	int32_t v6;           // 0xabbe4
	int32_t v7;           // 0xabbf8
	int32_t v8;           // 0xabbfc
	int32_t v9;           // 0xabc00
	int32_t result;       // 0xabc188
	char *v10;            // 0xabbcc
	int32_t v11;          // 0xabbc4
	if (*(int32_t *)v2 == 0) {
		int32_t v12 = *(int32_t *)(g23 - 0x77c8); // 0xabb70
		if (*(int32_t *)v12 == 0) {
			// 0xabba8
			if (*(int32_t *)v4 == 0) {
				// 0xabbb4
				if (*(int32_t *)v3 != 0) {
					// 0xabbc0
					g32 = 300;
					// branch -> 0xabbc4
				}
			} else {
				// 0xabbc0
				g32 = 300;
				// branch -> 0xabbc4
			}
			// 0xabbc4
			v11 = *(int32_t *)(g23 - 0x58dc);
			g31 = v11;
			int32_t v13 = v12; // 0xabc189
			int32_t v14 = 7;   // 0xabbf43
			v5 = 230;
			v6 = v11;
			// branch -> 0xabbcc
			while (true) {
				// 0xabbcc
				v10 = (char *)(v6 + 5);
				result = v13;
				v8 = v5;
				v7 = v6;
				v9 = v14;
				if (*v10 != 0) {
				lab_0xabbd8:;
					unsigned char v15 = *(char *)(g36 + (int32_t) * (char *)(v6 + 4)); // 0xabbe8
					result = PrintPlrMsg(g35, v5, g32, v10, (int32_t)v15);
					v8 = g33;
					v7 = g31;
					v9 = g30;
					// branch -> 0xabbf4
				}
			lab_0xabbf4:;
				int32_t v16 = v7 + 152; // 0xabbf8
				g31 = v16;
				int32_t v17 = v8 + 35; // 0xabbfc
				g33 = v17;
				if (v9 == 0) {
					// break -> 0xabc08
					break;
				}
				v13 = result;
				v14 = v9 - 1;
				v5 = v17;
				v6 = v16;
				// continue -> 0xabbcc
			}
			// 0xabc08
			g10 = v1;
			return result;
		}
		result2 = v12;
	}
	// 0xabb80
	if (*(int32_t *)v4 == 0) {
		// 0xabb8c
		if (*(int32_t *)v3 == 0) {
			// 0xabb9c
			g35 = 394;
			g32 = 300;
			// branch -> 0xabbc4
			// 0xabbc4
			v11 = *(int32_t *)(g23 - 0x58dc);
			g31 = v11;
			v5 = 230;
			v6 = v11;
			// branch -> 0xabbcc
			while (true) {
				// 0xabbcc
				v10 = (char *)(v6 + 5);
				if (*v10 == 0) {
					result = result2;
					v8 = v5;
					v7 = v6;
					v9 = 7;
					goto lab_0xabbf4;
				}
				goto lab_0xabbd8;
			}
		}
	}
	// 0xabc08
	g10 = v1;
	return result2;
}
