
void init_cleanup(BOOL show_cursor)

{
	int iVar1;
	int local_2c;

	iVar1 = 0x100f8fd0;
	pfile_flush_W();
	if (_DAT_1013c964 != 0) {
		SFileCloseArchive(_DAT_1013c964);
		_DAT_1013c964 = 0;
		iVar1 = local_2c;
	}
	if (*(ulong *)(iVar1 + -0x4e40) != 0) {
		SFileCloseArchive(*(ulong *)(iVar1 + -0x4e40));
		*(undefined4 *)(local_2c + -0x4e40) = 0;
		iVar1 = local_2c;
	}
	if (*(ulong *)(iVar1 + -0x4e44) != 0) {
		SFileCloseArchive(*(ulong *)(iVar1 + -0x4e44));
		*(undefined4 *)(local_2c + -0x4e44) = 0;
	}
	UiDestroy();
	effects_cleanup_sfx();
	sound_cleanup();
	NetClose();
	dx_cleanup();
	engine_debug_trap(show_cursor);
	InitCursor();
	return;
}

char *init_strip_trailing_slash(char *path)

{
	char *pcVar1;

	pcVar1 = strrchr(path, 0x5c);
	if ((pcVar1 != (char *)0x0) && (pcVar1[1] == '\0')) {
		*pcVar1 = '\0';
	}
	return pcVar1;
}

BOOL init_read_test_file(char *pszPath, char *pszArchive, int flags, ulong *phArchive)

{
	longlong lVar1;
	undefined4 uVar2;
	undefined *puVar3;
	char cVar4;
	char *pcVar5;
	short sVar7;
	BOOL BVar6;
	undefined4 *puVar8;
	undefined uVar9;
	longlong lVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar14;

	uVar12 = SUB41(phArchive, 0);
	uVar13 = 0x2a;
	lVar14 = 0x20;
	lVar1 = ZEXT48(register0x0000000c) - 400;
	puVar3 = (undefined *)lVar1;
	*(BADSPACEBASE **)puVar3 = register0x0000000c;
	lVar10 = ZEXT48(register0x0000000c) - 0x160;
	puVar8 = (undefined4 *)0x100fc422;
	do {
		uVar2 = puVar8[3];
		lVar10 = lVar10 + 8;
		uVar11 = (undefined)lVar10;
		*(undefined4 *)lVar10 = puVar8[2];
		((undefined4 *)lVar10)[1] = uVar2;
		lVar14 = lVar14 + -1;
		puVar8 = puVar8 + 2;
	} while (lVar14 != 0);
	pcVar5 = strrchr(pszArchive, 0x5c, *puVar3);
	lVar10 = (longlong)(int)pcVar5;
	if ((longlong)(int)pcVar5 == 0) {
		lVar10 = (longlong)(int)pszArchive;
	}
	uVar9 = (undefined)(lVar10 + 1);
	strcat(puVar3 + 0x38, (int)(lVar10 + 1), *puVar3);
	cVar4 = (char)lVar1;
	c2pstr(cVar4 + '8', uVar9, uVar11, uVar12, uVar13, in_r8, in_r9, in_r10, puVar3[0xb], puVar3[0xf],
	    *(undefined4 *)(puVar3 + 0x14));
	sVar7 = FSMakeFSSpec(0, 0, cVar4 + '8', cVar4 + '8', uVar13, in_r8, in_r9, in_r10, puVar3[0xb], puVar3[0xf],
	    *(undefined4 *)(puVar3 + 0x14));
	if (sVar7 == 0) {
		MakeFilepath((char)pszPath, cVar4 + '>', (char)*(undefined2 *)(puVar3 + 0x138),
		    (char)*(undefined4 *)(puVar3 + 0x13a), 0x3f, 0x3f, in_r9, in_r10, puVar3[0xb], puVar3[0xf],
		    *(undefined4 *)(puVar3 + 0x14));
		BVar6 = SFileOpenArchive(pszPath, flags, 1, phArchive, *puVar3);
		if (BVar6 == 0) {
			BVar6 = 0;
		} else {
			BVar6 = 1;
		}
	} else {
		BVar6 = 0;
	}
	return BVar6;
}

ulong init_test_access(char *mpq_path, char *mpq_name, char *reg_loc, int flags, int fs)

