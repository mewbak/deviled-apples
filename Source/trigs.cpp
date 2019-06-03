
// Address range: 0xc6744 - 0xc675c
int32_t InitNoTriggers(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x7740); // r3
	*(int32_t *)*(int32_t *)(g23 - 0x70f8) = 0;
	*(int32_t *)result = 0;
	return result;
}

// Address range: 0xc675c - 0xc692c
int32_t InitTownTriggers(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x70f4); // 0xc675c
	int32_t v2 = *(int32_t *)(g23 - 0x70f8); // r3
	*(int32_t *)v1 = 25;
	*(int32_t *)(v1 + 4) = 29;
	int32_t v3 = 1;                          // r9
	int32_t v4 = *(int32_t *)(g23 - 0x6eac); // r12
	*(int32_t *)(v1 + 8) = 1026;
	*(int32_t *)v2 = v3;
	int32_t result; // 0xc691c
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 4) {
		// 0xc6798
		*(int32_t *)v4 = v3;
		*(int32_t *)(v4 + 4) = v3;
		int32_t v5 = 1031; // r11
		*(int32_t *)(v4 + 8) = v3;
		*(int32_t *)(v1 + 16) = 49;
		*(int32_t *)(v1 + 20) = 21;
		*(int32_t *)(v1 + 24) = v5;
		*(int32_t *)(v1 + 28) = 5;
		int32_t *v6 = (int32_t *)v2; // 0xc67dc
		*v6 = *v6 + 1;
		*(int32_t *)(v1 + 32) = 17;
		*(int32_t *)(v1 + 36) = 69;
		*(int32_t *)(v1 + 40) = v5;
		*(int32_t *)(v1 + 44) = 9;
		int32_t *v7 = (int32_t *)v2; // 0xc67f8
		*v7 = *v7 + 1;
		*(int32_t *)(v1 + 48) = 41;
		*(int32_t *)(v1 + 52) = 80;
		*(int32_t *)(v1 + 56) = v5;
		*(int32_t *)(v1 + 60) = 13;
		int32_t *v8 = (int32_t *)v2; // 0xc6814
		*v8 = *v8 + 1;
		// branch -> 0xc691c
		// 0xc691c
		result = *(int32_t *)(g23 - 0x7740);
		*(int32_t *)result = 0;
		return result;
	}
	int32_t v9 = 0;                           // r0
	int32_t v10 = *(int32_t *)(g23 - 0x77ac); // 0xc6828
	*(int32_t *)v4 = 0;
	int32_t v11 = v4 + 4;                     // 0xc6830
	int32_t v12 = *(int32_t *)(g23 - 0x77a8); // 0xc6834
	*(int32_t *)v11 = v9;
	*(int32_t *)(v4 + 8) = v9;
	unsigned char v13 = *(char *)(v12 + 0x55ec * *(int32_t *)v10 + 0x5590); // 0xc6850
	int32_t v14 = v13;                                                      // 0xc6850
	if (v13 % 2 != 0) {
		// 0xc685c
		*(int32_t *)(v1 + 16) = 49;
		*(int32_t *)(v1 + 20) = 21;
		*(int32_t *)(v1 + 24) = 1031;
		*(int32_t *)(v1 + 28) = 5;
		int32_t *v15 = (int32_t *)v2; // 0xc687c
		*v15 = *v15 + 1;
		*(int32_t *)v4 = v3;
		// branch -> 0xc688c
	}
	// 0xc688c
	if (__asm_rlwinm_(v14, 0, 30, 30) != 0) {
		int32_t v16 = 16 * *(int32_t *)v2; // 0xc68a0
		*(int32_t *)(v1 + v16) = 17;
		int32_t v17 = v16 + v1; // 0xc68a8
		v3 = v17;
		*(int32_t *)(v17 + 4) = 69;
		*(int32_t *)(v3 + 8) = 1031;
		*(int32_t *)(v3 + 12) = 9;
		int32_t *v18 = (int32_t *)v2; // 0xc68c4
		*v18 = *v18 + 1;
		*(int32_t *)v11 = 1;
		// branch -> 0xc68d4
	}
	// 0xc68d4
	if (__asm_rlwinm_(v14, 0, 29, 29) != 0) {
		int32_t v19 = 16 * *(int32_t *)v2; // 0xc68e8
		*(int32_t *)(v1 + v19) = 41;
		int32_t v20 = v19 + v1; // 0xc68f0
		*(int32_t *)(v20 + 4) = 80;
		*(int32_t *)(v20 + 8) = 1031;
		*(int32_t *)(v20 + 12) = 13;
		int32_t *v21 = (int32_t *)v2; // 0xc690c
		*v21 = *v21 + 1;
		*(int32_t *)(v4 + 8) = 1;
		// branch -> 0xc691c
	}
	// 0xc691c
	result = *(int32_t *)(g23 - 0x7740);
	*(int32_t *)result = 0;
	return result;
}

// Address range: 0xc692c - 0xc6a58
int32_t InitL1Triggers(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x70f8); // 0xc692c
	int32_t v2 = 0;                          // r9
	*(int32_t *)v1 = 0;
	int32_t v3 = *(int32_t *)(g23 - 0x70f4);             // r5
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x757c); // 0xc6944
	// branch -> 0xc6948
	while (true) {
		int32_t v5 = 56; // ctr
		int32_t v6 = v4; // r6
		int32_t v7 = 0;  // r8
		int32_t v8 = 0;  // 0xc6974
		int32_t v9 = v4; // 0xc6958
		// branch -> 0xc6958
		while (true) {
			int32_t v10 = v9; // 0xc698c
			int32_t v11;      // r3
			if (*(int16_t *)v9 == 129) {
				int32_t v12 = v3 + 16 * *(int32_t *)v1; // 0xc6970
				v11 = v12;
				*(int32_t *)v12 = v8;
				*(int32_t *)(v11 + 4) = v2;
				*(int32_t *)(v11 + 8) = 1027;
				int32_t *v13 = (int32_t *)v1; // 0xc6980
				*v13 = *v13 + 1;
				v10 = v6;
				// branch -> 0xc698c
			}
			int32_t v14 = v10; // 0xc69c0
			if (*(int16_t *)v10 == 115) {
				int32_t v15 = v3 + 16 * *(int32_t *)v1; // 0xc69a4
				v11 = v15;
				*(int32_t *)v15 = v7;
				*(int32_t *)(v11 + 4) = v2;
				*(int32_t *)(v11 + 8) = 1026;
				int32_t *v16 = (int32_t *)v1; // 0xc69b4
				*v16 = *v16 + 1;
				v14 = v6;
				// branch -> 0xc69c0
			}
			int32_t v17 = v14 + 224; // 0xc69c0
			v6 = v17;
			int32_t v18 = v7 + 1; // 0xc69c4
			v7 = v18;
			int32_t v19 = v17; // 0xc69f8
			if (*(int16_t *)v17 == 129) {
				int32_t v20 = v3 + 16 * *(int32_t *)v1; // 0xc69dc
				v11 = v20;
				*(int32_t *)v20 = v18;
				*(int32_t *)(v11 + 4) = v2;
				*(int32_t *)(v11 + 8) = 1027;
				int32_t *v21 = (int32_t *)v1; // 0xc69ec
				*v21 = *v21 + 1;
				v19 = v6;
				// branch -> 0xc69f8
			}
			int32_t v22 = v19; // 0xc6a2c
			if (*(int16_t *)v19 == 115) {
				int32_t v23 = v3 + 16 * *(int32_t *)v1; // 0xc6a10
				v11 = v23;
				*(int32_t *)v23 = v7;
				*(int32_t *)(v11 + 4) = v2;
				*(int32_t *)(v11 + 8) = 1026;
				int32_t *v24 = (int32_t *)v1; // 0xc6a20
				*v24 = *v24 + 1;
				v22 = v6;
				// branch -> 0xc6a2c
			}
			int32_t v25 = v22 + 224; // 0xc6a2c
			v6 = v25;
			int32_t v26 = v7 + 1; // 0xc6a30
			v7 = v26;
			int32_t v27 = v5 - 1; // 0xc6a34
			v5 = v27;
			if (v27 == 0) {
				// break -> 0xc6a38
				break;
			}
			v8 = v26;
			v9 = v25;
			// continue -> 0xc6958
		}
		int32_t v28 = v2 + 1; // 0xc6a38
		v2 = v28;
		if (v28 >= 112) {
			// break -> 0xc6a48
			break;
		}
		v4 += 2;
		// continue -> 0xc6948
	}
	int32_t result = *(int32_t *)(g23 - 0x7740); // 0xc6a48
	*(int32_t *)result = 0;
	return result;
}

// Address range: 0xc6a58 - 0xc6c28
int32_t InitL2Triggers(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x70f8); // 0xc6a58
	int32_t v2 = 0;                          // r4
	*(int32_t *)v1 = 0;
	int32_t v3 = *(int32_t *)(g23 - 0x70f4);             // r8
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x757c); // 0xc6a74
	int32_t v5 = *(int32_t *)(g23 - 0x7604);             // 0xc6a78
	int32_t v6 = *(int32_t *)(v5 + 340);                 // r11
	int32_t v7 = *(int32_t *)(v5 + 344);                 // r12
	// branch -> 0xc6a80
	while (true) {
		int32_t v8 = 56;  // ctr
		int32_t v9 = v4;  // r9
		int32_t v10 = 0;  // r3
		int32_t v11 = 0;  // 0xc6abc
		int32_t v12 = v4; // 0xc6a90
		// branch -> 0xc6a90
		while (true) {
			int32_t v13 = v12; // 0xc6ad4
			int32_t v14;       // 0xc6b10
			if (*(int16_t *)v12 == 267) {
				// 0xc6a9c
				int32_t v15;  // r5
				int32_t *v16; // 0xc6ac8
				int32_t v17;  // 0xc6ab8
				if (v11 == v6) {
					// 0xc6aa4
					if (v2 != v7) {
						// 0xc6aac
						v17 = v3 + 16 * *(int32_t *)v1;
						v15 = v17;
						*(int32_t *)v17 = v11;
						*(int32_t *)(v15 + 4) = v2;
						*(int32_t *)(v15 + 8) = 1027;
						v16 = (int32_t *)v1;
						*v16 = *v16 + 1;
						v13 = v9;
						// branch -> 0xc6ad4
					} else {
						v13 = v12;
					}
				} else {
					// 0xc6aac
					v17 = v3 + 16 * *(int32_t *)v1;
					v15 = v17;
					*(int32_t *)v17 = v11;
					*(int32_t *)(v15 + 4) = v2;
					*(int32_t *)(v15 + 8) = 1027;
					v16 = (int32_t *)v1;
					*v16 = *v16 + 1;
					v13 = v9;
					// branch -> 0xc6ad4
				}
				// 0xc6ad4
				v14 = v13;
				int32_t v18; // r6
				if (*(int16_t *)v13 == 559) {
				lab_0xc6ae0:;
					int32_t v19 = v3 + 16 * *(int32_t *)v1; // 0xc6af0
					v18 = v19;
					*(int32_t *)v19 = v10;
					*(int32_t *)(v18 + 4) = v2;
					*(int32_t *)(v18 + 8) = 1032;
					*(int32_t *)(v18 + 12) = 0;
					int32_t *v20 = (int32_t *)v1; // 0xc6b04
					*v20 = *v20 + 1;
					v14 = v9;
					// branch -> 0xc6b10
				}
			lab_0xc6b10:;
				int32_t v21 = v14; // 0xc6b44
				if (*(int16_t *)v14 == 271) {
					int32_t v22 = v3 + 16 * *(int32_t *)v1; // 0xc6b28
					v15 = v22;
					*(int32_t *)v22 = v10;
					*(int32_t *)(v15 + 4) = v2;
					*(int32_t *)(v15 + 8) = 1026;
					int32_t *v23 = (int32_t *)v1; // 0xc6b38
					*v23 = *v23 + 1;
					v21 = v9;
					// branch -> 0xc6b44
				}
				int32_t v24 = v21 + 224; // 0xc6b44
				v9 = v24;
				int32_t v25 = v10 + 1; // 0xc6b48
				v10 = v25;
				int32_t v26 = v24; // 0xc6b8c
				int32_t v27;       // 0xc6bc8
				if (*(int16_t *)v24 == 267) {
					// 0xc6b54
					int32_t *v28; // 0xc6b80
					int32_t v29;  // 0xc6b70
					if (v25 == v6) {
						// 0xc6b5c
						if (v2 != v7) {
							// 0xc6b64
							v29 = v3 + 16 * *(int32_t *)v1;
							v15 = v29;
							*(int32_t *)v29 = v25;
							*(int32_t *)(v15 + 4) = v2;
							*(int32_t *)(v15 + 8) = 1027;
							v28 = (int32_t *)v1;
							*v28 = *v28 + 1;
							v26 = v9;
							// branch -> 0xc6b8c
						} else {
							v26 = v24;
						}
					} else {
						// 0xc6b64
						v29 = v3 + 16 * *(int32_t *)v1;
						v15 = v29;
						*(int32_t *)v29 = v25;
						*(int32_t *)(v15 + 4) = v2;
						*(int32_t *)(v15 + 8) = 1027;
						v28 = (int32_t *)v1;
						*v28 = *v28 + 1;
						v26 = v9;
						// branch -> 0xc6b8c
					}
					// 0xc6b8c
					v27 = v26;
					if (*(int16_t *)v26 == 559) {
					lab_0xc6b98:;
						int32_t v30 = v3 + 16 * *(int32_t *)v1; // 0xc6ba8
						v18 = v30;
						*(int32_t *)v30 = v10;
						*(int32_t *)(v18 + 4) = v2;
						*(int32_t *)(v18 + 8) = 1032;
						*(int32_t *)(v18 + 12) = 0;
						int32_t *v31 = (int32_t *)v1; // 0xc6bbc
						*v31 = *v31 + 1;
						v27 = v9;
						// branch -> 0xc6bc8
					}
				lab_0xc6bc8:;
					int32_t v32 = v27; // 0xc6bfc
					if (*(int16_t *)v27 == 271) {
						int32_t v33 = v3 + 16 * *(int32_t *)v1; // 0xc6be0
						v15 = v33;
						*(int32_t *)v33 = v10;
						*(int32_t *)(v15 + 4) = v2;
						*(int32_t *)(v15 + 8) = 1026;
						int32_t *v34 = (int32_t *)v1; // 0xc6bf0
						*v34 = *v34 + 1;
						v32 = v9;
						// branch -> 0xc6bfc
					}
					int32_t v35 = v32 + 224; // 0xc6bfc
					v9 = v35;
					int32_t v36 = v10 + 1; // 0xc6c00
					v10 = v36;
					int32_t v37 = v8 - 1; // 0xc6c04
					v8 = v37;
					if (v37 == 0) {
						// break -> 0xc6c08
						break;
					}
					v11 = v36;
					v12 = v35;
					// continue -> 0xc6a90
					continue;
				}
				// 0xc6b8c
				if (*(int16_t *)v26 == 559) {
					goto lab_0xc6b98;
				}
				v27 = v26;
				goto lab_0xc6bc8;
			}
			// 0xc6ad4
			if (*(int16_t *)v13 == 559) {
				goto lab_0xc6ae0;
			}
			v14 = v13;
			goto lab_0xc6b10;
		}
		int32_t v38 = v2 + 1; // 0xc6c08
		v2 = v38;
		if (v38 >= 112) {
			// break -> 0xc6c18
			break;
		}
		v4 += 2;
		// continue -> 0xc6a80
	}
	int32_t result = *(int32_t *)(g23 - 0x7740); // 0xc6c18
	*(int32_t *)result = 0;
	return result;
}

