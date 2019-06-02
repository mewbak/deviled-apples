
// Address range: 0x87964 - 0x87a10
int32_t mpqapi_xor_buf(char *a1)
{
	int32_t v1 = (int32_t)a1;
	*a1 = (char)(v1 / 0x1000000 ^ 171);
	int32_t v2 = 1;        // r0
	int32_t v3 = v1 + 1;   // 0x87984
	char *v4 = (char *)v3; // 0x87984
	*v4 = *v4 ^ 86;
	uint32_t v5 = 0x3c1d86ac; // 0x87998
	uint32_t v6 = v2 % 32;    // 0x8799c
	int32_t v7 = v3 + 1;      // 0x879a0
	char *v8 = (char *)v7;    // 0x879a0
	*v8 = (char)((int32_t)*v8 ^ v5);
	uint32_t v9 = v5 >> 32 - v6 | v5 << v6; // 0x879ac
	uint32_t v10 = v2 % 32;                 // 0x879b0
	int32_t v11 = v7 + 1;                   // 0x879b4
	char *v12 = (char *)v11;                // 0x879b4
	*v12 = (char)((int32_t)*v12 ^ v9);
	uint32_t v13 = v9 >> 32 - v10 | v9 << v10; // 0x879c0
	uint32_t v14 = v2 % 32;                    // 0x879c4
	int32_t v15 = v11 + 1;                     // 0x879c8
	char *v16 = (char *)v15;                   // 0x879c8
	*v16 = (char)((int32_t)*v16 ^ v13);
	uint32_t v17 = v13 >> 32 - v14 | v13 << v14; // 0x879d4
	uint32_t v18 = v2 % 32;                      // 0x879d8
	int32_t v19 = v15 + 1;                       // 0x879dc
	char *v20 = (char *)v19;                     // 0x879dc
	*v20 = (char)((int32_t)*v20 ^ v17);
	uint32_t v21 = v17 >> 32 - v18 | v17 << v18; // 0x879e8
	uint32_t v22 = v2 % 32;                      // 0x879ec
	int32_t v23 = v21 >> 32 - v22 | v21 << v22;  // r6
	int32_t v24 = v19 + 1;                       // 0x879f0
	char *v25 = (char *)v24;                     // 0x879f0
	*v25 = (char)((int32_t)*v25 ^ v21);
	int32_t result = v24 + 1;   // 0x87a00
	char *v26 = (char *)result; // 0x87a00
	*v26 = (char)((int32_t)*v26 ^ v23 % 256);
	return result;
}

// Address range: 0x87a10 - 0x87ab0
int32_t mpqapi_reg_load_modification_time(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x87a10
	g34 = a1;
	int32_t v1 = g10; // 0x87a14
	int32_t v2 = g34; // r30
	memset();
	int32_t v3;
	int32_t v4 = *(int32_t *)(v3 - 0x75c8); // 0x87a34
	g34 = v4;
	int32_t v5 = *(int32_t *)(v3 - 0x5ca4);                       // 0x87a3c
	int32_t v6;                                                   // bp-24
	int32_t v7 = SRegLoadData(v4, v5, 0, v2, a2, (int32_t)&v6); // 0x87a4c
	if (v7 == 0) {
		// 0x87a5c
		// branch -> 0x87a98
		// 0x87a98
		g10 = v1;
		return 0;
	}
	int32_t result; // 0x87aac
	if (v6 == a2) {
		// 0x87a8c
		if (v6 > 7) {
			int32_t v8 = v2; // 0x87a7c
			mpqapi_xor_buf((char *)v8);
			int32_t v9 = a2 - 8; // 0x87a88
			while (v9 > 7) {
				// 0x87a7c
				v8 += 8;
				mpqapi_xor_buf((char *)v8);
				v9 -= 8;
				// continue -> 0x87a7c
			}
			// 0x87a94
			// branch -> 0x87a98
			// 0x87a98
			g10 = v1;
			return 1;
		}
		// 0x87a94
		result = 1;
		// branch -> 0x87a98
	} else {
		// 0x87a70
		result = 0;
		// branch -> 0x87a98
	}
	// 0x87a98
	g10 = v1;
	return result;
}

// Address range: 0x87ab0 - 0x87b34
int32_t mpqapi_reg_store_modification_time(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = a2; // r30
	int32_t v2;      // 0x87af8
	int32_t v3;      // 0x87af8
	int32_t v4;      // 0x87b00
	if (a2 > 7) {
		int32_t v5 = a1; // 0x87ae0
		while (true) {
			// 0x87ae0
			mpqapi_xor_buf((char *)v5);
			int32_t v6 = v1 - 8; // 0x87aec
			v1 = v6;
			if (v6 <= 7) {
				// 0x87af0
				// branch -> 0x87af8
				// 0x87af8
				v2 = g23;
				v3 = *(int32_t *)(v2 - 0x75c8);
				g34 = v3;
				v4 = *(int32_t *)(v2 - 0x5ca4);
				g37 = v4;
				return function_eb2d8(v3, v4, 0, a1, a2);
			}
			// 0x87ae0
			v5 += 8;
			// branch -> 0x87ae0
		}
	}
	// 0x87af8
	v2 = g23;
	v3 = *(int32_t *)(v2 - 0x75c8);
	g34 = v3;
	v4 = *(int32_t *)(v2 - 0x5ca4);
	g37 = v4;
	return function_eb2d8(v3, v4, 0, a1, a2);
}

// Address range: 0x87b34 - 0x87b44
int32_t mpqapi_set_hidden(int32_t a1, int32_t a2)
{
	// 0x87b34
	g37 = a2;
	return 1;
}

// Address range: 0x87b44 - 0x87b4c
int32_t mpqapi_store_default_time(int32_t result)
{
	// 0x87b44
	return result;
}

// Address range: 0x87b4c - 0x87be4
int32_t mpqapi_store_modified_time(int32_t result, int32_t a2)
{
	// 0x87b4c
	g37 = a2;
	int32_t v1 = g36;                        // 0x87b4c
	int32_t v2 = g10;                        // 0x87b50
	int32_t v3 = *(int32_t *)(g23 - 0x77f0); // 0x87b54
	g36 = g37;
	int32_t v4 = g35; // 0x87b5c
	g35 = result;
	unsigned char v5 = *(char *)v3; // 0x87b6c
	if (v5 == 1) {
		// 0x87bcc
		g36 = v1;
		g10 = v2;
		g35 = v4;
		return result;
	}
	// 0x87b78
	int32_t v6;       // bp-168
	int32_t v7 = &v6; // 0x87b78
	mpqapi_reg_load_modification_time(v7, 160, v3);
	g34 = g35;
	int32_t v8;       // bp-488
	int32_t v9 = &v8; // 0x87b88
	g37 = v9;
	int32_t v10 = FindFirstFile(g35, v9); // 0x87b8c
	g34 = v10;
	int32_t result2; // 0x87be0
	if (v10 != 0) {
		// 0x87b9c
		FindClose(v10);
		int32_t v11;                            // bp-160
		int32_t v12 = 16 * g36 + (int32_t)&v11; // 0x87bb0
		*(int32_t *)(v12 + 4) = (int32_t)v5;
		int32_t v13;
		result2 = mpqapi_reg_store_modification_time(v7, 160, v13);
		// branch -> 0x87bcc
	} else {
		result2 = 0;
	}
	// 0x87bcc
	g36 = v1;
	g10 = v2;
	g35 = v4;
	return result2;
}

// Address range: 0x87be4 - 0x87c78
int32_t mpqapi_store_creation_time(int32_t result, int32_t a2)
{
	// 0x87be4
	g37 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x77f0); // 0x87bec
	g36 = g37;
	int32_t v2 = g35; // 0x87bf4
	g35 = result;
	unsigned char v3 = *(char *)v1; // 0x87c04
	if (v3 == 1) {
		// 0x87c60
		g35 = v2;
		return result;
	}
	// 0x87c10
	int32_t v4;       // bp-168
	int32_t v5 = &v4; // 0x87c10
	mpqapi_reg_load_modification_time(v5, 160, v1);
	g34 = g35;
	int32_t v6;       // bp-488
	int32_t v7 = &v6; // 0x87c20
	g37 = v7;
	int32_t v8 = FindFirstFile(g35, v7); // 0x87c24
	g34 = v8;
	int32_t result2; // 0x87c74
	if (v8 != 0) {
		// 0x87c34
		FindClose(v8);
		int32_t v9 = 16 * g36 + v5; // 0x87c4c
		*(int32_t *)(v9 + 4) = (int32_t)v3;
		result2 = mpqapi_reg_store_modification_time(v5, 160, v9);
		// branch -> 0x87c60
	} else {
		result2 = 0;
	}
	// 0x87c60
	g35 = v2;
	return result2;
}

// Address range: 0x87c78 - 0x87dd8
int32_t function_87c78(int32_t *a1)
{
	int32_t v1 = (int32_t)a1;                // r3
	int32_t v2 = *(int32_t *)(g23 - 0x4d5c); // 0x87c90
	g37 = v2;
	int32_t v3 = 512; // 0x87db8
	int32_t v4 = 0;   // 0x87ccc
	// branch -> 0x87c94
	while (true) {
		// 0x87c94
		if (*(int32_t *)v2 == 0) {
			// 0x87ca0
			if (*(int32_t *)(v2 + 4) == 0) {
				// 0x87cac
				if (*(int32_t *)(v2 + 12) == 0) {
					// 0x87cb8
					if (*(int32_t *)(v2 + 8) == 0) {
						// 0x87cc4
						int32_t result; // 0x87cd0
						if (v1 != 0) {
							// 0x87ccc
							*(int32_t *)v1 = v4;
							result = g37;
							// branch -> 0x87cd0
						} else {
							result = v2;
						}
						// 0x87cd0
						// branch -> 0x87dc8
						// 0x87dc8
						return result;
					}
				}
			}
		}
		int32_t v5 = v2 + 16; // 0x87cd8
		int32_t v6 = v5;      // r4
		int32_t v7 = v4 | 1;  // 0x87cdc
		if (*(int32_t *)v5 == 0) {
			// 0x87ce8
			if (*(int32_t *)(v2 + 20) == 0) {
				// 0x87cf4
				if (*(int32_t *)(v2 + 28) == 0) {
					// 0x87d00
					if (*(int32_t *)(v2 + 24) == 0) {
						// 0x87d0c
						int32_t result2; // 0x87d18
						if (v1 != 0) {
							// 0x87d14
							*(int32_t *)v1 = v7;
							result2 = v6;
							// branch -> 0x87d18
						} else {
							result2 = v5;
						}
						// 0x87d18
						// branch -> 0x87dc8
						// 0x87dc8
						return result2;
					}
				}
			}
		}
		int32_t v8 = v2 + 32; // 0x87d20
		v6 = v8;
		int32_t v9 = v4 | 2; // 0x87d24
		if (*(int32_t *)v8 == 0) {
			// 0x87d30
			if (*(int32_t *)(v2 + 36) == 0) {
				// 0x87d3c
				if (*(int32_t *)(v2 + 44) == 0) {
					// 0x87d48
					if (*(int32_t *)(v2 + 40) == 0) {
						// 0x87d54
						int32_t result3; // 0x87d60
						if (v1 != 0) {
							// 0x87d5c
							*(int32_t *)v1 = v9;
							result3 = v6;
							// branch -> 0x87d60
						} else {
							result3 = v8;
						}
						// 0x87d60
						// branch -> 0x87dc8
						// 0x87dc8
						return result3;
					}
				}
			}
		}
		int32_t result4 = v2 + 48; // 0x87d68
		int32_t v10 = v4 | 3;      // 0x87d6c
		if (*(int32_t *)result4 == 0) {
			// 0x87d78
			if (*(int32_t *)(v2 + 52) == 0) {
				// 0x87d84
				if (*(int32_t *)(v2 + 60) == 0) {
					// 0x87d90
					if (*(int32_t *)(v2 + 56) == 0) {
						// 0x87d9c
						if (v1 != 0) {
							// 0x87da4
							*(int32_t *)v1 = v10;
							// branch -> 0x87da8
						}
						// 0x87da8
						// branch -> 0x87dc8
						// 0x87dc8
						return result4;
					}
				}
			}
		}
		int32_t v11 = v2 + 64; // 0x87db4
		g37 = v11;
		int32_t v12 = v3 - 1; // 0x87db8
		if (v12 == 0) {
			// break -> 0x87dbc
			break;
		}
		v3 = v12;
		v4 += 4;
		v2 = v11;
		// continue -> 0x87c94
	}
	// 0x87dbc
	app_fatal(*(int32_t *)(g23 - 0x5ca8));
	// branch -> 0x87dc8
	// 0x87dc8
	return 0;
}

// Address range: 0x87dd8 - 0x87edc
int32_t function_87dd8(int32_t a1, int32_t a2)
{
	// 0x87dd8
	g37 = a2;
	int32_t v1 = g36; // 0x87dd8
	int32_t v2 = g35; // 0x87de0
	int32_t v3 = g37; // 0x87de4
	g35 = v3;
	int32_t v4 = g33; // 0x87de8
	g33 = a1;
	int32_t v5 = a1 + v3; // 0x87df0
	g36 = v5;
	int32_t v6 = 2048;                       // 0x87e78
	int32_t v7 = *(int32_t *)(g23 - 0x4d5c); // 0x87e74
	// branch -> 0x87e08
	int32_t result2; // r3
	while (true) {
		int32_t v8 = *(int32_t *)v7; // 0x87e08
		result2 = v8;
		int32_t v9; // 0x87e78
		if (v8 != 0) {
			// 0x87e14
			if (*(int32_t *)(v7 + 12) == 0) {
				// 0x87e20
				if (*(int32_t *)(v7 + 8) == 0) {
					int32_t v10 = *(int32_t *)(v7 + 4); // 0x87e2c
					g37 = v10;
					int32_t result; // 0x87e6c
					if (a1 == v10 + v8) {
						// 0x87e3c
						g33 = v8;
						// branch -> 0x87e54
						// 0x87e54
						g35 = v10 + v3;
						g34 = v7;
						memset();
						result = function_87dd8(g33, g35);
						// branch -> 0x87ec0
						// 0x87ec0
						g36 = v1;
						g35 = v2;
						g33 = v4;
						return result;
					}
					// 0x87e48
					if (v8 == v5) {
						// 0x87e50
						// branch -> 0x87e54
						// 0x87e54
						g35 = v10 + v3;
						g34 = v7;
						memset();
						result = function_87dd8(g33, g35);
						// branch -> 0x87ec0
						// 0x87ec0
						g36 = v1;
						g35 = v2;
						g33 = v4;
						return result;
					}
					// 0x87e74
					v9 = v6 - 1;
					if (v9 == 0) {
						// break -> 0x87e7c
						break;
					}
					v6 = v9;
					v7 += 16;
					// continue -> 0x87e08
					continue;
				}
			}
		}
		// 0x87e74
		v9 = v6 - 1;
		if (v9 == 0) {
			// break -> 0x87e7c
			break;
		}
		v6 = v9;
		v7 += 16;
		// continue -> 0x87e08
	}
	int32_t v11 = v5; // 0x87e94
	if (v5 > *(int32_t *)(g23 - 0x4d64)) {
		// 0x87e88
		result2 = app_fatal(*(int32_t *)(g23 - 0x5cac));
		v11 = g36;
		// branch -> 0x87e90
	}
	int32_t *v12 = (int32_t *)(g23 - 0x4d64); // 0x87e90
	if (*v12 == v11) {
		// 0x87e9c
		*v12 = g33;
		// branch -> 0x87ec0
	} else {
		int32_t v13 = function_87c78(NULL); // 0x87ea8
		result2 = v13;
		*(int32_t *)v13 = g33;
		int32_t v14 = 0; // r0
		*(int32_t *)(result2 + 4) = g35;
		*(int32_t *)(result2 + 8) = v14;
		*(int32_t *)(result2 + 12) = v14;
		// branch -> 0x87ec0
	}
	// 0x87ec0
	g36 = v1;
	g35 = v2;
	g33 = v4;
	return result2;
}

// Address range: 0x87edc - 0x87f98
int32_t function_87edc(int32_t a1, int32_t *a2)
{
	int32_t v1 = (int32_t)a2;                // r4
	int32_t v2 = g10;                        // 0x87ee0
	int32_t v3 = *(int32_t *)(g23 - 0x4d5c); // 0x87ef4
	int32_t v4 = 2048;                       // 0x87f6c
	// branch -> 0x87ef8
	while (true) {
		// 0x87ef8
		int32_t v5; // 0x87f6c
		if (*(int32_t *)v3 != 0) {
			// 0x87f04
			if (*(int32_t *)(v3 + 12) == 0) {
				// 0x87f10
				if (*(int32_t *)(v3 + 8) == 0) {
					// 0x87f1c
					if (*(int32_t *)(v3 + 4) >= a1) {
						// 0x87f28
						*(int32_t *)v1 = a1;
						int32_t *v6 = (int32_t *)v3; // 0x87f2c
						*v6 = a1 + *v6;
						int32_t *v7 = (int32_t *)(v3 + 4); // 0x87f38
						*v7 = *v7 - a1;
						if (*(int32_t *)(v3 + 4) != 0) {
							// 0x87f84
							g10 = v2;
							return g36;
						}
						// 0x87f50
						g34 = v3;
						memset();
						// branch -> 0x87f84
						// 0x87f84
						g10 = v2;
						return g36;
					}
					// 0x87f68
					v5 = v4 - 1;
					if (v5 == 0) {
						// break -> 0x87f70
						break;
					}
					v4 = v5;
					v3 += 16;
					// continue -> 0x87ef8
					continue;
				}
			}
		}
		// 0x87f68
		v5 = v4 - 1;
		if (v5 == 0) {
			// break -> 0x87f70
			break;
		}
		v4 = v5;
		v3 += 16;
		// continue -> 0x87ef8
	}
	// 0x87f70
	*(int32_t *)v1 = a1;
	int32_t *v8 = (int32_t *)(g23 - 0x4d64); // 0x87f74
	*v8 = a1 + *v8;
	// branch -> 0x87f84
	// 0x87f84
	g10 = v2;
	return g37;
}

