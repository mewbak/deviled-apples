// Address range: 0x51108 - 0x51180
int32_t gamemenu_enable_single(void)
{
	int32_t v1 = 0;                         // r2
	int32_t v2 = *(int32_t *)(v1 - 0x75bc); // 0x51110
	int32_t v3 = v1 + 0x2770;               // r31
	gmenu_enable((int32_t *)(v1 + 0x2794), *(int32_t *)v2);
	int32_t v4 = *(int32_t *)(v1 - 0x77ac); // 0x5112c
	int32_t v5 = *(int32_t *)(v1 - 0x77a8); // 0x51134
	if (*(int32_t *)(0x55ec * *(int32_t *)v4 + v5) == 8) {
		// 0x51160
		return gmenu_enable((int32_t *)v3, 0);
	}
	int32_t v6 = 0; // 0x51164
	if (*(int32_t *)*(int32_t *)(v1 - 0x75cc) == 0) {
		// 0x5115c
		v6 = 1;
		// branch -> 0x51160
	}
	// 0x51160
	return gmenu_enable((int32_t *)v3, v6);
}

// Address range: 0x51180 - 0x511b0
int32_t gamemenu_enable_multi(void)
{
	int32_t v1 = 0;                         // 0x51184
	int32_t v2 = *(int32_t *)(v1 - 0x75cc); // 0x51184
	return gmenu_enable((int32_t *)(v1 + 0x27d0), *(int32_t *)v2);
}

// Address range: 0x511b0 - 0x512ac
int32_t gamemenu_previous(int32_t a1)
{
	int32_t v1 = g36; // 0x511b0
	int32_t v2 = g10; // 0x511b4
	g36 = 1;
	int32_t result; // 0x5129c
	if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
		int32_t v3 = g23 + 0x27b8; // 0x51230
		g37 = *(int32_t *)(g23 - 0x6264);
		if (a1 == 3) {
			// 0x51264
			g38 = 1;
			// branch -> 0x51288
		} else {
			// 0x5123c
			if (a1 > 3) {
				// 0x5124c
				if (a1 == 5) {
					// 0x51274
					g38 = 3;
					// branch -> 0x51288
					// 0x51288
					gmenu_call_proc(v3);
					function_35ce4();
					result = g36;
					// branch -> 0x51294
					// 0x51294
					g36 = v1;
					g10 = v2;
					return result;
				}
				// 0x51254
				if (a1 > 5) {
					// 0x5127c
					g38 = 0;
					// branch -> 0x51288
				} else {
					// 0x5126c
					g38 = 2;
					// branch -> 0x51288
				}
				// 0x51288
				gmenu_call_proc(v3);
				function_35ce4();
				result = g36;
				// branch -> 0x51294
				// 0x51294
				g36 = v1;
				g10 = v2;
				return result;
			}
			// 0x51240
			if (a1 == 1) {
				// 0x51280
				// branch -> 0x51294
				// 0x51294
				g36 = v1;
				g10 = v2;
				return 0;
			}
			// 0x5127c
			g38 = 0;
			// branch -> 0x51288
		}
		// 0x51288
		gmenu_call_proc(v3);
		function_35ce4();
		result = g36;
		// branch -> 0x51294
		// 0x51294
		g36 = v1;
		g10 = v2;
		return result;
	}
	int32_t v4 = g23 + 0x2770; // 0x511d8
	g37 = *(int32_t *)(g23 - 0x6260);
	if (a1 == 3) {
		// 0x5120c
		g38 = 2;
		// branch -> 0x51288
		// 0x51288
		gmenu_call_proc(v4);
		function_35ce4();
		result = g36;
		// branch -> 0x51294
		// 0x51294
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x511e4
	if (a1 <= 3) {
		// 0x511e8
		if (a1 == 1) {
			// 0x51204
			g38 = 0;
			// branch -> 0x51288
		} else {
			// 0x51224
			g38 = 0;
			// branch -> 0x51288
		}
		// 0x51288
		gmenu_call_proc(v4);
		function_35ce4();
		result = g36;
		// branch -> 0x51294
		// 0x51294
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x511f4
	if (a1 == 5) {
		// 0x5121c
		g38 = 4;
		// branch -> 0x51288
		// 0x51288
		gmenu_call_proc(v4);
		function_35ce4();
		result = g36;
		// branch -> 0x51294
		// 0x51294
		g36 = v1;
		g10 = v2;
		return result;
	}
	// 0x511fc
	if (a1 > 5) {
		// 0x51224
		g38 = 0;
		// branch -> 0x51288
	} else {
		// 0x51214
		g38 = 3;
		// branch -> 0x51288
	}
	// 0x51288
	gmenu_call_proc(v4);
	function_35ce4();
	result = g36;
	// branch -> 0x51294
	// 0x51294
	g36 = v1;
	g10 = v2;
	return result;
}

// Address range: 0x512ac - 0x512d8
int32_t gamemenu_off(void)
{
	// 0x512ac
	g37 = 0;
	g38 = 0;
	int32_t result = gmenu_call_proc(0); // 0x512c4
	return result;
}

// Address range: 0x512d8 - 0x5131c
int32_t gamemenu_handle_previous(int32_t a1)
{
	// 0x512d8
	g36 = a1;
	int32_t result;
	if (gmenu_exception() == 0) {
		// 0x51300
		result = gamemenu_previous(g36);
		// branch -> 0x51308
	} else {
		// 0x512f8
		result = gamemenu_off();
		// branch -> 0x51308
	}
	// 0x51308
	return result;
}

// Address range: 0x5131c - 0x51340
int32_t function_5131c(void)
{
	// 0x5131c
	return gamemenu_previous(0);
}

// Address range: 0x51340 - 0x513c0
int32_t gamemenu_new_game(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77a8);  // 0x51348
	int32_t v2 = 11;                          // r8
	int32_t v3 = 1;                           // r7
	int32_t v4 = v1 + (int32_t) "MoveWindow"; // r6
	g36 = 0;
	*(int32_t *)v1 = 11;
	*(char *)(v1 + 313) = (char)v3;
	*(int32_t *)(v1 + 0x55ec) = v2;
	*(char *)(v1 + 0x5725) = (char)v3;
	*(int32_t *)(v4 - 0x5428) = v2;
	*(char *)(v4 - 0x52ef) = (char)v3;
	*(int32_t *)(v4 + 452) = v2;
	*(char *)(v4 + 765) = (char)v3;
	*(int32_t *)*(int32_t *)(g23 - 0x75cc) = g36;
	*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
	scrollrt_draw_game_screen(1);
	*(int32_t *)*(int32_t *)(g23 - 0x75a4) = g36;
	return gamemenu_off();
}