// Address range: 0xc6c28 - 0xc6dbc
int32_t InitL3Triggers(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x70f8); // 0xc6c28
	int32_t v2 = 0;                          // r3
	*(int32_t *)v1 = 0;
	int32_t v3 = *(int32_t *)(g23 - 0x70f4);             // r6
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x757c); // 0xc6c40
	// branch -> 0xc6c44
	while (true) {
		int32_t v5 = 56; // ctr
		int32_t v6 = v4; // r7
		int32_t v7 = 0;  // r9
		int32_t v8 = 0;  // 0xc6c70
		int32_t v9 = v4; // 0xc6c54
		// branch -> 0xc6c54
		while (true) {
			int32_t v10 = v9; // 0xc6c88
			int32_t v11;      // r4
			if (*(int16_t *)v9 == 171) {
				int32_t v12 = v3 + 16 * *(int32_t *)v1; // 0xc6c6c
				v11 = v12;
				*(int32_t *)v12 = v8;
				*(int32_t *)(v11 + 4) = v2;
				*(int32_t *)(v11 + 8) = 1027;
				int32_t *v13 = (int32_t *)v1; // 0xc6c7c
				*v13 = *v13 + 1;
				v10 = v6;
				// branch -> 0xc6c88
			}
			int32_t v14 = v10; // 0xc6cbc
			if (*(int16_t *)v10 == 168) {
				int32_t v15 = v3 + 16 * *(int32_t *)v1; // 0xc6ca0
				v11 = v15;
				*(int32_t *)v15 = v7;
				*(int32_t *)(v11 + 4) = v2;
				*(int32_t *)(v11 + 8) = 1026;
				int32_t *v16 = (int32_t *)v1; // 0xc6cb0
				*v16 = *v16 + 1;
				v14 = v6;
				// branch -> 0xc6cbc
			}
			int32_t v17 = v14; // 0xc6cf0
			if (*(int16_t *)v14 == 549) {
				int32_t v18 = v3 + 16 * *(int32_t *)v1; // 0xc6cd4
				v11 = v18;
				*(int32_t *)v18 = v7;
				*(int32_t *)(v11 + 4) = v2;
				*(int32_t *)(v11 + 8) = 1032;
				int32_t *v19 = (int32_t *)v1; // 0xc6ce4
				*v19 = *v19 + 1;
				v17 = v6;
				// branch -> 0xc6cf0
			}
			int32_t v20 = v17 + 224; // 0xc6cf0
			v6 = v20;
			int32_t v21 = v7 + 1; // 0xc6cf4
			v7 = v21;
			int32_t v22 = v20; // 0xc6d28
			if (*(int16_t *)v20 == 171) {
				int32_t v23 = v3 + 16 * *(int32_t *)v1; // 0xc6d0c
				v11 = v23;
				*(int32_t *)v23 = v21;
				*(int32_t *)(v11 + 4) = v2;
				*(int32_t *)(v11 + 8) = 1027;
				int32_t *v24 = (int32_t *)v1; // 0xc6d1c
				*v24 = *v24 + 1;
				v22 = v6;
				// branch -> 0xc6d28
			}
			int32_t v25 = v22; // 0xc6d5c
			if (*(int16_t *)v22 == 168) {
				int32_t v26 = v3 + 16 * *(int32_t *)v1; // 0xc6d40
				v11 = v26;
				*(int32_t *)v26 = v7;
				*(int32_t *)(v11 + 4) = v2;
				*(int32_t *)(v11 + 8) = 1026;
				int32_t *v27 = (int32_t *)v1; // 0xc6d50
				*v27 = *v27 + 1;
				v25 = v6;
				// branch -> 0xc6d5c
			}
			int32_t v28 = v25; // 0xc6d90
			if (*(int16_t *)v25 == 549) {
				int32_t v29 = v3 + 16 * *(int32_t *)v1; // 0xc6d74
				v11 = v29;
				*(int32_t *)v29 = v7;
				*(int32_t *)(v11 + 4) = v2;
				*(int32_t *)(v11 + 8) = 1032;
				int32_t *v30 = (int32_t *)v1; // 0xc6d84
				*v30 = *v30 + 1;
				v28 = v6;
				// branch -> 0xc6d90
			}
			int32_t v31 = v28 + 224; // 0xc6d90
			v6 = v31;
			int32_t v32 = v7 + 1; // 0xc6d94
			v7 = v32;
			int32_t v33 = v5 - 1; // 0xc6d98
			v5 = v33;
			if (v33 == 0) {
				// break -> 0xc6d9c
				break;
			}
			v8 = v32;
			v9 = v31;
			// continue -> 0xc6c54
		}
		int32_t v34 = v2 + 1; // 0xc6d9c
		v2 = v34;
		if (v34 >= 112) {
			// break -> 0xc6dac
			break;
		}
		v4 += 2;
		// continue -> 0xc6c44
	}
	int32_t result = *(int32_t *)(g23 - 0x7740); // 0xc6dac
	*(int32_t *)result = 0;
	return result;
}

// Address range: 0xc6dbc - 0xc7120
int32_t InitL4Triggers(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x70f8); // 0xc6dc4
	int32_t v2 = 0;                          // r7
	int32_t v3 = *(int32_t *)(g23 - 0x757c); // r4
	*(int32_t *)v1 = 0;
	int32_t v4 = *(int32_t *)(g23 - 0x70f4); // r0
	int32_t v5 = *(int32_t *)v3;             // 0xc6ddc
	// branch -> 0xc6de0
	int32_t v6; // ctr
	int32_t v7; // r10
	int32_t v8; // r11
	int32_t v9; // r9
	while (true) {
		// 0xc6de0
		v6 = 56;
		v8 = v5;
		int32_t v10 = 0;  // r6
		int32_t v11 = 0;  // 0xc6e0c
		int32_t v12 = v5; // 0xc6df0
		// branch -> 0xc6df0
		while (true) {
			int32_t v13 = v12; // 0xc6e24
			if (*(int16_t *)v12 == 83) {
				int32_t v14 = v4 + 16 * *(int32_t *)v1; // 0xc6e08
				v9 = v14;
				*(int32_t *)v14 = v11;
				*(int32_t *)(v9 + 4) = v2;
				*(int32_t *)(v9 + 8) = 1027;
				int32_t *v15 = (int32_t *)v1; // 0xc6e18
				*v15 = *v15 + 1;
				v13 = v8;
				// branch -> 0xc6e24
			}
			int32_t v16 = v13; // 0xc6e60
			if (*(int16_t *)v13 == 422) {
				int32_t v17 = v4 + 16 * *(int32_t *)v1; // 0xc6e40
				v7 = v17;
				*(int32_t *)v17 = v10;
				*(int32_t *)(v7 + 4) = v2;
				*(int32_t *)(v7 + 8) = 1032;
				*(int32_t *)(v7 + 12) = 0;
				int32_t *v18 = (int32_t *)v1; // 0xc6e54
				*v18 = *v18 + 1;
				v16 = v8;
				// branch -> 0xc6e60
			}
			int32_t v19 = v16; // 0xc6e94
			if (*(int16_t *)v16 == 120) {
				int32_t v20 = v4 + 16 * *(int32_t *)v1; // 0xc6e78
				v9 = v20;
				*(int32_t *)v20 = v10;
				*(int32_t *)(v9 + 4) = v2;
				*(int32_t *)(v9 + 8) = 1026;
				int32_t *v21 = (int32_t *)v1; // 0xc6e88
				*v21 = *v21 + 1;
				v19 = v8;
				// branch -> 0xc6e94
			}
			int32_t v22 = v19 + 224; // 0xc6e94
			v8 = v22;
			int32_t v23 = v10 + 1; // 0xc6e98
			v10 = v23;
			int32_t v24 = v22; // 0xc6ecc
			if (*(int16_t *)v22 == 83) {
				int32_t v25 = v4 + 16 * *(int32_t *)v1; // 0xc6eb0
				v9 = v25;
				*(int32_t *)v25 = v23;
				*(int32_t *)(v9 + 4) = v2;
				*(int32_t *)(v9 + 8) = 1027;
				int32_t *v26 = (int32_t *)v1; // 0xc6ec0
				*v26 = *v26 + 1;
				v24 = v8;
				// branch -> 0xc6ecc
			}
			int32_t v27 = v24; // 0xc6f08
			if (*(int16_t *)v24 == 422) {
				int32_t v28 = v4 + 16 * *(int32_t *)v1; // 0xc6ee8
				v7 = v28;
				*(int32_t *)v28 = v10;
				*(int32_t *)(v7 + 4) = v2;
				*(int32_t *)(v7 + 8) = 1032;
				*(int32_t *)(v7 + 12) = 0;
				int32_t *v29 = (int32_t *)v1; // 0xc6efc
				*v29 = *v29 + 1;
				v27 = v8;
				// branch -> 0xc6f08
			}
			int32_t v30 = v27; // 0xc6f3c
			if (*(int16_t *)v27 == 120) {
				int32_t v31 = v4 + 16 * *(int32_t *)v1; // 0xc6f20
				v9 = v31;
				*(int32_t *)v31 = v10;
				*(int32_t *)(v9 + 4) = v2;
				*(int32_t *)(v9 + 8) = 1026;
				int32_t *v32 = (int32_t *)v1; // 0xc6f30
				*v32 = *v32 + 1;
				v30 = v8;
				// branch -> 0xc6f3c
			}
			int32_t v33 = v30 + 224; // 0xc6f3c
			v8 = v33;
			int32_t v34 = v10 + 1; // 0xc6f40
			v10 = v34;
			int32_t v35 = v6 - 1; // 0xc6f44
			v6 = v35;
			if (v35 == 0) {
				// break -> 0xc6f48
				break;
			}
			v11 = v34;
			v12 = v33;
			// continue -> 0xc6df0
		}
		int32_t v36 = v2 + 1; // 0xc6f48
		v2 = v36;
		int32_t v37 = v5 + 2; // 0xc6f4c
		if (v36 >= 112) {
			// break -> 0xc6f58
			break;
		}
		v5 = v37;
		// continue -> 0xc6de0
	}
	// 0xc6f58
	v5 = 0;
	v8 = 0;
	int32_t v38 = 0; // 0xc6f78
	                 // branch -> 0xc6f60
