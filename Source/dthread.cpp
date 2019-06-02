// Address range: 0x4bc48 - 0x4bd64
int32_t dthread_handler(void)
{
	// 0x4bc48
	g33 = *(int32_t *)(g23 - 0x72c0);
	g35 = *(int32_t *)(g23 - 0x62b0);
	g36 = *(int32_t *)(g23 - 0x62ac);
	if (*(char *)(g23 - 0x4ed4) == 0) {
		// 0x4bd4c
		return 0;
	}
	// 0x4bc68
	int32_t v1;
	int32_t *v2 = (int32_t *)(v1 - 0x4ed0); // 0x4bcac
	int32_t v3 = g23;                       // 0x4bc74
	// branch -> 0x4bc68
	while (true) {
		// 0x4bc68
		if (*(int32_t *)(v3 - 0x4ed0) == 0) {
			int32_t v4 = *(int32_t *)(v3 - 0x4edc); // 0x4bc74
			g34 = v4;
			int32_t v5 = function_eb3f8(v4, -1); // 0x4bc7c
			g34 = v5;
			if (v5 + (int32_t) "MoveWindow" == 0xffff) {
				// 0x4bc90
				g37 = TraceLastError();
				app_fatal(g36);
				// branch -> 0x4bca0
			}
		}
		int32_t v6 = g35; // 0x4bca0
		g34 = v6;
		EnterCriticalSection(v6);
		int32_t v7 = *v2; // 0x4bcac
		if (v7 == 0) {
			int32_t v8 = *(int32_t *)(v1 - 0x4edc); // 0x4bcc4
			g34 = v8;
			function_ec4c0(v8);
			// branch -> 0x4bcd0
		} else {
			// 0x4bcb8
			*v2 = *(int32_t *)v7;
			// branch -> 0x4bcd0
		}
		int32_t v9 = g35; // 0x4bcd0
		g34 = v9;
		LeaveCriticalSection(v9);
		int32_t v10 = v7; // 0x4bcdc
		int32_t v11 = v1; // 0x4bd40
		if (v10 != 0) {
			int32_t v12 = *(int32_t *)(v10 + 4); // 0x4bce4
			int32_t v13 = v10;                   // 0x4bd24
			if (v12 != 4) {
				int32_t v14 = *(int32_t *)(v10 + 12); // 0x4bcf8
				function_91100(v12, (int32_t) * (char *)(v10 + 8), v10 + 16, v14);
				v13 = g31;
				// branch -> 0x4bd00
			}
			uint32_t v15 = *(int32_t *)g33;               // 0x4bd04
			uint32_t v16 = 1000 * *(int32_t *)(v13 + 12); // 0x4bd08
			int32_t v17 = v15 > v16 ? v16 / v15 : 1;
			g34 = v13;
			mem_free_dbg();
			if (v17 == 0) {
				// 0x4bd00
				v11 = g23;
				// branch -> 0x4bd40
			} else {
				// 0x4bd34
				g34 = v17;
				Sleep(v17);
				v11 = v1;
				// branch -> 0x4bd40
			}
			// 0x4bd40
			if (*(char *)(v11 - 0x4ed4) == 0) {
				// break -> 0x4bd4c
				break;
			}
			v3 = v11;
			// continue -> 0x4bc68
			continue;
		}
		// 0x4bd40
		if (*(char *)(v11 - 0x4ed4) == 0) {
			// break -> 0x4bd4c
			break;
		}
		v3 = v11;
		// continue -> 0x4bc68
	}
	// 0x4bd4c
	return 0;
}

// Address range: 0x4bd64 - 0x4bdd8
int32_t dthread_remove_player(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x62b0); // 0x4bd6c
	g34 = v1;
	EnterCriticalSection(v1);
	int32_t v2;
	int32_t v3 = *(int32_t *)(v2 - 0x4ed0); // 0x4bd8c
	int32_t v4 = v3;                        // r4
	int32_t v5;                             // 0x4bdb4
	if (v3 == 0) {
		// 0x4bdb4
		v5 = v1;
		g34 = v5;
		return LeaveCriticalSection(v5);
	}
	while (true) {
		int32_t *v6 = (int32_t *)(v3 + 4); // 0x4bd98
		int32_t v7 = v3;                   // 0x4bda8
		if (*v6 == a1) {
			// 0x4bda4
			*v6 = 4;
			v7 = v4;
			// branch -> 0x4bda8
		}
		int32_t v8 = *(int32_t *)v7; // 0x4bda8
		v4 = v8;
		if (v8 == 0) {
			// break -> 0x4bdac
			break;
		}
		v3 = v8;
		// continue -> 0x4bd98
	}
	// 0x4bdac
	// branch -> 0x4bdb4
	// 0x4bdb4
	v5 = v1;
	g34 = v5;
	return LeaveCriticalSection(v5);
}

