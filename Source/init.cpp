// Address range: 0x549d8 - 0x54a88
int32_t init_cleanup(int32_t a1)
{
	int32_t v1 = g36; // 0x549d8
	g36 = *(int32_t *)(g23 - 0x7204);
	int32_t v2 = g35; // 0x549e4
	g35 = a1;
	pfile_flush_W();
	int32_t v3 = *(int32_t *)g36; // 0x549f8
	g34 = v3;
	if (v3 != 0) {
		// 0x54a04
		SFileCloseArchive();
		*(int32_t *)g36 = 0;
		// branch -> 0x54a14
	}
	int32_t v4 = *(int32_t *)(g23 - 0x4e40); // 0x54a14
	g34 = v4;
	int32_t v5;
	if (v4 != 0) {
		// 0x54a20
		SFileCloseArchive();
		*(int32_t *)(v5 - 0x4e40) = 0;
		// branch -> 0x54a30
	}
	int32_t v6 = *(int32_t *)(g23 - 0x4e44); // 0x54a30
	g34 = v6;
	int32_t v7; // r3
	if (v6 != 0) {
		// 0x54a3c
		v7 = SFileCloseArchive();
		*(int32_t *)(v5 - 0x4e44) = 0;
		// branch -> 0x54a4c
	} else {
		v7 = 0;
	}
	int32_t v8 = UiDestroy(v7);                          // 0x54a4c
	int32_t v9 = sound_cleanup(effects_cleanup_sfx(v8)); // 0x54a54
	g34 = v9;
	dx_cleanup(NetClose(v9));
	g34 = g35;
	int32_t v10 = engine_debug_trap(g35); // 0x54a64
	g34 = v10;
	g36 = v1;
	g35 = v2;
	return StormDestroy(v10);
}

// Address range: 0x54a88 - 0x54ac8
int32_t init_strip_trailing_slash(int32_t a1)
{
	int32_t v1 = g10;                 // 0x54a88
	int32_t result = strrchr(92, 92); // 0x54a98
	if (result == 0) {
		// 0x54ab8
		g10 = v1;
		return 0;
	}
	// 0x54aa4
	if (*(char *)(result + 1) == 0) {
		// 0x54ab0
		*(char *)result = 0;
		// branch -> 0x54ab8
	}
	// 0x54ab8
	g10 = v1;
	return result;
}

// Address range: 0x54ac8 - 0x54be4
int32_t init_read_test_file(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = 32;           // ctr
	int32_t v2;                // bp-352
	int32_t v3 = &v2;          // 0x54b10
	int32_t v4 = g23 + 0x3452; // 0x54b08
	// branch -> 0x54b08
	while (true) {
		int32_t v5 = v4 + 8; // 0x54b08
		int32_t v6 = v3 + 8; // 0x54b10
		*(int32_t *)v6 = *(int32_t *)v5;
		*(int32_t *)(v3 + 12) = *(int32_t *)(v4 + 12);
		int32_t v7 = v1 - 1; // 0x54b18
		v1 = v7;
		if (v7 == 0) {
			int32_t v8 = strrchr(a2, 92); // 0x54b24
			int32_t v9 = v8;              // 0x54b38
			if (v8 == 0) {
				// 0x54b30
				v9 = a2;
				// branch -> 0x54b34
			}
			// 0x54b34
			int32_t v10;        // bp-344
			int32_t v11 = &v10; // 0x54b34
			function_e86d0(v11, v9 + 1);
			g34 = v11;
			function_ea510(v11);
			g34 = 0;
			int32_t v12; // bp-88
			if ((0x10000 * function_ea438(0, 0, v11, (int32_t)&v12) || 0xffff) >= 0x1ffff) {
				// 0x54b6c
				// branch -> 0x54bc4
				// 0x54bc4
				return 0;
			}
			// 0x54b74
			g34 = a1;
			int32_t v13; // bp-82
			int32_t v14;
			function_eb758(a1, (int32_t)&v13, v12, v14, 0x3f3f3f3f);
			g34 = a1;
			if (function_eb740(a1, a3, 1, a4) == 0) {
				// 0x54bc0
				// branch -> 0x54bc4
				// 0x54bc4
				return 0;
			}
			// 0x54bb8
			// branch -> 0x54bc4
			// 0x54bc4
			return 1;
		}
		// 0x54b08
		v3 = v6;
		v4 = v5;
		// branch -> 0x54b08
	}
}

