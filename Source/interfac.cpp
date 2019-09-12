
void FreeInterface(void)

{
	MemFreeDbg((int **)&DAT_100f41ac);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void InitCutscene(uint uMsg)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	if (_DAT_100f41ac != 0) {
		iVar1 = 0x100f8fd0;
		MemFreeDbg((int **)&DAT_100f41ac);
	}
	if (uMsg - 0x402 < 10) {
		// WARNING: Could not recover jumptable at 0x100449d8. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(iVar1 + 0x355c + (uMsg - 0x402) * 4))();
		return;
	}
	app_fatal(*(char **)(iVar1 + -0x61ac));
	*(undefined4 *)(iVar1 + -0x4e28) = 0;
	return;
}

// WARNING: Removing unreachable block (ram,0x10044fa0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawProgress(int screen_x, int screen_y, int progress_id)

{
	longlong lVar1;
	undefined *puVar2;
	undefined *puVar3;

	puVar3 = (undefined *)(progress_id + 0x100f419c);
	puVar2 = (undefined *)(_DAT_101271e4 + *(int *)(&DAT_1019ed80 + screen_y * 4) + screen_x);
	*puVar2 = *puVar3;
	puVar2[0x300] = *puVar3;
	puVar2[0x600] = *puVar3;
	puVar2[0x900] = *puVar3;
	puVar2[0xc00] = *puVar3;
	puVar2[0xf00] = *puVar3;
	puVar2[0x1200] = *puVar3;
	puVar2[0x1500] = *puVar3;
	puVar2[0x1800] = *puVar3;
	puVar2[0x1b00] = *puVar3;
	puVar2[0x1e00] = *puVar3;
	puVar2[0x2100] = *puVar3;
	puVar2[0x2400] = *puVar3;
	puVar2[0x2700] = *puVar3;
	puVar2[0x2a00] = *puVar3;
	puVar2[0x2d00] = *puVar3;
	puVar2 = puVar2 + 0x3000;
	lVar1 = 6;
	do {
		*puVar2 = *puVar3;
		puVar2 = puVar2 + 0x300;
		lVar1 = lVar1 + -1;
	} while (lVar1 != 0);
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void DrawCutscene(void)

{
	int iVar1;
	undefined8 uVar2;
	int iVar3;
	uint uVar4;

	uVar2 = 0x100f8fd0;
	lock_buf('\x01');
	CelDecodeOnly(0x40, 0x27f, *(BYTE **)((int)uVar2 + -0x4e24), 1, 0x280);
	uVar4 = 0;
	while (iVar3 = (int)uVar2, uVar4 < *(uint *)(iVar3 + -0x4e28)) {
		iVar1 = *(int *)(iVar3 + -0x4e2c) * 8;
		DrawProgress(*(int *)(&DAT_100fc554 + iVar1) + uVar4 + 0x40, *(int *)(iVar1 + 0x100fc558) + 0xa0,
		    *(int *)(iVar3 + -0x4e2c));
		uVar4 = uVar4 + 1;
	}
	unlock_buf('\x01');
	**(undefined4 **)(iVar3 + -0x76bc) = 0xff;
	scrollrt_draw_game_screen(0);
	return;
}

void interface_msg_pump(void)

{
	undefined *puVar1;
	char cVar2;
	int iVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;

	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x60);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	while (true) {
		cVar2 = (char)(ZEXT48(register0x0000000c) - 0x60);
		uVar4 = 0;
		uVar5 = 0;
		uVar6 = 0;
		uVar7 = 1;
		iVar3 = PeekMessage(
		    cVar2 + '8', 0, 0, 0, 1, in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		if (iVar3 == 0)
			break;
		if (*(int *)(puVar1 + 0x3c) != 0x12) {
			TranslateMessage(puVar1 + 0x38, *puVar1);
			DispatchMessage(cVar2 + '8', uVar4, uVar5, uVar6, uVar7, in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf],
			    *(undefined4 *)(puVar1 + 0x14));
		}
	}
	return;
}

BOOL IncProgress(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	interface_msg_pump();
	*(int *)(iVar1 + -0x4e28) = *(int *)(iVar1 + -0x4e28) + 0xf;
	if (0x216 < *(uint *)(iVar1 + -0x4e28)) {
		*(undefined4 *)(iVar1 + -0x4e28) = 0x216;
	}
	if (*(int *)(iVar1 + -0x4e24) != 0) {
		DrawCutscene();
	}
	return (BOOL)(-((uint)(*(uint *)(iVar1 + -0x4e28) < 0x216) - 1) & 0xff);
}

void ShowProgress(uint uMsg)

{
	int iVar1;
	WNDPROC *pWVar2;

	iVar1 = 0x100f8fd0;
	DAT_1017de90 = '\0';
	plrmsg_delay(1);
	pWVar2 = SetWindowProc(*(WNDPROC **)(iVar1 + -0x7278));
	interface_msg_pump();
	ClearScreenBuffer();
	scrollrt_draw_game_screen(1);
	InitCutscene(uMsg);
	BlackPalette();
	DrawCutscene();
	PaletteFadeIn(8);
	IncProgress();
	stream_update();
	IncProgress();
	if (uMsg - 0x402 < 10) {
		// WARNING: Could not recover jumptable at 0x100451d8. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(iVar1 + 0x359c + (uMsg - 0x402) * 4))();
		return;
	}
	PaletteFadeOut(8);
	FreeInterface();
	SetWindowProc(pWVar2);
	iVar1 = myplr * 0x55ec;
	NetSendCmdLocParam1(1, '5', (BYTE) * (undefined4 *)((int)plr + iVar1 + 0x38),
	    (BYTE) * (undefined4 *)((int)plr + iVar1 + 0x3c), (WORD) * (undefined4 *)((int)plr + iVar1 + 0x34));
	plrmsg_delay(0);
	ResetPal();
	if ((DAT_1017de90 != '\0') && (*(int *)((int)plr + myplr * 0x55ec + 0x34) == 0x10)) {
		PrepDoEnding();
	}
	DAT_1017de90 = 0;
	return;
}

void ShowProgress(uint uMsg)

{
	int iVar1;
	char *unaff_r24;
	WNDPROC *unaff_r25;
	undefined *unaff_r26;
	char *unaff_r27;
	int *unaff_r28;
	int unaff_r29;
	byte *unaff_r30;
	int unaff_r31;

	IncProgress();
	if (*unaff_r24 == '\x01') {
		SaveLevel();
	} else {
		DeltaSaveLevel();
	}
	FreeGameMem();
	*unaff_r30 = *unaff_r30 + 1;
	*unaff_r26 = (char)*(undefined4 *)(unaff_r31 + (uint)*unaff_r30 * 4);
	IncProgress();
	LoadGameLevel(0, 0);
	IncProgress();
	PaletteFadeOut(8);
	FreeInterface();
	SetWindowProc(unaff_r25);
	iVar1 = unaff_r29 + *unaff_r28 * 0x55ec;
	NetSendCmdLocParam1(1, '5', (BYTE) * (undefined4 *)(iVar1 + 0x38), (BYTE) * (undefined4 *)(iVar1 + 0x3c),
	    (WORD) * (undefined4 *)(unaff_r29 + 0x34 + *unaff_r28 * 0x55ec));
	plrmsg_delay(0);
	ResetPal();
	if ((*unaff_r27 != '\0') && (*(int *)(unaff_r29 + 0x34 + *unaff_r28 * 0x55ec) == 0x10)) {
		PrepDoEnding();
	}
	*unaff_r27 = '\0';
	return;
}