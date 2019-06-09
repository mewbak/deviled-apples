
void InitItemGFX(void)

{
	undefined4 uVar1;
	ulonglong uVar2;
	longlong lVar3;
	ulonglong uVar4;
	undefined uVar5;
	undefined4 uVar6;
	undefined8 in_r6;
	undefined4 uVar7;
	undefined4 uVar8;
	undefined8 in_r7;
	undefined4 uVar9;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar10;
	undefined4 *puVar11;
	uint *puVar12;
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
	undefined auStack88[88];

	uVar1 = _DAT_100f3060;
	uVar9 = (undefined4)in_r7;
	uVar8 = (undefined4)((ulonglong)in_r7 >> 0x20);
	uVar7 = (undefined4)in_r6;
	uVar6 = (undefined4)((ulonglong)in_r6 >> 0x20);
	uVar2 = ZEXT48(&toc);
	iVar10 = 0;
	puVar12 = (uint *)PTR_PTR_s_Armor2_100f1e64;
	puVar11 = (undefined4 *)PTR_DAT_100f3064;
	do {
		uVar4 = (ulonglong)*puVar12;
		sprintf((int)auStack88, uVar1, *puVar12, uVar7, uVar9, in_r8, in_r9, in_r10, in_stack_ffffff78,
		    in_stack_ffffff7f, in_stack_ffffff8c, in_stack_ffffff90, in_stack_ffffff94,
		    in_stack_ffffff98, in_stack_ffffff9c, in_stack_ffffffa0, in_stack_ffffffa4);
		uVar5 = (undefined)uVar4;
		lVar3 = LoadFileInMem(ZEXT48(register0x0000000c) - 0x58, (undefined4 *)0x0, uVar4,
		    CONCAT44(uVar6, uVar7), CONCAT44(uVar8, uVar9), in_r8, in_r9, in_r10,
		    in_stack_ffffff78);
		iVar10 = iVar10 + 1;
		*puVar11 = (int)lVar3;
		puVar12 = puVar12 + 1;
		puVar11 = puVar11 + 1;
	} while (iVar10 < 0x23);
	memset((char)*(undefined4 *)((int)uVar2 + -0x7170), 0, uVar5, (char)uVar7, (char)uVar9, (char)in_r8, (char)in_r9, (char)in_r10, (char)in_stack_ffffff78, in_stack_ffffff7f, local_7c);
	return;
}

undefined8 ItemPlace(int param_1, int param_2)

{
	int iVar1;

	iVar1 = param_1 * 0xe0 + param_2 * 2;
	if (*(short *)(*(int *)PTR_DAT_100f1954 + iVar1) != 0) {
		return 0;
	}
	param_2 = param_1 * 0x70 + param_2;
	if (*(char *)(*(int *)PTR_DAT_100f1950 + param_2) != '\0') {
		return 0;
	}
	if (*(char *)(*(int *)PTR_DAT_100f1944 + param_2) != '\0') {
		return 0;
	}
	if (*(char *)(*(int *)PTR_DAT_100f194c + param_2) != '\0') {
		return 0;
	}
	if ((*(byte *)(*(int *)PTR_DAT_100f1834 + param_2) & 8) != 0) {
		return 0;
	}
	if (*(char *)(_DAT_100f1da4 + (int)*(short *)(*(int *)PTR_DAT_100f1a54 + iVar1)) != '\0') {
		return 0;
	}
	return 1;
}

