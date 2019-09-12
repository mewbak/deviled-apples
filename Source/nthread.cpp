
// Address range: 0x91ecc - 0x91f50
int32_t nthread_terminate_game(int32_t a1)
{
	// 0x91ecc
	g34 = a1;
	int32_t v1 = g36; // 0x91ecc
	int32_t v2 = g10; // 0x91ed0
	g36 = *(int32_t *)(g23 - 0x7064);
	int32_t v3 = g35; // 0x91ed8
	g35 = g34;
	int32_t v4 = GetLastError(); // 0x91ee8
	g34 = v4;
	int32_t v5 = v4 + 0x7af00000; // 0x91ef0
	if (v5 == 106) {
		// 0x91f38
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return g34;
	}
	// 0x91efc
	if (v5 == 105) {
		// 0x91f04
		*(char *)g36 = 1;
		// branch -> 0x91f38
		// 0x91f38
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return g34;
	}
	// 0x91f10
	if (v5 == 112) {
		// 0x91f18
		*(char *)g36 = 1;
		// branch -> 0x91f38
	} else {
		// 0x91f24
		TraceLastError();
		g37 = g35;
		g34 = app_fatal(*(int32_t *)(g23 - 0x5be0));
		// branch -> 0x91f38
	}
	// 0x91f38
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return g34;
}

// Address range: 0x91f50 - 0x92030
int32_t nthread_send_and_recv_turn(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0x91f54
	g33 = *(int32_t *)(g23 - 0x7060);
	g32 = a2;
	int32_t v2;       // bp-36
	int32_t v3 = &v2; // 0x91f6c
	g34 = v3;
	int32_t v4;
	if (function_ec430(v3) == 0) {
		// 0x91f80
		nthread_terminate_game(*(int32_t *)(v4 - 0x5be4));
		// branch -> 0x9201c
	} else {
		// 0x91f90
		int32_t v5;       // bp-40
		int32_t v6 = &v5; // 0x91f94
		g35 = v6;
		g36 = 0x7fffffff;
		int32_t *v7 = (int32_t *)(v4 - 0x4cdc); // 0x91fa4
		int32_t result = a1;                    // 0x91fa0
		// branch -> 0x92000
		int32_t v8; // 0x91ff0
		while (true) {
		lab_0x92000:;
			int32_t v9 = v2; // 0x92000
			v2 = v9 + 1;
			if (v9 >= *(int32_t *)g33) {
				// 0x92018
				// branch -> 0x9201c
				// 0x9201c
				g10 = v1;
				return result;
			}
			// 0x91fa0
			*v7 = 0;
			int32_t v10 = *v7 | result % 0x80000000; // 0x91fb8
			v5 = v10;
			int32_t v11 = __asm_lwbrx(v10, v6); // 0x91fc0
			g34 = v6;
			v5 = v11;
			if (function_ec448(v6, 4) == 0) {
				// 0x91fe0
				nthread_terminate_game(*(int32_t *)(v4 - 0x5be8));
				// branch -> 0x9201c
				// 0x9201c
				g10 = v1;
				return 0;
			}
			// 0x91ff0
			v8 = g32 + a1;
			a1 = v8;
			if (v8 >= g36) {
				// break -> 0x91ffc
				break;
			}
			result = v8;
			// continue -> 0x92000
			continue;
		}
		int32_t v12 = v8 % 0x10000; // 0x91ffc
		a1 = v12;
		result = v12;
		// branch -> 0x92000
		goto lab_0x92000;
	}
	// 0x9201c
	g10 = v1;
	return 0;
}

