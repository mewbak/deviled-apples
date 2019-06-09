
// Address range: 0x6c14c - 0x6c1b8
int32_t mainmenu_refresh_music(void)
{
	// 0x6c14c
	if (*(char *)(g23 - 0x4dec) == 0) {
		// 0x6c164
		*(int32_t *)(g23 - 0x4de8) = 5;
		*(char *)(g23 - 0x4dec) = (char)1;
		// branch -> 0x6c174
	}
	// 0x6c174
	music_start(*(int32_t *)(g23 - 0x4de8));
	int32_t result = 0; // r3
	int32_t v1 = g23;   // 0x6c188
	// branch -> 0x6c180
	while (true) {
		int32_t *v2 = (int32_t *)(v1 - 0x4de8); // 0x6c180
		*v2 = *v2 + 1;
		int32_t *v3 = (int32_t *)(g23 - 0x4de8); // 0x6c18c
		int32_t v4 = g23;                        // 0x6c19c
		if (*v3 == 6) {
			// 0x6c198
			*v3 = result;
			v4 = g23;
			// branch -> 0x6c19c
		}
		// 0x6c19c
		if ((*(int32_t *)(v4 - 0x4de8) || 1) != 1) {
			// break -> 0x6c1a8
			break;
		}
		v1 = v4;
		// continue -> 0x6c180
	}
	// 0x6c1a8
	return result;
}

// Address range: 0x6c1b8 - 0x6c228
int32_t mainmenu_init_menu(int32_t a1, int32_t a2)
{
	int32_t v1 = g36; // 0x6c1b8
	if (a1 == 4) {
		// 0x6c214
		g36 = v1;
		return 1;
	}
	// 0x6c1dc
	music_stop();
	int32_t v2 = StartGame((int32_t)(a1 != 2), (int32_t)(a1 != 3)); // 0x6c200
	g36 = v2;
	int32_t result;
	if (v2 != 0) {
		// 0x6c20c
		mainmenu_refresh_music();
		result = g36;
		// branch -> 0x6c214
	} else {
		result = 0;
	}
	// 0x6c214
	g36 = v1;
	return result;
}

// Address range: 0x6c228 - 0x6c290
int32_t mainmenu_create_hero(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)
{
	g36 = a6;
	g35 = a5;
	int32_t result;
	if (UiValidPlayerName(a6) != 0) {
		// 0x6c26c
		result = pfile_create_save_file(g35, g36);
		// branch -> 0x6c278
	} else {
		result = 0;
	}
	// 0x6c278
	return result;
}

