
// Address range: 0xcfe44 - 0xcfec0
int32_t msgcmd_cmd_cleanup(int32_t a1)
{
	int32_t v1 = g36; // 0xcfe44
	g36 = *(int32_t *)(g23 - 0x54cc);
	int32_t v2 = *(int32_t *)(g23 - 0x54d0); // 0xcfe54
	int32_t v3 = SDelete(v2);         // 0xcfe982
	if (v3 == 0) {
		// 0xcfea4
		g36 = v1;
		return 0;
	}
	NextLink((int32_t *)v3, -1);
	int32_t v4 = v3; // 0xcfe80
	g34 = v4;
	SMemFree(v4, function_cf324((int32_t *)g36), -2, 0);
	int32_t v5 = SDelete(v2); // 0xcfe98
	while (v5 != 0) {
		// 0xcfe68
		NextLink((int32_t *)v5, -1);
		v4 = v5;
		g34 = v4;
		SMemFree(v4, function_cf324((int32_t *)g36), -2, 0);
		v5 = SDelete(v2);
		// continue -> 0xcfe68
	}
	// 0xcfea4
	g36 = v1;
	return 0;
}

// Address range: 0xcfec0 - 0xcfed4
int32_t SDelete(int32_t a1)
{
	int32_t result = *(int32_t *)(a1 + 8); // 0xcfec0
	if (result > 0) {
		// bb
		return result;
	}
	// 0xcfecc
	return 0;
}

// Address range: 0xcfed4 - 0xcffb4
int32_t NextLink(int32_t *a1, int32_t a2)
{
	int32_t v1 = g10;             // 0xcfed8
	int32_t result = (int32_t)a1; // 0xcfedc
	if (result == 0) {
		// 0xcff9c
		g10 = v1;
		return result;
	}
	int32_t *v2 = (int32_t *)(result + 4); // 0xcfefc
	int32_t v3 = *v2;                      // 0xcfefc
	int32_t v4;
	if (v3 > 0) {
		// 0xcff10
		v4 = result - *v2 + v3;
		// branch -> 0xcff38
	} else {
		// 0xcff08
		v4 = -1 - v3;
		// branch -> 0xcff38
	}
	// 0xcff38
	*(int32_t *)v4 = result;
	int32_t v5 = 0; // r0
	*(int32_t *)(v4 + 4) = *(int32_t *)(result + 4);
	*(int32_t *)result = v5;
	*(int32_t *)(result + 4) = v5;
	int32_t v6; // 0xcff90
	int32_t v7; // 0xcff88
	if (result == 0) {
		// 0xcff88
		v7 = 0x10000 * a2;
		if (v7 >= 0 && (v7 || 0xffff) >= 0x1ffff) {
			// 0xcff90
			v6 = result;
			g34 = v6;
			function_eb470(v6);
			// branch -> 0xcff9c
		}
		// 0xcff9c
		g10 = v1;
		return result;
	}
	if (v4 != 0) {
		int32_t v8 = *(int32_t *)(result + 4); // 0xcff4c
		int32_t v9;
		if (v8 > 0) {
			// 0xcff60
			v9 = result - *(int32_t *)(v4 + 4) + v8;
			// branch -> 0xcff6c
		} else {
			// 0xcff58
			v9 = -1 - v8;
			// branch -> 0xcff6c
		}
		// 0xcff6c
		*(int32_t *)v9 = v4;
		v5 = 0;
		*(int32_t *)(v9 + 4) = *(int32_t *)(result + 4);
		*(int32_t *)result = v5;
		*(int32_t *)(result + 4) = v5;
		// branch -> 0xcff88
	}
	// 0xcff88
	v7 = 0x10000 * a2;
	if (v7 >= 0 && (v7 || 0xffff) >= 0x1ffff) {
		// 0xcff90
		v6 = result;
		g34 = v6;
		function_eb470(v6);
		// branch -> 0xcff9c
	}
	// 0xcff9c
	g10 = v1;
	return result;
}

// Address range: 0xcffb4 - 0xd007c
int32_t msgcmd_send_chat(int32_t a1)
{
	int32_t v1 = g10;                        // 0xcffb8
	int32_t v2 = *(int32_t *)(g23 - 0x54d0); // 0xcffbc
	g36 = v2;
	int32_t v3 = *(int32_t *)(v2 + 8); // 0xcffcc
	int32_t v4 = v3;                   // 0xcffe0
	if (v3 <= 0) {
		// 0xcffd8
		v4 = 0;
		// branch -> 0xcffdc
	}
	// 0xcffdc
	if (v4 == 0) {
		// 0xcffdc
		// branch -> 0xd0064
		// 0xd0064
		g10 = v1;
		return g34;
	}
	// 0xcffe8
	if (*(char *)(g23 - 0x4998) == 0) {
		// 0xcfff4
		g34 = 0;
		*(int32_t *)(g23 - 0x4994) = 0;
		*(char *)(g23 - 0x4998) = (char)1;
		// branch -> 0xd0004
	}
	int32_t v5 = GetTickCount(); // 0xd0004
	int32_t v6;
	int32_t *v7 = (int32_t *)(v6 - 0x4994); // 0xd000c
	int32_t result;                         // 0xd0078
	if (v5 - *v7 >= 2000) {
		// 0xd001c
		*v7 = v5;
		int32_t v8 = v4 + 8; // 0xd0020
		g34 = v8;
		SNetSendServerChatCommand(v8);
		sgChat_CmdRemove((int32_t *)g36, v4);
		NextLink((int32_t *)v4, -1);
		int32_t v9 = function_cf324((int32_t *)*(int32_t *)(g23 - 0x54cc)); // 0xd0048
		g34 = v4;
		result = SMemFree(v4, v9, -2, 0);
		// branch -> 0xd0064
	} else {
		result = v5;
	}
	// 0xd0064
	g10 = v1;
	return result;
}

// Address range: 0xd007c - 0xd00a8
int32_t sgChat_CmdRemove(int32_t *a1, int32_t a2)
{
	// 0xd007c
	int32_t v1; // 0xd0094
	if (a2 == 0) {
		// 0xd0090
		v1 = (int32_t)a1 + 4;
		// branch -> 0xd0094
	} else {
		// 0xd0084
		v1 = a2;
		// branch -> 0xd0094
	}
	int32_t result = *(int32_t *)(v1 + 4); // 0xd0094
	if (result > 0) {
		// bb
		return result;
	}
	// 0xd00a0
	return 0;
}