lab_0xc6f60:
	while (true) {
		// 0xc6f60
		v6 = 16;
		int32_t v39 = (int32_t) * (char *)(*(int32_t *)(g23 - 0x7604) + 362); // 0xc6f74
		v7 = v39;
		int32_t v40 = *(int32_t *)v3 + v38; // 0xc6f78
		v9 = v4 + 16 * *(int32_t *)v1;
		int32_t v41 = 0; // r31
		v2 = 1026;
		int32_t v42 = 0; // 0xc6f9c
		// branch -> 0xc6f88
		while (true) {
			int32_t v43 = v39; // 0xc6fc8
			int32_t v44 = v42; // 0xc6fbc
			if (*(int16_t *)v40 == 370 == v39 == 3) {
				// 0xc6f9c
				*(int32_t *)v9 = v42;
				*(int32_t *)(v9 + 4) = v5;
				*(int32_t *)(v9 + 8) = v2;
				v9 += 16;
				int32_t *v45 = (int32_t *)v1; // 0xc6fac
				*v45 = *v45 + 1;
				v43 = v7;
				v44 = v41;
				// branch -> 0xc6fb8
			}
			int32_t v46 = v40 + 224; // 0xc6fb8
			v40 = v46;
			int32_t v47 = v44 + 1; // 0xc6fbc
			v41 = v47;
			int32_t v48 = v43; // 0xc6ffc
			int32_t v49 = v47; // 0xc6ff0
			int32_t v50 = v46; // 0xc6fec
			if (*(int16_t *)v46 == 370 == v43 == 3) {
				// 0xc6fd0
				*(int32_t *)v9 = v47;
				*(int32_t *)(v9 + 4) = v5;
				*(int32_t *)(v9 + 8) = v2;
				v9 += 16;
				int32_t *v51 = (int32_t *)v1; // 0xc6fe0
				*v51 = *v51 + 1;
				v48 = v7;
				v49 = v41;
				v50 = v40;
				// branch -> 0xc6fec
			}
			int32_t v52 = v50 + 224; // 0xc6fec
			v40 = v52;
			int32_t v53 = v49 + 1; // 0xc6ff0
			v41 = v53;
			int32_t v54 = v48; // 0xc7030
			int32_t v55 = v53; // 0xc7024
			int32_t v56 = v52; // 0xc7020
			if (*(int16_t *)v52 == 370 == v48 == 3) {
				// 0xc7004
				*(int32_t *)v9 = v53;
				*(int32_t *)(v9 + 4) = v5;
				*(int32_t *)(v9 + 8) = v2;
				v9 += 16;
				int32_t *v57 = (int32_t *)v1; // 0xc7014
				*v57 = *v57 + 1;
				v54 = v7;
				v55 = v41;
				v56 = v40;
				// branch -> 0xc7020
			}
			int32_t v58 = v56 + 224; // 0xc7020
			v40 = v58;
			int32_t v59 = v55 + 1; // 0xc7024
			v41 = v59;
			int32_t v60 = v54; // 0xc7064
			int32_t v61 = v59; // 0xc7058
			int32_t v62 = v58; // 0xc7054
			if (*(int16_t *)v58 == 370 == v54 == 3) {
				// 0xc7038
				*(int32_t *)v9 = v59;
				*(int32_t *)(v9 + 4) = v5;
				*(int32_t *)(v9 + 8) = v2;
				v9 += 16;
				int32_t *v63 = (int32_t *)v1; // 0xc7048
				*v63 = *v63 + 1;
				v60 = v7;
				v61 = v41;
				v62 = v40;
				// branch -> 0xc7054
			}
			int32_t v64 = v62 + 224; // 0xc7054
			v40 = v64;
			int32_t v65 = v61 + 1; // 0xc7058
			v41 = v65;
			int32_t v66 = v60; // 0xc7098
			int32_t v67 = v65; // 0xc708c
			int32_t v68 = v64; // 0xc7088
			if (*(int16_t *)v64 == 370 == v60 == 3) {
				// 0xc706c
				*(int32_t *)v9 = v65;
				*(int32_t *)(v9 + 4) = v5;
				*(int32_t *)(v9 + 8) = v2;
				v9 += 16;
				int32_t *v69 = (int32_t *)v1; // 0xc707c
				*v69 = *v69 + 1;
				v66 = v7;
				v67 = v41;
				v68 = v40;
				// branch -> 0xc7088
			}
			int32_t v70 = v68 + 224; // 0xc7088
			v40 = v70;
			int32_t v71 = v67 + 1; // 0xc708c
			v41 = v71;
			int32_t v72 = v66; // 0xc70cc
			int32_t v73 = v71; // 0xc70c0
			int32_t v74 = v70; // 0xc70bc
			if (*(int16_t *)v70 == 370 == v66 == 3) {
				// 0xc70a0
				*(int32_t *)v9 = v71;
				*(int32_t *)(v9 + 4) = v5;
				*(int32_t *)(v9 + 8) = v2;
				v9 += 16;
				int32_t *v75 = (int32_t *)v1; // 0xc70b0
				*v75 = *v75 + 1;
				v72 = v7;
				v73 = v41;
				v74 = v40;
				// branch -> 0xc70bc
			}
			int32_t v76 = v74 + 224; // 0xc70bc
			v40 = v76;
			int32_t v77 = v73 + 1; // 0xc70c0
			v41 = v77;
			int32_t v78 = v77; // 0xc70f4
			int32_t v79 = v76; // 0xc70f0
			if (*(int16_t *)v76 == 370 == v72 == 3) {
				// 0xc70d4
				*(int32_t *)v9 = v77;
				*(int32_t *)(v9 + 4) = v5;
				*(int32_t *)(v9 + 8) = v2;
				v9 += 16;
				int32_t *v80 = (int32_t *)v1; // 0xc70e4
				*v80 = *v80 + 1;
				v78 = v41;
				v79 = v40;
				// branch -> 0xc70f0
			}
			int32_t v81 = v79 + 224; // 0xc70f0
			int32_t v82 = v78 + 1;   // 0xc70f4
			v41 = v82;
			int32_t v83 = v6 - 1; // 0xc70f8
			v6 = v83;
			if (v83 == 0) {
				int32_t v84 = v5 + 1; // 0xc70fc
				v5 = v84;
				int32_t v85 = v8 + 2; // 0xc7100
				v8 = v85;
				if (v84 >= 112) {
					// break (via goto) -> 0xc710c
					goto lab_0xc710c;
				}
				v38 = v85;
				// continue (via goto) -> 0xc6f60
				goto lab_0xc6f60;
			} else {
				// 0xc70f0
				v39 = v7;
				v42 = v82;
				v40 = v81;
				// branch -> 0xc6f88
				continue;
			}
		}
	lab_0xc710c:;
		int32_t result = *(int32_t *)(g23 - 0x7740); // 0xc710c
		*(int32_t *)result = 0;
		return result;
	}
}

// Address range: 0xc7120 - 0xc7158
int32_t InitSKingTriggers(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x70f4); // r6
	*(int32_t *)*(int32_t *)(g23 - 0x70f8) = 1;
	int32_t result = *(int32_t *)(g23 - 0x7740); // r3
	*(int32_t *)v1 = 82;
	*(int32_t *)(v1 + 4) = 42;
	*(int32_t *)(v1 + 8) = 1028;
	*(int32_t *)result = 0;
	return result;
}

// Address range: 0xc7158 - 0xc7190
int32_t InitSChambTriggers(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x70f4); // r6
	*(int32_t *)*(int32_t *)(g23 - 0x70f8) = 1;
	int32_t result = *(int32_t *)(g23 - 0x7740); // r3
	*(int32_t *)v1 = 70;
	*(int32_t *)(v1 + 4) = 39;
	*(int32_t *)(v1 + 8) = 1028;
	*(int32_t *)result = 0;
	return result;
}

// Address range: 0xc7190 - 0xc71c8
int32_t InitPWaterTriggers(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x70f4); // r6
	*(int32_t *)*(int32_t *)(g23 - 0x70f8) = 1;
	int32_t result = *(int32_t *)(g23 - 0x7740); // r3
	*(int32_t *)v1 = 30;
	*(int32_t *)(v1 + 4) = 83;
	*(int32_t *)(v1 + 8) = 1028;
	*(int32_t *)result = 0;
	return result;
}

// Address range: 0xc71c8 - 0xc7200
int32_t function_c71c8(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x70f4); // r6
	*(int32_t *)*(int32_t *)(g23 - 0x70f8) = 1;
	int32_t result = *(int32_t *)(g23 - 0x7740); // r3
	*(int32_t *)v1 = 35;
	*(int32_t *)(v1 + 4) = 32;
	*(int32_t *)(v1 + 8) = 1028;
	*(int32_t *)result = 0;
	return result;
}

// Address range: 0xc7200 - 0xc738c
int32_t function_c7200(int32_t a1)
{
	int32_t v1 = g10;                                    // 0xc7204
	int32_t v2 = *(int32_t *)(g23 - 0x7658);             // 0xc7208
	int32_t v3 = *(int32_t *)(g23 - 0x765c);             // 0xc7210
	int32_t v4 = *(int32_t *)(g23 - 0x6eac);             // 0xc7220
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x757c); // 0xc7230
	g34 = *(int32_t *)(g23 - 0x76a4);
	int32_t v6 = *(int32_t *)(g23 - 0x5594);                     // 0xc7240
	int32_t v7 = v5 + 2 * *(int32_t *)v3 + 224 * *(int32_t *)v2; // 0xc7244
	int32_t v8 = *(int32_t *)v6;                                 // 0xc727c8
	if (v8 != -1) {
		// branch -> 0xc724c
		while (true) {
			// 0xc724c
			if (v8 == (int32_t) * (int16_t *)v7) {
				// 0xc7258
				g37 = *(int32_t *)(g23 - 0x5598);
				strcpy();
				*(int32_t *)v2 = 25;
				*(int32_t *)v3 = 29;
				// branch -> 0xc7374
				// 0xc7374
				g10 = v1;
				return 1;
			}
			int32_t v9 = v6 + 4;          // 0xc7278
			int32_t v10 = *(int32_t *)v9; // 0xc727c
			if (v10 == -1) {
				// break -> 0xc727c
				break;
			}
			v6 = v9;
			v8 = v10;
			// continue -> 0xc724c
		}
		// 0xc727c
		// branch -> 0xc7288
	}
	// 0xc7288
	int32_t v11; // 0xc731c
	int32_t v12; // 0xc7320
	int32_t v13; // 0xc7368
	int32_t v14; // 0xc736c
	if (*(int32_t *)v4 != 0) {
		int32_t v15 = *(int32_t *)(g23 - 0x559c); // 0xc7294
		int32_t v16 = *(int32_t *)v15;            // 0xc72cc2
		if (v16 != -1) {
			// branch -> 0xc729c
			while (true) {
				// 0xc729c
				if (v16 == (int32_t) * (int16_t *)v7) {
					// 0xc72a8
					g37 = *(int32_t *)(g23 - 0x55a0);
					strcpy();
					*(int32_t *)v2 = 49;
					*(int32_t *)v3 = 21;
					// branch -> 0xc7374
					// 0xc7374
					g10 = v1;
					return 1;
				}
				int32_t v17 = v15 + 4;         // 0xc72c8
				int32_t v18 = *(int32_t *)v17; // 0xc72cc
				if (v18 == -1) {
					// break -> 0xc72cc
					break;
				}
				v15 = v17;
				v16 = v18;
				// continue -> 0xc729c
			}
			// 0xc72cc
			// branch -> 0xc72d8
		}
		// 0xc72d8
		if (*(int32_t *)(v4 + 4) == 0) {
			// 0xc7324
			if (*(int32_t *)(v4 + 8) == 0) {
				// 0xc7370
				// branch -> 0xc7374
			} else {
				// 0xc7330
				v14 = 16;
				v13 = 1240;
				// branch -> 0xc733c
				while (true) {
					// 0xc733c
					if (v13 == (int32_t) * (int16_t *)v7) {
						// 0xc7348
						g37 = *(int32_t *)(g23 - 0x55a8);
						strcpy();
						*(int32_t *)v2 = 41;
						*(int32_t *)v3 = 80;
						// branch -> 0xc7374
						// 0xc7374
						g10 = v1;
						return 1;
					}
				lab_0xc7368_2:;
					int32_t v19 = v14 - 1; // 0xc736c
					if (v19 == 0) {
						// break -> 0xc7370
						break;
					}
					v14 = v19;
					v13++;
					// continue -> 0xc733c
				}
				// 0xc7370
				// branch -> 0xc7370
				// 0xc7370
				// branch -> 0xc7374
			}
			// 0xc7374
			g10 = v1;
			return 0;
		}
		// 0xc72e4
		v12 = 22;
		v11 = 1199;
		// branch -> 0xc72f0
		while (true) {
			// 0xc72f0
			if (v11 == (int32_t) * (int16_t *)v7) {
				// 0xc72fc
				g37 = *(int32_t *)(g23 - 0x55a4);
				strcpy();
				*(int32_t *)v2 = 17;
				*(int32_t *)v3 = 69;
				// branch -> 0xc7374
				// 0xc7374
				g10 = v1;
				return 1;
			}
		lab_0xc731c:;
			int32_t v20 = v12 - 1; // 0xc7320
			if (v20 == 0) {
				// break -> 0xc7324
				break;
			}
			v12 = v20;
			v11++;
			// continue -> 0xc72f0
		}
		// 0xc7324
		// branch -> 0xc7324
		// 0xc7324
		if (*(int32_t *)(v4 + 8) == 0) {
			// 0xc7370
			// branch -> 0xc7374
		} else {
			// 0xc7330
			v14 = 16;
			v13 = 1240;
			// branch -> 0xc733c
			while (true) {
				// 0xc733c
				if (v13 != (int32_t) * (int16_t *)v7) {
					goto lab_0xc7368_2;
				}
				// 0xc7348
				g37 = *(int32_t *)(g23 - 0x55a8);
				strcpy();
				*(int32_t *)v2 = 41;
				*(int32_t *)v3 = 80;
				// branch -> 0xc7374
				// 0xc7374
				g10 = v1;
				return 1;
			}
		}
		// 0xc7374
		g10 = v1;
		return 0;
	}
	// 0xc72d8
	if (*(int32_t *)(v4 + 4) == 0) {
		// 0xc7324
		if (*(int32_t *)(v4 + 8) == 0) {
			// 0xc7370
			// branch -> 0xc7374
		} else {
			// 0xc7330
			v14 = 16;
			v13 = 1240;
			// branch -> 0xc733c
			while (true) {
				// 0xc733c
				if (v13 != (int32_t) * (int16_t *)v7) {
					goto lab_0xc7368_2;
				}
				// 0xc7348
				g37 = *(int32_t *)(g23 - 0x55a8);
				strcpy();
				*(int32_t *)v2 = 41;
				*(int32_t *)v3 = 80;
				// branch -> 0xc7374
				// 0xc7374
				g10 = v1;
				return 1;
			}
		}
		// 0xc7374
		g10 = v1;
		return 0;
	}
	// 0xc72e4
	v12 = 22;
	v11 = 1199;
	// branch -> 0xc72f0
	while (true) {
		// 0xc72f0
		if (v11 != (int32_t) * (int16_t *)v7) {
			goto lab_0xc731c;
		}
		// 0xc72fc
		g37 = *(int32_t *)(g23 - 0x55a4);
		strcpy();
		*(int32_t *)v2 = 17;
		*(int32_t *)v3 = 69;
		// branch -> 0xc7374
		// 0xc7374
		g10 = v1;
		return 1;
	}
}

