
int ObjIndex(int x, int y)

{
	ulonglong uVar1;
	int iVar2;
	int *piVar3;

	uVar1 = (ulonglong)_DAT_1017e3d0;
	piVar3 = (int *)&DAT_1017e10c;
	if (0 < (int)_DAT_1017e3d0) {
		do {
			iVar2 = *piVar3 * 0x78;
			if ((x == *(int *)(iVar2 + 0x1017e3d8)) && (y == *(int *)(iVar2 + 0x1017e3dc))) {
				return *piVar3;
			}
			piVar3 = piVar3 + 1;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	app_fatal("ObjIndex: Active object not found at (%d,%d)", x);
	return -1;
}

void AddSKingObjs(void)

{
	int i;

	i = ObjIndex(0x40, 0x22);
	SetObjMapRange(i, 0x14, 7, 0x17, 10, 1);
	i = ObjIndex(0x40, 0x3b);
	SetObjMapRange(i, 0x14, 0xe, 0x15, 0x10, 2);
	i = ObjIndex(0x1b, 0x25);
	SetObjMapRange(i, 8, 1, 0xf, 0xb, 3);
	i = ObjIndex(0x2e, 0x23);
	SetObjMapRange(i, 8, 1, 0xf, 0xb, 3);
	i = ObjIndex(0x31, 0x35);
	SetObjMapRange(i, 8, 1, 0xf, 0xb, 3);
	i = ObjIndex(0x1b, 0x35);
	SetObjMapRange(i, 8, 1, 0xf, 0xb, 3);
	return;
}

void AddSChamObjs(void)

{
	int i;

	i = ObjIndex(0x25, 0x1e);
	SetObjMapRange(i, 0x11, 0, 0x15, 5, 1);
	i = ObjIndex(0x25, 0x2e);
	SetObjMapRange(i, 0xd, 0, 0x10, 5, 2);
	return;
}

void AddVileObjs(void)

{
	int i;

	i = ObjIndex(0x1a, 0x2d);
	SetObjMapRange(i, 1, 1, 9, 10, 1);
	i = ObjIndex(0x2d, 0x2e);
	SetObjMapRange(i, 0xb, 1, 0x14, 10, 2);
	i = ObjIndex(0x23, 0x24);
	SetObjMapRange(i, 7, 0xb, 0xd, 0x12, 3);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DRLG_SetMapTrans(char *sFileName)

{
	byte bVar1;
	uint uVar2;
	int iVar3;
	char cVar4;
	undefined uVar7;
	ulonglong uVar5;
	int iVar6;
	undefined in_r5;
	int iVar8;
	undefined in_r6;
	int iVar9;
	undefined in_r7;
	undefined in_r8;
	longlong lVar10;
	undefined *puVar11;
	undefined in_r9;
	int iVar12;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	int *local_14[5];

	uVar7 = 0;
	local_14[0] = (int *)LoadFileInMem(sFileName, (DWORD *)0x0);
	cVar4 = LockMemFile(ZEXT48(local_14[0]), uVar7, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb);
	bVar1 = *(byte *)(int)cVar4;
	iVar9 = 0;
	uVar2 = (uint)bVar1 * 2;
	iVar3 = (uint) * (byte *)((int)cVar4 + 2) * 2;
	lVar10 = (longlong)cVar4 + (ulonglong)((uint)bVar1 * (uint) * (byte *)((int)cVar4 + 2) * 2) + 4 + (ulonglong)(uVar2 * iVar3 * 2) * 3;
	while (iVar9 < iVar3) {
		iVar8 = 0;
		if (bVar1 != 0) {
			if (8 < uVar2) {
				uVar5 = (ulonglong)(uVar2 - 1 >> 3);
				iVar6 = 0;
				if (0 < (int)(uVar2 - 8)) {
					do {
						iVar8 = iVar8 + 8;
						puVar11 = (undefined *)lVar10;
						*(undefined *)(iVar9 + _DAT_1012f1c8 + iVar6 + 0x710) = *puVar11;
						*(undefined *)(iVar9 + _DAT_1012f1c8 + iVar6 + 0x780) = puVar11[2];
						*(undefined *)(iVar9 + _DAT_1012f1c8 + iVar6 + 0x7f0) = puVar11[4];
						*(undefined *)(iVar9 + _DAT_1012f1c8 + iVar6 + 0x860) = puVar11[6];
						*(undefined *)(iVar9 + _DAT_1012f1c8 + iVar6 + 0x8d0) = puVar11[8];
						*(undefined *)(iVar9 + _DAT_1012f1c8 + iVar6 + 0x940) = puVar11[10];
						*(undefined *)(iVar9 + _DAT_1012f1c8 + iVar6 + 0x9b0) = puVar11[0xc];
						lVar10 = lVar10 + 0x10;
						iVar12 = _DAT_1012f1c8 + iVar6;
						iVar6 = iVar6 + 0x380;
						*(undefined *)(iVar9 + iVar12 + 0xa20) = puVar11[0xe];
						uVar5 = uVar5 - 1;
					} while (uVar5 != 0);
				}
			}
			iVar12 = iVar8 * 0x70;
			iVar6 = uVar2 - iVar8;
			if (iVar8 < (int)uVar2) {
				do {
					puVar11 = (undefined *)lVar10;
					lVar10 = lVar10 + 2;
					iVar8 = _DAT_1012f1c8 + iVar12;
					iVar12 = iVar12 + 0x70;
					*(undefined *)(iVar9 + iVar8 + 0x710) = *puVar11;
					iVar6 = iVar6 + -1;
				} while (iVar6 != 0);
			}
		}
		iVar9 = iVar9 + 1;
	}
	UnlockMemFile((char)local_14[0]);
	MemFreeDbg(local_14);
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void LoadSetMap(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar2 = 0x100f8fd0;
	iVar3 = 0x100f8fd0;
	iVar4 = 0x100f8fd0;
	iVar1 = 0x100f8fd0;
	if (DAT_1012f315 == 3) {
		LoadPreL1Dungeon("Levels\\L1Data\\Lv1MazeA.DUN", 0x14, 0x32);
		LoadL1Dungeon(*(char **)(iVar4 + -0x586c), 0x14, 0x32);
		LoadPalette(*(char **)(iVar4 + -0x5870));
		AddL1Objs(0, 0, 0x70, 0x70);
		DRLG_SetMapTrans("Levels\\L1Data\\Lv1MazeA.DUN");
	} else {
		if (DAT_1012f315 < 3) {
			if (DAT_1012f315 == 1) {
				if (quests[12]._qactive == '\x01') {
					quests[12]._qactive = '\x02';
					quests[12]._qvar1 = '\x01';
				}
				LoadPreL1Dungeon("Levels\\L1Data\\SklKng1.DUN", 0x53, 0x2d);
				LoadL1Dungeon(*(char **)(iVar2 + -0x5838), 0x53, 0x2d);
				LoadPalette("Levels\\L1Data\\L1_2.pal");
				DRLG_AreaTrans(2, *(BYTE **)(iVar2 + -0x5840));
				DRLG_ListTrans(2, *(BYTE **)(iVar2 + -0x5844));
				DRLG_AreaTrans(5, *(BYTE **)(iVar2 + -0x5848));
				DRLG_ListTrans(7, *(BYTE **)(iVar2 + -0x584c));
				AddL1Objs(0, 0, 0x70, 0x70);
				AddSKingObjs();
				InitSKingTriggers();
			} else {
				if (DAT_1012f315 != 0) {
					LoadPreL2Dungeon("Levels\\L2Data\\Bonecha2.DUN", 0x45, 0x27);
					LoadL2Dungeon(*(char **)(iVar3 + -0x5854), 0x45, 0x27);
					LoadPalette(*(char **)(iVar3 + -0x5858));
					DRLG_ListTrans(5, *(BYTE **)(iVar3 + -0x585c));
					DRLG_AreaTrans(2, *(BYTE **)(iVar3 + -0x5860));
					DRLG_ListTrans(9, *(BYTE **)(iVar3 + -0x5864));
					AddL2Objs(0, 0, 0x70, 0x70);
					AddSChamObjs();
					InitSChambTriggers();
				}
			}
		} else {
			if (DAT_1012f315 == 5) {
				if (quests[15]._qactive == '\x03') {
					quests[15]._qvar2 = '\x04';
				} else {
					if (quests[15]._qactive == '\x02') {
						quests[15]._qvar2 = '\x03';
					}
				}
				LoadPreL1Dungeon("Levels\\L1Data\\Vile1.DUN", 0x23, 0x24);
				LoadL1Dungeon(*(char **)(iVar1 + -0x5880), 0x23, 0x24);
				LoadPalette("Levels\\L1Data\\L1_2.pal");
				AddL1Objs(0, 0, 0x70, 0x70);
				AddVileObjs();
				DRLG_SetMapTrans("Levels\\L1Data\\Vile1.DUN");
				InitNoTriggers();
			} else {
				if (DAT_1012f315 < 5) {
					if (quests[13]._qactive == '\x01') {
						quests[13]._qactive = '\x02';
					}
					LoadPreL3Dungeon("Levels\\L3Data\\Foulwatr.DUN", 0x13, 0x32);
					LoadL3Dungeon("Levels\\L3Data\\Foulwatr.DUN", 0x14, 0x32);
					LoadPalette(*(char **)(iVar4 + -0x5878));
					InitPWaterTriggers();
				}
			}
		}
	}
	return;
}