// Address range: 0x54be4 - 0x54d9c
int32_t init_test_access(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)
{
	int32_t v1 = g36; // 0x54be4
	int32_t v2 = g10; // 0x54be8
	g36 = a5;
	int32_t v3 = g35; // 0x54bf0
	g35 = a4;
	int32_t v4 = g33; // 0x54bf8
	g33 = a2;
	int32_t v5 = g32; // 0x54c00
	g32 = a1;
	g34 = 260;
	int32_t v6;       // bp-288
	int32_t v7 = &v6; // 0x54c18
	g37 = v7;
	int32_t v8;
	if (function_eb710(260, v7) == 0) {
		// 0x54c2c
		app_fatal(*(int32_t *)(v8 - 0x61c0));
		// branch -> 0x54c34
	}
	// 0x54c34
	init_strip_trailing_slash(v7);
	g34 = v7;
	int32_t v9 = v8; // 0x54c58
	if (function_eb728(v7) == 0) {
		// 0x54c50
		app_fatal(*(int32_t *)(v8 - 0x61c4));
		v9 = g23;
		// branch -> 0x54c58
	}
	// 0x54c58
	int32_t v10;        // bp-548
	int32_t v11 = &v10; // 0x54c5c
	g37 = v11;
	int32_t v12 = *(int32_t *)*(int32_t *)(v9 - 0x75c4); // 0x54c64
	g34 = v12;
	if (GetModuleFileName(v12, v11, 260) == 0) {
		// 0x54c78
		app_fatal(*(int32_t *)(v8 - 0x61c8));
		// branch -> 0x54c80
	}
	int32_t v13 = strrchr(v11, 92); // 0x54c88
	if (v13 != 0) {
		// 0x54c94
		*(char *)v13 = 0;
		// branch -> 0x54c9c
	}
	// 0x54c9c
	init_strip_trailing_slash(v11);
	g34 = g32;
	g37 = v7;
	function_e8670();
	function_e86d0(g32, g33);
	int32_t v14 = g32; // 0x54cbc
	g34 = v14;
	int32_t result;        // bp-28
	int32_t v15 = &result; // 0x54cc0
	int32_t result2;       // 0x54d98
	if (function_eb740(v14, g35, g36, v15) == 0) {
		// 0x54ce4
		if (function_e1db4((char *)&v10, v7) != 0) {
			// 0x54cf8
			g34 = g32;
			g37 = v11;
			function_e8670();
			function_e86d0(g32, g33);
			int32_t v16 = g32; // 0x54d10
			g34 = v16;
			if (function_eb740(v16, g35, g36, v15) != 0) {
				// 0x54d30
				// branch -> 0x54d7c
				// 0x54d7c
				g36 = v1;
				g10 = v2;
				g35 = v3;
				g33 = v4;
				g32 = v5;
				return result;
			}
		}
		char v17 = 0; // bp-808
		if (g36 != 0) {
			int32_t v18 = &v17; // 0x54d4c
			if (init_read_test_file(v18, g33, g35, v15) != 0) {
				// 0x54d64
				g34 = g32;
				g37 = v18;
				function_e8670();
				// branch -> 0x54d7c
				// 0x54d7c
				g36 = v1;
				g10 = v2;
				g35 = v3;
				g33 = v4;
				g32 = v5;
				return result;
			}
		}
		// 0x54d78
		result2 = 0;
		// branch -> 0x54d7c
	} else {
		// 0x54cdc
		result2 = result;
		// branch -> 0x54d7c
	}
	// 0x54d7c
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	g32 = v5;
	return result2;
}

