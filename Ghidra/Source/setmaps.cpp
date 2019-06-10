
int ObjIndex(longlong lParm1, undefined8 uParm2)

{
	ulonglong uVar1;
	int iVar2;
	ulonglong uVar3;
	undefined4 in_r9;
	undefined4 in_r10;
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

	uVar1 = (ulonglong) * (uint *)PTR_DAT_100f1e3c;
	uVar3 = ZEXT48(PTR_DAT_100f1e40);
	if (0 < (int)*(uint *)PTR_DAT_100f1e3c) {
		do {
			iVar2 = *(int *)uVar3 * 0x78;
			if (((int)lParm1 == *(int *)(PTR_DAT_100f1948 + iVar2 + 4)) && ((int)uParm2 == *(int *)(PTR_DAT_100f1948 + iVar2 + 8))) {
				return *(int *)uVar3;
			}
			uVar3 = uVar3 + 4;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
	}
	app_fatal(_DAT_100f37a0, lParm1, uParm2, uVar3, ZEXT48(PTR_DAT_100f1948), (int)lParm1, in_r9, in_r10,
	    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffd8, in_stack_ffffffdc,
	    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
	    in_stack_fffffff0, in_stack_fffffff4);
	return 0xffffffff;
}

void AddSKingObjs(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;

	iVar1 = ObjIndex(0x40, 0x22, param_3, param_4, param_5, param_6, param_7, param_8);
	SetObjMapRange(iVar1, 0x14, 7, 0x17, 10, 1);
	iVar1 = ObjIndex(0x40, 0x3b);
	SetObjMapRange(iVar1, 0x14, 0xe, 0x15, 0x10, 2);
	iVar1 = ObjIndex(0x1b, 0x25);
	SetObjMapRange(iVar1, 8, 1, 0xf, 0xb, 3);
	iVar1 = ObjIndex(0x2e, 0x23);
	SetObjMapRange(iVar1, 8, 1, 0xf, 0xb, 3);
	iVar1 = ObjIndex(0x31, 0x35);
	SetObjMapRange(iVar1, 8, 1, 0xf, 0xb, 3);
	iVar1 = ObjIndex(0x1b, 0x35);
	SetObjMapRange(iVar1, 8, 1, 0xf, 0xb, 3);
	return;
}

void AddSChamObjs(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;

	iVar1 = ObjIndex(0x25, 0x1e, param_3, param_4, param_5, param_6, param_7, param_8);
	SetObjMapRange(iVar1, 0x11, 0, 0x15, 5, 1);
	iVar1 = ObjIndex(0x25, 0x2e);
	SetObjMapRange(iVar1, 0xd, 0, 0x10, 5, 2);
	return;
}

void AddVileObjs(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;

	iVar1 = ObjIndex(0x1a, 0x2d, param_3, param_4, param_5, param_6, param_7, param_8);
	SetObjMapRange(iVar1, 1, 1, 9, 10, 1);
	iVar1 = ObjIndex(0x2d, 0x2e);
	SetObjMapRange(iVar1, 0xb, 1, 0x14, 10, 2);
	iVar1 = ObjIndex(0x23, 0x24);
	SetObjMapRange(iVar1, 7, 0xb, 0xd, 0x12, 3);
	return;
}

void DRLG_SetMapTrans(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
    undefined8 param_5, undefined4 param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	int iVar2;
	uint uVar3;
	int iVar4;
	undefined *puVar5;
	uint uVar6;
	ulonglong uVar7;
	undefined8 uVar8;
	longlong lVar9;
	int iVar10;
	undefined uVar11;
	ulonglong uVar12;
	undefined uVar13;
	longlong lVar14;
	int iVar15;
	undefined uVar16;
	longlong lVar17;
	undefined *puVar18;
	byte *pbVar19;
	undefined uVar20;
	undefined uVar22;
	longlong lVar21;
	ulonglong uVar23;
	undefined uVar24;
	longlong lVar25;
	undefined4 in_stack_ffffffb8;
	int *local_14[5];

	puVar5 = PTR_DAT_100f1a48;
	uVar23 = SEXT48(param_8);
	lVar21 = (longlong)param_7;
	uVar8 = 0;
	uVar7 = LoadFileInMem(param_1, (undefined4 *)0x0, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	local_14[0] = (int *)uVar7;
	uVar7 = FUN_100b8f7c(uVar7 & 0xffffffff, uVar8, param_3, param_4, param_5, param_6, (int)lVar21,
	    (int)uVar23, in_stack_ffffffb8);
	bVar1 = *(byte *)uVar7;
	lVar14 = 0;
	uVar6 = (uint)((byte *)uVar7)[2];
	uVar3 = (uint)bVar1 * 2;
	uVar16 = (undefined)uVar3;
	iVar4 = uVar6 * 2;
	lVar9 = (ulonglong)(uVar3 * iVar4 * 2) * 3;
	uVar12 = (ulonglong)((uint)bVar1 * uVar6 * 2) + 2 + lVar9;
	lVar17 = uVar7 + 2 + uVar12;
	while (true) {
		uVar24 = (undefined)uVar23;
		uVar22 = (undefined)lVar21;
		uVar20 = (undefined)lVar17;
		iVar15._3_1_ = (undefined)lVar14;
		uVar13 = (undefined)uVar12;
		uVar11 = (undefined)lVar9;
		iVar15 = (int)lVar14;
		if (iVar4 <= iVar15)
			break;
		uVar12 = 0;
		if (bVar1 != 0) {
			if (8 < uVar3) {
				uVar7 = (ulonglong)(uVar3 - 1 >> 3);
				iVar10 = 0;
				if (0 < (int)(uVar3 - 8)) {
					do {
						uVar12 = uVar12 + 8;
						puVar18 = (undefined *)lVar17;
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x710) = *puVar18;
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x780) = puVar18[2];
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x7f0) = puVar18[4];
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x860) = puVar18[6];
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x8d0) = puVar18[8];
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x940) = puVar18[10];
						*(undefined *)(iVar15 + *(int *)puVar5 + iVar10 + 0x9b0) = puVar18[0xc];
						uVar23 = (ulonglong)(byte)puVar18[0xe];
						lVar17 = lVar17 + 0x10;
						iVar2 = *(int *)puVar5 + iVar10;
						iVar10 = iVar10 + 0x380;
						*(byte *)(iVar15 + iVar2 + 0xa20) = puVar18[0xe];
						uVar7 = uVar7 - 1;
					} while (uVar7 != 0);
				}
			}
			lVar21 = uVar12 * 0x70;
			lVar9 = (ulonglong)uVar3 - uVar12;
			lVar25 = lVar9;
			if ((int)uVar12 < (int)uVar3) {
				do {
					pbVar19 = (byte *)lVar17;
					uVar12 = (ulonglong)*pbVar19;
					lVar17 = lVar17 + 2;
					lVar9 = (ulonglong) * (uint *)puVar5 + lVar21;
					lVar21 = lVar21 + 0x70;
					lVar9 = lVar9 + 0x710;
					*(byte *)(iVar15 + (int)lVar9) = *pbVar19;
					lVar25 = lVar25 + -1;
				} while (lVar25 != 0);
			}
		}
		lVar14 = lVar14 + 1;
	}
	FUN_100b9100((int)local_14[0], uVar11, uVar13, (undefined)iVar15, uVar16, uVar20, uVar22, uVar24,
	    in_stack_ffffffb8);
	mem_free_dbg(local_14, uVar11, uVar13, (undefined)iVar15, uVar16, uVar20, uVar22, uVar24,
	    in_stack_ffffffb8);
	return;
}