// Address range: 0xc738c - 0xc7534
int32_t function_c738c(int32_t a1)
{
	int32_t v1 = g10; // 0xc7390
	g26 = *(int32_t *)(g23 - 0x55bc);
	g27 = *(int32_t *)(g23 - 0x55b4);
	g28 = *(int32_t *)(g23 - 0x55b0);
	g29 = *(int32_t *)(g23 - 0x77e4);
	g30 = *(int32_t *)(g23 - 0x76a4);
	int32_t v2 = *(int32_t *)(g23 - 0x765c); // 0xc73a8
	g31 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7658); // 0xc73ac
	g32 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x757c); // 0xc73b0
	g33 = v4;
	g35 = *(int32_t *)(g23 - 0x70f4);
	g36 = *(int32_t *)(g23 - 0x70f8);
	int32_t v5 = *(int32_t *)(g23 - 0x55ac); // 0xc73bc
	g25 = v5;
	int32_t v6 = *(int32_t *)v5; // 0xc74709
	int32_t v7;                  // 0xc7488
	int32_t v8;                  // 0xc7490
	int32_t v9;                  // 0xc75103
	int32_t v10;                 // 0xc747c
	if (v6 != -1) {
		while (true) {
			int32_t v11 = *(int32_t *)v3;                                     // 0xc73cc
			int32_t v12 = *(int32_t *)v4;                                     // 0xc73d8
			int16_t v13 = *(int16_t *)(v12 + 2 * *(int32_t *)v2 + 224 * v11); // 0xc73e4
			if (v6 == (int32_t)v13) {
				unsigned char v14 = *(char *)g29; // 0xc73f0
				int32_t v15 = v14;                // 0xc73f0
				g34 = g30;
				if ((v14 || 1) == 1) {
					// 0xc7410
					g37 = g27;
					strcpy();
					// branch -> 0xc741c
				} else {
					// 0xc73fc
					g38 = v15 - 1;
					g37 = g28;
					sprintf();
					// branch -> 0xc741c
				}
				uint32_t v16 = *(int32_t *)g36; // 0xc741c
				int32_t v17 = g35;              // 0xc7420
				if (v16 >= 1) {
					int32_t v18 = 0;   // 0xc7440
					int32_t v19 = v17; // 0xc7460
					while (true) {
						// 0xc7434
						if (*(int32_t *)(v19 + 8) == 1027) {
							int32_t v20 = 16 * v18 + v17; // 0xc7444
							*(int32_t *)g32 = *(int32_t *)v20;
							*(int32_t *)g31 = *(int32_t *)(v20 + 4);
							// branch -> 0xc7520
							// 0xc7520
							g10 = v1;
							return 1;
						}
						int32_t v21 = v19 + 16; // 0xc7460
						int32_t v22 = v18 + 1;  // 0xc7464
						int32_t v23 = v16 - 1;  // 0xc7468
						if (v23 == 0) {
							// break -> 0xc746c
							break;
						}
						v16 = v23;
						v18 = v22;
						v19 = v21;
						// continue -> 0xc7434
					}
					// 0xc746c
					// branch -> 0xc746c
				}
			}
			int32_t v24 = g25 + 4; // 0xc746c
			g25 = v24;
			int32_t v25 = *(int32_t *)v24; // 0xc7470
			if (v25 == -1) {
				// 0xc7470
				// branch -> 0xc747c
				// 0xc747c
				v10 = *(int32_t *)(g23 - 0x55b8);
				g25 = v10;
				v9 = *(int32_t *)v10;
				if (v9 == -1) {
					// 0xc751c
					// branch -> 0xc7520
					// 0xc7520
					g10 = v1;
					return 0;
				}
				int32_t v26 = v9; // 0xc74a0
				while (true) {
					int32_t v27 = *(int32_t *)g32; // 0xc7484
					v7 = *(int32_t *)g31;
					v8 = *(int32_t *)g33;
					if (v26 == (int32_t) * (int16_t *)(v8 + 2 * v7 + 224 * v27)) {
					lab_0xc74a8:
						// 0xc74a8
						g37 = g26;
						g38 = (int32_t) * (char *)g29 + 1;
						sprintf();
						uint32_t v28 = *(int32_t *)g36; // 0xc74bc
						int32_t v29 = g35;              // 0xc74c0
						if (v28 >= 1) {
							int32_t v30 = 0;   // 0xc74e0
							int32_t v31 = v29; // 0xc7500
							while (true) {
								// 0xc74d4
								if (*(int32_t *)(v31 + 8) == 1026) {
									int32_t v32 = 16 * v30 + v29; // 0xc74e4
									*(int32_t *)g32 = *(int32_t *)v32;
									*(int32_t *)g31 = *(int32_t *)(v32 + 4);
									// branch -> 0xc7520
									// 0xc7520
									g10 = v1;
									return 1;
								}
								int32_t v33 = v31 + 16; // 0xc7500
								int32_t v34 = v30 + 1;  // 0xc7504
								int32_t v35 = v28 - 1;  // 0xc7508
								if (v35 == 0) {
									// break -> 0xc750c
									break;
								}
								v28 = v35;
								v30 = v34;
								v31 = v33;
								// continue -> 0xc74d4
								continue;
							}
							// 0xc750c
							// branch -> 0xc750c
						}
					}
				lab_0xc750c:;
					int32_t v36 = g25 + 4; // 0xc750c
					g25 = v36;
					int32_t v37 = *(int32_t *)v36; // 0xc7510
					if (v37 == -1) {
						// break -> 0xc751c
						break;
					}
					v26 = v37;
					// continue -> 0xc7484
				}
				// 0xc751c
				// branch -> 0xc7520
				// 0xc7520
				g10 = v1;
				return 0;
			}
			// 0xc746c
			v6 = v25;
			v4 = g33;
			v2 = g31;
			v3 = g32;
			// branch -> 0xc73cc
		}
	}
	// 0xc747c
	v10 = *(int32_t *)(g23 - 0x55b8);
	g25 = v10;
	v9 = *(int32_t *)v10;
	if (v9 != -1) {
		while (true) {
			// 0xc7484
			v7 = *(int32_t *)g31;
			v8 = *(int32_t *)g33;
			int16_t v38 = *(int16_t *)(v8 + 2 * v7 + 224 * *(int32_t *)g32); // 0xc749c
			if (v9 == (int32_t)v38) {
				goto lab_0xc74a8;
			}
			goto lab_0xc750c;
		}
	}
	// 0xc751c
	// branch -> 0xc7520
	// 0xc7520
	g10 = v1;
	return 0;
}

// Address range: 0xc7534 - 0xc77c0
int32_t function_c7534(int32_t a1)
{
	int32_t v1 = g10; // 0xc7538
	g28 = *(int32_t *)(g23 - 0x55bc);
	g29 = *(int32_t *)(g23 - 0x77e4);
	g30 = *(int32_t *)(g23 - 0x76a4);
	int32_t v2 = *(int32_t *)(g23 - 0x765c); // 0xc7548
	g31 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7658); // 0xc754c
	g32 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x757c); // 0xc7550
	g33 = v4;
	g35 = *(int32_t *)(g23 - 0x70f4);
	int32_t v5 = *(int32_t *)(g23 - 0x70f8); // 0xc7558
	g36 = v5;
	int32_t v6 = *(int32_t *)(g23 - 0x55c0); // 0xc755c
	int32_t v7 = v6;                         // r23
	int32_t v8 = *(int32_t *)v6;             // 0xc762828
	int32_t v9;                              // 0xc778c4
	int32_t v10;                             // 0xc778c455
	int32_t v11;                             // 0xc7640
	int32_t v12;                             // 0xc7648
	int32_t v13;                             // 0xc76c816
	int32_t v14;                             // 0xc76ec
	int32_t v15;                             // 0xc76f4
	int32_t v16;                             // 0xc779c11
	int32_t v17;                             // 0xc7634
	int32_t v18;                             // 0xc76e0
	int16_t v19;                             // 0xc7700
	if (v8 != -1) {
		while (true) {
			int32_t v20 = *(int32_t *)v3;                                     // 0xc756c
			int32_t v21 = *(int32_t *)v4;                                     // 0xc7578
			int16_t v22 = *(int16_t *)(v21 + 2 * *(int32_t *)v2 + 224 * v20); // 0xc7584
			int32_t v23 = v5;                                                 // 0xc76182042
			int32_t v24;                                                      // 0xc7624
			int32_t v25;                                                      // 0xc7628
			if (v8 == (int32_t)v22) {
				int32_t v26 = g35; // 0xc7590
				g24 = v26;
				int32_t v27 = 0; // r22
				if (*(int32_t *)v5 > 0) {
					while (true) {
						// 0xc759c
						if (*(int32_t *)(v26 + 8) == 1027) {
							// 0xc75a8
							g34 = *(int32_t *)v26 - *(int32_t *)g32;
							g25 = abs();
							g34 = *(int32_t *)(g24 + 4) - *(int32_t *)g31;
							int32_t v28 = abs(); // 0xc75c8
							if (g25 <= 3) {
								// 0xc75d4
								if (v28 <= 3) {
									// 0xc75dc
									g37 = *(int32_t *)(g23 - 0x55b0);
									g38 = (int32_t) * (char *)g29 - 1;
									sprintf();
									int32_t v29 = g35 + 16 * g26; // 0xc75f4
									*(int32_t *)g32 = *(int32_t *)v29;
									*(int32_t *)g31 = *(int32_t *)(v29 + 4);
									// branch -> 0xc77ac
									// 0xc77ac
									g10 = v1;
									return 1;
								}
							}
						}
						int32_t v30 = g24 + 16; // 0xc7610
						g24 = v30;
						int32_t v31 = v27 + 1; // 0xc7614
						v27 = v31;
						int32_t v32 = g36; // 0xc7618
						if (v31 >= *(int32_t *)v32) {
							v23 = v32;
							// break -> 0xc7624
							break;
						}
						v26 = v30;
						// continue -> 0xc759c
					}
					// 0xc7624
					v24 = v7 + 4;
					v7 = v24;
					v25 = *(int32_t *)v24;
					if (v25 == -1) {
						// 0xc7628
						v5 = v23;
						// branch -> 0xc7634
						// 0xc7634
						v17 = *(int32_t *)(g23 - 0x55c4);
						g27 = v17;
						v13 = *(int32_t *)v17;
						if (v13 == -1) {
							// 0xc76d4
							if (*(char *)g29 == 5) {
								// 0xc76e0
								v18 = *(int32_t *)(g23 - 0x55c8);
								v7 = v18;
								v16 = *(int32_t *)v18;
								if (v16 != -1) {
									v9 = v5;
									while (true) {
										// 0xc76e8
										v14 = *(int32_t *)g31;
										v15 = *(int32_t *)g33;
										v19 = *(int16_t *)(v15 + 2 * v14 + 224 * *(int32_t *)g32);
										if (v16 == (int32_t)v19) {
											goto lab_0xc770c_2;
										}
										goto lab_0xc7798_2;
									}
								}
							}
							// 0xc77a8
							// branch -> 0xc77ac
							// 0xc77ac
							g10 = v1;
							return 0;
						}
						int32_t v33 = v5;  // 0xc778c456
						int32_t v34 = v13; // 0xc7658
						while (true) {
							int32_t v35 = *(int32_t *)g32; // 0xc763c
							v11 = *(int32_t *)g31;
							v12 = *(int32_t *)g33;
							v10 = v33;
							if (v34 == (int32_t) * (int16_t *)(v12 + 2 * v11 + 224 * v35)) {
							lab_0xc7660:
								// 0xc7660
								g37 = g28;
								g38 = (int32_t) * (char *)g29 + 1;
								sprintf();
								int32_t v36 = g36;              // 0xc7674
								uint32_t v37 = *(int32_t *)v36; // 0xc7674
								int32_t v38 = g35;              // 0xc7678
								if (v37 >= 1) {
									int32_t v39 = 0;   // 0xc7698
									int32_t v40 = v38; // 0xc76b8
									while (true) {
										// 0xc768c
										if (*(int32_t *)(v40 + 8) == 1026) {
											int32_t v41 = 16 * v39 + v38; // 0xc769c
											*(int32_t *)g32 = *(int32_t *)v41;
											*(int32_t *)g31 = *(int32_t *)(v41 + 4);
											// branch -> 0xc77ac
											// 0xc77ac
											g10 = v1;
											return 1;
										}
										int32_t v42 = v40 + 16; // 0xc76b8
										int32_t v43 = v39 + 1;  // 0xc76bc
										int32_t v44 = v37 - 1;  // 0xc76c0
										if (v44 == 0) {
											// break -> 0xc76c4
											break;
										}
										v37 = v44;
										v39 = v43;
										v40 = v42;
										// continue -> 0xc768c
										continue;
									}
									// 0xc76c4
									v10 = v36;
									// branch -> 0xc76c4
								} else {
									v10 = v36;
								}
							}
						lab_0xc76c4:;
							int32_t v45 = g27 + 4; // 0xc76c4
							g27 = v45;
							int32_t v46 = *(int32_t *)v45; // 0xc76c8
							if (v46 == -1) {
								// break -> 0xc76d4
								break;
							}
							v33 = v10;
							v34 = v46;
							// continue -> 0xc763c
						}
						// 0xc76d4
						if (*(char *)g29 == 5) {
							// 0xc76e0
							v18 = *(int32_t *)(g23 - 0x55c8);
							v7 = v18;
							v16 = *(int32_t *)v18;
							if (v16 != -1) {
								v9 = v10;
								int32_t v47 = v16; // 0xc7704
								while (true) {
									int32_t v48 = *(int32_t *)g32; // 0xc76e8
									v14 = *(int32_t *)g31;
									v15 = *(int32_t *)g33;
									int32_t v49; // 0xc7798
									int32_t v50; // 0xc779c
									if (v47 == (int32_t) * (int16_t *)(v15 + 2 * v14 + 224 * v48)) {
									lab_0xc770c_2:
										// 0xc770c
										g24 = g35;
										g25 = 0;
										if (*(int32_t *)v9 > 0) {
											int32_t v51 = g35; // 0xc7728
											int32_t v52;       // 0xc778c
											while (true) {
												// 0xc7718
												if (*(int32_t *)(v51 + 8) == 1032) {
													// 0xc7724
													g34 = *(int32_t *)v51 - *(int32_t *)g32;
													int32_t v53 = abs(); // 0xc7730
													g34 = *(int32_t *)(g24 + 4) - *(int32_t *)g31;
													int32_t v54 = abs(); // 0xc7744
													if (v53 <= 3) {
														// 0xc7750
														if (v54 <= 3) {
															// 0xc7758
															g34 = g30;
															g37 = *(int32_t *)(g23 - 0x55b4);
															strcpy();
															int32_t v55 = g35 + 16 * g25; // 0xc7768
															*(int32_t *)g32 = *(int32_t *)v55;
															*(int32_t *)g31 = *(int32_t *)(v55 + 4);
															// branch -> 0xc77ac
															// 0xc77ac
															g10 = v1;
															return 1;
														}
													}
												}
												int32_t v56 = g24 + 16; // 0xc7784
												g24 = v56;
												int32_t v57 = g25 + 1; // 0xc7788
												g25 = v57;
												v52 = g36;
												if (v57 >= *(int32_t *)v52) {
													// break -> 0xc7798
													break;
												}
												v51 = v56;
												// continue -> 0xc7718
											}
											// 0xc7798
											v49 = v7 + 4;
											v7 = v49;
											v50 = *(int32_t *)v49;
											if (v50 == -1) {
												// break -> 0xc77a8
												break;
											}
											v9 = v52;
											v47 = v50;
											// continue -> 0xc76e8
											continue;
										}
									}
								lab_0xc7798_2:
									// 0xc7798
									v49 = v7 + 4;
									v7 = v49;
									v50 = *(int32_t *)v49;
									if (v50 == -1) {
										// break -> 0xc77a8
										break;
									}
									v47 = v50;
									// continue -> 0xc76e8
								}
								// 0xc77a8
								// branch -> 0xc77ac
								// 0xc77ac
								g10 = v1;
								return 0;
							}
						}
						// 0xc77a8
						// branch -> 0xc77ac
						// 0xc77ac
						g10 = v1;
						return 0;
					}
				lab_0xc7624:
					// 0xc7624
					v5 = v23;
					v8 = v25;
					v4 = g33;
					v2 = g31;
					v3 = g32;
					// branch -> 0xc756c
					continue;
				} else {
					v23 = v5;
				}
			}
			// 0xc7624
			v24 = v7 + 4;
			v7 = v24;
			v25 = *(int32_t *)v24;
			if (v25 != -1) {
				goto lab_0xc7624;
			}
			// 0xc7628
			// branch -> 0xc7634
		}
	}
	// 0xc7634
	v17 = *(int32_t *)(g23 - 0x55c4);
	g27 = v17;
	v13 = *(int32_t *)v17;
	if (v13 != -1) {
		while (true) {
			// 0xc763c
			v11 = *(int32_t *)g31;
			v12 = *(int32_t *)g33;
			int16_t v58 = *(int16_t *)(v12 + 2 * v11 + 224 * *(int32_t *)g32); // 0xc7654
			if (v13 == (int32_t)v58) {
				goto lab_0xc7660;
			}
			v10 = v5;
			goto lab_0xc76c4;
		}
	}
	// 0xc76d4
	if (*(char *)g29 != 5) {
		// 0xc77a8
		// branch -> 0xc77ac
		// 0xc77ac
		g10 = v1;
		return 0;
	}
	// 0xc76e0
	v18 = *(int32_t *)(g23 - 0x55c8);
	v7 = v18;
	v16 = *(int32_t *)v18;
	if (v16 != -1) {
		v9 = v5;
		while (true) {
			// 0xc76e8
			v14 = *(int32_t *)g31;
			v15 = *(int32_t *)g33;
			v19 = *(int16_t *)(v15 + 2 * v14 + 224 * *(int32_t *)g32);
			if (v16 == (int32_t)v19) {
				goto lab_0xc770c_2;
			}
			goto lab_0xc7798_2;
		}
	}
	// 0xc77a8
	// branch -> 0xc77ac
	// 0xc77ac
	g10 = v1;
	return 0;
}