void AddInitItems(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	int iVar3;
	uint uVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	uint *puVar8;
	uint *puVar9;
	int iVar10;
	longlong lVar11;
	longlong lVar12;
	int iVar15;
	longlong lVar13;
	undefined8 uVar14;
	undefined4 uVar16;
	int iVar17;
	char cVar18;
	ulonglong uVar19;
	undefined uVar20;
	ulonglong uVar21;
	undefined uVar22;
	longlong lVar23;
	longlong lVar24;
	longlong lVar25;
	longlong lVar26;
	int iVar27;
	undefined4 *puVar28;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	iVar10 = _DAT_100f1df0;
	puVar9 = _DAT_100f1dec;
	puVar8 = _DAT_100f1ddc;
	puVar7 = PTR_DAT_100f1944;
	puVar6 = PTR_DAT_100f1940;
	puVar5 = PTR_DAT_100f17ec;
	lVar26 = (longlong)param_8;
	lVar25 = (longlong)param_7;
	lVar24 = (longlong)param_6;
	lVar23 = (longlong)param_5;
	lVar11 = random(0xb, 3, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98,
	    in_stack_ffffff9f, in_stack_ffffffab);
	iVar27 = 0;
	while (iVar27 < (int)lVar11 + 3) {
		uVar1 = *puVar9;
		uVar21 = (ulonglong)uVar1;
		uVar2 = *puVar8;
		uVar4 = puVar8[0x7e - uVar1];
		uVar19 = (ulonglong)uVar4;
		*puVar8 = uVar4;
		*(uint *)(iVar10 + uVar1 * 4) = uVar2;
		lVar12 = random(0xc, 0x50, (char)uVar4, (char)uVar1, (char)lVar23, (char)lVar24, (char)lVar25,
		    (char)lVar26, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
		lVar13 = random(0xc, 0x50, (char)uVar19, (char)uVar21, (char)lVar23, (char)lVar24, (char)lVar25,
		    (char)lVar26, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
		while (true) {
			iVar15 = (int)lVar12 + 0x10;
			iVar17 = (int)lVar13 + 0x10;
			uVar14 = ItemPlace(iVar15, iVar17);
			uVar20 = (undefined)uVar19;
			uVar22 = (undefined)uVar21;
			if ((int)uVar14 != 0)
				break;
			lVar12 = random(0xc, 0x50, uVar20, uVar22, (char)lVar23, (char)lVar24, (char)lVar25,
			    (char)lVar26, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
			lVar13 = random(0xc, 0x50, (char)uVar19, (char)uVar21, (char)lVar23, (char)lVar24,
			    (char)lVar25, (char)lVar26, in_stack_ffffff98, in_stack_ffffff9f,
			    in_stack_ffffffab);
		}
		cVar18 = (char)uVar2 + '\x01';
		puVar28 = (undefined4 *)(puVar6 + uVar2 * 0x170);
		puVar28[3] = iVar15;
		puVar28[4] = iVar17;
		iVar3 = *(int *)puVar7;
		*(char *)(iVar3 + iVar15 * 0x70 + iVar17) = cVar18;
		uVar16 = GetRndSeed((char)iVar3, cVar18, uVar20, uVar22, (char)lVar23, (char)lVar24, (char)lVar25,
		    (char)lVar26, in_stack_ffffff98);
		*puVar28 = uVar16;
		SetRndSeed(*puVar28);
		lVar12 = random(0xc, 2, uVar20, uVar22, (char)lVar23, (char)lVar24, (char)lVar25, (char)lVar26,
		    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
		if ((int)lVar12 == 0) {
			GetItemAttrs(uVar2, 0x19, (ulonglong)(byte)*puVar5, uVar22, (char)lVar23, (char)lVar24, (char)lVar25, (char)lVar26, in_stack_ffffff98);
		} else {
			GetItemAttrs(uVar2, 0x18, (ulonglong)(byte)*puVar5, uVar22, (char)lVar23, (char)lVar24, (char)lVar25, (char)lVar26, in_stack_ffffff98);
		}
		*(ushort *)(puVar28 + 1) = (ushort)(byte)*puVar5 + 0x8000;
		SetupItem(uVar2);
		puVar28[8] = puVar28[7];
		puVar28[5] = 0;
		*(undefined *)(puVar28 + 0xc) = 1;
		DeltaAddItem(uVar2);
		iVar27 = iVar27 + 1;
		*puVar9 = *puVar9 + 1;
	}
	return;
}

void InitItems(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	byte bVar1;
	undefined4 uVar2;
	int iVar3;
	undefined **ppuVar4;
	undefined8 uVar5;
	undefined *puVar6;
	undefined uVar8;
	undefined *puVar7;
	undefined4 *puVar10;
	longlong lVar9;
	undefined uVar11;
	longlong lVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	undefined uVar16;
	int *piVar18;
	ulonglong uVar17;
	undefined uVar19;
	undefined4 *puVar21;
	ulonglong uVar20;
	undefined uVar22;
	int iVar23;
	ulonglong uVar24;
	ulonglong uVar25;
	longlong lVar26;
	longlong lVar27;
	undefined4 in_stack_ffffffa8;

	puVar6 = PTR_DAT_100f1e5c;
	puVar7 = PTR_DAT_100f1940;
	ppuVar4 = &toc;
	uVar25 = (ulonglong)_DAT_100f1ddc;
	uVar24 = (ulonglong)_DAT_100f1df0;
	GetItemAttrs(0, 0, 1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	lVar26 = 0x2e;
	puVar21 = (undefined4 *)(puVar7 + -8);
	puVar10 = (undefined4 *)(puVar6 + -8);
	do {
		uVar2 = puVar21[3];
		puVar10[2] = puVar21[2];
		puVar10[3] = uVar2;
		lVar26 = lVar26 + -1;
		puVar21 = puVar21 + 2;
		puVar10 = puVar10 + 2;
	} while (lVar26 != 0);
	puVar21 = (undefined4 *)ppuVar4[-0x1c79];
	*(undefined4 *)(puVar6 + 0x164) = 1;
	*puVar21 = 0;
	lVar26 = 0xf;
	iVar23 = 0;
	puVar6 = puVar7;
	do {
		iVar23 = iVar23 + 8;
		*(undefined4 *)(puVar6 + 8) = 0;
		*(undefined4 *)(puVar6 + 0xc) = 0;
		*(undefined4 *)(puVar6 + 0x10) = 0;
		*(undefined4 *)(puVar6 + 0x14) = 0;
		puVar6[0x30] = 0;
		*(undefined4 *)(puVar6 + 0x38) = 0;
		*(undefined4 *)(puVar6 + 0x34) = 0;
		*(undefined4 *)(puVar6 + 0x178) = 0;
		*(undefined4 *)(puVar6 + 0x17c) = 0;
		*(undefined4 *)(puVar6 + 0x180) = 0;
		*(undefined4 *)(puVar6 + 0x184) = 0;
		puVar6[0x1a0] = 0;
		*(undefined4 *)(puVar6 + 0x1a8) = 0;
		*(undefined4 *)(puVar6 + 0x1a4) = 0;
		*(undefined4 *)(puVar6 + 0x2e8) = 0;
		*(undefined4 *)(puVar6 + 0x2ec) = 0;
		*(undefined4 *)(puVar6 + 0x2f0) = 0;
		*(undefined4 *)(puVar6 + 0x2f4) = 0;
		puVar6[0x310] = 0;
		*(undefined4 *)(puVar6 + 0x318) = 0;
		*(undefined4 *)(puVar6 + 0x314) = 0;
		*(undefined4 *)(puVar6 + 0x458) = 0;
		*(undefined4 *)(puVar6 + 0x45c) = 0;
		*(undefined4 *)(puVar6 + 0x460) = 0;
		*(undefined4 *)(puVar6 + 0x464) = 0;
		puVar6[0x480] = 0;
		*(undefined4 *)(puVar6 + 0x488) = 0;
		*(undefined4 *)(puVar6 + 0x484) = 0;
		*(undefined4 *)(puVar6 + 0x5c8) = 0;
		*(undefined4 *)(puVar6 + 0x5cc) = 0;
		*(undefined4 *)(puVar6 + 0x5d0) = 0;
		*(undefined4 *)(puVar6 + 0x5d4) = 0;
		puVar6[0x5f0] = 0;
		*(undefined4 *)(puVar6 + 0x5f8) = 0;
		*(undefined4 *)(puVar6 + 0x5f4) = 0;
		*(undefined4 *)(puVar6 + 0x738) = 0;
		*(undefined4 *)(puVar6 + 0x73c) = 0;
		*(undefined4 *)(puVar6 + 0x740) = 0;
		*(undefined4 *)(puVar6 + 0x744) = 0;
		puVar6[0x760] = 0;
		*(undefined4 *)(puVar6 + 0x768) = 0;
		*(undefined4 *)(puVar6 + 0x764) = 0;
		*(undefined4 *)(puVar6 + 0x8a8) = 0;
		*(undefined4 *)(puVar6 + 0x8ac) = 0;
		*(undefined4 *)(puVar6 + 0x8b0) = 0;
		*(undefined4 *)(puVar6 + 0x8b4) = 0;
		puVar6[0x8d0] = 0;
		*(undefined4 *)(puVar6 + 0x8d8) = 0;
		*(undefined4 *)(puVar6 + 0x8d4) = 0;
		*(undefined4 *)(puVar6 + 0xa18) = 0;
		*(undefined4 *)(puVar6 + 0xa1c) = 0;
		*(undefined4 *)(puVar6 + 0xa20) = 0;
		*(undefined4 *)(puVar6 + 0xa24) = 0;
		puVar6[0xa40] = 0;
		*(undefined4 *)(puVar6 + 0xa48) = 0;
		*(undefined4 *)(puVar6 + 0xa44) = 0;
		puVar6 = puVar6 + 0xb80;
		lVar26 = lVar26 + -1;
	} while (lVar26 != 0);
	puVar7 = puVar7 + iVar23 * 0x170;
	iVar3 = 0x7f - iVar23;
	if (iVar23 < 0x7f) {
		do {
			*(undefined4 *)(puVar7 + 8) = 0;
			*(undefined4 *)(puVar7 + 0xc) = 0;
			*(undefined4 *)(puVar7 + 0x10) = 0;
			*(undefined4 *)(puVar7 + 0x14) = 0;
			puVar7[0x30] = 0;
			*(undefined4 *)(puVar7 + 0x38) = 0;
			*(undefined4 *)(puVar7 + 0x34) = 0;
			puVar7 = puVar7 + 0x170;
			iVar3 = iVar3 + -1;
		} while (iVar3 != 0);
	}
	lVar27 = 0xf;
	lVar26 = 0;
	uVar17 = uVar25;
	uVar20 = uVar24;
	do {
		iVar23 = (int)lVar26;
		piVar18 = (int *)uVar17;
		*piVar18 = iVar23;
		uVar16 = 0;
		lVar14 = lVar26 + 2;
		uVar15 = (undefined)lVar14;
		puVar21 = (undefined4 *)uVar20;
		*puVar21 = 0;
		lVar12 = lVar26 + 3;
		uVar13 = (undefined)lVar12;
		lVar9 = lVar26 + 4;
		uVar11 = (undefined)lVar9;
		piVar18[1] = iVar23 + 1;
		puVar21[1] = 0;
		lVar26 = lVar26 + 8;
		piVar18[2] = (int)lVar14;
		puVar21[2] = 0;
		piVar18[3] = (int)lVar12;
		puVar21[3] = 0;
		piVar18[4] = (int)lVar9;
		puVar21[4] = 0;
		piVar18[5] = iVar23 + 5;
		puVar21[5] = 0;
		piVar18[6] = iVar23 + 6;
		puVar21[6] = 0;
		piVar18[7] = iVar23 + 7;
		uVar17 = uVar17 + 0x20;
		uVar19 = (undefined)uVar17;
		puVar21[7] = 0;
		uVar20 = uVar20 + 0x20;
		uVar22 = (undefined)uVar20;
		lVar27 = lVar27 + -1;
	} while (lVar27 != 0);
	uVar17 = (ulonglong)(uint)((int)lVar26 << 2);
	lVar9 = uVar25 + uVar17;
	lVar12 = uVar24 + uVar17;
	uVar8 = (undefined)lVar12;
	lVar27 = 0x7f - lVar26;
	if ((int)lVar26 < 0x7f) {
		do {
			*(undefined4 *)lVar9 = (int)lVar26;
			lVar9 = lVar9 + 4;
			lVar26 = lVar26 + 1;
			*(undefined4 *)lVar12 = 0;
			lVar12 = lVar12 + 4;
			uVar8 = (undefined)lVar12;
			lVar27 = lVar27 + -1;
		} while (lVar27 != 0);
	}
	if (*ppuVar4[-0x1df6] == '\0') {
		GetRndSeed((char)ppuVar4[-0x1df6], uVar8, uVar11, uVar13, uVar15, 0, uVar19, uVar22, in_stack_ffffffa8);
		uVar5 = QuestStatus(0);
		if ((int)uVar5 != 0) {
			SpawnRock();
		}
		uVar5 = QuestStatus(10);
		if ((int)uVar5 != 0) {
			uVar13 = 0;
			uVar15 = 1;
			lVar26 = (ulonglong)(uint)(*(int *)ppuVar4[-0x1d53] << 1) + 0x1b;
			uVar8 = (undefined)lVar26;
			lVar27 = (ulonglong)(uint)(*(int *)ppuVar4[-0x1d54] << 1) + 0x1b;
			uVar11 = (undefined)lVar27;
			SpawnQuestItem(0x10, (int)lVar26, (int)lVar27, 0, 1, uVar16, uVar19, uVar22, in_stack_ffffffa8);
		}
		bVar1 = *ppuVar4[-0x1df9];
		if ((bVar1 != 0) && (bVar1 < 0x10)) {
			AddInitItems((char)ppuVar4[-0x1df9], uVar8, uVar11, uVar13, uVar15, uVar16, uVar19, uVar22,
			    in_stack_ffffffa8);
		}
	}
	*(undefined4 *)ppuVar4[-0x1d9d] = 0;
	return;
}

void CalcPlrItemVals(ulonglong param_1, int param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	undefined4 *puVar1;
	undefined *puVar2;
	longlong lVar3;
	int iVar4;
	int iVar5;
	uint uVar6;
	int iVar7;
	int *piVar8;
	ulonglong uVar9;
	char cVar13;
	ulonglong uVar10;
	undefined8 uVar11;
	undefined *puVar12;
	undefined4 uVar14;
	undefined4 uVar15;
	undefined4 uVar16;
	ulonglong uVar17;
	int iVar18;
	undefined uVar19;
	int iVar20;
	undefined uVar21;
	int iVar22;
	undefined uVar23;
	uint uVar24;
	int iVar25;
	longlong lVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	longlong lVar31;
	longlong lVar32;
	longlong lVar33;
	undefined4 in_stack_ffffff28;
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

	puVar2 = PTR_DAT_100f196c;
	uVar10 = ZEXT48(&toc);
	iVar4 = 0;
	iVar25 = 0;
	uVar24 = 0;
	iVar28 = 0;
	iVar29 = 0;
	uVar17 = 0;
	iVar18 = 0;
	iVar20 = 0;
	iVar22 = 0;
	lVar31 = 10;
	lVar26 = 0;
	iVar27 = 0;
	iVar30 = 0;
	lVar33 = ZEXT48(PTR_DAT_100f1828) + param_1 * 0x55ec;
	local_5c = 0;
	local_60 = 0;
	local_64 = 0;
	local_68 = 0;
	local_6c = 0;
	local_70 = 0;
	local_98 = 0;
	local_74 = 0;
	local_78 = 0;
	cVar13 = '\0';
	local_80 = 0;
	local_84 = 0;
	local_88 = 0;
	local_8c = 0;
	local_90 = 0;
	lVar32 = lVar33;
	do {
		iVar5 = (int)lVar32;
		if ((*(int *)(iVar5 + 0x4a0) != -1) && (*(int *)(iVar5 + 0x5fc) != 0)) {
			iVar25 = iVar25 + *(int *)(iVar5 + 0x568);
			iVar7 = *(int *)(iVar5 + 0x56c);
			local_5c = local_5c + iVar7;
			iVar4 = iVar4 + *(int *)(iVar5 + 0x564);
			if (*(uint *)(iVar5 + 0x578) != 0) {
				param_3 = (ulonglong) * (uint *)(iVar5 + 0x578) - 1;
				uVar9 = 1;
				uVar6 = SetCursorPos(0);
				uVar17 = uVar17 | uVar9;
				local_98 = local_98 | uVar6;
			}
			if ((*(char *)(iVar5 + 0x4d4) == '\0') || (*(int *)(iVar5 + 0x4d0) != 0)) {
				local_60 = local_60 + *(int *)(iVar5 + 0x58c);
				local_64 = local_64 + *(int *)(iVar5 + 0x590);
				if (*(int *)(iVar5 + 0x594) != 0) {
					iVar7 = iVar7 * *(int *)(iVar5 + 0x594);
					uVar6 = iVar7 / 100 + (iVar7 >> 0x1f);
					lVar3 = ((longlong)(int)((ulonglong)((longlong)iVar7 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar6) + (ulonglong)(uVar6 >> 0x1f);
					iVar7 = (int)lVar3;
					if (lVar3 == 0) {
						iVar7 = 1;
					}
					local_68 = local_68 + iVar7;
				}
				uVar24 = uVar24 | *(uint *)(iVar5 + 0x570);
				local_6c = local_6c + *(int *)(iVar5 + 0x598);
				iVar28 = iVar28 + *(int *)(iVar5 + 0x59c);
				iVar20 = iVar20 + *(int *)(iVar5 + 0x5ac);
				iVar27 = iVar27 + *(int *)(iVar5 + 0x5b4);
				iVar22 = iVar22 + *(int *)(iVar5 + 0x5b0);
				cVar13 = cVar13 + *(char *)(iVar5 + 0x5c8);
				param_8 = (ulonglong) * (uint *)(iVar5 + 0x5e0);
				iVar29 = iVar29 + *(int *)(iVar5 + 0x5a4);
				local_80 = local_80 + *(uint *)(iVar5 + 0x5e0);
				local_70 = local_70 + *(int *)(iVar5 + 0x5a0);
				param_7 = (ulonglong) * (uint *)(iVar5 + 0x5d0);
				local_84 = local_84 + *(uint *)(iVar5 + 0x5d0);
				local_74 = local_74 + *(int *)(iVar5 + 0x5bc);
				param_4 = (ulonglong) * (uint *)(iVar5 + 0x5c4);
				iVar18 = iVar18 + *(int *)(iVar5 + 0x5a8);
				param_3 = (ulonglong) * (uint *)(iVar5 + 0x5b8);
				lVar31 = lVar31 + param_4;
				lVar26 = lVar26 + param_3;
				param_5 = (ulonglong) * (uint *)(iVar5 + 0x5c0);
				local_88 = local_88 + *(int *)(iVar5 + 0x5d4);
				param_6 = (ulonglong) * (uint *)(iVar5 + 0x5d8);
				local_78 = local_78 + *(uint *)(iVar5 + 0x5c0);
				local_8c = local_8c + *(uint *)(iVar5 + 0x5d8);
				local_90 = local_90 + *(int *)(iVar5 + 0x5dc);
			}
		}
		iVar5 = (int)uVar10;
		uVar16 = (undefined4)param_8;
		uVar15 = (undefined4)param_7;
		uVar14 = (undefined4)param_6;
		iVar7 = (int)lVar31;
		iVar30 = iVar30 + 1;
		lVar32 = lVar32 + 0x170;
	} while (iVar30 < 7);
	iVar30 = (int)lVar33;
	if ((iVar4 == 0) && (iVar25 == 0)) {
		iVar4 = 1;
		iVar25 = 1;
		if ((*(int *)(iVar30 + 0xa60) == 5) && (*(int *)(iVar30 + 0xbbc) != 0)) {
			iVar25 = 3;
		}
		if ((*(int *)(iVar30 + 0xbd0) == 5) && (*(int *)(iVar30 + 0xd2c) != 0)) {
			iVar25 = 3;
		}
	}
	*(int *)(iVar30 + 0x5544) = iVar4;
	*(int *)(iVar30 + 0x5548) = iVar25;
	*(int *)(iVar30 + 0x554c) = local_5c;
	*(int *)(iVar30 + 0x5550) = local_60;
	*(int *)(iVar30 + 0x5554) = local_64;
	*(int *)(iVar30 + 0x5558) = local_68;
	*(uint *)(iVar30 + 0x5568) = uVar24;
	*(int *)(iVar30 + 0x555c) = local_74;
	*(int *)(iVar30 + 0x556c) = local_78;
	if (iVar7 < 2) {
		iVar7 = 2;
	}
	if (0xf < iVar7) {
		iVar7 = 0xf;
	}
	if (((int)*(char *)(iVar30 + 0x13a) != iVar7) && ((int)param_1 == **(int **)(iVar5 + -0x77ac))) {
		FUN_100baf64(*(int *)(iVar30 + 0x9c), iVar7);
		if (iVar7 < 10) {
			ChangeVisionRadius(*(int *)(iVar30 + 0xa0), 10);
		} else {
			ChangeVisionRadius(*(int *)(iVar30 + 0xa0), iVar7);
		}
		*(undefined *)(iVar30 + 0x13a) = (char)iVar7;
	}
	piVar8 = *(int **)(iVar5 + -0x77ac);
	*(int *)(iVar30 + 0x160) = *(int *)(iVar30 + 0x164) + local_6c;
	piVar8 = (int *)(*(int *)(iVar5 + -0x77a8) + *piVar8 * 0x55ec + 0x160);
	if (*piVar8 < 1) {
		*piVar8 = 0;
	}
	piVar8 = *(int **)(iVar5 + -0x77ac);
	*(int *)(iVar30 + 0x168) = *(int *)(iVar30 + 0x16c) + iVar28;
	piVar8 = (int *)(*(int *)(iVar5 + -0x77a8) + *piVar8 * 0x55ec + 0x168);
	if (*piVar8 < 1) {
		*piVar8 = 0;
	}
	piVar8 = *(int **)(iVar5 + -0x77ac);
	*(int *)(iVar30 + 0x170) = *(int *)(iVar30 + 0x174) + local_70;
	piVar8 = (int *)(*(int *)(iVar5 + -0x77a8) + *piVar8 * 0x55ec + 0x170);
	if (*piVar8 < 1) {
		*piVar8 = 0;
	}
	piVar8 = *(int **)(iVar5 + -0x77ac);
	*(int *)(iVar30 + 0x178) = *(int *)(iVar30 + 0x17c) + iVar29;
	piVar8 = (int *)(*(int *)(iVar5 + -0x77a8) + *piVar8 * 0x55ec + 0x178);
	if (*piVar8 < 1) {
		*piVar8 = 0;
	}
	if (*(char *)(iVar30 + 0x15c) == '\x01') {
		param_3 = 0x51eb851f;
		iVar4 = (int)*(char *)(iVar30 + 0x1b4) * (*(int *)(iVar30 + 0x160) + *(int *)(iVar30 + 0x170));
		uVar6 = iVar4 / 200 + (iVar4 >> 0x1f);
		*(int *)(iVar30 + 0x184) = uVar6 + (uVar6 >> 0x1f);
	} else {
		iVar4 = *(int *)(iVar30 + 0x160) * (int)*(char *)(iVar30 + 0x1b4);
		uVar6 = iVar4 / 100 + (iVar4 >> 0x1f);
		*(int *)(iVar30 + 0x184) = uVar6 + (uVar6 >> 0x1f);
	}
	*(undefined4 *)(iVar30 + 0x5564) = (int)uVar17;
	*(uint *)(iVar30 + 0x5560) = local_98;
	if (*(char *)(iVar30 + 0xb8) == '\x03') {
		uVar10 = 1;
		param_4 = SetCursorPos(0, 1, (ulonglong) * (uint *)(iVar30 + 0xb4) - 1);
		param_3 = (ulonglong) * (uint *)(iVar30 + 0x5564);
		param_4 = (ulonglong) * (uint *)(iVar30 + 0x5560) & param_4;
		if ((param_3 & uVar10 | param_4) == 0) {
			puVar1 = *(undefined4 **)(iVar5 + -0x76bc);
			*(undefined4 *)(iVar30 + 0xb4) = 0xffffffff;
			*(undefined *)(iVar30 + 0xb8) = 4;
			*puVar1 = 0xff;
		}
	}
	*(char *)(iVar30 + 0x5570) = cVar13;
	*(int *)(iVar30 + 0x5578) = local_80;
	if ((uVar24 & 0x80000000) != 0) {
		iVar22 = 0;
		iVar18 = 0;
		iVar20 = 0;
	}
	uVar21 = (undefined)iVar20;
	uVar19 = (undefined)iVar18;
	uVar23 = (undefined)iVar22;
	if (0x4b < iVar22) {
		uVar23 = 0x4b;
	}
	*(undefined *)(iVar30 + 0x1c5) = uVar23;
	if (0x4b < iVar18) {
		uVar19 = 0x4b;
	}
	*(undefined *)(iVar30 + 0x1c6) = uVar19;
	if (0x4b < iVar20) {
		uVar21 = 0x4b;
	}
	*(undefined *)(iVar30 + 0x1c7) = uVar21;
	cVar13 = *(char *)(iVar30 + 0x15c);
	if (cVar13 == '\0') {
		iVar29 = iVar29 << 1;
	}
	if (cVar13 == '\x01') {
		iVar29 = iVar29 + (iVar29 >> 1);
	}
	iVar29 = (int)lVar26 + iVar29 * 0x40;
	if (cVar13 == '\x02') {
		iVar28 = iVar28 << 1;
	}
	if (cVar13 == '\x01') {
		iVar28 = iVar28 + (iVar28 >> 1);
	}
	iVar27 = iVar27 + iVar28 * 0x40;
	piVar8 = *(int **)(iVar5 + -0x77ac);
	*(int *)(iVar30 + 0x194) = *(int *)(iVar30 + 0x18c) + iVar29;
	*(int *)(iVar30 + 0x198) = *(int *)(iVar30 + 400) + iVar29;
	if (((int)param_1 == *piVar8) && (*(int *)(iVar30 + 0x194) >> 6 == 0)) {
		SetPlayerHitPoints(param_1, 0, param_3, param_4, param_5, uVar14, uVar15, uVar16, in_stack_ffffff28);
	}
	iVar29 = (int)param_1;
	*(int *)(iVar30 + 0x1a8) = *(int *)(iVar30 + 0x1a0) + iVar27;
	*(int *)(iVar30 + 0x1ac) = *(int *)(iVar30 + 0x1a4) + iVar27;
	*(int *)(iVar30 + 0x557c) = local_84;
	*(int *)(iVar30 + 0x5580) = local_88;
	*(int *)(iVar30 + 0x5584) = local_8c;
	*(int *)(iVar30 + 0x5588) = local_90;
	if ((uVar24 & 1) == 0) {
		*(undefined4 *)(iVar30 + 0x1cc) = 0;
	} else {
		*(undefined4 *)(iVar30 + 0x1cc) = 1;
	}
	*(undefined *)(iVar30 + 0x138) = 0;
	iVar28 = 0;
	*(undefined4 *)(iVar30 + 0x134) = 0;
	if (((*(int *)(iVar30 + 0xa60) != -1) && (*(char *)(iVar30 + 0xb16) == '\x01')) && (*(int *)(iVar30 + 0xbbc) != 0)) {
		iVar28 = *(int *)(iVar30 + 0xa60);
	}
	if (((*(int *)(iVar30 + 0xbd0) != -1) && (*(char *)(iVar30 + 0xc86) == '\x01')) && (*(int *)(iVar30 + 0xd2c) != 0)) {
		iVar28 = *(int *)(iVar30 + 0xbd0);
	}
	if (iVar28 == 4) {
		iVar28 = 6;
	} else {
		if (iVar28 < 4) {
			if (iVar28 == 2) {
				iVar28 = 5;
			} else {
				if (iVar28 < 2) {
					if (0 < iVar28) {
						iVar28 = 2;
					}
				} else {
					*(undefined4 *)(iVar30 + 0x134) = 1;
					iVar28 = 4;
				}
			}
		} else {
			if (iVar28 == 10) {
				iVar28 = 8;
			}
		}
	}
	if ((*(int *)(iVar30 + 0xa60) == 5) && (*(int *)(iVar30 + 0xbbc) != 0)) {
		iVar28 = iVar28 + 1;
		*(undefined *)(iVar30 + 0x138) = 1;
	}
	if ((*(int *)(iVar30 + 0xbd0) == 5) && (*(int *)(iVar30 + 0xd2c) != 0)) {
		iVar28 = iVar28 + 1;
		*(undefined *)(iVar30 + 0x138) = 1;
	}
	if ((*(int *)(iVar30 + 0xd40) == 8) && (*(int *)(iVar30 + 0xe9c) != 0)) {
		iVar28 = iVar28 + 0x10;
	}
	if ((*(int *)(iVar30 + 0xd40) == 9) && (*(int *)(iVar30 + 0xe9c) != 0)) {
		iVar28 = iVar28 + 0x20;
	}
	if ((*(int *)(iVar30 + 0x78) == iVar28) || (param_2 == 0)) {
		*(int *)(iVar30 + 0x78) = iVar28;
	} else {
		*(int *)(iVar30 + 0x78) = iVar28;
		*(undefined4 *)(iVar30 + 0x214) = 0;
		uVar11 = 1;
		LoadPlrGFX(param_1);
		iVar29 = (int)param_1;
		SetPlrAnims(param_1, uVar11, param_3, param_4, param_5, uVar14, uVar15, uVar16, in_stack_ffffff28);
		*(int *)(iVar30 + 0x7c) = iVar30 + *(int *)(iVar30 + 0x70) * 8 + 0x218;
		*(undefined4 *)(iVar30 + 0x88) = *(undefined4 *)(iVar30 + 600);
		*(undefined4 *)(iVar30 + 0x8c) = 1;
		*(undefined4 *)(iVar30 + 0x84) = 0;
		*(undefined4 *)(iVar30 + 0x80) = 3;
		*(undefined4 *)(iVar30 + 0x90) = *(undefined4 *)(iVar30 + 0x25c);
		*(int *)(iVar30 + 0x94) = *(int *)(iVar30 + 0x25c) + -0x40 >> 1;
	}
	piVar8 = *(int **)(iVar5 + -0x7660);
	uVar10 = (ulonglong) * *(uint **)(iVar5 + -0x7668);
	if (0 < (int)**(uint **)(iVar5 + -0x7668)) {
		do {
			if ((*(int *)(puVar2 + *piVar8 * 0xb4) == 0xd) && (puVar12 = puVar2 + *piVar8 * 0xb4, iVar29 == *(int *)(puVar12 + 0x78))) {
				*(undefined4 *)(puVar12 + 0x94) = *(undefined4 *)(iVar30 + 0x194);
				*(undefined4 *)(puVar12 + 0x98) = *(undefined4 *)(iVar30 + 0x18c);
			}
			piVar8 = piVar8 + 1;
			uVar10 = uVar10 - 1;
		} while (uVar10 != 0);
	}
	puVar1 = *(undefined4 **)(iVar5 + -0x76f0);
	**(undefined4 **)(iVar5 + -0x76f4) = 1;
	*puVar1 = 1;
	return;
}

void CalcPlrScrolls(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char *pcVar1;
	uint *puVar2;
	undefined4 *puVar3;
	undefined *puVar4;
	ulonglong uVar5;
	uint uVar6;
	uint uVar7;
	int iVar8;
	undefined *puVar9;
	undefined *puVar10;
	undefined *puVar11;

	puVar4 = PTR_DAT_100f1828;
	uVar5 = ZEXT48(&toc);
	param_1 = param_1 * 0x55ec;
	puVar11 = PTR_DAT_100f1828 + param_1;
	puVar10 = PTR_DAT_100f1828 + param_1;
	iVar8 = 0;
	*(undefined4 *)(puVar10 + 0x118) = 0;
	*(uint *)(puVar10 + 0x114) = 0;
	puVar9 = puVar11;
	while (iVar8 < *(int *)(puVar11 + 0x4828)) {
		if ((*(int *)(puVar9 + 0xeb0) != -1) && (((*(int *)(puVar9 + 0xf84) == 0x15 || (*(int *)(puVar9 + 0xf84) == 0x16)) && (*(int *)(puVar9 + 0x100c) != 0)))) {
			uVar7 = 1;
			uVar6 = SetCursorPos(0, 1, (ulonglong) * (uint *)(puVar9 + 0xf88) - 1);
			*(uint *)(puVar11 + 0x118) = *(uint *)(puVar11 + 0x118) | uVar7;
			*(uint *)(puVar11 + 0x114) = *(uint *)(puVar11 + 0x114) | uVar6;
		}
		puVar9 = puVar9 + 0x170;
		iVar8 = iVar8 + 1;
	}
	iVar8 = 0;
	puVar9 = puVar11;
	do {
		if (((*(int *)(puVar9 + 0x485c) != -1) && ((*(int *)(puVar9 + 0x4930) == 0x15 || (*(int *)(puVar9 + 0x4930) == 0x16)))) && (*(int *)(puVar9 + 0x49b8) != 0)) {
			uVar7 = 1;
			uVar6 = SetCursorPos(0, 1, (ulonglong) * (uint *)(puVar9 + 0x4934) - 1);
			*(uint *)(puVar11 + 0x118) = *(uint *)(puVar11 + 0x118) | uVar7;
			*(uint *)(puVar11 + 0x114) = *(uint *)(puVar11 + 0x114) | uVar6;
		}
		iVar8 = iVar8 + 1;
		puVar9 = puVar9 + 0x170;
	} while (iVar8 < 8);
	pcVar1 = puVar4 + param_1 + 0xb8;
	if ((*pcVar1 == '\x02') && (puVar2 = (uint *)(puVar4 + param_1 + 0xb4), uVar6 = 1 << (ulonglong)*puVar2 - 1, (uVar6 & *(uint *)(puVar10 + 0x118) | (int)uVar6 >> 0x1f & *(uint *)(puVar10 + 0x114)) == 0)) {
		puVar3 = *(undefined4 **)((int)uVar5 + -0x76bc);
		*puVar2 = 0xffffffff;
		*pcVar1 = '\x04';
		*puVar3 = 0xff;
	}
	return;
}

void CalcPlrStaff(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint *puVar1;
	undefined *puVar2;
	uint uVar3;
	uint uVar4;
	undefined *puVar5;

	puVar5 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	puVar2 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	*(undefined4 *)(puVar5 + 0x5564) = 0;
	puVar1 = (uint *)(puVar5 + 0x5560);
	*puVar1 = 0;
	if (((*(int *)(puVar2 + 0xa60) != -1) && (*(int *)(puVar2 + 0xbbc) != 0)) && (0 < *(int *)(puVar2 + 0xb3c))) {
		uVar4 = 1;
		uVar3 = SetCursorPos(0, 1, (ulonglong) * (uint *)(puVar2 + 0xb38) - 1, param_4, param_5, param_6,
		    param_7, param_8);
		*(uint *)(puVar5 + 0x5564) = *(uint *)(puVar5 + 0x5564) | uVar4;
		*puVar1 = *puVar1 | uVar3;
	}
	return;
}

void CalcSelfItems(int param_1)

{
	bool bVar1;
	int iVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;
	longlong lVar7;

	puVar3 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	lVar7 = 7;
	puVar6 = puVar3 + 0x498;
	iVar2 = 0;
	iVar4 = 0;
	iVar5 = 0;
	do {
		if ((*(int *)(puVar6 + 8) != -1) && (*(undefined4 *)(puVar6 + 0x164) = 1, *(int *)(puVar6 + 0x38) != 0)) {
			iVar2 = iVar2 + *(int *)(puVar6 + 0x100);
			iVar4 = iVar4 + *(int *)(puVar6 + 0x104);
			iVar5 = iVar5 + *(int *)(puVar6 + 0x108);
		}
		puVar6 = puVar6 + 0x170;
		lVar7 = lVar7 + -1;
	} while (lVar7 != 0);
	do {
		puVar6 = puVar3 + 0x498;
		lVar7 = 7;
		bVar1 = false;
		do {
			if (((*(int *)(puVar6 + 8) != -1) && (*(int *)(puVar6 + 0x164) != 0)) && (*(int *)(puVar3 + 0x174) + iVar5 < (int)(char)puVar6[0x162] || (*(int *)(puVar3 + 0x16c) + iVar4 < (int)(uint)(byte)puVar6[0x161] || *(int *)(puVar3 + 0x164) + iVar2 < (int)(char)puVar6[0x160]))) {
				*(undefined4 *)(puVar6 + 0x164) = 0;
				bVar1 = true;
				if (*(int *)(puVar6 + 0x38) != 0) {
					iVar2 = iVar2 - *(int *)(puVar6 + 0x100);
					iVar4 = iVar4 - *(int *)(puVar6 + 0x104);
					iVar5 = iVar5 - *(int *)(puVar6 + 0x108);
				}
			}
			puVar6 = puVar6 + 0x170;
			lVar7 = lVar7 + -1;
		} while (lVar7 != 0);
	} while (bVar1);
	return;
}

undefined8 ItemMinStats(int param_1, int param_2)

{
	if (*(int *)(param_1 + 0x168) < (int)(uint) * (byte *)(param_2 + 0x161)) {
		return 0;
	}
	if (*(int *)(param_1 + 0x160) < (int)*(char *)(param_2 + 0x160)) {
		return 0;
	}
	if (*(int *)(param_1 + 0x170) < (int)*(char *)(param_2 + 0x162)) {
		return 0;
	}
	return 1;
}

void CalcPlrItemMin(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	undefined8 uVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;

	puVar3 = PTR_DAT_100f1828 + param_1 * 0x55ec;
	iVar4 = *(int *)(puVar3 + 0x4828);
	puVar5 = puVar3 + 0xea8;
	while (true) {
		bVar1 = iVar4 == 0;
		iVar4 = iVar4 + -1;
		if (bVar1)
			break;
		uVar2 = ItemMinStats((int)puVar3, (int)puVar5);
		*(int *)(puVar5 + 0x164) = (int)uVar2;
		puVar5 = puVar5 + 0x170;
	}
	puVar5 = puVar3 + 0x4854;
	iVar4 = 7;
	do {
		if (*(int *)(puVar5 + 8) != -1) {
			uVar2 = ItemMinStats((int)puVar3, (int)puVar5);
			*(int *)(puVar5 + 0x164) = (int)uVar2;
		}
		bVar1 = iVar4 != 0;
		puVar5 = puVar5 + 0x170;
		iVar4 = iVar4 + -1;
	} while (bVar1);
	return;
}

void CalcPlrBookVals(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	uint uVar1;
	undefined *puVar2;
	ulonglong uVar3;
	undefined **ppuVar4;
	ulonglong uVar5;
	undefined8 uVar6;
	longlong lVar7;
	int iVar8;
	undefined *puVar9;
	undefined *puVar10;

	puVar2 = PTR_DAT_100f1934;
	uVar3 = ZEXT48(&toc);
	ppuVar4 = &toc;
	if (*PTR_DAT_100f17ec == '\0') {
		iVar8 = 1;
		puVar10 = PTR_DAT_100f1e58;
		while (true) {
			ppuVar4 = (undefined **)uVar3;
			if (*(int *)(puVar10 + 0x178) == -1)
				break;
			WitchBookLevel(iVar8);
			uVar5 = StoreStatOk((int)(puVar10 + 0x170));
			*(int *)(puVar10 + 0x2d4) = (int)uVar5;
			iVar8 = iVar8 + 1;
			puVar10 = puVar10 + 0x170;
		}
	}
	puVar9 = ppuVar4[-0x1dea] + param_1 * 0x55ec;
	iVar8 = 0;
	puVar10 = puVar9;
	while (iVar8 < *(int *)(puVar9 + 0x4828)) {
		if ((*(int *)(puVar10 + 0xeb0) == 0) && (*(int *)(puVar10 + 0xf84) == 0x18)) {
			puVar10[0x1009] = (char)*(undefined4 *)(puVar2 + *(int *)(puVar10 + 0xf88) * 0x38 + 0x1c);
			lVar7 = (longlong)(char)puVar9[*(int *)(puVar10 + 0xf88) + 0xc1];
			while ((int)lVar7 != 0) {
				lVar7 = lVar7 + -1;
				puVar10[0x1009] = puVar10[0x1009] + (char)((int)((uint)(byte)puVar10[0x1009] * 0x14) / 100);
				uVar1 = (int)((uint)(byte)puVar10[0x1009] * 0x14) / 100;
				if (0xff < (int)((uint)(byte)puVar10[0x1009] + uVar1 + (uVar1 >> 0x1f))) {
					puVar10[0x1009] = 0xff;
					lVar7 = 0;
				}
			}
			uVar6 = ItemMinStats((int)puVar9, (int)(puVar10 + 0xea8));
			*(int *)(puVar10 + 0x100c) = (int)uVar6;
		}
		puVar10 = puVar10 + 0x170;
		iVar8 = iVar8 + 1;
	}
	return;
}

void CalcPlrInv(ulonglong param_1, int param_2, ulonglong param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	int iVar3;
	undefined uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined7 uVar13;
	undefined uVar14;
	undefined7 uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;

	puVar1 = PTR_DAT_100f1824;
	uVar15 = (undefined7)(param_8 >> 8);
	uVar16 = (undefined)param_8;
	uVar13 = (undefined7)(param_7 >> 8);
	uVar14 = (undefined)param_7;
	uVar11 = (undefined7)(param_6 >> 8);
	uVar12 = (undefined)param_6;
	uVar9 = (undefined7)(param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar7 = (undefined7)(param_4 >> 8);
	uVar8 = (undefined)param_4;
	uVar5 = (undefined7)(param_3 >> 8);
	uVar6 = (undefined)param_3;
	uVar4 = (undefined)param_2;
	ppuVar2 = &toc;
	iVar3 = (int)param_1;
	CalcPlrItemMin(iVar3, uVar4, uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffb8);
	CalcSelfItems(iVar3);
	CalcPlrItemVals(param_1, param_2, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
	    CONCAT71(uVar11, uVar12), CONCAT71(uVar13, uVar14), CONCAT71(uVar15, uVar16),
	    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc);
	CalcPlrItemMin(iVar3, uVar4, uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffb8);
	if (iVar3 == *(int *)puVar1) {
		CalcPlrBookVals(iVar3, uVar4, uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffb8);
		CalcPlrScrolls(iVar3, uVar4, uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffb8);
		CalcPlrStaff(iVar3, uVar4, uVar6, uVar8, uVar10, uVar12, uVar14, uVar16, in_stack_ffffffb8);
	}
	if ((iVar3 == *(int *)puVar1) && (*ppuVar2[-0x1df9] == '\0')) {
		RecalcStoreStats((char)ppuVar2[-0x1df9], uVar4, uVar6, uVar8, uVar10, uVar12, uVar14, uVar16,
		    in_stack_ffffffb8);
	}
	return;
}

void SetPlrHandItem(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	iVar1 = param_2 * 0x4c;
	memset((char)param_1, 0x70, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffbb,
	    in_stack_ffffffbf, local_3c);
	*(int *)(param_1 + 8) = (int)*(char *)(iVar1 + 0x100fc834);
	*(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(iVar1 + 0x100fc830);
	strcpy(param_1 + 0x3d, *(int *)(iVar1 + 0x100fc838));
	strcpy(param_1 + 0x7d, *(int *)(iVar1 + 0x100fc838));
	*(undefined *)(param_1 + 0xbd) = *(undefined *)(iVar1 + 0x100fc82d);
	*(undefined *)(param_1 + 0xbe) = *(undefined *)(iVar1 + 0x100fc82c);
	*(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(iVar1 + 0x100fc848);
	*(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar1 + 0x100fc84c);
	*(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(iVar1 + 0x100fc850);
	*(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(iVar1 + 0x100fc860);
	*(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar1 + 0x100fc864);
	if (*(int *)(iVar1 + 0x100fc860) == 0x17) {
		*(undefined4 *)(param_1 + 0xe4) = 0x28;
	}
	*(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xe4);
	*(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(iVar1 + 0x100fc844);
	*(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(iVar1 + 0x100fc844);
	*(undefined *)(param_1 + 0x160) = *(undefined *)(iVar1 + 0x100fc858);
	*(undefined *)(param_1 + 0x161) = *(undefined *)(iVar1 + 0x100fc859);
	*(undefined *)(param_1 + 0x162) = *(undefined *)(iVar1 + 0x100fc85a);
	*(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(iVar1 + 0x100fc86c);
	*(undefined4 *)(param_1 + 200) = *(undefined4 *)(iVar1 + 0x100fc86c);
	*(undefined *)(param_1 + 0x14c) = 0xff;
	*(undefined *)(param_1 + 0x14d) = 0xff;
	*(int *)(param_1 + 0x168) = param_2;
	*(undefined *)(param_1 + 0x3c) = 0;
	return;
}

void GetPlrHandSeed(undefined4 *param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	undefined4 in_stack_ffffffc8;

	uVar1 = GetRndSeed((char)param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8);
	*param_1 = uVar1;
	return;
}

void GetGoldSeed(int param_1, int *param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	bool bVar2;
	undefined *puVar3;
	undefined *puVar4;
	uint *puVar5;
	ulonglong uVar6;
	ulonglong uVar7;
	int iVar8;
	ulonglong uVar9;
	longlong lVar10;
	longlong lVar11;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	ulonglong uVar16;
	ulonglong uVar17;
	undefined4 in_stack_ffffffa8;

	puVar5 = _DAT_100f1dec;
	puVar4 = PTR_DAT_100f1940;
	puVar3 = PTR_DAT_100f1824;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	lVar12 = (longlong)param_5;
	lVar11 = (longlong)param_4;
	lVar10 = (longlong)param_3;
	uVar9 = SEXT48((int)param_2);
	uVar7 = ZEXT48(PTR_DAT_100f1828);
	uVar17 = (ulonglong)_DAT_100f1df0;
	uVar16 = uVar7 + (longlong)param_1 * 0x55ec;
	do {
		bVar2 = true;
		uVar7 = GetRndSeed((char)uVar7, (char)uVar9, (char)lVar10, (char)lVar11, (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, in_stack_ffffffa8);
		uVar6 = (ulonglong)*puVar5;
		iVar8 = (int)uVar7;
		uVar9 = uVar17;
		if (0 < (int)*puVar5) {
			do {
				if (iVar8 == *(int *)(puVar4 + *(int *)uVar9 * 0x170)) {
					bVar2 = false;
				}
				uVar9 = uVar9 + 4;
				uVar6 = uVar6 - 1;
			} while (uVar6 != 0);
		}
		if ((param_1 == *(int *)puVar3) && (uVar1 = *(uint *)((int)uVar16 + 0x4828), uVar6 = (ulonglong)uVar1, uVar9 = uVar16, 0 < (int)uVar1)) {
			do {
				if (iVar8 == *(int *)((int)uVar9 + 0xea8)) {
					bVar2 = false;
				}
				uVar9 = uVar9 + 0x170;
				uVar6 = uVar6 - 1;
			} while (uVar6 != 0);
		}
	} while (!bVar2);
	*param_2 = iVar8;
	return;
}

void SetPlrHandSeed(undefined4 *param_1, undefined4 param_2)

{
	*param_1 = param_2;
	return;
}

void SetPlrHandGoldCurs(int param_1)

{
	if (0x9c3 < *(int *)(param_1 + 0xc4)) {
		*(undefined4 *)(param_1 + 0xc0) = 6;
		return;
	}
	if (*(int *)(param_1 + 0xc4) < 0x3e9) {
		*(undefined4 *)(param_1 + 0xc0) = 4;
		return;
	}
	*(undefined4 *)(param_1 + 0xc0) = 5;
	return;
}

void CreatePlrItems(ulonglong uParm1, undefined8 uParm2, undefined param_3, undefined param_4,
    ulonglong uParm5, undefined8 uParm6, undefined8 uParm7, undefined8 uParm8)

{
	char cVar1;
	undefined4 uVar2;
	int iVar3;
	int iVar4;
	uint *puVar5;
	undefined *puVar6;
	undefined4 *puVar7;
	undefined uVar8;
	undefined uVar9;
	undefined7 uVar10;
	undefined uVar11;
	undefined7 uVar12;
	undefined uVar13;
	undefined7 uVar14;
	undefined uVar15;
	longlong lVar16;
	longlong lVar17;
	ulonglong uVar18;
	longlong lVar19;
	longlong lVar20;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;
	undefined4 in_stack_ffffffbc;

	puVar6 = PTR_DAT_100f1828;
	uVar15 = (undefined)uParm8;
	uVar14 = (undefined7)((ulonglong)uParm8 >> 8);
	uVar13 = (undefined)uParm7;
	uVar12 = (undefined7)((ulonglong)uParm7 >> 8);
	uVar11 = (undefined)uParm6;
	uVar10 = (undefined7)((ulonglong)uParm6 >> 8);
	uVar18 = ZEXT48(PTR_DAT_100f1828);
	lVar17 = uParm1 * 0x55ec;
	lVar16 = uVar18 + lVar17;
	iVar3 = (int)lVar16;
	*(undefined4 *)(iVar3 + 0x4a0) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x610) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x780) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x8f0) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0xa60) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0xbd0) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0xd40) = 0xffffffff;
	memset((char)lVar16 + ',', 0x28, param_3, param_4, (char)uParm5, uVar11, uVar13, uVar15,
	    (char)in_stack_ffffffa8, in_stack_ffffffaf, local_4c);
	uVar9 = (undefined)uParm5;
	lVar16 = lVar16 + 0xea8;
	lVar19 = 4;
	do {
		iVar4 = (int)lVar16;
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
		lVar16 = lVar16 + 0xe60;
		lVar19 = lVar19 + -1;
	} while (lVar19 != 0);
	puVar5 = (uint *)(puVar6 + (int)lVar17 + 0x4828);
	*puVar5 = 0;
	puVar7 = (undefined4 *)(iVar3 + 0x4854);
	*(undefined4 *)(iVar3 + 0x485c) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x49cc) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x4b3c) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x4cac) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x4e1c) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x4f8c) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x50fc) = 0xffffffff;
	*(undefined4 *)(iVar3 + 0x526c) = 0xffffffff;
	cVar1 = puVar6[(int)lVar17 + 0x15c];
	if (cVar1 == '\x01') {
		uVar8 = 4;
		SetPlrHandItem((int)(undefined4 *)(iVar3 + 0xa58), 4, param_3, param_4, uVar9, uVar11, uVar13, uVar15,
		    in_stack_ffffffa8);
		GetPlrHandSeed((undefined4 *)(iVar3 + 0xa58), uVar8, param_3, param_4, (char)uParm5, uVar11, uVar13,
		    uVar15, in_stack_ffffffa8);
		uVar9 = 0x18;
		SetPlrHandItem((int)puVar7, 0x18, param_3, param_4, (char)uParm5, uVar11, uVar13, uVar15,
		    in_stack_ffffffa8);
		GetPlrHandSeed(puVar7, uVar9, param_3, param_4, (char)uParm5, uVar11, uVar13, uVar15, in_stack_ffffffa8);
		uVar9 = 0x18;
		SetPlrHandItem((int)(undefined4 *)(iVar3 + 0x49c4), 0x18, param_3, param_4, (char)uParm5, uVar11, uVar13, uVar15, in_stack_ffffffa8);
		GetPlrHandSeed((undefined4 *)(iVar3 + 0x49c4), uVar9, param_3, param_4, (char)uParm5, uVar11, uVar13,
		    uVar15, in_stack_ffffffa8);
	} else {
		if (cVar1 < '\x01') {
			if (-1 < cVar1) {
				uVar8 = 1;
				SetPlrHandItem((int)(undefined4 *)(iVar3 + 0xa58), 1, param_3, param_4, uVar9, uVar11, uVar13, uVar15, in_stack_ffffffa8);
				GetPlrHandSeed((undefined4 *)(iVar3 + 0xa58), uVar8, param_3, param_4, uVar9, uVar11, uVar13, uVar15,
				    in_stack_ffffffa8);
				uVar8 = 2;
				SetPlrHandItem((int)(undefined4 *)(iVar3 + 0xbc8), 2, param_3, param_4, uVar9, uVar11, uVar13, uVar15, in_stack_ffffffa8);
				GetPlrHandSeed((undefined4 *)(iVar3 + 0xbc8), uVar8, param_3, param_4, uVar9, uVar11, uVar13, uVar15,
				    in_stack_ffffffa8);
				uVar8 = 3;
				SetPlrHandItem((int)(undefined4 *)(iVar3 + 0x53d4), 3, param_3, param_4, uVar9, uVar11, uVar13,
				    uVar15, in_stack_ffffffa8);
				GetPlrHandSeed((undefined4 *)(iVar3 + 0x53d4), uVar8, param_3, param_4, uVar9, uVar11, uVar13, uVar15, in_stack_ffffffa8);
				param_3 = 1;
				param_4 = 3;
				uParm5 = 1;
				AutoPlace((int)uParm1, 0, 1, 3, 1, uVar11, uVar13, uVar15, in_stack_ffffffa8);
				uVar9 = 0x18;
				SetPlrHandItem((int)puVar7, 0x18, param_3, param_4, (char)uParm5, uVar11, uVar13, uVar15,
				    in_stack_ffffffa8);
				GetPlrHandSeed(puVar7, uVar9, param_3, param_4, (char)uParm5, uVar11, uVar13, uVar15,
				    in_stack_ffffffa8);
				uVar9 = 0x18;
				SetPlrHandItem((int)(undefined4 *)(iVar3 + 0x49c4), 0x18, param_3, param_4, (char)uParm5, uVar11,
				    uVar13, uVar15, in_stack_ffffffa8);
				GetPlrHandSeed((undefined4 *)(iVar3 + 0x49c4), uVar9, param_3, param_4, (char)uParm5, uVar11, uVar13, uVar15, in_stack_ffffffa8);
			}
		} else {
			if (cVar1 < '\x03') {
				uVar8 = 5;
				SetPlrHandItem((int)(undefined4 *)(iVar3 + 0xa58), 5, param_3, param_4, uVar9, uVar11, uVar13, uVar15, in_stack_ffffffa8);
				GetPlrHandSeed((undefined4 *)(iVar3 + 0xa58), uVar8, param_3, param_4, (char)uParm5, uVar11, uVar13,
				    uVar15, in_stack_ffffffa8);
				uVar9 = 0x19;
				SetPlrHandItem((int)puVar7, 0x19, param_3, param_4, (char)uParm5, uVar11, uVar13, uVar15,
				    in_stack_ffffffa8);
				GetPlrHandSeed(puVar7, uVar9, param_3, param_4, (char)uParm5, uVar11, uVar13, uVar15,
				    in_stack_ffffffa8);
				uVar9 = 0x19;
				SetPlrHandItem((int)(undefined4 *)(iVar3 + 0x49c4), 0x19, param_3, param_4, (char)uParm5, uVar11,
				    uVar13, uVar15, in_stack_ffffffa8);
				GetPlrHandSeed((undefined4 *)(iVar3 + 0x49c4), uVar9, param_3, param_4, (char)uParm5, uVar11, uVar13, uVar15, in_stack_ffffffa8);
			}
		}
	}
	uVar9 = 0;
	SetPlrHandItem((int)(undefined4 *)(iVar3 + 0x53d4), 0, param_3, param_4, (char)uParm5, uVar11, uVar13,
	    uVar15, in_stack_ffffffa8);
	GetPlrHandSeed((undefined4 *)(iVar3 + 0x53d4), uVar9, param_3, param_4, (char)uParm5, uVar11, uVar13,
	    uVar15, in_stack_ffffffa8);
	lVar19 = uVar18 + lVar17;
	lVar16 = lVar19 + 0x53cc;
	iVar3 = (int)(uVar18 + lVar17);
	*(undefined4 *)(iVar3 + 0x5498) = 100;
	*(undefined4 *)((int)lVar19 + 0x5494) = 4;
	lVar20 = 0x2e;
	*(undefined4 *)((int)lVar19 + 0x1c8) = *(undefined4 *)(iVar3 + 0x5498);
	lVar19 = lVar19 + (ulonglong)*puVar5 * 0x170 + 0xea0;
	do {
		lVar16 = lVar16 + 8;
		uVar2 = ((undefined4 *)lVar16)[1];
		lVar19 = lVar19 + 8;
		*(undefined4 *)lVar19 = *(undefined4 *)lVar16;
		((undefined4 *)lVar19)[1] = uVar2;
		lVar20 = lVar20 + -1;
	} while (lVar20 != 0);
	*puVar5 = *puVar5 + 1;
	*(undefined *)((int)(uVar18 + lVar17) + 0x484a) = (char)*puVar5;
	CalcPlrItemVals(uParm1, 0, uVar18 + lVar17, uVar18 + lVar17, uParm5, CONCAT71(uVar10, uVar11),
	    CONCAT71(uVar12, uVar13), CONCAT71(uVar14, uVar15), in_stack_ffffffa8, in_stack_ffffffaf,
	    in_stack_ffffffbc);
	return;
}

undefined8 ItemSpaceOk(int param_1, int param_2)

{
	char cVar1;
	char cVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if ((((param_1 < 0) || (0x6f < param_1)) || (param_2 < 0)) || (0x6f < param_2)) {
		return 0;
	}
	if (*(short *)(*(int *)PTR_DAT_100f1954 + param_1 * 0xe0 + param_2 * 2) != 0) {
		return 0;
	}
	iVar4 = param_1 * 0x70;
	iVar5 = iVar4 + param_2;
	if (*(char *)(*(int *)PTR_DAT_100f1950 + iVar5) != '\0') {
		return 0;
	}
	if (*(char *)(*(int *)PTR_DAT_100f1944 + iVar5) != '\0') {
		return 0;
	}
	iVar3 = *(int *)PTR_DAT_100f194c;
	cVar2 = *(char *)(iVar3 + iVar5);
	if (cVar2 != '\0') {
		if (cVar2 < '\x01') {
			iVar5 = -((int)cVar2 + 1);
		} else {
			iVar5 = (int)cVar2 + -1;
		}
		if (*(int *)(PTR_DAT_100f1948 + iVar5 * 0x78 + 0x38) != 0) {
			return 0;
		}
	}
	cVar2 = *(char *)(iVar3 + iVar4 + param_2 + 0x71);
	if ('\0' < cVar2) {
		if (PTR_DAT_100f1948[((int)cVar2 + -1) * 0x78 + 0x40] != '\0') {
			return 0;
		}
	}
	if (cVar2 < '\0') {
		if (PTR_DAT_100f1948[((int)cVar2 + 1) * -0x78 + 0x40] != '\0') {
			return 0;
		}
	}
	iVar4 = iVar3 + iVar4 + param_2;
	cVar2 = *(char *)(iVar4 + 0x70);
	if ('\0' < cVar2) {
		cVar1 = *(char *)(iVar4 + 1);
		if ('\0' < cVar1) {
			if (((PTR_DAT_100f1948 + 0x40)[((int)cVar2 + -1) * 0x78] != '\0') && ((PTR_DAT_100f1948 + 0x40)[((int)cVar1 + -1) * 0x78] != '\0')) {
				return 0;
			}
		}
	}
	if (*(char *)(_DAT_100f1da4 + (int)*(short *)(*(int *)PTR_DAT_100f1a54 + param_1 * 0xe0 + param_2 * 2)) != '\0') {
		return 0;
	}
	return 1;
}

undefined8
GetItemSpace(int param_1, int param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	bool bVar1;
	undefined *puVar2;
	undefined *puVar3;
	ulonglong uVar4;
	int iVar5;
	longlong lVar6;
	undefined8 uVar7;
	int *piVar8;
	longlong lVar9;
	int iVar10;
	longlong lVar11;
	int iVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	undefined4 *puVar16;
	undefined4 *puVar17;
	longlong lVar18;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	puVar3 = PTR_DAT_100f1e54;
	puVar2 = PTR_DAT_100f1940;
	lVar15 = (longlong)param_8;
	lVar14 = (longlong)param_7;
	lVar13 = (longlong)param_6;
	lVar11 = (longlong)param_5;
	lVar9 = (longlong)param_4;
	lVar6 = (longlong)param_3;
	uVar4 = ZEXT48(&toc);
	iVar10 = param_2 + -1;
	puVar16 = (undefined4 *)PTR_DAT_100f1e54;
	while (iVar5 = (int)uVar4, iVar10 <= param_2 + 1) {
		iVar5 = param_1 + -1;
		puVar17 = puVar16;
		while (iVar5 <= param_1 + 1) {
			uVar7 = ItemSpaceOk(iVar5, iVar10);
			*puVar17 = (int)uVar7;
			puVar17 = puVar17 + 3;
			iVar5 = iVar5 + 1;
		}
		puVar16 = puVar16 + 1;
		iVar10 = iVar10 + 1;
	}
	lVar18 = 3;
	bVar1 = false;
	piVar8 = (int *)puVar3;
	do {
		if (*piVar8 != 0) {
			bVar1 = true;
		}
		if (piVar8[3] != 0) {
			bVar1 = true;
		}
		if (piVar8[6] != 0) {
			bVar1 = true;
		}
		piVar8 = piVar8 + 1;
		lVar18 = lVar18 + -1;
	} while (lVar18 != 0);
	lVar6 = random(0xd, 0xf, (char)lVar6, (char)lVar9, (char)lVar11, (char)lVar13, (char)lVar14,
	    (char)lVar15, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
	lVar6 = lVar6 + 1;
	if (bVar1) {
		iVar12 = 0;
		iVar10 = 0;
		while (0 < (int)lVar6) {
			if (*(int *)(puVar3 + iVar12 * 0xc + iVar10 * 4) != 0) {
				lVar6 = lVar6 + -1;
			}
			if ((0 < (int)lVar6) && (iVar12 = iVar12 + 1, iVar12 == 3)) {
				iVar10 = iVar10 + 1;
				iVar12 = 0;
				if (iVar10 == 3) {
					iVar10 = 0;
				}
			}
		}
		iVar12 = iVar12 + param_1 + -1;
		piVar8 = *(int **)(iVar5 + -0x768c);
		iVar10 = iVar10 + param_2 + -1;
		*(int *)(puVar2 + (int)param_3 * 0x170 + 0xc) = iVar12;
		*(int *)(puVar2 + (int)param_3 * 0x170 + 0x10) = iVar10;
		uVar7 = 1;
		*(char *)(*piVar8 + iVar12 * 0x70 + iVar10) = param_3 + '\x01';
	} else {
		uVar7 = 0;
	}
	return uVar7;
}

void GetSuperItemSpace(int param_1, int param_2, char param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int *piVar1;
	undefined *puVar2;
	ulonglong uVar3;
	undefined8 uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	undefined4 in_stack_ffffffa8;

	puVar2 = PTR_DAT_100f1940;
	uVar3 = ZEXT48(&toc);
	uVar4 = GetItemSpace(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffa8);
	if ((int)uVar4 == 0) {
		iVar7 = 2;
		do {
			iVar6 = -iVar7;
			while (iVar6 <= iVar7) {
				iVar8 = param_2 + iVar6;
				iVar5 = -iVar7;
				while (iVar5 <= iVar7) {
					iVar9 = param_1 + iVar5;
					uVar4 = ItemSpaceOk(iVar9, iVar8);
					if ((int)uVar4 != 0) {
						piVar1 = *(int **)((int)uVar3 + -0x768c);
						*(int *)(puVar2 + (int)param_3 * 0x170 + 0xc) = iVar9;
						*(int *)(puVar2 + (int)param_3 * 0x170 + 0x10) = iVar8;
						*(char *)(*piVar1 + iVar9 * 0x70 + iVar8) = param_3 + '\x01';
						return;
					}
					iVar5 = iVar5 + 1;
				}
				iVar6 = iVar6 + 1;
			}
			iVar7 = iVar7 + 1;
		} while (iVar7 < 0x32);
	}
	return;
}

void GetSuperItemLoc(int param_1, int param_2, int *param_3, int *param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined8 uVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar4 = 1;
	do {
		iVar3 = -iVar4;
		while (iVar3 <= iVar4) {
			*param_4 = param_2 + iVar3;
			iVar2 = -iVar4;
			while (iVar2 <= iVar4) {
				*param_3 = param_1 + iVar2;
				uVar1 = ItemSpaceOk(*param_3, *param_4);
				if ((int)uVar1 != 0) {
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

void CalcItemValue(int param_1)

{
	longlong lVar1;
	undefined *puVar2;
	undefined4 uVar3;

	param_1 = param_1 * 0x170;
	puVar2 = PTR_DAT_100f1940 + param_1;
	lVar1 = (ulonglong) * (uint *)(puVar2 + 0x154) + (ulonglong) * (uint *)(puVar2 + 0x15c);
	if (lVar1 != 0) {
		lVar1 = (longlong)(int)lVar1 * (longlong) * (int *)(puVar2 + 0xc4);
	}
	if ((int)lVar1 < 0) {
		lVar1 = (longlong)(*(int *)(PTR_DAT_100f1940 + param_1 + 0xc4) / (int)lVar1);
	}
	lVar1 = (ulonglong) * (uint *)(PTR_DAT_100f1940 + param_1 + 0x150) + (ulonglong) * (uint *)(PTR_DAT_100f1940 + param_1 + 0x158) + lVar1;
	uVar3 = (undefined4)lVar1;
	if (lVar1 < 1) {
		uVar3 = 1;
	}
	*(undefined4 *)(PTR_DAT_100f1940 + param_1 + 200) = uVar3;
	return;
}

void GetBookSpell(int param_1, longlong param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	char cVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	longlong lVar4;
	undefined *puVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int unaff_r25;
	undefined *puVar9;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined1 in_stack_ffffffbb;

	puVar2 = PTR_DAT_100f1940;
	puVar5 = PTR_DAT_100f1934;
	iVar6 = (int)param_2;
	ppuVar3 = &toc;
	if (param_2 == 0) {
		iVar6 = 1;
	}
	lVar4 = random(0xe, 0x25, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8,
	    in_stack_ffffffaf, in_stack_ffffffbb);
	lVar4 = lVar4 + 1;
	iVar8 = 1;
	while (0 < (int)lVar4) {
		if ((*(int *)(puVar5 + iVar8 * 0x38 + 0xc) != -1) && (*(int *)(puVar5 + iVar8 * 0x38 + 0xc) <= iVar6)) {
			lVar4 = lVar4 + -1;
			unaff_r25 = iVar8;
		}
		iVar7 = iVar8 + 1;
		if ((*ppuVar3[-0x1dfc] == '\x01') && (iVar7 == 0x20)) {
			iVar7 = iVar8 + 2;
		}
		iVar8 = iVar7;
		if ((*ppuVar3[-0x1dfc] == '\x01') && (iVar8 = iVar7, iVar7 == 0x22)) {
			iVar8 = 0x23;
		}
		if (iVar8 == 0x25) {
			iVar8 = 1;
		}
	}
	param_1 = param_1 * 0x170;
	puVar9 = puVar2 + param_1;
	strcat((int)(puVar9 + 0x3d), *(int *)(puVar5 + unaff_r25 * 0x38 + 4));
	strcat((int)(puVar9 + 0x7d), *(int *)(puVar5 + unaff_r25 * 0x38 + 4));
	*(int *)(puVar9 + 0xe0) = unaff_r25;
	puVar5 = puVar5 + unaff_r25 * 0x38;
	puVar9[0x161] = (char)*(undefined4 *)(puVar5 + 0x1c);
	iVar6 = *(int *)(puVar5 + 0x30);
	*(int *)(puVar9 + 0xc4) = *(int *)(puVar9 + 0xc4) + iVar6;
	*(int *)(puVar9 + 200) = *(int *)(puVar9 + 200) + iVar6;
	cVar1 = puVar5[2];
	if (cVar1 == '\0') {
		*(undefined4 *)(puVar9 + 0xc0) = 0x57;
	}
	if (cVar1 == '\x01') {
		*(undefined4 *)(puVar2 + param_1 + 0xc0) = 0x58;
	}
	if (cVar1 == '\x02') {
		*(undefined4 *)(puVar2 + param_1 + 0xc0) = 0x56;
	}
	return;
}

void GetStaffPower(int param_1, char param_2, int param_3, int param_4, uint param_5, undefined8 param_6,
    int param_7, undefined4 param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	longlong lVar6;
	undefined8 uVar7;
	longlong lVar8;
	ulonglong uVar9;
	longlong lVar10;
	int iVar11;
	undefined8 unaff_r23;
	int iVar12;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	int iVar13;
	undefined8 unaff_r27;
	undefined *puVar14;
	undefined8 unaff_r28;
	byte *pbVar15;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffb28;
	undefined in_stack_fffffb2f;
	undefined in_stack_fffffb3b;
	undefined4 in_stack_fffffb3c;
	undefined4 in_stack_fffffb40;
	undefined4 in_stack_fffffb44;
	undefined4 in_stack_fffffb48;
	undefined4 in_stack_fffffb4c;
	undefined4 in_stack_fffffb50;
	undefined4 in_stack_fffffb54;
	undefined auStack1192[128];
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

	puVar4 = PTR_s__s__s_100f305c;
	puVar3 = PTR_DAT_100f1940;
	ppuVar5 = &toc;
	local_24 = (undefined4)((ulonglong)unaff_r23 >> 0x20);
	uStack32 = (undefined4)((ulonglong)unaff_r24 >> 0x20);
	uStack28 = (undefined4)((ulonglong)unaff_r25 >> 0x20);
	uStack24 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar9 = ZEXT48(&PTR_DAT_100ff6c4);
	lVar6 = random(0xf, 10, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7,
	    (char)param_8, in_stack_fffffb28, in_stack_fffffb2f, in_stack_fffffb3b);
	iVar11 = (int)param_6;
	iVar13 = -1;
	if (((int)lVar6 == 0) || (param_4 != 0)) {
		iVar12 = 0;
		lVar10 = 0;
		lVar6 = 0;
		while (true) {
			iVar11 = (int)param_6;
			param_5 = (uint)lVar10;
			iVar2 = (int)uVar9;
			if (*(int *)(iVar2 + 4) == -1)
				break;
			lVar8 = lVar6;
			iVar11 = iVar12;
			if (((*(uint *)(iVar2 + 0x14) & 0x100) != 0) && (lVar8 = lVar6, iVar11 = iVar12, *(char *)(iVar2 + 0x10) <= param_2)) {
				param_6 = 1;
				if ((param_4 != 0) && (*(int *)(iVar2 + 0x20) == 0)) {
					param_6 = 0;
				}
				lVar8 = lVar6;
				iVar11 = iVar12;
				if ((int)param_6 != 0) {
					iVar1 = (int)(ZEXT48(register0x0000000c) - 0x428);
					*(uint *)(iVar1 + iVar12) = param_5;
					lVar8 = lVar6 + 1;
					iVar11 = iVar12 + 4;
					if (*(int *)(iVar2 + 0x1c) != 0) {
						*(uint *)(iVar1 + iVar12 + 4) = param_5;
						lVar8 = lVar6 + 2;
						iVar11 = iVar12 + 8;
					}
				}
			}
			iVar12 = iVar11;
			uVar9 = uVar9 + 0x30;
			lVar10 = lVar10 + 1;
			lVar6 = lVar8;
		}
		if ((int)lVar6 != 0) {
			lVar6 = random(0x10, lVar6, (char)(ZEXT48(register0x0000000c) - 0x428), (char)uVar9,
			    (char)lVar10, (char)param_6, (char)param_7, (char)param_8, in_stack_fffffb28,
			    in_stack_fffffb2f, in_stack_fffffb3b);
			iVar13 = local_428[(int)lVar6];
			iVar12 = iVar13 * 0x30;
			sprintf((int)auStack1192, puVar4, (&PTR_DAT_100ff6c4)[iVar13 * 0xc],
			    puVar3 + param_1 * 0x170 + 0x7d, param_5, iVar11, param_7, param_8, in_stack_fffffb28,
			    in_stack_fffffb2f, in_stack_fffffb3c, in_stack_fffffb40, in_stack_fffffb44,
			    in_stack_fffffb48, in_stack_fffffb4c, in_stack_fffffb50, in_stack_fffffb54);
			strcpy((int)(puVar3 + param_1 * 0x170 + 0x7d), (int)auStack1192);
			(puVar3 + param_1 * 0x170)[0x3c] = 1;
			param_5 = *(uint *)(iVar12 + 0x100ff6e8);
			iVar11 = *(int *)(iVar12 + 0x100ff6ec);
			param_7 = *(int *)(iVar12 + 0x100ff6f0);
			SaveItemPower(param_1, *(uint *)(iVar12 + 0x100ff6c8), (ulonglong) * (uint *)(iVar12 + 0x100ff6cc),
			    (ulonglong) * (uint *)(iVar12 + 0x100ff6d0), (ulonglong)param_5, iVar11, param_7,
			    (char)param_8, in_stack_fffffb28);
			(puVar3 + param_1 * 0x170)[0x14c] = (char)*(uint *)(iVar12 + 0x100ff6c8);
		}
	}
	puVar14 = puVar3 + param_1 * 0x170;
	pbVar15 = puVar14 + 0x7d;
	uVar7 = control_WriteStringToBuffer(pbVar15);
	if ((int)uVar7 == 0) {
		strcpy((int)pbVar15, (int)ppuVar5[*(int *)(puVar14 + 0x168) * 0x13 + 0xe1b]);
		if (iVar13 != -1) {
			sprintf((int)auStack1192, puVar4, (&PTR_DAT_100ff6c4)[iVar13 * 0xc], pbVar15, param_5, iVar11,
			    param_7, param_8, in_stack_fffffb28, in_stack_fffffb2f, in_stack_fffffb3c,
			    in_stack_fffffb40, in_stack_fffffb44, in_stack_fffffb48, in_stack_fffffb4c,
			    in_stack_fffffb50, in_stack_fffffb54);
			strcpy((int)pbVar15, (int)auStack1192);
		}
		sprintf((int)auStack1192, ppuVar5[-0x17de], pbVar15,
		    *(undefined4 *)(ppuVar5[-0x1da7] + param_3 * 0x38 + 4), param_5, iVar11, param_7,
		    param_8, in_stack_fffffb28, in_stack_fffffb2f, in_stack_fffffb3c, in_stack_fffffb40,
		    in_stack_fffffb44, in_stack_fffffb48, in_stack_fffffb4c, in_stack_fffffb50,
		    in_stack_fffffb54);
		strcpy((int)pbVar15, (int)auStack1192);
		if (puVar3[param_1 * 0x170 + 0x3c] == '\0') {
			strcpy((int)(puVar14 + 0x3d), (int)pbVar15);
		}
	}
	CalcItemValue(param_1);
	return;
}

void GetStaffSpell(longlong lParm1, undefined8 uParm2, undefined8 uParm3, undefined param_4,
    undefined8 uParm5, undefined8 uParm6, undefined8 uParm7, undefined4 uParm8)

{
	undefined4 uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	undefined **ppuVar6;
	longlong lVar7;
	undefined8 uVar8;
	undefined uVar10;
	int iVar9;
	longlong lVar11;
	longlong lVar12;
	undefined4 uVar13;
	undefined uVar14;
	undefined4 uVar15;
	undefined uVar16;
	int iVar17;
	undefined uVar18;
	int iVar19;
	undefined uVar20;
	undefined8 unaff_r21;
	uint uVar21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	undefined8 unaff_r25;
	undefined8 unaff_r26;
	ulonglong uVar22;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	longlong unaff_r30;
	undefined8 unaff_r31;
	ulonglong in_LR;
	undefined4 param_9;
	undefined4 in_stack_ffffff58;
	undefined in_stack_ffffff5f;
	undefined in_stack_ffffff6b;
	undefined4 in_stack_ffffff6c;
	undefined4 in_stack_ffffff70;
	undefined4 in_stack_ffffff74;
	undefined4 in_stack_ffffff78;
	undefined4 in_stack_ffffff7c;
	undefined4 in_stack_ffffff80;
	undefined4 in_stack_ffffff84;
	byte abStack120[76];
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

	puVar3 = PTR_DAT_100f1940;
	puVar4 = PTR_DAT_100f1934;
	iVar19 = (int)uParm7;
	iVar17 = (int)uParm6;
	uVar15 = (undefined4)uParm5;
	uVar10 = (undefined)uParm3;
	ppuVar6 = &toc;
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
	uVar22 = ZEXT48(PTR_DAT_100f1940);
	param_9 = (undefined4)in_LR;
	lVar7 = random(0x11, 4, uVar10, param_4, (char)uParm5, (char)uParm6, (char)uParm7, (char)uParm8,
	    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6b);
	uVar21 = (int)uParm2 >> 1;
	if ((int)lVar7 == 0) {
		GetItemPower((int)lParm1, (char)uVar21, (char)uParm2, 0x100, (undefined *)uParm3, iVar17, iVar19,
		    uParm8, in_stack_ffffff58);
	} else {
		if ((in_LR & 0xffffffff00000000 | (ulonglong)uVar21) == 0) {
			uVar21 = 1;
		}
		lVar7 = random(0x12, 0x25, uVar10, param_4, (char)uVar15, (char)iVar17, (char)iVar19,
		    (char)uParm8, in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6b);
		lVar7 = lVar7 + 1;
		lVar11 = 1;
		while (0 < (int)lVar7) {
			if ((*(int *)(puVar4 + (int)lVar11 * 0x38 + 0x10) != -1) && (*(int *)(puVar4 + (int)lVar11 * 0x38 + 0x10) <= (int)uVar21)) {
				lVar7 = lVar7 + -1;
				unaff_r30 = lVar11;
			}
			lVar12 = lVar11 + 1;
			if ((*ppuVar6[-0x1dfc] == '\x01') && ((int)lVar12 == 0x20)) {
				lVar12 = lVar11 + 2;
			}
			lVar11 = lVar12;
			if ((*ppuVar6[-0x1dfc] == '\x01') && ((int)lVar11 == 0x22)) {
				lVar11 = lVar11 + 1;
			}
			if ((int)lVar11 == 0x25) {
				lVar11 = 1;
			}
		}
		iVar5 = (int)unaff_r30;
		lVar7 = uVar22 + lParm1 * 0x170;
		lVar11 = lVar7 + 0x3d;
		uVar10 = (undefined)lVar11;
		uVar13 = *(undefined4 *)(puVar4 + iVar5 * 0x38 + 4);
		iVar9 = (int)lVar11;
		sprintf((int)abStack120, ppuVar6[-0x17de], iVar9, uVar13, uVar15, iVar17, iVar19, uParm8,
		    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
		    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
		    in_stack_ffffff84);
		uVar8 = control_WriteStringToBuffer(abStack120);
		uVar20 = (undefined)iVar19;
		uVar18 = (undefined)iVar17;
		uVar16 = (undefined)uVar15;
		uVar14 = (undefined)uVar13;
		if ((int)uVar8 == 0) {
			uVar1 = *(undefined4 *)(puVar4 + iVar5 * 0x38 + 4);
			uVar10 = (undefined)uVar1;
			sprintf((int)abStack120, ppuVar6[-0x17df], uVar1, uVar13, uVar15, iVar17, iVar19, uParm8,
			    in_stack_ffffff58, in_stack_ffffff5f, in_stack_ffffff6c, in_stack_ffffff70,
			    in_stack_ffffff74, in_stack_ffffff78, in_stack_ffffff7c, in_stack_ffffff80,
			    in_stack_ffffff84);
		}
		strcpy(iVar9, (int)abStack120);
		strcpy((int)lVar7 + 0x7d, (int)abStack120);
		puVar3 = puVar3 + (int)(lParm1 * 0x170);
		puVar4 = puVar4 + iVar5 * 0x38;
		*(int *)(puVar3 + 0xe0) = iVar5;
		uVar21 = *(uint *)(puVar4 + 0x28);
		lVar7 = random(0x13, ((ulonglong) * (uint *)(puVar4 + 0x2c) - (ulonglong)uVar21) + 1, uVar10,
		    uVar14, uVar16, uVar18, uVar20, (char)uParm8, in_stack_ffffff58,
		    in_stack_ffffff5f, in_stack_ffffff6b);
		*(uint *)(puVar3 + 0xe4) = uVar21 + (int)lVar7;
		*(undefined4 *)(puVar3 + 0xe8) = *(undefined4 *)(puVar3 + 0xe4);
		puVar3[0x161] = (char)*(undefined4 *)(puVar4 + 0x1c);
		uVar2 = (*(int *)(puVar4 + 0x34) * *(int *)(puVar3 + 0xe4)) / 5 + (*(int *)(puVar4 + 0x34) * *(int *)(puVar3 + 0xe4) >> 0x1f);
		uVar21 = uVar2 >> 0x1f;
		uVar2 = uVar2 + uVar21;
		*(uint *)(puVar3 + 0xc4) = *(int *)(puVar3 + 0xc4) + uVar2;
		*(uint *)(puVar3 + 200) = *(int *)(puVar3 + 200) + uVar2;
		GetStaffPower((int)lParm1, (char)uParm2, iVar5, (int)(undefined *)uParm3, uVar2, (ulonglong)uVar21,
		    0x66666667, uParm8, in_stack_ffffff58);
	}
	return;
}

void GetItemAttrs(int param_1, int param_2, longlong param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int *piVar1;
	undefined4 *puVar2;
	undefined4 uVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	undefined **ppuVar8;
	int iVar10;
	longlong lVar9;
	undefined uVar11;
	undefined uVar12;
	int unaff_r24;
	undefined *puVar13;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	puVar7 = PTR_DAT_100f1e4c;
	puVar6 = PTR_DAT_100f1940;
	puVar5 = PTR_DAT_100f17ec;
	uVar11 = (undefined)param_3;
	ppuVar8 = &toc;
	uVar12 = (undefined)((longlong)param_2 * 0x4c);
	iVar10 = param_1 * 0x170;
	puVar13 = PTR_DAT_100f1940 + iVar10;
	iVar4 = (int)((longlong)param_2 * 0x4c);
	piVar1 = (int *)(PTR_DAT_100f1940 + iVar10 + 8);
	*piVar1 = (int)*(char *)(iVar4 + 0x100fc834);
	puVar2 = (undefined4 *)(puVar6 + iVar10 + 0xc0);
	*puVar2 = *(undefined4 *)(iVar4 + 0x100fc830);
	strcpy((int)(puVar13 + 0x3d), *(int *)(iVar4 + 0x100fc838));
	strcpy((int)(puVar13 + 0x7d), *(int *)(iVar4 + 0x100fc838));
	puVar13[0xbd] = *(undefined *)(iVar4 + 0x100fc82d);
	puVar13[0xbe] = *(undefined *)(iVar4 + 0x100fc82c);
	*(undefined4 *)(puVar13 + 0xcc) = *(undefined4 *)(iVar4 + 0x100fc848);
	*(undefined4 *)(puVar13 + 0xd0) = *(undefined4 *)(iVar4 + 0x100fc84c);
	lVar9 = random(0x14, ((ulonglong) * (uint *)(iVar4 + 0x100fc854) - (ulonglong) * (uint *)(iVar4 + 0x100fc850)) + 1, uVar11, uVar12, param_5,
	    param_6, param_7, param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
	*(int *)(puVar13 + 0xd4) = *(int *)(iVar4 + 0x100fc850) + (int)lVar9;
	*(undefined4 *)(puVar13 + 0xd8) = *(undefined4 *)(iVar4 + 0x100fc85c);
	*(undefined4 *)(puVar13 + 0xdc) = *(undefined4 *)(iVar4 + 0x100fc860);
	*(undefined4 *)(puVar13 + 0xe0) = *(undefined4 *)(iVar4 + 0x100fc864);
	puVar13[0x3c] = 0;
	uVar3 = *(undefined4 *)(iVar4 + 0x100fc86c);
	*(undefined4 *)(puVar13 + 0xc4) = uVar3;
	*(undefined4 *)(puVar13 + 200) = uVar3;
	*(undefined4 *)(puVar13 + 0x150) = 0;
	*(undefined4 *)(puVar13 + 0x154) = 0;
	*(undefined4 *)(puVar13 + 0x158) = 0;
	*(undefined4 *)(puVar13 + 0x15c) = 0;
	*(undefined4 *)(puVar13 + 0xf4) = 0;
	*(undefined4 *)(puVar13 + 0xf8) = 0;
	*(undefined4 *)(puVar13 + 0xfc) = 0;
	*(undefined4 *)(puVar13 + 0x100) = 0;
	*(undefined4 *)(puVar13 + 0x104) = 0;
	*(undefined4 *)(puVar13 + 0x108) = 0;
	*(undefined4 *)(puVar13 + 0x10c) = 0;
	*(undefined4 *)(puVar13 + 0xe4) = 0;
	*(undefined4 *)(puVar13 + 0xe8) = 0;
	uVar3 = *(undefined4 *)(iVar4 + 0x100fc844);
	*(undefined4 *)(puVar13 + 0xec) = uVar3;
	*(undefined4 *)(puVar13 + 0xf0) = uVar3;
	puVar13[0x160] = *(undefined *)(iVar4 + 0x100fc858);
	puVar13[0x161] = *(undefined *)(iVar4 + 0x100fc859);
	puVar13[0x162] = *(undefined *)(iVar4 + 0x100fc85a);
	*(undefined4 *)(puVar13 + 0x110) = 0;
	*(undefined4 *)(puVar13 + 0x114) = 0;
	*(undefined4 *)(puVar13 + 0x118) = 0;
	*(int *)(puVar13 + 0x168) = param_2;
	*(undefined4 *)(puVar13 + 0x124) = 0;
	*(undefined4 *)(puVar13 + 0x128) = 0;
	*(undefined4 *)(puVar13 + 300) = 0;
	puVar13[0x130] = 0;
	puVar13[0x131] = 0;
	*(undefined4 *)(puVar13 + 0x138) = 0;
	*(undefined4 *)(puVar13 + 0x13c) = 0;
	*(undefined4 *)(puVar13 + 0x140) = 0;
	*(undefined4 *)(puVar13 + 0x144) = 0;
	*(undefined4 *)(puVar13 + 0x148) = 0;
	*(undefined4 *)(puVar13 + 0x11c) = 0;
	*(undefined4 *)(puVar13 + 0x120) = 0;
	puVar13[0x14c] = 0xff;
	puVar13[0x14d] = 0xff;
	if (*(int *)(puVar13 + 0xdc) == 0x18) {
		GetBookSpell(param_1, param_3, uVar11, uVar12, param_5, param_6, param_7, param_8, in_stack_ffffff98);
	}
	if (*piVar1 == 0xb) {
		if (*(int *)puVar7 == 0) {
			lVar9 = random(0x15, (ulonglong)(byte)*puVar5 * 10, uVar11, uVar12, param_5, param_6, param_7,
			    param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
			unaff_r24 = (uint)(byte)*puVar5 * 5 + (int)lVar9;
		}
		if (*(int *)puVar7 == 1) {
			lVar9 = random(0x15, ((ulonglong)(byte)*puVar5 + 0x10) * 10, uVar11, uVar12, param_5, param_6, param_7, param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
			unaff_r24 = ((uint)(byte)*puVar5 + 0x10) * 5 + (int)lVar9;
		}
		if (*(int *)puVar7 == 2) {
			lVar9 = random(0x15, ((ulonglong)(byte)*puVar5 + 0x20) * 10, uVar11, uVar12, param_5, param_6, param_7, param_8, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
			unaff_r24 = ((uint)(byte)*puVar5 + 0x20) * 5 + (int)lVar9;
		}
		if (*ppuVar8[-0x1de5] == '\x04') {
			unaff_r24 = unaff_r24 + (unaff_r24 >> 3);
		}
		if (5000 < unaff_r24) {
			unaff_r24 = 5000;
		}
		*(int *)(puVar13 + 0xc4) = unaff_r24;
		if (unaff_r24 < 0x9c4) {
			if (unaff_r24 < 0x3e9) {
				*puVar2 = 4;
			} else {
				*puVar2 = 5;
			}
		} else {
			*puVar2 = 6;
		}
	}
	return;
}

longlong RndPL(longlong param_1, longlong param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	longlong lVar1;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined1 in_stack_ffffffdb;

	lVar1 = random(0x16, (param_2 - param_1) + 1, param_3, param_4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdb);
	return param_1 + lVar1;
}

longlong PLVal(int param_1, int param_2, int param_3, longlong param_4, int param_5)

{
	uint uVar1;
	int iVar2;

	if (param_2 == param_3) {
		return param_4;
	}
	if ((int)param_4 == param_5) {
		return param_4;
	}
	iVar2 = (param_5 - (int)param_4) * (((param_1 - param_2) * 100) / (param_3 - param_2));
	uVar1 = iVar2 / 100 + (iVar2 >> 0x1f);
	return param_4 + ((longlong)(int)((ulonglong)((longlong)iVar2 * 0x51eb851f) >> 0x20) & 0xffffffff00000000U | (ulonglong)uVar1) + (ulonglong)(uVar1 >> 0x1f);
}

void SaveItemPower(int param_1, uint param_2, longlong param_3, longlong param_4, longlong param_5,
    int param_6, int param_7, undefined param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	longlong lVar3;
	undefined4 in_stack_ffffff98;

	puVar1 = PTR_DAT_100f1940;
	ppuVar2 = &toc;
	lVar3 = RndPL(param_3, param_4, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
	    (char)param_7, param_8, in_stack_ffffff98);
	if (param_2 < 0x50) {
		// WARNING: Could not recover jumptable at 0x1004d9e8. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(ppuVar2[-0x17e0] + param_2 * 4))();
		return;
	}
	param_1 = param_1 * 0x170;
	if ((*(int *)(puVar1 + param_1 + 0x150) == 0) && (*(int *)(puVar1 + param_1 + 0x154) == 0)) {
		lVar3 = PLVal((int)lVar3, (int)param_3, (int)param_4, param_5, param_6);
		*(int *)(puVar1 + param_1 + 0x150) = (int)lVar3;
		*(int *)(puVar1 + param_1 + 0x154) = param_7;
	} else {
		lVar3 = PLVal((int)lVar3, (int)param_3, (int)param_4, param_5, param_6);
		*(int *)(puVar1 + param_1 + 0x158) = (int)lVar3;
		*(int *)(puVar1 + param_1 + 0x15c) = param_7;
	}
	return;
}

void GetItemPower(int param_1, char param_2, char param_3, uint param_4, undefined *param_5, int param_6,
    int param_7, undefined4 param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	int iVar6;
	undefined **ppuVar7;
	longlong lVar8;
	int iVar10;
	int iVar11;
	undefined8 uVar9;
	longlong lVar12;
	char cVar14;
	longlong lVar13;
	undefined uVar16;
	ulonglong uVar15;
	undefined *puVar17;
	longlong lVar18;
	undefined8 unaff_r16;
	byte bVar19;
	undefined8 unaff_r17;
	int iVar20;
	byte *pbVar21;
	undefined8 unaff_r18;
	undefined8 unaff_r19;
	undefined8 unaff_r20;
	undefined8 unaff_r21;
	undefined8 unaff_r22;
	undefined8 unaff_r23;
	undefined8 unaff_r24;
	int iVar22;
	undefined8 unaff_r25;
	int iVar23;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	undefined8 unaff_r29;
	undefined8 unaff_r30;
	undefined8 unaff_r31;
	undefined4 in_stack_fffffb08;
	undefined in_stack_fffffb0f;
	undefined in_stack_fffffb1b;
	undefined4 in_stack_fffffb1c;
	undefined4 in_stack_fffffb20;
	undefined4 in_stack_fffffb24;
	undefined4 in_stack_fffffb28;
	undefined4 in_stack_fffffb2c;
	undefined4 in_stack_fffffb30;
	undefined4 in_stack_fffffb34;
	undefined auStack1224[128];
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

	puVar5 = PTR_s__s__s_100f305c;
	puVar4 = PTR_s__s_of__s_100f3058;
	puVar3 = PTR_DAT_100f1940;
	uVar16 = (undefined)param_4;
	ppuVar7 = &toc;
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
	iVar11 = 0x10100684;
	uVar15 = ZEXT48(&PTR_DAT_100ff6c4);
	cVar14 = param_3;
	puVar17 = param_5;
	lVar8 = random(0x17, 4, param_3, uVar16, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_fffffb08, in_stack_fffffb0f, in_stack_fffffb1b);
	iVar20 = (int)lVar8;
	lVar8 = random(0x17, 3, cVar14, uVar16, (char)puVar17, (char)param_6, (char)param_7, (char)param_8,
	    in_stack_fffffb08, in_stack_fffffb0f, in_stack_fffffb1b);
	iVar10 = (int)lVar8;
	if ((iVar20 != 0) && (iVar10 == 0)) {
		lVar8 = random(0x17, 2, cVar14, uVar16, (char)puVar17, (char)param_6, (char)param_7,
		    (char)param_8, in_stack_fffffb08, in_stack_fffffb0f, in_stack_fffffb1b);
		if ((int)lVar8 == 0) {
			iVar20 = 0;
		} else {
			iVar10 = 1;
		}
	}
	iVar23 = -1;
	iVar22 = -1;
	bVar19 = 0;
	if ((param_5 == (undefined *)0x0) && (lVar8 = random(0, 3, cVar14, uVar16, (char)puVar17, (char)param_6, (char)param_7, (char)param_8, in_stack_fffffb08, in_stack_fffffb0f, in_stack_fffffb1b), (int)lVar8 != 0)) {
		param_5 = &DAT_00000001;
	}
	if (iVar20 == 0) {
		lVar13 = ZEXT48(register0x0000000c) - 0x448;
		iVar20 = 0;
		lVar18 = 0;
		lVar8 = 0;
		while (true) {
			param_6 = (int)lVar18;
			iVar2 = (int)uVar15;
			puVar17 = *(undefined **)(iVar2 + 4);
			if (puVar17 == (undefined *)0xffffffff)
				break;
			lVar12 = lVar8;
			iVar6 = iVar20;
			if ((((((param_4 & *(uint *)(iVar2 + 0x14)) != 0) && (lVar12 = lVar8, iVar6 = iVar20, param_2 <= *(char *)(iVar2 + 0x10))) && (lVar12 = lVar8, iVar6 = iVar20, *(char *)(iVar2 + 0x10) <= param_3)) && ((param_5 == (undefined *)0x0 || (lVar12 = lVar8, iVar6 = iVar20, *(int *)(iVar2 + 0x20) != 0)))) && ((param_4 != 0x100 || (lVar12 = lVar8, iVar6 = iVar20, puVar17 != &DAT_0000000f)))) {
				iVar1 = (int)lVar13;
				*(int *)(iVar1 + iVar20) = param_6;
				lVar12 = lVar8 + 1;
				iVar6 = iVar20 + 4;
				if (*(int *)(iVar2 + 0x1c) != 0) {
					*(int *)(iVar1 + iVar20 + 4) = param_6;
					lVar12 = lVar8 + 2;
					iVar6 = iVar20 + 8;
				}
			}
			iVar20 = iVar6;
			uVar15 = uVar15 + 0x30;
			lVar18 = lVar18 + 1;
			lVar8 = lVar12;
		}
		if ((int)lVar8 != 0) {
			lVar8 = random(0x17, lVar8, (char)lVar13, (char)uVar15, 0xff, (char)lVar18, (char)param_7,
			    (char)param_8, in_stack_fffffb08, in_stack_fffffb0f, in_stack_fffffb1b);
			iVar23 = local_448[(int)lVar8];
			iVar20 = iVar23 * 0x30;
			sprintf((int)auStack1224, puVar5, (&PTR_DAT_100ff6c4)[iVar23 * 0xc],
			    puVar3 + param_1 * 0x170 + 0x7d, puVar17, param_6, param_7, param_8, in_stack_fffffb08, in_stack_fffffb0f, in_stack_fffffb1c, in_stack_fffffb20, in_stack_fffffb24,
			    in_stack_fffffb28, in_stack_fffffb2c, in_stack_fffffb30, in_stack_fffffb34);
			strcpy((int)(puVar3 + param_1 * 0x170 + 0x7d), (int)auStack1224);
			(puVar3 + param_1 * 0x170)[0x3c] = 1;
			puVar17 = *(undefined **)(iVar20 + 0x100ff6e8);
			param_6 = *(int *)(iVar20 + 0x100ff6ec);
			param_7 = *(int *)(iVar20 + 0x100ff6f0);
			SaveItemPower(param_1, *(uint *)(iVar20 + 0x100ff6c8), (ulonglong) * (uint *)(iVar20 + 0x100ff6cc),
			    (ulonglong) * (uint *)(iVar20 + 0x100ff6d0), ZEXT48(puVar17), param_6, param_7,
			    (char)param_8, in_stack_fffffb08);
			(puVar3 + param_1 * 0x170)[0x14c] = (char)*(uint *)(iVar20 + 0x100ff6c8);
			bVar19 = *(byte *)(iVar20 + 0x100ff6dc);
		}
	}
	if (iVar10 != 0) {
		lVar8 = 0;
		lVar13 = ZEXT48(register0x0000000c) - 0x448;
		lVar18 = 0;
		while (true) {
			puVar17 = (undefined *)lVar18;
			if (*(int *)(iVar11 + 4) == -1)
				break;
			if (((((param_4 & *(uint *)(iVar11 + 0x14)) != 0) && (param_2 <= *(char *)(iVar11 + 0x10))) && ((*(char *)(iVar11 + 0x10) <= param_3 && ((bVar19 | *(byte *)(iVar11 + 0x18)) != 0x11))))
			    && ((param_5 == (undefined *)0x0 || (*(int *)(iVar11 + 0x20) != 0)))) {
				*(undefined **)(undefined4 *)lVar13 = puVar17;
				lVar13 = lVar13 + 4;
				lVar8 = lVar8 + 1;
			}
			iVar11 = iVar11 + 0x30;
			lVar18 = lVar18 + 1;
		}
		if ((int)lVar8 != 0) {
			lVar8 = random(0x17, lVar8, (char)lVar13, bVar19, (char)lVar18, (char)param_6, (char)param_7,
			    (char)param_8, in_stack_fffffb08, in_stack_fffffb0f, in_stack_fffffb1b);
			iVar22 = local_448[(int)lVar8];
			iVar10 = iVar22 * 0x30;
			sprintf((int)auStack1224, puVar4, puVar3 + param_1 * 0x170 + 0x7d,
			    *(undefined4 *)(iVar10 + 0x10100684), puVar17, param_6, param_7, param_8,
			    in_stack_fffffb08, in_stack_fffffb0f, in_stack_fffffb1c, in_stack_fffffb20,
			    in_stack_fffffb24, in_stack_fffffb28, in_stack_fffffb2c, in_stack_fffffb30,
			    in_stack_fffffb34);
			strcpy((int)(puVar3 + param_1 * 0x170 + 0x7d), (int)auStack1224);
			(puVar3 + param_1 * 0x170)[0x3c] = 1;
			puVar17 = *(undefined **)(iVar10 + 0x101006a8);
			param_6 = *(int *)(iVar10 + 0x101006ac);
			param_7 = *(int *)(iVar10 + 0x101006b0);
			SaveItemPower(param_1, *(uint *)(iVar10 + 0x10100688), (ulonglong) * (uint *)(iVar10 + 0x1010068c),
			    (ulonglong) * (uint *)(iVar10 + 0x10100690), ZEXT48(puVar17), param_6, param_7,
			    (char)param_8, in_stack_fffffb08);
			(puVar3 + param_1 * 0x170)[0x14d] = (char)*(uint *)(iVar10 + 0x10100688);
		}
	}
	pbVar21 = puVar3 + param_1 * 0x170 + 0x7d;
	uVar9 = control_WriteStringToBuffer(pbVar21);
	if ((int)uVar9 == 0) {
		strcpy((int)pbVar21,
		    (int)ppuVar7[*(int *)(puVar3 + param_1 * 0x170 + 0x168) * 0x13 + 0xe1b]);
		if (iVar23 != -1) {
			sprintf((int)auStack1224, puVar5, (&PTR_DAT_100ff6c4)[iVar23 * 0xc], pbVar21, puVar17, param_6, param_7, param_8, in_stack_fffffb08, in_stack_fffffb0f, in_stack_fffffb1c,
			    in_stack_fffffb20, in_stack_fffffb24, in_stack_fffffb28, in_stack_fffffb2c,
			    in_stack_fffffb30, in_stack_fffffb34);
			strcpy((int)pbVar21, (int)auStack1224);
		}
		if (iVar22 != -1) {
			sprintf((int)auStack1224, puVar4, pbVar21, *(undefined4 *)(iVar22 * 0x30 + 0x10100684),
			    puVar17, param_6, param_7, param_8, in_stack_fffffb08, in_stack_fffffb0f,
			    in_stack_fffffb1c, in_stack_fffffb20, in_stack_fffffb24, in_stack_fffffb28,
			    in_stack_fffffb2c, in_stack_fffffb30, in_stack_fffffb34);
			strcpy((int)pbVar21, (int)auStack1224);
		}
	}
	if ((iVar23 != -1) || (iVar22 != -1)) {
		CalcItemValue(param_1);
	}
	return;
}

void GetItemBonus(undefined8 param_1, undefined4 param_2, undefined8 param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	code *UNRECOVERED_JUMPTABLE;
	int iVar1;

	iVar1 = param_1._4_4_ * 0x170;
	if (PTR_DAT_100f1940[iVar1 + 0xbe] != '\x04') {
		if (0x19 < (int)param_3) {
			param_3 = 0x19;
		}
		if (*(uint *)(PTR_DAT_100f1940 + iVar1 + 8) < 0xe) {
			UNRECOVERED_JUMPTABLE = *(code **)(_DAT_100f304c + *(uint *)(PTR_DAT_100f1940 + iVar1 + 8) * 4);
			// WARNING: Could not recover jumptable at 0x1004e908. Too many branches
			// WARNING: Treating indirect jump as call
			(*UNRECOVERED_JUMPTABLE)(param_1._4_4_, UNRECOVERED_JUMPTABLE, param_3, param_4, param_5, PTR_DAT_100f1940, iVar1,
			    param_8);
			return;
		}
	}
	return;
}

void SetupItem(int param_1)

{
	byte bVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	undefined *puVar5;

	iVar4 = _DAT_100f3048;
	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	puVar5 = PTR_DAT_100f1940 + param_1 * 0x170;
	bVar1 = PTR_DAT_100f1e00[*(int *)(puVar5 + 0xc0)];
	*(undefined4 *)(puVar5 + 0x18) = *(undefined4 *)(PTR_DAT_100f3064 + (uint)bVar1 * 4);
	*(uint *)(puVar5 + 0x1c) = (uint) * (byte *)(iVar4 + (uint)bVar1);
	*(undefined4 *)(puVar5 + 0x24) = 0x60;
	*(undefined4 *)(puVar5 + 0x28) = 0x10;
	*(undefined4 *)(puVar5 + 0x38) = 0;
	*(undefined4 *)(puVar5 + 0x34) = 0;
	if (puVar3[*(int *)puVar2 * 0x55ec + 0x5592] == '\0') {
		*(undefined4 *)(puVar5 + 0x20) = 1;
		*(undefined4 *)(puVar5 + 0x14) = 1;
		puVar5[0x30] = 0;
		return;
	}
	*(undefined4 *)(puVar5 + 0x20) = *(undefined4 *)(puVar5 + 0x1c);
	*(undefined4 *)(puVar5 + 0x14) = 0;
	puVar5[0x30] = 1;
	return;
}

longlong RndItem(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, char param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	char cVar2;
	ushort uVar3;
	uint uVar4;
	uint *puVar5;
	undefined *puVar6;
	ulonglong uVar7;
	longlong lVar8;
	int iVar9;
	longlong lVar10;
	ulonglong uVar11;
	longlong lVar12;
	undefined4 in_stack_fffff7c8;
	undefined in_stack_fffff7cf;
	undefined in_stack_fffff7db;
	uint local_808[514];

	puVar6 = PTR_DAT_100f187c;
	uVar11 = SEXT18(param_6);
	uVar7 = ZEXT48(&toc);
	uVar3 = *(ushort *)(*(int *)(PTR_DAT_100f187c + param_1 * 0xe8 + 0xe4) + 0x78);
	if ((uVar3 & 0x8000) == 0) {
		if ((uVar3 & 0x4000) == 0) {
			lVar8 = random(0x18, 100, param_3, param_4, param_5, param_6, param_7, param_8,
			    in_stack_fffff7c8, in_stack_fffff7cf, in_stack_fffff7db);
			if ((int)lVar8 < 0x29) {
				lVar8 = random(0x18, 100, param_3, param_4, param_5, (char)uVar11, param_7, param_8,
				    in_stack_fffff7c8, in_stack_fffff7cf, in_stack_fffff7db);
				if ((int)lVar8 < 0x1a) {
					cVar2 = puVar6[param_1 * 0xe8 + 0xc4];
					lVar10 = uVar7 + 0x3858;
					lVar8 = 0;
					cVar1 = **(char **)((int)uVar7 + -0x77f0);
					lVar12 = 0;
					while (puVar5 = (uint *)lVar10, *(char *)((int)puVar5 + 5) != -1) {
						uVar4 = *puVar5;
						uVar11 = (ulonglong)uVar4;
						if ((uVar4 == 2) && (*(char *)(puVar5 + 6) <= cVar2)) {
							iVar9 = (int)lVar8;
							lVar8 = lVar8 + 1;
							local_808[iVar9] = (uint)lVar12;
						}
						if ((uVar4 != 0) && (*(char *)(puVar5 + 6) <= cVar2)) {
							iVar9 = (int)lVar8;
							lVar8 = lVar8 + 1;
							local_808[iVar9] = (uint)lVar12;
						}
						if ((puVar5[0xf] == 0x20) && (cVar1 == '\x01')) {
							lVar8 = lVar8 + -1;
						}
						if ((puVar5[0xf] == 0x22) && (cVar1 == '\x01')) {
							lVar8 = lVar8 + -1;
						}
						lVar10 = lVar10 + 0x4c;
						lVar12 = lVar12 + 1;
					}
					lVar8 = random(0x18, lVar8, cVar2, (char)lVar10, cVar1, (char)uVar11, (char)lVar12, param_8, in_stack_fffff7c8, in_stack_fffff7cf, in_stack_fffff7db);
					lVar8 = (ulonglong)local_808[(int)lVar8] + 1;
				} else {
					lVar8 = 1;
				}
			} else {
				lVar8 = 0;
			}
		} else {
			lVar8 = 0;
		}
	} else {
		lVar8 = -((ulonglong)((uint)uVar3 & 0xfff) + 1);
	}
	return lVar8;
}

ulonglong RndUItem(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	byte bVar2;
	char cVar3;
	byte bVar4;
	char cVar5;
	int *piVar6;
	longlong lVar7;
	int iVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	int iVar11;
	undefined4 in_stack_fffff7c8;
	undefined in_stack_fffff7cf;
	undefined1 in_stack_fffff7db;
	uint local_808[514];

	uVar9 = ZEXT48(PTR_DAT_100f187c);
	if (((param_1 == -1) || ((*(ushort *)(*(int *)(PTR_DAT_100f187c + param_1 * 0xe8 + 0xe4) + 0x78) & 0x8000) == 0)) || (*PTR_DAT_100f17e0 != '\x01')) {
		uVar10 = ZEXT48(&DAT_100fc828);
		bVar2 = *PTR_DAT_100f17ec;
		cVar3 = *PTR_DAT_100f17e0;
		cVar5 = PTR_DAT_100f187c[param_1 * 0xe8 + 0xc4];
		lVar7 = 0;
		iVar11 = 0;
		while (piVar6 = (int *)uVar10, *(char *)((int)piVar6 + 5) != -1) {
			bVar1 = *piVar6 != 0;
			if (param_1 == -1) {
				if ((int)((uint)bVar2 << 1) < (int)*(char *)(piVar6 + 6)) {
					bVar1 = false;
				}
			} else {
				if (cVar5 < *(char *)(piVar6 + 6)) {
					bVar1 = false;
				}
			}
			bVar4 = *(byte *)(piVar6 + 3);
			uVar9 = (ulonglong)bVar4;
			if (bVar4 == 0) {
				bVar1 = false;
			}
			if (bVar4 == 0xb) {
				bVar1 = false;
			}
			if (bVar4 == 0xe) {
				bVar1 = false;
			}
			if (piVar6[0xe] == 0x18) {
				bVar1 = true;
			}
			if ((piVar6[0xf] == 0x20) && (cVar3 == '\x01')) {
				bVar1 = false;
			}
			if ((piVar6[0xf] == 0x22) && (cVar3 == '\x01')) {
				bVar1 = false;
			}
			if (bVar1) {
				iVar8 = (int)lVar7;
				lVar7 = lVar7 + 1;
				*(int *)((int)(ZEXT48(register0x0000000c) - 0x808) + iVar8 * 4) = iVar11;
			}
			uVar10 = uVar10 + 0x4c;
			iVar11 = iVar11 + 1;
		}
		lVar7 = random(0x19, lVar7, (char)(ZEXT48(register0x0000000c) - 0x808), cVar5,
		    (char)((uint)bVar2 << 1), (char)uVar9, (char)uVar10, cVar3, in_stack_fffff7c8,
		    in_stack_fffff7cf, in_stack_fffff7db);
		uVar9 = (ulonglong)local_808[(int)lVar7];
	} else {
		uVar9 = -((ulonglong)((uint) * (ushort *)(*(int *)(PTR_DAT_100f187c + param_1 * 0xe8 + 0xe4) + 0x78) & 0xfff)
		    + 1);
	}
	return uVar9;
}

ulonglong RndAllItems(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	char cVar1;
	int *piVar2;
	int iVar3;
	longlong lVar4;
	ulonglong uVar5;
	int iVar6;
	longlong lVar7;
	longlong lVar8;
	undefined4 in_stack_fffff7c8;
	undefined in_stack_fffff7cf;
	undefined in_stack_fffff7db;
	uint local_808[514];

	uVar5 = ZEXT48(&toc);
	lVar4 = random(0x1a, 100, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_fffff7c8,
	    in_stack_fffff7cf, in_stack_fffff7db);
	if ((int)lVar4 < 0x1a) {
		lVar4 = 0;
		lVar7 = uVar5 + 0x3858;
		lVar8 = 0;
		cVar1 = **(char **)((int)uVar5 + -0x77f0);
		iVar3 = (uint) * *(byte **)((int)uVar5 + -0x77e4) << 1;
		while (piVar2 = (int *)lVar7, *(char *)((int)piVar2 + 5) != -1) {
			if ((*piVar2 != 0) && ((int)*(char *)(piVar2 + 6) <= iVar3)) {
				iVar6 = (int)lVar4;
				lVar4 = lVar4 + 1;
				local_808[iVar6] = (uint)lVar8;
			}
			if ((piVar2[0xf] == 0x20) && (cVar1 == '\x01')) {
				lVar4 = lVar4 + -1;
			}
			if ((piVar2[0xf] == 0x22) && (cVar1 == '\x01')) {
				lVar4 = lVar4 + -1;
			}
			lVar7 = lVar7 + 0x4c;
			lVar8 = lVar8 + 1;
		}
		lVar4 = random(0x1a, lVar4, (char)iVar3, (char)lVar7, cVar1, (char)lVar8, param_7, param_8,
		    in_stack_fffff7c8, in_stack_fffff7cf, in_stack_fffff7db);
		uVar5 = (ulonglong)local_808[(int)lVar4];
	} else {
		uVar5 = 0;
	}
	return uVar5;
}

ulonglong RndTypeItems(char param_1, int param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, bool param_8,
    undefined4 param_9)

{
	byte bVar1;
	int *piVar2;
	ulonglong uVar3;
	longlong lVar4;
	int iVar5;
	longlong lVar6;
	undefined4 in_stack_fffff7c8;
	undefined in_stack_fffff7cf;
	undefined1 in_stack_fffff7db;
	uint local_808[514];

	lVar4 = 0;
	uVar3 = ZEXT48(&DAT_100fc828);
	lVar6 = 0;
	bVar1 = *PTR_DAT_100f17ec;
	while (piVar2 = (int *)uVar3, *(char *)((int)piVar2 + 5) != -1) {
		param_8 = param_1 == *(char *)(piVar2 + 3) && ((int)*(char *)(piVar2 + 6) <= (int)((uint)bVar1 << 1) && *piVar2 != 0);
		if ((param_2 != -1) && (param_2 != piVar2[0xe])) {
			param_8 = false;
		}
		if (param_8 != false) {
			iVar5 = (int)lVar4;
			lVar4 = lVar4 + 1;
			*(undefined4 *)((int)(ZEXT48(register0x0000000c) - 0x808) + iVar5 * 4) = (int)lVar6;
		}
		uVar3 = uVar3 + 0x4c;
		lVar6 = lVar6 + 1;
	}
	lVar4 = random(0x1b, lVar4, (char)(ZEXT48(register0x0000000c) - 0x808),
	    (char)((uint)bVar1 << 1), (char)uVar3, (char)lVar4, (char)lVar6, param_8,
	    in_stack_fffff7c8, in_stack_fffff7cf, in_stack_fffff7db);
	return (ulonglong)local_808[(int)lVar4];
}

int CheckUnique(int param_1, char param_2, int param_3, int param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	char cVar1;
	char cVar2;
	char cVar3;
	uint uVar4;
	int iVar5;
	longlong lVar6;
	int iVar7;
	undefined uVar8;
	undefined uVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	longlong lVar12;
	int iVar13;

	uVar9 = (undefined)param_4;
	uVar8 = (undefined)param_3;
	lVar12 = ZEXT48(register0x0000000c) - 0xd0;
	iVar5 = (int)lVar12;
	*(BADSPACEBASE **)iVar5 = register0x0000000c;
	lVar6 = random(0x1c, 100, uVar8, uVar9, param_5, param_6, param_7, param_8,
	    *(undefined4 *)(iVar5 + 8), *(undefined *)(iVar5 + 0xf),
	    *(undefined *)(iVar5 + 0x1b));
	if (param_3 < (int)lVar6) {
		iVar7 = -1;
	} else {
		iVar13 = 0;
		memset((char)lVar12 + '<', 0x80, uVar8, uVar9, param_5, param_6, param_7, param_8,
		    *(undefined *)(iVar5 + 0xb), *(undefined *)(iVar5 + 0xf), *(undefined4 *)(iVar5 + 0x14));
		uVar4 = *(uint *)(iVar5 + 0x14);
		lVar12 = ZEXT48(register0x0000000c) - 0x94;
		uVar10 = (ulonglong) * (uint *)(uVar4 - 0x718c);
		uVar11 = (ulonglong) * (uint *)(uVar4 - 0x7170);
		cVar1 = **(char **)(uVar4 - 0x77f0);
		cVar3 = *(char *)((int)((ulonglong)uVar4 + 0x3858) + *(int *)(*(int *)(uVar4 - 0x7690) + param_1 * 0x170 + 0x168) * 0x4c + 0xd);
		while (cVar2 = *(char *)((int)uVar10 + 4), cVar2 != -1) {
			if (((cVar2 == cVar3) && (*(char *)((int)uVar10 + 5) <= param_2)) && ((param_4 != 0 || ((*(int *)uVar11 == 0 || (cVar1 != '\x01')))))) {
				*(undefined *)lVar12 = 1;
				iVar13 = iVar13 + 1;
			}
			uVar10 = uVar10 + 0x54;
			uVar11 = uVar11 + 4;
			lVar12 = lVar12 + 1;
		}
		if (iVar13 == 0) {
			iVar7 = -1;
		} else {
			random(0x1d, 10, 0xff, (char)((ulonglong)uVar4 + 0x3858), (char)uVar10, (char)uVar11,
			    (char)lVar12, cVar1, *(undefined4 *)(iVar5 + 8), *(undefined *)(iVar5 + 0xf),
			    *(undefined *)(iVar5 + 0x1b));
			iVar7 = 0;
			while (0 < iVar13) {
				if (*(char *)(iVar5 + 0x3c + iVar7) != '\0') {
					iVar13 = iVar13 + -1;
				}
				if (0 < iVar13) {
					iVar7 = iVar7 + 1;
					if (iVar7 == 0x80) {
						iVar7 = 0;
					}
				}
			}
		}
	}
	return iVar7;
}

void GetUniqueItem(int param_1, int param_2, undefined param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	char *pcVar3;
	int iVar4;
	int *piVar5;
	int iVar6;
	undefined4 in_stack_ffffffa8;

	iVar1 = _DAT_100f1e44;
	puVar2 = PTR_DAT_100f1940;
	iVar6 = param_2 * 0x54;
	iVar4 = _DAT_100f1e44 + iVar6;
	*(undefined4 *)(PTR_DAT_100f1e60 + param_2 * 4) = 1;
	SaveItemPower(param_1, (int)*(char *)(iVar4 + 0xc), (ulonglong) * (uint *)(iVar4 + 0x10),
	    (ulonglong) * (uint *)(iVar4 + 0x14), 0, 0, 1, param_8, in_stack_ffffffa8);
	pcVar3 = (char *)(iVar4 + 6);
	if ('\x01' < *(char *)(iVar4 + 6)) {
		SaveItemPower(param_1, (int)*(char *)(iVar4 + 0x18), (ulonglong) * (uint *)(iVar4 + 0x1c),
		    (ulonglong) * (uint *)(iVar4 + 0x20), 0, 0, 1, param_8, in_stack_ffffffa8);
	}
	if ('\x02' < *pcVar3) {
		iVar4 = iVar1 + iVar6;
		SaveItemPower(param_1, (int)*(char *)(iVar4 + 0x24), (ulonglong) * (uint *)(iVar4 + 0x28),
		    (ulonglong) * (uint *)(iVar4 + 0x2c), 0, 0, 1, param_8, in_stack_ffffffa8);
	}
	if ('\x03' < *pcVar3) {
		iVar4 = iVar1 + iVar6;
		SaveItemPower(param_1, (int)*(char *)(iVar4 + 0x30), (ulonglong) * (uint *)(iVar4 + 0x34),
		    (ulonglong) * (uint *)(iVar4 + 0x38), 0, 0, 1, param_8, in_stack_ffffffa8);
	}
	if ('\x04' < *pcVar3) {
		iVar4 = iVar1 + iVar6;
		SaveItemPower(param_1, (int)*(char *)(iVar4 + 0x3c), (ulonglong) * (uint *)(iVar4 + 0x40),
		    (ulonglong) * (uint *)(iVar4 + 0x44), 0, 0, 1, param_8, in_stack_ffffffa8);
	}
	if ('\x05' < *pcVar3) {
		iVar4 = iVar1 + iVar6;
		SaveItemPower(param_1, (int)*(char *)(iVar4 + 0x48), (ulonglong) * (uint *)(iVar4 + 0x4c),
		    (ulonglong) * (uint *)(iVar4 + 0x50), 0, 0, 1, param_8, in_stack_ffffffa8);
	}
	piVar5 = (int *)(puVar2 + param_1 * 0x170);
	strcpy((int)((int)piVar5 + 0x7d), *(int *)(iVar1 + iVar6));
	piVar5[0x32] = *(int *)(iVar1 + iVar6 + 8);
	if (piVar5[0x37] == 0x1b) {
		*piVar5 = param_2;
	}
	puVar2 = puVar2 + param_1 * 0x170;
	*(int *)(puVar2 + 0x134) = param_2;
	puVar2[0x3c] = 2;
	*(ushort *)(puVar2 + 4) = *(ushort *)(puVar2 + 4) | 0x200;
	return;
}

void SpawnUnique(int param_1, int param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int *piVar7;
	int *piVar8;
	ulonglong uVar9;
	int iVar10;
	byte bVar11;
	undefined uVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffb8;

	piVar8 = _DAT_100f1dec;
	piVar7 = _DAT_100f1ddc;
	uVar9 = ZEXT48(&toc);
	if (*_DAT_100f1dec < 0x7f) {
		iVar1 = *_DAT_100f1ddc;
		GetSuperItemSpace(param_2, param_3, (char)iVar1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		iVar2 = *piVar8;
		uVar16 = (undefined)iVar2;
		iVar6 = (int)uVar9;
		iVar3 = *(int *)(iVar6 + -0x71e0);
		uVar12 = (undefined)iVar3;
		iVar4 = *(int *)(iVar6 + -0x718c);
		lVar14 = uVar9 + 0x3858;
		iVar5 = piVar7[0x7e - iVar2];
		uVar13 = (undefined)iVar5;
		iVar10 = 0;
		*piVar7 = iVar5;
		*(int *)(iVar3 + iVar2 * 4) = iVar1;
		while (uVar15 = (undefined)lVar14,
		    *(char *)((int)lVar14 + 0xd) != *(char *)(iVar4 + param_1 * 0x54 + 4)) {
			lVar14 = lVar14 + 0x4c;
			iVar10 = iVar10 + 1;
		}
		bVar11 = **(byte **)(iVar6 + -0x77e4);
		GetItemAttrs(iVar1, iVar10, (ulonglong)bVar11, uVar12, uVar13, uVar15, uVar16, param_8,
		    in_stack_ffffffb8);
		GetUniqueItem(iVar1, param_1, bVar11, uVar12, uVar13, uVar15, uVar16, param_8, in_stack_ffffffb8);
		SetupItem(iVar1);
		*piVar8 = *piVar8 + 1;
	}
	return;
}

void ItemRndDur(int param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int *piVar1;
	int *piVar2;
	int iVar3;
	longlong lVar4;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined1 in_stack_ffffffdb;

	piVar1 = (int *)(PTR_DAT_100f1940 + param_1 * 0x170 + 0xec);
	iVar3 = *piVar1;
	if ((iVar3 != 0) && (iVar3 != 0xff)) {
		piVar2 = (int *)(PTR_DAT_100f1940 + param_1 * 0x170 + 0xf0);
		lVar4 = random(0, (longlong)param_1 * 0x170 & 0xffffffff00000000U | (ulonglong)(uint)(*piVar2 >> 1), param_3, param_4, param_5, param_6, param_7,
		    param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdb);
		*piVar1 = (*piVar2 >> 2) + (int)lVar4 + 1;
	}
	return;
}

void SetupAllItems(undefined8 param_1, int param_2, ulonglong param_3, undefined8 param_4,
    ulonglong param_5, int param_6, int param_7, int param_8, undefined4 param_9)

{
	int iVar1;
	ushort *puVar2;
	int *piVar3;
	int iVar4;
	undefined *puVar5;
	longlong lVar6;
	int iVar7;
	undefined uVar8;
	undefined uVar9;
	char cVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	char cVar14;
	undefined uVar15;
	int iVar16;
	char cVar17;
	int iVar18;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;
	undefined4 in_stack_ffffffac;

	puVar5 = PTR_DAT_100f1940;
	uVar11 = (undefined)param_5;
	iVar7 = (int)param_4;
	cVar10 = (char)param_4;
	uVar15 = (undefined)param_8;
	uVar12 = (undefined)param_6;
	iVar4 = (int)param_1;
	iVar1 = iVar4 * 0x170;
	iVar16 = (int)param_3;
	*(int *)(PTR_DAT_100f1940 + iVar1) = iVar16;
	uVar13 = uVar12;
	cVar14 = (char)param_7;
	SetRndSeed(iVar16);
	uVar9 = (undefined)(iVar7 >> 1);
	GetItemAttrs(iVar4, param_2, param_3 & 0xffffffff00000000 | (ulonglong)(uint)(iVar7 >> 1), cVar10,
	    uVar11, uVar13, cVar14, uVar15, in_stack_ffffff98);
	puVar2 = (ushort *)(puVar5 + iVar1 + 4);
	*puVar2 = (ushort)param_4;
	if (param_8 != 0) {
		*puVar2 = *puVar2 | 0x8000;
	}
	if (param_6 != 0) {
		*puVar2 = *puVar2 | 0x40;
	}
	iVar18 = (int)param_5;
	if (iVar18 == 0xf) {
		*puVar2 = *puVar2 | 0x80;
	} else {
		if (iVar18 == 1) {
			*puVar2 = *puVar2 | 0x100;
		}
	}
	piVar3 = (int *)(puVar5 + iVar1 + 0xdc);
	if (*piVar3 == 0x1b) {
		if (puVar5[iVar1 + 0xbd] != '\a') {
			GetUniqueItem(iVar4, iVar16, uVar9, cVar10, uVar11, uVar13, cVar14, uVar15, in_stack_ffffff98);
		}
	} else {
		uVar8 = 100;
		lVar6 = random(0x20, 100, uVar9, cVar10, uVar11, uVar13, cVar14, uVar15, in_stack_ffffff98,
		    in_stack_ffffff9f, in_stack_ffffffab);
		iVar16 = iVar7;
		if (10 < (int)lVar6) {
			uVar8 = 100;
			lVar6 = random(0x21, 100, uVar9, cVar10, uVar11, uVar13, cVar14, uVar15, in_stack_ffffff98,
			    in_stack_ffffff9f, in_stack_ffffffab);
			iVar16 = -1;
			if ((int)lVar6 <= iVar7) {
				iVar16 = iVar7;
			}
		}
		if ((iVar16 == -1) && (*piVar3 == 0x17)) {
			iVar16 = iVar7;
		}
		if ((iVar16 == -1) && (*piVar3 == 0x19)) {
			iVar16 = iVar7;
		}
		if ((iVar16 == -1) && (*piVar3 == 0x1a)) {
			iVar16 = iVar7;
		}
		if (param_6 != 0) {
			iVar16 = iVar7;
		}
		if (iVar18 == 0xf) {
			iVar16 = iVar7 + 4;
		}
		cVar17 = (char)iVar16;
		if (iVar16 != -1) {
			cVar10 = (char)param_7;
			iVar7 = CheckUnique(iVar4, cVar17, iVar18, param_7, uVar11, uVar13, cVar14, uVar15, in_stack_ffffff98);
			uVar9 = (undefined)param_5;
			uVar8 = (undefined)iVar7;
			if (iVar7 == -1) {
				uVar9 = (undefined)(iVar16 >> 1);
				uVar8 = (char)param_2;
				cVar10 = cVar17;
				uVar11 = uVar12;
				GetItemBonus(param_1, param_2, param_5 & 0xffffffff00000000 | (ulonglong)(uint)(iVar16 >> 1),
				    cVar17, uVar12, uVar13, cVar14, uVar15, in_stack_ffffff98, in_stack_ffffff9f,
				    in_stack_ffffffac);
			} else {
				GetUniqueItem(iVar4, iVar7, uVar9, cVar10, uVar11, uVar13, cVar14, uVar15, in_stack_ffffff98);
				*puVar2 = *puVar2 | 0x200;
			}
		}
		if (puVar5[iVar1 + 0x3c] != '\x02') {
			ItemRndDur(iVar4, uVar8, uVar9, cVar10, uVar11, uVar13, cVar14, uVar15, in_stack_ffffff98);
		}
	}
	SetupItem(iVar4);
	return;
}

void SpawnItem(int param_1, int param_2, int param_3, int param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	char *pcVar1;
	uint uVar2;
	int iVar3;
	undefined *puVar4;
	uint uVar5;
	undefined *puVar6;
	uint *puVar7;
	int *piVar8;
	undefined **ppuVar9;
	ulonglong uVar10;
	longlong lVar11;
	ulonglong uVar12;
	undefined uVar13;
	undefined uVar14;
	undefined uVar15;
	undefined uVar16;
	int unaff_r24;
	int iVar17;
	int iVar18;
	undefined4 in_stack_ffffff98;

	piVar8 = _DAT_100f1dec;
	puVar7 = _DAT_100f1ddc;
	puVar6 = PTR_DAT_100f187c;
	uVar15 = (undefined)param_4;
	uVar13 = (undefined)param_2;
	ppuVar9 = &toc;
	iVar18 = param_1 * 0xe8;
	uVar16 = SUB41(PTR_DAT_100f19cc, 0);
	pcVar1 = PTR_DAT_100f187c + iVar18 + 0xc0;
	if ((*pcVar1 == '\0') && ((uVar13 = (undefined) * (int *)(PTR_DAT_100f187c + iVar18 + 0xe4), (*(ushort *)(*(int *)(PTR_DAT_100f187c + iVar18 + 0xe4) + 0x78) & 0x8000) == 0 || (uVar13 = SUB41(PTR_DAT_100f17e0, 0), *PTR_DAT_100f17e0 == '\x01')))) {
		if (PTR_DAT_100f19cc[0x1a] == '\x02') {
			uVar13 = (undefined)(ZEXT48(PTR_DAT_100f19cc) + 0x27);
			if (PTR_DAT_100f19cc[0x27] == '\x05') {
				*(undefined *)(ZEXT48(PTR_DAT_100f19cc) + 0x27) = 6;
				iVar17 = 0x12;
				goto LAB_1004f670;
			}
		}
		ppuVar9 = &toc;
		lVar11 = RndItem(param_1, uVar13, (char)param_3, uVar15, uVar16, param_6, param_7, param_8,
		    in_stack_ffffff98);
		iVar17 = (int)lVar11;
		if (iVar17 == 0) {
			return;
		}
		if (iVar17 < 1) {
			SpawnUnique(-(iVar17 + 1), param_2, param_3, uVar15, uVar16, param_6, param_7, param_8,
			    in_stack_ffffff98);
			return;
		}
		iVar17 = iVar17 + -1;
		unaff_r24 = 0;
	} else {
		ppuVar9 = &toc;
		uVar10 = RndUItem(param_1, uVar13, (char)param_3, uVar15, uVar16, param_6, param_7, param_8,
		    in_stack_ffffff98);
		iVar17 = (int)uVar10;
		if ((longlong)uVar10 < 0) {
			SpawnUnique(-(iVar17 + 1), param_2, param_3, uVar15, uVar16, param_6, param_7, param_8,
			    in_stack_ffffff98);
			return;
		}
		unaff_r24 = 1;
	}
LAB_1004f670:
	if (*piVar8 < 0x7f) {
		uVar2 = *puVar7;
		uVar10 = (ulonglong)uVar2;
		GetSuperItemSpace(param_2, param_3, (char)uVar2, uVar15, uVar16, param_6, param_7, param_8, in_stack_ffffff98);
		iVar3 = *piVar8;
		puVar4 = ppuVar9[-0x1c78];
		uVar5 = puVar7[0x7e - iVar3];
		*puVar7 = uVar5;
		*(uint *)(puVar4 + iVar3 * 4) = uVar2;
		uVar14 = (undefined)uVar5;
		uVar13 = SUB41(puVar4, 0);
		if (*pcVar1 == '\0') {
			uVar12 = GetRndSeed(uVar13, uVar14, (char)iVar3, uVar15, uVar16, param_6, param_7, param_8,
			    in_stack_ffffff98);
			SetupAllItems(uVar10, iVar17, uVar12, (longlong) * (char *)(*(int *)(puVar6 + iVar18 + 0xe4) + 0x56), 1, unaff_r24, 0, 0, in_stack_ffffff98);
		} else {
			uVar12 = GetRndSeed(uVar13, uVar14, (char)iVar3, uVar15, uVar16, param_6, param_7, param_8,
			    in_stack_ffffff98);
			SetupAllItems(uVar10, iVar17, uVar12, (longlong) * (char *)(*(int *)(puVar6 + iVar18 + 0xe4) + 0x56), 0xf, unaff_r24, 0, 0, in_stack_ffffff98);
		}
		*piVar8 = *piVar8 + 1;
		if (param_4 != 0) {
			NetSendCmdDItem(0, uVar10);
		}
	}
	return;
}

void CreateItem(int param_1, int param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int *piVar6;
	int *piVar7;
	ulonglong uVar8;
	int iVar9;
	int iVar10;
	byte bVar11;
	undefined uVar12;
	undefined uVar13;
	longlong lVar14;
	undefined uVar15;
	undefined uVar16;
	undefined4 in_stack_ffffffb8;

	piVar7 = _DAT_100f1dec;
	piVar6 = _DAT_100f1ddc;
	uVar8 = ZEXT48(&toc);
	if (*_DAT_100f1dec < 0x7f) {
		iVar1 = *_DAT_100f1ddc;
		GetSuperItemSpace(param_2, param_3, (char)iVar1, param_4, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		iVar2 = *piVar7;
		uVar16 = (undefined)iVar2;
		iVar9 = (int)uVar8;
		iVar3 = *(int *)(iVar9 + -0x71e0);
		uVar12 = (undefined)iVar3;
		iVar4 = *(int *)(iVar9 + -0x718c);
		lVar14 = uVar8 + 0x3858;
		iVar5 = piVar6[0x7e - iVar2];
		uVar13 = (undefined)iVar5;
		iVar10 = 0;
		*piVar6 = iVar5;
		*(int *)(iVar3 + iVar2 * 4) = iVar1;
		while (uVar15 = (undefined)lVar14,
		    *(char *)((int)lVar14 + 0xd) != *(char *)(iVar4 + param_1 * 0x54 + 4)) {
			lVar14 = lVar14 + 0x4c;
			iVar10 = iVar10 + 1;
		}
		bVar11 = **(byte **)(iVar9 + -0x77e4);
		GetItemAttrs(iVar1, iVar10, (ulonglong)bVar11, uVar12, uVar13, uVar15, uVar16, param_8,
		    in_stack_ffffffb8);
		GetUniqueItem(iVar1, param_1, bVar11, uVar12, uVar13, uVar15, uVar16, param_8, in_stack_ffffffb8);
		SetupItem(iVar1);
		*(undefined *)(*(int *)(iVar9 + -0x7690) + iVar1 * 0x170 + 0x3c) = 2;
		*piVar7 = *piVar7 + 1;
	}
	return;
}

void CreateRndItem(int param_1, int param_2, longlong param_3, int param_4, int param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	uint uVar4;
	uint *puVar5;
	int *piVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined4 in_stack_ffffffa8;

	piVar6 = _DAT_100f1dec;
	puVar5 = _DAT_100f1ddc;
	uVar10 = (undefined)param_5;
	uVar9 = (undefined)param_4;
	ppuVar7 = &toc;
	if (param_3 == 0) {
		uVar8 = RndAllItems((char)param_1, (char)param_2, (char)param_3, uVar9, uVar10, param_6, param_7,
		    param_8, in_stack_ffffffa8);
		uVar8._4_4_ = (int)uVar8;
	} else {
		uVar8 = RndUItem(-1, (char)param_2, (char)param_3, uVar9, uVar10, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		uVar8._4_4_ = (int)uVar8;
	}
	if (*piVar6 < 0x7f) {
		uVar1 = *puVar5;
		GetSuperItemSpace(param_1, param_2, (char)uVar1, uVar9, uVar10, param_6, param_7, param_8, in_stack_ffffffa8);
		iVar2 = *piVar6;
		puVar3 = ppuVar7[-0x1c78];
		uVar4 = puVar5[0x7e - iVar2];
		*puVar5 = uVar4;
		*(uint *)(puVar3 + iVar2 * 4) = uVar1;
		uVar8 = GetRndSeed((char)puVar3, (char)uVar4, (char)iVar2, uVar9, uVar10, param_6, param_7, param_8,
		    in_stack_ffffffa8);
		SetupAllItems((ulonglong)uVar1, uVar8._4_4_, uVar8, (ulonglong)(byte)*ppuVar7[-0x1df9] << 1, 1,
		    (int)param_3, 0, param_5, in_stack_ffffffa8);
		if (param_4 != 0) {
			NetSendCmdDItem(0, (ulonglong)uVar1);
		}
		if (param_5 != 0) {
			DeltaAddItem(uVar1);
		}
		*piVar6 = *piVar6 + 1;
	}
	return;
}

void SetupAllUseful(int param_1, undefined4 param_2, longlong param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	longlong lVar2;
	undefined uVar3;
	int iVar4;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	puVar1 = PTR_DAT_100f1940;
	uVar3 = (undefined)param_3;
	*(undefined4 *)(PTR_DAT_100f1940 + param_1 * 0x170) = param_2;
	SetRndSeed(param_2);
	lVar2 = random(0x22, 2, uVar3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8,
	    in_stack_ffffffbf, in_stack_ffffffcb);
	if ((int)lVar2 == 0) {
		iVar4 = 0x19;
	} else {
		iVar4 = 0x18;
	}
	if ((1 < (int)param_3) && (lVar2 = random(0x22, 3, uVar3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb), (int)lVar2 == 0)) {
		iVar4 = 0x1b;
	}
	GetItemAttrs(param_1, iVar4, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	*(short *)(puVar1 + param_1 * 0x170 + 4) = (short)param_3 + 0x180;
	SetupItem(param_1);
	return;
}

void CreateRndUseful(undefined4 param_1, int param_2, int param_3, int param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9,
    undefined param_10, undefined4 param_11)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	uint uVar4;
	uint *puVar5;
	int *piVar6;
	undefined **ppuVar7;
	undefined4 uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffb8;

	piVar6 = _DAT_100f1dec;
	puVar5 = _DAT_100f1ddc;
	uVar9 = (undefined)param_4;
	ppuVar7 = &toc;
	if (*_DAT_100f1dec < 0x7f) {
		uVar1 = *_DAT_100f1ddc;
		GetSuperItemSpace(param_2, param_3, (char)uVar1, uVar9, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		iVar2 = *piVar6;
		puVar3 = ppuVar7[-0x1c78];
		uVar4 = puVar5[0x7e - iVar2];
		*puVar5 = uVar4;
		*(uint *)(puVar3 + iVar2 * 4) = uVar1;
		uVar8 = GetRndSeed((char)puVar3, (char)uVar4, (char)iVar2, uVar9, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		SetupAllUseful(uVar1, uVar8, (ulonglong)(byte)*ppuVar7[-0x1df9], uVar9, param_5, param_6, param_7,
		    param_8, in_stack_ffffffb8);
		if (param_4 != 0) {
			NetSendCmdDItem(0, (ulonglong)uVar1);
		}
		*piVar6 = *piVar6 + 1;
	}
	return;
}

void CreateTypeItem(int param_1, int param_2, int param_3, undefined8 param_4, int param_5, int param_6,
    int param_7, undefined param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	uint uVar4;
	uint *puVar5;
	int *piVar6;
	undefined **ppuVar7;
	ulonglong uVar8;
	char cVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined4 in_stack_ffffffa8;

	piVar6 = _DAT_100f1dec;
	puVar5 = _DAT_100f1ddc;
	cVar9 = (char)param_4;
	uVar12 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	uVar10 = (undefined)param_5;
	ppuVar7 = &toc;
	if ((int)param_4 == 0xb) {
		uVar8._4_4_ = 0;
	} else {
		ppuVar7 = &toc;
		uVar8 = RndTypeItems(cVar9, param_5, (char)param_3, cVar9, uVar10, uVar11, uVar12, param_8,
		    in_stack_ffffffa8);
		uVar8._4_4_ = (int)uVar8;
	}
	if (*piVar6 < 0x7f) {
		uVar1 = *puVar5;
		GetSuperItemSpace(param_1, param_2, (char)uVar1, cVar9, uVar10, uVar11, uVar12, param_8, in_stack_ffffffa8);
		iVar2 = *piVar6;
		puVar3 = ppuVar7[-0x1c78];
		uVar4 = puVar5[0x7e - iVar2];
		*puVar5 = uVar4;
		*(uint *)(puVar3 + iVar2 * 4) = uVar1;
		uVar8 = GetRndSeed((char)puVar3, (char)uVar4, (char)iVar2, cVar9, uVar10, uVar11, uVar12, param_8,
		    in_stack_ffffffa8);
		SetupAllItems((ulonglong)uVar1, uVar8._4_4_, uVar8, (ulonglong)(byte)*ppuVar7[-0x1df9] << 1, 1,
		    param_3, 0, param_7, in_stack_ffffffa8);
		if (param_6 != 0) {
			NetSendCmdDItem(0, (ulonglong)uVar1);
		}
		if (param_7 != 0) {
			DeltaAddItem(uVar1);
		}
		*piVar6 = *piVar6 + 1;
	}
	return;
}

void RecreateItem(undefined8 param_1, int param_2, ulonglong param_3, ulonglong param_4, int param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	int iVar1;
	undefined4 *puVar2;
	undefined uVar3;
	undefined uVar5;
	ulonglong uVar4;
	undefined uVar6;
	uint uVar7;
	undefined4 uVar8;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffd8;

	uVar3 = (undefined)param_3;
	uVar6 = SUB41(PTR_DAT_100f1940, 0);
	uVar8 = (undefined4)param_4;
	uVar5 = (undefined)param_5;
	iVar1 = (int)param_1;
	if (param_2 == 0) {
		puVar2 = (undefined4 *)(PTR_DAT_100f1940 + iVar1 * 0x170);
		SetPlrHandItem((int)puVar2, 0, uVar3, (char)param_4, uVar5, uVar6, param_7, param_8, in_stack_ffffffb8);
		*puVar2 = uVar8;
		*(short *)(puVar2 + 1) = (short)param_3;
		puVar2[0x31] = param_5;
		if ((int)puVar2[0x31] < 0x9c4) {
			if (param_5 < 0x3e9) {
				puVar2[0x30] = 4;
			} else {
				puVar2[0x30] = 5;
			}
		} else {
			puVar2[0x30] = 6;
		}
	} else {
		uVar7 = (uint)param_3;
		if ((param_3 & 0xffff) == 0) {
			puVar2 = (undefined4 *)(PTR_DAT_100f1940 + iVar1 * 0x170);
			SetPlrHandItem((int)puVar2, param_2, uVar3, uVar3, uVar5, uVar6, param_7, param_8, in_stack_ffffffb8);
			SetPlrHandSeed(puVar2, uVar8);
		} else {
			if ((param_3 & 0x7c00) == 0) {
				if ((uVar7 & 0x180) == 0x180) {
					SetupAllUseful(iVar1, uVar8, (ulonglong)(uVar7 & 0x3f), uVar3, uVar5, uVar6, param_7, param_8,
					    in_stack_ffffffb8);
				} else {
					uVar4 = (ulonglong)((param_3 & 0x100) != 0);
					if ((param_3 & 0x80) != 0) {
						uVar4 = 0xf;
					}
					SetupAllItems(param_1, param_2, param_4, (ulonglong)(uVar7 & 0x3f), uVar4,
					    (uint)((param_3 & 0x40) != 0), (uint)((param_3 & 0x200) != 0),
					    (uint)((param_3 & 0x8000) != 0), in_stack_ffffffb8);
				}
			} else {
				RecreateTownItem(param_1, param_2, uVar7, uVar8, param_5, uVar6, param_7, param_8, in_stack_ffffffb8,
				    in_stack_ffffffbf, in_stack_ffffffd8);
			}
		}
	}
	return;
}

void RecreateEar(int param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9, undefined param_10, uint param_11, uint param_12)

{
	undefined *puVar1;
	uint uVar2;
	uint uVar3;
	uint uVar4;
	uint uVar5;
	undefined *puVar6;
	undefined **ppuVar7;
	undefined4 *puVar8;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined4 in_stack_ffffffac;
	undefined4 in_stack_ffffffb0;
	undefined4 in_stack_ffffffb4;
	undefined4 in_stack_ffffffb8;
	undefined4 in_stack_ffffffbc;
	undefined4 in_stack_ffffffc0;
	undefined4 in_stack_ffffffc4;

	puVar6 = PTR_DAT_100f191c;
	ppuVar7 = &toc;
	puVar8 = (undefined4 *)(PTR_DAT_100f1940 + param_1 * 0x170);
	SetPlrHandItem((int)puVar8, 0x17, (byte)param_3, (byte)param_4, (byte)param_5, (byte)param_6,
	    (byte)param_7, (byte)param_8, in_stack_ffffff98);
	puVar1 = ppuVar7[-0x17e3];
	*puVar6 = (byte)((ulonglong)param_2 >> 8) & 0x7f;
	puVar6[1] = (byte)param_2 & 0x7f;
	puVar6[2] = (byte)((uint)param_3 >> 0x18) & 0x7f;
	puVar6[3] = (byte)((uint)param_3 >> 0x10) & 0x7f;
	puVar6[4] = (byte)((uint)param_3 >> 8) & 0x7f;
	puVar6[5] = (byte)param_3 & 0x7f;
	uVar2 = param_11 >> 8 & 0x7f;
	puVar6[6] = (byte)param_4 & 0x7f;
	uVar3 = param_12 >> 0x18 & 0x7f;
	uVar4 = param_12 >> 0x10 & 0x7f;
	puVar6[7] = (byte)param_5 & 0x7f;
	uVar5 = param_12 >> 8 & 0x7f;
	puVar6[8] = (byte)param_6 & 0x7f;
	puVar6[9] = (byte)param_7 & 0x7f;
	puVar6[10] = (byte)param_8 & 0x7f;
	puVar6[0xb] = (char)uVar2;
	puVar6[0xc] = (char)uVar3;
	puVar6[0xd] = (char)uVar4;
	puVar6[0xe] = (char)uVar5;
	puVar6[0xf] = (char)(param_12 & 0x7f);
	puVar6[0x10] = 0;
	sprintf((int)((int)puVar8 + 0x3d), puVar1, puVar6, param_12 & 0x7f, uVar5, uVar4, uVar3, uVar2,
	    in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac, in_stack_ffffffb0,
	    in_stack_ffffffb4, in_stack_ffffffb8, in_stack_ffffffbc, in_stack_ffffffc0,
	    in_stack_ffffffc4);
	puVar8[0x30] = (param_11 >> 6 & 3) + 0x13;
	puVar8[0x31] = param_11 & 0x3f;
	*(short *)(puVar8 + 1) = (short)param_2;
	*puVar8 = param_3;
	return;
}

void SpawnQuestItem(int param_1, int param_2, int param_3, longlong param_4, undefined8 param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	int *piVar2;
	byte *pbVar3;
	int *piVar4;
	int *piVar5;
	uint uVar6;
	ulonglong uVar7;
	undefined **ppuVar8;
	longlong lVar9;
	undefined8 uVar10;
	longlong lVar11;
	undefined8 uVar12;
	char cVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	undefined *puVar21;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;

	piVar5 = _DAT_100f1dec;
	piVar4 = _DAT_100f1ddc;
	puVar21 = PTR_DAT_100f1940;
	lVar16 = (longlong)param_8;
	lVar15 = (longlong)param_7;
	lVar14 = (longlong)param_6;
	lVar11 = (longlong)param_3;
	uVar7 = ZEXT48(&toc);
	ppuVar8 = &toc;
	if (param_4 != 0) {
		iVar18 = 0;
		uVar12 = param_5;
		lVar17 = param_4;
		do {
			iVar18 = iVar18 + 1;
			if ((1000 < iVar18) && (1 < (int)lVar17)) {
				lVar17 = lVar17 + -1;
			}
			lVar9 = random(0, 0x70, (char)lVar11, (char)param_4, (char)uVar12, (char)lVar14, (char)lVar15,
			    (char)lVar16, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
			param_2 = (int)lVar9;
			lVar9 = random(0, 0x70, (char)lVar11, (char)param_4, (char)uVar12, (char)lVar14, (char)lVar15,
			    (char)lVar16, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
			param_3 = (int)lVar9;
			uVar6 = 0;
			iVar20 = 0;
			while (true) {
				param_8 = (char)lVar16;
				param_7 = (char)lVar15;
				param_6 = (char)lVar14;
				ppuVar8 = (undefined **)uVar7;
				if (((int)lVar17 <= iVar20) || (uVar6 != 0))
					break;
				iVar19 = 0;
				while ((iVar19 < (int)lVar17 && (uVar6 == 0))) {
					uVar10 = ItemSpaceOk(param_2 + iVar20, param_3 + iVar19);
					uVar10 = countLeadingZeros((int)uVar10);
					iVar19 = iVar19 + 1;
					uVar6 = (uint)uVar10 >> 5 & 0xff;
				}
				iVar20 = iVar20 + 1;
			}
		} while (uVar6 != 0);
	}
	iVar18 = *piVar5;
	if (iVar18 < 0x7f) {
		iVar20 = *piVar4;
		puVar1 = ppuVar8[-0x1c78];
		piVar2 = (int *)ppuVar8[-0x1da3];
		cVar13 = (char)iVar20 + '\x01';
		*piVar4 = piVar4[0x7e - iVar18];
		*(int *)(puVar1 + iVar18 * 4) = iVar20;
		puVar21 = puVar21 + iVar20 * 0x170;
		pbVar3 = ppuVar8[-0x1df9];
		*(int *)(puVar21 + 0xc) = param_2;
		*(int *)(puVar21 + 0x10) = param_3;
		iVar18 = *piVar2;
		*(char *)(iVar18 + param_2 * 0x70 + param_3) = cVar13;
		GetItemAttrs(iVar20, param_1, (ulonglong)*pbVar3, (char)iVar18, cVar13, param_6, param_7, param_8,
		    in_stack_ffffff98);
		SetupItem(iVar20);
		*(undefined4 *)(puVar21 + 0x34) = 1;
		if ((int)param_5 != 0) {
			puVar21[0x30] = (char)param_5;
			*(undefined4 *)(puVar21 + 0x20) = *(undefined4 *)(puVar21 + 0x1c);
			*(undefined4 *)(puVar21 + 0x14) = 0;
		}
		*piVar5 = *piVar5 + 1;
	}
	return;
}

void SpawnRock(void)

{
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	undefined *puVar5;
	undefined *puVar6;
	undefined *puVar7;
	int *piVar8;
	undefined8 uVar9;
	uint uVar10;
	int *piVar11;
	int in_r7;
	char cVar12;
	int iVar13;
	undefined *puVar14;
	undefined *puVar15;
	undefined4 in_stack_ffffffb8;

	iVar2 = _DAT_100f1df0;
	piVar8 = _DAT_100f1dec;
	puVar7 = PTR_DAT_100f1944;
	puVar6 = PTR_DAT_100f1940;
	puVar5 = PTR_DAT_100f17ec;
	iVar13 = 0;
	uVar10 = 0;
	piVar11 = (int *)PTR_DAT_100f1e40;
	while ((iVar13 < *(int *)PTR_DAT_100f1e3c && (uVar10 == 0))) {
		in_r7 = *piVar11;
		piVar11 = piVar11 + 1;
		iVar13 = iVar13 + 1;
		uVar9 = countLeadingZeros(0x17 - *(int *)(PTR_DAT_100f1948 + in_r7 * 0x78));
		uVar10 = (uint)uVar9 >> 5 & 0xff;
	}
	if (uVar10 != 0) {
		iVar13 = *_DAT_100f1dec;
		iVar1 = *_DAT_100f1ddc;
		puVar14 = PTR_DAT_100f1948 + in_r7 * 0x78;
		cVar12 = (char)iVar1 + '\x01';
		*_DAT_100f1ddc = _DAT_100f1ddc[0x7e - iVar13];
		*(int *)(iVar2 + iVar13 * 4) = iVar1;
		puVar15 = puVar6 + iVar1 * 0x170;
		iVar2 = *(int *)(puVar14 + 4);
		*(int *)(puVar15 + 0xc) = iVar2;
		iVar3 = *(int *)(puVar14 + 8);
		*(int *)(puVar15 + 0x10) = iVar3;
		iVar4 = *(int *)puVar7;
		*(char *)(iVar4 + iVar2 * 0x70 + iVar3) = cVar12;
		GetItemAttrs(iVar1, 9, (ulonglong)(byte)*puVar5, (char)iVar4, cVar12, (char)iVar3, (char)puVar6,
		    (char)iVar13, in_stack_ffffffb8);
		SetupItem(iVar1);
		puVar15[0x30] = 2;
		*(undefined4 *)(puVar15 + 0x34) = 1;
		*(undefined4 *)(puVar15 + 0x20) = 0xb;
		*piVar8 = *piVar8 + 1;
	}
	return;
}

void RespawnItem(longlong param_1, int param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	byte bVar1;
	uint uVar2;
	int *piVar3;
	undefined *puVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	undefined *puVar8;
	int iVar9;
	longlong lVar10;
	undefined4 in_stack_ffffffb8;

	iVar9 = _DAT_100f3048;
	puVar8 = PTR_DAT_100f1940;
	lVar10 = ZEXT48(PTR_DAT_100f1940) + param_1 * 0x170;
	iVar7 = (int)(param_1 * 0x170);
	piVar3 = (int *)(PTR_DAT_100f1940 + iVar7 + 0xc0);
	iVar5 = (int)lVar10;
	bVar1 = PTR_DAT_100f1e00[*piVar3];
	iVar6 = (uint)bVar1 * 4;
	uVar2 = *(uint *)(PTR_DAT_100f3064 + iVar6);
	*(uint *)(iVar5 + 0x18) = uVar2;
	*(uint *)(iVar5 + 0x1c) = (uint) * (byte *)(iVar9 + (uint)bVar1);
	*(undefined4 *)(iVar5 + 0x24) = 0x60;
	*(undefined4 *)(iVar5 + 0x28) = 0x10;
	*(undefined4 *)(iVar5 + 0x34) = 0;
	*(undefined *)(iVar5 + 0x131) = 0;
	if (param_2 == 0) {
		*(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar5 + 0x1c);
		*(undefined4 *)(iVar5 + 0x14) = 0;
		*(undefined *)(iVar5 + 0x30) = 1;
	} else {
		*(undefined4 *)(iVar5 + 0x20) = 1;
		*(undefined4 *)(iVar5 + 0x14) = 1;
		*(undefined *)(iVar5 + 0x30) = 0;
	}
	iVar9 = _DAT_100f3040;
	if (*piVar3 == 0x4c) {
		puVar4 = puVar8 + iVar7;
		puVar4[0x30] = 1;
		PlaySfxLoc((ulonglong) * (uint *)(iVar9 + iVar6), (ulonglong) * (uint *)(puVar4 + 0xc),
		    (ulonglong) * (uint *)(puVar4 + 0x10), lVar10, (ulonglong)uVar2, iVar6,
		    (undefined4 *)(iVar5 + 0x1c), (uint)bVar1, in_stack_ffffffb8);
	}
	if (*piVar3 == 0x7e) {
		puVar8[iVar7 + 0x30] = 1;
	}
	if (*piVar3 == 0x8c) {
		puVar8[iVar7 + 0x30] = 1;
	}
	return;
}

void DeleteItem(undefined4 param_1, int param_2)

{
	int iVar1;
	int *piVar2;
	int iVar3;

	iVar3 = _DAT_100f1df0;
	piVar2 = _DAT_100f1dec;
	*(undefined4 *)(_DAT_100f1ddc + (0x7f - *_DAT_100f1dec) * 4) = param_1;
	*piVar2 = *piVar2 + -1;
	iVar1 = *piVar2;
	if (iVar1 < 1) {
		return;
	}
	if (param_2 == iVar1) {
		return;
	}
	*(undefined4 *)(iVar3 + param_2 * 4) = *(undefined4 *)(iVar3 + iVar1 * 4);
	return;
}

void ItemDoppel(void)

{
	char cVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	int iVar5;
	char *pcVar6;
	int iVar7;
	longlong lVar8;

	puVar4 = PTR_DAT_100f1e38;
	puVar3 = PTR_DAT_100f1944;
	puVar2 = PTR_DAT_100f1940;
	if (*PTR_DAT_100f17e0 == '\x01') {
		return;
	}
	lVar8 = 0x10;
	iVar7 = 0x10;
	iVar5 = 0x700;
	do {
		pcVar6 = (char *)(*(int *)puVar3 + iVar5 + *(int *)puVar4);
		cVar1 = *pcVar6;
		if (cVar1 != '\0') {
			if (*(int *)(puVar2 + ((int)cVar1 + -1) * 0x170 + 0xc) == iVar7) {
				if (*(int *)(puVar2 + ((int)cVar1 + -1) * 0x170 + 0x10) == *(int *)puVar4)
					goto LAB_100502d0;
			}
			*pcVar6 = '\0';
		}
	LAB_100502d0:
		pcVar6 = (char *)(*(int *)puVar3 + iVar5 + 0x70 + *(int *)puVar4);
		cVar1 = *pcVar6;
		if (cVar1 != '\0') {
			if (*(int *)(puVar2 + ((int)cVar1 + -1) * 0x170 + 0xc) == iVar7 + 1) {
				if (*(int *)(puVar2 + ((int)cVar1 + -1) * 0x170 + 0x10) == *(int *)puVar4)
					goto LAB_10050320;
			}
			*pcVar6 = '\0';
		}
	LAB_10050320:
		pcVar6 = (char *)(*(int *)puVar3 + iVar5 + 0xe0 + *(int *)puVar4);
		cVar1 = *pcVar6;
		if (cVar1 != '\0') {
			if (*(int *)(puVar2 + ((int)cVar1 + -1) * 0x170 + 0xc) == iVar7 + 2) {
				if (*(int *)(puVar2 + ((int)cVar1 + -1) * 0x170 + 0x10) == *(int *)puVar4)
					goto LAB_10050370;
			}
			*pcVar6 = '\0';
		}
	LAB_10050370:
		pcVar6 = (char *)(*(int *)puVar3 + iVar5 + 0x150 + *(int *)puVar4);
		cVar1 = *pcVar6;
		if (cVar1 != '\0') {
			if (*(int *)(puVar2 + ((int)cVar1 + -1) * 0x170 + 0xc) == iVar7 + 3) {
				if (*(int *)(puVar2 + ((int)cVar1 + -1) * 0x170 + 0x10) == *(int *)puVar4)
					goto LAB_100503c0;
			}
			*pcVar6 = '\0';
		}
	LAB_100503c0:
		pcVar6 = (char *)(*(int *)puVar3 + iVar5 + 0x1c0 + *(int *)puVar4);
		cVar1 = *pcVar6;
		if (cVar1 != '\0') {
			if (*(int *)(puVar2 + ((int)cVar1 + -1) * 0x170 + 0xc) == iVar7 + 4) {
				if (*(int *)(puVar2 + ((int)cVar1 + -1) * 0x170 + 0x10) == *(int *)puVar4)
					goto LAB_10050410;
			}
			*pcVar6 = '\0';
		}
	LAB_10050410:
		iVar5 = iVar5 + 0x230;
		iVar7 = iVar7 + 5;
		lVar8 = lVar8 + -1;
		if (lVar8 == 0) {
			*(int *)puVar4 = *(int *)puVar4 + 1;
			if (*(int *)puVar4 != 0x60) {
				return;
			}
			*(undefined4 *)puVar4 = 0x10;
			return;
		}
	} while (true);
}

void ProcessItems(void)

{
	undefined *puVar1;
	int *piVar2;
	undefined *puVar3;
	int iVar4;
	undefined8 in_r6;
	undefined8 in_r7;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined *puVar5;
	int iVar6;
	int *piVar7;
	int *piVar8;
	undefined4 in_stack_ffffffa8;

	iVar4 = _DAT_100f3040;
	puVar3 = PTR_DAT_100f1e00;
	piVar2 = _DAT_100f1dec;
	puVar1 = PTR_DAT_100f1940;
	iVar6 = 0;
	piVar8 = _DAT_100f1df0;
	while (iVar6 < *piVar2) {
		if (*(int *)(puVar1 + *piVar8 * 0x170 + 0x14) != 0) {
			puVar5 = puVar1 + *piVar8 * 0x170;
			piVar7 = (int *)(puVar5 + 0x20);
			*(int *)(puVar5 + 0x20) = *(int *)(puVar5 + 0x20) + 1;
			if (*(int *)(puVar5 + 0xc0) == 0x4c) {
				if ((puVar5[0x30] == '\x01') && (*piVar7 == 0xb)) {
					*piVar7 = 1;
				}
				if ((puVar5[0x30] == '\x02') && (*piVar7 == 0x15)) {
					*piVar7 = 0xb;
				}
			} else {
				if (*piVar7 == *(int *)(puVar5 + 0x1c) >> 1) {
					PlaySfxLoc((ulonglong) * (uint *)(iVar4 + (uint)(byte)puVar3[*(int *)(puVar5 + 0xc0)] * 4), (ulonglong) * (uint *)(puVar5 + 0xc), (ulonglong) * (uint *)(puVar5 + 0x10), in_r6, in_r7, in_r8, in_r9, in_r10, in_stack_ffffffa8);
				}
				if (*(int *)(puVar5 + 0x1c) <= *piVar7) {
					*piVar7 = *(int *)(puVar5 + 0x1c);
					*(undefined4 *)(puVar5 + 0x14) = 0;
					puVar5[0x30] = 1;
				}
			}
		}
		piVar8 = piVar8 + 1;
		iVar6 = iVar6 + 1;
	}
	ItemDoppel();
	return;
}

void FreeItemGFX(undefined param_1, char param_2, char param_3, char param_4, char param_5, char param_6, char param_7, char param_8, undefined4 param_9)

{
	longlong lVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	int iVar8;
	int **ppiVar9;
	undefined4 in_stack_ffffffc8;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	lVar1 = (longlong)param_2;
	iVar8 = 0;
	ppiVar9 = (int **)PTR_DAT_100f3064;
	do {
		mem_free_dbg(ppiVar9, (char)lVar1, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
		    (char)lVar7, in_stack_ffffffc8);
		iVar8 = iVar8 + 1;
		ppiVar9 = ppiVar9 + 1;
	} while (iVar8 < 0x23);
	return;
}

void GetItemFrm(int param_1)

{
	*(undefined4 *)(PTR_DAT_100f1940 + param_1 * 0x170 + 0x18) = *(undefined4 *)(PTR_DAT_100f3064 + (uint)(byte)PTR_DAT_100f1e00[*(int *)(PTR_DAT_100f1940 + param_1 * 0x170 + 0xc0)] * 4);
	return;
}

void GetItemStr(int iParm1)

{
	char cVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined **ppuVar6;
	undefined *puVar8;
	ulonglong uVar7;
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

	puVar5 = PTR_DAT_100f1940;
	puVar4 = PTR_DAT_100f192c;
	puVar3 = PTR_DAT_100f18a8;
	ppuVar6 = &toc;
	iParm1 = iParm1 * 0x170;
	puVar8 = PTR_DAT_100f1940 + iParm1;
	if (*(int *)(puVar8 + 8) == 0xb) {
		iVar2 = *(int *)(puVar8 + 0xc4);
		uVar7 = get_pieces_str(iVar2);
		sprintf((int)puVar4, ppuVar6[-0x17e5], iVar2, (int)uVar7, in_r7, in_r8, in_r9, in_r10,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
		    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
		    in_stack_ffffffe4);
	} else {
		if (*(int *)(puVar8 + 0x38) == 0) {
			strcpy((int)PTR_DAT_100f192c, (int)(PTR_DAT_100f1940 + iParm1 + 0x3d));
		} else {
			strcpy((int)PTR_DAT_100f192c, (int)(PTR_DAT_100f1940 + iParm1 + 0x7d));
		}
		cVar1 = puVar5[iParm1 + 0x3c];
		if (cVar1 == '\x01') {
			*puVar3 = 1;
		}
		if (cVar1 == '\x02') {
			*puVar3 = 3;
		}
	}
	return;
}

void CheckIdentify(ulonglong param_1, int param_2, undefined8 param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	int iVar2;
	undefined uVar3;
	ulonglong uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	int iVar10;
	undefined4 in_stack_ffffffc8;

	uVar9 = (undefined)param_8;
	uVar8 = (undefined)param_7;
	uVar7 = (undefined)param_6;
	uVar6 = (undefined)param_5;
	uVar5 = (undefined)param_4;
	ppuVar1 = &toc;
	uVar4 = ZEXT48(PTR_DAT_100f1828);
	uVar4._7_1_ = SUB41(PTR_DAT_100f1828, 0);
	iVar10 = (int)param_1;
	if (param_2 < 7) {
		iVar2 = iVar10 * 0x55ec + param_2 * 0x170 + 0x498;
	} else {
		iVar2 = iVar10 * 0x55ec + (param_2 + -7) * 0x170 + 0xea8;
	}
	*(undefined4 *)(PTR_DAT_100f1828 + iVar2 + 0x38) = 1;
	uVar3 = 1;
	CalcPlrInv(param_1, 1, uVar4, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	if (iVar10 == *(int *)ppuVar1[-0x1deb]) {
		NewCursor(1, uVar3, (undefined)uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
	}
	return;
}

void RepairItem(int param_1, longlong param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	int iVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	if (*(int *)(param_1 + 0xec) != *(int *)(param_1 + 0xf0)) {
		if (*(int *)(param_1 + 0xf0) < 1) {
			*(undefined4 *)(param_1 + 8) = 0xffffffff;
		} else {
			lVar9 = 0;
			do {
				lVar2 = random(0x25, param_2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
				    (char)lVar7, (char)lVar8, in_stack_ffffffb8, in_stack_ffffffbf,
				    in_stack_ffffffcb);
				lVar9 = param_2 + lVar2 + lVar9;
				iVar1 = *(int *)(param_1 + 0xf0) / ((int)param_2 + 9);
				if (iVar1 < 1) {
					iVar1 = 1;
				}
				*(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) - iVar1;
				if (*(int *)(param_1 + 0xf0) == 0) {
					*(undefined4 *)(param_1 + 8) = 0xffffffff;
					return;
				}
				iVar1 = *(int *)(param_1 + 0xec) + (int)lVar9;
			} while (iVar1 < *(int *)(param_1 + 0xf0));
			*(int *)(param_1 + 0xec) = iVar1;
			if (*(int *)(param_1 + 0xf0) < *(int *)(param_1 + 0xec)) {
				*(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xf0);
			}
		}
	}
	return;
}

void DoRepair(ulonglong param_1, int param_2, undefined8 param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	undefined **ppuVar2;
	int iVar3;
	undefined uVar4;
	ulonglong uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	undefined uVar13;
	undefined4 in_stack_ffffffb8;

	uVar9 = (undefined7)(param_5 >> 8);
	uVar10 = (undefined)param_5;
	uVar7 = (undefined7)(param_4 >> 8);
	uVar8 = (undefined)param_4;
	ppuVar2 = &toc;
	puVar1 = PTR_DAT_100f1828 + (int)param_1 * 0x55ec;
	uVar5 = (ulonglong) * (uint *)(puVar1 + 0x3c);
	PlaySfxLoc(0x55, (ulonglong) * (uint *)(puVar1 + 0x38), uVar5, param_4, param_5, (int)param_6,
	    (int)param_7, (int)param_8, in_stack_ffffffb8);
	if (param_2 < 7) {
		iVar3 = param_2 * 0x170 + 0x498;
	} else {
		iVar3 = (param_2 + -7) * 0x170 + 0xea8;
	}
	RepairItem((int)(puVar1 + iVar3), (longlong)(char)puVar1[0x1b4], (char)uVar5, uVar8, uVar10,
	    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8);
	uVar6 = (undefined)uVar5;
	uVar13 = (undefined)param_8;
	uVar12 = (undefined)param_7;
	uVar11 = (undefined)param_6;
	uVar4 = 1;
	CalcPlrInv(param_1, 1, uVar5, CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10), param_6, param_7, param_8,
	    in_stack_ffffffb8);
	if ((int)param_1 == *(int *)ppuVar2[-0x1deb]) {
		NewCursor(1, uVar4, uVar6, uVar8, uVar10, uVar11, uVar12, uVar13, in_stack_ffffffb8);
	}
	return;
}

void RechargeItem(int param_1, int param_2)

{
	int iVar1;

	if (*(int *)(param_1 + 0xe4) == *(int *)(param_1 + 0xe8)) {
		return;
	}
	do {
		*(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
		if (*(int *)(param_1 + 0xe8) == 0) {
			return;
		}
		*(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + param_2;
		iVar1 = *(int *)(param_1 + 0xe8);
	} while (*(int *)(param_1 + 0xe4) < iVar1);
	if (*(int *)(param_1 + 0xe4) <= iVar1) {
		return;
	}
	*(int *)(param_1 + 0xe4) = iVar1;
	return;
}

void DoRecharge(ulonglong param_1, int param_2, undefined8 param_3, ulonglong param_4,
    ulonglong param_5, ulonglong param_6, ulonglong param_7, ulonglong param_8,
    undefined4 param_9)

{
	undefined **ppuVar1;
	longlong lVar2;
	undefined uVar3;
	ulonglong uVar4;
	undefined7 uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined uVar8;
	undefined7 uVar9;
	undefined uVar10;
	undefined7 uVar11;
	undefined uVar12;
	undefined7 uVar13;
	undefined uVar14;
	int iVar15;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined1 in_stack_ffffffcb;

	uVar13 = (undefined7)(param_8 >> 8);
	uVar14 = (undefined)param_8;
	uVar11 = (undefined7)(param_7 >> 8);
	uVar12 = (undefined)param_7;
	uVar9 = (undefined7)(param_6 >> 8);
	uVar10 = (undefined)param_6;
	uVar7 = (undefined7)(param_5 >> 8);
	uVar8 = (undefined)param_5;
	uVar5 = (undefined7)(param_4 >> 8);
	uVar6 = (undefined)param_4;
	uVar3 = (undefined)param_2;
	ppuVar1 = &toc;
	uVar4 = ZEXT48(PTR_DAT_100f1828) + param_1 * 0x55ec;
	uVar4._7_1_ = (undefined)uVar4;
	if (param_2 < 7) {
		iVar15 = param_2 * 0x170 + 0x498;
	} else {
		iVar15 = (param_2 + -7) * 0x170 + 0xea8;
	}
	iVar15 = (int)uVar4 + iVar15;
	if ((*(int *)(iVar15 + 8) == 10) && (*(int *)(iVar15 + 0xe0) != 0)) {
		ppuVar1 = &toc;
		lVar2 = random(0x26, (longlong)((int)*(char *)((int)uVar4 + 0x1b4) / *(int *)(PTR_DAT_100f1934 + *(int *)(iVar15 + 0xe0) * 0x38 + 0xc)),
		    (undefined)uVar4, uVar6, uVar8, uVar10, uVar12, uVar14, in_stack_ffffffb8,
		    in_stack_ffffffbf, in_stack_ffffffcb);
		RechargeItem(iVar15, (int)lVar2 + 1);
		uVar4._7_1_ = (undefined)uVar4;
		uVar3 = 1;
		CalcPlrInv(param_1, 1, uVar4, CONCAT71(uVar5, uVar6), CONCAT71(uVar7, uVar8), CONCAT71(uVar9, uVar10),
		    CONCAT71(uVar11, uVar12), CONCAT71(uVar13, uVar14), in_stack_ffffffb8);
	}
	if ((int)param_1 == *(int *)ppuVar1[-0x1deb]) {
		NewCursor(1, uVar3, (undefined)uVar4, uVar6, uVar8, uVar10, uVar12, uVar14, in_stack_ffffffb8);
	}
	return;
}

void PrintItemOil(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	if (((longlong)param_1 & 0xffffffffU) < 0x14) {
		// WARNING: Could not recover jumptable at 0x10050a48. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(PTR_PTR_LAB_100f2ffc + (int)param_1 * 4))(*(code **)(PTR_PTR_LAB_100f2ffc + (int)param_1 * 4),
		    ZEXT48(PTR_s_decrease_strength_100f3010), param_3, param_4, param_5, param_6, param_7,
		    param_8);
		return;
	}
	return;
}

void PrintItemPower(char param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	code *UNRECOVERED_JUMPTABLE;

	if (((longlong)param_1 & 0xffffffffU) < 0x50) {
		UNRECOVERED_JUMPTABLE = *(code **)(_DAT_100f2ee0 + (int)param_1 * 4);
		// WARNING: Could not recover jumptable at 0x10050c58. Too many branches
		// WARNING: Treating indirect jump as call
		(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE, param_2, param_3, ZEXT48(PTR_s_armor_class___i_100f2fe8),
		    (ulonglong)_DAT_100f2fe4, ZEXT48(PTR_DAT_100f2ef0), param_7, param_8);
		return;
	}
	strcpy((int)PTR_DAT_100f191c, (int)PTR_s_Another_ability__NW__100f2ee4);
	return;
}

void DrawUTextBack(void)

{
	undefined **ppuVar1;
	longlong lVar2;
	undefined *puVar3;
	undefined *puVar4;
	longlong lVar5;
	undefined4 in_r8;
	undefined4 in_r9;
	undefined4 in_r10;
	undefined4 in_stack_ffffffc8;

	ppuVar1 = &toc;
	CelDecodeOnly(0x58, 0x1e7, (ulonglong) * (uint *)PTR_DAT_100f1e34, 1, 0x10f, in_r8, in_r9, in_r10,
	    in_stack_ffffffc8);
	lVar5 = 0x94;
	puVar4 = (undefined *)(*(int *)ppuVar1[-0x1e01] + 0x5ac5b);
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

void PrintUString(longlong param_1, int param_2, int param_3, ulonglong param_4, ulonglong param_5,
    undefined8 param_6, int param_7, int param_8, undefined4 param_9)

{
	byte bVar1;
	ulonglong uVar2;
	longlong lVar3;
	int iVar6;
	longlong lVar4;
	longlong lVar5;
	byte *pbVar7;
	longlong lVar8;
	ulonglong uVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	longlong lVar12;
	longlong lVar13;
	ulonglong uVar14;
	undefined4 in_stack_ffffff98;

	lVar13 = (longlong)param_8;
	lVar12 = (longlong)param_7;
	uVar11 = ZEXT48(PTR_DAT_100f1db4);
	param_1 = param_1 + (ulonglong) * (uint *)(PTR_DAT_100f1938 + *(int *)(PTR_DAT_100f1db4 + param_2 * 4) * 4 + 0x330) + 0x60;
	uVar9 = param_4;
	uVar10 = param_5;
	iVar6 = strlen((uint)param_4);
	uVar14 = 0;
	if (param_3 != 0) {
		lVar8 = 0;
		lVar8._4_4_ = 0;
		lVar4 = 0;
		if (0 < iVar6) {
			if ((8 < iVar6) && (uVar2 = (ulonglong)(iVar6 - 1U >> 3), 0 < iVar6 + -8)) {
				do {
					pbVar7 = (byte *)((uint)param_4 + (int)lVar4);
					lVar4 = lVar4 + 8;
					uVar11 = (ulonglong)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar7[5]]];
					uVar10 = (ulonglong)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar7[6]]];
					uVar9 = (ulonglong)(byte)(&DAT_100f64e8)[(uint)pbVar7[7]];
					lVar8 = (ulonglong)(byte)(&DAT_100f6230)
					            [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar7[7]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)pbVar7[6]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar7[5]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar7[4]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar7[3]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar7[2]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)pbVar7[1]]]]
					    + (ulonglong)(byte)(&DAT_100f6230)
					        [(uint)(byte)(&DAT_100f61b0)
					                [(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar7]]]
					    + lVar8 + 8;
					uVar2 = uVar2 - 1;
				} while (uVar2 != 0);
			}
			lVar8._4_4_ = (int)lVar8;
			lVar3 = (longlong)iVar6 - lVar4;
			lVar5 = param_4 + lVar4;
			if ((int)lVar4 < iVar6) {
				do {
					pbVar7 = (byte *)lVar5;
					lVar5 = lVar5 + 1;
					lVar8 = (ulonglong)(byte)(&DAT_100f6230)
					            [(uint)(byte)(&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint)*pbVar7]]]
					    + lVar8 + 1;
					lVar8._4_4_ = (int)lVar8;
					lVar3 = lVar3 + -1;
				} while (lVar3 != 0);
			}
		}
		if (lVar8._4_4_ < 0x101) {
			uVar14 = (ulonglong)(uint)(0x101 - lVar8._4_4_ >> 1);
		}
		param_1 = param_1 + uVar14;
	}
	lVar8._4_4_ = 0;
	while (lVar8._4_4_ < iVar6) {
		bVar1 = (&DAT_100f61b0)[(uint)(byte)(&DAT_100f64e8)[(uint) * (byte *)param_4]];
		uVar14 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + uVar14 + 1;
		if ((bVar1 != 0) && ((int)uVar14 < 0x102)) {
			CPrintString(param_1, (ulonglong)bVar1, param_5, uVar9, uVar10, (int)uVar11, (int)lVar12, (int)lVar13, in_stack_ffffff98);
		}
		lVar8._4_4_ = lVar8._4_4_ + 1;
		param_4 = param_4 + 1;
		param_1 = (ulonglong)(byte)(&DAT_100f6230)[(uint)bVar1] + param_1 + 1;
	}
	return;
}

void DrawULine(int param_1)

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
	local_10 = (undefined2 *)(*(int *)PTR_DAT_100f17cc + 0x22b5a);
	local_c = (undefined2 *)(*(int *)(PTR_DAT_100f1938 + *(int *)(PTR_DAT_100f1db4 + param_1 * 4) * 4 + 0x318) + *(int *)PTR_DAT_100f17cc + 0x5a);
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

void DrawUniqueInfo(void)

{
	int iVar1;
	int iVar2;
	undefined uVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined7 uVar7;
	undefined8 in_r8;
	undefined uVar8;
	undefined4 in_r9;
	undefined4 in_r10;
	int iVar9;
	char *pcVar10;
	int iVar11;
	ulonglong uVar12;
	undefined4 in_stack_ffffffa8;

	iVar2 = _DAT_100f1e44;
	iVar1 = _DAT_100f1e30;
	uVar8 = (undefined)in_r8;
	uVar7 = (undefined7)((ulonglong)in_r8 >> 8);
	uVar12 = ZEXT48(PTR_DAT_100f191c);
	uVar12._7_1_ = SUB41(PTR_DAT_100f191c, 0);
	if ((*(int *)PTR_DAT_100f180c == 0) && (*(int *)PTR_DAT_100f1808 == 0)) {
		iVar11 = *(int *)(_DAT_100f1e30 + 0x134);
		DrawUTextBack();
		iVar11 = iVar11 * 0x54;
		uVar5 = (undefined) * (uint *)(iVar2 + iVar11);
		uVar4 = 1;
		uVar6 = 3;
		PrintUString(0, 2, 1, (ulonglong) * (uint *)(iVar2 + iVar11), 3, CONCAT71(uVar7, uVar8), in_r9, in_r10,
		    in_stack_ffffffa8);
		DrawULine(5);
		iVar9 = iVar2 + iVar11;
		uVar3 = (undefined)iVar1;
		PrintItemPower(*(char *)(iVar9 + 0xc), uVar3, uVar4, uVar5, uVar6, uVar8, (char)in_r9, (char)in_r10,
		    in_stack_ffffffa8);
		pcVar10 = (char *)(iVar9 + 6);
		iVar1 = -(int)*(char *)(iVar9 + 6);
		uVar5 = 1;
		uVar6 = 0;
		uVar4 = (undefined)uVar12;
		PrintUString(0, iVar1 + 0xe, 1, uVar12, 0, CONCAT71(uVar7, uVar8), in_r9, in_r10, in_stack_ffffffa8);
		if ('\x01' < *pcVar10) {
			PrintItemPower(*(char *)(iVar9 + 0x18), uVar3, uVar5, uVar4, uVar6, uVar8, (char)in_r9, (char)in_r10,
			    in_stack_ffffffa8);
			uVar5 = 1;
			uVar6 = 0;
			uVar4 = (undefined)uVar12;
			PrintUString(0, iVar1 + 0x10, 1, uVar12, 0, CONCAT71(uVar7, uVar8), in_r9, in_r10, in_stack_ffffffa8);
		}
		if ('\x02' < *pcVar10) {
			PrintItemPower(*(char *)(iVar2 + iVar11 + 0x24), uVar3, uVar5, uVar4, uVar6, uVar8, (char)in_r9,
			    (char)in_r10, in_stack_ffffffa8);
			uVar5 = 1;
			uVar6 = 0;
			uVar4 = (undefined)uVar12;
			PrintUString(0, iVar1 + 0x12, 1, uVar12, 0, CONCAT71(uVar7, uVar8), in_r9, in_r10, in_stack_ffffffa8);
		}
		if ('\x03' < *pcVar10) {
			PrintItemPower(*(char *)(iVar2 + iVar11 + 0x30), uVar3, uVar5, uVar4, uVar6, uVar8, (char)in_r9,
			    (char)in_r10, in_stack_ffffffa8);
			uVar5 = 1;
			uVar6 = 0;
			uVar4 = (undefined)uVar12;
			PrintUString(0, iVar1 + 0x14, 1, uVar12, 0, CONCAT71(uVar7, uVar8), in_r9, in_r10, in_stack_ffffffa8);
		}
		if ('\x04' < *pcVar10) {
			PrintItemPower(*(char *)(iVar2 + iVar11 + 0x3c), uVar3, uVar5, uVar4, uVar6, uVar8, (char)in_r9,
			    (char)in_r10, in_stack_ffffffa8);
			uVar5 = 1;
			uVar6 = 0;
			uVar4 = (undefined)uVar12;
			PrintUString(0, iVar1 + 0x16, 1, uVar12, 0, CONCAT71(uVar7, uVar8), in_r9, in_r10, in_stack_ffffffa8);
		}
		if ('\x05' < *pcVar10) {
			PrintItemPower(*(char *)(iVar2 + iVar11 + 0x48), uVar3, uVar5, uVar4, uVar6, uVar8, (char)in_r9,
			    (char)in_r10, in_stack_ffffffa8);
			PrintUString(0, iVar1 + 0x18, 1, uVar12, 0, CONCAT71(uVar7, uVar8), in_r9, in_r10, in_stack_ffffffa8);
		}
	}
	return;
}

void PrintItemMisc(int param_1, undefined8 param_2, undefined8 param_3, undefined4 param_4,
    undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined uVar4;
	undefined uVar5;
	undefined uVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar2 = PTR_DAT_100f191c;
	ppuVar3 = &toc;
	if (*(int *)(param_1 + 0xdc) == 0x15) {
		ppuVar3 = &toc;
		strcpy((int)PTR_DAT_100f191c, (int)PTR_s_Command_click_to_read_100f2edc);
		param_2._7_1_ = 1;
		AddPanelString((int)puVar2, 1, (undefined)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	if (*(int *)(param_1 + 0xdc) == 0x16) {
		strcpy((int)puVar2, (int)ppuVar3[-0x183e]);
		AddPanelString((int)puVar2, 1, (undefined)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffc8);
		strcpy((int)puVar2, (int)ppuVar3[-0x183f]);
		param_2._7_1_ = 1;
		AddPanelString((int)puVar2, 1, (undefined)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	iVar1 = *(int *)(param_1 + 0xdc);
	if ((0 < iVar1) && (iVar1 < 0x15)) {
		PrintItemOil((char)iVar1, (undefined)param_2, (undefined)param_3, (char)param_4, (char)param_5,
		    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
		strcpy((int)puVar2, (int)ppuVar3[-0x1840]);
		AddPanelString((int)puVar2, 1, (undefined)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	if (*(int *)(param_1 + 0xdc) == 0x18) {
		strcpy((int)puVar2, (int)ppuVar3[-0x1841]);
		AddPanelString((int)puVar2, 1, (undefined)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	if (*(int *)(param_1 + 0xdc) == 0x2a) {
		strcpy((int)puVar2, (int)ppuVar3[-0x1842]);
		AddPanelString((int)puVar2, 1, (undefined)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	uVar9 = (undefined)param_8;
	uVar8 = (undefined)param_7;
	uVar7 = (undefined)param_6;
	uVar6 = (undefined)param_5;
	uVar5 = (undefined)param_4;
	if (*(int *)(param_1 + 0xdc) == 0x2b) {
		uVar4 = (undefined) * (undefined4 *)(param_1 + 0xc4);
		sprintf((int)puVar2, ppuVar3[-0x1843], *(undefined4 *)(param_1 + 0xc4), param_4, param_5,
		    param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
		    in_stack_fffffff0, in_stack_fffffff4);
		AddPanelString((int)puVar2, 1, uVar4, uVar5, uVar6, uVar7, uVar8, uVar9, in_stack_ffffffc8);
	}
	return;
}

void PrintItemDetails(longlong param_1, longlong param_2, ulonglong param_3, undefined4 param_4, int param_5, int param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined4 uVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	undefined uVar6;
	char cVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined uVar12;
	longlong lVar13;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;
	undefined4 in_stack_ffffffe8;
	undefined4 in_stack_ffffffec;
	undefined4 in_stack_fffffff0;
	undefined4 in_stack_fffffff4;

	puVar4 = PTR_DAT_100f191c;
	ppuVar5 = &toc;
	uVar12 = SUB41(PTR_DAT_100f191c, 0);
	iVar3 = (int)param_1;
	if (*(char *)(iVar3 + 0xbe) == '\x01') {
		param_6 = *(int *)(iVar3 + 0xf0);
		if (param_6 == 0xff) {
			param_3 = (ulonglong) * (uint *)(iVar3 + 0xcc);
			param_4 = *(undefined4 *)(iVar3 + 0xd0);
			ppuVar5 = &toc;
			sprintf((int)PTR_DAT_100f191c, PTR_s_damage___i__i_Indestructible_100f2ec0,
			    *(uint *)(iVar3 + 0xcc), param_4, param_5, 0xff, param_7, param_8, in_stack_ffffffc8,
			    in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
			    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		} else {
			param_3 = (ulonglong) * (uint *)(iVar3 + 0xcc);
			param_4 = *(undefined4 *)(iVar3 + 0xd0);
			param_5 = *(int *)(iVar3 + 0xec);
			ppuVar5 = &toc;
			sprintf((int)PTR_DAT_100f191c, PTR_s_damage___i__i_Dur___i__i_100f2ebc,
			    *(uint *)(iVar3 + 0xcc), param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
			    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		}
		param_2 = 1;
		AddPanelString((int)puVar4, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	if (*(char *)(iVar3 + 0xbe) == '\x02') {
		param_5 = *(int *)(iVar3 + 0xf0);
		if (param_5 == 0xff) {
			param_3 = (ulonglong) * (uint *)(iVar3 + 0xd4);
			sprintf((int)puVar4, ppuVar5[-0x1846], *(uint *)(iVar3 + 0xd4), param_4, 0xff, param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0,
			    in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0,
			    in_stack_fffffff4);
		} else {
			param_3 = (ulonglong) * (uint *)(iVar3 + 0xd4);
			param_4 = *(undefined4 *)(iVar3 + 0xec);
			sprintf((int)puVar4, ppuVar5[-0x1847], *(uint *)(iVar3 + 0xd4), param_4, param_5, param_6,
			    param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
			    in_stack_fffffff0, in_stack_fffffff4);
		}
		param_2 = 1;
		AddPanelString((int)puVar4, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	if ((*(int *)(iVar3 + 0xdc) == 0x17) && (*(int *)(iVar3 + 0xe8) != 0)) {
		param_5 = *(int *)(iVar3 + 0xec);
		param_6 = *(int *)(iVar3 + 0xf0);
		sprintf((int)puVar4, ppuVar5[-0x1848], *(undefined4 *)(iVar3 + 0xcc),
		    *(undefined4 *)(iVar3 + 0xd0), param_5, param_6, param_7, param_8, in_stack_ffffffc8,
		    in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4,
		    in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0, in_stack_fffffff4);
		param_3 = (ulonglong) * (uint *)(iVar3 + 0xe4);
		param_4 = *(undefined4 *)(iVar3 + 0xe8);
		sprintf((int)puVar4, ppuVar5[-0x1849], *(uint *)(iVar3 + 0xe4), param_4, param_5, param_6,
		    param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc,
		    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
		    in_stack_fffffff0, in_stack_fffffff4);
		param_2 = 1;
		AddPanelString((int)puVar4, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	if (*(char *)(iVar3 + 0x14c) != -1) {
		PrintItemPower(*(char *)(iVar3 + 0x14c), (char)param_1, (char)param_3, (char)param_4, (char)param_5,
		    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
		param_2 = 1;
		AddPanelString((int)puVar4, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	if (*(char *)(iVar3 + 0x14d) != -1) {
		PrintItemPower(*(char *)(iVar3 + 0x14d), (char)param_1, (char)param_3, (char)param_4, (char)param_5,
		    (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
		param_2 = 1;
		AddPanelString((int)puVar4, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffc8);
	}
	if (*(char *)(iVar3 + 0x3c) == '\x02') {
		AddPanelString((int)ppuVar5[-0x184a], 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
		    (char)param_7, (char)param_8, in_stack_ffffffc8);
		puVar1 = ppuVar5[-0x1c68];
		*(undefined4 *)ppuVar5[-0x1d9d] = 1;
		lVar13 = 0x2e;
		param_3 = ZEXT48(puVar1) - 8;
		param_2 = param_1 + -8;
		do {
			param_2 = param_2 + 8;
			uVar2 = ((undefined4 *)param_2)[1];
			param_3 = param_3 + 8;
			*(undefined4 *)param_3 = *(undefined4 *)param_2;
			((undefined4 *)param_3)[1] = uVar2;
			lVar13 = lVar13 + -1;
		} while (lVar13 != 0);
	}
	uVar6 = (undefined)param_3;
	PrintItemMisc(iVar3, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	if ((longlong) * (char *)(iVar3 + 0x160) + (ulonglong) * (byte *)(iVar3 + 0x161) + (longlong) * (char *)(iVar3 + 0x162) != 0) {
		strcpy((int)puVar4, (int)ppuVar5[-0x184b]);
		if (*(char *)(iVar3 + 0x160) != '\0') {
			uVar6 = uVar12;
			sprintf((int)puVar4, ppuVar5[-0x184c], puVar4, (int)*(char *)(iVar3 + 0x160), param_5, param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
			    in_stack_fffffff0, in_stack_fffffff4);
		}
		if (*(byte *)(iVar3 + 0x161) != 0) {
			uVar6 = uVar12;
			sprintf((int)puVar4, ppuVar5[-0x184d], puVar4, (uint) * (byte *)(iVar3 + 0x161), param_5,
			    param_6, param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec,
			    in_stack_fffffff0, in_stack_fffffff4);
		}
		uVar11 = (undefined)param_8;
		uVar10 = (undefined)param_7;
		uVar9 = (undefined)param_6;
		uVar8 = (undefined)param_5;
		cVar7 = *(char *)(iVar3 + 0x162);
		if (cVar7 != '\0') {
			uVar6 = uVar12;
			sprintf((int)puVar4, ppuVar5[-0x184e], puVar4, (int)cVar7, param_5, param_6, param_7, param_8,
			    in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc, in_stack_ffffffe0,
			    in_stack_ffffffe4, in_stack_ffffffe8, in_stack_ffffffec, in_stack_fffffff0,
			    in_stack_fffffff4);
		}
		AddPanelString((int)puVar4, 1, uVar6, cVar7, uVar8, uVar9, uVar10, uVar11, in_stack_ffffffc8);
	}
	*(undefined4 *)ppuVar5[-0x1db3] = 1;
	return;
}

void PrintItemDur(int param_1, undefined8 param_2, ulonglong param_3, int param_4, int param_5,
    int param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined **ppuVar4;
	undefined uVar5;
	char cVar6;
	undefined uVar7;
	undefined uVar8;
	undefined uVar9;
	undefined uVar10;
	undefined uVar11;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;
	undefined4 in_stack_ffffffd0;
	undefined4 in_stack_ffffffd4;
	undefined4 in_stack_ffffffd8;
	undefined4 in_stack_ffffffdc;
	undefined4 in_stack_ffffffe0;
	undefined4 in_stack_ffffffe4;

	puVar3 = PTR_s_Charges___i__i_100f2eac;
	puVar2 = PTR_s_Not_Identified_100f2e94;
	puVar1 = PTR_DAT_100f191c;
	ppuVar4 = &toc;
	uVar11 = SUB41(PTR_DAT_100f191c, 0);
	if (*(char *)(param_1 + 0xbe) == '\x01') {
		param_6 = *(int *)(param_1 + 0xf0);
		if (param_6 == 0xff) {
			param_3 = (ulonglong) * (uint *)(param_1 + 0xcc);
			param_4 = *(int *)(param_1 + 0xd0);
			ppuVar4 = &toc;
			sprintf((int)PTR_DAT_100f191c, PTR_s_damage___i__i_Indestructible_100f2ec0,
			    *(uint *)(param_1 + 0xcc), param_4, param_5, 0xff, param_7, param_8, in_stack_ffffffb8,
			    in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4,
			    in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0, in_stack_ffffffe4);
		} else {
			param_3 = (ulonglong) * (uint *)(param_1 + 0xcc);
			param_4 = *(int *)(param_1 + 0xd0);
			param_5 = *(int *)(param_1 + 0xec);
			ppuVar4 = &toc;
			sprintf((int)PTR_DAT_100f191c, PTR_s_damage___i__i_Dur___i__i_100f2ebc,
			    *(uint *)(param_1 + 0xcc), param_4, param_5, param_6, param_7, param_8,
			    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
			    in_stack_ffffffe4);
		}
		param_2 = 1;
		AddPanelString((int)puVar1, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8);
		if (*(int *)(param_1 + 0xdc) == 0x17) {
			param_4 = *(int *)(param_1 + 0xe8);
			if (param_4 != 0) {
				param_3 = (ulonglong) * (uint *)(param_1 + 0xe4);
				sprintf((int)puVar1, puVar3, *(uint *)(param_1 + 0xe4), param_4, param_5, param_6, param_7,
				    param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
				    in_stack_ffffffe4);
				param_2 = 1;
				AddPanelString((int)puVar1, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
				    (char)param_7, (char)param_8, in_stack_ffffffb8);
			}
		}
		if (*(char *)(param_1 + 0x3c) != '\0') {
			param_2 = 1;
			AddPanelString((int)puVar2, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffffb8);
		}
	}
	if (*(char *)(param_1 + 0xbe) == '\x02') {
		param_5 = *(int *)(param_1 + 0xf0);
		if (param_5 == 0xff) {
			param_3 = (ulonglong) * (uint *)(param_1 + 0xd4);
			sprintf((int)puVar1, ppuVar4[-0x1846], *(uint *)(param_1 + 0xd4), param_4, 0xff, param_6,
			    param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc,
			    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4);
		} else {
			param_3 = (ulonglong) * (uint *)(param_1 + 0xd4);
			param_4 = *(int *)(param_1 + 0xec);
			sprintf((int)puVar1, ppuVar4[-0x1847], *(uint *)(param_1 + 0xd4), param_4, param_5, param_6,
			    param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc,
			    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4);
		}
		param_2 = 1;
		AddPanelString((int)puVar1, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8);
		if (*(char *)(param_1 + 0x3c) != '\0') {
			param_2 = 1;
			AddPanelString((int)puVar2, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffffb8);
		}
		if ((*(int *)(param_1 + 0xdc) == 0x17) && (param_4 = *(int *)(param_1 + 0xe8), param_4 != 0)) {
			param_3 = (ulonglong) * (uint *)(param_1 + 0xe4);
			sprintf((int)puVar1, puVar3, *(uint *)(param_1 + 0xe4), param_4, param_5, param_6, param_7,
			    param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
			    in_stack_ffffffe4);
			param_2 = 1;
			AddPanelString((int)puVar1, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6,
			    (char)param_7, (char)param_8, in_stack_ffffffb8);
		}
	}
	if ((*(int *)(param_1 + 8) == 0xc) || (*(int *)(param_1 + 8) == 0xd)) {
		param_2 = 1;
		AddPanelString((int)puVar2, 1, (char)param_3, (char)param_4, (char)param_5, (char)param_6, (char)param_7, (char)param_8, in_stack_ffffffb8);
	}
	uVar5 = (undefined)param_3;
	PrintItemMisc(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	if ((longlong) * (char *)(param_1 + 0x160) + (ulonglong) * (byte *)(param_1 + 0x161) + (longlong) * (char *)(param_1 + 0x162) != 0) {
		strcpy((int)puVar1, (int)ppuVar4[-0x184b]);
		if (*(char *)(param_1 + 0x160) != '\0') {
			uVar5 = uVar11;
			sprintf((int)puVar1, ppuVar4[-0x184c], puVar1, (int)*(char *)(param_1 + 0x160), param_5,
			    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc,
			    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4);
		}
		if (*(byte *)(param_1 + 0x161) != 0) {
			uVar5 = uVar11;
			sprintf((int)puVar1, ppuVar4[-0x184d], puVar1, (uint) * (byte *)(param_1 + 0x161), param_5,
			    param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc,
			    in_stack_ffffffd0, in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc,
			    in_stack_ffffffe0, in_stack_ffffffe4);
		}
		uVar10 = (undefined)param_8;
		uVar9 = (undefined)param_7;
		uVar8 = (undefined)param_6;
		uVar7 = (undefined)param_5;
		cVar6 = *(char *)(param_1 + 0x162);
		if (cVar6 != '\0') {
			uVar5 = uVar11;
			sprintf((int)puVar1, ppuVar4[-0x184e], puVar1, (int)cVar6, param_5, param_6, param_7, param_8,
			    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc, in_stack_ffffffd0,
			    in_stack_ffffffd4, in_stack_ffffffd8, in_stack_ffffffdc, in_stack_ffffffe0,
			    in_stack_ffffffe4);
		}
		AddPanelString((int)puVar1, 1, uVar5, cVar6, uVar7, uVar8, uVar9, uVar10, in_stack_ffffffb8);
	}
	*(undefined4 *)ppuVar4[-0x1db3] = 1;
	return;
}

void UseItem(undefined8 param_1, uint param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	if (((longlong)(int)param_2 & 0xffffffffU) < 0x2d) {
		// WARNING: Could not recover jumptable at 0x10051e50. Too many branches
		// WARNING: Treating indirect jump as call
		(**(code **)(PTR_PTR_LAB_100f2e90 + param_2 * 4))(*(code **)(PTR_PTR_LAB_100f2e90 + param_2 * 4), (longlong)(int)param_2, param_3, param_4, param_5, param_6, param_7, param_8);
		return;
	}
	return;
}

ulonglong StoreStatOk(int param_1)

{
	int iVar1;
	ulonglong uVar2;

	iVar1 = *(int *)PTR_DAT_100f1824 * 0x55ec;
	uVar2 = (ulonglong)((int)*(char *)(param_1 + 0x160) <= *(int *)(PTR_DAT_100f1828 + iVar1 + 0x160));
	if (*(int *)(PTR_DAT_100f1828 + iVar1 + 0x168) < (int)(uint) * (byte *)(param_1 + 0x161)) {
		uVar2 = 0;
	}
	if (*(int *)(PTR_DAT_100f1828 + iVar1 + 0x170) < (int)*(char *)(param_1 + 0x162)) {
		uVar2 = 0;
	}
	return uVar2;
}

ulonglong SmithItemOk(int param_1)

{
	char cVar1;
	ulonglong uVar2;

	cVar1 = *(char *)(param_1 * 0x4c + 0x100fc834);
	uVar2 = (ulonglong)(cVar1 != '\0');
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
		return uVar2;
	}
	return 0;
}

longlong RndSmithItem(char param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	ulonglong uVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	uint uVar9;
	undefined8 unaff_r29;
	longlong lVar10;
	int iVar11;
	undefined8 unaff_r30;
	int *piVar12;
	undefined8 unaff_r31;
	undefined4 in_stack_fffff7b8;
	undefined in_stack_fffff7bf;
	undefined in_stack_fffff7cb;
	uint local_818[513];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar4 = (longlong)param_4;
	lVar3 = (longlong)param_3;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	piVar12 = (int *)0x100fc874;
	uVar9 = 1;
	lVar2 = 0;
	while (*(char *)((int)piVar12 + 5) != -1) {
		lVar10 = lVar2;
		if (((*piVar12 != 0) && (uVar1 = SmithItemOk(uVar9), lVar10 = lVar2, (int)uVar1 != 0)) && (lVar10 = lVar2, *(char *)(piVar12 + 6) <= param_1)) {
			lVar10 = lVar2 + 1;
			local_818[(int)lVar2] = uVar9;
			if (*piVar12 == 2) {
				iVar11 = (int)lVar10;
				lVar10 = lVar2 + 2;
				local_818[iVar11] = uVar9;
			}
		}
		piVar12 = piVar12 + 0x13;
		uVar9 = uVar9 + 1;
		lVar2 = lVar10;
	}
	lVar2 = random(0x32, lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6, (char)lVar7,
	    (char)lVar8, in_stack_fffff7b8, in_stack_fffff7bf, in_stack_fffff7cb);
	return (ulonglong)local_818[(int)lVar2] + 1;
}

void BubbleSwapItem(int param_1, int param_2)

{
	undefined4 uVar1;
	undefined4 *puVar2;
	undefined4 *puVar3;
	longlong lVar4;
	undefined4 auStack376[94];

	lVar4 = 0x2e;
	puVar2 = auStack376;
	puVar3 = (undefined4 *)(param_1 + -8);
	do {
		uVar1 = puVar3[3];
		puVar2[2] = puVar3[2];
		puVar2[3] = uVar1;
		lVar4 = lVar4 + -1;
		puVar2 = puVar2 + 2;
		puVar3 = puVar3 + 2;
	} while (lVar4 != 0);
	lVar4 = 0x2e;
	puVar2 = (undefined4 *)(param_1 + -8);
	puVar3 = (undefined4 *)(param_2 + -8);
	do {
		uVar1 = puVar3[3];
		puVar2[2] = puVar3[2];
		puVar2[3] = uVar1;
		lVar4 = lVar4 + -1;
		puVar2 = puVar2 + 2;
		puVar3 = puVar3 + 2;
	} while (lVar4 != 0);
	lVar4 = 0x2e;
	puVar2 = auStack376;
	puVar3 = (undefined4 *)(param_2 + -8);
	do {
		uVar1 = puVar2[3];
		puVar3[2] = puVar2[2];
		puVar3[3] = uVar1;
		lVar4 = lVar4 + -1;
		puVar2 = puVar2 + 2;
		puVar3 = puVar3 + 2;
	} while (lVar4 != 0);
	return;
}

void SortSmith(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = _DAT_100f1e2c;
	iVar4 = 0;
	iVar3 = _DAT_100f1e2c;
	while (*(int *)(iVar3 + 0x178) != -1) {
		iVar3 = iVar3 + 0x170;
		iVar4 = iVar4 + 1;
	}
	bVar1 = false;
	while ((0 < iVar4 && (!bVar1))) {
		bVar1 = true;
		iVar5 = 0;
		iVar3 = iVar2;
		while (iVar5 < iVar4) {
			if (*(int *)(iVar3 + 0x2d8) < *(int *)(iVar3 + 0x168)) {
				BubbleSwapItem(iVar3, iVar2 + (iVar5 + 1) * 0x170);
				bVar1 = false;
			}
			iVar3 = iVar3 + 0x170;
			iVar5 = iVar5 + 1;
		}
		iVar4 = iVar4 + -1;
	}
	return;
}

void SpawnSmith(longlong param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	ulonglong uVar4;
	longlong lVar5;
	undefined4 uVar7;
	ulonglong uVar6;
	longlong lVar8;
	undefined uVar9;
	undefined uVar11;
	longlong lVar10;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	int iVar17;
	ulonglong uVar18;
	ulonglong uVar19;
	longlong lVar20;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined1 in_stack_ffffffbb;

	puVar3 = PTR_DAT_100f1940;
	lVar16 = (longlong)param_8;
	lVar15 = (longlong)param_7;
	lVar14 = (longlong)param_6;
	lVar13 = (longlong)param_5;
	lVar12 = (longlong)param_4;
	lVar10 = (longlong)param_3;
	uVar18 = (ulonglong)_DAT_100f1e2c;
	uVar19 = ZEXT48(PTR_DAT_100f1940);
	lVar8 = 10;
	lVar5 = random(0x32, 10, param_3, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8,
	    in_stack_ffffffaf, in_stack_ffffffbb);
	lVar5 = lVar5 + 10;
	uVar6 = 0;
	iVar17 = 0;
	uVar4 = uVar18;
	while (iVar17 < (int)lVar5) {
		do {
			uVar9 = (undefined)lVar8;
			uVar11 = (undefined)lVar10;
			uVar7 = GetRndSeed((char)uVar6, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
			    (char)lVar15, (char)lVar16, in_stack_ffffffa8);
			*(undefined4 *)puVar3 = uVar7;
			SetRndSeed(*(undefined4 *)puVar3);
			lVar8 = RndSmithItem((char)param_1, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
			    (char)lVar15, (char)lVar16, in_stack_ffffffa8);
			lVar8 = lVar8 + -1;
			lVar10 = param_1;
			uVar6 = GetItemAttrs(0, (int)lVar8, param_1, (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15,
			    (char)lVar16, in_stack_ffffffa8);
		} while (140000 < *(int *)(puVar3 + 200));
		lVar10 = uVar4 - 8;
		lVar20 = 0x2e;
		lVar8 = uVar19 - 8;
		do {
			lVar8 = lVar8 + 8;
			uVar7 = ((undefined4 *)lVar8)[1];
			lVar10 = lVar10 + 8;
			*(undefined4 *)lVar10 = *(undefined4 *)lVar8;
			((undefined4 *)lVar10)[1] = uVar7;
			lVar20 = lVar20 + -1;
		} while (lVar20 != 0);
		iVar2 = (int)uVar4;
		*(ushort *)(iVar2 + 4) = (ushort)param_1 | 0x400;
		*(undefined4 *)(iVar2 + 0x38) = 1;
		uVar6 = StoreStatOk(iVar2);
		*(undefined4 *)(iVar2 + 0x164) = (int)uVar6;
		uVar4 = uVar4 + 0x170;
		iVar17 = iVar17 + 1;
	}
	lVar8 = uVar18 + lVar5 * 0x170;
	uVar11 = (undefined)lVar8;
	uVar6 = 0x14 - lVar5;
	uVar9 = (undefined)uVar6;
	if ((int)lVar5 < 0x14) {
		uVar1 = (uint)uVar6 >> 3;
		uVar4 = (ulonglong)uVar1;
		if (uVar1 != 0) {
			do {
				iVar17 = (int)lVar8;
				*(undefined4 *)(iVar17 + 8) = 0xffffffff;
				*(undefined4 *)(iVar17 + 0x178) = 0xffffffff;
				*(undefined4 *)(iVar17 + 0x2e8) = 0xffffffff;
				*(undefined4 *)(iVar17 + 0x458) = 0xffffffff;
				*(undefined4 *)(iVar17 + 0x5c8) = 0xffffffff;
				*(undefined4 *)(iVar17 + 0x738) = 0xffffffff;
				*(undefined4 *)(iVar17 + 0x8a8) = 0xffffffff;
				*(undefined4 *)(iVar17 + 0xa18) = 0xffffffff;
				lVar8 = lVar8 + 0xb80;
				uVar11 = (undefined)lVar8;
				uVar4 = uVar4 - 1;
			} while (uVar4 != 0);
			uVar6 = uVar6 & 7;
			uVar9 = (undefined)uVar6;
			if (uVar6 == 0)
				goto LAB_10052828;
		}
		uVar9 = (undefined)uVar6;
		do {
			*(undefined4 *)((int)lVar8 + 8) = 0xffffffff;
			lVar8 = lVar8 + 0x170;
			uVar11 = (undefined)lVar8;
			uVar6 = uVar6 - 1;
		} while (uVar6 != 0);
	}
LAB_10052828:
	SortSmith(uVar9, 0xff, uVar11, (char)lVar12, (char)lVar13, (char)lVar14, (char)lVar15, (char)lVar16,
	    in_stack_ffffffa8);
	return;
}

ulonglong PremiumItemOk(int param_1)

{
	char cVar1;
	ulonglong uVar2;

	cVar1 = *(char *)(param_1 * 0x4c + 0x100fc834);
	uVar2 = (ulonglong)(cVar1 != '\0');
	if (cVar1 == '\v') {
		uVar2 = 0;
	}
	if (cVar1 == '\x0e') {
		uVar2 = 0;
	}
	if (cVar1 == '\n') {
		uVar2 = 0;
	}
	if (*PTR_DAT_100f17e0 == '\x01') {
		return uVar2;
	}
	if (cVar1 == '\f') {
		uVar2 = 0;
	}
	if (cVar1 != '\r') {
		return uVar2;
	}
	return 0;
}

longlong RndPremiumItem(char param_1, char param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	int *piVar1;
	ulonglong uVar2;
	longlong lVar3;
	ulonglong uVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	undefined8 unaff_r26;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	uint uVar9;
	undefined8 unaff_r29;
	longlong lVar10;
	int iVar11;
	undefined8 unaff_r30;
	ulonglong uVar12;
	undefined8 unaff_r31;
	undefined4 in_stack_fffff7b8;
	undefined in_stack_fffff7bf;
	undefined in_stack_fffff7cb;
	uint local_818[512];
	undefined4 local_18;
	undefined4 uStack20;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar8 = (longlong)param_8;
	lVar7 = (longlong)param_7;
	lVar6 = (longlong)param_6;
	lVar5 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	local_18 = (undefined4)((ulonglong)unaff_r26 >> 0x20);
	uStack20 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	uVar4 = ZEXT48(&DAT_100fc828);
	lVar10 = 0;
	uVar9 = 1;
	uVar12 = uVar4;
	while (uVar12 = uVar12 + 0x4c, piVar1 = (int *)uVar12, *(char *)((int)piVar1 + 5) != -1) {
		if ((((*piVar1 != 0) && (uVar2 = PremiumItemOk(uVar9), (int)uVar2 != 0)) && (param_1 <= *(char *)(piVar1 + 6))) && (*(char *)(piVar1 + 6) <= param_2)) {
			iVar11 = (int)lVar10;
			lVar10 = lVar10 + 1;
			local_818[iVar11] = uVar9;
		}
		uVar9 = uVar9 + 1;
	}
	lVar3 = random(0x32, lVar10, (char)uVar4, (char)lVar3, (char)lVar5, (char)lVar6, (char)lVar7,
	    (char)lVar8, in_stack_fffff7b8, in_stack_fffff7bf, in_stack_fffff7cb);
	return (ulonglong)local_818[(int)lVar3] + 1;
}

void SpawnOnePremium(int param_1, longlong param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined4 uVar3;
	undefined8 uVar2;
	int iVar4;
	longlong lVar5;
	ulonglong uVar6;
	undefined uVar7;
	undefined uVar9;
	undefined4 *puVar8;
	undefined uVar11;
	longlong lVar10;
	longlong lVar12;
	longlong lVar13;
	longlong lVar14;
	ulonglong unaff_r26;
	ulonglong uVar15;
	int iVar16;
	ulonglong uVar17;
	longlong lVar18;
	longlong lVar19;
	undefined4 in_stack_fffffe38;
	undefined in_stack_fffffe3f;
	undefined4 in_stack_fffffe4c;

	iVar16 = _DAT_100f1e28;
	puVar1 = PTR_DAT_100f1940;
	lVar14 = (longlong)param_8;
	lVar13 = (longlong)param_7;
	lVar12 = (longlong)param_6;
	lVar10 = (longlong)param_5;
	lVar19 = (longlong)param_4;
	uVar17 = ZEXT48(PTR_DAT_100f1940);
	lVar5 = uVar17 - 8;
	lVar18 = 0x2e;
	uVar6 = ZEXT48(register0x0000000c) - 0x1a0;
	do {
		lVar5 = lVar5 + 8;
		uVar3 = ((undefined4 *)lVar5)[1];
		uVar6 = uVar6 + 8;
		*(undefined4 *)uVar6 = *(undefined4 *)lVar5;
		((undefined4 *)uVar6)[1] = uVar3;
		lVar18 = lVar18 + -1;
	} while (lVar18 != 0);
	if (0x1e < (int)param_2) {
		param_2 = 0x1e;
	}
	if ((int)param_2 < 1) {
		param_2 = 1;
	}
	uVar2 = 0;
	uVar15 = unaff_r26 & 0xffffffff00000000 | (ulonglong)(uint)((int)param_2 >> 1);
	do {
		uVar7 = (undefined)uVar6;
		uVar9 = (undefined)lVar19;
		uVar11 = (undefined)lVar10;
		uVar3 = GetRndSeed((char)uVar2, (char)lVar5, uVar7, uVar9, uVar11, (char)lVar12, (char)lVar13,
		    (char)lVar14, in_stack_fffffe38);
		*(undefined4 *)puVar1 = uVar3;
		SetRndSeed(*(undefined4 *)puVar1);
		lVar5 = RndPremiumItem((char)((int)param_2 >> 2), (char)param_2, uVar7, uVar9, uVar11, (char)lVar12,
		    (char)lVar13, (char)lVar14, in_stack_fffffe38);
		lVar5 = lVar5 + -1;
		GetItemAttrs(0, (int)lVar5, param_2, uVar9, uVar11, (char)lVar12, (char)lVar13, (char)lVar14,
		    in_stack_fffffe38);
		lVar10 = 1;
		uVar6 = uVar15;
		lVar19 = param_2;
		uVar2 = GetItemBonus(0, (int)lVar5, uVar15, (char)param_2, 1, (char)lVar12, (char)lVar13, (char)lVar14,
		    in_stack_fffffe38, in_stack_fffffe3f, in_stack_fffffe4c);
	} while (140000 < *(int *)(puVar1 + 200));
	lVar5 = uVar17 - 8;
	iVar4 = iVar16 + param_1 * 0x170;
	lVar19 = 0x2e;
	puVar8 = (undefined4 *)(iVar4 + -8);
	do {
		lVar5 = lVar5 + 8;
		uVar3 = ((undefined4 *)lVar5)[1];
		puVar8[2] = *(undefined4 *)lVar5;
		puVar8[3] = uVar3;
		lVar19 = lVar19 + -1;
		puVar8 = puVar8 + 2;
	} while (lVar19 != 0);
	iVar16 = iVar16 + param_1 * 0x170;
	*(ushort *)(iVar16 + 4) = (ushort)param_2 | 0x800;
	*(undefined4 *)(iVar16 + 0x38) = 1;
	uVar6 = StoreStatOk(iVar4);
	*(undefined4 *)(iVar16 + 0x164) = (int)uVar6;
	lVar10 = 0x2e;
	lVar19 = uVar17 - 8;
	lVar5 = ZEXT48(register0x0000000c) - 0x1a0;
	do {
		lVar5 = lVar5 + 8;
		uVar3 = ((undefined4 *)lVar5)[1];
		lVar19 = lVar19 + 8;
		*(undefined4 *)lVar19 = *(undefined4 *)lVar5;
		((undefined4 *)lVar19)[1] = uVar3;
		lVar10 = lVar10 + -1;
	} while (lVar10 != 0);
	return;
}

void SpawnPremium(int param_1, undefined param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	undefined4 uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	longlong lVar8;
	longlong lVar9;
	longlong lVar10;
	longlong lVar11;
	int iVar12;
	uint *puVar13;
	ulonglong uVar14;
	ulonglong uVar15;
	longlong lVar16;
	undefined4 in_stack_ffffffa8;

	puVar4 = PTR_DAT_100f1e24;
	puVar3 = PTR_DAT_100f1e20;
	puVar2 = PTR_DAT_100f1e1c;
	lVar11 = (longlong)param_8;
	lVar10 = (longlong)param_7;
	lVar9 = (longlong)param_6;
	lVar8 = (longlong)param_5;
	lVar7 = (longlong)param_4;
	lVar5 = (longlong)param_3;
	uVar15 = (ulonglong)_DAT_100f1e28;
	if (*(int *)PTR_DAT_100f1e24 < 6) {
		iVar12 = 0;
		uVar14 = uVar15;
		puVar13 = (uint *)PTR_DAT_100f1e20;
		do {
			if (*(int *)((int)uVar14 + 8) == -1) {
				SpawnOnePremium(iVar12, (ulonglong) * (uint *)puVar2 + (ulonglong)*puVar13, (char)lVar5, (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, in_stack_ffffffa8);
			}
			iVar12 = iVar12 + 1;
			puVar13 = puVar13 + 1;
			uVar14 = uVar14 + 0x170;
		} while (iVar12 < 6);
		*(undefined4 *)puVar4 = 6;
	}
	while (*(int *)puVar2 < param_1) {
		lVar16 = 0x2e;
		lVar6 = uVar15 - 8;
		*(int *)puVar2 = *(int *)puVar2 + 1;
		lVar5 = uVar15 + 0x2d8;
		do {
			lVar5 = lVar5 + 8;
			uVar1 = ((undefined4 *)lVar5)[1];
			lVar6 = lVar6 + 8;
			*(undefined4 *)lVar6 = *(undefined4 *)lVar5;
			((undefined4 *)lVar6)[1] = uVar1;
			lVar16 = lVar16 + -1;
		} while (lVar16 != 0);
		lVar6 = uVar15 + 0x168;
		lVar16 = 0x2e;
		lVar5 = uVar15 + 0x448;
		do {
			lVar5 = lVar5 + 8;
			uVar1 = ((undefined4 *)lVar5)[1];
			lVar6 = lVar6 + 8;
			*(undefined4 *)lVar6 = *(undefined4 *)lVar5;
			((undefined4 *)lVar6)[1] = uVar1;
			lVar16 = lVar16 + -1;
		} while (lVar16 != 0);
		lVar6 = uVar15 + 0x2d8;
		lVar16 = 0x2e;
		lVar5 = uVar15 + 0x5b8;
		do {
			lVar5 = lVar5 + 8;
			uVar1 = ((undefined4 *)lVar5)[1];
			lVar6 = lVar6 + 8;
			*(undefined4 *)lVar6 = *(undefined4 *)lVar5;
			((undefined4 *)lVar6)[1] = uVar1;
			lVar16 = lVar16 + -1;
		} while (lVar16 != 0);
		SpawnOnePremium(3, (ulonglong) * (uint *)puVar2 + (ulonglong) * (uint *)(puVar3 + 0xc), (char)lVar6,
		    (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, in_stack_ffffffa8);
		lVar6 = uVar15 + 0x5b8;
		lVar16 = 0x2e;
		lVar5 = uVar15 + 0x728;
		do {
			lVar5 = lVar5 + 8;
			uVar1 = ((undefined4 *)lVar5)[1];
			lVar6 = lVar6 + 8;
			*(undefined4 *)lVar6 = *(undefined4 *)lVar5;
			((undefined4 *)lVar6)[1] = uVar1;
			lVar16 = lVar16 + -1;
		} while (lVar16 != 0);
		SpawnOnePremium(5, (ulonglong) * (uint *)puVar2 + (ulonglong) * (uint *)(puVar3 + 0x14), (char)lVar6,
		    (char)lVar7, (char)lVar8, (char)lVar9, (char)lVar10, (char)lVar11, in_stack_ffffffa8);
	}
	return;
}

ulonglong WitchItemOk(int param_1)

{
	int iVar1;
	int iVar2;
	ulonglong uVar3;

	param_1 = param_1 * 0x4c;
	uVar3 = (ulonglong)(*(char *)(param_1 + 0x100fc834) == '\0');
	if (*(char *)(param_1 + 0x100fc834) == '\n') {
		uVar3 = 1;
	}
	iVar1 = *(int *)(param_1 + 0x100fc860);
	if (iVar1 == 6) {
		uVar3 = 0;
	}
	if (iVar1 == 7) {
		uVar3 = 0;
	}
	iVar2 = *(int *)(param_1 + 0x100fc864);
	if (iVar2 == 7) {
		uVar3 = 0;
	}
	if (iVar1 == 2) {
		uVar3 = 0;
	}
	if (iVar1 == 3) {
		uVar3 = 0;
	}
	if ((iVar2 == 0x20) && (*PTR_DAT_100f17e0 == '\x01')) {
		uVar3 = 0;
	}
	if (iVar2 != 0x22) {
		return uVar3;
	}
	if (*PTR_DAT_100f17e0 != '\x01') {
		return uVar3;
	}
	return 0;
}

longlong RndWitchItem(char param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	ulonglong uVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	uint uVar8;
	undefined8 unaff_r29;
	longlong lVar9;
	int iVar10;
	undefined8 unaff_r30;
	int *piVar11;
	undefined8 unaff_r31;
	undefined4 in_stack_fffff7b8;
	undefined in_stack_fffff7bf;
	undefined in_stack_fffff7cb;
	uint local_818[513];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	lVar9 = 0;
	piVar11 = (int *)0x100fc874;
	uVar8 = 1;
	while (*(char *)((int)piVar11 + 5) != -1) {
		if (((*piVar11 != 0) && (uVar1 = WitchItemOk(uVar8), (int)uVar1 != 0)) && (*(char *)(piVar11 + 6) <= param_1)) {
			iVar10 = (int)lVar9;
			lVar9 = lVar9 + 1;
			local_818[iVar10] = uVar8;
		}
		piVar11 = piVar11 + 0x13;
		uVar8 = uVar8 + 1;
	}
	lVar2 = random(0x33, lVar9, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
	    (char)lVar7, in_stack_fffff7b8, in_stack_fffff7bf, in_stack_fffff7cb);
	return (ulonglong)local_818[(int)lVar2] + 1;
}

void SortWitch(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	undefined *puVar2;
	undefined *puVar3;
	int iVar4;
	int iVar5;
	undefined *puVar6;

	puVar2 = PTR_DAT_100f1e58;
	iVar4 = 3;
	puVar6 = PTR_DAT_100f1e58 + 0x450;
	puVar3 = puVar6;
	while (*(int *)(puVar3 + 0x178) != -1) {
		puVar3 = puVar3 + 0x170;
		iVar4 = iVar4 + 1;
	}
	bVar1 = false;
	while ((3 < iVar4 && (!bVar1))) {
		bVar1 = true;
		iVar5 = 3;
		puVar3 = puVar6;
		while (iVar5 < iVar4) {
			if (*(int *)(puVar3 + 0x2d8) < *(int *)(puVar3 + 0x168)) {
				BubbleSwapItem((int)puVar3, (int)(puVar2 + (iVar5 + 1) * 0x170));
				bVar1 = false;
			}
			puVar3 = puVar3 + 0x170;
			iVar5 = iVar5 + 1;
		}
		iVar4 = iVar4 + -1;
	}
	return;
}

void WitchBookLevel(int param_1)

{
	uint uVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined *puVar4;
	longlong lVar5;

	puVar3 = PTR_DAT_100f1828;
	puVar2 = PTR_DAT_100f1824;
	puVar4 = PTR_DAT_100f1e58 + param_1 * 0x170;
	if (*(int *)(puVar4 + 0xdc) != 0x18) {
		return;
	}
	puVar4[0x161] = (char)*(undefined4 *)(PTR_DAT_100f1934 + *(int *)(puVar4 + 0xe0) * 0x38 + 0x1c);
	lVar5 = (longlong)(char)puVar3[*(int *)(puVar4 + 0xe0) + *(int *)puVar2 * 0x55ec + 0xc1];
	while ((int)lVar5 != 0) {
		lVar5 = lVar5 + -1;
		puVar4[0x161] = puVar4[0x161] + (char)((int)((uint)(byte)puVar4[0x161] * 0x14) / 100);
		uVar1 = (int)((uint)(byte)puVar4[0x161] * 0x14) / 100;
		if (0xff < (int)((uint)(byte)puVar4[0x161] + uVar1 + (uVar1 >> 0x1f))) {
			puVar4[0x161] = 0xff;
			lVar5 = 0;
		}
	}
	return;
}

void SpawnWitch(ulonglong param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined4 uVar7;
	longlong lVar5;
	ulonglong uVar6;
	longlong lVar8;
	undefined uVar9;
	longlong lVar10;
	ulonglong uVar11;
	undefined uVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	ulonglong uVar19;
	ushort uVar20;
	int iVar21;
	ulonglong uVar22;
	ulonglong uVar23;
	longlong lVar24;
	undefined4 in_stack_ffffff98;
	undefined in_stack_ffffff9f;
	undefined in_stack_ffffffab;
	undefined4 in_stack_ffffffac;

	puVar4 = PTR_DAT_100f1e58;
	puVar3 = PTR_DAT_100f1940;
	lVar18 = (longlong)param_8;
	lVar17 = (longlong)param_7;
	lVar16 = (longlong)param_6;
	lVar15 = (longlong)param_5;
	uVar13 = SEXT18(param_4);
	uVar22 = ZEXT48(PTR_DAT_100f1e58);
	uVar23 = ZEXT48(PTR_DAT_100f1940);
	GetItemAttrs(0, 0x19, 1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffff98);
	lVar10 = uVar22 - 8;
	lVar24 = 0x2e;
	lVar8 = uVar23 - 8;
	do {
		lVar8 = lVar8 + 8;
		uVar7 = ((undefined4 *)lVar8)[1];
		lVar10 = lVar10 + 8;
		*(undefined4 *)lVar10 = *(undefined4 *)lVar8;
		((undefined4 *)lVar10)[1] = uVar7;
		lVar24 = lVar24 + -1;
	} while (lVar24 != 0);
	uVar20 = (ushort)param_1;
	*(ushort *)(puVar4 + 4) = uVar20;
	*(undefined4 *)(puVar4 + 0x164) = 1;
	GetItemAttrs(0, 0x1e, 1, (char)uVar13, (char)lVar15, (char)lVar16, (char)lVar17, (char)lVar18,
	    in_stack_ffffff98);
	lVar10 = uVar22 + 0x168;
	lVar24 = 0x2e;
	lVar8 = uVar23 - 8;
	do {
		lVar8 = lVar8 + 8;
		uVar7 = ((undefined4 *)lVar8)[1];
		lVar10 = lVar10 + 8;
		*(undefined4 *)lVar10 = *(undefined4 *)lVar8;
		((undefined4 *)lVar10)[1] = uVar7;
		lVar24 = lVar24 + -1;
	} while (lVar24 != 0);
	*(ushort *)(puVar4 + 0x174) = uVar20;
	*(undefined4 *)(puVar4 + 0x2d4) = 1;
	GetItemAttrs(0, 0x1b, 1, (char)uVar13, (char)lVar15, (char)lVar16, (char)lVar17, (char)lVar18,
	    in_stack_ffffff98);
	uVar11 = uVar22 + 0x2d8;
	lVar10 = 0x2e;
	lVar8 = uVar23 - 8;
	do {
		lVar8 = lVar8 + 8;
		uVar7 = ((undefined4 *)lVar8)[1];
		uVar11 = uVar11 + 8;
		*(undefined4 *)uVar11 = *(undefined4 *)lVar8;
		((undefined4 *)uVar11)[1] = uVar7;
		lVar10 = lVar10 + -1;
	} while (lVar10 != 0);
	*(ushort *)(puVar4 + 0x2e4) = uVar20;
	*(undefined4 *)(puVar4 + 0x444) = 1;
	lVar8 = 8;
	lVar10 = random(0x33, 8, (char)uVar11, (char)uVar13, (char)lVar15, (char)lVar16, (char)lVar17,
	    (char)lVar18, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
	lVar10 = lVar10 + 10;
	lVar24 = uVar22 + 0x450;
	uVar6 = 0;
	uVar19 = (ulonglong)(uint)((int)param_1 << 1);
	iVar21 = 3;
	while (iVar21 < (int)lVar10) {
		do {
			uVar9 = (undefined)lVar8;
			uVar12 = (undefined)uVar11;
			uVar7 = GetRndSeed((char)uVar6, uVar9, uVar12, (char)uVar13, (char)lVar15, (char)lVar16,
			    (char)lVar17, (char)lVar18, in_stack_ffffff98);
			*(undefined4 *)puVar3 = uVar7;
			SetRndSeed(*(undefined4 *)puVar3);
			lVar5 = RndWitchItem((char)param_1, uVar9, uVar12, (char)uVar13, (char)lVar15, (char)lVar16,
			    (char)lVar17, (char)lVar18, in_stack_ffffff98);
			lVar5 = lVar5 + -1;
			uVar11 = param_1;
			GetItemAttrs(0, (int)lVar5, param_1, (char)uVar13, (char)lVar15, (char)lVar16, (char)lVar17,
			    (char)lVar18, in_stack_ffffff98);
			lVar8 = 100;
			uVar6 = random(0x33, 100, (char)uVar11, (char)uVar13, (char)lVar15, (char)lVar16, (char)lVar17, (char)lVar18, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffab);
			uVar14 = 0xffffffffffffffff;
			if ((int)uVar6 < 6) {
				uVar14 = uVar19;
			}
			if (((int)uVar14 == -1) && (*(int *)(puVar3 + 0xdc) == 0x17)) {
				uVar14 = uVar19;
			}
			if ((int)uVar14 != -1) {
				uVar11 = uVar11 & 0xffffffff00000000 | (ulonglong)(uint)((int)uVar14 >> 1);
				lVar15 = 1;
				uVar6 = GetItemBonus(0, (int)lVar5, uVar11, (char)uVar14, 1, (char)lVar16, (char)lVar17,
				    (char)lVar18, in_stack_ffffff98, in_stack_ffffff9f, in_stack_ffffffac);
				lVar8 = lVar5;
				uVar13 = uVar14;
			}
		} while (140000 < *(int *)(puVar3 + 200));
		uVar11 = lVar24 - 8;
		lVar5 = 0x2e;
		lVar8 = uVar23 - 8;
		do {
			lVar8 = lVar8 + 8;
			uVar7 = ((undefined4 *)lVar8)[1];
			uVar11 = uVar11 + 8;
			*(undefined4 *)uVar11 = *(undefined4 *)lVar8;
			((undefined4 *)uVar11)[1] = uVar7;
			lVar5 = lVar5 + -1;
		} while (lVar5 != 0);
		iVar2 = (int)lVar24;
		*(ushort *)(iVar2 + 4) = uVar20 | 0x2000;
		*(undefined4 *)(iVar2 + 0x38) = 1;
		WitchBookLevel(iVar21);
		uVar6 = StoreStatOk(iVar2);
		*(undefined4 *)(iVar2 + 0x164) = (int)uVar6;
		lVar24 = lVar24 + 0x170;
		iVar21 = iVar21 + 1;
	}
	lVar8 = uVar22 + lVar10 * 0x170;
	uVar12 = (undefined)lVar8;
	uVar22 = 0x14 - lVar10;
	uVar9 = (undefined)uVar22;
	if ((int)lVar10 < 0x14) {
		uVar1 = (uint)uVar22 >> 3;
		uVar23 = (ulonglong)uVar1;
		if (uVar1 != 0) {
			do {
				iVar21 = (int)lVar8;
				*(undefined4 *)(iVar21 + 8) = 0xffffffff;
				*(undefined4 *)(iVar21 + 0x178) = 0xffffffff;
				*(undefined4 *)(iVar21 + 0x2e8) = 0xffffffff;
				*(undefined4 *)(iVar21 + 0x458) = 0xffffffff;
				*(undefined4 *)(iVar21 + 0x5c8) = 0xffffffff;
				*(undefined4 *)(iVar21 + 0x738) = 0xffffffff;
				*(undefined4 *)(iVar21 + 0x8a8) = 0xffffffff;
				*(undefined4 *)(iVar21 + 0xa18) = 0xffffffff;
				lVar8 = lVar8 + 0xb80;
				uVar12 = (undefined)lVar8;
				uVar23 = uVar23 - 1;
			} while (uVar23 != 0);
			uVar22 = uVar22 & 7;
			uVar9 = (undefined)uVar22;
			if (uVar22 == 0)
				goto LAB_10053148;
		}
		uVar9 = (undefined)uVar22;
		do {
			*(undefined4 *)((int)lVar8 + 8) = 0xffffffff;
			lVar8 = lVar8 + 0x170;
			uVar12 = (undefined)lVar8;
			uVar22 = uVar22 - 1;
		} while (uVar22 != 0);
	}
LAB_10053148:
	SortWitch(uVar9, 0xff, uVar12, (char)uVar13, (char)lVar15, (char)lVar16, (char)lVar17, (char)lVar18,
	    in_stack_ffffff98);
	return;
}

longlong RndBoyItem(char param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	ulonglong uVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	uint uVar8;
	undefined8 unaff_r29;
	longlong lVar9;
	int iVar10;
	undefined8 unaff_r30;
	int *piVar11;
	undefined8 unaff_r31;
	undefined4 in_stack_fffff7b8;
	undefined in_stack_fffff7bf;
	undefined in_stack_fffff7cb;
	uint local_818[513];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	lVar9 = 0;
	piVar11 = (int *)0x100fc874;
	uVar8 = 1;
	while (*(char *)((int)piVar11 + 5) != -1) {
		if (((*piVar11 != 0) && (uVar1 = PremiumItemOk(uVar8), (int)uVar1 != 0)) && (*(char *)(piVar11 + 6) <= param_1)) {
			iVar10 = (int)lVar9;
			lVar9 = lVar9 + 1;
			local_818[iVar10] = uVar8;
		}
		piVar11 = piVar11 + 0x13;
		uVar8 = uVar8 + 1;
	}
	lVar2 = random(0x31, lVar9, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
	    (char)lVar7, in_stack_fffff7b8, in_stack_fffff7bf, in_stack_fffff7cb);
	return (ulonglong)local_818[(int)lVar2] + 1;
}

void SpawnBoy(longlong param_1, char param_2, char param_3, char param_4, char param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	int iVar2;
	undefined *puVar3;
	undefined *puVar4;
	undefined *puVar5;
	undefined4 uVar9;
	longlong lVar6;
	undefined8 uVar7;
	ulonglong uVar8;
	undefined uVar11;
	undefined4 *puVar10;
	undefined uVar13;
	undefined4 *puVar12;
	undefined uVar14;
	undefined uVar16;
	longlong lVar15;
	longlong lVar17;
	longlong lVar18;
	longlong lVar19;
	longlong lVar20;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined4 in_stack_ffffffbc;

	puVar5 = PTR_DAT_100f1e18;
	puVar4 = PTR_DAT_100f1e14;
	puVar3 = PTR_DAT_100f1940;
	lVar19 = (longlong)param_8;
	lVar18 = (longlong)param_7;
	lVar17 = (longlong)param_6;
	lVar15 = (longlong)param_5;
	uVar8 = SEXT18(param_4);
	lVar20 = (longlong)param_3;
	lVar6 = (longlong)param_2;
	iVar2 = (int)param_1 >> 1;
	if ((*(int *)PTR_DAT_100f1e18 < iVar2) || (*(int *)(PTR_DAT_100f1e14 + 8) == -1)) {
		uVar7 = 0;
		uVar1 = (int)param_1 << 1;
		do {
			uVar11 = (undefined)lVar6;
			uVar13 = (undefined)lVar20;
			uVar14 = (undefined)uVar8;
			uVar16 = (undefined)lVar15;
			uVar9 = GetRndSeed((char)uVar7, uVar11, uVar13, uVar14, uVar16, (char)lVar17, (char)lVar18,
			    (char)lVar19, in_stack_ffffffa8);
			*(undefined4 *)puVar3 = uVar9;
			SetRndSeed(*(undefined4 *)puVar3);
			lVar6 = RndBoyItem((char)param_1, uVar11, uVar13, uVar14, uVar16, (char)lVar17, (char)lVar18,
			    (char)lVar19, in_stack_ffffffa8);
			lVar6 = lVar6 + -1;
			GetItemAttrs(0, (int)lVar6, param_1, uVar14, uVar16, (char)lVar17, (char)lVar18, (char)lVar19,
			    in_stack_ffffffa8);
			lVar15 = 1;
			lVar20 = param_1;
			uVar8 = (ulonglong)uVar1;
			uVar7 = GetItemBonus(0, (int)lVar6, param_1, (char)uVar1, 1, (char)lVar17, (char)lVar18, (char)lVar19, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbc);
		} while (90000 < *(int *)(puVar3 + 200));
		lVar20 = 0x2e;
		puVar10 = (undefined4 *)(puVar3 + -8);
		puVar12 = (undefined4 *)(puVar4 + -8);
		do {
			uVar9 = puVar10[3];
			puVar12[2] = puVar10[2];
			puVar12[3] = uVar9;
			lVar20 = lVar20 + -1;
			puVar10 = puVar10 + 2;
			puVar12 = puVar12 + 2;
		} while (lVar20 != 0);
		*(ushort *)(puVar4 + 4) = (ushort)param_1 | 0x1000;
		*(undefined4 *)(puVar4 + 0x38) = 1;
		uVar8 = StoreStatOk((int)puVar4);
		*(int *)(puVar4 + 0x164) = (int)uVar8;
		*(int *)puVar5 = iVar2;
	}
	return;
}

undefined8 HealerItemOk(int param_1)

{
	int iVar1;
	undefined8 uVar2;

	param_1 = param_1 * 0x4c;
	uVar2 = 0;
	if (*(char *)(param_1 + 0x100fc834) != '\0') {
		return 0;
	}
	iVar1 = *(int *)(param_1 + 0x100fc860);
	if ((iVar1 == 0x15) && (*(int *)(param_1 + 0x100fc864) == 2)) {
		uVar2 = 1;
	}
	if (((iVar1 == 0x16) && (*(int *)(param_1 + 0x100fc864) == 0x20)) && (*PTR_DAT_100f17e0 != '\x01')) {
		uVar2 = 0;
	}
	if (((iVar1 == 0x16) && (*(int *)(param_1 + 0x100fc864) == 0x22)) && (*PTR_DAT_100f17e0 != '\x01')) {
		uVar2 = 1;
	}
	if (*PTR_DAT_100f17e0 == '\x01') {
		if (iVar1 == 10) {
			uVar2 = 1;
		}
		if (iVar1 == 0xb) {
			uVar2 = 1;
		}
		if (iVar1 == 0xc) {
			uVar2 = 1;
		}
		if (iVar1 == 0xd) {
			uVar2 = 1;
		}
	}
	if (iVar1 == 2) {
		uVar2 = 1;
	}
	if (iVar1 == 0x12) {
		uVar2 = 1;
	}
	if (iVar1 == 0x13) {
		uVar2 = 1;
	}
	if (iVar1 == 3) {
		uVar2 = 0;
	}
	if (iVar1 == 2) {
		uVar2 = 0;
	}
	if (iVar1 == 6) {
		uVar2 = 0;
	}
	if (iVar1 != 7) {
		return uVar2;
	}
	return 0;
}

longlong RndHealerItem(char param_1, undefined param_2, char param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	undefined8 uVar1;
	longlong lVar2;
	longlong lVar3;
	longlong lVar4;
	longlong lVar5;
	longlong lVar6;
	longlong lVar7;
	undefined8 unaff_r27;
	undefined8 unaff_r28;
	uint uVar8;
	undefined8 unaff_r29;
	longlong lVar9;
	int iVar10;
	undefined8 unaff_r30;
	int *piVar11;
	undefined8 unaff_r31;
	undefined4 in_stack_fffff7b8;
	undefined in_stack_fffff7bf;
	undefined in_stack_fffff7cb;
	uint local_818[513];
	undefined4 local_14;
	undefined4 uStack16;
	undefined4 uStack12;
	undefined4 uStack8;
	undefined4 uStack4;

	lVar7 = (longlong)param_8;
	lVar6 = (longlong)param_7;
	lVar5 = (longlong)param_6;
	lVar4 = (longlong)param_5;
	lVar3 = (longlong)param_4;
	lVar2 = (longlong)param_3;
	local_14 = (undefined4)((ulonglong)unaff_r27 >> 0x20);
	uStack16 = (undefined4)((ulonglong)unaff_r28 >> 0x20);
	uStack12 = (undefined4)((ulonglong)unaff_r29 >> 0x20);
	uStack8 = (undefined4)((ulonglong)unaff_r30 >> 0x20);
	uStack4 = (undefined4)((ulonglong)unaff_r31 >> 0x20);
	lVar9 = 0;
	piVar11 = (int *)0x100fc874;
	uVar8 = 1;
	while (*(char *)((int)piVar11 + 5) != -1) {
		if (((*piVar11 != 0) && (uVar1 = HealerItemOk(uVar8), (int)uVar1 != 0)) && (*(char *)(piVar11 + 6) <= param_1)) {
			iVar10 = (int)lVar9;
			lVar9 = lVar9 + 1;
			local_818[iVar10] = uVar8;
		}
		piVar11 = piVar11 + 0x13;
		uVar8 = uVar8 + 1;
	}
	lVar2 = random(0x32, lVar9, (char)lVar2, (char)lVar3, (char)lVar4, (char)lVar5, (char)lVar6,
	    (char)lVar7, in_stack_fffff7b8, in_stack_fffff7bf, in_stack_fffff7cb);
	return (ulonglong)local_818[(int)lVar2] + 1;
}

void SortHealer(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar2 = _DAT_100f1e10;
	iVar4 = 2;
	iVar6 = _DAT_100f1e10 + 0x2e0;
	iVar3 = iVar6;
	while (*(int *)(iVar3 + 0x178) != -1) {
		iVar3 = iVar3 + 0x170;
		iVar4 = iVar4 + 1;
	}
	bVar1 = false;
	while ((2 < iVar4 && (!bVar1))) {
		bVar1 = true;
		iVar5 = 2;
		iVar3 = iVar6;
		while (iVar5 < iVar4) {
			if (*(int *)(iVar3 + 0x2d8) < *(int *)(iVar3 + 0x168)) {
				BubbleSwapItem(iVar3, iVar2 + (iVar5 + 1) * 0x170);
				bVar1 = false;
			}
			iVar3 = iVar3 + 0x170;
			iVar5 = iVar5 + 1;
		}
		iVar4 = iVar4 + -1;
	}
	return;
}

void SpawnHealer(longlong param_1, undefined param_2, undefined param_3, char param_4, char param_5,
    char param_6, char param_7, char param_8, undefined4 param_9)

{
	char *pcVar1;
	uint uVar2;
	int iVar3;
	undefined *puVar4;
	undefined **ppuVar5;
	longlong lVar6;
	ulonglong uVar7;
	undefined4 uVar8;
	longlong lVar9;
	undefined uVar10;
	longlong lVar11;
	undefined uVar12;
	longlong lVar13;
	longlong lVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	undefined2 uVar19;
	ulonglong uVar20;
	ulonglong uVar21;
	longlong lVar22;
	longlong lVar23;
	undefined4 in_stack_ffffffa8;
	undefined in_stack_ffffffaf;
	undefined in_stack_ffffffbb;

	uVar2 = _DAT_100f1e10;
	puVar4 = PTR_DAT_100f1940;
	lVar17 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	lVar15 = (longlong)param_6;
	lVar14 = (longlong)param_5;
	lVar13 = (longlong)param_4;
	ppuVar5 = &toc;
	uVar20 = (ulonglong)_DAT_100f1e10;
	uVar21 = ZEXT48(PTR_DAT_100f1940);
	GetItemAttrs(0, 0x18, 1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffa8);
	lVar11 = uVar20 - 8;
	lVar22 = 0x2e;
	lVar9 = uVar21 - 8;
	do {
		lVar9 = lVar9 + 8;
		uVar8 = ((undefined4 *)lVar9)[1];
		lVar11 = lVar11 + 8;
		*(undefined4 *)lVar11 = *(undefined4 *)lVar9;
		((undefined4 *)lVar11)[1] = uVar8;
		lVar22 = lVar22 + -1;
	} while (lVar22 != 0);
	uVar19 = (undefined2)param_1;
	*(undefined2 *)(uVar2 + 4) = uVar19;
	*(undefined4 *)(uVar2 + 0x164) = 1;
	GetItemAttrs(0, 0x1d, 1, (char)lVar13, (char)lVar14, (char)lVar15, (char)lVar16, (char)lVar17,
	    in_stack_ffffffa8);
	lVar11 = uVar20 + 0x168;
	lVar22 = 0x2e;
	lVar9 = uVar21 - 8;
	do {
		lVar9 = lVar9 + 8;
		uVar8 = ((undefined4 *)lVar9)[1];
		lVar11 = lVar11 + 8;
		*(undefined4 *)lVar11 = *(undefined4 *)lVar9;
		((undefined4 *)lVar11)[1] = uVar8;
		lVar22 = lVar22 + -1;
	} while (lVar22 != 0);
	*(undefined2 *)(uVar2 + 0x174) = uVar19;
	pcVar1 = ppuVar5[-0x1dfc];
	*(undefined4 *)(uVar2 + 0x2d4) = 1;
	if (*pcVar1 == '\x01') {
		lVar9 = 2;
	} else {
		GetItemAttrs(0, 0x22, 1, (char)lVar13, (char)lVar14, (char)lVar15, (char)lVar16, (char)lVar17,
		    in_stack_ffffffa8);
		lVar11 = uVar20 + 0x2d8;
		lVar22 = 0x2e;
		lVar9 = uVar21 - 8;
		do {
			lVar9 = lVar9 + 8;
			uVar8 = ((undefined4 *)lVar9)[1];
			lVar11 = lVar11 + 8;
			*(undefined4 *)lVar11 = *(undefined4 *)lVar9;
			((undefined4 *)lVar11)[1] = uVar8;
			lVar22 = lVar22 + -1;
		} while (lVar22 != 0);
		*(undefined2 *)(uVar2 + 0x2e4) = uVar19;
		lVar9 = 3;
		*(undefined4 *)(uVar2 + 0x444) = 1;
	}
	lVar22 = 8;
	lVar6 = random(0x32, 8, (char)lVar11, (char)lVar13, (char)lVar14, (char)lVar15, (char)lVar16,
	    (char)lVar17, in_stack_ffffffa8, in_stack_ffffffaf, in_stack_ffffffbb);
	lVar6 = lVar6 + 10;
	uVar7 = param_1 | 0x4000;
	lVar18 = uVar20 + lVar9 * 0x170;
	uVar19 = (undefined2)uVar7;
	while (true) {
		uVar12 = (undefined)lVar11;
		uVar10 = (undefined)lVar22;
		if ((int)lVar6 <= (int)lVar9)
			break;
		uVar8 = GetRndSeed((char)uVar7, uVar10, uVar12, (char)lVar13, (char)lVar14, (char)lVar15,
		    (char)lVar16, (char)lVar17, in_stack_ffffffa8);
		*(undefined4 *)puVar4 = uVar8;
		SetRndSeed(*(undefined4 *)puVar4);
		lVar11 = RndHealerItem((char)param_1, uVar10, uVar12, (char)lVar13, (char)lVar14, (char)lVar15,
		    (char)lVar16, (char)lVar17, in_stack_ffffffa8);
		GetItemAttrs(0, (int)lVar11 + -1, param_1, (char)lVar13, (char)lVar14, (char)lVar15, (char)lVar16,
		    (char)lVar17, in_stack_ffffffa8);
		lVar11 = lVar18 + -8;
		lVar23 = 0x2e;
		lVar22 = uVar21 - 8;
		do {
			lVar22 = lVar22 + 8;
			uVar8 = ((undefined4 *)lVar22)[1];
			lVar11 = lVar11 + 8;
			*(undefined4 *)lVar11 = *(undefined4 *)lVar22;
			((undefined4 *)lVar11)[1] = uVar8;
			lVar23 = lVar23 + -1;
		} while (lVar23 != 0);
		iVar3 = (int)lVar18;
		*(undefined2 *)(iVar3 + 4) = uVar19;
		*(undefined4 *)(iVar3 + 0x38) = 1;
		uVar7 = StoreStatOk(iVar3);
		*(undefined4 *)(iVar3 + 0x164) = (int)uVar7;
		lVar18 = lVar18 + 0x170;
		lVar9 = lVar9 + 1;
	}
	lVar9 = uVar20 + lVar6 * 0x170;
	uVar12 = (undefined)lVar9;
	uVar20 = 0x14 - lVar6;
	uVar10 = (undefined)uVar20;
	if ((int)lVar6 < 0x14) {
		uVar2 = (uint)uVar20 >> 3;
		uVar21 = (ulonglong)uVar2;
		if (uVar2 != 0) {
			do {
				iVar3 = (int)lVar9;
				*(undefined4 *)(iVar3 + 8) = 0xffffffff;
				*(undefined4 *)(iVar3 + 0x178) = 0xffffffff;
				*(undefined4 *)(iVar3 + 0x2e8) = 0xffffffff;
				*(undefined4 *)(iVar3 + 0x458) = 0xffffffff;
				*(undefined4 *)(iVar3 + 0x5c8) = 0xffffffff;
				*(undefined4 *)(iVar3 + 0x738) = 0xffffffff;
				*(undefined4 *)(iVar3 + 0x8a8) = 0xffffffff;
				*(undefined4 *)(iVar3 + 0xa18) = 0xffffffff;
				lVar9 = lVar9 + 0xb80;
				uVar12 = (undefined)lVar9;
				uVar21 = uVar21 - 1;
			} while (uVar21 != 0);
			uVar20 = uVar20 & 7;
			uVar10 = (undefined)uVar20;
			if (uVar20 == 0)
				goto LAB_10053774;
		}
		uVar10 = (undefined)uVar20;
		do {
			*(undefined4 *)((int)lVar9 + 8) = 0xffffffff;
			lVar9 = lVar9 + 0x170;
			uVar12 = (undefined)lVar9;
			uVar20 = uVar20 - 1;
		} while (uVar20 != 0);
	}
LAB_10053774:
	SortHealer(uVar10, 0xff, uVar12, (char)lVar13, (char)lVar14, (char)lVar15, (char)lVar16, (char)lVar17,
	    in_stack_ffffffa8);
	return;
}

void SpawnStoreGold(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined4 uVar1;
	undefined *puVar2;
	undefined **ppuVar3;
	undefined4 *puVar4;
	undefined4 *puVar5;
	longlong lVar6;
	undefined4 in_stack_ffffffc8;

	puVar2 = PTR_DAT_100f1e5c;
	ppuVar3 = &toc;
	GetItemAttrs(0, 0, 1, param_4, param_5, param_6, param_7, param_8, in_stack_ffffffc8);
	lVar6 = 0x2e;
	puVar4 = (undefined4 *)(ppuVar3[-0x1da4] + -8);
	puVar5 = (undefined4 *)(puVar2 + -8);
	do {
		uVar1 = puVar4[3];
		puVar5[2] = puVar4[2];
		puVar5[3] = uVar1;
		lVar6 = lVar6 + -1;
		puVar4 = puVar4 + 2;
		puVar5 = puVar5 + 2;
	} while (lVar6 != 0);
	*(undefined4 *)(puVar2 + 0x164) = 1;
	return;
}

void RecreateSmithItem(int param_1, undefined4 param_2, longlong param_3, undefined4 param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	longlong lVar1;
	undefined *puVar2;
	char cVar3;
	undefined uVar4;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f1940;
	uVar4 = (undefined)param_4;
	cVar3 = (char)param_3;
	SetRndSeed(param_4);
	lVar1 = RndSmithItem((char)param_3, (undefined)param_2, cVar3, uVar4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	GetItemAttrs(param_1, (int)lVar1 + -1, param_3, uVar4, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	*(undefined4 *)(puVar2 + param_1 * 0x170) = param_4;
	puVar2 = puVar2 + param_1 * 0x170;
	*(ushort *)(puVar2 + 4) = (ushort)param_3 | 0x400;
	*(undefined4 *)(puVar2 + 0x38) = 1;
	return;
}

void RecreatePremiumItem(undefined8 param_1, undefined4 param_2, ulonglong param_3, undefined4 param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	undefined *puVar1;
	longlong lVar2;
	int iVar3;
	char cVar5;
	char cVar6;
	ulonglong uVar4;
	undefined uVar7;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;

	puVar1 = PTR_DAT_100f1940;
	cVar5 = (char)param_3;
	uVar7 = (undefined)param_4;
	cVar6 = cVar5;
	SetRndSeed(param_4);
	lVar2 = RndPremiumItem((char)((int)param_3 >> 2), cVar5, cVar6, uVar7, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	iVar3 = (int)lVar2 + -1;
	uVar4 = param_3;
	GetItemAttrs((int)param_1, iVar3, param_3, uVar7, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	GetItemBonus(param_1, iVar3, uVar4 & 0xffffffff00000000 | (ulonglong)(uint)((int)param_3 >> 1), cVar5, 1, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc);
	iVar3 = (int)param_1 * 0x170;
	*(undefined4 *)(puVar1 + iVar3) = param_4;
	puVar1 = puVar1 + iVar3;
	*(ushort *)(puVar1 + 4) = (ushort)param_3 | 0x800;
	*(undefined4 *)(puVar1 + 0x38) = 1;
	return;
}

void RecreateBoyItem(undefined8 param_1, undefined4 param_2, longlong param_3, undefined4 param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9, undefined param_10, undefined4 param_11)

{
	undefined *puVar1;
	longlong lVar2;
	int iVar3;
	char cVar4;
	undefined uVar5;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined4 in_stack_ffffffcc;

	puVar1 = PTR_DAT_100f1940;
	uVar5 = (undefined)param_4;
	cVar4 = (char)param_3;
	SetRndSeed(param_4);
	lVar2 = RndBoyItem((char)param_3, (undefined)param_2, cVar4, uVar5, param_5, param_6, param_7, param_8,
	    in_stack_ffffffb8);
	iVar3 = (int)lVar2 + -1;
	GetItemAttrs((int)param_1, iVar3, param_3, uVar5, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	GetItemBonus(param_1, iVar3, param_3, (char)((int)param_3 << 1), 1, param_6, param_7, param_8,
	    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcc);
	iVar3 = (int)param_1 * 0x170;
	*(undefined4 *)(puVar1 + iVar3) = param_4;
	puVar1 = puVar1 + iVar3;
	*(ushort *)(puVar1 + 4) = (ushort)param_3 | 0x1000;
	*(undefined4 *)(puVar1 + 0x38) = 1;
	return;
}

void RecreateWitchItem(undefined8 param_1, int param_2, ulonglong param_3, undefined4 param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	int iVar3;
	longlong lVar2;
	undefined uVar5;
	int iVar4;
	char cVar7;
	ulonglong uVar6;
	undefined uVar8;
	int iVar9;
	undefined4 in_stack_ffffffb8;
	undefined in_stack_ffffffbf;
	undefined in_stack_ffffffcb;
	undefined4 in_stack_ffffffcc;

	puVar1 = PTR_DAT_100f1940;
	uVar8 = (undefined)param_4;
	uVar5 = (undefined)param_2;
	iVar3 = (int)param_1;
	if (((param_2 == 0x19) || (param_2 == 0x1e)) || (param_2 == 0x1b)) {
		GetItemAttrs(iVar3, param_2, param_3, uVar8, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	} else {
		cVar7 = (char)param_3;
		SetRndSeed(param_4);
		lVar2 = RndWitchItem((char)param_3, uVar5, cVar7, uVar8, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		iVar4 = (int)lVar2 + -1;
		uVar6 = param_3;
		GetItemAttrs(iVar3, iVar4, param_3, uVar8, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
		iVar9 = -1;
		lVar2 = random(0x33, 100, (char)uVar6, uVar8, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8, in_stack_ffffffbf, in_stack_ffffffcb);
		if ((int)lVar2 < 6) {
			iVar9 = (int)param_3 << 1;
		}
		if ((iVar9 == -1) && (*(int *)(puVar1 + iVar3 * 0x170 + 0xdc) == 0x17)) {
			iVar9 = (int)param_3 << 1;
		}
		if (iVar9 != -1) {
			GetItemBonus(param_1, iVar4, uVar6 & 0xffffffff00000000 | (ulonglong)(uint)(iVar9 >> 1),
			    (char)iVar9, 1, param_6, param_7, param_8, in_stack_ffffffb8, in_stack_ffffffbf,
			    in_stack_ffffffcc);
		}
	}
	*(undefined4 *)(puVar1 + iVar3 * 0x170) = param_4;
	*(ushort *)(puVar1 + iVar3 * 0x170 + 4) = (ushort)param_3 | 0x2000;
	*(undefined4 *)(puVar1 + iVar3 * 0x170 + 0x38) = 1;
	return;
}

void RecreateHealerItem(int param_1, int param_2, longlong param_3, undefined4 param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	longlong lVar1;
	undefined *puVar2;
	undefined uVar3;
	char cVar4;
	undefined uVar5;
	undefined4 in_stack_ffffffb8;

	puVar2 = PTR_DAT_100f1940;
	uVar5 = (undefined)param_4;
	uVar3 = (undefined)param_2;
	if (((param_2 == 0x18) || (param_2 == 0x1d)) || (param_2 == 0x22)) {
		GetItemAttrs(param_1, param_2, param_3, uVar5, param_5, param_6, param_7, param_8, in_stack_ffffffb8);
	} else {
		cVar4 = (char)param_3;
		SetRndSeed(param_4);
		lVar1 = RndHealerItem((char)param_3, uVar3, cVar4, uVar5, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
		GetItemAttrs(param_1, (int)lVar1 + -1, param_3, uVar5, param_5, param_6, param_7, param_8,
		    in_stack_ffffffb8);
	}
	*(undefined4 *)(puVar2 + param_1 * 0x170) = param_4;
	puVar2 = puVar2 + param_1 * 0x170;
	*(ushort *)(puVar2 + 4) = (ushort)param_3 | 0x4000;
	*(undefined4 *)(puVar2 + 0x38) = 1;
	return;
}

void RecreateTownItem(undefined8 param_1, int param_2, uint param_3, undefined4 param_4, undefined4 param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9,
    undefined param_10, undefined4 param_11)

{
	undefined uVar1;
	undefined4 in_stack_ffffffc8;
	undefined in_stack_ffffffcf;
	undefined4 in_stack_ffffffdc;

	uVar1 = (undefined)param_3;
	if ((param_3 & 0x400) == 0) {
		if ((param_3 & 0x800) == 0) {
			if ((param_3 & 0x1000) == 0) {
				if ((param_3 & 0x2000) == 0) {
					if ((param_3 & 0x4000) != 0) {
						RecreateHealerItem((int)param_1, param_2, (ulonglong)(param_3 & 0x3f), param_4, (undefined)param_5, uVar1, param_7, param_8, in_stack_ffffffc8);
					}
				} else {
					RecreateWitchItem(param_1, param_2, (ulonglong)(param_3 & 0x3f), param_4, (undefined)param_5, uVar1,
					    param_7, param_8, in_stack_ffffffc8);
				}
			} else {
				RecreateBoyItem(param_1, param_2, (ulonglong)(param_3 & 0x3f), param_4, (undefined)param_5, uVar1,
				    param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc);
			}
		} else {
			RecreatePremiumItem(param_1, param_2, (ulonglong)(param_3 & 0x3f), param_4, (undefined)param_5, uVar1,
			    param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc);
		}
	} else {
		RecreateSmithItem((int)param_1, param_2, (ulonglong)(param_3 & 0x3f), param_4, (undefined)param_5, uVar1,
		    param_7, param_8, in_stack_ffffffc8, in_stack_ffffffcf, in_stack_ffffffdc);
	}
	return;
}

void RecalcStoreStats(undefined param_1, undefined param_2, undefined param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	undefined *puVar1;
	ulonglong uVar2;
	ulonglong uVar3;
	int iVar4;
	int iVar5;

	puVar1 = PTR_DAT_100f1e14;
	uVar3 = ZEXT48(&toc);
	iVar4 = 0;
	iVar5 = _DAT_100f1e2c;
	do {
		if (*(int *)(iVar5 + 8) != -1) {
			uVar2 = StoreStatOk(iVar5);
			*(undefined4 *)(iVar5 + 0x164) = (int)uVar2;
		}
		iVar4 = iVar4 + 1;
		iVar5 = iVar5 + 0x170;
	} while (iVar4 < 0x14);
	iVar4 = 0;
	iVar5 = *(int *)((int)uVar3 + -0x71a8);
	do {
		if (*(int *)(iVar5 + 8) != -1) {
			uVar2 = StoreStatOk(iVar5);
			*(undefined4 *)(iVar5 + 0x164) = (int)uVar2;
		}
		iVar4 = iVar4 + 1;
		iVar5 = iVar5 + 0x170;
	} while (iVar4 < 6);
	iVar4 = 0;
	iVar5 = *(int *)((int)uVar3 + -0x7178);
	do {
		if (*(int *)(iVar5 + 8) != -1) {
			uVar2 = StoreStatOk(iVar5);
			*(undefined4 *)(iVar5 + 0x164) = (int)uVar2;
		}
		iVar4 = iVar4 + 1;
		iVar5 = iVar5 + 0x170;
	} while (iVar4 < 0x14);
	iVar4 = 0;
	iVar5 = *(int *)((int)uVar3 + -0x71c0);
	do {
		if (*(int *)(iVar5 + 8) != -1) {
			uVar3 = StoreStatOk(iVar5);
			*(undefined4 *)(iVar5 + 0x164) = (int)uVar3;
		}
		iVar4 = iVar4 + 1;
		iVar5 = iVar5 + 0x170;
	} while (iVar4 < 0x14);
	uVar3 = StoreStatOk((int)puVar1);
	*(int *)(puVar1 + 0x164) = (int)uVar3;
	return;
}

void ItemNoFlippy(void)

{
	undefined *puVar1;

	puVar1 = PTR_DAT_100f1940 + *(int *)(_DAT_100f1df0 + *_DAT_100f1dec * 4 + -4) * 0x170;
	*(undefined4 *)(puVar1 + 0x20) = *(undefined4 *)(puVar1 + 0x1c);
	*(undefined4 *)(puVar1 + 0x14) = 0;
	puVar1[0x30] = 1;
	return;
}

void CreateSpellBook(int param_1, int param_2, int param_3, int param_4, int param_5, char param_6,
    char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	undefined *puVar4;
	bool bVar5;
	undefined *puVar6;
	uint *puVar7;
	uint *puVar8;
	undefined **ppuVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	undefined uVar15;
	ulonglong uVar14;
	longlong lVar16;
	longlong lVar17;
	longlong lVar18;
	longlong lVar19;
	undefined4 in_stack_ffffff98;

	puVar8 = _DAT_100f1dec;
	puVar7 = _DAT_100f1ddc;
	puVar6 = PTR_DAT_100f17ec;
	lVar19 = (longlong)param_8;
	lVar18 = (longlong)param_7;
	lVar17 = (longlong)param_6;
	uVar15 = (undefined)param_4;
	ppuVar9 = &toc;
	bVar5 = false;
	lVar16 = (longlong)param_5;
	uVar10 = RndTypeItems('\0', 0x18, (char)param_3, uVar15, (char)param_5, param_6, param_7, param_8,
	    in_stack_ffffff98);
	if ((int)*puVar8 < 0x7f) {
		uVar1 = *puVar7;
		GetSuperItemSpace(param_1, param_2, (char)uVar1, uVar15, (char)lVar16, (char)lVar17, (char)lVar18,
		    (char)lVar19, in_stack_ffffff98);
		uVar2 = *puVar8;
		uVar14 = (ulonglong)uVar2;
		puVar3 = ppuVar9[-0x1da4];
		puVar4 = ppuVar9[-0x1c78];
		uVar12 = ZEXT48(puVar4);
		uVar13 = 0x7e - uVar14;
		uVar11 = (ulonglong)puVar7[(int)uVar13];
		*puVar7 = puVar7[(int)uVar13];
		*(uint *)(puVar4 + uVar2 * 4) = uVar1;
		do {
			uVar13 = GetRndSeed((char)uVar11, (char)uVar12, (char)uVar13, (char)uVar14, (char)lVar16,
			    (char)lVar17, (char)lVar18, (char)lVar19, in_stack_ffffff98);
			uVar14 = (ulonglong)(byte)*puVar6 << 1;
			lVar16 = 1;
			lVar17 = 1;
			lVar18 = 0;
			uVar12 = uVar10;
			lVar19 = (longlong)param_5;
			uVar11 = SetupAllItems((ulonglong)uVar1, (int)uVar10, uVar13, uVar14, 1, 1, 0, param_5,
			    in_stack_ffffff98);
			if ((*(int *)(puVar3 + uVar1 * 0x170 + 0xdc) == 0x18) && (param_3 == *(int *)(puVar3 + uVar1 * 0x170 + 0xe0))) {
				bVar5 = true;
			}
		} while (!bVar5);
		if (param_4 != 0) {
			NetSendCmdDItem(0, (ulonglong)uVar1);
		}
		if (param_5 != 0) {
			DeltaAddItem(uVar1);
		}
		*puVar8 = *puVar8 + 1;
	}
	return;
}

void CreateMagicArmor(int param_1, int param_2, char param_3, int param_4, int param_5, int param_6,
    char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	uint uVar4;
	bool bVar5;
	undefined *puVar6;
	uint *puVar7;
	uint *puVar8;
	undefined **ppuVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	ulonglong uVar18;
	undefined4 in_stack_ffffffa8;

	puVar8 = _DAT_100f1dec;
	puVar7 = _DAT_100f1ddc;
	puVar6 = PTR_DAT_100f17ec;
	lVar17 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	ppuVar9 = &toc;
	bVar5 = false;
	if ((int)*_DAT_100f1dec < 0x7f) {
		uVar1 = *_DAT_100f1ddc;
		lVar15 = (longlong)param_6;
		GetSuperItemSpace(param_1, param_2, (char)uVar1, (char)param_4, (char)param_5, (char)param_6, param_7,
		    param_8, in_stack_ffffffa8);
		uVar2 = *puVar8;
		uVar14 = (ulonglong)uVar2;
		puVar3 = ppuVar9[-0x1c78];
		uVar12 = ZEXT48(puVar3);
		uVar4 = puVar7[0x7e - uVar2];
		uVar13 = (ulonglong)uVar4;
		*puVar7 = uVar4;
		*(uint *)(puVar3 + uVar2 * 4) = uVar1;
		uVar10 = RndTypeItems(param_3, 0, (char)puVar3, (char)uVar4, (char)uVar2, (char)lVar15, (char)lVar16,
		    (char)lVar17, in_stack_ffffffa8);
		puVar3 = ppuVar9[-0x1da4];
		uVar11 = ZEXT48(puVar3);
		uVar18 = uVar10;
		do {
			uVar12 = GetRndSeed((char)uVar10, (char)uVar11, (char)uVar12, (char)uVar13, (char)uVar14,
			    (char)lVar15, (char)lVar16, (char)lVar17, in_stack_ffffffa8);
			uVar13 = (ulonglong)(byte)*puVar6 << 1;
			uVar14 = 1;
			lVar15 = 1;
			lVar16 = 0;
			uVar11 = uVar18;
			lVar17 = (longlong)param_6;
			uVar10 = SetupAllItems((ulonglong)uVar1, (int)uVar18, uVar12, uVar13, 1, 1, 0, param_6,
			    in_stack_ffffffa8);
			if (param_4 == *(int *)(puVar3 + uVar1 * 0x170 + 0xc0)) {
				bVar5 = true;
			} else {
				uVar11 = 0;
				uVar10 = RndTypeItems(param_3, 0, (char)uVar12, (char)uVar13, (char)uVar14, (char)lVar15,
				    (char)lVar16, (char)lVar17, in_stack_ffffffa8);
				uVar18 = uVar10;
			}
		} while (!bVar5);
		if (param_5 != 0) {
			NetSendCmdDItem(0, (ulonglong)uVar1);
		}
		if (param_6 != 0) {
			DeltaAddItem(uVar1);
		}
		*puVar8 = *puVar8 + 1;
	}
	return;
}

void CreateMagicWeapon(int param_1, int param_2, char param_3, int param_4, int param_5, int param_6,
    char param_7, char param_8, undefined4 param_9)

{
	uint uVar1;
	uint uVar2;
	undefined *puVar3;
	uint uVar4;
	bool bVar5;
	undefined *puVar6;
	uint *puVar7;
	uint *puVar8;
	undefined **ppuVar9;
	ulonglong uVar10;
	ulonglong uVar11;
	ulonglong uVar12;
	ulonglong uVar13;
	ulonglong uVar14;
	longlong lVar15;
	longlong lVar16;
	longlong lVar17;
	ulonglong uVar18;
	undefined4 in_stack_ffffffa8;

	puVar8 = _DAT_100f1dec;
	puVar7 = _DAT_100f1ddc;
	puVar6 = PTR_DAT_100f17ec;
	lVar17 = (longlong)param_8;
	lVar16 = (longlong)param_7;
	ppuVar9 = &toc;
	bVar5 = false;
	if ((int)*_DAT_100f1dec < 0x7f) {
		uVar1 = *_DAT_100f1ddc;
		lVar15 = (longlong)param_6;
		GetSuperItemSpace(param_1, param_2, (char)uVar1, (char)param_4, (char)param_5, (char)param_6, param_7,
		    param_8, in_stack_ffffffa8);
		uVar2 = *puVar8;
		uVar14 = (ulonglong)uVar2;
		puVar3 = ppuVar9[-0x1c78];
		uVar12 = ZEXT48(puVar3);
		uVar4 = puVar7[0x7e - uVar2];
		uVar13 = (ulonglong)uVar4;
		*puVar7 = uVar4;
		*(uint *)(puVar3 + uVar2 * 4) = uVar1;
		uVar10 = RndTypeItems(param_3, 0, (char)puVar3, (char)uVar4, (char)uVar2, (char)lVar15, (char)lVar16,
		    (char)lVar17, in_stack_ffffffa8);
		puVar3 = ppuVar9[-0x1da4];
		uVar11 = ZEXT48(puVar3);
		uVar18 = uVar10;
		do {
			uVar12 = GetRndSeed((char)uVar10, (char)uVar11, (char)uVar12, (char)uVar13, (char)uVar14,
			    (char)lVar15, (char)lVar16, (char)lVar17, in_stack_ffffffa8);
			uVar13 = (ulonglong)(byte)*puVar6 << 1;
			uVar14 = 1;
			lVar15 = 1;
			lVar16 = 0;
			uVar11 = uVar18;
			lVar17 = (longlong)param_6;
			uVar10 = SetupAllItems((ulonglong)uVar1, (int)uVar18, uVar12, uVar13, 1, 1, 0, param_6,
			    in_stack_ffffffa8);
			if (param_4 == *(int *)(puVar3 + uVar1 * 0x170 + 0xc0)) {
				bVar5 = true;
			} else {
				uVar11 = 0;
				uVar10 = RndTypeItems(param_3, 0, (char)uVar12, (char)uVar13, (char)uVar14, (char)lVar15,
				    (char)lVar16, (char)lVar17, in_stack_ffffffa8);
				uVar18 = uVar10;
			}
		} while (!bVar5);
		if (param_5 != 0) {
			NetSendCmdDItem(0, (ulonglong)uVar1);
		}
		if (param_6 != 0) {
			DeltaAddItem(uVar1);
		}
		*puVar8 = *puVar8 + 1;
	}
	return;
}

void NextItemRecord(int param_1)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;

	puVar3 = PTR_DAT_100f1e0c;
	puVar2 = PTR_DAT_100f1e08;
	*(int *)PTR_DAT_100f1e0c = *(int *)PTR_DAT_100f1e0c + -1;
	if (*(int *)puVar3 == 0) {
		return;
	}
	iVar1 = *(int *)puVar3 * 0x10;
	param_1 = param_1 * 0x10;
	*(undefined4 *)(puVar2 + 8 + param_1) = *(undefined4 *)(puVar2 + 8 + iVar1);
	*(undefined4 *)(puVar2 + param_1) = *(undefined4 *)(puVar2 + iVar1);
	*(undefined2 *)(puVar2 + 4 + param_1) = *(undefined2 *)(puVar2 + 4 + iVar1);
	*(undefined4 *)(puVar2 + 0xc + param_1) = *(undefined4 *)(puVar2 + 0xc + iVar1);
	return;
}

undefined8
GetItemRecord(int param_1, short param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	longlong lVar3;
	int *piVar4;
	int iVar5;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	puVar2 = PTR_DAT_100f1e0c;
	puVar1 = PTR_DAT_100f1e08;
	lVar3 = GetTickCount((char)param_1, (char)param_2, (char)param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffab, in_stack_ffffffaf, local_4c);
	iVar5 = 0;
	do {
		if (*(int *)puVar2 <= iVar5) {
			return 1;
		}
		piVar4 = (int *)(puVar1 + iVar5 * 0x10);
		if ((lVar3 - (ulonglong)(uint)piVar4[3] & 0xffffffff) < 0x1771) {
			if (((param_1 == *piVar4) && (param_2 == *(short *)(piVar4 + 1))) && (param_3 == piVar4[2])) {
				return 0;
			}
		} else {
			NextItemRecord(iVar5);
			iVar5 = iVar5 + -1;
		}
		iVar5 = iVar5 + 1;
	} while (true);
}

void SetItemRecord(undefined4 param_1, undefined2 param_2, undefined4 param_3, undefined param_4,
    undefined param_5, undefined param_6, undefined param_7, undefined param_8,
    undefined4 param_9)

{
	int iVar1;
	undefined *puVar2;
	undefined *puVar3;
	undefined4 uVar4;
	undefined *puVar5;
	undefined in_stack_ffffffbb;
	undefined in_stack_ffffffbf;
	undefined4 local_3c;

	puVar3 = PTR_DAT_100f1e0c;
	puVar2 = PTR_DAT_100f1e08;
	uVar4 = GetTickCount((char)param_1, (char)param_2, (char)param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffbb, in_stack_ffffffbf, local_3c);
	if (*(int *)puVar3 != 0x7f) {
		iVar1 = *(int *)puVar3 * 0x10;
		puVar5 = puVar2 + iVar1;
		*(undefined4 *)(puVar5 + 0xc) = uVar4;
		*(undefined4 *)(puVar2 + iVar1) = param_1;
		*(undefined2 *)(puVar5 + 4) = param_2;
		*(undefined4 *)(puVar5 + 8) = param_3;
		*(int *)puVar3 = *(int *)puVar3 + 1;
	}
	return;
}

void PutItemRecord(int param_1, short param_2, int param_3, undefined param_4, undefined param_5,
    undefined param_6, undefined param_7, undefined param_8, undefined4 param_9)

{
	undefined *puVar1;
	undefined *puVar2;
	longlong lVar3;
	int *piVar4;
	int iVar5;
	undefined in_stack_ffffffab;
	undefined in_stack_ffffffaf;
	undefined4 local_4c;

	puVar2 = PTR_DAT_100f1e0c;
	puVar1 = PTR_DAT_100f1e08;
	lVar3 = GetTickCount((char)param_1, (char)param_2, (char)param_3, param_4, param_5, param_6, param_7,
	    param_8, in_stack_ffffffab, in_stack_ffffffaf, local_4c);
	iVar5 = 0;
	do {
		if (*(int *)puVar2 <= iVar5) {
			return;
		}
		piVar4 = (int *)(puVar1 + iVar5 * 0x10);
		if ((lVar3 - (ulonglong)(uint)piVar4[3] & 0xffffffff) < 0x1771) {
			if (((param_1 == *piVar4) && (param_2 == *(short *)(piVar4 + 1))) && (param_3 == piVar4[2])) {
				NextItemRecord(iVar5);
				return;
			}
		} else {
			NextItemRecord(iVar5);
			iVar5 = iVar5 + -1;
		}
		iVar5 = iVar5 + 1;
	} while (true);
}