// Address range: 0x6c290 - 0x6c428
int32_t mainmenu_select_hero_dialog(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t *a9)
{
	int32_t v1 = *(int32_t *)(g23 - 0x7128); // 0x6c2a0
	int32_t v2;
	int32_t v3 = &v2;                        // 0x6c2bc
	int32_t v4 = *(int32_t *)(g23 - 0x7124); // 0x6c2dc
	int32_t v5 = 1;                          // bp-36
	int32_t v6 = *(int32_t *)(g23 - 0x7120); // 0x6c2e4
	int32_t v7 = 0;                          // bp-40
	int32_t v8 = *(int32_t *)(g23 - 0x711c); // 0x6c2ec
	int32_t v9 = *(int32_t *)(g23 - 0x7118); // 0x6c2f4
	int32_t v10;                             // 0x6c390
	int32_t v11;                             // 0x6c3b4
	int32_t v12;                             // 0x6c3d8
	int32_t v13;                             // 0x6c3ec
	int32_t v14;                             // 0x6c3f4
	int32_t v15;                             // 0x6c3a4
	int32_t v16;                             // 0x6c3b4
	int32_t v17;                             // 0x6c3b8
	if (*(char *)*(int32_t *)(g23 - 0x77f0) != 1) {
		int32_t v18 = function_20e9c(v9, v8, v6, v4, &v7, (int32_t)&v5, v1, v3); // 0x6c350
		if (v18 == 0) {
			// 0x6c35c
			app_fatal(*(int32_t *)(g23 - 0x5f5c));
			// branch -> 0x6c364
		}
		// 0x6c364
		if (v7 == 4) {
			// 0x6c370
			g34 = 1223;
			function_ec148(1223);
			// branch -> 0x6c414
			// 0x6c414
			return 0;
		}
		// 0x6c384
		function_a12a4(g31, g32);
		v10 = g33;
		if (v10 == 0) {
			// 0x6c3ec
			v13 = g29;
			if (v13 == 0) {
				// 0x6c414
				return 1;
			}
			// 0x6c3f4
			v14 = g30;
			if (v14 != 0) {
				// 0x6c3fc
				g34 = v13;
				SStrCopy(v13, g36, v14);
				// branch -> 0x6c414
			}
			// 0x6c414
			return 1;
		}
		// 0x6c398
		v15 = v5;
		if (g28 == 0x424e4554) {
			// 0x6c3a4
			v12 = 1;
			if (v15 == 0) {
				// 0x6c3b4
				v11 = g23;
				v16 = *(int32_t *)(v11 - 0x77ac);
				v17 = *(int32_t *)(v11 - 0x77a8);
				if (*(char *)(0x55ec * *(int32_t *)v16 + v17 + 0x5593) != 0) {
					// 0x6c3d4
					v12 = 0;
					// branch -> 0x6c3d8
				} else {
					v12 = 1;
				}
			}
			// 0x6c3d8
			*(int32_t *)v10 = v12;
			// branch -> 0x6c3ec
		} else {
			// 0x6c3e4
			*(int32_t *)v10 = v15;
			// branch -> 0x6c3ec
		}
		// 0x6c3ec
		v13 = g29;
		if (v13 == 0) {
			// 0x6c414
			return 1;
		}
		// 0x6c3f4
		v14 = g30;
		if (v14 != 0) {
			// 0x6c3fc
			g34 = v13;
			SStrCopy(v13, g36, v14);
			// branch -> 0x6c414
		}
		// 0x6c414
		return 1;
	}
	int32_t v19 = *(int32_t *)(g23 - 0x7184); // 0x6c300
	if (function_20f64(v9, v8, v6, v4, &v7, v1, v19, v3) == 0) {
		// 0x6c318
		app_fatal(*(int32_t *)(g23 - 0x5f58));
		// branch -> 0x6c320
	}
	// 0x6c320
	if (v7 == 2) {
		// 0x6c32c
		*(int32_t *)g35 = 1;
		// branch -> 0x6c364
	} else {
		// 0x6c338
		*(int32_t *)g35 = 0;
		// branch -> 0x6c364
	}
	// 0x6c364
	int32_t result;
	if (v7 == 4) {
		// 0x6c370
		g34 = 1223;
		function_ec148(1223);
		result = 0;
		// branch -> 0x6c414
	} else {
		// 0x6c384
		function_a12a4(g31, g32);
		v10 = g33;
		if (v10 != 0) {
			// 0x6c398
			v15 = v5;
			if (g28 == 0x424e4554) {
				// 0x6c3a4
				v12 = 1;
				if (v15 == 0) {
					// 0x6c3b4
					v11 = g23;
					v16 = *(int32_t *)(v11 - 0x77ac);
					v17 = *(int32_t *)(v11 - 0x77a8);
					if (*(char *)(0x55ec * *(int32_t *)v16 + v17 + 0x5593) != 0) {
						// 0x6c3d4
						v12 = 0;
						// branch -> 0x6c3d8
					} else {
						v12 = 1;
					}
				}
				// 0x6c3d8
				*(int32_t *)v10 = v12;
				// branch -> 0x6c3ec
			} else {
				// 0x6c3e4
				*(int32_t *)v10 = v15;
				// branch -> 0x6c3ec
			}
			// 0x6c3ec
			v13 = g29;
			if (v13 == 0) {
				// 0x6c414
				return 1;
			}
			// 0x6c3f4
			v14 = g30;
			if (v14 != 0) {
				// 0x6c3fc
				g34 = v13;
				SStrCopy(v13, g36, v14);
				// branch -> 0x6c414
			}
			// 0x6c414
			return 1;
		}
		// 0x6c3ec
		v13 = g29;
		if (v13 != 0) {
			// 0x6c3f4
			v14 = g30;
			if (v14 != 0) {
				// 0x6c3fc
				g34 = v13;
				SStrCopy(v13, g36, v14);
				result = 1;
				// branch -> 0x6c414
			} else {
				result = 1;
			}
		} else {
			result = 1;
		}
	}
	// 0x6c414
	return result;
}