// Address range: 0x513c0 - 0x513ec
int32_t gamemenu_quit_game(void)
{
	// 0x513c0
	gamemenu_new_game();
	int32_t result = *(int32_t *)(g23 - 0x75ac); // 0x513d0
	*(int32_t *)result = 0;
	return result;
}

// Address range: 0x513ec - 0x51494
int32_t gamemenu_load_game(void)
{
	// 0x513ec
	g35 = *(int32_t *)(g23 - 0x76bc);
	g33 = SetWindowProc(*(int32_t *)(g23 - 0x7278));
	gamemenu_off();
	g34 = 0;
	SetCursor_();
	int32_t v1 = InitDiabloMsg(10); // 0x51424
	*(int32_t *)g35 = 255;
	DrawAndBlit(v1);
	ClrDiabloMsg(LoadGame(0));
	PaletteFadeOut(8);
	int32_t v2 = *(int32_t *)(g23 - 0x75cc); // 0x51448
	*(int32_t *)v2 = 0;
	*(int32_t *)g35 = g36;
	DrawAndBlit(v2);
	PaletteFadeIn(8);
	g34 = 1;
	SetCursor_();
	interface_msg_pump();
	return SetWindowProc(g33);
}

// Address range: 0x51494 - 0x5155c
int32_t gamemenu_save_game(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7744); // 0x5149c
	g35 = *(int32_t *)(g23 - 0x76bc);
	int32_t result = v1; // 0x51558
	if (*(int32_t *)v1 == 1) {
		int32_t v2 = *(int32_t *)(g23 - 0x77ac); // 0x514c0
		int32_t v3 = *(int32_t *)(g23 - 0x77a8); // 0x514c4
		if (*(int32_t *)(0x55ec * *(int32_t *)v2 + v3) != 8) {
			// 0x514dc
			if (*(int32_t *)*(int32_t *)(g23 - 0x75cc) == 0) {
				// 0x514f4
				g33 = SetWindowProc(*(int32_t *)(g23 - 0x7278));
				g34 = 0;
				SetCursor_();
				gamemenu_off();
				int32_t v4 = InitDiabloMsg(11); // 0x51510
				*(int32_t *)g35 = 255;
				int32_t v5 = DrawAndBlit(v4); // 0x5151c
				ClrDiabloMsg(SaveGame(v5));
				*(int32_t *)g35 = g36;
				g34 = 1;
				SetCursor_();
				interface_msg_pump();
				result = SetWindowProc(g33);
				// branch -> 0x51540
				// 0x51540
				return result;
			}
		}
		// 0x514ec
		result = gamemenu_off();
		// branch -> 0x51540
	}
	// 0x51540
	return result;
}

