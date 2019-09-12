// Address range: 0x37f48 - 0x37f80
int32_t doom_get_frame_from_time(int32_t a1)
{
	int32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x755c); // 0x37f4c
	if (v1 == 0x8ca1) {
		// 0x37f5c
		return 31;
	}
	uint64_t v2 = 0x1b4e81b5 * (int64_t)v1;         // 0x37f6c
	int32_t v3 = (int32_t)(v2 / 0x100000000) >> 31; // 0x37f70
	return (v3 & -0x2000000 | (int32_t)(v2 / 0x8000000000)) + (int32_t)(v3 < 0);
}

// Address range: 0x37f80 - 0x37fb8
int32_t doom_alloc_cel(int32_t a1)
{
	int32_t result = function_c95c8(0, 0x38000, 0x444f4f4d); // 0x37fa0
	*(int32_t *)(g23 - 0x4f40) = result;
	return result;
}

// Address range: 0x37fb8 - 0x37fdc
int32_t doom_cleanup(int32_t a1)
{
	// 0x37fb8
	return MemFreeDbg((int32_t *)(g23 - 0x4f40));
}

// Address range: 0x37fdc - 0x38058
int32_t doom_load_graphics(void)
{
	int32_t v1 = g10;                        // 0x37fe0
	int32_t v2 = *(int32_t *)(g23 - 0x76b4); // 0x37fe4
	g36 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x4f44); // 0x37ff0
	g38 = v3;
	int32_t result; // 0x38040
	if (v3 == 31) {
		// 0x37ffc
		g34 = v2;
		g37 = *(int32_t *)(g23 - 0x63d4);
		strcpy();
		// branch -> 0x38030
		// 0x38030
		function_4fba8(g36, *(int32_t *)(g23 - 0x4f40));
		result = function_c9930(*(int32_t *)(g23 - 0x4f40));
		g10 = v1;
		return result;
	}
	// 0x3800c
	if (v3 > 9) {
		// 0x38024
		g37 = *(int32_t *)(g23 - 0x63dc);
		sprintf();
		// branch -> 0x38030
	} else {
		// 0x38014
		g37 = *(int32_t *)(g23 - 0x63d8);
		sprintf();
		// branch -> 0x38030
	}
	// 0x38030
	function_4fba8(g36, *(int32_t *)(g23 - 0x4f40));
	result = function_c9930(*(int32_t *)(g23 - 0x4f40));
	g10 = v1;
	return result;
}

// Address range: 0x38058 - 0x380a8
int32_t doom_init(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7678); // 0x3805c
	*(int32_t *)v1 = 1;
	int32_t v2 = doom_alloc_cel(v1); // 0x38070
	if (doom_get_frame_from_time(v2) == 31) {
		// 0x38080
		*(int32_t *)(g23 - 0x4f44) = 31;
		// branch -> 0x38094
	} else {
		// 0x3808c
		*(int32_t *)(g23 - 0x4f44) = 0;
		// branch -> 0x38094
	}
	// 0x38094
	return doom_load_graphics();
}

// Address range: 0x380a8 - 0x380e0
int32_t doom_close(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7678); // 0x380ac
	int32_t *v2 = (int32_t *)v1;             // 0x380b8
	int32_t result;                          // 0x380dc
	if (*v2 != 0) {
		// 0x380c4
		*v2 = 0;
		result = doom_cleanup(v1);
		// branch -> 0x380d0
	} else {
		result = v1;
	}
	// 0x380d0
	return result;
}

// Address range: 0x380e0 - 0x38178
int32_t doom_draw(int32_t a1)
{
	int32_t v1 = g10;                            // 0x380e4
	int32_t result = *(int32_t *)(g23 - 0x7678); // 0x380e8
	if (*(int32_t *)result == 0) {
		// 0x38164
		g10 = v1;
		return result;
	}
	int32_t v2 = *(int32_t *)(g23 - 0x4f44); // 0x38100
	int32_t result2;                         // 0x38160
	if (v2 == 31) {
		// 0x3814c
		result2 = CelDecodeOnly(64, 511, *(int32_t *)(g23 - 0x4f40), 1, 640);
		// branch -> 0x38164
		// 0x38164
		g10 = v1;
		return result2;
	}
	int32_t *v3 = (int32_t *)(g23 - 0x4f48); // 0x3810c
	int32_t v4 = *v3;                        // 0x3810c
	*v3 = v4 + 1;
	if (*(int32_t *)(g23 - 0x4f48) >= 5) {
		// 0x38124
		g36 = 0;
		*(int32_t *)(g23 - 0x4f44) = v2 + 1;
		*(int32_t *)(g23 - 0x4f48) = g36;
		int32_t v5 = doom_get_frame_from_time(v4); // 0x38134
		int32_t *v6 = (int32_t *)(g23 - 0x4f44);   // 0x38138
		if (*v6 > v5) {
			// 0x38144
			*v6 = g36;
			// branch -> 0x38148
		}
		// 0x38148
		doom_load_graphics();
		// branch -> 0x3814c
	}
	// 0x3814c
	result2 = CelDecodeOnly(64, 511, *(int32_t *)(g23 - 0x4f40), 1, 640);
	// branch -> 0x38164
	// 0x38164
	g10 = v1;
	return result2;
}
