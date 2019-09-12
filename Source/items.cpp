
void InitItemGFX(void)

{
	undefined8 uVar1;
	BYTE *pBVar2;
	undefined uVar3;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar4;
	BYTE **ppBVar5;
	undefined **ppuVar6;
	undefined4 in_stack_ffffff78;
	undefined in_stack_ffffff7f;
	undefined4 local_7c;
	undefined4 in_stack_ffffff8c;
	undefined4 in_stack_ffffff90;
	undefined4 in_stack_ffffff94;
	undefined4 in_stack_ffffff98;
	undefined4 in_stack_ffffff9c;
	undefined4 in_stack_ffffffa0;
	undefined4 in_stack_ffffffa4;
	char acStack88[88];

	uVar1 = 0x100f8fd0;
	ppuVar6 = &PTR_s_Armor2_1010370c;
	ppBVar5 = (BYTE **)&DAT_1013c974;
	iVar4 = 0;
	do {
		uVar3 = SUB41(*ppuVar6, 0);
		wsprintf((int)acStack88, "Items\\%s.CEL", *ppuVar6, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffff78,
		    in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94, in_stack_ffffff98,
		    in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4);
		pBVar2 = LoadFileInMem(acStack88, (DWORD *)0x0);
		iVar4 = iVar4 + 1;
		*ppBVar5 = pBVar2;
		ppuVar6 = ppuVar6 + 1;
		ppBVar5 = ppBVar5 + 1;
	} while (iVar4 < 0x23);
	ZeroMemory((char)*(undefined4 *)((int)uVar1 + -0x7170), 0, uVar3, (char)in_r6, (char)in_r7, (char)in_r8, (char)in_r9,
	    (char)in_r10, (char)in_stack_ffffff78, in_stack_ffffff7f, local_7c);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL ItemPlace(int xp, int yp)

{
	int iVar1;

	iVar1 = xp * 0xe0 + yp * 2;
	if (*(short *)(_DAT_1012f1b4 + iVar1) != 0) {
		return 0;
	}
	yp = xp * 0x70 + yp;
	if (*(char *)(_DAT_1012f1b8 + yp) != '\0') {
		return 0;
	}
	if (*(char *)(_DAT_1012f1a8 + yp) != '\0') {
		return 0;
	}
	if (*(char *)(_DAT_1012f1ac + yp) != '\0') {
		return 0;
	}
	if ((*(byte *)(_DAT_1012f1bc + yp) & 8) != 0) {
		return 0;
	}
	if ((&DAT_10130b33)[(int)*(short *)(_DAT_1012f1d4 + iVar1)] != '\0') {
		return 0;
	}
	return 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void AddInitItems(void)

{
	int i;
	int iVar1;
	int iVar2;
	int xp;
	int yp;
	BOOL BVar3;
	int iVar4;

	iVar2 = random('\v', 3);
	iVar4 = 0;
	while (i = _DAT_1013d58c, iVar4 < iVar2 + 3) {
		xp = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		*(int *)(&DAT_1013d788 + _DAT_1013d984 * 4) = _DAT_1013d58c;
		_DAT_1013d58c = xp;
		xp = random('\f', 0x50);
		yp = random('\f', 0x50);
		while (true) {
			xp = xp + 0x10;
			yp = yp + 0x10;
			BVar3 = ItemPlace(xp, yp);
			if (BVar3 != 0)
				break;
			xp = random('\f', 0x50);
			yp = random('\f', 0x50);
		}
		iVar1 = i * 0x170;
		*(int *)(iVar1 + 0x1013d994) = xp;
		*(int *)(iVar1 + 0x1013d998) = yp;
		*(char *)(_DAT_1012f1a8 + xp * 0x70 + yp) = (char)i + '\x01';
		xp = GetRndSeed();
		*(int *)(&DAT_1013d988 + iVar1) = xp;
		SetRndSeed(*(int *)(&DAT_1013d988 + iVar1));
		xp = random('\f', 2);
		if (xp == 0) {
			GetItemAttrs(i, 0x19, (uint)currlevel);
		} else {
			GetItemAttrs(i, 0x18, (uint)currlevel);
		}
		*(short *)(iVar1 + 0x1013d98c) = (ushort)currlevel + 0x8000;
		SetupItem(i);
		*(undefined4 *)(iVar1 + 0x1013d9a8) = *(undefined4 *)(iVar1 + 0x1013d9a4);
		*(undefined4 *)(iVar1 + 0x1013d99c) = 0;
		*(undefined *)(iVar1 + 0x1013d9b8) = 1;
		DeltaAddItem(i);
		iVar4 = iVar4 + 1;
		_DAT_1013d984 = _DAT_1013d984 + 1;
	}
	return;
}

void InitItems(void)

{
	int iVar1;
	int iVar2;
	undefined4 *puVar3;
	BOOL BVar4;
	int *piVar5;
	undefined4 *puVar6;
	undefined *puVar7;
	int *piVar8;
	int *piVar9;
	int iVar10;
	longlong lVar11;
	longlong lVar12;

	iVar2 = 0x100f8fd0;
	piVar9 = (int *)&DAT_1013d58c;
	puVar3 = (undefined4 *)&DAT_1013d788;
	puVar7 = &DAT_1013d988;
	GetItemAttrs(0, 0, 1);
	lVar11 = 0x2e;
	piVar5 = (int *)0x1013d980;
	piVar8 = &gossipstart;
	do {
		iVar10 = piVar5[3];
		piVar8[2] = piVar5[2];
		piVar8[3] = iVar10;
		lVar11 = lVar11 + -1;
		piVar5 = piVar5 + 2;
		piVar8 = piVar8 + 2;
	} while (lVar11 != 0);
	uRam101a0048 = 1;
	**(undefined4 **)(iVar2 + -0x71e4) = 0;
	lVar11 = 0xf;
	iVar10 = 0;
	do {
		iVar10 = iVar10 + 8;
		*(undefined4 *)(puVar7 + 8) = 0;
		*(undefined4 *)(puVar7 + 0xc) = 0;
		*(undefined4 *)(puVar7 + 0x10) = 0;
		*(undefined4 *)(puVar7 + 0x14) = 0;
		puVar7[0x30] = 0;
		*(undefined4 *)(puVar7 + 0x38) = 0;
		*(undefined4 *)(puVar7 + 0x34) = 0;
		*(undefined4 *)(puVar7 + 0x178) = 0;
		*(undefined4 *)(puVar7 + 0x17c) = 0;
		*(undefined4 *)(puVar7 + 0x180) = 0;
		*(undefined4 *)(puVar7 + 0x184) = 0;
		puVar7[0x1a0] = 0;
		*(undefined4 *)(puVar7 + 0x1a8) = 0;
		*(undefined4 *)(puVar7 + 0x1a4) = 0;
		*(undefined4 *)(puVar7 + 0x2e8) = 0;
		*(undefined4 *)(puVar7 + 0x2ec) = 0;
		*(undefined4 *)(puVar7 + 0x2f0) = 0;
		*(undefined4 *)(puVar7 + 0x2f4) = 0;
		puVar7[0x310] = 0;
		*(undefined4 *)(puVar7 + 0x318) = 0;
		*(undefined4 *)(puVar7 + 0x314) = 0;
		*(undefined4 *)(puVar7 + 0x458) = 0;
		*(undefined4 *)(puVar7 + 0x45c) = 0;
		*(undefined4 *)(puVar7 + 0x460) = 0;
		*(undefined4 *)(puVar7 + 0x464) = 0;
		puVar7[0x480] = 0;
		*(undefined4 *)(puVar7 + 0x488) = 0;
		*(undefined4 *)(puVar7 + 0x484) = 0;
		*(undefined4 *)(puVar7 + 0x5c8) = 0;
		*(undefined4 *)(puVar7 + 0x5cc) = 0;
		*(undefined4 *)(puVar7 + 0x5d0) = 0;
		*(undefined4 *)(puVar7 + 0x5d4) = 0;
		puVar7[0x5f0] = 0;
		*(undefined4 *)(puVar7 + 0x5f8) = 0;
		*(undefined4 *)(puVar7 + 0x5f4) = 0;
		*(undefined4 *)(puVar7 + 0x738) = 0;
		*(undefined4 *)(puVar7 + 0x73c) = 0;
		*(undefined4 *)(puVar7 + 0x740) = 0;
		*(undefined4 *)(puVar7 + 0x744) = 0;
		puVar7[0x760] = 0;
		*(undefined4 *)(puVar7 + 0x768) = 0;
		*(undefined4 *)(puVar7 + 0x764) = 0;
		*(undefined4 *)(puVar7 + 0x8a8) = 0;
		*(undefined4 *)(puVar7 + 0x8ac) = 0;
		*(undefined4 *)(puVar7 + 0x8b0) = 0;
		*(undefined4 *)(puVar7 + 0x8b4) = 0;
		puVar7[0x8d0] = 0;
		*(undefined4 *)(puVar7 + 0x8d8) = 0;
		*(undefined4 *)(puVar7 + 0x8d4) = 0;
		*(undefined4 *)(puVar7 + 0xa18) = 0;
		*(undefined4 *)(puVar7 + 0xa1c) = 0;
		*(undefined4 *)(puVar7 + 0xa20) = 0;
		*(undefined4 *)(puVar7 + 0xa24) = 0;
		puVar7[0xa40] = 0;
		*(undefined4 *)(puVar7 + 0xa48) = 0;
		*(undefined4 *)(puVar7 + 0xa44) = 0;
		puVar7 = puVar7 + 0xb80;
		lVar11 = lVar11 + -1;
	} while (lVar11 != 0);
	puVar7 = &DAT_1013d988 + iVar10 * 0x170;
	iVar1 = 0x7f - iVar10;
	if (iVar10 < 0x7f) {
		do {
			*(undefined4 *)(puVar7 + 8) = 0;
			*(undefined4 *)(puVar7 + 0xc) = 0;
			*(undefined4 *)(puVar7 + 0x10) = 0;
			*(undefined4 *)(puVar7 + 0x14) = 0;
			puVar7[0x30] = 0;
			*(undefined4 *)(puVar7 + 0x38) = 0;
			*(undefined4 *)(puVar7 + 0x34) = 0;
			puVar7 = puVar7 + 0x170;
			iVar1 = iVar1 + -1;
		} while (iVar1 != 0);
	}
	lVar12 = 0xf;
	lVar11 = 0;
	do {
		iVar10 = (int)lVar11;
		*piVar9 = iVar10;
		*puVar3 = 0;
		piVar9[1] = iVar10 + 1;
		puVar3[1] = 0;
		lVar11 = lVar11 + 8;
		piVar9[2] = iVar10 + 2;
		puVar3[2] = 0;
		piVar9[3] = iVar10 + 3;
		puVar3[3] = 0;
		piVar9[4] = iVar10 + 4;
		puVar3[4] = 0;
		piVar9[5] = iVar10 + 5;
		puVar3[5] = 0;
		piVar9[6] = iVar10 + 6;
		puVar3[6] = 0;
		piVar9[7] = iVar10 + 7;
		piVar9 = piVar9 + 8;
		puVar3[7] = 0;
		puVar3 = puVar3 + 8;
		lVar12 = lVar12 + -1;
	} while (lVar12 != 0);
	iVar10 = (int)lVar11 * 4;
	puVar3 = (undefined4 *)(&DAT_1013d58c + iVar10);
	puVar6 = (undefined4 *)(&DAT_1013d788 + iVar10);
	lVar12 = 0x7f - lVar11;
	if ((int)lVar11 < 0x7f) {
		do {
			*puVar3 = (int)lVar11;
			puVar3 = puVar3 + 1;
			lVar11 = lVar11 + 1;
			*puVar6 = 0;
			puVar6 = puVar6 + 1;
			lVar12 = lVar12 + -1;
		} while (lVar12 != 0);
	}
	if (**(char **)(iVar2 + -0x77d8) == '\0') {
		GetRndSeed();
		BVar4 = QuestStatus(0);
		if (BVar4 != 0) {
			SpawnRock();
		}
		BVar4 = QuestStatus(10);
		if (BVar4 != 0) {
			SpawnQuestItem(0x10, **(int **)(iVar2 + -0x754c) * 2 + 0x1b, **(int **)(iVar2 + -0x7550) * 2 + 0x1b, 0, 1);
		}
		if ((**(byte **)(iVar2 + -0x77e4) != 0) && (**(byte **)(iVar2 + -0x77e4) < 0x10)) {
			AddInitItems();
		}
	}
	**(undefined4 **)(iVar2 + -0x7674) = 0;
	return;
}

void CalcPlrItemVals(int p, BOOL Loadgfx)

{
	undefined4 *puVar1;
	longlong lVar2;
	int iVar3;
	undefined8 uVar4;
	int iVar5;
	longlong lVar6;
	uint uVar7;
	int pnum;
	int *piVar8;
	ulonglong uVar9;
	char cVar10;
	ulonglong uVar11;
	int iVar12;
	undefined uVar13;
	int iVar14;
	undefined uVar15;
	int iVar16;
	undefined uVar17;
	uint uVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int r;
	longlong lVar25;
	longlong lVar26;
	BOOL BStack0000001c;
	uint local_98;
	int local_90;
	int local_8c;
	int local_88;
	int local_84;
	int local_80;
	int local_78;
	int local_74;
	int local_70;
	int local_6c;
	int local_68;
	int local_64;
	int local_60;
	int local_5c;

	lVar6 = (longlong)p;
	uVar4 = 0x100f8fd0;
	iVar3 = 0;
	iVar19 = 0;
	uVar18 = 0;
	iVar22 = 0;
	iVar23 = 0;
	uVar11 = 0;
	iVar12 = 0;
	iVar14 = 0;
	iVar16 = 0;
	r = 10;
	iVar20 = 0;
	iVar21 = 0;
	iVar24 = 0;
	lVar26 = ZEXT48(plr) + lVar6 * 0x55ec;
	local_5c = 0;
	local_60 = 0;
	local_64 = 0;
	local_68 = 0;
	local_6c = 0;
	local_70 = 0;
	local_98 = 0;
	local_74 = 0;
	local_78 = 0;
	cVar10 = '\0';
	local_80 = 0;
	local_84 = 0;
	local_88 = 0;
	local_8c = 0;
	local_90 = 0;
	lVar25 = lVar26;
	BStack0000001c = Loadgfx;
	do {
		iVar5 = (int)lVar25;
		if ((*(int *)(iVar5 + 0x4a0) != -1) && (*(int *)(iVar5 + 0x5fc) != 0)) {
			iVar19 = iVar19 + *(int *)(iVar5 + 0x568);
			pnum = *(int *)(iVar5 + 0x56c);
			local_5c = local_5c + pnum;
			iVar3 = iVar3 + *(int *)(iVar5 + 0x564);
			if (*(uint *)(iVar5 + 0x578) != 0) {
				uVar9 = 1;
				uVar7 = 64bitAndOperator(0, 1, (ulonglong) * (uint *)(iVar5 + 0x578) - 1);
				uVar11 = uVar11 | uVar9;
				local_98 = local_98 | uVar7;
			}
			if ((*(char *)(iVar5 + 0x4d4) == '\0') || (*(int *)(iVar5 + 0x4d0) != 0)) {
				local_60 = local_60 + *(int *)(iVar5 + 0x58c);
				local_64 = local_64 + *(int *)(iVar5 + 0x590);
				if (*(int *)(iVar5 + 0x594) != 0) {
					pnum = pnum * *(int *)(iVar5 + 0x594);
					uVar7 = pnum / 100 + (pnum >> 0x1f);
					lVar2 = ((longlong)(int)((ulonglong)((longlong)pnum * 0x51eb851f) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar7) + (ulonglong)(uVar7 >> 0x1f);
					pnum = (int)lVar2;
					if (lVar2 == 0) {
						pnum = 1;
					}
					local_68 = local_68 + pnum;
				}
				uVar18 = uVar18 | *(uint *)(iVar5 + 0x570);
				local_6c = local_6c + *(int *)(iVar5 + 0x598);
				iVar22 = iVar22 + *(int *)(iVar5 + 0x59c);
				iVar14 = iVar14 + *(int *)(iVar5 + 0x5ac);
				iVar21 = iVar21 + *(int *)(iVar5 + 0x5b4);
				iVar16 = iVar16 + *(int *)(iVar5 + 0x5b0);
				cVar10 = cVar10 + *(char *)(iVar5 + 0x5c8);
				iVar23 = iVar23 + *(int *)(iVar5 + 0x5a4);
				local_80 = local_80 + *(int *)(iVar5 + 0x5e0);
				local_70 = local_70 + *(int *)(iVar5 + 0x5a0);
				local_84 = local_84 + *(int *)(iVar5 + 0x5d0);
				local_74 = local_74 + *(int *)(iVar5 + 0x5bc);
				iVar12 = iVar12 + *(int *)(iVar5 + 0x5a8);
				r = r + *(int *)(iVar5 + 0x5c4);
				iVar20 = iVar20 + *(int *)(iVar5 + 0x5b8);
				local_88 = local_88 + *(int *)(iVar5 + 0x5d4);
				local_78 = local_78 + *(int *)(iVar5 + 0x5c0);
				local_8c = local_8c + *(int *)(iVar5 + 0x5d8);
				local_90 = local_90 + *(int *)(iVar5 + 0x5dc);
			}
		}
		iVar5 = (int)uVar4;
		pnum = (int)lVar6;
		iVar24 = iVar24 + 1;
		lVar25 = lVar25 + 0x170;
	} while (iVar24 < 7);
	iVar24 = (int)lVar26;
	if ((iVar3 == 0) && (iVar19 == 0)) {
		iVar3 = 1;
		iVar19 = 1;
		if ((*(int *)(iVar24 + 0xa60) == 5) && (*(int *)(iVar24 + 0xbbc) != 0)) {
			iVar19 = 3;
		}
		if ((*(int *)(iVar24 + 0xbd0) == 5) && (*(int *)(iVar24 + 0xd2c) != 0)) {
			iVar19 = 3;
		}
	}
	*(int *)(iVar24 + 0x5544) = iVar3;
	*(int *)(iVar24 + 0x5548) = iVar19;
	*(int *)(iVar24 + 0x554c) = local_5c;
	*(int *)(iVar24 + 0x5550) = local_60;
	*(int *)(iVar24 + 0x5554) = local_64;
	*(int *)(iVar24 + 0x5558) = local_68;
	*(uint *)(iVar24 + 0x5568) = uVar18;
	*(int *)(iVar24 + 0x555c) = local_74;
	*(int *)(iVar24 + 0x556c) = local_78;
	if (r < 2) {
		r = 2;
	}
	if (0xf < r) {
		r = 0xf;
	}
	if (((int)*(char *)(iVar24 + 0x13a) != r) && (pnum == **(int **)(iVar5 + -0x77ac))) {
		ChangeLightRadius(*(int *)(iVar24 + 0x9c), r);
		if (r < 10) {
			ChangeVisionRadius(*(int *)(iVar24 + 0xa0), 10);
		} else {
			ChangeVisionRadius(*(int *)(iVar24 + 0xa0), r);
		}
		*(undefined *)(iVar24 + 0x13a) = (char)r;
	}
	piVar8 = *(int **)(iVar5 + -0x77ac);
	*(int *)(iVar24 + 0x160) = *(int *)(iVar24 + 0x164) + local_6c;
	piVar8 = (int *)(*(int *)(iVar5 + -0x77a8) + *piVar8 * 0x55ec + 0x160);
	if (*piVar8 < 1) {
		*piVar8 = 0;
	}
	piVar8 = *(int **)(iVar5 + -0x77ac);
	*(int *)(iVar24 + 0x168) = *(int *)(iVar24 + 0x16c) + iVar22;
	piVar8 = (int *)(*(int *)(iVar5 + -0x77a8) + *piVar8 * 0x55ec + 0x168);
	if (*piVar8 < 1) {
		*piVar8 = 0;
	}
	piVar8 = *(int **)(iVar5 + -0x77ac);
	*(int *)(iVar24 + 0x170) = *(int *)(iVar24 + 0x174) + local_70;
	piVar8 = (int *)(*(int *)(iVar5 + -0x77a8) + *piVar8 * 0x55ec + 0x170);
	if (*piVar8 < 1) {
		*piVar8 = 0;
	}
	piVar8 = *(int **)(iVar5 + -0x77ac);
	*(int *)(iVar24 + 0x178) = *(int *)(iVar24 + 0x17c) + iVar23;
	piVar8 = (int *)(*(int *)(iVar5 + -0x77a8) + *piVar8 * 0x55ec + 0x178);
	if (*piVar8 < 1) {
		*piVar8 = 0;
	}
	if (*(char *)(iVar24 + 0x15c) == '\x01') {
		iVar3 = (int)*(char *)(iVar24 + 0x1b4) * (*(int *)(iVar24 + 0x160) + *(int *)(iVar24 + 0x170));
		uVar7 = iVar3 / 200 + (iVar3 >> 0x1f);
		*(int *)(iVar24 + 0x184) = uVar7 + (uVar7 >> 0x1f);
	} else {
		iVar3 = *(int *)(iVar24 + 0x160) * (int)*(char *)(iVar24 + 0x1b4);
		uVar7 = iVar3 / 100 + (iVar3 >> 0x1f);
		*(int *)(iVar24 + 0x184) = uVar7 + (uVar7 >> 0x1f);
	}
	*(undefined4 *)(iVar24 + 0x5564) = (int)uVar11;
	*(uint *)(iVar24 + 0x5560) = local_98;
	if (*(char *)(iVar24 + 0xb8) == '\x03') {
		uVar9 = 1;
		uVar11 = 64bitAndOperator(0, 1, (ulonglong) * (uint *)(iVar24 + 0xb4) - 1);
		if (((ulonglong) * (uint *)(iVar24 + 0x5564) & uVar9 | (ulonglong) * (uint *)(iVar24 + 0x5560) & uVar11) == 0) {
			puVar1 = *(undefined4 **)(iVar5 + -0x76bc);
			*(undefined4 *)(iVar24 + 0xb4) = 0xffffffff;
			*(undefined *)(iVar24 + 0xb8) = 4;
			*puVar1 = 0xff;
		}
	}
	*(char *)(iVar24 + 0x5570) = cVar10;
	*(int *)(iVar24 + 0x5578) = local_80;
	if ((uVar18 & 0x80000000) != 0) {
		iVar16 = 0;
		iVar12 = 0;
		iVar14 = 0;
	}
	uVar15 = (undefined)iVar14;
	uVar13 = (undefined)iVar12;
	uVar17 = (undefined)iVar16;
	if (0x4b < iVar16) {
		uVar17 = 0x4b;
	}
	*(undefined *)(iVar24 + 0x1c5) = uVar17;
	if (0x4b < iVar12) {
		uVar13 = 0x4b;
	}
	*(undefined *)(iVar24 + 0x1c6) = uVar13;
	if (0x4b < iVar14) {
		uVar15 = 0x4b;
	}
	*(undefined *)(iVar24 + 0x1c7) = uVar15;
	cVar10 = *(char *)(iVar24 + 0x15c);
	if (cVar10 == '\0') {
		iVar23 = iVar23 << 1;
	}
	if (cVar10 == '\x01') {
		iVar23 = iVar23 + (iVar23 >> 1);
	}
	iVar20 = iVar20 + iVar23 * 0x40;
	if (cVar10 == '\x02') {
		iVar22 = iVar22 << 1;
	}
	if (cVar10 == '\x01') {
		iVar22 = iVar22 + (iVar22 >> 1);
	}
	iVar21 = iVar21 + iVar22 * 0x40;
	piVar8 = *(int **)(iVar5 + -0x77ac);
	*(int *)(iVar24 + 0x194) = *(int *)(iVar24 + 0x18c) + iVar20;
	*(int *)(iVar24 + 0x198) = *(int *)(iVar24 + 400) + iVar20;
	if ((pnum == *piVar8) && (*(int *)(iVar24 + 0x194) >> 6 == 0)) {
		SetPlayerHitPoints(pnum, 0);
	}
	*(int *)(iVar24 + 0x1a8) = *(int *)(iVar24 + 0x1a0) + iVar21;
	*(int *)(iVar24 + 0x1ac) = *(int *)(iVar24 + 0x1a4) + iVar21;
	*(int *)(iVar24 + 0x557c) = local_84;
	*(int *)(iVar24 + 0x5580) = local_88;
	*(int *)(iVar24 + 0x5584) = local_8c;
	*(int *)(iVar24 + 0x5588) = local_90;
	if ((uVar18 & 1) == 0) {
		*(undefined4 *)(iVar24 + 0x1cc) = 0;
	} else {
		*(undefined4 *)(iVar24 + 0x1cc) = 1;
	}
	*(undefined *)(iVar24 + 0x138) = 0;
	iVar23 = 0;
	*(undefined4 *)(iVar24 + 0x134) = 0;
	if (((*(int *)(iVar24 + 0xa60) != -1) && (*(char *)(iVar24 + 0xb16) == '\x01')) && (*(int *)(iVar24 + 0xbbc) != 0)) {
		iVar23 = *(int *)(iVar24 + 0xa60);
	}
	if (((*(int *)(iVar24 + 0xbd0) != -1) && (*(char *)(iVar24 + 0xc86) == '\x01')) && (*(int *)(iVar24 + 0xd2c) != 0)) {
		iVar23 = *(int *)(iVar24 + 0xbd0);
	}
	if (iVar23 == 4) {
		iVar23 = 6;
	} else {
		if (iVar23 < 4) {
			if (iVar23 == 2) {
				iVar23 = 5;
			} else {
				if (iVar23 < 2) {
					if (0 < iVar23) {
						iVar23 = 2;
					}
				} else {
					*(undefined4 *)(iVar24 + 0x134) = 1;
					iVar23 = 4;
				}
			}
		} else {
			if (iVar23 == 10) {
				iVar23 = 8;
			}
		}
	}
	if ((*(int *)(iVar24 + 0xa60) == 5) && (*(int *)(iVar24 + 0xbbc) != 0)) {
		iVar23 = iVar23 + 1;
		*(undefined *)(iVar24 + 0x138) = 1;
	}
	if ((*(int *)(iVar24 + 0xbd0) == 5) && (*(int *)(iVar24 + 0xd2c) != 0)) {
		iVar23 = iVar23 + 1;
		*(undefined *)(iVar24 + 0x138) = 1;
	}
	if ((*(int *)(iVar24 + 0xd40) == 8) && (*(int *)(iVar24 + 0xe9c) != 0)) {
		iVar23 = iVar23 + 0x10;
	}
	if ((*(int *)(iVar24 + 0xd40) == 9) && (*(int *)(iVar24 + 0xe9c) != 0)) {
		iVar23 = iVar23 + 0x20;
	}
	if ((*(int *)(iVar24 + 0x78) == iVar23) || (BStack0000001c == 0)) {
		*(int *)(iVar24 + 0x78) = iVar23;
	} else {
		*(int *)(iVar24 + 0x78) = iVar23;
		*(undefined4 *)(iVar24 + 0x214) = 0;
		LoadPlrGFX(pnum, (player_graphic)0x1);
		SetPlrAnims(pnum);
		*(int *)(iVar24 + 0x7c) = iVar24 + *(int *)(iVar24 + 0x70) * 8 + 0x218;
		*(undefined4 *)(iVar24 + 0x88) = *(undefined4 *)(iVar24 + 600);
		*(undefined4 *)(iVar24 + 0x8c) = 1;
		*(undefined4 *)(iVar24 + 0x84) = 0;
		*(undefined4 *)(iVar24 + 0x80) = 3;
		*(undefined4 *)(iVar24 + 0x90) = *(undefined4 *)(iVar24 + 0x25c);
		*(int *)(iVar24 + 0x94) = *(int *)(iVar24 + 0x25c) + -0x40 >> 1;
	}
	piVar8 = *(int **)(iVar5 + -0x7660);
	uVar11 = (ulonglong) * *(uint **)(iVar5 + -0x7668);
	if (0 < (int)**(uint **)(iVar5 + -0x7668)) {
		do {
			iVar23 = *piVar8 * 0xb4;
			if ((*(int *)(&DAT_10149b74 + iVar23) == 0xd) && (pnum == *(int *)(iVar23 + 0x10149bec))) {
				*(undefined4 *)(iVar23 + 0x10149c08) = *(undefined4 *)(iVar24 + 0x194);
				*(undefined4 *)(iVar23 + 0x10149c0c) = *(undefined4 *)(iVar24 + 0x18c);
			}
			piVar8 = piVar8 + 1;
			uVar11 = uVar11 - 1;
		} while (uVar11 != 0);
	}
	puVar1 = *(undefined4 **)(iVar5 + -0x76f0);
	**(undefined4 **)(iVar5 + -0x76f4) = 1;
	*puVar1 = 1;
	return;
}

void CalcPlrScrolls(int p)

{
	uint *puVar1;
	char *pcVar2;
	uint *puVar3;
	int iVar4;
	undefined4 *puVar5;
	undefined8 uVar6;
	uint uVar7;
	uint uVar8;
	int iVar9;
	PlayerStruct *pPVar10;
	PlayerStruct *pPVar11;

	uVar6 = 0x100f8fd0;
	p = p * 0x55ec;
	pPVar11 = (PlayerStruct *)((int)plr + p);
	iVar9 = 0;
	*(undefined4 *)((int)plr + p + 0x118) = 0;
	puVar1 = (uint *)((int)plr + p + 0x114);
	*puVar1 = 0;
	pPVar10 = pPVar11;
	while (iVar9 < *(int *)((int)plr + p + 0x4828)) {
		if ((pPVar10->InvList[0]._iPLGetHit != -1) && (((iVar4 = *(int *)(pPVar10->InvList[1]._iIName + 0xf), iVar4 == 0x15 || (iVar4 == 0x16)) && (pPVar10->InvList[1]._iPLLR != 0)))) {
			uVar8 = 1;
			uVar7 = 64bitAndOperator(0, 1, (ulonglong) * (uint *)(pPVar10->InvList[1]._iIName + 0x13) - 1);
			*(uint *)((int)plr + p + 0x118) = *(uint *)((int)plr + p + 0x118) | uVar8;
			*(uint *)((int)plr + p + 0x114) = *(uint *)((int)plr + p + 0x114) | uVar7;
		}
		pPVar10 = (PlayerStruct *)&pPVar10->_pDexterity;
		iVar9 = iVar9 + 1;
	}
	iVar9 = 0;
	do {
		if (((pPVar11->SpdList[0]._iPLGetHit != -1) && ((iVar4 = *(int *)(pPVar11->SpdList[1]._iIName + 0xf), iVar4 == 0x15 || (iVar4 == 0x16)))) && (pPVar11->SpdList[1]._iPLLR != 0)) {
			uVar8 = 1;
			uVar7 = 64bitAndOperator(0, 1, (ulonglong) * (uint *)(pPVar11->SpdList[1]._iIName + 0x13) - 1);
			*(uint *)((int)plr + p + 0x118) = *(uint *)((int)plr + p + 0x118) | uVar8;
			*(uint *)((int)plr + p + 0x114) = *(uint *)((int)plr + p + 0x114) | uVar7;
		}
		iVar9 = iVar9 + 1;
		pPVar11 = (PlayerStruct *)&pPVar11->_pDexterity;
	} while (iVar9 < 8);
	pcVar2 = (char *)((int)plr + p + 0xb8);
	if ((*pcVar2 == '\x02') && (puVar3 = (uint *)((int)plr + p + 0xb4), uVar7 = 1 << (ulonglong)*puVar3 - 1, (uVar7 & *(uint *)((int)plr + p + 0x118) | (int)uVar7 >> 0x1f & *puVar1) == 0)) {
		puVar5 = *(undefined4 **)((int)uVar6 + -0x76bc);
		*puVar3 = 0xffffffff;
		*pcVar2 = '\x04';
		*puVar5 = 0xff;
	}
	return;
}

void CalcPlrStaff(int p)

{
	uint *puVar1;
	uint uVar2;
	uint uVar3;

	p = p * 0x55ec;
	*(undefined4 *)((int)plr + p + 0x5564) = 0;
	puVar1 = (uint *)((int)plr + p + 0x5560);
	*puVar1 = 0;
	if (((*(int *)((int)plr + p + 0xa60) != -1) && (*(int *)((int)plr + p + 0xbbc) != 0)) && (0 < *(int *)((int)plr + p + 0xb3c))) {
		uVar3 = 1;
		uVar2 = 64bitAndOperator(0, 1, (ulonglong) * (uint *)((int)plr + p + 0xb38) - 1);
		*(uint *)((int)plr + p + 0x5564) = *(uint *)((int)plr + p + 0x5564) | uVar3;
		*puVar1 = *puVar1 | uVar2;
	}
	return;
}

void CalcSelfItems(int pnum)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	longlong lVar6;

	pnum = pnum * 0x55ec;
	lVar6 = 7;
	iVar5 = pnum + 0x10187358;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	do {
		if ((*(int *)(iVar5 + 8) != -1) && (*(undefined4 *)(iVar5 + 0x164) = 1, *(int *)(iVar5 + 0x38) != 0)) {
			iVar2 = iVar2 + *(int *)(iVar5 + 0x100);
			iVar3 = iVar3 + *(int *)(iVar5 + 0x104);
			iVar4 = iVar4 + *(int *)(iVar5 + 0x108);
		}
		iVar5 = iVar5 + 0x170;
		lVar6 = lVar6 + -1;
	} while (lVar6 != 0);
	do {
		iVar5 = pnum + 0x10187358;
		lVar6 = 7;
		bVar1 = false;
		do {
			if (((*(int *)(iVar5 + 8) != -1) && (*(int *)(iVar5 + 0x164) != 0)) && (*(int *)((int)plr + pnum + 0x174) + iVar4 < (int)*(char *)(iVar5 + 0x162) || (*(int *)((int)plr + pnum + 0x16c) + iVar3 < (int)(uint) * (byte *)(iVar5 + 0x161) || *(int *)((int)plr + pnum + 0x164) + iVar2 < (int)*(char *)(iVar5 + 0x160)))) {
				*(undefined4 *)(iVar5 + 0x164) = 0;
				bVar1 = true;
				if (*(int *)(iVar5 + 0x38) != 0) {
					iVar2 = iVar2 - *(int *)(iVar5 + 0x100);
					iVar3 = iVar3 - *(int *)(iVar5 + 0x104);
					iVar4 = iVar4 - *(int *)(iVar5 + 0x108);
				}
			}
			iVar5 = iVar5 + 0x170;
			lVar6 = lVar6 + -1;
		} while (lVar6 != 0);
	} while (bVar1);
	return;
}

BOOL ItemMinStats(PlayerStruct *p, ItemStruct *x)

{
	if (p->_pMagic < (int)(uint)x->_iMinMag) {
		return 0;
	}
	if (p->_pStrength < (int)x->_iMinStr) {
		return 0;
	}
	if (p->_pDexterity < (int)x->_iMinDex) {
		return 0;
	}
	return 1;
}

void CalcPlrItemMin(int pnum)

{
	bool bVar1;
	BOOL BVar2;
	int iVar3;
	ItemStruct *x;

	pnum = pnum * 0x55ec;
	iVar3 = *(int *)((int)plr + pnum + 0x4828);
	x = (ItemStruct *)((int)plr + pnum + 0xea8);
	while (true) {
		bVar1 = iVar3 == 0;
		iVar3 = iVar3 + -1;
		if (bVar1)
			break;
		BVar2 = ItemMinStats((PlayerStruct *)((int)plr + pnum), x);
		x->_iStatFlag = BVar2;
		x = x + 1;
	}
	x = (ItemStruct *)((int)plr + pnum + 0x4854);
	iVar3 = 7;
	do {
		if (x->_itype != -1) {
			BVar2 = ItemMinStats((PlayerStruct *)((int)plr + pnum), x);
			x->_iStatFlag = BVar2;
		}
		bVar1 = iVar3 != 0;
		x = x + 1;
		iVar3 = iVar3 + -1;
	} while (bVar1);
	return;
}

void CalcPlrBookVals(int p)

{
	byte bVar1;
	ItemStruct *pIVar2;
	uint uVar3;
	undefined8 uVar4;
	BOOL BVar5;
	longlong lVar6;
	int ii;
	PlayerStruct *p_00;
	PlayerStruct *pPVar7;

	uVar4 = 0x100f8fd0;
	uVar4._4_4_ = 0x100f8fd0;
	if (currlevel == 0) {
		ii = 1;
		pIVar2 = (ItemStruct *)&DAT_101a63b8;
		while (true) {
			uVar4._4_4_ = (int)uVar4;
			if (pIVar2[1]._itype == -1)
				break;
			WitchBookLevel(ii);
			BVar5 = StoreStatOk(pIVar2 + 1);
			pIVar2[1]._iStatFlag = BVar5;
			ii = ii + 1;
			pIVar2 = pIVar2 + 1;
		}
	}
	p_00 = (PlayerStruct *)(*(int *)(uVar4._4_4_ + -0x77a8) + p * 0x55ec);
	uVar4._4_4_ = 0;
	pPVar7 = p_00;
	while (uVar4._4_4_ < p_00->SpdList[0]._iPLDam) {
		if ((pPVar7->InvList[0]._iPLGetHit == 0) && (*(int *)(pPVar7->InvList[1]._iIName + 0xf) == 0x18)) {
			*(undefined *)((int)&pPVar7->InvList[1]._iPLFR + 1) = (char)*(undefined4 *)(*(int *)(pPVar7->InvList[1]._iIName + 0x13) * 0x38 + 0x1010efbc);
			lVar6 = (longlong)p_00->_pSplLvl[*(int *)(pPVar7->InvList[1]._iIName + 0x13)];
			while ((int)lVar6 != 0) {
				bVar1 = *(byte *)((int)&pPVar7->InvList[1]._iPLFR + 1);
				lVar6 = lVar6 + -1;
				*(char *)((int)&pPVar7->InvList[1]._iPLFR + 1) = bVar1 + (char)((int)((uint)bVar1 * 0x14) / 100);
				bVar1 = *(byte *)((int)&pPVar7->InvList[1]._iPLFR + 1);
				uVar3 = (int)((uint)bVar1 * 0x14) / 100;
				if (0xff < (int)((uint)bVar1 + uVar3 + (uVar3 >> 0x1f))) {
					*(undefined *)((int)&pPVar7->InvList[1]._iPLFR + 1) = 0xff;
					lVar6 = 0;
				}
			}
			BVar5 = ItemMinStats(p_00, (ItemStruct *)&pPVar7->InvList[0]._iPLHP);
			pPVar7->InvList[1]._iPLLR = BVar5;
		}
		pPVar7 = (PlayerStruct *)&pPVar7->_pDexterity;
		uVar4._4_4_ = uVar4._4_4_ + 1;
	}
	return;
}

void CalcPlrInv(int p, BOOL Loadgfx)

{
	int iVar1;
	int _myplr;

	iVar1 = 0x100f8fd0;
	CalcPlrItemMin(p);
	CalcSelfItems(p);
	CalcPlrItemVals(p, Loadgfx);
	CalcPlrItemMin(p);
	if (p == myplr) {
		CalcPlrBookVals(p);
		CalcPlrScrolls(p);
		CalcPlrStaff(p);
	}
	if ((p == myplr) && (**(char **)(iVar1 + -0x77e4) == '\0')) {
		RecalcStoreStats();
	}
	return;
}

void SetPlrHandItem(ItemStruct *h, int idata)

{
	int pAllItem;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	ZeroMemory(
	    (char)h, 0x70, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	h->_itype = (int)AllItemsList[idata].itype;
	h->_iCurs = AllItemsList[idata].iCurs;
	strcpy(h->_iName, AllItemsList[idata].iName);
	strcpy(h->_iIName, AllItemsList[idata].iName);
	h->_iLoc = AllItemsList[idata].iLoc;
	h->_iClass = AllItemsList[idata].iClass;
	h->_iMinDam = AllItemsList[idata].iMinDam;
	h->_iMaxDam = AllItemsList[idata].iMaxDam;
	h->_iAC = AllItemsList[idata].iMinAC;
	h->_iMiscId = AllItemsList[idata].iMiscId;
	h->_iSpell = AllItemsList[idata].iSpell;
	if (AllItemsList[idata].iMiscId == 0x17) {
		h->_iCharges = 0x28;
	}
	h->_iMaxCharges = h->_iCharges;
	h->_iDurability = AllItemsList[idata].iDurability;
	h->_iMaxDur = AllItemsList[idata].iDurability;
	h->_iMinStr = AllItemsList[idata].iMinStr;
	h->_iMinMag = AllItemsList[idata].iMinMag;
	h->_iMinDex = AllItemsList[idata].iMinDex;
	h->_ivalue = AllItemsList[idata].iValue;
	h->_iIvalue = AllItemsList[idata].iValue;
	h->_iPrePower = -1;
	h->_iSufPower = -1;
	h->IDidx = idata;
	h->_iMagical = '\0';
	return;
}

void GetPlrHandSeed(ItemStruct *h)

{
	int iVar1;

	iVar1 = GetRndSeed();
	h->_iSeed = iVar1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void GetGoldSeed(int pnum, ItemStruct *h)

{
	uint uVar1;
	bool bVar2;
	ulonglong uVar3;
	int iVar4;
	int *piVar5;
	PlayerStruct *pPVar6;

	do {
		bVar2 = true;
		iVar4 = GetRndSeed();
		uVar3 = (ulonglong)_DAT_1013d984;
		piVar5 = (int *)&DAT_1013d788;
		if (0 < (int)_DAT_1013d984) {
			do {
				if (iVar4 == *(int *)(&DAT_1013d988 + *piVar5 * 0x170)) {
					bVar2 = false;
				}
				piVar5 = piVar5 + 1;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
		}
		if ((pnum == myplr) && (uVar1 = *(uint *)((int)plr + pnum * 0x55ec + 0x4828), uVar3 = (ulonglong)uVar1, pPVar6 = (PlayerStruct *)((int)plr + pnum * 0x55ec), 0 < (int)uVar1)) {
			do {
				if (iVar4 == pPVar6->InvList[0]._iPLHP) {
					bVar2 = false;
				}
				pPVar6 = (PlayerStruct *)&pPVar6->_pDexterity;
				uVar3 = uVar3 - 1;
			} while (uVar3 != 0);
		}
	} while (!bVar2);
	h->_iSeed = iVar4;
	return;
}

void SetPlrHandSeed(ItemStruct *h, int iseed)

{
	h->_iSeed = iseed;
	return;
}

void SetPlrHandGoldCurs(ItemStruct *h)

{
	if (0x9c3 < h->_ivalue) {
		h->_iCurs = 6;
		return;
	}
	if (h->_ivalue < 0x3e9) {
		h->_iCurs = 4;
		return;
	}
	h->_iCurs = 5;
	return;
}

void CreatePlrItems(int p)

{
	char cVar1;
	undefined4 uVar2;
	int iVar3;
	int iVar4;
	uint *puVar5;
	longlong lVar6;
	ItemStruct *h;
	undefined in_r5;
	undefined in_r6;
	undefined in_r7;
	undefined in_r8;
	undefined in_r9;
	undefined in_r10;
	longlong lVar7;
	longlong lVar8;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	lVar7 = (longlong)p * 0x55ec;
	iVar3 = (int)(ZEXT48(plr) + lVar7);
	*(undefined4 *)(iVar3 + 0x4a0) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x610) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x780) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x8f0) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0xa60) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0xbd0) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0xd40) = 0xffffffff;
	ZeroMemory((char)(ZEXT48(plr) + lVar7) + ',', 0x28, in_r5, in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffab,
	    in_stack_ffffffaf, local_4c);
	lVar6 = lVar7 + 0x10187d68;
	lVar8 = 4;
	do {
		iVar4 = (int)lVar6;
		*(undefined4 *)(iVar4 + 8) = 0xffffffff;
		*(undefined4 *)(iVar4 + 0x178) = 0xffffffff;
		*(undefined4 *)(iVar4 + 0x2e8) = 0xffffffff;
		*(undefined4 *)(iVar4 + 0x458) = 0xffffffff;
		*(undefined4 *)(iVar4 + 0x5c8) = 0xffffffff;
		*(undefined4 *)(iVar4 + 0x738) = 0xffffffff;
		*(undefined4 *)(iVar4 + 0x8a8) = 0xffffffff;
		*(undefined4 *)(iVar4 + 0xa18) = 0xffffffff;
		*(undefined4 *)(iVar4 + 0xb88) = 0xffffffff;
		*(undefined4 *)(iVar4 + 0xcf8) = 0xffffffff;
		lVar6 = lVar6 + 0xe60;
		lVar8 = lVar8 + -1;
	} while (lVar8 != 0);
	iVar4 = (int)lVar7;
	puVar5 = (uint *)((int)&plr[0].SpdList[0]._iPLDam + iVar4);
	*puVar5 = 0;
	h = (ItemStruct *)(iVar3 + 0x4854);
	*(undefined4 *)(iVar3 + 0x485c) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x49cc) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x4b3c) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x4cac) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x4e1c) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x4f8c) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x50fc) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x526c) = 0xffffffff;
	cVar1 = (&plr[0]._pClass)[iVar4];
	if (cVar1 == '\x01') {
		SetPlrHandItem((ItemStruct *)(iVar3 + 0xa58), 4);
		GetPlrHandSeed((ItemStruct *)(iVar3 + 0xa58));
		SetPlrHandItem(h, 0x18);
		GetPlrHandSeed(h);
		SetPlrHandItem((ItemStruct *)(iVar3 + 0x49c4), 0x18);
		GetPlrHandSeed((ItemStruct *)(iVar3 + 0x49c4));
	} else {
		if (cVar1 < '\x01') {
			if (-1 < cVar1) {
				SetPlrHandItem((ItemStruct *)(iVar3 + 0xa58), 1);
				GetPlrHandSeed((ItemStruct *)(iVar3 + 0xa58));
				SetPlrHandItem((ItemStruct *)(iVar3 + 0xbc8), 2);
				GetPlrHandSeed((ItemStruct *)(iVar3 + 0xbc8));
				SetPlrHandItem((ItemStruct *)(iVar3 + 0x53d4), 3);
				GetPlrHandSeed((ItemStruct *)(iVar3 + 0x53d4));
				AutoPlace(p, 0, 1, 3, 1);
				SetPlrHandItem(h, 0x18);
				GetPlrHandSeed(h);
				SetPlrHandItem((ItemStruct *)(iVar3 + 0x49c4), 0x18);
				GetPlrHandSeed((ItemStruct *)(iVar3 + 0x49c4));
			}
		} else {
			if (cVar1 < '\x03') {
				SetPlrHandItem((ItemStruct *)(iVar3 + 0xa58), 5);
				GetPlrHandSeed((ItemStruct *)(iVar3 + 0xa58));
				SetPlrHandItem(h, 0x19);
				GetPlrHandSeed(h);
				SetPlrHandItem((ItemStruct *)(iVar3 + 0x49c4), 0x19);
				GetPlrHandSeed((ItemStruct *)(iVar3 + 0x49c4));
			}
		}
	}
	SetPlrHandItem((ItemStruct *)(iVar3 + 0x53d4), 0);
	GetPlrHandSeed((ItemStruct *)(iVar3 + 0x53d4));
	lVar6 = lVar7 + 0x1018c28c;
	*(undefined4 *)((int)plr[0].dwReserved + iVar4 + 0xc) = 100;
	iVar3 = (int)(ZEXT48(plr) + lVar7);
	*(undefined4 *)(iVar3 + 0x5494) = 4;
	lVar8 = 0x2e;
	*(undefined4 *)(iVar3 + 0x1c8) = *(undefined4 *)((int)plr[0].dwReserved + iVar4 + 0xc);
	lVar7 = ZEXT48(plr) + lVar7 + (ulonglong)*puVar5 * 0x170 + 0xea0;
	do {
		lVar6 = lVar6 + 8;
		uVar2 = ((undefined4 *)lVar6)[1];
		lVar7 = lVar7 + 8;
		*(undefined4 *)lVar7 = *(undefined4 *)lVar6;
		((undefined4 *)lVar7)[1] = uVar2;
		lVar8 = lVar8 + -1;
	} while (lVar8 != 0);
	*puVar5 = *puVar5 + 1;
	*(undefined *)((int)&plr[0].SpdList[0]._iPLLR + iVar4 + 2) = (char)*puVar5;
	CalcPlrItemVals(p, 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL ItemSpaceOk(int i, int j)

{
	char cVar1;
	char cVar2;
	int iVar3;
	int iVar4;

	if ((((i < 0) || (0x6f < i)) || (j < 0)) || (0x6f < j)) {
		return 0;
	}
	if (*(short *)(_DAT_1012f1b4 + i * 0xe0 + j * 2) != 0) {
		return 0;
	}
	iVar3 = i * 0x70;
	iVar4 = iVar3 + j;
	if (*(char *)(_DAT_1012f1b8 + iVar4) != '\0') {
		return 0;
	}
	if (*(char *)(_DAT_1012f1a8 + iVar4) != '\0') {
		return 0;
	}
	cVar2 = *(char *)(_DAT_1012f1ac + iVar4);
	if (cVar2 != '\0') {
		if (cVar2 < '\x01') {
			iVar4 = -((int)cVar2 + 1);
		} else {
			iVar4 = (int)cVar2 + -1;
		}
		if (*(int *)(iVar4 * 0x78 + 0x1017e40c) != 0) {
			return 0;
		}
	}
	cVar2 = *(char *)(_DAT_1012f1ac + iVar3 + j + 0x71);
	if ('\0' < cVar2) {
		if (*(char *)(((int)cVar2 + -1) * 0x78 + 0x1017e414) != '\0') {
			return 0;
		}
	}
	if (cVar2 < '\0') {
		if (*(char *)(((int)cVar2 + 1) * -0x78 + 0x1017e414) != '\0') {
			return 0;
		}
	}
	iVar3 = _DAT_1012f1ac + iVar3 + j;
	cVar2 = *(char *)(iVar3 + 0x70);
	if ('\0' < cVar2) {
		cVar1 = *(char *)(iVar3 + 1);
		if ('\0' < cVar1) {
			if ((*(char *)(((int)cVar2 + -1) * 0x78 + 0x1017e414) != '\0') && (*(char *)(((int)cVar1 + -1) * 0x78 + 0x1017e414) != '\0')) {
				return 0;
			}
		}
	}
	if ((&DAT_10130b33)[(int)*(short *)(_DAT_1012f1d4 + i * 0xe0 + j * 2)] != '\0') {
		return 0;
	}
	return 1;
}

BOOL GetItemSpace(int x, int y, char inum)

{
	bool bVar1;
	undefined8 uVar2;
	int i;
	BOOL BVar3;
	int j;
	int *piVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	int *piVar8;
	longlong lVar9;

	uVar2 = 0x100f8fd0;
	piVar4 = (int *)&DAT_1013ca00;
	j = y + -1;
	piVar7 = piVar4;
	while (i = (int)uVar2, j <= y + 1) {
		i = x + -1;
		piVar8 = piVar7;
		while (i <= x + 1) {
			BVar3 = ItemSpaceOk(i, j);
			*piVar8 = BVar3;
			piVar8 = piVar8 + 3;
			i = i + 1;
		}
		piVar7 = piVar7 + 1;
		j = j + 1;
	}
	lVar9 = 3;
	bVar1 = false;
	do {
		if (*piVar4 != 0) {
			bVar1 = true;
		}
		if (piVar4[3] != 0) {
			bVar1 = true;
		}
		if (piVar4[6] != 0) {
			bVar1 = true;
		}
		piVar4 = piVar4 + 1;
		lVar9 = lVar9 + -1;
	} while (lVar9 != 0);
	j = random('\r', 0xf);
	j = j + 1;
	if (bVar1) {
		iVar6 = 0;
		iVar5 = 0;
		while (0 < j) {
			if (*(int *)(&DAT_1013ca00 + iVar6 * 0xc + iVar5 * 4) != 0) {
				j = j + -1;
			}
			if ((0 < j) && (iVar6 = iVar6 + 1, iVar6 == 3)) {
				iVar5 = iVar5 + 1;
				iVar6 = 0;
				if (iVar5 == 3) {
					iVar5 = 0;
				}
			}
		}
		iVar6 = iVar6 + x + -1;
		piVar4 = *(int **)(i + -0x768c);
		iVar5 = iVar5 + y + -1;
		*(int *)((int)inum * 0x170 + 0x1013d994) = iVar6;
		*(int *)((int)inum * 0x170 + 0x1013d998) = iVar5;
		BVar3 = 1;
		*(char *)(*piVar4 + iVar6 * 0x70 + iVar5) = inum + '\x01';
	} else {
		BVar3 = 0;
	}
	return BVar3;
}

void GetSuperItemSpace(int x, int y, char inum)

{
	int *piVar1;
	undefined8 uVar2;
	BOOL BVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int j;
	int i;

	uVar2 = 0x100f8fd0;
	BVar3 = GetItemSpace(x, y, inum);
	if (BVar3 == 0) {
		iVar6 = 2;
		do {
			iVar5 = -iVar6;
			while (iVar5 <= iVar6) {
				j = y + iVar5;
				iVar4 = -iVar6;
				while (iVar4 <= iVar6) {
					i = x + iVar4;
					BVar3 = ItemSpaceOk(i, j);
					if (BVar3 != 0) {
						piVar1 = *(int **)((int)uVar2 + -0x768c);
						*(int *)((int)inum * 0x170 + 0x1013d994) = i;
						*(int *)((int)inum * 0x170 + 0x1013d998) = j;
						*(char *)(*piVar1 + i * 0x70 + j) = inum + '\x01';
						return;
					}
					iVar4 = iVar4 + 1;
				}
				iVar5 = iVar5 + 1;
			}
			iVar6 = iVar6 + 1;
		} while (iVar6 < 0x32);
	}
	return;
}

void GetSuperItemLoc(int x, int y, int *xx, int *yy)

{
	BOOL BVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 1;
	do {
		iVar3 = -iVar4;
		while (iVar3 <= iVar4) {
			*yy = y + iVar3;
			iVar2 = -iVar4;
			while (iVar2 <= iVar4) {
				*xx = x + iVar2;
				BVar1 = ItemSpaceOk(*xx, *yy);
				if (BVar1 != 0) {
					return;
				}
				iVar2 = iVar2 + 1;
			}
			iVar3 = iVar3 + 1;
		}
		iVar4 = iVar4 + 1;
	} while (iVar4 < 0x32);
	return;
}

void CalcItemValue(int i)

{
	longlong lVar1;
	undefined4 uVar2;

	i = i * 0x170;
	lVar1 = (ulonglong) * (uint *)(i + 0x1013dadc) + (ulonglong) * (uint *)(i + 0x1013dae4);
	if (lVar1 != 0) {
		lVar1 = (longlong)(int)lVar1 * (longlong) * (int *)(i + 0x1013da4c);
	}
	if ((int)lVar1 < 0) {
		lVar1 = (longlong)(*(int *)(i + 0x1013da4c) / (int)lVar1);
	}
	lVar1 = (ulonglong) * (uint *)(i + 0x1013dad8) + (ulonglong) * (uint *)(i + 0x1013dae0) + lVar1;
	uVar2 = (undefined4)lVar1;
	if (lVar1 < 1) {
		uVar2 = 1;
	}
	*(undefined4 *)(i + 0x1013da50) = uVar2;
	return;
}

void GetBookSpell(int i, int lvl)

{
	char cVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int unaff_r25;
	int iVar5;

	iVar2 = 0x100f8fd0;
	if (lvl == 0) {
		lvl = 1;
	}
	iVar3 = random('\x0e', 0x25);
	iVar3 = iVar3 + 1;
	iVar5 = 1;
	while (0 < iVar3) {
		iVar4 = *(int *)(iVar5 * 0x38 + 0x1010efac);
		if ((iVar4 != -1) && (iVar4 <= lvl)) {
			iVar3 = iVar3 + -1;
			unaff_r25 = iVar5;
		}
		iVar4 = iVar5 + 1;
		if ((**(char **)(iVar2 + -0x77f0) == '\x01') && (iVar4 == 0x20)) {
			iVar4 = iVar5 + 2;
		}
		iVar5 = iVar4;
		if ((**(char **)(iVar2 + -0x77f0) == '\x01') && (iVar5 = iVar4, iVar4 == 0x22)) {
			iVar5 = 0x23;
		}
		if (iVar5 == 0x25) {
			iVar5 = 1;
		}
	}
	iVar5 = unaff_r25 * 0x38;
	i = i * 0x170;
	strcat((char *)(i + 0x1013d9c5), *(char **)(iVar5 + 0x1010efa4));
	strcat((char *)(i + 0x1013da05), *(char **)(iVar5 + 0x1010efa4));
	*(int *)(i + 0x1013da68) = unaff_r25;
	*(undefined *)(i + 0x1013dae9) = (char)*(undefined4 *)(iVar5 + 0x1010efbc);
	iVar2 = *(int *)(iVar5 + 0x1010efd0);
	*(int *)(i + 0x1013da4c) = *(int *)(i + 0x1013da4c) + iVar2;
	*(int *)(i + 0x1013da50) = *(int *)(i + 0x1013da50) + iVar2;
	cVar1 = *(char *)(iVar5 + 0x1010efa2);
	if (cVar1 == '\0') {
		*(undefined4 *)(i + 0x1013da48) = 0x57;
	}
	if (cVar1 == '\x01') {
		*(undefined4 *)(i + 0x1013da48) = 0x58;
	}
	if (cVar1 == '\x02') {
		*(undefined4 *)(i + 0x1013da48) = 0x56;
	}
	return;
}

void GetStaffPower(int i, int lvl, int bs, BOOL onlygood)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	BOOL BVar5;
	int v;
	undefined **ppuVar6;
	int minval;
	undefined8 in_r8;
	int maxval;
	int multval;
	undefined4 in_r10;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	BYTE *str;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffb28;
	undefined in_stack_fffffb2f;
	undefined4 in_stack_fffffb3c;
	undefined4 in_stack_fffffb40;
	undefined4 in_stack_fffffb44;
	undefined4 in_stack_fffffb48;
	undefined4 in_stack_fffffb4c;
	undefined4 in_stack_fffffb50;
	undefined4 in_stack_fffffb54;
	char acStack1192[128];
	int local_428[257];
	undefined4 local_24;
	undefined4 uStack32;
	undefined4 uStack28;
	undefined4 uStack24;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	iVar2 = 0x100f8fd0;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	ppuVar6 = &PTR_s_Tin_100ff6c4;
	iVar3 = random('\x0f', 10);
	maxval = (int)in_r8;
	iVar4 = -1;
	if ((iVar3 == 0) || (onlygood != 0)) {
		v = 0;
		iVar3 = 0;
		minval = 0;
		while (true) {
			maxval = (int)in_r8;
			if (ppuVar6[1] == (undefined *)0xffffffff)
				break;
			maxval = v;
			iVar1 = iVar3;
			if ((((uint)ppuVar6[5] & 0x100) != 0) && (maxval = v, iVar1 = iVar3, (int)*(char *)(ppuVar6 + 4) <= lvl)) {
				in_r8 = 1;
				if ((onlygood != 0) && (ppuVar6[8] == (undefined *)0x0)) {
					in_r8 = 0;
				}
				maxval = v;
				iVar1 = iVar3;
				if ((int)in_r8 != 0) {
					*(int *)((int)local_428 + iVar3) = minval;
					maxval = v + 1;
					iVar1 = iVar3 + 4;
					if (ppuVar6[7] != (undefined *)0x0) {
						*(int *)((int)local_428 + iVar3 + 4) = minval;
						maxval = v + 2;
						iVar1 = iVar3 + 8;
					}
				}
			}
			iVar3 = iVar1;
			v = maxval;
			ppuVar6 = ppuVar6 + 0xc;
			minval = minval + 1;
		}
		if (v != 0) {
			iVar4 = random('\x10', v);
			iVar4 = local_428[iVar4];
			v = i * 0x170;
			iVar3 = iVar4 * 0x30;
			wsprintf((int)acStack1192, "%s %s", (&PTR_s_Tin_100ff6c4)[iVar4 * 0xc], (char *)(v + 0x1013da05), minval,
			    maxval, multval, in_r10, in_stack_fffffb28, in_stack_fffffb2f, in_stack_fffffb3c, in_stack_fffffb40,
			    in_stack_fffffb44, in_stack_fffffb48, in_stack_fffffb4c, in_stack_fffffb50, in_stack_fffffb54);
			strcpy((char *)(v + 0x1013da05), acStack1192);
			*(undefined *)(v + 0x1013d9c4) = 1;
			minval = *(int *)(iVar3 + 0x100ff6e8);
			maxval = *(int *)(iVar3 + 0x100ff6ec);
			multval = *(int *)(iVar3 + 0x100ff6f0);
			SaveItemPower(i, *(int *)(iVar3 + 0x100ff6c8), *(int *)(iVar3 + 0x100ff6cc), *(int *)(iVar3 + 0x100ff6d0),
			    minval, maxval, multval);
			*(undefined *)(v + 0x1013dad4) = (char)*(int *)(iVar3 + 0x100ff6c8);
		}
	}
	iVar3 = i * 0x170;
	str = (BYTE *)(iVar3 + 0x1013da05);
	BVar5 = control_WriteStringToBuffer(str);
	if (BVar5 == 0) {
		strcpy((char *)str, *(char **)(iVar2 + *(int *)(iVar3 + 0x1013daf0) * 0x4c + 0x386c));
		if (iVar4 != -1) {
			wsprintf((int)acStack1192, "%s %s", (&PTR_s_Tin_100ff6c4)[iVar4 * 0xc], str, minval, maxval, multval,
			    in_r10, in_stack_fffffb28, in_stack_fffffb2f, in_stack_fffffb3c, in_stack_fffffb40, in_stack_fffffb44,
			    in_stack_fffffb48, in_stack_fffffb4c, in_stack_fffffb50, in_stack_fffffb54);
			strcpy((char *)str, acStack1192);
		}
		wsprintf((int)acStack1192, *(undefined4 *)(iVar2 + -0x5f78), str,
		    *(undefined4 *)(*(int *)(iVar2 + -0x769c) + bs * 0x38 + 4), minval, maxval, multval, in_r10,
		    in_stack_fffffb28, in_stack_fffffb2f, in_stack_fffffb3c, in_stack_fffffb40, in_stack_fffffb44,
		    in_stack_fffffb48, in_stack_fffffb4c, in_stack_fffffb50, in_stack_fffffb54);
		strcpy((char *)str, acStack1192);
		if (*(char *)(iVar3 + 0x1013d9c4) == '\0') {
			strcpy((char *)(iVar3 + 0x1013d9c5), (char *)str);
		}
	}
	CalcItemValue(i);
	return;
}

