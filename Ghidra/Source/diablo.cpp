
void diablo_parse_flags(byte *param_1)

{
	while (true) {
		if (*param_1 == 0)
			break;
		while ((*(byte *)(_DAT_100f1a6c + (uint)*param_1) & 6) != 0) {
			param_1 = param_1 + 1;
		}
		param_1 = param_1 + 1;
	}
	return;
}

void FreeGameMem(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined uVar5;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f1a68;
	puVar2 = PTR_DAT_100f1a58;
	ppuVar4 = &toc;
	music_stop(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	FUN_100b9100(*(int *)puVar3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)puVar3, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)ppuVar4[-0x1d5b], param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)ppuVar4[-0x1d5c], param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	mem_free_dbg((int **)ppuVar4[-0x1d5d], param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	uVar1 = *(uint *)puVar2;
	*(undefined4 *)puVar2 = 0;
	uVar5 = mem_free_dbg((ulonglong)uVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	uVar5 = FreeMissiles(uVar5, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	uVar5 = FreeMonsters(uVar5, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	uVar5 = FreeObjectGFX(uVar5, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	uVar5 = FreeEffects(uVar5, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	FreeTownerGFX(uVar5, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void start_game(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined8 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined *puVar14;
	undefined *puVar15;
	undefined4 uVar17;
	undefined uVar18;
	undefined8 uVar16;
	ulonglong uVar19;
	undefined uVar20;
	undefined7 uVar21;
	undefined uVar22;
	undefined7 uVar23;
	undefined uVar24;
	undefined7 uVar25;
	undefined uVar26;
	undefined uVar27;
	undefined uVar28;
	undefined uVar29;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	int local_6c;

	puVar15 = PTR_DAT_100f1a54;
	puVar14 = PTR_DAT_100f1a50;
	puVar13 = PTR_DAT_100f1a4c;
	puVar12 = PTR_DAT_100f1a48;
	puVar11 = PTR_DAT_100f1a44;
	puVar10 = PTR_DAT_100f1a40;
	puVar9 = PTR_DAT_100f1a3c;
	puVar8 = PTR_DAT_100f1a38;
	puVar7 = PTR_DAT_100f19a0;
	puVar6 = PTR_DAT_100f1954;
	puVar5 = PTR_DAT_100f1950;
	puVar4 = PTR_DAT_100f194c;
	puVar3 = PTR_DAT_100f1944;
	puVar2 = PTR_DAT_100f1834;
	uVar25 = (undefined7)((ulonglong)param_5 >> 8);
	uVar26 = (undefined)param_5;
	uVar23 = (undefined7)((ulonglong)param_4 >> 8);
	uVar24 = (undefined)param_4;
	uVar21 = (undefined7)((ulonglong)param_3 >> 8);
	uVar22 = (undefined)param_3;
	uVar17 = DiabloAllocPtr(0x6200);
	*(undefined4 *)puVar15 = uVar17;
	uVar17 = DiabloAllocPtr(0x62000);
	*(undefined4 *)puVar14 = uVar17;
	uVar17 = DiabloAllocPtr(0x62000);
	*(undefined4 *)puVar13 = uVar17;
	uVar17 = DiabloAllocPtr(0x3100);
	*(undefined4 *)puVar12 = uVar17;
	uVar17 = DiabloAllocPtr(0x3100);
	*(undefined4 *)puVar11 = uVar17;
	uVar17 = DiabloAllocPtr(0x3100);
	*(undefined4 *)puVar10 = uVar17;
	uVar17 = DiabloAllocPtr(0x3100);
	*(undefined4 *)puVar2 = uVar17;
	uVar17 = DiabloAllocPtr(0x3100);
	*(undefined4 *)puVar5 = uVar17;
	uVar17 = DiabloAllocPtr(0x6200);
	*(undefined4 *)puVar6 = uVar17;
	uVar17 = DiabloAllocPtr(0x3100);
	*(undefined4 *)puVar7 = uVar17;
	uVar17 = DiabloAllocPtr(0x3100);
	*(undefined4 *)puVar4 = uVar17;
	uVar17 = DiabloAllocPtr(0x3100);
	*(undefined4 *)puVar3 = uVar17;
	uVar17 = DiabloAllocPtr(0x3100);
	*(undefined4 *)puVar9 = uVar17;
	uVar17 = DiabloAllocPtr(0x3100);
	*(undefined4 *)puVar8 = uVar17;
	if (((((*(int *)puVar14 == 0) || (*(int *)puVar13 == 0)) || (*(int *)puVar15 == 0)) || ((((*(int *)puVar12 == 0 || (*(int *)puVar11 == 0)) || ((*(int *)puVar10 == 0 || ((*(int *)puVar2 == 0 || (*(int *)puVar5 == 0)))))) || (*(int *)puVar6 == 0)))) || ((((*(int *)puVar7 == 0 || (*(int *)puVar4 == 0)) || (*(int *)puVar3 == 0)) || ((*(int *)puVar9 == 0 || (*(int *)puVar8 == 0)))))) {
		ExitProcess(0, (undefined)param_2, uVar22, uVar24, uVar26, (char)param_6, (char)param_7, (char)param_8,
		    (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	}
	memset((char)*(undefined4 *)puVar15, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	memset((char)*(undefined4 *)puVar14, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	memset((char)*(undefined4 *)puVar13, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	memset((char)*(undefined4 *)puVar12, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	memset((char)*(undefined4 *)puVar11, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	memset((char)*(undefined4 *)puVar10, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	memset((char)*(undefined4 *)puVar2, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	memset((char)*(undefined4 *)puVar5, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	memset((char)*(undefined4 *)puVar6, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	memset((char)*(undefined4 *)puVar7, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	memset((char)*(undefined4 *)puVar4, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	memset((char)*(undefined4 *)puVar3, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	memset((char)*(undefined4 *)puVar9, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	memset((char)*(undefined4 *)puVar8, 0, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff88, in_stack_ffffff8f, local_6c);
	uVar19 = ZEXT48(*(undefined **)(local_6c + -0x759c));
	puVar1 = *(undefined4 **)(local_6c + -0x766c);
	**(undefined **)(local_6c + -0x759c) = 0;
	*puVar1 = 1;
	uVar18 = InitCursor(ZEXT48(puVar1), uVar19, CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24),
	    CONCAT71(uVar25, uVar26), param_6, (int)param_7, param_8, in_stack_ffffff88);
	uVar16 = InitLightTable(uVar18, (char)uVar19, uVar22, uVar24, uVar26, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff88);
	uVar18 = LoadDebugGFX(uVar16, uVar19, CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24),
	    CONCAT71(uVar25, uVar26), param_6, (int)param_7, param_8, in_stack_ffffff88);
	music_stop(uVar18, (char)uVar19, uVar22, uVar24, uVar26, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffff88);
	uVar29 = (undefined)param_8;
	uVar27 = (undefined)param_6;
	uVar20 = (undefined)uVar19;
	uVar28 = (undefined)param_7;
	ShowProgress(param_1, uVar19, CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24),
	    CONCAT71(uVar25, uVar26), param_6, param_7, param_8, in_stack_ffffff88);
	uVar18 = gmenu_init_menu();
	InitLevelCursor(uVar18, uVar20, uVar22, uVar24, uVar26, uVar27, uVar28, uVar29, in_stack_ffffff88);
	*(undefined4 *)(local_6c + -0x4f54) = 0;
	**(undefined **)(local_6c + -0x7560) = 0;
	track_repeat_walk(0);
	return;
}

void free_game(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined *puVar14;
	undefined *puVar15;
	undefined uVar16;
	ulonglong uVar17;
	undefined uVar18;
	undefined7 uVar19;
	undefined uVar20;
	undefined7 uVar21;
	undefined uVar22;
	undefined7 uVar23;
	undefined uVar24;
	longlong lVar25;
	undefined uVar26;
	longlong lVar27;
	undefined uVar28;
	longlong lVar29;
	undefined uVar30;
	ulonglong uVar31;
	undefined4 in_stack_ffffff98;

	puVar15 = PTR_DAT_100f1a54;
	puVar14 = PTR_DAT_100f1a50;
	puVar13 = PTR_DAT_100f1a4c;
	puVar12 = PTR_DAT_100f1a48;
	puVar11 = PTR_DAT_100f1a44;
	puVar10 = PTR_DAT_100f1a40;
	puVar9 = PTR_DAT_100f1a3c;
	puVar8 = PTR_DAT_100f1a38;
	puVar7 = PTR_DAT_100f19a0;
	puVar6 = PTR_DAT_100f1954;
	puVar5 = PTR_DAT_100f1950;
	puVar4 = PTR_DAT_100f194c;
	puVar3 = PTR_DAT_100f1944;
	puVar2 = PTR_DAT_100f1834;
	uVar23 = (undefined7)((ulonglong)param_5 >> 8);
	uVar24 = (undefined)param_5;
	uVar21 = (undefined7)((ulonglong)param_4 >> 8);
	uVar22 = (undefined)param_4;
	uVar19 = (undefined7)((ulonglong)param_3 >> 8);
	uVar20 = (undefined)param_3;
	lVar29 = (longlong)param_8;
	lVar27 = (longlong)param_7;
	lVar25 = (longlong)param_6;
	uVar17 = ZEXT48(PTR_DAT_100f1a50);
	uVar1 = *(uint *)PTR_DAT_100f1a50;
	if (uVar1 != 0) {
		*(undefined4 *)PTR_DAT_100f1a50 = 0;
		mem_free_dbg((ulonglong)uVar1, (char)puVar14, uVar20, uVar22, uVar24, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffff98);
	}
	uVar1 = *(uint *)puVar13;
	*(undefined4 *)puVar13 = 0;
	mem_free_dbg((ulonglong)uVar1, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar1 = *(uint *)puVar15;
	*(undefined4 *)puVar15 = 0;
	mem_free_dbg((ulonglong)uVar1, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar1 = *(uint *)puVar12;
	*(undefined4 *)puVar12 = 0;
	mem_free_dbg((ulonglong)uVar1, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar1 = *(uint *)puVar11;
	*(undefined4 *)puVar11 = 0;
	mem_free_dbg((ulonglong)uVar1, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar1 = *(uint *)puVar10;
	*(undefined4 *)puVar10 = 0;
	mem_free_dbg((ulonglong)uVar1, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar1 = *(uint *)puVar2;
	*(undefined4 *)puVar2 = 0;
	mem_free_dbg((ulonglong)uVar1, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar1 = *(uint *)puVar5;
	*(undefined4 *)puVar5 = 0;
	mem_free_dbg((ulonglong)uVar1, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar1 = *(uint *)puVar6;
	*(undefined4 *)puVar6 = 0;
	mem_free_dbg((ulonglong)uVar1, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar1 = *(uint *)puVar7;
	*(undefined4 *)puVar7 = 0;
	mem_free_dbg((ulonglong)uVar1, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar1 = *(uint *)puVar4;
	*(undefined4 *)puVar4 = 0;
	mem_free_dbg((ulonglong)uVar1, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar1 = *(uint *)puVar3;
	*(undefined4 *)puVar3 = 0;
	mem_free_dbg((ulonglong)uVar1, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar1 = *(uint *)puVar9;
	*(undefined4 *)puVar9 = 0;
	mem_free_dbg((ulonglong)uVar1, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar1 = *(uint *)puVar8;
	*(undefined4 *)puVar8 = 0;
	uVar16 = mem_free_dbg((ulonglong)uVar1, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27, (char)lVar29, in_stack_ffffff98);
	uVar16 = FreeControlPan(uVar16, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar16 = FreeInvGFX(uVar16, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar16 = FreeGMenu(uVar16, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	uVar16 = FreeQuestText(uVar16, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27,
	    (char)lVar29, in_stack_ffffff98);
	FreeStoreMem(uVar16, (char)uVar17, uVar20, uVar22, uVar24, (char)lVar25, (char)lVar27, (char)lVar29,
	    in_stack_ffffff98);
	uVar31 = 0;
	do {
		uVar16 = FreePlayerGFX(uVar31, uVar17, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22),
		    CONCAT71(uVar23, uVar24), (int)lVar25, (int)lVar27, (int)lVar29,
		    in_stack_ffffff98);
		uVar30 = (undefined)lVar29;
		uVar28 = (undefined)lVar27;
		uVar26 = (undefined)lVar25;
		uVar18 = (undefined)uVar17;
		uVar31 = uVar31 + 1;
	} while ((int)uVar31 < 4);
	uVar16 = FreeItemGFX(uVar16, uVar18, uVar20, uVar22, uVar24, uVar26, uVar28, uVar30, in_stack_ffffff98);
	uVar16 = FreeCursor(uVar16, uVar18, uVar20, uVar22, uVar24, uVar26, uVar28, uVar30, in_stack_ffffff98);
	uVar16 = FreeLightTable(uVar16, uVar18, uVar20, uVar22, uVar24, uVar26, uVar28, uVar30, in_stack_ffffff98);
	uVar16 = FreeDebugGFX(uVar16, uVar18, uVar20, uVar22, uVar24, uVar26, uVar28, uVar30, in_stack_ffffff98);
	FreeGameMem(uVar16, uVar18, uVar20, uVar22, uVar24, uVar26, uVar28, uVar30, in_stack_ffffff98);
	return;
}

void run_game_loop(int param_1, longlong param_2, ulonglong param_3, ulonglong param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	char cVar3;
	bool bVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	ulonglong uVar10;
	undefined8 uVar11;
	ulonglong uVar12;
	int iVar14;
	undefined uVar15;
	ulonglong uVar13;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined4 uVar19;
	undefined4 uVar20;
	undefined4 uVar21;

	puVar9 = PTR_DAT_100f1a34;
	puVar8 = PTR_DAT_100f1a2c;
	puVar7 = PTR_DAT_100f1a24;
	puVar6 = PTR_DAT_100f1a20;
	puVar5 = PTR_DAT_100f1914;
	uVar13 = ZEXT48(&toc);
	puVar2 = (undefined *)(ZEXT48(register0x0000000c) - 0x80);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	nthread_ignore_mutex(1, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, *(undefined4 *)(puVar2 + 8));
	start_game(param_1, param_2, param_3, param_4, param_5, (int)param_6, param_7, (int)param_8,
	    *(undefined4 *)(puVar2 + 8));
	uVar10 = SetWindowProc(*(undefined **)((int)uVar13 + -0x75a0), (char)param_2, (char)param_3,
	    (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8,
	    *(undefined4 *)(puVar2 + 8));
	uVar11 = control_update_life_mana(*puVar2);
	msg_process_net_packets(uVar11, param_2, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
	    *(undefined4 *)(puVar2 + 8));
	puVar1 = *(undefined4 **)((int)uVar13 + -0x75a8);
	*(undefined4 *)puVar8 = 1;
	*puVar1 = 1;
	*(undefined4 *)puVar7 = 1;
	*(undefined4 *)puVar5 = 0xff;
	DrawAndBlit(ZEXT48(puVar1), param_2, param_3, param_4, param_5, (int)param_6, param_7, (int)param_8,
	    *(undefined4 *)(puVar2 + 8));
	PaletteFadeIn(8, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, *(undefined4 *)(puVar2 + 8));
	*(undefined4 *)puVar5 = 0xff;
	*(undefined4 *)puVar6 = 1;
	nthread_ignore_mutex(0, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, *(undefined4 *)(puVar2 + 8));
	uVar12 = FUN_10017ae8(1, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, *(undefined4 *)(puVar2 + 8));
LAB_10024060:
	do {
		iVar14 = (int)uVar13;
		uVar21 = (undefined4)param_8;
		uVar19 = (undefined4)param_6;
		if (*(int *)puVar8 == 0) {
			FUN_10017ae8(0, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
			    (char)param_7, (char)param_8, *(undefined4 *)(puVar2 + 8));
			uVar13 = ZEXT48(*(byte **)(iVar14 + -0x77f0));
			if (1 < **(byte **)(iVar14 + -0x77f0)) {
				uVar13 = pfile_write_hero(uVar13, param_2, param_3, (int)param_4, (int)param_5, uVar19, (int)param_7,
				    uVar21, *(undefined4 *)(puVar2 + 8));
			}
			pfile_flush_W(uVar13, param_2, param_3, (int)param_4, (int)param_5, uVar19, (int)param_7, uVar21,
			    *(undefined4 *)(puVar2 + 8));
			PaletteFadeOut(8, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)uVar19,
			    (char)param_7, (char)uVar21, *(undefined4 *)(puVar2 + 8));
			SetCursor_(0, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)uVar19,
			    (char)param_7, (char)uVar21, *(undefined4 *)(puVar2 + 8));
			ClearScreenBuffer();
			uVar20 = (undefined4)param_7;
			*(undefined4 *)puVar5 = 0xff;
			scrollrt_draw_game_screen(1, param_2, param_3, param_4, param_5, uVar19, param_7, uVar21,
			    *(undefined4 *)(puVar2 + 8));
			uVar13 = SetWindowProc((undefined *)uVar10, (char)param_2, (char)param_3, (char)param_4,
			    (char)param_5, (char)uVar19, (char)uVar20, (char)uVar21,
			    *(undefined4 *)(puVar2 + 8));
			uVar11 = free_game(uVar13, param_2, param_3, param_4, param_5, uVar19, uVar20, uVar21,
			    *(undefined4 *)(puVar2 + 8));
			if (*puVar9 != '\0') {
				*puVar9 = 0;
				DoEnding(uVar11, param_2, param_3, param_4, param_5, uVar19, uVar20, uVar21,
				    *(undefined4 *)(puVar2 + 8));
			}
			return;
		}
		diablo_color_cyc_logic((char)uVar12, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, *(undefined4 *)(puVar2 + 8));
		cVar3 = (char)(ZEXT48(register0x0000000c) - 0x80);
		param_2 = 0;
		param_3 = 0;
		param_4 = 0;
		param_5 = 0;
		iVar14 = PeekMessage(cVar3 + '<', 0, 0, 0, 0, (char)param_6, (char)param_7, (char)param_8, puVar2[0xb],
		    puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		uVar13 = (ulonglong) * (uint *)(puVar2 + 0x14);
		if (iVar14 == 0)
			goto LAB_10024034;
		while (true) {
			param_2 = 0;
			param_3 = 0;
			param_4 = 0;
			param_5 = 1;
			uVar12 = PeekMessage(cVar3 + '<', 0, 0, 0, 1, (char)param_6, (char)param_7, (char)param_8, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
			uVar13 = (ulonglong) * (uint *)(puVar2 + 0x14);
			uVar15 = (undefined)param_2;
			uVar16 = (undefined)param_3;
			uVar17 = (undefined)param_4;
			uVar18 = (undefined)param_5;
			if ((int)uVar12 == 0)
				break;
			if (*(int *)(puVar2 + 0x40) == 0x12) {
				*(undefined4 *)puVar7 = 0;
				*(undefined4 *)puVar8 = 0;
				break;
			}
			TranslateMessage(cVar3 + '<', uVar15, uVar16, uVar17, uVar18, (char)param_6, (char)param_7,
			    (char)param_8, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
			DispatchMessage(cVar3 + '<', uVar15, uVar16, uVar17, uVar18, (char)param_6, (char)param_7,
			    (char)param_8, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
		}
		bVar4 = false;
		if ((*(int *)puVar8 != 0) && (uVar12 = nthread_has_500ms_passed(0, uVar15, uVar16, uVar17, uVar18, (char)param_6, (char)param_7, (char)param_8, *(undefined4 *)(puVar2 + 8), puVar2[0xf], *(undefined4 *)(puVar2 + 0x18)), (int)uVar12 != 0)) {
			bVar4 = true;
		}
	} while (!bVar4);
	goto LAB_10024044;
LAB_10024034:
	uVar12 = nthread_has_500ms_passed(0, (char)param_2, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, *(undefined4 *)(puVar2 + 8), puVar2[0xf],
	    *(undefined4 *)(puVar2 + 0x18));
	if ((int)uVar12 != 0) {
	LAB_10024044:
		multi_process_network_packets(uVar12, param_2, param_3, param_4, param_5, (int)param_6, (int)param_7, (int)param_8,
		    *(undefined4 *)(puVar2 + 8));
		uVar15 = game_loop((ulonglong) * (uint *)puVar6, param_2, param_3, param_4, param_5, param_6, param_7, param_8, *(undefined4 *)(puVar2 + 8));
		uVar11 = msgcmd_send_chat(uVar15, (char)param_2, (char)param_3, (char)param_4, (char)param_5,
		    (char)param_6, (char)param_7, (char)param_8, *(undefined4 *)(puVar2 + 8));
		*(undefined4 *)puVar6 = 0;
		uVar12 = DrawAndBlit(uVar11, param_2, param_3, param_4, param_5, (int)param_6, param_7, (int)param_8,
		    *(undefined4 *)(puVar2 + 8));
	}
	goto LAB_10024060;
}

ulonglong StartGame(int param_1, undefined8 param_2, ulonglong param_3, ulonglong param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined8 uVar6;
	int iVar7;
	undefined uVar8;
	undefined8 extraout_r3;
	longlong lVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined7 uVar13;
	undefined uVar14;
	undefined7 uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined uVar19;
	undefined4 in_stack_ffffffa8;
	undefined uVar20;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	puVar5 = PTR_DAT_100f1a24;
	puVar4 = PTR_DAT_100f1a1c;
	puVar3 = PTR_DAT_100f1a18;
	puVar2 = PTR_DAT_100f1a14;
	puVar1 = PTR_DAT_100f1824;
	uVar15 = (undefined7)((ulonglong)param_5 >> 8);
	uVar16 = (undefined)param_5;
	uVar13 = (undefined7)(param_4 >> 8);
	uVar14 = (undefined)param_4;
	uVar11 = (undefined7)(param_3 >> 8);
	uVar12 = (undefined)param_3;
	*PTR_DAT_100f1a1c = 1;
	do {
		lVar9 = ZEXT48(register0x0000000c) - 0x28;
		*(undefined4 *)puVar3 = 0;
		iVar7 = NetInit(param_2);
		uVar20 = (undefined)in_stack_ffffffa8;
		uVar10 = (undefined)lVar9;
		uVar8 = (undefined)iVar7;
		uVar19 = (undefined)param_8;
		uVar18 = (undefined)param_7;
		uVar17 = (undefined)param_6;
		if (iVar7 == 0) {
			uVar6 = countLeadingZeros(0);
			*(uint *)puVar5 = (uint)uVar6 >> 5 & 0xff;
			break;
		}
		*puVar4 = 0;
		if ((param_1 != 0) || (*(int *)puVar2 == 0)) {
			uVar8 = InitLevels();
			uVar8 = InitQuests(uVar8, (char)lVar9, uVar12, uVar14, uVar16, (char)param_6, (char)param_7,
			    (char)param_8, in_stack_ffffffa8);
			InitPortals(uVar8, (char)lVar9, uVar12, uVar14, uVar16, (char)param_6, (char)param_7, (char)param_8,
			    in_stack_ffffffa8);
			InitDungMsgs((ulonglong) * (uint *)puVar1, lVar9, CONCAT71(uVar11, uVar12), CONCAT71(uVar13, uVar14),
			    CONCAT71(uVar15, uVar16), (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffa8);
		}
		if ((*(int *)puVar2 == 0) || (*(int *)puVar3 == 0)) {
			iVar7 = 0x40a;
		} else {
			iVar7 = 0x40b;
		}
		run_game_loop(iVar7, lVar9, CONCAT71(uVar11, uVar12), CONCAT71(uVar13, uVar14), CONCAT71(uVar15, uVar16), param_6, param_7, param_8, in_stack_ffffffa8);
		NetClose(extraout_r3, lVar9, CONCAT71(uVar11, uVar12), CONCAT71(uVar13, uVar14),
		    CONCAT71(uVar15, uVar16), (int)param_6, (int)param_7, (int)param_8, in_stack_ffffffa8);
		uVar10 = 0;
		uVar6 = pfile_create_player_description(0, 0, CONCAT71(uVar11, uVar12), CONCAT71(uVar13, uVar14), CONCAT71(uVar15, uVar16), param_6, param_7, param_8, in_stack_ffffffa8);
		uVar20 = (undefined)in_stack_ffffffa8;
		uVar8 = (undefined)uVar6;
		uVar19 = (undefined)param_8;
		uVar18 = (undefined)param_7;
		uVar17 = (undefined)param_6;
	} while (*(int *)puVar5 != 0);
	SNetDestroy(uVar8, uVar10, uVar12, uVar14, uVar16, uVar17, uVar18, uVar19, uVar20, in_stack_ffffffaf,
	    local_4c);
	return (ulonglong) * (uint *)puVar5;
}

void diablo_init_screen(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined *puVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	undefined *puVar11;
	int iVar12;
	int *piVar13;
	int iVar14;
	longlong lVar15;

	puVar11 = PTR_DAT_100f1818;
	puVar2 = (undefined *)(ZEXT48(register0x0000000c) - 0x50);
	*(BADSPACEBASE **)puVar2 = register0x0000000c;
	GetCursorPos((char)(ZEXT48(register0x0000000c) - 0x50) + '@', param_2, param_3, param_4, param_5,
	    param_6, param_7, param_8, puVar2[0xb], puVar2[0xf], *(undefined4 *)(puVar2 + 0x14));
	iVar14 = *(int *)(puVar2 + 0x14);
	lVar15 = 0x20;
	puVar1 = *(undefined4 **)(iVar14 + -0x76ac);
	**(undefined4 **)(iVar14 + -0x76a8) = *(undefined4 *)(puVar2 + 0x40);
	iVar12 = 0;
	piVar13 = *(int **)(iVar14 + -0x7698);
	iVar14 = 0;
	*puVar1 = *(undefined4 *)(puVar2 + 0x44);
	*(undefined4 *)(puVar11 + 8) = 0;
	*(undefined4 *)(puVar11 + 0xc) = 0;
	*(undefined4 *)puVar11 = 0;
	*(undefined4 *)(puVar11 + 4) = 0;
	*(undefined4 *)(puVar11 + 0x10) = 0;
	do {
		*piVar13 = iVar12;
		piVar13[1] = (iVar14 + 1) * 0x300;
		piVar13[2] = (iVar14 + 2) * 0x300;
		piVar13[3] = (iVar14 + 3) * 0x300;
		piVar13[4] = (iVar14 + 4) * 0x300;
		piVar13[5] = (iVar14 + 5) * 0x300;
		piVar13[6] = (iVar14 + 6) * 0x300;
		piVar13[7] = (iVar14 + 7) * 0x300;
		piVar13[8] = iVar12 + 0x1800;
		piVar13[9] = (iVar14 + 9) * 0x300;
		piVar13[10] = (iVar14 + 10) * 0x300;
		piVar13[0xb] = (iVar14 + 0xb) * 0x300;
		piVar13[0xc] = (iVar14 + 0xc) * 0x300;
		piVar13[0xd] = (iVar14 + 0xd) * 0x300;
		piVar13[0xe] = (iVar14 + 0xe) * 0x300;
		iVar3 = iVar14 + 0x17;
		piVar13[0xf] = (iVar14 + 0xf) * 0x300;
		iVar4 = iVar14 + 0x19;
		piVar13[0x10] = iVar12 + 0x3000;
		piVar13[0x11] = (iVar14 + 0x11) * 0x300;
		iVar5 = iVar14 + 0x1a;
		piVar13[0x12] = (iVar14 + 0x12) * 0x300;
		iVar6 = iVar14 + 0x1b;
		piVar13[0x13] = (iVar14 + 0x13) * 0x300;
		iVar7 = iVar14 + 0x1c;
		piVar13[0x14] = (iVar14 + 0x14) * 0x300;
		iVar8 = iVar14 + 0x1d;
		piVar13[0x15] = (iVar14 + 0x15) * 0x300;
		iVar9 = iVar14 + 0x1e;
		piVar13[0x16] = (iVar14 + 0x16) * 0x300;
		iVar10 = iVar14 + 0x1f;
		iVar14 = iVar14 + 0x20;
		piVar13[0x17] = iVar3 * 0x300;
		piVar13[0x18] = iVar12 + 0x4800;
		iVar12 = iVar12 + 0x6000;
		piVar13[0x19] = iVar4 * 0x300;
		piVar13[0x1a] = iVar5 * 0x300;
		piVar13[0x1b] = iVar6 * 0x300;
		piVar13[0x1c] = iVar7 * 0x300;
		piVar13[0x1d] = iVar8 * 0x300;
		piVar13[0x1e] = iVar9 * 0x300;
		piVar13[0x1f] = iVar10 * 0x300;
		piVar13 = piVar13 + 0x20;
		lVar15 = lVar15 + -1;
	} while (lVar15 != 0);
	ClrDiabloMsg(*puVar2);
	return;
}

undefined8
WinMain(undefined4 param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined uVar9;
	byte *pbVar6;
	undefined8 uVar4;
	uint uVar7;
	int iVar8;
	ulonglong uVar5;
	ulonglong uVar10;
	undefined uVar11;
	undefined8 uVar12;
	ulonglong uVar13;
	undefined uVar14;
	longlong lVar15;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined uVar19;
	undefined uVar20;
	undefined4 in_stack_ffffffa8;
	undefined uVar21;
	undefined in_stack_ffffffaf;
	int local_4c;
	int iVar22;

	puVar3 = PTR_s_Diablo_100f1a08;
	puVar2 = PTR_DAT_100f17c4;
	uVar9 = SUB41(PTR_PTR_LAB_100f1a10, 0);
	uVar12 = param_4;
	SwapOutMemFuncFPLib(uVar9, (undefined)param_2, (char)param_3, (char)param_4, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, (char)in_stack_ffffffa8,
	    in_stack_ffffffaf, local_4c);
	SwapOutMemFuncWin32(uVar9, (undefined)param_2, (char)param_3, (char)uVar12, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, (char)in_stack_ffffffa8,
	    in_stack_ffffffaf, local_4c);
	puVar1 = *(undefined4 **)(local_4c + -0x75c4);
	uVar10 = ZEXT48(puVar1);
	*puVar1 = param_1;
	uVar9 = ShowCursor(0, (char)puVar1, (char)param_3, (char)uVar12, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf,
	    local_4c);
	uVar9 = GetTickCount(uVar9, (char)uVar10, (char)param_3, (char)uVar12, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf,
	    local_4c);
	vc_srand(uVar9, (char)uVar10, (char)param_3, (char)uVar12, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	uVar9 = InitHash();
	pbVar6 = (byte *)GetCommandLine(uVar9, (char)uVar10, (char)param_3, (char)uVar12, (char)param_5,
	    (char)param_6, (char)param_7, (char)param_8, (char)in_stack_ffffffa8,
	    in_stack_ffffffaf, local_4c);
	diablo_parse_flags(pbVar6);
	uVar9 = init_create_window(param_4, uVar10, param_3, uVar12, param_5, (int)param_6, (int)param_7, (int)param_8,
	    in_stack_ffffffa8);
	uVar4 = diablo_init_screen(uVar9, (char)uVar10, (char)param_3, (char)uVar12, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffffa8);
	uVar11 = (undefined)uVar10;
	uVar9 = sound_init(uVar4, uVar10, param_3, uVar12, param_5, (int)param_6, (int)param_7, (int)param_8,
	    in_stack_ffffffa8);
	UiInitialize(uVar9, uVar11, (char)param_3, (char)uVar12, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffa8);
	uVar7 = GetAsyncKeyState(0x11, uVar11, (char)param_3, (char)uVar12, (char)param_5, (char)param_6,
	    (char)param_7, (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf,
	    local_4c);
	iVar22 = local_4c;
	if ((uVar7 & 0x8000) == 0) {
		iVar22 = local_4c;
		play_movie((ulonglong) * (uint *)(local_4c + -0x63e0), 1, param_3, uVar12, param_5, (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffffa8);
	}
	uVar9 = 0xdc;
	lVar15 = ZEXT48(register0x0000000c) - 0x28;
	uVar12 = 0;
	uVar10 = (ulonglong) * (ushort *)(local_4c + -0x22fc);
	iVar8 = SRegLoadValue((char)puVar3, 0xdc, 0, (char)lVar15, (char)*(ushort *)(local_4c + -0x22fc),
	    (char)param_6, (char)param_7, (char)param_8, (char)in_stack_ffffffa8,
	    in_stack_ffffffaf, iVar22);
	uVar7 = GetAsyncKeyState(0x11, uVar9, (char)uVar12, (char)lVar15, (char)uVar10, (char)param_6,
	    (char)param_7, (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf,
	    iVar22);
	if (((uVar7 & 0x8000) == 0) && (iVar8 == 0)) {
		play_movie((ulonglong) * (uint *)(iVar22 + -0x63e8), 1, uVar12, lVar15, uVar10, (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffffa8);
	}
	lVar15 = ZEXT48(register0x0000000c) - 0x24;
	uVar13 = 0;
	uVar12 = 0;
	SRegSaveValue((char)puVar3, (char)lVar15, 0, 0, (char)uVar10, (char)param_6, (char)param_7, (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf, iVar22);
	uVar5 = GetAsyncKeyState(0x11, (char)lVar15, (char)uVar13, (char)uVar12, (char)uVar10, (char)param_6,
	    (char)param_7, (char)param_8, (char)in_stack_ffffffa8, in_stack_ffffffaf,
	    iVar22);
	if ((uVar5 & 0x8000) == 0) {
		uVar4 = UiTitleDialog(7, (char)lVar15, (char)uVar13, (char)uVar12, (char)uVar10, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffa8);
		uVar5 = BlackPalette((char)uVar4, (char)lVar15, (char)uVar13, (char)uVar12, (char)uVar10,
		    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffa8);
	}
	uVar17 = (undefined)uVar10;
	uVar16 = (undefined)uVar12;
	uVar14 = (undefined)uVar13;
	uVar11 = (undefined)lVar15;
	uVar20 = (undefined)param_8;
	uVar19 = (undefined)param_7;
	uVar18 = (undefined)param_6;
	uVar9 = mainmenu_loop(uVar5, lVar15, uVar13, uVar12, uVar10, param_6, param_7, param_8, in_stack_ffffffa8);
	uVar9 = UiDestroy(uVar9, uVar11, uVar14, uVar16, uVar17, uVar18, uVar19, uVar20, in_stack_ffffffa8);
	uVar21 = (undefined)in_stack_ffffffa8;
	SaveGamma(uVar9, uVar11, uVar14, uVar16, uVar17, uVar18, uVar19, uVar20, in_stack_ffffffa8);
	if (*(int *)puVar2 != 0) {
		Sleep(0x2c, uVar11, uVar14, uVar16, uVar17, uVar18, uVar19, uVar20, uVar21, in_stack_ffffffaf, iVar22);
		DestroyWindow((char)*(undefined4 *)puVar2, uVar11, uVar14, uVar16, uVar17, uVar18, uVar19, uVar20,
		    uVar21, in_stack_ffffffaf, iVar22);
	}
	return 0;
}

undefined8
LeftMouseCmd(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	byte bVar1;
	bool bVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined **ppuVar13;
	longlong lVar14;
	undefined8 uVar15;
	ulonglong uVar16;
	undefined4 in_stack_ffffff98;

	puVar12 = PTR_DAT_100f1978;
	puVar11 = PTR_DAT_100f1974;
	puVar10 = PTR_DAT_100f188c;
	puVar9 = PTR_DAT_100f1888;
	puVar8 = PTR_DAT_100f1884;
	puVar7 = PTR_DAT_100f1880;
	puVar6 = PTR_DAT_100f1874;
	puVar5 = PTR_DAT_100f1828;
	puVar4 = PTR_DAT_100f1824;
	puVar3 = PTR_DAT_100f1814;
	ppuVar13 = &toc;
	if (*PTR_DAT_100f183c == '\0') {
		if ((*PTR_DAT_100f1888 != -1) && (*(int *)PTR_DAT_100f188c == 1)) {
			if (*(int *)PTR_DAT_100f1814 == 0) {
				uVar15 = 0x2a;
			} else {
				uVar15 = 0x29;
			}
			NetSendCmdLocParam1(1, uVar15, (ulonglong)(*(uint *)PTR_DAT_100f1978 & 0xff),
			    (ulonglong)(*(uint *)PTR_DAT_100f1974 & 0xff), (longlong)(char)*PTR_DAT_100f1888,
			    param_6, param_7, param_8, in_stack_ffffff98);
		}
		if (*(uint *)puVar7 != 0xffffffff) {
			NetSendCmdLocParam1(1, 0x1d, (ulonglong)(*(uint *)puVar12 & 0xff), (ulonglong)(*(uint *)puVar11 & 0xff),
			    (ulonglong)(*(uint *)puVar7 & 0xffff), param_6, param_7, param_8, in_stack_ffffff98);
		}
		if (((*puVar9 == -1) && (*(int *)puVar7 == -1)) && (*puVar6 == -1)) {
			return 1;
		}
	} else {
		bVar2 = false;
		uVar16 = (ulonglong) * (uint *)PTR_DAT_100f1978;
		lVar14 = abs((ulonglong)
		        * (uint *)(PTR_DAT_100f1828 + *(int *)PTR_DAT_100f1824 * 0x55ec + 0x38)
		    - uVar16);
		if ((int)lVar14 < 2) {
			uVar16 = (ulonglong) * (uint *)puVar11;
			lVar14 = abs((ulonglong) * (uint *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x3c) - uVar16);
			if ((int)lVar14 < 2) {
				bVar2 = true;
			}
		}
		if (((*puVar9 == -1) || (*(int *)puVar10 != 1)) || (param_1 != 0)) {
			bVar1 = *puVar8;
			if ((bVar1 == 0xff) || ((param_1 != 0 && ((!bVar2 || (ppuVar13[-0x1da2][(int)(char)bVar1 * 0x78 + 0x34] != '\x01')))))) {
				if (*(int *)(puVar5 + *(int *)puVar4 * 0x55ec + 0x134) == 1) {
					if (param_1 == 0) {
						if (*(uint *)puVar7 == 0xffffffff) {
							if ((*puVar6 != -1) && (_DAT_100f6b8c == 0)) {
								NetSendCmdParam1(1, 0x15, (longlong)(char)*puVar6, param_4, param_5, param_6, param_7, param_8,
								    in_stack_ffffff98);
							}
						} else {
							uVar15 = CanTalkToMonst((ulonglong) * (uint *)puVar7, uVar16, (ulonglong)bVar1, param_4,
							    param_5, param_6, param_7, param_8, in_stack_ffffff98);
							if ((int)uVar15 == 0) {
								NetSendCmdParam1(1, 0x14, (ulonglong)(*(uint *)puVar7 & 0xffff), param_4, param_5, param_6,
								    param_7, param_8, in_stack_ffffff98);
							} else {
								NetSendCmdParam1(1, 0x12, (ulonglong)(*(uint *)puVar7 & 0xffff), param_4, param_5, param_6,
								    param_7, param_8, in_stack_ffffff98);
							}
						}
					} else {
						NetSendCmdLoc(1, 0xd, (ulonglong)(*(uint *)puVar12 & 0xff),
						    (ulonglong)(*(uint *)puVar11 & 0xff), param_5, param_6, param_7, param_8,
						    in_stack_ffffff98);
					}
				} else {
					if (param_1 == 0) {
						if (*(uint *)puVar7 == 0xffffffff) {
							if ((*puVar6 != -1) && (_DAT_100f6b8c == 0)) {
								NetSendCmdParam1(1, 0x13, (longlong)(char)*puVar6, param_4, param_5, param_6, param_7, param_8,
								    in_stack_ffffff98);
							}
						} else {
							NetSendCmdParam1(1, 0x12, (ulonglong)(*(uint *)puVar7 & 0xffff), param_4, param_5, param_6,
							    param_7, param_8, in_stack_ffffff98);
						}
					} else {
						if (*(uint *)puVar7 == 0xffffffff) {
							NetSendCmdLoc(1, 0x37, (ulonglong)(*(uint *)puVar12 & 0xff),
							    (ulonglong)(*(uint *)puVar11 & 0xff), param_5, param_6, param_7, param_8,
							    in_stack_ffffff98);
						} else {
							uVar15 = CanTalkToMonst((ulonglong) * (uint *)puVar7, uVar16, (ulonglong)bVar1, param_4,
							    param_5, param_6, param_7, param_8, in_stack_ffffff98);
							if ((int)uVar15 == 0) {
								NetSendCmdLoc(1, 0x37, (ulonglong)(*(uint *)puVar12 & 0xff),
								    (ulonglong)(*(uint *)puVar11 & 0xff), param_5, param_6, param_7, param_8,
								    in_stack_ffffff98);
							} else {
								NetSendCmdParam1(1, 0x12, (ulonglong)(*(uint *)puVar7 & 0xffff), param_4, param_5, param_6,
								    param_7, param_8, in_stack_ffffff98);
							}
						}
					}
				}
			} else {
				if (*(int *)puVar10 == 5) {
					uVar15 = 0x11;
				} else {
					uVar15 = 0x10;
				}
				NetSendCmdLocParam1(1, uVar15, (ulonglong)(*(uint *)puVar12 & 0xff),
				    (ulonglong)(*(uint *)puVar11 & 0xff), (longlong)(char)bVar1, param_6, param_7,
				    param_8, in_stack_ffffff98);
			}
		} else {
			if (*(int *)puVar3 == 0) {
				uVar15 = 0x2a;
			} else {
				uVar15 = 0x29;
			}
			NetSendCmdLocParam1(1, uVar15, (ulonglong)(*(uint *)puVar12 & 0xff),
			    (ulonglong)(*(uint *)puVar11 & 0xff), (longlong)(char)*puVar9, param_6, param_7,
			    param_8, in_stack_ffffff98);
		}
		if ((((param_1 == 0) && (*puVar9 == -1)) && (*puVar8 == -1)) && ((*(int *)puVar7 == -1 && (*puVar6 == -1)))) {
			return 1;
		}
	}
	return 0;
}

undefined8 TryIconCurs(void)

{
	int iVar1;
	uint uVar2;
	uint uVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	undefined8 uVar6;
	longlong lVar7;
	ulonglong uVar8;
	undefined uVar9;
	char cVar10;
	ulonglong in_r6;
	undefined uVar11;
	ulonglong in_r7;
	undefined uVar12;
	ulonglong in_r8;
	undefined uVar13;
	ulonglong in_r9;
	undefined uVar15;
	undefined4 uVar14;
	ulonglong in_r10;
	undefined uVar17;
	undefined4 uVar16;
	undefined *puVar18;
	undefined *puVar19;
	undefined4 in_stack_ffffffb8;

	puVar19 = PTR_DAT_100f1880;
	puVar18 = PTR_DAT_100f1874;
	puVar4 = PTR_DAT_100f1824;
	uVar16 = (undefined4)in_r10;
	uVar14 = (undefined4)in_r9;
	ppuVar5 = &toc;
	uVar8 = ZEXT48(PTR_DAT_100f18a4);
	iVar1 = *(int *)PTR_DAT_100f188c;
	if (iVar1 == 8) {
		NetSendCmdParam1(1, 0x1a, (longlong)(char)*PTR_DAT_100f1874, in_r6, in_r7, (int)in_r8, uVar14, uVar16,
		    in_stack_ffffffb8);
		uVar6 = 1;
	} else {
		if (iVar1 == 10) {
			NetSendCmdParam1(1, 0x4d, (longlong)(char)*PTR_DAT_100f1874, in_r6, in_r7, (int)in_r8, uVar14, uVar16,
			    in_stack_ffffffb8);
			uVar6 = 1;
		} else {
			if (iVar1 == 7) {
				DoTelekinesis();
				uVar6 = 1;
			} else {
				uVar13 = (undefined)in_r8;
				uVar9 = SUB41(PTR_DAT_100f18a4, 0);
				uVar11 = (undefined)in_r6;
				uVar12 = (undefined)in_r7;
				uVar15 = (undefined)in_r9;
				uVar17 = (undefined)in_r10;
				if (iVar1 == 2) {
					cVar10 = *PTR_DAT_100f18a4;
					if ((int)cVar10 == -1) {
						NewCursor(1, cVar10, uVar9, uVar11, uVar12, uVar13, uVar15, uVar17, in_stack_ffffffb8);
					} else {
						CheckIdentify((ulonglong) * (uint *)PTR_DAT_100f1824, (int)cVar10, uVar8, in_r6, in_r7, in_r8,
						    in_r9, in_r10, in_stack_ffffffb8);
					}
					uVar6 = 1;
				} else {
					if (iVar1 == 3) {
						cVar10 = *PTR_DAT_100f18a4;
						if ((int)cVar10 == -1) {
							NewCursor(1, cVar10, uVar9, uVar11, uVar12, uVar13, uVar15, uVar17, in_stack_ffffffb8);
						} else {
							DoRepair((ulonglong) * (uint *)PTR_DAT_100f1824, (int)cVar10, uVar8, in_r6, in_r7, in_r8,
							    in_r9, in_r10, in_stack_ffffffb8);
						}
						uVar6 = 1;
					} else {
						if (iVar1 == 4) {
							cVar10 = *PTR_DAT_100f18a4;
							if ((int)cVar10 == -1) {
								NewCursor(1, cVar10, uVar9, uVar11, uVar12, uVar13, uVar15, uVar17, in_stack_ffffffb8);
							} else {
								DoRecharge((ulonglong) * (uint *)PTR_DAT_100f1824, (int)cVar10, uVar8, in_r6, in_r7,
								    in_r8, in_r9, in_r10, in_stack_ffffffb8);
							}
							uVar6 = 1;
						} else {
							if (iVar1 == 9) {
								if (*(int *)PTR_DAT_100f1880 == -1) {
									if (*PTR_DAT_100f1874 == -1) {
										puVar18 = PTR_DAT_100f1828 + 0xac;
										lVar7 = GetSpellLevel(*(int *)PTR_DAT_100f1824,
										    *(int *)(puVar18 + *(int *)PTR_DAT_100f1824 * 0x55ec));
										uVar17 = (undefined)uVar16;
										uVar15 = (undefined)uVar14;
										uVar2 = (uint)lVar7 & 0xffff;
										uVar13 = (undefined)uVar2;
										uVar11 = (undefined)(*(uint *)ppuVar5[-0x1d97] & 0xff);
										cVar10 = (char)(*(uint *)ppuVar5[-0x1d96] & 0xff);
										uVar3 = *(uint *)(puVar18 + *(int *)puVar4 * 0x55ec) & 0xffff;
										uVar12 = (undefined)uVar3;
										uVar9 = 0xf;
										NetSendCmdLocParam2(1, 0xf, (ulonglong)(*(uint *)ppuVar5[-0x1d96] & 0xff),
										    (ulonglong)(*(uint *)ppuVar5[-0x1d97] & 0xff), (ulonglong)uVar3,
										    uVar2, uVar14, uVar16, in_stack_ffffffb8);
									} else {
										puVar19 = PTR_DAT_100f1828 + 0xac;
										lVar7 = GetSpellLevel(*(int *)PTR_DAT_100f1824,
										    *(int *)(puVar19 + *(int *)PTR_DAT_100f1824 * 0x55ec));
										uVar17 = (undefined)uVar16;
										uVar15 = (undefined)uVar14;
										uVar13 = (undefined)in_r8;
										uVar2 = (uint)lVar7 & 0xffff;
										uVar12 = (undefined)uVar2;
										cVar10 = *puVar18;
										uVar9 = 0x19;
										uVar3 = *(uint *)(puVar19 + *(int *)puVar4 * 0x55ec) & 0xffff;
										uVar11 = (undefined)uVar3;
										NetSendCmdParam3(1, 0x19, (longlong)cVar10, (ulonglong)uVar3, (ulonglong)uVar2, in_r8,
										    uVar14, uVar16, in_stack_ffffffb8);
									}
								} else {
									puVar18 = PTR_DAT_100f1828 + 0xac;
									lVar7 = GetSpellLevel(*(int *)PTR_DAT_100f1824,
									    *(int *)(puVar18 + *(int *)PTR_DAT_100f1824 * 0x55ec));
									uVar17 = (undefined)uVar16;
									uVar15 = (undefined)uVar14;
									uVar13 = (undefined)in_r8;
									uVar2 = (uint)lVar7 & 0xffff;
									uVar12 = (undefined)uVar2;
									uVar9 = 0x18;
									cVar10 = (char)(*(uint *)puVar19 & 0xffff);
									uVar3 = *(uint *)(puVar18 + *(int *)puVar4 * 0x55ec) & 0xffff;
									uVar11 = (undefined)uVar3;
									NetSendCmdParam3(1, 0x18, (ulonglong)(*(uint *)puVar19 & 0xffff), (ulonglong)uVar3,
									    (ulonglong)uVar2, in_r8, uVar14, uVar16, in_stack_ffffffb8);
								}
								NewCursor(1, uVar9, cVar10, uVar11, uVar12, uVar13, uVar15, uVar17, in_stack_ffffffb8);
								uVar6 = 1;
							} else {
								if ((iVar1 == 5) && (*PTR_DAT_100f1884 == -1)) {
									NewCursor(1, (char)PTR_DAT_100f1828, uVar9, uVar11, uVar12, uVar13, uVar15, uVar17,
									    in_stack_ffffffb8);
									uVar6 = 1;
								} else {
									uVar6 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
	return uVar6;
}

undefined8
LeftMouseDown(int param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4, longlong param_5,
    uint param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	undefined8 uVar8;
	ulonglong uVar9;
	int iVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined7 uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined uVar19;
	undefined4 in_stack_ffffffa8;

	puVar6 = PTR_DAT_100f1928;
	puVar5 = PTR_DAT_100f1924;
	puVar4 = PTR_DAT_100f1918;
	puVar3 = PTR_DAT_100f18cc;
	puVar2 = PTR_DAT_100f18a0;
	puVar1 = PTR_DAT_100f188c;
	uVar16 = (undefined7)((ulonglong)param_5 >> 8);
	uVar17 = (undefined)param_5;
	ppuVar7 = &toc;
	uVar8 = gmenu_left_mouse(1, (char)param_2, (char)param_3, (char)param_4, uVar17, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffffa8);
	if ((int)uVar8 == 0) {
		uVar8 = control_check_talk_btn();
		uVar19 = (undefined)param_8;
		uVar18 = (undefined)param_7;
		uVar15 = (undefined)param_6;
		uVar14 = (undefined)param_4;
		uVar13 = (undefined)param_3;
		uVar11 = (undefined)param_2;
		if (((int)uVar8 == 0) && (ppuVar7[-0x13d5] == (undefined *)0x0)) {
			if (*(int *)ppuVar7[-0x1d73] == 0) {
				if (*(int *)ppuVar7[-0x1d74] != 2) {
					uVar12 = SUB41(ppuVar7[-0x1d9e], 0);
					if (*(int *)ppuVar7[-0x1d9e] == 0) {
						if (*(int *)puVar4 == 0) {
							if (*ppuVar7[-0x1dd9] == '\0') {
								if (*(int *)puVar5 < 0x160) {
									uVar9 = gmenu_exception();
									if ((int)uVar9 != 0) {
										return 0;
									}
									iVar10 = TryIconCurs();
									if (iVar10 != 0) {
										return 0;
									}
									uVar11 = SUB41(ppuVar7[-0x1df2], 0);
									uVar13 = (undefined)param_2;
									uVar14 = (undefined)param_3;
									uVar15 = (undefined)param_4;
									uVar18 = (undefined)param_6;
									uVar19 = (undefined)param_7;
									uVar12 = (undefined)param_8;
									if ((((*(int *)ppuVar7[-0x1df2] != 0) && (0x20 < *(int *)puVar6)) && (*(int *)puVar6 < 0x120)) && ((iVar10 = *(int *)puVar5, 0x20 < iVar10 && (iVar10 < 0x134)))) {
										QuestlogESC(uVar11, uVar13, uVar14, uVar15, uVar17, uVar18, uVar19, uVar12,
										    in_stack_ffffffa8);
										return 0;
									}
									if (*puVar2 != '\0') {
										*puVar2 = 0;
										uVar8 = sfx_stop(uVar11, uVar13, uVar14, uVar15, uVar17, uVar18, uVar19, uVar12,
										    in_stack_ffffffa8);
										music_stop2(uVar8, param_2, param_3, param_4, CONCAT71(uVar16, uVar17), param_6,
										    param_7, param_8, in_stack_ffffffa8);
										return 0;
									}
									if ((*(int *)ppuVar7[-0x1df1] != 0) && (*(int *)puVar6 < 0x140)) {
										CheckChrBtns();
										return 0;
									}
									if ((*(int *)ppuVar7[-0x1def] != 0) && (0x140 < *(int *)puVar6)) {
										if (*(int *)puVar3 == 0) {
											CheckInvItem();
										}
										return 0;
									}
									uVar11 = SUB41(ppuVar7[-0x1df0], 0);
									if ((*(int *)ppuVar7[-0x1df0] != 0) && (0x140 < *(int *)puVar6)) {
										CheckSBook(uVar11, uVar13, uVar14, uVar15, uVar17, uVar18, uVar19, uVar12,
										    in_stack_ffffffa8);
										return 0;
									}
									if (0xb < *(int *)puVar1) {
										uVar8 = TryInvPut(uVar11, uVar13, uVar14, uVar15, uVar17, uVar18, uVar19, uVar12,
										    in_stack_ffffffa8);
										uVar14 = (undefined)param_8;
										uVar13 = (undefined)param_7;
										uVar11 = (undefined)param_6;
										if ((int)uVar8 != 0) {
											uVar15 = 10;
											uVar18 = (undefined)(*(uint *)ppuVar7[-0x1d96] & 0xff);
											uVar19 = (undefined)(*(uint *)ppuVar7[-0x1d97] & 0xff);
											NetSendCmdPItem(1, 10, (ulonglong)(*(uint *)ppuVar7[-0x1d96] & 0xff),
											    (ulonglong)(*(uint *)ppuVar7[-0x1d97] & 0xff),
											    CONCAT71(uVar16, uVar17), param_6, param_7, param_8, in_stack_ffffffa8);
											NewCursor(1, uVar15, uVar18, uVar19, uVar17, uVar11, uVar13, uVar14,
											    in_stack_ffffffa8);
										}
										return 0;
									}
									uVar9 = ZEXT48(ppuVar7[-0x1dea]);
									if ((*(int *)(ppuVar7[-0x1dea] + *(int *)ppuVar7[-0x1deb] * 0x55ec + 0x180) != 0)
									    && (*(int *)puVar4 == 0)) {
										CheckLvlBtn();
									}
									if (*(int *)ppuVar7[-0x1db6] == 0) {
										uVar8 = countLeadingZeros(5 - param_1);
										uVar8 = LeftMouseCmd((uint)uVar8 >> 5 & 0xff, uVar9, param_3, param_4,
										    CONCAT71(uVar16, uVar17), param_6, param_7, param_8,
										    in_stack_ffffffa8);
										return uVar8;
									}
								} else {
									uVar12 = SUB41(ppuVar7[-0x1db4], 0);
									if ((*(int *)ppuVar7[-0x1db4] == 0) && (*(int *)puVar3 == 0)) {
										uVar9 = gmenu_exception();
										uVar12 = (undefined)uVar9;
										if ((int)uVar9 == 0) {
											uVar12 = CheckInvScrn(uVar12, uVar11, uVar13, uVar14, uVar17, uVar15, uVar18, uVar19,
											    in_stack_ffffffa8);
										}
									}
									DoPanBtn(uVar12, uVar11, uVar13, uVar14, uVar17, uVar15, uVar18, uVar19,
									    in_stack_ffffffa8);
									iVar10 = *(int *)puVar1;
									if ((1 < iVar10) && (iVar10 < 0xc)) {
										NewCursor(1, uVar11, uVar13, uVar14, uVar17, uVar15, uVar18, uVar19,
										    in_stack_ffffffa8);
									}
								}
							} else {
								CheckStoreBtn();
							}
						} else {
							SetSpell(uVar12, uVar11, uVar13, uVar14, uVar17, uVar15, uVar18, uVar19, in_stack_ffffffa8);
						}
					} else {
						doom_close(uVar12, uVar11, uVar13, uVar14, uVar17, uVar15, uVar18, uVar19, in_stack_ffffffa8);
					}
				}
			} else {
				control_check_btn_press((char)ppuVar7[-0x1d73], uVar11, uVar13, uVar14, uVar17, uVar15, uVar18, uVar19,
				    in_stack_ffffffa8);
			}
		}
	}
	return 0;
}

void LeftMouseUp(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	gmenu_left_mouse(0, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	control_release_talk_btn();
	if (*(int *)ppuVar1[-0x1db8] != 0) {
		CheckBtnUp((char)ppuVar1[-0x1db8], param_2, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffc8);
	}
	if (*(int *)ppuVar1[-0x1dbb] != 0) {
		ReleaseChrBtns();
	}
	if (*(int *)ppuVar1[-0x1db6] != 0) {
		ReleaseLvlBtn();
	}
	if (*ppuVar1[-0x1dd9] != '\0') {
		ReleaseStoreBtn();
	}
	return;
}

void RightMouseDown(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	char cVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	int iVar7;
	undefined8 uVar6;
	longlong lVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined7 uVar13;
	undefined uVar14;
	undefined7 uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f18a4;
	puVar2 = PTR_DAT_100f1824;
	uVar15 = (undefined7)((ulonglong)param_6 >> 8);
	uVar16 = (undefined)param_6;
	uVar13 = (undefined7)((ulonglong)param_5 >> 8);
	uVar14 = (undefined)param_5;
	uVar11 = (undefined7)((ulonglong)param_4 >> 8);
	uVar12 = (undefined)param_4;
	uVar9 = (undefined7)((ulonglong)param_3 >> 8);
	uVar10 = (undefined)param_3;
	ppuVar4 = &toc;
	uVar5 = gmenu_exception();
	if (((((int)uVar5 == 0) && (ppuVar4[-0x13d5] == (undefined *)0x0)) && (*(int *)ppuVar4[-0x1d74] != 2)) && (ppuVar4[-0x1dea][*(int *)puVar2 * 0x55ec + 0x139] == '\0')) {
		if (*(int *)ppuVar4[-0x1d9e] == 0) {
			if (*ppuVar4[-0x1dd9] == '\0') {
				if (*(int *)ppuVar4[-0x1dae] == 0) {
					if (*(int *)ppuVar4[-0x1dab] < 0x160) {
						if ((*(int *)ppuVar4[-0x1df0] != 0) && (0x140 < *(int *)ppuVar4[-0x1daa])) {
							return;
						}
						iVar7 = TryIconCurs();
						if (iVar7 != 0) {
							return;
						}
						param_2._7_1_ = *puVar3;
						if (((char)param_2 != -1) && (uVar6 = UseInvItem((ulonglong) * (uint *)puVar2, (longlong)(char)param_2, uVar10, uVar12, uVar14, uVar16, (char)param_7, (char)param_8, in_stack_ffffffc8), (int)uVar6 != 0)) {
							return;
						}
					}
					uVar5 = ZEXT48(ppuVar4[-0x1dd1]);
					iVar7 = *(int *)ppuVar4[-0x1dd1];
					if (iVar7 == 1) {
						cVar1 = *puVar3;
						lVar8 = (longlong)cVar1;
						if ((cVar1 == -1) || (uVar5 = UseInvItem((ulonglong) * (uint *)puVar2, lVar8, uVar10, uVar12, uVar14, uVar16, (char)param_7, (char)param_8, in_stack_ffffffc8), (int)uVar5 == 0)) {
							CheckPlrSpell(uVar5, lVar8, CONCAT71(uVar9, uVar10), CONCAT71(uVar11, uVar12),
							    CONCAT71(uVar13, uVar14), CONCAT71(uVar15, uVar16), param_7, param_8,
							    in_stack_ffffffc8);
						}
					} else {
						if ((1 < iVar7) && (iVar7 < 0xc)) {
							NewCursor(1, (char)param_2, uVar10, uVar12, uVar14, uVar16, (char)param_7, (char)param_8,
							    in_stack_ffffffc8);
						}
					}
				} else {
					SetSpell((char)ppuVar4[-0x1dae], (char)param_2, uVar10, uVar12, uVar14, uVar16,
					    (char)param_7, (char)param_8, in_stack_ffffffc8);
				}
			}
		} else {
			doom_close((char)ppuVar4[-0x1d9e], (char)param_2, uVar10, uVar12, uVar14, uVar16, (char)param_7,
			    (char)param_8, in_stack_ffffffc8);
		}
	}
	return;
}

void GM_Game(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffffc8;

	gmenu_on_mouse_move(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	return;
}

void diablo_pause_game(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f1a00;
	puVar1 = PTR_DAT_100f17e0;
	ppuVar3 = &toc;
	if ((byte)*PTR_DAT_100f17e0 < 2) {
		if (*(int *)PTR_DAT_100f1a00 == 0) {
			*(undefined4 *)PTR_DAT_100f1a00 = 2;
			ppuVar3 = &toc;
			FreeMonsterSnd((char)puVar1, (char)puVar2, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8);
			track_repeat_walk(0);
		} else {
			*(undefined4 *)PTR_DAT_100f1a00 = 0;
		}
		*(undefined4 *)ppuVar3[-0x1daf] = 0xff;
	}
	return;
}

void diablo_hotkey_msg(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 in_stack_ffffff78;
	undefined auStack88[88];

	if (*PTR_DAT_100f17e0 != '\x01') {
		strcpy((int)auStack88, (int)(s_I_need_help__Come_Here__100f6b90 + param_1 * 0x50));
		NetSendCmdString(0xffffffff, (uint)auStack88, param_3, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffff78);
	}
	return;
}

undefined8
PressSysKey(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	ulonglong uVar1;
	undefined8 uVar2;
	undefined4 in_stack_ffffffc8;

	uVar1 = gmenu_exception();
	if ((int)uVar1 == 0) {
		if (param_1 == 0x79) {
			diablo_hotkey_msg(1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			uVar2 = 1;
		} else {
			uVar2 = 0;
		}
	} else {
		uVar2 = 0;
	}
	return uVar2;
}

ulonglong PressEscKey_part(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	ulonglong uVar6;
	undefined8 uVar7;
	ulonglong uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined7 uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined4 in_stack_ffffffb8;

	puVar4 = PTR_DAT_100f19fc;
	puVar3 = PTR_DAT_100f1918;
	puVar2 = PTR_DAT_100f18a0;
	uVar13 = (undefined7)((ulonglong)param_5 >> 8);
	uVar14 = (undefined)param_5;
	uVar11 = (undefined7)((ulonglong)param_4 >> 8);
	uVar12 = (undefined)param_4;
	uVar9 = (undefined7)(param_3 >> 8);
	uVar10 = (undefined)param_3;
	ppuVar5 = &toc;
	uVar8 = ZEXT48(PTR_DAT_100f1958);
	iVar1 = *(int *)PTR_DAT_100f1958;
	if (iVar1 != 0) {
		ppuVar5 = &toc;
		doom_close(0, (char)PTR_DAT_100f1958, uVar10, uVar12, uVar14, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffb8);
	}
	uVar17 = (undefined)param_8;
	uVar16 = (undefined)param_7;
	uVar15 = (undefined)param_6;
	uVar6 = (ulonglong)(iVar1 != 0);
	if (*(int *)puVar4 != 0) {
		*(undefined4 *)puVar4 = 0;
		uVar6 = 1;
	}
	if (*puVar2 == '\0') {
		if (*ppuVar5[-0x1dd9] != '\0') {
			STextESC();
			uVar6 = 1;
		}
	} else {
		*puVar2 = 0;
		uVar7 = sfx_stop((char)uVar6, (char)uVar8, uVar10, uVar12, uVar14, uVar15, uVar16, uVar17,
		    in_stack_ffffffb8);
		uVar17 = (undefined)param_8;
		uVar16 = (undefined)param_7;
		uVar15 = (undefined)param_6;
		music_stop2(uVar7, uVar8, CONCAT71(uVar9, uVar10), CONCAT71(uVar11, uVar12), CONCAT71(uVar13, uVar14),
		    param_6, param_7, param_8, in_stack_ffffffb8);
		uVar6 = 1;
	}
	if (*ppuVar5[-0x1d76] != '\0') {
		uVar6 = 1;
		*ppuVar5[-0x1d77] = 0;
	}
	if (*(int *)ppuVar5[-0x1db4] != 0) {
		control_reset_talk();
		uVar6 = 1;
	}
	if (*(int *)ppuVar5[-0x1dc1] != 0) {
		control_drop_gold('\x1b', (char)ppuVar5[-0x1dc1], uVar10, uVar12, uVar14, uVar15, uVar16, uVar17,
		    in_stack_ffffffb8);
		uVar6 = 1;
	}
	if (*(int *)puVar3 != 0) {
		*(undefined4 *)puVar3 = 0;
		uVar6 = 1;
	}
	return uVar6;
}

void SetCursorPos_wrapper(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	bool bVar2;
	bool bVar3;
	undefined uVar4;
	char cVar5;
	undefined uVar6;
	undefined in_stack_ffffffcb;
	undefined in_stack_ffffffcf;
	undefined4 local_2c;

	iVar1 = *(int *)PTR_DAT_100f1928;
	if (*(int *)PTR_DAT_100f1924 < 0x160) {
		bVar3 = true;
		if ((*(int *)PTR_DAT_100f180c == 0) && (*(int *)PTR_DAT_100f1808 == 0)) {
			bVar3 = false;
		}
		uVar4 = SUB41(PTR_DAT_100f1814, 0);
		bVar2 = true;
		if ((*(int *)PTR_DAT_100f1814 == 0) && (uVar4 = SUB41(PTR_DAT_100f1810, 0), *(int *)PTR_DAT_100f1810 == 0)) {
			bVar2 = false;
		}
		cVar5 = (char)iVar1;
		uVar6 = (undefined) * (int *)PTR_DAT_100f1924;
		if (((param_1 == 0) || (bVar2)) || (iVar1 < 0x141)) {
			if (((param_2 != 0) && (!bVar3)) && (iVar1 < 0x140)) {
				SetCursorPos(cVar5 + -0x60, uVar6, uVar4, bVar2, cVar5, uVar6, bVar3, param_8, in_stack_ffffffcb,
				    in_stack_ffffffcf, local_2c);
			}
		} else {
			SetCursorPos(cVar5 + '`', uVar6, uVar4, bVar2, cVar5, uVar6, bVar3, param_8, in_stack_ffffffcb,
			    in_stack_ffffffcf, local_2c);
		}
	}
	return;
}

undefined8
PressEscKey(undefined8 param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	int iVar9;
	ulonglong uVar10;
	undefined8 uVar11;
	int iVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined uVar17;
	undefined uVar18;
	undefined uVar19;
	undefined4 in_stack_ffffffb8;

	puVar8 = PTR_DAT_100f1814;
	puVar7 = PTR_DAT_100f1810;
	puVar6 = PTR_DAT_100f180c;
	puVar5 = PTR_DAT_100f1808;
	uVar16 = (undefined)param_5;
	uVar19 = (undefined)param_8;
	uVar18 = (undefined)param_7;
	uVar17 = (undefined)param_6;
	uVar10 = PressEscKey_part(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	if ((int)uVar10 == 0) {
		uVar1 = *(uint *)puVar8;
		iVar12 = 1;
		uVar2 = *(uint *)puVar6;
		uVar14 = (undefined)uVar2;
		uVar3 = *(uint *)puVar7;
		uVar4 = *(uint *)puVar5;
		uVar15 = (undefined)uVar4;
		if ((uVar1 == 0) && (uVar3 == 0)) {
			iVar12 = 0;
		}
		iVar9 = 1;
		if ((uVar2 == 0) && (uVar4 == 0)) {
			iVar9 = 0;
		}
		uVar13 = (undefined)iVar12;
		SetCursorPos_wrapper(iVar9, iVar12, uVar14, uVar15, uVar16, uVar17, uVar18, uVar19, in_stack_ffffffb8);
		*(undefined4 *)puVar8 = 0;
		*(undefined4 *)puVar6 = 0;
		*(undefined4 *)puVar7 = 0;
		*(undefined4 *)puVar5 = 0;
		if ((uVar4 | uVar3 | uVar1 | uVar2) == 0) {
			uVar10 = gmenu_exception();
			if ((int)uVar10 == 0) {
				uVar11 = 0;
			} else {
				gamemenu_off((char)uVar10, uVar13, uVar14, uVar15, uVar16, uVar17, uVar18, uVar19, in_stack_ffffffb8);
				uVar11 = 1;
			}
		} else {
			uVar11 = 1;
		}
	} else {
		uVar11 = 1;
	}
	return uVar11;
}

void PressKey(ulonglong param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	uint uVar16;
	undefined8 uVar14;
	ulonglong uVar15;
	ulonglong extraout_r3;
	ulonglong extraout_r3_00;
	ulonglong extraout_r3_01;
	ulonglong extraout_r3_02;
	undefined uVar17;
	undefined uVar18;
	undefined7 uVar19;
	undefined uVar20;
	undefined7 uVar21;
	undefined uVar22;
	undefined7 uVar23;
	undefined uVar24;
	undefined uVar25;
	undefined uVar26;
	undefined uVar27;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	int local_5c;

	puVar13 = PTR_DAT_100f19fc;
	puVar12 = PTR_DAT_100f19f4;
	puVar11 = PTR_DAT_100f1918;
	puVar10 = PTR_DAT_100f1900;
	puVar9 = PTR_DAT_100f18a0;
	puVar8 = PTR_DAT_100f186c;
	puVar7 = PTR_DAT_100f1858;
	puVar6 = PTR_DAT_100f183c;
	puVar5 = PTR_DAT_100f1814;
	puVar4 = PTR_DAT_100f1810;
	puVar3 = PTR_DAT_100f180c;
	puVar2 = PTR_DAT_100f1808;
	uVar23 = (undefined7)((ulonglong)param_5 >> 8);
	uVar24 = (undefined)param_5;
	uVar21 = (undefined7)((ulonglong)param_4 >> 8);
	uVar22 = (undefined)param_4;
	uVar19 = (undefined7)(param_3 >> 8);
	uVar20 = (undefined)param_3;
	uVar16 = GetKeyState(0x11, (char)param_2, uVar20, uVar22, uVar24, (char)param_6, (char)param_7,
	    (char)param_8, (char)in_stack_ffffff98, in_stack_ffffff9f, local_5c);
	if ((uVar16 & 0x8000) != 0) {
		uVar14._4_4_ = (int)param_1;
		if (uVar14._4_4_ == 0x37) {
			param_1 = 0x76;
		} else {
			if (uVar14._4_4_ < 0x37) {
				if (uVar14._4_4_ == 0x33) {
					param_1 = 0x72;
				} else {
					if (uVar14._4_4_ < 0x33) {
						if (uVar14._4_4_ == 0x31) {
							param_1 = 0x70;
						} else {
							if (uVar14._4_4_ < 0x31) {
								if (0x2f < uVar14._4_4_) {
									param_1 = 0x79;
								}
							} else {
								param_1 = 0x71;
							}
						}
					} else {
						if (uVar14._4_4_ == 0x35) {
							param_1 = 0x74;
						} else {
							if (uVar14._4_4_ < 0x35) {
								param_1 = 0x73;
							} else {
								param_1 = 0x75;
							}
						}
					}
				}
			} else {
				if (uVar14._4_4_ == 0xbb) {
					param_1 = 0x7b;
				} else {
					if (uVar14._4_4_ < 0xbb) {
						if (uVar14._4_4_ == 0x39) {
							param_1 = 0x78;
						} else {
							if (uVar14._4_4_ < 0x39) {
								param_1 = 0x77;
							}
						}
					} else {
						if (uVar14._4_4_ == 0xbd) {
							param_1 = 0x7a;
						}
					}
				}
			}
		}
	}
	uVar14._4_4_ = (int)param_1;
	uVar14 = gmenu_presskeys(uVar14._4_4_, (char)param_2, uVar20, uVar22, uVar24, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff98);
	if ((int)uVar14 != 0) {
		return;
	}
	uVar14 = control_presskeys(param_1, param_2, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22),
	    CONCAT71(uVar23, uVar24), param_6, param_7, param_8, in_stack_ffffff98);
	if ((int)uVar14 != 0) {
		return;
	}
	uVar15 = ZEXT48(*(int **)(local_5c + -0x75cc));
	if (**(int **)(local_5c + -0x75cc) != 0) {
		if (*(int *)(local_5c + -0x4f54) != 0) {
			return;
		}
		if ((param_1 & 0xffffffff) == 0x78) {
			diablo_hotkey_msg(0, param_2, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24), param_6, param_7, param_8, in_stack_ffffff98);
			uVar15 = extraout_r3;
		}
		if ((param_1 & 0xffffffff) == 0x79) {
			diablo_hotkey_msg(1, param_2, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24), param_6, param_7, param_8, in_stack_ffffff98);
			uVar15 = extraout_r3_00;
		}
		if ((param_1 & 0xffffffff) == 0x7a) {
			diablo_hotkey_msg(2, param_2, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24), param_6, param_7, param_8, in_stack_ffffff98);
			uVar15 = extraout_r3_01;
		}
		if ((param_1 & 0xffffffff) == 0x7b) {
			diablo_hotkey_msg(3, param_2, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24), param_6, param_7, param_8, in_stack_ffffff98);
			uVar15 = extraout_r3_02;
		}
		if ((param_1 & 0xffffffff) == 0xd) {
			uVar15 = control_type_message();
		}
		if ((param_1 & 0xffffffff) != 0x1b) {
			return;
		}
	}
	uVar18 = (undefined)param_2;
	uVar27 = (undefined)param_8;
	uVar26 = (undefined)param_7;
	uVar25 = (undefined)param_6;
	if ((param_1 & 0xffffffff) == 0x1b) {
		uVar14 = PressEscKey(uVar15, param_2, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22),
		    CONCAT71(uVar23, uVar24), param_6, param_7, param_8, in_stack_ffffff98);
		if ((int)uVar14 == 0) {
			track_repeat_walk(0);
			gamemenu_previous(0, param_2, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24), param_6, param_7, param_8, in_stack_ffffff98);
		}
	} else {
		if ((*(int *)(local_5c + -0x4f54) == 0) && (**(int **)(local_5c + -0x7704) == 0)) {
			if ((param_1 & 0xffffffff) == 0x13) {
				diablo_pause_game((char)*(int **)(local_5c + -0x7704), uVar18, uVar20, uVar22, uVar24, uVar25, uVar26,
				    uVar27, in_stack_ffffff98);
			} else {
				piVar1 = *(int **)(local_5c + -0x75d0);
				if (*piVar1 != 2) {
					if ((param_1 & 0xffffffff) == 0xd) {
						if (*puVar8 == '\0') {
							if (*(int *)puVar2 == 0) {
								control_type_message();
							} else {
								QuestlogEnter();
							}
						} else {
							STextEnter(ZEXT48(piVar1), param_2, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22),
							    CONCAT71(uVar23, uVar24), param_6, param_7, param_8, in_stack_ffffff98);
						}
					} else {
						if (*(int *)(local_5c + -0x4f58) != 0) {
							if (uVar14._4_4_ == 0x72) {
								param_1 = 0x76;
							} else {
								if (uVar14._4_4_ < 0x72) {
									if (uVar14._4_4_ == 0x70) {
										param_1 = 0x74;
									} else {
										if (0x6f < uVar14._4_4_) {
											param_1 = 0x75;
										}
									}
								} else {
									if (uVar14._4_4_ < 0x74) {
										param_1 = 0x77;
									}
								}
							}
						}
						if (((param_1 & 0xffffffff) == 0x70) || ((param_1 & 0xffffffff) == 0x2d)) {
							if (*(int *)puVar13 == 0) {
								if (*puVar8 == '\0') {
									uVar17 = 0;
									*(undefined4 *)puVar5 = 0;
									*(undefined4 *)puVar3 = 0;
									*(undefined4 *)puVar4 = 0;
									*(undefined4 *)puVar11 = 0;
									if ((*puVar9 != '\0') && (*puVar6 == '\0')) {
										*puVar9 = 0;
										uVar14 = sfx_stop(0, uVar18, uVar20, uVar22, uVar24, uVar25, uVar26, uVar27,
										    in_stack_ffffff98);
										uVar27 = (undefined)param_8;
										uVar26 = (undefined)param_7;
										uVar25 = (undefined)param_6;
										uVar18 = (undefined)param_2;
										uVar17 = music_stop2(uVar14, param_2, CONCAT71(uVar19, uVar20),
										    CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24), param_6,
										    param_7, param_8, in_stack_ffffff98);
									}
									*(undefined4 *)puVar2 = 0;
									*(undefined4 *)puVar7 = 0;
									*puVar12 = 0;
									gamemenu_off(uVar17, uVar18, uVar20, uVar22, uVar24, uVar25, uVar26, uVar27,
									    in_stack_ffffff98);
									uVar17 = DisplayHelp();
									doom_close(uVar17, uVar18, uVar20, uVar22, uVar24, uVar25, uVar26, uVar27,
									    in_stack_ffffff98);
								} else {
									ClearPanel();
									AddPanelString(*(int *)(local_5c + -0x63f0), 1, uVar20, uVar22, uVar24, uVar25, uVar26,
									    uVar27, in_stack_ffffff98);
									AddPanelString(*(int *)(local_5c + -0x63f4), 1, uVar20, uVar22, uVar24, uVar25, uVar26,
									    uVar27, in_stack_ffffff98);
									track_repeat_walk(0);
								}
							} else {
								*(undefined4 *)puVar13 = 0;
							}
						} else {
							if ((param_1 & 0xffffffff) == 0x74) {
								if (*(int *)puVar11 == 0) {
									ToggleSpell(0, uVar18, uVar20, uVar22, uVar24, uVar25, uVar26, uVar27, in_stack_ffffff98);
								} else {
									SetSpeedSpell(0);
								}
							} else {
								if ((param_1 & 0xffffffff) == 0x75) {
									if (*(int *)puVar11 == 0) {
										ToggleSpell(1, uVar18, uVar20, uVar22, uVar24, uVar25, uVar26, uVar27,
										    in_stack_ffffff98);
									} else {
										SetSpeedSpell(1);
									}
								} else {
									if ((param_1 & 0xffffffff) == 0x76) {
										if (*(int *)puVar11 == 0) {
											ToggleSpell(2, uVar18, uVar20, uVar22, uVar24, uVar25, uVar26, uVar27,
											    in_stack_ffffff98);
										} else {
											SetSpeedSpell(2);
										}
									} else {
										if ((param_1 & 0xffffffff) == 0x77) {
											if (*(int *)puVar11 == 0) {
												ToggleSpell(3, uVar18, uVar20, uVar22, uVar24, uVar25, uVar26, uVar27,
												    in_stack_ffffff98);
											} else {
												SetSpeedSpell(3);
											}
										} else {
											if ((param_1 & 0xffffffff) == 0x78) {
												diablo_hotkey_msg(0, param_2, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22),
												    CONCAT71(uVar23, uVar24), param_6, param_7, param_8,
												    in_stack_ffffff98);
											} else {
												if ((param_1 & 0xffffffff) == 0x79) {
													diablo_hotkey_msg(1, param_2, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22),
													    CONCAT71(uVar23, uVar24), param_6, param_7, param_8,
													    in_stack_ffffff98);
												} else {
													if ((param_1 & 0xffffffff) == 0x7a) {
														diablo_hotkey_msg(2, param_2, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22),
														    CONCAT71(uVar23, uVar24), param_6, param_7, param_8,
														    in_stack_ffffff98);
													} else {
														if ((param_1 & 0xffffffff) == 0x7b) {
															diablo_hotkey_msg(3, param_2, CONCAT71(uVar19, uVar20), CONCAT71(uVar21, uVar22), CONCAT71(uVar23, uVar24), param_6, param_7, param_8,
															    in_stack_ffffff98);
														} else {
															uVar17 = SUB41(piVar1, 0);
															if ((param_1 & 0xffffffff) == 0x26) {
																if (*puVar8 == '\0') {
																	if (*(int *)puVar2 == 0) {
																		if (*(int *)puVar13 == 0) {
																			if (*(int *)puVar7 != 0) {
																				AutomapUp();
																			}
																		} else {
																			HelpScrollUp();
																		}
																	} else {
																		QuestlogUp(uVar17, uVar18, uVar20, uVar22, uVar24, uVar25, uVar26,
																		    uVar27, in_stack_ffffff98);
																	}
																} else {
																	STextUp(uVar17, uVar18, uVar20, uVar22, uVar24, uVar25, uVar26,
																	    uVar27, in_stack_ffffff98);
																}
															} else {
																if ((param_1 & 0xffffffff) == 0x28) {
																	if (*puVar8 == '\0') {
																		if (*(int *)puVar2 == 0) {
																			if (*(int *)puVar13 == 0) {
																				if (*(int *)puVar7 != 0) {
																					AutomapDown();
																				}
																			} else {
																				HelpScrollDown();
																			}
																		} else {
																			QuestlogDown(uVar17, uVar18, uVar20, uVar22, uVar24, uVar25, uVar26,
																			    uVar27, in_stack_ffffff98);
																		}
																	} else {
																		STextDown(uVar17, uVar18, uVar20, uVar22, uVar24, uVar25, uVar26,
																		    uVar27, in_stack_ffffff98);
																	}
																} else {
																	if ((param_1 & 0xffffffff) == 0x21) {
																		if (*puVar8 != '\0') {
																			STextPrior(uVar17, uVar18, uVar20, uVar22, uVar24, uVar25, uVar26,
																			    uVar27, in_stack_ffffff98);
																		}
																	} else {
																		if ((param_1 & 0xffffffff) == 0x22) {
																			if (*puVar8 != '\0') {
																				STextNext(uVar17, uVar18, uVar20, uVar22, uVar24, uVar25,
																				    uVar26, uVar27, in_stack_ffffff98);
																			}
																		} else {
																			if ((param_1 & 0xffffffff) == 0x25) {
																				if ((*(int *)puVar7 != 0) && (*(int *)puVar10 == 0)) {
																					AutomapLeft();
																				}
																			} else {
																				if ((param_1 & 0xffffffff) == 0x27) {
																					if ((*(int *)puVar7 != 0) && (*(int *)puVar10 == 0)) {
																						AutomapRight();
																					}
																				} else {
																					if ((param_1 & 0xffffffff) == 9) {
																						DoAutoMap(uVar17, uVar18, uVar20, uVar22, uVar24, uVar25,
																						    uVar26, uVar27, in_stack_ffffff98);
																					} else {
																						if ((param_1 & 0xffffffff) == 0x20) {
																							uVar16 = 1;
																							if ((*(int *)puVar5 == 0) && (*(int *)puVar4 == 0)) {
																								uVar16 = 0;
																							}
																							uVar14._4_4_ = 1;
																							if ((*(int *)puVar3 == 0) && (*(int *)puVar2 == 0)) {
																								uVar14._4_4_ = 0;
																							}
																							uVar15 = (ulonglong)uVar16;
																							SetCursorPos_wrapper(uVar14._4_4_, uVar16, uVar20, uVar22, uVar24,
																							    uVar25, uVar26, uVar27, in_stack_ffffff98);
																							uVar17 = (undefined)param_8;
																							uVar27 = (undefined)param_7;
																							uVar26 = (undefined)param_6;
																							uVar25 = (undefined)uVar15;
																							uVar18 = 0;
																							*(undefined4 *)puVar13 = 0;
																							*(undefined4 *)puVar5 = 0;
																							*(undefined4 *)puVar3 = 0;
																							*(undefined4 *)puVar4 = 0;
																							*(undefined4 *)puVar11 = 0;
																							if ((*puVar9 != '\0') && (*puVar6 == '\0')) {
																								*puVar9 = 0;
																								uVar14 = sfx_stop(0, uVar25, uVar20, uVar22, uVar24,
																								    uVar26, uVar27, uVar17,
																								    in_stack_ffffff98);
																								uVar17 = (undefined)param_8;
																								uVar27 = (undefined)param_7;
																								uVar26 = (undefined)param_6;
																								uVar25 = (undefined)uVar15;
																								uVar18 = music_stop2(uVar14, uVar15,
																								    CONCAT71(uVar19, uVar20),
																								    CONCAT71(uVar21, uVar22),
																								    CONCAT71(uVar23, uVar24),
																								    param_6, param_7, param_8,
																								    in_stack_ffffff98);
																							}
																							*(undefined4 *)puVar2 = 0;
																							*(undefined4 *)puVar7 = 0;
																							*puVar12 = 0;
																							uVar18 = gamemenu_off(uVar18, uVar25, uVar20, uVar22,
																							    uVar24, uVar26, uVar27, uVar17,
																							    in_stack_ffffff98);
																							doom_close(uVar18, uVar25, uVar20, uVar22, uVar24, uVar26, uVar27, uVar17, in_stack_ffffff98);
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return;
}

void PressChar(ulonglong param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	ulonglong uVar3;
	undefined8 uVar4;
	undefined uVar5;
	char cVar6;
	undefined4 in_stack_ffffff98;

	puVar1 = PTR_DAT_100f18cc;
	ppuVar2 = &toc;
	uVar3 = gmenu_exception();
	if (((((int)uVar3 == 0) && (uVar4 = control_talk_last_key(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98), (int)uVar4 == 0)) && (ppuVar2[-0x13d5] == (undefined *)0x0)) && (*(int *)ppuVar2[-0x1d73] == 0)) {
		cVar6 = (char)param_1;
		if ((cVar6 == 'p') || (cVar6 == 'P')) {
			diablo_pause_game(cVar6, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
		} else {
			if (*(int *)ppuVar2[-0x1d74] != 2) {
				uVar5 = SUB41(ppuVar2[-0x1d9e], 0);
				if (*(int *)ppuVar2[-0x1d9e] == 0) {
					if (*(int *)puVar1 == 0) {
						if ((param_1 - 0x21 & 0xffffffff) < 0x5a) {
							// WARNING: Could not recover jumptable at 0x10025e30. Too many branches
							// WARNING: Treating indirect jump as call
							(*(code *)ppuVar2[(int)(param_1 - 0x21) + -0x8be])();
							return;
						}
					} else {
						control_drop_gold(cVar6, uVar5, param_3, param_4, param_5, param_6, param_7, param_8,
						    in_stack_ffffff98);
					}
				} else {
					doom_close(cVar6, uVar5, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
				}
			}
		}
	}
	return;
}

// WARNING: Removing unreachable block (ram,0x100267c0)

void LoadLvlGFX(undefined8 param_1, longlong param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	byte bVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	longlong lVar8;
	undefined8 uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined7 uVar14;
	undefined uVar15;
	ulonglong uVar16;
	ulonglong uVar17;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	puVar6 = PTR_DAT_100f1a68;
	puVar5 = PTR_DAT_100f1a64;
	puVar4 = PTR_DAT_100f1a60;
	puVar3 = PTR_DAT_100f1a5c;
	puVar2 = PTR_DAT_100f19e8;
	uVar14 = (undefined7)((ulonglong)param_5 >> 8);
	uVar15 = (undefined)param_5;
	uVar12 = (undefined7)((ulonglong)param_4 >> 8);
	uVar13 = (undefined)param_4;
	uVar10 = (undefined7)((ulonglong)param_3 >> 8);
	uVar11 = (undefined)param_3;
	ppuVar7 = &toc;
	uVar16 = ZEXT48(PTR_s_Levels_L2Data_L2S_CEL_100f2ba8);
	uVar17 = ZEXT48(PTR_s_Levels_L1Data_L1S_CEL_100f2bb8);
	if (*(int *)PTR_DAT_100f1a68 != 0) {
		ppuVar7 = &toc;
		FUN_100b9100(*(int *)PTR_DAT_100f1a68, (char)param_2, uVar11, uVar13, uVar15, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffa8);
		mem_free_dbg((int **)puVar6, (char)param_2, uVar11, uVar13, uVar15, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_ffffffa8);
	}
	bVar1 = *ppuVar7[-0x1de5];
	if (bVar1 == 2) {
		uVar9 = 0;
		lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x1907]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
		    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8,
		    in_stack_ffffffa8);
		*(int *)puVar6 = (int)lVar8;
		uVar17 = FUN_100b8f7c((ulonglong) * (uint *)puVar6, uVar9, CONCAT71(uVar10, uVar11),
		    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8,
		    in_stack_ffffffa8);
		*(int *)puVar2 = (int)uVar17;
		lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x1908]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
		    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8,
		    in_stack_ffffffa8);
		*(int *)puVar5 = (int)lVar8;
		lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x1909]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
		    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8,
		    in_stack_ffffffa8);
		*(int *)puVar4 = (int)lVar8;
		lVar8 = LoadFileInMem(uVar16, (undefined4 *)0x0, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13),
		    CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8);
		*(int *)puVar3 = (int)lVar8;
	} else {
		if (bVar1 < 2) {
			if (bVar1 == 0) {
				uVar9 = 0;
				lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x18ff]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8);
				*(int *)puVar6 = (int)lVar8;
				uVar16 = FUN_100b8f7c((ulonglong) * (uint *)puVar6, uVar9, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7,
				    param_8, in_stack_ffffffa8);
				*(int *)puVar2 = (int)uVar16;
				lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x1900]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8);
				*(int *)puVar5 = (int)lVar8;
				lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x1901]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8);
				*(int *)puVar4 = (int)lVar8;
				lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x1902]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8);
				*(int *)puVar3 = (int)lVar8;
			} else {
				uVar9 = 0;
				lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x1903]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8);
				*(int *)puVar6 = (int)lVar8;
				uVar16 = FUN_100b8f7c((ulonglong) * (uint *)puVar6, uVar9, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7,
				    param_8, in_stack_ffffffa8);
				*(int *)puVar2 = (int)uVar16;
				lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x1904]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8);
				*(int *)puVar5 = (int)lVar8;
				lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x1905]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8);
				*(int *)puVar4 = (int)lVar8;
				lVar8 = LoadFileInMem(uVar17, (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8);
				*(int *)puVar3 = (int)lVar8;
			}
		} else {
			if (bVar1 == 4) {
				uVar9 = 0;
				lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x190e]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8);
				*(int *)puVar6 = (int)lVar8;
				uVar17 = FUN_100b8f7c((ulonglong) * (uint *)puVar6, uVar9, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7,
				    param_8, in_stack_ffffffa8);
				*(int *)puVar2 = (int)uVar17;
				lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x190f]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8);
				*(int *)puVar5 = (int)lVar8;
				lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x1910]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8);
				*(int *)puVar4 = (int)lVar8;
				lVar8 = LoadFileInMem(uVar16, (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
				    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8);
				*(int *)puVar3 = (int)lVar8;
			} else {
				if (bVar1 < 4) {
					uVar9 = 0;
					lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x190b]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
					    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7,
					    param_8, in_stack_ffffffa8);
					*(int *)puVar6 = (int)lVar8;
					uVar16 = FUN_100b8f7c((ulonglong) * (uint *)puVar6, uVar9, CONCAT71(uVar10, uVar11),
					    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7,
					    param_8, in_stack_ffffffa8);
					*(int *)puVar2 = (int)uVar16;
					lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x190c]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
					    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7,
					    param_8, in_stack_ffffffa8);
					*(int *)puVar5 = (int)lVar8;
					lVar8 = LoadFileInMem(ZEXT48(ppuVar7[-0x190d]), (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
					    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7,
					    param_8, in_stack_ffffffa8);
					*(int *)puVar4 = (int)lVar8;
					lVar8 = LoadFileInMem(uVar17, (undefined4 *)0x0, CONCAT71(uVar10, uVar11),
					    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7,
					    param_8, in_stack_ffffffa8);
					*(int *)puVar3 = (int)lVar8;
				} else {
					app_fatal((int)ppuVar7[-0x1911], param_2, CONCAT71(uVar10, uVar11), CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), param_6, param_7, param_8, in_stack_ffffffa8,
					    in_stack_ffffffaf, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
					    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0,
					    in_stack_ffffffd4);
				}
			}
		}
	}
	return;
}

void LoadAllGFX(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	undefined **ppuVar2;
	undefined4 uVar4;
	ulonglong uVar3;
	undefined uVar5;
	ulonglong uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffc8;

	uVar12 = (undefined7)((ulonglong)param_5 >> 8);
	uVar13 = (undefined)param_5;
	uVar10 = (undefined7)((ulonglong)param_4 >> 8);
	uVar11 = (undefined)param_4;
	uVar8 = (undefined7)((ulonglong)param_3 >> 8);
	uVar9 = (undefined)param_3;
	ppuVar2 = &toc;
	uVar4 = DiabloAllocPtr(0x100000);
	puVar1 = (undefined4 *)ppuVar2[-0x1d5e];
	uVar6 = ZEXT48(puVar1);
	*puVar1 = uVar4;
	uVar3 = IncProgress((char)uVar4, (char)puVar1, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	IncProgress((char)uVar3, (char)uVar6, uVar9, uVar11, uVar13, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
	uVar5 = InitObjectGFX();
	uVar3 = IncProgress(uVar5, (char)uVar6, uVar9, uVar11, uVar13, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffffc8);
	uVar16 = (undefined)param_8;
	uVar15 = (undefined)param_7;
	uVar14 = (undefined)param_6;
	uVar7 = (undefined)uVar6;
	uVar5 = InitMissileGFX(uVar3, uVar6, CONCAT71(uVar8, uVar9), CONCAT71(uVar10, uVar11),
	    CONCAT71(uVar12, uVar13), param_6, param_7, param_8, in_stack_ffffffc8);
	IncProgress(uVar5, uVar7, uVar9, uVar11, uVar13, uVar14, uVar15, uVar16, in_stack_ffffffc8);
	return;
}

// WARNING: Removing unreachable block (ram,0x100269f8)

void CreateLevel(undefined8 uParm1)

{
	byte bVar1;
	ulonglong uVar2;
	int iVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	longlong in_r7;
	undefined8 in_r8;
	undefined4 uVar6;
	undefined8 in_r9;
	undefined4 uVar7;
	undefined8 in_r10;
	undefined4 uVar8;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	uVar8 = (undefined4)in_r10;
	uVar7 = (undefined4)in_r9;
	uVar6 = (undefined4)in_r8;
	uVar2 = ZEXT48(PTR_DAT_100f183c);
	uVar5 = ZEXT48(PTR_DAT_100f17ec);
	uVar4 = ZEXT48(PTR_DAT_100f19e4);
	bVar1 = *PTR_DAT_100f183c;
	iVar3 = (int)uParm1;
	if (bVar1 == 2) {
		CreateL2Dungeon(*(undefined4 *)(PTR_DAT_100f19e4 + (uint)(byte)*PTR_DAT_100f17ec * 4), iVar3, uVar4,
		    uVar5, in_r7, in_r8, in_r9, uVar8, in_stack_ffffffc8);
		InitL2Triggers();
		Freeupstairs();
		LoadRndLvlPal(2, uParm1, uVar4, uVar5, in_r7, uVar6, uVar7, uVar8, in_stack_ffffffc8);
	} else {
		if (bVar1 < 2) {
			if (bVar1 == 0) {
				CreateTown();
				InitTownTriggers();
				LoadRndLvlPal(0, uVar2, uVar4, uVar5, in_r7, uVar6, uVar7, uVar8, in_stack_ffffffc8);
			} else {
				CreateL5Dungeon(*(undefined4 *)(PTR_DAT_100f19e4 + (uint)(byte)*PTR_DAT_100f17ec * 4), iVar3,
				    uVar4, uVar5, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
				InitL1Triggers();
				Freeupstairs();
				LoadRndLvlPal(1, uParm1, uVar4, uVar5, in_r7, uVar6, uVar7, uVar8, in_stack_ffffffc8);
			}
		} else {
			if (bVar1 == 4) {
				CreateL4Dungeon(*(undefined4 *)(PTR_DAT_100f19e4 + (uint)(byte)*PTR_DAT_100f17ec * 4), iVar3,
				    uVar4, uVar5, in_r7, in_r8, in_r9, uVar8, in_stack_ffffffc8);
				InitL4Triggers();
				Freeupstairs();
				LoadRndLvlPal(4, uParm1, uVar4, uVar5, in_r7, uVar6, uVar7, uVar8, in_stack_ffffffc8);
			} else {
				if (bVar1 < 4) {
					CreateL3Dungeon(*(undefined4 *)(PTR_DAT_100f19e4 + (uint)(byte)*PTR_DAT_100f17ec * 4), iVar3,
					    uVar4, uVar5, in_r7, uVar6, uVar7, uVar8, in_stack_ffffffc8);
					InitL3Triggers();
					Freeupstairs();
					LoadRndLvlPal(3, uParm1, uVar4, uVar5, in_r7, uVar6, uVar7, uVar8, in_stack_ffffffc8);
				} else {
					app_fatal((int)PTR_s_CreateLevel_100f2b88, uVar2, uVar4, uVar5, in_r7, uVar6, uVar7, uVar8,
					    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc,
					    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
					    in_stack_fffffff0, in_stack_fffffff4);
				}
			}
		}
	}
	return;
}

void LoadGameLevel(ulonglong param_1, ulonglong param_2, undefined8 param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	undefined4 *puVar1;
	uint uVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	undefined *puVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;
	undefined *puVar12;
	undefined *puVar13;
	undefined *puVar14;
	undefined *puVar15;
	undefined *puVar16;
	undefined *puVar17;
	ulonglong uVar18;
	undefined uVar22;
	ulonglong uVar19;
	undefined8 extraout_r3;
	undefined8 uVar20;
	undefined8 extraout_r3_00;
	undefined8 extraout_r3_01;
	ulonglong extraout_r3_02;
	ulonglong extraout_r3_03;
	undefined8 extraout_r3_04;
	undefined8 extraout_r3_05;
	undefined4 uVar21;
	undefined8 extraout_r3_06;
	ulonglong extraout_r3_07;
	ulonglong extraout_r3_08;
	ulonglong extraout_r3_09;
	undefined uVar24;
	ulonglong uVar23;
	ulonglong uVar25;
	undefined uVar27;
	longlong lVar26;
	undefined uVar28;
	undefined7 uVar29;
	undefined uVar30;
	undefined4 uVar31;
	undefined4 uVar32;
	ulonglong uVar33;
	ulonglong uVar34;
	int iVar35;
	int iVar36;
	ulonglong uVar37;
	longlong lVar38;
	longlong lVar39;
	undefined4 in_stack_ffffff88;

	puVar17 = PTR_DAT_100f19e4;
	puVar16 = PTR_DAT_100f19e0;
	puVar15 = PTR_DAT_100f1950;
	puVar14 = PTR_DAT_100f183c;
	puVar13 = PTR_DAT_100f1834;
	puVar12 = PTR_DAT_100f1824;
	puVar11 = PTR_DAT_100f17f8;
	puVar10 = PTR_DAT_100f17f0;
	puVar9 = PTR_DAT_100f17ec;
	puVar8 = PTR_DAT_100f17e0;
	uVar29 = (undefined7)(param_5 >> 8);
	uVar30 = (undefined)param_5;
	uVar18 = ZEXT48(&toc);
	uVar25 = ZEXT48(PTR_DAT_100f19e0);
	uVar37 = ZEXT48(PTR_DAT_100f1828);
	iVar35 = *(int *)PTR_DAT_100f19e0;
	if (iVar35 != 0) {
		*(int *)(PTR_DAT_100f19e4 + (uint)(byte)*PTR_DAT_100f17ec * 4) = iVar35;
	}
	uVar23 = param_2;
	music_stop((char)iVar35, (char)param_2, (char)puVar16, (char)param_4, uVar30, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffff88);
	SetCursor_(1, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff88);
	uVar22 = SetRndSeed(*(undefined4 *)(puVar17 + (uint)(byte)*puVar9 * 4));
	uVar19 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffff88);
	MakeLightTable(uVar19, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), param_6, (uint)param_7,
	    (uint)param_8, in_stack_ffffff88);
	uVar22 = LoadLvlGFX(extraout_r3, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6,
	    (int)param_7, (int)param_8, in_stack_ffffff88);
	uVar19 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffff88);
	iVar35 = (int)param_1;
	if (iVar35 != 0) {
		InitInv(uVar19, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffff88);
		uVar20 = InitItemGFX();
		InitQuestText(uVar20, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffff88);
		uVar19 = 0;
		uVar20 = extraout_r3_00;
		while (true) {
			if ((int)(uint)(byte)*puVar8 <= (int)uVar19)
				break;
			InitPlrGFXMem(uVar19, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6, (int)param_7,
			    (int)param_8, in_stack_ffffff88);
			uVar19 = uVar19 + 1;
			uVar20 = extraout_r3_01;
		}
		InitStores(uVar20, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffff88);
		InitAutomapOnce();
		InitHelp();
	}
	uVar22 = SetRndSeed(*(undefined4 *)(puVar17 + (uint)(byte)*puVar9 * 4));
	if (*puVar14 == '\0') {
		uVar22 = SetupTownStores(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
	}
	IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff88);
	uVar22 = InitAutomap();
	iVar36 = (int)param_2;
	if ((*puVar14 != '\0') && (iVar36 != 4)) {
		InitLighting();
		uVar22 = InitVision();
	}
	uVar22 = InitLevelMonsters(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffff88);
	IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_ffffff88);
	if (*puVar11 != '\0') {
		uVar21 = DiabloAllocPtr(0x100000);
		puVar1 = *(undefined4 **)((int)uVar18 + -0x7578);
		uVar23 = ZEXT48(puVar1);
		*puVar1 = uVar21;
		uVar22 = LoadSetMap();
		uVar19 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		uVar19 = GetLevelMTypes((char)uVar19, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		InitMonsters(uVar19, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6, (int)param_7,
		    (int)param_8, in_stack_ffffff88);
		InitMissileGFX(extraout_r3_06, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffff88);
		uVar20 = InitDead();
		uVar22 = FillSolidBlockTbls(uVar20, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffff88);
		uVar19 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		if (iVar36 == 5) {
			uVar19 = GetPortalLvlPos();
		}
		uVar33 = 0;
		uVar34 = uVar37;
		do {
			if ((*(char *)((int)uVar34 + 0x1d) != '\0') && (uVar19 = (ulonglong)(byte)*puVar9, (uint)(byte)*puVar9 == *(uint *)((int)uVar34 + 0x34))) {
				InitPlayerGFX(uVar33, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6, (int)param_7,
				    (int)param_8, in_stack_ffffff88);
				uVar19 = extraout_r3_07;
				if (iVar36 != 4) {
					uVar23 = param_1;
					InitPlayer(uVar33, iVar35, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6,
					    (int)param_7, (int)param_8, in_stack_ffffff88);
					uVar19 = extraout_r3_08;
				}
			}
			uVar33 = uVar33 + 1;
			uVar34 = uVar34 + 0x55ec;
		} while ((int)uVar33 < 4);
		uVar22 = InitMultiView(uVar19, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffff88);
		uVar19 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		uVar22 = (undefined)uVar19;
		if (((iVar35 == 0) && (iVar36 != 4)) && (lVar38 = uVar37 + (ulonglong) * (uint *)puVar12 * 0x55ec + (ulonglong)(byte)*puVar10, uVar22 = (undefined)lVar38, *(char *)((int)lVar38 + 0x201) != '\0')) {
			uVar20 = LoadLevel();
		} else {
			uVar22 = InitItems(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffff88);
			uVar20 = SavePreLighting(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffff88);
		}
		uVar32 = (undefined4)param_8;
		uVar31 = (undefined4)param_7;
		uVar21 = (undefined4)param_6;
		uVar22 = InitMissiles(uVar20, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), param_6, param_7,
		    param_8, in_stack_ffffff88);
		uVar19 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21,
		    (char)uVar31, (char)uVar32, in_stack_ffffff88);
		uVar22 = (undefined)uVar19;
		goto LAB_1002710c;
	}
	uVar22 = CreateLevel(param_2);
	uVar19 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffff88);
	FillSolidBlockTbls(uVar19, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6, (int)param_7,
	    (int)param_8, in_stack_ffffff88);
	uVar20 = SetRndSeed(*(undefined4 *)(puVar17 + (uint)(byte)*puVar9 * 4));
	if (*puVar14 == '\0') {
		uVar22 = InitMissileGFX(uVar20, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffff88);
	} else {
		uVar22 = GetLevelMTypes((char)uVar20, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		uVar20 = InitThemes(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		uVar22 = LoadAllGFX(uVar20, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffff88);
	}
	uVar19 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffff88);
	uVar22 = (undefined)uVar19;
	if (iVar36 == 3) {
		uVar22 = GetReturnLvlPos();
	}
	if (iVar36 == 5) {
		uVar22 = GetPortalLvlPos();
	}
	uVar19 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
	    (char)param_7, (char)param_8, in_stack_ffffff88);
	uVar33 = 0;
	uVar34 = uVar37;
	do {
		if ((*(char *)((int)uVar34 + 0x1d) != '\0') && (uVar19 = (ulonglong)(byte)*puVar9, (uint)(byte)*puVar9 == *(uint *)((int)uVar34 + 0x34))) {
			InitPlayerGFX(uVar33, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6, (int)param_7,
			    (int)param_8, in_stack_ffffff88);
			uVar19 = extraout_r3_02;
			if (iVar36 != 4) {
				uVar23 = param_1;
				InitPlayer(uVar33, iVar35, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6, (int)param_7,
				    (int)param_8, in_stack_ffffff88);
				uVar19 = extraout_r3_03;
			}
		}
		uVar33 = uVar33 + 1;
		uVar34 = uVar34 + 0x55ec;
	} while ((int)uVar33 < 4);
	PlayDungMsgs(uVar19, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6, (int)param_7,
	    (int)param_8, in_stack_ffffff88);
	uVar28 = (undefined)param_4;
	uVar27 = (undefined)uVar25;
	uVar24 = (undefined)uVar23;
	uVar22 = InitMultiView(extraout_r3_04, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6,
	    (int)param_7, (int)param_8, in_stack_ffffff88);
	IncProgress(uVar22, uVar24, uVar27, uVar28, uVar30, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_ffffff88);
	uVar19 = (ulonglong)(byte)*puVar8;
	param_4 = (ulonglong)(byte)*puVar9;
	bVar5 = false;
	uVar25 = uVar37 + param_4;
	uVar23 = uVar37;
	if (*puVar8 != 0) {
		do {
			if (((*(char *)((int)uVar23 + 0x1d) != '\0') && (bVar6 = !bVar5, bVar5 = true, bVar6)) && (bVar5 = true, *(char *)((int)uVar25 + 0x1f0) == '\0')) {
				bVar5 = false;
			}
			uVar23 = uVar23 + 0x55ec;
			uVar25 = uVar25 + 0x55ec;
			uVar19 = uVar19 - 1;
		} while (uVar19 != 0);
	}
	uVar22 = SetRndSeed(*(undefined4 *)(puVar17 + (uint)(byte)*puVar9 * 4));
	uVar24 = (undefined)uVar23;
	if (*puVar14 == '\0') {
		uVar23 = 0;
		lVar38 = 0;
		do {
			lVar39 = 7;
			uVar25 = 0;
			do {
				iVar7 = (int)uVar25;
				iVar3 = (int)lVar38;
				*(byte *)(iVar3 + *(int *)puVar13 + iVar7) = *(byte *)(iVar3 + *(int *)puVar13 + iVar7) | 0x40;
				iVar4 = *(int *)puVar13 + iVar7 + 1;
				*(byte *)(iVar3 + iVar4) = *(byte *)(iVar3 + iVar4) | 0x40;
				iVar4 = *(int *)puVar13 + iVar7 + 2;
				*(byte *)(iVar3 + iVar4) = *(byte *)(iVar3 + iVar4) | 0x40;
				iVar4 = *(int *)puVar13 + iVar7 + 3;
				*(byte *)(iVar3 + iVar4) = *(byte *)(iVar3 + iVar4) | 0x40;
				iVar4 = *(int *)puVar13 + iVar7 + 4;
				*(byte *)(iVar3 + iVar4) = *(byte *)(iVar3 + iVar4) | 0x40;
				iVar4 = *(int *)puVar13 + iVar7 + 5;
				*(byte *)(iVar3 + iVar4) = *(byte *)(iVar3 + iVar4) | 0x40;
				iVar4 = *(int *)puVar13 + iVar7 + 6;
				*(byte *)(iVar3 + iVar4) = *(byte *)(iVar3 + iVar4) | 0x40;
				lVar26 = uVar25 + 8;
				iVar4 = *(int *)puVar13 + iVar7 + 7;
				*(byte *)(iVar3 + iVar4) = *(byte *)(iVar3 + iVar4) | 0x40;
				iVar7 = (int)lVar26;
				*(byte *)(iVar3 + *(int *)puVar13 + iVar7) = *(byte *)(iVar3 + *(int *)puVar13 + iVar7) | 0x40;
				iVar4 = *(int *)puVar13 + iVar7 + 1;
				*(byte *)(iVar3 + iVar4) = *(byte *)(iVar3 + iVar4) | 0x40;
				iVar4 = *(int *)puVar13 + iVar7 + 2;
				*(byte *)(iVar3 + iVar4) = *(byte *)(iVar3 + iVar4) | 0x40;
				iVar4 = *(int *)puVar13 + iVar7 + 3;
				*(byte *)(iVar3 + iVar4) = *(byte *)(iVar3 + iVar4) | 0x40;
				iVar4 = *(int *)puVar13 + iVar7 + 4;
				*(byte *)(iVar3 + iVar4) = *(byte *)(iVar3 + iVar4) | 0x40;
				iVar4 = *(int *)puVar13 + iVar7 + 5;
				*(byte *)(iVar3 + iVar4) = *(byte *)(iVar3 + iVar4) | 0x40;
				iVar4 = *(int *)puVar13 + iVar7 + 6;
				*(byte *)(iVar3 + iVar4) = *(byte *)(iVar3 + iVar4) | 0x40;
				uVar25 = uVar25 + 0x10;
				param_4 = (ulonglong) * (uint *)puVar13 + lVar26 + 7;
				*(byte *)(iVar3 + (int)param_4) = *(byte *)(iVar3 + (int)param_4) | 0x40;
				lVar39 = lVar39 + -1;
			} while (lVar39 != 0);
			uVar23 = uVar23 + 1;
			lVar38 = lVar38 + 0x70;
		} while ((int)uVar23 < 0x70);
		uVar22 = InitTowners(lVar38, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6,
		    (int)param_7, (int)param_8, in_stack_ffffff88);
		uVar20 = InitItems(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		uVar22 = InitMissiles(uVar20, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), param_6, param_7,
		    param_8, in_stack_ffffff88);
		uVar19 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		if (((iVar35 == 0) && (iVar36 != 4)) && ((uVar19 = uVar37 + (ulonglong) * (uint *)puVar12 * 0x55ec + (ulonglong)(byte)*puVar9, *(char *)((int)uVar19 + 0x1f0) != '\0' && (*puVar8 == '\x01')))) {
			uVar19 = LoadLevel();
		}
		uVar32 = (undefined4)param_8;
		uVar31 = (undefined4)param_7;
		uVar21 = (undefined4)param_6;
		uVar22 = (undefined)uVar19;
		if (*puVar8 != '\x01') {
			uVar22 = DeltaLoadLevel(uVar19, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), param_6, param_7,
			    param_8, in_stack_ffffff88);
		}
		uVar19 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21,
		    (char)uVar31, (char)uVar32, in_stack_ffffff88);
	} else {
		if ((iVar35 == 0) && (iVar36 != 4)) {
			uVar19 = uVar37 + (ulonglong) * (uint *)puVar12 * 0x55ec + (ulonglong)(byte)*puVar9;
			uVar22 = (undefined)uVar19;
			if ((*(char *)((int)uVar19 + 0x1f0) != '\0') && (*puVar8 == '\x01')) {
				InitMonsters(uVar19, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), (int)param_6, (int)param_7,
				    (int)param_8, in_stack_ffffff88);
				uVar32 = (undefined4)param_8;
				uVar31 = (undefined4)param_7;
				uVar21 = (undefined4)param_6;
				InitMissiles(extraout_r3_05, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), param_6, param_7,
				    param_8, in_stack_ffffff88);
				uVar22 = InitDead();
				IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21, (char)uVar31, (char)uVar32, in_stack_ffffff88);
				uVar22 = LoadLevel();
				uVar19 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21,
				    (char)uVar31, (char)uVar32, in_stack_ffffff88);
				goto LAB_10027014;
			}
		}
		uVar22 = HoldThemeRooms(uVar22, uVar24, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		uVar23 = GetRndSeed(uVar22, uVar24, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		uVar2 = *(uint *)((int)uVar18 + -0x75f4);
		uVar24 = (undefined)uVar2;
		*(undefined4 *)(uVar2 + (uint)(byte)*puVar9 * 4) = (int)uVar23;
		uVar22 = InitMonsters(uVar23, (ulonglong)uVar2, uVar25, param_4, CONCAT71(uVar29, uVar30),
		    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffff88);
		uVar20 = GetRndSeed(uVar22, uVar24, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		uVar2 = *(uint *)((int)uVar18 + -0x75f8);
		uVar24 = (undefined)uVar2;
		*(undefined4 *)(uVar2 + (uint)(byte)*puVar9 * 4) = (int)uVar20;
		uVar22 = InitObjects(uVar20, (ulonglong)uVar2, uVar25, param_4, CONCAT71(uVar29, uVar30),
		    (int)param_6, (int)param_7, (int)param_8, in_stack_ffffff88);
		uVar22 = InitItems(uVar22, uVar24, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		uVar22 = CreateThemeRooms(uVar22, uVar24, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		uVar20 = GetRndSeed(uVar22, uVar24, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		uVar2 = *(uint *)((int)uVar18 + -0x75fc);
		uVar24 = (undefined)uVar2;
		*(undefined4 *)(uVar2 + (uint)(byte)*puVar9 * 4) = (int)uVar20;
		InitMissiles(uVar20, (ulonglong)uVar2, uVar25, param_4, CONCAT71(uVar29, uVar30), param_6, param_7,
		    param_8, in_stack_ffffff88);
		uVar22 = InitDead();
		uVar20 = GetRndSeed(uVar22, uVar24, (char)uVar25, (char)param_4, uVar30, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffff88);
		uVar32 = (undefined4)param_8;
		uVar31 = (undefined4)param_7;
		uVar21 = (undefined4)param_6;
		uVar22 = (undefined)uVar20;
		uVar2 = *(uint *)((int)uVar18 + -0x7600);
		uVar23 = (ulonglong)uVar2;
		*(undefined4 *)(uVar2 + (uint)(byte)*puVar9 * 4) = (int)uVar20;
		if (*puVar8 != '\x01') {
			uVar22 = DeltaLoadLevel(uVar20, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), param_6, param_7,
			    param_8, in_stack_ffffff88);
		}
		uVar19 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21,
		    (char)uVar31, (char)uVar32, in_stack_ffffff88);
		uVar19 = SavePreLighting((char)uVar19, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21,
		    (char)uVar31, (char)uVar32, in_stack_ffffff88);
	}
LAB_10027014:
	if (*puVar8 == '\x01') {
		uVar22 = ResyncQuests(uVar19, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), uVar21, uVar31, uVar32,
		    in_stack_ffffff88);
	} else {
		uVar22 = ResyncMPQuests((char)uVar19, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21,
		    (char)uVar31, (char)uVar32, in_stack_ffffff88);
	}
LAB_1002710c:
	uVar19 = SyncPortals(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21,
	    (char)uVar31, (char)uVar32, in_stack_ffffff88);
	lVar38 = 0;
	do {
		iVar36 = (int)uVar37;
		if (((*(char *)(iVar36 + 0x1d) != '\0') && (uVar19 = (ulonglong)(byte)*puVar9, (uint)(byte)*puVar9 == *(uint *)(iVar36 + 0x34))) && ((*(char *)(iVar36 + 0x13b) == '\0' || ((int)lVar38 == *(int *)puVar12)))) {
			if (*(int *)(iVar36 + 0x194) < 1) {
				uVar2 = *(uint *)puVar13;
				uVar23 = (ulonglong)uVar2;
				uVar19 = (ulonglong) * (uint *)(iVar36 + 0x38) * 0x70 + (ulonglong) * (uint *)(iVar36 + 0x3c);
				*(byte *)(uVar2 + (int)uVar19) = *(byte *)(uVar2 + (int)uVar19) | 4;
			} else {
				if (*puVar8 == '\x01') {
					uVar25 = lVar38 + 1;
					uVar19 = (ulonglong) * (uint *)(iVar36 + 0x38) * 0x70;
					uVar23 = (ulonglong) * (uint *)puVar15;
					*(undefined *)(*(uint *)puVar15 + (int)uVar19 + *(int *)(iVar36 + 0x3c)) = (char)uVar25;
				} else {
					uVar19 = SyncInitPlrPos(lVar38, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21,
					    (char)uVar31, (char)uVar32, in_stack_ffffff88);
				}
			}
		}
		lVar38 = lVar38 + 1;
		uVar37 = uVar37 + 0x55ec;
	} while ((int)lVar38 < 4);
	if (*puVar14 != '\0') {
		SetDungeonMicros(uVar19, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), uVar21, uVar31, uVar32,
		    in_stack_ffffff88);
	}
	uVar22 = InitLightMax();
	uVar37 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21,
	    (char)uVar31, (char)uVar32, in_stack_ffffff88);
	uVar37 = IncProgress((char)uVar37, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21,
	    (char)uVar31, (char)uVar32, in_stack_ffffff88);
	uVar22 = (undefined)uVar37;
	if (iVar35 != 0) {
		uVar22 = InitControlPan(uVar37, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), uVar21, uVar31, uVar32,
		    in_stack_ffffff88);
		uVar37 = IncProgress(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21,
		    (char)uVar31, (char)uVar32, in_stack_ffffff88);
		uVar22 = (undefined)uVar37;
	}
	if (*puVar14 != '\0') {
		uVar22 = ProcessLightList(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21,
		    (char)uVar31, (char)uVar32, in_stack_ffffff88);
		ProcessVisionList(uVar22, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21, (char)uVar31,
		    (char)uVar32, in_stack_ffffff88);
	}
	music_start((uint)(byte)*puVar14, uVar23, uVar25, param_4, CONCAT71(uVar29, uVar30), uVar21, uVar31,
	    uVar32, in_stack_ffffff88);
	uVar37 = extraout_r3_09;
	do {
		uVar37 = IncProgress((char)uVar37, (char)uVar23, (char)uVar25, (char)param_4, uVar30, (char)uVar21,
		    (char)uVar31, (char)uVar32, in_stack_ffffff88);
	} while ((int)uVar37 == 0);
	if (((*puVar11 != '\0') && (*puVar10 == '\x01')) && (*(char *)(*(int *)((int)uVar18 + -0x7604) + 0x122) == '\x02')) {
		PlaySFX(0x351);
	}
	return;
}

void game_logic(undefined8 param_1, longlong param_2, ulonglong param_3, undefined8 param_4,
    ulonglong param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	char *pcVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	ulonglong uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined4 uVar10;
	undefined4 uVar11;
	undefined4 uVar12;
	undefined4 uVar13;
	undefined4 uVar14;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f1914;
	uVar8 = (undefined7)(param_3 >> 8);
	uVar9 = (undefined)param_3;
	uVar6 = (undefined7)((ulonglong)param_2 >> 8);
	uVar7 = (undefined)param_2;
	ppuVar3 = &toc;
	if (*(int *)PTR_DAT_100f1a00 != 2) {
		if (*(int *)PTR_DAT_100f1a00 == 1) {
			*(undefined4 *)PTR_DAT_100f1a00 = 2;
		}
		if ((*PTR_DAT_100f17e0 == '\x01') && (ppuVar3 = &toc, uVar4 = gmenu_exception(), (int)uVar4 != 0)) {
			*(uint *)puVar2 = *(uint *)puVar2 | 1;
		} else {
			uVar4 = gmenu_exception();
			if (((int)uVar4 == 0) && (ppuVar3[-0x13d5] == (undefined *)0x0)) {
				CheckCursMove((char)uVar4, uVar7, uVar9, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
				track_process();
			}
			uVar14 = (undefined4)param_8;
			uVar13 = (undefined4)param_7;
			uVar12 = (undefined4)param_6;
			if (*(int *)ppuVar3[-0x1d6a] != 0) {
				ProcessPlayers(ZEXT48(ppuVar3[-0x1d6a]), CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), param_4,
				    param_5, param_6, param_7, param_8, in_stack_ffffffc8);
			}
			uVar11 = (undefined4)param_5;
			uVar10 = (undefined4)param_4;
			pcVar1 = ppuVar3[-0x1de5];
			if (*pcVar1 == '\0') {
				ProcessTowners((char)pcVar1, uVar7, uVar9, (char)param_4, (char)param_5, (char)uVar12, (char)uVar13,
				    (char)uVar14, in_stack_ffffffc8);
				ProcessItems();
				uVar5 = ProcessMissiles();
			} else {
				uVar5 = ProcessMonsters(ZEXT48(pcVar1), CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), param_4,
				    param_5, uVar12, uVar13, uVar14, in_stack_ffffffc8);
				ProcessObjects(uVar5, uVar7, uVar9, (char)uVar10, (char)uVar11, (char)uVar12, (char)uVar13,
				    (char)uVar14, in_stack_ffffffc8);
				ProcessMissiles();
				uVar5 = ProcessItems();
				uVar5 = ProcessLightList(uVar5, uVar7, uVar9, (char)uVar10, (char)uVar11, (char)uVar12, (char)uVar13,
				    (char)uVar14, in_stack_ffffffc8);
				uVar5 = ProcessVisionList(uVar5, uVar7, uVar9, (char)uVar10, (char)uVar11, (char)uVar12, (char)uVar13,
				    (char)uVar14, in_stack_ffffffc8);
			}
			uVar5 = sound_update(uVar5, uVar7, uVar9, (char)uVar10, (char)uVar11, (char)uVar12, (char)uVar13,
			    (char)uVar14, in_stack_ffffffc8);
			ClearPlrMsg(uVar5, uVar7, uVar9, (char)uVar10, (char)uVar11, (char)uVar12, (char)uVar13,
			    (char)uVar14, in_stack_ffffffc8);
			CheckTriggers();
			CheckQuests();
			*(uint *)puVar2 = *(uint *)puVar2 | 1;
			pfile_update(0, CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), uVar10, uVar11, uVar12, uVar13, uVar14,
			    in_stack_ffffffc8);
		}
	}
	return;
}

void timeout_cursor(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, undefined8 param_7, undefined4 param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	undefined **ppuVar3;
	undefined7 uVar4;
	undefined uVar5;
	undefined7 uVar6;
	undefined uVar7;
	undefined7 uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffc8;

	puVar1 = PTR_DAT_100f1914;
	uVar10 = (undefined7)((ulonglong)param_7 >> 8);
	uVar11 = (undefined)param_7;
	uVar8 = (undefined7)((ulonglong)param_5 >> 8);
	uVar9 = (undefined)param_5;
	uVar6 = (undefined7)((ulonglong)param_4 >> 8);
	uVar7 = (undefined)param_4;
	uVar4 = (undefined7)((ulonglong)param_3 >> 8);
	uVar5 = (undefined)param_3;
	ppuVar2 = &toc;
	ppuVar3 = &toc;
	if (param_1 == 0) {
		if (_DAT_100f407c != 0) {
			SetCursor_(_DAT_100f407c, (char)param_2, uVar5, uVar7, uVar9, (char)param_6, uVar11, (char)param_8,
			    in_stack_ffffffc8);
			ppuVar3[-0x13d5] = (undefined *)0x0;
			ClearPanel();
			*(undefined4 *)puVar1 = 0xff;
		}
	} else {
		if ((_DAT_100f407c == 0) && (*_DAT_100f1a70 == '\0')) {
			_DAT_100f407c = *(int *)PTR_DAT_100f188c;
			multi_net_ping((char)PTR_DAT_100f188c, (char)param_2, uVar5, uVar7, uVar9, (char)param_6, uVar11,
			    (char)param_8, in_stack_ffffffc8);
			ClearPanel();
			AddPanelString((int)ppuVar2[-0x1913], 1, uVar5, uVar7, uVar9, (char)param_6, uVar11, (char)param_8,
			    in_stack_ffffffc8);
			param_2 = 1;
			AddPanelString((int)ppuVar2[-0x1914], 1, uVar5, uVar7, uVar9, (char)param_6, uVar11, (char)param_8,
			    in_stack_ffffffc8);
			SetCursor_(0xb, (char)param_2, uVar5, uVar7, uVar9, (char)param_6, uVar11, (char)param_8,
			    in_stack_ffffffc8);
			*(undefined4 *)puVar1 = 0xff;
		}
		scrollrt_draw_game_screen(1, param_2, CONCAT71(uVar4, uVar5), CONCAT71(uVar6, uVar7), CONCAT71(uVar8, uVar9), param_6, CONCAT71(uVar10, uVar11), param_8, in_stack_ffffffc8);
	}
	return;
}

void game_loop(ulonglong param_1, longlong param_2, ulonglong param_3, undefined8 param_4,
    undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8,
    undefined4 param_9)

{
	bool bVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined8 uVar4;
	undefined8 extraout_r3;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	int iVar13;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffc8;

	puVar3 = PTR_DAT_100f1a2c;
	puVar2 = PTR_DAT_100f17e0;
	uVar11 = (undefined7)((ulonglong)param_5 >> 8);
	uVar12 = (undefined)param_5;
	uVar9 = (undefined7)((ulonglong)param_4 >> 8);
	uVar10 = (undefined)param_4;
	uVar7 = (undefined7)(param_3 >> 8);
	uVar8 = (undefined)param_3;
	uVar5 = (undefined7)((ulonglong)param_2 >> 8);
	uVar6 = (undefined)param_2;
	if ((int)param_1 == 0) {
		iVar13 = 3;
	} else {
		iVar13 = 0x3c;
	}
	while (true) {
		bVar1 = iVar13 == 0;
		iVar13 = iVar13 + -1;
		if (bVar1) {
			return;
		}
		uVar4 = multi_handle_delta(param_1, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
		    CONCAT71(uVar11, uVar12), (int)param_6, (int)param_7, (int)param_8,
		    in_stack_ffffffb8);
		if ((int)uVar4 == 0) {
			timeout_cursor(1, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
			    CONCAT71(uVar11, uVar12), (int)param_6, param_7, (int)param_8, in_stack_ffffffb8);
			return;
		}
		timeout_cursor(0, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
		    CONCAT71(uVar11, uVar12), (int)param_6, param_7, (int)param_8, in_stack_ffffffb8);
		game_logic(extraout_r3, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
		    CONCAT71(uVar11, uVar12), param_6, param_7, param_8, in_stack_ffffffb8);
		if (*(int *)puVar3 == 0) {
			return;
		}
		if (*puVar2 == '\x01')
			break;
		param_1 = nthread_has_500ms_passed(1, uVar6, uVar8, uVar10, uVar12, (char)param_6, (char)param_7, (char)param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffc8);
		if ((int)param_1 == 0) {
			return;
		}
	}
	return;
}

void diablo_color_cyc_logic(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	int iVar2;
	longlong lVar3;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	int local_2c;

	if (DAT_100f4070 == '\0') {
		param_1 = 0;
		_DAT_100f4074 = 0;
		DAT_100f4070 = '\x01';
	}
	lVar3 = GetTickCount(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    (char)in_stack_ffffffc8, in_stack_ffffffcf, local_2c);
	if (0x31 < (lVar3 - (ulonglong) * (uint *)(local_2c + -0x4f5c) & 0xffffffff)) {
		*(undefined4 *)(local_2c + -0x4f5c) = (int)lVar3;
		if (**(char **)(local_2c + -0x7794) == '\x04') {
			lighting_color_cycling();
		} else {
			if (**(char **)(local_2c + -0x7794) == '\x03') {
				if (*(char *)(local_2c + -0x4f68) == '\0') {
					*(undefined4 *)(local_2c + -0x4f64) = 0;
					*(undefined *)(local_2c + -0x4f68) = 1;
				}
				iVar1 = *(int *)(local_2c + -0x4f64);
				iVar2 = iVar1 + 1;
				*(int *)(local_2c + -0x4f64) = iVar2;
				if (2 < iVar2) {
					*(undefined4 *)(local_2c + -0x4f64) = 0;
					palette_update_caves((char)iVar1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
					    in_stack_ffffffc8);
				}
			}
		}
	}
	return;
}
