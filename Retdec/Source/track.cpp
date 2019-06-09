
// Address range: 0xc6594 - 0xc6690
int32_t function_c6594(int32_t a1)
{
	int32_t v1 = g36;                        // 0xc6594
	int32_t v2 = g10;                        // 0xc6598
	int32_t v3 = g35;                        // 0xc65a0
	int32_t v4 = *(int32_t *)(g23 - 0x765c); // 0xc65a4
	g35 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x7658); // 0xc65ac
	g36 = v5;
	if (*(int32_t *)(g23 - 0x4a78) == 0) {
		// 0xc6678
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return g34;
	}
	int32_t v6 = *(int32_t *)v5; // 0xc65c0
	if (v6 < 0 || v6 > 110) {
		// 0xc6678
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return g34;
	}
	int32_t v7 = *(int32_t *)v4; // 0xc65d4
	if (v7 < 0 || v7 > 110) {
		// 0xc6678
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return g34;
	}
	int32_t v8 = *(int32_t *)(g23 - 0x77ac);                           // 0xc65e8
	int32_t v9 = 0x55ec * *(int32_t *)v8 + *(int32_t *)(g23 - 0x77a8); // 0xc65f4
	g34 = v9;
	int32_t v10;
	int32_t v11;  // 0xc662c
	int32_t *v12; // 0xc6634
	char *v13;    // 0xc6664
	if (*(int32_t *)(v9 + 492) <= 6) {
		// 0xc6604
		if (*(int32_t *)v9 != 0) {
			// 0xc6678
			g36 = v1;
			g10 = v2;
			g35 = v3;
			return g34;
		}
		// 0xc6610
		g34 = v9;
		if (v6 == *(int32_t *)(v9 + 72)) {
			// 0xc6620
			if (v7 != *(int32_t *)(v9 + 76)) {
				// 0xc662c
				v11 = GetTickCount();
				g34 = v11;
				v12 = (int32_t *)(v10 - 0x4a80);
				if (v11 - *v12 >= 300) {
					// 0xc6644
					*v12 = v11;
					g34 = NetSendCmdLoc(1, 1, *(int32_t *)g36 % 256, *(int32_t *)g35 % 256);
					v13 = (char *)(g23 - 0x4a7c);
					if (*v13 == 0) {
						// 0xc6670
						*v13 = 1;
						// branch -> 0xc6678
					}
				}
			}
		} else {
			// 0xc662c
			v11 = GetTickCount();
			g34 = v11;
			v12 = (int32_t *)(v10 - 0x4a80);
			if (v11 - *v12 >= 300) {
				// 0xc6644
				*v12 = v11;
				g34 = NetSendCmdLoc(1, 1, *(int32_t *)g36 % 256, *(int32_t *)g35 % 256);
				v13 = (char *)(g23 - 0x4a7c);
				if (*v13 == 0) {
					// 0xc6670
					*v13 = 1;
					// branch -> 0xc6678
				}
			}
		}
		// 0xc6678
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return g34;
	}
	// 0xc6610
	g34 = v9;
	if (v6 != *(int32_t *)(v9 + 72)) {
		// 0xc662c
		v11 = GetTickCount();
		g34 = v11;
		v12 = (int32_t *)(v10 - 0x4a80);
		if (v11 - *v12 >= 300) {
			// 0xc6644
			*v12 = v11;
			g34 = NetSendCmdLoc(1, 1, *(int32_t *)g36 % 256, *(int32_t *)g35 % 256);
			v13 = (char *)(g23 - 0x4a7c);
			if (*v13 == 0) {
				// 0xc6670
				*v13 = 1;
				// branch -> 0xc6678
			}
		}
		// 0xc6678
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return g34;
	}
	// 0xc6620
	if (v7 == *(int32_t *)(v9 + 76)) {
		// 0xc6678
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return g34;
	}
	// 0xc662c
	v11 = GetTickCount();
	g34 = v11;
	v12 = (int32_t *)(v10 - 0x4a80);
	if (v11 - *v12 >= 300) {
		// 0xc6644
		*v12 = v11;
		g34 = NetSendCmdLoc(1, 1, *(int32_t *)g36 % 256, *(int32_t *)g35 % 256);
		v13 = (char *)(g23 - 0x4a7c);
		if (*v13 == 0) {
			// 0xc6670
			*v13 = 1;
			// branch -> 0xc6678
		}
	}
	// 0xc6678
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return g34;
}

// Address range: 0xc6690 - 0xc6730
int32_t track_repeat_walk(int32_t a1)
{
	// 0xc6690
	g34 = a1;
	int32_t v1 = g10;                        // 0xc6690
	int32_t *v2 = (int32_t *)(g23 - 0x4a78); // 0xc669c
	int32_t v3 = g34;                        // 0xc66a0
	if (*v2 == v3) {
		// 0xc6720
		g10 = v1;
		return g34;
	}
	// 0xc66a8
	*v2 = v3;
	if (*(int32_t *)(g23 - 0x4a78) == 0) {
		char *v4 = (char *)(g23 - 0x4a7c); // 0xc670c
		if (*v4 != 0) {
			// 0xc6718
			*v4 = 0;
			// branch -> 0xc6720
		}
		// 0xc6720
		g10 = v1;
		return g34;
	}
	// 0xc66b8
	*(char *)(g23 - 0x4a7c) = 0;
	int32_t v5;
	*(int32_t *)(v5 - 0x4a80) = GetTickCount();
	int32_t *v6 = (int32_t *)(g23 - 0x4a80); // 0xc66d8
	*v6 = *v6 + 250;
	int32_t *v7 = (int32_t *)(g23 - 0x4a80); // 0xc66e8
	*v7 = *v7 - 300;
	uint32_t v8 = *(int32_t *)*(int32_t *)(g23 - 0x7658); // 0xc66f4
	g34 = NetSendCmdLoc(1, 1, v8 % 256, *(int32_t *)*(int32_t *)(g23 - 0x765c) % 256);
	// branch -> 0xc6720
	// 0xc6720
	g10 = v1;
	return g34;
}

// Address range: 0xc6730 - 0xc6738
int32_t function_c6730(void)
{
	// 0xc6730
	return (int32_t) * (char *)(g23 - 0x4a7c);
}