// Address range: 0x5155c - 0x51584
int32_t gamemenu_restart_town(void)
{
	// 0x5155c
	return NetSendCmd(1, 83);
}

// Address range: 0x51584 - 0x51614
int32_t gamemenu_sound_music_toggle(int32_t *a1, int32_t a2, int32_t a3)
{
	int32_t v1 = (int32_t)a1; // r3
	int32_t result;           // 0x51610
	if (*(char *)*(int32_t *)(g23 - 0x72b0) == 0) {
		// 0x515e8
		*(int32_t *)a2 = a2 % 0x40000000;
		*(int32_t *)(a2 + 4) = *(int32_t *)(v1 + 4);
		result = v1;
		// branch -> 0x515fc
	} else {
		// 0x515b0
		*(int32_t *)a2 = a2 | -0x40000000;
		*(int32_t *)(a2 + 4) = v1;
		gmenu_slider_steps((int32_t *)a2, 17);
		result = gmenu_slider_set((int32_t *)a2, -1600, 0, a3);
		// branch -> 0x515fc
	}
	// 0x515fc
	return result;
}

// Address range: 0x51614 - 0x5163c
int32_t gamemenu_slider_music_sound(int32_t a1)
{
	// 0x51614
	g38 = 0;
	return gmenu_slider_get((int32_t *)-1600, 0);
}

// Address range: 0x5163c - 0x51670
int32_t gamemenu_get_music(void)
{
	// 0x5163c
	g34 = 1;
	int32_t v1 = sound_get_or_set_music_volume(); // 0x5164c
	return gamemenu_sound_music_toggle((int32_t *)(g23 + 0x283c), g23 + 0x27f4, v1);
}

// Address range: 0x51670 - 0x516a8
int32_t gamemenu_get_sound(int32_t a1)
{
	// 0x51670
	g34 = 1;
	int32_t v1 = sound_get_or_set_sound_volume(); // 0x51680
	return gamemenu_sound_music_toggle((int32_t *)(g23 + 0x2844), g23 + 0x2800, v1);
}

// Address range: 0x516a8 - 0x516dc
int32_t gamemenu_get_color_cycling(int32_t a1)
{
	int32_t v1 = palette_get_colour_cycling(); // 0x516b4
	*(int32_t *)(g23 + 0x281c) = *(int32_t *)(g23 + 0x284c + __asm_rlwinm(v1, 2, 29, 29));
	return g23 + 0x27f4;
}

// Address range: 0x516dc - 0x51730
int32_t gamemenu_get_gamma(int32_t a1)
{
	int32_t v1 = g36;          // 0x516dc
	int32_t v2 = g23 + 0x280c; // 0x516f0
	g36 = v2;
	gmenu_slider_steps((int32_t *)v2, 15);
	int32_t v3 = UpdateGamma(0); // 0x51704
	int32_t v4 = g36;            // 0x5170c
	g36 = v1;
	return gmenu_slider_set((int32_t *)v4, 30, 100, v3);
}

// Address range: 0x51730 - 0x51760
int32_t gamemenu_slider_gamma(void)
{
	// 0x51730
	g38 = 100;
	return gmenu_slider_get((int32_t *)(g23 + 0x280c), 30);
}

// Address range: 0x51760 - 0x5179c
int32_t gamemenu_options(void)
{
	int32_t v1 = gamemenu_get_sound(gamemenu_get_music()); // 0x51770
	gamemenu_get_color_cycling(gamemenu_get_gamma(v1));
	g37 = 0;
	g38 = 0;
	return gmenu_call_proc(g23 + 0x27f4);
}