// Address range: 0x4bdd8 - 0x4be94
int32_t function_4bdd8(int32_t result, char a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10; // 0x4bddc
	g30 = result;
	g35 = *(int32_t *)(g23 - 0x62b0);
	g31 = a2;
	g32 = a3;
	g33 = a4;
	if (*(char *)*(int32_t *)(g23 - 0x77f0) == 1) {
		// 0x4be80
		g10 = v1;
		return result;
	}
	// 0x4be0c
	g34 = a4 + 20;
	int32_t v2 = DiabloAllocPtr(); // 0x4be10
	g36 = v2;
	g34 = v2 + 16;
	*(int32_t *)v2 = 0;
	*(int32_t *)(g36 + 4) = g30;
	*(char *)(g36 + 8) = (char)g31;
	*(int32_t *)(g36 + 12) = g33;
	function_eb590();
	g34 = g35;
	EnterCriticalSection(g35);
	int32_t v3;
	int32_t v4 = v3 - 0x4ed0;    // 0x4be4c
	int32_t v5 = *(int32_t *)v4; // 0x4be582
	if (v5 != 0) {
		int32_t v6 = *(int32_t *)v5; // 0x4be58
		while (v6 != 0) {
			// 0x4be54
			v5 = v6;
			v6 = *(int32_t *)v5;
			// continue -> 0x4be54
		}
		// 0x4be58
		v4 = v5;
		// branch -> 0x4be64
	}
	// 0x4be64
	*(int32_t *)v4 = g36;
	int32_t v7 = *(int32_t *)(g23 - 0x4edc); // 0x4be68
	g34 = v7;
	function_eb458(v7);
	g34 = g35;
	// branch -> 0x4be80
	// 0x4be80
	g10 = v1;
	return LeaveCriticalSection(g35);
}

// Address range: 0x4be94 - 0x4bf3c
int32_t function_4be94(int32_t a1)
{
	int32_t v1 = g10;                            // 0x4be94
	int32_t result = *(int32_t *)(g23 - 0x77f0); // 0x4be98
	if (*(char *)result == 1) {
		// 0x4bf2c
		g10 = v1;
		return result;
	}
	// 0x4beb0
	g34 = 0;
	int32_t v2 = function_ec4a8(0, 1, 0, 0); // 0x4bec0
	g34 = v2;
	int32_t v3;
	*(int32_t *)(v3 - 0x4edc) = v2;
	if (v2 == 0) {
		// 0x4bed4
		g37 = TraceLastError();
		app_fatal(*(int32_t *)(g23 - 0x62b4));
		// branch -> 0x4bee4
	}
	// 0x4bee4
	*(char *)(g23 - 0x4ed4) = 1;
	int32_t v4 = *(int32_t *)(g23 - 0x62b8); // 0x4bef4
	g34 = 0;
	int32_t v5 = function_ec478(0, 0, *(int32_t *)(g23 - 0x72c4), 0, 0, g23 - 0x4ee0, v4); // 0x4bf08
	g34 = v5;
	*(int32_t *)(v3 - 0x4ed8) = v5;
	int32_t result2; // 0x4bf38
	if (v5 == 0) {
		// 0x4bf1c
		g37 = TraceLastError();
		result2 = app_fatal(*(int32_t *)(g23 - 0x62bc));
		// branch -> 0x4bf2c
	} else {
		// 0x4bee4
		result2 = g34;
		// branch -> 0x4bf2c
	}
	// 0x4bf2c
	g10 = v1;
	return result2;
}

