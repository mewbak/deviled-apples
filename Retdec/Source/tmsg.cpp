
// Address range: 0xc0eac - 0xc0f40
int32_t tmsg_get(int32_t a1, int32_t a2)
{
	// 0xc0eac
	g34 = a1;
	int32_t v1 = g36; // 0xc0eac
	int32_t v2 = g10; // 0xc0eb0
	int32_t v3 = g35; // 0xc0eb4
	if (*(int32_t *)(g23 - 0x4ab0) == 0) {
		// 0xc0ed0
		// branch -> 0xc0f28
		// 0xc0f28
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return 0;
	}
	int32_t v4 = GetTickCount(); // 0xc0ed8
	int32_t v5;
	int32_t *v6 = (int32_t *)(v5 - 0x4ab0); // 0xc0ee0
	int32_t v7 = *v6;                       // 0xc0ee0
	int32_t result;                         // 0xc0f3c
	if (*(int32_t *)(v7 + 4) - v4 < 0) {
		// 0xc0ef8
		g36 = v7;
		*v6 = *(int32_t *)v7;
		g35 = (int32_t) * (char *)(g36 + 8);
		memcpy();
		g34 = g36;
		mem_free_dbg();
		result = g35;
		// branch -> 0xc0f28
	} else {
		// 0xc0ef0
		result = 0;
		// branch -> 0xc0f28
	}
	// 0xc0f28
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result;
}

// Address range: 0xc0f40 - 0xc0fe0
int32_t tmsg_add(void)
{
	int32_t v1 = g37;      // 0xc0f4c
	int32_t v2 = v1 % 256; // 0xc0f4c
	g35 = v2;
	g33 = v1;
	g32 = g34;
	g34 = v2 + 12;
	int32_t v3 = DiabloAllocPtr(); // 0xc0f6c
	g34 = v3;
	*(int32_t *)v3 = 0;
	int32_t v4 = GetTickCount(); // 0xc0f7c
	g34 = v3 + 9;
	*(int32_t *)(v3 + 4) = v4 + 500;
	*(char *)(v3 + 8) = (char)g33;
	memcpy();
	int32_t v5;
	int32_t result = v5 - 0x4ab0;         // 0xc0fa4
	int32_t result2 = *(int32_t *)result; // 0xc0fb02
	if (result2 == 0) {
		// 0xc0fbc
		*(int32_t *)result = v3;
		return result;
	}
	int32_t v6 = *(int32_t *)result2; // 0xc0fb0
	while (v6 != 0) {
		// 0xc0fac
		result2 = v6;
		v6 = *(int32_t *)result2;
		// continue -> 0xc0fac
	}
	// 0xc0fb0
	// branch -> 0xc0fbc
	// 0xc0fbc
	*(int32_t *)result2 = v3;
	return result2;
}

// Address range: 0xc0fe4 - 0xc1038
int32_t tmsg_cleanup(int32_t a1)
{
	int32_t v1 = g10; // 0xc0fe8
	g36 = 0;
	if (*(int32_t *)(g23 - 0x4ab0) == 0) {
		// 0xc1020
		g10 = v1;
		return g34;
	}
	int32_t *v2 = (int32_t *)(g23 - 0x4ab0); // 0xc1000
	int32_t v3 = *v2;                        // 0xc1000
	g34 = v3;
	g35 = *(int32_t *)v3;
	*v2 = 0;
	g34 = mem_free_dbg();
	*(int32_t *)(g23 - 0x4ab0) = g35;
	// 0xc1020
	g10 = v1;
	while (*(int32_t *)(g23 - 0x4ab0) != 0) {
		// 0xc1000
		// 0xc1000
		v2 = (int32_t *)(g23 - 0x4ab0);
		v3 = *v2;
		g34 = v3;
		g35 = *(int32_t *)v3;
		*v2 = g36;
		g34 = mem_free_dbg();
		*(int32_t *)(g23 - 0x4ab0) = g35;
		// 0xc1020
		g10 = v1;
		// branch -> 0xc1000
	}
	return g34;
}