// Address range: 0x54d9c - 0x54e8c
int32_t init_get_file_info(int32_t a1)
{
	int32_t v1 = g36;                        // 0x54d9c
	int32_t v2 = g10;                        // 0x54da0
	int32_t v3 = *(int32_t *)(g23 - 0x61cc); // 0x54da4
	g36 = v3;
	int32_t v4 = g35;                                    // 0x54dac
	int32_t v5 = g33;                                    // 0x54db8
	int32_t v6 = *(int32_t *)*(int32_t *)(g23 - 0x75c4); // 0x54dc4
	g34 = v6;
	if (GetModuleFileName(v6, v3, 260) == 0) {
		// 0x54e70
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v5;
		return 0;
	}
	int32_t v7 = g36; // 0x54dd8
	g34 = v7;
	int32_t v8;                                            // bp-32
	int32_t v9 = GetFileVersionInfoSize(v7, (int32_t)&v8); // 0x54de0
	g35 = v9;
	if (v9 == 0) {
		// 0x54e70
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v5;
		return 0;
	}
	// 0x54df0
	g34 = v9;
	int32_t v10 = DiabloAllocPtr(); // 0x54df4
	g33 = v10;
	int32_t v11 = g36; // 0x54dfc
	g34 = v11;
	int32_t result; // 0x54e88
	if (GetFileVersionInfo(v11, 0, g35, v10) == 0) {
		// 0x54e68
		g34 = g33;
		result = mem_free_dbg();
		// branch -> 0x54e70
		// 0x54e70
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v5;
		return result;
	}
	// 0x54e1c
	int32_t v12;
	int32_t v13 = *(int32_t *)(v12 - 0x61d0); // 0x54e1c
	int32_t v14 = g33;                        // 0x54e20
	g34 = v14;
	int32_t v15;                                                         // bp-36
	int32_t v16;                                                         // bp-40
	int32_t v17 = VerQueryValue(v14, v13, (int32_t)&v16, (int32_t)&v15); // 0x54e2c
	if (v17 != 0) {
		// 0x54e3c
		g37 = *(int32_t *)(v12 - 0x61d4);
		g38 = *(int32_t *)(v16 + 16) / 0x10000;
		sprintf();
		// branch -> 0x54e68
	}
	// 0x54e68
	g34 = g33;
	result = mem_free_dbg();
	// branch -> 0x54e70
	// 0x54e70
	g36 = v1;
	g10 = v2;
	g35 = v4;
	g33 = v5;
	return result;
}