// Address range: 0x87f98 - 0x8801c
int32_t function_87f98(uint32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x4d60);   // 0x87f98
	int32_t result = a1 % 2048;                // 0x87f9c
	int32_t v2 = 16 * result;                  // 0x87ffc14
	int32_t *v3 = (int32_t *)((v2 | 12) + v1); // 0x8800417
	if (*v3 + (int32_t) "MoveWindow" == 0xffff) {
		// 0x88014
		return -1;
	}
	int32_t v4 = 2048; // 0x87fa823
	while (true) {
		// 0x87fa8
		if (v4 == 0) {
			// 0x88014
			return -1;
		}
		// 0x87fb4
		int32_t v5;  // 0x87ff8
		int32_t v6;  // 0x87ffc
		int32_t *v7; // 0x88004
		if (*(int32_t *)(v2 + v1) == a2) {
			// 0x87fc0
			if (*(int32_t *)((v2 || 4) + v1) == a3) {
				// 0x87fd0
				if (*(int32_t *)((v2 || 8) + v1) == a4) {
					// 0x87fe0
					if (*v3 + (int32_t) "MoveWindow" != 0xfffe) {
						// bb
						return result;
					}
					// 0x87ff4
					v5 = (result + 1) % 2048;
					v6 = 16 * v5;
					v7 = (int32_t *)((v6 | 12) + v1);
					if (*v7 + (int32_t) "MoveWindow" == 0xffff) {
						// break -> 0x88014
						break;
					}
					v3 = v7;
					v2 = v6;
					result = v5;
					v4--;
					// continue -> 0x87fa8
					continue;
				}
			}
		}
		// 0x87ff4
		v5 = (result + 1) % 2048;
		v6 = 16 * v5;
		v7 = (int32_t *)((v6 | 12) + v1);
		if (*v7 + (int32_t) "MoveWindow" == 0xffff) {
			// break -> 0x88014
			break;
		}
		v3 = v7;
		v2 = v6;
		result = v5;
		v4--;
		// continue -> 0x87fa8
	}
	// 0x88014
	return -1;
}

// Address range: 0x8801c - 0x881c0
int32_t WriteMPQHeader(int32_t a1)
{
	int32_t v1 = g10; // 0x88020
	int32_t v2;       // bp-148
	int32_t v3 = &v2; // 0x88030
	g34 = v3;
	memset();
	int32_t v4;       // bp-144
	int32_t v5 = &v4; // 0x88040
	g36 = v5;
	v2 = 0x4d50511a;
	v4 = 32;
	int32_t v6;
	int32_t *v7 = (int32_t *)(v6 - 0x4d54); // 0x88058
	int32_t v8 = *v7;                       // 0x88058
	g34 = v8;
	int32_t v9 = function_eb278(v8, 0); // bp-140
	int32_t v10 = &v9;                  // 0x88070
	g35 = v10;
	int16_t v11 = 0; // bp-136
	int16_t v12 = 3; // bp-134
	g33 = &v11;
	int32_t v13 = (int32_t) "MoveWindow" - 0x7f98; // bp-132
	g32 = &v12;
	int32_t v14 = &v13; // 0x88098
	int32_t v15 = 104;  // bp-128
	int32_t v16 = &v15; // 0x880a0
	g30 = v16;
	int32_t v17;        // bp-124
	int32_t v18 = &v17; // 0x880a4
	g29 = v18;
	int32_t v19;        // bp-120
	int32_t v20 = &v19; // 0x880a8
	g28 = v20;
	v17 = 2048;
	v19 = 2048;
	int32_t v21 = *v7; // 0x880c0
	g34 = v21;
	int32_t v22 = SetFilePointer(v21, 0, 0) + (int32_t) "MoveWindow"; // 0x880cc
	if (v22 == 0xffff) {
		// 0x880d8
		// branch -> 0x881ac
		// 0x881ac
		g10 = v1;
		return 0;
	}
	int32_t v23 = __asm_lwbrx(v22, v5); // 0x880e0
	v4 = v23;
	int32_t v24 = __asm_lwbrx(v23, v10); // 0x880e8
	v9 = v24;
	int32_t v25 = g33 + v24;                                    // 0x880f0
	unsigned char v26 = *(char *)(v25 + 1);                     // 0x880f0
	int16_t v27 = 256 * (int16_t)v26 | (int16_t) * (char *)v25; // 0x880f0
	v11 = v27;
	int32_t v28 = (int32_t)v27 + g32;                           // 0x880fc
	unsigned char v29 = *(char *)(v28 + 1);                     // 0x880fc
	int16_t v30 = 256 * (int16_t)v29 | (int16_t) * (char *)v28; // 0x880fc
	v12 = v30;
	int32_t v31 = __asm_lwbrx((int32_t)v30, v14); // 0x88108
	v13 = v31;
	int32_t v32 = __asm_lwbrx(v31, v16); // 0x88110
	v15 = v32;
	int32_t v33 = __asm_lwbrx(v32, v18); // 0x88118
	v17 = v33;
	int32_t v34 = __asm_lwbrx(v33, v20); // 0x88120
	v19 = v34;
	int32_t v35 = *(int32_t *)(g23 - 0x4d54); // 0x88138
	g34 = v35;
	int32_t v36;    // bp-152
	int32_t result; // 0x881bc
	if (function_eafd8(v35, v3, 104, (int32_t)&v36, 0) == 0) {
		// 0x8814c
		result = 0;
		// branch -> 0x881ac
	} else {
		int32_t v37 = __asm_lwbrx(v34, v5); // 0x88154
		v4 = v37;
		int32_t v38 = __asm_lwbrx(v37, v10); // 0x8815c
		v9 = v38;
		int32_t v39 = g33 + v38;                                    // 0x88164
		unsigned char v40 = *(char *)(v39 + 1);                     // 0x88164
		int16_t v41 = 256 * (int16_t)v40 | (int16_t) * (char *)v39; // 0x88164
		v11 = v41;
		int32_t v42 = (int32_t)v41 + g32;                           // 0x88170
		unsigned char v43 = *(char *)(v42 + 1);                     // 0x88170
		int16_t v44 = 256 * (int16_t)v43 | (int16_t) * (char *)v42; // 0x88170
		v12 = v44;
		int32_t v45 = __asm_lwbrx((int32_t)v44, v14); // 0x8817c
		v13 = v45;
		int32_t v46 = __asm_lwbrx(v45, v16); // 0x88184
		v15 = v46;
		int32_t v47 = __asm_lwbrx(v46, v18); // 0x8818c
		v17 = v47;
		v19 = __asm_lwbrx(v47, v20);
		result = __asm_rlwinm(llvm_ctlz_i32(104 - v36, true), 27, 24, 31);
		// branch -> 0x881ac
	}
	// 0x881ac
	g10 = v1;
	return result;
}

// Address range: 0x881c0 - 0x88380
int32_t mpqapi_write_block_table(int32_t a1)
{
	int32_t v1 = g36;                        // 0x881c0
	int32_t v2 = g10;                        // 0x881c4
	int32_t v3 = g35;                        // 0x881cc
	int32_t v4 = *(int32_t *)(g23 - 0x5cb0); // r29
	int32_t v5 = *(int32_t *)(g23 - 0x4d54); // 0x881e8
	g34 = v5;
	if (SetFilePointer(v5, 104, 0) + (int32_t) "MoveWindow" == 0xffff) {
		// 0x88364
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return 0;
	}
	// 0x88208
	int32_t v6;
	int32_t v7 = *(int32_t *)(v6 - 0x4d5c); // 0x8820c
	int32_t v8 = 1024;                      // ctr
	int32_t v9 = 1024;                      // 0x88214
	// branch -> 0x88214
	while (true) {
		int32_t v10 = __asm_lwbrx(v9, v7); // 0x88214
		*(int32_t *)v7 = v10;
		int32_t v11 = v7;                    // 0x8821c
		int32_t v12 = v11 + 4;               // 0x8821c
		int32_t v13 = __asm_lwbrx(v10, v12); // 0x88220
		*(int32_t *)v12 = v13;
		int32_t v14 = v11 + 8;               // 0x88228
		int32_t v15 = __asm_lwbrx(v13, v14); // 0x8822c
		*(int32_t *)v14 = v15;
		int32_t v16 = v11 + 12;              // 0x88234
		int32_t v17 = __asm_lwbrx(v15, v16); // 0x88238
		*(int32_t *)v16 = v17;
		int32_t v18 = v11 + 16;              // 0x88240
		int32_t v19 = __asm_lwbrx(v17, v18); // 0x88244
		*(int32_t *)v18 = v19;
		int32_t v20 = v11 + 20;              // 0x8824c
		int32_t v21 = __asm_lwbrx(v19, v20); // 0x88250
		*(int32_t *)v20 = v21;
		int32_t v22 = v11 + 24;              // 0x88258
		int32_t v23 = __asm_lwbrx(v21, v22); // 0x8825c
		*(int32_t *)v22 = v23;
		int32_t v24 = v11 + 28;              // 0x88264
		int32_t v25 = __asm_lwbrx(v23, v24); // 0x88268
		*(int32_t *)v24 = v25;
		int32_t v26 = v8 - 1; // 0x88274
		v8 = v26;
		if (v26 == 0) {
			// 0x88278
			g34 = v4;
			int32_t v27 = function_4d2a4(v4, 3); // 0x88280
			g38 = v27;
			int32_t v28 = *(int32_t *)(g23 - 0x4d5c); // 0x88288
			g35 = (int32_t) "MoveWindow";
			function_4cfa8((int32_t *)v28, (int32_t) "MoveWindow" - 0x8000, v27);
			int32_t v29 = *(int32_t *)(g23 - 0x4d54); // 0x88298
			g34 = v29;
			int32_t v30 = *(int32_t *)(g23 - 0x4d5c); // 0x882a0
			int32_t v31;                              // bp-24
			g36 = function_eafd8(v29, v30, g35 - 0x8000, (int32_t)&v31, 0);
			g34 = v4;
			int32_t v32 = function_4d2a4(v4, 3); // 0x882c0
			g38 = v32;
			function_4ccac((int32_t *)*(int32_t *)(g23 - 0x4d5c), g35 - 0x8000, v32);
			int32_t v33 = *(int32_t *)(g23 - 0x4d5c); // 0x882d8
			v7 = v33;
			v8 = 1024;
			int32_t v34 = 1024; // 0x882e0
			// branch -> 0x882e0
			while (true) {
				int32_t v35 = __asm_lwbrx(v34, v33); // 0x882e0
				*(int32_t *)v7 = v35;
				int32_t v36 = v7;                    // 0x882e8
				int32_t v37 = v36 + 4;               // 0x882e8
				int32_t v38 = __asm_lwbrx(v35, v37); // 0x882ec
				*(int32_t *)v37 = v38;
				int32_t v39 = v36 + 8;               // 0x882f4
				int32_t v40 = __asm_lwbrx(v38, v39); // 0x882f8
				*(int32_t *)v39 = v40;
				int32_t v41 = v36 + 12;              // 0x88300
				int32_t v42 = __asm_lwbrx(v40, v41); // 0x88304
				*(int32_t *)v41 = v42;
				int32_t v43 = v36 + 16;              // 0x8830c
				int32_t v44 = __asm_lwbrx(v42, v43); // 0x88310
				*(int32_t *)v43 = v44;
				int32_t v45 = v36 + 20;              // 0x88318
				int32_t v46 = __asm_lwbrx(v44, v45); // 0x8831c
				*(int32_t *)v45 = v46;
				int32_t v47 = v36 + 24;              // 0x88324
				int32_t v48 = __asm_lwbrx(v46, v47); // 0x88328
				*(int32_t *)v47 = v48;
				int32_t v49 = v36 + 28;              // 0x88330
				int32_t v50 = __asm_lwbrx(v48, v49); // 0x88334
				*(int32_t *)v49 = v50;
				int32_t v51 = v36 + 32; // 0x8833c
				v7 = v51;
				int32_t v52 = v8 - 1; // 0x88340
				v8 = v52;
				if (v52 == 0) {
					// 0x88344
					if (g36 == 0) {
						// 0x88364
						g36 = v1;
						g10 = v2;
						g35 = v3;
						return 0;
					}
					// 0x88350
					if (v31 == 0x8000) {
						// 0x8835c
						// branch -> 0x88364
						// 0x88364
						g36 = v1;
						g10 = v2;
						g35 = v3;
						return 1;
					}
					// 0x88364
					g36 = v1;
					g10 = v2;
					g35 = v3;
					return 0;
				}
				// 0x882e0
				v33 = v51;
				v34 = v50;
				// branch -> 0x882e0
			}
		} else {
			// 0x88214
			v7 = v11 + 32;
			v9 = v25;
			// branch -> 0x88214
			continue;
		}
	}
}

// Address range: 0x88380 - 0x88544
int32_t mpqapi_write_hash_table(int32_t a1)
{
	int32_t v1 = g10;                        // 0x88388
	int32_t v2 = g35;                        // 0x88390
	int32_t v3 = *(int32_t *)(g23 - 0x5cb4); // r29
	int32_t v4 = *(int32_t *)(g23 - 0x4d54); // 0x883ac
	g34 = v4;
	if (SetFilePointer(v4, (int32_t) "MoveWindow" - 0x7f98, 0) + (int32_t) "MoveWindow" == 0xffff) {
		// 0x88528
		g10 = v1;
		g35 = v2;
		return 0;
	}
	// 0x883cc
	int32_t v5;
	int32_t v6 = *(int32_t *)(v5 - 0x4d60); // 0x883d0
	int32_t v7 = 1024;                      // ctr
	int32_t v8 = 1024;                      // 0x883d8
	// branch -> 0x883d8
	while (true) {
		int32_t v9 = __asm_lwbrx(v8, v6); // 0x883d8
		*(int32_t *)v6 = v9;
		int32_t v10 = v6;                   // 0x883e0
		int32_t v11 = v10 + 4;              // 0x883e0
		int32_t v12 = __asm_lwbrx(v9, v11); // 0x883e4
		*(int32_t *)v11 = v12;
		int32_t v13 = v10 + 8;               // 0x883ec
		int32_t v14 = __asm_lwbrx(v12, v13); // 0x883f0
		*(int32_t *)v13 = v14;
		int32_t v15 = v10 + 12;              // 0x883f8
		int32_t v16 = __asm_lwbrx(v14, v15); // 0x883fc
		*(int32_t *)v15 = v16;
		int32_t v17 = v10 + 16;              // 0x88404
		int32_t v18 = __asm_lwbrx(v16, v17); // 0x88408
		*(int32_t *)v17 = v18;
		int32_t v19 = v10 + 20;              // 0x88410
		int32_t v20 = __asm_lwbrx(v18, v19); // 0x88414
		*(int32_t *)v19 = v20;
		int32_t v21 = v10 + 24;              // 0x8841c
		int32_t v22 = __asm_lwbrx(v20, v21); // 0x88420
		*(int32_t *)v21 = v22;
		int32_t v23 = v10 + 28;              // 0x88428
		int32_t v24 = __asm_lwbrx(v22, v23); // 0x8842c
		*(int32_t *)v23 = v24;
		int32_t v25 = v7 - 1; // 0x88438
		v7 = v25;
		if (v25 == 0) {
			// 0x8843c
			g34 = v3;
			int32_t v26 = function_4d2a4(v3, 3); // 0x88444
			g38 = v26;
			int32_t v27 = *(int32_t *)(g23 - 0x4d60); // 0x8844c
			g35 = (int32_t) "MoveWindow";
			function_4cfa8((int32_t *)v27, (int32_t) "MoveWindow" - 0x8000, v26);
			int32_t v28 = *(int32_t *)(g23 - 0x4d54); // 0x8845c
			g34 = v28;
			int32_t v29 = *(int32_t *)(g23 - 0x4d60); // 0x88464
			int32_t v30;                              // bp-24
			g36 = function_eafd8(v28, v29, g35 - 0x8000, (int32_t)&v30, 0);
			g34 = v3;
			int32_t v31 = function_4d2a4(v3, 3); // 0x88484
			g38 = v31;
			function_4ccac((int32_t *)*(int32_t *)(g23 - 0x4d60), g35 - 0x8000, v31);
			int32_t v32 = *(int32_t *)(g23 - 0x4d60); // 0x8849c
			v6 = v32;
			v7 = 1024;
			int32_t v33 = 1024; // 0x884a4
			// branch -> 0x884a4
			while (true) {
				int32_t v34 = __asm_lwbrx(v33, v32); // 0x884a4
				*(int32_t *)v6 = v34;
				int32_t v35 = v6;                    // 0x884ac
				int32_t v36 = v35 + 4;               // 0x884ac
				int32_t v37 = __asm_lwbrx(v34, v36); // 0x884b0
				*(int32_t *)v36 = v37;
				int32_t v38 = v35 + 8;               // 0x884b8
				int32_t v39 = __asm_lwbrx(v37, v38); // 0x884bc
				*(int32_t *)v38 = v39;
				int32_t v40 = v35 + 12;              // 0x884c4
				int32_t v41 = __asm_lwbrx(v39, v40); // 0x884c8
				*(int32_t *)v40 = v41;
				int32_t v42 = v35 + 16;              // 0x884d0
				int32_t v43 = __asm_lwbrx(v41, v42); // 0x884d4
				*(int32_t *)v42 = v43;
				int32_t v44 = v35 + 20;              // 0x884dc
				int32_t v45 = __asm_lwbrx(v43, v44); // 0x884e0
				*(int32_t *)v44 = v45;
				int32_t v46 = v35 + 24;              // 0x884e8
				int32_t v47 = __asm_lwbrx(v45, v46); // 0x884ec
				*(int32_t *)v46 = v47;
				int32_t v48 = v35 + 28;              // 0x884f4
				int32_t v49 = __asm_lwbrx(v47, v48); // 0x884f8
				*(int32_t *)v48 = v49;
				int32_t v50 = v35 + 32; // 0x88500
				v6 = v50;
				int32_t v51 = v7 - 1; // 0x88504
				v7 = v51;
				if (v51 == 0) {
					// 0x88508
					if (g36 == 0) {
						// 0x88528
						g10 = v1;
						g35 = v2;
						return 0;
					}
					// 0x88514
					if (v30 == 0x8000) {
						// 0x88520
						// branch -> 0x88528
						// 0x88528
						g10 = v1;
						g35 = v2;
						return 1;
					}
					// 0x88528
					g10 = v1;
					g35 = v2;
					return 0;
				}
				// 0x884a4
				v32 = v50;
				v33 = v49;
				// branch -> 0x884a4
			}
		} else {
			// 0x883d8
			v6 = v10 + 32;
			v8 = v24;
			// branch -> 0x883d8
			continue;
		}
	}
}

