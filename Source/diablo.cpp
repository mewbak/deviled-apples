
void FUN_100239e8(uint param_1)

{
	_DAT_100f4078 = param_1 & 0xff;
	return;
}

void diablo_parse_flags(char *args)

{
	while (true) {
		if (*args == 0)
			break;
		while (((&DAT_101234a8)[(uint)(byte)*args] & 6) != 0) {
			args = (char *)((byte *)args + 1);
		}
		args = (char *)((byte *)args + 1);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FreeGameMem(void)

{
	void *p;
	int iVar1;

	iVar1 = 0x100f8fd0;
	music_stop();
	UnlockMemFile((char)_DAT_1013b348);
	MemFreeDbg((int **)&DAT_1013b348);
	MemFreeDbg(*(int ***)(iVar1 + -0x756c));
	MemFreeDbg(*(int ***)(iVar1 + -0x7570));
	MemFreeDbg(*(int ***)(iVar1 + -0x7574));
	p = _DAT_1013b340;
	_DAT_1013b340 = (void *)0x0;
	mem_free_dbg(p);
	FreeMissiles();
	FreeMonsters();
	FreeObjectGFX();
	FreeEffects();
	FreeTownerGFX();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void start_game(uint uMsg)

{
	undefined4 *puVar1;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffff8b;
	undefined in_stack_ffffff8f;
	int local_6c;

	_DAT_1012f1d4 = DiabloAllocPtr(0x6200);
	_DAT_1012f1d0 = DiabloAllocPtr(0x62000);
	_DAT_1012f1cc = DiabloAllocPtr(0x62000);
	_DAT_1012f1c8 = DiabloAllocPtr(0x3100);
	_DAT_1012f1c4 = DiabloAllocPtr(0x3100);
	_DAT_1012f1c0 = DiabloAllocPtr(0x3100);
	_DAT_1012f1bc = DiabloAllocPtr(0x3100);
	_DAT_1012f1b8 = DiabloAllocPtr(0x3100);
	_DAT_1012f1b4 = DiabloAllocPtr(0x6200);
	_DAT_1012f1b0 = DiabloAllocPtr(0x3100);
	_DAT_1012f1ac = DiabloAllocPtr(0x3100);
	_DAT_1012f1a8 = DiabloAllocPtr(0x3100);
	_DAT_1012f1a4 = DiabloAllocPtr(0x3100);
	_DAT_1012f1a0 = DiabloAllocPtr(0x3100);
	if (((((_DAT_1012f1d0 == (BYTE *)0x0) || (_DAT_1012f1cc == (BYTE *)0x0)) || (_DAT_1012f1d4 == (BYTE *)0x0)) || ((((_DAT_1012f1c8 == (BYTE *)0x0 || (_DAT_1012f1c4 == (BYTE *)0x0)) || ((_DAT_1012f1c0 == (BYTE *)0x0 || ((_DAT_1012f1bc == (BYTE *)0x0 || (_DAT_1012f1b8 == (BYTE *)0x0)))))) || (_DAT_1012f1b4 == (BYTE *)0x0)))) || ((((_DAT_1012f1b0 == (BYTE *)0x0 || (_DAT_1012f1ac == (BYTE *)0x0)) || (_DAT_1012f1a8 == (BYTE *)0x0)) || ((_DAT_1012f1a4 == (BYTE *)0x0 || (_DAT_1012f1a0 == (BYTE *)0x0)))))) {
		ExitProcess(0);
	}
	ZeroMemory((char)_DAT_1012f1d4, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	ZeroMemory((char)_DAT_1012f1d0, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	ZeroMemory((char)_DAT_1012f1cc, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	ZeroMemory((char)_DAT_1012f1c8, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	ZeroMemory((char)_DAT_1012f1c4, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	ZeroMemory((char)_DAT_1012f1c0, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	ZeroMemory((char)_DAT_1012f1bc, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	ZeroMemory((char)_DAT_1012f1b8, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	ZeroMemory((char)_DAT_1012f1b4, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	ZeroMemory((char)_DAT_1012f1b0, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	ZeroMemory((char)_DAT_1012f1ac, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	ZeroMemory((char)_DAT_1012f1a8, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	ZeroMemory((char)_DAT_1012f1a4, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	ZeroMemory((char)_DAT_1012f1a0, 0, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff8b, in_stack_ffffff8f,
	    local_6c);
	puVar1 = *(undefined4 **)(local_6c + -0x766c);
	**(undefined **)(local_6c + -0x759c) = 0;
	*puVar1 = 1;
	InitCursor();
	InitLightTable();
	LoadDebugGFX();
	music_stop();
	ShowProgress(uMsg);
	gmenu_init_menu();
	InitLevelCursor();
	*(undefined4 *)(local_6c + -0x4f54) = 0;
	**(undefined **)(local_6c + -0x7560) = 0;
	track_repeat_walk(0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void free_game(void)

{
	void *p;
	int pnum;

	p = _DAT_1012f1d0;
	if (_DAT_1012f1d0 != (void *)0x0) {
		_DAT_1012f1d0 = (void *)0x0;
		mem_free_dbg(p);
	}
	p = _DAT_1012f1cc;
	_DAT_1012f1cc = (void *)0x0;
	mem_free_dbg(p);
	p = _DAT_1012f1d4;
	_DAT_1012f1d4 = (void *)0x0;
	mem_free_dbg(p);
	p = _DAT_1012f1c8;
	_DAT_1012f1c8 = (void *)0x0;
	mem_free_dbg(p);
	p = _DAT_1012f1c4;
	_DAT_1012f1c4 = (void *)0x0;
	mem_free_dbg(p);
	p = _DAT_1012f1c0;
	_DAT_1012f1c0 = (void *)0x0;
	mem_free_dbg(p);
	p = _DAT_1012f1bc;
	_DAT_1012f1bc = (void *)0x0;
	mem_free_dbg(p);
	p = _DAT_1012f1b8;
	_DAT_1012f1b8 = (void *)0x0;
	mem_free_dbg(p);
	p = _DAT_1012f1b4;
	_DAT_1012f1b4 = (void *)0x0;
	mem_free_dbg(p);
	p = _DAT_1012f1b0;
	_DAT_1012f1b0 = (void *)0x0;
	mem_free_dbg(p);
	p = _DAT_1012f1ac;
	_DAT_1012f1ac = (void *)0x0;
	mem_free_dbg(p);
	p = _DAT_1012f1a8;
	_DAT_1012f1a8 = (void *)0x0;
	mem_free_dbg(p);
	p = _DAT_1012f1a4;
	_DAT_1012f1a4 = (void *)0x0;
	mem_free_dbg(p);
	p = _DAT_1012f1a0;
	_DAT_1012f1a0 = (void *)0x0;
	mem_free_dbg(p);
	FreeControlPan();
	FreeInvGFX();
	FreeGMenu();
	FreeQuestText();
	FreeStoreMem();
	pnum = 0;
	do {
		FreePlayerGFX(pnum);
		pnum = pnum + 1;
	} while (pnum < 4);
	FreeItemGFX();
	FreeCursor();
	FreeLightTable();
	FreeDebugGFX();
	FreeGameMem();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void run_game_loop(uint uMsg)

{
	undefined *puVar1;
	char cVar2;
	bool bVar3;
	ulonglong uVar4;
	WNDPROC *pWVar5;
	int iVar6;
	BOOL BVar7;
	undefined8 in_r4;
	undefined uVar8;
	undefined8 in_r5;
	undefined uVar9;
	undefined8 in_r6;
	undefined uVar10;
	undefined8 in_r7;
	undefined uVar11;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;

	uVar4 = 0x100f8fd0;
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x80);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	nthread_ignore_mutex(1, *puVar1);
	start_game(uMsg, *puVar1);
	pWVar5 = SetWindowProc(*(undefined4 *)((int)uVar4 + -0x75a0), *puVar1);
	control_update_life_mana(*puVar1);
	msg_process_net_packets(*puVar1);
	_gbRunGame = 1;
	**(undefined4 **)((int)uVar4 + -0x75a8) = 1;
	_DAT_101290fc = 1;
	_drawpanflag = 0xff;
	DrawAndBlit(*puVar1);
	PaletteFadeIn(8, *puVar1);
	_drawpanflag = 0xff;
	_DAT_101290f4 = 1;
	nthread_ignore_mutex(0, *puVar1);
	FUN_10017ae8(
	    1, (char)in_r4, (char)in_r5, (char)in_r6, (char)in_r7, in_r8, in_r9, in_r10, *(undefined4 *)(puVar1 + 8));
LAB_10024060:
	do {
		iVar6 = (int)uVar4;
		if (_gbRunGame == 0) {
			FUN_10017ae8(0, (char)in_r4, (char)in_r5, (char)in_r6, (char)in_r7, in_r8, in_r9, in_r10,
			    *(undefined4 *)(puVar1 + 8));
			if (1 < **(byte **)(iVar6 + -0x77f0)) {
				pfile_write_hero(*puVar1);
			}
			pfile_flush_W(*puVar1);
			PaletteFadeOut(8, *puVar1);
			SetCursor_(0, *puVar1);
			ClearScreenBuffer(*puVar1);
			_drawpanflag = 0xff;
			scrollrt_draw_game_screen(1, *puVar1);
			SetWindowProc(pWVar5, *puVar1);
			free_game(*puVar1);
			if (cineflag != '\0') {
				cineflag = '\0';
				DoEnding(*puVar1);
			}
			return;
		}
		diablo_color_cyc_logic(*puVar1);
		cVar2 = (char)(ZEXT48(register0x0000000c) - 0x80);
		in_r4 = 0;
		in_r5 = 0;
		in_r6 = 0;
		in_r7 = 0;
		iVar6 = PeekMessage(
		    cVar2 + '<', 0, 0, 0, 0, in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
		uVar4 = (ulonglong) * (uint *)(puVar1 + 0x14);
		if (iVar6 == 0)
			goto LAB_10024034;
		while (true) {
			in_r4 = 0;
			in_r5 = 0;
			in_r6 = 0;
			in_r7 = 1;
			iVar6 = PeekMessage(
			    cVar2 + '<', 0, 0, 0, 1, in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
			uVar11 = (undefined)in_r7;
			uVar10 = (undefined)in_r6;
			uVar9 = (undefined)in_r5;
			uVar8 = (undefined)in_r4;
			uVar4 = (ulonglong) * (uint *)(puVar1 + 0x14);
			if (iVar6 == 0)
				break;
			if (*(int *)(puVar1 + 0x40) == 0x12) {
				_DAT_101290fc = 0;
				_gbRunGame = 0;
				break;
			}
			TranslateMessage(puVar1 + 0x3c, *puVar1);
			DispatchMessage(cVar2 + '<', uVar8, uVar9, uVar10, uVar11, in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf],
			    *(undefined4 *)(puVar1 + 0x14));
		}
		bVar3 = false;
		if ((_gbRunGame != 0) && (BVar7 = nthread_has_500ms_passed(0, *puVar1), BVar7 != 0)) {
			bVar3 = true;
		}
	} while (!bVar3);
	goto LAB_10024044;
LAB_10024034:
	BVar7 = nthread_has_500ms_passed(0, *puVar1);
	if (BVar7 != 0) {
	LAB_10024044:
		multi_process_network_packets(*puVar1);
		game_loop(_DAT_101290f4, *puVar1);
		msgcmd_send_chat(*puVar1);
		_DAT_101290f4 = 0;
		DrawAndBlit(*puVar1);
	}
	goto LAB_10024060;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL StartGame(BOOL bNewGame, BOOL bSinglePlayer)

{
	undefined8 uVar1;
	BOOL BVar2;
	uint uMsg;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	BOOL local_28[2];
	undefined4 local_20;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_20 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	DAT_1017de92 = 1;
	do {
		local_28[0] = 0;
		_DAT_101290f0 = 0;
		BVar2 = NetInit(bSinglePlayer, local_28);
		if (BVar2 == 0) {
			uVar1 = countLeadingZeros(local_28[0]);
			_DAT_101290fc = (uint)uVar1 >> 5 & 0xff;
			break;
		}
		DAT_1017de92 = 0;
		if ((bNewGame != 0) || (_DAT_10186eb0 == 0)) {
			InitLevels();
			InitQuests();
			InitPortals();
			InitDungMsgs(myplr);
		}
		if ((_DAT_10186eb0 == 0) || (_DAT_101290f0 == 0)) {
			uMsg = 0x40a;
		} else {
			uMsg = 0x40b;
		}
		run_game_loop(uMsg);
		NetClose();
		pfile_create_player_description((char *)0x0, 0);
	} while (_DAT_101290fc != 0);
	SNetDestroy();
	return (BOOL)_DAT_101290fc;
}

void diablo_init_screen(void)

{
	LONG *pLVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int *PitchTbl;
	int iVar11;
	longlong lVar12;
	int local_3c;
	tagPOINT local_10[2];
	undefined *_ScrollStruct;

	GetCursorPos((LPPOINT)local_10);
	lVar12 = 0x20;
	pLVar1 = *(LONG **)(local_3c + -0x76ac);
	**(LONG **)(local_3c + -0x76a8) = local_10[0].x;
	iVar10 = 0;
	PitchTbl = *(int **)(local_3c + -0x7698);
	iVar11 = 0;
	*pLVar1 = local_10[0].y;
	ScrollStruct_1012f2e8._sdx = 0;
	ScrollStruct_1012f2e8._sdy = 0;
	ScrollStruct_1012f2e8._sxoff = 0;
	ScrollStruct_1012f2e8._syoff = 0;
	ScrollStruct_1012f2e8._sdir = 0;
	do {
		*PitchTbl = iVar10;
		PitchTbl[1] = (iVar11 + 1) * 0x300;
		PitchTbl[2] = (iVar11 + 2) * 0x300;
		PitchTbl[3] = (iVar11 + 3) * 0x300;
		PitchTbl[4] = (iVar11 + 4) * 0x300;
		PitchTbl[5] = (iVar11 + 5) * 0x300;
		PitchTbl[6] = (iVar11 + 6) * 0x300;
		PitchTbl[7] = (iVar11 + 7) * 0x300;
		PitchTbl[8] = iVar10 + 0x1800;
		PitchTbl[9] = (iVar11 + 9) * 0x300;
		PitchTbl[10] = (iVar11 + 10) * 0x300;
		PitchTbl[0xb] = (iVar11 + 0xb) * 0x300;
		PitchTbl[0xc] = (iVar11 + 0xc) * 0x300;
		PitchTbl[0xd] = (iVar11 + 0xd) * 0x300;
		PitchTbl[0xe] = (iVar11 + 0xe) * 0x300;
		iVar2 = iVar11 + 0x17;
		PitchTbl[0xf] = (iVar11 + 0xf) * 0x300;
		iVar3 = iVar11 + 0x19;
		PitchTbl[0x10] = iVar10 + 0x3000;
		PitchTbl[0x11] = (iVar11 + 0x11) * 0x300;
		iVar4 = iVar11 + 0x1a;
		PitchTbl[0x12] = (iVar11 + 0x12) * 0x300;
		iVar5 = iVar11 + 0x1b;
		PitchTbl[0x13] = (iVar11 + 0x13) * 0x300;
		iVar6 = iVar11 + 0x1c;
		PitchTbl[0x14] = (iVar11 + 0x14) * 0x300;
		iVar7 = iVar11 + 0x1d;
		PitchTbl[0x15] = (iVar11 + 0x15) * 0x300;
		iVar8 = iVar11 + 0x1e;
		PitchTbl[0x16] = (iVar11 + 0x16) * 0x300;
		iVar9 = iVar11 + 0x1f;
		iVar11 = iVar11 + 0x20;
		PitchTbl[0x17] = iVar2 * 0x300;
		PitchTbl[0x18] = iVar10 + 0x4800;
		iVar10 = iVar10 + 0x6000;
		PitchTbl[0x19] = iVar3 * 0x300;
		PitchTbl[0x1a] = iVar4 * 0x300;
		PitchTbl[0x1b] = iVar5 * 0x300;
		PitchTbl[0x1c] = iVar6 * 0x300;
		PitchTbl[0x1d] = iVar7 * 0x300;
		PitchTbl[0x1e] = iVar8 * 0x300;
		PitchTbl[0x1f] = iVar9 * 0x300;
		PitchTbl = PitchTbl + 0x20;
		lVar12 = lVar12 + -1;
	} while (lVar12 != 0);
	ClrDiabloMsg();
	return;
}

// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)

{
	DWORD DVar1;
	undefined uVar4;
	char *args;
	SHORT SVar3;
	BOOL BVar2;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	HINSTANCE pHStack0000001c;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	int local_4c;
	int iVar8;
	int local_28;
	undefined4 local_24;
	undefined2 local_20;
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar7 = (undefined)nShowCmd;
	uVar6 = SUB41(lpCmdLine, 0);
	uVar4 = SUB41(hPrevInstance, 0);
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	pHStack0000001c = hPrevInstance;
	SwapOutMemFuncFPLib(
	    0x58, uVar4, uVar6, uVar7, in_r7, in_r8, in_r9, in_r10, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	SwapOutMemFuncWin32(
	    0x58, uVar4, uVar6, uVar7, in_r7, in_r8, in_r9, in_r10, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	uVar5 = SUB41(*(HINSTANCE *)(local_4c + -0x75c4), 0);
	*(HINSTANCE *)&(*(HINSTANCE *)(local_4c + -0x75c4))->unused = hInstance;
	ShowCursor(0);
	DVar1 = GetTickCount();
	uVar4 = vc_srand((char)DVar1, uVar5, uVar6, uVar7, in_r7, in_r8, in_r9, in_r10, (char)in_stack_ffffffa8,
	    in_stack_ffffffaf, local_4c);
	InitHash();
	args = (char *)GetCommandLine(
	    uVar4, uVar5, uVar6, uVar7, in_r7, in_r8, in_r9, in_r10, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	diablo_parse_flags(args);
	init_create_window(nShowCmd);
	diablo_init_screen();
	sound_init();
	UiInitialize();
	SVar3 = GetAsyncKeyState(0x11);
	iVar8 = local_4c;
	if (((int)SVar3 & 0x8000U) == 0) {
		iVar8 = local_4c;
		play_movie(*(char **)(local_4c + -0x63e0), 1);
	}
	local_24 = *(undefined4 *)(local_4c + -0x2300);
	local_20 = *(undefined2 *)(local_4c + -0x22fc);
	uVar4 = (undefined)local_20;
	local_28 = 0;
	BVar2 = SRegLoadValue(s_Diablo_1010ca40, (char *)&local_24, '\0', &local_28);
	if (BVar2 == 0) {
		local_28 = 1;
	}
	SVar3 = GetAsyncKeyState(0x11);
	if ((((int)SVar3 & 0x8000U) == 0) && (local_28 != 0)) {
		play_movie(*(char **)(iVar8 + -0x63e8), 1);
	}
	uVar5 = (undefined)(ZEXT48(register0x0000000c) - 0x24);
	uVar6 = 0;
	uVar7 = 0;
	SRegSaveValue(s_Diablo_1010ca40, (char *)(ZEXT48(register0x0000000c) - 0x24), '\0', 0);
	SVar3 = GetAsyncKeyState(0x11);
	if (((int)SVar3 & 0x8000U) == 0) {
		FUN_10015a68(7, uVar5, uVar6, uVar7, uVar4, in_r8, in_r9, in_r10, in_stack_ffffffa8);
		BlackPalette();
	}
	mainmenu_loop();
	UiDestroy();
	SaveGamma();
	if (_DAT_1012915c != (HWND)0x0) {
		Sleep(300);
		DestroyWindow(_DAT_1012915c);
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL LeftMouseCmd(BOOL bShift)

{
	BYTE y;
	bool bVar1;
	int iVar2;
	int iVar3;
	BOOL BVar4;
	BYTE x;
	BYTE bCmd;

	iVar2 = 0x100f8fd0;
	if (leveltype == '\0') {
		if ((DAT_101285f6 != -1) && (_DAT_1012861c == 1)) {
			if (_DAT_1013c970 == 0) {
				x = '*';
			} else {
				x = ')';
			}
			NetSendCmdLocParam1(1, x, (BYTE)_DAT_10128600, (BYTE)_DAT_101285fc, (short)DAT_101285f6);
		}
		if (_DAT_101285f8 != -1) {
			NetSendCmdLocParam1(1, '\x1d', (BYTE)_DAT_10128600, (BYTE)_DAT_101285fc, (WORD)_DAT_101285f8);
		}
		if (((DAT_101285f6 == -1) && (_DAT_101285f8 == -1)) && (DAT_101285f4 == -1)) {
			return 1;
		}
	} else {
		bVar1 = false;
		iVar3 = abs(*(int *)((int)plr + myplr * 0x55ec + 0x38) - _DAT_10128600);
		if ((iVar3 < 2) && (iVar3 = abs(*(int *)((int)plr + myplr * 0x55ec + 0x3c) - _DAT_101285fc), iVar3 < 2)) {
			bVar1 = true;
		}
		x = (BYTE)_DAT_10128600;
		y = (BYTE)_DAT_101285fc;
		if (((DAT_101285f6 == -1) || (_DAT_1012861c != 1)) || (bShift != 0)) {
			if ((DAT_101285f7 == -1) || ((bShift != 0 && ((!bVar1 || (*(char *)(*(int *)(iVar2 + -0x7688) + (int)DAT_101285f7 * 0x78 + 0x34) != '\x01')))))) {
				if (*(int *)((int)plr + myplr * 0x55ec + 0x134) == 1) {
					if (bShift == 0) {
						if (_DAT_101285f8 == -1) {
							if ((DAT_101285f4 != -1) && (_DAT_100f6b8c == 0)) {
								NetSendCmdParam1(1, '\x15', (short)DAT_101285f4);
							}
						} else {
							BVar4 = CanTalkToMonst(_DAT_101285f8);
							if (BVar4 == 0) {
								NetSendCmdParam1(1, '\x14', (WORD)_DAT_101285f8);
							} else {
								NetSendCmdParam1(1, '\x12', (WORD)_DAT_101285f8);
							}
						}
					} else {
						NetSendCmdLoc(1, '\r', x, y);
					}
				} else {
					if (bShift == 0) {
						if (_DAT_101285f8 == -1) {
							if ((DAT_101285f4 != -1) && (_DAT_100f6b8c == 0)) {
								NetSendCmdParam1(1, '\x13', (short)DAT_101285f4);
							}
						} else {
							NetSendCmdParam1(1, '\x12', (WORD)_DAT_101285f8);
						}
					} else {
						if (_DAT_101285f8 == -1) {
							NetSendCmdLoc(1, '7', x, y);
						} else {
							BVar4 = CanTalkToMonst(_DAT_101285f8);
							if (BVar4 == 0) {
								NetSendCmdLoc(1, '7', (BYTE)_DAT_10128600, (BYTE)_DAT_101285fc);
							} else {
								NetSendCmdParam1(1, '\x12', (WORD)_DAT_101285f8);
							}
						}
					}
				}
			} else {
				if (_DAT_1012861c == 5) {
					bCmd = '\x11';
				} else {
					bCmd = '\x10';
				}
				NetSendCmdLocParam1(1, bCmd, x, y, (short)DAT_101285f7);
			}
		} else {
			if (_DAT_1013c970 == 0) {
				bCmd = '*';
			} else {
				bCmd = ')';
			}
			NetSendCmdLocParam1(1, bCmd, x, y, (short)DAT_101285f6);
		}
		if ((((bShift == 0) && (DAT_101285f6 == -1)) && (DAT_101285f7 == -1)) && ((_DAT_101285f8 == -1 && (DAT_101285f4 == -1)))) {
			return 1;
		}
	}
	return 0;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

BOOL TryIconCurs(void)

{
	BOOL BVar1;
	int iVar2;
	WORD wParam2;

	iVar2 = 0x100f8fd0;
	if (_DAT_1012861c == 8) {
		NetSendCmdParam1(1, '\x1a', (short)(char)DAT_101285f4);
		BVar1 = 1;
	} else {
		if (_DAT_1012861c == 10) {
			NetSendCmdParam1(1, 'M', (short)(char)DAT_101285f4);
			BVar1 = 1;
		} else {
			if (_DAT_1012861c == 7) {
				DoTelekinesis();
				BVar1 = 1;
			} else {
				if (_DAT_1012861c == 2) {
					if ((int)DAT_101285f5 == -1) {
						NewCursor(1);
					} else {
						CheckIdentify(myplr, (int)DAT_101285f5);
					}
					BVar1 = 1;
				} else {
					if (_DAT_1012861c == 3) {
						if ((int)DAT_101285f5 == -1) {
							NewCursor(1);
						} else {
							DoRepair(myplr, (int)DAT_101285f5);
						}
						BVar1 = 1;
					} else {
						if (_DAT_1012861c == 4) {
							if ((int)DAT_101285f5 == -1) {
								NewCursor(1);
							} else {
								DoRecharge(myplr, (int)DAT_101285f5);
							}
							BVar1 = 1;
						} else {
							if (_DAT_1012861c == 9) {
								if (_DAT_101285f8 == -1) {
									if (DAT_101285f4 == -1) {
										GetSpellLevel(myplr, *(int *)((int)plr + myplr * 0x55ec + 0xac));
										NetSendCmdParam3(1, '\x0f', (ushort) * *(undefined4 **)(iVar2 + -0x7658) & 0xff,
										    (ushort) * *(undefined4 **)(iVar2 + -0x765c) & 0xff,
										    (WORD) * (undefined4 *)((int)plr + myplr * 0x55ec + 0xac));
									} else {
										iVar2 = GetSpellLevel(myplr, *(int *)((int)plr + myplr * 0x55ec + 0xac));
										NetSendCmdLocParam2(1, '\x19', DAT_101285f4,
										    (BYTE) * (undefined4 *)((int)plr + myplr * 0x55ec + 0xac), (WORD)iVar2,
										    wParam2);
									}
								} else {
									iVar2 = GetSpellLevel(myplr, *(int *)((int)plr + myplr * 0x55ec + 0xac));
									NetSendCmdLocParam2(1, '\x18', (BYTE)_DAT_101285f8,
									    (BYTE) * (undefined4 *)((int)plr + myplr * 0x55ec + 0xac), (WORD)iVar2, wParam2);
								}
								NewCursor(1);
								BVar1 = 1;
							} else {
								if ((_DAT_1012861c == 5) && (DAT_101285f7 == -1)) {
									NewCursor(1);
									BVar1 = 1;
								} else {
									BVar1 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
	return BVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL LeftMouseDown(int wParam)

{
	undefined8 uVar1;
	int iVar2;
	BOOL BVar4;
	ulonglong uVar3;
	undefined8 in_r4;
	ulonglong in_r5;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffa8;

	iVar2 = 0x100f8fd0;
	BVar4 = gmenu_left_mouse(1);
	if (((BVar4 == 0) && (BVar4 = control_check_talk_btn(), BVar4 == 0)) && (*(int *)(iVar2 + -0x4f54) == 0)) {
		if (**(int **)(iVar2 + -0x75cc) == 0) {
			if (**(int **)(iVar2 + -0x75d0) != 2) {
				if (**(int **)(iVar2 + -0x7678) == 0) {
					if (_DAT_101282b4 == 0) {
						if (**(char **)(iVar2 + -0x7764) == '\0') {
							if (_MouseY < 0x160) {
								BVar4 = gmenu_exception();
								if (BVar4 != 0) {
									return 0;
								}
								BVar4 = TryIconCurs();
								if (BVar4 != 0) {
									return 0;
								}
								uVar3 = ZEXT48(*(int **)(iVar2 + -0x77c8));
								if ((((**(int **)(iVar2 + -0x77c8) != 0) && (0x20 < MouseX)) && (MouseX < 0x120)) && ((0x20 < _MouseY && (_MouseY < 0x134)))) {
									QuestlogESC();
									return 0;
								}
								if (DAT_1014919d != '\0') {
									DAT_1014919d = 0;
									sfx_stop();
									FUN_1005bd38(
									    uVar3, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8);
									return 0;
								}
								if ((**(int **)(iVar2 + -0x77c4) != 0) && (MouseX < 0x140)) {
									CheckChrBtns();
									return 0;
								}
								if ((**(int **)(iVar2 + -0x77bc) != 0) && (0x140 < MouseX)) {
									if (_DAT_10128178 == 0) {
										CheckInvItem();
									}
									return 0;
								}
								if ((**(int **)(iVar2 + -0x77c0) != 0) && (0x140 < MouseX)) {
									CheckSBook();
									return 0;
								}
								if (0xb < _DAT_1012861c) {
									BVar4 = TryInvPut();
									if (BVar4 != 0) {
										NetSendCmdPItem(1, '\n', (BYTE) * *(undefined4 **)(iVar2 + -0x7658),
										    (BYTE) * *(undefined4 **)(iVar2 + -0x765c));
										NewCursor(1);
									}
									return 0;
								}
								if ((*(int *)(*(int *)(iVar2 + -0x77a8) + **(int **)(iVar2 + -0x77ac) * 0x55ec + 0x180) != 0) && (_DAT_101282b4 == 0)) {
									CheckLvlBtn();
								}
								if (**(int **)(iVar2 + -0x76d8) == 0) {
									uVar1 = countLeadingZeros(5 - wParam);
									BVar4 = LeftMouseCmd((uint)uVar1 >> 5 & 0xff);
									return BVar4;
								}
							} else {
								if (((**(int **)(iVar2 + -0x76d0) == 0) && (_DAT_10128178 == 0)) && (BVar4 = gmenu_exception(), BVar4 == 0)) {
									CheckInvScrn();
								}
								DoPanBtn();
								if ((1 < _DAT_1012861c) && (_DAT_1012861c < 0xc)) {
									NewCursor(1);
								}
							}
						} else {
							CheckStoreBtn();
						}
					} else {
						SetSpell();
					}
				} else {
					doom_close();
				}
			}
		} else {
			control_check_btn_press();
		}
	}
	return 0;
}

void LeftMouseUp(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	gmenu_left_mouse(0);
	control_release_talk_btn();
	if (**(int **)(iVar1 + -0x76e0) != 0) {
		CheckBtnUp();
	}
	if (**(int **)(iVar1 + -0x76ec) != 0) {
		ReleaseChrBtns();
	}
	if (**(int **)(iVar1 + -0x76d8) != 0) {
		ReleaseLvlBtn();
	}
	if (**(char **)(iVar1 + -0x7764) != '\0') {
		ReleaseStoreBtn();
	}
	return;
}

void RightMouseDown(void)

{
	int iVar1;
	BOOL BVar2;

	iVar1 = 0x100f8fd0;
	BVar2 = gmenu_exception();
	if ((((BVar2 == 0) && (*(int *)(iVar1 + -0x4f54) == 0)) && (**(int **)(iVar1 + -0x75d0) != 2)) && (*(char *)(*(int *)(iVar1 + -0x77a8) + myplr * 0x55ec + 0x139) == '\0')) {
		if (**(int **)(iVar1 + -0x7678) == 0) {
			if (**(char **)(iVar1 + -0x7764) == '\0') {
				if (**(int **)(iVar1 + -0x76b8) == 0) {
					if ((0x15f < **(int **)(iVar1 + -0x76ac)) || (((**(int **)(iVar1 + -0x77c0) == 0 || (**(int **)(iVar1 + -0x76a8) < 0x141)) && ((BVar2 = TryIconCurs(), BVar2 == 0 && (((int)DAT_101285f5 == -1 || (BVar2 = UseInvItem(myplr, (int)DAT_101285f5), BVar2 == 0)))))))) {
						iVar1 = **(int **)(iVar1 + -0x7744);
						if (iVar1 == 1) {
							if (((int)DAT_101285f5 == -1) || (BVar2 = UseInvItem(myplr, (int)DAT_101285f5), BVar2 == 0)) {
								CheckPlrSpell();
							}
						} else {
							if ((1 < iVar1) && (iVar1 < 0xc)) {
								NewCursor(1);
							}
						}
					}
				} else {
					SetSpell();
				}
			}
		} else {
			doom_close();
		}
	}
	return;
}

BOOL gmenu_on_mouse_move(void)

{
	BOOL BVar1;

	BVar1 = gmenu_on_mouse_move();
	return BVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void diablo_pause_game(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	if ((byte)gbMaxPlayers < 2) {
		if (_DAT_10129104 == 0) {
			_DAT_10129104 = 2;
			iVar1 = 0x100f8fd0;
			FreeMonsterSnd();
			track_repeat_walk(0);
		} else {
			_DAT_10129104 = 0;
		}
		**(undefined4 **)(iVar1 + -0x76bc) = 0xff;
	}
	return;
}

char *FUN_10025168(int param_1,
    int param_2,
    int param_3,
    int param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	char *pcVar1;

	strcpy((char *)param_1, s_I_need_help__Come_Here__100f6b90);
	strcpy((char *)param_2, s_Follow_me__100f6be0);
	strcpy((char *)param_3, s_Here_s_something_for_you__100f6c30);
	pcVar1 = strcpy((char *)param_4, s_Now_you_DIE__100f6c80);
	return pcVar1;
}

char *FUN_100251e0(int param_1,
    int param_2,
    int param_3,
    int param_4,
    undefined param_5,
    undefined param_6,
    undefined param_7,
    undefined param_8,
    undefined4 param_9)

{
	char *pcVar1;

	strncpy(s_I_need_help__Come_Here__100f6b90, (char *)param_1, 0x4f);
	uRam100f6bdf = 0;
	strncpy(s_Follow_me__100f6be0, (char *)param_2, 0x4f);
	uRam100f6c2f = 0;
	strncpy(s_Here_s_something_for_you__100f6c30, (char *)param_3, 0x4f);
	uRam100f6c7f = 0;
	pcVar1 = strncpy(s_Now_you_DIE__100f6c80, (char *)param_4, 0x4f);
	uRam100f6ccf = 0;
	return pcVar1;
}

void diablo_hotkey_msg(DWORD dwMsg)

{
	char acStack88[88];

	if (gbMaxPlayers != '\x01') {
		strcpy(acStack88, s_I_need_help__Come_Here__100f6b90 + dwMsg * 0x50);
		NetSendCmdString(-1, acStack88);
	}
	return;
}

BOOL PressSysKey(int wParam)

{
	BOOL BVar1;

	BVar1 = gmenu_exception();
	if (BVar1 == 0) {
		if (wParam == 0x79) {
			diablo_hotkey_msg(1);
			BVar1 = 1;
		} else {
			BVar1 = 0;
		}
	} else {
		BVar1 = 0;
	}
	return BVar1;
}

void ReleaseKey(int vkey)

{
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL PressEscKey(void)

{
	bool bVar1;
	int iVar2;
	ulonglong uVar3;
	BOOL BVar4;
	ulonglong uVar5;
	ulonglong in_r5;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;

	iVar2 = 0x100f8fd0;
	uVar5 = ZEXT48(&DAT_101291f0);
	bVar1 = _DAT_101291f0 != 0;
	if (bVar1) {
		iVar2 = 0x100f8fd0;
		doom_close();
	}
	uVar3 = (ulonglong)bVar1;
	if (_DAT_1013c640 != 0) {
		_DAT_1013c640 = 0;
		uVar3 = 1;
	}
	BVar4 = (BOOL)uVar3;
	if (DAT_1014919d == '\0') {
		if (**(char **)(iVar2 + -0x7764) != '\0') {
			STextESC();
			BVar4 = 1;
		}
	} else {
		DAT_1014919d = '\0';
		sfx_stop();
		FUN_1005bd38(uVar3, uVar5, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8);
		BVar4 = 1;
	}
	if (**(char **)(iVar2 + -0x75d8) != '\0') {
		BVar4 = 1;
		**(undefined **)(iVar2 + -0x75dc) = 0;
	}
	if (**(int **)(iVar2 + -0x76d0) != 0) {
		control_reset_talk();
		BVar4 = 1;
	}
	if (**(int **)(iVar2 + -0x7704) != 0) {
		control_drop_gold('\x1b');
		BVar4 = 1;
	}
	if (_DAT_101282b4 != 0) {
		_DAT_101282b4 = 0;
		BVar4 = 1;
	}
	return BVar4;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 PressEscKey2(undefined8 param_1,
    undefined8 param_2,
    ulonglong param_3,
    undefined8 param_4,
    undefined8 param_5,
    undefined4 param_6,
    undefined4 param_7,
    undefined4 param_8,
    undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	BOOL BVar4;
	undefined8 uVar3;
	uint uVar5;

	BVar4 = PressEscKey();
	if (BVar4 == 0) {
		uVar5 = 1;
		uVar1 = _DAT_1019cbec | _DAT_10128158 | _DAT_1013c970 | _DAT_101282b8;
		if ((_DAT_1013c970 == 0) && (_DAT_10128158 == 0)) {
			uVar5 = 0;
		}
		uVar2 = 1;
		if ((_DAT_101282b8 == 0) && (_DAT_1019cbec == 0)) {
			uVar2 = 0;
		}
		func_0x1002552c((ulonglong)uVar2, (ulonglong)uVar5);
		_DAT_1013c970 = 0;
		_DAT_101282b8 = 0;
		_DAT_10128158 = 0;
		_DAT_1019cbec = 0;
		if (uVar1 == 0) {
			BVar4 = gmenu_exception();
			if (BVar4 == 0) {
				uVar3 = 0;
			} else {
				gamemenu_off();
				uVar3 = 1;
			}
		} else {
			uVar3 = 1;
		}
	} else {
		uVar3 = 1;
	}
	return uVar3;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PressKey(int vkey)

{
	SHORT SVar5;
	BOOL BVar3;
	ulonglong uVar1;
	undefined8 uVar2;
	uint uVar4;
	undefined8 in_r4;
	uint uVar6;
	ulonglong in_r5;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffff98;
	int local_5c;

	SVar5 = GetKeyState(0x11);
	if (((int)SVar5 & 0x8000U) != 0) {
		if (vkey == 0x37) {
			vkey = 0x76;
		} else {
			if (vkey < 0x37) {
				if (vkey == 0x33) {
					vkey = 0x72;
				} else {
					if (vkey < 0x33) {
						if (vkey == 0x31) {
							vkey = 0x70;
						} else {
							if (vkey < 0x31) {
								if (0x2f < vkey) {
									vkey = 0x79;
								}
							} else {
								vkey = 0x71;
							}
						}
					} else {
						if (vkey == 0x35) {
							vkey = 0x74;
						} else {
							if (vkey < 0x35) {
								vkey = 0x73;
							} else {
								vkey = 0x75;
							}
						}
					}
				}
			} else {
				if (vkey == 0xbb) {
					vkey = 0x7b;
				} else {
					if (vkey < 0xbb) {
						if (vkey == 0x39) {
							vkey = 0x78;
						} else {
							if (vkey < 0x39) {
								vkey = 0x77;
							}
						}
					} else {
						if (vkey == 0xbd) {
							vkey = 0x7a;
						}
					}
				}
			}
		}
	}
	BVar3 = gmenu_presskeys(vkey);
	if (BVar3 != 0) {
		return;
	}
	BVar3 = control_presskeys(vkey);
	if (BVar3 != 0) {
		return;
	}
	uVar1 = ZEXT48(*(int **)(local_5c + -0x75cc));
	if (**(int **)(local_5c + -0x75cc) != 0) {
		if (*(int *)(local_5c + -0x4f54) != 0) {
			return;
		}
		if (vkey == 0x78) {
			uVar1 = 0;
			diablo_hotkey_msg(0);
		}
		if (vkey == 0x79) {
			uVar1 = 1;
			diablo_hotkey_msg(1);
		}
		if (vkey == 0x7a) {
			uVar1 = 2;
			diablo_hotkey_msg(2);
		}
		if (vkey == 0x7b) {
			uVar1 = 3;
			diablo_hotkey_msg(3);
		}
		if (vkey == 0xd) {
			control_type_message();
		}
		if (vkey != 0x1b) {
			return;
		}
	}
	if (vkey == 0x1b) {
		uVar2 = PressEscKey2(uVar1, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff98);
		if ((int)uVar2 == 0) {
			track_repeat_walk(0);
			gamemenu_previous();
		}
	} else {
		if ((*(int *)(local_5c + -0x4f54) == 0) && (**(int **)(local_5c + -0x7704) == 0)) {
			if (vkey == 0x13) {
				diablo_pause_game();
			} else {
				if (**(int **)(local_5c + -0x75d0) != 2) {
					if (vkey == 0xd) {
						if (stextflag == '\0') {
							if (_DAT_1019cbec == 0) {
								control_type_message();
							} else {
								QuestlogEnter();
							}
						} else {
							STextEnter();
						}
					} else {
						if (*(int *)(local_5c + -0x4f58) != 0) {
							if (vkey == 0x72) {
								vkey = 0x76;
							} else {
								if (vkey < 0x72) {
									if (vkey == 0x70) {
										vkey = 0x74;
									} else {
										if (0x6f < vkey) {
											vkey = 0x75;
										}
									}
								} else {
									if (vkey < 0x74) {
										vkey = 0x77;
									}
								}
							}
						}
						if ((vkey == 0x70) || (vkey == 0x2d)) {
							if (_DAT_1013c640 == 0) {
								if (stextflag == '\0') {
									uVar2 = 0;
									_DAT_1013c970 = 0;
									_DAT_101282b8 = 0;
									_DAT_10128158 = 0;
									_DAT_101282b4 = 0;
									if ((DAT_1014919d != '\0') && (leveltype == '\0')) {
										DAT_1014919d = '\0';
										sfx_stop();
										FUN_1005bd38(
										    uVar2, in_r4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff98);
									}
									_DAT_1019cbec = 0;
									_DAT_10127e74 = 0;
									DAT_1012edb1 = 0;
									gamemenu_off();
									DisplayHelp();
									doom_close();
								} else {
									ClearPanel();
									AddPanelString(*(char **)(local_5c + -0x63f0), 1);
									AddPanelString(*(char **)(local_5c + -0x63f4), 1);
									track_repeat_walk(0);
								}
							} else {
								_DAT_1013c640 = 0;
							}
						} else {
							if (vkey == 0x74) {
								if (_DAT_101282b4 == 0) {
									ToggleSpell(0);
								} else {
									SetSpeedSpell(0);
								}
							} else {
								if (vkey == 0x75) {
									if (_DAT_101282b4 == 0) {
										ToggleSpell(1);
									} else {
										SetSpeedSpell(1);
									}
								} else {
									if (vkey == 0x76) {
										if (_DAT_101282b4 == 0) {
											ToggleSpell(2);
										} else {
											SetSpeedSpell(2);
										}
									} else {
										if (vkey == 0x77) {
											if (_DAT_101282b4 == 0) {
												ToggleSpell(3);
											} else {
												SetSpeedSpell(3);
											}
										} else {
											if (vkey == 0x78) {
												diablo_hotkey_msg(0);
											} else {
												if (vkey == 0x79) {
													diablo_hotkey_msg(1);
												} else {
													if (vkey == 0x7a) {
														diablo_hotkey_msg(2);
													} else {
														if (vkey == 0x7b) {
															diablo_hotkey_msg(3);
														} else {
															if (vkey == 0x26) {
																if (stextflag == '\0') {
																	if (_DAT_1019cbec == 0) {
																		if (_DAT_1013c640 == 0) {
																			if (_DAT_10127e74 != 0) {
																				AutomapUp();
																			}
																		} else {
																			HelpScrollUp();
																		}
																	} else {
																		QuestlogUp();
																	}
																} else {
																	STextUp();
																}
															} else {
																if (vkey == 0x28) {
																	if (stextflag == '\0') {
																		if (_DAT_1019cbec == 0) {
																			if (_DAT_1013c640 == 0) {
																				if (_DAT_10127e74 != 0) {
																					AutomapDown();
																				}
																			} else {
																				HelpScrollDown();
																			}
																		} else {
																			QuestlogDown();
																		}
																	} else {
																		STextDown();
																	}
																} else {
																	if (vkey == 0x21) {
																		if (stextflag != '\0') {
																			STextPrior();
																		}
																	} else {
																		if (vkey == 0x22) {
																			if (stextflag != '\0') {
																				STextNext();
																			}
																		} else {
																			if (vkey == 0x25) {
																				if ((_DAT_10127e74 != 0) && (_DAT_10128154 == 0)) {
																					AutomapLeft();
																				}
																			} else {
																				if (vkey == 0x27) {
																					if ((_DAT_10127e74 != 0) && (_DAT_10128154 == 0)) {
																						AutomapRight();
																					}
																				} else {
																					if (vkey == 9) {
																						DoAutoMap();
																					} else {
																						if (vkey == 0x20) {
																							uVar6 = 1;
																							if ((_DAT_1013c970 == 0) && (_DAT_10128158 == 0)) {
																								uVar6 = 0;
																							}
																							uVar4 = 1;
																							if ((_DAT_101282b8 == 0) && (_DAT_1019cbec == 0)) {
																								uVar4 = 0;
																							}
																							uVar1 = (ulonglong)uVar6;
																							func_0x1002552c(
																							    (ulonglong)uVar4);
																							uVar2 = 0;
																							_DAT_1013c640 = 0;
																							_DAT_1013c970 = 0;
																							_DAT_101282b8 = 0;
																							_DAT_10128158 = 0;
																							_DAT_101282b4 = 0;
																							if ((DAT_1014919d != '\0') && (leveltype == '\0')) {
																								DAT_1014919d = '\0';
																								sfx_stop();
																								FUN_1005bd38(uVar2,
																								    uVar1, in_r5, in_r6,
																								    in_r7, in_r8, in_r9,
																								    in_r10,
																								    in_stack_ffffff98);
																							}
																							_DAT_1019cbec = 0;
																							_DAT_10127e74 = 0;
																							DAT_1012edb1 = 0;
																							gamemenu_off();
																							doom_close();
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

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PressChar(int vkey)

{
	int iVar1;
	BOOL BVar2;
	char vkey_00;

	iVar1 = 0x100f8fd0;
	BVar2 = gmenu_exception();
	if ((((BVar2 == 0) && (BVar2 = control_talk_last_key(vkey), BVar2 == 0)) && (*(int *)(iVar1 + -0x4f54) == 0)) && (**(int **)(iVar1 + -0x75cc) == 0)) {
		vkey_00 = (char)vkey;
		if ((vkey_00 == 'p') || (vkey_00 == 'P')) {
			diablo_pause_game();
		} else {
			if (**(int **)(iVar1 + -0x75d0) != 2) {
				if (**(int **)(iVar1 + -0x7678) == 0) {
					if (_DAT_10128178 == 0) {
						if (vkey - 0x21U < 0x5a) {
							// WARNING: Could not recover jumptable at 0x10025e30. Too many branches
							// WARNING: Treating indirect jump as call
							(**(code **)(iVar1 + -0x22f8 + (vkey - 0x21U) * 4))();
							return;
						}
					} else {
						control_drop_gold(vkey_00);
					}
				} else {
					doom_close();
				}
			}
		}
	}
	return;
}

LRESULT DisableInputWndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)

{
	LRESULT plVar1;

	if (uMsg == 0x201) {
		if (DAT_10128fdc != '\0') {
			return (LRESULT)0x0;
		}
		DAT_10128fdc = 1;
		SetCapture((HWND)hWnd);
		return (LRESULT)0x0;
	}
	if (0x200 < (int)uMsg) {
		if (uMsg == 0x205) {
			if (DAT_10128fdc != '\x02') {
				return (LRESULT)0x0;
			}
			DAT_10128fdc = 0;
			ReleaseCapture();
			return (LRESULT)0x0;
		}
		if ((int)uMsg < 0x205) {
			if (uMsg != 0x203) {
				if (0x202 < (int)uMsg) {
					if (DAT_10128fdc != '\0') {
						return (LRESULT)0x0;
					}
					DAT_10128fdc = 2;
					SetCapture((HWND)hWnd);
					return (LRESULT)0x0;
				}
				if (DAT_10128fdc != '\x01') {
					return (LRESULT)0x0;
				}
				DAT_10128fdc = 0;
				ReleaseCapture();
				return (LRESULT)0x0;
			}
		} else {
			if (uMsg == 0x215) {
				if ((LPARAM)hWnd != lParam) {
					DAT_10128fdc = '\0';
				}
				return (LRESULT)0x0;
			}
		}
		goto LAB_10026314;
	}
	if (uMsg == 0x104) {
	LAB_10026244:
		plVar1 = (LRESULT)0x0;
	} else {
		if ((int)uMsg < 0x104) {
			if (((int)uMsg < 0x103) && (0xff < (int)uMsg))
				goto LAB_10026244;
		} else {
			if ((uMsg == 0x112) || ((0x111 < (int)uMsg && (0x1ff < (int)uMsg))))
				goto LAB_10026244;
		}
	LAB_10026314:
		plVar1 = MainWndProc(hWnd, uMsg, wParam, lParam);
	}
	return plVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LRESULT GM_Game(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)

{
	short sVar1;
	short sVar2;
	BOOL rep;
	LRESULT plVar3;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	int local_4c;

	sVar1 = (short)lParam;
	sVar2 = (short)((uint)lParam >> 0x10);
	if (uMsg == 0x205) {
		MouseX = (int)sVar1;
		_MouseY = (int)sVar2;
		if (DAT_10128fdc != '\x02') {
			return (LRESULT)0x0;
		}
		DAT_10128fdc = 0;
		ReleaseCapture();
		return (LRESULT)0x0;
	}
	if ((int)uMsg < 0x205) {
		if (uMsg == 0x112) {
			if (wParam == 0xf060) {
				_DAT_101290fc = 0;
				_gbRunGame = 0;
				return (LRESULT)0x0;
			}
		} else {
			if ((int)uMsg < 0x112) {
				if (uMsg == 0x102) {
					ConvertText_MacToWindows(0xd8, 0xd8, 2, (char)lParam, 0x54, in_r8, in_r9, in_r10, in_stack_ffffffab,
					    in_stack_ffffffaf, local_4c);
					PressChar((int)(char)wParam & 0xffU | wParam & 0xffffff00);
					return (LRESULT)0x0;
				}
				if ((int)uMsg < 0x102) {
					if (uMsg == 0x100) {
						PressKey(wParam);
						return (LRESULT)0x0;
					}
					if (0xff < (int)uMsg) {
						ReleaseKey(wParam);
						return (LRESULT)0x0;
					}
				} else {
					if ((uMsg == 0x104) && (rep = PressSysKey(wParam), rep != 0)) {
						return (LRESULT)0x0;
					}
				}
			} else {
				if (uMsg == 0x202) {
					MouseX = (int)sVar1;
					_MouseY = (int)sVar2;
					if (DAT_10128fdc != '\x01') {
						return (LRESULT)0x0;
					}
					DAT_10128fdc = 0;
					LeftMouseUp();
					track_repeat_walk(0);
					ReleaseCapture();
					return (LRESULT)0x0;
				}
				if ((int)uMsg < 0x202) {
					if (uMsg == 0x200) {
						MouseX = (int)sVar1;
						_MouseY = (int)sVar2;
						gmenu_on_mouse_move();
						return (LRESULT)0x0;
					}
					if (0x1ff < (int)uMsg) {
						MouseX = (int)sVar1;
						_MouseY = (int)sVar2;
						if (DAT_10128fdc != '\0') {
							return (LRESULT)0x0;
						}
						DAT_10128fdc = 1;
						SetCapture((HWND)hWnd);
						rep = LeftMouseDown(wParam);
						track_repeat_walk(rep);
						return (LRESULT)0x0;
					}
				} else {
					if (0x203 < (int)uMsg) {
						MouseX = (int)sVar1;
						_MouseY = (int)sVar2;
						if (DAT_10128fdc != '\0') {
							return (LRESULT)0x0;
						}
						DAT_10128fdc = 2;
						SetCapture((HWND)hWnd);
						RightMouseDown();
						return (LRESULT)0x0;
					}
				}
			}
		}
	} else {
		if (uMsg != 0x3a4) {
			if ((int)uMsg < 0x3a4) {
				if (uMsg == 0x3a1) {
					rep = gmenu_exception();
					if (rep != 0) {
						gamemenu_off();
					}
					gamemenu_previous();
				} else {
					if ((int)uMsg < 0x3a1) {
						if ((uMsg == 0x215) && ((LPARAM)hWnd != lParam)) {
							DAT_10128fdc = '\0';
							track_repeat_walk(0);
						}
					} else {
						if ((int)uMsg < 0x3a3) {
							rep = PressEscKey();
							if (rep == 0) {
								track_repeat_walk(0);
								gamemenu_previous();
							}
						} else {
							rep = gmenu_exception();
							if (rep != 0) {
								gamemenu_off();
							}
							gamemenu_previous();
						}
					}
				}
			} else {
				if (uMsg == 0x3a7) {
					diablo_pause_game();
				} else {
					if ((int)uMsg < 0x3a7) {
						if ((int)uMsg < 0x3a6) {
							rep = gmenu_exception();
							if (rep != 0) {
								gamemenu_off();
							}
							gamemenu_previous();
						}
					} else {
						if (((int)uMsg < 0x40a) && (0x401 < (int)uMsg)) {
							if (1 < (byte)gbMaxPlayers) {
								pfile_write_hero();
							}
							nthread_ignore_mutex(1);
							PaletteFadeOut(8);
							FreeMonsterSnd();
							music_stop();
							track_repeat_walk(0);
							DAT_10128fdc = 0;
							ReleaseCapture();
							ShowProgress(uMsg);
							**(undefined4 **)(local_4c + -0x76bc) = 0xff;
							DrawAndBlit();
							if (_gbRunGame != 0) {
								PaletteFadeIn(8);
							}
							nthread_ignore_mutex(0);
							**(undefined4 **)(local_4c + -0x75b0) = 1;
							return (LRESULT)0x0;
						}
					}
				}
			}
		}
	}
	plVar3 = MainWndProc(hWnd, uMsg, wParam, lParam);
	return plVar3;
}

// WARNING: Removing unreachable block (ram,0x100267c0)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void LoadLvlGFX(void)

{
	byte bVar1;
	int iVar2;
	char cVar3;
	undefined uVar4;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffab;

	iVar2 = 0x100f8fd0;
	if (_DAT_1013b348 != (BYTE *)0x0) {
		iVar2 = 0x100f8fd0;
		UnlockMemFile((char)_DAT_1013b348);
		MemFreeDbg((int **)&DAT_1013b348);
	}
	bVar1 = **(byte **)(iVar2 + -0x7794);
	if (bVar1 == 2) {
		uVar4 = 0;
		_DAT_1013b348 = LoadFileInMem(*(char **)(iVar2 + -0x641c), (DWORD *)0x0);
		cVar3 = LockMemFile(ZEXT48(_DAT_1013b348), uVar4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab);
		_DAT_1013b344 = (int)cVar3;
		_DAT_1013b350 = LoadFileInMem(*(char **)(iVar2 + -0x6420), (DWORD *)0x0);
		_DAT_1013b34c = LoadFileInMem(*(char **)(iVar2 + -0x6424), (DWORD *)0x0);
		_DAT_1013b354 = LoadFileInMem("Levels\\L2Data\\L2S.CEL", (DWORD *)0x0);
	} else {
		if (bVar1 < 2) {
			if (bVar1 == 0) {
				uVar4 = 0;
				_DAT_1013b348 = LoadFileInMem(*(char **)(iVar2 + -0x63fc), (DWORD *)0x0);
				cVar3 = LockMemFile(
				    ZEXT48(_DAT_1013b348), uVar4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab);
				_DAT_1013b344 = (int)cVar3;
				_DAT_1013b350 = LoadFileInMem(*(char **)(iVar2 + -0x6400), (DWORD *)0x0);
				_DAT_1013b34c = LoadFileInMem(*(char **)(iVar2 + -0x6404), (DWORD *)0x0);
				_DAT_1013b354 = LoadFileInMem(*(char **)(iVar2 + -0x6408), (DWORD *)0x0);
			} else {
				uVar4 = 0;
				_DAT_1013b348 = LoadFileInMem(*(char **)(iVar2 + -0x640c), (DWORD *)0x0);
				cVar3 = LockMemFile(
				    ZEXT48(_DAT_1013b348), uVar4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab);
				_DAT_1013b344 = (int)cVar3;
				_DAT_1013b350 = LoadFileInMem(*(char **)(iVar2 + -0x6410), (DWORD *)0x0);
				_DAT_1013b34c = LoadFileInMem(*(char **)(iVar2 + -0x6414), (DWORD *)0x0);
				_DAT_1013b354 = LoadFileInMem("Levels\\L1Data\\L1S.CEL", (DWORD *)0x0);
			}
		} else {
			if (bVar1 == 4) {
				uVar4 = 0;
				_DAT_1013b348 = LoadFileInMem(*(char **)(iVar2 + -0x6438), (DWORD *)0x0);
				cVar3 = LockMemFile(
				    ZEXT48(_DAT_1013b348), uVar4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab);
				_DAT_1013b344 = (int)cVar3;
				_DAT_1013b350 = LoadFileInMem(*(char **)(iVar2 + -0x643c), (DWORD *)0x0);
				_DAT_1013b34c = LoadFileInMem(*(char **)(iVar2 + -0x6440), (DWORD *)0x0);
				_DAT_1013b354 = LoadFileInMem("Levels\\L2Data\\L2S.CEL", (DWORD *)0x0);
			} else {
				if (bVar1 < 4) {
					uVar4 = 0;
					_DAT_1013b348 = LoadFileInMem(*(char **)(iVar2 + -0x642c), (DWORD *)0x0);
					cVar3 = LockMemFile(
					    ZEXT48(_DAT_1013b348), uVar4, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab);
					_DAT_1013b344 = (int)cVar3;
					_DAT_1013b350 = LoadFileInMem(*(char **)(iVar2 + -0x6430), (DWORD *)0x0);
					_DAT_1013b34c = LoadFileInMem(*(char **)(iVar2 + -0x6434), (DWORD *)0x0);
					_DAT_1013b354 = LoadFileInMem("Levels\\L1Data\\L1S.CEL", (DWORD *)0x0);
				} else {
					app_fatal(*(char **)(iVar2 + -0x6444));
				}
			}
		}
	}
	return;
}

void LoadAllGFX(void)

{
	int iVar1;
	BYTE *pBVar2;

	iVar1 = 0x100f8fd0;
	pBVar2 = DiabloAllocPtr(0x100000);
	**(BYTE ***)(iVar1 + -0x7578) = pBVar2;
	IncProgress();
	IncProgress();
	InitObjectGFX();
	IncProgress();
	InitMissileGFX();
	IncProgress();
	return;
}

// WARNING: Removing unreachable block (ram,0x100269f8)

void CreateLevel(int lvldir)

{
	if (leveltype == 2) {
		CreateL2Dungeon(*(DWORD *)(&DAT_101291a4 + (uint)currlevel * 4), lvldir);
		InitL2Triggers();
		Freeupstairs();
		LoadRndLvlPal(2);
	} else {
		if (leveltype < 2) {
			if (leveltype == 0) {
				CreateTown(lvldir);
				InitTownTriggers();
				LoadRndLvlPal(0);
			} else {
				CreateL5Dungeon(*(DWORD *)(&DAT_101291a4 + (uint)currlevel * 4), lvldir);
				InitL1Triggers();
				Freeupstairs();
				LoadRndLvlPal(1);
			}
		} else {
			if (leveltype == 4) {
				CreateL4Dungeon(*(DWORD *)(&DAT_101291a4 + (uint)currlevel * 4), lvldir);
				InitL4Triggers();
				Freeupstairs();
				LoadRndLvlPal(4);
			} else {
				if (leveltype < 4) {
					CreateL3Dungeon(*(DWORD *)(&DAT_101291a4 + (uint)currlevel * 4), lvldir);
					InitL3Triggers();
					Freeupstairs();
					LoadRndLvlPal(3);
				} else {
					app_fatal("CreateLevel");
				}
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void LoadGameLevel(BOOL firstflag, int lvldir)

{
	bool bVar1;
	bool bVar2;
	ulonglong uVar3;
	undefined8 uVar4;
	int pnum;
	BYTE *pBVar5;
	BOOL BVar6;
	PlayerStruct *pPVar7;
	int iVar8;
	longlong lVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	PlayerStruct *pPVar13;

	uVar4 = 0x100f8fd0;
	pPVar13 = plr;
	if (_DAT_10129134 != 0) {
		*(int *)(&DAT_101291a4 + (uint)currlevel * 4) = _DAT_10129134;
	}
	music_stop();
	SetCursor_(1);
	SetRndSeed(*(int *)(&DAT_101291a4 + (uint)currlevel * 4));
	IncProgress();
	MakeLightTable();
	LoadLvlGFX();
	IncProgress();
	if (firstflag != 0) {
		InitInv();
		InitItemGFX();
		InitQuestText();
		pnum = 0;
		while (pnum < (int)(uint)(byte)gbMaxPlayers) {
			InitPlrGFXMem(pnum);
			pnum = pnum + 1;
		}
		InitStores();
		InitAutomapOnce();
		InitHelp();
	}
	SetRndSeed(*(int *)(&DAT_101291a4 + (uint)currlevel * 4));
	if (leveltype == 0) {
		SetupTownStores();
	}
	IncProgress();
	InitAutomap();
	if ((leveltype != 0) && (lvldir != 4)) {
		InitLighting();
		InitVision();
	}
	InitLevelMonsters();
	IncProgress();
	if (DAT_1012f316 == '\0') {
		CreateLevel(lvldir);
		IncProgress();
		FillSolidBlockTbls();
		SetRndSeed(*(int *)(&DAT_101291a4 + (uint)currlevel * 4));
		if (leveltype == 0) {
			InitMissileGFX();
		} else {
			GetLevelMTypes();
			InitThemes();
			LoadAllGFX();
		}
		IncProgress();
		if (lvldir == 3) {
			GetReturnLvlPos();
		}
		if (lvldir == 5) {
			GetPortalLvlPos();
		}
		IncProgress();
		pnum = 0;
		pPVar7 = pPVar13;
		do {
			if (((pPVar7->plractive != false) && ((uint)currlevel == pPVar7->plrlevel)) && (InitPlayerGFX(pnum), lvldir != 4)) {
				InitPlayer(pnum, firstflag);
			}
			pnum = pnum + 1;
			pPVar7 = (PlayerStruct *)&pPVar7[1]._pSpellFlags;
		} while (pnum < 4);
		PlayDungMsgs();
		InitMultiView();
		IncProgress();
		uVar3 = (ulonglong)(byte)gbMaxPlayers;
		bVar1 = false;
		lVar9 = ZEXT48(plr) + (ulonglong)currlevel;
		pPVar7 = pPVar13;
		if (gbMaxPlayers != '\0') {
			do {
				if (((pPVar7->plractive != false) && (bVar2 = !bVar1, bVar1 = true, bVar2)) && (bVar1 = true, *(char *)((int)lVar9 + 0x1f0) == '\0')) {
					bVar1 = false;
				}
				pPVar7 = (PlayerStruct *)&pPVar7[1]._pSpellFlags;
				lVar9 = lVar9 + 0x55ec;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
		}
		SetRndSeed(*(int *)(&DAT_101291a4 + (uint)currlevel * 4));
		if (leveltype == 0) {
			iVar8 = 0;
			pnum = 0;
			do {
				lVar9 = 7;
				iVar10 = 0;
				do {
					*(byte *)(pnum + _DAT_1012f1bc + iVar10) = *(byte *)(pnum + _DAT_1012f1bc + iVar10) | 0x40;
					iVar11 = _DAT_1012f1bc + iVar10 + 1;
					*(byte *)(pnum + iVar11) = *(byte *)(pnum + iVar11) | 0x40;
					iVar11 = _DAT_1012f1bc + iVar10 + 2;
					*(byte *)(pnum + iVar11) = *(byte *)(pnum + iVar11) | 0x40;
					iVar11 = _DAT_1012f1bc + iVar10 + 3;
					*(byte *)(pnum + iVar11) = *(byte *)(pnum + iVar11) | 0x40;
					iVar11 = _DAT_1012f1bc + iVar10 + 4;
					*(byte *)(pnum + iVar11) = *(byte *)(pnum + iVar11) | 0x40;
					iVar11 = _DAT_1012f1bc + iVar10 + 5;
					*(byte *)(pnum + iVar11) = *(byte *)(pnum + iVar11) | 0x40;
					iVar11 = _DAT_1012f1bc + iVar10 + 6;
					*(byte *)(pnum + iVar11) = *(byte *)(pnum + iVar11) | 0x40;
					iVar11 = iVar10 + 8;
					iVar12 = _DAT_1012f1bc + iVar10 + 7;
					*(byte *)(pnum + iVar12) = *(byte *)(pnum + iVar12) | 0x40;
					*(byte *)(pnum + _DAT_1012f1bc + iVar11) = *(byte *)(pnum + _DAT_1012f1bc + iVar11) | 0x40;
					iVar12 = _DAT_1012f1bc + iVar11 + 1;
					*(byte *)(pnum + iVar12) = *(byte *)(pnum + iVar12) | 0x40;
					iVar12 = _DAT_1012f1bc + iVar11 + 2;
					*(byte *)(pnum + iVar12) = *(byte *)(pnum + iVar12) | 0x40;
					iVar12 = _DAT_1012f1bc + iVar11 + 3;
					*(byte *)(pnum + iVar12) = *(byte *)(pnum + iVar12) | 0x40;
					iVar12 = _DAT_1012f1bc + iVar11 + 4;
					*(byte *)(pnum + iVar12) = *(byte *)(pnum + iVar12) | 0x40;
					iVar12 = _DAT_1012f1bc + iVar11 + 5;
					*(byte *)(pnum + iVar12) = *(byte *)(pnum + iVar12) | 0x40;
					iVar12 = _DAT_1012f1bc + iVar11 + 6;
					*(byte *)(pnum + iVar12) = *(byte *)(pnum + iVar12) | 0x40;
					iVar10 = iVar10 + 0x10;
					iVar11 = _DAT_1012f1bc + iVar11 + 7;
					*(byte *)(pnum + iVar11) = *(byte *)(pnum + iVar11) | 0x40;
					lVar9 = lVar9 + -1;
				} while (lVar9 != 0);
				iVar8 = iVar8 + 1;
				pnum = pnum + 0x70;
			} while (iVar8 < 0x70);
			InitTowners();
			InitItems();
			InitMissiles();
			IncProgress();
			if (((firstflag == 0) && (lvldir != 4)) && ((*(char *)((int)plr + myplr * 0x55ec + (uint)currlevel + 0x1f0) != '\0' && (gbMaxPlayers == '\x01')))) {
				LoadLevel();
			}
			if (gbMaxPlayers != '\x01') {
				DeltaLoadLevel();
			}
			IncProgress();
		} else {
			if (((firstflag == 0) && (lvldir != 4)) && ((*(char *)((int)plr + myplr * 0x55ec + (uint)currlevel + 0x1f0) != '\0' && (gbMaxPlayers == '\x01')))) {
				InitMonsters();
				InitMissiles();
				InitDead();
				IncProgress();
				LoadLevel();
				IncProgress();
			} else {
				HoldThemeRooms();
				pnum = GetRndSeed();
				*(int *)(*(int *)((int)uVar4 + -0x75f4) + (uint)currlevel * 4) = pnum;
				InitMonsters();
				pnum = GetRndSeed();
				*(int *)(*(int *)((int)uVar4 + -0x75f8) + (uint)currlevel * 4) = pnum;
				InitObjects();
				InitItems();
				CreateThemeRooms();
				pnum = GetRndSeed();
				*(int *)(*(int *)((int)uVar4 + -0x75fc) + (uint)currlevel * 4) = pnum;
				InitMissiles();
				InitDead();
				pnum = GetRndSeed();
				*(int *)(*(int *)((int)uVar4 + -0x7600) + (uint)currlevel * 4) = pnum;
				if (gbMaxPlayers != '\x01') {
					DeltaLoadLevel();
				}
				IncProgress();
				SavePreLighting();
			}
		}
		if (gbMaxPlayers == '\x01') {
			ResyncQuests();
		} else {
			ResyncMPQuests();
		}
	} else {
		pBVar5 = DiabloAllocPtr(0x100000);
		**(BYTE ***)((int)uVar4 + -0x7578) = pBVar5;
		LoadSetMap();
		IncProgress();
		GetLevelMTypes();
		InitMonsters();
		InitMissileGFX();
		InitDead();
		FillSolidBlockTbls();
		IncProgress();
		if (lvldir == 5) {
			GetPortalLvlPos();
		}
		pnum = 0;
		pPVar7 = pPVar13;
		do {
			if (((pPVar7->plractive != false) && ((uint)currlevel == pPVar7->plrlevel)) && (InitPlayerGFX(pnum), lvldir != 4)) {
				InitPlayer(pnum, firstflag);
			}
			pnum = pnum + 1;
			pPVar7 = (PlayerStruct *)&pPVar7[1]._pSpellFlags;
		} while (pnum < 4);
		InitMultiView();
		IncProgress();
		if (((firstflag == 0) && (lvldir != 4)) && (*(char *)((int)plr + myplr * 0x55ec + (uint)DAT_1012f315 + 0x201) != '\0')) {
			LoadLevel();
		} else {
			InitItems();
			SavePreLighting();
		}
		InitMissiles();
		IncProgress();
	}
	SyncPortals();
	lVar9 = 0;
	do {
		if (((pPVar13->plractive != false) && ((uint)currlevel == pPVar13->plrlevel)) && ((pPVar13->_pLvlChanging == false || ((int)lVar9 == myplr)))) {
			if (pPVar13->_pHitPoints < 1) {
				pnum = pPVar13->WorldX * 0x70 + pPVar13->WorldY;
				*(byte *)(_DAT_1012f1bc + pnum) = *(byte *)(_DAT_1012f1bc + pnum) | 4;
			} else {
				if (gbMaxPlayers == '\x01') {
					*(char *)(_DAT_1012f1b8 + pPVar13->WorldX * 0x70 + pPVar13->WorldY) = (char)lVar9 + '\x01';
				} else {
					SyncInitPlrPos((int)lVar9);
				}
			}
		}
		lVar9 = lVar9 + 1;
		pPVar13 = (PlayerStruct *)&pPVar13[1]._pSpellFlags;
	} while ((int)lVar9 < 4);
	if (leveltype != 0) {
		SetDungeonMicros();
	}
	InitLightMax();
	IncProgress();
	IncProgress();
	if (firstflag != 0) {
		InitControlPan();
		IncProgress();
	}
	if (leveltype != 0) {
		ProcessLightList();
		ProcessVisionList();
	}
	music_start((uint)leveltype);
	do {
		BVar6 = IncProgress();
	} while (BVar6 == 0);
	if (((DAT_1012f316 != '\0') && (DAT_1012f315 == 1)) && (*(char *)(*(int *)((int)uVar4 + -0x7604) + 0x122) == '\x02')) {
		PlaySFX(0x351);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void game_logic(void)

{
	int iVar1;
	BOOL BVar2;

	iVar1 = 0x100f8fd0;
	if (_DAT_10129104 != 2) {
		if (_DAT_10129104 == 1) {
			_DAT_10129104 = 2;
		}
		if ((gbMaxPlayers == '\x01') && (iVar1 = 0x100f8fd0, BVar2 = gmenu_exception(), BVar2 != 0)) {
			_drawpanflag = _drawpanflag | 1;
		} else {
			BVar2 = gmenu_exception();
			if ((BVar2 == 0) && (*(int *)(iVar1 + -0x4f54) == 0)) {
				CheckCursMove();
				track_process();
			}
			if (**(int **)(iVar1 + -0x75a8) != 0) {
				ProcessPlayers();
			}
			if (**(char **)(iVar1 + -0x7794) == '\0') {
				ProcessTowners();
				ProcessItems();
				ProcessMissiles();
			} else {
				ProcessMonsters();
				ProcessObjects();
				ProcessMissiles();
				ProcessItems();
				ProcessLightList();
				ProcessVisionList();
			}
			sound_update();
			ClearPlrMsg();
			CheckTriggers();
			CheckQuests();
			_drawpanflag = _drawpanflag | 1;
			pfile_update(0);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void timeout_cursor(BOOL bTimeout)

{
	int iVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	iVar1 = 0x100f8fd0;
	if (bTimeout == 0) {
		if (_DAT_100f407c != 0) {
			SetCursor_(_DAT_100f407c);
			*(undefined4 *)(iVar1 + -0x4f54) = 0;
			ClearPanel();
			_drawpanflag = 0xff;
		}
	} else {
		if ((_DAT_100f407c == 0) && (DAT_10128fdc == '\0')) {
			_DAT_100f407c = _DAT_1012861c;
			multi_net_ping();
			ClearPanel();
			AddPanelString(*(char **)(iVar2 + -0x644c), 1);
			AddPanelString(*(char **)(iVar2 + -0x6450), 1);
			NewCursor(0xb);
			_drawpanflag = 0xff;
		}
		scrollrt_draw_game_screen(1);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void game_loop(BOOL bStartup)

{
	bool bVar1;
	int iVar2;
	BOOL BVar3;
	int iVar4;

	if (bStartup == 0) {
		iVar4 = 3;
	} else {
		iVar4 = 0x3c;
	}
	while (true) {
		bVar1 = iVar4 == 0;
		iVar4 = iVar4 + -1;
		if (bVar1) {
			return;
		}
		iVar2 = multi_handle_delta();
		if (iVar2 == 0) {
			timeout_cursor(1);
			return;
		}
		timeout_cursor(0);
		game_logic();
		if (_gbRunGame == 0) {
			return;
		}
		if (gbMaxPlayers == '\x01')
			break;
		BVar3 = nthread_has_500ms_passed(1);
		if (BVar3 == 0) {
			return;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void diablo_color_cyc_logic(void)

{
	int iVar1;
	DWORD tc;
	int local_2c;

	if (DAT_100f4070 == '\0') {
		_DAT_100f4074 = 0;
		DAT_100f4070 = '\x01';
	}
	tc = GetTickCount();
	if (0x31 < tc - *(int *)(local_2c + -0x4f5c)) {
		*(DWORD *)(local_2c + -0x4f5c) = tc;
		if (**(char **)(local_2c + -0x7794) == '\x04') {
			lighting_color_cycling();
		} else {
			if (**(char **)(local_2c + -0x7794) == '\x03') {
				if (*(char *)(local_2c + -0x4f68) == '\0') {
					*(undefined4 *)(local_2c + -0x4f64) = 0;
					*(undefined *)(local_2c + -0x4f68) = 1;
				}
				iVar1 = *(int *)(local_2c + -0x4f64) + 1;
				*(int *)(local_2c + -0x4f64) = iVar1;
				if (2 < iVar1) {
					*(undefined4 *)(local_2c + -0x4f64) = 0;
					palette_update_caves();
				}
			}
		}
	}
	return;
}