// Address range: 0x54e8c - 0x54fa0
int32_t init_archives(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7208); // 0x54e94
	g35 = v1;
	g29 = *(int32_t *)(g23 - 0x61e8);
	g30 = *(int32_t *)(g23 - 0x61e4);
	g34 = v1;
	g31 = *(int32_t *)(g23 - 0x61e0);
	g32 = *(int32_t *)(g23 - 0x61dc);
	g33 = *(int32_t *)(g23 - 0x61d8);
	g36 = *(int32_t *)(g23 - 0x7204);
	memset();
	int32_t v2;
	int32_t v3 = v2 + 0x3252; // 0x54ecc
	*(int32_t *)g35 = 20;
	*(int32_t *)(g35 + 4) = v3;
	*(int32_t *)(g35 + 8) = *(int32_t *)(g23 - 0x61cc);
	*(int32_t *)(g35 + 12) = g33;
	*(int32_t *)(g35 + 16) = g32;
	init_get_file_info(v3);
	// branch -> 0x54eec
	while (true) {
	lab_0x54eec:;
		int32_t v4 = init_test_access(g33, g31, g30, 1000, 1); // 0x54f00
		*(int32_t *)g36 = v4;
		if (*(int32_t *)g36 != 0) {
			// 0x54f34
			g38 = 1;
			int32_t v5; // bp-40
			if (WOpenFile(*(int32_t *)(g23 - 0x61ec), (int32_t)&v5) == 0) {
				// 0x54f4c
				FileErrDlg(g29);
				// branch -> 0x54f54
			}
			g34 = v5;
			WCloseFile(v5);
			int32_t result2 = init_test_access(g32, *(int32_t *)(g23 - 0x61f0), *(int32_t *)(g23 - 0x61f4), 2000, 0); // 0x54f70
			*(int32_t *)(g23 - 0x4e40) = result2;
			if (*(int32_t *)(g23 - 0x4e40) == 0) {
				int32_t result = FileErrDlg(*(int32_t *)(g23 - 0x61f8)); // 0x54f88
				// branch -> 0x54f8c
				// 0x54f8c
				return result;
			}
			// 0x54f54
			// branch -> 0x54f8c
			// 0x54f8c
			return result2;
		}
		// 0x54f14
		int32_t v6; // bp-36
		if (v6 == 2) {
			// break -> 0x54f28
			break;
		}
		// continue -> 0x54eec
	}
	// 0x54f28
	FileErrDlg(g29);
	// branch -> 0x54eec
	goto lab_0x54eec;
}

// Address range: 0x54fa0 - 0x550d4
int32_t init_create_window(int32_t a1)
{
	int32_t v1 = g36; // 0x54fa0
	int32_t v2 = g35; // 0x54fa8
	g35 = *(int32_t *)(g23 - 0x75c4);
	int32_t v3 = g33; // 0x54fb0
	g33 = g23 + 0x324b;
	function_9fdbc();
	int32_t v4;       // bp-72
	int32_t v5 = &v4; // 0x54fc4
	g34 = v5;
	g37 = 48;
	memset();
	v4 = 48;
	g36 = 0;
	g34 = 4;
	function_eb500(4);
	g34 = v5;
	int32_t v6;
	if (function_eb518(v5) % 0x10000 == 0) {
		// 0x55030
		app_fatal(*(int32_t *)(v6 - 0x6200));
		// branch -> 0x55038
	}
	int32_t v7 = g33; // 0x55040
	g34 = v7;
	g37 = v7;
	int32_t v8 = function_eb530(v7, v7, 0, 0, 0, 640, 480, 0, *(int32_t *)g35, 0); // 0x5506c
	g33 = v8;
	int32_t v9 = v8; // 0x55084
	if (v8 == 0) {
		// 0x5507c
		app_fatal(*(int32_t *)(v6 - 0x6204));
		v9 = g33;
		// branch -> 0x55084
	}
	// 0x55084
	g34 = v9;
	function_eb158(v9);
	int32_t v10 = g33; // 0x55094
	g34 = v10;
	function_eb548(v10);
	BlackPalette(function_27604(g33));
	int32_t result = init_archives(snd_init(g33)); // 0x550b4
	g36 = v1;
	g35 = v2;
	g33 = v3;
	return result;
}

// Address range: 0x550d4 - 0x55128
int32_t init_activate_window(int32_t a1, int32_t a2)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7210); // 0x550dc
	*(int32_t *)v1 = a2;
	int32_t v2 = function_265a4(a2); // 0x550f4
	int32_t result;                  // 0x55124
	if (*(int32_t *)v1 != 0) {
		int32_t v3 = *(int32_t *)(g23 - 0x76bc); // 0x55104
		*(int32_t *)v3 = 255;
		result = ResetPal(v3);
		// branch -> 0x55114
	} else {
		result = v2;
	}
	// 0x55114
	return result;
}