// Address range: 0xc77c0 - 0xc7a3c
int32_t function_c77c0(int32_t a1)
{
	int32_t v1 = g10; // 0xc77c4
	g27 = *(int32_t *)(g23 - 0x55bc);
	g28 = *(int32_t *)(g23 - 0x55b0);
	g29 = *(int32_t *)(g23 - 0x77e4);
	g30 = *(int32_t *)(g23 - 0x76a4);
	int32_t v2 = *(int32_t *)(g23 - 0x765c); // 0xc77d8
	g31 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7658); // 0xc77dc
	g32 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x757c); // 0xc77e0
	g33 = v4;
	g35 = *(int32_t *)(g23 - 0x70f4);
	int32_t v5 = *(int32_t *)(g23 - 0x70f8); // 0xc77e8
	g36 = v5;
	int32_t v6 = *(int32_t *)(g23 - 0x55cc); // 0xc77ec
	g26 = v6;
	int32_t v7 = *(int32_t *)v6; // 0xc788821
	int32_t v8;                  // r22
	int32_t v9;                  // 0xc78d4
	int32_t v10;                 // 0xc7a08356
	int32_t v11;                 // 0xc7a08357
	int32_t v12;                 // 0xc78a8
	int32_t v13;                 // 0xc78b4
	int32_t v14;                 // 0xc794415
	int32_t v15;                 // 0xc7968
	int32_t v16;                 // 0xc7970
	int32_t v17;                 // 0xc7a1810
	int32_t v18;                 // 0xc7894
	int32_t v19;                 // 0xc795c
	if (v7 != -1) {
		while (true) {
			int32_t v20 = *(int32_t *)v3;                                     // 0xc77fc
			int32_t v21 = *(int32_t *)v4;                                     // 0xc7808
			int16_t v22 = *(int16_t *)(v21 + 2 * *(int32_t *)v2 + 224 * v20); // 0xc7814
			int32_t v23 = v5;                                                 // 0xc7a08353
			if (v7 == (int32_t)v22) {
				// 0xc7820
				g37 = g28;
				g38 = (int32_t) * (char *)g29 - 1;
				sprintf();
				int32_t v24 = g36;              // 0xc7834
				uint32_t v25 = *(int32_t *)v24; // 0xc7834
				int32_t v26 = g35;              // 0xc7838
				if (v25 >= 1) {
					int32_t v27 = 0;   // 0xc7858
					int32_t v28 = v26; // 0xc7878
					while (true) {
						// 0xc784c
						if (*(int32_t *)(v28 + 8) == 1027) {
							int32_t v29 = 16 * v27 + v26; // 0xc785c
							*(int32_t *)g32 = *(int32_t *)v29;
							*(int32_t *)g31 = *(int32_t *)(v29 + 4);
							// branch -> 0xc7a28
							// 0xc7a28
							g10 = v1;
							return 1;
						}
						int32_t v30 = v28 + 16; // 0xc7878
						int32_t v31 = v27 + 1;  // 0xc787c
						int32_t v32 = v25 - 1;  // 0xc7880
						if (v32 == 0) {
							// break -> 0xc7884
							break;
						}
						v25 = v32;
						v27 = v31;
						v28 = v30;
						// continue -> 0xc784c
					}
					// 0xc7884
					v23 = v24;
					// branch -> 0xc7884
				} else {
					v23 = v24;
				}
			}
			int32_t v33 = g26 + 4; // 0xc7884
			g26 = v33;
			int32_t v34 = *(int32_t *)v33; // 0xc7888
			if (v34 == -1) {
				// 0xc7888
				v5 = v23;
				// branch -> 0xc7894
				// 0xc7894
				v18 = *(int32_t *)(g23 - 0x55d0);
				g26 = v18;
				v14 = *(int32_t *)v18;
				v11 = v5;
				if (v14 != -1) {
					v10 = v5;
					v9 = v14;
					while (true) {
						// 0xc789c
						v12 = *(int32_t *)g33;
						v13 = 2 * *(int32_t *)g31 + 224 * *(int32_t *)g32 + v12;
						int32_t v35; // 0xc7a08355
						if (v9 != (int32_t) * (int16_t *)v13) {
						lab_0xc78c4:
							// 0xc78c4
							if (v9 != (int32_t) * (int16_t *)(v13 + 224)) {
								// 0xc78d0
								if (v9 != (int32_t) * (int16_t *)(v13 + 448)) {
									v35 = v10;
								lab_0xc7940_2:;
									int32_t v36 = g26 + 4; // 0xc7940
									g26 = v36;
									int32_t v37 = *(int32_t *)v36; // 0xc7944
									if (v37 == -1) {
										v11 = v35;
										// break -> 0xc7950
										break;
									}
									v10 = v35;
									v9 = v37;
									// continue -> 0xc789c
									continue;
								}
							}
						}
					lab_0xc78dc:
						// 0xc78dc
						g37 = g27;
						g38 = (int32_t) * (char *)g29 + 1;
						sprintf();
						int32_t v38 = g36;             // 0xc78f0
						int32_t v39 = *(int32_t *)v38; // 0xc78f0
						int32_t v40 = g35;             // 0xc78f4
						if (v39 < 1) {
							v35 = v38;
							goto lab_0xc7940_2;
						}
						int32_t v41 = 0;   // 0xc7914
						int32_t v42 = v40; // 0xc7934
						while (true) {
							// 0xc7908
							if (*(int32_t *)(v42 + 8) == 1026) {
								int32_t v43 = 16 * v41 + v40; // 0xc7918
								*(int32_t *)g32 = *(int32_t *)v43;
								*(int32_t *)g31 = *(int32_t *)(v43 + 4);
								// branch -> 0xc7a28
								// 0xc7a28
								g10 = v1;
								return 1;
							}
							int32_t v44 = v42 + 16; // 0xc7934
							int32_t v45 = v41 + 1;  // 0xc7938
							int32_t v46 = v39 - 1;  // 0xc793c
							if (v46 == 0) {
								// break -> 0xc7940
								break;
							}
							v39 = v46;
							v41 = v45;
							v42 = v44;
							// continue -> 0xc7908
							continue;
						}
						// 0xc7940
						v35 = v38;
						// branch -> 0xc7940
						goto lab_0xc7940_2;
					}
				}
				// 0xc7950
				if (*(char *)g29 == 9) {
					// 0xc795c
					v19 = *(int32_t *)(g23 - 0x55d4);
					v8 = v19;
					v17 = *(int32_t *)v19;
					if (v17 != -1) {
						int32_t v47 = v17; // 0xc7980
						while (true) {
							int32_t v48 = *(int32_t *)g32; // 0xc7964
							v15 = *(int32_t *)g31;
							v16 = *(int32_t *)g33;
							int32_t v49; // 0xc7a14
							int32_t v50; // 0xc7a18
							if (v47 == (int32_t) * (int16_t *)(v16 + 2 * v15 + 224 * v48)) {
							lab_0xc7988:;
								int32_t v51 = g35; // r24
								int32_t v52 = 0;   // r25
								if (*(int32_t *)v11 > 0) {
									int32_t v53 = g35; // 0xc79a4
									int32_t v54;       // 0xc7a08
									while (true) {
										// 0xc7994
										if (*(int32_t *)(v53 + 8) == 1032) {
											// 0xc79a0
											g34 = *(int32_t *)v53 - *(int32_t *)g32;
											int32_t v55 = abs(); // 0xc79ac
											g34 = *(int32_t *)(v51 + 4) - *(int32_t *)g31;
											int32_t v56 = abs(); // 0xc79c0
											if (v55 <= 3) {
												// 0xc79cc
												if (v56 <= 3) {
													// 0xc79d4
													g34 = g30;
													g37 = *(int32_t *)(g23 - 0x55b4);
													strcpy();
													int32_t v57 = g35 + 16 * v52; // 0xc79e4
													*(int32_t *)g32 = *(int32_t *)v57;
													*(int32_t *)g31 = *(int32_t *)(v57 + 4);
													// branch -> 0xc7a28
													// 0xc7a28
													g10 = v1;
													return 1;
												}
											}
										}
										int32_t v58 = v51 + 16; // 0xc7a00
										v51 = v58;
										int32_t v59 = v52 + 1; // 0xc7a04
										v52 = v59;
										v54 = g36;
										if (v59 >= *(int32_t *)v54) {
											// break -> 0xc7a14
											break;
										}
										v53 = v58;
										// continue -> 0xc7994
									}
									// 0xc7a14
									v49 = v8 + 4;
									v8 = v49;
									v50 = *(int32_t *)v49;
									if (v50 == -1) {
										// break -> 0xc7a24
										break;
									}
									v11 = v54;
									v47 = v50;
									// continue -> 0xc7964
									continue;
								}
							}
						lab_0xc7a14:
							// 0xc7a14
							v49 = v8 + 4;
							v8 = v49;
							v50 = *(int32_t *)v49;
							if (v50 == -1) {
								// break -> 0xc7a24
								break;
							}
							v47 = v50;
							// continue -> 0xc7964
						}
						// 0xc7a24
						// branch -> 0xc7a28
						// 0xc7a28
						g10 = v1;
						return 0;
					}
				}
				// 0xc7a24
				// branch -> 0xc7a28
				// 0xc7a28
				g10 = v1;
				return 0;
			}
			// 0xc7884
			v5 = v23;
			v7 = v34;
			v4 = g33;
			v2 = g31;
			v3 = g32;
			// branch -> 0xc77fc
		}
	}
	// 0xc7894
	v18 = *(int32_t *)(g23 - 0x55d0);
	g26 = v18;
	v14 = *(int32_t *)v18;
	if (v14 != -1) {
		v10 = v5;
		v9 = v14;
		while (true) {
			// 0xc789c
			v12 = *(int32_t *)g33;
			v13 = 2 * *(int32_t *)g31 + 224 * *(int32_t *)g32 + v12;
			if (v9 == (int32_t) * (int16_t *)v13) {
				goto lab_0xc78dc;
			}
			goto lab_0xc78c4;
		}
	}
	// 0xc7950
	if (*(char *)g29 != 9) {
		// 0xc7a24
		// branch -> 0xc7a28
		// 0xc7a28
		g10 = v1;
		return 0;
	}
	// 0xc795c
	v19 = *(int32_t *)(g23 - 0x55d4);
	v8 = v19;
	v17 = *(int32_t *)v19;
	if (v17 != -1) {
		v11 = v5;
		while (true) {
			// 0xc7964
			v15 = *(int32_t *)g31;
			v16 = *(int32_t *)g33;
			int16_t v60 = *(int16_t *)(v16 + 2 * v15 + 224 * *(int32_t *)g32); // 0xc797c
			if (v17 == (int32_t)v60) {
				goto lab_0xc7988;
			}
			goto lab_0xc7a14;
		}
	}
	// 0xc7a24
	// branch -> 0xc7a28
	// 0xc7a28
	g10 = v1;
	return 0;
}