// Address range: 0x92030 - 0x92148
int32_t function_92030(int32_t *a1)
{
	int32_t v1 = g36;         // 0x92030
	int32_t v2 = g10;         // 0x92034
	int32_t v3 = (int32_t)a1; // 0x92038
	g36 = v3;
	*(int32_t *)v3 = 0;
	char *v4 = (char *)(g23 - 0x4ceb); // 0x9204c
	int32_t v5 = (int32_t)*v4 - 1;     // 0x92050
	*v4 = (char)v5;
	if (v5 % 256 != 0) {
		int32_t *v6 = (int32_t *)(g23 - 0x4cf0); // 0x92060
		*v6 = *v6 + 50;
		// branch -> 0x92134
		// 0x92134
		g36 = v1;
		g10 = v2;
		return 1;
	}
	int32_t v7 = (int32_t) * (char *)(g23 - 0x4cec) - 1; // 0x9207c
	*(char *)(g23 - 0x4ceb) = *(char *)*(int32_t *)(g23 - 0x700c);
	*(char *)(g23 - 0x4cec) = (char)v7;
	int32_t *v8; // 0x92128
	if (v7 % 256 != 0) {
		// 0x9211c
		*(int32_t *)g36 = 1;
		v8 = (int32_t *)(g23 - 0x4cf0);
		*v8 = *v8 + 50;
		// branch -> 0x92134
		// 0x92134
		g36 = v1;
		g10 = v2;
		return 1;
	}
	// 0x92094
	g34 = 0;
	int32_t v9 = *(int32_t *)(g23 - 0x7010);                                 // 0x9209c
	int32_t v10 = *(int32_t *)(g23 - 0x7008);                                // 0x920a4
	int32_t v11 = function_ec460(0, 4, *(int32_t *)(g23 - 0x7014), v9, v10); // 0x920a8
	g34 = v11;
	int32_t result; // r3
	int32_t v12;
	if (v11 == 0) {
		// 0x920b8
		int32_t v13; // 0x920dc
		if (GetLastError() != -0x7aefff95) {
			// 0x920cc
			nthread_terminate_game(*(int32_t *)(v12 - 0x5bec));
			v13 = g23;
			// branch -> 0x920d4
		} else {
			v13 = v12;
		}
		// 0x920d4
		*(char *)(v13 - 0x4cec) = 1;
		result = 0;
		*(char *)(g23 - 0x4ceb) = (char)1;
		*(char *)(g23 - 0x4cea) = (char)0;
		// branch -> 0x92134
	} else {
		char *v14 = (char *)(v12 - 0x4cea); // 0x920f0
		int32_t v15 = v12;                  // 0x92114
		if (*v14 == 0) {
			// 0x920fc
			*v14 = 1;
			int32_t v16 = GetTickCount(); // 0x92104
			g34 = v16;
			*(int32_t *)(v12 - 0x4cf0) = v16;
			v15 = g23;
			// branch -> 0x92110
		}
		// 0x92110
		*(char *)(v15 - 0x4cec) = 4;
		function_90768();
		// branch -> 0x9211c
		// 0x9211c
		*(int32_t *)g36 = 1;
		result = 1;
		v8 = (int32_t *)(g23 - 0x4cf0);
		*v8 = *v8 + 50;
		// branch -> 0x92134
	}
	// 0x92134
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0x92148 - 0x9220c
int32_t function_92148(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x5bf0); // 0x92150
	g36 = v1;
	if (*(char *)(g23 - 0x4cdf) == 0) {
		// 0x921f4
		return 0;
	}
	// 0x92164
	int32_t v2;
	char *v3 = (char *)(v2 - 0x4cdf); // 0x92170
	g34 = v1;
	EnterCriticalSection(v1);
	int32_t v4; // 0x9217c
	if (*v3 == 0) {
		// 0x9217c
		v4 = g36;
		g34 = v4;
		LeaveCriticalSection(v4);
		// branch -> 0x921f4
	} else {
		while (true) {
			// 0x92190
			nthread_send_and_recv_turn(0, 0);
			int32_t v5 = 0;                   // bp-24
			int32_t v6 = function_92030(&v5); // 0x921a0
			g34 = v6;
			int32_t v7 = 50;
			if (v6 != 0) {
				// 0x921ac
				v7 = *(int32_t *)(v2 - 0x4cf0) - GetTickCount();
				// branch -> 0x921c4
			}
			// 0x921c4
			g35 = v7;
			int32_t v8 = g36; // 0x921c4
			g34 = v8;
			LeaveCriticalSection(v8);
			int32_t v9 = g35; // 0x921d0
			if (v9 >= 1) {
				// 0x921d8
				g34 = v9;
				Sleep(v9);
				// branch -> 0x921e4
			}
			// 0x921e4
			if (*v3 != 0) {
				int32_t v10 = g36;
				g34 = v10;
				EnterCriticalSection(v10);
				if (*v3 == 0) {
					// break -> 0x9217c
					break;
				}
				// continue -> 0x92190
				continue;
			}
			// 0x921f4
			return 0;
		}
		// 0x9217c
		v4 = g36;
		g34 = v4;
		LeaveCriticalSection(v4);
		// branch -> 0x921f4
	}
	// 0x921f4
	return 0;
}

