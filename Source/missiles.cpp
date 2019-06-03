
// Address range: 0x6cbc0 - 0x6cc08
int32_t GetDamageAmt(uint32_t result, int32_t a2, int32_t a3)
{
	// 0x6cbc0
	if (result > 36) {
		// bb
	}
	// 0x6cbf4
	return result;
}

// Address range: 0x6cc08 - 0x6cc40
int32_t function_6cc08(int32_t *a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = a4 + 360; // 0x6cc08
	*a1 = *(int32_t *)v1 / 8 + a5 + 1;
	int32_t result = *(int32_t *)(v1 + 0x55ec * a3) / 8 + a5; // 0x6cc30
	*(int32_t *)a2 = result + 10;
	return result;
}

// Address range: 0x6cc40 - 0x6cde8
int32_t function_6cc40(int32_t *a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = (int32_t)a1;  // r4
	int32_t result = a4 + 348; // r3
	*a1 = (int32_t) * (char *)436 + a5 + 1;
	if (*(char *)(result + 0x55ec * a3) == 0) {
		// 0x6cc6c
		*(int32_t *)v1 = 2 * v1;
		// branch -> 0x6cc78
	}
	// 0x6cc78
	if (*(char *)(0x55ec * a3 + result) == 1) {
		int32_t v2 = (v1 / 2 | v1 & -0x80000000) + v1; // 0x6cc98
		*(int32_t *)v1 = v2;
		// branch -> 0x6cca0
	}
	// 0x6cca0
	*(int32_t *)a2 = 10;
	int32_t v3 = 0; // 0x6ccb4
	// branch -> 0x6ccc0
	while (true) {
		// 0x6ccc0
		if (v3 >= (int32_t) * (char *)(a4 + 0x55ec * a3 + 436)) {
			// 0x6ccdc
			int32_t v4;      // 0x6cd98
			int32_t v5;      // 0x6cdb8
			int32_t v6;      // 0x6cd90
			int32_t v7;      // 0x6cda4
			int32_t v8;      // 0x6cdb0
			int32_t result2; // 0x6cdc8
			if (a5 >= 1) {
				int32_t v9 = a5; // 0x6cd70
				int32_t v10 = 0; // 0x6cd70
				if (a5 >= 9) {
					// 0x6ccf4
					if (a5 >= 9) {
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						int32_t v11 = (a5 - 1) / 8 - 1; // 0x6cd6c
						int32_t v12 = 8;
						while (v11 != 0) {
							// 0x6cd08
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							v11--;
							v12 += 8;
							// continue -> 0x6cd08
						}
						// 0x6cd70
						v9 = a5;
						v10 = v12;
						// branch -> 0x6cd70
					} else {
						v9 = a5;
						v10 = 0;
					}
				}
				// 0x6cd70
				if (v9 > v10) {
					*(int32_t *)a2 = a2 + 6;
					int32_t v13 = v9 - v10 - 1; // 0x6cd8c
					while (v13 != 0) {
						// 0x6cd80
						*(int32_t *)a2 = a2 + 6;
						v13--;
						// continue -> 0x6cd80
					}
					// 0x6cd90
					v6 = a3;
					v4 = result;
					v5 = v4;
					v8 = v6;
					if (*(char *)(v4 + 0x55ec * v6) == 0) {
						// 0x6cda4
						v7 = a2;
						*(int32_t *)v7 = 2 * v7;
						v5 = result;
						v8 = a3;
						// branch -> 0x6cdb0
					}
					// 0x6cdb0
					if (*(char *)(0x55ec * v8 + v5) != 1) {
						// 0x6cdd8
						*(int32_t *)v1 = -1;
						*(int32_t *)a2 = -1;
						return result;
					}
					// 0x6cdc8
					result2 = a2;
					*(int32_t *)result2 = (result2 / 2 | result2 & -0x80000000) + result2;
					// branch -> 0x6cdd8
					// 0x6cdd8
					*(int32_t *)v1 = -1;
					*(int32_t *)a2 = -1;
					return result2;
				}
			}
			// 0x6cd90
			v6 = a3;
			v4 = result;
			v5 = v4;
			v8 = v6;
			if (*(char *)(v4 + 0x55ec * v6) == 0) {
				// 0x6cda4
				v7 = a2;
				*(int32_t *)v7 = 2 * v7;
				v5 = result;
				v8 = a3;
				// branch -> 0x6cdb0
			}
			// 0x6cdb0
			if (*(char *)(0x55ec * v8 + v5) != 1) {
				// 0x6cdd8
				*(int32_t *)v1 = -1;
				*(int32_t *)a2 = -1;
				return result;
			}
			// 0x6cdc8
			result2 = a2;
			*(int32_t *)result2 = (result2 / 2 | result2 & -0x80000000) + result2;
			// branch -> 0x6cdd8
			// 0x6cdd8
			*(int32_t *)v1 = -1;
			*(int32_t *)a2 = -1;
			return result2;
		}
		// 0x6ccb0
		*(int32_t *)a2 = a2 + 4;
		v3++;
		// branch -> 0x6ccc0
	}
}

// Address range: 0x6cde8 - 0x6ce10
int32_t function_6cde8(int32_t *a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x6cde8
	*a1 = 2;
	int32_t result = (int32_t) * (char *)(0x55ec * a3 + a4 + 436); // 0x6ce00
	*(int32_t *)a2 = result + 2;
	return result;
}

// Address range: 0x6ce10 - 0x6cef4
int32_t function_6ce10(int32_t *a1, int32_t a2, int32_t a3)
{
	int32_t v1 = (int32_t)a1; // r4
	*a1 = (int32_t) * (char *)436;
	int32_t result; // 0x6ced4
	if (a3 < 1) {
		// 0x6ced4
		result = v1;
		*(int32_t *)result = (result / 2 | result & -0x80000000) + result;
		*(int32_t *)a2 = 2 * v1;
		return result;
	}
	int32_t v2 = __asm_rlwinm_(a3, 29, 3, 31); // 0x6ce24
	int32_t v3;                                // 0x6cebc
	if (v2 == 0) {
		// 0x6ce24
		v3 = a3;
		// branch -> 0x6cebc
	} else {
		*(int32_t *)v1 = v1 / 8 + v1;
		*(int32_t *)v1 = v1 / 8 + v1;
		*(int32_t *)v1 = v1 / 8 + v1;
		*(int32_t *)v1 = v1 / 8 + v1;
		*(int32_t *)v1 = v1 / 8 + v1;
		*(int32_t *)v1 = v1 / 8 + v1;
		*(int32_t *)v1 = v1 / 8 + v1;
		*(int32_t *)v1 = v1 / 8 + v1;
		int32_t v4 = v2 - 1; // 0x6ceb0
		while (v4 != 0) {
			// 0x6ce30
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			v4--;
			// continue -> 0x6ce30
		}
		int32_t v5 = a3 % 8; // 0x6ceb4
		if (v5 == 0) {
			// 0x6ced4
			result = v1;
			*(int32_t *)result = (result / 2 | result & -0x80000000) + result;
			*(int32_t *)a2 = 2 * v1;
			return result;
		}
		v3 = v5;
	}
	// 0x6cebc
	*(int32_t *)v1 = v1 / 8 + v1;
	int32_t v6 = v3 - 1; // 0x6ced0
	// branch -> 0x6cec0
	while (v6 != 0) {
		// 0x6cec0
		*(int32_t *)v1 = v1 / 8 + v1;
		v6--;
		// continue -> 0x6cec0
	}
	// 0x6ced4
	// branch -> 0x6ced4
	// 0x6ced4
	result = v1;
	*(int32_t *)result = (result / 2 | result & -0x80000000) + result;
	*(int32_t *)a2 = 2 * v1;
	return result;
}

// Address range: 0x6cef4 - 0x6cf04
int32_t function_6cef4(int32_t *a1, int32_t a2)
{
	// 0x6cef4
	*a1 = -1;
	*(int32_t *)a2 = -1;
	return 0;
}

// Address range: 0x6cf04 - 0x6cf44
int32_t function_6cf04(int32_t *a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = a4 + 436;                        // 0x6cf04
	uint32_t v2 = 4 * (int32_t) * (char *)v1 + 8; // 0x6cf14
	*a1 = v2 / 2 | v2 & -0x80000000;
	int32_t result = (int32_t) * (char *)(v1 + 0x55ec * a3); // 0x6cf2c
	uint32_t v3 = 4 * result + 80;                           // 0x6cf34
	*(int32_t *)a2 = v3 / 2 | v3 & -0x80000000;
	return result;
}

// Address range: 0x6cf44 - 0x6d0f0
int32_t function_6cf44(int32_t *a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = (int32_t)a1; // r4
	int32_t v2 = a4 + 436;    // 0x6cf44
	*a1 = 0x1000000 * (int32_t) * (char *)v2 / 0x800000 + 4;
	int32_t result2 = a5; // r3
	int32_t v3;           // 0x6d01c
	int32_t v4;           // 0x6d0d4
	int32_t v5;           // 0x6d03c
	int32_t v6;           // 0x6d0c8
	int32_t v7;           // 0x6d0cc
	int32_t v8;           // 0x6d0e8
	int32_t v9;           // 0x6d048
	int32_t v10;          // 0x6d058
	int32_t v11;          // 0x6d068
	int32_t v12;          // 0x6d078
	int32_t v13;          // 0x6d088
	int32_t v14;          // 0x6d098
	int32_t v15;          // 0x6d0a8
	int32_t v16;          // 0x6d0b8
	int32_t v17;          // 0x6d0d8
	int32_t result;       // 0x6d038
	if (a5 >= 1) {
		int32_t v18 = __asm_rlwinm_(a5, 29, 3, 31); // 0x6cf68
		int32_t v19;                                // 0x6d000
		if (v18 == 0) {
			// 0x6cf68
			v19 = result2;
			// branch -> 0x6d000
		} else {
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			int32_t v20 = v18 - 1; // 0x6cff4
			while (v20 != 0) {
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				v20--;
				// continue -> 0x6cf74
			}
			int32_t v21 = result2 % 8; // 0x6cff8
			if (v21 == 0) {
				// 0x6d018
				v3 = a5;
				result2 = v3;
				*(int32_t *)a2 = 2 * (int32_t) * (char *)(v2 + 0x55ec * a3) + 40;
				result = result2;
				if (v3 < 1) {
					// bb
					return result;
				}
				// 0x6d03c
				v5 = __asm_rlwinm_(result, 29, 3, 31);
				if (v5 == 0) {
					// 0x6d03c
					v4 = result2;
					// branch -> 0x6d0d4
				} else {
					v9 = a2;
					*(int32_t *)v9 = v9 / 8 + v9;
					v10 = a2;
					*(int32_t *)v10 = v10 / 8 + v10;
					v11 = a2;
					*(int32_t *)v11 = v11 / 8 + v11;
					v12 = a2;
					*(int32_t *)v12 = v12 / 8 + v12;
					v13 = a2;
					*(int32_t *)v13 = v13 / 8 + v13;
					v14 = a2;
					*(int32_t *)v14 = v14 / 8 + v14;
					v15 = a2;
					*(int32_t *)v15 = v15 / 8 + v15;
					v16 = a2;
					*(int32_t *)v16 = v16 / 8 + v16;
					v6 = v5 - 1;
					while (v6 != 0) {
						// 0x6d048
						v9 = a2;
						*(int32_t *)v9 = v9 / 8 + v9;
						v10 = a2;
						*(int32_t *)v10 = v10 / 8 + v10;
						v11 = a2;
						*(int32_t *)v11 = v11 / 8 + v11;
						v12 = a2;
						*(int32_t *)v12 = v12 / 8 + v12;
						v13 = a2;
						*(int32_t *)v13 = v13 / 8 + v13;
						v14 = a2;
						*(int32_t *)v14 = v14 / 8 + v14;
						v15 = a2;
						*(int32_t *)v15 = v15 / 8 + v15;
						v16 = a2;
						*(int32_t *)v16 = v16 / 8 + v16;
						v6--;
						// continue -> 0x6d048
					}
					// 0x6d0cc
					v7 = result2 % 8;
					result2 = v7;
					if (v7 == 0) {
						// bb
						return 0;
					}
					v4 = v7;
				}
				// 0x6d0d4
				v17 = a2;
				*(int32_t *)v17 = v17 / 8 + v17;
				v8 = v4 - 1;
				// branch -> 0x6d0d8
				while (v8 != 0) {
					// 0x6d0d8
					v17 = a2;
					*(int32_t *)v17 = v17 / 8 + v17;
					v8--;
					// continue -> 0x6d0d8
				}
				// 0x6d0ec
				return result2;
			}
			v19 = v21;
		}
		// 0x6d000
		*(int32_t *)v1 = v1 / 8 + v1;
		int32_t v22 = v19 - 1; // 0x6d014
		// branch -> 0x6d004
		while (v22 != 0) {
			*(int32_t *)v1 = v1 / 8 + v1;
			v22--;
			// continue -> 0x6d004
		}
		// 0x6d018
		// branch -> 0x6d018
	}
	// 0x6d018
	v3 = a5;
	result2 = v3;
	*(int32_t *)a2 = 2 * (int32_t) * (char *)(v2 + 0x55ec * a3) + 40;
	result = result2;
	if (v3 < 1) {
		// bb
		return result;
	}
	// 0x6d03c
	v5 = __asm_rlwinm_(result, 29, 3, 31);
	if (v5 == 0) {
		// 0x6d03c
		v4 = result2;
		// branch -> 0x6d0d4
	} else {
		v9 = a2;
		*(int32_t *)v9 = v9 / 8 + v9;
		v10 = a2;
		*(int32_t *)v10 = v10 / 8 + v10;
		v11 = a2;
		*(int32_t *)v11 = v11 / 8 + v11;
		v12 = a2;
		*(int32_t *)v12 = v12 / 8 + v12;
		v13 = a2;
		*(int32_t *)v13 = v13 / 8 + v13;
		v14 = a2;
		*(int32_t *)v14 = v14 / 8 + v14;
		v15 = a2;
		*(int32_t *)v15 = v15 / 8 + v15;
		v16 = a2;
		*(int32_t *)v16 = v16 / 8 + v16;
		v6 = v5 - 1;
		while (v6 != 0) {
			// 0x6d048
			v9 = a2;
			*(int32_t *)v9 = v9 / 8 + v9;
			v10 = a2;
			*(int32_t *)v10 = v10 / 8 + v10;
			v11 = a2;
			*(int32_t *)v11 = v11 / 8 + v11;
			v12 = a2;
			*(int32_t *)v12 = v12 / 8 + v12;
			v13 = a2;
			*(int32_t *)v13 = v13 / 8 + v13;
			v14 = a2;
			*(int32_t *)v14 = v14 / 8 + v14;
			v15 = a2;
			*(int32_t *)v15 = v15 / 8 + v15;
			v16 = a2;
			*(int32_t *)v16 = v16 / 8 + v16;
			v6--;
			// continue -> 0x6d048
		}
		// 0x6d0cc
		v7 = result2 % 8;
		result2 = v7;
		if (v7 == 0) {
			// bb
			return 0;
		}
		v4 = v7;
	}
	// 0x6d0d4
	v17 = a2;
	*(int32_t *)v17 = v17 / 8 + v17;
	v8 = v4 - 1;
	// branch -> 0x6d0d8
	while (v8 != 0) {
		// 0x6d0d8
		v17 = a2;
		*(int32_t *)v17 = v17 / 8 + v17;
		v8--;
		// continue -> 0x6d0d8
	}
	// 0x6d0ec
	return result2;
}

// Address range: 0x6d0f0 - 0x6d29c
int32_t function_6d0f0(int32_t *a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = (int32_t)a1;       // r4
	int32_t v2 = a4 + 436;          // 0x6d0f0
	unsigned char v3 = *(char *)v2; // 0x6d0f4
	*a1 = (0x1000000 * (int32_t)v3 & -0x80000000 | (int32_t)v3 / 2) + 1;
	int32_t result2 = a5; // r3
	int32_t v4;           // 0x6d1c8
	int32_t v5;           // 0x6d280
	int32_t v6;           // 0x6d1e8
	int32_t v7;           // 0x6d274
	int32_t v8;           // 0x6d278
	int32_t v9;           // 0x6d294
	uint32_t v10;         // 0x6d1d4
	int32_t v11;          // 0x6d1f4
	int32_t v12;          // 0x6d204
	int32_t v13;          // 0x6d214
	int32_t v14;          // 0x6d224
	int32_t v15;          // 0x6d234
	int32_t v16;          // 0x6d244
	int32_t v17;          // 0x6d254
	int32_t v18;          // 0x6d264
	int32_t v19;          // 0x6d284
	int32_t result;       // 0x6d1e4
	if (a5 >= 1) {
		int32_t v20 = __asm_rlwinm_(a5, 29, 3, 31); // 0x6d114
		int32_t v21;                                // 0x6d1ac
		if (v20 == 0) {
			// 0x6d114
			v21 = result2;
			// branch -> 0x6d1ac
		} else {
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			int32_t v22 = v20 - 1; // 0x6d1a0
			while (v22 != 0) {
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				v22--;
				// continue -> 0x6d120
			}
			int32_t v23 = result2 % 8; // 0x6d1a4
			if (v23 == 0) {
				// 0x6d1c4
				v4 = a5;
				result2 = v4;
				v10 = (int32_t) * (char *)(v2 + 0x55ec * a3);
				*(int32_t *)a2 = (v10 / 2 | v10 & -0x80000000) + 10;
				result = result2;
				if (v4 < 1) {
					// bb
					return result;
				}
				// 0x6d1e8
				v6 = __asm_rlwinm_(result, 29, 3, 31);
				if (v6 == 0) {
					// 0x6d1e8
					v5 = result2;
					// branch -> 0x6d280
				} else {
					v11 = a2;
					*(int32_t *)v11 = v11 / 8 + v11;
					v12 = a2;
					*(int32_t *)v12 = v12 / 8 + v12;
					v13 = a2;
					*(int32_t *)v13 = v13 / 8 + v13;
					v14 = a2;
					*(int32_t *)v14 = v14 / 8 + v14;
					v15 = a2;
					*(int32_t *)v15 = v15 / 8 + v15;
					v16 = a2;
					*(int32_t *)v16 = v16 / 8 + v16;
					v17 = a2;
					*(int32_t *)v17 = v17 / 8 + v17;
					v18 = a2;
					*(int32_t *)v18 = v18 / 8 + v18;
					v7 = v6 - 1;
					while (v7 != 0) {
						// 0x6d1f4
						v11 = a2;
						*(int32_t *)v11 = v11 / 8 + v11;
						v12 = a2;
						*(int32_t *)v12 = v12 / 8 + v12;
						v13 = a2;
						*(int32_t *)v13 = v13 / 8 + v13;
						v14 = a2;
						*(int32_t *)v14 = v14 / 8 + v14;
						v15 = a2;
						*(int32_t *)v15 = v15 / 8 + v15;
						v16 = a2;
						*(int32_t *)v16 = v16 / 8 + v16;
						v17 = a2;
						*(int32_t *)v17 = v17 / 8 + v17;
						v18 = a2;
						*(int32_t *)v18 = v18 / 8 + v18;
						v7--;
						// continue -> 0x6d1f4
					}
					// 0x6d278
					v8 = result2 % 8;
					result2 = v8;
					if (v8 == 0) {
						// bb
						return 0;
					}
					v5 = v8;
				}
				// 0x6d280
				v19 = a2;
				*(int32_t *)v19 = v19 / 8 + v19;
				v9 = v5 - 1;
				// branch -> 0x6d284
				while (v9 != 0) {
					// 0x6d284
					v19 = a2;
					*(int32_t *)v19 = v19 / 8 + v19;
					v9--;
					// continue -> 0x6d284
				}
				// 0x6d298
				return result2;
			}
			v21 = v23;
		}
		// 0x6d1ac
		*(int32_t *)v1 = v1 / 8 + v1;
		int32_t v24 = v21 - 1; // 0x6d1c0
		// branch -> 0x6d1b0
		while (v24 != 0) {
			*(int32_t *)v1 = v1 / 8 + v1;
			v24--;
			// continue -> 0x6d1b0
		}
		// 0x6d1c4
		// branch -> 0x6d1c4
	}
	// 0x6d1c4
	v4 = a5;
	result2 = v4;
	v10 = (int32_t) * (char *)(v2 + 0x55ec * a3);
	*(int32_t *)a2 = (v10 / 2 | v10 & -0x80000000) + 10;
	result = result2;
	if (v4 < 1) {
		// bb
		return result;
	}
	// 0x6d1e8
	v6 = __asm_rlwinm_(result, 29, 3, 31);
	if (v6 == 0) {
		// 0x6d1e8
		v5 = result2;
		// branch -> 0x6d280
	} else {
		v11 = a2;
		*(int32_t *)v11 = v11 / 8 + v11;
		v12 = a2;
		*(int32_t *)v12 = v12 / 8 + v12;
		v13 = a2;
		*(int32_t *)v13 = v13 / 8 + v13;
		v14 = a2;
		*(int32_t *)v14 = v14 / 8 + v14;
		v15 = a2;
		*(int32_t *)v15 = v15 / 8 + v15;
		v16 = a2;
		*(int32_t *)v16 = v16 / 8 + v16;
		v17 = a2;
		*(int32_t *)v17 = v17 / 8 + v17;
		v18 = a2;
		*(int32_t *)v18 = v18 / 8 + v18;
		v7 = v6 - 1;
		while (v7 != 0) {
			// 0x6d1f4
			v11 = a2;
			*(int32_t *)v11 = v11 / 8 + v11;
			v12 = a2;
			*(int32_t *)v12 = v12 / 8 + v12;
			v13 = a2;
			*(int32_t *)v13 = v13 / 8 + v13;
			v14 = a2;
			*(int32_t *)v14 = v14 / 8 + v14;
			v15 = a2;
			*(int32_t *)v15 = v15 / 8 + v15;
			v16 = a2;
			*(int32_t *)v16 = v16 / 8 + v16;
			v17 = a2;
			*(int32_t *)v17 = v17 / 8 + v17;
			v18 = a2;
			*(int32_t *)v18 = v18 / 8 + v18;
			v7--;
			// continue -> 0x6d1f4
		}
		// 0x6d278
		v8 = result2 % 8;
		result2 = v8;
		if (v8 == 0) {
			// bb
			return 0;
		}
		v5 = v8;
	}
	// 0x6d280
	v19 = a2;
	*(int32_t *)v19 = v19 / 8 + v19;
	v9 = v5 - 1;
	// branch -> 0x6d284
	while (v9 != 0) {
		// 0x6d284
		v19 = a2;
		*(int32_t *)v19 = v19 / 8 + v19;
		v9--;
		// continue -> 0x6d284
	}
	// 0x6d298
	return result2;
}

// Address range: 0x6d29c - 0x6d2c8
int32_t function_6d29c(int32_t *a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x6d29c
	*a1 = 4;
	int32_t result = (int32_t) * (char *)(0x55ec * a3 + a4 + 436); // 0x6d2b4
	*(int32_t *)a2 = 2 * result + 4;
	return result;
}

// Address range: 0x6d2c8 - 0x6d310
int32_t function_6d2c8(int32_t *a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = a4 + 436; // 0x6d2c8
	*a1 = 6 * ((int32_t) * (char *)v1 + 1);
	int32_t v2 = (int32_t) * (char *)(v1 + 0x55ec * a3) + 10; // 0x6d2f8
	*(int32_t *)a2 = 6 * v2;
	return 4 * v2;
}

// Address range: 0x6d310 - 0x6d4e0
int32_t function_6d310(int32_t *a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = (int32_t)a1;                 // r4
	int32_t v2 = a4 + 436;                    // 0x6d310
	uint32_t v3 = (int32_t) * (char *)v2 + 5; // 0x6d320
	*a1 = v3 / 2 | v3 & -0x80000000;
	int32_t v4 = a5; // r3
	int32_t v5;      // 0x6d3e8
	int32_t v6;      // 0x6d4b4
	uint32_t v7;     // 0x6d40c
	int32_t v8;      // 0x6d41c
	int32_t v9;      // 0x6d4a8
	int32_t v10;     // 0x6d4ac
	int32_t v11;     // 0x6d4c8
	int32_t v12;     // 0x6d3e4
	int32_t v13;     // 0x6d428
	int32_t v14;     // 0x6d438
	int32_t v15;     // 0x6d448
	int32_t v16;     // 0x6d458
	int32_t v17;     // 0x6d468
	int32_t v18;     // 0x6d478
	int32_t v19;     // 0x6d488
	int32_t v20;     // 0x6d498
	int32_t v21;     // 0x6d4b8
	int32_t result;  // 0x6d4cc
	if (a5 >= 1) {
		int32_t v22 = __asm_rlwinm_(a5, 29, 3, 31); // 0x6d334
		int32_t v23;                                // 0x6d3cc
		if (v22 == 0) {
			// 0x6d334
			v23 = v4;
			// branch -> 0x6d3cc
		} else {
			int32_t v24 = v1; // 0x6d340
			*(int32_t *)v24 = v24 / 8 + v24;
			int32_t v25 = v1; // 0x6d350
			*(int32_t *)v25 = v25 / 8 + v25;
			int32_t v26 = v1; // 0x6d360
			*(int32_t *)v26 = v26 / 8 + v26;
			int32_t v27 = v1; // 0x6d370
			*(int32_t *)v27 = v27 / 8 + v27;
			int32_t v28 = v1; // 0x6d380
			*(int32_t *)v28 = v28 / 8 + v28;
			int32_t v29 = v1; // 0x6d390
			*(int32_t *)v29 = v29 / 8 + v29;
			int32_t v30 = v1; // 0x6d3a0
			*(int32_t *)v30 = v30 / 8 + v30;
			int32_t v31 = v1; // 0x6d3b0
			*(int32_t *)v31 = v31 / 8 + v31;
			int32_t v32 = v22 - 1; // 0x6d3c0
			while (v32 != 0) {
				// 0x6d340
				v24 = v1;
				*(int32_t *)v24 = v24 / 8 + v24;
				v25 = v1;
				*(int32_t *)v25 = v25 / 8 + v25;
				v26 = v1;
				*(int32_t *)v26 = v26 / 8 + v26;
				v27 = v1;
				*(int32_t *)v27 = v27 / 8 + v27;
				v28 = v1;
				*(int32_t *)v28 = v28 / 8 + v28;
				v29 = v1;
				*(int32_t *)v29 = v29 / 8 + v29;
				v30 = v1;
				*(int32_t *)v30 = v30 / 8 + v30;
				v31 = v1;
				*(int32_t *)v31 = v31 / 8 + v31;
				v32--;
				// continue -> 0x6d340
			}
			int32_t v33 = v4 % 8; // 0x6d3c4
			if (v33 == 0) {
				// 0x6d3e4
				v12 = v1;
				v5 = a5;
				*(int32_t *)v12 = 5 * v12;
				v4 = v5;
				v7 = (int32_t) * (char *)(v2 + 0x55ec * a3) + 30;
				*(int32_t *)a2 = v7 / 2 | v7 & -0x80000000;
				if (v5 < 1) {
					// 0x6d4cc
					result = a2;
					*(int32_t *)result = 5 * result;
					return result;
				}
				// 0x6d41c
				v8 = __asm_rlwinm_(v4, 29, 3, 31);
				if (v8 == 0) {
					// 0x6d41c
					v6 = v4;
					// branch -> 0x6d4b4
				} else {
					v13 = a2;
					*(int32_t *)v13 = v13 / 8 + v13;
					v14 = a2;
					*(int32_t *)v14 = v14 / 8 + v14;
					v15 = a2;
					*(int32_t *)v15 = v15 / 8 + v15;
					v16 = a2;
					*(int32_t *)v16 = v16 / 8 + v16;
					v17 = a2;
					*(int32_t *)v17 = v17 / 8 + v17;
					v18 = a2;
					*(int32_t *)v18 = v18 / 8 + v18;
					v19 = a2;
					*(int32_t *)v19 = v19 / 8 + v19;
					v20 = a2;
					*(int32_t *)v20 = v20 / 8 + v20;
					v9 = v8 - 1;
					while (v9 != 0) {
						// 0x6d428
						v13 = a2;
						*(int32_t *)v13 = v13 / 8 + v13;
						v14 = a2;
						*(int32_t *)v14 = v14 / 8 + v14;
						v15 = a2;
						*(int32_t *)v15 = v15 / 8 + v15;
						v16 = a2;
						*(int32_t *)v16 = v16 / 8 + v16;
						v17 = a2;
						*(int32_t *)v17 = v17 / 8 + v17;
						v18 = a2;
						*(int32_t *)v18 = v18 / 8 + v18;
						v19 = a2;
						*(int32_t *)v19 = v19 / 8 + v19;
						v20 = a2;
						*(int32_t *)v20 = v20 / 8 + v20;
						v9--;
						// continue -> 0x6d428
					}
					// 0x6d4ac
					v10 = v4 % 8;
					if (v10 == 0) {
						// 0x6d4cc
						result = a2;
						*(int32_t *)result = 5 * result;
						return result;
					}
					v6 = v10;
				}
				// 0x6d4b4
				v21 = a2;
				*(int32_t *)v21 = v21 / 8 + v21;
				v11 = v6 - 1;
				// branch -> 0x6d4b8
				while (v11 != 0) {
					// 0x6d4b8
					v21 = a2;
					*(int32_t *)v21 = v21 / 8 + v21;
					v11--;
					// continue -> 0x6d4b8
				}
				// 0x6d4cc
				// branch -> 0x6d4cc
				// 0x6d4cc
				result = a2;
				*(int32_t *)result = 5 * result;
				return result;
			}
			v23 = v33;
		}
		int32_t v34 = v1; // 0x6d3d0
		*(int32_t *)v34 = v34 / 8 + v34;
		int32_t v35 = v23 - 1; // 0x6d3e0
		// branch -> 0x6d3d0
		while (v35 != 0) {
			// 0x6d3d0
			v34 = v1;
			*(int32_t *)v34 = v34 / 8 + v34;
			v35--;
			// continue -> 0x6d3d0
		}
		// 0x6d3e4
		// branch -> 0x6d3e4
	}
	// 0x6d3e4
	v12 = v1;
	v5 = a5;
	*(int32_t *)v12 = 5 * v12;
	v4 = v5;
	v7 = (int32_t) * (char *)(v2 + 0x55ec * a3) + 30;
	*(int32_t *)a2 = v7 / 2 | v7 & -0x80000000;
	if (v5 < 1) {
		// 0x6d4cc
		result = a2;
		*(int32_t *)result = 5 * result;
		return result;
	}
	// 0x6d41c
	v8 = __asm_rlwinm_(v4, 29, 3, 31);
	if (v8 == 0) {
		// 0x6d41c
		v6 = v4;
		// branch -> 0x6d4b4
	} else {
		v13 = a2;
		*(int32_t *)v13 = v13 / 8 + v13;
		v14 = a2;
		*(int32_t *)v14 = v14 / 8 + v14;
		v15 = a2;
		*(int32_t *)v15 = v15 / 8 + v15;
		v16 = a2;
		*(int32_t *)v16 = v16 / 8 + v16;
		v17 = a2;
		*(int32_t *)v17 = v17 / 8 + v17;
		v18 = a2;
		*(int32_t *)v18 = v18 / 8 + v18;
		v19 = a2;
		*(int32_t *)v19 = v19 / 8 + v19;
		v20 = a2;
		*(int32_t *)v20 = v20 / 8 + v20;
		v9 = v8 - 1;
		while (v9 != 0) {
			// 0x6d428
			v13 = a2;
			*(int32_t *)v13 = v13 / 8 + v13;
			v14 = a2;
			*(int32_t *)v14 = v14 / 8 + v14;
			v15 = a2;
			*(int32_t *)v15 = v15 / 8 + v15;
			v16 = a2;
			*(int32_t *)v16 = v16 / 8 + v16;
			v17 = a2;
			*(int32_t *)v17 = v17 / 8 + v17;
			v18 = a2;
			*(int32_t *)v18 = v18 / 8 + v18;
			v19 = a2;
			*(int32_t *)v19 = v19 / 8 + v19;
			v20 = a2;
			*(int32_t *)v20 = v20 / 8 + v20;
			v9--;
			// continue -> 0x6d428
		}
		// 0x6d4ac
		v10 = v4 % 8;
		if (v10 == 0) {
			// 0x6d4cc
			result = a2;
			*(int32_t *)result = 5 * result;
			return result;
		}
		v6 = v10;
	}
	// 0x6d4b4
	v21 = a2;
	*(int32_t *)v21 = v21 / 8 + v21;
	v11 = v6 - 1;
	// branch -> 0x6d4b8
	while (v11 != 0) {
		// 0x6d4b8
		v21 = a2;
		*(int32_t *)v21 = v21 / 8 + v21;
		v11--;
		// continue -> 0x6d4b8
	}
	// 0x6d4cc
	// branch -> 0x6d4cc
	// 0x6d4cc
	result = a2;
	*(int32_t *)result = 5 * result;
	return result;
}

// Address range: 0x6d4e0 - 0x6d528
int32_t function_6d4e0(int32_t *a1, int32_t result, int32_t a3, int32_t a4)
{
	uint32_t v1 = (int32_t)a1;
	*a1 = (v1 / 2 | v1 & -0x80000000) + v1;
	*(int32_t *)result = (int32_t) * (char *)(a4 + 0x55ec * a3 + 436) + 4;
	*(int32_t *)result = (result / 2 | result & -0x80000000) + result;
	return result;
}

// Address range: 0x6d528 - 0x6d53c
int32_t function_6d528(int32_t *a1, int32_t a2)
{
	// 0x6d528
	*a1 = 11;
	*(int32_t *)a2 = 17;
	return 0;
}

// Address range: 0x6d53c - 0x6d5b0
int32_t function_6d53c(int32_t *a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = 0; // r8
	*a1 = 0;
	// branch -> 0x6d558
	while (true) {
		int32_t v2 = v1; // 0x6d56c
		if (v2 < (int32_t) * (char *)(a4 + 0x55ec * a3 + 436)) {
			int32_t v3 = (int32_t)a1; // 0x6d548
			v1 = v2 + 1;
			*(int32_t *)v3 = v3 + 1;
			// branch -> 0x6d558
			continue;
		} else {
			// 0x6d574
			*(int32_t *)a2 = 0;
			int32_t result = 0x55ec * a3; // 0x6d594
			uint32_t v4 = 0;              // 0x6d5a4
			// branch -> 0x6d590
			while (v4 < (int32_t) * (char *)(a4 + result + 436)) {
				// 0x6d590
				// 0x6d580
				*(int32_t *)a2 = a2 + 6;
				result = 0x55ec * a3;
				v4++;
				// branch -> 0x6d590
			}
			// 0x6d5ac
			return result;
		}
	}
}

// Address range: 0x6d5b0 - 0x6d75c
int32_t function_6d5b0(int32_t *a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = (int32_t)a1; // r4
	int32_t v2 = a4 + 436;    // 0x6d5b0
	*a1 = 0x1000000 * (int32_t) * (char *)v2 / 0x800000 + 4;
	int32_t result2 = a5; // r3
	int32_t v3;           // 0x6d688
	int32_t v4;           // 0x6d740
	int32_t v5;           // 0x6d6a8
	int32_t v6;           // 0x6d734
	int32_t v7;           // 0x6d738
	int32_t v8;           // 0x6d754
	int32_t v9;           // 0x6d6b4
	int32_t v10;          // 0x6d6c4
	int32_t v11;          // 0x6d6d4
	int32_t v12;          // 0x6d6e4
	int32_t v13;          // 0x6d6f4
	int32_t v14;          // 0x6d704
	int32_t v15;          // 0x6d714
	int32_t v16;          // 0x6d724
	int32_t v17;          // 0x6d744
	int32_t result;       // 0x6d6a4
	if (a5 >= 1) {
		int32_t v18 = __asm_rlwinm_(a5, 29, 3, 31); // 0x6d5d4
		int32_t v19;                                // 0x6d66c
		if (v18 == 0) {
			// 0x6d5d4
			v19 = result2;
			// branch -> 0x6d66c
		} else {
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			*(int32_t *)v1 = v1 / 8 + v1;
			int32_t v20 = v18 - 1; // 0x6d660
			while (v20 != 0) {
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				*(int32_t *)v1 = v1 / 8 + v1;
				v20--;
				// continue -> 0x6d5e0
			}
			int32_t v21 = result2 % 8; // 0x6d664
			if (v21 == 0) {
				// 0x6d684
				v3 = a5;
				result2 = v3;
				*(int32_t *)a2 = 2 * (int32_t) * (char *)(v2 + 0x55ec * a3) + 40;
				result = result2;
				if (v3 < 1) {
					// bb
					return result;
				}
				// 0x6d6a8
				v5 = __asm_rlwinm_(result, 29, 3, 31);
				if (v5 == 0) {
					// 0x6d6a8
					v4 = result2;
					// branch -> 0x6d740
				} else {
					v9 = a2;
					*(int32_t *)v9 = v9 / 8 + v9;
					v10 = a2;
					*(int32_t *)v10 = v10 / 8 + v10;
					v11 = a2;
					*(int32_t *)v11 = v11 / 8 + v11;
					v12 = a2;
					*(int32_t *)v12 = v12 / 8 + v12;
					v13 = a2;
					*(int32_t *)v13 = v13 / 8 + v13;
					v14 = a2;
					*(int32_t *)v14 = v14 / 8 + v14;
					v15 = a2;
					*(int32_t *)v15 = v15 / 8 + v15;
					v16 = a2;
					*(int32_t *)v16 = v16 / 8 + v16;
					v6 = v5 - 1;
					while (v6 != 0) {
						// 0x6d6b4
						v9 = a2;
						*(int32_t *)v9 = v9 / 8 + v9;
						v10 = a2;
						*(int32_t *)v10 = v10 / 8 + v10;
						v11 = a2;
						*(int32_t *)v11 = v11 / 8 + v11;
						v12 = a2;
						*(int32_t *)v12 = v12 / 8 + v12;
						v13 = a2;
						*(int32_t *)v13 = v13 / 8 + v13;
						v14 = a2;
						*(int32_t *)v14 = v14 / 8 + v14;
						v15 = a2;
						*(int32_t *)v15 = v15 / 8 + v15;
						v16 = a2;
						*(int32_t *)v16 = v16 / 8 + v16;
						v6--;
						// continue -> 0x6d6b4
					}
					// 0x6d738
					v7 = result2 % 8;
					result2 = v7;
					if (v7 == 0) {
						// bb
						return 0;
					}
					v4 = v7;
				}
				// 0x6d740
				v17 = a2;
				*(int32_t *)v17 = v17 / 8 + v17;
				v8 = v4 - 1;
				// branch -> 0x6d744
				while (v8 != 0) {
					// 0x6d744
					v17 = a2;
					*(int32_t *)v17 = v17 / 8 + v17;
					v8--;
					// continue -> 0x6d744
				}
				// 0x6d758
				return result2;
			}
			v19 = v21;
		}
		// 0x6d66c
		*(int32_t *)v1 = v1 / 8 + v1;
		int32_t v22 = v19 - 1; // 0x6d680
		// branch -> 0x6d670
		while (v22 != 0) {
			*(int32_t *)v1 = v1 / 8 + v1;
			v22--;
			// continue -> 0x6d670
		}
		// 0x6d684
		// branch -> 0x6d684
	}
	// 0x6d684
	v3 = a5;
	result2 = v3;
	*(int32_t *)a2 = 2 * (int32_t) * (char *)(v2 + 0x55ec * a3) + 40;
	result = result2;
	if (v3 < 1) {
		// bb
		return result;
	}
	// 0x6d6a8
	v5 = __asm_rlwinm_(result, 29, 3, 31);
	if (v5 == 0) {
		// 0x6d6a8
		v4 = result2;
		// branch -> 0x6d740
	} else {
		v9 = a2;
		*(int32_t *)v9 = v9 / 8 + v9;
		v10 = a2;
		*(int32_t *)v10 = v10 / 8 + v10;
		v11 = a2;
		*(int32_t *)v11 = v11 / 8 + v11;
		v12 = a2;
		*(int32_t *)v12 = v12 / 8 + v12;
		v13 = a2;
		*(int32_t *)v13 = v13 / 8 + v13;
		v14 = a2;
		*(int32_t *)v14 = v14 / 8 + v14;
		v15 = a2;
		*(int32_t *)v15 = v15 / 8 + v15;
		v16 = a2;
		*(int32_t *)v16 = v16 / 8 + v16;
		v6 = v5 - 1;
		while (v6 != 0) {
			// 0x6d6b4
			v9 = a2;
			*(int32_t *)v9 = v9 / 8 + v9;
			v10 = a2;
			*(int32_t *)v10 = v10 / 8 + v10;
			v11 = a2;
			*(int32_t *)v11 = v11 / 8 + v11;
			v12 = a2;
			*(int32_t *)v12 = v12 / 8 + v12;
			v13 = a2;
			*(int32_t *)v13 = v13 / 8 + v13;
			v14 = a2;
			*(int32_t *)v14 = v14 / 8 + v14;
			v15 = a2;
			*(int32_t *)v15 = v15 / 8 + v15;
			v16 = a2;
			*(int32_t *)v16 = v16 / 8 + v16;
			v6--;
			// continue -> 0x6d6b4
		}
		// 0x6d738
		v7 = result2 % 8;
		result2 = v7;
		if (v7 == 0) {
			// bb
			return 0;
		}
		v4 = v7;
	}
	// 0x6d740
	v17 = a2;
	*(int32_t *)v17 = v17 / 8 + v17;
	v8 = v4 - 1;
	// branch -> 0x6d744
	while (v8 != 0) {
		// 0x6d744
		v17 = a2;
		*(int32_t *)v17 = v17 / 8 + v17;
		v8--;
		// continue -> 0x6d744
	}
	// 0x6d758
	return result2;
}

// Address range: 0x6d75c - 0x6d784
int32_t function_6d75c(int32_t *a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x6d75c
	*a1 = 1;
	int32_t result = *(int32_t *)(0x55ec * a3 + a4 + 360) / 4; // 0x6d774
	*(int32_t *)a2 = result + 1;
	return result;
}

// Address range: 0x6d784 - 0x6d7b4
int32_t function_6d784(int32_t *a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = a4 + 436; // 0x6d784
	*a1 = (int32_t) * (char *)v1 + 9;
	int32_t result = (int32_t) * (char *)(v1 + 0x55ec * a3); // 0x6d7a4
	*(int32_t *)a2 = result + 18;
	return result;
}

// Address range: 0x6d7b4 - 0x6d95c
int32_t function_6d7b4(int32_t *a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = (int32_t)a1;  // r4
	int32_t result = a4 + 348; // r3
	*a1 = (int32_t) * (char *)436 + a5 + 1;
	if (*(char *)(result + 0x55ec * a3) == 0) {
		// 0x6d7e0
		*(int32_t *)v1 = 2 * v1;
		// branch -> 0x6d7ec
	}
	// 0x6d7ec
	if (*(char *)(0x55ec * a3 + result) == 1) {
		int32_t v2 = (v1 / 2 | v1 & -0x80000000) + v1; // 0x6d80c
		*(int32_t *)v1 = v2;
		// branch -> 0x6d814
	}
	// 0x6d814
	*(int32_t *)a2 = 10;
	int32_t v3 = 0; // 0x6d828
	// branch -> 0x6d834
	while (true) {
		// 0x6d834
		if (v3 >= (int32_t) * (char *)(a4 + 0x55ec * a3 + 436)) {
			// 0x6d850
			int32_t v4;      // 0x6d90c
			int32_t v5;      // 0x6d92c
			int32_t v6;      // 0x6d904
			int32_t v7;      // 0x6d918
			int32_t v8;      // 0x6d924
			int32_t result2; // 0x6d93c
			if (a5 >= 1) {
				int32_t v9 = a5; // 0x6d8e4
				int32_t v10 = 0; // 0x6d8e4
				if (a5 >= 9) {
					// 0x6d868
					if (a5 >= 9) {
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						*(int32_t *)a2 = a2 + 6;
						int32_t v11 = (a5 - 1) / 8 - 1; // 0x6d8e0
						int32_t v12 = 8;
						while (v11 != 0) {
							// 0x6d87c
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							*(int32_t *)a2 = a2 + 6;
							v11--;
							v12 += 8;
							// continue -> 0x6d87c
						}
						// 0x6d8e4
						v9 = a5;
						v10 = v12;
						// branch -> 0x6d8e4
					} else {
						v9 = a5;
						v10 = 0;
					}
				}
				// 0x6d8e4
				if (v9 > v10) {
					*(int32_t *)a2 = a2 + 6;
					int32_t v13 = v9 - v10 - 1; // 0x6d900
					while (v13 != 0) {
						// 0x6d8f4
						*(int32_t *)a2 = a2 + 6;
						v13--;
						// continue -> 0x6d8f4
					}
					// 0x6d904
					v6 = a3;
					v4 = result;
					v5 = v4;
					v8 = v6;
					if (*(char *)(v4 + 0x55ec * v6) == 0) {
						// 0x6d918
						v7 = a2;
						*(int32_t *)v7 = 2 * v7;
						v5 = result;
						v8 = a3;
						// branch -> 0x6d924
					}
					// 0x6d924
					if (*(char *)(0x55ec * v8 + v5) != 1) {
						// 0x6d94c
						*(int32_t *)v1 = -1;
						*(int32_t *)a2 = -1;
						return result;
					}
					// 0x6d93c
					result2 = a2;
					*(int32_t *)result2 = (result2 / 2 | result2 & -0x80000000) + result2;
					// branch -> 0x6d94c
					// 0x6d94c
					*(int32_t *)v1 = -1;
					*(int32_t *)a2 = -1;
					return result2;
				}
			}
			// 0x6d904
			v6 = a3;
			v4 = result;
			v5 = v4;
			v8 = v6;
			if (*(char *)(v4 + 0x55ec * v6) == 0) {
				// 0x6d918
				v7 = a2;
				*(int32_t *)v7 = 2 * v7;
				v5 = result;
				v8 = a3;
				// branch -> 0x6d924
			}
			// 0x6d924
			if (*(char *)(0x55ec * v8 + v5) != 1) {
				// 0x6d94c
				*(int32_t *)v1 = -1;
				*(int32_t *)a2 = -1;
				return result;
			}
			// 0x6d93c
			result2 = a2;
			*(int32_t *)result2 = (result2 / 2 | result2 & -0x80000000) + result2;
			// branch -> 0x6d94c
			// 0x6d94c
			*(int32_t *)v1 = -1;
			*(int32_t *)a2 = -1;
			return result2;
		}
		// 0x6d824
		*(int32_t *)a2 = a2 + 4;
		v3++;
		// branch -> 0x6d834
	}
}

// Address range: 0x6d95c - 0x6d988
int32_t function_6d95c(int32_t *a1, int32_t a2, int32_t a3)
{
	uint32_t v1 = *(int32_t *)360; // 0x6d95c
	int32_t result = v1 / 8;       // 0x6d964
	*a1 = 3 * a3 + (v1 / 2 | v1 & -0x80000000) - result;
	*(int32_t *)a2 = (int32_t)a1;
	return result;
}

// Address range: 0x6d988 - 0x6da34
int32_t function_6d988(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x6d988
	g32 = *(int32_t *)(g23 - 0x757c);
	g27 = a1;
	g33 = *(int32_t *)(g23 - 0x722c);
	g35 = *(int32_t *)(g23 - 0x70dc);
	g28 = a2;
	g36 = *(int32_t *)(g23 - 0x70d8);
	g29 = a3;
	g30 = a4;
	g31 = 0;
	// branch -> 0x6da0c
	while (true) {
		// 0x6da0c
		if (a1 == a3) {
			// 0x6da14
			if (a2 == a4) {
				// 0x6da1c
				return g31;
			}
		}
		int32_t v1 = 4 * GetDirection(a1, a2, a3, a4); // 0x6d9d4
		int32_t v2 = g27 + *(int32_t *)(g36 + v1);     // 0x6d9e4
		g27 = v2;
		int32_t v3 = g28 + *(int32_t *)(g35 + v1); // 0x6d9ec
		g28 = v3;
		int16_t v4 = *(int16_t *)(2 * v3 + 224 * v2 + *(int32_t *)g32); // 0x6d9f8
		if (*(char *)(g33 + (int32_t)v4) != 0) {
			// 0x6da08
			g31 = 1;
			// branch -> 0x6da0c
		}
		// 0x6da0c
		a4 = g30;
		a2 = v3;
		a3 = g29;
		a1 = v2;
		// branch -> 0x6da0c
	}
}

// Address range: 0x6da34 - 0x6db5c
int32_t function_6da34(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x6da38
	g30 = a2;
	g35 = *(int32_t *)(g23 - 0x767c);
	g36 = *(int32_t *)(g23 - 0x70e0);
	g29 = a1;
	g31 = a3;
	int32_t v2 = 9;                              // ctr
	int32_t v3;                                  // bp-128
	int32_t v4 = &v3;                            // 0x6da74
	int32_t v5 = *(int32_t *)(g23 - 0x5ee8) - 8; // 0x6da6c
	// branch -> 0x6da6c
	while (true) {
		int32_t v6 = v5 + 8; // 0x6da6c
		int32_t v7 = v4 + 8; // 0x6da74
		*(int32_t *)v7 = *(int32_t *)v6;
		*(int32_t *)(v4 + 12) = *(int32_t *)(v5 + 12);
		int32_t v8 = v2 - 1; // 0x6da7c
		v2 = v8;
		if (v8 == 0) {
			// 0x6da80
			*(int32_t *)(v7 + 8) = *(int32_t *)(v6 + 8);
			int32_t v9; // 0x6db3c4
			if (g31 < 20) {
				// 0x6da80
				v9 = g31;
				// branch -> 0x6da94
			} else {
				// 0x6da90
				g31 = 19;
				v9 = 19;
				// branch -> 0x6da94
			}
			// 0x6da94
			int32_t v10;        // bp-116
			int32_t v11 = &v10; // 0x6da94
			g27 = v11;
			g33 = 1;
			if (v9 <= 1) {
				// 0x6db48
				g10 = v1;
				return -1;
			}
			int32_t v12 = v9; // 0x6db3c19
			int32_t v13 = 1;  // 0x6db3817
			while (true) {
				int32_t v14 = g36 + *(int32_t *)v11; // 0x6daa4
				unsigned char v15 = *(char *)v14;    // 0x6daa8
				int32_t v16 = v15;                   // 0x6daa8
				g32 = v16;
				int32_t v17 = v14 + 1; // 0x6daac
				g28 = v17;
				int32_t v18 = v12; // 0x6db3c
				int32_t v19 = v13; // 0x6db38
				int32_t v20 = v11; // 0x6db34
				if (v15 != 0) {
					while (true) {
						int32_t v21 = g29;                                  // 0x6dac0
						int32_t v22 = v21 + (int32_t) * (char *)v17;        // 0x6dac0
						int32_t v23 = g30;                                  // 0x6dac8
						uint32_t v24 = v23 + (int32_t) * (char *)(v17 + 1); // 0x6dac8
						int32_t v25;                                        // 0x6db24
						int32_t v26;                                        // 0x6db28
						if (v22 >= 1) {
							// 0x6dad4
							if (v22 <= 111) {
								// 0x6dadc
								if (v24 >= 1) {
									// 0x6dae4
									if (v24 <= 111) {
										uint16_t v27 = *(int16_t *)(*(int32_t *)g35 + 2 * v24 + 224 * v22); // 0x6dafc
										g26 = v27;
										if (v27 >= 1) {
											// 0x6db08
											if (function_6d988(v21, v23, v22, v24) == 0) {
												// 0x6db1c
												// branch -> 0x6db48
												// 0x6db48
												g10 = v1;
												return g26 - 1;
											}
											// 0x6db08
											// branch -> 0x6db24
											// 0x6db24
											v25 = g28 + 2;
											g28 = v25;
											v26 = g32 - 1;
											g32 = v26;
											if (v26 <= 0) {
												// break -> 0x6db2c
												break;
											}
											v16 = v26;
											v17 = v25;
											// continue -> 0x6dab4
											continue;
										}
									}
								}
							}
						}
						// 0x6db24
						v25 = v17 + 2;
						g28 = v25;
						v26 = v16 - 1;
						g32 = v26;
						if (v26 <= 0) {
							// break -> 0x6db2c
							break;
						}
						v16 = v26;
						v17 = v25;
						// continue -> 0x6dab4
					}
					// 0x6db2c
					v18 = g31;
					v19 = g33;
					v20 = g27;
					// branch -> 0x6db34
				}
				int32_t v28 = v20 + 4; // 0x6db34
				g27 = v28;
				int32_t v29 = v19 + 1; // 0x6db38
				g33 = v29;
				if (v29 >= v18) {
					// break -> 0x6db48
					break;
				}
				v12 = v18;
				v13 = v29;
				v11 = v28;
				// continue -> 0x6daa0
			}
			// 0x6db48
			g10 = v1;
			return -1;
		}
		// 0x6da6c
		v4 = v7;
		v5 = v6;
		// branch -> 0x6da6c
	}
}

// Address range: 0x6db5c - 0x6dba8
int32_t function_6db5c(int32_t a1, int32_t a2)
{
	int32_t result = 1; // 0x6db9c
	if (*(int32_t *)*(int32_t *)(g23 - 0x77ac) == a1) {
		int32_t v1 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * a1; // 0x6db74
		char v2 = *(char *)(v1 + a2 + 193);                    // 0x6db80
		result = (int32_t)v2 + (int32_t) * (char *)(v1 + 0x5570);
		// branch -> 0x6db98
	}
	// 0x6db98
	if (result > -1) {
		// bb
		return result;
	}
	// 0x6dba0
	return 0;
}

// Address range: 0x6dba8 - 0x6dcc4
int32_t GetDirection8(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0x6dbac
	g33 = a2;
	g32 = a1;
	g35 = a3;
	g36 = a4;
	int32_t v2 = 32;                             // ctr
	int32_t v3;                                  // bp-292
	int32_t v4 = &v3;                            // 0x6dbe4
	int32_t v5 = *(int32_t *)(g23 - 0x5eec) - 8; // 0x6dbdc
	// branch -> 0x6dbdc
	while (true) {
		int32_t v6 = v5 + 8; // 0x6dbdc
		int32_t v7 = v4 + 8; // 0x6dbe4
		*(int32_t *)v7 = *(int32_t *)v6;
		*(int32_t *)(v4 + 12) = *(int32_t *)(v5 + 12);
		int32_t v8 = v2 - 1; // 0x6dbec
		v2 = v8;
		if (v8 == 0) {
			// 0x6dbf0
			g34 = g35 - g32;
			int16_t v9 = *(int16_t *)(g23 - 0x4db8);  // bp-287
			int16_t v10 = *(int16_t *)(g23 - 0x4db5); // bp-290
			int16_t v11 = *(int16_t *)(g23 - 0x4db2); // bp-293
			int16_t v12 = *(int16_t *)(g23 - 0x4daf); // bp-296
			int32_t v13 = abs();                      // 0x6dc34
			int32_t v14 = v13;
			if (v13 >= 16) {
				// 0x6dc44
				v14 = 15;
				// branch -> 0x6dc48
			}
			// 0x6dc48
			g31 = v14;
			g34 = g36 - g33;
			int32_t v15 = abs(); // 0x6dc4c
			int32_t v16 = v15;   // 0x6dc5c
			if (v15 >= 16) {
				// 0x6dc58
				v16 = 15;
				// branch -> 0x6dc5c
			}
			int32_t v17 = g31 + 16 * v16;                            // 0x6dc68
			int32_t v18;                                             // bp-284
			int32_t v19 = (int32_t) * (char *)(v17 + (int32_t)&v18); // 0x6dc6c
			int32_t v20 = g36;                                       // 0x6dc94
			if (g32 > g35) {
				// 0x6dc74
				if (g33 > v20) {
					// 0x6dc7c
					// branch -> 0x6dcb0
					// 0x6dcb0
					g10 = v1;
					return (int32_t) * (char *)(v19 + (int32_t)&v9);
				}
				// 0x6dc88
				// branch -> 0x6dcb0
				// 0x6dcb0
				g10 = v1;
				return (int32_t) * (char *)(v19 + (int32_t)&v10);
			}
			// 0x6dc94
			if (g33 > v20) {
				// 0x6dc9c
				// branch -> 0x6dcb0
				// 0x6dcb0
				g10 = v1;
				return (int32_t) * (char *)(v19 + (int32_t)&v11);
			}
			// 0x6dca8
			// branch -> 0x6dcb0
			// 0x6dcb0
			g10 = v1;
			return (int32_t) * (char *)(v19 + (int32_t)&v12);
		}
		// 0x6dbdc
		v4 = v7;
		v5 = v6;
		// branch -> 0x6dbdc
	}
}

// Address range: 0x6dcc4 - 0x6ddf0
int32_t function_6dcc4(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0x6dcc8
	g33 = a2;
	g32 = a1;
	g35 = a3;
	g36 = a4;
	int32_t v2 = 32;                             // ctr
	int32_t v3;                                  // bp-300
	int32_t v4 = &v3;                            // 0x6dd00
	int32_t v5 = *(int32_t *)(g23 - 0x5ef0) - 8; // 0x6dcf8
	// branch -> 0x6dcf8
	while (true) {
		int32_t v6 = v5 + 8; // 0x6dcf8
		int32_t v7 = v4 + 8; // 0x6dd00
		*(int32_t *)v7 = *(int32_t *)v6;
		*(int32_t *)(v4 + 12) = *(int32_t *)(v5 + 12);
		int32_t v8 = v2 - 1; // 0x6dd08
		v2 = v8;
		if (v8 == 0) {
			// 0x6dd0c
			g34 = g35 - g32;
			int32_t v9 = *(int32_t *)*(int32_t *)(g23 - 0x5ef4);  // bp-297
			int32_t v10 = *(int32_t *)*(int32_t *)(g23 - 0x5ef8); // bp-302
			int32_t v11 = *(int32_t *)*(int32_t *)(g23 - 0x5efc); // bp-307
			int32_t v12 = *(int32_t *)*(int32_t *)(g23 - 0x5f00); // bp-312
			int32_t v13 = abs();                                  // 0x6dd60
			int32_t v14 = v13;
			if (v13 >= 16) {
				// 0x6dd70
				v14 = 15;
				// branch -> 0x6dd74
			}
			// 0x6dd74
			g31 = v14;
			g34 = g36 - g33;
			int32_t v15 = abs(); // 0x6dd78
			int32_t v16 = v15;   // 0x6dd88
			if (v15 >= 16) {
				// 0x6dd84
				v16 = 15;
				// branch -> 0x6dd88
			}
			int32_t v17 = g31 + 16 * v16;                            // 0x6dd94
			int32_t v18;                                             // bp-292
			int32_t v19 = (int32_t) * (char *)(v17 + (int32_t)&v18); // 0x6dd98
			int32_t v20 = g36;                                       // 0x6ddc0
			if (g32 > g35) {
				// 0x6dda0
				if (g33 > v20) {
					// 0x6dda8
					// branch -> 0x6dddc
					// 0x6dddc
					g10 = v1;
					return (int32_t) * (char *)(v19 + (int32_t)&v9);
				}
				// 0x6ddb4
				// branch -> 0x6dddc
				// 0x6dddc
				g10 = v1;
				return (int32_t) * (char *)(v19 + (int32_t)&v10);
			}
			// 0x6ddc0
			if (g33 > v20) {
				// 0x6ddc8
				// branch -> 0x6dddc
				// 0x6dddc
				g10 = v1;
				return (int32_t) * (char *)(v19 + (int32_t)&v11);
			}
			// 0x6ddd4
			// branch -> 0x6dddc
			// 0x6dddc
			g10 = v1;
			return (int32_t) * (char *)(v19 + (int32_t)&v12);
		}
		// 0x6dcf8
		v4 = v7;
		v5 = v6;
		// branch -> 0x6dcf8
	}
}

// Address range: 0x6ddf0 - 0x6deb4
int32_t DeleteMissile(int32_t a1)
{
	int32_t v1 = g10; // 0x6ddf4
	g32 = a1;
	g35 = *(int32_t *)(g23 - 0x7660);
	g33 = g37;
	int32_t v2 = *(int32_t *)(g23 - 0x7668); // 0x6de0c
	g36 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x6de18
	if (*(int32_t *)v3 == 13) {
		int32_t v4 = *(int32_t *)(v3 + 120); // 0x6de2c
		g31 = v4;
		int32_t v5 = v4; // 0x6de48
		if (v4 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
			// 0x6de3c
			NetSendCmd(1, 93);
			v5 = g31;
			// branch -> 0x6de48
		}
		// 0x6de48
		*(char *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v5 + 0x5594) = 0;
		a1 = g32;
		v2 = g36;
		// branch -> 0x6de5c
	}
	int32_t v6 = *(int32_t *)(g23 - 0x7150); // 0x6de60
	*(int32_t *)(v6 + 4 * (125 - *(int32_t *)v2)) = a1;
	int32_t *v7 = (int32_t *)g36; // 0x6de70
	int32_t v8 = *v7;             // 0x6de70
	int32_t result = v8;          // r3
	*v7 = v8 - 1;
	int32_t v9 = *(int32_t *)g36; // 0x6de7c
	if (v9 < 1) {
		// 0x6dea0
		g10 = v1;
		return result;
	}
	// 0x6de88
	if (g33 != v9) {
		int32_t v10 = *(int32_t *)(g35 + 4 * v9); // 0x6de94
		result = v10;
		*(int32_t *)(g35 + 4 * g33) = v10;
		// branch -> 0x6dea0
	}
	// 0x6dea0
	g10 = v1;
	return result;
}

// Address range: 0x6deb4 - 0x6dff8
int32_t GetMissileVel(void)
{
	int32_t v1 = g10;                        // 0x6deb8
	int32_t v2 = g37;                        // 0x6debc
	int32_t v3 = *(int32_t *)(g23 - 0x7664); // 0x6ded0
	int32_t v4 = g34;                        // 0x6dee0
	int32_t result;                          // r3
	if (g39 == v2) {
		// 0x6def0
		if (g40 == g38) {
			int32_t v5 = 180 * v4 + v3; // 0x6defc
			result = v5;
			*(int32_t *)(v5 + 20) = 0;
			*(int32_t *)(result + 24) = 0;
			// branch -> 0x6dfcc
			// 0x6dfcc
			g10 = v1;
			return result;
		}
	} else {
		// 0x6deb4
		// branch -> 0x6df10
	}
	// 0x6df10
	function_e1bb0();
	result = v3 + 180 * v4;
	*(int32_t *)(result + 24) = 0x200000 * (g38 - g40 + g39 - v2) ^ -0x80000000;
	// branch -> 0x6dfcc
	// 0x6dfcc
	g10 = v1;
	return result;
}

// Address range: 0x6dff8 - 0x6e0b4
int32_t PutMissile(void)
{
	int32_t v1 = 180 * g34;                  // 0x6dff8
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x6dffc
	int32_t v3 = v2 + v1;                    // 0x6e000
	uint32_t v4 = *(int32_t *)(v3 + 4);      // 0x6e004
	int32_t v5 = *(int32_t *)(v3 + 8);       // 0x6e008
	char v6;
	int32_t v7;      // 0x6e04c
	char *v8;        // 0x6e070
	int32_t v9;      // 0x6e058
	int32_t result;  // 0x6e094
	char *v10;       // 0x6e05c
	int32_t result2; // 0x6e0a4
	if (v4 < 1 || v5 < 1) {
		// 0x6e02c
		*(int32_t *)(v3 + 52) = 1;
		// branch -> 0x6e038
		// 0x6e038
		if (*(int32_t *)(v2 + v1 + 52) != 0) {
			// bb
			return g34;
		}
		// 0x6e048
		v7 = g23;
		v9 = v5 + 112 * v4;
		v10 = (char *)(v9 + *(int32_t *)*(int32_t *)(v7 - 0x779c));
		*v10 = *v10 | 1;
		v8 = (char *)(v9 + *(int32_t *)*(int32_t *)(v7 - 0x7594));
		if (*v8 == 0) {
			// 0x6e07c
			v6 = 0x1000000 * g34 / 0x1000000 + 1;
			// branch -> 0x6e094
		} else {
			// 0x6e08c
			v6 = -1;
			// branch -> 0x6e094
		}
		// 0x6e094
		*v8 = v6;
		result = v1 + v2;
		if (*(int32_t *)(result + 108) == 0) {
			// bb5
			return result;
		}
		// 0x6e0a4
		result2 = *(int32_t *)(g23 - 0x70e4);
		*(int32_t *)result2 = 1;
		return result2;
	}
	// 0x6e01c
	if (v4 <= 111) {
		// 0x6e024
		if (v5 < 112) {
			// 0x6e038
			if (*(int32_t *)(v2 + v1 + 52) != 0) {
				// bb
				return g34;
			}
			// 0x6e048
			v7 = g23;
			v9 = v5 + 112 * v4;
			v10 = (char *)(v9 + *(int32_t *)*(int32_t *)(v7 - 0x779c));
			*v10 = *v10 | 1;
			v8 = (char *)(v9 + *(int32_t *)*(int32_t *)(v7 - 0x7594));
			if (*v8 == 0) {
				// 0x6e07c
				v6 = 0x1000000 * g34 / 0x1000000 + 1;
				// branch -> 0x6e094
			} else {
				// 0x6e08c
				v6 = -1;
				// branch -> 0x6e094
			}
			// 0x6e094
			*v8 = v6;
			result = v1 + v2;
			if (*(int32_t *)(result + 108) == 0) {
				// bb5
				return result;
			}
			// 0x6e0a4
			result2 = *(int32_t *)(g23 - 0x70e4);
			*(int32_t *)result2 = 1;
			return result2;
		}
	}
	// 0x6e02c
	*(int32_t *)(v3 + 52) = 1;
	// branch -> 0x6e038
	// 0x6e038
	if (*(int32_t *)(v2 + v1 + 52) != 0) {
		// bb
		return g34;
	}
	// 0x6e048
	v7 = g23;
	v9 = v5 + 112 * v4;
	v10 = (char *)(v9 + *(int32_t *)*(int32_t *)(v7 - 0x779c));
	*v10 = *v10 | 1;
	v8 = (char *)(v9 + *(int32_t *)*(int32_t *)(v7 - 0x7594));
	if (*v8 == 0) {
		// 0x6e07c
		v6 = 0x1000000 * g34 / 0x1000000 + 1;
		// branch -> 0x6e094
	} else {
		// 0x6e08c
		v6 = -1;
		// branch -> 0x6e094
	}
	// 0x6e094
	*v8 = v6;
	result = v1 + v2;
	if (*(int32_t *)(result + 108) == 0) {
		// bb5
		return result;
	}
	// 0x6e0a4
	result2 = *(int32_t *)(g23 - 0x70e4);
	*(int32_t *)result2 = 1;
	return result2;
}

// Address range: 0x6e0b4 - 0x6e1a0
int32_t GetMissilePos(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * g34; // 0x6e0cc
	int32_t v2 = *(int32_t *)(v1 + 36) / 0x10000;        // 0x6e0d8
	int32_t v3 = *(int32_t *)(v1 + 40) / 0x10000;        // 0x6e0dc
	int32_t v4 = 2 * v3;                                 // 0x6e0e0
	int32_t v5 = v4 + v2;                                // 0x6e0e4
	int32_t v6 = v4 - v2;                                // 0x6e0e8
	int32_t v7;                                          // 0x6e10c
	if (v5 > -1) {
		// 0x6e108
		v7 = v5 / 64;
		// branch -> 0x6e110
	} else {
		// 0x6e0f0
		v7 = -((-v5 / 64));
		// branch -> 0x6e110
	}
	// 0x6e110
	int32_t v8; // 0x6e134
	if (v6 > -1) {
		// 0x6e130
		v8 = v6 / 64;
		// branch -> 0x6e138
	} else {
		// 0x6e118
		v8 = -((-v6 / 64));
		// branch -> 0x6e138
	}
	// 0x6e138
	*(int32_t *)(v1 + 4) = *(int32_t *)(v1 + 28) + v7;
	*(int32_t *)(v1 + 8) = v8 + *(int32_t *)(v1 + 32);
	*(int32_t *)(v1 + 12) = v2 - 32 * (v7 - v8);
	int32_t v9 = v6 / 8 - 8 * v8; // 0x6e17c
	*(int32_t *)(v1 + 16) = v3 - 16 * (v8 + v7);
	int32_t result = function_cb9dc(*(int32_t *)(v1 + 140), v5 / 8 - 8 * v7, v9); // 0x6e188
	return result;
}

// Address range: 0x6e1a0 - 0x6e2b8
int32_t function_6e1a0(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x6e1b0
	uint32_t v2 = *(int32_t *)(v1 + 44);                // 0x6e1bc
	if (v2 <= 7) {
		// 0x6e1c8
		return *(int32_t *)(*(int32_t *)(g23 - 0x5f04) + 4 * v2);
	}
	int32_t v3 = *(int32_t *)(v1 + 8);   // 0x6e248
	int32_t v4 = *(int32_t *)(v1 + 120); // 0x6e250
	int32_t result;                      // r3
	if (function_86824(v4, g31 + *(int32_t *)(v1 + 4), g36 + v3) != 0) {
		int32_t *v5 = (int32_t *)g33; // 0x6e264
		int32_t v6 = g36;             // 0x6e268
		*v5 = g31 + *v5;
		result = 16 * (g31 + v6);
		int32_t *v7 = (int32_t *)g32; // 0x6e280
		*v7 = g36 + *v7;
		int32_t *v8 = (int32_t *)(g35 + 12); // 0x6e28c
		*v8 = *v8 - 32 * (g31 - v6);
		int32_t *v9 = (int32_t *)(g35 + 16); // 0x6e298
		*v9 = *v9 - result;
		// branch -> 0x6e2a4
	} else {
		result = 0;
	}
	// 0x6e2a4
	return result;
}

// Address range: 0x6e2b8 - 0x6e548
int32_t function_6e2b8(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = g10; // 0x6e2bc
	g26 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x6e2c4
	g36 = v2;
	int32_t v3 = 232 * a1; // 0x6e2c8
	g35 = v3;
	g27 = a2;
	g28 = a3;
	int32_t v4 = v2 + v3; // 0x6e2d4
	g29 = a4;
	g30 = a6;
	g31 = 0;
	if (*(int32_t *)(v4 + 212) != 0) {
		// 0x6e2f8
		// branch -> 0x6e534
		// 0x6e534
		g10 = v1;
		return 0;
	}
	int32_t v5 = v4 + 152; // 0x6e300
	g32 = v5;
	if (*(int32_t *)v5 <= 63) {
		// 0x6e310
		// branch -> 0x6e534
		// 0x6e534
		g10 = v1;
		return 0;
	}
	// 0x6e318
	if (*(char *)*(int32_t *)(v4 + 224) == 32) {
		// 0x6e328
		if (*(char *)(v4 + 8) == 2) {
			// 0x6e334
			// branch -> 0x6e534
			// 0x6e534
			g10 = v1;
			return 0;
		}
	}
	int32_t v6 = v4 + 4; // 0x6e340
	g33 = v6;
	if (*(int32_t *)v6 == 14) {
		// 0x6e350
		// branch -> 0x6e534
		// 0x6e534
		g10 = v1;
		return 0;
	}
	uint16_t v7 = *(int16_t *)(v4 + 208);                                     // 0x6e360
	int32_t v8 = v7;                                                          // 0x6e360
	int32_t v9 = __asm_rlwinm_(v8, 0, 28, 28);                                // 0x6e36c
	unsigned char v10 = *(char *)(28 * a5 + *(int32_t *)(g23 - 0x70e8) + 17); // 0x6e370
	int32_t v11 = v10;                                                        // r3
	if (v9 != 0) {
		// 0x6e378
		if (v10 == 3) {
			// 0x6e3a0
			// branch -> 0x6e534
			// 0x6e534
			g10 = v1;
			return 0;
		}
	}
	// 0x6e380
	if (__asm_rlwinm_(v8, 0, 27, 27) != 0) {
		// 0x6e388
		if (v11 == 1) {
			// 0x6e3a0
			// branch -> 0x6e534
			// 0x6e534
			g10 = v1;
			return 0;
		}
	}
	// 0x6e390
	if (__asm_rlwinm_(v8, 0, 26, 26) != 0) {
		// 0x6e398
		if (v11 == 2) {
			// 0x6e3a0
			// branch -> 0x6e534
			// 0x6e534
			g10 = v1;
			return 0;
		}
	}
	// 0x6e3a8
	int32_t v12; // bp-56
	int32_t v13;
	int32_t v14;
	int32_t v15;    // 0x6e4e8
	int32_t v16;    // 0x6e4f4
	int32_t result; // 0x6e544
	int32_t v17;    // 0x6e45c
	int32_t *v18;   // 0x6e484
	int32_t v19;    // 0x6e50c
	int32_t v20;    // 0x6e3e4
	int32_t v21;    // 0x6e3e8
	int32_t v22;    // 0x6e3f8
	int32_t v23;    // 0x6e45c
	int32_t v24;
	if (v7 % 2 != 0) {
		// 0x6e3b0
		if (v11 == 3) {
			// 0x6e3d8
			g31 = 1;
			// branch -> 0x6e3dc
			// 0x6e3dc
			g37 = 100;
			v20 = random(68);
			v21 = g35 + g36;
			g35 = v20;
			v22 = 90 - (int32_t) * (char *)(v21 + 206) - g29;
			v14 = v22 < 5 ? 5 : v22;
			v13 = v14;
			if (v14 >= 96) {
				// 0x6e414
				v13 = 95;
				// branch -> 0x6e418
			}
			// 0x6e418
			g29 = v13;
			if (function_875c8(g26, &v12) == 0) {
				// 0x6e434
				if (g35 >= g29) {
					// 0x6e43c
					if (*(int32_t *)g33 != 15) {
						// 0x6e530
						// branch -> 0x6e534
						// 0x6e534
						g10 = v1;
						return 0;
					}
				}
				// 0x6e448
				g37 = 1 - g27 + g28;
				v23 = g27 + random(68);
				v17 = g30 % 256 == 0 ? 64 * v23 : v23;
				g38 = v17;
				v18 = (int32_t *)g32;
				v24 = v17;
				if (g31 != 0) {
					// 0x6e470
					v24 = v17 / 4;
					// branch -> 0x6e490
				}
				// 0x6e490
				*v18 = *v18 - v24;
				if (*(int32_t *)g32 > 63) {
					// 0x6e4d0
					if (g31 != 0) {
						// 0x6e4d8
						PlayEffect(g26, 1);
						// branch -> 0x6e528
						// 0x6e528
						// branch -> 0x6e534
						// 0x6e534
						g10 = v1;
						return 1;
					}
					// 0x6e4e8
					v15 = g33;
					v16 = g26;
					if (*(int32_t *)v15 == 15) {
						// 0x6e4f4
						if (v16 >= 4) {
							// 0x6e4fc
							function_7cbac(v16, -1);
							v19 = g33;
							// branch -> 0x6e508
						} else {
							v19 = v15;
						}
						// 0x6e508
						*(int32_t *)v19 = 15;
						// branch -> 0x6e528
					} else {
						// 0x6e514
						if (v16 >= 4) {
							// 0x6e51c
							function_7cbac(v16, -1);
							// branch -> 0x6e528
						}
					}
					// 0x6e528
					// branch -> 0x6e534
					// 0x6e534
					g10 = v1;
					return 1;
				}
				// 0x6e49c
				M_StartKill(g26, -1);
				if (*(int32_t *)g33 == 15) {
					// 0x6e4a8
					*(int32_t *)g33 = 15;
					// branch -> 0x6e528
				}
				// 0x6e528
				result = 1;
				// branch -> 0x6e534
			} else {
				// 0x6e42c
				result = v12;
				// branch -> 0x6e534
			}
			// 0x6e534
			g10 = v1;
			return result;
		}
	}
	// 0x6e3b8
	if (__asm_rlwinm_(v8, 0, 30, 30) != 0) {
		// 0x6e3c0
		if (v11 == 1) {
			// 0x6e3d8
			g31 = 1;
			// branch -> 0x6e3dc
			// 0x6e3dc
			g37 = 100;
			v20 = random(68);
			v21 = g35 + g36;
			g35 = v20;
			v22 = 90 - (int32_t) * (char *)(v21 + 206) - g29;
			v14 = v22 < 5 ? 5 : v22;
			v13 = v14;
			if (v14 >= 96) {
				// 0x6e414
				v13 = 95;
				// branch -> 0x6e418
			}
			// 0x6e418
			g29 = v13;
			if (function_875c8(g26, &v12) == 0) {
				// 0x6e434
				if (g35 >= g29) {
					// 0x6e43c
					if (*(int32_t *)g33 != 15) {
						// 0x6e530
						// branch -> 0x6e534
						// 0x6e534
						g10 = v1;
						return 0;
					}
				}
				// 0x6e448
				g37 = 1 - g27 + g28;
				v23 = g27 + random(68);
				v17 = g30 % 256 == 0 ? 64 * v23 : v23;
				g38 = v17;
				v18 = (int32_t *)g32;
				v24 = v17;
				if (g31 != 0) {
					// 0x6e470
					v24 = v17 / 4;
					// branch -> 0x6e490
				}
				// 0x6e490
				*v18 = *v18 - v24;
				if (*(int32_t *)g32 > 63) {
					// 0x6e4d0
					if (g31 != 0) {
						// 0x6e4d8
						PlayEffect(g26, 1);
						// branch -> 0x6e528
						// 0x6e528
						// branch -> 0x6e534
						// 0x6e534
						g10 = v1;
						return 1;
					}
					// 0x6e4e8
					v15 = g33;
					v16 = g26;
					if (*(int32_t *)v15 == 15) {
						// 0x6e4f4
						if (v16 >= 4) {
							// 0x6e4fc
							function_7cbac(v16, -1);
							v19 = g33;
							// branch -> 0x6e508
						} else {
							v19 = v15;
						}
						// 0x6e508
						*(int32_t *)v19 = 15;
						// branch -> 0x6e528
					} else {
						// 0x6e514
						if (v16 >= 4) {
							// 0x6e51c
							function_7cbac(v16, -1);
							// branch -> 0x6e528
						}
					}
					// 0x6e528
					// branch -> 0x6e534
					// 0x6e534
					g10 = v1;
					return 1;
				}
				// 0x6e49c
				M_StartKill(g26, -1);
				if (*(int32_t *)g33 == 15) {
					// 0x6e4a8
					*(int32_t *)g33 = 15;
					// branch -> 0x6e528
				}
				// 0x6e528
				result = 1;
				// branch -> 0x6e534
			} else {
				// 0x6e42c
				result = v12;
				// branch -> 0x6e534
			}
			// 0x6e534
			g10 = v1;
			return result;
		}
	}
	// 0x6e3c8
	if (__asm_rlwinm_(v8, 0, 29, 29) != 0) {
		// 0x6e3d0
		if (v11 == 2) {
			// 0x6e3d8
			g31 = 1;
			// branch -> 0x6e3dc
		}
	}
	// 0x6e3dc
	g37 = 100;
	v20 = random(68);
	v21 = g35 + g36;
	g35 = v20;
	v22 = 90 - (int32_t) * (char *)(v21 + 206) - g29;
	v14 = v22 < 5 ? 5 : v22;
	v13 = v14;
	if (v14 >= 96) {
		// 0x6e414
		v13 = 95;
		// branch -> 0x6e418
	}
	// 0x6e418
	g29 = v13;
	if (function_875c8(g26, &v12) == 0) {
		// 0x6e434
		if (g35 >= g29) {
			// 0x6e43c
			if (*(int32_t *)g33 != 15) {
				// 0x6e530
				// branch -> 0x6e534
				// 0x6e534
				g10 = v1;
				return 0;
			}
		}
		// 0x6e448
		g37 = 1 - g27 + g28;
		v23 = g27 + random(68);
		v17 = g30 % 256 == 0 ? 64 * v23 : v23;
		g38 = v17;
		v18 = (int32_t *)g32;
		v24 = v17;
		if (g31 != 0) {
			// 0x6e470
			v24 = v17 / 4;
			// branch -> 0x6e490
		}
		// 0x6e490
		*v18 = *v18 - v24;
		if (*(int32_t *)g32 > 63) {
			// 0x6e4d0
			if (g31 != 0) {
				// 0x6e4d8
				PlayEffect(g26, 1);
				// branch -> 0x6e528
				// 0x6e528
				// branch -> 0x6e534
				// 0x6e534
				g10 = v1;
				return 1;
			}
			// 0x6e4e8
			v15 = g33;
			v16 = g26;
			if (*(int32_t *)v15 == 15) {
				// 0x6e4f4
				if (v16 >= 4) {
					// 0x6e4fc
					function_7cbac(v16, -1);
					v19 = g33;
					// branch -> 0x6e508
				} else {
					v19 = v15;
				}
				// 0x6e508
				*(int32_t *)v19 = 15;
				// branch -> 0x6e528
			} else {
				// 0x6e514
				if (v16 >= 4) {
					// 0x6e51c
					function_7cbac(v16, -1);
					// branch -> 0x6e528
				}
			}
			// 0x6e528
			// branch -> 0x6e534
			// 0x6e534
			g10 = v1;
			return 1;
		}
		// 0x6e49c
		M_StartKill(g26, -1);
		if (*(int32_t *)g33 == 15) {
			// 0x6e4a8
			*(int32_t *)g33 = 15;
			// branch -> 0x6e528
		}
		// 0x6e528
		result = 1;
		// branch -> 0x6e534
	} else {
		// 0x6e42c
		result = v12;
		// branch -> 0x6e534
	}
	// 0x6e534
	g10 = v1;
	return result;
}

// Address range: 0x6e548 - 0x6e9d0
int32_t function_6e548(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x6e54c
	g29 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x6e554
	g26 = v2;
	int32_t v3 = 232 * a2; // 0x6e558
	g24 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x70e8); // 0x6e55c
	g25 = v4;
	g28 = a1;
	g27 = *(int32_t *)(g23 - 0x77a8);
	g30 = a3;
	int32_t v5 = v2 + v3; // 0x6e56c
	g31 = a4;
	g32 = a5;
	g33 = a6;
	g35 = a7;
	g36 = 0;
	if (*(int32_t *)(v5 + 212) == 0) {
		int32_t v6 = v5 + 152; // 0x6e5a0
		g20 = v6;
		if (*(int32_t *)v6 > 63) {
			int32_t *v7 = (int32_t *)(v5 + 224); // 0x6e5c0
			if (a6 == 53) {
				// 0x6e5c0
				if (*(char *)*v7 != 110) {
					// 0x6e5d0
					if (*(char *)(*(int32_t *)(v5 + 228) + 114) != 0) {
						// 0x6e5e0
						// branch -> 0x6e9bc
						// 0x6e9bc
						g10 = v1;
						return 0;
					}
				}
			}
			// 0x6e5e8
			if (*(char *)*v7 == 32) {
				// 0x6e5fc
				if (*(char *)(v5 + 8) == 2) {
					// 0x6e608
					// branch -> 0x6e9bc
					// 0x6e9bc
					g10 = v1;
					return 0;
				}
			}
			int32_t v8 = v5 + 4; // 0x6e614
			g21 = v8;
			if (*(int32_t *)v8 == 14) {
				// 0x6e624
				// branch -> 0x6e9bc
			} else {
				uint16_t v9 = *(int16_t *)(v5 + 208); // 0x6e630
				int32_t v10 = v9;                     // 0x6e630
				int32_t v11 = 28 * a6;                // 0x6e634
				g22 = v11;
				int32_t v12 = __asm_rlwinm_(v10, 0, 28, 28);  // 0x6e63c
				unsigned char v13 = *(char *)(v11 + v4 + 17); // 0x6e640
				int32_t v14 = v13;                            // r3
				if (v12 != 0) {
					// 0x6e648
					if (v13 == 3) {
						// 0x6e680
						// branch -> 0x6e9bc
						// 0x6e9bc
						g10 = v1;
						return 0;
					}
				}
				// 0x6e650
				if (__asm_rlwinm_(v10, 0, 27, 27) != 0) {
					// 0x6e658
					if (v14 == 1) {
						// 0x6e680
						// branch -> 0x6e9bc
						// 0x6e9bc
						g10 = v1;
						return 0;
					}
				}
				// 0x6e660
				if (__asm_rlwinm_(v10, 0, 26, 26) != 0) {
					// 0x6e668
					if (v14 == 2) {
						// 0x6e680
						// branch -> 0x6e9bc
						// 0x6e9bc
						g10 = v1;
						return 0;
					}
				}
				// 0x6e670
				if (__asm_rlwinm_(v10, 0, 24, 24) != 0) {
					// 0x6e678
					if (v14 == 4) {
						// 0x6e680
						// branch -> 0x6e9bc
						// 0x6e9bc
						g10 = v1;
						return 0;
					}
				}
				// 0x6e688
				int32_t v15;    // r0
				int32_t v16;    // r4
				int32_t result; // bp-72
				int32_t v17;
				int32_t v18; // 0x6e6c8
				int32_t v19; // 0x6e6f4
				int32_t v20; // 0x6e790
				int32_t v21;
				int32_t v22;       // 0x6e84c
				int32_t v23;       // 0x6e878
				int32_t v24;       // 0x6e884
				int32_t v25;       // 0x6e890
				int32_t v26;       // 0x6e89c
				int32_t v27;       // 0x6e8a4
				int32_t v28;       // 0x6e920
				int32_t v29;       // 0x6e92c
				int32_t v30;       // 0x6e968
				int32_t result2;   // 0x6e9cc
				int32_t v31;       // 0x6e6d0
				int32_t v32;       // 0x6e6e0
				int32_t v33;       // 0x6e710
				int32_t v34;       // 0x6e72c
				int32_t v35;       // 0x6e740
				int32_t v36;       // 0x6e780
				int32_t v37;       // 0x6e844
				int32_t v38;       // 0x6e878
				int32_t *v39;      // 0x6e898
				int32_t v40;       // 0x6e8a4
				int32_t v41;       // 0x6e948
				int32_t v42;       // 0x6e6c4
				int32_t v43;       // 0x6e6e4
				int32_t v44;       // 0x6e6ec
				int32_t v45;       // 0x6e6f4
				int32_t v46;       // 0x6e72c
				int32_t v47;       // 0x6e754
				int32_t v48;       // 0x6e778
				int32_t v49;       // 0x6e808
				unsigned char v50; // 0x6e80c
				int32_t v51;       // 0x6e81c
				int32_t v52;       // 0x6e848
				int32_t v53;       // 0x6e850
				int32_t v54;       // 0x6e85c
				int32_t v55;       // 0x6e86c
				int32_t *v56;      // 0x6e8bc
				char *v57;         // 0x6e984
				int32_t v58;       // 0x6e99c
				int32_t v59;       // 0x6e6f8
				unsigned char v60; // 0x6e6fc
				int32_t v61;       // 0x6e700
				int32_t v62;       // 0x6e704
				uint32_t v63;      // 0x6e858
				int32_t v64;       // 0x6e8ac
				int32_t v65;       // 0x6e6e8
				int32_t v66;       // 0x6e750
				uint64_t v67;      // 0x6e7e4
				uint64_t v68;      // 0x6e83c
				int32_t v69;       // 0x6e840
				int32_t v70;       // 0x6e7f0
				int32_t v71;       // 0x6e884
				if (v9 % 2 != 0) {
					// 0x6e690
					if (v14 == 3) {
						// 0x6e6b8
						g36 = 1;
						// branch -> 0x6e6bc
						// 0x6e6bc
						g37 = 100;
						v42 = random(69);
						v18 = g25;
						g25 = v42;
						v31 = g22 + v18 + 16;
						g22 = v31;
						v32 = 0x55ec * g28;
						v43 = g24 + g26;
						if (*(char *)v31 == 0) {
							// 0x6e6e0
							v65 = (int32_t) * (char *)(v43 + 206);
							v44 = g27 + v32;
							v19 = g32;
							v45 = v19 * v19;
							v59 = *(int32_t *)(v44 + 0x5578);
							v60 = *(char *)(v44 + 348);
							v61 = *(int32_t *)(v44 + 0x5554);
							v62 = *(int32_t *)(v44 + 368);
							v33 = (int32_t) * (char *)(v44 + 436) + 50;
							v46 = v33 - (v65 - v59) + v61 + v62 - (v45 / 2 | v45 & -0x80000000);
							v34 = v60 == 1 ? v46 + 20 : v46;
							g32 = v34;
							if (v60 == 0) {
								// 0x6e740
								v35 = v34 + 10;
								g32 = v35;
								v21 = v35;
								// branch -> 0x6e784
							} else {
								v21 = v34;
							}
						} else {
							// 0x6e748
							v66 = (int32_t) * (char *)(v43 + 196);
							v47 = g27 + v32;
							v48 = *(int32_t *)(v47 + 360) + 50 - 0x1000000 * v66 / 0x800000 - g32;
							g32 = v48;
							if (*(char *)(v47 + 348) == 2) {
								// 0x6e780
								v36 = v48 + 20;
								g32 = v36;
								v21 = v36;
								// branch -> 0x6e784
							} else {
								v21 = v48;
							}
						}
						// 0x6e784
						v20 = v21;
						if (v21 <= 4) {
							// 0x6e78c
							g32 = 5;
							v20 = 5;
							// branch -> 0x6e790
						}
						// 0x6e790
						if (v20 >= 96) {
							// 0x6e798
							g32 = 95;
							// branch -> 0x6e79c
						}
						// 0x6e79c
						if (*(int32_t *)g21 == 15) {
							// 0x6e7a8
							g25 = 0;
							// branch -> 0x6e7ac
						}
						// 0x6e7ac
						if (function_875c8(g29, &result) != 0) {
							// 0x6e7c0
							// branch -> 0x6e9bc
							// 0x6e9bc
							g10 = v1;
							return result;
						}
						// 0x6e7c8
						if (g25 < g32) {
							// 0x6e7d0
							if (g33 == 63) {
								// 0x6e7d8
								v67 = 0x55555556 * (int64_t) * (int32_t *)g20;
								v70 = ((int32_t)(v67 / 0x100000000) + (int32_t)(v67 / 0x8000000000000000)) / 64;
								v17 = v70;
								v22 = v70;
								// branch -> 0x6e80c
							} else {
								// 0x6e7f8
								g37 = 1 - g30 + g31;
								v49 = g30 + random(70);
								v17 = v49;
								v22 = v49;
								// branch -> 0x6e80c
							}
							// 0x6e80c
							g25 = v17;
							v50 = *(char *)g22;
							v15 = v50;
							v23 = v22;
							if (v50 == 0) {
								// 0x6e818
								v51 = g27 + 0x55ec * g28;
								v68 = 0x51eb851f * (int64_t)(*(int32_t *)(v51 + 0x5550) * v22);
								v69 = (int32_t)(v68 / 0x100000000) >> 31;
								v37 = v69 < 0;
								v52 = (v69 & -0x8000000 | (int32_t)(v68 / 0x2000000000)) + v37;
								v53 = *(int32_t *)(v51 + 0x555c) + v22 + v52;
								v63 = *(int32_t *)(v51 + 388);
								if (*(char *)(v51 + 348) == 1) {
									// 0x6e858
									v54 = v63 + v53;
									g25 = v54;
									v23 = v54;
									// branch -> 0x6e870
								} else {
									// 0x6e864
									v55 = (v63 / 2 | v63 & -0x80000000) + v53;
									g25 = v55;
									v23 = v55;
									// branch -> 0x6e870
								}
								// 0x6e870
								v24 = v23;
								if (g35 % 256 == 0) {
									// 0x6e878
									v38 = 64 * v23;
									g25 = v38;
									v24 = v38;
									// branch -> 0x6e87c
								}
								// 0x6e87c
								v26 = v24;
								if (g36 != 0) {
									// 0x6e884
									v71 = v24 / 4;
									g25 = v71;
									v26 = v71;
									// branch -> 0x6e888
								}
								// 0x6e888
								v25 = g28;
								v27 = v25;
								if (v25 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
									// 0x6e898
									v39 = (int32_t *)g20;
									*v39 = *v39 - v26;
									v27 = g28;
									// branch -> 0x6e8a4
								}
								// 0x6e8a4
								v40 = 0x55ec * v27;
								g22 = v40;
								v64 = *(int32_t *)(g27 + v40 + 0x5568);
								if (__asm_rlwinm_(v64, 0, 28, 28) != 0) {
									// 0x6e8b8
									v56 = (int32_t *)(g24 + g26 + 160);
									*v56 = *v56 | 8;
									// branch -> 0x6e8c8
								}
								// 0x6e8c8
								if (*(int32_t *)g20 <= 63) {
									// 0x6e8d4
									M_StartKill(g29, g28);
									if (*(int32_t *)g21 == 15) {
										// 0x6e8e0
										*(int32_t *)g21 = 15;
										// branch -> 0x6e980
									}
									// 0x6e980
									v57 = (char *)(g24 + g26 + 164);
									if (*v57 == 0) {
										// 0x6e990
										v16 = g22 + g27;
										*v57 = -1;
										v58 = g24 + g26;
										*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
										*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
										// branch -> 0x6e9b0
									}
									// 0x6e9b0
									// branch -> 0x6e9bc
									// 0x6e9bc
									g10 = v1;
									return 1;
								}
								// 0x6e908
								if (g36 != 0) {
									// 0x6e910
									PlayEffect(g29, 1);
									// branch -> 0x6e980
									// 0x6e980
									v57 = (char *)(g24 + g26 + 164);
									if (*v57 == 0) {
										// 0x6e990
										v16 = g22 + g27;
										*v57 = -1;
										v58 = g24 + g26;
										*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
										*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
										// branch -> 0x6e9b0
									}
									// 0x6e9b0
									// branch -> 0x6e9bc
									// 0x6e9bc
									g10 = v1;
									return 1;
								}
								// 0x6e920
								v28 = g21;
								if (*(int32_t *)v28 == 15) {
									// 0x6e92c
									v29 = g29;
									v41 = v28;
									if (v29 >= 4) {
										// 0x6e934
										g38 = g25;
										function_7cbac(v29, g28);
										v41 = g21;
										// branch -> 0x6e944
									}
									// 0x6e944
									*(int32_t *)v41 = 15;
									// branch -> 0x6e980
								} else {
									// 0x6e950
									if (v15 == 0) {
										// 0x6e958
										if (__asm_rlwinm_(v64, 0, 20, 20) != 0) {
											// 0x6e960
											function_7ca88(g29);
											// branch -> 0x6e968
										}
									}
									// 0x6e968
									v30 = g29;
									if (v30 >= 4) {
										// 0x6e970
										g38 = g25;
										function_7cbac(v30, g28);
										// branch -> 0x6e980
									}
								}
								// 0x6e980
								v57 = (char *)(g24 + g26 + 164);
								if (*v57 == 0) {
									// 0x6e990
									v16 = g22 + g27;
									*v57 = -1;
									v58 = g24 + g26;
									*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
									*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
									// branch -> 0x6e9b0
								}
								// 0x6e9b0
								// branch -> 0x6e9bc
								// 0x6e9bc
								g10 = v1;
								return 1;
							}
							// 0x6e870
							v24 = v23;
							if (g35 % 256 == 0) {
								// 0x6e878
								v38 = 64 * v23;
								g25 = v38;
								v24 = v38;
								// branch -> 0x6e87c
							}
							// 0x6e87c
							v26 = v24;
							if (g36 != 0) {
								// 0x6e884
								v71 = v24 / 4;
								g25 = v71;
								v26 = v71;
								// branch -> 0x6e888
							}
							// 0x6e888
							v25 = g28;
							v27 = v25;
							if (v25 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
								// 0x6e898
								v39 = (int32_t *)g20;
								*v39 = *v39 - v26;
								v27 = g28;
								// branch -> 0x6e8a4
							}
							// 0x6e8a4
							v40 = 0x55ec * v27;
							g22 = v40;
							v64 = *(int32_t *)(g27 + v40 + 0x5568);
							if (__asm_rlwinm_(v64, 0, 28, 28) != 0) {
								// 0x6e8b8
								v56 = (int32_t *)(g24 + g26 + 160);
								*v56 = *v56 | 8;
								// branch -> 0x6e8c8
							}
							// 0x6e8c8
							if (*(int32_t *)g20 > 63) {
								// 0x6e908
								if (g36 != 0) {
									// 0x6e910
									PlayEffect(g29, 1);
									// branch -> 0x6e980
									// 0x6e980
									v57 = (char *)(g24 + g26 + 164);
									if (*v57 == 0) {
										// 0x6e990
										v16 = g22 + g27;
										*v57 = -1;
										v58 = g24 + g26;
										*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
										*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
										// branch -> 0x6e9b0
									}
									// 0x6e9b0
									// branch -> 0x6e9bc
									// 0x6e9bc
									g10 = v1;
									return 1;
								}
								// 0x6e920
								v28 = g21;
								if (*(int32_t *)v28 == 15) {
									// 0x6e92c
									v29 = g29;
									v41 = v28;
									if (v29 >= 4) {
										// 0x6e934
										g38 = g25;
										function_7cbac(v29, g28);
										v41 = g21;
										// branch -> 0x6e944
									}
									// 0x6e944
									*(int32_t *)v41 = 15;
									// branch -> 0x6e980
								} else {
									// 0x6e950
									if (v15 == 0) {
										// 0x6e958
										if (__asm_rlwinm_(v64, 0, 20, 20) != 0) {
											// 0x6e960
											function_7ca88(g29);
											// branch -> 0x6e968
										}
									}
									// 0x6e968
									v30 = g29;
									if (v30 >= 4) {
										// 0x6e970
										g38 = g25;
										function_7cbac(v30, g28);
										// branch -> 0x6e980
									}
								}
								// 0x6e980
								v57 = (char *)(g24 + g26 + 164);
								if (*v57 == 0) {
									// 0x6e990
									v16 = g22 + g27;
									*v57 = -1;
									v58 = g24 + g26;
									*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
									*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
									// branch -> 0x6e9b0
								}
								// 0x6e9b0
								// branch -> 0x6e9bc
								// 0x6e9bc
								g10 = v1;
								return 1;
							}
							// 0x6e8d4
							M_StartKill(g29, g28);
							if (*(int32_t *)g21 == 15) {
								// 0x6e8e0
								*(int32_t *)g21 = 15;
								// branch -> 0x6e980
							}
							// 0x6e980
							v57 = (char *)(g24 + g26 + 164);
							if (*v57 == 0) {
								// 0x6e990
								v16 = g22 + g27;
								*v57 = -1;
								v58 = g24 + g26;
								*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
								*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
								// branch -> 0x6e9b0
							}
							// 0x6e9b0
							result2 = 1;
							// branch -> 0x6e9bc
						} else {
							// 0x6e9b8
							result2 = 0;
							// branch -> 0x6e9bc
						}
						// 0x6e9bc
						g10 = v1;
						return result2;
					}
				}
				// 0x6e698
				if (__asm_rlwinm_(v10, 0, 30, 30) != 0) {
					// 0x6e6a0
					if (v14 == 1) {
						// 0x6e6b8
						g36 = 1;
						// branch -> 0x6e6bc
						// 0x6e6bc
						g37 = 100;
						v42 = random(69);
						v18 = g25;
						g25 = v42;
						v31 = g22 + v18 + 16;
						g22 = v31;
						v32 = 0x55ec * g28;
						v43 = g24 + g26;
						if (*(char *)v31 == 0) {
							// 0x6e6e0
							v65 = (int32_t) * (char *)(v43 + 206);
							v44 = g27 + v32;
							v19 = g32;
							v45 = v19 * v19;
							v59 = *(int32_t *)(v44 + 0x5578);
							v60 = *(char *)(v44 + 348);
							v61 = *(int32_t *)(v44 + 0x5554);
							v62 = *(int32_t *)(v44 + 368);
							v33 = (int32_t) * (char *)(v44 + 436) + 50;
							v46 = v33 - (v65 - v59) + v61 + v62 - (v45 / 2 | v45 & -0x80000000);
							v34 = v60 == 1 ? v46 + 20 : v46;
							g32 = v34;
							if (v60 == 0) {
								// 0x6e740
								v35 = v34 + 10;
								g32 = v35;
								v21 = v35;
								// branch -> 0x6e784
							} else {
								v21 = v34;
							}
						} else {
							// 0x6e748
							v66 = (int32_t) * (char *)(v43 + 196);
							v47 = g27 + v32;
							v48 = *(int32_t *)(v47 + 360) + 50 - 0x1000000 * v66 / 0x800000 - g32;
							g32 = v48;
							if (*(char *)(v47 + 348) == 2) {
								// 0x6e780
								v36 = v48 + 20;
								g32 = v36;
								v21 = v36;
								// branch -> 0x6e784
							} else {
								v21 = v48;
							}
						}
						// 0x6e784
						v20 = v21;
						if (v21 <= 4) {
							// 0x6e78c
							g32 = 5;
							v20 = 5;
							// branch -> 0x6e790
						}
						// 0x6e790
						if (v20 >= 96) {
							// 0x6e798
							g32 = 95;
							// branch -> 0x6e79c
						}
						// 0x6e79c
						if (*(int32_t *)g21 == 15) {
							// 0x6e7a8
							g25 = 0;
							// branch -> 0x6e7ac
						}
						// 0x6e7ac
						if (function_875c8(g29, &result) != 0) {
							// 0x6e7c0
							// branch -> 0x6e9bc
							// 0x6e9bc
							g10 = v1;
							return result;
						}
						// 0x6e7c8
						if (g25 < g32) {
							// 0x6e7d0
							if (g33 == 63) {
								// 0x6e7d8
								v67 = 0x55555556 * (int64_t) * (int32_t *)g20;
								v70 = ((int32_t)(v67 / 0x100000000) + (int32_t)(v67 / 0x8000000000000000)) / 64;
								v17 = v70;
								v22 = v70;
								// branch -> 0x6e80c
							} else {
								// 0x6e7f8
								g37 = 1 - g30 + g31;
								v49 = g30 + random(70);
								v17 = v49;
								v22 = v49;
								// branch -> 0x6e80c
							}
							// 0x6e80c
							g25 = v17;
							v50 = *(char *)g22;
							v15 = v50;
							v23 = v22;
							if (v50 == 0) {
								// 0x6e818
								v51 = g27 + 0x55ec * g28;
								v68 = 0x51eb851f * (int64_t)(*(int32_t *)(v51 + 0x5550) * v22);
								v69 = (int32_t)(v68 / 0x100000000) >> 31;
								v37 = v69 < 0;
								v52 = (v69 & -0x8000000 | (int32_t)(v68 / 0x2000000000)) + v37;
								v53 = *(int32_t *)(v51 + 0x555c) + v22 + v52;
								v63 = *(int32_t *)(v51 + 388);
								if (*(char *)(v51 + 348) == 1) {
									// 0x6e858
									v54 = v63 + v53;
									g25 = v54;
									v23 = v54;
									// branch -> 0x6e870
								} else {
									// 0x6e864
									v55 = (v63 / 2 | v63 & -0x80000000) + v53;
									g25 = v55;
									v23 = v55;
									// branch -> 0x6e870
								}
								// 0x6e870
								v24 = v23;
								if (g35 % 256 == 0) {
									// 0x6e878
									v38 = 64 * v23;
									g25 = v38;
									v24 = v38;
									// branch -> 0x6e87c
								}
								// 0x6e87c
								v26 = v24;
								if (g36 != 0) {
									// 0x6e884
									v71 = v24 / 4;
									g25 = v71;
									v26 = v71;
									// branch -> 0x6e888
								}
								// 0x6e888
								v25 = g28;
								v27 = v25;
								if (v25 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
									// 0x6e898
									v39 = (int32_t *)g20;
									*v39 = *v39 - v26;
									v27 = g28;
									// branch -> 0x6e8a4
								}
								// 0x6e8a4
								v40 = 0x55ec * v27;
								g22 = v40;
								v64 = *(int32_t *)(g27 + v40 + 0x5568);
								if (__asm_rlwinm_(v64, 0, 28, 28) != 0) {
									// 0x6e8b8
									v56 = (int32_t *)(g24 + g26 + 160);
									*v56 = *v56 | 8;
									// branch -> 0x6e8c8
								}
								// 0x6e8c8
								if (*(int32_t *)g20 <= 63) {
									// 0x6e8d4
									M_StartKill(g29, g28);
									if (*(int32_t *)g21 == 15) {
										// 0x6e8e0
										*(int32_t *)g21 = 15;
										// branch -> 0x6e980
									}
									// 0x6e980
									v57 = (char *)(g24 + g26 + 164);
									if (*v57 == 0) {
										// 0x6e990
										v16 = g22 + g27;
										*v57 = -1;
										v58 = g24 + g26;
										*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
										*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
										// branch -> 0x6e9b0
									}
									// 0x6e9b0
									// branch -> 0x6e9bc
									// 0x6e9bc
									g10 = v1;
									return 1;
								}
								// 0x6e908
								if (g36 != 0) {
									// 0x6e910
									PlayEffect(g29, 1);
									// branch -> 0x6e980
									// 0x6e980
									v57 = (char *)(g24 + g26 + 164);
									if (*v57 == 0) {
										// 0x6e990
										v16 = g22 + g27;
										*v57 = -1;
										v58 = g24 + g26;
										*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
										*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
										// branch -> 0x6e9b0
									}
									// 0x6e9b0
									// branch -> 0x6e9bc
									// 0x6e9bc
									g10 = v1;
									return 1;
								}
								// 0x6e920
								v28 = g21;
								if (*(int32_t *)v28 == 15) {
									// 0x6e92c
									v29 = g29;
									v41 = v28;
									if (v29 >= 4) {
										// 0x6e934
										g38 = g25;
										function_7cbac(v29, g28);
										v41 = g21;
										// branch -> 0x6e944
									}
									// 0x6e944
									*(int32_t *)v41 = 15;
									// branch -> 0x6e980
								} else {
									// 0x6e950
									if (v15 == 0) {
										// 0x6e958
										if (__asm_rlwinm_(v64, 0, 20, 20) != 0) {
											// 0x6e960
											function_7ca88(g29);
											// branch -> 0x6e968
										}
									}
									// 0x6e968
									v30 = g29;
									if (v30 >= 4) {
										// 0x6e970
										g38 = g25;
										function_7cbac(v30, g28);
										// branch -> 0x6e980
									}
								}
								// 0x6e980
								v57 = (char *)(g24 + g26 + 164);
								if (*v57 == 0) {
									// 0x6e990
									v16 = g22 + g27;
									*v57 = -1;
									v58 = g24 + g26;
									*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
									*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
									// branch -> 0x6e9b0
								}
								// 0x6e9b0
								// branch -> 0x6e9bc
								// 0x6e9bc
								g10 = v1;
								return 1;
							}
							// 0x6e870
							v24 = v23;
							if (g35 % 256 == 0) {
								// 0x6e878
								v38 = 64 * v23;
								g25 = v38;
								v24 = v38;
								// branch -> 0x6e87c
							}
							// 0x6e87c
							v26 = v24;
							if (g36 != 0) {
								// 0x6e884
								v71 = v24 / 4;
								g25 = v71;
								v26 = v71;
								// branch -> 0x6e888
							}
							// 0x6e888
							v25 = g28;
							v27 = v25;
							if (v25 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
								// 0x6e898
								v39 = (int32_t *)g20;
								*v39 = *v39 - v26;
								v27 = g28;
								// branch -> 0x6e8a4
							}
							// 0x6e8a4
							v40 = 0x55ec * v27;
							g22 = v40;
							v64 = *(int32_t *)(g27 + v40 + 0x5568);
							if (__asm_rlwinm_(v64, 0, 28, 28) != 0) {
								// 0x6e8b8
								v56 = (int32_t *)(g24 + g26 + 160);
								*v56 = *v56 | 8;
								// branch -> 0x6e8c8
							}
							// 0x6e8c8
							if (*(int32_t *)g20 > 63) {
								// 0x6e908
								if (g36 != 0) {
									// 0x6e910
									PlayEffect(g29, 1);
									// branch -> 0x6e980
									// 0x6e980
									v57 = (char *)(g24 + g26 + 164);
									if (*v57 == 0) {
										// 0x6e990
										v16 = g22 + g27;
										*v57 = -1;
										v58 = g24 + g26;
										*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
										*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
										// branch -> 0x6e9b0
									}
									// 0x6e9b0
									// branch -> 0x6e9bc
									// 0x6e9bc
									g10 = v1;
									return 1;
								}
								// 0x6e920
								v28 = g21;
								if (*(int32_t *)v28 == 15) {
									// 0x6e92c
									v29 = g29;
									v41 = v28;
									if (v29 >= 4) {
										// 0x6e934
										g38 = g25;
										function_7cbac(v29, g28);
										v41 = g21;
										// branch -> 0x6e944
									}
									// 0x6e944
									*(int32_t *)v41 = 15;
									// branch -> 0x6e980
								} else {
									// 0x6e950
									if (v15 == 0) {
										// 0x6e958
										if (__asm_rlwinm_(v64, 0, 20, 20) != 0) {
											// 0x6e960
											function_7ca88(g29);
											// branch -> 0x6e968
										}
									}
									// 0x6e968
									v30 = g29;
									if (v30 >= 4) {
										// 0x6e970
										g38 = g25;
										function_7cbac(v30, g28);
										// branch -> 0x6e980
									}
								}
								// 0x6e980
								v57 = (char *)(g24 + g26 + 164);
								if (*v57 == 0) {
									// 0x6e990
									v16 = g22 + g27;
									*v57 = -1;
									v58 = g24 + g26;
									*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
									*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
									// branch -> 0x6e9b0
								}
								// 0x6e9b0
								// branch -> 0x6e9bc
								// 0x6e9bc
								g10 = v1;
								return 1;
							}
							// 0x6e8d4
							M_StartKill(g29, g28);
							if (*(int32_t *)g21 == 15) {
								// 0x6e8e0
								*(int32_t *)g21 = 15;
								// branch -> 0x6e980
							}
							// 0x6e980
							v57 = (char *)(g24 + g26 + 164);
							if (*v57 == 0) {
								// 0x6e990
								v16 = g22 + g27;
								*v57 = -1;
								v58 = g24 + g26;
								*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
								*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
								// branch -> 0x6e9b0
							}
							// 0x6e9b0
							result2 = 1;
							// branch -> 0x6e9bc
						} else {
							// 0x6e9b8
							result2 = 0;
							// branch -> 0x6e9bc
						}
						// 0x6e9bc
						g10 = v1;
						return result2;
					}
				}
				// 0x6e6a8
				if (__asm_rlwinm_(v10, 0, 29, 29) != 0) {
					// 0x6e6b0
					if (v14 == 2) {
						// 0x6e6b8
						g36 = 1;
						// branch -> 0x6e6bc
					}
				}
				// 0x6e6bc
				g37 = 100;
				v42 = random(69);
				v18 = g25;
				g25 = v42;
				v31 = g22 + v18 + 16;
				g22 = v31;
				v32 = 0x55ec * g28;
				v43 = g24 + g26;
				if (*(char *)v31 == 0) {
					// 0x6e6e0
					v65 = (int32_t) * (char *)(v43 + 206);
					v44 = g27 + v32;
					v19 = g32;
					v45 = v19 * v19;
					v59 = *(int32_t *)(v44 + 0x5578);
					v60 = *(char *)(v44 + 348);
					v61 = *(int32_t *)(v44 + 0x5554);
					v62 = *(int32_t *)(v44 + 368);
					v33 = (int32_t) * (char *)(v44 + 436) + 50;
					v46 = v33 - (v65 - v59) + v61 + v62 - (v45 / 2 | v45 & -0x80000000);
					v34 = v60 == 1 ? v46 + 20 : v46;
					g32 = v34;
					if (v60 == 0) {
						// 0x6e740
						v35 = v34 + 10;
						g32 = v35;
						v21 = v35;
						// branch -> 0x6e784
					} else {
						v21 = v34;
					}
				} else {
					// 0x6e748
					v66 = (int32_t) * (char *)(v43 + 196);
					v47 = g27 + v32;
					v48 = *(int32_t *)(v47 + 360) + 50 - 0x1000000 * v66 / 0x800000 - g32;
					g32 = v48;
					if (*(char *)(v47 + 348) == 2) {
						// 0x6e780
						v36 = v48 + 20;
						g32 = v36;
						v21 = v36;
						// branch -> 0x6e784
					} else {
						v21 = v48;
					}
				}
				// 0x6e784
				v20 = v21;
				if (v21 <= 4) {
					// 0x6e78c
					g32 = 5;
					v20 = 5;
					// branch -> 0x6e790
				}
				// 0x6e790
				if (v20 >= 96) {
					// 0x6e798
					g32 = 95;
					// branch -> 0x6e79c
				}
				// 0x6e79c
				if (*(int32_t *)g21 == 15) {
					// 0x6e7a8
					g25 = 0;
					// branch -> 0x6e7ac
				}
				// 0x6e7ac
				if (function_875c8(g29, &result) == 0) {
					// 0x6e7c8
					if (g25 < g32) {
						// 0x6e7d0
						if (g33 == 63) {
							// 0x6e7d8
							v67 = 0x55555556 * (int64_t) * (int32_t *)g20;
							v70 = ((int32_t)(v67 / 0x100000000) + (int32_t)(v67 / 0x8000000000000000)) / 64;
							v17 = v70;
							v22 = v70;
							// branch -> 0x6e80c
						} else {
							// 0x6e7f8
							g37 = 1 - g30 + g31;
							v49 = g30 + random(70);
							v17 = v49;
							v22 = v49;
							// branch -> 0x6e80c
						}
						// 0x6e80c
						g25 = v17;
						v50 = *(char *)g22;
						v15 = v50;
						v23 = v22;
						if (v50 == 0) {
							// 0x6e818
							v51 = g27 + 0x55ec * g28;
							v68 = 0x51eb851f * (int64_t)(*(int32_t *)(v51 + 0x5550) * v22);
							v69 = (int32_t)(v68 / 0x100000000) >> 31;
							v37 = v69 < 0;
							v52 = (v69 & -0x8000000 | (int32_t)(v68 / 0x2000000000)) + v37;
							v53 = *(int32_t *)(v51 + 0x555c) + v22 + v52;
							v63 = *(int32_t *)(v51 + 388);
							if (*(char *)(v51 + 348) == 1) {
								// 0x6e858
								v54 = v63 + v53;
								g25 = v54;
								v23 = v54;
								// branch -> 0x6e870
							} else {
								// 0x6e864
								v55 = (v63 / 2 | v63 & -0x80000000) + v53;
								g25 = v55;
								v23 = v55;
								// branch -> 0x6e870
							}
							// 0x6e870
							v24 = v23;
							if (g35 % 256 == 0) {
								// 0x6e878
								v38 = 64 * v23;
								g25 = v38;
								v24 = v38;
								// branch -> 0x6e87c
							}
							// 0x6e87c
							v26 = v24;
							if (g36 != 0) {
								// 0x6e884
								v71 = v24 / 4;
								g25 = v71;
								v26 = v71;
								// branch -> 0x6e888
							}
							// 0x6e888
							v25 = g28;
							v27 = v25;
							if (v25 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
								// 0x6e898
								v39 = (int32_t *)g20;
								*v39 = *v39 - v26;
								v27 = g28;
								// branch -> 0x6e8a4
							}
							// 0x6e8a4
							v40 = 0x55ec * v27;
							g22 = v40;
							v64 = *(int32_t *)(g27 + v40 + 0x5568);
							if (__asm_rlwinm_(v64, 0, 28, 28) != 0) {
								// 0x6e8b8
								v56 = (int32_t *)(g24 + g26 + 160);
								*v56 = *v56 | 8;
								// branch -> 0x6e8c8
							}
							// 0x6e8c8
							if (*(int32_t *)g20 <= 63) {
								// 0x6e8d4
								M_StartKill(g29, g28);
								if (*(int32_t *)g21 == 15) {
									// 0x6e8e0
									*(int32_t *)g21 = 15;
									// branch -> 0x6e980
								}
								// 0x6e980
								v57 = (char *)(g24 + g26 + 164);
								if (*v57 == 0) {
									// 0x6e990
									v16 = g22 + g27;
									*v57 = -1;
									v58 = g24 + g26;
									*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
									*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
									// branch -> 0x6e9b0
								}
								// 0x6e9b0
								// branch -> 0x6e9bc
								// 0x6e9bc
								g10 = v1;
								return 1;
							}
							// 0x6e908
							if (g36 != 0) {
								// 0x6e910
								PlayEffect(g29, 1);
								// branch -> 0x6e980
								// 0x6e980
								v57 = (char *)(g24 + g26 + 164);
								if (*v57 == 0) {
									// 0x6e990
									v16 = g22 + g27;
									*v57 = -1;
									v58 = g24 + g26;
									*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
									*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
									// branch -> 0x6e9b0
								}
								// 0x6e9b0
								// branch -> 0x6e9bc
								// 0x6e9bc
								g10 = v1;
								return 1;
							}
							// 0x6e920
							v28 = g21;
							if (*(int32_t *)v28 == 15) {
								// 0x6e92c
								v29 = g29;
								v41 = v28;
								if (v29 >= 4) {
									// 0x6e934
									g38 = g25;
									function_7cbac(v29, g28);
									v41 = g21;
									// branch -> 0x6e944
								}
								// 0x6e944
								*(int32_t *)v41 = 15;
								// branch -> 0x6e980
							} else {
								// 0x6e950
								if (v15 == 0) {
									// 0x6e958
									if (__asm_rlwinm_(v64, 0, 20, 20) != 0) {
										// 0x6e960
										function_7ca88(g29);
										// branch -> 0x6e968
									}
								}
								// 0x6e968
								v30 = g29;
								if (v30 >= 4) {
									// 0x6e970
									g38 = g25;
									function_7cbac(v30, g28);
									// branch -> 0x6e980
								}
							}
							// 0x6e980
							v57 = (char *)(g24 + g26 + 164);
							if (*v57 == 0) {
								// 0x6e990
								v16 = g22 + g27;
								*v57 = -1;
								v58 = g24 + g26;
								*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
								*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
								// branch -> 0x6e9b0
							}
							// 0x6e9b0
							// branch -> 0x6e9bc
							// 0x6e9bc
							g10 = v1;
							return 1;
						}
						// 0x6e870
						v24 = v23;
						if (g35 % 256 == 0) {
							// 0x6e878
							v38 = 64 * v23;
							g25 = v38;
							v24 = v38;
							// branch -> 0x6e87c
						}
						// 0x6e87c
						v26 = v24;
						if (g36 != 0) {
							// 0x6e884
							v71 = v24 / 4;
							g25 = v71;
							v26 = v71;
							// branch -> 0x6e888
						}
						// 0x6e888
						v25 = g28;
						v27 = v25;
						if (v25 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
							// 0x6e898
							v39 = (int32_t *)g20;
							*v39 = *v39 - v26;
							v27 = g28;
							// branch -> 0x6e8a4
						}
						// 0x6e8a4
						v40 = 0x55ec * v27;
						g22 = v40;
						v64 = *(int32_t *)(g27 + v40 + 0x5568);
						if (__asm_rlwinm_(v64, 0, 28, 28) != 0) {
							// 0x6e8b8
							v56 = (int32_t *)(g24 + g26 + 160);
							*v56 = *v56 | 8;
							// branch -> 0x6e8c8
						}
						// 0x6e8c8
						if (*(int32_t *)g20 > 63) {
							// 0x6e908
							if (g36 != 0) {
								// 0x6e910
								PlayEffect(g29, 1);
								// branch -> 0x6e980
								// 0x6e980
								v57 = (char *)(g24 + g26 + 164);
								if (*v57 == 0) {
									// 0x6e990
									v16 = g22 + g27;
									*v57 = -1;
									v58 = g24 + g26;
									*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
									*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
									// branch -> 0x6e9b0
								}
								// 0x6e9b0
								// branch -> 0x6e9bc
								// 0x6e9bc
								g10 = v1;
								return 1;
							}
							// 0x6e920
							v28 = g21;
							if (*(int32_t *)v28 == 15) {
								// 0x6e92c
								v29 = g29;
								v41 = v28;
								if (v29 >= 4) {
									// 0x6e934
									g38 = g25;
									function_7cbac(v29, g28);
									v41 = g21;
									// branch -> 0x6e944
								}
								// 0x6e944
								*(int32_t *)v41 = 15;
								// branch -> 0x6e980
							} else {
								// 0x6e950
								if (v15 == 0) {
									// 0x6e958
									if (__asm_rlwinm_(v64, 0, 20, 20) != 0) {
										// 0x6e960
										function_7ca88(g29);
										// branch -> 0x6e968
									}
								}
								// 0x6e968
								v30 = g29;
								if (v30 >= 4) {
									// 0x6e970
									g38 = g25;
									function_7cbac(v30, g28);
									// branch -> 0x6e980
								}
							}
							// 0x6e980
							v57 = (char *)(g24 + g26 + 164);
							if (*v57 == 0) {
								// 0x6e990
								v16 = g22 + g27;
								*v57 = -1;
								v58 = g24 + g26;
								*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
								*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
								// branch -> 0x6e9b0
							}
							// 0x6e9b0
							// branch -> 0x6e9bc
							// 0x6e9bc
							g10 = v1;
							return 1;
						}
						// 0x6e8d4
						M_StartKill(g29, g28);
						if (*(int32_t *)g21 == 15) {
							// 0x6e8e0
							*(int32_t *)g21 = 15;
							// branch -> 0x6e980
						}
						// 0x6e980
						v57 = (char *)(g24 + g26 + 164);
						if (*v57 == 0) {
							// 0x6e990
							v16 = g22 + g27;
							*v57 = -1;
							v58 = g24 + g26;
							*(int32_t *)(v58 + 172) = *(int32_t *)(v16 + 56);
							*(int32_t *)(v58 + 176) = *(int32_t *)(v16 + 60);
							// branch -> 0x6e9b0
						}
						// 0x6e9b0
						// branch -> 0x6e9bc
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

// Address range: 0x6e9d0 - 0x6ef7c
int32_t PlayerMHit(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x6e9d4
	g35 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0x6e9dc
	g33 = v2;
	int32_t v3 = 0x55ec * a1; // 0x6e9e0
	g31 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x70e8); // 0x6e9e4
	g26 = v4;
	g36 = a2;
	g32 = *(int32_t *)(g23 - 0x7754);
	g27 = a3;
	int32_t v5 = v2 + v3; // 0x6e9f4
	g17 = *(int32_t *)(g23 - 0x77ac);
	g20 = a4;
	g21 = a5;
	g22 = a6;
	g24 = a7;
	g25 = g13;
	int32_t v6 = v5 + 404; // 0x6ea18
	g30 = v6;
	if (*(int32_t *)v6 > 63) {
		// 0x6ea2c
		if (*(char *)(v5 + 313) == 0) {
			// 0x6ea44
			if (*(char *)(v5 + 284) % 2 != 0) {
				// 0x6ea50
				if (*(char *)(28 * a6 + v4 + 16) == 0) {
					// 0x6ea64
					// branch -> 0x6ef68
					// 0x6ef68
					g10 = v1;
					return 0;
				}
			}
			// 0x6ea6c
			g37 = 100;
			int32_t v7 = 28 * g22; // 0x6ea78
			g18 = v7;
			g19 = random(72);
			int32_t v8; // r3
			int32_t v9; // r4
			int32_t v10;
			int32_t v11;
			int32_t v12;
			int32_t v13;
			int32_t v14; // 0x6eb78
			int32_t v15; // 0x6eb8c
			int32_t v16; // 0x6eba0
			int32_t v17; // 0x6ebf8
			int32_t v18; // 0x6ec04
			int32_t v19; // 0x6ec10
			int32_t v20; // 0x6ec44
			int32_t v21; // 0x6ec60
			int32_t v22;
			int32_t v23; // 0x6eca8
			int32_t v24; // 0x6ed38
			int32_t v25; // 0x6ed44
			int32_t v26;
			int32_t v27; // 0x6ed88
			int32_t v28; // 0x6ed90
			int32_t v29;
			int32_t v30;       // 0x6eda0
			int32_t v31;       // 0x6edf0
			int32_t v32;       // 0x6edf4
			int32_t v33;       // 0x6ee08
			int32_t v34;       // 0x6ee10
			int32_t v35;       // 0x6ee20
			int32_t v36;       // 0x6eea4
			int32_t v37;       // 0x6eed4
			int32_t v38;       // 0x6ef00
			int32_t v39;       // 0x6ef14
			int32_t v40;       // 0x6ef18
			int32_t v41;       // 0x6ef2c
			int32_t v42;       // 0x6ef34
			int32_t v43;       // 0x6ef44
			int32_t v44;       // 0x6ef50
			uint32_t v45;      // 0x6ebe8
			int32_t v46;       // 0x6ec10
			int32_t v47;       // 0x6ec44
			int32_t v48;       // 0x6eca8
			int32_t v49;       // 0x6ed04
			int32_t v50;       // 0x6ed2c
			int32_t v51;       // 0x6ed38
			int32_t v52;       // 0x6ed7c
			int32_t v53;       // 0x6ed88
			int32_t v54;       // 0x6edc4
			int32_t *v55;      // 0x6edd4
			int32_t v56;       // 0x6edf0
			int32_t *v57;      // 0x6edf4
			int32_t v58;       // 0x6eed4
			int32_t *v59;      // 0x6eef8
			int32_t v60;       // 0x6ef14
			int32_t *v61;      // 0x6ef18
			int32_t v62;       // 0x6eb10
			char v63;          // 0x6eb6c
			int32_t v64;       // 0x6ebac
			int32_t v65;       // 0x6ec10
			int32_t v66;       // 0x6ec44
			int32_t v67;       // 0x6ecf0
			int32_t v68;       // 0x6ed1c
			int32_t v69;       // 0x6ed44
			int32_t v70;       // 0x6ed6c
			int32_t v71;       // 0x6ed90
			int32_t v72;       // 0x6edcc
			int32_t *v73;      // 0x6ede4
			int32_t v74;       // 0x6edf0
			int32_t v75;       // 0x6ee2c
			int32_t v76;       // 0x6eeb0
			int32_t v77;       // 0x6eebc
			int32_t *v78;      // 0x6ef08
			int32_t v79;       // 0x6ef14
			unsigned char v80; // 0x6ec14
			int32_t v81;       // 0x6ec18
			unsigned char v82; // 0x6ec20
			int32_t v83;       // 0x6ec28
			unsigned char v84; // 0x6ec70
			int32_t v85;       // 0x6edf8
			unsigned char v86; // 0x6ee30
			int32_t v87;       // 0x6eeb8
			int32_t v88;       // 0x6eec0
			int32_t v89;       // 0x6eec4
			int32_t v90;       // 0x6ef1c
			int32_t v91;       // 0x6ebac
			uint64_t v92;      // 0x6ece8
			uint64_t v93;      // 0x6edbc
			int32_t v94;       // 0x6edc0
			if (*(char *)(g26 + v7 + 16) == 0) {
				int32_t v95 = g31 + g33;                                                        // 0x6ea90
				int32_t v96 = g36;                                                              // 0x6ea94
				uint64_t v97 = 0x66666667 * (int64_t) * (int32_t *)(v95 + 368);                 // 0x6eaa8
				int32_t v98 = v97 / 0x100000000;                                                // 0x6eaa8
				int32_t v99 = v97 / 0x8000000000000000;                                         // 0x6eab8
				int32_t v100 = (v98 & -0x80000000 | (int32_t)(v97 / 0x200000000)) + v99;        // 0x6eabc
				uint32_t v101 = *(int32_t *)(v95 + 0x5558) + *(int32_t *)(v95 + 0x554c) + v100; // 0x6eac0
				if (v96 == -1) {
					// 0x6eb04
					v62 = 100 - (v101 / 2 | v101 & -0x80000000) - 2 * g27;
					g29 = v62;
					// branch -> 0x6eb5c
				} else {
					unsigned char v102 = *(char *)(v95 + 436);                           // 0x6eacc
					int32_t v103 = g32 + 232 * v96;                                      // 0x6ead0
					unsigned char v104 = *(char *)(v103 + 196);                          // 0x6ead4
					int32_t v105 = (int32_t) * (char *)(v103 + 200) + 30 - v101;         // 0x6eaf0
					int32_t v106 = v105 + 2 * ((int32_t)v104 - (int32_t)v102) - 2 * g27; // 0x6eafc
					g29 = v106;
					v62 = v106;
					// branch -> 0x6eb5c
				}
				// 0x6eb5c
				v14 = v62;
				if (v62 <= 9) {
					// 0x6eb64
					g29 = 10;
					v14 = 10;
					// branch -> 0x6eb68
				}
				// 0x6eb68
				v63 = *(char *)*(int32_t *)(g23 - 0x77e4);
				v15 = v14;
				if (v63 == 14) {
					// 0x6eb78
					if (v14 <= 19) {
						// 0x6eb80
						g29 = 20;
						v15 = 20;
						// branch -> 0x6eb84
					} else {
						v15 = v14;
					}
				}
				// 0x6eb84
				v16 = v15;
				if (v63 == 15) {
					// 0x6eb8c
					if (v15 <= 24) {
						// 0x6eb94
						g29 = 25;
						v16 = 25;
						// branch -> 0x6eb98
					} else {
						v16 = v15;
					}
				}
				// 0x6eb98
				if (v63 == 16) {
					// 0x6eba0
					if (v16 <= 29) {
						// 0x6eba8
						g29 = 30;
						// branch -> 0x6ebac
					}
				}
				// 0x6ebac
				v64 = g31 + g33;
				v91 = *(int32_t *)v64;
				if (v91 != 0) {
					// 0x6ebb8
					if (v91 != 4) {
						// 0x6ebe8
						g28 = 100;
						v45 = g24 % 256;
						if (v45 == 1) {
							// 0x6ebf4
							g28 = 100;
							// branch -> 0x6ebf8
						}
						// 0x6ebf8
						v17 = g22;
						if (v17 == 59) {
							// 0x6ec00
							g28 = 100;
							// branch -> 0x6ec04
						}
						// 0x6ec04
						v18 = g36;
						if (v18 == -1) {
							// 0x6ec44
							v20 = g33;
							v47 = g31;
							v66 = v47 + v20;
							v48 = v47;
							v23 = v20;
							v22 = *(int32_t *)(v66 + 368) + *(int32_t *)(v66 + 392);
							// branch -> 0x6ec54
						} else {
							// 0x6ec0c
							v19 = g33;
							v46 = g31;
							v65 = v46 + v19;
							v80 = *(char *)(v65 + 436);
							v81 = *(int32_t *)(v65 + 392);
							v82 = *(char *)(g32 + 232 * v18 + 196);
							v83 = *(int32_t *)(v65 + 368);
							v48 = v46;
							v23 = v19;
							v22 = v83 + v81 - 2 * ((int32_t)v82 - (int32_t)v80);
							// branch -> 0x6ec54
						}
						// 0x6ec54
						v12 = v22;
						v21 = v22;
						if (v22 <= 0xffffffff) {
							// 0x6ec5c
							v12 = 0;
							v21 = 0;
							// branch -> 0x6ec60
						}
						// 0x6ec60
						v13 = v12;
						if (v21 >= 101) {
							// 0x6ec68
							v13 = 100;
							// branch -> 0x6ec6c
						}
						// 0x6ec6c
						g27 = v13;
						v84 = *(char *)(g18 + g26 + 17);
						if (v84 == 2) {
							// 0x6eca8
							g26 = (int32_t) * (char *)(v23 + v48 + 455);
							// branch -> 0x6eccc
						} else {
							// 0x6ec7c
							if (v84 > 2) {
								// 0x6ec8c
								if (v84 <= 4) {
									// 0x6ecb8
									g26 = (int32_t) * (char *)(v23 + v48 + 453);
									// branch -> 0x6eccc
									// 0x6eccc
									if (g19 >= g29) {
										// 0x6ef64
										// branch -> 0x6ef68
										// 0x6ef68
										g10 = v1;
										return 0;
									}
									// 0x6ecd4
									if (v17 == 63) {
										// 0x6ecdc
										v92 = 0x55555556 * (int64_t) * (int32_t *)g30;
										v67 = (int32_t)(v92 / 0x100000000) + (int32_t)(v92 / 0x8000000000000000);
										v58 = v48;
										v37 = v23;
										v38 = v67;
										// branch -> 0x6eda0
										// 0x6eda0
										v30 = g26;
										if (v30 < 1) {
											// 0x6ee9c
											if (g28 < g27) {
												// 0x6eea4
												v36 = g36;
												if (v36 == -1) {
													// 0x6eed4
													v10 = *(int32_t *)(v37 + v58 + 112);
													// branch -> 0x6eedc
												} else {
													// 0x6eeac
													v76 = v37 + v58;
													v87 = *(int32_t *)(v76 + 60);
													v77 = g32 + 232 * v36;
													v88 = *(int32_t *)(v77 + 32);
													v89 = *(int32_t *)(v77 + 36);
													v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
													// branch -> 0x6eedc
												}
												// 0x6eedc
												g37 = v10;
												function_a5074(g35);
												// branch -> 0x6ef68
											} else {
												// 0x6eeec
												v60 = v58;
												v39 = v37;
												if (g35 == *(int32_t *)g17) {
													// 0x6eef8
													v59 = (int32_t *)g30;
													*v59 = *v59 - v38;
													v78 = (int32_t *)(v37 + v58 + 396);
													*v78 = *v78 - v67;
													v60 = g31;
													v39 = g33;
													// branch -> 0x6ef14
												}
												// 0x6ef14
												v79 = v39 + v60;
												v40 = g30;
												v61 = (int32_t *)v40;
												v90 = *(int32_t *)(v79 + 408);
												v42 = v40;
												if (*v61 > v90) {
													// 0x6ef28
													*v61 = v90;
													v41 = v79;
													*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
													v42 = g30;
													// branch -> 0x6ef34
												}
												// 0x6ef34
												v44 = g35;
												if (*(int32_t *)v42 > 63) {
													// 0x6ef50
													g38 = 0;
													function_a579c(v44, 0);
													// branch -> 0x6ef5c
												} else {
													// 0x6ef40
													function_a640c(v44, g25);
													// branch -> 0x6ef5c
												}
												// 0x6ef5c
												// branch -> 0x6ef68
											}
											// 0x6ef68
											g10 = v1;
											return 1;
										}
										// 0x6eda8
										v93 = 0x51eb851f * (int64_t)(v30 * v38);
										v94 = (int32_t)(v93 / 0x100000000) >> 31;
										v54 = v94 < 0;
										v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
										v56 = v58;
										v31 = v37;
										if (g35 == *(int32_t *)g17) {
											// 0x6edd4
											v55 = (int32_t *)g30;
											*v55 = *v55 - v72;
											v73 = (int32_t *)(v37 + v58 + 396);
											*v73 = *v73 - v72;
											v56 = g31;
											v31 = g33;
											// branch -> 0x6edf0
										}
										// 0x6edf0
										v74 = v31 + v56;
										v32 = g30;
										v57 = (int32_t *)v32;
										v85 = *(int32_t *)(v74 + 408);
										v34 = v32;
										if (*v57 > v85) {
											// 0x6ee04
											*v57 = v85;
											v33 = v74;
											*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
											v34 = g30;
											// branch -> 0x6ee10
										}
										// 0x6ee10
										if (*(int32_t *)v34 > 63) {
											// 0x6ee2c
											v75 = g31 + g33;
											v86 = *(char *)(v75 + 348);
											if (v86 != 0) {
												// 0x6ee50
												if (v86 == 1) {
													// 0x6ee5c
													g34 = 679;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(679);
													// branch -> 0x6ee88
												} else {
													// 0x6ee70
													if (v86 == 2) {
														// 0x6ee78
														g34 = 576;
														g38 = *(int32_t *)(v75 + 60);
														PlaySfxLoc(576);
														// branch -> 0x6ee88
													}
												}
												// 0x6ee88
												*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
												// branch -> 0x6ee94
												// 0x6ee94
												// branch -> 0x6ef68
												// 0x6ef68
												g10 = v1;
												return 1;
											}
											// 0x6ee3c
											g34 = 788;
											g38 = *(int32_t *)(v75 + 60);
											PlaySfxLoc(788);
											// branch -> 0x6ee88
											// 0x6ee88
											*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
											// branch -> 0x6ee94
										} else {
											// 0x6ee1c
											function_a640c(g35, g25);
											// branch -> 0x6ee94
										}
										// 0x6ee94
										// branch -> 0x6ef68
										// 0x6ef68
										g10 = v1;
										return 1;
									}
									// 0x6ecf8
									v49 = g21 - g20 + 1;
									if (v45 == 0) {
										// 0x6ed00
										g37 = 64 * v49;
										v68 = 64 * g20 + random(75);
										v25 = v68;
										if (g36 == -1) {
											// 0x6ed24
											v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
											v26 = v68;
											if (v50 != 0) {
												// 0x6ed34
												v25 = v26 / 2 | v26 & -0x80000000;
												// branch -> 0x6ed38
											} else {
												v25 = v26;
											}
										}
										// 0x6ed38
										v24 = g33;
										v51 = g31;
										v69 = 64 * *(int32_t *)(v51 + v24 + 0x556c) + v25;
										v9 = v69;
										if (v69 <= 63) {
											// 0x6ed50
											v9 = 64;
											v58 = v51;
											v37 = v24;
											v38 = 64;
											// branch -> 0x6eda0
										} else {
											v58 = v51;
											v37 = v24;
											v38 = v69;
										}
									} else {
										// 0x6ed58
										g37 = v49;
										v70 = g20 + random(75);
										v28 = v70;
										if (g36 == -1) {
											// 0x6ed74
											v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
											v29 = v70;
											if (v52 != 0) {
												// 0x6ed84
												v28 = v29 / 2 | v29 & -0x80000000;
												// branch -> 0x6ed88
											} else {
												v28 = v29;
											}
										}
										// 0x6ed88
										v27 = g33;
										v53 = g31;
										v71 = *(int32_t *)(v53 + v27 + 0x556c) + v28;
										v9 = v71;
										if (v71 <= 63) {
											// 0x6ed9c
											v9 = 64;
											v58 = v53;
											v37 = v27;
											v38 = 64;
											// branch -> 0x6eda0
										} else {
											v58 = v53;
											v37 = v27;
											v38 = v71;
										}
									}
									// 0x6eda0
									v30 = g26;
									if (v30 < 1) {
										// 0x6ee9c
										if (g28 < g27) {
											// 0x6eea4
											v36 = g36;
											if (v36 == -1) {
												// 0x6eed4
												v10 = *(int32_t *)(v37 + v58 + 112);
												// branch -> 0x6eedc
											} else {
												// 0x6eeac
												v76 = v37 + v58;
												v87 = *(int32_t *)(v76 + 60);
												v77 = g32 + 232 * v36;
												v88 = *(int32_t *)(v77 + 32);
												v89 = *(int32_t *)(v77 + 36);
												v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
												// branch -> 0x6eedc
											}
											// 0x6eedc
											g37 = v10;
											function_a5074(g35);
											// branch -> 0x6ef68
										} else {
											// 0x6eeec
											v60 = v58;
											v39 = v37;
											if (g35 == *(int32_t *)g17) {
												// 0x6eef8
												v59 = (int32_t *)g30;
												*v59 = *v59 - v38;
												v78 = (int32_t *)(v37 + v58 + 396);
												*v78 = *v78 - v9;
												v60 = g31;
												v39 = g33;
												// branch -> 0x6ef14
											}
											// 0x6ef14
											v79 = v39 + v60;
											v40 = g30;
											v61 = (int32_t *)v40;
											v90 = *(int32_t *)(v79 + 408);
											v42 = v40;
											if (*v61 > v90) {
												// 0x6ef28
												*v61 = v90;
												v41 = v79;
												*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
												v42 = g30;
												// branch -> 0x6ef34
											}
											// 0x6ef34
											v44 = g35;
											if (*(int32_t *)v42 > 63) {
												// 0x6ef50
												g38 = 0;
												function_a579c(v44, 0);
												// branch -> 0x6ef5c
											} else {
												// 0x6ef40
												function_a640c(v44, g25);
												// branch -> 0x6ef5c
											}
											// 0x6ef5c
											// branch -> 0x6ef68
										}
										// 0x6ef68
										g10 = v1;
										return 1;
									}
									// 0x6eda8
									v93 = 0x51eb851f * (int64_t)(v30 * v38);
									v94 = (int32_t)(v93 / 0x100000000) >> 31;
									v54 = v94 < 0;
									v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
									v56 = v58;
									v31 = v37;
									if (g35 == *(int32_t *)g17) {
										// 0x6edd4
										v55 = (int32_t *)g30;
										*v55 = *v55 - v72;
										v73 = (int32_t *)(v37 + v58 + 396);
										*v73 = *v73 - v72;
										v56 = g31;
										v31 = g33;
										// branch -> 0x6edf0
									}
									// 0x6edf0
									v74 = v31 + v56;
									v32 = g30;
									v57 = (int32_t *)v32;
									v85 = *(int32_t *)(v74 + 408);
									v34 = v32;
									if (*v57 > v85) {
										// 0x6ee04
										*v57 = v85;
										v33 = v74;
										*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
										v34 = g30;
										// branch -> 0x6ee10
									}
									// 0x6ee10
									if (*(int32_t *)v34 > 63) {
										// 0x6ee2c
										v75 = g31 + g33;
										v86 = *(char *)(v75 + 348);
										if (v86 != 0) {
											// 0x6ee50
											if (v86 == 1) {
												// 0x6ee5c
												g34 = 679;
												g38 = *(int32_t *)(v75 + 60);
												PlaySfxLoc(679);
												// branch -> 0x6ee88
											} else {
												// 0x6ee70
												if (v86 == 2) {
													// 0x6ee78
													g34 = 576;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(576);
													// branch -> 0x6ee88
												}
											}
											// 0x6ee88
											*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
											// branch -> 0x6ee94
											// 0x6ee94
											// branch -> 0x6ef68
											// 0x6ef68
											g10 = v1;
											return 1;
										}
										// 0x6ee3c
										g34 = 788;
										g38 = *(int32_t *)(v75 + 60);
										PlaySfxLoc(788);
										// branch -> 0x6ee88
										// 0x6ee88
										*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
										// branch -> 0x6ee94
									} else {
										// 0x6ee1c
										function_a640c(g35, g25);
										// branch -> 0x6ee94
									}
									// 0x6ee94
									// branch -> 0x6ef68
									// 0x6ef68
									g10 = v1;
									return 1;
								}
							} else {
								// 0x6ec80
								if (v84 != 0) {
									// 0x6ec98
									g26 = (int32_t) * (char *)(v23 + v48 + 454);
									// branch -> 0x6eccc
									// 0x6eccc
									if (g19 >= g29) {
										// 0x6ef64
										// branch -> 0x6ef68
										// 0x6ef68
										g10 = v1;
										return 0;
									}
									// 0x6ecd4
									if (v17 == 63) {
										// 0x6ecdc
										v92 = 0x55555556 * (int64_t) * (int32_t *)g30;
										v67 = (int32_t)(v92 / 0x100000000) + (int32_t)(v92 / 0x8000000000000000);
										v58 = v48;
										v37 = v23;
										v38 = v67;
										// branch -> 0x6eda0
										// 0x6eda0
										v30 = g26;
										if (v30 < 1) {
											// 0x6ee9c
											if (g28 < g27) {
												// 0x6eea4
												v36 = g36;
												if (v36 == -1) {
													// 0x6eed4
													v10 = *(int32_t *)(v37 + v58 + 112);
													// branch -> 0x6eedc
												} else {
													// 0x6eeac
													v76 = v37 + v58;
													v87 = *(int32_t *)(v76 + 60);
													v77 = g32 + 232 * v36;
													v88 = *(int32_t *)(v77 + 32);
													v89 = *(int32_t *)(v77 + 36);
													v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
													// branch -> 0x6eedc
												}
												// 0x6eedc
												g37 = v10;
												function_a5074(g35);
												// branch -> 0x6ef68
											} else {
												// 0x6eeec
												v60 = v58;
												v39 = v37;
												if (g35 == *(int32_t *)g17) {
													// 0x6eef8
													v59 = (int32_t *)g30;
													*v59 = *v59 - v38;
													v78 = (int32_t *)(v37 + v58 + 396);
													*v78 = *v78 - v67;
													v60 = g31;
													v39 = g33;
													// branch -> 0x6ef14
												}
												// 0x6ef14
												v79 = v39 + v60;
												v40 = g30;
												v61 = (int32_t *)v40;
												v90 = *(int32_t *)(v79 + 408);
												v42 = v40;
												if (*v61 > v90) {
													// 0x6ef28
													*v61 = v90;
													v41 = v79;
													*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
													v42 = g30;
													// branch -> 0x6ef34
												}
												// 0x6ef34
												v44 = g35;
												if (*(int32_t *)v42 > 63) {
													// 0x6ef50
													g38 = 0;
													function_a579c(v44, 0);
													// branch -> 0x6ef5c
												} else {
													// 0x6ef40
													function_a640c(v44, g25);
													// branch -> 0x6ef5c
												}
												// 0x6ef5c
												// branch -> 0x6ef68
											}
											// 0x6ef68
											g10 = v1;
											return 1;
										}
										// 0x6eda8
										v93 = 0x51eb851f * (int64_t)(v30 * v38);
										v94 = (int32_t)(v93 / 0x100000000) >> 31;
										v54 = v94 < 0;
										v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
										v56 = v58;
										v31 = v37;
										if (g35 == *(int32_t *)g17) {
											// 0x6edd4
											v55 = (int32_t *)g30;
											*v55 = *v55 - v72;
											v73 = (int32_t *)(v37 + v58 + 396);
											*v73 = *v73 - v72;
											v56 = g31;
											v31 = g33;
											// branch -> 0x6edf0
										}
										// 0x6edf0
										v74 = v31 + v56;
										v32 = g30;
										v57 = (int32_t *)v32;
										v85 = *(int32_t *)(v74 + 408);
										v34 = v32;
										if (*v57 > v85) {
											// 0x6ee04
											*v57 = v85;
											v33 = v74;
											*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
											v34 = g30;
											// branch -> 0x6ee10
										}
										// 0x6ee10
										if (*(int32_t *)v34 > 63) {
											// 0x6ee2c
											v75 = g31 + g33;
											v86 = *(char *)(v75 + 348);
											if (v86 != 0) {
												// 0x6ee50
												if (v86 == 1) {
													// 0x6ee5c
													g34 = 679;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(679);
													// branch -> 0x6ee88
												} else {
													// 0x6ee70
													if (v86 == 2) {
														// 0x6ee78
														g34 = 576;
														g38 = *(int32_t *)(v75 + 60);
														PlaySfxLoc(576);
														// branch -> 0x6ee88
													}
												}
												// 0x6ee88
												*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
												// branch -> 0x6ee94
												// 0x6ee94
												// branch -> 0x6ef68
												// 0x6ef68
												g10 = v1;
												return 1;
											}
											// 0x6ee3c
											g34 = 788;
											g38 = *(int32_t *)(v75 + 60);
											PlaySfxLoc(788);
											// branch -> 0x6ee88
											// 0x6ee88
											*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
											// branch -> 0x6ee94
										} else {
											// 0x6ee1c
											function_a640c(g35, g25);
											// branch -> 0x6ee94
										}
										// 0x6ee94
										// branch -> 0x6ef68
										// 0x6ef68
										g10 = v1;
										return 1;
									}
									// 0x6ecf8
									v49 = g21 - g20 + 1;
									if (v45 == 0) {
										// 0x6ed00
										g37 = 64 * v49;
										v68 = 64 * g20 + random(75);
										v25 = v68;
										if (g36 == -1) {
											// 0x6ed24
											v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
											v26 = v68;
											if (v50 != 0) {
												// 0x6ed34
												v25 = v26 / 2 | v26 & -0x80000000;
												// branch -> 0x6ed38
											} else {
												v25 = v26;
											}
										}
										// 0x6ed38
										v24 = g33;
										v51 = g31;
										v69 = 64 * *(int32_t *)(v51 + v24 + 0x556c) + v25;
										v9 = v69;
										if (v69 <= 63) {
											// 0x6ed50
											v9 = 64;
											v58 = v51;
											v37 = v24;
											v38 = 64;
											// branch -> 0x6eda0
										} else {
											v58 = v51;
											v37 = v24;
											v38 = v69;
										}
									} else {
										// 0x6ed58
										g37 = v49;
										v70 = g20 + random(75);
										v28 = v70;
										if (g36 == -1) {
											// 0x6ed74
											v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
											v29 = v70;
											if (v52 != 0) {
												// 0x6ed84
												v28 = v29 / 2 | v29 & -0x80000000;
												// branch -> 0x6ed88
											} else {
												v28 = v29;
											}
										}
										// 0x6ed88
										v27 = g33;
										v53 = g31;
										v71 = *(int32_t *)(v53 + v27 + 0x556c) + v28;
										v9 = v71;
										if (v71 <= 63) {
											// 0x6ed9c
											v9 = 64;
											v58 = v53;
											v37 = v27;
											v38 = 64;
											// branch -> 0x6eda0
										} else {
											v58 = v53;
											v37 = v27;
											v38 = v71;
										}
									}
									// 0x6eda0
									v30 = g26;
									if (v30 < 1) {
										// 0x6ee9c
										if (g28 < g27) {
											// 0x6eea4
											v36 = g36;
											if (v36 == -1) {
												// 0x6eed4
												v10 = *(int32_t *)(v37 + v58 + 112);
												// branch -> 0x6eedc
											} else {
												// 0x6eeac
												v76 = v37 + v58;
												v87 = *(int32_t *)(v76 + 60);
												v77 = g32 + 232 * v36;
												v88 = *(int32_t *)(v77 + 32);
												v89 = *(int32_t *)(v77 + 36);
												v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
												// branch -> 0x6eedc
											}
											// 0x6eedc
											g37 = v10;
											function_a5074(g35);
											// branch -> 0x6ef68
										} else {
											// 0x6eeec
											v60 = v58;
											v39 = v37;
											if (g35 == *(int32_t *)g17) {
												// 0x6eef8
												v59 = (int32_t *)g30;
												*v59 = *v59 - v38;
												v78 = (int32_t *)(v37 + v58 + 396);
												*v78 = *v78 - v9;
												v60 = g31;
												v39 = g33;
												// branch -> 0x6ef14
											}
											// 0x6ef14
											v79 = v39 + v60;
											v40 = g30;
											v61 = (int32_t *)v40;
											v90 = *(int32_t *)(v79 + 408);
											v42 = v40;
											if (*v61 > v90) {
												// 0x6ef28
												*v61 = v90;
												v41 = v79;
												*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
												v42 = g30;
												// branch -> 0x6ef34
											}
											// 0x6ef34
											v44 = g35;
											if (*(int32_t *)v42 > 63) {
												// 0x6ef50
												g38 = 0;
												function_a579c(v44, 0);
												// branch -> 0x6ef5c
											} else {
												// 0x6ef40
												function_a640c(v44, g25);
												// branch -> 0x6ef5c
											}
											// 0x6ef5c
											// branch -> 0x6ef68
										}
										// 0x6ef68
										g10 = v1;
										return 1;
									}
									// 0x6eda8
									v93 = 0x51eb851f * (int64_t)(v30 * v38);
									v94 = (int32_t)(v93 / 0x100000000) >> 31;
									v54 = v94 < 0;
									v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
									v56 = v58;
									v31 = v37;
									if (g35 == *(int32_t *)g17) {
										// 0x6edd4
										v55 = (int32_t *)g30;
										*v55 = *v55 - v72;
										v73 = (int32_t *)(v37 + v58 + 396);
										*v73 = *v73 - v72;
										v56 = g31;
										v31 = g33;
										// branch -> 0x6edf0
									}
									// 0x6edf0
									v74 = v31 + v56;
									v32 = g30;
									v57 = (int32_t *)v32;
									v85 = *(int32_t *)(v74 + 408);
									v34 = v32;
									if (*v57 > v85) {
										// 0x6ee04
										*v57 = v85;
										v33 = v74;
										*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
										v34 = g30;
										// branch -> 0x6ee10
									}
									// 0x6ee10
									if (*(int32_t *)v34 > 63) {
										// 0x6ee2c
										v75 = g31 + g33;
										v86 = *(char *)(v75 + 348);
										if (v86 != 0) {
											// 0x6ee50
											if (v86 == 1) {
												// 0x6ee5c
												g34 = 679;
												g38 = *(int32_t *)(v75 + 60);
												PlaySfxLoc(679);
												// branch -> 0x6ee88
											} else {
												// 0x6ee70
												if (v86 == 2) {
													// 0x6ee78
													g34 = 576;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(576);
													// branch -> 0x6ee88
												}
											}
											// 0x6ee88
											*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
											// branch -> 0x6ee94
											// 0x6ee94
											// branch -> 0x6ef68
											// 0x6ef68
											g10 = v1;
											return 1;
										}
										// 0x6ee3c
										g34 = 788;
										g38 = *(int32_t *)(v75 + 60);
										PlaySfxLoc(788);
										// branch -> 0x6ee88
										// 0x6ee88
										*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
										// branch -> 0x6ee94
									} else {
										// 0x6ee1c
										function_a640c(g35, g25);
										// branch -> 0x6ee94
									}
									// 0x6ee94
									// branch -> 0x6ef68
									// 0x6ef68
									g10 = v1;
									return 1;
								}
							}
							// 0x6ecc8
							g26 = 0;
							// branch -> 0x6eccc
						}
						// 0x6eccc
						if (g19 >= g29) {
							// 0x6ef64
							// branch -> 0x6ef68
							// 0x6ef68
							g10 = v1;
							return 0;
						}
						// 0x6ecd4
						if (v17 == 63) {
							// 0x6ecdc
							v92 = 0x55555556 * (int64_t) * (int32_t *)g30;
							v67 = (int32_t)(v92 / 0x100000000) + (int32_t)(v92 / 0x8000000000000000);
							v58 = v48;
							v37 = v23;
							v38 = v67;
							// branch -> 0x6eda0
							// 0x6eda0
							v30 = g26;
							if (v30 < 1) {
								// 0x6ee9c
								if (g28 < g27) {
									// 0x6eea4
									v36 = g36;
									if (v36 == -1) {
										// 0x6eed4
										v10 = *(int32_t *)(v37 + v58 + 112);
										// branch -> 0x6eedc
									} else {
										// 0x6eeac
										v76 = v37 + v58;
										v87 = *(int32_t *)(v76 + 60);
										v77 = g32 + 232 * v36;
										v88 = *(int32_t *)(v77 + 32);
										v89 = *(int32_t *)(v77 + 36);
										v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
										// branch -> 0x6eedc
									}
									// 0x6eedc
									g37 = v10;
									function_a5074(g35);
									// branch -> 0x6ef68
								} else {
									// 0x6eeec
									v60 = v58;
									v39 = v37;
									if (g35 == *(int32_t *)g17) {
										// 0x6eef8
										v59 = (int32_t *)g30;
										*v59 = *v59 - v38;
										v78 = (int32_t *)(v37 + v58 + 396);
										*v78 = *v78 - v67;
										v60 = g31;
										v39 = g33;
										// branch -> 0x6ef14
									}
									// 0x6ef14
									v79 = v39 + v60;
									v40 = g30;
									v61 = (int32_t *)v40;
									v90 = *(int32_t *)(v79 + 408);
									v42 = v40;
									if (*v61 > v90) {
										// 0x6ef28
										*v61 = v90;
										v41 = v79;
										*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
										v42 = g30;
										// branch -> 0x6ef34
									}
									// 0x6ef34
									v44 = g35;
									if (*(int32_t *)v42 > 63) {
										// 0x6ef50
										g38 = 0;
										function_a579c(v44, 0);
										// branch -> 0x6ef5c
									} else {
										// 0x6ef40
										function_a640c(v44, g25);
										// branch -> 0x6ef5c
									}
									// 0x6ef5c
									// branch -> 0x6ef68
								}
								// 0x6ef68
								g10 = v1;
								return 1;
							}
							// 0x6eda8
							v93 = 0x51eb851f * (int64_t)(v30 * v38);
							v94 = (int32_t)(v93 / 0x100000000) >> 31;
							v54 = v94 < 0;
							v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
							v56 = v58;
							v31 = v37;
							if (g35 == *(int32_t *)g17) {
								// 0x6edd4
								v55 = (int32_t *)g30;
								*v55 = *v55 - v72;
								v73 = (int32_t *)(v37 + v58 + 396);
								*v73 = *v73 - v72;
								v56 = g31;
								v31 = g33;
								// branch -> 0x6edf0
							}
							// 0x6edf0
							v74 = v31 + v56;
							v32 = g30;
							v57 = (int32_t *)v32;
							v85 = *(int32_t *)(v74 + 408);
							v34 = v32;
							if (*v57 > v85) {
								// 0x6ee04
								*v57 = v85;
								v33 = v74;
								*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
								v34 = g30;
								// branch -> 0x6ee10
							}
							// 0x6ee10
							if (*(int32_t *)v34 > 63) {
								// 0x6ee2c
								v75 = g31 + g33;
								v86 = *(char *)(v75 + 348);
								if (v86 != 0) {
									// 0x6ee50
									if (v86 == 1) {
										// 0x6ee5c
										g34 = 679;
										g38 = *(int32_t *)(v75 + 60);
										PlaySfxLoc(679);
										// branch -> 0x6ee88
									} else {
										// 0x6ee70
										if (v86 == 2) {
											// 0x6ee78
											g34 = 576;
											g38 = *(int32_t *)(v75 + 60);
											PlaySfxLoc(576);
											// branch -> 0x6ee88
										}
									}
									// 0x6ee88
									*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
									// branch -> 0x6ee94
									// 0x6ee94
									// branch -> 0x6ef68
									// 0x6ef68
									g10 = v1;
									return 1;
								}
								// 0x6ee3c
								g34 = 788;
								g38 = *(int32_t *)(v75 + 60);
								PlaySfxLoc(788);
								// branch -> 0x6ee88
								// 0x6ee88
								*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
								// branch -> 0x6ee94
							} else {
								// 0x6ee1c
								function_a640c(g35, g25);
								// branch -> 0x6ee94
							}
							// 0x6ee94
							// branch -> 0x6ef68
							// 0x6ef68
							g10 = v1;
							return 1;
						}
						// 0x6ecf8
						v49 = g21 - g20 + 1;
						if (v45 == 0) {
							// 0x6ed00
							g37 = 64 * v49;
							v68 = 64 * g20 + random(75);
							v25 = v68;
							if (g36 == -1) {
								// 0x6ed24
								v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
								v26 = v68;
								if (v50 != 0) {
									// 0x6ed34
									v25 = v26 / 2 | v26 & -0x80000000;
									// branch -> 0x6ed38
								} else {
									v25 = v26;
								}
							}
							// 0x6ed38
							v24 = g33;
							v51 = g31;
							v69 = 64 * *(int32_t *)(v51 + v24 + 0x556c) + v25;
							v9 = v69;
							if (v69 <= 63) {
								// 0x6ed50
								v9 = 64;
								v58 = v51;
								v37 = v24;
								v38 = 64;
								// branch -> 0x6eda0
							} else {
								v58 = v51;
								v37 = v24;
								v38 = v69;
							}
						} else {
							// 0x6ed58
							g37 = v49;
							v70 = g20 + random(75);
							v28 = v70;
							if (g36 == -1) {
								// 0x6ed74
								v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
								v29 = v70;
								if (v52 != 0) {
									// 0x6ed84
									v28 = v29 / 2 | v29 & -0x80000000;
									// branch -> 0x6ed88
								} else {
									v28 = v29;
								}
							}
							// 0x6ed88
							v27 = g33;
							v53 = g31;
							v71 = *(int32_t *)(v53 + v27 + 0x556c) + v28;
							v9 = v71;
							if (v71 <= 63) {
								// 0x6ed9c
								v9 = 64;
								v58 = v53;
								v37 = v27;
								v38 = 64;
								// branch -> 0x6eda0
							} else {
								v58 = v53;
								v37 = v27;
								v38 = v71;
							}
						}
						// 0x6eda0
						v30 = g26;
						if (v30 < 1) {
							// 0x6ee9c
							if (g28 < g27) {
								// 0x6eea4
								v36 = g36;
								if (v36 == -1) {
									// 0x6eed4
									v10 = *(int32_t *)(v37 + v58 + 112);
									// branch -> 0x6eedc
								} else {
									// 0x6eeac
									v76 = v37 + v58;
									v87 = *(int32_t *)(v76 + 60);
									v77 = g32 + 232 * v36;
									v88 = *(int32_t *)(v77 + 32);
									v89 = *(int32_t *)(v77 + 36);
									v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
									// branch -> 0x6eedc
								}
								// 0x6eedc
								g37 = v10;
								function_a5074(g35);
								// branch -> 0x6ef68
							} else {
								// 0x6eeec
								v60 = v58;
								v39 = v37;
								if (g35 == *(int32_t *)g17) {
									// 0x6eef8
									v59 = (int32_t *)g30;
									*v59 = *v59 - v38;
									v78 = (int32_t *)(v37 + v58 + 396);
									*v78 = *v78 - v9;
									v60 = g31;
									v39 = g33;
									// branch -> 0x6ef14
								}
								// 0x6ef14
								v79 = v39 + v60;
								v40 = g30;
								v61 = (int32_t *)v40;
								v90 = *(int32_t *)(v79 + 408);
								v42 = v40;
								if (*v61 > v90) {
									// 0x6ef28
									*v61 = v90;
									v41 = v79;
									*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
									v42 = g30;
									// branch -> 0x6ef34
								}
								// 0x6ef34
								v44 = g35;
								if (*(int32_t *)v42 > 63) {
									// 0x6ef50
									g38 = 0;
									function_a579c(v44, 0);
									// branch -> 0x6ef5c
								} else {
									// 0x6ef40
									function_a640c(v44, g25);
									// branch -> 0x6ef5c
								}
								// 0x6ef5c
								// branch -> 0x6ef68
							}
							// 0x6ef68
							g10 = v1;
							return 1;
						}
						// 0x6eda8
						v93 = 0x51eb851f * (int64_t)(v30 * v38);
						v94 = (int32_t)(v93 / 0x100000000) >> 31;
						v54 = v94 < 0;
						v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
						v56 = v58;
						v31 = v37;
						if (g35 == *(int32_t *)g17) {
							// 0x6edd4
							v55 = (int32_t *)g30;
							*v55 = *v55 - v72;
							v73 = (int32_t *)(v37 + v58 + 396);
							*v73 = *v73 - v72;
							v56 = g31;
							v31 = g33;
							// branch -> 0x6edf0
						}
						// 0x6edf0
						v74 = v31 + v56;
						v32 = g30;
						v57 = (int32_t *)v32;
						v85 = *(int32_t *)(v74 + 408);
						v34 = v32;
						if (*v57 > v85) {
							// 0x6ee04
							*v57 = v85;
							v33 = v74;
							*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
							v34 = g30;
							// branch -> 0x6ee10
						}
						// 0x6ee10
						if (*(int32_t *)v34 > 63) {
							// 0x6ee2c
							v75 = g31 + g33;
							v86 = *(char *)(v75 + 348);
							if (v86 != 0) {
								// 0x6ee50
								if (v86 == 1) {
									// 0x6ee5c
									g34 = 679;
									g38 = *(int32_t *)(v75 + 60);
									PlaySfxLoc(679);
									// branch -> 0x6ee88
								} else {
									// 0x6ee70
									if (v86 == 2) {
										// 0x6ee78
										g34 = 576;
										g38 = *(int32_t *)(v75 + 60);
										PlaySfxLoc(576);
										// branch -> 0x6ee88
									}
								}
								// 0x6ee88
								*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
								// branch -> 0x6ee94
								// 0x6ee94
								// branch -> 0x6ef68
								// 0x6ef68
								g10 = v1;
								return 1;
							}
							// 0x6ee3c
							g34 = 788;
							g38 = *(int32_t *)(v75 + 60);
							PlaySfxLoc(788);
							// branch -> 0x6ee88
							// 0x6ee88
							*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
							// branch -> 0x6ee94
						} else {
							// 0x6ee1c
							function_a640c(g35, g25);
							// branch -> 0x6ee94
						}
						// 0x6ee94
						// branch -> 0x6ef68
						// 0x6ef68
						g10 = v1;
						return 1;
					}
				}
				// 0x6ebc0
				v11 = 100;
				if (*(char *)(v64 + 312) != 0) {
					// 0x6ebd0
					g37 = 100;
					v11 = random(73);
					// branch -> 0x6ebe8
				}
				// 0x6ebe8
				g28 = v11;
				v45 = g24 % 256;
				if (v45 == 1) {
					// 0x6ebf4
					g28 = 100;
					// branch -> 0x6ebf8
				}
				// 0x6ebf8
				v17 = g22;
				if (v17 == 59) {
					// 0x6ec00
					g28 = 100;
					// branch -> 0x6ec04
				}
				// 0x6ec04
				v18 = g36;
				if (v18 == -1) {
					// 0x6ec44
					v20 = g33;
					v47 = g31;
					v66 = v47 + v20;
					v48 = v47;
					v23 = v20;
					v22 = *(int32_t *)(v66 + 368) + *(int32_t *)(v66 + 392);
					// branch -> 0x6ec54
				} else {
					// 0x6ec0c
					v19 = g33;
					v46 = g31;
					v65 = v46 + v19;
					v80 = *(char *)(v65 + 436);
					v81 = *(int32_t *)(v65 + 392);
					v82 = *(char *)(g32 + 232 * v18 + 196);
					v83 = *(int32_t *)(v65 + 368);
					v48 = v46;
					v23 = v19;
					v22 = v83 + v81 - 2 * ((int32_t)v82 - (int32_t)v80);
					// branch -> 0x6ec54
				}
				// 0x6ec54
				v12 = v22;
				v21 = v22;
				if (v22 <= 0xffffffff) {
					// 0x6ec5c
					v12 = 0;
					v21 = 0;
					// branch -> 0x6ec60
				}
				// 0x6ec60
				v13 = v12;
				if (v21 >= 101) {
					// 0x6ec68
					v13 = 100;
					// branch -> 0x6ec6c
				}
				// 0x6ec6c
				g27 = v13;
				v84 = *(char *)(g18 + g26 + 17);
				if (v84 == 2) {
					// 0x6eca8
					g26 = (int32_t) * (char *)(v23 + v48 + 455);
					// branch -> 0x6eccc
				} else {
					// 0x6ec7c
					if (v84 > 2) {
						// 0x6ec8c
						if (v84 <= 4) {
							// 0x6ecb8
							g26 = (int32_t) * (char *)(v23 + v48 + 453);
							// branch -> 0x6eccc
							// 0x6eccc
							if (g19 < g29) {
								// 0x6ecd4
								if (v17 != 63) {
									// 0x6ecf8
									v49 = g21 - g20 + 1;
									if (v45 == 0) {
										// 0x6ed00
										g37 = 64 * v49;
										v68 = 64 * g20 + random(75);
										v25 = v68;
										if (g36 == -1) {
											// 0x6ed24
											v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
											v26 = v68;
											if (v50 != 0) {
												// 0x6ed34
												v25 = v26 / 2 | v26 & -0x80000000;
												// branch -> 0x6ed38
											} else {
												v25 = v26;
											}
										}
										// 0x6ed38
										v24 = g33;
										v51 = g31;
										v69 = 64 * *(int32_t *)(v51 + v24 + 0x556c) + v25;
										v9 = v69;
										if (v69 <= 63) {
											// 0x6ed50
											v9 = 64;
											v58 = v51;
											v37 = v24;
											v38 = 64;
											// branch -> 0x6eda0
										} else {
											v58 = v51;
											v37 = v24;
											v38 = v69;
										}
									} else {
										// 0x6ed58
										g37 = v49;
										v70 = g20 + random(75);
										v28 = v70;
										if (g36 == -1) {
											// 0x6ed74
											v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
											v29 = v70;
											if (v52 != 0) {
												// 0x6ed84
												v28 = v29 / 2 | v29 & -0x80000000;
												// branch -> 0x6ed88
											} else {
												v28 = v29;
											}
										}
										// 0x6ed88
										v27 = g33;
										v53 = g31;
										v71 = *(int32_t *)(v53 + v27 + 0x556c) + v28;
										v9 = v71;
										if (v71 <= 63) {
											// 0x6ed9c
											v9 = 64;
											v58 = v53;
											v37 = v27;
											v38 = 64;
											// branch -> 0x6eda0
										} else {
											v58 = v53;
											v37 = v27;
											v38 = v71;
										}
									}
									// 0x6eda0
									v30 = g26;
									if (v30 < 1) {
										// 0x6ee9c
										if (g28 < g27) {
											// 0x6eea4
											v36 = g36;
											if (v36 == -1) {
												// 0x6eed4
												v10 = *(int32_t *)(v37 + v58 + 112);
												// branch -> 0x6eedc
											} else {
												// 0x6eeac
												v76 = v37 + v58;
												v87 = *(int32_t *)(v76 + 60);
												v77 = g32 + 232 * v36;
												v88 = *(int32_t *)(v77 + 32);
												v89 = *(int32_t *)(v77 + 36);
												v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
												// branch -> 0x6eedc
											}
											// 0x6eedc
											g37 = v10;
											function_a5074(g35);
											// branch -> 0x6ef68
										} else {
											// 0x6eeec
											v60 = v58;
											v39 = v37;
											if (g35 == *(int32_t *)g17) {
												// 0x6eef8
												v59 = (int32_t *)g30;
												*v59 = *v59 - v38;
												v78 = (int32_t *)(v37 + v58 + 396);
												*v78 = *v78 - v9;
												v60 = g31;
												v39 = g33;
												// branch -> 0x6ef14
											}
											// 0x6ef14
											v79 = v39 + v60;
											v40 = g30;
											v61 = (int32_t *)v40;
											v90 = *(int32_t *)(v79 + 408);
											v42 = v40;
											if (*v61 > v90) {
												// 0x6ef28
												*v61 = v90;
												v41 = v79;
												*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
												v42 = g30;
												// branch -> 0x6ef34
											}
											// 0x6ef34
											v44 = g35;
											if (*(int32_t *)v42 > 63) {
												// 0x6ef50
												g38 = 0;
												function_a579c(v44, 0);
												// branch -> 0x6ef5c
											} else {
												// 0x6ef40
												function_a640c(v44, g25);
												// branch -> 0x6ef5c
											}
											// 0x6ef5c
											// branch -> 0x6ef68
										}
										// 0x6ef68
										g10 = v1;
										return 1;
									}
									// 0x6eda8
									v93 = 0x51eb851f * (int64_t)(v30 * v38);
									v94 = (int32_t)(v93 / 0x100000000) >> 31;
									v54 = v94 < 0;
									v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
									v56 = v58;
									v31 = v37;
									if (g35 == *(int32_t *)g17) {
										// 0x6edd4
										v55 = (int32_t *)g30;
										*v55 = *v55 - v72;
										v73 = (int32_t *)(v37 + v58 + 396);
										*v73 = *v73 - v72;
										v56 = g31;
										v31 = g33;
										// branch -> 0x6edf0
									}
									// 0x6edf0
									v74 = v31 + v56;
									v32 = g30;
									v57 = (int32_t *)v32;
									v85 = *(int32_t *)(v74 + 408);
									v34 = v32;
									if (*v57 > v85) {
										// 0x6ee04
										*v57 = v85;
										v33 = v74;
										*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
										v34 = g30;
										// branch -> 0x6ee10
									}
									// 0x6ee10
									if (*(int32_t *)v34 > 63) {
										// 0x6ee2c
										v75 = g31 + g33;
										v86 = *(char *)(v75 + 348);
										if (v86 != 0) {
											// 0x6ee50
											if (v86 == 1) {
												// 0x6ee5c
												g34 = 679;
												g38 = *(int32_t *)(v75 + 60);
												PlaySfxLoc(679);
												// branch -> 0x6ee88
											} else {
												// 0x6ee70
												if (v86 == 2) {
													// 0x6ee78
													g34 = 576;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(576);
													// branch -> 0x6ee88
												}
											}
											// 0x6ee88
											*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
											// branch -> 0x6ee94
											// 0x6ee94
											// branch -> 0x6ef68
											// 0x6ef68
											g10 = v1;
											return 1;
										}
										// 0x6ee3c
										g34 = 788;
										g38 = *(int32_t *)(v75 + 60);
										PlaySfxLoc(788);
										// branch -> 0x6ee88
										// 0x6ee88
										*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
										// branch -> 0x6ee94
									} else {
										// 0x6ee1c
										function_a640c(g35, g25);
										// branch -> 0x6ee94
									}
									// 0x6ee94
									// branch -> 0x6ef68
									// 0x6ef68
									g10 = v1;
									return 1;
								}
								// 0x6ecdc
								v92 = 0x55555556 * (int64_t) * (int32_t *)g30;
								v67 = (int32_t)(v92 / 0x100000000) + (int32_t)(v92 / 0x8000000000000000);
								v9 = v67;
								v58 = v48;
								v37 = v23;
								v38 = v67;
								// branch -> 0x6eda0
								// 0x6eda0
								v30 = g26;
								if (v30 < 1) {
									// 0x6ee9c
									if (g28 < g27) {
										// 0x6eea4
										v36 = g36;
										if (v36 == -1) {
											// 0x6eed4
											v10 = *(int32_t *)(v37 + v58 + 112);
											// branch -> 0x6eedc
										} else {
											// 0x6eeac
											v76 = v37 + v58;
											v87 = *(int32_t *)(v76 + 60);
											v77 = g32 + 232 * v36;
											v88 = *(int32_t *)(v77 + 32);
											v89 = *(int32_t *)(v77 + 36);
											v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
											// branch -> 0x6eedc
										}
										// 0x6eedc
										g37 = v10;
										function_a5074(g35);
										// branch -> 0x6ef68
									} else {
										// 0x6eeec
										v60 = v58;
										v39 = v37;
										if (g35 == *(int32_t *)g17) {
											// 0x6eef8
											v59 = (int32_t *)g30;
											*v59 = *v59 - v38;
											v78 = (int32_t *)(v37 + v58 + 396);
											*v78 = *v78 - v9;
											v60 = g31;
											v39 = g33;
											// branch -> 0x6ef14
										}
										// 0x6ef14
										v79 = v39 + v60;
										v8 = v79;
										v40 = g30;
										v61 = (int32_t *)v40;
										v90 = *(int32_t *)(v79 + 408);
										v42 = v40;
										if (*v61 > v90) {
											// 0x6ef28
											*v61 = v90;
											v41 = v8;
											*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
											v42 = g30;
											// branch -> 0x6ef34
										}
										// 0x6ef34
										v44 = g35;
										if (*(int32_t *)v42 > 63) {
											// 0x6ef50
											g38 = 0;
											function_a579c(v44, 0);
											// branch -> 0x6ef5c
										} else {
											// 0x6ef40
											function_a640c(v44, g25);
											// branch -> 0x6ef5c
										}
										// 0x6ef5c
										// branch -> 0x6ef68
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x6eda8
									v93 = 0x51eb851f * (int64_t)(v30 * v38);
									v94 = (int32_t)(v93 / 0x100000000) >> 31;
									v54 = v94 < 0;
									v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
									v9 = v72;
									v56 = v58;
									v31 = v37;
									if (g35 == *(int32_t *)g17) {
										// 0x6edd4
										v55 = (int32_t *)g30;
										*v55 = *v55 - v72;
										v73 = (int32_t *)(v37 + v58 + 396);
										*v73 = *v73 - v9;
										v56 = g31;
										v31 = g33;
										// branch -> 0x6edf0
									}
									// 0x6edf0
									v74 = v31 + v56;
									v8 = v74;
									v32 = g30;
									v57 = (int32_t *)v32;
									v85 = *(int32_t *)(v74 + 408);
									v34 = v32;
									if (*v57 > v85) {
										// 0x6ee04
										*v57 = v85;
										v33 = v8;
										*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
										v34 = g30;
										// branch -> 0x6ee10
									}
									// 0x6ee10
									if (*(int32_t *)v34 > 63) {
										// 0x6ee2c
										v75 = g31 + g33;
										v86 = *(char *)(v75 + 348);
										if (v86 == 0) {
											// 0x6ee3c
											g34 = 788;
											g38 = *(int32_t *)(v75 + 60);
											PlaySfxLoc(788);
											// branch -> 0x6ee88
										} else {
											// 0x6ee50
											if (v86 == 1) {
												// 0x6ee5c
												g34 = 679;
												g38 = *(int32_t *)(v75 + 60);
												PlaySfxLoc(679);
												// branch -> 0x6ee88
											} else {
												// 0x6ee70
												if (v86 == 2) {
													// 0x6ee78
													g34 = 576;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(576);
													// branch -> 0x6ee88
												}
											}
											// 0x6ee88
											*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
											// branch -> 0x6ee94
											// 0x6ee94
											// branch -> 0x6ef68
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// 0x6ee88
										*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
										// branch -> 0x6ee94
									} else {
										// 0x6ee1c
										function_a640c(g35, g25);
										// branch -> 0x6ee94
									}
									// 0x6ee94
									// branch -> 0x6ef68
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					} else {
						// 0x6ec80
						if (v84 != 0) {
							// 0x6ec98
							g26 = (int32_t) * (char *)(v23 + v48 + 454);
							// branch -> 0x6eccc
							// 0x6eccc
							if (g19 < g29) {
								// 0x6ecd4
								if (v17 == 63) {
									// 0x6ecdc
									v92 = 0x55555556 * (int64_t) * (int32_t *)g30;
									v67 = (int32_t)(v92 / 0x100000000) + (int32_t)(v92 / 0x8000000000000000);
									v9 = v67;
									v58 = v48;
									v37 = v23;
									v38 = v67;
									// branch -> 0x6eda0
								} else {
									// 0x6ecf8
									v49 = g21 - g20 + 1;
									if (v45 == 0) {
										// 0x6ed00
										g37 = 64 * v49;
										v68 = 64 * g20 + random(75);
										v9 = v68;
										v25 = v68;
										if (g36 == -1) {
											// 0x6ed24
											v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
											v26 = v9;
											if (v50 != 0) {
												// 0x6ed34
												v25 = v26 / 2 | v26 & -0x80000000;
												// branch -> 0x6ed38
											} else {
												v25 = v26;
											}
										}
										// 0x6ed38
										v24 = g33;
										v51 = g31;
										v69 = 64 * *(int32_t *)(v51 + v24 + 0x556c) + v25;
										v9 = v69;
										if (v69 <= 63) {
											// 0x6ed50
											v9 = 64;
											v58 = v51;
											v37 = v24;
											v38 = 64;
											// branch -> 0x6eda0
										} else {
											v58 = v51;
											v37 = v24;
											v38 = v69;
										}
									} else {
										// 0x6ed58
										g37 = v49;
										v70 = g20 + random(75);
										v9 = v70;
										v28 = v70;
										if (g36 == -1) {
											// 0x6ed74
											v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
											v29 = v9;
											if (v52 != 0) {
												// 0x6ed84
												v28 = v29 / 2 | v29 & -0x80000000;
												// branch -> 0x6ed88
											} else {
												v28 = v29;
											}
										}
										// 0x6ed88
										v27 = g33;
										v53 = g31;
										v71 = *(int32_t *)(v53 + v27 + 0x556c) + v28;
										v9 = v71;
										if (v71 <= 63) {
											// 0x6ed9c
											v9 = 64;
											v58 = v53;
											v37 = v27;
											v38 = 64;
											// branch -> 0x6eda0
										} else {
											v58 = v53;
											v37 = v27;
											v38 = v71;
										}
									}
									// 0x6eda0
									v30 = g26;
									if (v30 < 1) {
										// 0x6ee9c
										if (g28 < g27) {
											// 0x6eea4
											v36 = g36;
											if (v36 == -1) {
												// 0x6eed4
												v10 = *(int32_t *)(v37 + v58 + 112);
												// branch -> 0x6eedc
											} else {
												// 0x6eeac
												v76 = v37 + v58;
												v87 = *(int32_t *)(v76 + 60);
												v9 = v87;
												v77 = g32 + 232 * v36;
												v88 = *(int32_t *)(v77 + 32);
												v89 = *(int32_t *)(v77 + 36);
												v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
												// branch -> 0x6eedc
											}
											// 0x6eedc
											g37 = v10;
											function_a5074(g35);
											// branch -> 0x6ef68
										} else {
											// 0x6eeec
											v60 = v58;
											v39 = v37;
											if (g35 == *(int32_t *)g17) {
												// 0x6eef8
												v59 = (int32_t *)g30;
												*v59 = *v59 - v38;
												v78 = (int32_t *)(v37 + v58 + 396);
												*v78 = *v78 - v9;
												v60 = g31;
												v39 = g33;
												// branch -> 0x6ef14
											}
											// 0x6ef14
											v79 = v39 + v60;
											v8 = v79;
											v40 = g30;
											v61 = (int32_t *)v40;
											v90 = *(int32_t *)(v79 + 408);
											v42 = v40;
											if (*v61 > v90) {
												// 0x6ef28
												*v61 = v90;
												v41 = v8;
												*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
												v42 = g30;
												// branch -> 0x6ef34
											}
											// 0x6ef34
											v44 = g35;
											if (*(int32_t *)v42 > 63) {
												// 0x6ef50
												g38 = 0;
												function_a579c(v44, 0);
												// branch -> 0x6ef5c
											} else {
												// 0x6ef40
												v43 = g25;
												v9 = v43;
												function_a640c(v44, v43);
												// branch -> 0x6ef5c
											}
											// 0x6ef5c
											// branch -> 0x6ef68
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x6eda8
										v93 = 0x51eb851f * (int64_t)(v30 * v38);
										v94 = (int32_t)(v93 / 0x100000000) >> 31;
										v54 = v94 < 0;
										v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
										v9 = v72;
										v56 = v58;
										v31 = v37;
										if (g35 == *(int32_t *)g17) {
											// 0x6edd4
											v55 = (int32_t *)g30;
											*v55 = *v55 - v72;
											v73 = (int32_t *)(v37 + v58 + 396);
											*v73 = *v73 - v9;
											v56 = g31;
											v31 = g33;
											// branch -> 0x6edf0
										}
										// 0x6edf0
										v74 = v31 + v56;
										v8 = v74;
										v32 = g30;
										v57 = (int32_t *)v32;
										v85 = *(int32_t *)(v74 + 408);
										v9 = v85;
										v34 = v32;
										if (*v57 > v85) {
											// 0x6ee04
											*v57 = v85;
											v33 = v8;
											*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
											v34 = g30;
											// branch -> 0x6ee10
										}
										// 0x6ee10
										if (*(int32_t *)v34 > 63) {
											// 0x6ee2c
											v75 = g31 + g33;
											v86 = *(char *)(v75 + 348);
											if (v86 == 0) {
												// 0x6ee3c
												v9 = *(int32_t *)(v75 + 56);
												g34 = 788;
												g38 = *(int32_t *)(v75 + 60);
												PlaySfxLoc(788);
												// branch -> 0x6ee88
											} else {
												// 0x6ee50
												if (v86 == 1) {
													// 0x6ee5c
													v9 = *(int32_t *)(v75 + 56);
													g34 = 679;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(679);
													// branch -> 0x6ee88
												} else {
													// 0x6ee70
													if (v86 == 2) {
														// 0x6ee78
														v9 = *(int32_t *)(v75 + 56);
														g34 = 576;
														g38 = *(int32_t *)(v75 + 60);
														PlaySfxLoc(576);
														// branch -> 0x6ee88
													}
												}
												// 0x6ee88
												*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
												// branch -> 0x6ee94
												// 0x6ee94
												// branch -> 0x6ef68
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// 0x6ee88
											*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
											// branch -> 0x6ee94
										} else {
											// 0x6ee1c
											v35 = g25;
											v9 = v35;
											function_a640c(g35, v35);
											// branch -> 0x6ee94
										}
										// 0x6ee94
										// branch -> 0x6ef68
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x6eda0
								v30 = g26;
								if (v30 < 1) {
									// 0x6ee9c
									if (g28 < g27) {
										// 0x6eea4
										v36 = g36;
										if (v36 == -1) {
											// 0x6eed4
											v10 = *(int32_t *)(v37 + v58 + 112);
											// branch -> 0x6eedc
										} else {
											// 0x6eeac
											v76 = v37 + v58;
											v87 = *(int32_t *)(v76 + 60);
											v77 = g32 + 232 * v36;
											v88 = *(int32_t *)(v77 + 32);
											v89 = *(int32_t *)(v77 + 36);
											v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
											// branch -> 0x6eedc
										}
										// 0x6eedc
										g37 = v10;
										function_a5074(g35);
										// branch -> 0x6ef68
									} else {
										// 0x6eeec
										v60 = v58;
										v39 = v37;
										if (g35 == *(int32_t *)g17) {
											// 0x6eef8
											v59 = (int32_t *)g30;
											*v59 = *v59 - v38;
											v78 = (int32_t *)(v37 + v58 + 396);
											*v78 = *v78 - v9;
											v60 = g31;
											v39 = g33;
											// branch -> 0x6ef14
										}
										// 0x6ef14
										v79 = v39 + v60;
										v8 = v79;
										v40 = g30;
										v61 = (int32_t *)v40;
										v90 = *(int32_t *)(v79 + 408);
										v42 = v40;
										if (*v61 > v90) {
											// 0x6ef28
											*v61 = v90;
											v41 = v8;
											*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
											v42 = g30;
											// branch -> 0x6ef34
										}
										// 0x6ef34
										v44 = g35;
										if (*(int32_t *)v42 > 63) {
											// 0x6ef50
											g38 = 0;
											function_a579c(v44, 0);
											// branch -> 0x6ef5c
										} else {
											// 0x6ef40
											function_a640c(v44, g25);
											// branch -> 0x6ef5c
										}
										// 0x6ef5c
										// branch -> 0x6ef68
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x6eda8
									v93 = 0x51eb851f * (int64_t)(v30 * v38);
									v94 = (int32_t)(v93 / 0x100000000) >> 31;
									v54 = v94 < 0;
									v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
									v9 = v72;
									v56 = v58;
									v31 = v37;
									if (g35 == *(int32_t *)g17) {
										// 0x6edd4
										v55 = (int32_t *)g30;
										*v55 = *v55 - v72;
										v73 = (int32_t *)(v37 + v58 + 396);
										*v73 = *v73 - v9;
										v56 = g31;
										v31 = g33;
										// branch -> 0x6edf0
									}
									// 0x6edf0
									v74 = v31 + v56;
									v8 = v74;
									v32 = g30;
									v57 = (int32_t *)v32;
									v85 = *(int32_t *)(v74 + 408);
									v34 = v32;
									if (*v57 > v85) {
										// 0x6ee04
										*v57 = v85;
										v33 = v8;
										*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
										v34 = g30;
										// branch -> 0x6ee10
									}
									// 0x6ee10
									if (*(int32_t *)v34 > 63) {
										// 0x6ee2c
										v75 = g31 + g33;
										v86 = *(char *)(v75 + 348);
										if (v86 == 0) {
											// 0x6ee3c
											g34 = 788;
											g38 = *(int32_t *)(v75 + 60);
											PlaySfxLoc(788);
											// branch -> 0x6ee88
										} else {
											// 0x6ee50
											if (v86 == 1) {
												// 0x6ee5c
												g34 = 679;
												g38 = *(int32_t *)(v75 + 60);
												PlaySfxLoc(679);
												// branch -> 0x6ee88
											} else {
												// 0x6ee70
												if (v86 == 2) {
													// 0x6ee78
													g34 = 576;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(576);
													// branch -> 0x6ee88
												}
											}
											// 0x6ee88
											*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
											// branch -> 0x6ee94
											// 0x6ee94
											// branch -> 0x6ef68
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// 0x6ee88
										*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
										// branch -> 0x6ee94
									} else {
										// 0x6ee1c
										function_a640c(g35, g25);
										// branch -> 0x6ee94
									}
									// 0x6ee94
									// branch -> 0x6ef68
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x6ecc8
					g26 = 0;
					// branch -> 0x6eccc
				}
				// 0x6eccc
				if (g19 < g29) {
					// 0x6ecd4
					if (v17 == 63) {
						// 0x6ecdc
						v92 = 0x55555556 * (int64_t) * (int32_t *)g30;
						v67 = (int32_t)(v92 / 0x100000000) + (int32_t)(v92 / 0x8000000000000000);
						v9 = v67;
						v58 = v48;
						v37 = v23;
						v38 = v67;
						// branch -> 0x6eda0
					} else {
						// 0x6ecf8
						v49 = g21 - g20 + 1;
						if (v45 == 0) {
							// 0x6ed00
							g37 = 64 * v49;
							v68 = 64 * g20 + random(75);
							v9 = v68;
							v25 = v68;
							if (g36 == -1) {
								// 0x6ed24
								v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
								v26 = v9;
								if (v50 != 0) {
									// 0x6ed34
									v25 = v26 / 2 | v26 & -0x80000000;
									// branch -> 0x6ed38
								} else {
									v25 = v26;
								}
							}
							// 0x6ed38
							v24 = g33;
							v51 = g31;
							v69 = 64 * *(int32_t *)(v51 + v24 + 0x556c) + v25;
							v9 = v69;
							if (v69 <= 63) {
								// 0x6ed50
								v9 = 64;
								v58 = v51;
								v37 = v24;
								v38 = 64;
								// branch -> 0x6eda0
							} else {
								v58 = v51;
								v37 = v24;
								v38 = v69;
							}
						} else {
							// 0x6ed58
							g37 = v49;
							v70 = g20 + random(75);
							v9 = v70;
							v28 = v70;
							if (g36 == -1) {
								// 0x6ed74
								v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
								v29 = v9;
								if (v52 != 0) {
									// 0x6ed84
									v28 = v29 / 2 | v29 & -0x80000000;
									// branch -> 0x6ed88
								} else {
									v28 = v29;
								}
							}
							// 0x6ed88
							v27 = g33;
							v53 = g31;
							v71 = *(int32_t *)(v53 + v27 + 0x556c) + v28;
							v9 = v71;
							if (v71 <= 63) {
								// 0x6ed9c
								v9 = 64;
								v58 = v53;
								v37 = v27;
								v38 = 64;
								// branch -> 0x6eda0
							} else {
								v58 = v53;
								v37 = v27;
								v38 = v71;
							}
						}
						// 0x6eda0
						v30 = g26;
						if (v30 < 1) {
							// 0x6ee9c
							if (g28 < g27) {
								// 0x6eea4
								v36 = g36;
								if (v36 == -1) {
									// 0x6eed4
									v10 = *(int32_t *)(v37 + v58 + 112);
									// branch -> 0x6eedc
								} else {
									// 0x6eeac
									v76 = v37 + v58;
									v87 = *(int32_t *)(v76 + 60);
									v9 = v87;
									v77 = g32 + 232 * v36;
									v88 = *(int32_t *)(v77 + 32);
									v89 = *(int32_t *)(v77 + 36);
									v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
									// branch -> 0x6eedc
								}
								// 0x6eedc
								g37 = v10;
								function_a5074(g35);
								// branch -> 0x6ef68
							} else {
								// 0x6eeec
								v60 = v58;
								v39 = v37;
								if (g35 == *(int32_t *)g17) {
									// 0x6eef8
									v59 = (int32_t *)g30;
									*v59 = *v59 - v38;
									v78 = (int32_t *)(v37 + v58 + 396);
									*v78 = *v78 - v9;
									v60 = g31;
									v39 = g33;
									// branch -> 0x6ef14
								}
								// 0x6ef14
								v79 = v39 + v60;
								v8 = v79;
								v40 = g30;
								v61 = (int32_t *)v40;
								v90 = *(int32_t *)(v79 + 408);
								v42 = v40;
								if (*v61 > v90) {
									// 0x6ef28
									*v61 = v90;
									v41 = v8;
									*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
									v42 = g30;
									// branch -> 0x6ef34
								}
								// 0x6ef34
								v44 = g35;
								if (*(int32_t *)v42 > 63) {
									// 0x6ef50
									g38 = 0;
									function_a579c(v44, 0);
									// branch -> 0x6ef5c
								} else {
									// 0x6ef40
									v43 = g25;
									v9 = v43;
									function_a640c(v44, v43);
									// branch -> 0x6ef5c
								}
								// 0x6ef5c
								// branch -> 0x6ef68
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x6eda8
							v93 = 0x51eb851f * (int64_t)(v30 * v38);
							v94 = (int32_t)(v93 / 0x100000000) >> 31;
							v54 = v94 < 0;
							v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
							v9 = v72;
							v56 = v58;
							v31 = v37;
							if (g35 == *(int32_t *)g17) {
								// 0x6edd4
								v55 = (int32_t *)g30;
								*v55 = *v55 - v72;
								v73 = (int32_t *)(v37 + v58 + 396);
								*v73 = *v73 - v9;
								v56 = g31;
								v31 = g33;
								// branch -> 0x6edf0
							}
							// 0x6edf0
							v74 = v31 + v56;
							v8 = v74;
							v32 = g30;
							v57 = (int32_t *)v32;
							v85 = *(int32_t *)(v74 + 408);
							v9 = v85;
							v34 = v32;
							if (*v57 > v85) {
								// 0x6ee04
								*v57 = v85;
								v33 = v8;
								*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
								v34 = g30;
								// branch -> 0x6ee10
							}
							// 0x6ee10
							if (*(int32_t *)v34 > 63) {
								// 0x6ee2c
								v75 = g31 + g33;
								v86 = *(char *)(v75 + 348);
								if (v86 == 0) {
									// 0x6ee3c
									v9 = *(int32_t *)(v75 + 56);
									g34 = 788;
									g38 = *(int32_t *)(v75 + 60);
									PlaySfxLoc(788);
									// branch -> 0x6ee88
								} else {
									// 0x6ee50
									if (v86 == 1) {
										// 0x6ee5c
										v9 = *(int32_t *)(v75 + 56);
										g34 = 679;
										g38 = *(int32_t *)(v75 + 60);
										PlaySfxLoc(679);
										// branch -> 0x6ee88
									} else {
										// 0x6ee70
										if (v86 == 2) {
											// 0x6ee78
											v9 = *(int32_t *)(v75 + 56);
											g34 = 576;
											g38 = *(int32_t *)(v75 + 60);
											PlaySfxLoc(576);
											// branch -> 0x6ee88
										}
									}
									// 0x6ee88
									*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
									// branch -> 0x6ee94
									// 0x6ee94
									// branch -> 0x6ef68
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x6ee88
								*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
								// branch -> 0x6ee94
							} else {
								// 0x6ee1c
								v35 = g25;
								v9 = v35;
								function_a640c(g35, v35);
								// branch -> 0x6ee94
							}
							// 0x6ee94
							// branch -> 0x6ef68
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x6eda0
					v30 = g26;
					if (v30 < 1) {
						// 0x6ee9c
						if (g28 < g27) {
							// 0x6eea4
							v36 = g36;
							if (v36 == -1) {
								// 0x6eed4
								v10 = *(int32_t *)(v37 + v58 + 112);
								// branch -> 0x6eedc
							} else {
								// 0x6eeac
								v76 = v37 + v58;
								v87 = *(int32_t *)(v76 + 60);
								v77 = g32 + 232 * v36;
								v88 = *(int32_t *)(v77 + 32);
								v89 = *(int32_t *)(v77 + 36);
								v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
								// branch -> 0x6eedc
							}
							// 0x6eedc
							g37 = v10;
							function_a5074(g35);
							// branch -> 0x6ef68
						} else {
							// 0x6eeec
							v60 = v58;
							v39 = v37;
							if (g35 == *(int32_t *)g17) {
								// 0x6eef8
								v59 = (int32_t *)g30;
								*v59 = *v59 - v38;
								v78 = (int32_t *)(v37 + v58 + 396);
								*v78 = *v78 - v9;
								v60 = g31;
								v39 = g33;
								// branch -> 0x6ef14
							}
							// 0x6ef14
							v79 = v39 + v60;
							v8 = v79;
							v40 = g30;
							v61 = (int32_t *)v40;
							v90 = *(int32_t *)(v79 + 408);
							v42 = v40;
							if (*v61 > v90) {
								// 0x6ef28
								*v61 = v90;
								v41 = v8;
								*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
								v42 = g30;
								// branch -> 0x6ef34
							}
							// 0x6ef34
							v44 = g35;
							if (*(int32_t *)v42 > 63) {
								// 0x6ef50
								g38 = 0;
								function_a579c(v44, 0);
								// branch -> 0x6ef5c
							} else {
								// 0x6ef40
								function_a640c(v44, g25);
								// branch -> 0x6ef5c
							}
							// 0x6ef5c
							// branch -> 0x6ef68
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x6eda8
						v93 = 0x51eb851f * (int64_t)(v30 * v38);
						v94 = (int32_t)(v93 / 0x100000000) >> 31;
						v54 = v94 < 0;
						v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
						v9 = v72;
						v56 = v58;
						v31 = v37;
						if (g35 == *(int32_t *)g17) {
							// 0x6edd4
							v55 = (int32_t *)g30;
							*v55 = *v55 - v72;
							v73 = (int32_t *)(v37 + v58 + 396);
							*v73 = *v73 - v9;
							v56 = g31;
							v31 = g33;
							// branch -> 0x6edf0
						}
						// 0x6edf0
						v74 = v31 + v56;
						v8 = v74;
						v32 = g30;
						v57 = (int32_t *)v32;
						v85 = *(int32_t *)(v74 + 408);
						v34 = v32;
						if (*v57 > v85) {
							// 0x6ee04
							*v57 = v85;
							v33 = v8;
							*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
							v34 = g30;
							// branch -> 0x6ee10
						}
						// 0x6ee10
						if (*(int32_t *)v34 > 63) {
							// 0x6ee2c
							v75 = g31 + g33;
							v86 = *(char *)(v75 + 348);
							if (v86 == 0) {
								// 0x6ee3c
								g34 = 788;
								g38 = *(int32_t *)(v75 + 60);
								PlaySfxLoc(788);
								// branch -> 0x6ee88
							} else {
								// 0x6ee50
								if (v86 == 1) {
									// 0x6ee5c
									g34 = 679;
									g38 = *(int32_t *)(v75 + 60);
									PlaySfxLoc(679);
									// branch -> 0x6ee88
								} else {
									// 0x6ee70
									if (v86 == 2) {
										// 0x6ee78
										g34 = 576;
										g38 = *(int32_t *)(v75 + 60);
										PlaySfxLoc(576);
										// branch -> 0x6ee88
									}
								}
								// 0x6ee88
								*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
								// branch -> 0x6ee94
								// 0x6ee94
								// branch -> 0x6ef68
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x6ee88
							*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
							// branch -> 0x6ee94
						} else {
							// 0x6ee1c
							function_a640c(g35, g25);
							// branch -> 0x6ee94
						}
						// 0x6ee94
						// branch -> 0x6ef68
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				int32_t v107 = g36; // 0x6eb18
				if (v107 == -1) {
					// 0x6eb58
					g29 = 40;
					v62 = 40;
					// branch -> 0x6eb5c
				} else {
					unsigned char v108 = *(char *)(g32 + 232 * v107 + 196);                      // 0x6eb30
					int32_t v109 = 0x1000000 * (int32_t) * (char *)(g31 + g33 + 436) / 0x800000; // 0x6eb38
					int32_t v110 = 40 - v109 + 0x1000000 * (int32_t)v108 / 0x800000 - 2 * g27;   // 0x6eb50
					g29 = v110;
					v62 = v110;
					// branch -> 0x6eb5c
				}
				// 0x6eb5c
				v14 = v62;
				if (v62 <= 9) {
					// 0x6eb64
					g29 = 10;
					v14 = 10;
					// branch -> 0x6eb68
				}
				// 0x6eb68
				v63 = *(char *)*(int32_t *)(g23 - 0x77e4);
				v15 = v14;
				if (v63 == 14) {
					// 0x6eb78
					if (v14 <= 19) {
						// 0x6eb80
						g29 = 20;
						v15 = 20;
						// branch -> 0x6eb84
					} else {
						v15 = v14;
					}
				}
				// 0x6eb84
				v16 = v15;
				if (v63 == 15) {
					// 0x6eb8c
					if (v15 <= 24) {
						// 0x6eb94
						g29 = 25;
						v16 = 25;
						// branch -> 0x6eb98
					} else {
						v16 = v15;
					}
				}
				// 0x6eb98
				if (v63 == 16) {
					// 0x6eba0
					if (v16 <= 29) {
						// 0x6eba8
						g29 = 30;
						// branch -> 0x6ebac
					}
				}
				// 0x6ebac
				v64 = g31 + g33;
				v91 = *(int32_t *)v64;
				if (v91 != 0) {
					// 0x6ebb8
					if (v91 != 4) {
						// 0x6ebe8
						g28 = 100;
						v45 = g24 % 256;
						if (v45 == 1) {
							// 0x6ebf4
							g28 = 100;
							// branch -> 0x6ebf8
						}
						// 0x6ebf8
						v17 = g22;
						if (v17 == 59) {
							// 0x6ec00
							g28 = 100;
							// branch -> 0x6ec04
						}
						// 0x6ec04
						v18 = g36;
						if (v18 == -1) {
							// 0x6ec44
							v20 = g33;
							v47 = g31;
							v66 = v47 + v20;
							v48 = v47;
							v23 = v20;
							v22 = *(int32_t *)(v66 + 368) + *(int32_t *)(v66 + 392);
							// branch -> 0x6ec54
						} else {
							// 0x6ec0c
							v19 = g33;
							v46 = g31;
							v65 = v46 + v19;
							v80 = *(char *)(v65 + 436);
							v81 = *(int32_t *)(v65 + 392);
							v82 = *(char *)(g32 + 232 * v18 + 196);
							v83 = *(int32_t *)(v65 + 368);
							v48 = v46;
							v23 = v19;
							v22 = v83 + v81 - 2 * ((int32_t)v82 - (int32_t)v80);
							// branch -> 0x6ec54
						}
						// 0x6ec54
						v12 = v22;
						v21 = v22;
						if (v22 <= 0xffffffff) {
							// 0x6ec5c
							v12 = 0;
							v21 = 0;
							// branch -> 0x6ec60
						}
						// 0x6ec60
						v13 = v12;
						if (v21 >= 101) {
							// 0x6ec68
							v13 = 100;
							// branch -> 0x6ec6c
						}
						// 0x6ec6c
						g27 = v13;
						v84 = *(char *)(g18 + g26 + 17);
						if (v84 == 2) {
							// 0x6eca8
							g26 = (int32_t) * (char *)(v23 + v48 + 455);
							// branch -> 0x6eccc
						} else {
							// 0x6ec7c
							if (v84 > 2) {
								// 0x6ec8c
								if (v84 <= 4) {
									// 0x6ecb8
									g26 = (int32_t) * (char *)(v23 + v48 + 453);
									// branch -> 0x6eccc
									// 0x6eccc
									if (g19 < g29) {
										// 0x6ecd4
										if (v17 == 63) {
											// 0x6ecdc
											v92 = 0x55555556 * (int64_t) * (int32_t *)g30;
											v67 = (int32_t)(v92 / 0x100000000) + (int32_t)(v92 / 0x8000000000000000);
											v9 = v67;
											v58 = v48;
											v37 = v23;
											v38 = v67;
											// branch -> 0x6eda0
										} else {
											// 0x6ecf8
											v49 = g21 - g20 + 1;
											if (v45 == 0) {
												// 0x6ed00
												g37 = 64 * v49;
												v68 = 64 * g20 + random(75);
												v9 = v68;
												v25 = v68;
												if (g36 == -1) {
													// 0x6ed24
													v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
													v26 = v9;
													if (v50 != 0) {
														// 0x6ed34
														v25 = v26 / 2 | v26 & -0x80000000;
														// branch -> 0x6ed38
													} else {
														v25 = v26;
													}
												}
												// 0x6ed38
												v24 = g33;
												v51 = g31;
												v69 = 64 * *(int32_t *)(v51 + v24 + 0x556c) + v25;
												v9 = v69;
												if (v69 <= 63) {
													// 0x6ed50
													v9 = 64;
													v58 = v51;
													v37 = v24;
													v38 = 64;
													// branch -> 0x6eda0
												} else {
													v58 = v51;
													v37 = v24;
													v38 = v69;
												}
											} else {
												// 0x6ed58
												g37 = v49;
												v70 = g20 + random(75);
												v9 = v70;
												v28 = v70;
												if (g36 == -1) {
													// 0x6ed74
													v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
													v29 = v9;
													if (v52 != 0) {
														// 0x6ed84
														v28 = v29 / 2 | v29 & -0x80000000;
														// branch -> 0x6ed88
													} else {
														v28 = v29;
													}
												}
												// 0x6ed88
												v27 = g33;
												v53 = g31;
												v71 = *(int32_t *)(v53 + v27 + 0x556c) + v28;
												v9 = v71;
												if (v71 <= 63) {
													// 0x6ed9c
													v9 = 64;
													v58 = v53;
													v37 = v27;
													v38 = 64;
													// branch -> 0x6eda0
												} else {
													v58 = v53;
													v37 = v27;
													v38 = v71;
												}
											}
											// 0x6eda0
											v30 = g26;
											if (v30 < 1) {
												// 0x6ee9c
												if (g28 < g27) {
													// 0x6eea4
													v36 = g36;
													if (v36 == -1) {
														// 0x6eed4
														v10 = *(int32_t *)(v37 + v58 + 112);
														// branch -> 0x6eedc
													} else {
														// 0x6eeac
														v76 = v37 + v58;
														v87 = *(int32_t *)(v76 + 60);
														v9 = v87;
														v77 = g32 + 232 * v36;
														v88 = *(int32_t *)(v77 + 32);
														v89 = *(int32_t *)(v77 + 36);
														v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
														// branch -> 0x6eedc
													}
													// 0x6eedc
													g37 = v10;
													function_a5074(g35);
													// branch -> 0x6ef68
												} else {
													// 0x6eeec
													v60 = v58;
													v39 = v37;
													if (g35 == *(int32_t *)g17) {
														// 0x6eef8
														v59 = (int32_t *)g30;
														*v59 = *v59 - v38;
														v78 = (int32_t *)(v37 + v58 + 396);
														*v78 = *v78 - v9;
														v60 = g31;
														v39 = g33;
														// branch -> 0x6ef14
													}
													// 0x6ef14
													v79 = v39 + v60;
													v8 = v79;
													v40 = g30;
													v61 = (int32_t *)v40;
													v90 = *(int32_t *)(v79 + 408);
													v42 = v40;
													if (*v61 > v90) {
														// 0x6ef28
														*v61 = v90;
														v41 = v8;
														*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
														v42 = g30;
														// branch -> 0x6ef34
													}
													// 0x6ef34
													v44 = g35;
													if (*(int32_t *)v42 > 63) {
														// 0x6ef50
														g38 = 0;
														function_a579c(v44, 0);
														// branch -> 0x6ef5c
													} else {
														// 0x6ef40
														v43 = g25;
														v9 = v43;
														function_a640c(v44, v43);
														// branch -> 0x6ef5c
													}
													// 0x6ef5c
													// branch -> 0x6ef68
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x6eda8
												v93 = 0x51eb851f * (int64_t)(v30 * v38);
												v94 = (int32_t)(v93 / 0x100000000) >> 31;
												v54 = v94 < 0;
												v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
												v9 = v72;
												v56 = v58;
												v31 = v37;
												if (g35 == *(int32_t *)g17) {
													// 0x6edd4
													v55 = (int32_t *)g30;
													*v55 = *v55 - v72;
													v73 = (int32_t *)(v37 + v58 + 396);
													*v73 = *v73 - v9;
													v56 = g31;
													v31 = g33;
													// branch -> 0x6edf0
												}
												// 0x6edf0
												v74 = v31 + v56;
												v8 = v74;
												v32 = g30;
												v57 = (int32_t *)v32;
												v85 = *(int32_t *)(v74 + 408);
												v9 = v85;
												v34 = v32;
												if (*v57 > v85) {
													// 0x6ee04
													*v57 = v85;
													v33 = v8;
													*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
													v34 = g30;
													// branch -> 0x6ee10
												}
												// 0x6ee10
												if (*(int32_t *)v34 > 63) {
													// 0x6ee2c
													v75 = g31 + g33;
													v86 = *(char *)(v75 + 348);
													if (v86 == 0) {
														// 0x6ee3c
														v9 = *(int32_t *)(v75 + 56);
														g34 = 788;
														g38 = *(int32_t *)(v75 + 60);
														PlaySfxLoc(788);
														// branch -> 0x6ee88
													} else {
														// 0x6ee50
														if (v86 == 1) {
															// 0x6ee5c
															v9 = *(int32_t *)(v75 + 56);
															g34 = 679;
															g38 = *(int32_t *)(v75 + 60);
															PlaySfxLoc(679);
															// branch -> 0x6ee88
														} else {
															// 0x6ee70
															if (v86 == 2) {
																// 0x6ee78
																v9 = *(int32_t *)(v75 + 56);
																g34 = 576;
																g38 = *(int32_t *)(v75 + 60);
																PlaySfxLoc(576);
																// branch -> 0x6ee88
															}
														}
														// 0x6ee88
														*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
														// branch -> 0x6ee94
														// 0x6ee94
														// branch -> 0x6ef68
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x6ee1c
													v35 = g25;
													v9 = v35;
													function_a640c(g35, v35);
													// branch -> 0x6ee94
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// 0x6eda0
										v30 = g26;
										if (v30 < 1) {
											// 0x6ee9c
											if (g28 < g27) {
												// 0x6eea4
												v36 = g36;
												if (v36 == -1) {
													// 0x6eed4
													v10 = *(int32_t *)(v37 + v58 + 112);
													// branch -> 0x6eedc
												} else {
													// 0x6eeac
													v76 = v37 + v58;
													v87 = *(int32_t *)(v76 + 60);
													v77 = g32 + 232 * v36;
													v88 = *(int32_t *)(v77 + 32);
													v89 = *(int32_t *)(v77 + 36);
													v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
													// branch -> 0x6eedc
												}
												// 0x6eedc
												g37 = v10;
												function_a5074(g35);
												// branch -> 0x6ef68
											} else {
												// 0x6eeec
												v60 = v58;
												v39 = v37;
												if (g35 == *(int32_t *)g17) {
													// 0x6eef8
													v59 = (int32_t *)g30;
													*v59 = *v59 - v38;
													v78 = (int32_t *)(v37 + v58 + 396);
													*v78 = *v78 - v9;
													v60 = g31;
													v39 = g33;
													// branch -> 0x6ef14
												}
												// 0x6ef14
												v79 = v39 + v60;
												v8 = v79;
												v40 = g30;
												v61 = (int32_t *)v40;
												v90 = *(int32_t *)(v79 + 408);
												v42 = v40;
												if (*v61 > v90) {
													// 0x6ef28
													*v61 = v90;
													v41 = v8;
													*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
													v42 = g30;
													// branch -> 0x6ef34
												}
												// 0x6ef34
												v44 = g35;
												if (*(int32_t *)v42 > 63) {
													// 0x6ef50
													g38 = 0;
													function_a579c(v44, 0);
													// branch -> 0x6ef5c
												} else {
													// 0x6ef40
													function_a640c(v44, g25);
													// branch -> 0x6ef5c
												}
												// 0x6ef5c
												// branch -> 0x6ef68
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x6eda8
											v93 = 0x51eb851f * (int64_t)(v30 * v38);
											v94 = (int32_t)(v93 / 0x100000000) >> 31;
											v54 = v94 < 0;
											v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
											v9 = v72;
											v56 = v58;
											v31 = v37;
											if (g35 == *(int32_t *)g17) {
												// 0x6edd4
												v55 = (int32_t *)g30;
												*v55 = *v55 - v72;
												v73 = (int32_t *)(v37 + v58 + 396);
												*v73 = *v73 - v9;
												v56 = g31;
												v31 = g33;
												// branch -> 0x6edf0
											}
											// 0x6edf0
											v74 = v31 + v56;
											v8 = v74;
											v32 = g30;
											v57 = (int32_t *)v32;
											v85 = *(int32_t *)(v74 + 408);
											v34 = v32;
											if (*v57 > v85) {
												// 0x6ee04
												*v57 = v85;
												v33 = v8;
												*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
												v34 = g30;
												// branch -> 0x6ee10
											}
											// 0x6ee10
											if (*(int32_t *)v34 > 63) {
												// 0x6ee2c
												v75 = g31 + g33;
												v86 = *(char *)(v75 + 348);
												if (v86 == 0) {
													// 0x6ee3c
													g34 = 788;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(788);
													// branch -> 0x6ee88
												} else {
													// 0x6ee50
													if (v86 == 1) {
														// 0x6ee5c
														g34 = 679;
														g38 = *(int32_t *)(v75 + 60);
														PlaySfxLoc(679);
														// branch -> 0x6ee88
													} else {
														// 0x6ee70
														if (v86 == 2) {
															// 0x6ee78
															g34 = 576;
															g38 = *(int32_t *)(v75 + 60);
															PlaySfxLoc(576);
															// branch -> 0x6ee88
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x6ee1c
												function_a640c(g35, g25);
												// branch -> 0x6ee94
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							} else {
								// 0x6ec80
								if (v84 != 0) {
									// 0x6ec98
									g26 = (int32_t) * (char *)(v23 + v48 + 454);
									// branch -> 0x6eccc
									// 0x6eccc
									if (g19 < g29) {
										// 0x6ecd4
										if (v17 == 63) {
											// 0x6ecdc
											v92 = 0x55555556 * (int64_t) * (int32_t *)g30;
											v67 = (int32_t)(v92 / 0x100000000) + (int32_t)(v92 / 0x8000000000000000);
											v9 = v67;
											v58 = v48;
											v37 = v23;
											v38 = v67;
											// branch -> 0x6eda0
										} else {
											// 0x6ecf8
											v49 = g21 - g20 + 1;
											if (v45 == 0) {
												// 0x6ed00
												g37 = 64 * v49;
												v68 = 64 * g20 + random(75);
												v9 = v68;
												v25 = v68;
												if (g36 == -1) {
													// 0x6ed24
													v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
													v26 = v9;
													if (v50 != 0) {
														// 0x6ed34
														v25 = v26 / 2 | v26 & -0x80000000;
														// branch -> 0x6ed38
													} else {
														v25 = v26;
													}
												}
												// 0x6ed38
												v24 = g33;
												v51 = g31;
												v69 = 64 * *(int32_t *)(v51 + v24 + 0x556c) + v25;
												v9 = v69;
												if (v69 <= 63) {
													// 0x6ed50
													v9 = 64;
													v58 = v51;
													v37 = v24;
													v38 = 64;
													// branch -> 0x6eda0
												} else {
													v58 = v51;
													v37 = v24;
													v38 = v69;
												}
											} else {
												// 0x6ed58
												g37 = v49;
												v70 = g20 + random(75);
												v9 = v70;
												v28 = v70;
												if (g36 == -1) {
													// 0x6ed74
													v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
													v29 = v9;
													if (v52 != 0) {
														// 0x6ed84
														v28 = v29 / 2 | v29 & -0x80000000;
														// branch -> 0x6ed88
													} else {
														v28 = v29;
													}
												}
												// 0x6ed88
												v27 = g33;
												v53 = g31;
												v71 = *(int32_t *)(v53 + v27 + 0x556c) + v28;
												v9 = v71;
												if (v71 <= 63) {
													// 0x6ed9c
													v9 = 64;
													v58 = v53;
													v37 = v27;
													v38 = 64;
													// branch -> 0x6eda0
												} else {
													v58 = v53;
													v37 = v27;
													v38 = v71;
												}
											}
											// 0x6eda0
											v30 = g26;
											if (v30 < 1) {
												// 0x6ee9c
												if (g28 < g27) {
													// 0x6eea4
													v36 = g36;
													if (v36 == -1) {
														// 0x6eed4
														v10 = *(int32_t *)(v37 + v58 + 112);
														// branch -> 0x6eedc
													} else {
														// 0x6eeac
														v76 = v37 + v58;
														v87 = *(int32_t *)(v76 + 60);
														v9 = v87;
														v77 = g32 + 232 * v36;
														v88 = *(int32_t *)(v77 + 32);
														v89 = *(int32_t *)(v77 + 36);
														v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
														// branch -> 0x6eedc
													}
													// 0x6eedc
													g37 = v10;
													function_a5074(g35);
													// branch -> 0x6ef68
												} else {
													// 0x6eeec
													v60 = v58;
													v39 = v37;
													if (g35 == *(int32_t *)g17) {
														// 0x6eef8
														v59 = (int32_t *)g30;
														*v59 = *v59 - v38;
														v78 = (int32_t *)(v37 + v58 + 396);
														*v78 = *v78 - v9;
														v60 = g31;
														v39 = g33;
														// branch -> 0x6ef14
													}
													// 0x6ef14
													v79 = v39 + v60;
													v8 = v79;
													v40 = g30;
													v61 = (int32_t *)v40;
													v90 = *(int32_t *)(v79 + 408);
													v42 = v40;
													if (*v61 > v90) {
														// 0x6ef28
														*v61 = v90;
														v41 = v8;
														*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
														v42 = g30;
														// branch -> 0x6ef34
													}
													// 0x6ef34
													v44 = g35;
													if (*(int32_t *)v42 > 63) {
														// 0x6ef50
														g38 = 0;
														function_a579c(v44, 0);
														// branch -> 0x6ef5c
													} else {
														// 0x6ef40
														v43 = g25;
														v9 = v43;
														function_a640c(v44, v43);
														// branch -> 0x6ef5c
													}
													// 0x6ef5c
													// branch -> 0x6ef68
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x6eda8
												v93 = 0x51eb851f * (int64_t)(v30 * v38);
												v94 = (int32_t)(v93 / 0x100000000) >> 31;
												v54 = v94 < 0;
												v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
												v9 = v72;
												v56 = v58;
												v31 = v37;
												if (g35 == *(int32_t *)g17) {
													// 0x6edd4
													v55 = (int32_t *)g30;
													*v55 = *v55 - v72;
													v73 = (int32_t *)(v37 + v58 + 396);
													*v73 = *v73 - v9;
													v56 = g31;
													v31 = g33;
													// branch -> 0x6edf0
												}
												// 0x6edf0
												v74 = v31 + v56;
												v8 = v74;
												v32 = g30;
												v57 = (int32_t *)v32;
												v85 = *(int32_t *)(v74 + 408);
												v9 = v85;
												v34 = v32;
												if (*v57 > v85) {
													// 0x6ee04
													*v57 = v85;
													v33 = v8;
													*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
													v34 = g30;
													// branch -> 0x6ee10
												}
												// 0x6ee10
												if (*(int32_t *)v34 > 63) {
													// 0x6ee2c
													v75 = g31 + g33;
													v86 = *(char *)(v75 + 348);
													if (v86 == 0) {
														// 0x6ee3c
														v9 = *(int32_t *)(v75 + 56);
														g34 = 788;
														g38 = *(int32_t *)(v75 + 60);
														PlaySfxLoc(788);
														// branch -> 0x6ee88
													} else {
														// 0x6ee50
														if (v86 == 1) {
															// 0x6ee5c
															v9 = *(int32_t *)(v75 + 56);
															g34 = 679;
															g38 = *(int32_t *)(v75 + 60);
															PlaySfxLoc(679);
															// branch -> 0x6ee88
														} else {
															// 0x6ee70
															if (v86 == 2) {
																// 0x6ee78
																v9 = *(int32_t *)(v75 + 56);
																g34 = 576;
																g38 = *(int32_t *)(v75 + 60);
																PlaySfxLoc(576);
																// branch -> 0x6ee88
															}
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x6ee1c
													v35 = g25;
													v9 = v35;
													function_a640c(g35, v35);
													// branch -> 0x6ee94
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// 0x6eda0
										v30 = g26;
										if (v30 < 1) {
											// 0x6ee9c
											if (g28 < g27) {
												// 0x6eea4
												v36 = g36;
												if (v36 == -1) {
													// 0x6eed4
													v10 = *(int32_t *)(v37 + v58 + 112);
													// branch -> 0x6eedc
												} else {
													// 0x6eeac
													v76 = v37 + v58;
													v87 = *(int32_t *)(v76 + 60);
													v77 = g32 + 232 * v36;
													v88 = *(int32_t *)(v77 + 32);
													v89 = *(int32_t *)(v77 + 36);
													v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
													// branch -> 0x6eedc
												}
												// 0x6eedc
												g37 = v10;
												function_a5074(g35);
												// branch -> 0x6ef68
											} else {
												// 0x6eeec
												v60 = v58;
												v39 = v37;
												if (g35 == *(int32_t *)g17) {
													// 0x6eef8
													v59 = (int32_t *)g30;
													*v59 = *v59 - v38;
													v78 = (int32_t *)(v37 + v58 + 396);
													*v78 = *v78 - v9;
													v60 = g31;
													v39 = g33;
													// branch -> 0x6ef14
												}
												// 0x6ef14
												v79 = v39 + v60;
												v8 = v79;
												v40 = g30;
												v61 = (int32_t *)v40;
												v90 = *(int32_t *)(v79 + 408);
												v42 = v40;
												if (*v61 > v90) {
													// 0x6ef28
													*v61 = v90;
													v41 = v8;
													*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
													v42 = g30;
													// branch -> 0x6ef34
												}
												// 0x6ef34
												v44 = g35;
												if (*(int32_t *)v42 > 63) {
													// 0x6ef50
													g38 = 0;
													function_a579c(v44, 0);
													// branch -> 0x6ef5c
												} else {
													// 0x6ef40
													function_a640c(v44, g25);
													// branch -> 0x6ef5c
												}
												// 0x6ef5c
												// branch -> 0x6ef68
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x6eda8
											v93 = 0x51eb851f * (int64_t)(v30 * v38);
											v94 = (int32_t)(v93 / 0x100000000) >> 31;
											v54 = v94 < 0;
											v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
											v9 = v72;
											v56 = v58;
											v31 = v37;
											if (g35 == *(int32_t *)g17) {
												// 0x6edd4
												v55 = (int32_t *)g30;
												*v55 = *v55 - v72;
												v73 = (int32_t *)(v37 + v58 + 396);
												*v73 = *v73 - v9;
												v56 = g31;
												v31 = g33;
												// branch -> 0x6edf0
											}
											// 0x6edf0
											v74 = v31 + v56;
											v8 = v74;
											v32 = g30;
											v57 = (int32_t *)v32;
											v85 = *(int32_t *)(v74 + 408);
											v34 = v32;
											if (*v57 > v85) {
												// 0x6ee04
												*v57 = v85;
												v33 = v8;
												*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
												v34 = g30;
												// branch -> 0x6ee10
											}
											// 0x6ee10
											if (*(int32_t *)v34 > 63) {
												// 0x6ee2c
												v75 = g31 + g33;
												v86 = *(char *)(v75 + 348);
												if (v86 == 0) {
													// 0x6ee3c
													g34 = 788;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(788);
													// branch -> 0x6ee88
												} else {
													// 0x6ee50
													if (v86 == 1) {
														// 0x6ee5c
														g34 = 679;
														g38 = *(int32_t *)(v75 + 60);
														PlaySfxLoc(679);
														// branch -> 0x6ee88
													} else {
														// 0x6ee70
														if (v86 == 2) {
															// 0x6ee78
															g34 = 576;
															g38 = *(int32_t *)(v75 + 60);
															PlaySfxLoc(576);
															// branch -> 0x6ee88
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x6ee1c
												function_a640c(g35, g25);
												// branch -> 0x6ee94
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// 0x6ecc8
							g26 = 0;
							// branch -> 0x6eccc
						}
						// 0x6eccc
						if (g19 < g29) {
							// 0x6ecd4
							if (v17 == 63) {
								// 0x6ecdc
								v92 = 0x55555556 * (int64_t) * (int32_t *)g30;
								v67 = (int32_t)(v92 / 0x100000000) + (int32_t)(v92 / 0x8000000000000000);
								v9 = v67;
								v58 = v48;
								v37 = v23;
								v38 = v67;
								// branch -> 0x6eda0
							} else {
								// 0x6ecf8
								v49 = g21 - g20 + 1;
								if (v45 == 0) {
									// 0x6ed00
									g37 = 64 * v49;
									v68 = 64 * g20 + random(75);
									v9 = v68;
									v25 = v68;
									if (g36 == -1) {
										// 0x6ed24
										v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
										v26 = v9;
										if (v50 != 0) {
											// 0x6ed34
											v25 = v26 / 2 | v26 & -0x80000000;
											// branch -> 0x6ed38
										} else {
											v25 = v26;
										}
									}
									// 0x6ed38
									v24 = g33;
									v51 = g31;
									v69 = 64 * *(int32_t *)(v51 + v24 + 0x556c) + v25;
									v9 = v69;
									if (v69 <= 63) {
										// 0x6ed50
										v9 = 64;
										v58 = v51;
										v37 = v24;
										v38 = 64;
										// branch -> 0x6eda0
									} else {
										v58 = v51;
										v37 = v24;
										v38 = v69;
									}
								} else {
									// 0x6ed58
									g37 = v49;
									v70 = g20 + random(75);
									v9 = v70;
									v28 = v70;
									if (g36 == -1) {
										// 0x6ed74
										v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
										v29 = v9;
										if (v52 != 0) {
											// 0x6ed84
											v28 = v29 / 2 | v29 & -0x80000000;
											// branch -> 0x6ed88
										} else {
											v28 = v29;
										}
									}
									// 0x6ed88
									v27 = g33;
									v53 = g31;
									v71 = *(int32_t *)(v53 + v27 + 0x556c) + v28;
									v9 = v71;
									if (v71 <= 63) {
										// 0x6ed9c
										v9 = 64;
										v58 = v53;
										v37 = v27;
										v38 = 64;
										// branch -> 0x6eda0
									} else {
										v58 = v53;
										v37 = v27;
										v38 = v71;
									}
								}
								// 0x6eda0
								v30 = g26;
								if (v30 < 1) {
									// 0x6ee9c
									if (g28 < g27) {
										// 0x6eea4
										v36 = g36;
										if (v36 == -1) {
											// 0x6eed4
											v10 = *(int32_t *)(v37 + v58 + 112);
											// branch -> 0x6eedc
										} else {
											// 0x6eeac
											v76 = v37 + v58;
											v87 = *(int32_t *)(v76 + 60);
											v9 = v87;
											v77 = g32 + 232 * v36;
											v88 = *(int32_t *)(v77 + 32);
											v89 = *(int32_t *)(v77 + 36);
											v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
											// branch -> 0x6eedc
										}
										// 0x6eedc
										g37 = v10;
										function_a5074(g35);
										// branch -> 0x6ef68
									} else {
										// 0x6eeec
										v60 = v58;
										v39 = v37;
										if (g35 == *(int32_t *)g17) {
											// 0x6eef8
											v59 = (int32_t *)g30;
											*v59 = *v59 - v38;
											v78 = (int32_t *)(v37 + v58 + 396);
											*v78 = *v78 - v9;
											v60 = g31;
											v39 = g33;
											// branch -> 0x6ef14
										}
										// 0x6ef14
										v79 = v39 + v60;
										v8 = v79;
										v40 = g30;
										v61 = (int32_t *)v40;
										v90 = *(int32_t *)(v79 + 408);
										v42 = v40;
										if (*v61 > v90) {
											// 0x6ef28
											*v61 = v90;
											v41 = v8;
											*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
											v42 = g30;
											// branch -> 0x6ef34
										}
										// 0x6ef34
										v44 = g35;
										if (*(int32_t *)v42 > 63) {
											// 0x6ef50
											g38 = 0;
											function_a579c(v44, 0);
											// branch -> 0x6ef5c
										} else {
											// 0x6ef40
											v43 = g25;
											v9 = v43;
											function_a640c(v44, v43);
											// branch -> 0x6ef5c
										}
										// 0x6ef5c
										// branch -> 0x6ef68
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x6eda8
									v93 = 0x51eb851f * (int64_t)(v30 * v38);
									v94 = (int32_t)(v93 / 0x100000000) >> 31;
									v54 = v94 < 0;
									v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
									v9 = v72;
									v56 = v58;
									v31 = v37;
									if (g35 == *(int32_t *)g17) {
										// 0x6edd4
										v55 = (int32_t *)g30;
										*v55 = *v55 - v72;
										v73 = (int32_t *)(v37 + v58 + 396);
										*v73 = *v73 - v9;
										v56 = g31;
										v31 = g33;
										// branch -> 0x6edf0
									}
									// 0x6edf0
									v74 = v31 + v56;
									v8 = v74;
									v32 = g30;
									v57 = (int32_t *)v32;
									v85 = *(int32_t *)(v74 + 408);
									v9 = v85;
									v34 = v32;
									if (*v57 > v85) {
										// 0x6ee04
										*v57 = v85;
										v33 = v8;
										*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
										v34 = g30;
										// branch -> 0x6ee10
									}
									// 0x6ee10
									if (*(int32_t *)v34 > 63) {
										// 0x6ee2c
										v75 = g31 + g33;
										v86 = *(char *)(v75 + 348);
										if (v86 == 0) {
											// 0x6ee3c
											v9 = *(int32_t *)(v75 + 56);
											g34 = 788;
											g38 = *(int32_t *)(v75 + 60);
											PlaySfxLoc(788);
											// branch -> 0x6ee88
										} else {
											// 0x6ee50
											if (v86 == 1) {
												// 0x6ee5c
												v9 = *(int32_t *)(v75 + 56);
												g34 = 679;
												g38 = *(int32_t *)(v75 + 60);
												PlaySfxLoc(679);
												// branch -> 0x6ee88
											} else {
												// 0x6ee70
												if (v86 == 2) {
													// 0x6ee78
													v9 = *(int32_t *)(v75 + 56);
													g34 = 576;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(576);
													// branch -> 0x6ee88
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x6ee1c
										v35 = g25;
										v9 = v35;
										function_a640c(g35, v35);
										// branch -> 0x6ee94
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// 0x6eda0
							v30 = g26;
							if (v30 < 1) {
								// 0x6ee9c
								if (g28 < g27) {
									// 0x6eea4
									v36 = g36;
									if (v36 == -1) {
										// 0x6eed4
										v10 = *(int32_t *)(v37 + v58 + 112);
										// branch -> 0x6eedc
									} else {
										// 0x6eeac
										v76 = v37 + v58;
										v87 = *(int32_t *)(v76 + 60);
										v77 = g32 + 232 * v36;
										v88 = *(int32_t *)(v77 + 32);
										v89 = *(int32_t *)(v77 + 36);
										v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
										// branch -> 0x6eedc
									}
									// 0x6eedc
									g37 = v10;
									function_a5074(g35);
									// branch -> 0x6ef68
								} else {
									// 0x6eeec
									v60 = v58;
									v39 = v37;
									if (g35 == *(int32_t *)g17) {
										// 0x6eef8
										v59 = (int32_t *)g30;
										*v59 = *v59 - v38;
										v78 = (int32_t *)(v37 + v58 + 396);
										*v78 = *v78 - v9;
										v60 = g31;
										v39 = g33;
										// branch -> 0x6ef14
									}
									// 0x6ef14
									v79 = v39 + v60;
									v8 = v79;
									v40 = g30;
									v61 = (int32_t *)v40;
									v90 = *(int32_t *)(v79 + 408);
									v42 = v40;
									if (*v61 > v90) {
										// 0x6ef28
										*v61 = v90;
										v41 = v8;
										*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
										v42 = g30;
										// branch -> 0x6ef34
									}
									// 0x6ef34
									v44 = g35;
									if (*(int32_t *)v42 > 63) {
										// 0x6ef50
										g38 = 0;
										function_a579c(v44, 0);
										// branch -> 0x6ef5c
									} else {
										// 0x6ef40
										function_a640c(v44, g25);
										// branch -> 0x6ef5c
									}
									// 0x6ef5c
									// branch -> 0x6ef68
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								// 0x6eda8
								v93 = 0x51eb851f * (int64_t)(v30 * v38);
								v94 = (int32_t)(v93 / 0x100000000) >> 31;
								v54 = v94 < 0;
								v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
								v9 = v72;
								v56 = v58;
								v31 = v37;
								if (g35 == *(int32_t *)g17) {
									// 0x6edd4
									v55 = (int32_t *)g30;
									*v55 = *v55 - v72;
									v73 = (int32_t *)(v37 + v58 + 396);
									*v73 = *v73 - v9;
									v56 = g31;
									v31 = g33;
									// branch -> 0x6edf0
								}
								// 0x6edf0
								v74 = v31 + v56;
								v8 = v74;
								v32 = g30;
								v57 = (int32_t *)v32;
								v85 = *(int32_t *)(v74 + 408);
								v34 = v32;
								if (*v57 > v85) {
									// 0x6ee04
									*v57 = v85;
									v33 = v8;
									*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
									v34 = g30;
									// branch -> 0x6ee10
								}
								// 0x6ee10
								if (*(int32_t *)v34 > 63) {
									// 0x6ee2c
									v75 = g31 + g33;
									v86 = *(char *)(v75 + 348);
									if (v86 == 0) {
										// 0x6ee3c
										g34 = 788;
										g38 = *(int32_t *)(v75 + 60);
										PlaySfxLoc(788);
										// branch -> 0x6ee88
									} else {
										// 0x6ee50
										if (v86 == 1) {
											// 0x6ee5c
											g34 = 679;
											g38 = *(int32_t *)(v75 + 60);
											PlaySfxLoc(679);
											// branch -> 0x6ee88
										} else {
											// 0x6ee70
											if (v86 == 2) {
												// 0x6ee78
												g34 = 576;
												g38 = *(int32_t *)(v75 + 60);
												PlaySfxLoc(576);
												// branch -> 0x6ee88
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x6ee1c
									function_a640c(g35, g25);
									// branch -> 0x6ee94
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0x6ebc0
				v11 = 100;
				if (*(char *)(v64 + 312) != 0) {
					// 0x6ebd0
					g37 = 100;
					v11 = random(73);
					// branch -> 0x6ebe8
				}
				// 0x6ebe8
				g28 = v11;
				v45 = g24 % 256;
				if (v45 == 1) {
					// 0x6ebf4
					g28 = 100;
					// branch -> 0x6ebf8
				}
				// 0x6ebf8
				v17 = g22;
				if (v17 == 59) {
					// 0x6ec00
					g28 = 100;
					// branch -> 0x6ec04
				}
				// 0x6ec04
				v18 = g36;
				if (v18 == -1) {
					// 0x6ec44
					v20 = g33;
					v47 = g31;
					v66 = v47 + v20;
					v48 = v47;
					v23 = v20;
					v22 = *(int32_t *)(v66 + 368) + *(int32_t *)(v66 + 392);
					// branch -> 0x6ec54
				} else {
					// 0x6ec0c
					v19 = g33;
					v46 = g31;
					v65 = v46 + v19;
					v80 = *(char *)(v65 + 436);
					v81 = *(int32_t *)(v65 + 392);
					v82 = *(char *)(g32 + 232 * v18 + 196);
					v83 = *(int32_t *)(v65 + 368);
					v48 = v46;
					v23 = v19;
					v22 = v83 + v81 - 2 * ((int32_t)v82 - (int32_t)v80);
					// branch -> 0x6ec54
				}
				// 0x6ec54
				v12 = v22;
				v21 = v22;
				if (v22 <= 0xffffffff) {
					// 0x6ec5c
					v12 = 0;
					v21 = 0;
					// branch -> 0x6ec60
				}
				// 0x6ec60
				v13 = v12;
				if (v21 >= 101) {
					// 0x6ec68
					v13 = 100;
					// branch -> 0x6ec6c
				}
				// 0x6ec6c
				g27 = v13;
				v84 = *(char *)(g18 + g26 + 17);
				if (v84 == 2) {
					// 0x6eca8
					g26 = (int32_t) * (char *)(v23 + v48 + 455);
					// branch -> 0x6eccc
				} else {
					// 0x6ec7c
					if (v84 > 2) {
						// 0x6ec8c
						if (v84 <= 4) {
							// 0x6ecb8
							g26 = (int32_t) * (char *)(v23 + v48 + 453);
							// branch -> 0x6eccc
							// 0x6eccc
							if (g19 < g29) {
								// 0x6ecd4
								if (v17 == 63) {
									// 0x6ecdc
									v92 = 0x55555556 * (int64_t) * (int32_t *)g30;
									v67 = (int32_t)(v92 / 0x100000000) + (int32_t)(v92 / 0x8000000000000000);
									v9 = v67;
									v58 = v48;
									v37 = v23;
									v38 = v67;
									// branch -> 0x6eda0
								} else {
									// 0x6ecf8
									v49 = g21 - g20 + 1;
									if (v45 == 0) {
										// 0x6ed00
										g37 = 64 * v49;
										v68 = 64 * g20 + random(75);
										v9 = v68;
										v25 = v68;
										if (g36 == -1) {
											// 0x6ed24
											v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
											v26 = v9;
											if (v50 != 0) {
												// 0x6ed34
												v25 = v26 / 2 | v26 & -0x80000000;
												// branch -> 0x6ed38
											} else {
												v25 = v26;
											}
										}
										// 0x6ed38
										v24 = g33;
										v51 = g31;
										v69 = 64 * *(int32_t *)(v51 + v24 + 0x556c) + v25;
										v9 = v69;
										if (v69 <= 63) {
											// 0x6ed50
											v9 = 64;
											v58 = v51;
											v37 = v24;
											v38 = 64;
											// branch -> 0x6eda0
										} else {
											v58 = v51;
											v37 = v24;
											v38 = v69;
										}
									} else {
										// 0x6ed58
										g37 = v49;
										v70 = g20 + random(75);
										v9 = v70;
										v28 = v70;
										if (g36 == -1) {
											// 0x6ed74
											v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
											v29 = v9;
											if (v52 != 0) {
												// 0x6ed84
												v28 = v29 / 2 | v29 & -0x80000000;
												// branch -> 0x6ed88
											} else {
												v28 = v29;
											}
										}
										// 0x6ed88
										v27 = g33;
										v53 = g31;
										v71 = *(int32_t *)(v53 + v27 + 0x556c) + v28;
										v9 = v71;
										if (v71 <= 63) {
											// 0x6ed9c
											v9 = 64;
											v58 = v53;
											v37 = v27;
											v38 = 64;
											// branch -> 0x6eda0
										} else {
											v58 = v53;
											v37 = v27;
											v38 = v71;
										}
									}
									// 0x6eda0
									v30 = g26;
									if (v30 < 1) {
										// 0x6ee9c
										if (g28 < g27) {
											// 0x6eea4
											v36 = g36;
											if (v36 == -1) {
												// 0x6eed4
												v10 = *(int32_t *)(v37 + v58 + 112);
												// branch -> 0x6eedc
											} else {
												// 0x6eeac
												v76 = v37 + v58;
												v87 = *(int32_t *)(v76 + 60);
												v9 = v87;
												v77 = g32 + 232 * v36;
												v88 = *(int32_t *)(v77 + 32);
												v89 = *(int32_t *)(v77 + 36);
												v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
												// branch -> 0x6eedc
											}
											// 0x6eedc
											g37 = v10;
											function_a5074(g35);
											// branch -> 0x6ef68
										} else {
											// 0x6eeec
											v60 = v58;
											v39 = v37;
											if (g35 == *(int32_t *)g17) {
												// 0x6eef8
												v59 = (int32_t *)g30;
												*v59 = *v59 - v38;
												v78 = (int32_t *)(v37 + v58 + 396);
												*v78 = *v78 - v9;
												v60 = g31;
												v39 = g33;
												// branch -> 0x6ef14
											}
											// 0x6ef14
											v79 = v39 + v60;
											v8 = v79;
											v40 = g30;
											v61 = (int32_t *)v40;
											v90 = *(int32_t *)(v79 + 408);
											v42 = v40;
											if (*v61 > v90) {
												// 0x6ef28
												*v61 = v90;
												v41 = v8;
												*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
												v42 = g30;
												// branch -> 0x6ef34
											}
											// 0x6ef34
											v44 = g35;
											if (*(int32_t *)v42 > 63) {
												// 0x6ef50
												g38 = 0;
												function_a579c(v44, 0);
												// branch -> 0x6ef5c
											} else {
												// 0x6ef40
												v43 = g25;
												v9 = v43;
												function_a640c(v44, v43);
												// branch -> 0x6ef5c
											}
											// 0x6ef5c
											// branch -> 0x6ef68
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x6eda8
										v93 = 0x51eb851f * (int64_t)(v30 * v38);
										v94 = (int32_t)(v93 / 0x100000000) >> 31;
										v54 = v94 < 0;
										v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
										v9 = v72;
										v56 = v58;
										v31 = v37;
										if (g35 == *(int32_t *)g17) {
											// 0x6edd4
											v55 = (int32_t *)g30;
											*v55 = *v55 - v72;
											v73 = (int32_t *)(v37 + v58 + 396);
											*v73 = *v73 - v9;
											v56 = g31;
											v31 = g33;
											// branch -> 0x6edf0
										}
										// 0x6edf0
										v74 = v31 + v56;
										v8 = v74;
										v32 = g30;
										v57 = (int32_t *)v32;
										v85 = *(int32_t *)(v74 + 408);
										v9 = v85;
										v34 = v32;
										if (*v57 > v85) {
											// 0x6ee04
											*v57 = v85;
											v33 = v8;
											*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
											v34 = g30;
											// branch -> 0x6ee10
										}
										// 0x6ee10
										if (*(int32_t *)v34 > 63) {
											// 0x6ee2c
											v75 = g31 + g33;
											v86 = *(char *)(v75 + 348);
											if (v86 == 0) {
												// 0x6ee3c
												v9 = *(int32_t *)(v75 + 56);
												g34 = 788;
												g38 = *(int32_t *)(v75 + 60);
												PlaySfxLoc(788);
												// branch -> 0x6ee88
											} else {
												// 0x6ee50
												if (v86 == 1) {
													// 0x6ee5c
													v9 = *(int32_t *)(v75 + 56);
													g34 = 679;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(679);
													// branch -> 0x6ee88
												} else {
													// 0x6ee70
													if (v86 == 2) {
														// 0x6ee78
														v9 = *(int32_t *)(v75 + 56);
														g34 = 576;
														g38 = *(int32_t *)(v75 + 60);
														PlaySfxLoc(576);
														// branch -> 0x6ee88
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x6ee1c
											v35 = g25;
											v9 = v35;
											function_a640c(g35, v35);
											// branch -> 0x6ee94
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x6eda0
								v30 = g26;
								if (v30 < 1) {
									// 0x6ee9c
									if (g28 < g27) {
										// 0x6eea4
										v36 = g36;
										if (v36 == -1) {
											// 0x6eed4
											v10 = *(int32_t *)(v37 + v58 + 112);
											// branch -> 0x6eedc
										} else {
											// 0x6eeac
											v76 = v37 + v58;
											v87 = *(int32_t *)(v76 + 60);
											v77 = g32 + 232 * v36;
											v88 = *(int32_t *)(v77 + 32);
											v89 = *(int32_t *)(v77 + 36);
											v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
											// branch -> 0x6eedc
										}
										// 0x6eedc
										g37 = v10;
										function_a5074(g35);
										// branch -> 0x6ef68
									} else {
										// 0x6eeec
										v60 = v58;
										v39 = v37;
										if (g35 == *(int32_t *)g17) {
											// 0x6eef8
											v59 = (int32_t *)g30;
											*v59 = *v59 - v38;
											v78 = (int32_t *)(v37 + v58 + 396);
											*v78 = *v78 - v9;
											v60 = g31;
											v39 = g33;
											// branch -> 0x6ef14
										}
										// 0x6ef14
										v79 = v39 + v60;
										v8 = v79;
										v40 = g30;
										v61 = (int32_t *)v40;
										v90 = *(int32_t *)(v79 + 408);
										v42 = v40;
										if (*v61 > v90) {
											// 0x6ef28
											*v61 = v90;
											v41 = v8;
											*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
											v42 = g30;
											// branch -> 0x6ef34
										}
										// 0x6ef34
										v44 = g35;
										if (*(int32_t *)v42 > 63) {
											// 0x6ef50
											g38 = 0;
											function_a579c(v44, 0);
											// branch -> 0x6ef5c
										} else {
											// 0x6ef40
											function_a640c(v44, g25);
											// branch -> 0x6ef5c
										}
										// 0x6ef5c
										// branch -> 0x6ef68
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x6eda8
									v93 = 0x51eb851f * (int64_t)(v30 * v38);
									v94 = (int32_t)(v93 / 0x100000000) >> 31;
									v54 = v94 < 0;
									v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
									v9 = v72;
									v56 = v58;
									v31 = v37;
									if (g35 == *(int32_t *)g17) {
										// 0x6edd4
										v55 = (int32_t *)g30;
										*v55 = *v55 - v72;
										v73 = (int32_t *)(v37 + v58 + 396);
										*v73 = *v73 - v9;
										v56 = g31;
										v31 = g33;
										// branch -> 0x6edf0
									}
									// 0x6edf0
									v74 = v31 + v56;
									v8 = v74;
									v32 = g30;
									v57 = (int32_t *)v32;
									v85 = *(int32_t *)(v74 + 408);
									v34 = v32;
									if (*v57 > v85) {
										// 0x6ee04
										*v57 = v85;
										v33 = v8;
										*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
										v34 = g30;
										// branch -> 0x6ee10
									}
									// 0x6ee10
									if (*(int32_t *)v34 > 63) {
										// 0x6ee2c
										v75 = g31 + g33;
										v86 = *(char *)(v75 + 348);
										if (v86 == 0) {
											// 0x6ee3c
											g34 = 788;
											g38 = *(int32_t *)(v75 + 60);
											PlaySfxLoc(788);
											// branch -> 0x6ee88
										} else {
											// 0x6ee50
											if (v86 == 1) {
												// 0x6ee5c
												g34 = 679;
												g38 = *(int32_t *)(v75 + 60);
												PlaySfxLoc(679);
												// branch -> 0x6ee88
											} else {
												// 0x6ee70
												if (v86 == 2) {
													// 0x6ee78
													g34 = 576;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(576);
													// branch -> 0x6ee88
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x6ee1c
										function_a640c(g35, g25);
										// branch -> 0x6ee94
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					} else {
						// 0x6ec80
						if (v84 != 0) {
							// 0x6ec98
							g26 = (int32_t) * (char *)(v23 + v48 + 454);
							// branch -> 0x6eccc
							// 0x6eccc
							if (g19 < g29) {
								// 0x6ecd4
								if (v17 == 63) {
									// 0x6ecdc
									v92 = 0x55555556 * (int64_t) * (int32_t *)g30;
									v67 = (int32_t)(v92 / 0x100000000) + (int32_t)(v92 / 0x8000000000000000);
									v9 = v67;
									v58 = v48;
									v37 = v23;
									v38 = v67;
									// branch -> 0x6eda0
								} else {
									// 0x6ecf8
									v49 = g21 - g20 + 1;
									if (v45 == 0) {
										// 0x6ed00
										g37 = 64 * v49;
										v68 = 64 * g20 + random(75);
										v9 = v68;
										v25 = v68;
										if (g36 == -1) {
											// 0x6ed24
											v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
											v26 = v9;
											if (v50 != 0) {
												// 0x6ed34
												v25 = v26 / 2 | v26 & -0x80000000;
												// branch -> 0x6ed38
											} else {
												v25 = v26;
											}
										}
										// 0x6ed38
										v24 = g33;
										v51 = g31;
										v69 = 64 * *(int32_t *)(v51 + v24 + 0x556c) + v25;
										v9 = v69;
										if (v69 <= 63) {
											// 0x6ed50
											v9 = 64;
											v58 = v51;
											v37 = v24;
											v38 = 64;
											// branch -> 0x6eda0
										} else {
											v58 = v51;
											v37 = v24;
											v38 = v69;
										}
									} else {
										// 0x6ed58
										g37 = v49;
										v70 = g20 + random(75);
										v9 = v70;
										v28 = v70;
										if (g36 == -1) {
											// 0x6ed74
											v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
											v29 = v9;
											if (v52 != 0) {
												// 0x6ed84
												v28 = v29 / 2 | v29 & -0x80000000;
												// branch -> 0x6ed88
											} else {
												v28 = v29;
											}
										}
										// 0x6ed88
										v27 = g33;
										v53 = g31;
										v71 = *(int32_t *)(v53 + v27 + 0x556c) + v28;
										v9 = v71;
										if (v71 <= 63) {
											// 0x6ed9c
											v9 = 64;
											v58 = v53;
											v37 = v27;
											v38 = 64;
											// branch -> 0x6eda0
										} else {
											v58 = v53;
											v37 = v27;
											v38 = v71;
										}
									}
									// 0x6eda0
									v30 = g26;
									if (v30 < 1) {
										// 0x6ee9c
										if (g28 < g27) {
											// 0x6eea4
											v36 = g36;
											if (v36 == -1) {
												// 0x6eed4
												v10 = *(int32_t *)(v37 + v58 + 112);
												// branch -> 0x6eedc
											} else {
												// 0x6eeac
												v76 = v37 + v58;
												v87 = *(int32_t *)(v76 + 60);
												v9 = v87;
												v77 = g32 + 232 * v36;
												v88 = *(int32_t *)(v77 + 32);
												v89 = *(int32_t *)(v77 + 36);
												v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
												// branch -> 0x6eedc
											}
											// 0x6eedc
											g37 = v10;
											function_a5074(g35);
											// branch -> 0x6ef68
										} else {
											// 0x6eeec
											v60 = v58;
											v39 = v37;
											if (g35 == *(int32_t *)g17) {
												// 0x6eef8
												v59 = (int32_t *)g30;
												*v59 = *v59 - v38;
												v78 = (int32_t *)(v37 + v58 + 396);
												*v78 = *v78 - v9;
												v60 = g31;
												v39 = g33;
												// branch -> 0x6ef14
											}
											// 0x6ef14
											v79 = v39 + v60;
											v8 = v79;
											v40 = g30;
											v61 = (int32_t *)v40;
											v90 = *(int32_t *)(v79 + 408);
											v42 = v40;
											if (*v61 > v90) {
												// 0x6ef28
												*v61 = v90;
												v41 = v8;
												*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
												v42 = g30;
												// branch -> 0x6ef34
											}
											// 0x6ef34
											v44 = g35;
											if (*(int32_t *)v42 > 63) {
												// 0x6ef50
												g38 = 0;
												function_a579c(v44, 0);
												// branch -> 0x6ef5c
											} else {
												// 0x6ef40
												v43 = g25;
												v9 = v43;
												function_a640c(v44, v43);
												// branch -> 0x6ef5c
											}
											// 0x6ef5c
											// branch -> 0x6ef68
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x6eda8
										v93 = 0x51eb851f * (int64_t)(v30 * v38);
										v94 = (int32_t)(v93 / 0x100000000) >> 31;
										v54 = v94 < 0;
										v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
										v9 = v72;
										v56 = v58;
										v31 = v37;
										if (g35 == *(int32_t *)g17) {
											// 0x6edd4
											v55 = (int32_t *)g30;
											*v55 = *v55 - v72;
											v73 = (int32_t *)(v37 + v58 + 396);
											*v73 = *v73 - v9;
											v56 = g31;
											v31 = g33;
											// branch -> 0x6edf0
										}
										// 0x6edf0
										v74 = v31 + v56;
										v8 = v74;
										v32 = g30;
										v57 = (int32_t *)v32;
										v85 = *(int32_t *)(v74 + 408);
										v9 = v85;
										v34 = v32;
										if (*v57 > v85) {
											// 0x6ee04
											*v57 = v85;
											v33 = v8;
											*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
											v34 = g30;
											// branch -> 0x6ee10
										}
										// 0x6ee10
										if (*(int32_t *)v34 > 63) {
											// 0x6ee2c
											v75 = g31 + g33;
											v86 = *(char *)(v75 + 348);
											if (v86 == 0) {
												// 0x6ee3c
												v9 = *(int32_t *)(v75 + 56);
												g34 = 788;
												g38 = *(int32_t *)(v75 + 60);
												PlaySfxLoc(788);
												// branch -> 0x6ee88
											} else {
												// 0x6ee50
												if (v86 == 1) {
													// 0x6ee5c
													v9 = *(int32_t *)(v75 + 56);
													g34 = 679;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(679);
													// branch -> 0x6ee88
												} else {
													// 0x6ee70
													if (v86 == 2) {
														// 0x6ee78
														v9 = *(int32_t *)(v75 + 56);
														g34 = 576;
														g38 = *(int32_t *)(v75 + 60);
														PlaySfxLoc(576);
														// branch -> 0x6ee88
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x6ee1c
											v35 = g25;
											v9 = v35;
											function_a640c(g35, v35);
											// branch -> 0x6ee94
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// 0x6eda0
								v30 = g26;
								if (v30 < 1) {
									// 0x6ee9c
									if (g28 < g27) {
										// 0x6eea4
										v36 = g36;
										if (v36 == -1) {
											// 0x6eed4
											v10 = *(int32_t *)(v37 + v58 + 112);
											// branch -> 0x6eedc
										} else {
											// 0x6eeac
											v76 = v37 + v58;
											v87 = *(int32_t *)(v76 + 60);
											v77 = g32 + 232 * v36;
											v88 = *(int32_t *)(v77 + 32);
											v89 = *(int32_t *)(v77 + 36);
											v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
											// branch -> 0x6eedc
										}
										// 0x6eedc
										g37 = v10;
										function_a5074(g35);
										// branch -> 0x6ef68
									} else {
										// 0x6eeec
										v60 = v58;
										v39 = v37;
										if (g35 == *(int32_t *)g17) {
											// 0x6eef8
											v59 = (int32_t *)g30;
											*v59 = *v59 - v38;
											v78 = (int32_t *)(v37 + v58 + 396);
											*v78 = *v78 - v9;
											v60 = g31;
											v39 = g33;
											// branch -> 0x6ef14
										}
										// 0x6ef14
										v79 = v39 + v60;
										v8 = v79;
										v40 = g30;
										v61 = (int32_t *)v40;
										v90 = *(int32_t *)(v79 + 408);
										v42 = v40;
										if (*v61 > v90) {
											// 0x6ef28
											*v61 = v90;
											v41 = v8;
											*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
											v42 = g30;
											// branch -> 0x6ef34
										}
										// 0x6ef34
										v44 = g35;
										if (*(int32_t *)v42 > 63) {
											// 0x6ef50
											g38 = 0;
											function_a579c(v44, 0);
											// branch -> 0x6ef5c
										} else {
											// 0x6ef40
											function_a640c(v44, g25);
											// branch -> 0x6ef5c
										}
										// 0x6ef5c
										// branch -> 0x6ef68
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x6eda8
									v93 = 0x51eb851f * (int64_t)(v30 * v38);
									v94 = (int32_t)(v93 / 0x100000000) >> 31;
									v54 = v94 < 0;
									v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
									v9 = v72;
									v56 = v58;
									v31 = v37;
									if (g35 == *(int32_t *)g17) {
										// 0x6edd4
										v55 = (int32_t *)g30;
										*v55 = *v55 - v72;
										v73 = (int32_t *)(v37 + v58 + 396);
										*v73 = *v73 - v9;
										v56 = g31;
										v31 = g33;
										// branch -> 0x6edf0
									}
									// 0x6edf0
									v74 = v31 + v56;
									v8 = v74;
									v32 = g30;
									v57 = (int32_t *)v32;
									v85 = *(int32_t *)(v74 + 408);
									v34 = v32;
									if (*v57 > v85) {
										// 0x6ee04
										*v57 = v85;
										v33 = v8;
										*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
										v34 = g30;
										// branch -> 0x6ee10
									}
									// 0x6ee10
									if (*(int32_t *)v34 > 63) {
										// 0x6ee2c
										v75 = g31 + g33;
										v86 = *(char *)(v75 + 348);
										if (v86 == 0) {
											// 0x6ee3c
											g34 = 788;
											g38 = *(int32_t *)(v75 + 60);
											PlaySfxLoc(788);
											// branch -> 0x6ee88
										} else {
											// 0x6ee50
											if (v86 == 1) {
												// 0x6ee5c
												g34 = 679;
												g38 = *(int32_t *)(v75 + 60);
												PlaySfxLoc(679);
												// branch -> 0x6ee88
											} else {
												// 0x6ee70
												if (v86 == 2) {
													// 0x6ee78
													g34 = 576;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(576);
													// branch -> 0x6ee88
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x6ee1c
										function_a640c(g35, g25);
										// branch -> 0x6ee94
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// 0x6ecc8
					g26 = 0;
					// branch -> 0x6eccc
				}
				// 0x6eccc
				if (g19 < g29) {
					// 0x6ecd4
					if (v17 == 63) {
						// 0x6ecdc
						v92 = 0x55555556 * (int64_t) * (int32_t *)g30;
						v67 = (int32_t)(v92 / 0x100000000) + (int32_t)(v92 / 0x8000000000000000);
						v9 = v67;
						v58 = v48;
						v37 = v23;
						v38 = v67;
						// branch -> 0x6eda0
					} else {
						// 0x6ecf8
						v49 = g21 - g20 + 1;
						if (v45 == 0) {
							// 0x6ed00
							g37 = 64 * v49;
							v68 = 64 * g20 + random(75);
							v9 = v68;
							v25 = v68;
							if (g36 == -1) {
								// 0x6ed24
								v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
								v26 = v9;
								if (v50 != 0) {
									// 0x6ed34
									v25 = v26 / 2 | v26 & -0x80000000;
									// branch -> 0x6ed38
								} else {
									v25 = v26;
								}
							}
							// 0x6ed38
							v24 = g33;
							v51 = g31;
							v69 = 64 * *(int32_t *)(v51 + v24 + 0x556c) + v25;
							v9 = v69;
							if (v69 <= 63) {
								// 0x6ed50
								v9 = 64;
								v58 = v51;
								v37 = v24;
								v38 = 64;
								// branch -> 0x6eda0
							} else {
								v58 = v51;
								v37 = v24;
								v38 = v69;
							}
						} else {
							// 0x6ed58
							g37 = v49;
							v70 = g20 + random(75);
							v9 = v70;
							v28 = v70;
							if (g36 == -1) {
								// 0x6ed74
								v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
								v29 = v9;
								if (v52 != 0) {
									// 0x6ed84
									v28 = v29 / 2 | v29 & -0x80000000;
									// branch -> 0x6ed88
								} else {
									v28 = v29;
								}
							}
							// 0x6ed88
							v27 = g33;
							v53 = g31;
							v71 = *(int32_t *)(v53 + v27 + 0x556c) + v28;
							v9 = v71;
							if (v71 <= 63) {
								// 0x6ed9c
								v9 = 64;
								v58 = v53;
								v37 = v27;
								v38 = 64;
								// branch -> 0x6eda0
							} else {
								v58 = v53;
								v37 = v27;
								v38 = v71;
							}
						}
						// 0x6eda0
						v30 = g26;
						if (v30 < 1) {
							// 0x6ee9c
							if (g28 < g27) {
								// 0x6eea4
								v36 = g36;
								if (v36 == -1) {
									// 0x6eed4
									v10 = *(int32_t *)(v37 + v58 + 112);
									// branch -> 0x6eedc
								} else {
									// 0x6eeac
									v76 = v37 + v58;
									v87 = *(int32_t *)(v76 + 60);
									v9 = v87;
									v77 = g32 + 232 * v36;
									v88 = *(int32_t *)(v77 + 32);
									v89 = *(int32_t *)(v77 + 36);
									v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
									// branch -> 0x6eedc
								}
								// 0x6eedc
								g37 = v10;
								function_a5074(g35);
								// branch -> 0x6ef68
							} else {
								// 0x6eeec
								v60 = v58;
								v39 = v37;
								if (g35 == *(int32_t *)g17) {
									// 0x6eef8
									v59 = (int32_t *)g30;
									*v59 = *v59 - v38;
									v78 = (int32_t *)(v37 + v58 + 396);
									*v78 = *v78 - v9;
									v60 = g31;
									v39 = g33;
									// branch -> 0x6ef14
								}
								// 0x6ef14
								v79 = v39 + v60;
								v8 = v79;
								v40 = g30;
								v61 = (int32_t *)v40;
								v90 = *(int32_t *)(v79 + 408);
								v42 = v40;
								if (*v61 > v90) {
									// 0x6ef28
									*v61 = v90;
									v41 = v8;
									*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
									v42 = g30;
									// branch -> 0x6ef34
								}
								// 0x6ef34
								v44 = g35;
								if (*(int32_t *)v42 > 63) {
									// 0x6ef50
									g38 = 0;
									function_a579c(v44, 0);
									// branch -> 0x6ef5c
								} else {
									// 0x6ef40
									v43 = g25;
									v9 = v43;
									function_a640c(v44, v43);
									// branch -> 0x6ef5c
								}
								// 0x6ef5c
								// branch -> 0x6ef68
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x6eda8
							v93 = 0x51eb851f * (int64_t)(v30 * v38);
							v94 = (int32_t)(v93 / 0x100000000) >> 31;
							v54 = v94 < 0;
							v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
							v9 = v72;
							v56 = v58;
							v31 = v37;
							if (g35 == *(int32_t *)g17) {
								// 0x6edd4
								v55 = (int32_t *)g30;
								*v55 = *v55 - v72;
								v73 = (int32_t *)(v37 + v58 + 396);
								*v73 = *v73 - v9;
								v56 = g31;
								v31 = g33;
								// branch -> 0x6edf0
							}
							// 0x6edf0
							v74 = v31 + v56;
							v8 = v74;
							v32 = g30;
							v57 = (int32_t *)v32;
							v85 = *(int32_t *)(v74 + 408);
							v9 = v85;
							v34 = v32;
							if (*v57 > v85) {
								// 0x6ee04
								*v57 = v85;
								v33 = v8;
								*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
								v34 = g30;
								// branch -> 0x6ee10
							}
							// 0x6ee10
							if (*(int32_t *)v34 > 63) {
								// 0x6ee2c
								v75 = g31 + g33;
								v86 = *(char *)(v75 + 348);
								if (v86 == 0) {
									// 0x6ee3c
									v9 = *(int32_t *)(v75 + 56);
									g34 = 788;
									g38 = *(int32_t *)(v75 + 60);
									PlaySfxLoc(788);
									// branch -> 0x6ee88
								} else {
									// 0x6ee50
									if (v86 == 1) {
										// 0x6ee5c
										v9 = *(int32_t *)(v75 + 56);
										g34 = 679;
										g38 = *(int32_t *)(v75 + 60);
										PlaySfxLoc(679);
										// branch -> 0x6ee88
									} else {
										// 0x6ee70
										if (v86 == 2) {
											// 0x6ee78
											v9 = *(int32_t *)(v75 + 56);
											g34 = 576;
											g38 = *(int32_t *)(v75 + 60);
											PlaySfxLoc(576);
											// branch -> 0x6ee88
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								// 0x6ee1c
								v35 = g25;
								v9 = v35;
								function_a640c(g35, v35);
								// branch -> 0x6ee94
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x6eda0
					v30 = g26;
					if (v30 < 1) {
						// 0x6ee9c
						if (g28 < g27) {
							// 0x6eea4
							v36 = g36;
							if (v36 == -1) {
								// 0x6eed4
								v10 = *(int32_t *)(v37 + v58 + 112);
								// branch -> 0x6eedc
							} else {
								// 0x6eeac
								v76 = v37 + v58;
								v87 = *(int32_t *)(v76 + 60);
								v77 = g32 + 232 * v36;
								v88 = *(int32_t *)(v77 + 32);
								v89 = *(int32_t *)(v77 + 36);
								v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
								// branch -> 0x6eedc
							}
							// 0x6eedc
							g37 = v10;
							function_a5074(g35);
							// branch -> 0x6ef68
						} else {
							// 0x6eeec
							v60 = v58;
							v39 = v37;
							if (g35 == *(int32_t *)g17) {
								// 0x6eef8
								v59 = (int32_t *)g30;
								*v59 = *v59 - v38;
								v78 = (int32_t *)(v37 + v58 + 396);
								*v78 = *v78 - v9;
								v60 = g31;
								v39 = g33;
								// branch -> 0x6ef14
							}
							// 0x6ef14
							v79 = v39 + v60;
							v8 = v79;
							v40 = g30;
							v61 = (int32_t *)v40;
							v90 = *(int32_t *)(v79 + 408);
							v42 = v40;
							if (*v61 > v90) {
								// 0x6ef28
								*v61 = v90;
								v41 = v8;
								*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
								v42 = g30;
								// branch -> 0x6ef34
							}
							// 0x6ef34
							v44 = g35;
							if (*(int32_t *)v42 > 63) {
								// 0x6ef50
								g38 = 0;
								function_a579c(v44, 0);
								// branch -> 0x6ef5c
							} else {
								// 0x6ef40
								function_a640c(v44, g25);
								// branch -> 0x6ef5c
							}
							// 0x6ef5c
							// branch -> 0x6ef68
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x6eda8
						v93 = 0x51eb851f * (int64_t)(v30 * v38);
						v94 = (int32_t)(v93 / 0x100000000) >> 31;
						v54 = v94 < 0;
						v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
						v9 = v72;
						v56 = v58;
						v31 = v37;
						if (g35 == *(int32_t *)g17) {
							// 0x6edd4
							v55 = (int32_t *)g30;
							*v55 = *v55 - v72;
							v73 = (int32_t *)(v37 + v58 + 396);
							*v73 = *v73 - v9;
							v56 = g31;
							v31 = g33;
							// branch -> 0x6edf0
						}
						// 0x6edf0
						v74 = v31 + v56;
						v8 = v74;
						v32 = g30;
						v57 = (int32_t *)v32;
						v85 = *(int32_t *)(v74 + 408);
						v34 = v32;
						if (*v57 > v85) {
							// 0x6ee04
							*v57 = v85;
							v33 = v8;
							*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
							v34 = g30;
							// branch -> 0x6ee10
						}
						// 0x6ee10
						if (*(int32_t *)v34 > 63) {
							// 0x6ee2c
							v75 = g31 + g33;
							v86 = *(char *)(v75 + 348);
							if (v86 == 0) {
								// 0x6ee3c
								g34 = 788;
								g38 = *(int32_t *)(v75 + 60);
								PlaySfxLoc(788);
								// branch -> 0x6ee88
							} else {
								// 0x6ee50
								if (v86 == 1) {
									// 0x6ee5c
									g34 = 679;
									g38 = *(int32_t *)(v75 + 60);
									PlaySfxLoc(679);
									// branch -> 0x6ee88
								} else {
									// 0x6ee70
									if (v86 == 2) {
										// 0x6ee78
										g34 = 576;
										g38 = *(int32_t *)(v75 + 60);
										PlaySfxLoc(576);
										// branch -> 0x6ee88
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x6ee1c
							function_a640c(g35, g25);
							// branch -> 0x6ee94
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x6eb5c
			v14 = v62;
			if (v62 <= 9) {
				// 0x6eb64
				g29 = 10;
				v14 = 10;
				// branch -> 0x6eb68
			}
			// 0x6eb68
			v63 = *(char *)*(int32_t *)(g23 - 0x77e4);
			v15 = v14;
			if (v63 == 14) {
				// 0x6eb78
				if (v14 <= 19) {
					// 0x6eb80
					g29 = 20;
					v15 = 20;
					// branch -> 0x6eb84
				} else {
					v15 = v14;
				}
			}
			// 0x6eb84
			v16 = v15;
			if (v63 == 15) {
				// 0x6eb8c
				if (v15 <= 24) {
					// 0x6eb94
					g29 = 25;
					v16 = 25;
					// branch -> 0x6eb98
				} else {
					v16 = v15;
				}
			}
			// 0x6eb98
			if (v63 == 16) {
				// 0x6eba0
				if (v16 <= 29) {
					// 0x6eba8
					g29 = 30;
					// branch -> 0x6ebac
				}
			}
			// 0x6ebac
			v64 = g31 + g33;
			v91 = *(int32_t *)v64;
			if (v91 != 0) {
				// 0x6ebb8
				if (v91 != 4) {
					// 0x6ebe8
					g28 = 100;
					v45 = g24 % 256;
					if (v45 == 1) {
						// 0x6ebf4
						g28 = 100;
						// branch -> 0x6ebf8
					}
					// 0x6ebf8
					v17 = g22;
					if (v17 == 59) {
						// 0x6ec00
						g28 = 100;
						// branch -> 0x6ec04
					}
					// 0x6ec04
					v18 = g36;
					if (v18 == -1) {
						// 0x6ec44
						v20 = g33;
						v47 = g31;
						v66 = v47 + v20;
						v48 = v47;
						v23 = v20;
						v22 = *(int32_t *)(v66 + 368) + *(int32_t *)(v66 + 392);
						// branch -> 0x6ec54
					} else {
						// 0x6ec0c
						v19 = g33;
						v46 = g31;
						v65 = v46 + v19;
						v80 = *(char *)(v65 + 436);
						v81 = *(int32_t *)(v65 + 392);
						v82 = *(char *)(g32 + 232 * v18 + 196);
						v83 = *(int32_t *)(v65 + 368);
						v48 = v46;
						v23 = v19;
						v22 = v83 + v81 - 2 * ((int32_t)v82 - (int32_t)v80);
						// branch -> 0x6ec54
					}
					// 0x6ec54
					v12 = v22;
					v21 = v22;
					if (v22 <= 0xffffffff) {
						// 0x6ec5c
						v12 = 0;
						v21 = 0;
						// branch -> 0x6ec60
					}
					// 0x6ec60
					v13 = v12;
					if (v21 >= 101) {
						// 0x6ec68
						v13 = 100;
						// branch -> 0x6ec6c
					}
					// 0x6ec6c
					g27 = v13;
					v84 = *(char *)(g18 + g26 + 17);
					if (v84 == 2) {
						// 0x6eca8
						g26 = (int32_t) * (char *)(v23 + v48 + 455);
						// branch -> 0x6eccc
					} else {
						// 0x6ec7c
						if (v84 > 2) {
							// 0x6ec8c
							if (v84 <= 4) {
								// 0x6ecb8
								g26 = (int32_t) * (char *)(v23 + v48 + 453);
								// branch -> 0x6eccc
								// 0x6eccc
								if (g19 < g29) {
									// 0x6ecd4
									if (v17 == 63) {
										// 0x6ecdc
										// branch -> 0x6eda0
									} else {
										// 0x6ecf8
										v49 = g21 - g20 + 1;
										if (v45 == 0) {
											// 0x6ed00
											g37 = 64 * v49;
											v68 = 64 * g20 + random(75);
											v9 = v68;
											v25 = v68;
											if (g36 == -1) {
												// 0x6ed24
												v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
												v26 = v9;
												if (v50 != 0) {
													// 0x6ed34
													v25 = v26 / 2 | v26 & -0x80000000;
													// branch -> 0x6ed38
												} else {
													v25 = v26;
												}
											}
											// 0x6ed38
											v24 = g33;
											v51 = g31;
											v69 = 64 * *(int32_t *)(v51 + v24 + 0x556c) + v25;
											v9 = v69;
											if (v69 <= 63) {
												// 0x6ed50
												v9 = 64;
												v58 = v51;
												v37 = v24;
												v38 = 64;
												// branch -> 0x6eda0
											} else {
												v58 = v51;
												v37 = v24;
												v38 = v69;
											}
										} else {
											// 0x6ed58
											g37 = v49;
											v70 = g20 + random(75);
											v9 = v70;
											v28 = v70;
											if (g36 == -1) {
												// 0x6ed74
												v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
												v29 = v9;
												if (v52 != 0) {
													// 0x6ed84
													v28 = v29 / 2 | v29 & -0x80000000;
													// branch -> 0x6ed88
												} else {
													v28 = v29;
												}
											}
											// 0x6ed88
											v27 = g33;
											v53 = g31;
											v71 = *(int32_t *)(v53 + v27 + 0x556c) + v28;
											v9 = v71;
											if (v71 <= 63) {
												// 0x6ed9c
												v9 = 64;
												v58 = v53;
												v37 = v27;
												v38 = 64;
												// branch -> 0x6eda0
											} else {
												v58 = v53;
												v37 = v27;
												v38 = v71;
											}
										}
										// 0x6eda0
										v30 = g26;
										if (v30 < 1) {
											// 0x6ee9c
											if (g28 < g27) {
												// 0x6eea4
												v36 = g36;
												if (v36 == -1) {
													// 0x6eed4
													v10 = *(int32_t *)(v37 + v58 + 112);
													// branch -> 0x6eedc
												} else {
													// 0x6eeac
													v76 = v37 + v58;
													v87 = *(int32_t *)(v76 + 60);
													v77 = g32 + 232 * v36;
													v88 = *(int32_t *)(v77 + 32);
													v89 = *(int32_t *)(v77 + 36);
													v10 = GetDirection(*(int32_t *)(v76 + 56), v87, v88, v89);
													// branch -> 0x6eedc
												}
												// 0x6eedc
												g37 = v10;
												function_a5074(g35);
												// branch -> 0x6ef68
											} else {
												// 0x6eeec
												v60 = v58;
												v39 = v37;
												if (g35 == *(int32_t *)g17) {
													// 0x6eef8
													v59 = (int32_t *)g30;
													*v59 = *v59 - v38;
													v78 = (int32_t *)(v37 + v58 + 396);
													*v78 = *v78 - v9;
													v60 = g31;
													v39 = g33;
													// branch -> 0x6ef14
												}
												// 0x6ef14
												v79 = v39 + v60;
												v40 = g30;
												v61 = (int32_t *)v40;
												v90 = *(int32_t *)(v79 + 408);
												v42 = v40;
												if (*v61 > v90) {
													// 0x6ef28
													*v61 = v90;
													v41 = v79;
													*(int32_t *)(v41 + 396) = *(int32_t *)(v41 + 400);
													v42 = g30;
													// branch -> 0x6ef34
												}
												// 0x6ef34
												v44 = g35;
												if (*(int32_t *)v42 > 63) {
													// 0x6ef50
													g38 = 0;
													function_a579c(v44, 0);
													// branch -> 0x6ef5c
												} else {
													// 0x6ef40
													function_a640c(v44, g25);
													// branch -> 0x6ef5c
												}
												// 0x6ef5c
												// branch -> 0x6ef68
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x6eda8
											v93 = 0x51eb851f * (int64_t)(v30 * v38);
											v94 = (int32_t)(v93 / 0x100000000) >> 31;
											v54 = v94 < 0;
											v72 = v38 - ((v94 & -0x8000000 | (int32_t)(v93 / 0x2000000000)) + v54);
											v56 = v58;
											v31 = v37;
											if (g35 == *(int32_t *)g17) {
												// 0x6edd4
												v55 = (int32_t *)g30;
												*v55 = *v55 - v72;
												v73 = (int32_t *)(v37 + v58 + 396);
												*v73 = *v73 - v72;
												v56 = g31;
												v31 = g33;
												// branch -> 0x6edf0
											}
											// 0x6edf0
											v74 = v31 + v56;
											v32 = g30;
											v57 = (int32_t *)v32;
											v85 = *(int32_t *)(v74 + 408);
											v34 = v32;
											if (*v57 > v85) {
												// 0x6ee04
												*v57 = v85;
												v33 = v74;
												*(int32_t *)(v33 + 396) = *(int32_t *)(v33 + 400);
												v34 = g30;
												// branch -> 0x6ee10
											}
											// 0x6ee10
											if (*(int32_t *)v34 > 63) {
												// 0x6ee2c
												v75 = g31 + g33;
												v86 = *(char *)(v75 + 348);
												if (v86 == 0) {
													// 0x6ee3c
													g34 = 788;
													g38 = *(int32_t *)(v75 + 60);
													PlaySfxLoc(788);
													// branch -> 0x6ee88
												} else {
													// 0x6ee50
													if (v86 == 1) {
														// 0x6ee5c
														g34 = 679;
														g38 = *(int32_t *)(v75 + 60);
														PlaySfxLoc(679);
														// branch -> 0x6ee88
													} else {
														// 0x6ee70
														if (v86 == 2) {
															// 0x6ee78
															g34 = 576;
															g38 = *(int32_t *)(v75 + 60);
															PlaySfxLoc(576);
															// branch -> 0x6ee88
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x6ee1c
												function_a640c(g35, g25);
												// branch -> 0x6ee94
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						} else {
							// 0x6ec80
							if (v84 != 0) {
								// 0x6ec98
								g26 = (int32_t) * (char *)(v23 + v48 + 454);
								// branch -> 0x6eccc
								// 0x6eccc
								if (g19 < g29) {
									// 0x6ecd4
									if (v17 == 63) {
										// 0x6ecdc
										// branch -> 0x6eda0
									} else {
										// 0x6ecf8
										v49 = g21 - g20 + 1;
										if (v45 == 0) {
											// 0x6ed00
											g37 = 64 * v49;
											v68 = 64 * g20 + random(75);
											v9 = v68;
											v25 = v68;
											if (g36 == -1) {
												// 0x6ed24
												v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
												v26 = v9;
												if (v50 != 0) {
													// 0x6ed34
													v25 = v26 / 2 | v26 & -0x80000000;
													// branch -> 0x6ed38
												} else {
													v25 = v26;
												}
											}
											// 0x6ed38
											if (64 * *(int32_t *)(g31 + g33 + 0x556c) + v25 <= 63) {
												// 0x6ed50
												// branch -> 0x6eda0
											}
										} else {
											// 0x6ed58
											g37 = v49;
											v70 = g20 + random(75);
											v9 = v70;
											v28 = v70;
											if (g36 == -1) {
												// 0x6ed74
												v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
												v29 = v9;
												if (v52 != 0) {
													// 0x6ed84
													v28 = v29 / 2 | v29 & -0x80000000;
													// branch -> 0x6ed88
												} else {
													v28 = v29;
												}
											}
											// 0x6ed88
											if (*(int32_t *)(g31 + g33 + 0x556c) + v28 <= 63) {
												// 0x6ed9c
												// branch -> 0x6eda0
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// 0x6ecc8
						g26 = 0;
						// branch -> 0x6eccc
					}
					// 0x6eccc
					if (g19 < g29) {
						// 0x6ecd4
						if (v17 == 63) {
							// 0x6ecdc
							// branch -> 0x6eda0
						} else {
							// 0x6ecf8
							v49 = g21 - g20 + 1;
							if (v45 == 0) {
								// 0x6ed00
								g37 = 64 * v49;
								v68 = 64 * g20 + random(75);
								v9 = v68;
								v25 = v68;
								if (g36 == -1) {
									// 0x6ed24
									v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
									v26 = v9;
									if (v50 != 0) {
										// 0x6ed34
										v25 = v26 / 2 | v26 & -0x80000000;
										// branch -> 0x6ed38
									} else {
										v25 = v26;
									}
								}
								// 0x6ed38
								if (64 * *(int32_t *)(g31 + g33 + 0x556c) + v25 <= 63) {
									// 0x6ed50
									// branch -> 0x6eda0
								}
							} else {
								// 0x6ed58
								g37 = v49;
								v70 = g20 + random(75);
								v9 = v70;
								v28 = v70;
								if (g36 == -1) {
									// 0x6ed74
									v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
									v29 = v9;
									if (v52 != 0) {
										// 0x6ed84
										v28 = v29 / 2 | v29 & -0x80000000;
										// branch -> 0x6ed88
									} else {
										v28 = v29;
									}
								}
								// 0x6ed88
								if (*(int32_t *)(g31 + g33 + 0x556c) + v28 <= 63) {
									// 0x6ed9c
									// branch -> 0x6eda0
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// 0x6ebc0
			v11 = 100;
			if (*(char *)(v64 + 312) != 0) {
				// 0x6ebd0
				g37 = 100;
				v11 = random(73);
				// branch -> 0x6ebe8
			}
			// 0x6ebe8
			g28 = v11;
			v45 = g24 % 256;
			if (v45 == 1) {
				// 0x6ebf4
				g28 = 100;
				// branch -> 0x6ebf8
			}
			// 0x6ebf8
			v17 = g22;
			if (v17 == 59) {
				// 0x6ec00
				g28 = 100;
				// branch -> 0x6ec04
			}
			// 0x6ec04
			v18 = g36;
			if (v18 == -1) {
				// 0x6ec44
				v20 = g33;
				v47 = g31;
				v66 = v47 + v20;
				v48 = v47;
				v23 = v20;
				v22 = *(int32_t *)(v66 + 368) + *(int32_t *)(v66 + 392);
				// branch -> 0x6ec54
			} else {
				// 0x6ec0c
				v19 = g33;
				v46 = g31;
				v65 = v46 + v19;
				v80 = *(char *)(v65 + 436);
				v81 = *(int32_t *)(v65 + 392);
				v82 = *(char *)(g32 + 232 * v18 + 196);
				v83 = *(int32_t *)(v65 + 368);
				v48 = v46;
				v23 = v19;
				v22 = v83 + v81 - 2 * ((int32_t)v82 - (int32_t)v80);
				// branch -> 0x6ec54
			}
			// 0x6ec54
			v12 = v22;
			v21 = v22;
			if (v22 <= 0xffffffff) {
				// 0x6ec5c
				v12 = 0;
				v21 = 0;
				// branch -> 0x6ec60
			}
			// 0x6ec60
			v13 = v12;
			if (v21 >= 101) {
				// 0x6ec68
				v13 = 100;
				// branch -> 0x6ec6c
			}
			// 0x6ec6c
			g27 = v13;
			v84 = *(char *)(g18 + g26 + 17);
			if (v84 == 2) {
				// 0x6eca8
				g26 = (int32_t) * (char *)(v23 + v48 + 455);
				// branch -> 0x6eccc
			} else {
				// 0x6ec7c
				if (v84 > 2) {
					// 0x6ec8c
					if (v84 <= 4) {
						// 0x6ecb8
						g26 = (int32_t) * (char *)(v23 + v48 + 453);
						// branch -> 0x6eccc
						// 0x6eccc
						if (g19 < g29) {
							// 0x6ecd4
							if (v17 == 63) {
								// 0x6ecdc
								// branch -> 0x6eda0
							} else {
								// 0x6ecf8
								v49 = g21 - g20 + 1;
								if (v45 == 0) {
									// 0x6ed00
									g37 = 64 * v49;
									v68 = 64 * g20 + random(75);
									v9 = v68;
									v25 = v68;
									if (g36 == -1) {
										// 0x6ed24
										v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
										v26 = v9;
										if (v50 != 0) {
											// 0x6ed34
											v25 = v26 / 2 | v26 & -0x80000000;
											// branch -> 0x6ed38
										} else {
											v25 = v26;
										}
									}
									// 0x6ed38
									if (64 * *(int32_t *)(g31 + g33 + 0x556c) + v25 <= 63) {
										// 0x6ed50
										// branch -> 0x6eda0
									}
								} else {
									// 0x6ed58
									g37 = v49;
									v70 = g20 + random(75);
									v9 = v70;
									v28 = v70;
									if (g36 == -1) {
										// 0x6ed74
										v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
										v29 = v9;
										if (v52 != 0) {
											// 0x6ed84
											v28 = v29 / 2 | v29 & -0x80000000;
											// branch -> 0x6ed88
										} else {
											v28 = v29;
										}
									}
									// 0x6ed88
									if (*(int32_t *)(g31 + g33 + 0x556c) + v28 <= 63) {
										// 0x6ed9c
										// branch -> 0x6eda0
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				} else {
					// 0x6ec80
					if (v84 != 0) {
						// 0x6ec98
						g26 = (int32_t) * (char *)(v23 + v48 + 454);
						// branch -> 0x6eccc
						// 0x6eccc
						if (g19 < g29) {
							// 0x6ecd4
							if (v17 == 63) {
								// 0x6ecdc
								// branch -> 0x6eda0
							} else {
								// 0x6ecf8
								v49 = g21 - g20 + 1;
								if (v45 == 0) {
									// 0x6ed00
									g37 = 64 * v49;
									v68 = 64 * g20 + random(75);
									v9 = v68;
									v25 = v68;
									if (g36 == -1) {
										// 0x6ed24
										v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
										v26 = v9;
										if (v50 != 0) {
											// 0x6ed34
											v25 = v26 / 2 | v26 & -0x80000000;
											// branch -> 0x6ed38
										} else {
											v25 = v26;
										}
									}
									// 0x6ed38
									if (64 * *(int32_t *)(g31 + g33 + 0x556c) + v25 <= 63) {
										// 0x6ed50
										// branch -> 0x6eda0
									}
								} else {
									// 0x6ed58
									g37 = v49;
									v70 = g20 + random(75);
									v9 = v70;
									v28 = v70;
									if (g36 == -1) {
										// 0x6ed74
										v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
										v29 = v9;
										if (v52 != 0) {
											// 0x6ed84
											v28 = v29 / 2 | v29 & -0x80000000;
											// branch -> 0x6ed88
										} else {
											v28 = v29;
										}
									}
									// 0x6ed88
									if (*(int32_t *)(g31 + g33 + 0x556c) + v28 <= 63) {
										// 0x6ed9c
										// branch -> 0x6eda0
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0x6ecc8
				g26 = 0;
				// branch -> 0x6eccc
			}
			// 0x6eccc
			if (g19 < g29) {
				// 0x6ecd4
				if (v17 == 63) {
					// 0x6ecdc
					// branch -> 0x6eda0
				} else {
					// 0x6ecf8
					v49 = g21 - g20 + 1;
					if (v45 == 0) {
						// 0x6ed00
						g37 = 64 * v49;
						v68 = 64 * g20 + random(75);
						v25 = v68;
						if (g36 == -1) {
							// 0x6ed24
							v50 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
							v26 = v68;
							if (v50 != 0) {
								// 0x6ed34
								v25 = v26 / 2 | v26 & -0x80000000;
								// branch -> 0x6ed38
							} else {
								v25 = v26;
							}
						}
						// 0x6ed38
						if (64 * *(int32_t *)(g31 + g33 + 0x556c) + v25 <= 63) {
							// 0x6ed50
							// branch -> 0x6eda0
						}
					} else {
						// 0x6ed58
						g37 = v49;
						v70 = g20 + random(75);
						v28 = v70;
						if (g36 == -1) {
							// 0x6ed74
							v52 = __asm_rlwinm_(*(int32_t *)(g31 + g33 + 0x5568), 0, 3, 3);
							v29 = v70;
							if (v52 != 0) {
								// 0x6ed84
								v28 = v29 / 2 | v29 & -0x80000000;
								// branch -> 0x6ed88
							} else {
								v28 = v29;
							}
						}
						// 0x6ed88
						if (*(int32_t *)(g31 + g33 + 0x556c) + v28 <= 63) {
							// 0x6ed9c
							// branch -> 0x6eda0
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

// Address range: 0x6ef7c - 0x6f3d4
int32_t function_6ef7c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = g10; // 0x6ef80
	g36 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0x6ef88
	g33 = v2;
	int32_t v3 = 0x55ec * a2; // 0x6ef8c
	g31 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x70e8); // 0x6ef90
	g32 = v4;
	g21 = a1;
	g35 = *(int32_t *)(g23 - 0x77ac);
	g22 = a3;
	int32_t v5 = v2 + v3; // 0x6efa0
	g24 = a4;
	g27 = a5;
	g29 = a6;
	g25 = a7;
	if (*(char *)(v5 + 313) != 0 || a6 == 53) {
		// 0x6efc8
		// branch -> 0x6f3c0
		// 0x6f3c0
		g10 = v1;
		return 0;
	}
	int32_t v6 = 28 * a6;
	int32_t v7;
	if (*(char *)(v5 + 284) % 2 == 0) {
		// 0x6efe0
		v7 = v6 + v4;
		// branch -> 0x6f008
	} else {
		int32_t v8 = v6 + v4; // 0x6eff0
		if (*(char *)(v8 + 16) == 0) {
			// 0x6f000
			// branch -> 0x6f3c0
			// 0x6f3c0
			g10 = v1;
			return 0;
		}
		v7 = v8;
	}
	// 0x6f008
	g28 = v6;
	unsigned char v9 = *(char *)(v7 + 17); // 0x6f010
	int32_t v10;
	int32_t v11;
	int32_t v12; // 0x6f08c
	int32_t v13; // 0x6f0cc
	int32_t v14; // 0x6f11c
	int32_t v15; // 0x6f160
	int32_t v16;
	int32_t v17; // 0x6f188
	int32_t v18; // 0x6f1c4
	int32_t v19;
	int32_t v20;       // 0x6f244
	int32_t v21;       // 0x6f294
	int32_t v22;       // 0x6f298
	int32_t v23;       // 0x6f2a4
	int32_t v24;       // 0x6f2a8
	int32_t v25;       // 0x6f358
	int32_t v26;       // 0x6f394
	int32_t v27;       // 0x6f3a8
	int32_t v28;       // 0x6f07c
	int32_t v29;       // 0x6f08c
	int32_t v30;       // 0x6f090
	int32_t v31;       // 0x6f0b0
	int32_t v32;       // 0x6f0fc
	int32_t v33;       // 0x6f11c
	int32_t v34;       // 0x6f16c
	int32_t v35;       // 0x6f188
	int32_t v36;       // 0x6f1c0
	int32_t v37;       // 0x6f1c4
	int32_t v38;       // 0x6f1c8
	int32_t v39;       // 0x6f278
	int32_t v40;       // 0x6f294
	int32_t v41;       // 0x6f2cc
	int32_t v42;       // 0x6f358
	int32_t v43;       // 0x6f35c
	int32_t v44;       // 0x6f360
	int32_t v45;       // 0x6f368
	int32_t v46;       // 0x6f074
	int32_t v47;       // 0x6f090
	int32_t v48;       // 0x6f0b4
	int32_t v49;       // 0x6f0cc
	int32_t v50;       // 0x6f0d0
	int32_t v51;       // 0x6f0fc
	int32_t v52;       // 0x6f124
	int32_t v53;       // 0x6f148
	int32_t v54;       // 0x6f174
	int32_t v55;       // 0x6f1cc
	int32_t v56;       // 0x6f1e4
	int32_t v57;       // 0x6f1f0
	int32_t v58;       // 0x6f22c
	int32_t v59;       // 0x6f240
	int32_t v60;       // 0x6f248
	int32_t v61;       // 0x6f254
	int32_t v62;       // 0x6f27c
	int32_t v63;       // 0x6f288
	int32_t v64;       // 0x6f2d4
	int32_t v65;       // 0x6f2ec
	int32_t v66;       // 0x6f0a0
	int32_t v67;       // 0x6f0a8
	char v68;          // 0x6f0c0
	unsigned char v69; // 0x6f0c8
	int32_t v70;       // 0x6f0d8
	int32_t v71;       // 0x6f26c
	unsigned char v72; // 0x6f2f0
	uint64_t v73;      // 0x6f0a4
	int32_t v74;       // 0x6f0b8
	int32_t v75;       // 0x6f120
	int32_t v76;       // 0x6f174
	unsigned char v77; // 0x6f1d4
	uint64_t v78;      // 0x6f224
	uint64_t v79;      // 0x6f270
	uint64_t v80;      // 0x6f2c4
	int32_t v81;       // 0x6f364
	int32_t v82;       // 0x6f368
	int32_t v83;       // 0x6f36c
	int32_t v84;       // 0x6f274
	int32_t v85;       // 0x6f2c8
	int32_t v86;       // 0x6f0bc
	int32_t v87;       // 0x6f2a4
	if (v9 == 2) {
		// 0x6f048
		g26 = (int32_t) * (char *)(v5 + 455);
		// branch -> 0x6f06c
	} else {
		// 0x6f01c
		if (v9 > 2) {
			// 0x6f02c
			if (v9 <= 4) {
				// 0x6f058
				g26 = (int32_t) * (char *)(v5 + 453);
				// branch -> 0x6f06c
				// 0x6f06c
				g37 = 100;
				v46 = random(69);
				v28 = g28 + g32 + 16;
				g32 = v28;
				if (*(char *)v28 == 0) {
					// 0x6f08c
					v12 = g33;
					v29 = v12 + 368;
					v30 = g31;
					v47 = v30 + v12;
					v66 = *(int32_t *)(v47 + 0x554c);
					v73 = 0x66666667 * (int64_t) * (int32_t *)(v30 + v29);
					v67 = *(int32_t *)(v47 + 0x5558);
					v31 = 0x55ec * g21;
					v48 = v31 + v12;
					v74 = *(int32_t *)(v31 + v29);
					v86 = (int32_t)(v73 / 0x100000000) & -0x80000000 | (int32_t)(v73 / 0x200000000);
					v68 = *(char *)(v48 + 436);
					v69 = *(char *)(v48 + 348);
					v13 = g27;
					v49 = v13 * v13;
					v50 = v86 + (int32_t)(v73 / 0x8000000000000000);
					v70 = *(int32_t *)(v48 + 0x5554);
					v51 = 50 - (v67 + v66 + v50) + v74 + (int32_t)v68 + v70 - (v49 / 2 | v49 & -0x80000000);
					v32 = v69 == 1 ? v51 + 20 : v51;
					if (v69 == 0) {
						// 0x6f110
						v35 = v30;
						v17 = v12;
						v16 = v32 + 10;
						// branch -> 0x6f154
					} else {
						v35 = v30;
						v17 = v12;
						v16 = v32;
					}
				} else {
					// 0x6f118
					v14 = g33;
					v33 = g31;
					v75 = (int32_t) * (char *)(v33 + v14 + 436);
					v52 = v14 + 0x55ec * g21;
					v53 = *(int32_t *)(v52 + 360) + 50 - 0x1000000 * v75 / 0x800000 - g27;
					if (*(char *)(v52 + 348) == 2) {
						// 0x6f150
						v35 = v33;
						v17 = v14;
						v16 = v53 + 20;
						// branch -> 0x6f154
					} else {
						v35 = v33;
						v17 = v14;
						v16 = v53;
					}
				}
				// 0x6f154
				v15 = v16;
				if (v16 <= 4) {
					// 0x6f15c
					v15 = 5;
					// branch -> 0x6f160
				}
				// 0x6f160
				v34 = v15;
				if (v15 >= 96) {
					// 0x6f168
					v34 = 95;
					// branch -> 0x6f16c
				}
				// 0x6f16c
				if (v46 >= v34) {
					// 0x6f3bc
					// branch -> 0x6f3c0
					// 0x6f3c0
					g10 = v1;
					return 0;
				}
				// 0x6f174
				v54 = v17 + v35;
				v76 = *(int32_t *)v54;
				if (v76 != 0) {
					// 0x6f180
					if (v76 != 4) {
						// 0x6f1b0
						g28 = 100;
						if (g25 % 256 == 1) {
							// 0x6f1bc
							g28 = 100;
							// branch -> 0x6f1c0
						}
						// 0x6f1c0
						v36 = 0x55ec * g21;
						g30 = v36;
						v18 = g33;
						v37 = v18 + 436;
						v38 = g31;
						v55 = v38 + v18;
						v77 = *(char *)(v37 + v36);
						v56 = (int32_t)v77 - (int32_t) * (char *)(v38 + v37);
						v57 = *(int32_t *)(v55 + 368) + *(int32_t *)(v55 + 392) - 2 * v56;
						v19 = v57 < 0 ? 0 : v57;
						v10 = v19;
						if (v19 >= 101) {
							// 0x6f208
							v10 = 100;
							// branch -> 0x6f20c
						}
						// 0x6f20c
						g27 = v10;
						if (g29 == 63) {
							// 0x6f214
							v78 = 0x55555556 * (int64_t) * (int32_t *)(v55 + 404);
							v58 = (int32_t)(v78 / 0x100000000) + (int32_t)(v78 / 0x8000000000000000);
							g29 = v58;
							v23 = v58;
							v22 = g32;
							// branch -> 0x6f298
						} else {
							// 0x6f234
							g37 = 1 - g22 + g24;
							v59 = random(70);
							v20 = g32;
							v60 = g22 + v59;
							g29 = v60;
							v21 = v60;
							if (*(char *)v20 == 0) {
								// 0x6f254
								v61 = g30 + g33;
								v71 = *(int32_t *)(v61 + 0x555c);
								v79 = 0x51eb851f * (int64_t)(*(int32_t *)(v61 + 0x5550) * v60);
								v84 = (int32_t)(v79 / 0x100000000) >> 31;
								v39 = v84 < 0;
								v62 = (v84 & -0x8000000 | (int32_t)(v79 / 0x2000000000)) + v39;
								v63 = *(int32_t *)(v61 + 388) + v60 + v71 + v62;
								g29 = v63;
								v21 = v63;
								// branch -> 0x6f28c
							}
							// 0x6f28c
							if (g25 % 256 == 0) {
								// 0x6f294
								v40 = 64 * v21;
								g29 = v40;
								v23 = v40;
								v22 = v20;
								// branch -> 0x6f298
							} else {
								v23 = v21;
								v22 = v20;
							}
						}
						// 0x6f298
						v26 = v23;
						if (*(char *)v22 != 0) {
							// 0x6f2a4
							v87 = v23 / 2 | v23 & -0x80000000;
							g29 = v87;
							v26 = v87;
							// branch -> 0x6f2a8
						}
						// 0x6f2a8
						v24 = g26;
						if (v24 < 1) {
							// 0x6f350
							if (g28 < g27) {
								// 0x6f358
								v25 = g33;
								v42 = v25 + 60;
								v43 = v25 + 56;
								v44 = g31;
								v81 = *(int32_t *)(v44 + v42);
								v45 = g30;
								v82 = *(int32_t *)(v45 + v43);
								v83 = *(int32_t *)(v45 + v42);
								g37 = GetDirection(*(int32_t *)(v44 + v43), v81, v82, v83);
								function_a5074(g36);
								// branch -> 0x6f3c0
							} else {
								// 0x6f388
								v27 = v26;
								if (g21 == *(int32_t *)g35) {
									// 0x6f394
									function_8c028(1, (char)g36, v26);
									v27 = g29;
									// branch -> 0x6f3a4
								}
								// 0x6f3a4
								g38 = 0;
								function_a579c(g36, v27);
								// branch -> 0x6f3c0
							}
							// 0x6f3c0
							g10 = v1;
							return 1;
						}
						// 0x6f2b0
						v80 = 0x51eb851f * (int64_t)(v24 * v26);
						v85 = (int32_t)(v80 / 0x100000000) >> 31;
						v41 = v85 < 0;
						v64 = v26 - ((v85 & -0x8000000 | (int32_t)(v80 / 0x2000000000)) + v41);
						g29 = v64;
						if (g21 == *(int32_t *)g35) {
							// 0x6f2dc
							function_8c028(1, (char)g36, v64);
							// branch -> 0x6f2ec
						}
						// 0x6f2ec
						v65 = g30 + g33;
						v72 = *(char *)(v65 + 348);
						if (v72 != 0) {
							// 0x6f310
							if (v72 == 1) {
								// 0x6f31c
								g34 = 679;
								g38 = *(int32_t *)(v65 + 60);
								PlaySfxLoc(679);
								// branch -> 0x6f348
							} else {
								// 0x6f330
								if (v72 == 2) {
									// 0x6f338
									g34 = 576;
									g38 = *(int32_t *)(v65 + 60);
									PlaySfxLoc(576);
									// branch -> 0x6f348
								}
							}
							// 0x6f348
							// branch -> 0x6f3c0
							// 0x6f3c0
							g10 = v1;
							return 1;
						}
						// 0x6f2fc
						g34 = 788;
						g38 = *(int32_t *)(v65 + 60);
						PlaySfxLoc(788);
						// branch -> 0x6f348
						// 0x6f348
						// branch -> 0x6f3c0
						// 0x6f3c0
						g10 = v1;
						return 1;
					}
				}
				// 0x6f188
				v11 = 100;
				if (*(char *)(v54 + 312) != 0) {
					// 0x6f198
					g37 = 100;
					v11 = random(73);
					// branch -> 0x6f1b0
				}
				// 0x6f1b0
				g28 = v11;
				if (g25 % 256 == 1) {
					// 0x6f1bc
					g28 = 100;
					// branch -> 0x6f1c0
				}
				// 0x6f1c0
				v36 = 0x55ec * g21;
				g30 = v36;
				v18 = g33;
				v37 = v18 + 436;
				v38 = g31;
				v55 = v38 + v18;
				v77 = *(char *)(v37 + v36);
				v56 = (int32_t)v77 - (int32_t) * (char *)(v38 + v37);
				v57 = *(int32_t *)(v55 + 368) + *(int32_t *)(v55 + 392) - 2 * v56;
				v19 = v57 < 0 ? 0 : v57;
				v10 = v19;
				if (v19 >= 101) {
					// 0x6f208
					v10 = 100;
					// branch -> 0x6f20c
				}
				// 0x6f20c
				g27 = v10;
				if (g29 == 63) {
					// 0x6f214
					v78 = 0x55555556 * (int64_t) * (int32_t *)(v55 + 404);
					v58 = (int32_t)(v78 / 0x100000000) + (int32_t)(v78 / 0x8000000000000000);
					g29 = v58;
					v23 = v58;
					v22 = g32;
					// branch -> 0x6f298
				} else {
					// 0x6f234
					g37 = 1 - g22 + g24;
					v59 = random(70);
					v20 = g32;
					v60 = g22 + v59;
					g29 = v60;
					v21 = v60;
					if (*(char *)v20 == 0) {
						// 0x6f254
						v61 = g30 + g33;
						v71 = *(int32_t *)(v61 + 0x555c);
						v79 = 0x51eb851f * (int64_t)(*(int32_t *)(v61 + 0x5550) * v60);
						v84 = (int32_t)(v79 / 0x100000000) >> 31;
						v39 = v84 < 0;
						v62 = (v84 & -0x8000000 | (int32_t)(v79 / 0x2000000000)) + v39;
						v63 = *(int32_t *)(v61 + 388) + v60 + v71 + v62;
						g29 = v63;
						v21 = v63;
						// branch -> 0x6f28c
					}
					// 0x6f28c
					if (g25 % 256 == 0) {
						// 0x6f294
						v40 = 64 * v21;
						g29 = v40;
						v23 = v40;
						v22 = v20;
						// branch -> 0x6f298
					} else {
						v23 = v21;
						v22 = v20;
					}
				}
				// 0x6f298
				v26 = v23;
				if (*(char *)v22 != 0) {
					// 0x6f2a4
					v87 = v23 / 2 | v23 & -0x80000000;
					g29 = v87;
					v26 = v87;
					// branch -> 0x6f2a8
				}
				// 0x6f2a8
				v24 = g26;
				if (v24 < 1) {
					// 0x6f350
					if (g28 < g27) {
						// 0x6f358
						v25 = g33;
						v42 = v25 + 60;
						v43 = v25 + 56;
						v44 = g31;
						v81 = *(int32_t *)(v44 + v42);
						v45 = g30;
						v82 = *(int32_t *)(v45 + v43);
						v83 = *(int32_t *)(v45 + v42);
						g37 = GetDirection(*(int32_t *)(v44 + v43), v81, v82, v83);
						function_a5074(g36);
						// branch -> 0x6f3c0
					} else {
						// 0x6f388
						v27 = v26;
						if (g21 == *(int32_t *)g35) {
							// 0x6f394
							function_8c028(1, (char)g36, v26);
							v27 = g29;
							// branch -> 0x6f3a4
						}
						// 0x6f3a4
						g38 = 0;
						function_a579c(g36, v27);
						// branch -> 0x6f3c0
					}
					// 0x6f3c0
					g10 = v1;
					return 1;
				}
				// 0x6f2b0
				v80 = 0x51eb851f * (int64_t)(v24 * v26);
				v85 = (int32_t)(v80 / 0x100000000) >> 31;
				v41 = v85 < 0;
				v64 = v26 - ((v85 & -0x8000000 | (int32_t)(v80 / 0x2000000000)) + v41);
				g29 = v64;
				if (g21 == *(int32_t *)g35) {
					// 0x6f2dc
					function_8c028(1, (char)g36, v64);
					// branch -> 0x6f2ec
				}
				// 0x6f2ec
				v65 = g30 + g33;
				v72 = *(char *)(v65 + 348);
				if (v72 != 0) {
					// 0x6f310
					if (v72 == 1) {
						// 0x6f31c
						g34 = 679;
						g38 = *(int32_t *)(v65 + 60);
						PlaySfxLoc(679);
						// branch -> 0x6f348
					} else {
						// 0x6f330
						if (v72 == 2) {
							// 0x6f338
							g34 = 576;
							g38 = *(int32_t *)(v65 + 60);
							PlaySfxLoc(576);
							// branch -> 0x6f348
						}
					}
					// 0x6f348
					// branch -> 0x6f3c0
					// 0x6f3c0
					g10 = v1;
					return 1;
				}
				// 0x6f2fc
				g34 = 788;
				g38 = *(int32_t *)(v65 + 60);
				PlaySfxLoc(788);
				// branch -> 0x6f348
				// 0x6f348
				// branch -> 0x6f3c0
				// 0x6f3c0
				g10 = v1;
				return 1;
			}
		} else {
			// 0x6f020
			if (v9 != 0) {
				// 0x6f038
				g26 = (int32_t) * (char *)(v5 + 454);
				// branch -> 0x6f06c
				// 0x6f06c
				g37 = 100;
				v46 = random(69);
				v28 = g28 + g32 + 16;
				g32 = v28;
				if (*(char *)v28 == 0) {
					// 0x6f08c
					v12 = g33;
					v29 = v12 + 368;
					v30 = g31;
					v47 = v30 + v12;
					v66 = *(int32_t *)(v47 + 0x554c);
					v73 = 0x66666667 * (int64_t) * (int32_t *)(v30 + v29);
					v67 = *(int32_t *)(v47 + 0x5558);
					v31 = 0x55ec * g21;
					v48 = v31 + v12;
					v74 = *(int32_t *)(v31 + v29);
					v86 = (int32_t)(v73 / 0x100000000) & -0x80000000 | (int32_t)(v73 / 0x200000000);
					v68 = *(char *)(v48 + 436);
					v69 = *(char *)(v48 + 348);
					v13 = g27;
					v49 = v13 * v13;
					v50 = v86 + (int32_t)(v73 / 0x8000000000000000);
					v70 = *(int32_t *)(v48 + 0x5554);
					v51 = 50 - (v67 + v66 + v50) + v74 + (int32_t)v68 + v70 - (v49 / 2 | v49 & -0x80000000);
					v32 = v69 == 1 ? v51 + 20 : v51;
					if (v69 == 0) {
						// 0x6f110
						v35 = v30;
						v17 = v12;
						v16 = v32 + 10;
						// branch -> 0x6f154
					} else {
						v35 = v30;
						v17 = v12;
						v16 = v32;
					}
				} else {
					// 0x6f118
					v14 = g33;
					v33 = g31;
					v75 = (int32_t) * (char *)(v33 + v14 + 436);
					v52 = v14 + 0x55ec * g21;
					v53 = *(int32_t *)(v52 + 360) + 50 - 0x1000000 * v75 / 0x800000 - g27;
					if (*(char *)(v52 + 348) == 2) {
						// 0x6f150
						v35 = v33;
						v17 = v14;
						v16 = v53 + 20;
						// branch -> 0x6f154
					} else {
						v35 = v33;
						v17 = v14;
						v16 = v53;
					}
				}
				// 0x6f154
				v15 = v16;
				if (v16 <= 4) {
					// 0x6f15c
					v15 = 5;
					// branch -> 0x6f160
				}
				// 0x6f160
				v34 = v15;
				if (v15 >= 96) {
					// 0x6f168
					v34 = 95;
					// branch -> 0x6f16c
				}
				// 0x6f16c
				if (v46 >= v34) {
					// 0x6f3bc
					// branch -> 0x6f3c0
					// 0x6f3c0
					g10 = v1;
					return 0;
				}
				// 0x6f174
				v54 = v17 + v35;
				v76 = *(int32_t *)v54;
				if (v76 != 0) {
					// 0x6f180
					if (v76 != 4) {
						// 0x6f1b0
						g28 = 100;
						if (g25 % 256 == 1) {
							// 0x6f1bc
							g28 = 100;
							// branch -> 0x6f1c0
						}
						// 0x6f1c0
						v36 = 0x55ec * g21;
						g30 = v36;
						v18 = g33;
						v37 = v18 + 436;
						v38 = g31;
						v55 = v38 + v18;
						v77 = *(char *)(v37 + v36);
						v56 = (int32_t)v77 - (int32_t) * (char *)(v38 + v37);
						v57 = *(int32_t *)(v55 + 368) + *(int32_t *)(v55 + 392) - 2 * v56;
						v19 = v57 < 0 ? 0 : v57;
						v10 = v19;
						if (v19 >= 101) {
							// 0x6f208
							v10 = 100;
							// branch -> 0x6f20c
						}
						// 0x6f20c
						g27 = v10;
						if (g29 == 63) {
							// 0x6f214
							v78 = 0x55555556 * (int64_t) * (int32_t *)(v55 + 404);
							v58 = (int32_t)(v78 / 0x100000000) + (int32_t)(v78 / 0x8000000000000000);
							g29 = v58;
							v23 = v58;
							v22 = g32;
							// branch -> 0x6f298
						} else {
							// 0x6f234
							g37 = 1 - g22 + g24;
							v59 = random(70);
							v20 = g32;
							v60 = g22 + v59;
							g29 = v60;
							v21 = v60;
							if (*(char *)v20 == 0) {
								// 0x6f254
								v61 = g30 + g33;
								v71 = *(int32_t *)(v61 + 0x555c);
								v79 = 0x51eb851f * (int64_t)(*(int32_t *)(v61 + 0x5550) * v60);
								v84 = (int32_t)(v79 / 0x100000000) >> 31;
								v39 = v84 < 0;
								v62 = (v84 & -0x8000000 | (int32_t)(v79 / 0x2000000000)) + v39;
								v63 = *(int32_t *)(v61 + 388) + v60 + v71 + v62;
								g29 = v63;
								v21 = v63;
								// branch -> 0x6f28c
							}
							// 0x6f28c
							if (g25 % 256 == 0) {
								// 0x6f294
								v40 = 64 * v21;
								g29 = v40;
								v23 = v40;
								v22 = v20;
								// branch -> 0x6f298
							} else {
								v23 = v21;
								v22 = v20;
							}
						}
						// 0x6f298
						v26 = v23;
						if (*(char *)v22 != 0) {
							// 0x6f2a4
							v87 = v23 / 2 | v23 & -0x80000000;
							g29 = v87;
							v26 = v87;
							// branch -> 0x6f2a8
						}
						// 0x6f2a8
						v24 = g26;
						if (v24 < 1) {
							// 0x6f350
							if (g28 < g27) {
								// 0x6f358
								v25 = g33;
								v42 = v25 + 60;
								v43 = v25 + 56;
								v44 = g31;
								v81 = *(int32_t *)(v44 + v42);
								v45 = g30;
								v82 = *(int32_t *)(v45 + v43);
								v83 = *(int32_t *)(v45 + v42);
								g37 = GetDirection(*(int32_t *)(v44 + v43), v81, v82, v83);
								function_a5074(g36);
								// branch -> 0x6f3c0
							} else {
								// 0x6f388
								v27 = v26;
								if (g21 == *(int32_t *)g35) {
									// 0x6f394
									function_8c028(1, (char)g36, v26);
									v27 = g29;
									// branch -> 0x6f3a4
								}
								// 0x6f3a4
								g38 = 0;
								function_a579c(g36, v27);
								// branch -> 0x6f3c0
							}
							// 0x6f3c0
							g10 = v1;
							return 1;
						}
						// 0x6f2b0
						v80 = 0x51eb851f * (int64_t)(v24 * v26);
						v85 = (int32_t)(v80 / 0x100000000) >> 31;
						v41 = v85 < 0;
						v64 = v26 - ((v85 & -0x8000000 | (int32_t)(v80 / 0x2000000000)) + v41);
						g29 = v64;
						if (g21 == *(int32_t *)g35) {
							// 0x6f2dc
							function_8c028(1, (char)g36, v64);
							// branch -> 0x6f2ec
						}
						// 0x6f2ec
						v65 = g30 + g33;
						v72 = *(char *)(v65 + 348);
						if (v72 != 0) {
							// 0x6f310
							if (v72 == 1) {
								// 0x6f31c
								g34 = 679;
								g38 = *(int32_t *)(v65 + 60);
								PlaySfxLoc(679);
								// branch -> 0x6f348
							} else {
								// 0x6f330
								if (v72 == 2) {
									// 0x6f338
									g34 = 576;
									g38 = *(int32_t *)(v65 + 60);
									PlaySfxLoc(576);
									// branch -> 0x6f348
								}
							}
							// 0x6f348
							// branch -> 0x6f3c0
							// 0x6f3c0
							g10 = v1;
							return 1;
						}
						// 0x6f2fc
						g34 = 788;
						g38 = *(int32_t *)(v65 + 60);
						PlaySfxLoc(788);
						// branch -> 0x6f348
						// 0x6f348
						// branch -> 0x6f3c0
						// 0x6f3c0
						g10 = v1;
						return 1;
					}
				}
				// 0x6f188
				v11 = 100;
				if (*(char *)(v54 + 312) != 0) {
					// 0x6f198
					g37 = 100;
					v11 = random(73);
					// branch -> 0x6f1b0
				}
				// 0x6f1b0
				g28 = v11;
				if (g25 % 256 == 1) {
					// 0x6f1bc
					g28 = 100;
					// branch -> 0x6f1c0
				}
				// 0x6f1c0
				v36 = 0x55ec * g21;
				g30 = v36;
				v18 = g33;
				v37 = v18 + 436;
				v38 = g31;
				v55 = v38 + v18;
				v77 = *(char *)(v37 + v36);
				v56 = (int32_t)v77 - (int32_t) * (char *)(v38 + v37);
				v57 = *(int32_t *)(v55 + 368) + *(int32_t *)(v55 + 392) - 2 * v56;
				v19 = v57 < 0 ? 0 : v57;
				v10 = v19;
				if (v19 >= 101) {
					// 0x6f208
					v10 = 100;
					// branch -> 0x6f20c
				}
				// 0x6f20c
				g27 = v10;
				if (g29 == 63) {
					// 0x6f214
					v78 = 0x55555556 * (int64_t) * (int32_t *)(v55 + 404);
					v58 = (int32_t)(v78 / 0x100000000) + (int32_t)(v78 / 0x8000000000000000);
					g29 = v58;
					v23 = v58;
					v22 = g32;
					// branch -> 0x6f298
				} else {
					// 0x6f234
					g37 = 1 - g22 + g24;
					v59 = random(70);
					v20 = g32;
					v60 = g22 + v59;
					g29 = v60;
					v21 = v60;
					if (*(char *)v20 == 0) {
						// 0x6f254
						v61 = g30 + g33;
						v71 = *(int32_t *)(v61 + 0x555c);
						v79 = 0x51eb851f * (int64_t)(*(int32_t *)(v61 + 0x5550) * v60);
						v84 = (int32_t)(v79 / 0x100000000) >> 31;
						v39 = v84 < 0;
						v62 = (v84 & -0x8000000 | (int32_t)(v79 / 0x2000000000)) + v39;
						v63 = *(int32_t *)(v61 + 388) + v60 + v71 + v62;
						g29 = v63;
						v21 = v63;
						// branch -> 0x6f28c
					}
					// 0x6f28c
					if (g25 % 256 == 0) {
						// 0x6f294
						v40 = 64 * v21;
						g29 = v40;
						v23 = v40;
						v22 = v20;
						// branch -> 0x6f298
					} else {
						v23 = v21;
						v22 = v20;
					}
				}
				// 0x6f298
				v26 = v23;
				if (*(char *)v22 != 0) {
					// 0x6f2a4
					v87 = v23 / 2 | v23 & -0x80000000;
					g29 = v87;
					v26 = v87;
					// branch -> 0x6f2a8
				}
				// 0x6f2a8
				v24 = g26;
				if (v24 < 1) {
					// 0x6f350
					if (g28 < g27) {
						// 0x6f358
						v25 = g33;
						v42 = v25 + 60;
						v43 = v25 + 56;
						v44 = g31;
						v81 = *(int32_t *)(v44 + v42);
						v45 = g30;
						v82 = *(int32_t *)(v45 + v43);
						v83 = *(int32_t *)(v45 + v42);
						g37 = GetDirection(*(int32_t *)(v44 + v43), v81, v82, v83);
						function_a5074(g36);
						// branch -> 0x6f3c0
					} else {
						// 0x6f388
						v27 = v26;
						if (g21 == *(int32_t *)g35) {
							// 0x6f394
							function_8c028(1, (char)g36, v26);
							v27 = g29;
							// branch -> 0x6f3a4
						}
						// 0x6f3a4
						g38 = 0;
						function_a579c(g36, v27);
						// branch -> 0x6f3c0
					}
					// 0x6f3c0
					g10 = v1;
					return 1;
				}
				// 0x6f2b0
				v80 = 0x51eb851f * (int64_t)(v24 * v26);
				v85 = (int32_t)(v80 / 0x100000000) >> 31;
				v41 = v85 < 0;
				v64 = v26 - ((v85 & -0x8000000 | (int32_t)(v80 / 0x2000000000)) + v41);
				g29 = v64;
				if (g21 == *(int32_t *)g35) {
					// 0x6f2dc
					function_8c028(1, (char)g36, v64);
					// branch -> 0x6f2ec
				}
				// 0x6f2ec
				v65 = g30 + g33;
				v72 = *(char *)(v65 + 348);
				if (v72 != 0) {
					// 0x6f310
					if (v72 == 1) {
						// 0x6f31c
						g34 = 679;
						g38 = *(int32_t *)(v65 + 60);
						PlaySfxLoc(679);
						// branch -> 0x6f348
					} else {
						// 0x6f330
						if (v72 == 2) {
							// 0x6f338
							g34 = 576;
							g38 = *(int32_t *)(v65 + 60);
							PlaySfxLoc(576);
							// branch -> 0x6f348
						}
					}
					// 0x6f348
					// branch -> 0x6f3c0
					// 0x6f3c0
					g10 = v1;
					return 1;
				}
				// 0x6f2fc
				g34 = 788;
				g38 = *(int32_t *)(v65 + 60);
				PlaySfxLoc(788);
				// branch -> 0x6f348
				// 0x6f348
				// branch -> 0x6f3c0
				// 0x6f3c0
				g10 = v1;
				return 1;
			}
		}
		// 0x6f068
		g26 = 0;
		// branch -> 0x6f06c
	}
	// 0x6f06c
	g37 = 100;
	v46 = random(69);
	v28 = g28 + g32 + 16;
	g32 = v28;
	if (*(char *)v28 == 0) {
		// 0x6f08c
		v12 = g33;
		v29 = v12 + 368;
		v30 = g31;
		v47 = v30 + v12;
		v66 = *(int32_t *)(v47 + 0x554c);
		v73 = 0x66666667 * (int64_t) * (int32_t *)(v30 + v29);
		v67 = *(int32_t *)(v47 + 0x5558);
		v31 = 0x55ec * g21;
		v48 = v31 + v12;
		v74 = *(int32_t *)(v31 + v29);
		v86 = (int32_t)(v73 / 0x100000000) & -0x80000000 | (int32_t)(v73 / 0x200000000);
		v68 = *(char *)(v48 + 436);
		v69 = *(char *)(v48 + 348);
		v13 = g27;
		v49 = v13 * v13;
		v50 = v86 + (int32_t)(v73 / 0x8000000000000000);
		v70 = *(int32_t *)(v48 + 0x5554);
		v51 = 50 - (v67 + v66 + v50) + v74 + (int32_t)v68 + v70 - (v49 / 2 | v49 & -0x80000000);
		v32 = v69 == 1 ? v51 + 20 : v51;
		if (v69 == 0) {
			// 0x6f110
			v35 = v30;
			v17 = v12;
			v16 = v32 + 10;
			// branch -> 0x6f154
		} else {
			v35 = v30;
			v17 = v12;
			v16 = v32;
		}
	} else {
		// 0x6f118
		v14 = g33;
		v33 = g31;
		v75 = (int32_t) * (char *)(v33 + v14 + 436);
		v52 = v14 + 0x55ec * g21;
		v53 = *(int32_t *)(v52 + 360) + 50 - 0x1000000 * v75 / 0x800000 - g27;
		if (*(char *)(v52 + 348) == 2) {
			// 0x6f150
			v35 = v33;
			v17 = v14;
			v16 = v53 + 20;
			// branch -> 0x6f154
		} else {
			v35 = v33;
			v17 = v14;
			v16 = v53;
		}
	}
	// 0x6f154
	v15 = v16;
	if (v16 <= 4) {
		// 0x6f15c
		v15 = 5;
		// branch -> 0x6f160
	}
	// 0x6f160
	v34 = v15;
	if (v15 >= 96) {
		// 0x6f168
		v34 = 95;
		// branch -> 0x6f16c
	}
	// 0x6f16c
	if (v46 >= v34) {
		// 0x6f3bc
		// branch -> 0x6f3c0
		// 0x6f3c0
		g10 = v1;
		return 0;
	}
	// 0x6f174
	v54 = v17 + v35;
	v76 = *(int32_t *)v54;
	if (v76 != 0) {
		// 0x6f180
		if (v76 != 4) {
			// 0x6f1b0
			g28 = 100;
			if (g25 % 256 == 1) {
				// 0x6f1bc
				g28 = 100;
				// branch -> 0x6f1c0
			}
			// 0x6f1c0
			v36 = 0x55ec * g21;
			g30 = v36;
			v18 = g33;
			v37 = v18 + 436;
			v38 = g31;
			v55 = v38 + v18;
			v77 = *(char *)(v37 + v36);
			v56 = (int32_t)v77 - (int32_t) * (char *)(v38 + v37);
			v57 = *(int32_t *)(v55 + 368) + *(int32_t *)(v55 + 392) - 2 * v56;
			v19 = v57 < 0 ? 0 : v57;
			v10 = v19;
			if (v19 >= 101) {
				// 0x6f208
				v10 = 100;
				// branch -> 0x6f20c
			}
			// 0x6f20c
			g27 = v10;
			if (g29 == 63) {
				// 0x6f214
				v78 = 0x55555556 * (int64_t) * (int32_t *)(v55 + 404);
				v58 = (int32_t)(v78 / 0x100000000) + (int32_t)(v78 / 0x8000000000000000);
				g29 = v58;
				v23 = v58;
				v22 = g32;
				// branch -> 0x6f298
			} else {
				// 0x6f234
				g37 = 1 - g22 + g24;
				v59 = random(70);
				v20 = g32;
				v60 = g22 + v59;
				g29 = v60;
				v21 = v60;
				if (*(char *)v20 == 0) {
					// 0x6f254
					v61 = g30 + g33;
					v71 = *(int32_t *)(v61 + 0x555c);
					v79 = 0x51eb851f * (int64_t)(*(int32_t *)(v61 + 0x5550) * v60);
					v84 = (int32_t)(v79 / 0x100000000) >> 31;
					v39 = v84 < 0;
					v62 = (v84 & -0x8000000 | (int32_t)(v79 / 0x2000000000)) + v39;
					v63 = *(int32_t *)(v61 + 388) + v60 + v71 + v62;
					g29 = v63;
					v21 = v63;
					// branch -> 0x6f28c
				}
				// 0x6f28c
				if (g25 % 256 == 0) {
					// 0x6f294
					v40 = 64 * v21;
					g29 = v40;
					v23 = v40;
					v22 = v20;
					// branch -> 0x6f298
				} else {
					v23 = v21;
					v22 = v20;
				}
			}
			// 0x6f298
			v26 = v23;
			if (*(char *)v22 != 0) {
				// 0x6f2a4
				v87 = v23 / 2 | v23 & -0x80000000;
				g29 = v87;
				v26 = v87;
				// branch -> 0x6f2a8
			}
			// 0x6f2a8
			v24 = g26;
			if (v24 < 1) {
				// 0x6f350
				if (g28 < g27) {
					// 0x6f358
					v25 = g33;
					v42 = v25 + 60;
					v43 = v25 + 56;
					v44 = g31;
					v81 = *(int32_t *)(v44 + v42);
					v45 = g30;
					v82 = *(int32_t *)(v45 + v43);
					v83 = *(int32_t *)(v45 + v42);
					g37 = GetDirection(*(int32_t *)(v44 + v43), v81, v82, v83);
					function_a5074(g36);
					// branch -> 0x6f3c0
				} else {
					// 0x6f388
					v27 = v26;
					if (g21 == *(int32_t *)g35) {
						// 0x6f394
						function_8c028(1, (char)g36, v26);
						v27 = g29;
						// branch -> 0x6f3a4
					}
					// 0x6f3a4
					g38 = 0;
					function_a579c(g36, v27);
					// branch -> 0x6f3c0
				}
				// 0x6f3c0
				g10 = v1;
				return 1;
			}
			// 0x6f2b0
			v80 = 0x51eb851f * (int64_t)(v24 * v26);
			v85 = (int32_t)(v80 / 0x100000000) >> 31;
			v41 = v85 < 0;
			v64 = v26 - ((v85 & -0x8000000 | (int32_t)(v80 / 0x2000000000)) + v41);
			g29 = v64;
			if (g21 == *(int32_t *)g35) {
				// 0x6f2dc
				function_8c028(1, (char)g36, v64);
				// branch -> 0x6f2ec
			}
			// 0x6f2ec
			v65 = g30 + g33;
			v72 = *(char *)(v65 + 348);
			if (v72 != 0) {
				// 0x6f310
				if (v72 == 1) {
					// 0x6f31c
					g34 = 679;
					g38 = *(int32_t *)(v65 + 60);
					PlaySfxLoc(679);
					// branch -> 0x6f348
				} else {
					// 0x6f330
					if (v72 == 2) {
						// 0x6f338
						g34 = 576;
						g38 = *(int32_t *)(v65 + 60);
						PlaySfxLoc(576);
						// branch -> 0x6f348
					}
				}
				// 0x6f348
				// branch -> 0x6f3c0
				// 0x6f3c0
				g10 = v1;
				return 1;
			}
			// 0x6f2fc
			g34 = 788;
			g38 = *(int32_t *)(v65 + 60);
			PlaySfxLoc(788);
			// branch -> 0x6f348
			// 0x6f348
			// branch -> 0x6f3c0
			// 0x6f3c0
			g10 = v1;
			return 1;
		}
	}
	// 0x6f188
	v11 = 100;
	if (*(char *)(v54 + 312) != 0) {
		// 0x6f198
		g37 = 100;
		v11 = random(73);
		// branch -> 0x6f1b0
	}
	// 0x6f1b0
	g28 = v11;
	if (g25 % 256 == 1) {
		// 0x6f1bc
		g28 = 100;
		// branch -> 0x6f1c0
	}
	// 0x6f1c0
	v36 = 0x55ec * g21;
	g30 = v36;
	v18 = g33;
	v37 = v18 + 436;
	v38 = g31;
	v55 = v38 + v18;
	v77 = *(char *)(v37 + v36);
	v56 = (int32_t)v77 - (int32_t) * (char *)(v38 + v37);
	v57 = *(int32_t *)(v55 + 368) + *(int32_t *)(v55 + 392) - 2 * v56;
	v19 = v57 < 0 ? 0 : v57;
	v10 = v19;
	if (v19 >= 101) {
		// 0x6f208
		v10 = 100;
		// branch -> 0x6f20c
	}
	// 0x6f20c
	g27 = v10;
	if (g29 == 63) {
		// 0x6f214
		v78 = 0x55555556 * (int64_t) * (int32_t *)(v55 + 404);
		v58 = (int32_t)(v78 / 0x100000000) + (int32_t)(v78 / 0x8000000000000000);
		g29 = v58;
		v23 = v58;
		v22 = g32;
		// branch -> 0x6f298
	} else {
		// 0x6f234
		g37 = 1 - g22 + g24;
		v59 = random(70);
		v20 = g32;
		v60 = g22 + v59;
		g29 = v60;
		v21 = v60;
		if (*(char *)v20 == 0) {
			// 0x6f254
			v61 = g30 + g33;
			v71 = *(int32_t *)(v61 + 0x555c);
			v79 = 0x51eb851f * (int64_t)(*(int32_t *)(v61 + 0x5550) * v60);
			v84 = (int32_t)(v79 / 0x100000000) >> 31;
			v39 = v84 < 0;
			v62 = (v84 & -0x8000000 | (int32_t)(v79 / 0x2000000000)) + v39;
			v63 = *(int32_t *)(v61 + 388) + v60 + v71 + v62;
			g29 = v63;
			v21 = v63;
			// branch -> 0x6f28c
		}
		// 0x6f28c
		if (g25 % 256 == 0) {
			// 0x6f294
			v40 = 64 * v21;
			g29 = v40;
			v23 = v40;
			v22 = v20;
			// branch -> 0x6f298
		} else {
			v23 = v21;
			v22 = v20;
		}
	}
	// 0x6f298
	v26 = v23;
	if (*(char *)v22 != 0) {
		// 0x6f2a4
		v87 = v23 / 2 | v23 & -0x80000000;
		g29 = v87;
		v26 = v87;
		// branch -> 0x6f2a8
	}
	// 0x6f2a8
	v24 = g26;
	if (v24 < 1) {
		// 0x6f350
		if (g28 < g27) {
			// 0x6f358
			v25 = g33;
			v42 = v25 + 60;
			v43 = v25 + 56;
			v44 = g31;
			v81 = *(int32_t *)(v44 + v42);
			v45 = g30;
			v82 = *(int32_t *)(v45 + v43);
			v83 = *(int32_t *)(v45 + v42);
			g37 = GetDirection(*(int32_t *)(v44 + v43), v81, v82, v83);
			function_a5074(g36);
			// branch -> 0x6f3c0
		} else {
			// 0x6f388
			v27 = v26;
			if (g21 == *(int32_t *)g35) {
				// 0x6f394
				function_8c028(1, (char)g36, v26);
				v27 = g29;
				// branch -> 0x6f3a4
			}
			// 0x6f3a4
			g38 = 0;
			function_a579c(g36, v27);
			// branch -> 0x6f3c0
		}
		// 0x6f3c0
		g10 = v1;
		return 1;
	}
	// 0x6f2b0
	v80 = 0x51eb851f * (int64_t)(v24 * v26);
	v85 = (int32_t)(v80 / 0x100000000) >> 31;
	v41 = v85 < 0;
	v64 = v26 - ((v85 & -0x8000000 | (int32_t)(v80 / 0x2000000000)) + v41);
	g29 = v64;
	if (g21 == *(int32_t *)g35) {
		// 0x6f2dc
		function_8c028(1, (char)g36, v64);
		// branch -> 0x6f2ec
	}
	// 0x6f2ec
	v65 = g30 + g33;
	v72 = *(char *)(v65 + 348);
	if (v72 != 0) {
		// 0x6f310
		if (v72 == 1) {
			// 0x6f31c
			g34 = 679;
			g38 = *(int32_t *)(v65 + 60);
			PlaySfxLoc(679);
			// branch -> 0x6f348
		} else {
			// 0x6f330
			if (v72 == 2) {
				// 0x6f338
				g34 = 576;
				g38 = *(int32_t *)(v65 + 60);
				PlaySfxLoc(576);
				// branch -> 0x6f348
			}
		}
		// 0x6f348
		// branch -> 0x6f3c0
		// 0x6f3c0
		g10 = v1;
		return 1;
	}
	// 0x6f2fc
	g34 = 788;
	g38 = *(int32_t *)(v65 + 60);
	PlaySfxLoc(788);
	// branch -> 0x6f348
	// 0x6f348
	// branch -> 0x6f3c0
	// 0x6f3c0
	g10 = v1;
	return 1;
}

// Address range: 0x6f3d4 - 0x6f8b4
int32_t function_6f3d4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g10; // 0x6f3d8
	g28 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x6f3e0
	g26 = v2;
	int32_t v3 = 180 * a1; // 0x6f3e4
	g35 = v3;
	g36 = *(int32_t *)(g23 - 0x7688);
	g29 = a3;
	g25 = *(int32_t *)(g23 - 0x7680);
	g30 = a4;
	int32_t v4 = v3 + v2;                    // 0x6f3f8
	int32_t v5 = *(int32_t *)(g23 - 0x767c); // 0x6f3fc
	g31 = a5;
	int32_t v6 = g41; // 0x6f404
	g32 = v6;
	g33 = g42;
	int32_t v7 = *(int32_t *)(g23 - 0x7754); // 0x6f410
	int32_t v8 = v4 + 56;                    // 0x6f418
	char v9 = *(char *)v8;                   // 0x6f418
	g27 = v8;
	int32_t result2; // r3
	int32_t v10;
	int32_t v11;       // 0x6f79c
	int32_t v12;       // 0x6f7a0
	int32_t v13;       // 0x6f824
	int32_t v14;       // 0x6f828
	int32_t v15;       // 0x6f830
	int32_t result;    // 0x6f8b0
	int32_t v16;       // 0x6f534
	int32_t v17;       // 0x6f7a8
	int32_t v18;       // 0x6f824
	int32_t v19;       // 0x6f520
	int32_t v20;       // 0x6f7b0
	int32_t v21;       // 0x6f7dc
	int32_t v22;       // 0x6f834
	int32_t v23;       // 0x6f85c
	int32_t v24;       // 0x6f868
	int32_t v25;       // 0x6f468
	int32_t v26;       // 0x6f470
	int32_t v27;       // 0x6f52c
	int32_t v28;       // 0x6f7a0
	int32_t v29;       // 0x6f820
	int32_t v30;       // 0x6f888
	uint16_t v31;      // 0x6f44c
	int32_t v32;       // 0x6f464
	unsigned char v33; // 0x6f4fc
	unsigned char v34; // 0x6f7ac
	int32_t v35;       // 0x6f878
	int32_t v36;       // 0x6f44c
	int32_t v37;       // 0x6f838
	if (v9 == 4) {
		// 0x6f43c
		v31 = *(int16_t *)(*(int32_t *)v5 + 2 * v6 + 224 * a5);
		v36 = v31;
		if (v31 >= 1) {
			// 0x6f458
			g24 = v4;
			v32 = *(int32_t *)v4;
			if (v9 == 4) {
				// 0x6f460
				v25 = *(int32_t *)(v4 + 120);
				v26 = *(int32_t *)(v4 + 136);
				if (function_6e548(v25, v36 - 1, a2, a3, v26, v32, a4) != 0) {
					// 0x6f48c
					if (g33 % 256 == 0) {
						// 0x6f494
						*(int32_t *)(g24 + 116) = 0;
						// branch -> 0x6f49c
					}
					// 0x6f49c
					*(int32_t *)(g35 + g26 + 132) = 1;
					// branch -> 0x6f4f0
				}
			} else {
				// 0x6f4ac
				if (function_6e2b8(v36 - 1, a2, a3, *(int32_t *)(v4 + 136), v32, a4) != 0) {
					// 0x6f4d4
					if (g33 % 256 == 0) {
						// 0x6f4dc
						*(int32_t *)(g24 + 116) = 0;
						// branch -> 0x6f4e4
					}
					// 0x6f4e4
					*(int32_t *)(g35 + g26 + 132) = 1;
					// branch -> 0x6f4f0
				}
			}
			// 0x6f4f0
			v33 = *(char *)(g32 + 112 * g31 + *(int32_t *)g25);
			if (v33 >= 1) {
				// 0x6f508
				g13 = *(char *)g27 == 4;
				v19 = g35 + g26;
				v27 = *(int32_t *)(v19 + 136);
				v16 = (int32_t)v33 - 1;
				if (PlayerMHit(v16, -1, v27, g28, g29, *(int32_t *)v19, g30) != 0) {
					// 0x6f550
					if (g33 % 256 == 0) {
						// 0x6f558
						*(int32_t *)(g24 + 116) = 0;
						// branch -> 0x6f560
					}
					// 0x6f560
					*(int32_t *)(g35 + g26 + 132) = 1;
					// branch -> 0x6f79c
				}
			}
			// 0x6f79c
			v11 = g31;
			v12 = g23;
			v28 = *(int32_t *)(v12 - 0x7684);
			v17 = g32;
			v34 = *(char *)(v17 + 112 * v11 + *(int32_t *)v28);
			v20 = v34;
			v15 = v17;
			v13 = v11;
			v14 = v12;
			if (v34 != 0) {
				// 0x6f7b8
				if (0x1000000 * (int32_t)v34 < 0) {
					// 0x6f7cc
					v10 = -1 - v20;
					// branch -> 0x6f7d8
				} else {
					// 0x6f7c0
					v10 = v20 - 1;
					// branch -> 0x6f7d8
				}
				// 0x6f7d8
				g37 = v10;
				v21 = g36 + 120 * v10;
				if (*(int32_t *)(v21 + 60) == 0) {
					// 0x6f7ec
					if (*(char *)(v21 + 52) == 1) {
						// 0x6f7f8
						g34 = -1;
						function_9d008();
						// branch -> 0x6f800
					}
					// 0x6f800
					if (g33 % 256 == 0) {
						// 0x6f808
						*(int32_t *)(g35 + g26 + 116) = 0;
						// branch -> 0x6f814
					}
					// 0x6f814
					*(int32_t *)(g35 + g26 + 132) = 0;
					v15 = g32;
					v13 = g31;
					v14 = g23;
					// branch -> 0x6f820
				} else {
					v15 = v17;
					v13 = v11;
					v14 = v12;
				}
			}
			// 0x6f820
			v29 = *(int32_t *)(v14 - 0x757c);
			v18 = 224 * v13;
			result2 = v18;
			v22 = v18 + 2 * v15;
			v37 = (int32_t) * (int16_t *)(*(int32_t *)v29 + v22);
			if (*(char *)(v37 + *(int32_t *)(v14 - 0x7234)) != 0) {
				// 0x6f848
				if (g33 % 256 == 0) {
					// 0x6f850
					*(int32_t *)(g35 + g26 + 116) = 0;
					// branch -> 0x6f85c
				}
				// 0x6f85c
				v23 = g35 + g26;
				result2 = v23;
				*(int32_t *)(v23 + 132) = 0;
				// branch -> 0x6f868
			}
			// 0x6f868
			v24 = g35 + g26;
			if (*(int32_t *)(v24 + 116) == 0) {
				// 0x6f878
				v35 = *(int32_t *)v24;
				v30 = *(int32_t *)(*(int32_t *)(g23 - 0x70e8) + 28 * v35 + 24);
				g34 = v30;
				if (v30 != -1) {
					// 0x6f894
					g38 = *(int32_t *)(v24 + 8);
					result = PlaySfxLoc(v30);
					// branch -> 0x6f8a0
				} else {
					result = -1;
				}
			} else {
				// 0x6f868
				result = result2;
				// branch -> 0x6f8a0
			}
			// 0x6f8a0
			g10 = v1;
			return result;
		}
		// 0x6f4f0
		v33 = *(char *)(g32 + 112 * g31 + *(int32_t *)g25);
		if (v33 < 1) {
			// 0x6f79c
			v11 = g31;
			v12 = g23;
			v28 = *(int32_t *)(v12 - 0x7684);
			v17 = g32;
			v34 = *(char *)(v17 + 112 * v11 + *(int32_t *)v28);
			v20 = v34;
			v15 = v17;
			v13 = v11;
			v14 = v12;
			if (v34 != 0) {
				// 0x6f7b8
				if (0x1000000 * (int32_t)v34 < 0) {
					// 0x6f7cc
					v10 = -1 - v20;
					// branch -> 0x6f7d8
				} else {
					// 0x6f7c0
					v10 = v20 - 1;
					// branch -> 0x6f7d8
				}
				// 0x6f7d8
				g37 = v10;
				v21 = g36 + 120 * v10;
				if (*(int32_t *)(v21 + 60) == 0) {
					// 0x6f7ec
					if (*(char *)(v21 + 52) == 1) {
						// 0x6f7f8
						g34 = -1;
						function_9d008();
						// branch -> 0x6f800
					}
					// 0x6f800
					if (g33 % 256 == 0) {
						// 0x6f808
						*(int32_t *)(g35 + g26 + 116) = 0;
						// branch -> 0x6f814
					}
					// 0x6f814
					*(int32_t *)(g35 + g26 + 132) = 0;
					v15 = g32;
					v13 = g31;
					v14 = g23;
					// branch -> 0x6f820
				} else {
					v15 = v17;
					v13 = v11;
					v14 = v12;
				}
			}
			// 0x6f820
			v29 = *(int32_t *)(v14 - 0x757c);
			v18 = 224 * v13;
			result2 = v18;
			v22 = v18 + 2 * v15;
			v37 = (int32_t) * (int16_t *)(*(int32_t *)v29 + v22);
			if (*(char *)(v37 + *(int32_t *)(v14 - 0x7234)) != 0) {
				// 0x6f848
				if (g33 % 256 == 0) {
					// 0x6f850
					*(int32_t *)(g35 + g26 + 116) = 0;
					// branch -> 0x6f85c
				}
				// 0x6f85c
				v23 = g35 + g26;
				result2 = v23;
				*(int32_t *)(v23 + 132) = 0;
				// branch -> 0x6f868
			}
			// 0x6f868
			v24 = g35 + g26;
			if (*(int32_t *)(v24 + 116) != 0) {
				// 0x6f868
				// branch -> 0x6f8a0
				// 0x6f8a0
				g10 = v1;
				return result2;
			}
			// 0x6f878
			v35 = *(int32_t *)v24;
			v30 = *(int32_t *)(*(int32_t *)(g23 - 0x70e8) + 28 * v35 + 24);
			g34 = v30;
			if (v30 != -1) {
				// 0x6f894
				g38 = *(int32_t *)(v24 + 8);
				result = PlaySfxLoc(v30);
				// branch -> 0x6f8a0
			} else {
				result = -1;
			}
			// 0x6f8a0
			g10 = v1;
			return result;
		}
		// 0x6f508
		g13 = *(char *)g27 == 4;
		v19 = g35 + g26;
		v27 = *(int32_t *)(v19 + 136);
		v16 = (int32_t)v33 - 1;
		if (PlayerMHit(v16, -1, v27, g28, g29, *(int32_t *)v19, g30) != 0) {
			// 0x6f550
			if (g33 % 256 == 0) {
				// 0x6f558
				*(int32_t *)(g24 + 116) = 0;
				// branch -> 0x6f560
			}
			// 0x6f560
			*(int32_t *)(g35 + g26 + 132) = 1;
			// branch -> 0x6f79c
		}
		// 0x6f79c
		v11 = g31;
		v12 = g23;
		v28 = *(int32_t *)(v12 - 0x7684);
		v17 = g32;
		v34 = *(char *)(v17 + 112 * v11 + *(int32_t *)v28);
		v20 = v34;
		v15 = v17;
		v13 = v11;
		v14 = v12;
		if (v34 != 0) {
			// 0x6f7b8
			if (0x1000000 * (int32_t)v34 < 0) {
				// 0x6f7cc
				v10 = -1 - v20;
				// branch -> 0x6f7d8
			} else {
				// 0x6f7c0
				v10 = v20 - 1;
				// branch -> 0x6f7d8
			}
			// 0x6f7d8
			g37 = v10;
			v21 = g36 + 120 * v10;
			if (*(int32_t *)(v21 + 60) == 0) {
				// 0x6f7ec
				if (*(char *)(v21 + 52) == 1) {
					// 0x6f7f8
					g34 = -1;
					function_9d008();
					// branch -> 0x6f800
				}
				// 0x6f800
				if (g33 % 256 == 0) {
					// 0x6f808
					*(int32_t *)(g35 + g26 + 116) = 0;
					// branch -> 0x6f814
				}
				// 0x6f814
				*(int32_t *)(g35 + g26 + 132) = 0;
				v15 = g32;
				v13 = g31;
				v14 = g23;
				// branch -> 0x6f820
			} else {
				v15 = v17;
				v13 = v11;
				v14 = v12;
			}
		}
		// 0x6f820
		v29 = *(int32_t *)(v14 - 0x757c);
		v18 = 224 * v13;
		result2 = v18;
		v22 = v18 + 2 * v15;
		v37 = (int32_t) * (int16_t *)(*(int32_t *)v29 + v22);
		if (*(char *)(v37 + *(int32_t *)(v14 - 0x7234)) != 0) {
			// 0x6f848
			if (g33 % 256 == 0) {
				// 0x6f850
				*(int32_t *)(g35 + g26 + 116) = 0;
				// branch -> 0x6f85c
			}
			// 0x6f85c
			v23 = g35 + g26;
			result2 = v23;
			*(int32_t *)(v23 + 132) = 0;
			// branch -> 0x6f868
		}
		// 0x6f868
		v24 = g35 + g26;
		if (*(int32_t *)(v24 + 116) == 0) {
			// 0x6f878
			v35 = *(int32_t *)v24;
			v30 = *(int32_t *)(*(int32_t *)(g23 - 0x70e8) + 28 * v35 + 24);
			g34 = v30;
			if (v30 != -1) {
				// 0x6f894
				g38 = *(int32_t *)(v24 + 8);
				result = PlaySfxLoc(v30);
				// branch -> 0x6f8a0
			} else {
				result = -1;
			}
		} else {
			// 0x6f868
			result = result2;
			// branch -> 0x6f8a0
		}
		// 0x6f8a0
		g10 = v1;
		return result;
	}
	int32_t v38 = v4 + 120;        // 0x6f42c
	int32_t v39 = *(int32_t *)v38; // 0x6f42c
	g24 = v38;
	if (v39 != -1) {
		// 0x6f570
		g27 = v4;
		if (*(int32_t *)(v4 + 124) == 0) {
			int16_t v40 = *(int16_t *)(*(int32_t *)v5 + 2 * v6 + 224 * a5); // 0x6f590
			int32_t v41 = v40;                                              // 0x6f590
			if (v40 < 1) {
				// 0x6f5e0
				if (v40 != 0) {
					int32_t v42 = -1 - v41; // 0x6f5ec
					if (*(int32_t *)(232 * v42 + v7 + 4) == 15) {
						int32_t v43 = *(int32_t *)v4; // 0x6f60c
						if (function_6e548(v39, v42, a2, a3, *(int32_t *)(v4 + 136), v43, a4) != 0) {
							// 0x6f624
							if (g33 % 256 == 0) {
								// 0x6f62c
								*(int32_t *)(g27 + 116) = 0;
								// branch -> 0x6f634
							}
							// 0x6f634
							*(int32_t *)(g35 + g26 + 132) = 1;
							// branch -> 0x6f640
						}
					}
				}
			} else {
				int32_t v44 = *(int32_t *)(v4 + 136); // 0x6f59c
				if (function_6e548(v39, v41 - 1, a2, a3, v44, *(int32_t *)v4, a4) != 0) {
					// 0x6f5c0
					if (g33 % 256 == 0) {
						// 0x6f5c8
						*(int32_t *)(g27 + 116) = 0;
						// branch -> 0x6f5d0
					}
					// 0x6f5d0
					*(int32_t *)(g35 + g26 + 132) = 1;
					// branch -> 0x6f640
				}
			}
			unsigned char v45 = *(char *)(g32 + 112 * g31 + *(int32_t *)g25); // 0x6f64c
			if (v45 >= 1) {
				int32_t v46 = *(int32_t *)g24;  // 0x6f65c
				int32_t v47 = (int32_t)v45 - 1; // 0x6f660
				if (v47 != v46) {
					int32_t v48 = g35 + g26;       // 0x6f66c
					int32_t v49 = *(int32_t *)v48; // 0x6f670
					if (function_6ef7c(v46, v47, g28, g29, *(int32_t *)(v48 + 136), v49, g30) != 0) {
						// 0x6f690
						if (g33 % 256 == 0) {
							// 0x6f698
							*(int32_t *)(g24 + 116) = 0;
							// branch -> 0x6f6a0
						}
						// 0x6f6a0
						*(int32_t *)(g35 + g26 + 132) = 1;
						// branch -> 0x6f79c
					}
				}
			}
		} else {
			// 0x6f6b0
			if (__asm_rlwinm_(*(int32_t *)(232 * v39 + v7 + 160), 0, 27, 27) != 0) {
				uint16_t v50 = *(int16_t *)(2 * g32 + 224 * g31 + *(int32_t *)v5); // 0x6f6d4
				int32_t v51 = v50;                                                 // 0x6f6d4
				if (v50 >= 1) {
					// 0x6f6e0
					if (__asm_rlwinm_(*(int32_t *)(v7 + 232 * v51 - 72), 0, 26, 26) != 0) {
						int32_t v52 = *(int32_t *)(g35 + g26); // 0x6f6fc
						if (function_6e2b8(v51 - 1, g28, g29, *(int32_t *)(g27 + 136), v52, g30) != 0) {
							// 0x6f718
							if (g33 % 256 == 0) {
								// 0x6f720
								*(int32_t *)(g27 + 116) = 0;
								// branch -> 0x6f728
							}
							// 0x6f728
							*(int32_t *)(g35 + g26 + 132) = 1;
							// branch -> 0x6f734
						}
					}
				}
			}
			unsigned char v53 = *(char *)(g32 + 112 * g31 + *(int32_t *)g25); // 0x6f740
			if (v53 >= 1) {
				int32_t v54 = g35 + g26;               // 0x6f74c
				int32_t v55 = *(int32_t *)g24;         // 0x6f750
				int32_t v56 = *(int32_t *)(v54 + 136); // 0x6f758
				int32_t v57 = *(int32_t *)v54;         // 0x6f75c
				g13 = 0;
				if (PlayerMHit((int32_t)v53 - 1, v55, v56, g28, g29, v57, g30) != 0) {
					// 0x6f780
					if (g33 % 256 == 0) {
						// 0x6f788
						*(int32_t *)(g25 + 116) = 0;
						// branch -> 0x6f790
					}
					// 0x6f790
					*(int32_t *)(g35 + g26 + 132) = 1;
					// branch -> 0x6f79c
				}
			}
		}
		// 0x6f79c
		v11 = g31;
		v12 = g23;
		v28 = *(int32_t *)(v12 - 0x7684);
		v17 = g32;
		v34 = *(char *)(v17 + 112 * v11 + *(int32_t *)v28);
		v20 = v34;
		v15 = v17;
		v13 = v11;
		v14 = v12;
		if (v34 != 0) {
			// 0x6f7b8
			if (0x1000000 * (int32_t)v34 < 0) {
				// 0x6f7cc
				v10 = -1 - v20;
				// branch -> 0x6f7d8
			} else {
				// 0x6f7c0
				v10 = v20 - 1;
				// branch -> 0x6f7d8
			}
			// 0x6f7d8
			g37 = v10;
			v21 = g36 + 120 * v10;
			if (*(int32_t *)(v21 + 60) == 0) {
				// 0x6f7ec
				if (*(char *)(v21 + 52) == 1) {
					// 0x6f7f8
					g34 = -1;
					function_9d008();
					// branch -> 0x6f800
				}
				// 0x6f800
				if (g33 % 256 == 0) {
					// 0x6f808
					*(int32_t *)(g35 + g26 + 116) = 0;
					// branch -> 0x6f814
				}
				// 0x6f814
				*(int32_t *)(g35 + g26 + 132) = 0;
				v15 = g32;
				v13 = g31;
				v14 = g23;
				// branch -> 0x6f820
			} else {
				v15 = v17;
				v13 = v11;
				v14 = v12;
			}
		}
		// 0x6f820
		v29 = *(int32_t *)(v14 - 0x757c);
		v18 = 224 * v13;
		result2 = v18;
		v22 = v18 + 2 * v15;
		v37 = (int32_t) * (int16_t *)(*(int32_t *)v29 + v22);
		if (*(char *)(v37 + *(int32_t *)(v14 - 0x7234)) != 0) {
			// 0x6f848
			if (g33 % 256 == 0) {
				// 0x6f850
				*(int32_t *)(g35 + g26 + 116) = 0;
				// branch -> 0x6f85c
			}
			// 0x6f85c
			v23 = g35 + g26;
			result2 = v23;
			*(int32_t *)(v23 + 132) = 0;
			// branch -> 0x6f868
		}
		// 0x6f868
		v24 = g35 + g26;
		if (*(int32_t *)(v24 + 116) == 0) {
			// 0x6f878
			v35 = *(int32_t *)v24;
			v30 = *(int32_t *)(*(int32_t *)(g23 - 0x70e8) + 28 * v35 + 24);
			g34 = v30;
			if (v30 != -1) {
				// 0x6f894
				g38 = *(int32_t *)(v24 + 8);
				result = PlaySfxLoc(v30);
				// branch -> 0x6f8a0
			} else {
				result = -1;
			}
		} else {
			// 0x6f868
			result = result2;
			// branch -> 0x6f8a0
		}
		// 0x6f8a0
		g10 = v1;
		return result;
	}
	// 0x6f43c
	v31 = *(int16_t *)(*(int32_t *)v5 + 2 * v6 + 224 * a5);
	v36 = v31;
	if (v31 < 1) {
		// 0x6f4f0
		v33 = *(char *)(g32 + 112 * g31 + *(int32_t *)g25);
		if (v33 >= 1) {
			// 0x6f508
			g13 = *(char *)g27 == 4;
			v19 = g35 + g26;
			v27 = *(int32_t *)(v19 + 136);
			v16 = (int32_t)v33 - 1;
			if (PlayerMHit(v16, -1, v27, g28, g29, *(int32_t *)v19, g30) != 0) {
				// 0x6f550
				if (g33 % 256 == 0) {
					// 0x6f558
					*(int32_t *)(g24 + 116) = 0;
					// branch -> 0x6f560
				}
				// 0x6f560
				*(int32_t *)(g35 + g26 + 132) = 1;
				// branch -> 0x6f79c
			}
		}
		// 0x6f79c
		v11 = g31;
		v12 = g23;
		v28 = *(int32_t *)(v12 - 0x7684);
		v17 = g32;
		v34 = *(char *)(v17 + 112 * v11 + *(int32_t *)v28);
		v20 = v34;
		v15 = v17;
		v13 = v11;
		v14 = v12;
		if (v34 != 0) {
			// 0x6f7b8
			if (0x1000000 * (int32_t)v34 < 0) {
				// 0x6f7cc
				v10 = -1 - v20;
				// branch -> 0x6f7d8
			} else {
				// 0x6f7c0
				v10 = v20 - 1;
				// branch -> 0x6f7d8
			}
			// 0x6f7d8
			g37 = v10;
			v21 = g36 + 120 * v10;
			if (*(int32_t *)(v21 + 60) == 0) {
				// 0x6f7ec
				if (*(char *)(v21 + 52) == 1) {
					// 0x6f7f8
					g34 = -1;
					function_9d008();
					// branch -> 0x6f800
				}
				// 0x6f800
				if (g33 % 256 == 0) {
					// 0x6f808
					*(int32_t *)(g35 + g26 + 116) = 0;
					// branch -> 0x6f814
				}
				// 0x6f814
				*(int32_t *)(g35 + g26 + 132) = 0;
				v15 = g32;
				v13 = g31;
				v14 = g23;
				// branch -> 0x6f820
			} else {
				v15 = v17;
				v13 = v11;
				v14 = v12;
			}
		}
		// 0x6f820
		v29 = *(int32_t *)(v14 - 0x757c);
		v18 = 224 * v13;
		result2 = v18;
		v22 = v18 + 2 * v15;
		v37 = (int32_t) * (int16_t *)(*(int32_t *)v29 + v22);
		if (*(char *)(v37 + *(int32_t *)(v14 - 0x7234)) != 0) {
			// 0x6f848
			if (g33 % 256 == 0) {
				// 0x6f850
				*(int32_t *)(g35 + g26 + 116) = 0;
				// branch -> 0x6f85c
			}
			// 0x6f85c
			v23 = g35 + g26;
			result2 = v23;
			*(int32_t *)(v23 + 132) = 0;
			// branch -> 0x6f868
		}
		// 0x6f868
		v24 = g35 + g26;
		if (*(int32_t *)(v24 + 116) == 0) {
			// 0x6f878
			v35 = *(int32_t *)v24;
			v30 = *(int32_t *)(*(int32_t *)(g23 - 0x70e8) + 28 * v35 + 24);
			g34 = v30;
			if (v30 != -1) {
				// 0x6f894
				g38 = *(int32_t *)(v24 + 8);
				result = PlaySfxLoc(v30);
				// branch -> 0x6f8a0
			} else {
				result = -1;
			}
		} else {
			// 0x6f868
			result = result2;
			// branch -> 0x6f8a0
		}
		// 0x6f8a0
		g10 = v1;
		return result;
	}
	// 0x6f458
	g24 = v4;
	v32 = *(int32_t *)v4;
	if (v9 == 4) {
		// 0x6f460
		v25 = *(int32_t *)(v4 + 120);
		v26 = *(int32_t *)(v4 + 136);
		if (function_6e548(v25, v36 - 1, a2, a3, v26, v32, a4) != 0) {
			// 0x6f48c
			if (g33 % 256 == 0) {
				// 0x6f494
				*(int32_t *)(g24 + 116) = 0;
				// branch -> 0x6f49c
			}
			// 0x6f49c
			*(int32_t *)(g35 + g26 + 132) = 1;
			// branch -> 0x6f4f0
		}
	} else {
		// 0x6f4ac
		if (function_6e2b8(v36 - 1, a2, a3, *(int32_t *)(v4 + 136), v32, a4) != 0) {
			// 0x6f4d4
			if (g33 % 256 == 0) {
				// 0x6f4dc
				*(int32_t *)(g24 + 116) = 0;
				// branch -> 0x6f4e4
			}
			// 0x6f4e4
			*(int32_t *)(g35 + g26 + 132) = 1;
			// branch -> 0x6f4f0
		}
	}
	// 0x6f4f0
	v33 = *(char *)(g32 + 112 * g31 + *(int32_t *)g25);
	if (v33 >= 1) {
		// 0x6f508
		g13 = *(char *)g27 == 4;
		v19 = g35 + g26;
		v27 = *(int32_t *)(v19 + 136);
		v16 = (int32_t)v33 - 1;
		if (PlayerMHit(v16, -1, v27, g28, g29, *(int32_t *)v19, g30) != 0) {
			// 0x6f550
			if (g33 % 256 == 0) {
				// 0x6f558
				*(int32_t *)(g24 + 116) = 0;
				// branch -> 0x6f560
			}
			// 0x6f560
			*(int32_t *)(g35 + g26 + 132) = 1;
			// branch -> 0x6f79c
		}
	}
	// 0x6f79c
	v11 = g31;
	v12 = g23;
	v28 = *(int32_t *)(v12 - 0x7684);
	v17 = g32;
	v34 = *(char *)(v17 + 112 * v11 + *(int32_t *)v28);
	v20 = v34;
	v15 = v17;
	v13 = v11;
	v14 = v12;
	if (v34 != 0) {
		// 0x6f7b8
		if (0x1000000 * (int32_t)v34 < 0) {
			// 0x6f7cc
			v10 = -1 - v20;
			// branch -> 0x6f7d8
		} else {
			// 0x6f7c0
			v10 = v20 - 1;
			// branch -> 0x6f7d8
		}
		// 0x6f7d8
		g37 = v10;
		v21 = g36 + 120 * v10;
		if (*(int32_t *)(v21 + 60) == 0) {
			// 0x6f7ec
			if (*(char *)(v21 + 52) == 1) {
				// 0x6f7f8
				g34 = -1;
				function_9d008();
				// branch -> 0x6f800
			}
			// 0x6f800
			if (g33 % 256 == 0) {
				// 0x6f808
				*(int32_t *)(g35 + g26 + 116) = 0;
				// branch -> 0x6f814
			}
			// 0x6f814
			*(int32_t *)(g35 + g26 + 132) = 0;
			v15 = g32;
			v13 = g31;
			v14 = g23;
			// branch -> 0x6f820
		} else {
			v15 = v17;
			v13 = v11;
			v14 = v12;
		}
	}
	// 0x6f820
	v29 = *(int32_t *)(v14 - 0x757c);
	v18 = 224 * v13;
	result2 = v18;
	v22 = v18 + 2 * v15;
	v37 = (int32_t) * (int16_t *)(*(int32_t *)v29 + v22);
	if (*(char *)(v37 + *(int32_t *)(v14 - 0x7234)) != 0) {
		// 0x6f848
		if (g33 % 256 == 0) {
			// 0x6f850
			*(int32_t *)(g35 + g26 + 116) = 0;
			// branch -> 0x6f85c
		}
		// 0x6f85c
		v23 = g35 + g26;
		result2 = v23;
		*(int32_t *)(v23 + 132) = 0;
		// branch -> 0x6f868
	}
	// 0x6f868
	v24 = g35 + g26;
	if (*(int32_t *)(v24 + 116) == 0) {
		// 0x6f878
		v35 = *(int32_t *)v24;
		v30 = *(int32_t *)(*(int32_t *)(g23 - 0x70e8) + 28 * v35 + 24);
		g34 = v30;
		if (v30 != -1) {
			// 0x6f894
			g38 = *(int32_t *)(v24 + 8);
			result = PlaySfxLoc(v30);
			// branch -> 0x6f8a0
		} else {
			result = -1;
		}
	} else {
		// 0x6f868
		result = result2;
		// branch -> 0x6f8a0
	}
	// 0x6f8a0
	g10 = v1;
	return result;
}

// Address range: 0x6f8b4 - 0x6f934
int32_t SetMissAnim(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x6f8c0
	int32_t v2 = g37;                                   // 0x6f8c8
	*(char *)(v1 + 56) = (char)v2;
	int32_t v3 = 300 * v2 + *(int32_t *)(g23 - 0x761c); // 0x6f8d0
	int32_t v4 = *(int32_t *)(v1 + 44);                 // 0x6f8d4
	int32_t v5 = 8 * v4 + v3;                           // r4
	int32_t v6 = v4 + v3;                               // r6
	*(int32_t *)(v1 + 60) = *(int32_t *)(v3 + 8);
	int32_t v7 = 4 * v4 + v3; // r5
	int32_t result = 0;       // r3
	*(int32_t *)(v1 + 64) = *(int32_t *)(v5 + 12);
	*(int32_t *)(v1 + 68) = *(int32_t *)(v5 + 16);
	int32_t v8 = (int32_t) * (char *)(v6 + 140); // 0x6f908
	*(int32_t *)(v1 + 72) = v8;
	int32_t v9 = (int32_t) * (char *)(v6 + 156); // 0x6f910
	*(int32_t *)(v1 + 76) = v9;
	*(int32_t *)(v1 + 80) = *(int32_t *)(v7 + 172);
	*(int32_t *)(v1 + 84) = *(int32_t *)(v7 + 236);
	*(int32_t *)(v1 + 88) = result;
	*(int32_t *)(v1 + 96) = 1;
	return result;
}

// Address range: 0x6f934 - 0x6f968
int32_t SetMissDir(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x6f948
	*(int32_t *)(v1 + 44) = a2;
	int32_t v2 = (int32_t) * (char *)(v1 + 56); // 0x6f950
	g37 = v2;
	return SetMissAnim(v2);
}

// Address range: 0x6f968 - 0x6fab0
int32_t function_6f968(int32_t a1)
{
	int32_t v1 = g10; // 0x6f96c
	g33 = *(int32_t *)(g23 - 0x5f0c);
	g37 = *(int32_t *)(g23 - 0x5f08);
	int32_t v2 = 300 * (a1 % 256) + *(int32_t *)(g23 - 0x761c); // 0x6f98c
	int32_t result2 = v2;                                       // r3
	g36 = v2;
	int32_t v3 = g36; // 0x6fa04
	int32_t v4;       // bp-280
	if (__asm_rlwinm_(*(int32_t *)(v2 + 8), 0, 29, 29) != 0) {
		// 0x6f9a0
		g38 = *(int32_t *)(v3 + 4);
		sprintf();
		int32_t v5 = LoadFileInMem((int32_t)&v4, NULL); // 0x6f9b4
		g34 = v5;
		g32 = v5;
		g35 = function_c9948();
		int32_t v6 = g36; // 0x6f9c4
		g33 = v6;
		g31 = 0;
		int32_t v7 = g32; // 0x6f9d034
		int32_t result;   // 0x6f9fc
		if (*(char *)(v6 + 1) != 0) {
			*(int32_t *)(v6 + 12) = v7;
			*(int32_t *)(g33 + 16) = function_4d79c(g35, g31);
			int32_t v8 = g33 + 8; // 0x6f9e4
			g33 = v8;
			int32_t v9 = g31 + 1; // 0x6f9e8
			g31 = v9;
			int32_t v10 = g32; // 0x6f9d0
			while (v9 < (int32_t) * (char *)(g36 + 1)) {
				// 0x6f9d0
				*(int32_t *)(v8 + 12) = v10;
				*(int32_t *)(g33 + 16) = function_4d79c(g35, g31);
				v8 = g33 + 8;
				g33 = v8;
				v9 = g31 + 1;
				g31 = v9;
				v10 = g32;
				// continue -> 0x6f9d0
			}
			// 0x6f9f8
			result = function_c9acc(v10);
			// branch -> 0x6fa9c
			// 0x6fa9c
			g10 = v1;
			return result;
		}
		// 0x6f9f8
		result = function_c9acc(v7);
		// branch -> 0x6fa9c
		// 0x6fa9c
		g10 = v1;
		return result;
	}
	char *v11 = (char *)(v3 + 1); // 0x6fa04
	if (*v11 == 1) {
		// 0x6fa10
		g38 = *(int32_t *)(v3 + 4);
		result2 = sprintf();
		if (*(int32_t *)(g36 + 12) == 0) {
			int32_t v12 = LoadFileInMem((int32_t)&v4, NULL); // 0x6fa30
			result2 = v12;
			*(int32_t *)(g36 + 12) = v12;
			*(int32_t *)(g36 + 16) = 0;
			// branch -> 0x6fa9c
		}
	} else {
		// 0x6fa44
		g31 = 0;
		g32 = v3;
		g35 = 0;
		if (*v11 != 0) {
			int32_t v13 = v3; // 0x6fa54
			// branch -> 0x6fa54
			while (true) {
				// 0x6fa54
				g38 = *(int32_t *)(v13 + 4);
				g37 = g33;
				result2 = sprintf();
				int32_t v14 = g32; // 0x6fa68
				int32_t v15 = v14; // 0x6fa88
				if (*(int32_t *)(v14 + 12) == 0) {
					int32_t v16 = LoadFileInMem((int32_t)&v4, NULL); // 0x6fa7c
					result2 = v16;
					*(int32_t *)(g32 + 12) = v16;
					*(int32_t *)(g32 + 16) = g35;
					v15 = g32;
					// branch -> 0x6fa88
				}
				// 0x6fa88
				g32 = v15 + 8;
				int32_t v17 = g31 + 1; // 0x6fa8c
				g31 = v17;
				int32_t v18 = g36; // 0x6fa90
				if (v17 >= (int32_t) * (char *)(v18 + 1)) {
					// break -> 0x6fa9c
					break;
				}
				v13 = v18;
				// continue -> 0x6fa54
			}
			// 0x6fa9c
			g10 = v1;
			return result2;
		}
	}
	// 0x6fa9c
	g10 = v1;
	return result2;
}

// Address range: 0x6fab0 - 0x6fb10
int32_t InitMissileGFX(int32_t a1)
{
	int32_t v1 = g36;                        // 0x6fab0
	int32_t v2 = g10;                        // 0x6fab4
	int32_t v3 = *(int32_t *)(g23 - 0x761c); // 0x6fab8
	int32_t v4 = g35;                        // 0x6fabc
	g35 = 0;
	if (*(char *)(v3 + 1) == 0) {
		// 0x6faf8
		g36 = v1;
		g10 = v2;
		g35 = v4;
		return g34;
	}
	int32_t v5 = 0; // 0x6fadc
	while (true) {
		int32_t v6 = v5; // 0x6fae8
		int32_t v7 = v3; // 0x6fae4
		if (*(int32_t *)(v3 + 8) % 2 == 0) {
			// 0x6fadc
			g34 = function_6f968(v5 % 256);
			v6 = g35;
			v7 = g36;
			// branch -> 0x6fae4
		}
		int32_t v8 = v6 + 1; // 0x6fae8
		g35 = v8;
		if (*(char *)(v7 + 301) == 0) {
			// break -> 0x6faf8
			break;
		}
		v5 = v8;
		v3 = v7 + 300;
		// continue -> 0x6fad0
	}
	// 0x6faf8
	g36 = v1;
	g10 = v2;
	g35 = v4;
	return g34;
}

// Address range: 0x6fb10 - 0x6fbd0
int32_t function_6fb10(int32_t a1)
{
	int32_t v1 = g36;                        // 0x6fb10
	int32_t v2 = g10;                        // 0x6fb14
	int32_t v3 = 300 * a1;                   // 0x6fb18
	int32_t result = v3;                     // r3
	int32_t v4 = *(int32_t *)(g23 - 0x761c); // 0x6fb1c
	int32_t v5 = v4 + v3;                    // 0x6fb28
	if (__asm_rlwinm_(*(int32_t *)(v5 + 8), 0, 29, 29) != 0) {
		int32_t v6 = v5 + 12; // 0x6fb44
		if (*(int32_t *)v6 != 0) {
			// 0x6fb54
			result = MemFreeDbg((int32_t *)(result + 12 + v4));
			*(int32_t *)v6 = 0;
			*(int32_t *)(v5 + 16) = 0;
			// branch -> 0x6fbb0
		}
		// 0x6fbb0
		g36 = v1;
		g10 = v2;
		return result;
	}
	int32_t v7 = v5; // r30
	int32_t v8 = 0;  // r28
	g36 = 0;
	if (*(char *)(v5 + 1) == 0) {
		// 0x6fbb0
		g36 = v1;
		g10 = v2;
		return result;
	}
	int32_t v9 = v5;  // 0x6fba414
	int32_t v10 = v5; // 0x6fb8c
	int32_t v11 = 0;  // 0x6fba012
	while (true) {
		int32_t *v12 = (int32_t *)(v10 + 12); // 0x6fb80
		int32_t v13 = v9;                     // 0x6fba4
		int32_t v14 = v11;                    // 0x6fba0
		int32_t v15 = v10;                    // 0x6fb9c
		if (*v12 != 0) {
			// 0x6fb8c
			result = MemFreeDbg(v12);
			*(int32_t *)(v7 + 12) = g36;
			*(int32_t *)(v7 + 16) = g36;
			v13 = v5;
			v14 = v8;
			v15 = v7;
			// branch -> 0x6fb9c
		}
		int32_t v16 = v15 + 8; // 0x6fb9c
		v7 = v16;
		int32_t v17 = v14 + 1; // 0x6fba0
		v8 = v17;
		if (v17 >= (int32_t) * (char *)(v13 + 1)) {
			// break -> 0x6fbb0
			break;
		}
		v9 = v13;
		v10 = v16;
		v11 = v17;
		// continue -> 0x6fb80
	}
	// 0x6fbb0
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0x6fbd0 - 0x6fc30
int32_t FreeMissiles(int32_t a1)
{
	int32_t v1 = g10;                        // 0x6fbd4
	int32_t v2 = *(int32_t *)(g23 - 0x761c); // 0x6fbd8
	g36 = v2;
	g35 = 0;
	if (*(char *)(v2 + 1) == 0) {
		// 0x6fc18
		g10 = v1;
		return g34;
	}
	int32_t v3 = 0; // 0x6fbfc
	while (true) {
		int32_t v4 = v3; // 0x6fc08
		int32_t v5 = v2; // 0x6fc04
		if (*(int32_t *)(v2 + 8) % 2 == 0) {
			// 0x6fbfc
			g34 = function_6fb10(v3);
			v4 = g35;
			v5 = g36;
			// branch -> 0x6fc04
		}
		int32_t v6 = v5 + 300; // 0x6fc04
		g36 = v6;
		int32_t v7 = v4 + 1; // 0x6fc08
		g35 = v7;
		if (*(char *)(v5 + 301) == 0) {
			// break -> 0x6fc18
			break;
		}
		v3 = v7;
		v2 = v6;
		// continue -> 0x6fbf0
	}
	// 0x6fc18
	g10 = v1;
	return g34;
}

// Address range: 0x6fc30 - 0x6fc90
int32_t function_6fc30(void)
{
	int32_t v1 = g36;                        // 0x6fc30
	int32_t v2 = *(int32_t *)(g23 - 0x761c); // 0x6fc38
	g36 = v2;
	g35 = 0;
	if (*(char *)(v2 + 1) == 0) {
		// 0x6fc78
		g36 = v1;
		return g34;
	}
	int32_t v3 = 0; // 0x6fc5c
	while (true) {
		int32_t v4 = v3; // 0x6fc68
		int32_t v5 = v2; // 0x6fc64
		if (*(int32_t *)(v2 + 8) % 2 != 0) {
			// 0x6fc5c
			g34 = function_6fb10(v3);
			v4 = g35;
			v5 = g36;
			// branch -> 0x6fc64
		}
		int32_t v6 = v5 + 300; // 0x6fc64
		g36 = v6;
		int32_t v7 = v4 + 1; // 0x6fc68
		g35 = v7;
		if (*(char *)(v5 + 301) == 0) {
			// break -> 0x6fc78
			break;
		}
		v3 = v7;
		v2 = v6;
		// continue -> 0x6fc50
	}
	// 0x6fc78
	g36 = v1;
	return g34;
}

// Address range: 0x6fc90 - 0x6ffd0
int32_t InitMissiles(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0x6fc98
	g30 = v1;
	g31 = *(int32_t *)(g23 - 0x70f0);
	g32 = *(int32_t *)(g23 - 0x779c);
	g33 = *(int32_t *)(g23 - 0x7660);
	g35 = *(int32_t *)(g23 - 0x7668);
	g36 = *(int32_t *)(g23 - 0x7150);
	g29 = *(int32_t *)(g23 - 0x7664);
	int32_t v2 = 0x55ec * *(int32_t *)v1 + *(int32_t *)(g23 - 0x77a8); // 0x6fcc8
	int32_t result = v2;                                               // r3
	int32_t v3 = (int32_t) * (char *)(v2 + 284);                       // 0x6fccc
	*(char *)(result + 284) = (char)__asm_rlwinm(v3, 0, 0, 30);
	int32_t v4;   // ctr
	int32_t v5;   // r10
	int32_t v6;   // r11
	int32_t v7;   // r4
	int32_t v8;   // r5
	int32_t v9;   // r6
	int32_t v10;  // r8
	int32_t v11;  // r9
	int32_t v12;  // 0x6fd54
	int32_t v13;  // 0x6fd60
	int32_t v14;  // 0x6fd6c
	int32_t v15;  // 0x6feb4
	int32_t v16;  // 0x6ffa0
	uint32_t v17; // 0x6ffb0
	int32_t v18;  // 0x6fdb8
	int32_t v19;  // 0x6fde4
	int32_t v20;  // 0x6fe6c
	int32_t v21;  // 0x6fe70
	int32_t v22;  // 0x6fe94
	int32_t v23;  // 0x6fe98
	int32_t v24;  // 0x6feb0
	int32_t v25;  // 0x6ff90
	int32_t v26;  // 0x6ffa0
	int32_t v27;  // 0x6ffa4
	int32_t v28;  // 0x6ffb4
	if (*(int32_t *)(result + 460) == 1) {
		int32_t v29 = g33; // 0x6fce4
		g28 = v29;
		g27 = 0;
		int32_t v30 = g35; // 0x6fd281
		if (*(int32_t *)v30 > 0) {
			int32_t v31 = 0; // 0x6fd249
			int32_t v32;     // 0x6fd28
			while (true) {
				int32_t v33 = 180 * *(int32_t *)v29; // 0x6fcf4
				int32_t v34 = g29;                   // 0x6fcf8
				v32 = v30;
				int32_t v35 = v31; // 0x6fd24
				int32_t v36 = v29; // 0x6fd20
				if (*(int32_t *)(v34 + v33) == 39) {
					int32_t v37 = *(int32_t *)g30; // 0x6fd08
					if (v37 == *(int32_t *)(v34 + v33 + 120)) {
						// 0x6fd18
						function_5c140(v37, 1);
						v32 = g35;
						v35 = g27;
						v36 = g28;
						// branch -> 0x6fd20
					} else {
						v32 = v30;
						v35 = v31;
						v36 = v29;
					}
				}
				int32_t v38 = v36 + 4; // 0x6fd20
				g28 = v38;
				int32_t v39 = v35 + 1; // 0x6fd24
				g27 = v39;
				if (v39 >= *(int32_t *)v32) {
					// break -> 0x6fd34
					break;
				}
				v30 = v32;
				v31 = v39;
				v29 = v38;
				// continue -> 0x6fcf0
			}
			// 0x6fd34
			v6 = 0;
			v11 = g36;
			*(int32_t *)v32 = 0;
			v5 = g33;
			*(int32_t *)v11 = v6;
			v10 = 0;
			v12 = v6;
			*(int32_t *)v5 = 0;
			v13 = v6;
			*(int32_t *)(v11 + 4) = v12 + 1;
			v14 = v6;
			*(int32_t *)(v5 + 4) = v10;
			v6 += 8;
			*(int32_t *)(v11 + 8) = v12 + 2;
			*(int32_t *)(v5 + 8) = v10;
			*(int32_t *)(v11 + 12) = v13 + 3;
			*(int32_t *)(v5 + 12) = v10;
			*(int32_t *)(v11 + 16) = v13 + 4;
			*(int32_t *)(v5 + 16) = v10;
			*(int32_t *)(v11 + 20) = v14 + 5;
			*(int32_t *)(v5 + 20) = v10;
			*(int32_t *)(v11 + 24) = v14 + 6;
			*(int32_t *)(v5 + 24) = v10;
			*(int32_t *)(v11 + 28) = v14 + 7;
			v11 += 32;
			*(int32_t *)(v5 + 28) = v10;
			v5 += 32;
			v18 = 14;
			// branch -> 0x6fd4c
			while (v18 != 0) {
				// 0x6fd4c
				*(int32_t *)v11 = v6;
				v10 = 0;
				v12 = v6;
				*(int32_t *)v5 = 0;
				v13 = v6;
				*(int32_t *)(v11 + 4) = v12 + 1;
				v14 = v6;
				*(int32_t *)(v5 + 4) = v10;
				v6 += 8;
				*(int32_t *)(v11 + 8) = v12 + 2;
				*(int32_t *)(v5 + 8) = v10;
				*(int32_t *)(v11 + 12) = v13 + 3;
				*(int32_t *)(v5 + 12) = v10;
				*(int32_t *)(v11 + 16) = v13 + 4;
				*(int32_t *)(v5 + 16) = v10;
				*(int32_t *)(v11 + 20) = v14 + 5;
				*(int32_t *)(v5 + 20) = v10;
				*(int32_t *)(v11 + 24) = v14 + 6;
				*(int32_t *)(v5 + 24) = v10;
				*(int32_t *)(v11 + 28) = v14 + 7;
				v11 += 32;
				*(int32_t *)(v5 + 28) = v10;
				v5 += 32;
				v18--;
				// continue -> 0x6fd4c
			}
			// 0x6ffa0
			v16 = v6;
			v26 = 4 * v16;
			v27 = g36 + v26;
			result = v27;
			v7 = g33 + v26;
			v4 = 125 - v16;
			if (v16 <= 124) {
				int32_t v40 = v27; // 0x6fdd0
				int32_t v41 = v16; // 0x6fdd0
				while (true) {
					// 0x6fdd0
					*(int32_t *)v40 = v41;
					result += 4;
					v6++;
					*(int32_t *)v7 = v10;
					v7 += 4;
					v19 = v4 - 1;
					v4 = v19;
					if (v19 != 0) {
					lab_0x6fdd0:
						// 0x6fdd0
						v40 = result;
						v41 = v6;
						// branch -> 0x6fdd0
						continue;
					}
				}
			}
			// 0x6fde8
			v9 = 0;
			v8 = g31;
			*(int32_t *)*(int32_t *)(g23 - 0x70ec) = 0;
			v7 = -1;
			v9 += 8;
			*(int32_t *)v8 = -1;
			result = 0;
			*(int32_t *)(v8 + 4) = 0;
			*(int32_t *)(v8 + 8) = result;
			*(int32_t *)(v8 + 12) = v7;
			*(int32_t *)(v8 + 16) = result;
			*(int32_t *)(v8 + 20) = result;
			*(int32_t *)(v8 + 24) = v7;
			*(int32_t *)(v8 + 28) = result;
			*(int32_t *)(v8 + 32) = result;
			*(int32_t *)(v8 + 36) = v7;
			*(int32_t *)(v8 + 40) = result;
			*(int32_t *)(v8 + 44) = result;
			*(int32_t *)(v8 + 48) = v7;
			*(int32_t *)(v8 + 52) = result;
			*(int32_t *)(v8 + 56) = result;
			*(int32_t *)(v8 + 60) = v7;
			*(int32_t *)(v8 + 64) = result;
			*(int32_t *)(v8 + 68) = result;
			*(int32_t *)(v8 + 72) = v7;
			*(int32_t *)(v8 + 76) = result;
			*(int32_t *)(v8 + 80) = result;
			*(int32_t *)(v8 + 84) = v7;
			*(int32_t *)(v8 + 88) = result;
			*(int32_t *)(v8 + 92) = result;
			v20 = v8 + 96;
			v8 = v20;
			v21 = 14;
			// branch -> 0x6fe00
			while (v21 != 0) {
				// 0x6fe00
				v7 = -1;
				v9 += 8;
				*(int32_t *)v20 = -1;
				result = 0;
				*(int32_t *)(v8 + 4) = 0;
				*(int32_t *)(v8 + 8) = result;
				*(int32_t *)(v8 + 12) = v7;
				*(int32_t *)(v8 + 16) = result;
				*(int32_t *)(v8 + 20) = result;
				*(int32_t *)(v8 + 24) = v7;
				*(int32_t *)(v8 + 28) = result;
				*(int32_t *)(v8 + 32) = result;
				*(int32_t *)(v8 + 36) = v7;
				*(int32_t *)(v8 + 40) = result;
				*(int32_t *)(v8 + 44) = result;
				*(int32_t *)(v8 + 48) = v7;
				*(int32_t *)(v8 + 52) = result;
				*(int32_t *)(v8 + 56) = result;
				*(int32_t *)(v8 + 60) = v7;
				*(int32_t *)(v8 + 64) = result;
				*(int32_t *)(v8 + 68) = result;
				*(int32_t *)(v8 + 72) = v7;
				*(int32_t *)(v8 + 76) = result;
				*(int32_t *)(v8 + 80) = result;
				*(int32_t *)(v8 + 84) = v7;
				*(int32_t *)(v8 + 88) = result;
				*(int32_t *)(v8 + 92) = result;
				v20 = v8 + 96;
				v8 = v20;
				v21--;
				// continue -> 0x6fe00
			}
			// 0x6ffb0
			v17 = v9;
			v28 = g31 + 12 * v17;
			v8 = v28;
			if (v17 <= 124) {
				*(int32_t *)v28 = v7;
				*(int32_t *)(v8 + 4) = result;
				*(int32_t *)(v8 + 8) = result;
				v22 = v8 + 12;
				v8 = v22;
				v23 = 124 - v17;
				while (v23 != 0) {
					// 0x6fe88
					*(int32_t *)v22 = v7;
					*(int32_t *)(v8 + 4) = result;
					*(int32_t *)(v8 + 8) = result;
					v22 = v8 + 12;
					v8 = v22;
					v23--;
					// continue -> 0x6fe88
				}
				// 0x6fe9c
				v7 = 0;
				// branch -> 0x6fea0
				while (true) {
					// 0x6fea0
					v4 = 14;
					result = 0;
					v15 = 0;
					v24 = 0;
					// branch -> 0x6feac
				lab_0x6feac_5:
					while (true) {
						int32_t v42 = v24 + v15 + *(int32_t *)g32;                     // 0x6feb4
						int32_t v43 = __asm_rlwinm((int32_t) * (char *)v42, 0, 0, 30); // 0x6febc
						*(char *)v42 = (char)v43;
						int32_t v44 = *(int32_t *)g32 + 112 + result + v7;             // 0x6fed0
						int32_t v45 = __asm_rlwinm((int32_t) * (char *)v44, 0, 0, 30); // 0x6fed8
						*(char *)v44 = (char)v45;
						int32_t v46 = *(int32_t *)g32 + 224 + result + v7;             // 0x6feec
						int32_t v47 = __asm_rlwinm((int32_t) * (char *)v46, 0, 0, 30); // 0x6fef4
						*(char *)v46 = (char)v47;
						int32_t v48 = *(int32_t *)g32 + 336 + result + v7;             // 0x6ff08
						int32_t v49 = __asm_rlwinm((int32_t) * (char *)v48, 0, 0, 30); // 0x6ff10
						*(char *)v48 = (char)v49;
						int32_t v50 = *(int32_t *)g32 + 448 + result + v7;             // 0x6ff24
						int32_t v51 = __asm_rlwinm((int32_t) * (char *)v50, 0, 0, 30); // 0x6ff2c
						*(char *)v50 = (char)v51;
						int32_t v52 = *(int32_t *)g32 + 560 + result + v7;             // 0x6ff40
						int32_t v53 = __asm_rlwinm((int32_t) * (char *)v52, 0, 0, 30); // 0x6ff48
						*(char *)v52 = (char)v53;
						int32_t v54 = *(int32_t *)g32 + 672 + result + v7;             // 0x6ff5c
						int32_t v55 = __asm_rlwinm((int32_t) * (char *)v54, 0, 0, 30); // 0x6ff64
						*(char *)v54 = (char)v55;
						int32_t v56 = result; // 0x6ff70
						result = v56 + 896;
						int32_t v57 = *(int32_t *)g32 + 784 + v56 + v7;                // 0x6ff7c
						int32_t v58 = __asm_rlwinm((int32_t) * (char *)v57, 0, 0, 30); // 0x6ff84
						*(char *)v57 = (char)v58;
						int32_t v59 = v4 - 1; // 0x6ff8c
						v4 = v59;
						if (v59 == 0) {
							// 0x6ff90
							v25 = v7 + 1;
							v7 = v25;
							if (v25 >= 112) {
								// break (via goto) -> 0x6ffbc
								goto lab_0x6ffbc;
							}
							// continue (via goto) -> 0x6fea0
							goto lab_0x6fea0;
						} else {
							// 0x6feac
							v15 = v7;
							v24 = result;
							// branch -> 0x6feac
							continue;
						}
					}
				lab_0x6ffbc:
					// 0x6ffbc
					return result;
				}
			}
			// 0x6fe9c
			v7 = 0;
			// branch -> 0x6fea0
			while (true) {
				// 0x6fea0
				v4 = 14;
				result = 0;
				v15 = 0;
				v24 = 0;
				// branch -> 0x6feac
				goto lab_0x6feac_5;
			}
		}
	} else {
		// 0x6fc90
		// branch -> 0x6fd34
	}
	// 0x6fd34
	v6 = 0;
	v11 = g36;
	*(int32_t *)g35 = 0;
	v5 = g33;
	*(int32_t *)v11 = v6;
	v10 = 0;
	v12 = v6;
	*(int32_t *)v5 = 0;
	v13 = v6;
	*(int32_t *)(v11 + 4) = v12 + 1;
	v14 = v6;
	*(int32_t *)(v5 + 4) = v10;
	v6 += 8;
	*(int32_t *)(v11 + 8) = v12 + 2;
	*(int32_t *)(v5 + 8) = v10;
	*(int32_t *)(v11 + 12) = v13 + 3;
	*(int32_t *)(v5 + 12) = v10;
	*(int32_t *)(v11 + 16) = v13 + 4;
	*(int32_t *)(v5 + 16) = v10;
	*(int32_t *)(v11 + 20) = v14 + 5;
	*(int32_t *)(v5 + 20) = v10;
	*(int32_t *)(v11 + 24) = v14 + 6;
	*(int32_t *)(v5 + 24) = v10;
	*(int32_t *)(v11 + 28) = v14 + 7;
	v11 += 32;
	*(int32_t *)(v5 + 28) = v10;
	v5 += 32;
	v18 = 14;
	// branch -> 0x6fd4c
	while (v18 != 0) {
		// 0x6fd4c
		*(int32_t *)v11 = v6;
		v10 = 0;
		v12 = v6;
		*(int32_t *)v5 = 0;
		v13 = v6;
		*(int32_t *)(v11 + 4) = v12 + 1;
		v14 = v6;
		*(int32_t *)(v5 + 4) = v10;
		v6 += 8;
		*(int32_t *)(v11 + 8) = v12 + 2;
		*(int32_t *)(v5 + 8) = v10;
		*(int32_t *)(v11 + 12) = v13 + 3;
		*(int32_t *)(v5 + 12) = v10;
		*(int32_t *)(v11 + 16) = v13 + 4;
		*(int32_t *)(v5 + 16) = v10;
		*(int32_t *)(v11 + 20) = v14 + 5;
		*(int32_t *)(v5 + 20) = v10;
		*(int32_t *)(v11 + 24) = v14 + 6;
		*(int32_t *)(v5 + 24) = v10;
		*(int32_t *)(v11 + 28) = v14 + 7;
		v11 += 32;
		*(int32_t *)(v5 + 28) = v10;
		v5 += 32;
		v18--;
		// continue -> 0x6fd4c
	}
	// 0x6ffa0
	v16 = v6;
	v26 = 4 * v16;
	v27 = g36 + v26;
	v7 = g33 + v26;
	if (v16 <= 124) {
		while (true) {
			// 0x6fdd0
			*(int32_t *)v27 = v16;
			result = v27 + 4;
			v6++;
			*(int32_t *)v7 = v10;
			v7 += 4;
			v19 = 124 - v16;
			v4 = v19;
			if (v19 != 0) {
				goto lab_0x6fdd0;
			}
			// 0x6fde8
			v9 = 0;
			v8 = g31;
			*(int32_t *)*(int32_t *)(g23 - 0x70ec) = 0;
			v7 = -1;
			v9 += 8;
			*(int32_t *)v8 = -1;
			result = 0;
			*(int32_t *)(v8 + 4) = 0;
			*(int32_t *)(v8 + 8) = result;
			*(int32_t *)(v8 + 12) = v7;
			*(int32_t *)(v8 + 16) = result;
			*(int32_t *)(v8 + 20) = result;
			*(int32_t *)(v8 + 24) = v7;
			*(int32_t *)(v8 + 28) = result;
			*(int32_t *)(v8 + 32) = result;
			*(int32_t *)(v8 + 36) = v7;
			*(int32_t *)(v8 + 40) = result;
			*(int32_t *)(v8 + 44) = result;
			*(int32_t *)(v8 + 48) = v7;
			*(int32_t *)(v8 + 52) = result;
			*(int32_t *)(v8 + 56) = result;
			*(int32_t *)(v8 + 60) = v7;
			*(int32_t *)(v8 + 64) = result;
			*(int32_t *)(v8 + 68) = result;
			*(int32_t *)(v8 + 72) = v7;
			*(int32_t *)(v8 + 76) = result;
			*(int32_t *)(v8 + 80) = result;
			*(int32_t *)(v8 + 84) = v7;
			*(int32_t *)(v8 + 88) = result;
			*(int32_t *)(v8 + 92) = result;
			v20 = v8 + 96;
			v8 = v20;
			v21 = 14;
			// branch -> 0x6fe00
			while (v21 != 0) {
				// 0x6fe00
				v7 = -1;
				v9 += 8;
				*(int32_t *)v20 = -1;
				result = 0;
				*(int32_t *)(v8 + 4) = 0;
				*(int32_t *)(v8 + 8) = result;
				*(int32_t *)(v8 + 12) = v7;
				*(int32_t *)(v8 + 16) = result;
				*(int32_t *)(v8 + 20) = result;
				*(int32_t *)(v8 + 24) = v7;
				*(int32_t *)(v8 + 28) = result;
				*(int32_t *)(v8 + 32) = result;
				*(int32_t *)(v8 + 36) = v7;
				*(int32_t *)(v8 + 40) = result;
				*(int32_t *)(v8 + 44) = result;
				*(int32_t *)(v8 + 48) = v7;
				*(int32_t *)(v8 + 52) = result;
				*(int32_t *)(v8 + 56) = result;
				*(int32_t *)(v8 + 60) = v7;
				*(int32_t *)(v8 + 64) = result;
				*(int32_t *)(v8 + 68) = result;
				*(int32_t *)(v8 + 72) = v7;
				*(int32_t *)(v8 + 76) = result;
				*(int32_t *)(v8 + 80) = result;
				*(int32_t *)(v8 + 84) = v7;
				*(int32_t *)(v8 + 88) = result;
				*(int32_t *)(v8 + 92) = result;
				v20 = v8 + 96;
				v8 = v20;
				v21--;
				// continue -> 0x6fe00
			}
			// 0x6ffb0
			v17 = v9;
			v28 = g31 + 12 * v17;
			v8 = v28;
			if (v17 <= 124) {
				*(int32_t *)v28 = v7;
				*(int32_t *)(v8 + 4) = result;
				*(int32_t *)(v8 + 8) = result;
				v22 = v8 + 12;
				v8 = v22;
				v23 = 124 - v17;
				while (v23 != 0) {
					// 0x6fe88
					*(int32_t *)v22 = v7;
					*(int32_t *)(v8 + 4) = result;
					*(int32_t *)(v8 + 8) = result;
					v22 = v8 + 12;
					v8 = v22;
					v23--;
					// continue -> 0x6fe88
				}
				// 0x6fe9c
				v7 = 0;
				// branch -> 0x6fea0
				while (true) {
					// 0x6fea0
					v4 = 14;
					result = 0;
					v15 = 0;
					v24 = 0;
					// branch -> 0x6feac
					goto lab_0x6feac_5;
				}
			}
			// 0x6fe9c
			v7 = 0;
			// branch -> 0x6fea0
			while (true) {
				// 0x6fea0
				v4 = 14;
				result = 0;
				v15 = 0;
				v24 = 0;
				// branch -> 0x6feac
				goto lab_0x6feac_5;
			}
		}
	}
	// 0x6fde8
	v9 = 0;
	v8 = g31;
	*(int32_t *)*(int32_t *)(g23 - 0x70ec) = 0;
	v7 = -1;
	v9 += 8;
	*(int32_t *)v8 = -1;
	result = 0;
	*(int32_t *)(v8 + 4) = 0;
	*(int32_t *)(v8 + 8) = result;
	*(int32_t *)(v8 + 12) = v7;
	*(int32_t *)(v8 + 16) = result;
	*(int32_t *)(v8 + 20) = result;
	*(int32_t *)(v8 + 24) = v7;
	*(int32_t *)(v8 + 28) = result;
	*(int32_t *)(v8 + 32) = result;
	*(int32_t *)(v8 + 36) = v7;
	*(int32_t *)(v8 + 40) = result;
	*(int32_t *)(v8 + 44) = result;
	*(int32_t *)(v8 + 48) = v7;
	*(int32_t *)(v8 + 52) = result;
	*(int32_t *)(v8 + 56) = result;
	*(int32_t *)(v8 + 60) = v7;
	*(int32_t *)(v8 + 64) = result;
	*(int32_t *)(v8 + 68) = result;
	*(int32_t *)(v8 + 72) = v7;
	*(int32_t *)(v8 + 76) = result;
	*(int32_t *)(v8 + 80) = result;
	*(int32_t *)(v8 + 84) = v7;
	*(int32_t *)(v8 + 88) = result;
	*(int32_t *)(v8 + 92) = result;
	v20 = v8 + 96;
	v8 = v20;
	v21 = 14;
	// branch -> 0x6fe00
	while (v21 != 0) {
		// 0x6fe00
		v7 = -1;
		v9 += 8;
		*(int32_t *)v20 = -1;
		result = 0;
		*(int32_t *)(v8 + 4) = 0;
		*(int32_t *)(v8 + 8) = result;
		*(int32_t *)(v8 + 12) = v7;
		*(int32_t *)(v8 + 16) = result;
		*(int32_t *)(v8 + 20) = result;
		*(int32_t *)(v8 + 24) = v7;
		*(int32_t *)(v8 + 28) = result;
		*(int32_t *)(v8 + 32) = result;
		*(int32_t *)(v8 + 36) = v7;
		*(int32_t *)(v8 + 40) = result;
		*(int32_t *)(v8 + 44) = result;
		*(int32_t *)(v8 + 48) = v7;
		*(int32_t *)(v8 + 52) = result;
		*(int32_t *)(v8 + 56) = result;
		*(int32_t *)(v8 + 60) = v7;
		*(int32_t *)(v8 + 64) = result;
		*(int32_t *)(v8 + 68) = result;
		*(int32_t *)(v8 + 72) = v7;
		*(int32_t *)(v8 + 76) = result;
		*(int32_t *)(v8 + 80) = result;
		*(int32_t *)(v8 + 84) = v7;
		*(int32_t *)(v8 + 88) = result;
		*(int32_t *)(v8 + 92) = result;
		v20 = v8 + 96;
		v8 = v20;
		v21--;
		// continue -> 0x6fe00
	}
	// 0x6ffb0
	v17 = v9;
	v28 = g31 + 12 * v17;
	v8 = v28;
	if (v17 <= 124) {
		*(int32_t *)v28 = v7;
		*(int32_t *)(v8 + 4) = result;
		*(int32_t *)(v8 + 8) = result;
		v22 = v8 + 12;
		v8 = v22;
		v23 = 124 - v17;
		while (v23 != 0) {
			// 0x6fe88
			*(int32_t *)v22 = v7;
			*(int32_t *)(v8 + 4) = result;
			*(int32_t *)(v8 + 8) = result;
			v22 = v8 + 12;
			v8 = v22;
			v23--;
			// continue -> 0x6fe88
		}
		// 0x6fe9c
		v7 = 0;
		// branch -> 0x6fea0
		while (true) {
			// 0x6fea0
			v4 = 14;
			result = 0;
			v15 = 0;
			v24 = 0;
			// branch -> 0x6feac
			goto lab_0x6feac_5;
		}
	}
	// 0x6fe9c
	v7 = 0;
	v25 = 0;
	// branch -> 0x6fea0
lab_0x6fea0:
	while (true) {
		// 0x6fea0
		v4 = 14;
		result = 0;
		v15 = v25;
		v24 = 0;
		// branch -> 0x6feac
		goto lab_0x6feac_5;
	}
}

// Address range: 0x6ffd0 - 0x70140
int32_t function_6ffd0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	g38 = a3;
	g33 = a4;
	int32_t v1 = a1;  // r26
	int32_t v2 = g38; // 0x6fff0
	g32 = v2;
	g35 = a5;
	int32_t v3 = a5; // 0x70064
	int32_t v4 = a4; // 0x70060
	if (a2 == a4) {
		// 0x70004
		if (v2 == a5) {
			int32_t v5 = 4 * a6;                                             // 0x70010
			int32_t v6 = *(int32_t *)(v5 + *(int32_t *)(g23 - 0x70d8)) + a4; // 0x70020
			g33 = v6;
			int32_t v7 = *(int32_t *)(*(int32_t *)(g23 - 0x70dc) + v5) + v2; // 0x70024
			g35 = v7;
			v3 = v7;
			v4 = v6;
			// branch -> 0x70028
		} else {
			v3 = a5;
			v4 = a4;
		}
	}
	// 0x70028
	int32_t v8;     // 0x700f8
	int32_t v9;     // 0x70110
	int32_t v10;    // 0x70104
	int32_t result; // 0x70124
	int32_t v11;    // 0x700f0
	if ((0x1000000 * a7 || 0xffffff) >= 0x1ffffff) {
		// 0x700c4
		g34 = a1;
		g37 = a2;
		g39 = v4;
		g40 = v3;
		g41 = 32;
		GetMissileVel();
		// branch -> 0x700e0
		// 0x700e0
		v11 = function_6dcc4(a2, g32, g33, g35);
		v8 = v1;
		SetMissDir(v8, v11);
		v10 = g36 + 180 * v8;
		v1 = v10;
		*(int32_t *)(v10 + 116) = 256;
		v9 = g31;
		*(int32_t *)(v1 + 148) = v9;
		*(int32_t *)(v1 + 152) = g32;
		result = AddLight(v9, g32, 5);
		*(int32_t *)(v1 + 140) = result;
		return result;
	}
	int32_t v12 = *(int32_t *)(g23 - 0x77a8); // 0x70034
	unsigned char v13 = *(char *)(v12 + 348); // 0x70038
	if (v13 == 1) {
		// 0x70044
		g34 = a1;
		g37 = a2;
		g41 = (int32_t)(*(char *)(v12 + 436) / 4 + 31);
		g39 = v4;
		g40 = v3;
		GetMissileVel();
		// branch -> 0x700e0
		// 0x700e0
		v11 = function_6dcc4(a2, g32, g33, g35);
		v8 = v1;
		SetMissDir(v8, v11);
		v10 = g36 + 180 * v8;
		v1 = v10;
		*(int32_t *)(v10 + 116) = 256;
		v9 = g31;
		*(int32_t *)(v1 + 148) = v9;
		*(int32_t *)(v1 + 152) = g32;
		result = AddLight(v9, g32, 5);
		*(int32_t *)(v1 + 140) = result;
		return result;
	}
	// 0x70070
	if (v13 == 0) {
		// 0x70078
		g34 = a1;
		g37 = a2;
		g41 = (int32_t)(*(char *)(v12 + 436) / 8 + 31);
		g39 = v4;
		g40 = v3;
		GetMissileVel();
		// branch -> 0x700e0
	} else {
		// 0x700a4
		g34 = a1;
		g37 = a2;
		g39 = v4;
		g40 = v3;
		g41 = 32;
		GetMissileVel();
		// branch -> 0x700e0
	}
	// 0x700e0
	v11 = function_6dcc4(a2, g32, g33, g35);
	v8 = v1;
	SetMissDir(v8, v11);
	v10 = g36 + 180 * v8;
	v1 = v10;
	*(int32_t *)(v10 + 116) = 256;
	v9 = g31;
	*(int32_t *)(v1 + 148) = v9;
	*(int32_t *)(v1 + 152) = g32;
	result = AddLight(v9, g32, 5);
	*(int32_t *)(v1 + 140) = result;
	return result;
}

// Address range: 0x70140 - 0x70284
int32_t function_70140(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	g38 = a3;
	g32 = a4;
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x70158
	g36 = v1;
	int32_t v2 = g38; // 0x70160
	g33 = a5;
	int32_t v3 = a5; // 0x70238
	int32_t v4 = a4; // 0x70234
	if (a4 == a2) {
		// 0x70174
		if (v2 == a5) {
			int32_t v5 = 4 * a6;                                             // 0x70180
			int32_t v6 = *(int32_t *)(v5 + *(int32_t *)(g23 - 0x70d8)) + a2; // 0x70190
			g32 = v6;
			int32_t v7 = *(int32_t *)(*(int32_t *)(g23 - 0x70dc) + v5) + v2; // 0x70194
			g33 = v7;
			v3 = v7;
			v4 = v6;
			// branch -> 0x70198
		} else {
			v3 = a5;
			v4 = a2;
		}
	}
	// 0x70198
	if ((0x1000000 * a7 || 0xffffff) < 0x1ffffff) {
		int32_t v8 = 0; // 0x701a0
		g41 = 32;
		if (__asm_rlwinm_(*(int32_t *)(v8 + v1 + 0x5568), 0, 29, 29) != 0) {
			// 0x701b8
			g37 = 32;
			g41 = random(64) + 16;
			// branch -> 0x701c8
		}
		int32_t v9 = v8 + g36;          // 0x701c8
		char v10 = *(char *)(v9 + 348); // 0x701cc
		if (v10 == 1) {
			// 0x701d8
			g41 += ((int32_t) * (char *)(v9 + 436) - 1) / 4;
			// branch -> 0x701ec
		}
		// 0x701ec
		if (v10 == 0) {
			// 0x701f4
			g41 += ((int32_t) * (char *)(v9 + 436) - 1) / 8;
			// branch -> 0x7020c
		}
		// 0x7020c
		g34 = a1;
		g37 = a2;
		g38 = v2;
		g39 = g32;
		g40 = g33;
		GetMissileVel();
		// branch -> 0x70244
	} else {
		// 0x70228
		g34 = a1;
		g37 = a2;
		g39 = v4;
		g40 = v3;
		g41 = 32;
		GetMissileVel();
		// branch -> 0x70244
	}
	int32_t v11 = function_6dcc4(a2, v2, g32, g33); // 0x70254
	int32_t result = g35 + 180 * a1;                // 0x70260
	*(int32_t *)(result + 96) = v11 + 1;
	*(int32_t *)(result + 116) = 256;
	return result;
}

// Address range: 0x70284 - 0x7033c
int32_t function_70284(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x70284
	g35 = *(int32_t *)(g23 - 0x7664);
	g36 = *(int32_t *)(g23 - 0x77ac);
	int32_t v1 = 1; // r26
	int32_t v2 = 1; // 0x702ac
	                // branch -> 0x702ac
lab_0x702ac:;
	int32_t result2; // r3
	int32_t v3;      // 0x7031c
	while (true) {
		int32_t v4 = -v2; // 0x702ac
		g33 = v4;
		int32_t v5 = v4; // r25
		int32_t v6 = v2; // 0x7030c
		int32_t v7;      // 0x7030c
		if (v2 >= v4) {
			int32_t v8 = v2; // 0x702f82
			while (true) {
				int32_t v9 = v4;       // r24
				int32_t v10 = a3 + v4; // 0x702bc
				int32_t v11;           // 0x70300
				int32_t result;        // 0x70338
				int32_t v12;           // 0x70304
				if (v4 > v8) {
					v12 = v8;
					v11 = v4;
				lab_0x70300:;
					int32_t v13 = v11 + 1; // 0x70300
					v5 = v13;
					if (v13 > v12) {
						// 0x7030c
						v7 = v12 + 1;
						v1 = v7;
						if (v7 >= 50) {
							// break (via goto) -> 0x70318
							goto lab_0x70318;
						}
						v2 = v7;
						// continue (via goto) -> 0x702ac
						goto lab_0x702ac;
					} else {
						// 0x70300
						v8 = v12;
						v4 = g33;
						// branch -> 0x702b8
						continue;
					}
					// 0x70328
					result = result2;
					return result;
				}
				while (true) {
					int32_t v14 = a2 + v4; // 0x702c4
					int32_t v15 = v14;     // r28
					if (function_a9df0(*(int32_t *)g36, v14, v10) != 0) {
						int32_t v16 = g35 + 180 * a1; // 0x702e4
						result2 = v16;
						*(int32_t *)(v16 + 4) = v15;
						*(int32_t *)(result2 + 8) = v10;
						// branch -> 0x70328
						// 0x70328
						return result2;
					}
					int32_t v17 = v9 + 1; // 0x702f4
					v9 = v17;
					int32_t v18 = v1; // 0x702f8
					if (v17 > v18) {
						// 0x702f8
						v12 = v18;
						v11 = v5;
						// branch -> 0x70300
						goto lab_0x70300;
					} else {
						// 0x702f4
						v4 = v17;
						// branch -> 0x702c4
						continue;
					}
					// 0x70328
					result = result2;
					return result;
				}
				int32_t v19 = a1;  // 0x70318
				int32_t v20 = g35; // 0x7031c
				v3 = v20 + 180 * v19;
				result2 = v3;
				int32_t v21 = a2; // 0x70320
				*(int32_t *)(v3 + 4) = v21;
				int32_t v22 = a3;      // 0x70324
				int32_t v23 = result2; // 0x70324
				*(int32_t *)(v23 + 8) = v22;
				// branch -> 0x70328
				// 0x70328
				result = result2;
				return result;
			}
		}
		// 0x7030c
		v7 = v6 + 1;
		v1 = v7;
		if (v7 >= 50) {
			// break -> 0x70318
			break;
		}
		v2 = v7;
		// continue -> 0x702ac
	}
lab_0x70318:
	// 0x70318
	v3 = g35 + 180 * a1;
	result2 = v3;
	*(int32_t *)(v3 + 4) = a2;
	*(int32_t *)(result2 + 8) = a3;
	// branch -> 0x70328
	// 0x70328
	return result2;
}

// Address range: 0x7033c - 0x70520
int32_t AddRndTeleport(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7688); // 0x70344
	int32_t v2 = *(int32_t *)(g23 - 0x7684); // r27
	int32_t v3 = *(int32_t *)(g23 - 0x7664); // 0x70350
	g33 = *(int32_t *)(g23 - 0x767c);
	g35 = *(int32_t *)(g23 - 0x757c);
	g36 = *(int32_t *)(g23 - 0x722c);
	int32_t v4 = 0; // 0x70374
	int32_t v5 = 1; // r23
	// branch -> 0x7039c
	int32_t v6;      // r5
	int32_t v7;      // 0x70468
	int32_t v8;      // 0x70478
	int32_t v9;      // 0x704b8
	int32_t v10;     // 0x70440
	int32_t v11;     // 0x70448
	int32_t v12;     // 0x7047c
	int32_t result;  // 0x70488
	int32_t v13;     // 0x704a8
	int32_t v14;     // 0x704e8
	int32_t result3; // 0x704f0
	int32_t result2; // 0x704c4
	int32_t v15;     // 0x70494
	while (true) {
		// 0x7039c
		g37 = 3;
		int32_t v16 = random(58) + 4; // r25
		g37 = 3;
		int32_t v17 = random(58) + 4; // r24
		g37 = 2;
		if (random(58) == 1) {
			// 0x703d0
			v16 = -v16;
			// branch -> 0x703d4
		}
		// 0x703d4
		g37 = 2;
		int32_t v18 = v17; // 0x703e8
		int32_t v19 = v18; // 0x70420
		if (random(58) == 1) {
			int32_t v20 = -v18; // 0x703e8
			v17 = v20;
			v19 = v20;
			// branch -> 0x703ec
		}
		int32_t v21 = v16 + a2;                            // 0x703ec
		int32_t v22 = 2 * (a3 + v19) + 224 * v21;          // 0x70400
		int16_t v23 = *(int16_t *)(*(int32_t *)g35 + v22); // 0x70404
		if (*(char *)(g36 + (int32_t)v23) == 0) {
			int32_t v24 = *(int32_t *)v2; // 0x70418
			if (*(char *)(112 * v21 + v19 + v24 + a3) == 0) {
				// 0x70430
				if (*(int16_t *)(*(int32_t *)g33 + v22) == 0) {
					// 0x70440
					v10 = 180 * a1;
					v6 = v10;
					v11 = v3 + v10;
					*(int32_t *)(v11 + 116) = 2;
					*(int32_t *)(v11 + 148) = 0;
					if (*(char *)*(int32_t *)(g23 - 0x77d8) != 0) {
						// 0x70468
						v7 = g23;
						if (*(char *)*(int32_t *)(v7 - 0x77e0) == 5) {
							// 0x70478
							v8 = a4;
							v12 = *(int32_t *)v2;
							result = (int32_t) * (char *)(a5 + 112 * v8 + v12);
							v15 = *(int32_t *)(v1 + 120 * result - 120);
							if (v15 != 84) {
								// 0x704a0
								if (v15 != 85) {
									// 0x7050c
									return result;
								}
							}
							// 0x704a8
							v13 = v6 + v3;
							*(int32_t *)(v13 + 4) = v8;
							v9 = a5;
							*(int32_t *)(v13 + 8) = v9;
							result2 = function_a9df0(*(int32_t *)*(int32_t *)(v7 - 0x77ac), a4, v9);
							if (result2 != 0) {
								// 0x7050c
								return result2;
							}
							// 0x704d0
							// branch -> 0x7050c
							// 0x7050c
							return function_70284(a1, a4, a5);
						}
					}
					// 0x704e4
					v14 = v6 + v3;
					*(int32_t *)(v14 + 4) = v16 + a2;
					result3 = v17 + a3;
					*(int32_t *)(v14 + 8) = result3;
					if ((0x1000000 * a6 || 0xffffff) >= 0x1ffffff) {
						// 0x704e4
						// branch -> 0x7050c
						// 0x7050c
						return result3;
					}
					// 0x70500
					g37 = 10;
					// branch -> 0x7050c
					// 0x7050c
					return UseMana(v4, 10);
				}
			}
		}
		int32_t v25 = v5 + 1; // 0x70384
		v5 = v25;
		if (v25 >= 501) {
			// break -> 0x70390
			break;
		}
		// continue -> 0x7039c
	}
	// 0x70390
	// branch -> 0x70440
	// 0x70440
	v10 = 180 * a1;
	v6 = v10;
	v11 = v3 + v10;
	*(int32_t *)(v11 + 116) = 2;
	*(int32_t *)(v11 + 148) = 0;
	int32_t result4; // 0x7051c
	if (*(char *)*(int32_t *)(g23 - 0x77d8) != 0) {
		// 0x70468
		v7 = g23;
		if (*(char *)*(int32_t *)(v7 - 0x77e0) == 5) {
			// 0x70478
			v8 = a4;
			v12 = *(int32_t *)v2;
			result = (int32_t) * (char *)(a5 + 112 * v8 + v12);
			v15 = *(int32_t *)(v1 + 120 * result - 120);
			if (v15 != 84) {
				// 0x704a0
				if (v15 != 85) {
					// 0x7050c
					return result;
				}
			}
			// 0x704a8
			v13 = v6 + v3;
			*(int32_t *)(v13 + 4) = v8;
			v9 = a5;
			*(int32_t *)(v13 + 8) = v9;
			result2 = function_a9df0(*(int32_t *)*(int32_t *)(v7 - 0x77ac), a4, v9);
			result4 = result2;
			if (result2 == 0) {
				// 0x704d0
				result4 = function_70284(a1, a4, a5);
				// branch -> 0x7050c
			}
			// 0x7050c
			return result4;
		}
	}
	// 0x704e4
	v14 = v6 + v3;
	*(int32_t *)(v14 + 4) = a2;
	result3 = a3;
	*(int32_t *)(v14 + 8) = result3;
	if ((0x1000000 * a6 || 0xffffff) < 0x1ffffff) {
		// 0x70500
		g37 = 10;
		result4 = UseMana(v4, 10);
		// branch -> 0x7050c
	} else {
		// 0x704e4
		result4 = result3;
		// branch -> 0x7050c
	}
	// 0x7050c
	return result4;
}

// Address range: 0x70520 - 0x706a0
int32_t AddFirebolt(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	g30 = a2;
	g32 = a4;
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x70534
	g36 = v1;
	int32_t v2 = a1; // r25
	g31 = a3;
	g33 = a5;
	int32_t v3 = 0; // r10
	g35 = v3;
	if (a4 == a2) {
		// 0x70554
		if (a3 == a5) {
			int32_t v4 = 4 * a6; // 0x70560
			g32 = *(int32_t *)(v4 + *(int32_t *)(g23 - 0x70d8)) + a2;
			g33 = *(int32_t *)(*(int32_t *)(g23 - 0x70dc) + v4) + a3;
			// branch -> 0x70578
		}
	}
	// 0x70578
	int32_t v5;     // 0x70658
	int32_t v6;     // 0x70670
	int32_t v7;     // 0x70664
	int32_t result; // 0x70684
	int32_t v8;     // 0x70650
	if ((0x1000000 * a7 || 0xffffff) >= 0x1ffffff) {
		// 0x70624
		g41 = 26;
		// branch -> 0x70628
		// 0x70628
		g34 = a1;
		g37 = g30;
		g38 = g31;
		g39 = g32;
		g40 = g33;
		GetMissileVel();
		v8 = function_6dcc4(g30, g31, g32, g33);
		v5 = v2;
		SetMissDir(v5, v8);
		v7 = g36 + 180 * v5;
		v2 = v7;
		*(int32_t *)(v7 + 116) = 256;
		v6 = g30;
		*(int32_t *)(v2 + 148) = v6;
		*(int32_t *)(v2 + 152) = g31;
		result = AddLight(v6, g31, 8);
		*(int32_t *)(v2 + 140) = result;
		return result;
	}
	int32_t v9 = *(int32_t *)*(int32_t *)(g23 - 0x7668); // 0x7058c
	int32_t v10 = 0;                                     // 0x705d8
	int32_t v11;                                         // 0x705ec
	int32_t v12;                                         // 0x705f4
	int32_t v13;                                         // 0x70604
	if (v9 >= 1) {
		int32_t v14 = v9;                         // 0x705d4
		int32_t v15 = 0;                          // 0x705d0
		int32_t v16 = *(int32_t *)(g23 - 0x7660); // 0x705cc
		int32_t v17;                              // 0x705d0
		while (true) {
			int32_t v18 = 180 * *(int32_t *)v16 + v1; // 0x705a4
			if (*(int32_t *)v18 == 2) {
				// 0x705b0
				if (v3 == *(int32_t *)(v18 + 120)) {
					// 0x705c0
					if (a1 == *(int32_t *)(v18 + 156)) {
						// 0x705d8
						// branch -> 0x705d8
						// 0x705d8
						v11 = v3;
						if (v15 == v9) {
							// 0x705e0
							g37 = 1;
							UseMana(v3, 1);
							v11 = g35;
							// branch -> 0x705ec
						}
						// 0x705ec
						if (v11 == -1) {
							// 0x7061c
							g41 = 16;
							// branch -> 0x70628
							// 0x70628
							g34 = v2;
							g37 = g30;
							g38 = g31;
							g39 = g32;
							g40 = g33;
							GetMissileVel();
							v8 = function_6dcc4(g30, g31, g32, g33);
							v5 = v2;
							SetMissDir(v5, v8);
							v7 = g36 + 180 * v5;
							v2 = v7;
							*(int32_t *)(v7 + 116) = 256;
							v6 = g30;
							*(int32_t *)(v2 + 148) = v6;
							*(int32_t *)(v2 + 152) = g31;
							result = AddLight(v6, g31, 8);
							*(int32_t *)(v2 + 140) = result;
							return result;
						}
						// 0x705f4
						v12 = v2;
						v13 = 2 * *(int32_t *)(g36 + 180 * v12 + 48) + 16;
						g41 = v13 < 63 ? v13 : 63;
						// branch -> 0x70628
						// 0x70628
						g34 = v12;
						g37 = g30;
						g38 = g31;
						g39 = g32;
						g40 = g33;
						GetMissileVel();
						v8 = function_6dcc4(g30, g31, g32, g33);
						v5 = v2;
						SetMissDir(v5, v8);
						v7 = g36 + 180 * v5;
						v2 = v7;
						*(int32_t *)(v7 + 116) = 256;
						v6 = g30;
						*(int32_t *)(v2 + 148) = v6;
						*(int32_t *)(v2 + 152) = g31;
						result = AddLight(v6, g31, 8);
						*(int32_t *)(v2 + 140) = result;
						return result;
					}
				}
			}
			// 0x705cc
			v17 = v15 + 1;
			int32_t v19 = v14 - 1; // 0x705d4
			if (v19 == 0) {
				// break -> 0x705d8
				break;
			}
			v14 = v19;
			v15 = v17;
			v16 += 4;
			// continue -> 0x7059c
		}
		// 0x705d8
		v10 = v17;
		// branch -> 0x705d8
	}
	// 0x705d8
	v11 = v3;
	if (v10 == v9) {
		// 0x705e0
		g37 = 1;
		UseMana(v3, 1);
		v11 = g35;
		// branch -> 0x705ec
	}
	// 0x705ec
	int32_t v20; // 0x70628
	if (v11 == -1) {
		// 0x7061c
		g41 = 16;
		v20 = v2;
		// branch -> 0x70628
	} else {
		// 0x705f4
		v12 = v2;
		v13 = 2 * *(int32_t *)(g36 + 180 * v12 + 48) + 16;
		g41 = v13 < 63 ? v13 : 63;
		v20 = v12;
		// branch -> 0x70628
	}
	// 0x70628
	g34 = v20;
	g37 = g30;
	g38 = g31;
	g39 = g32;
	g40 = g33;
	GetMissileVel();
	v8 = function_6dcc4(g30, g31, g32, g33);
	v5 = v2;
	SetMissDir(v5, v8);
	v7 = g36 + 180 * v5;
	v2 = v7;
	*(int32_t *)(v7 + 116) = 256;
	v6 = g30;
	*(int32_t *)(v2 + 148) = v6;
	*(int32_t *)(v2 + 152) = g31;
	result = AddLight(v6, g31, 8);
	*(int32_t *)(v2 + 140) = result;
	return result;
}

// Address range: 0x706a0 - 0x70750
int32_t AddMagmaball(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x706a0
	g38 = a3;
	g37 = a2;
	g34 = a1;
	g36 = *(int32_t *)(g23 - 0x7664);
	g41 = 16;
	g35 = g38;
	g33 = g37;
	g32 = g34;
	GetMissileVel();
	int32_t v1 = g32;            // 0x706d4
	int32_t v2 = g36 + 180 * v1; // 0x706d8
	g36 = v2;
	g34 = v1;
	int32_t *v3 = (int32_t *)(v2 + 36); // 0x706e4
	*v3 = *v3 + 3 * *(int32_t *)(v2 + 20);
	int32_t v4 = g36;                   // 0x706f4
	int32_t *v5 = (int32_t *)(v4 + 40); // 0x706f8
	*v5 = *v5 + 3 * *(int32_t *)(v4 + 24);
	GetMissilePos();
	*(int32_t *)(g36 + 116) = 256;
	*(int32_t *)(g36 + 148) = g33;
	*(int32_t *)(g36 + 152) = g35;
	int32_t result = AddLight(g33, g35, 8); // 0x70728
	*(int32_t *)(g36 + 140) = result;
	return result;
}

// Address range: 0x70750 - 0x707c4
int32_t miss_null_33(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x70750
	g38 = a3;
	g37 = a2;
	g34 = a1;
	g36 = *(int32_t *)(g23 - 0x7664);
	g41 = 16;
	g35 = g38;
	g33 = g37;
	g32 = g34;
	GetMissileVel();
	int32_t v1 = g36 + 180 * g32; // 0x70788
	*(int32_t *)(v1 + 116) = 256;
	g34 = g32;
	*(int32_t *)(v1 + 148) = g33;
	*(int32_t *)(v1 + 152) = g35;
	return PutMissile();
}

// Address range: 0x707c4 - 0x70954
int32_t AddTeleport(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = 180 * a1; // 0x707d0
	g32 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x707d4
	g36 = v2;
	int32_t v3 = v2 + v1; // 0x707dc
	int32_t v4;           // bp-88
	int32_t result = &v4; // r3
	v4 = *(int32_t *)*(int32_t *)(g23 - 0x5f10);
	int32_t v5 = *(int32_t *)(g23 - 0x70e0); // r5
	int32_t v6 = v3 + 52;                    // 0x7083c
	*(int32_t *)v6 = 1;
	g35 = *(int32_t *)*(int32_t *)(g23 - 0x7680);
	int32_t v7 = 0;
	if (v7 < 6) {
	lab_0x70854:
		while (true) {
			int32_t v8 = *(int32_t *)(result + 4 * v7); // 0x70858
			unsigned char v9 = *(char *)(v5 + v8);      // 0x7085c
			int32_t v10 = v9;                           // 0x7085c
			int32_t v11 = v8 + 1 + v5;                  // 0x70864
			int32_t v12 = v7;                           // 0x70910
			int32_t v13;                                // 0x70910
			if (v9 != 0) {
				// branch -> 0x70874
				while (true) {
					uint32_t v14 = (int32_t) * (char *)v11 + a2;       // 0x70880
					int32_t v15 = v14;                                 // r0
					uint32_t v16 = (int32_t) * (char *)(v11 + 1) + a3; // 0x70888
					int32_t v17 = v16;                                 // r25
					if (v14 >= 1) {
						// 0x70890
						if (v14 <= 111) {
							// 0x70898
							if (v16 >= 1) {
								// 0x708a0
								if (v16 <= 111) {
									int32_t v18 = v16 + 112 * v14;                                            // 0x708b0
									char v19 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7684) + v18);       // 0x708b8
									int32_t v20 = 2 * v16 + 224 * v14;                                        // 0x708bc
									char v21 = *(char *)(g35 + v18);                                          // 0x708c0
									int16_t v22 = *(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x757c) + v20); // 0x708c4
									int16_t v23 = *(int16_t *)(*(int32_t *)*(int32_t *)(g23 - 0x767c) + v20); // 0x708cc
									unsigned char v24 = *(char *)(*(int32_t *)(g23 - 0x722c) + (int32_t)v22); // 0x708d4
									if (((int32_t)(v21 | v19) || (int32_t)v23 || (int32_t)v24) == 0) {
										// 0x708e8
										*(int32_t *)(v3 + 4) = v14;
										*(int32_t *)(v3 + 8) = v17;
										*(int32_t *)(v3 + 28) = v15;
										*(int32_t *)(v3 + 32) = v17;
										*(int32_t *)(v3 + 52) = 0;
										// branch -> 0x70910
										// 0x70910
										v13 = 7;
										if (v13 >= 6) {
											// break (via goto) -> 0x70914
											goto lab_0x70914;
										}
										v7 = v13;
										// continue (via goto) -> 0x70854
										goto lab_0x70854;
									}
								}
							}
						}
					}
					int32_t v25 = v11 + 2; // 0x70908
					int32_t v26 = v10 - 1; // 0x7090c
					if (v26 == 0) {
						// break -> 0x70910
						break;
					}
					v10 = v26;
					v11 = v25;
					// continue -> 0x70874
				}
				// 0x70910
				v13 = v7 + 1;
				if (v13 >= 6) {
					// break -> 0x70914
					break;
				}
				v7 = v13;
				// continue -> 0x70854
				continue;
			}
			// 0x70910
			v13 = v12 + 1;
			if (v13 >= 6) {
				// break -> 0x70914
				break;
			}
			v7 = v13;
			// continue -> 0x70854
		}
	lab_0x70914:;
		// 0x70914
		// branch -> 0x7091c
	}
	// 0x7091c
	if (*(int32_t *)v6 == 0) {
		// 0x70928
		g37 = 23;
		UseMana(0, 23);
		int32_t v27 = g32 + g36; // 0x70934
		result = v27;
		*(int32_t *)(v27 + 116) = 2;
		// branch -> 0x70940
	}
	// 0x70940
	return result;
}

// Address range: 0x70954 - 0x709f0
int32_t AddLightball(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x70954
	g38 = a3;
	g37 = a2;
	g34 = a1;
	g36 = *(int32_t *)(g23 - 0x7664);
	g35 = *(int32_t *)(g23 - 0x77a8);
	int32_t v1 = g37; // 0x70968
	g32 = 0;
	g41 = 16;
	g33 = a4;
	GetMissileVel();
	int32_t v2 = g36 + 180 * g34; // 0x7098c
	g36 = v2;
	*(int32_t *)(v2 + 128) = g33;
	g37 = 8;
	int32_t v3 = random(63); // 0x7099c
	int32_t result = v3;     // r3
	*(int32_t *)(g36 + 96) = v3 + 1;
	*(int32_t *)(g36 + 116) = 255;
	if (g32 > -1) {
		int32_t v4 = g35 + 0x55ec * g32; // 0x709c8
		result = v4;
		*(int32_t *)(g36 + 148) = *(int32_t *)(v4 + 56);
		*(int32_t *)(g36 + 152) = *(int32_t *)(result + 60);
		// branch -> 0x709dc
	} else {
		// 0x709b8
		*(int32_t *)(g36 + 148) = v1;
		*(int32_t *)(g36 + 152) = g38;
		// branch -> 0x709dc
	}
	// 0x709dc
	return result;
}

// Address range: 0x709f0 - 0x70b94
int32_t function_709f0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	g35 = *(int32_t *)(g23 - 0x7664);
	g36 = *(int32_t *)(g23 - 0x77a8);
	g37 = 10;
	int32_t v1 = random(53); // r29
	g37 = 10;
	int32_t v2 = random(53); // 0x70a38
	int32_t v3 = 0;          // 0x70a3c
	g32 = v3;
	int32_t v4 = v1 + 2; // 0x70a40
	g39 = a4;
	int32_t v5 = 180 * a1; // 0x70a50
	g33 = v5;
	g37 = a2;
	int32_t v6 = g35 + v5; // 0x70a5c
	g38 = a3;
	g34 = a1;
	int32_t v7 = 16 * (v4 + v2 + (int32_t) * (char *)(g36 + v3 + 436)); // 0x70a70
	*(int32_t *)(v6 + 128) = v7;
	g41 = 16;
	int32_t *v8 = (int32_t *)(v6 + 128); // 0x70a7c
	uint32_t v9 = *v8;                   // 0x70a7c
	*v8 = v9 / 2 | v9 & -0x80000000;
	g40 = a5;
	GetMissileVel();
	int32_t v10 = g35 + 116 + g33; // 0x70a98
	*(int32_t *)v10 = 10;
	int32_t v11 = g33 + g35;              // 0x70a9c
	int32_t v12 = v11;                    // r5
	int32_t v13 = *(int32_t *)(v11 + 48); // 0x70aa0
	int32_t v14;                          // 0x70b6c
	int32_t *v15;                         // 0x70b40
	int32_t *v16;                         // 0x70b60
	int32_t v17;                          // 0x70b40
	int32_t result;                       // 0x70b74
	if (v13 < 1) {
		// 0x70b3c
		v15 = (int32_t *)v10;
		v17 = *v15;
		v12 = g33 + g35;
		*v15 = *(int32_t *)(g32 + g36 + 0x5574) * v17 / 128 + v17;
		v16 = (int32_t *)v10;
		*v16 = 16 * *v16;
		v14 = v12;
		result = *(int32_t *)v10 - *(int32_t *)(v14 + 76);
		*(int32_t *)(v14 + 148) = result;
		*(int32_t *)(v12 + 152) = 0;
		return result;
	}
	int32_t v18 = __asm_rlwinm_(v13, 29, 3, 31); // 0x70ab0
	int32_t v19;                                 // 0x70b38
	int32_t *v20;                                // 0x70b2c
	if (v18 == 0) {
		// 0x70ab0
		// branch -> 0x70b28
		// 0x70b28
		v20 = (int32_t *)(v12 + 116);
		*v20 = *v20 + 10;
		v19 = v13 - 1;
		// branch -> 0x70b2c
		while (v19 != 0) {
			// 0x70b2c
			v20 = (int32_t *)(v12 + 116);
			*v20 = *v20 + 10;
			v19--;
			// continue -> 0x70b2c
		}
		// 0x70b3c
		v15 = (int32_t *)v10;
		v17 = *v15;
		v12 = g33 + g35;
		*v15 = *(int32_t *)(g32 + g36 + 0x5574) * v17 / 128 + v17;
		v16 = (int32_t *)v10;
		*v16 = 16 * *v16;
		v14 = v12;
		result = *(int32_t *)v10 - *(int32_t *)(v14 + 76);
		*(int32_t *)(v14 + 148) = result;
		*(int32_t *)(v12 + 152) = 0;
		return result;
	}
	int32_t *v21 = (int32_t *)(v12 + 116); // 0x70abc
	*v21 = *v21 + 10;
	int32_t *v22 = (int32_t *)(v12 + 116); // 0x70ac8
	*v22 = *v22 + 10;
	int32_t *v23 = (int32_t *)(v12 + 116); // 0x70ad4
	*v23 = *v23 + 10;
	int32_t *v24 = (int32_t *)(v12 + 116); // 0x70ae0
	*v24 = *v24 + 10;
	int32_t *v25 = (int32_t *)(v12 + 116); // 0x70aec
	*v25 = *v25 + 10;
	int32_t *v26 = (int32_t *)(v12 + 116); // 0x70af8
	*v26 = *v26 + 10;
	int32_t *v27 = (int32_t *)(v12 + 116); // 0x70b04
	*v27 = *v27 + 10;
	int32_t *v28 = (int32_t *)(v12 + 116); // 0x70b10
	*v28 = *v28 + 10;
	int32_t v29 = v18 - 1; // 0x70b1c
	while (v29 != 0) {
		// 0x70abc
		v21 = (int32_t *)(v12 + 116);
		*v21 = *v21 + 10;
		v22 = (int32_t *)(v12 + 116);
		*v22 = *v22 + 10;
		v23 = (int32_t *)(v12 + 116);
		*v23 = *v23 + 10;
		v24 = (int32_t *)(v12 + 116);
		*v24 = *v24 + 10;
		v25 = (int32_t *)(v12 + 116);
		*v25 = *v25 + 10;
		v26 = (int32_t *)(v12 + 116);
		*v26 = *v26 + 10;
		v27 = (int32_t *)(v12 + 116);
		*v27 = *v27 + 10;
		v28 = (int32_t *)(v12 + 116);
		*v28 = *v28 + 10;
		v29--;
		// continue -> 0x70abc
	}
	int32_t v30 = v13 % 8; // 0x70b20
	if (v30 == 0) {
		// 0x70b3c
		v15 = (int32_t *)v10;
		v17 = *v15;
		v12 = g33 + g35;
		*v15 = *(int32_t *)(g32 + g36 + 0x5574) * v17 / 128 + v17;
		v16 = (int32_t *)v10;
		*v16 = 16 * *v16;
		v14 = v12;
		result = *(int32_t *)v10 - *(int32_t *)(v14 + 76);
		*(int32_t *)(v14 + 148) = result;
		*(int32_t *)(v12 + 152) = 0;
		return result;
	}
	// 0x70b28
	v20 = (int32_t *)(v12 + 116);
	*v20 = *v20 + 10;
	v19 = v30 - 1;
	// branch -> 0x70b2c
	while (v19 != 0) {
		// 0x70b2c
		v20 = (int32_t *)(v12 + 116);
		*v20 = *v20 + 10;
		v19--;
		// continue -> 0x70b2c
	}
	// 0x70b3c
	v15 = (int32_t *)v10;
	v17 = *v15;
	v12 = g33 + g35;
	*v15 = *(int32_t *)(g32 + g36 + 0x5574) * v17 / 128 + v17;
	v16 = (int32_t *)v10;
	*v16 = 16 * *v16;
	v14 = v12;
	result = *(int32_t *)v10 - *(int32_t *)(v14 + 76);
	*(int32_t *)(v14 + 148) = result;
	*(int32_t *)(v12 + 152) = 0;
	return result;
}

// Address range: 0x70b94 - 0x70dbc
int32_t AddFireball(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	g30 = a2;
	g32 = a4;
	g36 = *(int32_t *)(g23 - 0x7664);
	int32_t v1 = a1; // r25
	g31 = a3;
	g33 = a5;
	g35 = 0;
	int32_t v2 = a5; // 0x70d408
	int32_t v3 = a4; // 0x70d3c6
	if (a2 == a4) {
		// 0x70bc8
		if (a3 == a5) {
			int32_t v4 = 4 * a6;                                             // 0x70bd4
			int32_t v5 = *(int32_t *)(v4 + *(int32_t *)(g23 - 0x70d8)) + a2; // 0x70be4
			g32 = v5;
			int32_t v6 = *(int32_t *)(*(int32_t *)(g23 - 0x70dc) + v4) + a3; // 0x70be8
			g33 = v6;
			v2 = v6;
			v3 = v5;
			// branch -> 0x70bec
		} else {
			v2 = a5;
			v3 = a2;
		}
	}
	// 0x70bec
	int32_t v7;     // 0x70d30
	int32_t v8;     // 0x70d34
	int32_t v9;     // 0x70d38
	int32_t v10;    // 0x70d3c
	int32_t v11;    // 0x70d40
	int32_t v12;    // 0x70d44
	int32_t v13;    // 0x70d64
	int32_t v14;    // 0x70d80
	int32_t v15;    // 0x70d88
	int32_t v16;    // 0x70d70
	int32_t result; // 0x70da0
	int32_t v17;    // 0x70d5c
	if ((0x1000000 * a7 || 0xffffff) < 0x1ffffff) {
		// 0x70bf4
		g37 = 10;
		int32_t v18 = random(60); // r24
		g37 = 10;
		int32_t v19 = random(60);                                        // 0x70c0c
		int32_t v20 = v18 + 2;                                           // 0x70c18
		int32_t v21 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * g35;         // 0x70c1c
		int32_t v22 = g36 + 180 * v1;                                    // 0x70c2c
		int32_t v23 = v22 + 48;                                          // r6
		int32_t v24 = 2 * (v20 + v19 + (int32_t) * (char *)(v21 + 436)); // 0x70c3c
		*(int32_t *)(v22 + 128) = v24;
		int32_t v25 = *(int32_t *)(v22 + 48); // 0x70c44
		int32_t v26;
		int32_t v27; // 0x70d0c
		if (v25 >= 1) {
			int32_t v28 = __asm_rlwinm_(v25, 29, 3, 31); // 0x70c54
			int32_t v29;                                 // 0x70cec
			if (v28 == 0) {
				// 0x70c54
				v29 = v25;
				// branch -> 0x70cec
			} else {
				int32_t *v30 = (int32_t *)(v22 + 128); // 0x70c60
				int32_t v31 = *v30;                    // 0x70c60
				*v30 = v31 / 8 + v31;
				int32_t *v32 = (int32_t *)(v22 + 128); // 0x70c70
				int32_t v33 = *v32;                    // 0x70c70
				*v32 = v33 / 8 + v33;
				int32_t *v34 = (int32_t *)(v22 + 128); // 0x70c80
				int32_t v35 = *v34;                    // 0x70c80
				*v34 = v35 / 8 + v35;
				int32_t *v36 = (int32_t *)(v22 + 128); // 0x70c90
				int32_t v37 = *v36;                    // 0x70c90
				*v36 = v37 / 8 + v37;
				int32_t *v38 = (int32_t *)(v22 + 128); // 0x70ca0
				int32_t v39 = *v38;                    // 0x70ca0
				*v38 = v39 / 8 + v39;
				int32_t *v40 = (int32_t *)(v22 + 128); // 0x70cb0
				int32_t v41 = *v40;                    // 0x70cb0
				*v40 = v41 / 8 + v41;
				int32_t *v42 = (int32_t *)(v22 + 128); // 0x70cc0
				int32_t v43 = *v42;                    // 0x70cc0
				*v42 = v43 / 8 + v43;
				int32_t *v44 = (int32_t *)(v22 + 128); // 0x70cd0
				int32_t v45 = *v44;                    // 0x70cd0
				*v44 = v45 / 8 + v45;
				int32_t v46 = v28 - 1; // 0x70ce0
				while (v46 != 0) {
					// 0x70c60
					v30 = (int32_t *)(v22 + 128);
					v31 = *v30;
					*v30 = v31 / 8 + v31;
					v32 = (int32_t *)(v22 + 128);
					v33 = *v32;
					*v32 = v33 / 8 + v33;
					v34 = (int32_t *)(v22 + 128);
					v35 = *v34;
					*v34 = v35 / 8 + v35;
					v36 = (int32_t *)(v22 + 128);
					v37 = *v36;
					*v36 = v37 / 8 + v37;
					v38 = (int32_t *)(v22 + 128);
					v39 = *v38;
					*v38 = v39 / 8 + v39;
					v40 = (int32_t *)(v22 + 128);
					v41 = *v40;
					*v40 = v41 / 8 + v41;
					v42 = (int32_t *)(v22 + 128);
					v43 = *v42;
					*v42 = v43 / 8 + v43;
					v44 = (int32_t *)(v22 + 128);
					v45 = *v44;
					*v44 = v45 / 8 + v45;
					v46--;
					// continue -> 0x70c60
				}
				int32_t v47 = v25 % 8; // 0x70ce4
				if (v47 == 0) {
					// 0x70d04
					v27 = 2 * *(int32_t *)v23 + 16;
					if (v27 >= 51) {
						// 0x70d18
						v26 = 50;
						// branch -> 0x70d1c
					} else {
						v26 = v27;
					}
					// 0x70d1c
					g37 = 12;
					UseMana(g35, 12);
					// branch -> 0x70d30
					// 0x70d30
					g34 = v1;
					g37 = g30;
					g38 = g31;
					g39 = g32;
					g40 = g33;
					g41 = v26;
					GetMissileVel();
					v17 = function_6dcc4(g30, g31, g32, g33);
					v13 = v1;
					SetMissDir(v13, v17);
					v16 = g36 + 180 * v13;
					v1 = v16;
					*(int32_t *)(v16 + 116) = 256;
					v14 = g30;
					*(int32_t *)(v1 + 148) = v14;
					v15 = g31;
					*(int32_t *)(v1 + 152) = v15;
					*(int32_t *)(v1 + 156) = 0;
					*(int32_t *)(v1 + 160) = g30;
					*(int32_t *)(v1 + 164) = g31;
					result = AddLight(v14, v15, 8);
					*(int32_t *)(v1 + 140) = result;
					return result;
				}
				v29 = v47;
			}
			int32_t *v48 = (int32_t *)(v22 + 128); // 0x70cf0
			int32_t v49 = *v48;                    // 0x70cf0
			*v48 = v49 / 8 + v49;
			int32_t v50 = v29 - 1; // 0x70d00
			// branch -> 0x70cf0
			while (v50 != 0) {
				// 0x70cf0
				v48 = (int32_t *)(v22 + 128);
				v49 = *v48;
				*v48 = v49 / 8 + v49;
				v50--;
				// continue -> 0x70cf0
			}
			// 0x70d04
			// branch -> 0x70d04
		}
		// 0x70d04
		v27 = 2 * *(int32_t *)v23 + 16;
		if (v27 >= 51) {
			// 0x70d18
			v26 = 50;
			// branch -> 0x70d1c
		} else {
			v26 = v27;
		}
		// 0x70d1c
		g37 = 12;
		UseMana(g35, 12);
		v12 = v26;
		v11 = g33;
		v10 = g32;
		v9 = g31;
		v8 = g30;
		v7 = v1;
		// branch -> 0x70d30
	} else {
		// 0x70d2c
		v12 = 16;
		v11 = v2;
		v10 = v3;
		v9 = a3;
		v8 = a2;
		v7 = a1;
		// branch -> 0x70d30
	}
	// 0x70d30
	g34 = v7;
	g37 = v8;
	g38 = v9;
	g39 = v10;
	g40 = v11;
	g41 = v12;
	GetMissileVel();
	v17 = function_6dcc4(g30, g31, g32, g33);
	v13 = v1;
	SetMissDir(v13, v17);
	v16 = g36 + 180 * v13;
	v1 = v16;
	*(int32_t *)(v16 + 116) = 256;
	v14 = g30;
	*(int32_t *)(v1 + 148) = v14;
	v15 = g31;
	*(int32_t *)(v1 + 152) = v15;
	*(int32_t *)(v1 + 156) = 0;
	*(int32_t *)(v1 + 160) = g30;
	*(int32_t *)(v1 + 164) = g31;
	result = AddLight(v14, v15, 8);
	*(int32_t *)(v1 + 140) = result;
	return result;
}

// Address range: 0x70dbc - 0x70e60
int32_t AddLightctrl(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x70dc4
	g36 = v1;
	g30 = a1;
	g31 = a2;
	g32 = a3;
	g33 = a4;
	g35 = a5;
	int32_t v2 = a2; // 0x70e0c
	int32_t v3 = v1; // 0x70e08
	int32_t v4 = a1; // 0x70e04
	if (a7 == 0) {
		// 0x70df0
		if ((0x1000000 * a6 || 0xffffff) < 0x1ffffff) {
			// 0x70df8
			g37 = 3;
			UseMana(0, 3);
			v2 = g31;
			v3 = g36;
			v4 = g30;
			// branch -> 0x70e04
		} else {
			v2 = a2;
			v3 = v1;
			v4 = a1;
		}
	}
	int32_t v5 = 180 * v4 + v3; // 0x70e08
	g36 = v5;
	*(int32_t *)(v5 + 148) = v2;
	g34 = g30;
	g37 = g31;
	*(int32_t *)(g36 + 152) = g32;
	g38 = g32;
	g39 = g33;
	g40 = g35;
	g41 = 32;
	GetMissileVel();
	g37 = 8;
	int32_t result = random(52); // 0x70e38
	*(int32_t *)(g36 + 96) = result + 1;
	*(int32_t *)(g36 + 116) = 256;
	return result;
}

// Address range: 0x70e60 - 0x70f68
int32_t function_70e60(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = 180 * a1;                   // 0x70e68
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x70e6c
	g36 = v2;
	int32_t v3 = 0;       // r29
	int32_t v4 = v2 + v1; // 0x70e78
	*(int32_t *)(v4 + 28) = a2;
	*(int32_t *)(v4 + 32) = a3;
	int32_t v5; // r4
	if (a4 >= 0) {
		int32_t v6 = 180 * a4; // 0x70e94
		v5 = v6;
		int32_t v7 = g36;      // 0x70e98
		int32_t v8 = v7 + 12;  // 0x70e98
		int32_t v9 = v7 + 16;  // r5
		int32_t v10 = v7 + 36; // r6
		int32_t v11 = v7 + 40; // r7
		*(int32_t *)(v1 + v8) = *(int32_t *)(v8 + v6);
		int32_t v12 = *(int32_t *)(v5 + v9); // 0x70eb0
		*(int32_t *)(v1 + v9) = v12;
		int32_t v13 = *(int32_t *)(v5 + v10); // 0x70eb8
		*(int32_t *)(v1 + v10) = v13;
		int32_t v14 = *(int32_t *)(v5 + v11); // 0x70ec0
		*(int32_t *)(v1 + v11) = v14;
		// branch -> 0x70ec8
	}
	// 0x70ec8
	g37 = 8;
	int32_t v15 = random(52); // 0x70ed0
	int32_t v16 = v1 + g36;   // 0x70edc
	v5 = v16;
	*(int32_t *)(v16 + 96) = v15 + 1;
	int32_t v17;    // 0x70f3c
	int32_t result; // 0x70f4c
	if (a4 < 0) {
		// 0x70f10
		if (a4 < 0) {
			// 0x70f30
			*(int32_t *)(v1 + g36 + 116) = 8;
			// branch -> 0x70f3c
			// 0x70f3c
			v17 = v1 + g36;
			result = AddLight(*(int32_t *)(v17 + 4), *(int32_t *)(v17 + 8), 4);
			*(int32_t *)(v17 + 140) = result;
			return result;
		}
		// 0x70f18
		if (v3 != -1) {
			// 0x70f20
			*(int32_t *)(v1 + g36 + 116) = 10;
			// branch -> 0x70f3c
			// 0x70f3c
			v17 = v1 + g36;
			result = AddLight(*(int32_t *)(v17 + 4), *(int32_t *)(v17 + 8), 4);
			*(int32_t *)(v17 + 140) = result;
			return result;
		}
		// 0x70f30
		*(int32_t *)(v1 + g36 + 116) = 8;
		// branch -> 0x70f3c
		// 0x70f3c
		v17 = v1 + g36;
		result = AddLight(*(int32_t *)(v17 + 4), *(int32_t *)(v17 + 8), 4);
		*(int32_t *)(v17 + 140) = result;
		return result;
	}
	// 0x70ee8
	if (0x1000000 * a5 == 0x1000000) {
		// 0x70f10
		if (a4 >= 0) {
			// 0x70f18
			if (v3 != -1) {
				// 0x70f20
				*(int32_t *)(v1 + g36 + 116) = 10;
				// branch -> 0x70f3c
				// 0x70f3c
				v17 = v1 + g36;
				result = AddLight(*(int32_t *)(v17 + 4), *(int32_t *)(v17 + 8), 4);
				*(int32_t *)(v17 + 140) = result;
				return result;
			}
		}
		// 0x70f30
		*(int32_t *)(v1 + g36 + 116) = 8;
		// branch -> 0x70f3c
		// 0x70f3c
		v17 = v1 + g36;
		result = AddLight(*(int32_t *)(v17 + 4), *(int32_t *)(v17 + 8), 4);
		*(int32_t *)(v17 + 140) = result;
		return result;
	}
	// 0x70ef4
	if (v3 != -1) {
		uint32_t v18 = *(int32_t *)(v5 + 48); // 0x70efc
		*(int32_t *)(v5 + 116) = (v18 / 2 | v18 & -0x80000000) + 6;
		// branch -> 0x70f3c
		// 0x70f3c
		v17 = v1 + g36;
		result = AddLight(*(int32_t *)(v17 + 4), *(int32_t *)(v17 + 8), 4);
		*(int32_t *)(v17 + 140) = result;
		return result;
	}
	// 0x70f10
	if (a4 >= 0) {
		// 0x70f18
		if (v3 != -1) {
			// 0x70f20
			*(int32_t *)(v1 + g36 + 116) = 10;
			// branch -> 0x70f3c
			// 0x70f3c
			v17 = v1 + g36;
			result = AddLight(*(int32_t *)(v17 + 4), *(int32_t *)(v17 + 8), 4);
			*(int32_t *)(v17 + 140) = result;
			return result;
		}
	}
	// 0x70f30
	*(int32_t *)(v1 + g36 + 116) = 8;
	// branch -> 0x70f3c
	// 0x70f3c
	v17 = v1 + g36;
	result = AddLight(*(int32_t *)(v17 + 4), *(int32_t *)(v17 + 8), 4);
	*(int32_t *)(v17 + 140) = result;
	return result;
}

// Address range: 0x70f68 - 0x710c0
int32_t function_70f68(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // r31
	int32_t v2;                              // r10
	int32_t result;                          // r3
	int32_t v3;                              // r4
	int32_t v4;                              // r5
	int32_t v5;                              // r6
	int32_t v6;                              // 0x71020
	int32_t v7;                              // 0x71040
	int32_t v8;                              // 0x71048
	int32_t v9;                              // 0x7105c
	int32_t v10;                             // 0x71064
	int32_t v11;                             // 0x7106c
	int32_t v12;                             // 0x71074
	int32_t v13;                             // 0x7107c
	int32_t v14;                             // 0x71084
	int32_t v15;                             // 0x71094
	int32_t v16;                             // 0x7101c
	int32_t v17;                             // 0x71020
	int32_t v18;                             // 0x7102c
	int32_t v19;                             // 0x71050
	int32_t v20;                             // 0x7105c
	int32_t v21;                             // 0x71064
	int32_t v22;                             // 0x7106c
	int32_t v23;                             // 0x71074
	int32_t v24;                             // 0x7107c
	int32_t v25;                             // 0x71084
	if ((0x1000000 * a3 || 0xffffff) < 0x1ffffff || v2 < 1) {
		// 0x7101c
		v16 = 180 * a2;
		v4 = v16;
		v6 = v1;
		v17 = v6 + 4;
		v18 = 180 * a1;
		v5 = v18;
		*(int32_t *)(v18 + v17) = *(int32_t *)(v17 + v16);
		v7 = v1;
		v8 = v6 + 8;
		v19 = v5;
		result = v19 + v7;
		*(int32_t *)(v19 + v8) = *(int32_t *)(v4 + v8);
		v3 = 0;
		v9 = v6 + 28;
		v20 = *(int32_t *)(v4 + v9);
		*(int32_t *)(v5 + v9) = v20;
		v10 = v6 + 32;
		v21 = *(int32_t *)(v4 + v10);
		*(int32_t *)(v5 + v10) = v21;
		v11 = v6 + 12;
		v22 = *(int32_t *)(v4 + v11);
		*(int32_t *)(v5 + v11) = v22;
		v12 = v7 + 16;
		v23 = *(int32_t *)(v4 + v12);
		*(int32_t *)(v5 + v12) = v23;
		v13 = v7 + 36;
		v24 = *(int32_t *)(v4 + v13);
		*(int32_t *)(v5 + v13) = v24;
		v14 = v7 + 40;
		v25 = *(int32_t *)(v4 + v14);
		*(int32_t *)(v5 + v14) = v25;
		*(int32_t *)(result + 20) = v3;
		*(int32_t *)(result + 24) = v3;
		v15 = result;
		*(int32_t *)(v15 + 116) = *(int32_t *)(v15 + 76);
		*(int32_t *)(result + 148) = v3;
		return result;
	}
	int32_t v26 = *(int32_t *)(g23 - 0x7754) + 232 * v2 + 224; // 0x70fac
	int32_t v27 = v26;                                         // 0x70fc8
	if (*(char *)*(int32_t *)v26 == 101) {
		// 0x70fbc
		g37 = 23;
		SetMissAnim(a1);
		v27 = v26;
		// branch -> 0x70fc8
	}
	int32_t v28 = v27; // 0x70fe4
	if (*(char *)*(int32_t *)v27 == 102) {
		// 0x70fd8
		g37 = 41;
		SetMissAnim(a1);
		v28 = v26;
		// branch -> 0x70fe4
	}
	int32_t v29 = v28; // 0x71000
	if (*(char *)*(int32_t *)v28 == 103) {
		// 0x70ff4
		g37 = 45;
		SetMissAnim(a1);
		v29 = v26;
		// branch -> 0x71000
	}
	// 0x71000
	if (*(char *)*(int32_t *)v29 == 104) {
		// 0x71010
		g37 = 43;
		SetMissAnim(a1);
		// branch -> 0x7101c
	}
	// 0x7101c
	v16 = 180 * a2;
	v4 = v16;
	v6 = v1;
	v17 = v6 + 4;
	v18 = 180 * a1;
	v5 = v18;
	*(int32_t *)(v18 + v17) = *(int32_t *)(v17 + v16);
	v7 = v1;
	v8 = v6 + 8;
	v19 = v5;
	result = v19 + v7;
	*(int32_t *)(v19 + v8) = *(int32_t *)(v4 + v8);
	v3 = 0;
	v9 = v6 + 28;
	v20 = *(int32_t *)(v4 + v9);
	*(int32_t *)(v5 + v9) = v20;
	v10 = v6 + 32;
	v21 = *(int32_t *)(v4 + v10);
	*(int32_t *)(v5 + v10) = v21;
	v11 = v6 + 12;
	v22 = *(int32_t *)(v4 + v11);
	*(int32_t *)(v5 + v11) = v22;
	v12 = v7 + 16;
	v23 = *(int32_t *)(v4 + v12);
	*(int32_t *)(v5 + v12) = v23;
	v13 = v7 + 36;
	v24 = *(int32_t *)(v4 + v13);
	*(int32_t *)(v5 + v13) = v24;
	v14 = v7 + 40;
	v25 = *(int32_t *)(v4 + v14);
	*(int32_t *)(v5 + v14) = v25;
	*(int32_t *)(result + 20) = v3;
	*(int32_t *)(result + 24) = v3;
	v15 = result;
	*(int32_t *)(v15 + 116) = *(int32_t *)(v15 + 76);
	*(int32_t *)(result + 148) = v3;
	return result;
}

// Address range: 0x710c0 - 0x7114c
int32_t function_710c0(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x710c8
	int32_t v2 = 180 * a1;                   // 0x710d4
	int32_t v3 = v2 + v1;                    // 0x710e0
	int32_t v4 = 0;                          // r0
	*(int32_t *)(v3 + 4) = a2;
	*(int32_t *)(v3 + 8) = a3;
	*(int32_t *)(v3 + 28) = a2;
	*(int32_t *)(v3 + 32) = a3;
	*(int32_t *)(v3 + 20) = v4;
	*(int32_t *)(v3 + 24) = v4;
	*(int32_t *)(v3 + 148) = v4;
	*(int32_t *)(v3 + 152) = a4;
	*(int32_t *)(v3 + 44) = v4;
	if (a4 == 1) {
		// 0x71110
		g37 = 5;
		SetMissAnim(5);
		// branch -> 0x71124
	} else {
		// 0x7111c
		g37 = 26;
		SetMissAnim(26);
		// branch -> 0x71124
	}
	int32_t v5 = v2 + v1;                   // 0x71124
	int32_t result = *(int32_t *)(v5 + 76); // 0x71128
	*(int32_t *)(v5 + 116) = result - 1;
	return result;
}

// Address range: 0x7114c - 0x711e4
int32_t function_7114c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = g10;                        // 0x71150
	int32_t v2 = *(int32_t *)(g23 - 0x70f8); // 0x71154
	g36 = v2;
	g31 = a1;
	int32_t v3 = *(int32_t *)(g23 - 0x70f4); // 0x7115c
	g35 = v3;
	g32 = a2;
	g33 = 0;
	if (*(int32_t *)v2 > 0) {
		while (true) {
			int32_t v4 = *(int32_t *)v3; // 0x71174
			if (v4 == a1) {
				// 0x71180
				if (g32 == *(int32_t *)(v3 + 4)) {
					// 0x711d0
					g10 = v1;
					return 1;
				}
			}
			// 0x7118c
			g34 = v4 - a1;
			if (abs() <= 1) {
				// 0x7119c
				g34 = *(int32_t *)(g35 + 4) - g32;
				if (abs() <= 1) {
					// 0x711d0
					g10 = v1;
					return 1;
				}
			}
			int32_t v5 = g35 + 16; // 0x711b8
			g35 = v5;
			int32_t v6 = g33 + 1; // 0x711bc
			g33 = v6;
			if (v6 < *(int32_t *)g36) {
				// 0x711b8
				a1 = g31;
				v3 = v5;
				// branch -> 0x71174
				continue;
			}
		}
	}
	// 0x711d0
	g10 = v1;
	return 0;
}

// Address range: 0x711e4 - 0x714d0
int32_t function_711e4(int32_t a1, int32_t a2, int32_t a3)
{
	g31 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x7120c
	int32_t v2 = 0;                          // r13
	g25 = *(int32_t *)(g23 - 0x757c);
	g24 = *(int32_t *)(g23 - 0x722c);
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x5f14); // bp-104
	int32_t v4 = 180 * a1;                               // 0x71384
	int32_t v5;                                          // ctr
	int32_t v6;                                          // r3
	int32_t v7;                                          // r4
	int32_t v8;                                          // r5
	int32_t v9;                                          // 0x713b0
	int32_t v10;                                         // 0x713cc
	int32_t v11;                                         // 0x713f0
	int32_t v12;                                         // 0x71420
	int32_t v13;                                         // 0x71424
	int32_t v14;                                         // 0x7142413
	int32_t v15;                                         // 0x71430
	int32_t result2;                                     // 0x714cc
	int32_t v16;                                         // 0x713ac
	int32_t v17;                                         // 0x713b8
	int32_t v18;                                         // 0x713e0
	int32_t v19;                                         // 0x713f0
	int32_t v20;                                         // 0x713f8
	int32_t v21;                                         // 0x71440
	unsigned char v22;                                   // 0x71454
	int32_t v23;                                         // 0x713cc
	int32_t v24;                                         // 0x71430
	int32_t result;                                      // 0x71450
	int32_t v25;                                         // 0x7147c
	int32_t v26;                                         // 0x714a4
	int32_t v27;                                         // 0x714a8
	if (*(char *)*(int32_t *)(g23 - 0x77e4) == 0) {
		int32_t v28 = v1 + v4; // 0x71388
		v6 = v28;
		*(int32_t *)(v28 + 4) = a2;
		g35 = g31;
		*(int32_t *)(v6 + 8) = a3;
		g36 = a3;
		*(int32_t *)(v6 + 28) = g31;
		*(int32_t *)(v6 + 32) = a3;
		*(int32_t *)(v6 + 52) = 0;
		// branch -> 0x713ac
	lab_0x713ac:
		// 0x713ac
		v16 = 180 * a1;
		v9 = g23;
		v6 = *(int32_t *)(v9 - 0x7660);
		v17 = v1 + v16;
		v7 = v17;
		*(int32_t *)(v17 + 116) = 100;
		v8 = 0;
		v10 = v7;
		v23 = *(int32_t *)(v10 + 76);
		*(int32_t *)(v10 + 148) = *(int32_t *)(v17 + 116) - v23;
		*(int32_t *)(v7 + 152) = v8;
		v18 = *(int32_t *)*(int32_t *)(v9 - 0x7668);
		v5 = v18;
		if (v18 >= 1) {
			// 0x713f0
			v14 = v18;
			v11 = v6;
			// branch -> 0x713f0
			while (true) {
				// 0x713f0
				v19 = *(int32_t *)v11;
				v20 = v1 + 180 * v19;
				if (*(int32_t *)v20 == 10) {
					goto lab_0x71404;
				}
				v13 = v14;
				v12 = v11;
				goto lab_0x71420;
			}
		}
		// 0x71428
		g34 = a1;
		PutMissile();
		v15 = g23;
		v24 = *(int32_t *)(v15 - 0x77ac);
		result2 = v24;
		if (v2 == *(int32_t *)v24) {
			// 0x71440
			v21 = v16 + v1;
			if (*(int32_t *)(v21 + 52) == 0) {
				// 0x71450
				result = *(int32_t *)(v15 - 0x77e4);
				v22 = *(char *)result;
				if (v22 == 0) {
					// 0x714bc
					return result;
				}
				// 0x71460
				if (*(char *)*(int32_t *)(v15 - 0x77d8) == 0) {
					// 0x71470
					v25 = (int32_t) * (char *)*(int32_t *)(v15 - 0x7794);
					result2 = function_8b354(1, 56, g35 % 256, g36 % 256, (int32_t)v22, v25, 0);
					// branch -> 0x714bc
				} else {
					// 0x71494
					v26 = (int32_t) * (char *)*(int32_t *)(v15 - 0x77e0);
					v27 = (int32_t) * (char *)*(int32_t *)(v15 - 0x7794);
					result2 = function_8b354(1, 56, g35 % 256, g36 % 256, v26, v27, 1);
					// branch -> 0x714bc
				}
				// 0x714bc
				return result2;
			}
			result2 = v21;
		}
		// 0x714bc
		return result2;
	}
	int32_t v29 = v1 + v4; // 0x71270
	*(int32_t *)(v29 + 52) = 1;
	int32_t v30 = 0; // r18
	int32_t v31 = 0; // 0x71284
	                 // branch -> 0x71284
lab_0x71284:
	while (true) {
		int32_t v32 = *(int32_t *)((int32_t)&v3 + 4 * v31); // 0x71288
		int32_t v33 = *(int32_t *)(g23 - 0x70e0) + v32;     // 0x7128c
		unsigned char v34 = *(char *)v33;                   // 0x71290
		int32_t v35 = v34;                                  // 0x71290
		int32_t v36 = v33 + 1;                              // 0x71294
		g33 = v36;
		int32_t v37; // 0x71374
		if (v34 != 0) {
			while (true) {
				int32_t v38 = g31 + (int32_t) * (char *)v36;      // 0x712a8
				int32_t v39 = a3 + (int32_t) * (char *)(v36 + 1); // 0x712b0
				g36 = v39;
				g35 = v38;
				int32_t v40; // 0x71364
				int32_t v41; // 0x71368
				if (v38 >= 1) {
					// 0x712bc
					if (v38 <= 111) {
						// 0x712c4
						if (v39 >= 1) {
							// 0x712cc
							if (v39 <= 111) {
								int32_t v42 = 224 * v38;                                                     // 0x712d4
								int32_t v43 = v39 + 112 * v38;                                               // 0x712ec
								unsigned char v44 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7684) + v43); // 0x712f4
								int32_t v45 = 2 * v39 + v42;                                                 // 0x712f8
								unsigned char v46 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7680) + v43); // 0x712fc
								int32_t v47 = (int32_t) * (int16_t *)(*(int32_t *)g25 + v45);                // 0x71300
								unsigned char v48 = *(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7594) + v43); // 0x71308
								int32_t v49 = (int32_t) * (char *)(g24 + v47);                               // 0x71310
								unsigned char v50 = *(char *)(*(int32_t *)(g23 - 0x7234) + v47);             // 0x71314
								int32_t v51 = v49 | (int32_t)v44;                                            // 0x7131c
								if ((v51 | (int32_t)v46 || (int32_t)v50 || (int32_t)v48) == 0) {
									// 0x71330
									if (function_7114c(v38, v39, v51, v49, v45, v42) == 0) {
										// 0x71344
										*(int32_t *)(v29 + 4) = g35;
										*(int32_t *)(v29 + 8) = g36;
										*(int32_t *)(v29 + 28) = g35;
										*(int32_t *)(v29 + 32) = g36;
										*(int32_t *)(v29 + 52) = 0;
										// branch -> 0x71374
									} else {
										// 0x71330
										// branch -> 0x71364
										// 0x71364
										v40 = g33 + 2;
										g33 = v40;
										v41 = g32 - 1;
										if (v41 <= 0) {
											// break -> 0x71374
											break;
										}
										v35 = v41;
										v36 = v40;
										// continue -> 0x7129c
										continue;
									}
									// 0x71374
									v37 = 7;
									v30 = v37;
									if (v37 >= 6) {
										// break (via goto) -> 0x713ac
										goto lab_0x713ac;
									}
									v31 = v37;
									// continue (via goto) -> 0x71284
									goto lab_0x71284;
								}
							}
						}
					}
				}
				// 0x71364
				v40 = v36 + 2;
				g33 = v40;
				v41 = v35 - 1;
				if (v41 <= 0) {
					// break -> 0x71374
					break;
				}
				v35 = v41;
				v36 = v40;
				// continue -> 0x7129c
			}
			// 0x71374
			v37 = v30 + 1;
			v30 = v37;
			if (v37 >= 6) {
				// break -> 0x713ac
				break;
			}
			v31 = v37;
			// continue -> 0x71284
			continue;
		}
		// 0x71374
		v37 = v30 + 1;
		v30 = v37;
		if (v37 >= 6) {
			// break -> 0x713ac
			break;
		}
		v31 = v37;
		// continue -> 0x71284
	}
	// 0x713ac
	v16 = 180 * a1;
	v9 = g23;
	v6 = *(int32_t *)(v9 - 0x7660);
	v17 = v1 + v16;
	v7 = v17;
	*(int32_t *)(v17 + 116) = 100;
	v8 = 0;
	v10 = v7;
	v23 = *(int32_t *)(v10 + 76);
	*(int32_t *)(v10 + 148) = *(int32_t *)(v17 + 116) - v23;
	*(int32_t *)(v7 + 152) = v8;
	v18 = *(int32_t *)*(int32_t *)(v9 - 0x7668);
	v5 = v18;
	if (v18 >= 1) {
		// 0x713f0
		v14 = v18;
		v11 = v6;
		// branch -> 0x713f0
		while (true) {
			// 0x713f0
			v19 = *(int32_t *)v11;
			v20 = v1 + 180 * v19;
			v13 = v14;
			v12 = v11;
			if (*(int32_t *)v20 == 10) {
			lab_0x71404:
				// 0x71404
				if (v19 != a1) {
					// 0x7140c
					if (v2 == *(int32_t *)(v20 + 120)) {
						// 0x7141c
						*(int32_t *)(v20 + 116) = v8;
						v13 = v5;
						v12 = v6;
						// branch -> 0x71420
					} else {
						v13 = v14;
						v12 = v11;
					}
				} else {
					v13 = v14;
					v12 = v11;
				}
			}
		lab_0x71420:;
			int32_t v52 = v12 + 4; // 0x71420
			v6 = v52;
			int32_t v53 = v13 - 1; // 0x71424
			v5 = v53;
			if (v53 == 0) {
				// break -> 0x71428
				break;
			}
			v14 = v53;
			v11 = v52;
			// continue -> 0x713f0
		}
		// 0x71428
		// branch -> 0x71428
	}
	// 0x71428
	g34 = a1;
	PutMissile();
	v15 = g23;
	v24 = *(int32_t *)(v15 - 0x77ac);
	result2 = v24;
	if (v2 == *(int32_t *)v24) {
		// 0x71440
		v21 = v16 + v1;
		if (*(int32_t *)(v21 + 52) == 0) {
			// 0x71450
			result = *(int32_t *)(v15 - 0x77e4);
			v22 = *(char *)result;
			if (v22 != 0) {
				// 0x71460
				if (*(char *)*(int32_t *)(v15 - 0x77d8) == 0) {
					// 0x71470
					v25 = (int32_t) * (char *)*(int32_t *)(v15 - 0x7794);
					result2 = function_8b354(1, 56, g35 % 256, g36 % 256, (int32_t)v22, v25, 0);
					// branch -> 0x714bc
				} else {
					// 0x71494
					v26 = (int32_t) * (char *)*(int32_t *)(v15 - 0x77e0);
					v27 = (int32_t) * (char *)*(int32_t *)(v15 - 0x7794);
					result2 = function_8b354(1, 56, g35 % 256, g36 % 256, v26, v27, 1);
					// branch -> 0x714bc
				}
				// 0x714bc
				return result2;
			}
			result2 = result;
		} else {
			result2 = v21;
		}
	}
	// 0x714bc
	return result2;
}

// Address range: 0x714d0 - 0x71698
int32_t AddFlash(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x714d8
	g36 = v1;
	g31 = a1;
	int32_t v2 = 0; // 0x714e0
	int32_t result; // 0x71678
	if ((0x1000000 * a2 || 0xffffff) >= 0x1ffffff) {
		int32_t v3 = *(int32_t *)(g23 - 0x7754) + 232 * v2; // 0x71658
		int32_t v4 = 180 * a1 + v1;                         // 0x71668
		*(int32_t *)(v4 + 128) = 2 * (int32_t) * (char *)(v3 + 196);
		// branch -> 0x71674
		// 0x71674
		result = g36 + 180 * g31;
		*(int32_t *)(result + 116) = 19;
		return result;
	}
	// 0x714f4
	if (v2 == -1) {
		int32_t v5 = *(int32_t *)(g23 - 0x77e4); // 0x71634
		int32_t v6 = 180 * a1 + v1;              // 0x71640
		*(int32_t *)(v6 + 128) = (int32_t)(*(char *)v5 / 2);
		// branch -> 0x71674
	} else {
		int32_t v7 = 180 * a1; // 0x714fc
		int32_t v8 = v7 + v1;  // 0x71508
		g35 = v8;
		int32_t v9 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * v2; // r26
		int32_t v10 = v8 + 128;                                // 0x71518
		*(int32_t *)v10 = 0;
		int32_t v11 = 0; // r24
		int32_t v12;     // r4
		int32_t v13;     // 0x715fc
		int32_t v14;     // 0x71564
		int32_t v15;     // 0x715f0
		int32_t v16;     // 0x715f4
		int32_t v17;     // 0x71610
		int32_t *v18;    // 0x71614
		int32_t *v19;    // 0x71570
		int32_t *v20;    // 0x71580
		int32_t *v21;    // 0x71590
		int32_t *v22;    // 0x715a0
		int32_t *v23;    // 0x715b0
		int32_t *v24;    // 0x715c0
		int32_t *v25;    // 0x715d0
		int32_t *v26;    // 0x715e0
		int32_t *v27;    // 0x71600
		uint32_t v28;    // 0x71614
		uint32_t v29;    // 0x71558
		int32_t v30;     // 0x71570
		int32_t v31;     // 0x71580
		int32_t v32;     // 0x71590
		int32_t v33;     // 0x715a0
		int32_t v34;     // 0x715b0
		int32_t v35;     // 0x715c0
		int32_t v36;     // 0x715d0
		int32_t v37;     // 0x715e0
		int32_t v38;     // 0x71600
		if (*(char *)(v9 + 436) >= 0) {
			g37 = 20;
			int32_t v39 = random(55);              // 0x7152c
			int32_t *v40 = (int32_t *)(g35 + 128); // 0x71530
			v11++;
			*v40 = *v40 + v39 + 1;
			while (v11 <= (int32_t) * (char *)(v9 + 436)) {
				// 0x71524
				g37 = 20;
				v39 = random(55);
				v40 = (int32_t *)(g35 + 128);
				v11++;
				*v40 = *v40 + v39 + 1;
				// continue -> 0x71524
			}
			// 0x71554
			v29 = *(int32_t *)(v7 + g36 + 48);
			v12 = v29;
			if (v29 >= 1) {
				// 0x71564
				v14 = __asm_rlwinm_(v29, 29, 3, 31);
				if (v14 == 0) {
					// 0x71564
					v13 = v12;
					// branch -> 0x715fc
				} else {
					v19 = (int32_t *)(g35 + 128);
					v30 = *v19;
					*v19 = v30 / 8 + v30;
					v20 = (int32_t *)(g35 + 128);
					v31 = *v20;
					*v20 = v31 / 8 + v31;
					v21 = (int32_t *)(g35 + 128);
					v32 = *v21;
					*v21 = v32 / 8 + v32;
					v22 = (int32_t *)(g35 + 128);
					v33 = *v22;
					*v22 = v33 / 8 + v33;
					v23 = (int32_t *)(g35 + 128);
					v34 = *v23;
					*v23 = v34 / 8 + v34;
					v24 = (int32_t *)(g35 + 128);
					v35 = *v24;
					*v24 = v35 / 8 + v35;
					v25 = (int32_t *)(g35 + 128);
					v36 = *v25;
					*v25 = v36 / 8 + v36;
					v26 = (int32_t *)(g35 + 128);
					v37 = *v26;
					*v26 = v37 / 8 + v37;
					v15 = v14 - 1;
					while (v15 != 0) {
						// 0x71570
						v19 = (int32_t *)(g35 + 128);
						v30 = *v19;
						*v19 = v30 / 8 + v30;
						v20 = (int32_t *)(g35 + 128);
						v31 = *v20;
						*v20 = v31 / 8 + v31;
						v21 = (int32_t *)(g35 + 128);
						v32 = *v21;
						*v21 = v32 / 8 + v32;
						v22 = (int32_t *)(g35 + 128);
						v33 = *v22;
						*v22 = v33 / 8 + v33;
						v23 = (int32_t *)(g35 + 128);
						v34 = *v23;
						*v23 = v34 / 8 + v34;
						v24 = (int32_t *)(g35 + 128);
						v35 = *v24;
						*v24 = v35 / 8 + v35;
						v25 = (int32_t *)(g35 + 128);
						v36 = *v25;
						*v25 = v36 / 8 + v36;
						v26 = (int32_t *)(g35 + 128);
						v37 = *v26;
						*v26 = v37 / 8 + v37;
						v15--;
						// continue -> 0x71570
					}
					// 0x715f4
					v16 = v12 % 8;
					if (v16 == 0) {
						// 0x71614
						v18 = (int32_t *)v10;
						v28 = *v18;
						g37 = 4;
						*v18 = (v28 / 2 | v28 & -0x80000000) + v28;
						UseMana(v2, 4);
						// branch -> 0x71674
						// 0x71674
						result = g36 + 180 * g31;
						*(int32_t *)(result + 116) = 19;
						return result;
					}
					v13 = v16;
				}
				// 0x715fc
				v27 = (int32_t *)(g35 + 128);
				v38 = *v27;
				*v27 = v38 / 8 + v38;
				v17 = v13 - 1;
				// branch -> 0x71600
				while (v17 != 0) {
					// 0x71600
					v27 = (int32_t *)(g35 + 128);
					v38 = *v27;
					*v27 = v38 / 8 + v38;
					v17--;
					// continue -> 0x71600
				}
				// 0x71614
				// branch -> 0x71614
			}
			// 0x71614
			v18 = (int32_t *)v10;
			v28 = *v18;
			g37 = 4;
			*v18 = (v28 / 2 | v28 & -0x80000000) + v28;
			UseMana(v2, 4);
			// branch -> 0x71674
			// 0x71674
			result = g36 + 180 * g31;
			*(int32_t *)(result + 116) = 19;
			return result;
		}
		// 0x71554
		v29 = *(int32_t *)(v7 + g36 + 48);
		v12 = v29;
		if (v29 >= 1) {
			// 0x71564
			v14 = __asm_rlwinm_(v29, 29, 3, 31);
			if (v14 == 0) {
				// 0x71564
				v13 = v12;
				// branch -> 0x715fc
			} else {
				v19 = (int32_t *)(g35 + 128);
				v30 = *v19;
				*v19 = v30 / 8 + v30;
				v20 = (int32_t *)(g35 + 128);
				v31 = *v20;
				*v20 = v31 / 8 + v31;
				v21 = (int32_t *)(g35 + 128);
				v32 = *v21;
				*v21 = v32 / 8 + v32;
				v22 = (int32_t *)(g35 + 128);
				v33 = *v22;
				*v22 = v33 / 8 + v33;
				v23 = (int32_t *)(g35 + 128);
				v34 = *v23;
				*v23 = v34 / 8 + v34;
				v24 = (int32_t *)(g35 + 128);
				v35 = *v24;
				*v24 = v35 / 8 + v35;
				v25 = (int32_t *)(g35 + 128);
				v36 = *v25;
				*v25 = v36 / 8 + v36;
				v26 = (int32_t *)(g35 + 128);
				v37 = *v26;
				*v26 = v37 / 8 + v37;
				v15 = v14 - 1;
				while (v15 != 0) {
					// 0x71570
					v19 = (int32_t *)(g35 + 128);
					v30 = *v19;
					*v19 = v30 / 8 + v30;
					v20 = (int32_t *)(g35 + 128);
					v31 = *v20;
					*v20 = v31 / 8 + v31;
					v21 = (int32_t *)(g35 + 128);
					v32 = *v21;
					*v21 = v32 / 8 + v32;
					v22 = (int32_t *)(g35 + 128);
					v33 = *v22;
					*v22 = v33 / 8 + v33;
					v23 = (int32_t *)(g35 + 128);
					v34 = *v23;
					*v23 = v34 / 8 + v34;
					v24 = (int32_t *)(g35 + 128);
					v35 = *v24;
					*v24 = v35 / 8 + v35;
					v25 = (int32_t *)(g35 + 128);
					v36 = *v25;
					*v25 = v36 / 8 + v36;
					v26 = (int32_t *)(g35 + 128);
					v37 = *v26;
					*v26 = v37 / 8 + v37;
					v15--;
					// continue -> 0x71570
				}
				// 0x715f4
				v16 = v12 % 8;
				if (v16 == 0) {
					// 0x71614
					v18 = (int32_t *)v10;
					v28 = *v18;
					g37 = 4;
					*v18 = (v28 / 2 | v28 & -0x80000000) + v28;
					UseMana(v2, 4);
					// branch -> 0x71674
					// 0x71674
					result = g36 + 180 * g31;
					*(int32_t *)(result + 116) = 19;
					return result;
				}
				v13 = v16;
			}
			// 0x715fc
			v27 = (int32_t *)(g35 + 128);
			v38 = *v27;
			*v27 = v38 / 8 + v38;
			v17 = v13 - 1;
			// branch -> 0x71600
			while (v17 != 0) {
				// 0x71600
				v27 = (int32_t *)(g35 + 128);
				v38 = *v27;
				*v27 = v38 / 8 + v38;
				v17--;
				// continue -> 0x71600
			}
			// 0x71614
			// branch -> 0x71614
		}
		// 0x71614
		v18 = (int32_t *)v10;
		v28 = *v18;
		g37 = 4;
		*v18 = (v28 / 2 | v28 & -0x80000000) + v28;
		UseMana(v2, 4);
		// branch -> 0x71674
	}
	// 0x71674
	result = g36 + 180 * g31;
	*(int32_t *)(result + 116) = 19;
	return result;
}

// Address range: 0x71698 - 0x71830
int32_t function_71698(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x716a0
	g36 = v1;
	int32_t result; // r3
	int32_t v2;     // 0x71808
	if ((0x1000000 * a2 || 0xffffff) >= 0x1ffffff) {
		// 0x71804
		v2 = g36 + 180 * a1;
		result = v2;
		*(int32_t *)(v2 + 108) = 1;
		*(int32_t *)(result + 116) = 19;
		return result;
	}
	int32_t v3 = 0; // r10
	if (v3 == -1) {
		int32_t v4 = *(int32_t *)(g23 - 0x77e4); // 0x717ec
		int32_t v5 = 180 * a1 + v1;              // 0x717f8
		*(int32_t *)(v5 + 128) = (int32_t)(*(char *)v4 / 2);
		// branch -> 0x71804
	} else {
		int32_t v6 = 180 * a1;                                 // 0x716c0
		int32_t v7 = v6 + v1;                                  // 0x716cc
		int32_t v8 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * v3; // r27
		int32_t v9 = v7 + 128;                                 // 0x716dc
		*(int32_t *)v9 = 0;
		int32_t v10 = 0; // r25
		int32_t v11;     // r4
		int32_t v12;     // 0x717c0
		int32_t v13;     // 0x71728
		int32_t v14;     // 0x717b4
		int32_t v15;     // 0x717b8
		int32_t v16;     // 0x717d4
		int32_t *v17;    // 0x717d8
		int32_t *v18;    // 0x71734
		int32_t *v19;    // 0x71744
		int32_t *v20;    // 0x71754
		int32_t *v21;    // 0x71764
		int32_t *v22;    // 0x71774
		int32_t *v23;    // 0x71784
		int32_t *v24;    // 0x71794
		int32_t *v25;    // 0x717a4
		int32_t *v26;    // 0x717c4
		uint32_t v27;    // 0x717d8
		uint32_t v28;    // 0x7171c
		int32_t v29;     // 0x71734
		int32_t v30;     // 0x71744
		int32_t v31;     // 0x71754
		int32_t v32;     // 0x71764
		int32_t v33;     // 0x71774
		int32_t v34;     // 0x71784
		int32_t v35;     // 0x71794
		int32_t v36;     // 0x717a4
		int32_t v37;     // 0x717c4
		if (*(char *)(v8 + 436) >= 0) {
			g37 = 2;
			int32_t v38 = random(56);             // 0x716f0
			int32_t *v39 = (int32_t *)(v7 + 128); // 0x716f4
			v10++;
			*v39 = *v39 + v38 + 1;
			while (v10 <= (int32_t) * (char *)(v8 + 436)) {
				// 0x716e8
				g37 = 2;
				v38 = random(56);
				v39 = (int32_t *)(v7 + 128);
				v10++;
				*v39 = *v39 + v38 + 1;
				// continue -> 0x716e8
			}
			// 0x71718
			v28 = *(int32_t *)(v6 + g36 + 48);
			v11 = v28;
			if (v28 >= 1) {
				// 0x71728
				v13 = __asm_rlwinm_(v28, 29, 3, 31);
				if (v13 == 0) {
					// 0x71728
					v12 = v11;
					// branch -> 0x717c0
				} else {
					v18 = (int32_t *)(v7 + 128);
					v29 = *v18;
					*v18 = v29 / 8 + v29;
					v19 = (int32_t *)(v7 + 128);
					v30 = *v19;
					*v19 = v30 / 8 + v30;
					v20 = (int32_t *)(v7 + 128);
					v31 = *v20;
					*v20 = v31 / 8 + v31;
					v21 = (int32_t *)(v7 + 128);
					v32 = *v21;
					*v21 = v32 / 8 + v32;
					v22 = (int32_t *)(v7 + 128);
					v33 = *v22;
					*v22 = v33 / 8 + v33;
					v23 = (int32_t *)(v7 + 128);
					v34 = *v23;
					*v23 = v34 / 8 + v34;
					v24 = (int32_t *)(v7 + 128);
					v35 = *v24;
					*v24 = v35 / 8 + v35;
					v25 = (int32_t *)(v7 + 128);
					v36 = *v25;
					*v25 = v36 / 8 + v36;
					v14 = v13 - 1;
					while (v14 != 0) {
						// 0x71734
						v18 = (int32_t *)(v7 + 128);
						v29 = *v18;
						*v18 = v29 / 8 + v29;
						v19 = (int32_t *)(v7 + 128);
						v30 = *v19;
						*v19 = v30 / 8 + v30;
						v20 = (int32_t *)(v7 + 128);
						v31 = *v20;
						*v20 = v31 / 8 + v31;
						v21 = (int32_t *)(v7 + 128);
						v32 = *v21;
						*v21 = v32 / 8 + v32;
						v22 = (int32_t *)(v7 + 128);
						v33 = *v22;
						*v22 = v33 / 8 + v33;
						v23 = (int32_t *)(v7 + 128);
						v34 = *v23;
						*v23 = v34 / 8 + v34;
						v24 = (int32_t *)(v7 + 128);
						v35 = *v24;
						*v24 = v35 / 8 + v35;
						v25 = (int32_t *)(v7 + 128);
						v36 = *v25;
						*v25 = v36 / 8 + v36;
						v14--;
						// continue -> 0x71734
					}
					// 0x717b8
					v15 = v11 % 8;
					if (v15 == 0) {
						// 0x717d8
						v17 = (int32_t *)v9;
						v27 = *v17;
						*v17 = (v27 / 2 | v27 & -0x80000000) + v27;
						// branch -> 0x71804
						// 0x71804
						v2 = g36 + 180 * a1;
						result = v2;
						*(int32_t *)(v2 + 108) = 1;
						*(int32_t *)(result + 116) = 19;
						return result;
					}
					v12 = v15;
				}
				// 0x717c0
				v26 = (int32_t *)(v7 + 128);
				v37 = *v26;
				*v26 = v37 / 8 + v37;
				v16 = v12 - 1;
				// branch -> 0x717c4
				while (v16 != 0) {
					// 0x717c4
					v26 = (int32_t *)(v7 + 128);
					v37 = *v26;
					*v26 = v37 / 8 + v37;
					v16--;
					// continue -> 0x717c4
				}
				// 0x717d8
				// branch -> 0x717d8
			}
			// 0x717d8
			v17 = (int32_t *)v9;
			v27 = *v17;
			*v17 = (v27 / 2 | v27 & -0x80000000) + v27;
			// branch -> 0x71804
			// 0x71804
			v2 = g36 + 180 * a1;
			result = v2;
			*(int32_t *)(v2 + 108) = 1;
			*(int32_t *)(result + 116) = 19;
			return result;
		}
		// 0x71718
		v28 = *(int32_t *)(v6 + g36 + 48);
		v11 = v28;
		if (v28 >= 1) {
			// 0x71728
			v13 = __asm_rlwinm_(v28, 29, 3, 31);
			if (v13 == 0) {
				// 0x71728
				v12 = v11;
				// branch -> 0x717c0
			} else {
				v18 = (int32_t *)(v7 + 128);
				v29 = *v18;
				*v18 = v29 / 8 + v29;
				v19 = (int32_t *)(v7 + 128);
				v30 = *v19;
				*v19 = v30 / 8 + v30;
				v20 = (int32_t *)(v7 + 128);
				v31 = *v20;
				*v20 = v31 / 8 + v31;
				v21 = (int32_t *)(v7 + 128);
				v32 = *v21;
				*v21 = v32 / 8 + v32;
				v22 = (int32_t *)(v7 + 128);
				v33 = *v22;
				*v22 = v33 / 8 + v33;
				v23 = (int32_t *)(v7 + 128);
				v34 = *v23;
				*v23 = v34 / 8 + v34;
				v24 = (int32_t *)(v7 + 128);
				v35 = *v24;
				*v24 = v35 / 8 + v35;
				v25 = (int32_t *)(v7 + 128);
				v36 = *v25;
				*v25 = v36 / 8 + v36;
				v14 = v13 - 1;
				while (v14 != 0) {
					// 0x71734
					v18 = (int32_t *)(v7 + 128);
					v29 = *v18;
					*v18 = v29 / 8 + v29;
					v19 = (int32_t *)(v7 + 128);
					v30 = *v19;
					*v19 = v30 / 8 + v30;
					v20 = (int32_t *)(v7 + 128);
					v31 = *v20;
					*v20 = v31 / 8 + v31;
					v21 = (int32_t *)(v7 + 128);
					v32 = *v21;
					*v21 = v32 / 8 + v32;
					v22 = (int32_t *)(v7 + 128);
					v33 = *v22;
					*v22 = v33 / 8 + v33;
					v23 = (int32_t *)(v7 + 128);
					v34 = *v23;
					*v23 = v34 / 8 + v34;
					v24 = (int32_t *)(v7 + 128);
					v35 = *v24;
					*v24 = v35 / 8 + v35;
					v25 = (int32_t *)(v7 + 128);
					v36 = *v25;
					*v25 = v36 / 8 + v36;
					v14--;
					// continue -> 0x71734
				}
				// 0x717b8
				v15 = v11 % 8;
				if (v15 == 0) {
					// 0x717d8
					v17 = (int32_t *)v9;
					v27 = *v17;
					*v17 = (v27 / 2 | v27 & -0x80000000) + v27;
					// branch -> 0x71804
					// 0x71804
					v2 = g36 + 180 * a1;
					result = v2;
					*(int32_t *)(v2 + 108) = 1;
					*(int32_t *)(result + 116) = 19;
					return result;
				}
				v12 = v15;
			}
			// 0x717c0
			v26 = (int32_t *)(v7 + 128);
			v37 = *v26;
			*v26 = v37 / 8 + v37;
			v16 = v12 - 1;
			// branch -> 0x717c4
			while (v16 != 0) {
				// 0x717c4
				v26 = (int32_t *)(v7 + 128);
				v37 = *v26;
				*v26 = v37 / 8 + v37;
				v16--;
				// continue -> 0x717c4
			}
			// 0x717d8
			// branch -> 0x717d8
		}
		// 0x717d8
		v17 = (int32_t *)v9;
		v27 = *v17;
		*v17 = (v27 / 2 | v27 & -0x80000000) + v27;
		// branch -> 0x71804
	}
	// 0x71804
	v2 = g36 + 180 * a1;
	result = v2;
	*(int32_t *)(v2 + 108) = 1;
	*(int32_t *)(result + 116) = 19;
	return result;
}

// Address range: 0x71830 - 0x718ec
int32_t AddManashield(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x71838
	g36 = v1;
	int32_t v2 = 0; // r10
	g33 = v2;
	int32_t v3 = 0x55ec * v2; // 0x7184c
	g35 = v3;
	int32_t v4 = v3 + v1;                               // 0x7185c
	int32_t v5 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x71860
	*(int32_t *)(v5 + 116) = 48 * (int32_t) * (char *)(v4 + 436);
	*(int32_t *)(v5 + 148) = *(int32_t *)(v4 + 404);
	*(int32_t *)(v5 + 152) = *(int32_t *)(v4 + 396);
	*(int32_t *)(v5 + 176) = -1;
	if (0x1000000 * a2 == 0) {
		// 0x7189c
		g37 = 11;
		UseMana(g33, 11);
		// branch -> 0x718a8
	}
	// 0x718a8
	if (g33 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		// 0x718b8
		NetSendCmd(1, 92);
		// branch -> 0x718c4
	}
	int32_t result = g35 + g36; // 0x718c4
	*(char *)(result + 0x5594) = 1;
	return result;
}

// Address range: 0x718ec - 0x719b4
int32_t function_718ec(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	g36 = *(int32_t *)(g23 - 0x7664);
	g32 = a4;
	g33 = a5;
	g35 = 0;
	g37 = 10;
	int32_t v1 = random(59);                                // 0x71920
	int32_t v2 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * g35; // 0x7192c
	int32_t v3 = g36 + 180 * a1;                            // 0x7193c
	g36 = v3;
	int32_t v4 = v1 + 1 + (int32_t) * (char *)(v2 + 436); // 0x71944
	*(int32_t *)(v3 + 128) = v4;
	g34 = a1;
	g37 = a2;
	g38 = a3;
	g39 = g32;
	g40 = g33;
	g41 = 16;
	GetMissileVel();
	*(int32_t *)(g36 + 116) = 255;
	*(int32_t *)(g36 + 148) = 0;
	*(int32_t *)(g36 + 152) = 0;
	int32_t *v5 = (int32_t *)(g36 + 4); // 0x7197c
	*v5 = *v5 + 1;
	int32_t *v6 = (int32_t *)(g36 + 8); // 0x71988
	*v6 = *v6 + 1;
	int32_t *v7 = (int32_t *)(g36 + 16); // 0x71994
	int32_t result = *v7;                // 0x71994
	*v7 = result - 32;
	return result;
}

// Address range: 0x719b4 - 0x71d94
int32_t AddGuardian(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	// 0x719b4
	g28 = a2;
	g27 = a3;
	g26 = a4;
	g25 = a5;
	int32_t v1 = *(int32_t *)(g23 - 0x70e0); // 0x719e4
	g37 = 10;
	int32_t v2 = 0;                                             // 0x71a04
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x5f18);        // bp-136
	int32_t v4 = random(62);                                    // 0x71a34
	int32_t v5 = 0x55ec * v2;                                   // 0x71a40
	int32_t v6 = 180 * a1;                                      // 0x71a54
	char *v7 = (char *)(*(int32_t *)(g23 - 0x77a8) + v5 + 436); // 0x71a60
	int32_t v8 = (int32_t)*v7;                                  // 0x71a68
	int32_t v9 = *(int32_t *)(g23 - 0x7664) + v6;               // 0x71a70
	*(int32_t *)(v9 + 128) = v4 + 1 + (v8 / 2 | v8 & -0x80000000);
	int32_t *v10 = (int32_t *)(v9 + 48); // 0x71a90
	uint32_t v11 = *v10;                 // 0x71a90
	int32_t v12;                         // r14
	int32_t result2;                     // r3
	int32_t v13;                         // r6
	int32_t v14;                         // 0x71b94
	int32_t v15;                         // 0x71bac
	int32_t v16;
	int32_t v17;       // 0x71cc8
	int32_t v18;       // 0x71d40
	int32_t v19;       // 0x71d60
	int32_t v20;       // 0x71ba4
	int32_t v21;       // 0x71ce0
	int32_t *v22;      // 0x71d34
	int32_t *v23;      // 0x71d40
	int32_t v24;       // 0x71b6c
	int32_t result;    // 0x71b7c
	int32_t v25;       // 0x71b9c
	int32_t v26;       // 0x71cbc
	uint32_t v27;      // 0x71cf8
	int32_t *v28;      // 0x71d08
	int32_t v29;       // 0x71d5c
	int32_t *v30;      // 0x71b7c
	int32_t v31;       // 0x71cd0
	int32_t v32;       // 0x71cd4
	int32_t v33;       // 0x71d08
	int32_t v34;       // 0x71d64
	unsigned char v35; // 0x71ba0
	if (v11 >= 1) {
		int32_t v36 = __asm_rlwinm_(v11, 29, 3, 31); // 0x71aa8
		int32_t v37;                                 // 0x71b40
		if (v36 == 0) {
			// 0x71aa8
			v37 = v11;
			// branch -> 0x71b40
		} else {
			int32_t *v38 = (int32_t *)(v9 + 128); // 0x71ab4
			int32_t v39 = *v38;                   // 0x71ab4
			*v38 = v39 / 8 + v39;
			int32_t *v40 = (int32_t *)(v9 + 128); // 0x71ac4
			int32_t v41 = *v40;                   // 0x71ac4
			*v40 = v41 / 8 + v41;
			int32_t *v42 = (int32_t *)(v9 + 128); // 0x71ad4
			int32_t v43 = *v42;                   // 0x71ad4
			*v42 = v43 / 8 + v43;
			int32_t *v44 = (int32_t *)(v9 + 128); // 0x71ae4
			int32_t v45 = *v44;                   // 0x71ae4
			*v44 = v45 / 8 + v45;
			int32_t *v46 = (int32_t *)(v9 + 128); // 0x71af4
			int32_t v47 = *v46;                   // 0x71af4
			*v46 = v47 / 8 + v47;
			int32_t *v48 = (int32_t *)(v9 + 128); // 0x71b04
			int32_t v49 = *v48;                   // 0x71b04
			*v48 = v49 / 8 + v49;
			int32_t *v50 = (int32_t *)(v9 + 128); // 0x71b14
			int32_t v51 = *v50;                   // 0x71b14
			*v50 = v51 / 8 + v51;
			int32_t *v52 = (int32_t *)(v9 + 128); // 0x71b24
			int32_t v53 = *v52;                   // 0x71b24
			*v52 = v53 / 8 + v53;
			int32_t v54 = v36 - 1; // 0x71b34
			while (v54 != 0) {
				// 0x71ab4
				v38 = (int32_t *)(v9 + 128);
				v39 = *v38;
				*v38 = v39 / 8 + v39;
				v40 = (int32_t *)(v9 + 128);
				v41 = *v40;
				*v40 = v41 / 8 + v41;
				v42 = (int32_t *)(v9 + 128);
				v43 = *v42;
				*v42 = v43 / 8 + v43;
				v44 = (int32_t *)(v9 + 128);
				v45 = *v44;
				*v44 = v45 / 8 + v45;
				v46 = (int32_t *)(v9 + 128);
				v47 = *v46;
				*v46 = v47 / 8 + v47;
				v48 = (int32_t *)(v9 + 128);
				v49 = *v48;
				*v48 = v49 / 8 + v49;
				v50 = (int32_t *)(v9 + 128);
				v51 = *v50;
				*v50 = v51 / 8 + v51;
				v52 = (int32_t *)(v9 + 128);
				v53 = *v52;
				*v52 = v53 / 8 + v53;
				v54--;
				// continue -> 0x71ab4
			}
			int32_t v55 = v11 % 8; // 0x71b38
			if (v55 == 0) {
				// 0x71b58
				v12 = 0;
				v24 = &v3;
				result = v6 + 52 + *(int32_t *)(g23 - 0x7664);
				v30 = (int32_t *)result;
				*v30 = 1;
				v16 = v12;
				if (v16 >= 6) {
					// 0x71ca0
					if (*v30 == 1) {
						// 0x71d80
						return result;
					}
					// 0x71cb0
					v26 = *(int32_t *)(g23 - 0x7664) + v6;
					v12 = v26;
					*(int32_t *)(v26 + 120) = v2;
					v17 = v12;
					v31 = AddLight(*(int32_t *)(v17 + 4), *(int32_t *)(v17 + 8), 1);
					v32 = *(int32_t *)(g23 - 0x77a8);
					*(int32_t *)(v12 + 140) = v31;
					v21 = v12 + 116;
					result2 = v21;
					v27 = (int32_t)*v7;
					*(int32_t *)v21 = *v10 + (v27 / 2 | v27 & -0x80000000);
					v28 = (int32_t *)(v12 + 116);
					v33 = *v28;
					*v28 = *(int32_t *)(v5 + v32 + 0x5574) * v33 / 128 + v33;
					if (*(int32_t *)(v12 + 116) >= 31) {
						// 0x71d2c
						*(int32_t *)result2 = 30;
						// branch -> 0x71d34
					}
					// 0x71d34
					v22 = (int32_t *)result2;
					*v22 = 16 * *v22;
					v18 = result2;
					v23 = (int32_t *)v18;
					if (*v23 <= 29) {
						// 0x71d4c
						*v23 = 30;
						v19 = result2;
						// branch -> 0x71d54
					} else {
						v19 = v18;
					}
					// 0x71d54
					v29 = *(int32_t *)(g23 - 0x7664) + v6;
					v13 = v29;
					v34 = *(int32_t *)(v29 + 76);
					result2 = 0;
					*(int32_t *)(v29 + 148) = *(int32_t *)v19 - v34;
					*(int32_t *)(v13 + 152) = result2;
					*(int32_t *)(v13 + 156) = 1;
					// branch -> 0x71d80
					// 0x71d80
					return result2;
				}
				v14 = v16;
				while (true) {
					// 0x71b90
					v25 = v1 + *(int32_t *)(4 * v14 + v24);
					v35 = *(char *)v25;
					g31 = v35;
					v20 = v25 + 1;
					g33 = v20;
					int32_t v56; // 0x71c94
					if (v35 != 0) {
						v15 = v20;
					lab_0x71bac:;
						int32_t v57; // 0x71c94
						while (true) {
							uint32_t v58 = g26 + (int32_t) * (char *)v15;      // 0x71bbc
							int32_t v59 = g25 + (int32_t) * (char *)(v15 + 1); // 0x71bc4
							if (v58 >= 1) {
								// 0x71be0
								if (v58 <= 111) {
									// 0x71be8
									if (v59 >= 1) {
										// 0x71bf0
										if (v59 <= 111) {
											// 0x71bf8
											if (function_85a14(g28, g27, v58, v59) != 0) {
												int32_t v60 = g36;                                                           // 0x71c14
												int32_t v61 = g35 + 112 * v60;                                               // 0x71c24
												unsigned char v62 = *(char *)(v61 + *(int32_t *)g22);                        // 0x71c28
												int32_t v63 = g29;                                                           // 0x71c2c
												unsigned char v64 = *(char *)(v63 + *(int32_t *)(g23 - 0x722c));             // 0x71c2c
												int16_t v65 = *(int16_t *)(g30 + *(int32_t *)*(int32_t *)(g23 - 0x767c));    // 0x71c30
												unsigned char v66 = *(char *)(v61 + *(int32_t *)*(int32_t *)(g23 - 0x7594)); // 0x71c38
												int32_t v67 = (int32_t) * (char *)(g24 + v63);                               // 0x71c40
												int32_t v68 = (int32_t)v65 | (int32_t)v64 | (int32_t)v62 | v67;              // 0x71c4c
												if ((v68 || (int32_t)v66) == 0) {
													// 0x71c58
													*(int32_t *)(g32 + 4) = v60;
													g37 = 13;
													*(int32_t *)(g32 + 8) = g35;
													*(int32_t *)(g32 + 28) = g36;
													*(int32_t *)(g32 + 32) = g35;
													*(int32_t *)(g32 + 52) = 0;
													UseMana(v2, 13);
													v57 = 6;
													// branch -> 0x71c94
												lab_0x71c94:
													// 0x71c94
													v56 = v57 + 1;
													v12 = v56;
													if (v56 >= 6) {
														// break (via goto) -> 0x71ca0
														goto lab_0x71ca0;
													}
													v14 = v56;
													// continue (via goto) -> 0x71b90
													goto lab_0x71b90;
												}
											}
										}
									}
								}
							}
							int32_t v69 = g33 + 2; // 0x71c84
							g33 = v69;
							int32_t v70 = g31 - 1; // 0x71c88
							g31 = v70;
							if (v70 <= 0) {
								// break -> 0x71c8c
								break;
							}
							v15 = v69;
							// continue -> 0x71bac
						}
						// 0x71c8c
						v57 = v12;
						// branch -> 0x71c94
						goto lab_0x71c94;
					}
				lab_0x71c94_2:
					// 0x71c94
					v56 = v14 + 1;
					v12 = v56;
					if (v56 >= 6) {
						// break -> 0x71ca0
						break;
					}
					v14 = v56;
					// continue -> 0x71b90
				}
				// 0x71ca0
				if (*v30 == 1) {
					// 0x71d80
					return result;
				}
				// 0x71cb0
				v26 = *(int32_t *)(g23 - 0x7664) + v6;
				v12 = v26;
				*(int32_t *)(v26 + 120) = v2;
				v17 = v12;
				v31 = AddLight(*(int32_t *)(v17 + 4), *(int32_t *)(v17 + 8), 1);
				v32 = *(int32_t *)(g23 - 0x77a8);
				*(int32_t *)(v12 + 140) = v31;
				v21 = v12 + 116;
				result2 = v21;
				v27 = (int32_t)*v7;
				*(int32_t *)v21 = *v10 + (v27 / 2 | v27 & -0x80000000);
				v28 = (int32_t *)(v12 + 116);
				v33 = *v28;
				*v28 = *(int32_t *)(v5 + v32 + 0x5574) * v33 / 128 + v33;
				if (*(int32_t *)(v12 + 116) >= 31) {
					// 0x71d2c
					*(int32_t *)result2 = 30;
					// branch -> 0x71d34
				}
				// 0x71d34
				v22 = (int32_t *)result2;
				*v22 = 16 * *v22;
				v18 = result2;
				v23 = (int32_t *)v18;
				if (*v23 <= 29) {
					// 0x71d4c
					*v23 = 30;
					v19 = result2;
					// branch -> 0x71d54
				} else {
					v19 = v18;
				}
				// 0x71d54
				v29 = *(int32_t *)(g23 - 0x7664) + v6;
				v13 = v29;
				v34 = *(int32_t *)(v29 + 76);
				result2 = 0;
				*(int32_t *)(v29 + 148) = *(int32_t *)v19 - v34;
				*(int32_t *)(v13 + 152) = result2;
				*(int32_t *)(v13 + 156) = 1;
				// branch -> 0x71d80
				// 0x71d80
				return result2;
			}
			v37 = v55;
		}
		int32_t *v71 = (int32_t *)(v9 + 128); // 0x71b44
		int32_t v72 = *v71;                   // 0x71b44
		*v71 = v72 / 8 + v72;
		int32_t v73 = v37 - 1; // 0x71b54
		// branch -> 0x71b44
		while (v73 != 0) {
			// 0x71b44
			v71 = (int32_t *)(v9 + 128);
			v72 = *v71;
			*v71 = v72 / 8 + v72;
			v73--;
			// continue -> 0x71b44
		}
		// 0x71b58
		// branch -> 0x71b58
	}
	// 0x71b58
	v12 = 0;
	v24 = &v3;
	result = v6 + 52 + *(int32_t *)(g23 - 0x7664);
	v30 = (int32_t *)result;
	*v30 = 1;
	v16 = v12;
	if (v16 < 6) {
		v14 = v16;
	lab_0x71b90:
		while (true) {
			// 0x71b90
			v25 = v1 + *(int32_t *)(4 * v14 + v24);
			v35 = *(char *)v25;
			g31 = v35;
			v20 = v25 + 1;
			g33 = v20;
			if (v35 == 0) {
				goto lab_0x71c94_2;
			}
			v15 = v20;
			goto lab_0x71bac;
		}
	}
lab_0x71ca0:
	// 0x71ca0
	if (*v30 == 1) {
		// 0x71d80
		return result;
	}
	// 0x71cb0
	v26 = *(int32_t *)(g23 - 0x7664) + v6;
	v12 = v26;
	*(int32_t *)(v26 + 120) = v2;
	v17 = v12;
	v31 = AddLight(*(int32_t *)(v17 + 4), *(int32_t *)(v17 + 8), 1);
	v32 = *(int32_t *)(g23 - 0x77a8);
	*(int32_t *)(v12 + 140) = v31;
	v21 = v12 + 116;
	result2 = v21;
	v27 = (int32_t)*v7;
	*(int32_t *)v21 = *v10 + (v27 / 2 | v27 & -0x80000000);
	v28 = (int32_t *)(v12 + 116);
	v33 = *v28;
	*v28 = *(int32_t *)(v5 + v32 + 0x5574) * v33 / 128 + v33;
	if (*(int32_t *)(v12 + 116) >= 31) {
		// 0x71d2c
		*(int32_t *)result2 = 30;
		// branch -> 0x71d34
	}
	// 0x71d34
	v22 = (int32_t *)result2;
	*v22 = 16 * *v22;
	v18 = result2;
	v23 = (int32_t *)v18;
	if (*v23 <= 29) {
		// 0x71d4c
		*v23 = 30;
		v19 = result2;
		// branch -> 0x71d54
	} else {
		v19 = v18;
	}
	// 0x71d54
	v29 = *(int32_t *)(g23 - 0x7664) + v6;
	v13 = v29;
	v34 = *(int32_t *)(v29 + 76);
	result2 = 0;
	*(int32_t *)(v29 + 148) = *(int32_t *)v19 - v34;
	*(int32_t *)(v13 + 152) = result2;
	*(int32_t *)(v13 + 156) = 1;
	// branch -> 0x71d80
	// 0x71d80
	return result2;
}

// Address range: 0x71d94 - 0x71dd8
int32_t AddChain(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x71d94
	g37 = 14;
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x71dac
	*(int32_t *)(v1 + 148) = a2;
	*(int32_t *)(v1 + 152) = a3;
	*(int32_t *)(v1 + 116) = 1;
	return UseMana(0, 14);
}

// Address range: 0x71dd8 - 0x71e34
int32_t function_71dd8(int32_t a1, int32_t a2)
{
	SetMissDir(a2, a2);
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x71e00
	*(int32_t *)(v1 + 128) = 0;
	*(int32_t *)(v1 + 104) = 1;
	*(int32_t *)(v1 + 116) = 250;
	return 1;
}

// Address range: 0x71e34 - 0x71ea0
int32_t function_71e34(int32_t a1, int32_t a2)
{
	int32_t v1; // 0x71e60
	if (a2 >= 4) {
		// 0x71e58
		v1 = 2;
		// branch -> 0x71e5c
	} else {
		v1 = a2;
	}
	// 0x71e5c
	SetMissDir(a1, v1);
	int32_t v2 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x71e6c
	*(int32_t *)(v2 + 128) = 0;
	*(int32_t *)(v2 + 104) = 1;
	*(int32_t *)(v2 + 116) = 250;
	return 1;
}

// Address range: 0x71ea0 - 0x71f0c
int32_t function_71ea0(int32_t result, int32_t a2)
{
	int32_t v1; // 0x71ecc
	if (a2 >= 4) {
		// 0x71ec4
		v1 = 2;
		// branch -> 0x71ec8
	} else {
		v1 = a2;
	}
	// 0x71ec8
	SetMissDir(result, v1);
	int32_t v2 = *(int32_t *)(g23 - 0x7664) + 180 * result; // 0x71ed8
	result = v2;
	*(int32_t *)(v2 + 128) = 0;
	*(int32_t *)(result + 104) = 1;
	*(int32_t *)(result + 116) = *(int32_t *)(result + 76);
	return result;
}

// Address range: 0x71f0c - 0x72058
int32_t function_71f0c(int32_t a1, int32_t a2)
{
	// 0x71f0c
	g34 = a1;
	int32_t v1 = 0; // 0x71f14
	g32 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7754); // 0x71f18
	g35 = v2;
	g36 = *(int32_t *)(g23 - 0x7664);
	int32_t v3 = g34;            // 0x71f28
	int32_t v4 = v2 + v1 + 224;  // 0x71f34
	int32_t v5 = *(int32_t *)v4; // 0x71f34
	g33 = v4;
	unsigned char v6 = *(char *)v5; // 0x71f3c
	int32_t v7;                     // r26
	int32_t v8;                     // r4
	int32_t v9;                     // r5
	int32_t v10;                    // r6
	int32_t v11;                    // 0x72010
	int32_t v12;                    // 0x71f80
	int32_t v13;                    // 0x71f84
	int32_t v14;                    // 0x71f98
	int32_t v15;                    // 0x71fc0
	unsigned char v16;              // 0x71fd8
	int32_t v17;                    // 0x71ff4
	int32_t v18;                    // 0x7201c
	int32_t v19;                    // 0x72028
	if (v6 >= 64) {
		// 0x71f48
		if (v6 <= 67) {
			// 0x71f50
			v7 = v5 + 384;
			// branch -> 0x71f74
			// 0x71f74
			g41 = 18;
			GetMissileVel();
			v12 = 180 * v3;
			v10 = v12;
			v13 = g36 + v12;
			v9 = v13;
			*(int32_t *)(v13 + 44) = a2;
			*(int32_t *)(v9 + 60) = 0;
			v14 = 8 * a2 + v7;
			*(int32_t *)(v9 + 64) = *(int32_t *)(v14 + 4);
			*(int32_t *)(v9 + 68) = *(int32_t *)(v14 + 8);
			*(int32_t *)(v9 + 72) = *(int32_t *)(v7 + 72);
			*(int32_t *)(v9 + 76) = *(int32_t *)(v7 + 68);
			v15 = *(int32_t *)g33;
			v8 = v15;
			*(int32_t *)(v9 + 80) = *(int32_t *)(v15 + 492);
			*(int32_t *)(v9 + 84) = *(int32_t *)(v8 + 496);
			*(int32_t *)(v9 + 92) = 1;
			v16 = *(char *)v8;
			if (v16 >= 89) {
				// 0x71fe4
				if (v16 <= 92) {
					// 0x71fec
					*(int32_t *)(v9 + 96) = 7;
					// branch -> 0x71ff4
				}
			}
			// 0x71ff4
			v17 = v10 + g36;
			v9 = v17;
			v8 = g32 + g35;
			*(int32_t *)(v17 + 148) = 0;
			*(int32_t *)(v9 + 152) = 0;
			*(int32_t *)(v9 + 104) = 1;
			v11 = v8;
			if (*(char *)(v11 + 192) != 0) {
				// 0x7201c
				v18 = (int32_t) * (char *)(v11 + 193);
				*(int32_t *)(v9 + 112) = v18 + 1;
				v19 = (int32_t) * (char *)(v8 + 219);
				*(int32_t *)(v9 + 140) = v19;
				// branch -> 0x72030
			}
			// 0x72030
			*(int32_t *)(g36 + 116 + v10) = 256;
			g34 = v3;
			return PutMissile();
		}
		// 0x71f58
		if (v6 >= 89) {
			// 0x71f60
			if (v6 <= 92) {
				// 0x71f68
				v7 = v5 + 156;
				// branch -> 0x71f74
				// 0x71f74
				g41 = 18;
				GetMissileVel();
				v12 = 180 * v3;
				v10 = v12;
				v13 = g36 + v12;
				v9 = v13;
				*(int32_t *)(v13 + 44) = a2;
				*(int32_t *)(v9 + 60) = 0;
				v14 = 8 * a2 + v7;
				*(int32_t *)(v9 + 64) = *(int32_t *)(v14 + 4);
				*(int32_t *)(v9 + 68) = *(int32_t *)(v14 + 8);
				*(int32_t *)(v9 + 72) = *(int32_t *)(v7 + 72);
				*(int32_t *)(v9 + 76) = *(int32_t *)(v7 + 68);
				v15 = *(int32_t *)g33;
				v8 = v15;
				*(int32_t *)(v9 + 80) = *(int32_t *)(v15 + 492);
				*(int32_t *)(v9 + 84) = *(int32_t *)(v8 + 496);
				*(int32_t *)(v9 + 92) = 1;
				v16 = *(char *)v8;
				if (v16 >= 89) {
					// 0x71fe4
					if (v16 <= 92) {
						// 0x71fec
						*(int32_t *)(v9 + 96) = 7;
						// branch -> 0x71ff4
					}
				}
				// 0x71ff4
				v17 = v10 + g36;
				v9 = v17;
				v8 = g32 + g35;
				*(int32_t *)(v17 + 148) = 0;
				*(int32_t *)(v9 + 152) = 0;
				*(int32_t *)(v9 + 104) = 1;
				v11 = v8;
				if (*(char *)(v11 + 192) != 0) {
					// 0x7201c
					v18 = (int32_t) * (char *)(v11 + 193);
					*(int32_t *)(v9 + 112) = v18 + 1;
					v19 = (int32_t) * (char *)(v8 + 219);
					*(int32_t *)(v9 + 140) = v19;
					// branch -> 0x72030
				}
				// 0x72030
				*(int32_t *)(g36 + 116 + v10) = 256;
				g34 = v3;
				return PutMissile();
			}
		}
		// 0x71f70
		v7 = v5 + 80;
		// branch -> 0x71f74
		// 0x71f74
		g41 = 18;
		GetMissileVel();
		v12 = 180 * v3;
		v10 = v12;
		v13 = g36 + v12;
		v9 = v13;
		*(int32_t *)(v13 + 44) = a2;
		*(int32_t *)(v9 + 60) = 0;
		v14 = 8 * a2 + v7;
		*(int32_t *)(v9 + 64) = *(int32_t *)(v14 + 4);
		*(int32_t *)(v9 + 68) = *(int32_t *)(v14 + 8);
		*(int32_t *)(v9 + 72) = *(int32_t *)(v7 + 72);
		*(int32_t *)(v9 + 76) = *(int32_t *)(v7 + 68);
		v15 = *(int32_t *)g33;
		v8 = v15;
		*(int32_t *)(v9 + 80) = *(int32_t *)(v15 + 492);
		*(int32_t *)(v9 + 84) = *(int32_t *)(v8 + 496);
		*(int32_t *)(v9 + 92) = 1;
		v16 = *(char *)v8;
		if (v16 >= 89) {
			// 0x71fe4
			if (v16 <= 92) {
				// 0x71fec
				*(int32_t *)(v9 + 96) = 7;
				// branch -> 0x71ff4
			}
		}
		// 0x71ff4
		v17 = v10 + g36;
		v9 = v17;
		v8 = g32 + g35;
		*(int32_t *)(v17 + 148) = 0;
		*(int32_t *)(v9 + 152) = 0;
		*(int32_t *)(v9 + 104) = 1;
		v11 = v8;
		if (*(char *)(v11 + 192) != 0) {
			// 0x7201c
			v18 = (int32_t) * (char *)(v11 + 193);
			*(int32_t *)(v9 + 112) = v18 + 1;
			v19 = (int32_t) * (char *)(v8 + 219);
			*(int32_t *)(v9 + 140) = v19;
			// branch -> 0x72030
		}
		// 0x72030
		*(int32_t *)(g36 + 116 + v10) = 256;
		g34 = v3;
		return PutMissile();
	}
	// 0x71f58
	if (v6 < 89) {
		// 0x71f70
		v7 = v5 + 80;
		// branch -> 0x71f74
		// 0x71f74
		g41 = 18;
		GetMissileVel();
		v12 = 180 * v3;
		v10 = v12;
		v13 = g36 + v12;
		v9 = v13;
		*(int32_t *)(v13 + 44) = a2;
		*(int32_t *)(v9 + 60) = 0;
		v14 = 8 * a2 + v7;
		*(int32_t *)(v9 + 64) = *(int32_t *)(v14 + 4);
		*(int32_t *)(v9 + 68) = *(int32_t *)(v14 + 8);
		*(int32_t *)(v9 + 72) = *(int32_t *)(v7 + 72);
		*(int32_t *)(v9 + 76) = *(int32_t *)(v7 + 68);
		v15 = *(int32_t *)g33;
		v8 = v15;
		*(int32_t *)(v9 + 80) = *(int32_t *)(v15 + 492);
		*(int32_t *)(v9 + 84) = *(int32_t *)(v8 + 496);
		*(int32_t *)(v9 + 92) = 1;
		v16 = *(char *)v8;
		if (v16 < 89) {
			// 0x71ff4
			v17 = v10 + g36;
			v9 = v17;
			v8 = g32 + g35;
			*(int32_t *)(v17 + 148) = 0;
			*(int32_t *)(v9 + 152) = 0;
			*(int32_t *)(v9 + 104) = 1;
			v11 = v8;
			if (*(char *)(v11 + 192) != 0) {
				// 0x7201c
				v18 = (int32_t) * (char *)(v11 + 193);
				*(int32_t *)(v9 + 112) = v18 + 1;
				v19 = (int32_t) * (char *)(v8 + 219);
				*(int32_t *)(v9 + 140) = v19;
				// branch -> 0x72030
			}
			// 0x72030
			*(int32_t *)(g36 + 116 + v10) = 256;
			g34 = v3;
			return PutMissile();
		}
		// 0x71fe4
		if (v16 <= 92) {
			// 0x71fec
			*(int32_t *)(v9 + 96) = 7;
			// branch -> 0x71ff4
		}
		// 0x71ff4
		v17 = v10 + g36;
		v9 = v17;
		v8 = g32 + g35;
		*(int32_t *)(v17 + 148) = 0;
		*(int32_t *)(v9 + 152) = 0;
		*(int32_t *)(v9 + 104) = 1;
		v11 = v8;
		if (*(char *)(v11 + 192) != 0) {
			// 0x7201c
			v18 = (int32_t) * (char *)(v11 + 193);
			*(int32_t *)(v9 + 112) = v18 + 1;
			v19 = (int32_t) * (char *)(v8 + 219);
			*(int32_t *)(v9 + 140) = v19;
			// branch -> 0x72030
		}
		// 0x72030
		*(int32_t *)(g36 + 116 + v10) = 256;
		g34 = v3;
		return PutMissile();
	}
	// 0x71f60
	if (v6 <= 92) {
		// 0x71f68
		v7 = v5 + 156;
		// branch -> 0x71f74
		// 0x71f74
		g41 = 18;
		GetMissileVel();
		v12 = 180 * v3;
		v10 = v12;
		v13 = g36 + v12;
		v9 = v13;
		*(int32_t *)(v13 + 44) = a2;
		*(int32_t *)(v9 + 60) = 0;
		v14 = 8 * a2 + v7;
		*(int32_t *)(v9 + 64) = *(int32_t *)(v14 + 4);
		*(int32_t *)(v9 + 68) = *(int32_t *)(v14 + 8);
		*(int32_t *)(v9 + 72) = *(int32_t *)(v7 + 72);
		*(int32_t *)(v9 + 76) = *(int32_t *)(v7 + 68);
		v15 = *(int32_t *)g33;
		v8 = v15;
		*(int32_t *)(v9 + 80) = *(int32_t *)(v15 + 492);
		*(int32_t *)(v9 + 84) = *(int32_t *)(v8 + 496);
		*(int32_t *)(v9 + 92) = 1;
		v16 = *(char *)v8;
		if (v16 >= 89) {
			// 0x71fe4
			if (v16 <= 92) {
				// 0x71fec
				*(int32_t *)(v9 + 96) = 7;
				// branch -> 0x71ff4
			}
		}
		// 0x71ff4
		v17 = v10 + g36;
		v9 = v17;
		v8 = g32 + g35;
		*(int32_t *)(v17 + 148) = 0;
		*(int32_t *)(v9 + 152) = 0;
		*(int32_t *)(v9 + 104) = 1;
		v11 = v8;
		if (*(char *)(v11 + 192) != 0) {
			// 0x7201c
			v18 = (int32_t) * (char *)(v11 + 193);
			*(int32_t *)(v9 + 112) = v18 + 1;
			v19 = (int32_t) * (char *)(v8 + 219);
			*(int32_t *)(v9 + 140) = v19;
			// branch -> 0x72030
		}
		// 0x72030
		*(int32_t *)(g36 + 116 + v10) = 256;
		g34 = v3;
		return PutMissile();
	}
	// 0x71f70
	v7 = v5 + 80;
	// branch -> 0x71f74
	// 0x71f74
	g41 = 18;
	GetMissileVel();
	v12 = 180 * v3;
	v10 = v12;
	v13 = g36 + v12;
	v9 = v13;
	*(int32_t *)(v13 + 44) = a2;
	*(int32_t *)(v9 + 60) = 0;
	v14 = 8 * a2 + v7;
	*(int32_t *)(v9 + 64) = *(int32_t *)(v14 + 4);
	*(int32_t *)(v9 + 68) = *(int32_t *)(v14 + 8);
	*(int32_t *)(v9 + 72) = *(int32_t *)(v7 + 72);
	*(int32_t *)(v9 + 76) = *(int32_t *)(v7 + 68);
	v15 = *(int32_t *)g33;
	v8 = v15;
	*(int32_t *)(v9 + 80) = *(int32_t *)(v15 + 492);
	*(int32_t *)(v9 + 84) = *(int32_t *)(v8 + 496);
	*(int32_t *)(v9 + 92) = 1;
	v16 = *(char *)v8;
	if (v16 >= 89) {
		// 0x71fe4
		if (v16 <= 92) {
			// 0x71fec
			*(int32_t *)(v9 + 96) = 7;
			// branch -> 0x71ff4
		}
	}
	// 0x71ff4
	v17 = v10 + g36;
	v9 = v17;
	v8 = g32 + g35;
	*(int32_t *)(v17 + 148) = 0;
	*(int32_t *)(v9 + 152) = 0;
	*(int32_t *)(v9 + 104) = 1;
	v11 = v8;
	if (*(char *)(v11 + 192) != 0) {
		// 0x7201c
		v18 = (int32_t) * (char *)(v11 + 193);
		*(int32_t *)(v9 + 112) = v18 + 1;
		v19 = (int32_t) * (char *)(v8 + 219);
		*(int32_t *)(v9 + 140) = v19;
		// branch -> 0x72030
	}
	// 0x72030
	*(int32_t *)(g36 + 116 + v10) = 256;
	g34 = v3;
	return PutMissile();
}

// Address range: 0x72058 - 0x72160
int32_t function_72058(int32_t a1, int32_t a2)
{
	// 0x72058
	g34 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x72064
	g35 = v1;
	int32_t v2 = 0; // 0x72068
	g32 = v2;
	g36 = *(int32_t *)(g23 - 0x7664);
	int32_t v3 = g34; // r26
	g41 = 16;
	int32_t v4 = v2 + v1 + 224; // 0x72084
	g33 = v4;
	int32_t v5 = *(int32_t *)v4 + 80; // r27
	GetMissileVel();
	int32_t v6 = 180 * v3; // 0x72090
	int32_t v7 = g36 + v6; // 0x72098
	*(int32_t *)(v7 + 44) = a2;
	int32_t v8 = 0; // r6
	*(int32_t *)(v7 + 60) = 0;
	int32_t v9 = 8 * a2 + v5; // 0x720ac
	int32_t v10 = 1;          // r0
	*(int32_t *)(v7 + 64) = *(int32_t *)(v9 + 4);
	*(int32_t *)(v7 + 68) = *(int32_t *)(v9 + 8);
	*(int32_t *)(v7 + 72) = *(int32_t *)(v5 + 72);
	*(int32_t *)(v7 + 76) = *(int32_t *)(v5 + 68);
	int32_t v11 = *(int32_t *)g33; // 0x720d4
	*(int32_t *)(v7 + 80) = *(int32_t *)(v11 + 492);
	*(int32_t *)(v7 + 84) = *(int32_t *)(v11 + 496);
	*(int32_t *)(v7 + 92) = v10;
	*(int32_t *)(v7 + 148) = v8;
	*(int32_t *)(v7 + 152) = v8;
	*(int32_t *)(v7 + 104) = v10;
	int32_t v12 = g32 + g35; // 0x720f8
	if (*(char *)(v12 + 192) != 0) {
		// 0x72104
		*(int32_t *)(v7 + 112) = (int32_t) * (char *)(v12 + 193) + 1;
		// branch -> 0x72110
	}
	int32_t v13 = g32 + g35;                              // 0x72110
	int32_t v14 = *(int32_t *)(v13 + 36);                 // 0x72120
	int32_t v15 = *(int32_t *)*(int32_t *)(g23 - 0x767c); // 0x7212c
	*(int16_t *)(2 * v14 + 224 * *(int32_t *)(v13 + 32) + v15) = 0;
	g34 = v3;
	*(int32_t *)(v6 + g36 + 116) = 256;
	return PutMissile();
}

// Address range: 0x72160 - 0x722f0
int32_t AddFlare(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	// 0x72160
	g40 = a5;
	g39 = a4;
	g38 = a3;
	g33 = *(int32_t *)(g23 - 0x7664);
	g32 = *(int32_t *)(g23 - 0x77a8);
	g35 = a1;
	int32_t v1 = g38; // 0x7217c
	g36 = 0;
	if (a2 == g39) {
		// 0x72194
		if (v1 == g40) {
			int32_t v2 = 4 * a6; // 0x721a0
			g39 = *(int32_t *)(v2 + *(int32_t *)(g23 - 0x70d8)) + a2;
			g40 = *(int32_t *)(*(int32_t *)(g23 - 0x70dc) + v2) + v1;
			// branch -> 0x721b8
		}
	}
	// 0x721b8
	g34 = a1;
	g37 = a2;
	g41 = 16;
	GetMissileVel();
	int32_t v3 = g33 + 180 * g35; // 0x721d0
	g33 = v3;
	*(int32_t *)(v3 + 116) = 256;
	*(int32_t *)(g33 + 148) = a2;
	*(int32_t *)(g33 + 152) = v1;
	int32_t v4 = AddLight(a2, v1, 8); // 0x721f0
	int32_t result = v4;              // r3
	*(int32_t *)(g33 + 140) = v4;
	int32_t v5 = g36; // 0x72200
	if ((0x1000000 * a7 || 0xffffff) < 0x1ffffff) {
		// 0x72200
		g37 = 35;
		UseMana(v5, 35);
		result = *(int32_t *)(g23 - 0x76f0);
		int32_t v6 = g32 + 0x55ec * g36;     // 0x72214
		int32_t *v7 = (int32_t *)(v6 + 404); // 0x7221c
		*v7 = *v7 - 320;
		int32_t *v8 = (int32_t *)(v6 + 396); // 0x7222c
		*v8 = *v8 - 320;
		*(int32_t *)result = 1;
		if (*(int32_t *)(v6 + 404) <= 0) {
			// 0x72248
			result = function_a640c(g36, 0);
			// branch -> 0x722dc
		}
		// 0x722dc
		return result;
	}
	// 0x72258
	if (v5 >= 1) {
		int32_t v9 = *(int32_t *)(g23 - 0x7754) + 232 * v5 + 224; // 0x7226c
		int32_t v10 = v9;                                         // 0x72288
		if (*(char *)*(int32_t *)v9 == 101) {
			// 0x7227c
			g37 = 22;
			SetMissAnim(g35);
			v10 = v9;
			// branch -> 0x72288
		}
		int32_t v11 = v10; // 0x722a4
		if (*(char *)*(int32_t *)v10 == 102) {
			// 0x72298
			g37 = 40;
			SetMissAnim(g35);
			v11 = v9;
			// branch -> 0x722a4
		}
		int32_t v12 = v11; // 0x722c0
		if (*(char *)*(int32_t *)v11 == 103) {
			// 0x722b4
			g37 = 44;
			SetMissAnim(g35);
			v12 = v9;
			// branch -> 0x722c0
		}
		int32_t v13 = *(int32_t *)v12; // 0x722c0
		result = v13;
		if (*(char *)v13 == 104) {
			// 0x722d0
			g37 = 42;
			result = SetMissAnim(g35);
			// branch -> 0x722dc
		}
	}
	// 0x722dc
	return result;
}

// Address range: 0x722f0 - 0x72398
int32_t function_722f0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	// 0x722f0
	g40 = a5;
	g39 = a4;
	g38 = a3;
	g37 = a2;
	g34 = a1;
	int32_t v1 = g34; // r25
	int32_t v2 = g37; // r26
	g32 = g39;
	g33 = g40;
	g41 = 16;
	GetMissileVel();
	SetMissDir(v1, function_6dcc4(v2, g38, g32, g33));
	unsigned char v3 = *(char *)(*(int32_t *)(g23 - 0x7754) + 232 * g35 + 157); // 0x72350
	int32_t v4 = g36 + 180 * v1;                                                // 0x72360
	*(int32_t *)(v4 + 116) = 5 * (int32_t)v3 + 20;
	g34 = v1;
	*(int32_t *)(v4 + 140) = -1;
	*(int32_t *)(v4 + 148) = v2;
	*(int32_t *)(v4 + 152) = g31;
	return PutMissile();
}

// Address range: 0x72398 - 0x723d8
int32_t function_72398(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)-0x7664 + 180 * a1; // 0x723a4
	*(int32_t *)(v1 + 128) = a2;
	int32_t v2 = 0; // r4
	*(int32_t *)(v1 + 20) = 0;
	*(int32_t *)(v1 + 24) = v2;
	*(int32_t *)(v1 + 116) = 50;
	int32_t result = *(int32_t *)(v1 + 76); // 0x723c0
	*(int32_t *)(v1 + 148) = *(int32_t *)(v1 + 116) - result;
	*(int32_t *)(v1 + 152) = v2;
	return result;
}

// Address range: 0x723d8 - 0x72468
int32_t function_723d8(int32_t a1)
{
	// 0x723d8
	g36 = 1;
	g37 = 15;
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x72400
	int32_t v2 = 0;                                     // r0
	*(int32_t *)(v1 + 20) = 0;
	*(int32_t *)(v1 + 24) = v2;
	*(int32_t *)(v1 + 12) = v2;
	*(int32_t *)(v1 + 16) = v2;
	*(int32_t *)(v1 + 104) = g36;
	int32_t v3 = *(int32_t *)(v1 + 120);                                       // 0x72420
	int32_t result = random(50);                                               // 0x72424
	unsigned char v4 = *(char *)(*(int32_t *)(g23 - 0x7754) + 232 * v3 + 157); // 0x72434
	*(int32_t *)(v1 + 116) = result + 40 + 40 * (int32_t)v4;
	*(int32_t *)(v1 + 108) = g36;
	return result;
}

// Address range: 0x72468 - 0x72678
int32_t AddStone(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x5f1c); // 0x72470
	int32_t v2 = 180 * a1;                   // 0x72474
	g35 = *(int32_t *)(g23 - 0x767c);
	int32_t v3 = *(int32_t *)(g23 - 0x7664); // 0x72484
	int32_t v4 = v3 + v2;                    // 0x7248c
	int32_t v5;                              // bp-56
	int32_t v6 = &v5;                        // r29
	v5 = *(int32_t *)v1;
	g36 = *(int32_t *)(v1 + 20);
	int32_t v7 = 0; // r10
	*(int32_t *)(v4 + 120) = v7;
	int32_t v8 = *(int32_t *)g35; // 0x724d0
	int32_t v9 = 0;
	int32_t v10;    // r11
	int32_t v11;    // r12
	int32_t v12;    // r4
	int32_t v13;    // 0x725fc
	int32_t v14;    // 0x72638
	int32_t result; // 0x72674
	int32_t v15;    // 0x72604
	int32_t *v16;   // 0x72620
	int32_t *v17;   // 0x72638
	int32_t *v18;   // 0x7264c
	int32_t v19;    // 0x7265c
	int32_t v20;    // 0x725e0
	int32_t v21;    // 0x725ec
	int32_t v22;    // 0x72620
	int32_t v23;    // 0x725f4
	int32_t v24;    // 0x724e0
	if (v9 >= 6) {
	lab_0x725c8:
		// 0x725c8
		v20 = v2 + v3;
		if (v24 == -99) {
			// 0x725e0
			v12 = v20;
			*(int32_t *)(v20 + 4) = v10;
			v21 = v2 + v3;
			v23 = *(int32_t *)(g23 - 0x77a8);
			*(int32_t *)(v21 + 8) = v11;
			v13 = v12;
			v24 = v13 + 116;
			v15 = 0x55ec * v7;
			*(int32_t *)(v13 + 28) = *(int32_t *)(v20 + 4);
			*(int32_t *)(v12 + 32) = *(int32_t *)(v21 + 8);
			*(int32_t *)v24 = *(int32_t *)(v12 + 48) + 6;
			v16 = (int32_t *)v24;
			v22 = *v16;
			*v16 = *(int32_t *)(v15 + v23 + 0x5574) * v22 / 128 + v22;
			v14 = v24;
			v17 = (int32_t *)v14;
			if (*v17 >= 16) {
				// 0x72644
				*v17 = 15;
				v19 = v24;
				// branch -> 0x7264c
			} else {
				v19 = v14;
			}
			// 0x7264c
			v18 = (int32_t *)v19;
			g37 = 8;
			*v18 = 16 * *v18;
			result = UseMana(v7, 8);
			// branch -> 0x72664
		} else {
			// 0x725d0
			*(int32_t *)(v20 + 52) = 1;
			result = v20;
			// branch -> 0x72664
		}
		// 0x72664
		return result;
	}
lab_0x724d8:
	while (true) {
		int32_t v25 = *(int32_t *)(v6 + 4 * v9);  // 0x724dc
		int32_t v26 = *(int32_t *)(g23 - 0x70e0); // 0x724e0
		unsigned char v27 = *(char *)(v26 + v25); // 0x724e0
		v24 = v27;
		int32_t v28 = v9; // 0x725bc
		int32_t v29;      // 0x725bc
		if (v27 != 0) {
			int32_t v30 = v25 + 1 + v26; // 0x725b0
			// branch -> 0x724f8
			while (true) {
				int32_t v31 = (int32_t) * (char *)v30 + a2; // 0x72504
				g35 = v31;
				uint32_t v32 = (int32_t) * (char *)(v30 + 1) + a3; // 0x7250c
				v11 = v32;
				v10 = v31;
				if (v31 >= 1) {
					// 0x72518
					if (v31 <= 111) {
						// 0x72520
						if (v32 >= 1) {
							// 0x72528
							if (v32 <= 111) {
								int32_t v33 = 2 * v32 + 224 * v31; // 0x72538
								g36 = v33;
								int16_t v34 = *(int16_t *)(v8 + v33); // 0x7253c
								int32_t v35 = v34;                    // 0x7253c
								g35 = v35;
								int32_t v36; // 0x72560
								if (v34 < 1) {
									// 0x72550
									g36 = v35 + 1;
									v36 = -1 - v35;
									// branch -> 0x72558
								} else {
									// 0x72548
									v36 = v35 - 1;
									// branch -> 0x72558
								}
								int32_t v37 = v36; // r24
								if (v36 >= 4) {
									int32_t v38 = *(int32_t *)(g23 - 0x7754) + 232 * v36; // 0x72564
									g35 = v38;
									unsigned char v39 = *(char *)(v38 + 156); // 0x72568
									g36 = v39;
									if (v39 != 27) {
										int32_t v40 = v38 + 4;         // 0x72574
										int32_t v41 = v40;             // r25
										int32_t v42 = *(int32_t *)v40; // 0x72578
										g35 = v42;
										if (v42 != 8) {
											// 0x72584
											if (v42 != 9) {
												// 0x7258c
												if (v42 != 14) {
													// 0x72594
													*(int32_t *)(v4 + 148) = v42;
													g36 = 15;
													v24 = -99;
													*(int32_t *)(v4 + 152) = v37;
													*(int32_t *)v41 = g36;
													// branch -> 0x725bc
													// 0x725bc
													v29 = 7;
													if (v29 >= 6) {
														// break (via goto) -> 0x725c8
														goto lab_0x725c8;
													}
													v9 = v29;
													// continue (via goto) -> 0x724d8
													goto lab_0x724d8;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				int32_t v43 = v30 + 2; // 0x725b0
				int32_t v44 = v24 - 1; // 0x725b8
				v24 = v44;
				if (v44 == 0) {
					// break -> 0x725bc
					break;
				}
				v24 = v44;
				v30 = v43;
				// continue -> 0x724f8
			}
			// 0x725bc
			v29 = v9 + 1;
			if (v29 >= 6) {
				// break -> 0x725c8
				break;
			}
			v9 = v29;
			// continue -> 0x724d8
			continue;
		}
		// 0x725bc
		v29 = v28 + 1;
		if (v29 >= 6) {
			// break -> 0x725c8
			break;
		}
		v9 = v29;
		// continue -> 0x724d8
	}
	// 0x725c8
	v20 = v2 + v3;
	if (v24 == -99) {
		// 0x725e0
		v12 = v20;
		*(int32_t *)(v20 + 4) = v10;
		v21 = v2 + v3;
		v23 = *(int32_t *)(g23 - 0x77a8);
		*(int32_t *)(v21 + 8) = v11;
		v13 = v12;
		v24 = v13 + 116;
		v15 = 0x55ec * v7;
		*(int32_t *)(v13 + 28) = *(int32_t *)(v20 + 4);
		*(int32_t *)(v12 + 32) = *(int32_t *)(v21 + 8);
		*(int32_t *)v24 = *(int32_t *)(v12 + 48) + 6;
		v16 = (int32_t *)v24;
		v22 = *v16;
		*v16 = *(int32_t *)(v15 + v23 + 0x5574) * v22 / 128 + v22;
		v14 = v24;
		v17 = (int32_t *)v14;
		if (*v17 >= 16) {
			// 0x72644
			*v17 = 15;
			v19 = v24;
			// branch -> 0x7264c
		} else {
			v19 = v14;
		}
		// 0x7264c
		v18 = (int32_t *)v19;
		g37 = 8;
		*v18 = 16 * *v18;
		result = UseMana(v7, 8);
		// branch -> 0x72664
	} else {
		// 0x725d0
		*(int32_t *)(v20 + 52) = 1;
		result = v20;
		// branch -> 0x72664
	}
	// 0x72664
	return result;
}

// Address range: 0x72678 - 0x7277c
int32_t AddGolem(int32_t result, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x72680
	g36 = 0;
	int32_t v2 = 180 * result; // 0x72694
	g33 = v2;
	int32_t v3 = v2 + v1 + 52;   // 0x726b0
	int32_t *v4 = (int32_t *)v3; // 0x726b0
	*v4 = 0;
	g35 = v3;
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x7668); // 0x726b4
	if (v5 < 1) {
		// 0x72678
		// branch -> 0x72704
	} else {
		int32_t v6 = *(int32_t *)(g23 - 0x7660); // 0x726fc
		// branch -> 0x726c4
		while (true) {
			int32_t v7 = *(int32_t *)v6; // 0x726c4
			int32_t v8 = 180 * v7;       // 0x726c8
			if (*(int32_t *)(v8 + v1) == 33) {
				// 0x726d8
				if (v7 != result) {
					// 0x726e0
					if (g36 == *(int32_t *)(v8 + 120 + v1)) {
						// 0x726f0
						*v4 = 1;
						// branch -> 0x72760
						// 0x72760
						return result;
					}
				}
			}
			int32_t v9 = v5 - 1; // 0x72700
			if (v9 == 0) {
				// break -> 0x72704
				break;
			}
			v5 = v9;
			v6 += 4;
			// continue -> 0x726c4
		}
		// 0x72704
		// branch -> 0x72704
	}
	int32_t v10 = g33 + v1; // 0x72704
	*(int32_t *)(v10 + 148) = a2;
	*(int32_t *)(v10 + 152) = a3;
	*(int32_t *)(v10 + 160) = a4;
	*(int32_t *)(v10 + 164) = a5;
	int32_t v11 = 232 * g36 + *(int32_t *)(g23 - 0x7754); // 0x72720
	int32_t result2;                                      // 0x7275c
	if (*(int32_t *)(v11 + 32) == 1) {
		// 0x7272c
		if (*(int32_t *)(v11 + 36) == 0) {
			// 0x72754
			g37 = 21;
			result2 = UseMana(g36, 21);
			// branch -> 0x72760
			// 0x72760
			return result2;
		}
	}
	int32_t v12 = *(int32_t *)*(int32_t *)(g23 - 0x77ac); // 0x7273c
	if (g36 == v12) {
		// 0x72748
		M_StartKill(v12, v12);
		// branch -> 0x72754
	}
	// 0x72754
	g37 = 21;
	result2 = UseMana(g36, 21);
	// branch -> 0x72760
	// 0x72760
	return result2;
}

// Address range: 0x7277c - 0x728cc
int32_t AddEtherealize(int32_t a1, int32_t a2)
{
	int32_t v1 = 0;                                   // r10
	int32_t v2 = 0x55ec * v1;                         // 0x72780
	int32_t v3 = *(int32_t *)(g23 - 0x77a8);          // 0x72788
	int32_t v4 = 180 * a1;                            // 0x72790
	int32_t v5 = *(int32_t *)(g23 - 0x7664);          // 0x72798
	int32_t v6 = v5 + v4;                             // 0x727a0
	int32_t v7 = (int32_t) * (char *)(v3 + v2 + 436); // 0x727a4
	int32_t v8 = v6;                                  // r5
	int32_t v9 = v6 + 116;                            // 0x727b4
	*(int32_t *)v9 = 8 * v7 & 0x7ffffff8 | v7 & -0x80000000;
	uint32_t v10 = *(int32_t *)(v8 + 48); // 0x727b8
	int32_t v11 = v10;                    // r3
	int32_t result;                       // 0x728c8
	int32_t *v12;                         // 0x7287c
	int32_t v13;                          // 0x72878
	int32_t v14;                          // 0x7287c
	if (v10 >= 1) {
		int32_t v15 = __asm_rlwinm_(v10, 29, 3, 31); // 0x727c8
		int32_t v16;                                 // 0x72860
		if (v15 == 0) {
			// 0x727c8
			v16 = v11;
			// branch -> 0x72860
		} else {
			int32_t *v17 = (int32_t *)(v8 + 116); // 0x727d4
			int32_t v18 = *v17;                   // 0x727d4
			*v17 = v18 / 8 + v18;
			int32_t *v19 = (int32_t *)(v8 + 116); // 0x727e4
			int32_t v20 = *v19;                   // 0x727e4
			*v19 = v20 / 8 + v20;
			int32_t *v21 = (int32_t *)(v8 + 116); // 0x727f4
			int32_t v22 = *v21;                   // 0x727f4
			*v21 = v22 / 8 + v22;
			int32_t *v23 = (int32_t *)(v8 + 116); // 0x72804
			int32_t v24 = *v23;                   // 0x72804
			*v23 = v24 / 8 + v24;
			int32_t *v25 = (int32_t *)(v8 + 116); // 0x72814
			int32_t v26 = *v25;                   // 0x72814
			*v25 = v26 / 8 + v26;
			int32_t *v27 = (int32_t *)(v8 + 116); // 0x72824
			int32_t v28 = *v27;                   // 0x72824
			*v27 = v28 / 8 + v28;
			int32_t *v29 = (int32_t *)(v8 + 116); // 0x72834
			int32_t v30 = *v29;                   // 0x72834
			*v29 = v30 / 8 + v30;
			int32_t *v31 = (int32_t *)(v8 + 116); // 0x72844
			int32_t v32 = *v31;                   // 0x72844
			*v31 = v32 / 8 + v32;
			int32_t v33 = v15 - 1; // 0x72854
			while (v33 != 0) {
				// 0x727d4
				v17 = (int32_t *)(v8 + 116);
				v18 = *v17;
				*v17 = v18 / 8 + v18;
				v19 = (int32_t *)(v8 + 116);
				v20 = *v19;
				*v19 = v20 / 8 + v20;
				v21 = (int32_t *)(v8 + 116);
				v22 = *v21;
				*v21 = v22 / 8 + v22;
				v23 = (int32_t *)(v8 + 116);
				v24 = *v23;
				*v23 = v24 / 8 + v24;
				v25 = (int32_t *)(v8 + 116);
				v26 = *v25;
				*v25 = v26 / 8 + v26;
				v27 = (int32_t *)(v8 + 116);
				v28 = *v27;
				*v27 = v28 / 8 + v28;
				v29 = (int32_t *)(v8 + 116);
				v30 = *v29;
				*v29 = v30 / 8 + v30;
				v31 = (int32_t *)(v8 + 116);
				v32 = *v31;
				*v31 = v32 / 8 + v32;
				v33--;
				// continue -> 0x727d4
			}
			int32_t v34 = v11 % 8; // 0x72858
			if (v34 == 0) {
				// 0x72878
				v13 = v2 + v3;
				v8 = v13;
				v12 = (int32_t *)v9;
				v14 = *v12;
				v11 = v4 + v5;
				*v12 = *(int32_t *)(v13 + 0x5574) * v14 / 128 + v14;
				*(int32_t *)(v11 + 148) = *(int32_t *)(v8 + 404);
				*(int32_t *)(v11 + 152) = *(int32_t *)(v8 + 396);
				if (0x1000000 * a2 == 0) {
					// 0x728b0
					g37 = 25;
					result = UseMana(v1, 25);
					// branch -> 0x728bc
				} else {
					// 0x72878
					result = v11;
					// branch -> 0x728bc
				}
				// 0x728bc
				return result;
			}
			v16 = v34;
		}
		int32_t *v35 = (int32_t *)(v8 + 116); // 0x72864
		int32_t v36 = *v35;                   // 0x72864
		*v35 = v36 / 8 + v36;
		int32_t v37 = v16 - 1; // 0x72874
		// branch -> 0x72864
		while (v37 != 0) {
			// 0x72864
			v35 = (int32_t *)(v8 + 116);
			v36 = *v35;
			*v35 = v36 / 8 + v36;
			v37--;
			// continue -> 0x72864
		}
		// 0x72878
		// branch -> 0x72878
	}
	// 0x72878
	v13 = v2 + v3;
	v8 = v13;
	v12 = (int32_t *)v9;
	v14 = *v12;
	v11 = v4 + v5;
	*v12 = *(int32_t *)(v13 + 0x5574) * v14 / 128 + v14;
	*(int32_t *)(v11 + 148) = *(int32_t *)(v8 + 404);
	*(int32_t *)(v11 + 152) = *(int32_t *)(v8 + 396);
	if (0x1000000 * a2 == 0) {
		// 0x728b0
		g37 = 25;
		result = UseMana(v1, 25);
		// branch -> 0x728bc
	} else {
		// 0x72878
		result = v11;
		// branch -> 0x728bc
	}
	// 0x728bc
	return result;
}

// Address range: 0x728cc - 0x728e4
int32_t function_728cc(int32_t a1)
{
	int32_t result = *(int32_t *)-0x7664 + 180 * a1; // 0x728d4
	*(int32_t *)(result + 52) = 1;
	return result;
}

// Address range: 0x728e4 - 0x72968
int32_t function_728e4(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x728ec
	int32_t v2 = 180 * a1;                   // 0x728f4
	int32_t v3 = v2 + v1;                    // 0x728fc
	*(int32_t *)(v3 + 128) = a4;
	*(int32_t *)(v3 + 4) = a2;
	*(int32_t *)(v3 + 8) = a3;
	*(int32_t *)(v3 + 28) = a2;
	*(int32_t *)(v3 + 32) = a3;
	*(int32_t *)(v3 + 120) = 0;
	if (a4 == 1) {
		// 0x72928
		SetMissDir(0, 0);
		// branch -> 0x7293c
	} else {
		// 0x72934
		SetMissDir(1, 1);
		// branch -> 0x7293c
	}
	int32_t result = v2 + v1; // 0x7293c
	*(int32_t *)(result + 104) = 1;
	*(int32_t *)(result + 116) = *(int32_t *)(result + 76);
	return result;
}

// Address range: 0x72968 - 0x729a8
int32_t function_72968(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = *(int32_t *)-0x7664 + 180 * a1; // 0x72974
	*(int32_t *)(v1 + 4) = a2;
	int32_t result = 0; // r3
	*(int32_t *)(v1 + 8) = a3;
	*(int32_t *)(v1 + 28) = a2;
	*(int32_t *)(v1 + 32) = a3;
	*(int32_t *)(v1 + 20) = result;
	*(int32_t *)(v1 + 24) = result;
	*(int32_t *)(v1 + 128) = a4;
	*(int32_t *)(v1 + 116) = *(int32_t *)(v1 + 76);
	*(int32_t *)(v1 + 148) = result;
	return result;
}

// Address range: 0x729a8 - 0x72afc
int32_t AddHeal(int32_t a1)
{
	g35 = *(int32_t *)(g23 - 0x7664);
	g36 = *(int32_t *)(g23 - 0x77a8);
	int32_t v1 = 0; // 0x729bc
	g37 = 10;
	int32_t v2 = 0x55ec * v1;           // 0x729d4
	int32_t v3 = 64 * (random(57) + 1); // 0x729dc
	int32_t v4 = v3;                    // r27
	int32_t v5 = g36 + v2;              // 0x729e0
	int32_t result;                     // r3
	int32_t v6;                         // 0x72a70
	int32_t v7;                         // 0x72a18
	int32_t v8;                         // 0x72a38
	int32_t v9;                         // 0x72a60
	int32_t v10;                        // 0x72a84
	int32_t v11;                        // 0x72a04
	int32_t v12;                        // 0x72a1c
	int32_t v13;                        // 0x72a30
	int32_t v14;                        // 0x72a40
	int32_t v15;                        // 0x72a50
	int32_t v16;                        // 0x72a74
	int32_t *v17;                       // 0x72a80
	int32_t *v18;                       // 0x72a8c
	int32_t v19;                        // 0x72aa0
	int32_t *v20;                       // 0x72aa8
	int32_t *v21;                       // 0x72ab4
	unsigned char v22;                  // 0x72a54
	int32_t v23;                        // 0x72a90
	int32_t v24;                        // 0x72ab8
	if (*(char *)(v5 + 436) <= 0) {
		// 0x72a18
		v7 = 180 * a1;
		g32 = v7;
		v12 = g35 + v7;
		v11 = v3;
		if (*(int32_t *)(v12 + 48) <= 0) {
			// 0x72a50
			v15 = v2 + g36;
			v22 = *(char *)(v15 + 348);
			v6 = v11;
			if (v22 == 0) {
				// 0x72a60
				v9 = 2 * v11;
				v4 = v9;
				v6 = v9;
				// branch -> 0x72a64
			}
			// 0x72a64
			v10 = v6;
			if (v22 == 1) {
				// 0x72a70
				v16 = (v6 / 2 | v6 & -0x80000000) + v6;
				v4 = v16;
				v10 = v16;
				// branch -> 0x72a78
			}
			// 0x72a78
			v17 = (int32_t *)(v15 + 404);
			*v17 = *v17 + v10;
			v18 = (int32_t *)(v15 + 404);
			v23 = *(int32_t *)(v15 + 408);
			if (*v18 > v23) {
				// 0x72a9c
				*v18 = v23;
				// branch -> 0x72aa0
			}
			// 0x72aa0
			v19 = v2 + g36;
			v20 = (int32_t *)(v19 + 396);
			*v20 = v4 + *v20;
			v21 = (int32_t *)(v19 + 396);
			v24 = *(int32_t *)(v19 + 400);
			if (*v21 > v24) {
				// 0x72ac4
				*v21 = v24;
				// branch -> 0x72ac8
			}
			// 0x72ac8
			g37 = 2;
			UseMana(v1, 2);
			result = g32 + g35;
			*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
			*(int32_t *)(result + 52) = 1;
			return result;
		}
		g37 = 6;
		v13 = random(57);
		v8 = 1;
		v14 = v4 + 64 * v13 + 64;
		v4 = v14;
		v11 = v14;
		while (v8 < *(int32_t *)(v12 + 48)) {
			// 0x72a28
			g37 = 6;
			v13 = random(57);
			v8++;
			v14 = v4 + 64 * v13 + 64;
			v4 = v14;
			v11 = v14;
			// continue -> 0x72a28
		}
		// 0x72a50
		v15 = v2 + g36;
		v22 = *(char *)(v15 + 348);
		v6 = v11;
		if (v22 == 0) {
			// 0x72a60
			v9 = 2 * v11;
			v4 = v9;
			v6 = v9;
			// branch -> 0x72a64
		}
		// 0x72a64
		v10 = v6;
		if (v22 == 1) {
			// 0x72a70
			v16 = (v6 / 2 | v6 & -0x80000000) + v6;
			v4 = v16;
			v10 = v16;
			// branch -> 0x72a78
		}
		// 0x72a78
		v17 = (int32_t *)(v15 + 404);
		*v17 = *v17 + v10;
		v18 = (int32_t *)(v15 + 404);
		v23 = *(int32_t *)(v15 + 408);
		if (*v18 > v23) {
			// 0x72a9c
			*v18 = v23;
			// branch -> 0x72aa0
		}
		// 0x72aa0
		v19 = v2 + g36;
		v20 = (int32_t *)(v19 + 396);
		*v20 = v4 + *v20;
		v21 = (int32_t *)(v19 + 396);
		v24 = *(int32_t *)(v19 + 400);
		if (*v21 > v24) {
			// 0x72ac4
			*v21 = v24;
			// branch -> 0x72ac8
		}
		// 0x72ac8
		g37 = 2;
		UseMana(v1, 2);
		result = g32 + g35;
		*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
		*(int32_t *)(result + 52) = 1;
		return result;
	}
	g37 = 4;
	int32_t v25 = random(57); // 0x729f4
	int32_t v26 = 1;          // 0x729fc
	v11 = v4 + 64 * v25 + 64;
	v4 = v11;
	while (v26 < (int32_t) * (char *)(v5 + 436)) {
		// 0x729ec
		g37 = 4;
		v25 = random(57);
		v26++;
		v11 = v4 + 64 * v25 + 64;
		v4 = v11;
		// continue -> 0x729ec
	}
	// 0x72a18
	v7 = 180 * a1;
	g32 = v7;
	v12 = g35 + v7;
	if (*(int32_t *)(v12 + 48) <= 0) {
		// 0x72a50
		v15 = v2 + g36;
		v22 = *(char *)(v15 + 348);
		v6 = v11;
		if (v22 == 0) {
			// 0x72a60
			v9 = 2 * v11;
			v4 = v9;
			v6 = v9;
			// branch -> 0x72a64
		}
		// 0x72a64
		v10 = v6;
		if (v22 == 1) {
			// 0x72a70
			v16 = (v6 / 2 | v6 & -0x80000000) + v6;
			v4 = v16;
			v10 = v16;
			// branch -> 0x72a78
		}
		// 0x72a78
		v17 = (int32_t *)(v15 + 404);
		*v17 = *v17 + v10;
		v18 = (int32_t *)(v15 + 404);
		v23 = *(int32_t *)(v15 + 408);
		if (*v18 > v23) {
			// 0x72a9c
			*v18 = v23;
			// branch -> 0x72aa0
		}
		// 0x72aa0
		v19 = v2 + g36;
		v20 = (int32_t *)(v19 + 396);
		*v20 = v4 + *v20;
		v21 = (int32_t *)(v19 + 396);
		v24 = *(int32_t *)(v19 + 400);
		if (*v21 > v24) {
			// 0x72ac4
			*v21 = v24;
			// branch -> 0x72ac8
		}
		// 0x72ac8
		g37 = 2;
		UseMana(v1, 2);
		result = g32 + g35;
		*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
		*(int32_t *)(result + 52) = 1;
		return result;
	}
	g37 = 6;
	v13 = random(57);
	v8 = 1;
	v14 = v4 + 64 * v13 + 64;
	v4 = v14;
	v11 = v14;
	while (v8 < *(int32_t *)(v12 + 48)) {
		// 0x72a28
		g37 = 6;
		v13 = random(57);
		v8++;
		v14 = v4 + 64 * v13 + 64;
		v4 = v14;
		v11 = v14;
		// continue -> 0x72a28
	}
	// 0x72a50
	v15 = v2 + g36;
	v22 = *(char *)(v15 + 348);
	v6 = v11;
	if (v22 == 0) {
		// 0x72a60
		v9 = 2 * v11;
		v4 = v9;
		v6 = v9;
		// branch -> 0x72a64
	}
	// 0x72a64
	v10 = v6;
	if (v22 == 1) {
		// 0x72a70
		v16 = (v6 / 2 | v6 & -0x80000000) + v6;
		v4 = v16;
		v10 = v16;
		// branch -> 0x72a78
	}
	// 0x72a78
	v17 = (int32_t *)(v15 + 404);
	*v17 = *v17 + v10;
	v18 = (int32_t *)(v15 + 404);
	v23 = *(int32_t *)(v15 + 408);
	if (*v18 > v23) {
		// 0x72a9c
		*v18 = v23;
		// branch -> 0x72aa0
	}
	// 0x72aa0
	v19 = v2 + g36;
	v20 = (int32_t *)(v19 + 396);
	*v20 = v4 + *v20;
	v21 = (int32_t *)(v19 + 396);
	v24 = *(int32_t *)(v19 + 400);
	if (*v21 > v24) {
		// 0x72ac4
		*v21 = v24;
		// branch -> 0x72ac8
	}
	// 0x72ac8
	g37 = 2;
	UseMana(v1, 2);
	result = g32 + g35;
	*(int32_t *)*(int32_t *)(g23 - 0x76f0) = 1;
	*(int32_t *)(result + 52) = 1;
	return result;
}

// Address range: 0x72afc - 0x72b5c
int32_t AddHealOther(int32_t a1)
{
	// 0x72afc
	g36 = 0;
	*(int32_t *)(180 * a1 + 52 + *(int32_t *)(g23 - 0x7664)) = 1;
	g37 = 34;
	UseMana(g36, 34);
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0x72b30
	int32_t result = v1;                     // 0x72b58
	if (g36 == *(int32_t *)v1) {
		// 0x72b40
		g34 = 10;
		result = function_324ec(10);
		// branch -> 0x72b48
	}
	// 0x72b48
	return result;
}

// Address range: 0x72b5c - 0x72d64
int32_t AddElement(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = a4; // r27
	g36 = *(int32_t *)(g23 - 0x7664);
	g32 = a5;
	g33 = 0;
	if (a2 == a4) {
		// 0x72b90
		if (a3 == a5) {
			int32_t v2 = 4 * a6; // 0x72b9c
			v1 = *(int32_t *)(v2 + *(int32_t *)(g23 - 0x70d8)) + a2;
			g32 = *(int32_t *)(*(int32_t *)(g23 - 0x70dc) + v2) + a3;
			// branch -> 0x72bb4
		}
	}
	// 0x72bb4
	g37 = 10;
	int32_t v3 = random(60); // r30
	g37 = 10;
	int32_t v4 = random(60);                                     // 0x72bcc
	int32_t v5 = v3 + 2;                                         // 0x72bd8
	int32_t v6 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * g33;      // 0x72bdc
	int32_t v7 = g36 + 180 * a1;                                 // 0x72bec
	int32_t v8 = 2 * (v5 + v4 + (int32_t) * (char *)(v6 + 436)); // 0x72bfc
	int32_t v9 = v7 + 128;                                       // 0x72c00
	*(int32_t *)v9 = v8;
	int32_t v10 = *(int32_t *)(v7 + 48); // 0x72c04
	int32_t v11;                         // 0x72d1c
	int32_t v12;                         // 0x72d24
	int32_t *v13;                        // 0x72cc4
	uint32_t v14;                        // 0x72cc4
	int32_t v15;                         // 0x72d0c
	int32_t v16;                         // 0x72cfc
	if (v10 < 1) {
		// 0x72cc4
		v13 = (int32_t *)v9;
		v14 = *v13;
		g34 = a1;
		g37 = a2;
		*v13 = v14 / 2 | v14 & -0x80000000;
		g38 = a3;
		g39 = v1;
		g40 = g32;
		g41 = 16;
		GetMissileVel();
		v16 = GetDirection8(a2, a3, v1, g32);
		SetMissDir(a1, v16);
		v15 = g35 + g36;
		a1 = v15;
		*(int32_t *)(v15 + 116) = 256;
		v11 = a2;
		*(int32_t *)(a1 + 148) = v11;
		v12 = a3;
		*(int32_t *)(a1 + 152) = v12;
		*(int32_t *)(a1 + 156) = 0;
		*(int32_t *)(a1 + 160) = g31;
		*(int32_t *)(a1 + 164) = g32;
		*(int32_t *)(a1 + 140) = AddLight(v11, v12, 8);
		g37 = 29;
		return UseMana(g33, 29);
	}
	int32_t v17 = __asm_rlwinm_(v10, 29, 3, 31); // 0x72c14
	int32_t v18;                                 // 0x72cac
	if (v17 == 0) {
		// 0x72c14
		v18 = v10;
		// branch -> 0x72cac
	} else {
		int32_t *v19 = (int32_t *)(v7 + 128); // 0x72c20
		int32_t v20 = *v19;                   // 0x72c20
		*v19 = v20 / 8 + v20;
		int32_t *v21 = (int32_t *)(v7 + 128); // 0x72c30
		int32_t v22 = *v21;                   // 0x72c30
		*v21 = v22 / 8 + v22;
		int32_t *v23 = (int32_t *)(v7 + 128); // 0x72c40
		int32_t v24 = *v23;                   // 0x72c40
		*v23 = v24 / 8 + v24;
		int32_t *v25 = (int32_t *)(v7 + 128); // 0x72c50
		int32_t v26 = *v25;                   // 0x72c50
		*v25 = v26 / 8 + v26;
		int32_t *v27 = (int32_t *)(v7 + 128); // 0x72c60
		int32_t v28 = *v27;                   // 0x72c60
		*v27 = v28 / 8 + v28;
		int32_t *v29 = (int32_t *)(v7 + 128); // 0x72c70
		int32_t v30 = *v29;                   // 0x72c70
		*v29 = v30 / 8 + v30;
		int32_t *v31 = (int32_t *)(v7 + 128); // 0x72c80
		int32_t v32 = *v31;                   // 0x72c80
		*v31 = v32 / 8 + v32;
		int32_t *v33 = (int32_t *)(v7 + 128); // 0x72c90
		int32_t v34 = *v33;                   // 0x72c90
		*v33 = v34 / 8 + v34;
		int32_t v35 = v17 - 1; // 0x72ca0
		while (v35 != 0) {
			// 0x72c20
			v19 = (int32_t *)(v7 + 128);
			v20 = *v19;
			*v19 = v20 / 8 + v20;
			v21 = (int32_t *)(v7 + 128);
			v22 = *v21;
			*v21 = v22 / 8 + v22;
			v23 = (int32_t *)(v7 + 128);
			v24 = *v23;
			*v23 = v24 / 8 + v24;
			v25 = (int32_t *)(v7 + 128);
			v26 = *v25;
			*v25 = v26 / 8 + v26;
			v27 = (int32_t *)(v7 + 128);
			v28 = *v27;
			*v27 = v28 / 8 + v28;
			v29 = (int32_t *)(v7 + 128);
			v30 = *v29;
			*v29 = v30 / 8 + v30;
			v31 = (int32_t *)(v7 + 128);
			v32 = *v31;
			*v31 = v32 / 8 + v32;
			v33 = (int32_t *)(v7 + 128);
			v34 = *v33;
			*v33 = v34 / 8 + v34;
			v35--;
			// continue -> 0x72c20
		}
		int32_t v36 = v10 % 8; // 0x72ca4
		if (v36 == 0) {
			// 0x72cc4
			v13 = (int32_t *)v9;
			v14 = *v13;
			g34 = a1;
			g37 = a2;
			*v13 = v14 / 2 | v14 & -0x80000000;
			g38 = a3;
			g39 = v1;
			g40 = g32;
			g41 = 16;
			GetMissileVel();
			v16 = GetDirection8(a2, a3, v1, g32);
			SetMissDir(a1, v16);
			v15 = g35 + g36;
			a1 = v15;
			*(int32_t *)(v15 + 116) = 256;
			v11 = a2;
			*(int32_t *)(a1 + 148) = v11;
			v12 = a3;
			*(int32_t *)(a1 + 152) = v12;
			*(int32_t *)(a1 + 156) = 0;
			*(int32_t *)(a1 + 160) = g31;
			*(int32_t *)(a1 + 164) = g32;
			*(int32_t *)(a1 + 140) = AddLight(v11, v12, 8);
			g37 = 29;
			return UseMana(g33, 29);
		}
		v18 = v36;
	}
	int32_t *v37 = (int32_t *)(v7 + 128); // 0x72cb0
	int32_t v38 = *v37;                   // 0x72cb0
	*v37 = v38 / 8 + v38;
	int32_t v39 = v18 - 1; // 0x72cc0
	// branch -> 0x72cb0
	while (v39 != 0) {
		// 0x72cb0
		v37 = (int32_t *)(v7 + 128);
		v38 = *v37;
		*v37 = v38 / 8 + v38;
		v39--;
		// continue -> 0x72cb0
	}
	// 0x72cc4
	// branch -> 0x72cc4
	// 0x72cc4
	v13 = (int32_t *)v9;
	v14 = *v13;
	g34 = a1;
	g37 = a2;
	*v13 = v14 / 2 | v14 & -0x80000000;
	g38 = a3;
	g39 = v1;
	g40 = g32;
	g41 = 16;
	GetMissileVel();
	v16 = GetDirection8(a2, a3, v1, g32);
	SetMissDir(a1, v16);
	v15 = g35 + g36;
	a1 = v15;
	*(int32_t *)(v15 + 116) = 256;
	v11 = a2;
	*(int32_t *)(a1 + 148) = v11;
	v12 = a3;
	*(int32_t *)(a1 + 152) = v12;
	*(int32_t *)(a1 + 156) = 0;
	*(int32_t *)(a1 + 160) = g31;
	*(int32_t *)(a1 + 164) = g32;
	*(int32_t *)(a1 + 140) = AddLight(v11, v12, 8);
	g37 = 29;
	return UseMana(g33, 29);
}

// Address range: 0x72d64 - 0x72e04
int32_t AddIdentify(int32_t a1)
{
	// 0x72d64
	g36 = *(int32_t *)(g23 - 0x77c0);
	g37 = 5;
	g35 = *(int32_t *)(g23 - 0x77bc);
	g33 = 0;
	*(int32_t *)(180 * a1 + 52 + *(int32_t *)(g23 - 0x7664)) = 1;
	UseMana(g33, 5);
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0x72da8
	int32_t result = v1;                     // 0x72e00
	if (g33 == *(int32_t *)v1) {
		int32_t *v2 = (int32_t *)g36; // 0x72db8
		if (*v2 != 0) {
			// 0x72dc4
			*v2 = 0;
			// branch -> 0x72dcc
		}
		int32_t *v3 = (int32_t *)g35; // 0x72dcc
		if (*v3 == 0) {
			// 0x72dd8
			*v3 = 1;
			// branch -> 0x72de0
		}
		// 0x72de0
		g34 = 2;
		result = function_324ec(2);
		// branch -> 0x72de8
	}
	// 0x72de8
	return result;
}

// Address range: 0x72e04 - 0x72fe4
int32_t AddFirewallC(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = *(int32_t *)(g23 - 0x5f20); // 0x72e0c
	int32_t v2 = 180 * a1;                   // 0x72e10
	g27 = a5;
	g25 = *(int32_t *)(g23 - 0x757c);
	g31 = a2;
	g30 = a3;
	g28 = a4;
	int32_t v3 = 0;   // r18
	int32_t v4;       // bp-104
	int32_t v5 = &v4; // r16
	v4 = *(int32_t *)v1;
	int32_t v6 = *(int32_t *)(v1 + 16);                // r3
	int32_t v7 = *(int32_t *)(g23 - 0x7664) + v2 + 52; // 0x72e90
	*(int32_t *)v7 = 1;
	int32_t v8 = v3;
	if (v8 < 6) {
	lab_0x72e98:
		while (true) {
			int32_t v9 = *(int32_t *)(v5 + 4 * v8);        // 0x72e9c
			int32_t v10 = *(int32_t *)(g23 - 0x70e0) + v9; // 0x72ea0
			unsigned char v11 = *(char *)v10;              // 0x72ea4
			g32 = v11;
			int32_t v12 = v10 + 1; // 0x72ea8
			g33 = v12;
			int32_t v13; // 0x72f78
			if (v11 != 0) {
				while (true) {
					int32_t v14 = g28 + (int32_t) * (char *)v12; // 0x72ebc
					v6 = v14;
					int32_t v15 = g27 + (int32_t) * (char *)(v12 + 1); // 0x72ec4
					g36 = v15;
					g35 = v14;
					int32_t v16; // 0x72f68
					int32_t v17; // 0x72f6c
					if (v14 >= 1) {
						// 0x72ed0
						if (v14 <= 111) {
							// 0x72ed8
							if (v15 >= 1) {
								// 0x72ee0
								if (v15 <= 111) {
									int32_t v18 = function_85a14(g31, g30, v14, v15); // 0x72f0c
									v6 = v18;
									if (v18 != 0) {
										int32_t v19 = g35; // 0x72f18
										if (g31 == v19) {
											// 0x72f20
											if (g30 == g36) {
											lab_0x72f68:
												// 0x72f68
												v16 = g33 + 2;
												g33 = v16;
												v17 = g32 - 1;
												g32 = v17;
												if (v17 <= 0) {
													// break -> 0x72f78
													break;
												}
												v12 = v16;
												// continue -> 0x72eb0
												continue;
											}
										} else {
											// 0x72f18
											// branch -> 0x72f28
										}
										int32_t v20 = *(int32_t *)g26; // 0x72f2c
										v6 = v20;
										int32_t v21 = (int32_t) * (char *)(g29 + g24); // 0x72f30
										if (((int32_t) * (char *)(v20 + g36 + 112 * v19) || v21) != 0) {
											goto lab_0x72f68;
										}
										// 0x72f48
										*(int32_t *)(g22 + 148) = v19;
										*(int32_t *)(g22 + 152) = g36;
										*(int32_t *)(g22 + 164) = g35;
										*(int32_t *)(g22 + 168) = g36;
										*(int32_t *)(g22 + 52) = 0;
										// branch -> 0x72f78
										// 0x72f78
										v13 = 7;
										v3 = v13;
										if (v13 >= 6) {
											// break (via goto) -> 0x72f7c
											goto lab_0x72f7c;
										}
										v8 = v13;
										// continue (via goto) -> 0x72e98
										goto lab_0x72e98;
									}
								}
							}
						}
					}
					// 0x72f68
					v16 = g33 + 2;
					g33 = v16;
					v17 = g32 - 1;
					g32 = v17;
					if (v17 <= 0) {
						// break -> 0x72f78
						break;
					}
					v12 = v16;
					// continue -> 0x72eb0
				}
				// 0x72f78
				v13 = v3 + 1;
				v3 = v13;
				if (v13 >= 6) {
					// break -> 0x72f7c
					break;
				}
				v8 = v13;
				// continue -> 0x72e98
				continue;
			}
			// 0x72f78
			v13 = v3 + 1;
			v3 = v13;
			if (v13 >= 6) {
				// break -> 0x72f7c
				break;
			}
			v8 = v13;
			// continue -> 0x72e98
		}
	lab_0x72f7c:;
		// 0x72f7c
		// branch -> 0x72f84
	}
	// 0x72f84
	int32_t result; // 0x72fe0
	if (*(int32_t *)v7 == 1) {
		// 0x72f84
		result = v6;
		// branch -> 0x72fd0
	} else {
		int32_t v22 = v2 + *(int32_t *)(g23 - 0x7664); // 0x72fa0
		*(int32_t *)(v22 + 172) = 0;
		*(int32_t *)(v22 + 176) = 0;
		*(int32_t *)(v22 + 156) = (a6 + 6) % 8;
		g37 = 6;
		*(int32_t *)(v22 + 160) = (a6 + 2) % 8;
		*(int32_t *)(v22 + 116) = 7;
		result = UseMana(0, 6);
		// branch -> 0x72fd0
	}
	// 0x72fd0
	return result;
}

// Address range: 0x72fe4 - 0x73114
int32_t AddInfra(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x72ff8
	*(int32_t *)(v1 + 116) = 1584;
	int32_t v2 = v1 + 116;               // r6
	uint32_t v3 = *(int32_t *)(v1 + 48); // 0x7300c
	int32_t v4;                          // r10
	int32_t result;                      // 0x73110
	int32_t *v5;                         // 0x730d4
	int32_t v6;                          // 0x730d4
	int32_t v7;                          // 0x730d0
	int32_t v8;                          // 0x730dc
	if (v3 >= 1) {
		int32_t v9 = __asm_rlwinm_(v3, 29, 3, 31); // 0x7301c
		int32_t v10;                               // 0x730b4
		if (v9 == 0) {
			// 0x7301c
			v10 = v3;
			// branch -> 0x730b4
		} else {
			int32_t *v11 = (int32_t *)(v1 + 116); // 0x73028
			int32_t v12 = *v11;                   // 0x73028
			*v11 = v12 / 8 + v12;
			int32_t *v13 = (int32_t *)(v1 + 116); // 0x73038
			int32_t v14 = *v13;                   // 0x73038
			*v13 = v14 / 8 + v14;
			int32_t *v15 = (int32_t *)(v1 + 116); // 0x73048
			int32_t v16 = *v15;                   // 0x73048
			*v15 = v16 / 8 + v16;
			int32_t *v17 = (int32_t *)(v1 + 116); // 0x73058
			int32_t v18 = *v17;                   // 0x73058
			*v17 = v18 / 8 + v18;
			int32_t *v19 = (int32_t *)(v1 + 116); // 0x73068
			int32_t v20 = *v19;                   // 0x73068
			*v19 = v20 / 8 + v20;
			int32_t *v21 = (int32_t *)(v1 + 116); // 0x73078
			int32_t v22 = *v21;                   // 0x73078
			*v21 = v22 / 8 + v22;
			int32_t *v23 = (int32_t *)(v1 + 116); // 0x73088
			int32_t v24 = *v23;                   // 0x73088
			*v23 = v24 / 8 + v24;
			int32_t *v25 = (int32_t *)(v1 + 116); // 0x73098
			int32_t v26 = *v25;                   // 0x73098
			*v25 = v26 / 8 + v26;
			int32_t v27 = v9 - 1; // 0x730a8
			while (v27 != 0) {
				// 0x73028
				v11 = (int32_t *)(v1 + 116);
				v12 = *v11;
				*v11 = v12 / 8 + v12;
				v13 = (int32_t *)(v1 + 116);
				v14 = *v13;
				*v13 = v14 / 8 + v14;
				v15 = (int32_t *)(v1 + 116);
				v16 = *v15;
				*v15 = v16 / 8 + v16;
				v17 = (int32_t *)(v1 + 116);
				v18 = *v17;
				*v17 = v18 / 8 + v18;
				v19 = (int32_t *)(v1 + 116);
				v20 = *v19;
				*v19 = v20 / 8 + v20;
				v21 = (int32_t *)(v1 + 116);
				v22 = *v21;
				*v21 = v22 / 8 + v22;
				v23 = (int32_t *)(v1 + 116);
				v24 = *v23;
				*v23 = v24 / 8 + v24;
				v25 = (int32_t *)(v1 + 116);
				v26 = *v25;
				*v25 = v26 / 8 + v26;
				v27--;
				// continue -> 0x73028
			}
			int32_t v28 = v3 % 8; // 0x730ac
			if (v28 == 0) {
				// 0x730cc
				v4 = 0;
				v7 = *(int32_t *)(g23 - 0x77a8);
				v5 = (int32_t *)v2;
				v6 = *v5;
				v8 = *(int32_t *)(v7 + 0x55ec * v4 + 0x5574);
				*v5 = v8 * v6 / 128 + v6;
				if (0x1000000 * a2 == 0) {
					// 0x730f8
					g37 = 9;
					result = UseMana(v4, 9);
					// branch -> 0x73104
				} else {
					// 0x730cc
					result = v8;
					// branch -> 0x73104
				}
				// 0x73104
				return result;
			}
			v10 = v28;
		}
		int32_t *v29 = (int32_t *)(v1 + 116); // 0x730b8
		int32_t v30 = *v29;                   // 0x730b8
		*v29 = v30 / 8 + v30;
		int32_t v31 = v10 - 1; // 0x730c8
		// branch -> 0x730b8
		while (v31 != 0) {
			// 0x730b8
			v29 = (int32_t *)(v1 + 116);
			v30 = *v29;
			*v29 = v30 / 8 + v30;
			v31--;
			// continue -> 0x730b8
		}
		// 0x730cc
		// branch -> 0x730cc
	}
	// 0x730cc
	v7 = *(int32_t *)(g23 - 0x77a8);
	v5 = (int32_t *)v2;
	v6 = *v5;
	v8 = *(int32_t *)(v7 + 0x55ec * v4 + 0x5574);
	*v5 = v8 * v6 / 128 + v6;
	if (0x1000000 * a2 == 0) {
		// 0x730f8
		g37 = 9;
		result = UseMana(v4, 9);
		// branch -> 0x73104
	} else {
		// 0x730cc
		result = v8;
		// branch -> 0x73104
	}
	// 0x73104
	return result;
}

// Address range: 0x73114 - 0x7316c
int32_t AddWave(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x7312c
	*(int32_t *)(v1 + 148) = a2;
	int32_t v2 = 0; // r6
	*(int32_t *)(v1 + 152) = a3;
	g37 = 15;
	*(int32_t *)(v1 + 156) = v2;
	*(int32_t *)(v1 + 160) = v2;
	*(int32_t *)(v1 + 116) = 1;
	*(int32_t *)(v1 + 96) = 4;
	return UseMana(0, 15);
}

// Address range: 0x7316c - 0x73370
int32_t AddNova(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = 0;                          // r10
	int32_t v2 = v1;                         // r28
	int32_t v3 = *(int32_t *)(g23 - 0x7664); // 0x73178
	g35 = v3;
	int32_t v4 = 180 * a1; // 0x7317c
	g33 = v4;
	int32_t v5 = v4 + v3; // 0x73184
	g36 = v5;
	*(int32_t *)(v5 + 148) = a2;
	*(int32_t *)(g36 + 152) = a3;
	int32_t result; // 0x73350
	if (v1 == -1) {
		// 0x73300
		g37 = 3;
		v2 = random(66);
		g37 = 3;
		a4 = random(66);
		g37 = 3;
		*(int32_t *)(g36 + 128) = a4 + v2 + random(66);
		int32_t *v6 = (int32_t *)(g36 + 128); // 0x73340
		*v6 = *v6 + (int32_t)(*(char *)*(int32_t *)(g23 - 0x77e4) / 2);
		// branch -> 0x73350
	} else {
		// 0x731a0
		g37 = 6;
		int32_t v7 = random(66); // r26
		g37 = 6;
		int32_t v8 = random(66); // r25
		g37 = 6;
		int32_t v9 = v7 + random(66); // 0x731cc
		g37 = 6;
		int32_t v10 = v9 + random(66); // 0x731dc
		g37 = 6;
		*(int32_t *)(g36 + 128) = v8 + v10 + random(66);
		int32_t *v11 = (int32_t *)(g36 + 128);                  // 0x73200
		int32_t v12 = 0x55ec * v2 + *(int32_t *)(g23 - 0x77a8); // 0x73204
		*v11 = (int32_t) * (char *)(v12 + 436) + *v11 + 5;
		int32_t *v13 = (int32_t *)(g36 + 128); // 0x7321c
		uint32_t v14 = *v13;                   // 0x7321c
		*v13 = v14 / 2 | v14 & -0x80000000;
		int32_t v15 = *(int32_t *)(g36 + 48); // 0x73228
		if (v15 >= 1) {
			int32_t v16 = __asm_rlwinm_(v15, 29, 3, 31); // 0x73238
			int32_t v17;                                 // 0x732d0
			if (v16 == 0) {
				// 0x73238
				v17 = v15;
				// branch -> 0x732d0
			} else {
				int32_t *v18 = (int32_t *)(g36 + 128); // 0x73244
				int32_t v19 = *v18;                    // 0x73244
				*v18 = v19 / 8 + v19;
				int32_t *v20 = (int32_t *)(g36 + 128); // 0x73254
				int32_t v21 = *v20;                    // 0x73254
				*v20 = v21 / 8 + v21;
				int32_t *v22 = (int32_t *)(g36 + 128); // 0x73264
				int32_t v23 = *v22;                    // 0x73264
				*v22 = v23 / 8 + v23;
				int32_t *v24 = (int32_t *)(g36 + 128); // 0x73274
				int32_t v25 = *v24;                    // 0x73274
				*v24 = v25 / 8 + v25;
				int32_t *v26 = (int32_t *)(g36 + 128); // 0x73284
				int32_t v27 = *v26;                    // 0x73284
				*v26 = v27 / 8 + v27;
				int32_t *v28 = (int32_t *)(g36 + 128); // 0x73294
				int32_t v29 = *v28;                    // 0x73294
				*v28 = v29 / 8 + v29;
				int32_t *v30 = (int32_t *)(g36 + 128); // 0x732a4
				int32_t v31 = *v30;                    // 0x732a4
				*v30 = v31 / 8 + v31;
				int32_t *v32 = (int32_t *)(g36 + 128); // 0x732b4
				int32_t v33 = *v32;                    // 0x732b4
				*v32 = v33 / 8 + v33;
				int32_t v34 = v16 - 1; // 0x732c4
				while (v34 != 0) {
					// 0x73244
					v18 = (int32_t *)(g36 + 128);
					v19 = *v18;
					*v18 = v19 / 8 + v19;
					v20 = (int32_t *)(g36 + 128);
					v21 = *v20;
					*v20 = v21 / 8 + v21;
					v22 = (int32_t *)(g36 + 128);
					v23 = *v22;
					*v22 = v23 / 8 + v23;
					v24 = (int32_t *)(g36 + 128);
					v25 = *v24;
					*v24 = v25 / 8 + v25;
					v26 = (int32_t *)(g36 + 128);
					v27 = *v26;
					*v26 = v27 / 8 + v27;
					v28 = (int32_t *)(g36 + 128);
					v29 = *v28;
					*v28 = v29 / 8 + v29;
					v30 = (int32_t *)(g36 + 128);
					v31 = *v30;
					*v30 = v31 / 8 + v31;
					v32 = (int32_t *)(g36 + 128);
					v33 = *v32;
					*v32 = v33 / 8 + v33;
					v34--;
					// continue -> 0x73244
				}
				int32_t v35 = v15 % 8; // 0x732c8
				if (v35 == 0) {
					// 0x732e8
					if ((0x1000000 * a4 || 0xffffff) < 0x1ffffff) {
						// 0x732f0
						g37 = 18;
						UseMana(v2, 18);
						// branch -> 0x73350
					}
					// 0x73350
					result = g33 + g35;
					*(int32_t *)(result + 116) = 1;
					return result;
				}
				v17 = v35;
			}
			int32_t *v36 = (int32_t *)(g36 + 128); // 0x732d4
			int32_t v37 = *v36;                    // 0x732d4
			*v36 = v37 / 8 + v37;
			int32_t v38 = v17 - 1; // 0x732e4
			// branch -> 0x732d4
			while (v38 != 0) {
				// 0x732d4
				v36 = (int32_t *)(g36 + 128);
				v37 = *v36;
				*v36 = v37 / 8 + v37;
				v38--;
				// continue -> 0x732d4
			}
			// 0x732e8
			// branch -> 0x732e8
		}
		// 0x732e8
		if ((0x1000000 * a4 || 0xffffff) < 0x1ffffff) {
			// 0x732f0
			g37 = 18;
			UseMana(v2, 18);
			// branch -> 0x73350
		}
	}
	// 0x73350
	result = g33 + g35;
	*(int32_t *)(result + 116) = 1;
	return result;
}

// Address range: 0x73370 - 0x73388
int32_t function_73370(int32_t a1)
{
	int32_t result = *(int32_t *)-0x7664 + 180 * a1; // 0x73378
	*(int32_t *)(result + 52) = 1;
	return result;
}

// Address range: 0x73388 - 0x73428
int32_t AddRepair(int32_t a1)
{
	// 0x73388
	g36 = *(int32_t *)(g23 - 0x77c0);
	g37 = 26;
	g35 = *(int32_t *)(g23 - 0x77bc);
	g33 = 0;
	*(int32_t *)(180 * a1 + 52 + *(int32_t *)(g23 - 0x7664)) = 1;
	UseMana(g33, 26);
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0x733cc
	int32_t result = v1;                     // 0x73424
	if (g33 == *(int32_t *)v1) {
		int32_t *v2 = (int32_t *)g36; // 0x733dc
		if (*v2 != 0) {
			// 0x733e8
			*v2 = 0;
			// branch -> 0x733f0
		}
		int32_t *v3 = (int32_t *)g35; // 0x733f0
		if (*v3 == 0) {
			// 0x733fc
			*v3 = 1;
			// branch -> 0x73404
		}
		// 0x73404
		g34 = 3;
		result = function_324ec(3);
		// branch -> 0x7340c
	}
	// 0x7340c
	return result;
}

// Address range: 0x73428 - 0x734c8
int32_t AddRecharge(int32_t a1)
{
	// 0x73428
	g36 = *(int32_t *)(g23 - 0x77c0);
	g37 = 27;
	g35 = *(int32_t *)(g23 - 0x77bc);
	g33 = 0;
	*(int32_t *)(180 * a1 + 52 + *(int32_t *)(g23 - 0x7664)) = 1;
	UseMana(g33, 27);
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0x7346c
	int32_t result = v1;                     // 0x734c4
	if (g33 == *(int32_t *)v1) {
		int32_t *v2 = (int32_t *)g36; // 0x7347c
		if (*v2 != 0) {
			// 0x73488
			*v2 = 0;
			// branch -> 0x73490
		}
		int32_t *v3 = (int32_t *)g35; // 0x73490
		if (*v3 == 0) {
			// 0x7349c
			*v3 = 1;
			// branch -> 0x734a4
		}
		// 0x734a4
		g34 = 4;
		result = function_324ec(4);
		// branch -> 0x734ac
	}
	// 0x734ac
	return result;
}

// Address range: 0x734c8 - 0x73528
int32_t AddDisarm(int32_t a1)
{
	// 0x734c8
	g36 = 0;
	*(int32_t *)(180 * a1 + 52 + *(int32_t *)(g23 - 0x7664)) = 1;
	g37 = 28;
	UseMana(g36, 28);
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0x734fc
	int32_t result = v1;                     // 0x73524
	if (g36 == *(int32_t *)v1) {
		// 0x7350c
		g34 = 5;
		result = function_324ec(5);
		// branch -> 0x73514
	}
	// 0x73514
	return result;
}

// Address range: 0x73528 - 0x73668
int32_t AddApoca(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = 180 * a1; // 0x73530
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x73534
	g36 = v2;
	int32_t v3 = v2 + v1; // 0x73538
	int32_t v4 = 0;       // r29
	*(int32_t *)(v3 + 148) = 8;
	*(int32_t *)(v3 + 152) = a3 - *(int32_t *)(v3 + 148);
	int32_t v5 = v3 + 156; // 0x73578
	*(int32_t *)v5 = a3 + *(int32_t *)(v3 + 148);
	*(int32_t *)(v3 + 160) = a2 - *(int32_t *)(v3 + 148);
	int32_t v6 = v3 + 164; // 0x73590
	*(int32_t *)v6 = a2 + *(int32_t *)(v3 + 148);
	int32_t v7 = v3 + 160; // 0x73594
	*(int32_t *)(v3 + 168) = *(int32_t *)v7;
	int32_t *v8 = (int32_t *)(v3 + 152); // 0x7359c
	if (*v8 <= 0) {
		// 0x735a8
		*v8 = 1;
		// branch -> 0x735b0
	}
	int32_t *v9 = (int32_t *)v5; // 0x735b0
	if (*v9 >= 112) {
		// 0x735bc
		*v9 = 111;
		// branch -> 0x735c4
	}
	int32_t *v10 = (int32_t *)v7; // 0x735c4
	if (*v10 <= 0) {
		// 0x735d0
		*v10 = 1;
		// branch -> 0x735d8
	}
	int32_t *v11 = (int32_t *)v6; // 0x735d8
	if (*v11 >= 112) {
		// 0x735e4
		*v11 = 111;
		// branch -> 0x735ec
	}
	int32_t v12 = g36;                                      // 0x735f4
	int32_t v13 = g35;                                      // 0x735f4
	int32_t v14 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * v4; // 0x735f8
	int32_t v15 = 0;                                        // r26
	int32_t v16 = v13;                                      // 0x73634
	int32_t v17 = v12;                                      // 0x73634
	if (*(char *)(v14 + 436) > 0) {
		g37 = 6;
		int32_t v18 = random(67);                    // 0x7360c
		int32_t *v19 = (int32_t *)(v13 + v12 + 128); // 0x73610
		v15++;
		*v19 = *v19 + v18 + 1;
		while (v15 < (int32_t) * (char *)(v14 + 436)) {
			// 0x73604
			g37 = 6;
			v18 = random(67);
			v19 = (int32_t *)(v13 + v12 + 128);
			v15++;
			*v19 = *v19 + v18 + 1;
			// continue -> 0x73604
		}
		// 0x73624
		v16 = g35;
		v17 = g36;
		// branch -> 0x73634
	}
	int32_t v20 = v17 + v16; // 0x73634
	*(int32_t *)(v20 + 116) = 255;
	*(int32_t *)(v20 + 52) = 0;
	g37 = 24;
	return UseMana(v4, 24);
}

// Address range: 0x73668 - 0x73834
int32_t function_73668(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, uint32_t a8)
{
	int32_t v1 = 180 * a1;                   // 0x73670
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x73674
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0x73678
	int32_t v4 = v2 + v1;                    // 0x73680
	int32_t v5 = 0;                          // 0x73688
	int32_t result = a8;                     // r3
	*(int32_t *)(v4 + 152) = 0;
	int32_t v6 = v4 + 152; // r11
	int32_t v7;            // 0x73738
	int32_t v8;            // 0x73750
	int32_t v9;            // 0x73758
	int32_t v10;           // 0x7376c
	int32_t v11;           // 0x73774
	int32_t v12;           // 0x7377c
	int32_t v13;           // 0x73804
	int32_t v14;           // 0x73738
	int32_t v15;           // 0x737a8
	int32_t *v16;          // 0x737dc
	int32_t v17;           // 0x737f4
	int32_t v18;           // 0x73810
	uint32_t v19;          // 0x737dc
	unsigned char v20;     // 0x73804
	if (a8 < 1) {
		// 0x73738
		v7 = v2;
		v14 = v1 + v7;
		g36 = v14;
		*(int32_t *)(v14 + 28) = a4;
		a4 = 180 * a6;
		*(int32_t *)(g36 + 32) = a5;
		v8 = v2;
		v9 = v7 + 12;
		*(int32_t *)(v1 + v9) = *(int32_t *)(a4 + v9);
		v10 = v2 + 16;
		*(int32_t *)(v1 + v10) = *(int32_t *)(a4 + v10);
		v11 = v8 + 36;
		*(int32_t *)(v1 + v11) = *(int32_t *)(a4 + v11);
		v12 = v8 + 40;
		*(int32_t *)(v1 + v12) = *(int32_t *)(a4 + v12);
		*(int32_t *)(g36 + 116) = *(int32_t *)v6 + 20;
		*(int32_t *)(g36 + 140) = AddLight(a2, a3, 1);
		if ((0x1000000 * a7 || 0xffffff) < 0x1ffffff) {
			// 0x737a0
			g37 = 2;
			v15 = random(79);
			g37 = (int32_t) * (char *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v5 + 436);
			*(int32_t *)(g36 + 128) = 8 * (random(79) + 2 + v15);
			v16 = (int32_t *)(g36 + 128);
			v19 = *v16;
			result = v19;
			*v16 = (v19 / 2 | v19 & -0x80000000) + v19;
			// branch -> 0x73820
		} else {
			// 0x737f0
			v17 = v3 + 232 * v5;
			v13 = v17 + 201;
			v20 = *(char *)v13;
			g37 = (int32_t) * (char *)(v17 + 202) + 1 - (int32_t)v20;
			v18 = random(77);
			result = v18;
			*(int32_t *)(g36 + 128) = (int32_t) * (char *)v13 + v18;
			// branch -> 0x73820
		}
		// 0x73820
		return result;
	}
	int32_t v21 = __asm_rlwinm_(result, 29, 3, 31); // 0x736ac
	int32_t v22;                                    // 0x73734
	int32_t *v23;                                   // 0x73728
	if (v21 == 0) {
		// 0x736ac
		// branch -> 0x73724
		// 0x73724
		v23 = (int32_t *)(v4 + 152);
		*v23 = *v23 + 5;
		v22 = result - 1;
		// branch -> 0x73728
		while (v22 != 0) {
			// 0x73728
			v23 = (int32_t *)(v4 + 152);
			*v23 = *v23 + 5;
			v22--;
			// continue -> 0x73728
		}
		// 0x73738
		v7 = v2;
		v14 = v1 + v7;
		g36 = v14;
		*(int32_t *)(v14 + 28) = a4;
		a4 = 180 * a6;
		*(int32_t *)(g36 + 32) = a5;
		v8 = v2;
		v9 = v7 + 12;
		*(int32_t *)(v1 + v9) = *(int32_t *)(a4 + v9);
		v10 = v2 + 16;
		*(int32_t *)(v1 + v10) = *(int32_t *)(a4 + v10);
		v11 = v8 + 36;
		*(int32_t *)(v1 + v11) = *(int32_t *)(a4 + v11);
		v12 = v8 + 40;
		*(int32_t *)(v1 + v12) = *(int32_t *)(a4 + v12);
		*(int32_t *)(g36 + 116) = *(int32_t *)v6 + 20;
		*(int32_t *)(g36 + 140) = AddLight(a2, a3, 1);
		if ((0x1000000 * a7 || 0xffffff) < 0x1ffffff) {
			// 0x737a0
			g37 = 2;
			v15 = random(79);
			g37 = (int32_t) * (char *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v5 + 436);
			*(int32_t *)(g36 + 128) = 8 * (random(79) + 2 + v15);
			v16 = (int32_t *)(g36 + 128);
			v19 = *v16;
			result = v19;
			*v16 = (v19 / 2 | v19 & -0x80000000) + v19;
			// branch -> 0x73820
		} else {
			// 0x737f0
			v17 = v3 + 232 * v5;
			v13 = v17 + 201;
			v20 = *(char *)v13;
			g37 = (int32_t) * (char *)(v17 + 202) + 1 - (int32_t)v20;
			v18 = random(77);
			result = v18;
			*(int32_t *)(g36 + 128) = (int32_t) * (char *)v13 + v18;
			// branch -> 0x73820
		}
		// 0x73820
		return result;
	}
	int32_t *v24 = (int32_t *)(v4 + 152); // 0x736b8
	*v24 = *v24 + 5;
	int32_t *v25 = (int32_t *)(v4 + 152); // 0x736c4
	*v25 = *v25 + 5;
	int32_t *v26 = (int32_t *)(v4 + 152); // 0x736d0
	*v26 = *v26 + 5;
	int32_t *v27 = (int32_t *)(v4 + 152); // 0x736dc
	*v27 = *v27 + 5;
	int32_t *v28 = (int32_t *)(v4 + 152); // 0x736e8
	*v28 = *v28 + 5;
	int32_t *v29 = (int32_t *)(v4 + 152); // 0x736f4
	*v29 = *v29 + 5;
	int32_t *v30 = (int32_t *)(v4 + 152); // 0x73700
	*v30 = *v30 + 5;
	int32_t *v31 = (int32_t *)(v4 + 152); // 0x7370c
	*v31 = *v31 + 5;
	int32_t v32 = v21 - 1; // 0x73718
	while (v32 != 0) {
		// 0x736b8
		v24 = (int32_t *)(v4 + 152);
		*v24 = *v24 + 5;
		v25 = (int32_t *)(v4 + 152);
		*v25 = *v25 + 5;
		v26 = (int32_t *)(v4 + 152);
		*v26 = *v26 + 5;
		v27 = (int32_t *)(v4 + 152);
		*v27 = *v27 + 5;
		v28 = (int32_t *)(v4 + 152);
		*v28 = *v28 + 5;
		v29 = (int32_t *)(v4 + 152);
		*v29 = *v29 + 5;
		v30 = (int32_t *)(v4 + 152);
		*v30 = *v30 + 5;
		v31 = (int32_t *)(v4 + 152);
		*v31 = *v31 + 5;
		v32--;
		// continue -> 0x736b8
	}
	int32_t v33 = result % 8; // 0x7371c
	if (v33 != 0) {
		// 0x73724
		v23 = (int32_t *)(v4 + 152);
		*v23 = *v23 + 5;
		v22 = v33 - 1;
		// branch -> 0x73728
		while (v22 != 0) {
			// 0x73728
			v23 = (int32_t *)(v4 + 152);
			*v23 = *v23 + 5;
			v22--;
			// continue -> 0x73728
		}
		// 0x73738
		v7 = v2;
		v14 = v1 + v7;
		g36 = v14;
		*(int32_t *)(v14 + 28) = a4;
		a4 = 180 * a6;
		*(int32_t *)(g36 + 32) = a5;
		v8 = v2;
		v9 = v7 + 12;
		*(int32_t *)(v1 + v9) = *(int32_t *)(a4 + v9);
		v10 = v2 + 16;
		*(int32_t *)(v1 + v10) = *(int32_t *)(a4 + v10);
		v11 = v8 + 36;
		*(int32_t *)(v1 + v11) = *(int32_t *)(a4 + v11);
		v12 = v8 + 40;
		*(int32_t *)(v1 + v12) = *(int32_t *)(a4 + v12);
		*(int32_t *)(g36 + 116) = *(int32_t *)v6 + 20;
		*(int32_t *)(g36 + 140) = AddLight(a2, a3, 1);
		if ((0x1000000 * a7 || 0xffffff) < 0x1ffffff) {
			// 0x737a0
			g37 = 2;
			v15 = random(79);
			g37 = (int32_t) * (char *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v5 + 436);
			*(int32_t *)(g36 + 128) = 8 * (random(79) + 2 + v15);
			v16 = (int32_t *)(g36 + 128);
			v19 = *v16;
			result = v19;
			*v16 = (v19 / 2 | v19 & -0x80000000) + v19;
			// branch -> 0x73820
		} else {
			// 0x737f0
			v17 = v3 + 232 * v5;
			v13 = v17 + 201;
			v20 = *(char *)v13;
			g37 = (int32_t) * (char *)(v17 + 202) + 1 - (int32_t)v20;
			v18 = random(77);
			result = v18;
			*(int32_t *)(g36 + 128) = (int32_t) * (char *)v13 + v18;
			// branch -> 0x73820
		}
		// 0x73820
		return result;
	}
	// 0x73738
	v7 = v2;
	v14 = v1 + v7;
	g36 = v14;
	*(int32_t *)(v14 + 28) = a4;
	a4 = 180 * a6;
	*(int32_t *)(g36 + 32) = a5;
	v8 = v2;
	v9 = v7 + 12;
	*(int32_t *)(v1 + v9) = *(int32_t *)(a4 + v9);
	v10 = v2 + 16;
	*(int32_t *)(v1 + v10) = *(int32_t *)(a4 + v10);
	v11 = v8 + 36;
	*(int32_t *)(v1 + v11) = *(int32_t *)(a4 + v11);
	v12 = v8 + 40;
	*(int32_t *)(v1 + v12) = *(int32_t *)(a4 + v12);
	*(int32_t *)(g36 + 116) = *(int32_t *)v6 + 20;
	*(int32_t *)(g36 + 140) = AddLight(a2, a3, 1);
	if ((0x1000000 * a7 || 0xffffff) < 0x1ffffff) {
		// 0x737a0
		g37 = 2;
		v15 = random(79);
		g37 = (int32_t) * (char *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v5 + 436);
		*(int32_t *)(g36 + 128) = 8 * (random(79) + 2 + v15);
		v16 = (int32_t *)(g36 + 128);
		v19 = *v16;
		result = v19;
		*v16 = (v19 / 2 | v19 & -0x80000000) + v19;
		// branch -> 0x73820
	} else {
		// 0x737f0
		v17 = v3 + 232 * v5;
		v13 = v17 + 201;
		v20 = *(char *)v13;
		g37 = (int32_t) * (char *)(v17 + 202) + 1 - (int32_t)v20;
		v18 = random(77);
		result = v18;
		*(int32_t *)(g36 + 128) = (int32_t) * (char *)v13 + v18;
		// branch -> 0x73820
	}
	// 0x73820
	return result;
}

// Address range: 0x73834 - 0x738e4
int32_t AddFlamec(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	// 0x73834
	g40 = a5;
	g39 = a4;
	g38 = a3;
	g31 = a2;
	g36 = *(int32_t *)(g23 - 0x7664);
	g30 = a1;
	int32_t v1 = g38; // 0x7384c
	g32 = v1;
	g33 = a7;
	g35 = 0;
	if (a2 == g39) {
		// 0x73864
		if (v1 == g40) {
			int32_t v2 = 4 * a6; // 0x73870
			g39 = *(int32_t *)(v2 + *(int32_t *)(g23 - 0x70d8)) + a2;
			g40 = *(int32_t *)(*(int32_t *)(g23 - 0x70dc) + v2) + v1;
			// branch -> 0x73888
		}
	}
	// 0x73888
	g34 = a1;
	g37 = a2;
	g41 = 32;
	GetMissileVel();
	if ((0x1000000 * g33 || 0xffffff) < 0x1ffffff) {
		// 0x738a4
		g37 = 20;
		UseMana(g35, 20);
		// branch -> 0x738b0
	}
	int32_t v3 = g36 + 180 * g30; // 0x738b4
	*(int32_t *)(v3 + 148) = g31;
	int32_t result = 0; // r3
	*(int32_t *)(v3 + 152) = g32;
	*(int32_t *)(v3 + 156) = result;
	*(int32_t *)(v3 + 116) = 256;
	return result;
}

// Address range: 0x738e4 - 0x73a64
int32_t function_738e4(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	// 0x738e4
	g36 = *(int32_t *)(g23 - 0x7664);
	g32 = a4;
	g33 = a5;
	g35 = a6;
	if ((0x1000000 * a7 || 0xffffff) < 0x1ffffff) {
		// 0x7391c
		g37 = 15;
		*(int32_t *)(g36 + 180 * a1 + 144) = random(63) + 1;
		g37 = *(int32_t *)(360 + *(int32_t *)(g23 - 0x77a8)) / 4;
		*(int32_t *)(g36 + 180 * a1 + 128) = random(68) + 1;
		// branch -> 0x739bc
	} else {
		// 0x73998
		g37 = 15;
		int32_t v1 = random(63);     // 0x739a0
		int32_t v2 = g36 + 180 * a1; // 0x739ac
		*(int32_t *)(v2 + 144) = v1 + 1;
		*(int32_t *)(v2 + 128) = 15;
		// branch -> 0x739bc
	}
	// 0x739bc
	if (a2 == g32) {
		// 0x739c4
		if (a3 == g33) {
			int32_t v3 = 4 * g35; // 0x739d0
			g32 = *(int32_t *)(v3 + *(int32_t *)(g23 - 0x70d8)) + a2;
			g33 = *(int32_t *)(*(int32_t *)(g23 - 0x70dc) + v3) + a3;
			// branch -> 0x739e8
		}
	}
	// 0x739e8
	g37 = 8;
	int32_t v4 = random(63) + 1; // 0x739f8
	int32_t v5 = g36 + 180 * a1; // 0x739fc
	g36 = v5;
	*(int32_t *)(v5 + 96) = v4;
	*(int32_t *)(g36 + 140) = AddLight(a2, a3, 5);
	g34 = a1;
	g37 = a2;
	g38 = a3;
	g39 = g32;
	g40 = g33;
	g41 = 8;
	GetMissileVel();
	*(int32_t *)(g36 + 148) = 5;
	int32_t result = 0; // r3
	*(int32_t *)(g36 + 152) = g35;
	*(int32_t *)(g36 + 156) = result;
	*(int32_t *)(g36 + 116) = 256;
	return result;
}

// Address range: 0x73a64 - 0x73ba0
int32_t AddHbolt(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	g38 = a3;
	g33 = a2;
	int32_t v1 = a4;  // r25
	int32_t v2 = g38; // 0x73a80
	g35 = v2;
	int32_t v3 = a5; // r26
	int32_t v4 = a5; // 0x73b00
	int32_t v5 = a4; // 0x73afc
	if (a4 == a2) {
		// 0x73a98
		if (v2 == a5) {
			int32_t v6 = 4 * a6;                                             // 0x73aa4
			int32_t v7 = *(int32_t *)(v6 + *(int32_t *)(g23 - 0x70d8)) + a2; // 0x73ab4
			v1 = v7;
			int32_t v8 = *(int32_t *)(*(int32_t *)(g23 - 0x70dc) + v6) + v2; // 0x73ab8
			v3 = v8;
			v4 = v8;
			v5 = v7;
			// branch -> 0x73abc
		} else {
			v4 = a5;
			v5 = a2;
		}
	}
	// 0x73abc
	int32_t v9;
	int32_t v10 = 2 * *(int32_t *)(180 * a1 + *(int32_t *)(g23 - 0x7664) + 48) + 16; // 0x73ad4
	v9 = v10 < 63 ? v10 : 63;
	// branch -> 0x73af0
	// 0x73af0
	g41 = v9;
	g34 = a1;
	g37 = a2;
	g39 = v5;
	g40 = v4;
	GetMissileVel();
	int32_t v11 = function_6dcc4(g33, g35, v1, v3); // 0x73b18
	SetMissDir(g32, v11);
	int32_t v12 = g31 + 180 * g32; // 0x73b2c
	*(int32_t *)(v12 + 116) = 256;
	int32_t v13 = g33; // 0x73b38
	*(int32_t *)(v12 + 148) = v13;
	*(int32_t *)(v12 + 152) = g35;
	*(int32_t *)(v12 + 140) = AddLight(v13, g35, 8);
	g37 = 10;
	int32_t v14 = random(69);                                              // 0x73b5c
	char v15 = *(char *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * g36 + 436); // 0x73b6c
	g37 = 31;
	*(int32_t *)(v12 + 128) = v14 + 9 + (int32_t)v15;
	return UseMana(g36, 31);
}

// Address range: 0x73ba0 - 0x73c0c
int32_t AddResurrect(int32_t a1)
{
	int32_t v1 = 0; // 0x73ba8
	g36 = v1;
	g35 = a1;
	g37 = 32;
	UseMana(v1, 32);
	if (g36 == *(int32_t *)*(int32_t *)(g23 - 0x77ac)) {
		// 0x73bd8
		g34 = 8;
		function_324ec(8);
		// branch -> 0x73be0
	}
	int32_t result = *(int32_t *)(g23 - 0x7664) + 180 * g35; // 0x73be8
	*(int32_t *)(result + 52) = 1;
	return result;
}

// Address range: 0x73c0c - 0x73c54
int32_t function_73c0c(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = 180 * a1;                      // 0x73c0c
	int32_t v2 = 0;                             // r2
	int32_t v3 = *(int32_t *)(v2 - 0x7664);     // 0x73c10
	int32_t result = *(int32_t *)(v2 - 0x761c); // r3
	int32_t v4 = v3 + v1;                       // 0x73c18
	*(int32_t *)(v4 + 4) = a2;
	int32_t v5 = v1 + v3; // r5
	int32_t v6 = 0;       // r0
	*(int32_t *)(v4 + 8) = a3;
	*(int32_t *)(v5 + 28) = *(int32_t *)(v4 + 4);
	*(int32_t *)(v5 + 32) = *(int32_t *)(v4 + 8);
	*(int32_t *)(v5 + 20) = v6;
	*(int32_t *)(v5 + 24) = v6;
	int32_t v7 = (int32_t) * (char *)(result + 0x2acc); // 0x73c48
	*(int32_t *)(v5 + 116) = v7;
	return result;
}

// Address range: 0x73c54 - 0x73cb4
int32_t AddTelekinesis(int32_t a1)
{
	// 0x73c54
	g36 = 0;
	*(int32_t *)(180 * a1 + 52 + *(int32_t *)(g23 - 0x7664)) = 1;
	g37 = 33;
	UseMana(g36, 33);
	int32_t v1 = *(int32_t *)(g23 - 0x77ac); // 0x73c88
	int32_t result = v1;                     // 0x73cb0
	if (g36 == *(int32_t *)v1) {
		// 0x73c98
		g34 = 7;
		result = function_324ec(7);
		// branch -> 0x73ca0
	}
	// 0x73ca0
	return result;
}

// Address range: 0x73cb4 - 0x73e00
int32_t AddBoneSpirit(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7)
{
	int32_t v1 = a2; // r23
	int32_t v2 = a4; // r25
	int32_t v3 = a3; // r24
	int32_t v4 = a5; // r26
	if (a2 == a4) {
		// 0x73cf0
		if (a3 == a5) {
			int32_t v5 = 4 * a6; // 0x73cfc
			v2 = *(int32_t *)(v5 + *(int32_t *)(g23 - 0x70d8)) + a2;
			v4 = *(int32_t *)(*(int32_t *)(g23 - 0x70dc) + v5) + a3;
			// branch -> 0x73d14
		}
	}
	// 0x73d14
	*(int32_t *)(180 * a1 + *(int32_t *)(g23 - 0x7664) + 128) = 0;
	g34 = a1;
	g37 = v1;
	g38 = v3;
	g39 = v2;
	g40 = v4;
	g41 = 16;
	GetMissileVel();
	SetMissDir(a1, GetDirection8(v1, v3, v2, v4));
	*(int32_t *)(g35 + 116) = 256;
	*(int32_t *)(g35 + 148) = v1;
	*(int32_t *)(g35 + 152) = v3;
	*(int32_t *)(g35 + 156) = g33;
	*(int32_t *)(g35 + 160) = v2;
	*(int32_t *)(g35 + 164) = v4;
	int32_t result = AddLight(v1, v3, 8); // 0x73d88
	*(int32_t *)(g35 + 140) = result;
	if ((0x1000000 * g31 || 0xffffff) >= 0x1ffffff) {
		// 0x73dec
		return result;
	}
	// 0x73d98
	g37 = 36;
	UseMana(g36, 36);
	int32_t result2 = *(int32_t *)(g23 - 0x76f0); // r3
	int32_t v6 = g32 + 0x55ec * g36;              // 0x73dac
	int32_t *v7 = (int32_t *)(v6 + 404);          // 0x73db4
	*v7 = *v7 - 384;
	int32_t *v8 = (int32_t *)(v6 + 396); // 0x73dc4
	*v8 = *v8 - 384;
	*(int32_t *)result2 = 1;
	if (*(int32_t *)(v6 + 404) <= 0) {
		// 0x73de0
		result2 = function_a640c(g36, 0);
		// branch -> 0x73dec
	}
	// 0x73dec
	return result2;
}

// Address range: 0x73e00 - 0x73e5c
int32_t function_73e00(int32_t a1, int32_t a2, int32_t a3)
{
	g34 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * g34; // 0x73e14
	*(int32_t *)(v1 + 4) = a2;
	*(int32_t *)(v1 + 8) = a3;
	*(int32_t *)(v1 + 28) = a2;
	*(int32_t *)(v1 + 32) = a3;
	*(int32_t *)(v1 + 116) = 100;
	int32_t v2 = *(int32_t *)(v1 + 76); // 0x73e34
	*(int32_t *)(v1 + 148) = *(int32_t *)(v1 + 116) - v2;
	*(int32_t *)(v1 + 152) = 0;
	return PutMissile();
}

// Address range: 0x73e5c - 0x73f28
int32_t function_73e5c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77f0); // 0x73e64
	g36 = v1;
	g27 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x77a8); // 0x73e6c
	g35 = v2;
	g28 = a2;
	g29 = a3;
	g33 = 0;
	int32_t result; // 0x73f08
	if (*(char *)v1 == 0) {
		// 0x73f00
		result = *(int32_t *)(g23 - 0x7664) + 180 * a1;
		*(int32_t *)(result + 52) = 1;
		return result;
	}
	while (true) {
		// 0x73e94
		int32_t v3; // 0x73eec
		int32_t v4; // 0x73ef0
		if (*(char *)(v2 + 29) != 0) {
			int32_t v5 = *(int32_t *)(v2 + 64); // 0x73ea0
			if (function_85a14(g28, g29, v5, *(int32_t *)(v2 + 68)) != 0) {
				// 0x73ebc
				g13 = g31;
				int32_t v6 = g35;                   // 0x73ed4
				int32_t v7 = *(int32_t *)(v6 + 68); // 0x73edc
				AddMissile(0, 0, *(int32_t *)(v6 + 64), v7, 0, 66, g30, g32, 0);
				// branch -> 0x73eec
			}
			// 0x73eec
			v3 = g35 + 0x55ec;
			g35 = v3;
			v4 = g33 + 1;
			g33 = v4;
			if (v4 >= (int32_t) * (char *)g36) {
				// break -> 0x73ef4
				break;
			}
			v2 = v3;
			// continue -> 0x73e94
			continue;
		}
		// 0x73eec
		v3 = g35 + 0x55ec;
		g35 = v3;
		v4 = g33 + 1;
		g33 = v4;
		if (v4 >= (int32_t) * (char *)g36) {
			// break -> 0x73ef4
			break;
		}
		v2 = v3;
		// continue -> 0x73e94
	}
	// 0x73ef4
	// branch -> 0x73f00
	// 0x73f00
	result = *(int32_t *)(g23 - 0x7664) + 180 * g27;
	*(int32_t *)(result + 52) = 1;
	return result;
}

// Address range: 0x73f28 - 0x74170
int32_t AddMissile(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9)
{
	int32_t v1 = g10; // 0x73f2c
	g27 = a1;
	g29 = a3;
	g28 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x7668); // 0x73f3c
	g30 = a4;
	g25 = *(int32_t *)(g23 - 0x70e8);
	g31 = a5;
	int32_t v3 = *(int32_t *)(g23 - 0x7660); // 0x73f4c
	int32_t v4 = *(int32_t *)(g23 - 0x7150); // 0x73f50
	g32 = a7;
	int32_t v5 = *(int32_t *)(g23 - 0x7664); // 0x73f58
	g26 = v5;
	g33 = g13;
	int32_t v6 = *(int32_t *)v2; // 0x73f6c
	g35 = a8;
	int32_t result; // 0x7416c
	if (v6 < 125) {
		// 0x73f88
		int32_t v7;        // r3
		int32_t v8;        // r5
		int32_t v9;        // r6
		int32_t *v10;      // 0x7400c
		int32_t v11;       // 0x74028
		int32_t *v12;      // 0x74030
		int32_t v13;       // 0x7400c
		int32_t v14;       // 0x740b0
		int32_t v15;       // 0x740b8
		unsigned char v16; // 0x74068
		int32_t v17;       // 0x7410c
		if (a6 == 13) {
			int32_t v18 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * g13; // 0x73f94
			if (*(char *)(v18 + 0x5594) == 1) {
				int32_t v19 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4); // 0x73fac
				if (v19 == *(int32_t *)(v18 + 52)) {
					// 0x73fb8
					if (v6 >= 1) {
						int32_t v20 = v6; // 0x73ff8
						while (true) {
							int32_t v21 = 180 * *(int32_t *)v3; // 0x73fcc
							if (*(int32_t *)(v21 + v5) == 13) {
								// 0x73fdc
								if (g13 == *(int32_t *)(v21 + 120 + v5)) {
									// 0x73fec
									// branch -> 0x7415c
									// 0x7415c
									g10 = v1;
									return -1;
								}
							}
							int32_t v22 = v20 - 1; // 0x73ff8
							if (v22 == 0) {
								// break -> 0x74008
								break;
							}
							v20 = v22;
							v3 += 4;
							// continue -> 0x73fc8
						}
						// 0x74008
						// branch -> 0x74008
					}
					// 0x74008
					v10 = (int32_t *)v4;
					v13 = *v10;
					g36 = v13;
					g24 = 180 * v13;
					*v10 = *(int32_t *)(4 * (124 - v6) + v4);
					*(int32_t *)(4 * v6 + v3) = g36;
					v11 = 28 * a6;
					g22 = v11;
					v8 = g24 + g26;
					v12 = (int32_t *)v2;
					v7 = g25 + v11;
					*v12 = *v12 + 1;
					*(int32_t *)(g24 + g26) = a6;
					*(int32_t *)(v8 + 124) = 0x1000000 * g32 / 0x1000000;
					*(int32_t *)(v8 + 120) = g33;
					*(char *)(v8 + 56) = *(char *)(v7 + 18);
					*(int32_t *)(v8 + 100) = *(int32_t *)(v7 + 12);
					*(int32_t *)(v8 + 48) = a9;
					*(int32_t *)(v8 + 44) = g31;
					v16 = *(char *)(v8 + 56);
					if (v16 != -1) {
						// 0x74074
						if (*(char *)(*(int32_t *)(g23 - 0x761c) + 300 * (int32_t)v16 + 1) >= 8) {
							// 0x7408c
							SetMissDir(g36, g31);
							// branch -> 0x740a8
							// 0x740a8
							*(int32_t *)(g26 + 4 + g24) = g27;
							v14 = g24 + g26;
							v8 = v14;
							v15 = v14 + 8;
							*(int32_t *)v15 = g28;
							v9 = 0;
							*(int32_t *)(v8 + 12) = 0;
							*(int32_t *)(v8 + 16) = v9;
							*(int32_t *)(v8 + 28) = g27;
							*(int32_t *)(v8 + 32) = g28;
							*(int32_t *)(v8 + 36) = v9;
							*(int32_t *)(v8 + 40) = v9;
							*(int32_t *)(v8 + 52) = v9;
							*(int32_t *)(v8 + 92) = 1;
							*(int32_t *)(v8 + 104) = v9;
							*(int32_t *)(v8 + 108) = v9;
							*(int32_t *)(v8 + 112) = v9;
							*(int32_t *)(v8 + 128) = g35;
							*(int32_t *)(v8 + 132) = v9;
							*(int32_t *)(v8 + 136) = v9;
							*(int32_t *)(v8 + 140) = -1;
							*(int32_t *)(v8 + 144) = v9;
							v17 = *(int32_t *)(g22 + g25 + 20);
							g34 = v17;
							if (v17 != -1) {
								// 0x74118
								g38 = *(int32_t *)v15;
								PlaySfxLoc(v17);
								// branch -> 0x74124
							}
							// 0x74124
							g34 = g36;
							g15 = *(int32_t *)(g22 + g25 + 4);
							FunctionPointer();
							// branch -> 0x7415c
							// 0x7415c
							g10 = v1;
							return g36;
						}
					}
					// 0x7409c
					SetMissDir(g36, 0);
					// branch -> 0x740a8
					// 0x740a8
					*(int32_t *)(g26 + 4 + g24) = g27;
					v14 = g24 + g26;
					v8 = v14;
					v15 = v14 + 8;
					*(int32_t *)v15 = g28;
					v9 = 0;
					*(int32_t *)(v8 + 12) = 0;
					*(int32_t *)(v8 + 16) = v9;
					*(int32_t *)(v8 + 28) = g27;
					*(int32_t *)(v8 + 32) = g28;
					*(int32_t *)(v8 + 36) = v9;
					*(int32_t *)(v8 + 40) = v9;
					*(int32_t *)(v8 + 52) = v9;
					*(int32_t *)(v8 + 92) = 1;
					*(int32_t *)(v8 + 104) = v9;
					*(int32_t *)(v8 + 108) = v9;
					*(int32_t *)(v8 + 112) = v9;
					*(int32_t *)(v8 + 128) = g35;
					*(int32_t *)(v8 + 132) = v9;
					*(int32_t *)(v8 + 136) = v9;
					*(int32_t *)(v8 + 140) = -1;
					*(int32_t *)(v8 + 144) = v9;
					v17 = *(int32_t *)(g22 + g25 + 20);
					g34 = v17;
					if (v17 != -1) {
						// 0x74118
						g38 = *(int32_t *)v15;
						PlaySfxLoc(v17);
						// branch -> 0x74124
					}
					// 0x74124
					g34 = g36;
					g15 = *(int32_t *)(g22 + g25 + 4);
					FunctionPointer();
					result = g36;
					// branch -> 0x7415c
				} else {
					// 0x74000
					result = -1;
					// branch -> 0x7415c
				}
				// 0x7415c
				g10 = v1;
				return result;
			}
		}
		// 0x74008
		v10 = (int32_t *)v4;
		v13 = *v10;
		g36 = v13;
		g24 = 180 * v13;
		*v10 = *(int32_t *)(4 * (124 - v6) + v4);
		*(int32_t *)(4 * v6 + v3) = g36;
		v11 = 28 * a6;
		g22 = v11;
		v8 = g24 + g26;
		v12 = (int32_t *)v2;
		v7 = g25 + v11;
		*v12 = *v12 + 1;
		*(int32_t *)(g24 + g26) = a6;
		*(int32_t *)(v8 + 124) = 0x1000000 * g32 / 0x1000000;
		*(int32_t *)(v8 + 120) = g33;
		*(char *)(v8 + 56) = *(char *)(v7 + 18);
		*(int32_t *)(v8 + 100) = *(int32_t *)(v7 + 12);
		*(int32_t *)(v8 + 48) = a9;
		*(int32_t *)(v8 + 44) = g31;
		v16 = *(char *)(v8 + 56);
		if (v16 != -1) {
			// 0x74074
			if (*(char *)(*(int32_t *)(g23 - 0x761c) + 300 * (int32_t)v16 + 1) >= 8) {
				// 0x7408c
				SetMissDir(g36, g31);
				// branch -> 0x740a8
				// 0x740a8
				*(int32_t *)(g26 + 4 + g24) = g27;
				v14 = g24 + g26;
				v8 = v14;
				v15 = v14 + 8;
				*(int32_t *)v15 = g28;
				v9 = 0;
				*(int32_t *)(v8 + 12) = 0;
				*(int32_t *)(v8 + 16) = v9;
				*(int32_t *)(v8 + 28) = g27;
				*(int32_t *)(v8 + 32) = g28;
				*(int32_t *)(v8 + 36) = v9;
				*(int32_t *)(v8 + 40) = v9;
				*(int32_t *)(v8 + 52) = v9;
				*(int32_t *)(v8 + 92) = 1;
				*(int32_t *)(v8 + 104) = v9;
				*(int32_t *)(v8 + 108) = v9;
				*(int32_t *)(v8 + 112) = v9;
				*(int32_t *)(v8 + 128) = g35;
				*(int32_t *)(v8 + 132) = v9;
				*(int32_t *)(v8 + 136) = v9;
				*(int32_t *)(v8 + 140) = -1;
				*(int32_t *)(v8 + 144) = v9;
				v17 = *(int32_t *)(g22 + g25 + 20);
				g34 = v17;
				if (v17 != -1) {
					// 0x74118
					g38 = *(int32_t *)v15;
					PlaySfxLoc(v17);
					// branch -> 0x74124
				}
				// 0x74124
				g34 = g36;
				g15 = *(int32_t *)(g22 + g25 + 4);
				FunctionPointer();
				// branch -> 0x7415c
				// 0x7415c
				g10 = v1;
				return g36;
			}
		}
		// 0x7409c
		SetMissDir(g36, 0);
		// branch -> 0x740a8
		// 0x740a8
		*(int32_t *)(g26 + 4 + g24) = g27;
		v14 = g24 + g26;
		v8 = v14;
		v15 = v14 + 8;
		*(int32_t *)v15 = g28;
		v9 = 0;
		*(int32_t *)(v8 + 12) = 0;
		*(int32_t *)(v8 + 16) = v9;
		*(int32_t *)(v8 + 28) = g27;
		*(int32_t *)(v8 + 32) = g28;
		*(int32_t *)(v8 + 36) = v9;
		*(int32_t *)(v8 + 40) = v9;
		*(int32_t *)(v8 + 52) = v9;
		*(int32_t *)(v8 + 92) = 1;
		*(int32_t *)(v8 + 104) = v9;
		*(int32_t *)(v8 + 108) = v9;
		*(int32_t *)(v8 + 112) = v9;
		*(int32_t *)(v8 + 128) = g35;
		*(int32_t *)(v8 + 132) = v9;
		*(int32_t *)(v8 + 136) = v9;
		*(int32_t *)(v8 + 140) = -1;
		*(int32_t *)(v8 + 144) = v9;
		v17 = *(int32_t *)(g22 + g25 + 20);
		g34 = v17;
		if (v17 != -1) {
			// 0x74118
			g38 = *(int32_t *)v15;
			PlaySfxLoc(v17);
			// branch -> 0x74124
		}
		// 0x74124
		g34 = g36;
		g15 = *(int32_t *)(g22 + g25 + 4);
		FunctionPointer();
		result = g36;
		// branch -> 0x7415c
	} else {
		// 0x73f80
		result = -1;
		// branch -> 0x7415c
	}
	// 0x7415c
	g10 = v1;
	return result;
}

// Address range: 0x74170 - 0x742a8
int32_t function_74170(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10;                                   // 0x74174
	int32_t v2 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x7418c
	int32_t v3 = *(int32_t *)(v2 + 4);                  // 0x741b0
	int32_t v4;                                         // 0x74270
	int32_t result;                                     // 0x74298
	if (function_85a14(v3, *(int32_t *)(v2 + 8), a2, a3) == 0) {
		// 0x74270
		v4 = g31;
		// branch -> 0x74270
		// 0x74270
		result = v4;
		if (v4 == -1) {
			// 0x74278
			SetMissDir(g28, 2);
			*(int32_t *)(g35 + g36 + 152) = 3;
			result = g31;
			// branch -> 0x74290
		}
		// 0x74290
		g10 = v1;
		return result;
	}
	int32_t v5 = g29;                                    // 0x741c4
	int32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x767c); // 0x741c8
	int32_t v7 = g30;                                    // 0x741cc
	uint16_t v8 = *(int16_t *)(2 * v7 + 224 * v5 + v6);  // 0x741d4
	if (v8 < 1 || *(int32_t *)(*(int32_t *)(g23 - 0x7754) + 232 * (int32_t)v8 - 80) < 64 || v8 < 5) {
		// 0x74270
		v4 = g31;
		// branch -> 0x74270
		// 0x74270
		result = v4;
		if (v4 == -1) {
			// 0x74278
			SetMissDir(g28, 2);
			*(int32_t *)(g35 + g36 + 152) = 3;
			result = g31;
			// branch -> 0x74290
		}
		// 0x74290
		g10 = v1;
		return result;
	}
	int32_t v9 = GetDirection(*(int32_t *)g32, *(int32_t *)g33, v5, v7); // 0x74214
	int32_t v10 = g35 + g36;                                             // 0x7421c
	*(int32_t *)(v10 + 156) = *(int32_t *)*(int32_t *)(g23 - 0x7150);
	int32_t v11 = function_6db5c(*(int32_t *)(v10 + 120), 1); // 0x74238
	int32_t v12 = *(int32_t *)(v10 + 128);                    // 0x7423c
	int32_t v13 = *(int32_t *)g33;                            // 0x74260
	g13 = *(int32_t *)(v10 + 120);
	AddMissile(*(int32_t *)g32, v13, g29, g30, v9, 1, 0, v12, v11);
	g31 = -1;
	v4 = -1;
	// branch -> 0x74270
	// 0x74270
	result = v4;
	if (v4 == -1) {
		// 0x74278
		SetMissDir(g28, 2);
		*(int32_t *)(g35 + g36 + 152) = 3;
		result = g31;
		// branch -> 0x74290
	}
	// 0x74290
	g10 = v1;
	return result;
}

// Address range: 0x742a8 - 0x742b0
int32_t function_742a8(int32_t result)
{
	// 0x742a8
	return result;
}

// Address range: 0x742b0 - 0x7445c
int32_t function_742b0(int32_t a1)
{
	int32_t v1 = 180 * a1; // 0x742c0
	g24 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x742c4
	g27 = v2;
	int32_t v3 = v2 + v1; // 0x742cc
	g32 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x70e0); // 0x742d8
	g29 = v4;
	g30 = *(int32_t *)(g23 - 0x757c);
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x5f24);                    // bp-104
	int32_t v6 = 232 * *(int32_t *)(v3 + 120) + *(int32_t *)(g23 - 0x7754); // 0x74328
	int32_t result;                                                         // 0x7443c
	if (*(int32_t *)(v6 + 32) == 1) {
		// 0x74338
		if (*(int32_t *)(v6 + 36) == 0) {
			int32_t v7 = &v5; // 0x74344
			g33 = v7;
			g20 = 0;
			// branch -> 0x74350
			while (true) {
				int32_t v8 = *(int32_t *)v7 + v4; // 0x74358
				unsigned char v9 = *(char *)v8;   // 0x7435c
				int32_t v10 = v9;                 // r16
				int32_t v11 = v8 + 1;             // 0x74360
				g25 = v11;
				int32_t v12; // 0x74430
				if (v9 == 0) {
					// 0x74430
					v12 = g20 + 1;
					g20 = v12;
					if (v12 < 6) {
						goto lab_0x74430_2;
					}
					// 0x7443c
					// branch -> 0x7443c
					// 0x7443c
					result = g27 + g24;
					*(int32_t *)(result + 52) = 1;
					return result;
				}
				while (true) {
					int32_t v13 = g32;                                                      // 0x7436c
					uint32_t v14 = *(int32_t *)(v13 + 160) + (int32_t) * (char *)v11;       // 0x74378
					uint32_t v15 = *(int32_t *)(v13 + 164) + (int32_t) * (char *)(v11 + 1); // 0x74384
					int32_t v16 = v15;                                                      // r14
					int32_t v17 = v14;                                                      // r15
					if (v14 >= 1) {
						// 0x74390
						if (v14 <= 111) {
							// 0x74398
							if (v15 >= 1) {
								// 0x743a0
								if (v15 <= 111) {
									int32_t v18 = *(int32_t *)(v13 + 148);                             // 0x743b0
									int16_t v19 = *(int16_t *)(*(int32_t *)g30 + 2 * v15 + 224 * v14); // 0x743c0
									int32_t v20 = v19;                                                 // r18
									if (function_85a14(v18, *(int32_t *)(v13 + 152), v14, v15) != 0) {
										unsigned char v21 = *(char *)(v20 + g31);                              // 0x743e4
										int16_t v22 = *(int16_t *)(g35 + *(int32_t *)g28);                     // 0x743f0
										int32_t v23 = (int32_t) * (char *)(v16 + 112 * v17 + *(int32_t *)g26); // 0x743f4
										if ((v23 || (int32_t)v21 || (int32_t)v22) == 0) {
											// 0x74404
											function_873cc(g22, v17, v16, g36);
											// branch -> 0x74430
											// 0x74430
											v12 = g20 + 1;
											g20 = v12;
											if (v12 < 6) {
											lab_0x74430_2:
												// 0x74430
												// branch -> 0x74350
												break;
											}
											// 0x7443c
											// branch -> 0x7443c
											// 0x7443c
											result = g27 + g24;
											*(int32_t *)(result + 52) = 1;
											return result;
										}
									}
								}
							}
						}
					}
					int32_t v24 = g25 + 2; // 0x74420
					g25 = v24;
					int32_t v25 = v10 - 1; // 0x74424
					v10 = v25;
					if (v25 <= 0) {
						// break -> 0x74430
						break;
					}
					v11 = v24;
					// continue -> 0x74368
				}
				// 0x74430
				v12 = g20 + 1;
				g20 = v12;
				if (v12 < 6) {
					goto lab_0x74430_2;
				}
				// 0x7443c
				// branch -> 0x7443c
				// 0x7443c
				result = g27 + g24;
				*(int32_t *)(result + 52) = 1;
				return result;
			}
		}
	}
	// 0x7443c
	result = v2 + v1;
	*(int32_t *)(result + 52) = 1;
	return result;
}

// Address range: 0x7445c - 0x74470
int32_t function_7445c(int32_t a1)
{
	int32_t result = *(int32_t *)-0x70fc; // 0x74464
	*(int32_t *)result = 1;
	return result;
}

// Address range: 0x74470 - 0x74840
int32_t function_74470(int32_t a1)
{
	g35 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x7447c
	g31 = v1;
	int32_t v2 = 180 * a1; // 0x74480
	g27 = v2;
	g28 = *(int32_t *)(g23 - 0x77e4);
	g29 = *(int32_t *)(g23 - 0x70e8);
	int32_t v3 = v1 + v2;                    // 0x7448c
	int32_t v4 = v3;                         // r29
	int32_t v5 = *(int32_t *)(g23 - 0x7754); // 0x74494
	g32 = *(int32_t *)(g23 - 0x77a8);
	int32_t v6 = v3 + 116;       // 0x744a4
	int32_t *v7 = (int32_t *)v6; // 0x744a4
	*v7 = *v7 - 1;
	g26 = v6;
	char v8 = *(char *)(v4 + 56); // 0x744b0
	g36 = *(int32_t *)(v4 + 120);
	int32_t v9; // 0x74810
	if (v8 == 26 || v8 == 5) {
		int32_t v10 = g27 + g31; // 0x746c8
		int32_t v11 = v10 + 4;   // 0x746cc
		g22 = v11;
		int32_t v12 = v10 + 8; // 0x746d0
		g21 = v12;
		g39 = *(int32_t *)(v10 + 96) + 5;
		int32_t v13 = *(int32_t *)v12; // 0x746e4
		function_cba34(*(int32_t *)(v10 + 140), *(int32_t *)v11, v13);
		int32_t v14 = *(int32_t *)v10; // 0x746ec
		int32_t v15 = g29;             // 0x746f0
		int32_t v16 = v15 + 17;        // 0x746f0
		g24 = v16;
		g30 = (int32_t) * (char *)(v16 + 28 * v14);
		int32_t v17 = v10; // 0x74778
		int32_t v18;       // r21
		if (v14 == 56) {
			int32_t v19 = g36; // 0x74704
			int32_t v20;       // 0x7475c
			if (v19 == -1) {
				// 0x74720
				g37 = 10;
				v18 = random(68) + 1 + (int32_t) * (char *)g28;
				g37 = 10;
				random(68);
				v20 = g29;
				// branch -> 0x74754
			} else {
				// 0x7470c
				v18 = *(int32_t *)(g32 + 0x55ec * v19 + 0x5584);
				v20 = v15;
				// branch -> 0x74754
			}
			// 0x74754
			*(char *)(v20 + 1585) = 2;
			g42 = 1;
			int32_t v21 = *(int32_t *)g21; // 0x74770
			g41 = v21;
			function_6f3d4(g35, v18, 0, *(int32_t *)g22, v21);
			v17 = g33;
			// branch -> 0x74778
		}
		int32_t v22 = v17; // 0x747f8
		if (*(int32_t *)v17 == 27) {
			int32_t v23 = g36; // 0x74784
			if (v23 == -1) {
				// 0x747a0
				g37 = 10;
				v18 = random(68) + 1 + (int32_t) * (char *)g28;
				g37 = 10;
				random(68);
				// branch -> 0x747d4
			} else {
				// 0x7478c
				v18 = *(int32_t *)(g32 + 0x55ec * v23 + 0x557c);
				// branch -> 0x747d4
			}
			// 0x747d4
			*(char *)(g29 + 773) = 1;
			g42 = 1;
			int32_t v24 = *(int32_t *)g21; // 0x747f0
			g41 = v24;
			function_6f3d4(g35, v18, 0, *(int32_t *)g22, v24);
			v22 = g33;
			// branch -> 0x747f8
		}
		// 0x747f8
		*(char *)(g24 + 28 * *(int32_t *)v22) = (char)g30;
		// branch -> 0x74804
		// 0x74804
		if (*(int32_t *)g26 == 0) {
			// 0x74810
			v9 = g27 + g31;
			*(int32_t *)(v9 + 52) = 1;
			AddUnLight(*(int32_t *)(v9 + 140));
			// branch -> 0x74824
		}
		// 0x74824
		g34 = g35;
		return PutMissile();
	}
	int32_t *v25 = (int32_t *)(v4 + 136); // 0x744c8
	g24 = v4 + 36;
	g25 = v4 + 20;
	g21 = v4 + 40;
	*v25 = *v25 + 1;
	g22 = v4 + 24;
	g34 = g35;
	int32_t *v26 = (int32_t *)(v4 + 36); // 0x744e8
	*v26 = *(int32_t *)(v4 + 20) + *v26;
	int32_t *v27 = (int32_t *)(v4 + 40); // 0x744f8
	*v27 = *(int32_t *)(v4 + 24) + *v27;
	GetMissilePos();
	int32_t v28 = g36; // 0x7450c
	int32_t v29;       // r24
	int32_t v30;       // r28
	int32_t v31;       // r3
	int32_t v32;       // 0x7457c
	int32_t v33;       // 0x74638
	int32_t v34;       // 0x7469c
	int32_t v35;       // 0x746ac
	int32_t v36;       // 0x7457c
	int32_t v37;       // 0x74584
	int32_t *v38;      // 0x7460c
	int32_t *v39;      // 0x7461c
	int32_t *v40;      // 0x74674
	int32_t v41;       // 0x74678
	int32_t v42;       // 0x7468c
	int32_t v43;       // 0x7469c
	int32_t v44;
	int32_t v45;  // 0x7457c
	int32_t v46;  // 0x745f8
	int32_t *v47; // 0x74678
	int32_t v48;  // 0x745d8
	int32_t v49;  // 0x746b4
	if (v28 != -1) {
		// 0x74514
		if (*(int32_t *)(v4 + 124) == 0) {
			// 0x74520
			v30 = *(int32_t *)(g32 + 0x55ec * v28 + 0x5544);
			// branch -> 0x7457c
		} else {
			// 0x74534
			v30 = (int32_t) * (char *)(v5 + 232 * v28 + 201);
			// branch -> 0x7457c
		}
		// 0x7457c
		v32 = g31;
		v36 = g27;
		v45 = v36 + v32;
		v37 = v45 + 4;
		g30 = v37;
		if (*(int32_t *)v37 == *(int32_t *)(v45 + 28)) {
			// 0x74598
			if (*(int32_t *)(v45 + 8) != *(int32_t *)(v45 + 32)) {
				// 0x745a8
				g42 = 0;
				*(char *)(28 * *(int32_t *)v45 + g29 + 17) = 0;
				v48 = *(int32_t *)(v45 + 8);
				g41 = v48;
				function_6f3d4(g35, v30, 0, v48, 0);
				*(char *)(g28 + 28 * *(int32_t *)g33) = (char)g29;
				v43 = g27;
				v34 = g31;
				// branch -> 0x745ec
			} else {
				v43 = v36;
				v34 = v32;
			}
		} else {
			// 0x745a8
			g42 = 0;
			*(char *)(28 * *(int32_t *)v45 + g29 + 17) = 0;
			v48 = *(int32_t *)(v45 + 8);
			g41 = v48;
			function_6f3d4(g35, v30, 0, v48, 0);
			*(char *)(g28 + 28 * *(int32_t *)g33) = (char)g29;
			v43 = g27;
			v34 = g31;
			// branch -> 0x745ec
		}
		// 0x745ec
		v46 = v34 + v43;
		if (*(int32_t *)g26 == 0) {
			// 0x745f8
			v29 = v46;
			*(int32_t *)(v46 + 44) = 0;
			g34 = g35;
			v38 = (int32_t *)g24;
			*v38 = *v38 - *(int32_t *)g25;
			v39 = (int32_t *)g21;
			*v39 = *v39 - *(int32_t *)g22;
			GetMissilePos();
			v33 = g35;
			if (*(int32_t *)(g27 + g31) == 56) {
				// 0x74638
				g37 = 26;
				SetMissAnim(v33);
				*(int32_t *)g26 = *(int32_t *)(v29 + 76) - 1;
				// branch -> 0x74804
			} else {
				// 0x74654
				g37 = 5;
				SetMissAnim(v33);
				*(int32_t *)g26 = *(int32_t *)(v29 + 76) - 1;
				// branch -> 0x74804
			}
			// 0x74804
			if (*(int32_t *)g26 == 0) {
				// 0x74810
				v9 = g27 + g31;
				*(int32_t *)(v9 + 52) = 1;
				AddUnLight(*(int32_t *)(v9 + 140));
				// branch -> 0x74824
			}
			// 0x74824
			g34 = g35;
			return PutMissile();
		}
		// 0x74670
		v40 = (int32_t *)g30;
		v41 = v46 + 148;
		v47 = (int32_t *)v41;
		if (*v40 == *v47) {
			// 0x74684
			v42 = v46 + 152;
			if (*(int32_t *)(v46 + 8) == *(int32_t *)v42) {
				// 0x74804
				if (*(int32_t *)g26 == 0) {
					// 0x74810
					v9 = g27 + g31;
					*(int32_t *)(v9 + 52) = 1;
					AddUnLight(*(int32_t *)(v9 + 140));
					// branch -> 0x74824
				}
				// 0x74824
				g34 = g35;
				return PutMissile();
			}
			v44 = v42;
		} else {
			// 0x74670
			v44 = v46 + 152;
			// branch -> 0x74698
		}
		// 0x74698
		v31 = v46;
		*v47 = *v40;
		g39 = 5;
		v35 = v31;
		*(int32_t *)(v35 + 152) = *(int32_t *)(v35 + 8);
		v49 = *(int32_t *)(v31 + 140);
		function_cba34(v49, *(int32_t *)v41, *(int32_t *)v44);
		// branch -> 0x74804
		// 0x74804
		if (*(int32_t *)g26 == 0) {
			// 0x74810
			v9 = g27 + g31;
			*(int32_t *)(v9 + 52) = 1;
			AddUnLight(*(int32_t *)(v9 + 140));
			// branch -> 0x74824
		}
		// 0x74824
		g34 = g35;
		return PutMissile();
	}
	// 0x74548
	g37 = 10;
	v30 = random(68) + 1 + (int32_t) * (char *)g28;
	g37 = 10;
	random(68);
	// branch -> 0x7457c
	// 0x7457c
	v32 = g31;
	v36 = g27;
	v45 = v36 + v32;
	v37 = v45 + 4;
	g30 = v37;
	if (*(int32_t *)v37 == *(int32_t *)(v45 + 28)) {
		// 0x74598
		if (*(int32_t *)(v45 + 8) != *(int32_t *)(v45 + 32)) {
			// 0x745a8
			g42 = 0;
			*(char *)(28 * *(int32_t *)v45 + g29 + 17) = 0;
			v48 = *(int32_t *)(v45 + 8);
			g41 = v48;
			function_6f3d4(g35, v30, 0, v48, 0);
			*(char *)(g28 + 28 * *(int32_t *)g33) = (char)g29;
			v43 = g27;
			v34 = g31;
			// branch -> 0x745ec
		} else {
			v43 = v36;
			v34 = v32;
		}
	} else {
		// 0x745a8
		g42 = 0;
		*(char *)(28 * *(int32_t *)v45 + g29 + 17) = 0;
		v48 = *(int32_t *)(v45 + 8);
		g41 = v48;
		function_6f3d4(g35, v30, 0, v48, 0);
		*(char *)(g28 + 28 * *(int32_t *)g33) = (char)g29;
		v43 = g27;
		v34 = g31;
		// branch -> 0x745ec
	}
	// 0x745ec
	v46 = v34 + v43;
	if (*(int32_t *)g26 == 0) {
		// 0x745f8
		v29 = v46;
		*(int32_t *)(v46 + 44) = 0;
		g34 = g35;
		v38 = (int32_t *)g24;
		*v38 = *v38 - *(int32_t *)g25;
		v39 = (int32_t *)g21;
		*v39 = *v39 - *(int32_t *)g22;
		GetMissilePos();
		v33 = g35;
		if (*(int32_t *)(g27 + g31) == 56) {
			// 0x74638
			g37 = 26;
			SetMissAnim(v33);
			*(int32_t *)g26 = *(int32_t *)(v29 + 76) - 1;
			// branch -> 0x74804
		} else {
			// 0x74654
			g37 = 5;
			SetMissAnim(v33);
			*(int32_t *)g26 = *(int32_t *)(v29 + 76) - 1;
			// branch -> 0x74804
		}
		// 0x74804
		if (*(int32_t *)g26 == 0) {
			// 0x74810
			v9 = g27 + g31;
			*(int32_t *)(v9 + 52) = 1;
			AddUnLight(*(int32_t *)(v9 + 140));
			// branch -> 0x74824
		}
		// 0x74824
		g34 = g35;
		return PutMissile();
	}
	// 0x74670
	v40 = (int32_t *)g30;
	v41 = v46 + 148;
	v47 = (int32_t *)v41;
	if (*v40 == *v47) {
		// 0x74684
		v42 = v46 + 152;
		if (*(int32_t *)(v46 + 8) == *(int32_t *)v42) {
			// 0x74804
			if (*(int32_t *)g26 == 0) {
				// 0x74810
				v9 = g27 + g31;
				*(int32_t *)(v9 + 52) = 1;
				AddUnLight(*(int32_t *)(v9 + 140));
				// branch -> 0x74824
			}
			// 0x74824
			g34 = g35;
			return PutMissile();
		}
		v44 = v42;
	} else {
		// 0x74670
		v44 = v46 + 152;
		// branch -> 0x74698
	}
	// 0x74698
	v31 = v46;
	*v47 = *v40;
	g39 = 5;
	v35 = v31;
	*(int32_t *)(v35 + 152) = *(int32_t *)(v35 + 8);
	v49 = *(int32_t *)(v31 + 140);
	function_cba34(v49, *(int32_t *)v41, *(int32_t *)v44);
	// branch -> 0x74804
	// 0x74804
	if (*(int32_t *)g26 == 0) {
		// 0x74810
		v9 = g27 + g31;
		*(int32_t *)(v9 + 52) = 1;
		AddUnLight(*(int32_t *)(v9 + 140));
		// branch -> 0x74824
	}
	// 0x74824
	g34 = g35;
	return PutMissile();
}

// Address range: 0x74840 - 0x74968
int32_t function_74840(int32_t a1)
{
	// 0x74840
	g34 = a1;
	int32_t v1 = g34; // 0x74848
	g32 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x7484c
	g36 = v2;
	int32_t v3 = 180 * v1; // 0x74850
	g35 = v3;
	int32_t v4 = v2 + v3;        // 0x7485c
	int32_t v5 = v4 + 116;       // 0x7486c
	int32_t *v6 = (int32_t *)v5; // 0x7486c
	*v6 = *v6 - 1;
	g33 = v5;
	int32_t *v7 = (int32_t *)(v4 + 136); // 0x74878
	*v7 = *v7 + 1;
	int32_t *v8 = (int32_t *)(v4 + 36); // 0x74884
	*v8 = *(int32_t *)(v4 + 20) + *v8;
	int32_t *v9 = (int32_t *)(v4 + 40); // 0x74894
	*v9 = *(int32_t *)(v4 + 24) + *v9;
	GetMissilePos();
	int32_t v10;  // 0x748f8
	int32_t *v11; // 0x7490c
	int32_t v12;  // 0x748fc
	int32_t v13;  // 0x74920
	if (*(int32_t *)(v4 + 120) != -1) {
		// 0x748b4
		if (*(int32_t *)(v4 + 124) == 0) {
			// 0x748c0
			// branch -> 0x748f8
		}
		// 0x748f8
		v10 = g35 + g36;
		v12 = *(int32_t *)(v10 + 4);
		v11 = (int32_t *)(v10 + 8);
		if (v12 == *(int32_t *)(v10 + 28)) {
			// 0x7490c
			if (*v11 != *(int32_t *)(v10 + 32)) {
				// 0x7491c
				v13 = *v11;
				g41 = v13;
				g42 = 0;
				function_6f3d4(g32, 0, v13, 0, v12);
				// branch -> 0x74934
			}
		} else {
			// 0x7491c
			v13 = *v11;
			g41 = v13;
			g42 = 0;
			function_6f3d4(g32, 0, v13, 0, v12);
			// branch -> 0x74934
		}
		// 0x74934
		if (*(int32_t *)g33 == 0) {
			// 0x74940
			*(int32_t *)(g35 + g36 + 52) = 1;
			// branch -> 0x7494c
		}
		// 0x7494c
		g34 = g32;
		return PutMissile();
	}
	// 0x748e8
	// branch -> 0x748f8
	// 0x748f8
	v10 = g35 + g36;
	v12 = *(int32_t *)(v10 + 4);
	v11 = (int32_t *)(v10 + 8);
	if (v12 != *(int32_t *)(v10 + 28)) {
		// 0x7491c
		v13 = *v11;
		g41 = v13;
		g42 = 0;
		function_6f3d4(g32, 0, v13, 0, v12);
		// branch -> 0x74934
		// 0x74934
		if (*(int32_t *)g33 == 0) {
			// 0x74940
			*(int32_t *)(g35 + g36 + 52) = 1;
			// branch -> 0x7494c
		}
		// 0x7494c
		g34 = g32;
		return PutMissile();
	}
	// 0x7490c
	if (*v11 != *(int32_t *)(v10 + 32)) {
		// 0x7491c
		v13 = *v11;
		g41 = v13;
		g42 = 0;
		function_6f3d4(g32, 0, v13, 0, v12);
		// branch -> 0x74934
	}
	// 0x74934
	if (*(int32_t *)g33 == 0) {
		// 0x74940
		*(int32_t *)(g35 + g36 + 52) = 1;
		// branch -> 0x7494c
	}
	// 0x7494c
	g34 = g32;
	return PutMissile();
}

// Address range: 0x74968 - 0x74d44
int32_t function_74968(int32_t a1)
{
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x74974
	g32 = v1;
	int32_t v2 = 180 * a1; // 0x74978
	g29 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77e4); // r26
	int32_t v4 = v1 + v2;                    // 0x74984
	g25 = v4;
	g33 = *(int32_t *)(g23 - 0x77a8);
	int32_t v5 = v4 + 116;       // 0x74998
	int32_t *v6 = (int32_t *)v5; // 0x74998
	*v6 = *v6 - 1;
	g28 = v5;
	int32_t v7 = g25; // 0x749a4
	if (*(int32_t *)v7 == 63) {
		// 0x749b0
		if (*(int32_t *)(v7 + 44) == 8) {
			// 0x749bc
			if (*v6 == 0) {
				uint32_t v8 = *(int32_t *)(v7 + 140); // 0x749c8
				if (v8 >= 0) {
					// 0x749d4
					AddUnLight(v8);
					// branch -> 0x749d8
				}
				int32_t v9 = g29 + g32; // 0x749d8
				*(int32_t *)(v9 + 52) = 1;
				g34 = 94;
				g38 = *(int32_t *)(v9 + 8);
				PlaySfxLoc(94);
				// branch -> 0x749f4
			}
			// 0x749f4
			g34 = g36;
			// branch -> 0x74d30
			// 0x74d30
			return PutMissile();
		}
	}
	int32_t v10 = g29 + g32;       // 0x74a00
	int32_t v11 = v10 + 36;        // 0x74a0c
	int32_t *v12 = (int32_t *)v11; // 0x74a0c
	int32_t v13 = *v12;            // 0x74a0c
	g22 = v13;
	g34 = g36;
	g21 = *(int32_t *)(v10 + 40);
	*v12 = *(int32_t *)(v10 + 20) + v13;
	g27 = v11;
	int32_t v14 = v10 + 40;        // 0x74a24
	int32_t *v15 = (int32_t *)v14; // 0x74a24
	*v15 = *(int32_t *)(v10 + 24) + *v15;
	g26 = v14;
	GetMissilePos();
	int32_t v16 = v10 + 120; // 0x74a38
	g24 = v16;
	int32_t v17 = *(int32_t *)v16; // 0x74a3c
	int32_t v18;                   // r17
	int32_t v19;                   // r3
	int32_t v20;                   // 0x74b54
	int32_t v21;                   // 0x74d04
	int32_t result;                // 0x74d2c
	int32_t result2;               // 0x74d40
	int32_t v22;                   // 0x74b34
	int32_t *v23;                  // 0x74cd0
	int32_t v24;                   // 0x74cd4
	int32_t v25;                   // 0x74ce8
	int32_t v26;
	int32_t v27;  // 0x74b28
	int32_t *v28; // 0x74b40
	int32_t v29;  // 0x74b84
	uint32_t v30; // 0x74b98
	int32_t v31;  // 0x74bdc
	int32_t v32;  // 0x74c18
	int32_t v33;  // 0x74c54
	int32_t v34;  // 0x74ccc
	int32_t *v35; // 0x74cd4
	int32_t v36;  // 0x74b58
	int32_t v37;  // 0x74bf4
	int32_t v38;  // 0x74bfc
	int32_t v39;  // 0x74c04
	int32_t v40;  // 0x74c30
	int32_t v41;  // 0x74c38
	int32_t v42;  // 0x74c40
	int32_t v43;  // 0x74c6c
	int32_t v44;  // 0x74c74
	int32_t v45;  // 0x74c7c
	uint32_t v46; // 0x74cb8
	uint32_t v47; // 0x74d0c
	if (v17 != -1) {
		// 0x74a48
		if (*(int32_t *)(v10 + 124) != 0) {
			int32_t v48 = *(int32_t *)(g23 - 0x7754) + 232 * v17; // 0x74ae4
			int32_t v49 = v48 + 201;                              // 0x74af4
			unsigned char v50 = *(char *)v49;                     // 0x74af4
			g37 = (int32_t) * (char *)(v48 + 202) + 1 - (int32_t)v50;
			v18 = (int32_t) * (char *)v49 + random(77);
			// branch -> 0x74b28
			// 0x74b28
			v27 = g29 + g32;
			v22 = v27 + 4;
			g30 = v22;
			v28 = (int32_t *)(v27 + 8);
			if (*(int32_t *)v22 == *(int32_t *)(v27 + 28)) {
				// 0x74b40
				if (*v28 != *(int32_t *)(v27 + 32)) {
					// 0x74b50
					v20 = v18;
					v36 = *v28;
					g41 = v36;
					g42 = 0;
					function_6f3d4(g36, v20, v20, 0, v36);
					// branch -> 0x74b70
				}
			} else {
				// 0x74b50
				v20 = v18;
				v36 = *v28;
				g41 = v36;
				g42 = 0;
				function_6f3d4(g36, v20, v20, 0, v36);
				// branch -> 0x74b70
			}
			// 0x74b70
			if (*(int32_t *)g28 != 0) {
				// 0x74ccc
				v34 = g29 + g32;
				v23 = (int32_t *)g30;
				v24 = v34 + 148;
				v35 = (int32_t *)v24;
				if (*v23 == *v35) {
					// 0x74ce0
					v25 = v34 + 152;
					if (*(int32_t *)(v34 + 8) == *(int32_t *)v25) {
						// 0x74d28
						g34 = g36;
						result = PutMissile();
						// branch -> 0x74d30
						// 0x74d30
						return result;
					}
					v26 = v25;
				} else {
					// 0x74ccc
					v26 = v34 + 152;
					// branch -> 0x74cf4
				}
				// 0x74cf4
				v19 = v34;
				*v35 = *v23;
				v21 = v19;
				*(int32_t *)(v21 + 152) = *(int32_t *)(v21 + 8);
				v47 = *(int32_t *)(v19 + 140);
				if (v47 >= 0) {
					// 0x74d18
					g39 = 8;
					function_cba34(v47, *(int32_t *)v24, *(int32_t *)v26);
					// branch -> 0x74d28
				}
				// 0x74d28
				g34 = g36;
				result = PutMissile();
				// branch -> 0x74d30
				// 0x74d30
				return result;
			}
			// 0x74b7c
			v29 = g32 + 52 + g29;
			*(int32_t *)v29 = 1;
			g34 = g36;
			*(int32_t *)g27 = g22;
			*(int32_t *)g26 = g21;
			GetMissilePos();
			v30 = *(int32_t *)g25;
			if (v30 == 24) {
				// 0x74bd8
				v31 = g29 + g32;
				v37 = *(int32_t *)(v31 + 124);
				v38 = *(int32_t *)(v31 + 8);
				v39 = *(int32_t *)(v31 + 44);
				g13 = *(int32_t *)g24;
				AddMissile(*(int32_t *)g30, v38, g36, 0, v39, 25, 0x1000000 * v37 / 0x1000000, 0, 0);
				// branch -> 0x74cb4
				// 0x74cb4
				v46 = *(int32_t *)(g29 + g32 + 140);
				if (v46 >= 0) {
					// 0x74cc4
					AddUnLight(v46);
					// branch -> 0x74d28
				}
				// 0x74d28
				g34 = g36;
				result = PutMissile();
				// branch -> 0x74d30
			} else {
				// 0x74ba4
				if (v30 > 24) {
					// 0x74bc0
					if (v30 == 63) {
						// 0x74c8c
						SetMissDir(g36, 8);
						*(int32_t *)g28 = 7;
						g34 = g36;
						*(int32_t *)v29 = 0;
						result2 = PutMissile();
						// branch -> 0x74d30
					} else {
						// 0x74bc8
						if (v30 <= 63) {
							// 0x74bcc
							if (v30 == 57) {
								// 0x74c50
								v33 = g29 + g32;
								v43 = *(int32_t *)(v33 + 124);
								v44 = *(int32_t *)(v33 + 8);
								v45 = *(int32_t *)(v33 + 44);
								g13 = *(int32_t *)g24;
								AddMissile(*(int32_t *)g30, v44, g36, 0, v45, 58, 0x1000000 * v43 / 0x1000000, 0, 0);
								// branch -> 0x74cb4
							}
						}
						// 0x74cb4
						v46 = *(int32_t *)(g29 + g32 + 140);
						if (v46 >= 0) {
							// 0x74cc4
							AddUnLight(v46);
							// branch -> 0x74d28
						}
						// 0x74d28
						g34 = g36;
						result2 = PutMissile();
						// branch -> 0x74d30
					}
					// 0x74d30
					return result2;
				}
				// 0x74ba8
				if (v30 == 21) {
					// 0x74c14
					v32 = g29 + g32;
					v40 = *(int32_t *)(v32 + 124);
					v41 = *(int32_t *)(v32 + 8);
					v42 = *(int32_t *)(v32 + 44);
					g13 = *(int32_t *)g24;
					AddMissile(*(int32_t *)g30, v41, g36, 0, v42, 9, 0x1000000 * v40 / 0x1000000, 0, 0);
					// branch -> 0x74cb4
				} else {
					// 0x74bb0
					if (v30 <= 21) {
						// 0x74bb4
						if (v30 == 1) {
							// 0x74c14
							v32 = g29 + g32;
							v40 = *(int32_t *)(v32 + 124);
							v41 = *(int32_t *)(v32 + 8);
							v42 = *(int32_t *)(v32 + 44);
							g13 = *(int32_t *)g24;
							AddMissile(*(int32_t *)g30, v41, g36, 0, v42, 9, 0x1000000 * v40 / 0x1000000, 0, 0);
							// branch -> 0x74cb4
						}
					}
				}
				// 0x74cb4
				v46 = *(int32_t *)(g29 + g32 + 140);
				if (v46 >= 0) {
					// 0x74cc4
					AddUnLight(v46);
					// branch -> 0x74d28
				}
				// 0x74d28
				g34 = g36;
				result = PutMissile();
				// branch -> 0x74d30
				// 0x74d30
				return result;
			}
			// 0x74d30
			return result;
		}
		int32_t v51 = *(int32_t *)g25; // 0x74a54
		if (v51 == 24) {
			int32_t v52 = *(int32_t *)(v10 + 48);                  // 0x74a80
			uint32_t v53 = *(int32_t *)(g33 + 0x55ec * v17 + 360); // 0x74a88
			v18 = 3 * v52 + (v53 / 2 | v53 & -0x80000000) - v53 / 8;
			// branch -> 0x74b28
			// 0x74b28
			v27 = g29 + g32;
			v22 = v27 + 4;
			g30 = v22;
			v28 = (int32_t *)(v27 + 8);
			if (*(int32_t *)v22 == *(int32_t *)(v27 + 28)) {
				// 0x74b40
				if (*v28 != *(int32_t *)(v27 + 32)) {
					// 0x74b50
					v20 = v18;
					v36 = *v28;
					g41 = v36;
					g42 = 0;
					function_6f3d4(g36, v20, v20, 0, v36);
					// branch -> 0x74b70
				}
			} else {
				// 0x74b50
				v20 = v18;
				v36 = *v28;
				g41 = v36;
				g42 = 0;
				function_6f3d4(g36, v20, v20, 0, v36);
				// branch -> 0x74b70
			}
			// 0x74b70
			if (*(int32_t *)g28 != 0) {
				// 0x74ccc
				v34 = g29 + g32;
				v23 = (int32_t *)g30;
				v24 = v34 + 148;
				v35 = (int32_t *)v24;
				if (*v23 == *v35) {
					// 0x74ce0
					v25 = v34 + 152;
					if (*(int32_t *)(v34 + 8) == *(int32_t *)v25) {
						// 0x74d28
						g34 = g36;
						result = PutMissile();
						// branch -> 0x74d30
						// 0x74d30
						return result;
					}
					v26 = v25;
				} else {
					// 0x74ccc
					v26 = v34 + 152;
					// branch -> 0x74cf4
				}
				// 0x74cf4
				v19 = v34;
				*v35 = *v23;
				v21 = v19;
				*(int32_t *)(v21 + 152) = *(int32_t *)(v21 + 8);
				v47 = *(int32_t *)(v19 + 140);
				if (v47 >= 0) {
					// 0x74d18
					g39 = 8;
					function_cba34(v47, *(int32_t *)v24, *(int32_t *)v26);
					// branch -> 0x74d28
				}
				// 0x74d28
				g34 = g36;
				result = PutMissile();
				// branch -> 0x74d30
				// 0x74d30
				return result;
			}
			// 0x74b7c
			v29 = g32 + 52 + g29;
			*(int32_t *)v29 = 1;
			g34 = g36;
			*(int32_t *)g27 = g22;
			*(int32_t *)g26 = g21;
			GetMissilePos();
			v30 = *(int32_t *)g25;
			if (v30 == 24) {
				// 0x74bd8
				v31 = g29 + g32;
				v37 = *(int32_t *)(v31 + 124);
				v38 = *(int32_t *)(v31 + 8);
				v39 = *(int32_t *)(v31 + 44);
				g13 = *(int32_t *)g24;
				AddMissile(*(int32_t *)g30, v38, g36, 0, v39, 25, 0x1000000 * v37 / 0x1000000, 0, 0);
				// branch -> 0x74cb4
				// 0x74cb4
				v46 = *(int32_t *)(g29 + g32 + 140);
				if (v46 >= 0) {
					// 0x74cc4
					AddUnLight(v46);
					// branch -> 0x74d28
				}
				// 0x74d28
				g34 = g36;
				result = PutMissile();
				// branch -> 0x74d30
			} else {
				// 0x74ba4
				if (v30 > 24) {
					// 0x74bc0
					if (v30 == 63) {
						// 0x74c8c
						SetMissDir(g36, 8);
						*(int32_t *)g28 = 7;
						g34 = g36;
						*(int32_t *)v29 = 0;
						result2 = PutMissile();
						// branch -> 0x74d30
					} else {
						// 0x74bc8
						if (v30 <= 63) {
							// 0x74bcc
							if (v30 == 57) {
								// 0x74c50
								v33 = g29 + g32;
								v43 = *(int32_t *)(v33 + 124);
								v44 = *(int32_t *)(v33 + 8);
								v45 = *(int32_t *)(v33 + 44);
								g13 = *(int32_t *)g24;
								AddMissile(*(int32_t *)g30, v44, g36, 0, v45, 58, 0x1000000 * v43 / 0x1000000, 0, 0);
								// branch -> 0x74cb4
							}
						}
						// 0x74cb4
						v46 = *(int32_t *)(g29 + g32 + 140);
						if (v46 >= 0) {
							// 0x74cc4
							AddUnLight(v46);
							// branch -> 0x74d28
						}
						// 0x74d28
						g34 = g36;
						result2 = PutMissile();
						// branch -> 0x74d30
					}
					// 0x74d30
					return result2;
				}
				// 0x74ba8
				if (v30 == 21) {
					// 0x74c14
					v32 = g29 + g32;
					v40 = *(int32_t *)(v32 + 124);
					v41 = *(int32_t *)(v32 + 8);
					v42 = *(int32_t *)(v32 + 44);
					g13 = *(int32_t *)g24;
					AddMissile(*(int32_t *)g30, v41, g36, 0, v42, 9, 0x1000000 * v40 / 0x1000000, 0, 0);
					// branch -> 0x74cb4
				} else {
					// 0x74bb0
					if (v30 <= 21) {
						// 0x74bb4
						if (v30 == 1) {
							// 0x74c14
							v32 = g29 + g32;
							v40 = *(int32_t *)(v32 + 124);
							v41 = *(int32_t *)(v32 + 8);
							v42 = *(int32_t *)(v32 + 44);
							g13 = *(int32_t *)g24;
							AddMissile(*(int32_t *)g30, v41, g36, 0, v42, 9, 0x1000000 * v40 / 0x1000000, 0, 0);
							// branch -> 0x74cb4
						}
					}
				}
				// 0x74cb4
				v46 = *(int32_t *)(g29 + g32 + 140);
				if (v46 >= 0) {
					// 0x74cc4
					AddUnLight(v46);
					// branch -> 0x74d28
				}
				// 0x74d28
				g34 = g36;
				result = PutMissile();
				// branch -> 0x74d30
				// 0x74d30
				return result;
			}
			// 0x74d30
			return result;
		}
		// 0x74a60
		if (v51 > 24) {
			// 0x74a70
			if (v51 == 63) {
				// 0x74ad8
				v18 = 0;
				// branch -> 0x74b28
			}
		} else {
			// 0x74a64
			if (v51 == 1) {
				// 0x74aa8
				g37 = 10;
				int32_t v54 = *(int32_t *)(g33 + 0x55ec * v17 + 360) / 8 + random(75); // 0x74ac8
				v18 = *(int32_t *)(v10 + 48) + 1 + v54;
				// branch -> 0x74b28
			}
		}
		// 0x74b28
		v27 = g29 + g32;
		v22 = v27 + 4;
		g30 = v22;
		v28 = (int32_t *)(v27 + 8);
		if (*(int32_t *)v22 == *(int32_t *)(v27 + 28)) {
			// 0x74b40
			if (*v28 != *(int32_t *)(v27 + 32)) {
				// 0x74b50
				v20 = v18;
				v36 = *v28;
				g41 = v36;
				g42 = 0;
				function_6f3d4(g36, v20, v20, 0, v36);
				// branch -> 0x74b70
			}
		} else {
			// 0x74b50
			v20 = v18;
			v36 = *v28;
			g41 = v36;
			g42 = 0;
			function_6f3d4(g36, v20, v20, 0, v36);
			// branch -> 0x74b70
		}
		// 0x74b70
		if (*(int32_t *)g28 != 0) {
			// 0x74ccc
			v34 = g29 + g32;
			v23 = (int32_t *)g30;
			v24 = v34 + 148;
			v35 = (int32_t *)v24;
			if (*v23 == *v35) {
				// 0x74ce0
				v25 = v34 + 152;
				if (*(int32_t *)(v34 + 8) == *(int32_t *)v25) {
					// 0x74d28
					g34 = g36;
					result = PutMissile();
					// branch -> 0x74d30
					// 0x74d30
					return result;
				}
				v26 = v25;
			} else {
				// 0x74ccc
				v26 = v34 + 152;
				// branch -> 0x74cf4
			}
			// 0x74cf4
			v19 = v34;
			*v35 = *v23;
			v21 = v19;
			*(int32_t *)(v21 + 152) = *(int32_t *)(v21 + 8);
			v47 = *(int32_t *)(v19 + 140);
			if (v47 >= 0) {
				// 0x74d18
				g39 = 8;
				function_cba34(v47, *(int32_t *)v24, *(int32_t *)v26);
				// branch -> 0x74d28
			}
			// 0x74d28
			g34 = g36;
			result = PutMissile();
			// branch -> 0x74d30
			// 0x74d30
			return result;
		}
		// 0x74b7c
		v29 = g32 + 52 + g29;
		*(int32_t *)v29 = 1;
		g34 = g36;
		*(int32_t *)g27 = g22;
		*(int32_t *)g26 = g21;
		GetMissilePos();
		v30 = *(int32_t *)g25;
		if (v30 == 24) {
			// 0x74bd8
			v31 = g29 + g32;
			v37 = *(int32_t *)(v31 + 124);
			v38 = *(int32_t *)(v31 + 8);
			v39 = *(int32_t *)(v31 + 44);
			g13 = *(int32_t *)g24;
			AddMissile(*(int32_t *)g30, v38, g36, 0, v39, 25, 0x1000000 * v37 / 0x1000000, 0, 0);
			// branch -> 0x74cb4
			// 0x74cb4
			v46 = *(int32_t *)(g29 + g32 + 140);
			if (v46 >= 0) {
				// 0x74cc4
				AddUnLight(v46);
				// branch -> 0x74d28
			}
			// 0x74d28
			g34 = g36;
			result = PutMissile();
			// branch -> 0x74d30
		} else {
			// 0x74ba4
			if (v30 > 24) {
				// 0x74bc0
				if (v30 == 63) {
					// 0x74c8c
					SetMissDir(g36, 8);
					*(int32_t *)g28 = 7;
					g34 = g36;
					*(int32_t *)v29 = 0;
					result2 = PutMissile();
					// branch -> 0x74d30
				} else {
					// 0x74bc8
					if (v30 <= 63) {
						// 0x74bcc
						if (v30 == 57) {
							// 0x74c50
							v33 = g29 + g32;
							v43 = *(int32_t *)(v33 + 124);
							v44 = *(int32_t *)(v33 + 8);
							v45 = *(int32_t *)(v33 + 44);
							g13 = *(int32_t *)g24;
							AddMissile(*(int32_t *)g30, v44, g36, 0, v45, 58, 0x1000000 * v43 / 0x1000000, 0, 0);
							// branch -> 0x74cb4
						}
					}
					// 0x74cb4
					v46 = *(int32_t *)(g29 + g32 + 140);
					if (v46 >= 0) {
						// 0x74cc4
						AddUnLight(v46);
						// branch -> 0x74d28
					}
					// 0x74d28
					g34 = g36;
					result2 = PutMissile();
					// branch -> 0x74d30
				}
				// 0x74d30
				return result2;
			}
			// 0x74ba8
			if (v30 == 21) {
				// 0x74c14
				v32 = g29 + g32;
				v40 = *(int32_t *)(v32 + 124);
				v41 = *(int32_t *)(v32 + 8);
				v42 = *(int32_t *)(v32 + 44);
				g13 = *(int32_t *)g24;
				AddMissile(*(int32_t *)g30, v41, g36, 0, v42, 9, 0x1000000 * v40 / 0x1000000, 0, 0);
				// branch -> 0x74cb4
			} else {
				// 0x74bb0
				if (v30 <= 21) {
					// 0x74bb4
					if (v30 == 1) {
						// 0x74c14
						v32 = g29 + g32;
						v40 = *(int32_t *)(v32 + 124);
						v41 = *(int32_t *)(v32 + 8);
						v42 = *(int32_t *)(v32 + 44);
						g13 = *(int32_t *)g24;
						AddMissile(*(int32_t *)g30, v41, g36, 0, v42, 9, 0x1000000 * v40 / 0x1000000, 0, 0);
						// branch -> 0x74cb4
					}
				}
			}
			// 0x74cb4
			v46 = *(int32_t *)(g29 + g32 + 140);
			if (v46 >= 0) {
				// 0x74cc4
				AddUnLight(v46);
				// branch -> 0x74d28
			}
			// 0x74d28
			g34 = g36;
			result = PutMissile();
			// branch -> 0x74d30
			// 0x74d30
			return result;
		}
		// 0x74d30
		return result;
	}
	// 0x74b10
	g37 = 2 * (int32_t) * (char *)v3;
	int32_t v55 = random(78); // 0x74b1c
	v18 = (int32_t) * (char *)v3 + v55;
	// branch -> 0x74b28
	// 0x74b28
	v27 = g29 + g32;
	v22 = v27 + 4;
	g30 = v22;
	v28 = (int32_t *)(v27 + 8);
	if (*(int32_t *)v22 == *(int32_t *)(v27 + 28)) {
		// 0x74b40
		if (*v28 != *(int32_t *)(v27 + 32)) {
			// 0x74b50
			v20 = v18;
			v36 = *v28;
			g41 = v36;
			g42 = 0;
			function_6f3d4(g36, v20, v20, 0, v36);
			// branch -> 0x74b70
		}
		// 0x74b70
		if (*(int32_t *)g28 != 0) {
			// 0x74ccc
			v34 = g29 + g32;
			v23 = (int32_t *)g30;
			v24 = v34 + 148;
			v35 = (int32_t *)v24;
			if (*v23 == *v35) {
				// 0x74ce0
				v25 = v34 + 152;
				if (*(int32_t *)(v34 + 8) == *(int32_t *)v25) {
					// 0x74d28
					g34 = g36;
					result = PutMissile();
					// branch -> 0x74d30
					// 0x74d30
					return result;
				}
				v26 = v25;
			} else {
				// 0x74ccc
				v26 = v34 + 152;
				// branch -> 0x74cf4
			}
			// 0x74cf4
			v19 = v34;
			*v35 = *v23;
			v21 = v19;
			*(int32_t *)(v21 + 152) = *(int32_t *)(v21 + 8);
			v47 = *(int32_t *)(v19 + 140);
			if (v47 >= 0) {
				// 0x74d18
				g39 = 8;
				function_cba34(v47, *(int32_t *)v24, *(int32_t *)v26);
				// branch -> 0x74d28
			}
			// 0x74d28
			g34 = g36;
			result = PutMissile();
			// branch -> 0x74d30
			// 0x74d30
			return result;
		}
		// 0x74b7c
		v29 = g32 + 52 + g29;
		*(int32_t *)v29 = 1;
		g34 = g36;
		*(int32_t *)g27 = g22;
		*(int32_t *)g26 = g21;
		GetMissilePos();
		v30 = *(int32_t *)g25;
		if (v30 == 24) {
			// 0x74bd8
			v31 = g29 + g32;
			v37 = *(int32_t *)(v31 + 124);
			v38 = *(int32_t *)(v31 + 8);
			v39 = *(int32_t *)(v31 + 44);
			g13 = *(int32_t *)g24;
			AddMissile(*(int32_t *)g30, v38, g36, 0, v39, 25, 0x1000000 * v37 / 0x1000000, 0, 0);
			// branch -> 0x74cb4
			// 0x74cb4
			v46 = *(int32_t *)(g29 + g32 + 140);
			if (v46 >= 0) {
				// 0x74cc4
				AddUnLight(v46);
				// branch -> 0x74d28
			}
			// 0x74d28
			g34 = g36;
			result = PutMissile();
			// branch -> 0x74d30
		} else {
			// 0x74ba4
			if (v30 > 24) {
				// 0x74bc0
				if (v30 == 63) {
					// 0x74c8c
					SetMissDir(g36, 8);
					*(int32_t *)g28 = 7;
					g34 = g36;
					*(int32_t *)v29 = 0;
					result2 = PutMissile();
					// branch -> 0x74d30
				} else {
					// 0x74bc8
					if (v30 <= 63) {
						// 0x74bcc
						if (v30 == 57) {
							// 0x74c50
							v33 = g29 + g32;
							v43 = *(int32_t *)(v33 + 124);
							v44 = *(int32_t *)(v33 + 8);
							v45 = *(int32_t *)(v33 + 44);
							g13 = *(int32_t *)g24;
							AddMissile(*(int32_t *)g30, v44, g36, 0, v45, 58, 0x1000000 * v43 / 0x1000000, 0, 0);
							// branch -> 0x74cb4
						}
					}
					// 0x74cb4
					v46 = *(int32_t *)(g29 + g32 + 140);
					if (v46 >= 0) {
						// 0x74cc4
						AddUnLight(v46);
						// branch -> 0x74d28
					}
					// 0x74d28
					g34 = g36;
					result2 = PutMissile();
					// branch -> 0x74d30
				}
				// 0x74d30
				return result2;
			}
			// 0x74ba8
			if (v30 == 21) {
				// 0x74c14
				v32 = g29 + g32;
				v40 = *(int32_t *)(v32 + 124);
				v41 = *(int32_t *)(v32 + 8);
				v42 = *(int32_t *)(v32 + 44);
				g13 = *(int32_t *)g24;
				AddMissile(*(int32_t *)g30, v41, g36, 0, v42, 9, 0x1000000 * v40 / 0x1000000, 0, 0);
				// branch -> 0x74cb4
			} else {
				// 0x74bb0
				if (v30 <= 21) {
					// 0x74bb4
					if (v30 == 1) {
						// 0x74c14
						v32 = g29 + g32;
						v40 = *(int32_t *)(v32 + 124);
						v41 = *(int32_t *)(v32 + 8);
						v42 = *(int32_t *)(v32 + 44);
						g13 = *(int32_t *)g24;
						AddMissile(*(int32_t *)g30, v41, g36, 0, v42, 9, 0x1000000 * v40 / 0x1000000, 0, 0);
						// branch -> 0x74cb4
					}
				}
			}
			// 0x74cb4
			v46 = *(int32_t *)(g29 + g32 + 140);
			if (v46 >= 0) {
				// 0x74cc4
				AddUnLight(v46);
				// branch -> 0x74d28
			}
			// 0x74d28
			g34 = g36;
			result = PutMissile();
			// branch -> 0x74d30
			// 0x74d30
			return result;
		}
		// 0x74d30
		return result;
	}
	// 0x74b50
	v20 = v18;
	v36 = *v28;
	g41 = v36;
	g42 = 0;
	function_6f3d4(g36, v20, v20, 0, v36);
	// branch -> 0x74b70
	// 0x74b70
	if (*(int32_t *)g28 == 0) {
		// 0x74b7c
		v29 = g32 + 52 + g29;
		*(int32_t *)v29 = 1;
		g34 = g36;
		*(int32_t *)g27 = g22;
		*(int32_t *)g26 = g21;
		GetMissilePos();
		v30 = *(int32_t *)g25;
		if (v30 == 24) {
			// 0x74bd8
			v31 = g29 + g32;
			v37 = *(int32_t *)(v31 + 124);
			v38 = *(int32_t *)(v31 + 8);
			v39 = *(int32_t *)(v31 + 44);
			g13 = *(int32_t *)g24;
			AddMissile(*(int32_t *)g30, v38, g36, 0, v39, 25, 0x1000000 * v37 / 0x1000000, 0, 0);
			// branch -> 0x74cb4
			// 0x74cb4
			v46 = *(int32_t *)(g29 + g32 + 140);
			if (v46 >= 0) {
				// 0x74cc4
				AddUnLight(v46);
				// branch -> 0x74d28
			}
			// 0x74d28
			g34 = g36;
			result2 = PutMissile();
			// branch -> 0x74d30
		} else {
			// 0x74ba4
			if (v30 > 24) {
				// 0x74bc0
				if (v30 == 63) {
					// 0x74c8c
					SetMissDir(g36, 8);
					*(int32_t *)g28 = 7;
					g34 = g36;
					*(int32_t *)v29 = 0;
					result2 = PutMissile();
					// branch -> 0x74d30
				} else {
					// 0x74bc8
					if (v30 <= 63) {
						// 0x74bcc
						if (v30 == 57) {
							// 0x74c50
							v33 = g29 + g32;
							v43 = *(int32_t *)(v33 + 124);
							v44 = *(int32_t *)(v33 + 8);
							v45 = *(int32_t *)(v33 + 44);
							g13 = *(int32_t *)g24;
							AddMissile(*(int32_t *)g30, v44, g36, 0, v45, 58, 0x1000000 * v43 / 0x1000000, 0, 0);
							// branch -> 0x74cb4
						}
					}
					// 0x74cb4
					v46 = *(int32_t *)(g29 + g32 + 140);
					if (v46 >= 0) {
						// 0x74cc4
						AddUnLight(v46);
						// branch -> 0x74d28
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x74d30
				return result2;
			}
			// 0x74ba8
			if (v30 == 21) {
				// 0x74c14
				v32 = g29 + g32;
				v40 = *(int32_t *)(v32 + 124);
				v41 = *(int32_t *)(v32 + 8);
				v42 = *(int32_t *)(v32 + 44);
				g13 = *(int32_t *)g24;
				AddMissile(*(int32_t *)g30, v41, g36, 0, v42, 9, 0x1000000 * v40 / 0x1000000, 0, 0);
				// branch -> 0x74cb4
			} else {
				// 0x74bb0
				if (v30 <= 21) {
					// 0x74bb4
					if (v30 == 1) {
						// 0x74c14
						v32 = g29 + g32;
						v40 = *(int32_t *)(v32 + 124);
						v41 = *(int32_t *)(v32 + 8);
						v42 = *(int32_t *)(v32 + 44);
						g13 = *(int32_t *)g24;
						AddMissile(*(int32_t *)g30, v41, g36, 0, v42, 9, 0x1000000 * v40 / 0x1000000, 0, 0);
						// branch -> 0x74cb4
					}
				}
			}
			// 0x74cb4
			v46 = *(int32_t *)(g29 + g32 + 140);
			if (v46 >= 0) {
				// 0x74cc4
				AddUnLight(v46);
				// branch -> 0x74d28
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
			// 0x74cb4
			v46 = *(int32_t *)(g29 + g32 + 140);
			if (v46 >= 0) {
				// 0x74cc4
				AddUnLight(v46);
				// branch -> 0x74d28
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x74d30
		return result2;
	}
	// 0x74ccc
	v34 = g29 + g32;
	v23 = (int32_t *)g30;
	v24 = v34 + 148;
	v35 = (int32_t *)v24;
	if (*v23 == *v35) {
		// 0x74ce0
		v25 = v34 + 152;
		if (*(int32_t *)(v34 + 8) == *(int32_t *)v25) {
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			v26 = v25;
		}
	} else {
		// 0x74ccc
		v26 = v34 + 152;
		// branch -> 0x74cf4
	}
	// 0x74cf4
	v19 = v34;
	*v35 = *v23;
	v21 = v19;
	*(int32_t *)(v21 + 152) = *(int32_t *)(v21 + 8);
	v47 = *(int32_t *)(v19 + 140);
	if (v47 >= 0) {
		// 0x74d18
		g39 = 8;
		function_cba34(v47, *(int32_t *)v24, *(int32_t *)v26);
		// branch -> 0x74d28
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x74d44 - 0x74e84
int32_t function_74d44(int32_t a1)
{
	// 0x74d44
	g34 = a1;
	int32_t v1 = g34;                                   // 0x74d4c
	int32_t v2 = *(int32_t *)(g23 - 0x7664) + 180 * v1; // 0x74d58
	int32_t *v3 = (int32_t *)(v2 + 116);                // 0x74d68
	*v3 = *v3 - 1;
	int32_t *v4 = (int32_t *)(v2 + 36); // 0x74d7c
	*v4 = *(int32_t *)(v2 + 20) + *v4;
	int32_t *v5 = (int32_t *)(v2 + 40); // 0x74d8c
	*v5 = *(int32_t *)(v2 + 24) + *v5;
	GetMissilePos();
	int32_t v6 = *(int32_t *)(v2 + 4); // 0x74db0
	int32_t v7 = *(int32_t *)(v2 + 8); // 0x74db4
	g41 = v7;
	g42 = 0;
	function_6f3d4(v1, *(int32_t *)(v2 + 128), 0, v6, v7);
	if (*(int32_t *)(g28 + 132) == 1) {
		// 0x74dd8
		*(int32_t *)g33 = g32;
		// branch -> 0x74ddc
	}
	int32_t v8 = *(int32_t *)(g23 - 0x7684);               // 0x74de0
	int32_t v9 = g30;                                      // 0x74de8
	char v10 = *(char *)(v9 + 112 * g31 + *(int32_t *)v8); // 0x74dec
	int32_t v11 = v10;                                     // 0x74df0
	if (v10 != 0) {
		// 0x74df8
		if (g31 == *(int32_t *)g27) {
			// 0x74e04
			if (v9 == *(int32_t *)g26) {
				int32_t v12 = *(int32_t *)(g23 - 0x7688);                             // 0x74e34
				int32_t v13 = *(int32_t *)(v12 + 120 * (v10 < 0 ? -v11 : v11) - 120); // 0x74e38
				if (v13 != 59) {
					// 0x74e44
					if (v13 != 60) {
						// 0x74e50
						if (*(int32_t *)g33 == 0) {
							// 0x74e5c
							*(int32_t *)(g35 + g36 + 52) = 1;
							// branch -> 0x74e68
						}
						// 0x74e68
						g34 = g29;
						return PutMissile();
					}
				}
				// 0x74e4c
				*(int32_t *)g33 = g32;
				// branch -> 0x74e50
			}
		}
	}
	// 0x74e50
	if (*(int32_t *)g33 == 0) {
		// 0x74e5c
		*(int32_t *)(g35 + g36 + 52) = 1;
		// branch -> 0x74e68
	}
	// 0x74e68
	g34 = g29;
	return PutMissile();
}

// Address range: 0x74e84 - 0x74f3c
int32_t function_74e84(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x74ea8
	g36 = v1;
	int32_t *v2 = (int32_t *)(v1 + 116); // 0x74eb0
	g34 = a1;
	*v2 = *v2 - 1;
	int32_t v3 = g36;                   // 0x74ec0
	int32_t *v4 = (int32_t *)(v3 + 36); // 0x74ec0
	*v4 = *(int32_t *)(v3 + 20) + *v4;
	int32_t v5 = g36;                   // 0x74ed0
	int32_t *v6 = (int32_t *)(v5 + 40); // 0x74ed0
	*v6 = *(int32_t *)(v5 + 24) + *v6;
	GetMissilePos();
	int32_t v7 = g36;                  // 0x74ee4
	int32_t v8 = *(int32_t *)(v7 + 8); // 0x74ef4
	g41 = v8;
	g42 = 0;
	function_6f3d4(a1, *(int32_t *)(v7 + 128), 0, *(int32_t *)(v7 + 4), v8);
	if (*(int32_t *)g35 == 0) {
		// 0x74f10
		*(int32_t *)(g36 + 52) = 1;
		// branch -> 0x74f18
	}
	// 0x74f18
	g34 = g33;
	return PutMissile();
}

// Address range: 0x74f3c - 0x75000
int32_t function_74f3c(int32_t a1)
{
	// 0x74f3c
	g42 = 0;
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x74f6c
	int32_t *v2 = (int32_t *)(v1 + 116);                // 0x74f74
	*v2 = *v2 - 1;
	int32_t v3 = *(int32_t *)(v1 + 8); // 0x74f94
	g41 = v3;
	function_6f3d4(a1, *(int32_t *)(v1 + 128), 1, *(int32_t *)(v1 + 4), v3);
	*(int32_t *)g35 = g33;
	if (*(int32_t *)g35 != 0) {
		// 0x74fd8
		g34 = g32;
		return PutMissile();
	}
	int32_t v4 = g36; // 0x74fac
	if (*(int32_t *)(v4 + 44) == 0) {
		// 0x74fc4
		SetMissDir(g32, 1);
		*(int32_t *)g35 = *(int32_t *)(g36 + 76);
		// branch -> 0x74fd8
	} else {
		// 0x74fb8
		*(int32_t *)(v4 + 52) = 1;
		// branch -> 0x74fd8
	}
	// 0x74fd8
	g34 = g32;
	return PutMissile();
}

// Address range: 0x75000 - 0x751f8
int32_t function_75000(int32_t a1)
{
	int32_t v1 = 180 * a1;                   // 0x75010
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x75014
	g36 = v2;
	int32_t v3 = v2 + v1;                                // 0x75018
	int32_t v4 = v3;                                     // r25
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x5f28); // bp-88
	int32_t *v6 = (int32_t *)(v3 + 116);                 // 0x75098
	*v6 = *v6 - 1;
	int32_t v7 = v3 + 116; // 0x750a4
	if (*(int32_t *)v7 == *(int32_t *)(v4 + 148)) {
		// 0x750b4
		SetMissDir(a1, 1);
		g37 = 11;
		*(int32_t *)(v4 + 96) = random(83) + 1;
		// branch -> 0x750d4
	}
	int32_t v8 = v1 + g36; // 0x750d4
	v4 = v8;
	if (*(int32_t *)v7 == *(int32_t *)(v8 + 76) - 1) {
		// 0x750ec
		SetMissDir(a1, 0);
		*(int32_t *)(v4 + 96) = 13;
		*(int32_t *)(v4 + 92) = -1;
		// branch -> 0x75108
	}
	int32_t v9 = g36 + v1;              // 0x75108
	int32_t v10 = *(int32_t *)(v9 + 8); // 0x75120
	g41 = v10;
	g42 = 1;
	function_6f3d4(a1, *(int32_t *)(v9 + 128), 1, *(int32_t *)(v9 + 4), v10);
	if (*(int32_t *)g33 == 0) {
		// 0x75140
		*(int32_t *)(g29 + 52) = 1;
		AddUnLight(*(int32_t *)(g29 + 140));
		// branch -> 0x75150
	}
	int32_t v11 = g36;       // 0x75150
	int32_t v12 = g35 + v11; // 0x75150
	if (*(int32_t *)(v12 + 44) == 0 || *(int32_t *)g33 == 0 || *(int32_t *)(v12 + 92) == -1) {
		// 0x751dc
		g34 = g30;
		return PutMissile();
	}
	int32_t v13 = v12 + 152;       // 0x75178
	int32_t v14 = *(int32_t *)v13; // 0x7517c
	if (v14 > 11) {
		// 0x751dc
		g34 = g30;
		return PutMissile();
	}
	// 0x75188
	int32_t v15; // 0x751b0
	if (v14 == 0) {
		int32_t v16 = AddLight(*(int32_t *)g31, *(int32_t *)g32, v5); // 0x751a4
		*(int32_t *)(v12 + 140) = v16;
		v15 = g36;
		// branch -> 0x751ac
	} else {
		// 0x75188
		v15 = v11;
		// branch -> 0x751ac
	}
	int32_t v17 = *(int32_t *)(v15 + g35 + 140); // 0x751b8
	g39 = *(int32_t *)(4 * *(int32_t *)v13 + (int32_t)&v5);
	function_cba34(v17, *(int32_t *)g31, *(int32_t *)g32);
	int32_t *v18 = (int32_t *)v13; // 0x751d0
	*v18 = *v18 + 1;
	// branch -> 0x751dc
	// 0x751dc
	g34 = g30;
	return PutMissile();
}

// Address range: 0x751f8 - 0x75814
int32_t function_751f8(int32_t a1)
{
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x75204
	g31 = v1;
	int32_t v2 = 180 * a1; // 0x75208
	g29 = v2;
	int32_t v3 = v1 + v2;  // 0x75214
	int32_t v4 = v3 + 116; // 0x75220
	g28 = v4;
	int32_t *v5 = (int32_t *)v4; // 0x7522c
	g24 = *(int32_t *)(v3 + 128);
	*v5 = *v5 - 1;
	int32_t v6 = *(int32_t *)(v3 + 120); // 0x75250
	int32_t v7;
	if (*(int32_t *)(v3 + 124) == 0) {
		int32_t v8 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * v6; // 0x75254
		g22 = *(int32_t *)(v8 + 56);
		v7 = v8 + 60;
		// branch -> 0x75274
	} else {
		int32_t v9 = *(int32_t *)(g23 - 0x7754) + 232 * v6; // 0x75268
		g22 = *(int32_t *)(v9 + 32);
		v7 = v9 + 36;
		// branch -> 0x75274
	}
	// 0x75274
	g21 = *(int32_t *)v7;
	int32_t v10 = g29 + g31; // 0x75274
	int32_t result;
	if (*(char *)(v10 + 56) == 19) {
		// 0x75284
		if (*(int32_t *)g28 == 0) {
			// 0x75290
			*(int32_t *)(v10 + 52) = 1;
			AddUnLight(*(int32_t *)(v10 + 140));
			// branch -> 0x752a0
		}
		// 0x752a0
		g34 = g36;
		result = PutMissile();
		// branch -> 0x75800
	} else {
		int32_t v11 = v10 + 20; // 0x752ac
		g26 = v11;
		int32_t *v12 = (int32_t *)(v10 + 36); // 0x752b0
		g25 = v10 + 24;
		g34 = g36;
		*v12 = *(int32_t *)v11 + *v12;
		int32_t *v13 = (int32_t *)(v10 + 40); // 0x752c8
		*v13 = *(int32_t *)(v10 + 24) + *v13;
		GetMissilePos();
		int32_t v14 = v10 + 4; // 0x752dc
		g27 = v14;
		int32_t v15; // 0x75304
		int32_t v16; // 0x75308
		if (*(int32_t *)v14 == *(int32_t *)(v10 + 28)) {
			// 0x752f0
			if (*(int32_t *)(v10 + 8) != *(int32_t *)(v10 + 32)) {
				// 0x75300
				v15 = g24;
				v16 = *(int32_t *)(g29 + g31 + 8);
				g41 = v16;
				g42 = 0;
				function_6f3d4(g36, v15, v15, 0, v16);
				// branch -> 0x75320
			}
		} else {
			// 0x75300
			v15 = g24;
			v16 = *(int32_t *)(g29 + g31 + 8);
			g41 = v16;
			g42 = 0;
			function_6f3d4(g36, v15, v15, 0, v16);
			// branch -> 0x75320
		}
		int32_t v17 = g29 + g31; // 0x7532c
		int32_t v18;             // r3
		if (*(int32_t *)g28 == 0) {
			int32_t v19 = *(int32_t *)g27; // 0x75334
			g20 = v19;
			int32_t v20 = *(int32_t *)(v17 + 8); // 0x75338
			g19 = v20;
			g39 = *(int32_t *)(v17 + 96);
			function_cba34(*(int32_t *)(v17 + 140), v19, v20);
			if (function_6d988(g22, g21, g20, g19) == 0) {
				int32_t v21 = g24; // 0x75370
				g41 = g19;
				g42 = 1;
				function_6f3d4(g36, v21, v21, 0, g20);
				// branch -> 0x7538c
			}
			// 0x7538c
			if (function_6d988(g22, g21, g20, g19 + 1) == 0) {
				// 0x753a8
				g41 = g19 + 1;
				int32_t v22 = g24; // 0x753b0
				g42 = 1;
				function_6f3d4(g36, v22, v22, 0, g20);
				// branch -> 0x753c8
			}
			// 0x753c8
			if (function_6d988(g22, g21, g20, g19 - 1) == 0) {
				// 0x753e4
				g41 = g19 - 1;
				int32_t v23 = g24; // 0x753ec
				g42 = 1;
				function_6f3d4(g36, v23, v23, 0, g20);
				// branch -> 0x75404
			}
			// 0x75404
			if (function_6d988(g22, g21, g20 + 1, g19) == 0) {
				int32_t v24 = g24; // 0x75428
				g41 = g19;
				g42 = 1;
				function_6f3d4(g36, v24, v24, 0, g20 + 1);
				// branch -> 0x75440
			}
			// 0x75440
			if (function_6d988(g22, g21, g20 + 1, g19 - 1) == 0) {
				int32_t v25 = g24; // 0x75464
				g41 = g19 - 1;
				g42 = 1;
				function_6f3d4(g36, v25, v25, 0, g20 + 1);
				// branch -> 0x7547c
			}
			// 0x7547c
			if (function_6d988(g22, g21, g20 + 1, g19 + 1) == 0) {
				int32_t v26 = g24; // 0x754a0
				g41 = g19 + 1;
				g42 = 1;
				function_6f3d4(g36, v26, v26, 0, g20 + 1);
				// branch -> 0x754b8
			}
			// 0x754b8
			if (function_6d988(g22, g21, g20 - 1, g19) == 0) {
				int32_t v27 = g24; // 0x754dc
				g41 = g19;
				g42 = 1;
				function_6f3d4(g36, v27, v27, 0, g20 - 1);
				// branch -> 0x754f4
			}
			// 0x754f4
			if (function_6d988(g22, g21, g20 - 1, g19 + 1) == 0) {
				int32_t v28 = g24; // 0x75518
				g41 = g19 + 1;
				g42 = 1;
				function_6f3d4(g36, v28, v28, 0, g20 - 1);
				// branch -> 0x75530
			}
			// 0x75530
			if (function_6d988(g22, g21, g20 - 1, g19 - 1) == 0) {
				int32_t v29 = g24; // 0x75554
				g41 = g19 - 1;
				g42 = 1;
				function_6f3d4(g36, v29, v29, 0, g20 - 1);
				// branch -> 0x7556c
			}
			int32_t v30 = 112 * g20;                              // 0x7556c
			int32_t v31 = *(int32_t *)*(int32_t *)(g23 - 0x7588); // 0x75574
			v18 = v31;
			int32_t v32 = (int32_t) * (char *)(g19 + v30 + v31); // 0x75580
			int32_t v33 = g30;                                   // 0x75584
			int32_t v34;                                         // 0x75660
			int32_t v35;                                         // 0x756fc
			int32_t *v36;                                        // 0x7561c
			int32_t *v37;                                        // 0x7562c
			int32_t v38;                                         // 0x75654
			int32_t v39;                                         // 0x756f0
			int32_t *v40;                                        // 0x75638
			int32_t v41;                                         // 0x75654
			int32_t v42;                                         // 0x75674
			int32_t v43;                                         // 0x756b4
			int32_t *v44;                                        // 0x756d4
			int32_t v45;                                         // 0x756f0
			int32_t v46;                                         // 0x75710
			int32_t v47;                                         // 0x75758
			int32_t *v48;                                        // 0x75770
			int32_t v49;                                         // 0x7577c
			int32_t v50;                                         // 0x75680
			int32_t v51;                                         // 0x756c0
			int32_t v52;                                         // 0x7571c
			if (*(char *)(v33 + v32) == 0) {
				// 0x7561c
				v36 = (int32_t *)g27;
				*v36 = *v36 + 1;
				v37 = (int32_t *)g35;
				*v37 = *v37 + 1;
				v40 = (int32_t *)(g29 + g31 + 16);
				*v40 = *v40 - 32;
				// branch -> 0x75644
			} else {
				// 0x75590
				if (*(int32_t *)g26 <= 0xffffffff) {
					int32_t v53 = v31 + v30 + g19; // 0x755a0
					if (*(char *)((int32_t) * (char *)(v53 + 1) + v33) != 0) {
						int32_t v54 = *(int32_t *)g32 + 224 * g20; // 0x755c0
						if (*(char *)(g33 + (int32_t) * (int16_t *)(v54 + 2 * g19 + 2)) != 0) {
							// 0x7561c
							v36 = (int32_t *)g27;
							*v36 = *v36 + 1;
							v37 = (int32_t *)g35;
							*v37 = *v37 + 1;
							v40 = (int32_t *)(g29 + g31 + 16);
							*v40 = *v40 - 32;
							// branch -> 0x75644
							// 0x75644
							if (*(int32_t *)g25 >= 1) {
								// 0x75650
								v38 = g19;
								v41 = v30 + v18 + v38;
								v34 = g30;
								if (*(char *)(v34 + (int32_t) * (char *)(v41 + 112)) != 0) {
									// 0x7566c
									v42 = *(int32_t *)g32 + 224 * g20;
									v50 = (int32_t) * (int16_t *)(v42 + 2 * v38 + 224);
									if (*(char *)(g33 + v50) != 0) {
										// 0x756d0
										v44 = (int32_t *)(g29 + g31 + 16);
										*v44 = *v44 - 32;
										// branch -> 0x756e0
										// 0x756e0
										if (*(int32_t *)g26 >= 1) {
											// 0x756ec
											v39 = g19;
											v45 = v39 + v30 + v18;
											v35 = g30;
											if (*(char *)(v35 + (int32_t) * (char *)(v45 + 1)) != 0) {
												// 0x75708
												v46 = *(int32_t *)g32 + 224 * g20;
												v52 = (int32_t) * (int16_t *)(v46 + 2 * v39 + 2);
												if (*(char *)(g33 + v52) != 0) {
													// 0x7576c
													v48 = (int32_t *)(g29 + g31 + 12);
													*v48 = *v48 - 32;
													// branch -> 0x7577c
													// 0x7577c
													v49 = g29 + g31;
													*(int32_t *)(v49 + 44) = 0;
													g37 = 19;
													SetMissAnim(g36);
													*(int32_t *)g28 = *(int32_t *)(v49 + 76) - 1;
													// branch -> 0x757f8
													// 0x757f8
													g34 = g36;
													result = PutMissile();
													// branch -> 0x75800
													// 0x75800
													return result;
												}
											}
											// 0x7572c
											if (*(char *)((int32_t) * (char *)(v45 - 1) + v35) != 0) {
												// 0x75748
												v47 = 224 * g20 + 2 * v39 + *(int32_t *)g32;
												if (*(char *)(g33 + (int32_t) * (int16_t *)(v47 - 2)) != 0) {
													// 0x7576c
													v48 = (int32_t *)(g29 + g31 + 12);
													*v48 = *v48 - 32;
													// branch -> 0x7577c
												}
											}
										}
										// 0x7577c
										v49 = g29 + g31;
										*(int32_t *)(v49 + 44) = 0;
										g37 = 19;
										SetMissAnim(g36);
										*(int32_t *)g28 = *(int32_t *)(v49 + 76) - 1;
										// branch -> 0x757f8
										// 0x757f8
										g34 = g36;
										result = PutMissile();
										// branch -> 0x75800
										// 0x75800
										return result;
									}
								}
								// 0x75690
								if (*(char *)((int32_t) * (char *)(v41 - 112) + v34) != 0) {
									// 0x756ac
									v43 = *(int32_t *)g32 + 224 * g20;
									v51 = (int32_t) * (int16_t *)(v43 + 2 * v38 - 224);
									if (*(char *)(g33 + v51) != 0) {
										// 0x756d0
										v44 = (int32_t *)(g29 + g31 + 16);
										*v44 = *v44 - 32;
										// branch -> 0x756e0
									}
								}
							}
							// 0x756e0
							if (*(int32_t *)g26 >= 1) {
								// 0x756ec
								v39 = g19;
								v45 = v39 + v30 + v18;
								v35 = g30;
								if (*(char *)(v35 + (int32_t) * (char *)(v45 + 1)) != 0) {
									// 0x75708
									v46 = *(int32_t *)g32 + 224 * g20;
									v52 = (int32_t) * (int16_t *)(v46 + 2 * v39 + 2);
									if (*(char *)(g33 + v52) != 0) {
										// 0x7576c
										v48 = (int32_t *)(g29 + g31 + 12);
										*v48 = *v48 - 32;
										// branch -> 0x7577c
										// 0x7577c
										v49 = g29 + g31;
										*(int32_t *)(v49 + 44) = 0;
										g37 = 19;
										SetMissAnim(g36);
										*(int32_t *)g28 = *(int32_t *)(v49 + 76) - 1;
										// branch -> 0x757f8
										// 0x757f8
										g34 = g36;
										result = PutMissile();
										// branch -> 0x75800
										// 0x75800
										return result;
									}
								}
								// 0x7572c
								if (*(char *)((int32_t) * (char *)(v45 - 1) + v35) != 0) {
									// 0x75748
									v47 = 224 * g20 + 2 * v39 + *(int32_t *)g32;
									if (*(char *)(g33 + (int32_t) * (int16_t *)(v47 - 2)) != 0) {
										// 0x7576c
										v48 = (int32_t *)(g29 + g31 + 12);
										*v48 = *v48 - 32;
										// branch -> 0x7577c
									}
								}
							}
							// 0x7577c
							v49 = g29 + g31;
							*(int32_t *)(v49 + 44) = 0;
							g37 = 19;
							SetMissAnim(g36);
							*(int32_t *)g28 = *(int32_t *)(v49 + 76) - 1;
							// branch -> 0x757f8
							// 0x757f8
							g34 = g36;
							result = PutMissile();
							// branch -> 0x75800
							// 0x75800
							return result;
						}
					}
					// 0x755dc
					if (*(char *)((int32_t) * (char *)(v53 - 1) + v33) != 0) {
						int32_t v55 = *(int32_t *)g32 + 224 * g20; // 0x75600
						if (*(char *)(g33 + (int32_t) * (int16_t *)(v55 + 2 * g19 - 2)) != 0) {
							// 0x7561c
							v36 = (int32_t *)g27;
							*v36 = *v36 + 1;
							v37 = (int32_t *)g35;
							*v37 = *v37 + 1;
							v40 = (int32_t *)(g29 + g31 + 16);
							*v40 = *v40 - 32;
							// branch -> 0x75644
						}
					}
				}
			}
			// 0x75644
			if (*(int32_t *)g25 >= 1) {
				// 0x75650
				v38 = g19;
				v41 = v30 + v18 + v38;
				v34 = g30;
				if (*(char *)(v34 + (int32_t) * (char *)(v41 + 112)) != 0) {
					// 0x7566c
					v42 = *(int32_t *)g32 + 224 * g20;
					v50 = (int32_t) * (int16_t *)(v42 + 2 * v38 + 224);
					if (*(char *)(g33 + v50) != 0) {
						// 0x756d0
						v44 = (int32_t *)(g29 + g31 + 16);
						*v44 = *v44 - 32;
						// branch -> 0x756e0
						// 0x756e0
						if (*(int32_t *)g26 >= 1) {
							// 0x756ec
							v39 = g19;
							v45 = v39 + v30 + v18;
							v35 = g30;
							if (*(char *)(v35 + (int32_t) * (char *)(v45 + 1)) != 0) {
								// 0x75708
								v46 = *(int32_t *)g32 + 224 * g20;
								v52 = (int32_t) * (int16_t *)(v46 + 2 * v39 + 2);
								if (*(char *)(g33 + v52) != 0) {
									// 0x7576c
									v48 = (int32_t *)(g29 + g31 + 12);
									*v48 = *v48 - 32;
									// branch -> 0x7577c
									// 0x7577c
									v49 = g29 + g31;
									*(int32_t *)(v49 + 44) = 0;
									g37 = 19;
									SetMissAnim(g36);
									*(int32_t *)g28 = *(int32_t *)(v49 + 76) - 1;
									// branch -> 0x757f8
									// 0x757f8
									g34 = g36;
									result = PutMissile();
									// branch -> 0x75800
									// 0x75800
									return result;
								}
							}
							// 0x7572c
							if (*(char *)((int32_t) * (char *)(v45 - 1) + v35) != 0) {
								// 0x75748
								v47 = 224 * g20 + 2 * v39 + *(int32_t *)g32;
								if (*(char *)(g33 + (int32_t) * (int16_t *)(v47 - 2)) != 0) {
									// 0x7576c
									v48 = (int32_t *)(g29 + g31 + 12);
									*v48 = *v48 - 32;
									// branch -> 0x7577c
								}
							}
						}
						// 0x7577c
						v49 = g29 + g31;
						*(int32_t *)(v49 + 44) = 0;
						g37 = 19;
						SetMissAnim(g36);
						*(int32_t *)g28 = *(int32_t *)(v49 + 76) - 1;
						// branch -> 0x757f8
						// 0x757f8
						g34 = g36;
						result = PutMissile();
						// branch -> 0x75800
						// 0x75800
						return result;
					}
				}
				// 0x75690
				if (*(char *)((int32_t) * (char *)(v41 - 112) + v34) != 0) {
					// 0x756ac
					v43 = *(int32_t *)g32 + 224 * g20;
					v51 = (int32_t) * (int16_t *)(v43 + 2 * v38 - 224);
					if (*(char *)(g33 + v51) != 0) {
						// 0x756d0
						v44 = (int32_t *)(g29 + g31 + 16);
						*v44 = *v44 - 32;
						// branch -> 0x756e0
					}
				}
			}
			// 0x756e0
			if (*(int32_t *)g26 >= 1) {
				// 0x756ec
				v39 = g19;
				v45 = v39 + v30 + v18;
				v35 = g30;
				if (*(char *)(v35 + (int32_t) * (char *)(v45 + 1)) != 0) {
					// 0x75708
					v46 = *(int32_t *)g32 + 224 * g20;
					v52 = (int32_t) * (int16_t *)(v46 + 2 * v39 + 2);
					if (*(char *)(g33 + v52) != 0) {
						// 0x7576c
						v48 = (int32_t *)(g29 + g31 + 12);
						*v48 = *v48 - 32;
						// branch -> 0x7577c
						// 0x7577c
						v49 = g29 + g31;
						*(int32_t *)(v49 + 44) = 0;
						g37 = 19;
						SetMissAnim(g36);
						*(int32_t *)g28 = *(int32_t *)(v49 + 76) - 1;
						// branch -> 0x757f8
						// 0x757f8
						g34 = g36;
						result = PutMissile();
						// branch -> 0x75800
						// 0x75800
						return result;
					}
				}
				// 0x7572c
				if (*(char *)((int32_t) * (char *)(v45 - 1) + v35) != 0) {
					// 0x75748
					v47 = 224 * g20 + 2 * v39 + *(int32_t *)g32;
					if (*(char *)(g33 + (int32_t) * (int16_t *)(v47 - 2)) != 0) {
						// 0x7576c
						v48 = (int32_t *)(g29 + g31 + 12);
						*v48 = *v48 - 32;
						// branch -> 0x7577c
					}
				}
			}
			// 0x7577c
			v49 = g29 + g31;
			*(int32_t *)(v49 + 44) = 0;
			g37 = 19;
			SetMissAnim(g36);
			*(int32_t *)g28 = *(int32_t *)(v49 + 76) - 1;
			// branch -> 0x757f8
		} else {
			int32_t *v56 = (int32_t *)g27; // 0x757a8
			int32_t v57 = v17 + 148;       // 0x757ac
			int32_t *v58 = (int32_t *)v57; // 0x757ac
			if (*v56 == *v58) {
				// 0x757b8
				if (*(int32_t *)(v17 + 8) == *(int32_t *)(v17 + 152)) {
					// 0x757f8
					g34 = g36;
					result = PutMissile();
					// branch -> 0x75800
					// 0x75800
					return result;
				}
			} else {
				// 0x757a4
				// branch -> 0x757cc
			}
			// 0x757cc
			v18 = v17;
			*v58 = *v56;
			g39 = 8;
			*(int32_t *)(v18 + 152) = *(int32_t *)(v18 + 8);
			int32_t v59 = *(int32_t *)(v18 + 140); // 0x757e8
			function_cba34(v59, *(int32_t *)v57, *(int32_t *)(v17 + 152));
			// branch -> 0x757f8
		}
		// 0x757f8
		g34 = g36;
		result = PutMissile();
		// branch -> 0x75800
	}
	// 0x75800
	return result;
}

// Address range: 0x75814 - 0x75b1c
int32_t function_75814(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x75820
	g35 = v1;
	int32_t v2 = 180 * a1; // 0x75824
	g31 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7234); // r28
	int32_t v4 = *(int32_t *)(g23 - 0x77e4); // r20
	int32_t v5 = v1 + v2;                    // 0x75830
	int32_t v6 = *(int32_t *)(g23 - 0x7754); // r29
	int32_t v7 = v5 + 116;                   // 0x75844
	int32_t *v8 = (int32_t *)v7;             // 0x75844
	*v8 = *v8 - 1;
	g27 = v7;
	int32_t v9 = v5 + 120;        // 0x75850
	int32_t v10 = *(int32_t *)v9; // 0x75850
	int32_t v11;                  // r21
	int32_t v12;                  // r22
	int32_t result;               // r3
	int32_t v13;                  // 0x75910
	int32_t v14;                  // 0x75924
	uint32_t v15;                 // 0x759b0
	uint32_t v16;                 // 0x759d0
	uint32_t v17;                 // 0x75adc
	int32_t v18;                  // 0x75ae4
	int32_t v19;                  // 0x75924
	int32_t v20;                  // 0x75928
	int32_t v21;                  // 0x758f8
	int32_t *v22;                 // 0x758fc
	int32_t *v23;                 // 0x75910
	int32_t v24;                  // 0x759a8
	int32_t v25;                  // 0x759e8
	unsigned char v26;            // 0x75a10
	int32_t v27;                  // 0x75a40
	int32_t v28;                  // 0x75a44
	int32_t v29;                  // 0x75a74
	int32_t v30;                  // 0x75a78
	int32_t v31;                  // 0x75aa8
	int32_t v32;                  // 0x75ab0
	int32_t result2;              // 0x75afc
	int32_t v33;                  // 0x7592c
	int32_t v34;                  // 0x75930
	int32_t v35;                  // 0x75934
	int32_t v36;                  // 0x759f8
	int32_t v37;                  // 0x75a30
	int32_t v38;                  // 0x75a3c
	int32_t v39;                  // 0x75a48
	int32_t v40;                  // 0x75a64
	int32_t v41;                  // 0x75a70
	int32_t v42;                  // 0x75a7c
	int32_t v43;                  // 0x75a94
	int32_t v44;                  // 0x75aa0
	int32_t v45;                  // 0x75aa4
	int32_t v46;                  // 0x75ab4
	int16_t v47;                  // 0x75950
	int32_t v48;                  // 0x75950
	if (v10 != -1) {
		// 0x75860
		if (*(int32_t *)(g31 + g35 + 124) == 0) {
			// 0x75870
			g37 = 2;
			int32_t v49 = random(79); // 0x75878
			g37 = (int32_t) * (char *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v10 + 436);
			v4 = 64 * (random(79) + 2 + v49);
			// branch -> 0x758f8
		} else {
			int32_t v50 = v6 + 232 * v10;     // 0x758b0
			int32_t v51 = v50 + 201;          // 0x758c0
			unsigned char v52 = *(char *)v51; // 0x758c0
			g37 = (int32_t) * (char *)(v50 + 202) + 1 - (int32_t)v52;
			v4 = 2 * ((int32_t) * (char *)v51 + random(80));
			// branch -> 0x758f8
		}
		// 0x758f8
		v21 = g31 + g35;
		g36 = v21;
		v22 = (int32_t *)(v21 + 36);
		g34 = a1;
		*v22 = *(int32_t *)(v21 + 20) + *v22;
		v13 = g36;
		v23 = (int32_t *)(v13 + 40);
		*v23 = *(int32_t *)(v13 + 24) + *v23;
		GetMissilePos();
		v14 = g36;
		v19 = v14 + 4;
		v11 = v19;
		v20 = v14 + 8;
		v12 = v20;
		v33 = *(int32_t *)v19;
		g29 = v33;
		v34 = *(int32_t *)v20;
		g30 = v34;
		v35 = *(int32_t *)(g23 - 0x757c);
		v47 = *(int16_t *)(*(int32_t *)v35 + 2 * v34 + 224 * v33);
		v48 = v47;
		result = v48;
		if (*(int32_t *)v9 != -1) {
			// 0x75988
			if (*(char *)(v3 + v48) != 0) {
				// 0x75994
				*(int32_t *)g27 = 0;
				// branch -> 0x7599c
			}
			// 0x7599c
			if (*(char *)(result + v3) != 0) {
				// 0x75ad0
				if (*(int32_t *)g27 != 0) {
					// 0x75adc
					v17 = g29;
					if (v17 >= 1) {
						// 0x75ae4
						v18 = g30;
						if (v18 >= 1) {
							// 0x75aec
							if (v17 <= 111) {
								// 0x75af4
								if (v18 < 113) {
									// 0x75b08
									return result;
								}
							}
						}
					}
				}
				// 0x75afc
				result2 = g31 + g35;
				*(int32_t *)(result2 + 52) = 1;
				// branch -> 0x75b08
				// 0x75b08
				return result2;
			}
			// 0x759a8
			v24 = g31 + g35;
			v15 = g29;
			if (v15 == *(int32_t *)(v24 + 148)) {
				// 0x759b8
				result = v24;
				if (g30 != *(int32_t *)(v24 + 152)) {
					// 0x759c8
					if (v15 >= 1) {
						// 0x759d0
						v16 = g30;
						if (v16 >= 1) {
							// 0x759d8
							if (v15 <= 111) {
								// 0x759e0
								if (v16 <= 111) {
									// 0x759e8
									v25 = *(int32_t *)v9;
									g13 = v25;
									if (v25 == -1) {
										// 0x75a88
										v43 = *(int32_t *)(v24 + 48);
										v44 = *(int32_t *)(v24 + 124);
										v45 = *(int32_t *)(v24 + 28);
										v31 = *(int32_t *)v11;
										v32 = *(int32_t *)v12;
										v46 = *(int32_t *)(v24 + 32);
										AddMissile(v31, v32, v45, v46, a1, 8, 0x1000000 * v44 / 0x1000000, v4, v43);
										// branch -> 0x75abc
									} else {
										// 0x759f4
										v36 = *(int32_t *)(v24 + 124);
										if (v36 == 1) {
											// 0x75a04
											v26 = *(char *)*(int32_t *)(v6 + 232 * v25 + 224);
											if (v26 >= 76) {
												// 0x75a1c
												if (v26 <= 79) {
													// 0x75a24
													v37 = *(int32_t *)(v24 + 48);
													v38 = *(int32_t *)(v24 + 28);
													v27 = *(int32_t *)v11;
													v28 = *(int32_t *)v12;
													v39 = *(int32_t *)(v24 + 32);
													AddMissile(v27, v28, v38, v39, a1, 23, 1, v4, v37);
													// branch -> 0x75abc
													// 0x75abc
													result = g31 + g35;
													*(int32_t *)g32 = *(int32_t *)g25;
													*(int32_t *)(result + 152) = *(int32_t *)g26;
													// branch -> 0x75ad0
													// 0x75ad0
													if (*(int32_t *)g27 != 0) {
														// 0x75adc
														v17 = g29;
														if (v17 >= 1) {
															// 0x75ae4
															v18 = g30;
															if (v18 >= 1) {
																// 0x75aec
																if (v17 <= 111) {
																	// 0x75af4
																	if (v18 < 113) {
																		// 0x75b08
																		return result;
																	}
																}
															}
														}
													}
													// 0x75afc
													result2 = g31 + g35;
													*(int32_t *)(result2 + 52) = 1;
													// branch -> 0x75b08
													// 0x75b08
													return result2;
												}
											}
										}
										// 0x75a54
										v40 = *(int32_t *)(v24 + 48);
										v41 = *(int32_t *)(v24 + 28);
										v29 = *(int32_t *)v11;
										v30 = *(int32_t *)v12;
										v42 = *(int32_t *)(v24 + 32);
										AddMissile(v29, v30, v41, v42, a1, 8, 0x1000000 * v36 / 0x1000000, v4, v40);
										// branch -> 0x75abc
									}
									// 0x75abc
									result = g31 + g35;
									*(int32_t *)g32 = *(int32_t *)g25;
									*(int32_t *)(result + 152) = *(int32_t *)g26;
									// branch -> 0x75ad0
								}
							}
						}
					}
				}
			} else {
				// 0x759c8
				if (v15 >= 1) {
					// 0x759d0
					v16 = g30;
					if (v16 >= 1) {
						// 0x759d8
						if (v15 <= 111) {
							// 0x759e0
							if (v16 <= 111) {
								// 0x759e8
								v25 = *(int32_t *)v9;
								g13 = v25;
								if (v25 == -1) {
									// 0x75a88
									v43 = *(int32_t *)(v24 + 48);
									v44 = *(int32_t *)(v24 + 124);
									v45 = *(int32_t *)(v24 + 28);
									v31 = *(int32_t *)v11;
									v32 = *(int32_t *)v12;
									v46 = *(int32_t *)(v24 + 32);
									AddMissile(v31, v32, v45, v46, a1, 8, 0x1000000 * v44 / 0x1000000, v4, v43);
									// branch -> 0x75abc
								} else {
									// 0x759f4
									v36 = *(int32_t *)(v24 + 124);
									if (v36 == 1) {
										// 0x75a04
										v26 = *(char *)*(int32_t *)(v6 + 232 * v25 + 224);
										if (v26 >= 76) {
											// 0x75a1c
											if (v26 <= 79) {
												// 0x75a24
												v37 = *(int32_t *)(v24 + 48);
												v38 = *(int32_t *)(v24 + 28);
												v27 = *(int32_t *)v11;
												v28 = *(int32_t *)v12;
												v39 = *(int32_t *)(v24 + 32);
												AddMissile(v27, v28, v38, v39, a1, 23, 1, v4, v37);
												// branch -> 0x75abc
												// 0x75abc
												result = g31 + g35;
												*(int32_t *)g32 = *(int32_t *)g25;
												*(int32_t *)(result + 152) = *(int32_t *)g26;
												// branch -> 0x75ad0
												// 0x75ad0
												if (*(int32_t *)g27 != 0) {
													// 0x75adc
													v17 = g29;
													if (v17 >= 1) {
														// 0x75ae4
														v18 = g30;
														if (v18 >= 1) {
															// 0x75aec
															if (v17 <= 111) {
																// 0x75af4
																if (v18 < 113) {
																	// 0x75b08
																	return result;
																}
															}
														}
													}
												}
												// 0x75afc
												result2 = g31 + g35;
												*(int32_t *)(result2 + 52) = 1;
												// branch -> 0x75b08
												// 0x75b08
												return result2;
											}
										}
									}
									// 0x75a54
									v40 = *(int32_t *)(v24 + 48);
									v41 = *(int32_t *)(v24 + 28);
									v29 = *(int32_t *)v11;
									v30 = *(int32_t *)v12;
									v42 = *(int32_t *)(v24 + 32);
									AddMissile(v29, v30, v41, v42, a1, 8, 0x1000000 * v36 / 0x1000000, v4, v40);
									// branch -> 0x75abc
								}
								// 0x75abc
								result = g31 + g35;
								*(int32_t *)g32 = *(int32_t *)g25;
								*(int32_t *)(result + 152) = *(int32_t *)g26;
								// branch -> 0x75ad0
							}
						}
					}
				}
			}
			// 0x75ad0
			if (*(int32_t *)g27 != 0) {
				// 0x75adc
				v17 = g29;
				if (v17 >= 1) {
					// 0x75ae4
					v18 = g30;
					if (v18 >= 1) {
						// 0x75aec
						if (v17 <= 111) {
							// 0x75af4
							if (v18 < 113) {
								// 0x75b08
								return result;
							}
						}
					}
				}
			}
			// 0x75afc
			result2 = g31 + g35;
			*(int32_t *)(result2 + 52) = 1;
			// branch -> 0x75b08
			// 0x75b08
			return result2;
		}
		// 0x75958
		if (v33 == *(int32_t *)(v14 + 28)) {
			// 0x75964
			if (v34 != *(int32_t *)(v14 + 32)) {
				// 0x75970
				if (*(char *)(v3 + v48) != 0) {
					// 0x7597c
					*(int32_t *)g27 = 0;
					// branch -> 0x7599c
				}
			}
		} else {
			// 0x75970
			if (*(char *)(v3 + v48) != 0) {
				// 0x7597c
				*(int32_t *)g27 = 0;
				// branch -> 0x7599c
			}
		}
		// 0x7599c
		if (*(char *)(result + v3) != 0) {
			// 0x75ad0
			if (*(int32_t *)g27 != 0) {
				// 0x75adc
				v17 = g29;
				if (v17 >= 1) {
					// 0x75ae4
					v18 = g30;
					if (v18 >= 1) {
						// 0x75aec
						if (v17 <= 111) {
							// 0x75af4
							if (v18 < 113) {
								// 0x75b08
								return result;
							}
						}
					}
				}
			}
			// 0x75afc
			result2 = g31 + g35;
			*(int32_t *)(result2 + 52) = 1;
			// branch -> 0x75b08
			// 0x75b08
			return result2;
		}
		// 0x759a8
		v24 = g31 + g35;
		v15 = g29;
		if (v15 == *(int32_t *)(v24 + 148)) {
			// 0x759b8
			result = v24;
			if (g30 != *(int32_t *)(v24 + 152)) {
				// 0x759c8
				if (v15 >= 1) {
					// 0x759d0
					v16 = g30;
					if (v16 >= 1) {
						// 0x759d8
						if (v15 <= 111) {
							// 0x759e0
							if (v16 <= 111) {
								// 0x759e8
								v25 = *(int32_t *)v9;
								g13 = v25;
								if (v25 == -1) {
									// 0x75a88
									v43 = *(int32_t *)(v24 + 48);
									v44 = *(int32_t *)(v24 + 124);
									v45 = *(int32_t *)(v24 + 28);
									v31 = *(int32_t *)v11;
									v32 = *(int32_t *)v12;
									v46 = *(int32_t *)(v24 + 32);
									AddMissile(v31, v32, v45, v46, a1, 8, 0x1000000 * v44 / 0x1000000, v4, v43);
									// branch -> 0x75abc
								} else {
									// 0x759f4
									v36 = *(int32_t *)(v24 + 124);
									if (v36 == 1) {
										// 0x75a04
										v26 = *(char *)*(int32_t *)(v6 + 232 * v25 + 224);
										if (v26 >= 76) {
											// 0x75a1c
											if (v26 <= 79) {
												// 0x75a24
												v37 = *(int32_t *)(v24 + 48);
												v38 = *(int32_t *)(v24 + 28);
												v27 = *(int32_t *)v11;
												v28 = *(int32_t *)v12;
												v39 = *(int32_t *)(v24 + 32);
												AddMissile(v27, v28, v38, v39, a1, 23, 1, v4, v37);
												// branch -> 0x75abc
												// 0x75abc
												result = g31 + g35;
												*(int32_t *)g32 = *(int32_t *)g25;
												*(int32_t *)(result + 152) = *(int32_t *)g26;
												// branch -> 0x75ad0
												// 0x75ad0
												if (*(int32_t *)g27 != 0) {
													// 0x75adc
													v17 = g29;
													if (v17 >= 1) {
														// 0x75ae4
														v18 = g30;
														if (v18 >= 1) {
															// 0x75aec
															if (v17 <= 111) {
																// 0x75af4
																if (v18 < 113) {
																	// 0x75b08
																	return result;
																}
															}
														}
													}
												}
												// 0x75afc
												result2 = g31 + g35;
												*(int32_t *)(result2 + 52) = 1;
												// branch -> 0x75b08
												// 0x75b08
												return result2;
											}
										}
									}
									// 0x75a54
									v40 = *(int32_t *)(v24 + 48);
									v41 = *(int32_t *)(v24 + 28);
									v29 = *(int32_t *)v11;
									v30 = *(int32_t *)v12;
									v42 = *(int32_t *)(v24 + 32);
									AddMissile(v29, v30, v41, v42, a1, 8, 0x1000000 * v36 / 0x1000000, v4, v40);
									// branch -> 0x75abc
								}
								// 0x75abc
								result = g31 + g35;
								*(int32_t *)g32 = *(int32_t *)g25;
								*(int32_t *)(result + 152) = *(int32_t *)g26;
								// branch -> 0x75ad0
							}
						}
					}
				}
			}
		} else {
			// 0x759c8
			if (v15 >= 1) {
				// 0x759d0
				v16 = g30;
				if (v16 >= 1) {
					// 0x759d8
					if (v15 <= 111) {
						// 0x759e0
						if (v16 <= 111) {
							// 0x759e8
							v25 = *(int32_t *)v9;
							g13 = v25;
							if (v25 == -1) {
								// 0x75a88
								v43 = *(int32_t *)(v24 + 48);
								v44 = *(int32_t *)(v24 + 124);
								v45 = *(int32_t *)(v24 + 28);
								v31 = *(int32_t *)v11;
								v32 = *(int32_t *)v12;
								v46 = *(int32_t *)(v24 + 32);
								AddMissile(v31, v32, v45, v46, a1, 8, 0x1000000 * v44 / 0x1000000, v4, v43);
								// branch -> 0x75abc
							} else {
								// 0x759f4
								v36 = *(int32_t *)(v24 + 124);
								if (v36 == 1) {
									// 0x75a04
									v26 = *(char *)*(int32_t *)(v6 + 232 * v25 + 224);
									if (v26 >= 76) {
										// 0x75a1c
										if (v26 <= 79) {
											// 0x75a24
											v37 = *(int32_t *)(v24 + 48);
											v38 = *(int32_t *)(v24 + 28);
											v27 = *(int32_t *)v11;
											v28 = *(int32_t *)v12;
											v39 = *(int32_t *)(v24 + 32);
											AddMissile(v27, v28, v38, v39, a1, 23, 1, v4, v37);
											// branch -> 0x75abc
											// 0x75abc
											result = g31 + g35;
											*(int32_t *)g32 = *(int32_t *)g25;
											*(int32_t *)(result + 152) = *(int32_t *)g26;
											// branch -> 0x75ad0
											// 0x75ad0
											if (*(int32_t *)g27 != 0) {
												// 0x75adc
												v17 = g29;
												if (v17 >= 1) {
													// 0x75ae4
													v18 = g30;
													if (v18 >= 1) {
														// 0x75aec
														if (v17 <= 111) {
															// 0x75af4
															if (v18 < 113) {
																// 0x75b08
																return result;
															}
														}
													}
												}
											}
											// 0x75afc
											result2 = g31 + g35;
											*(int32_t *)(result2 + 52) = 1;
											// branch -> 0x75b08
											// 0x75b08
											return result2;
										}
									}
								}
								// 0x75a54
								v40 = *(int32_t *)(v24 + 48);
								v41 = *(int32_t *)(v24 + 28);
								v29 = *(int32_t *)v11;
								v30 = *(int32_t *)v12;
								v42 = *(int32_t *)(v24 + 32);
								AddMissile(v29, v30, v41, v42, a1, 8, 0x1000000 * v36 / 0x1000000, v4, v40);
								// branch -> 0x75abc
							}
							// 0x75abc
							result = g31 + g35;
							*(int32_t *)g32 = *(int32_t *)g25;
							*(int32_t *)(result + 152) = *(int32_t *)g26;
							// branch -> 0x75ad0
						}
					}
				}
			}
		}
		// 0x75ad0
		if (*(int32_t *)g27 != 0) {
			// 0x75adc
			v17 = g29;
			if (v17 >= 1) {
				// 0x75ae4
				v18 = g30;
				if (v18 >= 1) {
					// 0x75aec
					if (v17 <= 111) {
						// 0x75af4
						if (v18 < 113) {
							// 0x75b08
							return result;
						}
					}
				}
			}
		}
		// 0x75afc
		result2 = g31 + g35;
		*(int32_t *)(result2 + 52) = 1;
		// branch -> 0x75b08
		// 0x75b08
		return result2;
	}
	// 0x758e0
	g37 = (int32_t) * (char *)v4;
	int32_t v53 = random(81); // 0x758e8
	v4 = 2 * (int32_t) * (char *)v4 + v53;
	// branch -> 0x758f8
	// 0x758f8
	v21 = g31 + g35;
	g36 = v21;
	v22 = (int32_t *)(v21 + 36);
	g34 = a1;
	*v22 = *(int32_t *)(v21 + 20) + *v22;
	v13 = g36;
	v23 = (int32_t *)(v13 + 40);
	*v23 = *(int32_t *)(v13 + 24) + *v23;
	GetMissilePos();
	v14 = g36;
	v19 = v14 + 4;
	v11 = v19;
	v20 = v14 + 8;
	v12 = v20;
	v33 = *(int32_t *)v19;
	g29 = v33;
	v34 = *(int32_t *)v20;
	g30 = v34;
	v35 = *(int32_t *)(g23 - 0x757c);
	v47 = *(int16_t *)(*(int32_t *)v35 + 2 * v34 + 224 * v33);
	v48 = v47;
	result = v48;
	if (*(int32_t *)v9 == -1) {
		// 0x75958
		if (v33 == *(int32_t *)(v14 + 28)) {
			// 0x75964
			if (v34 != *(int32_t *)(v14 + 32)) {
				// 0x75970
				if (*(char *)(v3 + v48) != 0) {
					// 0x7597c
					*(int32_t *)g27 = 0;
					// branch -> 0x7599c
				}
			}
		} else {
			// 0x75970
			if (*(char *)(v3 + v48) != 0) {
				// 0x7597c
				*(int32_t *)g27 = 0;
				// branch -> 0x7599c
			}
		}
		// 0x7599c
		if (*(char *)(result + v3) != 0) {
			// 0x75ad0
			if (*(int32_t *)g27 != 0) {
				// 0x75adc
				v17 = g29;
				if (v17 >= 1) {
					// 0x75ae4
					v18 = g30;
					if (v18 >= 1) {
						// 0x75aec
						if (v17 <= 111) {
							// 0x75af4
							if (v18 < 113) {
								// 0x75b08
								return result;
							}
						}
					}
				}
			}
			// 0x75afc
			result2 = g31 + g35;
			*(int32_t *)(result2 + 52) = 1;
			// branch -> 0x75b08
			// 0x75b08
			return result2;
		}
		// 0x759a8
		v24 = g31 + g35;
		v15 = g29;
		if (v15 == *(int32_t *)(v24 + 148)) {
			// 0x759b8
			result = v24;
			if (g30 != *(int32_t *)(v24 + 152)) {
				// 0x759c8
				if (v15 >= 1) {
					// 0x759d0
					v16 = g30;
					if (v16 >= 1) {
						// 0x759d8
						if (v15 <= 111) {
							// 0x759e0
							if (v16 <= 111) {
								// 0x759e8
								v25 = *(int32_t *)v9;
								g13 = v25;
								if (v25 == -1) {
									// 0x75a88
									v43 = *(int32_t *)(v24 + 48);
									v44 = *(int32_t *)(v24 + 124);
									v45 = *(int32_t *)(v24 + 28);
									v31 = *(int32_t *)v11;
									v32 = *(int32_t *)v12;
									v46 = *(int32_t *)(v24 + 32);
									AddMissile(v31, v32, v45, v46, a1, 8, 0x1000000 * v44 / 0x1000000, v4, v43);
									// branch -> 0x75abc
								} else {
									// 0x759f4
									v36 = *(int32_t *)(v24 + 124);
									if (v36 == 1) {
										// 0x75a04
										v26 = *(char *)*(int32_t *)(v6 + 232 * v25 + 224);
										if (v26 >= 76) {
											// 0x75a1c
											if (v26 <= 79) {
												// 0x75a24
												v37 = *(int32_t *)(v24 + 48);
												v38 = *(int32_t *)(v24 + 28);
												v27 = *(int32_t *)v11;
												v28 = *(int32_t *)v12;
												v39 = *(int32_t *)(v24 + 32);
												AddMissile(v27, v28, v38, v39, a1, 23, 1, v4, v37);
												// branch -> 0x75abc
												// 0x75abc
												result = g31 + g35;
												*(int32_t *)g32 = *(int32_t *)g25;
												*(int32_t *)(result + 152) = *(int32_t *)g26;
												// branch -> 0x75ad0
												// 0x75ad0
												if (*(int32_t *)g27 != 0) {
													// 0x75adc
													v17 = g29;
													if (v17 >= 1) {
														// 0x75ae4
														v18 = g30;
														if (v18 >= 1) {
															// 0x75aec
															if (v17 <= 111) {
																// 0x75af4
																if (v18 < 113) {
																	// 0x75b08
																	return result;
																}
															}
														}
													}
												}
												// 0x75afc
												result2 = g31 + g35;
												*(int32_t *)(result2 + 52) = 1;
												// branch -> 0x75b08
												// 0x75b08
												return result2;
											}
										}
									}
									// 0x75a54
									v40 = *(int32_t *)(v24 + 48);
									v41 = *(int32_t *)(v24 + 28);
									v29 = *(int32_t *)v11;
									v30 = *(int32_t *)v12;
									v42 = *(int32_t *)(v24 + 32);
									AddMissile(v29, v30, v41, v42, a1, 8, 0x1000000 * v36 / 0x1000000, v4, v40);
									// branch -> 0x75abc
								}
								// 0x75abc
								result = g31 + g35;
								*(int32_t *)g32 = *(int32_t *)g25;
								*(int32_t *)(result + 152) = *(int32_t *)g26;
								// branch -> 0x75ad0
							}
						}
					}
				}
			}
		} else {
			// 0x759c8
			if (v15 >= 1) {
				// 0x759d0
				v16 = g30;
				if (v16 >= 1) {
					// 0x759d8
					if (v15 <= 111) {
						// 0x759e0
						if (v16 <= 111) {
							// 0x759e8
							v25 = *(int32_t *)v9;
							g13 = v25;
							if (v25 == -1) {
								// 0x75a88
								v43 = *(int32_t *)(v24 + 48);
								v44 = *(int32_t *)(v24 + 124);
								v45 = *(int32_t *)(v24 + 28);
								v31 = *(int32_t *)v11;
								v32 = *(int32_t *)v12;
								v46 = *(int32_t *)(v24 + 32);
								AddMissile(v31, v32, v45, v46, a1, 8, 0x1000000 * v44 / 0x1000000, v4, v43);
								// branch -> 0x75abc
							} else {
								// 0x759f4
								v36 = *(int32_t *)(v24 + 124);
								if (v36 == 1) {
									// 0x75a04
									v26 = *(char *)*(int32_t *)(v6 + 232 * v25 + 224);
									if (v26 >= 76) {
										// 0x75a1c
										if (v26 <= 79) {
											// 0x75a24
											v37 = *(int32_t *)(v24 + 48);
											v38 = *(int32_t *)(v24 + 28);
											v27 = *(int32_t *)v11;
											v28 = *(int32_t *)v12;
											v39 = *(int32_t *)(v24 + 32);
											AddMissile(v27, v28, v38, v39, a1, 23, 1, v4, v37);
											// branch -> 0x75abc
											// 0x75abc
											result = g31 + g35;
											*(int32_t *)g32 = *(int32_t *)g25;
											*(int32_t *)(result + 152) = *(int32_t *)g26;
											// branch -> 0x75ad0
											// 0x75ad0
											if (*(int32_t *)g27 != 0) {
												// 0x75adc
												v17 = g29;
												if (v17 >= 1) {
													// 0x75ae4
													v18 = g30;
													if (v18 >= 1) {
														// 0x75aec
														if (v17 <= 111) {
															// 0x75af4
															if (v18 < 113) {
																// 0x75b08
																return result;
															}
														}
													}
												}
											}
											// 0x75afc
											result2 = g31 + g35;
											*(int32_t *)(result2 + 52) = 1;
											// branch -> 0x75b08
											// 0x75b08
											return result2;
										}
									}
								}
								// 0x75a54
								v40 = *(int32_t *)(v24 + 48);
								v41 = *(int32_t *)(v24 + 28);
								v29 = *(int32_t *)v11;
								v30 = *(int32_t *)v12;
								v42 = *(int32_t *)(v24 + 32);
								AddMissile(v29, v30, v41, v42, a1, 8, 0x1000000 * v36 / 0x1000000, v4, v40);
								// branch -> 0x75abc
							}
							// 0x75abc
							result = g31 + g35;
							*(int32_t *)g32 = *(int32_t *)g25;
							*(int32_t *)(result + 152) = *(int32_t *)g26;
							// branch -> 0x75ad0
						}
					}
				}
			}
		}
		// 0x75ad0
		if (*(int32_t *)g27 != 0) {
			// 0x75adc
			v17 = g29;
			if (v17 >= 1) {
				// 0x75ae4
				v18 = g30;
				if (v18 >= 1) {
					// 0x75aec
					if (v17 <= 111) {
						// 0x75af4
						if (v18 < 113) {
							// 0x75b08
							return result;
						}
					}
				}
			}
		}
		// 0x75afc
		result2 = g31 + g35;
		*(int32_t *)(result2 + 52) = 1;
		// branch -> 0x75b08
		// 0x75b08
		return result2;
	}
	// 0x75988
	if (*(char *)(v3 + v48) != 0) {
		// 0x75994
		*(int32_t *)g27 = 0;
		// branch -> 0x7599c
	}
	// 0x7599c
	if (*(char *)(result + v3) == 0) {
		// 0x759a8
		v24 = g31 + g35;
		int32_t v54 = v24 + 148; // 0x759ac
		v3 = v54;
		v15 = g29;
		if (v15 == *(int32_t *)v54) {
			// 0x759b8
			if (g30 != *(int32_t *)(v24 + 152)) {
				// 0x759c8
				if (v15 >= 1) {
					// 0x759d0
					v16 = g30;
					if (v16 >= 1) {
						// 0x759d8
						if (v15 <= 111) {
							// 0x759e0
							if (v16 <= 111) {
								// 0x759e8
								v25 = *(int32_t *)v9;
								g13 = v25;
								if (v25 == -1) {
									// 0x75a88
									v43 = *(int32_t *)(v24 + 48);
									v44 = *(int32_t *)(v24 + 124);
									v45 = *(int32_t *)(v24 + 28);
									v31 = *(int32_t *)v11;
									v32 = *(int32_t *)v12;
									v46 = *(int32_t *)(v24 + 32);
									AddMissile(v31, v32, v45, v46, a1, 8, 0x1000000 * v44 / 0x1000000, v4, v43);
									// branch -> 0x75abc
								} else {
									// 0x759f4
									v36 = *(int32_t *)(v24 + 124);
									if (v36 == 1) {
										// 0x75a04
										v26 = *(char *)*(int32_t *)(v6 + 232 * v25 + 224);
										if (v26 >= 76) {
											// 0x75a1c
											if (v26 <= 79) {
												// 0x75a24
												v37 = *(int32_t *)(v24 + 48);
												v38 = *(int32_t *)(v24 + 28);
												v27 = *(int32_t *)v11;
												v28 = *(int32_t *)v12;
												v39 = *(int32_t *)(v24 + 32);
												AddMissile(v27, v28, v38, v39, a1, 23, 1, v4, v37);
												// branch -> 0x75abc
												// 0x75abc
												result = g31 + g35;
												*(int32_t *)g32 = *(int32_t *)g25;
												*(int32_t *)(result + 152) = *(int32_t *)g26;
												// branch -> 0x75ad0
												// 0x75ad0
												if (*(int32_t *)g27 != 0) {
													// 0x75adc
													v17 = g29;
													if (v17 >= 1) {
														// 0x75ae4
														v18 = g30;
														if (v18 >= 1) {
															// 0x75aec
															if (v17 <= 111) {
																// 0x75af4
																if (v18 < 113) {
																	// 0x75b08
																	return result;
																}
															}
														}
													}
												}
												// 0x75afc
												*(int32_t *)(g31 + g35 + 52) = 1;
												// branch -> 0x75b08
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// 0x75a54
									v40 = *(int32_t *)(v24 + 48);
									v41 = *(int32_t *)(v24 + 28);
									v29 = *(int32_t *)v11;
									v30 = *(int32_t *)v12;
									v42 = *(int32_t *)(v24 + 32);
									AddMissile(v29, v30, v41, v42, a1, 8, 0x1000000 * v36 / 0x1000000, v4, v40);
									// branch -> 0x75abc
								}
								// 0x75abc
								*(int32_t *)g32 = *(int32_t *)g25;
								*(int32_t *)(g31 + g35 + 152) = *(int32_t *)g26;
								// branch -> 0x75ad0
							}
						}
					}
				}
			}
		} else {
			// 0x759c8
			if (v15 >= 1) {
				// 0x759d0
				v16 = g30;
				if (v16 >= 1) {
					// 0x759d8
					if (v15 <= 111) {
						// 0x759e0
						if (v16 <= 111) {
							// 0x759e8
							v25 = *(int32_t *)v9;
							g13 = v25;
							if (v25 == -1) {
								// 0x75a88
								v43 = *(int32_t *)(v24 + 48);
								v44 = *(int32_t *)(v24 + 124);
								v45 = *(int32_t *)(v24 + 28);
								v31 = *(int32_t *)v11;
								v32 = *(int32_t *)v12;
								v46 = *(int32_t *)(v24 + 32);
								AddMissile(v31, v32, v45, v46, a1, 8, 0x1000000 * v44 / 0x1000000, v4, v43);
								// branch -> 0x75abc
							} else {
								// 0x759f4
								v36 = *(int32_t *)(v24 + 124);
								if (v36 == 1) {
									// 0x75a04
									v26 = *(char *)*(int32_t *)(v6 + 232 * v25 + 224);
									if (v26 >= 76) {
										// 0x75a1c
										if (v26 <= 79) {
											// 0x75a24
											v37 = *(int32_t *)(v24 + 48);
											v38 = *(int32_t *)(v24 + 28);
											v27 = *(int32_t *)v11;
											v28 = *(int32_t *)v12;
											v39 = *(int32_t *)(v24 + 32);
											AddMissile(v27, v28, v38, v39, a1, 23, 1, v4, v37);
											// branch -> 0x75abc
											// 0x75abc
											*(int32_t *)g32 = *(int32_t *)g25;
											*(int32_t *)(g31 + g35 + 152) = *(int32_t *)g26;
											// branch -> 0x75ad0
											// 0x75ad0
											if (*(int32_t *)g27 != 0) {
												// 0x75adc
												v17 = g29;
												if (v17 >= 1) {
													// 0x75ae4
													v18 = g30;
													if (v18 >= 1) {
														// 0x75aec
														if (v17 <= 111) {
															// 0x75af4
															if (v18 < 113) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													}
												}
											}
											// 0x75afc
											*(int32_t *)(g31 + g35 + 52) = 1;
											// branch -> 0x75b08
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// 0x75a54
								v40 = *(int32_t *)(v24 + 48);
								v41 = *(int32_t *)(v24 + 28);
								v29 = *(int32_t *)v11;
								v30 = *(int32_t *)v12;
								v42 = *(int32_t *)(v24 + 32);
								AddMissile(v29, v30, v41, v42, a1, 8, 0x1000000 * v36 / 0x1000000, v4, v40);
								// branch -> 0x75abc
							}
							// 0x75abc
							*(int32_t *)g32 = *(int32_t *)g25;
							*(int32_t *)(g31 + g35 + 152) = *(int32_t *)g26;
							// branch -> 0x75ad0
						}
					}
				}
			}
		}
		// 0x75ad0
		if (*(int32_t *)g27 != 0) {
			// 0x75adc
			v17 = g29;
			if (v17 >= 1) {
				// 0x75ae4
				v18 = g30;
				if (v18 >= 1) {
					// 0x75aec
					if (v17 <= 111) {
						// 0x75af4
						if (v18 < 113) {
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
			}
		}
		// 0x75afc
		*(int32_t *)(g31 + g35 + 52) = 1;
		// branch -> 0x75b08
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x75ad0
	if (*(int32_t *)g27 != 0) {
		// 0x75adc
		v17 = g29;
		if (v17 >= 1) {
			// 0x75ae4
			v18 = g30;
			if (v18 >= 1) {
				// 0x75aec
				if (v17 <= 111) {
					// 0x75af4
					if (v18 < 113) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
		}
	}
	// 0x75afc
	result2 = g31 + g35;
	*(int32_t *)(result2 + 52) = 1;
	// branch -> 0x75b08
	// Detected a possible infinite recursion (goto support failed); quitting...
	// 0x7599c
	if (*(char *)(result2 + v3) == 0) {
		// 0x759a8
		v24 = g31 + g35;
		v15 = g29;
		if (v15 == *(int32_t *)(v24 + 148)) {
			// 0x759b8
			if (g30 != *(int32_t *)(v24 + 152)) {
				// 0x759c8
				if (v15 >= 1) {
					// 0x759d0
					v16 = g30;
					if (v16 >= 1) {
						// 0x759d8
						if (v15 <= 111) {
							// 0x759e0
							if (v16 <= 111) {
								// 0x759e8
								v25 = *(int32_t *)v9;
								g13 = v25;
								if (v25 == -1) {
									// 0x75a88
									v43 = *(int32_t *)(v24 + 48);
									v44 = *(int32_t *)(v24 + 124);
									v45 = *(int32_t *)(v24 + 28);
									v31 = *(int32_t *)v11;
									v32 = *(int32_t *)v12;
									v46 = *(int32_t *)(v24 + 32);
									AddMissile(v31, v32, v45, v46, a1, 8, 0x1000000 * v44 / 0x1000000, v4, v43);
									// branch -> 0x75abc
								} else {
									// 0x759f4
									v36 = *(int32_t *)(v24 + 124);
									if (v36 == 1) {
										// 0x75a04
										v26 = *(char *)*(int32_t *)(v6 + 232 * v25 + 224);
										if (v26 >= 76) {
											// 0x75a1c
											if (v26 <= 79) {
												// 0x75a24
												v37 = *(int32_t *)(v24 + 48);
												v38 = *(int32_t *)(v24 + 28);
												v27 = *(int32_t *)v11;
												v28 = *(int32_t *)v12;
												v39 = *(int32_t *)(v24 + 32);
												AddMissile(v27, v28, v38, v39, a1, 23, 1, v4, v37);
												// branch -> 0x75abc
												// 0x75abc
												*(int32_t *)g32 = *(int32_t *)g25;
												*(int32_t *)(g31 + g35 + 152) = *(int32_t *)g26;
												// branch -> 0x75ad0
												// 0x75ad0
												if (*(int32_t *)g27 != 0) {
													// 0x75adc
													v17 = g29;
													if (v17 >= 1) {
														// 0x75ae4
														v18 = g30;
														if (v18 >= 1) {
															// 0x75aec
															if (v17 <= 111) {
																// 0x75af4
																if (v18 < 113) {
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
															}
														}
													}
												}
												// 0x75afc
												*(int32_t *)(g31 + g35 + 52) = 1;
												// branch -> 0x75b08
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// 0x75a54
									v40 = *(int32_t *)(v24 + 48);
									v41 = *(int32_t *)(v24 + 28);
									v29 = *(int32_t *)v11;
									v30 = *(int32_t *)v12;
									v42 = *(int32_t *)(v24 + 32);
									AddMissile(v29, v30, v41, v42, a1, 8, 0x1000000 * v36 / 0x1000000, v4, v40);
									// branch -> 0x75abc
								}
								// 0x75abc
								*(int32_t *)g32 = *(int32_t *)g25;
								*(int32_t *)(g31 + g35 + 152) = *(int32_t *)g26;
								// branch -> 0x75ad0
							}
						}
					}
				}
			}
		} else {
			// 0x759c8
			if (v15 >= 1) {
				// 0x759d0
				v16 = g30;
				if (v16 >= 1) {
					// 0x759d8
					if (v15 <= 111) {
						// 0x759e0
						if (v16 <= 111) {
							// 0x759e8
							v25 = *(int32_t *)v9;
							g13 = v25;
							if (v25 == -1) {
								// 0x75a88
								v43 = *(int32_t *)(v24 + 48);
								v44 = *(int32_t *)(v24 + 124);
								v45 = *(int32_t *)(v24 + 28);
								v31 = *(int32_t *)v11;
								v32 = *(int32_t *)v12;
								v46 = *(int32_t *)(v24 + 32);
								AddMissile(v31, v32, v45, v46, a1, 8, 0x1000000 * v44 / 0x1000000, v4, v43);
								// branch -> 0x75abc
							} else {
								// 0x759f4
								v36 = *(int32_t *)(v24 + 124);
								if (v36 == 1) {
									// 0x75a04
									v26 = *(char *)*(int32_t *)(v6 + 232 * v25 + 224);
									if (v26 >= 76) {
										// 0x75a1c
										if (v26 <= 79) {
											// 0x75a24
											v37 = *(int32_t *)(v24 + 48);
											v38 = *(int32_t *)(v24 + 28);
											v27 = *(int32_t *)v11;
											v28 = *(int32_t *)v12;
											v39 = *(int32_t *)(v24 + 32);
											AddMissile(v27, v28, v38, v39, a1, 23, 1, v4, v37);
											// branch -> 0x75abc
											// 0x75abc
											*(int32_t *)g32 = *(int32_t *)g25;
											*(int32_t *)(g31 + g35 + 152) = *(int32_t *)g26;
											// branch -> 0x75ad0
											// 0x75ad0
											if (*(int32_t *)g27 != 0) {
												// 0x75adc
												v17 = g29;
												if (v17 >= 1) {
													// 0x75ae4
													v18 = g30;
													if (v18 >= 1) {
														// 0x75aec
														if (v17 <= 111) {
															// 0x75af4
															if (v18 < 113) {
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
													}
												}
											}
											// 0x75afc
											*(int32_t *)(g31 + g35 + 52) = 1;
											// branch -> 0x75b08
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// 0x75a54
								v40 = *(int32_t *)(v24 + 48);
								v41 = *(int32_t *)(v24 + 28);
								v29 = *(int32_t *)v11;
								v30 = *(int32_t *)v12;
								v42 = *(int32_t *)(v24 + 32);
								AddMissile(v29, v30, v41, v42, a1, 8, 0x1000000 * v36 / 0x1000000, v4, v40);
								// branch -> 0x75abc
							}
							// 0x75abc
							*(int32_t *)g32 = *(int32_t *)g25;
							*(int32_t *)(g31 + g35 + 152) = *(int32_t *)g26;
							// branch -> 0x75ad0
						}
					}
				}
			}
		}
		// 0x75ad0
		if (*(int32_t *)g27 != 0) {
			// 0x75adc
			v17 = g29;
			if (v17 >= 1) {
				// 0x75ae4
				v18 = g30;
				if (v18 >= 1) {
					// 0x75aec
					if (v17 <= 111) {
						// 0x75af4
						if (v18 < 113) {
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
			}
		}
		// 0x75afc
		*(int32_t *)(g31 + g35 + 52) = 1;
		// branch -> 0x75b08
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x75ad0
	if (*(int32_t *)g27 != 0) {
		// 0x75adc
		v17 = g29;
		if (v17 >= 1) {
			// 0x75ae4
			v18 = g30;
			if (v18 >= 1) {
				// 0x75aec
				if (v17 <= 111) {
					// 0x75af4
					if (v18 < 113) {
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// 0x75afc
				*(int32_t *)(g31 + g35 + 52) = 1;
				// branch -> 0x75b08
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x75afc
			*(int32_t *)(g31 + g35 + 52) = 1;
			// branch -> 0x75b08
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x75afc
		*(int32_t *)(g31 + g35 + 52) = 1;
		// branch -> 0x75b08
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x75afc
	*(int32_t *)(g31 + g35 + 52) = 1;
	// branch -> 0x75b08
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x75b1c - 0x75be0
int32_t function_75b1c(int32_t a1)
{
	// 0x75b1c
	g36 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x75b28
	g35 = v1;
	int32_t v2 = 180 * a1; // 0x75b2c
	g32 = v2;
	int32_t v3 = v1 + v2;                // 0x75b30
	int32_t *v4 = (int32_t *)(v3 + 116); // 0x75b40
	*v4 = *v4 - 1;
	int32_t v5 = v3 + 116; // 0x75b54
	g31 = *(int32_t *)v5;
	g33 = v5;
	int32_t v6; // 0x75b70
	int32_t v7; // 0x75bb0
	int32_t v8; // 0x75b7c
	if (*(int32_t *)(v3 + 4) != *(int32_t *)(v3 + 28)) {
		// 0x75b70
		v6 = g32 + g35;
		v8 = *(int32_t *)(v6 + 8);
		g41 = v8;
		g42 = 0;
		function_6f3d4(g36, *(int32_t *)(v6 + 128), 1, v8, 0);
		// branch -> 0x75b90
		// 0x75b90
		if (*(int32_t *)(g32 + g35 + 132) == 1) {
			// 0x75ba0
			*(int32_t *)g33 = g31;
			// branch -> 0x75ba4
		}
		// 0x75ba4
		if (*(int32_t *)g33 == 0) {
			// 0x75bb0
			v7 = g32 + g35;
			*(int32_t *)(v7 + 52) = 1;
			AddUnLight(*(int32_t *)(v7 + 140));
			// branch -> 0x75bc4
		}
		// 0x75bc4
		g34 = g36;
		return PutMissile();
	}
	// 0x75b60
	if (*(int32_t *)(v3 + 8) != *(int32_t *)(v3 + 32)) {
		// 0x75b70
		v6 = g32 + g35;
		v8 = *(int32_t *)(v6 + 8);
		g41 = v8;
		g42 = 0;
		function_6f3d4(g36, *(int32_t *)(v6 + 128), 1, v8, 0);
		// branch -> 0x75b90
	}
	// 0x75b90
	if (*(int32_t *)(g32 + g35 + 132) == 1) {
		// 0x75ba0
		*(int32_t *)g33 = g31;
		// branch -> 0x75ba4
	}
	// 0x75ba4
	if (*(int32_t *)g33 == 0) {
		// 0x75bb0
		v7 = g32 + g35;
		*(int32_t *)(v7 + 52) = 1;
		AddUnLight(*(int32_t *)(v7 + 140));
		// branch -> 0x75bc4
	}
	// 0x75bc4
	g34 = g36;
	return PutMissile();
}

// Address range: 0x75be0 - 0x75dcc
int32_t MI_Town(int32_t a1)
{
	// 0x75be0
	g27 = a1;
	g33 = *(int32_t *)(g23 - 0x77e4);
	g35 = *(int32_t *)(g23 - 0x7664);
	g36 = *(int32_t *)(g23 - 0x77ac);
	int32_t v1 = 8;                              // ctr
	int32_t v2;                                  // bp-128
	int32_t v3 = &v2;                            // 0x75c1c
	int32_t v4 = *(int32_t *)(g23 - 0x5f2c) - 8; // 0x75c14
	// branch -> 0x75c14
	while (true) {
		int32_t v5 = v4 + 8; // 0x75c14
		int32_t v6 = v3 + 8; // 0x75c1c
		*(int32_t *)v6 = *(int32_t *)v5;
		*(int32_t *)(v3 + 12) = *(int32_t *)(v4 + 12);
		int32_t v7 = v1 - 1; // 0x75c24
		v1 = v7;
		if (v7 == 0) {
			// 0x75c28
			g29 = 180 * g27;
			*(int32_t *)(v6 + 8) = *(int32_t *)(v5 + 8);
			int32_t v8 = g29 + g35 + 116; // 0x75c38
			int32_t *v9 = (int32_t *)v8;  // 0x75c38
			uint32_t v10 = *v9;           // 0x75c38
			g30 = v8;
			if (v10 >= 2) {
				// 0x75c44
				*v9 = v10 - 1;
				v8 = g30;
				// branch -> 0x75c4c
			}
			// 0x75c4c
			if (*(int32_t *)v8 == *(int32_t *)(g35 + g29 + 148)) {
				// 0x75c60
				SetMissDir(g27, 1);
				// branch -> 0x75c6c
			}
			// 0x75c6c
			if (*(char *)g33 != 0) {
				int32_t v11 = g35;       // 0x75c78
				int32_t v12 = g29;       // 0x75c78
				int32_t v13 = v12 + v11; // 0x75c78
				if (*(int32_t *)(v13 + 44) != 1) {
					// 0x75c88
					if (*(int32_t *)g30 != 0) {
						int32_t v14 = v13 + 152; // 0x75c94
						int32_t v15;             // bp-120
						int32_t v16;             // 0x75cc4
						int32_t v17;             // 0x75cc4
						int32_t v18;
						if (*(int32_t *)v14 == 0) {
							int32_t v19 = AddLight(*(int32_t *)(v13 + 4), *(int32_t *)(v13 + 8), v15); // 0x75cb8
							*(int32_t *)(v13 + 140) = v19;
							v18 = &v15;
							v17 = g29;
							v16 = g35;
							// branch -> 0x75cc0
						} else {
							// 0x75c94
							v18 = &v15;
							v17 = v12;
							v16 = v11;
							// branch -> 0x75cc0
						}
						int32_t v20 = v16 + v17;             // 0x75cc4
						int32_t v21 = *(int32_t *)(v20 + 8); // 0x75cd8
						g39 = *(int32_t *)(4 * *(int32_t *)v14 + v18);
						function_cba34(*(int32_t *)(v20 + 140), *(int32_t *)(v20 + 4), v21);
						int32_t *v22 = (int32_t *)v14; // 0x75ce4
						*v22 = *v22 + 1;
						// branch -> 0x75cf0
					}
				}
			}
			int32_t v23 = *(int32_t *)(g23 - 0x77a8); // 0x75cf0
			g32 = v23;
			g31 = g29 + g35;
			g28 = 0;
			int32_t v24 = 0; // 0x75d50
			// branch -> 0x75cfc
			while (true) {
				int32_t v25 = v24; // 0x75d80
				if (*(char *)(v23 + 29) != 0) {
					// 0x75d08
					if ((int32_t) * (char *)g33 == *(int32_t *)(v23 + 52)) {
						// 0x75d18
						if (*(char *)(v23 + 315) == 0) {
							// 0x75d24
							if (*(int32_t *)v23 == 0) {
								int32_t v26 = g31; // 0x75d34
								if (*(int32_t *)(v23 + 56) == *(int32_t *)(v26 + 4)) {
									// 0x75d40
									if (*(int32_t *)(v23 + 60) == *(int32_t *)(v26 + 8)) {
										// 0x75d50
										ClrPlrPath(v24);
										int32_t v27 = g28; // 0x75d5c
										if (v27 == *(int32_t *)g36) {
											// 0x75d64
											NetSendCmdParam1(1, 31, *(int32_t *)(g31 + 120) % 0x10000);
											*(int32_t *)g32 = 10;
											v25 = g28;
											// branch -> 0x75d80
										} else {
											v25 = v27;
										}
									} else {
										v25 = v24;
									}
								} else {
									v25 = v24;
								}
							} else {
								v25 = v24;
							}
						} else {
							v25 = v24;
						}
					} else {
						v25 = v24;
					}
				}
				int32_t v28 = v25 + 1; // 0x75d80
				g28 = v28;
				int32_t v29 = g32 + 0x55ec; // 0x75d84
				g32 = v29;
				if (v28 >= 4) {
					// break -> 0x75d90
					break;
				}
				v24 = v28;
				v23 = v29;
				// continue -> 0x75cfc
			}
			// 0x75d90
			if (*(int32_t *)g30 != 0) {
				// 0x75db0
				g34 = g27;
				return PutMissile();
			}
			int32_t v30 = g29 + g35; // 0x75d9c
			*(int32_t *)(v30 + 52) = 1;
			AddUnLight(*(int32_t *)(v30 + 140));
			// branch -> 0x75db0
			// 0x75db0
			g34 = g27;
			return PutMissile();
		}
		// 0x75c14
		v3 = v6;
		v4 = v5;
		// branch -> 0x75c14
	}
}

// Address range: 0x75dcc - 0x75f74
int32_t function_75dcc(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x75dd8
	int32_t v2 = 180 * a1;                   // 0x75ddc
	int32_t v3 = v1 + v2;                    // 0x75de4
	int32_t v4;                              // 0x75ebc
	int32_t v5;                              // 0x75edc
	int32_t v6;                              // 0x75f08
	int32_t v7;                              // 0x75e20
	int32_t *v8;                             // 0x75e28
	int32_t v9;                              // 0x75e70
	int32_t v10;                             // 0x75e94
	int32_t v11;                             // 0x75f24
	int32_t v12;                             // 0x75e4c
	int32_t v13;                             // 0x75e54
	int32_t v14;                             // 0x75f3c
	if (*(int32_t *)(v3 + 124) != 0) {
		// 0x75e20
		v7 = v1 + v2;
		v8 = (int32_t *)(v7 + 116);
		*v8 = *v8 - 1;
		g42 = 1;
		v12 = *(int32_t *)(v7 + 128);
		v13 = *(int32_t *)(v7 + 8);
		g41 = v13;
		function_6f3d4(a1, v12, 1, *(int32_t *)(v7 + 4) - 1, v13);
		v9 = *(int32_t *)g32;
		g41 = v9;
		g42 = 1;
		function_6f3d4(g27, *(int32_t *)g30, 1, *(int32_t *)g31, v9);
		v10 = *(int32_t *)g32;
		g41 = v10;
		g42 = 1;
		function_6f3d4(g27, *(int32_t *)g30, 1, *(int32_t *)g31 + 1, v10);
		v4 = *(int32_t *)g32 + 1;
		g41 = v4;
		g42 = 1;
		function_6f3d4(g27, *(int32_t *)g30, 1, *(int32_t *)g31 - 1, v4);
		v5 = *(int32_t *)g32 + 1;
		g41 = v5;
		g42 = 1;
		function_6f3d4(g27, *(int32_t *)g30, 1, *(int32_t *)g31, v5);
		v6 = *(int32_t *)g32 + 1;
		g41 = v6;
		g42 = 1;
		function_6f3d4(g27, *(int32_t *)g30, 1, *(int32_t *)g31 + 1, v6);
		if (*(int32_t *)g29 == 0) {
			// 0x75f24
			v11 = g33 + g35;
			*(int32_t *)(v11 + 52) = 1;
			if (*(int32_t *)g28 == 0) {
				// 0x75f3c
				v14 = *(int32_t *)(v11 + 120);
				if (v14 != -1) {
					// 0x75f48
					*(char *)(g36 + 0x55ec * v14 + 313) = 0;
					// branch -> 0x75f58
				}
				// 0x75f58
				g34 = g27;
				return PutMissile();
			}
		}
		// 0x75f58
		g34 = g27;
		return PutMissile();
	}
	int32_t v15 = *(int32_t *)(v3 + 120); // 0x75e04
	if (v15 != -1) {
		// 0x75e10
		*(char *)(0x55ec * v15 + *(int32_t *)(g23 - 0x77a8) + 313) = 1;
		// branch -> 0x75e20
	}
	// 0x75e20
	v7 = v1 + v2;
	v8 = (int32_t *)(v7 + 116);
	*v8 = *v8 - 1;
	g42 = 1;
	v12 = *(int32_t *)(v7 + 128);
	v13 = *(int32_t *)(v7 + 8);
	g41 = v13;
	function_6f3d4(a1, v12, 1, *(int32_t *)(v7 + 4) - 1, v13);
	v9 = *(int32_t *)g32;
	g41 = v9;
	g42 = 1;
	function_6f3d4(g27, *(int32_t *)g30, 1, *(int32_t *)g31, v9);
	v10 = *(int32_t *)g32;
	g41 = v10;
	g42 = 1;
	function_6f3d4(g27, *(int32_t *)g30, 1, *(int32_t *)g31 + 1, v10);
	v4 = *(int32_t *)g32 + 1;
	g41 = v4;
	g42 = 1;
	function_6f3d4(g27, *(int32_t *)g30, 1, *(int32_t *)g31 - 1, v4);
	v5 = *(int32_t *)g32 + 1;
	g41 = v5;
	g42 = 1;
	function_6f3d4(g27, *(int32_t *)g30, 1, *(int32_t *)g31, v5);
	v6 = *(int32_t *)g32 + 1;
	g41 = v6;
	g42 = 1;
	function_6f3d4(g27, *(int32_t *)g30, 1, *(int32_t *)g31 + 1, v6);
	if (*(int32_t *)g29 == 0) {
		// 0x75f24
		v11 = g33 + g35;
		*(int32_t *)(v11 + 52) = 1;
		if (*(int32_t *)g28 == 0) {
			// 0x75f3c
			v14 = *(int32_t *)(v11 + 120);
			if (v14 != -1) {
				// 0x75f48
				*(char *)(g36 + 0x55ec * v14 + 313) = 0;
				// branch -> 0x75f58
			}
		}
	}
	// 0x75f58
	g34 = g27;
	return PutMissile();
}

// Address range: 0x75f74 - 0x760b4
int32_t function_75f74(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x75f80
	int32_t v2 = 180 * a1;                   // 0x75f84
	int32_t v3 = v1 + v2;                    // 0x75f8c
	int32_t v4;                              // 0x76000
	int32_t v5;                              // 0x7601c
	int32_t v6;                              // 0x76048
	int32_t v7;                              // 0x75fc8
	int32_t *v8;                             // 0x75fd0
	int32_t v9;                              // 0x76064
	int32_t v10;                             // 0x75ff8
	int32_t v11;                             // 0x7607c
	if (*(int32_t *)(v3 + 124) != 0) {
		// 0x75fc8
		v7 = v1 + v2;
		v8 = (int32_t *)(v7 + 116);
		*v8 = *v8 - 1;
		g42 = 1;
		v10 = *(int32_t *)(v7 + 128);
		v4 = *(int32_t *)(v7 + 8) - 1;
		g41 = v4;
		function_6f3d4(a1, v10, 1, *(int32_t *)(v7 + 4) - 1, v4);
		v5 = *(int32_t *)g30 - 1;
		g41 = v5;
		g42 = 1;
		function_6f3d4(g31, *(int32_t *)g28, 1, *(int32_t *)g29, v5);
		v6 = *(int32_t *)g30 - 1;
		g41 = v6;
		g42 = 1;
		function_6f3d4(g31, *(int32_t *)g28, 1, *(int32_t *)g29 + 1, v6);
		if (*(int32_t *)g27 == 0) {
			// 0x76064
			v9 = g33 + g35;
			*(int32_t *)(v9 + 52) = 1;
			if (*(int32_t *)g32 == 0) {
				// 0x7607c
				v11 = *(int32_t *)(v9 + 120);
				if (v11 != -1) {
					// 0x76088
					*(char *)(g36 + 0x55ec * v11 + 313) = 0;
					// branch -> 0x76098
				}
				// 0x76098
				g34 = g31;
				return PutMissile();
			}
		}
		// 0x76098
		g34 = g31;
		return PutMissile();
	}
	int32_t v12 = *(int32_t *)(v3 + 120); // 0x75fac
	if (v12 != -1) {
		// 0x75fb8
		*(char *)(0x55ec * v12 + *(int32_t *)(g23 - 0x77a8) + 313) = 1;
		// branch -> 0x75fc8
	}
	// 0x75fc8
	v7 = v1 + v2;
	v8 = (int32_t *)(v7 + 116);
	*v8 = *v8 - 1;
	g42 = 1;
	v10 = *(int32_t *)(v7 + 128);
	v4 = *(int32_t *)(v7 + 8) - 1;
	g41 = v4;
	function_6f3d4(a1, v10, 1, *(int32_t *)(v7 + 4) - 1, v4);
	v5 = *(int32_t *)g30 - 1;
	g41 = v5;
	g42 = 1;
	function_6f3d4(g31, *(int32_t *)g28, 1, *(int32_t *)g29, v5);
	v6 = *(int32_t *)g30 - 1;
	g41 = v6;
	g42 = 1;
	function_6f3d4(g31, *(int32_t *)g28, 1, *(int32_t *)g29 + 1, v6);
	if (*(int32_t *)g27 == 0) {
		// 0x76064
		v9 = g33 + g35;
		*(int32_t *)(v9 + 52) = 1;
		if (*(int32_t *)g32 == 0) {
			// 0x7607c
			v11 = *(int32_t *)(v9 + 120);
			if (v11 != -1) {
				// 0x76088
				*(char *)(g36 + 0x55ec * v11 + 313) = 0;
				// branch -> 0x76098
			}
		}
	}
	// 0x76098
	g34 = g31;
	return PutMissile();
}

// Address range: 0x760b4 - 0x763bc
int32_t MI_Manashield(int32_t a1)
{
	int32_t v1 = g10; // 0x760b8
	g26 = a1;
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x760c0
	g32 = v2;
	int32_t v3 = 180 * a1; // 0x760c4
	g31 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x77a8); // 0x760c8
	g33 = v4;
	g35 = *(int32_t *)(g23 - 0x77ac);
	int32_t v5 = v2 + v3; // 0x760d0
	int32_t v6 = v5;      // r3
	int32_t v7 = v5 + 4;  // 0x760d4
	g29 = v7;
	g28 = v5 + 8;
	int32_t v8 = *(int32_t *)(v5 + 120); // 0x760e4
	g27 = v8;
	int32_t v9 = 0x55ec * v8; // 0x760e8
	g30 = v9;
	int32_t v10 = v9 + v4; // 0x760ec
	g36 = v10;
	int32_t v11 = *(int32_t *)(v10 + 56); // 0x760f0
	*(int32_t *)v7 = v11;
	int32_t v12 = *(int32_t *)(g36 + 60); // 0x760f8
	*(int32_t *)(v6 + 8) = v12;
	*(int32_t *)(v6 + 36) = 0x10000 * *(int32_t *)(g36 + 96);
	*(int32_t *)(v6 + 40) = 0x10000 * *(int32_t *)(g36 + 100);
	int32_t v13 = g36; // 0x76118
	if (*(int32_t *)v13 == 3) {
		// 0x76124
		*(int32_t *)(v6 + 28) = *(int32_t *)(v13 + 64);
		*(int32_t *)(v6 + 32) = *(int32_t *)(g36 + 68);
		// branch -> 0x76140
	} else {
		// 0x76138
		*(int32_t *)(v6 + 28) = v11;
		*(int32_t *)(v6 + 32) = v12;
		// branch -> 0x76140
	}
	// 0x76140
	g34 = g26;
	GetMissilePos();
	int32_t v14; // r0
	int32_t v15; // r4
	int32_t v16; // r5
	int32_t v17; // r6
	int32_t v18; // r7
	int32_t v19; // r9
	int32_t result;
	int32_t v20;  // 0x761bc
	int32_t v21;  // 0x76230
	int32_t v22;  // 0x7623c
	int32_t v23;  // 0x762bc
	int32_t v24;  // 0x762d8
	int32_t v25;  // 0x762f0
	int32_t v26;  // 0x76380
	int32_t v27;  // 0x761bc
	int32_t v28;  // 0x761c0
	int32_t v29;  // 0x761f0
	int32_t v30;  // 0x761f8
	int32_t v31;  // 0x76254
	int32_t *v32; // 0x76270
	int32_t v33;  // 0x761bc
	int32_t v34;  // 0x761e8
	int32_t v35;  // 0x7620c
	int32_t v36;  // 0x7622c
	int32_t v37;  // 0x76250
	int32_t v38;  // 0x76264
	int32_t *v39; // 0x7627c
	int32_t v40;  // 0x762b0
	int32_t v41;  // 0x762fc
	int32_t v42;  // 0x76348
	int32_t v43;  // 0x76198
	int32_t v44;  // 0x761f0
	int32_t v45;  // 0x761f8
	int32_t v46;  // 0x762a8
	int32_t v47;  // 0x762bc
	uint64_t v48; // 0x76220
	if (*(int32_t *)g36 != 3) {
		// 0x76180
		if (g27 == *(int32_t *)g35) {
			// 0x761bc
			v20 = g33;
			v27 = g30;
			v33 = v27 + v20;
			v28 = v33 + 424;
			v6 = v28;
			if (*(int32_t *)v28 >= 1) {
				// 0x761cc
				if (*(char *)(v33 + 29) != 0) {
					// 0x761e8
					v34 = g31 + g32;
					v29 = v34 + 148;
					v44 = *(int32_t *)v29;
					v17 = v44;
					g29 = v29;
					v30 = v20 + v27 + 404;
					v45 = *(int32_t *)v30;
					g28 = v30;
					if (v44 <= v45) {
						// 0x76318
						if (g27 == *(int32_t *)g35) {
							// 0x76324
							if (*(int32_t *)g28 == 0) {
								// 0x76330
								if (*(int32_t *)g29 == 0) {
									// 0x7633c
									if (*(int32_t *)g36 != 8) {
										// 0x76348
										v42 = g31 + g32;
										*(int32_t *)(v42 + 116) = 0;
										*(int32_t *)(v42 + 52) = 1;
										function_a640c(g27, -1);
										// branch -> 0x76368
									}
								}
							}
						}
						// 0x76368
						v6 = g31 + g32;
						*(int32_t *)g29 = *(int32_t *)g28;
						*(int32_t *)(v6 + 152) = *(int32_t *)(g30 + g33 + 396);
						v26 = v6;
						if (*(int32_t *)(v26 + 116) == 0) {
							// 0x7638c
							*(int32_t *)(v26 + 52) = 1;
							NetSendCmd(1, 89);
							// branch -> 0x763a0
						}
						// 0x763a0
						g34 = g26;
						result = PutMissile();
						// branch -> 0x763a8
						// 0x763a8
						g10 = v1;
						return result;
					}
					// 0x76204
					v35 = v44 - v45;
					v14 = v35;
					v21 = v35;
					if (*(int32_t *)(v34 + 48) >= 1) {
						// 0x76218
						v48 = 0x55555556 * (int64_t)v35;
						v36 = v35 - ((int32_t)(v48 / 0x100000000) + (int32_t)(v48 / 0x8000000000000000));
						v14 = v36;
						v21 = v36;
						// branch -> 0x76230
					}
					// 0x76230
					if (v21 <= 0xffffffff) {
						// 0x76238
						v14 = 0;
						// branch -> 0x7623c
					}
					// 0x7623c
					v22 = g23;
					v19 = 1;
					*(int32_t *)*(int32_t *)(v22 - 0x76f4) = 1;
					*(int32_t *)*(int32_t *)(v22 - 0x76f0) = v19;
					v37 = *(int32_t *)v6;
					v31 = v14;
					if (v37 < v31) {
						// 0x7628c
						v18 = g31 + g32;
						v16 = g30 + g33;
						*(int32_t *)g28 = v37 - v31 + v17;
						v15 = 0;
						v46 = *(int32_t *)(v18 + 152);
						v40 = *(int32_t *)v6 - v14 + v46;
						*(int32_t *)(v16 + 396) = v40;
						*(int32_t *)v6 = v15;
						v23 = v16;
						v47 = *(int32_t *)(v23 + 420);
						*(int32_t *)(v23 + 416) = v47 - *(int32_t *)(v23 + 428);
						*(int32_t *)(v18 + 116) = v15;
						*(int32_t *)(v18 + 52) = v19;
						v24 = g28;
						v25 = v24;
						if (*(int32_t *)v24 <= 0xffffffff) {
							// 0x762e4
							g37 = 0;
							SetPlayerHitPoints(g27);
							v25 = g28;
							// branch -> 0x762f0
						}
						// 0x762f0
						if (*(int32_t *)v25 < 64) {
							// 0x762fc
							v41 = *(int32_t *)g35;
							if (g27 == v41) {
								// 0x76308
								function_a640c(v41, *(int32_t *)(g31 + g32 + 176));
								// branch -> 0x76318
							}
						}
					} else {
						// 0x7625c
						*(int32_t *)g28 = v17;
						v38 = g30 + g33;
						*(int32_t *)(v38 + 396) = *(int32_t *)(g31 + g32 + 152);
						v32 = (int32_t *)v6;
						*v32 = *v32 - v14;
						v39 = (int32_t *)(v38 + 416);
						*v39 = *v39 - v14;
						// branch -> 0x76318
					}
					// 0x76318
					if (g27 == *(int32_t *)g35) {
						// 0x76324
						if (*(int32_t *)g28 == 0) {
							// 0x76330
							if (*(int32_t *)g29 == 0) {
								// 0x7633c
								if (*(int32_t *)g36 != 8) {
									// 0x76348
									v42 = g31 + g32;
									*(int32_t *)(v42 + 116) = 0;
									*(int32_t *)(v42 + 52) = 1;
									function_a640c(g27, -1);
									// branch -> 0x76368
								}
							}
						}
					}
					// 0x76368
					v6 = g31 + g32;
					*(int32_t *)g29 = *(int32_t *)g28;
					*(int32_t *)(v6 + 152) = *(int32_t *)(g30 + g33 + 396);
					v26 = v6;
					if (*(int32_t *)(v26 + 116) == 0) {
						// 0x7638c
						*(int32_t *)(v26 + 52) = 1;
						NetSendCmd(1, 89);
						// branch -> 0x763a0
					}
					// 0x763a0
					g34 = g26;
					result = PutMissile();
					// branch -> 0x763a8
					// 0x763a8
					g10 = v1;
					return result;
				}
			}
			// 0x761dc
			*(int32_t *)(g31 + g32 + 116) = 0;
			// branch -> 0x761e8
			// 0x761e8
			v34 = g31 + g32;
			v29 = v34 + 148;
			v44 = *(int32_t *)v29;
			v17 = v44;
			g29 = v29;
			v30 = g33 + g30 + 404;
			v45 = *(int32_t *)v30;
			g28 = v30;
			if (v44 > v45) {
				// 0x76204
				v35 = v44 - v45;
				v14 = v35;
				v21 = v35;
				if (*(int32_t *)(v34 + 48) >= 1) {
					// 0x76218
					v48 = 0x55555556 * (int64_t)v35;
					v36 = v35 - ((int32_t)(v48 / 0x100000000) + (int32_t)(v48 / 0x8000000000000000));
					v14 = v36;
					v21 = v36;
					// branch -> 0x76230
				}
				// 0x76230
				if (v21 <= 0xffffffff) {
					// 0x76238
					v14 = 0;
					// branch -> 0x7623c
				}
				// 0x7623c
				v22 = g23;
				v19 = 1;
				*(int32_t *)*(int32_t *)(v22 - 0x76f4) = 1;
				*(int32_t *)*(int32_t *)(v22 - 0x76f0) = v19;
				v37 = *(int32_t *)v6;
				v31 = v14;
				if (v37 < v31) {
					// 0x7628c
					v18 = g31 + g32;
					v16 = g30 + g33;
					*(int32_t *)g28 = v37 - v31 + v17;
					v15 = 0;
					v46 = *(int32_t *)(v18 + 152);
					v40 = *(int32_t *)v6 - v14 + v46;
					*(int32_t *)(v16 + 396) = v40;
					*(int32_t *)v6 = v15;
					v23 = v16;
					v47 = *(int32_t *)(v23 + 420);
					*(int32_t *)(v23 + 416) = v47 - *(int32_t *)(v23 + 428);
					*(int32_t *)(v18 + 116) = v15;
					*(int32_t *)(v18 + 52) = v19;
					v24 = g28;
					v25 = v24;
					if (*(int32_t *)v24 <= 0xffffffff) {
						// 0x762e4
						g37 = 0;
						SetPlayerHitPoints(g27);
						v25 = g28;
						// branch -> 0x762f0
					}
					// 0x762f0
					if (*(int32_t *)v25 < 64) {
						// 0x762fc
						v41 = *(int32_t *)g35;
						if (g27 == v41) {
							// 0x76308
							function_a640c(v41, *(int32_t *)(g31 + g32 + 176));
							// branch -> 0x76318
						}
					}
				} else {
					// 0x7625c
					*(int32_t *)g28 = v17;
					v38 = g30 + g33;
					*(int32_t *)(v38 + 396) = *(int32_t *)(g31 + g32 + 152);
					v32 = (int32_t *)v6;
					*v32 = *v32 - v14;
					v39 = (int32_t *)(v38 + 416);
					*v39 = *v39 - v14;
					// branch -> 0x76318
				}
				// 0x76318
				if (g27 == *(int32_t *)g35) {
					// 0x76324
					if (*(int32_t *)g28 == 0) {
						// 0x76330
						if (*(int32_t *)g29 == 0) {
							// 0x7633c
							if (*(int32_t *)g36 != 8) {
								// 0x76348
								v42 = g31 + g32;
								*(int32_t *)(v42 + 116) = 0;
								*(int32_t *)(v42 + 52) = 1;
								function_a640c(g27, -1);
								// branch -> 0x76368
							}
						}
					}
				}
				// 0x76368
				v6 = g31 + g32;
				*(int32_t *)g29 = *(int32_t *)g28;
				*(int32_t *)(v6 + 152) = *(int32_t *)(g30 + g33 + 396);
				v26 = v6;
				if (*(int32_t *)(v26 + 116) == 0) {
					// 0x7638c
					*(int32_t *)(v26 + 52) = 1;
					NetSendCmd(1, 89);
					// branch -> 0x763a0
				}
				// 0x763a0
				g34 = g26;
				result = PutMissile();
				// branch -> 0x763a8
				// 0x763a8
				g10 = v1;
				return result;
			}
			// 0x76318
			if (g27 == *(int32_t *)g35) {
				// 0x76324
				if (*(int32_t *)g28 == 0) {
					// 0x76330
					if (*(int32_t *)g29 == 0) {
						// 0x7633c
						if (*(int32_t *)g36 != 8) {
							// 0x76348
							v42 = g31 + g32;
							*(int32_t *)(v42 + 116) = 0;
							*(int32_t *)(v42 + 52) = 1;
							function_a640c(g27, -1);
							// branch -> 0x76368
						}
					}
				}
			}
			// 0x76368
			v6 = g31 + g32;
			*(int32_t *)g29 = *(int32_t *)g28;
			*(int32_t *)(v6 + 152) = *(int32_t *)(g30 + g33 + 396);
			v26 = v6;
			if (*(int32_t *)(v26 + 116) == 0) {
				// 0x7638c
				*(int32_t *)(v26 + 52) = 1;
				NetSendCmd(1, 89);
				// branch -> 0x763a0
			}
			// 0x763a0
			g34 = g26;
			result = PutMissile();
			// branch -> 0x763a8
		} else {
			// 0x7618c
			v43 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
			if (v43 != *(int32_t *)(g30 + g33 + 52)) {
				// 0x761a4
				*(int32_t *)(g31 + g32 + 52) = 1;
				// branch -> 0x761b0
			}
			// 0x761b0
			g34 = g26;
			result = PutMissile();
			// branch -> 0x763a8
		}
		// 0x763a8
		g10 = v1;
		return result;
	}
	// 0x76154
	if (*(int32_t *)(g30 + g33 + 112) == 2) {
		int32_t *v49 = (int32_t *)g29; // 0x76164
		*v49 = *v49 + 1;
		// branch -> 0x76180
	} else {
		int32_t *v50 = (int32_t *)g28; // 0x76174
		*v50 = *v50 + 1;
		// branch -> 0x76180
	}
	// 0x76180
	if (g27 == *(int32_t *)g35) {
		// 0x761bc
		v20 = g33;
		v27 = g30;
		v33 = v27 + v20;
		v28 = v33 + 424;
		v6 = v28;
		if (*(int32_t *)v28 >= 1) {
			// 0x761cc
			if (*(char *)(v33 + 29) != 0) {
				// 0x761e8
				v34 = g31 + g32;
				v29 = v34 + 148;
				v44 = *(int32_t *)v29;
				v17 = v44;
				g29 = v29;
				v30 = v20 + v27 + 404;
				v45 = *(int32_t *)v30;
				g28 = v30;
				if (v44 <= v45) {
					// 0x76318
					if (g27 == *(int32_t *)g35) {
						// 0x76324
						if (*(int32_t *)g28 == 0) {
							// 0x76330
							if (*(int32_t *)g29 == 0) {
								// 0x7633c
								if (*(int32_t *)g36 != 8) {
									// 0x76348
									v42 = g31 + g32;
									*(int32_t *)(v42 + 116) = 0;
									*(int32_t *)(v42 + 52) = 1;
									function_a640c(g27, -1);
									// branch -> 0x76368
								}
							}
						}
					}
					// 0x76368
					v6 = g31 + g32;
					*(int32_t *)g29 = *(int32_t *)g28;
					*(int32_t *)(v6 + 152) = *(int32_t *)(g30 + g33 + 396);
					v26 = v6;
					if (*(int32_t *)(v26 + 116) == 0) {
						// 0x7638c
						*(int32_t *)(v26 + 52) = 1;
						NetSendCmd(1, 89);
						// branch -> 0x763a0
					}
					// 0x763a0
					g34 = g26;
					result = PutMissile();
					// branch -> 0x763a8
					// 0x763a8
					g10 = v1;
					return result;
				}
				// 0x76204
				v35 = v44 - v45;
				v14 = v35;
				v21 = v35;
				if (*(int32_t *)(v34 + 48) >= 1) {
					// 0x76218
					v48 = 0x55555556 * (int64_t)v35;
					v36 = v35 - ((int32_t)(v48 / 0x100000000) + (int32_t)(v48 / 0x8000000000000000));
					v14 = v36;
					v21 = v36;
					// branch -> 0x76230
				}
				// 0x76230
				if (v21 <= 0xffffffff) {
					// 0x76238
					v14 = 0;
					// branch -> 0x7623c
				}
				// 0x7623c
				v22 = g23;
				v19 = 1;
				*(int32_t *)*(int32_t *)(v22 - 0x76f4) = 1;
				*(int32_t *)*(int32_t *)(v22 - 0x76f0) = v19;
				v37 = *(int32_t *)v6;
				v31 = v14;
				if (v37 < v31) {
					// 0x7628c
					v18 = g31 + g32;
					v16 = g30 + g33;
					*(int32_t *)g28 = v37 - v31 + v17;
					v15 = 0;
					v46 = *(int32_t *)(v18 + 152);
					v40 = *(int32_t *)v6 - v14 + v46;
					*(int32_t *)(v16 + 396) = v40;
					*(int32_t *)v6 = v15;
					v23 = v16;
					v47 = *(int32_t *)(v23 + 420);
					*(int32_t *)(v23 + 416) = v47 - *(int32_t *)(v23 + 428);
					*(int32_t *)(v18 + 116) = v15;
					*(int32_t *)(v18 + 52) = v19;
					v24 = g28;
					v25 = v24;
					if (*(int32_t *)v24 <= 0xffffffff) {
						// 0x762e4
						g37 = 0;
						SetPlayerHitPoints(g27);
						v25 = g28;
						// branch -> 0x762f0
					}
					// 0x762f0
					if (*(int32_t *)v25 < 64) {
						// 0x762fc
						v41 = *(int32_t *)g35;
						if (g27 == v41) {
							// 0x76308
							function_a640c(v41, *(int32_t *)(g31 + g32 + 176));
							// branch -> 0x76318
						}
					}
				} else {
					// 0x7625c
					*(int32_t *)g28 = v17;
					v38 = g30 + g33;
					*(int32_t *)(v38 + 396) = *(int32_t *)(g31 + g32 + 152);
					v32 = (int32_t *)v6;
					*v32 = *v32 - v14;
					v39 = (int32_t *)(v38 + 416);
					*v39 = *v39 - v14;
					// branch -> 0x76318
				}
				// 0x76318
				if (g27 == *(int32_t *)g35) {
					// 0x76324
					if (*(int32_t *)g28 == 0) {
						// 0x76330
						if (*(int32_t *)g29 == 0) {
							// 0x7633c
							if (*(int32_t *)g36 != 8) {
								// 0x76348
								v42 = g31 + g32;
								*(int32_t *)(v42 + 116) = 0;
								*(int32_t *)(v42 + 52) = 1;
								function_a640c(g27, -1);
								// branch -> 0x76368
							}
						}
					}
				}
				// 0x76368
				v6 = g31 + g32;
				*(int32_t *)g29 = *(int32_t *)g28;
				*(int32_t *)(v6 + 152) = *(int32_t *)(g30 + g33 + 396);
				v26 = v6;
				if (*(int32_t *)(v26 + 116) == 0) {
					// 0x7638c
					*(int32_t *)(v26 + 52) = 1;
					NetSendCmd(1, 89);
					// branch -> 0x763a0
				}
				// 0x763a0
				g34 = g26;
				result = PutMissile();
				// branch -> 0x763a8
				// 0x763a8
				g10 = v1;
				return result;
			}
		}
		// 0x761dc
		*(int32_t *)(g31 + g32 + 116) = 0;
		// branch -> 0x761e8
		// 0x761e8
		v34 = g31 + g32;
		v29 = v34 + 148;
		v44 = *(int32_t *)v29;
		v17 = v44;
		g29 = v29;
		v30 = g33 + g30 + 404;
		v45 = *(int32_t *)v30;
		g28 = v30;
		if (v44 > v45) {
			// 0x76204
			v35 = v44 - v45;
			v14 = v35;
			v21 = v35;
			if (*(int32_t *)(v34 + 48) >= 1) {
				// 0x76218
				v48 = 0x55555556 * (int64_t)v35;
				v36 = v35 - ((int32_t)(v48 / 0x100000000) + (int32_t)(v48 / 0x8000000000000000));
				v14 = v36;
				v21 = v36;
				// branch -> 0x76230
			}
			// 0x76230
			if (v21 <= 0xffffffff) {
				// 0x76238
				v14 = 0;
				// branch -> 0x7623c
			}
			// 0x7623c
			v22 = g23;
			v19 = 1;
			*(int32_t *)*(int32_t *)(v22 - 0x76f4) = 1;
			*(int32_t *)*(int32_t *)(v22 - 0x76f0) = v19;
			v37 = *(int32_t *)v6;
			v31 = v14;
			if (v37 < v31) {
				// 0x7628c
				v18 = g31 + g32;
				v16 = g30 + g33;
				*(int32_t *)g28 = v37 - v31 + v17;
				v15 = 0;
				v46 = *(int32_t *)(v18 + 152);
				v40 = *(int32_t *)v6 - v14 + v46;
				*(int32_t *)(v16 + 396) = v40;
				*(int32_t *)v6 = v15;
				v23 = v16;
				v47 = *(int32_t *)(v23 + 420);
				*(int32_t *)(v23 + 416) = v47 - *(int32_t *)(v23 + 428);
				*(int32_t *)(v18 + 116) = v15;
				*(int32_t *)(v18 + 52) = v19;
				v24 = g28;
				v25 = v24;
				if (*(int32_t *)v24 <= 0xffffffff) {
					// 0x762e4
					g37 = 0;
					SetPlayerHitPoints(g27);
					v25 = g28;
					// branch -> 0x762f0
				}
				// 0x762f0
				if (*(int32_t *)v25 < 64) {
					// 0x762fc
					v41 = *(int32_t *)g35;
					if (g27 == v41) {
						// 0x76308
						function_a640c(v41, *(int32_t *)(g31 + g32 + 176));
						// branch -> 0x76318
					}
				}
			} else {
				// 0x7625c
				*(int32_t *)g28 = v17;
				v38 = g30 + g33;
				*(int32_t *)(v38 + 396) = *(int32_t *)(g31 + g32 + 152);
				v32 = (int32_t *)v6;
				*v32 = *v32 - v14;
				v39 = (int32_t *)(v38 + 416);
				*v39 = *v39 - v14;
				// branch -> 0x76318
			}
			// 0x76318
			if (g27 == *(int32_t *)g35) {
				// 0x76324
				if (*(int32_t *)g28 == 0) {
					// 0x76330
					if (*(int32_t *)g29 == 0) {
						// 0x7633c
						if (*(int32_t *)g36 != 8) {
							// 0x76348
							v42 = g31 + g32;
							*(int32_t *)(v42 + 116) = 0;
							*(int32_t *)(v42 + 52) = 1;
							function_a640c(g27, -1);
							// branch -> 0x76368
						}
					}
				}
			}
			// 0x76368
			v6 = g31 + g32;
			*(int32_t *)g29 = *(int32_t *)g28;
			*(int32_t *)(v6 + 152) = *(int32_t *)(g30 + g33 + 396);
			v26 = v6;
			if (*(int32_t *)(v26 + 116) == 0) {
				// 0x7638c
				*(int32_t *)(v26 + 52) = 1;
				NetSendCmd(1, 89);
				// branch -> 0x763a0
			}
			// 0x763a0
			g34 = g26;
			result = PutMissile();
			// branch -> 0x763a8
			// 0x763a8
			g10 = v1;
			return result;
		}
		// 0x76318
		if (g27 == *(int32_t *)g35) {
			// 0x76324
			if (*(int32_t *)g28 == 0) {
				// 0x76330
				if (*(int32_t *)g29 == 0) {
					// 0x7633c
					if (*(int32_t *)g36 != 8) {
						// 0x76348
						v42 = g31 + g32;
						*(int32_t *)(v42 + 116) = 0;
						*(int32_t *)(v42 + 52) = 1;
						function_a640c(g27, -1);
						// branch -> 0x76368
					}
				}
			}
		}
		// 0x76368
		v6 = g31 + g32;
		*(int32_t *)g29 = *(int32_t *)g28;
		*(int32_t *)(v6 + 152) = *(int32_t *)(g30 + g33 + 396);
		v26 = v6;
		if (*(int32_t *)(v26 + 116) == 0) {
			// 0x7638c
			*(int32_t *)(v26 + 52) = 1;
			NetSendCmd(1, 89);
			// branch -> 0x763a0
		}
		// 0x763a0
		g34 = g26;
		result = PutMissile();
		// branch -> 0x763a8
	} else {
		// 0x7618c
		v43 = (int32_t) * (char *)*(int32_t *)(g23 - 0x77e4);
		if (v43 != *(int32_t *)(g30 + g33 + 52)) {
			// 0x761a4
			*(int32_t *)(g31 + g32 + 52) = 1;
			// branch -> 0x761b0
		}
		// 0x761b0
		g34 = g26;
		result = PutMissile();
		// branch -> 0x763a8
	}
	// 0x763a8
	g10 = v1;
	return result;
}

// Address range: 0x763bc - 0x764f4
int32_t MI_Etherealize(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x763c8
	int32_t v2 = 180 * a1;                   // 0x763cc
	g36 = *(int32_t *)(g23 - 0x77a8);
	int32_t v3 = v1 + v2;        // 0x763d4
	int32_t v4 = v3;             // r3
	int32_t v5 = v3 + 116;       // 0x763ec
	int32_t *v6 = (int32_t *)v5; // 0x763ec
	*v6 = *v6 - 1;
	int32_t v7 = 0x55ec * *(int32_t *)(v4 + 120); // 0x763fc
	int32_t v8 = g36 + v7;                        // 0x76400
	int32_t v9 = *(int32_t *)(v8 + 56);           // 0x76404
	*(int32_t *)(v4 + 4) = v9;
	int32_t v10 = *(int32_t *)(v8 + 60); // 0x7640c
	*(int32_t *)(v4 + 8) = v10;
	*(int32_t *)(v4 + 36) = 0x10000 * *(int32_t *)(v8 + 96);
	*(int32_t *)(v4 + 40) = 0x10000 * *(int32_t *)(v8 + 100);
	if (*(int32_t *)v8 == 3) {
		// 0x76438
		*(int32_t *)(v4 + 28) = *(int32_t *)(v8 + 64);
		*(int32_t *)(v4 + 32) = *(int32_t *)(v8 + 68);
		// branch -> 0x76454
	} else {
		// 0x7644c
		*(int32_t *)(v4 + 28) = v9;
		*(int32_t *)(v4 + 32) = v10;
		// branch -> 0x76454
	}
	// 0x76454
	g34 = a1;
	GetMissilePos();
	int32_t v11;       // r4
	int32_t v12;       // 0x764cc
	int32_t v13;       // 0x76498
	char *v14;         // 0x76498
	unsigned char v15; // 0x764cc
	if (*(int32_t *)v8 != 3) {
		// 0x76494
		v13 = v7 + g36 + 284;
		v14 = (char *)v13;
		*v14 = *v14 | 1;
		v11 = v13;
		if (*(int32_t *)v5 == 0) {
			// 0x764c0
			*(int32_t *)(v2 + v1 + 52) = 1;
			v12 = v11;
			v15 = *(char *)v12;
			*(char *)v12 = (char)__asm_rlwinm((int32_t)v15, 0, 0, 30);
			// branch -> 0x764d8
			// 0x764d8
			g34 = a1;
			return PutMissile();
		}
		// 0x764b0
		if (*(int32_t *)(v7 + g36 + 404) <= 0) {
			// 0x764c0
			*(int32_t *)(v2 + v1 + 52) = 1;
			v12 = v11;
			v15 = *(char *)v12;
			*(char *)v12 = (char)__asm_rlwinm((int32_t)v15, 0, 0, 30);
			// branch -> 0x764d8
		}
		// 0x764d8
		g34 = a1;
		return PutMissile();
	}
	// 0x76468
	if (*(int32_t *)(v7 + g36 + 112) == 2) {
		int32_t *v16 = (int32_t *)(v3 + 4); // 0x76478
		*v16 = *v16 + 1;
		// branch -> 0x76494
	} else {
		int32_t *v17 = (int32_t *)(v3 + 8); // 0x76488
		*v17 = *v17 + 1;
		// branch -> 0x76494
	}
	// 0x76494
	v13 = v7 + g36 + 284;
	v14 = (char *)v13;
	*v14 = *v14 | 1;
	v11 = v13;
	if (*(int32_t *)v5 == 0) {
		// 0x764c0
		*(int32_t *)(v2 + v1 + 52) = 1;
		v12 = v11;
		v15 = *(char *)v12;
		*(char *)v12 = (char)__asm_rlwinm((int32_t)v15, 0, 0, 30);
		// branch -> 0x764d8
	} else {
		// 0x764b0
		if (*(int32_t *)(v7 + g36 + 404) <= 0) {
			// 0x764c0
			*(int32_t *)(v2 + v1 + 52) = 1;
			v12 = v11;
			v15 = *(char *)v12;
			*(char *)v12 = (char)__asm_rlwinm((int32_t)v15, 0, 0, 30);
			// branch -> 0x764d8
		}
	}
	// 0x764d8
	g34 = a1;
	return PutMissile();
}

// Address range: 0x764f4 - 0x7678c
int32_t MI_Firemove(int32_t a1)
{
	int32_t v1 = 180 * a1;                   // 0x76504
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x76508
	g36 = v2;
	int32_t v3 = v2 + v1;                                // 0x7650c
	int32_t v4 = v3;                                     // r25
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x5f30); // bp-104
	int32_t v6 = v3 + 4;                                 // 0x76598
	int32_t *v7 = (int32_t *)v6;                         // 0x76598
	*v7 = *v7 - 1;
	int32_t v8 = v3 + 8;         // 0x765a4
	int32_t *v9 = (int32_t *)v8; // 0x765a4
	*v9 = *v9 - 1;
	int32_t *v10 = (int32_t *)(v3 + 16); // 0x765b0
	*v10 = *v10 + 32;
	int32_t *v11 = (int32_t *)(v3 + 148); // 0x765bc
	*v11 = *v11 + 1;
	if (*(int32_t *)(v3 + 148) == *(int32_t *)(v4 + 76)) {
		// 0x765d8
		SetMissDir(a1, 1);
		g37 = 11;
		*(int32_t *)(v4 + 96) = random(82) + 1;
		// branch -> 0x765f8
	}
	int32_t v12 = v1 + g36; // 0x765f8
	v4 = v12;
	int32_t *v13 = (int32_t *)(v12 + 36); // 0x765fc
	g34 = a1;
	*v13 = *(int32_t *)(v12 + 20) + *v13;
	int32_t *v14 = (int32_t *)(v4 + 40); // 0x76610
	*v14 = *(int32_t *)(v4 + 24) + *v14;
	GetMissilePos();
	int32_t v15 = *(int32_t *)(v4 + 128); // 0x76624
	int32_t v16 = *(int32_t *)v8;         // 0x76638
	g41 = v16;
	g42 = 0;
	function_6f3d4(a1, v15, 0, *(int32_t *)v6, v16);
	if (*(int32_t *)(g29 + 132) == 1) {
		// 0x76658
		*(int32_t *)g28 = g27;
		// branch -> 0x7665c
	}
	// 0x7665c
	if (*(int32_t *)g28 == 0) {
		int32_t v17 = g35 + g36; // 0x76668
		*(int32_t *)(v17 + 52) = 1;
		AddUnLight(*(int32_t *)(v17 + 140));
		// branch -> 0x7667c
	}
	int32_t v18 = g36;       // 0x7667c
	int32_t v19 = g35 + v18; // 0x7667c
	int32_t v20;             // r5
	int32_t v21;             // r7
	int32_t *v22;            // 0x766fc
	int32_t v23;             // 0x76700
	int32_t *v24;            // 0x7674c
	int32_t *v25;            // 0x7675c
	int32_t *v26;            // 0x76768
	int32_t *v27;            // 0x76700
	int32_t v28;             // 0x76744
	if (*(int32_t *)(v19 + 44) != 0) {
		// 0x766f8
		v22 = (int32_t *)g32;
		v23 = v19 + 156;
		v27 = (int32_t *)v23;
		v20 = v23;
		if (*v22 != *v27) {
			// 0x76720
			v21 = v19;
			*v27 = *v22;
			g39 = 8;
			*(int32_t *)(v21 + 160) = *(int32_t *)g33;
			v28 = *(int32_t *)(v21 + 160);
			function_cba34(*(int32_t *)(v19 + 140), *(int32_t *)v20, v28);
			// branch -> 0x7674c
			// 0x7674c
			v24 = (int32_t *)g32;
			g34 = g30;
			*v24 = *v24 + 1;
			v25 = (int32_t *)g33;
			*v25 = *v25 + 1;
			v26 = (int32_t *)g31;
			*v26 = *v26 - 32;
			return PutMissile();
		}
		// 0x7670c
		if (*(int32_t *)g33 != *(int32_t *)(v19 + 160)) {
			// 0x76720
			v21 = v19;
			*v27 = *v22;
			g39 = 8;
			*(int32_t *)(v21 + 160) = *(int32_t *)g33;
			v28 = *(int32_t *)(v21 + 160);
			function_cba34(*(int32_t *)(v19 + 140), *(int32_t *)v20, v28);
			// branch -> 0x7674c
		}
		// 0x7674c
		v24 = (int32_t *)g32;
		g34 = g30;
		*v24 = *v24 + 1;
		v25 = (int32_t *)g33;
		*v25 = *v25 + 1;
		v26 = (int32_t *)g31;
		*v26 = *v26 - 32;
		return PutMissile();
	}
	// 0x7668c
	if (*(int32_t *)g28 != 0) {
		int32_t v29 = v19 + 152; // 0x76698
		int32_t v30;             // 0x766c8
		int32_t v31;
		if (*(int32_t *)v29 == 0) {
			int32_t v32 = AddLight(*(int32_t *)g32, *(int32_t *)g33, v5); // 0x766bc
			*(int32_t *)(v19 + 140) = v32;
			v31 = &v5;
			v30 = g36;
			// branch -> 0x766c4
		} else {
			// 0x76698
			v31 = &v5;
			v30 = v18;
			// branch -> 0x766c4
		}
		int32_t v33 = *(int32_t *)(v30 + g35 + 140); // 0x766d0
		g39 = *(int32_t *)(4 * *(int32_t *)v29 + v31);
		function_cba34(v33, *(int32_t *)g32, *(int32_t *)g33);
		int32_t *v34 = (int32_t *)v29; // 0x766e8
		*v34 = *v34 + 1;
		// branch -> 0x7674c
		// 0x7674c
		v24 = (int32_t *)g32;
		g34 = g30;
		*v24 = *v24 + 1;
		v25 = (int32_t *)g33;
		*v25 = *v25 + 1;
		v26 = (int32_t *)g31;
		*v26 = *v26 - 32;
		return PutMissile();
	}
	// 0x766f8
	v22 = (int32_t *)g32;
	v23 = v19 + 156;
	v27 = (int32_t *)v23;
	v20 = v23;
	if (*v22 == *v27) {
		// 0x7670c
		if (*(int32_t *)g33 != *(int32_t *)(v19 + 160)) {
			// 0x76720
			v21 = v19;
			*v27 = *v22;
			g39 = 8;
			*(int32_t *)(v21 + 160) = *(int32_t *)g33;
			v28 = *(int32_t *)(v21 + 160);
			function_cba34(*(int32_t *)(v19 + 140), *(int32_t *)v20, v28);
			// branch -> 0x7674c
		}
	} else {
		// 0x76720
		v21 = v19;
		*v27 = *v22;
		g39 = 8;
		*(int32_t *)(v21 + 160) = *(int32_t *)g33;
		v28 = *(int32_t *)(v21 + 160);
		function_cba34(*(int32_t *)(v19 + 140), *(int32_t *)v20, v28);
		// branch -> 0x7674c
	}
	// 0x7674c
	v24 = (int32_t *)g32;
	g34 = g30;
	*v24 = *v24 + 1;
	v25 = (int32_t *)g33;
	*v25 = *v25 + 1;
	v26 = (int32_t *)g31;
	*v26 = *v26 - 32;
	return PutMissile();
}

// Address range: 0x7678c - 0x769f8
int32_t MI_Guardian(int32_t a1)
{
	g33 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x76798
	g25 = v1;
	int32_t v2 = 180 * a1; // 0x7679c
	g27 = v2;
	int32_t v3 = v1 + v2; // 0x767a0
	g36 = 0;
	g35 = 0;
	int32_t v4 = v3 + 116;       // 0x767b8
	int32_t *v5 = (int32_t *)v4; // 0x767b8
	*v5 = *v5 - 1;
	g26 = v4;
	int32_t v6 = v3 + 152;       // 0x767c4
	int32_t *v7 = (int32_t *)v6; // 0x767c4
	uint32_t v8 = *v7;           // 0x767c4
	if (v8 >= 1) {
		// 0x767d0
		*v7 = v8 - 1;
		v4 = g26;
		// branch -> 0x767d8
	}
	int32_t v9 = g27 + g25; // 0x767d8
	int32_t v10;            // 0x76810
	if (*(int32_t *)v4 == *(int32_t *)(v9 + 148)) {
		// 0x76804
		SetMissDir(g33, 1);
		v10 = g26;
		// branch -> 0x76810
	} else {
		// 0x767ec
		if (*(int32_t *)(v9 + 44) == 2) {
			// 0x767f8
			if (*(int32_t *)v6 == 0) {
				// 0x76804
				SetMissDir(g33, 1);
				v10 = g26;
				// branch -> 0x76810
			} else {
				v10 = v4;
			}
		} else {
			v10 = v4;
		}
	}
	int32_t v11 = *(int32_t *)v10; // 0x76810
	int32_t v12;                   // 0x769ac
	int32_t v13;                   // 0x76960
	int32_t v14;                   // 0x76974
	int32_t *v15;                  // 0x76980
	int32_t *v16;                  // 0x7698c
	int32_t v17;                   // 0x769c8
	int32_t v18;                   // 0x7698c
	int32_t v19;                   // 0x769b4
	if (v11 == (v11 & -16)) {
		int32_t v20 = *(int32_t *)(g23 - 0x7100); // 0x76828
		g28 = v20;
		g31 = g27 + g25;
		g29 = 0;
		int32_t v21 = 0; // 0x76940
		                 // branch -> 0x76940
	lab_0x76940_2:
		while (true) {
			// 0x76940
			if (v21 != -1) {
				int32_t v22 = 10;       // 0x7691c11
				int32_t v23 = v20 + 10; // 0x76880
				int32_t v24 = v21;      // 0x76928
				// branch -> 0x76928
				while (true) {
					// 0x76928
					int32_t v25; // 0x76930
					int32_t v26; // 0x76934
					if (v24 != -1) {
						unsigned char v27 = *(char *)v23; // 0x76848
						int32_t v28 = v27;                // 0x76848
						char *v29 = (char *)(v23 + 1);    // 0x76854
						int32_t v30;                      // 0x769406
						if (v27 == 0) {
							// 0x76854
							if (*v29 == 0) {
								v30 = v24;
							lab_0x76930_4:
								// 0x76930
								v25 = g28 + 30;
								g28 = v25;
								v26 = g29 + 1;
								g29 = v26;
								if (v26 > 22) {
									// break (via goto) -> 0x76948
									goto lab_0x76948_2;
								}
								v20 = v25;
								v21 = v30;
								// continue (via goto) -> 0x76940
								goto lab_0x76940_2;
							}
						}
						// 0x76860
						int32_t v31; // 0x76918
						int32_t v32; // 0x7691c
						int32_t v33; // 0x769405
						if (g36 == v28) {
							// 0x76868
							if (g35 == (int32_t)*v29) {
								v32 = v22;
								v31 = v23;
								v33 = v24;
							lab_0x76918:;
								int32_t v34 = v32 - 2; // 0x7691c
								if (v34 < 0) {
									// break -> 0x76930
									break;
								}
								v22 = v34;
								v23 = v31 - 2;
								v24 = v33;
								// continue -> 0x76928
								continue;
							}
						}
						int32_t v35 = g31;                                   // 0x76874
						int32_t v36 = (int32_t)*v29 + *(int32_t *)(v35 + 8); // 0x76888
						if (function_74170(g33, *(int32_t *)(v35 + 4) + v28, v36) == -1) {
							v30 = -1;
							goto lab_0x76930_4;
						}
						int32_t v37 = g32;                                                   // 0x76898
						int32_t v38 = g31;                                                   // 0x768a0
						int32_t v39 = *(int32_t *)(v38 + 4) - (int32_t) * (char *)v37;       // 0x768ac
						int32_t v40 = *(int32_t *)(v38 + 8) - (int32_t) * (char *)(v37 + 1); // 0x768b0
						if (function_74170(g33, v39, v40) == -1) {
							v30 = -1;
							goto lab_0x76930_4;
						}
						int32_t v41 = g31;                                                   // 0x768c0
						int32_t v42 = g32;                                                   // 0x768c8
						int32_t v43 = (int32_t) * (char *)v42 + *(int32_t *)(v41 + 4);       // 0x768d4
						int32_t v44 = *(int32_t *)(v41 + 8) - (int32_t) * (char *)(v42 + 1); // 0x768d8
						if (function_74170(g33, v43, v44) == -1) {
							v30 = -1;
							goto lab_0x76930_4;
						}
						int32_t v45 = g32;                                                   // 0x768e8
						int32_t v46 = g31;                                                   // 0x768f0
						int32_t v47 = *(int32_t *)(v46 + 4) - (int32_t) * (char *)v45;       // 0x768fc
						int32_t v48 = (int32_t) * (char *)(v45 + 1) + *(int32_t *)(v46 + 8); // 0x76900
						int32_t v49 = function_74170(g33, v47, v48);                         // 0x76904
						if (v49 == -1) {
							v30 = -1;
							goto lab_0x76930_4;
						}
						int32_t v50 = g32; // 0x76910
						g36 = (int32_t) * (char *)v50;
						g35 = (int32_t) * (char *)(v50 + 1);
						v32 = g30;
						v31 = v50;
						v33 = v49;
						// branch -> 0x76918
						goto lab_0x76918;
					}
					// 0x76930
					v25 = g28 + 30;
					g28 = v25;
					v26 = g29 + 1;
					g29 = v26;
					if (v26 > 22) {
						// break (via goto) -> 0x76948
						goto lab_0x76948_2;
					}
					v20 = v25;
					v21 = -1;
					// continue (via goto) -> 0x76940
					goto lab_0x76940_2;
				}
				// 0x76948
				// branch -> 0x76948
				// 0x76948
				if (*(int32_t *)g26 == 14) {
					// 0x76954
					SetMissDir(g33, 0);
					v13 = g27 + g25;
					*(int32_t *)(v13 + 96) = 15;
					*(int32_t *)(v13 + 92) = -1;
					// branch -> 0x76974
				}
				// 0x76974
				v14 = g27 + g25;
				v15 = (int32_t *)(v14 + 156);
				*v15 = *v15 + *(int32_t *)(v14 + 92);
				v16 = (int32_t *)(v14 + 156);
				v18 = *v16;
				g39 = v18;
				if (v18 < 16) {
					// 0x769a4
					if (v18 >= 1) {
						// 0x769ac
						v12 = v14;
						v19 = *(int32_t *)(v12 + 8);
						function_cba34(*(int32_t *)(v12 + 140), *(int32_t *)(v12 + 4), v19);
						// branch -> 0x769bc
					}
				} else {
					// 0x76998
					*v16 = 15;
					// branch -> 0x769bc
				}
				// 0x769bc
				if (*(int32_t *)g26 != 0) {
					// 0x769dc
					g34 = g33;
					return PutMissile();
				}
				// 0x769c8
				v17 = g27 + g25;
				*(int32_t *)(v17 + 52) = 1;
				AddUnLight(*(int32_t *)(v17 + 140));
				// branch -> 0x769dc
				// 0x769dc
				g34 = g33;
				return PutMissile();
			}
		lab_0x76948_2:;
			// 0x76948
			// branch -> 0x76948
		}
	}
	// 0x76948
	if (*(int32_t *)v10 == 14) {
		// 0x76954
		SetMissDir(g33, 0);
		v13 = g27 + g25;
		*(int32_t *)(v13 + 96) = 15;
		*(int32_t *)(v13 + 92) = -1;
		// branch -> 0x76974
	}
	// 0x76974
	v14 = g27 + g25;
	v15 = (int32_t *)(v14 + 156);
	*v15 = *v15 + *(int32_t *)(v14 + 92);
	v16 = (int32_t *)(v14 + 156);
	v18 = *v16;
	g39 = v18;
	if (v18 >= 16) {
		// 0x76998
		*v16 = 15;
		// branch -> 0x769bc
		// 0x769bc
		if (*(int32_t *)g26 == 0) {
			// 0x769c8
			v17 = g27 + g25;
			*(int32_t *)(v17 + 52) = 1;
			AddUnLight(*(int32_t *)(v17 + 140));
			// branch -> 0x769dc
		}
		// 0x769dc
		g34 = g33;
		return PutMissile();
	}
	// 0x769a4
	if (v18 >= 1) {
		// 0x769ac
		v12 = v14;
		v19 = *(int32_t *)(v12 + 8);
		function_cba34(*(int32_t *)(v12 + 140), *(int32_t *)(v12 + 4), v19);
		// branch -> 0x769bc
	}
	// 0x769bc
	if (*(int32_t *)g26 == 0) {
		// 0x769c8
		v17 = g27 + g25;
		*(int32_t *)(v17 + 52) = 1;
		AddUnLight(*(int32_t *)(v17 + 140));
		// branch -> 0x769dc
	}
	// 0x769dc
	g34 = g33;
	return PutMissile();
}

// Address range: 0x769f8 - 0x76bdc
int32_t MI_Chain(int32_t a1)
{
	// 0x769f8
	g36 = *(int32_t *)(g23 - 0x70e0);
	int32_t v1 = 9;                              // ctr
	int32_t v2;                                  // bp-152
	int32_t v3 = &v2;                            // 0x76a30
	int32_t v4 = *(int32_t *)(g23 - 0x5f34) - 8; // 0x76a28
	// branch -> 0x76a28
	while (true) {
		int32_t v5 = v4 + 8; // 0x76a28
		int32_t v6 = v5;     // r5
		int32_t v7 = v3 + 8; // 0x76a30
		*(int32_t *)v7 = *(int32_t *)v5;
		*(int32_t *)(v3 + 12) = *(int32_t *)(v4 + 12);
		int32_t v8 = v1 - 1; // 0x76a38
		v1 = v8;
		if (v8 == 0) {
			// 0x76a3c
			*(int32_t *)(v7 + 8) = *(int32_t *)(v6 + 8);
			int32_t v9 = 180 * a1 + *(int32_t *)(g23 - 0x7664);                     // 0x76a48
			int32_t v10 = v9 + 148;                                                 // 0x76a4c
			int32_t v11 = v9 + 152;                                                 // 0x76a50
			int32_t v12 = *(int32_t *)(v9 + 4);                                     // 0x76a54
			int32_t v13 = *(int32_t *)(v9 + 8);                                     // 0x76a58
			int32_t v14 = GetDirection(v12, v13, *(int32_t *)v10, *(int32_t *)v11); // 0x76a70
			v2 = 1;
			int32_t v15 = v9 + 48;         // 0x76a88
			int32_t v16 = *(int32_t *)v15; // 0x76a88
			g20 = v15;
			g13 = *(int32_t *)(v9 + 120);
			int32_t v17 = *(int32_t *)v11; // 0x76aa0
			AddMissile(v12, v13, *(int32_t *)v10, v17, v14, 7, 0, 1, v16);
			int32_t v18 = *(int32_t *)g20 + 3; // 0x76aac
			int32_t v19 = v18 > 19 ? 19 : v18;
			g22 = v19;
			int32_t v20;        // bp-140
			int32_t v21 = &v20; // 0x76ac0
			g31 = v21;
			g30 = g29 + g33;
			g25 = 1;
			if (v19 > 1) {
				int32_t v22 = 1; // 0x76b9416
				while (true) {
					int32_t v23 = g36 + *(int32_t *)v21; // 0x76ad4
					unsigned char v24 = *(char *)v23;    // 0x76ad8
					int32_t v25 = v24;                   // 0x76ad8
					g24 = v25;
					int32_t v26 = v23 + 1; // 0x76adc
					int32_t v27 = v19;     // 0x76b98
					int32_t v28 = v22;     // 0x76b94
					int32_t v29 = v21;     // 0x76b90
					if (v24 != 0) {
						while (true) {
							int32_t v30 = g28;                                 // 0x76af0
							int32_t v31 = v30 + (int32_t) * (char *)v26;       // 0x76af0
							int32_t v32 = g27;                                 // 0x76af8
							int32_t v33 = v32 + (int32_t) * (char *)(v26 + 1); // 0x76af8
							int32_t v34 = v33;                                 // r17
							int32_t v35 = v31;                                 // r18
							int32_t v36 = v25;                                 // 0x76b84
							int32_t v37 = v26;                                 // 0x76b80
							if (v31 >= 1) {
								// 0x76b04
								if (v31 <= 111) {
									// 0x76b0c
									if (v33 >= 1) {
										// 0x76b14
										if (v33 <= 111) {
											// 0x76b1c
											if (*(int16_t *)(*(int32_t *)g35 + 2 * v33 + 224 * v31) >= 1) {
												int32_t v38 = GetDirection(v30, v32, v31, v33); // 0x76b48
												v2 = 1;
												int32_t v39 = *(int32_t *)(g30 + 48); // 0x76b64
												g13 = g26;
												AddMissile(g28, g27, v35, v34, v38, 7, 0, 1, v39);
												v36 = g24;
												v37 = g32;
												// branch -> 0x76b80
											} else {
												v36 = v25;
												v37 = v26;
											}
										} else {
											v36 = v25;
											v37 = v26;
										}
									} else {
										v36 = v25;
										v37 = v26;
									}
								} else {
									v36 = v25;
									v37 = v26;
								}
							}
							int32_t v40 = v37 + 2; // 0x76b80
							int32_t v41 = v36 - 1; // 0x76b84
							g24 = v41;
							if (v41 <= 0) {
								// break -> 0x76b88
								break;
							}
							v25 = v41;
							v26 = v40;
							// continue -> 0x76ae4
						}
						// 0x76b88
						v27 = g22;
						v28 = g25;
						v29 = g31;
						// branch -> 0x76b90
					}
					int32_t v42 = v29 + 4; // 0x76b90
					g31 = v42;
					int32_t v43 = v28 + 1; // 0x76b94
					g25 = v43;
					if (v43 >= v27) {
						// break -> 0x76b98
						break;
					}
					v19 = v27;
					v22 = v43;
					v21 = v42;
					// continue -> 0x76ad0
				}
				// 0x76b98
				// branch -> 0x76ba0
			}
			int32_t v44 = g33 + g29;               // 0x76ba0
			int32_t *v45 = (int32_t *)(v44 + 116); // 0x76ba4
			int32_t result = *v45;                 // 0x76ba4
			*v45 = result - 1;
			if (*(int32_t *)(v44 + 116) != 0) {
				// 0x76bc8
				return result;
			}
			int32_t result2 = g29 + g33; // 0x76bbc
			*(int32_t *)(result2 + 52) = 1;
			// branch -> 0x76bc8
			// 0x76bc8
			return result2;
		}
		// 0x76a28
		v3 = v7;
		v4 = v6;
		// branch -> 0x76a28
	}
}

// Address range: 0x76bdc - 0x76c48
int32_t function_76bdc(int32_t a1)
{
	// 0x76bdc
	g34 = a1;
	int32_t v1 = 180 * g34;                  // 0x76be0
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x76be8
	int32_t v3 = v2 + v1;                    // 0x76bf0
	int32_t *v4 = (int32_t *)(v3 + 116);     // 0x76bf4
	*v4 = *v4 - 1;
	if (*(int32_t *)(v3 + 116) == 0) {
		// 0x76c0c
		*(int32_t *)(v1 + v2 + 52) = 1;
		// branch -> 0x76c18
	}
	int32_t v5 = v1 + v2; // 0x76c18
	if (*(int32_t *)(v5 + 96) == *(int32_t *)(v5 + 76)) {
		// 0x76c2c
		*(int32_t *)(v5 + 108) = 1;
		// branch -> 0x76c34
	}
	// 0x76c34
	return PutMissile();
}

// Address range: 0x76c48 - 0x76dfc
int32_t function_76c48(int32_t a1)
{
	int32_t v1 = 180 * a1;                               // 0x76c58
	int32_t v2 = *(int32_t *)(g23 - 0x7664);             // 0x76c5c
	int32_t v3 = v2 + v1;                                // 0x76c64
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x5f38); // bp-72
	int32_t v5 = *(int32_t *)(g23 - 0x70e8);             // r0
	int32_t *v6 = (int32_t *)(v3 + 116);                 // 0x76cc8
	*v6 = *v6 - 1;
	int32_t v7 = 28 * *(int32_t *)(v1 + v2); // 0x76cf0
	if (*(int32_t *)(v3 + 152) == 1) {
		// 0x76ce4
		*(char *)(v5 + v7 + 17) = 1;
		// branch -> 0x76d30
	} else {
		// 0x76d0c
		*(char *)(v5 + v7 + 17) = 2;
		// branch -> 0x76d30
	}
	int32_t v8 = v1 + v2;              // 0x76d30
	int32_t v9 = *(int32_t *)(v8 + 8); // 0x76d40
	g41 = v9;
	g42 = 0;
	function_6f3d4(a1, 0, *(int32_t *)(v8 + 4), v9, 0);
	int32_t v10 = g35 + g36;       // 0x76d50
	int32_t v11 = v10 + 148;       // 0x76d54
	int32_t v12 = *(int32_t *)v11; // 0x76d54
	int32_t result;
	int32_t *v13; // 0x76db0
	int32_t v14;  // 0x76dc8
	if (v12 == 0) {
		int32_t v15 = AddLight(*(int32_t *)g29, *(int32_t *)g30, v4); // 0x76d74
		*(int32_t *)(g35 + g36 + 140) = v15;
		// branch -> 0x76db0
		// 0x76db0
		v13 = (int32_t *)v11;
		*v13 = *v13 + 1;
		if (*(int32_t *)g33 == 0) {
			// 0x76dc8
			v14 = g35 + g36;
			*(int32_t *)(v14 + 52) = 1;
			result = AddUnLight(*(int32_t *)(v14 + 140));
			// branch -> 0x76de8
		} else {
			// 0x76de0
			g34 = g32;
			result = PutMissile();
			// branch -> 0x76de8
		}
		// 0x76de8
		return result;
	}
	// 0x76d84
	if (*(int32_t *)g33 != 0) {
		// 0x76d90
		g39 = *(int32_t *)(4 * v12 + (int32_t)&v4);
		function_cba34(*(int32_t *)(v10 + 140), *(int32_t *)g29, *(int32_t *)g30);
		// branch -> 0x76db0
	}
	// 0x76db0
	v13 = (int32_t *)v11;
	*v13 = *v13 + 1;
	if (*(int32_t *)g33 == 0) {
		// 0x76dc8
		v14 = g35 + g36;
		*(int32_t *)(v14 + 52) = 1;
		result = AddUnLight(*(int32_t *)(v14 + 140));
		// branch -> 0x76de8
	} else {
		// 0x76de0
		g34 = g32;
		result = PutMissile();
		// branch -> 0x76de8
	}
	// 0x76de8
	return result;
}

// Address range: 0x76dfc - 0x76f34
int32_t function_76dfc(int32_t a1)
{
	int32_t v1 = 180 * a1;                               // 0x76e10
	int32_t v2 = *(int32_t *)(g23 - 0x7664);             // 0x76e14
	int32_t v3 = v2 + v1;                                // 0x76e20
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x5f3c); // bp-56
	int32_t *v5 = (int32_t *)(v3 + 116);                 // 0x76e78
	*v5 = *v5 - 1;
	int32_t v6 = v1 + v2; // 0x76e90
	int32_t result;
	if (*(int32_t *)(v3 + 116) == 0) {
		// 0x76e90
		*(int32_t *)(v6 + 52) = 1;
		result = AddUnLight(*(int32_t *)(v6 + 140));
		// branch -> 0x76f18
	} else {
		int32_t v7 = v6 + 148;       // 0x76eac
		int32_t v8 = *(int32_t *)v7; // 0x76eac
		if (v8 == 0) {
			int32_t v9 = AddLight(*(int32_t *)(v6 + 4), *(int32_t *)(v6 + 8), v4); // 0x76ed0
			*(int32_t *)(v6 + 140) = v9;
			// branch -> 0x76f04
		} else {
			int32_t v10 = *(int32_t *)(v6 + 8); // 0x76ef8
			g39 = *(int32_t *)(4 * v8 + (int32_t)&v4);
			function_cba34(*(int32_t *)(v6 + 140), *(int32_t *)(v6 + 4), v10);
			// branch -> 0x76f04
		}
		int32_t *v11 = (int32_t *)v7; // 0x76f04
		g34 = a1;
		*v11 = *v11 + 1;
		result = PutMissile();
		// branch -> 0x76f18
	}
	// 0x76f18
	return result;
}

// Address range: 0x76f34 - 0x7701c
int32_t function_76f34(int32_t a1)
{
	// 0x76f34
	g34 = a1;
	int32_t v1 = 180 * g34;                  // 0x76f38
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x76f40
	int32_t v3 = v2 + v1;                    // 0x76f48
	int32_t v4 = v3 + 116;                   // 0x76f54
	if (*(int32_t *)v4 == *(int32_t *)(v3 + 76)) {
		int32_t *v5 = (int32_t *)(v3 + 4); // 0x76f60
		*v5 = *v5 + 1;
		int32_t *v6 = (int32_t *)(v3 + 8); // 0x76f6c
		*v6 = *v6 + 1;
		int32_t *v7 = (int32_t *)(v3 + 16); // 0x76f78
		*v7 = *v7 - 32;
		// branch -> 0x76f84
	}
	int32_t *v8 = (int32_t *)v4; // 0x76f84
	*v8 = *v8 - 1;
	int32_t result;
	if (*(int32_t *)v4 == 0) {
		int32_t v9 = v1 + v2;                     // 0x76f9c
		int32_t v10 = *(int32_t *)(g23 - 0x7754); // 0x76fa0
		*(int32_t *)(v9 + 52) = 1;
		int32_t v11 = *(int32_t *)(v9 + 120); // 0x76fac
		g13 = v11;
		int32_t v12; // 0x76fd4
		if (*(char *)(*(int32_t *)(v10 + 232 * v11 + 228) + 86) > 1) {
			// 0x76fd0
			v12 = 2;
			// branch -> 0x76fd4
		} else {
			// 0x76f9c
			v12 = 1;
			// branch -> 0x76fd4
		}
		int32_t v13 = v1 + v2;                // 0x76fd8
		int32_t v14 = *(int32_t *)(v13 + 48); // 0x76fe0
		int32_t v15 = *(int32_t *)(v13 + 4);  // 0x76ff4
		int32_t v16 = *(int32_t *)(v13 + 8);  // 0x76ff8
		int32_t v17 = *(int32_t *)(v13 + 44); // 0x76ffc
		result = AddMissile(v15, v16, g34, 0, v17, 59, 1, v12, v14);
		// branch -> 0x7700c
	} else {
		// 0x77008
		result = PutMissile();
		// branch -> 0x7700c
	}
	// 0x7700c
	return result;
}

// Address range: 0x7701c - 0x77184
int32_t function_7701c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77b8);            // r28
	int32_t v2 = *(int32_t *)(g23 - 0x7680);            // r29
	int32_t v3 = *(int32_t *)(g23 - 0x77a8);            // r31
	int32_t v4 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x77040
	g35 = v4;
	int32_t *v5 = (int32_t *)(v4 + 116); // 0x77044
	int32_t v6 = *v5;                    // 0x77044
	int32_t result = v6;                 // r3
	int32_t v7 = *(int32_t *)(v4 + 120); // r25
	*v5 = v6 - 1;
	if (*(int32_t *)(g35 + 116) > 0) {
		int32_t v8 = 0x55ec * v7;            // 0x7706c
		int32_t v9 = v3 + v8;                // 0x77074
		int32_t v10 = *(int32_t *)(v9 + 56); // 0x7707c
		int32_t v11 = *(int32_t *)(v9 + 60); // 0x77084
		*(char *)(v11 + 112 * v10 + *(int32_t *)v2) = 0;
		int32_t v12 = v9 + 56; // 0x77094
		int32_t v13 = v9 + 60; // 0x77098
		function_a40a8(*(int32_t *)v12, *(int32_t *)v13, 0);
		g36 = v8 + v3;
		*(int32_t *)v12 = *(int32_t *)(g35 + 4);
		*(int32_t *)v13 = *(int32_t *)(g35 + 8);
		*(int32_t *)(g36 + 64) = *(int32_t *)v12;
		*(int32_t *)(g36 + 68) = *(int32_t *)v13;
		*(int32_t *)(g36 + 88) = *(int32_t *)v12;
		*(int32_t *)(g36 + 92) = *(int32_t *)v13;
		function_a4114(*(int32_t *)v12, *(int32_t *)v13);
		*(int32_t *)(g35 + 148) = 1;
		int32_t v14 = *(int32_t *)v12; // 0x770f4
		int32_t v15 = *(int32_t *)v13; // 0x770f8
		int32_t v16 = *(int32_t *)v2;  // 0x77100
		*(char *)(v16 + v15 + 112 * v14) = (char)(0x1000000 * v7 / 0x1000000 + 1);
		if (*(char *)*(int32_t *)(g23 - 0x7794) != 0) {
			int32_t v17 = *(int32_t *)v13; // 0x77120
			function_cb984(*(int32_t *)(g36 + 156), *(int32_t *)v12, v17);
			int32_t v18 = *(int32_t *)v13; // 0x77130
			function_cbddc(*(int32_t *)(g36 + 160), *(int32_t *)v12, v18);
			// branch -> 0x77138
		}
		int32_t v19 = *(int32_t *)(g23 - 0x77ac); // 0x77138
		result = v19;
		if (v7 == *(int32_t *)v19) {
			int32_t v20 = *(int32_t *)(v1 + 8); // 0x77148
			result = *(int32_t *)(g23 - 0x77b4);
			*(int32_t *)*(int32_t *)(g23 - 0x77b0) = *(int32_t *)v12 - v20;
			int32_t v21 = *(int32_t *)(v1 + 12); // 0x77160
			*(int32_t *)result = *(int32_t *)v13 - v21;
			// branch -> 0x77170
		}
	} else {
		// 0x77060
		*(int32_t *)(g35 + 52) = 1;
		// branch -> 0x77170
	}
	// 0x77170
	return result;
}

// Address range: 0x77184 - 0x772a0
int32_t function_77184(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754); // 0x77190
	int32_t v2 = 180 * a1;                   // 0x77194
	int32_t v3 = *(int32_t *)(g23 - 0x7664); // 0x77198
	int32_t v4 = v1 + 152;                   // r28
	int32_t v5 = v3 + v2;                    // 0x771a0
	int32_t v6 = v5;                         // r4
	int32_t v7 = v5 + 116;                   // 0x771b0
	int32_t *v8 = (int32_t *)v7;             // 0x771b0
	*v8 = *v8 - 1;
	int32_t v9 = *(int32_t *)(v6 + 152); // 0x771bc
	int32_t result;                      // 0x7729c
	int32_t v10;                         // 0x77200
	int32_t v11;                         // 0x77208
	int32_t v12;                         // 0x7723c
	int32_t v13;                         // 0x77214
	int32_t v14;                         // 0x77230
	int32_t v15;                         // 0x77258
	int32_t v16;                         // 0x7726c
	int32_t v17;                         // 0x77274
	int32_t v18;                         // 0x77264
	if (*(int32_t *)(v4 + 232 * v9) != 0) {
		// 0x77200
		v10 = 232 * v9;
		v11 = v1 + v10 + 4;
		if (*(int32_t *)v11 == 15) {
			// 0x77224
			if (*(int32_t *)v7 == 0) {
				// 0x77230
				v14 = v2 + v3;
				*(int32_t *)(v14 + 52) = 1;
				v12 = v10;
				if (*(int32_t *)(v12 + v4) < 1) {
					// 0x77254
					v15 = v1 + v12;
					v18 = *(int32_t *)(v15 + 36);
					v16 = 0x1000000 * *(int32_t *)*(int32_t *)(g23 - 0x7624) / 0x1000000;
					AddDead(*(int32_t *)(v15 + 32), v18, v16, *(int32_t *)(v15 + 72));
					// branch -> 0x77274
				} else {
					// 0x77248
					*(int32_t *)v11 = *(int32_t *)(v14 + 148);
					// branch -> 0x77274
				}
				// 0x77274
				v17 = v2 + v3;
				result = v17;
				if (*(char *)(v17 + 56) == 18) {
					// 0x77284
					g34 = a1;
					result = PutMissile();
					// branch -> 0x7728c
				}
				// 0x7728c
				return result;
			}
			// 0x77274
			v17 = v2 + v3;
			if (*(char *)(v17 + 56) == 18) {
				// 0x77284
				g34 = a1;
				result = PutMissile();
				// branch -> 0x7728c
			} else {
				result = v17;
			}
		} else {
			// 0x77214
			v13 = v2 + v3;
			*(int32_t *)(v13 + 52) = 1;
			result = v13;
			// branch -> 0x7728c
		}
		// 0x7728c
		return result;
	}
	// 0x771d0
	if (*(char *)(v6 + 56) != 18) {
		// 0x771dc
		*(int32_t *)(v6 + 44) = 0;
		*(int32_t *)(v6 + 100) = 1;
		g37 = 18;
		SetMissAnim(a1);
		*(int32_t *)v7 = 11;
		// branch -> 0x77200
	}
	// 0x77200
	v10 = 232 * v9;
	v11 = v1 + v10 + 4;
	if (*(int32_t *)v11 == 15) {
		// 0x77224
		if (*(int32_t *)v7 == 0) {
			// 0x77230
			v14 = v2 + v3;
			*(int32_t *)(v14 + 52) = 1;
			v12 = v10;
			if (*(int32_t *)(v12 + v4) < 1) {
				// 0x77254
				v15 = v1 + v12;
				v18 = *(int32_t *)(v15 + 36);
				v16 = 0x1000000 * *(int32_t *)*(int32_t *)(g23 - 0x7624) / 0x1000000;
				AddDead(*(int32_t *)(v15 + 32), v18, v16, *(int32_t *)(v15 + 72));
				// branch -> 0x77274
			} else {
				// 0x77248
				*(int32_t *)v11 = *(int32_t *)(v14 + 148);
				// branch -> 0x77274
			}
			// 0x77274
			v17 = v2 + v3;
			result = v17;
			if (*(char *)(v17 + 56) == 18) {
				// 0x77284
				g34 = a1;
				result = PutMissile();
				// branch -> 0x7728c
			}
			// 0x7728c
			return result;
		}
		// 0x77274
		v17 = v2 + v3;
		if (*(char *)(v17 + 56) == 18) {
			// 0x77284
			g34 = a1;
			result = PutMissile();
			// branch -> 0x7728c
		} else {
			result = v17;
		}
	} else {
		// 0x77214
		v13 = v2 + v3;
		*(int32_t *)(v13 + 52) = 1;
		result = v13;
		// branch -> 0x7728c
	}
	// 0x7728c
	return result;
}

// Address range: 0x772a0 - 0x7734c
int32_t function_772a0(int32_t a1)
{
	// 0x772a0
	g31 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x772ac
	g36 = v1;
	int32_t v2 = 180 * a1; // 0x772b0
	g35 = v2;
	int32_t v3 = v1 + v2;        // 0x772b4
	int32_t v4 = v3 + 116;       // 0x772c4
	int32_t *v5 = (int32_t *)v4; // 0x772c4
	*v5 = *v5 - 1;
	g32 = v4;
	int32_t v6 = v3 + 148; // 0x772d0
	g33 = v6;
	if (*(int32_t *)v6 == 0) {
		int32_t v7 = g35 + g36;            // 0x772dc
		int32_t v8 = *(int32_t *)(v7 + 8); // 0x772f0
		g41 = v8;
		g42 = 1;
		function_6f3d4(g31, *(int32_t *)(v7 + 128), 0, *(int32_t *)(v7 + 4), v8);
		// branch -> 0x77300
	}
	// 0x77300
	if (*(int32_t *)(g35 + g36 + 132) == 1) {
		// 0x77310
		*(int32_t *)g33 = 1;
		// branch -> 0x77318
	}
	// 0x77318
	if (*(int32_t *)g32 == 0) {
		// 0x77324
		*(int32_t *)(g35 + g36 + 52) = 1;
		// branch -> 0x77330
	}
	// 0x77330
	g34 = g31;
	return PutMissile();
}

// Address range: 0x7734c - 0x77554
int32_t function_7734c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x77358
	int32_t v2 = 180 * a1;                   // 0x7735c
	int32_t v3 = *(int32_t *)(g23 - 0x7754); // 0x77360
	int32_t v4 = *(int32_t *)(g23 - 0x767c); // r23
	int32_t v5 = v1 + v2;                    // 0x77368
	int32_t v6 = v5;                         // r24
	int32_t v7 = *(int32_t *)(v5 + 120);     // 0x77374
	int32_t result2 = v7;                    // r3
	int32_t v8 = 232 * v7 + v3;              // 0x77380
	if (*(int32_t *)(v8 + 4) == 14) {
		// 0x7739c
		g34 = a1;
		GetMissilePos();
		int32_t v9 = v6 + 4;                // 0x773a4
		int32_t v10 = v6 + 8;               // 0x773ac
		int32_t v11 = *(int32_t *)v10;      // 0x773ac
		int32_t v12 = 224 * *(int32_t *)v9; // 0x773b4
		*(int16_t *)(*(int32_t *)v4 + 2 * v11 + v12) = 0;
		int32_t v13 = v8 + 156; // 0x773d4
		if (*(char *)v13 == 24) {
			int32_t v14 = v6 + 20;         // 0x773e0
			int32_t v15 = v6 + 36;         // 0x773e8
			int32_t *v16 = (int32_t *)v15; // 0x773e8
			*v16 = *v16 + 2 * *(int32_t *)v14;
			g34 = a1;
			int32_t v17 = v6 + 40;         // 0x77408
			int32_t *v18 = (int32_t *)v17; // 0x77408
			*v18 = *v18 + 2 * *(int32_t *)(v6 + 24);
			GetMissilePos();
			int32_t *v19 = (int32_t *)v15; // 0x77420
			*v19 = *v19 - *(int32_t *)v14;
			int32_t *v20 = (int32_t *)v17; // 0x77438
			*v20 = *v20 - *(int32_t *)(v6 + 24);
			// branch -> 0x77468
		} else {
			int32_t *v21 = (int32_t *)(v6 + 36); // 0x77448
			*v21 = *(int32_t *)(v6 + 20) + *v21;
			int32_t *v22 = (int32_t *)(v6 + 40); // 0x77458
			*v22 = *(int32_t *)(v6 + 24) + *v22;
			// branch -> 0x77468
		}
		// 0x77468
		g34 = a1;
		GetMissilePos();
		int32_t v23 = *(int32_t *)v9;  // 0x77470
		int32_t v24 = *(int32_t *)v10; // 0x77478
		int32_t result;                // 0x77534
		if (function_86824(v7, v23, v24) != 0) {
			// 0x77490
			if (*(char *)v13 == 24) {
				// 0x7749c
				if (function_86824(g31, g36, g35) == 0) {
					// 0x77524
					function_864e8(g30, g33, g32);
					result = g24 + g26;
					*(int32_t *)(result + 52) = 1;
					// branch -> 0x77540
					// 0x77540
					return result;
				}
			}
			int32_t v25 = *(int32_t *)v4; // 0x774bc
			result2 = g29 + v3;
			*(int16_t *)(2 * v24 + 224 * v23 + v25) = (int16_t)(0x10000 * (-1 - g31) / 0x10000);
			*(int32_t *)(result2 + 40) = v23;
			*(int32_t *)(result2 + 48) = v23;
			*(int32_t *)(result2 + 32) = v23;
			*(int32_t *)(result2 + 44) = v24;
			*(int32_t *)(result2 + 52) = v24;
			*(int32_t *)(result2 + 36) = v24;
			if (*(char *)(result2 + 192) != 0) {
				// 0x774fc
				function_cb984(*(int32_t *)(v2 + v1 + 140), v23, v24);
				// branch -> 0x77510
			}
			// 0x77510
			function_6e1a0(g30);
			g34 = g30;
			result2 = PutMissile();
			// branch -> 0x77540
			// 0x77540
			return result2;
		}
		// 0x77524
		function_864e8(g30, g33, g32);
		result = g24 + g26;
		result2 = result;
		*(int32_t *)(result + 52) = 1;
		// branch -> 0x77540
	} else {
		// 0x77390
		*(int32_t *)(v5 + 52) = 1;
		// branch -> 0x77540
	}
	// 0x77540
	return result2;
}

// Address range: 0x77554 - 0x777b0
int32_t function_77554(int32_t a1)
{
	// 0x77554
	g34 = a1;
	g31 = *(int32_t *)(g23 - 0x7754);
	g36 = g34;
	g32 = *(int32_t *)(g23 - 0x7664);
	GetMissilePos();
	int32_t v1 = 180 * g36; // 0x77578
	g30 = v1;
	int32_t v2 = g32 + v1;              // 0x7757c
	int32_t v3 = v2;                    // r30
	int32_t *v4 = (int32_t *)(v2 + 36); // 0x77584
	int32_t v5 = v2 + 20;               // 0x7758c
	g27 = v5;
	int32_t v6 = v2 + 4;         // 0x77594
	int32_t v7 = *(int32_t *)v6; // r19
	int32_t v8 = v2 + 8;         // 0x77598
	int32_t v9 = *(int32_t *)v8; // r18
	g26 = v2 + 24;
	*v4 = *(int32_t *)v5 + *v4;
	g34 = g36;
	int32_t v10 = v3;                     // 0x775ac
	int32_t *v11 = (int32_t *)(v10 + 40); // 0x775ac
	*v11 = *(int32_t *)(v10 + 24) + *v11;
	GetMissilePos();
	int32_t v12 = v3 + 120; // 0x775c0
	v3 = v12;
	int32_t v13 = *(int32_t *)v8;        // r20
	int32_t v14 = 232 * *(int32_t *)v12; // 0x775c8
	g28 = v14;
	int32_t v15 = *(int32_t *)v6; // r21
	int32_t v16 = g31 + v14;      // 0x775d0
	int32_t v17 = v16 + 160;      // 0x775d4
	g29 = v17;
	int32_t v18 = __asm_rlwinm_(*(int32_t *)v17, 0, 27, 27); // 0x775e0
	int32_t v19 = *(int32_t *)(v16 + 76);                    // 0x775e8
	int32_t v20;
	int32_t v21; // 0x7762c
	if (v18 == 0) {
		int32_t v22 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * v19; // 0x775ec
		v21 = *(int32_t *)(v22 + 56);
		v20 = v22 + 60;
		// branch -> 0x7760c
	} else {
		int32_t v23 = g31 + 232 * v19; // 0x77600
		v21 = *(int32_t *)(v23 + 32);
		v20 = v23 + 36;
		// branch -> 0x7760c
	}
	// 0x7760c
	int32_t v24;  // r4
	int32_t v25;  // r6
	int32_t v26;  // 0x776a0
	int32_t v27;  // 0x776c0
	int32_t v28;  // 0x776c8
	int32_t v29;  // 0x776d4
	int32_t v30;  // 0x776d8
	int32_t v31;  // 0x776f0
	int32_t v32;  // 0x776ac
	int32_t v33;  // 0x776f0
	int32_t *v34; // 0x77700
	int32_t *v35; // 0x77720
	int32_t v36;  // 0x776cc
	int32_t *v37; // 0x7772c
	int32_t v38;  // 0x77748
	int32_t *v39; // 0x7775c
	int32_t *v40; // 0x7776c
	int32_t v41;  // 0x776a4
	int32_t v42;  // 0x776bc
	int32_t v43;  // 0x77740
	if (v15 == v7) {
		// 0x77614
		if (v13 == v9) {
			// 0x77694
			if (__asm_rlwinm_(*(int32_t *)g29, 0, 27, 27) == 0) {
				// 0x776a0
				v26 = v15;
				v41 = *(int32_t *)(g23 - 0x7680);
				v32 = v13;
				g20 = (int32_t) * (char *)(v32 + 112 * v26 + *(int32_t *)v41);
				v30 = v32;
				v29 = v26;
				// branch -> 0x776d4
			} else {
				// 0x776bc
				v42 = *(int32_t *)(g23 - 0x767c);
				v27 = v15;
				v28 = v13;
				v36 = 2 * v28 + 224 * v27;
				g20 = (int32_t) * (int16_t *)(v36 + *(int32_t *)v42);
				v30 = v28;
				v29 = v27;
				// branch -> 0x776d4
			}
			// 0x776d4
			if (function_856e4(v29, v30) == 0) {
				// 0x776d4
				// branch -> 0x77700
				// 0x77700
				v34 = (int32_t *)g27;
				v25 = g32 + g30;
				*v34 = -*v34;
				v24 = g30 + g32;
				v35 = (int32_t *)g26;
				*v35 = -*v35;
				v37 = (int32_t *)(v25 + 44);
				*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
				v43 = *(int32_t *)(g28 + g31 + 224);
				v38 = v43 + 8 * *(int32_t *)(v25 + 44);
				*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
				*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
				v39 = (int32_t *)(v24 + 152);
				*v39 = *v39 + 1;
				if (g20 >= 1) {
					// 0x7776c
					v40 = (int32_t *)(v24 + 148);
					*v40 = *v40 | 1;
					// branch -> 0x77784
				}
			} else {
				// 0x776e8
				if (g20 >= 1) {
					// 0x776f0
					v31 = g32;
					v33 = g30;
					if (*(int32_t *)(v33 + v31 + 148) % 2 == 0) {
						// 0x77700
						v34 = (int32_t *)g27;
						v25 = v31 + v33;
						*v34 = -*v34;
						v24 = g30 + g32;
						v35 = (int32_t *)g26;
						*v35 = -*v35;
						v37 = (int32_t *)(v25 + 44);
						*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
						v43 = *(int32_t *)(g28 + g31 + 224);
						v38 = v43 + 8 * *(int32_t *)(v25 + 44);
						*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
						*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
						v39 = (int32_t *)(v24 + 152);
						*v39 = *v39 + 1;
						if (g20 >= 1) {
							// 0x7776c
							v40 = (int32_t *)(v24 + 148);
							*v40 = *v40 | 1;
							// branch -> 0x77784
						}
					}
				}
			}
			// 0x77784
			function_6e1a0(g36);
			g34 = g36;
			return PutMissile();
		}
	}
	int32_t v44 = g32; // 0x7761c
	int32_t v45 = g30; // 0x7761c
	int32_t v46;       // 0x7765c
	if (*(int32_t *)(v45 + v44 + 148) % 2 == 0) {
		// 0x7764c
		if (*(int32_t *)(v44 + v45 + 152) < 2) {
			// 0x77694
			if (__asm_rlwinm_(*(int32_t *)g29, 0, 27, 27) == 0) {
				// 0x776a0
				v26 = v15;
				v41 = *(int32_t *)(g23 - 0x7680);
				v32 = v13;
				g20 = (int32_t) * (char *)(v32 + 112 * v26 + *(int32_t *)v41);
				v30 = v32;
				v29 = v26;
				// branch -> 0x776d4
			} else {
				// 0x776bc
				v42 = *(int32_t *)(g23 - 0x767c);
				v27 = v15;
				v28 = v13;
				v36 = 2 * v28 + 224 * v27;
				g20 = (int32_t) * (int16_t *)(v36 + *(int32_t *)v42);
				v30 = v28;
				v29 = v27;
				// branch -> 0x776d4
			}
			// 0x776d4
			if (function_856e4(v29, v30) == 0) {
				// 0x776d4
				// branch -> 0x77700
				// 0x77700
				v34 = (int32_t *)g27;
				v25 = g32 + g30;
				*v34 = -*v34;
				v24 = g30 + g32;
				v35 = (int32_t *)g26;
				*v35 = -*v35;
				v37 = (int32_t *)(v25 + 44);
				*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
				v43 = *(int32_t *)(g28 + g31 + 224);
				v38 = v43 + 8 * *(int32_t *)(v25 + 44);
				*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
				*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
				v39 = (int32_t *)(v24 + 152);
				*v39 = *v39 + 1;
				if (g20 >= 1) {
					// 0x7776c
					v40 = (int32_t *)(v24 + 148);
					*v40 = *v40 | 1;
					// branch -> 0x77784
				}
			} else {
				// 0x776e8
				if (g20 >= 1) {
					// 0x776f0
					v31 = g32;
					v33 = g30;
					if (*(int32_t *)(v33 + v31 + 148) % 2 == 0) {
						// 0x77700
						v34 = (int32_t *)g27;
						v25 = v31 + v33;
						*v34 = -*v34;
						v24 = g30 + g32;
						v35 = (int32_t *)g26;
						*v35 = -*v35;
						v37 = (int32_t *)(v25 + 44);
						*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
						v43 = *(int32_t *)(g28 + g31 + 224);
						v38 = v43 + 8 * *(int32_t *)(v25 + 44);
						*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
						*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
						v39 = (int32_t *)(v24 + 152);
						*v39 = *v39 + 1;
						if (g20 >= 1) {
							// 0x7776c
							v40 = (int32_t *)(v24 + 148);
							*v40 = *v40 | 1;
							// branch -> 0x77784
						}
					}
				}
			}
			// 0x77784
			function_6e1a0(g36);
			g34 = g36;
			return PutMissile();
		}
		// 0x7765c
		v46 = *(int32_t *)v3;
		if (function_86824(v46, v7, v9) != 0) {
			// 0x77674
			function_864e8(g36, v7, v9);
			*(int32_t *)(g30 + g32 + 52) = 1;
			// branch -> 0x776d4
			// 0x776d4
			if (function_856e4(g25, g24) == 0) {
				// 0x776d4
				// branch -> 0x77700
				// 0x77700
				v34 = (int32_t *)g27;
				v25 = g32 + g30;
				*v34 = -*v34;
				v24 = g30 + g32;
				v35 = (int32_t *)g26;
				*v35 = -*v35;
				v37 = (int32_t *)(v25 + 44);
				*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
				v43 = *(int32_t *)(g28 + g31 + 224);
				v38 = v43 + 8 * *(int32_t *)(v25 + 44);
				*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
				*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
				v39 = (int32_t *)(v24 + 152);
				*v39 = *v39 + 1;
				if (g20 >= 1) {
					// 0x7776c
					v40 = (int32_t *)(v24 + 148);
					*v40 = *v40 | 1;
					// branch -> 0x77784
				}
				// 0x77784
				function_6e1a0(g36);
				g34 = g36;
				return PutMissile();
			}
			// 0x776e8
			if (g20 >= 1) {
				// 0x776f0
				v31 = g32;
				v33 = g30;
				if (*(int32_t *)(v33 + v31 + 148) % 2 == 0) {
					// 0x77700
					v34 = (int32_t *)g27;
					v25 = v31 + v33;
					*v34 = -*v34;
					v24 = g30 + g32;
					v35 = (int32_t *)g26;
					*v35 = -*v35;
					v37 = (int32_t *)(v25 + 44);
					*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
					v43 = *(int32_t *)(g28 + g31 + 224);
					v38 = v43 + 8 * *(int32_t *)(v25 + 44);
					*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
					*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
					v39 = (int32_t *)(v24 + 152);
					*v39 = *v39 + 1;
					if (g20 >= 1) {
						// 0x7776c
						v40 = (int32_t *)(v24 + 148);
						*v40 = *v40 | 1;
						// branch -> 0x77784
					}
					// 0x77784
					function_6e1a0(g36);
					g34 = g36;
					return PutMissile();
				}
			}
			// 0x77784
			function_6e1a0(g36);
			g34 = g36;
			return PutMissile();
		}
		// 0x77694
		if (__asm_rlwinm_(*(int32_t *)g29, 0, 27, 27) == 0) {
			// 0x776a0
			v26 = v15;
			v41 = *(int32_t *)(g23 - 0x7680);
			v32 = v13;
			g20 = (int32_t) * (char *)(v32 + 112 * v26 + *(int32_t *)v41);
			v30 = v32;
			v29 = v26;
			// branch -> 0x776d4
		} else {
			// 0x776bc
			v42 = *(int32_t *)(g23 - 0x767c);
			v27 = v15;
			v28 = v13;
			v36 = 2 * v28 + 224 * v27;
			g20 = (int32_t) * (int16_t *)(v36 + *(int32_t *)v42);
			v30 = v28;
			v29 = v27;
			// branch -> 0x776d4
		}
		// 0x776d4
		if (function_856e4(v29, v30) == 0) {
			// 0x776d4
			// branch -> 0x77700
			// 0x77700
			v34 = (int32_t *)g27;
			v25 = g32 + g30;
			*v34 = -*v34;
			v24 = g30 + g32;
			v35 = (int32_t *)g26;
			*v35 = -*v35;
			v37 = (int32_t *)(v25 + 44);
			*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
			v43 = *(int32_t *)(g28 + g31 + 224);
			v38 = v43 + 8 * *(int32_t *)(v25 + 44);
			*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
			*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
			v39 = (int32_t *)(v24 + 152);
			*v39 = *v39 + 1;
			if (g20 >= 1) {
				// 0x7776c
				v40 = (int32_t *)(v24 + 148);
				*v40 = *v40 | 1;
				// branch -> 0x77784
			}
		} else {
			// 0x776e8
			if (g20 >= 1) {
				// 0x776f0
				v31 = g32;
				v33 = g30;
				if (*(int32_t *)(v33 + v31 + 148) % 2 == 0) {
					// 0x77700
					v34 = (int32_t *)g27;
					v25 = v31 + v33;
					*v34 = -*v34;
					v24 = g30 + g32;
					v35 = (int32_t *)g26;
					*v35 = -*v35;
					v37 = (int32_t *)(v25 + 44);
					*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
					v43 = *(int32_t *)(g28 + g31 + 224);
					v38 = v43 + 8 * *(int32_t *)(v25 + 44);
					*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
					*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
					v39 = (int32_t *)(v24 + 152);
					*v39 = *v39 + 1;
					if (g20 >= 1) {
						// 0x7776c
						v40 = (int32_t *)(v24 + 148);
						*v40 = *v40 | 1;
						// branch -> 0x77784
					}
				}
			}
		}
		// 0x77784
		function_6e1a0(g36);
		g34 = g36;
		return PutMissile();
	}
	// 0x7762c
	g34 = v7 - v21;
	if (abs() > 3) {
		// 0x7765c
		v46 = *(int32_t *)v3;
		if (function_86824(v46, v7, v9) != 0) {
			// 0x77674
			function_864e8(g36, v7, v9);
			*(int32_t *)(g30 + g32 + 52) = 1;
			// branch -> 0x776d4
			// 0x776d4
			if (function_856e4(g25, g24) == 0) {
				// 0x776d4
				// branch -> 0x77700
				// 0x77700
				v34 = (int32_t *)g27;
				v25 = g32 + g30;
				*v34 = -*v34;
				v24 = g30 + g32;
				v35 = (int32_t *)g26;
				*v35 = -*v35;
				v37 = (int32_t *)(v25 + 44);
				*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
				v43 = *(int32_t *)(g28 + g31 + 224);
				v38 = v43 + 8 * *(int32_t *)(v25 + 44);
				*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
				*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
				v39 = (int32_t *)(v24 + 152);
				*v39 = *v39 + 1;
				if (g20 >= 1) {
					// 0x7776c
					v40 = (int32_t *)(v24 + 148);
					*v40 = *v40 | 1;
					// branch -> 0x77784
				}
			} else {
				// 0x776e8
				if (g20 >= 1) {
					// 0x776f0
					v31 = g32;
					v33 = g30;
					if (*(int32_t *)(v33 + v31 + 148) % 2 == 0) {
						// 0x77700
						v34 = (int32_t *)g27;
						v25 = v31 + v33;
						*v34 = -*v34;
						v24 = g30 + g32;
						v35 = (int32_t *)g26;
						*v35 = -*v35;
						v37 = (int32_t *)(v25 + 44);
						*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
						v43 = *(int32_t *)(g28 + g31 + 224);
						v38 = v43 + 8 * *(int32_t *)(v25 + 44);
						*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
						*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
						v39 = (int32_t *)(v24 + 152);
						*v39 = *v39 + 1;
						if (g20 >= 1) {
							// 0x7776c
							v40 = (int32_t *)(v24 + 148);
							*v40 = *v40 | 1;
							// branch -> 0x77784
						}
					}
				}
			}
			// 0x77784
			function_6e1a0(g36);
			g34 = g36;
			return PutMissile();
		}
		// 0x77694
		if (__asm_rlwinm_(*(int32_t *)g29, 0, 27, 27) == 0) {
			// 0x776a0
			v26 = v15;
			v41 = *(int32_t *)(g23 - 0x7680);
			v32 = v13;
			g20 = (int32_t) * (char *)(v32 + 112 * v26 + *(int32_t *)v41);
			v30 = v32;
			v29 = v26;
			// branch -> 0x776d4
		} else {
			// 0x776bc
			v42 = *(int32_t *)(g23 - 0x767c);
			v27 = v15;
			v28 = v13;
			v36 = 2 * v28 + 224 * v27;
			g20 = (int32_t) * (int16_t *)(v36 + *(int32_t *)v42);
			v30 = v28;
			v29 = v27;
			// branch -> 0x776d4
		}
		// 0x776d4
		if (function_856e4(v29, v30) == 0) {
			// 0x776d4
			// branch -> 0x77700
			// 0x77700
			v34 = (int32_t *)g27;
			v25 = g32 + g30;
			*v34 = -*v34;
			v24 = g30 + g32;
			v35 = (int32_t *)g26;
			*v35 = -*v35;
			v37 = (int32_t *)(v25 + 44);
			*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
			v43 = *(int32_t *)(g28 + g31 + 224);
			v38 = v43 + 8 * *(int32_t *)(v25 + 44);
			*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
			*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
			v39 = (int32_t *)(v24 + 152);
			*v39 = *v39 + 1;
			if (g20 >= 1) {
				// 0x7776c
				v40 = (int32_t *)(v24 + 148);
				*v40 = *v40 | 1;
				// branch -> 0x77784
			}
		} else {
			// 0x776e8
			if (g20 >= 1) {
				// 0x776f0
				v31 = g32;
				v33 = g30;
				if (*(int32_t *)(v33 + v31 + 148) % 2 == 0) {
					// 0x77700
					v34 = (int32_t *)g27;
					v25 = v31 + v33;
					*v34 = -*v34;
					v24 = g30 + g32;
					v35 = (int32_t *)g26;
					*v35 = -*v35;
					v37 = (int32_t *)(v25 + 44);
					*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
					v43 = *(int32_t *)(g28 + g31 + 224);
					v38 = v43 + 8 * *(int32_t *)(v25 + 44);
					*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
					*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
					v39 = (int32_t *)(v24 + 152);
					*v39 = *v39 + 1;
					if (g20 >= 1) {
						// 0x7776c
						v40 = (int32_t *)(v24 + 148);
						*v40 = *v40 | 1;
						// branch -> 0x77784
					}
				}
			}
		}
		// 0x77784
		function_6e1a0(g36);
		g34 = g36;
		return PutMissile();
	}
	// 0x7763c
	g34 = v9 - *(int32_t *)v20;
	if (abs() <= 3) {
		// 0x7763c
		// branch -> 0x7764c
		// 0x7764c
		if (*(int32_t *)(g32 + g30 + 152) < 2) {
			// 0x77694
			if (__asm_rlwinm_(*(int32_t *)g29, 0, 27, 27) == 0) {
				// 0x776a0
				v26 = v15;
				v41 = *(int32_t *)(g23 - 0x7680);
				v32 = v13;
				g20 = (int32_t) * (char *)(v32 + 112 * v26 + *(int32_t *)v41);
				v30 = v32;
				v29 = v26;
				// branch -> 0x776d4
			} else {
				// 0x776bc
				v42 = *(int32_t *)(g23 - 0x767c);
				v27 = v15;
				v28 = v13;
				v36 = 2 * v28 + 224 * v27;
				g20 = (int32_t) * (int16_t *)(v36 + *(int32_t *)v42);
				v30 = v28;
				v29 = v27;
				// branch -> 0x776d4
			}
			// 0x776d4
			if (function_856e4(v29, v30) == 0) {
				// 0x776d4
				// branch -> 0x77700
				// 0x77700
				v34 = (int32_t *)g27;
				v25 = g32 + g30;
				*v34 = -*v34;
				v24 = g30 + g32;
				v35 = (int32_t *)g26;
				*v35 = -*v35;
				v37 = (int32_t *)(v25 + 44);
				*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
				v43 = *(int32_t *)(g28 + g31 + 224);
				v38 = v43 + 8 * *(int32_t *)(v25 + 44);
				*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
				*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
				v39 = (int32_t *)(v24 + 152);
				*v39 = *v39 + 1;
				if (g20 >= 1) {
					// 0x7776c
					v40 = (int32_t *)(v24 + 148);
					*v40 = *v40 | 1;
					// branch -> 0x77784
				}
			} else {
				// 0x776e8
				if (g20 >= 1) {
					// 0x776f0
					v31 = g32;
					v33 = g30;
					if (*(int32_t *)(v33 + v31 + 148) % 2 == 0) {
						// 0x77700
						v34 = (int32_t *)g27;
						v25 = v31 + v33;
						*v34 = -*v34;
						v24 = g30 + g32;
						v35 = (int32_t *)g26;
						*v35 = -*v35;
						v37 = (int32_t *)(v25 + 44);
						*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
						v43 = *(int32_t *)(g28 + g31 + 224);
						v38 = v43 + 8 * *(int32_t *)(v25 + 44);
						*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
						*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
						v39 = (int32_t *)(v24 + 152);
						*v39 = *v39 + 1;
						if (g20 >= 1) {
							// 0x7776c
							v40 = (int32_t *)(v24 + 148);
							*v40 = *v40 | 1;
							// branch -> 0x77784
						}
					}
				}
			}
			// 0x77784
			function_6e1a0(g36);
			g34 = g36;
			return PutMissile();
		}
	}
	// 0x7765c
	v46 = *(int32_t *)v3;
	if (function_86824(v46, v7, v9) != 0) {
		// 0x77674
		function_864e8(g36, v7, v9);
		*(int32_t *)(g30 + g32 + 52) = 1;
		// branch -> 0x776d4
		// 0x776d4
		if (function_856e4(g25, g24) == 0) {
			// 0x776d4
			// branch -> 0x77700
			// 0x77700
			v34 = (int32_t *)g27;
			v25 = g32 + g30;
			*v34 = -*v34;
			v24 = g30 + g32;
			v35 = (int32_t *)g26;
			*v35 = -*v35;
			v37 = (int32_t *)(v25 + 44);
			*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
			v43 = *(int32_t *)(g28 + g31 + 224);
			v38 = v43 + 8 * *(int32_t *)(v25 + 44);
			*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
			*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
			v39 = (int32_t *)(v24 + 152);
			*v39 = *v39 + 1;
			if (g20 >= 1) {
				// 0x7776c
				v40 = (int32_t *)(v24 + 148);
				*v40 = *v40 | 1;
				// branch -> 0x77784
			}
		} else {
			// 0x776e8
			if (g20 >= 1) {
				// 0x776f0
				v31 = g32;
				v33 = g30;
				if (*(int32_t *)(v33 + v31 + 148) % 2 == 0) {
					// 0x77700
					v34 = (int32_t *)g27;
					v25 = v31 + v33;
					*v34 = -*v34;
					v24 = g30 + g32;
					v35 = (int32_t *)g26;
					*v35 = -*v35;
					v37 = (int32_t *)(v25 + 44);
					*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
					v43 = *(int32_t *)(g28 + g31 + 224);
					v38 = v43 + 8 * *(int32_t *)(v25 + 44);
					*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
					*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
					v39 = (int32_t *)(v24 + 152);
					*v39 = *v39 + 1;
					if (g20 >= 1) {
						// 0x7776c
						v40 = (int32_t *)(v24 + 148);
						*v40 = *v40 | 1;
						// branch -> 0x77784
					}
				}
			}
		}
		// 0x77784
		function_6e1a0(g36);
		g34 = g36;
		return PutMissile();
	}
	// 0x77694
	if (__asm_rlwinm_(*(int32_t *)g29, 0, 27, 27) == 0) {
		// 0x776a0
		v26 = v15;
		v41 = *(int32_t *)(g23 - 0x7680);
		v32 = v13;
		g20 = (int32_t) * (char *)(v32 + 112 * v26 + *(int32_t *)v41);
		v30 = v32;
		v29 = v26;
		// branch -> 0x776d4
	} else {
		// 0x776bc
		v42 = *(int32_t *)(g23 - 0x767c);
		v27 = v15;
		v28 = v13;
		v36 = 2 * v28 + 224 * v27;
		g20 = (int32_t) * (int16_t *)(v36 + *(int32_t *)v42);
		v30 = v28;
		v29 = v27;
		// branch -> 0x776d4
	}
	// 0x776d4
	if (function_856e4(v29, v30) == 0) {
		// 0x776d4
		// branch -> 0x77700
		// 0x77700
		v34 = (int32_t *)g27;
		v25 = g32 + g30;
		*v34 = -*v34;
		v24 = g30 + g32;
		v35 = (int32_t *)g26;
		*v35 = -*v35;
		v37 = (int32_t *)(v25 + 44);
		*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
		v43 = *(int32_t *)(g28 + g31 + 224);
		v38 = v43 + 8 * *(int32_t *)(v25 + 44);
		*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
		*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
		v39 = (int32_t *)(v24 + 152);
		*v39 = *v39 + 1;
		if (g20 >= 1) {
			// 0x7776c
			v40 = (int32_t *)(v24 + 148);
			*v40 = *v40 | 1;
			// branch -> 0x77784
		}
	} else {
		// 0x776e8
		if (g20 >= 1) {
			// 0x776f0
			v31 = g32;
			v33 = g30;
			if (*(int32_t *)(v33 + v31 + 148) % 2 == 0) {
				// 0x77700
				v34 = (int32_t *)g27;
				v25 = v31 + v33;
				*v34 = -*v34;
				v24 = g30 + g32;
				v35 = (int32_t *)g26;
				*v35 = -*v35;
				v37 = (int32_t *)(v25 + 44);
				*v37 = *(int32_t *)(*(int32_t *)(g23 - 0x7104) + 4 * *v37);
				v43 = *(int32_t *)(g28 + g31 + 224);
				v38 = v43 + 8 * *(int32_t *)(v25 + 44);
				*(int32_t *)(v24 + 64) = *(int32_t *)(v38 + 84);
				*(int32_t *)(v24 + 68) = *(int32_t *)(v38 + 88);
				v39 = (int32_t *)(v24 + 152);
				*v39 = *v39 + 1;
				if (g20 >= 1) {
					// 0x7776c
					v40 = (int32_t *)(v24 + 148);
					*v40 = *v40 | 1;
					// branch -> 0x77784
				}
			}
		}
	}
	// 0x77784
	function_6e1a0(g36);
	g34 = g36;
	return PutMissile();
}

// Address range: 0x777b0 - 0x779a4
int32_t function_777b0(int32_t a1)
{
	int32_t v1 = 180 * a1; // 0x777b8
	g28 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x777bc
	g30 = v2;
	g29 = *(int32_t *)(g23 - 0x7234);
	g31 = *(int32_t *)(g23 - 0x757c);
	int32_t v3 = v2 + v1; // 0x777c8
	g32 = *(int32_t *)(g23 - 0x70dc);
	g33 = *(int32_t *)(g23 - 0x70d8);
	g35 = *(int32_t *)(g23 - 0x77a8);
	int32_t *v4 = (int32_t *)(v3 + 116); // 0x777e4
	int32_t v5 = *v4;                    // 0x777e4
	int32_t result3 = v5;                // r3
	*v4 = v5 - 1;
	int32_t v6 = *(int32_t *)(v3 + 120); // 0x777f4
	g36 = v6;
	if (*(int32_t *)(v3 + 116) == 0) {
		// 0x77800
		*(int32_t *)(v3 + 52) = 1;
		// branch -> 0x77990
	} else {
		int32_t v7 = *(int32_t *)(v3 + 148);                            // 0x77814
		int32_t v8 = *(int32_t *)(v3 + 152);                            // 0x77818
		int16_t v9 = *(int16_t *)(*(int32_t *)g31 + 2 * v8 + 224 * v7); // 0x77830
		int32_t v10 = 4 * *(int32_t *)(v3 + 156);                       // 0x77834
		uint32_t v11 = *(int32_t *)(g33 + v10) + v7;                    // 0x77844
		uint32_t v12 = *(int32_t *)(g32 + v10) + v8;                    // 0x7784c
		g24 = v12;
		int32_t v13;     // 0x77948
		int32_t v14;     // 0x778f8
		int32_t result2; // 0x778cc
		uint32_t v15;    // 0x77908
		uint32_t v16;    // 0x77910
		int32_t *v17;    // 0x77918
		int32_t v18;     // 0x778d0
		int32_t v19;     // 0x778dc
		int32_t v20;     // 0x77968
		int16_t v21;     // 0x778f4
		int32_t result;  // 0x77974
		int32_t *v22;
		if (*(char *)(g29 + (int32_t)v9) == 0) {
			// 0x77854
			if (*(int32_t *)(v3 + 176) == 0) {
				// 0x77860
				if (v11 >= 1) {
					// 0x77868
					if (v11 <= 111) {
						// 0x77870
						if (v12 >= 1) {
							// 0x77878
							if (v12 <= 111) {
								// 0x77880
								g13 = v6;
								int32_t v23 = *(int32_t *)(g35 + 0x55ec * v6 + 112); // 0x778a4
								AddMissile(v7, v8, v23, 5, 0, 5, 0, (int32_t)&v22, (int32_t)&v22);
								*(int32_t *)g27 = g25;
								*(int32_t *)g26 = g24;
								// branch -> 0x778cc
								// 0x778cc
								result2 = g28 + g30;
								v18 = *(int32_t *)(result2 + 164);
								v19 = *(int32_t *)(result2 + 168);
								v21 = *(int16_t *)(2 * v19 + 224 * v18 + *(int32_t *)g31);
								v14 = 4 * *(int32_t *)(result2 + 160);
								v15 = *(int32_t *)(g33 + v14) + v18;
								g24 = v15;
								v16 = *(int32_t *)(g32 + v14) + v19;
								v17 = (int32_t *)(result2 + 172);
								if (*(char *)(g29 + (int32_t)v21) == 0) {
									// 0x77918
									if (*v17 == 0) {
										// 0x77924
										if (v15 >= 1) {
											// 0x7792c
											if (v15 <= 111) {
												// 0x77934
												if (v16 >= 1) {
													// 0x7793c
													if (v16 <= 111) {
														// 0x77944
														v13 = g36;
														g13 = v13;
														v20 = *(int32_t *)(g35 + 0x55ec * v13 + 112);
														result = AddMissile(v18, v19, v20, 5, 0, 5, 0, (int32_t)&v22, (int32_t)&v22);
														*(int32_t *)g26 = g24;
														*(int32_t *)g27 = g25;
														// branch -> 0x77990
														// 0x77990
														return result;
													}
												}
											}
										}
									}
								}
								// 0x77984
								*v17 = 1;
								// branch -> 0x77990
								// 0x77990
								return result2;
							}
						}
					}
				}
			}
		}
		// 0x778c0
		*(int32_t *)(g28 + g30 + 176) = 1;
		// branch -> 0x778cc
		// 0x778cc
		result2 = g28 + g30;
		v18 = *(int32_t *)(result2 + 164);
		v19 = *(int32_t *)(result2 + 168);
		v21 = *(int16_t *)(2 * v19 + 224 * v18 + *(int32_t *)g31);
		v14 = 4 * *(int32_t *)(result2 + 160);
		v15 = *(int32_t *)(g33 + v14) + v18;
		g24 = v15;
		v16 = *(int32_t *)(g32 + v14) + v19;
		v17 = (int32_t *)(result2 + 172);
		if (*(char *)(g29 + (int32_t)v21) == 0) {
			// 0x77918
			if (*v17 == 0) {
				// 0x77924
				if (v15 >= 1) {
					// 0x7792c
					if (v15 <= 111) {
						// 0x77934
						if (v16 >= 1) {
							// 0x7793c
							if (v16 <= 111) {
								// 0x77944
								v13 = g36;
								g13 = v13;
								v20 = *(int32_t *)(g35 + 0x55ec * v13 + 112);
								result = AddMissile(v18, v19, v20, 5, 0, 5, 0, (int32_t)&v22, (int32_t)&v22);
								*(int32_t *)g26 = g24;
								*(int32_t *)g27 = g25;
								// branch -> 0x77990
								// 0x77990
								return result;
							}
						}
					}
				}
			}
		}
		// 0x77984
		result3 = result2;
		*v17 = 1;
		// branch -> 0x77990
	}
	// 0x77990
	return result3;
}

// Address range: 0x779a4 - 0x77a14
int32_t function_779a4(int32_t a1)
{
	int32_t v1 = 180 * a1;                   // 0x779a8
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x779b0
	int32_t v3 = 1;                          // r4
	int32_t v4 = v2 + v1;                    // 0x779bc
	int32_t *v5 = (int32_t *)(v4 + 116);     // 0x779c4
	*v5 = *v5 - 1;
	int32_t v6 = v4 + 120;                                             // 0x779d4
	int32_t v7 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * *(int32_t *)v6; // 0x779dc
	*(int32_t *)(v7 + 460) = v3;
	int32_t result; // 0x77a10
	if (*(int32_t *)(v4 + 116) == 0) {
		// 0x779f0
		*(int32_t *)(v1 + v2 + 52) = v3;
		result = function_5c140(*(int32_t *)v6, 1);
		// branch -> 0x77a04
	} else {
		// 0x779a4
		result = v7;
		// branch -> 0x77a04
	}
	// 0x77a04
	return result;
}

// Address range: 0x77a14 - 0x77b58
int32_t function_77a14(int32_t a1)
{
	int32_t v1 = 180 * a1; // 0x77a1c
	g27 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x77a20
	g31 = v2;
	g32 = *(int32_t *)(g23 - 0x767c);
	int32_t v3 = v2 + v1; // 0x77a2c
	g36 = v3;
	g33 = *(int32_t *)(g23 - 0x757c);
	int32_t v4 = v3 + 152; // 0x77a34
	g26 = v4;
	g35 = *(int32_t *)(g23 - 0x722c);
	int32_t v5 = 0;                      // r4
	int32_t v6 = *(int32_t *)(v3 + 120); // 0x77a48
	g22 = v6;
	int32_t v7 = *(int32_t *)v4; // 0x77a4c
	g25 = v7;
	g29 = 2 * v7;
	g28 = 0x55ec * v6 + *(int32_t *)(g23 - 0x77a8);
	int32_t result; // r3
	int32_t v8;     // 0x77b38
	if (v7 >= *(int32_t *)(v3 + 156)) {
		// 0x77b38
		v8 = g27 + g31;
		result = v8;
		*(int32_t *)(v8 + 52) = 1;
		// branch -> 0x77b44
		// 0x77b44
		return result;
	}
	int32_t v9 = v7; // 0x77b2433
	int32_t v10 = 0; // 0x77b14
	int32_t v11;     // 0x77b1c
	int32_t v12;     // 0x77b24
	while (true) {
		// 0x77b14
		if (v10 == 0) {
			int32_t v13 = *(int32_t *)(v3 + 160); // 0x77a60
			int32_t v14 = 224 * v13;              // 0x77a64
			g24 = v13;
			int32_t v15 = v3; // 0x77af8
			int32_t v16;      // 0x77b08
			int32_t v17;
			if (v13 < *(int32_t *)(v3 + 164)) {
				int32_t v18 = 0;
				int32_t v19 = 0;  // 0x77af028
				int32_t v20 = v3; // 0x77a9c
				int32_t v21 = 0;  // 0x77ae8
				int32_t v22;      // 0x77af0
				int32_t v23;
				while (true) {
					// 0x77ae8
					if (v21 == 0) {
						int32_t v24 = g29; // 0x77a78
						int32_t v25 = v18;
						int32_t v26 = v19; // 0x77af027
						int32_t v27 = v20; // 0x77adc
						int32_t v28 = v13; // 0x77ad8
						int32_t v29 = v14; // 0x77ad4
						int32_t v30 = 0;   // 0x77ae818
						if (*(int16_t *)(v24 + *(int32_t *)g32 + v14) >= 4) {
							int16_t v31 = *(int16_t *)(*(int32_t *)g33 + v14 + v24); // 0x77a8c
							if (*(char *)(g35 + (int32_t)v31) == 0) {
								int32_t v32 = g25; // 0x77aac
								g13 = g22;
								int32_t v33 = *(int32_t *)(g28 + 112); // 0x77ac0
								AddMissile(v13, v32, v13, v32, v33, 36, 0, *(int32_t *)(v20 + 128), 0);
								v5 = 1;
								v25 = 1;
								v26 = 1;
								v27 = g36;
								v28 = g24;
								v29 = g30;
								v30 = 1;
								// branch -> 0x77ad4
							} else {
								v25 = v18;
								v26 = v19;
								v27 = v20;
								v28 = v13;
								v29 = v14;
								v30 = 0;
							}
						}
						int32_t v34 = v29 + 224; // 0x77ad4
						int32_t v35 = v28 + 1;   // 0x77ad8
						g24 = v35;
						if (v35 >= *(int32_t *)(v27 + 164)) {
							v23 = v25;
							v15 = v27;
							v22 = v26;
							// break -> 0x77af0
							break;
						}
						v18 = v25;
						v19 = v26;
						v13 = v35;
						v20 = v27;
						v14 = v34;
						v21 = v30;
						// continue -> 0x77ae8
						continue;
					} else {
						v23 = v18;
						v15 = v20;
						v22 = v19;
					}
				}
				// 0x77af0
				v17 = v23;
				v16 = v15;
				if (v22 == 0) {
				lab_0x77af8:
					// 0x77af8
					*(int32_t *)(v15 + 160) = *(int32_t *)(v15 + 168);
					v17 = v5;
					v16 = g36;
					// branch -> 0x77b00
				}
			lab_0x77b00:
				// 0x77b00
				g29 += 2;
				int32_t v36 = g25 + 1; // 0x77b04
				g25 = v36;
				if (v36 >= *(int32_t *)(v16 + 156)) {
					v12 = v36;
					v11 = v17;
					// break -> 0x77b1c
					break;
				}
				v9 = v36;
				v3 = v16;
				v10 = v17;
				// continue -> 0x77b14
				continue;
			}
			goto lab_0x77af8;
			v17 = 0;
			v16 = v15;
			goto lab_0x77b00;
		} else {
			v12 = v9;
			v11 = v10;
		}
	}
	// 0x77b1c
	if (v11 == 1) {
		// 0x77b24
		result = g27 + g31;
		*(int32_t *)g26 = v12 - 1;
		*(int32_t *)(result + 160) = g24;
		// branch -> 0x77b44
	} else {
		// 0x77b38
		v8 = g27 + g31;
		result = v8;
		*(int32_t *)(v8 + 52) = 1;
		// branch -> 0x77b44
	}
	// 0x77b44
	return result;
}

// Address range: 0x77b58 - 0x77e30
int32_t MI_Wave(int32_t a1)
{
	// 0x77b58
	g21 = 0;
	g24 = *(int32_t *)(g23 - 0x757c);
	g19 = *(int32_t *)(g23 - 0x70dc);
	g22 = 0;
	g18 = *(int32_t *)(g23 - 0x70d8);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8);      // 0x77b78
	int32_t v2 = 180 * a1;                        // 0x77b80
	int32_t v3 = *(int32_t *)(g23 - 0x7664) + v2; // 0x77b94
	int32_t v4 = *(int32_t *)(v3 + 4);            // 0x77b98
	int32_t v5 = *(int32_t *)(v3 + 8);            // 0x77b9c
	g16 = v5;
	int32_t v6 = *(int32_t *)(v3 + 152);                           // 0x77ba8
	int32_t v7 = *(int32_t *)(v3 + 120);                           // r25
	int32_t v8 = GetDirection(v4, v5, *(int32_t *)(v3 + 148), v6); // 0x77bb4
	int32_t v9 = 4 * v8;                                           // 0x77bb8
	int32_t v10 = *(int32_t *)(g18 + v9);                          // 0x77bc8
	int32_t v11 = *(int32_t *)(g19 + v9);                          // 0x77bd0
	g20 = (v8 - 2) % 8;
	int32_t v12 = v4 + v10;                                            // 0x77bd8
	int32_t v13 = g16 + v11;                                           // 0x77be0
	int16_t v14 = *(int16_t *)(2 * v13 + 224 * v12 + *(int32_t *)g24); // 0x77bf0
	g36 = v13;
	g17 = (v8 + 2) % 8;
	if (*(char *)(*(int32_t *)(g23 - 0x7234) + (int32_t)v14) == 0) {
		int32_t v15 = *(int32_t *)(v3 + 48);                // 0x77c20
		int32_t v16 = *(int32_t *)(v1 + 0x55ec * v7 + 112); // 0x77c34
		g13 = v7;
		AddMissile(v12, v13, v12 + v10, v13 + v11, v16, 14, 0, 0, v15);
		int32_t v17 = 4 * g17;   // 0x77c48
		int32_t v18 = 4 * g20;   // 0x77c50
		int32_t v19 = g18;       // 0x77c54
		int32_t v20 = v19 + v17; // 0x77c54
		g17 = v20;
		int32_t v21 = g19;       // 0x77c58
		int32_t v22 = v21 + v17; // 0x77c58
		g20 = v22;
		int32_t v23 = v19 + v18; // 0x77c5c
		g18 = v23;
		int32_t v24 = v21 + v18; // 0x77c60
		g19 = v24;
		g30 = 0;
		g35 += *(int32_t *)v23;
		g36 += *(int32_t *)v24;
		int32_t v25 = g33 + *(int32_t *)v20 + *(int32_t *)g27; // 0x77c88
		int32_t v26 = *(int32_t *)v22 + *(int32_t *)g28 + g16; // 0x77c90
		int32_t v27 = 0;                                       // 0x77ddc
		// branch -> 0x77dd0
		while (true) {
			uint32_t v28 = *(int32_t *)(g31 + 48); // 0x77dd0
			if (v27 < (v28 / 2 || v28 & -0x80000000) + 2) {
				uint32_t v29 = g35;                                           // 0x77c98
				int32_t v30 = g24;                                            // 0x77c9c
				uint32_t v31 = g36;                                           // 0x77ca0
				int32_t v32 = 2 * v31 + 224 * v29;                            // 0x77ca4
				int32_t v33 = (int32_t) * (int16_t *)(v32 + *(int32_t *)v30); // 0x77ca8
				int32_t v34 = g25;                                            // 0x77cac
				int32_t v35;
				int32_t v36; // 0x77d34
				int32_t v37;
				int32_t v38; // 0x77d44
				if (*(char *)(v34 + v33) == 0) {
					// 0x77cb8
					if (g21 == 0) {
						// 0x77cc0
						if (v29 >= 1) {
							// 0x77cc8
							if (v29 <= 111) {
								// 0x77cd0
								if (v31 >= 1) {
									// 0x77cd8
									if (v31 <= 111) {
										// 0x77ce0
										g13 = g29;
										int32_t v39 = *(int32_t *)g27;         // 0x77cfc
										int32_t v40 = *(int32_t *)g28;         // 0x77d04
										int32_t v41 = *(int32_t *)(g26 + 112); // 0x77d08
										AddMissile(v29, v31, v39 + v29, v40 + v31, v41, 14, 0, 0, v28);
										g35 += *(int32_t *)g18;
										g36 += *(int32_t *)g19;
										v35 = g32;
										v37 = g33;
										v38 = g25;
										v36 = g24;
										// branch -> 0x77d30
									lab_0x77d30:;
										int16_t v42 = *(int16_t *)(*(int32_t *)v36 + 224 * v35 + 2 * v37); // 0x77d40
										int32_t v43;                                                       // 0x77dbc
										int32_t v44;                                                       // 0x77dc0
										if (*(char *)((int32_t)v42 + v38) == 0) {
											// 0x77d50
											if (g22 == 0) {
												// 0x77d58
												if (v35 >= 1) {
													// 0x77d60
													if (v35 <= 111) {
														// 0x77d68
														if (v37 >= 1) {
															// 0x77d70
															if (v37 <= 111) {
																int32_t v45 = *(int32_t *)(g31 + 48); // 0x77d88
																g13 = g29;
																int32_t v46 = *(int32_t *)g27;         // 0x77d9c
																int32_t v47 = *(int32_t *)g28;         // 0x77da0
																int32_t v48 = *(int32_t *)(g26 + 112); // 0x77da4
																AddMissile(v35, v37, v46 + v35, v47 + v37, v48, 14, 0, 0, v45);
																v43 = g32 + *(int32_t *)g17;
																v44 = g33 + *(int32_t *)g20;
																// branch -> 0x77dcc
															lab_0x77dcc:;
																int32_t v49 = g30 + 1; // 0x77dcc
																g30 = v49;
																v26 = v44;
																v25 = v43;
																v27 = v49;
																// branch -> 0x77dd0
																continue;
															}
														}
													}
												}
											}
										}
										// 0x77dc8
										g22 = 1;
										v44 = v37;
										v43 = v35;
										// branch -> 0x77dcc
										goto lab_0x77dcc;
									}
								}
							}
						}
					}
				}
				// 0x77d2c
				g21 = 1;
				v37 = v26;
				v35 = v25;
				v38 = v34;
				v36 = v30;
				// branch -> 0x77d30
				goto lab_0x77d30;
			}
		}
	}
	int32_t v50 = *(int32_t *)(g23 - 0x7664) + v2; // 0x77dec
	int32_t *v51 = (int32_t *)(v50 + 116);         // 0x77df0
	int32_t v52 = *v51;                            // 0x77df0
	int32_t result = v52;                          // r3
	*v51 = v52 - 1;
	if (*(int32_t *)(v50 + 116) == 0) {
		int32_t v53 = *(int32_t *)(g23 - 0x7664) + v2; // 0x77e10
		result = v53;
		*(int32_t *)(v53 + 52) = 1;
		// branch -> 0x77e1c
	}
	// 0x77e1c
	return result;
}

// Address range: 0x77e30 - 0x77fe4
int32_t function_77e30(int32_t a1)
{
	int32_t v1 = 180 * a1; // 0x77e38
	g27 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x77e3c
	g25 = v2;
	int32_t v3 = v2 + v1;                // 0x77e40
	int32_t v4 = *(int32_t *)(v3 + 120); // 0x77e54
	g30 = *(int32_t *)(v3 + 128);
	g35 = *(int32_t *)(v3 + 4);
	g33 = *(int32_t *)(v3 + 8);
	g36 = v4;
	int32_t v5 = 0;
	int32_t v6 = 1;
	if (v4 != -1) {
		// 0x77e70
		v5 = *(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * v4 + 112);
		v6 = 0;
		// branch -> 0x77e90
	}
	// 0x77e90
	g32 = v5;
	g31 = v6;
	g28 = v3;
	int32_t v7 = 0;                           // 0x77f987
	int32_t v8 = 0;                           // 0x77eac
	int32_t v9 = 0;                           // 0x77ea0
	int32_t v10 = *(int32_t *)(g23 - 0x7100); // 0x77eb4
	// branch -> 0x77e9c
	while (true) {
		int32_t v11 = (int32_t) * (char *)(v10 + 6); // 0x77e9c
		char *v12 = (char *)(v10 + 7);               // 0x77ea8
		int32_t v13;                                 // 0x77ea03
		int32_t v14;                                 // 0x77eac6
		int32_t v15;                                 // 0x77eb8
		int32_t v16;                                 // 0x77ec0
		int32_t v17;                                 // 0x77ee8
		int32_t v18;                                 // 0x77eec
		int32_t v19;                                 // 0x77ef4
		int32_t v20;                                 // 0x77f20
		int32_t v21;                                 // 0x77f24
		int32_t v22;                                 // 0x77f2c
		int32_t v23;                                 // 0x77f58
		int32_t v24;                                 // 0x77f5c
		int32_t v25;                                 // 0x77f64
		int32_t v26;                                 // 0x77f90
		int32_t v27;                                 // 0x77f98
		int32_t v28;                                 // 0x77f9c
		unsigned char v29;                           // 0x77eb4
		int32_t v30;                                 // 0x77ed0
		unsigned char v31;                           // 0x77ee8
		unsigned char v32;                           // 0x77ef0
		int32_t v33;                                 // 0x77f0c
		unsigned char v34;                           // 0x77f20
		unsigned char v35;                           // 0x77f28
		int32_t v36;                                 // 0x77f44
		unsigned char v37;                           // 0x77f58
		unsigned char v38;                           // 0x77f60
		int32_t v39;                                 // 0x77f7c
		if (v9 == v11) {
			// 0x77ea8
			if (v8 != (int32_t)*v12) {
				// 0x77eb4
				v29 = *v12;
				v15 = g35;
				v16 = g33;
				v30 = *(int32_t *)(g28 + 48);
				g13 = g36;
				AddMissile(v15, v16, v15 + v11, v16 + (int32_t)v29, g32, 4, 0x1000000 * g31 / 0x1000000, g30, v30);
				v17 = g29;
				v31 = *(char *)(v17 + 6);
				v18 = g35;
				v32 = *(char *)(v17 + 7);
				v19 = g33;
				g13 = g36;
				v33 = *(int32_t *)(g28 + 48);
				AddMissile(v18, v19, v18 - (int32_t)v31, v19 - (int32_t)v32, g32, 4, 0x1000000 * g31 / 0x1000000, g30, v33);
				v20 = g29;
				v34 = *(char *)(v20 + 6);
				v21 = g35;
				v35 = *(char *)(v20 + 7);
				v22 = g33;
				g13 = g36;
				v36 = *(int32_t *)(g28 + 48);
				AddMissile(v21, v22, v21 - (int32_t)v34, v22 + (int32_t)v35, g32, 4, 0x1000000 * g31 / 0x1000000, g30, v36);
				v23 = g29;
				v37 = *(char *)(v23 + 6);
				v24 = g35;
				v38 = *(char *)(v23 + 7);
				v25 = g33;
				g13 = g36;
				v39 = *(int32_t *)(g28 + 48);
				AddMissile(v24, v25, v24 + (int32_t)v37, v25 - (int32_t)v38, g32, 4, 0x1000000 * g31 / 0x1000000, g30, v39);
				v26 = g29;
				v28 = v26;
				v27 = g26;
				v14 = (int32_t) * (char *)(v26 + 7);
				v13 = (int32_t) * (char *)(v26 + 6);
				// branch -> 0x77f98
			} else {
				v28 = v10;
				v27 = v7;
				v14 = v8;
				v13 = v9;
			}
		lab_0x77f98:;
			int32_t v40 = v27 + 1; // 0x77f98
			if (v40 >= 23) {
				// break -> 0x77fa8
				break;
			}
			v7 = v40;
			v8 = v14;
			v9 = v13;
			v10 = v28 + 30;
			// continue -> 0x77e9c
			continue;
		} else {
			// 0x77eb4
			v29 = *v12;
			v15 = g35;
			v16 = g33;
			v30 = *(int32_t *)(g28 + 48);
			g13 = g36;
			AddMissile(v15, v16, v15 + v11, v16 + (int32_t)v29, g32, 4, 0x1000000 * g31 / 0x1000000, g30, v30);
			v17 = g29;
			v31 = *(char *)(v17 + 6);
			v18 = g35;
			v32 = *(char *)(v17 + 7);
			v19 = g33;
			g13 = g36;
			v33 = *(int32_t *)(g28 + 48);
			AddMissile(v18, v19, v18 - (int32_t)v31, v19 - (int32_t)v32, g32, 4, 0x1000000 * g31 / 0x1000000, g30, v33);
			v20 = g29;
			v34 = *(char *)(v20 + 6);
			v21 = g35;
			v35 = *(char *)(v20 + 7);
			v22 = g33;
			g13 = g36;
			v36 = *(int32_t *)(g28 + 48);
			AddMissile(v21, v22, v21 - (int32_t)v34, v22 + (int32_t)v35, g32, 4, 0x1000000 * g31 / 0x1000000, g30, v36);
			v23 = g29;
			v37 = *(char *)(v23 + 6);
			v24 = g35;
			v38 = *(char *)(v23 + 7);
			v25 = g33;
			g13 = g36;
			v39 = *(int32_t *)(g28 + 48);
			AddMissile(v24, v25, v24 + (int32_t)v37, v25 - (int32_t)v38, g32, 4, 0x1000000 * g31 / 0x1000000, g30, v39);
			v26 = g29;
			v28 = v26;
			v27 = g26;
			v14 = (int32_t) * (char *)(v26 + 7);
			v13 = (int32_t) * (char *)(v26 + 6);
			// branch -> 0x77f98
			goto lab_0x77f98;
		}
	}
	int32_t v41 = g27 + g25;               // 0x77fa8
	int32_t *v42 = (int32_t *)(v41 + 116); // 0x77fac
	int32_t v43 = *v42;                    // 0x77fac
	int32_t result = v43;                  // r3
	*v42 = v43 - 1;
	if (*(int32_t *)(v41 + 116) == 0) {
		int32_t v44 = g27 + g25; // 0x77fc4
		result = v44;
		*(int32_t *)(v44 + 52) = 1;
		// branch -> 0x77fd0
	}
	// 0x77fd0
	return result;
}

// Address range: 0x77fe4 - 0x77ffc
int32_t function_77fe4(int32_t a1)
{
	int32_t result = *(int32_t *)-0x7664 + 180 * a1; // 0x77fec
	*(int32_t *)(result + 52) = 1;
	return result;
}

// Address range: 0x77ffc - 0x78118
int32_t function_77ffc(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x78010
	g42 = 0;
	int32_t *v2 = (int32_t *)(v1 + 116); // 0x78034
	*v2 = *v2 - 1;
	int32_t *v3 = (int32_t *)(v1 + 152); // 0x78044
	*v3 = *v3 - 1;
	int32_t v4 = *(int32_t *)(v1 + 4); // 0x78058
	int32_t v5 = *(int32_t *)(v1 + 8); // 0x78060
	g41 = v5;
	int32_t result = function_6f3d4(a1, *(int32_t *)(v1 + 128), 1, v4, v5); // r3
	int32_t *v6 = (int32_t *)g33;                                           // 0x78068
	if (*v6 == 0) {
		// 0x78074
		if (*(int32_t *)(g28 + 132) == 1) {
			// 0x78080
			*v6 = g27;
			// branch -> 0x78084
		}
	}
	int32_t v7 = g32; // 0x78084
	int32_t v8 = v7;  // 0x7809c
	if (*(int32_t *)v7 == 0) {
		int32_t v9 = g35 + g36; // 0x78090
		result = v9;
		*(int32_t *)(v9 + 96) = 20;
		v8 = g32;
		// branch -> 0x7809c
	}
	// 0x7809c
	if (*(int32_t *)v8 <= 0) {
		int32_t v10 = g35 + g36;               // 0x780a8
		uint32_t v11 = *(int32_t *)(v10 + 96); // 0x780ac
		int32_t v12 = v11;
		if (v11 >= 12) {
			// 0x780b8
			v12 = 24 - v11;
			// branch -> 0x780bc
		}
		// 0x780bc
		g39 = v12;
		int32_t v13 = *(int32_t *)(v10 + 140); // 0x780c4
		result = function_cba34(v13, *(int32_t *)g30, *(int32_t *)g31);
		// branch -> 0x780d0
	}
	// 0x780d0
	if (*(int32_t *)g33 == 0) {
		int32_t v14 = g35 + g36; // 0x780dc
		*(int32_t *)(v14 + 52) = 1;
		result = AddUnLight(*(int32_t *)(v14 + 140));
		// branch -> 0x780f0
	}
	// 0x780f0
	if (*(int32_t *)g32 > 0) {
		// branch -> 0x78104
	} else {
		// 0x780fc
		g34 = g29;
		result = PutMissile();
		// branch -> 0x78104
	}
	// 0x78104
	return result;
}

// Address range: 0x78118 - 0x78268
int32_t function_78118(int32_t a1)
{
	// 0x78118
	g34 = a1;
	int32_t v1 = g34;                        // 0x78120
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x78124
	g36 = v2;
	int32_t v3 = 180 * v1; // 0x78128
	g35 = v3;
	int32_t v4 = v2 + v3;        // 0x7812c
	int32_t v5 = v4 + 116;       // 0x7813c
	int32_t *v6 = (int32_t *)v5; // 0x7813c
	*v6 = *v6 - 1;
	g32 = v5;
	int32_t *v7 = (int32_t *)(v4 + 36); // 0x78148
	*v7 = *(int32_t *)(v4 + 20) + *v7;
	int32_t *v8 = (int32_t *)(v4 + 40); // 0x7815c
	*v8 = *(int32_t *)(v4 + 24) + *v8;
	GetMissilePos();
	int32_t v9 = v4 + 4; // 0x78170
	g33 = v9;
	int32_t v10 = v4 + 148; // 0x78174
	g31 = v10;
	int32_t *v11 = (int32_t *)v9; // 0x78178
	int32_t result;
	if (*v11 == *(int32_t *)v10) {
		// 0x78188
		if (*(int32_t *)(v4 + 8) == *(int32_t *)(v4 + 152)) {
			// 0x7822c
			result = g35 + g36;
			if (*(int32_t *)g32 != 0) {
				// 0x78238
				if (*(int32_t *)(result + 156) != 3) {
					// 0x78254
					return result;
				}
			}
			// 0x78248
			*(int32_t *)(result + 52) = 1;
			// branch -> 0x78254
			// 0x78254
			return result;
		}
	}
	int32_t v12 = *v11;                       // 0x78198
	int32_t v13 = g35 + g36;                  // 0x7819c
	int32_t v14 = *(int32_t *)(g23 - 0x757c); // 0x781a0
	int32_t v15 = v13 + 8;                    // 0x781a4
	int32_t v16 = *(int32_t *)v15;            // 0x781a4
	g30 = v15;
	int16_t v17 = *(int16_t *)(*(int32_t *)v14 + 2 * v16 + 224 * v12); // 0x781bc
	if (*(char *)((int32_t)v17 + *(int32_t *)(g23 - 0x7234)) == 0) {
		int32_t v18 = *(int32_t *)(v13 + 156); // 0x781d4
		g13 = *(int32_t *)(v4 + 120);
		int32_t v19 = *(int32_t *)(v13 + 48);  // 0x781e4
		int32_t v20 = *(int32_t *)(v13 + 124); // 0x781ec
		int32_t v21 = *(int32_t *)(v13 + 28);  // 0x781f0
		int32_t v22 = *(int32_t *)(v13 + 32);  // 0x781f4
		AddMissile(v12, v16, v21, v22, v1, 48, 0x1000000 * v20 / 0x1000000, v18, v19);
		// branch -> 0x7820c
	} else {
		// 0x78204
		*(int32_t *)g32 = 0;
		// branch -> 0x7820c
	}
	int32_t v23 = g35 + g36; // r4
	*(int32_t *)g31 = *(int32_t *)g33;
	*(int32_t *)(v23 + 152) = *(int32_t *)g30;
	int32_t *v24 = (int32_t *)(v23 + 156); // 0x78220
	*v24 = *v24 + 1;
	// branch -> 0x7822c
	// 0x7822c
	result = g35 + g36;
	if (*(int32_t *)g32 == 0) {
		// 0x78248
		*(int32_t *)(result + 52) = 1;
		// branch -> 0x78254
		// 0x78254
		return result;
	}
	// 0x78238
	if (*(int32_t *)(result + 156) != 3) {
		// 0x78254
		return result;
	}
	// 0x78248
	*(int32_t *)(result + 52) = 1;
	// branch -> 0x78254
	// 0x78254
	return result;
}

// Address range: 0x78268 - 0x78488
int32_t function_78268(int32_t a1)
{
	g31 = a1;
	int32_t v1 = 180 * a1; // 0x78278
	g35 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x7827c
	g36 = v2;
	int32_t v3 = v2 + v1;                                // 0x78280
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x5f40); // bp-104
	int32_t v5 = v3 + 116;                               // 0x78310
	int32_t *v6 = (int32_t *)v5;                         // 0x78310
	*v6 = *v6 - 1;
	if (*(char *)(v3 + 56) != 3) {
		int32_t v7 = v3 + 156; // 0x78328
		g33 = v7;
		int32_t *v8 = (int32_t *)v7; // 0x7832c
		int32_t v9 = *v8;            // 0x7832c
		if (v9 == 0) {
			int32_t *v10 = (int32_t *)(v3 + 144); // 0x78338
			int32_t v11 = *v10;                   // 0x78338
			g34 = g31;
			int32_t v12 = *(int32_t *)(4 * v11 + (int32_t)&v4); // 0x7834c
			*v10 = (v11 + 1) % 16;
			int32_t v13 = __asm_rlwinm(v12 + *(int32_t *)(v3 + 152), 2, 27, 29); // 0x78364
			g41 = 8;
			int32_t v14 = *(int32_t *)(v3 + 4); // 0x78374
			g37 = v14;
			int32_t v15 = *(int32_t *)(v3 + 8); // 0x7837c
			g38 = v15;
			g39 = v14 + *(int32_t *)(*(int32_t *)(g23 - 0x70d8) + v13);
			g40 = v15 + *(int32_t *)(*(int32_t *)(g23 - 0x70dc) + v13);
			GetMissileVel();
			*(int32_t *)g33 = 16;
			// branch -> 0x783a0
		} else {
			// 0x78398
			*v8 = v9 - 1;
			// branch -> 0x783a0
		}
		int32_t v16 = g35 + g36;              // 0x783a0
		int32_t *v17 = (int32_t *)(v16 + 36); // 0x783a4
		g34 = g31;
		*v17 = *(int32_t *)(v16 + 20) + *v17;
		int32_t *v18 = (int32_t *)(v16 + 40); // 0x783b8
		*v18 = *(int32_t *)(v16 + 24) + *v18;
		GetMissilePos();
		int32_t v19 = *(int32_t *)(v16 + 8); // 0x783dc
		g41 = v19;
		g42 = 0;
		function_6f3d4(g31, *(int32_t *)(v16 + 128), 0, *(int32_t *)(v16 + 4), v19);
		if (*(int32_t *)(g33 + 132) == 1) {
			// 0x78400
			*(int32_t *)(g33 + 148) = 8;
			int32_t v20 = 0; // r0
			*(int32_t *)(g33 + 44) = 0;
			g37 = 3;
			*(int32_t *)(g33 + 12) = v20;
			*(int32_t *)(g33 + 16) = v20;
			SetMissAnim(g31);
			g34 = g31;
			*(int32_t *)g32 = *(int32_t *)(g33 + 76);
			GetMissilePos();
			// branch -> 0x78434
		}
		int32_t v21 = g35 + g36; // 0x78434
		g39 = *(int32_t *)(v21 + 148);
		function_cba34(*(int32_t *)(v21 + 140), *(int32_t *)g29, *(int32_t *)g30);
		v5 = g32;
		// branch -> 0x7844c
	}
	// 0x7844c
	if (*(int32_t *)v5 == 0) {
		int32_t v22 = g35 + g36; // 0x78458
		*(int32_t *)(v22 + 52) = 1;
		AddUnLight(*(int32_t *)(v22 + 140));
		// branch -> 0x7846c
	}
	// 0x7846c
	g34 = g31;
	return PutMissile();
}

// Address range: 0x78488 - 0x78648
int32_t function_78488(int32_t a1)
{
	g26 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7664); // 0x78494
	g35 = v1;
	int32_t v2 = 180 * a1; // 0x78498
	g33 = v2;
	int32_t v3 = v1 + v2; // 0x7849c
	g36 = v3;
	int32_t v4 = v3 + 116;       // 0x784ac
	int32_t *v5 = (int32_t *)v4; // 0x784ac
	*v5 = *v5 - 1;
	g32 = v4;
	int32_t v6 = g36; // 0x784b8
	if (*(char *)(v6 + 56) == 28) {
		int32_t v7 = v6 + 140; // 0x785f4
		g39 = *(int32_t *)(v6 + 96) + 7;
		int32_t v8 = *(int32_t *)(v6 + 8); // 0x78608
		function_cba34(*(int32_t *)v7, *(int32_t *)(v6 + 4), v8);
		if (*(int32_t *)g32 == 0) {
			// 0x7861c
			*(int32_t *)(g36 + 52) = 1;
			AddUnLight(*(int32_t *)v7);
			// branch -> 0x7862c
		}
		// 0x7862c
		g34 = g26;
		return PutMissile();
	}
	int32_t v9 = v6 + 36; // 0x784c4
	g30 = v9;
	int32_t v10 = v6 + 20; // 0x784c8
	g31 = v10;
	int32_t *v11 = (int32_t *)v9; // 0x784cc
	g28 = v6 + 40;
	g29 = v6 + 24;
	g34 = g26;
	*v11 = *(int32_t *)v10 + *v11;
	int32_t v12 = g36;                    // 0x784e8
	int32_t *v13 = (int32_t *)(v12 + 40); // 0x784e8
	*v13 = *(int32_t *)(v12 + 24) + *v13;
	GetMissilePos();
	int32_t v14 = g36;     // 0x784fc
	int32_t v15 = v14 + 4; // 0x784fc
	g27 = v15;
	int32_t v16 = *(int32_t *)(v14 + 128); // 0x78508
	int32_t v17;                           // 0x7852c
	if (*(int32_t *)v15 == *(int32_t *)(v14 + 28)) {
		// 0x78514
		if (*(int32_t *)(v14 + 8) != *(int32_t *)(v14 + 32)) {
			// 0x78524
			v17 = *(int32_t *)(g33 + g35 + 8);
			g41 = v17;
			g42 = 0;
			function_6f3d4(g26, v16, 0, v17, 0);
			// branch -> 0x78540
		}
	} else {
		// 0x78524
		v17 = *(int32_t *)(g33 + g35 + 8);
		g41 = v17;
		g42 = 0;
		function_6f3d4(g26, v16, 0, v17, 0);
		// branch -> 0x78540
	}
	// 0x78540
	if (*(int32_t *)g32 == 0) {
		// 0x7854c
		g34 = g26;
		int32_t *v18 = (int32_t *)g30; // 0x78554
		*v18 = *v18 - *(int32_t *)g31;
		int32_t *v19 = (int32_t *)g28; // 0x78564
		*v19 = *v19 - *(int32_t *)g29;
		GetMissilePos();
		int32_t v20 = g33 + g35; // 0x78574
		*(int32_t *)(v20 + 44) = 0;
		g37 = 28;
		SetMissAnim(g26);
		*(int32_t *)g32 = *(int32_t *)(v20 + 76) - 1;
		// branch -> 0x7862c
	} else {
		int32_t v21 = g33 + g35;       // 0x7859c
		int32_t *v22 = (int32_t *)g27; // 0x785a0
		int32_t v23 = v21 + 148;       // 0x785a4
		int32_t *v24 = (int32_t *)v23; // 0x785a4
		if (*v22 == *v24) {
			// 0x785b0
			if (*(int32_t *)(v21 + 8) == *(int32_t *)(v21 + 152)) {
				// 0x7862c
				g34 = g26;
				return PutMissile();
			}
		} else {
			// 0x7859c
			// branch -> 0x785c4
		}
		int32_t v25 = v21; // r3
		*v24 = *v22;
		g39 = 8;
		*(int32_t *)(v25 + 152) = *(int32_t *)(v25 + 8);
		int32_t v26 = *(int32_t *)(v25 + 140); // 0x785e0
		function_cba34(v26, *(int32_t *)v23, *(int32_t *)(v21 + 152));
		// branch -> 0x7862c
	}
	// 0x7862c
	g34 = g26;
	return PutMissile();
}

// Address range: 0x78648 - 0x78ae0
int32_t function_78648(int32_t a1)
{
	g25 = a1;
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x78664
	g36 = v1;
	int32_t *v2 = (int32_t *)(v1 + 116); // 0x78674
	*v2 = *v2 - 1;
	int32_t v3 = g36; // 0x78680
	int32_t result;
	if (*(char *)(v3 + 56) == 19) {
		int32_t v4 = v3 + 140; // 0x78698
		g26 = v4;
		int32_t v5 = *(int32_t *)(v3 + 4);                                         // 0x7869c
		int32_t v6 = *(int32_t *)(v3 + 8);                                         // 0x786a0
		int32_t v7 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * *(int32_t *)(v3 + 120); // 0x786a4
		int32_t v8 = *(int32_t *)(v7 + 60);                                        // r30
		g39 = *(int32_t *)(v3 + 96);
		function_cba34(*(int32_t *)v4, v5, v6);
		if (function_6d988(*(int32_t *)(v7 + 56), v8, v5, v6) == 0) {
			int32_t v9 = g27; // 0x786e4
			g41 = g29;
			g42 = 1;
			function_6f3d4(g25, v9, v9, 1, g28);
			// branch -> 0x78700
		}
		// 0x78700
		if (function_6d988(g32, g35, g28, g29 + 1) == 0) {
			// 0x7871c
			g41 = g29 + 1;
			int32_t v10 = g27; // 0x78724
			g42 = 1;
			function_6f3d4(g25, v10, v10, 1, g28);
			// branch -> 0x7873c
		}
		// 0x7873c
		if (function_6d988(g32, g35, g28, g29 - 1) == 0) {
			// 0x78758
			g41 = g29 - 1;
			int32_t v11 = g27; // 0x78760
			g42 = 1;
			function_6f3d4(g25, v11, v11, 1, g28);
			// branch -> 0x78778
		}
		// 0x78778
		if (function_6d988(g32, g35, g28 + 1, g29) == 0) {
			int32_t v12 = g27; // 0x7879c
			g41 = g29;
			g42 = 1;
			function_6f3d4(g25, v12, v12, 1, g28 + 1);
			// branch -> 0x787b4
		}
		// 0x787b4
		if (function_6d988(g32, g35, g28 + 1, g29 - 1) == 0) {
			int32_t v13 = g27; // 0x787d8
			g41 = g29 - 1;
			g42 = 1;
			function_6f3d4(g25, v13, v13, 1, g28 + 1);
			// branch -> 0x787f0
		}
		// 0x787f0
		if (function_6d988(g32, g35, g28 + 1, g29 + 1) == 0) {
			int32_t v14 = g27; // 0x78814
			g41 = g29 + 1;
			g42 = 1;
			function_6f3d4(g25, v14, v14, 1, g28 + 1);
			// branch -> 0x7882c
		}
		// 0x7882c
		if (function_6d988(g32, g35, g28 - 1, g29) == 0) {
			int32_t v15 = g27; // 0x78850
			g41 = g29;
			g42 = 1;
			function_6f3d4(g25, v15, v15, 1, g28 - 1);
			// branch -> 0x78868
		}
		// 0x78868
		if (function_6d988(g32, g35, g28 - 1, g29 + 1) == 0) {
			int32_t v16 = g27; // 0x7888c
			g41 = g29 + 1;
			g42 = 1;
			function_6f3d4(g25, v16, v16, 1, g28 - 1);
			// branch -> 0x788a4
		}
		// 0x788a4
		if (function_6d988(g32, g35, g28 - 1, g29 - 1) == 0) {
			int32_t v17 = g27; // 0x788c8
			g41 = g29 - 1;
			g42 = 1;
			function_6f3d4(g25, v17, v17, 1, g28 - 1);
			// branch -> 0x788e0
		}
		// 0x788e0
		if (*(int32_t *)g30 == 0) {
			// 0x788ec
			*(int32_t *)(g31 + g33 + 52) = 1;
			AddUnLight(*(int32_t *)g26);
			// branch -> 0x78900
		}
		// 0x78900
		g34 = g25;
		result = PutMissile();
		// branch -> 0x78acc
	} else {
		int32_t *v18 = (int32_t *)(v3 + 36); // 0x7890c
		g34 = g25;
		*v18 = *(int32_t *)(v3 + 20) + *v18;
		int32_t v19 = g36;                    // 0x78920
		int32_t *v20 = (int32_t *)(v19 + 40); // 0x78920
		*v20 = *(int32_t *)(v19 + 24) + *v20;
		GetMissilePos();
		int32_t v21 = g36;                    // 0x78934
		int32_t v22 = *(int32_t *)(v3 + 128); // 0x78940
		g41 = *(int32_t *)(v21 + 8);
		g42 = 0;
		function_6f3d4(g25, v22, v22, 0, *(int32_t *)(v21 + 4));
		int32_t v23 = g36;             // 0x7895c
		int32_t v24 = v23 + 156;       // 0x7895c
		int32_t *v25 = (int32_t *)v24; // 0x78960
		if (*v25 == 0) {
			// 0x7896c
			if (g29 == *(int32_t *)(v23 + 160)) {
				// 0x78978
				if (g28 == *(int32_t *)(v23 + 164)) {
					// 0x78984
					*v25 = 1;
					// branch -> 0x7898c
				}
			}
		}
		int32_t *v26 = (int32_t *)v24; // 0x7898c
		int32_t v27;                   // 0x78a5c
		int32_t v28;                   // 0x78a54
		int32_t *v29;                  // 0x78a58
		int32_t v30;                   // 0x78a78
		int32_t v31;                   // 0x78aa0
		if (*v26 == 1) {
			// 0x78998
			*v26 = 2;
			*(int32_t *)g30 = 255;
			int32_t v32 = function_6da34(g29, g28, 19); // 0x789b4
			if (v32 < 1) {
				int32_t v33 = *(int32_t *)(g35 + 0x55ec * g26 + 112); // 0x78a14
				SetMissDir(g25, v33);
				int32_t v34 = 4 * v33; // 0x78a28
				g34 = g25;
				int32_t v35 = g29; // 0x78a3c
				g37 = v35;
				int32_t v36 = g28; // 0x78a40
				g38 = v36;
				g39 = v35 + *(int32_t *)(v34 + *(int32_t *)(g23 - 0x70d8));
				g40 = v36 + *(int32_t *)(*(int32_t *)(g23 - 0x70dc) + v34);
				g41 = 16;
				GetMissileVel();
				// branch -> 0x78a54
			} else {
				int32_t v37 = g32 + 232 * v32;                                            // 0x789c8
				int32_t v38 = v37 + 32;                                                   // 0x789d0
				int32_t v39 = v37 + 36;                                                   // 0x789d8
				int32_t v40 = GetDirection8(g29, g28, *(int32_t *)v38, *(int32_t *)v39); // 0x789dc
				SetMissDir(g25, v40);
				g39 = *(int32_t *)v38;
				g34 = g25;
				g40 = *(int32_t *)v39;
				g37 = g29;
				g38 = g28;
				g41 = 16;
				GetMissileVel();
				// branch -> 0x78a54
			}
			// 0x78a54
			v28 = g31 + g33;
			v29 = (int32_t *)(v28 + 148);
			v27 = g29;
			if (v27 == *v29) {
				// 0x78a64
				if (g28 != *(int32_t *)(v28 + 152)) {
					// 0x78a74
					*v29 = v27;
					v30 = g31 + g33;
					*(int32_t *)(v30 + 152) = g28;
					g39 = 8;
					function_cba34(*(int32_t *)(v30 + 140), g29, g28);
					// branch -> 0x78a94
				}
			} else {
				// 0x78a74
				*v29 = v27;
				v30 = g31 + g33;
				*(int32_t *)(v30 + 152) = g28;
				g39 = 8;
				function_cba34(*(int32_t *)(v30 + 140), g29, g28);
				// branch -> 0x78a94
			}
			// 0x78a94
			if (*(int32_t *)g30 == 0) {
				// 0x78aa0
				v31 = g31 + g33;
				*(int32_t *)(v31 + 44) = 0;
				g37 = 19;
				SetMissAnim(g25);
				*(int32_t *)g30 = *(int32_t *)(v31 + 76) - 1;
				// branch -> 0x78ac4
			}
			// 0x78ac4
			g34 = g25;
			result = PutMissile();
			// branch -> 0x78acc
			// 0x78acc
			return result;
		}
		// 0x78a54
		v28 = g31 + g33;
		v29 = (int32_t *)(v28 + 148);
		v27 = g29;
		if (v27 == *v29) {
			// 0x78a64
			if (g28 != *(int32_t *)(v28 + 152)) {
				// 0x78a74
				*v29 = v27;
				v30 = g31 + g33;
				*(int32_t *)(v30 + 152) = g28;
				g39 = 8;
				function_cba34(*(int32_t *)(v30 + 140), g29, g28);
				// branch -> 0x78a94
			}
		} else {
			// 0x78a74
			*v29 = v27;
			v30 = g31 + g33;
			*(int32_t *)(v30 + 152) = g28;
			g39 = 8;
			function_cba34(*(int32_t *)(v30 + 140), g29, g28);
			// branch -> 0x78a94
		}
		// 0x78a94
		if (*(int32_t *)g30 == 0) {
			// 0x78aa0
			v31 = g31 + g33;
			*(int32_t *)(v31 + 44) = 0;
			g37 = 19;
			SetMissAnim(g25);
			*(int32_t *)g30 = *(int32_t *)(v31 + 76) - 1;
			// branch -> 0x78ac4
		}
		// 0x78ac4
		g34 = g25;
		result = PutMissile();
		// branch -> 0x78acc
	}
	// 0x78acc
	return result;
}

// Address range: 0x78ae0 - 0x78d44
int32_t function_78ae0(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664) + 180 * a1; // 0x78af8
	g36 = v1;
	int32_t v2 = v1 + 116;       // 0x78b0c
	int32_t *v3 = (int32_t *)v2; // 0x78b0c
	*v3 = *v3 - 1;
	int32_t v4 = g36;                    // 0x78b18
	int32_t v5 = *(int32_t *)(v1 + 128); // r21
	int32_t result;
	if (*(int32_t *)(v4 + 44) == 8) {
		int32_t v6 = v4 + 140;       // 0x78b30
		int32_t v7 = *(int32_t *)v6; // 0x78b38
		g39 = *(int32_t *)(v4 + 96);
		function_cba34(v7, *(int32_t *)(v4 + 4), *(int32_t *)(v4 + 8));
		if (*(int32_t *)v2 == 0) {
			// 0x78b50
			*(int32_t *)(g36 + 52) = 1;
			AddUnLight(*(int32_t *)v6);
			// branch -> 0x78b60
		}
		// 0x78b60
		g34 = a1;
		result = PutMissile();
		// branch -> 0x78d30
	} else {
		int32_t *v8 = (int32_t *)(v4 + 36); // 0x78b6c
		g34 = a1;
		*v8 = *(int32_t *)(v4 + 20) + *v8;
		int32_t v9 = g36;                    // 0x78b80
		int32_t *v10 = (int32_t *)(v9 + 40); // 0x78b80
		*v10 = *(int32_t *)(v9 + 24) + *v10;
		GetMissilePos();
		int32_t v11 = g36; // 0x78b94
		g41 = *(int32_t *)(v11 + 8);
		g42 = 0;
		function_6f3d4(a1, v5, v5, 0, *(int32_t *)(v11 + 4));
		int32_t v12 = g36;             // 0x78bbc
		int32_t v13 = v12 + 156;       // 0x78bbc
		int32_t *v14 = (int32_t *)v13; // 0x78bc0
		if (*v14 == 0) {
			// 0x78bcc
			if (g29 == *(int32_t *)(v12 + 160)) {
				// 0x78bd8
				if (g28 == *(int32_t *)(v12 + 164)) {
					// 0x78be4
					*v14 = 1;
					// branch -> 0x78bec
				}
			}
		}
		int32_t *v15 = (int32_t *)v13; // 0x78bec
		int32_t v16;                   // 0x78cd0
		int32_t v17;                   // 0x78cc8
		int32_t *v18;                  // 0x78ccc
		int32_t v19;                   // 0x78cec
		if (*v15 == 1) {
			// 0x78bf8
			*v15 = 2;
			*(int32_t *)g31 = 255;
			int32_t v20 = function_6da34(g29, g28, 19); // 0x78c14
			if (v20 < 1) {
				int32_t v21 = *(int32_t *)(*(int32_t *)(g23 - 0x77a8) + 0x55ec * g27 + 112); // 0x78c88
				SetMissDir(g26, v21);
				int32_t v22 = 4 * v21; // 0x78c9c
				g34 = g26;
				int32_t v23 = g29; // 0x78cb0
				g37 = v23;
				int32_t v24 = g28; // 0x78cb4
				g38 = v24;
				g39 = v23 + *(int32_t *)(v22 + *(int32_t *)(g23 - 0x70d8));
				g40 = v24 + *(int32_t *)(*(int32_t *)(g23 - 0x70dc) + v22);
				g41 = 16;
				GetMissileVel();
				// branch -> 0x78cc8
			} else {
				int32_t v25 = g33 + 232 * v20; // 0x78c24
				int32_t v26 = v25 + 36;        // r23
				*(int32_t *)g30 = *(int32_t *)(v25 + 152) / 128;
				int32_t v27 = *(int32_t *)v26;                                       // 0x78c48
				int32_t v28 = GetDirection8(g29, g28, *(int32_t *)(v25 + 32), v27); // 0x78c4c
				SetMissDir(g26, v28);
				g39 = *(int32_t *)g33;
				g34 = g26;
				g40 = *(int32_t *)v26;
				g37 = g29;
				g38 = g28;
				g41 = 16;
				GetMissileVel();
				// branch -> 0x78cc8
			}
			// 0x78cc8
			v17 = g32 + g35;
			v18 = (int32_t *)(v17 + 148);
			v16 = g29;
			if (v16 == *v18) {
				// 0x78cd8
				if (g28 != *(int32_t *)(v17 + 152)) {
					// 0x78ce8
					*v18 = v16;
					v19 = g32 + g35;
					*(int32_t *)(v19 + 152) = g28;
					g39 = 8;
					function_cba34(*(int32_t *)(v19 + 140), g29, g28);
					// branch -> 0x78d08
				}
			} else {
				// 0x78ce8
				*v18 = v16;
				v19 = g32 + g35;
				*(int32_t *)(v19 + 152) = g28;
				g39 = 8;
				function_cba34(*(int32_t *)(v19 + 140), g29, g28);
				// branch -> 0x78d08
			}
			// 0x78d08
			if (*(int32_t *)g31 == 0) {
				// 0x78d14
				SetMissDir(g26, 8);
				*(int32_t *)g31 = 7;
				// branch -> 0x78d28
			}
			// 0x78d28
			g34 = g26;
			result = PutMissile();
			// branch -> 0x78d30
			// 0x78d30
			return result;
		}
		// 0x78cc8
		v17 = g32 + g35;
		v18 = (int32_t *)(v17 + 148);
		v16 = g29;
		if (v16 == *v18) {
			// 0x78cd8
			if (g28 != *(int32_t *)(v17 + 152)) {
				// 0x78ce8
				*v18 = v16;
				v19 = g32 + g35;
				*(int32_t *)(v19 + 152) = g28;
				g39 = 8;
				function_cba34(*(int32_t *)(v19 + 140), g29, g28);
				// branch -> 0x78d08
			}
		} else {
			// 0x78ce8
			*v18 = v16;
			v19 = g32 + g35;
			*(int32_t *)(v19 + 152) = g28;
			g39 = 8;
			function_cba34(*(int32_t *)(v19 + 140), g29, g28);
			// branch -> 0x78d08
		}
		// 0x78d08
		if (*(int32_t *)g31 == 0) {
			// 0x78d14
			SetMissDir(g26, 8);
			*(int32_t *)g31 = 7;
			// branch -> 0x78d28
		}
		// 0x78d28
		g34 = g26;
		result = PutMissile();
		// branch -> 0x78d30
	}
	// 0x78d30
	return result;
}

// Address range: 0x78d44 - 0x78d94
int32_t function_78d44(int32_t a1)
{
	// 0x78d44
	g34 = a1;
	int32_t v1 = 180 * g34;                  // 0x78d48
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0x78d50
	int32_t v3 = v2 + v1;                    // 0x78d58
	int32_t *v4 = (int32_t *)(v3 + 116);     // 0x78d5c
	*v4 = *v4 - 1;
	if (*(int32_t *)(v3 + 116) == 0) {
		// 0x78d74
		*(int32_t *)(v1 + v2 + 52) = 1;
		// branch -> 0x78d80
	}
	// 0x78d80
	return PutMissile();
}

// Address range: 0x78d94 - 0x78edc
int32_t function_78d94(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7664);     // r31
	int32_t v2 = 8;                              // ctr
	int32_t v3;                                  // bp-112
	int32_t v4 = &v3;                            // 0x78dc8
	int32_t v5 = *(int32_t *)(g23 - 0x5f44) - 8; // 0x78dc0
	// branch -> 0x78dc0
	while (true) {
		int32_t v6 = v5 + 8; // 0x78dc0
		int32_t v7 = v4 + 8; // 0x78dc8
		*(int32_t *)v7 = *(int32_t *)v6;
		*(int32_t *)(v4 + 12) = *(int32_t *)(v5 + 12);
		int32_t v8 = v2 - 1; // 0x78dd0
		v2 = v8;
		if (v8 == 0) {
			int32_t v9 = 180 * a1; // r29
			*(int32_t *)(v7 + 8) = *(int32_t *)(v6 + 8);
			int32_t v10 = v9 + v1 + 116;   // 0x78de4
			int32_t *v11 = (int32_t *)v10; // 0x78de4
			uint32_t v12 = *v11;           // 0x78de4
			if (v12 >= 2) {
				// 0x78df0
				*v11 = v12 - 1;
				// branch -> 0x78df8
			}
			int32_t v13 = *(int32_t *)(v1 + v9 + 148); // 0x78e00
			if (*(int32_t *)v10 == v13) {
				// 0x78e0c
				SetMissDir(a1, 1);
				// branch -> 0x78e18
			}
			// 0x78e18
			if (*(char *)*(int32_t *)(g23 - 0x77e4) != 0) {
				int32_t v14 = v9 + v1; // 0x78e28
				if (*(int32_t *)(v14 + 44) != 1) {
					// 0x78e38
					if (*(int32_t *)v10 != 0) {
						int32_t v15 = v14 + 152; // 0x78e44
						int32_t v16;             // bp-104
						int32_t v17;
						if (*(int32_t *)v15 == 0) {
							int32_t v18 = AddLight(*(int32_t *)(v14 + 4), *(int32_t *)(v14 + 8), v16); // 0x78e68
							*(int32_t *)(v14 + 140) = v18;
							v17 = &v16;
							// branch -> 0x78e70
						} else {
							// 0x78e44
							v17 = &v16;
							// branch -> 0x78e70
						}
						int32_t v19 = v1 + v9;               // 0x78e74
						int32_t v20 = *(int32_t *)(v19 + 8); // 0x78e88
						g39 = *(int32_t *)(4 * *(int32_t *)v15 + v17);
						function_cba34(*(int32_t *)(v19 + 140), *(int32_t *)(v19 + 4), v20);
						int32_t *v21 = (int32_t *)v15; // 0x78e94
						*v21 = *v21 + 1;
						// branch -> 0x78ea0
					}
				}
			}
			// 0x78ea0
			if (*(int32_t *)v10 != 0) {
				// 0x78ec0
				g34 = a1;
				return PutMissile();
			}
			int32_t v22 = v9 + v1; // 0x78eac
			*(int32_t *)(v22 + 52) = 1;
			AddUnLight(*(int32_t *)(v22 + 140));
			// branch -> 0x78ec0
			// 0x78ec0
			g34 = a1;
			return PutMissile();
		}
		// 0x78dc0
		v4 = v7;
		v5 = v6;
		// branch -> 0x78dc0
	}
}

// Address range: 0x78edc - 0x7911c
int32_t ProcessMissiles(int32_t a1)
{
	int32_t v1 = g10;                        // 0x78ee0
	int32_t v2 = *(int32_t *)(g23 - 0x7660); // 0x78ee4
	g30 = v2;
	g32 = *(int32_t *)(g23 - 0x70fc);
	g33 = *(int32_t *)(g23 - 0x70e8);
	int32_t v3 = *(int32_t *)(g23 - 0x7668); // 0x78f04
	g35 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7664); // 0x78f08
	g36 = v4;
	int32_t v5 = v3; // 0x78fb021
	if (*(int32_t *)v3 > 0) {
		int32_t v6 = 0; // 0x78f24
		while (true) {
			int32_t v7 = *(int32_t *)*(int32_t *)(g23 - 0x779c);                   // 0x78f20
			int32_t v8 = 180 * *(int32_t *)v2 + v4;                                // 0x78f2c
			int32_t v9 = v8 + 8;                                                   // 0x78f30
			int32_t v10 = v8 + 4;                                                  // 0x78f34
			int32_t v11 = *(int32_t *)v9 + 112 * *(int32_t *)v10;                  // 0x78f44
			int32_t v12 = __asm_rlwinm((int32_t) * (char *)(v11 + v7), 0, 24, 30); // 0x78f4c
			*(char *)(v11 + v7) = (char)v12;
			int32_t v13 = *(int32_t *)v9;                         // 0x78f58
			int32_t v14 = *(int32_t *)*(int32_t *)(g23 - 0x7594); // 0x78f60
			*(char *)(v14 + v13 + 112 * *(int32_t *)v10) = (char)0;
			int32_t v15 = g35;    // 0x78f6c
			int32_t v16 = v6 + 1; // 0x78f70
			if (v16 < *(int32_t *)v15) {
				// 0x78f18
				v4 = g36;
				v6 = v16;
				v2 += 4;
				// branch -> 0x78f18
				continue;
			} else {
				v5 = v15;
			}
		}
	}
	// 0x78f78
	g37 = 0;
	int32_t v17;     // r24
	int32_t v18;     // r25
	int32_t v19;     // r27
	int32_t result2; // r3
	int32_t v20;     // 0x7907814
	int32_t v21;     // 0x7909c
	int32_t v22;     // 0x790b4
	int32_t v23;     // 0x790b8
	int32_t v24;     // 0x790bc
	int32_t v25;     // 0x790bc8
	int32_t v26;     // 0x790f8
	int32_t v27;     // 0x790fc1
	int32_t v28;     // 0x790fc55
	int32_t v29;     // 0x78fd4
	int32_t v30;     // 0x78fdc
	int32_t v31;     // 0x7909c
	int32_t result;  // 0x78fbc
	int32_t v32;     // 0x790d4
	if (*(int32_t *)v5 <= 0) {
		// 0x78fbc
		result = *(int32_t *)(g23 - 0x70e4);
		v17 = 0;
		v19 = g30;
		*(int32_t *)result = 0;
		*(int32_t *)g32 = v17;
		v20 = g35;
		v25 = v20;
		if (v17 < *(int32_t *)v20) {
			// 0x78fd4
			// branch -> 0x78fd4
			while (true) {
				// 0x78fd4
				v29 = *(int32_t *)v19;
				g34 = v29;
				v30 = g36 + 180 * v29;
				v18 = v30;
				g15 = *(int32_t *)(g33 + 28 * *(int32_t *)v30 + 8);
				result2 = FunctionPointer();
				if (__asm_rlwinm_(*(int32_t *)(v18 + 60), 0, 30, 30) == 0) {
					goto lab_0x79004;
				}
				goto lab_0x79070;
			}
		}
		// 0x79084
		v27 = v25;
		if (*(int32_t *)g32 != 0) {
			// 0x79090
			if (*(int32_t *)v25 > 0) {
				v21 = g30;
				while (true) {
					// 0x7909c
					v31 = *(int32_t *)v21;
					result2 = v31;
					if (*(int32_t *)(g36 + 180 * v31) == 13) {
						goto lab_0x790b0_2;
					}
					v24 = v25;
					v23 = 0;
					v22 = v21;
					goto lab_0x790b4_2;
				}
			} else {
				v27 = v25;
			}
		}
		// 0x790c8
		g37 = 0;
		if (*(int32_t *)v27 > 0) {
			v28 = v27;
			v26 = 0;
			while (true) {
				// 0x790d0
				v32 = *(int32_t *)(g30 + 4 * v26);
				if (*(int32_t *)(g36 + 180 * v32 + 52) == 0) {
					goto lab_0x790f8_3;
				}
				goto lab_0x790ec_3;
			}
		}
		// 0x79108
		g10 = v1;
		return result;
	}
	int32_t v33 = 0; // 0x78fac
	while (true) {
		int32_t v34 = *(int32_t *)(g30 + 4 * v33); // 0x78f84
		int32_t v35;
		int32_t v36; // 0x78fb0
		if (*(int32_t *)(g36 + 180 * v34 + 52) == 0) {
			// 0x78fac
			v36 = v5;
			v35 = v33 + 1;
			// branch -> 0x78fb0
		} else {
			// 0x78fa0
			DeleteMissile(v34);
			v36 = g35;
			v35 = 0;
			// branch -> 0x78fb0
		}
		// 0x78fb0
		g37 = v35;
		if (v35 >= *(int32_t *)v36) {
			// break -> 0x78fbc
			break;
		}
		v5 = v36;
		v33 = v35;
		// continue -> 0x78f80
	}
	// 0x78fbc
	result = *(int32_t *)(g23 - 0x70e4);
	v17 = 0;
	v19 = g30;
	*(int32_t *)result = 0;
	*(int32_t *)g32 = v17;
	v20 = g35;
	v25 = v20;
	if (v17 >= *(int32_t *)v20) {
		// 0x79084
		v27 = v25;
		if (*(int32_t *)g32 != 0) {
			// 0x79090
			if (*(int32_t *)v25 > 0) {
				v21 = g30;
				while (true) {
					// 0x7909c
					v31 = *(int32_t *)v21;
					result2 = v31;
					if (*(int32_t *)(g36 + 180 * v31) == 13) {
						goto lab_0x790b0_2;
					}
					v24 = v25;
					v23 = 0;
					v22 = v21;
					goto lab_0x790b4_2;
				}
			} else {
				v27 = v25;
			}
		}
		// 0x790c8
		g37 = 0;
		if (*(int32_t *)v27 > 0) {
			v28 = v27;
			v26 = 0;
			while (true) {
				// 0x790d0
				v32 = *(int32_t *)(g30 + 4 * v26);
				if (*(int32_t *)(g36 + 180 * v32 + 52) == 0) {
					goto lab_0x790f8_3;
				}
				goto lab_0x790ec_3;
			}
		}
		// 0x79108
		g10 = v1;
		return result;
	}
	int32_t v37 = v19; // 0x78fd4
	// branch -> 0x78fd4
	while (true) {
		// 0x78fd4
		v29 = *(int32_t *)v37;
		g34 = v29;
		v30 = g36 + 180 * v29;
		v18 = v30;
		g15 = *(int32_t *)(g33 + 28 * *(int32_t *)v30 + 8);
		result2 = FunctionPointer();
		if (__asm_rlwinm_(*(int32_t *)(v18 + 60), 0, 30, 30) == 0) {
		lab_0x79004:;
			int32_t v38 = v18 + 88;        // 0x79004
			int32_t v39 = v38;             // r4
			int32_t *v40 = (int32_t *)v38; // 0x79008
			*v40 = *v40 + 1;
			int32_t v41 = v18;                     // 0x79014
			uint32_t v42 = *(int32_t *)(v41 + 88); // 0x79014
			result2 = v42;
			if (v42 >= *(int32_t *)(v41 + 72)) {
				int32_t v43 = v41 + 96; // r5
				*(int32_t *)v39 = 0;
				int32_t v44 = v18; // 0x79030
				v39 = v44 + 76;
				int32_t *v45 = (int32_t *)(v44 + 96); // 0x79034
				*v45 = *(int32_t *)(v44 + 92) + *v45;
				int32_t v46 = v18;                    // 0x79044
				int32_t v47 = *(int32_t *)(v46 + 96); // 0x79044
				result2 = v47;
				if (v47 > *(int32_t *)(v46 + 76)) {
					// 0x79054
					*(int32_t *)v43 = 1;
					// branch -> 0x7905c
				}
				int32_t *v48 = (int32_t *)v43; // 0x7905c
				if (*v48 <= 0) {
					// 0x79068
					*v48 = *(int32_t *)v39;
					// branch -> 0x79070
				}
			}
		}
	lab_0x79070:;
		int32_t v49 = v19 + 4; // 0x79070
		v19 = v49;
		int32_t v50 = v17 + 1; // 0x79074
		v17 = v50;
		int32_t v51 = g35; // 0x79078
		if (v50 >= *(int32_t *)v51) {
			v25 = v51;
			// break -> 0x79084
			break;
		}
		v37 = v49;
		// continue -> 0x78fd4
	}
	// 0x79084
	v27 = v25;
	if (*(int32_t *)g32 != 0) {
		// 0x79090
		if (*(int32_t *)v25 > 0) {
			int32_t v52 = v25; // 0x790bc50
			int32_t v53 = 0;   // 0x790b848
			v21 = g30;
			while (true) {
				// 0x7909c
				v31 = *(int32_t *)v21;
				result2 = v31;
				v24 = v52;
				v23 = v53;
				v22 = v21;
				if (*(int32_t *)(g36 + 180 * v31) == 13) {
				lab_0x790b0_2:
					// 0x790b0
					result2 = MI_Manashield(v31);
					v24 = g35;
					v23 = g29;
					v22 = g28;
					// branch -> 0x790b4
				}
			lab_0x790b4_2:;
				int32_t v54 = v23 + 1; // 0x790b8
				if (v54 >= *(int32_t *)v24) {
					v27 = v24;
					// break -> 0x790c8
					break;
				}
				v52 = v24;
				v53 = v54;
				v21 = v22 + 4;
				// continue -> 0x7909c
			}
			// 0x790c8
			g37 = 0;
			if (*(int32_t *)v27 <= 0) {
				// 0x790c8
				// branch -> 0x79108
				// 0x79108
				g10 = v1;
				return result2;
			}
			v28 = v27;
			v26 = 0;
			int32_t result3; // 0x7911858
			while (true) {
				// 0x790d0
				v32 = *(int32_t *)(g30 + 4 * v26);
				int32_t v55;
				int32_t v56; // 0x790fc
				if (*(int32_t *)(g36 + 180 * v32 + 52) == 0) {
				lab_0x790f8_3:
					// 0x790f8
					result3 = v32;
					v56 = v28;
					v55 = v26 + 1;
					// branch -> 0x790fc
				} else {
				lab_0x790ec_3:
					// 0x790ec
					result3 = DeleteMissile(v32);
					v56 = g35;
					v55 = 0;
					// branch -> 0x790fc
				}
				// 0x790fc
				g37 = v55;
				if (v55 >= *(int32_t *)v56) {
					// break -> 0x79108
					break;
				}
				v28 = v56;
				v26 = v55;
				// continue -> 0x790d0
			}
			// 0x79108
			g10 = v1;
			return result3;
		}
		v27 = v25;
	}
	// 0x790c8
	g37 = 0;
	if (*(int32_t *)v27 > 0) {
		v28 = v27;
		v26 = 0;
		while (true) {
			// 0x790d0
			v32 = *(int32_t *)(g30 + 4 * v26);
			if (*(int32_t *)(g36 + 180 * v32 + 52) == 0) {
				goto lab_0x790f8_3;
			}
			goto lab_0x790ec_3;
		}
	}
	// 0x79108
	g10 = v1;
	return result2;
}

// Address range: 0x7911c - 0x79208
int32_t function_7911c(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7754);      // 0x7911c
	int32_t v2 = 0;                               // r7
	int32_t v3 = *(int32_t *)(g23 - 0x761c);      // 0x79124
	int32_t result2 = *(int32_t *)(g23 - 0x7668); // 0x79128
	int32_t v4 = *(int32_t *)(g23 - 0x7664);      // 0x7912c
	int32_t v5 = *(int32_t *)(g23 - 0x7660);      // 0x79130
	if (*(int32_t *)result2 > 0) {
		while (true) {
			int32_t v6 = *(int32_t *)v5;                                           // 0x79138
			int32_t v7 = v6;                                                       // r10
			int32_t v8 = 180 * v6 + v4;                                            // 0x79140
			int32_t v9 = v8;                                                       // r11
			int32_t v10 = *(int32_t *)(v8 + 44);                                   // 0x79148
			int32_t v11 = v3 + 12 + 300 * (int32_t) * (char *)(v8 + 56) + 8 * v10; // 0x7915c
			*(int32_t *)(v8 + 64) = *(int32_t *)v11;
			*(int32_t *)(v9 + 68) = *(int32_t *)(v11 + 4);
			int32_t result; // 0x791f8
			int32_t v12;    // 0x791f4
			if (*(int32_t *)v9 == 20) {
				int32_t v13 = *(int32_t *)(v1 + 232 * *(int32_t *)(v9 + 120) + 224); // 0x79188
				unsigned char v14 = *(char *)v13;                                    // 0x7918c
				int32_t v15;                                                         // 0x791dc
				if (v14 >= 64) {
					// 0x79198
					if (v14 <= 67) {
						// 0x791a0
						v15 = v13 + 384;
						// branch -> 0x791c4
					lab_0x791c4_2:;
						int32_t v16 = 180 * v7 + 64 + v4;                    // 0x791d8
						int32_t v17 = (8 * *(int32_t *)(v9 + 44) | 4) + v15; // 0x791dc
						*(int32_t *)v16 = *(int32_t *)v17;
						*(int32_t *)(v16 + 4) = *(int32_t *)(v17 + 4);
						// branch -> 0x791f0
						// 0x791f0
						v12 = v2 + 1;
						v2 = v12;
						result = result2;
						if (v12 >= *(int32_t *)result) {
							// 0x79204
							return result;
						}
					lab_0x791f0:
						// 0x791f0
						v5 += 4;
						// branch -> 0x79138
						continue;
					}
				}
				// 0x791a8
				if (v14 >= 89) {
					// 0x791b0
					if (v14 <= 92) {
						// 0x791b8
						v15 = v13 + 156;
						// branch -> 0x791c4
						goto lab_0x791c4_2;
					}
				}
				// 0x791c0
				v15 = v13 + 80;
				// branch -> 0x791c4
				goto lab_0x791c4_2;
			}
			// 0x791f0
			v12 = v2 + 1;
			v2 = v12;
			result = result2;
			if (v12 < *(int32_t *)result) {
				goto lab_0x791f0;
			}
			// 0x79204
			return result;
		}
	}
	// 0x79204
	return result2;
}

// Address range: 0x79208 - 0x79260
int32_t ClearMissileSpot(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7594);                             // 0x79214
	int32_t v2 = *(int32_t *)(g23 - 0x7664) + 180 * a1;                  // 0x79218
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x779c);                 // 0x79230
	int32_t v4 = *(int32_t *)(v2 + 8) + 112 * *(int32_t *)(v2 + 4);      // 0x79234
	int32_t v5 = __asm_rlwinm((int32_t) * (char *)(v3 + v4), 0, 24, 30); // 0x7923c
	*(char *)(v4 + v3) = (char)v5;
	int32_t v6 = *(int32_t *)(v2 + 8);           // 0x79248
	int32_t result = 112 * *(int32_t *)(v2 + 4); // 0x7924c
	*(char *)(*(int32_t *)v1 + v6 + result) = (char)0;
	return result;
}
