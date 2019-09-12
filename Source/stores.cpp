
void InitStores(void)

{
	undefined4 *puVar1;
	undefined *puVar2;
	undefined4 *puVar3;
	int iVar4;
	int iVar5;
	BYTE *pBVar6;

	iVar5 = 0x100f8fd0;
	pBVar6 = LoadFileInMem("Data\\TextBox2.CEL", (DWORD *)0x0);
	**(BYTE ***)(iVar5 + -0x719c) = pBVar6;
	pBVar6 = LoadFileInMem(*(char **)(iVar5 + -0x56b4), (DWORD *)0x0);
	**(BYTE ***)(iVar5 + -0x7774) = pBVar6;
	pBVar6 = LoadFileInMem(*(char **)(iVar5 + -0x56b8), (DWORD *)0x0);
	**(BYTE ***)(iVar5 + -0x7288) = pBVar6;
	ClearSText(0, 0x18);
	puVar1 = *(undefined4 **)(iVar5 + -0x6ef0);
	**(undefined **)(iVar5 + -0x7764) = 0;
	puVar2 = *(undefined **)(iVar5 + -0x6ef4);
	*puVar1 = 1;
	puVar1 = *(undefined4 **)(iVar5 + -0x6ef8);
	*puVar2 = 0;
	puVar3 = *(undefined4 **)(iVar5 + -0x71ac);
	*puVar1 = 0;
	puVar1 = *(undefined4 **)(iVar5 + -0x71b4);
	*puVar3 = 0;
	iVar4 = *(int *)(iVar5 + -0x71bc);
	*puVar1 = 1;
	puVar1 = *(undefined4 **)(iVar5 + -0x71b8);
	uRam101a8088 = 0xffffffff;
	uRam101a81f8 = 0xffffffff;
	uRam101a8368 = 0xffffffff;
	uRam101a84d8 = 0xffffffff;
	uRam101a8648 = 0xffffffff;
	uRam101a87b8 = 0xffffffff;
	*(undefined4 *)(iVar4 + 8) = 0xffffffff;
	*puVar1 = 0;
	return;
}

void SetupTownStores(void)

{
	DWORD DVar1;
	PlayerStruct *pPVar2;
	int iVar3;
	int lvl;
	longlong lVar4;
	int local_3c;

	DVar1 = GetTickCount();
	SetRndSeed(*(int *)(*(int *)(local_3c + -0x75ec) + (uint) * *(byte **)(local_3c + -0x77e4) * 4) * DVar1);
	if (**(char **)(local_3c + -0x77f0) == '\x01') {
		lVar4 = 0x11;
		lvl = 0;
		pPVar2 = (PlayerStruct *)((int)plr + myplr * 0x55ec);
		iVar3 = 0;
		do {
			if (pPVar2->_pLvlVisited[0] != false) {
				lvl = iVar3;
			}
			pPVar2 = (PlayerStruct *)((int)&pPVar2->_pmode + 1);
			iVar3 = iVar3 + 1;
			lVar4 = lVar4 + -1;
		} while (lVar4 != 0);
	} else {
		lvl = (int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4) >> 1;
	}
	lvl = lvl + 2;
	if (lvl < 6) {
		lvl = 6;
	}
	if (0x10 < lvl) {
		lvl = 0x10;
	}
	SpawnStoreGold();
	SpawnSmith(lvl);
	SpawnWitch(lvl);
	SpawnHealer(lvl);
	SpawnBoy((int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4));
	SpawnPremium((int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4));
	return;
}

void FreeStoreMem(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	MemFreeDbg((int **)&DAT_101ab4b8);
	MemFreeDbg(*(int ***)(iVar1 + -0x7774));
	MemFreeDbg(*(int ***)(iVar1 + -0x7288));
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawSTextBack(void)

{
	int iVar1;
	longlong lVar2;
	undefined *puVar3;
	undefined *puVar4;
	longlong lVar5;

	iVar1 = 0x100f8fd0;
	CelDecodeOnly(0x198, 0x1e7, _DAT_101ab4b8, 1, 0x10f);
	lVar5 = 0x94;
	puVar4 = (undefined *)(**(int **)(iVar1 + -0x7804) + 0x5ad9b);
	do {
		lVar2 = 0x84;
		do {
			puVar3 = puVar4;
			lVar2 = lVar2 + -1;
			*puVar3 = 0;
			puVar4 = puVar3 + 2;
		} while (lVar2 != 0);
		puVar3[2] = 0;
		lVar2 = 0x84;
		puVar3 = puVar3 + -0x406;
		do {
			puVar4 = puVar3;
			lVar2 = lVar2 + -1;
			puVar4[1] = 0;
			puVar3 = puVar4 + 2;
		} while (lVar2 != 0);
		lVar5 = lVar5 + -1;
		puVar4 = puVar4 + -0x406;
	} while (lVar5 != 0);
	lVar5 = 0x84;
	do {
		lVar5 = lVar5 + -1;
		*puVar4 = 0;
		puVar4 = puVar4 + 2;
	} while (lVar5 != 0);
	return;
}

void PrintSString(int x, int y, BOOL cjustflag, char *str, char col, int val)

{
	uint *puVar1;
	byte bVar2;
	uint nCel;
	ulonglong uVar3;
	longlong lVar4;
	undefined8 uVar5;
	int iVar6;
	size_t sVar8;
	longlong lVar7;
	byte *pbVar9;
	longlong lVar10;
	ulonglong uVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	ulonglong uVar15;
	undefined8 in_r13;
	ulonglong uVar16;
	int *piVar17;
	undefined8 unaff_r14;
	undefined8 unaff_r15;
	int iVar18;
	undefined8 unaff_r16;
	undefined8 unaff_r17;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	longlong lVar19;
	int iVar20;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	int iVar21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	ulonglong uVar22;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	ulonglong uVar23;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff58;
	undefined in_stack_ffffff5f;
	undefined4 in_stack_ffffff6c;
	undefined4 in_stack_ffffff70;
	undefined4 in_stack_ffffff74;
	undefined4 in_stack_ffffff78;
	undefined4 in_stack_ffffff7c;
	undefined4 in_stack_ffffff80;
	undefined4 in_stack_ffffff84;
	byte abStack117[41];
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

	lVar13 = (longlong)val;
	lVar12 = (longlong)col;
	uVar23 = SEXT48((int)str);
	uVar5 = 0x100f8fd0;
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
	uVar15 = ZEXT48(&DAT_101aa5e0);
	uVar16 = ZEXT48(&stextsel);
	lVar14 = (longlong)DAT_101ab4ac;
	iVar18 = *(int *)(&DAT_1010f7b8 + y * 4) + *(int *)(y * 0x9c + 0x101aa5e4);
	if (lVar14 == 0) {
		lVar19 = 0x1a0;
	} else {
		lVar19 = 0x60;
	}
	iVar20 = (int)lVar19;
	puVar1 = (uint *)(iVar18 * 4 + 0x1019f0b0);
	lVar19 = (longlong)x + (ulonglong)*puVar1 + lVar19;
	uVar11 = uVar23;
	sVar8 = strlen(str);
	if (DAT_101ab4ac == '\0') {
		iVar21 = 0x101;
	} else {
		iVar21 = 0x241;
	}
	uVar22 = 0;
	if (cjustflag != 0) {
		lVar10 = 0;
		lVar10._4_4_ = 0;
		lVar12 = 0;
		if (0 < (int)sVar8) {
			if ((8 < (int)sVar8) && (uVar3 = (ulonglong)(sVar8 - 1 >> 3), 0 < (int)(sVar8 - 8))) {
				do {
					pbVar9 = (byte *)(str + (int)lVar12);
					lVar12 = lVar12 + 8;
					uVar11 = (ulonglong)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar9[5]]];
					lVar10 = (ulonglong)(byte)(&DAT_100f6230)
					             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar9[7]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					          [(uint)(byte)(&DAT_100f61b0)
					                  [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar9[6]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					          [(uint)(byte)(&DAT_100f61b0)
					                  [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar9[5]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					          [(uint)(byte)(&DAT_100f61b0)
					                  [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar9[4]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					          [(uint)(byte)(&DAT_100f61b0)
					                  [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar9[3]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					          [(uint)(byte)(&DAT_100f61b0)
					                  [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar9[2]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					          [(uint)(byte)(&DAT_100f61b0)
					                  [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar9[1]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					          [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar9]]]
					    + lVar10 + 8;
					uVar3 = uVar3 - 1;
				} while (uVar3 != 0);
			}
			lVar10._4_4_ = (int)lVar10;
			lVar4 = (longlong)(int)sVar8 - lVar12;
			lVar7 = uVar23 + lVar12;
			if ((int)lVar12 < (int)sVar8) {
				do {
					pbVar9 = (byte *)lVar7;
					lVar7 = lVar7 + 1;
					lVar10 = (ulonglong)(byte)(&DAT_100f6230)
					             [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar9]]]
					    + lVar10 + 1;
					lVar10._4_4_ = (int)lVar10;
					lVar4 = lVar4 + -1;
				} while (lVar4 != 0);
			}
		}
		if (lVar10._4_4_ < iVar21) {
			uVar22 = (ulonglong)(uint)(iVar21 - lVar10._4_4_ >> 1);
		}
		lVar19 = lVar19 + uVar22;
	}
	if (*(int *)uVar16 == y) {
		lVar10._4_4_ = iVar20;
		if (cjustflag != 0) {
			lVar10._4_4_ = (int)uVar22 + iVar20;
		}
		lVar12 = 0xc;
		nCel = **(uint **)((int)uVar5 + -0x6ef0);
		uVar11 = (ulonglong)nCel;
		CelDecodeOnly(x + lVar10._4_4_ + -0x14, iVar18 + 0xcd, **(BYTE ***)((int)uVar5 + -0x7774), nCel, 0xc);
	}
	lVar10._4_4_ = 0;
	while (true) {
		piVar17 = (int *)uVar16;
		iVar6 = (int)uVar5;
		if ((int)sVar8 <= lVar10._4_4_)
			break;
		bVar2 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint) * (byte *)uVar23]];
		uVar22 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar2] + uVar22 + 1;
		if ((bVar2 != 0) && ((int)uVar22 <= iVar21)) {
			CPrintString((int)lVar19, (uint)bVar2, col);
		}
		lVar10._4_4_ = lVar10._4_4_ + 1;
		uVar23 = uVar23 + 1;
		lVar19 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar2] + lVar19 + 1;
	}
	if ((cjustflag == 0) && (-1 < val)) {
		wsprintf((int)(abStack117 + 1), *(undefined4 *)(iVar6 + -0x56bc), val, (int)uVar11, (int)lVar12,
		    (int)lVar13, (int)lVar14, (int)uVar15, in_stack_ffffff58, in_stack_ffffff5f,
		    in_stack_ffffff6c, in_stack_ffffff70, in_stack_ffffff74, in_stack_ffffff78,
		    in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
		lVar12 = ((ulonglong)*puVar1 + 0x290) - (longlong)x;
		sVar8 = strlen((char *)(abStack117 + 1));
		pbVar9 = abStack117 + sVar8;
		while (true) {
			piVar17 = (int *)uVar16;
			iVar6 = (int)uVar5;
			sVar8 = sVar8 - 1;
			if ((int)sVar8 < 0)
				break;
			bVar2 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar9]];
			lVar12 = lVar12 - ((ulonglong)(byte)(&DAT_100f6230)[(uint)bVar2] + 1);
			if (bVar2 != 0) {
				CPrintString((int)lVar12, (uint)bVar2, col);
			}
			pbVar9 = pbVar9 + -1;
		}
	}
	if (*piVar17 == y) {
		if (cjustflag == 0) {
			x = 0x294 - x;
		} else {
			x = x + (int)uVar22 + iVar20 + 4;
		}
		CelDecodeOnly(x, iVar18 + 0xcd, **(BYTE ***)(iVar6 + -0x7774), **(int **)(iVar6 + -0x6ef0), 0xc);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawSLine(int y)

{
	undefined uVar1;
	int iVar2;
	longlong lVar3;
	undefined *puVar4;
	int iVar5;
	undefined *puVar6;
	int iVar8;
	longlong lVar7;
	int iVar9;
	longlong lVar10;

	if (DAT_101ab4ac == '\x01') {
		iVar5 = 0x22b5a;
		iVar8 = *(int *)(*(int *)(&DAT_1010f7b8 + y * 4) * 4 + 0x1019f098) + 0x5a;
		iVar2 = 0x92;
		iVar9 = 0xb6;
	} else {
		iVar5 = 0x22c9a;
		iVar8 = *(int *)(*(int *)(&DAT_1010f7b8 + y * 4) * 4 + 0x1019f098) + 0x19a;
		iVar2 = 0x42;
		iVar9 = 0x1f6;
	}
	lVar3 = (ulonglong)(uint)(iVar2 << 2) + 2;
	lVar10 = 3;
	puVar6 = (undefined *)(_DAT_101271e4 + iVar5);
	puVar4 = (undefined *)(_DAT_101271e4 + iVar8);
	lVar7 = lVar3;
	do {
		do {
			uVar1 = *puVar6;
			lVar7 = lVar7 + -1;
			puVar6 = puVar6 + 1;
			*puVar4 = uVar1;
			puVar4 = puVar4 + 1;
		} while (lVar7 != 0);
		lVar10 = lVar10 + -1;
		puVar6 = puVar6 + iVar9;
		puVar4 = puVar4 + iVar9;
		lVar7 = lVar3;
	} while (lVar10 != 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawSArrows(int y1, int y2)

{
	uint uVar1;
	undefined8 uVar2;
	int sy;
	int sy_00;
	int sy_01;

	uVar2 = 0x100f8fd0;
	sy = *(int *)(&DAT_1010f7b8 + y1 * 4);
	sy_01 = sy + 0xcc;
	sy_00 = *(int *)(&DAT_1010f7b8 + y2 * 4) + 0xcc;
	if (DAT_101ab481 == -1) {
		CelDecodeOnly(0x299, sy_01, _DAT_101ab4b0, 10, 0xc);
	} else {
		CelDecodeOnly(0x299, sy_01, _DAT_101ab4b0, 0xc, 0xc);
	}
	if (**(char **)((int)uVar2 + -0x6f08) == -1) {
		CelDecodeOnly(0x299, sy_00, _DAT_101ab4b0, 9, 0xc);
	} else {
		CelDecodeOnly(0x299, sy_00, _DAT_101ab4b0, 0xb, 0xc);
	}
	sy = sy + 0xd8;
	while (sy < sy_00) {
		CelDecodeOnly(0x299, sy, _DAT_101ab4b0, 0xe, 0xc);
		sy = sy + 0xc;
	}
	sy_00 = (int)uVar2;
	sy = **(int **)(sy_00 + -0x6f00);
	if (sy == 0x16) {
		sy = **(int **)(sy_00 + -0x6f0c);
	}
	if (**(int **)(sy_00 + -0x6f10) < 2) {
		sy = 0;
	} else {
		sy = (((**(int **)(sy_00 + -0x6f14) + (sy - **(int **)(sy_00 + -0x6f18) >> 2)) * 1000) / (**(int **)(sy_00 + -0x6f10) + -1)) * ((*(int *)(&DAT_1010f7b8 + y2 * 4) - *(int *)(&DAT_1010f7b8 + y1 * 4)) + -0x18);
		uVar1 = sy / 1000 + (sy >> 0x1f);
		sy = uVar1 + (uVar1 >> 0x1f);
	}
	CelDecodeOnly(0x299, *(int *)(y1 * 4 + 0x1010f7bc) + sy + 0xcc, _DAT_101ab4b0, 0xd, 0xc);
	return;
}

void DrawSTextHelp(void)

{
	stextsel = -1;
	DAT_101ab4ac = 1;
	return;
}

void ClearSText(int s, int e)

{
	ulonglong uVar1;
	uint uVar2;
	undefined4 *puVar3;

	puVar3 = (undefined4 *)(&DAT_101aa5e0 + s * 0x9c);
	uVar2 = e - s;
	if (e <= s) {
		return;
	}
	uVar1 = (ulonglong)(uVar2 >> 3);
	if (uVar2 >> 3 != 0) {
		do {
			*puVar3 = 0;
			puVar3[1] = 0;
			*(undefined *)(puVar3 + 2) = 0;
			puVar3[0x22] = 0;
			*(undefined *)(puVar3 + 0x23) = 0;
			puVar3[0x24] = 0;
			puVar3[0x25] = 0;
			puVar3[0x26] = 0xffffffff;
			puVar3[0x27] = 0;
			puVar3[0x28] = 0;
			*(undefined *)(puVar3 + 0x29) = 0;
			puVar3[0x49] = 0;
			*(undefined *)(puVar3 + 0x4a) = 0;
			puVar3[0x4b] = 0;
			puVar3[0x4c] = 0;
			puVar3[0x4d] = 0xffffffff;
			puVar3[0x4e] = 0;
			puVar3[0x4f] = 0;
			*(undefined *)(puVar3 + 0x50) = 0;
			puVar3[0x70] = 0;
			*(undefined *)(puVar3 + 0x71) = 0;
			puVar3[0x72] = 0;
			puVar3[0x73] = 0;
			puVar3[0x74] = 0xffffffff;
			puVar3[0x75] = 0;
			puVar3[0x76] = 0;
			*(undefined *)(puVar3 + 0x77) = 0;
			puVar3[0x97] = 0;
			*(undefined *)(puVar3 + 0x98) = 0;
			puVar3[0x99] = 0;
			puVar3[0x9a] = 0;
			puVar3[0x9b] = 0xffffffff;
			puVar3[0x9c] = 0;
			puVar3[0x9d] = 0;
			*(undefined *)(puVar3 + 0x9e) = 0;
			puVar3[0xbe] = 0;
			*(undefined *)(puVar3 + 0xbf) = 0;
			puVar3[0xc0] = 0;
			puVar3[0xc1] = 0;
			puVar3[0xc2] = 0xffffffff;
			puVar3[0xc3] = 0;
			puVar3[0xc4] = 0;
			*(undefined *)(puVar3 + 0xc5) = 0;
			puVar3[0xe5] = 0;
			*(undefined *)(puVar3 + 0xe6) = 0;
			puVar3[0xe7] = 0;
			puVar3[0xe8] = 0;
			puVar3[0xe9] = 0xffffffff;
			puVar3[0xea] = 0;
			puVar3[0xeb] = 0;
			*(undefined *)(puVar3 + 0xec) = 0;
			puVar3[0x10c] = 0;
			*(undefined *)(puVar3 + 0x10d) = 0;
			puVar3[0x10e] = 0;
			puVar3[0x10f] = 0;
			puVar3[0x110] = 0xffffffff;
			puVar3[0x111] = 0;
			puVar3[0x112] = 0;
			*(undefined *)(puVar3 + 0x113) = 0;
			puVar3[0x133] = 0;
			*(undefined *)(puVar3 + 0x134) = 0;
			puVar3[0x135] = 0;
			puVar3[0x136] = 0;
			puVar3[0x137] = 0xffffffff;
			puVar3 = puVar3 + 0x138;
			uVar1 = uVar1 - 1;
		} while (uVar1 != 0);
		uVar2 = uVar2 & 7;
		if (uVar2 == 0) {
			return;
		}
	}
	do {
		*puVar3 = 0;
		puVar3[1] = 0;
		*(undefined *)(puVar3 + 2) = 0;
		puVar3[0x22] = 0;
		*(undefined *)(puVar3 + 0x23) = 0;
		puVar3[0x24] = 0;
		puVar3[0x25] = 0;
		puVar3[0x26] = 0xffffffff;
		puVar3 = puVar3 + 0x27;
		uVar2 = uVar2 - 1;
	} while (uVar2 != 0);
	return;
}

void AddSLine(int y)

{
	y = y * 0x9c;
	*(undefined4 *)(&DAT_101aa5e0 + y) = 0;
	*(undefined4 *)(y + 0x101aa5e4) = 0;
	*(undefined *)(y + 0x101aa5e8) = 0;
	*(undefined4 *)(y + 0x101aa670) = 1;
	return;
}

void AddSTextVal(int y, int val)

{
	*(int *)(y * 0x9c + 0x101aa678) = val;
	return;
}

void OffsetSTextY(int y, int yo)

{
	*(int *)(y * 0x9c + 0x101aa5e4) = yo;
	return;
}

void AddSText(int x, int y, int j, char *str, char clr, int sel)

{
	y = y * 0x9c;
	*(int *)(&DAT_101aa5e0 + y) = x;
	*(undefined4 *)(y + 0x101aa5e4) = 0;
	strcpy((char *)(y + 0x101aa5e8), str);
	*(int *)(y + 0x101aa668) = j;
	*(char *)(y + 0x101aa66c) = clr;
	*(undefined4 *)(y + 0x101aa670) = 0;
	*(int *)(y + 0x101aa674) = sel;
	return;
}

void PrintStoreItem(ItemStruct *x, int l, char iclr)

{
	int iVar1;
	int iVar2;
	char *str;
	int in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_ffffff38;
	undefined in_stack_ffffff3f;
	undefined4 in_stack_ffffff4c;
	undefined4 in_stack_ffffff50;
	undefined4 in_stack_ffffff54;
	undefined4 in_stack_ffffff58;
	undefined4 in_stack_ffffff5c;
	undefined4 in_stack_ffffff60;
	undefined4 in_stack_ffffff64;
	char local_98[132];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar2 = 0x100f8fd0;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	local_98[0] = '\0';
	if (x->_iIdentified != 0) {
		iVar2 = 0x100f8fd0;
		if ((x->_iMagical != '\x02') && (iVar2 = 0x100f8fd0, x->_iPrePower != -1)) {
			iVar2 = 0x100f8fd0;
			PrintItemPower(x->_iPrePower, x);
			strcat(local_98, &DAT_101282d4);
		}
		if (x->_iSufPower != -1) {
			PrintItemPower(x->_iSufPower, x);
			if (local_98[0] != '\0') {
				strcat(local_98, ",  ");
			}
			strcat(local_98, &DAT_101282d4);
		}
	}
	if (x->_iMiscId == 0x17) {
		str = (char *)x->_iMaxCharges;
		if (str != (char *)0x0) {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x56c4), x->_iCharges, str, in_r7, in_r8,
			    in_r9, in_r10, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c, in_stack_ffffff50,
			    in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c, in_stack_ffffff60,
			    in_stack_ffffff64);
			if (local_98[0] != '\0') {
				strcat(local_98, ",  ");
			}
			strcat(local_98, &DAT_101282d4);
		}
	}
	if (local_98[0] != '\0') {
		str = local_98;
		in_r8 = 0;
		in_r7 = (int)iclr;
		AddSText(0x28, l, 0, str, iclr, 0);
		l = l + 1;
	}
	local_98[0] = '\0';
	if (x->_iClass == '\x01') {
		str = (char *)x->_iMaxDam;
		wsprintf((int)local_98, *(undefined4 *)(iVar2 + -0x56c8), x->_iMinDam, str, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c, in_stack_ffffff50,
		    in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c, in_stack_ffffff60,
		    in_stack_ffffff64);
	}
	if (x->_iClass == '\x02') {
		wsprintf((int)local_98, *(undefined4 *)(iVar2 + -0x56cc), x->_iAC, str, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c, in_stack_ffffff50,
		    in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c, in_stack_ffffff60,
		    in_stack_ffffff64);
	}
	iVar1 = x->_iMaxDur;
	if ((iVar1 == 0xff) || (iVar1 == 0)) {
		strcat(local_98, *(char **)(iVar2 + -0x56d0));
	} else {
		wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x56d4), x->_iDurability, iVar1, in_r7, in_r8,
		    in_r9, in_r10, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c, in_stack_ffffff50,
		    in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c, in_stack_ffffff60,
		    in_stack_ffffff64);
		strcat(local_98, &DAT_101282d4);
	}
	if (x->_itype == 0) {
		local_98[0] = '\0';
	}
	if ((longlong)x->_iMinStr + (ulonglong)x->_iMinMag + (longlong)x->_iMinDex == 0) {
		strcat(local_98, *(char **)(iVar2 + -0x56d8));
	} else {
		strcpy(&DAT_101282d4, *(char **)(iVar2 + -0x56dc));
		if (x->_iMinStr != '\0') {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x56e0), &DAT_101282d4, (int)x->_iMinStr,
			    in_r7, in_r8, in_r9, in_r10, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
			    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
			    in_stack_ffffff60, in_stack_ffffff64);
		}
		if (x->_iMinMag != 0) {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x56e4), &DAT_101282d4, (uint)x->_iMinMag,
			    in_r7, in_r8, in_r9, in_r10, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
			    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
			    in_stack_ffffff60, in_stack_ffffff64);
		}
		if (x->_iMinDex != '\0') {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x56e8), &DAT_101282d4, (int)x->_iMinDex,
			    in_r7, in_r8, in_r9, in_r10, in_stack_ffffff38, in_stack_ffffff3f, in_stack_ffffff4c,
			    in_stack_ffffff50, in_stack_ffffff54, in_stack_ffffff58, in_stack_ffffff5c,
			    in_stack_ffffff60, in_stack_ffffff64);
		}
		strcat(local_98, &DAT_101282d4);
	}
	AddSText(0x28, l, 0, local_98, iclr, 0);
	if ((x->_iMagical == '\x02') && (x->_iIdentified != 0)) {
		AddSText(0x28, l + 1, 0, *(char **)(iVar2 + -0x56ec), iclr, 0);
	}
	return;
}