// Address range: 0x9220c - 0x92218
int32_t function_9220c(int32_t a1)
{
	// 0x9220c
	*(int32_t *)(g23 - 0x4cdc) = -0x80000000;
	return g34;
}

// Address range: 0x92218 - 0x92444
int32_t nthread_start(int32_t a1)
{
	// 0x92218
	g34 = a1;
	int32_t v1 = g36; // 0x92218
	int32_t v2 = g10; // 0x9221c
	g36 = *(int32_t *)(g23 - 0x700c);
	int32_t v3 = g35; // 0x92224
	g35 = *(int32_t *)(g23 - 0x7004);
	int32_t v4 = g33; // 0x9222c
	g33 = *(int32_t *)(g23 - 0x7060);
	int32_t v5 = g34;            // 0x92238
	int32_t v6 = GetTickCount(); // 0x92244
	g34 = v6;
	int32_t v7 = 1; // r0
	int32_t v8;
	*(int32_t *)(v8 - 0x4cf0) = v6;
	*(char *)(g23 - 0x4ceb) = (char)v7;
	*(char *)(g23 - 0x4cec) = (char)v7;
	*(char *)(g23 - 0x4cea) = (char)v7;
	if (v5 == 0) {
		// 0x92270
		*(int32_t *)(g23 - 0x4cdc) = 0;
		// branch -> 0x92278
	} else {
		// 0x92268
		function_9220c(v6);
		// branch -> 0x92278
	}
	// 0x92278
	int32_t v9;        // bp-56
	int32_t v10 = &v9; // 0x9227c
	g34 = v10;
	v9 = 36;
	int32_t v11 = function_ec418(v10); // 0x92284
	g34 = v11;
	if (v11 == 0) {
		// 0x92294
		g37 = TraceLastError();
		app_fatal(*(int32_t *)(g23 - 0x5bf4));
		// branch -> 0x922a4
	}
	// 0x922a4
	int32_t v12;
	if (v12 == 0) {
		// 0x922b8
		*(int32_t *)g33 = 1;
		// branch -> 0x922c0
	}
	// 0x922c0
	int32_t v13; // r6
	int32_t v14;
	uint32_t v15;
	uint32_t v16;
	uint32_t v17;
	uint32_t v18;
	int32_t v19;       // 0x92300
	int32_t v20;       // 0x92310
	int32_t v21;       // 0x9238c
	int32_t v22;       // 0x9238c3
	int32_t v23;       // 0x923a4
	int32_t v24;       // 0x923d4
	int32_t v25;       // 0x923f8
	int32_t v26;       // 0x92414
	int32_t *v27;      // 0x92334
	int32_t *v28;      // 0x92340
	int32_t *v29;      // 0x92360
	int32_t *v30;      // 0x92374
	char *v31;         // 0x92380
	uint32_t v32;      // 0x92398
	unsigned char v33; // 0x92318
	int32_t v34;       // 0x9238c
	int32_t v35;       // 0x9238c5
	int32_t result2;   // 0x9241c
	int32_t result;    // 0x923a4
	int32_t v36;       // 0x923b8
	int32_t v37;       // 0x923cc
	int32_t v38;       // 0x92414
	int32_t v39;       // 0x923ec
	if (v18 > 20) {
		// 0x922d4
		*(char *)g36 = 1;
		// branch -> 0x922ec
		// 0x922ec
		v20 = v17;
		if (v17 > 511) {
			// 0x922fc
			v13 = 512;
			v20 = 512;
			// branch -> 0x92300
		}
		// 0x92300
		v19 = g23;
		*(int32_t *)*(int32_t *)(v19 - 0x701c) = v20;
		v33 = *(char *)g36;
		*(int32_t *)g35 = (int32_t)((int64_t)-0x33333333 * (int64_t)((int32_t)v33 * v16) / 0x1000000000);
		*(int32_t *)*(int32_t *)(v19 - 0x72c0) = v16 / 4;
		v27 = (int32_t *)g35;
		*v27 = 3 * *v27;
		v28 = (int32_t *)g35;
		*v28 = *v28 / 4;
		v14 = v15;
		if (v15 >= 5) {
			// 0x92358
			v14 = 4;
			// branch -> 0x92360
		}
		// 0x92360
		v29 = (int32_t *)g35;
		*v29 = *v29 / v14;
		v22 = g35;
		v35 = *(int32_t *)v22;
		if (v35 >= 128) {
			// 0x92398
			v32 = v13;
			if (v35 > v32) {
				// 0x923a0
				*(int32_t *)v22 = v32;
				// branch -> 0x923a4
			}
			// 0x923a4
			v23 = g23;
			result = *(int32_t *)(v23 - 0x77f0);
			if ((*(char *)result || 1) == 1) {
				// 0x92424
				g36 = v1;
				g10 = v2;
				g35 = v3;
				g33 = v4;
				return result;
			}
			// 0x923b4
			v36 = *(int32_t *)(v23 - 0x5bf0);
			g34 = v36;
			*(char *)(v23 - 0x4ce0) = 0;
			EnterCriticalSection(v36);
			v37 = *(int32_t *)(v8 - 0x5bf8);
			*(char *)(v8 - 0x4cdf) = 1;
			v24 = g23;
			g34 = 0;
			v39 = function_ec478(0, 0, v37, 0, 0, v24 - 0x4ce8, *(int32_t *)(v24 - 0x5bfc));
			g34 = v39;
			*(int32_t *)(v8 - 0x4ce4) = v39;
			v25 = g23;
			v26 = v25;
			if (*(int32_t *)(v25 - 0x4ce4) == 0) {
				// 0x92404
				g37 = TraceLastError();
				app_fatal(*(int32_t *)(g23 - 0x5c00));
				v26 = g23;
				// branch -> 0x92414
			}
			// 0x92414
			v38 = *(int32_t *)(v26 - 0x4ce4);
			g34 = v38;
			result2 = function_ec490(v38, 2);
			// branch -> 0x92424
			// 0x92424
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result2;
		}
		v30 = (int32_t *)v22;
		*v30 = 2 * *v30;
		v31 = (char *)g36;
		*v31 = (char)(2 * (int32_t)*v31);
		v21 = g35;
		v34 = *(int32_t *)v21;
		while (v34 < 128) {
			// 0x92374
			v30 = (int32_t *)v21;
			*v30 = 2 * *v30;
			v31 = (char *)g36;
			*v31 = (char)(2 * (int32_t)*v31);
			v21 = g35;
			v34 = *(int32_t *)v21;
			// continue -> 0x92374
		}
		// 0x92398
		v32 = v13;
		if (v34 > v32) {
			// 0x923a0
			*(int32_t *)v21 = v32;
			// branch -> 0x923a4
		}
		// 0x923a4
		v23 = g23;
		result = *(int32_t *)(v23 - 0x77f0);
		if ((*(char *)result || 1) == 1) {
			// 0x92424
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result;
		}
		// 0x923b4
		v36 = *(int32_t *)(v23 - 0x5bf0);
		g34 = v36;
		*(char *)(v23 - 0x4ce0) = 0;
		EnterCriticalSection(v36);
		v37 = *(int32_t *)(v8 - 0x5bf8);
		*(char *)(v8 - 0x4cdf) = 1;
		v24 = g23;
		g34 = 0;
		v39 = function_ec478(0, 0, v37, 0, 0, v24 - 0x4ce8, *(int32_t *)(v24 - 0x5bfc));
		g34 = v39;
		*(int32_t *)(v8 - 0x4ce4) = v39;
		v25 = g23;
		v26 = v25;
		if (*(int32_t *)(v25 - 0x4ce4) == 0) {
			// 0x92404
			g37 = TraceLastError();
			app_fatal(*(int32_t *)(g23 - 0x5c00));
			v26 = g23;
			// branch -> 0x92414
		}
		// 0x92414
		v38 = *(int32_t *)(v26 - 0x4ce4);
		g34 = v38;
		result2 = function_ec490(v38, 2);
		// branch -> 0x92424
		// 0x92424
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return result2;
	}
	// 0x922cc
	if (v18 != 0) {
		// 0x922e0
		*(char *)g36 = (char)(20 / v18);
		// branch -> 0x922ec
		// 0x922ec
		v20 = v17;
		if (v17 > 511) {
			// 0x922fc
			v13 = 512;
			v20 = 512;
			// branch -> 0x92300
		}
		// 0x92300
		v19 = g23;
		*(int32_t *)*(int32_t *)(v19 - 0x701c) = v20;
		v33 = *(char *)g36;
		*(int32_t *)g35 = (int32_t)((int64_t)-0x33333333 * (int64_t)((int32_t)v33 * v16) / 0x1000000000);
		*(int32_t *)*(int32_t *)(v19 - 0x72c0) = v16 / 4;
		v27 = (int32_t *)g35;
		*v27 = 3 * *v27;
		v28 = (int32_t *)g35;
		*v28 = *v28 / 4;
		v14 = v15;
		if (v15 >= 5) {
			// 0x92358
			v14 = 4;
			// branch -> 0x92360
		}
		// 0x92360
		v29 = (int32_t *)g35;
		*v29 = *v29 / v14;
		v22 = g35;
		v35 = *(int32_t *)v22;
		if (v35 >= 128) {
			// 0x92398
			v32 = v13;
			if (v35 > v32) {
				// 0x923a0
				*(int32_t *)v22 = v32;
				// branch -> 0x923a4
			}
			// 0x923a4
			v23 = g23;
			result = *(int32_t *)(v23 - 0x77f0);
			if ((*(char *)result || 1) == 1) {
				// 0x92424
				g36 = v1;
				g10 = v2;
				g35 = v3;
				g33 = v4;
				return result;
			}
			// 0x923b4
			v36 = *(int32_t *)(v23 - 0x5bf0);
			g34 = v36;
			*(char *)(v23 - 0x4ce0) = 0;
			EnterCriticalSection(v36);
			v37 = *(int32_t *)(v8 - 0x5bf8);
			*(char *)(v8 - 0x4cdf) = 1;
			v24 = g23;
			g34 = 0;
			v39 = function_ec478(0, 0, v37, 0, 0, v24 - 0x4ce8, *(int32_t *)(v24 - 0x5bfc));
			g34 = v39;
			*(int32_t *)(v8 - 0x4ce4) = v39;
			v25 = g23;
			v26 = v25;
			if (*(int32_t *)(v25 - 0x4ce4) == 0) {
				// 0x92404
				g37 = TraceLastError();
				app_fatal(*(int32_t *)(g23 - 0x5c00));
				v26 = g23;
				// branch -> 0x92414
			}
			// 0x92414
			v38 = *(int32_t *)(v26 - 0x4ce4);
			g34 = v38;
			result2 = function_ec490(v38, 2);
			// branch -> 0x92424
			// 0x92424
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result2;
		}
		v30 = (int32_t *)v22;
		*v30 = 2 * *v30;
		v31 = (char *)g36;
		*v31 = (char)(2 * (int32_t)*v31);
		v21 = g35;
		v34 = *(int32_t *)v21;
		while (v34 < 128) {
			// 0x92374
			v30 = (int32_t *)v21;
			*v30 = 2 * *v30;
			v31 = (char *)g36;
			*v31 = (char)(2 * (int32_t)*v31);
			v21 = g35;
			v34 = *(int32_t *)v21;
			// continue -> 0x92374
		}
		// 0x92398
		v32 = v13;
		if (v34 > v32) {
			// 0x923a0
			*(int32_t *)v21 = v32;
			// branch -> 0x923a4
		}
		// 0x923a4
		v23 = g23;
		result = *(int32_t *)(v23 - 0x77f0);
		if ((*(char *)result || 1) == 1) {
			// 0x92424
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result;
		}
		// 0x923b4
		v36 = *(int32_t *)(v23 - 0x5bf0);
		g34 = v36;
		*(char *)(v23 - 0x4ce0) = 0;
		EnterCriticalSection(v36);
		v37 = *(int32_t *)(v8 - 0x5bf8);
		*(char *)(v8 - 0x4cdf) = 1;
		v24 = g23;
		g34 = 0;
		v39 = function_ec478(0, 0, v37, 0, 0, v24 - 0x4ce8, *(int32_t *)(v24 - 0x5bfc));
		g34 = v39;
		*(int32_t *)(v8 - 0x4ce4) = v39;
		v25 = g23;
		v26 = v25;
		if (*(int32_t *)(v25 - 0x4ce4) == 0) {
			// 0x92404
			g37 = TraceLastError();
			app_fatal(*(int32_t *)(g23 - 0x5c00));
			v26 = g23;
			// branch -> 0x92414
		}
		// 0x92414
		v38 = *(int32_t *)(v26 - 0x4ce4);
		g34 = v38;
		result2 = function_ec490(v38, 2);
		// branch -> 0x92424
		// 0x92424
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return result2;
	}
	// 0x922d4
	*(char *)g36 = 1;
	// branch -> 0x922ec
	// 0x922ec
	v20 = v17;
	if (v17 > 511) {
		// 0x922fc
		v13 = 512;
		v20 = 512;
		// branch -> 0x92300
	}
	// 0x92300
	v19 = g23;
	*(int32_t *)*(int32_t *)(v19 - 0x701c) = v20;
	v33 = *(char *)g36;
	*(int32_t *)g35 = (int32_t)((int64_t)-0x33333333 * (int64_t)((int32_t)v33 * v16) / 0x1000000000);
	*(int32_t *)*(int32_t *)(v19 - 0x72c0) = v16 / 4;
	v27 = (int32_t *)g35;
	*v27 = 3 * *v27;
	v28 = (int32_t *)g35;
	*v28 = *v28 / 4;
	v14 = v15;
	if (v15 >= 5) {
		// 0x92358
		v14 = 4;
		// branch -> 0x92360
	}
	// 0x92360
	v29 = (int32_t *)g35;
	*v29 = *v29 / v14;
	v22 = g35;
	v35 = *(int32_t *)v22;
	if (v35 >= 128) {
		// 0x92398
		v32 = v13;
		if (v35 > v32) {
			// 0x923a0
			*(int32_t *)v22 = v32;
			// branch -> 0x923a4
		}
		// 0x923a4
		v23 = g23;
		result = *(int32_t *)(v23 - 0x77f0);
		if ((*(char *)result || 1) == 1) {
			// 0x92424
			g36 = v1;
			g10 = v2;
			g35 = v3;
			g33 = v4;
			return result;
		}
		// 0x923b4
		v36 = *(int32_t *)(v23 - 0x5bf0);
		g34 = v36;
		*(char *)(v23 - 0x4ce0) = 0;
		EnterCriticalSection(v36);
		v37 = *(int32_t *)(v8 - 0x5bf8);
		*(char *)(v8 - 0x4cdf) = 1;
		v24 = g23;
		g34 = 0;
		v39 = function_ec478(0, 0, v37, 0, 0, v24 - 0x4ce8, *(int32_t *)(v24 - 0x5bfc));
		g34 = v39;
		*(int32_t *)(v8 - 0x4ce4) = v39;
		v25 = g23;
		v26 = v25;
		if (*(int32_t *)(v25 - 0x4ce4) == 0) {
			// 0x92404
			g37 = TraceLastError();
			app_fatal(*(int32_t *)(g23 - 0x5c00));
			v26 = g23;
			// branch -> 0x92414
		}
		// 0x92414
		v38 = *(int32_t *)(v26 - 0x4ce4);
		g34 = v38;
		result2 = function_ec490(v38, 2);
		// branch -> 0x92424
		// 0x92424
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return result2;
	}
	v30 = (int32_t *)v22;
	*v30 = 2 * *v30;
	v31 = (char *)g36;
	*v31 = (char)(2 * (int32_t)*v31);
	v21 = g35;
	v34 = *(int32_t *)v21;
	while (v34 < 128) {
		// 0x92374
		v30 = (int32_t *)v21;
		*v30 = 2 * *v30;
		v31 = (char *)g36;
		*v31 = (char)(2 * (int32_t)*v31);
		v21 = g35;
		v34 = *(int32_t *)v21;
		// continue -> 0x92374
	}
	// 0x92398
	v32 = v13;
	if (v34 > v32) {
		// 0x923a0
		*(int32_t *)v21 = v32;
		// branch -> 0x923a4
	}
	// 0x923a4
	v23 = g23;
	result = *(int32_t *)(v23 - 0x77f0);
	if ((*(char *)result || 1) == 1) {
		// 0x92424
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return result;
	}
	// 0x923b4
	v36 = *(int32_t *)(v23 - 0x5bf0);
	g34 = v36;
	*(char *)(v23 - 0x4ce0) = 0;
	EnterCriticalSection(v36);
	v37 = *(int32_t *)(v8 - 0x5bf8);
	*(char *)(v8 - 0x4cdf) = 1;
	v24 = g23;
	g34 = 0;
	v39 = function_ec478(0, 0, v37, 0, 0, v24 - 0x4ce8, *(int32_t *)(v24 - 0x5bfc));
	g34 = v39;
	*(int32_t *)(v8 - 0x4ce4) = v39;
	v25 = g23;
	v26 = v25;
	if (*(int32_t *)(v25 - 0x4ce4) == 0) {
		// 0x92404
		g37 = TraceLastError();
		app_fatal(*(int32_t *)(g23 - 0x5c00));
		v26 = g23;
		// branch -> 0x92414
	}
	// 0x92414
	v38 = *(int32_t *)(v26 - 0x4ce4);
	g34 = v38;
	result2 = function_ec490(v38, 2);
	// branch -> 0x92424
	// 0x92424
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	return result2;
}