// Address range: 0x6c428 - 0x6c458
int32_t mainmenu_single_player(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77f0); // 0x6c42c
	*(char *)v1 = 1;
	int32_t result = mainmenu_init_menu(1, v1); // 0x6c444
	return result;
}

// Address range: 0x6c458 - 0x6c488
int32_t mainmenu_multi_player(void)
{
	int32_t v1 = *(int32_t *)(g23 - 0x77f0); // 0x6c45c
	*(char *)v1 = 4;
	int32_t result = mainmenu_init_menu(3, v1); // 0x6c474
	return result;
}

// Address range: 0x6c488 - 0x6c4b8
int32_t mainmenu_play_intro(void)
{
	// 0x6c488
	music_stop();
	play_movie(*(int32_t *)(g23 - 0x5f60), 1);
	int32_t result = mainmenu_refresh_music(); // 0x6c4a4
	return result;
}

// Address range: 0x6c4b8 - 0x6c5b4
int32_t mainmenu_loop(void)
{
	// 0x6c4b8
	g32 = *(int32_t *)(g23 - 0x7210);
	g33 = *(int32_t *)(g23 - 0x5f64);
	g35 = *(int32_t *)(g23 - 0x712c);
	g36 = g23 + 0x3356;
	mainmenu_refresh_music();
	g31 = 0;
	// branch -> 0x6c4e4
	while (true) {
		int32_t v1 = 0; // bp-40
		if (function_1a3bc(g36, &v1, g35, 30) == 0) {
			// 0x6c508
			app_fatal(g33);
			// branch -> 0x6c510
		}
		int32_t v2;
		if (v1 == 4) {
			// 0x6c584
			// branch -> 0x6c594
		} else {
			// 0x6c51c
			if (v1 > 4) {
				// 0x6c538
				if (v1 == 6) {
				lab_0x6c570:
					// 0x6c570
					if (*(int32_t *)g32 != 0) {
						// 0x6c57c
						mainmenu_play_intro();
						// branch -> 0x6c594
					}
				} else {
					// 0x6c540
					if (v1 <= 6) {
						// 0x6c590
						g31 = 1;
						v2 = 1;
						// branch -> 0x6c594
					lab_0x6c594_9:
						// 0x6c594
						if (v2 != 0) {
							// break -> 0x6c59c
							break;
						}
						// continue -> 0x6c4e4
						continue;
					}
				}
			lab_0x6c594_5:
				// 0x6c594
				v2 = g31;
				// branch -> 0x6c594
				goto lab_0x6c594_9;
			} else {
				// 0x6c520
				if (v1 == 2) {
					// 0x6c55c
					if (mainmenu_multi_player() != 0) {
						goto lab_0x6c594_5;
					}
					// 0x6c568
					g31 = 1;
					v2 = 1;
					// branch -> 0x6c594
					goto lab_0x6c594_9;
				} else {
					// 0x6c528
					if (v1 > 2) {
						goto lab_0x6c570;
					}
					// 0x6c52c
					if (v1 <= 0) {
						goto lab_0x6c594_5;
					}
					// 0x6c548
					if (mainmenu_single_player() != 0) {
						goto lab_0x6c594_5;
					}
					// 0x6c554
					g31 = 1;
					v2 = 1;
					// branch -> 0x6c594
					goto lab_0x6c594_9;
				}
			}
		}
		// 0x6c594
		v2 = g31;
		// branch -> 0x6c594
		goto lab_0x6c594_9;
	}
	int32_t result = music_stop(); // 0x6c59c
	return result;
}
