
// Address range: 0x552f8 - 0x5531c
int32_t FreeInterface(int32_t a1)
{
	int32_t result = MemFreeDbg((int32_t *)(g23 - 0x4e24)); // 0x55308
	return result;
}

// Address range: 0x5531c - 0x558b4
int32_t InitCutscene(int32_t a1)
{
	// 0x5531c
	g21 = *(int32_t *)(g23 - 0x6194);
	g22 = *(int32_t *)(g23 - 0x77e0);
	g24 = *(int32_t *)(g23 - 0x6188);
	g25 = *(int32_t *)(g23 - 0x6184);
	g26 = *(int32_t *)(g23 - 0x6180);
	g29 = *(int32_t *)(g23 - 0x6174);
	g33 = *(int32_t *)(g23 - 0x6164);
	g35 = *(int32_t *)(g23 - 0x77e4);
	g36 = *(int32_t *)(g23 - 0x71f8);
	int32_t *v1 = (int32_t *)(g23 - 0x4e24); // 0x55374
	int32_t v2 = g23;                        // 0x55890
	if (*v1 != 0) {
		// 0x55380
		MemFreeDbg(v1);
		v2 = g23;
		// branch -> 0x55388
	}
	uint32_t v3 = a1 - 1026; // 0x55388
	if (v3 <= 9) {
		// 0x55394
		return *(int32_t *)(4 * v3 + v2 + 0x355c);
	}
	int32_t result = app_fatal(*(int32_t *)(v2 - 0x61ac)); // r3
	*(int32_t *)(g23 - 0x4e28) = 0;
	return result;
}

// Address range: 0x558b4 - 0x55984
int32_t DrawProgress(int32_t a1, int32_t a2, int32_t a3)
{
	int32_t v1 = *(int32_t *)(*(int32_t *)(g23 - 0x7698) + 4 * a2); // 0x558c4
	int32_t v2 = g23 - 0x4e34 + a3;                                 // 0x558c8
	int32_t v3 = *(int32_t *)*(int32_t *)(g23 - 0x7804) + v1 + a1;  // 0x558d8
	int32_t v4 = v3;                                                // r3
	*(char *)v3 = *(char *)v2;
	g37 = 16;
	*(char *)(v4 + 768) = *(char *)v2;
	*(char *)(v4 + 1536) = *(char *)v2;
	*(char *)(v4 + 2304) = *(char *)v2;
	*(char *)(v4 + 3072) = *(char *)v2;
	*(char *)(v4 + 3840) = *(char *)v2;
	*(char *)(v4 + 0x1200) = *(char *)v2;
	*(char *)(v4 + 0x1500) = *(char *)v2;
	*(char *)(v4 + 0x1800) = *(char *)v2;
	*(char *)(v4 + 0x1b00) = *(char *)v2;
	*(char *)(v4 + 0x1e00) = *(char *)v2;
	*(char *)(v4 + 0x2100) = *(char *)v2;
	*(char *)(v4 + 0x2400) = *(char *)v2;
	*(char *)(v4 + 0x2700) = *(char *)v2;
	*(char *)(v4 + 0x2a00) = *(char *)v2;
	*(char *)(v4 + 0x2d00) = *(char *)v2;
	int32_t result = v4 + 0x3000; // 0x5595c
	int32_t v5 = g37;             // 0x55960
	if (v5 > 21) {
		// 0x55980
		return result;
	}
	*(char *)result = *(char *)v2;
	int32_t result2 = result + 768; // 0x55978
	int32_t v6 = 21 - v5;           // 0x5597c
	while (v6 != 0) {
		// 0x55970
		*(char *)result2 = *(char *)v2;
		result2 += 768;
		v6--;
		// continue -> 0x55970
	}
	// 0x55980
	return result2;
}

// Address range: 0x5598c - 0x55a34
int32_t DrawCutscene(void)
{
	int32_t v1 = g36; // 0x5598c
	int32_t v2 = g10; // 0x55990
	int32_t v3 = g35; // 0x5599c
	lock_buf(1);
	CelDecodeOnly(64, 639, *(int32_t *)(g23 - 0x4e24), 1, 640);
	g35 = 0;
	int32_t result; // 0x55a18
	if (*(int32_t *)(g23 - 0x4e28) == 0) {
		// 0x55a00
		unlock_buf(1);
		*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
		result = scrollrt_draw_game_screen(0);
		g36 = v1;
		g10 = v2;
		g35 = v3;
		return result;
	}
	int32_t v4 = *(int32_t *)(g23 - 0x4e2c);  // 0x559cc
	int32_t v5 = 8 * v4;                      // 0x559d0
	int32_t v6 = g36;                         // 0x559d8
	int32_t v7 = *(int32_t *)(v6 + (v5 | 4)); // 0x559dc
	DrawProgress(64 + *(int32_t *)(v6 + v5), v7 + 160, v4);
	int32_t v8 = g35 + 1; // 0x559f0
	g35 = v8;
	while (v8 < *(int32_t *)(g23 - 0x4e28)) {
		// 0x559cc
		v4 = *(int32_t *)(g23 - 0x4e2c);
		v5 = 8 * v4;
		v6 = g36;
		v7 = *(int32_t *)(v6 + (v5 | 4));
		DrawProgress(v8 + 64 + *(int32_t *)(v6 + v5), v7 + 160, v4);
		v8 = g35 + 1;
		g35 = v8;
		// continue -> 0x559cc
	}
	// 0x55a00
	unlock_buf(1);
	*(int32_t *)*(int32_t *)(g23 - 0x76bc) = 255;
	result = scrollrt_draw_game_screen(0);
	g36 = v1;
	g10 = v2;
	g35 = v3;
	return result;
}