// Address range: 0x92444 - 0x924f8
int32_t nthread_cleanup(void)
{
	int32_t v1 = g10; // 0x92444
	int32_t v2 = 0;   // r0
	*(char *)(g23 - 0x4cdf) = 0;
	*(int32_t *)*(int32_t *)(g23 - 0x7060) = v2;
	g34 = *(int32_t *)(g23 - 0x701c);
	*(int32_t *)*(int32_t *)(g23 - 0x7004) = v2;
	*(int32_t *)g34 = v2;
	if (*(int32_t *)(g23 - 0x4ce4) == 0) {
		// 0x924e8
		g10 = v1;
		return g34;
	}
	int32_t v3 = GetCurrentThreadId(); // 0x9247c
	g34 = v3;
	int32_t v4;
	if (*(int32_t *)(v4 - 0x4ce8) == v3) {
		// 0x924e8
		g10 = v1;
		return g34;
	}
	// 0x92490
	if (*(char *)(v4 - 0x4ce0) == 0) {
		int32_t v5 = *(int32_t *)(v4 - 0x5bf0); // 0x9249c
		g34 = v5;
		LeaveCriticalSection(v5);
		// branch -> 0x924a8
	}
	int32_t *v6 = (int32_t *)(v4 - 0x4ce4); // 0x924a8
	int32_t v7 = *v6;                       // 0x924a8
	g34 = v7;
	int32_t v8 = function_eb3f8(v7, -1); // 0x924b0
	g34 = v8;
	if (v8 + (int32_t) "MoveWindow" == 0xffff) {
		// 0x924c4
		g37 = TraceLastError();
		app_fatal(*(int32_t *)(g23 - 0x5c04));
		v4 = g23;
		// branch -> 0x924d4
	}
	int32_t v9 = *(int32_t *)(v4 - 0x4ce4); // 0x924d4
	g34 = v9;
	g34 = CloseHandle(v9);
	*v6 = 0;
	// branch -> 0x924e8
	// 0x924e8
	g10 = v1;
	return g34;
}

