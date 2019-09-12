
void FreeInterface(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	mem_free_dbg((int **)&DAT_100f41ac, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	return;
}

void InitCutscene(int param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined7 uVar2;
	undefined uVar3;
	undefined7 uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;

	uVar8 = (undefined7)((ulonglong)param_5 >> 8);
	uVar9 = (undefined)param_5;
	uVar6 = (undefined7)((ulonglong)param_4 >> 8);
	uVar7 = (undefined)param_4;
	uVar4 = (undefined7)((ulonglong)param_3 >> 8);
	uVar5 = (undefined)param_3;
	uVar2 = (undefined7)((ulonglong)param_2 >> 8);
	uVar3 = (undefined)param_2;
	ppuVar1 = &toc;
	if (_DAT_100f41ac != 0) {
		ppuVar1 = &toc;
		mem_free_dbg((int **)&DAT_100f41ac, uVar3, uVar5, uVar7, uVar9, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffff88);
	}
	if (param_1 - 0x402U < 10) {
		// WARNING: Could not recover jumptable at 0x100449d8. Too many branches
		// WARNING: Treating indirect jump as call
		(*(code *)ppuVar1[param_1 + 0x955])();
		return;
	}
	app_fatal((int)ppuVar1[-0x186b], CONCAT71(uVar2, uVar3), CONCAT71(uVar4, uVar5),
	    CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), param_6, param_7, param_8, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0,
	    in_stack_ffffffa4, in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0,
	    in_stack_ffffffb4);
	ppuVar1[-0x138a] = (undefined *)0x0;
	return;
}

// WARNING: Removing unreachable block (ram,0x10044fa0)

void DrawProgress(int param_1, int param_2, int param_3)