void GetStaffSpell(int i, int lvl, BOOL onlygood)

{
	int bs;
	int iVar1;
	BOOL BVar2;
	int iVar3;
	longlong lVar4;
	longlong lVar5;
	undefined4 uVar6;
	undefined4 in_r7;
	int iVar7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined8 unaff_r21;
	uint minlvl;
	undefined8 unaff_r22;
	int iVar8;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	longlong unaff_r30;
	undefined8 unaff_r31;
	ulonglong in_LR;
	undefined4 uStack00000008;
	undefined4 in_stack_ffffff58;
	undefined in_stack_ffffff5f;
	undefined4 in_stack_ffffff6c;
	undefined4 in_stack_ffffff70;
	undefined4 in_stack_ffffff74;
	undefined4 in_stack_ffffff78;
	undefined4 in_stack_ffffff7c;
	undefined4 in_stack_ffffff80;
	undefined4 in_stack_ffffff84;
	BYTE aBStack120[76];
	undefined4 local_2c;
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

	iVar7 = 0x100f8fd0;
	local_2c = (undefined4)((ulonglong)unaff_r21 >> 0x20);
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
	uStack00000008 = (undefined4)in_LR;
	iVar1 = random('\x11', 4);
	minlvl = lvl >> 1;
	if (iVar1 == 0) {
		GetItemPower(i, minlvl, lvl, 0x100, onlygood);
	} else {
		if ((in_LR & 0xffffffff00000000 | (ulonglong)minlvl) == 0) {
			minlvl = 1;
		}
		iVar1 = random('\x12', 0x25);
		iVar1 = iVar1 + 1;
		lVar4 = 1;
		while (0 < iVar1) {
			bs = *(int *)((int)lVar4 * 0x38 + 0x1010efb0);
			if ((bs != -1) && (bs <= (int)minlvl)) {
				iVar1 = iVar1 + -1;
				unaff_r30 = lVar4;
			}
			lVar5 = lVar4 + 1;
			if ((**(char **)(iVar7 + -0x77f0) == '\x01') && ((int)lVar5 == 0x20)) {
				lVar5 = lVar4 + 2;
			}
			lVar4 = lVar5;
			if ((**(char **)(iVar7 + -0x77f0) == '\x01') && ((int)lVar4 == 0x22)) {
				lVar4 = lVar4 + 1;
			}
			if ((int)lVar4 == 0x25) {
				lVar4 = 1;
			}
		}
		iVar8 = i * 0x170;
		bs = (int)unaff_r30;
		iVar1 = bs * 0x38;
		uVar6 = *(undefined4 *)(iVar1 + 0x1010efa4);
		wsprintf((int)aBStack120, *(undefined4 *)(iVar7 + -0x5f78), (char *)(iVar8 + 0x1013d9c5), uVar6, in_r7, in_r8,
		    in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
		    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
		BVar2 = control_WriteStringToBuffer(aBStack120);
		if (BVar2 == 0) {
			wsprintf((int)aBStack120, *(undefined4 *)(iVar7 + -0x5f7c), *(undefined4 *)(iVar1 + 0x1010efa4), uVar6, in_r7,
			    in_r8, in_r9, in_r10, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
			    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80, in_stack_ffffff84);
		}
		strcpy((char *)(iVar8 + 0x1013d9c5), (char *)aBStack120);
		strcpy((char *)(iVar8 + 0x1013da05), (char *)aBStack120);
		*(int *)(iVar8 + 0x1013da68) = bs;
		iVar7 = *(int *)(iVar1 + 0x1010efc8);
		iVar3 = random('\x13', (*(int *)(iVar1 + 0x1010efcc) - iVar7) + 1);
		*(int *)(iVar8 + 0x1013da6c) = iVar7 + iVar3;
		*(undefined4 *)(iVar8 + 0x1013da70) = *(undefined4 *)(iVar8 + 0x1013da6c);
		*(undefined *)(iVar8 + 0x1013dae9) = (char)*(undefined4 *)(iVar1 + 0x1010efbc);
		iVar7 = *(int *)(iVar1 + 0x1010efd4) * *(int *)(iVar8 + 0x1013da6c);
		minlvl = iVar7 / 5 + (iVar7 >> 0x1f);
		iVar7 = minlvl + (minlvl >> 0x1f);
		*(int *)(iVar8 + 0x1013da4c) = *(int *)(iVar8 + 0x1013da4c) + iVar7;
		*(int *)(iVar8 + 0x1013da50) = *(int *)(iVar8 + 0x1013da50) + iVar7;
		GetStaffPower(i, lvl, bs, onlygood);
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void GetItemAttrs(int i, int idata, int lvl)

{
	int *piVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int unaff_r24;

	iVar2 = 0x100f8fd0;
	iVar3 = i * 0x170;
	*(int *)(iVar3 + 0x1013d990) = (int)AllItemsList[idata].itype;
	piVar1 = (int *)(iVar3 + 0x1013da48);
	*piVar1 = AllItemsList[idata].iCurs;
	strcpy((char *)(iVar3 + 0x1013d9c5), AllItemsList[idata].iName);
	strcpy((char *)(iVar3 + 0x1013da05), AllItemsList[idata].iName);
	*(char *)(iVar3 + 0x1013da45) = AllItemsList[idata].iLoc;
	*(char *)(iVar3 + 0x1013da46) = AllItemsList[idata].iClass;
	*(int *)(iVar3 + 0x1013da54) = AllItemsList[idata].iMinDam;
	*(int *)(iVar3 + 0x1013da58) = AllItemsList[idata].iMaxDam;
	iVar4 = random('\x14', (AllItemsList[idata].iMaxAC - AllItemsList[idata].iMinAC) + 1);
	*(int *)(iVar3 + 0x1013da5c) = AllItemsList[idata].iMinAC + iVar4;
	*(int *)(iVar3 + 0x1013da60) = AllItemsList[idata].iFlags;
	*(int *)(iVar3 + 0x1013da64) = AllItemsList[idata].iMiscId;
	*(int *)(iVar3 + 0x1013da68) = AllItemsList[idata].iSpell;
	*(undefined *)(iVar3 + 0x1013d9c4) = 0;
	iVar4 = AllItemsList[idata].iValue;
	*(int *)(iVar3 + 0x1013da4c) = iVar4;
	*(int *)(iVar3 + 0x1013da50) = iVar4;
	*(undefined4 *)(iVar3 + 0x1013dad8) = 0;
	*(undefined4 *)(iVar3 + 0x1013dadc) = 0;
	*(undefined4 *)(iVar3 + 0x1013dae0) = 0;
	*(undefined4 *)(iVar3 + 0x1013dae4) = 0;
	*(undefined4 *)(iVar3 + 0x1013da7c) = 0;
	*(undefined4 *)(iVar3 + 0x1013da80) = 0;
	*(undefined4 *)(iVar3 + 0x1013da84) = 0;
	*(undefined4 *)(iVar3 + 0x1013da88) = 0;
	*(undefined4 *)(iVar3 + 0x1013da8c) = 0;
	*(undefined4 *)(iVar3 + 0x1013da90) = 0;
	*(undefined4 *)(iVar3 + 0x1013da94) = 0;
	*(undefined4 *)(iVar3 + 0x1013da6c) = 0;
	*(undefined4 *)(iVar3 + 0x1013da70) = 0;
	iVar4 = AllItemsList[idata].iDurability;
	*(int *)(iVar3 + 0x1013da74) = iVar4;
	*(int *)(iVar3 + 0x1013da78) = iVar4;
	*(char *)(iVar3 + 0x1013dae8) = AllItemsList[idata].iMinStr;
	*(char *)(iVar3 + 0x1013dae9) = AllItemsList[idata].iMinMag;
	*(char *)(iVar3 + 0x1013daea) = AllItemsList[idata].iMinDex;
	*(undefined4 *)(iVar3 + 0x1013da98) = 0;
	*(undefined4 *)(iVar3 + 0x1013da9c) = 0;
	*(undefined4 *)(iVar3 + 0x1013daa0) = 0;
	*(int *)(iVar3 + 0x1013daf0) = idata;
	*(undefined4 *)(iVar3 + 0x1013daac) = 0;
	*(undefined4 *)(iVar3 + 0x1013dab0) = 0;
	*(undefined4 *)(iVar3 + 0x1013dab4) = 0;
	*(undefined *)(iVar3 + 0x1013dab8) = 0;
	*(undefined *)(iVar3 + 0x1013dab9) = 0;
	*(undefined4 *)(iVar3 + 0x1013dac0) = 0;
	*(undefined4 *)(iVar3 + 0x1013dac4) = 0;
	*(undefined4 *)(iVar3 + 0x1013dac8) = 0;
	*(undefined4 *)(iVar3 + 0x1013dacc) = 0;
	*(undefined4 *)(iVar3 + 0x1013dad0) = 0;
	*(undefined4 *)(iVar3 + 0x1013daa4) = 0;
	*(undefined4 *)(iVar3 + 0x1013daa8) = 0;
	*(undefined *)(iVar3 + 0x1013dad4) = 0xff;
	*(undefined *)(iVar3 + 0x1013dad5) = 0xff;
	if (*(int *)(iVar3 + 0x1013da64) == 0x18) {
		GetBookSpell(i, lvl);
	}
	if (*(int *)(iVar3 + 0x1013d990) == 0xb) {
		if (_DAT_1012f31c == 0) {
			iVar4 = random('\x15', (uint)currlevel * 10);
			unaff_r24 = (uint)currlevel * 5 + iVar4;
		}
		if (_DAT_1012f31c == 1) {
			iVar4 = random('\x15', ((uint)currlevel + 0x10) * 10);
			unaff_r24 = ((uint)currlevel + 0x10) * 5 + iVar4;
		}
		if (_DAT_1012f31c == 2) {
			iVar4 = random('\x15', ((uint)currlevel + 0x20) * 10);
			unaff_r24 = ((uint)currlevel + 0x20) * 5 + iVar4;
		}
		if (**(char **)(iVar2 + -0x7794) == '\x04') {
			unaff_r24 = unaff_r24 + (unaff_r24 >> 3);
		}
		if (5000 < unaff_r24) {
			unaff_r24 = 5000;
		}
		*(int *)(iVar3 + 0x1013da4c) = unaff_r24;
		if (unaff_r24 < 0x9c4) {
			if (unaff_r24 < 0x3e9) {
				*piVar1 = 4;
			} else {
				*piVar1 = 5;
			}
		} else {
			*piVar1 = 6;
		}
	}
	return;
}

int RndPL(int param1, int param2)

{
	int iVar1;

	iVar1 = random('\x16', (param2 - param1) + 1);
	return param1 + iVar1;
}

int PLVal(int pv, int p1, int p2, int minv, int maxv)

{
	uint uVar1;
	int iVar2;

	if (p1 == p2) {
		return minv;
	}
	if (minv == maxv) {
		return minv;
	}
	iVar2 = (maxv - minv) * (((pv - p1) * 100) / (p2 - p1));
	uVar1 = iVar2 / 100 + (iVar2 >> 0x1f);
	return (int)(minv + uVar1 + (uVar1 >> 0x1f));
}

void SaveItemPower(int i, int power, int param1, int param2, int minval, int maxval, int multval)

{
	int pv;
	int iVar1;

	iVar1 = 0x100f8fd0;
	pv = RndPL(param1, param2);
	if ((uint)power < 0x50) {
		// WARNING: Could not recover jumptable at 0x1004d9e8. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(*(int *)(iVar1 + -0x5f80) + power * 4))();
		return;
	}
	i = i * 0x170;
	if ((*(int *)(i + 0x1013dad8) == 0) && (*(int *)(i + 0x1013dadc) == 0)) {
		iVar1 = PLVal(pv, param1, param2, minval, maxval);
		*(int *)(i + 0x1013dad8) = iVar1;
		*(int *)(i + 0x1013dadc) = multval;
	} else {
		iVar1 = PLVal(pv, param1, param2, minval, maxval);
		*(int *)(i + 0x1013dae0) = iVar1;
		*(int *)(i + 0x1013dae4) = multval;
	}
	return;
}

void GetItemPower(int i, int minlvl, int maxlvl, int flgs, int onlygood)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int v;
	int iVar4;
	int iVar5;
	int v_00;
	undefined **ppuVar6;
	BOOL BVar7;
	int *piVar8;
	undefined **ppuVar9;
	undefined *minval;
	int maxval;
	int multval;
	undefined4 in_r10;
	undefined8 unaff_r16;
	byte bVar10;
	undefined8 unaff_r17;
	BYTE *str;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar11;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffb08;
	undefined in_stack_fffffb0f;
	undefined4 in_stack_fffffb1c;
	undefined4 in_stack_fffffb20;
	undefined4 in_stack_fffffb24;
	undefined4 in_stack_fffffb28;
	undefined4 in_stack_fffffb2c;
	undefined4 in_stack_fffffb30;
	undefined4 in_stack_fffffb34;
	char acStack1224[128];
	int local_448[258];
	undefined4 local_40;
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

	iVar3 = 0x100f8fd0;
	local_40 = (undefined4)((ulonglong)unaff_r16 >> 0x20);
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
	ppuVar6 = &PTR_s_quality_10100684;
	ppuVar9 = &PTR_s_Tin_100ff6c4;
	minval = (undefined *)onlygood;
	v = random('\x17', 4);
	iVar4 = random('\x17', 3);
	if ((v != 0) && (iVar4 == 0)) {
		iVar5 = random('\x17', 2);
		if (iVar5 == 0) {
			v = 0;
		} else {
			iVar4 = 1;
		}
	}
	iVar5 = -1;
	iVar11 = -1;
	bVar10 = 0;
	if ((onlygood == 0) && (v_00 = random('\0', 3), v_00 != 0)) {
		onlygood = 1;
	}
	if (v == 0) {
		v_00 = 0;
		v = 0;
		maxval = 0;
		while (true) {
			minval = ppuVar9[1];
			if (minval == (undefined *)0xffffffff)
				break;
			iVar1 = v_00;
			iVar2 = v;
			if ((((((flgs & (uint)ppuVar9[5]) != 0) && (iVar1 = v_00, iVar2 = v, minlvl <= (int)*(char *)(ppuVar9 + 4))) && (iVar1 = v_00, iVar2 = v, (int)*(char *)(ppuVar9 + 4) <= maxlvl)) && ((onlygood == 0 || (iVar1 = v_00, iVar2 = v, ppuVar9[8] != (undefined *)0x0)))) && ((flgs != 0x100 || (iVar1 = v_00, iVar2 = v, minval != (undefined *)0xf)))) {
				*(int *)((int)local_448 + v) = maxval;
				iVar1 = v_00 + 1;
				iVar2 = v + 4;
				if (ppuVar9[7] != (undefined *)0x0) {
					*(int *)((int)local_448 + v + 4) = maxval;
					iVar1 = v_00 + 2;
					iVar2 = v + 8;
				}
			}
			v = iVar2;
			v_00 = iVar1;
			ppuVar9 = ppuVar9 + 0xc;
			maxval = maxval + 1;
		}
		if (v_00 != 0) {
			v = random('\x17', v_00);
			iVar5 = local_448[v];
			v = i * 0x170;
			v_00 = iVar5 * 0x30;
			wsprintf((int)acStack1224, "%s %s", (&PTR_s_Tin_100ff6c4)[iVar5 * 0xc], (char *)(v + 0x1013da05), minval,
			    maxval, multval, in_r10, in_stack_fffffb08, in_stack_fffffb0f, in_stack_fffffb1c, in_stack_fffffb20,
			    in_stack_fffffb24, in_stack_fffffb28, in_stack_fffffb2c, in_stack_fffffb30, in_stack_fffffb34);
			strcpy((char *)(v + 0x1013da05), acStack1224);
			*(undefined *)(v + 0x1013d9c4) = 1;
			minval = *(undefined **)(v_00 + 0x100ff6e8);
			maxval = *(int *)(v_00 + 0x100ff6ec);
			multval = *(int *)(v_00 + 0x100ff6f0);
			SaveItemPower(i, *(int *)(v_00 + 0x100ff6c8), *(int *)(v_00 + 0x100ff6cc), *(int *)(v_00 + 0x100ff6d0),
			    (int)minval, maxval, multval);
			*(undefined *)(v + 0x1013dad4) = (char)*(int *)(v_00 + 0x100ff6c8);
			bVar10 = *(byte *)(v_00 + 0x100ff6dc);
		}
	}
	if (iVar4 != 0) {
		v = 0;
		piVar8 = local_448;
		minval = (undefined *)0x0;
		while (true) {
			if (ppuVar6[1] == (undefined *)0xffffffff)
				break;
			if (((((flgs & (uint)ppuVar6[5]) != 0) && (minlvl <= (int)*(char *)(ppuVar6 + 4))) && (((int)*(char *)(ppuVar6 + 4) <= maxlvl && ((bVar10 | *(byte *)(ppuVar6 + 6)) != 0x11)))) && ((onlygood == 0 || (ppuVar6[8] != (undefined *)0x0)))) {
				*(undefined **)piVar8 = minval;
				piVar8 = piVar8 + 1;
				v = v + 1;
			}
			ppuVar6 = ppuVar6 + 0xc;
			minval = minval + 1;
		}
		if (v != 0) {
			v = random('\x17', v);
			iVar11 = local_448[v];
			v = i * 0x170;
			iVar4 = iVar11 * 0x30;
			wsprintf((int)acStack1224, "%s of %s", (char *)(v + 0x1013da05), (&PTR_s_quality_10100684)[iVar11 * 0xc],
			    minval, maxval, multval, in_r10, in_stack_fffffb08, in_stack_fffffb0f, in_stack_fffffb1c,
			    in_stack_fffffb20, in_stack_fffffb24, in_stack_fffffb28, in_stack_fffffb2c, in_stack_fffffb30,
			    in_stack_fffffb34);
			strcpy((char *)(v + 0x1013da05), acStack1224);
			*(undefined *)(v + 0x1013d9c4) = 1;
			minval = *(undefined **)(iVar4 + 0x101006a8);
			maxval = *(int *)(iVar4 + 0x101006ac);
			multval = *(int *)(iVar4 + 0x101006b0);
			SaveItemPower(i, *(int *)(iVar4 + 0x10100688), *(int *)(iVar4 + 0x1010068c), *(int *)(iVar4 + 0x10100690),
			    (int)minval, maxval, multval);
			*(undefined *)(v + 0x1013dad5) = (char)*(int *)(iVar4 + 0x10100688);
		}
	}
	str = (BYTE *)(i * 0x170 + 0x1013da05);
	BVar7 = control_WriteStringToBuffer(str);
	if (BVar7 == 0) {
		strcpy((char *)str, *(char **)(iVar3 + *(int *)(i * 0x170 + 0x1013daf0) * 0x4c + 0x386c));
		if (iVar5 != -1) {
			wsprintf((int)acStack1224, "%s %s", (&PTR_s_Tin_100ff6c4)[iVar5 * 0xc], str, minval, maxval, multval,
			    in_r10, in_stack_fffffb08, in_stack_fffffb0f, in_stack_fffffb1c, in_stack_fffffb20, in_stack_fffffb24,
			    in_stack_fffffb28, in_stack_fffffb2c, in_stack_fffffb30, in_stack_fffffb34);
			strcpy((char *)str, acStack1224);
		}
		if (iVar11 != -1) {
			wsprintf((int)acStack1224, "%s of %s", str, (&PTR_s_quality_10100684)[iVar11 * 0xc], minval, maxval,
			    multval, in_r10, in_stack_fffffb08, in_stack_fffffb0f, in_stack_fffffb1c, in_stack_fffffb20,
			    in_stack_fffffb24, in_stack_fffffb28, in_stack_fffffb2c, in_stack_fffffb30, in_stack_fffffb34);
			strcpy((char *)str, acStack1224);
		}
	}
	if ((iVar5 != -1) || (iVar11 != -1)) {
		CalcItemValue(i);
	}
	return;
}

void GetItemBonus(int i, int idata, int minlvl, int maxlvl, BOOL onlygood)

{
	int iStack0000001c;

	if (*(char *)(i * 0x170 + 0x1013da46) != '\x04') {
		if (0x19 < minlvl) {
			minlvl = 0x19;
		}
		switch (*(undefined4 *)(i * 0x170 + 0x1013d990)) {
		case 1:
		case 2:
		case 4:
			iStack0000001c = idata;
			GetItemPower(i, minlvl, maxlvl, 0x1000, onlygood);
			break;
		case 3:
			iStack0000001c = idata;
			GetItemPower(i, minlvl, maxlvl, 0x10, onlygood);
			break;
		case 5:
			iStack0000001c = idata;
			GetItemPower(i, minlvl, maxlvl, 0x10000, onlygood);
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			iStack0000001c = idata;
			GetItemPower(i, minlvl, maxlvl, 0x100000, onlygood);
			break;
		case 10:
			iStack0000001c = idata;
			GetStaffSpell(i, maxlvl, onlygood);
			break;
		case 0xc:
		case 0xd:
			iStack0000001c = idata;
			GetItemPower(i, minlvl, maxlvl, 1, onlygood);
		}
	}
	return;
}

void SetupItem(int i)

{
	byte bVar1;

	i = i * 0x170;
	bVar1 = (&DAT_10103660)[*(int *)(i + 0x1013da48)];
	*(undefined4 *)(i + 0x1013d9a0) = *(undefined4 *)(&DAT_1013c974 + (uint)bVar1 * 4);
	*(uint *)(i + 0x1013d9a4) = (uint)(byte)(&DAT_10103798)[(uint)bVar1];
	*(undefined4 *)(i + 0x1013d9ac) = 0x60;
	*(undefined4 *)(i + 0x1013d9b0) = 0x10;
	*(undefined4 *)(i + 0x1013d9c0) = 0;
	*(undefined4 *)(i + 0x1013d9bc) = 0;
	if (*(char *)((int)plr + myplr * 0x55ec + 0x5592) == '\0') {
		*(undefined4 *)(i + 0x1013d9a8) = 1;
		*(undefined4 *)(i + 0x1013d99c) = 1;
		*(undefined *)(i + 0x1013d9b8) = 0;
		return;
	}
	*(undefined4 *)(i + 0x1013d9a8) = *(undefined4 *)(i + 0x1013d9a4);
	*(undefined4 *)(i + 0x1013d99c) = 0;
	*(undefined *)(i + 0x1013d9b8) = 1;
	return;
}

int RndItem(int m)

{
	char cVar1;
	char cVar2;
	ushort uVar3;
	int iVar4;
	int *piVar5;
	longlong lVar6;
	int v;
	int iVar7;
	longlong lVar8;
	int iVar9;
	int local_808[514];

	lVar6 = 0x100f8fd0;
	uVar3 = *(ushort *)(*(int *)(m * 0xe8 + 0x10151b14) + 0x78);
	if ((uVar3 & 0x8000) == 0) {
		if ((uVar3 & 0x4000) == 0) {
			v = random('\x18', 100);
			if (v < 0x29) {
				v = random('\x18', 100);
				if (v < 0x1a) {
					cVar2 = *(char *)(m * 0xe8 + 0x10151af4);
					lVar8 = lVar6 + 0x3858;
					v = 0;
					cVar1 = **(char **)((int)lVar6 + -0x77f0);
					iVar9 = 0;
					while (piVar5 = (int *)lVar8, *(char *)((int)piVar5 + 5) != -1) {
						iVar4 = *piVar5;
						iVar7 = v;
						if ((iVar4 == 2) && (iVar7 = v, *(char *)(piVar5 + 6) <= cVar2)) {
							iVar7 = v + 1;
							local_808[v] = iVar9;
						}
						v = iVar7;
						if ((iVar4 != 0) && (v = iVar7, *(char *)(piVar5 + 6) <= cVar2)) {
							v = iVar7 + 1;
							local_808[iVar7] = iVar9;
						}
						if ((piVar5[0xf] == 0x20) && (cVar1 == '\x01')) {
							v = v + -1;
						}
						if ((piVar5[0xf] == 0x22) && (cVar1 == '\x01')) {
							v = v + -1;
						}
						lVar8 = lVar8 + 0x4c;
						iVar9 = iVar9 + 1;
					}
					v = random('\x18', v);
					v = local_808[v] + 1;
				} else {
					v = 1;
				}
			} else {
				v = 0;
			}
		} else {
			v = 0;
		}
	} else {
		v = -(((uint)uVar3 & 0xfff) + 1);
	}
	return v;
}

int RndUItem(int m)

{
	bool bVar1;
	char cVar2;
	char cVar3;
	ushort uVar4;
	char cVar5;
	uint uVar6;
	int v;
	ItemDataStruct *pIVar7;
	int iVar8;
	int local_808[514];

	cVar5 = gbMaxPlayers;
	if (((m == -1) || (uVar4 = *(ushort *)(*(int *)(m * 0xe8 + 0x10151b14) + 0x78), (uVar4 & 0x8000) == 0)) || (gbMaxPlayers != '\x01')) {
		pIVar7 = AllItemsList;
		cVar3 = *(char *)(m * 0xe8 + 0x10151af4);
		uVar6 = (uint)currlevel;
		v = 0;
		iVar8 = 0;
		while (pIVar7->iLoc != -1) {
			bVar1 = pIVar7->iRnd != 0;
			if (m == -1) {
				if ((int)(uVar6 << 1) < (int)pIVar7->iMinMLvl) {
					bVar1 = false;
				}
			} else {
				if (cVar3 < pIVar7->iMinMLvl) {
					bVar1 = false;
				}
			}
			cVar2 = pIVar7->itype;
			if (cVar2 == '\0') {
				bVar1 = false;
			}
			if (cVar2 == '\v') {
				bVar1 = false;
			}
			if (cVar2 == '\x0e') {
				bVar1 = false;
			}
			if (pIVar7->iMiscId == 0x18) {
				bVar1 = true;
			}
			if ((pIVar7->iSpell == 0x20) && (cVar5 == '\x01')) {
				bVar1 = false;
			}
			if ((pIVar7->iSpell == 0x22) && (cVar5 == '\x01')) {
				bVar1 = false;
			}
			if (bVar1) {
				local_808[v] = iVar8;
				v = v + 1;
			}
			pIVar7 = pIVar7 + 1;
			iVar8 = iVar8 + 1;
		}
		v = random('\x19', v);
		v = local_808[v];
	} else {
		v = -(((uint)uVar4 & 0xfff) + 1);
	}
	return v;
}

int RndAllItems(void)

{
	byte bVar1;
	char cVar2;
	int *piVar3;
	longlong lVar4;
	int v;
	int iVar5;
	longlong lVar6;
	int iVar7;
	int local_808[514];

	lVar4 = 0x100f8fd0;
	v = random('\x1a', 100);
	if (v < 0x1a) {
		v = 0;
		bVar1 = **(byte **)((int)lVar4 + -0x77e4);
		lVar6 = lVar4 + 0x3858;
		iVar7 = 0;
		cVar2 = **(char **)((int)lVar4 + -0x77f0);
		while (piVar3 = (int *)lVar6, *(char *)((int)piVar3 + 5) != -1) {
			iVar5 = v;
			if ((*piVar3 != 0) && (iVar5 = v, (int)*(char *)(piVar3 + 6) <= (int)((uint)bVar1 << 1))) {
				iVar5 = v + 1;
				local_808[v] = iVar7;
			}
			if ((piVar3[0xf] == 0x20) && (cVar2 == '\x01')) {
				iVar5 = iVar5 + -1;
			}
			v = iVar5;
			if ((piVar3[0xf] == 0x22) && (v = iVar5, cVar2 == '\x01')) {
				v = iVar5 + -1;
			}
			lVar6 = lVar6 + 0x4c;
			iVar7 = iVar7 + 1;
		}
		v = random('\x1a', v);
		v = local_808[v];
	} else {
		v = 0;
	}
	return v;
}

int RndTypeItems(int itype, int imid, int lvl)

{
	bool bVar1;
	uint uVar2;
	int v;
	ItemDataStruct *pIVar3;
	int iVar4;
	int local_808[514];

	v = 0;
	pIVar3 = AllItemsList;
	iVar4 = 0;
	uVar2 = (uint)currlevel;
	while (pIVar3->iLoc != -1) {
		bVar1 = itype == (int)pIVar3->itype && ((int)pIVar3->iMinMLvl <= (int)(uVar2 << 1) && pIVar3->iRnd != 0);
		if ((imid != -1) && (imid != pIVar3->iMiscId)) {
			bVar1 = false;
		}
		if (bVar1) {
			local_808[v] = iVar4;
			v = v + 1;
		}
		pIVar3 = pIVar3 + 1;
		iVar4 = iVar4 + 1;
	}
	v = random('\x1b', v);
	return local_808[v];
}

int CheckUnique(int i, int lvl, int uper, BOOL recreate)

{
	char cVar1;
	char cVar2;
	undefined *puVar3;
	int iVar4;
	undefined uVar5;
	undefined uVar6;
	undefined in_r7;
	int iVar7;
	undefined in_r8;
	int *piVar8;
	undefined in_r9;
	longlong lVar9;
	undefined in_r10;
	int iVar10;

	uVar6 = (undefined)recreate;
	uVar5 = (undefined)uper;
	lVar9 = ZEXT48(register0x0000000c) - 0xd0;
	puVar3 = (undefined *)lVar9;
	*(BADSPACEBASE **)puVar3 = register0x0000000c;
	iVar4 = random(0x1c, 100, *puVar3);
	if (uper < iVar4) {
		iVar4 = -1;
	} else {
		iVar10 = 0;
		ZeroMemory((char)lVar9 + '<', 0x80, uVar5, uVar6, in_r7, in_r8, in_r9, in_r10, puVar3[0xb], puVar3[0xf],
		    *(undefined4 *)(puVar3 + 0x14));
		iVar4 = *(int *)(puVar3 + 0x14);
		lVar9 = ZEXT48(register0x0000000c) - 0x94;
		iVar7 = *(int *)(iVar4 + -0x718c);
		piVar8 = *(int **)(iVar4 + -0x7170);
		cVar1 = **(char **)(iVar4 + -0x77f0);
		cVar2 = *(char *)(iVar4 + *(int *)(*(int *)(iVar4 + -0x7690) + i * 0x170 + 0x168) * 0x4c + 0x3865);
		while (*(char *)(iVar7 + 4) != -1) {
			if (((*(char *)(iVar7 + 4) == cVar2) && ((int)*(char *)(iVar7 + 5) <= lvl)) && ((recreate != 0 || ((*piVar8 == 0 || (cVar1 != '\x01')))))) {
				*(undefined *)lVar9 = 1;
				iVar10 = iVar10 + 1;
			}
			iVar7 = iVar7 + 0x54;
			piVar8 = piVar8 + 1;
			lVar9 = lVar9 + 1;
		}
		if (iVar10 == 0) {
			iVar4 = -1;
		} else {
			random(0x1d, 10, *puVar3);
			iVar4 = 0;
			while (0 < iVar10) {
				if (puVar3[iVar4 + 0x3c] != '\0') {
					iVar10 = iVar10 + -1;
				}
				if (0 < iVar10) {
					iVar4 = iVar4 + 1;
					if (iVar4 == 0x80) {
						iVar4 = 0;
					}
				}
			}
		}
	}
	return iVar4;
}

void GetUniqueItem(int i, int uid)

{
	char *pcVar1;
	int iVar2;

	iVar2 = uid * 0x54;
	*(undefined4 *)(&DAT_1013cb98 + uid * 4) = 1;
	SaveItemPower(
	    i, (int)*(char *)(iVar2 + 0x10101890), *(int *)(iVar2 + 0x10101894), *(int *)(iVar2 + 0x10101898), 0, 0, 1);
	pcVar1 = (char *)(iVar2 + 0x1010188a);
	if ('\x01' < *(char *)(iVar2 + 0x1010188a)) {
		SaveItemPower(
		    i, (int)*(char *)(iVar2 + 0x1010189c), *(int *)(iVar2 + 0x101018a0), *(int *)(iVar2 + 0x101018a4), 0, 0, 1);
	}
	if ('\x02' < *pcVar1) {
		SaveItemPower(
		    i, (int)*(char *)(iVar2 + 0x101018a8), *(int *)(iVar2 + 0x101018ac), *(int *)(iVar2 + 0x101018b0), 0, 0, 1);
	}
	if ('\x03' < *pcVar1) {
		SaveItemPower(
		    i, (int)*(char *)(iVar2 + 0x101018b4), *(int *)(iVar2 + 0x101018b8), *(int *)(iVar2 + 0x101018bc), 0, 0, 1);
	}
	if ('\x04' < *pcVar1) {
		SaveItemPower(
		    i, (int)*(char *)(iVar2 + 0x101018c0), *(int *)(iVar2 + 0x101018c4), *(int *)(iVar2 + 0x101018c8), 0, 0, 1);
	}
	if ('\x05' < *pcVar1) {
		SaveItemPower(
		    i, (int)*(char *)(iVar2 + 0x101018cc), *(int *)(iVar2 + 0x101018d0), *(int *)(iVar2 + 0x101018d4), 0, 0, 1);
	}
	i = i * 0x170;
	strcpy((char *)(i + 0x1013da05), (&PTR_s_The_Butcher_s_Cleaver_10101884)[uid * 0x15]);
	*(undefined4 *)(i + 0x1013da50) = *(undefined4 *)(iVar2 + 0x1010188c);
	if (*(int *)(i + 0x1013da64) == 0x1b) {
		*(int *)(&DAT_1013d988 + i) = uid;
	}
	*(int *)(i + 0x1013dabc) = uid;
	*(undefined *)(i + 0x1013d9c4) = 2;
	*(ushort *)(i + 0x1013d98c) = *(ushort *)(i + 0x1013d98c) | 0x200;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SpawnUnique(int uid, int x, int y)

{
	int iVar1;
	int iVar2;
	int i;
	int idata;
	longlong lVar3;

	i = _DAT_1013d58c;
	lVar3 = 0x100f8fd0;
	if (_DAT_1013d984 < 0x7f) {
		GetSuperItemSpace(x, y, (char)_DAT_1013d58c);
		iVar2 = (int)lVar3;
		iVar1 = *(int *)(iVar2 + -0x718c);
		lVar3 = lVar3 + 0x3858;
		_DAT_1013d58c = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		idata = 0;
		*(int *)(*(int *)(iVar2 + -0x71e0) + _DAT_1013d984 * 4) = i;
		while (*(char *)((int)lVar3 + 0xd) != *(char *)(iVar1 + uid * 0x54 + 4)) {
			lVar3 = lVar3 + 0x4c;
			idata = idata + 1;
		}
		GetItemAttrs(i, idata, (uint) * *(byte **)(iVar2 + -0x77e4));
		GetUniqueItem(i, uid);
		SetupItem(i);
		_DAT_1013d984 = _DAT_1013d984 + 1;
	}
	return;
}

void ItemRndDur(int ii)

{
	int *piVar1;
	int *piVar2;
	int iVar3;

	piVar1 = (int *)(ii * 0x170 + 0x1013da74);
	iVar3 = *piVar1;
	if ((iVar3 != 0) && (iVar3 != 0xff)) {
		piVar2 = (int *)(ii * 0x170 + 0x1013da78);
		iVar3 = random('\0', *piVar2 >> 1);
		*piVar1 = (*piVar2 >> 2) + iVar3 + 1;
	}
	return;
}

void SetupAllItems(int ii, int idx, int iseed, int lvl, int uper, int onlygood, int recreate, BOOL pregen)

{
	ushort *puVar1;
	int *piVar2;
	int uid;
	int lvl_00;
	int iVar3;

	iVar3 = ii * 0x170;
	*(int *)(&DAT_1013d988 + iVar3) = iseed;
	SetRndSeed(iseed);
	GetItemAttrs(ii, idx, lvl >> 1);
	puVar1 = (ushort *)(iVar3 + 0x1013d98c);
	*puVar1 = (ushort)lvl;
	if (pregen != 0) {
		*puVar1 = *puVar1 | 0x8000;
	}
	if (onlygood != 0) {
		*puVar1 = *puVar1 | 0x40;
	}
	if (uper == 0xf) {
		*puVar1 = *puVar1 | 0x80;
	} else {
		if (uper == 1) {
			*puVar1 = *puVar1 | 0x100;
		}
	}
	piVar2 = (int *)(iVar3 + 0x1013da64);
	if (*piVar2 == 0x1b) {
		if (*(char *)(iVar3 + 0x1013da45) != '\a') {
			GetUniqueItem(ii, iseed);
		}
	} else {
		uid = random(' ', 100);
		lvl_00 = lvl;
		if ((10 < uid) && (uid = random('!', 100), lvl_00 = -1, uid <= lvl)) {
			lvl_00 = lvl;
		}
		if ((lvl_00 == -1) && (*piVar2 == 0x17)) {
			lvl_00 = lvl;
		}
		if ((lvl_00 == -1) && (*piVar2 == 0x19)) {
			lvl_00 = lvl;
		}
		if ((lvl_00 == -1) && (*piVar2 == 0x1a)) {
			lvl_00 = lvl;
		}
		if (onlygood != 0) {
			lvl_00 = lvl;
		}
		if (uper == 0xf) {
			lvl_00 = lvl + 4;
		}
		if (lvl_00 != -1) {
			uid = CheckUnique(ii, lvl_00, uper, recreate);
			if (uid == -1) {
				GetItemBonus(ii, idx, lvl_00 >> 1, lvl_00, onlygood);
			} else {
				GetUniqueItem(ii, uid);
				*puVar1 = *puVar1 | 0x200;
			}
		}
		if (*(char *)(iVar3 + 0x1013d9c4) != '\x02') {
			ItemRndDur(ii);
		}
	}
	SetupItem(ii);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SpawnItem(int m, int x, int y, BOOL sendmsg)

{
	int ii;
	int idx;
	int iseed;
	int onlygood;
	int iVar1;

	iseed = 0x100f8fd0;
	iVar1 = m * 0xe8;
	if ((*(char *)(iVar1 + 0x10151af0) == '\0') && (((*(ushort *)(*(int *)(iVar1 + 0x10151b14) + 0x78) & 0x8000) == 0 || (gbMaxPlayers == '\x01')))) {
		if ((quests[1]._qactive == '\x02') && (quests[1]._qvar1 == '\x05')) {
			quests[1]._qvar1 = '\x06';
			idx = 0x12;
		} else {
			iseed = 0x100f8fd0;
			idx = RndItem(m);
			if (idx == 0) {
				return;
			}
			if (idx < 1) {
				SpawnUnique(-(idx + 1), x, y);
				return;
			}
			idx = idx + -1;
			onlygood = 0;
		}
	} else {
		iseed = 0x100f8fd0;
		idx = RndUItem(m);
		if (idx < 0) {
			SpawnUnique(-(idx + 1), x, y);
			return;
		}
		onlygood = 1;
	}
	ii = _DAT_1013d58c;
	if (_DAT_1013d984 < 0x7f) {
		GetSuperItemSpace(x, y, (char)_DAT_1013d58c);
		_DAT_1013d58c = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		*(int *)(*(int *)(iseed + -0x71e0) + _DAT_1013d984 * 4) = ii;
		if (*(char *)(iVar1 + 0x10151af0) == '\0') {
			iseed = GetRndSeed();
			SetupAllItems(ii, idx, iseed, (int)*(char *)(*(int *)(iVar1 + 0x10151b14) + 0x56), 1, onlygood, 0, 0);
		} else {
			iseed = GetRndSeed();
			SetupAllItems(ii, idx, iseed, (int)*(char *)(*(int *)(iVar1 + 0x10151b14) + 0x56), 0xf, onlygood, 0, 0);
		}
		_DAT_1013d984 = _DAT_1013d984 + 1;
		if (sendmsg != 0) {
			NetSendCmdDItem(0, ii);
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CreateItem(int uid, int x, int y)

{
	int iVar1;
	int i;
	int iVar2;
	int idata;
	longlong lVar3;

	i = _DAT_1013d58c;
	lVar3 = 0x100f8fd0;
	if (_DAT_1013d984 < 0x7f) {
		GetSuperItemSpace(x, y, (char)_DAT_1013d58c);
		iVar2 = (int)lVar3;
		iVar1 = *(int *)(iVar2 + -0x718c);
		lVar3 = lVar3 + 0x3858;
		_DAT_1013d58c = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		idata = 0;
		*(int *)(*(int *)(iVar2 + -0x71e0) + _DAT_1013d984 * 4) = i;
		while (*(char *)((int)lVar3 + 0xd) != *(char *)(iVar1 + uid * 0x54 + 4)) {
			lVar3 = lVar3 + 0x4c;
			idata = idata + 1;
		}
		GetItemAttrs(i, idata, (uint) * *(byte **)(iVar2 + -0x77e4));
		GetUniqueItem(i, uid);
		SetupItem(i);
		*(undefined *)(*(int *)(iVar2 + -0x7690) + i * 0x170 + 0x3c) = 2;
		_DAT_1013d984 = _DAT_1013d984 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CreateRndItem(int x, int y, BOOL onlygood, BOOL sendmsg, BOOL delta)

{
	int ii;
	int iVar1;
	int idx;
	int iseed;

	iVar1 = 0x100f8fd0;
	if (onlygood == 0) {
		idx = RndAllItems();
	} else {
		idx = RndUItem(-1);
	}
	ii = _DAT_1013d58c;
	if (_DAT_1013d984 < 0x7f) {
		GetSuperItemSpace(x, y, (char)_DAT_1013d58c);
		_DAT_1013d58c = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		*(int *)(*(int *)(iVar1 + -0x71e0) + _DAT_1013d984 * 4) = ii;
		iseed = GetRndSeed();
		SetupAllItems(ii, idx, iseed, (uint) * *(byte **)(iVar1 + -0x77e4) << 1, 1, onlygood, 0, delta);
		if (sendmsg != 0) {
			NetSendCmdDItem(0, ii);
		}
		if (delta != 0) {
			DeltaAddItem(ii);
		}
		_DAT_1013d984 = _DAT_1013d984 + 1;
	}
	return;
}

void SetupAllUseful(int ii, int iseed, int lvl)

{
	int idata;
	int iVar1;

	*(int *)(&DAT_1013d988 + ii * 0x170) = iseed;
	SetRndSeed(iseed);
	idata = random('\"', 2);
	if (idata == 0) {
		idata = 0x19;
	} else {
		idata = 0x18;
	}
	if ((1 < lvl) && (iVar1 = random('\"', 3), iVar1 == 0)) {
		idata = 0x1b;
	}
	GetItemAttrs(ii, idata, lvl);
	*(short *)(ii * 0x170 + 0x1013d98c) = (short)lvl + 0x180;
	SetupItem(ii);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CreateRndUseful(int pnum, int x, int y, BOOL sendmsg)

{
	int ii;
	int iVar1;
	int iseed;
	int iStack00000018;

	ii = _DAT_1013d58c;
	iVar1 = 0x100f8fd0;
	if (_DAT_1013d984 < 0x7f) {
		iStack00000018 = pnum;
		GetSuperItemSpace(x, y, (char)_DAT_1013d58c);
		_DAT_1013d58c = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		*(int *)(*(int *)(iVar1 + -0x71e0) + _DAT_1013d984 * 4) = ii;
		iseed = GetRndSeed();
		SetupAllUseful(ii, iseed, (uint) * *(byte **)(iVar1 + -0x77e4));
		if (sendmsg != 0) {
			NetSendCmdDItem(0, ii);
		}
		_DAT_1013d984 = _DAT_1013d984 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CreateTypeItem(int x, int y, BOOL onlygood, int itype, int imisc, BOOL sendmsg, BOOL delta)

{
	int ii;
	int iVar1;
	int idx;
	int iseed;

	iVar1 = 0x100f8fd0;
	if (itype == 0xb) {
		idx = 0;
	} else {
		iVar1 = 0x100f8fd0;
		idx = RndTypeItems(itype, imisc, onlygood);
	}
	ii = _DAT_1013d58c;
	if (_DAT_1013d984 < 0x7f) {
		GetSuperItemSpace(x, y, (char)_DAT_1013d58c);
		_DAT_1013d58c = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		*(int *)(*(int *)(iVar1 + -0x71e0) + _DAT_1013d984 * 4) = ii;
		iseed = GetRndSeed();
		SetupAllItems(ii, idx, iseed, (uint) * *(byte **)(iVar1 + -0x77e4) << 1, 1, onlygood, 0, delta);
		if (sendmsg != 0) {
			NetSendCmdDItem(0, ii);
		}
		if (delta != 0) {
			DeltaAddItem(ii);
		}
		_DAT_1013d984 = _DAT_1013d984 + 1;
	}
	return;
}

void RecreateItem(int ii, int idx, WORD icreateinfo, int iseed, int ivalue)

{
	uint uper;
	uint uVar1;

	if (idx == 0) {
		ii = ii * 0x170;
		SetPlrHandItem((ItemStruct *)(&DAT_1013d988 + ii), 0);
		((ItemStruct *)(&DAT_1013d988 + ii))->_iSeed = iseed;
		*(WORD *)(ii + 0x1013d98c) = icreateinfo;
		*(int *)(ii + 0x1013da4c) = ivalue;
		if (*(int *)(ii + 0x1013da4c) < 0x9c4) {
			if (ivalue < 0x3e9) {
				*(undefined4 *)(ii + 0x1013da48) = 4;
			} else {
				*(undefined4 *)(ii + 0x1013da48) = 5;
			}
		} else {
			*(undefined4 *)(ii + 0x1013da48) = 6;
		}
	} else {
		uVar1 = SEXT24((short)icreateinfo);
		if ((uVar1 & 0xffff) == 0) {
			SetPlrHandItem((ItemStruct *)(&DAT_1013d988 + ii * 0x170), idx);
			SetPlrHandSeed((ItemStruct *)(&DAT_1013d988 + ii * 0x170), iseed);
		} else {
			if ((uVar1 & 0x7c00) == 0) {
				if ((uVar1 & 0x180) == 0x180) {
					SetupAllUseful(ii, iseed, uVar1 & 0x3f);
				} else {
					uper = (uint)((uVar1 & 0x100) != 0);
					if ((uVar1 & 0x80) != 0) {
						uper = 0xf;
					}
					SetupAllItems(ii, idx, iseed, uVar1 & 0x3f, uper, (uint)((uVar1 & 0x40) != 0),
					    (uint)((uVar1 & 0x200) != 0), (uint)((uVar1 & 0x8000) != 0));
				}
			} else {
				RecreateTownItem(ii, idx, icreateinfo, iseed, ivalue);
			}
		}
	}
	return;
}

void RecreateEar(int ii, WORD ic, int iseed, int Id, int dur, int mdur, int ch, int mch, int ivalue, int ibuff)

{
	uint uVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	int iVar5;
	uint in_stack_00000038;
	uint in_stack_0000003c;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	iVar5 = 0x100f8fd0;
	ii = ii * 0x170;
	SetPlrHandItem((ItemStruct *)(&DAT_1013d988 + ii), 0x17);
	DAT_101282d4 = (byte)((uint)(int)(short)ic >> 8) & 0x7f;
	bRam101282d5 = (byte)ic & 0x7f;
	bRam101282d6 = (byte)((uint)iseed >> 0x18) & 0x7f;
	bRam101282d7 = (byte)((uint)iseed >> 0x10) & 0x7f;
	bRam101282d8 = (byte)((uint)iseed >> 8) & 0x7f;
	bRam101282d9 = (byte)iseed & 0x7f;
	bRam101282da = (byte)Id & 0x7f;
	bRam101282db = (byte)dur & 0x7f;
	bRam101282dc = (byte)mdur & 0x7f;
	bRam101282dd = (byte)ch & 0x7f;
	bRam101282de = (byte)mch & 0x7f;
	uVar1 = in_stack_00000038 >> 8 & 0x7f;
	uVar2 = in_stack_0000003c >> 0x18 & 0x7f;
	uVar3 = in_stack_0000003c >> 0x10 & 0x7f;
	uVar4 = in_stack_0000003c >> 8 & 0x7f;
	uRam101282df = (undefined)uVar1;
	uRam101282e0 = (undefined)uVar2;
	uRam101282e1 = (undefined)uVar3;
	uRam101282e2 = (undefined)uVar4;
	uRam101282e3 = (undefined)(in_stack_0000003c & 0x7f);
	uRam101282e4 = 0;
	wsprintf(ii + 0x1013d9c5, *(undefined4 *)(iVar5 + -0x5f8c), &DAT_101282d4, in_stack_0000003c & 0x7f, uVar4, uVar3,
	    uVar2, uVar1, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0, in_stack_ffffffb4,
	    in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0, in_stack_ffffffc4);
	*(int *)(ii + 0x1013da48) = (in_stack_00000038 >> 6 & 3) + 0x13;
	*(uint *)(ii + 0x1013da4c) = in_stack_00000038 & 0x3f;
	*(WORD *)(ii + 0x1013d98c) = ic;
	((ItemStruct *)(&DAT_1013d988 + ii))->_iSeed = iseed;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SpawnQuestItem(int itemid, int x, int y, int randarea, int selflag)

{
	int *piVar1;
	byte *pbVar2;
	char cVar3;
	undefined8 uVar4;
	uint uVar5;
	undefined8 uVar6;
	BOOL BVar7;
	int iVar8;
	longlong lVar9;
	int i;
	int iVar10;
	int iVar11;

	lVar9 = (longlong)randarea;
	uVar6 = 0x100f8fd0;
	iVar10 = 0x100f8fd0;
	if (lVar9 != 0) {
		i = 0;
		do {
			i = i + 1;
			if ((1000 < i) && (1 < (int)lVar9)) {
				lVar9 = lVar9 + -1;
			}
			x = random('\0', 0x70);
			y = random('\0', 0x70);
			uVar5 = 0;
			iVar11 = 0;
			while (true) {
				iVar10 = (int)uVar6;
				if (((int)lVar9 <= iVar11) || (uVar5 != 0))
					break;
				iVar10 = 0;
				while ((iVar10 < (int)lVar9 && (uVar5 == 0))) {
					BVar7 = ItemSpaceOk(x + iVar11, y + iVar10);
					uVar4 = countLeadingZeros(BVar7);
					iVar10 = iVar10 + 1;
					uVar5 = (uint)uVar4 >> 5 & 0xff;
				}
				iVar11 = iVar11 + 1;
			}
		} while (uVar5 != 0);
	}
	i = _DAT_1013d58c;
	if (_DAT_1013d984 < 0x7f) {
		iVar8 = _DAT_1013d58c * 0x170;
		piVar1 = *(int **)(iVar10 + -0x768c);
		cVar3 = (char)_DAT_1013d58c;
		iVar11 = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		*(int *)(*(int *)(iVar10 + -0x71e0) + _DAT_1013d984 * 4) = _DAT_1013d58c;
		_DAT_1013d58c = iVar11;
		pbVar2 = *(byte **)(iVar10 + -0x77e4);
		*(int *)(iVar8 + 0x1013d994) = x;
		*(int *)(iVar8 + 0x1013d998) = y;
		*(char *)(*piVar1 + x * 0x70 + y) = cVar3 + '\x01';
		GetItemAttrs(i, itemid, (uint)*pbVar2);
		SetupItem(i);
		*(undefined4 *)(iVar8 + 0x1013d9bc) = 1;
		if (selflag != 0) {
			*(undefined *)(iVar8 + 0x1013d9b8) = (char)selflag;
			*(undefined4 *)(iVar8 + 0x1013d9a8) = *(undefined4 *)(iVar8 + 0x1013d9a4);
			*(undefined4 *)(iVar8 + 0x1013d99c) = 0;
		}
		_DAT_1013d984 = _DAT_1013d984 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void SpawnRock(void)

{
	int iVar1;
	char cVar2;
	int i;
	undefined8 uVar3;
	uint uVar4;
	int *piVar5;
	int in_r7;
	int iVar6;
	int iVar7;

	i = _DAT_1013d58c;
	iVar6 = 0;
	uVar4 = 0;
	piVar5 = (int *)&DAT_1017e10c;
	while ((iVar6 < _DAT_1017e3d0 && (uVar4 == 0))) {
		in_r7 = *piVar5;
		piVar5 = piVar5 + 1;
		iVar6 = iVar6 + 1;
		uVar3 = countLeadingZeros(0x17 - *(int *)(&DAT_1017e3d4 + in_r7 * 0x78));
		uVar4 = (uint)uVar3 >> 5 & 0xff;
	}
	if (uVar4 != 0) {
		iVar7 = _DAT_1013d58c * 0x170;
		cVar2 = (char)_DAT_1013d58c;
		iVar6 = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		*(int *)(&DAT_1013d788 + _DAT_1013d984 * 4) = _DAT_1013d58c;
		_DAT_1013d58c = iVar6;
		iVar6 = *(int *)(in_r7 * 0x78 + 0x1017e3d8);
		*(int *)(iVar7 + 0x1013d994) = iVar6;
		iVar1 = *(int *)(in_r7 * 0x78 + 0x1017e3dc);
		*(int *)(iVar7 + 0x1013d998) = iVar1;
		*(char *)(_DAT_1012f1a8 + iVar6 * 0x70 + iVar1) = cVar2 + '\x01';
		GetItemAttrs(i, 9, (uint)currlevel);
		SetupItem(i);
		*(undefined *)(iVar7 + 0x1013d9b8) = 2;
		*(undefined4 *)(iVar7 + 0x1013d9bc) = 1;
		*(undefined4 *)(iVar7 + 0x1013d9a8) = 0xb;
		_DAT_1013d984 = _DAT_1013d984 + 1;
	}
	return;
}

void RespawnItem(int i, BOOL FlipFlag)

{
	int *piVar1;
	byte bVar2;
	int iVar3;

	i = i * 0x170;
	piVar1 = (int *)(i + 0x1013da48);
	bVar2 = (&DAT_10103660)[*piVar1];
	iVar3 = (uint)bVar2 * 4;
	*(undefined4 *)(i + 0x1013d9a0) = *(undefined4 *)(&DAT_1013c974 + iVar3);
	*(uint *)(i + 0x1013d9a4) = (uint)(byte)(&DAT_10103798)[(uint)bVar2];
	*(undefined4 *)(i + 0x1013d9ac) = 0x60;
	*(undefined4 *)(i + 0x1013d9b0) = 0x10;
	*(undefined4 *)(i + 0x1013d9bc) = 0;
	*(undefined *)(i + 0x1013dab9) = 0;
	if (FlipFlag == 0) {
		*(undefined4 *)(i + 0x1013d9a8) = *(undefined4 *)(i + 0x1013d9a4);
		*(undefined4 *)(i + 0x1013d99c) = 0;
		*(undefined *)(i + 0x1013d9b8) = 1;
	} else {
		*(undefined4 *)(i + 0x1013d9a8) = 1;
		*(undefined4 *)(i + 0x1013d99c) = 1;
		*(undefined *)(i + 0x1013d9b8) = 0;
	}
	if (*piVar1 == 0x4c) {
		*(undefined *)(i + 0x1013d9b8) = 1;
		PlaySfxLoc(*(int *)(&DAT_101037bc + iVar3), *(int *)(i + 0x1013d994), *(int *)(i + 0x1013d998));
	}
	if (*piVar1 == 0x7e) {
		*(undefined *)(i + 0x1013d9b8) = 1;
	}
	if (*piVar1 == 0x8c) {
		*(undefined *)(i + 0x1013d9b8) = 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DeleteItem(int ii, int i)

{
	*(int *)(&DAT_1013d58c + (0x7f - _DAT_1013d984) * 4) = ii;
	_DAT_1013d984 = _DAT_1013d984 + -1;
	if (_DAT_1013d984 < 1) {
		return;
	}
	if (i == _DAT_1013d984) {
		return;
	}
	*(undefined4 *)(&DAT_1013d788 + i * 4) = *(undefined4 *)(&DAT_1013d788 + _DAT_1013d984 * 4);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ItemDoppel(void)

{
	char cVar1;
	int iVar2;
	int iVar3;
	char *pcVar4;
	int iVar5;
	longlong lVar6;

	if (gbMaxPlayers == '\x01') {
		return;
	}
	lVar6 = 0x10;
	iVar5 = 0x10;
	iVar3 = 0x700;
	do {
		pcVar4 = (char *)(_DAT_1012f1a8 + iVar3 + _DAT_10103a4c);
		cVar1 = *pcVar4;
		if (cVar1 != '\0') {
			iVar2 = ((int)cVar1 + -1) * 0x170;
			if (*(int *)(iVar2 + 0x1013d994) == iVar5) {
				if (*(int *)(iVar2 + 0x1013d998) == _DAT_10103a4c)
					goto LAB_100502d0;
			}
			*pcVar4 = '\0';
		}
	LAB_100502d0:
		pcVar4 = (char *)(_DAT_1012f1a8 + iVar3 + 0x70 + _DAT_10103a4c);
		cVar1 = *pcVar4;
		if (cVar1 != '\0') {
			iVar2 = ((int)cVar1 + -1) * 0x170;
			if (*(int *)(iVar2 + 0x1013d994) == iVar5 + 1) {
				if (*(int *)(iVar2 + 0x1013d998) == _DAT_10103a4c)
					goto LAB_10050320;
			}
			*pcVar4 = '\0';
		}
	LAB_10050320:
		pcVar4 = (char *)(_DAT_1012f1a8 + iVar3 + 0xe0 + _DAT_10103a4c);
		cVar1 = *pcVar4;
		if (cVar1 != '\0') {
			iVar2 = ((int)cVar1 + -1) * 0x170;
			if (*(int *)(iVar2 + 0x1013d994) == iVar5 + 2) {
				if (*(int *)(iVar2 + 0x1013d998) == _DAT_10103a4c)
					goto LAB_10050370;
			}
			*pcVar4 = '\0';
		}
	LAB_10050370:
		pcVar4 = (char *)(_DAT_1012f1a8 + iVar3 + 0x150 + _DAT_10103a4c);
		cVar1 = *pcVar4;
		if (cVar1 != '\0') {
			iVar2 = ((int)cVar1 + -1) * 0x170;
			if (*(int *)(iVar2 + 0x1013d994) == iVar5 + 3) {
				if (*(int *)(iVar2 + 0x1013d998) == _DAT_10103a4c)
					goto LAB_100503c0;
			}
			*pcVar4 = '\0';
		}
	LAB_100503c0:
		pcVar4 = (char *)(_DAT_1012f1a8 + iVar3 + 0x1c0 + _DAT_10103a4c);
		cVar1 = *pcVar4;
		if (cVar1 != '\0') {
			iVar2 = ((int)cVar1 + -1) * 0x170;
			if (*(int *)(iVar2 + 0x1013d994) == iVar5 + 4) {
				if (*(int *)(iVar2 + 0x1013d998) == _DAT_10103a4c)
					goto LAB_10050410;
			}
			*pcVar4 = '\0';
		}
	LAB_10050410:
		iVar3 = iVar3 + 0x230;
		iVar5 = iVar5 + 5;
		lVar6 = lVar6 + -1;
		if (lVar6 == 0) {
			if (_DAT_10103a4c + 1 != 0x60) {
				_DAT_10103a4c = _DAT_10103a4c + 1;
				return;
			}
			_DAT_10103a4c = 0x10;
			return;
		}
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void ProcessItems(void)

{
	int iVar1;
	int iVar2;
	int *piVar3;
	int *piVar4;

	iVar2 = 0;
	piVar4 = (int *)&DAT_1013d788;
	while (iVar2 < _DAT_1013d984) {
		iVar1 = *piVar4 * 0x170;
		if (*(int *)(iVar1 + 0x1013d99c) != 0) {
			piVar3 = (int *)(iVar1 + 0x1013d9a8);
			*(int *)(iVar1 + 0x1013d9a8) = *(int *)(iVar1 + 0x1013d9a8) + 1;
			if (*(int *)(iVar1 + 0x1013da48) == 0x4c) {
				if ((*(char *)(iVar1 + 0x1013d9b8) == '\x01') && (*piVar3 == 0xb)) {
					*piVar3 = 1;
				}
				if ((*(char *)(iVar1 + 0x1013d9b8) == '\x02') && (*piVar3 == 0x15)) {
					*piVar3 = 0xb;
				}
			} else {
				if (*piVar3 == *(int *)(iVar1 + 0x1013d9a4) >> 1) {
					PlaySfxLoc(*(int *)(&DAT_101037bc + (uint)(byte)(&DAT_10103660)[*(int *)(iVar1 + 0x1013da48)] * 4),
					    *(int *)(iVar1 + 0x1013d994), *(int *)(iVar1 + 0x1013d998));
				}
				if (*(int *)(iVar1 + 0x1013d9a4) <= *piVar3) {
					*piVar3 = *(int *)(iVar1 + 0x1013d9a4);
					*(undefined4 *)(iVar1 + 0x1013d99c) = 0;
					*(undefined *)(iVar1 + 0x1013d9b8) = 1;
				}
			}
		}
		piVar4 = piVar4 + 1;
		iVar2 = iVar2 + 1;
	}
	ItemDoppel();
	return;
}

void FreeItemGFX(void)

{
	int iVar1;
	int **ppiVar2;

	ppiVar2 = (int **)&DAT_1013c974;
	iVar1 = 0;
	do {
		MemFreeDbg(ppiVar2);
		iVar1 = iVar1 + 1;
		ppiVar2 = ppiVar2 + 1;
	} while (iVar1 < 0x23);
	return;
}

void GetItemFrm(int i)

{
	*(undefined4 *)(i * 0x170 + 0x1013d9a0) = *(undefined4 *)(&DAT_1013c974 + (uint)(byte)(&DAT_10103660)[*(int *)(i * 0x170 + 0x1013da48)] * 4);
	return;
}

void GetItemStr(int i)

{
	int nGold;
	int iVar1;
	char *pcVar2;
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
	i = i * 0x170;
	if (*(int *)(i + 0x1013d990) == 0xb) {
		nGold = *(int *)(i + 0x1013da4c);
		pcVar2 = get_pieces_str(nGold);
		wsprintf((int)&DAT_101283d5, *(undefined4 *)(iVar1 + -0x5f94), nGold, pcVar2, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
		    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
	} else {
		if (*(int *)(i + 0x1013d9c0) == 0) {
			strcpy(&DAT_101283d5, (char *)(i + 0x1013d9c5));
		} else {
			strcpy(&DAT_101283d5, (char *)(i + 0x1013da05));
		}
		if (*(char *)(i + 0x1013d9c4) == '\x01') {
			DAT_101283d4 = 1;
		}
		if (*(char *)(i + 0x1013d9c4) == '\x02') {
			DAT_101283d4 = 3;
		}
	}
	return;
}

void CheckIdentify(int pnum, int cii)

{
	int iVar1;
	int iVar2;

	iVar1 = 0x100f8fd0;
	if (cii < 7) {
		iVar2 = pnum * 0x55ec + cii * 0x170 + 0x498;
	} else {
		iVar2 = pnum * 0x55ec + (cii + -7) * 0x170 + 0xea8;
	}
	*(undefined4 *)((int)&plr[0].WorldX + iVar2) = 1;
	CalcPlrInv(pnum, 1);
	if (pnum == **(int **)(iVar1 + -0x77ac)) {
		NewCursor(1);
	}
	return;
}

void RepairItem(ItemStruct *i, int lvl)

{
	int iVar1;
	int iVar2;

	if (i->_iDurability != i->_iMaxDur) {
		if (i->_iMaxDur < 1) {
			i->_itype = -1;
		} else {
			iVar2 = 0;
			do {
				iVar1 = random('%', lvl);
				iVar2 = lvl + iVar1 + iVar2;
				iVar1 = i->_iMaxDur / (lvl + 9);
				if (iVar1 < 1) {
					iVar1 = 1;
				}
				i->_iMaxDur = i->_iMaxDur - iVar1;
				if (i->_iMaxDur == 0) {
					i->_itype = -1;
					return;
				}
				iVar1 = i->_iDurability + iVar2;
			} while (iVar1 < i->_iMaxDur);
			i->_iDurability = iVar1;
			if (i->_iMaxDur < i->_iDurability) {
				i->_iDurability = i->_iMaxDur;
			}
		}
	}
	return;
}

void DoRepair(int pnum, int cii)

{
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0x100f8fd0;
	iVar1 = pnum * 0x55ec;
	PlaySfxLoc(0x55, *(int *)((int)plr + iVar1 + 0x38), *(int *)((int)plr + iVar1 + 0x3c));
	if (cii < 7) {
		iVar3 = cii * 0x170 + 0x498;
	} else {
		iVar3 = (cii + -7) * 0x170 + 0xea8;
	}
	RepairItem((ItemStruct *)((int)plr + iVar3 + iVar1), (int)*(char *)((int)plr + iVar1 + 0x1b4));
	CalcPlrInv(pnum, 1);
	if (pnum == **(int **)(iVar2 + -0x77ac)) {
		NewCursor(1);
	}
	return;
}

void RechargeItem(ItemStruct *i, int r)

{
	int iVar1;

	if (i->_iCharges == i->_iMaxCharges) {
		return;
	}
	do {
		i->_iMaxCharges = i->_iMaxCharges + -1;
		if (i->_iMaxCharges == 0) {
			return;
		}
		i->_iCharges = i->_iCharges + r;
		iVar1 = i->_iMaxCharges;
	} while (i->_iCharges < iVar1);
	if (i->_iCharges <= iVar1) {
		return;
	}
	i->_iCharges = iVar1;
	return;
}

void DoRecharge(int pnum, int cii)

{
	int iVar1;
	int iVar2;
	ItemStruct *i;

	iVar1 = 0x100f8fd0;
	if (cii < 7) {
		iVar2 = cii * 0x170 + 0x498;
	} else {
		iVar2 = (cii + -7) * 0x170 + 0xea8;
	}
	i = (ItemStruct *)((int)plr + iVar2 + pnum * 0x55ec);
	if ((i->_itype == 10) && (i->_iSpell != 0)) {
		iVar1 = 0x100f8fd0;
		iVar2 = random('&', (int)*(char *)((int)plr + pnum * 0x55ec + 0x1b4) / *(int *)(i->_iSpell * 0x38 + 0x1010efac));
		RechargeItem(i, iVar2 + 1);
		CalcPlrInv(pnum, 1);
	}
	if (pnum == **(int **)(iVar1 + -0x77ac)) {
		NewCursor(1);
	}
	return;
}

void PrintItemOil(char IDidx)

{
	if (((longlong)IDidx & 0xffffffffU) < 0x14) {
		// WARNING: Could not recover jumptable at 0x10050a48. Too many branches
		// WARNING: Treating indirect jump as call
		(*(code *)(&PTR_LAB_10103a50)[(int)IDidx])((&PTR_LAB_10103a50)[(int)IDidx], "decrease strength");
		return;
	}
	return;
}

void PrintItemPower(char plidx, ItemStruct *x)

{
	undefined8 in_r5;

	if (((longlong)plidx & 0xffffffffU) < 0x50) {
		// WARNING: Could not recover jumptable at 0x10050c58. Too many branches
		// WARNING: Treating indirect jump as call
		(*(code *)(&PTR_LAB_10103aa0)[(int)plidx])(
		    (&PTR_LAB_10103aa0)[(int)plidx], x, in_r5, "armor class: %i", "Resist Fire : %+i%%", &DAT_100e53d5);
		return;
	}
	strcpy(&DAT_101282d4, "Another ability (NW)");
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawUTextBack(void)

{
	int iVar1;
	longlong lVar2;
	undefined *puVar3;
	undefined *puVar4;
	longlong lVar5;

	iVar1 = 0x100f8fd0;
	CelDecodeOnly(0x58, 0x1e7, _DAT_101ab4b8, 1, 0x10f);
	lVar5 = 0x94;
	puVar4 = (undefined *)(**(int **)(iVar1 + -0x7804) + 0x5ac5b);
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

void PrintUString(int x, int y, BOOL cjustflag, char *str, int col)

{
	byte bVar1;
	ulonglong uVar2;
	int iVar3;
	size_t sVar4;
	int iVar5;
	byte *pbVar6;
	longlong lVar7;
	ulonglong uVar8;
	longlong lVar9;

	lVar9 = (longlong)x + (ulonglong) * (uint *)(*(int *)(&DAT_1010f7b8 + y * 4) * 4 + 0x1019f0b0) + 0x60;
	sVar4 = strlen(str);
	uVar8 = 0;
	if (cjustflag != 0) {
		lVar7 = 0;
		lVar7._4_4_ = 0;
		iVar5 = 0;
		if (0 < (int)sVar4) {
			if ((8 < (int)sVar4) && (uVar2 = (ulonglong)(sVar4 - 1 >> 3), 0 < (int)(sVar4 - 8))) {
				do {
					pbVar6 = (byte *)(str + iVar5);
					iVar5 = iVar5 + 8;
					lVar7 = (ulonglong)(byte)(
					            &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[7]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[6]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[5]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[4]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[3]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[2]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar6[1]]]]
					    + (ulonglong)(byte)(
					          &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar6]]]
					    + lVar7 + 8;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
			}
			lVar7._4_4_ = (int)lVar7;
			iVar3 = sVar4 - iVar5;
			pbVar6 = (byte *)(str + iVar5);
			if (iVar5 < (int)sVar4) {
				do {
					bVar1 = *pbVar6;
					pbVar6 = pbVar6 + 1;
					lVar7 = (ulonglong)(byte)(
					            &DAT_100f6230)[(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)bVar1]]]
					    + lVar7 + 1;
					lVar7._4_4_ = (int)lVar7;
					iVar3 = iVar3 + -1;
				} while (iVar3 != 0);
			}
		}
		if (lVar7._4_4_ < 0x101) {
			uVar8 = (ulonglong)(uint)(0x101 - lVar7._4_4_ >> 1);
		}
		lVar9 = lVar9 + uVar8;
	}
	iVar5 = 0;
	while (iVar5 < (int)sVar4) {
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)(byte)*str]];
		uVar8 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + uVar8 + 1;
		if ((bVar1 != 0) && ((int)uVar8 < 0x102)) {
			CPrintString((int)lVar9, (uint)bVar1, (char)col);
		}
		iVar5 = iVar5 + 1;
		str = (char *)((byte *)str + 1);
		lVar9 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + lVar9 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void DrawULine(int y)

{
	undefined4 uVar1;
	undefined4 *puVar2;
	longlong lVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	longlong lVar6;
	undefined2 *local_10;
	undefined2 *local_c;

	lVar6 = 3;
	local_10 = (undefined2 *)(_DAT_101271e4 + 0x22b5a);
	local_c = (undefined2 *)(*(int *)(*(int *)(&DAT_1010f7b8 + y * 4) * 4 + 0x1019f098) + _DAT_101271e4 + 0x5a);
	do {
		puVar4 = (undefined4 *)(local_10 + 1);
		*local_c = *local_10;
		puVar5 = (undefined4 *)(local_c + 1);
		lVar3 = 8;
		do {
			*puVar5 = *puVar4;
			puVar5[1] = puVar4[1];
			puVar5[2] = puVar4[2];
			puVar5[3] = puVar4[3];
			puVar5[4] = puVar4[4];
			puVar5[5] = puVar4[5];
			puVar5[6] = puVar4[6];
			puVar2 = puVar4 + 7;
			puVar4 = puVar4 + 8;
			puVar5[7] = *puVar2;
			puVar5 = puVar5 + 8;
			lVar3 = lVar3 + -1;
		} while (lVar3 != 0);
		lVar3 = 2;
		do {
			uVar1 = *puVar4;
			puVar4 = puVar4 + 1;
			*puVar5 = uVar1;
			puVar5 = puVar5 + 1;
			lVar3 = lVar3 + -1;
		} while (lVar3 != 0);
		lVar6 = lVar6 + -1;
		local_10 = local_10 + 0x180;
		local_c = local_c + 0x180;
	} while (lVar6 != 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Unknown calling convention yet parameter storage is locked

void DrawUniqueInfo(void)

{
	int iVar1;
	char *pcVar2;
	int iVar3;

	iVar1 = iRam1013cb58;
	if ((_DAT_101282b8 == 0) && (_DAT_1019cbec == 0)) {
		DrawUTextBack();
		iVar3 = iVar1 * 0x54;
		PrintUString(0, 2, 1, (&PTR_s_The_Butcher_s_Cleaver_10101884)[iVar1 * 0x15], 3);
		DrawULine(5);
		PrintItemPower(*(char *)(iVar3 + 0x10101890), (ItemStruct *)&DAT_1013ca24);
		pcVar2 = (char *)(iVar3 + 0x1010188a);
		iVar1 = -(int)*(char *)(iVar3 + 0x1010188a);
		PrintUString(0, iVar1 + 0xe, 1, &DAT_101282d4, 0);
		if ('\x01' < *pcVar2) {
			PrintItemPower(*(char *)(iVar3 + 0x1010189c), (ItemStruct *)&DAT_1013ca24);
			PrintUString(0, iVar1 + 0x10, 1, &DAT_101282d4, 0);
		}
		if ('\x02' < *pcVar2) {
			PrintItemPower(*(char *)(iVar3 + 0x101018a8), (ItemStruct *)&DAT_1013ca24);
			PrintUString(0, iVar1 + 0x12, 1, &DAT_101282d4, 0);
		}
		if ('\x03' < *pcVar2) {
			PrintItemPower(*(char *)(iVar3 + 0x101018b4), (ItemStruct *)&DAT_1013ca24);
			PrintUString(0, iVar1 + 0x14, 1, &DAT_101282d4, 0);
		}
		if ('\x04' < *pcVar2) {
			PrintItemPower(*(char *)(iVar3 + 0x101018c0), (ItemStruct *)&DAT_1013ca24);
			PrintUString(0, iVar1 + 0x16, 1, &DAT_101282d4, 0);
		}
		if ('\x05' < *pcVar2) {
			PrintItemPower(*(char *)(iVar3 + 0x101018cc), (ItemStruct *)&DAT_1013ca24);
			PrintUString(0, iVar1 + 0x18, 1, &DAT_101282d4, 0);
		}
	}
	return;
}

void PrintItemMisc(ItemStruct *x)

{
	int iVar1;
	int iVar2;
	undefined4 in_r6;
	undefined4 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	iVar2 = 0x100f8fd0;
	if (x->_iMiscId == 0x15) {
		iVar2 = 0x100f8fd0;
		strcpy(&DAT_101282d4, "Command-click to read");
		AddPanelString(&DAT_101282d4, 1);
	}
	if (x->_iMiscId == 0x16) {
		strcpy(&DAT_101282d4, *(char **)(iVar2 + -0x60f8));
		AddPanelString(&DAT_101282d4, 1);
		strcpy(&DAT_101282d4, *(char **)(iVar2 + -0x60fc));
		AddPanelString(&DAT_101282d4, 1);
	}
	iVar1 = x->_iMiscId;
	if ((0 < iVar1) && (iVar1 < 0x15)) {
		PrintItemOil((char)iVar1);
		strcpy(&DAT_101282d4, *(char **)(iVar2 + -0x6100));
		AddPanelString(&DAT_101282d4, 1);
	}
	if (x->_iMiscId == 0x18) {
		strcpy(&DAT_101282d4, *(char **)(iVar2 + -0x6104));
		AddPanelString(&DAT_101282d4, 1);
	}
	if (x->_iMiscId == 0x2a) {
		strcpy(&DAT_101282d4, *(char **)(iVar2 + -0x6108));
		AddPanelString(&DAT_101282d4, 1);
	}
	if (x->_iMiscId == 0x2b) {
		wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x610c), x->_ivalue, in_r6, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
		    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		AddPanelString(&DAT_101282d4, 1);
	}
	return;
}

void PrintItemDetails(ItemStruct *x)

{
	int iVar1;
	int iVar2;
	int *piVar3;
	int *piVar4;
	int in_r6;
	int in_r7;
	int in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	longlong lVar5;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	iVar2 = 0x100f8fd0;
	if (x->_iClass == '\x01') {
		in_r8 = x->_iMaxDur;
		if (in_r8 == 0xff) {
			in_r6 = x->_iMaxDam;
			iVar2 = 0x100f8fd0;
			wsprintf((int)&DAT_101282d4, "damage: %i-%i  Indestructible", x->_iMinDam, in_r6, in_r7, 0xff, in_r9,
			    in_r10, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
			    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		} else {
			in_r6 = x->_iMaxDam;
			in_r7 = x->_iDurability;
			iVar2 = 0x100f8fd0;
			wsprintf((int)&DAT_101282d4, "damage: %i-%i  Dur: %i/%i", x->_iMinDam, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
			    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		}
		AddPanelString(&DAT_101282d4, 1);
	}
	if (x->_iClass == '\x02') {
		in_r7 = x->_iMaxDur;
		if (in_r7 == 0xff) {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x6118), x->_iAC, in_r6, 0xff, in_r8, in_r9, in_r10,
			    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
			    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		} else {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x611c), x->_iAC, x->_iDurability, in_r7, in_r8, in_r9,
			    in_r10, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
			    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		}
		AddPanelString(&DAT_101282d4, 1);
	}
	if ((x->_iMiscId == 0x17) && (x->_iMaxCharges != 0)) {
		in_r7 = x->_iDurability;
		in_r8 = x->_iMaxDur;
		wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x6120), x->_iMinDam, x->_iMaxDam, in_r7, in_r8, in_r9,
		    in_r10, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
		    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x6124), x->_iCharges, x->_iMaxCharges, in_r7, in_r8,
		    in_r9, in_r10, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0,
		    in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		AddPanelString(&DAT_101282d4, 1);
	}
	if (x->_iPrePower != -1) {
		PrintItemPower(x->_iPrePower, x);
		AddPanelString(&DAT_101282d4, 1);
	}
	if (x->_iSufPower != -1) {
		PrintItemPower(x->_iSufPower, x);
		AddPanelString(&DAT_101282d4, 1);
	}
	if (x->_iMagical == '\x02') {
		AddPanelString(*(char **)(iVar2 + -0x6128), 1);
		iVar1 = *(int *)(iVar2 + -0x71a0);
		**(undefined4 **)(iVar2 + -0x7674) = 1;
		lVar5 = 0x2e;
		piVar3 = &x->_iPLMR;
		piVar4 = (int *)(iVar1 + -8);
		do {
			iVar1 = piVar3[3];
			piVar4[2] = piVar3[2];
			piVar4[3] = iVar1;
			lVar5 = lVar5 + -1;
			piVar3 = piVar3 + 2;
			piVar4 = piVar4 + 2;
		} while (lVar5 != 0);
	}
	PrintItemMisc(x);
	if ((longlong)x->_iMinStr + (ulonglong)x->_iMinMag + (longlong)x->_iMinDex != 0) {
		strcpy(&DAT_101282d4, *(char **)(iVar2 + -0x612c));
		if (x->_iMinStr != '\0') {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x6130), &DAT_101282d4, (int)x->_iMinStr, in_r7, in_r8,
			    in_r9, in_r10, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0,
			    in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		}
		if (x->_iMinMag != 0) {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x6134), &DAT_101282d4, (uint)x->_iMinMag, in_r7,
			    in_r8, in_r9, in_r10, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0,
			    in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		}
		if (x->_iMinDex != '\0') {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar2 + -0x6138), &DAT_101282d4, (int)x->_iMinDex, in_r7, in_r8,
			    in_r9, in_r10, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0,
			    in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		}
		AddPanelString(&DAT_101282d4, 1);
	}
	**(undefined4 **)(iVar2 + -0x76cc) = 1;
	return;
}

void PrintItemDur(ItemStruct *x)

{
	int iVar1;
	int in_r6;
	int in_r7;
	int in_r8;
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
	if (x->_iClass == '\x01') {
		in_r8 = x->_iMaxDur;
		if (in_r8 == 0xff) {
			in_r6 = x->_iMaxDam;
			iVar1 = 0x100f8fd0;
			wsprintf((int)&DAT_101282d4, "damage: %i-%i  Indestructible", x->_iMinDam, in_r6, in_r7, 0xff, in_r9,
			    in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
			    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		} else {
			in_r6 = x->_iMaxDam;
			in_r7 = x->_iDurability;
			iVar1 = 0x100f8fd0;
			wsprintf((int)&DAT_101282d4, "damage: %i-%i  Dur: %i/%i", x->_iMinDam, in_r6, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
			    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		}
		AddPanelString(&DAT_101282d4, 1);
		if (x->_iMiscId == 0x17) {
			in_r6 = x->_iMaxCharges;
			if (in_r6 != 0) {
				wsprintf((int)&DAT_101282d4, "Charges: %i/%i", x->_iCharges, in_r6, in_r7, in_r8, in_r9, in_r10,
				    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
				    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
				AddPanelString(&DAT_101282d4, 1);
			}
		}
		if (x->_iMagical != '\0') {
			AddPanelString("Not Identified", 1);
		}
	}
	if (x->_iClass == '\x02') {
		in_r7 = x->_iMaxDur;
		if (in_r7 == 0xff) {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar1 + -0x6118), x->_iAC, in_r6, 0xff, in_r8, in_r9, in_r10,
			    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
			    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		} else {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar1 + -0x611c), x->_iAC, x->_iDurability, in_r7, in_r8, in_r9,
			    in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
			    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		}
		AddPanelString(&DAT_101282d4, 1);
		if (x->_iMagical != '\0') {
			AddPanelString("Not Identified", 1);
		}
		if ((x->_iMiscId == 0x17) && (x->_iMaxCharges != 0)) {
			wsprintf((int)&DAT_101282d4, "Charges: %i/%i", x->_iCharges, x->_iMaxCharges, in_r7, in_r8, in_r9, in_r10,
			    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
			    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
			AddPanelString(&DAT_101282d4, 1);
		}
	}
	if ((x->_itype == 0xc) || (x->_itype == 0xd)) {
		AddPanelString("Not Identified", 1);
	}
	PrintItemMisc(x);
	if ((longlong)x->_iMinStr + (ulonglong)x->_iMinMag + (longlong)x->_iMinDex != 0) {
		strcpy(&DAT_101282d4, *(char **)(iVar1 + -0x612c));
		if (x->_iMinStr != '\0') {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar1 + -0x6130), &DAT_101282d4, (int)x->_iMinStr, in_r7, in_r8,
			    in_r9, in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		}
		if (x->_iMinMag != 0) {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar1 + -0x6134), &DAT_101282d4, (uint)x->_iMinMag, in_r7,
			    in_r8, in_r9, in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		}
		if (x->_iMinDex != '\0') {
			wsprintf((int)&DAT_101282d4, *(undefined4 *)(iVar1 + -0x6138), &DAT_101282d4, (int)x->_iMinDex, in_r7, in_r8,
			    in_r9, in_r10, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		}
		AddPanelString(&DAT_101282d4, 1);
	}
	**(undefined4 **)(iVar1 + -0x76cc) = 1;
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void UseItem(int p, int Mid, int spl)

{
	int *piVar1;
	char *pcVar2;
	int *piVar3;
	char cVar4;
	int iVar5;
	undefined4 uVar6;
	undefined4 uVar7;
	int iVar8;
	uint uVar9;
	uint uVar10;
	int v;

	switch (Mid) {
	case 2:
		p = p * 0x55ec;
		*(undefined4 *)((int)plr + p + 0x194) = *(undefined4 *)((int)plr + p + 0x198);
		*(undefined4 *)((int)plr + p + 0x18c) = *(undefined4 *)((int)plr + p + 400);
		_DAT_101282c0 = 1;
		break;
	case 3:
	case 0x1c:
		p = p * 0x55ec;
		piVar1 = (int *)((int)plr + p + 0x198);
		v = *piVar1 >> 8;
		iVar8 = random('\'', v);
		cVar4 = *(char *)((int)plr + p + 0x15c);
		iVar8 = (v >> 1) + iVar8;
		v = iVar8 * 0x40;
		if (cVar4 == '\0') {
			v = iVar8 * 0x80;
		}
		if (cVar4 == '\x01') {
			v = v + (v >> 1);
		}
		*(int *)((int)plr + p + 0x194) = *(int *)((int)plr + p + 0x194) + v;
		piVar3 = (int *)((int)plr + p + 0x194);
		iVar8 = *piVar1;
		if (iVar8 < *piVar3) {
			*piVar3 = iVar8;
		}
		*(int *)((int)plr + p + 0x18c) = *(int *)((int)plr + p + 0x18c) + v;
		piVar1 = (int *)((int)plr + p + 0x18c);
		v = *(int *)((int)plr + p + 400);
		if (v < *piVar1) {
			*piVar1 = v;
		}
		_DAT_101282c0 = 1;
		break;
	case 6:
		p = p * 0x55ec;
		piVar1 = (int *)((int)plr + p + 0x1ac);
		v = *piVar1 >> 8;
		iVar8 = random('(', v);
		cVar4 = *(char *)((int)plr + p + 0x15c);
		iVar8 = (v >> 1) + iVar8;
		v = iVar8 * 0x40;
		if (cVar4 == '\x02') {
			v = iVar8 * 0x80;
		}
		if (cVar4 == '\x01') {
			v = v + (v >> 1);
		}
		if ((*(uint *)((int)plr + p + 0x5568) & 0x8000000) == 0) {
			piVar3 = (int *)((int)plr + p + 0x1a8);
			*piVar3 = *piVar3 + v;
			iVar8 = *piVar1;
			if (iVar8 < *piVar3) {
				*piVar3 = iVar8;
			}
			*(int *)((int)plr + p + 0x1a0) = *(int *)((int)plr + p + 0x1a0) + v;
			piVar1 = (int *)((int)plr + p + 0x1a0);
			v = *(int *)((int)plr + p + 0x1a4);
			if (v < *piVar1) {
				*piVar1 = v;
			}
			_DAT_101282bc = 1;
		}
		break;
	case 7:
		p = p * 0x55ec;
		if ((*(uint *)((int)plr + p + 0x5568) & 0x8000000) == 0) {
			*(undefined4 *)((int)plr + p + 0x1a8) = *(undefined4 *)((int)plr + p + 0x1ac);
			*(undefined4 *)((int)plr + p + 0x1a0) = *(undefined4 *)((int)plr + p + 0x1a4);
			_DAT_101282bc = 1;
		}
		break;
	case 10:
		ModifyPlrStr(p, 1);
		break;
	case 0xb:
		ModifyPlrMag(p, 1);
		break;
	case 0xc:
		ModifyPlrDex(p, 1);
		break;
	case 0xd:
		ModifyPlrVit(p, 1);
		break;
	case 0x12:
		p = p * 0x55ec;
		piVar1 = (int *)((int)plr + p + 0x198);
		v = *piVar1 >> 8;
		iVar8 = random('\'', v);
		pcVar2 = (char *)((int)plr + p + 0x15c);
		cVar4 = *pcVar2;
		iVar8 = (v >> 1) + iVar8;
		v = iVar8 * 0x40;
		if (cVar4 == '\0') {
			v = iVar8 * 0x80;
		}
		if (cVar4 == '\x01') {
			v = v + (v >> 1);
		}
		*(int *)((int)plr + p + 0x194) = *(int *)((int)plr + p + 0x194) + v;
		piVar3 = (int *)((int)plr + p + 0x194);
		iVar8 = *piVar1;
		if (iVar8 < *piVar3) {
			*piVar3 = iVar8;
		}
		*(int *)((int)plr + p + 0x18c) = *(int *)((int)plr + p + 0x18c) + v;
		piVar1 = (int *)((int)plr + p + 0x18c);
		v = *(int *)((int)plr + p + 400);
		if (v < *piVar1) {
			*piVar1 = v;
		}
		_DAT_101282c0 = 1;
		piVar1 = (int *)((int)plr + p + 0x1ac);
		v = *piVar1 >> 8;
		iVar8 = random('(', v);
		cVar4 = *pcVar2;
		iVar8 = (v >> 1) + iVar8;
		v = iVar8 * 0x40;
		if (cVar4 == '\x02') {
			v = iVar8 * 0x80;
		}
		if (cVar4 == '\x01') {
			v = v + (v >> 1);
		}
		if ((*(uint *)((int)plr + p + 0x5568) & 0x8000000) == 0) {
			piVar3 = (int *)((int)plr + p + 0x1a8);
			*piVar3 = *piVar3 + v;
			iVar8 = *piVar1;
			if (iVar8 < *piVar3) {
				*piVar3 = iVar8;
			}
			*(int *)((int)plr + p + 0x1a0) = *(int *)((int)plr + p + 0x1a0) + v;
			piVar1 = (int *)((int)plr + p + 0x1a0);
			v = *(int *)((int)plr + p + 0x1a4);
			if (v < *piVar1) {
				*piVar1 = v;
			}
			_DAT_101282bc = 1;
		}
		break;
	case 0x13:
		p = p * 0x55ec;
		*(undefined4 *)((int)plr + p + 0x194) = *(undefined4 *)((int)plr + p + 0x198);
		*(undefined4 *)((int)plr + p + 0x18c) = *(undefined4 *)((int)plr + p + 400);
		_DAT_101282c0 = 1;
		if ((*(uint *)((int)plr + p + 0x5568) & 0x8000000) == 0) {
			*(undefined4 *)((int)plr + p + 0x1a8) = *(undefined4 *)((int)plr + p + 0x1ac);
			*(undefined4 *)((int)plr + p + 0x1a0) = *(undefined4 *)((int)plr + p + 0x1a4);
			_DAT_101282bc = 1;
		}
		break;
	case 0x15:
		if (*(int *)(spl * 0x38 + 0x1010efb4) == 0) {
			ClrPlrPath(p);
			v = p * 0x55ec;
			*(int *)((int)plr + v + 0xa4) = spl;
			*(undefined *)((int)plr + v + 0xa8) = 4;
			*(undefined *)((int)plr + v + 0xa9) = 3;
			*(undefined4 *)((int)plr + v + 0x20) = 0xc;
			uVar7 = _DAT_10128600;
			*(undefined4 *)((int)plr + v + 0x24) = _DAT_10128600;
			uVar6 = _DAT_101285fc;
			*(undefined4 *)((int)plr + v + 0x28) = _DAT_101285fc;
			if ((p == myplr) && (spl == 0x12)) {
				NetSendCmdLoc(1, '[', (BYTE)uVar7, (BYTE)uVar6);
			}
		} else {
			*(int *)((int)plr + p * 0x55ec + 0xac) = spl;
			*(undefined *)((int)plr + p * 0x55ec + 0xb0) = 4;
			if (p == myplr) {
				NewCursor(9);
			}
		}
		break;
	case 0x16:
		if (*(int *)(spl * 0x38 + 0x1010efb4) == 0) {
			ClrPlrPath(p);
			p = p * 0x55ec;
			*(int *)((int)plr + p + 0xa4) = spl;
			*(undefined *)((int)plr + p + 0xa8) = 4;
			*(undefined *)((int)plr + p + 0xa9) = 3;
			*(undefined4 *)((int)plr + p + 0x20) = 0xc;
			*(undefined4 *)((int)plr + p + 0x24) = _DAT_10128600;
			*(undefined4 *)((int)plr + p + 0x28) = _DAT_101285fc;
		} else {
			*(int *)((int)plr + p * 0x55ec + 0xac) = spl;
			*(undefined *)((int)plr + p * 0x55ec + 0xb0) = 4;
			if (p == myplr) {
				NewCursor(9);
			}
		}
		break;
	case 0x18:
		uVar10 = 1;
		uVar9 = 64bitAndOperator(0, 1, spl + -1);
		v = p * 0x55ec;
		iVar8 = (int)plr + spl + v;
		*(uint *)((int)plr + v + 0x108) = *(uint *)((int)plr + v + 0x108) | uVar10;
		*(uint *)((int)plr + v + 0x104) = *(uint *)((int)plr + v + 0x104) | uVar9;
		cVar4 = *(char *)(iVar8 + 0xc1);
		if (cVar4 < '\x0f') {
			*(char *)(iVar8 + 0xc1) = cVar4 + '\x01';
		}
		iVar5 = (uint) * (byte *)(spl * 0x38 + 0x1010efa1) * 0x40;
		*(int *)((int)plr + v + 0x1a8) = *(int *)((int)plr + v + 0x1a8) + iVar5;
		piVar1 = (int *)((int)plr + v + 0x1a8);
		iVar8 = *(int *)((int)plr + v + 0x1ac);
		if (iVar8 < *piVar1) {
			*piVar1 = iVar8;
		}
		*(int *)((int)plr + v + 0x1a0) = *(int *)((int)plr + v + 0x1a0) + iVar5;
		piVar1 = (int *)((int)plr + v + 0x1a0);
		v = *(int *)((int)plr + v + 0x1a4);
		if (v < *piVar1) {
			*piVar1 = v;
		}
		if (p == myplr) {
			CalcPlrBookVals(p);
		}
		_DAT_101282bc = 1;
		break;
	case 0x2a:
		doom_init();
		break;
	case 0x2c:
		ModifyPlrStr(p, 3);
		ModifyPlrMag(p, 3);
		ModifyPlrDex(p, 3);
		ModifyPlrVit(p, 3);
	}
	return;
}

BOOL StoreStatOk(ItemStruct *h)

{
	int iVar1;
	uint uVar2;

	iVar1 = myplr * 0x55ec;
	uVar2 = (uint)((int)h->_iMinStr <= *(int *)((int)plr + iVar1 + 0x160));
	if (*(int *)((int)plr + iVar1 + 0x168) < (int)(uint)h->_iMinMag) {
		uVar2 = 0;
	}
	if (*(int *)((int)plr + iVar1 + 0x170) < (int)h->_iMinDex) {
		uVar2 = 0;
	}
	return (BOOL)uVar2;
}

BOOL SmithItemOk(int i)

{
	char cVar1;
	uint uVar2;

	cVar1 = AllItemsList[i].itype;
	uVar2 = (uint)(cVar1 != '\0');
	if (cVar1 == '\v') {
		uVar2 = 0;
	}
	if (cVar1 == '\x0e') {
		uVar2 = 0;
	}
	if (cVar1 == '\n') {
		uVar2 = 0;
	}
	if (cVar1 == '\f') {
		uVar2 = 0;
	}
	if (cVar1 != '\r') {
		return (BOOL)uVar2;
	}
	return 0;
}

int RndSmithItem(int lvl)

{
	int iVar1;
	BOOL BVar2;
	int i;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	int v;
	undefined8 unaff_r30;
	ItemDataStruct *pIVar3;
	undefined8 unaff_r31;
	int local_818[513];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	v = 0;
	pIVar3 = AllItemsList;
	i = 1;
	while (pIVar3 = pIVar3 + 1, pIVar3->iLoc != -1) {
		iVar1 = v;
		if (((pIVar3->iRnd != 0) && (BVar2 = SmithItemOk(i), iVar1 = v, BVar2 != 0)) && (iVar1 = v, (int)pIVar3->iMinMLvl <= lvl)) {
			local_818[v] = i;
			iVar1 = v + 1;
			if (pIVar3->iRnd == 2) {
				local_818[v + 1] = i;
				iVar1 = v + 2;
			}
		}
		v = iVar1;
		i = i + 1;
	}
	i = random('2', v);
	return local_818[i] + 1;
}

void BubbleSwapItem(ItemStruct *a, ItemStruct *b)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	longlong lVar4;
	int aiStack376[94];

	lVar4 = 0x2e;
	piVar2 = aiStack376;
	piVar3 = &a->_iPLMR;
	do {
		iVar1 = piVar3[3];
		piVar2[2] = piVar3[2];
		piVar2[3] = iVar1;
		lVar4 = lVar4 + -1;
		piVar2 = piVar2 + 2;
		piVar3 = piVar3 + 2;
	} while (lVar4 != 0);
	lVar4 = 0x2e;
	piVar2 = &a->_iPLMR;
	piVar3 = &b->_iPLMR;
	do {
		iVar1 = piVar3[3];
		piVar2[2] = piVar3[2];
		piVar2[3] = iVar1;
		lVar4 = lVar4 + -1;
		piVar2 = piVar2 + 2;
		piVar3 = piVar3 + 2;
	} while (lVar4 != 0);
	lVar4 = 0x2e;
	piVar2 = aiStack376;
	piVar3 = &b->_iPLMR;
	do {
		iVar1 = piVar2[3];
		piVar3[2] = piVar2[2];
		piVar3[3] = iVar1;
		lVar4 = lVar4 + -1;
		piVar2 = piVar2 + 2;
		piVar3 = piVar3 + 2;
	} while (lVar4 != 0);
	return;
}

void SortSmith(void)

{
	bool bVar1;
	ItemStruct *a;
	int iVar2;
	int iVar3;

	iVar2 = 0;
	a = (ItemStruct *)&DAT_101a8920;
	while (a[1]._itype != -1) {
		a = a + 1;
		iVar2 = iVar2 + 1;
	}
	bVar1 = false;
	while ((0 < iVar2 && (!bVar1))) {
		bVar1 = true;
		iVar3 = 0;
		a = (ItemStruct *)&DAT_101a8920;
		while (iVar3 < iVar2) {
			if (a[1].IDidx < a->IDidx) {
				BubbleSwapItem(a, (ItemStruct *)(&DAT_101a8920 + (iVar3 + 1) * 0x170));
				bVar1 = false;
			}
			a = a + 1;
			iVar3 = iVar3 + 1;
		}
		iVar2 = iVar2 + -1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SpawnSmith(int lvl)

{
	ulonglong uVar1;
	int iVar2;
	int iVar3;
	BOOL BVar4;
	uint uVar5;
	int *piVar6;
	int *piVar7;
	undefined *puVar8;
	int iVar9;
	ItemStruct *h;
	longlong lVar10;

	h = (ItemStruct *)&DAT_101a8920;
	iVar2 = random('2', 10);
	iVar2 = iVar2 + 10;
	iVar9 = 0;
	while (iVar9 < iVar2) {
		do {
			_DAT_1013d988 = GetRndSeed();
			SetRndSeed(_DAT_1013d988);
			iVar3 = RndSmithItem(lvl);
			GetItemAttrs(0, iVar3 + -1, lvl);
		} while (140000 < iRam1013da50);
		lVar10 = 0x2e;
		piVar6 = (int *)0x1013d980;
		piVar7 = &h->_iPLMR;
		do {
			iVar3 = piVar6[3];
			piVar7[2] = piVar6[2];
			piVar7[3] = iVar3;
			lVar10 = lVar10 + -1;
			piVar6 = piVar6 + 2;
			piVar7 = piVar7 + 2;
		} while (lVar10 != 0);
		h->_iCreateInfo = (ushort)lvl | 0x400;
		h->_iIdentified = 1;
		BVar4 = StoreStatOk(h);
		h->_iStatFlag = BVar4;
		h = h + 1;
		iVar9 = iVar9 + 1;
	}
	puVar8 = &DAT_101a8920 + iVar2 * 0x170;
	uVar5 = 0x14 - iVar2;
	if (iVar2 < 0x14) {
		uVar1 = (ulonglong)(uVar5 >> 3);
		if (uVar5 >> 3 != 0) {
			do {
				*(undefined4 *)(puVar8 + 8) = 0xffffffff;
				*(undefined4 *)(puVar8 + 0x178) = 0xffffffff;
				*(undefined4 *)(puVar8 + 0x2e8) = 0xffffffff;
				*(undefined4 *)(puVar8 + 0x458) = 0xffffffff;
				*(undefined4 *)(puVar8 + 0x5c8) = 0xffffffff;
				*(undefined4 *)(puVar8 + 0x738) = 0xffffffff;
				*(undefined4 *)(puVar8 + 0x8a8) = 0xffffffff;
				*(undefined4 *)(puVar8 + 0xa18) = 0xffffffff;
				puVar8 = puVar8 + 0xb80;
				uVar1 = uVar1 - 1;
			} while (uVar1 != 0);
			uVar5 = uVar5 & 7;
			if (uVar5 == 0)
				goto LAB_10052828;
		}
		do {
			*(undefined4 *)(puVar8 + 8) = 0xffffffff;
			puVar8 = puVar8 + 0x170;
			uVar5 = uVar5 - 1;
		} while (uVar5 != 0);
	}
LAB_10052828:
	SortSmith();
	return;
}

BOOL PremiumItemOk(int i)

{
	char cVar1;
	uint uVar2;

	cVar1 = AllItemsList[i].itype;
	uVar2 = (uint)(cVar1 != '\0');
	if (cVar1 == '\v') {
		uVar2 = 0;
	}
	if (cVar1 == '\x0e') {
		uVar2 = 0;
	}
	if (cVar1 == '\n') {
		uVar2 = 0;
	}
	if (gbMaxPlayers == '\x01') {
		return uVar2;
	}
	if (cVar1 == '\f') {
		uVar2 = 0;
	}
	if (cVar1 != '\r') {
		return (BOOL)uVar2;
	}
	return 0;
}

int RndPremiumItem(int minlvl, int maxlvl)

{
	BOOL BVar1;
	int v;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	int i;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	ItemDataStruct *pIVar2;
	undefined8 unaff_r31;
	int local_818[512];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	pIVar2 = AllItemsList;
	v = 0;
	i = 1;
	while (pIVar2 = pIVar2 + 1, pIVar2->iLoc != -1) {
		if ((((pIVar2->iRnd != 0) && (BVar1 = PremiumItemOk(i), BVar1 != 0)) && (minlvl <= (int)pIVar2->iMinMLvl)) && ((int)pIVar2->iMinMLvl <= maxlvl)) {
			local_818[v] = i;
			v = v + 1;
		}
		i = i + 1;
	}
	v = random('2', v);
	return local_818[v] + 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SpawnOnePremium(int i, int plvl)

{
	undefined4 uVar1;
	int iVar2;
	BOOL BVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	longlong lVar6;
	undefined4 auStack416[96];
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
	lVar6 = 0x2e;
	puVar5 = auStack416;
	puVar4 = (undefined4 *)0x1013d980;
	do {
		uVar1 = puVar4[3];
		puVar5[2] = puVar4[2];
		puVar5[3] = uVar1;
		lVar6 = lVar6 + -1;
		puVar5 = puVar5 + 2;
		puVar4 = puVar4 + 2;
	} while (lVar6 != 0);
	if (0x1e < plvl) {
		plvl = 0x1e;
	}
	if (plvl < 1) {
		plvl = 1;
	}
	do {
		_DAT_1013d988 = GetRndSeed();
		SetRndSeed(_DAT_1013d988);
		iVar2 = RndPremiumItem(plvl >> 2, plvl);
		GetItemAttrs(0, iVar2 + -1, plvl);
		GetItemBonus(0, iVar2 + -1, plvl >> 1, plvl, 1);
	} while (140000 < iRam1013da50);
	i = i * 0x170;
	lVar6 = 0x2e;
	puVar5 = (undefined4 *)0x1013d980;
	puVar4 = (undefined4 *)(&DAT_101a8078 + i);
	do {
		uVar1 = puVar5[3];
		puVar4[2] = puVar5[2];
		puVar4[3] = uVar1;
		lVar6 = lVar6 + -1;
		puVar5 = puVar5 + 2;
		puVar4 = puVar4 + 2;
	} while (lVar6 != 0);
	*(ushort *)(i + 0x101a8084) = (ushort)plvl | 0x800;
	*(undefined4 *)(i + 0x101a80b8) = 1;
	BVar3 = StoreStatOk((ItemStruct *)(&DAT_101a8080 + i));
	*(BOOL *)(i + 0x101a81e4) = BVar3;
	lVar6 = 0x2e;
	puVar5 = auStack416;
	puVar4 = (undefined4 *)0x1013d980;
	do {
		uVar1 = puVar5[3];
		puVar4[2] = puVar5[2];
		puVar4[3] = uVar1;
		lVar6 = lVar6 + -1;
		puVar5 = puVar5 + 2;
		puVar4 = puVar4 + 2;
	} while (lVar6 != 0);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SpawnPremium(int lvl)

{
	undefined4 uVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	int i;
	int *piVar4;
	undefined *puVar5;
	longlong lVar6;

	piVar4 = (int *)&DAT_10103c94;
	puVar5 = &DAT_101a8080;
	if (_DAT_101a807c < 6) {
		i = 0;
		do {
			if (*(int *)(puVar5 + 8) == -1) {
				SpawnOnePremium(i, _DAT_101a8078 + *piVar4);
			}
			i = i + 1;
			piVar4 = piVar4 + 1;
			puVar5 = puVar5 + 0x170;
		} while (i < 6);
		_DAT_101a807c = 6;
	}
	while (_DAT_101a8078 < lvl) {
		lVar6 = 0x2e;
		_DAT_101a8078 = _DAT_101a8078 + 1;
		puVar2 = (undefined4 *)0x101a8358;
		puVar3 = (undefined4 *)&DAT_101a8078;
		do {
			uVar1 = puVar2[3];
			puVar3[2] = puVar2[2];
			puVar3[3] = uVar1;
			lVar6 = lVar6 + -1;
			puVar2 = puVar2 + 2;
			puVar3 = puVar3 + 2;
		} while (lVar6 != 0);
		lVar6 = 0x2e;
		puVar2 = (undefined4 *)0x101a84c8;
		puVar3 = (undefined4 *)0x101a81e8;
		do {
			uVar1 = puVar2[3];
			puVar3[2] = puVar2[2];
			puVar3[3] = uVar1;
			lVar6 = lVar6 + -1;
			puVar2 = puVar2 + 2;
			puVar3 = puVar3 + 2;
		} while (lVar6 != 0);
		lVar6 = 0x2e;
		puVar2 = (undefined4 *)0x101a8638;
		puVar3 = (undefined4 *)0x101a8358;
		do {
			uVar1 = puVar2[3];
			puVar3[2] = puVar2[2];
			puVar3[3] = uVar1;
			lVar6 = lVar6 + -1;
			puVar2 = puVar2 + 2;
			puVar3 = puVar3 + 2;
		} while (lVar6 != 0);
		SpawnOnePremium(3, _DAT_101a8078 + iRam10103ca0);
		lVar6 = 0x2e;
		puVar2 = (undefined4 *)0x101a8638;
		puVar3 = (undefined4 *)0x101a87a8;
		do {
			uVar1 = puVar3[3];
			puVar2[2] = puVar3[2];
			puVar2[3] = uVar1;
			lVar6 = lVar6 + -1;
			puVar2 = puVar2 + 2;
			puVar3 = puVar3 + 2;
		} while (lVar6 != 0);
		SpawnOnePremium(5, _DAT_101a8078 + iRam10103ca8);
	}
	return;
}

BOOL WitchItemOk(int i)

{
	int iVar1;
	int iVar2;
	uint uVar3;

	uVar3 = (uint)(AllItemsList[i].itype == '\0');
	if (AllItemsList[i].itype == '\n') {
		uVar3 = 1;
	}
	iVar1 = AllItemsList[i].iMiscId;
	if (iVar1 == 6) {
		uVar3 = 0;
	}
	if (iVar1 == 7) {
		uVar3 = 0;
	}
	iVar2 = AllItemsList[i].iSpell;
	if (iVar2 == 7) {
		uVar3 = 0;
	}
	if (iVar1 == 2) {
		uVar3 = 0;
	}
	if (iVar1 == 3) {
		uVar3 = 0;
	}
	if ((iVar2 == 0x20) && (gbMaxPlayers == '\x01')) {
		uVar3 = 0;
	}
	if (iVar2 != 0x22) {
		return uVar3;
	}
	if (gbMaxPlayers != '\x01') {
		return uVar3;
	}
	return 0;
}

int RndWitchItem(int lvl)

{
	BOOL BVar1;
	int v;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	int i;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	ItemDataStruct *pIVar2;
	undefined8 unaff_r31;
	int local_818[513];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	v = 0;
	pIVar2 = AllItemsList;
	i = 1;
	while (pIVar2 = pIVar2 + 1, pIVar2->iLoc != -1) {
		if (((pIVar2->iRnd != 0) && (BVar1 = WitchItemOk(i), BVar1 != 0)) && ((int)pIVar2->iMinMLvl <= lvl)) {
			local_818[v] = i;
			v = v + 1;
		}
		i = i + 1;
	}
	v = random('3', v);
	return local_818[v] + 1;
}

void SortWitch(void)

{
	bool bVar1;
	ItemStruct *a;
	int iVar2;
	int iVar3;

	iVar2 = 3;
	a = (ItemStruct *)0x101a6808;
	while (a[1]._itype != -1) {
		a = a + 1;
		iVar2 = iVar2 + 1;
	}
	bVar1 = false;
	while ((3 < iVar2 && (!bVar1))) {
		bVar1 = true;
		iVar3 = 3;
		a = (ItemStruct *)0x101a6808;
		while (iVar3 < iVar2) {
			if (a[1].IDidx < a->IDidx) {
				BubbleSwapItem(a, (ItemStruct *)(&DAT_101a63b8 + (iVar3 + 1) * 0x170));
				bVar1 = false;
			}
			a = a + 1;
			iVar3 = iVar3 + 1;
		}
		iVar2 = iVar2 + -1;
	}
	return;
}

void WitchBookLevel(int ii)

{
	uint uVar1;
	longlong lVar2;

	ii = ii * 0x170;
	if (*(int *)(ii + 0x101a6494) != 0x18) {
		return;
	}
	*(undefined *)(ii + 0x101a6519) = (char)*(undefined4 *)(*(int *)(ii + 0x101a6498) * 0x38 + 0x1010efbc);
	lVar2 = (longlong) * (char *)((int)plr + myplr * 0x55ec + *(int *)(ii + 0x101a6498) + 0xc1);
	while ((int)lVar2 != 0) {
		lVar2 = lVar2 + -1;
		*(char *)(ii + 0x101a6519) = *(byte *)(ii + 0x101a6519) + (char)((int)((uint) * (byte *)(ii + 0x101a6519) * 0x14) / 100);
		uVar1 = (int)((uint) * (byte *)(ii + 0x101a6519) * 0x14) / 100;
		if (0xff < (int)((uint) * (byte *)(ii + 0x101a6519) + uVar1 + (uVar1 >> 0x1f))) {
			*(undefined *)(ii + 0x101a6519) = 0xff;
			lVar2 = 0;
		}
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SpawnWitch(int lvl)

{
	undefined4 uVar1;
	ulonglong uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	BOOL BVar6;
	uint uVar7;
	undefined4 *puVar8;
	int *piVar9;
	undefined4 *puVar10;
	int *piVar11;
	undefined *puVar12;
	int maxlvl;
	ItemStruct *h;
	ushort uVar13;
	int ii;
	longlong lVar14;

	GetItemAttrs(0, 0x19, 1);
	lVar14 = 0x2e;
	puVar8 = (undefined4 *)0x1013d980;
	puVar10 = (undefined4 *)0x101a63b0;
	do {
		uVar1 = puVar8[3];
		puVar10[2] = puVar8[2];
		puVar10[3] = uVar1;
		lVar14 = lVar14 + -1;
		puVar8 = puVar8 + 2;
		puVar10 = puVar10 + 2;
	} while (lVar14 != 0);
	uVar13 = (ushort)lvl;
	uRam101a651c = 1;
	uRam101a63bc = uVar13;
	GetItemAttrs(0, 0x1e, 1);
	lVar14 = 0x2e;
	puVar8 = (undefined4 *)0x1013d980;
	puVar10 = (undefined4 *)0x101a6520;
	do {
		uVar1 = puVar8[3];
		puVar10[2] = puVar8[2];
		puVar10[3] = uVar1;
		lVar14 = lVar14 + -1;
		puVar8 = puVar8 + 2;
		puVar10 = puVar10 + 2;
	} while (lVar14 != 0);
	uRam101a668c = 1;
	uRam101a652c = uVar13;
	GetItemAttrs(0, 0x1b, 1);
	lVar14 = 0x2e;
	puVar8 = (undefined4 *)0x1013d980;
	puVar10 = (undefined4 *)0x101a6690;
	do {
		uVar1 = puVar8[3];
		puVar10[2] = puVar8[2];
		puVar10[3] = uVar1;
		lVar14 = lVar14 + -1;
		puVar8 = puVar8 + 2;
		puVar10 = puVar10 + 2;
	} while (lVar14 != 0);
	uRam101a67fc = 1;
	uRam101a669c = uVar13;
	iVar3 = random('3', 8);
	iVar3 = iVar3 + 10;
	h = (ItemStruct *)0x101a6808;
	ii = 3;
	while (ii < iVar3) {
		do {
			_DAT_1013d988 = GetRndSeed();
			SetRndSeed(_DAT_1013d988);
			iVar4 = RndWitchItem(lvl);
			GetItemAttrs(0, iVar4 + -1, lvl);
			iVar5 = random('3', 100);
			maxlvl = -1;
			if (iVar5 < 6) {
				maxlvl = lvl << 1;
			}
			if ((maxlvl == -1) && (iRam1013da64 == 0x17)) {
				maxlvl = lvl << 1;
			}
			if (maxlvl != -1) {
				GetItemBonus(0, iVar4 + -1, maxlvl >> 1, maxlvl, 1);
			}
		} while (140000 < iRam1013da50);
		lVar14 = 0x2e;
		piVar9 = (int *)0x1013d980;
		piVar11 = &h->_iPLMR;
		do {
			maxlvl = piVar9[3];
			piVar11[2] = piVar9[2];
			piVar11[3] = maxlvl;
			lVar14 = lVar14 + -1;
			piVar9 = piVar9 + 2;
			piVar11 = piVar11 + 2;
		} while (lVar14 != 0);
		h->_iCreateInfo = uVar13 | 0x2000;
		h->_iIdentified = 1;
		WitchBookLevel(ii);
		BVar6 = StoreStatOk(h);
		h->_iStatFlag = BVar6;
		h = h + 1;
		ii = ii + 1;
	}
	puVar12 = &DAT_101a63b8 + iVar3 * 0x170;
	uVar7 = 0x14 - iVar3;
	if (iVar3 < 0x14) {
		uVar2 = (ulonglong)(uVar7 >> 3);
		if (uVar7 >> 3 != 0) {
			do {
				*(undefined4 *)(puVar12 + 8) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0x178) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0x2e8) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0x458) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0x5c8) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0x738) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0x8a8) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0xa18) = 0xffffffff;
				puVar12 = puVar12 + 0xb80;
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
			uVar7 = uVar7 & 7;
			if (uVar7 == 0)
				goto LAB_10053148;
		}
		do {
			*(undefined4 *)(puVar12 + 8) = 0xffffffff;
			puVar12 = puVar12 + 0x170;
			uVar7 = uVar7 - 1;
		} while (uVar7 != 0);
	}
LAB_10053148:
	SortWitch();
	return;
}

int RndBoyItem(int lvl)

{
	BOOL BVar1;
	int v;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	int i;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	ItemDataStruct *pIVar2;
	undefined8 unaff_r31;
	int local_818[513];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	v = 0;
	pIVar2 = AllItemsList;
	i = 1;
	while (pIVar2 = pIVar2 + 1, pIVar2->iLoc != -1) {
		if (((pIVar2->iRnd != 0) && (BVar1 = PremiumItemOk(i), BVar1 != 0)) && ((int)pIVar2->iMinMLvl <= lvl)) {
			local_818[v] = i;
			v = v + 1;
		}
		i = i + 1;
	}
	v = random('1', v);
	return local_818[v] + 1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SpawnBoy(int lvl)

{
	undefined4 uVar1;
	int iVar2;
	undefined4 *puVar3;
	undefined4 *puVar4;
	longlong lVar5;

	if ((_DAT_101a6244<lvl>> 1) || (iRam101a6250 == -1)) {
		do {
			_DAT_1013d988 = GetRndSeed();
			SetRndSeed(_DAT_1013d988);
			iVar2 = RndBoyItem(lvl);
			GetItemAttrs(0, iVar2 + -1, lvl);
			GetItemBonus(0, iVar2 + -1, lvl, lvl << 1, 1);
		} while (90000 < iRam1013da50);
		lVar5 = 0x2e;
		puVar3 = (undefined4 *)0x1013d980;
		puVar4 = (undefined4 *)0x101a6240;
		do {
			uVar1 = puVar3[3];
			puVar4[2] = puVar3[2];
			puVar4[3] = uVar1;
			lVar5 = lVar5 + -1;
			puVar3 = puVar3 + 2;
			puVar4 = puVar4 + 2;
		} while (lVar5 != 0);
		uRam101a624c = (ushort)lvl | 0x1000;
		uRam101a6280 = 1;
		BRam101a63ac = StoreStatOk((ItemStruct *)&DAT_101a6248);
		_DAT_101a6244 = lvl >> 1;
	}
	return;
}

BOOL HealerItemOk(int i)

{
	int iVar1;
	BOOL BVar2;

	BVar2 = 0;
	if (AllItemsList[i].itype != '\0') {
		return 0;
	}
	iVar1 = AllItemsList[i].iMiscId;
	if ((iVar1 == 0x15) && (AllItemsList[i].iSpell == 2)) {
		BVar2 = 1;
	}
	if (((iVar1 == 0x16) && (AllItemsList[i].iSpell == 0x20)) && (gbMaxPlayers != '\x01')) {
		BVar2 = 0;
	}
	if (((iVar1 == 0x16) && (AllItemsList[i].iSpell == 0x22)) && (gbMaxPlayers != '\x01')) {
		BVar2 = 1;
	}
	if (gbMaxPlayers == '\x01') {
		if (iVar1 == 10) {
			BVar2 = 1;
		}
		if (iVar1 == 0xb) {
			BVar2 = 1;
		}
		if (iVar1 == 0xc) {
			BVar2 = 1;
		}
		if (iVar1 == 0xd) {
			BVar2 = 1;
		}
	}
	if (iVar1 == 2) {
		BVar2 = 1;
	}
	if (iVar1 == 0x12) {
		BVar2 = 1;
	}
	if (iVar1 == 0x13) {
		BVar2 = 1;
	}
	if (iVar1 == 3) {
		BVar2 = 0;
	}
	if (iVar1 == 2) {
		BVar2 = 0;
	}
	if (iVar1 == 6) {
		BVar2 = 0;
	}
	if (iVar1 != 7) {
		return BVar2;
	}
	return 0;
}

int RndHealerItem(int lvl)

{
	BOOL BVar1;
	int v;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	int i;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	ItemDataStruct *pIVar2;
	undefined8 unaff_r31;
	int local_818[513];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	v = 0;
	pIVar2 = AllItemsList;
	i = 1;
	while (pIVar2 = pIVar2 + 1, pIVar2->iLoc != -1) {
		if (((pIVar2->iRnd != 0) && (BVar1 = HealerItemOk(i), BVar1 != 0)) && ((int)pIVar2->iMinMLvl <= lvl)) {
			local_818[v] = i;
			v = v + 1;
		}
		i = i + 1;
	}
	v = random('2', v);
	return local_818[v] + 1;
}

void SortHealer(void)

{
	bool bVar1;
	ItemStruct *a;
	int iVar2;
	int iVar3;

	iVar2 = 2;
	a = (ItemStruct *)0x101a4864;
	while (a[1]._itype != -1) {
		a = a + 1;
		iVar2 = iVar2 + 1;
	}
	bVar1 = false;
	while ((2 < iVar2 && (!bVar1))) {
		bVar1 = true;
		iVar3 = 2;
		a = (ItemStruct *)0x101a4864;
		while (iVar3 < iVar2) {
			if (a[1].IDidx < a->IDidx) {
				BubbleSwapItem(a, (ItemStruct *)(&DAT_101a4584 + (iVar3 + 1) * 0x170));
				bVar1 = false;
			}
			a = a + 1;
			iVar3 = iVar3 + 1;
		}
		iVar2 = iVar2 + -1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SpawnHealer(int lvl)

{
	undefined4 uVar1;
	ulonglong uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	BOOL BVar6;
	uint uVar7;
	undefined4 *puVar8;
	int *piVar9;
	undefined4 *puVar10;
	int *piVar11;
	undefined *puVar12;
	ItemStruct *h;
	ushort uVar13;
	longlong lVar14;

	iVar3 = 0x100f8fd0;
	GetItemAttrs(0, 0x18, 1);
	lVar14 = 0x2e;
	puVar8 = (undefined4 *)0x1013d980;
	puVar10 = (undefined4 *)0x101a457c;
	do {
		uVar1 = puVar8[3];
		puVar10[2] = puVar8[2];
		puVar10[3] = uVar1;
		lVar14 = lVar14 + -1;
		puVar8 = puVar8 + 2;
		puVar10 = puVar10 + 2;
	} while (lVar14 != 0);
	uVar13 = (ushort)lvl;
	uRam101a46e8 = 1;
	uRam101a4588 = uVar13;
	GetItemAttrs(0, 0x1d, 1);
	lVar14 = 0x2e;
	puVar8 = (undefined4 *)0x1013d980;
	puVar10 = (undefined4 *)0x101a46ec;
	do {
		uVar1 = puVar8[3];
		puVar10[2] = puVar8[2];
		puVar10[3] = uVar1;
		lVar14 = lVar14 + -1;
		puVar8 = puVar8 + 2;
		puVar10 = puVar10 + 2;
	} while (lVar14 != 0);
	uRam101a4858 = 1;
	if (**(char **)(iVar3 + -0x77f0) == '\x01') {
		iVar3 = 2;
		uRam101a46f8 = uVar13;
	} else {
		uRam101a46f8 = uVar13;
		GetItemAttrs(0, 0x22, 1);
		lVar14 = 0x2e;
		puVar8 = (undefined4 *)0x1013d980;
		puVar10 = (undefined4 *)0x101a485c;
		do {
			uVar1 = puVar8[3];
			puVar10[2] = puVar8[2];
			puVar10[3] = uVar1;
			lVar14 = lVar14 + -1;
			puVar8 = puVar8 + 2;
			puVar10 = puVar10 + 2;
		} while (lVar14 != 0);
		iVar3 = 3;
		uRam101a49c8 = 1;
		uRam101a4868 = uVar13;
	}
	iVar4 = random('2', 8);
	iVar4 = iVar4 + 10;
	h = (ItemStruct *)(&DAT_101a4584 + iVar3 * 0x170);
	while (iVar3 < iVar4) {
		_DAT_1013d988 = GetRndSeed();
		SetRndSeed(_DAT_1013d988);
		iVar5 = RndHealerItem(lvl);
		GetItemAttrs(0, iVar5 + -1, lvl);
		lVar14 = 0x2e;
		piVar9 = (int *)0x1013d980;
		piVar11 = &h->_iPLMR;
		do {
			iVar5 = piVar9[3];
			piVar11[2] = piVar9[2];
			piVar11[3] = iVar5;
			lVar14 = lVar14 + -1;
			piVar9 = piVar9 + 2;
			piVar11 = piVar11 + 2;
		} while (lVar14 != 0);
		h->_iCreateInfo = uVar13 | 0x4000;
		h->_iIdentified = 1;
		BVar6 = StoreStatOk(h);
		h->_iStatFlag = BVar6;
		h = h + 1;
		iVar3 = iVar3 + 1;
	}
	puVar12 = &DAT_101a4584 + iVar4 * 0x170;
	uVar7 = 0x14 - iVar4;
	if (iVar4 < 0x14) {
		uVar2 = (ulonglong)(uVar7 >> 3);
		if (uVar7 >> 3 != 0) {
			do {
				*(undefined4 *)(puVar12 + 8) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0x178) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0x2e8) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0x458) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0x5c8) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0x738) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0x8a8) = 0xffffffff;
				*(undefined4 *)(puVar12 + 0xa18) = 0xffffffff;
				puVar12 = puVar12 + 0xb80;
				uVar2 = uVar2 - 1;
			} while (uVar2 != 0);
			uVar7 = uVar7 & 7;
			if (uVar7 == 0)
				goto LAB_10053774;
		}
		do {
			*(undefined4 *)(puVar12 + 8) = 0xffffffff;
			puVar12 = puVar12 + 0x170;
			uVar7 = uVar7 - 1;
		} while (uVar7 != 0);
	}
LAB_10053774:
	SortHealer();
	return;
}

void SpawnStoreGold(void)

{
	int iVar1;
	int *piVar2;
	int *piVar3;
	longlong lVar4;

	iVar1 = 0x100f8fd0;
	GetItemAttrs(0, 0, 1);
	lVar4 = 0x2e;
	piVar2 = (int *)(*(int *)(iVar1 + -0x7690) + -8);
	piVar3 = &gossipstart;
	do {
		iVar1 = piVar2[3];
		piVar3[2] = piVar2[2];
		piVar3[3] = iVar1;
		lVar4 = lVar4 + -1;
		piVar2 = piVar2 + 2;
		piVar3 = piVar3 + 2;
	} while (lVar4 != 0);
	uRam101a0048 = 1;
	return;
}

void RecreateSmithItem(int ii, int idx, int lvl, int iseed)

{
	int iVar1;
	int iStack0000001c;

	iStack0000001c = idx;
	SetRndSeed(iseed);
	iVar1 = RndSmithItem(lvl);
	GetItemAttrs(ii, iVar1 + -1, lvl);
	ii = ii * 0x170;
	*(int *)(&DAT_1013d988 + ii) = iseed;
	*(ushort *)(ii + 0x1013d98c) = (ushort)lvl | 0x400;
	*(undefined4 *)(ii + 0x1013d9c0) = 1;
	return;
}

void RecreatePremiumItem(int ii, int idx, int plvl, int iseed)

{
	int iVar1;
	int iStack0000001c;

	iStack0000001c = idx;
	SetRndSeed(iseed);
	iVar1 = RndPremiumItem(plvl >> 2, plvl);
	GetItemAttrs(ii, iVar1 + -1, plvl);
	GetItemBonus(ii, iVar1 + -1, plvl >> 1, plvl, 1);
	ii = ii * 0x170;
	*(int *)(&DAT_1013d988 + ii) = iseed;
	*(ushort *)(ii + 0x1013d98c) = (ushort)plvl | 0x800;
	*(undefined4 *)(ii + 0x1013d9c0) = 1;
	return;
}

void RecreateBoyItem(int ii, int idx, int lvl, int iseed)

{
	int iVar1;
	int iStack0000001c;

	iStack0000001c = idx;
	SetRndSeed(iseed);
	iVar1 = RndBoyItem(lvl);
	GetItemAttrs(ii, iVar1 + -1, lvl);
	GetItemBonus(ii, iVar1 + -1, lvl, lvl << 1, 1);
	ii = ii * 0x170;
	*(int *)(&DAT_1013d988 + ii) = iseed;
	*(ushort *)(ii + 0x1013d98c) = (ushort)lvl | 0x1000;
	*(undefined4 *)(ii + 0x1013d9c0) = 1;
	return;
}

void RecreateWitchItem(int ii, int idx, int lvl, int iseed)

{
	int iVar1;
	int iVar2;
	int maxlvl;

	if (((idx == 0x19) || (idx == 0x1e)) || (idx == 0x1b)) {
		GetItemAttrs(ii, idx, lvl);
	} else {
		SetRndSeed(iseed);
		iVar1 = RndWitchItem(lvl);
		GetItemAttrs(ii, iVar1 + -1, lvl);
		maxlvl = -1;
		iVar2 = random('3', 100);
		if (iVar2 < 6) {
			maxlvl = lvl << 1;
		}
		if ((maxlvl == -1) && (*(int *)(ii * 0x170 + 0x1013da64) == 0x17)) {
			maxlvl = lvl << 1;
		}
		if (maxlvl != -1) {
			GetItemBonus(ii, iVar1 + -1, maxlvl >> 1, maxlvl, 1);
		}
	}
	ii = ii * 0x170;
	*(int *)(&DAT_1013d988 + ii) = iseed;
	*(ushort *)(ii + 0x1013d98c) = (ushort)lvl | 0x2000;
	*(undefined4 *)(ii + 0x1013d9c0) = 1;
	return;
}

void RecreateHealerItem(int ii, int idx, int lvl, int iseed)

{
	int iVar1;

	if (((idx == 0x18) || (idx == 0x1d)) || (idx == 0x22)) {
		GetItemAttrs(ii, idx, lvl);
	} else {
		SetRndSeed(iseed);
		iVar1 = RndHealerItem(lvl);
		GetItemAttrs(ii, iVar1 + -1, lvl);
	}
	ii = ii * 0x170;
	*(int *)(&DAT_1013d988 + ii) = iseed;
	*(ushort *)(ii + 0x1013d98c) = (ushort)lvl | 0x4000;
	*(undefined4 *)(ii + 0x1013d9c0) = 1;
	return;
}

void RecreateTownItem(int ii, int idx, WORD icreateinfo, int iseed, int ivalue)

{
	uint uVar1;
	int iStack00000028;

	uVar1 = SEXT24((short)icreateinfo);
	if ((uVar1 & 0x400) == 0) {
		if ((uVar1 & 0x800) == 0) {
			if ((uVar1 & 0x1000) == 0) {
				if ((uVar1 & 0x2000) == 0) {
					if ((uVar1 & 0x4000) != 0) {
						iStack00000028 = ivalue;
						RecreateHealerItem(ii, idx, uVar1 & 0x3f, iseed);
					}
				} else {
					iStack00000028 = ivalue;
					RecreateWitchItem(ii, idx, uVar1 & 0x3f, iseed);
				}
			} else {
				iStack00000028 = ivalue;
				RecreateBoyItem(ii, idx, uVar1 & 0x3f, iseed);
			}
		} else {
			iStack00000028 = ivalue;
			RecreatePremiumItem(ii, idx, uVar1 & 0x3f, iseed);
		}
	} else {
		iStack00000028 = ivalue;
		RecreateSmithItem(ii, idx, uVar1 & 0x3f, iseed);
	}
	return;
}

void RecalcStoreStats(void)

{
	undefined8 uVar1;
	BOOL BVar2;
	int iVar3;
	ItemStruct *h;

	uVar1 = 0x100f8fd0;
	h = (ItemStruct *)&DAT_101a8920;
	iVar3 = 0;
	do {
		if (h->_itype != -1) {
			BVar2 = StoreStatOk(h);
			h->_iStatFlag = BVar2;
		}
		iVar3 = iVar3 + 1;
		h = h + 1;
	} while (iVar3 < 0x14);
	iVar3 = 0;
	h = *(ItemStruct **)((int)uVar1 + -0x71a8);
	do {
		if (h->_itype != -1) {
			BVar2 = StoreStatOk(h);
			h->_iStatFlag = BVar2;
		}
		iVar3 = iVar3 + 1;
		h = h + 1;
	} while (iVar3 < 6);
	iVar3 = 0;
	h = *(ItemStruct **)((int)uVar1 + -0x7178);
	do {
		if (h->_itype != -1) {
			BVar2 = StoreStatOk(h);
			h->_iStatFlag = BVar2;
		}
		iVar3 = iVar3 + 1;
		h = h + 1;
	} while (iVar3 < 0x14);
	iVar3 = 0;
	h = *(ItemStruct **)((int)uVar1 + -0x71c0);
	do {
		if (h->_itype != -1) {
			BVar2 = StoreStatOk(h);
			h->_iStatFlag = BVar2;
		}
		iVar3 = iVar3 + 1;
		h = h + 1;
	} while (iVar3 < 0x14);
	BRam101a63ac = StoreStatOk((ItemStruct *)&DAT_101a6248);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int ItemNoFlippy(void)

{
	int iVar1;
	int iVar2;

	iVar1 = *(int *)(_DAT_1013d984 * 4 + 0x1013d784);
	iVar2 = iVar1 * 0x170;
	*(undefined4 *)(iVar2 + 0x1013d9a8) = *(undefined4 *)(iVar2 + 0x1013d9a4);
	*(undefined4 *)(iVar2 + 0x1013d99c) = 0;
	*(undefined *)(iVar2 + 0x1013d9b8) = 1;
	return iVar1;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CreateSpellBook(int x, int y, int ispell, BOOL sendmsg, BOOL delta)

{
	bool bVar1;
	int ii;
	int idx;
	int iseed;
	int iVar2;

	iseed = 0x100f8fd0;
	bVar1 = false;
	idx = RndTypeItems(0, 0x18, ispell);
	ii = _DAT_1013d58c;
	if (_DAT_1013d984 < 0x7f) {
		GetSuperItemSpace(x, y, (char)_DAT_1013d58c);
		iVar2 = *(int *)(iseed + -0x7690) + ii * 0x170;
		_DAT_1013d58c = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		*(int *)(*(int *)(iseed + -0x71e0) + _DAT_1013d984 * 4) = ii;
		do {
			iseed = GetRndSeed();
			SetupAllItems(ii, idx, iseed, (uint)currlevel << 1, 1, 1, 0, delta);
			if ((*(int *)(iVar2 + 0xdc) == 0x18) && (ispell == *(int *)(iVar2 + 0xe0))) {
				bVar1 = true;
			}
		} while (!bVar1);
		if (sendmsg != 0) {
			NetSendCmdDItem(0, ii);
		}
		if (delta != 0) {
			DeltaAddItem(ii);
		}
		_DAT_1013d984 = _DAT_1013d984 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CreateMagicArmor(int x, int y, int imisc, int icurs, BOOL sendmsg, BOOL delta)

{
	bool bVar1;
	int ii;
	int iVar2;
	int lvl;
	int iseed;

	ii = _DAT_1013d58c;
	iVar2 = 0x100f8fd0;
	bVar1 = false;
	if (_DAT_1013d984 < 0x7f) {
		GetSuperItemSpace(x, y, (char)_DAT_1013d58c);
		lvl = *(int *)(iVar2 + -0x71e0);
		_DAT_1013d58c = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		*(int *)(lvl + _DAT_1013d984 * 4) = ii;
		lvl = RndTypeItems(imisc, 0, lvl);
		iVar2 = *(int *)(iVar2 + -0x7690);
		do {
			iseed = GetRndSeed();
			SetupAllItems(ii, lvl, iseed, (uint)currlevel << 1, 1, 1, 0, delta);
			if (icurs == *(int *)(iVar2 + ii * 0x170 + 0xc0)) {
				bVar1 = true;
			} else {
				lvl = RndTypeItems(imisc, 0, iseed);
			}
		} while (!bVar1);
		if (sendmsg != 0) {
			NetSendCmdDItem(0, ii);
		}
		if (delta != 0) {
			DeltaAddItem(ii);
		}
		_DAT_1013d984 = _DAT_1013d984 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void CreateMagicWeapon(int x, int y, int imisc, int icurs, BOOL sendmsg, BOOL delta)

{
	bool bVar1;
	int ii;
	int iVar2;
	int lvl;
	int iseed;

	ii = _DAT_1013d58c;
	iVar2 = 0x100f8fd0;
	bVar1 = false;
	if (_DAT_1013d984 < 0x7f) {
		GetSuperItemSpace(x, y, (char)_DAT_1013d58c);
		lvl = *(int *)(iVar2 + -0x71e0);
		_DAT_1013d58c = *(int *)(&DAT_1013d58c + (0x7e - _DAT_1013d984) * 4);
		*(int *)(lvl + _DAT_1013d984 * 4) = ii;
		lvl = RndTypeItems(imisc, 0, lvl);
		iVar2 = *(int *)(iVar2 + -0x7690);
		do {
			iseed = GetRndSeed();
			SetupAllItems(ii, lvl, iseed, (uint)currlevel << 1, 1, 1, 0, delta);
			if (icurs == *(int *)(iVar2 + ii * 0x170 + 0xc0)) {
				bVar1 = true;
			} else {
				lvl = RndTypeItems(imisc, 0, iseed);
			}
		} while (!bVar1);
		if (sendmsg != 0) {
			NetSendCmdDItem(0, ii);
		}
		if (delta != 0) {
			DeltaAddItem(ii);
		}
		_DAT_1013d984 = _DAT_1013d984 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void NextItemRecord(int i)

{
	int iVar1;

	_DAT_1013cd98 = _DAT_1013cd98 + -1;
	if (_DAT_1013cd98 == 0) {
		return;
	}
	iVar1 = _DAT_1013cd98 * 0x10;
	i = i * 0x10;
	*(undefined4 *)(i + 0x1013cda4) = *(undefined4 *)(iVar1 + 0x1013cda4);
	*(undefined4 *)(&DAT_1013cd9c + i) = *(undefined4 *)(&DAT_1013cd9c + iVar1);
	*(undefined2 *)(i + 0x1013cda0) = *(undefined2 *)(iVar1 + 0x1013cda0);
	*(undefined4 *)(i + 0x1013cda8) = *(undefined4 *)(iVar1 + 0x1013cda8);
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

BOOL GetItemRecord(int nSeed, WORD wCI, int nIndex)

{
	int iVar1;
	DWORD DVar2;
	int i;

	DVar2 = GetTickCount();
	i = 0;
	do {
		if (_DAT_1013cd98 <= i) {
			return 1;
		}
		iVar1 = i * 0x10;
		if (DVar2 - *(int *)(iVar1 + 0x1013cda8) < 0x1771) {
			if (((nSeed == *(int *)(&DAT_1013cd9c + iVar1)) && (wCI == *(WORD *)(iVar1 + 0x1013cda0))) && (nIndex == *(int *)(iVar1 + 0x1013cda4))) {
				return 0;
			}
		} else {
			NextItemRecord(i);
			i = i + -1;
		}
		i = i + 1;
	} while (true);
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void SetItemRecord(int nSeed, WORD wCI, int nIndex)

{
	int iVar1;
	DWORD DVar2;

	DVar2 = GetTickCount();
	if (_DAT_1013cd98 != 0x7f) {
		iVar1 = _DAT_1013cd98 * 0x10;
		*(DWORD *)(iVar1 + 0x1013cda8) = DVar2;
		*(int *)(&DAT_1013cd9c + iVar1) = nSeed;
		*(WORD *)(iVar1 + 0x1013cda0) = wCI;
		*(int *)(iVar1 + 0x1013cda4) = nIndex;
		_DAT_1013cd98 = _DAT_1013cd98 + 1;
	}
	return;
}

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PutItemRecord(int nSeed, WORD wCI, int nIndex)

{
	int iVar1;
	DWORD DVar2;
	int i;

	DVar2 = GetTickCount();
	i = 0;
	do {
		if (_DAT_1013cd98 <= i) {
			return;
		}
		iVar1 = i * 0x10;
		if (DVar2 - *(int *)(iVar1 + 0x1013cda8) < 0x1771) {
			if (((nSeed == *(int *)(&DAT_1013cd9c + iVar1)) && (wCI == *(WORD *)(iVar1 + 0x1013cda0))) && (nIndex == *(int *)(iVar1 + 0x1013cda4))) {
				NextItemRecord(i);
				return;
			}
		} else {
			NextItemRecord(i);
			i = i + -1;
		}
		i = i + 1;
	} while (true);
}