void LoadSetMap(void)

{
	byte bVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined **ppuVar4;
	undefined **ppuVar5;
	undefined **ppuVar6;
	undefined uVar7;
	undefined8 uVar8;
	undefined uVar10;
	undefined8 uVar9;
	undefined8 in_r6;
	undefined uVar12;
	undefined uVar13;
	undefined8 uVar11;
	undefined7 uVar14;
	undefined8 in_r7;
	undefined uVar15;
	undefined4 in_r8;
	undefined uVar16;
	undefined4 in_r9;
	undefined uVar17;
	undefined4 in_r10;
	undefined uVar18;
	ulonglong uVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	ulonglong uVar22;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;

	puVar2 = PTR_DAT_100f19cc;
	uVar15 = (undefined)in_r7;
	uVar14 = (undefined7)((ulonglong)in_r7 >> 8);
	ppuVar3 = &toc;
	ppuVar4 = &toc;
	ppuVar5 = &toc;
	ppuVar6 = &toc;
	uVar21 = (ulonglong)_DAT_100f3768;
	uVar20 = (ulonglong)_DAT_100f375c;
	uVar19 = (ulonglong)_DAT_100f3754;
	uVar22 = (ulonglong)_DAT_100f3794;
	bVar1 = *PTR_DAT_100f17f0;
	if (bVar1 == 3) {
		LoadPreL1Dungeon(uVar21, 0x14, 0x32, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0);
		uVar8 = 0x14;
		uVar9 = 0x32;
		LoadL1Dungeon(ZEXT48(ppuVar5[-0x161b]));
		LoadPalette(ZEXT48(ppuVar5[-0x161c]), uVar8, uVar9, in_r6, CONCAT71(uVar14, uVar15), in_r8, in_r9,
		    in_r10, in_stack_ffffffb8);
		uVar8 = 0;
		uVar9 = 0x70;
		uVar11 = 0x70;
		AddL1Objs(0, 0, 0x70, 0x70, uVar15, (char)in_r8, (char)in_r9, (char)in_r10, in_stack_ffffffb8);
		DRLG_SetMapTrans(uVar21, uVar8, uVar9, uVar11, CONCAT71(uVar14, uVar15), in_r8, in_r9, in_r10,
		    in_stack_ffffffb8);
	} else {
		if (bVar1 < 3) {
			if (bVar1 == 1) {
				if (PTR_DAT_100f19cc[0x122] == '\x01') {
					PTR_DAT_100f19cc[0x122] = 2;
					puVar2[0x12f] = 1;
				}
				LoadPreL1Dungeon((ulonglong)_DAT_100f379c, 0x53, 0x2d, in_r6, in_r7, in_r8, in_r9, in_r10,
				    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0);
				uVar8 = 0x53;
				uVar9 = 0x2d;
				LoadL1Dungeon(ZEXT48(ppuVar3[-0x160e]));
				uVar18 = (undefined)in_r10;
				uVar17 = (undefined)in_r9;
				uVar16 = (undefined)in_r8;
				uVar12 = (undefined)in_r6;
				uVar7 = (undefined)uVar9;
				LoadPalette(uVar22, uVar8, uVar9, in_r6, CONCAT71(uVar14, uVar15), in_r8, in_r9, in_r10,
				    in_stack_ffffffb8);
				DRLG_AreaTrans(2, ppuVar3[-0x1610], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
				DRLG_ListTrans(2, ppuVar3[-0x1611], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
				DRLG_AreaTrans(5, ppuVar3[-0x1612], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
				DRLG_ListTrans(7, ppuVar3[-0x1613], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
				uVar12 = 0;
				uVar10 = 0x70;
				uVar13 = 0x70;
				uVar7 = AddL1Objs(0, 0, 0x70, 0x70, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
				AddSKingObjs(uVar7, uVar12, uVar10, uVar13, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
				InitSKingTriggers();
			} else {
				if (bVar1 != 0) {
					LoadPreL2Dungeon((ulonglong)_DAT_100f3780, 0x45, 0x27, in_r6, in_r7, in_r8, in_r9, in_r10,
					    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0);
					uVar8 = 0x45;
					uVar9 = 0x27;
					LoadL2Dungeon(ZEXT48(ppuVar4[-0x1615]), 0x45, 0x27, in_r6, CONCAT71(uVar14, uVar15), in_r8, in_r9,
					    in_r10, in_stack_ffffffb8);
					uVar18 = (undefined)in_r10;
					uVar17 = (undefined)in_r9;
					uVar16 = (undefined)in_r8;
					uVar12 = (undefined)in_r6;
					uVar7 = (undefined)uVar9;
					LoadPalette(ZEXT48(ppuVar4[-0x1616]), uVar8, uVar9, in_r6, CONCAT71(uVar14, uVar15), in_r8,
					    in_r9, in_r10, in_stack_ffffffb8);
					DRLG_ListTrans(5, ppuVar4[-0x1617], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
					DRLG_AreaTrans(2, ppuVar4[-0x1618], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
					DRLG_ListTrans(9, ppuVar4[-0x1619], uVar7, uVar12, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
					uVar12 = 0;
					uVar10 = 0x70;
					uVar13 = 0x70;
					uVar7 = AddL2Objs(0, 0, 0x70, 0x70, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
					AddSChamObjs(uVar7, uVar12, uVar10, uVar13, uVar15, uVar16, uVar17, uVar18, in_stack_ffffffb8);
					InitSChambTriggers();
				}
			}
		} else {
			if (bVar1 == 5) {
				if (PTR_DAT_100f19cc[0x16a] == '\x03') {
					PTR_DAT_100f19cc[0x178] = 4;
				} else {
					if (PTR_DAT_100f19cc[0x16a] == '\x02') {
						PTR_DAT_100f19cc[0x178] = 3;
					}
				}
				LoadPreL1Dungeon(uVar19, 0x23, 0x24, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8,
				    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0);
				uVar8 = 0x23;
				uVar9 = 0x24;
				LoadL1Dungeon(ZEXT48(ppuVar6[-0x1620]));
				LoadPalette(uVar22, uVar8, uVar9, in_r6, CONCAT71(uVar14, uVar15), in_r8, in_r9, in_r10,
				    in_stack_ffffffb8);
				uVar8 = 0;
				uVar9 = 0x70;
				uVar11 = 0x70;
				uVar7 = AddL1Objs(0, 0, 0x70, 0x70, uVar15, (char)in_r8, (char)in_r9, (char)in_r10,
				    in_stack_ffffffb8);
				AddVileObjs(uVar7, (char)uVar8, (char)uVar9, (char)uVar11, uVar15, (char)in_r8, (char)in_r9,
				    (char)in_r10, in_stack_ffffffb8);
				DRLG_SetMapTrans(uVar19, uVar8, uVar9, uVar11, CONCAT71(uVar14, uVar15), in_r8, in_r9, in_r10,
				    in_stack_ffffffb8);
				InitNoTriggers();
			} else {
				if (bVar1 < 5) {
					if (PTR_DAT_100f19cc[0x13a] == '\x01') {
						PTR_DAT_100f19cc[0x13a] = '\x02';
					}
					LoadPreL3Dungeon(uVar20, 0x13, 0x32, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffb8,
					    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0);
					uVar8 = 0x14;
					uVar9 = 0x32;
					LoadL3Dungeon(uVar20, 0x14, 0x32, in_r6, CONCAT71(uVar14, uVar15), in_r8, in_r9, in_r10,
					    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0);
					LoadPalette(ZEXT48(ppuVar5[-0x161e]), uVar8, uVar9, in_r6, CONCAT71(uVar14, uVar15), in_r8,
					    in_r9, in_r10, in_stack_ffffffb8);
					InitPWaterTriggers();
				}
			}
		}
	}
	return;
}
