
// Address range: 0xabc28 - 0xabc8c
int32_t InitPortals(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7148); // r30
	int32_t v2 = 0;                          // r29
	int32_t v3 = 0;                          // 0xabc4c
	// branch -> 0xabc4c
	int32_t result; // r3
	while (true) {
		int32_t v4 = function_8a9bc(v3); // 0xabc50
		result = v4;
		if (v4 != 0) {
			// 0xabc5c
			*(int32_t *)v1 = 0;
			// branch -> 0xabc60
		}
		int32_t v5 = v2 + 1; // 0xabc60
		v2 = v5;
		v1 += 24;
		if (v5 >= 4) {
			// break -> 0xabc70
			break;
		}
		v3 = v5;
		// continue -> 0xabc4c
	}
	// 0xabc70
	return result;
}

// Address range: 0xabc8c - 0xabcb8
int32_t function_abc8c(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = 24 * a1;                    // 0xabc8c
	int32_t v2 = *(int32_t *)(g23 - 0x7148); // 0xabc90
	*(int32_t *)(v2 + v1) = a2;
	int32_t result = v1 + v2; // 0xabc98
	*(int32_t *)(result + 4) = a3;
	*(int32_t *)(result + 8) = a4;
	*(int32_t *)(result + 12) = a5;
	*(int32_t *)(result + 16) = a6;
	*(int32_t *)(result + 20) = 0;
	return result;
}

// Address range: 0xabcb8 - 0xabd90
int32_t function_abcb8(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g36; // 0xabcb8
	g13 = a1;
	int32_t v2 = g10; // 0xabcc4
	int32_t v3 = g35; // 0xabcc8
	g36 = *(int32_t *)(g23 - 0x7664);
	int32_t v4;
	int32_t v5 = &v4; // bp-80
	*(int32_t *)(*(int32_t *)(g23 - 0x70e8) + 300) = -1;
	*(char *)(*(int32_t *)*(int32_t *)(g23 - 0x7594) + 112 * a2 + a3) = 0;
	int32_t *v6;
	int32_t v7 = AddMissile(0, 0, a2, a3, 0, 10, 0, v5, (int32_t)&v6); // 0xabd24
	if (v7 == -1) {
		// 0xabd74
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return -1;
	}
	// 0xabd34
	SetMissDir(v7, 1);
	int32_t v8 = *(int32_t *)(g23 - 0x77e4); // 0xabd40
	int32_t result = v8;                     // r3
	if (*(char *)v8 != 0) {
		int32_t v9 = g36 + 180 * v7;                                            // 0xabd54
		int32_t v10 = AddLight(*(int32_t *)(v9 + 4), *(int32_t *)(v9 + 8), 15); // 0xabd64
		result = v10;
		*(int32_t *)(v9 + 140) = v10;
		// branch -> 0xabd6c
	}
	// 0xabd6c
	*(int32_t *)g35 = 129;
	// branch -> 0xabd74
	// 0xabd74
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result;
}