// Address range: 0x4bf3c - 0x4c01c
int32_t dthread_cleanup(int32_t a1)
{
	int32_t v1 = g36;                        // 0x4bf3c
	int32_t v2 = g10;                        // 0x4bf40
	int32_t v3 = g35;                        // 0x4bf44
	int32_t v4 = *(int32_t *)(g23 - 0x4edc); // 0x4bf50
	g34 = v4;
	if (v4 == 0) {
		// 0x4c004
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return 0;
	}
	// 0x4bf5c
	*(char *)(g23 - 0x4ed4) = 0;
	g34 = function_eb458(g34);
	int32_t v5;
	int32_t *v6 = (int32_t *)(v5 - 0x4ed8); // 0x4bf6c
	int32_t result2;                        // r3
	int32_t v7;                             // 0x4bff8
	int32_t v8;                             // 0x4bff81
	int32_t result;                         // 0x4bfd0
	int32_t *v9;                            // 0x4bfe4
	int32_t v10;                            // 0x4bfcc
	int32_t v11;                            // 0x4bfe4
	if (*v6 == 0) {
		// 0x4bfcc
		v10 = *(int32_t *)(v5 - 0x4edc);
		g34 = v10;
		result = CloseHandle(v10);
		g36 = 0;
		*(int32_t *)(v5 - 0x4edc) = 0;
		v8 = g23;
		if (*(int32_t *)(v8 - 0x4ed0) == 0) {
			// 0x4c004
			// branch -> 0x4c004
			// 0x4c004
			g36 = v1;
			g10 = v2;
			g35 = v3;
			return result;
		}
		v9 = (int32_t *)(v8 - 0x4ed0);
		v11 = *v9;
		g34 = v11;
		g35 = *(int32_t *)v11;
		*v9 = g36;
		result2 = mem_free_dbg();
		*(int32_t *)(g23 - 0x4ed0) = g35;
		v7 = g23;
		while (*(int32_t *)(v7 - 0x4ed0) != 0) {
			// 0x4bfe4
			v9 = (int32_t *)(v7 - 0x4ed0);
			v11 = *v9;
			g34 = v11;
			g35 = *(int32_t *)v11;
			*v9 = g36;
			result2 = mem_free_dbg();
			*(int32_t *)(g23 - 0x4ed0) = g35;
			v7 = g23;
			// continue -> 0x4bfe4
		}
		// 0x4c004
		// branch -> 0x4c004
		// 0x4c004
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result2;
	}
	// 0x4bf78
	int32_t v12; // 0x4bfcc
	if (*(int32_t *)(v5 - 0x4ee0) != GetCurrentThreadId()) {
		int32_t v13 = *v6; // 0x4bf8c
		g34 = v13;
		int32_t v14 = function_eb3f8(v13, -1); // 0x4bf94
		g34 = v14;
		int32_t v15 = v5; // 0x4bfb8
		if (v14 + (int32_t) "MoveWindow" == 0xffff) {
			// 0x4bfa8
			g37 = TraceLastError();
			app_fatal(*(int32_t *)(g23 - 0x62c0));
			v15 = g23;
			// branch -> 0x4bfb8
		}
		int32_t v16 = *(int32_t *)(v15 - 0x4ed8); // 0x4bfb8
		g34 = v16;
		CloseHandle(v16);
		*v6 = 0;
		v12 = g23;
		// branch -> 0x4bfcc
	} else {
		v12 = v5;
	}
	// 0x4bfcc
	v10 = *(int32_t *)(v12 - 0x4edc);
	g34 = v10;
	result = CloseHandle(v10);
	g36 = 0;
	*(int32_t *)(v5 - 0x4edc) = 0;
	v8 = g23;
	if (*(int32_t *)(v8 - 0x4ed0) == 0) {
		// 0x4c004
		// branch -> 0x4c004
		// 0x4c004
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result;
	}
	v9 = (int32_t *)(v8 - 0x4ed0);
	v11 = *v9;
	g34 = v11;
	g35 = *(int32_t *)v11;
	*v9 = g36;
	result2 = mem_free_dbg();
	*(int32_t *)(g23 - 0x4ed0) = g35;
	v7 = g23;
	while (*(int32_t *)(v7 - 0x4ed0) != 0) {
		// 0x4bfe4
		v9 = (int32_t *)(v7 - 0x4ed0);
		v11 = *v9;
		g34 = v11;
		g35 = *(int32_t *)v11;
		*v9 = g36;
		result2 = mem_free_dbg();
		*(int32_t *)(g23 - 0x4ed0) = g35;
		v7 = g23;
		// continue -> 0x4bfe4
	}
	// 0x4c004
	// branch -> 0x4c004
	// 0x4c004
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result2;
}