// Address range: 0x5179c - 0x51874
int32_t gamemenu_music_volume(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x727c); // 0x517a8
	g36 = v1;
	g35 = *(int32_t *)(g23 - 0x7794);
	if (a1 != 0) {
		char *v2 = (char *)v1; // 0x517c4
		if (*v2 == 0) {
			// 0x517e8
			*v2 = 1;
			g34 = 0;
			sound_get_or_set_music_volume();
			music_start((int32_t) * (char *)g35);
			// branch -> 0x51854
		} else {
			// 0x517d0
			*v2 = 0;
			music_stop();
			g34 = -1600;
			sound_get_or_set_music_volume();
			// branch -> 0x51854
		}
		// 0x51854
		return gamemenu_get_music();
	}
	int32_t v3 = gamemenu_slider_music_sound(g23 + 0x27f4); // 0x51808
	g34 = v3;
	g33 = v3;
	sound_get_or_set_music_volume();
	char *v4 = (char *)g36; // 0x5181c
	char v5 = *v4;          // 0x5181c
	if (g33 == -1600) {
		// 0x5181c
		if (v5 != 0) {
			// 0x51828
			*v4 = 0;
			music_stop();
			// branch -> 0x51854
		}
	} else {
		// 0x51838
		if (v5 == 0) {
			// 0x51844
			*v4 = 1;
			music_start((int32_t) * (char *)g35);
			// branch -> 0x51854
		}
	}
	// 0x51854
	return gamemenu_get_music();
}

// Address range: 0x51874 - 0x5193c
int32_t gamemenu_sound_volume(int32_t a1)
{
	int32_t v1 = *(int32_t *)(g23 - 0x72b8); // 0x51880
	g36 = v1;
	int32_t v2; // 0x5191c
	if (a1 != 0) {
		char *v3 = (char *)v1; // 0x51894
		if (*v3 == 0) {
			// 0x518b8
			*v3 = 1;
			g34 = 0;
			sound_get_or_set_sound_volume();
			// branch -> 0x51918
		} else {
			// 0x518a0
			*v3 = 0;
			FreeMonsterSnd();
			g34 = -1600;
			sound_get_or_set_sound_volume();
			// branch -> 0x51918
		}
		// 0x51918
		g34 = 69;
		v2 = PlaySFX(69);
		return gamemenu_get_sound(v2);
	}
	int32_t v4 = gamemenu_slider_music_sound(g23 + 0x2800); // 0x518d4
	g34 = v4;
	g35 = v4;
	sound_get_or_set_sound_volume();
	char *v5 = (char *)g36; // 0x518e8
	char v6 = *v5;          // 0x518e8
	if (g35 == -1600) {
		// 0x518e8
		if (v6 != 0) {
			// 0x518f4
			*v5 = 0;
			FreeMonsterSnd();
			// branch -> 0x51918
		}
	} else {
		// 0x51904
		if (v6 == 0) {
			// 0x51910
			*v5 = 1;
			// branch -> 0x51918
		}
	}
	// 0x51918
	g34 = 69;
	v2 = PlaySFX(69);
	return gamemenu_get_sound(v2);
}

// Address range: 0x5193c - 0x5198c
int32_t gamemenu_gamma(int32_t a1)
{
	// 0x5193c
	int32_t v1; // 0x51974
	int32_t v2; // 0x51974
	if (a1 == 0) {
		// 0x51970
		v1 = gamemenu_slider_gamma();
		// branch -> 0x51974
		// 0x51974
		v2 = UpdateGamma(v1);
		return gamemenu_get_gamma(v2);
	}
	// 0x51950
	if (UpdateGamma(0) == 30) {
		// 0x51960
		v1 = 100;
		// branch -> 0x51974
	} else {
		// 0x51968
		v1 = 30;
		// branch -> 0x51974
	}
	// 0x51974
	v2 = UpdateGamma(v1);
	return gamemenu_get_gamma(v2);
}

// Address range: 0x5198c - 0x519cc
int32_t gamemenu_color_cycling(void)
{
	int32_t v1 = palette_get_colour_cycling();                                                 // 0x51998
	int32_t v2 = palette_set_color_cycling(__asm_rlwinm(llvm_ctlz_i32(v1, true), 27, 24, 31)); // 0x519a4
	*(int32_t *)(g23 + 0x281c) = *(int32_t *)(g23 + 0x284c + __asm_rlwinm(v2, 2, 29, 29));
	return g23 + 0x27f4;
}