// Address range: 0xabd90 - 0xabe6c
int32_t function_abd90(void)
{
	// 0xabd90
	g29 = 0;
	int32_t v1 = *(int32_t *)(g23 - 0x6f78); // 0xabd9c
	g33 = *(int32_t *)(g23 - 0x77e0);
	g31 = v1;
	g35 = *(int32_t *)(g23 - 0x77d8);
	g36 = *(int32_t *)(g23 - 0x77e4);
	int32_t v2 = *(int32_t *)(g23 - 0x7148); // 0xabdb4
	g32 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x6f7c); // 0xabdbc
	g30 = v3;
	int32_t v4 = 0; // 0xabde4
	// branch -> 0xabdc8
	int32_t result; // 0xabe68
	while (true) {
		// 0xabdc8
		result = v1;
		int32_t v5; // 0xabe40
		int32_t v6; // 0xabe44
		int32_t v7; // 0xabe4c
		int32_t v8; // 0xabe50
		if (*(int32_t *)v2 != 0) {
			unsigned char v9 = *(char *)g36; // 0xabdd4
			int32_t v10 = v9;                // 0xabdd4
			if (v9 == 0) {
				// 0xabde0
				result = function_abcb8(v4, *(int32_t *)v3, *(int32_t *)v1);
				// branch -> 0xabe40
			} else {
				// 0xabdf4
				if (*(char *)g35 == 0) {
					// 0xabe00
					if (v10 == *(int32_t *)(v2 + 12)) {
						// 0xabe0c
						result = function_abcb8(v4, *(int32_t *)(v2 + 4), *(int32_t *)(v2 + 8));
						// branch -> 0xabe40
					} else {
						result = v10;
					}
				} else {
					int32_t v11 = (int32_t) * (char *)g33; // 0xabe20
					if (v11 == *(int32_t *)(v2 + 12)) {
						// 0xabe30
						result = function_abcb8(v4, *(int32_t *)(v2 + 4), *(int32_t *)(v2 + 8));
						// branch -> 0xabe40
					} else {
						result = v11;
					}
				}
				// 0xabe40
				v5 = g29 + 1;
				g29 = v5;
				v6 = g31 + 4;
				g31 = v6;
				v7 = g30 + 4;
				g30 = v7;
				v8 = g32 + 24;
				g32 = v8;
				if (v5 >= 4) {
					// break -> 0xabe58
					break;
				}
				v1 = v6;
				v3 = v7;
				v4 = v5;
				v2 = v8;
				// continue -> 0xabdc8
				continue;
			}
			// 0xabe40
			v5 = g29 + 1;
			g29 = v5;
			v6 = g31 + 4;
			g31 = v6;
			v7 = g30 + 4;
			g30 = v7;
			v8 = g32 + 24;
			g32 = v8;
			if (v5 >= 4) {
				// break -> 0xabe58
				break;
			}
			v1 = v6;
			v3 = v7;
			v4 = v5;
			v2 = v8;
			// continue -> 0xabdc8
			continue;
		}
		// 0xabe40
		v5 = g29 + 1;
		g29 = v5;
		v6 = g31 + 4;
		g31 = v6;
		v7 = g30 + 4;
		g30 = v7;
		v8 = g32 + 24;
		g32 = v8;
		if (v5 >= 4) {
			// break -> 0xabe58
			break;
		}
		v1 = v6;
		v3 = v7;
		v4 = v5;
		v2 = v8;
		// continue -> 0xabdc8
	}
	// 0xabe58
	return result;
}

// Address range: 0xabe6c - 0xabea0
int32_t function_abe6c(int32_t a1, int32_t a2)
{
	int32_t v1 = 4 * a1;                                        // 0xabe78
	int32_t v2 = *(int32_t *)(*(int32_t *)(g23 - 0x6f78) + v1); // 0xabe88
	return function_abcb8(*(int32_t *)(v1 + *(int32_t *)(g23 - 0x6f7c)), v2, v2);
}

// Address range: 0xabea0 - 0xabed4
int32_t function_abea0(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	int32_t v1 = 24 * a1;                    // 0xabea0
	int32_t v2 = *(int32_t *)(g23 - 0x7148); // 0xabea4
	int32_t result = v2;                     // r3
	*(int32_t *)(v2 + v1) = 1;
	if (a4 == 0) {
		// bb
		return result;
	}
	int32_t v3 = v1 + result; // 0xabeb8
	result = v3;
	*(int32_t *)(v3 + 4) = a2;
	*(int32_t *)(result + 8) = a3;
	*(int32_t *)(result + 12) = a4;
	*(int32_t *)(result + 16) = a5;
	*(int32_t *)(result + 20) = a6;
	return result;
}

// Address range: 0xabed4 - 0xabee8
int32_t DeactivatePortal(int32_t a1)
{
	int32_t result = *(int32_t *)(g23 - 0x7148); // 0xabed8
	*(int32_t *)(result + 24 * a1) = 0;
	return result;
}

// Address range: 0xabee8 - 0xabf28
int32_t PortalOnLevel(int32_t a1, int32_t a2, int32_t a3)
{
	unsigned char v1 = *(char *)*(int32_t *)(g23 - 0x77e4);               // 0xabef8
	int32_t v2 = *(int32_t *)(*(int32_t *)(g23 - 0x7148) + 24 * a1 + 12); // 0xabefc
	if ((int32_t)v1 == v2 || v1 == 0) {
		// 0xabf08
		return 1;
	}
	// 0xabf20
	return 0;
}