{
	longlong lVar1;
	undefined *puVar2;
	undefined *puVar3;

	puVar3 = (undefined *)(param_3 + 0x100f419c);
	puVar2 = (undefined *)(*(int *)PTR_DAT_100f17cc + *(int *)(PTR_DAT_100f1938 + param_2 * 4) + param_1);
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

void DrawCutscene(undefined8 uParm1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined4 uParm6, undefined8 uParm7, undefined4 uParm8)

{
	uint uVar1;
	undefined4 *puVar2;
	ulonglong uVar3;
	int iVar4;
	longlong lVar5;
	ulonglong uVar6;
	undefined8 uVar7;
	undefined8 uVar8;
	undefined4 uVar9;
	undefined4 uVar10;
	uint uVar11;
	undefined4 in_stack_ffffffc8;

	uVar10 = (undefined4)uParm7;
	uVar9 = (undefined4)((ulonglong)uParm7 >> 0x20);
	uVar3 = ZEXT48(&toc);
	lock_buf(1, param_2, param_3, param_4, param_5, (char)uParm6, (char)uParm7, (char)uParm8,
	    in_stack_ffffffc8);
	uVar6 = (ulonglong) * (uint *)((int)uVar3 + -0x4e24);
	lVar5 = 0x27f;
	uVar7 = 1;
	uVar8 = 0x280;
	CelDecodeOnly(0x40, 0x27f, uVar6, 1, 0x280, uParm6, uVar10, uParm8, in_stack_ffffffc8);
	uVar11 = 0;
	while (iVar4 = (int)uVar3, uVar11 < *(uint *)(iVar4 + -0x4e28)) {
		uVar1 = *(uint *)(iVar4 + -0x4e2c);
		uVar6 = (ulonglong)uVar1;
		lVar5 = (ulonglong) * (uint *)(uVar1 * 8 + 0x100fc558) + 0xa0;
		DrawProgress(*(int *)(&DAT_100fc554 + uVar1 * 8) + uVar11 + 0x40, (int)lVar5, uVar1);
		uVar11 = uVar11 + 1;
	}
	unlock_buf(1, lVar5, uVar6, uVar7, uVar8, uParm6, uVar10, uParm8, in_stack_ffffffc8);
	puVar2 = *(undefined4 **)(iVar4 + -0x76bc);
	*puVar2 = 0xff;
	scrollrt_draw_game_screen(0, ZEXT48(puVar2), uVar6, uVar7, uVar8, uParm6, CONCAT44(uVar9, uVar10), uParm8,
	    in_stack_ffffffc8);
	return;
}

void interface_msg_pump(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	char cVar2;
	int iVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;

	lVar10 = (longlong)param_8;
	lVar9 = (longlong)param_7;
	lVar8 = (longlong)param_6;
	iVar1 = (int)(ZEXT48(register0x0000000c) - 0x60);
	*(BADSPACEBASE **)iVar1 = register0x0000000c;
	while (true) {
		cVar2 = (char)(ZEXT48(register0x0000000c) - 0x60);
		uVar4 = 0;
		uVar5 = 0;
		uVar6 = 0;
		uVar7 = 1;
		iVar3 = PeekMessage(cVar2 + '8', 0, 0, 0, 1, (char)lVar8, (char)lVar9, (char)lVar10,
		    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
		    *(undefined4 *)(iVar1 + 0x14));
		if (iVar3 == 0)
			break;
		if (*(int *)(iVar1 + 0x3c) != 0x12) {
			TranslateMessage(cVar2 + '8', uVar4, uVar5, uVar6, uVar7, (char)lVar8, (char)lVar9, (char)lVar10,
			    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
			    *(undefined4 *)(iVar1 + 0x14));
			DispatchMessage(cVar2 + '8', uVar4, uVar5, uVar6, uVar7, (char)lVar8, (char)lVar9, (char)lVar10,
			    *(undefined *)(iVar1 + 0xb), *(undefined *)(iVar1 + 0xf),
			    *(undefined4 *)(iVar1 + 0x14));
		}
	}
	return;
}

ulonglong IncProgress(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	interface_msg_pump(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	ppuVar1[-0x138a] = ppuVar1[-0x138a] + 0xf;
	if ((undefined *)0x216 < ppuVar1[-0x138a]) {
		ppuVar1[-0x138a] = (undefined *)0x216;
	}
	if (ppuVar1[-0x1389] != (undefined *)0x0) {
		DrawCutscene();
	}
	return (ulonglong)(-((uint)(ppuVar1[-0x138a] < (undefined *)0x216) - 1) & 0xff);
}

void ShowProgress(int param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined8 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	undefined *puVar4;
	char *pcVar5;
	int iVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	undefined uVar10;
	ulonglong uVar9;
	undefined uVar11;
	undefined uVar12;
	undefined uVar14;
	undefined *puVar13;
	undefined uVar15;
	undefined uVar16;
	undefined4 uVar17;
	undefined uVar18;
	undefined uVar19;
	undefined *puVar20;
	undefined4 in_stack_ffffffa8;

	pcVar5 = _DAT_100f1dd4;
	puVar13 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	ppuVar7 = &toc;
	*_DAT_100f1dd4 = '\0';
	plrmsg_delay(1, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffa8);
	uVar8 = SetWindowProc(ppuVar7[-0x1c9e], (char)param_2, (char)param_3, (char)param_4, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffa8);
	interface_msg_pump((char)uVar8, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffffa8);
	ClearScreenBuffer();
	uVar17 = (undefined4)param_7;
	scrollrt_draw_game_screen(1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	uVar10 = InitCutscene(param_1, param_2, param_3, param_4, param_5, param_6, uVar17, param_8,
	    in_stack_ffffffa8);
	BlackPalette(uVar10, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)uVar17, (char)param_8, in_stack_ffffffa8);
	DrawCutscene();
	uVar10 = PaletteFadeIn(8, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)uVar17, (char)param_8, in_stack_ffffffa8);
	uVar9 = IncProgress(uVar10, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)uVar17, (char)param_8, in_stack_ffffffa8);
	uVar15 = (undefined)param_5;
	uVar14 = (undefined)param_4;
	uVar12 = (undefined)param_3;
	uVar11 = (undefined)param_2;
	uVar10 = stream_update(uVar9, param_2, param_3, param_4, param_5, param_6, uVar17, param_8,
	    in_stack_ffffffa8);
	IncProgress(uVar10, uVar11, uVar12, uVar14, uVar15, (char)param_6, (char)uVar17, (char)param_8,
	    in_stack_ffffffa8);
	if (param_1 - 0x402U < 10) {
		// WARNING: Could not recover jumptable at 0x100451d8. Too many branches
		// WARNING: Treating indirect jump as call
		(*(code *)ppuVar7[param_1 + 0x965])();
		return;
	}
	uVar10 = PaletteFadeOut(8, uVar11, uVar12, uVar14, uVar15, (char)param_6, (char)uVar17, (char)param_8,
	    in_stack_ffffffa8);
	FreeInterface(uVar10, uVar11, uVar12, uVar14, uVar15, (char)param_6, (char)uVar17, (char)param_8,
	    in_stack_ffffffa8);
	SetWindowProc((undefined *)uVar8, uVar11, uVar12, uVar14, uVar15, (char)param_6, (char)uVar17,
	    (char)param_8, in_stack_ffffffa8);
	uVar19 = (undefined)param_8;
	uVar18 = (undefined)uVar17;
	uVar16 = (undefined)param_6;
	puVar20 = puVar13 + 0x34;
	iVar6 = *(int *)puVar4 * 0x55ec;
	puVar13 = puVar13 + iVar6;
	uVar11 = 0x35;
	uVar1 = *(uint *)(puVar20 + iVar6) & 0xffff;
	uVar15 = (undefined)uVar1;
	uVar2 = *(uint *)(puVar13 + 0x38) & 0xff;
	uVar12 = (undefined)uVar2;
	uVar3 = *(uint *)(puVar13 + 0x3c) & 0xff;
	uVar14 = (undefined)uVar3;
	NetSendCmdLocParam1(1, 0x35, (ulonglong)uVar2, (ulonglong)uVar3, (ulonglong)uVar1, param_6, uVar17, param_8,
	    in_stack_ffffffa8);
	uVar10 = plrmsg_delay(0, uVar11, uVar12, uVar14, uVar15, uVar16, uVar18, uVar19, in_stack_ffffffa8);
	ResetPal(uVar10, uVar11, uVar12, uVar14, uVar15, uVar16, uVar18, uVar19, in_stack_ffffffa8);
	if ((*pcVar5 != '\0') && (*(int *)(puVar20 + *(int *)puVar4 * 0x55ec) == 0x10)) {
		PrepDoEnding();
	}
	*pcVar5 = '\0';
	return;
}
