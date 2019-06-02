// Address range: 0x343f4 - 0x34478
int32_t FreeGameMem(void)
{
	int32_t v1 = g36; // 0x343f4
	g36 = *(int32_t *)(g23 - 0x7568);
	int32_t v2 = g35; // 0x34400
	g35 = *(int32_t *)(g23 - 0x7578);
	music_stop();
	function_c9acc(*(int32_t *)g36);
	MemFreeDbg((int32_t *)g36);
	MemFreeDbg((int32_t *)*(int32_t *)(g23 - 0x756c));
	MemFreeDbg((int32_t *)*(int32_t *)(g23 - 0x7570));
	MemFreeDbg((int32_t *)*(int32_t *)(g23 - 0x7574));
	int32_t *v3 = (int32_t *)g35; // 0x3443c
	g34 = *v3;
	*v3 = 0;
	int32_t v4 = mem_free_dbg(); // 0x34448
	g34 = v4;
	int32_t v5 = FreeMissiles(v4); // 0x3444c
	g34 = v5;
	int32_t v6 = FreeObjectGFX(FreeMonsters(v5)); // 0x34454
	g34 = v6;
	int32_t result = FreeTownerGFX(FreeEffects(v6)); // 0x3445c
	g36 = v1;
	g35 = v2;
	return result;
}

// Address range: 0x34478 - 0x34768
int32_t start_game(int32_t a1)
{
	int32_t v1 = g10; // 0x3447c
	g20 = a1;
	g21 = *(int32_t *)(g23 - 0x7598);
	g22 = *(int32_t *)(g23 - 0x7594);
	g24 = *(int32_t *)(g23 - 0x768c);
	g34 = 0x6200;
	g25 = *(int32_t *)(g23 - 0x7684);
	g26 = *(int32_t *)(g23 - 0x7630);
	g27 = *(int32_t *)(g23 - 0x767c);
	g28 = *(int32_t *)(g23 - 0x7680);
	g29 = *(int32_t *)(g23 - 0x779c);
	g30 = *(int32_t *)(g23 - 0x7590);
	g31 = *(int32_t *)(g23 - 0x758c);
	g32 = *(int32_t *)(g23 - 0x7588);
	g33 = *(int32_t *)(g23 - 0x7584);
	g35 = *(int32_t *)(g23 - 0x7580);
	g36 = *(int32_t *)(g23 - 0x757c);
	int32_t v2 = DiabloAllocPtr(); // 0x344c8
	*(int32_t *)g36 = v2;
	g19 = (int32_t) "; ";
	g34 = (int32_t) "; " + 0x2000;
	int32_t v3 = DiabloAllocPtr(); // 0x344d8
	*(int32_t *)g35 = v3;
	g34 = g19 + 0x2000;
	int32_t v4 = DiabloAllocPtr(); // 0x344e4
	*(int32_t *)g33 = v4;
	g34 = 0x3100;
	int32_t v5 = DiabloAllocPtr(); // 0x344f0
	*(int32_t *)g32 = v5;
	g34 = 0x3100;
	int32_t v6 = DiabloAllocPtr(); // 0x344fc
	*(int32_t *)g31 = v6;
	g34 = 0x3100;
	int32_t v7 = DiabloAllocPtr(); // 0x34508
	*(int32_t *)g30 = v7;
	g34 = 0x3100;
	int32_t v8 = DiabloAllocPtr(); // 0x34514
	*(int32_t *)g29 = v8;
	g34 = 0x3100;
	int32_t v9 = DiabloAllocPtr(); // 0x34520
	*(int32_t *)g28 = v9;
	g34 = 0x6200;
	int32_t v10 = DiabloAllocPtr(); // 0x3452c
	*(int32_t *)g27 = v10;
	g34 = 0x3100;
	int32_t v11 = DiabloAllocPtr(); // 0x34538
	*(int32_t *)g26 = v11;
	g34 = 0x3100;
	int32_t v12 = DiabloAllocPtr(); // 0x34544
	*(int32_t *)g25 = v12;
	g34 = 0x3100;
	int32_t v13 = DiabloAllocPtr(); // 0x34550
	*(int32_t *)g24 = v13;
	g34 = 0x3100;
	int32_t v14 = DiabloAllocPtr(); // 0x3455c
	*(int32_t *)g22 = v14;
	g34 = 0x3100;
	int32_t v15 = DiabloAllocPtr(); // 0x34568
	*(int32_t *)g21 = v15;
	int32_t v16;
	int32_t v17;    // 0x34724
	int32_t v18;    // 0x34734
	int32_t v19;    // 0x34738
	int32_t result; // 0x34750
	int32_t v20;    // 0x34708
	int32_t v21;    // 0x34710
	int32_t v22;    // 0x34720
	if (*(int32_t *)g35 == 0 || *(int32_t *)g33 == 0) {
		// 0x34618
		g34 = 0;
		function_ebc08(0);
		// branch -> 0x34624
		// 0x34624
		g34 = *(int32_t *)g36;
		memset();
		g36 = (int32_t) "; ";
		g34 = *(int32_t *)g35;
		memset();
		g34 = *(int32_t *)g33;
		memset();
		g34 = *(int32_t *)g32;
		memset();
		g34 = *(int32_t *)g31;
		memset();
		g34 = *(int32_t *)g30;
		memset();
		g34 = *(int32_t *)g29;
		memset();
		g34 = *(int32_t *)g28;
		memset();
		g34 = *(int32_t *)g27;
		memset();
		g34 = *(int32_t *)g26;
		memset();
		g34 = *(int32_t *)g25;
		memset();
		g34 = *(int32_t *)g24;
		memset();
		g34 = *(int32_t *)g22;
		memset();
		g34 = *(int32_t *)g21;
		memset();
		v20 = *(int32_t *)(v16 - 0x759c);
		v21 = *(int32_t *)(v16 - 0x766c);
		*(char *)v20 = 0;
		*(int32_t *)v21 = 1;
		v22 = function_323d4(v21, v20);
		v17 = function_ca930(v22);
		LoadDebugGFX(v17);
		music_stop();
		v18 = ShowProgress(g20);
		v19 = gmenu_init_menu(v18);
		function_3250c(v19);
		*(int32_t *)(g23 - 0x4f54) = g21;
		*(char *)*(int32_t *)(g23 - 0x7560) = (char)g21;
		result = track_repeat_walk(0);
		g10 = v1;
		return result;
	}
	int32_t v23 = g36; // 0x34588
	if (*(int32_t *)v23 == 0 || *(int32_t *)g32 == 0 || *(int32_t *)g31 == 0 || *(int32_t *)g30 == 0 || *(int32_t *)g29 == 0 || *(int32_t *)g28 == 0 || *(int32_t *)g27 == 0 || *(int32_t *)g26 == 0 || *(int32_t *)g25 == 0 || *(int32_t *)g24 == 0 || *(int32_t *)g22 == 0) {
		// 0x34618
		g34 = 0;
		function_ebc08(0);
		// branch -> 0x34624
		// 0x34624
		g34 = *(int32_t *)g36;
		memset();
		g36 = (int32_t) "; ";
		g34 = *(int32_t *)g35;
		memset();
		g34 = *(int32_t *)g33;
		memset();
		g34 = *(int32_t *)g32;
		memset();
		g34 = *(int32_t *)g31;
		memset();
		g34 = *(int32_t *)g30;
		memset();
		g34 = *(int32_t *)g29;
		memset();
		g34 = *(int32_t *)g28;
		memset();
		g34 = *(int32_t *)g27;
		memset();
		g34 = *(int32_t *)g26;
		memset();
		g34 = *(int32_t *)g25;
		memset();
		g34 = *(int32_t *)g24;
		memset();
		g34 = *(int32_t *)g22;
		memset();
		g34 = *(int32_t *)g21;
		memset();
		v20 = *(int32_t *)(v16 - 0x759c);
		v21 = *(int32_t *)(v16 - 0x766c);
		*(char *)v20 = 0;
		*(int32_t *)v21 = 1;
		v22 = function_323d4(v21, v20);
		v17 = function_ca930(v22);
		LoadDebugGFX(v17);
		music_stop();
		v18 = ShowProgress(g20);
		v19 = gmenu_init_menu(v18);
		function_3250c(v19);
		*(int32_t *)(g23 - 0x4f54) = g21;
		*(char *)*(int32_t *)(g23 - 0x7560) = (char)g21;
		result = track_repeat_walk(0);
		g10 = v1;
		return result;
	}
	// 0x3460c
	if (*(int32_t *)g21 != 0) {
		// 0x34624
		g34 = *(int32_t *)v23;
		memset();
		g36 = (int32_t) "; ";
		g34 = *(int32_t *)g35;
		memset();
		g34 = *(int32_t *)g33;
		memset();
		g34 = *(int32_t *)g32;
		memset();
		g34 = *(int32_t *)g31;
		memset();
		g34 = *(int32_t *)g30;
		memset();
		g34 = *(int32_t *)g29;
		memset();
		g34 = *(int32_t *)g28;
		memset();
		g34 = *(int32_t *)g27;
		memset();
		g34 = *(int32_t *)g26;
		memset();
		g34 = *(int32_t *)g25;
		memset();
		g34 = *(int32_t *)g24;
		memset();
		g34 = *(int32_t *)g22;
		memset();
		g34 = *(int32_t *)g21;
		memset();
		v20 = *(int32_t *)(v16 - 0x759c);
		v21 = *(int32_t *)(v16 - 0x766c);
		*(char *)v20 = 0;
		*(int32_t *)v21 = 1;
		v22 = function_323d4(v21, v20);
		v17 = function_ca930(v22);
		LoadDebugGFX(v17);
		music_stop();
		v18 = ShowProgress(g20);
		v19 = gmenu_init_menu(v18);
		function_3250c(v19);
		*(int32_t *)(g23 - 0x4f54) = g21;
		*(char *)*(int32_t *)(g23 - 0x7560) = (char)g21;
		result = track_repeat_walk(0);
		g10 = v1;
		return result;
	}
	// 0x34618
	g34 = 0;
	function_ebc08(0);
	// branch -> 0x34624
	// 0x34624
	g34 = *(int32_t *)g36;
	memset();
	g36 = (int32_t) "; ";
	g34 = *(int32_t *)g35;
	memset();
	g34 = *(int32_t *)g33;
	memset();
	g34 = *(int32_t *)g32;
	memset();
	g34 = *(int32_t *)g31;
	memset();
	g34 = *(int32_t *)g30;
	memset();
	g34 = *(int32_t *)g29;
	memset();
	g34 = *(int32_t *)g28;
	memset();
	g34 = *(int32_t *)g27;
	memset();
	g34 = *(int32_t *)g26;
	memset();
	g34 = *(int32_t *)g25;
	memset();
	g34 = *(int32_t *)g24;
	memset();
	g34 = *(int32_t *)g22;
	memset();
	g34 = *(int32_t *)g21;
	memset();
	v20 = *(int32_t *)(v16 - 0x759c);
	v21 = *(int32_t *)(v16 - 0x766c);
	*(char *)v20 = 0;
	*(int32_t *)v21 = 1;
	v22 = function_323d4(v21, v20);
	v17 = function_ca930(v22);
	LoadDebugGFX(v17);
	music_stop();
	v18 = ShowProgress(g20);
	v19 = gmenu_init_menu(v18);
	function_3250c(v19);
	*(int32_t *)(g23 - 0x4f54) = g21;
	*(char *)*(int32_t *)(g23 - 0x7560) = (char)g21;
	result = track_repeat_walk(0);
	g10 = v1;
	return result;
}

// Address range: 0x34768 - 0x348bc
int32_t free_game(int32_t a1)
{
	// 0x34768
	g36 = *(int32_t *)(g23 - 0x7598);
	g32 = *(int32_t *)(g23 - 0x768c);
	g33 = *(int32_t *)(g23 - 0x7684);
	g35 = *(int32_t *)(g23 - 0x7630);
	g24 = *(int32_t *)(g23 - 0x7590);
	g25 = *(int32_t *)(g23 - 0x758c);
	int32_t *v1 = (int32_t *)*(int32_t *)(g23 - 0x7580); // 0x347b0
	int32_t v2 = *v1;                                    // 0x347b0
	g34 = v2;
	if (v2 != 0) {
		// 0x347bc
		*v1 = 0;
		mem_free_dbg();
		// branch -> 0x347c8
	}
	int32_t *v3 = (int32_t *)*(int32_t *)(g23 - 0x7584); // 0x347c8
	g34 = *v3;
	int32_t v4 = 0; // r26
	*v3 = 0;
	mem_free_dbg();
	int32_t *v5 = (int32_t *)*(int32_t *)(g23 - 0x757c); // 0x347d8
	g34 = *v5;
	*v5 = v4;
	mem_free_dbg();
	int32_t *v6 = (int32_t *)*(int32_t *)(g23 - 0x7588); // 0x347e4
	g34 = *v6;
	*v6 = v4;
	mem_free_dbg();
	int32_t *v7 = (int32_t *)g25; // 0x347f0
	g34 = *v7;
	*v7 = v4;
	mem_free_dbg();
	int32_t *v8 = (int32_t *)g24; // 0x347fc
	g34 = *v8;
	*v8 = v4;
	mem_free_dbg();
	int32_t *v9 = (int32_t *)*(int32_t *)(g23 - 0x779c); // 0x34808
	g34 = *v9;
	*v9 = v4;
	mem_free_dbg();
	int32_t *v10 = (int32_t *)*(int32_t *)(g23 - 0x7680); // 0x34814
	g34 = *v10;
	*v10 = v4;
	mem_free_dbg();
	int32_t *v11 = (int32_t *)*(int32_t *)(g23 - 0x767c); // 0x34820
	g34 = *v11;
	*v11 = v4;
	mem_free_dbg();
	int32_t *v12 = (int32_t *)g35; // 0x3482c
	g34 = *v12;
	*v12 = v4;
	mem_free_dbg();
	int32_t *v13 = (int32_t *)g33; // 0x34838
	g34 = *v13;
	*v13 = v4;
	mem_free_dbg();
	int32_t *v14 = (int32_t *)g32; // 0x34844
	g34 = *v14;
	*v14 = v4;
	mem_free_dbg();
	int32_t *v15 = (int32_t *)*(int32_t *)(g23 - 0x7594); // 0x34850
	g34 = *v15;
	*v15 = v4;
	mem_free_dbg();
	int32_t *v16 = (int32_t *)g36; // 0x3485c
	g34 = *v16;
	*v16 = v4;
	int32_t v17 = FreeControlPan(mem_free_dbg()); // 0x34868
	int32_t v18 = FreeGMenu(FreeInvGFX(v17));     // 0x34870
	FreeStoreMem(FreeQuestText(v18));
	g21 = 0;
	int32_t v19 = FreePlayerGFX(0); // 0x34884
	int32_t v20 = g21 + 1;          // 0x34888
	g21 = v20;
	// branch -> 0x34880
	while (v20 < 4) {
		// 0x34880
		v19 = FreePlayerGFX(v20);
		v20 = g21 + 1;
		g21 = v20;
		// continue -> 0x34880
	}
	int32_t v21 = FreeCursor(FreeItemGFX(v19)); // 0x34898
	FreeDebugGFX(FreeLightTable(v21));
	int32_t result = FreeGameMem(); // 0x348a4
	return result;
}

// Address range: 0x348bc - 0x34ab4
int32_t run_game_loop(void)
{
	int32_t v1 = g10; // 0x348c0
	nthread_ignore_mutex(1);
	start_game(g34);
	g33 = SetWindowProc(*(int32_t *)(g23 - 0x75a0));
	msg_process_net_packets(control_update_life_mana());
	int32_t v2 = 1;                          // r27
	int32_t v3 = *(int32_t *)(g23 - 0x75a8); // 0x3490c
	*(int32_t *)g30 = 1;
	*(int32_t *)v3 = v2;
	*(int32_t *)g29 = v2;
	*(int32_t *)g35 = 255;
	DrawAndBlit(v3);
	PaletteFadeIn(8);
	*(int32_t *)g35 = g32;
	*(int32_t *)g28 = g31;
	nthread_ignore_mutex(0);
	g34 = function_284b4(1);
	int32_t v4;     // 0x34a64
	int32_t result; // 0x34ab0
	int32_t v5;     // 0x34a80
	int32_t v6;     // 0x34a84
	char *v7;       // 0x34a88
	int32_t v8;     // 0x34a40
	if (*(int32_t *)g30 == 0) {
	lab_0x34a38:
		// 0x34a38
		function_284b4(0);
		v8 = *(int32_t *)(g23 - 0x77f0);
		if ((*(char *)v8 || 1) != 1) {
			// 0x34a50
			pfile_write_hero(v8);
			// branch -> 0x34a54
		}
		// 0x34a54
		pfile_flush_W();
		PaletteFadeOut(8);
		g34 = 0;
		v4 = SetCursor_();
		ClearScreenBuffer(v4);
		*(int32_t *)g35 = 255;
		scrollrt_draw_game_screen(1);
		v5 = SetWindowProc(g33);
		v6 = free_game(v5);
		v7 = (char *)g36;
		if (*v7 != 0) {
			// 0x34a94
			*v7 = 0;
			result = DoEnding(v6);
			// branch -> 0x34aa0
		} else {
			result = v6;
		}
		// 0x34aa0
		g10 = v1;
		return result;
	}
	// 0x3494c
	int32_t v9;        // bp-68
	int32_t v10 = &v9; // 0x34950
	                   // branch -> 0x3494c
lab_0x3494c:
	while (true) {
		// 0x3494c
		diablo_color_cyc_logic();
		g34 = v10;
		if (PeekMessage(v10, 0, 0, 0, 0) != 0) {
			while (true) {
				// 0x349ac
				g34 = v10;
				int32_t v11 = PeekMessage(v10, 0, 0, 0, 1); // 0x349c0
				g34 = v11;
				if (v11 != 0) {
					// 0x34978
					int32_t v12;
					if (v12 == 18) {
						// 0x34984
						*(int32_t *)g29 = 0;
						*(int32_t *)g30 = 0;
						// branch -> 0x349d0
						// 0x349d0
						if (*(int32_t *)g30 != 0) {
						lab_0x349e0:;
							int32_t v13 = nthread_has_500ms_passed(0); // 0x349e4
							g34 = v13;
							int32_t v14; // 0x349f4
							if (v13 == 0) {
								// 0x349e0
								v14 = 0;
								// branch -> 0x349f4
							} else {
								// 0x349f0
								v14 = 1;
								// branch -> 0x349f4
							}
							// 0x349f4
							if (v14 % 256 != 0) {
								goto lab_0x34a10_2;
							}
						lab_0x34a2c:
							// 0x34a2c
							if (*(int32_t *)g30 == 0) {
								// break (via goto) -> 0x34a38
								goto lab_0x34a38;
							}
							// continue (via goto) -> 0x3494c
							goto lab_0x3494c;
						}
					lab_0x349f4:
						goto lab_0x34a2c;
						goto lab_0x34a10_2;
					} else {
						// 0x34994
						g34 = v10;
						TranslateMessage(v10);
						g34 = v10;
						DispatchMessage(v10);
						// branch -> 0x349ac
						continue;
					}
				}
				// 0x349d0
				if (*(int32_t *)g30 == 0) {
					goto lab_0x349f4;
				}
				goto lab_0x349e0;
			}
			int32_t v15 = 0; // r3
			v15 = function_284b4(0);
			int32_t v16 = g23; // 0x34a40
			v8 = *(int32_t *)(v16 - 0x77f0);
			v15 = v8;
			unsigned char v17 = *(char *)v8; // 0x34a44
			if ((v17 || 1) != 1) {
				// 0x34a50
				v15 = pfile_write_hero(v8);
				// branch -> 0x34a54
			}
			// 0x34a54
			pfile_flush_W();
			v15 = 8;
			PaletteFadeOut(8);
			g34 = 0;
			v4 = SetCursor_();
			v15 = v4;
			function_b336c(v4);
			int32_t v18 = g35; // 0x34a70
			*(int32_t *)v18 = 255;
			v15 = 1;
			scrollrt_draw_game_screen(1);
			int32_t v19 = g33; // 0x34a7c
			v15 = v19;
			v5 = SetWindowProc(v19);
			v15 = v5;
			v6 = free_game(v5);
			v15 = v6;
			int32_t v20 = g36; // 0x34a88
			v7 = (char *)v20;
			unsigned char v21 = *v7; // 0x34a88
			if (v21 != 0) {
				// 0x34a94
				*v7 = 0;
				int32_t v22 = v15;           // 0x34a9c
				int32_t v23 = DoEnding(v22); // 0x34a9c
				v15 = v23;
				result = v23;
				// branch -> 0x34aa0
			} else {
				result = v6;
			}
			// 0x34aa0
			g10 = v1;
			return result;
		}
		int32_t v24 = nthread_has_500ms_passed(0); // 0x34a04
		g34 = v24;
		if (v24 != 0) {
		lab_0x34a10_2:
			// 0x34a10
			function_90ddc();
			int32_t v25 = game_loop(*(int32_t *)g28); // 0x34a18
			g34 = v25;
			int32_t v26 = function_cffb4(v25); // 0x34a1c
			*(int32_t *)g28 = 0;
			g34 = DrawAndBlit(v26);
			// branch -> 0x34a2c
		}
		// 0x34a2c
		if (*(int32_t *)g30 == 0) {
			// break -> 0x34a38
			break;
		}
		// continue -> 0x3494c
	}
	// 0x34a38
	function_284b4(0);
	v8 = *(int32_t *)(g23 - 0x77f0);
	if ((*(char *)v8 || 1) != 1) {
		// 0x34a50
		pfile_write_hero(v8);
		// branch -> 0x34a54
	}
	// 0x34a54
	pfile_flush_W();
	PaletteFadeOut(8);
	g34 = 0;
	v4 = SetCursor_();
	function_b336c(v4);
	*(int32_t *)g35 = 255;
	scrollrt_draw_game_screen(1);
	v5 = SetWindowProc(g33);
	v6 = free_game(v5);
	v7 = (char *)g36;
	if (*v7 != 0) {
		// 0x34a94
		*v7 = 0;
		result = DoEnding(v6);
		// branch -> 0x34aa0
	} else {
		result = v6;
	}
	// 0x34aa0
	g10 = v1;
	return result;
}

// Address range: 0x34ab4 - 0x34bac
int32_t StartGame(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0x34ab8
	g29 = a2;
	g32 = *(int32_t *)(g23 - 0x75b8);
	*(char *)*(int32_t *)(g23 - 0x75b4) = 1;
	// branch -> 0x34ae8
	while (true) {
		// 0x34ae8
		g36 = 0;
		int32_t v2 = 0; // bp-40
		*(int32_t *)g32 = 0;
		int32_t v3 = NetInit(g29, &v2); // 0x34afc
		g34 = v3;
		if (v3 == 0) {
			// 0x34b08
			*(int32_t *)g35 = __asm_rlwinm(llvm_ctlz_i32(v2, true), 27, 24, 31);
			// branch -> 0x34b8c
			// 0x34b8c
			function_eb1d0();
			g10 = v1;
			return *(int32_t *)g35;
		}
		// 0x34b1c
		*(char *)g33 = (char)g36;
		if (g28 == 0) {
			// 0x34b28
			if (*(int32_t *)g31 != 0) {
			lab_0x34b48:;
				// 0x34b48
				int32_t v4;
				if (*(int32_t *)g31 != 0) {
					// 0x34b54
					if (*(int32_t *)g32 != 0) {
						v4 = 1035;
					lab_0x34b6c:
						// 0x34b6c
						g34 = v4;
						int32_t v5 = run_game_loop(); // 0x34b6c
						g34 = v5;
						NetClose(v5);
						g34 = pfile_create_player_description(0, 0);
						if (*(int32_t *)g35 == 0) {
							// break -> 0x34b8c
							break;
						}
						// continue -> 0x34ae8
						continue;
					}
				}
				// 0x34b68
				v4 = 1034;
				// branch -> 0x34b6c
				goto lab_0x34b6c;
			}
		}
		int32_t v6 = InitLevels(); // 0x34b34
		InitPortals(InitQuests(v6));
		InitDungMsgs(*(int32_t *)g30);
		// branch -> 0x34b48
		goto lab_0x34b48;
	}
	// 0x34b8c
	function_eb1d0();
	g10 = v1;
	return *(int32_t *)g35;
}

// Address range: 0x34bac - 0x34da8
int32_t diablo_init_screen(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77b8); // r31
	int32_t v2;                              // bp-16
	int32_t v3 = &v2;                        // 0x34bc4
	g34 = v3;
	function_eb908(v3);
	int32_t v4;
	*(int32_t *)*(int32_t *)(v4 - 0x76a8) = v2;
	int32_t v5 = 0;                          // r11
	int32_t v6 = *(int32_t *)(g23 - 0x7698); // r12
	int32_t v7 = 0;                          // r30
	*(int32_t *)(v1 + 8) = v5;
	*(int32_t *)(v1 + 12) = v5;
	*(int32_t *)v1 = v5;
	*(int32_t *)(v1 + 4) = v5;
	*(int32_t *)(v1 + 16) = v5;
	*(int32_t *)v6 = v5;
	int32_t v8 = v7; // 0x34c1c
	*(int32_t *)(v6 + 4) = 768 * (v7 + 1);
	int32_t v9 = v7; // 0x34c30
	*(int32_t *)(v6 + 8) = 768 * v8 + 1536;
	int32_t v10 = v7; // 0x34c40
	*(int32_t *)(v6 + 12) = 768 * (v8 + 3);
	v5 += 0x1800;
	*(int32_t *)(v6 + 16) = 768 * (v8 + 4);
	int32_t v11 = v7; // 0x34c60
	*(int32_t *)(v6 + 20) = 768 * (v9 + 5);
	int32_t v12 = v7; // 0x34c70
	*(int32_t *)(v6 + 24) = 768 * (v9 + 6);
	*(int32_t *)(v6 + 28) = 768 * (v10 + 7);
	*(int32_t *)(v6 + 32) = v5;
	v5 += 0x1800;
	*(int32_t *)(v6 + 36) = 768 * (v10 + 9);
	*(int32_t *)(v6 + 40) = 768 * (v7 + 10);
	*(int32_t *)(v6 + 44) = 768 * (v11 + 11);
	*(int32_t *)(v6 + 48) = 768 * (v11 + 12);
	*(int32_t *)(v6 + 52) = 768 * (v12 + 13);
	*(int32_t *)(v6 + 56) = 768 * (v12 + 14);
	*(int32_t *)(v6 + 60) = 768 * (v7 + 15);
	int32_t v13 = v7; // 0x34ce8
	*(int32_t *)(v6 + 64) = v5;
	v5 += 0x1800;
	*(int32_t *)(v6 + 68) = 768 * (v7 + 17);
	int32_t v14 = v7; // 0x34cfc
	*(int32_t *)(v6 + 72) = 768 * (v7 + 18);
	int32_t v15 = v7; // 0x34d08
	*(int32_t *)(v6 + 76) = 768 * (v7 + 19);
	int32_t v16 = v7; // 0x34d14
	*(int32_t *)(v6 + 80) = 768 * (v7 + 20);
	int32_t v17 = v7; // 0x34d20
	*(int32_t *)(v6 + 84) = 768 * (v7 + 21);
	int32_t v18 = v7;      // 0x34d2c
	int32_t v19 = v7 + 23; // 0x34d30
	*(int32_t *)(v6 + 88) = 768 * (v7 + 22);
	int32_t v20 = v7;       // 0x34d38
	int32_t v21 = v20 + 31; // 0x34d38
	v7 = v20 + 32;
	*(int32_t *)(v6 + 92) = 768 * v19;
	*(int32_t *)(v6 + 96) = v5;
	v5 += 0x1800;
	*(int32_t *)(v6 + 100) = 768 * (v13 + 25);
	*(int32_t *)(v6 + 104) = 768 * (v14 + 26);
	*(int32_t *)(v6 + 108) = 768 * (v15 + 27);
	*(int32_t *)(v6 + 112) = 768 * (v16 + 28);
	*(int32_t *)(v6 + 116) = 768 * (v17 + 29);
	*(int32_t *)(v6 + 120) = 768 * (v18 + 30);
	*(int32_t *)(v6 + 124) = 768 * v21;
	int32_t v22 = v6 + 128; // 0x34d84
	v6 = v22;
	int32_t v23 = 31; // 0x34d88
	// branch -> 0x34c10
	while (v23 != 0) {
		// 0x34c10
		*(int32_t *)v22 = v5;
		v8 = v7;
		*(int32_t *)(v6 + 4) = 768 * (v7 + 1);
		v9 = v7;
		*(int32_t *)(v6 + 8) = 768 * v8 + 1536;
		v10 = v7;
		*(int32_t *)(v6 + 12) = 768 * (v8 + 3);
		v5 += 0x1800;
		*(int32_t *)(v6 + 16) = 768 * (v8 + 4);
		v11 = v7;
		*(int32_t *)(v6 + 20) = 768 * (v9 + 5);
		v12 = v7;
		*(int32_t *)(v6 + 24) = 768 * (v9 + 6);
		*(int32_t *)(v6 + 28) = 768 * (v10 + 7);
		*(int32_t *)(v6 + 32) = v5;
		v5 += 0x1800;
		*(int32_t *)(v6 + 36) = 768 * (v10 + 9);
		*(int32_t *)(v6 + 40) = 768 * (v7 + 10);
		*(int32_t *)(v6 + 44) = 768 * (v11 + 11);
		*(int32_t *)(v6 + 48) = 768 * (v11 + 12);
		*(int32_t *)(v6 + 52) = 768 * (v12 + 13);
		*(int32_t *)(v6 + 56) = 768 * (v12 + 14);
		*(int32_t *)(v6 + 60) = 768 * (v7 + 15);
		v13 = v7;
		*(int32_t *)(v6 + 64) = v5;
		v5 += 0x1800;
		*(int32_t *)(v6 + 68) = 768 * (v7 + 17);
		v14 = v7;
		*(int32_t *)(v6 + 72) = 768 * (v7 + 18);
		v15 = v7;
		*(int32_t *)(v6 + 76) = 768 * (v7 + 19);
		v16 = v7;
		*(int32_t *)(v6 + 80) = 768 * (v7 + 20);
		v17 = v7;
		*(int32_t *)(v6 + 84) = 768 * (v7 + 21);
		v18 = v7;
		v19 = v7 + 23;
		*(int32_t *)(v6 + 88) = 768 * (v7 + 22);
		v20 = v7;
		v21 = v20 + 31;
		v7 = v20 + 32;
		*(int32_t *)(v6 + 92) = 768 * v19;
		*(int32_t *)(v6 + 96) = v5;
		v5 += 0x1800;
		*(int32_t *)(v6 + 100) = 768 * (v13 + 25);
		*(int32_t *)(v6 + 104) = 768 * (v14 + 26);
		*(int32_t *)(v6 + 108) = 768 * (v15 + 27);
		*(int32_t *)(v6 + 112) = 768 * (v16 + 28);
		*(int32_t *)(v6 + 116) = 768 * (v17 + 29);
		*(int32_t *)(v6 + 120) = 768 * (v18 + 30);
		*(int32_t *)(v6 + 124) = 768 * v21;
		v22 = v6 + 128;
		v6 = v22;
		v23--;
		// continue -> 0x34c10
	}
	// 0x34d8c
	return ClrDiabloMsg(v21);
}

// Address range: 0x34da8 - 0x34f40
int32_t WinMain(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g10;                        // 0x34dac
	int32_t v2 = *(int32_t *)(g23 - 0x75c0); // 0x34db0
	g35 = v2;
	g36 = *(int32_t *)(g23 - 0x780c);
	g33 = *(int32_t *)(g23 - 0x75c8);
	g32 = a3;
	g34 = v2;
	function_eb038(v2);
	int32_t v3 = g35; // 0x34ddc
	g34 = v3;
	function_eb050(v3);
	g34 = 0;
	int32_t v4;
	*(int32_t *)*(int32_t *)(v4 - 0x75c4) = a1;
	g34 = ShowCursor(0);
	int32_t v5 = GetTickCount(); // 0x34dfc
	g34 = v5;
	function_eb098(v5);
	int32_t v6 = function_4d330(); // 0x34e0c
	g34 = v6;
	int32_t v7 = function_eb0b0(v6); // 0x34e10
	g34 = v7;
	function_343c0(v7);
	int32_t v8 = init_create_window(g32);                // 0x34e20
	int32_t v9 = function_4cbac(diablo_init_screen(v8)); // 0x34e28
	g34 = v9;
	function_2653c(v9);
	g34 = 17;
	int32_t v10 = function_eb980(17); // 0x34e34
	if (__asm_rlwinm_(v10, 0, 16, 16) == 0) {
		// 0x34e44
		play_movie(*(int32_t *)(g23 - 0x63e0), 1);
		// branch -> 0x34e50
	}
	int32_t v11 = g33; // 0x34e58
	g34 = v11;
	int32_t v12;        // bp-36
	int32_t v13 = &v12; // 0x34e5c
	int32_t v14;        // bp-40
	int32_t v15 = &v14; // 0x34e64
	v12 = *(int32_t *)(g23 - 0x2300);
	v14 = 0;
	if (SRegLoadValue(v11, v13, 0, v15) == 0) {
		// 0x34e8c
		v14 = 1;
		// branch -> 0x34e94
	}
	// 0x34e94
	g34 = 17;
	int32_t v16 = function_eb980(17); // 0x34e98
	int32_t v17;                      // 0x34ec0
	int32_t v18;                      // 0x34ef8
	int32_t v19;                      // 0x34edc
	int32_t v20;                      // 0x34ef0
	int32_t v21;                      // 0x34efc
	int32_t v22;                      // 0x34f1c
	if (__asm_rlwinm_(v16, 0, 16, 16) != 0) {
		// 0x34ec0
		v17 = g33;
		g34 = v17;
		SRegSaveValue(v17, v13, 0, 0);
		g34 = 17;
		v19 = function_eb980(17);
		if (__asm_rlwinm_(v19, 0, 16, 16) == 0) {
			// 0x34eec
			v20 = UiTitleDialog(7);
			BlackPalette(v20);
			// branch -> 0x34ef8
		}
		// 0x34ef8
		v18 = mainmenu_loop();
		v21 = UiDestroy(v18);
		SaveGamma(v21);
		if (*(int32_t *)g36 != 0) {
			// 0x34f10
			g34 = 300;
			Sleep(300);
			v22 = *(int32_t *)g36;
			g34 = v22;
			DestroyWindow(v22);
			// branch -> 0x34f28
		}
		// 0x34f28
		g10 = v1;
		return FALSE;
	}
	// 0x34ea8
	if (v14 != 0) {
		// 0x34eb4
		play_movie(*(int32_t *)(g23 - 0x63e8), 1);
		// branch -> 0x34ec0
	}
	// 0x34ec0
	v17 = g33;
	g34 = v17;
	SRegSaveValue(v17, v13, 0, 0);
	g34 = 17;
	v19 = function_eb980(17);
	if (__asm_rlwinm_(v19, 0, 16, 16) == 0) {
		// 0x34eec
		v20 = UiTitleDialog(7);
		BlackPalette(v20);
		// branch -> 0x34ef8
	}
	// 0x34ef8
	v18 = mainmenu_loop();
	v21 = UiDestroy(v18);
	SaveGamma(v21);
	if (*(int32_t *)g36 != 0) {
		// 0x34f10
		g34 = 300;
		Sleep(300);
		v22 = *(int32_t *)g36;
		g34 = v22;
		DestroyWindow(v22);
		// branch -> 0x34f28
	}
	// 0x34f28
	g10 = v1;
	return FALSE;
}

// Address range: 0x34f40 - 0x35338
int32_t LeftMouseCmd(int32_t a1)
{
	// 0x34f40
	g36 = a1;
	g24 = g23 - 0x2444;
	g25 = *(int32_t *)(g23 - 0x774c);
	int32_t v1 = *(int32_t *)(g23 - 0x77a8); // 0x34f58
	g27 = *(int32_t *)(g23 - 0x775c);
	int32_t v2 = *(int32_t *)(g23 - 0x7750); // 0x34f60
	g28 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x765c); // 0x34f64
	g29 = v3;
	int32_t v4 = *(int32_t *)(g23 - 0x7658); // 0x34f68
	g30 = v4;
	int32_t v5 = *(int32_t *)(g23 - 0x7744); // 0x34f70
	g32 = v5;
	int32_t v6 = *(int32_t *)(g23 - 0x7748); // 0x34f74
	g33 = v6;
	int32_t v7 = *(int32_t *)(g23 - 0x77ac); // 0x34f78
	g35 = v7;
	if (*(char *)*(int32_t *)(g23 - 0x7794) == 0) {
		char v8 = *(char *)v6; // 0x34f90
		int32_t v9 = v2;       // 0x34fe0
		if (v8 != -1) {
			// 0x34fa0
			if (*(int32_t *)v5 == 1) {
				int32_t v10 = *(int32_t *)v4; // 0x34fcc
				NetSendCmdLocParam1(1, (char)v10, *(int32_t *)v3 % 256, (int32_t)v8);
				v9 = g28;
				// branch -> 0x34fe0
			} else {
				v9 = v2;
			}
		}
		// 0x34fe0
		if (*(int32_t *)v9 != -1) {
			// 0x34fec
			NetSendCmdLocParam1(1, 29, *(int32_t *)g30 % 256, *(int32_t *)g29 % 256);
			// branch -> 0x3500c
		}
		// 0x3500c
		if (*(char *)g33 == -1) {
			// 0x3501c
			if (*(int32_t *)g28 == -1) {
				// 0x35028
				if (*(char *)g27 == -1) {
					// 0x35038
					// branch -> 0x35324
					// 0x35324
					return 1;
				}
			}
		}
	} else {
		int32_t v11 = 0;                                               // r19
		int32_t v12 = *(int32_t *)(0x55ec * *(int32_t *)v7 + v1 + 56); // 0x35054
		g34 = v12 - *(int32_t *)v4;
		if (abs() <= 1) {
			int32_t v13 = v1 + 0x55ec * *(int32_t *)g35; // 0x35074
			g34 = *(int32_t *)(v13 + 60) - *(int32_t *)g29;
			if (abs() <= 1) {
				// 0x3508c
				v11 = 1;
				// branch -> 0x35090
			}
		}
		char v14 = *(char *)g33; // 0x35090
		if (v14 != -1) {
			// 0x350a4
			if (*(int32_t *)g32 == 1) {
				// 0x350b0
				if (g36 == 0) {
					int32_t v15 = *(int32_t *)g30; // 0x350d8
					NetSendCmdLocParam1(1, (char)v15, *(int32_t *)g29 % 256, (int32_t)v14);
					// branch -> 0x352d4
					// 0x352d4
					if (g36 == 0) {
						// 0x352dc
						if (*(char *)g33 == -1) {
							// 0x352ec
							if (*(char *)g25 == -1) {
								// 0x352fc
								if (*(int32_t *)g28 == -1) {
									// 0x35308
									if (*(char *)g27 == -1) {
										// 0x35318
										// branch -> 0x35324
										// 0x35324
										return 1;
									}
								}
							}
						}
					}
					// 0x35320
					// branch -> 0x35324
					// 0x35324
					return 0;
				}
			}
		}
		char v16 = *(char *)g25; // 0x350f0
		int32_t v17 = v16;       // 0x350f4
		int32_t v18 = g36;
		int32_t v19;  // 0x351ac
		int32_t v20;  // 0x351a0
		uint32_t v21; // 0x351d0
		char v22;     // 0x351e8
		uint32_t v23; // 0x3528c
		char v24;     // 0x352ac
		if (v16 != -1) {
			// 0x35100
			if (v18 == 0) {
				// 0x35128
				NetSendCmdLocParam1(1, (char)*(int32_t *)g30, *(int32_t *)g29 % 256, v17);
				// branch -> 0x352d4
				// 0x352d4
				if (g36 == 0) {
					// 0x352dc
					if (*(char *)g33 == -1) {
						// 0x352ec
						if (*(char *)g25 == -1) {
							// 0x352fc
							if (*(int32_t *)g28 == -1) {
								// 0x35308
								if (*(char *)g27 == -1) {
									// 0x35318
									// branch -> 0x35324
									// 0x35324
									return 1;
								}
							}
						}
					}
				}
				// 0x35320
				// branch -> 0x35324
				// 0x35324
				return 0;
			}
			// 0x35108
			if (v11 % 256 != 0) {
				// 0x35110
				if (*(char *)(*(int32_t *)(g23 - 0x7688) + 120 * v17 + 52) == 1) {
					// 0x35128
					NetSendCmdLocParam1(1, (char)*(int32_t *)g30, *(int32_t *)g29 % 256, v17);
					// branch -> 0x352d4
					// 0x352d4
					if (g36 == 0) {
						// 0x352dc
						if (*(char *)g33 == -1) {
							// 0x352ec
							if (*(char *)g25 == -1) {
								// 0x352fc
								if (*(int32_t *)g28 == -1) {
									// 0x35308
									if (*(char *)g27 == -1) {
										// 0x35318
										// branch -> 0x35324
										// 0x35324
										return 1;
									}
								}
							}
						}
					}
					// 0x35320
					// branch -> 0x35324
					// 0x35324
					return 0;
				}
			}
			// 0x35160
			if (*(int32_t *)(v1 + 0x55ec * *(int32_t *)g35 + 308) == 1) {
				// 0x35178
				if (v18 != 0) {
					// 0x35180
					function_8b234(1, 13, *(int32_t *)g30 % 256, *(int32_t *)g29 % 256);
					// branch -> 0x352d4
					// 0x352d4
					if (g36 == 0) {
						// 0x352dc
						if (*(char *)g33 == -1) {
							// 0x352ec
							if (*(char *)g25 == -1) {
								// 0x352fc
								if (*(int32_t *)g28 == -1) {
									// 0x35308
									if (*(char *)g27 == -1) {
										// 0x35318
										// branch -> 0x35324
										// 0x35324
										return 1;
									}
								}
							}
						}
					}
					// 0x35320
					// branch -> 0x35324
					// 0x35324
					return 0;
				}
				// 0x351a0
				v20 = *(int32_t *)g28;
				if (v20 == -1) {
					// 0x351e8
					v22 = *(char *)g27;
					if (v22 != -1) {
						// 0x351f8
						if (*(int32_t *)g24 == 0) {
							// 0x35204
							NetSendCmdParam1(1, 21, (int32_t)v22);
							// branch -> 0x352d4
						}
					}
					// 0x352d4
					if (g36 == 0) {
						// 0x352dc
						if (*(char *)g33 == -1) {
							// 0x352ec
							if (*(char *)g25 == -1) {
								// 0x352fc
								if (*(int32_t *)g28 == -1) {
									// 0x35308
									if (*(char *)g27 == -1) {
										// 0x35318
										// branch -> 0x35324
										// 0x35324
										return 1;
									}
								}
							}
						}
					}
					// 0x35320
					// branch -> 0x35324
					// 0x35324
					return 0;
				}
				// 0x351ac
				v19 = function_87558(v20);
				v21 = *(int32_t *)g28;
				if (v19 == 0) {
					// 0x351d0
					NetSendCmdParam1(1, 20, v21 % 0x10000);
					// branch -> 0x352d4
				} else {
					// 0x351b8
					NetSendCmdParam1(1, 18, v21 % 0x10000);
					// branch -> 0x352d4
				}
				// 0x352d4
				if (g36 == 0) {
					// 0x352dc
					if (*(char *)g33 == -1) {
						// 0x352ec
						if (*(char *)g25 == -1) {
							// 0x352fc
							if (*(int32_t *)g28 == -1) {
								// 0x35308
								if (*(char *)g27 == -1) {
									// 0x35318
									// branch -> 0x35324
									// 0x35324
									return 1;
								}
							}
						}
					}
				}
				// 0x35320
				// branch -> 0x35324
				// 0x35324
				return 0;
			}
			// 0x35214
			v23 = *(int32_t *)g28;
			if (v18 == 0) {
				// 0x3528c
				if (v23 == -1) {
					// 0x352ac
					v24 = *(char *)g27;
					if (v24 != -1) {
						// 0x352bc
						if (*(int32_t *)g24 == 0) {
							// 0x352c8
							NetSendCmdParam1(1, 19, (int32_t)v24);
							// branch -> 0x352d4
						}
					}
				} else {
					// 0x35298
					NetSendCmdParam1(1, 18, v23 % 0x10000);
					// branch -> 0x352d4
				}
				// 0x352d4
				if (g36 == 0) {
					// 0x352dc
					if (*(char *)g33 == -1) {
						// 0x352ec
						if (*(char *)g25 == -1) {
							// 0x352fc
							if (*(int32_t *)g28 == -1) {
								// 0x35308
								if (*(char *)g27 == -1) {
									// 0x35318
									// branch -> 0x35324
									// 0x35324
									return 1;
								}
							}
						}
					}
				}
				// 0x35320
				// branch -> 0x35324
				// 0x35324
				return 0;
			}
			// 0x3521c
			if (v23 == -1) {
				// 0x3526c
				function_8b234(1, 55, *(int32_t *)g30 % 256, *(int32_t *)g29 % 256);
				// branch -> 0x352d4
				// 0x352d4
				if (g36 == 0) {
					// 0x352dc
					if (*(char *)g33 == -1) {
						// 0x352ec
						if (*(char *)g25 == -1) {
							// 0x352fc
							if (*(int32_t *)g28 == -1) {
								// 0x35308
								if (*(char *)g27 == -1) {
									// 0x35318
									// branch -> 0x35324
									// 0x35324
									return 1;
								}
							}
						}
					}
				}
				// 0x35320
				// branch -> 0x35324
				// 0x35324
				return 0;
			}
			// 0x35228
			if (function_87558(v23) == 0) {
				// 0x3524c
				function_8b234(1, 55, *(int32_t *)g30 % 256, *(int32_t *)g29 % 256);
				// branch -> 0x352d4
			} else {
				// 0x35234
				NetSendCmdParam1(1, 18, *(int32_t *)g28 % 0x10000);
				// branch -> 0x352d4
			}
			// 0x352d4
			if (g36 == 0) {
				// 0x352dc
				if (*(char *)g33 == -1) {
					// 0x352ec
					if (*(char *)g25 == -1) {
						// 0x352fc
						if (*(int32_t *)g28 == -1) {
							// 0x35308
							if (*(char *)g27 == -1) {
								// 0x35318
								// branch -> 0x35324
								// 0x35324
								return 1;
							}
						}
					}
				}
			}
			// 0x35320
			// branch -> 0x35324
			// 0x35324
			return 0;
		}
		// 0x35160
		if (*(int32_t *)(v1 + 0x55ec * *(int32_t *)g35 + 308) == 1) {
			// 0x35178
			if (v18 == 0) {
				// 0x351a0
				v20 = *(int32_t *)g28;
				if (v20 != -1) {
					// 0x351ac
					v19 = function_87558(v20);
					v21 = *(int32_t *)g28;
					if (v19 == 0) {
						// 0x351d0
						NetSendCmdParam1(1, 20, v21 % 0x10000);
						// branch -> 0x352d4
					} else {
						// 0x351b8
						NetSendCmdParam1(1, 18, v21 % 0x10000);
						// branch -> 0x352d4
					}
					// 0x352d4
					if (g36 == 0) {
						// 0x352dc
						if (*(char *)g33 == -1) {
							// 0x352ec
							if (*(char *)g25 == -1) {
								// 0x352fc
								if (*(int32_t *)g28 == -1) {
									// 0x35308
									if (*(char *)g27 == -1) {
										// 0x35318
										// branch -> 0x35324
										// 0x35324
										return 1;
									}
								}
							}
						}
					}
					// 0x35320
					// branch -> 0x35324
					// 0x35324
					return 0;
				}
				// 0x351e8
				v22 = *(char *)g27;
				if (v22 != -1) {
					// 0x351f8
					if (*(int32_t *)g24 == 0) {
						// 0x35204
						NetSendCmdParam1(1, 21, (int32_t)v22);
						// branch -> 0x352d4
					}
				}
				// 0x352d4
				if (g36 == 0) {
					// 0x352dc
					if (*(char *)g33 == -1) {
						// 0x352ec
						if (*(char *)g25 == -1) {
							// 0x352fc
							if (*(int32_t *)g28 == -1) {
								// 0x35308
								if (*(char *)g27 == -1) {
									// 0x35318
									// branch -> 0x35324
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
					}
				}
				// 0x35320
				// branch -> 0x35324
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x35180
				function_8b234(1, 13, *(int32_t *)g30 % 256, *(int32_t *)g29 % 256);
				// branch -> 0x352d4
			}
			// 0x352d4
			if (g36 == 0) {
				// 0x352dc
				if (*(char *)g33 == -1) {
					// 0x352ec
					if (*(char *)g25 == -1) {
						// 0x352fc
						if (*(int32_t *)g28 == -1) {
							// 0x35308
							if (*(char *)g27 == -1) {
								// 0x35318
								// branch -> 0x35324
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
				}
			}
			// 0x35320
			// branch -> 0x35324
			// Detected a possible infinite recursion (goto support failed); quitting...
		} else {
			// 0x35214
			v23 = *(int32_t *)g28;
			if (v18 == 0) {
				// 0x3528c
				if (v23 == -1) {
					// 0x352ac
					v24 = *(char *)g27;
					if (v24 != -1) {
						// 0x352bc
						if (*(int32_t *)g24 == 0) {
							// 0x352c8
							NetSendCmdParam1(1, 19, (int32_t)v24);
							// branch -> 0x352d4
						}
					}
				} else {
					// 0x35298
					NetSendCmdParam1(1, 18, v23 % 0x10000);
					// branch -> 0x352d4
				}
				// 0x352d4
				if (g36 == 0) {
					// 0x352dc
					if (*(char *)g33 == -1) {
						// 0x352ec
						if (*(char *)g25 == -1) {
							// 0x352fc
							if (*(int32_t *)g28 == -1) {
								// 0x35308
								if (*(char *)g27 == -1) {
									// 0x35318
									// branch -> 0x35324
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
					}
				}
				// 0x35320
				// branch -> 0x35324
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x3521c
				if (v23 == -1) {
					// 0x3526c
					function_8b234(1, 55, *(int32_t *)g30 % 256, *(int32_t *)g29 % 256);
					// branch -> 0x352d4
				} else {
					// 0x35228
					if (function_87558(v23) == 0) {
						// 0x3524c
						function_8b234(1, 55, *(int32_t *)g30 % 256, *(int32_t *)g29 % 256);
						// branch -> 0x352d4
					} else {
						// 0x35234
						NetSendCmdParam1(1, 18, *(int32_t *)g28 % 0x10000);
						// branch -> 0x352d4
					}
					// 0x352d4
					if (g36 == 0) {
						// 0x352dc
						if (*(char *)g33 == -1) {
							// 0x352ec
							if (*(char *)g25 == -1) {
								// 0x352fc
								if (*(int32_t *)g28 == -1) {
									// 0x35308
									if (*(char *)g27 == -1) {
										// 0x35318
										// branch -> 0x35324
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
						}
					}
					// 0x35320
					// branch -> 0x35324
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x352d4
				if (g36 == 0) {
					// 0x352dc
					if (*(char *)g33 == -1) {
						// 0x352ec
						if (*(char *)g25 == -1) {
							// 0x352fc
							if (*(int32_t *)g28 == -1) {
								// 0x35308
								if (*(char *)g27 == -1) {
									// 0x35318
									// branch -> 0x35324
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
					}
				}
				// 0x35320
				// branch -> 0x35324
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x352d4
			if (g36 == 0) {
				// 0x352dc
				if (*(char *)g33 == -1) {
					// 0x352ec
					if (*(char *)g25 == -1) {
						// 0x352fc
						if (*(int32_t *)g28 == -1) {
							// 0x35308
							if (*(char *)g27 == -1) {
								// 0x35318
								// branch -> 0x35324
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
				}
			}
			// 0x35320
			// branch -> 0x35324
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x352d4
		if (g36 == 0) {
			// 0x352dc
			if (*(char *)g33 == -1) {
				// 0x352ec
				if (*(char *)g25 == -1) {
					// 0x352fc
					if (*(int32_t *)g28 == -1) {
						// 0x35308
						if (*(char *)g27 == -1) {
							// 0x35318
							// branch -> 0x35324
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
			}
		}
	}
	// 0x35320
	// branch -> 0x35324
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x35338 - 0x355b0
int32_t TryIconCurs(int32_t a1)
{
	int32_t v1 = g36;                        // 0x35338
	int32_t v2 = g10;                        // 0x3533c
	int32_t v3 = *(int32_t *)(g23 - 0x7744); // 0x35340
	int32_t v4 = g35;                        // 0x35344
	int32_t v5 = *(int32_t *)(g23 - 0x772c); // 0x35348
	char *v6 = (char *)v5;                   // 0x35348
	int32_t v7 = g33;                        // 0x3534c
	int32_t v8 = *(int32_t *)(g23 - 0x77a8); // 0x35350
	int32_t v9 = *(int32_t *)(g23 - 0x775c); // 0x35358
	g33 = v9;
	int32_t v10 = *(int32_t *)(g23 - 0x7750); // 0x35360
	g35 = v10;
	int32_t v11 = *(int32_t *)v3;             // 0x35364
	int32_t v12 = *(int32_t *)(g23 - 0x77ac); // 0x35368
	g36 = v12;
	if (v11 == 8) {
		// 0x35374
		NetSendCmdParam1(1, 26, (int32_t) * (char *)v9);
		// branch -> 0x35594
		// 0x35594
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v7;
		return 1;
	}
	// 0x35390
	if (v11 == 10) {
		// 0x35398
		NetSendCmdParam1(1, 77, (int32_t) * (char *)v9);
		// branch -> 0x35594
		// 0x35594
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v7;
		return 1;
	}
	// 0x353b4
	if (v11 == 7) {
		// 0x353bc
		DoTelekinesis(v3, v8, v5);
		// branch -> 0x35594
		// 0x35594
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v7;
		return 1;
	}
	// 0x353c8
	if (v11 == 2) {
		char v13 = *v6; // 0x353d0
		if (v13 == -1) {
			// 0x353ec
			g34 = 1;
			function_324ec(1);
			// branch -> 0x353f4
		} else {
			// 0x353e0
			function_61098(*(int32_t *)v12, (int32_t)v13, v5);
			// branch -> 0x353f4
		}
		// 0x353f4
		// branch -> 0x35594
		// 0x35594
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v7;
		return 1;
	}
	// 0x353fc
	if (v11 == 3) {
		char v14 = *v6; // 0x35404
		if (v14 == -1) {
			// 0x35420
			g34 = 1;
			function_324ec(1);
			// branch -> 0x35428
		} else {
			// 0x35414
			function_61210(*(int32_t *)v12, (int32_t)v14, v5);
			// branch -> 0x35428
		}
		// 0x35428
		// branch -> 0x35594
		// 0x35594
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v7;
		return 1;
	}
	// 0x35430
	if (v11 == 4) {
		char v15 = *v6; // 0x35438
		if (v15 == -1) {
			// 0x35454
			g34 = 1;
			function_324ec(1);
			// branch -> 0x3545c
		} else {
			// 0x35448
			function_61310(*(int32_t *)v12, (int32_t)v15, v5);
			// branch -> 0x3545c
		}
		// 0x3545c
		// branch -> 0x35594
		// 0x35594
		g36 = v1;
		g10 = v2;
		g35 = v4;
		g33 = v7;
		return 1;
	}
	// 0x35464
	int32_t result; // 0x355ac
	if (v11 == 9) {
		// 0x3546c
		if (*(int32_t *)v10 == -1) {
			int32_t v16 = *(int32_t *)v12; // 0x35508
			int32_t v17 = v8 + 172;        // 0x3550c
			if (*(char *)v9 == -1) {
				// 0x35508
				g33 = v17;
				uint32_t v18 = function_6db5c(v16, *(int32_t *)(0x55ec * v16 + v17)); // 0x35518
				uint32_t v19 = *(int32_t *)*(int32_t *)(g23 - 0x7658);                // 0x35530
				uint32_t v20 = *(int32_t *)*(int32_t *)(g23 - 0x765c);                // 0x35534
				uint32_t v21 = *(int32_t *)(g33 + 0x55ec * *(int32_t *)g36);          // 0x35538
				function_8b2e0(1, 15, v19 % 256, v20 % 256, v21 % 0x10000, v18 % 0x10000);
				// branch -> 0x35554
			} else {
				// 0x354c8
				g35 = v17;
				uint32_t v22 = function_6db5c(v16, *(int32_t *)(0x55ec * v16 + v17)); // 0x354d8
				uint32_t v23 = *(int32_t *)(g35 + 0x55ec * *(int32_t *)g36);          // 0x354f0
				function_8b4a0(1, 25, (int32_t) * (char *)g33, v23 % 0x10000, v22 % 0x10000);
				// branch -> 0x35554
			}
			// 0x35554
			g34 = 1;
			function_324ec(1);
			// branch -> 0x35594
			// 0x35594
			g36 = v1;
			g10 = v2;
			g35 = v4;
			g33 = v7;
			return 1;
		}
		int32_t v24 = *(int32_t *)v12; // 0x35478
		int32_t v25 = v8 + 172;        // 0x3547c
		g33 = v25;
		uint32_t v26 = function_6db5c(v24, *(int32_t *)(0x55ec * v24 + v25)); // 0x35488
		uint32_t v27 = *(int32_t *)(g33 + 0x55ec * *(int32_t *)g36);          // 0x354a0
		function_8b4a0(1, 24, *(int32_t *)g35 % 0x10000, v27 % 0x10000, v26 % 0x10000);
		// branch -> 0x35554
		// 0x35554
		g34 = 1;
		function_324ec(1);
		result = 1;
		// branch -> 0x35594
	} else {
		// 0x35564
		if (v11 == 5) {
			// 0x3556c
			if (*(char *)*(int32_t *)(g23 - 0x774c) == -1) {
				// 0x35580
				g34 = 1;
				function_324ec(1);
				// branch -> 0x35594
				// 0x35594
				g36 = v1;
				g10 = v2;
				g35 = v4;
				g33 = v7;
				return 1;
			}
		}
		// 0x35590
		result = 0;
		// branch -> 0x35594
	}
	// 0x35594
	g36 = v1;
	g10 = v2;
	g35 = v4;
	g33 = v7;
	return result;
}

// Address range: 0x355b0 - 0x358c4
int32_t LeftMouseDown(int32_t a1)
{
	int32_t v1 = g10; // 0x355b4
	g29 = a1;
	g30 = *(int32_t *)(g23 - 0x7704);
	g31 = *(int32_t *)(g23 - 0x7730);
	g32 = *(int32_t *)(g23 - 0x76b8);
	g33 = *(int32_t *)(g23 - 0x7744);
	g35 = *(int32_t *)(g23 - 0x76ac);
	g36 = *(int32_t *)(g23 - 0x76a8);
	if (gmenu_left_mouse(1) != 0 || control_check_talk_btn(0) != 0 || *(int32_t *)(g23 - 0x4f54) != 0) {
		// 0x355ec
		// branch -> 0x358b0
		// 0x358b0
		g10 = v1;
		return 0;
	}
	int32_t v2 = *(int32_t *)(g23 - 0x75cc); // 0x3561c
	if (*(int32_t *)v2 != 0) {
		// 0x3562c
		control_check_btn_press(v2);
		// branch -> 0x358b0
		// 0x358b0
		g10 = v1;
		return 0;
	}
	// 0x35638
	if (*(int32_t *)*(int32_t *)(g23 - 0x75d0) == 2) {
		// 0x35648
		// branch -> 0x358b0
		// 0x358b0
		g10 = v1;
		return 0;
	}
	int32_t v3 = *(int32_t *)(g23 - 0x7678); // 0x35650
	if (*(int32_t *)v3 != 0) {
		// 0x35660
		doom_close(v3);
		// branch -> 0x358b0
		// 0x358b0
		g10 = v1;
		return 0;
	}
	// 0x3566c
	if (*(int32_t *)g32 != 0) {
		// 0x35678
		function_2d6a8(v3);
		// branch -> 0x358b0
		// 0x358b0
		g10 = v1;
		return 0;
	}
	int32_t v4 = *(int32_t *)(g23 - 0x7764); // 0x35684
	g34 = v4;
	if (*(char *)v4 != 0) {
		// 0x35694
		function_bd8dc(v4);
		// branch -> 0x358b0
		// 0x358b0
		g10 = v1;
		return 0;
	}
	// 0x356a0
	if (*(int32_t *)g35 > 351) {
		// 0x35860
		if (*(int32_t *)*(int32_t *)(g23 - 0x76d0) == 0) {
			// 0x35870
			if (*(int32_t *)g30 == 0) {
				// 0x3587c
				if (gmenu_exception() == 0) {
					// 0x35888
					function_596d4(0);
					// branch -> 0x3588c
				}
			}
		}
		// 0x3588c
		function_2e9c4();
		uint32_t v5 = *(int32_t *)g33; // 0x35890
		if (v5 >= 2) {
			// 0x3589c
			if (v5 <= 11) {
				// 0x358a4
				g34 = 1;
				function_324ec(1);
				// branch -> 0x358ac
			}
		}
		// 0x358ac
		// branch -> 0x358b0
		// 0x358b0
		g10 = v1;
		return 0;
	}
	// 0x356ac
	if (gmenu_exception() != 0 || TryIconCurs(0) != 0) {
		// 0x356b8
		// branch -> 0x358b0
		// 0x358b0
		g10 = v1;
		return 0;
	}
	int32_t v6 = *(int32_t *)(g23 - 0x77c8); // 0x356d4
	if (*(int32_t *)v6 != 0) {
		uint32_t v7 = *(int32_t *)g36; // 0x356e4
		if (v7 >= 33) {
			// 0x356f0
			if (v7 <= 287) {
				uint32_t v8 = *(int32_t *)g35; // 0x356f8
				if (v8 >= 33) {
					// 0x35704
					if (v8 <= 307) {
						// 0x3570c
						function_ae43c(v6);
						// branch -> 0x358b0
						// 0x358b0
						g10 = v1;
						return 0;
					}
				}
			}
		}
	}
	char *v9 = (char *)g31; // 0x35718
	if (*v9 != 0) {
		// 0x35724
		*v9 = 0;
		g34 = function_4c0c8();
		function_6c704();
		// branch -> 0x358b0
		// 0x358b0
		g10 = v1;
		return 0;
	}
	int32_t v10 = *(int32_t *)(g23 - 0x77c4); // 0x3573c
	g34 = v10;
	if (*(int32_t *)v10 != 0) {
		// 0x3574c
		if (*(int32_t *)g36 <= 319) {
			// 0x35758
			function_30760(v10);
			// branch -> 0x358b0
			// 0x358b0
			g10 = v1;
			return 0;
		}
	}
	int32_t v11 = *(int32_t *)(g23 - 0x77bc); // 0x35764
	if (*(int32_t *)v11 != 0) {
		// 0x35774
		if (*(int32_t *)g36 >= 321) {
			// 0x35780
			if (*(int32_t *)g30 == 0) {
				// 0x3578c
				function_59678(v11);
				// branch -> 0x35790
			}
			// 0x35790
			// branch -> 0x358b0
			// 0x358b0
			g10 = v1;
			return 0;
		}
	}
	int32_t v12 = *(int32_t *)(g23 - 0x77c0); // 0x35798
	if (*(int32_t *)v12 != 0) {
		// 0x357a8
		if (*(int32_t *)g36 >= 321) {
			// 0x357b4
			function_31338(v12);
			// branch -> 0x358b0
			// 0x358b0
			g10 = v1;
			return 0;
		}
	}
	// 0x357c0
	if (*(int32_t *)g33 >= 12) {
		// 0x357cc
		if (function_5a694() != 0) {
			uint32_t v13 = *(int32_t *)*(int32_t *)(g23 - 0x765c); // 0x357ec
			function_8ba58(1, 10, *(int32_t *)*(int32_t *)(g23 - 0x7658) % 256, v13 % 256);
			g34 = 1;
			function_324ec(1);
			// branch -> 0x35804
		}
		// 0x35804
		// branch -> 0x358b0
		// 0x358b0
		g10 = v1;
		return 0;
	}
	int32_t v14 = *(int32_t *)(g23 - 0x77a8);                            // 0x35810
	int32_t v15 = 0x55ec * *(int32_t *)*(int32_t *)(g23 - 0x77ac) + v14; // 0x3581c
	g34 = v15;
	if (*(int32_t *)(v15 + 384) != 0) {
		// 0x3582c
		if (*(int32_t *)g32 == 0) {
			// 0x35838
			function_30648(v15, v14);
			// branch -> 0x3583c
		}
	}
	// 0x3583c
	int32_t result; // 0x358c0
	if (*(int32_t *)*(int32_t *)(g23 - 0x76d8) == 0) {
		// 0x3584c
		result = LeftMouseCmd(__asm_rlwinm(llvm_ctlz_i32(5 - g29, true), 27, 24, 31));
		// branch -> 0x358b0
	} else {
		// 0x358ac
		result = 0;
		// branch -> 0x358b0
	}
	// 0x358b0
	g10 = v1;
	return result;
}

// Address range: 0x358c4 - 0x3593c
int32_t LeftMouseUp(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x358c4
	control_release_talk_btn(gmenu_left_mouse(0));
	int32_t v1 = *(int32_t *)(g23 - 0x76e0); // 0x358dc
	if (*(int32_t *)v1 != 0) {
		// 0x358ec
		CheckBtnUp(v1);
		// branch -> 0x358f0
	}
	int32_t v2 = *(int32_t *)(g23 - 0x76ec); // 0x358f0
	if (*(int32_t *)v2 != 0) {
		// 0x35900
		ReleaseChrBtns(v2);
		// branch -> 0x35904
	}
	int32_t v3 = *(int32_t *)(g23 - 0x76d8); // 0x35904
	if (*(int32_t *)v3 != 0) {
		// 0x35914
		ReleaseLvlBtn(v3);
		// branch -> 0x35918
	}
	int32_t v4 = *(int32_t *)(g23 - 0x7764); // 0x35918
	int32_t result;                          // 0x35938
	if (*(char *)v4 != 0) {
		// 0x35928
		result = ReleaseStoreBtn(v4);
		// branch -> 0x3592c
	} else {
		result = v4;
	}
	// 0x3592c
	return result;
}

// Address range: 0x3593c - 0x35a9c
int32_t RightMouseDown(int32_t a1)
{
	// 0x3593c
	g36 = *(int32_t *)(g23 - 0x77ac);
	g35 = *(int32_t *)(g23 - 0x772c);
	int32_t v1 = gmenu_exception(); // 0x35958
	int32_t result = v1;           // 0x35a98
	if (v1 == 0) {
		// 0x35964
		if (*(int32_t *)(g23 - 0x4f54) == 0) {
			int32_t v2 = *(int32_t *)(g23 - 0x75d0); // 0x35970
			if (*(int32_t *)v2 != 2) {
				int32_t v3 = *(int32_t *)(g23 - 0x77a8) + 0x55ec * *(int32_t *)g36; // 0x3598c
				if (*(char *)(v3 + 313) == 0) {
					int32_t v4 = *(int32_t *)(g23 - 0x7678); // 0x3599c
					if (*(int32_t *)v4 == 0) {
						int32_t v5 = *(int32_t *)(g23 - 0x7764); // 0x359b4
						if (*(char *)v5 == 0) {
							int32_t v6 = *(int32_t *)(g23 - 0x76b8); // 0x359c4
							if (*(int32_t *)v6 != 0) {
								// 0x359d4
								result = function_2d6a8(v6);
								// branch -> 0x35a84
								// 0x35a84
								return result;
							}
							// 0x359dc
							uint32_t v7;     // 0x35a3c
							char v8;         // 0x35a48
							int32_t result2; // 0x35a5c
							int32_t v9;      // 0x35a38
							if (*(int32_t *)*(int32_t *)(g23 - 0x76ac) > 351) {
								// 0x35a38
								v9 = *(int32_t *)(g23 - 0x7744);
								v7 = *(int32_t *)v9;
								if (v7 == 1) {
									// 0x35a48
									v8 = *(char *)g35;
									if (v8 != -1) {
										// 0x35a58
										result2 = UseInvItem(*(int32_t *)g36, (int32_t)v8);
										if (result2 != 0) {
											// 0x35a84
											return result2;
										}
									}
									// 0x35a68
									result = CheckPlrSpell();
									// branch -> 0x35a84
								} else {
									// 0x35a70
									if (v7 >= 1) {
										// 0x35a74
										if (v7 <= 11) {
											// 0x35a7c
											g34 = 1;
											result = function_324ec(1);
											// branch -> 0x35a84
										} else {
											result = v9;
										}
									} else {
										result = v9;
									}
								}
								// 0x35a84
								return result;
							}
							int32_t v10 = *(int32_t *)(g23 - 0x77c0); // 0x359ec
							int32_t v11;                              // 0x35a0c
							char v12;                                 // 0x35a18
							int32_t result3;                          // 0x35a2c
							if (*(int32_t *)v10 == 0) {
								// 0x35a0c
								v11 = TryIconCurs(v10);
								if (v11 == 0) {
									// 0x35a18
									v12 = *(char *)g35;
									if (v12 != -1) {
										// 0x35a28
										result3 = UseInvItem(*(int32_t *)g36, (int32_t)v12);
										if (result3 != 0) {
											// 0x35a84
											return result3;
										}
									}
									// 0x35a38
									v9 = *(int32_t *)(g23 - 0x7744);
									v7 = *(int32_t *)v9;
									if (v7 == 1) {
										// 0x35a48
										v8 = *(char *)g35;
										if (v8 != -1) {
											// 0x35a58
											result2 = UseInvItem(*(int32_t *)g36, (int32_t)v8);
											if (result2 != 0) {
												// 0x35a84
												return result2;
											}
										}
										// 0x35a68
										result = CheckPlrSpell();
										// branch -> 0x35a84
									} else {
										// 0x35a70
										if (v7 >= 1) {
											// 0x35a74
											if (v7 <= 11) {
												// 0x35a7c
												g34 = 1;
												result = function_324ec(1);
												// branch -> 0x35a84
											} else {
												result = v9;
											}
										} else {
											result = v9;
										}
									}
									// 0x35a84
									return result;
								}
								result = v11;
							} else {
								int32_t v13 = *(int32_t *)(g23 - 0x76a8); // 0x359fc
								if (*(int32_t *)v13 <= 320) {
									// 0x35a0c
									v11 = TryIconCurs(v13);
									if (v11 == 0) {
										// 0x35a18
										v12 = *(char *)g35;
										if (v12 != -1) {
											// 0x35a28
											result3 = UseInvItem(*(int32_t *)g36, (int32_t)v12);
											if (result3 != 0) {
												// 0x35a84
												return result3;
											}
										}
										// 0x35a38
										v9 = *(int32_t *)(g23 - 0x7744);
										v7 = *(int32_t *)v9;
										if (v7 == 1) {
											// 0x35a48
											v8 = *(char *)g35;
											if (v8 != -1) {
												// 0x35a58
												result2 = UseInvItem(*(int32_t *)g36, (int32_t)v8);
												if (result2 != 0) {
													// 0x35a84
													return result2;
												}
											}
											// 0x35a68
											result = CheckPlrSpell();
											// branch -> 0x35a84
										} else {
											// 0x35a70
											if (v7 >= 1) {
												// 0x35a74
												if (v7 <= 11) {
													// 0x35a7c
													g34 = 1;
													result = function_324ec(1);
													// branch -> 0x35a84
												} else {
													result = v9;
												}
											} else {
												result = v9;
											}
										}
										// 0x35a84
										return result;
									}
									result = v11;
								} else {
									result = v13;
								}
							}
							// 0x35a84
							return result;
						}
						result = v5;
					} else {
						// 0x359ac
						result = doom_close(v4);
						// branch -> 0x35a84
					}
					// 0x35a84
					return result;
				}
				result = v3;
			} else {
				result = v2;
			}
			// 0x35a84
			return result;
		}
		result = 0;
	}
	// 0x35a84
	return result;
}

// Address range: 0x35a9c - 0x35acc
int32_t j_gmenu_on_mouse_move(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t result = gmenu_on_mouse_move(); // 0x35aa8
	if (result == 0) {
		// 0x35ab4
		// branch -> 0x35abc
	}
	// 0x35abc
	return result;
}

// Address range: 0x35acc - 0x35b34
int32_t diablo_pause_game(void)
{
	int32_t v1 = g10;                            // 0x35acc
	int32_t result = *(int32_t *)(g23 - 0x77f0); // 0x35ad0
	if (*(char *)result > 1) {
		// 0x35b24
		g10 = v1;
		return result;
	}
	int32_t *v2 = (int32_t *)*(int32_t *)(g23 - 0x75d0); // 0x35aec
	if (*v2 == 0) {
		// 0x35b04
		*v2 = 2;
		FreeMonsterSnd();
		track_repeat_walk(0);
		// branch -> 0x35b18
	} else {
		// 0x35af8
		*v2 = 0;
		// branch -> 0x35b18
	}
	int32_t result2 = *(int32_t *)(g23 - 0x76bc); // 0x35b18
	*(int32_t *)result2 = 255;
	// branch -> 0x35b24
	// 0x35b24
	g10 = v1;
	return result2;
}

// Address range: 0x35b34 - 0x35bac
int32_t function_35b34(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	int32_t v1 = g23 - 0x2440; // 0x35b3c
	g37 = v1;
	strcpy();
	g34 = a1;
	g37 = v1 + 80;
	strcpy();
	g34 = a2;
	g37 = v1 + 160;
	strcpy();
	g34 = a3;
	g37 = v1 + 240;
	return strcpy();
}

// Address range: 0x35bac - 0x35c38
int32_t function_35bac(int32_t a1, int32_t a2, int32_t a3, int32_t a4)
{
	// 0x35bac
	g32 = a3;
	int32_t v1 = g23 - 0x2440; // 0x35bb8
	g35 = v1;
	g33 = a4;
	g38 = 79;
	g37 = a1;
	function_e868c(v1);
	g36 = 0;
	*(char *)(g35 + 79) = 0;
	g37 = a2;
	g38 = 79;
	function_e868c(g35 + 80);
	*(char *)(g35 + 159) = (char)g36;
	g37 = g32;
	g38 = 79;
	function_e868c(g35 + 160);
	*(char *)(g35 + 239) = (char)g36;
	g37 = g33;
	g38 = 79;
	int32_t result = function_e868c(g35 + 240); // r3
	*(char *)(g35 + 319) = (char)g36;
	return result;
}

// Address range: 0x35c38 - 0x35c84
int32_t diablo_hotkey_msg(int32_t a1)
{
	int32_t result; // 0x35c80
	if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
		// 0x35c54
		int32_t v1;       // bp-88
		int32_t v2 = &v1; // 0x35c5c
		g34 = v2;
		g37 = g23 - 0x2440 + 80 * a1;
		strcpy();
		result = function_8c084(-1, v2);
		// branch -> 0x35c74
	} else {
		result = a1;
	}
	// 0x35c74
	return result;
}

// Address range: 0x35c84 - 0x35cdc
int32_t PressSysKey(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = g10; // 0x35c88
	g36 = a1;
	if (gmenu_exception() != 0) {
		// 0x35ca4
		// branch -> 0x35cc8
		// 0x35cc8
		g10 = v1;
		return 0;
	}
	// 0x35cac
	int32_t result; // 0x35cd8
	if (g36 == 121) {
		// 0x35cb4
		diablo_hotkey_msg(1);
		result = 1;
		// branch -> 0x35cc8
	} else {
		// 0x35cc4
		result = 0;
		// branch -> 0x35cc8
	}
	// 0x35cc8
	g10 = v1;
	return result;
}

// Address range: 0x35cdc - 0x35ce4
int32_t ReleaseKey(int32_t result, int32_t a2, int32_t a3)
{
	// 0x35cdc
	return result;
}

// Address range: 0x35ce4 - 0x35e00
int32_t function_35ce4(void)
{
	int32_t v1 = g36; // 0x35ce4
	int32_t v2 = g10; // 0x35ce8
	g34 = 0;
	int32_t v3 = g35; // 0x35cf4
	g35 = *(int32_t *)(g23 - 0x7730);
	int32_t v4 = g33;                        // 0x35cfc
	int32_t v5 = *(int32_t *)(g23 - 0x75d4); // 0x35d00
	g33 = v5;
	g36 = *(int32_t *)(g23 - 0x76b8);
	if (*(int32_t *)*(int32_t *)(g23 - 0x7678) != 0) {
		// 0x35d1c
		doom_close(0);
		g34 = 1;
		v5 = g33;
		// branch -> 0x35d24
	}
	int32_t *v6 = (int32_t *)v5; // 0x35d24
	if (*v6 != 0) {
		// 0x35d30
		*v6 = 0;
		g34 = 1;
		// branch -> 0x35d3c
	}
	char *v7 = (char *)g35; // 0x35d3c
	int32_t v8;             // 0x35d78
	int32_t v9;             // 0x35d98
	int32_t v10;            // 0x35db0
	int32_t result;         // 0x35dfc
	int32_t *v11;           // 0x35dcc
	int32_t v12;            // 0x35db0
	if (*v7 == 0) {
		int32_t v13 = *(int32_t *)(g23 - 0x7764); // 0x35d60
		if (*(char *)v13 != 0) {
			// 0x35d70
			function_babb8(v13);
			g34 = 1;
			// branch -> 0x35d78
		}
		// 0x35d78
		v8 = g23;
		v9 = v8;
		if (*(char *)*(int32_t *)(v8 - 0x75d8) != 0) {
			// 0x35d88
			g34 = 1;
			*(char *)*(int32_t *)(v8 - 0x75dc) = 0;
			v9 = g23;
			// branch -> 0x35d98
		}
		// 0x35d98
		v10 = v9;
		if (*(int32_t *)*(int32_t *)(v9 - 0x76d0) != 0) {
			// 0x35da8
			function_31f44();
			g34 = 1;
			v10 = g23;
			// branch -> 0x35db0
		}
		// 0x35db0
		v12 = *(int32_t *)(v10 - 0x7704);
		if (*(int32_t *)v12 != 0) {
			// 0x35dc0
			function_31654(27, v12);
			g34 = 1;
			// branch -> 0x35dcc
		}
		// 0x35dcc
		v11 = (int32_t *)g36;
		if (*v11 == 0) {
			// 0x35dcc
			result = g34;
			// branch -> 0x35de4
		} else {
			// 0x35dd8
			*v11 = 0;
			result = 1;
			// branch -> 0x35de4
		}
		// 0x35de4
		g36 = v1;
		g10 = v2;
		g35 = v3;
		g33 = v4;
		return result;
	}
	// 0x35d48
	*v7 = 0;
	g34 = function_4c0c8();
	function_6c704();
	g34 = 1;
	// branch -> 0x35d78
	// 0x35d78
	v8 = g23;
	v9 = v8;
	if (*(char *)*(int32_t *)(v8 - 0x75d8) != 0) {
		// 0x35d88
		g34 = 1;
		*(char *)*(int32_t *)(v8 - 0x75dc) = 0;
		v9 = g23;
		// branch -> 0x35d98
	}
	// 0x35d98
	v10 = v9;
	if (*(int32_t *)*(int32_t *)(v9 - 0x76d0) != 0) {
		// 0x35da8
		function_31f44();
		g34 = 1;
		v10 = g23;
		// branch -> 0x35db0
	}
	// 0x35db0
	v12 = *(int32_t *)(v10 - 0x7704);
	if (*(int32_t *)v12 != 0) {
		// 0x35dc0
		function_31654(27, v12);
		g34 = 1;
		// branch -> 0x35dcc
	}
	// 0x35dcc
	v11 = (int32_t *)g36;
	if (*v11 == 0) {
		// 0x35dcc
		result = g34;
		// branch -> 0x35de4
	} else {
		// 0x35dd8
		*v11 = 0;
		result = 1;
		// branch -> 0x35de4
	}
	// 0x35de4
	g36 = v1;
	g10 = v2;
	g35 = v3;
	g33 = v4;
	return result;
}

// Address range: 0x35e00 - 0x35ef8
int32_t function_35e00(int32_t result, int32_t a2)
{
	uint32_t v1 = *(int32_t *)*(int32_t *)(g23 - 0x76a8); // 0x35e30
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x76ac);  // 0x35e38
	int32_t v3 = 1;                                       // 0x35e58
	if (*(int32_t *)*(int32_t *)(g23 - 0x77c4) == 0) {
		// 0x35e40
		if (*(int32_t *)*(int32_t *)(g23 - 0x77c8) == 0) {
			// 0x35e50
			v3 = 0;
			// branch -> 0x35e54
		} else {
			v3 = 1;
		}
	}
	int32_t v4 = 1; // 0x35e84
	if (*(int32_t *)*(int32_t *)(g23 - 0x77bc) == 0) {
		// 0x35e6c
		if (*(int32_t *)*(int32_t *)(g23 - 0x77c0) == 0) {
			// 0x35e7c
			v4 = 0;
			// branch -> 0x35e80
		} else {
			v4 = 1;
		}
	}
	// 0x35e80
	if (v3 == 0) {
		// 0x35e8c
		if (v4 == 0) {
			// 0x35e94
			if (v2 > 351 || v1 < 161 || v1 > 479) {
				// 0x35edc
				return result;
			}
			// 0x35eac
			if (result != 0) {
				int32_t v5 = v1 + 160; // 0x35eb4
				g34 = v5;
				result = function_ebc50(v5, v2);
				// branch -> 0x35ec4
			}
			// 0x35ec4
			if (a2 != 0) {
				int32_t v6 = v1 - 160; // 0x35ecc
				g34 = v6;
				result = function_ebc50(v6, v2);
				// branch -> 0x35edc
			}
			// 0x35edc
			return result;
		}
	}
	// 0x35edc
	return result;
}

// Address range: 0x35ef8 - 0x35fdc
int32_t function_35ef8(int32_t result, int32_t a2)
{
	int32_t v1 = g10;                                     // 0x35ef8
	int32_t v2 = *(int32_t *)*(int32_t *)(g23 - 0x76ac);  // 0x35f0c
	uint32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x76a8); // 0x35f10
	if (v2 > 351) {
		// 0x35ef8
		// branch -> 0x35fcc
		// 0x35fcc
		g10 = v1;
		return result;
	}
	int32_t v4 = 1; // 0x35f4c
	if (*(int32_t *)*(int32_t *)(g23 - 0x77c4) == 0) {
		// 0x35f34
		if (*(int32_t *)*(int32_t *)(g23 - 0x77c8) == 0) {
			// 0x35f44
			v4 = 0;
			// branch -> 0x35f48
		} else {
			v4 = 1;
		}
	}
	int32_t v5 = 1; // 0x35f78
	if (*(int32_t *)*(int32_t *)(g23 - 0x77bc) == 0) {
		// 0x35f60
		if (*(int32_t *)*(int32_t *)(g23 - 0x77c0) == 0) {
			// 0x35f70
			v5 = 0;
			// branch -> 0x35f74
		} else {
			v5 = 1;
		}
	}
	// 0x35f74
	if (result != 0) {
		// 0x35f80
		if (v5 == 0) {
			// 0x35f88
			if (v3 >= 321) {
				int32_t v6 = v3 - 160; // 0x35f90
				g34 = v6;
				// branch -> 0x35fcc
				// 0x35fcc
				g10 = v1;
				return function_ebc50(v6, v2);
			}
		}
	}
	// 0x35fa4
	if (a2 != 0) {
		// 0x35fac
		if (v4 == 0) {
			// 0x35fb4
			int32_t result2; // 0x35fd8
			if (v3 <= 319) {
				int32_t v7 = v3 + 160; // 0x35fbc
				g34 = v7;
				result2 = function_ebc50(v7, v2);
				// branch -> 0x35fcc
			} else {
				result2 = result;
			}
			// 0x35fcc
			g10 = v1;
			return result2;
		}
	}
	// 0x35fcc
	g10 = v1;
	return result;
}

// Address range: 0x35fdc - 0x360bc
int32_t function_35fdc(void)
{
	int32_t v1 = g10; // 0x35fe0
	g32 = *(int32_t *)(g23 - 0x77c0);
	g33 = *(int32_t *)(g23 - 0x77c4);
	g35 = *(int32_t *)(g23 - 0x77c8);
	g36 = *(int32_t *)(g23 - 0x77bc);
	if (function_35ce4() != 0) {
		// 0x36008
		// branch -> 0x360a8
		// 0x360a8
		g10 = v1;
		return 1;
	}
	int32_t v2 = *(int32_t *)g36; // 0x36010
	int32_t v3 = *(int32_t *)g33; // 0x36018
	int32_t v4 = *(int32_t *)g32; // 0x3601c
	int32_t v5 = *(int32_t *)g35; // 0x36028
	int32_t v6 = 1;               // 0x36060
	if (v2 == 0) {
		// 0x36038
		if (v4 == 0) {
			// 0x36040
			v6 = 0;
			// branch -> 0x36044
		} else {
			v6 = 1;
		}
	}
	int32_t v7 = 1; // 0x3605c
	if (v3 == 0) {
		// 0x36050
		if (v5 == 0) {
			// 0x36058
			v7 = 0;
			// branch -> 0x3605c
		} else {
			v7 = 1;
		}
	}
	// 0x3605c
	function_35ef8(v7, v6);
	int32_t v8 = 0; // r0
	*(int32_t *)g36 = 0;
	*(int32_t *)g33 = v8;
	*(int32_t *)g32 = v8;
	*(int32_t *)g35 = v8;
	if ((v5 || v4 || v3 || v2) != 0) {
		// 0x36084
		// branch -> 0x360a8
		// 0x360a8
		g10 = v1;
		return 1;
	}
	// 0x3608c
	int32_t result; // 0x360b8
	if (gmenu_exception() == 0) {
		// 0x360a4
		result = 0;
		// branch -> 0x360a8
	} else {
		// 0x36098
		gamemenu_off();
		result = 1;
		// branch -> 0x360a8
	}
	// 0x360a8
	g10 = v1;
	return result;
}

// Address range: 0x360bc - 0x3670c
int32_t PressKey(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x360bc
	g22 = a1;
	g24 = *(int32_t *)(g23 - 0x7778);
	g25 = *(int32_t *)(g23 - 0x75dc);
	g26 = *(int32_t *)(g23 - 0x75d4);
	g34 = 17;
	g27 = *(int32_t *)(g23 - 0x76d0);
	g28 = *(int32_t *)(g23 - 0x77c0);
	g29 = *(int32_t *)(g23 - 0x77c4);
	g30 = *(int32_t *)(g23 - 0x7730);
	g31 = *(int32_t *)(g23 - 0x77c8);
	g32 = *(int32_t *)(g23 - 0x7764);
	g33 = *(int32_t *)(g23 - 0x76b8);
	g35 = *(int32_t *)(g23 - 0x77bc);
	g36 = *(int32_t *)(g23 - 0x7794);
	int32_t v1 = function_ebc38(17); // 0x36104
	int32_t v2 = g22;
	int32_t v3 = v2; // 0x361d8
	int32_t v4;      // 0x361f8
	int32_t v5;      // 0x36214
	int32_t v6;      // 0x36224
	int32_t v7;      // 0x36234
	int32_t v8;      // 0x36244
	int32_t v9;      // 0x36254
	int32_t v10;     // 0x36260
	int32_t v11;     // 0x36290
	int32_t v12;
	int32_t v13; // 0x362bc
	if (__asm_rlwinm_(v1, 0, 16, 16) != 0) {
		// 0x36114
		if (v2 == 55) {
			// 0x361ac
			g22 = 118;
			v3 = 118;
			// branch -> 0x361d8
		} else {
			// 0x3611c
			int32_t v14;  // r0
			int32_t v15;  // r3
			int32_t v16;  // 0x363f8
			int32_t v17;  // 0x36650
			int32_t v18;  // 0x36698
			int32_t v19;  // 0x3669c
			int32_t v20;  // 0x366f0
			int32_t *v21; // 0x36364
			char *v22;    // 0x363c4
			int32_t v23;  // 0x363fc
			char *v24;    // 0x366bc
			if (v2 > 55) {
				// 0x36154
				if (v2 == 187) {
					// 0x361d4
					g22 = 123;
					v3 = 123;
					// branch -> 0x361d8
				} else {
					// 0x3615c
					if (v2 > 187) {
						// 0x36170
						if (v2 == 189) {
							// 0x361cc
							g22 = 122;
							v3 = 122;
							// branch -> 0x361d8
						} else {
							v3 = v2;
						}
					} else {
						// 0x36160
						if (v2 == 57) {
							// 0x361bc
							g22 = 120;
							v3 = 120;
							// branch -> 0x361d8
						} else {
							// 0x36168
							if (v2 <= 57) {
								// 0x361b4
								g22 = 119;
								v3 = 119;
								// branch -> 0x361d8
							} else {
								v3 = v2;
							}
						}
						// 0x361d8
						if (function_54224(v3) == 0) {
							// 0x361e8
							if (function_322ec(g22) == 0) {
								// 0x361f8
								v4 = g23;
								if (*(int32_t *)*(int32_t *)(v4 - 0x75cc) == 0) {
									// 0x361f8
									v12 = g22;
									// branch -> 0x36268
									// 0x36268
									if (v12 == 27) {
										// 0x36270
										if (function_35fdc() == 0) {
											// 0x3627c
											track_repeat_walk(0);
											gamemenu_previous(0);
											// branch -> 0x366f8
										}
									} else {
										// 0x36290
										v11 = g23;
										if (*(int32_t *)(v11 - 0x4f54) == 0) {
											// 0x3629c
											if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
												// 0x362ac
												if (v12 == 19) {
													// 0x362b4
													diablo_pause_game();
													// branch -> 0x366f8
												} else {
													// 0x362bc
													v13 = *(int32_t *)(v11 - 0x75d0);
													if (*(int32_t *)v13 != 2) {
														// 0x362cc
														int32_t result; // 0x36708
														if (v12 == 13) {
															// 0x362d4
															if (*(char *)g32 != 0) {
																// 0x362e0
																// branch -> 0x366f8
																// 0x366f8
																return function_bd780(v13);
															}
															// 0x362e8
															if (*(int32_t *)g31 == 0) {
																// 0x362fc
																result = function_31ee8();
																// branch -> 0x366f8
															} else {
																// 0x362f4
																result = QuestlogEnter();
																// branch -> 0x366f8
															}
															// 0x366f8
															return result;
														}
														// 0x36304
														v17 = v12;
														if (*(int32_t *)(v11 - 0x4f58) != 0) {
															// 0x36310
															if (v12 == 114) {
																// 0x36348
																v17 = 118;
																// branch -> 0x36354
															} else {
																// 0x36318
																if (v12 > 114) {
																	// 0x3632c
																	if (v12 == 115) {
																		// 0x36350
																		v17 = 119;
																		// branch -> 0x36354
																	} else {
																		v17 = v12;
																	}
																} else {
																	// 0x3631c
																	if (v12 == 112) {
																		// 0x36338
																		v17 = 116;
																		// branch -> 0x36354
																	} else {
																		// 0x36324
																		if (v12 > 112) {
																			// 0x36340
																			v17 = 117;
																			// branch -> 0x36354
																		} else {
																			v17 = v12;
																		}
																	}
																	// 0x36354
																	if (v17 != 112) {
																		// 0x3635c
																		if (v17 != 45) {
																			// 0x36408
																			if (v17 == 116) {
																				// 0x36410
																				if (*(int32_t *)g33 == 0) {
																					// 0x36428
																					result = function_2d824(0);
																					// branch -> 0x366f8
																				} else {
																					// 0x3641c
																					result = function_2d72c(0);
																					// branch -> 0x366f8
																				}
																				// 0x366f8
																				return result;
																			}
																			// 0x36434
																			if (v17 == 117) {
																				// 0x3643c
																				if (*(int32_t *)g33 == 0) {
																					// 0x36454
																					result = function_2d824(1);
																					// branch -> 0x366f8
																				} else {
																					// 0x36448
																					result = function_2d72c(1);
																					// branch -> 0x366f8
																				}
																				// 0x366f8
																				return result;
																			}
																			// 0x36460
																			if (v17 == 118) {
																				// 0x36468
																				if (*(int32_t *)g33 == 0) {
																					// 0x36480
																					result = function_2d824(2);
																					// branch -> 0x366f8
																				} else {
																					// 0x36474
																					result = function_2d72c(2);
																					// branch -> 0x366f8
																				}
																				// 0x366f8
																				return result;
																			}
																			// 0x3648c
																			if (v17 == 119) {
																				// 0x36494
																				if (*(int32_t *)g33 == 0) {
																					// 0x364ac
																					result = function_2d824(3);
																					// branch -> 0x366f8
																				} else {
																					// 0x364a0
																					result = function_2d72c(3);
																					// branch -> 0x366f8
																				}
																				// 0x366f8
																				return result;
																			}
																			// 0x364b8
																			if (v17 == 120) {
																				// 0x364c0
																				// branch -> 0x366f8
																				// 0x366f8
																				return diablo_hotkey_msg(0);
																			}
																			// 0x364cc
																			if (v17 == 121) {
																				// 0x364d4
																				// branch -> 0x366f8
																				// 0x366f8
																				return diablo_hotkey_msg(1);
																			}
																			// 0x364e0
																			if (v17 == 122) {
																				// 0x364e8
																				// branch -> 0x366f8
																				// 0x366f8
																				return diablo_hotkey_msg(2);
																			}
																			// 0x364f4
																			if (v17 == 123) {
																				// 0x364fc
																				// branch -> 0x366f8
																				// 0x366f8
																				return diablo_hotkey_msg(3);
																			}
																			// 0x36508
																			if (v17 == 38) {
																				// 0x36510
																				if (*(char *)g32 != 0) {
																					// 0x3651c
																					// branch -> 0x366f8
																					// 0x366f8
																					return STextUp();
																				}
																				// 0x36524
																				if (*(int32_t *)g31 != 0) {
																					// 0x36530
																					// branch -> 0x366f8
																					// 0x366f8
																					return QuestlogUp();
																				}
																				// 0x36538
																				if (*(int32_t *)g26 == 0) {
																					// 0x3654c
																					if (*(int32_t *)g24 != 0) {
																						// 0x36558
																						result = AutomapUp();
																						// branch -> 0x366f8
																					} else {
																						result = v13;
																					}
																				} else {
																					// 0x36544
																					result = HelpScrollUp();
																					// branch -> 0x366f8
																				}
																				// 0x366f8
																				return result;
																			}
																			// 0x36560
																			if (v17 == 40) {
																				// 0x36568
																				if (*(char *)g32 != 0) {
																					// 0x36574
																					// branch -> 0x366f8
																					// 0x366f8
																					return STextDown();
																				}
																				// 0x3657c
																				if (*(int32_t *)g31 != 0) {
																					// 0x36588
																					// branch -> 0x366f8
																					// 0x366f8
																					return QuestlogDown();
																				}
																				// 0x36590
																				if (*(int32_t *)g26 == 0) {
																					// 0x365a4
																					if (*(int32_t *)g24 != 0) {
																						// 0x365b0
																						result = AutomapDown();
																						// branch -> 0x366f8
																					} else {
																						result = v13;
																					}
																				} else {
																					// 0x3659c
																					result = HelpScrollDown();
																					// branch -> 0x366f8
																				}
																				// 0x366f8
																				return result;
																			}
																			// 0x365b8
																			if (v17 == 33) {
																				// 0x365c0
																				if (*(char *)g32 != 0) {
																					// 0x365cc
																					result = STextPrior();
																					// branch -> 0x366f8
																				} else {
																					result = v13;
																				}
																				// 0x366f8
																				return result;
																			}
																			// 0x365d4
																			if (v17 == 34) {
																				// 0x365dc
																				if (*(char *)g32 != 0) {
																					// 0x365e8
																					result = STextNext();
																					// branch -> 0x366f8
																				} else {
																					result = v13;
																				}
																				// 0x366f8
																				return result;
																			}
																			// 0x365f0
																			if (v17 == 37) {
																				// 0x365f8
																				if (*(int32_t *)g24 != 0) {
																					// 0x36604
																					if (*(int32_t *)g27 == 0) {
																						// 0x36610
																						result = AutomapLeft();
																						// branch -> 0x366f8
																					} else {
																						result = v13;
																					}
																				} else {
																					result = v13;
																				}
																				// 0x366f8
																				return result;
																			}
																			// 0x36618
																			if (v17 == 39) {
																				// 0x36620
																				if (*(int32_t *)g24 != 0) {
																					// 0x3662c
																					if (*(int32_t *)g27 == 0) {
																						// 0x36638
																						result = AutomapRight();
																						// branch -> 0x366f8
																					} else {
																						result = v13;
																					}
																				} else {
																					result = v13;
																				}
																				// 0x366f8
																				return result;
																			}
																			// 0x36640
																			if (v17 == 9) {
																				// 0x36648
																				result = DoAutoMap();
																				// branch -> 0x366f8
																			} else {
																				// 0x36650
																				if (v17 == 32) {
																					// 0x36658
																					v19 = 1;
																					if (*(int32_t *)g35 == 0) {
																						// 0x36668
																						if (*(int32_t *)g28 == 0) {
																							// 0x36674
																							v19 = 0;
																							// branch -> 0x36678
																						} else {
																							v19 = 1;
																						}
																					}
																					// 0x36678
																					v18 = 1;
																					if (*(int32_t *)g29 == 0) {
																						// 0x36688
																						if (*(int32_t *)g31 == 0) {
																							// 0x36694
																							v18 = 0;
																							// branch -> 0x36698
																						} else {
																							v18 = 1;
																						}
																					}
																					// 0x36698
																					function_35ef8(v18, v19);
																					v15 = 0;
																					*(int32_t *)g26 = 0;
																					*(int32_t *)g35 = v15;
																					*(int32_t *)g29 = v15;
																					*(int32_t *)g28 = v15;
																					*(int32_t *)g33 = v15;
																					v24 = (char *)g30;
																					if (*v24 != 0) {
																						// 0x366c8
																						if (*(char *)g36 == 0) {
																							// 0x366d4
																							*v24 = (char)v15;
																							g34 = function_4c0c8();
																							function_6c704();
																							// branch -> 0x366e0
																						}
																					}
																					// 0x366e0
																					v14 = 0;
																					*(int32_t *)g31 = 0;
																					*(int32_t *)g24 = v14;
																					*(char *)g25 = (char)v14;
																					v20 = gamemenu_off();
																					result = doom_close(v20);
																					// branch -> 0x366f8
																				} else {
																					result = v13;
																				}
																			}
																			// 0x366f8
																			return result;
																		}
																	}
																	// 0x36364
																	v21 = (int32_t *)g26;
																	if (*v21 == 0) {
																		// 0x3637c
																		if (*(char *)g32 == 0) {
																			// 0x363b0
																			v15 = 0;
																			*(int32_t *)g35 = 0;
																			*(int32_t *)g29 = v15;
																			*(int32_t *)g28 = v15;
																			*(int32_t *)g33 = v15;
																			v22 = (char *)g30;
																			if (*v22 != 0) {
																				// 0x363d0
																				if (*(char *)g36 == 0) {
																					// 0x363dc
																					*v22 = (char)v15;
																					g34 = function_4c0c8();
																					function_6c704();
																					// branch -> 0x363e8
																				}
																			}
																			// 0x363e8
																			v14 = 0;
																			*(int32_t *)g31 = 0;
																			*(int32_t *)g24 = v14;
																			*(char *)g25 = (char)v14;
																			v16 = gamemenu_off();
																			v23 = function_54964(v16);
																			doom_close(v23);
																			// branch -> 0x366f8
																		} else {
																			// 0x36388
																			function_2dc1c();
																			function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																			function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																			track_repeat_walk(0);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36370
																		*v21 = 0;
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
																// 0x36354
																if (v17 != 112) {
																	// 0x3635c
																	if (v17 != 45) {
																		// 0x36408
																		if (v17 == 116) {
																			// 0x36410
																			if (*(int32_t *)g33 == 0) {
																				// 0x36428
																				function_2d824(0);
																				// branch -> 0x366f8
																			} else {
																				// 0x3641c
																				function_2d72c(0);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x36434
																			if (v17 == 117) {
																				// 0x3643c
																				if (*(int32_t *)g33 == 0) {
																					// 0x36454
																					function_2d824(1);
																					// branch -> 0x366f8
																				} else {
																					// 0x36448
																					function_2d72c(1);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x36460
																				if (v17 == 118) {
																					// 0x36468
																					if (*(int32_t *)g33 == 0) {
																						// 0x36480
																						function_2d824(2);
																						// branch -> 0x366f8
																					} else {
																						// 0x36474
																						function_2d72c(2);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x3648c
																					if (v17 == 119) {
																						// 0x36494
																						if (*(int32_t *)g33 == 0) {
																							// 0x364ac
																							function_2d824(3);
																							// branch -> 0x366f8
																						} else {
																							// 0x364a0
																							function_2d72c(3);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x364b8
																						if (v17 == 120) {
																							// 0x364c0
																							diablo_hotkey_msg(0);
																							// branch -> 0x366f8
																						} else {
																							// 0x364cc
																							if (v17 == 121) {
																								// 0x364d4
																								diablo_hotkey_msg(1);
																								// branch -> 0x366f8
																							} else {
																								// 0x364e0
																								if (v17 == 122) {
																									// 0x364e8
																									diablo_hotkey_msg(2);
																									// branch -> 0x366f8
																								} else {
																									// 0x364f4
																									if (v17 == 123) {
																										// 0x364fc
																										diablo_hotkey_msg(3);
																										// branch -> 0x366f8
																									} else {
																										// 0x36508
																										if (v17 == 38) {
																											// 0x36510
																											if (*(char *)g32 == 0) {
																												// 0x36524
																												if (*(int32_t *)g31 == 0) {
																													// 0x36538
																													if (*(int32_t *)g26 == 0) {
																														// 0x3654c
																														if (*(int32_t *)g24 != 0) {
																															// 0x36558
																															AutomapUp();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x36544
																														HelpScrollUp();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36530
																													QuestlogUp();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x3651c
																												STextUp();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x36560
																											if (v17 == 40) {
																												// 0x36568
																												if (*(char *)g32 == 0) {
																													// 0x3657c
																													if (*(int32_t *)g31 == 0) {
																														// 0x36590
																														if (*(int32_t *)g26 == 0) {
																															// 0x365a4
																															if (*(int32_t *)g24 != 0) {
																																// 0x365b0
																																AutomapDown();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x3659c
																															HelpScrollDown();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36588
																														QuestlogDown();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36574
																													STextDown();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x365b8
																												if (v17 == 33) {
																													// 0x365c0
																													if (*(char *)g32 != 0) {
																														// 0x365cc
																														STextPrior();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x365d4
																													if (v17 == 34) {
																														// 0x365dc
																														if (*(char *)g32 != 0) {
																															// 0x365e8
																															STextNext();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x365f0
																														if (v17 == 37) {
																															// 0x365f8
																															if (*(int32_t *)g24 != 0) {
																																// 0x36604
																																if (*(int32_t *)g27 == 0) {
																																	// 0x36610
																																	AutomapLeft();
																																	// branch -> 0x366f8
																																}
																															}
																														} else {
																															// 0x36618
																															if (v17 == 39) {
																																// 0x36620
																																if (*(int32_t *)g24 != 0) {
																																	// 0x3662c
																																	if (*(int32_t *)g27 == 0) {
																																		// 0x36638
																																		AutomapRight();
																																		// branch -> 0x366f8
																																	}
																																}
																															} else {
																																// 0x36640
																																if (v17 == 9) {
																																	// 0x36648
																																	DoAutoMap();
																																	// branch -> 0x366f8
																																} else {
																																	// 0x36650
																																	if (v17 == 32) {
																																		// 0x36658
																																		v19 = 1;
																																		if (*(int32_t *)g35 == 0) {
																																			// 0x36668
																																			if (*(int32_t *)g28 == 0) {
																																				// 0x36674
																																				v19 = 0;
																																				// branch -> 0x36678
																																			} else {
																																				v19 = 1;
																																			}
																																		}
																																		// 0x36678
																																		v18 = 1;
																																		if (*(int32_t *)g29 == 0) {
																																			// 0x36688
																																			if (*(int32_t *)g31 == 0) {
																																				// 0x36694
																																				v18 = 0;
																																				// branch -> 0x36698
																																			} else {
																																				v18 = 1;
																																			}
																																		}
																																		// 0x36698
																																		function_35ef8(v18, v19);
																																		v15 = 0;
																																		*(int32_t *)g26 = 0;
																																		*(int32_t *)g35 = v15;
																																		*(int32_t *)g29 = v15;
																																		*(int32_t *)g28 = v15;
																																		*(int32_t *)g33 = v15;
																																		v24 = (char *)g30;
																																		if (*v24 != 0) {
																																			// 0x366c8
																																			if (*(char *)g36 == 0) {
																																				// 0x366d4
																																				*v24 = (char)v15;
																																				g34 = function_4c0c8();
																																				function_6c704();
																																				// branch -> 0x366e0
																																			}
																																		}
																																		// 0x366e0
																																		v14 = 0;
																																		*(int32_t *)g31 = 0;
																																		*(int32_t *)g24 = v14;
																																		*(char *)g25 = (char)v14;
																																		v20 = gamemenu_off();
																																		doom_close(v20);
																																		// branch -> 0x366f8
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
																}
																// 0x36364
																v21 = (int32_t *)g26;
																if (*v21 == 0) {
																	// 0x3637c
																	if (*(char *)g32 == 0) {
																		// 0x363b0
																		v15 = 0;
																		*(int32_t *)g35 = 0;
																		*(int32_t *)g29 = v15;
																		*(int32_t *)g28 = v15;
																		*(int32_t *)g33 = v15;
																		v22 = (char *)g30;
																		if (*v22 != 0) {
																			// 0x363d0
																			if (*(char *)g36 == 0) {
																				// 0x363dc
																				*v22 = (char)v15;
																				g34 = function_4c0c8();
																				function_6c704();
																				// branch -> 0x363e8
																			}
																		}
																		// 0x363e8
																		v14 = 0;
																		*(int32_t *)g31 = 0;
																		*(int32_t *)g24 = v14;
																		*(char *)g25 = (char)v14;
																		v16 = gamemenu_off();
																		v23 = function_54964(v16);
																		doom_close(v23);
																		// branch -> 0x366f8
																	} else {
																		// 0x36388
																		function_2dc1c();
																		function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																		function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																		track_repeat_walk(0);
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x36370
																	*v21 = 0;
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
															// 0x36354
															if (v17 != 112) {
																// 0x3635c
																if (v17 != 45) {
																	// 0x36408
																	if (v17 == 116) {
																		// 0x36410
																		if (*(int32_t *)g33 == 0) {
																			// 0x36428
																			function_2d824(0);
																			// branch -> 0x366f8
																		} else {
																			// 0x3641c
																			function_2d72c(0);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36434
																		if (v17 == 117) {
																			// 0x3643c
																			if (*(int32_t *)g33 == 0) {
																				// 0x36454
																				function_2d824(1);
																				// branch -> 0x366f8
																			} else {
																				// 0x36448
																				function_2d72c(1);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x36460
																			if (v17 == 118) {
																				// 0x36468
																				if (*(int32_t *)g33 == 0) {
																					// 0x36480
																					function_2d824(2);
																					// branch -> 0x366f8
																				} else {
																					// 0x36474
																					function_2d72c(2);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x3648c
																				if (v17 == 119) {
																					// 0x36494
																					if (*(int32_t *)g33 == 0) {
																						// 0x364ac
																						function_2d824(3);
																						// branch -> 0x366f8
																					} else {
																						// 0x364a0
																						function_2d72c(3);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x364b8
																					if (v17 == 120) {
																						// 0x364c0
																						diablo_hotkey_msg(0);
																						// branch -> 0x366f8
																					} else {
																						// 0x364cc
																						if (v17 == 121) {
																							// 0x364d4
																							diablo_hotkey_msg(1);
																							// branch -> 0x366f8
																						} else {
																							// 0x364e0
																							if (v17 == 122) {
																								// 0x364e8
																								diablo_hotkey_msg(2);
																								// branch -> 0x366f8
																							} else {
																								// 0x364f4
																								if (v17 == 123) {
																									// 0x364fc
																									diablo_hotkey_msg(3);
																									// branch -> 0x366f8
																								} else {
																									// 0x36508
																									if (v17 == 38) {
																										// 0x36510
																										if (*(char *)g32 == 0) {
																											// 0x36524
																											if (*(int32_t *)g31 == 0) {
																												// 0x36538
																												if (*(int32_t *)g26 == 0) {
																													// 0x3654c
																													if (*(int32_t *)g24 != 0) {
																														// 0x36558
																														AutomapUp();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x36544
																													HelpScrollUp();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36530
																												QuestlogUp();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x3651c
																											STextUp();
																											// branch -> 0x366f8
																										}
																										// Detected a possible infinite recursion (goto support failed); quitting...
																									} else {
																										// 0x36560
																										if (v17 == 40) {
																											// 0x36568
																											if (*(char *)g32 == 0) {
																												// 0x3657c
																												if (*(int32_t *)g31 == 0) {
																													// 0x36590
																													if (*(int32_t *)g26 == 0) {
																														// 0x365a4
																														if (*(int32_t *)g24 != 0) {
																															// 0x365b0
																															AutomapDown();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x3659c
																														HelpScrollDown();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36588
																													QuestlogDown();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36574
																												STextDown();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x365b8
																											if (v17 == 33) {
																												// 0x365c0
																												if (*(char *)g32 != 0) {
																													// 0x365cc
																													STextPrior();
																													// branch -> 0x366f8
																												}
																											} else {
																												// 0x365d4
																												if (v17 == 34) {
																													// 0x365dc
																													if (*(char *)g32 != 0) {
																														// 0x365e8
																														STextNext();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x365f0
																													if (v17 == 37) {
																														// 0x365f8
																														if (*(int32_t *)g24 != 0) {
																															// 0x36604
																															if (*(int32_t *)g27 == 0) {
																																// 0x36610
																																AutomapLeft();
																																// branch -> 0x366f8
																															}
																														}
																													} else {
																														// 0x36618
																														if (v17 == 39) {
																															// 0x36620
																															if (*(int32_t *)g24 != 0) {
																																// 0x3662c
																																if (*(int32_t *)g27 == 0) {
																																	// 0x36638
																																	AutomapRight();
																																	// branch -> 0x366f8
																																}
																															}
																														} else {
																															// 0x36640
																															if (v17 == 9) {
																																// 0x36648
																																DoAutoMap();
																																// branch -> 0x366f8
																															} else {
																																// 0x36650
																																if (v17 == 32) {
																																	// 0x36658
																																	v19 = 1;
																																	if (*(int32_t *)g35 == 0) {
																																		// 0x36668
																																		if (*(int32_t *)g28 == 0) {
																																			// 0x36674
																																			v19 = 0;
																																			// branch -> 0x36678
																																		} else {
																																			v19 = 1;
																																		}
																																	}
																																	// 0x36678
																																	v18 = 1;
																																	if (*(int32_t *)g29 == 0) {
																																		// 0x36688
																																		if (*(int32_t *)g31 == 0) {
																																			// 0x36694
																																			v18 = 0;
																																			// branch -> 0x36698
																																		} else {
																																			v18 = 1;
																																		}
																																	}
																																	// 0x36698
																																	function_35ef8(v18, v19);
																																	v15 = 0;
																																	*(int32_t *)g26 = 0;
																																	*(int32_t *)g35 = v15;
																																	*(int32_t *)g29 = v15;
																																	*(int32_t *)g28 = v15;
																																	*(int32_t *)g33 = v15;
																																	v24 = (char *)g30;
																																	if (*v24 != 0) {
																																		// 0x366c8
																																		if (*(char *)g36 == 0) {
																																			// 0x366d4
																																			*v24 = (char)v15;
																																			g34 = function_4c0c8();
																																			function_6c704();
																																			// branch -> 0x366e0
																																		}
																																	}
																																	// 0x366e0
																																	v14 = 0;
																																	*(int32_t *)g31 = 0;
																																	*(int32_t *)g24 = v14;
																																	*(char *)g25 = (char)v14;
																																	v20 = gamemenu_off();
																																	doom_close(v20);
																																	// branch -> 0x366f8
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
															}
															// 0x36364
															v21 = (int32_t *)g26;
															if (*v21 == 0) {
																// 0x3637c
																if (*(char *)g32 == 0) {
																	// 0x363b0
																	v15 = 0;
																	*(int32_t *)g35 = 0;
																	*(int32_t *)g29 = v15;
																	*(int32_t *)g28 = v15;
																	*(int32_t *)g33 = v15;
																	v22 = (char *)g30;
																	if (*v22 != 0) {
																		// 0x363d0
																		if (*(char *)g36 == 0) {
																			// 0x363dc
																			*v22 = (char)v15;
																			g34 = function_4c0c8();
																			function_6c704();
																			// branch -> 0x363e8
																		}
																	}
																	// 0x363e8
																	v14 = 0;
																	*(int32_t *)g31 = 0;
																	*(int32_t *)g24 = v14;
																	*(char *)g25 = (char)v14;
																	v16 = gamemenu_off();
																	v23 = function_54964(v16);
																	doom_close(v23);
																	// branch -> 0x366f8
																} else {
																	// 0x36388
																	function_2dc1c();
																	function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																	function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																	track_repeat_walk(0);
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															} else {
																// 0x36370
																*v21 = 0;
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
														// 0x36354
														if (v17 != 112) {
															// 0x3635c
															if (v17 != 45) {
																// 0x36408
																if (v17 == 116) {
																	// 0x36410
																	if (*(int32_t *)g33 == 0) {
																		// 0x36428
																		function_2d824(0);
																		// branch -> 0x366f8
																	} else {
																		// 0x3641c
																		function_2d72c(0);
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x36434
																	if (v17 == 117) {
																		// 0x3643c
																		if (*(int32_t *)g33 == 0) {
																			// 0x36454
																			function_2d824(1);
																			// branch -> 0x366f8
																		} else {
																			// 0x36448
																			function_2d72c(1);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36460
																		if (v17 == 118) {
																			// 0x36468
																			if (*(int32_t *)g33 == 0) {
																				// 0x36480
																				function_2d824(2);
																				// branch -> 0x366f8
																			} else {
																				// 0x36474
																				function_2d72c(2);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x3648c
																			if (v17 == 119) {
																				// 0x36494
																				if (*(int32_t *)g33 == 0) {
																					// 0x364ac
																					function_2d824(3);
																					// branch -> 0x366f8
																				} else {
																					// 0x364a0
																					function_2d72c(3);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x364b8
																				if (v17 == 120) {
																					// 0x364c0
																					diablo_hotkey_msg(0);
																					// branch -> 0x366f8
																				} else {
																					// 0x364cc
																					if (v17 == 121) {
																						// 0x364d4
																						diablo_hotkey_msg(1);
																						// branch -> 0x366f8
																					} else {
																						// 0x364e0
																						if (v17 == 122) {
																							// 0x364e8
																							diablo_hotkey_msg(2);
																							// branch -> 0x366f8
																						} else {
																							// 0x364f4
																							if (v17 == 123) {
																								// 0x364fc
																								diablo_hotkey_msg(3);
																								// branch -> 0x366f8
																							} else {
																								// 0x36508
																								if (v17 == 38) {
																									// 0x36510
																									if (*(char *)g32 == 0) {
																										// 0x36524
																										if (*(int32_t *)g31 == 0) {
																											// 0x36538
																											if (*(int32_t *)g26 == 0) {
																												// 0x3654c
																												if (*(int32_t *)g24 != 0) {
																													// 0x36558
																													AutomapUp();
																													// branch -> 0x366f8
																												}
																											} else {
																												// 0x36544
																												HelpScrollUp();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x36530
																											QuestlogUp();
																											// branch -> 0x366f8
																										}
																										// Detected a possible infinite recursion (goto support failed); quitting...
																									} else {
																										// 0x3651c
																										STextUp();
																										// branch -> 0x366f8
																									}
																									// Detected a possible infinite recursion (goto support failed); quitting...
																								} else {
																									// 0x36560
																									if (v17 == 40) {
																										// 0x36568
																										if (*(char *)g32 == 0) {
																											// 0x3657c
																											if (*(int32_t *)g31 == 0) {
																												// 0x36590
																												if (*(int32_t *)g26 == 0) {
																													// 0x365a4
																													if (*(int32_t *)g24 != 0) {
																														// 0x365b0
																														AutomapDown();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x3659c
																													HelpScrollDown();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36588
																												QuestlogDown();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x36574
																											STextDown();
																											// branch -> 0x366f8
																										}
																										// Detected a possible infinite recursion (goto support failed); quitting...
																									} else {
																										// 0x365b8
																										if (v17 == 33) {
																											// 0x365c0
																											if (*(char *)g32 != 0) {
																												// 0x365cc
																												STextPrior();
																												// branch -> 0x366f8
																											}
																										} else {
																											// 0x365d4
																											if (v17 == 34) {
																												// 0x365dc
																												if (*(char *)g32 != 0) {
																													// 0x365e8
																													STextNext();
																													// branch -> 0x366f8
																												}
																											} else {
																												// 0x365f0
																												if (v17 == 37) {
																													// 0x365f8
																													if (*(int32_t *)g24 != 0) {
																														// 0x36604
																														if (*(int32_t *)g27 == 0) {
																															// 0x36610
																															AutomapLeft();
																															// branch -> 0x366f8
																														}
																													}
																												} else {
																													// 0x36618
																													if (v17 == 39) {
																														// 0x36620
																														if (*(int32_t *)g24 != 0) {
																															// 0x3662c
																															if (*(int32_t *)g27 == 0) {
																																// 0x36638
																																AutomapRight();
																																// branch -> 0x366f8
																															}
																														}
																													} else {
																														// 0x36640
																														if (v17 == 9) {
																															// 0x36648
																															DoAutoMap();
																															// branch -> 0x366f8
																														} else {
																															// 0x36650
																															if (v17 == 32) {
																																// 0x36658
																																v19 = 1;
																																if (*(int32_t *)g35 == 0) {
																																	// 0x36668
																																	if (*(int32_t *)g28 == 0) {
																																		// 0x36674
																																		v19 = 0;
																																		// branch -> 0x36678
																																	} else {
																																		v19 = 1;
																																	}
																																}
																																// 0x36678
																																v18 = 1;
																																if (*(int32_t *)g29 == 0) {
																																	// 0x36688
																																	if (*(int32_t *)g31 == 0) {
																																		// 0x36694
																																		v18 = 0;
																																		// branch -> 0x36698
																																	} else {
																																		v18 = 1;
																																	}
																																}
																																// 0x36698
																																function_35ef8(v18, v19);
																																v15 = 0;
																																*(int32_t *)g26 = 0;
																																*(int32_t *)g35 = v15;
																																*(int32_t *)g29 = v15;
																																*(int32_t *)g28 = v15;
																																*(int32_t *)g33 = v15;
																																v24 = (char *)g30;
																																if (*v24 != 0) {
																																	// 0x366c8
																																	if (*(char *)g36 == 0) {
																																		// 0x366d4
																																		*v24 = (char)v15;
																																		g34 = function_4c0c8();
																																		function_6c704();
																																		// branch -> 0x366e0
																																	}
																																}
																																// 0x366e0
																																v14 = 0;
																																*(int32_t *)g31 = 0;
																																*(int32_t *)g24 = v14;
																																*(char *)g25 = (char)v14;
																																v20 = gamemenu_off();
																																doom_close(v20);
																																// branch -> 0x366f8
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
														}
														// 0x36364
														v21 = (int32_t *)g26;
														if (*v21 == 0) {
															// 0x3637c
															if (*(char *)g32 == 0) {
																// 0x363b0
																v15 = 0;
																*(int32_t *)g35 = 0;
																*(int32_t *)g29 = v15;
																*(int32_t *)g28 = v15;
																*(int32_t *)g33 = v15;
																v22 = (char *)g30;
																if (*v22 != 0) {
																	// 0x363d0
																	if (*(char *)g36 == 0) {
																		// 0x363dc
																		*v22 = (char)v15;
																		g34 = function_4c0c8();
																		function_6c704();
																		// branch -> 0x363e8
																	}
																}
																// 0x363e8
																v14 = 0;
																*(int32_t *)g31 = 0;
																*(int32_t *)g24 = v14;
																*(char *)g25 = (char)v14;
																v16 = gamemenu_off();
																v23 = function_54964(v16);
																doom_close(v23);
																// branch -> 0x366f8
															} else {
																// 0x36388
																function_2dc1c();
																function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																track_repeat_walk(0);
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														} else {
															// 0x36370
															*v21 = 0;
															// branch -> 0x366f8
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x36208
									if (*(int32_t *)(v4 - 0x4f54) == 0) {
										// 0x36214
										v5 = g22;
										v6 = v5;
										if (v5 == 120) {
											// 0x3621c
											diablo_hotkey_msg(0);
											v6 = g22;
											// branch -> 0x36224
										}
										// 0x36224
										v7 = v6;
										if (v6 == 121) {
											// 0x3622c
											diablo_hotkey_msg(1);
											v7 = g22;
											// branch -> 0x36234
										}
										// 0x36234
										v8 = v7;
										if (v7 == 122) {
											// 0x3623c
											diablo_hotkey_msg(2);
											v8 = g22;
											// branch -> 0x36244
										}
										// 0x36244
										v9 = v8;
										if (v8 == 123) {
											// 0x3624c
											diablo_hotkey_msg(3);
											v9 = g22;
											// branch -> 0x36254
										}
										// 0x36254
										v10 = v9;
										if (v9 == 13) {
											// 0x3625c
											function_31ee8();
											v10 = g22;
											// branch -> 0x36260
										}
										// 0x36260
										if (v10 == 27) {
											v12 = 27;
											// 0x36268
											if (v12 == 27) {
												// 0x36270
												if (function_35fdc() == 0) {
													// 0x3627c
													track_repeat_walk(0);
													gamemenu_previous(0);
													// branch -> 0x366f8
												}
											} else {
												// 0x36290
												v11 = g23;
												if (*(int32_t *)(v11 - 0x4f54) == 0) {
													// 0x3629c
													if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
														// 0x362ac
														if (v12 == 19) {
															// 0x362b4
															diablo_pause_game();
															// branch -> 0x366f8
														} else {
															// 0x362bc
															v13 = *(int32_t *)(v11 - 0x75d0);
															if (*(int32_t *)v13 != 2) {
																// 0x362cc
																if (v12 == 13) {
																	// 0x362d4
																	if (*(char *)g32 == 0) {
																		// 0x362e8
																		if (*(int32_t *)g31 == 0) {
																			// 0x362fc
																			function_31ee8();
																			// branch -> 0x366f8
																		} else {
																			// 0x362f4
																			QuestlogEnter();
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x362e0
																		function_bd780(v13);
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x36304
																	v17 = v12;
																	if (*(int32_t *)(v11 - 0x4f58) != 0) {
																		// 0x36310
																		if (v12 == 114) {
																			// 0x36348
																			v17 = 118;
																			// branch -> 0x36354
																		} else {
																			// 0x36318
																			if (v12 > 114) {
																				// 0x3632c
																				if (v12 == 115) {
																					// 0x36350
																					v17 = 119;
																					// branch -> 0x36354
																				} else {
																					v17 = v12;
																				}
																			} else {
																				// 0x3631c
																				if (v12 == 112) {
																					// 0x36338
																					v17 = 116;
																					// branch -> 0x36354
																				} else {
																					// 0x36324
																					if (v12 > 112) {
																						// 0x36340
																						v17 = 117;
																						// branch -> 0x36354
																					} else {
																						v17 = v12;
																					}
																				}
																				// 0x36354
																				if (v17 != 112) {
																					// 0x3635c
																					if (v17 != 45) {
																						// 0x36408
																						if (v17 == 116) {
																							// 0x36410
																							if (*(int32_t *)g33 == 0) {
																								// 0x36428
																								function_2d824(0);
																								// branch -> 0x366f8
																							} else {
																								// 0x3641c
																								function_2d72c(0);
																								// branch -> 0x366f8
																							}
																							// Detected a possible infinite recursion (goto support failed); quitting...
																						} else {
																							// 0x36434
																							if (v17 == 117) {
																								// 0x3643c
																								if (*(int32_t *)g33 == 0) {
																									// 0x36454
																									function_2d824(1);
																									// branch -> 0x366f8
																								} else {
																									// 0x36448
																									function_2d72c(1);
																									// branch -> 0x366f8
																								}
																								// Detected a possible infinite recursion (goto support failed); quitting...
																							} else {
																								// 0x36460
																								if (v17 == 118) {
																									// 0x36468
																									if (*(int32_t *)g33 == 0) {
																										// 0x36480
																										function_2d824(2);
																										// branch -> 0x366f8
																									} else {
																										// 0x36474
																										function_2d72c(2);
																										// branch -> 0x366f8
																									}
																									// Detected a possible infinite recursion (goto support failed); quitting...
																								} else {
																									// 0x3648c
																									if (v17 == 119) {
																										// 0x36494
																										if (*(int32_t *)g33 == 0) {
																											// 0x364ac
																											function_2d824(3);
																											// branch -> 0x366f8
																										} else {
																											// 0x364a0
																											function_2d72c(3);
																											// branch -> 0x366f8
																										}
																										// Detected a possible infinite recursion (goto support failed); quitting...
																									} else {
																										// 0x364b8
																										if (v17 == 120) {
																											// 0x364c0
																											diablo_hotkey_msg(0);
																											// branch -> 0x366f8
																										} else {
																											// 0x364cc
																											if (v17 == 121) {
																												// 0x364d4
																												diablo_hotkey_msg(1);
																												// branch -> 0x366f8
																											} else {
																												// 0x364e0
																												if (v17 == 122) {
																													// 0x364e8
																													diablo_hotkey_msg(2);
																													// branch -> 0x366f8
																												} else {
																													// 0x364f4
																													if (v17 == 123) {
																														// 0x364fc
																														diablo_hotkey_msg(3);
																														// branch -> 0x366f8
																													} else {
																														// 0x36508
																														if (v17 == 38) {
																															// 0x36510
																															if (*(char *)g32 == 0) {
																																// 0x36524
																																if (*(int32_t *)g31 == 0) {
																																	// 0x36538
																																	if (*(int32_t *)g26 == 0) {
																																		// 0x3654c
																																		if (*(int32_t *)g24 != 0) {
																																			// 0x36558
																																			AutomapUp();
																																			// branch -> 0x366f8
																																		}
																																	} else {
																																		// 0x36544
																																		HelpScrollUp();
																																		// branch -> 0x366f8
																																	}
																																	// Detected a possible infinite recursion (goto support failed); quitting...
																																} else {
																																	// 0x36530
																																	QuestlogUp();
																																	// branch -> 0x366f8
																																}
																																// Detected a possible infinite recursion (goto support failed); quitting...
																															} else {
																																// 0x3651c
																																STextUp();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x36560
																															if (v17 == 40) {
																																// 0x36568
																																if (*(char *)g32 == 0) {
																																	// 0x3657c
																																	if (*(int32_t *)g31 == 0) {
																																		// 0x36590
																																		if (*(int32_t *)g26 == 0) {
																																			// 0x365a4
																																			if (*(int32_t *)g24 != 0) {
																																				// 0x365b0
																																				AutomapDown();
																																				// branch -> 0x366f8
																																			}
																																		} else {
																																			// 0x3659c
																																			HelpScrollDown();
																																			// branch -> 0x366f8
																																		}
																																		// Detected a possible infinite recursion (goto support failed); quitting...
																																	} else {
																																		// 0x36588
																																		QuestlogDown();
																																		// branch -> 0x366f8
																																	}
																																	// Detected a possible infinite recursion (goto support failed); quitting...
																																} else {
																																	// 0x36574
																																	STextDown();
																																	// branch -> 0x366f8
																																}
																																// Detected a possible infinite recursion (goto support failed); quitting...
																															} else {
																																// 0x365b8
																																if (v17 == 33) {
																																	// 0x365c0
																																	if (*(char *)g32 != 0) {
																																		// 0x365cc
																																		STextPrior();
																																		// branch -> 0x366f8
																																	}
																																} else {
																																	// 0x365d4
																																	if (v17 == 34) {
																																		// 0x365dc
																																		if (*(char *)g32 != 0) {
																																			// 0x365e8
																																			STextNext();
																																			// branch -> 0x366f8
																																		}
																																	} else {
																																		// 0x365f0
																																		if (v17 == 37) {
																																			// 0x365f8
																																			if (*(int32_t *)g24 != 0) {
																																				// 0x36604
																																				if (*(int32_t *)g27 == 0) {
																																					// 0x36610
																																					AutomapLeft();
																																					// branch -> 0x366f8
																																				}
																																			}
																																		} else {
																																			// 0x36618
																																			if (v17 == 39) {
																																				// 0x36620
																																				if (*(int32_t *)g24 != 0) {
																																					// 0x3662c
																																					if (*(int32_t *)g27 == 0) {
																																						// 0x36638
																																						AutomapRight();
																																						// branch -> 0x366f8
																																					}
																																				}
																																			} else {
																																				// 0x36640
																																				if (v17 == 9) {
																																					// 0x36648
																																					DoAutoMap();
																																					// branch -> 0x366f8
																																				} else {
																																					// 0x36650
																																					if (v17 == 32) {
																																						// 0x36658
																																						v19 = 1;
																																						if (*(int32_t *)g35 == 0) {
																																							// 0x36668
																																							if (*(int32_t *)g28 == 0) {
																																								// 0x36674
																																								v19 = 0;
																																								// branch -> 0x36678
																																							} else {
																																								v19 = 1;
																																							}
																																						}
																																						// 0x36678
																																						v18 = 1;
																																						if (*(int32_t *)g29 == 0) {
																																							// 0x36688
																																							if (*(int32_t *)g31 == 0) {
																																								// 0x36694
																																								v18 = 0;
																																								// branch -> 0x36698
																																							} else {
																																								v18 = 1;
																																							}
																																						}
																																						// 0x36698
																																						function_35ef8(v18, v19);
																																						v15 = 0;
																																						*(int32_t *)g26 = 0;
																																						*(int32_t *)g35 = v15;
																																						*(int32_t *)g29 = v15;
																																						*(int32_t *)g28 = v15;
																																						*(int32_t *)g33 = v15;
																																						v24 = (char *)g30;
																																						if (*v24 != 0) {
																																							// 0x366c8
																																							if (*(char *)g36 == 0) {
																																								// 0x366d4
																																								*v24 = (char)v15;
																																								g34 = function_4c0c8();
																																								function_6c704();
																																								// branch -> 0x366e0
																																							}
																																						}
																																						// 0x366e0
																																						v14 = 0;
																																						*(int32_t *)g31 = 0;
																																						*(int32_t *)g24 = v14;
																																						*(char *)g25 = (char)v14;
																																						v20 = gamemenu_off();
																																						doom_close(v20);
																																						// branch -> 0x366f8
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
																				}
																				// 0x36364
																				v21 = (int32_t *)g26;
																				if (*v21 == 0) {
																					// 0x3637c
																					if (*(char *)g32 == 0) {
																						// 0x363b0
																						v15 = 0;
																						*(int32_t *)g35 = 0;
																						*(int32_t *)g29 = v15;
																						*(int32_t *)g28 = v15;
																						*(int32_t *)g33 = v15;
																						v22 = (char *)g30;
																						if (*v22 != 0) {
																							// 0x363d0
																							if (*(char *)g36 == 0) {
																								// 0x363dc
																								*v22 = (char)v15;
																								g34 = function_4c0c8();
																								function_6c704();
																								// branch -> 0x363e8
																							}
																						}
																						// 0x363e8
																						v14 = 0;
																						*(int32_t *)g31 = 0;
																						*(int32_t *)g24 = v14;
																						*(char *)g25 = (char)v14;
																						v16 = gamemenu_off();
																						v23 = function_54964(v16);
																						doom_close(v23);
																						// branch -> 0x366f8
																					} else {
																						// 0x36388
																						function_2dc1c();
																						function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																						function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																						track_repeat_walk(0);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x36370
																					*v21 = 0;
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			}
																			// 0x36354
																			if (v17 != 112) {
																				// 0x3635c
																				if (v17 != 45) {
																					// 0x36408
																					if (v17 == 116) {
																						// 0x36410
																						if (*(int32_t *)g33 == 0) {
																							// 0x36428
																							function_2d824(0);
																							// branch -> 0x366f8
																						} else {
																							// 0x3641c
																							function_2d72c(0);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x36434
																						if (v17 == 117) {
																							// 0x3643c
																							if (*(int32_t *)g33 == 0) {
																								// 0x36454
																								function_2d824(1);
																								// branch -> 0x366f8
																							} else {
																								// 0x36448
																								function_2d72c(1);
																								// branch -> 0x366f8
																							}
																							// Detected a possible infinite recursion (goto support failed); quitting...
																						} else {
																							// 0x36460
																							if (v17 == 118) {
																								// 0x36468
																								if (*(int32_t *)g33 == 0) {
																									// 0x36480
																									function_2d824(2);
																									// branch -> 0x366f8
																								} else {
																									// 0x36474
																									function_2d72c(2);
																									// branch -> 0x366f8
																								}
																								// Detected a possible infinite recursion (goto support failed); quitting...
																							} else {
																								// 0x3648c
																								if (v17 == 119) {
																									// 0x36494
																									if (*(int32_t *)g33 == 0) {
																										// 0x364ac
																										function_2d824(3);
																										// branch -> 0x366f8
																									} else {
																										// 0x364a0
																										function_2d72c(3);
																										// branch -> 0x366f8
																									}
																									// Detected a possible infinite recursion (goto support failed); quitting...
																								} else {
																									// 0x364b8
																									if (v17 == 120) {
																										// 0x364c0
																										diablo_hotkey_msg(0);
																										// branch -> 0x366f8
																									} else {
																										// 0x364cc
																										if (v17 == 121) {
																											// 0x364d4
																											diablo_hotkey_msg(1);
																											// branch -> 0x366f8
																										} else {
																											// 0x364e0
																											if (v17 == 122) {
																												// 0x364e8
																												diablo_hotkey_msg(2);
																												// branch -> 0x366f8
																											} else {
																												// 0x364f4
																												if (v17 == 123) {
																													// 0x364fc
																													diablo_hotkey_msg(3);
																													// branch -> 0x366f8
																												} else {
																													// 0x36508
																													if (v17 == 38) {
																														// 0x36510
																														if (*(char *)g32 == 0) {
																															// 0x36524
																															if (*(int32_t *)g31 == 0) {
																																// 0x36538
																																if (*(int32_t *)g26 == 0) {
																																	// 0x3654c
																																	if (*(int32_t *)g24 != 0) {
																																		// 0x36558
																																		AutomapUp();
																																		// branch -> 0x366f8
																																	}
																																} else {
																																	// 0x36544
																																	HelpScrollUp();
																																	// branch -> 0x366f8
																																}
																																// Detected a possible infinite recursion (goto support failed); quitting...
																															} else {
																																// 0x36530
																																QuestlogUp();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x3651c
																															STextUp();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36560
																														if (v17 == 40) {
																															// 0x36568
																															if (*(char *)g32 == 0) {
																																// 0x3657c
																																if (*(int32_t *)g31 == 0) {
																																	// 0x36590
																																	if (*(int32_t *)g26 == 0) {
																																		// 0x365a4
																																		if (*(int32_t *)g24 != 0) {
																																			// 0x365b0
																																			AutomapDown();
																																			// branch -> 0x366f8
																																		}
																																	} else {
																																		// 0x3659c
																																		HelpScrollDown();
																																		// branch -> 0x366f8
																																	}
																																	// Detected a possible infinite recursion (goto support failed); quitting...
																																} else {
																																	// 0x36588
																																	QuestlogDown();
																																	// branch -> 0x366f8
																																}
																																// Detected a possible infinite recursion (goto support failed); quitting...
																															} else {
																																// 0x36574
																																STextDown();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x365b8
																															if (v17 == 33) {
																																// 0x365c0
																																if (*(char *)g32 != 0) {
																																	// 0x365cc
																																	STextPrior();
																																	// branch -> 0x366f8
																																}
																															} else {
																																// 0x365d4
																																if (v17 == 34) {
																																	// 0x365dc
																																	if (*(char *)g32 != 0) {
																																		// 0x365e8
																																		STextNext();
																																		// branch -> 0x366f8
																																	}
																																} else {
																																	// 0x365f0
																																	if (v17 == 37) {
																																		// 0x365f8
																																		if (*(int32_t *)g24 != 0) {
																																			// 0x36604
																																			if (*(int32_t *)g27 == 0) {
																																				// 0x36610
																																				AutomapLeft();
																																				// branch -> 0x366f8
																																			}
																																		}
																																	} else {
																																		// 0x36618
																																		if (v17 == 39) {
																																			// 0x36620
																																			if (*(int32_t *)g24 != 0) {
																																				// 0x3662c
																																				if (*(int32_t *)g27 == 0) {
																																					// 0x36638
																																					AutomapRight();
																																					// branch -> 0x366f8
																																				}
																																			}
																																		} else {
																																			// 0x36640
																																			if (v17 == 9) {
																																				// 0x36648
																																				DoAutoMap();
																																				// branch -> 0x366f8
																																			} else {
																																				// 0x36650
																																				if (v17 == 32) {
																																					// 0x36658
																																					v19 = 1;
																																					if (*(int32_t *)g35 == 0) {
																																						// 0x36668
																																						if (*(int32_t *)g28 == 0) {
																																							// 0x36674
																																							v19 = 0;
																																							// branch -> 0x36678
																																						} else {
																																							v19 = 1;
																																						}
																																					}
																																					// 0x36678
																																					v18 = 1;
																																					if (*(int32_t *)g29 == 0) {
																																						// 0x36688
																																						if (*(int32_t *)g31 == 0) {
																																							// 0x36694
																																							v18 = 0;
																																							// branch -> 0x36698
																																						} else {
																																							v18 = 1;
																																						}
																																					}
																																					// 0x36698
																																					function_35ef8(v18, v19);
																																					v15 = 0;
																																					*(int32_t *)g26 = 0;
																																					*(int32_t *)g35 = v15;
																																					*(int32_t *)g29 = v15;
																																					*(int32_t *)g28 = v15;
																																					*(int32_t *)g33 = v15;
																																					v24 = (char *)g30;
																																					if (*v24 != 0) {
																																						// 0x366c8
																																						if (*(char *)g36 == 0) {
																																							// 0x366d4
																																							*v24 = (char)v15;
																																							g34 = function_4c0c8();
																																							function_6c704();
																																							// branch -> 0x366e0
																																						}
																																					}
																																					// 0x366e0
																																					v14 = 0;
																																					*(int32_t *)g31 = 0;
																																					*(int32_t *)g24 = v14;
																																					*(char *)g25 = (char)v14;
																																					v20 = gamemenu_off();
																																					doom_close(v20);
																																					// branch -> 0x366f8
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
																			}
																			// 0x36364
																			v21 = (int32_t *)g26;
																			if (*v21 == 0) {
																				// 0x3637c
																				if (*(char *)g32 == 0) {
																					// 0x363b0
																					v15 = 0;
																					*(int32_t *)g35 = 0;
																					*(int32_t *)g29 = v15;
																					*(int32_t *)g28 = v15;
																					*(int32_t *)g33 = v15;
																					v22 = (char *)g30;
																					if (*v22 != 0) {
																						// 0x363d0
																						if (*(char *)g36 == 0) {
																							// 0x363dc
																							*v22 = (char)v15;
																							g34 = function_4c0c8();
																							function_6c704();
																							// branch -> 0x363e8
																						}
																					}
																					// 0x363e8
																					v14 = 0;
																					*(int32_t *)g31 = 0;
																					*(int32_t *)g24 = v14;
																					*(char *)g25 = (char)v14;
																					v16 = gamemenu_off();
																					v23 = function_54964(v16);
																					doom_close(v23);
																					// branch -> 0x366f8
																				} else {
																					// 0x36388
																					function_2dc1c();
																					function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																					function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																					track_repeat_walk(0);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x36370
																				*v21 = 0;
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		}
																		// 0x36354
																		if (v17 != 112) {
																			// 0x3635c
																			if (v17 != 45) {
																				// 0x36408
																				if (v17 == 116) {
																					// 0x36410
																					if (*(int32_t *)g33 == 0) {
																						// 0x36428
																						function_2d824(0);
																						// branch -> 0x366f8
																					} else {
																						// 0x3641c
																						function_2d72c(0);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x36434
																					if (v17 == 117) {
																						// 0x3643c
																						if (*(int32_t *)g33 == 0) {
																							// 0x36454
																							function_2d824(1);
																							// branch -> 0x366f8
																						} else {
																							// 0x36448
																							function_2d72c(1);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x36460
																						if (v17 == 118) {
																							// 0x36468
																							if (*(int32_t *)g33 == 0) {
																								// 0x36480
																								function_2d824(2);
																								// branch -> 0x366f8
																							} else {
																								// 0x36474
																								function_2d72c(2);
																								// branch -> 0x366f8
																							}
																							// Detected a possible infinite recursion (goto support failed); quitting...
																						} else {
																							// 0x3648c
																							if (v17 == 119) {
																								// 0x36494
																								if (*(int32_t *)g33 == 0) {
																									// 0x364ac
																									function_2d824(3);
																									// branch -> 0x366f8
																								} else {
																									// 0x364a0
																									function_2d72c(3);
																									// branch -> 0x366f8
																								}
																								// Detected a possible infinite recursion (goto support failed); quitting...
																							} else {
																								// 0x364b8
																								if (v17 == 120) {
																									// 0x364c0
																									diablo_hotkey_msg(0);
																									// branch -> 0x366f8
																								} else {
																									// 0x364cc
																									if (v17 == 121) {
																										// 0x364d4
																										diablo_hotkey_msg(1);
																										// branch -> 0x366f8
																									} else {
																										// 0x364e0
																										if (v17 == 122) {
																											// 0x364e8
																											diablo_hotkey_msg(2);
																											// branch -> 0x366f8
																										} else {
																											// 0x364f4
																											if (v17 == 123) {
																												// 0x364fc
																												diablo_hotkey_msg(3);
																												// branch -> 0x366f8
																											} else {
																												// 0x36508
																												if (v17 == 38) {
																													// 0x36510
																													if (*(char *)g32 == 0) {
																														// 0x36524
																														if (*(int32_t *)g31 == 0) {
																															// 0x36538
																															if (*(int32_t *)g26 == 0) {
																																// 0x3654c
																																if (*(int32_t *)g24 != 0) {
																																	// 0x36558
																																	AutomapUp();
																																	// branch -> 0x366f8
																																}
																															} else {
																																// 0x36544
																																HelpScrollUp();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x36530
																															QuestlogUp();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x3651c
																														STextUp();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36560
																													if (v17 == 40) {
																														// 0x36568
																														if (*(char *)g32 == 0) {
																															// 0x3657c
																															if (*(int32_t *)g31 == 0) {
																																// 0x36590
																																if (*(int32_t *)g26 == 0) {
																																	// 0x365a4
																																	if (*(int32_t *)g24 != 0) {
																																		// 0x365b0
																																		AutomapDown();
																																		// branch -> 0x366f8
																																	}
																																} else {
																																	// 0x3659c
																																	HelpScrollDown();
																																	// branch -> 0x366f8
																																}
																																// Detected a possible infinite recursion (goto support failed); quitting...
																															} else {
																																// 0x36588
																																QuestlogDown();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x36574
																															STextDown();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x365b8
																														if (v17 == 33) {
																															// 0x365c0
																															if (*(char *)g32 != 0) {
																																// 0x365cc
																																STextPrior();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x365d4
																															if (v17 == 34) {
																																// 0x365dc
																																if (*(char *)g32 != 0) {
																																	// 0x365e8
																																	STextNext();
																																	// branch -> 0x366f8
																																}
																															} else {
																																// 0x365f0
																																if (v17 == 37) {
																																	// 0x365f8
																																	if (*(int32_t *)g24 != 0) {
																																		// 0x36604
																																		if (*(int32_t *)g27 == 0) {
																																			// 0x36610
																																			AutomapLeft();
																																			// branch -> 0x366f8
																																		}
																																	}
																																} else {
																																	// 0x36618
																																	if (v17 == 39) {
																																		// 0x36620
																																		if (*(int32_t *)g24 != 0) {
																																			// 0x3662c
																																			if (*(int32_t *)g27 == 0) {
																																				// 0x36638
																																				AutomapRight();
																																				// branch -> 0x366f8
																																			}
																																		}
																																	} else {
																																		// 0x36640
																																		if (v17 == 9) {
																																			// 0x36648
																																			DoAutoMap();
																																			// branch -> 0x366f8
																																		} else {
																																			// 0x36650
																																			if (v17 == 32) {
																																				// 0x36658
																																				v19 = 1;
																																				if (*(int32_t *)g35 == 0) {
																																					// 0x36668
																																					if (*(int32_t *)g28 == 0) {
																																						// 0x36674
																																						v19 = 0;
																																						// branch -> 0x36678
																																					} else {
																																						v19 = 1;
																																					}
																																				}
																																				// 0x36678
																																				v18 = 1;
																																				if (*(int32_t *)g29 == 0) {
																																					// 0x36688
																																					if (*(int32_t *)g31 == 0) {
																																						// 0x36694
																																						v18 = 0;
																																						// branch -> 0x36698
																																					} else {
																																						v18 = 1;
																																					}
																																				}
																																				// 0x36698
																																				function_35ef8(v18, v19);
																																				v15 = 0;
																																				*(int32_t *)g26 = 0;
																																				*(int32_t *)g35 = v15;
																																				*(int32_t *)g29 = v15;
																																				*(int32_t *)g28 = v15;
																																				*(int32_t *)g33 = v15;
																																				v24 = (char *)g30;
																																				if (*v24 != 0) {
																																					// 0x366c8
																																					if (*(char *)g36 == 0) {
																																						// 0x366d4
																																						*v24 = (char)v15;
																																						g34 = function_4c0c8();
																																						function_6c704();
																																						// branch -> 0x366e0
																																					}
																																				}
																																				// 0x366e0
																																				v14 = 0;
																																				*(int32_t *)g31 = 0;
																																				*(int32_t *)g24 = v14;
																																				*(char *)g25 = (char)v14;
																																				v20 = gamemenu_off();
																																				doom_close(v20);
																																				// branch -> 0x366f8
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
																		}
																		// 0x36364
																		v21 = (int32_t *)g26;
																		if (*v21 == 0) {
																			// 0x3637c
																			if (*(char *)g32 == 0) {
																				// 0x363b0
																				v15 = 0;
																				*(int32_t *)g35 = 0;
																				*(int32_t *)g29 = v15;
																				*(int32_t *)g28 = v15;
																				*(int32_t *)g33 = v15;
																				v22 = (char *)g30;
																				if (*v22 != 0) {
																					// 0x363d0
																					if (*(char *)g36 == 0) {
																						// 0x363dc
																						*v22 = (char)v15;
																						g34 = function_4c0c8();
																						function_6c704();
																						// branch -> 0x363e8
																					}
																				}
																				// 0x363e8
																				v14 = 0;
																				*(int32_t *)g31 = 0;
																				*(int32_t *)g24 = v14;
																				*(char *)g25 = (char)v14;
																				v16 = gamemenu_off();
																				v23 = function_54964(v16);
																				doom_close(v23);
																				// branch -> 0x366f8
																			} else {
																				// 0x36388
																				function_2dc1c();
																				function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																				function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																				track_repeat_walk(0);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x36370
																			*v21 = 0;
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																	// 0x36354
																	if (v17 != 112) {
																		// 0x3635c
																		if (v17 != 45) {
																			// 0x36408
																			if (v17 == 116) {
																				// 0x36410
																				if (*(int32_t *)g33 == 0) {
																					// 0x36428
																					function_2d824(0);
																					// branch -> 0x366f8
																				} else {
																					// 0x3641c
																					function_2d72c(0);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x36434
																				if (v17 == 117) {
																					// 0x3643c
																					if (*(int32_t *)g33 == 0) {
																						// 0x36454
																						function_2d824(1);
																						// branch -> 0x366f8
																					} else {
																						// 0x36448
																						function_2d72c(1);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x36460
																					if (v17 == 118) {
																						// 0x36468
																						if (*(int32_t *)g33 == 0) {
																							// 0x36480
																							function_2d824(2);
																							// branch -> 0x366f8
																						} else {
																							// 0x36474
																							function_2d72c(2);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x3648c
																						if (v17 == 119) {
																							// 0x36494
																							if (*(int32_t *)g33 == 0) {
																								// 0x364ac
																								function_2d824(3);
																								// branch -> 0x366f8
																							} else {
																								// 0x364a0
																								function_2d72c(3);
																								// branch -> 0x366f8
																							}
																							// Detected a possible infinite recursion (goto support failed); quitting...
																						} else {
																							// 0x364b8
																							if (v17 == 120) {
																								// 0x364c0
																								diablo_hotkey_msg(0);
																								// branch -> 0x366f8
																							} else {
																								// 0x364cc
																								if (v17 == 121) {
																									// 0x364d4
																									diablo_hotkey_msg(1);
																									// branch -> 0x366f8
																								} else {
																									// 0x364e0
																									if (v17 == 122) {
																										// 0x364e8
																										diablo_hotkey_msg(2);
																										// branch -> 0x366f8
																									} else {
																										// 0x364f4
																										if (v17 == 123) {
																											// 0x364fc
																											diablo_hotkey_msg(3);
																											// branch -> 0x366f8
																										} else {
																											// 0x36508
																											if (v17 == 38) {
																												// 0x36510
																												if (*(char *)g32 == 0) {
																													// 0x36524
																													if (*(int32_t *)g31 == 0) {
																														// 0x36538
																														if (*(int32_t *)g26 == 0) {
																															// 0x3654c
																															if (*(int32_t *)g24 != 0) {
																																// 0x36558
																																AutomapUp();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x36544
																															HelpScrollUp();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36530
																														QuestlogUp();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x3651c
																													STextUp();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36560
																												if (v17 == 40) {
																													// 0x36568
																													if (*(char *)g32 == 0) {
																														// 0x3657c
																														if (*(int32_t *)g31 == 0) {
																															// 0x36590
																															if (*(int32_t *)g26 == 0) {
																																// 0x365a4
																																if (*(int32_t *)g24 != 0) {
																																	// 0x365b0
																																	AutomapDown();
																																	// branch -> 0x366f8
																																}
																															} else {
																																// 0x3659c
																																HelpScrollDown();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x36588
																															QuestlogDown();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36574
																														STextDown();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x365b8
																													if (v17 == 33) {
																														// 0x365c0
																														if (*(char *)g32 != 0) {
																															// 0x365cc
																															STextPrior();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x365d4
																														if (v17 == 34) {
																															// 0x365dc
																															if (*(char *)g32 != 0) {
																																// 0x365e8
																																STextNext();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x365f0
																															if (v17 == 37) {
																																// 0x365f8
																																if (*(int32_t *)g24 != 0) {
																																	// 0x36604
																																	if (*(int32_t *)g27 == 0) {
																																		// 0x36610
																																		AutomapLeft();
																																		// branch -> 0x366f8
																																	}
																																}
																															} else {
																																// 0x36618
																																if (v17 == 39) {
																																	// 0x36620
																																	if (*(int32_t *)g24 != 0) {
																																		// 0x3662c
																																		if (*(int32_t *)g27 == 0) {
																																			// 0x36638
																																			AutomapRight();
																																			// branch -> 0x366f8
																																		}
																																	}
																																} else {
																																	// 0x36640
																																	if (v17 == 9) {
																																		// 0x36648
																																		DoAutoMap();
																																		// branch -> 0x366f8
																																	} else {
																																		// 0x36650
																																		if (v17 == 32) {
																																			// 0x36658
																																			v19 = 1;
																																			if (*(int32_t *)g35 == 0) {
																																				// 0x36668
																																				if (*(int32_t *)g28 == 0) {
																																					// 0x36674
																																					v19 = 0;
																																					// branch -> 0x36678
																																				} else {
																																					v19 = 1;
																																				}
																																			}
																																			// 0x36678
																																			v18 = 1;
																																			if (*(int32_t *)g29 == 0) {
																																				// 0x36688
																																				if (*(int32_t *)g31 == 0) {
																																					// 0x36694
																																					v18 = 0;
																																					// branch -> 0x36698
																																				} else {
																																					v18 = 1;
																																				}
																																			}
																																			// 0x36698
																																			function_35ef8(v18, v19);
																																			v15 = 0;
																																			*(int32_t *)g26 = 0;
																																			*(int32_t *)g35 = v15;
																																			*(int32_t *)g29 = v15;
																																			*(int32_t *)g28 = v15;
																																			*(int32_t *)g33 = v15;
																																			v24 = (char *)g30;
																																			if (*v24 != 0) {
																																				// 0x366c8
																																				if (*(char *)g36 == 0) {
																																					// 0x366d4
																																					*v24 = (char)v15;
																																					g34 = function_4c0c8();
																																					function_6c704();
																																					// branch -> 0x366e0
																																				}
																																			}
																																			// 0x366e0
																																			v14 = 0;
																																			*(int32_t *)g31 = 0;
																																			*(int32_t *)g24 = v14;
																																			*(char *)g25 = (char)v14;
																																			v20 = gamemenu_off();
																																			doom_close(v20);
																																			// branch -> 0x366f8
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
																	}
																	// 0x36364
																	v21 = (int32_t *)g26;
																	if (*v21 == 0) {
																		// 0x3637c
																		if (*(char *)g32 == 0) {
																			// 0x363b0
																			v15 = 0;
																			*(int32_t *)g35 = 0;
																			*(int32_t *)g29 = v15;
																			*(int32_t *)g28 = v15;
																			*(int32_t *)g33 = v15;
																			v22 = (char *)g30;
																			if (*v22 != 0) {
																				// 0x363d0
																				if (*(char *)g36 == 0) {
																					// 0x363dc
																					*v22 = (char)v15;
																					g34 = function_4c0c8();
																					function_6c704();
																					// branch -> 0x363e8
																				}
																			}
																			// 0x363e8
																			v14 = 0;
																			*(int32_t *)g31 = 0;
																			*(int32_t *)g24 = v14;
																			*(char *)g25 = (char)v14;
																			v16 = gamemenu_off();
																			v23 = function_54964(v16);
																			doom_close(v23);
																			// branch -> 0x366f8
																		} else {
																			// 0x36388
																			function_2dc1c();
																			function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																			function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																			track_repeat_walk(0);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36370
																		*v21 = 0;
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x361d8
					if (function_54224(v3) == 0) {
						// 0x361e8
						if (function_322ec(g22) == 0) {
							// 0x361f8
							v4 = g23;
							if (*(int32_t *)*(int32_t *)(v4 - 0x75cc) == 0) {
								// 0x361f8
								v12 = g22;
								// branch -> 0x36268
								// 0x36268
								if (v12 == 27) {
									// 0x36270
									if (function_35fdc() == 0) {
										// 0x3627c
										track_repeat_walk(0);
										gamemenu_previous(0);
										// branch -> 0x366f8
									}
								} else {
									// 0x36290
									v11 = g23;
									if (*(int32_t *)(v11 - 0x4f54) == 0) {
										// 0x3629c
										if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
											// 0x362ac
											if (v12 == 19) {
												// 0x362b4
												diablo_pause_game();
												// branch -> 0x366f8
											} else {
												// 0x362bc
												v13 = *(int32_t *)(v11 - 0x75d0);
												if (*(int32_t *)v13 != 2) {
													// 0x362cc
													if (v12 == 13) {
														// 0x362d4
														if (*(char *)g32 == 0) {
															// 0x362e8
															if (*(int32_t *)g31 == 0) {
																// 0x362fc
																function_31ee8();
																// branch -> 0x366f8
															} else {
																// 0x362f4
																QuestlogEnter();
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														} else {
															// 0x362e0
															function_bd780(v13);
															// branch -> 0x366f8
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x36304
														v17 = v12;
														if (*(int32_t *)(v11 - 0x4f58) != 0) {
															// 0x36310
															if (v12 == 114) {
																// 0x36348
																v17 = 118;
																// branch -> 0x36354
															} else {
																// 0x36318
																if (v12 > 114) {
																	// 0x3632c
																	if (v12 == 115) {
																		// 0x36350
																		v17 = 119;
																		// branch -> 0x36354
																	} else {
																		v17 = v12;
																	}
																} else {
																	// 0x3631c
																	if (v12 == 112) {
																		// 0x36338
																		v17 = 116;
																		// branch -> 0x36354
																	} else {
																		// 0x36324
																		if (v12 > 112) {
																			// 0x36340
																			v17 = 117;
																			// branch -> 0x36354
																		} else {
																			v17 = v12;
																		}
																	}
																	// 0x36354
																	if (v17 != 112) {
																		// 0x3635c
																		if (v17 != 45) {
																			// 0x36408
																			if (v17 == 116) {
																				// 0x36410
																				if (*(int32_t *)g33 == 0) {
																					// 0x36428
																					function_2d824(0);
																					// branch -> 0x366f8
																				} else {
																					// 0x3641c
																					function_2d72c(0);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x36434
																				if (v17 == 117) {
																					// 0x3643c
																					if (*(int32_t *)g33 == 0) {
																						// 0x36454
																						function_2d824(1);
																						// branch -> 0x366f8
																					} else {
																						// 0x36448
																						function_2d72c(1);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x36460
																					if (v17 == 118) {
																						// 0x36468
																						if (*(int32_t *)g33 == 0) {
																							// 0x36480
																							function_2d824(2);
																							// branch -> 0x366f8
																						} else {
																							// 0x36474
																							function_2d72c(2);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x3648c
																						if (v17 == 119) {
																							// 0x36494
																							if (*(int32_t *)g33 == 0) {
																								// 0x364ac
																								function_2d824(3);
																								// branch -> 0x366f8
																							} else {
																								// 0x364a0
																								function_2d72c(3);
																								// branch -> 0x366f8
																							}
																							// Detected a possible infinite recursion (goto support failed); quitting...
																						} else {
																							// 0x364b8
																							if (v17 == 120) {
																								// 0x364c0
																								diablo_hotkey_msg(0);
																								// branch -> 0x366f8
																							} else {
																								// 0x364cc
																								if (v17 == 121) {
																									// 0x364d4
																									diablo_hotkey_msg(1);
																									// branch -> 0x366f8
																								} else {
																									// 0x364e0
																									if (v17 == 122) {
																										// 0x364e8
																										diablo_hotkey_msg(2);
																										// branch -> 0x366f8
																									} else {
																										// 0x364f4
																										if (v17 == 123) {
																											// 0x364fc
																											diablo_hotkey_msg(3);
																											// branch -> 0x366f8
																										} else {
																											// 0x36508
																											if (v17 == 38) {
																												// 0x36510
																												if (*(char *)g32 == 0) {
																													// 0x36524
																													if (*(int32_t *)g31 == 0) {
																														// 0x36538
																														if (*(int32_t *)g26 == 0) {
																															// 0x3654c
																															if (*(int32_t *)g24 != 0) {
																																// 0x36558
																																AutomapUp();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x36544
																															HelpScrollUp();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36530
																														QuestlogUp();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x3651c
																													STextUp();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36560
																												if (v17 == 40) {
																													// 0x36568
																													if (*(char *)g32 == 0) {
																														// 0x3657c
																														if (*(int32_t *)g31 == 0) {
																															// 0x36590
																															if (*(int32_t *)g26 == 0) {
																																// 0x365a4
																																if (*(int32_t *)g24 != 0) {
																																	// 0x365b0
																																	AutomapDown();
																																	// branch -> 0x366f8
																																}
																															} else {
																																// 0x3659c
																																HelpScrollDown();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x36588
																															QuestlogDown();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36574
																														STextDown();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x365b8
																													if (v17 == 33) {
																														// 0x365c0
																														if (*(char *)g32 != 0) {
																															// 0x365cc
																															STextPrior();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x365d4
																														if (v17 == 34) {
																															// 0x365dc
																															if (*(char *)g32 != 0) {
																																// 0x365e8
																																STextNext();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x365f0
																															if (v17 == 37) {
																																// 0x365f8
																																if (*(int32_t *)g24 != 0) {
																																	// 0x36604
																																	if (*(int32_t *)g27 == 0) {
																																		// 0x36610
																																		AutomapLeft();
																																		// branch -> 0x366f8
																																	}
																																}
																															} else {
																																// 0x36618
																																if (v17 == 39) {
																																	// 0x36620
																																	if (*(int32_t *)g24 != 0) {
																																		// 0x3662c
																																		if (*(int32_t *)g27 == 0) {
																																			// 0x36638
																																			AutomapRight();
																																			// branch -> 0x366f8
																																		}
																																	}
																																} else {
																																	// 0x36640
																																	if (v17 == 9) {
																																		// 0x36648
																																		DoAutoMap();
																																		// branch -> 0x366f8
																																	} else {
																																		// 0x36650
																																		if (v17 == 32) {
																																			// 0x36658
																																			v19 = 1;
																																			if (*(int32_t *)g35 == 0) {
																																				// 0x36668
																																				if (*(int32_t *)g28 == 0) {
																																					// 0x36674
																																					v19 = 0;
																																					// branch -> 0x36678
																																				} else {
																																					v19 = 1;
																																				}
																																			}
																																			// 0x36678
																																			v18 = 1;
																																			if (*(int32_t *)g29 == 0) {
																																				// 0x36688
																																				if (*(int32_t *)g31 == 0) {
																																					// 0x36694
																																					v18 = 0;
																																					// branch -> 0x36698
																																				} else {
																																					v18 = 1;
																																				}
																																			}
																																			// 0x36698
																																			function_35ef8(v18, v19);
																																			v15 = 0;
																																			*(int32_t *)g26 = 0;
																																			*(int32_t *)g35 = v15;
																																			*(int32_t *)g29 = v15;
																																			*(int32_t *)g28 = v15;
																																			*(int32_t *)g33 = v15;
																																			v24 = (char *)g30;
																																			if (*v24 != 0) {
																																				// 0x366c8
																																				if (*(char *)g36 == 0) {
																																					// 0x366d4
																																					*v24 = (char)v15;
																																					g34 = function_4c0c8();
																																					function_6c704();
																																					// branch -> 0x366e0
																																				}
																																			}
																																			// 0x366e0
																																			v14 = 0;
																																			*(int32_t *)g31 = 0;
																																			*(int32_t *)g24 = v14;
																																			*(char *)g25 = (char)v14;
																																			v20 = gamemenu_off();
																																			doom_close(v20);
																																			// branch -> 0x366f8
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
																	}
																	// 0x36364
																	v21 = (int32_t *)g26;
																	if (*v21 == 0) {
																		// 0x3637c
																		if (*(char *)g32 == 0) {
																			// 0x363b0
																			v15 = 0;
																			*(int32_t *)g35 = 0;
																			*(int32_t *)g29 = v15;
																			*(int32_t *)g28 = v15;
																			*(int32_t *)g33 = v15;
																			v22 = (char *)g30;
																			if (*v22 != 0) {
																				// 0x363d0
																				if (*(char *)g36 == 0) {
																					// 0x363dc
																					*v22 = (char)v15;
																					g34 = function_4c0c8();
																					function_6c704();
																					// branch -> 0x363e8
																				}
																			}
																			// 0x363e8
																			v14 = 0;
																			*(int32_t *)g31 = 0;
																			*(int32_t *)g24 = v14;
																			*(char *)g25 = (char)v14;
																			v16 = gamemenu_off();
																			v23 = function_54964(v16);
																			doom_close(v23);
																			// branch -> 0x366f8
																		} else {
																			// 0x36388
																			function_2dc1c();
																			function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																			function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																			track_repeat_walk(0);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36370
																		*v21 = 0;
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
																// 0x36354
																if (v17 != 112) {
																	// 0x3635c
																	if (v17 != 45) {
																		// 0x36408
																		if (v17 == 116) {
																			// 0x36410
																			if (*(int32_t *)g33 == 0) {
																				// 0x36428
																				function_2d824(0);
																				// branch -> 0x366f8
																			} else {
																				// 0x3641c
																				function_2d72c(0);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x36434
																			if (v17 == 117) {
																				// 0x3643c
																				if (*(int32_t *)g33 == 0) {
																					// 0x36454
																					function_2d824(1);
																					// branch -> 0x366f8
																				} else {
																					// 0x36448
																					function_2d72c(1);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x36460
																				if (v17 == 118) {
																					// 0x36468
																					if (*(int32_t *)g33 == 0) {
																						// 0x36480
																						function_2d824(2);
																						// branch -> 0x366f8
																					} else {
																						// 0x36474
																						function_2d72c(2);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x3648c
																					if (v17 == 119) {
																						// 0x36494
																						if (*(int32_t *)g33 == 0) {
																							// 0x364ac
																							function_2d824(3);
																							// branch -> 0x366f8
																						} else {
																							// 0x364a0
																							function_2d72c(3);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x364b8
																						if (v17 == 120) {
																							// 0x364c0
																							diablo_hotkey_msg(0);
																							// branch -> 0x366f8
																						} else {
																							// 0x364cc
																							if (v17 == 121) {
																								// 0x364d4
																								diablo_hotkey_msg(1);
																								// branch -> 0x366f8
																							} else {
																								// 0x364e0
																								if (v17 == 122) {
																									// 0x364e8
																									diablo_hotkey_msg(2);
																									// branch -> 0x366f8
																								} else {
																									// 0x364f4
																									if (v17 == 123) {
																										// 0x364fc
																										diablo_hotkey_msg(3);
																										// branch -> 0x366f8
																									} else {
																										// 0x36508
																										if (v17 == 38) {
																											// 0x36510
																											if (*(char *)g32 == 0) {
																												// 0x36524
																												if (*(int32_t *)g31 == 0) {
																													// 0x36538
																													if (*(int32_t *)g26 == 0) {
																														// 0x3654c
																														if (*(int32_t *)g24 != 0) {
																															// 0x36558
																															AutomapUp();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x36544
																														HelpScrollUp();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36530
																													QuestlogUp();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x3651c
																												STextUp();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x36560
																											if (v17 == 40) {
																												// 0x36568
																												if (*(char *)g32 == 0) {
																													// 0x3657c
																													if (*(int32_t *)g31 == 0) {
																														// 0x36590
																														if (*(int32_t *)g26 == 0) {
																															// 0x365a4
																															if (*(int32_t *)g24 != 0) {
																																// 0x365b0
																																AutomapDown();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x3659c
																															HelpScrollDown();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36588
																														QuestlogDown();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36574
																													STextDown();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x365b8
																												if (v17 == 33) {
																													// 0x365c0
																													if (*(char *)g32 != 0) {
																														// 0x365cc
																														STextPrior();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x365d4
																													if (v17 == 34) {
																														// 0x365dc
																														if (*(char *)g32 != 0) {
																															// 0x365e8
																															STextNext();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x365f0
																														if (v17 == 37) {
																															// 0x365f8
																															if (*(int32_t *)g24 != 0) {
																																// 0x36604
																																if (*(int32_t *)g27 == 0) {
																																	// 0x36610
																																	AutomapLeft();
																																	// branch -> 0x366f8
																																}
																															}
																														} else {
																															// 0x36618
																															if (v17 == 39) {
																																// 0x36620
																																if (*(int32_t *)g24 != 0) {
																																	// 0x3662c
																																	if (*(int32_t *)g27 == 0) {
																																		// 0x36638
																																		AutomapRight();
																																		// branch -> 0x366f8
																																	}
																																}
																															} else {
																																// 0x36640
																																if (v17 == 9) {
																																	// 0x36648
																																	DoAutoMap();
																																	// branch -> 0x366f8
																																} else {
																																	// 0x36650
																																	if (v17 == 32) {
																																		// 0x36658
																																		v19 = 1;
																																		if (*(int32_t *)g35 == 0) {
																																			// 0x36668
																																			if (*(int32_t *)g28 == 0) {
																																				// 0x36674
																																				v19 = 0;
																																				// branch -> 0x36678
																																			} else {
																																				v19 = 1;
																																			}
																																		}
																																		// 0x36678
																																		v18 = 1;
																																		if (*(int32_t *)g29 == 0) {
																																			// 0x36688
																																			if (*(int32_t *)g31 == 0) {
																																				// 0x36694
																																				v18 = 0;
																																				// branch -> 0x36698
																																			} else {
																																				v18 = 1;
																																			}
																																		}
																																		// 0x36698
																																		function_35ef8(v18, v19);
																																		v15 = 0;
																																		*(int32_t *)g26 = 0;
																																		*(int32_t *)g35 = v15;
																																		*(int32_t *)g29 = v15;
																																		*(int32_t *)g28 = v15;
																																		*(int32_t *)g33 = v15;
																																		v24 = (char *)g30;
																																		if (*v24 != 0) {
																																			// 0x366c8
																																			if (*(char *)g36 == 0) {
																																				// 0x366d4
																																				*v24 = (char)v15;
																																				g34 = function_4c0c8();
																																				function_6c704();
																																				// branch -> 0x366e0
																																			}
																																		}
																																		// 0x366e0
																																		v14 = 0;
																																		*(int32_t *)g31 = 0;
																																		*(int32_t *)g24 = v14;
																																		*(char *)g25 = (char)v14;
																																		v20 = gamemenu_off();
																																		doom_close(v20);
																																		// branch -> 0x366f8
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
																}
																// 0x36364
																v21 = (int32_t *)g26;
																if (*v21 == 0) {
																	// 0x3637c
																	if (*(char *)g32 == 0) {
																		// 0x363b0
																		v15 = 0;
																		*(int32_t *)g35 = 0;
																		*(int32_t *)g29 = v15;
																		*(int32_t *)g28 = v15;
																		*(int32_t *)g33 = v15;
																		v22 = (char *)g30;
																		if (*v22 != 0) {
																			// 0x363d0
																			if (*(char *)g36 == 0) {
																				// 0x363dc
																				*v22 = (char)v15;
																				g34 = function_4c0c8();
																				function_6c704();
																				// branch -> 0x363e8
																			}
																		}
																		// 0x363e8
																		v14 = 0;
																		*(int32_t *)g31 = 0;
																		*(int32_t *)g24 = v14;
																		*(char *)g25 = (char)v14;
																		v16 = gamemenu_off();
																		v23 = function_54964(v16);
																		doom_close(v23);
																		// branch -> 0x366f8
																	} else {
																		// 0x36388
																		function_2dc1c();
																		function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																		function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																		track_repeat_walk(0);
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x36370
																	*v21 = 0;
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
															// 0x36354
															if (v17 != 112) {
																// 0x3635c
																if (v17 != 45) {
																	// 0x36408
																	if (v17 == 116) {
																		// 0x36410
																		if (*(int32_t *)g33 == 0) {
																			// 0x36428
																			function_2d824(0);
																			// branch -> 0x366f8
																		} else {
																			// 0x3641c
																			function_2d72c(0);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36434
																		if (v17 == 117) {
																			// 0x3643c
																			if (*(int32_t *)g33 == 0) {
																				// 0x36454
																				function_2d824(1);
																				// branch -> 0x366f8
																			} else {
																				// 0x36448
																				function_2d72c(1);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x36460
																			if (v17 == 118) {
																				// 0x36468
																				if (*(int32_t *)g33 == 0) {
																					// 0x36480
																					function_2d824(2);
																					// branch -> 0x366f8
																				} else {
																					// 0x36474
																					function_2d72c(2);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x3648c
																				if (v17 == 119) {
																					// 0x36494
																					if (*(int32_t *)g33 == 0) {
																						// 0x364ac
																						function_2d824(3);
																						// branch -> 0x366f8
																					} else {
																						// 0x364a0
																						function_2d72c(3);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x364b8
																					if (v17 == 120) {
																						// 0x364c0
																						diablo_hotkey_msg(0);
																						// branch -> 0x366f8
																					} else {
																						// 0x364cc
																						if (v17 == 121) {
																							// 0x364d4
																							diablo_hotkey_msg(1);
																							// branch -> 0x366f8
																						} else {
																							// 0x364e0
																							if (v17 == 122) {
																								// 0x364e8
																								diablo_hotkey_msg(2);
																								// branch -> 0x366f8
																							} else {
																								// 0x364f4
																								if (v17 == 123) {
																									// 0x364fc
																									diablo_hotkey_msg(3);
																									// branch -> 0x366f8
																								} else {
																									// 0x36508
																									if (v17 == 38) {
																										// 0x36510
																										if (*(char *)g32 == 0) {
																											// 0x36524
																											if (*(int32_t *)g31 == 0) {
																												// 0x36538
																												if (*(int32_t *)g26 == 0) {
																													// 0x3654c
																													if (*(int32_t *)g24 != 0) {
																														// 0x36558
																														AutomapUp();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x36544
																													HelpScrollUp();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36530
																												QuestlogUp();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x3651c
																											STextUp();
																											// branch -> 0x366f8
																										}
																										// Detected a possible infinite recursion (goto support failed); quitting...
																									} else {
																										// 0x36560
																										if (v17 == 40) {
																											// 0x36568
																											if (*(char *)g32 == 0) {
																												// 0x3657c
																												if (*(int32_t *)g31 == 0) {
																													// 0x36590
																													if (*(int32_t *)g26 == 0) {
																														// 0x365a4
																														if (*(int32_t *)g24 != 0) {
																															// 0x365b0
																															AutomapDown();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x3659c
																														HelpScrollDown();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36588
																													QuestlogDown();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36574
																												STextDown();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x365b8
																											if (v17 == 33) {
																												// 0x365c0
																												if (*(char *)g32 != 0) {
																													// 0x365cc
																													STextPrior();
																													// branch -> 0x366f8
																												}
																											} else {
																												// 0x365d4
																												if (v17 == 34) {
																													// 0x365dc
																													if (*(char *)g32 != 0) {
																														// 0x365e8
																														STextNext();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x365f0
																													if (v17 == 37) {
																														// 0x365f8
																														if (*(int32_t *)g24 != 0) {
																															// 0x36604
																															if (*(int32_t *)g27 == 0) {
																																// 0x36610
																																AutomapLeft();
																																// branch -> 0x366f8
																															}
																														}
																													} else {
																														// 0x36618
																														if (v17 == 39) {
																															// 0x36620
																															if (*(int32_t *)g24 != 0) {
																																// 0x3662c
																																if (*(int32_t *)g27 == 0) {
																																	// 0x36638
																																	AutomapRight();
																																	// branch -> 0x366f8
																																}
																															}
																														} else {
																															// 0x36640
																															if (v17 == 9) {
																																// 0x36648
																																DoAutoMap();
																																// branch -> 0x366f8
																															} else {
																																// 0x36650
																																if (v17 == 32) {
																																	// 0x36658
																																	v19 = 1;
																																	if (*(int32_t *)g35 == 0) {
																																		// 0x36668
																																		if (*(int32_t *)g28 == 0) {
																																			// 0x36674
																																			v19 = 0;
																																			// branch -> 0x36678
																																		} else {
																																			v19 = 1;
																																		}
																																	}
																																	// 0x36678
																																	v18 = 1;
																																	if (*(int32_t *)g29 == 0) {
																																		// 0x36688
																																		if (*(int32_t *)g31 == 0) {
																																			// 0x36694
																																			v18 = 0;
																																			// branch -> 0x36698
																																		} else {
																																			v18 = 1;
																																		}
																																	}
																																	// 0x36698
																																	function_35ef8(v18, v19);
																																	v15 = 0;
																																	*(int32_t *)g26 = 0;
																																	*(int32_t *)g35 = v15;
																																	*(int32_t *)g29 = v15;
																																	*(int32_t *)g28 = v15;
																																	*(int32_t *)g33 = v15;
																																	v24 = (char *)g30;
																																	if (*v24 != 0) {
																																		// 0x366c8
																																		if (*(char *)g36 == 0) {
																																			// 0x366d4
																																			*v24 = (char)v15;
																																			g34 = function_4c0c8();
																																			function_6c704();
																																			// branch -> 0x366e0
																																		}
																																	}
																																	// 0x366e0
																																	v14 = 0;
																																	*(int32_t *)g31 = 0;
																																	*(int32_t *)g24 = v14;
																																	*(char *)g25 = (char)v14;
																																	v20 = gamemenu_off();
																																	doom_close(v20);
																																	// branch -> 0x366f8
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
															}
															// 0x36364
															v21 = (int32_t *)g26;
															if (*v21 == 0) {
																// 0x3637c
																if (*(char *)g32 == 0) {
																	// 0x363b0
																	v15 = 0;
																	*(int32_t *)g35 = 0;
																	*(int32_t *)g29 = v15;
																	*(int32_t *)g28 = v15;
																	*(int32_t *)g33 = v15;
																	v22 = (char *)g30;
																	if (*v22 != 0) {
																		// 0x363d0
																		if (*(char *)g36 == 0) {
																			// 0x363dc
																			*v22 = (char)v15;
																			g34 = function_4c0c8();
																			function_6c704();
																			// branch -> 0x363e8
																		}
																	}
																	// 0x363e8
																	v14 = 0;
																	*(int32_t *)g31 = 0;
																	*(int32_t *)g24 = v14;
																	*(char *)g25 = (char)v14;
																	v16 = gamemenu_off();
																	v23 = function_54964(v16);
																	doom_close(v23);
																	// branch -> 0x366f8
																} else {
																	// 0x36388
																	function_2dc1c();
																	function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																	function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																	track_repeat_walk(0);
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															} else {
																// 0x36370
																*v21 = 0;
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
														// 0x36354
														if (v17 != 112) {
															// 0x3635c
															if (v17 != 45) {
																// 0x36408
																if (v17 == 116) {
																	// 0x36410
																	if (*(int32_t *)g33 == 0) {
																		// 0x36428
																		function_2d824(0);
																		// branch -> 0x366f8
																	} else {
																		// 0x3641c
																		function_2d72c(0);
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x36434
																	if (v17 == 117) {
																		// 0x3643c
																		if (*(int32_t *)g33 == 0) {
																			// 0x36454
																			function_2d824(1);
																			// branch -> 0x366f8
																		} else {
																			// 0x36448
																			function_2d72c(1);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36460
																		if (v17 == 118) {
																			// 0x36468
																			if (*(int32_t *)g33 == 0) {
																				// 0x36480
																				function_2d824(2);
																				// branch -> 0x366f8
																			} else {
																				// 0x36474
																				function_2d72c(2);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x3648c
																			if (v17 == 119) {
																				// 0x36494
																				if (*(int32_t *)g33 == 0) {
																					// 0x364ac
																					function_2d824(3);
																					// branch -> 0x366f8
																				} else {
																					// 0x364a0
																					function_2d72c(3);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x364b8
																				if (v17 == 120) {
																					// 0x364c0
																					diablo_hotkey_msg(0);
																					// branch -> 0x366f8
																				} else {
																					// 0x364cc
																					if (v17 == 121) {
																						// 0x364d4
																						diablo_hotkey_msg(1);
																						// branch -> 0x366f8
																					} else {
																						// 0x364e0
																						if (v17 == 122) {
																							// 0x364e8
																							diablo_hotkey_msg(2);
																							// branch -> 0x366f8
																						} else {
																							// 0x364f4
																							if (v17 == 123) {
																								// 0x364fc
																								diablo_hotkey_msg(3);
																								// branch -> 0x366f8
																							} else {
																								// 0x36508
																								if (v17 == 38) {
																									// 0x36510
																									if (*(char *)g32 == 0) {
																										// 0x36524
																										if (*(int32_t *)g31 == 0) {
																											// 0x36538
																											if (*(int32_t *)g26 == 0) {
																												// 0x3654c
																												if (*(int32_t *)g24 != 0) {
																													// 0x36558
																													AutomapUp();
																													// branch -> 0x366f8
																												}
																											} else {
																												// 0x36544
																												HelpScrollUp();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x36530
																											QuestlogUp();
																											// branch -> 0x366f8
																										}
																										// Detected a possible infinite recursion (goto support failed); quitting...
																									} else {
																										// 0x3651c
																										STextUp();
																										// branch -> 0x366f8
																									}
																									// Detected a possible infinite recursion (goto support failed); quitting...
																								} else {
																									// 0x36560
																									if (v17 == 40) {
																										// 0x36568
																										if (*(char *)g32 == 0) {
																											// 0x3657c
																											if (*(int32_t *)g31 == 0) {
																												// 0x36590
																												if (*(int32_t *)g26 == 0) {
																													// 0x365a4
																													if (*(int32_t *)g24 != 0) {
																														// 0x365b0
																														AutomapDown();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x3659c
																													HelpScrollDown();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36588
																												QuestlogDown();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x36574
																											STextDown();
																											// branch -> 0x366f8
																										}
																										// Detected a possible infinite recursion (goto support failed); quitting...
																									} else {
																										// 0x365b8
																										if (v17 == 33) {
																											// 0x365c0
																											if (*(char *)g32 != 0) {
																												// 0x365cc
																												STextPrior();
																												// branch -> 0x366f8
																											}
																										} else {
																											// 0x365d4
																											if (v17 == 34) {
																												// 0x365dc
																												if (*(char *)g32 != 0) {
																													// 0x365e8
																													STextNext();
																													// branch -> 0x366f8
																												}
																											} else {
																												// 0x365f0
																												if (v17 == 37) {
																													// 0x365f8
																													if (*(int32_t *)g24 != 0) {
																														// 0x36604
																														if (*(int32_t *)g27 == 0) {
																															// 0x36610
																															AutomapLeft();
																															// branch -> 0x366f8
																														}
																													}
																												} else {
																													// 0x36618
																													if (v17 == 39) {
																														// 0x36620
																														if (*(int32_t *)g24 != 0) {
																															// 0x3662c
																															if (*(int32_t *)g27 == 0) {
																																// 0x36638
																																AutomapRight();
																																// branch -> 0x366f8
																															}
																														}
																													} else {
																														// 0x36640
																														if (v17 == 9) {
																															// 0x36648
																															DoAutoMap();
																															// branch -> 0x366f8
																														} else {
																															// 0x36650
																															if (v17 == 32) {
																																// 0x36658
																																v19 = 1;
																																if (*(int32_t *)g35 == 0) {
																																	// 0x36668
																																	if (*(int32_t *)g28 == 0) {
																																		// 0x36674
																																		v19 = 0;
																																		// branch -> 0x36678
																																	} else {
																																		v19 = 1;
																																	}
																																}
																																// 0x36678
																																v18 = 1;
																																if (*(int32_t *)g29 == 0) {
																																	// 0x36688
																																	if (*(int32_t *)g31 == 0) {
																																		// 0x36694
																																		v18 = 0;
																																		// branch -> 0x36698
																																	} else {
																																		v18 = 1;
																																	}
																																}
																																// 0x36698
																																function_35ef8(v18, v19);
																																v15 = 0;
																																*(int32_t *)g26 = 0;
																																*(int32_t *)g35 = v15;
																																*(int32_t *)g29 = v15;
																																*(int32_t *)g28 = v15;
																																*(int32_t *)g33 = v15;
																																v24 = (char *)g30;
																																if (*v24 != 0) {
																																	// 0x366c8
																																	if (*(char *)g36 == 0) {
																																		// 0x366d4
																																		*v24 = (char)v15;
																																		g34 = function_4c0c8();
																																		function_6c704();
																																		// branch -> 0x366e0
																																	}
																																}
																																// 0x366e0
																																v14 = 0;
																																*(int32_t *)g31 = 0;
																																*(int32_t *)g24 = v14;
																																*(char *)g25 = (char)v14;
																																v20 = gamemenu_off();
																																doom_close(v20);
																																// branch -> 0x366f8
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
														}
														// 0x36364
														v21 = (int32_t *)g26;
														if (*v21 == 0) {
															// 0x3637c
															if (*(char *)g32 == 0) {
																// 0x363b0
																v15 = 0;
																*(int32_t *)g35 = 0;
																*(int32_t *)g29 = v15;
																*(int32_t *)g28 = v15;
																*(int32_t *)g33 = v15;
																v22 = (char *)g30;
																if (*v22 != 0) {
																	// 0x363d0
																	if (*(char *)g36 == 0) {
																		// 0x363dc
																		*v22 = (char)v15;
																		g34 = function_4c0c8();
																		function_6c704();
																		// branch -> 0x363e8
																	}
																}
																// 0x363e8
																v14 = 0;
																*(int32_t *)g31 = 0;
																*(int32_t *)g24 = v14;
																*(char *)g25 = (char)v14;
																v16 = gamemenu_off();
																v23 = function_54964(v16);
																doom_close(v23);
																// branch -> 0x366f8
															} else {
																// 0x36388
																function_2dc1c();
																function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																track_repeat_walk(0);
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														} else {
															// 0x36370
															*v21 = 0;
															// branch -> 0x366f8
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								// 0x36208
								if (*(int32_t *)(v4 - 0x4f54) == 0) {
									// 0x36214
									v5 = g22;
									v6 = v5;
									if (v5 == 120) {
										// 0x3621c
										diablo_hotkey_msg(0);
										v6 = g22;
										// branch -> 0x36224
									}
									// 0x36224
									v7 = v6;
									if (v6 == 121) {
										// 0x3622c
										diablo_hotkey_msg(1);
										v7 = g22;
										// branch -> 0x36234
									}
									// 0x36234
									v8 = v7;
									if (v7 == 122) {
										// 0x3623c
										diablo_hotkey_msg(2);
										v8 = g22;
										// branch -> 0x36244
									}
									// 0x36244
									v9 = v8;
									if (v8 == 123) {
										// 0x3624c
										diablo_hotkey_msg(3);
										v9 = g22;
										// branch -> 0x36254
									}
									// 0x36254
									v10 = v9;
									if (v9 == 13) {
										// 0x3625c
										function_31ee8();
										v10 = g22;
										// branch -> 0x36260
									}
									// 0x36260
									if (v10 == 27) {
										v12 = 27;
										// 0x36268
										if (v12 == 27) {
											// 0x36270
											if (function_35fdc() == 0) {
												// 0x3627c
												track_repeat_walk(0);
												gamemenu_previous(0);
												// branch -> 0x366f8
											}
										} else {
											// 0x36290
											v11 = g23;
											if (*(int32_t *)(v11 - 0x4f54) == 0) {
												// 0x3629c
												if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
													// 0x362ac
													if (v12 == 19) {
														// 0x362b4
														diablo_pause_game();
														// branch -> 0x366f8
													} else {
														// 0x362bc
														v13 = *(int32_t *)(v11 - 0x75d0);
														if (*(int32_t *)v13 != 2) {
															// 0x362cc
															if (v12 == 13) {
																// 0x362d4
																if (*(char *)g32 == 0) {
																	// 0x362e8
																	if (*(int32_t *)g31 == 0) {
																		// 0x362fc
																		function_31ee8();
																		// branch -> 0x366f8
																	} else {
																		// 0x362f4
																		QuestlogEnter();
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x362e0
																	function_bd780(v13);
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															} else {
																// 0x36304
																v17 = v12;
																if (*(int32_t *)(v11 - 0x4f58) != 0) {
																	// 0x36310
																	if (v12 == 114) {
																		// 0x36348
																		v17 = 118;
																		// branch -> 0x36354
																	} else {
																		// 0x36318
																		if (v12 > 114) {
																			// 0x3632c
																			if (v12 == 115) {
																				// 0x36350
																				v17 = 119;
																				// branch -> 0x36354
																			} else {
																				v17 = v12;
																			}
																		} else {
																			// 0x3631c
																			if (v12 == 112) {
																				// 0x36338
																				v17 = 116;
																				// branch -> 0x36354
																			} else {
																				// 0x36324
																				if (v12 > 112) {
																					// 0x36340
																					v17 = 117;
																					// branch -> 0x36354
																				} else {
																					v17 = v12;
																				}
																			}
																			// 0x36354
																			if (v17 != 112) {
																				// 0x3635c
																				if (v17 != 45) {
																					// 0x36408
																					if (v17 == 116) {
																						// 0x36410
																						if (*(int32_t *)g33 == 0) {
																							// 0x36428
																							function_2d824(0);
																							// branch -> 0x366f8
																						} else {
																							// 0x3641c
																							function_2d72c(0);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x36434
																						if (v17 == 117) {
																							// 0x3643c
																							if (*(int32_t *)g33 == 0) {
																								// 0x36454
																								function_2d824(1);
																								// branch -> 0x366f8
																							} else {
																								// 0x36448
																								function_2d72c(1);
																								// branch -> 0x366f8
																							}
																							// Detected a possible infinite recursion (goto support failed); quitting...
																						} else {
																							// 0x36460
																							if (v17 == 118) {
																								// 0x36468
																								if (*(int32_t *)g33 == 0) {
																									// 0x36480
																									function_2d824(2);
																									// branch -> 0x366f8
																								} else {
																									// 0x36474
																									function_2d72c(2);
																									// branch -> 0x366f8
																								}
																								// Detected a possible infinite recursion (goto support failed); quitting...
																							} else {
																								// 0x3648c
																								if (v17 == 119) {
																									// 0x36494
																									if (*(int32_t *)g33 == 0) {
																										// 0x364ac
																										function_2d824(3);
																										// branch -> 0x366f8
																									} else {
																										// 0x364a0
																										function_2d72c(3);
																										// branch -> 0x366f8
																									}
																									// Detected a possible infinite recursion (goto support failed); quitting...
																								} else {
																									// 0x364b8
																									if (v17 == 120) {
																										// 0x364c0
																										diablo_hotkey_msg(0);
																										// branch -> 0x366f8
																									} else {
																										// 0x364cc
																										if (v17 == 121) {
																											// 0x364d4
																											diablo_hotkey_msg(1);
																											// branch -> 0x366f8
																										} else {
																											// 0x364e0
																											if (v17 == 122) {
																												// 0x364e8
																												diablo_hotkey_msg(2);
																												// branch -> 0x366f8
																											} else {
																												// 0x364f4
																												if (v17 == 123) {
																													// 0x364fc
																													diablo_hotkey_msg(3);
																													// branch -> 0x366f8
																												} else {
																													// 0x36508
																													if (v17 == 38) {
																														// 0x36510
																														if (*(char *)g32 == 0) {
																															// 0x36524
																															if (*(int32_t *)g31 == 0) {
																																// 0x36538
																																if (*(int32_t *)g26 == 0) {
																																	// 0x3654c
																																	if (*(int32_t *)g24 != 0) {
																																		// 0x36558
																																		AutomapUp();
																																		// branch -> 0x366f8
																																	}
																																} else {
																																	// 0x36544
																																	HelpScrollUp();
																																	// branch -> 0x366f8
																																}
																																// Detected a possible infinite recursion (goto support failed); quitting...
																															} else {
																																// 0x36530
																																QuestlogUp();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x3651c
																															STextUp();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36560
																														if (v17 == 40) {
																															// 0x36568
																															if (*(char *)g32 == 0) {
																																// 0x3657c
																																if (*(int32_t *)g31 == 0) {
																																	// 0x36590
																																	if (*(int32_t *)g26 == 0) {
																																		// 0x365a4
																																		if (*(int32_t *)g24 != 0) {
																																			// 0x365b0
																																			AutomapDown();
																																			// branch -> 0x366f8
																																		}
																																	} else {
																																		// 0x3659c
																																		HelpScrollDown();
																																		// branch -> 0x366f8
																																	}
																																	// Detected a possible infinite recursion (goto support failed); quitting...
																																} else {
																																	// 0x36588
																																	QuestlogDown();
																																	// branch -> 0x366f8
																																}
																																// Detected a possible infinite recursion (goto support failed); quitting...
																															} else {
																																// 0x36574
																																STextDown();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x365b8
																															if (v17 == 33) {
																																// 0x365c0
																																if (*(char *)g32 != 0) {
																																	// 0x365cc
																																	STextPrior();
																																	// branch -> 0x366f8
																																}
																															} else {
																																// 0x365d4
																																if (v17 == 34) {
																																	// 0x365dc
																																	if (*(char *)g32 != 0) {
																																		// 0x365e8
																																		STextNext();
																																		// branch -> 0x366f8
																																	}
																																} else {
																																	// 0x365f0
																																	if (v17 == 37) {
																																		// 0x365f8
																																		if (*(int32_t *)g24 != 0) {
																																			// 0x36604
																																			if (*(int32_t *)g27 == 0) {
																																				// 0x36610
																																				AutomapLeft();
																																				// branch -> 0x366f8
																																			}
																																		}
																																	} else {
																																		// 0x36618
																																		if (v17 == 39) {
																																			// 0x36620
																																			if (*(int32_t *)g24 != 0) {
																																				// 0x3662c
																																				if (*(int32_t *)g27 == 0) {
																																					// 0x36638
																																					AutomapRight();
																																					// branch -> 0x366f8
																																				}
																																			}
																																		} else {
																																			// 0x36640
																																			if (v17 == 9) {
																																				// 0x36648
																																				DoAutoMap();
																																				// branch -> 0x366f8
																																			} else {
																																				// 0x36650
																																				if (v17 == 32) {
																																					// 0x36658
																																					v19 = 1;
																																					if (*(int32_t *)g35 == 0) {
																																						// 0x36668
																																						if (*(int32_t *)g28 == 0) {
																																							// 0x36674
																																							v19 = 0;
																																							// branch -> 0x36678
																																						} else {
																																							v19 = 1;
																																						}
																																					}
																																					// 0x36678
																																					v18 = 1;
																																					if (*(int32_t *)g29 == 0) {
																																						// 0x36688
																																						if (*(int32_t *)g31 == 0) {
																																							// 0x36694
																																							v18 = 0;
																																							// branch -> 0x36698
																																						} else {
																																							v18 = 1;
																																						}
																																					}
																																					// 0x36698
																																					function_35ef8(v18, v19);
																																					v15 = 0;
																																					*(int32_t *)g26 = 0;
																																					*(int32_t *)g35 = v15;
																																					*(int32_t *)g29 = v15;
																																					*(int32_t *)g28 = v15;
																																					*(int32_t *)g33 = v15;
																																					v24 = (char *)g30;
																																					if (*v24 != 0) {
																																						// 0x366c8
																																						if (*(char *)g36 == 0) {
																																							// 0x366d4
																																							*v24 = (char)v15;
																																							g34 = function_4c0c8();
																																							function_6c704();
																																							// branch -> 0x366e0
																																						}
																																					}
																																					// 0x366e0
																																					v14 = 0;
																																					*(int32_t *)g31 = 0;
																																					*(int32_t *)g24 = v14;
																																					*(char *)g25 = (char)v14;
																																					v20 = gamemenu_off();
																																					doom_close(v20);
																																					// branch -> 0x366f8
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
																			}
																			// 0x36364
																			v21 = (int32_t *)g26;
																			if (*v21 == 0) {
																				// 0x3637c
																				if (*(char *)g32 == 0) {
																					// 0x363b0
																					v15 = 0;
																					*(int32_t *)g35 = 0;
																					*(int32_t *)g29 = v15;
																					*(int32_t *)g28 = v15;
																					*(int32_t *)g33 = v15;
																					v22 = (char *)g30;
																					if (*v22 != 0) {
																						// 0x363d0
																						if (*(char *)g36 == 0) {
																							// 0x363dc
																							*v22 = (char)v15;
																							g34 = function_4c0c8();
																							function_6c704();
																							// branch -> 0x363e8
																						}
																					}
																					// 0x363e8
																					v14 = 0;
																					*(int32_t *)g31 = 0;
																					*(int32_t *)g24 = v14;
																					*(char *)g25 = (char)v14;
																					v16 = gamemenu_off();
																					v23 = function_54964(v16);
																					doom_close(v23);
																					// branch -> 0x366f8
																				} else {
																					// 0x36388
																					function_2dc1c();
																					function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																					function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																					track_repeat_walk(0);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x36370
																				*v21 = 0;
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		}
																		// 0x36354
																		if (v17 != 112) {
																			// 0x3635c
																			if (v17 != 45) {
																				// 0x36408
																				if (v17 == 116) {
																					// 0x36410
																					if (*(int32_t *)g33 == 0) {
																						// 0x36428
																						function_2d824(0);
																						// branch -> 0x366f8
																					} else {
																						// 0x3641c
																						function_2d72c(0);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x36434
																					if (v17 == 117) {
																						// 0x3643c
																						if (*(int32_t *)g33 == 0) {
																							// 0x36454
																							function_2d824(1);
																							// branch -> 0x366f8
																						} else {
																							// 0x36448
																							function_2d72c(1);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x36460
																						if (v17 == 118) {
																							// 0x36468
																							if (*(int32_t *)g33 == 0) {
																								// 0x36480
																								function_2d824(2);
																								// branch -> 0x366f8
																							} else {
																								// 0x36474
																								function_2d72c(2);
																								// branch -> 0x366f8
																							}
																							// Detected a possible infinite recursion (goto support failed); quitting...
																						} else {
																							// 0x3648c
																							if (v17 == 119) {
																								// 0x36494
																								if (*(int32_t *)g33 == 0) {
																									// 0x364ac
																									function_2d824(3);
																									// branch -> 0x366f8
																								} else {
																									// 0x364a0
																									function_2d72c(3);
																									// branch -> 0x366f8
																								}
																								// Detected a possible infinite recursion (goto support failed); quitting...
																							} else {
																								// 0x364b8
																								if (v17 == 120) {
																									// 0x364c0
																									diablo_hotkey_msg(0);
																									// branch -> 0x366f8
																								} else {
																									// 0x364cc
																									if (v17 == 121) {
																										// 0x364d4
																										diablo_hotkey_msg(1);
																										// branch -> 0x366f8
																									} else {
																										// 0x364e0
																										if (v17 == 122) {
																											// 0x364e8
																											diablo_hotkey_msg(2);
																											// branch -> 0x366f8
																										} else {
																											// 0x364f4
																											if (v17 == 123) {
																												// 0x364fc
																												diablo_hotkey_msg(3);
																												// branch -> 0x366f8
																											} else {
																												// 0x36508
																												if (v17 == 38) {
																													// 0x36510
																													if (*(char *)g32 == 0) {
																														// 0x36524
																														if (*(int32_t *)g31 == 0) {
																															// 0x36538
																															if (*(int32_t *)g26 == 0) {
																																// 0x3654c
																																if (*(int32_t *)g24 != 0) {
																																	// 0x36558
																																	AutomapUp();
																																	// branch -> 0x366f8
																																}
																															} else {
																																// 0x36544
																																HelpScrollUp();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x36530
																															QuestlogUp();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x3651c
																														STextUp();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36560
																													if (v17 == 40) {
																														// 0x36568
																														if (*(char *)g32 == 0) {
																															// 0x3657c
																															if (*(int32_t *)g31 == 0) {
																																// 0x36590
																																if (*(int32_t *)g26 == 0) {
																																	// 0x365a4
																																	if (*(int32_t *)g24 != 0) {
																																		// 0x365b0
																																		AutomapDown();
																																		// branch -> 0x366f8
																																	}
																																} else {
																																	// 0x3659c
																																	HelpScrollDown();
																																	// branch -> 0x366f8
																																}
																																// Detected a possible infinite recursion (goto support failed); quitting...
																															} else {
																																// 0x36588
																																QuestlogDown();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x36574
																															STextDown();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x365b8
																														if (v17 == 33) {
																															// 0x365c0
																															if (*(char *)g32 != 0) {
																																// 0x365cc
																																STextPrior();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x365d4
																															if (v17 == 34) {
																																// 0x365dc
																																if (*(char *)g32 != 0) {
																																	// 0x365e8
																																	STextNext();
																																	// branch -> 0x366f8
																																}
																															} else {
																																// 0x365f0
																																if (v17 == 37) {
																																	// 0x365f8
																																	if (*(int32_t *)g24 != 0) {
																																		// 0x36604
																																		if (*(int32_t *)g27 == 0) {
																																			// 0x36610
																																			AutomapLeft();
																																			// branch -> 0x366f8
																																		}
																																	}
																																} else {
																																	// 0x36618
																																	if (v17 == 39) {
																																		// 0x36620
																																		if (*(int32_t *)g24 != 0) {
																																			// 0x3662c
																																			if (*(int32_t *)g27 == 0) {
																																				// 0x36638
																																				AutomapRight();
																																				// branch -> 0x366f8
																																			}
																																		}
																																	} else {
																																		// 0x36640
																																		if (v17 == 9) {
																																			// 0x36648
																																			DoAutoMap();
																																			// branch -> 0x366f8
																																		} else {
																																			// 0x36650
																																			if (v17 == 32) {
																																				// 0x36658
																																				v19 = 1;
																																				if (*(int32_t *)g35 == 0) {
																																					// 0x36668
																																					if (*(int32_t *)g28 == 0) {
																																						// 0x36674
																																						v19 = 0;
																																						// branch -> 0x36678
																																					} else {
																																						v19 = 1;
																																					}
																																				}
																																				// 0x36678
																																				v18 = 1;
																																				if (*(int32_t *)g29 == 0) {
																																					// 0x36688
																																					if (*(int32_t *)g31 == 0) {
																																						// 0x36694
																																						v18 = 0;
																																						// branch -> 0x36698
																																					} else {
																																						v18 = 1;
																																					}
																																				}
																																				// 0x36698
																																				function_35ef8(v18, v19);
																																				v15 = 0;
																																				*(int32_t *)g26 = 0;
																																				*(int32_t *)g35 = v15;
																																				*(int32_t *)g29 = v15;
																																				*(int32_t *)g28 = v15;
																																				*(int32_t *)g33 = v15;
																																				v24 = (char *)g30;
																																				if (*v24 != 0) {
																																					// 0x366c8
																																					if (*(char *)g36 == 0) {
																																						// 0x366d4
																																						*v24 = (char)v15;
																																						g34 = function_4c0c8();
																																						function_6c704();
																																						// branch -> 0x366e0
																																					}
																																				}
																																				// 0x366e0
																																				v14 = 0;
																																				*(int32_t *)g31 = 0;
																																				*(int32_t *)g24 = v14;
																																				*(char *)g25 = (char)v14;
																																				v20 = gamemenu_off();
																																				doom_close(v20);
																																				// branch -> 0x366f8
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
																		}
																		// 0x36364
																		v21 = (int32_t *)g26;
																		if (*v21 == 0) {
																			// 0x3637c
																			if (*(char *)g32 == 0) {
																				// 0x363b0
																				v15 = 0;
																				*(int32_t *)g35 = 0;
																				*(int32_t *)g29 = v15;
																				*(int32_t *)g28 = v15;
																				*(int32_t *)g33 = v15;
																				v22 = (char *)g30;
																				if (*v22 != 0) {
																					// 0x363d0
																					if (*(char *)g36 == 0) {
																						// 0x363dc
																						*v22 = (char)v15;
																						g34 = function_4c0c8();
																						function_6c704();
																						// branch -> 0x363e8
																					}
																				}
																				// 0x363e8
																				v14 = 0;
																				*(int32_t *)g31 = 0;
																				*(int32_t *)g24 = v14;
																				*(char *)g25 = (char)v14;
																				v16 = gamemenu_off();
																				v23 = function_54964(v16);
																				doom_close(v23);
																				// branch -> 0x366f8
																			} else {
																				// 0x36388
																				function_2dc1c();
																				function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																				function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																				track_repeat_walk(0);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x36370
																			*v21 = 0;
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																	// 0x36354
																	if (v17 != 112) {
																		// 0x3635c
																		if (v17 != 45) {
																			// 0x36408
																			if (v17 == 116) {
																				// 0x36410
																				if (*(int32_t *)g33 == 0) {
																					// 0x36428
																					function_2d824(0);
																					// branch -> 0x366f8
																				} else {
																					// 0x3641c
																					function_2d72c(0);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x36434
																				if (v17 == 117) {
																					// 0x3643c
																					if (*(int32_t *)g33 == 0) {
																						// 0x36454
																						function_2d824(1);
																						// branch -> 0x366f8
																					} else {
																						// 0x36448
																						function_2d72c(1);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x36460
																					if (v17 == 118) {
																						// 0x36468
																						if (*(int32_t *)g33 == 0) {
																							// 0x36480
																							function_2d824(2);
																							// branch -> 0x366f8
																						} else {
																							// 0x36474
																							function_2d72c(2);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x3648c
																						if (v17 == 119) {
																							// 0x36494
																							if (*(int32_t *)g33 == 0) {
																								// 0x364ac
																								function_2d824(3);
																								// branch -> 0x366f8
																							} else {
																								// 0x364a0
																								function_2d72c(3);
																								// branch -> 0x366f8
																							}
																							// Detected a possible infinite recursion (goto support failed); quitting...
																						} else {
																							// 0x364b8
																							if (v17 == 120) {
																								// 0x364c0
																								diablo_hotkey_msg(0);
																								// branch -> 0x366f8
																							} else {
																								// 0x364cc
																								if (v17 == 121) {
																									// 0x364d4
																									diablo_hotkey_msg(1);
																									// branch -> 0x366f8
																								} else {
																									// 0x364e0
																									if (v17 == 122) {
																										// 0x364e8
																										diablo_hotkey_msg(2);
																										// branch -> 0x366f8
																									} else {
																										// 0x364f4
																										if (v17 == 123) {
																											// 0x364fc
																											diablo_hotkey_msg(3);
																											// branch -> 0x366f8
																										} else {
																											// 0x36508
																											if (v17 == 38) {
																												// 0x36510
																												if (*(char *)g32 == 0) {
																													// 0x36524
																													if (*(int32_t *)g31 == 0) {
																														// 0x36538
																														if (*(int32_t *)g26 == 0) {
																															// 0x3654c
																															if (*(int32_t *)g24 != 0) {
																																// 0x36558
																																AutomapUp();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x36544
																															HelpScrollUp();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36530
																														QuestlogUp();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x3651c
																													STextUp();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36560
																												if (v17 == 40) {
																													// 0x36568
																													if (*(char *)g32 == 0) {
																														// 0x3657c
																														if (*(int32_t *)g31 == 0) {
																															// 0x36590
																															if (*(int32_t *)g26 == 0) {
																																// 0x365a4
																																if (*(int32_t *)g24 != 0) {
																																	// 0x365b0
																																	AutomapDown();
																																	// branch -> 0x366f8
																																}
																															} else {
																																// 0x3659c
																																HelpScrollDown();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x36588
																															QuestlogDown();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36574
																														STextDown();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x365b8
																													if (v17 == 33) {
																														// 0x365c0
																														if (*(char *)g32 != 0) {
																															// 0x365cc
																															STextPrior();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x365d4
																														if (v17 == 34) {
																															// 0x365dc
																															if (*(char *)g32 != 0) {
																																// 0x365e8
																																STextNext();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x365f0
																															if (v17 == 37) {
																																// 0x365f8
																																if (*(int32_t *)g24 != 0) {
																																	// 0x36604
																																	if (*(int32_t *)g27 == 0) {
																																		// 0x36610
																																		AutomapLeft();
																																		// branch -> 0x366f8
																																	}
																																}
																															} else {
																																// 0x36618
																																if (v17 == 39) {
																																	// 0x36620
																																	if (*(int32_t *)g24 != 0) {
																																		// 0x3662c
																																		if (*(int32_t *)g27 == 0) {
																																			// 0x36638
																																			AutomapRight();
																																			// branch -> 0x366f8
																																		}
																																	}
																																} else {
																																	// 0x36640
																																	if (v17 == 9) {
																																		// 0x36648
																																		DoAutoMap();
																																		// branch -> 0x366f8
																																	} else {
																																		// 0x36650
																																		if (v17 == 32) {
																																			// 0x36658
																																			v19 = 1;
																																			if (*(int32_t *)g35 == 0) {
																																				// 0x36668
																																				if (*(int32_t *)g28 == 0) {
																																					// 0x36674
																																					v19 = 0;
																																					// branch -> 0x36678
																																				} else {
																																					v19 = 1;
																																				}
																																			}
																																			// 0x36678
																																			v18 = 1;
																																			if (*(int32_t *)g29 == 0) {
																																				// 0x36688
																																				if (*(int32_t *)g31 == 0) {
																																					// 0x36694
																																					v18 = 0;
																																					// branch -> 0x36698
																																				} else {
																																					v18 = 1;
																																				}
																																			}
																																			// 0x36698
																																			function_35ef8(v18, v19);
																																			v15 = 0;
																																			*(int32_t *)g26 = 0;
																																			*(int32_t *)g35 = v15;
																																			*(int32_t *)g29 = v15;
																																			*(int32_t *)g28 = v15;
																																			*(int32_t *)g33 = v15;
																																			v24 = (char *)g30;
																																			if (*v24 != 0) {
																																				// 0x366c8
																																				if (*(char *)g36 == 0) {
																																					// 0x366d4
																																					*v24 = (char)v15;
																																					g34 = function_4c0c8();
																																					function_6c704();
																																					// branch -> 0x366e0
																																				}
																																			}
																																			// 0x366e0
																																			v14 = 0;
																																			*(int32_t *)g31 = 0;
																																			*(int32_t *)g24 = v14;
																																			*(char *)g25 = (char)v14;
																																			v20 = gamemenu_off();
																																			doom_close(v20);
																																			// branch -> 0x366f8
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
																	}
																	// 0x36364
																	v21 = (int32_t *)g26;
																	if (*v21 == 0) {
																		// 0x3637c
																		if (*(char *)g32 == 0) {
																			// 0x363b0
																			v15 = 0;
																			*(int32_t *)g35 = 0;
																			*(int32_t *)g29 = v15;
																			*(int32_t *)g28 = v15;
																			*(int32_t *)g33 = v15;
																			v22 = (char *)g30;
																			if (*v22 != 0) {
																				// 0x363d0
																				if (*(char *)g36 == 0) {
																					// 0x363dc
																					*v22 = (char)v15;
																					g34 = function_4c0c8();
																					function_6c704();
																					// branch -> 0x363e8
																				}
																			}
																			// 0x363e8
																			v14 = 0;
																			*(int32_t *)g31 = 0;
																			*(int32_t *)g24 = v14;
																			*(char *)g25 = (char)v14;
																			v16 = gamemenu_off();
																			v23 = function_54964(v16);
																			doom_close(v23);
																			// branch -> 0x366f8
																		} else {
																			// 0x36388
																			function_2dc1c();
																			function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																			function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																			track_repeat_walk(0);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36370
																		*v21 = 0;
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
																// 0x36354
																if (v17 != 112) {
																	// 0x3635c
																	if (v17 != 45) {
																		// 0x36408
																		if (v17 == 116) {
																			// 0x36410
																			if (*(int32_t *)g33 == 0) {
																				// 0x36428
																				function_2d824(0);
																				// branch -> 0x366f8
																			} else {
																				// 0x3641c
																				function_2d72c(0);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x36434
																			if (v17 == 117) {
																				// 0x3643c
																				if (*(int32_t *)g33 == 0) {
																					// 0x36454
																					function_2d824(1);
																					// branch -> 0x366f8
																				} else {
																					// 0x36448
																					function_2d72c(1);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x36460
																				if (v17 == 118) {
																					// 0x36468
																					if (*(int32_t *)g33 == 0) {
																						// 0x36480
																						function_2d824(2);
																						// branch -> 0x366f8
																					} else {
																						// 0x36474
																						function_2d72c(2);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x3648c
																					if (v17 == 119) {
																						// 0x36494
																						if (*(int32_t *)g33 == 0) {
																							// 0x364ac
																							function_2d824(3);
																							// branch -> 0x366f8
																						} else {
																							// 0x364a0
																							function_2d72c(3);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x364b8
																						if (v17 == 120) {
																							// 0x364c0
																							diablo_hotkey_msg(0);
																							// branch -> 0x366f8
																						} else {
																							// 0x364cc
																							if (v17 == 121) {
																								// 0x364d4
																								diablo_hotkey_msg(1);
																								// branch -> 0x366f8
																							} else {
																								// 0x364e0
																								if (v17 == 122) {
																									// 0x364e8
																									diablo_hotkey_msg(2);
																									// branch -> 0x366f8
																								} else {
																									// 0x364f4
																									if (v17 == 123) {
																										// 0x364fc
																										diablo_hotkey_msg(3);
																										// branch -> 0x366f8
																									} else {
																										// 0x36508
																										if (v17 == 38) {
																											// 0x36510
																											if (*(char *)g32 == 0) {
																												// 0x36524
																												if (*(int32_t *)g31 == 0) {
																													// 0x36538
																													if (*(int32_t *)g26 == 0) {
																														// 0x3654c
																														if (*(int32_t *)g24 != 0) {
																															// 0x36558
																															AutomapUp();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x36544
																														HelpScrollUp();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36530
																													QuestlogUp();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x3651c
																												STextUp();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x36560
																											if (v17 == 40) {
																												// 0x36568
																												if (*(char *)g32 == 0) {
																													// 0x3657c
																													if (*(int32_t *)g31 == 0) {
																														// 0x36590
																														if (*(int32_t *)g26 == 0) {
																															// 0x365a4
																															if (*(int32_t *)g24 != 0) {
																																// 0x365b0
																																AutomapDown();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x3659c
																															HelpScrollDown();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36588
																														QuestlogDown();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36574
																													STextDown();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x365b8
																												if (v17 == 33) {
																													// 0x365c0
																													if (*(char *)g32 != 0) {
																														// 0x365cc
																														STextPrior();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x365d4
																													if (v17 == 34) {
																														// 0x365dc
																														if (*(char *)g32 != 0) {
																															// 0x365e8
																															STextNext();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x365f0
																														if (v17 == 37) {
																															// 0x365f8
																															if (*(int32_t *)g24 != 0) {
																																// 0x36604
																																if (*(int32_t *)g27 == 0) {
																																	// 0x36610
																																	AutomapLeft();
																																	// branch -> 0x366f8
																																}
																															}
																														} else {
																															// 0x36618
																															if (v17 == 39) {
																																// 0x36620
																																if (*(int32_t *)g24 != 0) {
																																	// 0x3662c
																																	if (*(int32_t *)g27 == 0) {
																																		// 0x36638
																																		AutomapRight();
																																		// branch -> 0x366f8
																																	}
																																}
																															} else {
																																// 0x36640
																																if (v17 == 9) {
																																	// 0x36648
																																	DoAutoMap();
																																	// branch -> 0x366f8
																																} else {
																																	// 0x36650
																																	if (v17 == 32) {
																																		// 0x36658
																																		v19 = 1;
																																		if (*(int32_t *)g35 == 0) {
																																			// 0x36668
																																			if (*(int32_t *)g28 == 0) {
																																				// 0x36674
																																				v19 = 0;
																																				// branch -> 0x36678
																																			} else {
																																				v19 = 1;
																																			}
																																		}
																																		// 0x36678
																																		v18 = 1;
																																		if (*(int32_t *)g29 == 0) {
																																			// 0x36688
																																			if (*(int32_t *)g31 == 0) {
																																				// 0x36694
																																				v18 = 0;
																																				// branch -> 0x36698
																																			} else {
																																				v18 = 1;
																																			}
																																		}
																																		// 0x36698
																																		function_35ef8(v18, v19);
																																		v15 = 0;
																																		*(int32_t *)g26 = 0;
																																		*(int32_t *)g35 = v15;
																																		*(int32_t *)g29 = v15;
																																		*(int32_t *)g28 = v15;
																																		*(int32_t *)g33 = v15;
																																		v24 = (char *)g30;
																																		if (*v24 != 0) {
																																			// 0x366c8
																																			if (*(char *)g36 == 0) {
																																				// 0x366d4
																																				*v24 = (char)v15;
																																				g34 = function_4c0c8();
																																				function_6c704();
																																				// branch -> 0x366e0
																																			}
																																		}
																																		// 0x366e0
																																		v14 = 0;
																																		*(int32_t *)g31 = 0;
																																		*(int32_t *)g24 = v14;
																																		*(char *)g25 = (char)v14;
																																		v20 = gamemenu_off();
																																		doom_close(v20);
																																		// branch -> 0x366f8
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
																}
																// 0x36364
																v21 = (int32_t *)g26;
																if (*v21 == 0) {
																	// 0x3637c
																	if (*(char *)g32 == 0) {
																		// 0x363b0
																		v15 = 0;
																		*(int32_t *)g35 = 0;
																		*(int32_t *)g29 = v15;
																		*(int32_t *)g28 = v15;
																		*(int32_t *)g33 = v15;
																		v22 = (char *)g30;
																		if (*v22 != 0) {
																			// 0x363d0
																			if (*(char *)g36 == 0) {
																				// 0x363dc
																				*v22 = (char)v15;
																				g34 = function_4c0c8();
																				function_6c704();
																				// branch -> 0x363e8
																			}
																		}
																		// 0x363e8
																		v14 = 0;
																		*(int32_t *)g31 = 0;
																		*(int32_t *)g24 = v14;
																		*(char *)g25 = (char)v14;
																		v16 = gamemenu_off();
																		v23 = function_54964(v16);
																		doom_close(v23);
																		// branch -> 0x366f8
																	} else {
																		// 0x36388
																		function_2dc1c();
																		function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																		function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																		track_repeat_walk(0);
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x36370
																	*v21 = 0;
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x361d8
				if (function_54224(v3) == 0) {
					// 0x361e8
					if (function_322ec(g22) == 0) {
						// 0x361f8
						v4 = g23;
						if (*(int32_t *)*(int32_t *)(v4 - 0x75cc) == 0) {
							// 0x361f8
							v12 = g22;
							// branch -> 0x36268
							// 0x36268
							if (v12 == 27) {
								// 0x36270
								if (function_35fdc() == 0) {
									// 0x3627c
									track_repeat_walk(0);
									gamemenu_previous(0);
									// branch -> 0x366f8
								}
							} else {
								// 0x36290
								v11 = g23;
								if (*(int32_t *)(v11 - 0x4f54) == 0) {
									// 0x3629c
									if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
										// 0x362ac
										if (v12 == 19) {
											// 0x362b4
											diablo_pause_game();
											// branch -> 0x366f8
										} else {
											// 0x362bc
											v13 = *(int32_t *)(v11 - 0x75d0);
											if (*(int32_t *)v13 != 2) {
												// 0x362cc
												if (v12 == 13) {
													// 0x362d4
													if (*(char *)g32 == 0) {
														// 0x362e8
														if (*(int32_t *)g31 == 0) {
															// 0x362fc
															function_31ee8();
															// branch -> 0x366f8
														} else {
															// 0x362f4
															QuestlogEnter();
															// branch -> 0x366f8
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x362e0
														function_bd780(v13);
														// branch -> 0x366f8
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x36304
													v17 = v12;
													if (*(int32_t *)(v11 - 0x4f58) != 0) {
														// 0x36310
														if (v12 == 114) {
															// 0x36348
															v17 = 118;
															// branch -> 0x36354
														} else {
															// 0x36318
															if (v12 > 114) {
																// 0x3632c
																if (v12 == 115) {
																	// 0x36350
																	v17 = 119;
																	// branch -> 0x36354
																} else {
																	v17 = v12;
																}
															} else {
																// 0x3631c
																if (v12 == 112) {
																	// 0x36338
																	v17 = 116;
																	// branch -> 0x36354
																} else {
																	// 0x36324
																	if (v12 > 112) {
																		// 0x36340
																		v17 = 117;
																		// branch -> 0x36354
																	} else {
																		v17 = v12;
																	}
																}
																// 0x36354
																if (v17 != 112) {
																	// 0x3635c
																	if (v17 != 45) {
																		// 0x36408
																		if (v17 == 116) {
																			// 0x36410
																			if (*(int32_t *)g33 == 0) {
																				// 0x36428
																				function_2d824(0);
																				// branch -> 0x366f8
																			} else {
																				// 0x3641c
																				function_2d72c(0);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x36434
																			if (v17 == 117) {
																				// 0x3643c
																				if (*(int32_t *)g33 == 0) {
																					// 0x36454
																					function_2d824(1);
																					// branch -> 0x366f8
																				} else {
																					// 0x36448
																					function_2d72c(1);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x36460
																				if (v17 == 118) {
																					// 0x36468
																					if (*(int32_t *)g33 == 0) {
																						// 0x36480
																						function_2d824(2);
																						// branch -> 0x366f8
																					} else {
																						// 0x36474
																						function_2d72c(2);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x3648c
																					if (v17 == 119) {
																						// 0x36494
																						if (*(int32_t *)g33 == 0) {
																							// 0x364ac
																							function_2d824(3);
																							// branch -> 0x366f8
																						} else {
																							// 0x364a0
																							function_2d72c(3);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x364b8
																						if (v17 == 120) {
																							// 0x364c0
																							diablo_hotkey_msg(0);
																							// branch -> 0x366f8
																						} else {
																							// 0x364cc
																							if (v17 == 121) {
																								// 0x364d4
																								diablo_hotkey_msg(1);
																								// branch -> 0x366f8
																							} else {
																								// 0x364e0
																								if (v17 == 122) {
																									// 0x364e8
																									diablo_hotkey_msg(2);
																									// branch -> 0x366f8
																								} else {
																									// 0x364f4
																									if (v17 == 123) {
																										// 0x364fc
																										diablo_hotkey_msg(3);
																										// branch -> 0x366f8
																									} else {
																										// 0x36508
																										if (v17 == 38) {
																											// 0x36510
																											if (*(char *)g32 == 0) {
																												// 0x36524
																												if (*(int32_t *)g31 == 0) {
																													// 0x36538
																													if (*(int32_t *)g26 == 0) {
																														// 0x3654c
																														if (*(int32_t *)g24 != 0) {
																															// 0x36558
																															AutomapUp();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x36544
																														HelpScrollUp();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36530
																													QuestlogUp();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x3651c
																												STextUp();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x36560
																											if (v17 == 40) {
																												// 0x36568
																												if (*(char *)g32 == 0) {
																													// 0x3657c
																													if (*(int32_t *)g31 == 0) {
																														// 0x36590
																														if (*(int32_t *)g26 == 0) {
																															// 0x365a4
																															if (*(int32_t *)g24 != 0) {
																																// 0x365b0
																																AutomapDown();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x3659c
																															HelpScrollDown();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36588
																														QuestlogDown();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36574
																													STextDown();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x365b8
																												if (v17 == 33) {
																													// 0x365c0
																													if (*(char *)g32 != 0) {
																														// 0x365cc
																														STextPrior();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x365d4
																													if (v17 == 34) {
																														// 0x365dc
																														if (*(char *)g32 != 0) {
																															// 0x365e8
																															STextNext();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x365f0
																														if (v17 == 37) {
																															// 0x365f8
																															if (*(int32_t *)g24 != 0) {
																																// 0x36604
																																if (*(int32_t *)g27 == 0) {
																																	// 0x36610
																																	AutomapLeft();
																																	// branch -> 0x366f8
																																}
																															}
																														} else {
																															// 0x36618
																															if (v17 == 39) {
																																// 0x36620
																																if (*(int32_t *)g24 != 0) {
																																	// 0x3662c
																																	if (*(int32_t *)g27 == 0) {
																																		// 0x36638
																																		AutomapRight();
																																		// branch -> 0x366f8
																																	}
																																}
																															} else {
																																// 0x36640
																																if (v17 == 9) {
																																	// 0x36648
																																	DoAutoMap();
																																	// branch -> 0x366f8
																																} else {
																																	// 0x36650
																																	if (v17 == 32) {
																																		// 0x36658
																																		v19 = 1;
																																		if (*(int32_t *)g35 == 0) {
																																			// 0x36668
																																			if (*(int32_t *)g28 == 0) {
																																				// 0x36674
																																				v19 = 0;
																																				// branch -> 0x36678
																																			} else {
																																				v19 = 1;
																																			}
																																		}
																																		// 0x36678
																																		v18 = 1;
																																		if (*(int32_t *)g29 == 0) {
																																			// 0x36688
																																			if (*(int32_t *)g31 == 0) {
																																				// 0x36694
																																				v18 = 0;
																																				// branch -> 0x36698
																																			} else {
																																				v18 = 1;
																																			}
																																		}
																																		// 0x36698
																																		function_35ef8(v18, v19);
																																		v15 = 0;
																																		*(int32_t *)g26 = 0;
																																		*(int32_t *)g35 = v15;
																																		*(int32_t *)g29 = v15;
																																		*(int32_t *)g28 = v15;
																																		*(int32_t *)g33 = v15;
																																		v24 = (char *)g30;
																																		if (*v24 != 0) {
																																			// 0x366c8
																																			if (*(char *)g36 == 0) {
																																				// 0x366d4
																																				*v24 = (char)v15;
																																				g34 = function_4c0c8();
																																				function_6c704();
																																				// branch -> 0x366e0
																																			}
																																		}
																																		// 0x366e0
																																		v14 = 0;
																																		*(int32_t *)g31 = 0;
																																		*(int32_t *)g24 = v14;
																																		*(char *)g25 = (char)v14;
																																		v20 = gamemenu_off();
																																		doom_close(v20);
																																		// branch -> 0x366f8
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
																}
																// 0x36364
																v21 = (int32_t *)g26;
																if (*v21 == 0) {
																	// 0x3637c
																	if (*(char *)g32 == 0) {
																		// 0x363b0
																		v15 = 0;
																		*(int32_t *)g35 = 0;
																		*(int32_t *)g29 = v15;
																		*(int32_t *)g28 = v15;
																		*(int32_t *)g33 = v15;
																		v22 = (char *)g30;
																		if (*v22 != 0) {
																			// 0x363d0
																			if (*(char *)g36 == 0) {
																				// 0x363dc
																				*v22 = (char)v15;
																				g34 = function_4c0c8();
																				function_6c704();
																				// branch -> 0x363e8
																			}
																		}
																		// 0x363e8
																		v14 = 0;
																		*(int32_t *)g31 = 0;
																		*(int32_t *)g24 = v14;
																		*(char *)g25 = (char)v14;
																		v16 = gamemenu_off();
																		v23 = function_54964(v16);
																		doom_close(v23);
																		// branch -> 0x366f8
																	} else {
																		// 0x36388
																		function_2dc1c();
																		function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																		function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																		track_repeat_walk(0);
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x36370
																	*v21 = 0;
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
															// 0x36354
															if (v17 != 112) {
																// 0x3635c
																if (v17 != 45) {
																	// 0x36408
																	if (v17 == 116) {
																		// 0x36410
																		if (*(int32_t *)g33 == 0) {
																			// 0x36428
																			function_2d824(0);
																			// branch -> 0x366f8
																		} else {
																			// 0x3641c
																			function_2d72c(0);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36434
																		if (v17 == 117) {
																			// 0x3643c
																			if (*(int32_t *)g33 == 0) {
																				// 0x36454
																				function_2d824(1);
																				// branch -> 0x366f8
																			} else {
																				// 0x36448
																				function_2d72c(1);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x36460
																			if (v17 == 118) {
																				// 0x36468
																				if (*(int32_t *)g33 == 0) {
																					// 0x36480
																					function_2d824(2);
																					// branch -> 0x366f8
																				} else {
																					// 0x36474
																					function_2d72c(2);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x3648c
																				if (v17 == 119) {
																					// 0x36494
																					if (*(int32_t *)g33 == 0) {
																						// 0x364ac
																						function_2d824(3);
																						// branch -> 0x366f8
																					} else {
																						// 0x364a0
																						function_2d72c(3);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x364b8
																					if (v17 == 120) {
																						// 0x364c0
																						diablo_hotkey_msg(0);
																						// branch -> 0x366f8
																					} else {
																						// 0x364cc
																						if (v17 == 121) {
																							// 0x364d4
																							diablo_hotkey_msg(1);
																							// branch -> 0x366f8
																						} else {
																							// 0x364e0
																							if (v17 == 122) {
																								// 0x364e8
																								diablo_hotkey_msg(2);
																								// branch -> 0x366f8
																							} else {
																								// 0x364f4
																								if (v17 == 123) {
																									// 0x364fc
																									diablo_hotkey_msg(3);
																									// branch -> 0x366f8
																								} else {
																									// 0x36508
																									if (v17 == 38) {
																										// 0x36510
																										if (*(char *)g32 == 0) {
																											// 0x36524
																											if (*(int32_t *)g31 == 0) {
																												// 0x36538
																												if (*(int32_t *)g26 == 0) {
																													// 0x3654c
																													if (*(int32_t *)g24 != 0) {
																														// 0x36558
																														AutomapUp();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x36544
																													HelpScrollUp();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36530
																												QuestlogUp();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x3651c
																											STextUp();
																											// branch -> 0x366f8
																										}
																										// Detected a possible infinite recursion (goto support failed); quitting...
																									} else {
																										// 0x36560
																										if (v17 == 40) {
																											// 0x36568
																											if (*(char *)g32 == 0) {
																												// 0x3657c
																												if (*(int32_t *)g31 == 0) {
																													// 0x36590
																													if (*(int32_t *)g26 == 0) {
																														// 0x365a4
																														if (*(int32_t *)g24 != 0) {
																															// 0x365b0
																															AutomapDown();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x3659c
																														HelpScrollDown();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36588
																													QuestlogDown();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36574
																												STextDown();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x365b8
																											if (v17 == 33) {
																												// 0x365c0
																												if (*(char *)g32 != 0) {
																													// 0x365cc
																													STextPrior();
																													// branch -> 0x366f8
																												}
																											} else {
																												// 0x365d4
																												if (v17 == 34) {
																													// 0x365dc
																													if (*(char *)g32 != 0) {
																														// 0x365e8
																														STextNext();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x365f0
																													if (v17 == 37) {
																														// 0x365f8
																														if (*(int32_t *)g24 != 0) {
																															// 0x36604
																															if (*(int32_t *)g27 == 0) {
																																// 0x36610
																																AutomapLeft();
																																// branch -> 0x366f8
																															}
																														}
																													} else {
																														// 0x36618
																														if (v17 == 39) {
																															// 0x36620
																															if (*(int32_t *)g24 != 0) {
																																// 0x3662c
																																if (*(int32_t *)g27 == 0) {
																																	// 0x36638
																																	AutomapRight();
																																	// branch -> 0x366f8
																																}
																															}
																														} else {
																															// 0x36640
																															if (v17 == 9) {
																																// 0x36648
																																DoAutoMap();
																																// branch -> 0x366f8
																															} else {
																																// 0x36650
																																if (v17 == 32) {
																																	// 0x36658
																																	v19 = 1;
																																	if (*(int32_t *)g35 == 0) {
																																		// 0x36668
																																		if (*(int32_t *)g28 == 0) {
																																			// 0x36674
																																			v19 = 0;
																																			// branch -> 0x36678
																																		} else {
																																			v19 = 1;
																																		}
																																	}
																																	// 0x36678
																																	v18 = 1;
																																	if (*(int32_t *)g29 == 0) {
																																		// 0x36688
																																		if (*(int32_t *)g31 == 0) {
																																			// 0x36694
																																			v18 = 0;
																																			// branch -> 0x36698
																																		} else {
																																			v18 = 1;
																																		}
																																	}
																																	// 0x36698
																																	function_35ef8(v18, v19);
																																	v15 = 0;
																																	*(int32_t *)g26 = 0;
																																	*(int32_t *)g35 = v15;
																																	*(int32_t *)g29 = v15;
																																	*(int32_t *)g28 = v15;
																																	*(int32_t *)g33 = v15;
																																	v24 = (char *)g30;
																																	if (*v24 != 0) {
																																		// 0x366c8
																																		if (*(char *)g36 == 0) {
																																			// 0x366d4
																																			*v24 = (char)v15;
																																			g34 = function_4c0c8();
																																			function_6c704();
																																			// branch -> 0x366e0
																																		}
																																	}
																																	// 0x366e0
																																	v14 = 0;
																																	*(int32_t *)g31 = 0;
																																	*(int32_t *)g24 = v14;
																																	*(char *)g25 = (char)v14;
																																	v20 = gamemenu_off();
																																	doom_close(v20);
																																	// branch -> 0x366f8
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
															}
															// 0x36364
															v21 = (int32_t *)g26;
															if (*v21 == 0) {
																// 0x3637c
																if (*(char *)g32 == 0) {
																	// 0x363b0
																	v15 = 0;
																	*(int32_t *)g35 = 0;
																	*(int32_t *)g29 = v15;
																	*(int32_t *)g28 = v15;
																	*(int32_t *)g33 = v15;
																	v22 = (char *)g30;
																	if (*v22 != 0) {
																		// 0x363d0
																		if (*(char *)g36 == 0) {
																			// 0x363dc
																			*v22 = (char)v15;
																			g34 = function_4c0c8();
																			function_6c704();
																			// branch -> 0x363e8
																		}
																	}
																	// 0x363e8
																	v14 = 0;
																	*(int32_t *)g31 = 0;
																	*(int32_t *)g24 = v14;
																	*(char *)g25 = (char)v14;
																	v16 = gamemenu_off();
																	v23 = function_54964(v16);
																	doom_close(v23);
																	// branch -> 0x366f8
																} else {
																	// 0x36388
																	function_2dc1c();
																	function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																	function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																	track_repeat_walk(0);
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															} else {
																// 0x36370
																*v21 = 0;
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
														// 0x36354
														if (v17 != 112) {
															// 0x3635c
															if (v17 != 45) {
																// 0x36408
																if (v17 == 116) {
																	// 0x36410
																	if (*(int32_t *)g33 == 0) {
																		// 0x36428
																		function_2d824(0);
																		// branch -> 0x366f8
																	} else {
																		// 0x3641c
																		function_2d72c(0);
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x36434
																	if (v17 == 117) {
																		// 0x3643c
																		if (*(int32_t *)g33 == 0) {
																			// 0x36454
																			function_2d824(1);
																			// branch -> 0x366f8
																		} else {
																			// 0x36448
																			function_2d72c(1);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36460
																		if (v17 == 118) {
																			// 0x36468
																			if (*(int32_t *)g33 == 0) {
																				// 0x36480
																				function_2d824(2);
																				// branch -> 0x366f8
																			} else {
																				// 0x36474
																				function_2d72c(2);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x3648c
																			if (v17 == 119) {
																				// 0x36494
																				if (*(int32_t *)g33 == 0) {
																					// 0x364ac
																					function_2d824(3);
																					// branch -> 0x366f8
																				} else {
																					// 0x364a0
																					function_2d72c(3);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x364b8
																				if (v17 == 120) {
																					// 0x364c0
																					diablo_hotkey_msg(0);
																					// branch -> 0x366f8
																				} else {
																					// 0x364cc
																					if (v17 == 121) {
																						// 0x364d4
																						diablo_hotkey_msg(1);
																						// branch -> 0x366f8
																					} else {
																						// 0x364e0
																						if (v17 == 122) {
																							// 0x364e8
																							diablo_hotkey_msg(2);
																							// branch -> 0x366f8
																						} else {
																							// 0x364f4
																							if (v17 == 123) {
																								// 0x364fc
																								diablo_hotkey_msg(3);
																								// branch -> 0x366f8
																							} else {
																								// 0x36508
																								if (v17 == 38) {
																									// 0x36510
																									if (*(char *)g32 == 0) {
																										// 0x36524
																										if (*(int32_t *)g31 == 0) {
																											// 0x36538
																											if (*(int32_t *)g26 == 0) {
																												// 0x3654c
																												if (*(int32_t *)g24 != 0) {
																													// 0x36558
																													AutomapUp();
																													// branch -> 0x366f8
																												}
																											} else {
																												// 0x36544
																												HelpScrollUp();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x36530
																											QuestlogUp();
																											// branch -> 0x366f8
																										}
																										// Detected a possible infinite recursion (goto support failed); quitting...
																									} else {
																										// 0x3651c
																										STextUp();
																										// branch -> 0x366f8
																									}
																									// Detected a possible infinite recursion (goto support failed); quitting...
																								} else {
																									// 0x36560
																									if (v17 == 40) {
																										// 0x36568
																										if (*(char *)g32 == 0) {
																											// 0x3657c
																											if (*(int32_t *)g31 == 0) {
																												// 0x36590
																												if (*(int32_t *)g26 == 0) {
																													// 0x365a4
																													if (*(int32_t *)g24 != 0) {
																														// 0x365b0
																														AutomapDown();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x3659c
																													HelpScrollDown();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36588
																												QuestlogDown();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x36574
																											STextDown();
																											// branch -> 0x366f8
																										}
																										// Detected a possible infinite recursion (goto support failed); quitting...
																									} else {
																										// 0x365b8
																										if (v17 == 33) {
																											// 0x365c0
																											if (*(char *)g32 != 0) {
																												// 0x365cc
																												STextPrior();
																												// branch -> 0x366f8
																											}
																										} else {
																											// 0x365d4
																											if (v17 == 34) {
																												// 0x365dc
																												if (*(char *)g32 != 0) {
																													// 0x365e8
																													STextNext();
																													// branch -> 0x366f8
																												}
																											} else {
																												// 0x365f0
																												if (v17 == 37) {
																													// 0x365f8
																													if (*(int32_t *)g24 != 0) {
																														// 0x36604
																														if (*(int32_t *)g27 == 0) {
																															// 0x36610
																															AutomapLeft();
																															// branch -> 0x366f8
																														}
																													}
																												} else {
																													// 0x36618
																													if (v17 == 39) {
																														// 0x36620
																														if (*(int32_t *)g24 != 0) {
																															// 0x3662c
																															if (*(int32_t *)g27 == 0) {
																																// 0x36638
																																AutomapRight();
																																// branch -> 0x366f8
																															}
																														}
																													} else {
																														// 0x36640
																														if (v17 == 9) {
																															// 0x36648
																															DoAutoMap();
																															// branch -> 0x366f8
																														} else {
																															// 0x36650
																															if (v17 == 32) {
																																// 0x36658
																																v19 = 1;
																																if (*(int32_t *)g35 == 0) {
																																	// 0x36668
																																	if (*(int32_t *)g28 == 0) {
																																		// 0x36674
																																		v19 = 0;
																																		// branch -> 0x36678
																																	} else {
																																		v19 = 1;
																																	}
																																}
																																// 0x36678
																																v18 = 1;
																																if (*(int32_t *)g29 == 0) {
																																	// 0x36688
																																	if (*(int32_t *)g31 == 0) {
																																		// 0x36694
																																		v18 = 0;
																																		// branch -> 0x36698
																																	} else {
																																		v18 = 1;
																																	}
																																}
																																// 0x36698
																																function_35ef8(v18, v19);
																																v15 = 0;
																																*(int32_t *)g26 = 0;
																																*(int32_t *)g35 = v15;
																																*(int32_t *)g29 = v15;
																																*(int32_t *)g28 = v15;
																																*(int32_t *)g33 = v15;
																																v24 = (char *)g30;
																																if (*v24 != 0) {
																																	// 0x366c8
																																	if (*(char *)g36 == 0) {
																																		// 0x366d4
																																		*v24 = (char)v15;
																																		g34 = function_4c0c8();
																																		function_6c704();
																																		// branch -> 0x366e0
																																	}
																																}
																																// 0x366e0
																																v14 = 0;
																																*(int32_t *)g31 = 0;
																																*(int32_t *)g24 = v14;
																																*(char *)g25 = (char)v14;
																																v20 = gamemenu_off();
																																doom_close(v20);
																																// branch -> 0x366f8
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
														}
														// 0x36364
														v21 = (int32_t *)g26;
														if (*v21 == 0) {
															// 0x3637c
															if (*(char *)g32 == 0) {
																// 0x363b0
																v15 = 0;
																*(int32_t *)g35 = 0;
																*(int32_t *)g29 = v15;
																*(int32_t *)g28 = v15;
																*(int32_t *)g33 = v15;
																v22 = (char *)g30;
																if (*v22 != 0) {
																	// 0x363d0
																	if (*(char *)g36 == 0) {
																		// 0x363dc
																		*v22 = (char)v15;
																		g34 = function_4c0c8();
																		function_6c704();
																		// branch -> 0x363e8
																	}
																}
																// 0x363e8
																v14 = 0;
																*(int32_t *)g31 = 0;
																*(int32_t *)g24 = v14;
																*(char *)g25 = (char)v14;
																v16 = gamemenu_off();
																v23 = function_54964(v16);
																doom_close(v23);
																// branch -> 0x366f8
															} else {
																// 0x36388
																function_2dc1c();
																function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																track_repeat_walk(0);
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														} else {
															// 0x36370
															*v21 = 0;
															// branch -> 0x366f8
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
													// 0x36354
													if (v17 != 112) {
														// 0x3635c
														if (v17 != 45) {
															// 0x36408
															if (v17 == 116) {
																// 0x36410
																if (*(int32_t *)g33 == 0) {
																	// 0x36428
																	function_2d824(0);
																	// branch -> 0x366f8
																} else {
																	// 0x3641c
																	function_2d72c(0);
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															} else {
																// 0x36434
																if (v17 == 117) {
																	// 0x3643c
																	if (*(int32_t *)g33 == 0) {
																		// 0x36454
																		function_2d824(1);
																		// branch -> 0x366f8
																	} else {
																		// 0x36448
																		function_2d72c(1);
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x36460
																	if (v17 == 118) {
																		// 0x36468
																		if (*(int32_t *)g33 == 0) {
																			// 0x36480
																			function_2d824(2);
																			// branch -> 0x366f8
																		} else {
																			// 0x36474
																			function_2d72c(2);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x3648c
																		if (v17 == 119) {
																			// 0x36494
																			if (*(int32_t *)g33 == 0) {
																				// 0x364ac
																				function_2d824(3);
																				// branch -> 0x366f8
																			} else {
																				// 0x364a0
																				function_2d72c(3);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x364b8
																			if (v17 == 120) {
																				// 0x364c0
																				diablo_hotkey_msg(0);
																				// branch -> 0x366f8
																			} else {
																				// 0x364cc
																				if (v17 == 121) {
																					// 0x364d4
																					diablo_hotkey_msg(1);
																					// branch -> 0x366f8
																				} else {
																					// 0x364e0
																					if (v17 == 122) {
																						// 0x364e8
																						diablo_hotkey_msg(2);
																						// branch -> 0x366f8
																					} else {
																						// 0x364f4
																						if (v17 == 123) {
																							// 0x364fc
																							diablo_hotkey_msg(3);
																							// branch -> 0x366f8
																						} else {
																							// 0x36508
																							if (v17 == 38) {
																								// 0x36510
																								if (*(char *)g32 == 0) {
																									// 0x36524
																									if (*(int32_t *)g31 == 0) {
																										// 0x36538
																										if (*(int32_t *)g26 == 0) {
																											// 0x3654c
																											if (*(int32_t *)g24 != 0) {
																												// 0x36558
																												AutomapUp();
																												// branch -> 0x366f8
																											}
																										} else {
																											// 0x36544
																											HelpScrollUp();
																											// branch -> 0x366f8
																										}
																										// Detected a possible infinite recursion (goto support failed); quitting...
																									} else {
																										// 0x36530
																										QuestlogUp();
																										// branch -> 0x366f8
																									}
																									// Detected a possible infinite recursion (goto support failed); quitting...
																								} else {
																									// 0x3651c
																									STextUp();
																									// branch -> 0x366f8
																								}
																								// Detected a possible infinite recursion (goto support failed); quitting...
																							} else {
																								// 0x36560
																								if (v17 == 40) {
																									// 0x36568
																									if (*(char *)g32 == 0) {
																										// 0x3657c
																										if (*(int32_t *)g31 == 0) {
																											// 0x36590
																											if (*(int32_t *)g26 == 0) {
																												// 0x365a4
																												if (*(int32_t *)g24 != 0) {
																													// 0x365b0
																													AutomapDown();
																													// branch -> 0x366f8
																												}
																											} else {
																												// 0x3659c
																												HelpScrollDown();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x36588
																											QuestlogDown();
																											// branch -> 0x366f8
																										}
																										// Detected a possible infinite recursion (goto support failed); quitting...
																									} else {
																										// 0x36574
																										STextDown();
																										// branch -> 0x366f8
																									}
																									// Detected a possible infinite recursion (goto support failed); quitting...
																								} else {
																									// 0x365b8
																									if (v17 == 33) {
																										// 0x365c0
																										if (*(char *)g32 != 0) {
																											// 0x365cc
																											STextPrior();
																											// branch -> 0x366f8
																										}
																									} else {
																										// 0x365d4
																										if (v17 == 34) {
																											// 0x365dc
																											if (*(char *)g32 != 0) {
																												// 0x365e8
																												STextNext();
																												// branch -> 0x366f8
																											}
																										} else {
																											// 0x365f0
																											if (v17 == 37) {
																												// 0x365f8
																												if (*(int32_t *)g24 != 0) {
																													// 0x36604
																													if (*(int32_t *)g27 == 0) {
																														// 0x36610
																														AutomapLeft();
																														// branch -> 0x366f8
																													}
																												}
																											} else {
																												// 0x36618
																												if (v17 == 39) {
																													// 0x36620
																													if (*(int32_t *)g24 != 0) {
																														// 0x3662c
																														if (*(int32_t *)g27 == 0) {
																															// 0x36638
																															AutomapRight();
																															// branch -> 0x366f8
																														}
																													}
																												} else {
																													// 0x36640
																													if (v17 == 9) {
																														// 0x36648
																														DoAutoMap();
																														// branch -> 0x366f8
																													} else {
																														// 0x36650
																														if (v17 == 32) {
																															// 0x36658
																															v19 = 1;
																															if (*(int32_t *)g35 == 0) {
																																// 0x36668
																																if (*(int32_t *)g28 == 0) {
																																	// 0x36674
																																	v19 = 0;
																																	// branch -> 0x36678
																																} else {
																																	v19 = 1;
																																}
																															}
																															// 0x36678
																															v18 = 1;
																															if (*(int32_t *)g29 == 0) {
																																// 0x36688
																																if (*(int32_t *)g31 == 0) {
																																	// 0x36694
																																	v18 = 0;
																																	// branch -> 0x36698
																																} else {
																																	v18 = 1;
																																}
																															}
																															// 0x36698
																															function_35ef8(v18, v19);
																															v15 = 0;
																															*(int32_t *)g26 = 0;
																															*(int32_t *)g35 = v15;
																															*(int32_t *)g29 = v15;
																															*(int32_t *)g28 = v15;
																															*(int32_t *)g33 = v15;
																															v24 = (char *)g30;
																															if (*v24 != 0) {
																																// 0x366c8
																																if (*(char *)g36 == 0) {
																																	// 0x366d4
																																	*v24 = (char)v15;
																																	g34 = function_4c0c8();
																																	function_6c704();
																																	// branch -> 0x366e0
																																}
																															}
																															// 0x366e0
																															v14 = 0;
																															*(int32_t *)g31 = 0;
																															*(int32_t *)g24 = v14;
																															*(char *)g25 = (char)v14;
																															v20 = gamemenu_off();
																															doom_close(v20);
																															// branch -> 0x366f8
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
													}
													// 0x36364
													v21 = (int32_t *)g26;
													if (*v21 == 0) {
														// 0x3637c
														if (*(char *)g32 == 0) {
															// 0x363b0
															v15 = 0;
															*(int32_t *)g35 = 0;
															*(int32_t *)g29 = v15;
															*(int32_t *)g28 = v15;
															*(int32_t *)g33 = v15;
															v22 = (char *)g30;
															if (*v22 != 0) {
																// 0x363d0
																if (*(char *)g36 == 0) {
																	// 0x363dc
																	*v22 = (char)v15;
																	g34 = function_4c0c8();
																	function_6c704();
																	// branch -> 0x363e8
																}
															}
															// 0x363e8
															v14 = 0;
															*(int32_t *)g31 = 0;
															*(int32_t *)g24 = v14;
															*(char *)g25 = (char)v14;
															v16 = gamemenu_off();
															v23 = function_54964(v16);
															doom_close(v23);
															// branch -> 0x366f8
														} else {
															// 0x36388
															function_2dc1c();
															function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
															function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
															track_repeat_walk(0);
															// branch -> 0x366f8
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x36370
														*v21 = 0;
														// branch -> 0x366f8
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x36208
							if (*(int32_t *)(v4 - 0x4f54) == 0) {
								// 0x36214
								v5 = g22;
								v6 = v5;
								if (v5 == 120) {
									// 0x3621c
									diablo_hotkey_msg(0);
									v6 = g22;
									// branch -> 0x36224
								}
								// 0x36224
								v7 = v6;
								if (v6 == 121) {
									// 0x3622c
									diablo_hotkey_msg(1);
									v7 = g22;
									// branch -> 0x36234
								}
								// 0x36234
								v8 = v7;
								if (v7 == 122) {
									// 0x3623c
									diablo_hotkey_msg(2);
									v8 = g22;
									// branch -> 0x36244
								}
								// 0x36244
								v9 = v8;
								if (v8 == 123) {
									// 0x3624c
									diablo_hotkey_msg(3);
									v9 = g22;
									// branch -> 0x36254
								}
								// 0x36254
								v10 = v9;
								if (v9 == 13) {
									// 0x3625c
									function_31ee8();
									v10 = g22;
									// branch -> 0x36260
								}
								// 0x36260
								if (v10 == 27) {
									v12 = 27;
									// 0x36268
									if (v12 == 27) {
										// 0x36270
										if (function_35fdc() == 0) {
											// 0x3627c
											track_repeat_walk(0);
											gamemenu_previous(0);
											// branch -> 0x366f8
										}
									} else {
										// 0x36290
										v11 = g23;
										if (*(int32_t *)(v11 - 0x4f54) == 0) {
											// 0x3629c
											if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
												// 0x362ac
												if (v12 == 19) {
													// 0x362b4
													diablo_pause_game();
													// branch -> 0x366f8
												} else {
													// 0x362bc
													v13 = *(int32_t *)(v11 - 0x75d0);
													if (*(int32_t *)v13 != 2) {
														// 0x362cc
														if (v12 == 13) {
															// 0x362d4
															if (*(char *)g32 == 0) {
																// 0x362e8
																if (*(int32_t *)g31 == 0) {
																	// 0x362fc
																	function_31ee8();
																	// branch -> 0x366f8
																} else {
																	// 0x362f4
																	QuestlogEnter();
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															} else {
																// 0x362e0
																function_bd780(v13);
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														} else {
															// 0x36304
															v17 = v12;
															if (*(int32_t *)(v11 - 0x4f58) != 0) {
																// 0x36310
																if (v12 == 114) {
																	// 0x36348
																	v17 = 118;
																	// branch -> 0x36354
																} else {
																	// 0x36318
																	if (v12 > 114) {
																		// 0x3632c
																		if (v12 == 115) {
																			// 0x36350
																			v17 = 119;
																			// branch -> 0x36354
																		} else {
																			v17 = v12;
																		}
																	} else {
																		// 0x3631c
																		if (v12 == 112) {
																			// 0x36338
																			v17 = 116;
																			// branch -> 0x36354
																		} else {
																			// 0x36324
																			if (v12 > 112) {
																				// 0x36340
																				v17 = 117;
																				// branch -> 0x36354
																			} else {
																				v17 = v12;
																			}
																		}
																		// 0x36354
																		if (v17 != 112) {
																			// 0x3635c
																			if (v17 != 45) {
																				// 0x36408
																				if (v17 == 116) {
																					// 0x36410
																					if (*(int32_t *)g33 == 0) {
																						// 0x36428
																						function_2d824(0);
																						// branch -> 0x366f8
																					} else {
																						// 0x3641c
																						function_2d72c(0);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x36434
																					if (v17 == 117) {
																						// 0x3643c
																						if (*(int32_t *)g33 == 0) {
																							// 0x36454
																							function_2d824(1);
																							// branch -> 0x366f8
																						} else {
																							// 0x36448
																							function_2d72c(1);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x36460
																						if (v17 == 118) {
																							// 0x36468
																							if (*(int32_t *)g33 == 0) {
																								// 0x36480
																								function_2d824(2);
																								// branch -> 0x366f8
																							} else {
																								// 0x36474
																								function_2d72c(2);
																								// branch -> 0x366f8
																							}
																							// Detected a possible infinite recursion (goto support failed); quitting...
																						} else {
																							// 0x3648c
																							if (v17 == 119) {
																								// 0x36494
																								if (*(int32_t *)g33 == 0) {
																									// 0x364ac
																									function_2d824(3);
																									// branch -> 0x366f8
																								} else {
																									// 0x364a0
																									function_2d72c(3);
																									// branch -> 0x366f8
																								}
																								// Detected a possible infinite recursion (goto support failed); quitting...
																							} else {
																								// 0x364b8
																								if (v17 == 120) {
																									// 0x364c0
																									diablo_hotkey_msg(0);
																									// branch -> 0x366f8
																								} else {
																									// 0x364cc
																									if (v17 == 121) {
																										// 0x364d4
																										diablo_hotkey_msg(1);
																										// branch -> 0x366f8
																									} else {
																										// 0x364e0
																										if (v17 == 122) {
																											// 0x364e8
																											diablo_hotkey_msg(2);
																											// branch -> 0x366f8
																										} else {
																											// 0x364f4
																											if (v17 == 123) {
																												// 0x364fc
																												diablo_hotkey_msg(3);
																												// branch -> 0x366f8
																											} else {
																												// 0x36508
																												if (v17 == 38) {
																													// 0x36510
																													if (*(char *)g32 == 0) {
																														// 0x36524
																														if (*(int32_t *)g31 == 0) {
																															// 0x36538
																															if (*(int32_t *)g26 == 0) {
																																// 0x3654c
																																if (*(int32_t *)g24 != 0) {
																																	// 0x36558
																																	AutomapUp();
																																	// branch -> 0x366f8
																																}
																															} else {
																																// 0x36544
																																HelpScrollUp();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x36530
																															QuestlogUp();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x3651c
																														STextUp();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36560
																													if (v17 == 40) {
																														// 0x36568
																														if (*(char *)g32 == 0) {
																															// 0x3657c
																															if (*(int32_t *)g31 == 0) {
																																// 0x36590
																																if (*(int32_t *)g26 == 0) {
																																	// 0x365a4
																																	if (*(int32_t *)g24 != 0) {
																																		// 0x365b0
																																		AutomapDown();
																																		// branch -> 0x366f8
																																	}
																																} else {
																																	// 0x3659c
																																	HelpScrollDown();
																																	// branch -> 0x366f8
																																}
																																// Detected a possible infinite recursion (goto support failed); quitting...
																															} else {
																																// 0x36588
																																QuestlogDown();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x36574
																															STextDown();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x365b8
																														if (v17 == 33) {
																															// 0x365c0
																															if (*(char *)g32 != 0) {
																																// 0x365cc
																																STextPrior();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x365d4
																															if (v17 == 34) {
																																// 0x365dc
																																if (*(char *)g32 != 0) {
																																	// 0x365e8
																																	STextNext();
																																	// branch -> 0x366f8
																																}
																															} else {
																																// 0x365f0
																																if (v17 == 37) {
																																	// 0x365f8
																																	if (*(int32_t *)g24 != 0) {
																																		// 0x36604
																																		if (*(int32_t *)g27 == 0) {
																																			// 0x36610
																																			AutomapLeft();
																																			// branch -> 0x366f8
																																		}
																																	}
																																} else {
																																	// 0x36618
																																	if (v17 == 39) {
																																		// 0x36620
																																		if (*(int32_t *)g24 != 0) {
																																			// 0x3662c
																																			if (*(int32_t *)g27 == 0) {
																																				// 0x36638
																																				AutomapRight();
																																				// branch -> 0x366f8
																																			}
																																		}
																																	} else {
																																		// 0x36640
																																		if (v17 == 9) {
																																			// 0x36648
																																			DoAutoMap();
																																			// branch -> 0x366f8
																																		} else {
																																			// 0x36650
																																			if (v17 == 32) {
																																				// 0x36658
																																				v19 = 1;
																																				if (*(int32_t *)g35 == 0) {
																																					// 0x36668
																																					if (*(int32_t *)g28 == 0) {
																																						// 0x36674
																																						v19 = 0;
																																						// branch -> 0x36678
																																					} else {
																																						v19 = 1;
																																					}
																																				}
																																				// 0x36678
																																				v18 = 1;
																																				if (*(int32_t *)g29 == 0) {
																																					// 0x36688
																																					if (*(int32_t *)g31 == 0) {
																																						// 0x36694
																																						v18 = 0;
																																						// branch -> 0x36698
																																					} else {
																																						v18 = 1;
																																					}
																																				}
																																				// 0x36698
																																				function_35ef8(v18, v19);
																																				v15 = 0;
																																				*(int32_t *)g26 = 0;
																																				*(int32_t *)g35 = v15;
																																				*(int32_t *)g29 = v15;
																																				*(int32_t *)g28 = v15;
																																				*(int32_t *)g33 = v15;
																																				v24 = (char *)g30;
																																				if (*v24 != 0) {
																																					// 0x366c8
																																					if (*(char *)g36 == 0) {
																																						// 0x366d4
																																						*v24 = (char)v15;
																																						g34 = function_4c0c8();
																																						function_6c704();
																																						// branch -> 0x366e0
																																					}
																																				}
																																				// 0x366e0
																																				v14 = 0;
																																				*(int32_t *)g31 = 0;
																																				*(int32_t *)g24 = v14;
																																				*(char *)g25 = (char)v14;
																																				v20 = gamemenu_off();
																																				doom_close(v20);
																																				// branch -> 0x366f8
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
																		}
																		// 0x36364
																		v21 = (int32_t *)g26;
																		if (*v21 == 0) {
																			// 0x3637c
																			if (*(char *)g32 == 0) {
																				// 0x363b0
																				v15 = 0;
																				*(int32_t *)g35 = 0;
																				*(int32_t *)g29 = v15;
																				*(int32_t *)g28 = v15;
																				*(int32_t *)g33 = v15;
																				v22 = (char *)g30;
																				if (*v22 != 0) {
																					// 0x363d0
																					if (*(char *)g36 == 0) {
																						// 0x363dc
																						*v22 = (char)v15;
																						g34 = function_4c0c8();
																						function_6c704();
																						// branch -> 0x363e8
																					}
																				}
																				// 0x363e8
																				v14 = 0;
																				*(int32_t *)g31 = 0;
																				*(int32_t *)g24 = v14;
																				*(char *)g25 = (char)v14;
																				v16 = gamemenu_off();
																				v23 = function_54964(v16);
																				doom_close(v23);
																				// branch -> 0x366f8
																			} else {
																				// 0x36388
																				function_2dc1c();
																				function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																				function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																				track_repeat_walk(0);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x36370
																			*v21 = 0;
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	}
																	// 0x36354
																	if (v17 != 112) {
																		// 0x3635c
																		if (v17 != 45) {
																			// 0x36408
																			if (v17 == 116) {
																				// 0x36410
																				if (*(int32_t *)g33 == 0) {
																					// 0x36428
																					function_2d824(0);
																					// branch -> 0x366f8
																				} else {
																					// 0x3641c
																					function_2d72c(0);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x36434
																				if (v17 == 117) {
																					// 0x3643c
																					if (*(int32_t *)g33 == 0) {
																						// 0x36454
																						function_2d824(1);
																						// branch -> 0x366f8
																					} else {
																						// 0x36448
																						function_2d72c(1);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x36460
																					if (v17 == 118) {
																						// 0x36468
																						if (*(int32_t *)g33 == 0) {
																							// 0x36480
																							function_2d824(2);
																							// branch -> 0x366f8
																						} else {
																							// 0x36474
																							function_2d72c(2);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x3648c
																						if (v17 == 119) {
																							// 0x36494
																							if (*(int32_t *)g33 == 0) {
																								// 0x364ac
																								function_2d824(3);
																								// branch -> 0x366f8
																							} else {
																								// 0x364a0
																								function_2d72c(3);
																								// branch -> 0x366f8
																							}
																							// Detected a possible infinite recursion (goto support failed); quitting...
																						} else {
																							// 0x364b8
																							if (v17 == 120) {
																								// 0x364c0
																								diablo_hotkey_msg(0);
																								// branch -> 0x366f8
																							} else {
																								// 0x364cc
																								if (v17 == 121) {
																									// 0x364d4
																									diablo_hotkey_msg(1);
																									// branch -> 0x366f8
																								} else {
																									// 0x364e0
																									if (v17 == 122) {
																										// 0x364e8
																										diablo_hotkey_msg(2);
																										// branch -> 0x366f8
																									} else {
																										// 0x364f4
																										if (v17 == 123) {
																											// 0x364fc
																											diablo_hotkey_msg(3);
																											// branch -> 0x366f8
																										} else {
																											// 0x36508
																											if (v17 == 38) {
																												// 0x36510
																												if (*(char *)g32 == 0) {
																													// 0x36524
																													if (*(int32_t *)g31 == 0) {
																														// 0x36538
																														if (*(int32_t *)g26 == 0) {
																															// 0x3654c
																															if (*(int32_t *)g24 != 0) {
																																// 0x36558
																																AutomapUp();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x36544
																															HelpScrollUp();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36530
																														QuestlogUp();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x3651c
																													STextUp();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36560
																												if (v17 == 40) {
																													// 0x36568
																													if (*(char *)g32 == 0) {
																														// 0x3657c
																														if (*(int32_t *)g31 == 0) {
																															// 0x36590
																															if (*(int32_t *)g26 == 0) {
																																// 0x365a4
																																if (*(int32_t *)g24 != 0) {
																																	// 0x365b0
																																	AutomapDown();
																																	// branch -> 0x366f8
																																}
																															} else {
																																// 0x3659c
																																HelpScrollDown();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x36588
																															QuestlogDown();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36574
																														STextDown();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x365b8
																													if (v17 == 33) {
																														// 0x365c0
																														if (*(char *)g32 != 0) {
																															// 0x365cc
																															STextPrior();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x365d4
																														if (v17 == 34) {
																															// 0x365dc
																															if (*(char *)g32 != 0) {
																																// 0x365e8
																																STextNext();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x365f0
																															if (v17 == 37) {
																																// 0x365f8
																																if (*(int32_t *)g24 != 0) {
																																	// 0x36604
																																	if (*(int32_t *)g27 == 0) {
																																		// 0x36610
																																		AutomapLeft();
																																		// branch -> 0x366f8
																																	}
																																}
																															} else {
																																// 0x36618
																																if (v17 == 39) {
																																	// 0x36620
																																	if (*(int32_t *)g24 != 0) {
																																		// 0x3662c
																																		if (*(int32_t *)g27 == 0) {
																																			// 0x36638
																																			AutomapRight();
																																			// branch -> 0x366f8
																																		}
																																	}
																																} else {
																																	// 0x36640
																																	if (v17 == 9) {
																																		// 0x36648
																																		DoAutoMap();
																																		// branch -> 0x366f8
																																	} else {
																																		// 0x36650
																																		if (v17 == 32) {
																																			// 0x36658
																																			v19 = 1;
																																			if (*(int32_t *)g35 == 0) {
																																				// 0x36668
																																				if (*(int32_t *)g28 == 0) {
																																					// 0x36674
																																					v19 = 0;
																																					// branch -> 0x36678
																																				} else {
																																					v19 = 1;
																																				}
																																			}
																																			// 0x36678
																																			v18 = 1;
																																			if (*(int32_t *)g29 == 0) {
																																				// 0x36688
																																				if (*(int32_t *)g31 == 0) {
																																					// 0x36694
																																					v18 = 0;
																																					// branch -> 0x36698
																																				} else {
																																					v18 = 1;
																																				}
																																			}
																																			// 0x36698
																																			function_35ef8(v18, v19);
																																			v15 = 0;
																																			*(int32_t *)g26 = 0;
																																			*(int32_t *)g35 = v15;
																																			*(int32_t *)g29 = v15;
																																			*(int32_t *)g28 = v15;
																																			*(int32_t *)g33 = v15;
																																			v24 = (char *)g30;
																																			if (*v24 != 0) {
																																				// 0x366c8
																																				if (*(char *)g36 == 0) {
																																					// 0x366d4
																																					*v24 = (char)v15;
																																					g34 = function_4c0c8();
																																					function_6c704();
																																					// branch -> 0x366e0
																																				}
																																			}
																																			// 0x366e0
																																			v14 = 0;
																																			*(int32_t *)g31 = 0;
																																			*(int32_t *)g24 = v14;
																																			*(char *)g25 = (char)v14;
																																			v20 = gamemenu_off();
																																			doom_close(v20);
																																			// branch -> 0x366f8
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
																	}
																	// 0x36364
																	v21 = (int32_t *)g26;
																	if (*v21 == 0) {
																		// 0x3637c
																		if (*(char *)g32 == 0) {
																			// 0x363b0
																			v15 = 0;
																			*(int32_t *)g35 = 0;
																			*(int32_t *)g29 = v15;
																			*(int32_t *)g28 = v15;
																			*(int32_t *)g33 = v15;
																			v22 = (char *)g30;
																			if (*v22 != 0) {
																				// 0x363d0
																				if (*(char *)g36 == 0) {
																					// 0x363dc
																					*v22 = (char)v15;
																					g34 = function_4c0c8();
																					function_6c704();
																					// branch -> 0x363e8
																				}
																			}
																			// 0x363e8
																			v14 = 0;
																			*(int32_t *)g31 = 0;
																			*(int32_t *)g24 = v14;
																			*(char *)g25 = (char)v14;
																			v16 = gamemenu_off();
																			v23 = function_54964(v16);
																			doom_close(v23);
																			// branch -> 0x366f8
																		} else {
																			// 0x36388
																			function_2dc1c();
																			function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																			function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																			track_repeat_walk(0);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36370
																		*v21 = 0;
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																}
																// 0x36354
																if (v17 != 112) {
																	// 0x3635c
																	if (v17 != 45) {
																		// 0x36408
																		if (v17 == 116) {
																			// 0x36410
																			if (*(int32_t *)g33 == 0) {
																				// 0x36428
																				function_2d824(0);
																				// branch -> 0x366f8
																			} else {
																				// 0x3641c
																				function_2d72c(0);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x36434
																			if (v17 == 117) {
																				// 0x3643c
																				if (*(int32_t *)g33 == 0) {
																					// 0x36454
																					function_2d824(1);
																					// branch -> 0x366f8
																				} else {
																					// 0x36448
																					function_2d72c(1);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x36460
																				if (v17 == 118) {
																					// 0x36468
																					if (*(int32_t *)g33 == 0) {
																						// 0x36480
																						function_2d824(2);
																						// branch -> 0x366f8
																					} else {
																						// 0x36474
																						function_2d72c(2);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x3648c
																					if (v17 == 119) {
																						// 0x36494
																						if (*(int32_t *)g33 == 0) {
																							// 0x364ac
																							function_2d824(3);
																							// branch -> 0x366f8
																						} else {
																							// 0x364a0
																							function_2d72c(3);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x364b8
																						if (v17 == 120) {
																							// 0x364c0
																							diablo_hotkey_msg(0);
																							// branch -> 0x366f8
																						} else {
																							// 0x364cc
																							if (v17 == 121) {
																								// 0x364d4
																								diablo_hotkey_msg(1);
																								// branch -> 0x366f8
																							} else {
																								// 0x364e0
																								if (v17 == 122) {
																									// 0x364e8
																									diablo_hotkey_msg(2);
																									// branch -> 0x366f8
																								} else {
																									// 0x364f4
																									if (v17 == 123) {
																										// 0x364fc
																										diablo_hotkey_msg(3);
																										// branch -> 0x366f8
																									} else {
																										// 0x36508
																										if (v17 == 38) {
																											// 0x36510
																											if (*(char *)g32 == 0) {
																												// 0x36524
																												if (*(int32_t *)g31 == 0) {
																													// 0x36538
																													if (*(int32_t *)g26 == 0) {
																														// 0x3654c
																														if (*(int32_t *)g24 != 0) {
																															// 0x36558
																															AutomapUp();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x36544
																														HelpScrollUp();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36530
																													QuestlogUp();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x3651c
																												STextUp();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x36560
																											if (v17 == 40) {
																												// 0x36568
																												if (*(char *)g32 == 0) {
																													// 0x3657c
																													if (*(int32_t *)g31 == 0) {
																														// 0x36590
																														if (*(int32_t *)g26 == 0) {
																															// 0x365a4
																															if (*(int32_t *)g24 != 0) {
																																// 0x365b0
																																AutomapDown();
																																// branch -> 0x366f8
																															}
																														} else {
																															// 0x3659c
																															HelpScrollDown();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36588
																														QuestlogDown();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36574
																													STextDown();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x365b8
																												if (v17 == 33) {
																													// 0x365c0
																													if (*(char *)g32 != 0) {
																														// 0x365cc
																														STextPrior();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x365d4
																													if (v17 == 34) {
																														// 0x365dc
																														if (*(char *)g32 != 0) {
																															// 0x365e8
																															STextNext();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x365f0
																														if (v17 == 37) {
																															// 0x365f8
																															if (*(int32_t *)g24 != 0) {
																																// 0x36604
																																if (*(int32_t *)g27 == 0) {
																																	// 0x36610
																																	AutomapLeft();
																																	// branch -> 0x366f8
																																}
																															}
																														} else {
																															// 0x36618
																															if (v17 == 39) {
																																// 0x36620
																																if (*(int32_t *)g24 != 0) {
																																	// 0x3662c
																																	if (*(int32_t *)g27 == 0) {
																																		// 0x36638
																																		AutomapRight();
																																		// branch -> 0x366f8
																																	}
																																}
																															} else {
																																// 0x36640
																																if (v17 == 9) {
																																	// 0x36648
																																	DoAutoMap();
																																	// branch -> 0x366f8
																																} else {
																																	// 0x36650
																																	if (v17 == 32) {
																																		// 0x36658
																																		v19 = 1;
																																		if (*(int32_t *)g35 == 0) {
																																			// 0x36668
																																			if (*(int32_t *)g28 == 0) {
																																				// 0x36674
																																				v19 = 0;
																																				// branch -> 0x36678
																																			} else {
																																				v19 = 1;
																																			}
																																		}
																																		// 0x36678
																																		v18 = 1;
																																		if (*(int32_t *)g29 == 0) {
																																			// 0x36688
																																			if (*(int32_t *)g31 == 0) {
																																				// 0x36694
																																				v18 = 0;
																																				// branch -> 0x36698
																																			} else {
																																				v18 = 1;
																																			}
																																		}
																																		// 0x36698
																																		function_35ef8(v18, v19);
																																		v15 = 0;
																																		*(int32_t *)g26 = 0;
																																		*(int32_t *)g35 = v15;
																																		*(int32_t *)g29 = v15;
																																		*(int32_t *)g28 = v15;
																																		*(int32_t *)g33 = v15;
																																		v24 = (char *)g30;
																																		if (*v24 != 0) {
																																			// 0x366c8
																																			if (*(char *)g36 == 0) {
																																				// 0x366d4
																																				*v24 = (char)v15;
																																				g34 = function_4c0c8();
																																				function_6c704();
																																				// branch -> 0x366e0
																																			}
																																		}
																																		// 0x366e0
																																		v14 = 0;
																																		*(int32_t *)g31 = 0;
																																		*(int32_t *)g24 = v14;
																																		*(char *)g25 = (char)v14;
																																		v20 = gamemenu_off();
																																		doom_close(v20);
																																		// branch -> 0x366f8
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
																}
																// 0x36364
																v21 = (int32_t *)g26;
																if (*v21 == 0) {
																	// 0x3637c
																	if (*(char *)g32 == 0) {
																		// 0x363b0
																		v15 = 0;
																		*(int32_t *)g35 = 0;
																		*(int32_t *)g29 = v15;
																		*(int32_t *)g28 = v15;
																		*(int32_t *)g33 = v15;
																		v22 = (char *)g30;
																		if (*v22 != 0) {
																			// 0x363d0
																			if (*(char *)g36 == 0) {
																				// 0x363dc
																				*v22 = (char)v15;
																				g34 = function_4c0c8();
																				function_6c704();
																				// branch -> 0x363e8
																			}
																		}
																		// 0x363e8
																		v14 = 0;
																		*(int32_t *)g31 = 0;
																		*(int32_t *)g24 = v14;
																		*(char *)g25 = (char)v14;
																		v16 = gamemenu_off();
																		v23 = function_54964(v16);
																		doom_close(v23);
																		// branch -> 0x366f8
																	} else {
																		// 0x36388
																		function_2dc1c();
																		function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																		function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																		track_repeat_walk(0);
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x36370
																	*v21 = 0;
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															}
															// 0x36354
															if (v17 != 112) {
																// 0x3635c
																if (v17 != 45) {
																	// 0x36408
																	if (v17 == 116) {
																		// 0x36410
																		if (*(int32_t *)g33 == 0) {
																			// 0x36428
																			function_2d824(0);
																			// branch -> 0x366f8
																		} else {
																			// 0x3641c
																			function_2d72c(0);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36434
																		if (v17 == 117) {
																			// 0x3643c
																			if (*(int32_t *)g33 == 0) {
																				// 0x36454
																				function_2d824(1);
																				// branch -> 0x366f8
																			} else {
																				// 0x36448
																				function_2d72c(1);
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x36460
																			if (v17 == 118) {
																				// 0x36468
																				if (*(int32_t *)g33 == 0) {
																					// 0x36480
																					function_2d824(2);
																					// branch -> 0x366f8
																				} else {
																					// 0x36474
																					function_2d72c(2);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x3648c
																				if (v17 == 119) {
																					// 0x36494
																					if (*(int32_t *)g33 == 0) {
																						// 0x364ac
																						function_2d824(3);
																						// branch -> 0x366f8
																					} else {
																						// 0x364a0
																						function_2d72c(3);
																						// branch -> 0x366f8
																					}
																					// Detected a possible infinite recursion (goto support failed); quitting...
																				} else {
																					// 0x364b8
																					if (v17 == 120) {
																						// 0x364c0
																						diablo_hotkey_msg(0);
																						// branch -> 0x366f8
																					} else {
																						// 0x364cc
																						if (v17 == 121) {
																							// 0x364d4
																							diablo_hotkey_msg(1);
																							// branch -> 0x366f8
																						} else {
																							// 0x364e0
																							if (v17 == 122) {
																								// 0x364e8
																								diablo_hotkey_msg(2);
																								// branch -> 0x366f8
																							} else {
																								// 0x364f4
																								if (v17 == 123) {
																									// 0x364fc
																									diablo_hotkey_msg(3);
																									// branch -> 0x366f8
																								} else {
																									// 0x36508
																									if (v17 == 38) {
																										// 0x36510
																										if (*(char *)g32 == 0) {
																											// 0x36524
																											if (*(int32_t *)g31 == 0) {
																												// 0x36538
																												if (*(int32_t *)g26 == 0) {
																													// 0x3654c
																													if (*(int32_t *)g24 != 0) {
																														// 0x36558
																														AutomapUp();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x36544
																													HelpScrollUp();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36530
																												QuestlogUp();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x3651c
																											STextUp();
																											// branch -> 0x366f8
																										}
																										// Detected a possible infinite recursion (goto support failed); quitting...
																									} else {
																										// 0x36560
																										if (v17 == 40) {
																											// 0x36568
																											if (*(char *)g32 == 0) {
																												// 0x3657c
																												if (*(int32_t *)g31 == 0) {
																													// 0x36590
																													if (*(int32_t *)g26 == 0) {
																														// 0x365a4
																														if (*(int32_t *)g24 != 0) {
																															// 0x365b0
																															AutomapDown();
																															// branch -> 0x366f8
																														}
																													} else {
																														// 0x3659c
																														HelpScrollDown();
																														// branch -> 0x366f8
																													}
																													// Detected a possible infinite recursion (goto support failed); quitting...
																												} else {
																													// 0x36588
																													QuestlogDown();
																													// branch -> 0x366f8
																												}
																												// Detected a possible infinite recursion (goto support failed); quitting...
																											} else {
																												// 0x36574
																												STextDown();
																												// branch -> 0x366f8
																											}
																											// Detected a possible infinite recursion (goto support failed); quitting...
																										} else {
																											// 0x365b8
																											if (v17 == 33) {
																												// 0x365c0
																												if (*(char *)g32 != 0) {
																													// 0x365cc
																													STextPrior();
																													// branch -> 0x366f8
																												}
																											} else {
																												// 0x365d4
																												if (v17 == 34) {
																													// 0x365dc
																													if (*(char *)g32 != 0) {
																														// 0x365e8
																														STextNext();
																														// branch -> 0x366f8
																													}
																												} else {
																													// 0x365f0
																													if (v17 == 37) {
																														// 0x365f8
																														if (*(int32_t *)g24 != 0) {
																															// 0x36604
																															if (*(int32_t *)g27 == 0) {
																																// 0x36610
																																AutomapLeft();
																																// branch -> 0x366f8
																															}
																														}
																													} else {
																														// 0x36618
																														if (v17 == 39) {
																															// 0x36620
																															if (*(int32_t *)g24 != 0) {
																																// 0x3662c
																																if (*(int32_t *)g27 == 0) {
																																	// 0x36638
																																	AutomapRight();
																																	// branch -> 0x366f8
																																}
																															}
																														} else {
																															// 0x36640
																															if (v17 == 9) {
																																// 0x36648
																																DoAutoMap();
																																// branch -> 0x366f8
																															} else {
																																// 0x36650
																																if (v17 == 32) {
																																	// 0x36658
																																	v19 = 1;
																																	if (*(int32_t *)g35 == 0) {
																																		// 0x36668
																																		if (*(int32_t *)g28 == 0) {
																																			// 0x36674
																																			v19 = 0;
																																			// branch -> 0x36678
																																		} else {
																																			v19 = 1;
																																		}
																																	}
																																	// 0x36678
																																	v18 = 1;
																																	if (*(int32_t *)g29 == 0) {
																																		// 0x36688
																																		if (*(int32_t *)g31 == 0) {
																																			// 0x36694
																																			v18 = 0;
																																			// branch -> 0x36698
																																		} else {
																																			v18 = 1;
																																		}
																																	}
																																	// 0x36698
																																	function_35ef8(v18, v19);
																																	v15 = 0;
																																	*(int32_t *)g26 = 0;
																																	*(int32_t *)g35 = v15;
																																	*(int32_t *)g29 = v15;
																																	*(int32_t *)g28 = v15;
																																	*(int32_t *)g33 = v15;
																																	v24 = (char *)g30;
																																	if (*v24 != 0) {
																																		// 0x366c8
																																		if (*(char *)g36 == 0) {
																																			// 0x366d4
																																			*v24 = (char)v15;
																																			g34 = function_4c0c8();
																																			function_6c704();
																																			// branch -> 0x366e0
																																		}
																																	}
																																	// 0x366e0
																																	v14 = 0;
																																	*(int32_t *)g31 = 0;
																																	*(int32_t *)g24 = v14;
																																	*(char *)g25 = (char)v14;
																																	v20 = gamemenu_off();
																																	doom_close(v20);
																																	// branch -> 0x366f8
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
															}
															// 0x36364
															v21 = (int32_t *)g26;
															if (*v21 == 0) {
																// 0x3637c
																if (*(char *)g32 == 0) {
																	// 0x363b0
																	v15 = 0;
																	*(int32_t *)g35 = 0;
																	*(int32_t *)g29 = v15;
																	*(int32_t *)g28 = v15;
																	*(int32_t *)g33 = v15;
																	v22 = (char *)g30;
																	if (*v22 != 0) {
																		// 0x363d0
																		if (*(char *)g36 == 0) {
																			// 0x363dc
																			*v22 = (char)v15;
																			g34 = function_4c0c8();
																			function_6c704();
																			// branch -> 0x363e8
																		}
																	}
																	// 0x363e8
																	v14 = 0;
																	*(int32_t *)g31 = 0;
																	*(int32_t *)g24 = v14;
																	*(char *)g25 = (char)v14;
																	v16 = gamemenu_off();
																	v23 = function_54964(v16);
																	doom_close(v23);
																	// branch -> 0x366f8
																} else {
																	// 0x36388
																	function_2dc1c();
																	function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																	function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																	track_repeat_walk(0);
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															} else {
																// 0x36370
																*v21 = 0;
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x36120
				if (v2 == 51) {
					// 0x3618c
					g22 = 114;
					v3 = 114;
					// branch -> 0x361d8
				} else {
					// 0x36128
					if (v2 > 51) {
						// 0x36144
						if (v2 == 53) {
							// 0x3619c
							g22 = 116;
							v3 = 116;
							// branch -> 0x361d8
						} else {
							// 0x3614c
							if (v2 > 53) {
								// 0x361a4
								g22 = 117;
								v3 = 117;
								// branch -> 0x361d8
							} else {
								// 0x36194
								g22 = 115;
								v3 = 115;
								// branch -> 0x361d8
							}
							// 0x361d8
							if (function_54224(v3) == 0) {
								// 0x361e8
								if (function_322ec(g22) == 0) {
									// 0x361f8
									v4 = g23;
									if (*(int32_t *)*(int32_t *)(v4 - 0x75cc) == 0) {
										// 0x361f8
										v12 = g22;
										// branch -> 0x36268
										// 0x36268
										if (v12 == 27) {
											// 0x36270
											if (function_35fdc() == 0) {
												// 0x3627c
												track_repeat_walk(0);
												gamemenu_previous(0);
												// branch -> 0x366f8
											}
										} else {
											// 0x36290
											v11 = g23;
											if (*(int32_t *)(v11 - 0x4f54) == 0) {
												// 0x3629c
												if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
													// 0x362ac
													if (v12 == 19) {
														// 0x362b4
														diablo_pause_game();
														// branch -> 0x366f8
													} else {
														// 0x362bc
														v13 = *(int32_t *)(v11 - 0x75d0);
														if (*(int32_t *)v13 != 2) {
															// 0x362cc
															if (v12 == 13) {
																// 0x362d4
																if (*(char *)g32 == 0) {
																	// 0x362e8
																	if (*(int32_t *)g31 == 0) {
																		// 0x362fc
																		function_31ee8();
																		// branch -> 0x366f8
																	} else {
																		// 0x362f4
																		QuestlogEnter();
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x362e0
																	function_bd780(v13);
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															} else {
																// 0x36304
																if (*(int32_t *)(v11 - 0x4f58) != 0) {
																	// 0x36310
																	if (v12 == 114) {
																		// 0x36348
																		// branch -> 0x36354
																	} else {
																		// 0x36318
																		if (v12 > 114) {
																			// 0x3632c
																			if (v12 == 115) {
																				// 0x36350
																				// branch -> 0x36354
																			}
																		} else {
																			// 0x3631c
																			if (v12 == 112) {
																				// 0x36338
																				v17 = 116;
																				// branch -> 0x36354
																			} else {
																				// 0x36324
																				if (v12 > 112) {
																					// 0x36340
																					v17 = 117;
																					// branch -> 0x36354
																				} else {
																					v17 = v12;
																				}
																			}
																			// 0x36354
																			if (v17 != 112) {
																				// 0x3635c
																				if (v17 != 45) {
																					// 0x36408
																					if (v17 == 116) {
																						// 0x36410
																						if (*(int32_t *)g33 == 0) {
																							// 0x36428
																							function_2d824(0);
																							// branch -> 0x366f8
																						} else {
																							// 0x3641c
																							function_2d72c(0);
																							// branch -> 0x366f8
																						}
																						// Detected a possible infinite recursion (goto support failed); quitting...
																					} else {
																						// 0x36434
																						if (v17 == 117) {
																							// 0x3643c
																							if (*(int32_t *)g33 == 0) {
																								// 0x36454
																								function_2d824(1);
																								// branch -> 0x366f8
																							} else {
																								// 0x36448
																								function_2d72c(1);
																								// branch -> 0x366f8
																							}
																							// Detected a possible infinite recursion (goto support failed); quitting...
																						} else {
																							// 0x36460
																							if (v17 == 118) {
																								// 0x36468
																								if (*(int32_t *)g33 == 0) {
																									// 0x36480
																									function_2d824(2);
																									// branch -> 0x366f8
																								} else {
																									// 0x36474
																									function_2d72c(2);
																									// branch -> 0x366f8
																								}
																								// Detected a possible infinite recursion (goto support failed); quitting...
																							} else {
																								// 0x3648c
																								if (v17 == 119) {
																									// 0x36494
																									if (*(int32_t *)g33 == 0) {
																										// 0x364ac
																										function_2d824(3);
																										// branch -> 0x366f8
																									} else {
																										// 0x364a0
																										function_2d72c(3);
																										// branch -> 0x366f8
																									}
																									// Detected a possible infinite recursion (goto support failed); quitting...
																								} else {
																									// 0x364b8
																									if (v17 == 120) {
																										// 0x364c0
																										diablo_hotkey_msg(0);
																										// branch -> 0x366f8
																									} else {
																										// 0x364cc
																										if (v17 == 121) {
																											// 0x364d4
																											diablo_hotkey_msg(1);
																											// branch -> 0x366f8
																										} else {
																											// 0x364e0
																											if (v17 == 122) {
																												// 0x364e8
																												diablo_hotkey_msg(2);
																												// branch -> 0x366f8
																											} else {
																												// 0x364f4
																												if (v17 == 123) {
																													// 0x364fc
																													diablo_hotkey_msg(3);
																													// branch -> 0x366f8
																												} else {
																													// 0x36508
																													if (v17 == 38) {
																														// 0x36510
																														if (*(char *)g32 == 0) {
																															// 0x36524
																															if (*(int32_t *)g31 == 0) {
																																// 0x36538
																																if (*(int32_t *)g26 == 0) {
																																	// 0x3654c
																																	if (*(int32_t *)g24 != 0) {
																																		// 0x36558
																																		AutomapUp();
																																		// branch -> 0x366f8
																																	}
																																} else {
																																	// 0x36544
																																	HelpScrollUp();
																																	// branch -> 0x366f8
																																}
																																// Detected a possible infinite recursion (goto support failed); quitting...
																															} else {
																																// 0x36530
																																QuestlogUp();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x3651c
																															STextUp();
																															// branch -> 0x366f8
																														}
																														// Detected a possible infinite recursion (goto support failed); quitting...
																													} else {
																														// 0x36560
																														if (v17 == 40) {
																															// 0x36568
																															if (*(char *)g32 == 0) {
																																// 0x3657c
																																if (*(int32_t *)g31 == 0) {
																																	// 0x36590
																																	if (*(int32_t *)g26 == 0) {
																																		// 0x365a4
																																		if (*(int32_t *)g24 != 0) {
																																			// 0x365b0
																																			AutomapDown();
																																			// branch -> 0x366f8
																																		}
																																	} else {
																																		// 0x3659c
																																		HelpScrollDown();
																																		// branch -> 0x366f8
																																	}
																																	// Detected a possible infinite recursion (goto support failed); quitting...
																																} else {
																																	// 0x36588
																																	QuestlogDown();
																																	// branch -> 0x366f8
																																}
																																// Detected a possible infinite recursion (goto support failed); quitting...
																															} else {
																																// 0x36574
																																STextDown();
																																// branch -> 0x366f8
																															}
																															// Detected a possible infinite recursion (goto support failed); quitting...
																														} else {
																															// 0x365b8
																															if (v17 == 33) {
																																// 0x365c0
																																if (*(char *)g32 != 0) {
																																	// 0x365cc
																																	STextPrior();
																																	// branch -> 0x366f8
																																}
																															} else {
																																// 0x365d4
																																if (v17 == 34) {
																																	// 0x365dc
																																	if (*(char *)g32 != 0) {
																																		// 0x365e8
																																		STextNext();
																																		// branch -> 0x366f8
																																	}
																																} else {
																																	// 0x365f0
																																	if (v17 == 37) {
																																		// 0x365f8
																																		if (*(int32_t *)g24 != 0) {
																																			// 0x36604
																																			if (*(int32_t *)g27 == 0) {
																																				// 0x36610
																																				AutomapLeft();
																																				// branch -> 0x366f8
																																			}
																																		}
																																	} else {
																																		// 0x36618
																																		if (v17 == 39) {
																																			// 0x36620
																																			if (*(int32_t *)g24 != 0) {
																																				// 0x3662c
																																				if (*(int32_t *)g27 == 0) {
																																					// 0x36638
																																					AutomapRight();
																																					// branch -> 0x366f8
																																				}
																																			}
																																		} else {
																																			// 0x36640
																																			if (v17 == 9) {
																																				// 0x36648
																																				DoAutoMap();
																																				// branch -> 0x366f8
																																			} else {
																																				// 0x36650
																																				if (v17 == 32) {
																																					// 0x36658
																																					v19 = 1;
																																					if (*(int32_t *)g35 == 0) {
																																						// 0x36668
																																						if (*(int32_t *)g28 == 0) {
																																							// 0x36674
																																							v19 = 0;
																																							// branch -> 0x36678
																																						} else {
																																							v19 = 1;
																																						}
																																					}
																																					// 0x36678
																																					v18 = 1;
																																					if (*(int32_t *)g29 == 0) {
																																						// 0x36688
																																						if (*(int32_t *)g31 == 0) {
																																							// 0x36694
																																							v18 = 0;
																																							// branch -> 0x36698
																																						} else {
																																							v18 = 1;
																																						}
																																					}
																																					// 0x36698
																																					function_35ef8(v18, v19);
																																					v15 = 0;
																																					*(int32_t *)g26 = 0;
																																					*(int32_t *)g35 = v15;
																																					*(int32_t *)g29 = v15;
																																					*(int32_t *)g28 = v15;
																																					*(int32_t *)g33 = v15;
																																					v24 = (char *)g30;
																																					if (*v24 != 0) {
																																						// 0x366c8
																																						if (*(char *)g36 == 0) {
																																							// 0x366d4
																																							*v24 = (char)v15;
																																							g34 = function_4c0c8();
																																							function_6c704();
																																							// branch -> 0x366e0
																																						}
																																					}
																																					// 0x366e0
																																					v14 = 0;
																																					*(int32_t *)g31 = 0;
																																					*(int32_t *)g24 = v14;
																																					*(char *)g25 = (char)v14;
																																					v20 = gamemenu_off();
																																					doom_close(v20);
																																					// branch -> 0x366f8
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
																			}
																			// 0x36364
																			v21 = (int32_t *)g26;
																			if (*v21 == 0) {
																				// 0x3637c
																				if (*(char *)g32 == 0) {
																					// 0x363b0
																					v15 = 0;
																					*(int32_t *)g35 = 0;
																					*(int32_t *)g29 = v15;
																					*(int32_t *)g28 = v15;
																					*(int32_t *)g33 = v15;
																					v22 = (char *)g30;
																					if (*v22 != 0) {
																						// 0x363d0
																						if (*(char *)g36 == 0) {
																							// 0x363dc
																							*v22 = (char)v15;
																							g34 = function_4c0c8();
																							function_6c704();
																							// branch -> 0x363e8
																						}
																					}
																					// 0x363e8
																					v14 = 0;
																					*(int32_t *)g31 = 0;
																					*(int32_t *)g24 = v14;
																					*(char *)g25 = (char)v14;
																					v16 = gamemenu_off();
																					v23 = function_54964(v16);
																					doom_close(v23);
																					// branch -> 0x366f8
																				} else {
																					// 0x36388
																					function_2dc1c();
																					function_2dbac(*(int32_t *)(g23 - 0x63f0), 1);
																					function_2dbac(*(int32_t *)(g23 - 0x63f4), 1);
																					track_repeat_walk(0);
																					// branch -> 0x366f8
																				}
																				// Detected a possible infinite recursion (goto support failed); quitting...
																			} else {
																				// 0x36370
																				*v21 = 0;
																				// branch -> 0x366f8
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
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x36208
										if (*(int32_t *)(v4 - 0x4f54) == 0) {
											// 0x36214
											v5 = g22;
											v6 = v5;
											if (v5 == 120) {
												// 0x3621c
												diablo_hotkey_msg(0);
												v6 = g22;
												// branch -> 0x36224
											}
											// 0x36224
											v7 = v6;
											if (v6 == 121) {
												// 0x3622c
												diablo_hotkey_msg(1);
												v7 = g22;
												// branch -> 0x36234
											}
											// 0x36234
											v8 = v7;
											if (v7 == 122) {
												// 0x3623c
												diablo_hotkey_msg(2);
												v8 = g22;
												// branch -> 0x36244
											}
											// 0x36244
											v9 = v8;
											if (v8 == 123) {
												// 0x3624c
												diablo_hotkey_msg(3);
												v9 = g22;
												// branch -> 0x36254
											}
											// 0x36254
											v10 = v9;
											if (v9 == 13) {
												// 0x3625c
												function_31ee8();
												v10 = g22;
												// branch -> 0x36260
											}
											// 0x36260
											if (v10 == 27) {
												v12 = 27;
												// 0x36268
												if (v12 == 27) {
													// 0x36270
													if (function_35fdc() == 0) {
														// 0x3627c
														track_repeat_walk(0);
														gamemenu_previous(0);
														// branch -> 0x366f8
													}
												} else {
													// 0x36290
													v11 = g23;
													if (*(int32_t *)(v11 - 0x4f54) == 0) {
														// 0x3629c
														if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
															// 0x362ac
															if (v12 == 19) {
																// 0x362b4
																diablo_pause_game();
																// branch -> 0x366f8
															} else {
																// 0x362bc
																v13 = *(int32_t *)(v11 - 0x75d0);
																if (*(int32_t *)v13 != 2) {
																	// 0x362cc
																	if (v12 == 13) {
																		// 0x362d4
																		if (*(char *)g32 == 0) {
																			// 0x362e8
																			if (*(int32_t *)g31 == 0) {
																				// 0x362fc
																				function_31ee8();
																				// branch -> 0x366f8
																			} else {
																				// 0x362f4
																				QuestlogEnter();
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x362e0
																			function_bd780(v13);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36304
																		if (*(int32_t *)(v11 - 0x4f58) != 0) {
																			// 0x36310
																			if (v12 == 114) {
																				// 0x36348
																				// branch -> 0x36354
																			} else {
																				// 0x36318
																				if (v12 > 114) {
																					// 0x3632c
																					if (v12 == 115) {
																						// 0x36350
																						// branch -> 0x36354
																					}
																				} else {
																					// 0x3631c
																					if (v12 == 112) {
																						// 0x36338
																						// branch -> 0x36354
																					} else {
																						// 0x36324
																						if (v12 > 112) {
																							// 0x36340
																							// branch -> 0x36354
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
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// 0x361d8
						if (function_54224(v3) == 0) {
							// 0x361e8
							if (function_322ec(g22) == 0) {
								// 0x361f8
								v4 = g23;
								if (*(int32_t *)*(int32_t *)(v4 - 0x75cc) == 0) {
									// 0x361f8
									v12 = g22;
									// branch -> 0x36268
									// 0x36268
									if (v12 == 27) {
										// 0x36270
										if (function_35fdc() == 0) {
											// 0x3627c
											track_repeat_walk(0);
											gamemenu_previous(0);
											// branch -> 0x366f8
										}
									} else {
										// 0x36290
										v11 = g23;
										if (*(int32_t *)(v11 - 0x4f54) == 0) {
											// 0x3629c
											if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
												// 0x362ac
												if (v12 == 19) {
													// 0x362b4
													diablo_pause_game();
													// branch -> 0x366f8
												} else {
													// 0x362bc
													v13 = *(int32_t *)(v11 - 0x75d0);
													if (*(int32_t *)v13 != 2) {
														// 0x362cc
														if (v12 == 13) {
															// 0x362d4
															if (*(char *)g32 == 0) {
																// 0x362e8
																if (*(int32_t *)g31 == 0) {
																	// 0x362fc
																	function_31ee8();
																	// branch -> 0x366f8
																} else {
																	// 0x362f4
																	QuestlogEnter();
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															} else {
																// 0x362e0
																function_bd780(v13);
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														} else {
															// 0x36304
															if (*(int32_t *)(v11 - 0x4f58) != 0) {
																// 0x36310
																if (v12 == 114) {
																	// 0x36348
																	// branch -> 0x36354
																} else {
																	// 0x36318
																	if (v12 > 114) {
																		// 0x3632c
																		if (v12 == 115) {
																			// 0x36350
																			// branch -> 0x36354
																		}
																	} else {
																		// 0x3631c
																		if (v12 == 112) {
																			// 0x36338
																			// branch -> 0x36354
																		} else {
																			// 0x36324
																			if (v12 > 112) {
																				// 0x36340
																				// branch -> 0x36354
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
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x36208
									if (*(int32_t *)(v4 - 0x4f54) == 0) {
										// 0x36214
										v5 = g22;
										v6 = v5;
										if (v5 == 120) {
											// 0x3621c
											diablo_hotkey_msg(0);
											v6 = g22;
											// branch -> 0x36224
										}
										// 0x36224
										v7 = v6;
										if (v6 == 121) {
											// 0x3622c
											diablo_hotkey_msg(1);
											v7 = g22;
											// branch -> 0x36234
										}
										// 0x36234
										v8 = v7;
										if (v7 == 122) {
											// 0x3623c
											diablo_hotkey_msg(2);
											v8 = g22;
											// branch -> 0x36244
										}
										// 0x36244
										v9 = v8;
										if (v8 == 123) {
											// 0x3624c
											diablo_hotkey_msg(3);
											v9 = g22;
											// branch -> 0x36254
										}
										// 0x36254
										v10 = v9;
										if (v9 == 13) {
											// 0x3625c
											function_31ee8();
											v10 = g22;
											// branch -> 0x36260
										}
										// 0x36260
										if (v10 == 27) {
											v12 = 27;
											// 0x36268
											if (v12 == 27) {
												// 0x36270
												if (function_35fdc() == 0) {
													// 0x3627c
													track_repeat_walk(0);
													gamemenu_previous(0);
													// branch -> 0x366f8
												}
											} else {
												// 0x36290
												v11 = g23;
												if (*(int32_t *)(v11 - 0x4f54) == 0) {
													// 0x3629c
													if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
														// 0x362ac
														if (v12 == 19) {
															// 0x362b4
															diablo_pause_game();
															// branch -> 0x366f8
														} else {
															// 0x362bc
															v13 = *(int32_t *)(v11 - 0x75d0);
															if (*(int32_t *)v13 != 2) {
																// 0x362cc
																if (v12 == 13) {
																	// 0x362d4
																	if (*(char *)g32 == 0) {
																		// 0x362e8
																		if (*(int32_t *)g31 == 0) {
																			// 0x362fc
																			function_31ee8();
																			// branch -> 0x366f8
																		} else {
																			// 0x362f4
																			QuestlogEnter();
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x362e0
																		function_bd780(v13);
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x36304
																	if (*(int32_t *)(v11 - 0x4f58) != 0) {
																		// 0x36310
																		if (v12 == 114) {
																			// 0x36348
																			// branch -> 0x36354
																		} else {
																			// 0x36318
																			if (v12 > 114) {
																				// 0x3632c
																				if (v12 == 115) {
																					// 0x36350
																					// branch -> 0x36354
																				}
																			} else {
																				// 0x3631c
																				if (v12 == 112) {
																					// 0x36338
																					// branch -> 0x36354
																				} else {
																					// 0x36324
																					if (v12 > 112) {
																						// 0x36340
																						// branch -> 0x36354
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
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x3612c
						if (v2 == 49) {
							// 0x3617c
							g22 = 112;
							v3 = 112;
							// branch -> 0x361d8
						} else {
							// 0x36134
							if (v2 > 49) {
								// 0x36184
								g22 = 113;
								v3 = 113;
								// branch -> 0x361d8
							} else {
								// 0x36138
								if (v2 > 47) {
									// 0x361c4
									g22 = 121;
									v3 = 121;
									// branch -> 0x361d8
								} else {
									v3 = v2;
								}
							}
							// 0x361d8
							if (function_54224(v3) == 0) {
								// 0x361e8
								if (function_322ec(g22) == 0) {
									// 0x361f8
									v4 = g23;
									if (*(int32_t *)*(int32_t *)(v4 - 0x75cc) == 0) {
										// 0x361f8
										v12 = g22;
										// branch -> 0x36268
										// 0x36268
										if (v12 == 27) {
											// 0x36270
											if (function_35fdc() == 0) {
												// 0x3627c
												track_repeat_walk(0);
												gamemenu_previous(0);
												// branch -> 0x366f8
											}
										} else {
											// 0x36290
											v11 = g23;
											if (*(int32_t *)(v11 - 0x4f54) == 0) {
												// 0x3629c
												if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
													// 0x362ac
													if (v12 == 19) {
														// 0x362b4
														diablo_pause_game();
														// branch -> 0x366f8
													} else {
														// 0x362bc
														v13 = *(int32_t *)(v11 - 0x75d0);
														if (*(int32_t *)v13 != 2) {
															// 0x362cc
															if (v12 == 13) {
																// 0x362d4
																if (*(char *)g32 == 0) {
																	// 0x362e8
																	if (*(int32_t *)g31 == 0) {
																		// 0x362fc
																		function_31ee8();
																		// branch -> 0x366f8
																	} else {
																		// 0x362f4
																		QuestlogEnter();
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x362e0
																	function_bd780(v13);
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															} else {
																// 0x36304
																if (*(int32_t *)(v11 - 0x4f58) != 0) {
																	// 0x36310
																	if (v12 == 114) {
																		// 0x36348
																		// branch -> 0x36354
																	} else {
																		// 0x36318
																		if (v12 > 114) {
																			// 0x3632c
																			if (v12 == 115) {
																				// 0x36350
																				// branch -> 0x36354
																			}
																		} else {
																			// 0x3631c
																			if (v12 == 112) {
																				// 0x36338
																				// branch -> 0x36354
																			} else {
																				// 0x36324
																				if (v12 > 112) {
																					// 0x36340
																					// branch -> 0x36354
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
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x36208
										if (*(int32_t *)(v4 - 0x4f54) == 0) {
											// 0x36214
											v5 = g22;
											v6 = v5;
											if (v5 == 120) {
												// 0x3621c
												diablo_hotkey_msg(0);
												v6 = g22;
												// branch -> 0x36224
											}
											// 0x36224
											v7 = v6;
											if (v6 == 121) {
												// 0x3622c
												diablo_hotkey_msg(1);
												v7 = g22;
												// branch -> 0x36234
											}
											// 0x36234
											v8 = v7;
											if (v7 == 122) {
												// 0x3623c
												diablo_hotkey_msg(2);
												v8 = g22;
												// branch -> 0x36244
											}
											// 0x36244
											v9 = v8;
											if (v8 == 123) {
												// 0x3624c
												diablo_hotkey_msg(3);
												v9 = g22;
												// branch -> 0x36254
											}
											// 0x36254
											v10 = v9;
											if (v9 == 13) {
												// 0x3625c
												function_31ee8();
												v10 = g22;
												// branch -> 0x36260
											}
											// 0x36260
											if (v10 == 27) {
												v12 = 27;
												// 0x36268
												if (v12 == 27) {
													// 0x36270
													if (function_35fdc() == 0) {
														// 0x3627c
														track_repeat_walk(0);
														gamemenu_previous(0);
														// branch -> 0x366f8
													}
												} else {
													// 0x36290
													v11 = g23;
													if (*(int32_t *)(v11 - 0x4f54) == 0) {
														// 0x3629c
														if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
															// 0x362ac
															if (v12 == 19) {
																// 0x362b4
																diablo_pause_game();
																// branch -> 0x366f8
															} else {
																// 0x362bc
																v13 = *(int32_t *)(v11 - 0x75d0);
																if (*(int32_t *)v13 != 2) {
																	// 0x362cc
																	if (v12 == 13) {
																		// 0x362d4
																		if (*(char *)g32 == 0) {
																			// 0x362e8
																			if (*(int32_t *)g31 == 0) {
																				// 0x362fc
																				function_31ee8();
																				// branch -> 0x366f8
																			} else {
																				// 0x362f4
																				QuestlogEnter();
																				// branch -> 0x366f8
																			}
																			// Detected a possible infinite recursion (goto support failed); quitting...
																		} else {
																			// 0x362e0
																			function_bd780(v13);
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x36304
																		if (*(int32_t *)(v11 - 0x4f58) != 0) {
																			// 0x36310
																			if (v12 == 114) {
																				// 0x36348
																				// branch -> 0x36354
																			} else {
																				// 0x36318
																				if (v12 > 114) {
																					// 0x3632c
																					if (v12 == 115) {
																						// 0x36350
																						// branch -> 0x36354
																					}
																				} else {
																					// 0x3631c
																					if (v12 == 112) {
																						// 0x36338
																						// branch -> 0x36354
																					} else {
																						// 0x36324
																						if (v12 > 112) {
																							// 0x36340
																							// branch -> 0x36354
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
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														}
													}
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
						// 0x361d8
						if (function_54224(v3) == 0) {
							// 0x361e8
							if (function_322ec(g22) == 0) {
								// 0x361f8
								v4 = g23;
								if (*(int32_t *)*(int32_t *)(v4 - 0x75cc) == 0) {
									// 0x361f8
									v12 = g22;
									// branch -> 0x36268
									// 0x36268
									if (v12 == 27) {
										// 0x36270
										if (function_35fdc() == 0) {
											// 0x3627c
											track_repeat_walk(0);
											gamemenu_previous(0);
											// branch -> 0x366f8
										}
									} else {
										// 0x36290
										v11 = g23;
										if (*(int32_t *)(v11 - 0x4f54) == 0) {
											// 0x3629c
											if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
												// 0x362ac
												if (v12 == 19) {
													// 0x362b4
													diablo_pause_game();
													// branch -> 0x366f8
												} else {
													// 0x362bc
													v13 = *(int32_t *)(v11 - 0x75d0);
													if (*(int32_t *)v13 != 2) {
														// 0x362cc
														if (v12 == 13) {
															// 0x362d4
															if (*(char *)g32 == 0) {
																// 0x362e8
																if (*(int32_t *)g31 == 0) {
																	// 0x362fc
																	function_31ee8();
																	// branch -> 0x366f8
																} else {
																	// 0x362f4
																	QuestlogEnter();
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															} else {
																// 0x362e0
																function_bd780(v13);
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														} else {
															// 0x36304
															if (*(int32_t *)(v11 - 0x4f58) != 0) {
																// 0x36310
																if (v12 == 114) {
																	// 0x36348
																	// branch -> 0x36354
																} else {
																	// 0x36318
																	if (v12 > 114) {
																		// 0x3632c
																		if (v12 == 115) {
																			// 0x36350
																			// branch -> 0x36354
																		}
																	} else {
																		// 0x3631c
																		if (v12 == 112) {
																			// 0x36338
																			// branch -> 0x36354
																		} else {
																			// 0x36324
																			if (v12 > 112) {
																				// 0x36340
																				// branch -> 0x36354
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
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								} else {
									// 0x36208
									if (*(int32_t *)(v4 - 0x4f54) == 0) {
										// 0x36214
										v5 = g22;
										v6 = v5;
										if (v5 == 120) {
											// 0x3621c
											diablo_hotkey_msg(0);
											v6 = g22;
											// branch -> 0x36224
										}
										// 0x36224
										v7 = v6;
										if (v6 == 121) {
											// 0x3622c
											diablo_hotkey_msg(1);
											v7 = g22;
											// branch -> 0x36234
										}
										// 0x36234
										v8 = v7;
										if (v7 == 122) {
											// 0x3623c
											diablo_hotkey_msg(2);
											v8 = g22;
											// branch -> 0x36244
										}
										// 0x36244
										v9 = v8;
										if (v8 == 123) {
											// 0x3624c
											diablo_hotkey_msg(3);
											v9 = g22;
											// branch -> 0x36254
										}
										// 0x36254
										v10 = v9;
										if (v9 == 13) {
											// 0x3625c
											function_31ee8();
											v10 = g22;
											// branch -> 0x36260
										}
										// 0x36260
										if (v10 == 27) {
											v12 = 27;
											// 0x36268
											if (v12 == 27) {
												// 0x36270
												if (function_35fdc() == 0) {
													// 0x3627c
													track_repeat_walk(0);
													gamemenu_previous(0);
													// branch -> 0x366f8
												}
											} else {
												// 0x36290
												v11 = g23;
												if (*(int32_t *)(v11 - 0x4f54) == 0) {
													// 0x3629c
													if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
														// 0x362ac
														if (v12 == 19) {
															// 0x362b4
															diablo_pause_game();
															// branch -> 0x366f8
														} else {
															// 0x362bc
															v13 = *(int32_t *)(v11 - 0x75d0);
															if (*(int32_t *)v13 != 2) {
																// 0x362cc
																if (v12 == 13) {
																	// 0x362d4
																	if (*(char *)g32 == 0) {
																		// 0x362e8
																		if (*(int32_t *)g31 == 0) {
																			// 0x362fc
																			function_31ee8();
																			// branch -> 0x366f8
																		} else {
																			// 0x362f4
																			QuestlogEnter();
																			// branch -> 0x366f8
																		}
																		// Detected a possible infinite recursion (goto support failed); quitting...
																	} else {
																		// 0x362e0
																		function_bd780(v13);
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x36304
																	if (*(int32_t *)(v11 - 0x4f58) != 0) {
																		// 0x36310
																		if (v12 == 114) {
																			// 0x36348
																			// branch -> 0x36354
																		} else {
																			// 0x36318
																			if (v12 > 114) {
																				// 0x3632c
																				if (v12 == 115) {
																					// 0x36350
																					// branch -> 0x36354
																				}
																			} else {
																				// 0x3631c
																				if (v12 == 112) {
																					// 0x36338
																					// branch -> 0x36354
																				} else {
																					// 0x36324
																					if (v12 > 112) {
																						// 0x36340
																						// branch -> 0x36354
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
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													}
												}
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
					// 0x361d8
					if (function_54224(v3) == 0) {
						// 0x361e8
						if (function_322ec(g22) == 0) {
							// 0x361f8
							v4 = g23;
							if (*(int32_t *)*(int32_t *)(v4 - 0x75cc) == 0) {
								// 0x361f8
								v12 = g22;
								// branch -> 0x36268
								// 0x36268
								if (v12 == 27) {
									// 0x36270
									if (function_35fdc() == 0) {
										// 0x3627c
										track_repeat_walk(0);
										gamemenu_previous(0);
										// branch -> 0x366f8
									}
								} else {
									// 0x36290
									v11 = g23;
									if (*(int32_t *)(v11 - 0x4f54) == 0) {
										// 0x3629c
										if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
											// 0x362ac
											if (v12 == 19) {
												// 0x362b4
												diablo_pause_game();
												// branch -> 0x366f8
											} else {
												// 0x362bc
												v13 = *(int32_t *)(v11 - 0x75d0);
												if (*(int32_t *)v13 != 2) {
													// 0x362cc
													if (v12 == 13) {
														// 0x362d4
														if (*(char *)g32 == 0) {
															// 0x362e8
															if (*(int32_t *)g31 == 0) {
																// 0x362fc
																function_31ee8();
																// branch -> 0x366f8
															} else {
																// 0x362f4
																QuestlogEnter();
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														} else {
															// 0x362e0
															function_bd780(v13);
															// branch -> 0x366f8
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x36304
														if (*(int32_t *)(v11 - 0x4f58) != 0) {
															// 0x36310
															if (v12 == 114) {
																// 0x36348
																// branch -> 0x36354
															} else {
																// 0x36318
																if (v12 > 114) {
																	// 0x3632c
																	if (v12 == 115) {
																		// 0x36350
																		// branch -> 0x36354
																	}
																} else {
																	// 0x3631c
																	if (v12 == 112) {
																		// 0x36338
																		// branch -> 0x36354
																	} else {
																		// 0x36324
																		if (v12 > 112) {
																			// 0x36340
																			// branch -> 0x36354
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
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							} else {
								// 0x36208
								if (*(int32_t *)(v4 - 0x4f54) == 0) {
									// 0x36214
									v5 = g22;
									v6 = v5;
									if (v5 == 120) {
										// 0x3621c
										diablo_hotkey_msg(0);
										v6 = g22;
										// branch -> 0x36224
									}
									// 0x36224
									v7 = v6;
									if (v6 == 121) {
										// 0x3622c
										diablo_hotkey_msg(1);
										v7 = g22;
										// branch -> 0x36234
									}
									// 0x36234
									v8 = v7;
									if (v7 == 122) {
										// 0x3623c
										diablo_hotkey_msg(2);
										v8 = g22;
										// branch -> 0x36244
									}
									// 0x36244
									v9 = v8;
									if (v8 == 123) {
										// 0x3624c
										diablo_hotkey_msg(3);
										v9 = g22;
										// branch -> 0x36254
									}
									// 0x36254
									v10 = v9;
									if (v9 == 13) {
										// 0x3625c
										function_31ee8();
										v10 = g22;
										// branch -> 0x36260
									}
									// 0x36260
									if (v10 == 27) {
										v12 = 27;
										// 0x36268
										if (v12 == 27) {
											// 0x36270
											if (function_35fdc() == 0) {
												// 0x3627c
												track_repeat_walk(0);
												gamemenu_previous(0);
												// branch -> 0x366f8
											}
										} else {
											// 0x36290
											v11 = g23;
											if (*(int32_t *)(v11 - 0x4f54) == 0) {
												// 0x3629c
												if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
													// 0x362ac
													if (v12 == 19) {
														// 0x362b4
														diablo_pause_game();
														// branch -> 0x366f8
													} else {
														// 0x362bc
														v13 = *(int32_t *)(v11 - 0x75d0);
														if (*(int32_t *)v13 != 2) {
															// 0x362cc
															if (v12 == 13) {
																// 0x362d4
																if (*(char *)g32 == 0) {
																	// 0x362e8
																	if (*(int32_t *)g31 == 0) {
																		// 0x362fc
																		function_31ee8();
																		// branch -> 0x366f8
																	} else {
																		// 0x362f4
																		QuestlogEnter();
																		// branch -> 0x366f8
																	}
																	// Detected a possible infinite recursion (goto support failed); quitting...
																} else {
																	// 0x362e0
																	function_bd780(v13);
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															} else {
																// 0x36304
																if (*(int32_t *)(v11 - 0x4f58) != 0) {
																	// 0x36310
																	if (v12 == 114) {
																		// 0x36348
																		// branch -> 0x36354
																	} else {
																		// 0x36318
																		if (v12 > 114) {
																			// 0x3632c
																			if (v12 == 115) {
																				// 0x36350
																				// branch -> 0x36354
																			}
																		} else {
																			// 0x3631c
																			if (v12 == 112) {
																				// 0x36338
																				// branch -> 0x36354
																			} else {
																				// 0x36324
																				if (v12 > 112) {
																					// 0x36340
																					// branch -> 0x36354
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
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												}
											}
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
				// 0x361d8
				if (function_54224(v3) == 0) {
					// 0x361e8
					if (function_322ec(g22) == 0) {
						// 0x361f8
						v4 = g23;
						if (*(int32_t *)*(int32_t *)(v4 - 0x75cc) == 0) {
							// 0x361f8
							v12 = g22;
							// branch -> 0x36268
							// 0x36268
							if (v12 == 27) {
								// 0x36270
								if (function_35fdc() == 0) {
									// 0x3627c
									track_repeat_walk(0);
									gamemenu_previous(0);
									// branch -> 0x366f8
								}
							} else {
								// 0x36290
								v11 = g23;
								if (*(int32_t *)(v11 - 0x4f54) == 0) {
									// 0x3629c
									if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
										// 0x362ac
										if (v12 == 19) {
											// 0x362b4
											diablo_pause_game();
											// branch -> 0x366f8
										} else {
											// 0x362bc
											v13 = *(int32_t *)(v11 - 0x75d0);
											if (*(int32_t *)v13 != 2) {
												// 0x362cc
												if (v12 == 13) {
													// 0x362d4
													if (*(char *)g32 == 0) {
														// 0x362e8
														if (*(int32_t *)g31 == 0) {
															// 0x362fc
															function_31ee8();
															// branch -> 0x366f8
														} else {
															// 0x362f4
															QuestlogEnter();
															// branch -> 0x366f8
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x362e0
														function_bd780(v13);
														// branch -> 0x366f8
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x36304
													if (*(int32_t *)(v11 - 0x4f58) != 0) {
														// 0x36310
														if (v12 == 114) {
															// 0x36348
															// branch -> 0x36354
														} else {
															// 0x36318
															if (v12 > 114) {
																// 0x3632c
																if (v12 == 115) {
																	// 0x36350
																	// branch -> 0x36354
																}
															} else {
																// 0x3631c
																if (v12 == 112) {
																	// 0x36338
																	// branch -> 0x36354
																} else {
																	// 0x36324
																	if (v12 > 112) {
																		// 0x36340
																		// branch -> 0x36354
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
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						} else {
							// 0x36208
							if (*(int32_t *)(v4 - 0x4f54) == 0) {
								// 0x36214
								v5 = g22;
								v6 = v5;
								if (v5 == 120) {
									// 0x3621c
									diablo_hotkey_msg(0);
									v6 = g22;
									// branch -> 0x36224
								}
								// 0x36224
								v7 = v6;
								if (v6 == 121) {
									// 0x3622c
									diablo_hotkey_msg(1);
									v7 = g22;
									// branch -> 0x36234
								}
								// 0x36234
								v8 = v7;
								if (v7 == 122) {
									// 0x3623c
									diablo_hotkey_msg(2);
									v8 = g22;
									// branch -> 0x36244
								}
								// 0x36244
								v9 = v8;
								if (v8 == 123) {
									// 0x3624c
									diablo_hotkey_msg(3);
									v9 = g22;
									// branch -> 0x36254
								}
								// 0x36254
								v10 = v9;
								if (v9 == 13) {
									// 0x3625c
									function_31ee8();
									v10 = g22;
									// branch -> 0x36260
								}
								// 0x36260
								if (v10 == 27) {
									v12 = 27;
									// 0x36268
									if (v12 == 27) {
										// 0x36270
										if (function_35fdc() == 0) {
											// 0x3627c
											track_repeat_walk(0);
											gamemenu_previous(0);
											// branch -> 0x366f8
										}
									} else {
										// 0x36290
										v11 = g23;
										if (*(int32_t *)(v11 - 0x4f54) == 0) {
											// 0x3629c
											if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
												// 0x362ac
												if (v12 == 19) {
													// 0x362b4
													diablo_pause_game();
													// branch -> 0x366f8
												} else {
													// 0x362bc
													v13 = *(int32_t *)(v11 - 0x75d0);
													if (*(int32_t *)v13 != 2) {
														// 0x362cc
														if (v12 == 13) {
															// 0x362d4
															if (*(char *)g32 == 0) {
																// 0x362e8
																if (*(int32_t *)g31 == 0) {
																	// 0x362fc
																	function_31ee8();
																	// branch -> 0x366f8
																} else {
																	// 0x362f4
																	QuestlogEnter();
																	// branch -> 0x366f8
																}
																// Detected a possible infinite recursion (goto support failed); quitting...
															} else {
																// 0x362e0
																function_bd780(v13);
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														} else {
															// 0x36304
															if (*(int32_t *)(v11 - 0x4f58) != 0) {
																// 0x36310
																if (v12 == 114) {
																	// 0x36348
																	// branch -> 0x36354
																} else {
																	// 0x36318
																	if (v12 > 114) {
																		// 0x3632c
																		if (v12 == 115) {
																			// 0x36350
																			// branch -> 0x36354
																		}
																	} else {
																		// 0x3631c
																		if (v12 == 112) {
																			// 0x36338
																			// branch -> 0x36354
																		} else {
																			// 0x36324
																			if (v12 > 112) {
																				// 0x36340
																				// branch -> 0x36354
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
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											}
										}
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
			// 0x361d8
			if (function_54224(v3) == 0) {
				// 0x361e8
				if (function_322ec(g22) == 0) {
					// 0x361f8
					v4 = g23;
					if (*(int32_t *)*(int32_t *)(v4 - 0x75cc) == 0) {
						// 0x361f8
						v12 = g22;
						// branch -> 0x36268
						// 0x36268
						if (v12 == 27) {
							// 0x36270
							if (function_35fdc() == 0) {
								// 0x3627c
								track_repeat_walk(0);
								gamemenu_previous(0);
								// branch -> 0x366f8
							}
						} else {
							// 0x36290
							v11 = g23;
							if (*(int32_t *)(v11 - 0x4f54) == 0) {
								// 0x3629c
								if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
									// 0x362ac
									if (v12 == 19) {
										// 0x362b4
										diablo_pause_game();
										// branch -> 0x366f8
									} else {
										// 0x362bc
										v13 = *(int32_t *)(v11 - 0x75d0);
										if (*(int32_t *)v13 != 2) {
											// 0x362cc
											if (v12 == 13) {
												// 0x362d4
												if (*(char *)g32 == 0) {
													// 0x362e8
													if (*(int32_t *)g31 == 0) {
														// 0x362fc
														function_31ee8();
														// branch -> 0x366f8
													} else {
														// 0x362f4
														QuestlogEnter();
														// branch -> 0x366f8
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x362e0
													function_bd780(v13);
													// branch -> 0x366f8
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x36304
												if (*(int32_t *)(v11 - 0x4f58) != 0) {
													// 0x36310
													if (v12 == 114) {
														// 0x36348
														// branch -> 0x36354
													} else {
														// 0x36318
														if (v12 > 114) {
															// 0x3632c
															if (v12 == 115) {
																// 0x36350
																// branch -> 0x36354
															}
														} else {
															// 0x3631c
															if (v12 == 112) {
																// 0x36338
																// branch -> 0x36354
															} else {
																// 0x36324
																if (v12 > 112) {
																	// 0x36340
																	// branch -> 0x36354
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
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					} else {
						// 0x36208
						if (*(int32_t *)(v4 - 0x4f54) == 0) {
							// 0x36214
							v5 = g22;
							v6 = v5;
							if (v5 == 120) {
								// 0x3621c
								diablo_hotkey_msg(0);
								v6 = g22;
								// branch -> 0x36224
							}
							// 0x36224
							v7 = v6;
							if (v6 == 121) {
								// 0x3622c
								diablo_hotkey_msg(1);
								v7 = g22;
								// branch -> 0x36234
							}
							// 0x36234
							v8 = v7;
							if (v7 == 122) {
								// 0x3623c
								diablo_hotkey_msg(2);
								v8 = g22;
								// branch -> 0x36244
							}
							// 0x36244
							v9 = v8;
							if (v8 == 123) {
								// 0x3624c
								diablo_hotkey_msg(3);
								v9 = g22;
								// branch -> 0x36254
							}
							// 0x36254
							v10 = v9;
							if (v9 == 13) {
								// 0x3625c
								function_31ee8();
								v10 = g22;
								// branch -> 0x36260
							}
							// 0x36260
							if (v10 == 27) {
								v12 = 27;
								// 0x36268
								if (v12 == 27) {
									// 0x36270
									if (function_35fdc() == 0) {
										// 0x3627c
										track_repeat_walk(0);
										gamemenu_previous(0);
										// branch -> 0x366f8
									}
								} else {
									// 0x36290
									v11 = g23;
									if (*(int32_t *)(v11 - 0x4f54) == 0) {
										// 0x3629c
										if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
											// 0x362ac
											if (v12 == 19) {
												// 0x362b4
												diablo_pause_game();
												// branch -> 0x366f8
											} else {
												// 0x362bc
												v13 = *(int32_t *)(v11 - 0x75d0);
												if (*(int32_t *)v13 != 2) {
													// 0x362cc
													if (v12 == 13) {
														// 0x362d4
														if (*(char *)g32 == 0) {
															// 0x362e8
															if (*(int32_t *)g31 == 0) {
																// 0x362fc
																function_31ee8();
																// branch -> 0x366f8
															} else {
																// 0x362f4
																QuestlogEnter();
																// branch -> 0x366f8
															}
															// Detected a possible infinite recursion (goto support failed); quitting...
														} else {
															// 0x362e0
															function_bd780(v13);
															// branch -> 0x366f8
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x36304
														if (*(int32_t *)(v11 - 0x4f58) != 0) {
															// 0x36310
															if (v12 == 114) {
																// 0x36348
																// branch -> 0x36354
															} else {
																// 0x36318
																if (v12 > 114) {
																	// 0x3632c
																	if (v12 == 115) {
																		// 0x36350
																		// branch -> 0x36354
																	}
																} else {
																	// 0x3631c
																	if (v12 == 112) {
																		// 0x36338
																		// branch -> 0x36354
																	} else {
																		// 0x36324
																		if (v12 > 112) {
																			// 0x36340
																			// branch -> 0x36354
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
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										}
									}
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
		// 0x361d8
		if (function_54224(v3) == 0) {
			// 0x361e8
			if (function_322ec(g22) == 0) {
				// 0x361f8
				v4 = g23;
				if (*(int32_t *)*(int32_t *)(v4 - 0x75cc) == 0) {
					// 0x361f8
					v12 = g22;
					// branch -> 0x36268
					// 0x36268
					if (v12 == 27) {
						// 0x36270
						if (function_35fdc() == 0) {
							// 0x3627c
							track_repeat_walk(0);
							gamemenu_previous(0);
							// branch -> 0x366f8
						}
					} else {
						// 0x36290
						v11 = g23;
						if (*(int32_t *)(v11 - 0x4f54) == 0) {
							// 0x3629c
							if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
								// 0x362ac
								if (v12 == 19) {
									// 0x362b4
									diablo_pause_game();
									// branch -> 0x366f8
								} else {
									// 0x362bc
									v13 = *(int32_t *)(v11 - 0x75d0);
									if (*(int32_t *)v13 != 2) {
										// 0x362cc
										if (v12 == 13) {
											// 0x362d4
											if (*(char *)g32 == 0) {
												// 0x362e8
												if (*(int32_t *)g31 == 0) {
													// 0x362fc
													function_31ee8();
													// branch -> 0x366f8
												} else {
													// 0x362f4
													QuestlogEnter();
													// branch -> 0x366f8
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x362e0
												function_bd780(v13);
												// branch -> 0x366f8
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x36304
											if (*(int32_t *)(v11 - 0x4f58) != 0) {
												// 0x36310
												if (v12 == 114) {
													// 0x36348
													// branch -> 0x36354
												} else {
													// 0x36318
													if (v12 > 114) {
														// 0x3632c
														if (v12 == 115) {
															// 0x36350
															// branch -> 0x36354
														}
													} else {
														// 0x3631c
														if (v12 == 112) {
															// 0x36338
															// branch -> 0x36354
														} else {
															// 0x36324
															if (v12 > 112) {
																// 0x36340
																// branch -> 0x36354
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
								}
								// Detected a possible infinite recursion (goto support failed); quitting...
							}
						}
					}
					// Detected a possible infinite recursion (goto support failed); quitting...
				} else {
					// 0x36208
					if (*(int32_t *)(v4 - 0x4f54) == 0) {
						// 0x36214
						v5 = g22;
						v6 = v5;
						if (v5 == 120) {
							// 0x3621c
							diablo_hotkey_msg(0);
							v6 = g22;
							// branch -> 0x36224
						}
						// 0x36224
						v7 = v6;
						if (v6 == 121) {
							// 0x3622c
							diablo_hotkey_msg(1);
							v7 = g22;
							// branch -> 0x36234
						}
						// 0x36234
						v8 = v7;
						if (v7 == 122) {
							// 0x3623c
							diablo_hotkey_msg(2);
							v8 = g22;
							// branch -> 0x36244
						}
						// 0x36244
						v9 = v8;
						if (v8 == 123) {
							// 0x3624c
							diablo_hotkey_msg(3);
							v9 = g22;
							// branch -> 0x36254
						}
						// 0x36254
						v10 = v9;
						if (v9 == 13) {
							// 0x3625c
							function_31ee8();
							v10 = g22;
							// branch -> 0x36260
						}
						// 0x36260
						if (v10 == 27) {
							v12 = 27;
							// 0x36268
							if (v12 == 27) {
								// 0x36270
								if (function_35fdc() == 0) {
									// 0x3627c
									track_repeat_walk(0);
									gamemenu_previous(0);
									// branch -> 0x366f8
								}
							} else {
								// 0x36290
								v11 = g23;
								if (*(int32_t *)(v11 - 0x4f54) == 0) {
									// 0x3629c
									if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
										// 0x362ac
										if (v12 == 19) {
											// 0x362b4
											diablo_pause_game();
											// branch -> 0x366f8
										} else {
											// 0x362bc
											v13 = *(int32_t *)(v11 - 0x75d0);
											if (*(int32_t *)v13 != 2) {
												// 0x362cc
												if (v12 == 13) {
													// 0x362d4
													if (*(char *)g32 == 0) {
														// 0x362e8
														if (*(int32_t *)g31 == 0) {
															// 0x362fc
															function_31ee8();
															// branch -> 0x366f8
														} else {
															// 0x362f4
															QuestlogEnter();
															// branch -> 0x366f8
														}
														// Detected a possible infinite recursion (goto support failed); quitting...
													} else {
														// 0x362e0
														function_bd780(v13);
														// branch -> 0x366f8
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x36304
													if (*(int32_t *)(v11 - 0x4f58) != 0) {
														// 0x36310
														if (v12 == 114) {
															// 0x36348
															// branch -> 0x36354
														} else {
															// 0x36318
															if (v12 > 114) {
																// 0x3632c
																if (v12 == 115) {
																	// 0x36350
																	// branch -> 0x36354
																}
															} else {
																// 0x3631c
																if (v12 == 112) {
																	// 0x36338
																	// branch -> 0x36354
																} else {
																	// 0x36324
																	if (v12 > 112) {
																		// 0x36340
																		// branch -> 0x36354
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
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									}
								}
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			}
		}
		// Detected a possible infinite recursion (goto support failed); quitting...
	}
	// 0x361d8
	if (function_54224(v3) == 0) {
		// 0x361e8
		if (function_322ec(g22) == 0) {
			// 0x361f8
			v4 = g23;
			if (*(int32_t *)*(int32_t *)(v4 - 0x75cc) == 0) {
				// 0x361f8
				v12 = g22;
				// branch -> 0x36268
				// 0x36268
				if (v12 == 27) {
					// 0x36270
					if (function_35fdc() == 0) {
						// 0x3627c
						track_repeat_walk(0);
						gamemenu_previous(0);
						// branch -> 0x366f8
					}
				} else {
					// 0x36290
					v11 = g23;
					if (*(int32_t *)(v11 - 0x4f54) == 0) {
						// 0x3629c
						if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
							// 0x362ac
							if (v12 == 19) {
								// 0x362b4
								diablo_pause_game();
								// branch -> 0x366f8
							} else {
								// 0x362bc
								v13 = *(int32_t *)(v11 - 0x75d0);
								if (*(int32_t *)v13 != 2) {
									// 0x362cc
									if (v12 == 13) {
										// 0x362d4
										if (*(char *)g32 == 0) {
											// 0x362e8
											if (*(int32_t *)g31 == 0) {
												// 0x362fc
												function_31ee8();
												// branch -> 0x366f8
											} else {
												// 0x362f4
												QuestlogEnter();
												// branch -> 0x366f8
											}
											// Detected a possible infinite recursion (goto support failed); quitting...
										} else {
											// 0x362e0
											function_bd780(v13);
											// branch -> 0x366f8
										}
										// Detected a possible infinite recursion (goto support failed); quitting...
									} else {
										// 0x36304
										if (*(int32_t *)(v11 - 0x4f58) != 0) {
											// 0x36310
											if (v12 == 114) {
												// 0x36348
												// branch -> 0x36354
											} else {
												// 0x36318
												if (v12 > 114) {
													// 0x3632c
													if (v12 == 115) {
														// 0x36350
														// branch -> 0x36354
													}
												} else {
													// 0x3631c
													if (v12 == 112) {
														// 0x36338
														// branch -> 0x36354
													} else {
														// 0x36324
														if (v12 > 112) {
															// 0x36340
															// branch -> 0x36354
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
							}
							// Detected a possible infinite recursion (goto support failed); quitting...
						}
					}
				}
				// Detected a possible infinite recursion (goto support failed); quitting...
			} else {
				// 0x36208
				if (*(int32_t *)(v4 - 0x4f54) == 0) {
					// 0x36214
					v5 = g22;
					v6 = v5;
					if (v5 == 120) {
						// 0x3621c
						diablo_hotkey_msg(0);
						v6 = g22;
						// branch -> 0x36224
					}
					// 0x36224
					v7 = v6;
					if (v6 == 121) {
						// 0x3622c
						diablo_hotkey_msg(1);
						v7 = g22;
						// branch -> 0x36234
					}
					// 0x36234
					v8 = v7;
					if (v7 == 122) {
						// 0x3623c
						diablo_hotkey_msg(2);
						v8 = g22;
						// branch -> 0x36244
					}
					// 0x36244
					v9 = v8;
					if (v8 == 123) {
						// 0x3624c
						diablo_hotkey_msg(3);
						v9 = g22;
						// branch -> 0x36254
					}
					// 0x36254
					v10 = v9;
					if (v9 == 13) {
						// 0x3625c
						function_31ee8();
						v10 = g22;
						// branch -> 0x36260
					}
					// 0x36260
					if (v10 == 27) {
						v12 = 27;
						// 0x36268
						if (v12 == 27) {
							// 0x36270
							if (function_35fdc() == 0) {
								// 0x3627c
								track_repeat_walk(0);
								gamemenu_previous(0);
								// branch -> 0x366f8
							}
						} else {
							// 0x36290
							v11 = g23;
							if (*(int32_t *)(v11 - 0x4f54) == 0) {
								// 0x3629c
								if (*(int32_t *)*(int32_t *)(v11 - 0x7704) == 0) {
									// 0x362ac
									if (v12 == 19) {
										// 0x362b4
										diablo_pause_game();
										// branch -> 0x366f8
									} else {
										// 0x362bc
										v13 = *(int32_t *)(v11 - 0x75d0);
										if (*(int32_t *)v13 != 2) {
											// 0x362cc
											if (v12 == 13) {
												// 0x362d4
												if (*(char *)g32 == 0) {
													// 0x362e8
													if (*(int32_t *)g31 == 0) {
														// 0x362fc
														function_31ee8();
														// branch -> 0x366f8
													} else {
														// 0x362f4
														QuestlogEnter();
														// branch -> 0x366f8
													}
													// Detected a possible infinite recursion (goto support failed); quitting...
												} else {
													// 0x362e0
													function_bd780(v13);
													// branch -> 0x366f8
												}
												// Detected a possible infinite recursion (goto support failed); quitting...
											} else {
												// 0x36304
												if (*(int32_t *)(v11 - 0x4f58) != 0) {
													// 0x36310
													if (v12 == 114) {
														// 0x36348
														// branch -> 0x36354
													} else {
														// 0x36318
														if (v12 > 114) {
															// 0x3632c
															if (v12 == 115) {
																// 0x36350
																// branch -> 0x36354
															}
														} else {
															// 0x3631c
															if (v12 == 112) {
																// 0x36338
																// branch -> 0x36354
															} else {
																// 0x36324
																if (v12 > 112) {
																	// 0x36340
																	// branch -> 0x36354
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
									}
									// Detected a possible infinite recursion (goto support failed); quitting...
								}
							}
						}
						// Detected a possible infinite recursion (goto support failed); quitting...
					}
				}
			}
			// Detected a possible infinite recursion (goto support failed); quitting...
		}
	}
	// Detected a possible infinite recursion (goto support failed); quitting...
}

// Address range: 0x3670c - 0x36b94
int32_t PressChar(int32_t a1)
{
	// 0x3670c
	g24 = *(int32_t *)(g23 - 0x7708);
	g22 = a1;
	g25 = *(int32_t *)(g23 - 0x7778);
	g33 = *(int32_t *)(g23 - 0x77bc);
	g35 = *(int32_t *)(g23 - 0x77ac);
	int32_t v1 = gmenu_exception(); // 0x36750
	int32_t result2 = v1;          // 0x36b90
	if (v1 == 0) {
		int32_t v2 = function_32070(g22); // 0x36760
		if (v2 == 0) {
			// 0x3676c
			if (*(int32_t *)(g23 - 0x4f54) == 0) {
				int32_t v3 = *(int32_t *)(g23 - 0x75cc); // 0x36778
				if (*(int32_t *)v3 == 0) {
					int32_t v4 = g22;                // 0x36788
					int32_t v5 = 0x1000000 * v4;     // 0x36788
					int32_t result = v5 / 0x1000000; // 0x36788
					if (v5 != 0x70000000) {
						// 0x36794
						if (v5 != 0x50000000) {
							// 0x367a4
							if (*(int32_t *)*(int32_t *)(g23 - 0x75d0) == 2) {
								// 0x36b80
								return result;
							}
							int32_t v6 = *(int32_t *)(g23 - 0x7678); // 0x367b4
							if (*(int32_t *)v6 != 0) {
								// 0x367c4
								// branch -> 0x36b80
								// 0x36b80
								return doom_close(result);
							}
							// 0x367cc
							if (*(int32_t *)*(int32_t *)(g23 - 0x7704) == 0) {
								uint32_t v7 = v4 - 33; // 0x367e0
								if (v7 <= 89) {
									// 0x367ec
									return *(int32_t *)(4 * v7 + g23 - 0x22f8);
								}
								result2 = result;
							} else {
								// 0x367d8
								result2 = function_31654((char)result, v6);
								// branch -> 0x36b80
							}
							// 0x36b80
							return result2;
						}
					}
					// 0x3679c
					result2 = diablo_pause_game();
					// branch -> 0x36b80
				} else {
					result2 = v3;
				}
			} else {
				result2 = 0;
			}
		} else {
			result2 = v2;
		}
	}
	// 0x36b80
	return result2;
}

// Address range: 0x36b94 - 0x36cf4
int32_t DisableInputWndProc(int32_t a1, int32_t a2, int32_t a3)
{
	// 0x36b94
	g39 = a3;
	g37 = a2;
	g34 = a1;
	int32_t v1 = g37;                        // 0x36b98
	int32_t v2 = *(int32_t *)(g23 - 0x7560); // 0x36ba0
	char *v3 = (char *)v2;                   // 0x36ba0
	if (v1 == 513) {
		// 0x36c18
		if (*v3 == 0) {
			// 0x36c2c
			*v3 = 1;
			function_eba28(v2);
			// branch -> 0x36ce4
		}
		// 0x36ce4
		return 0;
	}
	// 0x36bac
	int32_t result; // 0x36cf0
	if (v1 <= 513) {
		// 0x36bb0
		if (v1 != 260) {
			// 0x36bb8
			if (v1 <= 260) {
				// 0x36bbc
				if (v1 <= 258) {
					// 0x36bc4
					if (v1 > 255) {
						// 0x36c10
						// branch -> 0x36ce4
						// 0x36ce4
						return 0;
					}
				}
				// 0x36ce0
				result = MainWndProc();
				// branch -> 0x36ce4
				// 0x36ce4
				return result;
			}
			// 0x36bd0
			if (v1 == 274) {
				// 0x36c10
				result = 0;
				// branch -> 0x36ce4
			} else {
				// 0x36bd8
				if (v1 >= 274) {
					// 0x36bdc
					if (v1 > 511) {
						// 0x36c10
						// branch -> 0x36ce4
						// 0x36ce4
						return 0;
					}
				}
				// 0x36ce0
				result = MainWndProc();
				// branch -> 0x36ce4
			}
			// 0x36ce4
			return result;
		}
		// 0x36c10
		// branch -> 0x36ce4
		// 0x36ce4
		return 0;
	}
	// 0x36be8
	if (v1 == 517) {
		// 0x36c9c
		if (*v3 == 2) {
			// 0x36cb0
			*v3 = 0;
			ReleaseCapture();
			// branch -> 0x36ce4
		}
		// 0x36ce4
		return 0;
	}
	// 0x36bf0
	if (v1 > 517) {
		// 0x36c04
		if (v1 == 533) {
			// 0x36cc8
			if (g34 != g39) {
				// 0x36cd0
				*v3 = 0;
				// branch -> 0x36cd8
			}
			// 0x36cd8
			// branch -> 0x36ce4
			// 0x36ce4
			return 0;
		}
	} else {
		// 0x36bf4
		if (v1 != 515) {
			char v4 = *v3; // 0x36c70
			if (v1 > 515) {
				// 0x36c70
				if (v4 == 0) {
					// 0x36c84
					*v3 = 2;
					function_eba28(v2);
					// branch -> 0x36ce4
				}
				// 0x36ce4
				return 0;
			}
			// 0x36c44
			if (v4 == 1) {
				// 0x36c58
				*v3 = 0;
				ReleaseCapture();
				// branch -> 0x36ce4
			}
			// 0x36ce4
			return 0;
		}
	}
	// 0x36ce0
	result = MainWndProc();
	// branch -> 0x36ce4
	// 0x36ce4
	return result;
}

// Address range: 0x36cf4 - 0x37128
int32_t GM_Game(int32_t a1, int32_t a2, char a3, int32_t a4)
{
	g30 = a2;
	int32_t v1 = *(int32_t *)(g23 - 0x76ac); // 0x36d04
	int32_t v2 = *(int32_t *)(g23 - 0x76a8); // 0x36d08
	g35 = a1;
	g33 = *(int32_t *)(g23 - 0x75a4);
	int32_t v3 = a3;                         // 0x36d14
	int32_t v4 = *(int32_t *)(g23 - 0x7560); // 0x36d18
	g36 = v4;
	g32 = a4;
	if (a2 == 517) {
		int32_t v5 = 0x10000 * a4 / 0x10000; // 0x36ff8
		g34 = v5;
		*(int32_t *)v2 = v5;
		*(int32_t *)v1 = 0x10000 * a4 / 0x10000 / 0x10000;
		char *v6 = (char *)g36; // 0x3700c
		if (*v6 == 2) {
			// 0x37020
			*v6 = 0;
			ReleaseCapture();
			// branch -> 0x37114
		}
		// 0x37114
		return 0;
	}
	// 0x36d2c
	int32_t result; // 0x37110
	if (a2 <= 517) {
		// 0x36d30
		if (a2 == 274) {
			// 0x370e0
			// branch -> 0x37100
			// 0x37100
			g34 = g35;
			g37 = g30;
			g38 = v3;
			g39 = g32;
			result = MainWndProc();
			// branch -> 0x37114
			// 0x37114
			return result;
		}
		// 0x36d38
		if (a2 <= 274) {
			// 0x36d3c
			if (a2 == 258) {
				char v7 = v3;     // bp-40
				int32_t v8 = &v7; // 0x36ea4
				g34 = v8;
				function_eae40(v8, v8, 2);
				__asm_rlwinm(v3, 0, 0, 23);
				PressChar(__asm_rlwimi(0x1000000 * (int32_t)v7 / 0x1000000, 0, 24, 31));
				// branch -> 0x37114
				// 0x37114
				return 0;
			}
			// 0x36d44
			if (a2 > 258) {
				// 0x36d58
				if (a2 == 260) {
					// 0x36e64
					if (PressSysKey(v3, v1, v2) != 0) {
						// 0x36e74
						// branch -> 0x37114
						// 0x37114
						return 0;
					}
				}
				// 0x37100
				g34 = g35;
				g37 = g30;
				g38 = v3;
				g39 = g32;
				result = MainWndProc();
				// branch -> 0x37114
				// 0x37114
				return result;
			}
			// 0x36d48
			if (a2 == 256) {
				// 0x36e8c
				PressKey(v3, v1, v2);
				// branch -> 0x37114
				// 0x37114
				return 0;
			}
			// 0x36d50
			int32_t result2; // 0x37124
			if (a2 > 256) {
				// 0x36e7c
				ReleaseKey(v3, v1, v2);
				result2 = 0;
				// branch -> 0x37114
			} else {
				// 0x37100
				g34 = g35;
				g37 = g30;
				g38 = v3;
				g39 = g32;
				result2 = MainWndProc();
				// branch -> 0x37114
			}
			// 0x37114
			return result2;
		}
		// 0x36d64
		if (a2 == 514) {
			int32_t v9 = 0x10000 * a4 / 0x10000; // 0x36f5c
			*(int32_t *)v2 = v9;
			*(int32_t *)v1 = 0x10000 * a4 / 0x10000 / 0x10000;
			char *v10 = (char *)g36; // 0x36f70
			if (*v10 == 1) {
				// 0x36f84
				*v10 = 0;
				LeftMouseUp(v9, v1, v2);
				g34 = track_repeat_walk(0);
				ReleaseCapture();
				// branch -> 0x37114
			}
			// 0x37114
			return 0;
		}
		// 0x36d6c
		if (a2 > 514) {
			// 0x36d80
			if (a2 == 515) {
				// 0x37100
				g34 = g35;
				g37 = g30;
				g38 = v3;
				g39 = g32;
				result = MainWndProc();
				// branch -> 0x37114
				// 0x37114
				return result;
			}
			// 0x36fa8
			*(int32_t *)v2 = 0x10000 * a4 / 0x10000;
			*(int32_t *)v1 = 0x10000 * a4 / 0x10000 / 0x10000;
			char *v11 = (char *)g36; // 0x36fc0
			if (*v11 == 0) {
				// 0x36fd4
				*v11 = 2;
				int32_t v12 = g35; // 0x36fdc
				g34 = v12;
				RightMouseDown(function_eba28(v12));
				// branch -> 0x37114
			}
			// 0x37114
			return 0;
		}
		// 0x36d70
		if (a2 == 512) {
			int32_t v13 = 0x10000 * a4 / 0x10000; // 0x36ee4
			*(int32_t *)v2 = v13;
			*(int32_t *)v1 = 0x10000 * a4 / 0x10000 / 0x10000;
			j_gmenu_on_mouse_move(v13, v1, v2);
			// branch -> 0x37114
			// 0x37114
			return 0;
		}
		// 0x36d78
		if (a2 <= 512) {
			// 0x37100
			g34 = g35;
			g37 = g30;
			g38 = v3;
			g39 = g32;
			result = MainWndProc();
			// branch -> 0x37114
			// 0x37114
			return result;
		}
		// 0x36f04
		*(int32_t *)v2 = 0x10000 * a4 / 0x10000;
		*(int32_t *)v1 = 0x10000 * a4 / 0x10000 / 0x10000;
		char *v14 = (char *)g36; // 0x36f1c
		if (*v14 == 0) {
			// 0x36f30
			*v14 = 1;
			int32_t v15 = g35; // 0x36f38
			g34 = v15;
			function_eba28(v15);
			track_repeat_walk(LeftMouseDown(v3));
			// branch -> 0x37114
		}
		// 0x37114
		return 0;
	}
	// 0x36d8c
	if (a2 != 932) {
		// 0x36d94
		if (a2 <= 932) {
			// 0x36d98
			if (a2 == 929) {
				// 0x36de8
				if (gmenu_exception() != 0) {
					// 0x36df4
					gamemenu_off();
					// branch -> 0x36df8
				}
				// 0x36df8
				gamemenu_previous(4);
				// branch -> 0x37100
				// 0x37100
				g34 = g35;
				g37 = g30;
				g38 = v3;
				g39 = g32;
				result = MainWndProc();
				// branch -> 0x37114
				// 0x37114
				return result;
			}
			// 0x36da0
			if (a2 <= 929) {
				// 0x36da4
				if (a2 == 533) {
					// 0x37038
					if (a1 != a4) {
						// 0x37040
						*(char *)v4 = 0;
						track_repeat_walk(0);
						// branch -> 0x37100
					}
				}
				// 0x37100
				g34 = g35;
				g37 = g30;
				g38 = v3;
				g39 = g32;
				result = MainWndProc();
				// branch -> 0x37114
				// 0x37114
				return result;
			}
			// 0x36db0
			if (a2 == 930) {
				// 0x36e04
				if (function_35ce4() == 0) {
					// 0x36e10
					track_repeat_walk(0);
					gamemenu_previous(3);
					// branch -> 0x37100
				}
			} else {
				// 0x36e24
				if (gmenu_exception() != 0) {
					// 0x36e30
					gamemenu_off();
					// branch -> 0x36e34
				}
				// 0x36e34
				gamemenu_previous(1);
				// branch -> 0x37100
			}
			// 0x37100
			g34 = g35;
			g37 = g30;
			g38 = v3;
			g39 = g32;
			result = MainWndProc();
			// branch -> 0x37114
			// 0x37114
			return result;
		}
		// 0x36dbc
		if (a2 == 935) {
			// 0x36e5c
			diablo_pause_game();
			// branch -> 0x37100
			// 0x37100
			g34 = g35;
			g37 = g30;
			g38 = v3;
			g39 = g32;
			result = MainWndProc();
			// branch -> 0x37114
			// 0x37114
			return result;
		}
		// 0x36dc4
		if (a2 > 935) {
			// 0x36dd4
			if (a2 <= 1033) {
				// 0x36ddc
				if (a2 > 1025) {
					int32_t v16 = *(int32_t *)(g23 - 0x77f0); // 0x37054
					if ((*(char *)v16 || 1) != 1) {
						// 0x37064
						pfile_write_hero(v16);
						// branch -> 0x37068
					}
					// 0x37068
					nthread_ignore_mutex(1);
					PaletteFadeOut(8);
					FreeMonsterSnd();
					music_stop();
					g34 = track_repeat_walk(0);
					*(char *)g36 = 0;
					ReleaseCapture();
					ShowProgress(g30);
					int32_t v17 = *(int32_t *)(g23 - 0x76bc); // 0x370a0
					*(int32_t *)v17 = 255;
					DrawAndBlit(v17);
					if (*(int32_t *)g33 != 0) {
						// 0x370bc
						PaletteFadeIn(8);
						// branch -> 0x370c4
					}
					// 0x370c4
					nthread_ignore_mutex(0);
					*(int32_t *)*(int32_t *)(g23 - 0x75b0) = 1;
					// branch -> 0x37114
					// 0x37114
					return 0;
				}
			}
		} else {
			// 0x36dc8
			if (a2 <= 933) {
				// 0x36e40
				if (gmenu_exception() != 0) {
					// 0x36e4c
					gamemenu_off();
					// branch -> 0x36e50
				}
				// 0x36e50
				gamemenu_previous(5);
				// branch -> 0x37100
			}
		}
		// 0x37100
		g34 = g35;
		g37 = g30;
		g38 = v3;
		g39 = g32;
		result = MainWndProc();
		// branch -> 0x37114
		// 0x37114
		return result;
	}
	// 0x37100
	g34 = g35;
	g37 = g30;
	g38 = v3;
	g39 = g32;
	result = MainWndProc();
	// branch -> 0x37114
	// 0x37114
	return result;
}

// Address range: 0x37128 - 0x3734c
int32_t LoadLvlGFX(int32_t a1)
{
	int32_t v1 = g10;                        // 0x3712c
	int32_t v2 = *(int32_t *)(g23 - 0x7568); // 0x37130
	g36 = v2;
	g29 = *(int32_t *)(g23 - 0x6428);
	g30 = *(int32_t *)(g23 - 0x6418);
	g31 = *(int32_t *)(g23 - 0x75e8);
	g32 = *(int32_t *)(g23 - 0x7574);
	g33 = *(int32_t *)(g23 - 0x7570);
	g35 = *(int32_t *)(g23 - 0x756c);
	int32_t v3 = *(int32_t *)v2; // 0x37154
	int32_t v4 = g23;            // 0x37240
	if (v3 != 0) {
		// 0x37160
		function_c9acc(v3);
		MemFreeDbg((int32_t *)g36);
		v4 = g23;
		// branch -> 0x3716c
	}
	unsigned char v5 = *(char *)*(int32_t *)(v4 - 0x7794); // 0x37170
	if (v5 == 2) {
		int32_t v6 = LoadFileInMem(*(int32_t *)(v4 - 0x641c), NULL); // 0x37248
		*(int32_t *)g36 = v6;
		g34 = *(int32_t *)g36;
		int32_t v7 = function_c9948(); // 0x37254
		*(int32_t *)g31 = v7;
		int32_t v8 = LoadFileInMem(*(int32_t *)(g23 - 0x6420), NULL); // 0x37264
		*(int32_t *)g35 = v8;
		int32_t v9 = LoadFileInMem(*(int32_t *)(g23 - 0x6424), NULL); // 0x37274
		*(int32_t *)g33 = v9;
		int32_t result = LoadFileInMem(g29, NULL); // 0x37284
		*(int32_t *)g32 = result;
		// branch -> 0x37338
		// 0x37338
		g10 = v1;
		return result;
	}
	// 0x3717c
	int32_t result2; // r3
	if (v5 <= 2) {
		// 0x37180
		if (v5 == 0) {
			int32_t v10 = LoadFileInMem(*(int32_t *)(v4 - 0x63fc), NULL); // 0x371a8
			*(int32_t *)g36 = v10;
			g34 = *(int32_t *)g36;
			int32_t v11 = function_c9948(); // 0x371b4
			*(int32_t *)g31 = v11;
			int32_t v12 = LoadFileInMem(*(int32_t *)(g23 - 0x6400), NULL); // 0x371c4
			*(int32_t *)g35 = v12;
			int32_t v13 = LoadFileInMem(*(int32_t *)(g23 - 0x6404), NULL); // 0x371d4
			*(int32_t *)g33 = v13;
			int32_t v14 = LoadFileInMem(*(int32_t *)(g23 - 0x6408), NULL); // 0x371e4
			result2 = v14;
			*(int32_t *)g32 = v14;
			// branch -> 0x37338
		} else {
			int32_t v15 = LoadFileInMem(*(int32_t *)(v4 - 0x640c), NULL); // 0x371f8
			*(int32_t *)g36 = v15;
			g34 = *(int32_t *)g36;
			int32_t v16 = function_c9948(); // 0x37204
			*(int32_t *)g31 = v16;
			int32_t v17 = LoadFileInMem(*(int32_t *)(g23 - 0x6410), NULL); // 0x37214
			*(int32_t *)g35 = v17;
			int32_t v18 = LoadFileInMem(*(int32_t *)(g23 - 0x6414), NULL); // 0x37224
			*(int32_t *)g33 = v18;
			int32_t v19 = LoadFileInMem(g30, NULL); // 0x37234
			result2 = v19;
			*(int32_t *)g32 = v19;
			// branch -> 0x37338
		}
		// 0x37338
		g10 = v1;
		return result2;
	}
	// 0x37190
	if (v5 == 4) {
		int32_t v20 = LoadFileInMem(*(int32_t *)(v4 - 0x6438), NULL); // 0x372e8
		*(int32_t *)g36 = v20;
		g34 = *(int32_t *)g36;
		int32_t v21 = function_c9948(); // 0x372f4
		*(int32_t *)g31 = v21;
		int32_t v22 = LoadFileInMem(*(int32_t *)(g23 - 0x643c), NULL); // 0x37304
		*(int32_t *)g35 = v22;
		int32_t v23 = LoadFileInMem(*(int32_t *)(g23 - 0x6440), NULL); // 0x37314
		*(int32_t *)g33 = v23;
		int32_t result3 = LoadFileInMem(g29, NULL); // 0x37324
		*(int32_t *)g32 = result3;
		// branch -> 0x37338
		// 0x37338
		g10 = v1;
		return result3;
	}
	// 0x37198
	if (v5 > 4) {
		// 0x37330
		result2 = app_fatal(*(int32_t *)(v4 - 0x6444));
		// branch -> 0x37338
	} else {
		int32_t v24 = LoadFileInMem(*(int32_t *)(v4 - 0x642c), NULL); // 0x37298
		*(int32_t *)g36 = v24;
		g34 = *(int32_t *)g36;
		int32_t v25 = function_c9948(); // 0x372a4
		*(int32_t *)g31 = v25;
		int32_t v26 = LoadFileInMem(*(int32_t *)(g23 - 0x6430), NULL); // 0x372b4
		*(int32_t *)g35 = v26;
		int32_t v27 = LoadFileInMem(*(int32_t *)(g23 - 0x6434), NULL); // 0x372c4
		*(int32_t *)g33 = v27;
		int32_t v28 = LoadFileInMem(g30, NULL); // 0x372d4
		result2 = v28;
		*(int32_t *)g32 = v28;
		// branch -> 0x37338
	}
	// 0x37338
	g10 = v1;
	return result2;
}

// Address range: 0x3734c - 0x37390
int32_t LoadAllGFX(int32_t a1)
{
	// 0x3734c
	g34 = &g5;
	int32_t v1 = DiabloAllocPtr(); // 0x3735c
	*(int32_t *)*(int32_t *)(g23 - 0x7578) = v1;
	int32_t v2 = IncProgress(IncProgress(v1));    // 0x3736c
	int32_t v3 = IncProgress(function_92610(v2)); // 0x37374
	g34 = v3;
	int32_t result = IncProgress(InitMissileGFX(v3)); // 0x3737c
	return result;
}

// Address range: 0x37390 - 0x374a4
int32_t CreateLevel(int32_t a1)
{
	int32_t v1 = g10;                        // 0x37390
	int32_t v2 = *(int32_t *)(g23 - 0x7794); // 0x37394
	g37 = v2;
	int32_t v3 = *(int32_t *)(g23 - 0x77e4); // 0x3739c
	char *v4 = (char *)v3;                   // 0x3739c
	int32_t v5 = *(int32_t *)(g23 - 0x75ec); // 0x373a4
	unsigned char v6 = *(char *)v2;          // 0x373a8
	if (v6 == 2) {
		int32_t v7 = *(int32_t *)(4 * (int32_t)*v4 + v5);     // 0x37420
		int32_t v8 = InitL2Triggers(CreateL2Dungeon(v7, a1)); // 0x37428
		g34 = v8;
		Freeupstairs(v8);
		int32_t result = LoadRndLvlPal(2); // 0x37434
		// branch -> 0x37494
		// 0x37494
		g10 = v1;
		return result;
	}
	// 0x373b4
	int32_t result2; // 0x374a0
	if (v6 <= 2) {
		// 0x373b8
		if (v6 == 0) {
			// 0x373d8
			InitTownTriggers(CreateTown(v2, v5, v3));
			result2 = LoadRndLvlPal(0);
			// branch -> 0x37494
		} else {
			int32_t v9 = *(int32_t *)(4 * (int32_t)*v4 + v5); // 0x373f8
			g34 = v9;
			int32_t v10 = InitL1Triggers(CreateL5Dungeon(v9, a1, v5, v3)); // 0x37400
			g34 = v10;
			Freeupstairs(v10);
			result2 = LoadRndLvlPal(1);
			// branch -> 0x37494
		}
		// 0x37494
		g10 = v1;
		return result2;
	}
	// 0x373c8
	if (v6 == 4) {
		int32_t v11 = *(int32_t *)(4 * (int32_t)*v4 + v5); // 0x37470
		g34 = v11;
		int32_t v12 = InitL4Triggers(CreateL4Dungeon(v11, a1, v5, v3)); // 0x37478
		g34 = v12;
		Freeupstairs(v12);
		int32_t result3 = LoadRndLvlPal(4); // 0x37484
		// branch -> 0x37494
		// 0x37494
		g10 = v1;
		return result3;
	}
	// 0x373d0
	if (v6 > 4) {
		// 0x3748c
		result2 = app_fatal(*(int32_t *)(g23 - 0x6448));
		// branch -> 0x37494
	} else {
		int32_t v13 = *(int32_t *)(4 * (int32_t)*v4 + v5); // 0x37448
		g34 = v13;
		int32_t v14 = InitL3Triggers(CreateL3Dungeon(v13, a1, v5, v3)); // 0x37450
		g34 = v14;
		Freeupstairs(v14);
		result2 = LoadRndLvlPal(3);
		// branch -> 0x37494
	}
	// 0x37494
	g10 = v1;
	return result2;
}

// Address range: 0x374a4 - 0x37c20
int32_t LoadGameLevel(int32_t a1, int32_t a2)
{
	int32_t v1 = g10; // 0x374a8
	g24 = a1;
	g25 = a2;
	int32_t v2 = *(int32_t *)(g23 - 0x77e4); // 0x374c0
	int32_t v3 = *(int32_t *)(g23 - 0x75ec); // 0x374c4
	g32 = *(int32_t *)(g23 - 0x77ac);
	g33 = *(int32_t *)(g23 - 0x77f0);
	g35 = *(int32_t *)(g23 - 0x7680);
	g36 = *(int32_t *)(g23 - 0x779c);
	int32_t v4 = *(int32_t *)*(int32_t *)(g23 - 0x75f0); // 0x374e8
	if (v4 != 0) {
		// 0x374f4
		*(int32_t *)(4 * (int32_t) * (char *)v2 + v3) = v4;
		// branch -> 0x37500
	}
	// 0x37500
	music_stop();
	g34 = 1;
	SetCursor_();
	g34 = *(int32_t *)(v3 + 4 * (int32_t) * (char *)v2);
	int32_t v5 = SetRndSeed();                          // 0x37518
	int32_t v6 = MakeLightTable((char)IncProgress(v5)); // 0x37520
	int32_t v7 = IncProgress(LoadLvlGFX(v6));           // 0x37528
	int32_t v8;
	int32_t v9;  // 0x37578
	int32_t v10; // 0x3758c
	int32_t v11; // 0x375b0
	int32_t v12; // 0x375e0
	int32_t v13; // 0x37608
	int32_t v14; // 0x37614
	int32_t v15; // 0x37620
	int32_t v16; // 0x3762016
	int32_t v17; // 0x37624
	int32_t v18; // 0x3763c
	int32_t v19; // 0x37648
	int32_t v20; // 0x37a00
	int32_t v21; // 0x37a3c
	int32_t v22; // 0x37a50
	int32_t v23; // 0x37a5c
	int32_t v24; // 0x3758c
	int32_t v25; // 0x37590
	int32_t v26; // 0x375a8
	int32_t v27; // 0x375c8
	int32_t v28; // 0x375cc
	int32_t v29; // 0x375f0
	int32_t v30; // 0x375f4
	int32_t v31; // 0x37604
	int32_t v32; // 0x37a10
	int32_t v33; // 0x37a14
	int32_t v34; // 0x37a18
	int32_t v35; // 0x37a1c
	int32_t v36; // 0x37a20
	int32_t v37; // 0x37a24
	int32_t v38; // 0x37a0c
	int32_t v39; // 0x37a04
	if (g24 != 0) {
		int32_t v40 = InitInv(v7); // 0x37534
		InitQuestText(InitItemGFX(v40));
		g21 = 0;
		int32_t v41; // 0x37560
		int32_t v42; // 0x37564
		if (*(char *)g33 != 0) {
			InitPlrGFXMem(0);
			int32_t v43 = g21 + 1; // 0x37550
			g21 = v43;
			while (v43 < (int32_t) * (char *)g33) {
				// 0x37548
				InitPlrGFXMem(v43);
				v43 = g21 + 1;
				g21 = v43;
				// continue -> 0x37548
			}
			// 0x37560
			v41 = InitStores();
			v42 = InitAutomapOnce(v41);
			InitHelp(v42);
			// branch -> 0x3756c
			// 0x3756c
			g34 = *(int32_t *)(g30 + 4 * (int32_t) * (char *)g29);
			v9 = SetRndSeed();
			g34 = v9;
			v10 = v9;
			if (*(char *)g31 == 0) {
				// 0x37588
				v10 = SetupTownStores(v9);
				// branch -> 0x3758c
			}
			// 0x3758c
			v24 = IncProgress(v10);
			v25 = InitAutomap(v24);
			if (*(char *)g31 != 0) {
				// 0x375a0
				if (g25 != 4) {
					// 0x375a8
					v26 = InitLighting(v25);
					InitVision(v26);
					// branch -> 0x375b0
				}
			}
			// 0x375b0
			v11 = InitLevelMonsters();
			IncProgress(v11);
			int32_t v44; // 0x37b30
			int32_t v45; // 0x37b58
			if (*(char *)g28 == 0) {
				// 0x375c4
				v27 = CreateLevel(g25);
				v28 = IncProgress(v27);
				FillSolidBlockTbls(v28);
				g34 = *(int32_t *)(g30 + 4 * (int32_t) * (char *)g29);
				v12 = SetRndSeed();
				g34 = v12;
				if (*(char *)g31 == 0) {
					// 0x37600
					v8 = InitMissileGFX(v12);
					// branch -> 0x37604
				} else {
					// 0x375f0
					v29 = GetLevelMTypes(v12);
					v30 = InitThemes(v29);
					v8 = LoadAllGFX(v30);
					// branch -> 0x37604
				}
				// 0x37604
				v31 = IncProgress(v8);
				v13 = g25;
				v16 = v31;
				v14 = v13;
				if (v13 == 3) {
					// 0x37610
					v16 = GetReturnLvlPos(v31);
					v14 = g25;
					// branch -> 0x37614
				}
				// 0x37614
				v15 = v16;
				if (v14 == 5) {
					// 0x3761c
					v15 = GetPortalLvlPos();
					// branch -> 0x37620
				}
				// 0x37620
				IncProgress(v15);
				v17 = g26;
				g22 = v17;
				g21 = 0;
				v19 = 0;
				v18 = v17;
				// branch -> 0x3762c
				while (true) {
					// 0x3762c
					if (*(char *)(v18 + 29) != 0) {
					lab_0x37638_2:
						// 0x37638
						if ((int32_t) * (char *)g29 == *(int32_t *)(v18 + 52)) {
							// 0x37648
							InitPlayerGFX(v19);
							if (g25 != 4) {
								// 0x37658
								InitPlayer(g21, g24);
								// branch -> 0x37664
							}
						}
					}
				lab_0x37664_2:;
					int32_t v46 = g21 + 1; // 0x37664
					g21 = v46;
					int32_t v47 = g22 + 0x55ec; // 0x37668
					g22 = v47;
					if (v46 >= 4) {
						// break -> 0x37674
						break;
					}
					v19 = v46;
					v18 = v47;
					// continue -> 0x3762c
				}
				// 0x37674
				PlayDungMsgs();
				IncProgress(InitMultiView());
				unsigned char v48 = *(char *)g33;      // 0x37680
				int32_t v49 = g26;                     // 0x37684
				int32_t v50 = (int32_t) * (char *)g29; // 0x37688
				int32_t v51;                           // ctr
				int32_t v52;                           // r3
				int32_t v53;                           // r4
				int32_t v54;                           // r5
				int32_t v55;                           // 0x37750
				int32_t v56;                           // 0x37768
				int32_t v57;                           // 0x37788
				int32_t v58;                           // 0x377a4
				int32_t v59;                           // 0x377c8
				int32_t v60;                           // 0x377f028
				int32_t v61;                           // 0x37730
				int32_t v62;                           // 0x37734
				int32_t v63;                           // 0x37738
				int32_t v64;                           // 0x3773c
				int32_t v65;                           // 0x37740
				int32_t v66;                           // 0x37780
				int32_t v67;                           // 0x3779c
				int32_t v68;                           // 0x377c8
				int32_t v69;                           // 0x377ec
				int32_t v70;                           // 0x377f8
				int32_t v71;                           // 0x37714
				int32_t v72;                           // 0x3777c
				int32_t v73;                           // 0x37758
				int32_t v74;                           // 0x37770
				int32_t v75;                           // 0x37790
				int32_t v76;                           // 0x377ac
				if (v48 != 0) {
					int32_t v77 = v48;       // 0x376d8
					int32_t v78 = v50 + v49; // 0x376d4
					int32_t v79 = 0;         // 0x376b0
					while (true) {
						int32_t v80 = v79; // 0x376b021
						if (*(char *)(v49 + 29) != 0) {
							int32_t v81 = 1; // 0x376cc
							if (v79 == 0) {
								// 0x376bc
								if (*(char *)(v78 + 496) == 0) {
									// 0x376c8
									v81 = 0;
									// branch -> 0x376cc
								} else {
									v81 = 1;
								}
							}
							// 0x376cc
							v80 = v81;
							// branch -> 0x376d0
						}
						int32_t v82 = v77 - 1; // 0x376d8
						if (v82 == 0) {
							// break -> 0x376dc
							break;
						}
						v77 = v82;
						v78 += 0x55ec;
						v79 = v80;
						v49 += 0x55ec;
						// continue -> 0x376a4
					}
					// 0x376dc
					g34 = *(int32_t *)(g30 + 4 * v50);
					SetRndSeed();
					if (*(char *)g31 == 0) {
						// 0x377d4
						v53 = 0;
						v52 = 0;
						v60 = 0;
						// branch -> 0x377dc
						while (true) {
							// 0x377dc
							v51 = 7;
							v54 = 0;
							v70 = v60;
							v69 = 0;
							// branch -> 0x377e8
						lab_0x377e8:;
							int32_t v83; // 0x37958
							int32_t v84; // 0x3796c
							int32_t v85; // 0x37970
							while (true) {
								char *v86 = (char *)(*(int32_t *)g36 + v69 + v70); // 0x377f0
								*v86 = *v86 | 64;
								int32_t v87 = *(int32_t *)g36;             // 0x377fc
								char *v88 = (char *)(v52 + v87 + 1 + v54); // 0x37808
								*v88 = *v88 | 64;
								int32_t v89 = *(int32_t *)g36;             // 0x37814
								char *v90 = (char *)(v52 + v89 + 2 + v54); // 0x37820
								*v90 = *v90 | 64;
								int32_t v91 = *(int32_t *)g36;             // 0x3782c
								char *v92 = (char *)(v52 + v91 + 3 + v54); // 0x37838
								*v92 = *v92 | 64;
								int32_t v93 = *(int32_t *)g36;             // 0x37844
								char *v94 = (char *)(v52 + v93 + 4 + v54); // 0x37850
								*v94 = *v94 | 64;
								int32_t v95 = *(int32_t *)g36;             // 0x3785c
								char *v96 = (char *)(v52 + v95 + 5 + v54); // 0x37868
								*v96 = *v96 | 64;
								int32_t v97 = *(int32_t *)g36;             // 0x37874
								char *v98 = (char *)(v52 + v97 + 6 + v54); // 0x37880
								*v98 = *v98 | 64;
								int32_t v99 = v54; // 0x37890
								v54 = v99 + 8;
								char *v100 = (char *)(v52 + *(int32_t *)g36 + 7 + v99); // 0x3789c
								*v100 = *v100 | 64;
								int32_t v101 = *(int32_t *)g36;          // 0x378a8
								char *v102 = (char *)(v52 + v54 + v101); // 0x378b0
								*v102 = *v102 | 64;
								int32_t v103 = *(int32_t *)g36;              // 0x378bc
								char *v104 = (char *)(v52 + v103 + 1 + v54); // 0x378c8
								*v104 = *v104 | 64;
								int32_t v105 = *(int32_t *)g36;              // 0x378d4
								char *v106 = (char *)(v52 + v105 + 2 + v54); // 0x378e0
								*v106 = *v106 | 64;
								int32_t v107 = *(int32_t *)g36;              // 0x378ec
								char *v108 = (char *)(v52 + v107 + 3 + v54); // 0x378f8
								*v108 = *v108 | 64;
								int32_t v109 = *(int32_t *)g36;              // 0x37904
								char *v110 = (char *)(v52 + v109 + 4 + v54); // 0x37910
								*v110 = *v110 | 64;
								int32_t v111 = *(int32_t *)g36;              // 0x3791c
								char *v112 = (char *)(v52 + v111 + 5 + v54); // 0x37928
								*v112 = *v112 | 64;
								int32_t v113 = *(int32_t *)g36;              // 0x37934
								char *v114 = (char *)(v52 + v113 + 6 + v54); // 0x37940
								*v114 = *v114 | 64;
								int32_t v115 = v54; // 0x37950
								v54 = v115 + 8;
								v83 = *(int32_t *)g36 + 7 + v115;
								char *v116 = (char *)(v52 + v83); // 0x3795c
								*v116 = *v116 | 64;
								int32_t v117 = v51 - 1; // 0x37968
								v51 = v117;
								if (v117 == 0) {
									// 0x3796c
									v84 = v53 + 1;
									v53 = v84;
									v85 = v52 + 112;
									v52 = v85;
									if (v84 >= 112) {
										// break (via goto) -> 0x3797c
										goto lab_0x3797c;
									}
									v60 = v85;
									// continue (via goto) -> 0x377dc
									goto lab_0x377dc;
								} else {
									// 0x377e8
									v70 = v52;
									v69 = v54;
									// branch -> 0x377e8
									continue;
								}
							}
						lab_0x3797c:;
							int32_t v118 = InitItems(function_c5110(v85, v84, v54, v83)); // 0x37980
							int32_t v119 = IncProgress(InitMissiles(v118));               // 0x37988
							int32_t v120 = v119;                                          // 0x379dc30
							if (g24 == 0) {
								// 0x37994
								if (g25 != 4) {
									int32_t v121 = (int32_t) * (char *)g29 + 0x55ec * *(int32_t *)g32 + g26; // 0x379ac
									if (*(char *)(v121 + 496) != 0) {
										// 0x379bc
										if (*(char *)g33 == 1) {
											// 0x379c8
											v120 = LoadLevel(v121);
											// branch -> 0x379cc
										} else {
											v120 = v121;
										}
									} else {
										v120 = v121;
									}
								} else {
									v120 = v119;
								}
							}
							int32_t v122 = v120; // 0x379dc
							if (*(char *)g33 != 1) {
								// 0x379d8
								v122 = DeltaLoadLevel();
								// branch -> 0x379dc
							}
							// 0x379dc
							v52 = IncProgress(v122);
							// branch -> 0x379e0
						}
					} else {
						// 0x376f4
						if (g24 == 0) {
							// 0x376fc
							if (g25 != 4) {
								// 0x37704
								v71 = (int32_t) * (char *)g29 + 0x55ec * *(int32_t *)g32 + g26;
								if (*(char *)(v71 + 496) != 0) {
									// 0x37724
									if (*(char *)g33 == 1) {
										// 0x37730
										v61 = InitMonsters(v71);
										v62 = InitMissiles(v61);
										v63 = InitDead(v62);
										v64 = IncProgress(v63);
										v65 = LoadLevel(v64);
										IncProgress(v65);
										// branch -> 0x379e0
										// 0x379e0
										if (*(char *)g33 == 1) {
											// 0x379ec
											function_ad9bc();
											// branch -> 0x37ad8
										} else {
											// 0x379f4
											function_ad890();
											// branch -> 0x37ad8
										}
										// 0x37ad8
										function_abd90();
										g30 = 0;
										v44 = 0;
										v45 = g26;
										// branch -> 0x37ae0
										while (true) {
											// 0x37ae0
											int32_t v123; // 0x37b78
											int32_t v124; // 0x37b7c
											if (*(char *)(v45 + 29) != 0) {
											lab_0x37aec_7:
												// 0x37aec
												if ((int32_t) * (char *)g29 == *(int32_t *)(v45 + 52)) {
													// 0x37afc
													if (*(char *)(v45 + 315) != 0) {
														// 0x37b08
														if (v44 != *(int32_t *)g32) {
														lab_0x37b78_3:
															// 0x37b78
															v123 = g30 + 1;
															g30 = v123;
															v124 = g26 + 0x55ec;
															g26 = v124;
															if (v123 >= 4) {
																// break -> 0x37b88
																break;
															}
															v44 = v123;
															v45 = v124;
															// continue -> 0x37ae0
															continue;
														}
													}
													// 0x37b14
													int32_t v125; // 0x37b78
													int32_t v126; // 0x37b7c
													if (*(int32_t *)(v45 + 404) < 1) {
														int32_t v127 = *(int32_t *)(v45 + 60) + 112 * *(int32_t *)(v45 + 56); // 0x37b68
														char *v128 = (char *)(*(int32_t *)g36 + v127);                        // 0x37b6c
														*v128 = *v128 | 4;
														// branch -> 0x37b78
														goto lab_0x37b78_3;
													} else {
														// 0x37b20
														if (*(char *)g33 == 1) {
															int32_t v129 = *(int32_t *)(v45 + 60);       // 0x37b34
															int32_t v130 = 112 * *(int32_t *)(v45 + 56); // 0x37b38
															*(char *)(*(int32_t *)g35 + v129 + v130) = (char)(v44 + 1);
															// branch -> 0x37b78
															goto lab_0x37b78_3;
														} else {
															// 0x37b4c
															function_aa680(v44);
															// branch -> 0x37b78
															goto lab_0x37b78_3;
														}
														// 0x37b78
														v125 = g30;
														v123 = v125 + 1;
														g30 = v123;
														v126 = g26;
														v124 = v126 + 0x55ec;
														g26 = v124;
														if (v123 >= 4) {
															// break -> 0x37b88
															break;
														}
														v44 = v123;
														v45 = v124;
														// continue -> 0x37ae0
														continue;
													}
													// 0x37b78
													v125 = g30;
													v123 = v125 + 1;
													g30 = v123;
													v126 = g26;
													v124 = v126 + 0x55ec;
													g26 = v124;
													if (v123 >= 4) {
														// break -> 0x37b88
														break;
													}
													v44 = v123;
													v45 = v124;
													// continue -> 0x37ae0
													continue;
												}
											}
										lab_0x37b78_10:
											// 0x37b78
											v123 = g30 + 1;
											g30 = v123;
											v124 = g26 + 0x55ec;
											g26 = v124;
											if (v123 >= 4) {
												// break -> 0x37b88
												break;
											}
											v44 = v123;
											v45 = v124;
											// continue -> 0x37ae0
										}
										// 0x37b88
										if (*(char *)g31 != 0) {
											// 0x37b94
											function_52494();
											// branch -> 0x37b98
										}
										int32_t v131 = InitLightMax();                 // 0x37b98
										int32_t v132 = IncProgress(IncProgress(v131)); // 0x37ba0
										if (g24 != 0) {
											// 0x37bac
											IncProgress(InitControlPan(v132));
											// branch -> 0x37bb4
										}
										int32_t v133 = g31;  // 0x37bb4
										int32_t v134 = v133; // 0x37bc8
										if (*(char *)v133 != 0) {
											int32_t v135 = ProcessLightList(); // 0x37bc0
											g34 = v135;
											ProcessVisionList(v135);
											v134 = g31;
											// branch -> 0x37bc8
										}
										int32_t v136 = music_start((int32_t) * (char *)v134); // 0x37bd0
										int32_t result = IncProgress(v136);                   // 0x37bd0
										// branch -> 0x37bd0
										while (result == 0) {
											// 0x37bd0
											result = IncProgress(0);
											// continue -> 0x37bd0
										}
										// 0x37bdc
										if (*(char *)g28 == 0) {
											// 0x37c0c
											g10 = v1;
											return result;
										}
										if (*(char *)g27 == 1) {
											int32_t v137 = *(int32_t *)(g23 - 0x7604); // 0x37bf4
											if (*(char *)(v137 + 290) == 2) {
												// 0x37c04
												g34 = 849;
												result = PlaySFX(849);
												// branch -> 0x37c0c
											} else {
												result = v137;
											}
										}
										// 0x37c0c
										g10 = v1;
										return result;
									}
								}
							}
						}
						// 0x3774c
						function_bf57c();
						v55 = GetRndSeed();
						v73 = *(int32_t *)(g23 - 0x75f4);
						*(int32_t *)(v73 + 4 * (int32_t) * (char *)g29) = v55;
						InitMonsters(v55);
						v56 = GetRndSeed();
						v74 = *(int32_t *)(g23 - 0x75f8);
						*(int32_t *)(v74 + 4 * (int32_t) * (char *)g29) = v56;
						v72 = InitObjects(v56, v74);
						v66 = InitItems(v72);
						CreateThemeRooms(v66);
						v57 = GetRndSeed();
						v75 = *(int32_t *)(g23 - 0x75fc);
						*(int32_t *)(v75 + 4 * (int32_t) * (char *)g29) = v57;
						v67 = InitMissiles(v57);
						InitDead(v67);
						v58 = GetRndSeed();
						v76 = *(int32_t *)(g23 - 0x7600);
						*(int32_t *)(v76 + 4 * (int32_t) * (char *)g29) = v58;
						if (*(char *)g33 == 1) {
							// 0x3774c
							v59 = v58;
							// branch -> 0x377c8
						} else {
							// 0x377c4
							v59 = DeltaLoadLevel();
							// branch -> 0x377c8
						}
						// 0x377c8
						v68 = IncProgress(v59);
						SavePreLighting(v68);
						// branch -> 0x379e0
					}
					// 0x379e0
					if (*(char *)g33 == 1) {
						// 0x379ec
						function_ad9bc();
						// branch -> 0x37ad8
					} else {
						// 0x379f4
						function_ad890();
						// branch -> 0x37ad8
					}
					// 0x37ad8
					function_abd90();
					g30 = 0;
					v44 = 0;
					v45 = g26;
					// branch -> 0x37ae0
					while (true) {
						// 0x37ae0
						if (*(char *)(v45 + 29) == 0) {
							goto lab_0x37b78_10;
						}
						goto lab_0x37aec_7;
					}
				}
				// 0x376dc
				g34 = *(int32_t *)(g30 + 4 * v50);
				SetRndSeed();
				if (*(char *)g31 == 0) {
					// 0x377d4
					v53 = 0;
					v52 = 0;
					v60 = 0;
					// branch -> 0x377dc
				lab_0x377dc:
					while (true) {
						// 0x377dc
						v51 = 7;
						v54 = 0;
						v70 = v60;
						v69 = 0;
						// branch -> 0x377e8
						goto lab_0x377e8;
					}
				} else {
					// 0x376f4
					if (g24 == 0) {
						// 0x376fc
						if (g25 != 4) {
							// 0x37704
							v71 = (int32_t) * (char *)g29 + 0x55ec * *(int32_t *)g32 + g26;
							if (*(char *)(v71 + 496) != 0) {
								// 0x37724
								if (*(char *)g33 == 1) {
									// 0x37730
									v61 = InitMonsters(v71);
									v62 = InitMissiles(v61);
									v63 = InitDead(v62);
									v64 = IncProgress(v63);
									v65 = LoadLevel(v64);
									IncProgress(v65);
									// branch -> 0x379e0
									// 0x379e0
									if (*(char *)g33 == 1) {
										// 0x379ec
										function_ad9bc();
										// branch -> 0x37ad8
									} else {
										// 0x379f4
										function_ad890();
										// branch -> 0x37ad8
									}
									// 0x37ad8
									function_abd90();
									g30 = 0;
									v44 = 0;
									v45 = g26;
									// branch -> 0x37ae0
									while (true) {
										// 0x37ae0
										if (*(char *)(v45 + 29) == 0) {
											goto lab_0x37b78_10;
										}
										goto lab_0x37aec_7;
									}
								}
							}
						}
					}
					// 0x3774c
					function_bf57c();
					v55 = GetRndSeed();
					v73 = *(int32_t *)(g23 - 0x75f4);
					*(int32_t *)(v73 + 4 * (int32_t) * (char *)g29) = v55;
					InitMonsters(v55);
					v56 = GetRndSeed();
					v74 = *(int32_t *)(g23 - 0x75f8);
					*(int32_t *)(v74 + 4 * (int32_t) * (char *)g29) = v56;
					v72 = InitObjects(v56, v74);
					v66 = InitItems(v72);
					CreateThemeRooms(v66);
					v57 = GetRndSeed();
					v75 = *(int32_t *)(g23 - 0x75fc);
					*(int32_t *)(v75 + 4 * (int32_t) * (char *)g29) = v57;
					v67 = InitMissiles(v57);
					InitDead(v67);
					v58 = GetRndSeed();
					v76 = *(int32_t *)(g23 - 0x7600);
					*(int32_t *)(v76 + 4 * (int32_t) * (char *)g29) = v58;
					if (*(char *)g33 == 1) {
						// 0x3774c
						v59 = v58;
						// branch -> 0x377c8
					} else {
						// 0x377c4
						v59 = DeltaLoadLevel();
						// branch -> 0x377c8
					}
					// 0x377c8
					v68 = IncProgress(v59);
					SavePreLighting(v68);
					// branch -> 0x379e0
				}
				// 0x379e0
				if (*(char *)g33 == 1) {
					// 0x379ec
					function_ad9bc();
					// branch -> 0x37ad8
				} else {
					// 0x379f4
					function_ad890();
					// branch -> 0x37ad8
				}
				// 0x37ad8
				function_abd90();
				g30 = 0;
				v44 = 0;
				v45 = g26;
				// branch -> 0x37ae0
				while (true) {
					// 0x37ae0
					if (*(char *)(v45 + 29) == 0) {
						goto lab_0x37b78_10;
					}
					goto lab_0x37aec_7;
				}
			} else {
				// 0x379fc
				g34 = &g5;
				v20 = DiabloAllocPtr();
				v39 = *(int32_t *)(g23 - 0x7578);
				*(int32_t *)v39 = v20;
				v38 = LoadSetMap(v20, v39);
				v32 = IncProgress(v38);
				v33 = GetLevelMTypes(v32);
				v34 = InitMonsters(v33);
				g34 = v34;
				v35 = InitMissileGFX(v34);
				v36 = InitDead(v35);
				v37 = FillSolidBlockTbls(v36);
				IncProgress(v37);
				if (g25 == 5) {
					// 0x37a34
					GetPortalLvlPos();
					// branch -> 0x37a38
				}
				// 0x37a38
				g30 = 0;
				v21 = g26;
				g22 = v21;
				v23 = 0;
				v22 = v21;
				// branch -> 0x37a40
				while (true) {
					// 0x37a40
					if (*(char *)(v22 + 29) != 0) {
					lab_0x37a4c_2:
						// 0x37a4c
						if ((int32_t) * (char *)g29 == *(int32_t *)(v22 + 52)) {
							// 0x37a5c
							InitPlayerGFX(v23);
							if (g25 != 4) {
								// 0x37a6c
								InitPlayer(g30, g24);
								// branch -> 0x37a78
							}
						}
					}
				lab_0x37a78_2:;
					int32_t v138 = g30 + 1; // 0x37a78
					g30 = v138;
					int32_t v139 = g22 + 0x55ec; // 0x37a7c
					g22 = v139;
					if (v138 >= 4) {
						// break -> 0x37a88
						break;
					}
					v23 = v138;
					v22 = v139;
					// continue -> 0x37a40
				}
				int32_t v140 = IncProgress(InitMultiView()); // 0x37a8c
				int32_t v141 = v140;                         // 0x37ac8
				int32_t v142;
				int32_t v143; // 0x37ad0
				if (g24 == 0) {
					// 0x37a98
					if (g25 != 4) {
						int32_t v144 = (int32_t) * (char *)g27 + 0x55ec * *(int32_t *)g32 + g26; // 0x37ab0
						if (*(char *)(v144 + 513) != 0) {
							// 0x37ac0
							v142 = LoadLevel(v144);
							// branch -> 0x37ad0
							// 0x37ad0
							v143 = InitMissiles(v142);
							IncProgress(v143);
							// branch -> 0x37ad8
							// 0x37ad8
							function_abd90();
							g30 = 0;
							v44 = 0;
							v45 = g26;
							// branch -> 0x37ae0
							while (true) {
								// 0x37ae0
								if (*(char *)(v45 + 29) == 0) {
									goto lab_0x37b78_10;
								}
								goto lab_0x37aec_7;
							}
						} else {
							v141 = v144;
						}
					} else {
						v141 = v140;
					}
				}
				// 0x37ac8
				v142 = SavePreLighting(InitItems(v141));
				// branch -> 0x37ad0
				// 0x37ad0
				v143 = InitMissiles(v142);
				IncProgress(v143);
				// branch -> 0x37ad8
			}
			// 0x37ad8
			function_abd90();
			g30 = 0;
			v44 = 0;
			v45 = g26;
			// branch -> 0x37ae0
			while (true) {
				// 0x37ae0
				if (*(char *)(v45 + 29) == 0) {
					goto lab_0x37b78_10;
				}
				goto lab_0x37aec_7;
			}
		}
		// 0x37560
		v41 = InitStores();
		v42 = InitAutomapOnce(v41);
		InitHelp(v42);
		// branch -> 0x3756c
	}
	// 0x3756c
	g34 = *(int32_t *)(g30 + 4 * (int32_t) * (char *)g29);
	v9 = SetRndSeed();
	g34 = v9;
	v10 = v9;
	if (*(char *)g31 == 0) {
		// 0x37588
		v10 = SetupTownStores(v9);
		// branch -> 0x3758c
	}
	// 0x3758c
	v24 = IncProgress(v10);
	v25 = InitAutomap(v24);
	if (*(char *)g31 != 0) {
		// 0x375a0
		if (g25 != 4) {
			// 0x375a8
			v26 = InitLighting(v25);
			InitVision(v26);
			// branch -> 0x375b0
		}
		// 0x375b0
		v11 = InitLevelMonsters();
		IncProgress(v11);
		if (*(char *)g28 == 0) {
			// 0x375c4
			v27 = CreateLevel(g25);
			v28 = IncProgress(v27);
			FillSolidBlockTbls(v28);
			g34 = *(int32_t *)(g30 + 4 * (int32_t) * (char *)g29);
			v12 = SetRndSeed();
			g34 = v12;
			if (*(char *)g31 == 0) {
				// 0x37600
				v8 = InitMissileGFX(v12);
				// branch -> 0x37604
			} else {
				// 0x375f0
				v29 = GetLevelMTypes(v12);
				v30 = InitThemes(v29);
				v8 = LoadAllGFX(v30);
				// branch -> 0x37604
			}
			// 0x37604
			v31 = IncProgress(v8);
			v13 = g25;
			v16 = v31;
			v14 = v13;
			if (v13 == 3) {
				// 0x37610
				v16 = GetReturnLvlPos(v31);
				v14 = g25;
				// branch -> 0x37614
			}
			// 0x37614
			v15 = v16;
			if (v14 == 5) {
				// 0x3761c
				v15 = GetPortalLvlPos();
				// branch -> 0x37620
			}
			// 0x37620
			IncProgress(v15);
			v17 = g26;
			g22 = v17;
			g21 = 0;
			v19 = 0;
			v18 = v17;
			// branch -> 0x3762c
			while (true) {
				// 0x3762c
				if (*(char *)(v18 + 29) == 0) {
					goto lab_0x37664_2;
				}
				goto lab_0x37638_2;
			}
		} else {
			// 0x379fc
			g34 = &g5;
			v20 = DiabloAllocPtr();
			v39 = *(int32_t *)(g23 - 0x7578);
			*(int32_t *)v39 = v20;
			v38 = LoadSetMap(v20, v39);
			v32 = IncProgress(v38);
			v33 = GetLevelMTypes(v32);
			v34 = InitMonsters(v33);
			g34 = v34;
			v35 = InitMissileGFX(v34);
			v36 = InitDead(v35);
			v37 = FillSolidBlockTbls(v36);
			IncProgress(v37);
			if (g25 == 5) {
				// 0x37a34
				GetPortalLvlPos();
				// branch -> 0x37a38
			}
			// 0x37a38
			g30 = 0;
			v21 = g26;
			g22 = v21;
			v23 = 0;
			v22 = v21;
			// branch -> 0x37a40
			while (true) {
				// 0x37a40
				if (*(char *)(v22 + 29) == 0) {
					goto lab_0x37a78_2;
				}
				goto lab_0x37a4c_2;
			}
		}
	}
	// 0x375b0
	v11 = InitLevelMonsters();
	IncProgress(v11);
	if (*(char *)g28 == 0) {
		// 0x375c4
		v27 = CreateLevel(g25);
		v28 = IncProgress(v27);
		FillSolidBlockTbls(v28);
		g34 = *(int32_t *)(g30 + 4 * (int32_t) * (char *)g29);
		v12 = SetRndSeed();
		g34 = v12;
		if (*(char *)g31 == 0) {
			// 0x37600
			v8 = InitMissileGFX(v12);
			// branch -> 0x37604
		} else {
			// 0x375f0
			v29 = GetLevelMTypes(v12);
			v30 = InitThemes(v29);
			v8 = LoadAllGFX(v30);
			// branch -> 0x37604
		}
		// 0x37604
		v31 = IncProgress(v8);
		v13 = g25;
		v16 = v31;
		v14 = v13;
		if (v13 == 3) {
			// 0x37610
			v16 = GetReturnLvlPos(v31);
			v14 = g25;
			// branch -> 0x37614
		}
		// 0x37614
		v15 = v16;
		if (v14 == 5) {
			// 0x3761c
			v15 = GetPortalLvlPos();
			// branch -> 0x37620
		}
		// 0x37620
		IncProgress(v15);
		v17 = g26;
		g22 = v17;
		g21 = 0;
		v19 = 0;
		v18 = v17;
		// branch -> 0x3762c
		while (true) {
			// 0x3762c
			if (*(char *)(v18 + 29) == 0) {
				goto lab_0x37664_2;
			}
			goto lab_0x37638_2;
		}
	} else {
		// 0x379fc
		g34 = &g5;
		v20 = DiabloAllocPtr();
		v39 = *(int32_t *)(g23 - 0x7578);
		*(int32_t *)v39 = v20;
		v38 = LoadSetMap(v20, v39);
		v32 = IncProgress(v38);
		v33 = GetLevelMTypes(v32);
		v34 = InitMonsters(v33);
		g34 = v34;
		v35 = InitMissileGFX(v34);
		v36 = InitDead(v35);
		v37 = FillSolidBlockTbls(v36);
		IncProgress(v37);
		if (g25 == 5) {
			// 0x37a34
			GetPortalLvlPos();
			// branch -> 0x37a38
		}
		// 0x37a38
		g30 = 0;
		v21 = g26;
		g22 = v21;
		v23 = 0;
		v22 = v21;
		// branch -> 0x37a40
		while (true) {
			// 0x37a40
			if (*(char *)(v22 + 29) == 0) {
				goto lab_0x37a78_2;
			}
			goto lab_0x37a4c_2;
		}
	}
}

// Address range: 0x37c20 - 0x37d24
int32_t game_logic(int32_t a1)
{
	int32_t v1 = g36;                            // 0x37c20
	int32_t v2 = g10;                            // 0x37c24
	int32_t result = *(int32_t *)(g23 - 0x75d0); // 0x37c28
	g36 = *(int32_t *)(g23 - 0x76bc);
	int32_t *v3 = (int32_t *)result; // 0x37c38
	int32_t v4 = *v3;                // 0x37c38
	if (v4 == 2) {
		// 0x37d10
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x37c44
	if (v4 == 1) {
		// 0x37c4c
		*v3 = 2;
		// branch -> 0x37c54
	}
	// 0x37c54
	int32_t v5;      // 0x37ca0
	int32_t v6;      // 0x37cb4
	int32_t v7;      // 0x37cd4
	int32_t v8;      // 0x37cec
	int32_t v9;      // 0x37c98
	int32_t v10;     // 0x37cc8
	int32_t v11;     // 0x37ccc
	int32_t v12;     // 0x37ce4
	int32_t v13;     // 0x37cf0
	int32_t v14;     // 0x37cf4
	int32_t *v15;    // 0x37cfc
	int32_t result2; // 0x37d0c
	int32_t v16;     // 0x37cc4
	int32_t v17;     // 0x37ce0
	int32_t v18;     // 0x37ca0
	int32_t v19;     // 0x37cb4
	if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
		// 0x37c80
		if (gmenu_exception() == 0) {
			// 0x37c8c
			if (*(int32_t *)(g23 - 0x4f54) == 0) {
				// 0x37c98
				v9 = function_328d4(0);
				g34 = v9;
				function_c6594(v9);
				// branch -> 0x37ca0
			}
		}
		// 0x37ca0
		v5 = g23;
		v18 = *(int32_t *)(v5 - 0x75a8);
		v6 = v5;
		if (*(int32_t *)v18 != 0) {
			// 0x37cb0
			ProcessPlayers(v18);
			v6 = g23;
			// branch -> 0x37cb4
		}
		// 0x37cb4
		v19 = *(int32_t *)(v6 - 0x7794);
		if (*(char *)v19 == 0) {
			// 0x37ce0
			v17 = function_c54e4(v19);
			v12 = function_60e0c(v17);
			ProcessMissiles(v12);
			// branch -> 0x37cec
		} else {
			// 0x37cc4
			v16 = ProcessMonsters(v19);
			g34 = v16;
			v10 = function_9691c(v16);
			v11 = ProcessMissiles(v10);
			function_60e0c(v11);
			v7 = ProcessLightList();
			g34 = v7;
			ProcessVisionList(v7);
			// branch -> 0x37cec
		}
		// 0x37cec
		v8 = function_4c9a0();
		g34 = v8;
		v13 = function_ab924(v8);
		g34 = v13;
		v14 = CheckTriggers(v13);
		function_ac698(v14);
		v15 = (int32_t *)g36;
		*v15 = *v15 | 1;
		result2 = function_a2008(0);
		// branch -> 0x37d10
		// 0x37d10
		g36 = v1;
		g10 = v2;
		return result2;
	}
	int32_t result3 = gmenu_exception(); // 0x37c64
	if (result3 != 0) {
		int32_t *v20 = (int32_t *)g36; // 0x37c70
		*v20 = *v20 | 1;
		// branch -> 0x37d10
		// 0x37d10
		g36 = v1;
		g10 = v2;
		return result3;
	}
	// 0x37c80
	if (gmenu_exception() == 0) {
		// 0x37c8c
		if (*(int32_t *)(g23 - 0x4f54) == 0) {
			// 0x37c98
			v9 = function_328d4(0);
			g34 = v9;
			function_c6594(v9);
			// branch -> 0x37ca0
		}
	}
	// 0x37ca0
	v5 = g23;
	v18 = *(int32_t *)(v5 - 0x75a8);
	v6 = v5;
	if (*(int32_t *)v18 != 0) {
		// 0x37cb0
		ProcessPlayers(v18);
		v6 = g23;
		// branch -> 0x37cb4
	}
	// 0x37cb4
	v19 = *(int32_t *)(v6 - 0x7794);
	if (*(char *)v19 == 0) {
		// 0x37ce0
		v17 = function_c54e4(v19);
		v12 = function_60e0c(v17);
		ProcessMissiles(v12);
		// branch -> 0x37cec
	} else {
		// 0x37cc4
		v16 = ProcessMonsters(v19);
		g34 = v16;
		v10 = function_9691c(v16);
		v11 = ProcessMissiles(v10);
		function_60e0c(v11);
		v7 = ProcessLightList();
		g34 = v7;
		ProcessVisionList(v7);
		// branch -> 0x37cec
	}
	// 0x37cec
	v8 = function_4c9a0();
	g34 = v8;
	v13 = function_ab924(v8);
	g34 = v13;
	v14 = CheckTriggers(v13);
	function_ac698(v14);
	v15 = (int32_t *)g36;
	*v15 = *v15 | 1;
	result2 = function_a2008(0);
	// branch -> 0x37d10
	// 0x37d10
	g36 = v1;
	g10 = v2;
	return result2;
}

// Address range: 0x37d24 - 0x37ddc
int32_t timeout_cursor(int32_t a1)
{
	int32_t v1 = g36; // 0x37d24
	int32_t v2 = g10; // 0x37d28
	g36 = *(int32_t *)(g23 - 0x76bc);
	int32_t *v3 = (int32_t *)(g23 - 0x4f54); // 0x37da4
	int32_t v4 = *v3;                        // 0x37da4
	if (a1 == 0) {
		// 0x37da4
		g34 = v4;
		int32_t result; // r3
		if (v4 != 0) {
			// 0x37db0
			SetCursor_();
			*(int32_t *)(g23 - 0x4f54) = 0;
			result = function_2dc1c();
			*(int32_t *)g36 = 255;
			// branch -> 0x37dc8
		} else {
			result = 0;
		}
		// 0x37dc8
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x37d40
	if (v4 == 0) {
		// 0x37d4c
		if (*(char *)*(int32_t *)(g23 - 0x7560) == 0) {
			int32_t v5 = *(int32_t *)(g23 - 0x7744); // 0x37d5c
			g34 = v5;
			*v3 = *(int32_t *)v5;
			function_909b4(v5);
			function_2dc1c();
			function_2dbac(*(int32_t *)(g23 - 0x644c), 1);
			function_2dbac(*(int32_t *)(g23 - 0x6450), 1);
			g34 = 11;
			function_324ec(11);
			*(int32_t *)g36 = 255;
			// branch -> 0x37d98
		}
	}
	int32_t result2 = scrollrt_draw_game_screen(1); // 0x37d9c
	// branch -> 0x37dc8
	// 0x37dc8
	g36 = v1;
	g10 = v2;
	return result2;
}

// Address range: 0x37ddc - 0x37e8c
int32_t game_loop(int32_t a1)
{
	int32_t v1 = g36; // 0x37ddc
	int32_t v2 = g10; // 0x37de0
	g36 = *(int32_t *)(g23 - 0x75a4);
	g35 = *(int32_t *)(g23 - 0x77f0);
	g33 = a1 == 0 ? 2 : 59;
	// branch -> 0x37e18
	int32_t result3; // 0x37e58
	while (true) {
		// 0x37e18
		if (function_90c14() == 0) {
			int32_t result = timeout_cursor(1); // 0x37e28
			// branch -> 0x37e70
			// 0x37e70
			g36 = v1;
			g10 = v2;
			return result;
		}
		int32_t result2 = game_logic(timeout_cursor(0)); // 0x37e38
		if (*(int32_t *)g36 == 0 || *(char *)g35 == 1) {
			// 0x37e70
			g36 = v1;
			g10 = v2;
			return result2;
		}
		// 0x37e54
		result3 = nthread_has_500ms_passed(1);
		if (result3 != 0) {
			int32_t v3 = g33;
			g33 = v3 - 1;
			if (v3 == 0) {
				// break -> 0x37e70
				break;
			}
			// continue -> 0x37e18
			continue;
		}
		// 0x37e70
		g36 = v1;
		g10 = v2;
		return 0;
	}
	// 0x37e70
	g36 = v1;
	g10 = v2;
	return result3;
}

// Address range: 0x37e8c - 0x37f3c
int32_t diablo_color_cyc_logic(void)
{
	int32_t v1 = g10; // 0x37e8c
	if (*(char *)(g23 - 0x4f60) == 0) {
		// 0x37ea4
		g34 = 0;
		*(int32_t *)(g23 - 0x4f5c) = 0;
		*(char *)(g23 - 0x4f60) = (char)1;
		// branch -> 0x37eb4
	}
	int32_t result = GetTickCount(); // 0x37eb4
	int32_t v2;
	int32_t *v3 = (int32_t *)(v2 - 0x4f5c); // 0x37ebc
	if (result - *v3 < 50) {
		// 0x37f2c
		g10 = v1;
		return result;
	}
	// 0x37ecc
	*v3 = result;
	int32_t v4 = *(int32_t *)(g23 - 0x7794); // 0x37ed0
	unsigned char v5 = *(char *)v4;          // 0x37ed4
	int32_t result2;                         // 0x37f38
	if (v5 == 4) {
		// 0x37ee0
		result2 = function_cc0b8(v4);
		// branch -> 0x37f2c
	} else {
		// 0x37ee8
		if (v5 == 3) {
			// 0x37ef0
			if (*(char *)(g23 - 0x4f68) == 0) {
				// 0x37efc
				*(int32_t *)(g23 - 0x4f64) = 0;
				*(char *)(g23 - 0x4f68) = (char)1;
				// branch -> 0x37f0c
			}
			int32_t *v6 = (int32_t *)(g23 - 0x4f64); // 0x37f0c
			int32_t v7 = *v6;                        // 0x37f0c
			int32_t v8 = v7 + 1;                     // 0x37f10
			*v6 = v8;
			if (v8 < 3) {
				// 0x37f0c
				result2 = v7;
				// branch -> 0x37f2c
			} else {
				// 0x37f20
				*(int32_t *)(g23 - 0x4f64) = 0;
				result2 = palette_update_caves(v7);
				// branch -> 0x37f2c
			}
			// 0x37f2c
			g10 = v1;
			return result2;
		}
		result2 = v4;
	}
	// 0x37f2c
	g10 = v1;
	return result2;
}