// Address range: 0xabf28 - 0xac010
int32_t RemovePortalMissile(int32_t a1)
{
	// 0xabf28
	g27 = a1;
	int32_t result = *(int32_t *)(g23 - 0x7148); // 0xabf34
	int32_t v1 = *(int32_t *)(g23 - 0x7668);     // 0xabf38
	g33 = *(int32_t *)(g23 - 0x779c);
	g29 = 0;
	int32_t v2 = *(int32_t *)(g23 - 0x7664); // 0xabf44
	g35 = v2;
	g36 = *(int32_t *)(g23 - 0x7594);
	int32_t v3 = *(int32_t *)(g23 - 0x7660); // 0xabf4c
	g31 = v3;
	g30 = result + 24 * a1;
	if (*(int32_t *)v1 > 0) {
		int32_t v4 = 0; // 0xabfec11
		while (true) {
			int32_t v5 = *(int32_t *)v3; // 0xabf64
			int32_t v6 = 180 * v5;       // 0xabf68
			int32_t v7 = v6 + v2;        // 0xabf6c
			g28 = v5;
			int32_t v8 = v6;  // 0xac00c16
			int32_t v9 = v1;  // 0xabff0
			int32_t v10 = v4; // 0xabfec
			int32_t v11 = v3; // 0xabfe8
			if (*(int32_t *)v7 == 10) {
				int32_t v12 = v7; // r6
				if (g27 == *(int32_t *)(v7 + 120)) {
					int32_t v13 = *(int32_t *)g33;                                          // 0xabf9c
					int32_t v14 = *(int32_t *)(v7 + 8) + 112 * *(int32_t *)(v7 + 4);        // 0xabfa0
					int32_t v15 = __asm_rlwinm((int32_t) * (char *)(v13 + v14), 0, 24, 30); // 0xabfa8
					*(char *)(v14 + v13) = (char)v15;
					int32_t v16 = v12;                         // 0xabfb0
					int32_t v17 = *(int32_t *)(v16 + 8);       // 0xabfb4
					int32_t v18 = 112 * *(int32_t *)(v16 + 4); // 0xabfb8
					*(char *)(*(int32_t *)g36 + v17 + v18) = (char)0;
					if (*(int32_t *)(g30 + 12) != 0) {
						// 0xabfd4
						AddUnLight(*(int32_t *)(v12 + 140));
						// branch -> 0xabfdc
					}
					// 0xabfdc
					g37 = g29;
					v8 = DeleteMissile(g28);
					v9 = g32;
					v10 = g29;
					v11 = g31;
					// branch -> 0xabfe8
				} else {
					v8 = v6;
					v9 = v1;
					v10 = v4;
					v11 = v3;
				}
			}
			int32_t v19 = v11 + 4; // 0xabfe8
			g31 = v19;
			int32_t v20 = v10 + 1; // 0xabfec
			g29 = v20;
			if (v20 < *(int32_t *)v9) {
				// 0xabfe8
				v1 = v9;
				v4 = v20;
				v2 = g35;
				v3 = v19;
				// branch -> 0xabf64
				continue;
			} else {
				result = v8;
			}
		}
	}
	// 0xabffc
	return result;
}

// Address range: 0xac010 - 0xac01c
int32_t function_ac010(int32_t result)
{
	// 0xac010
	*(int32_t *)*(int32_t *)(g23 - 0x6f80) = result;
	return result;
}

// Address range: 0xac01c - 0xac128
int32_t GetPortalLevel(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77e4); // 0xac024
	int32_t result = v1;                     // r3
	int32_t v2 = *(int32_t *)(g23 - 0x7794); // r9
	int32_t v3 = *(int32_t *)(g23 - 0x77ac); // r8
	int32_t v4 = *(int32_t *)(g23 - 0x77a8); // r7
	int32_t v5 = *(int32_t *)(g23 - 0x6f80); // 0xac044
	g36 = v5;
	int32_t v6 = *(int32_t *)(g23 - 0x77e0); // r4
	int32_t v7 = *(int32_t *)(g23 - 0x77d8); // 0xac04c
	if (*(char *)v1 == 0) {
		int32_t v8 = *(int32_t *)v5;                       // 0xac07c
		int32_t v9 = 24 * v8 + *(int32_t *)(g23 - 0x7148); // 0xac084
		if (*(int32_t *)(v9 + 20) == 0) {
			// 0xac0c8
			*(char *)v7 = 0;
			*(char *)result = (char)*(int32_t *)(v9 + 12);
			int32_t v10 = (int32_t) * (char *)result;   // 0xac0dc
			int32_t v11 = v4 + 0x55ec * *(int32_t *)v3; // 0xac0e4
			result = v11;
			*(int32_t *)(v11 + 52) = v10;
			*(char *)v2 = (char)*(int32_t *)(v9 + 16);
			// branch -> 0xac0f4
		} else {
			// 0xac094
			*(char *)v7 = 1;
			int32_t v12 = *(int32_t *)(v9 + 12); // 0xac09c
			*(char *)v6 = (char)v12;
			*(char *)result = (char)v12;
			int32_t v13 = v4 + 0x55ec * *(int32_t *)v3; // 0xac0b4
			result = v13;
			*(int32_t *)(v13 + 52) = (int32_t) * (char *)v6;
			*(char *)v2 = (char)*(int32_t *)(v9 + 16);
			// branch -> 0xac0f4
		}
		// 0xac0f4
		if (v8 == *(int32_t *)v3) {
			// 0xac100
			NetSendCmd(1, 57);
			result = DeactivatePortal(*(int32_t *)g36);
			// branch -> 0xac114
		}
	} else {
		// 0xac058
		v6 = 0;
		*(char *)v7 = 0;
		*(char *)result = (char)v6;
		int32_t v14 = v4 + 0x55ec * *(int32_t *)v3; // 0xac06c
		result = v14;
		*(int32_t *)(v14 + 52) = v6;
		*(char *)v2 = (char)v6;
		// branch -> 0xac114
	}
	// 0xac114
	return result;
}