void StoreAutoPlace(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	longlong lVar4;
	int *piVar5;
	int *piVar6;
	PlayerStruct *pPVar7;
	int ii;
	int ii_00;
	longlong lVar8;

	lVar4 = 0x100f8fd0;
	SetICursor(*(int *)((int)plr + myplr * 0x55ec + 0x5494) + 0xc);
	ii = (int)lVar4;
	iVar3 = 0;
	ii_00 = **(int **)(ii + -0x7648);
	iVar1 = **(int **)(ii + -0x764c);
	if ((ii_00 == 1) && (iVar1 == 1)) {
		iVar2 = myplr * 0x55ec;
		pPVar7 = (PlayerStruct *)((int)plr + iVar2);
		if ((*(int *)((int)plr + iVar2 + 0x5538) != 0) && (*(int *)(ii + *(int *)((int)plr + iVar2 + 0x553c) * 0x4c + 0x3898) != 0)) {
			ii = 0;
			while ((ii < 8 && (iVar3 == 0))) {
				if (pPVar7->SpdList[0]._iPLGetHit == -1) {
					lVar8 = 0x2e;
					piVar5 = (int *)((int)plr + iVar2 + 0x53cc);
					piVar6 = &pPVar7->SpdList[0]._iPLMR;
					do {
						iVar3 = piVar5[3];
						piVar6[2] = piVar5[2];
						piVar6[3] = iVar3;
						lVar8 = lVar8 + -1;
						piVar5 = piVar5 + 2;
						piVar6 = piVar6 + 2;
					} while (lVar8 != 0);
					iVar3 = 1;
				}
				pPVar7 = (PlayerStruct *)&pPVar7->_pDexterity;
				ii = ii + 1;
			}
		}
		ii = 0x1e;
		while ((ii < 0x28 && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, ii, 1, 1, 1);
			ii = ii + 1;
		}
		ii = 0x14;
		while ((ii < 0x1e && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, ii, 1, 1, 1);
			ii = ii + 1;
		}
		ii = 10;
		while ((ii < 0x14 && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, ii, 1, 1, 1);
			ii = ii + 1;
		}
		ii = 0;
		while ((ii < 10 && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, ii, 1, 1, 1);
			ii = ii + 1;
		}
	}
	if ((ii_00 == 1) && (iVar1 == 2)) {
		ii = 0x1d;
		while ((0x13 < ii && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, ii, 1, 2, 1);
			ii = ii + -1;
		}
		ii = 9;
		while ((-1 < ii && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, ii, 1, 2, 1);
			ii = ii + -1;
		}
		ii = 0x13;
		while ((9 < ii && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, ii, 1, 2, 1);
			ii = ii + -1;
		}
	}
	if ((ii_00 == 1) && (iVar1 == 3)) {
		ii = 0;
		while ((ii < 0x14 && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, ii, 1, 3, 1);
			ii = ii + 1;
		}
	}
	if ((ii_00 == 2) && (iVar1 == 2)) {
		ii = 0;
		lVar4 = lVar4 + 0x35c4;
		while ((ii < 10 && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, *(int *)lVar4, 2, 2, 1);
			ii = ii + 1;
			lVar4 = lVar4 + 4;
		}
		ii = 0x15;
		while ((ii < 0x1d && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, ii, 2, 2, 1);
			ii = ii + 2;
		}
		ii = 1;
		while ((ii < 9 && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, ii, 2, 2, 1);
			ii = ii + 2;
		}
		ii = 10;
		while ((ii < 0x13 && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, ii, 2, 2, 1);
			ii = ii + 1;
		}
	}
	if ((ii_00 == 2) && (iVar1 == 3)) {
		ii_00 = 0;
		while ((ii_00 < 9 && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, ii_00, 2, 3, 1);
			ii_00 = ii_00 + 1;
		}
		ii_00 = 10;
		while ((ii_00 < 0x13 && (iVar3 == 0))) {
			iVar3 = AutoPlace(myplr, ii_00, 2, 3, 1);
			ii_00 = ii_00 + 1;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_StartSmith(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	DAT_101ab4ac = 0;
	_DAT_101ab494 = 0;
	AddSText(0, 1, 1, "Welcome to the", '\x03', 0);
	AddSText(0, 3, 1, *(char **)(iVar1 + -0x56f4), '\x03', 0);
	AddSText(0, 7, 1, *(char **)(iVar1 + -0x56f8), '\x03', 0);
	AddSText(0, 10, 1, *(char **)(iVar1 + -0x56fc), '\x01', 1);
	AddSText(0, 0xc, 1, *(char **)(iVar1 + -0x5700), '\0', 1);
	AddSText(0, 0xe, 1, *(char **)(iVar1 + -0x5704), '\0', 1);
	AddSText(0, 0x10, 1, *(char **)(iVar1 + -0x5708), '\0', 1);
	AddSText(0, 0x12, 1, *(char **)(iVar1 + -0x570c), '\0', 1);
	AddSText(0, 0x14, 1, *(char **)(iVar1 + -0x5710), '\0', 1);
	AddSLine(5);
	**(undefined4 **)(iVar1 + -0x6f10) = 0x14;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_ScrollSBuy(int idx)

{
	undefined8 uVar1;
	bool clr;
	int y;
	ItemStruct *x;

	uVar1 = 0x100f8fd0;
	ClearSText(5, 0x15);
	x = (ItemStruct *)(*(int *)((int)uVar1 + -0x71a4) + idx * 0x170);
	**(undefined4 **)((int)uVar1 + -0x6f18) = 5;
	y = 5;
	do {
		if (x->_itype != -1) {
			clr = x->_iMagical != '\0';
			if (x->_iStatFlag == 0) {
				clr = true;
			}
			if (x->_iMagical == '\0') {
				AddSText(0x14, y, 0, x->_iName, clr, 1);
			} else {
				AddSText(0x14, y, 0, x->_iIName, clr, 1);
			}
			AddSTextVal(y, x->_iIvalue);
			PrintStoreItem(x, y + 1, clr);
			x = x + 1;
			_DAT_101ab484 = y;
		}
		y = y + 4;
	} while (y < 0x14);
	if ((*(int *)(*(int *)((int)uVar1 + -0x6efc) + stextsel * 0x9c + 0x94) == 0) && (stextsel != 0x16)) {
		stextsel = _DAT_101ab484;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void S_StartSBuy(void)

{
	int iVar1;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	iVar1 = 0x100f8fd0;
	DAT_101ab4ac = 1;
	_DAT_101ab494 = 1;
	_stextsval = 0;
	wsprintf((int)&DAT_101282d4, "I have these items for sale :           Your gold : %i",
	    *(undefined4 *)((int)plr + myplr * 0x55ec + 0x1c8), in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
	AddSLine(3);
	AddSLine(0x15);
	S_ScrollSBuy(_stextsval);
	AddSText(0, 0x16, 1, *(char **)(iVar1 + -0x5718), '\0', 0);
	OffsetSTextY(0x16, 6);
	_storenumh = 0;
	iVar1 = *(int *)(iVar1 + -0x71a4);
	while (*(int *)(iVar1 + 8) != -1) {
		iVar1 = iVar1 + 0x170;
		_storenumh = _storenumh + 1;
	}
	_stextsmax = _storenumh + -4;
	if (_stextsmax < 0) {
		_stextsmax = 0;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_ScrollSPBuy(int idx)

{
	undefined8 uVar1;
	undefined *puVar2;
	int iVar3;
	bool clr;
	int y;
	ItemStruct *x;

	uVar1 = 0x100f8fd0;
	puVar2 = &DAT_101a8080;
	ClearSText(5, 0x15);
	**(undefined4 **)((int)uVar1 + -0x6f18) = 5;
	iVar3 = 0;
	while (idx != 0) {
		if (*(int *)(puVar2 + 8) != -1) {
			idx = idx + -1;
		}
		puVar2 = puVar2 + 0x170;
		iVar3 = iVar3 + 1;
	}
	x = (ItemStruct *)(&DAT_101a8080 + iVar3 * 0x170);
	y = 5;
	while ((y < 0x14 && (iVar3 < 6))) {
		if (x->_itype == -1) {
			if (iVar3 < 6) {
				y = y + -4;
			}
		} else {
			clr = x->_iMagical != '\0';
			if (x->_iStatFlag == 0) {
				clr = true;
			}
			AddSText(0x14, y, 0, x->_iIName, clr, 1);
			AddSTextVal(y, x->_iIvalue);
			PrintStoreItem(x, y + 1, clr);
			_DAT_101ab484 = y;
		}
		x = x + 1;
		iVar3 = iVar3 + 1;
		y = y + 4;
	}
	if ((*(int *)(*(int *)((int)uVar1 + -0x6efc) + stextsel * 0x9c + 0x94) == 0) && (stextsel != 0x16)) {
		stextsel = _DAT_101ab484;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

BOOL S_StartSPBuy(void)

{
	int iVar1;
	int iVar2;
	BOOL BVar3;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	iVar2 = 0x100f8fd0;
	iVar1 = 0x100f8fd0;
	_storenumh = (uint)(iRam101a8088 != -1);
	if (iRam101a81f8 != -1) {
		_storenumh = _storenumh + 1;
	}
	if (iRam101a8368 != -1) {
		_storenumh = _storenumh + 1;
	}
	if (iRam101a84d8 != -1) {
		_storenumh = _storenumh + 1;
	}
	if (iRam101a8648 != -1) {
		_storenumh = _storenumh + 1;
	}
	if (iRam101a87b8 != -1) {
		_storenumh = _storenumh + 1;
	}
	if (_storenumh == 0) {
		StartStore('\x01');
		BVar3 = 0;
		**(undefined4 **)(iVar1 + -0x6f00) = 0xe;
	} else {
		DAT_101ab4ac = 1;
		_DAT_101ab494 = 1;
		_stextsval = 0;
		wsprintf((int)&DAT_101282d4, "I have these premium items for sale :   Your gold : %i",
		    *(undefined4 *)((int)plr + myplr * 0x55ec + 0x1c8), plr, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
		    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
		    in_stack_ffffffe4);
		AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
		AddSLine(3);
		AddSLine(0x15);
		AddSText(0, 0x16, 1, *(char **)(iVar2 + -0x5718), '\0', 0);
		OffsetSTextY(0x16, 6);
		_stextsmax = _storenumh - 4;
		if (_stextsmax < 0) {
			_stextsmax = 0;
		}
		S_ScrollSPBuy(_stextsval);
		BVar3 = 1;
	}
	return BVar3;
}

BOOL SmithSellOk(int i)

{
	int iVar1;
	int iVar2;

	iVar2 = (int)plr + i * 0x170 + myplr * 0x55ec;
	iVar1 = *(int *)(iVar2 + 0xeb0);
	if (iVar1 == -1) {
		return 0;
	}
	if (iVar1 == 0) {
		return 0;
	}
	if (iVar1 == 0xb) {
		return 0;
	}
	if (iVar1 == 0xe) {
		return 0;
	}
	if (iVar1 == 10) {
		return 0;
	}
	if (*(int *)(iVar2 + 0x1010) == 0x21) {
		return 0;
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_ScrollSSell(int idx)

{
	int y;
	int val;
	bool clr;
	ItemStruct *x;

	y = 0x100f8fd0;
	ClearSText(5, 0x15);
	x = (ItemStruct *)(*(int *)(y + -0x6f24) + idx * 0x170);
	**(undefined4 **)(y + -0x6f18) = 5;
	y = 5;
	while ((y < 0x14 && (idx < _storenumh))) {
		if (x->_itype != -1) {
			clr = x->_iMagical != '\0';
			if (x->_iStatFlag == 0) {
				clr = true;
			}
			if ((x->_iMagical == '\0') || (x->_iIdentified == 0)) {
				AddSText(0x14, y, 0, x->_iName, clr, 1);
				val = x->_ivalue;
			} else {
				AddSText(0x14, y, 0, x->_iIName, clr, 1);
				val = x->_iIvalue;
			}
			AddSTextVal(y, val);
			PrintStoreItem(x, y + 1, clr);
			_DAT_101ab484 = y;
		}
		x = x + 1;
		idx = idx + 1;
		y = y + 4;
	}
	_stextsmax = _storenumh + -4;
	if (_stextsmax < 0) {
		_stextsmax = 0;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void S_StartSSell(void)

{
	undefined4 uVar1;
	bool bVar2;
	uint uVar3;
	undefined8 uVar4;
	BOOL BVar5;
	int iVar6;
	undefined4 *puVar7;
	longlong in_r6;
	longlong in_r7;
	undefined8 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar8;
	int iVar9;
	longlong lVar10;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	uVar4 = 0x100f8fd0;
	lVar8 = 0;
	iVar9 = 0;
	bVar2 = false;
	DAT_101ab4ac = 1;
	_storenumh = 0;
	uRam101a008c = 0xffffffff;
	uRam101a01fc = 0xffffffff;
	uRam101a036c = 0xffffffff;
	uRam101a04dc = 0xffffffff;
	uRam101a064c = 0xffffffff;
	uRam101a07bc = 0xffffffff;
	uRam101a092c = 0xffffffff;
	uRam101a0a9c = 0xffffffff;
	uRam101a0c0c = 0xffffffff;
	uRam101a0d7c = 0xffffffff;
	uRam101a0eec = 0xffffffff;
	uRam101a105c = 0xffffffff;
	uRam101a11cc = 0xffffffff;
	uRam101a133c = 0xffffffff;
	uRam101a14ac = 0xffffffff;
	uRam101a161c = 0xffffffff;
	uRam101a178c = 0xffffffff;
	uRam101a18fc = 0xffffffff;
	uRam101a1a6c = 0xffffffff;
	uRam101a1bdc = 0xffffffff;
	uRam101a1d4c = 0xffffffff;
	uRam101a1ebc = 0xffffffff;
	uRam101a202c = 0xffffffff;
	uRam101a219c = 0xffffffff;
	uRam101a230c = 0xffffffff;
	uRam101a247c = 0xffffffff;
	uRam101a25ec = 0xffffffff;
	uRam101a275c = 0xffffffff;
	uRam101a28cc = 0xffffffff;
	uRam101a2a3c = 0xffffffff;
	uRam101a2bac = 0xffffffff;
	uRam101a2d1c = 0xffffffff;
	uRam101a2e8c = 0xffffffff;
	uRam101a2ffc = 0xffffffff;
	uRam101a316c = 0xffffffff;
	uRam101a32dc = 0xffffffff;
	uRam101a344c = 0xffffffff;
	uRam101a35bc = 0xffffffff;
	uRam101a372c = 0xffffffff;
	uRam101a389c = 0xffffffff;
	uRam101a3a0c = 0xffffffff;
	uRam101a3b7c = 0xffffffff;
	uRam101a3cec = 0xffffffff;
	uRam101a3e5c = 0xffffffff;
	uRam101a3fcc = 0xffffffff;
	uRam101a413c = 0xffffffff;
	uRam101a42ac = 0xffffffff;
	uRam101a441c = 0xffffffff;
	while (true) {
		iVar6 = myplr * 0x55ec;
		if (*(int *)((int)plr + iVar6 + 0x4828) <= (int)lVar8)
			break;
		BVar5 = SmithSellOk((int)lVar8);
		uVar3 = _storenumh;
		if (BVar5 != 0) {
			lVar10 = 0x2e;
			in_r7 = ZEXT48(&DAT_101a0084) + (ulonglong)_storenumh * 0x170;
			in_r6 = (ulonglong)_storenumh * 0x170 + 0x101a007c;
			bVar2 = true;
			puVar7 = (undefined4 *)((int)plr + myplr * 0x55ec + iVar9 + 0xea0);
			do {
				uVar1 = puVar7[3];
				in_r6 = in_r6 + 8;
				*(undefined4 *)in_r6 = puVar7[2];
				((undefined4 *)in_r6)[1] = uVar1;
				lVar10 = lVar10 + -1;
				puVar7 = puVar7 + 2;
			} while (lVar10 != 0);
			iVar6 = (int)in_r7;
			if ((*(char *)(iVar6 + 0x3c) != '\0') && (*(int *)(iVar6 + 0x38) != 0)) {
				*(undefined4 *)(iVar6 + 0xc4) = *(undefined4 *)(iVar6 + 200);
			}
			*(int *)(iVar6 + 0xc4) = *(int *)(iVar6 + 0xc4) >> 2;
			if (*(int *)(iVar6 + 0xc4) == 0) {
				*(undefined4 *)(iVar6 + 0xc4) = 1;
			}
			*(undefined4 *)(iVar6 + 200) = *(undefined4 *)(iVar6 + 0xc4);
			(&DAT_101a0054)[uVar3] = (char)lVar8;
			_storenumh = _storenumh + 1;
		}
		iVar9 = iVar9 + 0x170;
		lVar8 = lVar8 + 1;
	}
	iVar9 = (int)uVar4;
	if (bVar2) {
		_DAT_101ab494 = 1;
		_stextsval = 0;
		uVar1 = *(undefined4 *)(iVar9 + -0x5724);
		**(undefined4 **)(iVar9 + -0x6f20) = *(undefined4 *)((int)plr + iVar6 + 0x4828);
		wsprintf((int)&DAT_101282d4, uVar1, *(undefined4 *)((int)plr + iVar6 + 0x1c8),
		    (PlayerStruct *)((int)plr + iVar6), (int)in_r7, (int)in_r8, in_r9, in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
		AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
		AddSLine(3);
		AddSLine(0x15);
		S_ScrollSSell(_stextsval);
		AddSText(0, 0x16, 1, "Back", '\0', 1);
		OffsetSTextY(0x16, 6);
	} else {
		_DAT_101ab494 = 0;
		wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar9 + -0x5720),
		    *(undefined4 *)((int)plr + iVar6 + 0x1c8), (int)in_r6, (int)in_r7, (int)in_r8, in_r9, in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
		    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
		    in_stack_ffffffc4);
		AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
		AddSLine(3);
		AddSLine(0x15);
		AddSText(0, 0x16, 1, "Back", '\0', 1);
		OffsetSTextY(0x16, 6);
	}
	return;
}

BOOL SmithRepairOk(int i)

{
	int iVar1;
	int iVar2;

	iVar2 = (int)plr + i * 0x170 + myplr * 0x55ec;
	iVar1 = *(int *)(iVar2 + 0xeb0);
	if (iVar1 == -1) {
		return 0;
	}
	if (iVar1 == 0) {
		return 0;
	}
	if (iVar1 == 0xb) {
		return 0;
	}
	if (iVar1 == 0xe) {
		return 0;
	}
	if (*(int *)(iVar2 + 0xf94) == *(int *)(iVar2 + 0xf98)) {
		return 0;
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddStoreHoldRepair(ItemStruct *itm, int i)

{
	uint uVar1;
	undefined *puVar2;
	int iVar3;
	int iVar4;
	int *piVar5;
	int *piVar6;
	longlong lVar7;

	lVar7 = 0x2e;
	iVar3 = _storenumh * 0x170;
	piVar5 = &itm->_iPLMR;
	piVar6 = (int *)(iVar3 + 0x101a007c);
	do {
		iVar4 = piVar5[3];
		piVar6[2] = piVar5[2];
		piVar6[3] = iVar4;
		lVar7 = lVar7 + -1;
		piVar5 = piVar5 + 2;
		piVar6 = piVar6 + 2;
	} while (lVar7 != 0);
	if (*(char *)(iVar3 + 0x101a00c0) != '\0') {
		if (*(int *)(iVar3 + 0x101a00bc) != 0) {
			iVar4 = *(int *)(iVar3 + 0x101a014c) * 0x1e;
			uVar1 = iVar4 / 100 + (iVar4 >> 0x1f);
			*(int *)(iVar3 + 0x101a0148) = uVar1 + (uVar1 >> 0x1f);
		}
	}
	iVar4 = (((*(int *)(iVar3 + 0x101a0174) - *(int *)(iVar3 + 0x101a0170)) * 100) / *(int *)(iVar3 + 0x101a0174)) * *(int *)(iVar3 + 0x101a0148);
	uVar1 = iVar4 / 100 + (iVar4 >> 0x1f);
	lVar7 = ((longlong)(int)((ulonglong)((longlong)iVar4 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U
	            | (ulonglong)uVar1)
	    + (ulonglong)(uVar1 >> 0x1f);
	iVar4 = (int)lVar7;
	if (lVar7 == 0) {
		if ((*(char *)(iVar3 + 0x101a00c0) != '\0') && (*(int *)(iVar3 + 0x101a00bc) != 0)) {
			return;
		}
		iVar4 = 1;
	}
	if (1 < iVar4) {
		iVar4 = iVar4 >> 1;
	}
	*(int *)(iVar3 + 0x101a014c) = iVar4;
	*(int *)(iVar3 + 0x101a0148) = iVar4;
	puVar2 = &DAT_101a0054 + _storenumh;
	_storenumh = _storenumh + 1;
	*puVar2 = (char)i;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void S_StartSRepair(void)

{
	undefined4 uVar1;
	bool bVar2;
	undefined8 uVar3;
	BOOL BVar4;
	int iVar5;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined8 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int i;
	int iVar6;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	uVar3 = 0x100f8fd0;
	bVar2 = false;
	DAT_101ab4ac = 1;
	_storenumh = 0;
	uRam101a008c = 0xffffffff;
	uRam101a01fc = 0xffffffff;
	uRam101a036c = 0xffffffff;
	uRam101a04dc = 0xffffffff;
	uRam101a064c = 0xffffffff;
	uRam101a07bc = 0xffffffff;
	uRam101a092c = 0xffffffff;
	uRam101a0a9c = 0xffffffff;
	uRam101a0c0c = 0xffffffff;
	uRam101a0d7c = 0xffffffff;
	uRam101a0eec = 0xffffffff;
	uRam101a105c = 0xffffffff;
	uRam101a11cc = 0xffffffff;
	uRam101a133c = 0xffffffff;
	uRam101a14ac = 0xffffffff;
	uRam101a161c = 0xffffffff;
	uRam101a178c = 0xffffffff;
	uRam101a18fc = 0xffffffff;
	uRam101a1a6c = 0xffffffff;
	uRam101a1bdc = 0xffffffff;
	uRam101a1d4c = 0xffffffff;
	uRam101a1ebc = 0xffffffff;
	uRam101a202c = 0xffffffff;
	uRam101a219c = 0xffffffff;
	uRam101a230c = 0xffffffff;
	uRam101a247c = 0xffffffff;
	uRam101a25ec = 0xffffffff;
	uRam101a275c = 0xffffffff;
	uRam101a28cc = 0xffffffff;
	uRam101a2a3c = 0xffffffff;
	uRam101a2bac = 0xffffffff;
	uRam101a2d1c = 0xffffffff;
	uRam101a2e8c = 0xffffffff;
	uRam101a2ffc = 0xffffffff;
	uRam101a316c = 0xffffffff;
	uRam101a32dc = 0xffffffff;
	uRam101a344c = 0xffffffff;
	uRam101a35bc = 0xffffffff;
	uRam101a372c = 0xffffffff;
	uRam101a389c = 0xffffffff;
	uRam101a3a0c = 0xffffffff;
	uRam101a3b7c = 0xffffffff;
	uRam101a3cec = 0xffffffff;
	uRam101a3e5c = 0xffffffff;
	uRam101a3fcc = 0xffffffff;
	uRam101a413c = 0xffffffff;
	uRam101a42ac = 0xffffffff;
	uRam101a441c = 0xffffffff;
	i = myplr * 0x55ec;
	if ((*(int *)((int)plr + i + 0x4a0) != -1) && (*(int *)((int)plr + i + 0x584) != *(int *)((int)plr + i + 0x588))) {
		bVar2 = true;
		AddStoreHoldRepair((ItemStruct *)((int)plr + i + 0x498), -1);
	}
	i = myplr * 0x55ec;
	if ((*(int *)((int)plr + i + 0xd40) != -1) && (*(int *)((int)plr + i + 0xe24) != *(int *)((int)plr + i + 0xe28))) {
		bVar2 = true;
		AddStoreHoldRepair((ItemStruct *)((int)plr + i + 0xd38), -2);
	}
	i = myplr * 0x55ec;
	if ((*(int *)((int)plr + i + 0xa60) != -1) && (*(int *)((int)plr + i + 0xb44) != *(int *)((int)plr + i + 0xb48))) {
		bVar2 = true;
		AddStoreHoldRepair((ItemStruct *)((int)plr + i + 0xa58), -3);
	}
	i = myplr * 0x55ec;
	if ((*(int *)((int)plr + i + 0xbd0) != -1) && (*(int *)((int)plr + i + 0xcb4) != *(int *)((int)plr + i + 0xcb8))) {
		bVar2 = true;
		AddStoreHoldRepair((ItemStruct *)((int)plr + i + 0xbc8), -4);
	}
	i = 0;
	iVar6 = 0;
	while (iVar5 = myplr * 0x55ec, i < *(int *)((int)plr + iVar5 + 0x4828)) {
		BVar4 = SmithRepairOk(i);
		if (BVar4 != 0) {
			bVar2 = true;
			AddStoreHoldRepair((ItemStruct *)((int)plr + myplr * 0x55ec + iVar6 + 0xea8), i);
		}
		iVar6 = iVar6 + 0x170;
		i = i + 1;
	}
	i = (int)uVar3;
	if (bVar2) {
		_DAT_101ab494 = 1;
		_stextsval = 0;
		uVar1 = *(undefined4 *)(i + -0x572c);
		**(undefined4 **)(i + -0x6f20) = *(undefined4 *)((int)plr + iVar5 + 0x4828);
		wsprintf((int)&DAT_101282d4, uVar1, *(undefined4 *)((int)plr + iVar5 + 0x1c8),
		    (PlayerStruct *)((int)plr + iVar5), (int)in_r7, (int)in_r8, in_r9, in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4,
		    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
		AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
		AddSLine(3);
		AddSLine(0x15);
		S_ScrollSSell(_stextsval);
		AddSText(0, 0x16, 1, "Back", '\0', 1);
		OffsetSTextY(0x16, 6);
	} else {
		_DAT_101ab494 = 0;
		wsprintf((int)&DAT_101282d4, *(undefined4 *)(i + -0x5728),
		    *(undefined4 *)((int)plr + iVar5 + 0x1c8), (int)in_r6, (int)in_r7, (int)in_r8, in_r9, in_r10, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
		    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
		    in_stack_ffffffc4);
		AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
		AddSLine(3);
		AddSLine(0x15);
		AddSText(0, 0x16, 1, "Back", '\0', 1);
		OffsetSTextY(0x16, 6);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_StartWitch(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	DAT_101ab4ac = 0;
	_DAT_101ab494 = 0;
	AddSText(0, 2, 1, "Witch\'s shack", '\x03', 0);
	AddSText(0, 9, 1, *(char **)(iVar1 + -0x56f8), '\x03', 0);
	AddSText(0, 0xc, 1, *(char **)(iVar1 + -0x5734), '\x01', 1);
	AddSText(0, 0xe, 1, *(char **)(iVar1 + -0x5738), '\0', 1);
	AddSText(0, 0x10, 1, *(char **)(iVar1 + -0x5708), '\0', 1);
	AddSText(0, 0x12, 1, *(char **)(iVar1 + -0x573c), '\0', 1);
	AddSText(0, 0x14, 1, *(char **)(iVar1 + -0x5740), '\0', 1);
	AddSLine(5);
	**(undefined4 **)(iVar1 + -0x6f10) = 0x14;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_ScrollWBuy(int idx)

{
	undefined8 uVar1;
	bool clr;
	int y;
	ItemStruct *x;

	uVar1 = 0x100f8fd0;
	ClearSText(5, 0x15);
	x = (ItemStruct *)(*(int *)((int)uVar1 + -0x7178) + idx * 0x170);
	**(undefined4 **)((int)uVar1 + -0x6f18) = 5;
	y = 5;
	do {
		if (x->_itype != -1) {
			clr = x->_iMagical != '\0';
			if (x->_iStatFlag == 0) {
				clr = true;
			}
			if (x->_iMagical == '\0') {
				AddSText(0x14, y, 0, x->_iName, clr, 1);
			} else {
				AddSText(0x14, y, 0, x->_iIName, clr, 1);
			}
			AddSTextVal(y, x->_iIvalue);
			PrintStoreItem(x, y + 1, clr);
			x = x + 1;
			_DAT_101ab484 = y;
		}
		y = y + 4;
	} while (y < 0x14);
	if ((*(int *)(*(int *)((int)uVar1 + -0x6efc) + stextsel * 0x9c + 0x94) == 0) && (stextsel != 0x16)) {
		stextsel = _DAT_101ab484;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void S_StartWBuy(void)

{
	int iVar1;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	iVar1 = 0x100f8fd0;
	DAT_101ab4ac = 1;
	_DAT_101ab494 = 1;
	_stextsval = 0;
	_stextsmax = 0x14;
	wsprintf((int)&DAT_101282d4, "I have these items for sale :           Your gold : %i",
	    *(undefined4 *)((int)plr + myplr * 0x55ec + 0x1c8), in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
	AddSLine(3);
	AddSLine(0x15);
	S_ScrollWBuy(_stextsval);
	AddSText(0, 0x16, 1, *(char **)(iVar1 + -0x5718), '\0', 0);
	OffsetSTextY(0x16, 6);
	_storenumh = 0;
	iVar1 = *(int *)(iVar1 + -0x7178);
	while (*(int *)(iVar1 + 8) != -1) {
		iVar1 = iVar1 + 0x170;
		_storenumh = _storenumh + 1;
	}
	_stextsmax = _storenumh + -4;
	if (_stextsmax < 0) {
		_stextsmax = 0;
	}
	return;
}

BOOL WitchSellOk(int i)

{
	int iVar1;
	uint uVar2;

	if (i < 0) {
		iVar1 = myplr * 0x55ec + (i + 1) * -0x170 + 0x4854;
	} else {
		iVar1 = myplr * 0x55ec + i * 0x170 + 0xea8;
	}
	uVar2 = (uint)(*(int *)(plr[0].walkpath + iVar1 + 4) == 0);
	if (*(int *)(plr[0].walkpath + iVar1 + 4) == 10) {
		uVar2 = 1;
	}
	iVar1 = *(int *)((int)&plr[0]._pMagic + iVar1);
	if ((5 < iVar1) && (iVar1 < 0x17)) {
		uVar2 = 0;
	}
	if (iVar1 == 0x21) {
		uVar2 = 0;
	}
	return (BOOL)uVar2;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void S_StartWSell(void)

{
	undefined4 uVar1;
	bool bVar2;
	int iVar3;
	uint uVar4;
	undefined8 uVar5;
	BOOL BVar6;
	undefined4 *puVar7;
	longlong in_r6;
	longlong in_r7;
	undefined8 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar8;
	int iVar10;
	longlong lVar9;
	longlong lVar11;
	undefined4 in_stack_ffffff88;
	undefined in_stack_ffffff8f;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	undefined4 in_stack_ffffffa8;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;

	uVar5 = 0x100f8fd0;
	lVar8 = 0;
	iVar10 = 0;
	bVar2 = false;
	DAT_101ab4ac = 1;
	_storenumh = 0;
	uRam101a008c = 0xffffffff;
	uRam101a01fc = 0xffffffff;
	uRam101a036c = 0xffffffff;
	uRam101a04dc = 0xffffffff;
	uRam101a064c = 0xffffffff;
	uRam101a07bc = 0xffffffff;
	uRam101a092c = 0xffffffff;
	uRam101a0a9c = 0xffffffff;
	uRam101a0c0c = 0xffffffff;
	uRam101a0d7c = 0xffffffff;
	uRam101a0eec = 0xffffffff;
	uRam101a105c = 0xffffffff;
	uRam101a11cc = 0xffffffff;
	uRam101a133c = 0xffffffff;
	uRam101a14ac = 0xffffffff;
	uRam101a161c = 0xffffffff;
	uRam101a178c = 0xffffffff;
	uRam101a18fc = 0xffffffff;
	uRam101a1a6c = 0xffffffff;
	uRam101a1bdc = 0xffffffff;
	uRam101a1d4c = 0xffffffff;
	uRam101a1ebc = 0xffffffff;
	uRam101a202c = 0xffffffff;
	uRam101a219c = 0xffffffff;
	uRam101a230c = 0xffffffff;
	uRam101a247c = 0xffffffff;
	uRam101a25ec = 0xffffffff;
	uRam101a275c = 0xffffffff;
	uRam101a28cc = 0xffffffff;
	uRam101a2a3c = 0xffffffff;
	uRam101a2bac = 0xffffffff;
	uRam101a2d1c = 0xffffffff;
	uRam101a2e8c = 0xffffffff;
	uRam101a2ffc = 0xffffffff;
	uRam101a316c = 0xffffffff;
	uRam101a32dc = 0xffffffff;
	uRam101a344c = 0xffffffff;
	uRam101a35bc = 0xffffffff;
	uRam101a372c = 0xffffffff;
	uRam101a389c = 0xffffffff;
	uRam101a3a0c = 0xffffffff;
	uRam101a3b7c = 0xffffffff;
	uRam101a3cec = 0xffffffff;
	uRam101a3e5c = 0xffffffff;
	uRam101a3fcc = 0xffffffff;
	uRam101a413c = 0xffffffff;
	uRam101a42ac = 0xffffffff;
	uRam101a441c = 0xffffffff;
	while ((int)lVar8 < *(int *)((int)plr + myplr * 0x55ec + 0x4828)) {
		BVar6 = WitchSellOk((int)lVar8);
		uVar4 = _storenumh;
		if (BVar6 != 0) {
			lVar9 = 0x2e;
			in_r7 = ZEXT48(&DAT_101a0084) + (ulonglong)_storenumh * 0x170;
			in_r6 = (ulonglong)_storenumh * 0x170 + 0x101a007c;
			bVar2 = true;
			puVar7 = (undefined4 *)((int)plr + myplr * 0x55ec + iVar10 + 0xea0);
			do {
				uVar1 = puVar7[3];
				in_r6 = in_r6 + 8;
				*(undefined4 *)in_r6 = puVar7[2];
				((undefined4 *)in_r6)[1] = uVar1;
				lVar9 = lVar9 + -1;
				puVar7 = puVar7 + 2;
			} while (lVar9 != 0);
			iVar3 = (int)in_r7;
			if ((*(char *)(iVar3 + 0x3c) != '\0') && (*(int *)(iVar3 + 0x38) != 0)) {
				*(undefined4 *)(iVar3 + 0xc4) = *(undefined4 *)(iVar3 + 200);
			}
			*(int *)(iVar3 + 0xc4) = *(int *)(iVar3 + 0xc4) >> 2;
			if (*(int *)(iVar3 + 0xc4) == 0) {
				*(undefined4 *)(iVar3 + 0xc4) = 1;
			}
			*(undefined4 *)(iVar3 + 200) = *(undefined4 *)(iVar3 + 0xc4);
			(&DAT_101a0054)[uVar4] = (char)lVar8;
			_storenumh = _storenumh + 1;
		}
		iVar10 = iVar10 + 0x170;
		lVar8 = lVar8 + 1;
	}
	lVar8 = 0;
	lVar9 = 0;
	do {
		if (*(int *)((int)plr + myplr * 0x55ec + (int)lVar9 + 0x485c) != -1) {
			BVar6 = WitchSellOk((int)-(lVar8 + 1));
			uVar4 = _storenumh;
			if (BVar6 != 0) {
				lVar11 = 0x2e;
				iVar10 = (int)((ulonglong)_storenumh * 0x170);
				in_r7 = (ulonglong)_storenumh * 0x170 + 0x101a007c;
				in_r6 = (ulonglong)(uint)myplr * 0x55ec + lVar9 + 0x1018b70c;
				bVar2 = true;
				do {
					in_r6 = in_r6 + 8;
					uVar1 = ((undefined4 *)in_r6)[1];
					in_r7 = in_r7 + 8;
					*(undefined4 *)in_r7 = *(undefined4 *)in_r6;
					((undefined4 *)in_r7)[1] = uVar1;
					lVar11 = lVar11 + -1;
				} while (lVar11 != 0);
				if ((*(char *)(iVar10 + 0x101a00c0) != '\0') && (*(int *)(iVar10 + 0x101a00bc) != 0)) {
					*(undefined4 *)(iVar10 + 0x101a0148) = *(undefined4 *)(iVar10 + 0x101a014c);
				}
				*(int *)(iVar10 + 0x101a0148) = *(int *)(iVar10 + 0x101a0148) >> 2;
				if (*(int *)(iVar10 + 0x101a0148) == 0) {
					*(undefined4 *)(iVar10 + 0x101a0148) = 1;
				}
				*(undefined4 *)(iVar10 + 0x101a014c) = *(undefined4 *)(iVar10 + 0x101a0148);
				(&DAT_101a0054)[uVar4] = (char)-(lVar8 + 1);
				_storenumh = _storenumh + 1;
			}
		}
		lVar8 = lVar8 + 1;
		lVar9 = lVar9 + 0x170;
	} while ((int)lVar8 < 8);
	iVar10 = (int)uVar5;
	if (bVar2) {
		_DAT_101ab494 = 1;
		uVar1 = *(undefined4 *)(iVar10 + -0x5724);
		_stextsval = 0;
		iVar3 = myplr * 0x55ec;
		**(undefined4 **)(iVar10 + -0x6f20) = *(undefined4 *)((int)plr + iVar3 + 0x4828);
		wsprintf((int)&DAT_101282d4, uVar1, *(undefined4 *)((int)plr + iVar3 + 0x1c8),
		    (PlayerStruct *)((int)plr + iVar3), (int)in_r7, (int)in_r8, in_r9, in_r10, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4,
		    in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4);
		AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
		AddSLine(3);
		AddSLine(0x15);
		S_ScrollSSell(_stextsval);
		AddSText(0, 0x16, 1, "Back", '\0', 1);
		OffsetSTextY(0x16, 6);
	} else {
		_DAT_101ab494 = 0;
		wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar10 + -0x5720),
		    *(undefined4 *)((int)plr + myplr * 0x55ec + 0x1c8), (int)in_r6, (int)in_r7, (int)in_r8,
		    in_r9, in_r10, in_stack_ffffff88, in_stack_ffffff8f, in_stack_ffffff9c, in_stack_ffffffa0,
		    in_stack_ffffffa4, in_stack_ffffffa8, in_stack_ffffffac, in_stack_ffffffb0,
		    in_stack_ffffffb4);
		AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
		AddSLine(3);
		AddSLine(0x15);
		AddSText(0, 0x16, 1, "Back", '\0', 1);
		OffsetSTextY(0x16, 6);
	}
	return;
}

BOOL WitchRechargeOk(int i)

{
	int iVar1;

	iVar1 = (int)plr + i * 0x170 + myplr * 0x55ec;
	if (*(int *)(iVar1 + 0xeb0) != 10) {
		return 0;
	}
	if (*(int *)(iVar1 + 0xf8c) == *(int *)(iVar1 + 0xf90)) {
		return 0;
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddStoreHoldRecharge(ItemStruct itm, int i)

{
	undefined4 uVar1;
	uint uVar2;
	int iVar3;
	undefined4 *puVar4;
	int iVar5;
	int iVar6;
	undefined4 *puVar7;
	longlong lVar8;
	undefined in_stack_0000018b;

	iVar3 = _storenumh;
	lVar8 = 0x2e;
	iVar6 = _storenumh * 0x170;
	puVar7 = (undefined4 *)(&itm + 8);
	puVar4 = (undefined4 *)(iVar6 + 0x101a007c);
	do {
		uVar1 = puVar7[3];
		puVar4[2] = puVar7[2];
		puVar4[3] = uVar1;
		lVar8 = lVar8 + -1;
		puVar7 = puVar7 + 2;
		puVar4 = puVar4 + 2;
	} while (lVar8 != 0);
	*(int *)(iVar6 + 0x101a0148) = *(int *)(iVar6 + 0x101a0148) + *(int *)(itm._iMaxDur * 0x38 + 0x1010efd4);
	iVar5 = (((*(int *)(iVar6 + 0x101a016c) - *(int *)(iVar6 + 0x101a0168)) * 100) / *(int *)(iVar6 + 0x101a016c)) * *(int *)(iVar6 + 0x101a0148);
	uVar2 = iVar5 / 100 + (iVar5 >> 0x1f);
	*(int *)(iVar6 + 0x101a0148) = (int)(uVar2 + (uVar2 >> 0x1f)) >> 1;
	*(undefined4 *)(iVar6 + 0x101a014c) = *(undefined4 *)(iVar6 + 0x101a0148);
	(&DAT_101a0054)[iVar3] = in_stack_0000018b;
	_storenumh = _storenumh + 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void S_StartWRecharge(void)

{
	undefined4 uVar1;
	bool bVar2;
	int i;
	undefined8 uVar3;
	BOOL BVar4;
	int iVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	ulonglong in_r6;
	ulonglong in_r7;
	ulonglong in_r8;
	ulonglong in_r9;
	ulonglong in_r10;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	int iVar8;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar9;
	undefined4 in_stack_fffffe48;
	undefined4 in_stack_fffffe4c;
	undefined8 in_stack_fffffe50;
	int local_1a8;
	undefined4 local_1a4;
	undefined4 local_1a0;
	uint local_19c;
	uint local_198;
	uint local_194;
	uint local_190;
	uint local_18c;
	undefined in_stack_fffffe78[320];
	int local_38;
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar3 = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	bVar2 = false;
	DAT_101ab4ac = 1;
	_storenumh = 0;
	uRam101a008c = 0xffffffff;
	uRam101a01fc = 0xffffffff;
	uRam101a036c = 0xffffffff;
	uRam101a04dc = 0xffffffff;
	uRam101a064c = 0xffffffff;
	uRam101a07bc = 0xffffffff;
	uRam101a092c = 0xffffffff;
	uRam101a0a9c = 0xffffffff;
	uRam101a0c0c = 0xffffffff;
	uRam101a0d7c = 0xffffffff;
	uRam101a0eec = 0xffffffff;
	uRam101a105c = 0xffffffff;
	uRam101a11cc = 0xffffffff;
	uRam101a133c = 0xffffffff;
	uRam101a14ac = 0xffffffff;
	uRam101a161c = 0xffffffff;
	uRam101a178c = 0xffffffff;
	uRam101a18fc = 0xffffffff;
	uRam101a1a6c = 0xffffffff;
	uRam101a1bdc = 0xffffffff;
	uRam101a1d4c = 0xffffffff;
	uRam101a1ebc = 0xffffffff;
	uRam101a202c = 0xffffffff;
	uRam101a219c = 0xffffffff;
	uRam101a230c = 0xffffffff;
	uRam101a247c = 0xffffffff;
	uRam101a25ec = 0xffffffff;
	uRam101a275c = 0xffffffff;
	uRam101a28cc = 0xffffffff;
	uRam101a2a3c = 0xffffffff;
	uRam101a2bac = 0xffffffff;
	uRam101a2d1c = 0xffffffff;
	uRam101a2e8c = 0xffffffff;
	uRam101a2ffc = 0xffffffff;
	uRam101a316c = 0xffffffff;
	uRam101a32dc = 0xffffffff;
	uRam101a344c = 0xffffffff;
	uRam101a35bc = 0xffffffff;
	uRam101a372c = 0xffffffff;
	uRam101a389c = 0xffffffff;
	uRam101a3a0c = 0xffffffff;
	uRam101a3b7c = 0xffffffff;
	uRam101a3cec = 0xffffffff;
	uRam101a3e5c = 0xffffffff;
	uRam101a3fcc = 0xffffffff;
	uRam101a413c = 0xffffffff;
	uRam101a42ac = 0xffffffff;
	uRam101a441c = 0xffffffff;
	i = myplr * 0x55ec;
	if ((*(int *)((int)plr + i + 0xa60) == 10) && (*(int *)((int)plr + i + 0xb3c) != *(int *)((int)plr + i + 0xb40))) {
		lVar9 = 0x2e;
		bVar2 = true;
		puVar7 = (undefined4 *)&stack0xfffffe50;
		puVar6 = (undefined4 *)((int)plr + i + 0xa50);
		do {
			uVar1 = puVar6[3];
			puVar7[2] = puVar6[2];
			puVar7[3] = uVar1;
			lVar9 = lVar9 + -1;
			puVar7 = puVar7 + 2;
			puVar6 = puVar6 + 2;
		} while (lVar9 != 0);
		local_38 = -1;
		in_r6 = (ulonglong)local_19c;
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldRecharge((ItemStruct)
		                         CONCAT48320(CONCAT444(CONCAT404(CONCAT364(CONCAT324(CONCAT284(CONCAT244(CONCAT204(
		                                                                                                     CONCAT164(CONCAT88(CONCAT44(in_stack_fffffe48,
		                                                                                                                            in_stack_fffffe4c),
		                                                                                                                   in_stack_fffffe50),
		                                                                                                         local_1a8),
		                                                                                                     local_1a4),
		                                                                                           local_1a0),
		                                                                                 local_19c),
		                                                                       local_198),
		                                                             local_194),
		                                                   local_190),
		                                         local_18c),
		                             in_stack_fffffe78),
		    local_1a8);
	}
	i = 0;
	iVar8 = 0;
	while (true) {
		iVar5 = myplr * 0x55ec;
		if (*(int *)((int)plr + iVar5 + 0x4828) <= i)
			break;
		BVar4 = WitchRechargeOk(i);
		if (BVar4 != 0) {
			lVar9 = 0x2e;
			bVar2 = true;
			puVar7 = (undefined4 *)&stack0xfffffe50;
			puVar6 = (undefined4 *)((int)plr + myplr * 0x55ec + iVar8 + 0xea0);
			do {
				uVar1 = puVar6[3];
				puVar7[2] = puVar6[2];
				puVar7[3] = uVar1;
				lVar9 = lVar9 + -1;
				puVar7 = puVar7 + 2;
				puVar6 = puVar6 + 2;
			} while (lVar9 != 0);
			in_r6 = (ulonglong)local_19c;
			in_r7 = (ulonglong)local_198;
			in_r8 = (ulonglong)local_194;
			in_r9 = (ulonglong)local_190;
			in_r10 = (ulonglong)local_18c;
			local_38 = i;
			AddStoreHoldRecharge((ItemStruct)
			                         CONCAT48320(CONCAT444(CONCAT404(CONCAT364(CONCAT324(CONCAT284(CONCAT244(CONCAT204(
			                                                                                                     CONCAT164(CONCAT88(CONCAT44(in_stack_fffffe48,
			                                                                                                                            in_stack_fffffe4c),
			                                                                                                                   in_stack_fffffe50),
			                                                                                                         local_1a8),
			                                                                                                     local_1a4),
			                                                                                           local_1a0),
			                                                                                 local_19c),
			                                                                       local_198),
			                                                             local_194),
			                                                   local_190),
			                                         local_18c),
			                             in_stack_fffffe78),
			    local_1a8);
		}
		iVar8 = iVar8 + 0x170;
		i = i + 1;
	}
	i = (int)uVar3;
	if (bVar2) {
		_DAT_101ab494 = 1;
		_stextsval = 0;
		uVar1 = *(undefined4 *)(i + -0x5748);
		**(undefined4 **)(i + -0x6f20) = *(undefined4 *)((int)plr + iVar5 + 0x4828);
		wsprintf((int)&DAT_101282d4, uVar1, *(undefined4 *)((int)plr + iVar5 + 0x1c8),
		    (PlayerStruct *)((int)plr + iVar5), (int)in_r7, (int)in_r8, (int)in_r9, (int)in_r10,
		    in_stack_fffffe48, (char)in_stack_fffffe4c, local_1a4, local_1a0, local_19c, local_198,
		    local_194, local_190, local_18c);
		AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
		AddSLine(3);
		AddSLine(0x15);
		S_ScrollSSell(_stextsval);
		AddSText(0, 0x16, 1, "Back", '\0', 1);
		OffsetSTextY(0x16, 6);
	} else {
		_DAT_101ab494 = 0;
		wsprintf((int)&DAT_101282d4, *(undefined4 *)(i + -0x5744),
		    *(undefined4 *)((int)plr + iVar5 + 0x1c8), (int)in_r6, (int)in_r7, (int)in_r8, (int)in_r9,
		    (int)in_r10, in_stack_fffffe48, (char)in_stack_fffffe4c, local_1a4, local_1a0, local_19c,
		    local_198, local_194, local_190, local_18c);
		AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
		AddSLine(3);
		AddSLine(0x15);
		AddSText(0, 0x16, 1, "Back", '\0', 1);
		OffsetSTextY(0x16, 6);
	}
	return;
}

void S_StartNoMoney(void)

{
	undefined4 *puVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	StartStore((char)stextshold);
	puVar1 = *(undefined4 **)(iVar2 + -0x6ef8);
	**(undefined **)(iVar2 + -0x6ef4) = 1;
	*puVar1 = 0;
	ClearSText(5, 0x17);
	AddSText(0, 0xe, 1, *(char **)(iVar2 + -0x574c), '\0', 1);
	return;
}

void S_StartNoRoom(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	StartStore((char)stextshold);
	**(undefined4 **)(iVar1 + -0x6ef8) = 0;
	ClearSText(5, 0x17);
	AddSText(0, 0xe, 1, *(char **)(iVar1 + -0x5750), '\0', 1);
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void S_StartConfirm(void)

{
	char cVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	bool clr;

	iVar3 = 0x100f8fd0;
	StartStore((char)stextshold);
	**(undefined4 **)(iVar3 + -0x6ef8) = 0;
	ClearSText(5, 0x17);
	iVar4 = myplr * 0x55ec;
	cVar1 = *(char *)((int)plr + iVar4 + 0x5410);
	clr = cVar1 != '\0';
	if (*(int *)((int)plr + iVar4 + 0x5538) == 0) {
		clr = true;
	}
	bVar2 = stextshold != 0x11 && cVar1 != '\0';
	if (((cVar1 != '\0') && (*(int *)((int)plr + iVar4 + 0x540c) == 0)) && (bVar2 = stextshold != 4 && (stextshold != 7 && (stextshold != 3 && bVar2)), stextshold == 8)) {
		bVar2 = false;
	}
	if (bVar2) {
		AddSText(0x14, 8, 0, (char *)((int)plr + iVar4 + 0x5451), clr, 0);
	} else {
		AddSText(0x14, 8, 0, (char *)((int)plr + iVar4 + 0x5411), clr, 0);
	}
	AddSTextVal(8, *(int *)((int)plr + myplr * 0x55ec + 0x549c));
	PrintStoreItem((ItemStruct *)((int)plr + myplr * 0x55ec + 0x53d4), 9, clr);
	if ((uint)stextshold < 0x13) {
		// WARNING: Could not recover jumptable at 0x100a8ad8. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(*(int *)(iVar3 + -0x5774) + stextshold * 4))();
		return;
	}
	AddSText(0, 0xf, 1, &DAT_101282d4, '\0', 0);
	AddSText(0, 0x12, 1, *(char **)(iVar3 + -0x576c), '\0', 1);
	AddSText(0, 0x14, 1, *(char **)(iVar3 + -0x5770), '\0', 1);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_StartBoy(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	DAT_101ab4ac = 0;
	_DAT_101ab494 = 0;
	AddSText(0, 2, 1, "Wirt the Peg-legged boy", '\x03', 0);
	AddSLine(5);
	if (*(int *)(*(int *)(iVar1 + -0x71bc) + 8) == -1) {
		AddSText(0, 0xc, 1, "Talk to Wirt", '\x01', 1);
		AddSText(0, 0x12, 1, "Say goodbye", '\0', 1);
	} else {
		AddSText(0, 8, 1, "Talk to Wirt", '\x01', 1);
		AddSText(0, 0xc, 1, *(char **)(iVar1 + -0x5780), '\x03', 0);
		AddSText(0, 0xe, 1, *(char **)(iVar1 + -0x5784), '\x03', 0);
		AddSText(0, 0x10, 1, *(char **)(iVar1 + -0x5788), '\x03', 0);
		AddSText(0, 0x12, 1, *(char **)(iVar1 + -0x578c), '\0', 1);
		AddSText(0, 0x14, 1, "Say goodbye", '\0', 1);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void S_StartBBoy(void)

{
	int iVar1;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	bool clr;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	iVar1 = 0x100f8fd0;
	DAT_101ab4ac = 1;
	_DAT_101ab494 = 0;
	wsprintf((int)&DAT_101282d4, "I have this item for sale :           Your gold : %i",
	    *(undefined4 *)((int)plr + myplr * 0x55ec + 0x1c8), in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
	AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
	AddSLine(3);
	AddSLine(0x15);
	clr = cRam101a6284 != '\0';
	if (iRam101a63ac == 0) {
		clr = true;
	}
	if (cRam101a6284 == '\0') {
		AddSText(0x14, 10, 0, (char *)0x101a6285, clr, 1);
	} else {
		AddSText(0x14, 10, 0, (char *)0x101a62c5, clr, 1);
	}
	AddSTextVal(10, iRam101a6310 + (iRam101a6310 >> 1));
	PrintStoreItem((ItemStruct *)&DAT_101a6248, 0xb, clr);
	AddSText(0, 0x16, 1, *(char **)(iVar1 + -0x5798), '\0', 1);
	OffsetSTextY(0x16, 6);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_StartHealer(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	DAT_101ab4ac = 0;
	_DAT_101ab494 = 0;
	AddSText(0, 1, 1, "Welcome to the", '\x03', 0);
	AddSText(0, 3, 1, *(char **)(iVar1 + -0x579c), '\x03', 0);
	AddSText(0, 9, 1, *(char **)(iVar1 + -0x56f8), '\x03', 0);
	AddSText(0, 0xc, 1, *(char **)(iVar1 + -0x57a0), '\x01', 1);
	AddSText(0, 0xe, 1, *(char **)(iVar1 + -0x57a4), '\0', 1);
	AddSText(0, 0x10, 1, *(char **)(iVar1 + -0x5738), '\0', 1);
	AddSText(0, 0x12, 1, *(char **)(iVar1 + -0x57a8), '\0', 1);
	AddSLine(5);
	**(undefined4 **)(iVar1 + -0x6f10) = 0x14;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_ScrollHBuy(int idx)

{
	undefined8 uVar1;
	char clr;
	int y;
	ItemStruct *x;

	uVar1 = 0x100f8fd0;
	ClearSText(5, 0x15);
	x = (ItemStruct *)(*(int *)((int)uVar1 + -0x71c0) + idx * 0x170);
	**(undefined4 **)((int)uVar1 + -0x6f18) = 5;
	y = 5;
	do {
		if (x->_itype != -1) {
			clr = '\0';
			if (x->_iStatFlag == 0) {
				clr = '\x02';
			}
			AddSText(0x14, y, 0, x->_iName, clr, 1);
			AddSTextVal(y, x->_iIvalue);
			PrintStoreItem(x, y + 1, clr);
			x = x + 1;
			_DAT_101ab484 = y;
		}
		y = y + 4;
	} while (y < 0x14);
	if ((*(int *)(*(int *)((int)uVar1 + -0x6efc) + stextsel * 0x9c + 0x94) == 0) && (stextsel != 0x16)) {
		stextsel = _DAT_101ab484;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void S_StartHBuy(void)

{
	int iVar1;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	iVar1 = 0x100f8fd0;
	DAT_101ab4ac = 1;
	_DAT_101ab494 = 1;
	_stextsval = 0;
	wsprintf((int)&DAT_101282d4, "I have these items for sale :           Your gold : %i",
	    *(undefined4 *)((int)plr + myplr * 0x55ec + 0x1c8), in_r6, in_r7, in_r8, in_r9, in_r10,
	    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
	AddSLine(3);
	AddSLine(0x15);
	S_ScrollHBuy(_stextsval);
	AddSText(0, 0x16, 1, *(char **)(iVar1 + -0x5718), '\0', 0);
	OffsetSTextY(0x16, 6);
	_storenumh = 0;
	iVar1 = *(int *)(iVar1 + -0x71c0);
	while (*(int *)(iVar1 + 8) != -1) {
		iVar1 = iVar1 + 0x170;
		_storenumh = _storenumh + 1;
	}
	_stextsmax = _storenumh + -4;
	if (_stextsmax < 0) {
		_stextsmax = 0;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_StartStory(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	DAT_101ab4ac = 0;
	_DAT_101ab494 = 0;
	AddSText(0, 2, 1, "The Town Elder", '\x03', 0);
	AddSText(0, 9, 1, *(char **)(iVar1 + -0x56f8), '\x03', 0);
	AddSText(0, 0xc, 1, *(char **)(iVar1 + -0x57b0), '\x01', 1);
	AddSText(0, 0xe, 1, *(char **)(iVar1 + -0x57b4), '\0', 1);
	AddSText(0, 0x12, 1, *(char **)(iVar1 + -0x5790), '\0', 1);
	AddSLine(5);
	return;
}

BOOL IdItemOk(ItemStruct *i)

{
	if (i->_itype == -1) {
		return 0;
	}
	if (i->_iMagical == '\0') {
		return 0;
	}
	if (i->_iIdentified != 0) {
		return 0;
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddStoreHoldId(ItemStruct itm, int i)

{
	int iVar1;
	int iVar2;
	int *piVar3;
	int *piVar4;
	int iVar5;
	longlong lVar6;
	undefined in_stack_0000018b;

	iVar2 = _storenumh;
	lVar6 = 0x2e;
	iVar5 = _storenumh * 0x170;
	piVar3 = &itm._itype;
	piVar4 = (int *)(iVar5 + 0x101a007c);
	do {
		iVar1 = piVar3[3];
		piVar4[2] = piVar3[2];
		piVar4[3] = iVar1;
		lVar6 = lVar6 + -1;
		piVar3 = piVar3 + 2;
		piVar4 = piVar4 + 2;
	} while (lVar6 != 0);
	*(undefined4 *)(iVar5 + 0x101a0148) = 100;
	*(undefined4 *)(iVar5 + 0x101a014c) = 100;
	(&DAT_101a0054)[iVar2] = in_stack_0000018b;
	_storenumh = _storenumh + 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void S_StartSIdentify(void)

{
	undefined4 uVar1;
	bool bVar2;
	int iVar3;
	undefined8 uVar4;
	BOOL BVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	PlayerStruct *pPVar8;
	ulonglong in_r7;
	ulonglong in_r8;
	ulonglong in_r9;
	ulonglong in_r10;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar9;
	undefined8 unaff_r25;
	int iVar10;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar11;
	undefined4 in_stack_fffffe48;
	undefined4 in_stack_fffffe4c;
	undefined8 in_stack_fffffe50;
	int local_1a8;
	undefined4 local_1a4;
	undefined4 local_1a0;
	undefined4 local_19c;
	uint local_198;
	uint local_194;
	uint local_190;
	uint local_18c;
	undefined in_stack_fffffe78[320];
	int local_38;
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	uVar4 = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	bVar2 = false;
	DAT_101ab4ac = 1;
	_storenumh = 0;
	uRam101a008c = 0xffffffff;
	uRam101a01fc = 0xffffffff;
	uRam101a036c = 0xffffffff;
	uRam101a04dc = 0xffffffff;
	uRam101a064c = 0xffffffff;
	uRam101a07bc = 0xffffffff;
	uRam101a092c = 0xffffffff;
	uRam101a0a9c = 0xffffffff;
	uRam101a0c0c = 0xffffffff;
	uRam101a0d7c = 0xffffffff;
	uRam101a0eec = 0xffffffff;
	uRam101a105c = 0xffffffff;
	uRam101a11cc = 0xffffffff;
	uRam101a133c = 0xffffffff;
	uRam101a14ac = 0xffffffff;
	uRam101a161c = 0xffffffff;
	uRam101a178c = 0xffffffff;
	uRam101a18fc = 0xffffffff;
	uRam101a1a6c = 0xffffffff;
	uRam101a1bdc = 0xffffffff;
	uRam101a1d4c = 0xffffffff;
	uRam101a1ebc = 0xffffffff;
	uRam101a202c = 0xffffffff;
	uRam101a219c = 0xffffffff;
	uRam101a230c = 0xffffffff;
	uRam101a247c = 0xffffffff;
	uRam101a25ec = 0xffffffff;
	uRam101a275c = 0xffffffff;
	uRam101a28cc = 0xffffffff;
	uRam101a2a3c = 0xffffffff;
	uRam101a2bac = 0xffffffff;
	uRam101a2d1c = 0xffffffff;
	uRam101a2e8c = 0xffffffff;
	uRam101a2ffc = 0xffffffff;
	uRam101a316c = 0xffffffff;
	uRam101a32dc = 0xffffffff;
	uRam101a344c = 0xffffffff;
	uRam101a35bc = 0xffffffff;
	uRam101a372c = 0xffffffff;
	uRam101a389c = 0xffffffff;
	uRam101a3a0c = 0xffffffff;
	uRam101a3b7c = 0xffffffff;
	uRam101a3cec = 0xffffffff;
	uRam101a3e5c = 0xffffffff;
	uRam101a3fcc = 0xffffffff;
	uRam101a413c = 0xffffffff;
	uRam101a42ac = 0xffffffff;
	uRam101a441c = 0xffffffff;
	BVar5 = IdItemOk((ItemStruct *)((int)plr + myplr * 0x55ec + 0x498));
	if (BVar5 != 0) {
		lVar11 = 0x2e;
		bVar2 = true;
		puVar7 = (undefined4 *)&stack0xfffffe50;
		puVar6 = (undefined4 *)((int)plr + myplr * 0x55ec + 0x490);
		do {
			uVar1 = puVar6[3];
			puVar7[2] = puVar6[2];
			puVar7[3] = uVar1;
			lVar11 = lVar11 + -1;
			puVar7 = puVar7 + 2;
			puVar6 = puVar6 + 2;
		} while (lVar11 != 0);
		local_38 = -1;
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((ItemStruct)
		                   CONCAT48320(CONCAT444(CONCAT404(CONCAT364(CONCAT324(CONCAT284(CONCAT244(CONCAT204(CONCAT164(CONCAT88(CONCAT44(in_stack_fffffe48,
		                                                                                                                            in_stack_fffffe4c),
		                                                                                                                   in_stack_fffffe50),
		                                                                                                         local_1a8),
		                                                                                               local_1a4),
		                                                                                     local_1a0),
		                                                                           local_19c),
		                                                                 local_198),
		                                                       local_194),
		                                             local_190),
		                                   local_18c),
		                       in_stack_fffffe78),
		    local_1a8);
	}
	BVar5 = IdItemOk((ItemStruct *)((int)plr + myplr * 0x55ec + 0xd38));
	if (BVar5 != 0) {
		lVar11 = 0x2e;
		bVar2 = true;
		puVar7 = (undefined4 *)&stack0xfffffe50;
		puVar6 = (undefined4 *)((int)plr + myplr * 0x55ec + 0xd30);
		do {
			uVar1 = puVar6[3];
			puVar7[2] = puVar6[2];
			puVar7[3] = uVar1;
			lVar11 = lVar11 + -1;
			puVar7 = puVar7 + 2;
			puVar6 = puVar6 + 2;
		} while (lVar11 != 0);
		local_38 = -2;
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((ItemStruct)
		                   CONCAT48320(CONCAT444(CONCAT404(CONCAT364(CONCAT324(CONCAT284(CONCAT244(CONCAT204(CONCAT164(CONCAT88(CONCAT44(in_stack_fffffe48,
		                                                                                                                            in_stack_fffffe4c),
		                                                                                                                   in_stack_fffffe50),
		                                                                                                         local_1a8),
		                                                                                               local_1a4),
		                                                                                     local_1a0),
		                                                                           local_19c),
		                                                                 local_198),
		                                                       local_194),
		                                             local_190),
		                                   local_18c),
		                       in_stack_fffffe78),
		    local_1a8);
	}
	BVar5 = IdItemOk((ItemStruct *)((int)plr + myplr * 0x55ec + 0xa58));
	if (BVar5 != 0) {
		lVar11 = 0x2e;
		bVar2 = true;
		puVar7 = (undefined4 *)&stack0xfffffe50;
		puVar6 = (undefined4 *)((int)plr + myplr * 0x55ec + 0xa50);
		do {
			uVar1 = puVar6[3];
			puVar7[2] = puVar6[2];
			puVar7[3] = uVar1;
			lVar11 = lVar11 + -1;
			puVar7 = puVar7 + 2;
			puVar6 = puVar6 + 2;
		} while (lVar11 != 0);
		local_38 = -3;
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((ItemStruct)
		                   CONCAT48320(CONCAT444(CONCAT404(CONCAT364(CONCAT324(CONCAT284(CONCAT244(CONCAT204(CONCAT164(CONCAT88(CONCAT44(in_stack_fffffe48,
		                                                                                                                            in_stack_fffffe4c),
		                                                                                                                   in_stack_fffffe50),
		                                                                                                         local_1a8),
		                                                                                               local_1a4),
		                                                                                     local_1a0),
		                                                                           local_19c),
		                                                                 local_198),
		                                                       local_194),
		                                             local_190),
		                                   local_18c),
		                       in_stack_fffffe78),
		    local_1a8);
	}
	BVar5 = IdItemOk((ItemStruct *)((int)plr + myplr * 0x55ec + 0xbc8));
	if (BVar5 != 0) {
		lVar11 = 0x2e;
		bVar2 = true;
		puVar7 = (undefined4 *)&stack0xfffffe50;
		puVar6 = (undefined4 *)((int)plr + myplr * 0x55ec + 0xbc0);
		do {
			uVar1 = puVar6[3];
			puVar7[2] = puVar6[2];
			puVar7[3] = uVar1;
			lVar11 = lVar11 + -1;
			puVar7 = puVar7 + 2;
			puVar6 = puVar6 + 2;
		} while (lVar11 != 0);
		local_38 = -4;
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((ItemStruct)
		                   CONCAT48320(CONCAT444(CONCAT404(CONCAT364(CONCAT324(CONCAT284(CONCAT244(CONCAT204(CONCAT164(CONCAT88(CONCAT44(in_stack_fffffe48,
		                                                                                                                            in_stack_fffffe4c),
		                                                                                                                   in_stack_fffffe50),
		                                                                                                         local_1a8),
		                                                                                               local_1a4),
		                                                                                     local_1a0),
		                                                                           local_19c),
		                                                                 local_198),
		                                                       local_194),
		                                             local_190),
		                                   local_18c),
		                       in_stack_fffffe78),
		    local_1a8);
	}
	BVar5 = IdItemOk((ItemStruct *)((int)plr + myplr * 0x55ec + 0x608));
	if (BVar5 != 0) {
		lVar11 = 0x2e;
		bVar2 = true;
		puVar7 = (undefined4 *)&stack0xfffffe50;
		puVar6 = (undefined4 *)((int)plr + myplr * 0x55ec + 0x600);
		do {
			uVar1 = puVar6[3];
			puVar7[2] = puVar6[2];
			puVar7[3] = uVar1;
			lVar11 = lVar11 + -1;
			puVar7 = puVar7 + 2;
			puVar6 = puVar6 + 2;
		} while (lVar11 != 0);
		local_38 = -5;
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((ItemStruct)
		                   CONCAT48320(CONCAT444(CONCAT404(CONCAT364(CONCAT324(CONCAT284(CONCAT244(CONCAT204(CONCAT164(CONCAT88(CONCAT44(in_stack_fffffe48,
		                                                                                                                            in_stack_fffffe4c),
		                                                                                                                   in_stack_fffffe50),
		                                                                                                         local_1a8),
		                                                                                               local_1a4),
		                                                                                     local_1a0),
		                                                                           local_19c),
		                                                                 local_198),
		                                                       local_194),
		                                             local_190),
		                                   local_18c),
		                       in_stack_fffffe78),
		    local_1a8);
	}
	BVar5 = IdItemOk((ItemStruct *)((int)plr + myplr * 0x55ec + 0x778));
	if (BVar5 != 0) {
		lVar11 = 0x2e;
		bVar2 = true;
		puVar7 = (undefined4 *)&stack0xfffffe50;
		puVar6 = (undefined4 *)((int)plr + myplr * 0x55ec + 0x770);
		do {
			uVar1 = puVar6[3];
			puVar7[2] = puVar6[2];
			puVar7[3] = uVar1;
			lVar11 = lVar11 + -1;
			puVar7 = puVar7 + 2;
			puVar6 = puVar6 + 2;
		} while (lVar11 != 0);
		local_38 = -6;
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((ItemStruct)
		                   CONCAT48320(CONCAT444(CONCAT404(CONCAT364(CONCAT324(CONCAT284(CONCAT244(CONCAT204(CONCAT164(CONCAT88(CONCAT44(in_stack_fffffe48,
		                                                                                                                            in_stack_fffffe4c),
		                                                                                                                   in_stack_fffffe50),
		                                                                                                         local_1a8),
		                                                                                               local_1a4),
		                                                                                     local_1a0),
		                                                                           local_19c),
		                                                                 local_198),
		                                                       local_194),
		                                             local_190),
		                                   local_18c),
		                       in_stack_fffffe78),
		    local_1a8);
	}
	BVar5 = IdItemOk((ItemStruct *)((int)plr + myplr * 0x55ec + 0x8e8));
	if (BVar5 != 0) {
		lVar11 = 0x2e;
		bVar2 = true;
		puVar7 = (undefined4 *)&stack0xfffffe50;
		puVar6 = (undefined4 *)((int)plr + myplr * 0x55ec + 0x8e0);
		do {
			uVar1 = puVar6[3];
			puVar7[2] = puVar6[2];
			puVar7[3] = uVar1;
			lVar11 = lVar11 + -1;
			puVar7 = puVar7 + 2;
			puVar6 = puVar6 + 2;
		} while (lVar11 != 0);
		local_38 = -7;
		in_r7 = (ulonglong)local_198;
		in_r8 = (ulonglong)local_194;
		in_r9 = (ulonglong)local_190;
		in_r10 = (ulonglong)local_18c;
		AddStoreHoldId((ItemStruct)
		                   CONCAT48320(CONCAT444(CONCAT404(CONCAT364(CONCAT324(CONCAT284(CONCAT244(CONCAT204(CONCAT164(CONCAT88(CONCAT44(in_stack_fffffe48,
		                                                                                                                            in_stack_fffffe4c),
		                                                                                                                   in_stack_fffffe50),
		                                                                                                         local_1a8),
		                                                                                               local_1a4),
		                                                                                     local_1a0),
		                                                                           local_19c),
		                                                                 local_198),
		                                                       local_194),
		                                             local_190),
		                                   local_18c),
		                       in_stack_fffffe78),
		    local_1a8);
	}
	iVar9 = 0;
	iVar10 = 0;
	while (true) {
		iVar3 = myplr * 0x55ec;
		pPVar8 = (PlayerStruct *)((int)plr + iVar3);
		if (*(int *)((int)plr + iVar3 + 0x4828) <= iVar9)
			break;
		BVar5 = IdItemOk((ItemStruct *)((int)&pPVar8->InvList[0]._iPLHP + iVar10));
		if (BVar5 != 0) {
			lVar11 = 0x2e;
			bVar2 = true;
			puVar7 = (undefined4 *)&stack0xfffffe50;
			puVar6 = (undefined4 *)((int)plr + myplr * 0x55ec + iVar10 + 0xea0);
			do {
				uVar1 = puVar6[3];
				puVar7[2] = puVar6[2];
				puVar7[3] = uVar1;
				lVar11 = lVar11 + -1;
				puVar7 = puVar7 + 2;
				puVar6 = puVar6 + 2;
			} while (lVar11 != 0);
			in_r7 = (ulonglong)local_198;
			in_r8 = (ulonglong)local_194;
			in_r9 = (ulonglong)local_190;
			in_r10 = (ulonglong)local_18c;
			local_38 = iVar9;
			AddStoreHoldId((ItemStruct)
			                   CONCAT48320(CONCAT444(CONCAT404(CONCAT364(CONCAT324(CONCAT284(CONCAT244(
			                                                                                     CONCAT204(CONCAT164(CONCAT88(CONCAT44(
			                                                                                                                      in_stack_fffffe48, in_stack_fffffe4c),
			                                                                                                             in_stack_fffffe50),
			                                                                                                   local_1a8),
			                                                                                         local_1a4),
			                                                                                     local_1a0),
			                                                                           local_19c),
			                                                                 local_198),
			                                                       local_194),
			                                             local_190),
			                                   local_18c),
			                       in_stack_fffffe78),
			    local_1a8);
		}
		iVar10 = iVar10 + 0x170;
		iVar9 = iVar9 + 1;
	}
	iVar9 = (int)uVar4;
	if (bVar2) {
		_DAT_101ab494 = 1;
		uVar1 = *(undefined4 *)(iVar9 + -0x57bc);
		_stextsval = 0;
		**(undefined4 **)(iVar9 + -0x6f20) = *(undefined4 *)((int)plr + iVar3 + 0x4828);
		wsprintf((int)&DAT_101282d4, uVar1, *(undefined4 *)((int)plr + iVar3 + 0x1c8), pPVar8, (int)in_r7,
		    (int)in_r8, (int)in_r9, (int)in_r10, in_stack_fffffe48, (char)in_stack_fffffe4c, local_1a4,
		    local_1a0, local_19c, local_198, local_194, local_190, local_18c);
		AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
		AddSLine(3);
		AddSLine(0x15);
		S_ScrollSSell(_stextsval);
		AddSText(0, 0x16, 1, "Back", '\0', 1);
		OffsetSTextY(0x16, 6);
	} else {
		_DAT_101ab494 = 0;
		wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar9 + -0x57b8),
		    *(undefined4 *)((int)plr + iVar3 + 0x1c8), pPVar8, (int)in_r7, (int)in_r8, (int)in_r9,
		    (int)in_r10, in_stack_fffffe48, (char)in_stack_fffffe4c, local_1a4, local_1a0, local_19c,
		    local_198, local_194, local_190, local_18c);
		AddSText(0, 1, 1, &DAT_101282d4, '\x03', 0);
		AddSLine(3);
		AddSLine(0x15);
		AddSText(0, 0x16, 1, "Back", '\0', 1);
		OffsetSTextY(0x16, 6);
	}
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void S_StartIdShow(void)

{
	int iVar1;
	bool clr;

	iVar1 = 0x100f8fd0;
	StartStore((char)stextshold);
	**(undefined4 **)(iVar1 + -0x6ef8) = 0;
	ClearSText(5, 0x17);
	clr = *(char *)((int)plr + myplr * 0x55ec + 0x5410) != '\0';
	if (*(int *)((int)plr + myplr * 0x55ec + 0x5538) == 0) {
		clr = true;
	}
	AddSText(0, 7, 1, *(char **)(iVar1 + -0x57c0), '\0', 0);
	AddSText(0x14, 0xb, 0, (char *)((int)plr + myplr * 0x55ec + 0x5451), clr, 0);
	PrintStoreItem((ItemStruct *)((int)plr + myplr * 0x55ec + 0x53d4), 0xc, clr);
	AddSText(0, 0x12, 1, *(char **)(iVar1 + -0x57c4), '\0', 1);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void S_StartTalk(void)

{
	undefined8 uVar1;
	int iVar2;
	int iVar3;
	int *piVar4;
	int y;
	undefined4 in_r6;
	int y_00;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	longlong lVar9;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;
	undefined4 in_stack_ffffffc8;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;

	uVar1 = 0x100f8fd0;
	DAT_101ab4ac = 0;
	_DAT_101ab494 = 0;
	wsprintf((int)&DAT_101282d4, "Talk to %s", (&PTR_s_Griswold_1010f818)[talker], in_r6, in_r7, in_r8,
	    in_r9, in_r10, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc, in_stack_ffffffc0,
	    in_stack_ffffffc4, in_stack_ffffffc8, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4);
	AddSText(0, 2, 1, &DAT_101282d4, '\x03', 0);
	AddSLine(5);
	iVar8 = *(int *)((int)uVar1 + -0x7604);
	lVar9 = 4;
	piVar4 = (int *)(&DAT_10120008 + talker * 0x40);
	y_00 = 0;
	iVar3 = iVar8;
	do {
		if (((*(char *)(iVar3 + 2) == '\x02') && (*piVar4 != -1)) && (*(int *)(iVar3 + 0x14) != 0)) {
			y_00 = y_00 + 1;
		}
		if (((*(char *)(iVar3 + 0x1a) == '\x02') && (piVar4[1] != -1)) && (*(int *)(iVar3 + 0x2c) != 0)) {
			y_00 = y_00 + 1;
		}
		if (((*(char *)(iVar3 + 0x32) == '\x02') && (piVar4[2] != -1)) && (*(int *)(iVar3 + 0x44) != 0)) {
			y_00 = y_00 + 1;
		}
		if (((*(char *)(iVar3 + 0x4a) == '\x02') && (piVar4[3] != -1)) && (*(int *)(iVar3 + 0x5c) != 0)) {
			y_00 = y_00 + 1;
		}
		iVar3 = iVar3 + 0x60;
		piVar4 = piVar4 + 4;
		lVar9 = lVar9 + -1;
	} while (lVar9 != 0);
	if (y_00 < 7) {
		y_00 = 0xf - y_00;
		iVar3 = 2;
	} else {
		y_00 = 0xe - (y_00 >> 1);
		iVar3 = 1;
	}
	iVar5 = 0;
	iVar6 = *(int *)((int)uVar1 + -0x706c);
	y = y_00 + -2;
	iVar7 = 0;
	do {
		if (((*(char *)(iVar8 + 2) == '\x02') && (*(int *)(&DAT_10120008 + talker * 0x40 + iVar7) != -1)) && (*(int *)(iVar8 + 0x14) != 0)) {
			AddSText(0, y_00, 1, *(char **)(iVar6 + 0x10), '\0', 1);
			y_00 = y_00 + iVar3;
		}
		iVar2 = (int)uVar1;
		iVar5 = iVar5 + 1;
		iVar7 = iVar7 + 4;
		iVar6 = iVar6 + 0x14;
		iVar8 = iVar8 + 0x18;
	} while (iVar5 < 0x10);
	AddSText(0, y, 1, *(char **)(iVar2 + -0x57cc), '\x01', 1);
	AddSText(0, 0x16, 1, *(char **)(iVar2 + -0x5718), '\0', 1);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_StartTavern(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	DAT_101ab4ac = 0;
	_DAT_101ab494 = 0;
	AddSText(0, 1, 1, "Welcome to the", '\x03', 0);
	AddSText(0, 3, 1, *(char **)(iVar1 + -0x57d0), '\x03', 0);
	AddSText(0, 9, 1, *(char **)(iVar1 + -0x56f8), '\x03', 0);
	AddSText(0, 0xc, 1, *(char **)(iVar1 + -0x57d4), '\x01', 1);
	AddSText(0, 0x12, 1, *(char **)(iVar1 + -0x57d8), '\0', 1);
	AddSLine(5);
	**(undefined4 **)(iVar1 + -0x6f10) = 0x14;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_StartBarMaid(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	DAT_101ab4ac = 0;
	_DAT_101ab494 = 0;
	AddSText(0, 2, 1, "Gillian", '\x03', 0);
	AddSText(0, 9, 1, *(char **)(iVar1 + -0x56f8), '\x03', 0);
	AddSText(0, 0xc, 1, *(char **)(iVar1 + -0x57e0), '\x01', 1);
	AddSText(0, 0x12, 1, *(char **)(iVar1 + -0x5790), '\0', 1);
	AddSLine(5);
	**(undefined4 **)(iVar1 + -0x6f10) = 0x14;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_StartDrunk(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	DAT_101ab4ac = 0;
	_DAT_101ab494 = 0;
	AddSText(0, 2, 1, "Farnham the Drunk", '\x03', 0);
	AddSText(0, 9, 1, *(char **)(iVar1 + -0x56f8), '\x03', 0);
	AddSText(0, 0xc, 1, *(char **)(iVar1 + -0x57e8), '\x01', 1);
	AddSText(0, 0x12, 1, *(char **)(iVar1 + -0x57ec), '\0', 1);
	AddSLine(5);
	**(undefined4 **)(iVar1 + -0x6f10) = 0x14;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void StartStore(char s)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	_DAT_10128158 = 0;
	_DAT_1013c970 = 0;
	_DAT_101282b8 = 0;
	_DAT_1019cbec = 0;
	_DAT_10128178 = 0;
	ClearSText(0, 0x18);
	ReleaseStoreBtn();
	if (0x17 < ((longlong)s & 0xffffffffU)) {
		iVar2 = *(int *)(iVar1 + -0x6efc);
		stextsel = 0;
		while ((stextsel < 0x18 && (*(int *)(iVar2 + 0x94) == 0))) {
			iVar2 = iVar2 + 0x9c;
			stextsel = stextsel + 1;
		}
		if (stextsel == 0x18) {
			stextsel = -1;
		}
		**(char **)(iVar1 + -0x7764) = s;
		if ((s == '\x02') && (_storenumh == 0)) {
			StartStore('\x01');
		}
		return;
	}
	// WARNING: Could not recover jumptable at 0x100a9f38. Too many branches
	// WARNING: Treating indirect jump as call
	(**(code **)(*(int *)(iVar1 + -0x57f0) + (int)s * 4))();
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawSText(void)

{
	int iVar1;
	int y;
	int *piVar2;

	iVar1 = 0x100f8fd0;
	if (DAT_101ab4ac == '\0') {
		DrawSTextBack();
	} else {
		DrawQTextBack();
	}
	if ((_DAT_101ab494 != 0) && (((longlong) * *(char **)(iVar1 + -0x7764) & 0xffffffffU) < 0x13)) {
		// WARNING: Could not recover jumptable at 0x100aa114. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(*(int *)(iVar1 + -0x57f4) + (int)**(char **)(iVar1 + -0x7764) * 4))();
		return;
	}
	y = 0;
	piVar2 = *(int **)(iVar1 + -0x6efc);
	do {
		if (piVar2[0x24] != 0) {
			DrawSLine(y);
		}
		if (*(char *)(piVar2 + 2) != '\0') {
			PrintSString(*piVar2, y, piVar2[0x22], (char *)(piVar2 + 2), *(char *)(piVar2 + 0x23), piVar2[0x26]);
		}
		y = y + 1;
		piVar2 = piVar2 + 0x27;
	} while (y < 0x18);
	if (_DAT_101ab494 != 0) {
		DrawSArrows(4, 0x14);
	}
	_DAT_101ab4a8 = (_DAT_101ab4a8 & 7) + 1;
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void STextESC(void)

{
	ulonglong uVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	uVar4 = ZEXT48(&DAT_1014919d);
	uVar3 = ZEXT48(&stextshold);
	uVar2 = ZEXT48(&stextflag);
	if (DAT_1014919d == '\0') {
		if (((longlong)stextflag & 0xffffffffU) < 0x18) {
			// WARNING: Could not recover jumptable at 0x100aa264. Too many branches
			// WARNING: Treating indirect jump as call
			(*(code *)(&PTR_LAB_1010f934)[(int)stextflag])();
			return;
		}
	} else {
		uVar1 = ZEXT48(&leveltype);
		DAT_1014919d = '\0';
		if (leveltype == '\0') {
			sfx_stop();
		}
		FUN_1005bd38(uVar1, uVar2, uVar3, uVar4, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void STextUp(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	PlaySFX(0x45);
	if (stextsel != -1) {
		if (**(int **)(iVar1 + -0x6ef8) == 0) {
			if (stextsel == 0) {
				stextsel = 0x17;
			} else {
				stextsel = stextsel + -1;
			}
			while (*(int *)(stextsel * 0x9c + 0x101aa674) == 0) {
				if (stextsel == 0) {
					stextsel = 0x17;
				} else {
					stextsel = stextsel + -1;
				}
			}
		} else {
			if (stextsel == **(int **)(iVar1 + -0x6f18)) {
				if (_stextsval != 0) {
					_stextsval = _stextsval + -1;
				}
			} else {
				stextsel = stextsel + -1;
				while (*(int *)(stextsel * 0x9c + 0x101aa674) == 0) {
					if (stextsel == 0) {
						stextsel = 0x17;
					} else {
						stextsel = stextsel + -1;
					}
				}
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void STextDown(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	PlaySFX(0x45);
	if (stextsel != -1) {
		if (**(int **)(iVar1 + -0x6ef8) == 0) {
			if (stextsel == 0x17) {
				stextsel = 0;
			} else {
				stextsel = stextsel + 1;
			}
			while (*(int *)(stextsel * 0x9c + 0x101aa674) == 0) {
				if (stextsel == 0x17) {
					stextsel = 0;
				} else {
					stextsel = stextsel + 1;
				}
			}
		} else {
			if (stextsel == **(int **)(iVar1 + -0x6f1c)) {
				if (_stextsval < **(int **)(iVar1 + -0x6f20)) {
					_stextsval = _stextsval + 1;
				}
			} else {
				stextsel = stextsel + 1;
				while (*(int *)(stextsel * 0x9c + 0x101aa674) == 0) {
					if (stextsel == 0x17) {
						stextsel = 0;
					} else {
						stextsel = stextsel + 1;
					}
				}
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void STextPrior(void)

{
	int iVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	PlaySFX(0x45);
	iVar1 = stextsel;
	if (((stextsel != -1) && (iVar1 = stextsel, **(int **)(iVar2 + -0x6ef8) != 0)) && (iVar1 = **(int **)(iVar2 + -0x6f18), stextsel == **(int **)(iVar2 + -0x6f18))) {
		if (_stextsval != 0) {
			_stextsval = _stextsval + -4;
		}
		iVar1 = stextsel;
		if (_stextsval < 0) {
			_stextsval = 0;
			iVar1 = stextsel;
		}
	}
	stextsel = iVar1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void STextNext(void)

{
	int iVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	PlaySFX(0x45);
	iVar1 = stextsel;
	if (((stextsel != -1) && (iVar1 = stextsel, **(int **)(iVar2 + -0x6ef8) != 0)) && (iVar1 = **(int **)(iVar2 + -0x6f1c), stextsel == **(int **)(iVar2 + -0x6f1c))) {
		iVar2 = **(int **)(iVar2 + -0x6f20);
		if (_stextsval < iVar2) {
			_stextsval = _stextsval + 4;
		}
		iVar1 = stextsel;
		if (iVar2 < _stextsval) {
			_stextsval = iVar2;
			iVar1 = stextsel;
		}
	}
	stextsel = iVar1;
	return;
}

void S_SmithEnter(void)

{
	switch (stextsel) {
	case 10:
		talker = 0;
		stextshold = 1;
		stextlhold = 10;
		gossipstart = 0xbd;
		gossipend = 199;
		StartStore('\x13');
		break;
	case 0xc:
		StartStore('\x02');
		break;
	case 0xe:
		StartStore('\x12');
		break;
	case 0x10:
		StartStore('\x03');
		break;
	case 0x12:
		StartStore('\x04');
		break;
	case 0x14:
		stextflag = 0;
	}
	return;
}

void SetGoldCurs(int pnum, int i)

{
	int iVar1;

	iVar1 = (int)plr + i * 0x170 + pnum * 0x55ec;
	if (0x9c3 < *(int *)(iVar1 + 0xf6c)) {
		*(undefined4 *)(iVar1 + 0xf68) = 6;
		return;
	}
	if (*(int *)(iVar1 + 0xf6c) < 0x3e9) {
		*(undefined4 *)(iVar1 + 0xf68) = 4;
		return;
	}
	*(undefined4 *)(iVar1 + 0xf68) = 5;
	return;
}

void SetSpdbarGoldCurs(int pnum, int i)

{
	int iVar1;

	iVar1 = (int)plr + i * 0x170 + pnum * 0x55ec;
	if (0x9c3 < *(int *)(iVar1 + 0x4918)) {
		*(undefined4 *)(iVar1 + 0x4914) = 6;
		return;
	}
	if (*(int *)(iVar1 + 0x4918) < 0x3e9) {
		*(undefined4 *)(iVar1 + 0x4914) = 4;
		return;
	}
	*(undefined4 *)(iVar1 + 0x4914) = 5;
	return;
}

void TakePlrsMoney(int cost)

{
	undefined8 uVar1;
	int iVar2;
	int pnum;
	int *piVar3;
	int iv;

	uVar1 = 0x100f8fd0;
	pnum = CalculateGold(myplr);
	iv = 0;
	*(int *)((int)plr + myplr * 0x55ec + 0x1c8) = pnum - cost;
	while (true) {
		pnum = myplr;
		iVar2 = (int)uVar1;
		if ((7 < iv) || (cost < 1))
			break;
		iVar2 = myplr * 0x55ec + iv * 0x170;
		if (*(int *)((int)plr + iVar2 + 0x485c) == 0xb) {
			piVar3 = (int *)((int)plr + iVar2 + 0x4918);
			iVar2 = *piVar3;
			if (iVar2 != 5000) {
				if (cost < iVar2) {
					*piVar3 = iVar2 - cost;
					SetSpdbarGoldCurs(pnum, iv);
					cost = 0;
				} else {
					cost = cost - iVar2;
					RemoveSpdBarItem(myplr, iv);
					iv = -1;
				}
			}
		}
		iv = iv + 1;
	}
	if (0 < cost) {
		pnum = 0;
		while ((iv = myplr, iVar2 = (int)uVar1, pnum < 8 && (0 < cost))) {
			iVar2 = myplr * 0x55ec + pnum * 0x170;
			if (*(int *)((int)plr + iVar2 + 0x485c) == 0xb) {
				piVar3 = (int *)((int)plr + iVar2 + 0x4918);
				iVar2 = *piVar3;
				if (cost < iVar2) {
					*piVar3 = iVar2 - cost;
					SetSpdbarGoldCurs(iv, pnum);
					cost = 0;
				} else {
					cost = cost - iVar2;
					RemoveSpdBarItem(myplr, pnum);
					pnum = -1;
				}
			}
			pnum = pnum + 1;
		}
	}
	**(undefined4 **)(iVar2 + -0x76bc) = 0xff;
	if (0 < cost) {
		pnum = 0;
		while (true) {
			iv = myplr;
			if ((*(int *)((int)plr + myplr * 0x55ec + 0x4828) <= pnum) || (cost < 1))
				break;
			piVar3 = &((PlayerStruct *)((int)plr + myplr * 0x55ec))->_pmode + pnum * 0x5c;
			if (piVar3[0x3ac] == 0xb) {
				iVar2 = piVar3[0x3db];
				if (iVar2 != 5000) {
					if (cost < iVar2) {
						piVar3[0x3db] = iVar2 - cost;
						SetGoldCurs(iv, pnum);
						cost = 0;
					} else {
						cost = cost - iVar2;
						RemoveInvItem(myplr, pnum);
						pnum = -1;
					}
				}
			}
			pnum = pnum + 1;
		}
		if (0 < cost) {
			pnum = 0;
			while (true) {
				iv = myplr;
				if ((*(int *)((int)plr + myplr * 0x55ec + 0x4828) <= pnum) || (cost < 1))
					break;
				piVar3 = &((PlayerStruct *)((int)plr + myplr * 0x55ec))->_pmode + pnum * 0x5c;
				if (piVar3[0x3ac] == 0xb) {
					iVar2 = piVar3[0x3db];
					if (cost < iVar2) {
						piVar3[0x3db] = iVar2 - cost;
						SetGoldCurs(iv, pnum);
						cost = 0;
					} else {
						cost = cost - iVar2;
						RemoveInvItem(myplr, pnum);
						pnum = -1;
					}
				}
				pnum = pnum + 1;
			}
		}
	}
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void SmithBuyItem(void)

{
	undefined4 uVar1;
	int iVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	undefined *puVar5;
	longlong lVar6;

	iVar2 = 0x100f8fd0;
	TakePlrsMoney(*(int *)((int)plr + myplr * 0x55ec + 0x549c));
	if (*(char *)((int)plr + myplr * 0x55ec + 0x5410) == '\0') {
		*(undefined4 *)((int)plr + myplr * 0x55ec + 0x540c) = 0;
	}
	StoreAutoPlace();
	iVar2 = **(int **)(iVar2 + -0x6f38) + (**(int **)(iVar2 + -0x6f0c) - **(int **)(iVar2 + -0x6f18) >> 2);
	if (iVar2 == 0x13) {
		uRam101aa478 = 0xffffffff;
	} else {
		puVar5 = &DAT_101a8920 + iVar2 * 0x170;
		while (*(int *)(puVar5 + 0x178) != -1) {
			lVar6 = 0x2e;
			puVar3 = (undefined4 *)(puVar5 + 0x168);
			puVar4 = (undefined4 *)(puVar5 + -8);
			do {
				uVar1 = puVar3[3];
				puVar4[2] = puVar3[2];
				puVar4[3] = uVar1;
				lVar6 = lVar6 + -1;
				puVar3 = puVar3 + 2;
				puVar4 = puVar4 + 2;
			} while (lVar6 != 0);
			puVar5 = puVar5 + 0x170;
			iVar2 = iVar2 + 1;
		}
		*(undefined4 *)(iVar2 * 0x170 + 0x101a8928) = 0xffffffff;
	}
	CalcPlrInv(myplr, 1);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_SBuyEnter(void)

{
	undefined4 uVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	int ii;
	longlong lVar7;

	if (stextsel == 0x16) {
		StartStore('\x01');
		stextsel = 0xc;
	} else {
		stextshold = 2;
		stextlhold = stextsel;
		_DAT_101ab498 = _stextsval;
		ii = myplr * 0x55ec;
		iVar4 = (_stextsval + (stextsel - _DAT_101ab488 >> 2)) * 0x170;
		if (*(int *)((int)plr + ii + 0x1c8) < *(int *)(iVar4 + 0x101a89e8)) {
			StartStore('\t');
		} else {
			lVar7 = 0x2e;
			puVar5 = (undefined4 *)(iVar4 + 0x101a8918);
			puVar6 = (undefined4 *)((int)plr + ii + 0x53cc);
			do {
				uVar1 = puVar5[3];
				puVar6[2] = puVar5[2];
				puVar6[3] = uVar1;
				lVar7 = lVar7 + -1;
				puVar5 = puVar5 + 2;
				puVar6 = puVar6 + 2;
			} while (lVar7 != 0);
			SetCursor_(*(int *)((int)plr + ii + 0x5494) + 0xc);
			iVar4 = 0;
			ii = 0;
			while ((ii < 0x28 && (iVar4 == 0))) {
				uVar2 = _DAT_10128618 / 0x1c + (_DAT_10128618 >> 0x1f);
				uVar3 = _DAT_10128614 / 0x1c + (_DAT_10128614 >> 0x1f);
				iVar4 = AutoPlace(myplr, ii, uVar2 + (uVar2 >> 0x1f), uVar3 + (uVar3 >> 0x1f), 0);
				ii = ii + 1;
			}
			if (iVar4 == 0) {
				StartStore('\n');
			} else {
				StartStore('\v');
			}
			SetCursor_(1);
		}
	}
	return;
}

void SmithBuyPItem(void)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;

	iVar2 = 0x100f8fd0;
	puVar4 = &DAT_101a8080;
	TakePlrsMoney(*(int *)((int)plr + myplr * 0x55ec + 0x549c));
	if (*(char *)((int)plr + myplr * 0x55ec + 0x5410) == '\0') {
		*(undefined4 *)((int)plr + myplr * 0x55ec + 0x540c) = 0;
	}
	StoreAutoPlace();
	iVar5 = 0;
	iVar6 = 0;
	iVar3 = **(int **)(iVar2 + -0x6f38) + (**(int **)(iVar2 + -0x6f0c) - **(int **)(iVar2 + -0x6f18) >> 2);
	while (-1 < iVar3) {
		if (*(int *)(puVar4 + 8) != -1) {
			iVar3 = iVar3 + -1;
			iVar5 = iVar6;
		}
		puVar4 = puVar4 + 0x170;
		iVar6 = iVar6 + 1;
	}
	piVar1 = *(int **)(iVar2 + -0x71ac);
	*(undefined4 *)(iVar5 * 0x170 + 0x101a8088) = 0xffffffff;
	*piVar1 = *piVar1 + -1;
	SpawnPremium((int)*(char *)((int)plr + myplr * 0x55ec + 0x1b4));
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_SPBuyEnter(void)

{
	undefined4 uVar1;
	uint uVar2;
	uint uVar3;
	int ii;
	int iVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	undefined *puVar7;
	int iVar8;
	longlong lVar9;

	puVar7 = &DAT_101a8080;
	if (stextsel == 0x16) {
		StartStore('\x01');
		stextsel = 0xe;
	} else {
		stextshold = 0x12;
		iVar4 = 0;
		stextlhold = stextsel;
		iVar8 = 0;
		_DAT_101ab498 = _stextsval;
		ii = _stextsval + (stextsel - _DAT_101ab488 >> 2);
		while (-1 < ii) {
			if (*(int *)(puVar7 + 8) != -1) {
				ii = ii + -1;
				iVar4 = iVar8;
			}
			puVar7 = puVar7 + 0x170;
			iVar8 = iVar8 + 1;
		}
		ii = myplr * 0x55ec;
		if (*(int *)((int)plr + ii + 0x1c8) < *(int *)(iVar4 * 0x170 + 0x101a8148)) {
			StartStore('\t');
		} else {
			lVar9 = 0x2e;
			puVar5 = (undefined4 *)(&DAT_101a8078 + iVar4 * 0x170);
			puVar6 = (undefined4 *)((int)plr + ii + 0x53cc);
			do {
				uVar1 = puVar5[3];
				puVar6[2] = puVar5[2];
				puVar6[3] = uVar1;
				lVar9 = lVar9 + -1;
				puVar5 = puVar5 + 2;
				puVar6 = puVar6 + 2;
			} while (lVar9 != 0);
			SetCursor_(*(int *)((int)plr + ii + 0x5494) + 0xc);
			iVar4 = 0;
			ii = 0;
			while ((ii < 0x28 && (iVar4 == 0))) {
				uVar2 = _DAT_10128618 / 0x1c + (_DAT_10128618 >> 0x1f);
				uVar3 = _DAT_10128614 / 0x1c + (_DAT_10128614 >> 0x1f);
				iVar4 = AutoPlace(myplr, ii, uVar2 + (uVar2 >> 0x1f), uVar3 + (uVar3 >> 0x1f), 0);
				ii = ii + 1;
			}
			if (iVar4 == 0) {
				StartStore('\n');
			} else {
				StartStore('\v');
			}
			SetCursor_(1);
		}
	}
	return;
}

BOOL StoreGoldFit(int idx)

{
	uint uVar1;
	uint uVar2;
	ulonglong uVar3;
	int iVar4;
	BOOL BVar5;
	ulonglong uVar6;
	int iVar7;
	int iVar8;
	longlong lVar9;

	iVar4 = 0x100f8fd0;
	uVar1 = *(uint *)(idx * 0x170 + 0x101a014c);
	uVar6 = (ulonglong)uVar1;
	uVar2 = (int)uVar1 / 5000 + ((int)uVar1 >> 0x1f);
	iVar7 = uVar2 + (uVar2 >> 0x1f);
	if (uVar6 != (((longlong)(int)((ulonglong)((longlong)(int)uVar1 * 0x68db8bad) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar2) + (ulonglong)(uVar2 >> 0x1f)) * 5000) {
		iVar7 = iVar7 + 1;
	}
	SetCursor_(*(int *)(idx * 0x170 + 0x101a0144) + 0xc);
	uVar1 = **(int **)(iVar4 + -0x7650) / 0x1c + (**(int **)(iVar4 + -0x7650) >> 0x1f);
	uVar2 = **(int **)(iVar4 + -0x7654) / 0x1c + (**(int **)(iVar4 + -0x7654) >> 0x1f);
	iVar8 = (uVar1 + (uVar1 >> 0x1f)) * (uVar2 + (uVar2 >> 0x1f));
	SetCursor_(1);
	if (iVar8 < iVar7) {
		lVar9 = 4;
		iVar7 = *(int *)(iVar4 + -0x77a8) + **(int **)(iVar4 + -0x77ac) * 0x55ec;
		iVar4 = iVar7;
		do {
			if (*(char *)(iVar4 + 0x482c) == '\0') {
				iVar8 = iVar8 + 1;
			}
			if (*(char *)(iVar4 + 0x482d) == '\0') {
				iVar8 = iVar8 + 1;
			}
			if (*(char *)(iVar4 + 0x482e) == '\0') {
				iVar8 = iVar8 + 1;
			}
			if (*(char *)(iVar4 + 0x482f) == '\0') {
				iVar8 = iVar8 + 1;
			}
			if (*(char *)(iVar4 + 0x4830) == '\0') {
				iVar8 = iVar8 + 1;
			}
			if (*(char *)(iVar4 + 0x4831) == '\0') {
				iVar8 = iVar8 + 1;
			}
			if (*(char *)(iVar4 + 0x4832) == '\0') {
				iVar8 = iVar8 + 1;
			}
			if (*(char *)(iVar4 + 0x4833) == '\0') {
				iVar8 = iVar8 + 1;
			}
			if (*(char *)(iVar4 + 0x4834) == '\0') {
				iVar8 = iVar8 + 1;
			}
			if (*(char *)(iVar4 + 0x4835) == '\0') {
				iVar8 = iVar8 + 1;
			}
			iVar4 = iVar4 + 10;
			lVar9 = lVar9 + -1;
		} while (lVar9 != 0);
		uVar3 = (ulonglong) * (uint *)(iVar7 + 0x4828);
		if (0 < (int)*(uint *)(iVar7 + 0x4828)) {
			do {
				if (*(int *)(iVar7 + 0xeb0) == 0xb) {
					uVar1 = *(uint *)(iVar7 + 0xf6c);
					if (uVar1 != 5000) {
						if ((int)((int)uVar6 + uVar1) < 0x1389) {
							uVar6 = 0;
						} else {
							uVar6 = uVar6 - (5000 - (ulonglong)uVar1);
						}
					}
				}
				iVar7 = iVar7 + 0x170;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
		}
		iVar7 = (int)uVar6;
		uVar1 = iVar7 / 5000 + (iVar7 >> 0x1f);
		iVar4 = uVar1 + (uVar1 >> 0x1f);
		if (uVar6 != (((longlong)(int)((ulonglong)((longlong)iVar7 * 0x68db8bad) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar1) + (ulonglong)(uVar1 >> 0x1f)) * 5000) {
			iVar4 = iVar4 + 1;
		}
		if (iVar8 < iVar4) {
			BVar5 = 0;
		} else {
			BVar5 = 1;
		}
	} else {
		BVar5 = 1;
	}
	return BVar5;
}

void PlaceStoreGold(int v)

{
	int i;
	int iVar1;
	uint uVar2;
	bool bVar3;
	int pnum;
	int iVar4;
	int *piVar5;
	int *piVar6;
	int *piVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	longlong lVar11;

	bVar3 = false;
	iVar8 = 0;
	while (true) {
		if (0x27 < iVar8) {
			return;
		}
		if (bVar3)
			break;
		uVar2 = iVar8 / 10 + (iVar8 >> 0x1f);
		iVar9 = (uVar2 + (uVar2 >> 0x1f)) * 10;
		iVar10 = iVar8 + (uVar2 + (uVar2 >> 0x1f)) * -10;
		if (*(char *)(myplr * 0x55ec + iVar10 + iVar9 + 0x1018b6ec) == '\0') {
			i = *(int *)((int)plr + myplr * 0x55ec + 0x4828);
			GetGoldSeed(myplr, (ItemStruct *)&DAT_1019fee4);
			pnum = myplr;
			lVar11 = 0x2e;
			iVar4 = myplr * 0x55ec;
			piVar7 = &((PlayerStruct *)((int)plr + iVar4))->_pmode + i * 0x5c;
			piVar5 = &gossipstart;
			piVar6 = piVar7 + 0x3a8;
			do {
				iVar1 = piVar5[3];
				piVar6[2] = piVar5[2];
				piVar6[3] = iVar1;
				lVar11 = lVar11 + -1;
				piVar5 = piVar5 + 2;
				piVar6 = piVar6 + 2;
			} while (lVar11 != 0);
			*(int *)((int)plr + iVar4 + 0x4828) = *(int *)((int)plr + iVar4 + 0x4828) + 1;
			*(undefined *)((int)(PlayerStruct *)((int)plr + iVar4) + iVar10 + iVar9 + 0x482c) = (char)*(undefined4 *)((int)plr + iVar4 + 0x4828);
			piVar7[0x3db] = v;
			SetGoldCurs(pnum, i);
			bVar3 = true;
		}
		iVar8 = iVar8 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void StoreSellItem(void)

{
	char cVar1;
	undefined4 uVar2;
	int iVar3;
	int pnum;
	int iVar4;
	int i;
	int iVar5;
	undefined4 *puVar6;
	undefined4 *puVar7;
	undefined *puVar8;
	undefined *puVar9;
	int v;
	longlong lVar10;

	iVar4 = _DAT_101ab498 + (stextlhold - _DAT_101ab488 >> 2);
	cVar1 = (&DAT_101a0054)[iVar4];
	if (cVar1 < '\0') {
		RemoveSpdBarItem(myplr, -((int)cVar1 + 1));
	} else {
		RemoveInvItem(myplr, (int)cVar1);
	}
	i = _storenumh + -1;
	puVar8 = &DAT_101a0084 + iVar4 * 0x170;
	v = *(int *)(iVar4 * 0x170 + 0x101a014c);
	_storenumh = i;
	if (iVar4 != i) {
		puVar9 = &DAT_101a0054 + iVar4;
		_storenumh = i;
		while (iVar4 < i) {
			lVar10 = 0x2e;
			puVar6 = (undefined4 *)(puVar8 + 0x168);
			puVar7 = (undefined4 *)(puVar8 + -8);
			do {
				uVar2 = puVar6[3];
				puVar7[2] = puVar6[2];
				puVar7[3] = uVar2;
				lVar10 = lVar10 + -1;
				puVar6 = puVar6 + 2;
				puVar7 = puVar7 + 2;
			} while (lVar10 != 0);
			puVar8 = puVar8 + 0x170;
			iVar4 = iVar4 + 1;
			*puVar9 = puVar9[1];
			puVar9 = puVar9 + 1;
		}
	}
	i = 0;
	iVar4 = 0;
	*(int *)((int)plr + myplr * 0x55ec + 0x1c8) = *(int *)((int)plr + myplr * 0x55ec + 0x1c8) + v;
	while ((pnum = myplr, i < *(int *)((int)plr + myplr * 0x55ec + 0x4828) && (0 < v))) {
		iVar5 = (int)&((PlayerStruct *)((int)plr + myplr * 0x55ec))->_pmode + iVar4;
		if (*(int *)(iVar5 + 0xeb0) == 0xb) {
			iVar3 = *(int *)(iVar5 + 0xf6c);
			if (iVar3 != 5000) {
				if (v + iVar3 < 0x1389) {
					*(int *)(iVar5 + 0xf6c) = v + iVar3;
					SetGoldCurs(pnum, i);
					v = 0;
				} else {
					*(int *)(iVar5 + 0xf6c) = 5000;
					v = v - (5000 - iVar3);
					SetGoldCurs(pnum, i);
				}
			}
		}
		iVar4 = iVar4 + 0x170;
		i = i + 1;
	}
	if (0 < v) {
		while (5000 < v) {
			PlaceStoreGold(5000);
			v = v + -5000;
		}
		PlaceStoreGold(v);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_SSellEnter(void)

{
	undefined4 uVar1;
	int idx;
	BOOL BVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	longlong lVar5;

	if (stextsel == 0x16) {
		StartStore('\x01');
		stextsel = 0x10;
	} else {
		stextshold = 3;
		lVar5 = 0x2e;
		stextlhold = stextsel;
		_DAT_101ab498 = _stextsval;
		idx = _stextsval + (stextsel - _DAT_101ab488 >> 2);
		puVar3 = (undefined4 *)(idx * 0x170 + 0x101a007c);
		puVar4 = (undefined4 *)((int)plr + myplr * 0x55ec + 0x53cc);
		do {
			uVar1 = puVar3[3];
			puVar4[2] = puVar3[2];
			puVar4[3] = uVar1;
			lVar5 = lVar5 + -1;
			puVar3 = puVar3 + 2;
			puVar4 = puVar4 + 2;
		} while (lVar5 != 0);
		BVar2 = StoreGoldFit(idx);
		if (BVar2 == 0) {
			StartStore('\n');
		} else {
			StartStore('\v');
		}
	}
	return;
}

void SmithRepairItem(void)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar3 = 0x100f8fd0;
	TakePlrsMoney(*(int *)((int)plr + myplr * 0x55ec + 0x549c));
	iVar2 = *(int *)(iVar3 + -0x6f28);
	iVar4 = **(int **)(iVar3 + -0x6f38) + (**(int **)(iVar3 + -0x6f0c) - **(int **)(iVar3 + -0x6f18) >> 2);
	iVar3 = iVar4 * 0x170;
	*(undefined4 *)(iVar3 + 0x101a0170) = *(undefined4 *)(iVar3 + 0x101a0174);
	cVar1 = *(char *)(iVar2 + iVar4);
	if (cVar1 < '\0') {
		if (cVar1 == -1) {
			*(undefined4 *)((int)plr + myplr * 0x55ec + 0x584) = *(undefined4 *)((int)plr + myplr * 0x55ec + 0x588);
		}
		if (cVar1 == -2) {
			*(undefined4 *)((int)plr + myplr * 0x55ec + 0xe24) = *(undefined4 *)((int)plr + myplr * 0x55ec + 0xe28);
		}
		if (cVar1 == -3) {
			*(undefined4 *)((int)plr + myplr * 0x55ec + 0xb44) = *(undefined4 *)((int)plr + myplr * 0x55ec + 0xb48);
		}
		if (cVar1 == -4) {
			*(undefined4 *)((int)plr + myplr * 0x55ec + 0xcb4) = *(undefined4 *)((int)plr + myplr * 0x55ec + 0xcb8);
		}
	} else {
		iVar2 = (int)plr + (int)cVar1 * 0x170 + myplr * 0x55ec;
		*(undefined4 *)(iVar2 + 0xf94) = *(undefined4 *)(iVar2 + 0xf98);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_SRepairEnter(void)

{
	undefined4 uVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	int iVar4;
	int iVar5;
	longlong lVar6;

	if (stextsel == 0x16) {
		StartStore('\x01');
		stextsel = 0x12;
	} else {
		stextshold = 4;
		lVar6 = 0x2e;
		stextlhold = stextsel;
		_DAT_101ab498 = _stextsval;
		iVar4 = (_stextsval + (stextsel - _DAT_101ab488 >> 2)) * 0x170;
		iVar5 = myplr * 0x55ec;
		puVar2 = (undefined4 *)(iVar4 + 0x101a007c);
		puVar3 = (undefined4 *)((int)plr + iVar5 + 0x53cc);
		do {
			uVar1 = puVar2[3];
			puVar3[2] = puVar2[2];
			puVar3[3] = uVar1;
			lVar6 = lVar6 + -1;
			puVar2 = puVar2 + 2;
			puVar3 = puVar3 + 2;
		} while (lVar6 != 0);
		if (*(int *)((int)plr + iVar5 + 0x1c8) < *(int *)(iVar4 + 0x101a014c)) {
			StartStore('\t');
		} else {
			StartStore('\v');
		}
	}
	return;
}

void S_WitchEnter(void)

{
	switch (stextsel) {
	case 0xc:
		talker = 6;
		stextshold = 5;
		stextlhold = 0xc;
		gossipstart = 0xd5;
		gossipend = 0xdf;
		StartStore('\x13');
		break;
	case 0xe:
		StartStore('\x06');
		break;
	case 0x10:
		StartStore('\a');
		break;
	case 0x12:
		StartStore('\b');
		break;
	case 0x14:
		stextflag = 0;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void WitchBuyItem(void)

{
	undefined4 uVar1;
	int iVar2;
	int iVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	undefined *puVar6;
	longlong lVar7;

	iVar2 = _DAT_101ab498 + (stextlhold - _DAT_101ab488 >> 2);
	if (iVar2 < 3) {
		iVar3 = GetRndSeed();
		*(int *)((int)plr + myplr * 0x55ec + 0x53d4) = iVar3;
	}
	TakePlrsMoney(*(int *)((int)plr + myplr * 0x55ec + 0x549c));
	StoreAutoPlace();
	if (iVar2 < 3) {
		CalcPlrInv(myplr, 1);
	} else {
		if (iVar2 == 0x13) {
			uRam101a7f10 = 0xffffffff;
		} else {
			puVar6 = &DAT_101a63b8 + iVar2 * 0x170;
			while (*(int *)(puVar6 + 0x178) != -1) {
				lVar7 = 0x2e;
				puVar4 = (undefined4 *)(puVar6 + 0x168);
				puVar5 = (undefined4 *)(puVar6 + -8);
				do {
					uVar1 = puVar4[3];
					puVar5[2] = puVar4[2];
					puVar5[3] = uVar1;
					lVar7 = lVar7 + -1;
					puVar4 = puVar4 + 2;
					puVar5 = puVar5 + 2;
				} while (lVar7 != 0);
				puVar6 = puVar6 + 0x170;
				iVar2 = iVar2 + 1;
			}
			*(undefined4 *)(iVar2 * 0x170 + 0x101a63c0) = 0xffffffff;
		}
		CalcPlrInv(myplr, 1);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_WBuyEnter(void)

{
	undefined4 uVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	int ii;
	longlong lVar7;

	if (stextsel == 0x16) {
		StartStore('\x05');
		stextsel = 0xe;
	} else {
		stextshold = 6;
		stextlhold = stextsel;
		_DAT_101ab498 = _stextsval;
		ii = myplr * 0x55ec;
		iVar4 = (_stextsval + (stextsel - _DAT_101ab488 >> 2)) * 0x170;
		if (*(int *)((int)plr + ii + 0x1c8) < *(int *)(iVar4 + 0x101a6480)) {
			StartStore('\t');
		} else {
			lVar7 = 0x2e;
			puVar5 = (undefined4 *)(iVar4 + 0x101a63b0);
			puVar6 = (undefined4 *)((int)plr + ii + 0x53cc);
			do {
				uVar1 = puVar5[3];
				puVar6[2] = puVar5[2];
				puVar6[3] = uVar1;
				lVar7 = lVar7 + -1;
				puVar5 = puVar5 + 2;
				puVar6 = puVar6 + 2;
			} while (lVar7 != 0);
			SetCursor_(*(int *)((int)plr + ii + 0x5494) + 0xc);
			iVar4 = 0;
			ii = 0;
			while ((ii < 0x28 && (iVar4 == 0))) {
				uVar2 = _DAT_10128618 / 0x1c + (_DAT_10128618 >> 0x1f);
				uVar3 = _DAT_10128614 / 0x1c + (_DAT_10128614 >> 0x1f);
				iVar4 = SpecialAutoPlace(myplr, ii, uVar2 + (uVar2 >> 0x1f), uVar3 + (uVar3 >> 0x1f), 0);
				ii = ii + 1;
			}
			if (iVar4 == 0) {
				StartStore('\n');
			} else {
				StartStore('\v');
			}
			SetCursor_(1);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_WSellEnter(void)

{
	undefined4 uVar1;
	int idx;
	BOOL BVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	longlong lVar5;

	if (stextsel == 0x16) {
		StartStore('\x05');
		stextsel = 0x10;
	} else {
		stextshold = 7;
		lVar5 = 0x2e;
		stextlhold = stextsel;
		_DAT_101ab498 = _stextsval;
		idx = _stextsval + (stextsel - _DAT_101ab488 >> 2);
		puVar3 = (undefined4 *)(idx * 0x170 + 0x101a007c);
		puVar4 = (undefined4 *)((int)plr + myplr * 0x55ec + 0x53cc);
		do {
			uVar1 = puVar3[3];
			puVar4[2] = puVar3[2];
			puVar4[3] = uVar1;
			lVar5 = lVar5 + -1;
			puVar3 = puVar3 + 2;
			puVar4 = puVar4 + 2;
		} while (lVar5 != 0);
		BVar2 = StoreGoldFit(idx);
		if (BVar2 == 0) {
			StartStore('\n');
		} else {
			StartStore('\v');
		}
	}
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void WitchRechargeItem(void)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar3 = 0x100f8fd0;
	TakePlrsMoney(*(int *)((int)plr + myplr * 0x55ec + 0x549c));
	iVar2 = *(int *)(iVar3 + -0x6f28);
	iVar4 = **(int **)(iVar3 + -0x6f38) + (**(int **)(iVar3 + -0x6f0c) - **(int **)(iVar3 + -0x6f18) >> 2);
	iVar3 = iVar4 * 0x170;
	*(undefined4 *)(iVar3 + 0x101a0168) = *(undefined4 *)(iVar3 + 0x101a016c);
	cVar1 = *(char *)(iVar2 + iVar4);
	if (cVar1 < '\0') {
		*(undefined4 *)((int)plr + myplr * 0x55ec + 0xb3c) = *(undefined4 *)((int)plr + myplr * 0x55ec + 0xb40);
	} else {
		iVar2 = (int)plr + (int)cVar1 * 0x170 + myplr * 0x55ec;
		*(undefined4 *)(iVar2 + 0xf8c) = *(undefined4 *)(iVar2 + 0xf90);
	}
	CalcPlrInv(myplr, 1);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_WRechargeEnter(void)

{
	undefined4 uVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	int iVar4;
	int iVar5;
	longlong lVar6;

	if (stextsel == 0x16) {
		StartStore('\x05');
		stextsel = 0x12;
	} else {
		stextshold = 8;
		lVar6 = 0x2e;
		stextlhold = stextsel;
		_DAT_101ab498 = _stextsval;
		iVar4 = (_stextsval + (stextsel - _DAT_101ab488 >> 2)) * 0x170;
		iVar5 = myplr * 0x55ec;
		puVar2 = (undefined4 *)(iVar4 + 0x101a007c);
		puVar3 = (undefined4 *)((int)plr + iVar5 + 0x53cc);
		do {
			uVar1 = puVar2[3];
			puVar3[2] = puVar2[2];
			puVar3[3] = uVar1;
			lVar6 = lVar6 + -1;
			puVar2 = puVar2 + 2;
			puVar3 = puVar3 + 2;
		} while (lVar6 != 0);
		if (*(int *)((int)plr + iVar5 + 0x1c8) < *(int *)(iVar4 + 0x101a014c)) {
			StartStore('\t');
		} else {
			StartStore('\v');
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_BoyEnter(void)

{
	if ((iRam101a6250 == -1) || (stextsel != 0x12)) {
		if (((stextsel == 8) && (iRam101a6250 != -1)) || ((stextsel == 0xc && (iRam101a6250 == -1)))) {
			talker = 8;
			stextshold = 0xc;
			stextlhold = stextsel;
			gossipstart = 0xe1;
			gossipend = 0xea;
			StartStore('\x13');
		} else {
			stextflag = 0;
		}
	} else {
		if (*(int *)((int)plr + myplr * 0x55ec + 0x1c8) < 0x32) {
			stextshold = 0xc;
			stextlhold = 0x12;
			_DAT_101ab498 = _stextsval;
			StartStore('\t');
		} else {
			TakePlrsMoney(0x32);
			StartStore('\r');
		}
	}
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void BoyBuyItem(void)

{
	undefined4 *puVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	TakePlrsMoney(*(int *)((int)plr + myplr * 0x55ec + 0x549c));
	StoreAutoPlace();
	puVar1 = *(undefined4 **)(iVar2 + -0x6f2c);
	*(undefined4 *)(*(int *)(iVar2 + -0x71bc) + 8) = 0xffffffff;
	*puVar1 = 0xc;
	CalcPlrInv(myplr, 1);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void HealerBuyItem(void)

{
	undefined4 uVar1;
	int iVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	undefined *puVar5;
	int iVar6;
	longlong lVar7;

	iVar6 = _DAT_101ab498 + (stextlhold - _DAT_101ab488 >> 2);
	if (gbMaxPlayers == '\x01') {
		if (iVar6 < 2) {
			iVar2 = GetRndSeed();
			*(int *)((int)plr + myplr * 0x55ec + 0x53d4) = iVar2;
		}
	} else {
		if (iVar6 < 3) {
			iVar2 = GetRndSeed();
			*(int *)((int)plr + myplr * 0x55ec + 0x53d4) = iVar2;
		}
	}
	TakePlrsMoney(*(int *)((int)plr + myplr * 0x55ec + 0x549c));
	if (*(char *)((int)plr + myplr * 0x55ec + 0x5410) == '\0') {
		*(undefined4 *)((int)plr + myplr * 0x55ec + 0x540c) = 0;
	}
	StoreAutoPlace();
	if (gbMaxPlayers == '\x01') {
		if (iVar6 < 2) {
			return;
		}
	} else {
		if (iVar6 < 3) {
			return;
		}
	}
	iVar6 = _DAT_101ab498 + (stextlhold - _DAT_101ab488 >> 2);
	if (iVar6 == 0x13) {
		uRam101a60dc = 0xffffffff;
	} else {
		puVar5 = &DAT_101a4584 + iVar6 * 0x170;
		while (*(int *)(puVar5 + 0x178) != -1) {
			lVar7 = 0x2e;
			puVar3 = (undefined4 *)(puVar5 + 0x168);
			puVar4 = (undefined4 *)(puVar5 + -8);
			do {
				uVar1 = puVar3[3];
				puVar4[2] = puVar3[2];
				puVar4[3] = uVar1;
				lVar7 = lVar7 + -1;
				puVar3 = puVar3 + 2;
				puVar4 = puVar4 + 2;
			} while (lVar7 != 0);
			puVar5 = puVar5 + 0x170;
			iVar6 = iVar6 + 1;
		}
		*(undefined4 *)(iVar6 * 0x170 + 0x101a458c) = 0xffffffff;
	}
	CalcPlrInv(myplr, 1);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_BBuyEnter(void)

{
	undefined4 uVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	int ii;
	longlong lVar7;

	if (stextsel == 10) {
		stextshold = 0xd;
		stextlhold = 10;
		_DAT_101ab498 = _stextsval;
		iVar4 = myplr * 0x55ec;
		if (*(int *)((int)plr + iVar4 + 0x1c8) < iRam101a6310 + (iRam101a6310 >> 1)) {
			StartStore('\t');
		} else {
			lVar7 = 0x2e;
			puVar5 = (undefined4 *)0x101a6240;
			puVar6 = (undefined4 *)((int)plr + iVar4 + 0x53cc);
			do {
				uVar1 = puVar5[3];
				puVar6[2] = puVar5[2];
				puVar6[3] = uVar1;
				lVar7 = lVar7 + -1;
				puVar5 = puVar5 + 2;
				puVar6 = puVar6 + 2;
			} while (lVar7 != 0);
			ii = *(int *)((int)plr + iVar4 + 0x549c);
			*(int *)((int)plr + iVar4 + 0x549c) = ii + (ii >> 1);
			SetCursor_(*(int *)((int)plr + iVar4 + 0x5494) + 0xc);
			iVar4 = 0;
			ii = 0;
			while ((ii < 0x28 && (iVar4 == 0))) {
				uVar2 = _DAT_10128618 / 0x1c + (_DAT_10128618 >> 0x1f);
				uVar3 = _DAT_10128614 / 0x1c + (_DAT_10128614 >> 0x1f);
				iVar4 = AutoPlace(myplr, ii, uVar2 + (uVar2 >> 0x1f), uVar3 + (uVar3 >> 0x1f), 0);
				ii = ii + 1;
			}
			if (iVar4 == 0) {
				StartStore('\n');
			} else {
				StartStore('\v');
			}
			SetCursor_(1);
		}
	} else {
		stextflag = 0;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void StoryIdItem(void)

{
	char cVar1;
	int iVar2;

	cVar1 = (&DAT_101a0054)[_DAT_101ab498 + (stextlhold - _DAT_101ab488 >> 2)];
	if (cVar1 < '\0') {
		if (cVar1 == -1) {
			*(undefined4 *)((int)plr + myplr * 0x55ec + 0x4d0) = 1;
		}
		if (cVar1 == -2) {
			*(undefined4 *)((int)plr + myplr * 0x55ec + 0xd70) = 1;
		}
		if (cVar1 == -3) {
			*(undefined4 *)((int)plr + myplr * 0x55ec + 0xa90) = 1;
		}
		if (cVar1 == -4) {
			*(undefined4 *)((int)plr + myplr * 0x55ec + 0xc00) = 1;
		}
		if (cVar1 == -5) {
			*(undefined4 *)((int)plr + myplr * 0x55ec + 0x640) = 1;
		}
		if (cVar1 == -6) {
			*(undefined4 *)((int)plr + myplr * 0x55ec + 0x7b0) = 1;
		}
		if (cVar1 == -7) {
			*(undefined4 *)((int)plr + myplr * 0x55ec + 0x920) = 1;
		}
	} else {
		*(undefined4 *)((int)plr + myplr * 0x55ec + (int)cVar1 * 0x170 + 0xee0) = 1;
	}
	iVar2 = myplr * 0x55ec;
	*(undefined4 *)((int)plr + iVar2 + 0x540c) = 1;
	TakePlrsMoney(*(int *)((int)plr + iVar2 + 0x549c));
	CalcPlrInv(myplr, 1);
	return;
}

void S_ConfirmEnter(void)

{
	int iVar1;

	iVar1 = 0x100f8fd0;
	if (stextsel == 0x12) {
		switch (stextshold) {
		case 2:
			SmithBuyItem();
			break;
		case 3:
		case 7:
			StoreSellItem();
			break;
		case 4:
			SmithRepairItem();
			break;
		case 6:
			WitchBuyItem();
			break;
		case 8:
			WitchRechargeItem();
			break;
		case 0xd:
			BoyBuyItem();
			break;
		case 0x10:
			HealerBuyItem();
			break;
		case 0x11:
			StoryIdItem();
			StartStore('\x14');
			return;
		case 0x12:
			SmithBuyPItem();
		}
		StartStore((char)stextshold);
	} else {
		StartStore((char)stextshold);
		stextsel = **(int **)(iVar1 + -0x6f0c);
		**(undefined4 **)(iVar1 + -0x6f14) = **(undefined4 **)(iVar1 + -0x6f38);
	}
	return;
}

void S_HealerEnter(void)

{
	undefined4 *puVar1;
	int iVar2;

	iVar2 = 0x100f8fd0;
	switch (stextsel) {
	case 0xc:
		talker = 1;
		stextshold = 0xe;
		stextlhold = 0xc;
		gossipstart = 0xaa;
		gossipend = 0xb2;
		StartStore('\x13');
		break;
	case 0xe:
		if (*(int *)((int)plr + myplr * 0x55ec + 0x194) != *(int *)((int)plr + myplr * 0x55ec + 0x198)) {
			iVar2 = 0x100f8fd0;
			PlaySFX(0x52);
		}
		puVar1 = *(undefined4 **)(iVar2 + -0x76f0);
		iVar2 = myplr * 0x55ec;
		*(undefined4 *)((int)plr + iVar2 + 0x194) = *(undefined4 *)((int)plr + iVar2 + 0x198);
		*(undefined4 *)((int)plr + iVar2 + 0x18c) = *(undefined4 *)((int)plr + iVar2 + 400);
		*puVar1 = 1;
		break;
	case 0x10:
		StartStore('\x10');
		break;
	case 0x12:
		stextflag = 0;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_HBuyEnter(void)

{
	undefined4 uVar1;
	uint uVar2;
	uint uVar3;
	int iVar4;
	undefined4 *puVar5;
	undefined4 *puVar6;
	int ii;
	longlong lVar7;

	if (stextsel == 0x16) {
		StartStore('\x0e');
		stextsel = 0x10;
	} else {
		stextshold = 0x10;
		stextlhold = stextsel;
		_DAT_101ab498 = _stextsval;
		ii = myplr * 0x55ec;
		iVar4 = (_stextsval + (stextsel - _DAT_101ab488 >> 2)) * 0x170;
		if (*(int *)((int)plr + ii + 0x1c8) < *(int *)(iVar4 + 0x101a464c)) {
			StartStore('\t');
		} else {
			lVar7 = 0x2e;
			puVar5 = (undefined4 *)(iVar4 + 0x101a457c);
			puVar6 = (undefined4 *)((int)plr + ii + 0x53cc);
			do {
				uVar1 = puVar5[3];
				puVar6[2] = puVar5[2];
				puVar6[3] = uVar1;
				lVar7 = lVar7 + -1;
				puVar5 = puVar5 + 2;
				puVar6 = puVar6 + 2;
			} while (lVar7 != 0);
			SetCursor_(*(int *)((int)plr + ii + 0x5494) + 0xc);
			iVar4 = 0;
			ii = 0;
			while ((ii < 0x28 && (iVar4 == 0))) {
				uVar2 = _DAT_10128618 / 0x1c + (_DAT_10128618 >> 0x1f);
				uVar3 = _DAT_10128614 / 0x1c + (_DAT_10128614 >> 0x1f);
				iVar4 = SpecialAutoPlace(myplr, ii, uVar2 + (uVar2 >> 0x1f), uVar3 + (uVar3 >> 0x1f), 0);
				ii = ii + 1;
			}
			if (iVar4 == 0) {
				StartStore('\n');
			} else {
				StartStore('\v');
			}
			SetCursor_(1);
		}
	}
	return;
}

void S_StoryEnter(void)

{
	if (stextsel == 0xe) {
		StartStore('\x11');
	} else {
		if (stextsel < 0xe) {
			if (stextsel == 0xc) {
				talker = 4;
				stextshold = 0xf;
				stextlhold = 0xc;
				gossipstart = 0x97;
				gossipend = 0x9f;
				StartStore('\x13');
			}
		} else {
			if (stextsel == 0x12) {
				stextflag = 0;
			}
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void S_SIDEnter(void)

{
	undefined4 uVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	int iVar4;
	int iVar5;
	longlong lVar6;

	if (stextsel == 0x16) {
		StartStore('\x0f');
		stextsel = 0xe;
	} else {
		stextshold = 0x11;
		lVar6 = 0x2e;
		stextlhold = stextsel;
		_DAT_101ab498 = _stextsval;
		iVar4 = (_stextsval + (stextsel - _DAT_101ab488 >> 2)) * 0x170;
		iVar5 = myplr * 0x55ec;
		puVar2 = (undefined4 *)(iVar4 + 0x101a007c);
		puVar3 = (undefined4 *)((int)plr + iVar5 + 0x53cc);
		do {
			uVar1 = puVar2[3];
			puVar3[2] = puVar2[2];
			puVar3[3] = uVar1;
			lVar6 = lVar6 + -1;
			puVar2 = puVar2 + 2;
			puVar3 = puVar3 + 2;
		} while (lVar6 != 0);
		if (*(int *)((int)plr + iVar5 + 0x1c8) < *(int *)(iVar4 + 0x101a014c)) {
			StartStore('\t');
		} else {
			StartStore('\v');
		}
	}
	return;
}

// WARNING: Unknown calling convention yet parameter storage is locked

void S_TalkEnter(void)

{
	QuestStruct *pQVar1;
	int iVar2;
	int *piVar3;
	int iVar4;
	int iVar5;
	QuestStruct *pQVar6;
	int iVar7;
	longlong lVar8;

	iVar2 = 0x100f8fd0;
	if (stextsel == 0x16) {
		StartStore((char)stextshold);
		stextsel = **(int **)(iVar2 + -0x6f0c);
	} else {
		pQVar6 = quests;
		lVar8 = 4;
		piVar3 = (int *)(&DAT_10120008 + talker * 0x40);
		iVar4 = 0;
		pQVar1 = pQVar6;
		do {
			if (((pQVar1->_qactive == '\x02') && (*piVar3 != -1)) && (pQVar1->_qlog != 0)) {
				iVar4 = iVar4 + 1;
			}
			if (((pQVar1[1]._qactive == '\x02') && (piVar3[1] != -1)) && (pQVar1[1]._qlog != 0)) {
				iVar4 = iVar4 + 1;
			}
			if (((pQVar1[2]._qactive == '\x02') && (piVar3[2] != -1)) && (pQVar1[2]._qlog != 0)) {
				iVar4 = iVar4 + 1;
			}
			if (((pQVar1[3]._qactive == '\x02') && (piVar3[3] != -1)) && (pQVar1[3]._qlog != 0)) {
				iVar4 = iVar4 + 1;
			}
			pQVar1 = pQVar1 + 4;
			piVar3 = piVar3 + 4;
			lVar8 = lVar8 + -1;
		} while (lVar8 != 0);
		if (iVar4 < 7) {
			iVar4 = 0xf - iVar4;
			iVar5 = 2;
		} else {
			iVar4 = 0xe - (iVar4 >> 1);
			iVar5 = 1;
		}
		if (stextsel == iVar4 + -2) {
			SetRndSeed(*(int *)(talker * 0x10c + 0x101aba50));
			iVar2 = random('\0', (**(int **)(iVar2 + -0x6f40) - gossipstart) + 1);
			InitQTextMsg(gossipstart + iVar2);
		} else {
			iVar2 = 0;
			iVar7 = 0;
			do {
				if (((pQVar6->_qactive == '\x02') && (*(int *)(&DAT_10120008 + talker * 0x40 + iVar7) != -1)) && (pQVar6->_qlog != 0)) {
					if (iVar4 == stextsel) {
						InitQTextMsg(*(int *)(&DAT_10120008 + talker * 0x40 + iVar7));
					}
					iVar4 = iVar4 + iVar5;
				}
				iVar2 = iVar2 + 1;
				iVar7 = iVar7 + 4;
				pQVar6 = pQVar6 + 1;
			} while (iVar2 < 0x10);
		}
	}
	return;
}

void S_TavernEnter(void)

{
	if (stextsel == 0x12) {
		stextflag = 0;
	} else {
		if ((stextsel < 0x12) && (stextsel == 0xc)) {
			talker = 3;
			stextshold = 0x15;
			stextlhold = 0xc;
			gossipstart = 0xa1;
			gossipend = 0xa8;
			StartStore('\x13');
		}
	}
	return;
}

void S_BarmaidEnter(void)

{
	if (stextsel == 0x12) {
		stextflag = 0;
	} else {
		if ((stextsel < 0x12) && (stextsel == 0xc)) {
			talker = 7;
			stextshold = 0x17;
			stextlhold = 0xc;
			gossipstart = 0xb4;
			gossipend = 0xbb;
			StartStore('\x13');
		}
	}
	return;
}

void S_DrunkEnter(void)

{
	if (stextsel == 0x12) {
		stextflag = 0;
	} else {
		if ((stextsel < 0x12) && (stextsel == 0xc)) {
			talker = 5;
			stextshold = 0x16;
			stextlhold = 0xc;
			gossipstart = 0xc9;
			gossipend = 0xd3;
			StartStore('\x13');
		}
	}
	return;
}

void STextEnter(void)

{
	int iVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	ulonglong in_r5;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	iVar1 = 0x100f8fd0;
	uVar3 = ZEXT48(&DAT_1014919d);
	if (DAT_1014919d == '\0') {
		PlaySFX(0x46);
		if (((longlong) * *(char **)(iVar1 + -0x7764) & 0xffffffffU) < 0x18) {
			// WARNING: Could not recover jumptable at 0x100ace20. Too many branches
			// WARNING: Treating indirect jump as call
			(**(code **)(*(int *)(iVar1 + -0x580c) + (int)**(char **)(iVar1 + -0x7764) * 4))();
			return;
		}
	} else {
		uVar2 = ZEXT48(&leveltype);
		DAT_1014919d = '\0';
		if (leveltype == '\0') {
			sfx_stop();
		}
		FUN_1005bd38(uVar2, uVar3, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffc8);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void CheckStoreBtn(void)

{
	uint uVar1;
	int iVar2;
	ulonglong uVar3;
	ulonglong uVar4;
	ulonglong uVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar8;
	undefined4 in_stack_ffffffb8;

	uVar4 = ZEXT48(&DAT_1014919d);
	uVar7 = ZEXT48(&MouseX);
	uVar6 = ZEXT48(&stextsel);
	uVar5 = ZEXT48(&DAT_101aa5e0);
	if (DAT_1014919d == '\0') {
		if (((stextsel != -1) && (0x1f < _MouseY)) && (_MouseY < 0x141)) {
			if (DAT_101ab4ac == '\0') {
				if (MouseX < 0x158) {
					return;
				}
			} else {
				if (MouseX < 0x18) {
					return;
				}
			}
			if (MouseX < 0x269) {
				uVar1 = (_MouseY + -0x20) / 6 + (_MouseY + -0x20 >> 0x1f) >> 1;
				iVar8 = uVar1 + (uVar1 >> 0x1f);
				if ((_DAT_101ab494 == 0) || (MouseX < 0x259)) {
					if (4 < iVar8) {
						if (0x16 < iVar8) {
							iVar8 = 0x16;
						}
						if (((_DAT_101ab494 != 0) && (iVar8 < 0x15)) && (iVar2 = iVar8 * 0x9c, *(int *)(iVar2 + 0x101aa674) == 0)) {
							if (*(int *)(iVar2 + 0x101aa53c) == 0) {
								if (*(int *)(iVar2 + 0x101aa5d8) != 0) {
									iVar8 = iVar8 + -1;
								}
							} else {
								iVar8 = iVar8 + -2;
							}
						}
						if ((*(int *)(iVar8 * 0x9c + 0x101aa674) != 0) || ((_DAT_101ab494 != 0 && (iVar8 == 0x16)))) {
							stextsel = iVar8;
							STextEnter();
						}
					}
				} else {
					if (iVar8 == 4) {
						if (DAT_101ab481 < '\x01') {
							STextUp();
							DAT_101ab481 = '\n';
						} else {
							DAT_101ab481 = DAT_101ab481 + -1;
						}
					}
					if (iVar8 == 0x14) {
						if (DAT_101ab480 < '\x01') {
							STextDown();
							DAT_101ab480 = '\n';
						} else {
							DAT_101ab480 = DAT_101ab480 + -1;
						}
					}
				}
			}
		}
	} else {
		uVar3 = ZEXT48(&leveltype);
		DAT_1014919d = '\0';
		if (leveltype == '\0') {
			sfx_stop();
		}
		FUN_1005bd38(uVar3, uVar4, uVar5, uVar6, uVar7, in_r8, in_r9, in_r10, in_stack_ffffffb8);
	}
	return;
}

void ReleaseStoreBtn(void)

{
	DAT_101ab480 = 0xff;
	DAT_101ab481 = 0xff;
	return;
}