// Address range: 0x55128 - 0x55250
int32_t MainWndProc(void)
{
	int32_t v1 = g37; // 0x55130
	g32 = v1;
	int32_t v2 = *(int32_t *)(g23 - 0x780c); // 0x55134
	g36 = v2;
	int32_t v3 = g34; // 0x5513c
	g31 = v3;
	int32_t v4 = g38; // 0x55140
	g33 = v4;
	g35 = g39;
	if (v1 == 20) {
		// 0x551b4
		// branch -> 0x5523c
		// 0x5523c
		return 0;
	}
	// 0x55154
	int32_t v5; // 0x55224
	if (v1 > 20) {
		// 0x55188
		int32_t result; // 0x5524c
		if (v1 == 783) {
			// 0x551dc
			function_eb4d0();
			result = 1;
			// branch -> 0x5523c
		} else {
			// 0x55190
			if (v1 > 783) {
				// 0x551a0
				if (v1 == 785) {
					// 0x551ec
					if (v4 != v3) {
						// 0x551f4
						function_eb4d0();
						// branch -> 0x55224
					}
				}
			} else {
				// 0x55194
				if (v1 == 28) {
					// 0x551cc
					init_activate_window(v3, v4);
					// branch -> 0x55224
				}
			}
			// 0x55224
			v5 = g31;
			g34 = v5;
			result = function_eaf30(v5, g32, g33, g35);
			// branch -> 0x5523c
		}
		// 0x5523c
		return result;
	}
	// 0x55158
	int32_t result2; // 0x55234
	if (v1 != 15) {
		// 0x55160
		if (v1 > 15) {
			// 0x5517c
			if (v1 == 16) {
				// 0x551ac
				// branch -> 0x5523c
				// 0x5523c
				return 0;
			}
			// 0x55224
			v5 = g31;
			g34 = v5;
			result2 = function_eaf30(v5, g32, g33, g35);
			// branch -> 0x5523c
			// 0x5523c
			return result2;
		}
		// 0x55164
		if (v1 == 2) {
			// 0x55208
			init_cleanup(1);
			*(int32_t *)g36 = 0;
			g34 = 0;
			function_eb4e8(0);
			// branch -> 0x55224
		} else {
			// 0x5516c
			if (v1 <= 2) {
				// 0x55170
				if (v1 > 0) {
					// 0x55200
					*(int32_t *)v2 = v3;
					// branch -> 0x55224
				}
			}
		}
		// 0x55224
		v5 = g31;
		g34 = v5;
		result2 = function_eaf30(v5, g32, g33, g35);
		// branch -> 0x5523c
		// 0x5523c
		return result2;
	}
	// 0x551bc
	*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
	// branch -> 0x55224
	// 0x55224
	v5 = g31;
	g34 = v5;
	result2 = function_eaf30(v5, g32, g33, g35);
	// branch -> 0x5523c
	// 0x5523c
	return result2;
}

// Address range: 0x55250 - 0x55288
int32_t WindowProc(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x4e3c); // 0x5525c
	g15 = v1;
	int32_t result; // 0x55284
	if (v1 == 0) {
		// 0x55274
		result = MainWndProc();
		// branch -> 0x55278
	} else {
		// 0x55268
		result = CurrentProc();
		// branch -> 0x55278
	}
	// 0x55278
	return result;
}

// Address range: 0x55288 - 0x552ec
int32_t SetWindowProc(int32_t a1)
{
	int32_t *v1 = (int32_t *)(g23 - 0x4e3c); // 0x5529c
	*v1 = a1;
	if (*(int32_t *)(g23 - 0x4e3c) == *(int32_t *)(g23 - 0x75a0)) {
		// 0x552b0
		int32_t v2;       // bp-24
		int32_t v3 = &v2; // 0x552b0
		g34 = v3;
		function_eb908(v3);
		int32_t v4;
		*(int32_t *)*(int32_t *)(v4 - 0x76a8) = v2;
		// branch -> 0x552d4
	}
	// 0x552d4
	return *v1;
}