// Address range: 0xac128 - 0xac1bc
int32_t GetPortalLvlPos(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77b4);             // r6
	int32_t v2 = *(int32_t *)(g23 - 0x77b0);             // 0xac134
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x6f80); // 0xac148
	if (*(char *)*(int32_t *)(g23 - 0x77e4) == 0) {
		int32_t v4 = 4 * v3; // 0xac150
		*(int32_t *)v2 = *(int32_t *)(*(int32_t *)(g23 - 0x6f7c) + v4) + 1;
		int32_t result = *(int32_t *)(v4 + *(int32_t *)(g23 - 0x6f78)); // 0xac164
		*(int32_t *)v1 = result + 1;
		return result;
	}
	int32_t result2 = *(int32_t *)(g23 - 0x77ac);      // r3
	int32_t v5 = 24 * v3 + *(int32_t *)(g23 - 0x7148); // 0xac180
	*(int32_t *)v2 = *(int32_t *)(v5 + 4);
	*(int32_t *)v1 = *(int32_t *)(v5 + 8);
	if (v3 == *(int32_t *)result2) {
		// bb
		return result2;
	}
	int32_t *v6 = (int32_t *)v2; // 0xac1a0
	*v6 = *v6 + 1;
	int32_t *v7 = (int32_t *)v1; // 0xac1ac
	int32_t result3 = *v7;       // 0xac1ac
	*v7 = result3 + 1;
	return result3;
}

// Address range: 0xac1bc - 0xac320
int32_t PosOkPortal(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7148); // 0xac1bc
	int32_t v2 = a2 - 1;                     // 0xac1c0
	int32_t v3 = a3 - 1;                     // 0xac1c4
	if (*(int32_t *)v1 != 0) {
		// 0xac1d4
		if (*(int32_t *)(v1 + 12) == a1) {
			int32_t v4 = *(int32_t *)(v1 + 4); // 0xac1e0
			if (v4 == a2) {
				// 0xac1ec
				if (*(int32_t *)(v1 + 8) == a3) {
					// 0xac1f8
					return 1;
				}
			}
			// 0xac200
			if (v2 == v4) {
				// 0xac208
				if (v3 == *(int32_t *)(v1 + 8)) {
					// 0xac214
					return 1;
				}
			}
		}
	}
	// 0xac21c
	if (*(int32_t *)(v1 + 24) != 0) {
		// 0xac228
		if (*(int32_t *)(v1 + 36) == a1) {
			int32_t v5 = *(int32_t *)(v1 + 28); // 0xac234
			if (v5 == a2) {
				// 0xac240
				if (*(int32_t *)(v1 + 32) == a3) {
					// 0xac24c
					return 1;
				}
			}
			// 0xac254
			if (v2 == v5) {
				// 0xac25c
				if (v3 == *(int32_t *)(v1 + 32)) {
					// 0xac268
					return 1;
				}
			}
		}
	}
	// 0xac270
	if (*(int32_t *)(v1 + 48) != 0) {
		// 0xac27c
		if (*(int32_t *)(v1 + 60) == a1) {
			int32_t v6 = *(int32_t *)(v1 + 52); // 0xac288
			if (v6 == a2) {
				// 0xac294
				if (*(int32_t *)(v1 + 56) == a3) {
					// 0xac2a0
					return 1;
				}
			}
			// 0xac2a8
			if (v2 == v6) {
				// 0xac2b0
				if (v3 == *(int32_t *)(v1 + 56)) {
					// 0xac2bc
					return 1;
				}
			}
		}
	}
	// 0xac2c4
	if (*(int32_t *)(v1 + 72) == 0) {
		// 0xac318
		return 0;
	}
	// 0xac2d0
	if (*(int32_t *)(v1 + 84) == a1) {
		int32_t v7 = *(int32_t *)(v1 + 76); // 0xac2dc
		if (v7 == a2) {
			// 0xac2e8
			if (*(int32_t *)(v1 + 80) == a3) {
				// 0xac2f4
				return 1;
			}
		}
		// 0xac2fc
		if (v2 == v7) {
			// 0xac304
			if (v3 == *(int32_t *)(v1 + 80)) {
				// 0xac310
				return 1;
			}
		}
	}
	// 0xac318
	return 0;
}