// Address range: 0x924f8 - 0x92550
int32_t nthread_ignore_mutex(char a1)
{
	int32_t v1 = a1;                             // r3
	int32_t v2 = g10;                            // 0x924fc
	int32_t result = *(int32_t *)(g23 - 0x5bf0); // 0x92504
	g34 = result;
	if (*(int32_t *)(g23 - 0x4ce4) == 0) {
		// 0x9253c
		g10 = v2;
		return result;
	}
	// 0x9251c
	int32_t result2;
	if (v1 == 0) {
		// 0x92530
		result2 = EnterCriticalSection(result);
		// branch -> 0x92538
	} else {
		// 0x92524
		result2 = LeaveCriticalSection(result);
		// branch -> 0x92538
	}
	// 0x92538
	int32_t v3;
	*(char *)(v3 - 0x4ce0) = (char)v1;
	// branch -> 0x9253c
	// 0x9253c
	g10 = v2;
	return result2;
}

// Address range: 0x92550 - 0x925b8
int32_t nthread_has_500ms_passed(int32_t a1)
{
	// 0x92550
	g34 = a1;
	int32_t v1 = g10;            // 0x92550
	int32_t v2 = GetTickCount(); // 0x92560
	int32_t v3;
	int32_t *v4 = (int32_t *)(v3 - 0x4cf0); // 0x9256c
	int32_t v5 = v2 - *v4;                  // 0x92574
	int32_t v6 = v5;                        // 0x9259c
	if (*(char *)*(int32_t *)(v3 - 0x77f0) != 1) {
		// 0x92590
		g10 = v1;
		return ((v6 >> 31 & -2 | (int32_t)(v6 < 0)) + 1) % 256;
	}
	// 0x92580
	if (v5 >= 501) {
		// 0x92588
		*v4 = v2;
		v6 = 0;
		// branch -> 0x92590
	} else {
		v6 = v5;
	}
	// 0x92590
	g10 = v1;
	return ((v6 >> 31 & -2 | (int32_t)(v6 < 0)) + 1) % 256;
}
