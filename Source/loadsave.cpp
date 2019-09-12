
char BLoad(void)

{
	BYTE BVar1;

	BVar1 = *tbuff;
	tbuff = tbuff + 1;
	return (char)BVar1;
}

int WLoad(void)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;

	pbVar2 = tbuff + 1;
	bVar1 = *tbuff;
	pbVar3 = tbuff + 2;
	pbVar4 = tbuff + 3;
	tbuff = tbuff + 4;
	return (int)((uint)bVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 | (uint)*pbVar4);
}

int ILoad(void)

{
	byte bVar1;
	byte *pbVar2;
	byte *pbVar3;
	byte *pbVar4;

	pbVar2 = tbuff + 1;
	bVar1 = *tbuff;
	pbVar3 = tbuff + 2;
	pbVar4 = tbuff + 3;
	tbuff = tbuff + 4;
	return (int)((uint)bVar1 << 0x18 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 << 8 | (uint)*pbVar4);
}

BOOL OLoad(void)

{
	if (*tbuff == '\x01') {
		tbuff = tbuff + 1;
		return 1;
	}
	tbuff = tbuff + 1;
	return 0;
}

void LoadPlayer(int i)

{
	int iVar1;
	BYTE *_tbuff;

	iVar1 = 0x100f8fd0;
	_tbuff = tbuff;
	memcpy((PlayerStruct *)((int)plr + i * 0x55ec), &_tbuff, 0x54b0);
	*(BYTE **)(iVar1 + -0x4df8) = _tbuff;
	return;
}

void LoadMonster(int i)

{
	int iVar1;
	BYTE *local_18[6];

	iVar1 = 0x100f8fd0;
	local_18[0] = tbuff;
	memcpy(&DAT_10151a30 + i * 0xe8, local_18, 0xd8);
	*(BYTE **)(iVar1 + -0x4df8) = local_18[0];
	SyncMonsterAnim(i);
	return;
}