// Address range: 0xc7a3c - 0xc7d44
int32_t function_c7a3c(int32_t a1)
{
	int32_t v1 = g10; // 0xc7a40
	g26 = *(int32_t *)(g23 - 0x55e8);
	g27 = *(int32_t *)(g23 - 0x55bc);
	g28 = *(int32_t *)(g23 - 0x55b0);
	g29 = *(int32_t *)(g23 - 0x77e4);
	g30 = *(int32_t *)(g23 - 0x76a4);
	int32_t v2 = *(int32_t *)(g23 - 0x765c); // 0xc7a58
	g31 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x7658); // 0xc7a5c
	g32 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x757c); // 0xc7a60
	g33 = v4;
	g35 = *(int32_t *)(g23 - 0x70f4);
	int32_t v5 = *(int32_t *)(g23 - 0x70f8); // 0xc7a68
	g36 = v5;
	int32_t v6 = *(int32_t *)(g23 - 0x55d8); // 0xc7a6c
	g25 = v6;
	int32_t v7 = *(int32_t *)v6; // 0xc7b0827
	int32_t v8;                  // 0xc7bb4
	int32_t v9;                  // 0xc7c6c9
	int32_t v10;                 // 0xc7c6c967
	int32_t v11;                 // 0xc7b20
	int32_t v12;                 // 0xc7b28
	int32_t v13;                 // 0xc7ba821
	int32_t v14;                 // 0xc7bcc
	int32_t v15;                 // 0xc7bd4
	int32_t v16;                 // 0xc7c7c16
	int32_t v17;                 // 0xc7ca0
	int32_t v18;                 // 0xc7ca8
	int32_t v19;                 // 0xc7d205
	int32_t v20;                 // 0xc7b14
	int32_t v21;                 // 0xc7bc0
	int32_t v22;                 // 0xc7c94
	int16_t v23;                 // 0xc7be0
	int16_t v24;                 // 0xc7cb4
	if (v7 != -1) {
		while (true) {
			int32_t v25 = *(int32_t *)v3;                                     // 0xc7a7c
			int32_t v26 = *(int32_t *)v4;                                     // 0xc7a88
			int16_t v27 = *(int16_t *)(v26 + 2 * *(int32_t *)v2 + 224 * v25); // 0xc7a94
			int32_t v28 = v5;                                                 // 0xc7c6c965
			if (v7 == (int32_t)v27) {
				// 0xc7aa0
				g37 = g28;
				g38 = (int32_t) * (char *)g29 - 1;
				sprintf();
				int32_t v29 = g36;              // 0xc7ab4
				uint32_t v30 = *(int32_t *)v29; // 0xc7ab4
				int32_t v31 = g35;              // 0xc7ab8
				if (v30 >= 1) {
					int32_t v32 = 0;   // 0xc7ad8
					int32_t v33 = v31; // 0xc7af8
					while (true) {
						// 0xc7acc
						if (*(int32_t *)(v33 + 8) == 1027) {
							int32_t v34 = 16 * v32 + v31; // 0xc7adc
							*(int32_t *)g32 = *(int32_t *)v34;
							*(int32_t *)g31 = *(int32_t *)(v34 + 4);
							// branch -> 0xc7d30
							// 0xc7d30
							g10 = v1;
							return 1;
						}
						int32_t v35 = v33 + 16; // 0xc7af8
						int32_t v36 = v32 + 1;  // 0xc7afc
						int32_t v37 = v30 - 1;  // 0xc7b00
						if (v37 == 0) {
							// break -> 0xc7b04
							break;
						}
						v30 = v37;
						v32 = v36;
						v33 = v35;
						// continue -> 0xc7acc
					}
					// 0xc7b04
					v28 = v29;
					// branch -> 0xc7b04
				} else {
					v28 = v29;
				}
			}
			int32_t v38 = g25 + 4; // 0xc7b04
			g25 = v38;
			int32_t v39 = *(int32_t *)v38; // 0xc7b08
			if (v39 == -1) {
				// 0xc7b08
				v5 = v28;
				// branch -> 0xc7b14
				// 0xc7b14
				v20 = *(int32_t *)(g23 - 0x55dc);
				g25 = v20;
				v13 = *(int32_t *)v20;
				if (v13 == -1) {
					// 0xc7bb4
					v8 = g29;
					if (*(char *)v8 == 13) {
						// 0xc7bc0
						v21 = *(int32_t *)(g23 - 0x55e0);
						g25 = v21;
						v16 = *(int32_t *)v21;
						if (v16 != -1) {
							v9 = v5;
							while (true) {
								// 0xc7bc8
								v14 = *(int32_t *)g31;
								v15 = *(int32_t *)g33;
								v23 = *(int16_t *)(v15 + 2 * v14 + 224 * *(int32_t *)g32);
								if (v16 == (int32_t)v23) {
									goto lab_0xc7bec_2;
								}
								goto lab_0xc7c78_2;
							}
						}
					}
					// 0xc7c88
					if (*(char *)v8 == 15) {
						// 0xc7c94
						v22 = *(int32_t *)(g23 - 0x55e4);
						g25 = v22;
						v19 = *(int32_t *)v22;
						if (v19 != -1) {
							while (true) {
								// 0xc7c9c
								v17 = *(int32_t *)g31;
								v18 = *(int32_t *)g33;
								v24 = *(int16_t *)(v18 + 2 * v17 + 224 * *(int32_t *)g32);
								if (v19 == (int32_t)v24) {
									goto lab_0xc7cc0_3;
								}
								goto lab_0xc7d1c_3;
							}
						}
					}
					// 0xc7d2c
					// branch -> 0xc7d30
					// 0xc7d30
					g10 = v1;
					return 0;
				}
				int32_t v40 = v5;  // 0xc7c6c968
				int32_t v41 = v13; // 0xc7b38
				while (true) {
					int32_t v42 = *(int32_t *)g32; // 0xc7b1c
					v11 = *(int32_t *)g31;
					v12 = *(int32_t *)g33;
					v10 = v40;
					if (v41 == (int32_t) * (int16_t *)(v12 + 2 * v11 + 224 * v42)) {
					lab_0xc7b40:
						// 0xc7b40
						g37 = g27;
						g38 = (int32_t) * (char *)g29 + 1;
						sprintf();
						int32_t v43 = g36;              // 0xc7b54
						uint32_t v44 = *(int32_t *)v43; // 0xc7b54
						int32_t v45 = g35;              // 0xc7b58
						if (v44 >= 1) {
							int32_t v46 = 0;   // 0xc7b78
							int32_t v47 = v45; // 0xc7b98
							while (true) {
								// 0xc7b6c
								if (*(int32_t *)(v47 + 8) == 1026) {
									int32_t v48 = 16 * v46 + v45; // 0xc7b7c
									*(int32_t *)g32 = *(int32_t *)v48;
									*(int32_t *)g31 = *(int32_t *)(v48 + 4);
									// branch -> 0xc7d30
									// 0xc7d30
									g10 = v1;
									return 1;
								}
								int32_t v49 = v47 + 16; // 0xc7b98
								int32_t v50 = v46 + 1;  // 0xc7b9c
								int32_t v51 = v44 - 1;  // 0xc7ba0
								if (v51 == 0) {
									// break -> 0xc7ba4
									break;
								}
								v44 = v51;
								v46 = v50;
								v47 = v49;
								// continue -> 0xc7b6c
								continue;
							}
							// 0xc7ba4
							v10 = v43;
							// branch -> 0xc7ba4
						} else {
							v10 = v43;
						}
					}
				lab_0xc7ba4:;
					int32_t v52 = g25 + 4; // 0xc7ba4
					g25 = v52;
					int32_t v53 = *(int32_t *)v52; // 0xc7ba8
					if (v53 == -1) {
						// break -> 0xc7bb4
						break;
					}
					v40 = v10;
					v41 = v53;
					// continue -> 0xc7b1c
				}
				// 0xc7bb4
				v8 = g29;
				int32_t v54 = v8; // 0xc7c88
				if (*(char *)v8 == 13) {
					// 0xc7bc0
					v21 = *(int32_t *)(g23 - 0x55e0);
					g25 = v21;
					v16 = *(int32_t *)v21;
					if (v16 != -1) {
						v9 = v10;
						int32_t v55 = v16; // 0xc7be4
						while (true) {
							int32_t v56 = *(int32_t *)g32; // 0xc7bc8
							v14 = *(int32_t *)g31;
							v15 = *(int32_t *)g33;
							int32_t v57; // 0xc7c78
							int32_t v58; // 0xc7c7c
							if (v55 == (int32_t) * (int16_t *)(v15 + 2 * v14 + 224 * v56)) {
							lab_0xc7bec_2:;
								int32_t v59 = g35; // r24
								g24 = 0;
								if (*(int32_t *)v9 > 0) {
									int32_t v60 = g35; // 0xc7c08
									int32_t v61;       // 0xc7c6c
									while (true) {
										// 0xc7bf8
										if (*(int32_t *)(v60 + 8) == 1032) {
											// 0xc7c04
											g34 = *(int32_t *)v60 - *(int32_t *)g32;
											int32_t v62 = abs(); // 0xc7c10
											g34 = *(int32_t *)(v59 + 4) - *(int32_t *)g31;
											int32_t v63 = abs(); // 0xc7c24
											if (v62 <= 3) {
												// 0xc7c30
												if (v63 <= 3) {
													// 0xc7c38
													g34 = g30;
													g37 = *(int32_t *)(g23 - 0x55b4);
													strcpy();
													int32_t v64 = g35 + 16 * g24; // 0xc7c48
													*(int32_t *)g32 = *(int32_t *)v64;
													*(int32_t *)g31 = *(int32_t *)(v64 + 4);
													// branch -> 0xc7d30
													// 0xc7d30
													g10 = v1;
													return 1;
												}
											}
										}
										int32_t v65 = v59 + 16; // 0xc7c64
										v59 = v65;
										int32_t v66 = g24 + 1; // 0xc7c68
										g24 = v66;
										v61 = g36;
										if (v66 >= *(int32_t *)v61) {
											// break -> 0xc7c78
											break;
										}
										v60 = v65;
										// continue -> 0xc7bf8
									}
									// 0xc7c78
									v57 = g25 + 4;
									g25 = v57;
									v58 = *(int32_t *)v57;
									if (v58 == -1) {
										// break -> 0xc7c7c
										break;
									}
									v9 = v61;
									v55 = v58;
									// continue -> 0xc7bc8
									continue;
								}
							}
						lab_0xc7c78_2:
							// 0xc7c78
							v57 = g25 + 4;
							g25 = v57;
							v58 = *(int32_t *)v57;
							if (v58 == -1) {
								// break -> 0xc7c7c
								break;
							}
							v55 = v58;
							// continue -> 0xc7bc8
						}
						// 0xc7c7c
						v54 = g29;
						// branch -> 0xc7c88
					} else {
						v54 = v8;
					}
				}
				// 0xc7c88
				if (*(char *)v54 == 15) {
					// 0xc7c94
					v22 = *(int32_t *)(g23 - 0x55e4);
					g25 = v22;
					v19 = *(int32_t *)v22;
					if (v19 != -1) {
						int32_t v67 = v19; // 0xc7cb8
						while (true) {
							int32_t v68 = *(int32_t *)g32; // 0xc7c9c
							v17 = *(int32_t *)g31;
							v18 = *(int32_t *)g33;
							if (v67 == (int32_t) * (int16_t *)(v18 + 2 * v17 + 224 * v68)) {
							lab_0xc7cc0_3:
								// 0xc7cc0
								g34 = g30;
								g37 = g26;
								strcpy();
								uint32_t v69 = *(int32_t *)g36; // 0xc7ccc
								if (v69 >= 1) {
									int32_t v70 = 0;   // 0xc7cf0
									int32_t v71 = g35; // 0xc7d10
									while (true) {
										// 0xc7ce4
										if (*(int32_t *)(v71 + 8) == 1026) {
											int32_t v72 = 16 * v70 + g35; // 0xc7cf4
											*(int32_t *)g32 = *(int32_t *)v72;
											*(int32_t *)g31 = *(int32_t *)(v72 + 4);
											// branch -> 0xc7d30
											// 0xc7d30
											g10 = v1;
											return 1;
										}
										int32_t v73 = v71 + 16; // 0xc7d10
										int32_t v74 = v70 + 1;  // 0xc7d14
										int32_t v75 = v69 - 1;  // 0xc7d18
										if (v75 == 0) {
											// break -> 0xc7d1c
											break;
										}
										v69 = v75;
										v70 = v74;
										v71 = v73;
										// continue -> 0xc7ce4
										continue;
									}
									// 0xc7d1c
									// branch -> 0xc7d1c
								}
							}
						lab_0xc7d1c_3:;
							int32_t v76 = g25 + 4; // 0xc7d1c
							g25 = v76;
							int32_t v77 = *(int32_t *)v76; // 0xc7d20
							if (v77 == -1) {
								// break -> 0xc7d2c
								break;
							}
							v67 = v77;
							// continue -> 0xc7c9c
						}
						// 0xc7d2c
						// branch -> 0xc7d30
						// 0xc7d30
						g10 = v1;
						return 0;
					}
				}
				// 0xc7d2c
				// branch -> 0xc7d30
				// 0xc7d30
				g10 = v1;
				return 0;
			}
			// 0xc7b04
			v5 = v28;
			v7 = v39;
			v4 = g33;
			v2 = g31;
			v3 = g32;
			// branch -> 0xc7a7c
		}
	}
	// 0xc7b14
	v20 = *(int32_t *)(g23 - 0x55dc);
	g25 = v20;
	v13 = *(int32_t *)v20;
	if (v13 != -1) {
		while (true) {
			// 0xc7b1c
			v11 = *(int32_t *)g31;
			v12 = *(int32_t *)g33;
			int16_t v78 = *(int16_t *)(v12 + 2 * v11 + 224 * *(int32_t *)g32); // 0xc7b34
			if (v13 == (int32_t)v78) {
				goto lab_0xc7b40;
			}
			v10 = v5;
			goto lab_0xc7ba4;
		}
	}
	// 0xc7bb4
	v8 = g29;
	if (*(char *)v8 != 13) {
		// 0xc7c88
		if (*(char *)v8 != 15) {
			// 0xc7d2c
			// branch -> 0xc7d30
			// 0xc7d30
			g10 = v1;
			return 0;
		}
		// 0xc7c94
		v22 = *(int32_t *)(g23 - 0x55e4);
		g25 = v22;
		v19 = *(int32_t *)v22;
		if (v19 != -1) {
			while (true) {
				// 0xc7c9c
				v17 = *(int32_t *)g31;
				v18 = *(int32_t *)g33;
				v24 = *(int16_t *)(v18 + 2 * v17 + 224 * *(int32_t *)g32);
				if (v19 == (int32_t)v24) {
					goto lab_0xc7cc0_3;
				}
				goto lab_0xc7d1c_3;
			}
		}
		// 0xc7d2c
		// branch -> 0xc7d30
		// 0xc7d30
		g10 = v1;
		return 0;
	}
	// 0xc7bc0
	v21 = *(int32_t *)(g23 - 0x55e0);
	g25 = v21;
	v16 = *(int32_t *)v21;
	if (v16 != -1) {
		v9 = v5;
		while (true) {
			// 0xc7bc8
			v14 = *(int32_t *)g31;
			v15 = *(int32_t *)g33;
			v23 = *(int16_t *)(v15 + 2 * v14 + 224 * *(int32_t *)g32);
			if (v16 == (int32_t)v23) {
				goto lab_0xc7bec_2;
			}
			goto lab_0xc7c78_2;
		}
	}
	// 0xc7c88
	if (*(char *)v8 == 15) {
		// 0xc7c94
		v22 = *(int32_t *)(g23 - 0x55e4);
		g25 = v22;
		v19 = *(int32_t *)v22;
		if (v19 != -1) {
			while (true) {
				// 0xc7c9c
				v17 = *(int32_t *)g31;
				v18 = *(int32_t *)g33;
				v24 = *(int16_t *)(v18 + 2 * v17 + 224 * *(int32_t *)g32);
				if (v19 == (int32_t)v24) {
					goto lab_0xc7cc0_3;
				}
				goto lab_0xc7d1c_3;
			}
		}
	}
	// 0xc7d2c
	// branch -> 0xc7d30
	// 0xc7d30
	g10 = v1;
	return 0;
}

