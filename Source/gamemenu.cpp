
void gamemenu_enable_single(TMenuItem *pMenuItems)

{
	int iVar1;
	BOOL enable;

	iVar1 = 0x100f8fd0;
	gmenu_enable(sgSingleMenu + 3, _DAT_10186eb0);
	enable = 0;
	if ((*(int *)(*(int *)(iVar1 + -0x77a8) + **(int **)(iVar1 + -0x77ac) * 0x55ec) != 8) && (**(int **)(iVar1 + -0x75cc) == 0)) {
		enable = 1;
	}
	gmenu_enable(sgSingleMenu, enable);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gamemenu_enable_multi(TMenuItem *pMenuItems)

{
	gmenu_enable(sgMultiMenu + 2, _DAT_10186eb4);
	return;
}

void gamemenu_previous(void)

{
	bool bVar1;
	TMenuItem *pItem;
	int in_r3;
	undefined **gmFunc;

	bVar1 = true;
	if (gbMaxPlayers == '\x01') {
		pItem = sgSingleMenu;
		gmFunc = &PTR_gamemenu_enable_single_100f4920;
	} else {
		pItem = sgMultiMenu;
		gmFunc = &PTR_gamemenu_enable_multi_100f4918;
		if (((in_r3 != 3) && (in_r3 < 3)) && (in_r3 == 1)) {
			bVar1 = false;
		}
	}
	if (bVar1) {
		gmenu_call_proc(pItem, (gmFunc *)gmFunc);
		PressEscKey();
	}
	return;
}

void gamemenu_off(void)

{
	gmenu_call_proc((TMenuItem *)0x0, (gmFunc *)0x0);
	return;
}

void gamemenu_handle_previous(void)

{
	BOOL BVar1;

	BVar1 = gmenu_exception();
	if (BVar1 == 0) {
		gamemenu_previous();
	} else {
		gamemenu_off();
	}
	return;
}

void j_gamemenu_previous(BOOL bActivate)

{
	gamemenu_previous();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gamemenu_new_game(BOOL bActivate)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	plr[0]._pmode = 0xb;
	plr[0]._pInvincible = true;
	plr[1]._284_4_ = 0xb;
	plr[1]._pWAnim[5]._1_1_ = 1;
	plr[2]._pNFrames = 0xb;
	plr[2]._pBFrames._1_1_ = 1;
	plr[3]._pBAnim[1] = &DAT_0000000b;
	plr[3].InvBody[0]._iPLLR._1_1_ = 1;
	_DAT_10186eb4 = 0;
	_drawpanflag = 0xff;
	scrollrt_draw_game_screen(1);
	**(undefined4 **)(iVar1 + -0x75a4) = 0;
	gamemenu_off();
	return;
}

void gamemenu_quit_game(BOOL bActivate)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	gamemenu_new_game(bActivate);
	**(undefined4 **)(iVar1 + -0x75ac) = 0;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gamemenu_load_game(BOOL bActivate)

{
	int iVar1;
	WNDPROC *pWVar2;

	iVar1 = 0x100f8fd0;
	pWVar2 = SetWindowProc((WNDPROC *)&PTR_DisableInputWndProc_100f48e8);
	gamemenu_off();
	SetCursor_(0);
	InitDiabloMsg('\n');
	_drawpanflag = 0xff;
	DrawAndBlit();
	LoadGame(0);
	ClrDiabloMsg();
	PaletteFadeOut(8);
	**(undefined4 **)(iVar1 + -0x75cc) = 0;
	_drawpanflag = 0xff;
	DrawAndBlit();
	PaletteFadeIn(8);
	SetCursor_(1);
	interface_msg_pump();
	SetWindowProc(pWVar2);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void gamemenu_save_game(BOOL bActivate)

{
	WNDPROC *pWVar1;

	if (_DAT_1012861c == 1) {
		if ((((PlayerStruct *)((int)plr + myplr * 0x55ec))->_pmode == 8) || (_DAT_10186eb4 != 0)) {
			gamemenu_off();
		} else {
			pWVar1 = SetWindowProc((WNDPROC *)&PTR_DisableInputWndProc_100f48e8);
			SetCursor_(0);
			gamemenu_off();
			InitDiabloMsg('\v');
			_drawpanflag = 0xff;
			DrawAndBlit();
			SaveGame();
			ClrDiabloMsg();
			_drawpanflag = 0xff;
			SetCursor_(1);
			interface_msg_pump();
			SetWindowProc(pWVar1);
		}
	}
	return;
}

void gamemenu_restart_town(BOOL bActivate)

{
	NetSendCmd(1, 'S');
	return;
}

void gamemenu_sound_music_toggle(char **names, TMenuItem *menu_item, int gamma)

{
	if (DAT_1019fed0 == '\0') {
		menu_item->dwFlags = menu_item->dwFlags & 0x3fffffff;
		menu_item->pszStr = names[1];
	} else {
		menu_item->dwFlags = menu_item->dwFlags | 0xc0000000;
		menu_item->pszStr = *names;
		gmenu_slider_steps(menu_item, 0x11);
		gmenu_slider_set(menu_item, -0x640, 0, gamma);
	}
	return;
}

int gamemenu_slider_music_sound(TMenuItem *menu_item)

{
	int iVar1;

	iVar1 = gmenu_slider_get(menu_item, -0x640, 0);
	return iVar1;
}

void gamemenu_get_music(void)

{
	int iVar1;
	int gamma;

	iVar1 = 0x100f8fd0;
	gamma = sound_get_or_set_music_volume(1);
	gamemenu_sound_music_toggle((char **)(iVar1 + 0x283c), (TMenuItem *)(iVar1 + 0x27f4), gamma);
	return;
}

void gamemenu_get_sound(void)

{
	int iVar1;
	int gamma;

	iVar1 = 0x100f8fd0;
	gamma = sound_get_or_set_sound_volume(1);
	gamemenu_sound_music_toggle((char **)(iVar1 + 0x2844), (TMenuItem *)(iVar1 + 0x2800), gamma);
	return;
}

void gamemenu_get_color_cycling(void)

{
	int iVar1;
	uint uVar2;

	iVar1 = 0x100f8fd0;
	uVar2 = palette_get_colour_cycling();
	*(undefined4 *)(iVar1 + 0x281c) = *(undefined4 *)(iVar1 + 0x284c + (uVar2 & 1) * 4);
	return;
}

void gamemenu_get_gamma(void)

{
	int gamma;

	gmenu_slider_steps(sgOptionsMenu + 2, 0xf);
	gamma = UpdateGamma(0);
	gmenu_slider_set(sgOptionsMenu + 2, 0x1e, 100, gamma);
	return;
}

int gamemenu_slider_gamma(void)

{
	int iVar1;

	iVar1 = gmenu_slider_get(sgOptionsMenu + 2, 0x1e, 100);
	return iVar1;
}

void gamemenu_options(BOOL bActivate)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	gamemenu_get_music();
	gamemenu_get_sound();
	gamemenu_get_gamma();
	gamemenu_get_color_cycling();
	gmenu_call_proc((TMenuItem *)(iVar1 + 0x27f4), (gmFunc *)0x0);
	return;
}

void gamemenu_music_volume(BOOL bActivate)

{
	int volume;

	if (bActivate == 0) {
		volume = gamemenu_slider_music_sound(sgOptionsMenu);
		sound_get_or_set_music_volume(volume);
		if (volume == -0x640) {
			if (DAT_1010ef60 != '\0') {
				DAT_1010ef60 = '\0';
				music_stop();
			}
		} else {
			if (DAT_1010ef60 == '\0') {
				DAT_1010ef60 = '\x01';
				music_start((uint)leveltype);
			}
		}
	} else {
		if (DAT_1010ef60 == '\0') {
			DAT_1010ef60 = '\x01';
			sound_get_or_set_music_volume(0);
			music_start((uint)leveltype);
		} else {
			DAT_1010ef60 = '\0';
			music_stop();
			sound_get_or_set_music_volume(-0x640);
		}
	}
	gamemenu_get_music();
	return;
}

void gamemenu_sound_volume(BOOL bActivate)

{
	int volume;

	if (bActivate == 0) {
		volume = gamemenu_slider_music_sound(sgOptionsMenu + 1);
		sound_get_or_set_sound_volume(volume);
		if (volume == -0x640) {
			if (DAT_1010ef61 != '\0') {
				DAT_1010ef61 = '\0';
				FreeMonsterSnd();
			}
		} else {
			if (DAT_1010ef61 == '\0') {
				DAT_1010ef61 = '\x01';
			}
		}
	} else {
		if (DAT_1010ef61 == '\0') {
			DAT_1010ef61 = '\x01';
			sound_get_or_set_sound_volume(0);
		} else {
			DAT_1010ef61 = '\0';
			FreeMonsterSnd();
			sound_get_or_set_sound_volume(-0x640);
		}
	}
	PlaySFX(0x45);
	gamemenu_get_sound();
	return;
}

void gamemenu_gamma(BOOL bActivate)

{
	int gamma;

	if (bActivate == 0) {
		gamma = gamemenu_slider_gamma();
	} else {
		gamma = UpdateGamma(0);
		if (gamma == 0x1e) {
			gamma = 100;
		} else {
			gamma = 0x1e;
		}
	}
	UpdateGamma(gamma);
	gamemenu_get_gamma();
	return;
}

void gamemenu_color_cycling(BOOL bActivate)

{
	undefined8 uVar1;
	int iVar2;
	BOOL BVar3;
	uint uVar4;

	iVar2 = 0x100f8fd0;
	BVar3 = palette_get_colour_cycling();
	uVar1 = countLeadingZeros(BVar3);
	uVar4 = palette_set_color_cycling((uint)uVar1 >> 5 & 0xff);
	*(undefined4 *)(iVar2 + 0x281c) = *(undefined4 *)(iVar2 + 0x284c + (uVar4 & 1) * 4);
	return;
}