// Address range: 0x55a34 - 0x55a9c
int32_t interface_msg_pump(void)
{
	// 0x55a34
	int32_t v1;       // bp-40
	int32_t v2 = &v1; // 0x55a68
	// branch -> 0x55a68
	while (true) {
	lab_0x55a68:
		// 0x55a68
		g34 = v2;
		if (PeekMessage(v2, 0, 0, 0, 1) == 0) {
			// 0x55a8c
			return 0;
		}
		// 0x55a44
		int32_t v3;
		if (v3 != 18) {
			// break -> 0x55a50
			break;
		}
		// continue -> 0x55a68
	}
	// 0x55a50
	g34 = v2;
	TranslateMessage(v2);
	g34 = v2;
	DispatchMessage(v2);
	// branch -> 0x55a68
	goto lab_0x55a68;
}

// Address range: 0x55a9c - 0x55b04
int32_t IncProgress(int32_t a1)
{
	// 0x55a9c
	interface_msg_pump();
	int32_t *v1 = (int32_t *)(g23 - 0x4e28); // 0x55aac
	*v1 = *v1 + 15;
	int32_t *v2 = (int32_t *)(g23 - 0x4e28); // 0x55ab8
	int32_t v3 = g23;                        // 0x55acc
	if (*v2 >= 535) {
		// 0x55ac4
		*v2 = 534;
		v3 = g23;
		// branch -> 0x55acc
	}
	// 0x55acc
	int32_t v4; // 0x55adc
	if (*(int32_t *)(v3 - 0x4e24) != 0) {
		// 0x55ad8
		DrawCutscene();
		v4 = g23;
		// branch -> 0x55adc
	} else {
		v4 = v3;
	}
	// 0x55adc
	return *(int32_t *)(v4 - 0x4e28) > 533;
}

// Address range: 0x55b04 - 0x55ef8
int32_t ShowProgress(int32_t a1)
{
	int32_t v1 = g10; // 0x55b08
	g26 = a1;
	g33 = *(int32_t *)(g23 - 0x77a8);
	g35 = *(int32_t *)(g23 - 0x77e4);
	g36 = *(int32_t *)(g23 - 0x71f8);
	*(char *)*(int32_t *)(g23 - 0x71fc) = 0;
	plrmsg_delay(1);
	SetWindowProc(*(int32_t *)(g23 - 0x7278));
	ClearScreenBuffer(interface_msg_pump());
	scrollrt_draw_game_screen(1);
	BlackPalette(InitCutscene(g26));
	DrawCutscene();
	int32_t v2 = IncProgress(PaletteFadeIn(8)); // 0x55b7c
	IncProgress(stream_update(v2));
	uint32_t v3 = g26 - 1026; // 0x55b88
	if (v3 <= 9) {
		// 0x55b94
		return *(int32_t *)(g23 + 0x359c + 4 * v3);
	}
	// 0x55e64
	FreeInterface(PaletteFadeOut(8));
	SetWindowProc(g29);
	int32_t v4 = g33; // 0x55e7c
	g27 = v4 + 52;
	int32_t v5 = v4 + 0x55ec * *(int32_t *)g32; // 0x55e88
	uint32_t v6 = *(int32_t *)(v5 + 60);        // 0x55e98
	NetSendCmdLocParam1(1, 53, *(int32_t *)(v5 + 56) % 256, v6 % 256);
	int32_t result = ResetPal(plrmsg_delay(0)); // r3
	if (*(char *)g31 == 0) {
		// 0x55edc
		*(char *)g31 = 0;
		g10 = v1;
		return result;
	}
	// 0x55ec4
	if (*(int32_t *)(g27 + 0x55ec * *(int32_t *)g32) == 16) {
		// 0x55ed8
		result = PrepDoEnding();
		// branch -> 0x55edc
	}
	// 0x55edc
	*(char *)g31 = 0;
	g10 = v1;
	return result;
}