// Address range: 0xc7d44 - 0xc8030
int32_t Freeupstairs(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x779c); // 0xc7d44
	int32_t v2 = 0;                          // r10
	int32_t v3 = *(int32_t *)(g23 - 0x70f8); // 0xc7d4c
	int32_t v4 = *(int32_t *)(g23 - 0x70f4); // 0xc7d50
	if (*(int32_t *)v3 > 0) {
		while (true) {
			int32_t v5 = *(int32_t *)v4;                                // 0xc7d58
			int32_t v6 = v5;                                            // r11
			int32_t v7 = *(int32_t *)(v4 + 4);                          // 0xc7d5c
			int32_t v8 = v7;                                            // r12
			int32_t v9 = v7 - 2;                                        // 0xc7d6c
			int32_t v10 = v9;                                           // r8
			char *v11 = (char *)(*(int32_t *)v1 + 112 * (v5 - 2) + v9); // 0xc7d78
			*v11 = *v11 | 8;
			int32_t v12 = *(int32_t *)v1;                     // 0xc7d8c
			char *v13 = (char *)(v10 + 112 * (v5 - 1) + v12); // 0xc7d94
			*v13 = *v13 | 8;
			int32_t v14 = *(int32_t *)v1;               // 0xc7da4
			char *v15 = (char *)(v10 + 112 * v6 + v14); // 0xc7dac
			*v15 = *v15 | 8;
			int32_t v16 = *(int32_t *)v1;                     // 0xc7dc0
			char *v17 = (char *)(v10 + 112 * (v5 + 1) + v16); // 0xc7dc8
			*v17 = *v17 | 8;
			int32_t v18 = *(int32_t *)v1;                     // 0xc7dd8
			char *v19 = (char *)(v10 + 112 * (v6 + 2) + v18); // 0xc7de0
			*v19 = *v19 | 8;
			int32_t v20 = v8 - 1; // 0xc7dec
			v10 = v20;
			int32_t v21 = v6;                                             // 0xc7df0
			char *v22 = (char *)(*(int32_t *)v1 + 112 * (v21 - 2) + v20); // 0xc7e04
			*v22 = *v22 | 8;
			int32_t v23 = *(int32_t *)v1;                      // 0xc7e18
			char *v24 = (char *)(v10 + 112 * (v21 - 1) + v23); // 0xc7e20
			*v24 = *v24 | 8;
			int32_t v25 = *(int32_t *)v1;               // 0xc7e30
			char *v26 = (char *)(v10 + 112 * v6 + v25); // 0xc7e38
			*v26 = *v26 | 8;
			int32_t v27 = *(int32_t *)v1;                      // 0xc7e4c
			char *v28 = (char *)(v10 + 112 * (v21 + 1) + v27); // 0xc7e54
			*v28 = *v28 | 8;
			int32_t v29 = *(int32_t *)v1;                     // 0xc7e64
			char *v30 = (char *)(v10 + 112 * (v6 + 2) + v29); // 0xc7e6c
			*v30 = *v30 | 8;
			int32_t v31 = v6; // 0xc7e78
			int32_t v32 = v8; // 0xc7e88
			v10 = v32 + 1;
			char *v33 = (char *)(v32 + *(int32_t *)v1 + 112 * (v31 - 2)); // 0xc7e90
			*v33 = *v33 | 8;
			int32_t v34 = *(int32_t *)v1;                     // 0xc7ea4
			char *v35 = (char *)(v8 + 112 * (v31 - 1) + v34); // 0xc7eac
			*v35 = *v35 | 8;
			int32_t v36 = *(int32_t *)v1;              // 0xc7ebc
			char *v37 = (char *)(v8 + 112 * v6 + v36); // 0xc7ec4
			*v37 = *v37 | 8;
			int32_t v38 = *(int32_t *)v1;                     // 0xc7ed8
			char *v39 = (char *)(v8 + 112 * (v31 + 1) + v38); // 0xc7ee0
			*v39 = *v39 | 8;
			int32_t v40 = *(int32_t *)v1;                    // 0xc7ef0
			char *v41 = (char *)(v8 + 112 * (v6 + 2) + v40); // 0xc7ef8
			*v41 = *v41 | 8;
			int32_t v42 = v6;                                  // 0xc7f04
			int32_t v43 = *(int32_t *)v1;                      // 0xc7f08
			char *v44 = (char *)(v10 + v43 + 112 * (v42 - 2)); // 0xc7f18
			*v44 = *v44 | 8;
			int32_t v45 = *(int32_t *)v1;                      // 0xc7f2c
			char *v46 = (char *)(v10 + 112 * (v42 - 1) + v45); // 0xc7f34
			*v46 = *v46 | 8;
			int32_t v47 = *(int32_t *)v1;               // 0xc7f44
			char *v48 = (char *)(v10 + 112 * v6 + v47); // 0xc7f4c
			*v48 = *v48 | 8;
			int32_t v49 = *(int32_t *)v1;                      // 0xc7f60
			char *v50 = (char *)(v10 + 112 * (v42 + 1) + v49); // 0xc7f68
			*v50 = *v50 | 8;
			int32_t v51 = *(int32_t *)v1;                     // 0xc7f78
			char *v52 = (char *)(v10 + 112 * (v6 + 2) + v51); // 0xc7f80
			*v52 = *v52 | 8;
			int32_t v53 = v8 + 2; // 0xc7f8c
			v10 = v53;
			int32_t v54 = v6; // 0xc7f90
			v4 += 16;
			v2++;
			char *v55 = (char *)(*(int32_t *)v1 + 112 * (v54 - 2) + v53); // 0xc7fac
			*v55 = *v55 | 8;
			int32_t v56 = *(int32_t *)v1;                      // 0xc7fc0
			char *v57 = (char *)(v10 + 112 * (v54 - 1) + v56); // 0xc7fc8
			*v57 = *v57 | 8;
			int32_t v58 = *(int32_t *)v1;               // 0xc7fd8
			char *v59 = (char *)(v10 + 112 * v6 + v58); // 0xc7fe0
			*v59 = *v59 | 8;
			int32_t v60 = *(int32_t *)v1;                      // 0xc7ff4
			char *v61 = (char *)(v10 + 112 * (v54 + 1) + v60); // 0xc7ffc
			*v61 = *v61 | 8;
			int32_t v62 = 112 * (v6 + 2) + *(int32_t *)v1; // 0xc8010
			g34 = v62;
			char *v63 = (char *)(v10 + v62); // 0xc8014
			*v63 = *v63 | 8;
			if (v2 < *(int32_t *)v3) {
				// 0xc7d58
				// branch -> 0xc7d58
				continue;
			}
		}
	}
	// 0xc802c
	return g34;
}

// Address range: 0xc8030 - 0xc80e4
int32_t function_c8030(int32_t a1)
{
	int32_t v1 = g36;                        // 0xc8030
	int32_t v2 = *(int32_t *)(g23 - 0x7658); // 0xc8040
	g35 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x765c); // 0xc8048
	g33 = v3;
	g36 = *(int32_t *)(g23 - 0x70f4);
	int32_t v4 = *(int32_t *)(g23 - 0x55ac);                     // 0xc8058
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x757c);         // 0xc8068
	int32_t v6 = 2 * *(int32_t *)v3 + 224 * *(int32_t *)v2 + v5; // 0xc8074
	int32_t v7 = *(int32_t *)v4;                                 // 0xc80b83
	if (v7 == -1) {
		// 0xc80c4
		// branch -> 0xc80c8
	} else {
		// branch -> 0xc807c
		while (true) {
			// 0xc807c
			if (v7 == (int32_t) * (int16_t *)v6) {
				// 0xc8088
				g37 = *(int32_t *)(g23 - 0x55ec);
				g38 = (int32_t) * (char *)(*(int32_t *)(g23 - 0x7604) + 288);
				sprintf();
				*(int32_t *)g35 = *(int32_t *)g36;
				*(int32_t *)g33 = *(int32_t *)(g36 + 4);
				// branch -> 0xc80c8
				// 0xc80c8
				g36 = v1;
				return 1;
			}
			int32_t v8 = v4 + 4;         // 0xc80b4
			int32_t v9 = *(int32_t *)v8; // 0xc80b8
			if (v9 == -1) {
				// break -> 0xc80b8
				break;
			}
			v4 = v8;
			v7 = v9;
			// continue -> 0xc807c
		}
		// 0xc80b8
		// branch -> 0xc80c4
		// 0xc80c4
		// branch -> 0xc80c8
	}
	// 0xc80c8
	g36 = v1;
	return 0;
}

// Address range: 0xc80e4 - 0xc8198
int32_t function_c80e4(int32_t a1)
{
	int32_t v1 = g36;                        // 0xc80e4
	int32_t v2 = *(int32_t *)(g23 - 0x7658); // 0xc80f4
	g35 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x765c); // 0xc80fc
	g33 = v3;
	g36 = *(int32_t *)(g23 - 0x70f4);
	int32_t v4 = *(int32_t *)(g23 - 0x55c4);                     // 0xc810c
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x757c);         // 0xc811c
	int32_t v6 = 2 * *(int32_t *)v3 + 224 * *(int32_t *)v2 + v5; // 0xc8128
	int32_t v7 = *(int32_t *)v4;                                 // 0xc816c3
	if (v7 == -1) {
		// 0xc8178
		// branch -> 0xc817c
	} else {
		// branch -> 0xc8130
		while (true) {
			// 0xc8130
			if (v7 == (int32_t) * (int16_t *)v6) {
				// 0xc813c
				g37 = *(int32_t *)(g23 - 0x55ec);
				g38 = (int32_t) * (char *)(*(int32_t *)(g23 - 0x7604) + 336);
				sprintf();
				*(int32_t *)g35 = *(int32_t *)g36;
				*(int32_t *)g33 = *(int32_t *)(g36 + 4);
				// branch -> 0xc817c
				// 0xc817c
				g36 = v1;
				return 1;
			}
			int32_t v8 = v4 + 4;         // 0xc8168
			int32_t v9 = *(int32_t *)v8; // 0xc816c
			if (v9 == -1) {
				// break -> 0xc816c
				break;
			}
			v4 = v8;
			v7 = v9;
			// continue -> 0xc8130
		}
		// 0xc816c
		// branch -> 0xc8178
		// 0xc8178
		// branch -> 0xc817c
	}
	// 0xc817c
	g36 = v1;
	return 0;
}

// Address range: 0xc8198 - 0xc824c
int32_t function_c8198(int32_t a1)
{
	int32_t v1 = g36;                        // 0xc8198
	int32_t v2 = *(int32_t *)(g23 - 0x7658); // 0xc81a8
	g35 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x765c); // 0xc81b0
	g33 = v3;
	g36 = *(int32_t *)(g23 - 0x70f4);
	int32_t v4 = *(int32_t *)(g23 - 0x55d0);                     // 0xc81c0
	int32_t v5 = *(int32_t *)*(int32_t *)(g23 - 0x757c);         // 0xc81d0
	int32_t v6 = 2 * *(int32_t *)v3 + 224 * *(int32_t *)v2 + v5; // 0xc81dc
	int32_t v7 = *(int32_t *)v4;                                 // 0xc82203
	if (v7 == -1) {
		// 0xc822c
		// branch -> 0xc8230
	} else {
		// branch -> 0xc81e4
		while (true) {
			// 0xc81e4
			if (v7 == (int32_t) * (int16_t *)v6) {
				// 0xc81f0
				g37 = *(int32_t *)(g23 - 0x55ec);
				g38 = (int32_t) * (char *)(*(int32_t *)(g23 - 0x7604) + 312);
				sprintf();
				*(int32_t *)g35 = *(int32_t *)g36;
				*(int32_t *)g33 = *(int32_t *)(g36 + 4);
				// branch -> 0xc8230
				// 0xc8230
				g36 = v1;
				return 1;
			}
			int32_t v8 = v4 + 4;         // 0xc821c
			int32_t v9 = *(int32_t *)v8; // 0xc8220
			if (v9 == -1) {
				// break -> 0xc8220
				break;
			}
			v4 = v8;
			v7 = v9;
			// continue -> 0xc81e4
		}
		// 0xc8220
		// branch -> 0xc822c
		// 0xc822c
		// branch -> 0xc8230
	}
	// 0xc8230
	g36 = v1;
	return 0;
}