{
	undefined *puVar1;
	char cVar2;
	ulonglong uVar3;
	BOOL BVar4;
	char *pcVar5;
	int iVar6;
	ulong uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;

	uVar9 = (undefined)fs;
	uVar8 = (undefined)flags;
	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x360);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	*(char **)(puVar1 + 0x380) = reg_loc;
	cVar2 = (char)(ZEXT48(register0x0000000c) - 0x360);
	uVar3 = GetCurrentDirectory(4, cVar2 + '@', (char)reg_loc, uVar8, uVar9, in_r8, in_r9, in_r10, puVar1[0xb],
	    puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	if ((uVar3 & 0xffffffff) == 0) {
		app_fatal(*(char **)(*(int *)(puVar1 + 0x14) + -0x61c0));
	}
	init_strip_trailing_slash(puVar1 + 0x240, *puVar1);
	BVar4 = SFileSetBasePath(puVar1 + 0x240, *puVar1);
	iVar6 = *(int *)(puVar1 + 0x14);
	if (BVar4 == 0) {
		app_fatal(*(char **)(iVar6 + -0x61c4));
	}
	uVar3 = GetModuleFileName((char)**(undefined4 **)(iVar6 + -0x75c4), cVar2 + '<', 4, uVar8, uVar9, in_r8, in_r9,
	    in_r10, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	if ((uVar3 & 0xffffffff) == 0) {
		app_fatal(*(char **)(*(int *)(puVar1 + 0x14) + -0x61c8));
	}
	pcVar5 = strrchr(puVar1 + 0x13c, 0x5c, *puVar1);
	if (pcVar5 != (char *)0x0) {
		*pcVar5 = '\0';
	}
	init_strip_trailing_slash(puVar1 + 0x13c, *puVar1);
	strcpy(mpq_path, puVar1 + 0x240, *puVar1);
	strcat(mpq_path, mpq_name, *puVar1);
	BVar4 = SFileOpenArchive(mpq_path, flags, fs, puVar1 + 0x344, *puVar1);
	if (BVar4 == 0) {
		iVar6 = strcmp(puVar1 + 0x13c, puVar1 + 0x240, *puVar1);
		if (iVar6 != 0) {
			strcpy(mpq_path, puVar1 + 0x13c, *puVar1);
			strcat(mpq_path, mpq_name, *puVar1);
			BVar4 = SFileOpenArchive(mpq_path, flags, fs, puVar1 + 0x344, *puVar1);
			if (BVar4 != 0) {
				return *(ulong *)(puVar1 + 0x344);
			}
		}
		puVar1[0x38] = 0;
		if ((fs == 0) || (BVar4 = init_read_test_file(puVar1 + 0x38, mpq_name, flags, puVar1 + 0x344, *puVar1), BVar4 == 0)) {
			uVar7 = 0;
		} else {
			strcpy(mpq_path, puVar1 + 0x38, *puVar1);
			uVar7 = *(ulong *)(puVar1 + 0x344);
		}
	} else {
		uVar7 = *(ulong *)(puVar1 + 0x344);
	}
	return uVar7;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void init_get_file_info(void)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	char cVar4;
	ulonglong uVar5;
	longlong lVar6;
	BYTE *p;
	int iVar7;
	undefined uVar8;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined4 in_r9;
	undefined4 in_r10;

	uVar8 = 4;
	puVar3 = (undefined *)(ZEXT48(register0x0000000c) - 0x60);
	*(BADSPACEBASE **)puVar3 = register0x0000000c;
	uVar5 = GetModuleFileName((char)_DAT_10129158, 0x4c, 4, in_r6, in_r7, in_r8, (char)in_r9, (char)in_r10, puVar3[0xb],
	    puVar3[0xf], *(undefined4 *)(puVar3 + 0x14));
	if (((uVar5 & 0xffffffff) != 0) && (cVar4 = (char)(ZEXT48(register0x0000000c) - 0x60), lVar6 = GetFileVersionInfoSize(0x4c, cVar4 + '@', uVar8, in_r6, in_r7, in_r8, (char)in_r9, (char)in_r10, puVar3[0xb], puVar3[0xf], *(undefined4 *)(puVar3 + 0x14)), lVar6 != 0)) {
		p = DiabloAllocPtr((int)lVar6, *puVar3);
		iVar7 = GetFileVersionInfo(0x4c, 0, (char)lVar6, (char)p, in_r7, in_r8, (char)in_r9, (char)in_r10, puVar3[0xb],
		    puVar3[0xf], *(undefined4 *)(puVar3 + 0x14));
		if (iVar7 != 0) {
			iVar7 = VerQueryValue((char)p, (char)*(undefined4 *)(*(int *)(puVar3 + 0x14) + -0x61d0), cVar4 + '8', cVar4 + '<',
			    in_r7, in_r8, (char)in_r9, (char)in_r10, puVar3[0xb], puVar3[0xf], *(undefined4 *)(puVar3 + 0x14));
			if (iVar7 != 0) {
				uVar1 = *(uint *)(*(int *)(puVar3 + 0x38) + 0x14);
				uVar2 = *(uint *)(*(int *)(puVar3 + 0x38) + 0x10);
				wsprintf(*(int *)(puVar3 + 0x14) + 0x3252, *(undefined4 *)(*(int *)(puVar3 + 0x14) + -0x61d4),
				    uVar2 >> 0x10, uVar2 & 0xffff, (uVar1 & 0xffff) + 0x40, uVar1 >> 0x10, in_r9, in_r10,
				    *(undefined4 *)(puVar3 + 8), puVar3[0xf], *(undefined4 *)(puVar3 + 0x1c),
				    *(undefined4 *)(puVar3 + 0x20), *(undefined4 *)(puVar3 + 0x24), *(undefined4 *)(puVar3 + 0x28),
				    *(undefined4 *)(puVar3 + 0x2c), *(undefined4 *)(puVar3 + 0x30), *(undefined4 *)(puVar3 + 0x34));
			}
		}
		mem_free_dbg(p, *puVar3);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void init_archives(void)

{
	ulonglong uVar1;
	int iVar2;
	BOOL BVar3;
	ulong uVar4;
	undefined uVar5;
	undefined in_r5;
	undefined uVar6;
	undefined in_r6;
	undefined uVar7;
	undefined in_r7;
	undefined uVar8;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	uint local_4c;
	ulong local_28;
	int local_24[2];
	undefined4 local_1c;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;
	_SNETVERSIONDATA *temp_3fd7ca2f52;

	local_1c = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	ZeroMemory(
	    0x50, 0x14, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	uVar1 = (ulonglong)local_4c;
	fileinfo.versionstring = (char *)(local_4c + 0x3252);
	fileinfo.size = 0x14;
	fileinfo.executablefile = *(char **)(local_4c - 0x61cc);
	fileinfo.originalarchivefile = &DAT_1013c748;
	fileinfo.patcharchivefile = &DAT_1013c644;
	init_get_file_info();
	while (true) {
		uVar7 = 0xe8;
		uVar8 = 1;
		uVar5 = 0xbe;
		uVar6 = 0xcb;
		_DAT_1013c964 = init_test_access(&DAT_1013c748, "\\diabdat.mpq", "DiabloCD", 1000, 1);
		iVar2 = (int)uVar1;
		if (_DAT_1013c964 != 0)
			break;
		UiCopyProtError(local_24, uVar5, uVar6, uVar7, uVar8, in_r8, in_r9, in_r10, in_stack_ffffffa8);
		if (local_24[0] == 2) {
			FileErrDlg("diabdat.mpq");
		}
	}
	BVar3 = WOpenFile(*(char **)(iVar2 + -0x61ec), &local_28, 1);
	if (BVar3 == 0) {
		FileErrDlg("diabdat.mpq");
	}
	WCloseFile(local_28);
	uVar4 = init_test_access(&DAT_1013c644, *(char **)(iVar2 + -0x61f0), *(char **)(iVar2 + -0x61f4), 2000, 0);
	*(ulong *)(iVar2 + -0x4e40) = uVar4;
	if (*(int *)(iVar2 + -0x4e40) == 0) {
		FileErrDlg(*(char **)(iVar2 + -0x61f8));
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void init_create_window(int nCmdShow)

{
	undefined *puVar1;
	char cVar2;
	HGDIOBJ pvVar4;
	uint uVar5;
	longlong lVar3;
	undefined4 hWnd;
	undefined uVar6;
	undefined in_r5;
	undefined in_r6;
	undefined uVar7;
	undefined in_r7;
	undefined uVar8;
	undefined in_r8;
	undefined uVar9;
	undefined in_r9;
	undefined uVar10;
	undefined in_r10;
	undefined uVar11;

	puVar1 = (undefined *)(ZEXT48(register0x0000000c) - 0x90);
	*(BADSPACEBASE **)puVar1 = register0x0000000c;
	pfile_init_save_directory(*puVar1);
	cVar2 = (char)(ZEXT48(register0x0000000c) - 0x90);
	uVar6 = 0x30;
	ZeroMemory(cVar2 + 'H', 0x30, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf],
	    *(undefined4 *)(puVar1 + 0x14));
	hWnd = *(undefined4 *)(*(int *)(puVar1 + 0x14) + -0x61fc);
	*(undefined4 *)(puVar1 + 0x48) = 0x30;
	*(undefined4 *)(puVar1 + 0x4c) = 3;
	*(undefined4 *)(puVar1 + 0x50) = hWnd;
	*(undefined4 *)(puVar1 + 0x5c) = _DAT_10129158;
	*(undefined4 *)(puVar1 + 0x60) = 0;
	*(undefined4 *)(puVar1 + 100) = 0;
	pvVar4 = GetStockObject(4, *puVar1);
	*(HGDIOBJ *)(puVar1 + 0x68) = pvVar4;
	*(undefined4 *)(puVar1 + 0x6c) = 0x100fc21b;
	*(undefined4 *)(puVar1 + 0x70) = 0x100fc21b;
	*(undefined4 *)(puVar1 + 0x74) = 0;
	uVar5 = RegisterClassEx(cVar2 + 'H', uVar6, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, puVar1[0xb], puVar1[0xf],
	    *(undefined4 *)(puVar1 + 0x14));
	if ((uVar5 & 0xffff) == 0) {
		app_fatal(*(char **)(*(int *)(puVar1 + 0x14) + -0x6200));
	}
	*(undefined4 *)(puVar1 + 0x38) = 0;
	uVar6 = 0;
	uVar7 = 0;
	*(undefined4 *)(puVar1 + 0x3c) = _DAT_10129158;
	uVar8 = 0;
	uVar9 = 0x80;
	*(undefined4 *)(puVar1 + 0x40) = 0;
	uVar10 = 0xe0;
	uVar11 = 0;
	lVar3 = CreateWindow(0x1b, 0x1b, 0, 0, 0, 0x80, 0xe0, 0, puVar1[0xb], puVar1[0xf], *(undefined4 *)(puVar1 + 0x14));
	if (lVar3 == 0) {
		app_fatal(*(char **)(*(int *)(puVar1 + 0x14) + -0x6204));
	}
	ShowWindow__FP6HWND__i((char)lVar3, 1, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11, puVar1[0xb], puVar1[0xf],
	    *(undefined4 *)(puVar1 + 0x14));
	hWnd = (undefined4)lVar3;
	UpdateWindow(hWnd, *puVar1);
	dx_init(hWnd, *puVar1);
	BlackPalette(*puVar1);
	snd_init(hWnd, *puVar1);
	init_archives(*puVar1);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void init_activate_window(HWND hWnd, BOOL bActive)

{
	int iVar1;
	HWND HStack00000018;

	iVar1 = 0x100f8fd0;
	HStack00000018 = hWnd;
	_DAT_1013c968 = bActive;
	UiAppActivate(bActive);
	if (_DAT_1013c968 != 0) {
		**(undefined4 **)(iVar1 + -0x76bc) = 0xff;
		ResetPal();
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LRESULT MainWndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)

{
	HWND HVar1;
	LRESULT plVar2;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	if (Msg == 0x14) {
		plVar2 = (LRESULT)0x0;
	} else {
		if ((int)Msg < 0x14) {
			if (Msg == 0xf) {
				_drawpanflag = 0xff;
				HVar1 = _DAT_1012915c;
			} else {
				if ((int)Msg < 0xf) {
					if (Msg == 2) {
						init_cleanup(1);
						_DAT_1012915c = 0;
						PostQuitMessage(0);
						HVar1 = _DAT_1012915c;
					} else {
						HVar1 = _DAT_1012915c;
						if (((int)Msg < 2) && (HVar1 = hWnd, (int)Msg < 1)) {
							HVar1 = _DAT_1012915c;
						}
					}
				} else {
					HVar1 = _DAT_1012915c;
					if ((int)Msg < 0x11) {
						return (LRESULT)0x0;
					}
				}
			}
		} else {
			if (Msg == 0x30f) {
				SDrawRealizePalette();
				return (LRESULT)&DAT_00000001;
			}
			if ((int)Msg < 0x30f) {
				HVar1 = _DAT_1012915c;
				if (Msg == 0x1c) {
					init_activate_window(hWnd, wParam);
					HVar1 = _DAT_1012915c;
				}
			} else {
				HVar1 = _DAT_1012915c;
				if ((Msg == 0x311) && (HVar1 = _DAT_1012915c, wParam != hWnd)) {
					SDrawRealizePalette();
					HVar1 = _DAT_1012915c;
				}
			}
		}
		_DAT_1012915c = HVar1;
		plVar2 = (LRESULT)DefWindowProc((char)hWnd, (char)Msg, (char)wParam, (char)lParam, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	}
	return plVar2;
}

LRESULT WindowProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)

{
	if (CurrentProc == (WNDPROC *)0x0) {
		hWnd = (HWND)MainWndProc(hWnd, Msg, wParam, lParam);
	} else {
		fnMenu(hWnd);
	}
	return (LRESULT)hWnd;
}

WNDPROC *SetWindowProc(WNDPROC *param_1)

{
	LONG *pLVar1;
	WNDPROC *pWVar2;
	int local_3c;
	tagPOINT local_18[3];

	pWVar2 = CurrentProc;
	CurrentProc = param_1;
	if ((undefined **)param_1 == &PTR_GM_Game_100f48f0) {
		CurrentProc = param_1;
		GetCursorPos((LPPOINT)local_18);
		pLVar1 = *(LONG **)(local_3c + -0x76ac);
		**(LONG **)(local_3c + -0x76a8) = local_18[0].x;
		*pLVar1 = local_18[0].y;
	}
	return pWVar2;
}