void LoadMissile(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(&DAT_10149b74 + i * 0xb4, local_8, 0xb0);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

void LoadObject(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(&DAT_1017e3d4 + i * 0x78, local_8, 0x78);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

void LoadItem(int i)

{
	int iVar1;
	BYTE *local_18[6];

	iVar1 = 0x100f8fd0;
	local_18[0] = tbuff;
	memcpy(&DAT_1013d988 + i * 0x170, local_18, 0x170);
	*(BYTE **)(iVar1 + -0x4df8) = local_18[0];
	GetItemFrm(i);
	return;
}

void LoadPremium(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(&DAT_101a8080 + i * 0x170, local_8, 0x170);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

void LoadQuest(int i)

{
	int iVar1;
	int iVar2;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(quests + i, local_8, 0x18);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	iVar2 = WLoad();
	**(int **)(iVar1 + -0x7130) = iVar2;
	iVar2 = WLoad();
	**(int **)(iVar1 + -0x7134) = iVar2;
	iVar2 = WLoad();
	**(int **)(iVar1 + -0x7138) = iVar2;
	iVar2 = WLoad();
	**(int **)(iVar1 + -0x713c) = iVar2;
	iVar2 = WLoad();
	**(int **)(iVar1 + -0x755c) = iVar2;
	return;
}

void LoadLighting(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(PTR_DAT_100f1e90 + i * 0xd, local_8, 0x34);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

void LoadVision(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(&DAT_101b12f8 + i * 0x34, local_8, 0x34);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

void LoadPortal(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(&DAT_1019cb34 + i * 0x18, local_8, 0x18);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void LoadGame(BOOL firstflag)

{
	int iVar1;
	undefined8 uVar2;
	int i;
	BOOL BVar3;
	int i_00;
	char cVar5;
	byte bVar6;
	int iVar4;
	undefined8 in_r13;
	ulonglong uVar7;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	byte *pbVar8;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined *puVar9;
	undefined8 unaff_r30;
	int *piVar10;
	byte *pbVar11;
	BOOL *pBVar12;
	int iVar13;
	undefined *puVar14;
	undefined8 unaff_r31;
	int *piVar15;
	int iVar16;
	BOOL firstflag_00;
	char acStack376[260];
	DWORD DStack116;
	BYTE *local_70;
	int local_6c;
	int local_68;
	int local_64;
	int local_60;
	int local_5c;
	int local_58;
	undefined4 local_4c;
	undefined4 uStack72;
	undefined4 uStack68;
	undefined4 uStack64;
	undefined4 uStack60;
	undefined4 uStack56;
	undefined4 uStack52;
	undefined4 uStack48;
	undefined4 uStack44;
	undefined4 uStack40;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar2 = 0x100f8fd0;
	local_4c = (undefined4)((ulonglong)in_r13 >> 0x20);
	uStack72 = (undefined4)((ulonglong)unaff_r14 >> 0x20);
	uStack68 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
	uStack64 = (undefined4)((ulonglong)unaff_r16 >> 0x20);
	uStack60 = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
	uStack52 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
	uStack44 = (undefined4)((ulonglong)unaff_r21 >> 0x20);
	uStack40 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	pbVar8 = &DAT_101b1980;
	uVar7 = ZEXT48(&DAT_1013d984);
	firstflag_00 = firstflag;
	FreeGameMem();
	pfile_remove_temp_files();
	pfile_get_game_name(acStack376);
	local_70 = pfile_read(acStack376, &DStack116);
	*(BYTE **)((int)uVar2 + -0x4df8) = local_70;
	i = ILoad();
	if (i != 0x5245544c) {
		app_fatal(*(char **)((int)uVar2 + -0x5f68));
	}
	BVar3 = OLoad();
	**(undefined **)((int)uVar2 + -0x77d8) = (char)BVar3;
	i = WLoad();
	**(undefined **)((int)uVar2 + -0x77e0) = (char)i;
	i = WLoad();
	**(undefined **)((int)uVar2 + -0x77e4) = (char)i;
	i = WLoad();
	**(undefined **)((int)uVar2 + -0x7794) = (char)i;
	local_6c = WLoad();
	local_68 = WLoad();
	BVar3 = OLoad();
	**(BOOL **)((int)uVar2 + -0x77bc) = BVar3;
	BVar3 = OLoad();
	**(BOOL **)((int)uVar2 + -0x77c4) = BVar3;
	local_64 = WLoad();
	local_60 = WLoad();
	local_5c = WLoad();
	local_58 = WLoad();
	piVar15 = *(int **)((int)uVar2 + -0x75ec);
	i = 0;
	piVar10 = *(int **)((int)uVar2 + -0x71f8);
	do {
		i_00 = ILoad();
		*piVar15 = i_00;
		i_00 = WLoad();
		i = i + 1;
		*piVar10 = i_00;
		piVar15 = piVar15 + 1;
		piVar10 = piVar10 + 1;
	} while (i < 0x11);
	LoadPlayer(**(int **)((int)uVar2 + -0x77ac));
	i = 0;
	do {
		LoadQuest(i);
		i = i + 1;
	} while (i < 0x10);
	i = 0;
	do {
		LoadPortal(i);
		i = i + 1;
	} while (i < 4);
	LoadGameLevel(firstflag_00, 4);
	SyncInitPlr(**(int **)((int)uVar2 + -0x77ac));
	SyncPlrAnim(**(int **)((int)uVar2 + -0x77ac));
	i = (int)uVar2;
	i_00 = 0;
	piVar15 = *(int **)(i + -0x77b4);
	**(int **)(i + -0x77b0) = local_6c;
	piVar10 = *(int **)(i + -0x714c);
	*piVar15 = local_68;
	nummonsters = local_64;
	*(int *)uVar7 = local_60;
	_DAT_10149b70 = local_5c;
	_DAT_1017e3d0 = local_58;
	do {
		i = ILoad();
		i_00 = i_00 + 1;
		*piVar10 = i;
		piVar10 = piVar10 + 1;
	} while (i_00 < 200);
	if (**(char **)((int)uVar2 + -0x7794) != '\0') {
		i = 0;
		piVar15 = *(int **)((int)uVar2 + -0x7628);
		do {
			i_00 = WLoad();
			i = i + 1;
			*piVar15 = i_00;
			piVar15 = piVar15 + 1;
		} while (i < 200);
		i = 0;
		piVar15 = *(int **)((int)uVar2 + -0x7628);
		while (i < nummonsters) {
			LoadMonster(*piVar15);
			piVar15 = piVar15 + 1;
			i = i + 1;
		}
		i = 0;
		piVar15 = *(int **)((int)uVar2 + -0x7660);
		do {
			cVar5 = BLoad();
			i = i + 1;
			*piVar15 = (int)cVar5;
			piVar15 = piVar15 + 1;
		} while (i < 0x7d);
		i = 0;
		piVar15 = *(int **)((int)uVar2 + -0x7150);
		do {
			cVar5 = BLoad();
			i = i + 1;
			*piVar15 = (int)cVar5;
			piVar15 = piVar15 + 1;
		} while (i < 0x7d);
		i = 0;
		piVar15 = *(int **)((int)uVar2 + -0x7660);
		while (i < _DAT_10149b70) {
			LoadMissile(*piVar15);
			piVar15 = piVar15 + 1;
			i = i + 1;
		}
		i = 0;
		piVar15 = *(int **)((int)uVar2 + -0x7190);
		do {
			cVar5 = BLoad();
			i = i + 1;
			*piVar15 = (int)cVar5;
			piVar15 = piVar15 + 1;
		} while (i < 0x7f);
		i = 0;
		piVar15 = *(int **)((int)uVar2 + -0x7154);
		do {
			cVar5 = BLoad();
			i = i + 1;
			*piVar15 = (int)cVar5;
			piVar15 = piVar15 + 1;
		} while (i < 0x7f);
		i = 0;
		piVar15 = *(int **)((int)uVar2 + -0x7190);
		while (i < _DAT_1017e3d0) {
			LoadObject(*piVar15);
			piVar15 = piVar15 + 1;
			i = i + 1;
		}
		i = 0;
		piVar15 = *(int **)((int)uVar2 + -0x7190);
		while (i < _DAT_1017e3d0) {
			SyncObjectAnim(*piVar15);
			piVar15 = piVar15 + 1;
			i = i + 1;
		}
		_DAT_101b197c = WLoad();
		i = 0;
		pbVar11 = pbVar8;
		do {
			bVar6 = BLoad();
			i = i + 1;
			*pbVar11 = bVar6;
			pbVar11 = pbVar11 + 1;
		} while (i < 0x20);
		i = 0;
		while (i < _DAT_101b197c) {
			LoadLighting((uint)*pbVar8);
			pbVar8 = pbVar8 + 1;
			i = i + 1;
		}
		i = WLoad();
		**(int **)((int)uVar2 + -0x7160) = i;
		_DAT_101b12f4 = WLoad();
		i = 0;
		while (i < _DAT_101b12f4) {
			LoadVision(i);
			i = i + 1;
		}
	}
	i = 0;
	piVar15 = *(int **)((int)uVar2 + -0x71e0);
	do {
		cVar5 = BLoad();
		i = i + 1;
		*piVar15 = (int)cVar5;
		piVar15 = piVar15 + 1;
	} while (i < 0x7f);
	i = 0;
	piVar15 = *(int **)((int)uVar2 + -0x71f4);
	do {
		cVar5 = BLoad();
		i = i + 1;
		*piVar15 = (int)cVar5;
		piVar15 = piVar15 + 1;
	} while (i < 0x7f);
	i = 0;
	piVar15 = *(int **)((int)uVar2 + -0x71e0);
	while (i < *(int *)uVar7) {
		LoadItem(*piVar15);
		piVar15 = piVar15 + 1;
		i = i + 1;
	}
	i = 0;
	pBVar12 = *(BOOL **)((int)uVar2 + -0x7170);
	do {
		BVar3 = OLoad();
		i = i + 1;
		*pBVar12 = BVar3;
		pBVar12 = pBVar12 + 1;
	} while (i < 0x80);
	i = 0;
	do {
		iVar13 = 0;
		i_00 = 0;
		do {
			cVar5 = BLoad();
			iVar13 = iVar13 + 1;
			iVar16 = _DAT_1012f1c4 + i_00;
			i_00 = i_00 + 0x70;
			*(char *)(i + iVar16) = cVar5;
		} while (iVar13 < 0x70);
		i = i + 1;
	} while (i < 0x70);
	i = 0;
	do {
		iVar13 = 0;
		i_00 = 0;
		do {
			cVar5 = BLoad();
			iVar13 = iVar13 + 1;
			iVar16 = _DAT_1012f1bc + i_00;
			i_00 = i_00 + 0x70;
			*(char *)(i + iVar16) = cVar5;
		} while (iVar13 < 0x70);
		i = i + 1;
	} while (i < 0x70);
	i = 0;
	do {
		iVar13 = 0;
		i_00 = 0;
		do {
			cVar5 = BLoad();
			iVar13 = iVar13 + 1;
			iVar16 = _DAT_1012f1b8 + i_00;
			i_00 = i_00 + 0x70;
			*(char *)(i + iVar16) = cVar5;
		} while (iVar13 < 0x70);
		i = i + 1;
	} while (i < 0x70);
	i = 0;
	do {
		iVar13 = 0;
		i_00 = 0;
		do {
			cVar5 = BLoad();
			iVar13 = iVar13 + 1;
			iVar16 = _DAT_1012f1a8 + i_00;
			i_00 = i_00 + 0x70;
			*(char *)(i + iVar16) = cVar5;
		} while (iVar13 < 0x70);
		i = i + 1;
	} while (i < 0x70);
	if (**(char **)((int)uVar2 + -0x7794) != '\0') {
		i = 0;
		i_00 = 0;
		do {
			iVar16 = 0;
			iVar13 = 0;
			do {
				iVar4 = WLoad();
				iVar16 = iVar16 + 1;
				iVar1 = _DAT_1012f1b4 + iVar13;
				iVar13 = iVar13 + 0xe0;
				*(undefined2 *)(i_00 + iVar1) = (short)iVar4;
			} while (iVar16 < 0x70);
			i = i + 1;
			i_00 = i_00 + 2;
		} while (i < 0x70);
		i = 0;
		do {
			iVar13 = 0;
			i_00 = 0;
			do {
				cVar5 = BLoad();
				iVar13 = iVar13 + 1;
				iVar16 = _DAT_1012f1b0 + i_00;
				i_00 = i_00 + 0x70;
				*(char *)(i + iVar16) = cVar5;
			} while (iVar13 < 0x70);
			i = i + 1;
		} while (i < 0x70);
		i = 0;
		do {
			iVar13 = 0;
			i_00 = 0;
			do {
				cVar5 = BLoad();
				iVar13 = iVar13 + 1;
				iVar16 = _DAT_1012f1ac + i_00;
				i_00 = i_00 + 0x70;
				*(char *)(i + iVar16) = cVar5;
			} while (iVar13 < 0x70);
			i = i + 1;
		} while (i < 0x70);
		i = 0;
		do {
			iVar13 = 0;
			i_00 = 0;
			do {
				cVar5 = BLoad();
				iVar13 = iVar13 + 1;
				iVar16 = _DAT_1012f1c4 + i_00;
				i_00 = i_00 + 0x70;
				*(char *)(i + iVar16) = cVar5;
			} while (iVar13 < 0x70);
			i = i + 1;
		} while (i < 0x70);
		i = 0;
		do {
			iVar13 = 0;
			i_00 = 0;
			do {
				cVar5 = BLoad();
				iVar13 = iVar13 + 1;
				iVar16 = _DAT_1012f1c0 + i_00;
				i_00 = i_00 + 0x70;
				*(char *)(i + iVar16) = cVar5;
			} while (iVar13 < 0x70);
			i = i + 1;
		} while (i < 0x70);
		i = 0;
		puVar9 = *(undefined **)((int)uVar2 + -0x7798);
		do {
			i_00 = 0;
			puVar14 = puVar9;
			do {
				BVar3 = OLoad();
				i_00 = i_00 + 1;
				*puVar14 = (char)BVar3;
				puVar14 = puVar14 + 0x28;
			} while (i_00 < 0x28);
			i = i + 1;
			puVar9 = puVar9 + 1;
		} while (i < 0x28);
		i = 0;
		do {
			iVar13 = 0;
			i_00 = 0;
			do {
				cVar5 = BLoad();
				iVar13 = iVar13 + 1;
				iVar16 = _DAT_1012f1a4 + i_00;
				i_00 = i_00 + 0x70;
				*(char *)(i + iVar16) = cVar5;
			} while (iVar13 < 0x70);
			i = i + 1;
		} while (i < 0x70);
	}
	i = WLoad();
	**(int **)((int)uVar2 + -0x71ac) = i;
	i = WLoad();
	i_00 = 0;
	**(int **)((int)uVar2 + -0x71b4) = i;
	do {
		LoadPremium(i_00);
		i = (int)uVar2;
		i_00 = i_00 + 1;
	} while (i_00 < 6);
	BVar3 = OLoad();
	**(BOOL **)(i + -0x7778) = BVar3;
	i_00 = WLoad();
	**(int **)(i + -0x777c) = i_00;
	mem_free_dbg(local_70);
	AutomapZoomReset();
	ResyncQuests();
	if (**(char **)(i + -0x7794) != '\0') {
		ProcessLightList();
	}
	RedoPlayerVision();
	ProcessVisionList();
	missiles_process_charge();
	ResetPal();
	SetCursor_(1);
	**(undefined4 **)(i + -0x75a8) = 1;
	return;
}

void BSave(char v)

{
	BYTE *pBVar1;

	pBVar1 = tbuff + 1;
	*tbuff = v;
	tbuff = pBVar1;
	return;
}

void WSave(int v)

{
	BYTE *pBVar1;

	pBVar1 = tbuff + 1;
	*tbuff = (BYTE)((uint)v >> 0x18);
	tbuff = pBVar1;
	pBVar1 = tbuff + 1;
	*tbuff = (BYTE)((uint)v >> 0x10);
	tbuff = pBVar1;
	pBVar1 = tbuff + 1;
	*tbuff = (BYTE)((uint)v >> 8);
	tbuff = pBVar1;
	pBVar1 = tbuff + 1;
	*tbuff = (BYTE)v;
	tbuff = pBVar1;
	return;
}

void ISave(int v)

{
	BYTE *pBVar1;

	pBVar1 = tbuff + 1;
	*tbuff = (BYTE)((uint)v >> 0x18);
	tbuff = pBVar1;
	pBVar1 = tbuff + 1;
	*tbuff = (BYTE)((uint)v >> 0x10);
	tbuff = pBVar1;
	pBVar1 = tbuff + 1;
	*tbuff = (BYTE)((uint)v >> 8);
	tbuff = pBVar1;
	pBVar1 = tbuff + 1;
	*tbuff = (BYTE)v;
	tbuff = pBVar1;
	return;
}

void OSave(BOOL v)

{
	BYTE *pBVar1;

	if (v != 0) {
		pBVar1 = tbuff + 1;
		*tbuff = '\x01';
		tbuff = pBVar1;
		return;
	}
	pBVar1 = tbuff + 1;
	*tbuff = '\0';
	tbuff = pBVar1;
	return;
}

void SavePlayer(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(local_8, (PlayerStruct *)((int)plr + i * 0x55ec), 0x54b0);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

void SaveMonster(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(local_8, &DAT_10151a30 + i * 0xe8, 0xd8);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

void SaveMissile(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(local_8, &DAT_10149b74 + i * 0xb4, 0xb0);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

void SaveObject(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(local_8, &DAT_1017e3d4 + i * 0x78, 0x78);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

void SaveItem(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(local_8, &DAT_1013d988 + i * 0x170, 0x170);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

void SavePremium(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(local_8, &DAT_101a8080 + i * 0x170, 0x170);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

void SaveQuest(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(local_8, quests + i, 0x18);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	WSave(**(int **)(iVar1 + -0x7130));
	WSave(**(int **)(iVar1 + -0x7134));
	WSave(**(int **)(iVar1 + -0x7138));
	WSave(**(int **)(iVar1 + -0x713c));
	WSave(**(int **)(iVar1 + -0x755c));
	return;
}

void SaveLighting(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(local_8, PTR_DAT_100f1e90 + i * 0xd, 0x34);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

void SaveVision(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(local_8, &DAT_101b12f8 + i * 0x34, 0x34);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

void SavePortal(int i)

{
	int iVar1;
	BYTE *local_8[2];

	iVar1 = 0x100f8fd0;
	local_8[0] = tbuff;
	memcpy(local_8, &DAT_1019cb34 + i * 0x18, 0x18);
	*(BYTE **)(iVar1 + -0x4df8) = local_8[0];
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void SaveGame(void)

{
	undefined8 uVar1;
	DWORD dwBytes;
	undefined8 in_r13;
	ulonglong uVar2;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	byte *pbVar3;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	int iVar4;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	int i;
	undefined8 unaff_r30;
	int *piVar5;
	undefined4 *puVar6;
	byte *pbVar7;
	BOOL *pBVar8;
	int iVar9;
	undefined8 unaff_r31;
	int *piVar10;
	int iVar11;
	char acStack344[260];
	BYTE *local_54;
	undefined4 local_4c;
	undefined4 uStack72;
	undefined4 uStack68;
	undefined4 uStack64;
	undefined4 uStack60;
	undefined4 uStack56;
	undefined4 uStack52;
	undefined4 uStack48;
	undefined4 uStack44;
	undefined4 uStack40;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar1 = 0x100f8fd0;
	local_4c = (undefined4)((ulonglong)in_r13 >> 0x20);
	uStack72 = (undefined4)((ulonglong)unaff_r14 >> 0x20);
	uStack68 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
	uStack64 = (undefined4)((ulonglong)unaff_r16 >> 0x20);
	uStack60 = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
	uStack52 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
	uStack44 = (undefined4)((ulonglong)unaff_r21 >> 0x20);
	uStack40 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	pbVar3 = &DAT_101b1980;
	uVar2 = ZEXT48(&DAT_1013d984);
	dwBytes = codec_get_encoded_len(0x40003);
	local_54 = DiabloAllocPtr(dwBytes);
	*(BYTE **)((int)uVar1 + -0x4df8) = local_54;
	ISave(0x5245544c);
	OSave((uint) * *(byte **)((int)uVar1 + -0x77d8));
	WSave((uint) * *(byte **)((int)uVar1 + -0x77e0));
	WSave((uint) * *(byte **)((int)uVar1 + -0x77e4));
	WSave((uint) * *(byte **)((int)uVar1 + -0x7794));
	WSave(**(int **)((int)uVar1 + -0x77b0));
	WSave(**(int **)((int)uVar1 + -0x77b4));
	OSave(**(BOOL **)((int)uVar1 + -0x77bc));
	OSave(**(BOOL **)((int)uVar1 + -0x77c4));
	WSave(nummonsters);
	WSave(*(int *)uVar2);
	WSave(_DAT_10149b70);
	WSave(_DAT_1017e3d0);
	i = 0;
	piVar10 = *(int **)((int)uVar1 + -0x75ec);
	piVar5 = *(int **)((int)uVar1 + -0x71f8);
	do {
		ISave(*piVar10);
		WSave(*piVar5);
		i = i + 1;
		piVar5 = piVar5 + 1;
		piVar10 = piVar10 + 1;
	} while (i < 0x11);
	SavePlayer(**(int **)((int)uVar1 + -0x77ac));
	i = 0;
	do {
		SaveQuest(i);
		i = i + 1;
	} while (i < 0x10);
	i = 0;
	do {
		SavePortal(i);
		i = i + 1;
	} while (i < 4);
	i = 0;
	piVar10 = *(int **)((int)uVar1 + -0x714c);
	do {
		ISave(*piVar10);
		i = i + 1;
		piVar10 = piVar10 + 1;
	} while (i < 200);
	if (**(char **)((int)uVar1 + -0x7794) != '\0') {
		i = 0;
		piVar10 = *(int **)((int)uVar1 + -0x7628);
		do {
			WSave(*piVar10);
			i = i + 1;
			piVar10 = piVar10 + 1;
		} while (i < 200);
		i = 0;
		piVar10 = *(int **)((int)uVar1 + -0x7628);
		while (i < nummonsters) {
			SaveMonster(*piVar10);
			piVar10 = piVar10 + 1;
			i = i + 1;
		}
		i = 0;
		puVar6 = *(undefined4 **)((int)uVar1 + -0x7660);
		do {
			BSave((char)*puVar6);
			i = i + 1;
			puVar6 = puVar6 + 1;
		} while (i < 0x7d);
		i = 0;
		puVar6 = *(undefined4 **)((int)uVar1 + -0x7150);
		do {
			BSave((char)*puVar6);
			i = i + 1;
			puVar6 = puVar6 + 1;
		} while (i < 0x7d);
		i = 0;
		piVar10 = *(int **)((int)uVar1 + -0x7660);
		while (i < _DAT_10149b70) {
			SaveMissile(*piVar10);
			piVar10 = piVar10 + 1;
			i = i + 1;
		}
		i = 0;
		puVar6 = *(undefined4 **)((int)uVar1 + -0x7190);
		do {
			BSave((char)*puVar6);
			i = i + 1;
			puVar6 = puVar6 + 1;
		} while (i < 0x7f);
		i = 0;
		puVar6 = *(undefined4 **)((int)uVar1 + -0x7154);
		do {
			BSave((char)*puVar6);
			i = i + 1;
			puVar6 = puVar6 + 1;
		} while (i < 0x7f);
		i = 0;
		piVar10 = *(int **)((int)uVar1 + -0x7190);
		while (i < _DAT_1017e3d0) {
			SaveObject(*piVar10);
			piVar10 = piVar10 + 1;
			i = i + 1;
		}
		WSave(_DAT_101b197c);
		i = 0;
		pbVar7 = pbVar3;
		do {
			BSave(*pbVar7);
			i = i + 1;
			pbVar7 = pbVar7 + 1;
		} while (i < 0x20);
		i = 0;
		while (i < _DAT_101b197c) {
			SaveLighting((uint)*pbVar3);
			pbVar3 = pbVar3 + 1;
			i = i + 1;
		}
		WSave(**(int **)((int)uVar1 + -0x7160));
		WSave(_DAT_101b12f4);
		i = 0;
		while (i < _DAT_101b12f4) {
			SaveVision(i);
			i = i + 1;
		}
	}
	i = 0;
	puVar6 = *(undefined4 **)((int)uVar1 + -0x71e0);
	do {
		BSave((char)*puVar6);
		i = i + 1;
		puVar6 = puVar6 + 1;
	} while (i < 0x7f);
	i = 0;
	puVar6 = *(undefined4 **)((int)uVar1 + -0x71f4);
	do {
		BSave((char)*puVar6);
		i = i + 1;
		puVar6 = puVar6 + 1;
	} while (i < 0x7f);
	i = 0;
	piVar10 = *(int **)((int)uVar1 + -0x71e0);
	while (i < *(int *)uVar2) {
		SaveItem(*piVar10);
		piVar10 = piVar10 + 1;
		i = i + 1;
	}
	i = 0;
	pBVar8 = *(BOOL **)((int)uVar1 + -0x7170);
	do {
		OSave(*pBVar8);
		i = i + 1;
		pBVar8 = pBVar8 + 1;
	} while (i < 0x80);
	i = 0;
	do {
		iVar9 = 0;
		iVar4 = 0;
		do {
			BSave(*(char *)(i + _DAT_1012f1c4 + iVar4));
			iVar9 = iVar9 + 1;
			iVar4 = iVar4 + 0x70;
		} while (iVar9 < 0x70);
		i = i + 1;
	} while (i < 0x70);
	i = 0;
	do {
		iVar9 = 0;
		iVar4 = 0;
		do {
			BSave(*(byte *)(i + _DAT_1012f1bc + iVar4) & 0xf8);
			iVar9 = iVar9 + 1;
			iVar4 = iVar4 + 0x70;
		} while (iVar9 < 0x70);
		i = i + 1;
	} while (i < 0x70);
	i = 0;
	do {
		iVar9 = 0;
		iVar4 = 0;
		do {
			BSave(*(char *)(i + _DAT_1012f1b8 + iVar4));
			iVar9 = iVar9 + 1;
			iVar4 = iVar4 + 0x70;
		} while (iVar9 < 0x70);
		i = i + 1;
	} while (i < 0x70);
	i = 0;
	do {
		iVar9 = 0;
		iVar4 = 0;
		do {
			BSave(*(char *)(i + _DAT_1012f1a8 + iVar4));
			iVar9 = iVar9 + 1;
			iVar4 = iVar4 + 0x70;
		} while (iVar9 < 0x70);
		i = i + 1;
	} while (i < 0x70);
	if (**(char **)((int)uVar1 + -0x7794) != '\0') {
		iVar4 = 0;
		i = 0;
		do {
			iVar11 = 0;
			iVar9 = 0;
			do {
				WSave((int)*(short *)(i + _DAT_1012f1b4 + iVar9));
				iVar11 = iVar11 + 1;
				iVar9 = iVar9 + 0xe0;
			} while (iVar11 < 0x70);
			iVar4 = iVar4 + 1;
			i = i + 2;
		} while (iVar4 < 0x70);
		i = 0;
		do {
			iVar9 = 0;
			iVar4 = 0;
			do {
				BSave(*(char *)(i + _DAT_1012f1b0 + iVar4));
				iVar9 = iVar9 + 1;
				iVar4 = iVar4 + 0x70;
			} while (iVar9 < 0x70);
			i = i + 1;
		} while (i < 0x70);
		i = 0;
		do {
			iVar9 = 0;
			iVar4 = 0;
			do {
				BSave(*(char *)(i + _DAT_1012f1ac + iVar4));
				iVar9 = iVar9 + 1;
				iVar4 = iVar4 + 0x70;
			} while (iVar9 < 0x70);
			i = i + 1;
		} while (i < 0x70);
		i = 0;
		do {
			iVar9 = 0;
			iVar4 = 0;
			do {
				BSave(*(char *)(i + _DAT_1012f1c4 + iVar4));
				iVar9 = iVar9 + 1;
				iVar4 = iVar4 + 0x70;
			} while (iVar9 < 0x70);
			i = i + 1;
		} while (i < 0x70);
		i = 0;
		do {
			iVar9 = 0;
			iVar4 = 0;
			do {
				BSave(*(char *)(i + _DAT_1012f1c0 + iVar4));
				iVar9 = iVar9 + 1;
				iVar4 = iVar4 + 0x70;
			} while (iVar9 < 0x70);
			i = i + 1;
		} while (i < 0x70);
		pbVar3 = *(byte **)((int)uVar1 + -0x7798);
		i = 0;
		do {
			iVar4 = 0;
			pbVar7 = pbVar3;
			do {
				OSave((uint)*pbVar7);
				iVar4 = iVar4 + 1;
				pbVar7 = pbVar7 + 0x28;
			} while (iVar4 < 0x28);
			i = i + 1;
			pbVar3 = pbVar3 + 1;
		} while (i < 0x28);
		i = 0;
		do {
			iVar9 = 0;
			iVar4 = 0;
			do {
				BSave(*(char *)(i + _DAT_1012f1a4 + iVar4));
				iVar9 = iVar9 + 1;
				iVar4 = iVar4 + 0x70;
			} while (iVar9 < 0x70);
			i = i + 1;
		} while (i < 0x70);
	}
	WSave(**(int **)((int)uVar1 + -0x71ac));
	WSave(**(int **)((int)uVar1 + -0x71b4));
	i = 0;
	do {
		SavePremium(i);
		iVar4 = (int)uVar1;
		i = i + 1;
	} while (i < 6);
	OSave(**(BOOL **)(iVar4 + -0x7778));
	WSave(**(int **)(iVar4 + -0x777c));
	pfile_get_game_name(acStack344);
	dwBytes = codec_get_encoded_len(*(int *)(iVar4 + -0x4df8) - (int)local_54);
	pfile_write_save_file(acStack344, local_54, *(int *)(iVar4 + -0x4df8) - (int)local_54, dwBytes);
	mem_free_dbg(local_54);
	**(undefined4 **)(iVar4 + -0x75bc) = 1;
	pfile_rename_temp_to_perm();
	pfile_write_hero();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void SaveLevel(void)

{
	undefined8 uVar1;
	int iVar2;
	int iVar3;
	DWORD dwBytes;
	BYTE *pbData;
	undefined8 in_r13;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	byte *pbVar4;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	int iVar5;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	int *piVar8;
	int *piVar9;
	undefined4 *puVar10;
	int *piVar11;
	ulonglong uVar6;
	ulonglong uVar7;
	undefined8 unaff_r30;
	int iVar12;
	byte *pbVar13;
	undefined8 unaff_r31;
	char acStack344[268];
	undefined4 local_4c;
	undefined4 uStack72;
	undefined4 uStack68;
	undefined4 uStack64;
	undefined4 uStack60;
	undefined4 uStack56;
	undefined4 uStack52;
	undefined4 uStack48;
	undefined4 uStack44;
	undefined4 uStack40;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar1 = 0x100f8fd0;
	local_4c = (undefined4)((ulonglong)in_r13 >> 0x20);
	uStack72 = (undefined4)((ulonglong)unaff_r14 >> 0x20);
	uStack68 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
	uStack64 = (undefined4)((ulonglong)unaff_r16 >> 0x20);
	uStack60 = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
	uStack52 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
	uStack44 = (undefined4)((ulonglong)unaff_r21 >> 0x20);
	uStack40 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar7 = ZEXT48(&DAT_1013d788);
	piVar11 = (int *)&DAT_1017e10c;
	piVar9 = (int *)&DAT_10151708;
	if (currlevel == 0) {
		iVar3 = GetRndSeed();
		**(int **)((int)uVar1 + -0x75ec) = iVar3;
	}
	dwBytes = codec_get_encoded_len(0x40003);
	pbData = DiabloAllocPtr(dwBytes);
	*(BYTE **)((int)uVar1 + -0x4df8) = pbData;
	if (leveltype != '\0') {
		iVar3 = 0;
		do {
			iVar12 = 0;
			iVar5 = 0;
			do {
				BSave(*(char *)(iVar3 + _DAT_1012f1b0 + iVar5));
				iVar12 = iVar12 + 1;
				iVar5 = iVar5 + 0x70;
			} while (iVar12 < 0x70);
			iVar3 = iVar3 + 1;
		} while (iVar3 < 0x70);
	}
	WSave(nummonsters);
	WSave(_DAT_1013d984);
	WSave(_DAT_1017e3d0);
	if (leveltype != '\0') {
		iVar3 = 0;
		piVar8 = piVar9;
		do {
			WSave(*piVar8);
			iVar3 = iVar3 + 1;
			piVar8 = piVar8 + 1;
		} while (iVar3 < 200);
		iVar3 = 0;
		while (iVar3 < nummonsters) {
			SaveMonster(*piVar9);
			piVar9 = piVar9 + 1;
			iVar3 = iVar3 + 1;
		}
		iVar3 = 0;
		piVar9 = piVar11;
		do {
			BSave((char)*piVar9);
			iVar3 = iVar3 + 1;
			piVar9 = piVar9 + 1;
		} while (iVar3 < 0x7f);
		iVar3 = 0;
		puVar10 = *(undefined4 **)((int)uVar1 + -0x7154);
		do {
			BSave((char)*puVar10);
			iVar3 = iVar3 + 1;
			puVar10 = puVar10 + 1;
		} while (iVar3 < 0x7f);
		iVar3 = 0;
		while (iVar3 < _DAT_1017e3d0) {
			SaveObject(*piVar11);
			piVar11 = piVar11 + 1;
			iVar3 = iVar3 + 1;
		}
	}
	iVar3 = 0;
	uVar6 = uVar7;
	do {
		BSave((char)*(undefined4 *)uVar6);
		iVar3 = iVar3 + 1;
		uVar6 = uVar6 + 4;
	} while (iVar3 < 0x7f);
	iVar3 = 0;
	puVar10 = *(undefined4 **)((int)uVar1 + -0x71f4);
	do {
		BSave((char)*puVar10);
		iVar3 = iVar3 + 1;
		puVar10 = puVar10 + 1;
	} while (iVar3 < 0x7f);
	iVar3 = 0;
	while (iVar3 < _DAT_1013d984) {
		SaveItem(*(int *)uVar7);
		uVar7 = uVar7 + 4;
		iVar3 = iVar3 + 1;
	}
	iVar3 = 0;
	do {
		iVar12 = 0;
		iVar5 = 0;
		do {
			BSave(*(byte *)(iVar3 + _DAT_1012f1bc + iVar5) & 0xf8);
			iVar12 = iVar12 + 1;
			iVar5 = iVar5 + 0x70;
		} while (iVar12 < 0x70);
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x70);
	iVar3 = 0;
	do {
		iVar12 = 0;
		iVar5 = 0;
		do {
			BSave(*(char *)(iVar3 + _DAT_1012f1a8 + iVar5));
			iVar2 = (int)uVar1;
			iVar12 = iVar12 + 1;
			iVar5 = iVar5 + 0x70;
		} while (iVar12 < 0x70);
		iVar3 = iVar3 + 1;
	} while (iVar3 < 0x70);
	if (leveltype != '\0') {
		iVar5 = 0;
		iVar3 = 0;
		do {
			iVar2 = 0;
			iVar12 = 0;
			do {
				WSave((int)*(short *)(iVar3 + _DAT_1012f1b4 + iVar12));
				iVar2 = iVar2 + 1;
				iVar12 = iVar12 + 0xe0;
			} while (iVar2 < 0x70);
			iVar5 = iVar5 + 1;
			iVar3 = iVar3 + 2;
		} while (iVar5 < 0x70);
		iVar3 = 0;
		do {
			iVar12 = 0;
			iVar5 = 0;
			do {
				BSave(*(char *)(iVar3 + _DAT_1012f1ac + iVar5));
				iVar12 = iVar12 + 1;
				iVar5 = iVar5 + 0x70;
			} while (iVar12 < 0x70);
			iVar3 = iVar3 + 1;
		} while (iVar3 < 0x70);
		iVar3 = 0;
		do {
			iVar12 = 0;
			iVar5 = 0;
			do {
				BSave(*(char *)(iVar3 + _DAT_1012f1c4 + iVar5));
				iVar12 = iVar12 + 1;
				iVar5 = iVar5 + 0x70;
			} while (iVar12 < 0x70);
			iVar3 = iVar3 + 1;
		} while (iVar3 < 0x70);
		iVar3 = 0;
		do {
			iVar12 = 0;
			iVar5 = 0;
			do {
				BSave(*(char *)(iVar3 + _DAT_1012f1c0 + iVar5));
				iVar12 = iVar12 + 1;
				iVar5 = iVar5 + 0x70;
			} while (iVar12 < 0x70);
			iVar3 = iVar3 + 1;
		} while (iVar3 < 0x70);
		pbVar4 = *(byte **)((int)uVar1 + -0x7798);
		iVar3 = 0;
		do {
			iVar5 = 0;
			pbVar13 = pbVar4;
			do {
				OSave((uint)*pbVar13);
				iVar5 = iVar5 + 1;
				pbVar13 = pbVar13 + 0x28;
			} while (iVar5 < 0x28);
			iVar3 = iVar3 + 1;
			pbVar4 = pbVar4 + 1;
		} while (iVar3 < 0x28);
		iVar3 = 0;
		do {
			iVar12 = 0;
			iVar5 = 0;
			do {
				BSave(*(char *)(iVar3 + _DAT_1012f1a4 + iVar5));
				iVar2 = (int)uVar1;
				iVar12 = iVar12 + 1;
				iVar5 = iVar5 + 0x70;
			} while (iVar12 < 0x70);
			iVar3 = iVar3 + 1;
		} while (iVar3 < 0x70);
	}
	GetTempLevelNames(acStack344);
	dwBytes = codec_get_encoded_len(*(int *)(iVar2 + -0x4df8) - (int)pbData);
	pfile_write_save_file(acStack344, pbData, *(int *)(iVar2 + -0x4df8) - (int)pbData, dwBytes);
	mem_free_dbg(pbData);
	if (**(char **)(iVar2 + -0x77d8) == '\0') {
		*(undefined *)(*(int *)(iVar2 + -0x77a8) + **(int **)(iVar2 + -0x77ac) * 0x55ec + (uint) * *(byte **)(iVar2 + -0x77e4) + 0x1f0) = 1;
	} else {
		*(undefined *)(*(int *)(iVar2 + -0x77a8) + **(int **)(iVar2 + -0x77ac) * 0x55ec + (uint) * *(byte **)(iVar2 + -0x77e0) + 0x201) = 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void LoadLevel(void)

{
	undefined **ppuVar1;
	undefined8 uVar2;
	int iVar3;
	BYTE *p;
	char cVar7;
	int iVar4;
	int iVar5;
	BOOL BVar6;
	uint uVar8;
	undefined8 in_r13;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined *puVar9;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	int iVar10;
	undefined8 unaff_r28;
	int *piVar13;
	int *piVar14;
	ulonglong uVar11;
	ulonglong uVar12;
	undefined8 unaff_r29;
	undefined *puVar15;
	undefined8 unaff_r30;
	int iVar16;
	int iVar17;
	undefined8 unaff_r31;
	longlong lVar18;
	char acStack344[260];
	DWORD aDStack84[2];
	undefined4 local_4c;
	undefined4 uStack72;
	undefined4 uStack68;
	undefined4 uStack64;
	undefined4 uStack60;
	undefined4 uStack56;
	undefined4 uStack52;
	undefined4 uStack48;
	undefined4 uStack44;
	undefined4 uStack40;
	undefined4 uStack36;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	ppuVar1 = PTR_DAT_100f1e90;
	uVar2 = 0x100f8fd0;
	local_4c = (undefined4)((ulonglong)in_r13 >> 0x20);
	uStack72 = (undefined4)((ulonglong)unaff_r14 >> 0x20);
	uStack68 = (undefined4)((ulonglong)unaff_r15 >> 0x20);
	uStack64 = (undefined4)((ulonglong)unaff_r16 >> 0x20);
	uStack60 = (undefined4)((ulonglong)unaff_r17 >> 0x20);
	uStack56 = (undefined4)((ulonglong)unaff_r18 >> 0x20);
	uStack52 = (undefined4)((ulonglong)unaff_r19 >> 0x20);
	uStack48 = (undefined4)((ulonglong)unaff_r20 >> 0x20);
	uStack44 = (undefined4)((ulonglong)unaff_r21 >> 0x20);
	uStack40 = (undefined4)((ulonglong)unaff_r22 >> 0x20);
	uStack36 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar12 = ZEXT48(&DAT_1013d788);
	piVar14 = (int *)&DAT_1017e10c;
	GetPermLevelNames(acStack344);
	p = pfile_read(acStack344, aDStack84);
	*(BYTE **)((int)uVar2 + -0x4df8) = p;
	if (leveltype != '\0') {
		iVar10 = 0;
		do {
			iVar16 = 0;
			iVar4 = 0;
			do {
				cVar7 = BLoad();
				iVar16 = iVar16 + 1;
				iVar17 = _DAT_1012f1b0 + iVar4;
				iVar4 = iVar4 + 0x70;
				*(char *)(iVar10 + iVar17) = cVar7;
			} while (iVar16 < 0x70);
			iVar10 = iVar10 + 1;
		} while (iVar10 < 0x70);
		SetDead();
	}
	nummonsters = WLoad();
	_DAT_1013d984 = WLoad();
	_DAT_1017e3d0 = WLoad();
	if (leveltype != '\0') {
		iVar10 = 0;
		piVar13 = *(int **)((int)uVar2 + -0x7628);
		do {
			iVar4 = WLoad();
			iVar10 = iVar10 + 1;
			*piVar13 = iVar4;
			piVar13 = piVar13 + 1;
		} while (iVar10 < 200);
		iVar10 = 0;
		piVar13 = *(int **)((int)uVar2 + -0x7628);
		while (iVar10 < nummonsters) {
			LoadMonster(*piVar13);
			piVar13 = piVar13 + 1;
			iVar10 = iVar10 + 1;
		}
		iVar10 = 0;
		piVar13 = piVar14;
		do {
			cVar7 = BLoad();
			iVar10 = iVar10 + 1;
			*piVar13 = (int)cVar7;
			piVar13 = piVar13 + 1;
		} while (iVar10 < 0x7f);
		iVar10 = 0;
		piVar13 = *(int **)((int)uVar2 + -0x7154);
		do {
			cVar7 = BLoad();
			iVar10 = iVar10 + 1;
			*piVar13 = (int)cVar7;
			piVar13 = piVar13 + 1;
		} while (iVar10 < 0x7f);
		iVar10 = 0;
		piVar13 = piVar14;
		while (iVar10 < _DAT_1017e3d0) {
			LoadObject(*piVar13);
			piVar13 = piVar13 + 1;
			iVar10 = iVar10 + 1;
		}
		iVar10 = 0;
		while (iVar10 < _DAT_1017e3d0) {
			SyncObjectAnim(*piVar14);
			piVar14 = piVar14 + 1;
			iVar10 = iVar10 + 1;
		}
	}
	iVar10 = 0;
	uVar11 = uVar12;
	do {
		cVar7 = BLoad();
		iVar10 = iVar10 + 1;
		*(int *)uVar11 = (int)cVar7;
		uVar11 = uVar11 + 4;
	} while (iVar10 < 0x7f);
	iVar10 = 0;
	piVar14 = *(int **)((int)uVar2 + -0x71f4);
	do {
		cVar7 = BLoad();
		iVar10 = iVar10 + 1;
		*piVar14 = (int)cVar7;
		piVar14 = piVar14 + 1;
	} while (iVar10 < 0x7f);
	iVar10 = 0;
	while (iVar10 < _DAT_1013d984) {
		LoadItem(*(int *)uVar12);
		uVar12 = uVar12 + 4;
		iVar10 = iVar10 + 1;
	}
	iVar10 = 0;
	do {
		iVar16 = 0;
		iVar4 = 0;
		do {
			cVar7 = BLoad();
			iVar16 = iVar16 + 1;
			iVar17 = _DAT_1012f1bc + iVar4;
			iVar4 = iVar4 + 0x70;
			*(char *)(iVar10 + iVar17) = cVar7;
		} while (iVar16 < 0x70);
		iVar10 = iVar10 + 1;
	} while (iVar10 < 0x70);
	iVar10 = 0;
	do {
		iVar16 = 0;
		iVar4 = 0;
		do {
			cVar7 = BLoad();
			iVar3 = (int)uVar2;
			iVar16 = iVar16 + 1;
			iVar17 = _DAT_1012f1a8 + iVar4;
			iVar4 = iVar4 + 0x70;
			*(char *)(iVar10 + iVar17) = cVar7;
		} while (iVar16 < 0x70);
		iVar10 = iVar10 + 1;
	} while (iVar10 < 0x70);
	if (leveltype != '\0') {
		iVar10 = 0;
		iVar4 = 0;
		do {
			iVar17 = 0;
			iVar16 = 0;
			do {
				iVar5 = WLoad();
				iVar17 = iVar17 + 1;
				iVar3 = _DAT_1012f1b4 + iVar16;
				iVar16 = iVar16 + 0xe0;
				*(undefined2 *)(iVar4 + iVar3) = (short)iVar5;
			} while (iVar17 < 0x70);
			iVar10 = iVar10 + 1;
			iVar4 = iVar4 + 2;
		} while (iVar10 < 0x70);
		iVar10 = 0;
		do {
			iVar16 = 0;
			iVar4 = 0;
			do {
				cVar7 = BLoad();
				iVar16 = iVar16 + 1;
				iVar17 = _DAT_1012f1ac + iVar4;
				iVar4 = iVar4 + 0x70;
				*(char *)(iVar10 + iVar17) = cVar7;
			} while (iVar16 < 0x70);
			iVar10 = iVar10 + 1;
		} while (iVar10 < 0x70);
		iVar10 = 0;
		do {
			iVar16 = 0;
			iVar4 = 0;
			do {
				cVar7 = BLoad();
				iVar16 = iVar16 + 1;
				iVar17 = _DAT_1012f1c4 + iVar4;
				iVar4 = iVar4 + 0x70;
				*(char *)(iVar10 + iVar17) = cVar7;
			} while (iVar16 < 0x70);
			iVar10 = iVar10 + 1;
		} while (iVar10 < 0x70);
		iVar10 = 0;
		do {
			iVar16 = 0;
			iVar4 = 0;
			do {
				cVar7 = BLoad();
				iVar16 = iVar16 + 1;
				iVar17 = _DAT_1012f1c0 + iVar4;
				iVar4 = iVar4 + 0x70;
				*(char *)(iVar10 + iVar17) = cVar7;
			} while (iVar16 < 0x70);
			iVar10 = iVar10 + 1;
		} while (iVar10 < 0x70);
		iVar10 = 0;
		puVar9 = *(undefined **)((int)uVar2 + -0x7798);
		do {
			iVar4 = 0;
			puVar15 = puVar9;
			do {
				BVar6 = OLoad();
				iVar3 = (int)uVar2;
				iVar4 = iVar4 + 1;
				*puVar15 = (char)BVar6;
				puVar15 = puVar15 + 0x28;
			} while (iVar4 < 0x28);
			iVar10 = iVar10 + 1;
			puVar9 = puVar9 + 1;
		} while (iVar10 < 0x28);
		iVar10 = 0;
		do {
			lVar18 = 7;
			iVar4 = 0;
			do {
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar4) = 0;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar4 + 0x70) = 0;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar4 + 0xe0) = 0;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar4 + 0x150) = 0;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar4 + 0x1c0) = 0;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar4 + 0x230) = 0;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar4 + 0x2a0) = 0;
				iVar16 = iVar4 + 0x380;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar4 + 0x310) = 0;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar16) = 0;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar16 + 0x70) = 0;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar16 + 0xe0) = 0;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar16 + 0x150) = 0;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar16 + 0x1c0) = 0;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar16 + 0x230) = 0;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar16 + 0x2a0) = 0;
				iVar4 = iVar4 + 0x700;
				*(undefined *)(iVar10 + _DAT_1012f1a4 + iVar16 + 0x310) = 0;
				lVar18 = lVar18 + -1;
			} while (lVar18 != 0);
			iVar10 = iVar10 + 1;
		} while (iVar10 < 0x70);
	}
	AutomapZoomReset();
	ResyncQuests();
	SyncPortals();
	iVar10 = *(int *)(iVar3 + -0x77a8);
	**(undefined4 **)(iVar3 + -0x7168) = 1;
	uVar8 = (uint) * *(byte **)(iVar3 + -0x77e4);
	if ((*(char *)(iVar10 + 0x1d) != '\0') && (uVar8 == *(uint *)(iVar10 + 0x34))) {
		ppuVar1[*(int *)(iVar10 + 0x9c) * 0xd + 5] = (undefined *)0x1;
	}
	if ((*(char *)(iVar10 + 0x5609) != '\0') && (uVar8 == *(uint *)(iVar10 + 0x5620))) {
		ppuVar1[*(int *)(iVar10 + 0x5688) * 0xd + 5] = (undefined *)0x1;
	}
	if ((*(char *)(iVar10 + 0xabf5) != '\0') && (uVar8 == *(uint *)(iVar10 + 0xac0c))) {
		ppuVar1[*(int *)(iVar10 + 0xac74) * 0xd + 5] = (undefined *)0x1;
	}
	if ((*(char *)(iVar10 + 0x101e1) != '\0') && (uVar8 == *(uint *)(iVar10 + 0x101f8))) {
		ppuVar1[*(int *)(iVar10 + 0x10260) * 0xd + 5] = (undefined *)0x1;
	}
	mem_free_dbg(p);
	return;
}