// Address range: 0xc824c - 0xc8394
int32_t function_c824c(void)
{
	int32_t v1 = g10;                        // 0xc8250
	int32_t v2 = *(int32_t *)(g23 - 0x7740); // 0xc8254
	g36 = v2;
	g35 = *(int32_t *)(g23 - 0x7794);
	*(int32_t *)v2 = 0;
	int32_t result = *(int32_t *)(g23 - 0x76ac); // 0xc8274
	if (*(int32_t *)result > 351) {
		// 0xc837c
		g10 = v1;
		return result;
	}
	int32_t v3 = *(int32_t *)(g23 - 0x77d8); // 0xc8280
	int32_t v4 = v3;                         // r3
	int32_t result2;                         // 0xc8390
	if (*(char *)v3 != 0) {
		int32_t v5 = *(int32_t *)(g23 - 0x77e0); // 0xc831c
		v4 = v5;
		unsigned char v6 = *(char *)v5; // 0xc8320
		if (v6 == 3) {
			// 0xc836c
			if (*(int32_t *)g36 == 0) {
				// 0xc836c
				result2 = v4;
				// branch -> 0xc837c
			} else {
				// 0xc8378
				result2 = function_2dc1c();
				// branch -> 0xc837c
			}
			// 0xc837c
			g10 = v1;
			return result2;
		}
		// 0xc832c
		if (v6 > 3) {
			// 0xc8340
			if (v6 == 4) {
				int32_t v7 = function_c8198(v5); // 0xc8364
				v4 = v7;
				*(int32_t *)g36 = v7;
				// branch -> 0xc836c
			}
			// 0xc836c
			if (*(int32_t *)g36 == 0) {
				// 0xc836c
				result2 = v4;
				// branch -> 0xc837c
			} else {
				// 0xc8378
				result2 = function_2dc1c();
				// branch -> 0xc837c
			}
			// 0xc837c
			g10 = v1;
			return result2;
		}
		// 0xc8330
		if (v6 == 1) {
			int32_t v8 = function_c8030(v5); // 0xc834c
			v4 = v8;
			*(int32_t *)g36 = v8;
			// branch -> 0xc836c
		} else {
			// 0xc8338
			if (v6 != 0) {
				int32_t v9 = function_c80e4(v5); // 0xc8358
				v4 = v9;
				*(int32_t *)g36 = v9;
				// branch -> 0xc836c
			}
		}
		// 0xc836c
		if (*(int32_t *)g36 == 0) {
			// 0xc836c
			result2 = v4;
			// branch -> 0xc837c
		} else {
			// 0xc8378
			result2 = function_2dc1c();
			// branch -> 0xc837c
		}
		// 0xc837c
		g10 = v1;
		return result2;
	}
	unsigned char v10 = *(char *)g35; // 0xc8290
	int32_t v11;                      // 0xc8310
	if (v10 == 2) {
		int32_t v12 = function_c7534(v3); // 0xc82d8
		v4 = v12;
		*(int32_t *)g36 = v12;
		// branch -> 0xc82f8
		// 0xc82f8
		if (*(char *)g35 != 0) {
			// 0xc8304
			if (*(int32_t *)g36 == 0) {
				// 0xc8310
				v11 = function_ac9c4();
				v4 = v11;
				*(int32_t *)g36 = v11;
				// branch -> 0xc836c
			}
		}
		// 0xc836c
		if (*(int32_t *)g36 == 0) {
			// 0xc836c
			result2 = v4;
			// branch -> 0xc837c
		} else {
			// 0xc8378
			result2 = function_2dc1c();
			// branch -> 0xc837c
		}
		// 0xc837c
		g10 = v1;
		return result2;
	}
	// 0xc829c
	if (v10 <= 2) {
		// 0xc82a0
		if (v10 == 0) {
			int32_t v13 = function_c7200(v3); // 0xc82c0
			v4 = v13;
			*(int32_t *)g36 = v13;
			// branch -> 0xc82f8
		} else {
			int32_t v14 = function_c738c(v3); // 0xc82cc
			v4 = v14;
			*(int32_t *)g36 = v14;
			// branch -> 0xc82f8
		}
		// 0xc82f8
		if (*(char *)g35 != 0) {
			// 0xc8304
			if (*(int32_t *)g36 == 0) {
				// 0xc8310
				v11 = function_ac9c4();
				v4 = v11;
				*(int32_t *)g36 = v11;
				// branch -> 0xc836c
			}
		}
		// 0xc836c
		if (*(int32_t *)g36 == 0) {
			// 0xc836c
			result2 = v4;
			// branch -> 0xc837c
		} else {
			// 0xc8378
			result2 = function_2dc1c();
			// branch -> 0xc837c
		}
		// 0xc837c
		g10 = v1;
		return result2;
	}
	// 0xc82b0
	if (v10 == 4) {
		int32_t v15 = function_c7a3c(v3); // 0xc82f0
		v4 = v15;
		*(int32_t *)g36 = v15;
		// branch -> 0xc82f8
	} else {
		// 0xc82b8
		if (v10 <= 4) {
			int32_t v16 = function_c77c0(v3); // 0xc82e4
			v4 = v16;
			*(int32_t *)g36 = v16;
			// branch -> 0xc82f8
		}
	}
	// 0xc82f8
	if (*(char *)g35 != 0) {
		// 0xc8304
		if (*(int32_t *)g36 == 0) {
			// 0xc8310
			v11 = function_ac9c4();
			v4 = v11;
			*(int32_t *)g36 = v11;
			// branch -> 0xc836c
		}
	}
	// 0xc836c
	if (*(int32_t *)g36 == 0) {
		// 0xc836c
		result2 = v4;
		// branch -> 0xc837c
	} else {
		// 0xc8378
		result2 = function_2dc1c();
		// branch -> 0xc837c
	}
	// 0xc837c
	g10 = v1;
	return result2;
}

// Address range: 0xc8394 - 0xc8604
int32_t CheckTriggers(int32_t a1)
{
	int32_t v1 = g10;                        // 0xc8398
	int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0xc839c
	g32 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0xc83a0
	g33 = v3;
	g27 = *(int32_t *)(g23 - 0x55f0);
	g28 = *(int32_t *)(g23 - 0x7138);
	g29 = *(int32_t *)(g23 - 0x6ec0);
	g30 = *(int32_t *)(g23 - 0x7744);
	g31 = *(int32_t *)(g23 - 0x77e4);
	g35 = *(int32_t *)(g23 - 0x77f0);
	int32_t v4 = *(int32_t *)(g23 - 0x70f8); // 0xc83bc
	g36 = v4;
	if (*(int32_t *)(0x55ec * *(int32_t *)v2 + v3) == 0) {
		int32_t v5 = *(int32_t *)(g23 - 0x70f4); // 0xc83dc
		g26 = v5;
		g25 = 0;
		if (*(int32_t *)v4 > 0) {
			while (true) {
				int32_t v6 = *(int32_t *)v2; // 0xc83e8
				g34 = v6;
				int32_t v7 = *(int32_t *)v5;   // 0xc83ec
				int32_t v8 = 0x55ec * v6 + v3; // 0xc83f4
				int32_t v9;                    // 0xc85dc
				int32_t v10;                   // 0xc85e0
				if (*(int32_t *)(v8 + 56) == v7) {
					int32_t v11 = *(int32_t *)(v8 + 60); // 0xc8404
					if (v11 == *(int32_t *)(v5 + 4)) {
						int32_t v12 = *(int32_t *)(v5 + 8); // 0xc8414
						g37 = v12;
						if (v12 == 1028) {
							// 0xc85c8
							g34 = StartNewLvl(v6, 1028, *(int32_t *)g28);
							// branch -> 0xc85dc
							// 0xc85dc
							v9 = g26 + 16;
							g26 = v9;
							v10 = g25 + 1;
							g25 = v10;
							if (v10 < *(int32_t *)g36) {
								goto lab_0xc85dc_8;
							}
							// 0xc85f0
							g10 = v1;
							return g34;
						}
						// 0xc8420
						if (v12 <= 1028) {
							// 0xc8424
							if (v12 == 1026) {
								// 0xc844c
								if (*(int32_t *)g30 < 12) {
								lab_0xc8464:;
									unsigned char v13 = *(char *)g31;   // 0xc8464
									int32_t v14 = *(int32_t *)(v5 + 8); // 0xc846c
									g34 = StartNewLvl(*(int32_t *)v2, v14, (int32_t)v13 + 1);
									// branch -> 0xc85dc
									goto lab_0xc85dc_4;
								} else {
									int32_t v15 = function_5bab0(v6); // 0xc8458
									g34 = v15;
									if (v15 == 0) {
										// 0xc8458
										v5 = g26;
										v2 = g32;
										// branch -> 0xc8464
										goto lab_0xc8464;
									}
								}
								// 0xc85f0
								g10 = v1;
								return g34;
							}
							// 0xc842c
							if (v12 <= 1026) {
								goto lab_0xc85d4;
							}
							// 0xc847c
							if (*(int32_t *)g30 < 12) {
							lab_0xc8494:;
								unsigned char v16 = *(char *)g31;   // 0xc8494
								int32_t v17 = *(int32_t *)(v5 + 8); // 0xc849c
								g34 = StartNewLvl(*(int32_t *)v2, v17, (int32_t)v16 - 1);
								// branch -> 0xc85dc
								goto lab_0xc85dc_4;
							} else {
								int32_t v18 = function_5bab0(v6); // 0xc8488
								g34 = v18;
								if (v18 == 0) {
									// 0xc8488
									v5 = g26;
									v2 = g32;
									// branch -> 0xc8494
									goto lab_0xc8494;
								}
							}
							// 0xc85f0
							g10 = v1;
							return g34;
						lab_0xc85dc_6:;
							int32_t v19 = g26; // 0xc85dc
							v9 = v19 + 16;
							g26 = v9;
							int32_t v20 = g25; // 0xc85e0
							v10 = v20 + 1;
							g25 = v10;
							int32_t v21 = g36;             // 0xc85e4
							int32_t v22 = *(int32_t *)v21; // 0xc85e4
							if (v10 < v22) {
								goto lab_0xc85dc_8;
							}
							// 0xc85f0
							g10 = v1;
							int32_t result = g34; // 0xc8600
							return result;
						}
						// 0xc8434
						if (v12 == 1032) {
							// 0xc85b0
							*(int32_t *)g29 = (int32_t) * (char *)g31;
							g34 = StartNewLvl(g34, *(int32_t *)(g26 + 8), 0);
							// branch -> 0xc85dc
						} else {
							// 0xc843c
							if (v12 <= 1032) {
								// 0xc8440
								if (v12 > 1030) {
									int32_t *v23 = (int32_t *)(v5 + 12);
									if (*(char *)g35 != 1) {
										int32_t v24 = *v23; // 0xc84b8
										int32_t v25 = 0;
										if (v24 == 5) {
											// 0xc84c8
											if (*(char *)(v8 + 436) <= 7) {
												// 0xc84d8
												g24 = v7;
												g22 = v11 + 1;
												g21 = 40;
												v25 = 1;
												// branch -> 0xc84e8
											} else {
												v25 = 0;
											}
										}
										int32_t v26 = v25;
										if (v24 == 9) {
											// 0xc84f0
											if (*(char *)(v8 + 436) <= 12) {
												// 0xc8500
												g22 = v11;
												g24 = v7 + 1;
												g21 = 41;
												v26 = 1;
												// branch -> 0xc8510
											} else {
												v26 = v25;
											}
										}
										// 0xc8510
										char v27; // 0xc8544
										if (v24 == 13) {
											// 0xc8518
											if (*(char *)(v8 + 436) <= 16) {
												// 0xc8538
												g24 = v7;
												g22 = v11 + 1;
												g21 = 42;
												// branch -> 0xc8540
												// 0xc8540
												v27 = *(char *)(v8 + 348);
												if (v27 == 0) {
													// 0xc8550
													g34 = 762;
													PlaySFX(762);
													// branch -> 0xc8584
													// 0xc8584
													InitDiabloMsg((char)g21);
													g34 = function_8b234(1, 1, g24 % 256, g22 % 256);
													// branch -> 0xc85f0
													// 0xc85f0
													g10 = v1;
													return g34;
												}
												// 0xc855c
												if (v27 == 1) {
													// 0xc8568
													g34 = 653;
													PlaySFX(653);
													// branch -> 0xc8584
													// 0xc8584
													InitDiabloMsg((char)g21);
													g34 = function_8b234(1, 1, g24 % 256, g22 % 256);
													// branch -> 0xc85f0
													// 0xc85f0
													g10 = v1;
													return g34;
												}
												// 0xc8574
												if (v27 == 2) {
													// 0xc857c
													g34 = 550;
													PlaySFX(550);
													// branch -> 0xc8584
													// 0xc8584
													InitDiabloMsg((char)g21);
													g34 = function_8b234(1, 1, g24 % 256, g22 % 256);
													// branch -> 0xc85f0
													// 0xc85f0
													g10 = v1;
													return g34;
												}
												// 0xc8584
												InitDiabloMsg((char)g21);
												g34 = function_8b234(1, 1, g24 % 256, g22 % 256);
												// branch -> 0xc85f0
												// 0xc85f0
												g10 = v1;
												return g34;
											}
										}
										// 0xc8538
										if (v26 != 0) {
											// 0xc8540
											v27 = *(char *)(v8 + 348);
											if (v27 == 0) {
												// 0xc8550
												g34 = 762;
												PlaySFX(762);
												// branch -> 0xc8584
												// 0xc8584
												InitDiabloMsg((char)g21);
												g34 = function_8b234(1, 1, g24 % 256, g22 % 256);
												// branch -> 0xc85f0
												// 0xc85f0
												g10 = v1;
												return g34;
											}
											// 0xc855c
											if (v27 == 1) {
												// 0xc8568
												g34 = 653;
												PlaySFX(653);
												// branch -> 0xc8584
												// 0xc8584
												InitDiabloMsg((char)g21);
												g34 = function_8b234(1, 1, g24 % 256, g22 % 256);
												// branch -> 0xc85f0
												// 0xc85f0
												g10 = v1;
												return g34;
											}
											// 0xc8574
											if (v27 == 2) {
												// 0xc857c
												g34 = 550;
												PlaySFX(550);
												// branch -> 0xc8584
												// 0xc8584
												InitDiabloMsg((char)g21);
												g34 = function_8b234(1, 1, g24 % 256, g22 % 256);
												// branch -> 0xc85f0
												// 0xc85f0
												g10 = v1;
												return g34;
											}
											// 0xc8584
											InitDiabloMsg((char)g21);
											g34 = function_8b234(1, 1, g24 % 256, g22 % 256);
											// branch -> 0xc85f0
											// 0xc85f0
											g10 = v1;
											return g34;
										}
									}
									int32_t v28 = *v23; // 0xc85a4
									g34 = StartNewLvl(v28, v12, v28);
									// branch -> 0xc85dc
								lab_0xc85dc:
									// 0xc85dc
									v9 = g26 + 16;
									g26 = v9;
									v10 = g25 + 1;
									g25 = v10;
									if (v10 >= *(int32_t *)g36) {
										// 0xc85f0
										g10 = v1;
										return g34;
									}
								lab_0xc85dc_8:
									// 0xc85dc
									v3 = g33;
									v5 = v9;
									v2 = g32;
									// branch -> 0xc83e8
									continue;
								}
							}
						lab_0xc85d4:
							// 0xc85d4
							g34 = app_fatal(g27);
							// branch -> 0xc85dc
							goto lab_0xc85dc;
						}
					lab_0xc85dc_4:
						// 0xc85dc
						v9 = g26 + 16;
						g26 = v9;
						v10 = g25 + 1;
						g25 = v10;
						if (v10 < *(int32_t *)g36) {
							goto lab_0xc85dc_8;
						}
						// 0xc85f0
						g10 = v1;
						return g34;
					}
				}
				// 0xc85dc
				v9 = g26 + 16;
				g26 = v9;
				v10 = g25 + 1;
				g25 = v10;
				if (v10 < *(int32_t *)g36) {
					goto lab_0xc85dc_8;
				}
				// 0xc85f0
				g10 = v1;
				return g34;
			}
		}
	}
	// 0xc85f0
	g10 = v1;
	return g34;
}