// Address range: 0x88544 - 0x88598
int32_t mpqapi_can_seek(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x4d54); // 0x88558
	g34 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x4d64); // 0x8855c
	int32_t result;                          // 0x88594
	if (SetFilePointer(v1, v2, 0) + (int32_t) "MoveWindow" == 0xffff) {
		// 0x88574
		result = 0;
		// branch -> 0x88588
	} else {
		// 0x8857c
		int32_t v3;
		int32_t v4 = *(int32_t *)(v3 - 0x4d54); // 0x8857c
		g34 = v4;
		result = function_eb260(v4);
		// branch -> 0x88588
	}
	// 0x88588
	return result;
}

// Address range: 0x88598 - 0x88814
int32_t ParseMPQHeader(int32_t *a1, int32_t a2)
{
	int32_t v1 = g10;                        // 0x8859c
	int32_t v2 = (int32_t)a1;                // r29
	int32_t v3 = *(int32_t *)(g23 - 0x4d54); // 0x885bc
	g34 = v3;
	int32_t v4 = function_eb278(v3, 0); // 0x885c0
	*(int32_t *)a2 = v4;
	int32_t v5; // r0
	int32_t v6;
	int32_t v7; // 0x887a8
	int32_t v8; // 0x88760
	int32_t v9; // 0x8878c
	if (v4 + (int32_t) "MoveWindow" != 0xffff) {
		// 0x885e4
		int32_t result; // 0x88810
		if (v4 <= 103) {
			// 0x885ec
			// branch -> 0x88760
			// 0x88760
			v8 = *(int32_t *)(g23 - 0x4d54);
			g34 = v8;
			if (SetFilePointer(v8, 0, 0) + (int32_t) "MoveWindow" == 0xffff) {
				// 0x88784
				// branch -> 0x887f8
				// 0x887f8
				g10 = v1;
				return 0;
			}
			// 0x8878c
			v9 = *(int32_t *)(v6 - 0x4d54);
			g34 = v9;
			if (function_eb260(v9) == 0) {
				// 0x887a0
				result = 0;
				// branch -> 0x887f8
			} else {
				// 0x887a8
				v7 = v2;
				g34 = v7;
				memset();
				*(int32_t *)v7 = 0x4d50511a;
				*(int32_t *)(v2 + 4) = 32;
				*(int16_t *)(v2 + 14) = 3;
				v5 = 1;
				*(int16_t *)(v2 + 12) = (int16_t)0;
				*(int32_t *)a2 = (int32_t) "lect";
				*(int32_t *)(g23 - 0x4d58) = v5;
				*(char *)(g23 - 0x4d68) = (char)v5;
				// branch -> 0x887f4
				// 0x887f4
				result = 1;
				// branch -> 0x887f8
			}
			// 0x887f8
			g10 = v1;
			return result;
		}
		int32_t v10 = *(int32_t *)(g23 - 0x4d54); // 0x885f4
		g34 = v10;
		int32_t v11;                                                  // bp-24
		int32_t v12 = function_eba88(v10, v2, 104, (int32_t)&v11, 0); // 0x88608
		if (v12 == 0 || v11 != 104) {
			// 0x88618
			// branch -> 0x88760
			// 0x88760
			v8 = *(int32_t *)(g23 - 0x4d54);
			g34 = v8;
			if (SetFilePointer(v8, 0, 0) + (int32_t) "MoveWindow" == 0xffff) {
				// 0x88784
				// branch -> 0x887f8
				// 0x887f8
				g10 = v1;
				return 0;
			}
			// 0x8878c
			v9 = *(int32_t *)(v6 - 0x4d54);
			g34 = v9;
			if (function_eb260(v9) == 0) {
				// 0x887a0
				result = 0;
				// branch -> 0x887f8
			} else {
				// 0x887a8
				v7 = v2;
				g34 = v7;
				memset();
				*(int32_t *)v7 = 0x4d50511a;
				*(int32_t *)(v2 + 4) = 32;
				*(int16_t *)(v2 + 14) = 3;
				v5 = 1;
				*(int16_t *)(v2 + 12) = (int16_t)0;
				*(int32_t *)a2 = (int32_t) "lect";
				*(int32_t *)(g23 - 0x4d58) = v5;
				*(char *)(g23 - 0x4d68) = (char)v5;
				// branch -> 0x887f4
				// 0x887f4
				result = 1;
				// branch -> 0x887f8
			}
			// 0x887f8
			g10 = v1;
			return result;
		}
		int32_t v13 = v2 + 4;                // 0x88634
		int32_t v14 = __asm_lwbrx(v13, v13); // 0x88638
		int32_t v15 = v2 + 8;                // 0x8863c
		*(int32_t *)(v2 + 4) = v14;
		*(int32_t *)(v2 + 8) = __asm_lwbrx(v15, v15);
		int32_t v16 = 2 * (v2 + 12);                                // 0x88650
		unsigned char v17 = *(char *)(v16 | 1);                     // 0x88650
		int16_t v18 = 256 * (int16_t)v17 | (int16_t) * (char *)v16; // 0x88650
		*(int16_t *)(v2 + 12) = v18;
		int32_t v19 = 2 * (v2 + 14);                                // 0x88660
		unsigned char v20 = *(char *)(v19 | 1);                     // 0x88660
		int16_t v21 = 256 * (int16_t)v20 | (int16_t) * (char *)v19; // 0x88660
		int32_t v22 = v2 + 16;                                      // 0x88664
		*(int16_t *)(v2 + 14) = v21;
		int32_t v23 = __asm_lwbrx(v22, v22); // 0x88670
		int32_t v24 = v2 + 20;               // 0x88674
		*(int32_t *)(v2 + 16) = v23;
		int32_t v25 = __asm_lwbrx(v24, v24); // 0x8867c
		int32_t v26 = v2 + 24;               // 0x88680
		*(int32_t *)(v2 + 20) = v25;
		int32_t v27 = __asm_lwbrx(v26, v26); // 0x88688
		int32_t v28 = v2 + 28;               // 0x8868c
		*(int32_t *)(v2 + 24) = v27;
		*(int32_t *)(v2 + 28) = __asm_lwbrx(v28, v28);
		if (v27 != 0x4d50511a || *(int32_t *)(v2 + 4) != 32 || *(int16_t *)(v2 + 12) != 0 || *(int16_t *)(v2 + 14) != 3 || *(int32_t *)(v2 + 8) != v4 || *(int32_t *)(v2 + 16) != 0x8068 || *(int32_t *)(v2 + 20) != 104 || *(int32_t *)(v2 + 24) != 2048) {
			// 0x886ac
			// branch -> 0x88760
			// 0x88760
			v8 = *(int32_t *)(g23 - 0x4d54);
			g34 = v8;
			if (SetFilePointer(v8, 0, 0) + (int32_t) "MoveWindow" == 0xffff) {
				// 0x88784
				// branch -> 0x887f8
				// 0x887f8
				g10 = v1;
				return 0;
			}
			// 0x8878c
			v9 = *(int32_t *)(v6 - 0x4d54);
			g34 = v9;
			if (function_eb260(v9) == 0) {
				// 0x887a0
				result = 0;
				// branch -> 0x887f8
			} else {
				// 0x887a8
				v7 = v2;
				g34 = v7;
				memset();
				*(int32_t *)v7 = 0x4d50511a;
				*(int32_t *)(v2 + 4) = 32;
				*(int16_t *)(v2 + 14) = 3;
				v5 = 1;
				*(int16_t *)(v2 + 12) = (int16_t)0;
				*(int32_t *)a2 = (int32_t) "lect";
				*(int32_t *)(g23 - 0x4d58) = v5;
				*(char *)(g23 - 0x4d68) = (char)v5;
				// branch -> 0x887f4
				// 0x887f4
				result = 1;
				// branch -> 0x887f8
			}
			// 0x887f8
			g10 = v1;
			return result;
		}
		// 0x88740
		if (*(int32_t *)(v2 + 28) == 2048) {
			// 0x88758
			// branch -> 0x887f4
			// 0x887f4
			// branch -> 0x887f8
			// 0x887f8
			g10 = v1;
			return 1;
		}
		// 0x8874c
		// branch -> 0x88760
		// 0x88760
		v8 = *(int32_t *)(g23 - 0x4d54);
		g34 = v8;
		if (SetFilePointer(v8, 0, 0) + (int32_t) "MoveWindow" == 0xffff) {
			// 0x88784
			// branch -> 0x887f8
			// 0x887f8
			g10 = v1;
			return 0;
		}
		// 0x8878c
		v9 = *(int32_t *)(v6 - 0x4d54);
		g34 = v9;
		if (function_eb260(v9) == 0) {
			// 0x887a0
			result = 0;
			// branch -> 0x887f8
		} else {
			// 0x887a8
			v7 = v2;
			g34 = v7;
			memset();
			*(int32_t *)v7 = 0x4d50511a;
			*(int32_t *)(v2 + 4) = 32;
			*(int16_t *)(v2 + 14) = 3;
			v5 = 1;
			*(int16_t *)(v2 + 12) = (int16_t)0;
			*(int32_t *)a2 = (int32_t) "lect";
			*(int32_t *)(g23 - 0x4d58) = v5;
			*(char *)(g23 - 0x4d68) = (char)v5;
			// branch -> 0x887f4
			// 0x887f4
			result = 1;
			// branch -> 0x887f8
		}
		// 0x887f8
		g10 = v1;
		return result;
	}
	// 0x885dc
	// branch -> 0x88760
	// 0x88760
	v8 = *(int32_t *)(g23 - 0x4d54);
	g34 = v8;
	if (SetFilePointer(v8, 0, 0) + (int32_t) "MoveWindow" == 0xffff) {
		// 0x88784
		// branch -> 0x887f8
	} else {
		// 0x8878c
		v9 = *(int32_t *)(v6 - 0x4d54);
		g34 = v9;
		if (function_eb260(v9) == 0) {
			// 0x887a0
			// branch -> 0x887f8
		} else {
			// 0x887a8
			v7 = v2;
			g34 = v7;
			memset();
			*(int32_t *)v7 = 0x4d50511a;
			*(int32_t *)(v2 + 4) = 32;
			*(int16_t *)(v2 + 14) = 3;
			v5 = 1;
			*(int16_t *)(v2 + 12) = (int16_t)0;
			*(int32_t *)a2 = (int32_t) "lect";
			*(int32_t *)(g23 - 0x4d58) = v5;
			*(char *)(g23 - 0x4d68) = (char)v5;
			// branch -> 0x887f4
			// 0x887f4
			// branch -> 0x887f8
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x88814 - 0x88884
int32_t function_88814(void)
{
	int32_t v1 = g34;                  // 0x88828
	int32_t v2 = function_4d2a4(2, 2); // 0x88834
	g34 = v1;
	int32_t v3 = function_4d2a4(v1, 1); // 0x88844
	g34 = v1;
	return function_87f98(function_4d2a4(v1, 0), v3, v2, 0);
}

// Address range: 0x88884 - 0x8890c
int32_t function_88884(void)
{
	int32_t v1 = g36;              // 0x88884
	int32_t v2 = g35;              // 0x8888c
	int32_t v3 = function_88814(); // 0x88898
	int32_t result;                // r3
	if (v3 + (int32_t) "MoveWindow" != 0xffff) {
		int32_t *v4 = (int32_t *)(*(int32_t *)(g23 - 0x4d60) + 16 * v3 + 12); // 0x888bc
		*v4 = -2;
		int32_t v5 = 16 * *v4 + *(int32_t *)(g23 - 0x4d5c); // 0x888cc
		g34 = v5;
		g36 = *(int32_t *)v5;
		g35 = *(int32_t *)(v5 + 4);
		memset();
		result = function_87dd8(g36, g35);
		*(int32_t *)(g23 - 0x4d58) = 1;
		// branch -> 0x888f4
	} else {
		result = v3;
	}
	// 0x888f4
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0x8890c - 0x8892c
int32_t function_8890c(int32_t a1)
{
	int32_t result = function_88884(); // 0x88918
	return result;
}

// Address range: 0x8892c - 0x8898c
int32_t function_8892c(int32_t a1)
{
	int32_t v1 = g36; // 0x8892c
	int32_t v2 = g10; // 0x88930
	int32_t v3 = g35; // 0x88938
	g35 = a1;
	g34 = 0;
	g15 = a1;
	g36 = 1;
	if (CurrentProc() == 0) {
		// 0x88974
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return 0;
	}
	int32_t v4; // bp-280
	g34 = &v4;
	function_88884();
	int32_t v5 = g36;
	g34 = v5;
	g15 = g35;
	g36 = v5 + 1;
	while (CurrentProc() != 0) {
		// 0x8894c
		g34 = &v4;
		function_88884();
		v5 = g36;
		g34 = v5;
		g15 = g35;
		g36 = v5 + 1;
		// continue -> 0x8894c
	}
	// 0x88974
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return 0;
}

// Address range: 0x8898c - 0x88be8
int32_t function_8898c(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x8898c
	g34 = a1;
	int32_t v1 = g10; // 0x88990
	g35 = a2;
	g31 = g34;
	g33 = function_4d2a4(0, 0);
	int32_t v2 = g31; // 0x889b4
	g34 = v2;
	g32 = function_4d2a4(v2, 1);
	int32_t v3 = g31; // 0x889c4
	g34 = v3;
	int32_t v4 = function_4d2a4(v3, 2); // 0x889cc
	g36 = v4;
	if (function_87f98(g33, g32, v4, 0) + (int32_t) "MoveWindow" != 0xffff) {
		// 0x889f4
		g37 = g31;
		app_fatal(*(int32_t *)(g23 - 0x5cb8));
		// branch -> 0x88a00
	}
	int32_t v5 = *(int32_t *)(g23 - 0x4d60); // 0x88a04
	g37 = v5;
	int32_t v6 = 256;        // ctr
	int32_t v7 = g33 % 2048; // 0x88a0c
	g33 = v7;
	int32_t v8 = 2047; // r5
	// branch -> 0x88a14
	while (true) {
		int32_t v9 = *(int32_t *)((16 * v7 | 12) + v5) + (int32_t) "MoveWindow"; // 0x88a20
		if (v9 != 0xffff) {
			// 0x88a2c
			if (v9 != 0xfffe) {
				uint32_t v10 = v7 + 1; // 0x88a34
				g33 = v10 % 2048;
				int32_t v11 = *(int32_t *)(g37 + __asm_rlwinm(v10, 4, 17, 27) + 12); // 0x88a44
				int32_t v12 = v11 + (int32_t) "MoveWindow";                          // 0x88a48
				if (v12 != 0xffff) {
					// 0x88a54
					int32_t v13; // r6
					int32_t v14; // 0x88b9c
					if (v12 != 0xfffe) {
						int32_t v15 = g33;      // 0x88a5c
						uint32_t v16 = v15 + 1; // 0x88a5c
						v8--;
						int32_t v17 = __asm_rlwinm(v16, 4, 17, 27); // 0x88a64
						int32_t v18 = v16 % 2048;                   // 0x88a68
						g33 = v18;
						int32_t v19 = *(int32_t *)(g37 + v17 + 12) + (int32_t) "MoveWindow"; // 0x88a74
						if (v19 == 0xffff || v19 == 0xfffe) {
							// 0x88b74
							if (v8 <= 0xffffffff) {
								// 0x88b7c
								app_fatal(*(int32_t *)(g23 - 0x5cbc));
								// branch -> 0x88b84
							}
							// 0x88b84
							if (g35 != 0) {
								// 0x88b98
								v14 = 16 * g33;
								v13 = v14;
								*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
								g10 = v1;
								return g35;
							}
							// 0x88b8c
							g35 = function_87c78(&a3);
							// branch -> 0x88b98
							// 0x88b98
							v14 = 16 * g33;
							v13 = v14;
							*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
							g10 = v1;
							return g35;
						}
						// 0x88a88
						v8--;
						int32_t v20 = __asm_rlwinm(v18 + 1, 4, 17, 27); // 0x88a90
						int32_t v21 = (v15 + 2) % 2048;                 // 0x88a94
						g33 = v21;
						int32_t v22 = *(int32_t *)(g37 + v20 + 12) + (int32_t) "MoveWindow"; // 0x88aa0
						if (v22 == 0xffff || v22 == 0xfffe) {
							// 0x88b74
							if (v8 <= 0xffffffff) {
								// 0x88b7c
								app_fatal(*(int32_t *)(g23 - 0x5cbc));
								// branch -> 0x88b84
							}
							// 0x88b84
							if (g35 != 0) {
								// 0x88b98
								v14 = 16 * g33;
								v13 = v14;
								*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
								g10 = v1;
								return g35;
							}
							// 0x88b8c
							g35 = function_87c78(&a3);
							// branch -> 0x88b98
							// 0x88b98
							v14 = 16 * g33;
							v13 = v14;
							*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
							g10 = v1;
							return g35;
						}
						// 0x88ab4
						v8--;
						int32_t v23 = __asm_rlwinm(v21 + 1, 4, 17, 27); // 0x88abc
						int32_t v24 = (v15 + 3) % 2048;                 // 0x88ac0
						g33 = v24;
						int32_t v25 = *(int32_t *)(g37 + v23 + 12) + (int32_t) "MoveWindow"; // 0x88acc
						if (v25 == 0xffff || v25 == 0xfffe) {
							// 0x88b74
							if (v8 <= 0xffffffff) {
								// 0x88b7c
								app_fatal(*(int32_t *)(g23 - 0x5cbc));
								// branch -> 0x88b84
							}
							// 0x88b84
							if (g35 != 0) {
								// 0x88b98
								v14 = 16 * g33;
								v13 = v14;
								*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
								g10 = v1;
								return g35;
							}
							// 0x88b8c
							g35 = function_87c78(&a3);
							// branch -> 0x88b98
							// 0x88b98
							v14 = 16 * g33;
							v13 = v14;
							*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
							g10 = v1;
							return g35;
						}
						// 0x88ae0
						v8--;
						int32_t v26 = __asm_rlwinm(v24 + 1, 4, 17, 27); // 0x88ae8
						int32_t v27 = (v15 + 4) % 2048;                 // 0x88aec
						g33 = v27;
						int32_t v28 = *(int32_t *)(g37 + v26 + 12) + (int32_t) "MoveWindow"; // 0x88af8
						if (v28 == 0xffff || v28 == 0xfffe) {
							// 0x88b74
							if (v8 <= 0xffffffff) {
								// 0x88b7c
								app_fatal(*(int32_t *)(g23 - 0x5cbc));
								// branch -> 0x88b84
							}
							// 0x88b84
							if (g35 != 0) {
								// 0x88b98
								v14 = 16 * g33;
								v13 = v14;
								*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
								g10 = v1;
								return g35;
							}
							// 0x88b8c
							g35 = function_87c78(&a3);
							// branch -> 0x88b98
							// 0x88b98
							v14 = 16 * g33;
							v13 = v14;
							*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
							g10 = v1;
							return g35;
						}
						// 0x88b0c
						v8--;
						int32_t v29 = __asm_rlwinm(v27 + 1, 4, 17, 27); // 0x88b14
						int32_t v30 = (v15 + 5) % 2048;                 // 0x88b18
						g33 = v30;
						int32_t v31 = *(int32_t *)(g37 + v29 + 12) + (int32_t) "MoveWindow"; // 0x88b24
						if (v31 == 0xffff || v31 == 0xfffe) {
							// 0x88b74
							if (v8 <= 0xffffffff) {
								// 0x88b7c
								app_fatal(*(int32_t *)(g23 - 0x5cbc));
								// branch -> 0x88b84
							}
							// 0x88b84
							if (g35 != 0) {
								// 0x88b98
								v14 = 16 * g33;
								v13 = v14;
								*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
								g10 = v1;
								return g35;
							}
							// 0x88b8c
							g35 = function_87c78(&a3);
							// branch -> 0x88b98
							// 0x88b98
							v14 = 16 * g33;
							v13 = v14;
							*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
							g10 = v1;
							return g35;
						}
						// 0x88b38
						v8--;
						int32_t v32 = __asm_rlwinm(v30 + 1, 4, 17, 27); // 0x88b40
						g33 = (v15 + 6) % 2048;
						int32_t v33 = g37;                                                   // 0x88b4c
						int32_t v34 = *(int32_t *)(v33 + v32 + 12) + (int32_t) "MoveWindow"; // 0x88b50
						if (v34 == 0xffff) {
							// 0x88b74
							if (v8 <= 0xffffffff) {
								// 0x88b7c
								app_fatal(*(int32_t *)(g23 - 0x5cbc));
								// branch -> 0x88b84
							}
							// 0x88b84
							if (g35 != 0) {
								// 0x88b98
								v14 = 16 * g33;
								v13 = v14;
								*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
								*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
								g10 = v1;
								return g35;
							}
							// 0x88b8c
							g35 = function_87c78(&a3);
							// branch -> 0x88b98
							// 0x88b98
							v14 = 16 * g33;
							v13 = v14;
							*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
							g10 = v1;
							return g35;
						}
						// 0x88b5c
						if (v34 != 0xfffe) {
							// 0x88b64
							v8 -= 2;
							int32_t v35 = (v15 + 7) % 2048; // 0x88b6c
							g33 = v35;
							int32_t v36 = v6 - 1; // 0x88b70
							v6 = v36;
							if (v36 == 0) {
								// break -> 0x88b74
								break;
							}
							v5 = v33;
							v7 = v35;
							// continue -> 0x88a14
							continue;
						}
						// 0x88b74
						if (v8 <= 0xffffffff) {
							// 0x88b7c
							app_fatal(*(int32_t *)(g23 - 0x5cbc));
							// branch -> 0x88b84
						}
						// 0x88b84
						if (g35 != 0) {
							// 0x88b98
							v14 = 16 * g33;
							v13 = v14;
							*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
							*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
							g10 = v1;
							return g35;
						}
						// 0x88b8c
						g35 = function_87c78(&a3);
						// branch -> 0x88b98
						// 0x88b98
						v14 = 16 * g33;
						v13 = v14;
						*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
						*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
						*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
						*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
						g10 = v1;
						return g35;
					}
					// 0x88b74
					if (v8 <= 0xffffffff) {
						// 0x88b7c
						app_fatal(*(int32_t *)(g23 - 0x5cbc));
						// branch -> 0x88b84
					}
					// 0x88b84
					if (g35 == 0) {
						// 0x88b8c
						g35 = function_87c78(&a3);
						// branch -> 0x88b98
						// 0x88b98
						v14 = 16 * g33;
						v13 = v14;
						*(int32_t *)(v14 + *(int32_t *)(g23 - 0x4d60)) = g32;
						*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 4) = g36;
						*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 8) = 0;
						*(int32_t *)(v13 + *(int32_t *)(g23 - 0x4d60) + 12) = a3;
						g10 = v1;
						return g35;
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x88b74
				if (v8 <= 0xffffffff) {
					// 0x88b7c
					app_fatal(*(int32_t *)(g23 - 0x5cbc));
					// branch -> 0x88b84
				}
				// 0x88b84
				if (g35 == 0) {
					// 0x88b8c
					g35 = function_87c78(&a3);
					// branch -> 0x88b98
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x88b74
			if (v8 <= 0xffffffff) {
				// 0x88b7c
				app_fatal(*(int32_t *)(g23 - 0x5cbc));
				// branch -> 0x88b84
			}
			// 0x88b84
			if (g35 == 0) {
				// 0x88b8c
				g35 = function_87c78(&a3);
				// branch -> 0x88b98
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x88b74
		if (v8 <= 0xffffffff) {
			// 0x88b7c
			app_fatal(*(int32_t *)(g23 - 0x5cbc));
			// branch -> 0x88b84
		}
		// 0x88b84
		if (g35 == 0) {
			// 0x88b8c
			g35 = function_87c78(&a3);
			// branch -> 0x88b98
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x88b74
	if (v8 <= 0xffffffff) {
		// 0x88b7c
		app_fatal(*(int32_t *)(g23 - 0x5cbc));
		// branch -> 0x88b84
	}
	// 0x88b84
	if (g35 == 0) {
		// 0x88b8c
		g35 = function_87c78(&a3);
		// branch -> 0x88b98
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x88be8 - 0x88ffc
int32_t function_88be8(int32_t a1, int32_t a2, int32_t a3, int32_t *a4)
{
	int32_t v1 = g10; // 0x88bec
	g35 = *(int32_t *)(g23 - 0x5cc0);
	g30 = a1;
	g27 = a2;
	g28 = a3;
	g29 = (int32_t)a4;
	int32_t v2 = function_e86fc(a1, 58); // 0x88c1c10
	int32_t v3;                          // ctr
	int32_t v4;                          // r0
	int32_t v5;                          // r3
	int32_t v6;                          // r4
	int32_t v7;                          // bp-48
	int32_t v8;
	int32_t v9;   // 0x88c44
	int32_t v10;  // 0x88c50
	int32_t v11;  // 0x88ccc
	int32_t v12;  // 0x88ed4
	uint32_t v13; // 0x88fa4
	int32_t v14;  // 0x88fd4
	int32_t v15;  // 0x88c2c
	int32_t v16;  // 0x88c60
	int32_t v17;  // 0x88eb4
	int32_t v18;  // 0x88ec0
	int32_t v19;  // 0x88ed4
	int32_t v20;  // 0x88ee0
	int32_t v21;  // 0x88eec
	int32_t v22;  // 0x88ef8
	int32_t v23;  // 0x88f04
	int32_t v24;  // 0x88f10
	int32_t v25;  // 0x88f1c
	int32_t v26;  // 0x88f28
	int32_t v27;  // 0x88f2c
	int32_t v28;  // 0x88f30
	int32_t v29;  // 0x88f44
	int32_t v30;  // 0x88f48
	int32_t v31;  // 0x88c38
	int32_t v32;  // 0x88c386
	int32_t v33;  // 0x88cdc
	int32_t v34;  // 0x88ecc
	int32_t v35;  // 0x88ed8
	int32_t v36;  // 0x88ee4
	int32_t v37;  // 0x88ef0
	int32_t v38;  // 0x88efc
	int32_t v39;  // 0x88f08
	int32_t v40;  // 0x88f14
	int32_t v41;  // 0x88f20
	int32_t v42;  // 0x88f3c
	int32_t *v43; // 0x88fa0
	int32_t v44;  // 0x88fac
	int32_t v45;  // 0x88c90
	int32_t v46;  // 0x88e90
	int32_t v47;  // 0x88f4c
	int32_t v48;  // 0x88f78
	uint32_t v49; // 0x88fa0
	if (v2 != 0) {
		int32_t v50 = v2 + 1; // 0x88c10
		g30 = v50;
		int32_t v51 = function_e86fc(v50, 58); // 0x88c1c
		while (v51 != 0) {
			// 0x88c10
			v50 = v51 + 1;
			g30 = v50;
			v51 = function_e86fc(v50, 58);
			// continue -> 0x88c10
		}
		// 0x88c30
		v32 = function_e86fc(g30, 92);
		if (v32 != 0) {
			v15 = v32 + 1;
			g30 = v15;
			v31 = function_e86fc(v15, 92);
			while (v31 != 0) {
				// 0x88c2c
				v15 = v31 + 1;
				g30 = v15;
				v31 = function_e86fc(v15, 92);
				// continue -> 0x88c2c
			}
			// 0x88c44
			v9 = g30;
			g34 = v9;
			function_4d2a4(v9, 3);
			v10 = g28;
			v16 = 4 * (v10 + 4095) / 0x1000 + 4;
			g36 = v16;
			v7 = v16;
			*(int32_t *)g29 = function_87edc(v16 + v10, (int32_t *)(g29 + 4));
			*(int32_t *)(g29 + 8) = g28;
			*(int32_t *)(g29 + 12) = -0x7fffff00;
			v45 = *(int32_t *)(g23 - 0x4d54);
			g34 = v45;
			if (SetFilePointer(v45, 0, 0) + (int32_t) "MoveWindow" == 0xffff) {
				// 0x88cac
				// branch -> 0x88fe8
			} else {
				// 0x88cb4
				g32 = 0;
				g31 = 0;
				g30 = 0;
				g33 = 0;
				if (g28 == 0) {
					// 0x88e80
					*(int32_t *)0 = 0;
					v46 = *(int32_t *)(g23 - 0x4d54);
					g34 = v46;
					if (SetFilePointer(v46, -g31, 0) + (int32_t) "MoveWindow" != 0xffff) {
						// 0x88eac
						v6 = g30;
						v17 = __asm_rlwinm_(v7, 30, 2, 31);
						v5 = v17;
						if (v17 >= 1) {
							// 0x88ec0
							v18 = __asm_rlwinm_(v17, 29, 3, 31);
							v3 = v18;
							if (v18 == 0) {
								// 0x88ec0
								// branch -> 0x88f38
								// 0x88f38
								v42 = __asm_lwbrx(v18, v6);
								*(int32_t *)v6 = v42;
								v29 = v6 + 4;
								v6 = v29;
								v30 = v5 - 1;
								// branch -> 0x88f3c
								while (v30 != 0) {
									// 0x88f3c
									v42 = __asm_lwbrx(v42, v29);
									*(int32_t *)v6 = v42;
									v29 = v6 + 4;
									v6 = v29;
									v30--;
									// continue -> 0x88f3c
								}
								// 0x88f4c
								v47 = *(int32_t *)(g23 - 0x4d54);
								g34 = v47;
								if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
									// 0x88f70
									v48 = *(int32_t *)(v8 - 0x4d54);
									g34 = v48;
									g39 = 1;
									if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
										// 0x88f98
										g34 = g30;
										mem_free_dbg();
										v43 = (int32_t *)(g29 + 4);
										v49 = *v43;
										v13 = g31;
										if (v49 > v13) {
											// 0x88fac
											v44 = v49 - v13;
											if (v44 >= 1024) {
												// 0x88fbc
												*v43 = v13;
												function_87dd8(g31 + g39, v44);
												// branch -> 0x88fcc
											}
										}
										// 0x88fcc
										// branch -> 0x88fe8
										// 0x88fe8
										g10 = v1;
										return 1;
									}
								}
								// 0x88fd4
								v14 = g30;
								if (v14 != 0) {
									// 0x88fdc
									g34 = v14;
									mem_free_dbg();
									// branch -> 0x88fe4
								}
								// 0x88fe4
								// branch -> 0x88fe8
								// 0x88fe8
								g10 = v1;
								return 0;
							}
							int32_t v52 = v6;  // 0x88ecc
							int32_t v53 = v18; // 0x88ecc
							// branch -> 0x88ecc
							while (true) {
								// 0x88ecc
								v34 = __asm_lwbrx(v53, v52);
								*(int32_t *)v6 = v34;
								v12 = v6;
								v19 = v12 + 4;
								v35 = __asm_lwbrx(v34, v19);
								*(int32_t *)v19 = v35;
								v20 = v12 + 8;
								v36 = __asm_lwbrx(v35, v20);
								*(int32_t *)v20 = v36;
								v21 = v12 + 12;
								v37 = __asm_lwbrx(v36, v21);
								*(int32_t *)v21 = v37;
								v22 = v12 + 16;
								v38 = __asm_lwbrx(v37, v22);
								*(int32_t *)v22 = v38;
								v23 = v12 + 20;
								v39 = __asm_lwbrx(v38, v23);
								*(int32_t *)v23 = v39;
								v24 = v12 + 24;
								v40 = __asm_lwbrx(v39, v24);
								*(int32_t *)v24 = v40;
								v25 = v12 + 28;
								v41 = __asm_lwbrx(v40, v25);
								v4 = v41;
								*(int32_t *)v25 = v41;
								v26 = v12 + 32;
								v6 = v26;
								v27 = v3 - 1;
								v3 = v27;
								if (v27 == 0) {
									// 0x88f30
									v28 = v5 % 8;
									if (v28 == 0) {
										// 0x88f4c
										v47 = *(int32_t *)(g23 - 0x4d54);
										g34 = v47;
										if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
											// 0x88f70
											v48 = *(int32_t *)(v8 - 0x4d54);
											g34 = v48;
											g39 = 1;
											if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
												// 0x88f98
												g34 = g30;
												mem_free_dbg();
												v43 = (int32_t *)(g29 + 4);
												v49 = *v43;
												v13 = g31;
												if (v49 > v13) {
													// 0x88fac
													v44 = v49 - v13;
													if (v44 >= 1024) {
														// 0x88fbc
														*v43 = v13;
														function_87dd8(g31 + g39, v44);
														// branch -> 0x88fcc
														// 0x88fcc
														// branch -> 0x88fe8
														// 0x88fe8
														g10 = v1;
														return 1;
													}
												}
												// 0x88fcc
												// branch -> 0x88fe8
												// 0x88fe8
												g10 = v1;
												return 1;
											}
										}
										// 0x88fd4
										v14 = g30;
										if (v14 != 0) {
											// 0x88fdc
											g34 = v14;
											mem_free_dbg();
											// branch -> 0x88fe4
										}
										// 0x88fe4
										// branch -> 0x88fe8
										// 0x88fe8
										g10 = v1;
										return 0;
									}
									// 0x88f38
									v42 = __asm_lwbrx(v4, v26);
									*(int32_t *)v6 = v42;
									v29 = v6 + 4;
									v6 = v29;
									v30 = v28 - 1;
									// branch -> 0x88f3c
									while (v30 != 0) {
										// 0x88f3c
										v42 = __asm_lwbrx(v42, v29);
										*(int32_t *)v6 = v42;
										v29 = v6 + 4;
										v6 = v29;
										v30--;
										// continue -> 0x88f3c
									}
									// 0x88f4c
									v47 = *(int32_t *)(g23 - 0x4d54);
									g34 = v47;
									if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
										// 0x88f70
										v48 = *(int32_t *)(v8 - 0x4d54);
										g34 = v48;
										g39 = 1;
										if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
											// 0x88f98
											g34 = g30;
											mem_free_dbg();
											v43 = (int32_t *)(g29 + 4);
											v49 = *v43;
											v13 = g31;
											if (v49 > v13) {
												// 0x88fac
												v44 = v49 - v13;
												if (v44 >= 1024) {
													// 0x88fbc
													*v43 = v13;
													function_87dd8(g31 + g39, v44);
													// branch -> 0x88fcc
													// 0x88fcc
													// branch -> 0x88fe8
													// 0x88fe8
													g10 = v1;
													return 1;
												}
											}
											// 0x88fcc
											// branch -> 0x88fe8
											// 0x88fe8
											g10 = v1;
											return 1;
										}
									}
									// 0x88fd4
									v14 = g30;
									if (v14 != 0) {
										// 0x88fdc
										g34 = v14;
										mem_free_dbg();
										// branch -> 0x88fe4
									}
									// 0x88fe4
									// branch -> 0x88fe8
									// 0x88fe8
									g10 = v1;
									return 0;
								}
							lab_0x88ecc_4:
								// 0x88ecc
								v52 = v26;
								v53 = v4;
								// branch -> 0x88ecc
							}
						}
						// 0x88f4c
						v47 = *(int32_t *)(g23 - 0x4d54);
						g34 = v47;
						if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
							// 0x88f70
							v48 = *(int32_t *)(v8 - 0x4d54);
							g34 = v48;
							g39 = 1;
							if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
								// 0x88f98
								g34 = g30;
								mem_free_dbg();
								v43 = (int32_t *)(g29 + 4);
								v49 = *v43;
								v13 = g31;
								if (v49 > v13) {
									// 0x88fac
									v44 = v49 - v13;
									if (v44 >= 1024) {
										// 0x88fbc
										*v43 = v13;
										function_87dd8(g31 + g39, v44);
										// branch -> 0x88fcc
									}
								}
								// 0x88fcc
								// branch -> 0x88fe8
								// 0x88fe8
								g10 = v1;
								return 1;
							}
						}
					}
				} else {
					// 0x88cc8
					// branch -> 0x88cc8
					int32_t v54; // 0x88e5c
					int32_t v55; // 0x88e74
					while (true) {
						// 0x88cc8
						v11 = g35;
						v6 = v11;
						v3 = 256;
						v33 = v11;
						// branch -> 0x88cd4
					lab_0x88cd4_3:
						while (true) {
							char *v56 = (char *)v33; // 0x88cd4
							*v56 = (char)((int32_t)*v56 + 170);
							char *v57 = (char *)(v6 + 1); // 0x88ce0
							*v57 = (char)((int32_t)*v57 + 170);
							char *v58 = (char *)(v6 + 2); // 0x88cec
							*v58 = (char)((int32_t)*v58 + 170);
							char *v59 = (char *)(v6 + 3); // 0x88cf8
							*v59 = (char)((int32_t)*v59 + 170);
							char *v60 = (char *)(v6 + 4); // 0x88d04
							*v60 = (char)((int32_t)*v60 + 170);
							char *v61 = (char *)(v6 + 5); // 0x88d10
							*v61 = (char)((int32_t)*v61 + 170);
							char *v62 = (char *)(v6 + 6); // 0x88d1c
							*v62 = (char)((int32_t)*v62 + 170);
							char *v63 = (char *)(v6 + 7); // 0x88d28
							*v63 = (char)((int32_t)*v63 + 170);
							char *v64 = (char *)(v6 + 8); // 0x88d34
							*v64 = (char)((int32_t)*v64 + 170);
							char *v65 = (char *)(v6 + 9); // 0x88d40
							*v65 = (char)((int32_t)*v65 + 170);
							char *v66 = (char *)(v6 + 10); // 0x88d4c
							*v66 = (char)((int32_t)*v66 + 170);
							char *v67 = (char *)(v6 + 11); // 0x88d58
							*v67 = (char)((int32_t)*v67 + 170);
							char *v68 = (char *)(v6 + 12); // 0x88d64
							*v68 = (char)((int32_t)*v68 + 170);
							char *v69 = (char *)(v6 + 13); // 0x88d70
							*v69 = (char)((int32_t)*v69 + 170);
							char *v70 = (char *)(v6 + 14); // 0x88d7c
							*v70 = (char)((int32_t)*v70 + 170);
							char *v71 = (char *)(v6 + 15); // 0x88d88
							*v71 = (char)((int32_t)*v71 + 170);
							int32_t v72 = v6 + 16; // 0x88d94
							v6 = v72;
							int32_t v73 = v3 - 1; // 0x88d98
							v3 = v73;
							if (v73 == 0) {
								// break -> 0x88d9c
								break;
							}
							v33 = v72;
							// continue -> 0x88cd4
						}
						uint32_t v74 = g28;                        // 0x88d9c
						int32_t v75 = v74 < 0x1000 ? v74 : 0x1000; // bp-52
						g34 = g35;
						memcpy();
						v75 = function_4d5f4(g35, v75);
						int32_t v76; // 0x88e28
						if (g32 == 0) {
							int32_t v77 = g36; // 0x88de4
							v7 = v77;
							g34 = v77;
							int32_t v78 = DiabloAllocPtr(); // 0x88dec
							g34 = v78;
							g30 = v78;
							memset();
							int32_t v79 = *(int32_t *)(v8 - 0x4d54); // 0x88e00
							g34 = v79;
							if (function_eafd8(v79, g30, v7, (int32_t)&v7, 0) != 0) {
								// 0x88e24
								v76 = g31 + v7;
								g31 = v76;
								// branch -> 0x88e2c
							lab_0x88e2c:
								// 0x88e2c
								*(int32_t *)(g33 + g30) = v76;
								int32_t v80 = *(int32_t *)(g23 - 0x4d54); // 0x88e38
								g34 = v80;
								if (function_eafd8(v80, g35, v75, (int32_t)&v75, 0) != 0) {
									uint32_t v81 = g28; // 0x88e54
									g33 += 4;
									v54 = g32 + 1;
									g32 = v54;
									int32_t v82 = v81 < 0x1001 ? 0 : v81 - 0x1000;
									g28 = v82;
									v55 = g31 + v75;
									g31 = v55;
									if (v82 == 0) {
										// break -> 0x88e78
										break;
									}
									// continue -> 0x88cc8
									continue;
								}
							}
						} else {
							// 0x88d9c
							v76 = g31;
							// branch -> 0x88e2c
							goto lab_0x88e2c;
						}
						// 0x88fd4
						v14 = g30;
						if (v14 != 0) {
							// 0x88fdc
							g34 = v14;
							mem_free_dbg();
							// branch -> 0x88fe4
						}
						// 0x88fe4
						// branch -> 0x88fe8
						// 0x88fe8
						g10 = v1;
						return 0;
					}
					// 0x88e78
					// branch -> 0x88e80
					// 0x88e80
					*(int32_t *)(4 * v54 + g30) = v55;
					v46 = *(int32_t *)(g23 - 0x4d54);
					g34 = v46;
					if (SetFilePointer(v46, -g31, 0) + (int32_t) "MoveWindow" != 0xffff) {
						// 0x88eac
						v6 = g30;
						v17 = __asm_rlwinm_(v7, 30, 2, 31);
						v5 = v17;
						if (v17 >= 1) {
							// 0x88ec0
							v18 = __asm_rlwinm_(v17, 29, 3, 31);
							v3 = v18;
							if (v18 == 0) {
								// 0x88ec0
								// branch -> 0x88f38
								// 0x88f38
								v42 = __asm_lwbrx(v18, v6);
								*(int32_t *)v6 = v42;
								v29 = v6 + 4;
								v6 = v29;
								v30 = v5 - 1;
								// branch -> 0x88f3c
								while (v30 != 0) {
									// 0x88f3c
									v42 = __asm_lwbrx(v42, v29);
									*(int32_t *)v6 = v42;
									v29 = v6 + 4;
									v6 = v29;
									v30--;
									// continue -> 0x88f3c
								}
								// 0x88f4c
								v47 = *(int32_t *)(g23 - 0x4d54);
								g34 = v47;
								if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
									// 0x88f70
									v48 = *(int32_t *)(v8 - 0x4d54);
									g34 = v48;
									g39 = 1;
									if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
										// 0x88f98
										g34 = g30;
										mem_free_dbg();
										v43 = (int32_t *)(g29 + 4);
										v49 = *v43;
										v13 = g31;
										if (v49 > v13) {
											// 0x88fac
											v44 = v49 - v13;
											if (v44 >= 1024) {
												// 0x88fbc
												*v43 = v13;
												function_87dd8(g31 + g39, v44);
												// branch -> 0x88fcc
											}
										}
										// 0x88fcc
										// branch -> 0x88fe8
										// 0x88fe8
										g10 = v1;
										return 1;
									}
								}
								// 0x88fd4
								v14 = g30;
								if (v14 != 0) {
									// 0x88fdc
									g34 = v14;
									mem_free_dbg();
									// branch -> 0x88fe4
								}
								// 0x88fe4
								// branch -> 0x88fe8
								// 0x88fe8
								g10 = v1;
								return 0;
							}
							// 0x88ecc
							// branch -> 0x88ecc
							while (true) {
								// 0x88ecc
								v34 = __asm_lwbrx(v18, v6);
								*(int32_t *)v6 = v34;
								v12 = v6;
								v19 = v12 + 4;
								v35 = __asm_lwbrx(v34, v19);
								*(int32_t *)v19 = v35;
								v20 = v12 + 8;
								v36 = __asm_lwbrx(v35, v20);
								*(int32_t *)v20 = v36;
								v21 = v12 + 12;
								v37 = __asm_lwbrx(v36, v21);
								*(int32_t *)v21 = v37;
								v22 = v12 + 16;
								v38 = __asm_lwbrx(v37, v22);
								*(int32_t *)v22 = v38;
								v23 = v12 + 20;
								v39 = __asm_lwbrx(v38, v23);
								*(int32_t *)v23 = v39;
								v24 = v12 + 24;
								v40 = __asm_lwbrx(v39, v24);
								*(int32_t *)v24 = v40;
								v25 = v12 + 28;
								v41 = __asm_lwbrx(v40, v25);
								v4 = v41;
								*(int32_t *)v25 = v41;
								v26 = v12 + 32;
								v6 = v26;
								v27 = v3 - 1;
								v3 = v27;
								if (v27 != 0) {
									goto lab_0x88ecc_4;
								}
								// 0x88f30
								v28 = v5 % 8;
								v5 = v28;
								if (v28 != 0) {
									// 0x88f38
									v42 = __asm_lwbrx(v4, v26);
									*(int32_t *)v6 = v42;
									v29 = v6 + 4;
									v6 = v29;
									v30 = v28 - 1;
									// branch -> 0x88f3c
									while (v30 != 0) {
										// 0x88f3c
										v42 = __asm_lwbrx(v42, v29);
										*(int32_t *)v6 = v42;
										v29 = v6 + 4;
										v6 = v29;
										v30--;
										// continue -> 0x88f3c
									}
									// 0x88f4c
									v47 = *(int32_t *)(g23 - 0x4d54);
									g34 = v47;
									if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
										// 0x88f70
										v48 = *(int32_t *)(v8 - 0x4d54);
										g34 = v48;
										g39 = 1;
										if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
											// 0x88f98
											g34 = g30;
											mem_free_dbg();
											v43 = (int32_t *)(g29 + 4);
											v49 = *v43;
											v13 = g31;
											if (v49 > v13) {
												// 0x88fac
												v44 = v49 - v13;
												if (v44 >= 1024) {
													// 0x88fbc
													*v43 = v13;
													function_87dd8(g31 + g39, v44);
													// branch -> 0x88fcc
													// 0x88fcc
													// branch -> 0x88fe8
													// 0x88fe8
													g10 = v1;
													return 1;
												}
											}
											// 0x88fcc
											// branch -> 0x88fe8
											// 0x88fe8
											g10 = v1;
											return 1;
										}
									}
									// 0x88fd4
									v14 = g30;
									if (v14 != 0) {
										// 0x88fdc
										g34 = v14;
										mem_free_dbg();
										// branch -> 0x88fe4
									}
									// 0x88fe4
									// branch -> 0x88fe8
									// 0x88fe8
									g10 = v1;
									return 0;
								}
							}
						}
						// 0x88f4c
						v47 = *(int32_t *)(g23 - 0x4d54);
						g34 = v47;
						if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
							// 0x88f70
							v48 = *(int32_t *)(v8 - 0x4d54);
							g34 = v48;
							g39 = 1;
							if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
								// 0x88f98
								g34 = g30;
								mem_free_dbg();
								v43 = (int32_t *)(g29 + 4);
								v49 = *v43;
								v13 = g31;
								if (v49 > v13) {
									// 0x88fac
									v44 = v49 - v13;
									if (v44 >= 1024) {
										// 0x88fbc
										*v43 = v13;
										function_87dd8(g31 + g39, v44);
										// branch -> 0x88fcc
									}
								}
								// 0x88fcc
								// branch -> 0x88fe8
								// 0x88fe8
								g10 = v1;
								return 1;
							}
						}
					}
				}
				// 0x88fd4
				v14 = g30;
				if (v14 != 0) {
					// 0x88fdc
					g34 = v14;
					mem_free_dbg();
					// branch -> 0x88fe4
				}
				// 0x88fe4
				// branch -> 0x88fe8
			}
			// 0x88fe8
			g10 = v1;
			return 0;
		}
		// 0x88c44
		v9 = g30;
		g34 = v9;
		function_4d2a4(v9, 3);
		v10 = g28;
		v16 = 4 * (v10 + 4095) / 0x1000 + 4;
		g36 = v16;
		v7 = v16;
		*(int32_t *)g29 = function_87edc(v16 + v10, (int32_t *)(g29 + 4));
		*(int32_t *)(g29 + 8) = g28;
		*(int32_t *)(g29 + 12) = -0x7fffff00;
		v45 = *(int32_t *)(g23 - 0x4d54);
		g34 = v45;
		if (SetFilePointer(v45, 0, 0) + (int32_t) "MoveWindow" == 0xffff) {
			// 0x88cac
			// branch -> 0x88fe8
		} else {
			// 0x88cb4
			g32 = 0;
			g31 = 0;
			g30 = 0;
			g33 = 0;
			if (g28 == 0) {
				// 0x88e80
				*(int32_t *)0 = 0;
				v46 = *(int32_t *)(g23 - 0x4d54);
				g34 = v46;
				if (SetFilePointer(v46, -g31, 0) + (int32_t) "MoveWindow" != 0xffff) {
					// 0x88eac
					v6 = g30;
					v17 = __asm_rlwinm_(v7, 30, 2, 31);
					v5 = v17;
					if (v17 >= 1) {
						// 0x88ec0
						v18 = __asm_rlwinm_(v17, 29, 3, 31);
						v4 = v18;
						v3 = v18;
						if (v18 == 0) {
							// 0x88ec0
							// branch -> 0x88f38
							// 0x88f38
							v42 = __asm_lwbrx(v4, v6);
							*(int32_t *)v6 = v42;
							v29 = v6 + 4;
							v6 = v29;
							v30 = v5 - 1;
							// branch -> 0x88f3c
							while (v30 != 0) {
								// 0x88f3c
								v42 = __asm_lwbrx(v42, v29);
								*(int32_t *)v6 = v42;
								v29 = v6 + 4;
								v6 = v29;
								v30--;
								// continue -> 0x88f3c
							}
							// 0x88f4c
							v47 = *(int32_t *)(g23 - 0x4d54);
							g34 = v47;
							if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
								// 0x88f70
								v48 = *(int32_t *)(v8 - 0x4d54);
								g34 = v48;
								g39 = 1;
								if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
									// 0x88f98
									g34 = g30;
									mem_free_dbg();
									v43 = (int32_t *)(g29 + 4);
									v49 = *v43;
									v13 = g31;
									if (v49 > v13) {
										// 0x88fac
										v44 = v49 - v13;
										if (v44 >= 1024) {
											// 0x88fbc
											*v43 = v13;
											function_87dd8(g31 + g39, v44);
											// branch -> 0x88fcc
										}
									}
									// 0x88fcc
									// branch -> 0x88fe8
									// 0x88fe8
									g10 = v1;
									return 1;
								}
							}
							// 0x88fd4
							v14 = g30;
							if (v14 != 0) {
								// 0x88fdc
								g34 = v14;
								mem_free_dbg();
								// branch -> 0x88fe4
							}
							// 0x88fe4
							// branch -> 0x88fe8
							// 0x88fe8
							g10 = v1;
							return 0;
						}
						// 0x88ecc
						// branch -> 0x88ecc
						while (true) {
							// 0x88ecc
							v34 = __asm_lwbrx(v18, v6);
							*(int32_t *)v6 = v34;
							v12 = v6;
							v19 = v12 + 4;
							v35 = __asm_lwbrx(v34, v19);
							*(int32_t *)v19 = v35;
							v20 = v12 + 8;
							v36 = __asm_lwbrx(v35, v20);
							*(int32_t *)v20 = v36;
							v21 = v12 + 12;
							v37 = __asm_lwbrx(v36, v21);
							*(int32_t *)v21 = v37;
							v22 = v12 + 16;
							v38 = __asm_lwbrx(v37, v22);
							*(int32_t *)v22 = v38;
							v23 = v12 + 20;
							v39 = __asm_lwbrx(v38, v23);
							*(int32_t *)v23 = v39;
							v24 = v12 + 24;
							v40 = __asm_lwbrx(v39, v24);
							*(int32_t *)v24 = v40;
							v25 = v12 + 28;
							v41 = __asm_lwbrx(v40, v25);
							v4 = v41;
							*(int32_t *)v25 = v41;
							v26 = v12 + 32;
							v6 = v26;
							v27 = v3 - 1;
							v3 = v27;
							if (v27 != 0) {
								goto lab_0x88ecc_4;
							}
							// 0x88f30
							v28 = v5 % 8;
							v5 = v28;
							if (v28 != 0) {
								// 0x88f38
								v42 = __asm_lwbrx(v4, v26);
								*(int32_t *)v6 = v42;
								v29 = v6 + 4;
								v6 = v29;
								v30 = v28 - 1;
								// branch -> 0x88f3c
								while (v30 != 0) {
									// 0x88f3c
									v42 = __asm_lwbrx(v42, v29);
									*(int32_t *)v6 = v42;
									v29 = v6 + 4;
									v6 = v29;
									v30--;
									// continue -> 0x88f3c
								}
								// 0x88f4c
								v47 = *(int32_t *)(g23 - 0x4d54);
								g34 = v47;
								if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
									// 0x88f70
									v48 = *(int32_t *)(v8 - 0x4d54);
									g34 = v48;
									g39 = 1;
									if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
										// 0x88f98
										g34 = g30;
										mem_free_dbg();
										v43 = (int32_t *)(g29 + 4);
										v49 = *v43;
										v13 = g31;
										if (v49 > v13) {
											// 0x88fac
											v44 = v49 - v13;
											if (v44 >= 1024) {
												// 0x88fbc
												*v43 = v13;
												function_87dd8(g31 + g39, v44);
												// branch -> 0x88fcc
												// 0x88fcc
												// branch -> 0x88fe8
												// 0x88fe8
												g10 = v1;
												return 1;
											}
										}
										// 0x88fcc
										// branch -> 0x88fe8
										// 0x88fe8
										g10 = v1;
										return 1;
									}
								}
								// 0x88fd4
								v14 = g30;
								if (v14 != 0) {
									// 0x88fdc
									g34 = v14;
									mem_free_dbg();
									// branch -> 0x88fe4
								}
								// 0x88fe4
								// branch -> 0x88fe8
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x88f4c
						v47 = *(int32_t *)(g23 - 0x4d54);
						g34 = v47;
						if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
							// 0x88f70
							v48 = *(int32_t *)(v8 - 0x4d54);
							g34 = v48;
							g39 = 1;
							if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
								// 0x88f98
								g34 = g30;
								mem_free_dbg();
								v43 = (int32_t *)(g29 + 4);
								v49 = *v43;
								v13 = g31;
								if (v49 > v13) {
									// 0x88fac
									v44 = v49 - v13;
									if (v44 >= 1024) {
										// 0x88fbc
										*v43 = v13;
										function_87dd8(g31 + g39, v44);
										// branch -> 0x88fcc
									}
								}
								// 0x88fcc
								// branch -> 0x88fe8
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x88fd4
						v14 = g30;
						if (v14 != 0) {
							// 0x88fdc
							g34 = v14;
							mem_free_dbg();
							// branch -> 0x88fe4
						}
						// 0x88fe4
						// branch -> 0x88fe8
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x88f4c
					v47 = *(int32_t *)(g23 - 0x4d54);
					g34 = v47;
					if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
						// 0x88f70
						v48 = *(int32_t *)(v8 - 0x4d54);
						g34 = v48;
						g39 = 1;
						if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
							// 0x88f98
							g34 = g30;
							mem_free_dbg();
							v43 = (int32_t *)(g29 + 4);
							v49 = *v43;
							v13 = g31;
							if (v49 > v13) {
								// 0x88fac
								v44 = v49 - v13;
								if (v44 >= 1024) {
									// 0x88fbc
									*v43 = v13;
									function_87dd8(g31 + g39, v44);
									// branch -> 0x88fcc
								}
							}
							// 0x88fcc
							// branch -> 0x88fe8
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
			} else {
				// 0x88cc8
				// branch -> 0x88cc8
				while (true) {
					// 0x88cc8
					v11 = g35;
					v6 = v11;
					v3 = 256;
					v33 = v11;
					// branch -> 0x88cd4
					goto lab_0x88cd4_3;
				}
			}
			// 0x88fd4
			v14 = g30;
			if (v14 != 0) {
				// 0x88fdc
				g34 = v14;
				mem_free_dbg();
				// branch -> 0x88fe4
			}
			// 0x88fe4
			// branch -> 0x88fe8
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x88c30
	v32 = function_e86fc(g30, 92);
	if (v32 != 0) {
		v15 = v32 + 1;
		g30 = v15;
		v31 = function_e86fc(v15, 92);
		while (v31 != 0) {
			// 0x88c2c
			v15 = v31 + 1;
			g30 = v15;
			v31 = function_e86fc(v15, 92);
			// continue -> 0x88c2c
		}
		// 0x88c44
		v9 = g30;
		g34 = v9;
		function_4d2a4(v9, 3);
		v10 = g28;
		v16 = 4 * (v10 + 4095) / 0x1000 + 4;
		g36 = v16;
		v7 = v16;
		*(int32_t *)g29 = function_87edc(v16 + v10, (int32_t *)(g29 + 4));
		*(int32_t *)(g29 + 8) = g28;
		*(int32_t *)(g29 + 12) = -0x7fffff00;
		v45 = *(int32_t *)(g23 - 0x4d54);
		g34 = v45;
		if (SetFilePointer(v45, 0, 0) + (int32_t) "MoveWindow" == 0xffff) {
			// 0x88cac
			// branch -> 0x88fe8
		} else {
			// 0x88cb4
			g32 = 0;
			g31 = 0;
			g30 = 0;
			g33 = 0;
			if (g28 == 0) {
				// 0x88e80
				*(int32_t *)0 = 0;
				v46 = *(int32_t *)(g23 - 0x4d54);
				g34 = v46;
				if (SetFilePointer(v46, -g31, 0) + (int32_t) "MoveWindow" != 0xffff) {
					// 0x88eac
					v6 = g30;
					v17 = __asm_rlwinm_(v7, 30, 2, 31);
					v5 = v17;
					if (v17 >= 1) {
						// 0x88ec0
						v18 = __asm_rlwinm_(v17, 29, 3, 31);
						v4 = v18;
						v3 = v18;
						if (v18 == 0) {
							// 0x88ec0
							// branch -> 0x88f38
							// 0x88f38
							v42 = __asm_lwbrx(v4, v6);
							*(int32_t *)v6 = v42;
							v29 = v6 + 4;
							v6 = v29;
							v30 = v5 - 1;
							// branch -> 0x88f3c
							while (v30 != 0) {
								// 0x88f3c
								v42 = __asm_lwbrx(v42, v29);
								*(int32_t *)v6 = v42;
								v29 = v6 + 4;
								v6 = v29;
								v30--;
								// continue -> 0x88f3c
							}
							// 0x88f4c
							v47 = *(int32_t *)(g23 - 0x4d54);
							g34 = v47;
							if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
								// 0x88f70
								v48 = *(int32_t *)(v8 - 0x4d54);
								g34 = v48;
								g39 = 1;
								if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
									// 0x88f98
									g34 = g30;
									mem_free_dbg();
									v43 = (int32_t *)(g29 + 4);
									v49 = *v43;
									v13 = g31;
									if (v49 > v13) {
										// 0x88fac
										v44 = v49 - v13;
										if (v44 >= 1024) {
											// 0x88fbc
											*v43 = v13;
											function_87dd8(g31 + g39, v44);
											// branch -> 0x88fcc
										}
									}
									// 0x88fcc
									// branch -> 0x88fe8
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x88fd4
							v14 = g30;
							if (v14 != 0) {
								// 0x88fdc
								g34 = v14;
								mem_free_dbg();
								// branch -> 0x88fe4
							}
							// 0x88fe4
							// branch -> 0x88fe8
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x88ecc
							// branch -> 0x88ecc
							while (true) {
								// 0x88ecc
								v34 = __asm_lwbrx(v18, v6);
								*(int32_t *)v6 = v34;
								v12 = v6;
								v19 = v12 + 4;
								v35 = __asm_lwbrx(v34, v19);
								*(int32_t *)v19 = v35;
								v20 = v12 + 8;
								v36 = __asm_lwbrx(v35, v20);
								*(int32_t *)v20 = v36;
								v21 = v12 + 12;
								v37 = __asm_lwbrx(v36, v21);
								*(int32_t *)v21 = v37;
								v22 = v12 + 16;
								v38 = __asm_lwbrx(v37, v22);
								*(int32_t *)v22 = v38;
								v23 = v12 + 20;
								v39 = __asm_lwbrx(v38, v23);
								*(int32_t *)v23 = v39;
								v24 = v12 + 24;
								v40 = __asm_lwbrx(v39, v24);
								*(int32_t *)v24 = v40;
								v25 = v12 + 28;
								v41 = __asm_lwbrx(v40, v25);
								v4 = v41;
								*(int32_t *)v25 = v41;
								v26 = v12 + 32;
								v6 = v26;
								v27 = v3 - 1;
								v3 = v27;
								if (v27 != 0) {
									goto lab_0x88ecc_4;
								}
								// 0x88f30
								v28 = v5 % 8;
								v5 = v28;
								if (v28 != 0) {
									// 0x88f38
									v42 = __asm_lwbrx(v4, v26);
									*(int32_t *)v6 = v42;
									v29 = v6 + 4;
									v6 = v29;
									v30 = v28 - 1;
									// branch -> 0x88f3c
									while (v30 != 0) {
										// 0x88f3c
										v42 = __asm_lwbrx(v42, v29);
										*(int32_t *)v6 = v42;
										v29 = v6 + 4;
										v6 = v29;
										v30--;
										// continue -> 0x88f3c
									}
									// 0x88f4c
									v47 = *(int32_t *)(g23 - 0x4d54);
									g34 = v47;
									if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
										// 0x88f70
										v48 = *(int32_t *)(v8 - 0x4d54);
										g34 = v48;
										g39 = 1;
										if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
											// 0x88f98
											g34 = g30;
											mem_free_dbg();
											v43 = (int32_t *)(g29 + 4);
											v49 = *v43;
											v13 = g31;
											if (v49 > v13) {
												// 0x88fac
												v44 = v49 - v13;
												if (v44 >= 1024) {
													// 0x88fbc
													*v43 = v13;
													function_87dd8(g31 + g39, v44);
													// branch -> 0x88fcc
													// 0x88fcc
													// branch -> 0x88fe8
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// 0x88fcc
											// branch -> 0x88fe8
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
									// 0x88fd4
									v14 = g30;
									if (v14 != 0) {
										// 0x88fdc
										g34 = v14;
										mem_free_dbg();
										// branch -> 0x88fe4
									}
									// 0x88fe4
									// branch -> 0x88fe8
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// 0x88f4c
						v47 = *(int32_t *)(g23 - 0x4d54);
						g34 = v47;
						if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
							// 0x88f70
							v48 = *(int32_t *)(v8 - 0x4d54);
							g34 = v48;
							g39 = 1;
							if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
								// 0x88f98
								g34 = g30;
								mem_free_dbg();
								v43 = (int32_t *)(g29 + 4);
								v49 = *v43;
								v13 = g31;
								if (v49 > v13) {
									// 0x88fac
									v44 = v49 - v13;
									if (v44 >= 1024) {
										// 0x88fbc
										*v43 = v13;
										function_87dd8(g31 + g39, v44);
										// branch -> 0x88fcc
									}
								}
								// 0x88fcc
								// branch -> 0x88fe8
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x88fd4
						v14 = g30;
						if (v14 != 0) {
							// 0x88fdc
							g34 = v14;
							mem_free_dbg();
							// branch -> 0x88fe4
						}
						// 0x88fe4
						// branch -> 0x88fe8
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x88f4c
					v47 = *(int32_t *)(g23 - 0x4d54);
					g34 = v47;
					if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
						// 0x88f70
						v48 = *(int32_t *)(v8 - 0x4d54);
						g34 = v48;
						g39 = 1;
						if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
							// 0x88f98
							g34 = g30;
							mem_free_dbg();
							v43 = (int32_t *)(g29 + 4);
							v49 = *v43;
							v13 = g31;
							if (v49 > v13) {
								// 0x88fac
								v44 = v49 - v13;
								if (v44 >= 1024) {
									// 0x88fbc
									*v43 = v13;
									function_87dd8(g31 + g39, v44);
									// branch -> 0x88fcc
								}
							}
							// 0x88fcc
							// branch -> 0x88fe8
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
			} else {
				// 0x88cc8
				// branch -> 0x88cc8
				while (true) {
					// 0x88cc8
					v11 = g35;
					v6 = v11;
					v3 = 256;
					v33 = v11;
					// branch -> 0x88cd4
					goto lab_0x88cd4_3;
				}
			}
			// 0x88fd4
			v14 = g30;
			if (v14 != 0) {
				// 0x88fdc
				g34 = v14;
				mem_free_dbg();
				// branch -> 0x88fe4
			}
			// 0x88fe4
			// branch -> 0x88fe8
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x88c44
	v9 = g30;
	g34 = v9;
	function_4d2a4(v9, 3);
	v10 = g28;
	v16 = 4 * (v10 + 4095) / 0x1000 + 4;
	g36 = v16;
	v7 = v16;
	*(int32_t *)g29 = function_87edc(v16 + v10, (int32_t *)(g29 + 4));
	*(int32_t *)(g29 + 8) = g28;
	*(int32_t *)(g29 + 12) = -0x7fffff00;
	v45 = *(int32_t *)(g23 - 0x4d54);
	g34 = v45;
	if (SetFilePointer(v45, 0, 0) + (int32_t) "MoveWindow" == 0xffff) {
		// 0x88cac
		// branch -> 0x88fe8
	} else {
		// 0x88cb4
		g32 = 0;
		g31 = 0;
		g30 = 0;
		g33 = 0;
		if (g28 == 0) {
			// 0x88e80
			*(int32_t *)0 = 0;
			v46 = *(int32_t *)(g23 - 0x4d54);
			g34 = v46;
			if (SetFilePointer(v46, -g31, 0) + (int32_t) "MoveWindow" != 0xffff) {
				// 0x88eac
				v6 = g30;
				v17 = __asm_rlwinm_(v7, 30, 2, 31);
				v5 = v17;
				if (v17 >= 1) {
					// 0x88ec0
					v18 = __asm_rlwinm_(v17, 29, 3, 31);
					v3 = v18;
					if (v18 == 0) {
						// 0x88ec0
						// branch -> 0x88f38
						// 0x88f38
						v42 = __asm_lwbrx(v18, v6);
						*(int32_t *)v6 = v42;
						v29 = v6 + 4;
						v6 = v29;
						v30 = v5 - 1;
						// branch -> 0x88f3c
						while (v30 != 0) {
							// 0x88f3c
							v42 = __asm_lwbrx(v42, v29);
							*(int32_t *)v6 = v42;
							v29 = v6 + 4;
							v6 = v29;
							v30--;
							// continue -> 0x88f3c
						}
						// 0x88f4c
						v47 = *(int32_t *)(g23 - 0x4d54);
						g34 = v47;
						if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
							// 0x88f70
							v48 = *(int32_t *)(v8 - 0x4d54);
							g34 = v48;
							g39 = 1;
							if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
								// 0x88f98
								g34 = g30;
								mem_free_dbg();
								v43 = (int32_t *)(g29 + 4);
								v49 = *v43;
								v13 = g31;
								if (v49 > v13) {
									// 0x88fac
									v44 = v49 - v13;
									if (v44 >= 1024) {
										// 0x88fbc
										*v43 = v13;
										function_87dd8(g31 + g39, v44);
										// branch -> 0x88fcc
									}
								}
								// 0x88fcc
								// branch -> 0x88fe8
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x88fd4
						v14 = g30;
						if (v14 != 0) {
							// 0x88fdc
							g34 = v14;
							mem_free_dbg();
							// branch -> 0x88fe4
						}
						// 0x88fe4
						// branch -> 0x88fe8
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x88ecc
						// branch -> 0x88ecc
						while (true) {
							// 0x88ecc
							v34 = __asm_lwbrx(v18, v6);
							*(int32_t *)v6 = v34;
							v12 = v6;
							v19 = v12 + 4;
							v35 = __asm_lwbrx(v34, v19);
							*(int32_t *)v19 = v35;
							v20 = v12 + 8;
							v36 = __asm_lwbrx(v35, v20);
							*(int32_t *)v20 = v36;
							v21 = v12 + 12;
							v37 = __asm_lwbrx(v36, v21);
							*(int32_t *)v21 = v37;
							v22 = v12 + 16;
							v38 = __asm_lwbrx(v37, v22);
							*(int32_t *)v22 = v38;
							v23 = v12 + 20;
							v39 = __asm_lwbrx(v38, v23);
							*(int32_t *)v23 = v39;
							v24 = v12 + 24;
							v40 = __asm_lwbrx(v39, v24);
							*(int32_t *)v24 = v40;
							v25 = v12 + 28;
							v41 = __asm_lwbrx(v40, v25);
							v4 = v41;
							*(int32_t *)v25 = v41;
							v26 = v12 + 32;
							v6 = v26;
							v27 = v3 - 1;
							v3 = v27;
							if (v27 != 0) {
								goto lab_0x88ecc_4;
							}
							// 0x88f30
							v28 = v5 % 8;
							v5 = v28;
							if (v28 != 0) {
								// 0x88f38
								v42 = __asm_lwbrx(v4, v26);
								*(int32_t *)v6 = v42;
								v29 = v6 + 4;
								v6 = v29;
								v30 = v28 - 1;
								// branch -> 0x88f3c
								while (v30 != 0) {
									// 0x88f3c
									v42 = __asm_lwbrx(v42, v29);
									*(int32_t *)v6 = v42;
									v29 = v6 + 4;
									v6 = v29;
									v30--;
									// continue -> 0x88f3c
								}
								// 0x88f4c
								v47 = *(int32_t *)(g23 - 0x4d54);
								g34 = v47;
								if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
									// 0x88f70
									v48 = *(int32_t *)(v8 - 0x4d54);
									g34 = v48;
									g39 = 1;
									if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
										// 0x88f98
										g34 = g30;
										mem_free_dbg();
										v43 = (int32_t *)(g29 + 4);
										v49 = *v43;
										v13 = g31;
										if (v49 > v13) {
											// 0x88fac
											v44 = v49 - v13;
											if (v44 >= 1024) {
												// 0x88fbc
												*v43 = v13;
												function_87dd8(g31 + g39, v44);
												// branch -> 0x88fcc
												// 0x88fcc
												// branch -> 0x88fe8
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// 0x88fcc
										// branch -> 0x88fe8
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
								// 0x88fd4
								v14 = g30;
								if (v14 != 0) {
									// 0x88fdc
									g34 = v14;
									mem_free_dbg();
									// branch -> 0x88fe4
								}
								// 0x88fe4
								// branch -> 0x88fe8
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// 0x88f4c
					v47 = *(int32_t *)(g23 - 0x4d54);
					g34 = v47;
					if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
						// 0x88f70
						v48 = *(int32_t *)(v8 - 0x4d54);
						g34 = v48;
						g39 = 1;
						if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
							// 0x88f98
							g34 = g30;
							mem_free_dbg();
							v43 = (int32_t *)(g29 + 4);
							v49 = *v43;
							v13 = g31;
							if (v49 > v13) {
								// 0x88fac
								v44 = v49 - v13;
								if (v44 >= 1024) {
									// 0x88fbc
									*v43 = v13;
									function_87dd8(g31 + g39, v44);
									// branch -> 0x88fcc
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x88fd4
					v14 = g30;
					if (v14 != 0) {
						// 0x88fdc
						g34 = v14;
						mem_free_dbg();
						// branch -> 0x88fe4
					}
					// 0x88fe4
					// branch -> 0x88fe8
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x88f4c
				v47 = *(int32_t *)(g23 - 0x4d54);
				g34 = v47;
				if (function_eafd8(v47, g30, v7, (int32_t)&v7, 0) != 0) {
					// 0x88f70
					v48 = *(int32_t *)(v8 - 0x4d54);
					g34 = v48;
					g39 = 1;
					if (SetFilePointer(v48, g31 - v7, 0) + (int32_t) "MoveWindow" != 0xffff) {
						// 0x88f98
						g34 = g30;
						mem_free_dbg();
						v43 = (int32_t *)(g29 + 4);
						v49 = *v43;
						v13 = g31;
						if (v49 > v13) {
							// 0x88fac
							v44 = v49 - v13;
							if (v44 >= 1024) {
								// 0x88fbc
								*v43 = v13;
								function_87dd8(g31 + g39, v44);
								// branch -> 0x88fcc
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
		} else {
			// 0x88cc8
			// branch -> 0x88cc8
			while (true) {
				// 0x88cc8
				v11 = g35;
				v6 = v11;
				v3 = 256;
				v33 = v11;
				// branch -> 0x88cd4
				goto lab_0x88cd4_3;
			}
		}
		// 0x88fd4
		v14 = g30;
		if (v14 != 0) {
			// 0x88fdc
			g34 = v14;
			mem_free_dbg();
			// branch -> 0x88fe4
		}
		// 0x88fe4
		// branch -> 0x88fe8
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x88ffc - 0x89088
int32_t mpqapi_write_file(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x88ffc
	g34 = a1;
	int32_t v1 = g36; // 0x88ffc
	g36 = a3;
	int32_t v2 = g35; // 0x89008
	g35 = a2;
	int32_t v3 = g33; // 0x89010
	g33 = g34;
	*(int32_t *)(g23 - 0x4d58) = 1;
	function_88884();
	int32_t v4 = function_8898c(g33, 0, 0); // 0x89038
	int32_t result = 1;
	if (function_88be8(g33, g35, g36, (int32_t *)v4) == 0) {
		// 0x89058
		g34 = g33;
		function_88884();
		result = 0;
		// branch -> 0x8906c
	}
	// 0x8906c
	g36 = v1;
	g35 = v2;
	g33 = v3;
	return result;
}

// Address range: 0x89088 - 0x890f4
int32_t function_89088(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x89088
	g36 = a1;
	int32_t v2 = function_88814(); // 0x8909c
	int32_t result;                // r3
	if (v2 + (int32_t) "MoveWindow" != 0xffff) {
		int32_t *v3 = (int32_t *)(*(int32_t *)(g23 - 0x4d60) + 16 * v2 + 12); // 0x890c0
		int32_t v4 = *v3;                                                     // 0x890c0
		*v3 = -2;
		result = function_8898c(g36, 16 * v4 + *(int32_t *)(g23 - 0x4d5c), v4);
		*(int32_t *)(g23 - 0x4d58) = 1;
		// branch -> 0x890e0
	} else {
		result = v2;
	}
	// 0x890e0
	g36 = v1;
	return result;
}

// Address range: 0x890f4 - 0x89124
int32_t function_890f4(int32_t a1)
{
	int32_t v1 = function_88814(); // 0x89100
	return v1 != -1;
}

// Address range: 0x89124 - 0x891d0
int32_t CloseMPQ(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x89124
	g37 = a2;
	int32_t v1 = g36; // 0x89124
	if (g37 != 0) {
		int32_t *v2 = (int32_t *)(g23 - 0x4d5c); // 0x89144
		g34 = *v2;
		g36 = 0;
		*v2 = 0;
		mem_free_dbg();
		int32_t *v3 = (int32_t *)(g23 - 0x4d60); // 0x89154
		g34 = *v3;
		*v3 = g36;
		mem_free_dbg();
		// branch -> 0x89160
	}
	int32_t v4 = *(int32_t *)(g23 - 0x4d54); // 0x89160
	g34 = v4;
	if (v4 != 0) {
		// 0x8916c
		g34 = CloseHandle(v4);
		int32_t v5;
		*(int32_t *)(v5 - 0x4d54) = 0;
		// branch -> 0x8917c
	}
	int32_t *v6 = (int32_t *)(g23 - 0x4d58); // 0x8917c
	if (*v6 != 0) {
		// 0x89188
		*v6 = 0;
		g34 = mpqapi_store_modified_time(a1, a3);
		// branch -> 0x8919c
	}
	char *v7 = (char *)(g23 - 0x4d68); // 0x8919c
	int32_t result;                    // 0x891cc
	if (*v7 == 0) {
		// 0x8919c
		result = g34;
		// branch -> 0x891bc
	} else {
		// 0x891a8
		*v7 = 0;
		result = mpqapi_store_creation_time(a1, a3);
		// branch -> 0x891bc
	}
	// 0x891bc
	g36 = v1;
	return result;
}

// Address range: 0x891d0 - 0x89564
int32_t OpenMPQ(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x891d0
	g33 = *(int32_t *)(g23 - 0x7078);
	g35 = a1;
	g30 = a2;
	g36 = a3;
	InitHash();
	if (mpqapi_set_hidden(g35, g30) == 0) {
		// 0x89208
		// branch -> 0x89550
	} else {
		// 0x89210
		g32 = (*(char *)*(int32_t *)(g23 - 0x77f0) | 1) == 1 ? 0 : -0x80000000;
		*(char *)(g23 - 0x4d68) = 0;
		int32_t v1 = g35; // 0x89238
		g34 = v1;
		g37 = -0x40000000;
		int32_t v2 = CreateFile(v1, -0x40000000, 0, 0, 3, g32, 0); // 0x89254
		int32_t v3;
		int32_t *v4 = (int32_t *)(v3 - 0x4d54); // 0x8925c
		*v4 = v2;
		int32_t *v5 = (int32_t *)g33; // 0x89264
		g31 = *v5;
		*v5 = g30 == 0 ? 0x44537631 : 0x4453764d;
		int32_t v6; // ctr
		int32_t v7; // r3
		int32_t v8; // bp-136
		int32_t v9; // bp-32
		int32_t v10;
		int32_t v11;
		int32_t v12;    // 0x892ec
		int32_t v13;    // 0x893d4
		int32_t v14;    // 0x894d8
		int32_t result; // 0x89560
		int32_t v15;    // 0x893d4
		int32_t v16;    // 0x893e0
		int32_t v17;    // 0x893ec
		int32_t v18;    // 0x893f8
		int32_t v19;    // 0x89404
		int32_t v20;    // 0x89410
		int32_t v21;    // 0x8941c
		int32_t v22;    // 0x89428
		int32_t v23;    // 0x8942c
		int32_t v24;    // 0x89440
		int32_t v25;    // 0x894d8
		int32_t v26;    // 0x894e4
		int32_t v27;    // 0x894f0
		int32_t v28;    // 0x894fc
		int32_t v29;    // 0x89508
		int32_t v30;    // 0x89514
		int32_t v31;    // 0x89520
		int32_t v32;    // 0x8952c
		int32_t v33;    // 0x89530
		int32_t v34;    // 0x893ac
		int32_t v35;    // 0x893cc
		int32_t v36;    // 0x893d8
		int32_t v37;    // 0x893e4
		int32_t v38;    // 0x893f0
		int32_t v39;    // 0x893fc
		int32_t v40;    // 0x89408
		int32_t v41;    // 0x89414
		int32_t v42;    // 0x89420
		int32_t v43;    // 0x894b0
		int32_t v44;    // 0x894d0
		int32_t v45;    // 0x894dc
		int32_t v46;    // 0x894e8
		int32_t v47;    // 0x894f4
		int32_t v48;    // 0x89500
		int32_t v49;    // 0x8950c
		int32_t v50;    // 0x89518
		int32_t v51;    // 0x89524
		int32_t v52;    // 0x8935c
		int32_t v53;    // 0x89380
		int32_t v54;    // 0x89388
		int32_t v55;    // 0x893a4
		int32_t v56;    // 0x893c4
		int32_t v57;    // 0x89448
		int32_t v58;    // 0x89460
		int32_t v59;    // 0x89484
		int32_t v60;    // 0x8948c
		int32_t v61;    // 0x894a8
		int32_t v62;    // 0x894c8
		if (*(int32_t *)(g23 - 0x4d54) == 0) {
			int32_t v63 = g35; // 0x892a4
			g34 = v63;
			g37 = -0x40000000;
			int32_t v64 = CreateFile(v63, -0x40000000, 0, 0, 2, g32 | (g30 == 0 ? 0 : 6), 0); // 0x892c0
			*v4 = v64;
			if (v64 == 0) {
				// 0x892d4
				// branch -> 0x89550
			} else {
				// 0x892dc
				*(char *)(g23 - 0x4d68) = 1;
				*(int32_t *)(g23 - 0x4d58) = 1;
				// branch -> 0x892e8
				// 0x892e8
				*(int32_t *)g33 = g31;
				v12 = g23;
				if (*(int32_t *)(v12 - 0x4d5c) != 0) {
					// 0x892f8
					if (*(int32_t *)(v12 - 0x4d60) != 0) {
						// 0x89304
						// branch -> 0x89550
						// 0x89550
						return 1;
					}
				}
				// 0x8930c
				g34 = &v8;
				memset();
				if (ParseMPQHeader(&v8, v3 - 0x4d64) != 0) {
					// 0x89330
					g33 = (int32_t) "MoveWindow";
					g34 = (int32_t) "MoveWindow" - 0x8000;
					*(int32_t *)(g23 - 0x4d5c) = DiabloAllocPtr();
					g34 = *(int32_t *)(g23 - 0x4d5c);
					memset();
					if (v11 == 0) {
						// 0x89430
						g33 = (int32_t) "MoveWindow";
						g34 = (int32_t) "MoveWindow" - 0x8000;
						*(int32_t *)(g23 - 0x4d60) = DiabloAllocPtr();
						v24 = g33 - 0x8000;
						g37 = v24;
						v57 = *(int32_t *)(g23 - 0x4d60);
						g34 = v57;
						memset(v57, v24, 255);
						if (v10 == 0) {
							// 0x89534
							result = 1;
							// branch -> 0x89550
						} else {
							// 0x89460
							v58 = *v4;
							g34 = v58;
							if (SetFilePointer(v58, g33 - 0x7f98, 0) + (int32_t) "MoveWindow" != 0xffff) {
								// 0x89484
								v59 = *v4;
								g34 = v59;
								v60 = *(int32_t *)(v3 - 0x4d60);
								if (function_eba88(v59, v60, g33 - 0x8000, (int32_t)&v9, 0) != 0) {
									// 0x894a8
									v61 = *(int32_t *)(v3 - 0x5cb4);
									g34 = v61;
									v43 = function_4d2a4(v61, 3);
									g38 = v43;
									function_4ccac((int32_t *)*(int32_t *)(g23 - 0x4d60), g33 - 0x8000, v43);
									v62 = *(int32_t *)(g23 - 0x4d60);
									v7 = v62;
									v6 = 1024;
									int32_t v65 = v62;  // 0x894d0
									int32_t v66 = 1024; // 0x894d0
									// branch -> 0x894d0
									while (true) {
										// 0x894d0
										v44 = __asm_lwbrx(v66, v65);
										*(int32_t *)v7 = v44;
										v14 = v7;
										v25 = v14 + 4;
										v45 = __asm_lwbrx(v44, v25);
										*(int32_t *)v25 = v45;
										v26 = v14 + 8;
										v46 = __asm_lwbrx(v45, v26);
										*(int32_t *)v26 = v46;
										v27 = v14 + 12;
										v47 = __asm_lwbrx(v46, v27);
										*(int32_t *)v27 = v47;
										v28 = v14 + 16;
										v48 = __asm_lwbrx(v47, v28);
										*(int32_t *)v28 = v48;
										v29 = v14 + 20;
										v49 = __asm_lwbrx(v48, v29);
										*(int32_t *)v29 = v49;
										v30 = v14 + 24;
										v50 = __asm_lwbrx(v49, v30);
										*(int32_t *)v30 = v50;
										v31 = v14 + 28;
										v51 = __asm_lwbrx(v50, v31);
										*(int32_t *)v31 = v51;
										v32 = v14 + 32;
										v7 = v32;
										v33 = v6 - 1;
										v6 = v33;
										if (v33 == 0) {
											// 0x89534
											// branch -> 0x89550
											// 0x89550
											return 1;
										}
									lab_0x894d0_3:
										// 0x894d0
										v65 = v32;
										v66 = v51;
										// branch -> 0x894d0
									}
								}
							}
							// 0x8953c
							CloseMPQ(g35, 1, g36);
							result = 0;
							// branch -> 0x89550
						}
						// 0x89550
						return result;
					}
					// 0x8935c
					v52 = *v4;
					g34 = v52;
					if (SetFilePointer(v52, 104, 0) + (int32_t) "MoveWindow" != 0xffff) {
						// 0x89380
						v53 = *v4;
						g34 = v53;
						v54 = *(int32_t *)(v3 - 0x4d5c);
						if (function_eba88(v53, v54, g33 - 0x8000, (int32_t)&v9, 0) != 0) {
							// 0x893a4
							v55 = *(int32_t *)(v3 - 0x5cb0);
							g34 = v55;
							v34 = function_4d2a4(v55, 3);
							g38 = v34;
							function_4ccac((int32_t *)*(int32_t *)(g23 - 0x4d5c), g33 - 0x8000, v34);
							v56 = *(int32_t *)(g23 - 0x4d5c);
							v7 = v56;
							v6 = 1024;
							int32_t v67 = v56;  // 0x893cc
							int32_t v68 = 1024; // 0x893cc
							// branch -> 0x893cc
							while (true) {
								// 0x893cc
								v35 = __asm_lwbrx(v68, v67);
								*(int32_t *)v7 = v35;
								v13 = v7;
								v15 = v13 + 4;
								v36 = __asm_lwbrx(v35, v15);
								*(int32_t *)v15 = v36;
								v16 = v13 + 8;
								v37 = __asm_lwbrx(v36, v16);
								*(int32_t *)v16 = v37;
								v17 = v13 + 12;
								v38 = __asm_lwbrx(v37, v17);
								*(int32_t *)v17 = v38;
								v18 = v13 + 16;
								v39 = __asm_lwbrx(v38, v18);
								*(int32_t *)v18 = v39;
								v19 = v13 + 20;
								v40 = __asm_lwbrx(v39, v19);
								*(int32_t *)v19 = v40;
								v20 = v13 + 24;
								v41 = __asm_lwbrx(v40, v20);
								*(int32_t *)v20 = v41;
								v21 = v13 + 28;
								v42 = __asm_lwbrx(v41, v21);
								*(int32_t *)v21 = v42;
								v22 = v13 + 32;
								v7 = v22;
								v23 = v6 - 1;
								v6 = v23;
								if (v23 == 0) {
									// 0x89430
									g33 = (int32_t) "MoveWindow";
									g34 = (int32_t) "MoveWindow" - 0x8000;
									*(int32_t *)(g23 - 0x4d60) = DiabloAllocPtr();
									v24 = g33 - 0x8000;
									g37 = v24;
									v57 = *(int32_t *)(g23 - 0x4d60);
									g34 = v57;
									memset(v57, v24, 255);
									if (v10 == 0) {
										// 0x89534
										// branch -> 0x89550
										// 0x89550
										return 1;
									}
									// 0x89460
									v58 = *v4;
									g34 = v58;
									if (SetFilePointer(v58, g33 - 0x7f98, 0) + (int32_t) "MoveWindow" != 0xffff) {
										// 0x89484
										v59 = *v4;
										g34 = v59;
										v60 = *(int32_t *)(v3 - 0x4d60);
										if (function_eba88(v59, v60, g33 - 0x8000, (int32_t)&v9, 0) != 0) {
											// 0x894a8
											v61 = *(int32_t *)(v3 - 0x5cb4);
											g34 = v61;
											v43 = function_4d2a4(v61, 3);
											g38 = v43;
											function_4ccac((int32_t *)*(int32_t *)(g23 - 0x4d60), g33 - 0x8000, v43);
											v62 = *(int32_t *)(g23 - 0x4d60);
											v7 = v62;
											// branch -> 0x894d0
											while (true) {
												// 0x894d0
												v44 = __asm_lwbrx(1024, v62);
												*(int32_t *)v7 = v44;
												v14 = v7;
												v25 = v14 + 4;
												v45 = __asm_lwbrx(v44, v25);
												*(int32_t *)v25 = v45;
												v26 = v14 + 8;
												v46 = __asm_lwbrx(v45, v26);
												*(int32_t *)v26 = v46;
												v27 = v14 + 12;
												v47 = __asm_lwbrx(v46, v27);
												*(int32_t *)v27 = v47;
												v28 = v14 + 16;
												v48 = __asm_lwbrx(v47, v28);
												*(int32_t *)v28 = v48;
												v29 = v14 + 20;
												v49 = __asm_lwbrx(v48, v29);
												*(int32_t *)v29 = v49;
												v30 = v14 + 24;
												v50 = __asm_lwbrx(v49, v30);
												*(int32_t *)v30 = v50;
												v31 = v14 + 28;
												v51 = __asm_lwbrx(v50, v31);
												*(int32_t *)v31 = v51;
												v32 = v14 + 32;
												v7 = v32;
												v33 = 1023;
												v6 = v33;
												if (v33 != 0) {
													goto lab_0x894d0_3;
												}
												// 0x89534
												// branch -> 0x89550
												// 0x89550
												return 1;
											}
										}
									}
									// 0x8953c
									CloseMPQ(g35, 1, g36);
									// branch -> 0x89550
									// 0x89550
									return 0;
								}
							lab_0x893cc:
								// 0x893cc
								v67 = v22;
								v68 = v42;
								// branch -> 0x893cc
							}
						}
					}
					// 0x8953c
					CloseMPQ(g35, 1, g36);
					// branch -> 0x89550
					// 0x89550
					return 0;
				}
				// 0x8953c
				CloseMPQ(g35, 1, g36);
				// branch -> 0x89550
			}
			// 0x89550
			return 0;
		}
		// 0x892e8
		*(int32_t *)g33 = g31;
		v12 = g23;
		if (*(int32_t *)(v12 - 0x4d5c) != 0) {
			// 0x892f8
			if (*(int32_t *)(v12 - 0x4d60) != 0) {
				// 0x89304
				// branch -> 0x89550
				// 0x89550
				return 1;
			}
		}
		// 0x8930c
		g34 = &v8;
		memset();
		if (ParseMPQHeader(&v8, v3 - 0x4d64) != 0) {
			// 0x89330
			g33 = (int32_t) "MoveWindow";
			g34 = (int32_t) "MoveWindow" - 0x8000;
			*(int32_t *)(g23 - 0x4d5c) = DiabloAllocPtr();
			g34 = *(int32_t *)(g23 - 0x4d5c);
			memset();
			if (v11 == 0) {
				// 0x89430
				g33 = (int32_t) "MoveWindow";
				g34 = (int32_t) "MoveWindow" - 0x8000;
				*(int32_t *)(g23 - 0x4d60) = DiabloAllocPtr();
				v24 = g33 - 0x8000;
				g37 = v24;
				v57 = *(int32_t *)(g23 - 0x4d60);
				g34 = v57;
				memset(v57, v24, 255);
				if (v10 == 0) {
					// 0x89534
					result = 1;
					// branch -> 0x89550
				} else {
					// 0x89460
					v58 = *v4;
					g34 = v58;
					if (SetFilePointer(v58, g33 - 0x7f98, 0) + (int32_t) "MoveWindow" != 0xffff) {
						// 0x89484
						v59 = *v4;
						g34 = v59;
						v60 = *(int32_t *)(v3 - 0x4d60);
						if (function_eba88(v59, v60, g33 - 0x8000, (int32_t)&v9, 0) != 0) {
							// 0x894a8
							v61 = *(int32_t *)(v3 - 0x5cb4);
							g34 = v61;
							v43 = function_4d2a4(v61, 3);
							g38 = v43;
							function_4ccac((int32_t *)*(int32_t *)(g23 - 0x4d60), g33 - 0x8000, v43);
							v62 = *(int32_t *)(g23 - 0x4d60);
							v7 = v62;
							// branch -> 0x894d0
							while (true) {
								// 0x894d0
								v44 = __asm_lwbrx(1024, v62);
								*(int32_t *)v7 = v44;
								v14 = v7;
								v25 = v14 + 4;
								v45 = __asm_lwbrx(v44, v25);
								*(int32_t *)v25 = v45;
								v26 = v14 + 8;
								v46 = __asm_lwbrx(v45, v26);
								*(int32_t *)v26 = v46;
								v27 = v14 + 12;
								v47 = __asm_lwbrx(v46, v27);
								*(int32_t *)v27 = v47;
								v28 = v14 + 16;
								v48 = __asm_lwbrx(v47, v28);
								*(int32_t *)v28 = v48;
								v29 = v14 + 20;
								v49 = __asm_lwbrx(v48, v29);
								*(int32_t *)v29 = v49;
								v30 = v14 + 24;
								v50 = __asm_lwbrx(v49, v30);
								*(int32_t *)v30 = v50;
								v31 = v14 + 28;
								v51 = __asm_lwbrx(v50, v31);
								*(int32_t *)v31 = v51;
								v32 = v14 + 32;
								v7 = v32;
								v33 = 1023;
								v6 = v33;
								if (v33 != 0) {
									goto lab_0x894d0_3;
								}
								// 0x89534
								// branch -> 0x89550
								// 0x89550
								return 1;
							}
						}
					}
					// 0x8953c
					CloseMPQ(g35, 1, g36);
					result = 0;
					// branch -> 0x89550
				}
				// 0x89550
				return result;
			}
			// 0x8935c
			v52 = *v4;
			g34 = v52;
			if (SetFilePointer(v52, 104, 0) + (int32_t) "MoveWindow" != 0xffff) {
				// 0x89380
				v53 = *v4;
				g34 = v53;
				v54 = *(int32_t *)(v3 - 0x4d5c);
				if (function_eba88(v53, v54, g33 - 0x8000, (int32_t)&v9, 0) != 0) {
					// 0x893a4
					v55 = *(int32_t *)(v3 - 0x5cb0);
					g34 = v55;
					v34 = function_4d2a4(v55, 3);
					g38 = v34;
					function_4ccac((int32_t *)*(int32_t *)(g23 - 0x4d5c), g33 - 0x8000, v34);
					v56 = *(int32_t *)(g23 - 0x4d5c);
					v7 = v56;
					// branch -> 0x893cc
					while (true) {
						// 0x893cc
						v35 = __asm_lwbrx(1024, v56);
						*(int32_t *)v7 = v35;
						v13 = v7;
						v15 = v13 + 4;
						v36 = __asm_lwbrx(v35, v15);
						*(int32_t *)v15 = v36;
						v16 = v13 + 8;
						v37 = __asm_lwbrx(v36, v16);
						*(int32_t *)v16 = v37;
						v17 = v13 + 12;
						v38 = __asm_lwbrx(v37, v17);
						*(int32_t *)v17 = v38;
						v18 = v13 + 16;
						v39 = __asm_lwbrx(v38, v18);
						*(int32_t *)v18 = v39;
						v19 = v13 + 20;
						v40 = __asm_lwbrx(v39, v19);
						*(int32_t *)v19 = v40;
						v20 = v13 + 24;
						v41 = __asm_lwbrx(v40, v20);
						*(int32_t *)v20 = v41;
						v21 = v13 + 28;
						v42 = __asm_lwbrx(v41, v21);
						*(int32_t *)v21 = v42;
						v22 = v13 + 32;
						v7 = v22;
						v23 = 1023;
						v6 = v23;
						if (v23 != 0) {
							goto lab_0x893cc;
						}
						// 0x89430
						g33 = (int32_t) "MoveWindow";
						g34 = (int32_t) "MoveWindow" - 0x8000;
						*(int32_t *)(g23 - 0x4d60) = DiabloAllocPtr();
						v24 = g33 - 0x8000;
						g37 = v24;
						v57 = *(int32_t *)(g23 - 0x4d60);
						g34 = v57;
						memset(v57, v24, 255);
						if (v10 == 0) {
							// 0x89534
							// branch -> 0x89550
							// 0x89550
							return 1;
						}
						// 0x89460
						v58 = *v4;
						g34 = v58;
						if (SetFilePointer(v58, g33 - 0x7f98, 0) + (int32_t) "MoveWindow" != 0xffff) {
							// 0x89484
							v59 = *v4;
							g34 = v59;
							v60 = *(int32_t *)(v3 - 0x4d60);
							if (function_eba88(v59, v60, g33 - 0x8000, (int32_t)&v9, 0) != 0) {
								// 0x894a8
								v61 = *(int32_t *)(v3 - 0x5cb4);
								g34 = v61;
								v43 = function_4d2a4(v61, 3);
								g38 = v43;
								function_4ccac((int32_t *)*(int32_t *)(g23 - 0x4d60), g33 - 0x8000, v43);
								v62 = *(int32_t *)(g23 - 0x4d60);
								v7 = v62;
								// branch -> 0x894d0
								while (true) {
									// 0x894d0
									v44 = __asm_lwbrx(1024, v62);
									*(int32_t *)v7 = v44;
									v14 = v7;
									v25 = v14 + 4;
									v45 = __asm_lwbrx(v44, v25);
									*(int32_t *)v25 = v45;
									v26 = v14 + 8;
									v46 = __asm_lwbrx(v45, v26);
									*(int32_t *)v26 = v46;
									v27 = v14 + 12;
									v47 = __asm_lwbrx(v46, v27);
									*(int32_t *)v27 = v47;
									v28 = v14 + 16;
									v48 = __asm_lwbrx(v47, v28);
									*(int32_t *)v28 = v48;
									v29 = v14 + 20;
									v49 = __asm_lwbrx(v48, v29);
									*(int32_t *)v29 = v49;
									v30 = v14 + 24;
									v50 = __asm_lwbrx(v49, v30);
									*(int32_t *)v30 = v50;
									v31 = v14 + 28;
									v51 = __asm_lwbrx(v50, v31);
									*(int32_t *)v31 = v51;
									v32 = v14 + 32;
									v7 = v32;
									v33 = 1023;
									v6 = v33;
									if (v33 != 0) {
										goto lab_0x894d0_3;
									}
									// 0x89534
									// branch -> 0x89550
									// 0x89550
									return 1;
								}
							}
						}
						// 0x8953c
						CloseMPQ(g35, 1, g36);
						// branch -> 0x89550
						// 0x89550
						return 0;
					}
				}
			}
			// 0x8953c
			CloseMPQ(g35, 1, g36);
			// branch -> 0x89550
			// 0x89550
			return 0;
		}
		// 0x8953c
		CloseMPQ(g35, 1, g36);
		// branch -> 0x89550
	}
	// 0x89550
	return 0;
}

// Address range: 0x89564 - 0x8963c
int32_t mpqapi_flush_and_close(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x89564
	g35 = a3;
	int32_t v1 = g33; // 0x89574
	g33 = a2;
	int32_t v2 = g32; // 0x8957c
	g32 = a1;
	if (*(int32_t *)(g23 - 0x4d54) == 0 || *(int32_t *)(g23 - 0x4d58) == 0) {
		// 0x89598
		g36 = 1;
		// branch -> 0x89608
		// 0x89608
		CloseMPQ(g32, g33, g35);
		g33 = v1;
		g32 = v2;
		return g36;
	}
	int32_t v3 = mpqapi_can_seek(); // 0x895b4
	if (v3 == 0) {
		// 0x895c0
		g36 = 0;
		// branch -> 0x89608
		// 0x89608
		CloseMPQ(g32, g33, g35);
		g33 = v1;
		g32 = v2;
		return g36;
	}
	int32_t v4 = WriteMPQHeader(v3); // 0x895c8
	if (v4 == 0) {
		// 0x895d4
		g36 = 0;
		// branch -> 0x89608
		// 0x89608
		CloseMPQ(g32, g33, g35);
		g33 = v1;
		g32 = v2;
		return g36;
	}
	int32_t v5 = mpqapi_write_block_table(v4); // 0x895dc
	if (v5 == 0) {
		// 0x895e8
		g36 = 0;
		// branch -> 0x89608
		// 0x89608
		CloseMPQ(g32, g33, g35);
		g33 = v1;
		g32 = v2;
		return g36;
	}
	// 0x895f0
	if (mpqapi_write_hash_table(v5) == 0) {
		// 0x895fc
		g36 = 0;
		// branch -> 0x89608
	} else {
		// 0x89604
		g36 = 1;
		// branch -> 0x89608
	}
	// 0x89608
	CloseMPQ(g32, g33, g35);
	g33 = v1;
	g32 = v2;
	return g36;
}
